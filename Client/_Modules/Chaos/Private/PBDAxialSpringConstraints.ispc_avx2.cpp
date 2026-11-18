// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplyAxialSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuni_avx2 @ 14000b6f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auVar4 [32];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  int iVar15;
  int iVar18;
  int iVar19;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar33;
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar34 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  float fVar42;
  float fVar43;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  int iVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  float fVar65;
  int iVar66;
  float fVar67;
  float fVar72;
  float fVar74;
  float fVar76;
  float fVar78;
  float fVar80;
  float fVar82;
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  float fVar84;
  undefined1 auVar70 [32];
  float fVar73;
  float fVar75;
  float fVar77;
  float fVar79;
  float fVar81;
  float fVar83;
  float fVar85;
  undefined1 auVar71 [32];
  float fVar86;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  float fVar92;
  float fVar94;
  float fVar96;
  float fVar98;
  float fVar102;
  uint uVar103;
  float fVar104;
  undefined1 auVar99 [16];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  uint uVar91;
  uint uVar93;
  uint uVar95;
  uint uVar97;
  float fVar100;
  uint uVar101;
  undefined1 in_ZMM6 [64];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  float fVar107;
  float fVar108;
  float fVar114;
  uint uVar115;
  float fVar117;
  float fVar118;
  float fVar120;
  float fVar121;
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  float fVar116;
  float fVar119;
  float fVar122;
  undefined1 auVar113 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 in_ZMM9 [64];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  float fVar131;
  undefined1 auVar132 [16];
  float fVar136;
  float fVar137;
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar138 [32];
  float fVar139;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  float fVar151;
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  float fVar155;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  float fVar164;
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  int local_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  int iStack_410;
  int iStack_40c;
  int iStack_408;
  int iStack_404;
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  int local_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
  int iStack_2e4;
  int iVar16;
  int iVar17;
  int iVar20;
  undefined1 auVar30 [32];
  undefined1 auVar54 [32];
  undefined1 auVar135 [32];
  
  uVar8 = __real_0000000c;
  uVar7 = __real_00000008;
  uVar6 = __real_00000004;
  uVar5 = __real_40000000;
  fVar21 = __real_3f800000;
  uVar2 = __real_322bcc77;
  uVar11 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar11 = param_6;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar9 = 0;
  }
  else {
    pauVar14 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar9 = 0;
    uVar115 = 0;
    do {
      auVar37 = pauVar14[-1];
      auVar4 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar37);
      auVar51 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            pauVar14[-2]);
      auVar51 = vpblendd_avx2(auVar51,auVar4,0x88);
      auVar4 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar37);
      auVar124 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*pauVar14);
      auVar124 = vpblendd_avx2(auVar124,auVar4,0x13);
      auVar4 = vperm2i128_avx2(auVar51,auVar124,0x31);
      auVar109 = vpslld_avx2(auVar4,4);
      auVar4 = vpcmpeqd_avx2(auVar4,auVar4);
      auVar156 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
      auVar153._4_4_ = uVar6;
      auVar153._0_4_ = uVar6;
      auVar153._8_4_ = uVar6;
      auVar153._12_4_ = uVar6;
      auVar153._16_4_ = uVar6;
      auVar153._20_4_ = uVar6;
      auVar153._24_4_ = uVar6;
      auVar153._28_4_ = uVar6;
      auVar4 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
      auVar105 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
      auVar142._4_4_ = uVar7;
      auVar142._0_4_ = uVar7;
      auVar142._8_4_ = uVar7;
      auVar142._12_4_ = uVar7;
      auVar142._16_4_ = uVar7;
      auVar142._20_4_ = uVar7;
      auVar142._24_4_ = uVar7;
      auVar142._28_4_ = uVar7;
      auVar4 = vpcmpeqd_avx2(in_ZMM9._0_32_,in_ZMM9._0_32_);
      auVar127 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
      auVar4 = vpblendd_avx2(auVar37,pauVar14[-2],0x24);
      auVar133._4_4_ = uVar8;
      auVar133._0_4_ = uVar8;
      auVar133._8_4_ = uVar8;
      auVar133._12_4_ = uVar8;
      auVar133._16_4_ = uVar8;
      auVar133._20_4_ = uVar8;
      auVar133._24_4_ = uVar8;
      auVar133._28_4_ = uVar8;
      auVar37 = vpcmpeqd_avx2(auVar109 | auVar142,auVar109 | auVar142);
      auVar123 = vgatherdps(ZEXT832(0),auVar37);
      in_ZMM9 = ZEXT3264(auVar123);
      auVar4 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar4);
      auVar35._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar35._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar37 = vpermd_avx2(auVar35,*pauVar14);
      auVar37 = vpblendd_avx2(auVar4,auVar37,0xe0);
      auVar35 = vpslld_avx2(auVar37,4);
      auVar37 = vpcmpeqd_avx2(auVar37,auVar37);
      auVar68 = vgatherdps(ZEXT832(0) << 0x20,auVar37);
      auVar37 = vpcmpeqd_avx2(auVar4,auVar4);
      auVar110 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar37);
      auVar37 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar87 = vgatherdps(ZEXT832(0),auVar37);
      auVar37 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar152 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar37);
      auVar24._16_16_ = ZEXT116(0) * auVar51._16_16_ | ZEXT116(1) * auVar124._0_16_;
      auVar24._0_16_ = ZEXT116(0) * auVar124._0_16_ | ZEXT116(1) * auVar51._0_16_;
      auVar36 = vpslld_avx2(auVar24,4);
      vpor_avx2(auVar153,auVar36);
      auVar37 = vpcmpeqd_avx2(auVar124,auVar124);
      auVar64 = vgatherdps(ZEXT832(0),auVar37);
      vpor_avx2(auVar142,auVar36);
      auVar37 = vpcmpeqd_avx2(auVar133 | auVar35,auVar133 | auVar35);
      auVar106 = vgatherdps(ZEXT832(0) << 0x20,auVar37);
      vpor_avx2(auVar133,auVar36);
      auVar37 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar138 = vgatherdps(ZEXT832(0) << 0x20,auVar37);
      auVar37 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar24 = vgatherdps(ZEXT832(0) << 0x20,auVar37);
      auVar37 = *(undefined1 (*) [32])(param_3 + (ulonglong)uVar115);
      auVar4 = vsubps_avx(auVar156,auVar68);
      fVar48 = auVar37._0_4_;
      auVar63._0_4_ = fVar48 * auVar4._0_4_ + auVar68._0_4_;
      fVar55 = auVar37._4_4_;
      auVar63._4_4_ = fVar55 * auVar4._4_4_ + auVar68._4_4_;
      fVar57 = auVar37._8_4_;
      auVar63._8_4_ = fVar57 * auVar4._8_4_ + auVar68._8_4_;
      fVar58 = auVar37._12_4_;
      auVar63._12_4_ = fVar58 * auVar4._12_4_ + auVar68._12_4_;
      fVar59 = auVar37._16_4_;
      auVar63._16_4_ = fVar59 * auVar4._16_4_ + auVar68._16_4_;
      fVar60 = auVar37._20_4_;
      auVar63._20_4_ = fVar60 * auVar4._20_4_ + auVar68._20_4_;
      fVar61 = auVar37._24_4_;
      auVar63._24_4_ = fVar61 * auVar4._24_4_ + auVar68._24_4_;
      fVar62 = auVar37._28_4_;
      auVar63._28_4_ = fVar62 * auVar4._28_4_ + auVar68._28_4_;
      auVar4 = vsubps_avx(auVar105,auVar110);
      fVar77 = auVar110._0_4_;
      auVar69._0_4_ = fVar48 * auVar4._0_4_ + fVar77;
      fVar81 = auVar110._4_4_;
      auVar69._4_4_ = fVar55 * auVar4._4_4_ + fVar81;
      fVar85 = auVar110._8_4_;
      auVar69._8_4_ = fVar57 * auVar4._8_4_ + fVar85;
      fVar108 = auVar110._12_4_;
      auVar69._12_4_ = fVar58 * auVar4._12_4_ + fVar108;
      fVar116 = auVar110._16_4_;
      auVar69._16_4_ = fVar59 * auVar4._16_4_ + fVar116;
      fVar118 = auVar110._20_4_;
      auVar69._20_4_ = fVar60 * auVar4._20_4_ + fVar118;
      fVar120 = auVar110._24_4_;
      auVar69._24_4_ = fVar61 * auVar4._24_4_ + fVar120;
      fVar122 = auVar110._28_4_;
      auVar69._28_4_ = fVar62 * auVar4._28_4_ + fVar122;
      auVar4 = vsubps_avx(auVar127,auVar87);
      fVar42 = auVar87._0_4_;
      auVar140._0_4_ = fVar48 * auVar4._0_4_ + fVar42;
      fVar43 = auVar87._4_4_;
      auVar140._4_4_ = fVar55 * auVar4._4_4_ + fVar43;
      fVar44 = auVar87._8_4_;
      auVar140._8_4_ = fVar57 * auVar4._8_4_ + fVar44;
      fVar45 = auVar87._12_4_;
      auVar140._12_4_ = fVar58 * auVar4._12_4_ + fVar45;
      fVar46 = auVar87._16_4_;
      auVar140._16_4_ = fVar59 * auVar4._16_4_ + fVar46;
      fVar67 = auVar87._20_4_;
      auVar140._20_4_ = fVar60 * auVar4._20_4_ + fVar67;
      fVar73 = auVar87._24_4_;
      auVar140._24_4_ = fVar61 * auVar4._24_4_ + fVar73;
      fVar75 = auVar87._28_4_;
      auVar140._28_4_ = fVar62 * auVar4._28_4_ + fVar75;
      auVar4 = vsubps_avx(auVar24,auVar63);
      auVar51 = vsubps_avx(auVar64,auVar69);
      auVar124 = vsubps_avx(auVar106,auVar140);
      auVar39._0_4_ =
           auVar124._0_4_ * auVar124._0_4_ +
           auVar4._0_4_ * auVar4._0_4_ + auVar51._0_4_ * auVar51._0_4_;
      auVar39._4_4_ =
           auVar124._4_4_ * auVar124._4_4_ +
           auVar4._4_4_ * auVar4._4_4_ + auVar51._4_4_ * auVar51._4_4_;
      auVar39._8_4_ =
           auVar124._8_4_ * auVar124._8_4_ +
           auVar4._8_4_ * auVar4._8_4_ + auVar51._8_4_ * auVar51._8_4_;
      auVar39._12_4_ =
           auVar124._12_4_ * auVar124._12_4_ +
           auVar4._12_4_ * auVar4._12_4_ + auVar51._12_4_ * auVar51._12_4_;
      auVar39._16_4_ =
           auVar124._16_4_ * auVar124._16_4_ +
           auVar4._16_4_ * auVar4._16_4_ + auVar51._16_4_ * auVar51._16_4_;
      auVar39._20_4_ =
           auVar124._20_4_ * auVar124._20_4_ +
           auVar4._20_4_ * auVar4._20_4_ + auVar51._20_4_ * auVar51._20_4_;
      auVar39._24_4_ =
           auVar124._24_4_ * auVar124._24_4_ +
           auVar4._24_4_ * auVar4._24_4_ + auVar51._24_4_ * auVar51._24_4_;
      auVar39._28_4_ =
           auVar124._28_4_ * auVar124._28_4_ +
           auVar4._28_4_ * auVar4._28_4_ + auVar51._28_4_ * auVar51._28_4_;
      auVar142 = vsqrtps_avx(auVar39);
      auVar4 = vdivps_avx(auVar4,auVar142);
      auVar51 = vdivps_avx(auVar51,auVar142);
      auVar124 = vdivps_avx(auVar124,auVar142);
      auVar87 = vsubps_avx(auVar142,*(undefined1 (*) [32])(param_4 + (ulonglong)uVar115));
      fVar86 = auVar87._0_4_;
      fVar92 = auVar87._4_4_;
      fVar94 = auVar87._8_4_;
      fVar96 = auVar87._12_4_;
      fVar98 = auVar87._16_4_;
      fVar100 = auVar87._20_4_;
      fVar102 = auVar87._24_4_;
      fVar104 = auVar87._28_4_;
      auVar87._4_4_ = fVar21;
      auVar87._0_4_ = fVar21;
      auVar87._8_4_ = fVar21;
      auVar87._12_4_ = fVar21;
      auVar87._16_4_ = fVar21;
      auVar87._20_4_ = fVar21;
      auVar87._24_4_ = fVar21;
      auVar87._28_4_ = fVar21;
      auVar153 = vsubps_avx(auVar87,auVar37);
      fVar33 = auVar152._0_4_;
      fVar3 = auVar152._16_4_;
      fVar136 = auVar123._0_4_;
      auVar141._0_4_ = fVar48 * fVar136 + auVar153._0_4_ * fVar33;
      auVar141._4_4_ = fVar55 * auVar123._4_4_ + auVar153._4_4_ * auVar152._4_4_;
      auVar141._8_4_ = fVar57 * auVar123._8_4_ + auVar153._8_4_ * auVar152._8_4_;
      auVar141._12_4_ = fVar58 * auVar123._12_4_ + auVar153._12_4_ * auVar152._12_4_;
      fVar137 = auVar123._16_4_;
      auVar141._16_4_ = fVar59 * fVar137 + auVar153._16_4_ * fVar3;
      auVar141._20_4_ = fVar60 * auVar123._20_4_ + auVar153._20_4_ * auVar152._20_4_;
      auVar141._24_4_ = fVar61 * auVar123._24_4_ + auVar153._24_4_ * auVar152._24_4_;
      auVar141._28_4_ = fVar62 * auVar123._28_4_ + auVar153._28_4_ * auVar152._28_4_;
      auVar110._0_4_ = param_5 * auVar4._0_4_ * fVar86;
      auVar110._4_4_ = param_5 * auVar4._4_4_ * fVar92;
      auVar110._8_4_ = param_5 * auVar4._8_4_ * fVar94;
      auVar110._12_4_ = param_5 * auVar4._12_4_ * fVar96;
      auVar110._16_4_ = param_5 * auVar4._16_4_ * fVar98;
      auVar110._20_4_ = param_5 * auVar4._20_4_ * fVar100;
      auVar110._24_4_ = param_5 * auVar4._24_4_ * fVar102;
      auVar110._28_4_ = param_5 * auVar4._28_4_ * fVar104;
      fVar49 = auVar138._0_4_;
      auVar157._0_4_ = auVar141._0_4_ + fVar49;
      auVar157._4_4_ = auVar141._4_4_ + auVar138._4_4_;
      auVar157._8_4_ = auVar141._8_4_ + auVar138._8_4_;
      auVar157._12_4_ = auVar141._12_4_ + auVar138._12_4_;
      fVar56 = auVar138._16_4_;
      auVar157._16_4_ = auVar141._16_4_ + fVar56;
      auVar157._20_4_ = auVar141._20_4_ + auVar138._20_4_;
      auVar157._24_4_ = auVar141._24_4_ + auVar138._24_4_;
      auVar157._28_4_ = auVar141._28_4_ + auVar138._28_4_;
      auVar87 = vdivps_avx(auVar110,auVar157);
      auVar38._0_4_ = param_5 * auVar51._0_4_ * fVar86;
      auVar38._4_4_ = param_5 * auVar51._4_4_ * fVar92;
      auVar38._8_4_ = param_5 * auVar51._8_4_ * fVar94;
      auVar38._12_4_ = param_5 * auVar51._12_4_ * fVar96;
      auVar38._16_4_ = param_5 * auVar51._16_4_ * fVar98;
      auVar38._20_4_ = param_5 * auVar51._20_4_ * fVar100;
      auVar38._24_4_ = param_5 * auVar51._24_4_ * fVar102;
      auVar38._28_4_ = param_5 * auVar51._28_4_ * fVar104;
      auVar133 = vdivps_avx(auVar38,auVar157);
      auVar51._0_4_ = param_5 * auVar124._0_4_ * fVar86;
      auVar51._4_4_ = param_5 * auVar124._4_4_ * fVar92;
      auVar51._8_4_ = param_5 * auVar124._8_4_ * fVar94;
      auVar51._12_4_ = param_5 * auVar124._12_4_ * fVar96;
      auVar51._16_4_ = param_5 * auVar124._16_4_ * fVar98;
      auVar51._20_4_ = param_5 * auVar124._20_4_ * fVar100;
      auVar51._24_4_ = param_5 * auVar124._24_4_ * fVar102;
      auVar51._28_4_ = param_5 * auVar124._28_4_ * fVar104;
      auVar124 = vdivps_avx(auVar51,auVar157);
      auVar4 = vcmpps_avx(auVar141,ZEXT832(0) << 0x20,0);
      auVar51 = vcmpps_avx(auVar138,ZEXT832(0) << 0x20,0);
      auVar88._0_4_ = auVar51._0_4_ & auVar4._0_4_;
      auVar88._4_4_ = auVar51._4_4_ & auVar4._4_4_;
      auVar88._8_4_ = auVar51._8_4_ & auVar4._8_4_;
      auVar88._12_4_ = auVar51._12_4_ & auVar4._12_4_;
      auVar88._16_4_ = auVar51._16_4_ & auVar4._16_4_;
      auVar88._20_4_ = auVar51._20_4_ & auVar4._20_4_;
      auVar88._24_4_ = auVar51._24_4_ & auVar4._24_4_;
      auVar88._28_4_ = auVar51._28_4_ & auVar4._28_4_;
      auVar4._4_4_ = uVar2;
      auVar4._0_4_ = uVar2;
      auVar4._8_4_ = uVar2;
      auVar4._12_4_ = uVar2;
      auVar4._16_4_ = uVar2;
      auVar4._20_4_ = uVar2;
      auVar4._24_4_ = uVar2;
      auVar4._28_4_ = uVar2;
      auVar4 = vcmpps_avx(auVar142,auVar4,2);
      auVar88 = auVar88 | auVar4;
      uVar13 = auVar88._0_4_;
      fVar139 = (float)(~uVar13 & auVar87._0_4_);
      uVar91 = auVar88._4_4_;
      fVar145 = (float)(~uVar91 & auVar87._4_4_);
      uVar93 = auVar88._8_4_;
      fVar146 = (float)(~uVar93 & auVar87._8_4_);
      uVar95 = auVar88._12_4_;
      fVar147 = (float)(~uVar95 & auVar87._12_4_);
      uVar97 = auVar88._16_4_;
      fVar148 = (float)(~uVar97 & auVar87._16_4_);
      uVar10 = auVar88._20_4_;
      fVar149 = (float)(~uVar10 & auVar87._20_4_);
      uVar101 = auVar88._24_4_;
      fVar150 = (float)(~uVar101 & auVar87._24_4_);
      uVar103 = auVar88._28_4_;
      fVar151 = (float)(~uVar103 & auVar87._28_4_);
      fVar155 = (float)(~uVar13 & auVar133._0_4_);
      fVar158 = (float)(~uVar91 & auVar133._4_4_);
      fVar159 = (float)(~uVar93 & auVar133._8_4_);
      fVar160 = (float)(~uVar95 & auVar133._12_4_);
      fVar161 = (float)(~uVar97 & auVar133._16_4_);
      fVar162 = (float)(~uVar10 & auVar133._20_4_);
      fVar163 = (float)(~uVar101 & auVar133._24_4_);
      fVar164 = (float)(~uVar103 & auVar133._28_4_);
      fVar86 = (float)(~uVar13 & auVar124._0_4_);
      fVar92 = (float)(~uVar91 & auVar124._4_4_);
      fVar94 = (float)(~uVar93 & auVar124._8_4_);
      fVar96 = (float)(~uVar95 & auVar124._12_4_);
      fVar98 = (float)(~uVar97 & auVar124._16_4_);
      fVar100 = (float)(~uVar10 & auVar124._20_4_);
      fVar102 = (float)(~uVar101 & auVar124._24_4_);
      fVar104 = (float)(~uVar103 & auVar124._28_4_);
      in_ZMM6 = ZEXT3264(CONCAT428(fVar104,CONCAT424(fVar102,CONCAT420(fVar100,CONCAT416(fVar98,
                                                  CONCAT412(fVar96,CONCAT48(fVar94,CONCAT44(fVar92,
                                                  fVar86))))))));
      auVar51 = ZEXT832(0) << 0x20;
      auVar4 = vcmpps_avx(auVar51,auVar138,1);
      uVar13 = vmovmskps_avx(auVar4);
      auVar37 = vmaxps_avx(auVar37,auVar153);
      auVar124._0_4_ = fVar21 + auVar37._0_4_;
      auVar124._4_4_ = fVar21 + auVar37._4_4_;
      auVar124._8_4_ = fVar21 + auVar37._8_4_;
      auVar124._12_4_ = fVar21 + auVar37._12_4_;
      auVar124._16_4_ = fVar21 + auVar37._16_4_;
      auVar124._20_4_ = fVar21 + auVar37._20_4_;
      auVar124._24_4_ = fVar21 + auVar37._24_4_;
      auVar124._28_4_ = fVar21 + auVar37._28_4_;
      auVar37._4_4_ = uVar5;
      auVar37._0_4_ = uVar5;
      auVar37._8_4_ = uVar5;
      auVar37._12_4_ = uVar5;
      auVar37._16_4_ = uVar5;
      auVar37._20_4_ = uVar5;
      auVar37._24_4_ = uVar5;
      auVar37._28_4_ = uVar5;
      auVar37 = vdivps_avx(auVar37,auVar124);
      fVar79 = auVar37._0_4_;
      fVar83 = auVar37._4_4_;
      fVar107 = auVar37._8_4_;
      fVar114 = auVar37._12_4_;
      fVar117 = auVar37._16_4_;
      fVar119 = auVar37._20_4_;
      fVar121 = auVar37._24_4_;
      fVar131 = auVar37._28_4_;
      if (uVar13 != 0) {
        fVar65 = fVar49 * fVar79;
        fVar72 = auVar138._4_4_ * fVar83;
        fVar74 = auVar138._8_4_ * fVar107;
        fVar76 = auVar138._12_4_ * fVar114;
        fVar78 = fVar56 * fVar117;
        fVar80 = auVar138._20_4_ * fVar119;
        fVar82 = auVar138._24_4_ * fVar121;
        fVar84 = auVar138._28_4_ * fVar131;
        auVar34._0_4_ = -(fVar65 * fVar139) + auVar24._0_4_;
        auVar34._4_4_ = -(fVar72 * fVar145) + auVar24._4_4_;
        auVar34._8_4_ = -(fVar74 * fVar146) + auVar24._8_4_;
        auVar34._12_4_ = -(fVar76 * fVar147) + auVar24._12_4_;
        auVar25._16_4_ = -(fVar78 * fVar148) + auVar24._16_4_;
        auVar25._0_16_ = auVar34;
        auVar25._20_4_ = -(fVar80 * fVar149) + auVar24._20_4_;
        auVar25._24_4_ = -(fVar82 * fVar150) + auVar24._24_4_;
        auVar25._28_4_ = -(fVar84 * fVar151) + auVar24._28_4_;
        cVar12 = (char)uVar13;
        auVar99 = auVar138._0_16_;
        auVar50 = auVar138._16_16_;
        iVar47 = auVar36._0_4_;
        auVar22 = auVar25._16_16_;
        iVar15 = auVar36._4_4_;
        iVar16 = auVar36._8_4_;
        iVar17 = auVar36._12_4_;
        iVar66 = auVar36._16_4_;
        iVar19 = auVar36._20_4_;
        iVar20 = auVar36._24_4_;
        iVar18 = auVar36._28_4_;
        if ((uVar13 & 1) == 0) {
          if ((uVar13 & 2) == 0) goto LAB_14000bb1b;
LAB_14000bfc8:
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_14000bfe2;
LAB_14000bb25:
          if ((uVar13 & 8) == 0) goto LAB_14000bb2f;
LAB_14000bffc:
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + iVar17) = uVar1;
          if ((uVar13 & 0x10) != 0) goto LAB_14000c022;
LAB_14000bb45:
          if ((uVar13 & 0x20) == 0) goto LAB_14000bb4f;
LAB_14000c03a:
          uVar1 = vextractps_avx(auVar22,1);
          *(undefined4 *)(param_1 + iVar19) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_14000c054;
LAB_14000bb59:
          if (-1 < cVar12) goto LAB_14000bb61;
LAB_14000c06c:
          uVar1 = vextractps_avx(auVar22,3);
          *(undefined4 *)(param_1 + iVar18) = uVar1;
          auVar36._0_4_ = -(fVar65 * fVar155) + auVar64._0_4_;
          auVar36._4_4_ = -(fVar72 * fVar158) + auVar64._4_4_;
          auVar36._8_4_ = -(fVar74 * fVar159) + auVar64._8_4_;
          auVar36._12_4_ = -(fVar76 * fVar160) + auVar64._12_4_;
          auVar36._16_4_ = -(fVar78 * fVar161) + auVar64._16_4_;
          auVar36._20_4_ = -(fVar80 * fVar162) + auVar64._20_4_;
          auVar36._24_4_ = -(fVar82 * fVar163) + auVar64._24_4_;
          auVar36._28_4_ = -(fVar84 * fVar164) + auVar64._28_4_;
          if ((uVar13 & 1) != 0) goto LAB_14000c08b;
LAB_14000bb70:
          if ((uVar13 & 2) == 0) goto LAB_14000bb7a;
LAB_14000c0a4:
          uVar1 = vextractps_avx(auVar36._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_14000c0bf;
LAB_14000bb84:
          if ((uVar13 & 8) == 0) goto LAB_14000bb8e;
LAB_14000c0da:
          uVar1 = vextractps_avx(auVar36._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar1;
          auVar34 = auVar36._16_16_;
          if ((uVar13 & 0x10) != 0) goto LAB_14000c0fb;
LAB_14000bb9e:
          if ((uVar13 & 0x20) == 0) goto LAB_14000bba8;
LAB_14000c114:
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_14000c12f;
LAB_14000bbb2:
          if (-1 < cVar12) goto LAB_14000bbba;
LAB_14000c148:
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
          auVar64._0_4_ = -(fVar86 * fVar65) + auVar106._0_4_;
          auVar64._4_4_ = -(fVar92 * fVar72) + auVar106._4_4_;
          auVar64._8_4_ = -(fVar94 * fVar74) + auVar106._8_4_;
          auVar64._12_4_ = -(fVar96 * fVar76) + auVar106._12_4_;
          auVar64._16_4_ = -(fVar98 * fVar78) + auVar106._16_4_;
          auVar64._20_4_ = -(fVar100 * fVar80) + auVar106._20_4_;
          auVar64._24_4_ = -(fVar102 * fVar82) + auVar106._24_4_;
          auVar64._28_4_ = -(fVar104 * fVar84) + auVar106._28_4_;
          if ((uVar13 & 1) != 0) goto LAB_14000c168;
LAB_14000bbc9:
          if ((uVar13 & 2) == 0) goto LAB_14000bbd3;
LAB_14000c181:
          uVar1 = vextractps_avx(auVar64._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_14000c19c;
LAB_14000bbdd:
          if ((uVar13 & 8) == 0) goto LAB_14000bbe7;
LAB_14000c1b7:
          uVar1 = vextractps_avx(auVar64._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar1;
          auVar34 = auVar64._16_16_;
        }
        else {
          *(float *)(param_1 + iVar47) = auVar34._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14000bfc8;
LAB_14000bb1b:
          if ((uVar13 & 4) == 0) goto LAB_14000bb25;
LAB_14000bfe2:
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14000bffc;
LAB_14000bb2f:
          if ((uVar13 & 0x10) == 0) goto LAB_14000bb45;
LAB_14000c022:
          *(float *)(param_1 + iVar66) = auVar25._16_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_14000c03a;
LAB_14000bb4f:
          if ((uVar13 & 0x40) == 0) goto LAB_14000bb59;
LAB_14000c054:
          uVar1 = vextractps_avx(auVar22,2);
          *(undefined4 *)(param_1 + iVar20) = uVar1;
          if (cVar12 < '\0') goto LAB_14000c06c;
LAB_14000bb61:
          auVar36._0_4_ = -(fVar65 * fVar155) + auVar64._0_4_;
          auVar36._4_4_ = -(fVar72 * fVar158) + auVar64._4_4_;
          auVar36._8_4_ = -(fVar74 * fVar159) + auVar64._8_4_;
          auVar36._12_4_ = -(fVar76 * fVar160) + auVar64._12_4_;
          auVar36._16_4_ = -(fVar78 * fVar161) + auVar64._16_4_;
          auVar36._20_4_ = -(fVar80 * fVar162) + auVar64._20_4_;
          auVar36._24_4_ = -(fVar82 * fVar163) + auVar64._24_4_;
          auVar36._28_4_ = -(fVar84 * fVar164) + auVar64._28_4_;
          if ((uVar13 & 1) == 0) goto LAB_14000bb70;
LAB_14000c08b:
          *(int *)(param_1 + 4 + (longlong)iVar47) = auVar36._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14000c0a4;
LAB_14000bb7a:
          if ((uVar13 & 4) == 0) goto LAB_14000bb84;
LAB_14000c0bf:
          uVar1 = vextractps_avx(auVar36._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14000c0da;
LAB_14000bb8e:
          auVar34 = auVar36._16_16_;
          if ((uVar13 & 0x10) == 0) goto LAB_14000bb9e;
LAB_14000c0fb:
          *(int *)(param_1 + 4 + (longlong)iVar66) = auVar34._0_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_14000c114;
LAB_14000bba8:
          if ((uVar13 & 0x40) == 0) goto LAB_14000bbb2;
LAB_14000c12f:
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar1;
          if (cVar12 < '\0') goto LAB_14000c148;
LAB_14000bbba:
          auVar64._0_4_ = -(fVar86 * fVar65) + auVar106._0_4_;
          auVar64._4_4_ = -(fVar92 * fVar72) + auVar106._4_4_;
          auVar64._8_4_ = -(fVar94 * fVar74) + auVar106._8_4_;
          auVar64._12_4_ = -(fVar96 * fVar76) + auVar106._12_4_;
          auVar64._16_4_ = -(fVar98 * fVar78) + auVar106._16_4_;
          auVar64._20_4_ = -(fVar100 * fVar80) + auVar106._20_4_;
          auVar64._24_4_ = -(fVar102 * fVar82) + auVar106._24_4_;
          auVar64._28_4_ = -(fVar104 * fVar84) + auVar106._28_4_;
          if ((uVar13 & 1) == 0) goto LAB_14000bbc9;
LAB_14000c168:
          *(int *)(param_1 + 8 + (longlong)iVar47) = auVar64._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14000c181;
LAB_14000bbd3:
          if ((uVar13 & 4) == 0) goto LAB_14000bbdd;
LAB_14000c19c:
          uVar1 = vextractps_avx(auVar64._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14000c1b7;
LAB_14000bbe7:
          auVar34 = auVar64._16_16_;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar66) = auVar34._0_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
        }
        if ((uVar13 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar47) = fVar49;
        }
        if ((uVar13 & 2) != 0) {
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar1;
        }
        if ((uVar13 & 4) != 0) {
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
        }
        if ((uVar13 & 8) != 0) {
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
        }
        if ((uVar13 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar56;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar50,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar50,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar50,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar1;
        }
      }
      auVar37 = vcmpps_avx(auVar51,auVar123,0xc);
      uVar13 = vmovmskps_avx(auVar37);
      if (uVar13 == 0) {
LAB_14000be11:
        auVar37 = vcmpps_avx(auVar51,auVar152,0xc);
        uVar13 = vmovmskps_avx(auVar37);
      }
      else {
        fVar48 = fVar48 * fVar79 * fVar136;
        fVar55 = fVar55 * fVar83 * auVar123._4_4_;
        fVar57 = fVar57 * fVar107 * auVar123._8_4_;
        fVar58 = fVar58 * fVar114 * auVar123._12_4_;
        fVar59 = fVar59 * fVar117 * fVar137;
        fVar60 = fVar60 * fVar119 * auVar123._20_4_;
        fVar61 = fVar61 * fVar121 * auVar123._24_4_;
        fVar62 = fVar62 * fVar131 * auVar123._28_4_;
        local_400 = auVar156._0_4_;
        fStack_3fc = auVar156._4_4_;
        fStack_3f8 = auVar156._8_4_;
        fStack_3f4 = auVar156._12_4_;
        fStack_3f0 = auVar156._16_4_;
        fStack_3ec = auVar156._20_4_;
        fStack_3e8 = auVar156._24_4_;
        fStack_3e4 = auVar156._28_4_;
        auVar22._0_4_ = fVar48 * fVar139 + local_400;
        auVar22._4_4_ = fVar55 * fVar145 + fStack_3fc;
        auVar22._8_4_ = fVar57 * fVar146 + fStack_3f8;
        auVar22._12_4_ = fVar58 * fVar147 + fStack_3f4;
        auVar106._16_4_ = fVar59 * fVar148 + fStack_3f0;
        auVar106._0_16_ = auVar22;
        auVar106._20_4_ = fVar60 * fVar149 + fStack_3ec;
        auVar106._24_4_ = fVar61 * fVar150 + fStack_3e8;
        auVar106._28_4_ = fVar62 * fVar151 + fStack_3e4;
        cVar12 = (char)uVar13;
        auVar99 = auVar123._0_16_;
        auVar50 = auVar123._16_16_;
        iVar66 = auVar109._0_4_;
        auVar34 = auVar106._16_16_;
        iVar15 = auVar109._4_4_;
        iVar16 = auVar109._8_4_;
        iVar17 = auVar109._12_4_;
        local_440 = auVar105._0_4_;
        fStack_43c = auVar105._4_4_;
        fStack_438 = auVar105._8_4_;
        fStack_434 = auVar105._12_4_;
        fStack_430 = auVar105._16_4_;
        fStack_42c = auVar105._20_4_;
        fStack_428 = auVar105._24_4_;
        fStack_424 = auVar105._28_4_;
        local_3c0 = auVar127._0_4_;
        fStack_3bc = auVar127._4_4_;
        fStack_3b8 = auVar127._8_4_;
        fStack_3b4 = auVar127._12_4_;
        fStack_3b0 = auVar127._16_4_;
        fStack_3ac = auVar127._20_4_;
        fStack_3a8 = auVar127._24_4_;
        fStack_3a4 = auVar127._28_4_;
        iVar47 = auVar109._16_4_;
        iVar19 = auVar109._20_4_;
        iVar20 = auVar109._24_4_;
        iVar18 = auVar109._28_4_;
        if ((uVar13 & 1) == 0) {
          if ((uVar13 & 2) == 0) goto LAB_14000bcbb;
LAB_14000c338:
          uVar1 = vextractps_avx(auVar22,1);
          *(undefined4 *)(param_1 + iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_14000c352;
LAB_14000bcc5:
          if ((uVar13 & 8) == 0) goto LAB_14000bccf;
LAB_14000c36c:
          uVar1 = vextractps_avx(auVar22,3);
          *(undefined4 *)(param_1 + iVar17) = uVar1;
          if ((uVar13 & 0x10) != 0) goto LAB_14000c392;
LAB_14000bce5:
          if ((uVar13 & 0x20) == 0) goto LAB_14000bcef;
LAB_14000c3aa:
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + iVar19) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_14000c3c4;
LAB_14000bcf9:
          if (-1 < cVar12) goto LAB_14000bd01;
LAB_14000c3dc:
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + iVar18) = uVar1;
          auVar105._0_4_ = fVar48 * fVar155 + local_440;
          auVar105._4_4_ = fVar55 * fVar158 + fStack_43c;
          auVar105._8_4_ = fVar57 * fVar159 + fStack_438;
          auVar105._12_4_ = fVar58 * fVar160 + fStack_434;
          auVar105._16_4_ = fVar59 * fVar161 + fStack_430;
          auVar105._20_4_ = fVar60 * fVar162 + fStack_42c;
          auVar105._24_4_ = fVar61 * fVar163 + fStack_428;
          auVar105._28_4_ = fVar62 * fVar164 + fStack_424;
          if ((uVar13 & 1) != 0) goto LAB_14000c400;
LAB_14000bd15:
          if ((uVar13 & 2) == 0) goto LAB_14000bd1f;
LAB_14000c419:
          uVar1 = vextractps_avx(auVar105._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_14000c434;
LAB_14000bd29:
          if ((uVar13 & 8) == 0) goto LAB_14000bd33;
LAB_14000c44f:
          uVar1 = vextractps_avx(auVar105._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar1;
          auVar34 = auVar105._16_16_;
          if ((uVar13 & 0x10) != 0) goto LAB_14000c470;
LAB_14000bd43:
          if ((uVar13 & 0x20) == 0) goto LAB_14000bd4d;
LAB_14000c489:
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_14000c4a4;
LAB_14000bd57:
          if (-1 < cVar12) goto LAB_14000bd5f;
LAB_14000c4bd:
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
          auVar109._0_4_ = fVar86 * fVar48 + local_3c0;
          auVar109._4_4_ = fVar92 * fVar55 + fStack_3bc;
          auVar109._8_4_ = fVar94 * fVar57 + fStack_3b8;
          auVar109._12_4_ = fVar96 * fVar58 + fStack_3b4;
          auVar109._16_4_ = fVar98 * fVar59 + fStack_3b0;
          auVar109._20_4_ = fVar100 * fVar60 + fStack_3ac;
          auVar109._24_4_ = fVar102 * fVar61 + fStack_3a8;
          auVar109._28_4_ = fVar104 * fVar62 + fStack_3a4;
          if ((uVar13 & 1) != 0) goto LAB_14000c4e2;
LAB_14000bd73:
          if ((uVar13 & 2) == 0) goto LAB_14000bd7d;
LAB_14000c4fb:
          uVar1 = vextractps_avx(auVar109._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_14000c516;
LAB_14000bd87:
          if ((uVar13 & 8) == 0) goto LAB_14000bd91;
LAB_14000c531:
          uVar1 = vextractps_avx(auVar109._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar1;
          auVar34 = auVar109._16_16_;
        }
        else {
          *(float *)(param_1 + iVar66) = auVar22._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14000c338;
LAB_14000bcbb:
          if ((uVar13 & 4) == 0) goto LAB_14000bcc5;
LAB_14000c352:
          uVar1 = vextractps_avx(auVar22,2);
          *(undefined4 *)(param_1 + iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14000c36c;
LAB_14000bccf:
          if ((uVar13 & 0x10) == 0) goto LAB_14000bce5;
LAB_14000c392:
          *(float *)(param_1 + iVar47) = auVar106._16_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_14000c3aa;
LAB_14000bcef:
          if ((uVar13 & 0x40) == 0) goto LAB_14000bcf9;
LAB_14000c3c4:
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + iVar20) = uVar1;
          if (cVar12 < '\0') goto LAB_14000c3dc;
LAB_14000bd01:
          auVar105._0_4_ = fVar48 * fVar155 + local_440;
          auVar105._4_4_ = fVar55 * fVar158 + fStack_43c;
          auVar105._8_4_ = fVar57 * fVar159 + fStack_438;
          auVar105._12_4_ = fVar58 * fVar160 + fStack_434;
          auVar105._16_4_ = fVar59 * fVar161 + fStack_430;
          auVar105._20_4_ = fVar60 * fVar162 + fStack_42c;
          auVar105._24_4_ = fVar61 * fVar163 + fStack_428;
          auVar105._28_4_ = fVar62 * fVar164 + fStack_424;
          if ((uVar13 & 1) == 0) goto LAB_14000bd15;
LAB_14000c400:
          *(int *)(param_1 + 4 + (longlong)iVar66) = auVar105._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14000c419;
LAB_14000bd1f:
          if ((uVar13 & 4) == 0) goto LAB_14000bd29;
LAB_14000c434:
          uVar1 = vextractps_avx(auVar105._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14000c44f;
LAB_14000bd33:
          auVar34 = auVar105._16_16_;
          if ((uVar13 & 0x10) == 0) goto LAB_14000bd43;
LAB_14000c470:
          *(int *)(param_1 + 4 + (longlong)iVar47) = auVar34._0_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_14000c489;
LAB_14000bd4d:
          if ((uVar13 & 0x40) == 0) goto LAB_14000bd57;
LAB_14000c4a4:
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar1;
          if (cVar12 < '\0') goto LAB_14000c4bd;
LAB_14000bd5f:
          auVar109._0_4_ = fVar86 * fVar48 + local_3c0;
          auVar109._4_4_ = fVar92 * fVar55 + fStack_3bc;
          auVar109._8_4_ = fVar94 * fVar57 + fStack_3b8;
          auVar109._12_4_ = fVar96 * fVar58 + fStack_3b4;
          auVar109._16_4_ = fVar98 * fVar59 + fStack_3b0;
          auVar109._20_4_ = fVar100 * fVar60 + fStack_3ac;
          auVar109._24_4_ = fVar102 * fVar61 + fStack_3a8;
          auVar109._28_4_ = fVar104 * fVar62 + fStack_3a4;
          if ((uVar13 & 1) == 0) goto LAB_14000bd73;
LAB_14000c4e2:
          *(int *)(param_1 + 8 + (longlong)iVar66) = auVar109._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14000c4fb;
LAB_14000bd7d:
          if ((uVar13 & 4) == 0) goto LAB_14000bd87;
LAB_14000c516:
          uVar1 = vextractps_avx(auVar109._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14000c531;
LAB_14000bd91:
          auVar34 = auVar109._16_16_;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar47) = auVar34._0_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
        }
        if ((uVar13 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar136;
        }
        if ((uVar13 & 2) != 0) {
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar1;
        }
        if ((uVar13 & 4) != 0) {
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
        }
        if ((uVar13 & 8) != 0) {
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
        }
        if ((uVar13 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar47) = fVar137;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar50,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar50,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar1;
        }
        if (-1 < cVar12) goto LAB_14000be11;
        uVar1 = vextractps_avx(auVar50,3);
        *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar1;
        auVar37 = vcmpps_avx(auVar51,auVar152,0xc);
        uVar13 = vmovmskps_avx(auVar37);
      }
      if (uVar13 != 0) {
        fVar49 = fVar79 * fVar33 * auVar153._0_4_;
        fVar56 = fVar83 * auVar152._4_4_ * auVar153._4_4_;
        fVar48 = fVar107 * auVar152._8_4_ * auVar153._8_4_;
        fVar55 = fVar114 * auVar152._12_4_ * auVar153._12_4_;
        fVar57 = fVar117 * fVar3 * auVar153._16_4_;
        fVar58 = fVar119 * auVar152._20_4_ * auVar153._20_4_;
        fVar59 = fVar121 * auVar152._24_4_ * auVar153._24_4_;
        fVar60 = fVar131 * auVar152._28_4_ * auVar153._28_4_;
        auVar99._0_4_ = fVar49 * fVar139 + auVar68._0_4_;
        auVar99._4_4_ = fVar56 * fVar145 + auVar68._4_4_;
        auVar99._8_4_ = fVar48 * fVar146 + auVar68._8_4_;
        auVar99._12_4_ = fVar55 * fVar147 + auVar68._12_4_;
        auVar123._16_4_ = fVar57 * fVar148 + auVar68._16_4_;
        auVar123._0_16_ = auVar99;
        auVar123._20_4_ = fVar58 * fVar149 + auVar68._20_4_;
        auVar123._24_4_ = fVar59 * fVar150 + auVar68._24_4_;
        auVar123._28_4_ = fVar60 * fVar151 + auVar68._28_4_;
        cVar12 = (char)uVar13;
        auVar34 = auVar152._0_16_;
        auVar22 = auVar152._16_16_;
        iVar66 = auVar35._0_4_;
        auVar50 = auVar123._16_16_;
        iVar17 = auVar35._4_4_;
        iVar19 = auVar35._8_4_;
        iVar20 = auVar35._12_4_;
        iVar47 = auVar35._16_4_;
        iVar18 = auVar35._20_4_;
        iVar15 = auVar35._24_4_;
        iVar16 = auVar35._28_4_;
        if ((uVar13 & 1) == 0) {
          if ((uVar13 & 2) == 0) goto LAB_14000be5a;
LAB_14000c6b8:
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + iVar17) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_14000c6d2;
LAB_14000be64:
          if ((uVar13 & 8) == 0) goto LAB_14000be6e;
LAB_14000c6ec:
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + iVar20) = uVar1;
          if ((uVar13 & 0x10) != 0) goto LAB_14000c712;
LAB_14000be84:
          if ((uVar13 & 0x20) == 0) goto LAB_14000be8e;
LAB_14000c72a:
          uVar1 = vextractps_avx(auVar50,1);
          *(undefined4 *)(param_1 + iVar18) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_14000c744;
LAB_14000be98:
          if (-1 < cVar12) goto LAB_14000bea0;
LAB_14000c75c:
          uVar1 = vextractps_avx(auVar50,3);
          *(undefined4 *)(param_1 + iVar16) = uVar1;
          auVar68._0_4_ = fVar49 * fVar155 + fVar77;
          auVar68._4_4_ = fVar56 * fVar158 + fVar81;
          auVar68._8_4_ = fVar48 * fVar159 + fVar85;
          auVar68._12_4_ = fVar55 * fVar160 + fVar108;
          auVar68._16_4_ = fVar57 * fVar161 + fVar116;
          auVar68._20_4_ = fVar58 * fVar162 + fVar118;
          auVar68._24_4_ = fVar59 * fVar163 + fVar120;
          auVar68._28_4_ = fVar60 * fVar164 + fVar122;
          if ((uVar13 & 1) != 0) goto LAB_14000c780;
LAB_14000beb4:
          if ((uVar13 & 2) == 0) goto LAB_14000bebe;
LAB_14000c799:
          uVar1 = vextractps_avx(auVar68._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_14000c7b4;
LAB_14000bec8:
          if ((uVar13 & 8) == 0) goto LAB_14000bed2;
LAB_14000c7cf:
          uVar1 = vextractps_avx(auVar68._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar1;
          auVar99 = auVar68._16_16_;
          if ((uVar13 & 0x10) != 0) goto LAB_14000c7f0;
LAB_14000bee2:
          if ((uVar13 & 0x20) == 0) goto LAB_14000beec;
LAB_14000c809:
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_14000c824;
LAB_14000bef6:
          if (-1 < cVar12) goto LAB_14000befe;
LAB_14000c83d:
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
          in_ZMM6 = ZEXT3264(CONCAT428(fVar60 * fVar104 + fVar75,
                                       CONCAT424(fVar59 * fVar102 + fVar73,
                                                 CONCAT420(fVar58 * fVar100 + fVar67,
                                                           CONCAT416(fVar57 * fVar98 + fVar46,
                                                                     CONCAT412(fVar55 * fVar96 +
                                                                               fVar45,CONCAT48(
                                                  fVar48 * fVar94 + fVar44,
                                                  CONCAT44(fVar56 * fVar92 + fVar43,
                                                           fVar49 * fVar86 + fVar42))))))));
          if ((uVar13 & 1) != 0) goto LAB_14000c862;
LAB_14000bf12:
          if ((uVar13 & 2) == 0) goto LAB_14000bf1c;
LAB_14000c87b:
          uVar1 = vextractps_avx(in_ZMM6._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_14000c896;
LAB_14000bf26:
          if ((uVar13 & 8) == 0) goto LAB_14000bf30;
LAB_14000c8b1:
          uVar1 = vextractps_avx(in_ZMM6._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar1;
          auVar99 = in_ZMM6._16_16_;
        }
        else {
          *(float *)(param_1 + iVar66) = auVar99._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14000c6b8;
LAB_14000be5a:
          if ((uVar13 & 4) == 0) goto LAB_14000be64;
LAB_14000c6d2:
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + iVar19) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14000c6ec;
LAB_14000be6e:
          if ((uVar13 & 0x10) == 0) goto LAB_14000be84;
LAB_14000c712:
          *(float *)(param_1 + iVar47) = auVar123._16_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_14000c72a;
LAB_14000be8e:
          if ((uVar13 & 0x40) == 0) goto LAB_14000be98;
LAB_14000c744:
          uVar1 = vextractps_avx(auVar50,2);
          *(undefined4 *)(param_1 + iVar15) = uVar1;
          if (cVar12 < '\0') goto LAB_14000c75c;
LAB_14000bea0:
          auVar68._0_4_ = fVar49 * fVar155 + fVar77;
          auVar68._4_4_ = fVar56 * fVar158 + fVar81;
          auVar68._8_4_ = fVar48 * fVar159 + fVar85;
          auVar68._12_4_ = fVar55 * fVar160 + fVar108;
          auVar68._16_4_ = fVar57 * fVar161 + fVar116;
          auVar68._20_4_ = fVar58 * fVar162 + fVar118;
          auVar68._24_4_ = fVar59 * fVar163 + fVar120;
          auVar68._28_4_ = fVar60 * fVar164 + fVar122;
          if ((uVar13 & 1) == 0) goto LAB_14000beb4;
LAB_14000c780:
          *(int *)(param_1 + 4 + (longlong)iVar66) = auVar68._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14000c799;
LAB_14000bebe:
          if ((uVar13 & 4) == 0) goto LAB_14000bec8;
LAB_14000c7b4:
          uVar1 = vextractps_avx(auVar68._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14000c7cf;
LAB_14000bed2:
          auVar99 = auVar68._16_16_;
          if ((uVar13 & 0x10) == 0) goto LAB_14000bee2;
LAB_14000c7f0:
          *(int *)(param_1 + 4 + (longlong)iVar47) = auVar99._0_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_14000c809;
LAB_14000beec:
          if ((uVar13 & 0x40) == 0) goto LAB_14000bef6;
LAB_14000c824:
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar1;
          if (cVar12 < '\0') goto LAB_14000c83d;
LAB_14000befe:
          in_ZMM6 = ZEXT3264(CONCAT428(fVar60 * fVar104 + fVar75,
                                       CONCAT424(fVar59 * fVar102 + fVar73,
                                                 CONCAT420(fVar58 * fVar100 + fVar67,
                                                           CONCAT416(fVar57 * fVar98 + fVar46,
                                                                     CONCAT412(fVar55 * fVar96 +
                                                                               fVar45,CONCAT48(
                                                  fVar48 * fVar94 + fVar44,
                                                  CONCAT44(fVar56 * fVar92 + fVar43,
                                                           fVar49 * fVar86 + fVar42))))))));
          if ((uVar13 & 1) == 0) goto LAB_14000bf12;
LAB_14000c862:
          *(int *)(param_1 + 8 + (longlong)iVar66) = in_ZMM6._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14000c87b;
LAB_14000bf1c:
          if ((uVar13 & 4) == 0) goto LAB_14000bf26;
LAB_14000c896:
          uVar1 = vextractps_avx(in_ZMM6._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14000c8b1;
LAB_14000bf30:
          auVar99 = in_ZMM6._16_16_;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar47) = auVar99._0_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
        }
        if ((uVar13 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar33;
        }
        if ((uVar13 & 2) != 0) {
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
        }
        if ((uVar13 & 4) != 0) {
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 8) != 0) {
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar1;
        }
        if ((uVar13 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar47) = fVar3;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar22,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar22,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar22,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
        }
      }
      uVar115 = uVar115 + 0x20;
      pauVar14 = pauVar14 + 3;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)(uVar11 & 0xfffffff8));
  }
  if ((int)param_6 <= (int)uVar9) {
    return;
  }
  auVar127._4_4_ = uVar9;
  auVar127._0_4_ = uVar9;
  auVar127._8_4_ = uVar9;
  auVar127._12_4_ = uVar9;
  auVar127._16_4_ = uVar9;
  auVar127._20_4_ = uVar9;
  auVar127._24_4_ = uVar9;
  auVar127._28_4_ = uVar9;
  auVar37 = vpor_avx2(auVar127,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar138._4_4_ = param_6;
  auVar138._0_4_ = param_6;
  auVar138._8_4_ = param_6;
  auVar138._12_4_ = param_6;
  auVar138._16_4_ = param_6;
  auVar138._20_4_ = param_6;
  auVar138._24_4_ = param_6;
  auVar138._28_4_ = param_6;
  auVar4 = vpcmpgtd_avx2(auVar138,auVar37);
  pauVar14 = (undefined1 (*) [32])(param_2 + (ulonglong)uVar9 * 0xc);
  auVar37 = vpcmpeqd_avx2(auVar37,auVar37);
  auVar37 = auVar37 & ~auVar4;
  if ((((((((SUB321(auVar37 >> 0x1f,0) & 1) == 0 && (SUB321(auVar37 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar37 >> 0x5f,0) & 1) == 0) && SUB321(auVar37 >> 0x7f,0) == '\0') &&
        (SUB321(auVar37 >> 0x9f,0) & 1) == 0) && SUB321(auVar37 >> 0xbf,0) == '\0') &&
      (SUB321(auVar37 >> 0xdf,0) & 1) == 0) && -1 < auVar37[0x1f]) {
    auVar37 = pauVar14[1];
    auVar51 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                          auVar37);
    auVar124 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar14);
    auVar51 = vpblendd_avx2(auVar124,auVar51,0x88);
    auVar124 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar37);
    auVar87 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                          pauVar14[2]);
    auVar124 = vpblendd_avx2(auVar87,auVar124,0x13);
    auVar152._16_16_ = ZEXT116(0) * auVar51._16_16_ | ZEXT116(1) * auVar124._0_16_;
    auVar152._0_16_ = ZEXT116(0) * auVar124._0_16_ | ZEXT116(1) * auVar51._0_16_;
    auVar51 = vperm2i128_avx2(auVar51,auVar124,0x31);
    auVar37 = vpblendd_avx2(auVar37,*pauVar14,0x24);
    auVar37 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                          auVar37);
    auVar156._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar156._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar124 = vpermd_avx2(auVar156,pauVar14[2]);
    auVar37 = vpblendd_avx2(auVar37,auVar124,0xe0);
  }
  else {
    auVar152 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
    auVar51 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
    auVar37 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
  }
  auVar105 = vpslld_avx2(auVar51,4);
  auVar52._4_4_ = __real_00000004;
  auVar52._0_4_ = __real_00000004;
  auVar52._8_4_ = __real_00000004;
  auVar52._12_4_ = __real_00000004;
  auVar52._16_4_ = __real_00000004;
  auVar52._20_4_ = __real_00000004;
  auVar52._24_4_ = __real_00000004;
  auVar52._28_4_ = __real_00000004;
  auVar51 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
  auVar124 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
  auVar70._4_4_ = __real_00000008;
  auVar70._0_4_ = __real_00000008;
  auVar70._8_4_ = __real_00000008;
  auVar70._12_4_ = __real_00000008;
  auVar70._16_4_ = __real_00000008;
  auVar70._20_4_ = __real_00000008;
  auVar70._24_4_ = __real_00000008;
  auVar70._28_4_ = __real_00000008;
  auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
  auVar89._4_4_ = __real_0000000c;
  auVar89._0_4_ = __real_0000000c;
  auVar89._8_4_ = __real_0000000c;
  auVar89._12_4_ = __real_0000000c;
  auVar89._16_4_ = __real_0000000c;
  auVar89._20_4_ = __real_0000000c;
  auVar89._24_4_ = __real_0000000c;
  auVar89._28_4_ = __real_0000000c;
  auVar109 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
  auVar38 = vpslld_avx2(auVar37,4);
  vpor_avx2(auVar38,auVar52);
  auVar142 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
  vpor_avx2(auVar38,auVar70);
  auVar153 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
  vpor_avx2(auVar38,auVar89);
  auVar106 = vgatherdps(ZEXT832(0),auVar4);
  auVar133 = vgatherdps(ZEXT832(0) << 0x20,auVar4);
  auVar64 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_3 + (int)(uVar9 << 2)));
  auVar37 = vmaskmovps_avx(auVar4,auVar51);
  auVar51 = vmaskmovps_avx(auVar4,auVar124);
  auVar124 = vmaskmovps_avx(auVar4,auVar87);
  auVar87 = vmaskmovps_avx(auVar4,auVar133);
  auVar133 = vmaskmovps_avx(auVar4,auVar142);
  auVar142 = vmaskmovps_avx(auVar4,auVar153);
  auVar39 = vpslld_avx2(auVar152,4);
  auVar153 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
  auVar24 = vgatherdps(ZEXT832(0),auVar4);
  auVar35 = vgatherdps(ZEXT832(0),auVar4);
  auVar88 = vgatherdps(ZEXT832(0),auVar4);
  auVar153 = vmaskmovps_avx(auVar4,auVar153);
  auVar24 = vmaskmovps_avx(auVar4,auVar24);
  auVar35 = vmaskmovps_avx(auVar4,auVar35);
  auVar26._4_4_ = __real_3f800000;
  auVar26._0_4_ = __real_3f800000;
  auVar26._8_4_ = __real_3f800000;
  auVar26._12_4_ = __real_3f800000;
  auVar26._16_4_ = __real_3f800000;
  auVar26._20_4_ = __real_3f800000;
  auVar26._24_4_ = __real_3f800000;
  auVar26._28_4_ = __real_3f800000;
  auVar69 = vsubps_avx(auVar26,auVar64);
  auVar36 = vmaxps_avx(auVar64,auVar69);
  auVar27._0_4_ = auVar36._0_4_ + __real_3f800000;
  auVar27._4_4_ = auVar36._4_4_ + __real_3f800000;
  auVar27._8_4_ = auVar36._8_4_ + __real_3f800000;
  auVar27._12_4_ = auVar36._12_4_ + __real_3f800000;
  auVar27._16_4_ = auVar36._16_4_ + __real_3f800000;
  auVar27._20_4_ = auVar36._20_4_ + __real_3f800000;
  auVar27._24_4_ = auVar36._24_4_ + __real_3f800000;
  auVar27._28_4_ = auVar36._28_4_ + __real_3f800000;
  auVar53._4_4_ = __real_40000000;
  auVar53._0_4_ = __real_40000000;
  auVar53._8_4_ = __real_40000000;
  auVar53._12_4_ = __real_40000000;
  auVar53._16_4_ = __real_40000000;
  auVar53._20_4_ = __real_40000000;
  auVar53._24_4_ = __real_40000000;
  auVar53._28_4_ = __real_40000000;
  auVar36 = vdivps_avx(auVar53,auVar27);
  auVar63 = vsubps_avx(auVar37,auVar87);
  auVar110 = vsubps_avx(auVar51,auVar133);
  fVar67 = auVar64._0_4_;
  auVar28._0_4_ = fVar67 * auVar63._0_4_ + auVar87._0_4_;
  fVar73 = auVar64._4_4_;
  auVar28._4_4_ = fVar73 * auVar63._4_4_ + auVar87._4_4_;
  fVar75 = auVar64._8_4_;
  auVar28._8_4_ = fVar75 * auVar63._8_4_ + auVar87._8_4_;
  fVar77 = auVar64._12_4_;
  auVar28._12_4_ = fVar77 * auVar63._12_4_ + auVar87._12_4_;
  fVar79 = auVar64._16_4_;
  auVar28._16_4_ = fVar79 * auVar63._16_4_ + auVar87._16_4_;
  fVar81 = auVar64._20_4_;
  auVar28._20_4_ = fVar81 * auVar63._20_4_ + auVar87._20_4_;
  fVar83 = auVar64._24_4_;
  auVar28._24_4_ = fVar83 * auVar63._24_4_ + auVar87._24_4_;
  fVar85 = auVar64._28_4_;
  auVar28._28_4_ = fVar85 * auVar63._28_4_ + auVar87._28_4_;
  fVar100 = auVar133._0_4_;
  auVar125._0_4_ = fVar67 * auVar110._0_4_ + fVar100;
  fVar104 = auVar133._4_4_;
  auVar125._4_4_ = fVar73 * auVar110._4_4_ + fVar104;
  fVar55 = auVar133._8_4_;
  auVar125._8_4_ = fVar75 * auVar110._8_4_ + fVar55;
  fVar58 = auVar133._12_4_;
  auVar125._12_4_ = fVar77 * auVar110._12_4_ + fVar58;
  fVar60 = auVar133._16_4_;
  auVar125._16_4_ = fVar79 * auVar110._16_4_ + fVar60;
  fVar62 = auVar133._20_4_;
  auVar125._20_4_ = fVar81 * auVar110._20_4_ + fVar62;
  fVar43 = auVar133._24_4_;
  auVar125._24_4_ = fVar83 * auVar110._24_4_ + fVar43;
  fVar45 = auVar133._28_4_;
  auVar125._28_4_ = fVar85 * auVar110._28_4_ + fVar45;
  auVar133 = vsubps_avx(auVar124,auVar142);
  fVar102 = auVar142._0_4_;
  auVar128._0_4_ = fVar67 * auVar133._0_4_ + fVar102;
  fVar48 = auVar142._4_4_;
  auVar128._4_4_ = fVar73 * auVar133._4_4_ + fVar48;
  fVar57 = auVar142._8_4_;
  auVar128._8_4_ = fVar75 * auVar133._8_4_ + fVar57;
  fVar59 = auVar142._12_4_;
  auVar128._12_4_ = fVar77 * auVar133._12_4_ + fVar59;
  fVar61 = auVar142._16_4_;
  auVar128._16_4_ = fVar79 * auVar133._16_4_ + fVar61;
  fVar42 = auVar142._20_4_;
  auVar128._20_4_ = fVar81 * auVar133._20_4_ + fVar42;
  fVar44 = auVar142._24_4_;
  auVar128._24_4_ = fVar83 * auVar133._24_4_ + fVar44;
  fVar46 = auVar142._28_4_;
  auVar128._28_4_ = fVar85 * auVar133._28_4_ + fVar46;
  auVar133 = vsubps_avx(auVar153,auVar28);
  auVar142 = vsubps_avx(auVar24,auVar125);
  auVar63 = vsubps_avx(auVar35,auVar128);
  auVar143._0_4_ =
       auVar63._0_4_ * auVar63._0_4_ +
       auVar133._0_4_ * auVar133._0_4_ + auVar142._0_4_ * auVar142._0_4_;
  auVar143._4_4_ =
       auVar63._4_4_ * auVar63._4_4_ +
       auVar133._4_4_ * auVar133._4_4_ + auVar142._4_4_ * auVar142._4_4_;
  auVar143._8_4_ =
       auVar63._8_4_ * auVar63._8_4_ +
       auVar133._8_4_ * auVar133._8_4_ + auVar142._8_4_ * auVar142._8_4_;
  auVar143._12_4_ =
       auVar63._12_4_ * auVar63._12_4_ +
       auVar133._12_4_ * auVar133._12_4_ + auVar142._12_4_ * auVar142._12_4_;
  auVar143._16_4_ =
       auVar63._16_4_ * auVar63._16_4_ +
       auVar133._16_4_ * auVar133._16_4_ + auVar142._16_4_ * auVar142._16_4_;
  auVar143._20_4_ =
       auVar63._20_4_ * auVar63._20_4_ +
       auVar133._20_4_ * auVar133._20_4_ + auVar142._20_4_ * auVar142._20_4_;
  auVar143._24_4_ =
       auVar63._24_4_ * auVar63._24_4_ +
       auVar133._24_4_ * auVar133._24_4_ + auVar142._24_4_ * auVar142._24_4_;
  auVar143._28_4_ =
       auVar63._28_4_ * auVar63._28_4_ +
       auVar133._28_4_ * auVar133._28_4_ + auVar142._28_4_ * auVar142._28_4_;
  auVar68 = vsqrtps_avx(auVar143);
  auVar133 = vdivps_avx(auVar133,auVar68);
  auVar142 = vdivps_avx(auVar142,auVar68);
  auVar63 = vdivps_avx(auVar63,auVar68);
  auVar110 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_4 + (int)(uVar9 << 2)));
  auVar110 = vsubps_avx(auVar68,auVar110);
  fVar56 = auVar110._0_4_;
  fVar86 = auVar110._4_4_;
  fVar33 = auVar110._8_4_;
  fVar92 = auVar110._12_4_;
  fVar94 = auVar110._16_4_;
  fVar96 = auVar110._20_4_;
  fVar98 = auVar110._24_4_;
  fVar3 = auVar110._28_4_;
  fVar107 = auVar106._0_4_;
  fVar118 = auVar106._16_4_;
  fVar162 = auVar109._0_4_;
  auVar154._0_4_ = fVar67 * fVar162 + fVar107 * auVar69._0_4_;
  auVar154._4_4_ = fVar73 * auVar109._4_4_ + auVar106._4_4_ * auVar69._4_4_;
  auVar154._8_4_ = fVar75 * auVar109._8_4_ + auVar106._8_4_ * auVar69._8_4_;
  auVar154._12_4_ = fVar77 * auVar109._12_4_ + auVar106._12_4_ * auVar69._12_4_;
  fVar163 = auVar109._16_4_;
  auVar154._16_4_ = fVar79 * fVar163 + fVar118 * auVar69._16_4_;
  auVar154._20_4_ = fVar81 * auVar109._20_4_ + auVar106._20_4_ * auVar69._20_4_;
  auVar154._24_4_ = fVar83 * auVar109._24_4_ + auVar106._24_4_ * auVar69._24_4_;
  auVar154._28_4_ = fVar85 * auVar109._28_4_ + auVar106._28_4_ * auVar69._28_4_;
  auVar134._0_4_ = param_5 * auVar133._0_4_ * fVar56;
  auVar134._4_4_ = param_5 * auVar133._4_4_ * fVar86;
  auVar134._8_4_ = param_5 * auVar133._8_4_ * fVar33;
  auVar134._12_4_ = param_5 * auVar133._12_4_ * fVar92;
  auVar134._16_4_ = param_5 * auVar133._16_4_ * fVar94;
  auVar134._20_4_ = param_5 * auVar133._20_4_ * fVar96;
  auVar134._24_4_ = param_5 * auVar133._24_4_ * fVar98;
  auVar134._28_4_ = param_5 * auVar133._28_4_ * fVar3;
  fVar21 = auVar88._0_4_;
  auVar40._0_4_ = auVar154._0_4_ + fVar21;
  auVar40._4_4_ = auVar154._4_4_ + auVar88._4_4_;
  auVar40._8_4_ = auVar154._8_4_ + auVar88._8_4_;
  auVar40._12_4_ = auVar154._12_4_ + auVar88._12_4_;
  fVar49 = auVar88._16_4_;
  auVar40._16_4_ = auVar154._16_4_ + fVar49;
  auVar40._20_4_ = auVar154._20_4_ + auVar88._20_4_;
  auVar40._24_4_ = auVar154._24_4_ + auVar88._24_4_;
  auVar40._28_4_ = auVar154._28_4_ + auVar88._28_4_;
  auVar110 = vdivps_avx(auVar134,auVar40);
  auVar126._0_4_ = param_5 * auVar142._0_4_ * fVar56;
  auVar126._4_4_ = param_5 * auVar142._4_4_ * fVar86;
  auVar126._8_4_ = param_5 * auVar142._8_4_ * fVar33;
  auVar126._12_4_ = param_5 * auVar142._12_4_ * fVar92;
  auVar126._16_4_ = param_5 * auVar142._16_4_ * fVar94;
  auVar126._20_4_ = param_5 * auVar142._20_4_ * fVar96;
  auVar126._24_4_ = param_5 * auVar142._24_4_ * fVar98;
  auVar126._28_4_ = param_5 * auVar142._28_4_ * fVar3;
  auVar64 = vdivps_avx(auVar126,auVar40);
  auVar111._0_4_ = param_5 * auVar63._0_4_ * fVar56;
  auVar111._4_4_ = param_5 * auVar63._4_4_ * fVar86;
  auVar111._8_4_ = param_5 * auVar63._8_4_ * fVar33;
  auVar111._12_4_ = param_5 * auVar63._12_4_ * fVar92;
  auVar111._16_4_ = param_5 * auVar63._16_4_ * fVar94;
  auVar111._20_4_ = param_5 * auVar63._20_4_ * fVar96;
  auVar111._24_4_ = param_5 * auVar63._24_4_ * fVar98;
  auVar111._28_4_ = param_5 * auVar63._28_4_ * fVar3;
  auVar63 = vdivps_avx(auVar111,auVar40);
  auVar133 = vcmpps_avx(auVar154,ZEXT832(0) << 0x20,0);
  auVar142 = vcmpps_avx(auVar88,ZEXT832(0) << 0x20,0);
  auVar112._0_4_ = auVar142._0_4_ & auVar133._0_4_;
  auVar112._4_4_ = auVar142._4_4_ & auVar133._4_4_;
  auVar112._8_4_ = auVar142._8_4_ & auVar133._8_4_;
  auVar112._12_4_ = auVar142._12_4_ & auVar133._12_4_;
  auVar112._16_4_ = auVar142._16_4_ & auVar133._16_4_;
  auVar112._20_4_ = auVar142._20_4_ & auVar133._20_4_;
  auVar112._24_4_ = auVar142._24_4_ & auVar133._24_4_;
  auVar112._28_4_ = auVar142._28_4_ & auVar133._28_4_;
  auVar129._4_4_ = __real_322bcc77;
  auVar129._0_4_ = __real_322bcc77;
  auVar129._8_4_ = __real_322bcc77;
  auVar129._12_4_ = __real_322bcc77;
  auVar129._16_4_ = __real_322bcc77;
  auVar129._20_4_ = __real_322bcc77;
  auVar129._24_4_ = __real_322bcc77;
  auVar129._28_4_ = __real_322bcc77;
  auVar133 = vcmpps_avx(auVar68,auVar129,2);
  auVar133 = auVar133 | auVar112;
  uVar11 = auVar133._0_4_;
  fVar131 = (float)(~uVar11 & auVar110._0_4_);
  uVar9 = auVar133._4_4_;
  fVar136 = (float)(~uVar9 & auVar110._4_4_);
  uVar115 = auVar133._8_4_;
  fVar137 = (float)(~uVar115 & auVar110._8_4_);
  uVar13 = auVar133._12_4_;
  fVar139 = (float)(~uVar13 & auVar110._12_4_);
  uVar91 = auVar133._16_4_;
  fVar145 = (float)(~uVar91 & auVar110._16_4_);
  uVar93 = auVar133._20_4_;
  fVar146 = (float)(~uVar93 & auVar110._20_4_);
  uVar95 = auVar133._24_4_;
  fVar147 = (float)(~uVar95 & auVar110._24_4_);
  uVar97 = auVar133._28_4_;
  fVar148 = (float)(~uVar97 & auVar110._28_4_);
  fVar149 = (float)(~uVar11 & auVar64._0_4_);
  fVar150 = (float)(~uVar9 & auVar64._4_4_);
  fVar151 = (float)(~uVar115 & auVar64._8_4_);
  fVar155 = (float)(~uVar13 & auVar64._12_4_);
  fVar158 = (float)(~uVar91 & auVar64._16_4_);
  fVar159 = (float)(~uVar93 & auVar64._20_4_);
  fVar160 = (float)(~uVar95 & auVar64._24_4_);
  fVar161 = (float)(~uVar97 & auVar64._28_4_);
  fVar108 = (float)(~uVar11 & auVar63._0_4_);
  fVar114 = (float)(~uVar9 & auVar63._4_4_);
  fVar116 = (float)(~uVar115 & auVar63._8_4_);
  fVar117 = (float)(~uVar13 & auVar63._12_4_);
  fVar119 = (float)(~uVar91 & auVar63._16_4_);
  fVar120 = (float)(~uVar93 & auVar63._20_4_);
  fVar121 = (float)(~uVar95 & auVar63._24_4_);
  fVar122 = (float)(~uVar97 & auVar63._28_4_);
  auVar133 = vcmpps_avx(ZEXT832(0) << 0x20,auVar88,1);
  uVar11 = auVar4._0_4_;
  auVar41._0_4_ = auVar133._0_4_ & uVar11;
  uVar9 = auVar4._4_4_;
  auVar41._4_4_ = auVar133._4_4_ & uVar9;
  uVar115 = auVar4._8_4_;
  auVar41._8_4_ = auVar133._8_4_ & uVar115;
  uVar13 = auVar4._12_4_;
  auVar41._12_4_ = auVar133._12_4_ & uVar13;
  uVar91 = auVar4._16_4_;
  auVar41._16_4_ = auVar133._16_4_ & uVar91;
  uVar93 = auVar4._20_4_;
  auVar41._20_4_ = auVar133._20_4_ & uVar93;
  uVar95 = auVar4._24_4_;
  auVar41._24_4_ = auVar133._24_4_ & uVar95;
  uVar97 = auVar4._28_4_;
  auVar41._28_4_ = auVar133._28_4_ & uVar97;
  uVar10 = vmovmskps_avx(auVar41);
  fVar56 = auVar36._0_4_;
  fVar86 = auVar36._4_4_;
  fVar33 = auVar36._8_4_;
  fVar92 = auVar36._12_4_;
  fVar94 = auVar36._16_4_;
  fVar96 = auVar36._20_4_;
  fVar98 = auVar36._24_4_;
  fVar3 = auVar36._28_4_;
  if (uVar10 != 0) {
    fVar164 = fVar21 * fVar56;
    fVar65 = auVar88._4_4_ * fVar86;
    fVar72 = auVar88._8_4_ * fVar33;
    fVar74 = auVar88._12_4_ * fVar92;
    fVar76 = fVar49 * fVar94;
    fVar78 = auVar88._20_4_ * fVar96;
    fVar80 = auVar88._24_4_ * fVar98;
    fVar82 = auVar88._28_4_ * fVar3;
    auVar50._0_4_ = -(fVar164 * fVar131) + auVar153._0_4_;
    auVar50._4_4_ = -(fVar65 * fVar136) + auVar153._4_4_;
    auVar50._8_4_ = -(fVar72 * fVar137) + auVar153._8_4_;
    auVar50._12_4_ = -(fVar74 * fVar139) + auVar153._12_4_;
    auVar54._16_4_ = -(fVar76 * fVar145) + auVar153._16_4_;
    auVar54._0_16_ = auVar50;
    auVar54._20_4_ = -(fVar78 * fVar146) + auVar153._20_4_;
    auVar54._24_4_ = -(fVar80 * fVar147) + auVar153._24_4_;
    auVar54._28_4_ = -(fVar82 * fVar148) + auVar153._28_4_;
    cVar12 = (char)uVar10;
    local_420 = auVar39._0_4_;
    iStack_41c = auVar39._4_4_;
    iStack_418 = auVar39._8_4_;
    iStack_414 = auVar39._12_4_;
    iStack_410 = auVar39._16_4_;
    iStack_40c = auVar39._20_4_;
    iStack_408 = auVar39._24_4_;
    iStack_404 = auVar39._28_4_;
    auVar22 = auVar88._0_16_;
    auVar99 = auVar88._16_16_;
    auVar34 = auVar54._16_16_;
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) == 0) goto LAB_14000ce62;
LAB_14000d329:
      uVar2 = vextractps_avx(auVar50,1);
      *(undefined4 *)(param_1 + iStack_41c) = uVar2;
      if ((uVar10 & 4) != 0) goto LAB_14000d342;
LAB_14000ce6b:
      if ((uVar10 & 8) == 0) goto LAB_14000ce74;
LAB_14000d35b:
      uVar2 = vextractps_avx(auVar50,3);
      *(undefined4 *)(param_1 + iStack_414) = uVar2;
      if ((uVar10 & 0x10) != 0) goto LAB_14000d380;
LAB_14000ce89:
      if ((uVar10 & 0x20) == 0) goto LAB_14000ce92;
LAB_14000d397:
      uVar2 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + iStack_40c) = uVar2;
      if ((uVar10 & 0x40) != 0) goto LAB_14000d3b0;
LAB_14000ce9b:
      if (-1 < cVar12) goto LAB_14000cea3;
LAB_14000d3c8:
      uVar2 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + iStack_404) = uVar2;
      auVar90._0_4_ = -(fVar164 * fVar149) + auVar24._0_4_;
      auVar90._4_4_ = -(fVar65 * fVar150) + auVar24._4_4_;
      auVar90._8_4_ = -(fVar72 * fVar151) + auVar24._8_4_;
      auVar90._12_4_ = -(fVar74 * fVar155) + auVar24._12_4_;
      auVar90._16_4_ = -(fVar76 * fVar158) + auVar24._16_4_;
      auVar90._20_4_ = -(fVar78 * fVar159) + auVar24._20_4_;
      auVar90._24_4_ = -(fVar80 * fVar160) + auVar24._24_4_;
      auVar90._28_4_ = -(fVar82 * fVar161) + auVar24._28_4_;
      if ((uVar10 & 1) != 0) goto LAB_14000d3e6;
LAB_14000ceb1:
      if ((uVar10 & 2) == 0) goto LAB_14000ceba;
LAB_14000d3fe:
      uVar2 = vextractps_avx(auVar90._0_16_,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_41c) = uVar2;
      if ((uVar10 & 4) != 0) goto LAB_14000d418;
LAB_14000cec3:
      if ((uVar10 & 8) == 0) goto LAB_14000cecc;
LAB_14000d432:
      uVar2 = vextractps_avx(auVar90._0_16_,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_414) = uVar2;
      auVar34 = auVar90._16_16_;
      if ((uVar10 & 0x10) != 0) goto LAB_14000d452;
LAB_14000cedb:
      if ((uVar10 & 0x20) == 0) goto LAB_14000cee4;
LAB_14000d46a:
      uVar2 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_40c) = uVar2;
      if ((uVar10 & 0x40) != 0) goto LAB_14000d484;
LAB_14000ceed:
      if (-1 < cVar12) goto LAB_14000cef5;
LAB_14000d49d:
      uVar2 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_404) = uVar2;
      auVar130._0_4_ = -(fVar108 * fVar164) + auVar35._0_4_;
      auVar130._4_4_ = -(fVar114 * fVar65) + auVar35._4_4_;
      auVar130._8_4_ = -(fVar116 * fVar72) + auVar35._8_4_;
      auVar130._12_4_ = -(fVar117 * fVar74) + auVar35._12_4_;
      auVar130._16_4_ = -(fVar119 * fVar76) + auVar35._16_4_;
      auVar130._20_4_ = -(fVar120 * fVar78) + auVar35._20_4_;
      auVar130._24_4_ = -(fVar121 * fVar80) + auVar35._24_4_;
      auVar130._28_4_ = -(fVar122 * fVar82) + auVar35._28_4_;
      if ((uVar10 & 1) != 0) goto LAB_14000d4bc;
LAB_14000cf03:
      if ((uVar10 & 2) == 0) goto LAB_14000cf0c;
LAB_14000d4d4:
      uVar2 = vextractps_avx(auVar130._0_16_,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_41c) = uVar2;
      if ((uVar10 & 4) != 0) goto LAB_14000d4ee;
LAB_14000cf15:
      if ((uVar10 & 8) == 0) goto LAB_14000cf1e;
LAB_14000d508:
      uVar2 = vextractps_avx(auVar130._0_16_,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_414) = uVar2;
      auVar34 = auVar130._16_16_;
    }
    else {
      *(float *)(param_1 + local_420) = auVar50._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_14000d329;
LAB_14000ce62:
      if ((uVar10 & 4) == 0) goto LAB_14000ce6b;
LAB_14000d342:
      uVar2 = vextractps_avx(auVar50,2);
      *(undefined4 *)(param_1 + iStack_418) = uVar2;
      if ((uVar10 & 8) != 0) goto LAB_14000d35b;
LAB_14000ce74:
      if ((uVar10 & 0x10) == 0) goto LAB_14000ce89;
LAB_14000d380:
      *(float *)(param_1 + iStack_410) = auVar54._16_4_;
      if ((uVar10 & 0x20) != 0) goto LAB_14000d397;
LAB_14000ce92:
      if ((uVar10 & 0x40) == 0) goto LAB_14000ce9b;
LAB_14000d3b0:
      uVar2 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + iStack_408) = uVar2;
      if (cVar12 < '\0') goto LAB_14000d3c8;
LAB_14000cea3:
      auVar90._0_4_ = -(fVar164 * fVar149) + auVar24._0_4_;
      auVar90._4_4_ = -(fVar65 * fVar150) + auVar24._4_4_;
      auVar90._8_4_ = -(fVar72 * fVar151) + auVar24._8_4_;
      auVar90._12_4_ = -(fVar74 * fVar155) + auVar24._12_4_;
      auVar90._16_4_ = -(fVar76 * fVar158) + auVar24._16_4_;
      auVar90._20_4_ = -(fVar78 * fVar159) + auVar24._20_4_;
      auVar90._24_4_ = -(fVar80 * fVar160) + auVar24._24_4_;
      auVar90._28_4_ = -(fVar82 * fVar161) + auVar24._28_4_;
      if ((uVar10 & 1) == 0) goto LAB_14000ceb1;
LAB_14000d3e6:
      *(int *)(param_1 + 4 + (longlong)local_420) = auVar90._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_14000d3fe;
LAB_14000ceba:
      if ((uVar10 & 4) == 0) goto LAB_14000cec3;
LAB_14000d418:
      uVar2 = vextractps_avx(auVar90._0_16_,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_418) = uVar2;
      if ((uVar10 & 8) != 0) goto LAB_14000d432;
LAB_14000cecc:
      auVar34 = auVar90._16_16_;
      if ((uVar10 & 0x10) == 0) goto LAB_14000cedb;
LAB_14000d452:
      *(int *)(param_1 + 4 + (longlong)iStack_410) = auVar34._0_4_;
      if ((uVar10 & 0x20) != 0) goto LAB_14000d46a;
LAB_14000cee4:
      if ((uVar10 & 0x40) == 0) goto LAB_14000ceed;
LAB_14000d484:
      uVar2 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_408) = uVar2;
      if (cVar12 < '\0') goto LAB_14000d49d;
LAB_14000cef5:
      auVar130._0_4_ = -(fVar108 * fVar164) + auVar35._0_4_;
      auVar130._4_4_ = -(fVar114 * fVar65) + auVar35._4_4_;
      auVar130._8_4_ = -(fVar116 * fVar72) + auVar35._8_4_;
      auVar130._12_4_ = -(fVar117 * fVar74) + auVar35._12_4_;
      auVar130._16_4_ = -(fVar119 * fVar76) + auVar35._16_4_;
      auVar130._20_4_ = -(fVar120 * fVar78) + auVar35._20_4_;
      auVar130._24_4_ = -(fVar121 * fVar80) + auVar35._24_4_;
      auVar130._28_4_ = -(fVar122 * fVar82) + auVar35._28_4_;
      if ((uVar10 & 1) == 0) goto LAB_14000cf03;
LAB_14000d4bc:
      *(int *)(param_1 + 8 + (longlong)local_420) = auVar130._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_14000d4d4;
LAB_14000cf0c:
      if ((uVar10 & 4) == 0) goto LAB_14000cf15;
LAB_14000d4ee:
      uVar2 = vextractps_avx(auVar130._0_16_,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_418) = uVar2;
      if ((uVar10 & 8) != 0) goto LAB_14000d508;
LAB_14000cf1e:
      auVar34 = auVar130._16_16_;
    }
    if ((uVar10 & 0x10) != 0) {
      *(int *)(param_1 + 8 + (longlong)iStack_410) = auVar34._0_4_;
    }
    if ((uVar10 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_40c) = uVar2;
    }
    if ((uVar10 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_408) = uVar2;
    }
    if (cVar12 < '\0') {
      uVar2 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_404) = uVar2;
    }
    if ((uVar10 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)local_420) = fVar21;
    }
    if ((uVar10 & 2) != 0) {
      uVar2 = vextractps_avx(auVar22,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_41c) = uVar2;
    }
    if ((uVar10 & 4) != 0) {
      uVar2 = vextractps_avx(auVar22,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_418) = uVar2;
    }
    if ((uVar10 & 8) != 0) {
      uVar2 = vextractps_avx(auVar22,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_414) = uVar2;
    }
    if ((uVar10 & 0x10) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iStack_410) = fVar49;
    }
    if ((uVar10 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar99,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_40c) = uVar2;
    }
    if ((uVar10 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar99,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_408) = uVar2;
    }
    if (cVar12 < '\0') {
      uVar2 = vextractps_avx(auVar99,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_404) = uVar2;
    }
  }
  auVar4 = vcmpps_avx(auVar109,ZEXT832(0) << 0x20,0xc);
  auVar29._0_4_ = auVar4._0_4_ & uVar11;
  auVar29._4_4_ = auVar4._4_4_ & uVar9;
  auVar29._8_4_ = auVar4._8_4_ & uVar115;
  auVar29._12_4_ = auVar4._12_4_ & uVar13;
  auVar29._16_4_ = auVar4._16_4_ & uVar91;
  auVar29._20_4_ = auVar4._20_4_ & uVar93;
  auVar29._24_4_ = auVar4._24_4_ & uVar95;
  auVar29._28_4_ = auVar4._28_4_ & uVar97;
  uVar10 = vmovmskps_avx(auVar29);
  if (uVar10 == 0) goto LAB_14000d120;
  fVar67 = fVar67 * fVar162 * fVar56;
  fVar73 = fVar73 * auVar109._4_4_ * fVar86;
  fVar75 = fVar75 * auVar109._8_4_ * fVar33;
  fVar77 = fVar77 * auVar109._12_4_ * fVar92;
  fVar79 = fVar79 * fVar163 * fVar94;
  fVar81 = fVar81 * auVar109._20_4_ * fVar96;
  fVar83 = fVar83 * auVar109._24_4_ * fVar98;
  fVar85 = fVar85 * auVar109._28_4_ * fVar3;
  local_400 = auVar37._0_4_;
  fStack_3fc = auVar37._4_4_;
  fStack_3f8 = auVar37._8_4_;
  fStack_3f4 = auVar37._12_4_;
  fStack_3f0 = auVar37._16_4_;
  fStack_3ec = auVar37._20_4_;
  fStack_3e8 = auVar37._24_4_;
  fStack_3e4 = auVar37._28_4_;
  auVar23._0_4_ = fVar67 * fVar131 + local_400;
  auVar23._4_4_ = fVar73 * fVar136 + fStack_3fc;
  auVar23._8_4_ = fVar75 * fVar137 + fStack_3f8;
  auVar23._12_4_ = fVar77 * fVar139 + fStack_3f4;
  auVar30._16_4_ = fVar79 * fVar145 + fStack_3f0;
  auVar30._0_16_ = auVar23;
  auVar30._20_4_ = fVar81 * fVar146 + fStack_3ec;
  auVar30._24_4_ = fVar83 * fVar147 + fStack_3e8;
  auVar30._28_4_ = fVar85 * fVar148 + fStack_3e4;
  cVar12 = (char)uVar10;
  auVar22 = auVar109._0_16_;
  auVar99 = auVar109._16_16_;
  iVar47 = auVar105._0_4_;
  auVar34 = auVar30._16_16_;
  iVar17 = auVar105._4_4_;
  iVar15 = auVar105._8_4_;
  iVar16 = auVar105._12_4_;
  local_3e0 = auVar51._0_4_;
  fStack_3dc = auVar51._4_4_;
  fStack_3d8 = auVar51._8_4_;
  fStack_3d4 = auVar51._12_4_;
  fStack_3d0 = auVar51._16_4_;
  fStack_3cc = auVar51._20_4_;
  fStack_3c8 = auVar51._24_4_;
  fStack_3c4 = auVar51._28_4_;
  local_3c0 = auVar124._0_4_;
  fStack_3bc = auVar124._4_4_;
  fStack_3b8 = auVar124._8_4_;
  fStack_3b4 = auVar124._12_4_;
  fStack_3b0 = auVar124._16_4_;
  fStack_3ac = auVar124._20_4_;
  fStack_3a8 = auVar124._24_4_;
  fStack_3a4 = auVar124._28_4_;
  iVar66 = auVar105._16_4_;
  iVar18 = auVar105._20_4_;
  iVar20 = auVar105._24_4_;
  iVar19 = auVar105._28_4_;
  if ((uVar10 & 1) == 0) {
    if ((uVar10 & 2) == 0) goto LAB_14000cfe3;
LAB_14000d670:
    uVar2 = vextractps_avx(auVar23,1);
    *(undefined4 *)(param_1 + iVar17) = uVar2;
    if ((uVar10 & 4) != 0) goto LAB_14000d689;
LAB_14000cfec:
    if ((uVar10 & 8) == 0) goto LAB_14000cff5;
LAB_14000d6a2:
    uVar2 = vextractps_avx(auVar23,3);
    *(undefined4 *)(param_1 + iVar16) = uVar2;
    if ((uVar10 & 0x10) != 0) goto LAB_14000d6c7;
LAB_14000d00a:
    if ((uVar10 & 0x20) == 0) goto LAB_14000d013;
LAB_14000d6de:
    uVar2 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + iVar18) = uVar2;
    if ((uVar10 & 0x40) != 0) goto LAB_14000d6f7;
LAB_14000d01c:
    if (-1 < cVar12) goto LAB_14000d024;
LAB_14000d70f:
    uVar2 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + iVar19) = uVar2;
    auVar31._0_4_ = fVar67 * fVar149 + local_3e0;
    auVar31._4_4_ = fVar73 * fVar150 + fStack_3dc;
    auVar31._8_4_ = fVar75 * fVar151 + fStack_3d8;
    auVar31._12_4_ = fVar77 * fVar155 + fStack_3d4;
    auVar31._16_4_ = fVar79 * fVar158 + fStack_3d0;
    auVar31._20_4_ = fVar81 * fVar159 + fStack_3cc;
    auVar31._24_4_ = fVar83 * fVar160 + fStack_3c8;
    auVar31._28_4_ = fVar85 * fVar161 + fStack_3c4;
    if ((uVar10 & 1) != 0) goto LAB_14000d733;
LAB_14000d038:
    if ((uVar10 & 2) == 0) goto LAB_14000d041;
LAB_14000d74b:
    uVar2 = vextractps_avx(auVar31._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar2;
    if ((uVar10 & 4) != 0) goto LAB_14000d765;
LAB_14000d04a:
    if ((uVar10 & 8) == 0) goto LAB_14000d053;
LAB_14000d77f:
    uVar2 = vextractps_avx(auVar31._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar2;
    auVar34 = auVar31._16_16_;
    if ((uVar10 & 0x10) != 0) goto LAB_14000d79f;
LAB_14000d062:
    if ((uVar10 & 0x20) == 0) goto LAB_14000d06b;
LAB_14000d7b7:
    uVar2 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar2;
    if ((uVar10 & 0x40) != 0) goto LAB_14000d7d1;
LAB_14000d074:
    if (-1 < cVar12) goto LAB_14000d07c;
LAB_14000d7ea:
    uVar2 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar2;
    auVar71._0_4_ = fVar108 * fVar67 + local_3c0;
    auVar71._4_4_ = fVar114 * fVar73 + fStack_3bc;
    auVar71._8_4_ = fVar116 * fVar75 + fStack_3b8;
    auVar71._12_4_ = fVar117 * fVar77 + fStack_3b4;
    auVar71._16_4_ = fVar119 * fVar79 + fStack_3b0;
    auVar71._20_4_ = fVar120 * fVar81 + fStack_3ac;
    auVar71._24_4_ = fVar121 * fVar83 + fStack_3a8;
    auVar71._28_4_ = fVar122 * fVar85 + fStack_3a4;
    if ((uVar10 & 1) != 0) goto LAB_14000d80e;
LAB_14000d08f:
    if ((uVar10 & 2) == 0) goto LAB_14000d098;
LAB_14000d826:
    uVar2 = vextractps_avx(auVar71._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar2;
    if ((uVar10 & 4) != 0) goto LAB_14000d840;
LAB_14000d0a1:
    if ((uVar10 & 8) == 0) goto LAB_14000d0aa;
LAB_14000d85a:
    uVar2 = vextractps_avx(auVar71._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar2;
    auVar34 = auVar71._16_16_;
  }
  else {
    *(float *)(param_1 + iVar47) = auVar23._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_14000d670;
LAB_14000cfe3:
    if ((uVar10 & 4) == 0) goto LAB_14000cfec;
LAB_14000d689:
    uVar2 = vextractps_avx(auVar23,2);
    *(undefined4 *)(param_1 + iVar15) = uVar2;
    if ((uVar10 & 8) != 0) goto LAB_14000d6a2;
LAB_14000cff5:
    if ((uVar10 & 0x10) == 0) goto LAB_14000d00a;
LAB_14000d6c7:
    *(float *)(param_1 + iVar66) = auVar30._16_4_;
    if ((uVar10 & 0x20) != 0) goto LAB_14000d6de;
LAB_14000d013:
    if ((uVar10 & 0x40) == 0) goto LAB_14000d01c;
LAB_14000d6f7:
    uVar2 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + iVar20) = uVar2;
    if (cVar12 < '\0') goto LAB_14000d70f;
LAB_14000d024:
    auVar31._0_4_ = fVar67 * fVar149 + local_3e0;
    auVar31._4_4_ = fVar73 * fVar150 + fStack_3dc;
    auVar31._8_4_ = fVar75 * fVar151 + fStack_3d8;
    auVar31._12_4_ = fVar77 * fVar155 + fStack_3d4;
    auVar31._16_4_ = fVar79 * fVar158 + fStack_3d0;
    auVar31._20_4_ = fVar81 * fVar159 + fStack_3cc;
    auVar31._24_4_ = fVar83 * fVar160 + fStack_3c8;
    auVar31._28_4_ = fVar85 * fVar161 + fStack_3c4;
    if ((uVar10 & 1) == 0) goto LAB_14000d038;
LAB_14000d733:
    *(int *)(param_1 + 4 + (longlong)iVar47) = auVar31._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_14000d74b;
LAB_14000d041:
    if ((uVar10 & 4) == 0) goto LAB_14000d04a;
LAB_14000d765:
    uVar2 = vextractps_avx(auVar31._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar2;
    if ((uVar10 & 8) != 0) goto LAB_14000d77f;
LAB_14000d053:
    auVar34 = auVar31._16_16_;
    if ((uVar10 & 0x10) == 0) goto LAB_14000d062;
LAB_14000d79f:
    *(int *)(param_1 + 4 + (longlong)iVar66) = auVar34._0_4_;
    if ((uVar10 & 0x20) != 0) goto LAB_14000d7b7;
LAB_14000d06b:
    if ((uVar10 & 0x40) == 0) goto LAB_14000d074;
LAB_14000d7d1:
    uVar2 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar2;
    if (cVar12 < '\0') goto LAB_14000d7ea;
LAB_14000d07c:
    auVar71._0_4_ = fVar108 * fVar67 + local_3c0;
    auVar71._4_4_ = fVar114 * fVar73 + fStack_3bc;
    auVar71._8_4_ = fVar116 * fVar75 + fStack_3b8;
    auVar71._12_4_ = fVar117 * fVar77 + fStack_3b4;
    auVar71._16_4_ = fVar119 * fVar79 + fStack_3b0;
    auVar71._20_4_ = fVar120 * fVar81 + fStack_3ac;
    auVar71._24_4_ = fVar121 * fVar83 + fStack_3a8;
    auVar71._28_4_ = fVar122 * fVar85 + fStack_3a4;
    if ((uVar10 & 1) == 0) goto LAB_14000d08f;
LAB_14000d80e:
    *(int *)(param_1 + 8 + (longlong)iVar47) = auVar71._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_14000d826;
LAB_14000d098:
    if ((uVar10 & 4) == 0) goto LAB_14000d0a1;
LAB_14000d840:
    uVar2 = vextractps_avx(auVar71._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar2;
    if ((uVar10 & 8) != 0) goto LAB_14000d85a;
LAB_14000d0aa:
    auVar34 = auVar71._16_16_;
  }
  if ((uVar10 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar66) = auVar34._0_4_;
  }
  if ((uVar10 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar2;
  }
  if ((uVar10 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar2;
  }
  if ((uVar10 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar47) = fVar162;
  }
  if ((uVar10 & 2) != 0) {
    uVar2 = vextractps_avx(auVar22,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar2;
  }
  if ((uVar10 & 4) != 0) {
    uVar2 = vextractps_avx(auVar22,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar2;
  }
  if ((uVar10 & 8) != 0) {
    uVar2 = vextractps_avx(auVar22,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar2;
  }
  if ((uVar10 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar163;
  }
  if ((uVar10 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar99,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar2;
  }
  if ((uVar10 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar99,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar99,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar2;
  }
LAB_14000d120:
  auVar37 = vcmpps_avx(auVar106,ZEXT1232(ZEXT812(0)),0xc);
  auVar32._0_4_ = auVar37._0_4_ & uVar11;
  auVar32._4_4_ = auVar37._4_4_ & uVar9;
  auVar32._8_4_ = auVar37._8_4_ & uVar115;
  auVar32._12_4_ = auVar37._12_4_ & uVar13;
  auVar32._16_4_ = auVar37._16_4_ & uVar91;
  auVar32._20_4_ = auVar37._20_4_ & uVar93;
  auVar32._24_4_ = auVar37._24_4_ & uVar95;
  auVar32._28_4_ = auVar37._28_4_ & uVar97;
  uVar11 = vmovmskps_avx(auVar32);
  if (uVar11 == 0) {
    return;
  }
  fVar21 = fVar107 * fVar56 * auVar69._0_4_;
  fVar49 = auVar106._4_4_ * fVar86 * auVar69._4_4_;
  fVar56 = auVar106._8_4_ * fVar33 * auVar69._8_4_;
  fVar86 = auVar106._12_4_ * fVar92 * auVar69._12_4_;
  fVar33 = fVar118 * fVar94 * auVar69._16_4_;
  fVar92 = auVar106._20_4_ * fVar96 * auVar69._20_4_;
  fVar94 = auVar106._24_4_ * fVar98 * auVar69._24_4_;
  fVar96 = auVar106._28_4_ * fVar3 * auVar69._28_4_;
  auVar132._0_4_ = fVar21 * fVar131 + auVar87._0_4_;
  auVar132._4_4_ = fVar49 * fVar136 + auVar87._4_4_;
  auVar132._8_4_ = fVar56 * fVar137 + auVar87._8_4_;
  auVar132._12_4_ = fVar86 * fVar139 + auVar87._12_4_;
  auVar135._16_4_ = fVar33 * fVar145 + auVar87._16_4_;
  auVar135._0_16_ = auVar132;
  auVar135._20_4_ = fVar92 * fVar146 + auVar87._20_4_;
  auVar135._24_4_ = fVar94 * fVar147 + auVar87._24_4_;
  auVar135._28_4_ = fVar96 * fVar148 + auVar87._28_4_;
  cVar12 = (char)uVar11;
  local_300 = auVar38._0_4_;
  iStack_2fc = auVar38._4_4_;
  iStack_2f8 = auVar38._8_4_;
  iStack_2f4 = auVar38._12_4_;
  iStack_2f0 = auVar38._16_4_;
  iStack_2ec = auVar38._20_4_;
  iStack_2e8 = auVar38._24_4_;
  iStack_2e4 = auVar38._28_4_;
  auVar34 = auVar106._0_16_;
  auVar22 = auVar106._16_16_;
  auVar99 = auVar135._16_16_;
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + local_300) = auVar132._0_4_;
  }
  if ((uVar11 & 2) != 0) {
    uVar2 = vextractps_avx(auVar132,1);
    *(undefined4 *)(param_1 + iStack_2fc) = uVar2;
  }
  if ((uVar11 & 4) != 0) {
    uVar2 = vextractps_avx(auVar132,2);
    *(undefined4 *)(param_1 + iStack_2f8) = uVar2;
  }
  if ((uVar11 & 8) != 0) {
    uVar2 = vextractps_avx(auVar132,3);
    *(undefined4 *)(param_1 + iStack_2f4) = uVar2;
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + iStack_2f0) = auVar135._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar99,1);
    *(undefined4 *)(param_1 + iStack_2ec) = uVar2;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar99,2);
    *(undefined4 *)(param_1 + iStack_2e8) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar99,3);
    *(undefined4 *)(param_1 + iStack_2e4) = uVar2;
    auVar144._0_4_ = fVar21 * fVar149 + fVar100;
    auVar144._4_4_ = fVar49 * fVar150 + fVar104;
    auVar144._8_4_ = fVar56 * fVar151 + fVar55;
    auVar144._12_4_ = fVar86 * fVar155 + fVar58;
    auVar144._16_4_ = fVar33 * fVar158 + fVar60;
    auVar144._20_4_ = fVar92 * fVar159 + fVar62;
    auVar144._24_4_ = fVar94 * fVar160 + fVar43;
    auVar144._28_4_ = fVar96 * fVar161 + fVar45;
  }
  else {
    auVar144._0_4_ = fVar21 * fVar149 + fVar100;
    auVar144._4_4_ = fVar49 * fVar150 + fVar104;
    auVar144._8_4_ = fVar56 * fVar151 + fVar55;
    auVar144._12_4_ = fVar86 * fVar155 + fVar58;
    auVar144._16_4_ = fVar33 * fVar158 + fVar60;
    auVar144._20_4_ = fVar92 * fVar159 + fVar62;
    auVar144._24_4_ = fVar94 * fVar160 + fVar43;
    auVar144._28_4_ = fVar96 * fVar161 + fVar45;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_300) = auVar144._0_4_;
  }
  auVar99 = auVar144._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar2 = vextractps_avx(auVar99,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2fc) = uVar2;
  }
  if ((uVar11 & 4) != 0) {
    uVar2 = vextractps_avx(auVar99,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2f8) = uVar2;
  }
  auVar50 = auVar144._16_16_;
  if ((uVar11 & 8) != 0) {
    uVar2 = vextractps_avx(auVar99,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2f4) = uVar2;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_2f0) = auVar144._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar50,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2ec) = uVar2;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar50,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2e8) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar50,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2e4) = uVar2;
    auVar113._0_4_ = fVar21 * fVar108 + fVar102;
    auVar113._4_4_ = fVar49 * fVar114 + fVar48;
    auVar113._8_4_ = fVar56 * fVar116 + fVar57;
    auVar113._12_4_ = fVar86 * fVar117 + fVar59;
    auVar113._16_4_ = fVar33 * fVar119 + fVar61;
    auVar113._20_4_ = fVar92 * fVar120 + fVar42;
    auVar113._24_4_ = fVar94 * fVar121 + fVar44;
    auVar113._28_4_ = fVar96 * fVar122 + fVar46;
  }
  else {
    auVar113._0_4_ = fVar21 * fVar108 + fVar102;
    auVar113._4_4_ = fVar49 * fVar114 + fVar48;
    auVar113._8_4_ = fVar56 * fVar116 + fVar57;
    auVar113._12_4_ = fVar86 * fVar117 + fVar59;
    auVar113._16_4_ = fVar33 * fVar119 + fVar61;
    auVar113._20_4_ = fVar92 * fVar120 + fVar42;
    auVar113._24_4_ = fVar94 * fVar121 + fVar44;
    auVar113._28_4_ = fVar96 * fVar122 + fVar46;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_300) = auVar113._0_4_;
  }
  auVar99 = auVar113._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar2 = vextractps_avx(auVar99,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2fc) = uVar2;
  }
  if ((uVar11 & 4) != 0) {
    uVar2 = vextractps_avx(auVar99,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2f8) = uVar2;
  }
  auVar50 = auVar113._16_16_;
  if ((uVar11 & 8) != 0) {
    uVar2 = vextractps_avx(auVar99,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2f4) = uVar2;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_2f0) = auVar113._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar50,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2ec) = uVar2;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar50,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2e8) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar50,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2e4) = uVar2;
  }
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_300) = fVar107;
  }
  if ((uVar11 & 2) != 0) {
    uVar2 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2fc) = uVar2;
  }
  if ((uVar11 & 4) != 0) {
    uVar2 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2f8) = uVar2;
  }
  if ((uVar11 & 8) != 0) {
    uVar2 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2f4) = uVar2;
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_2f0) = fVar118;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar22,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2ec) = uVar2;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar22,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2e8) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar22,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2e4) = uVar2;
  }
  return;
}

// ApplyAxialSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2 @ 14000dd00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ApplyAxialSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2
                    (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                    longlong param_5,ulonglong param_6,uint param_7)

{
  undefined1 uVar1;
  undefined1 auVar2 [32];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar56 [16];
  undefined1 *puVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar28;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar25 [32];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar54;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  float fVar55;
  float fVar63;
  float fVar64;
  float fVar66;
  float fVar68;
  float fVar69;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  float fVar65;
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  float fVar71;
  uint uVar79;
  uint uVar80;
  float fVar81;
  float fVar82;
  uint uVar85;
  float fVar87;
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  float fVar90;
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  uint uVar83;
  uint uVar88;
  uint uVar91;
  undefined1 auVar77 [32];
  float fVar84;
  float fVar86;
  float fVar89;
  float fVar92;
  undefined1 auVar78 [32];
  undefined1 auVar93 [32];
  uint uVar96;
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  float fVar100;
  float fVar101;
  undefined1 auVar99 [32];
  float fVar102;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar103 [32];
  float fVar111;
  undefined1 auVar104 [32];
  int iVar112;
  float fVar113;
  undefined1 auVar114 [32];
  undefined1 in_ZMM8 [64];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  float fVar120;
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  float fVar119;
  undefined1 in_ZMM9 [64];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  float fVar123;
  float fVar130;
  float fVar132;
  undefined1 auVar124 [16];
  float fVar131;
  float fVar134;
  undefined1 auVar126 [16];
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  undefined1 auVar127 [32];
  float fVar133;
  undefined1 auVar125 [16];
  float fVar139;
  undefined1 auVar128 [32];
  float fVar140;
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  float fVar144;
  float fVar151;
  float fVar153;
  float fVar154;
  float fVar156;
  float fVar157;
  float fVar159;
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  float fVar160;
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  float fVar152;
  float fVar155;
  float fVar158;
  float fVar161;
  undefined1 auVar150 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  int iVar166;
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  int local_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  int iStack_410;
  int iStack_40c;
  int iStack_408;
  int iStack_404;
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  int local_360;
  int iStack_35c;
  int iStack_358;
  int iStack_354;
  int iStack_350;
  int iStack_34c;
  int iStack_348;
  int iStack_344;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  int iStack_328;
  int iStack_324;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar49 [32];
  undefined1 auVar51 [32];
  undefined1 auVar129 [32];
  
  uVar8 = __real_0000000c;
  uVar7 = __real_00000008;
  uVar6 = __real_00000004;
  uVar5 = __real_40000000;
  fVar71 = __real_3f800000;
  uVar4 = __real_322bcc77;
  uVar11 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar11 = param_7;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar15 = 0;
  }
  else {
    pauVar12 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar79 = 0;
    uVar15 = 0;
    do {
      auVar2 = pauVar12[-1];
      auVar57 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar2);
      auVar45 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            pauVar12[-2]);
      auVar58 = vpblendd_avx2(auVar45,auVar57,0x88);
      auVar57 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar2);
      auVar45 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *pauVar12);
      auVar118 = vpblendd_avx2(auVar45,auVar57,0x13);
      auVar57 = vperm2i128_avx2(auVar58,auVar118,0x31);
      auVar141 = vpslld_avx2(auVar57,4);
      auVar164._4_4_ = uVar6;
      auVar164._0_4_ = uVar6;
      auVar164._8_4_ = uVar6;
      auVar164._12_4_ = uVar6;
      auVar164._16_4_ = uVar6;
      auVar164._20_4_ = uVar6;
      auVar164._24_4_ = uVar6;
      auVar164._28_4_ = uVar6;
      vpor_avx2(auVar141,auVar164);
      auVar57 = vpcmpeqd_avx2(in_ZMM8._0_32_,in_ZMM8._0_32_);
      auVar43 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
      auVar142._4_4_ = uVar7;
      auVar142._0_4_ = uVar7;
      auVar142._8_4_ = uVar7;
      auVar142._12_4_ = uVar7;
      auVar142._16_4_ = uVar7;
      auVar142._20_4_ = uVar7;
      auVar142._24_4_ = uVar7;
      auVar142._28_4_ = uVar7;
      vpor_avx2(auVar141,auVar142);
      auVar57 = vpcmpeqd_avx2(in_ZMM9._0_32_,in_ZMM9._0_32_);
      auVar44 = vgatherdps(ZEXT832(0) << 0x20,auVar57);
      auVar2 = vpblendd_avx2(auVar2,pauVar12[-2],0x24);
      auVar57 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar2);
      auVar56._4_4_ = uVar8;
      auVar56._0_4_ = uVar8;
      auVar56._8_4_ = uVar8;
      auVar56._12_4_ = uVar8;
      auVar128._16_4_ = uVar8;
      auVar128._0_16_ = auVar56;
      auVar128._20_4_ = uVar8;
      auVar128._24_4_ = uVar8;
      auVar128._28_4_ = uVar8;
      auVar45 = vpor_avx2(auVar141,auVar128);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar72 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
      auVar73._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar73._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar2 = vpermd_avx2(auVar73,*pauVar12);
      auVar2 = vpblendd_avx2(auVar57,auVar2,0xe0);
      auVar93 = vpslld_avx2(auVar2,4);
      vpor_avx2(auVar164,auVar93);
      auVar2 = vpcmpeqd_avx2(auVar57,auVar57);
      auVar145 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
      vpor_avx2(auVar93,auVar142);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar99 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
      auVar57 = vpor_avx2(auVar128,auVar93);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar73 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
      auVar25._16_16_ = ZEXT116(0) * auVar58._16_16_ | ZEXT116(1) * auVar118._0_16_;
      auVar25._0_16_ = ZEXT116(0) * auVar118._0_16_ | ZEXT116(1) * auVar58._0_16_;
      auVar167 = vpslld_avx2(auVar25,4);
      vpor_avx2(auVar167,auVar164);
      auVar2 = vpcmpeqd_avx2(auVar57,auVar57);
      auVar121 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
      vpor_avx2(auVar167,auVar142);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar115 = vgatherdps(ZEXT832(0),auVar2);
      in_ZMM9 = ZEXT3264(auVar115);
      auVar124._8_8_ = 0;
      auVar124._0_8_ = *(ulonglong *)(param_5 + uVar15);
      auVar57 = vpmovzxbd_avx2(auVar124);
      vpor_avx2(auVar167,auVar128);
      auVar2 = vpcmpeqd_avx2(auVar45,auVar45);
      auVar25 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
      auVar57 = vpslld_avx2(auVar57,2);
      auVar2 = vpmovzxdq_avx2(auVar57._16_16_);
      auVar57 = vpmovzxdq_avx2(auVar57._0_16_);
      auVar124 = vpcmpeqd_avx(auVar56,auVar56);
      auVar56 = vgatherqps((undefined1  [16])0x0,auVar124);
      auVar124 = vpcmpeqd_avx(auVar57._0_16_,auVar57._0_16_);
      auVar124 = vgatherqps(ZEXT816(0) << 0x40,auVar124);
      auVar2 = vpcmpeqd_avx2(auVar2,auVar2);
      auVar103 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
      auVar2 = vpcmpeqd_avx2(auVar141,auVar141);
      auVar97 = vgatherdps(ZEXT832(0),auVar2);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar162 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
      auVar2 = *(undefined1 (*) [32])(param_3 + (ulonglong)uVar79);
      auVar57 = vsubps_avx(auVar103,auVar97);
      fVar22 = auVar2._0_4_;
      auVar168._0_4_ = fVar22 * auVar57._0_4_ + auVar97._0_4_;
      fVar26 = auVar2._4_4_;
      auVar168._4_4_ = fVar26 * auVar57._4_4_ + auVar97._4_4_;
      fVar28 = auVar2._8_4_;
      auVar168._8_4_ = fVar28 * auVar57._8_4_ + auVar97._8_4_;
      fVar30 = auVar2._12_4_;
      auVar168._12_4_ = fVar30 * auVar57._12_4_ + auVar97._12_4_;
      fVar32 = auVar2._16_4_;
      auVar168._16_4_ = fVar32 * auVar57._16_4_ + auVar97._16_4_;
      fVar34 = auVar2._20_4_;
      auVar168._20_4_ = fVar34 * auVar57._20_4_ + auVar97._20_4_;
      fVar36 = auVar2._24_4_;
      auVar168._24_4_ = fVar36 * auVar57._24_4_ + auVar97._24_4_;
      fVar38 = auVar2._28_4_;
      auVar168._28_4_ = fVar38 * auVar57._28_4_ + auVar97._28_4_;
      auVar57 = vsubps_avx(auVar43,auVar145);
      fVar131 = auVar145._0_4_;
      auVar95._0_4_ = fVar22 * auVar57._0_4_ + fVar131;
      fVar134 = auVar145._4_4_;
      auVar95._4_4_ = fVar26 * auVar57._4_4_ + fVar134;
      fVar137 = auVar145._8_4_;
      auVar95._8_4_ = fVar28 * auVar57._8_4_ + fVar137;
      fVar140 = auVar145._12_4_;
      auVar95._12_4_ = fVar30 * auVar57._12_4_ + fVar140;
      fVar152 = auVar145._16_4_;
      auVar95._16_4_ = fVar32 * auVar57._16_4_ + fVar152;
      fVar155 = auVar145._20_4_;
      auVar95._20_4_ = fVar34 * auVar57._20_4_ + fVar155;
      fVar158 = auVar145._24_4_;
      auVar95._24_4_ = fVar36 * auVar57._24_4_ + fVar158;
      fVar161 = auVar145._28_4_;
      auVar95._28_4_ = fVar38 * auVar57._28_4_ + fVar161;
      auVar57 = vsubps_avx(auVar44,auVar99);
      fVar86 = auVar99._0_4_;
      auVar145._0_4_ = fVar22 * auVar57._0_4_ + fVar86;
      fVar87 = auVar99._4_4_;
      auVar145._4_4_ = fVar26 * auVar57._4_4_ + fVar87;
      fVar89 = auVar99._8_4_;
      auVar145._8_4_ = fVar28 * auVar57._8_4_ + fVar89;
      fVar90 = auVar99._12_4_;
      auVar145._12_4_ = fVar30 * auVar57._12_4_ + fVar90;
      fVar92 = auVar99._16_4_;
      auVar145._16_4_ = fVar32 * auVar57._16_4_ + fVar92;
      fVar100 = auVar99._20_4_;
      auVar145._20_4_ = fVar34 * auVar57._20_4_ + fVar100;
      fVar101 = auVar99._24_4_;
      auVar145._24_4_ = fVar36 * auVar57._24_4_ + fVar101;
      fVar113 = auVar99._28_4_;
      auVar145._28_4_ = fVar38 * auVar57._28_4_ + fVar113;
      auVar57 = vsubps_avx(auVar162,auVar168);
      auVar45 = vsubps_avx(auVar121,auVar95);
      auVar58 = vsubps_avx(auVar115,auVar145);
      auVar99._0_4_ =
           auVar58._0_4_ * auVar58._0_4_ +
           auVar57._0_4_ * auVar57._0_4_ + auVar45._0_4_ * auVar45._0_4_;
      auVar99._4_4_ =
           auVar58._4_4_ * auVar58._4_4_ +
           auVar57._4_4_ * auVar57._4_4_ + auVar45._4_4_ * auVar45._4_4_;
      auVar99._8_4_ =
           auVar58._8_4_ * auVar58._8_4_ +
           auVar57._8_4_ * auVar57._8_4_ + auVar45._8_4_ * auVar45._8_4_;
      auVar99._12_4_ =
           auVar58._12_4_ * auVar58._12_4_ +
           auVar57._12_4_ * auVar57._12_4_ + auVar45._12_4_ * auVar45._12_4_;
      auVar99._16_4_ =
           auVar58._16_4_ * auVar58._16_4_ +
           auVar57._16_4_ * auVar57._16_4_ + auVar45._16_4_ * auVar45._16_4_;
      auVar99._20_4_ =
           auVar58._20_4_ * auVar58._20_4_ +
           auVar57._20_4_ * auVar57._20_4_ + auVar45._20_4_ * auVar45._20_4_;
      auVar99._24_4_ =
           auVar58._24_4_ * auVar58._24_4_ +
           auVar57._24_4_ * auVar57._24_4_ + auVar45._24_4_ * auVar45._24_4_;
      auVar99._28_4_ =
           auVar58._28_4_ * auVar58._28_4_ +
           auVar57._28_4_ * auVar57._28_4_ + auVar45._28_4_ * auVar45._28_4_;
      auVar142 = vsqrtps_avx(auVar99);
      auVar57 = vdivps_avx(auVar57,auVar142);
      auVar45 = vdivps_avx(auVar45,auVar142);
      auVar58 = vdivps_avx(auVar58,auVar142);
      auVar118 = vsubps_avx(auVar142,*(undefined1 (*) [32])(param_4 + (ulonglong)uVar79));
      fVar29 = auVar118._0_4_;
      fVar33 = auVar118._4_4_;
      fVar37 = auVar118._8_4_;
      fVar119 = auVar118._12_4_;
      fVar102 = auVar118._16_4_;
      fVar106 = auVar118._20_4_;
      fVar108 = auVar118._24_4_;
      fVar110 = auVar118._28_4_;
      auVar118._4_4_ = fVar71;
      auVar118._0_4_ = fVar71;
      auVar118._8_4_ = fVar71;
      auVar118._12_4_ = fVar71;
      auVar118._16_4_ = fVar71;
      auVar118._20_4_ = fVar71;
      auVar118._24_4_ = fVar71;
      auVar118._28_4_ = fVar71;
      auVar164 = vsubps_avx(auVar118,auVar2);
      in_ZMM8 = ZEXT3264(auVar164);
      fVar81 = auVar73._0_4_;
      fVar54 = auVar73._16_4_;
      fVar84 = auVar72._0_4_;
      auVar146._0_4_ = fVar22 * fVar84 + auVar164._0_4_ * fVar81;
      auVar146._4_4_ = fVar26 * auVar72._4_4_ + auVar164._4_4_ * auVar73._4_4_;
      auVar146._8_4_ = fVar28 * auVar72._8_4_ + auVar164._8_4_ * auVar73._8_4_;
      auVar146._12_4_ = fVar30 * auVar72._12_4_ + auVar164._12_4_ * auVar73._12_4_;
      fVar82 = auVar72._16_4_;
      auVar146._16_4_ = fVar32 * fVar82 + auVar164._16_4_ * fVar54;
      auVar146._20_4_ = fVar34 * auVar72._20_4_ + auVar164._20_4_ * auVar73._20_4_;
      auVar146._24_4_ = fVar36 * auVar72._24_4_ + auVar164._24_4_ * auVar73._24_4_;
      auVar146._28_4_ = fVar38 * auVar72._28_4_ + auVar164._28_4_ * auVar73._28_4_;
      fVar31 = auVar56._0_4_;
      auVar127._0_4_ = auVar57._0_4_ * fVar29 * fVar31;
      fVar35 = auVar56._4_4_;
      auVar127._4_4_ = auVar57._4_4_ * fVar33 * fVar35;
      fVar39 = auVar56._8_4_;
      auVar127._8_4_ = auVar57._8_4_ * fVar37 * fVar39;
      fVar120 = auVar56._12_4_;
      auVar127._12_4_ = auVar57._12_4_ * fVar119 * fVar120;
      fVar105 = auVar124._0_4_;
      auVar127._16_4_ = auVar57._16_4_ * fVar102 * fVar105;
      fVar107 = auVar124._4_4_;
      auVar127._20_4_ = auVar57._20_4_ * fVar106 * fVar107;
      fVar109 = auVar124._8_4_;
      auVar127._24_4_ = auVar57._24_4_ * fVar108 * fVar109;
      fVar111 = auVar124._12_4_;
      auVar127._28_4_ = auVar57._28_4_ * fVar110 * fVar111;
      fVar23 = auVar25._0_4_;
      auVar169._0_4_ = auVar146._0_4_ + fVar23;
      auVar169._4_4_ = auVar146._4_4_ + auVar25._4_4_;
      auVar169._8_4_ = auVar146._8_4_ + auVar25._8_4_;
      auVar169._12_4_ = auVar146._12_4_ + auVar25._12_4_;
      fVar27 = auVar25._16_4_;
      auVar169._16_4_ = auVar146._16_4_ + fVar27;
      auVar169._20_4_ = auVar146._20_4_ + auVar25._20_4_;
      auVar169._24_4_ = auVar146._24_4_ + auVar25._24_4_;
      auVar169._28_4_ = auVar146._28_4_ + auVar25._28_4_;
      auVar118 = vdivps_avx(auVar127,auVar169);
      auVar104._0_4_ = fVar31 * fVar29 * auVar45._0_4_;
      auVar104._4_4_ = fVar35 * fVar33 * auVar45._4_4_;
      auVar104._8_4_ = fVar39 * fVar37 * auVar45._8_4_;
      auVar104._12_4_ = fVar120 * fVar119 * auVar45._12_4_;
      auVar104._16_4_ = fVar105 * fVar102 * auVar45._16_4_;
      auVar104._20_4_ = fVar107 * fVar106 * auVar45._20_4_;
      auVar104._24_4_ = fVar109 * fVar108 * auVar45._24_4_;
      auVar104._28_4_ = fVar111 * fVar110 * auVar45._28_4_;
      auVar128 = vdivps_avx(auVar104,auVar169);
      auVar45._0_4_ = fVar31 * fVar29 * auVar58._0_4_;
      auVar45._4_4_ = fVar35 * fVar33 * auVar58._4_4_;
      auVar45._8_4_ = fVar39 * fVar37 * auVar58._8_4_;
      auVar45._12_4_ = fVar120 * fVar119 * auVar58._12_4_;
      auVar45._16_4_ = fVar105 * fVar102 * auVar58._16_4_;
      auVar45._20_4_ = fVar107 * fVar106 * auVar58._20_4_;
      auVar45._24_4_ = fVar109 * fVar108 * auVar58._24_4_;
      auVar45._28_4_ = fVar111 * fVar110 * auVar58._28_4_;
      auVar58 = vdivps_avx(auVar45,auVar169);
      auVar57 = vcmpps_avx(auVar146,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,0
                          );
      auVar45 = vcmpps_avx(auVar25,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,0
                          );
      auVar74._0_4_ = auVar45._0_4_ & auVar57._0_4_;
      auVar74._4_4_ = auVar45._4_4_ & auVar57._4_4_;
      auVar74._8_4_ = auVar45._8_4_ & auVar57._8_4_;
      auVar74._12_4_ = auVar45._12_4_ & auVar57._12_4_;
      auVar74._16_4_ = auVar45._16_4_ & auVar57._16_4_;
      auVar74._20_4_ = auVar45._20_4_ & auVar57._20_4_;
      auVar74._24_4_ = auVar45._24_4_ & auVar57._24_4_;
      auVar74._28_4_ = auVar45._28_4_ & auVar57._28_4_;
      auVar57._4_4_ = uVar4;
      auVar57._0_4_ = uVar4;
      auVar57._8_4_ = uVar4;
      auVar57._12_4_ = uVar4;
      auVar57._16_4_ = uVar4;
      auVar57._20_4_ = uVar4;
      auVar57._24_4_ = uVar4;
      auVar57._28_4_ = uVar4;
      auVar57 = vcmpps_avx(auVar142,auVar57,2);
      auVar57 = auVar57 | auVar74;
      uVar21 = auVar57._0_4_;
      fVar123 = (float)(~uVar21 & auVar118._0_4_);
      uVar80 = auVar57._4_4_;
      fVar130 = (float)(~uVar80 & auVar118._4_4_);
      uVar83 = auVar57._8_4_;
      fVar132 = (float)(~uVar83 & auVar118._8_4_);
      uVar85 = auVar57._12_4_;
      fVar133 = (float)(~uVar85 & auVar118._12_4_);
      uVar88 = auVar57._16_4_;
      fVar135 = (float)(~uVar88 & auVar118._16_4_);
      uVar91 = auVar57._20_4_;
      fVar136 = (float)(~uVar91 & auVar118._20_4_);
      uVar10 = auVar57._24_4_;
      fVar138 = (float)(~uVar10 & auVar118._24_4_);
      uVar96 = auVar57._28_4_;
      fVar139 = (float)(~uVar96 & auVar118._28_4_);
      fVar144 = (float)(~uVar21 & auVar128._0_4_);
      fVar151 = (float)(~uVar80 & auVar128._4_4_);
      fVar153 = (float)(~uVar83 & auVar128._8_4_);
      fVar154 = (float)(~uVar85 & auVar128._12_4_);
      fVar156 = (float)(~uVar88 & auVar128._16_4_);
      fVar157 = (float)(~uVar91 & auVar128._20_4_);
      fVar159 = (float)(~uVar10 & auVar128._24_4_);
      fVar160 = (float)(~uVar96 & auVar128._28_4_);
      fVar102 = (float)(~uVar21 & auVar58._0_4_);
      fVar105 = (float)(~uVar80 & auVar58._4_4_);
      fVar106 = (float)(~uVar83 & auVar58._8_4_);
      fVar107 = (float)(~uVar85 & auVar58._12_4_);
      fVar108 = (float)(~uVar88 & auVar58._16_4_);
      fVar109 = (float)(~uVar91 & auVar58._20_4_);
      fVar110 = (float)(~uVar10 & auVar58._24_4_);
      fVar111 = (float)(~uVar96 & auVar58._28_4_);
      auVar57 = vcmpps_avx(ZEXT832(0) << 0x20,auVar25,1);
      uVar21 = vmovmskps_avx(auVar57);
      auVar2 = vmaxps_avx(auVar2,auVar164);
      auVar58._0_4_ = auVar2._0_4_ + fVar71;
      auVar58._4_4_ = auVar2._4_4_ + fVar71;
      auVar58._8_4_ = auVar2._8_4_ + fVar71;
      auVar58._12_4_ = auVar2._12_4_ + fVar71;
      auVar58._16_4_ = auVar2._16_4_ + fVar71;
      auVar58._20_4_ = auVar2._20_4_ + fVar71;
      auVar58._24_4_ = auVar2._24_4_ + fVar71;
      auVar58._28_4_ = auVar2._28_4_ + fVar71;
      auVar2._4_4_ = uVar5;
      auVar2._0_4_ = uVar5;
      auVar2._8_4_ = uVar5;
      auVar2._12_4_ = uVar5;
      auVar2._16_4_ = uVar5;
      auVar2._20_4_ = uVar5;
      auVar2._24_4_ = uVar5;
      auVar2._28_4_ = uVar5;
      auVar2 = vdivps_avx(auVar2,auVar58);
      fVar29 = auVar2._0_4_;
      fVar31 = auVar2._4_4_;
      fVar33 = auVar2._8_4_;
      fVar35 = auVar2._12_4_;
      fVar37 = auVar2._16_4_;
      fVar39 = auVar2._20_4_;
      fVar119 = auVar2._24_4_;
      fVar120 = auVar2._28_4_;
      if (uVar21 == 0) {
LAB_14000e2e0:
        auVar2 = vcmpps_avx(auVar72,ZEXT832(0) << 0x20,0xc);
        uVar21 = vmovmskps_avx(auVar2);
      }
      else {
        fVar55 = fVar23 * fVar29;
        fVar63 = auVar25._4_4_ * fVar31;
        fVar64 = auVar25._8_4_ * fVar33;
        fVar65 = auVar25._12_4_ * fVar35;
        fVar66 = fVar27 * fVar37;
        fVar68 = auVar25._20_4_ * fVar39;
        fVar69 = auVar25._24_4_ * fVar119;
        fVar70 = auVar25._28_4_ * fVar120;
        auVar67._0_4_ = -(fVar55 * fVar123) + auVar162._0_4_;
        auVar67._4_4_ = -(fVar63 * fVar130) + auVar162._4_4_;
        auVar67._8_4_ = -(fVar64 * fVar132) + auVar162._8_4_;
        auVar67._12_4_ = -(fVar65 * fVar133) + auVar162._12_4_;
        auVar163._16_4_ = -(fVar66 * fVar135) + auVar162._16_4_;
        auVar163._0_16_ = auVar67;
        auVar163._20_4_ = -(fVar68 * fVar136) + auVar162._20_4_;
        auVar163._24_4_ = -(fVar69 * fVar138) + auVar162._24_4_;
        auVar163._28_4_ = -(fVar70 * fVar139) + auVar162._28_4_;
        cVar9 = (char)uVar21;
        in_ZMM8 = ZEXT3264(auVar167);
        iVar112 = auVar167._0_4_;
        auVar40 = auVar163._16_16_;
        auVar124 = auVar25._0_16_;
        auVar56 = auVar25._16_16_;
        iVar16 = auVar167._4_4_;
        iVar17 = auVar167._8_4_;
        iVar18 = auVar167._12_4_;
        local_400 = auVar115._0_4_;
        fStack_3fc = auVar115._4_4_;
        fStack_3f8 = auVar115._8_4_;
        fStack_3f4 = auVar115._12_4_;
        fStack_3f0 = auVar115._16_4_;
        fStack_3ec = auVar115._20_4_;
        fStack_3e8 = auVar115._24_4_;
        fStack_3e4 = auVar115._28_4_;
        iVar166 = auVar167._16_4_;
        iVar19 = auVar167._20_4_;
        iVar20 = auVar167._24_4_;
        iVar14 = auVar167._28_4_;
        if ((uVar21 & 1) == 0) {
          if ((uVar21 & 2) == 0) goto LAB_14000e18b;
LAB_14000e4a8:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_14000e4c2;
LAB_14000e195:
          if ((uVar21 & 8) == 0) goto LAB_14000e19f;
LAB_14000e4dc:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar21 & 0x10) != 0) goto LAB_14000e502;
LAB_14000e1b5:
          if ((uVar21 & 0x20) == 0) goto LAB_14000e1bf;
LAB_14000e51a:
          uVar3 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_14000e534;
LAB_14000e1c9:
          if (-1 < cVar9) goto LAB_14000e1d2;
LAB_14000e54d:
          uVar3 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + iVar14) = uVar3;
          auVar115._0_4_ = -(fVar55 * fVar144) + auVar121._0_4_;
          auVar115._4_4_ = -(fVar63 * fVar151) + auVar121._4_4_;
          auVar115._8_4_ = -(fVar64 * fVar153) + auVar121._8_4_;
          auVar115._12_4_ = -(fVar65 * fVar154) + auVar121._12_4_;
          auVar115._16_4_ = -(fVar66 * fVar156) + auVar121._16_4_;
          auVar115._20_4_ = -(fVar68 * fVar157) + auVar121._20_4_;
          auVar115._24_4_ = -(fVar69 * fVar159) + auVar121._24_4_;
          auVar115._28_4_ = -(fVar70 * fVar160) + auVar121._28_4_;
          if ((uVar21 & 1) != 0) goto LAB_14000e56c;
LAB_14000e1e1:
          if ((uVar21 & 2) == 0) goto LAB_14000e1eb;
LAB_14000e585:
          uVar3 = vextractps_avx(auVar115._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_14000e5a0;
LAB_14000e1f5:
          if ((uVar21 & 8) == 0) goto LAB_14000e1ff;
LAB_14000e5bb:
          uVar3 = vextractps_avx(auVar115._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          auVar67 = auVar115._16_16_;
          if ((uVar21 & 0x10) != 0) goto LAB_14000e5dc;
LAB_14000e20f:
          if ((uVar21 & 0x20) == 0) goto LAB_14000e219;
LAB_14000e5f5:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_14000e610;
LAB_14000e223:
          if (-1 < cVar9) goto LAB_14000e22c;
LAB_14000e62a:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar3;
          auVar121._0_4_ = -(fVar102 * fVar55) + local_400;
          auVar121._4_4_ = -(fVar105 * fVar63) + fStack_3fc;
          auVar121._8_4_ = -(fVar106 * fVar64) + fStack_3f8;
          auVar121._12_4_ = -(fVar107 * fVar65) + fStack_3f4;
          auVar121._16_4_ = -(fVar108 * fVar66) + fStack_3f0;
          auVar121._20_4_ = -(fVar109 * fVar68) + fStack_3ec;
          auVar121._24_4_ = -(fVar110 * fVar69) + fStack_3e8;
          auVar121._28_4_ = -(fVar111 * fVar70) + fStack_3e4;
          if ((uVar21 & 1) != 0) goto LAB_14000e64f;
LAB_14000e240:
          if ((uVar21 & 2) == 0) goto LAB_14000e24a;
LAB_14000e668:
          uVar3 = vextractps_avx(auVar121._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_14000e683;
LAB_14000e254:
          if ((uVar21 & 8) == 0) goto LAB_14000e25e;
LAB_14000e69e:
          uVar3 = vextractps_avx(auVar121._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          auVar67 = auVar121._16_16_;
        }
        else {
          *(float *)(param_1 + iVar112) = auVar67._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14000e4a8;
LAB_14000e18b:
          if ((uVar21 & 4) == 0) goto LAB_14000e195;
LAB_14000e4c2:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14000e4dc;
LAB_14000e19f:
          if ((uVar21 & 0x10) == 0) goto LAB_14000e1b5;
LAB_14000e502:
          *(float *)(param_1 + iVar166) = auVar163._16_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_14000e51a;
LAB_14000e1bf:
          if ((uVar21 & 0x40) == 0) goto LAB_14000e1c9;
LAB_14000e534:
          uVar3 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_14000e54d;
LAB_14000e1d2:
          auVar115._0_4_ = -(fVar55 * fVar144) + auVar121._0_4_;
          auVar115._4_4_ = -(fVar63 * fVar151) + auVar121._4_4_;
          auVar115._8_4_ = -(fVar64 * fVar153) + auVar121._8_4_;
          auVar115._12_4_ = -(fVar65 * fVar154) + auVar121._12_4_;
          auVar115._16_4_ = -(fVar66 * fVar156) + auVar121._16_4_;
          auVar115._20_4_ = -(fVar68 * fVar157) + auVar121._20_4_;
          auVar115._24_4_ = -(fVar69 * fVar159) + auVar121._24_4_;
          auVar115._28_4_ = -(fVar70 * fVar160) + auVar121._28_4_;
          if ((uVar21 & 1) == 0) goto LAB_14000e1e1;
LAB_14000e56c:
          *(int *)(param_1 + 4 + (longlong)iVar112) = auVar115._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14000e585;
LAB_14000e1eb:
          if ((uVar21 & 4) == 0) goto LAB_14000e1f5;
LAB_14000e5a0:
          uVar3 = vextractps_avx(auVar115._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14000e5bb;
LAB_14000e1ff:
          auVar67 = auVar115._16_16_;
          if ((uVar21 & 0x10) == 0) goto LAB_14000e20f;
LAB_14000e5dc:
          *(int *)(param_1 + 4 + (longlong)iVar166) = auVar67._0_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_14000e5f5;
LAB_14000e219:
          if ((uVar21 & 0x40) == 0) goto LAB_14000e223;
LAB_14000e610:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_14000e62a;
LAB_14000e22c:
          auVar121._0_4_ = -(fVar102 * fVar55) + local_400;
          auVar121._4_4_ = -(fVar105 * fVar63) + fStack_3fc;
          auVar121._8_4_ = -(fVar106 * fVar64) + fStack_3f8;
          auVar121._12_4_ = -(fVar107 * fVar65) + fStack_3f4;
          auVar121._16_4_ = -(fVar108 * fVar66) + fStack_3f0;
          auVar121._20_4_ = -(fVar109 * fVar68) + fStack_3ec;
          auVar121._24_4_ = -(fVar110 * fVar69) + fStack_3e8;
          auVar121._28_4_ = -(fVar111 * fVar70) + fStack_3e4;
          if ((uVar21 & 1) == 0) goto LAB_14000e240;
LAB_14000e64f:
          *(int *)(param_1 + 8 + (longlong)iVar112) = auVar121._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14000e668;
LAB_14000e24a:
          if ((uVar21 & 4) == 0) goto LAB_14000e254;
LAB_14000e683:
          uVar3 = vextractps_avx(auVar121._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14000e69e;
LAB_14000e25e:
          auVar67 = auVar121._16_16_;
        }
        if ((uVar21 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar166) = auVar67._0_4_;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if (cVar9 < '\0') {
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar3;
        }
        if ((uVar21 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar112) = fVar23;
        }
        if ((uVar21 & 2) != 0) {
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
        }
        if ((uVar21 & 4) != 0) {
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar21 & 8) != 0) {
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar21 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar27;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar56,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar56,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        if (-1 < cVar9) goto LAB_14000e2e0;
        uVar3 = vextractps_avx(auVar56,3);
        *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar3;
        auVar2 = vcmpps_avx(auVar72,ZEXT832(0) << 0x20,0xc);
        uVar21 = vmovmskps_avx(auVar2);
      }
      if (uVar21 != 0) {
        fVar22 = fVar22 * fVar84 * fVar29;
        fVar26 = fVar26 * auVar72._4_4_ * fVar31;
        fVar28 = fVar28 * auVar72._8_4_ * fVar33;
        fVar30 = fVar30 * auVar72._12_4_ * fVar35;
        fVar32 = fVar32 * fVar82 * fVar37;
        fVar34 = fVar34 * auVar72._20_4_ * fVar39;
        fVar36 = fVar36 * auVar72._24_4_ * fVar119;
        fVar38 = fVar38 * auVar72._28_4_ * fVar120;
        local_3e0 = auVar103._0_4_;
        fStack_3dc = auVar103._4_4_;
        fStack_3d8 = auVar103._8_4_;
        fStack_3d4 = auVar103._12_4_;
        fStack_3d0 = auVar103._16_4_;
        fStack_3cc = auVar103._20_4_;
        fStack_3c8 = auVar103._24_4_;
        fStack_3c4 = auVar103._28_4_;
        auVar40._0_4_ = fVar22 * fVar123 + local_3e0;
        auVar40._4_4_ = fVar26 * fVar130 + fStack_3dc;
        auVar40._8_4_ = fVar28 * fVar132 + fStack_3d8;
        auVar40._12_4_ = fVar30 * fVar133 + fStack_3d4;
        auVar103._16_4_ = fVar32 * fVar135 + fStack_3d0;
        auVar103._0_16_ = auVar40;
        auVar103._20_4_ = fVar34 * fVar136 + fStack_3cc;
        auVar103._24_4_ = fVar36 * fVar138 + fStack_3c8;
        auVar103._28_4_ = fVar38 * fVar139 + fStack_3c4;
        cVar9 = (char)uVar21;
        auVar56 = auVar72._0_16_;
        auVar67 = auVar72._16_16_;
        iVar112 = auVar141._0_4_;
        auVar124 = auVar103._16_16_;
        iVar16 = auVar141._4_4_;
        iVar17 = auVar141._8_4_;
        iVar18 = auVar141._12_4_;
        local_440 = auVar43._0_4_;
        fStack_43c = auVar43._4_4_;
        fStack_438 = auVar43._8_4_;
        fStack_434 = auVar43._12_4_;
        fStack_430 = auVar43._16_4_;
        fStack_42c = auVar43._20_4_;
        fStack_428 = auVar43._24_4_;
        fStack_424 = auVar43._28_4_;
        local_3c0 = auVar44._0_4_;
        fStack_3bc = auVar44._4_4_;
        fStack_3b8 = auVar44._8_4_;
        fStack_3b4 = auVar44._12_4_;
        fStack_3b0 = auVar44._16_4_;
        fStack_3ac = auVar44._20_4_;
        fStack_3a8 = auVar44._24_4_;
        fStack_3a4 = auVar44._28_4_;
        iVar166 = auVar141._16_4_;
        iVar19 = auVar141._20_4_;
        iVar20 = auVar141._24_4_;
        iVar14 = auVar141._28_4_;
        if ((uVar21 & 1) == 0) {
          if ((uVar21 & 2) == 0) goto LAB_14000e329;
LAB_14000e828:
          uVar3 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_14000e842;
LAB_14000e333:
          if ((uVar21 & 8) == 0) goto LAB_14000e33d;
LAB_14000e85c:
          uVar3 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar21 & 0x10) != 0) goto LAB_14000e882;
LAB_14000e353:
          if ((uVar21 & 0x20) == 0) goto LAB_14000e35d;
LAB_14000e89a:
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_14000e8b4;
LAB_14000e367:
          if (-1 < cVar9) goto LAB_14000e370;
LAB_14000e8cd:
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + iVar14) = uVar3;
          auVar43._0_4_ = fVar22 * fVar144 + local_440;
          auVar43._4_4_ = fVar26 * fVar151 + fStack_43c;
          auVar43._8_4_ = fVar28 * fVar153 + fStack_438;
          auVar43._12_4_ = fVar30 * fVar154 + fStack_434;
          auVar43._16_4_ = fVar32 * fVar156 + fStack_430;
          auVar43._20_4_ = fVar34 * fVar157 + fStack_42c;
          auVar43._24_4_ = fVar36 * fVar159 + fStack_428;
          auVar43._28_4_ = fVar38 * fVar160 + fStack_424;
          if ((uVar21 & 1) != 0) goto LAB_14000e8f2;
LAB_14000e385:
          if ((uVar21 & 2) == 0) goto LAB_14000e38f;
LAB_14000e90b:
          uVar3 = vextractps_avx(auVar43._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_14000e926;
LAB_14000e399:
          if ((uVar21 & 8) == 0) goto LAB_14000e3a3;
LAB_14000e941:
          uVar3 = vextractps_avx(auVar43._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          auVar124 = auVar43._16_16_;
          if ((uVar21 & 0x10) != 0) goto LAB_14000e962;
LAB_14000e3b3:
          if ((uVar21 & 0x20) == 0) goto LAB_14000e3bd;
LAB_14000e97b:
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_14000e996;
LAB_14000e3c7:
          if (-1 < cVar9) goto LAB_14000e3d0;
LAB_14000e9b0:
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar3;
          auVar44._0_4_ = fVar102 * fVar22 + local_3c0;
          auVar44._4_4_ = fVar105 * fVar26 + fStack_3bc;
          auVar44._8_4_ = fVar106 * fVar28 + fStack_3b8;
          auVar44._12_4_ = fVar107 * fVar30 + fStack_3b4;
          auVar44._16_4_ = fVar108 * fVar32 + fStack_3b0;
          auVar44._20_4_ = fVar109 * fVar34 + fStack_3ac;
          auVar44._24_4_ = fVar110 * fVar36 + fStack_3a8;
          auVar44._28_4_ = fVar111 * fVar38 + fStack_3a4;
          if ((uVar21 & 1) != 0) goto LAB_14000e9d5;
LAB_14000e3e4:
          if ((uVar21 & 2) == 0) goto LAB_14000e3ee;
LAB_14000e9ee:
          uVar3 = vextractps_avx(auVar44._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_14000ea09;
LAB_14000e3f8:
          if ((uVar21 & 8) == 0) goto LAB_14000e402;
LAB_14000ea24:
          uVar3 = vextractps_avx(auVar44._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          auVar124 = auVar44._16_16_;
        }
        else {
          *(float *)(param_1 + iVar112) = auVar40._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14000e828;
LAB_14000e329:
          if ((uVar21 & 4) == 0) goto LAB_14000e333;
LAB_14000e842:
          uVar3 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14000e85c;
LAB_14000e33d:
          if ((uVar21 & 0x10) == 0) goto LAB_14000e353;
LAB_14000e882:
          *(float *)(param_1 + iVar166) = auVar103._16_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_14000e89a;
LAB_14000e35d:
          if ((uVar21 & 0x40) == 0) goto LAB_14000e367;
LAB_14000e8b4:
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_14000e8cd;
LAB_14000e370:
          auVar43._0_4_ = fVar22 * fVar144 + local_440;
          auVar43._4_4_ = fVar26 * fVar151 + fStack_43c;
          auVar43._8_4_ = fVar28 * fVar153 + fStack_438;
          auVar43._12_4_ = fVar30 * fVar154 + fStack_434;
          auVar43._16_4_ = fVar32 * fVar156 + fStack_430;
          auVar43._20_4_ = fVar34 * fVar157 + fStack_42c;
          auVar43._24_4_ = fVar36 * fVar159 + fStack_428;
          auVar43._28_4_ = fVar38 * fVar160 + fStack_424;
          if ((uVar21 & 1) == 0) goto LAB_14000e385;
LAB_14000e8f2:
          *(int *)(param_1 + 4 + (longlong)iVar112) = auVar43._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14000e90b;
LAB_14000e38f:
          if ((uVar21 & 4) == 0) goto LAB_14000e399;
LAB_14000e926:
          uVar3 = vextractps_avx(auVar43._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14000e941;
LAB_14000e3a3:
          auVar124 = auVar43._16_16_;
          if ((uVar21 & 0x10) == 0) goto LAB_14000e3b3;
LAB_14000e962:
          *(int *)(param_1 + 4 + (longlong)iVar166) = auVar124._0_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_14000e97b;
LAB_14000e3bd:
          if ((uVar21 & 0x40) == 0) goto LAB_14000e3c7;
LAB_14000e996:
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_14000e9b0;
LAB_14000e3d0:
          auVar44._0_4_ = fVar102 * fVar22 + local_3c0;
          auVar44._4_4_ = fVar105 * fVar26 + fStack_3bc;
          auVar44._8_4_ = fVar106 * fVar28 + fStack_3b8;
          auVar44._12_4_ = fVar107 * fVar30 + fStack_3b4;
          auVar44._16_4_ = fVar108 * fVar32 + fStack_3b0;
          auVar44._20_4_ = fVar109 * fVar34 + fStack_3ac;
          auVar44._24_4_ = fVar110 * fVar36 + fStack_3a8;
          auVar44._28_4_ = fVar111 * fVar38 + fStack_3a4;
          if ((uVar21 & 1) == 0) goto LAB_14000e3e4;
LAB_14000e9d5:
          *(int *)(param_1 + 8 + (longlong)iVar112) = auVar44._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14000e9ee;
LAB_14000e3ee:
          if ((uVar21 & 4) == 0) goto LAB_14000e3f8;
LAB_14000ea09:
          uVar3 = vextractps_avx(auVar44._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14000ea24;
LAB_14000e402:
          auVar124 = auVar44._16_16_;
        }
        if ((uVar21 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar166) = auVar124._0_4_;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if (cVar9 < '\0') {
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar3;
        }
        if ((uVar21 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar112) = fVar84;
        }
        if ((uVar21 & 2) != 0) {
          uVar3 = vextractps_avx(auVar56,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
        }
        if ((uVar21 & 4) != 0) {
          uVar3 = vextractps_avx(auVar56,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar21 & 8) != 0) {
          uVar3 = vextractps_avx(auVar56,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar21 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar82;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        in_ZMM9 = ZEXT1664(auVar141._16_16_);
        if (cVar9 < '\0') {
          in_ZMM9 = ZEXT1664(auVar141._16_16_);
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar3;
        }
      }
      auVar2 = vcmpps_avx(auVar73,ZEXT832(0) << 0x20,0xc);
      uVar21 = vmovmskps_avx(auVar2);
      if (uVar21 != 0) {
        fVar23 = fVar81 * fVar29 * auVar164._0_4_;
        fVar27 = auVar73._4_4_ * fVar31 * auVar164._4_4_;
        fVar29 = auVar73._8_4_ * fVar33 * auVar164._8_4_;
        fVar31 = auVar73._12_4_ * fVar35 * auVar164._12_4_;
        fVar33 = fVar54 * fVar37 * auVar164._16_4_;
        fVar35 = auVar73._20_4_ * fVar39 * auVar164._20_4_;
        fVar37 = auVar73._24_4_ * fVar119 * auVar164._24_4_;
        fVar39 = auVar73._28_4_ * fVar120 * auVar164._28_4_;
        auVar125._0_4_ = fVar23 * fVar123 + auVar97._0_4_;
        auVar125._4_4_ = fVar27 * fVar130 + auVar97._4_4_;
        auVar125._8_4_ = fVar29 * fVar132 + auVar97._8_4_;
        auVar125._12_4_ = fVar31 * fVar133 + auVar97._12_4_;
        auVar72._16_4_ = fVar33 * fVar135 + auVar97._16_4_;
        auVar72._0_16_ = auVar125;
        auVar72._20_4_ = fVar35 * fVar136 + auVar97._20_4_;
        auVar72._24_4_ = fVar37 * fVar138 + auVar97._24_4_;
        auVar72._28_4_ = fVar39 * fVar139 + auVar97._28_4_;
        cVar9 = (char)uVar21;
        iVar112 = auVar93._0_4_;
        auVar67 = auVar72._16_16_;
        auVar124 = auVar73._0_16_;
        auVar56 = auVar73._16_16_;
        iVar16 = auVar93._4_4_;
        iVar17 = auVar93._8_4_;
        iVar18 = auVar93._12_4_;
        iVar166 = auVar93._16_4_;
        iVar19 = auVar93._20_4_;
        iVar20 = auVar93._24_4_;
        iVar14 = auVar93._28_4_;
        if ((uVar21 & 1) == 0) {
          if ((uVar21 & 2) == 0) goto LAB_14000ebcd;
LAB_14000ed48:
          uVar3 = vextractps_avx(auVar125,1);
          *(undefined4 *)(param_1 + iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_14000ed62;
LAB_14000ebd7:
          if ((uVar21 & 8) == 0) goto LAB_14000ebe1;
LAB_14000ed7c:
          uVar3 = vextractps_avx(auVar125,3);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar21 & 0x10) != 0) goto LAB_14000eda2;
LAB_14000ebf7:
          if ((uVar21 & 0x20) == 0) goto LAB_14000ec01;
LAB_14000edba:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_14000edd4;
LAB_14000ec0b:
          if (-1 < cVar9) goto LAB_14000ec14;
LAB_14000eded:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + iVar14) = uVar3;
          auVar93._0_4_ = fVar23 * fVar144 + fVar131;
          auVar93._4_4_ = fVar27 * fVar151 + fVar134;
          auVar93._8_4_ = fVar29 * fVar153 + fVar137;
          auVar93._12_4_ = fVar31 * fVar154 + fVar140;
          auVar93._16_4_ = fVar33 * fVar156 + fVar152;
          auVar93._20_4_ = fVar35 * fVar157 + fVar155;
          auVar93._24_4_ = fVar37 * fVar159 + fVar158;
          auVar93._28_4_ = fVar39 * fVar160 + fVar161;
          if ((uVar21 & 1) != 0) goto LAB_14000ee11;
LAB_14000ec28:
          if ((uVar21 & 2) == 0) goto LAB_14000ec32;
LAB_14000ee2a:
          uVar3 = vextractps_avx(auVar93._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_14000ee45;
LAB_14000ec3c:
          if ((uVar21 & 8) == 0) goto LAB_14000ec46;
LAB_14000ee60:
          uVar3 = vextractps_avx(auVar93._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          auVar67 = auVar93._16_16_;
          if ((uVar21 & 0x10) != 0) goto LAB_14000ee81;
LAB_14000ec56:
          if ((uVar21 & 0x20) == 0) goto LAB_14000ec60;
LAB_14000ee9a:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_14000eeb5;
LAB_14000ec6a:
          if (-1 < cVar9) goto LAB_14000ec73;
LAB_14000eecf:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar3;
          auVar97._0_4_ = fVar23 * fVar102 + fVar86;
          auVar97._4_4_ = fVar27 * fVar105 + fVar87;
          auVar97._8_4_ = fVar29 * fVar106 + fVar89;
          auVar97._12_4_ = fVar31 * fVar107 + fVar90;
          auVar97._16_4_ = fVar33 * fVar108 + fVar92;
          auVar97._20_4_ = fVar35 * fVar109 + fVar100;
          auVar97._24_4_ = fVar37 * fVar110 + fVar101;
          auVar97._28_4_ = fVar39 * fVar111 + fVar113;
          if ((uVar21 & 1) != 0) goto LAB_14000eef4;
LAB_14000ec87:
          if ((uVar21 & 2) == 0) goto LAB_14000ec91;
LAB_14000ef0d:
          uVar3 = vextractps_avx(auVar97._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_14000ef28;
LAB_14000ec9b:
          if ((uVar21 & 8) == 0) goto LAB_14000eca5;
LAB_14000ef43:
          uVar3 = vextractps_avx(auVar97._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          auVar67 = auVar97._16_16_;
        }
        else {
          *(float *)(param_1 + iVar112) = auVar125._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14000ed48;
LAB_14000ebcd:
          if ((uVar21 & 4) == 0) goto LAB_14000ebd7;
LAB_14000ed62:
          uVar3 = vextractps_avx(auVar125,2);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14000ed7c;
LAB_14000ebe1:
          if ((uVar21 & 0x10) == 0) goto LAB_14000ebf7;
LAB_14000eda2:
          *(float *)(param_1 + iVar166) = auVar72._16_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_14000edba;
LAB_14000ec01:
          if ((uVar21 & 0x40) == 0) goto LAB_14000ec0b;
LAB_14000edd4:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_14000eded;
LAB_14000ec14:
          auVar93._0_4_ = fVar23 * fVar144 + fVar131;
          auVar93._4_4_ = fVar27 * fVar151 + fVar134;
          auVar93._8_4_ = fVar29 * fVar153 + fVar137;
          auVar93._12_4_ = fVar31 * fVar154 + fVar140;
          auVar93._16_4_ = fVar33 * fVar156 + fVar152;
          auVar93._20_4_ = fVar35 * fVar157 + fVar155;
          auVar93._24_4_ = fVar37 * fVar159 + fVar158;
          auVar93._28_4_ = fVar39 * fVar160 + fVar161;
          if ((uVar21 & 1) == 0) goto LAB_14000ec28;
LAB_14000ee11:
          *(int *)(param_1 + 4 + (longlong)iVar112) = auVar93._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14000ee2a;
LAB_14000ec32:
          if ((uVar21 & 4) == 0) goto LAB_14000ec3c;
LAB_14000ee45:
          uVar3 = vextractps_avx(auVar93._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14000ee60;
LAB_14000ec46:
          auVar67 = auVar93._16_16_;
          if ((uVar21 & 0x10) == 0) goto LAB_14000ec56;
LAB_14000ee81:
          *(int *)(param_1 + 4 + (longlong)iVar166) = auVar67._0_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_14000ee9a;
LAB_14000ec60:
          if ((uVar21 & 0x40) == 0) goto LAB_14000ec6a;
LAB_14000eeb5:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_14000eecf;
LAB_14000ec73:
          auVar97._0_4_ = fVar23 * fVar102 + fVar86;
          auVar97._4_4_ = fVar27 * fVar105 + fVar87;
          auVar97._8_4_ = fVar29 * fVar106 + fVar89;
          auVar97._12_4_ = fVar31 * fVar107 + fVar90;
          auVar97._16_4_ = fVar33 * fVar108 + fVar92;
          auVar97._20_4_ = fVar35 * fVar109 + fVar100;
          auVar97._24_4_ = fVar37 * fVar110 + fVar101;
          auVar97._28_4_ = fVar39 * fVar111 + fVar113;
          if ((uVar21 & 1) == 0) goto LAB_14000ec87;
LAB_14000eef4:
          *(int *)(param_1 + 8 + (longlong)iVar112) = auVar97._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14000ef0d;
LAB_14000ec91:
          if ((uVar21 & 4) == 0) goto LAB_14000ec9b;
LAB_14000ef28:
          uVar3 = vextractps_avx(auVar97._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14000ef43;
LAB_14000eca5:
          auVar67 = auVar97._16_16_;
        }
        if ((uVar21 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar166) = auVar67._0_4_;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if (cVar9 < '\0') {
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar3;
        }
        if ((uVar21 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar112) = fVar81;
        }
        if ((uVar21 & 2) != 0) {
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
        }
        if ((uVar21 & 4) != 0) {
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar21 & 8) != 0) {
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar21 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar54;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar56,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar56,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        if (cVar9 < '\0') {
          uVar3 = vextractps_avx(auVar56,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar3;
        }
      }
      uVar15 = uVar15 + 8;
      uVar79 = uVar79 + 0x20;
      pauVar12 = pauVar12 + 3;
    } while ((int)uVar15 < (int)(uVar11 & 0xfffffff8));
  }
  iVar14 = (int)uVar15;
  if ((int)param_7 <= iVar14) {
    return param_6;
  }
  auVar141._4_4_ = iVar14;
  auVar141._0_4_ = iVar14;
  auVar141._8_4_ = iVar14;
  auVar141._12_4_ = iVar14;
  auVar141._16_4_ = iVar14;
  auVar141._20_4_ = iVar14;
  auVar141._24_4_ = iVar14;
  auVar141._28_4_ = iVar14;
  auVar2 = vpor_avx2(auVar141,
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar162._4_4_ = param_7;
  auVar162._0_4_ = param_7;
  auVar162._8_4_ = param_7;
  auVar162._12_4_ = param_7;
  auVar162._16_4_ = param_7;
  auVar162._20_4_ = param_7;
  auVar162._24_4_ = param_7;
  auVar162._28_4_ = param_7;
  auVar2 = vpcmpgtd_avx2(auVar162,auVar2);
  uVar15 = uVar15 & 0xffffffff;
  pauVar12 = (undefined1 (*) [32])(param_2 + uVar15 * 0xc);
  uVar11 = vmovmskps_avx(auVar2);
  if (uVar11 == 0xff) {
    auVar57 = pauVar12[1];
    auVar45 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                          auVar57);
    auVar58 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                          *pauVar12);
    auVar45 = vpblendd_avx2(auVar58,auVar45,0x88);
    auVar58 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                          auVar57);
    auVar118 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar12[2]);
    auVar58 = vpblendd_avx2(auVar118,auVar58,0x13);
    auVar94._16_16_ = ZEXT116(0) * auVar45._16_16_ | ZEXT116(1) * auVar58._0_16_;
    auVar94._0_16_ = ZEXT116(0) * auVar58._0_16_ | ZEXT116(1) * auVar45._0_16_;
    auVar45 = vperm2i128_avx2(auVar45,auVar58,0x31);
    auVar57 = vpblendd_avx2(auVar57,*pauVar12,0x24);
    auVar57 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                          auVar57);
    auVar167._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar167._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar58 = vpermd_avx2(auVar167,pauVar12[2]);
    auVar57 = vpblendd_avx2(auVar57,auVar58,0xe0);
  }
  else {
    auVar94 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar2);
    auVar45 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
    auVar57 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar2);
  }
  auVar58 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_3 + (iVar14 << 2)));
  auVar24 = auVar58._0_16_;
  auVar118 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_4 + (iVar14 << 2)));
  if ((~(byte)uVar11 & 0x81) == 0) {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulonglong *)(param_5 + uVar15);
  }
  else {
    puVar13 = (undefined1 *)(param_5 + uVar15);
    if ((uVar11 & 1) != 0) {
      uVar1 = *puVar13;
      auVar24[1] = uVar1;
      auVar24[0] = uVar1;
      auVar24[2] = uVar1;
      auVar24[3] = uVar1;
      auVar24[4] = uVar1;
      auVar24[5] = uVar1;
      auVar24[6] = uVar1;
      auVar24[7] = uVar1;
      auVar24[8] = uVar1;
      auVar24[9] = uVar1;
      auVar24[10] = uVar1;
      auVar24[0xb] = uVar1;
      auVar24[0xc] = uVar1;
      auVar24[0xd] = uVar1;
      auVar24[0xe] = uVar1;
      auVar24[0xf] = uVar1;
    }
    if ((uVar11 & 2) != 0) {
      auVar124 = vpinsrb_avx(auVar24,(uint)(byte)puVar13[1],1);
      auVar24 = vpblendw_avx(auVar124,auVar24,0xe);
    }
    if ((uVar11 & 4) != 0) {
      auVar124 = vpmovzxwd_avx(auVar24);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[2],2);
      auVar124 = vpinsrb_avx(auVar124,(uint)auVar24[3],3);
      auVar24 = vpblendd_avx2(auVar124,auVar24,2);
    }
    if ((uVar11 & 8) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048080030280020100);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[3],3);
      auVar24 = vpblendd_avx2(auVar124,auVar24,2);
    }
    if ((uVar11 & 0x10) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048080030203020100);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[4],4);
      auVar124 = vpinsrb_avx(auVar124,(uint)auVar24[5],5);
      auVar24 = vpblendw_avx(auVar124,auVar24,8);
    }
    if ((uVar11 & 0x20) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048080030403020100);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[5],5);
      auVar24 = vpblendw_avx(auVar124,auVar24,8);
    }
    if ((uVar11 & 0x40) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048080050403020100);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[6],6);
      auVar24 = vpinsrb_avx(auVar124,(uint)auVar24[7],7);
    }
    if ((uVar11 & 0x80) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048006050403020100);
      auVar24 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[7],7);
    }
  }
  auVar145 = vpslld_avx2(auVar45,4);
  auVar46._4_4_ = __real_00000004;
  auVar46._0_4_ = __real_00000004;
  auVar46._8_4_ = __real_00000004;
  auVar46._12_4_ = __real_00000004;
  auVar46._16_4_ = __real_00000004;
  auVar46._20_4_ = __real_00000004;
  auVar46._24_4_ = __real_00000004;
  auVar46._28_4_ = __real_00000004;
  vpor_avx2(auVar145,auVar46);
  auVar45 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar98._4_4_ = __real_00000008;
  auVar98._0_4_ = __real_00000008;
  auVar98._8_4_ = __real_00000008;
  auVar98._12_4_ = __real_00000008;
  auVar98._16_4_ = __real_00000008;
  auVar98._20_4_ = __real_00000008;
  auVar98._24_4_ = __real_00000008;
  auVar98._28_4_ = __real_00000008;
  vpor_avx2(auVar145,auVar98);
  auVar128 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar116._4_4_ = __real_0000000c;
  auVar116._0_4_ = __real_0000000c;
  auVar116._8_4_ = __real_0000000c;
  auVar116._12_4_ = __real_0000000c;
  auVar116._16_4_ = __real_0000000c;
  auVar116._20_4_ = __real_0000000c;
  auVar116._24_4_ = __real_0000000c;
  auVar116._28_4_ = __real_0000000c;
  vpor_avx2(auVar116,auVar145);
  auVar104 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar103 = vpslld_avx2(auVar57,4);
  vpor_avx2(auVar103,auVar46);
  auVar164 = vgatherdps(ZEXT832(0),auVar2);
  vpor_avx2(auVar103,auVar98);
  auVar25 = vgatherdps(ZEXT832(0),auVar2);
  vpor_avx2(auVar116,auVar103);
  auVar115 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
  auVar57 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
  auVar142 = vgatherdps(ZEXT832(0),auVar2);
  auVar57 = vmaskmovps_avx(auVar2,auVar57);
  auVar45 = vmaskmovps_avx(auVar2,auVar45);
  auVar128 = vmaskmovps_avx(auVar2,auVar128);
  auVar142 = vmaskmovps_avx(auVar2,auVar142);
  auVar164 = vmaskmovps_avx(auVar2,auVar164);
  auVar25 = vmaskmovps_avx(auVar2,auVar25);
  auVar74 = vpslld_avx2(auVar94,4);
  auVar43 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
  vpor_avx2(auVar74,auVar46);
  auVar44 = vgatherdps(ZEXT832(0),auVar2);
  vpor_avx2(auVar74,auVar98);
  auVar72 = vgatherdps(ZEXT832(0),auVar2);
  vpor_avx2(auVar116,auVar74);
  auVar95 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
  auVar43 = vmaskmovps_avx(auVar2,auVar43);
  auVar44 = vmaskmovps_avx(auVar2,auVar44);
  auVar72 = vmaskmovps_avx(auVar2,auVar72);
  auVar73 = vpmovzxbd_avx2(auVar24);
  auVar73 = vpslld_avx2(auVar73,2);
  vpmovzxdq_avx2(auVar73._16_16_);
  vpmovzxdq_avx2(auVar73._0_16_);
  auVar124 = vgatherqps(ZEXT816(0),auVar2._0_16_);
  auVar56 = vgatherqps(ZEXT816(0) << 0x20,auVar2._16_16_);
  auVar47._4_4_ = __real_3f800000;
  auVar47._0_4_ = __real_3f800000;
  auVar47._8_4_ = __real_3f800000;
  auVar47._12_4_ = __real_3f800000;
  auVar47._16_4_ = __real_3f800000;
  auVar47._20_4_ = __real_3f800000;
  auVar47._24_4_ = __real_3f800000;
  auVar47._28_4_ = __real_3f800000;
  auVar97 = vsubps_avx(auVar47,auVar58);
  auVar73 = vmaxps_avx(auVar58,auVar97);
  auVar48._0_4_ = auVar73._0_4_ + __real_3f800000;
  auVar48._4_4_ = auVar73._4_4_ + __real_3f800000;
  auVar48._8_4_ = auVar73._8_4_ + __real_3f800000;
  auVar48._12_4_ = auVar73._12_4_ + __real_3f800000;
  auVar48._16_4_ = auVar73._16_4_ + __real_3f800000;
  auVar48._20_4_ = auVar73._20_4_ + __real_3f800000;
  auVar48._24_4_ = auVar73._24_4_ + __real_3f800000;
  auVar48._28_4_ = auVar73._28_4_ + __real_3f800000;
  auVar59._4_4_ = __real_40000000;
  auVar59._0_4_ = __real_40000000;
  auVar59._8_4_ = __real_40000000;
  auVar59._12_4_ = __real_40000000;
  auVar59._16_4_ = __real_40000000;
  auVar59._20_4_ = __real_40000000;
  auVar59._24_4_ = __real_40000000;
  auVar59._28_4_ = __real_40000000;
  auVar73 = vdivps_avx(auVar59,auVar48);
  auVar93 = vsubps_avx(auVar57,auVar142);
  fVar22 = auVar58._0_4_;
  auVar60._0_4_ = fVar22 * auVar93._0_4_ + auVar142._0_4_;
  fVar28 = auVar58._4_4_;
  auVar60._4_4_ = fVar28 * auVar93._4_4_ + auVar142._4_4_;
  fVar32 = auVar58._8_4_;
  auVar60._8_4_ = fVar32 * auVar93._8_4_ + auVar142._8_4_;
  fVar36 = auVar58._12_4_;
  auVar60._12_4_ = fVar36 * auVar93._12_4_ + auVar142._12_4_;
  fVar84 = auVar58._16_4_;
  auVar60._16_4_ = fVar84 * auVar93._16_4_ + auVar142._16_4_;
  fVar86 = auVar58._20_4_;
  auVar60._20_4_ = fVar86 * auVar93._20_4_ + auVar142._20_4_;
  fVar89 = auVar58._24_4_;
  auVar60._24_4_ = fVar89 * auVar93._24_4_ + auVar142._24_4_;
  fVar92 = auVar58._28_4_;
  auVar60._28_4_ = fVar92 * auVar93._28_4_ + auVar142._28_4_;
  auVar58 = vsubps_avx(auVar45,auVar164);
  fVar111 = auVar164._0_4_;
  auVar122._0_4_ = fVar22 * auVar58._0_4_ + fVar111;
  fVar26 = auVar164._4_4_;
  auVar122._4_4_ = fVar28 * auVar58._4_4_ + fVar26;
  fVar30 = auVar164._8_4_;
  auVar122._8_4_ = fVar32 * auVar58._8_4_ + fVar30;
  fVar34 = auVar164._12_4_;
  auVar122._12_4_ = fVar36 * auVar58._12_4_ + fVar34;
  fVar38 = auVar164._16_4_;
  auVar122._16_4_ = fVar84 * auVar58._16_4_ + fVar38;
  fVar82 = auVar164._20_4_;
  auVar122._20_4_ = fVar86 * auVar58._20_4_ + fVar82;
  fVar87 = auVar164._24_4_;
  auVar122._24_4_ = fVar89 * auVar58._24_4_ + fVar87;
  fVar90 = auVar164._28_4_;
  auVar122._28_4_ = fVar92 * auVar58._28_4_ + fVar90;
  auVar58 = vsubps_avx(auVar128,auVar25);
  fVar102 = auVar25._0_4_;
  auVar147._0_4_ = fVar22 * auVar58._0_4_ + fVar102;
  fVar54 = auVar25._4_4_;
  auVar147._4_4_ = fVar28 * auVar58._4_4_ + fVar54;
  fVar105 = auVar25._8_4_;
  auVar147._8_4_ = fVar32 * auVar58._8_4_ + fVar105;
  fVar106 = auVar25._12_4_;
  auVar147._12_4_ = fVar36 * auVar58._12_4_ + fVar106;
  fVar107 = auVar25._16_4_;
  auVar147._16_4_ = fVar84 * auVar58._16_4_ + fVar107;
  fVar108 = auVar25._20_4_;
  auVar147._20_4_ = fVar86 * auVar58._20_4_ + fVar108;
  fVar109 = auVar25._24_4_;
  auVar147._24_4_ = fVar89 * auVar58._24_4_ + fVar109;
  fVar110 = auVar25._28_4_;
  auVar147._28_4_ = fVar92 * auVar58._28_4_ + fVar110;
  auVar58 = vsubps_avx(auVar43,auVar60);
  auVar164 = vsubps_avx(auVar44,auVar122);
  auVar25 = vsubps_avx(auVar72,auVar147);
  auVar75._0_4_ =
       auVar25._0_4_ * auVar25._0_4_ +
       auVar58._0_4_ * auVar58._0_4_ + auVar164._0_4_ * auVar164._0_4_;
  auVar75._4_4_ =
       auVar25._4_4_ * auVar25._4_4_ +
       auVar58._4_4_ * auVar58._4_4_ + auVar164._4_4_ * auVar164._4_4_;
  auVar75._8_4_ =
       auVar25._8_4_ * auVar25._8_4_ +
       auVar58._8_4_ * auVar58._8_4_ + auVar164._8_4_ * auVar164._8_4_;
  auVar75._12_4_ =
       auVar25._12_4_ * auVar25._12_4_ +
       auVar58._12_4_ * auVar58._12_4_ + auVar164._12_4_ * auVar164._12_4_;
  auVar75._16_4_ =
       auVar25._16_4_ * auVar25._16_4_ +
       auVar58._16_4_ * auVar58._16_4_ + auVar164._16_4_ * auVar164._16_4_;
  auVar75._20_4_ =
       auVar25._20_4_ * auVar25._20_4_ +
       auVar58._20_4_ * auVar58._20_4_ + auVar164._20_4_ * auVar164._20_4_;
  auVar75._24_4_ =
       auVar25._24_4_ * auVar25._24_4_ +
       auVar58._24_4_ * auVar58._24_4_ + auVar164._24_4_ * auVar164._24_4_;
  auVar75._28_4_ =
       auVar25._28_4_ * auVar25._28_4_ +
       auVar58._28_4_ * auVar58._28_4_ + auVar164._28_4_ * auVar164._28_4_;
  auVar99 = vsqrtps_avx(auVar75);
  auVar58 = vdivps_avx(auVar58,auVar99);
  auVar164 = vdivps_avx(auVar164,auVar99);
  auVar25 = vdivps_avx(auVar25,auVar99);
  auVar118 = vsubps_avx(auVar99,auVar118);
  fVar113 = auVar118._0_4_;
  fVar123 = auVar118._4_4_;
  fVar130 = auVar118._8_4_;
  fVar132 = auVar118._12_4_;
  fVar133 = auVar118._16_4_;
  fVar135 = auVar118._20_4_;
  fVar136 = auVar118._24_4_;
  fVar138 = auVar118._28_4_;
  fVar27 = auVar115._0_4_;
  fVar35 = auVar115._16_4_;
  fVar100 = auVar104._0_4_;
  auVar148._0_4_ = fVar22 * fVar100 + auVar97._0_4_ * fVar27;
  auVar148._4_4_ = fVar28 * auVar104._4_4_ + auVar97._4_4_ * auVar115._4_4_;
  auVar148._8_4_ = fVar32 * auVar104._8_4_ + auVar97._8_4_ * auVar115._8_4_;
  auVar148._12_4_ = fVar36 * auVar104._12_4_ + auVar97._12_4_ * auVar115._12_4_;
  fVar101 = auVar104._16_4_;
  auVar148._16_4_ = fVar84 * fVar101 + auVar97._16_4_ * fVar35;
  auVar148._20_4_ = fVar86 * auVar104._20_4_ + auVar97._20_4_ * auVar115._20_4_;
  auVar148._24_4_ = fVar89 * auVar104._24_4_ + auVar97._24_4_ * auVar115._24_4_;
  auVar148._28_4_ = fVar92 * auVar104._28_4_ + auVar97._28_4_ * auVar115._28_4_;
  fVar29 = auVar124._0_4_;
  auVar61._0_4_ = fVar29 * fVar113 * auVar58._0_4_;
  fVar81 = auVar124._4_4_;
  auVar61._4_4_ = fVar81 * fVar123 * auVar58._4_4_;
  fVar31 = auVar124._8_4_;
  auVar61._8_4_ = fVar31 * fVar130 * auVar58._8_4_;
  fVar33 = auVar124._12_4_;
  auVar61._12_4_ = fVar33 * fVar132 * auVar58._12_4_;
  fVar37 = auVar56._0_4_;
  auVar61._16_4_ = fVar37 * fVar133 * auVar58._16_4_;
  fVar39 = auVar56._4_4_;
  auVar61._20_4_ = fVar39 * fVar135 * auVar58._20_4_;
  fVar119 = auVar56._8_4_;
  auVar61._24_4_ = fVar119 * fVar136 * auVar58._24_4_;
  fVar120 = auVar56._12_4_;
  auVar61._28_4_ = fVar120 * fVar138 * auVar58._28_4_;
  fVar71 = auVar95._0_4_;
  auVar165._0_4_ = auVar148._0_4_ + fVar71;
  auVar165._4_4_ = auVar148._4_4_ + auVar95._4_4_;
  auVar165._8_4_ = auVar148._8_4_ + auVar95._8_4_;
  auVar165._12_4_ = auVar148._12_4_ + auVar95._12_4_;
  fVar23 = auVar95._16_4_;
  auVar165._16_4_ = auVar148._16_4_ + fVar23;
  auVar165._20_4_ = auVar148._20_4_ + auVar95._20_4_;
  auVar165._24_4_ = auVar148._24_4_ + auVar95._24_4_;
  auVar165._28_4_ = auVar148._28_4_ + auVar95._28_4_;
  auVar93 = vdivps_avx(auVar61,auVar165);
  auVar170._0_4_ = fVar29 * auVar164._0_4_ * fVar113;
  auVar170._4_4_ = fVar81 * auVar164._4_4_ * fVar123;
  auVar170._8_4_ = fVar31 * auVar164._8_4_ * fVar130;
  auVar170._12_4_ = fVar33 * auVar164._12_4_ * fVar132;
  auVar170._16_4_ = fVar37 * auVar164._16_4_ * fVar133;
  auVar170._20_4_ = fVar39 * auVar164._20_4_ * fVar135;
  auVar170._24_4_ = fVar119 * auVar164._24_4_ * fVar136;
  auVar170._28_4_ = fVar120 * auVar164._28_4_ * fVar138;
  auVar164 = vdivps_avx(auVar170,auVar165);
  auVar117._0_4_ = fVar29 * auVar25._0_4_ * fVar113;
  auVar117._4_4_ = fVar81 * auVar25._4_4_ * fVar123;
  auVar117._8_4_ = fVar31 * auVar25._8_4_ * fVar130;
  auVar117._12_4_ = fVar33 * auVar25._12_4_ * fVar132;
  auVar117._16_4_ = fVar37 * auVar25._16_4_ * fVar133;
  auVar117._20_4_ = fVar39 * auVar25._20_4_ * fVar135;
  auVar117._24_4_ = fVar119 * auVar25._24_4_ * fVar136;
  auVar117._28_4_ = fVar120 * auVar25._28_4_ * fVar138;
  auVar25 = vdivps_avx(auVar117,auVar165);
  auVar118 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar58 = vcmpps_avx(auVar148,auVar118,0);
  auVar118 = vcmpps_avx(auVar118,auVar95,0);
  auVar76._0_4_ = auVar118._0_4_ & auVar58._0_4_;
  auVar76._4_4_ = auVar118._4_4_ & auVar58._4_4_;
  auVar76._8_4_ = auVar118._8_4_ & auVar58._8_4_;
  auVar76._12_4_ = auVar118._12_4_ & auVar58._12_4_;
  auVar76._16_4_ = auVar118._16_4_ & auVar58._16_4_;
  auVar76._20_4_ = auVar118._20_4_ & auVar58._20_4_;
  auVar76._24_4_ = auVar118._24_4_ & auVar58._24_4_;
  auVar76._28_4_ = auVar118._28_4_ & auVar58._28_4_;
  auVar149._4_4_ = __real_322bcc77;
  auVar149._0_4_ = __real_322bcc77;
  auVar149._8_4_ = __real_322bcc77;
  auVar149._12_4_ = __real_322bcc77;
  auVar149._16_4_ = __real_322bcc77;
  auVar149._20_4_ = __real_322bcc77;
  auVar149._24_4_ = __real_322bcc77;
  auVar149._28_4_ = __real_322bcc77;
  auVar58 = vcmpps_avx(auVar99,auVar149,2);
  auVar76 = auVar76 | auVar58;
  uVar11 = auVar76._0_4_;
  fVar139 = (float)(~uVar11 & auVar93._0_4_);
  uVar79 = auVar76._4_4_;
  fVar131 = (float)(~uVar79 & auVar93._4_4_);
  uVar21 = auVar76._8_4_;
  fVar144 = (float)(~uVar21 & auVar93._8_4_);
  uVar80 = auVar76._12_4_;
  fVar134 = (float)(~uVar80 & auVar93._12_4_);
  uVar83 = auVar76._16_4_;
  fVar151 = (float)(~uVar83 & auVar93._16_4_);
  uVar85 = auVar76._20_4_;
  fVar137 = (float)(~uVar85 & auVar93._20_4_);
  uVar88 = auVar76._24_4_;
  fVar153 = (float)(~uVar88 & auVar93._24_4_);
  uVar91 = auVar76._28_4_;
  fVar140 = (float)(~uVar91 & auVar93._28_4_);
  fVar154 = (float)(~uVar11 & auVar164._0_4_);
  fVar152 = (float)(~uVar79 & auVar164._4_4_);
  fVar156 = (float)(~uVar21 & auVar164._8_4_);
  fVar155 = (float)(~uVar80 & auVar164._12_4_);
  fVar157 = (float)(~uVar83 & auVar164._16_4_);
  fVar158 = (float)(~uVar85 & auVar164._20_4_);
  fVar159 = (float)(~uVar88 & auVar164._24_4_);
  fVar161 = (float)(~uVar91 & auVar164._28_4_);
  fVar113 = (float)(~uVar11 & auVar25._0_4_);
  fVar123 = (float)(~uVar79 & auVar25._4_4_);
  fVar130 = (float)(~uVar21 & auVar25._8_4_);
  fVar132 = (float)(~uVar80 & auVar25._12_4_);
  fVar133 = (float)(~uVar83 & auVar25._16_4_);
  fVar135 = (float)(~uVar85 & auVar25._20_4_);
  fVar136 = (float)(~uVar88 & auVar25._24_4_);
  fVar138 = (float)(~uVar91 & auVar25._28_4_);
  auVar118 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar58 = vcmpps_avx(auVar118,auVar95,1);
  uVar11 = auVar2._0_4_;
  auVar62._0_4_ = auVar58._0_4_ & uVar11;
  uVar79 = auVar2._4_4_;
  auVar62._4_4_ = auVar58._4_4_ & uVar79;
  uVar21 = auVar2._8_4_;
  auVar62._8_4_ = auVar58._8_4_ & uVar21;
  uVar80 = auVar2._12_4_;
  auVar62._12_4_ = auVar58._12_4_ & uVar80;
  uVar83 = auVar2._16_4_;
  auVar62._16_4_ = auVar58._16_4_ & uVar83;
  uVar85 = auVar2._20_4_;
  auVar62._20_4_ = auVar58._20_4_ & uVar85;
  uVar88 = auVar2._24_4_;
  auVar62._24_4_ = auVar58._24_4_ & uVar88;
  uVar91 = auVar2._28_4_;
  auVar62._28_4_ = auVar58._28_4_ & uVar91;
  uVar10 = vmovmskps_avx(auVar62);
  fVar29 = auVar73._0_4_;
  fVar81 = auVar73._4_4_;
  fVar31 = auVar73._8_4_;
  fVar33 = auVar73._12_4_;
  fVar37 = auVar73._16_4_;
  fVar39 = auVar73._20_4_;
  fVar119 = auVar73._24_4_;
  fVar120 = auVar73._28_4_;
  if (uVar10 != 0) {
    fVar160 = fVar71 * fVar29;
    fVar55 = auVar95._4_4_ * fVar81;
    fVar63 = auVar95._8_4_ * fVar31;
    fVar64 = auVar95._12_4_ * fVar33;
    fVar65 = fVar23 * fVar37;
    fVar66 = auVar95._20_4_ * fVar39;
    fVar68 = auVar95._24_4_ * fVar119;
    fVar69 = auVar95._28_4_ * fVar120;
    auVar41._0_4_ = -(fVar160 * fVar139) + auVar43._0_4_;
    auVar41._4_4_ = -(fVar55 * fVar131) + auVar43._4_4_;
    auVar41._8_4_ = -(fVar63 * fVar144) + auVar43._8_4_;
    auVar41._12_4_ = -(fVar64 * fVar134) + auVar43._12_4_;
    auVar49._16_4_ = -(fVar65 * fVar151) + auVar43._16_4_;
    auVar49._0_16_ = auVar41;
    auVar49._20_4_ = -(fVar66 * fVar137) + auVar43._20_4_;
    auVar49._24_4_ = -(fVar68 * fVar153) + auVar43._24_4_;
    auVar49._28_4_ = -(fVar69 * fVar140) + auVar43._28_4_;
    cVar9 = (char)uVar10;
    local_420 = auVar74._0_4_;
    iStack_41c = auVar74._4_4_;
    iStack_418 = auVar74._8_4_;
    iStack_414 = auVar74._12_4_;
    iStack_410 = auVar74._16_4_;
    iStack_40c = auVar74._20_4_;
    iStack_408 = auVar74._24_4_;
    iStack_404 = auVar74._28_4_;
    auVar56 = auVar95._0_16_;
    auVar67 = auVar95._16_16_;
    auVar124 = auVar49._16_16_;
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) == 0) goto LAB_14000f5b6;
LAB_14000fa86:
      uVar4 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + iStack_41c) = uVar4;
      if ((uVar10 & 4) != 0) goto LAB_14000fa9f;
LAB_14000f5bf:
      if ((uVar10 & 8) == 0) goto LAB_14000f5c8;
LAB_14000fab8:
      uVar4 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + iStack_414) = uVar4;
      if ((uVar10 & 0x10) != 0) goto LAB_14000fadd;
LAB_14000f5dd:
      if ((uVar10 & 0x20) == 0) goto LAB_14000f5e6;
LAB_14000faf4:
      uVar4 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + iStack_40c) = uVar4;
      if ((uVar10 & 0x40) != 0) goto LAB_14000fb0d;
LAB_14000f5ef:
      if (-1 < cVar9) goto LAB_14000f5f7;
LAB_14000fb25:
      uVar4 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + iStack_404) = uVar4;
      auVar143._0_4_ = -(fVar160 * fVar154) + auVar44._0_4_;
      auVar143._4_4_ = -(fVar55 * fVar152) + auVar44._4_4_;
      auVar143._8_4_ = -(fVar63 * fVar156) + auVar44._8_4_;
      auVar143._12_4_ = -(fVar64 * fVar155) + auVar44._12_4_;
      auVar143._16_4_ = -(fVar65 * fVar157) + auVar44._16_4_;
      auVar143._20_4_ = -(fVar66 * fVar158) + auVar44._20_4_;
      auVar143._24_4_ = -(fVar68 * fVar159) + auVar44._24_4_;
      auVar143._28_4_ = -(fVar69 * fVar161) + auVar44._28_4_;
      if ((uVar10 & 1) != 0) goto LAB_14000fb43;
LAB_14000f605:
      if ((uVar10 & 2) == 0) goto LAB_14000f60e;
LAB_14000fb5b:
      uVar4 = vextractps_avx(auVar143._0_16_,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_41c) = uVar4;
      if ((uVar10 & 4) != 0) goto LAB_14000fb75;
LAB_14000f617:
      if ((uVar10 & 8) == 0) goto LAB_14000f620;
LAB_14000fb8f:
      uVar4 = vextractps_avx(auVar143._0_16_,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_414) = uVar4;
      auVar124 = auVar143._16_16_;
      if ((uVar10 & 0x10) != 0) goto LAB_14000fbaf;
LAB_14000f62f:
      if ((uVar10 & 0x20) == 0) goto LAB_14000f638;
LAB_14000fbc7:
      uVar4 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_40c) = uVar4;
      if ((uVar10 & 0x40) != 0) goto LAB_14000fbe1;
LAB_14000f641:
      if (-1 < cVar9) goto LAB_14000f649;
LAB_14000fbfa:
      uVar4 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_404) = uVar4;
      auVar77._0_4_ = -(fVar113 * fVar160) + auVar72._0_4_;
      auVar77._4_4_ = -(fVar123 * fVar55) + auVar72._4_4_;
      auVar77._8_4_ = -(fVar130 * fVar63) + auVar72._8_4_;
      auVar77._12_4_ = -(fVar132 * fVar64) + auVar72._12_4_;
      auVar77._16_4_ = -(fVar133 * fVar65) + auVar72._16_4_;
      auVar77._20_4_ = -(fVar135 * fVar66) + auVar72._20_4_;
      auVar77._24_4_ = -(fVar136 * fVar68) + auVar72._24_4_;
      auVar77._28_4_ = -(fVar138 * fVar69) + auVar72._28_4_;
      if ((uVar10 & 1) != 0) goto LAB_14000fc19;
LAB_14000f657:
      if ((uVar10 & 2) == 0) goto LAB_14000f660;
LAB_14000fc31:
      uVar4 = vextractps_avx(auVar77._0_16_,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_41c) = uVar4;
      if ((uVar10 & 4) != 0) goto LAB_14000fc4b;
LAB_14000f669:
      if ((uVar10 & 8) == 0) goto LAB_14000f672;
LAB_14000fc65:
      uVar4 = vextractps_avx(auVar77._0_16_,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_414) = uVar4;
      auVar124 = auVar77._16_16_;
    }
    else {
      *(float *)(param_1 + local_420) = auVar41._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_14000fa86;
LAB_14000f5b6:
      if ((uVar10 & 4) == 0) goto LAB_14000f5bf;
LAB_14000fa9f:
      uVar4 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + iStack_418) = uVar4;
      if ((uVar10 & 8) != 0) goto LAB_14000fab8;
LAB_14000f5c8:
      if ((uVar10 & 0x10) == 0) goto LAB_14000f5dd;
LAB_14000fadd:
      *(float *)(param_1 + iStack_410) = auVar49._16_4_;
      if ((uVar10 & 0x20) != 0) goto LAB_14000faf4;
LAB_14000f5e6:
      if ((uVar10 & 0x40) == 0) goto LAB_14000f5ef;
LAB_14000fb0d:
      uVar4 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + iStack_408) = uVar4;
      if (cVar9 < '\0') goto LAB_14000fb25;
LAB_14000f5f7:
      auVar143._0_4_ = -(fVar160 * fVar154) + auVar44._0_4_;
      auVar143._4_4_ = -(fVar55 * fVar152) + auVar44._4_4_;
      auVar143._8_4_ = -(fVar63 * fVar156) + auVar44._8_4_;
      auVar143._12_4_ = -(fVar64 * fVar155) + auVar44._12_4_;
      auVar143._16_4_ = -(fVar65 * fVar157) + auVar44._16_4_;
      auVar143._20_4_ = -(fVar66 * fVar158) + auVar44._20_4_;
      auVar143._24_4_ = -(fVar68 * fVar159) + auVar44._24_4_;
      auVar143._28_4_ = -(fVar69 * fVar161) + auVar44._28_4_;
      if ((uVar10 & 1) == 0) goto LAB_14000f605;
LAB_14000fb43:
      *(int *)(param_1 + 4 + (longlong)local_420) = auVar143._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_14000fb5b;
LAB_14000f60e:
      if ((uVar10 & 4) == 0) goto LAB_14000f617;
LAB_14000fb75:
      uVar4 = vextractps_avx(auVar143._0_16_,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_418) = uVar4;
      if ((uVar10 & 8) != 0) goto LAB_14000fb8f;
LAB_14000f620:
      auVar124 = auVar143._16_16_;
      if ((uVar10 & 0x10) == 0) goto LAB_14000f62f;
LAB_14000fbaf:
      *(int *)(param_1 + 4 + (longlong)iStack_410) = auVar124._0_4_;
      if ((uVar10 & 0x20) != 0) goto LAB_14000fbc7;
LAB_14000f638:
      if ((uVar10 & 0x40) == 0) goto LAB_14000f641;
LAB_14000fbe1:
      uVar4 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_408) = uVar4;
      if (cVar9 < '\0') goto LAB_14000fbfa;
LAB_14000f649:
      auVar77._0_4_ = -(fVar113 * fVar160) + auVar72._0_4_;
      auVar77._4_4_ = -(fVar123 * fVar55) + auVar72._4_4_;
      auVar77._8_4_ = -(fVar130 * fVar63) + auVar72._8_4_;
      auVar77._12_4_ = -(fVar132 * fVar64) + auVar72._12_4_;
      auVar77._16_4_ = -(fVar133 * fVar65) + auVar72._16_4_;
      auVar77._20_4_ = -(fVar135 * fVar66) + auVar72._20_4_;
      auVar77._24_4_ = -(fVar136 * fVar68) + auVar72._24_4_;
      auVar77._28_4_ = -(fVar138 * fVar69) + auVar72._28_4_;
      if ((uVar10 & 1) == 0) goto LAB_14000f657;
LAB_14000fc19:
      *(int *)(param_1 + 8 + (longlong)local_420) = auVar77._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_14000fc31;
LAB_14000f660:
      if ((uVar10 & 4) == 0) goto LAB_14000f669;
LAB_14000fc4b:
      uVar4 = vextractps_avx(auVar77._0_16_,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_418) = uVar4;
      if ((uVar10 & 8) != 0) goto LAB_14000fc65;
LAB_14000f672:
      auVar124 = auVar77._16_16_;
    }
    if ((uVar10 & 0x10) != 0) {
      *(int *)(param_1 + 8 + (longlong)iStack_410) = auVar124._0_4_;
    }
    if ((uVar10 & 0x20) != 0) {
      uVar4 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_40c) = uVar4;
    }
    if ((uVar10 & 0x40) != 0) {
      uVar4 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_408) = uVar4;
    }
    if (cVar9 < '\0') {
      uVar4 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_404) = uVar4;
    }
    if ((uVar10 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)local_420) = fVar71;
    }
    if ((uVar10 & 2) != 0) {
      uVar4 = vextractps_avx(auVar56,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_41c) = uVar4;
    }
    if ((uVar10 & 4) != 0) {
      uVar4 = vextractps_avx(auVar56,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_418) = uVar4;
    }
    if ((uVar10 & 8) != 0) {
      uVar4 = vextractps_avx(auVar56,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_414) = uVar4;
    }
    if ((uVar10 & 0x10) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iStack_410) = fVar23;
    }
    if ((uVar10 & 0x20) != 0) {
      uVar4 = vextractps_avx(auVar67,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_40c) = uVar4;
    }
    if ((uVar10 & 0x40) != 0) {
      uVar4 = vextractps_avx(auVar67,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_408) = uVar4;
    }
    if (cVar9 < '\0') {
      uVar4 = vextractps_avx(auVar67,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_404) = uVar4;
    }
  }
  auVar2 = vcmpps_avx(auVar118,auVar104,0xc);
  auVar50._0_4_ = auVar2._0_4_ & uVar11;
  auVar50._4_4_ = auVar2._4_4_ & uVar79;
  auVar50._8_4_ = auVar2._8_4_ & uVar21;
  auVar50._12_4_ = auVar2._12_4_ & uVar80;
  auVar50._16_4_ = auVar2._16_4_ & uVar83;
  auVar50._20_4_ = auVar2._20_4_ & uVar85;
  auVar50._24_4_ = auVar2._24_4_ & uVar88;
  auVar50._28_4_ = auVar2._28_4_ & uVar91;
  uVar10 = vmovmskps_avx(auVar50);
  if (uVar10 == 0) goto LAB_14000f878;
  fVar22 = fVar100 * fVar29 * fVar22;
  fVar28 = auVar104._4_4_ * fVar81 * fVar28;
  fVar32 = auVar104._8_4_ * fVar31 * fVar32;
  fVar36 = auVar104._12_4_ * fVar33 * fVar36;
  fVar84 = fVar101 * fVar37 * fVar84;
  fVar86 = auVar104._20_4_ * fVar39 * fVar86;
  fVar89 = auVar104._24_4_ * fVar119 * fVar89;
  fVar92 = auVar104._28_4_ * fVar120 * fVar92;
  local_400 = auVar57._0_4_;
  fStack_3fc = auVar57._4_4_;
  fStack_3f8 = auVar57._8_4_;
  fStack_3f4 = auVar57._12_4_;
  fStack_3f0 = auVar57._16_4_;
  fStack_3ec = auVar57._20_4_;
  fStack_3e8 = auVar57._24_4_;
  fStack_3e4 = auVar57._28_4_;
  auVar42._0_4_ = fVar22 * fVar139 + local_400;
  auVar42._4_4_ = fVar28 * fVar131 + fStack_3fc;
  auVar42._8_4_ = fVar32 * fVar144 + fStack_3f8;
  auVar42._12_4_ = fVar36 * fVar134 + fStack_3f4;
  auVar51._16_4_ = fVar84 * fVar151 + fStack_3f0;
  auVar51._0_16_ = auVar42;
  auVar51._20_4_ = fVar86 * fVar137 + fStack_3ec;
  auVar51._24_4_ = fVar89 * fVar153 + fStack_3e8;
  auVar51._28_4_ = fVar92 * fVar140 + fStack_3e4;
  cVar9 = (char)uVar10;
  local_340 = auVar145._0_4_;
  iStack_33c = auVar145._4_4_;
  iStack_338 = auVar145._8_4_;
  iStack_334 = auVar145._12_4_;
  iStack_330 = auVar145._16_4_;
  iStack_32c = auVar145._20_4_;
  iStack_328 = auVar145._24_4_;
  iStack_324 = auVar145._28_4_;
  auVar56 = auVar104._0_16_;
  auVar67 = auVar104._16_16_;
  auVar124 = auVar51._16_16_;
  local_3c0 = auVar45._0_4_;
  fStack_3bc = auVar45._4_4_;
  fStack_3b8 = auVar45._8_4_;
  fStack_3b4 = auVar45._12_4_;
  fStack_3b0 = auVar45._16_4_;
  fStack_3ac = auVar45._20_4_;
  fStack_3a8 = auVar45._24_4_;
  fStack_3a4 = auVar45._28_4_;
  local_3e0 = auVar128._0_4_;
  fStack_3dc = auVar128._4_4_;
  fStack_3d8 = auVar128._8_4_;
  fStack_3d4 = auVar128._12_4_;
  fStack_3d0 = auVar128._16_4_;
  fStack_3cc = auVar128._20_4_;
  fStack_3c8 = auVar128._24_4_;
  fStack_3c4 = auVar128._28_4_;
  if ((uVar10 & 1) == 0) {
    if ((uVar10 & 2) == 0) goto LAB_14000f738;
LAB_14000fdcd:
    uVar4 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iStack_33c) = uVar4;
    if ((uVar10 & 4) != 0) goto LAB_14000fde6;
LAB_14000f741:
    if ((uVar10 & 8) == 0) goto LAB_14000f74a;
LAB_14000fdff:
    uVar4 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iStack_334) = uVar4;
    if ((uVar10 & 0x10) != 0) goto LAB_14000fe24;
LAB_14000f75f:
    if ((uVar10 & 0x20) == 0) goto LAB_14000f768;
LAB_14000fe3b:
    uVar4 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + iStack_32c) = uVar4;
    if ((uVar10 & 0x40) != 0) goto LAB_14000fe54;
LAB_14000f771:
    if (-1 < cVar9) goto LAB_14000f779;
LAB_14000fe6c:
    uVar4 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + iStack_324) = uVar4;
    auVar52._0_4_ = fVar22 * fVar154 + local_3c0;
    auVar52._4_4_ = fVar28 * fVar152 + fStack_3bc;
    auVar52._8_4_ = fVar32 * fVar156 + fStack_3b8;
    auVar52._12_4_ = fVar36 * fVar155 + fStack_3b4;
    auVar52._16_4_ = fVar84 * fVar157 + fStack_3b0;
    auVar52._20_4_ = fVar86 * fVar158 + fStack_3ac;
    auVar52._24_4_ = fVar89 * fVar159 + fStack_3a8;
    auVar52._28_4_ = fVar92 * fVar161 + fStack_3a4;
    if ((uVar10 & 1) != 0) goto LAB_14000fe93;
LAB_14000f790:
    if ((uVar10 & 2) == 0) goto LAB_14000f799;
LAB_14000feab:
    uVar4 = vextractps_avx(auVar52._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_33c) = uVar4;
    if ((uVar10 & 4) != 0) goto LAB_14000fec5;
LAB_14000f7a2:
    if ((uVar10 & 8) == 0) goto LAB_14000f7ab;
LAB_14000fedf:
    uVar4 = vextractps_avx(auVar52._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_334) = uVar4;
    auVar124 = auVar52._16_16_;
    if ((uVar10 & 0x10) != 0) goto LAB_14000feff;
LAB_14000f7ba:
    if ((uVar10 & 0x20) == 0) goto LAB_14000f7c3;
LAB_14000ff17:
    uVar4 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_32c) = uVar4;
    if ((uVar10 & 0x40) != 0) goto LAB_14000ff31;
LAB_14000f7cc:
    if (-1 < cVar9) goto LAB_14000f7d4;
LAB_14000ff4a:
    uVar4 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_324) = uVar4;
    auVar78._0_4_ = fVar113 * fVar22 + local_3e0;
    auVar78._4_4_ = fVar123 * fVar28 + fStack_3dc;
    auVar78._8_4_ = fVar130 * fVar32 + fStack_3d8;
    auVar78._12_4_ = fVar132 * fVar36 + fStack_3d4;
    auVar78._16_4_ = fVar133 * fVar84 + fStack_3d0;
    auVar78._20_4_ = fVar135 * fVar86 + fStack_3cc;
    auVar78._24_4_ = fVar136 * fVar89 + fStack_3c8;
    auVar78._28_4_ = fVar138 * fVar92 + fStack_3c4;
    if ((uVar10 & 1) != 0) goto LAB_14000ff6e;
LAB_14000f7e7:
    if ((uVar10 & 2) == 0) goto LAB_14000f7f0;
LAB_14000ff86:
    uVar4 = vextractps_avx(auVar78._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_33c) = uVar4;
    if ((uVar10 & 4) != 0) goto LAB_14000ffa0;
LAB_14000f7f9:
    if ((uVar10 & 8) == 0) goto LAB_14000f802;
LAB_14000ffba:
    uVar4 = vextractps_avx(auVar78._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_334) = uVar4;
    auVar124 = auVar78._16_16_;
  }
  else {
    *(float *)(param_1 + local_340) = auVar42._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_14000fdcd;
LAB_14000f738:
    if ((uVar10 & 4) == 0) goto LAB_14000f741;
LAB_14000fde6:
    uVar4 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iStack_338) = uVar4;
    if ((uVar10 & 8) != 0) goto LAB_14000fdff;
LAB_14000f74a:
    if ((uVar10 & 0x10) == 0) goto LAB_14000f75f;
LAB_14000fe24:
    *(float *)(param_1 + iStack_330) = auVar51._16_4_;
    if ((uVar10 & 0x20) != 0) goto LAB_14000fe3b;
LAB_14000f768:
    if ((uVar10 & 0x40) == 0) goto LAB_14000f771;
LAB_14000fe54:
    uVar4 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + iStack_328) = uVar4;
    if (cVar9 < '\0') goto LAB_14000fe6c;
LAB_14000f779:
    auVar52._0_4_ = fVar22 * fVar154 + local_3c0;
    auVar52._4_4_ = fVar28 * fVar152 + fStack_3bc;
    auVar52._8_4_ = fVar32 * fVar156 + fStack_3b8;
    auVar52._12_4_ = fVar36 * fVar155 + fStack_3b4;
    auVar52._16_4_ = fVar84 * fVar157 + fStack_3b0;
    auVar52._20_4_ = fVar86 * fVar158 + fStack_3ac;
    auVar52._24_4_ = fVar89 * fVar159 + fStack_3a8;
    auVar52._28_4_ = fVar92 * fVar161 + fStack_3a4;
    if ((uVar10 & 1) == 0) goto LAB_14000f790;
LAB_14000fe93:
    *(int *)(param_1 + 4 + (longlong)local_340) = auVar52._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_14000feab;
LAB_14000f799:
    if ((uVar10 & 4) == 0) goto LAB_14000f7a2;
LAB_14000fec5:
    uVar4 = vextractps_avx(auVar52._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_338) = uVar4;
    if ((uVar10 & 8) != 0) goto LAB_14000fedf;
LAB_14000f7ab:
    auVar124 = auVar52._16_16_;
    if ((uVar10 & 0x10) == 0) goto LAB_14000f7ba;
LAB_14000feff:
    *(int *)(param_1 + 4 + (longlong)iStack_330) = auVar124._0_4_;
    if ((uVar10 & 0x20) != 0) goto LAB_14000ff17;
LAB_14000f7c3:
    if ((uVar10 & 0x40) == 0) goto LAB_14000f7cc;
LAB_14000ff31:
    uVar4 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_328) = uVar4;
    if (cVar9 < '\0') goto LAB_14000ff4a;
LAB_14000f7d4:
    auVar78._0_4_ = fVar113 * fVar22 + local_3e0;
    auVar78._4_4_ = fVar123 * fVar28 + fStack_3dc;
    auVar78._8_4_ = fVar130 * fVar32 + fStack_3d8;
    auVar78._12_4_ = fVar132 * fVar36 + fStack_3d4;
    auVar78._16_4_ = fVar133 * fVar84 + fStack_3d0;
    auVar78._20_4_ = fVar135 * fVar86 + fStack_3cc;
    auVar78._24_4_ = fVar136 * fVar89 + fStack_3c8;
    auVar78._28_4_ = fVar138 * fVar92 + fStack_3c4;
    if ((uVar10 & 1) == 0) goto LAB_14000f7e7;
LAB_14000ff6e:
    *(int *)(param_1 + 8 + (longlong)local_340) = auVar78._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_14000ff86;
LAB_14000f7f0:
    if ((uVar10 & 4) == 0) goto LAB_14000f7f9;
LAB_14000ffa0:
    uVar4 = vextractps_avx(auVar78._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_338) = uVar4;
    if ((uVar10 & 8) != 0) goto LAB_14000ffba;
LAB_14000f802:
    auVar124 = auVar78._16_16_;
  }
  if ((uVar10 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_330) = auVar124._0_4_;
  }
  if ((uVar10 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_32c) = uVar4;
  }
  if ((uVar10 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_328) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_324) = uVar4;
  }
  if ((uVar10 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_340) = fVar100;
  }
  if ((uVar10 & 2) != 0) {
    uVar4 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_33c) = uVar4;
  }
  if ((uVar10 & 4) != 0) {
    uVar4 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_338) = uVar4;
  }
  if ((uVar10 & 8) != 0) {
    uVar4 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_334) = uVar4;
  }
  if ((uVar10 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_330) = fVar101;
  }
  if ((uVar10 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_32c) = uVar4;
  }
  if ((uVar10 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_328) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_324) = uVar4;
  }
LAB_14000f878:
  auVar2 = vcmpps_avx(auVar115,ZEXT1232(ZEXT812(0)),0xc);
  auVar53._0_4_ = auVar2._0_4_ & uVar11;
  auVar53._4_4_ = auVar2._4_4_ & uVar79;
  auVar53._8_4_ = auVar2._8_4_ & uVar21;
  auVar53._12_4_ = auVar2._12_4_ & uVar80;
  auVar53._16_4_ = auVar2._16_4_ & uVar83;
  auVar53._20_4_ = auVar2._20_4_ & uVar85;
  auVar53._24_4_ = auVar2._24_4_ & uVar88;
  auVar53._28_4_ = auVar2._28_4_ & uVar91;
  uVar11 = vmovmskps_avx(auVar53);
  uVar15 = (ulonglong)uVar11;
  if (uVar11 == 0) {
    return 0;
  }
  fVar71 = fVar27 * fVar29 * auVar97._0_4_;
  fVar23 = auVar115._4_4_ * fVar81 * auVar97._4_4_;
  fVar29 = auVar115._8_4_ * fVar31 * auVar97._8_4_;
  fVar81 = auVar115._12_4_ * fVar33 * auVar97._12_4_;
  fVar31 = fVar35 * fVar37 * auVar97._16_4_;
  fVar33 = auVar115._20_4_ * fVar39 * auVar97._20_4_;
  fVar37 = auVar115._24_4_ * fVar119 * auVar97._24_4_;
  fVar39 = auVar115._28_4_ * fVar120 * auVar97._28_4_;
  auVar126._0_4_ = fVar71 * fVar139 + auVar142._0_4_;
  auVar126._4_4_ = fVar23 * fVar131 + auVar142._4_4_;
  auVar126._8_4_ = fVar29 * fVar144 + auVar142._8_4_;
  auVar126._12_4_ = fVar81 * fVar134 + auVar142._12_4_;
  auVar129._16_4_ = fVar31 * fVar151 + auVar142._16_4_;
  auVar129._0_16_ = auVar126;
  auVar129._20_4_ = fVar33 * fVar137 + auVar142._20_4_;
  auVar129._24_4_ = fVar37 * fVar153 + auVar142._24_4_;
  auVar129._28_4_ = fVar39 * fVar140 + auVar142._28_4_;
  cVar9 = (char)uVar11;
  local_360 = auVar103._0_4_;
  iStack_35c = auVar103._4_4_;
  iStack_358 = auVar103._8_4_;
  iStack_354 = auVar103._12_4_;
  iStack_350 = auVar103._16_4_;
  iStack_34c = auVar103._20_4_;
  iStack_348 = auVar103._24_4_;
  iStack_344 = auVar103._28_4_;
  auVar124 = auVar115._0_16_;
  auVar56 = auVar115._16_16_;
  auVar67 = auVar129._16_16_;
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + local_360) = auVar126._0_4_;
  }
  if ((uVar11 & 2) != 0) {
    uVar4 = vextractps_avx(auVar126,1);
    *(undefined4 *)(param_1 + iStack_35c) = uVar4;
  }
  if ((uVar11 & 4) != 0) {
    uVar4 = vextractps_avx(auVar126,2);
    *(undefined4 *)(param_1 + iStack_358) = uVar4;
  }
  if ((uVar11 & 8) != 0) {
    uVar4 = vextractps_avx(auVar126,3);
    *(undefined4 *)(param_1 + iStack_354) = uVar4;
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + iStack_350) = auVar129._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + iStack_34c) = uVar4;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + iStack_348) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + iStack_344) = uVar4;
    auVar150._0_4_ = fVar71 * fVar154 + fVar111;
    auVar150._4_4_ = fVar23 * fVar152 + fVar26;
    auVar150._8_4_ = fVar29 * fVar156 + fVar30;
    auVar150._12_4_ = fVar81 * fVar155 + fVar34;
    auVar150._16_4_ = fVar31 * fVar157 + fVar38;
    auVar150._20_4_ = fVar33 * fVar158 + fVar82;
    auVar150._24_4_ = fVar37 * fVar159 + fVar87;
    auVar150._28_4_ = fVar39 * fVar161 + fVar90;
  }
  else {
    auVar150._0_4_ = fVar71 * fVar154 + fVar111;
    auVar150._4_4_ = fVar23 * fVar152 + fVar26;
    auVar150._8_4_ = fVar29 * fVar156 + fVar30;
    auVar150._12_4_ = fVar81 * fVar155 + fVar34;
    auVar150._16_4_ = fVar31 * fVar157 + fVar38;
    auVar150._20_4_ = fVar33 * fVar158 + fVar82;
    auVar150._24_4_ = fVar37 * fVar159 + fVar87;
    auVar150._28_4_ = fVar39 * fVar161 + fVar90;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_360) = auVar150._0_4_;
  }
  auVar67 = auVar150._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_35c) = uVar4;
  }
  if ((uVar11 & 4) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_358) = uVar4;
  }
  auVar40 = auVar150._16_16_;
  if ((uVar11 & 8) != 0) {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_354) = uVar4;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_350) = auVar150._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_34c) = uVar4;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_348) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_344) = uVar4;
    auVar114._0_4_ = fVar71 * fVar113 + fVar102;
    auVar114._4_4_ = fVar23 * fVar123 + fVar54;
    auVar114._8_4_ = fVar29 * fVar130 + fVar105;
    auVar114._12_4_ = fVar81 * fVar132 + fVar106;
    auVar114._16_4_ = fVar31 * fVar133 + fVar107;
    auVar114._20_4_ = fVar33 * fVar135 + fVar108;
    auVar114._24_4_ = fVar37 * fVar136 + fVar109;
    auVar114._28_4_ = fVar39 * fVar138 + fVar110;
  }
  else {
    auVar114._0_4_ = fVar71 * fVar113 + fVar102;
    auVar114._4_4_ = fVar23 * fVar123 + fVar54;
    auVar114._8_4_ = fVar29 * fVar130 + fVar105;
    auVar114._12_4_ = fVar81 * fVar132 + fVar106;
    auVar114._16_4_ = fVar31 * fVar133 + fVar107;
    auVar114._20_4_ = fVar33 * fVar135 + fVar108;
    auVar114._24_4_ = fVar37 * fVar136 + fVar109;
    auVar114._28_4_ = fVar39 * fVar138 + fVar110;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_360) = auVar114._0_4_;
  }
  auVar67 = auVar114._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_35c) = uVar4;
  }
  if ((uVar11 & 4) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_358) = uVar4;
  }
  auVar40 = auVar114._16_16_;
  if ((uVar11 & 8) != 0) {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_354) = uVar4;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_350) = auVar114._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_34c) = uVar4;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_348) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_344) = uVar4;
  }
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_360) = fVar27;
  }
  if ((uVar11 & 2) != 0) {
    uVar4 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_35c) = uVar4;
  }
  if ((uVar11 & 4) != 0) {
    uVar4 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_358) = uVar4;
  }
  if ((uVar11 & 8) != 0) {
    uVar4 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_354) = uVar4;
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_350) = fVar35;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_34c) = uVar4;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_348) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar15 = (ulonglong)iStack_344;
    uVar4 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 0xc + uVar15) = uVar4;
  }
  return uVar15;
}

// ApplyAxialSpringConstraints_avx2 @ 140010540

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraints_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auVar4 [32];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  int iVar15;
  int iVar18;
  int iVar19;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar33;
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar34 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  float fVar42;
  float fVar43;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  int iVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  float fVar65;
  int iVar66;
  float fVar67;
  float fVar72;
  float fVar74;
  float fVar76;
  float fVar78;
  float fVar80;
  float fVar82;
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  float fVar84;
  undefined1 auVar70 [32];
  float fVar73;
  float fVar75;
  float fVar77;
  float fVar79;
  float fVar81;
  float fVar83;
  float fVar85;
  undefined1 auVar71 [32];
  float fVar86;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  float fVar92;
  float fVar94;
  float fVar96;
  float fVar98;
  float fVar102;
  uint uVar103;
  float fVar104;
  undefined1 auVar99 [16];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  uint uVar91;
  uint uVar93;
  uint uVar95;
  uint uVar97;
  float fVar100;
  uint uVar101;
  undefined1 in_ZMM6 [64];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  float fVar107;
  float fVar108;
  float fVar114;
  uint uVar115;
  float fVar117;
  float fVar118;
  float fVar120;
  float fVar121;
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  float fVar116;
  float fVar119;
  float fVar122;
  undefined1 auVar113 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 in_ZMM9 [64];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  float fVar131;
  undefined1 auVar132 [16];
  float fVar136;
  float fVar137;
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar138 [32];
  float fVar139;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  float fVar151;
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  float fVar155;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  float fVar164;
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  int local_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  int iStack_410;
  int iStack_40c;
  int iStack_408;
  int iStack_404;
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  int local_300;
  int iStack_2fc;
  int iStack_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  int iStack_2e8;
  int iStack_2e4;
  int iVar16;
  int iVar17;
  int iVar20;
  undefined1 auVar30 [32];
  undefined1 auVar54 [32];
  undefined1 auVar135 [32];
  
  uVar8 = __real_0000000c;
  uVar7 = __real_00000008;
  uVar6 = __real_00000004;
  uVar5 = __real_40000000;
  fVar21 = __real_3f800000;
  uVar2 = __real_322bcc77;
  uVar11 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar11 = param_6;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar9 = 0;
  }
  else {
    pauVar14 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar9 = 0;
    uVar115 = 0;
    do {
      auVar37 = pauVar14[-1];
      auVar4 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar37);
      auVar51 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            pauVar14[-2]);
      auVar51 = vpblendd_avx2(auVar51,auVar4,0x88);
      auVar4 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar37);
      auVar124 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*pauVar14);
      auVar124 = vpblendd_avx2(auVar124,auVar4,0x13);
      auVar4 = vperm2i128_avx2(auVar51,auVar124,0x31);
      auVar109 = vpslld_avx2(auVar4,4);
      auVar4 = vpcmpeqd_avx2(auVar4,auVar4);
      auVar156 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
      auVar153._4_4_ = uVar6;
      auVar153._0_4_ = uVar6;
      auVar153._8_4_ = uVar6;
      auVar153._12_4_ = uVar6;
      auVar153._16_4_ = uVar6;
      auVar153._20_4_ = uVar6;
      auVar153._24_4_ = uVar6;
      auVar153._28_4_ = uVar6;
      auVar4 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
      auVar105 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
      auVar142._4_4_ = uVar7;
      auVar142._0_4_ = uVar7;
      auVar142._8_4_ = uVar7;
      auVar142._12_4_ = uVar7;
      auVar142._16_4_ = uVar7;
      auVar142._20_4_ = uVar7;
      auVar142._24_4_ = uVar7;
      auVar142._28_4_ = uVar7;
      auVar4 = vpcmpeqd_avx2(in_ZMM9._0_32_,in_ZMM9._0_32_);
      auVar127 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
      auVar4 = vpblendd_avx2(auVar37,pauVar14[-2],0x24);
      auVar133._4_4_ = uVar8;
      auVar133._0_4_ = uVar8;
      auVar133._8_4_ = uVar8;
      auVar133._12_4_ = uVar8;
      auVar133._16_4_ = uVar8;
      auVar133._20_4_ = uVar8;
      auVar133._24_4_ = uVar8;
      auVar133._28_4_ = uVar8;
      auVar37 = vpcmpeqd_avx2(auVar109 | auVar142,auVar109 | auVar142);
      auVar123 = vgatherdps(ZEXT832(0),auVar37);
      in_ZMM9 = ZEXT3264(auVar123);
      auVar4 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar4);
      auVar35._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar35._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar37 = vpermd_avx2(auVar35,*pauVar14);
      auVar37 = vpblendd_avx2(auVar4,auVar37,0xe0);
      auVar35 = vpslld_avx2(auVar37,4);
      auVar37 = vpcmpeqd_avx2(auVar37,auVar37);
      auVar68 = vgatherdps(ZEXT832(0) << 0x20,auVar37);
      auVar37 = vpcmpeqd_avx2(auVar4,auVar4);
      auVar110 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar37);
      auVar37 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar87 = vgatherdps(ZEXT832(0),auVar37);
      auVar37 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar152 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar37);
      auVar24._16_16_ = ZEXT116(0) * auVar51._16_16_ | ZEXT116(1) * auVar124._0_16_;
      auVar24._0_16_ = ZEXT116(0) * auVar124._0_16_ | ZEXT116(1) * auVar51._0_16_;
      auVar36 = vpslld_avx2(auVar24,4);
      vpor_avx2(auVar153,auVar36);
      auVar37 = vpcmpeqd_avx2(auVar124,auVar124);
      auVar64 = vgatherdps(ZEXT832(0),auVar37);
      vpor_avx2(auVar142,auVar36);
      auVar37 = vpcmpeqd_avx2(auVar133 | auVar35,auVar133 | auVar35);
      auVar106 = vgatherdps(ZEXT832(0) << 0x20,auVar37);
      vpor_avx2(auVar133,auVar36);
      auVar37 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar138 = vgatherdps(ZEXT832(0) << 0x20,auVar37);
      auVar37 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar24 = vgatherdps(ZEXT832(0) << 0x20,auVar37);
      auVar37 = *(undefined1 (*) [32])(param_3 + (ulonglong)uVar115);
      auVar4 = vsubps_avx(auVar156,auVar68);
      fVar48 = auVar37._0_4_;
      auVar63._0_4_ = fVar48 * auVar4._0_4_ + auVar68._0_4_;
      fVar55 = auVar37._4_4_;
      auVar63._4_4_ = fVar55 * auVar4._4_4_ + auVar68._4_4_;
      fVar57 = auVar37._8_4_;
      auVar63._8_4_ = fVar57 * auVar4._8_4_ + auVar68._8_4_;
      fVar58 = auVar37._12_4_;
      auVar63._12_4_ = fVar58 * auVar4._12_4_ + auVar68._12_4_;
      fVar59 = auVar37._16_4_;
      auVar63._16_4_ = fVar59 * auVar4._16_4_ + auVar68._16_4_;
      fVar60 = auVar37._20_4_;
      auVar63._20_4_ = fVar60 * auVar4._20_4_ + auVar68._20_4_;
      fVar61 = auVar37._24_4_;
      auVar63._24_4_ = fVar61 * auVar4._24_4_ + auVar68._24_4_;
      fVar62 = auVar37._28_4_;
      auVar63._28_4_ = fVar62 * auVar4._28_4_ + auVar68._28_4_;
      auVar4 = vsubps_avx(auVar105,auVar110);
      fVar77 = auVar110._0_4_;
      auVar69._0_4_ = fVar48 * auVar4._0_4_ + fVar77;
      fVar81 = auVar110._4_4_;
      auVar69._4_4_ = fVar55 * auVar4._4_4_ + fVar81;
      fVar85 = auVar110._8_4_;
      auVar69._8_4_ = fVar57 * auVar4._8_4_ + fVar85;
      fVar108 = auVar110._12_4_;
      auVar69._12_4_ = fVar58 * auVar4._12_4_ + fVar108;
      fVar116 = auVar110._16_4_;
      auVar69._16_4_ = fVar59 * auVar4._16_4_ + fVar116;
      fVar118 = auVar110._20_4_;
      auVar69._20_4_ = fVar60 * auVar4._20_4_ + fVar118;
      fVar120 = auVar110._24_4_;
      auVar69._24_4_ = fVar61 * auVar4._24_4_ + fVar120;
      fVar122 = auVar110._28_4_;
      auVar69._28_4_ = fVar62 * auVar4._28_4_ + fVar122;
      auVar4 = vsubps_avx(auVar127,auVar87);
      fVar42 = auVar87._0_4_;
      auVar140._0_4_ = fVar48 * auVar4._0_4_ + fVar42;
      fVar43 = auVar87._4_4_;
      auVar140._4_4_ = fVar55 * auVar4._4_4_ + fVar43;
      fVar44 = auVar87._8_4_;
      auVar140._8_4_ = fVar57 * auVar4._8_4_ + fVar44;
      fVar45 = auVar87._12_4_;
      auVar140._12_4_ = fVar58 * auVar4._12_4_ + fVar45;
      fVar46 = auVar87._16_4_;
      auVar140._16_4_ = fVar59 * auVar4._16_4_ + fVar46;
      fVar67 = auVar87._20_4_;
      auVar140._20_4_ = fVar60 * auVar4._20_4_ + fVar67;
      fVar73 = auVar87._24_4_;
      auVar140._24_4_ = fVar61 * auVar4._24_4_ + fVar73;
      fVar75 = auVar87._28_4_;
      auVar140._28_4_ = fVar62 * auVar4._28_4_ + fVar75;
      auVar4 = vsubps_avx(auVar24,auVar63);
      auVar51 = vsubps_avx(auVar64,auVar69);
      auVar124 = vsubps_avx(auVar106,auVar140);
      auVar39._0_4_ =
           auVar124._0_4_ * auVar124._0_4_ +
           auVar4._0_4_ * auVar4._0_4_ + auVar51._0_4_ * auVar51._0_4_;
      auVar39._4_4_ =
           auVar124._4_4_ * auVar124._4_4_ +
           auVar4._4_4_ * auVar4._4_4_ + auVar51._4_4_ * auVar51._4_4_;
      auVar39._8_4_ =
           auVar124._8_4_ * auVar124._8_4_ +
           auVar4._8_4_ * auVar4._8_4_ + auVar51._8_4_ * auVar51._8_4_;
      auVar39._12_4_ =
           auVar124._12_4_ * auVar124._12_4_ +
           auVar4._12_4_ * auVar4._12_4_ + auVar51._12_4_ * auVar51._12_4_;
      auVar39._16_4_ =
           auVar124._16_4_ * auVar124._16_4_ +
           auVar4._16_4_ * auVar4._16_4_ + auVar51._16_4_ * auVar51._16_4_;
      auVar39._20_4_ =
           auVar124._20_4_ * auVar124._20_4_ +
           auVar4._20_4_ * auVar4._20_4_ + auVar51._20_4_ * auVar51._20_4_;
      auVar39._24_4_ =
           auVar124._24_4_ * auVar124._24_4_ +
           auVar4._24_4_ * auVar4._24_4_ + auVar51._24_4_ * auVar51._24_4_;
      auVar39._28_4_ =
           auVar124._28_4_ * auVar124._28_4_ +
           auVar4._28_4_ * auVar4._28_4_ + auVar51._28_4_ * auVar51._28_4_;
      auVar142 = vsqrtps_avx(auVar39);
      auVar4 = vdivps_avx(auVar4,auVar142);
      auVar51 = vdivps_avx(auVar51,auVar142);
      auVar124 = vdivps_avx(auVar124,auVar142);
      auVar87 = vsubps_avx(auVar142,*(undefined1 (*) [32])(param_4 + (ulonglong)uVar115));
      fVar86 = auVar87._0_4_;
      fVar92 = auVar87._4_4_;
      fVar94 = auVar87._8_4_;
      fVar96 = auVar87._12_4_;
      fVar98 = auVar87._16_4_;
      fVar100 = auVar87._20_4_;
      fVar102 = auVar87._24_4_;
      fVar104 = auVar87._28_4_;
      auVar87._4_4_ = fVar21;
      auVar87._0_4_ = fVar21;
      auVar87._8_4_ = fVar21;
      auVar87._12_4_ = fVar21;
      auVar87._16_4_ = fVar21;
      auVar87._20_4_ = fVar21;
      auVar87._24_4_ = fVar21;
      auVar87._28_4_ = fVar21;
      auVar153 = vsubps_avx(auVar87,auVar37);
      fVar33 = auVar152._0_4_;
      fVar3 = auVar152._16_4_;
      fVar136 = auVar123._0_4_;
      auVar141._0_4_ = fVar48 * fVar136 + auVar153._0_4_ * fVar33;
      auVar141._4_4_ = fVar55 * auVar123._4_4_ + auVar153._4_4_ * auVar152._4_4_;
      auVar141._8_4_ = fVar57 * auVar123._8_4_ + auVar153._8_4_ * auVar152._8_4_;
      auVar141._12_4_ = fVar58 * auVar123._12_4_ + auVar153._12_4_ * auVar152._12_4_;
      fVar137 = auVar123._16_4_;
      auVar141._16_4_ = fVar59 * fVar137 + auVar153._16_4_ * fVar3;
      auVar141._20_4_ = fVar60 * auVar123._20_4_ + auVar153._20_4_ * auVar152._20_4_;
      auVar141._24_4_ = fVar61 * auVar123._24_4_ + auVar153._24_4_ * auVar152._24_4_;
      auVar141._28_4_ = fVar62 * auVar123._28_4_ + auVar153._28_4_ * auVar152._28_4_;
      auVar110._0_4_ = param_5 * auVar4._0_4_ * fVar86;
      auVar110._4_4_ = param_5 * auVar4._4_4_ * fVar92;
      auVar110._8_4_ = param_5 * auVar4._8_4_ * fVar94;
      auVar110._12_4_ = param_5 * auVar4._12_4_ * fVar96;
      auVar110._16_4_ = param_5 * auVar4._16_4_ * fVar98;
      auVar110._20_4_ = param_5 * auVar4._20_4_ * fVar100;
      auVar110._24_4_ = param_5 * auVar4._24_4_ * fVar102;
      auVar110._28_4_ = param_5 * auVar4._28_4_ * fVar104;
      fVar49 = auVar138._0_4_;
      auVar157._0_4_ = auVar141._0_4_ + fVar49;
      auVar157._4_4_ = auVar141._4_4_ + auVar138._4_4_;
      auVar157._8_4_ = auVar141._8_4_ + auVar138._8_4_;
      auVar157._12_4_ = auVar141._12_4_ + auVar138._12_4_;
      fVar56 = auVar138._16_4_;
      auVar157._16_4_ = auVar141._16_4_ + fVar56;
      auVar157._20_4_ = auVar141._20_4_ + auVar138._20_4_;
      auVar157._24_4_ = auVar141._24_4_ + auVar138._24_4_;
      auVar157._28_4_ = auVar141._28_4_ + auVar138._28_4_;
      auVar87 = vdivps_avx(auVar110,auVar157);
      auVar38._0_4_ = param_5 * auVar51._0_4_ * fVar86;
      auVar38._4_4_ = param_5 * auVar51._4_4_ * fVar92;
      auVar38._8_4_ = param_5 * auVar51._8_4_ * fVar94;
      auVar38._12_4_ = param_5 * auVar51._12_4_ * fVar96;
      auVar38._16_4_ = param_5 * auVar51._16_4_ * fVar98;
      auVar38._20_4_ = param_5 * auVar51._20_4_ * fVar100;
      auVar38._24_4_ = param_5 * auVar51._24_4_ * fVar102;
      auVar38._28_4_ = param_5 * auVar51._28_4_ * fVar104;
      auVar133 = vdivps_avx(auVar38,auVar157);
      auVar51._0_4_ = param_5 * auVar124._0_4_ * fVar86;
      auVar51._4_4_ = param_5 * auVar124._4_4_ * fVar92;
      auVar51._8_4_ = param_5 * auVar124._8_4_ * fVar94;
      auVar51._12_4_ = param_5 * auVar124._12_4_ * fVar96;
      auVar51._16_4_ = param_5 * auVar124._16_4_ * fVar98;
      auVar51._20_4_ = param_5 * auVar124._20_4_ * fVar100;
      auVar51._24_4_ = param_5 * auVar124._24_4_ * fVar102;
      auVar51._28_4_ = param_5 * auVar124._28_4_ * fVar104;
      auVar124 = vdivps_avx(auVar51,auVar157);
      auVar4 = vcmpps_avx(auVar141,ZEXT832(0) << 0x20,0);
      auVar51 = vcmpps_avx(auVar138,ZEXT832(0) << 0x20,0);
      auVar88._0_4_ = auVar51._0_4_ & auVar4._0_4_;
      auVar88._4_4_ = auVar51._4_4_ & auVar4._4_4_;
      auVar88._8_4_ = auVar51._8_4_ & auVar4._8_4_;
      auVar88._12_4_ = auVar51._12_4_ & auVar4._12_4_;
      auVar88._16_4_ = auVar51._16_4_ & auVar4._16_4_;
      auVar88._20_4_ = auVar51._20_4_ & auVar4._20_4_;
      auVar88._24_4_ = auVar51._24_4_ & auVar4._24_4_;
      auVar88._28_4_ = auVar51._28_4_ & auVar4._28_4_;
      auVar4._4_4_ = uVar2;
      auVar4._0_4_ = uVar2;
      auVar4._8_4_ = uVar2;
      auVar4._12_4_ = uVar2;
      auVar4._16_4_ = uVar2;
      auVar4._20_4_ = uVar2;
      auVar4._24_4_ = uVar2;
      auVar4._28_4_ = uVar2;
      auVar4 = vcmpps_avx(auVar142,auVar4,2);
      auVar88 = auVar88 | auVar4;
      uVar13 = auVar88._0_4_;
      fVar139 = (float)(~uVar13 & auVar87._0_4_);
      uVar91 = auVar88._4_4_;
      fVar145 = (float)(~uVar91 & auVar87._4_4_);
      uVar93 = auVar88._8_4_;
      fVar146 = (float)(~uVar93 & auVar87._8_4_);
      uVar95 = auVar88._12_4_;
      fVar147 = (float)(~uVar95 & auVar87._12_4_);
      uVar97 = auVar88._16_4_;
      fVar148 = (float)(~uVar97 & auVar87._16_4_);
      uVar10 = auVar88._20_4_;
      fVar149 = (float)(~uVar10 & auVar87._20_4_);
      uVar101 = auVar88._24_4_;
      fVar150 = (float)(~uVar101 & auVar87._24_4_);
      uVar103 = auVar88._28_4_;
      fVar151 = (float)(~uVar103 & auVar87._28_4_);
      fVar155 = (float)(~uVar13 & auVar133._0_4_);
      fVar158 = (float)(~uVar91 & auVar133._4_4_);
      fVar159 = (float)(~uVar93 & auVar133._8_4_);
      fVar160 = (float)(~uVar95 & auVar133._12_4_);
      fVar161 = (float)(~uVar97 & auVar133._16_4_);
      fVar162 = (float)(~uVar10 & auVar133._20_4_);
      fVar163 = (float)(~uVar101 & auVar133._24_4_);
      fVar164 = (float)(~uVar103 & auVar133._28_4_);
      fVar86 = (float)(~uVar13 & auVar124._0_4_);
      fVar92 = (float)(~uVar91 & auVar124._4_4_);
      fVar94 = (float)(~uVar93 & auVar124._8_4_);
      fVar96 = (float)(~uVar95 & auVar124._12_4_);
      fVar98 = (float)(~uVar97 & auVar124._16_4_);
      fVar100 = (float)(~uVar10 & auVar124._20_4_);
      fVar102 = (float)(~uVar101 & auVar124._24_4_);
      fVar104 = (float)(~uVar103 & auVar124._28_4_);
      in_ZMM6 = ZEXT3264(CONCAT428(fVar104,CONCAT424(fVar102,CONCAT420(fVar100,CONCAT416(fVar98,
                                                  CONCAT412(fVar96,CONCAT48(fVar94,CONCAT44(fVar92,
                                                  fVar86))))))));
      auVar51 = ZEXT832(0) << 0x20;
      auVar4 = vcmpps_avx(auVar51,auVar138,1);
      uVar13 = vmovmskps_avx(auVar4);
      auVar37 = vmaxps_avx(auVar37,auVar153);
      auVar124._0_4_ = fVar21 + auVar37._0_4_;
      auVar124._4_4_ = fVar21 + auVar37._4_4_;
      auVar124._8_4_ = fVar21 + auVar37._8_4_;
      auVar124._12_4_ = fVar21 + auVar37._12_4_;
      auVar124._16_4_ = fVar21 + auVar37._16_4_;
      auVar124._20_4_ = fVar21 + auVar37._20_4_;
      auVar124._24_4_ = fVar21 + auVar37._24_4_;
      auVar124._28_4_ = fVar21 + auVar37._28_4_;
      auVar37._4_4_ = uVar5;
      auVar37._0_4_ = uVar5;
      auVar37._8_4_ = uVar5;
      auVar37._12_4_ = uVar5;
      auVar37._16_4_ = uVar5;
      auVar37._20_4_ = uVar5;
      auVar37._24_4_ = uVar5;
      auVar37._28_4_ = uVar5;
      auVar37 = vdivps_avx(auVar37,auVar124);
      fVar79 = auVar37._0_4_;
      fVar83 = auVar37._4_4_;
      fVar107 = auVar37._8_4_;
      fVar114 = auVar37._12_4_;
      fVar117 = auVar37._16_4_;
      fVar119 = auVar37._20_4_;
      fVar121 = auVar37._24_4_;
      fVar131 = auVar37._28_4_;
      if (uVar13 != 0) {
        fVar65 = fVar49 * fVar79;
        fVar72 = auVar138._4_4_ * fVar83;
        fVar74 = auVar138._8_4_ * fVar107;
        fVar76 = auVar138._12_4_ * fVar114;
        fVar78 = fVar56 * fVar117;
        fVar80 = auVar138._20_4_ * fVar119;
        fVar82 = auVar138._24_4_ * fVar121;
        fVar84 = auVar138._28_4_ * fVar131;
        auVar34._0_4_ = -(fVar65 * fVar139) + auVar24._0_4_;
        auVar34._4_4_ = -(fVar72 * fVar145) + auVar24._4_4_;
        auVar34._8_4_ = -(fVar74 * fVar146) + auVar24._8_4_;
        auVar34._12_4_ = -(fVar76 * fVar147) + auVar24._12_4_;
        auVar25._16_4_ = -(fVar78 * fVar148) + auVar24._16_4_;
        auVar25._0_16_ = auVar34;
        auVar25._20_4_ = -(fVar80 * fVar149) + auVar24._20_4_;
        auVar25._24_4_ = -(fVar82 * fVar150) + auVar24._24_4_;
        auVar25._28_4_ = -(fVar84 * fVar151) + auVar24._28_4_;
        cVar12 = (char)uVar13;
        auVar99 = auVar138._0_16_;
        auVar50 = auVar138._16_16_;
        iVar47 = auVar36._0_4_;
        auVar22 = auVar25._16_16_;
        iVar15 = auVar36._4_4_;
        iVar16 = auVar36._8_4_;
        iVar17 = auVar36._12_4_;
        iVar66 = auVar36._16_4_;
        iVar19 = auVar36._20_4_;
        iVar20 = auVar36._24_4_;
        iVar18 = auVar36._28_4_;
        if ((uVar13 & 1) == 0) {
          if ((uVar13 & 2) == 0) goto LAB_14001096b;
LAB_140010e18:
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_140010e32;
LAB_140010975:
          if ((uVar13 & 8) == 0) goto LAB_14001097f;
LAB_140010e4c:
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + iVar17) = uVar1;
          if ((uVar13 & 0x10) != 0) goto LAB_140010e72;
LAB_140010995:
          if ((uVar13 & 0x20) == 0) goto LAB_14001099f;
LAB_140010e8a:
          uVar1 = vextractps_avx(auVar22,1);
          *(undefined4 *)(param_1 + iVar19) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_140010ea4;
LAB_1400109a9:
          if (-1 < cVar12) goto LAB_1400109b1;
LAB_140010ebc:
          uVar1 = vextractps_avx(auVar22,3);
          *(undefined4 *)(param_1 + iVar18) = uVar1;
          auVar36._0_4_ = -(fVar65 * fVar155) + auVar64._0_4_;
          auVar36._4_4_ = -(fVar72 * fVar158) + auVar64._4_4_;
          auVar36._8_4_ = -(fVar74 * fVar159) + auVar64._8_4_;
          auVar36._12_4_ = -(fVar76 * fVar160) + auVar64._12_4_;
          auVar36._16_4_ = -(fVar78 * fVar161) + auVar64._16_4_;
          auVar36._20_4_ = -(fVar80 * fVar162) + auVar64._20_4_;
          auVar36._24_4_ = -(fVar82 * fVar163) + auVar64._24_4_;
          auVar36._28_4_ = -(fVar84 * fVar164) + auVar64._28_4_;
          if ((uVar13 & 1) != 0) goto LAB_140010edb;
LAB_1400109c0:
          if ((uVar13 & 2) == 0) goto LAB_1400109ca;
LAB_140010ef4:
          uVar1 = vextractps_avx(auVar36._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_140010f0f;
LAB_1400109d4:
          if ((uVar13 & 8) == 0) goto LAB_1400109de;
LAB_140010f2a:
          uVar1 = vextractps_avx(auVar36._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar1;
          auVar34 = auVar36._16_16_;
          if ((uVar13 & 0x10) != 0) goto LAB_140010f4b;
LAB_1400109ee:
          if ((uVar13 & 0x20) == 0) goto LAB_1400109f8;
LAB_140010f64:
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_140010f7f;
LAB_140010a02:
          if (-1 < cVar12) goto LAB_140010a0a;
LAB_140010f98:
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
          auVar64._0_4_ = -(fVar86 * fVar65) + auVar106._0_4_;
          auVar64._4_4_ = -(fVar92 * fVar72) + auVar106._4_4_;
          auVar64._8_4_ = -(fVar94 * fVar74) + auVar106._8_4_;
          auVar64._12_4_ = -(fVar96 * fVar76) + auVar106._12_4_;
          auVar64._16_4_ = -(fVar98 * fVar78) + auVar106._16_4_;
          auVar64._20_4_ = -(fVar100 * fVar80) + auVar106._20_4_;
          auVar64._24_4_ = -(fVar102 * fVar82) + auVar106._24_4_;
          auVar64._28_4_ = -(fVar104 * fVar84) + auVar106._28_4_;
          if ((uVar13 & 1) != 0) goto LAB_140010fb8;
LAB_140010a19:
          if ((uVar13 & 2) == 0) goto LAB_140010a23;
LAB_140010fd1:
          uVar1 = vextractps_avx(auVar64._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_140010fec;
LAB_140010a2d:
          if ((uVar13 & 8) == 0) goto LAB_140010a37;
LAB_140011007:
          uVar1 = vextractps_avx(auVar64._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar1;
          auVar34 = auVar64._16_16_;
        }
        else {
          *(float *)(param_1 + iVar47) = auVar34._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_140010e18;
LAB_14001096b:
          if ((uVar13 & 4) == 0) goto LAB_140010975;
LAB_140010e32:
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_140010e4c;
LAB_14001097f:
          if ((uVar13 & 0x10) == 0) goto LAB_140010995;
LAB_140010e72:
          *(float *)(param_1 + iVar66) = auVar25._16_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_140010e8a;
LAB_14001099f:
          if ((uVar13 & 0x40) == 0) goto LAB_1400109a9;
LAB_140010ea4:
          uVar1 = vextractps_avx(auVar22,2);
          *(undefined4 *)(param_1 + iVar20) = uVar1;
          if (cVar12 < '\0') goto LAB_140010ebc;
LAB_1400109b1:
          auVar36._0_4_ = -(fVar65 * fVar155) + auVar64._0_4_;
          auVar36._4_4_ = -(fVar72 * fVar158) + auVar64._4_4_;
          auVar36._8_4_ = -(fVar74 * fVar159) + auVar64._8_4_;
          auVar36._12_4_ = -(fVar76 * fVar160) + auVar64._12_4_;
          auVar36._16_4_ = -(fVar78 * fVar161) + auVar64._16_4_;
          auVar36._20_4_ = -(fVar80 * fVar162) + auVar64._20_4_;
          auVar36._24_4_ = -(fVar82 * fVar163) + auVar64._24_4_;
          auVar36._28_4_ = -(fVar84 * fVar164) + auVar64._28_4_;
          if ((uVar13 & 1) == 0) goto LAB_1400109c0;
LAB_140010edb:
          *(int *)(param_1 + 4 + (longlong)iVar47) = auVar36._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_140010ef4;
LAB_1400109ca:
          if ((uVar13 & 4) == 0) goto LAB_1400109d4;
LAB_140010f0f:
          uVar1 = vextractps_avx(auVar36._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_140010f2a;
LAB_1400109de:
          auVar34 = auVar36._16_16_;
          if ((uVar13 & 0x10) == 0) goto LAB_1400109ee;
LAB_140010f4b:
          *(int *)(param_1 + 4 + (longlong)iVar66) = auVar34._0_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_140010f64;
LAB_1400109f8:
          if ((uVar13 & 0x40) == 0) goto LAB_140010a02;
LAB_140010f7f:
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar1;
          if (cVar12 < '\0') goto LAB_140010f98;
LAB_140010a0a:
          auVar64._0_4_ = -(fVar86 * fVar65) + auVar106._0_4_;
          auVar64._4_4_ = -(fVar92 * fVar72) + auVar106._4_4_;
          auVar64._8_4_ = -(fVar94 * fVar74) + auVar106._8_4_;
          auVar64._12_4_ = -(fVar96 * fVar76) + auVar106._12_4_;
          auVar64._16_4_ = -(fVar98 * fVar78) + auVar106._16_4_;
          auVar64._20_4_ = -(fVar100 * fVar80) + auVar106._20_4_;
          auVar64._24_4_ = -(fVar102 * fVar82) + auVar106._24_4_;
          auVar64._28_4_ = -(fVar104 * fVar84) + auVar106._28_4_;
          if ((uVar13 & 1) == 0) goto LAB_140010a19;
LAB_140010fb8:
          *(int *)(param_1 + 8 + (longlong)iVar47) = auVar64._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_140010fd1;
LAB_140010a23:
          if ((uVar13 & 4) == 0) goto LAB_140010a2d;
LAB_140010fec:
          uVar1 = vextractps_avx(auVar64._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_140011007;
LAB_140010a37:
          auVar34 = auVar64._16_16_;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar66) = auVar34._0_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
        }
        if ((uVar13 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar47) = fVar49;
        }
        if ((uVar13 & 2) != 0) {
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar1;
        }
        if ((uVar13 & 4) != 0) {
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
        }
        if ((uVar13 & 8) != 0) {
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
        }
        if ((uVar13 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar56;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar50,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar50,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar50,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar1;
        }
      }
      auVar37 = vcmpps_avx(auVar51,auVar123,0xc);
      uVar13 = vmovmskps_avx(auVar37);
      if (uVar13 == 0) {
LAB_140010c61:
        auVar37 = vcmpps_avx(auVar51,auVar152,0xc);
        uVar13 = vmovmskps_avx(auVar37);
      }
      else {
        fVar48 = fVar48 * fVar79 * fVar136;
        fVar55 = fVar55 * fVar83 * auVar123._4_4_;
        fVar57 = fVar57 * fVar107 * auVar123._8_4_;
        fVar58 = fVar58 * fVar114 * auVar123._12_4_;
        fVar59 = fVar59 * fVar117 * fVar137;
        fVar60 = fVar60 * fVar119 * auVar123._20_4_;
        fVar61 = fVar61 * fVar121 * auVar123._24_4_;
        fVar62 = fVar62 * fVar131 * auVar123._28_4_;
        local_400 = auVar156._0_4_;
        fStack_3fc = auVar156._4_4_;
        fStack_3f8 = auVar156._8_4_;
        fStack_3f4 = auVar156._12_4_;
        fStack_3f0 = auVar156._16_4_;
        fStack_3ec = auVar156._20_4_;
        fStack_3e8 = auVar156._24_4_;
        fStack_3e4 = auVar156._28_4_;
        auVar22._0_4_ = fVar48 * fVar139 + local_400;
        auVar22._4_4_ = fVar55 * fVar145 + fStack_3fc;
        auVar22._8_4_ = fVar57 * fVar146 + fStack_3f8;
        auVar22._12_4_ = fVar58 * fVar147 + fStack_3f4;
        auVar106._16_4_ = fVar59 * fVar148 + fStack_3f0;
        auVar106._0_16_ = auVar22;
        auVar106._20_4_ = fVar60 * fVar149 + fStack_3ec;
        auVar106._24_4_ = fVar61 * fVar150 + fStack_3e8;
        auVar106._28_4_ = fVar62 * fVar151 + fStack_3e4;
        cVar12 = (char)uVar13;
        auVar99 = auVar123._0_16_;
        auVar50 = auVar123._16_16_;
        iVar66 = auVar109._0_4_;
        auVar34 = auVar106._16_16_;
        iVar15 = auVar109._4_4_;
        iVar16 = auVar109._8_4_;
        iVar17 = auVar109._12_4_;
        local_440 = auVar105._0_4_;
        fStack_43c = auVar105._4_4_;
        fStack_438 = auVar105._8_4_;
        fStack_434 = auVar105._12_4_;
        fStack_430 = auVar105._16_4_;
        fStack_42c = auVar105._20_4_;
        fStack_428 = auVar105._24_4_;
        fStack_424 = auVar105._28_4_;
        local_3c0 = auVar127._0_4_;
        fStack_3bc = auVar127._4_4_;
        fStack_3b8 = auVar127._8_4_;
        fStack_3b4 = auVar127._12_4_;
        fStack_3b0 = auVar127._16_4_;
        fStack_3ac = auVar127._20_4_;
        fStack_3a8 = auVar127._24_4_;
        fStack_3a4 = auVar127._28_4_;
        iVar47 = auVar109._16_4_;
        iVar19 = auVar109._20_4_;
        iVar20 = auVar109._24_4_;
        iVar18 = auVar109._28_4_;
        if ((uVar13 & 1) == 0) {
          if ((uVar13 & 2) == 0) goto LAB_140010b0b;
LAB_140011188:
          uVar1 = vextractps_avx(auVar22,1);
          *(undefined4 *)(param_1 + iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_1400111a2;
LAB_140010b15:
          if ((uVar13 & 8) == 0) goto LAB_140010b1f;
LAB_1400111bc:
          uVar1 = vextractps_avx(auVar22,3);
          *(undefined4 *)(param_1 + iVar17) = uVar1;
          if ((uVar13 & 0x10) != 0) goto LAB_1400111e2;
LAB_140010b35:
          if ((uVar13 & 0x20) == 0) goto LAB_140010b3f;
LAB_1400111fa:
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + iVar19) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_140011214;
LAB_140010b49:
          if (-1 < cVar12) goto LAB_140010b51;
LAB_14001122c:
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + iVar18) = uVar1;
          auVar105._0_4_ = fVar48 * fVar155 + local_440;
          auVar105._4_4_ = fVar55 * fVar158 + fStack_43c;
          auVar105._8_4_ = fVar57 * fVar159 + fStack_438;
          auVar105._12_4_ = fVar58 * fVar160 + fStack_434;
          auVar105._16_4_ = fVar59 * fVar161 + fStack_430;
          auVar105._20_4_ = fVar60 * fVar162 + fStack_42c;
          auVar105._24_4_ = fVar61 * fVar163 + fStack_428;
          auVar105._28_4_ = fVar62 * fVar164 + fStack_424;
          if ((uVar13 & 1) != 0) goto LAB_140011250;
LAB_140010b65:
          if ((uVar13 & 2) == 0) goto LAB_140010b6f;
LAB_140011269:
          uVar1 = vextractps_avx(auVar105._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_140011284;
LAB_140010b79:
          if ((uVar13 & 8) == 0) goto LAB_140010b83;
LAB_14001129f:
          uVar1 = vextractps_avx(auVar105._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar1;
          auVar34 = auVar105._16_16_;
          if ((uVar13 & 0x10) != 0) goto LAB_1400112c0;
LAB_140010b93:
          if ((uVar13 & 0x20) == 0) goto LAB_140010b9d;
LAB_1400112d9:
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_1400112f4;
LAB_140010ba7:
          if (-1 < cVar12) goto LAB_140010baf;
LAB_14001130d:
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
          auVar109._0_4_ = fVar86 * fVar48 + local_3c0;
          auVar109._4_4_ = fVar92 * fVar55 + fStack_3bc;
          auVar109._8_4_ = fVar94 * fVar57 + fStack_3b8;
          auVar109._12_4_ = fVar96 * fVar58 + fStack_3b4;
          auVar109._16_4_ = fVar98 * fVar59 + fStack_3b0;
          auVar109._20_4_ = fVar100 * fVar60 + fStack_3ac;
          auVar109._24_4_ = fVar102 * fVar61 + fStack_3a8;
          auVar109._28_4_ = fVar104 * fVar62 + fStack_3a4;
          if ((uVar13 & 1) != 0) goto LAB_140011332;
LAB_140010bc3:
          if ((uVar13 & 2) == 0) goto LAB_140010bcd;
LAB_14001134b:
          uVar1 = vextractps_avx(auVar109._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_140011366;
LAB_140010bd7:
          if ((uVar13 & 8) == 0) goto LAB_140010be1;
LAB_140011381:
          uVar1 = vextractps_avx(auVar109._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar1;
          auVar34 = auVar109._16_16_;
        }
        else {
          *(float *)(param_1 + iVar66) = auVar22._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_140011188;
LAB_140010b0b:
          if ((uVar13 & 4) == 0) goto LAB_140010b15;
LAB_1400111a2:
          uVar1 = vextractps_avx(auVar22,2);
          *(undefined4 *)(param_1 + iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_1400111bc;
LAB_140010b1f:
          if ((uVar13 & 0x10) == 0) goto LAB_140010b35;
LAB_1400111e2:
          *(float *)(param_1 + iVar47) = auVar106._16_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_1400111fa;
LAB_140010b3f:
          if ((uVar13 & 0x40) == 0) goto LAB_140010b49;
LAB_140011214:
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + iVar20) = uVar1;
          if (cVar12 < '\0') goto LAB_14001122c;
LAB_140010b51:
          auVar105._0_4_ = fVar48 * fVar155 + local_440;
          auVar105._4_4_ = fVar55 * fVar158 + fStack_43c;
          auVar105._8_4_ = fVar57 * fVar159 + fStack_438;
          auVar105._12_4_ = fVar58 * fVar160 + fStack_434;
          auVar105._16_4_ = fVar59 * fVar161 + fStack_430;
          auVar105._20_4_ = fVar60 * fVar162 + fStack_42c;
          auVar105._24_4_ = fVar61 * fVar163 + fStack_428;
          auVar105._28_4_ = fVar62 * fVar164 + fStack_424;
          if ((uVar13 & 1) == 0) goto LAB_140010b65;
LAB_140011250:
          *(int *)(param_1 + 4 + (longlong)iVar66) = auVar105._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_140011269;
LAB_140010b6f:
          if ((uVar13 & 4) == 0) goto LAB_140010b79;
LAB_140011284:
          uVar1 = vextractps_avx(auVar105._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14001129f;
LAB_140010b83:
          auVar34 = auVar105._16_16_;
          if ((uVar13 & 0x10) == 0) goto LAB_140010b93;
LAB_1400112c0:
          *(int *)(param_1 + 4 + (longlong)iVar47) = auVar34._0_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_1400112d9;
LAB_140010b9d:
          if ((uVar13 & 0x40) == 0) goto LAB_140010ba7;
LAB_1400112f4:
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar1;
          if (cVar12 < '\0') goto LAB_14001130d;
LAB_140010baf:
          auVar109._0_4_ = fVar86 * fVar48 + local_3c0;
          auVar109._4_4_ = fVar92 * fVar55 + fStack_3bc;
          auVar109._8_4_ = fVar94 * fVar57 + fStack_3b8;
          auVar109._12_4_ = fVar96 * fVar58 + fStack_3b4;
          auVar109._16_4_ = fVar98 * fVar59 + fStack_3b0;
          auVar109._20_4_ = fVar100 * fVar60 + fStack_3ac;
          auVar109._24_4_ = fVar102 * fVar61 + fStack_3a8;
          auVar109._28_4_ = fVar104 * fVar62 + fStack_3a4;
          if ((uVar13 & 1) == 0) goto LAB_140010bc3;
LAB_140011332:
          *(int *)(param_1 + 8 + (longlong)iVar66) = auVar109._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_14001134b;
LAB_140010bcd:
          if ((uVar13 & 4) == 0) goto LAB_140010bd7;
LAB_140011366:
          uVar1 = vextractps_avx(auVar109._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_140011381;
LAB_140010be1:
          auVar34 = auVar109._16_16_;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar47) = auVar34._0_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
        }
        if ((uVar13 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar136;
        }
        if ((uVar13 & 2) != 0) {
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar1;
        }
        if ((uVar13 & 4) != 0) {
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
        }
        if ((uVar13 & 8) != 0) {
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
        }
        if ((uVar13 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar47) = fVar137;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar50,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar50,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar1;
        }
        if (-1 < cVar12) goto LAB_140010c61;
        uVar1 = vextractps_avx(auVar50,3);
        *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar1;
        auVar37 = vcmpps_avx(auVar51,auVar152,0xc);
        uVar13 = vmovmskps_avx(auVar37);
      }
      if (uVar13 != 0) {
        fVar49 = fVar79 * fVar33 * auVar153._0_4_;
        fVar56 = fVar83 * auVar152._4_4_ * auVar153._4_4_;
        fVar48 = fVar107 * auVar152._8_4_ * auVar153._8_4_;
        fVar55 = fVar114 * auVar152._12_4_ * auVar153._12_4_;
        fVar57 = fVar117 * fVar3 * auVar153._16_4_;
        fVar58 = fVar119 * auVar152._20_4_ * auVar153._20_4_;
        fVar59 = fVar121 * auVar152._24_4_ * auVar153._24_4_;
        fVar60 = fVar131 * auVar152._28_4_ * auVar153._28_4_;
        auVar99._0_4_ = fVar49 * fVar139 + auVar68._0_4_;
        auVar99._4_4_ = fVar56 * fVar145 + auVar68._4_4_;
        auVar99._8_4_ = fVar48 * fVar146 + auVar68._8_4_;
        auVar99._12_4_ = fVar55 * fVar147 + auVar68._12_4_;
        auVar123._16_4_ = fVar57 * fVar148 + auVar68._16_4_;
        auVar123._0_16_ = auVar99;
        auVar123._20_4_ = fVar58 * fVar149 + auVar68._20_4_;
        auVar123._24_4_ = fVar59 * fVar150 + auVar68._24_4_;
        auVar123._28_4_ = fVar60 * fVar151 + auVar68._28_4_;
        cVar12 = (char)uVar13;
        auVar34 = auVar152._0_16_;
        auVar22 = auVar152._16_16_;
        iVar66 = auVar35._0_4_;
        auVar50 = auVar123._16_16_;
        iVar17 = auVar35._4_4_;
        iVar19 = auVar35._8_4_;
        iVar20 = auVar35._12_4_;
        iVar47 = auVar35._16_4_;
        iVar18 = auVar35._20_4_;
        iVar15 = auVar35._24_4_;
        iVar16 = auVar35._28_4_;
        if ((uVar13 & 1) == 0) {
          if ((uVar13 & 2) == 0) goto LAB_140010caa;
LAB_140011508:
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + iVar17) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_140011522;
LAB_140010cb4:
          if ((uVar13 & 8) == 0) goto LAB_140010cbe;
LAB_14001153c:
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + iVar20) = uVar1;
          if ((uVar13 & 0x10) != 0) goto LAB_140011562;
LAB_140010cd4:
          if ((uVar13 & 0x20) == 0) goto LAB_140010cde;
LAB_14001157a:
          uVar1 = vextractps_avx(auVar50,1);
          *(undefined4 *)(param_1 + iVar18) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_140011594;
LAB_140010ce8:
          if (-1 < cVar12) goto LAB_140010cf0;
LAB_1400115ac:
          uVar1 = vextractps_avx(auVar50,3);
          *(undefined4 *)(param_1 + iVar16) = uVar1;
          auVar68._0_4_ = fVar49 * fVar155 + fVar77;
          auVar68._4_4_ = fVar56 * fVar158 + fVar81;
          auVar68._8_4_ = fVar48 * fVar159 + fVar85;
          auVar68._12_4_ = fVar55 * fVar160 + fVar108;
          auVar68._16_4_ = fVar57 * fVar161 + fVar116;
          auVar68._20_4_ = fVar58 * fVar162 + fVar118;
          auVar68._24_4_ = fVar59 * fVar163 + fVar120;
          auVar68._28_4_ = fVar60 * fVar164 + fVar122;
          if ((uVar13 & 1) != 0) goto LAB_1400115d0;
LAB_140010d04:
          if ((uVar13 & 2) == 0) goto LAB_140010d0e;
LAB_1400115e9:
          uVar1 = vextractps_avx(auVar68._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_140011604;
LAB_140010d18:
          if ((uVar13 & 8) == 0) goto LAB_140010d22;
LAB_14001161f:
          uVar1 = vextractps_avx(auVar68._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar1;
          auVar99 = auVar68._16_16_;
          if ((uVar13 & 0x10) != 0) goto LAB_140011640;
LAB_140010d32:
          if ((uVar13 & 0x20) == 0) goto LAB_140010d3c;
LAB_140011659:
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
          if ((uVar13 & 0x40) != 0) goto LAB_140011674;
LAB_140010d46:
          if (-1 < cVar12) goto LAB_140010d4e;
LAB_14001168d:
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
          in_ZMM6 = ZEXT3264(CONCAT428(fVar60 * fVar104 + fVar75,
                                       CONCAT424(fVar59 * fVar102 + fVar73,
                                                 CONCAT420(fVar58 * fVar100 + fVar67,
                                                           CONCAT416(fVar57 * fVar98 + fVar46,
                                                                     CONCAT412(fVar55 * fVar96 +
                                                                               fVar45,CONCAT48(
                                                  fVar48 * fVar94 + fVar44,
                                                  CONCAT44(fVar56 * fVar92 + fVar43,
                                                           fVar49 * fVar86 + fVar42))))))));
          if ((uVar13 & 1) != 0) goto LAB_1400116b2;
LAB_140010d62:
          if ((uVar13 & 2) == 0) goto LAB_140010d6c;
LAB_1400116cb:
          uVar1 = vextractps_avx(in_ZMM6._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar1;
          if ((uVar13 & 4) != 0) goto LAB_1400116e6;
LAB_140010d76:
          if ((uVar13 & 8) == 0) goto LAB_140010d80;
LAB_140011701:
          uVar1 = vextractps_avx(in_ZMM6._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar1;
          auVar99 = in_ZMM6._16_16_;
        }
        else {
          *(float *)(param_1 + iVar66) = auVar99._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_140011508;
LAB_140010caa:
          if ((uVar13 & 4) == 0) goto LAB_140010cb4;
LAB_140011522:
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + iVar19) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14001153c;
LAB_140010cbe:
          if ((uVar13 & 0x10) == 0) goto LAB_140010cd4;
LAB_140011562:
          *(float *)(param_1 + iVar47) = auVar123._16_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_14001157a;
LAB_140010cde:
          if ((uVar13 & 0x40) == 0) goto LAB_140010ce8;
LAB_140011594:
          uVar1 = vextractps_avx(auVar50,2);
          *(undefined4 *)(param_1 + iVar15) = uVar1;
          if (cVar12 < '\0') goto LAB_1400115ac;
LAB_140010cf0:
          auVar68._0_4_ = fVar49 * fVar155 + fVar77;
          auVar68._4_4_ = fVar56 * fVar158 + fVar81;
          auVar68._8_4_ = fVar48 * fVar159 + fVar85;
          auVar68._12_4_ = fVar55 * fVar160 + fVar108;
          auVar68._16_4_ = fVar57 * fVar161 + fVar116;
          auVar68._20_4_ = fVar58 * fVar162 + fVar118;
          auVar68._24_4_ = fVar59 * fVar163 + fVar120;
          auVar68._28_4_ = fVar60 * fVar164 + fVar122;
          if ((uVar13 & 1) == 0) goto LAB_140010d04;
LAB_1400115d0:
          *(int *)(param_1 + 4 + (longlong)iVar66) = auVar68._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_1400115e9;
LAB_140010d0e:
          if ((uVar13 & 4) == 0) goto LAB_140010d18;
LAB_140011604:
          uVar1 = vextractps_avx(auVar68._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_14001161f;
LAB_140010d22:
          auVar99 = auVar68._16_16_;
          if ((uVar13 & 0x10) == 0) goto LAB_140010d32;
LAB_140011640:
          *(int *)(param_1 + 4 + (longlong)iVar47) = auVar99._0_4_;
          if ((uVar13 & 0x20) != 0) goto LAB_140011659;
LAB_140010d3c:
          if ((uVar13 & 0x40) == 0) goto LAB_140010d46;
LAB_140011674:
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar1;
          if (cVar12 < '\0') goto LAB_14001168d;
LAB_140010d4e:
          in_ZMM6 = ZEXT3264(CONCAT428(fVar60 * fVar104 + fVar75,
                                       CONCAT424(fVar59 * fVar102 + fVar73,
                                                 CONCAT420(fVar58 * fVar100 + fVar67,
                                                           CONCAT416(fVar57 * fVar98 + fVar46,
                                                                     CONCAT412(fVar55 * fVar96 +
                                                                               fVar45,CONCAT48(
                                                  fVar48 * fVar94 + fVar44,
                                                  CONCAT44(fVar56 * fVar92 + fVar43,
                                                           fVar49 * fVar86 + fVar42))))))));
          if ((uVar13 & 1) == 0) goto LAB_140010d62;
LAB_1400116b2:
          *(int *)(param_1 + 8 + (longlong)iVar66) = in_ZMM6._0_4_;
          if ((uVar13 & 2) != 0) goto LAB_1400116cb;
LAB_140010d6c:
          if ((uVar13 & 4) == 0) goto LAB_140010d76;
LAB_1400116e6:
          uVar1 = vextractps_avx(in_ZMM6._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar1;
          if ((uVar13 & 8) != 0) goto LAB_140011701;
LAB_140010d80:
          auVar99 = in_ZMM6._16_16_;
        }
        if ((uVar13 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar47) = auVar99._0_4_;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar99,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar99,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar99,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
        }
        if ((uVar13 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar33;
        }
        if ((uVar13 & 2) != 0) {
          uVar1 = vextractps_avx(auVar34,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
        }
        if ((uVar13 & 4) != 0) {
          uVar1 = vextractps_avx(auVar34,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar1;
        }
        if ((uVar13 & 8) != 0) {
          uVar1 = vextractps_avx(auVar34,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar1;
        }
        if ((uVar13 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar47) = fVar3;
        }
        if ((uVar13 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar22,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar1;
        }
        if ((uVar13 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar22,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar1;
        }
        if (cVar12 < '\0') {
          uVar1 = vextractps_avx(auVar22,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
        }
      }
      uVar115 = uVar115 + 0x20;
      pauVar14 = pauVar14 + 3;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)(uVar11 & 0xfffffff8));
  }
  if ((int)param_6 <= (int)uVar9) {
    return;
  }
  auVar127._4_4_ = uVar9;
  auVar127._0_4_ = uVar9;
  auVar127._8_4_ = uVar9;
  auVar127._12_4_ = uVar9;
  auVar127._16_4_ = uVar9;
  auVar127._20_4_ = uVar9;
  auVar127._24_4_ = uVar9;
  auVar127._28_4_ = uVar9;
  auVar37 = vpor_avx2(auVar127,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar138._4_4_ = param_6;
  auVar138._0_4_ = param_6;
  auVar138._8_4_ = param_6;
  auVar138._12_4_ = param_6;
  auVar138._16_4_ = param_6;
  auVar138._20_4_ = param_6;
  auVar138._24_4_ = param_6;
  auVar138._28_4_ = param_6;
  auVar4 = vpcmpgtd_avx2(auVar138,auVar37);
  pauVar14 = (undefined1 (*) [32])(param_2 + (ulonglong)uVar9 * 0xc);
  auVar37 = vpcmpeqd_avx2(auVar37,auVar37);
  auVar37 = auVar37 & ~auVar4;
  if ((((((((SUB321(auVar37 >> 0x1f,0) & 1) == 0 && (SUB321(auVar37 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar37 >> 0x5f,0) & 1) == 0) && SUB321(auVar37 >> 0x7f,0) == '\0') &&
        (SUB321(auVar37 >> 0x9f,0) & 1) == 0) && SUB321(auVar37 >> 0xbf,0) == '\0') &&
      (SUB321(auVar37 >> 0xdf,0) & 1) == 0) && -1 < auVar37[0x1f]) {
    auVar37 = pauVar14[1];
    auVar51 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                          auVar37);
    auVar124 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar14);
    auVar51 = vpblendd_avx2(auVar124,auVar51,0x88);
    auVar124 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar37);
    auVar87 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                          pauVar14[2]);
    auVar124 = vpblendd_avx2(auVar87,auVar124,0x13);
    auVar152._16_16_ = ZEXT116(0) * auVar51._16_16_ | ZEXT116(1) * auVar124._0_16_;
    auVar152._0_16_ = ZEXT116(0) * auVar124._0_16_ | ZEXT116(1) * auVar51._0_16_;
    auVar51 = vperm2i128_avx2(auVar51,auVar124,0x31);
    auVar37 = vpblendd_avx2(auVar37,*pauVar14,0x24);
    auVar37 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                          auVar37);
    auVar156._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar156._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar124 = vpermd_avx2(auVar156,pauVar14[2]);
    auVar37 = vpblendd_avx2(auVar37,auVar124,0xe0);
  }
  else {
    auVar152 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
    auVar51 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
    auVar37 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
  }
  auVar105 = vpslld_avx2(auVar51,4);
  auVar52._4_4_ = __real_00000004;
  auVar52._0_4_ = __real_00000004;
  auVar52._8_4_ = __real_00000004;
  auVar52._12_4_ = __real_00000004;
  auVar52._16_4_ = __real_00000004;
  auVar52._20_4_ = __real_00000004;
  auVar52._24_4_ = __real_00000004;
  auVar52._28_4_ = __real_00000004;
  auVar51 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
  auVar124 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
  auVar70._4_4_ = __real_00000008;
  auVar70._0_4_ = __real_00000008;
  auVar70._8_4_ = __real_00000008;
  auVar70._12_4_ = __real_00000008;
  auVar70._16_4_ = __real_00000008;
  auVar70._20_4_ = __real_00000008;
  auVar70._24_4_ = __real_00000008;
  auVar70._28_4_ = __real_00000008;
  auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
  auVar89._4_4_ = __real_0000000c;
  auVar89._0_4_ = __real_0000000c;
  auVar89._8_4_ = __real_0000000c;
  auVar89._12_4_ = __real_0000000c;
  auVar89._16_4_ = __real_0000000c;
  auVar89._20_4_ = __real_0000000c;
  auVar89._24_4_ = __real_0000000c;
  auVar89._28_4_ = __real_0000000c;
  auVar109 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
  auVar38 = vpslld_avx2(auVar37,4);
  vpor_avx2(auVar38,auVar52);
  auVar142 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
  vpor_avx2(auVar38,auVar70);
  auVar153 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar4);
  vpor_avx2(auVar38,auVar89);
  auVar106 = vgatherdps(ZEXT832(0),auVar4);
  auVar133 = vgatherdps(ZEXT832(0) << 0x20,auVar4);
  auVar64 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_3 + (int)(uVar9 << 2)));
  auVar37 = vmaskmovps_avx(auVar4,auVar51);
  auVar51 = vmaskmovps_avx(auVar4,auVar124);
  auVar124 = vmaskmovps_avx(auVar4,auVar87);
  auVar87 = vmaskmovps_avx(auVar4,auVar133);
  auVar133 = vmaskmovps_avx(auVar4,auVar142);
  auVar142 = vmaskmovps_avx(auVar4,auVar153);
  auVar39 = vpslld_avx2(auVar152,4);
  auVar153 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar4);
  auVar24 = vgatherdps(ZEXT832(0),auVar4);
  auVar35 = vgatherdps(ZEXT832(0),auVar4);
  auVar88 = vgatherdps(ZEXT832(0),auVar4);
  auVar153 = vmaskmovps_avx(auVar4,auVar153);
  auVar24 = vmaskmovps_avx(auVar4,auVar24);
  auVar35 = vmaskmovps_avx(auVar4,auVar35);
  auVar26._4_4_ = __real_3f800000;
  auVar26._0_4_ = __real_3f800000;
  auVar26._8_4_ = __real_3f800000;
  auVar26._12_4_ = __real_3f800000;
  auVar26._16_4_ = __real_3f800000;
  auVar26._20_4_ = __real_3f800000;
  auVar26._24_4_ = __real_3f800000;
  auVar26._28_4_ = __real_3f800000;
  auVar69 = vsubps_avx(auVar26,auVar64);
  auVar36 = vmaxps_avx(auVar64,auVar69);
  auVar27._0_4_ = auVar36._0_4_ + __real_3f800000;
  auVar27._4_4_ = auVar36._4_4_ + __real_3f800000;
  auVar27._8_4_ = auVar36._8_4_ + __real_3f800000;
  auVar27._12_4_ = auVar36._12_4_ + __real_3f800000;
  auVar27._16_4_ = auVar36._16_4_ + __real_3f800000;
  auVar27._20_4_ = auVar36._20_4_ + __real_3f800000;
  auVar27._24_4_ = auVar36._24_4_ + __real_3f800000;
  auVar27._28_4_ = auVar36._28_4_ + __real_3f800000;
  auVar53._4_4_ = __real_40000000;
  auVar53._0_4_ = __real_40000000;
  auVar53._8_4_ = __real_40000000;
  auVar53._12_4_ = __real_40000000;
  auVar53._16_4_ = __real_40000000;
  auVar53._20_4_ = __real_40000000;
  auVar53._24_4_ = __real_40000000;
  auVar53._28_4_ = __real_40000000;
  auVar36 = vdivps_avx(auVar53,auVar27);
  auVar63 = vsubps_avx(auVar37,auVar87);
  auVar110 = vsubps_avx(auVar51,auVar133);
  fVar67 = auVar64._0_4_;
  auVar28._0_4_ = fVar67 * auVar63._0_4_ + auVar87._0_4_;
  fVar73 = auVar64._4_4_;
  auVar28._4_4_ = fVar73 * auVar63._4_4_ + auVar87._4_4_;
  fVar75 = auVar64._8_4_;
  auVar28._8_4_ = fVar75 * auVar63._8_4_ + auVar87._8_4_;
  fVar77 = auVar64._12_4_;
  auVar28._12_4_ = fVar77 * auVar63._12_4_ + auVar87._12_4_;
  fVar79 = auVar64._16_4_;
  auVar28._16_4_ = fVar79 * auVar63._16_4_ + auVar87._16_4_;
  fVar81 = auVar64._20_4_;
  auVar28._20_4_ = fVar81 * auVar63._20_4_ + auVar87._20_4_;
  fVar83 = auVar64._24_4_;
  auVar28._24_4_ = fVar83 * auVar63._24_4_ + auVar87._24_4_;
  fVar85 = auVar64._28_4_;
  auVar28._28_4_ = fVar85 * auVar63._28_4_ + auVar87._28_4_;
  fVar100 = auVar133._0_4_;
  auVar125._0_4_ = fVar67 * auVar110._0_4_ + fVar100;
  fVar104 = auVar133._4_4_;
  auVar125._4_4_ = fVar73 * auVar110._4_4_ + fVar104;
  fVar55 = auVar133._8_4_;
  auVar125._8_4_ = fVar75 * auVar110._8_4_ + fVar55;
  fVar58 = auVar133._12_4_;
  auVar125._12_4_ = fVar77 * auVar110._12_4_ + fVar58;
  fVar60 = auVar133._16_4_;
  auVar125._16_4_ = fVar79 * auVar110._16_4_ + fVar60;
  fVar62 = auVar133._20_4_;
  auVar125._20_4_ = fVar81 * auVar110._20_4_ + fVar62;
  fVar43 = auVar133._24_4_;
  auVar125._24_4_ = fVar83 * auVar110._24_4_ + fVar43;
  fVar45 = auVar133._28_4_;
  auVar125._28_4_ = fVar85 * auVar110._28_4_ + fVar45;
  auVar133 = vsubps_avx(auVar124,auVar142);
  fVar102 = auVar142._0_4_;
  auVar128._0_4_ = fVar67 * auVar133._0_4_ + fVar102;
  fVar48 = auVar142._4_4_;
  auVar128._4_4_ = fVar73 * auVar133._4_4_ + fVar48;
  fVar57 = auVar142._8_4_;
  auVar128._8_4_ = fVar75 * auVar133._8_4_ + fVar57;
  fVar59 = auVar142._12_4_;
  auVar128._12_4_ = fVar77 * auVar133._12_4_ + fVar59;
  fVar61 = auVar142._16_4_;
  auVar128._16_4_ = fVar79 * auVar133._16_4_ + fVar61;
  fVar42 = auVar142._20_4_;
  auVar128._20_4_ = fVar81 * auVar133._20_4_ + fVar42;
  fVar44 = auVar142._24_4_;
  auVar128._24_4_ = fVar83 * auVar133._24_4_ + fVar44;
  fVar46 = auVar142._28_4_;
  auVar128._28_4_ = fVar85 * auVar133._28_4_ + fVar46;
  auVar133 = vsubps_avx(auVar153,auVar28);
  auVar142 = vsubps_avx(auVar24,auVar125);
  auVar63 = vsubps_avx(auVar35,auVar128);
  auVar143._0_4_ =
       auVar63._0_4_ * auVar63._0_4_ +
       auVar133._0_4_ * auVar133._0_4_ + auVar142._0_4_ * auVar142._0_4_;
  auVar143._4_4_ =
       auVar63._4_4_ * auVar63._4_4_ +
       auVar133._4_4_ * auVar133._4_4_ + auVar142._4_4_ * auVar142._4_4_;
  auVar143._8_4_ =
       auVar63._8_4_ * auVar63._8_4_ +
       auVar133._8_4_ * auVar133._8_4_ + auVar142._8_4_ * auVar142._8_4_;
  auVar143._12_4_ =
       auVar63._12_4_ * auVar63._12_4_ +
       auVar133._12_4_ * auVar133._12_4_ + auVar142._12_4_ * auVar142._12_4_;
  auVar143._16_4_ =
       auVar63._16_4_ * auVar63._16_4_ +
       auVar133._16_4_ * auVar133._16_4_ + auVar142._16_4_ * auVar142._16_4_;
  auVar143._20_4_ =
       auVar63._20_4_ * auVar63._20_4_ +
       auVar133._20_4_ * auVar133._20_4_ + auVar142._20_4_ * auVar142._20_4_;
  auVar143._24_4_ =
       auVar63._24_4_ * auVar63._24_4_ +
       auVar133._24_4_ * auVar133._24_4_ + auVar142._24_4_ * auVar142._24_4_;
  auVar143._28_4_ =
       auVar63._28_4_ * auVar63._28_4_ +
       auVar133._28_4_ * auVar133._28_4_ + auVar142._28_4_ * auVar142._28_4_;
  auVar68 = vsqrtps_avx(auVar143);
  auVar133 = vdivps_avx(auVar133,auVar68);
  auVar142 = vdivps_avx(auVar142,auVar68);
  auVar63 = vdivps_avx(auVar63,auVar68);
  auVar110 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_4 + (int)(uVar9 << 2)));
  auVar110 = vsubps_avx(auVar68,auVar110);
  fVar56 = auVar110._0_4_;
  fVar86 = auVar110._4_4_;
  fVar33 = auVar110._8_4_;
  fVar92 = auVar110._12_4_;
  fVar94 = auVar110._16_4_;
  fVar96 = auVar110._20_4_;
  fVar98 = auVar110._24_4_;
  fVar3 = auVar110._28_4_;
  fVar107 = auVar106._0_4_;
  fVar118 = auVar106._16_4_;
  fVar162 = auVar109._0_4_;
  auVar154._0_4_ = fVar67 * fVar162 + fVar107 * auVar69._0_4_;
  auVar154._4_4_ = fVar73 * auVar109._4_4_ + auVar106._4_4_ * auVar69._4_4_;
  auVar154._8_4_ = fVar75 * auVar109._8_4_ + auVar106._8_4_ * auVar69._8_4_;
  auVar154._12_4_ = fVar77 * auVar109._12_4_ + auVar106._12_4_ * auVar69._12_4_;
  fVar163 = auVar109._16_4_;
  auVar154._16_4_ = fVar79 * fVar163 + fVar118 * auVar69._16_4_;
  auVar154._20_4_ = fVar81 * auVar109._20_4_ + auVar106._20_4_ * auVar69._20_4_;
  auVar154._24_4_ = fVar83 * auVar109._24_4_ + auVar106._24_4_ * auVar69._24_4_;
  auVar154._28_4_ = fVar85 * auVar109._28_4_ + auVar106._28_4_ * auVar69._28_4_;
  auVar134._0_4_ = param_5 * auVar133._0_4_ * fVar56;
  auVar134._4_4_ = param_5 * auVar133._4_4_ * fVar86;
  auVar134._8_4_ = param_5 * auVar133._8_4_ * fVar33;
  auVar134._12_4_ = param_5 * auVar133._12_4_ * fVar92;
  auVar134._16_4_ = param_5 * auVar133._16_4_ * fVar94;
  auVar134._20_4_ = param_5 * auVar133._20_4_ * fVar96;
  auVar134._24_4_ = param_5 * auVar133._24_4_ * fVar98;
  auVar134._28_4_ = param_5 * auVar133._28_4_ * fVar3;
  fVar21 = auVar88._0_4_;
  auVar40._0_4_ = auVar154._0_4_ + fVar21;
  auVar40._4_4_ = auVar154._4_4_ + auVar88._4_4_;
  auVar40._8_4_ = auVar154._8_4_ + auVar88._8_4_;
  auVar40._12_4_ = auVar154._12_4_ + auVar88._12_4_;
  fVar49 = auVar88._16_4_;
  auVar40._16_4_ = auVar154._16_4_ + fVar49;
  auVar40._20_4_ = auVar154._20_4_ + auVar88._20_4_;
  auVar40._24_4_ = auVar154._24_4_ + auVar88._24_4_;
  auVar40._28_4_ = auVar154._28_4_ + auVar88._28_4_;
  auVar110 = vdivps_avx(auVar134,auVar40);
  auVar126._0_4_ = param_5 * auVar142._0_4_ * fVar56;
  auVar126._4_4_ = param_5 * auVar142._4_4_ * fVar86;
  auVar126._8_4_ = param_5 * auVar142._8_4_ * fVar33;
  auVar126._12_4_ = param_5 * auVar142._12_4_ * fVar92;
  auVar126._16_4_ = param_5 * auVar142._16_4_ * fVar94;
  auVar126._20_4_ = param_5 * auVar142._20_4_ * fVar96;
  auVar126._24_4_ = param_5 * auVar142._24_4_ * fVar98;
  auVar126._28_4_ = param_5 * auVar142._28_4_ * fVar3;
  auVar64 = vdivps_avx(auVar126,auVar40);
  auVar111._0_4_ = param_5 * auVar63._0_4_ * fVar56;
  auVar111._4_4_ = param_5 * auVar63._4_4_ * fVar86;
  auVar111._8_4_ = param_5 * auVar63._8_4_ * fVar33;
  auVar111._12_4_ = param_5 * auVar63._12_4_ * fVar92;
  auVar111._16_4_ = param_5 * auVar63._16_4_ * fVar94;
  auVar111._20_4_ = param_5 * auVar63._20_4_ * fVar96;
  auVar111._24_4_ = param_5 * auVar63._24_4_ * fVar98;
  auVar111._28_4_ = param_5 * auVar63._28_4_ * fVar3;
  auVar63 = vdivps_avx(auVar111,auVar40);
  auVar133 = vcmpps_avx(auVar154,ZEXT832(0) << 0x20,0);
  auVar142 = vcmpps_avx(auVar88,ZEXT832(0) << 0x20,0);
  auVar112._0_4_ = auVar142._0_4_ & auVar133._0_4_;
  auVar112._4_4_ = auVar142._4_4_ & auVar133._4_4_;
  auVar112._8_4_ = auVar142._8_4_ & auVar133._8_4_;
  auVar112._12_4_ = auVar142._12_4_ & auVar133._12_4_;
  auVar112._16_4_ = auVar142._16_4_ & auVar133._16_4_;
  auVar112._20_4_ = auVar142._20_4_ & auVar133._20_4_;
  auVar112._24_4_ = auVar142._24_4_ & auVar133._24_4_;
  auVar112._28_4_ = auVar142._28_4_ & auVar133._28_4_;
  auVar129._4_4_ = __real_322bcc77;
  auVar129._0_4_ = __real_322bcc77;
  auVar129._8_4_ = __real_322bcc77;
  auVar129._12_4_ = __real_322bcc77;
  auVar129._16_4_ = __real_322bcc77;
  auVar129._20_4_ = __real_322bcc77;
  auVar129._24_4_ = __real_322bcc77;
  auVar129._28_4_ = __real_322bcc77;
  auVar133 = vcmpps_avx(auVar68,auVar129,2);
  auVar133 = auVar133 | auVar112;
  uVar11 = auVar133._0_4_;
  fVar131 = (float)(~uVar11 & auVar110._0_4_);
  uVar9 = auVar133._4_4_;
  fVar136 = (float)(~uVar9 & auVar110._4_4_);
  uVar115 = auVar133._8_4_;
  fVar137 = (float)(~uVar115 & auVar110._8_4_);
  uVar13 = auVar133._12_4_;
  fVar139 = (float)(~uVar13 & auVar110._12_4_);
  uVar91 = auVar133._16_4_;
  fVar145 = (float)(~uVar91 & auVar110._16_4_);
  uVar93 = auVar133._20_4_;
  fVar146 = (float)(~uVar93 & auVar110._20_4_);
  uVar95 = auVar133._24_4_;
  fVar147 = (float)(~uVar95 & auVar110._24_4_);
  uVar97 = auVar133._28_4_;
  fVar148 = (float)(~uVar97 & auVar110._28_4_);
  fVar149 = (float)(~uVar11 & auVar64._0_4_);
  fVar150 = (float)(~uVar9 & auVar64._4_4_);
  fVar151 = (float)(~uVar115 & auVar64._8_4_);
  fVar155 = (float)(~uVar13 & auVar64._12_4_);
  fVar158 = (float)(~uVar91 & auVar64._16_4_);
  fVar159 = (float)(~uVar93 & auVar64._20_4_);
  fVar160 = (float)(~uVar95 & auVar64._24_4_);
  fVar161 = (float)(~uVar97 & auVar64._28_4_);
  fVar108 = (float)(~uVar11 & auVar63._0_4_);
  fVar114 = (float)(~uVar9 & auVar63._4_4_);
  fVar116 = (float)(~uVar115 & auVar63._8_4_);
  fVar117 = (float)(~uVar13 & auVar63._12_4_);
  fVar119 = (float)(~uVar91 & auVar63._16_4_);
  fVar120 = (float)(~uVar93 & auVar63._20_4_);
  fVar121 = (float)(~uVar95 & auVar63._24_4_);
  fVar122 = (float)(~uVar97 & auVar63._28_4_);
  auVar133 = vcmpps_avx(ZEXT832(0) << 0x20,auVar88,1);
  uVar11 = auVar4._0_4_;
  auVar41._0_4_ = auVar133._0_4_ & uVar11;
  uVar9 = auVar4._4_4_;
  auVar41._4_4_ = auVar133._4_4_ & uVar9;
  uVar115 = auVar4._8_4_;
  auVar41._8_4_ = auVar133._8_4_ & uVar115;
  uVar13 = auVar4._12_4_;
  auVar41._12_4_ = auVar133._12_4_ & uVar13;
  uVar91 = auVar4._16_4_;
  auVar41._16_4_ = auVar133._16_4_ & uVar91;
  uVar93 = auVar4._20_4_;
  auVar41._20_4_ = auVar133._20_4_ & uVar93;
  uVar95 = auVar4._24_4_;
  auVar41._24_4_ = auVar133._24_4_ & uVar95;
  uVar97 = auVar4._28_4_;
  auVar41._28_4_ = auVar133._28_4_ & uVar97;
  uVar10 = vmovmskps_avx(auVar41);
  fVar56 = auVar36._0_4_;
  fVar86 = auVar36._4_4_;
  fVar33 = auVar36._8_4_;
  fVar92 = auVar36._12_4_;
  fVar94 = auVar36._16_4_;
  fVar96 = auVar36._20_4_;
  fVar98 = auVar36._24_4_;
  fVar3 = auVar36._28_4_;
  if (uVar10 != 0) {
    fVar164 = fVar21 * fVar56;
    fVar65 = auVar88._4_4_ * fVar86;
    fVar72 = auVar88._8_4_ * fVar33;
    fVar74 = auVar88._12_4_ * fVar92;
    fVar76 = fVar49 * fVar94;
    fVar78 = auVar88._20_4_ * fVar96;
    fVar80 = auVar88._24_4_ * fVar98;
    fVar82 = auVar88._28_4_ * fVar3;
    auVar50._0_4_ = -(fVar164 * fVar131) + auVar153._0_4_;
    auVar50._4_4_ = -(fVar65 * fVar136) + auVar153._4_4_;
    auVar50._8_4_ = -(fVar72 * fVar137) + auVar153._8_4_;
    auVar50._12_4_ = -(fVar74 * fVar139) + auVar153._12_4_;
    auVar54._16_4_ = -(fVar76 * fVar145) + auVar153._16_4_;
    auVar54._0_16_ = auVar50;
    auVar54._20_4_ = -(fVar78 * fVar146) + auVar153._20_4_;
    auVar54._24_4_ = -(fVar80 * fVar147) + auVar153._24_4_;
    auVar54._28_4_ = -(fVar82 * fVar148) + auVar153._28_4_;
    cVar12 = (char)uVar10;
    local_420 = auVar39._0_4_;
    iStack_41c = auVar39._4_4_;
    iStack_418 = auVar39._8_4_;
    iStack_414 = auVar39._12_4_;
    iStack_410 = auVar39._16_4_;
    iStack_40c = auVar39._20_4_;
    iStack_408 = auVar39._24_4_;
    iStack_404 = auVar39._28_4_;
    auVar22 = auVar88._0_16_;
    auVar99 = auVar88._16_16_;
    auVar34 = auVar54._16_16_;
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) == 0) goto LAB_140011cb2;
LAB_140012179:
      uVar2 = vextractps_avx(auVar50,1);
      *(undefined4 *)(param_1 + iStack_41c) = uVar2;
      if ((uVar10 & 4) != 0) goto LAB_140012192;
LAB_140011cbb:
      if ((uVar10 & 8) == 0) goto LAB_140011cc4;
LAB_1400121ab:
      uVar2 = vextractps_avx(auVar50,3);
      *(undefined4 *)(param_1 + iStack_414) = uVar2;
      if ((uVar10 & 0x10) != 0) goto LAB_1400121d0;
LAB_140011cd9:
      if ((uVar10 & 0x20) == 0) goto LAB_140011ce2;
LAB_1400121e7:
      uVar2 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + iStack_40c) = uVar2;
      if ((uVar10 & 0x40) != 0) goto LAB_140012200;
LAB_140011ceb:
      if (-1 < cVar12) goto LAB_140011cf3;
LAB_140012218:
      uVar2 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + iStack_404) = uVar2;
      auVar90._0_4_ = -(fVar164 * fVar149) + auVar24._0_4_;
      auVar90._4_4_ = -(fVar65 * fVar150) + auVar24._4_4_;
      auVar90._8_4_ = -(fVar72 * fVar151) + auVar24._8_4_;
      auVar90._12_4_ = -(fVar74 * fVar155) + auVar24._12_4_;
      auVar90._16_4_ = -(fVar76 * fVar158) + auVar24._16_4_;
      auVar90._20_4_ = -(fVar78 * fVar159) + auVar24._20_4_;
      auVar90._24_4_ = -(fVar80 * fVar160) + auVar24._24_4_;
      auVar90._28_4_ = -(fVar82 * fVar161) + auVar24._28_4_;
      if ((uVar10 & 1) != 0) goto LAB_140012236;
LAB_140011d01:
      if ((uVar10 & 2) == 0) goto LAB_140011d0a;
LAB_14001224e:
      uVar2 = vextractps_avx(auVar90._0_16_,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_41c) = uVar2;
      if ((uVar10 & 4) != 0) goto LAB_140012268;
LAB_140011d13:
      if ((uVar10 & 8) == 0) goto LAB_140011d1c;
LAB_140012282:
      uVar2 = vextractps_avx(auVar90._0_16_,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_414) = uVar2;
      auVar34 = auVar90._16_16_;
      if ((uVar10 & 0x10) != 0) goto LAB_1400122a2;
LAB_140011d2b:
      if ((uVar10 & 0x20) == 0) goto LAB_140011d34;
LAB_1400122ba:
      uVar2 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_40c) = uVar2;
      if ((uVar10 & 0x40) != 0) goto LAB_1400122d4;
LAB_140011d3d:
      if (-1 < cVar12) goto LAB_140011d45;
LAB_1400122ed:
      uVar2 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_404) = uVar2;
      auVar130._0_4_ = -(fVar108 * fVar164) + auVar35._0_4_;
      auVar130._4_4_ = -(fVar114 * fVar65) + auVar35._4_4_;
      auVar130._8_4_ = -(fVar116 * fVar72) + auVar35._8_4_;
      auVar130._12_4_ = -(fVar117 * fVar74) + auVar35._12_4_;
      auVar130._16_4_ = -(fVar119 * fVar76) + auVar35._16_4_;
      auVar130._20_4_ = -(fVar120 * fVar78) + auVar35._20_4_;
      auVar130._24_4_ = -(fVar121 * fVar80) + auVar35._24_4_;
      auVar130._28_4_ = -(fVar122 * fVar82) + auVar35._28_4_;
      if ((uVar10 & 1) != 0) goto LAB_14001230c;
LAB_140011d53:
      if ((uVar10 & 2) == 0) goto LAB_140011d5c;
LAB_140012324:
      uVar2 = vextractps_avx(auVar130._0_16_,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_41c) = uVar2;
      if ((uVar10 & 4) != 0) goto LAB_14001233e;
LAB_140011d65:
      if ((uVar10 & 8) == 0) goto LAB_140011d6e;
LAB_140012358:
      uVar2 = vextractps_avx(auVar130._0_16_,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_414) = uVar2;
      auVar34 = auVar130._16_16_;
    }
    else {
      *(float *)(param_1 + local_420) = auVar50._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_140012179;
LAB_140011cb2:
      if ((uVar10 & 4) == 0) goto LAB_140011cbb;
LAB_140012192:
      uVar2 = vextractps_avx(auVar50,2);
      *(undefined4 *)(param_1 + iStack_418) = uVar2;
      if ((uVar10 & 8) != 0) goto LAB_1400121ab;
LAB_140011cc4:
      if ((uVar10 & 0x10) == 0) goto LAB_140011cd9;
LAB_1400121d0:
      *(float *)(param_1 + iStack_410) = auVar54._16_4_;
      if ((uVar10 & 0x20) != 0) goto LAB_1400121e7;
LAB_140011ce2:
      if ((uVar10 & 0x40) == 0) goto LAB_140011ceb;
LAB_140012200:
      uVar2 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + iStack_408) = uVar2;
      if (cVar12 < '\0') goto LAB_140012218;
LAB_140011cf3:
      auVar90._0_4_ = -(fVar164 * fVar149) + auVar24._0_4_;
      auVar90._4_4_ = -(fVar65 * fVar150) + auVar24._4_4_;
      auVar90._8_4_ = -(fVar72 * fVar151) + auVar24._8_4_;
      auVar90._12_4_ = -(fVar74 * fVar155) + auVar24._12_4_;
      auVar90._16_4_ = -(fVar76 * fVar158) + auVar24._16_4_;
      auVar90._20_4_ = -(fVar78 * fVar159) + auVar24._20_4_;
      auVar90._24_4_ = -(fVar80 * fVar160) + auVar24._24_4_;
      auVar90._28_4_ = -(fVar82 * fVar161) + auVar24._28_4_;
      if ((uVar10 & 1) == 0) goto LAB_140011d01;
LAB_140012236:
      *(int *)(param_1 + 4 + (longlong)local_420) = auVar90._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_14001224e;
LAB_140011d0a:
      if ((uVar10 & 4) == 0) goto LAB_140011d13;
LAB_140012268:
      uVar2 = vextractps_avx(auVar90._0_16_,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_418) = uVar2;
      if ((uVar10 & 8) != 0) goto LAB_140012282;
LAB_140011d1c:
      auVar34 = auVar90._16_16_;
      if ((uVar10 & 0x10) == 0) goto LAB_140011d2b;
LAB_1400122a2:
      *(int *)(param_1 + 4 + (longlong)iStack_410) = auVar34._0_4_;
      if ((uVar10 & 0x20) != 0) goto LAB_1400122ba;
LAB_140011d34:
      if ((uVar10 & 0x40) == 0) goto LAB_140011d3d;
LAB_1400122d4:
      uVar2 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_408) = uVar2;
      if (cVar12 < '\0') goto LAB_1400122ed;
LAB_140011d45:
      auVar130._0_4_ = -(fVar108 * fVar164) + auVar35._0_4_;
      auVar130._4_4_ = -(fVar114 * fVar65) + auVar35._4_4_;
      auVar130._8_4_ = -(fVar116 * fVar72) + auVar35._8_4_;
      auVar130._12_4_ = -(fVar117 * fVar74) + auVar35._12_4_;
      auVar130._16_4_ = -(fVar119 * fVar76) + auVar35._16_4_;
      auVar130._20_4_ = -(fVar120 * fVar78) + auVar35._20_4_;
      auVar130._24_4_ = -(fVar121 * fVar80) + auVar35._24_4_;
      auVar130._28_4_ = -(fVar122 * fVar82) + auVar35._28_4_;
      if ((uVar10 & 1) == 0) goto LAB_140011d53;
LAB_14001230c:
      *(int *)(param_1 + 8 + (longlong)local_420) = auVar130._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_140012324;
LAB_140011d5c:
      if ((uVar10 & 4) == 0) goto LAB_140011d65;
LAB_14001233e:
      uVar2 = vextractps_avx(auVar130._0_16_,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_418) = uVar2;
      if ((uVar10 & 8) != 0) goto LAB_140012358;
LAB_140011d6e:
      auVar34 = auVar130._16_16_;
    }
    if ((uVar10 & 0x10) != 0) {
      *(int *)(param_1 + 8 + (longlong)iStack_410) = auVar34._0_4_;
    }
    if ((uVar10 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_40c) = uVar2;
    }
    if ((uVar10 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_408) = uVar2;
    }
    if (cVar12 < '\0') {
      uVar2 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_404) = uVar2;
    }
    if ((uVar10 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)local_420) = fVar21;
    }
    if ((uVar10 & 2) != 0) {
      uVar2 = vextractps_avx(auVar22,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_41c) = uVar2;
    }
    if ((uVar10 & 4) != 0) {
      uVar2 = vextractps_avx(auVar22,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_418) = uVar2;
    }
    if ((uVar10 & 8) != 0) {
      uVar2 = vextractps_avx(auVar22,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_414) = uVar2;
    }
    if ((uVar10 & 0x10) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iStack_410) = fVar49;
    }
    if ((uVar10 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar99,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_40c) = uVar2;
    }
    if ((uVar10 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar99,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_408) = uVar2;
    }
    if (cVar12 < '\0') {
      uVar2 = vextractps_avx(auVar99,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_404) = uVar2;
    }
  }
  auVar4 = vcmpps_avx(auVar109,ZEXT832(0) << 0x20,0xc);
  auVar29._0_4_ = auVar4._0_4_ & uVar11;
  auVar29._4_4_ = auVar4._4_4_ & uVar9;
  auVar29._8_4_ = auVar4._8_4_ & uVar115;
  auVar29._12_4_ = auVar4._12_4_ & uVar13;
  auVar29._16_4_ = auVar4._16_4_ & uVar91;
  auVar29._20_4_ = auVar4._20_4_ & uVar93;
  auVar29._24_4_ = auVar4._24_4_ & uVar95;
  auVar29._28_4_ = auVar4._28_4_ & uVar97;
  uVar10 = vmovmskps_avx(auVar29);
  if (uVar10 == 0) goto LAB_140011f70;
  fVar67 = fVar67 * fVar162 * fVar56;
  fVar73 = fVar73 * auVar109._4_4_ * fVar86;
  fVar75 = fVar75 * auVar109._8_4_ * fVar33;
  fVar77 = fVar77 * auVar109._12_4_ * fVar92;
  fVar79 = fVar79 * fVar163 * fVar94;
  fVar81 = fVar81 * auVar109._20_4_ * fVar96;
  fVar83 = fVar83 * auVar109._24_4_ * fVar98;
  fVar85 = fVar85 * auVar109._28_4_ * fVar3;
  local_400 = auVar37._0_4_;
  fStack_3fc = auVar37._4_4_;
  fStack_3f8 = auVar37._8_4_;
  fStack_3f4 = auVar37._12_4_;
  fStack_3f0 = auVar37._16_4_;
  fStack_3ec = auVar37._20_4_;
  fStack_3e8 = auVar37._24_4_;
  fStack_3e4 = auVar37._28_4_;
  auVar23._0_4_ = fVar67 * fVar131 + local_400;
  auVar23._4_4_ = fVar73 * fVar136 + fStack_3fc;
  auVar23._8_4_ = fVar75 * fVar137 + fStack_3f8;
  auVar23._12_4_ = fVar77 * fVar139 + fStack_3f4;
  auVar30._16_4_ = fVar79 * fVar145 + fStack_3f0;
  auVar30._0_16_ = auVar23;
  auVar30._20_4_ = fVar81 * fVar146 + fStack_3ec;
  auVar30._24_4_ = fVar83 * fVar147 + fStack_3e8;
  auVar30._28_4_ = fVar85 * fVar148 + fStack_3e4;
  cVar12 = (char)uVar10;
  auVar22 = auVar109._0_16_;
  auVar99 = auVar109._16_16_;
  iVar47 = auVar105._0_4_;
  auVar34 = auVar30._16_16_;
  iVar17 = auVar105._4_4_;
  iVar15 = auVar105._8_4_;
  iVar16 = auVar105._12_4_;
  local_3e0 = auVar51._0_4_;
  fStack_3dc = auVar51._4_4_;
  fStack_3d8 = auVar51._8_4_;
  fStack_3d4 = auVar51._12_4_;
  fStack_3d0 = auVar51._16_4_;
  fStack_3cc = auVar51._20_4_;
  fStack_3c8 = auVar51._24_4_;
  fStack_3c4 = auVar51._28_4_;
  local_3c0 = auVar124._0_4_;
  fStack_3bc = auVar124._4_4_;
  fStack_3b8 = auVar124._8_4_;
  fStack_3b4 = auVar124._12_4_;
  fStack_3b0 = auVar124._16_4_;
  fStack_3ac = auVar124._20_4_;
  fStack_3a8 = auVar124._24_4_;
  fStack_3a4 = auVar124._28_4_;
  iVar66 = auVar105._16_4_;
  iVar18 = auVar105._20_4_;
  iVar20 = auVar105._24_4_;
  iVar19 = auVar105._28_4_;
  if ((uVar10 & 1) == 0) {
    if ((uVar10 & 2) == 0) goto LAB_140011e33;
LAB_1400124c0:
    uVar2 = vextractps_avx(auVar23,1);
    *(undefined4 *)(param_1 + iVar17) = uVar2;
    if ((uVar10 & 4) != 0) goto LAB_1400124d9;
LAB_140011e3c:
    if ((uVar10 & 8) == 0) goto LAB_140011e45;
LAB_1400124f2:
    uVar2 = vextractps_avx(auVar23,3);
    *(undefined4 *)(param_1 + iVar16) = uVar2;
    if ((uVar10 & 0x10) != 0) goto LAB_140012517;
LAB_140011e5a:
    if ((uVar10 & 0x20) == 0) goto LAB_140011e63;
LAB_14001252e:
    uVar2 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + iVar18) = uVar2;
    if ((uVar10 & 0x40) != 0) goto LAB_140012547;
LAB_140011e6c:
    if (-1 < cVar12) goto LAB_140011e74;
LAB_14001255f:
    uVar2 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + iVar19) = uVar2;
    auVar31._0_4_ = fVar67 * fVar149 + local_3e0;
    auVar31._4_4_ = fVar73 * fVar150 + fStack_3dc;
    auVar31._8_4_ = fVar75 * fVar151 + fStack_3d8;
    auVar31._12_4_ = fVar77 * fVar155 + fStack_3d4;
    auVar31._16_4_ = fVar79 * fVar158 + fStack_3d0;
    auVar31._20_4_ = fVar81 * fVar159 + fStack_3cc;
    auVar31._24_4_ = fVar83 * fVar160 + fStack_3c8;
    auVar31._28_4_ = fVar85 * fVar161 + fStack_3c4;
    if ((uVar10 & 1) != 0) goto LAB_140012583;
LAB_140011e88:
    if ((uVar10 & 2) == 0) goto LAB_140011e91;
LAB_14001259b:
    uVar2 = vextractps_avx(auVar31._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar2;
    if ((uVar10 & 4) != 0) goto LAB_1400125b5;
LAB_140011e9a:
    if ((uVar10 & 8) == 0) goto LAB_140011ea3;
LAB_1400125cf:
    uVar2 = vextractps_avx(auVar31._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar2;
    auVar34 = auVar31._16_16_;
    if ((uVar10 & 0x10) != 0) goto LAB_1400125ef;
LAB_140011eb2:
    if ((uVar10 & 0x20) == 0) goto LAB_140011ebb;
LAB_140012607:
    uVar2 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar2;
    if ((uVar10 & 0x40) != 0) goto LAB_140012621;
LAB_140011ec4:
    if (-1 < cVar12) goto LAB_140011ecc;
LAB_14001263a:
    uVar2 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar2;
    auVar71._0_4_ = fVar108 * fVar67 + local_3c0;
    auVar71._4_4_ = fVar114 * fVar73 + fStack_3bc;
    auVar71._8_4_ = fVar116 * fVar75 + fStack_3b8;
    auVar71._12_4_ = fVar117 * fVar77 + fStack_3b4;
    auVar71._16_4_ = fVar119 * fVar79 + fStack_3b0;
    auVar71._20_4_ = fVar120 * fVar81 + fStack_3ac;
    auVar71._24_4_ = fVar121 * fVar83 + fStack_3a8;
    auVar71._28_4_ = fVar122 * fVar85 + fStack_3a4;
    if ((uVar10 & 1) != 0) goto LAB_14001265e;
LAB_140011edf:
    if ((uVar10 & 2) == 0) goto LAB_140011ee8;
LAB_140012676:
    uVar2 = vextractps_avx(auVar71._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar2;
    if ((uVar10 & 4) != 0) goto LAB_140012690;
LAB_140011ef1:
    if ((uVar10 & 8) == 0) goto LAB_140011efa;
LAB_1400126aa:
    uVar2 = vextractps_avx(auVar71._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar2;
    auVar34 = auVar71._16_16_;
  }
  else {
    *(float *)(param_1 + iVar47) = auVar23._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_1400124c0;
LAB_140011e33:
    if ((uVar10 & 4) == 0) goto LAB_140011e3c;
LAB_1400124d9:
    uVar2 = vextractps_avx(auVar23,2);
    *(undefined4 *)(param_1 + iVar15) = uVar2;
    if ((uVar10 & 8) != 0) goto LAB_1400124f2;
LAB_140011e45:
    if ((uVar10 & 0x10) == 0) goto LAB_140011e5a;
LAB_140012517:
    *(float *)(param_1 + iVar66) = auVar30._16_4_;
    if ((uVar10 & 0x20) != 0) goto LAB_14001252e;
LAB_140011e63:
    if ((uVar10 & 0x40) == 0) goto LAB_140011e6c;
LAB_140012547:
    uVar2 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + iVar20) = uVar2;
    if (cVar12 < '\0') goto LAB_14001255f;
LAB_140011e74:
    auVar31._0_4_ = fVar67 * fVar149 + local_3e0;
    auVar31._4_4_ = fVar73 * fVar150 + fStack_3dc;
    auVar31._8_4_ = fVar75 * fVar151 + fStack_3d8;
    auVar31._12_4_ = fVar77 * fVar155 + fStack_3d4;
    auVar31._16_4_ = fVar79 * fVar158 + fStack_3d0;
    auVar31._20_4_ = fVar81 * fVar159 + fStack_3cc;
    auVar31._24_4_ = fVar83 * fVar160 + fStack_3c8;
    auVar31._28_4_ = fVar85 * fVar161 + fStack_3c4;
    if ((uVar10 & 1) == 0) goto LAB_140011e88;
LAB_140012583:
    *(int *)(param_1 + 4 + (longlong)iVar47) = auVar31._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_14001259b;
LAB_140011e91:
    if ((uVar10 & 4) == 0) goto LAB_140011e9a;
LAB_1400125b5:
    uVar2 = vextractps_avx(auVar31._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar2;
    if ((uVar10 & 8) != 0) goto LAB_1400125cf;
LAB_140011ea3:
    auVar34 = auVar31._16_16_;
    if ((uVar10 & 0x10) == 0) goto LAB_140011eb2;
LAB_1400125ef:
    *(int *)(param_1 + 4 + (longlong)iVar66) = auVar34._0_4_;
    if ((uVar10 & 0x20) != 0) goto LAB_140012607;
LAB_140011ebb:
    if ((uVar10 & 0x40) == 0) goto LAB_140011ec4;
LAB_140012621:
    uVar2 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar2;
    if (cVar12 < '\0') goto LAB_14001263a;
LAB_140011ecc:
    auVar71._0_4_ = fVar108 * fVar67 + local_3c0;
    auVar71._4_4_ = fVar114 * fVar73 + fStack_3bc;
    auVar71._8_4_ = fVar116 * fVar75 + fStack_3b8;
    auVar71._12_4_ = fVar117 * fVar77 + fStack_3b4;
    auVar71._16_4_ = fVar119 * fVar79 + fStack_3b0;
    auVar71._20_4_ = fVar120 * fVar81 + fStack_3ac;
    auVar71._24_4_ = fVar121 * fVar83 + fStack_3a8;
    auVar71._28_4_ = fVar122 * fVar85 + fStack_3a4;
    if ((uVar10 & 1) == 0) goto LAB_140011edf;
LAB_14001265e:
    *(int *)(param_1 + 8 + (longlong)iVar47) = auVar71._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_140012676;
LAB_140011ee8:
    if ((uVar10 & 4) == 0) goto LAB_140011ef1;
LAB_140012690:
    uVar2 = vextractps_avx(auVar71._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar2;
    if ((uVar10 & 8) != 0) goto LAB_1400126aa;
LAB_140011efa:
    auVar34 = auVar71._16_16_;
  }
  if ((uVar10 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar66) = auVar34._0_4_;
  }
  if ((uVar10 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar2;
  }
  if ((uVar10 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar2;
  }
  if ((uVar10 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar47) = fVar162;
  }
  if ((uVar10 & 2) != 0) {
    uVar2 = vextractps_avx(auVar22,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar2;
  }
  if ((uVar10 & 4) != 0) {
    uVar2 = vextractps_avx(auVar22,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar2;
  }
  if ((uVar10 & 8) != 0) {
    uVar2 = vextractps_avx(auVar22,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar2;
  }
  if ((uVar10 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar163;
  }
  if ((uVar10 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar99,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar2;
  }
  if ((uVar10 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar99,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar99,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar2;
  }
LAB_140011f70:
  auVar37 = vcmpps_avx(auVar106,ZEXT1232(ZEXT812(0)),0xc);
  auVar32._0_4_ = auVar37._0_4_ & uVar11;
  auVar32._4_4_ = auVar37._4_4_ & uVar9;
  auVar32._8_4_ = auVar37._8_4_ & uVar115;
  auVar32._12_4_ = auVar37._12_4_ & uVar13;
  auVar32._16_4_ = auVar37._16_4_ & uVar91;
  auVar32._20_4_ = auVar37._20_4_ & uVar93;
  auVar32._24_4_ = auVar37._24_4_ & uVar95;
  auVar32._28_4_ = auVar37._28_4_ & uVar97;
  uVar11 = vmovmskps_avx(auVar32);
  if (uVar11 == 0) {
    return;
  }
  fVar21 = fVar107 * fVar56 * auVar69._0_4_;
  fVar49 = auVar106._4_4_ * fVar86 * auVar69._4_4_;
  fVar56 = auVar106._8_4_ * fVar33 * auVar69._8_4_;
  fVar86 = auVar106._12_4_ * fVar92 * auVar69._12_4_;
  fVar33 = fVar118 * fVar94 * auVar69._16_4_;
  fVar92 = auVar106._20_4_ * fVar96 * auVar69._20_4_;
  fVar94 = auVar106._24_4_ * fVar98 * auVar69._24_4_;
  fVar96 = auVar106._28_4_ * fVar3 * auVar69._28_4_;
  auVar132._0_4_ = fVar21 * fVar131 + auVar87._0_4_;
  auVar132._4_4_ = fVar49 * fVar136 + auVar87._4_4_;
  auVar132._8_4_ = fVar56 * fVar137 + auVar87._8_4_;
  auVar132._12_4_ = fVar86 * fVar139 + auVar87._12_4_;
  auVar135._16_4_ = fVar33 * fVar145 + auVar87._16_4_;
  auVar135._0_16_ = auVar132;
  auVar135._20_4_ = fVar92 * fVar146 + auVar87._20_4_;
  auVar135._24_4_ = fVar94 * fVar147 + auVar87._24_4_;
  auVar135._28_4_ = fVar96 * fVar148 + auVar87._28_4_;
  cVar12 = (char)uVar11;
  local_300 = auVar38._0_4_;
  iStack_2fc = auVar38._4_4_;
  iStack_2f8 = auVar38._8_4_;
  iStack_2f4 = auVar38._12_4_;
  iStack_2f0 = auVar38._16_4_;
  iStack_2ec = auVar38._20_4_;
  iStack_2e8 = auVar38._24_4_;
  iStack_2e4 = auVar38._28_4_;
  auVar34 = auVar106._0_16_;
  auVar22 = auVar106._16_16_;
  auVar99 = auVar135._16_16_;
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + local_300) = auVar132._0_4_;
  }
  if ((uVar11 & 2) != 0) {
    uVar2 = vextractps_avx(auVar132,1);
    *(undefined4 *)(param_1 + iStack_2fc) = uVar2;
  }
  if ((uVar11 & 4) != 0) {
    uVar2 = vextractps_avx(auVar132,2);
    *(undefined4 *)(param_1 + iStack_2f8) = uVar2;
  }
  if ((uVar11 & 8) != 0) {
    uVar2 = vextractps_avx(auVar132,3);
    *(undefined4 *)(param_1 + iStack_2f4) = uVar2;
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + iStack_2f0) = auVar135._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar99,1);
    *(undefined4 *)(param_1 + iStack_2ec) = uVar2;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar99,2);
    *(undefined4 *)(param_1 + iStack_2e8) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar99,3);
    *(undefined4 *)(param_1 + iStack_2e4) = uVar2;
    auVar144._0_4_ = fVar21 * fVar149 + fVar100;
    auVar144._4_4_ = fVar49 * fVar150 + fVar104;
    auVar144._8_4_ = fVar56 * fVar151 + fVar55;
    auVar144._12_4_ = fVar86 * fVar155 + fVar58;
    auVar144._16_4_ = fVar33 * fVar158 + fVar60;
    auVar144._20_4_ = fVar92 * fVar159 + fVar62;
    auVar144._24_4_ = fVar94 * fVar160 + fVar43;
    auVar144._28_4_ = fVar96 * fVar161 + fVar45;
  }
  else {
    auVar144._0_4_ = fVar21 * fVar149 + fVar100;
    auVar144._4_4_ = fVar49 * fVar150 + fVar104;
    auVar144._8_4_ = fVar56 * fVar151 + fVar55;
    auVar144._12_4_ = fVar86 * fVar155 + fVar58;
    auVar144._16_4_ = fVar33 * fVar158 + fVar60;
    auVar144._20_4_ = fVar92 * fVar159 + fVar62;
    auVar144._24_4_ = fVar94 * fVar160 + fVar43;
    auVar144._28_4_ = fVar96 * fVar161 + fVar45;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_300) = auVar144._0_4_;
  }
  auVar99 = auVar144._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar2 = vextractps_avx(auVar99,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2fc) = uVar2;
  }
  if ((uVar11 & 4) != 0) {
    uVar2 = vextractps_avx(auVar99,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2f8) = uVar2;
  }
  auVar50 = auVar144._16_16_;
  if ((uVar11 & 8) != 0) {
    uVar2 = vextractps_avx(auVar99,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2f4) = uVar2;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_2f0) = auVar144._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar50,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2ec) = uVar2;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar50,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2e8) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar50,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_2e4) = uVar2;
    auVar113._0_4_ = fVar21 * fVar108 + fVar102;
    auVar113._4_4_ = fVar49 * fVar114 + fVar48;
    auVar113._8_4_ = fVar56 * fVar116 + fVar57;
    auVar113._12_4_ = fVar86 * fVar117 + fVar59;
    auVar113._16_4_ = fVar33 * fVar119 + fVar61;
    auVar113._20_4_ = fVar92 * fVar120 + fVar42;
    auVar113._24_4_ = fVar94 * fVar121 + fVar44;
    auVar113._28_4_ = fVar96 * fVar122 + fVar46;
  }
  else {
    auVar113._0_4_ = fVar21 * fVar108 + fVar102;
    auVar113._4_4_ = fVar49 * fVar114 + fVar48;
    auVar113._8_4_ = fVar56 * fVar116 + fVar57;
    auVar113._12_4_ = fVar86 * fVar117 + fVar59;
    auVar113._16_4_ = fVar33 * fVar119 + fVar61;
    auVar113._20_4_ = fVar92 * fVar120 + fVar42;
    auVar113._24_4_ = fVar94 * fVar121 + fVar44;
    auVar113._28_4_ = fVar96 * fVar122 + fVar46;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_300) = auVar113._0_4_;
  }
  auVar99 = auVar113._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar2 = vextractps_avx(auVar99,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2fc) = uVar2;
  }
  if ((uVar11 & 4) != 0) {
    uVar2 = vextractps_avx(auVar99,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2f8) = uVar2;
  }
  auVar50 = auVar113._16_16_;
  if ((uVar11 & 8) != 0) {
    uVar2 = vextractps_avx(auVar99,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2f4) = uVar2;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_2f0) = auVar113._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar50,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2ec) = uVar2;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar50,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2e8) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar50,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_2e4) = uVar2;
  }
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_300) = fVar107;
  }
  if ((uVar11 & 2) != 0) {
    uVar2 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2fc) = uVar2;
  }
  if ((uVar11 & 4) != 0) {
    uVar2 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2f8) = uVar2;
  }
  if ((uVar11 & 8) != 0) {
    uVar2 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2f4) = uVar2;
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_2f0) = fVar118;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar22,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2ec) = uVar2;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar22,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2e8) = uVar2;
  }
  if (cVar12 < '\0') {
    uVar2 = vextractps_avx(auVar22,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2e4) = uVar2;
  }
  return;
}

// ApplyAxialSpringConstraintsWithWeightMaps_avx2 @ 140012b50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ApplyAxialSpringConstraintsWithWeightMaps_avx2
                    (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                    longlong param_5,ulonglong param_6,uint param_7)

{
  undefined1 uVar1;
  undefined1 auVar2 [32];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar56 [16];
  undefined1 *puVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar28;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar25 [32];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar54;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  float fVar55;
  float fVar63;
  float fVar64;
  float fVar66;
  float fVar68;
  float fVar69;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  float fVar65;
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  float fVar71;
  uint uVar79;
  uint uVar80;
  float fVar81;
  float fVar82;
  uint uVar85;
  float fVar87;
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  float fVar90;
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  uint uVar83;
  uint uVar88;
  uint uVar91;
  undefined1 auVar77 [32];
  float fVar84;
  float fVar86;
  float fVar89;
  float fVar92;
  undefined1 auVar78 [32];
  undefined1 auVar93 [32];
  uint uVar96;
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  float fVar100;
  float fVar101;
  undefined1 auVar99 [32];
  float fVar102;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar103 [32];
  float fVar111;
  undefined1 auVar104 [32];
  int iVar112;
  float fVar113;
  undefined1 auVar114 [32];
  undefined1 in_ZMM8 [64];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  float fVar120;
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  float fVar119;
  undefined1 in_ZMM9 [64];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  float fVar123;
  float fVar130;
  float fVar132;
  undefined1 auVar124 [16];
  float fVar131;
  float fVar134;
  undefined1 auVar126 [16];
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  undefined1 auVar127 [32];
  float fVar133;
  undefined1 auVar125 [16];
  float fVar139;
  undefined1 auVar128 [32];
  float fVar140;
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  float fVar144;
  float fVar151;
  float fVar153;
  float fVar154;
  float fVar156;
  float fVar157;
  float fVar159;
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  float fVar160;
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  float fVar152;
  float fVar155;
  float fVar158;
  float fVar161;
  undefined1 auVar150 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  int iVar166;
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  int local_420;
  int iStack_41c;
  int iStack_418;
  int iStack_414;
  int iStack_410;
  int iStack_40c;
  int iStack_408;
  int iStack_404;
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  int local_360;
  int iStack_35c;
  int iStack_358;
  int iStack_354;
  int iStack_350;
  int iStack_34c;
  int iStack_348;
  int iStack_344;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  int iStack_330;
  int iStack_32c;
  int iStack_328;
  int iStack_324;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar49 [32];
  undefined1 auVar51 [32];
  undefined1 auVar129 [32];
  
  uVar8 = __real_0000000c;
  uVar7 = __real_00000008;
  uVar6 = __real_00000004;
  uVar5 = __real_40000000;
  fVar71 = __real_3f800000;
  uVar4 = __real_322bcc77;
  uVar11 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar11 = param_7;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar15 = 0;
  }
  else {
    pauVar12 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar79 = 0;
    uVar15 = 0;
    do {
      auVar2 = pauVar12[-1];
      auVar57 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar2);
      auVar45 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            pauVar12[-2]);
      auVar58 = vpblendd_avx2(auVar45,auVar57,0x88);
      auVar57 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar2);
      auVar45 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *pauVar12);
      auVar118 = vpblendd_avx2(auVar45,auVar57,0x13);
      auVar57 = vperm2i128_avx2(auVar58,auVar118,0x31);
      auVar141 = vpslld_avx2(auVar57,4);
      auVar164._4_4_ = uVar6;
      auVar164._0_4_ = uVar6;
      auVar164._8_4_ = uVar6;
      auVar164._12_4_ = uVar6;
      auVar164._16_4_ = uVar6;
      auVar164._20_4_ = uVar6;
      auVar164._24_4_ = uVar6;
      auVar164._28_4_ = uVar6;
      vpor_avx2(auVar141,auVar164);
      auVar57 = vpcmpeqd_avx2(in_ZMM8._0_32_,in_ZMM8._0_32_);
      auVar43 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
      auVar142._4_4_ = uVar7;
      auVar142._0_4_ = uVar7;
      auVar142._8_4_ = uVar7;
      auVar142._12_4_ = uVar7;
      auVar142._16_4_ = uVar7;
      auVar142._20_4_ = uVar7;
      auVar142._24_4_ = uVar7;
      auVar142._28_4_ = uVar7;
      vpor_avx2(auVar141,auVar142);
      auVar57 = vpcmpeqd_avx2(in_ZMM9._0_32_,in_ZMM9._0_32_);
      auVar44 = vgatherdps(ZEXT832(0) << 0x20,auVar57);
      auVar2 = vpblendd_avx2(auVar2,pauVar12[-2],0x24);
      auVar57 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar2);
      auVar56._4_4_ = uVar8;
      auVar56._0_4_ = uVar8;
      auVar56._8_4_ = uVar8;
      auVar56._12_4_ = uVar8;
      auVar128._16_4_ = uVar8;
      auVar128._0_16_ = auVar56;
      auVar128._20_4_ = uVar8;
      auVar128._24_4_ = uVar8;
      auVar128._28_4_ = uVar8;
      auVar45 = vpor_avx2(auVar141,auVar128);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar72 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
      auVar73._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar73._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar2 = vpermd_avx2(auVar73,*pauVar12);
      auVar2 = vpblendd_avx2(auVar57,auVar2,0xe0);
      auVar93 = vpslld_avx2(auVar2,4);
      vpor_avx2(auVar164,auVar93);
      auVar2 = vpcmpeqd_avx2(auVar57,auVar57);
      auVar145 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
      vpor_avx2(auVar93,auVar142);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar99 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
      auVar57 = vpor_avx2(auVar128,auVar93);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar73 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
      auVar25._16_16_ = ZEXT116(0) * auVar58._16_16_ | ZEXT116(1) * auVar118._0_16_;
      auVar25._0_16_ = ZEXT116(0) * auVar118._0_16_ | ZEXT116(1) * auVar58._0_16_;
      auVar167 = vpslld_avx2(auVar25,4);
      vpor_avx2(auVar167,auVar164);
      auVar2 = vpcmpeqd_avx2(auVar57,auVar57);
      auVar121 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
      vpor_avx2(auVar167,auVar142);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar115 = vgatherdps(ZEXT832(0),auVar2);
      in_ZMM9 = ZEXT3264(auVar115);
      auVar124._8_8_ = 0;
      auVar124._0_8_ = *(ulonglong *)(param_5 + uVar15);
      auVar57 = vpmovzxbd_avx2(auVar124);
      vpor_avx2(auVar167,auVar128);
      auVar2 = vpcmpeqd_avx2(auVar45,auVar45);
      auVar25 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
      auVar57 = vpslld_avx2(auVar57,2);
      auVar2 = vpmovzxdq_avx2(auVar57._16_16_);
      auVar57 = vpmovzxdq_avx2(auVar57._0_16_);
      auVar124 = vpcmpeqd_avx(auVar56,auVar56);
      auVar56 = vgatherqps((undefined1  [16])0x0,auVar124);
      auVar124 = vpcmpeqd_avx(auVar57._0_16_,auVar57._0_16_);
      auVar124 = vgatherqps(ZEXT816(0) << 0x40,auVar124);
      auVar2 = vpcmpeqd_avx2(auVar2,auVar2);
      auVar103 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
      auVar2 = vpcmpeqd_avx2(auVar141,auVar141);
      auVar97 = vgatherdps(ZEXT832(0),auVar2);
      auVar2 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar162 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
      auVar2 = *(undefined1 (*) [32])(param_3 + (ulonglong)uVar79);
      auVar57 = vsubps_avx(auVar103,auVar97);
      fVar22 = auVar2._0_4_;
      auVar168._0_4_ = fVar22 * auVar57._0_4_ + auVar97._0_4_;
      fVar26 = auVar2._4_4_;
      auVar168._4_4_ = fVar26 * auVar57._4_4_ + auVar97._4_4_;
      fVar28 = auVar2._8_4_;
      auVar168._8_4_ = fVar28 * auVar57._8_4_ + auVar97._8_4_;
      fVar30 = auVar2._12_4_;
      auVar168._12_4_ = fVar30 * auVar57._12_4_ + auVar97._12_4_;
      fVar32 = auVar2._16_4_;
      auVar168._16_4_ = fVar32 * auVar57._16_4_ + auVar97._16_4_;
      fVar34 = auVar2._20_4_;
      auVar168._20_4_ = fVar34 * auVar57._20_4_ + auVar97._20_4_;
      fVar36 = auVar2._24_4_;
      auVar168._24_4_ = fVar36 * auVar57._24_4_ + auVar97._24_4_;
      fVar38 = auVar2._28_4_;
      auVar168._28_4_ = fVar38 * auVar57._28_4_ + auVar97._28_4_;
      auVar57 = vsubps_avx(auVar43,auVar145);
      fVar131 = auVar145._0_4_;
      auVar95._0_4_ = fVar22 * auVar57._0_4_ + fVar131;
      fVar134 = auVar145._4_4_;
      auVar95._4_4_ = fVar26 * auVar57._4_4_ + fVar134;
      fVar137 = auVar145._8_4_;
      auVar95._8_4_ = fVar28 * auVar57._8_4_ + fVar137;
      fVar140 = auVar145._12_4_;
      auVar95._12_4_ = fVar30 * auVar57._12_4_ + fVar140;
      fVar152 = auVar145._16_4_;
      auVar95._16_4_ = fVar32 * auVar57._16_4_ + fVar152;
      fVar155 = auVar145._20_4_;
      auVar95._20_4_ = fVar34 * auVar57._20_4_ + fVar155;
      fVar158 = auVar145._24_4_;
      auVar95._24_4_ = fVar36 * auVar57._24_4_ + fVar158;
      fVar161 = auVar145._28_4_;
      auVar95._28_4_ = fVar38 * auVar57._28_4_ + fVar161;
      auVar57 = vsubps_avx(auVar44,auVar99);
      fVar86 = auVar99._0_4_;
      auVar145._0_4_ = fVar22 * auVar57._0_4_ + fVar86;
      fVar87 = auVar99._4_4_;
      auVar145._4_4_ = fVar26 * auVar57._4_4_ + fVar87;
      fVar89 = auVar99._8_4_;
      auVar145._8_4_ = fVar28 * auVar57._8_4_ + fVar89;
      fVar90 = auVar99._12_4_;
      auVar145._12_4_ = fVar30 * auVar57._12_4_ + fVar90;
      fVar92 = auVar99._16_4_;
      auVar145._16_4_ = fVar32 * auVar57._16_4_ + fVar92;
      fVar100 = auVar99._20_4_;
      auVar145._20_4_ = fVar34 * auVar57._20_4_ + fVar100;
      fVar101 = auVar99._24_4_;
      auVar145._24_4_ = fVar36 * auVar57._24_4_ + fVar101;
      fVar113 = auVar99._28_4_;
      auVar145._28_4_ = fVar38 * auVar57._28_4_ + fVar113;
      auVar57 = vsubps_avx(auVar162,auVar168);
      auVar45 = vsubps_avx(auVar121,auVar95);
      auVar58 = vsubps_avx(auVar115,auVar145);
      auVar99._0_4_ =
           auVar58._0_4_ * auVar58._0_4_ +
           auVar57._0_4_ * auVar57._0_4_ + auVar45._0_4_ * auVar45._0_4_;
      auVar99._4_4_ =
           auVar58._4_4_ * auVar58._4_4_ +
           auVar57._4_4_ * auVar57._4_4_ + auVar45._4_4_ * auVar45._4_4_;
      auVar99._8_4_ =
           auVar58._8_4_ * auVar58._8_4_ +
           auVar57._8_4_ * auVar57._8_4_ + auVar45._8_4_ * auVar45._8_4_;
      auVar99._12_4_ =
           auVar58._12_4_ * auVar58._12_4_ +
           auVar57._12_4_ * auVar57._12_4_ + auVar45._12_4_ * auVar45._12_4_;
      auVar99._16_4_ =
           auVar58._16_4_ * auVar58._16_4_ +
           auVar57._16_4_ * auVar57._16_4_ + auVar45._16_4_ * auVar45._16_4_;
      auVar99._20_4_ =
           auVar58._20_4_ * auVar58._20_4_ +
           auVar57._20_4_ * auVar57._20_4_ + auVar45._20_4_ * auVar45._20_4_;
      auVar99._24_4_ =
           auVar58._24_4_ * auVar58._24_4_ +
           auVar57._24_4_ * auVar57._24_4_ + auVar45._24_4_ * auVar45._24_4_;
      auVar99._28_4_ =
           auVar58._28_4_ * auVar58._28_4_ +
           auVar57._28_4_ * auVar57._28_4_ + auVar45._28_4_ * auVar45._28_4_;
      auVar142 = vsqrtps_avx(auVar99);
      auVar57 = vdivps_avx(auVar57,auVar142);
      auVar45 = vdivps_avx(auVar45,auVar142);
      auVar58 = vdivps_avx(auVar58,auVar142);
      auVar118 = vsubps_avx(auVar142,*(undefined1 (*) [32])(param_4 + (ulonglong)uVar79));
      fVar29 = auVar118._0_4_;
      fVar33 = auVar118._4_4_;
      fVar37 = auVar118._8_4_;
      fVar119 = auVar118._12_4_;
      fVar102 = auVar118._16_4_;
      fVar106 = auVar118._20_4_;
      fVar108 = auVar118._24_4_;
      fVar110 = auVar118._28_4_;
      auVar118._4_4_ = fVar71;
      auVar118._0_4_ = fVar71;
      auVar118._8_4_ = fVar71;
      auVar118._12_4_ = fVar71;
      auVar118._16_4_ = fVar71;
      auVar118._20_4_ = fVar71;
      auVar118._24_4_ = fVar71;
      auVar118._28_4_ = fVar71;
      auVar164 = vsubps_avx(auVar118,auVar2);
      in_ZMM8 = ZEXT3264(auVar164);
      fVar81 = auVar73._0_4_;
      fVar54 = auVar73._16_4_;
      fVar84 = auVar72._0_4_;
      auVar146._0_4_ = fVar22 * fVar84 + auVar164._0_4_ * fVar81;
      auVar146._4_4_ = fVar26 * auVar72._4_4_ + auVar164._4_4_ * auVar73._4_4_;
      auVar146._8_4_ = fVar28 * auVar72._8_4_ + auVar164._8_4_ * auVar73._8_4_;
      auVar146._12_4_ = fVar30 * auVar72._12_4_ + auVar164._12_4_ * auVar73._12_4_;
      fVar82 = auVar72._16_4_;
      auVar146._16_4_ = fVar32 * fVar82 + auVar164._16_4_ * fVar54;
      auVar146._20_4_ = fVar34 * auVar72._20_4_ + auVar164._20_4_ * auVar73._20_4_;
      auVar146._24_4_ = fVar36 * auVar72._24_4_ + auVar164._24_4_ * auVar73._24_4_;
      auVar146._28_4_ = fVar38 * auVar72._28_4_ + auVar164._28_4_ * auVar73._28_4_;
      fVar31 = auVar56._0_4_;
      auVar127._0_4_ = auVar57._0_4_ * fVar29 * fVar31;
      fVar35 = auVar56._4_4_;
      auVar127._4_4_ = auVar57._4_4_ * fVar33 * fVar35;
      fVar39 = auVar56._8_4_;
      auVar127._8_4_ = auVar57._8_4_ * fVar37 * fVar39;
      fVar120 = auVar56._12_4_;
      auVar127._12_4_ = auVar57._12_4_ * fVar119 * fVar120;
      fVar105 = auVar124._0_4_;
      auVar127._16_4_ = auVar57._16_4_ * fVar102 * fVar105;
      fVar107 = auVar124._4_4_;
      auVar127._20_4_ = auVar57._20_4_ * fVar106 * fVar107;
      fVar109 = auVar124._8_4_;
      auVar127._24_4_ = auVar57._24_4_ * fVar108 * fVar109;
      fVar111 = auVar124._12_4_;
      auVar127._28_4_ = auVar57._28_4_ * fVar110 * fVar111;
      fVar23 = auVar25._0_4_;
      auVar169._0_4_ = auVar146._0_4_ + fVar23;
      auVar169._4_4_ = auVar146._4_4_ + auVar25._4_4_;
      auVar169._8_4_ = auVar146._8_4_ + auVar25._8_4_;
      auVar169._12_4_ = auVar146._12_4_ + auVar25._12_4_;
      fVar27 = auVar25._16_4_;
      auVar169._16_4_ = auVar146._16_4_ + fVar27;
      auVar169._20_4_ = auVar146._20_4_ + auVar25._20_4_;
      auVar169._24_4_ = auVar146._24_4_ + auVar25._24_4_;
      auVar169._28_4_ = auVar146._28_4_ + auVar25._28_4_;
      auVar118 = vdivps_avx(auVar127,auVar169);
      auVar104._0_4_ = fVar31 * fVar29 * auVar45._0_4_;
      auVar104._4_4_ = fVar35 * fVar33 * auVar45._4_4_;
      auVar104._8_4_ = fVar39 * fVar37 * auVar45._8_4_;
      auVar104._12_4_ = fVar120 * fVar119 * auVar45._12_4_;
      auVar104._16_4_ = fVar105 * fVar102 * auVar45._16_4_;
      auVar104._20_4_ = fVar107 * fVar106 * auVar45._20_4_;
      auVar104._24_4_ = fVar109 * fVar108 * auVar45._24_4_;
      auVar104._28_4_ = fVar111 * fVar110 * auVar45._28_4_;
      auVar128 = vdivps_avx(auVar104,auVar169);
      auVar45._0_4_ = fVar31 * fVar29 * auVar58._0_4_;
      auVar45._4_4_ = fVar35 * fVar33 * auVar58._4_4_;
      auVar45._8_4_ = fVar39 * fVar37 * auVar58._8_4_;
      auVar45._12_4_ = fVar120 * fVar119 * auVar58._12_4_;
      auVar45._16_4_ = fVar105 * fVar102 * auVar58._16_4_;
      auVar45._20_4_ = fVar107 * fVar106 * auVar58._20_4_;
      auVar45._24_4_ = fVar109 * fVar108 * auVar58._24_4_;
      auVar45._28_4_ = fVar111 * fVar110 * auVar58._28_4_;
      auVar58 = vdivps_avx(auVar45,auVar169);
      auVar57 = vcmpps_avx(auVar146,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,0
                          );
      auVar45 = vcmpps_avx(auVar25,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,0
                          );
      auVar74._0_4_ = auVar45._0_4_ & auVar57._0_4_;
      auVar74._4_4_ = auVar45._4_4_ & auVar57._4_4_;
      auVar74._8_4_ = auVar45._8_4_ & auVar57._8_4_;
      auVar74._12_4_ = auVar45._12_4_ & auVar57._12_4_;
      auVar74._16_4_ = auVar45._16_4_ & auVar57._16_4_;
      auVar74._20_4_ = auVar45._20_4_ & auVar57._20_4_;
      auVar74._24_4_ = auVar45._24_4_ & auVar57._24_4_;
      auVar74._28_4_ = auVar45._28_4_ & auVar57._28_4_;
      auVar57._4_4_ = uVar4;
      auVar57._0_4_ = uVar4;
      auVar57._8_4_ = uVar4;
      auVar57._12_4_ = uVar4;
      auVar57._16_4_ = uVar4;
      auVar57._20_4_ = uVar4;
      auVar57._24_4_ = uVar4;
      auVar57._28_4_ = uVar4;
      auVar57 = vcmpps_avx(auVar142,auVar57,2);
      auVar57 = auVar57 | auVar74;
      uVar21 = auVar57._0_4_;
      fVar123 = (float)(~uVar21 & auVar118._0_4_);
      uVar80 = auVar57._4_4_;
      fVar130 = (float)(~uVar80 & auVar118._4_4_);
      uVar83 = auVar57._8_4_;
      fVar132 = (float)(~uVar83 & auVar118._8_4_);
      uVar85 = auVar57._12_4_;
      fVar133 = (float)(~uVar85 & auVar118._12_4_);
      uVar88 = auVar57._16_4_;
      fVar135 = (float)(~uVar88 & auVar118._16_4_);
      uVar91 = auVar57._20_4_;
      fVar136 = (float)(~uVar91 & auVar118._20_4_);
      uVar10 = auVar57._24_4_;
      fVar138 = (float)(~uVar10 & auVar118._24_4_);
      uVar96 = auVar57._28_4_;
      fVar139 = (float)(~uVar96 & auVar118._28_4_);
      fVar144 = (float)(~uVar21 & auVar128._0_4_);
      fVar151 = (float)(~uVar80 & auVar128._4_4_);
      fVar153 = (float)(~uVar83 & auVar128._8_4_);
      fVar154 = (float)(~uVar85 & auVar128._12_4_);
      fVar156 = (float)(~uVar88 & auVar128._16_4_);
      fVar157 = (float)(~uVar91 & auVar128._20_4_);
      fVar159 = (float)(~uVar10 & auVar128._24_4_);
      fVar160 = (float)(~uVar96 & auVar128._28_4_);
      fVar102 = (float)(~uVar21 & auVar58._0_4_);
      fVar105 = (float)(~uVar80 & auVar58._4_4_);
      fVar106 = (float)(~uVar83 & auVar58._8_4_);
      fVar107 = (float)(~uVar85 & auVar58._12_4_);
      fVar108 = (float)(~uVar88 & auVar58._16_4_);
      fVar109 = (float)(~uVar91 & auVar58._20_4_);
      fVar110 = (float)(~uVar10 & auVar58._24_4_);
      fVar111 = (float)(~uVar96 & auVar58._28_4_);
      auVar57 = vcmpps_avx(ZEXT832(0) << 0x20,auVar25,1);
      uVar21 = vmovmskps_avx(auVar57);
      auVar2 = vmaxps_avx(auVar2,auVar164);
      auVar58._0_4_ = auVar2._0_4_ + fVar71;
      auVar58._4_4_ = auVar2._4_4_ + fVar71;
      auVar58._8_4_ = auVar2._8_4_ + fVar71;
      auVar58._12_4_ = auVar2._12_4_ + fVar71;
      auVar58._16_4_ = auVar2._16_4_ + fVar71;
      auVar58._20_4_ = auVar2._20_4_ + fVar71;
      auVar58._24_4_ = auVar2._24_4_ + fVar71;
      auVar58._28_4_ = auVar2._28_4_ + fVar71;
      auVar2._4_4_ = uVar5;
      auVar2._0_4_ = uVar5;
      auVar2._8_4_ = uVar5;
      auVar2._12_4_ = uVar5;
      auVar2._16_4_ = uVar5;
      auVar2._20_4_ = uVar5;
      auVar2._24_4_ = uVar5;
      auVar2._28_4_ = uVar5;
      auVar2 = vdivps_avx(auVar2,auVar58);
      fVar29 = auVar2._0_4_;
      fVar31 = auVar2._4_4_;
      fVar33 = auVar2._8_4_;
      fVar35 = auVar2._12_4_;
      fVar37 = auVar2._16_4_;
      fVar39 = auVar2._20_4_;
      fVar119 = auVar2._24_4_;
      fVar120 = auVar2._28_4_;
      if (uVar21 == 0) {
LAB_140013130:
        auVar2 = vcmpps_avx(auVar72,ZEXT832(0) << 0x20,0xc);
        uVar21 = vmovmskps_avx(auVar2);
      }
      else {
        fVar55 = fVar23 * fVar29;
        fVar63 = auVar25._4_4_ * fVar31;
        fVar64 = auVar25._8_4_ * fVar33;
        fVar65 = auVar25._12_4_ * fVar35;
        fVar66 = fVar27 * fVar37;
        fVar68 = auVar25._20_4_ * fVar39;
        fVar69 = auVar25._24_4_ * fVar119;
        fVar70 = auVar25._28_4_ * fVar120;
        auVar67._0_4_ = -(fVar55 * fVar123) + auVar162._0_4_;
        auVar67._4_4_ = -(fVar63 * fVar130) + auVar162._4_4_;
        auVar67._8_4_ = -(fVar64 * fVar132) + auVar162._8_4_;
        auVar67._12_4_ = -(fVar65 * fVar133) + auVar162._12_4_;
        auVar163._16_4_ = -(fVar66 * fVar135) + auVar162._16_4_;
        auVar163._0_16_ = auVar67;
        auVar163._20_4_ = -(fVar68 * fVar136) + auVar162._20_4_;
        auVar163._24_4_ = -(fVar69 * fVar138) + auVar162._24_4_;
        auVar163._28_4_ = -(fVar70 * fVar139) + auVar162._28_4_;
        cVar9 = (char)uVar21;
        in_ZMM8 = ZEXT3264(auVar167);
        iVar112 = auVar167._0_4_;
        auVar40 = auVar163._16_16_;
        auVar124 = auVar25._0_16_;
        auVar56 = auVar25._16_16_;
        iVar16 = auVar167._4_4_;
        iVar17 = auVar167._8_4_;
        iVar18 = auVar167._12_4_;
        local_400 = auVar115._0_4_;
        fStack_3fc = auVar115._4_4_;
        fStack_3f8 = auVar115._8_4_;
        fStack_3f4 = auVar115._12_4_;
        fStack_3f0 = auVar115._16_4_;
        fStack_3ec = auVar115._20_4_;
        fStack_3e8 = auVar115._24_4_;
        fStack_3e4 = auVar115._28_4_;
        iVar166 = auVar167._16_4_;
        iVar19 = auVar167._20_4_;
        iVar20 = auVar167._24_4_;
        iVar14 = auVar167._28_4_;
        if ((uVar21 & 1) == 0) {
          if ((uVar21 & 2) == 0) goto LAB_140012fdb;
LAB_1400132f8:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_140013312;
LAB_140012fe5:
          if ((uVar21 & 8) == 0) goto LAB_140012fef;
LAB_14001332c:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar21 & 0x10) != 0) goto LAB_140013352;
LAB_140013005:
          if ((uVar21 & 0x20) == 0) goto LAB_14001300f;
LAB_14001336a:
          uVar3 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_140013384;
LAB_140013019:
          if (-1 < cVar9) goto LAB_140013022;
LAB_14001339d:
          uVar3 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + iVar14) = uVar3;
          auVar115._0_4_ = -(fVar55 * fVar144) + auVar121._0_4_;
          auVar115._4_4_ = -(fVar63 * fVar151) + auVar121._4_4_;
          auVar115._8_4_ = -(fVar64 * fVar153) + auVar121._8_4_;
          auVar115._12_4_ = -(fVar65 * fVar154) + auVar121._12_4_;
          auVar115._16_4_ = -(fVar66 * fVar156) + auVar121._16_4_;
          auVar115._20_4_ = -(fVar68 * fVar157) + auVar121._20_4_;
          auVar115._24_4_ = -(fVar69 * fVar159) + auVar121._24_4_;
          auVar115._28_4_ = -(fVar70 * fVar160) + auVar121._28_4_;
          if ((uVar21 & 1) != 0) goto LAB_1400133bc;
LAB_140013031:
          if ((uVar21 & 2) == 0) goto LAB_14001303b;
LAB_1400133d5:
          uVar3 = vextractps_avx(auVar115._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_1400133f0;
LAB_140013045:
          if ((uVar21 & 8) == 0) goto LAB_14001304f;
LAB_14001340b:
          uVar3 = vextractps_avx(auVar115._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          auVar67 = auVar115._16_16_;
          if ((uVar21 & 0x10) != 0) goto LAB_14001342c;
LAB_14001305f:
          if ((uVar21 & 0x20) == 0) goto LAB_140013069;
LAB_140013445:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_140013460;
LAB_140013073:
          if (-1 < cVar9) goto LAB_14001307c;
LAB_14001347a:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar3;
          auVar121._0_4_ = -(fVar102 * fVar55) + local_400;
          auVar121._4_4_ = -(fVar105 * fVar63) + fStack_3fc;
          auVar121._8_4_ = -(fVar106 * fVar64) + fStack_3f8;
          auVar121._12_4_ = -(fVar107 * fVar65) + fStack_3f4;
          auVar121._16_4_ = -(fVar108 * fVar66) + fStack_3f0;
          auVar121._20_4_ = -(fVar109 * fVar68) + fStack_3ec;
          auVar121._24_4_ = -(fVar110 * fVar69) + fStack_3e8;
          auVar121._28_4_ = -(fVar111 * fVar70) + fStack_3e4;
          if ((uVar21 & 1) != 0) goto LAB_14001349f;
LAB_140013090:
          if ((uVar21 & 2) == 0) goto LAB_14001309a;
LAB_1400134b8:
          uVar3 = vextractps_avx(auVar121._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_1400134d3;
LAB_1400130a4:
          if ((uVar21 & 8) == 0) goto LAB_1400130ae;
LAB_1400134ee:
          uVar3 = vextractps_avx(auVar121._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          auVar67 = auVar121._16_16_;
        }
        else {
          *(float *)(param_1 + iVar112) = auVar67._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_1400132f8;
LAB_140012fdb:
          if ((uVar21 & 4) == 0) goto LAB_140012fe5;
LAB_140013312:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14001332c;
LAB_140012fef:
          if ((uVar21 & 0x10) == 0) goto LAB_140013005;
LAB_140013352:
          *(float *)(param_1 + iVar166) = auVar163._16_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_14001336a;
LAB_14001300f:
          if ((uVar21 & 0x40) == 0) goto LAB_140013019;
LAB_140013384:
          uVar3 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_14001339d;
LAB_140013022:
          auVar115._0_4_ = -(fVar55 * fVar144) + auVar121._0_4_;
          auVar115._4_4_ = -(fVar63 * fVar151) + auVar121._4_4_;
          auVar115._8_4_ = -(fVar64 * fVar153) + auVar121._8_4_;
          auVar115._12_4_ = -(fVar65 * fVar154) + auVar121._12_4_;
          auVar115._16_4_ = -(fVar66 * fVar156) + auVar121._16_4_;
          auVar115._20_4_ = -(fVar68 * fVar157) + auVar121._20_4_;
          auVar115._24_4_ = -(fVar69 * fVar159) + auVar121._24_4_;
          auVar115._28_4_ = -(fVar70 * fVar160) + auVar121._28_4_;
          if ((uVar21 & 1) == 0) goto LAB_140013031;
LAB_1400133bc:
          *(int *)(param_1 + 4 + (longlong)iVar112) = auVar115._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_1400133d5;
LAB_14001303b:
          if ((uVar21 & 4) == 0) goto LAB_140013045;
LAB_1400133f0:
          uVar3 = vextractps_avx(auVar115._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_14001340b;
LAB_14001304f:
          auVar67 = auVar115._16_16_;
          if ((uVar21 & 0x10) == 0) goto LAB_14001305f;
LAB_14001342c:
          *(int *)(param_1 + 4 + (longlong)iVar166) = auVar67._0_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_140013445;
LAB_140013069:
          if ((uVar21 & 0x40) == 0) goto LAB_140013073;
LAB_140013460:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_14001347a;
LAB_14001307c:
          auVar121._0_4_ = -(fVar102 * fVar55) + local_400;
          auVar121._4_4_ = -(fVar105 * fVar63) + fStack_3fc;
          auVar121._8_4_ = -(fVar106 * fVar64) + fStack_3f8;
          auVar121._12_4_ = -(fVar107 * fVar65) + fStack_3f4;
          auVar121._16_4_ = -(fVar108 * fVar66) + fStack_3f0;
          auVar121._20_4_ = -(fVar109 * fVar68) + fStack_3ec;
          auVar121._24_4_ = -(fVar110 * fVar69) + fStack_3e8;
          auVar121._28_4_ = -(fVar111 * fVar70) + fStack_3e4;
          if ((uVar21 & 1) == 0) goto LAB_140013090;
LAB_14001349f:
          *(int *)(param_1 + 8 + (longlong)iVar112) = auVar121._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_1400134b8;
LAB_14001309a:
          if ((uVar21 & 4) == 0) goto LAB_1400130a4;
LAB_1400134d3:
          uVar3 = vextractps_avx(auVar121._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_1400134ee;
LAB_1400130ae:
          auVar67 = auVar121._16_16_;
        }
        if ((uVar21 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar166) = auVar67._0_4_;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if (cVar9 < '\0') {
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar3;
        }
        if ((uVar21 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar112) = fVar23;
        }
        if ((uVar21 & 2) != 0) {
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
        }
        if ((uVar21 & 4) != 0) {
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar21 & 8) != 0) {
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar21 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar27;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar56,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar56,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        if (-1 < cVar9) goto LAB_140013130;
        uVar3 = vextractps_avx(auVar56,3);
        *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar3;
        auVar2 = vcmpps_avx(auVar72,ZEXT832(0) << 0x20,0xc);
        uVar21 = vmovmskps_avx(auVar2);
      }
      if (uVar21 != 0) {
        fVar22 = fVar22 * fVar84 * fVar29;
        fVar26 = fVar26 * auVar72._4_4_ * fVar31;
        fVar28 = fVar28 * auVar72._8_4_ * fVar33;
        fVar30 = fVar30 * auVar72._12_4_ * fVar35;
        fVar32 = fVar32 * fVar82 * fVar37;
        fVar34 = fVar34 * auVar72._20_4_ * fVar39;
        fVar36 = fVar36 * auVar72._24_4_ * fVar119;
        fVar38 = fVar38 * auVar72._28_4_ * fVar120;
        local_3e0 = auVar103._0_4_;
        fStack_3dc = auVar103._4_4_;
        fStack_3d8 = auVar103._8_4_;
        fStack_3d4 = auVar103._12_4_;
        fStack_3d0 = auVar103._16_4_;
        fStack_3cc = auVar103._20_4_;
        fStack_3c8 = auVar103._24_4_;
        fStack_3c4 = auVar103._28_4_;
        auVar40._0_4_ = fVar22 * fVar123 + local_3e0;
        auVar40._4_4_ = fVar26 * fVar130 + fStack_3dc;
        auVar40._8_4_ = fVar28 * fVar132 + fStack_3d8;
        auVar40._12_4_ = fVar30 * fVar133 + fStack_3d4;
        auVar103._16_4_ = fVar32 * fVar135 + fStack_3d0;
        auVar103._0_16_ = auVar40;
        auVar103._20_4_ = fVar34 * fVar136 + fStack_3cc;
        auVar103._24_4_ = fVar36 * fVar138 + fStack_3c8;
        auVar103._28_4_ = fVar38 * fVar139 + fStack_3c4;
        cVar9 = (char)uVar21;
        auVar56 = auVar72._0_16_;
        auVar67 = auVar72._16_16_;
        iVar112 = auVar141._0_4_;
        auVar124 = auVar103._16_16_;
        iVar16 = auVar141._4_4_;
        iVar17 = auVar141._8_4_;
        iVar18 = auVar141._12_4_;
        local_440 = auVar43._0_4_;
        fStack_43c = auVar43._4_4_;
        fStack_438 = auVar43._8_4_;
        fStack_434 = auVar43._12_4_;
        fStack_430 = auVar43._16_4_;
        fStack_42c = auVar43._20_4_;
        fStack_428 = auVar43._24_4_;
        fStack_424 = auVar43._28_4_;
        local_3c0 = auVar44._0_4_;
        fStack_3bc = auVar44._4_4_;
        fStack_3b8 = auVar44._8_4_;
        fStack_3b4 = auVar44._12_4_;
        fStack_3b0 = auVar44._16_4_;
        fStack_3ac = auVar44._20_4_;
        fStack_3a8 = auVar44._24_4_;
        fStack_3a4 = auVar44._28_4_;
        iVar166 = auVar141._16_4_;
        iVar19 = auVar141._20_4_;
        iVar20 = auVar141._24_4_;
        iVar14 = auVar141._28_4_;
        if ((uVar21 & 1) == 0) {
          if ((uVar21 & 2) == 0) goto LAB_140013179;
LAB_140013678:
          uVar3 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_140013692;
LAB_140013183:
          if ((uVar21 & 8) == 0) goto LAB_14001318d;
LAB_1400136ac:
          uVar3 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar21 & 0x10) != 0) goto LAB_1400136d2;
LAB_1400131a3:
          if ((uVar21 & 0x20) == 0) goto LAB_1400131ad;
LAB_1400136ea:
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_140013704;
LAB_1400131b7:
          if (-1 < cVar9) goto LAB_1400131c0;
LAB_14001371d:
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + iVar14) = uVar3;
          auVar43._0_4_ = fVar22 * fVar144 + local_440;
          auVar43._4_4_ = fVar26 * fVar151 + fStack_43c;
          auVar43._8_4_ = fVar28 * fVar153 + fStack_438;
          auVar43._12_4_ = fVar30 * fVar154 + fStack_434;
          auVar43._16_4_ = fVar32 * fVar156 + fStack_430;
          auVar43._20_4_ = fVar34 * fVar157 + fStack_42c;
          auVar43._24_4_ = fVar36 * fVar159 + fStack_428;
          auVar43._28_4_ = fVar38 * fVar160 + fStack_424;
          if ((uVar21 & 1) != 0) goto LAB_140013742;
LAB_1400131d5:
          if ((uVar21 & 2) == 0) goto LAB_1400131df;
LAB_14001375b:
          uVar3 = vextractps_avx(auVar43._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_140013776;
LAB_1400131e9:
          if ((uVar21 & 8) == 0) goto LAB_1400131f3;
LAB_140013791:
          uVar3 = vextractps_avx(auVar43._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          auVar124 = auVar43._16_16_;
          if ((uVar21 & 0x10) != 0) goto LAB_1400137b2;
LAB_140013203:
          if ((uVar21 & 0x20) == 0) goto LAB_14001320d;
LAB_1400137cb:
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_1400137e6;
LAB_140013217:
          if (-1 < cVar9) goto LAB_140013220;
LAB_140013800:
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar3;
          auVar44._0_4_ = fVar102 * fVar22 + local_3c0;
          auVar44._4_4_ = fVar105 * fVar26 + fStack_3bc;
          auVar44._8_4_ = fVar106 * fVar28 + fStack_3b8;
          auVar44._12_4_ = fVar107 * fVar30 + fStack_3b4;
          auVar44._16_4_ = fVar108 * fVar32 + fStack_3b0;
          auVar44._20_4_ = fVar109 * fVar34 + fStack_3ac;
          auVar44._24_4_ = fVar110 * fVar36 + fStack_3a8;
          auVar44._28_4_ = fVar111 * fVar38 + fStack_3a4;
          if ((uVar21 & 1) != 0) goto LAB_140013825;
LAB_140013234:
          if ((uVar21 & 2) == 0) goto LAB_14001323e;
LAB_14001383e:
          uVar3 = vextractps_avx(auVar44._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_140013859;
LAB_140013248:
          if ((uVar21 & 8) == 0) goto LAB_140013252;
LAB_140013874:
          uVar3 = vextractps_avx(auVar44._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          auVar124 = auVar44._16_16_;
        }
        else {
          *(float *)(param_1 + iVar112) = auVar40._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_140013678;
LAB_140013179:
          if ((uVar21 & 4) == 0) goto LAB_140013183;
LAB_140013692:
          uVar3 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_1400136ac;
LAB_14001318d:
          if ((uVar21 & 0x10) == 0) goto LAB_1400131a3;
LAB_1400136d2:
          *(float *)(param_1 + iVar166) = auVar103._16_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_1400136ea;
LAB_1400131ad:
          if ((uVar21 & 0x40) == 0) goto LAB_1400131b7;
LAB_140013704:
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_14001371d;
LAB_1400131c0:
          auVar43._0_4_ = fVar22 * fVar144 + local_440;
          auVar43._4_4_ = fVar26 * fVar151 + fStack_43c;
          auVar43._8_4_ = fVar28 * fVar153 + fStack_438;
          auVar43._12_4_ = fVar30 * fVar154 + fStack_434;
          auVar43._16_4_ = fVar32 * fVar156 + fStack_430;
          auVar43._20_4_ = fVar34 * fVar157 + fStack_42c;
          auVar43._24_4_ = fVar36 * fVar159 + fStack_428;
          auVar43._28_4_ = fVar38 * fVar160 + fStack_424;
          if ((uVar21 & 1) == 0) goto LAB_1400131d5;
LAB_140013742:
          *(int *)(param_1 + 4 + (longlong)iVar112) = auVar43._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14001375b;
LAB_1400131df:
          if ((uVar21 & 4) == 0) goto LAB_1400131e9;
LAB_140013776:
          uVar3 = vextractps_avx(auVar43._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_140013791;
LAB_1400131f3:
          auVar124 = auVar43._16_16_;
          if ((uVar21 & 0x10) == 0) goto LAB_140013203;
LAB_1400137b2:
          *(int *)(param_1 + 4 + (longlong)iVar166) = auVar124._0_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_1400137cb;
LAB_14001320d:
          if ((uVar21 & 0x40) == 0) goto LAB_140013217;
LAB_1400137e6:
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_140013800;
LAB_140013220:
          auVar44._0_4_ = fVar102 * fVar22 + local_3c0;
          auVar44._4_4_ = fVar105 * fVar26 + fStack_3bc;
          auVar44._8_4_ = fVar106 * fVar28 + fStack_3b8;
          auVar44._12_4_ = fVar107 * fVar30 + fStack_3b4;
          auVar44._16_4_ = fVar108 * fVar32 + fStack_3b0;
          auVar44._20_4_ = fVar109 * fVar34 + fStack_3ac;
          auVar44._24_4_ = fVar110 * fVar36 + fStack_3a8;
          auVar44._28_4_ = fVar111 * fVar38 + fStack_3a4;
          if ((uVar21 & 1) == 0) goto LAB_140013234;
LAB_140013825:
          *(int *)(param_1 + 8 + (longlong)iVar112) = auVar44._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14001383e;
LAB_14001323e:
          if ((uVar21 & 4) == 0) goto LAB_140013248;
LAB_140013859:
          uVar3 = vextractps_avx(auVar44._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_140013874;
LAB_140013252:
          auVar124 = auVar44._16_16_;
        }
        if ((uVar21 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar166) = auVar124._0_4_;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if (cVar9 < '\0') {
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar3;
        }
        if ((uVar21 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar112) = fVar84;
        }
        if ((uVar21 & 2) != 0) {
          uVar3 = vextractps_avx(auVar56,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
        }
        if ((uVar21 & 4) != 0) {
          uVar3 = vextractps_avx(auVar56,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar21 & 8) != 0) {
          uVar3 = vextractps_avx(auVar56,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar21 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar82;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        in_ZMM9 = ZEXT1664(auVar141._16_16_);
        if (cVar9 < '\0') {
          in_ZMM9 = ZEXT1664(auVar141._16_16_);
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar3;
        }
      }
      auVar2 = vcmpps_avx(auVar73,ZEXT832(0) << 0x20,0xc);
      uVar21 = vmovmskps_avx(auVar2);
      if (uVar21 != 0) {
        fVar23 = fVar81 * fVar29 * auVar164._0_4_;
        fVar27 = auVar73._4_4_ * fVar31 * auVar164._4_4_;
        fVar29 = auVar73._8_4_ * fVar33 * auVar164._8_4_;
        fVar31 = auVar73._12_4_ * fVar35 * auVar164._12_4_;
        fVar33 = fVar54 * fVar37 * auVar164._16_4_;
        fVar35 = auVar73._20_4_ * fVar39 * auVar164._20_4_;
        fVar37 = auVar73._24_4_ * fVar119 * auVar164._24_4_;
        fVar39 = auVar73._28_4_ * fVar120 * auVar164._28_4_;
        auVar125._0_4_ = fVar23 * fVar123 + auVar97._0_4_;
        auVar125._4_4_ = fVar27 * fVar130 + auVar97._4_4_;
        auVar125._8_4_ = fVar29 * fVar132 + auVar97._8_4_;
        auVar125._12_4_ = fVar31 * fVar133 + auVar97._12_4_;
        auVar72._16_4_ = fVar33 * fVar135 + auVar97._16_4_;
        auVar72._0_16_ = auVar125;
        auVar72._20_4_ = fVar35 * fVar136 + auVar97._20_4_;
        auVar72._24_4_ = fVar37 * fVar138 + auVar97._24_4_;
        auVar72._28_4_ = fVar39 * fVar139 + auVar97._28_4_;
        cVar9 = (char)uVar21;
        iVar112 = auVar93._0_4_;
        auVar67 = auVar72._16_16_;
        auVar124 = auVar73._0_16_;
        auVar56 = auVar73._16_16_;
        iVar16 = auVar93._4_4_;
        iVar17 = auVar93._8_4_;
        iVar18 = auVar93._12_4_;
        iVar166 = auVar93._16_4_;
        iVar19 = auVar93._20_4_;
        iVar20 = auVar93._24_4_;
        iVar14 = auVar93._28_4_;
        if ((uVar21 & 1) == 0) {
          if ((uVar21 & 2) == 0) goto LAB_140013a1d;
LAB_140013b98:
          uVar3 = vextractps_avx(auVar125,1);
          *(undefined4 *)(param_1 + iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_140013bb2;
LAB_140013a27:
          if ((uVar21 & 8) == 0) goto LAB_140013a31;
LAB_140013bcc:
          uVar3 = vextractps_avx(auVar125,3);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar21 & 0x10) != 0) goto LAB_140013bf2;
LAB_140013a47:
          if ((uVar21 & 0x20) == 0) goto LAB_140013a51;
LAB_140013c0a:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_140013c24;
LAB_140013a5b:
          if (-1 < cVar9) goto LAB_140013a64;
LAB_140013c3d:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + iVar14) = uVar3;
          auVar93._0_4_ = fVar23 * fVar144 + fVar131;
          auVar93._4_4_ = fVar27 * fVar151 + fVar134;
          auVar93._8_4_ = fVar29 * fVar153 + fVar137;
          auVar93._12_4_ = fVar31 * fVar154 + fVar140;
          auVar93._16_4_ = fVar33 * fVar156 + fVar152;
          auVar93._20_4_ = fVar35 * fVar157 + fVar155;
          auVar93._24_4_ = fVar37 * fVar159 + fVar158;
          auVar93._28_4_ = fVar39 * fVar160 + fVar161;
          if ((uVar21 & 1) != 0) goto LAB_140013c61;
LAB_140013a78:
          if ((uVar21 & 2) == 0) goto LAB_140013a82;
LAB_140013c7a:
          uVar3 = vextractps_avx(auVar93._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_140013c95;
LAB_140013a8c:
          if ((uVar21 & 8) == 0) goto LAB_140013a96;
LAB_140013cb0:
          uVar3 = vextractps_avx(auVar93._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          auVar67 = auVar93._16_16_;
          if ((uVar21 & 0x10) != 0) goto LAB_140013cd1;
LAB_140013aa6:
          if ((uVar21 & 0x20) == 0) goto LAB_140013ab0;
LAB_140013cea:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          if ((uVar21 & 0x40) != 0) goto LAB_140013d05;
LAB_140013aba:
          if (-1 < cVar9) goto LAB_140013ac3;
LAB_140013d1f:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar3;
          auVar97._0_4_ = fVar23 * fVar102 + fVar86;
          auVar97._4_4_ = fVar27 * fVar105 + fVar87;
          auVar97._8_4_ = fVar29 * fVar106 + fVar89;
          auVar97._12_4_ = fVar31 * fVar107 + fVar90;
          auVar97._16_4_ = fVar33 * fVar108 + fVar92;
          auVar97._20_4_ = fVar35 * fVar109 + fVar100;
          auVar97._24_4_ = fVar37 * fVar110 + fVar101;
          auVar97._28_4_ = fVar39 * fVar111 + fVar113;
          if ((uVar21 & 1) != 0) goto LAB_140013d44;
LAB_140013ad7:
          if ((uVar21 & 2) == 0) goto LAB_140013ae1;
LAB_140013d5d:
          uVar3 = vextractps_avx(auVar97._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar3;
          if ((uVar21 & 4) != 0) goto LAB_140013d78;
LAB_140013aeb:
          if ((uVar21 & 8) == 0) goto LAB_140013af5;
LAB_140013d93:
          uVar3 = vextractps_avx(auVar97._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          auVar67 = auVar97._16_16_;
        }
        else {
          *(float *)(param_1 + iVar112) = auVar125._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_140013b98;
LAB_140013a1d:
          if ((uVar21 & 4) == 0) goto LAB_140013a27;
LAB_140013bb2:
          uVar3 = vextractps_avx(auVar125,2);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_140013bcc;
LAB_140013a31:
          if ((uVar21 & 0x10) == 0) goto LAB_140013a47;
LAB_140013bf2:
          *(float *)(param_1 + iVar166) = auVar72._16_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_140013c0a;
LAB_140013a51:
          if ((uVar21 & 0x40) == 0) goto LAB_140013a5b;
LAB_140013c24:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_140013c3d;
LAB_140013a64:
          auVar93._0_4_ = fVar23 * fVar144 + fVar131;
          auVar93._4_4_ = fVar27 * fVar151 + fVar134;
          auVar93._8_4_ = fVar29 * fVar153 + fVar137;
          auVar93._12_4_ = fVar31 * fVar154 + fVar140;
          auVar93._16_4_ = fVar33 * fVar156 + fVar152;
          auVar93._20_4_ = fVar35 * fVar157 + fVar155;
          auVar93._24_4_ = fVar37 * fVar159 + fVar158;
          auVar93._28_4_ = fVar39 * fVar160 + fVar161;
          if ((uVar21 & 1) == 0) goto LAB_140013a78;
LAB_140013c61:
          *(int *)(param_1 + 4 + (longlong)iVar112) = auVar93._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_140013c7a;
LAB_140013a82:
          if ((uVar21 & 4) == 0) goto LAB_140013a8c;
LAB_140013c95:
          uVar3 = vextractps_avx(auVar93._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_140013cb0;
LAB_140013a96:
          auVar67 = auVar93._16_16_;
          if ((uVar21 & 0x10) == 0) goto LAB_140013aa6;
LAB_140013cd1:
          *(int *)(param_1 + 4 + (longlong)iVar166) = auVar67._0_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_140013cea;
LAB_140013ab0:
          if ((uVar21 & 0x40) == 0) goto LAB_140013aba;
LAB_140013d05:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if (cVar9 < '\0') goto LAB_140013d1f;
LAB_140013ac3:
          auVar97._0_4_ = fVar23 * fVar102 + fVar86;
          auVar97._4_4_ = fVar27 * fVar105 + fVar87;
          auVar97._8_4_ = fVar29 * fVar106 + fVar89;
          auVar97._12_4_ = fVar31 * fVar107 + fVar90;
          auVar97._16_4_ = fVar33 * fVar108 + fVar92;
          auVar97._20_4_ = fVar35 * fVar109 + fVar100;
          auVar97._24_4_ = fVar37 * fVar110 + fVar101;
          auVar97._28_4_ = fVar39 * fVar111 + fVar113;
          if ((uVar21 & 1) == 0) goto LAB_140013ad7;
LAB_140013d44:
          *(int *)(param_1 + 8 + (longlong)iVar112) = auVar97._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_140013d5d;
LAB_140013ae1:
          if ((uVar21 & 4) == 0) goto LAB_140013aeb;
LAB_140013d78:
          uVar3 = vextractps_avx(auVar97._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar21 & 8) != 0) goto LAB_140013d93;
LAB_140013af5:
          auVar67 = auVar97._16_16_;
        }
        if ((uVar21 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar166) = auVar67._0_4_;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if (cVar9 < '\0') {
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar3;
        }
        if ((uVar21 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar112) = fVar81;
        }
        if ((uVar21 & 2) != 0) {
          uVar3 = vextractps_avx(auVar124,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
        }
        if ((uVar21 & 4) != 0) {
          uVar3 = vextractps_avx(auVar124,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar21 & 8) != 0) {
          uVar3 = vextractps_avx(auVar124,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar21 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar54;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar56,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar56,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        if (cVar9 < '\0') {
          uVar3 = vextractps_avx(auVar56,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar3;
        }
      }
      uVar15 = uVar15 + 8;
      uVar79 = uVar79 + 0x20;
      pauVar12 = pauVar12 + 3;
    } while ((int)uVar15 < (int)(uVar11 & 0xfffffff8));
  }
  iVar14 = (int)uVar15;
  if ((int)param_7 <= iVar14) {
    return param_6;
  }
  auVar141._4_4_ = iVar14;
  auVar141._0_4_ = iVar14;
  auVar141._8_4_ = iVar14;
  auVar141._12_4_ = iVar14;
  auVar141._16_4_ = iVar14;
  auVar141._20_4_ = iVar14;
  auVar141._24_4_ = iVar14;
  auVar141._28_4_ = iVar14;
  auVar2 = vpor_avx2(auVar141,
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar162._4_4_ = param_7;
  auVar162._0_4_ = param_7;
  auVar162._8_4_ = param_7;
  auVar162._12_4_ = param_7;
  auVar162._16_4_ = param_7;
  auVar162._20_4_ = param_7;
  auVar162._24_4_ = param_7;
  auVar162._28_4_ = param_7;
  auVar2 = vpcmpgtd_avx2(auVar162,auVar2);
  uVar15 = uVar15 & 0xffffffff;
  pauVar12 = (undefined1 (*) [32])(param_2 + uVar15 * 0xc);
  uVar11 = vmovmskps_avx(auVar2);
  if (uVar11 == 0xff) {
    auVar57 = pauVar12[1];
    auVar45 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                          auVar57);
    auVar58 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                          *pauVar12);
    auVar45 = vpblendd_avx2(auVar58,auVar45,0x88);
    auVar58 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                          auVar57);
    auVar118 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar12[2]);
    auVar58 = vpblendd_avx2(auVar118,auVar58,0x13);
    auVar94._16_16_ = ZEXT116(0) * auVar45._16_16_ | ZEXT116(1) * auVar58._0_16_;
    auVar94._0_16_ = ZEXT116(0) * auVar58._0_16_ | ZEXT116(1) * auVar45._0_16_;
    auVar45 = vperm2i128_avx2(auVar45,auVar58,0x31);
    auVar57 = vpblendd_avx2(auVar57,*pauVar12,0x24);
    auVar57 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                          auVar57);
    auVar167._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar167._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar58 = vpermd_avx2(auVar167,pauVar12[2]);
    auVar57 = vpblendd_avx2(auVar57,auVar58,0xe0);
  }
  else {
    auVar94 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar2);
    auVar45 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
    auVar57 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar2);
  }
  auVar58 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_3 + (iVar14 << 2)));
  auVar24 = auVar58._0_16_;
  auVar118 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_4 + (iVar14 << 2)));
  if ((~(byte)uVar11 & 0x81) == 0) {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulonglong *)(param_5 + uVar15);
  }
  else {
    puVar13 = (undefined1 *)(param_5 + uVar15);
    if ((uVar11 & 1) != 0) {
      uVar1 = *puVar13;
      auVar24[1] = uVar1;
      auVar24[0] = uVar1;
      auVar24[2] = uVar1;
      auVar24[3] = uVar1;
      auVar24[4] = uVar1;
      auVar24[5] = uVar1;
      auVar24[6] = uVar1;
      auVar24[7] = uVar1;
      auVar24[8] = uVar1;
      auVar24[9] = uVar1;
      auVar24[10] = uVar1;
      auVar24[0xb] = uVar1;
      auVar24[0xc] = uVar1;
      auVar24[0xd] = uVar1;
      auVar24[0xe] = uVar1;
      auVar24[0xf] = uVar1;
    }
    if ((uVar11 & 2) != 0) {
      auVar124 = vpinsrb_avx(auVar24,(uint)(byte)puVar13[1],1);
      auVar24 = vpblendw_avx(auVar124,auVar24,0xe);
    }
    if ((uVar11 & 4) != 0) {
      auVar124 = vpmovzxwd_avx(auVar24);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[2],2);
      auVar124 = vpinsrb_avx(auVar124,(uint)auVar24[3],3);
      auVar24 = vpblendd_avx2(auVar124,auVar24,2);
    }
    if ((uVar11 & 8) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048080030280020100);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[3],3);
      auVar24 = vpblendd_avx2(auVar124,auVar24,2);
    }
    if ((uVar11 & 0x10) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048080030203020100);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[4],4);
      auVar124 = vpinsrb_avx(auVar124,(uint)auVar24[5],5);
      auVar24 = vpblendw_avx(auVar124,auVar24,8);
    }
    if ((uVar11 & 0x20) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048080030403020100);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[5],5);
      auVar24 = vpblendw_avx(auVar124,auVar24,8);
    }
    if ((uVar11 & 0x40) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048080050403020100);
      auVar124 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[6],6);
      auVar24 = vpinsrb_avx(auVar124,(uint)auVar24[7],7);
    }
    if ((uVar11 & 0x80) != 0) {
      auVar124 = vpshufb_avx(auVar24,___xmm_80800706808005048006050403020100);
      auVar24 = vpinsrb_avx(auVar124,(uint)(byte)puVar13[7],7);
    }
  }
  auVar145 = vpslld_avx2(auVar45,4);
  auVar46._4_4_ = __real_00000004;
  auVar46._0_4_ = __real_00000004;
  auVar46._8_4_ = __real_00000004;
  auVar46._12_4_ = __real_00000004;
  auVar46._16_4_ = __real_00000004;
  auVar46._20_4_ = __real_00000004;
  auVar46._24_4_ = __real_00000004;
  auVar46._28_4_ = __real_00000004;
  vpor_avx2(auVar145,auVar46);
  auVar45 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar98._4_4_ = __real_00000008;
  auVar98._0_4_ = __real_00000008;
  auVar98._8_4_ = __real_00000008;
  auVar98._12_4_ = __real_00000008;
  auVar98._16_4_ = __real_00000008;
  auVar98._20_4_ = __real_00000008;
  auVar98._24_4_ = __real_00000008;
  auVar98._28_4_ = __real_00000008;
  vpor_avx2(auVar145,auVar98);
  auVar128 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar116._4_4_ = __real_0000000c;
  auVar116._0_4_ = __real_0000000c;
  auVar116._8_4_ = __real_0000000c;
  auVar116._12_4_ = __real_0000000c;
  auVar116._16_4_ = __real_0000000c;
  auVar116._20_4_ = __real_0000000c;
  auVar116._24_4_ = __real_0000000c;
  auVar116._28_4_ = __real_0000000c;
  vpor_avx2(auVar116,auVar145);
  auVar104 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar103 = vpslld_avx2(auVar57,4);
  vpor_avx2(auVar103,auVar46);
  auVar164 = vgatherdps(ZEXT832(0),auVar2);
  vpor_avx2(auVar103,auVar98);
  auVar25 = vgatherdps(ZEXT832(0),auVar2);
  vpor_avx2(auVar116,auVar103);
  auVar115 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
  auVar57 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
  auVar142 = vgatherdps(ZEXT832(0),auVar2);
  auVar57 = vmaskmovps_avx(auVar2,auVar57);
  auVar45 = vmaskmovps_avx(auVar2,auVar45);
  auVar128 = vmaskmovps_avx(auVar2,auVar128);
  auVar142 = vmaskmovps_avx(auVar2,auVar142);
  auVar164 = vmaskmovps_avx(auVar2,auVar164);
  auVar25 = vmaskmovps_avx(auVar2,auVar25);
  auVar74 = vpslld_avx2(auVar94,4);
  auVar43 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
  vpor_avx2(auVar74,auVar46);
  auVar44 = vgatherdps(ZEXT832(0),auVar2);
  vpor_avx2(auVar74,auVar98);
  auVar72 = vgatherdps(ZEXT832(0),auVar2);
  vpor_avx2(auVar116,auVar74);
  auVar95 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
  auVar43 = vmaskmovps_avx(auVar2,auVar43);
  auVar44 = vmaskmovps_avx(auVar2,auVar44);
  auVar72 = vmaskmovps_avx(auVar2,auVar72);
  auVar73 = vpmovzxbd_avx2(auVar24);
  auVar73 = vpslld_avx2(auVar73,2);
  vpmovzxdq_avx2(auVar73._16_16_);
  vpmovzxdq_avx2(auVar73._0_16_);
  auVar124 = vgatherqps(ZEXT816(0),auVar2._0_16_);
  auVar56 = vgatherqps(ZEXT816(0) << 0x20,auVar2._16_16_);
  auVar47._4_4_ = __real_3f800000;
  auVar47._0_4_ = __real_3f800000;
  auVar47._8_4_ = __real_3f800000;
  auVar47._12_4_ = __real_3f800000;
  auVar47._16_4_ = __real_3f800000;
  auVar47._20_4_ = __real_3f800000;
  auVar47._24_4_ = __real_3f800000;
  auVar47._28_4_ = __real_3f800000;
  auVar97 = vsubps_avx(auVar47,auVar58);
  auVar73 = vmaxps_avx(auVar58,auVar97);
  auVar48._0_4_ = auVar73._0_4_ + __real_3f800000;
  auVar48._4_4_ = auVar73._4_4_ + __real_3f800000;
  auVar48._8_4_ = auVar73._8_4_ + __real_3f800000;
  auVar48._12_4_ = auVar73._12_4_ + __real_3f800000;
  auVar48._16_4_ = auVar73._16_4_ + __real_3f800000;
  auVar48._20_4_ = auVar73._20_4_ + __real_3f800000;
  auVar48._24_4_ = auVar73._24_4_ + __real_3f800000;
  auVar48._28_4_ = auVar73._28_4_ + __real_3f800000;
  auVar59._4_4_ = __real_40000000;
  auVar59._0_4_ = __real_40000000;
  auVar59._8_4_ = __real_40000000;
  auVar59._12_4_ = __real_40000000;
  auVar59._16_4_ = __real_40000000;
  auVar59._20_4_ = __real_40000000;
  auVar59._24_4_ = __real_40000000;
  auVar59._28_4_ = __real_40000000;
  auVar73 = vdivps_avx(auVar59,auVar48);
  auVar93 = vsubps_avx(auVar57,auVar142);
  fVar22 = auVar58._0_4_;
  auVar60._0_4_ = fVar22 * auVar93._0_4_ + auVar142._0_4_;
  fVar28 = auVar58._4_4_;
  auVar60._4_4_ = fVar28 * auVar93._4_4_ + auVar142._4_4_;
  fVar32 = auVar58._8_4_;
  auVar60._8_4_ = fVar32 * auVar93._8_4_ + auVar142._8_4_;
  fVar36 = auVar58._12_4_;
  auVar60._12_4_ = fVar36 * auVar93._12_4_ + auVar142._12_4_;
  fVar84 = auVar58._16_4_;
  auVar60._16_4_ = fVar84 * auVar93._16_4_ + auVar142._16_4_;
  fVar86 = auVar58._20_4_;
  auVar60._20_4_ = fVar86 * auVar93._20_4_ + auVar142._20_4_;
  fVar89 = auVar58._24_4_;
  auVar60._24_4_ = fVar89 * auVar93._24_4_ + auVar142._24_4_;
  fVar92 = auVar58._28_4_;
  auVar60._28_4_ = fVar92 * auVar93._28_4_ + auVar142._28_4_;
  auVar58 = vsubps_avx(auVar45,auVar164);
  fVar111 = auVar164._0_4_;
  auVar122._0_4_ = fVar22 * auVar58._0_4_ + fVar111;
  fVar26 = auVar164._4_4_;
  auVar122._4_4_ = fVar28 * auVar58._4_4_ + fVar26;
  fVar30 = auVar164._8_4_;
  auVar122._8_4_ = fVar32 * auVar58._8_4_ + fVar30;
  fVar34 = auVar164._12_4_;
  auVar122._12_4_ = fVar36 * auVar58._12_4_ + fVar34;
  fVar38 = auVar164._16_4_;
  auVar122._16_4_ = fVar84 * auVar58._16_4_ + fVar38;
  fVar82 = auVar164._20_4_;
  auVar122._20_4_ = fVar86 * auVar58._20_4_ + fVar82;
  fVar87 = auVar164._24_4_;
  auVar122._24_4_ = fVar89 * auVar58._24_4_ + fVar87;
  fVar90 = auVar164._28_4_;
  auVar122._28_4_ = fVar92 * auVar58._28_4_ + fVar90;
  auVar58 = vsubps_avx(auVar128,auVar25);
  fVar102 = auVar25._0_4_;
  auVar147._0_4_ = fVar22 * auVar58._0_4_ + fVar102;
  fVar54 = auVar25._4_4_;
  auVar147._4_4_ = fVar28 * auVar58._4_4_ + fVar54;
  fVar105 = auVar25._8_4_;
  auVar147._8_4_ = fVar32 * auVar58._8_4_ + fVar105;
  fVar106 = auVar25._12_4_;
  auVar147._12_4_ = fVar36 * auVar58._12_4_ + fVar106;
  fVar107 = auVar25._16_4_;
  auVar147._16_4_ = fVar84 * auVar58._16_4_ + fVar107;
  fVar108 = auVar25._20_4_;
  auVar147._20_4_ = fVar86 * auVar58._20_4_ + fVar108;
  fVar109 = auVar25._24_4_;
  auVar147._24_4_ = fVar89 * auVar58._24_4_ + fVar109;
  fVar110 = auVar25._28_4_;
  auVar147._28_4_ = fVar92 * auVar58._28_4_ + fVar110;
  auVar58 = vsubps_avx(auVar43,auVar60);
  auVar164 = vsubps_avx(auVar44,auVar122);
  auVar25 = vsubps_avx(auVar72,auVar147);
  auVar75._0_4_ =
       auVar25._0_4_ * auVar25._0_4_ +
       auVar58._0_4_ * auVar58._0_4_ + auVar164._0_4_ * auVar164._0_4_;
  auVar75._4_4_ =
       auVar25._4_4_ * auVar25._4_4_ +
       auVar58._4_4_ * auVar58._4_4_ + auVar164._4_4_ * auVar164._4_4_;
  auVar75._8_4_ =
       auVar25._8_4_ * auVar25._8_4_ +
       auVar58._8_4_ * auVar58._8_4_ + auVar164._8_4_ * auVar164._8_4_;
  auVar75._12_4_ =
       auVar25._12_4_ * auVar25._12_4_ +
       auVar58._12_4_ * auVar58._12_4_ + auVar164._12_4_ * auVar164._12_4_;
  auVar75._16_4_ =
       auVar25._16_4_ * auVar25._16_4_ +
       auVar58._16_4_ * auVar58._16_4_ + auVar164._16_4_ * auVar164._16_4_;
  auVar75._20_4_ =
       auVar25._20_4_ * auVar25._20_4_ +
       auVar58._20_4_ * auVar58._20_4_ + auVar164._20_4_ * auVar164._20_4_;
  auVar75._24_4_ =
       auVar25._24_4_ * auVar25._24_4_ +
       auVar58._24_4_ * auVar58._24_4_ + auVar164._24_4_ * auVar164._24_4_;
  auVar75._28_4_ =
       auVar25._28_4_ * auVar25._28_4_ +
       auVar58._28_4_ * auVar58._28_4_ + auVar164._28_4_ * auVar164._28_4_;
  auVar99 = vsqrtps_avx(auVar75);
  auVar58 = vdivps_avx(auVar58,auVar99);
  auVar164 = vdivps_avx(auVar164,auVar99);
  auVar25 = vdivps_avx(auVar25,auVar99);
  auVar118 = vsubps_avx(auVar99,auVar118);
  fVar113 = auVar118._0_4_;
  fVar123 = auVar118._4_4_;
  fVar130 = auVar118._8_4_;
  fVar132 = auVar118._12_4_;
  fVar133 = auVar118._16_4_;
  fVar135 = auVar118._20_4_;
  fVar136 = auVar118._24_4_;
  fVar138 = auVar118._28_4_;
  fVar27 = auVar115._0_4_;
  fVar35 = auVar115._16_4_;
  fVar100 = auVar104._0_4_;
  auVar148._0_4_ = fVar22 * fVar100 + auVar97._0_4_ * fVar27;
  auVar148._4_4_ = fVar28 * auVar104._4_4_ + auVar97._4_4_ * auVar115._4_4_;
  auVar148._8_4_ = fVar32 * auVar104._8_4_ + auVar97._8_4_ * auVar115._8_4_;
  auVar148._12_4_ = fVar36 * auVar104._12_4_ + auVar97._12_4_ * auVar115._12_4_;
  fVar101 = auVar104._16_4_;
  auVar148._16_4_ = fVar84 * fVar101 + auVar97._16_4_ * fVar35;
  auVar148._20_4_ = fVar86 * auVar104._20_4_ + auVar97._20_4_ * auVar115._20_4_;
  auVar148._24_4_ = fVar89 * auVar104._24_4_ + auVar97._24_4_ * auVar115._24_4_;
  auVar148._28_4_ = fVar92 * auVar104._28_4_ + auVar97._28_4_ * auVar115._28_4_;
  fVar29 = auVar124._0_4_;
  auVar61._0_4_ = fVar29 * fVar113 * auVar58._0_4_;
  fVar81 = auVar124._4_4_;
  auVar61._4_4_ = fVar81 * fVar123 * auVar58._4_4_;
  fVar31 = auVar124._8_4_;
  auVar61._8_4_ = fVar31 * fVar130 * auVar58._8_4_;
  fVar33 = auVar124._12_4_;
  auVar61._12_4_ = fVar33 * fVar132 * auVar58._12_4_;
  fVar37 = auVar56._0_4_;
  auVar61._16_4_ = fVar37 * fVar133 * auVar58._16_4_;
  fVar39 = auVar56._4_4_;
  auVar61._20_4_ = fVar39 * fVar135 * auVar58._20_4_;
  fVar119 = auVar56._8_4_;
  auVar61._24_4_ = fVar119 * fVar136 * auVar58._24_4_;
  fVar120 = auVar56._12_4_;
  auVar61._28_4_ = fVar120 * fVar138 * auVar58._28_4_;
  fVar71 = auVar95._0_4_;
  auVar165._0_4_ = auVar148._0_4_ + fVar71;
  auVar165._4_4_ = auVar148._4_4_ + auVar95._4_4_;
  auVar165._8_4_ = auVar148._8_4_ + auVar95._8_4_;
  auVar165._12_4_ = auVar148._12_4_ + auVar95._12_4_;
  fVar23 = auVar95._16_4_;
  auVar165._16_4_ = auVar148._16_4_ + fVar23;
  auVar165._20_4_ = auVar148._20_4_ + auVar95._20_4_;
  auVar165._24_4_ = auVar148._24_4_ + auVar95._24_4_;
  auVar165._28_4_ = auVar148._28_4_ + auVar95._28_4_;
  auVar93 = vdivps_avx(auVar61,auVar165);
  auVar170._0_4_ = fVar29 * auVar164._0_4_ * fVar113;
  auVar170._4_4_ = fVar81 * auVar164._4_4_ * fVar123;
  auVar170._8_4_ = fVar31 * auVar164._8_4_ * fVar130;
  auVar170._12_4_ = fVar33 * auVar164._12_4_ * fVar132;
  auVar170._16_4_ = fVar37 * auVar164._16_4_ * fVar133;
  auVar170._20_4_ = fVar39 * auVar164._20_4_ * fVar135;
  auVar170._24_4_ = fVar119 * auVar164._24_4_ * fVar136;
  auVar170._28_4_ = fVar120 * auVar164._28_4_ * fVar138;
  auVar164 = vdivps_avx(auVar170,auVar165);
  auVar117._0_4_ = fVar29 * auVar25._0_4_ * fVar113;
  auVar117._4_4_ = fVar81 * auVar25._4_4_ * fVar123;
  auVar117._8_4_ = fVar31 * auVar25._8_4_ * fVar130;
  auVar117._12_4_ = fVar33 * auVar25._12_4_ * fVar132;
  auVar117._16_4_ = fVar37 * auVar25._16_4_ * fVar133;
  auVar117._20_4_ = fVar39 * auVar25._20_4_ * fVar135;
  auVar117._24_4_ = fVar119 * auVar25._24_4_ * fVar136;
  auVar117._28_4_ = fVar120 * auVar25._28_4_ * fVar138;
  auVar25 = vdivps_avx(auVar117,auVar165);
  auVar118 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar58 = vcmpps_avx(auVar148,auVar118,0);
  auVar118 = vcmpps_avx(auVar118,auVar95,0);
  auVar76._0_4_ = auVar118._0_4_ & auVar58._0_4_;
  auVar76._4_4_ = auVar118._4_4_ & auVar58._4_4_;
  auVar76._8_4_ = auVar118._8_4_ & auVar58._8_4_;
  auVar76._12_4_ = auVar118._12_4_ & auVar58._12_4_;
  auVar76._16_4_ = auVar118._16_4_ & auVar58._16_4_;
  auVar76._20_4_ = auVar118._20_4_ & auVar58._20_4_;
  auVar76._24_4_ = auVar118._24_4_ & auVar58._24_4_;
  auVar76._28_4_ = auVar118._28_4_ & auVar58._28_4_;
  auVar149._4_4_ = __real_322bcc77;
  auVar149._0_4_ = __real_322bcc77;
  auVar149._8_4_ = __real_322bcc77;
  auVar149._12_4_ = __real_322bcc77;
  auVar149._16_4_ = __real_322bcc77;
  auVar149._20_4_ = __real_322bcc77;
  auVar149._24_4_ = __real_322bcc77;
  auVar149._28_4_ = __real_322bcc77;
  auVar58 = vcmpps_avx(auVar99,auVar149,2);
  auVar76 = auVar76 | auVar58;
  uVar11 = auVar76._0_4_;
  fVar139 = (float)(~uVar11 & auVar93._0_4_);
  uVar79 = auVar76._4_4_;
  fVar131 = (float)(~uVar79 & auVar93._4_4_);
  uVar21 = auVar76._8_4_;
  fVar144 = (float)(~uVar21 & auVar93._8_4_);
  uVar80 = auVar76._12_4_;
  fVar134 = (float)(~uVar80 & auVar93._12_4_);
  uVar83 = auVar76._16_4_;
  fVar151 = (float)(~uVar83 & auVar93._16_4_);
  uVar85 = auVar76._20_4_;
  fVar137 = (float)(~uVar85 & auVar93._20_4_);
  uVar88 = auVar76._24_4_;
  fVar153 = (float)(~uVar88 & auVar93._24_4_);
  uVar91 = auVar76._28_4_;
  fVar140 = (float)(~uVar91 & auVar93._28_4_);
  fVar154 = (float)(~uVar11 & auVar164._0_4_);
  fVar152 = (float)(~uVar79 & auVar164._4_4_);
  fVar156 = (float)(~uVar21 & auVar164._8_4_);
  fVar155 = (float)(~uVar80 & auVar164._12_4_);
  fVar157 = (float)(~uVar83 & auVar164._16_4_);
  fVar158 = (float)(~uVar85 & auVar164._20_4_);
  fVar159 = (float)(~uVar88 & auVar164._24_4_);
  fVar161 = (float)(~uVar91 & auVar164._28_4_);
  fVar113 = (float)(~uVar11 & auVar25._0_4_);
  fVar123 = (float)(~uVar79 & auVar25._4_4_);
  fVar130 = (float)(~uVar21 & auVar25._8_4_);
  fVar132 = (float)(~uVar80 & auVar25._12_4_);
  fVar133 = (float)(~uVar83 & auVar25._16_4_);
  fVar135 = (float)(~uVar85 & auVar25._20_4_);
  fVar136 = (float)(~uVar88 & auVar25._24_4_);
  fVar138 = (float)(~uVar91 & auVar25._28_4_);
  auVar118 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar58 = vcmpps_avx(auVar118,auVar95,1);
  uVar11 = auVar2._0_4_;
  auVar62._0_4_ = auVar58._0_4_ & uVar11;
  uVar79 = auVar2._4_4_;
  auVar62._4_4_ = auVar58._4_4_ & uVar79;
  uVar21 = auVar2._8_4_;
  auVar62._8_4_ = auVar58._8_4_ & uVar21;
  uVar80 = auVar2._12_4_;
  auVar62._12_4_ = auVar58._12_4_ & uVar80;
  uVar83 = auVar2._16_4_;
  auVar62._16_4_ = auVar58._16_4_ & uVar83;
  uVar85 = auVar2._20_4_;
  auVar62._20_4_ = auVar58._20_4_ & uVar85;
  uVar88 = auVar2._24_4_;
  auVar62._24_4_ = auVar58._24_4_ & uVar88;
  uVar91 = auVar2._28_4_;
  auVar62._28_4_ = auVar58._28_4_ & uVar91;
  uVar10 = vmovmskps_avx(auVar62);
  fVar29 = auVar73._0_4_;
  fVar81 = auVar73._4_4_;
  fVar31 = auVar73._8_4_;
  fVar33 = auVar73._12_4_;
  fVar37 = auVar73._16_4_;
  fVar39 = auVar73._20_4_;
  fVar119 = auVar73._24_4_;
  fVar120 = auVar73._28_4_;
  if (uVar10 != 0) {
    fVar160 = fVar71 * fVar29;
    fVar55 = auVar95._4_4_ * fVar81;
    fVar63 = auVar95._8_4_ * fVar31;
    fVar64 = auVar95._12_4_ * fVar33;
    fVar65 = fVar23 * fVar37;
    fVar66 = auVar95._20_4_ * fVar39;
    fVar68 = auVar95._24_4_ * fVar119;
    fVar69 = auVar95._28_4_ * fVar120;
    auVar41._0_4_ = -(fVar160 * fVar139) + auVar43._0_4_;
    auVar41._4_4_ = -(fVar55 * fVar131) + auVar43._4_4_;
    auVar41._8_4_ = -(fVar63 * fVar144) + auVar43._8_4_;
    auVar41._12_4_ = -(fVar64 * fVar134) + auVar43._12_4_;
    auVar49._16_4_ = -(fVar65 * fVar151) + auVar43._16_4_;
    auVar49._0_16_ = auVar41;
    auVar49._20_4_ = -(fVar66 * fVar137) + auVar43._20_4_;
    auVar49._24_4_ = -(fVar68 * fVar153) + auVar43._24_4_;
    auVar49._28_4_ = -(fVar69 * fVar140) + auVar43._28_4_;
    cVar9 = (char)uVar10;
    local_420 = auVar74._0_4_;
    iStack_41c = auVar74._4_4_;
    iStack_418 = auVar74._8_4_;
    iStack_414 = auVar74._12_4_;
    iStack_410 = auVar74._16_4_;
    iStack_40c = auVar74._20_4_;
    iStack_408 = auVar74._24_4_;
    iStack_404 = auVar74._28_4_;
    auVar56 = auVar95._0_16_;
    auVar67 = auVar95._16_16_;
    auVar124 = auVar49._16_16_;
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) == 0) goto LAB_140014406;
LAB_1400148d6:
      uVar4 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + iStack_41c) = uVar4;
      if ((uVar10 & 4) != 0) goto LAB_1400148ef;
LAB_14001440f:
      if ((uVar10 & 8) == 0) goto LAB_140014418;
LAB_140014908:
      uVar4 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + iStack_414) = uVar4;
      if ((uVar10 & 0x10) != 0) goto LAB_14001492d;
LAB_14001442d:
      if ((uVar10 & 0x20) == 0) goto LAB_140014436;
LAB_140014944:
      uVar4 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + iStack_40c) = uVar4;
      if ((uVar10 & 0x40) != 0) goto LAB_14001495d;
LAB_14001443f:
      if (-1 < cVar9) goto LAB_140014447;
LAB_140014975:
      uVar4 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + iStack_404) = uVar4;
      auVar143._0_4_ = -(fVar160 * fVar154) + auVar44._0_4_;
      auVar143._4_4_ = -(fVar55 * fVar152) + auVar44._4_4_;
      auVar143._8_4_ = -(fVar63 * fVar156) + auVar44._8_4_;
      auVar143._12_4_ = -(fVar64 * fVar155) + auVar44._12_4_;
      auVar143._16_4_ = -(fVar65 * fVar157) + auVar44._16_4_;
      auVar143._20_4_ = -(fVar66 * fVar158) + auVar44._20_4_;
      auVar143._24_4_ = -(fVar68 * fVar159) + auVar44._24_4_;
      auVar143._28_4_ = -(fVar69 * fVar161) + auVar44._28_4_;
      if ((uVar10 & 1) != 0) goto LAB_140014993;
LAB_140014455:
      if ((uVar10 & 2) == 0) goto LAB_14001445e;
LAB_1400149ab:
      uVar4 = vextractps_avx(auVar143._0_16_,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_41c) = uVar4;
      if ((uVar10 & 4) != 0) goto LAB_1400149c5;
LAB_140014467:
      if ((uVar10 & 8) == 0) goto LAB_140014470;
LAB_1400149df:
      uVar4 = vextractps_avx(auVar143._0_16_,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_414) = uVar4;
      auVar124 = auVar143._16_16_;
      if ((uVar10 & 0x10) != 0) goto LAB_1400149ff;
LAB_14001447f:
      if ((uVar10 & 0x20) == 0) goto LAB_140014488;
LAB_140014a17:
      uVar4 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_40c) = uVar4;
      if ((uVar10 & 0x40) != 0) goto LAB_140014a31;
LAB_140014491:
      if (-1 < cVar9) goto LAB_140014499;
LAB_140014a4a:
      uVar4 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_404) = uVar4;
      auVar77._0_4_ = -(fVar113 * fVar160) + auVar72._0_4_;
      auVar77._4_4_ = -(fVar123 * fVar55) + auVar72._4_4_;
      auVar77._8_4_ = -(fVar130 * fVar63) + auVar72._8_4_;
      auVar77._12_4_ = -(fVar132 * fVar64) + auVar72._12_4_;
      auVar77._16_4_ = -(fVar133 * fVar65) + auVar72._16_4_;
      auVar77._20_4_ = -(fVar135 * fVar66) + auVar72._20_4_;
      auVar77._24_4_ = -(fVar136 * fVar68) + auVar72._24_4_;
      auVar77._28_4_ = -(fVar138 * fVar69) + auVar72._28_4_;
      if ((uVar10 & 1) != 0) goto LAB_140014a69;
LAB_1400144a7:
      if ((uVar10 & 2) == 0) goto LAB_1400144b0;
LAB_140014a81:
      uVar4 = vextractps_avx(auVar77._0_16_,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_41c) = uVar4;
      if ((uVar10 & 4) != 0) goto LAB_140014a9b;
LAB_1400144b9:
      if ((uVar10 & 8) == 0) goto LAB_1400144c2;
LAB_140014ab5:
      uVar4 = vextractps_avx(auVar77._0_16_,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_414) = uVar4;
      auVar124 = auVar77._16_16_;
    }
    else {
      *(float *)(param_1 + local_420) = auVar41._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_1400148d6;
LAB_140014406:
      if ((uVar10 & 4) == 0) goto LAB_14001440f;
LAB_1400148ef:
      uVar4 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + iStack_418) = uVar4;
      if ((uVar10 & 8) != 0) goto LAB_140014908;
LAB_140014418:
      if ((uVar10 & 0x10) == 0) goto LAB_14001442d;
LAB_14001492d:
      *(float *)(param_1 + iStack_410) = auVar49._16_4_;
      if ((uVar10 & 0x20) != 0) goto LAB_140014944;
LAB_140014436:
      if ((uVar10 & 0x40) == 0) goto LAB_14001443f;
LAB_14001495d:
      uVar4 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + iStack_408) = uVar4;
      if (cVar9 < '\0') goto LAB_140014975;
LAB_140014447:
      auVar143._0_4_ = -(fVar160 * fVar154) + auVar44._0_4_;
      auVar143._4_4_ = -(fVar55 * fVar152) + auVar44._4_4_;
      auVar143._8_4_ = -(fVar63 * fVar156) + auVar44._8_4_;
      auVar143._12_4_ = -(fVar64 * fVar155) + auVar44._12_4_;
      auVar143._16_4_ = -(fVar65 * fVar157) + auVar44._16_4_;
      auVar143._20_4_ = -(fVar66 * fVar158) + auVar44._20_4_;
      auVar143._24_4_ = -(fVar68 * fVar159) + auVar44._24_4_;
      auVar143._28_4_ = -(fVar69 * fVar161) + auVar44._28_4_;
      if ((uVar10 & 1) == 0) goto LAB_140014455;
LAB_140014993:
      *(int *)(param_1 + 4 + (longlong)local_420) = auVar143._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_1400149ab;
LAB_14001445e:
      if ((uVar10 & 4) == 0) goto LAB_140014467;
LAB_1400149c5:
      uVar4 = vextractps_avx(auVar143._0_16_,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_418) = uVar4;
      if ((uVar10 & 8) != 0) goto LAB_1400149df;
LAB_140014470:
      auVar124 = auVar143._16_16_;
      if ((uVar10 & 0x10) == 0) goto LAB_14001447f;
LAB_1400149ff:
      *(int *)(param_1 + 4 + (longlong)iStack_410) = auVar124._0_4_;
      if ((uVar10 & 0x20) != 0) goto LAB_140014a17;
LAB_140014488:
      if ((uVar10 & 0x40) == 0) goto LAB_140014491;
LAB_140014a31:
      uVar4 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iStack_408) = uVar4;
      if (cVar9 < '\0') goto LAB_140014a4a;
LAB_140014499:
      auVar77._0_4_ = -(fVar113 * fVar160) + auVar72._0_4_;
      auVar77._4_4_ = -(fVar123 * fVar55) + auVar72._4_4_;
      auVar77._8_4_ = -(fVar130 * fVar63) + auVar72._8_4_;
      auVar77._12_4_ = -(fVar132 * fVar64) + auVar72._12_4_;
      auVar77._16_4_ = -(fVar133 * fVar65) + auVar72._16_4_;
      auVar77._20_4_ = -(fVar135 * fVar66) + auVar72._20_4_;
      auVar77._24_4_ = -(fVar136 * fVar68) + auVar72._24_4_;
      auVar77._28_4_ = -(fVar138 * fVar69) + auVar72._28_4_;
      if ((uVar10 & 1) == 0) goto LAB_1400144a7;
LAB_140014a69:
      *(int *)(param_1 + 8 + (longlong)local_420) = auVar77._0_4_;
      if ((uVar10 & 2) != 0) goto LAB_140014a81;
LAB_1400144b0:
      if ((uVar10 & 4) == 0) goto LAB_1400144b9;
LAB_140014a9b:
      uVar4 = vextractps_avx(auVar77._0_16_,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_418) = uVar4;
      if ((uVar10 & 8) != 0) goto LAB_140014ab5;
LAB_1400144c2:
      auVar124 = auVar77._16_16_;
    }
    if ((uVar10 & 0x10) != 0) {
      *(int *)(param_1 + 8 + (longlong)iStack_410) = auVar124._0_4_;
    }
    if ((uVar10 & 0x20) != 0) {
      uVar4 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_40c) = uVar4;
    }
    if ((uVar10 & 0x40) != 0) {
      uVar4 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_408) = uVar4;
    }
    if (cVar9 < '\0') {
      uVar4 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iStack_404) = uVar4;
    }
    if ((uVar10 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)local_420) = fVar71;
    }
    if ((uVar10 & 2) != 0) {
      uVar4 = vextractps_avx(auVar56,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_41c) = uVar4;
    }
    if ((uVar10 & 4) != 0) {
      uVar4 = vextractps_avx(auVar56,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_418) = uVar4;
    }
    if ((uVar10 & 8) != 0) {
      uVar4 = vextractps_avx(auVar56,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_414) = uVar4;
    }
    if ((uVar10 & 0x10) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iStack_410) = fVar23;
    }
    if ((uVar10 & 0x20) != 0) {
      uVar4 = vextractps_avx(auVar67,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_40c) = uVar4;
    }
    if ((uVar10 & 0x40) != 0) {
      uVar4 = vextractps_avx(auVar67,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_408) = uVar4;
    }
    if (cVar9 < '\0') {
      uVar4 = vextractps_avx(auVar67,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iStack_404) = uVar4;
    }
  }
  auVar2 = vcmpps_avx(auVar118,auVar104,0xc);
  auVar50._0_4_ = auVar2._0_4_ & uVar11;
  auVar50._4_4_ = auVar2._4_4_ & uVar79;
  auVar50._8_4_ = auVar2._8_4_ & uVar21;
  auVar50._12_4_ = auVar2._12_4_ & uVar80;
  auVar50._16_4_ = auVar2._16_4_ & uVar83;
  auVar50._20_4_ = auVar2._20_4_ & uVar85;
  auVar50._24_4_ = auVar2._24_4_ & uVar88;
  auVar50._28_4_ = auVar2._28_4_ & uVar91;
  uVar10 = vmovmskps_avx(auVar50);
  if (uVar10 == 0) goto LAB_1400146c8;
  fVar22 = fVar100 * fVar29 * fVar22;
  fVar28 = auVar104._4_4_ * fVar81 * fVar28;
  fVar32 = auVar104._8_4_ * fVar31 * fVar32;
  fVar36 = auVar104._12_4_ * fVar33 * fVar36;
  fVar84 = fVar101 * fVar37 * fVar84;
  fVar86 = auVar104._20_4_ * fVar39 * fVar86;
  fVar89 = auVar104._24_4_ * fVar119 * fVar89;
  fVar92 = auVar104._28_4_ * fVar120 * fVar92;
  local_400 = auVar57._0_4_;
  fStack_3fc = auVar57._4_4_;
  fStack_3f8 = auVar57._8_4_;
  fStack_3f4 = auVar57._12_4_;
  fStack_3f0 = auVar57._16_4_;
  fStack_3ec = auVar57._20_4_;
  fStack_3e8 = auVar57._24_4_;
  fStack_3e4 = auVar57._28_4_;
  auVar42._0_4_ = fVar22 * fVar139 + local_400;
  auVar42._4_4_ = fVar28 * fVar131 + fStack_3fc;
  auVar42._8_4_ = fVar32 * fVar144 + fStack_3f8;
  auVar42._12_4_ = fVar36 * fVar134 + fStack_3f4;
  auVar51._16_4_ = fVar84 * fVar151 + fStack_3f0;
  auVar51._0_16_ = auVar42;
  auVar51._20_4_ = fVar86 * fVar137 + fStack_3ec;
  auVar51._24_4_ = fVar89 * fVar153 + fStack_3e8;
  auVar51._28_4_ = fVar92 * fVar140 + fStack_3e4;
  cVar9 = (char)uVar10;
  local_340 = auVar145._0_4_;
  iStack_33c = auVar145._4_4_;
  iStack_338 = auVar145._8_4_;
  iStack_334 = auVar145._12_4_;
  iStack_330 = auVar145._16_4_;
  iStack_32c = auVar145._20_4_;
  iStack_328 = auVar145._24_4_;
  iStack_324 = auVar145._28_4_;
  auVar56 = auVar104._0_16_;
  auVar67 = auVar104._16_16_;
  auVar124 = auVar51._16_16_;
  local_3c0 = auVar45._0_4_;
  fStack_3bc = auVar45._4_4_;
  fStack_3b8 = auVar45._8_4_;
  fStack_3b4 = auVar45._12_4_;
  fStack_3b0 = auVar45._16_4_;
  fStack_3ac = auVar45._20_4_;
  fStack_3a8 = auVar45._24_4_;
  fStack_3a4 = auVar45._28_4_;
  local_3e0 = auVar128._0_4_;
  fStack_3dc = auVar128._4_4_;
  fStack_3d8 = auVar128._8_4_;
  fStack_3d4 = auVar128._12_4_;
  fStack_3d0 = auVar128._16_4_;
  fStack_3cc = auVar128._20_4_;
  fStack_3c8 = auVar128._24_4_;
  fStack_3c4 = auVar128._28_4_;
  if ((uVar10 & 1) == 0) {
    if ((uVar10 & 2) == 0) goto LAB_140014588;
LAB_140014c1d:
    uVar4 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iStack_33c) = uVar4;
    if ((uVar10 & 4) != 0) goto LAB_140014c36;
LAB_140014591:
    if ((uVar10 & 8) == 0) goto LAB_14001459a;
LAB_140014c4f:
    uVar4 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iStack_334) = uVar4;
    if ((uVar10 & 0x10) != 0) goto LAB_140014c74;
LAB_1400145af:
    if ((uVar10 & 0x20) == 0) goto LAB_1400145b8;
LAB_140014c8b:
    uVar4 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + iStack_32c) = uVar4;
    if ((uVar10 & 0x40) != 0) goto LAB_140014ca4;
LAB_1400145c1:
    if (-1 < cVar9) goto LAB_1400145c9;
LAB_140014cbc:
    uVar4 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + iStack_324) = uVar4;
    auVar52._0_4_ = fVar22 * fVar154 + local_3c0;
    auVar52._4_4_ = fVar28 * fVar152 + fStack_3bc;
    auVar52._8_4_ = fVar32 * fVar156 + fStack_3b8;
    auVar52._12_4_ = fVar36 * fVar155 + fStack_3b4;
    auVar52._16_4_ = fVar84 * fVar157 + fStack_3b0;
    auVar52._20_4_ = fVar86 * fVar158 + fStack_3ac;
    auVar52._24_4_ = fVar89 * fVar159 + fStack_3a8;
    auVar52._28_4_ = fVar92 * fVar161 + fStack_3a4;
    if ((uVar10 & 1) != 0) goto LAB_140014ce3;
LAB_1400145e0:
    if ((uVar10 & 2) == 0) goto LAB_1400145e9;
LAB_140014cfb:
    uVar4 = vextractps_avx(auVar52._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_33c) = uVar4;
    if ((uVar10 & 4) != 0) goto LAB_140014d15;
LAB_1400145f2:
    if ((uVar10 & 8) == 0) goto LAB_1400145fb;
LAB_140014d2f:
    uVar4 = vextractps_avx(auVar52._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_334) = uVar4;
    auVar124 = auVar52._16_16_;
    if ((uVar10 & 0x10) != 0) goto LAB_140014d4f;
LAB_14001460a:
    if ((uVar10 & 0x20) == 0) goto LAB_140014613;
LAB_140014d67:
    uVar4 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_32c) = uVar4;
    if ((uVar10 & 0x40) != 0) goto LAB_140014d81;
LAB_14001461c:
    if (-1 < cVar9) goto LAB_140014624;
LAB_140014d9a:
    uVar4 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_324) = uVar4;
    auVar78._0_4_ = fVar113 * fVar22 + local_3e0;
    auVar78._4_4_ = fVar123 * fVar28 + fStack_3dc;
    auVar78._8_4_ = fVar130 * fVar32 + fStack_3d8;
    auVar78._12_4_ = fVar132 * fVar36 + fStack_3d4;
    auVar78._16_4_ = fVar133 * fVar84 + fStack_3d0;
    auVar78._20_4_ = fVar135 * fVar86 + fStack_3cc;
    auVar78._24_4_ = fVar136 * fVar89 + fStack_3c8;
    auVar78._28_4_ = fVar138 * fVar92 + fStack_3c4;
    if ((uVar10 & 1) != 0) goto LAB_140014dbe;
LAB_140014637:
    if ((uVar10 & 2) == 0) goto LAB_140014640;
LAB_140014dd6:
    uVar4 = vextractps_avx(auVar78._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_33c) = uVar4;
    if ((uVar10 & 4) != 0) goto LAB_140014df0;
LAB_140014649:
    if ((uVar10 & 8) == 0) goto LAB_140014652;
LAB_140014e0a:
    uVar4 = vextractps_avx(auVar78._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_334) = uVar4;
    auVar124 = auVar78._16_16_;
  }
  else {
    *(float *)(param_1 + local_340) = auVar42._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_140014c1d;
LAB_140014588:
    if ((uVar10 & 4) == 0) goto LAB_140014591;
LAB_140014c36:
    uVar4 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iStack_338) = uVar4;
    if ((uVar10 & 8) != 0) goto LAB_140014c4f;
LAB_14001459a:
    if ((uVar10 & 0x10) == 0) goto LAB_1400145af;
LAB_140014c74:
    *(float *)(param_1 + iStack_330) = auVar51._16_4_;
    if ((uVar10 & 0x20) != 0) goto LAB_140014c8b;
LAB_1400145b8:
    if ((uVar10 & 0x40) == 0) goto LAB_1400145c1;
LAB_140014ca4:
    uVar4 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + iStack_328) = uVar4;
    if (cVar9 < '\0') goto LAB_140014cbc;
LAB_1400145c9:
    auVar52._0_4_ = fVar22 * fVar154 + local_3c0;
    auVar52._4_4_ = fVar28 * fVar152 + fStack_3bc;
    auVar52._8_4_ = fVar32 * fVar156 + fStack_3b8;
    auVar52._12_4_ = fVar36 * fVar155 + fStack_3b4;
    auVar52._16_4_ = fVar84 * fVar157 + fStack_3b0;
    auVar52._20_4_ = fVar86 * fVar158 + fStack_3ac;
    auVar52._24_4_ = fVar89 * fVar159 + fStack_3a8;
    auVar52._28_4_ = fVar92 * fVar161 + fStack_3a4;
    if ((uVar10 & 1) == 0) goto LAB_1400145e0;
LAB_140014ce3:
    *(int *)(param_1 + 4 + (longlong)local_340) = auVar52._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_140014cfb;
LAB_1400145e9:
    if ((uVar10 & 4) == 0) goto LAB_1400145f2;
LAB_140014d15:
    uVar4 = vextractps_avx(auVar52._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_338) = uVar4;
    if ((uVar10 & 8) != 0) goto LAB_140014d2f;
LAB_1400145fb:
    auVar124 = auVar52._16_16_;
    if ((uVar10 & 0x10) == 0) goto LAB_14001460a;
LAB_140014d4f:
    *(int *)(param_1 + 4 + (longlong)iStack_330) = auVar124._0_4_;
    if ((uVar10 & 0x20) != 0) goto LAB_140014d67;
LAB_140014613:
    if ((uVar10 & 0x40) == 0) goto LAB_14001461c;
LAB_140014d81:
    uVar4 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_328) = uVar4;
    if (cVar9 < '\0') goto LAB_140014d9a;
LAB_140014624:
    auVar78._0_4_ = fVar113 * fVar22 + local_3e0;
    auVar78._4_4_ = fVar123 * fVar28 + fStack_3dc;
    auVar78._8_4_ = fVar130 * fVar32 + fStack_3d8;
    auVar78._12_4_ = fVar132 * fVar36 + fStack_3d4;
    auVar78._16_4_ = fVar133 * fVar84 + fStack_3d0;
    auVar78._20_4_ = fVar135 * fVar86 + fStack_3cc;
    auVar78._24_4_ = fVar136 * fVar89 + fStack_3c8;
    auVar78._28_4_ = fVar138 * fVar92 + fStack_3c4;
    if ((uVar10 & 1) == 0) goto LAB_140014637;
LAB_140014dbe:
    *(int *)(param_1 + 8 + (longlong)local_340) = auVar78._0_4_;
    if ((uVar10 & 2) != 0) goto LAB_140014dd6;
LAB_140014640:
    if ((uVar10 & 4) == 0) goto LAB_140014649;
LAB_140014df0:
    uVar4 = vextractps_avx(auVar78._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_338) = uVar4;
    if ((uVar10 & 8) != 0) goto LAB_140014e0a;
LAB_140014652:
    auVar124 = auVar78._16_16_;
  }
  if ((uVar10 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_330) = auVar124._0_4_;
  }
  if ((uVar10 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_32c) = uVar4;
  }
  if ((uVar10 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_328) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_324) = uVar4;
  }
  if ((uVar10 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_340) = fVar100;
  }
  if ((uVar10 & 2) != 0) {
    uVar4 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_33c) = uVar4;
  }
  if ((uVar10 & 4) != 0) {
    uVar4 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_338) = uVar4;
  }
  if ((uVar10 & 8) != 0) {
    uVar4 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_334) = uVar4;
  }
  if ((uVar10 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_330) = fVar101;
  }
  if ((uVar10 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_32c) = uVar4;
  }
  if ((uVar10 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_328) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_324) = uVar4;
  }
LAB_1400146c8:
  auVar2 = vcmpps_avx(auVar115,ZEXT1232(ZEXT812(0)),0xc);
  auVar53._0_4_ = auVar2._0_4_ & uVar11;
  auVar53._4_4_ = auVar2._4_4_ & uVar79;
  auVar53._8_4_ = auVar2._8_4_ & uVar21;
  auVar53._12_4_ = auVar2._12_4_ & uVar80;
  auVar53._16_4_ = auVar2._16_4_ & uVar83;
  auVar53._20_4_ = auVar2._20_4_ & uVar85;
  auVar53._24_4_ = auVar2._24_4_ & uVar88;
  auVar53._28_4_ = auVar2._28_4_ & uVar91;
  uVar11 = vmovmskps_avx(auVar53);
  uVar15 = (ulonglong)uVar11;
  if (uVar11 == 0) {
    return 0;
  }
  fVar71 = fVar27 * fVar29 * auVar97._0_4_;
  fVar23 = auVar115._4_4_ * fVar81 * auVar97._4_4_;
  fVar29 = auVar115._8_4_ * fVar31 * auVar97._8_4_;
  fVar81 = auVar115._12_4_ * fVar33 * auVar97._12_4_;
  fVar31 = fVar35 * fVar37 * auVar97._16_4_;
  fVar33 = auVar115._20_4_ * fVar39 * auVar97._20_4_;
  fVar37 = auVar115._24_4_ * fVar119 * auVar97._24_4_;
  fVar39 = auVar115._28_4_ * fVar120 * auVar97._28_4_;
  auVar126._0_4_ = fVar71 * fVar139 + auVar142._0_4_;
  auVar126._4_4_ = fVar23 * fVar131 + auVar142._4_4_;
  auVar126._8_4_ = fVar29 * fVar144 + auVar142._8_4_;
  auVar126._12_4_ = fVar81 * fVar134 + auVar142._12_4_;
  auVar129._16_4_ = fVar31 * fVar151 + auVar142._16_4_;
  auVar129._0_16_ = auVar126;
  auVar129._20_4_ = fVar33 * fVar137 + auVar142._20_4_;
  auVar129._24_4_ = fVar37 * fVar153 + auVar142._24_4_;
  auVar129._28_4_ = fVar39 * fVar140 + auVar142._28_4_;
  cVar9 = (char)uVar11;
  local_360 = auVar103._0_4_;
  iStack_35c = auVar103._4_4_;
  iStack_358 = auVar103._8_4_;
  iStack_354 = auVar103._12_4_;
  iStack_350 = auVar103._16_4_;
  iStack_34c = auVar103._20_4_;
  iStack_348 = auVar103._24_4_;
  iStack_344 = auVar103._28_4_;
  auVar124 = auVar115._0_16_;
  auVar56 = auVar115._16_16_;
  auVar67 = auVar129._16_16_;
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + local_360) = auVar126._0_4_;
  }
  if ((uVar11 & 2) != 0) {
    uVar4 = vextractps_avx(auVar126,1);
    *(undefined4 *)(param_1 + iStack_35c) = uVar4;
  }
  if ((uVar11 & 4) != 0) {
    uVar4 = vextractps_avx(auVar126,2);
    *(undefined4 *)(param_1 + iStack_358) = uVar4;
  }
  if ((uVar11 & 8) != 0) {
    uVar4 = vextractps_avx(auVar126,3);
    *(undefined4 *)(param_1 + iStack_354) = uVar4;
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + iStack_350) = auVar129._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + iStack_34c) = uVar4;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + iStack_348) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + iStack_344) = uVar4;
    auVar150._0_4_ = fVar71 * fVar154 + fVar111;
    auVar150._4_4_ = fVar23 * fVar152 + fVar26;
    auVar150._8_4_ = fVar29 * fVar156 + fVar30;
    auVar150._12_4_ = fVar81 * fVar155 + fVar34;
    auVar150._16_4_ = fVar31 * fVar157 + fVar38;
    auVar150._20_4_ = fVar33 * fVar158 + fVar82;
    auVar150._24_4_ = fVar37 * fVar159 + fVar87;
    auVar150._28_4_ = fVar39 * fVar161 + fVar90;
  }
  else {
    auVar150._0_4_ = fVar71 * fVar154 + fVar111;
    auVar150._4_4_ = fVar23 * fVar152 + fVar26;
    auVar150._8_4_ = fVar29 * fVar156 + fVar30;
    auVar150._12_4_ = fVar81 * fVar155 + fVar34;
    auVar150._16_4_ = fVar31 * fVar157 + fVar38;
    auVar150._20_4_ = fVar33 * fVar158 + fVar82;
    auVar150._24_4_ = fVar37 * fVar159 + fVar87;
    auVar150._28_4_ = fVar39 * fVar161 + fVar90;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_360) = auVar150._0_4_;
  }
  auVar67 = auVar150._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_35c) = uVar4;
  }
  if ((uVar11 & 4) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_358) = uVar4;
  }
  auVar40 = auVar150._16_16_;
  if ((uVar11 & 8) != 0) {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_354) = uVar4;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_350) = auVar150._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_34c) = uVar4;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_348) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_344) = uVar4;
    auVar114._0_4_ = fVar71 * fVar113 + fVar102;
    auVar114._4_4_ = fVar23 * fVar123 + fVar54;
    auVar114._8_4_ = fVar29 * fVar130 + fVar105;
    auVar114._12_4_ = fVar81 * fVar132 + fVar106;
    auVar114._16_4_ = fVar31 * fVar133 + fVar107;
    auVar114._20_4_ = fVar33 * fVar135 + fVar108;
    auVar114._24_4_ = fVar37 * fVar136 + fVar109;
    auVar114._28_4_ = fVar39 * fVar138 + fVar110;
  }
  else {
    auVar114._0_4_ = fVar71 * fVar113 + fVar102;
    auVar114._4_4_ = fVar23 * fVar123 + fVar54;
    auVar114._8_4_ = fVar29 * fVar130 + fVar105;
    auVar114._12_4_ = fVar81 * fVar132 + fVar106;
    auVar114._16_4_ = fVar31 * fVar133 + fVar107;
    auVar114._20_4_ = fVar33 * fVar135 + fVar108;
    auVar114._24_4_ = fVar37 * fVar136 + fVar109;
    auVar114._28_4_ = fVar39 * fVar138 + fVar110;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_360) = auVar114._0_4_;
  }
  auVar67 = auVar114._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_35c) = uVar4;
  }
  if ((uVar11 & 4) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_358) = uVar4;
  }
  auVar40 = auVar114._16_16_;
  if ((uVar11 & 8) != 0) {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_354) = uVar4;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_350) = auVar114._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_34c) = uVar4;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_348) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_344) = uVar4;
  }
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_360) = fVar27;
  }
  if ((uVar11 & 2) != 0) {
    uVar4 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_35c) = uVar4;
  }
  if ((uVar11 & 4) != 0) {
    uVar4 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_358) = uVar4;
  }
  if ((uVar11 & 8) != 0) {
    uVar4 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_354) = uVar4;
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_350) = fVar35;
  }
  if ((uVar11 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_34c) = uVar4;
  }
  if ((uVar11 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_348) = uVar4;
  }
  if (cVar9 < '\0') {
    uVar15 = (ulonglong)iStack_344;
    uVar4 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 0xc + uVar15) = uVar4;
  }
  return uVar15;
}


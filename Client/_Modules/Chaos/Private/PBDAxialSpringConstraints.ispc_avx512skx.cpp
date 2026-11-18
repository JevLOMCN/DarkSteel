// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplyAxialSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuni_avx512skx @ 140008df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,float param_5
               ,uint param_6)

{
  float fVar1;
  float fVar5;
  float fVar9;
  float fVar16;
  int *piVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  bool bVar71;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  bool bVar76;
  bool bVar77;
  bool bVar78;
  bool bVar79;
  bool bVar80;
  bool bVar81;
  bool bVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
  bool bVar86;
  bool bVar87;
  bool bVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined1 auVar92 [12];
  uint uVar93;
  longlong lVar94;
  ulonglong unaff_RBX;
  undefined1 (*pauVar95) [32];
  ulonglong uVar96;
  uint uVar97;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar98;
  ulonglong uVar99;
  int iVar100;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar101;
  float fVar102;
  float fVar103;
  int iVar146;
  int iVar150;
  undefined1 auVar104 [16];
  float fVar158;
  float fVar161;
  float fVar164;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  int iVar154;
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar108 [16];
  undefined1 auVar138 [32];
  undefined1 auVar109 [16];
  undefined1 auVar139 [32];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar159;
  float fVar160;
  float fVar162;
  float fVar163;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar170 [32];
  float fVar171;
  float fVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  undefined1 auVar172 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  float fVar188;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  float fVar198;
  undefined1 auVar191 [32];
  undefined1 auVar199 [32];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM31 [64];
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  auVar111 = in_ZMM29._0_16_;
  auVar109 = in_ZMM28._0_16_;
  auVar108 = in_ZMM27._0_16_;
  auVar107 = in_ZMM20._0_16_;
  auVar110 = in_ZMM25._0_16_;
  auVar106 = in_ZMM23._0_16_;
  auVar105 = in_ZMM22._0_16_;
  uVar97 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar97 = param_6;
  }
  uVar97 = uVar97 & 0xfffffff8;
  if ((int)uVar97 < 1) {
    uVar99 = 0;
  }
  else {
    pauVar95 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar99 = 0;
    auVar104 = vxorps_avx512vl(in_ZMM19._0_16_,in_ZMM19._0_16_);
    uVar96 = 0;
    auVar136._4_4_ = __real_3f800000;
    auVar136._0_4_ = __real_3f800000;
    auVar136._8_4_ = __real_3f800000;
    auVar136._12_4_ = __real_3f800000;
    auVar136._16_4_ = __real_3f800000;
    auVar136._20_4_ = __real_3f800000;
    auVar136._24_4_ = __real_3f800000;
    auVar136._28_4_ = __real_3f800000;
    do {
      auVar119 = pauVar95[-1];
      auVar112 = vpermt2d_avx512vl(pauVar95[-2],
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar119);
      auVar113 = vpermt2d_avx512vl(*pauVar95,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar119);
      auVar129 = vperm2i128_avx2(auVar112,auVar113,0x31);
      auVar114 = vpslld_avx512vl(auVar129,4);
      auVar111 = auVar114._0_16_;
      auVar115 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      auVar137._4_4_ = __real_00000004;
      auVar137._0_4_ = __real_00000004;
      auVar137._8_4_ = __real_00000004;
      auVar137._12_4_ = __real_00000004;
      auVar137._16_4_ = __real_00000004;
      auVar137._20_4_ = __real_00000004;
      auVar137._24_4_ = __real_00000004;
      auVar137._28_4_ = __real_00000004;
      auVar116 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar99));
      auVar139._4_4_ = __real_00000008;
      auVar139._0_4_ = __real_00000008;
      auVar139._8_4_ = __real_00000008;
      auVar139._12_4_ = __real_00000008;
      auVar139._16_4_ = __real_00000008;
      auVar139._20_4_ = __real_00000008;
      auVar139._24_4_ = __real_00000008;
      auVar139._28_4_ = __real_00000008;
      auVar117 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar96));
      auVar138._4_4_ = __real_0000000c;
      auVar138._0_4_ = __real_0000000c;
      auVar138._8_4_ = __real_0000000c;
      auVar138._12_4_ = __real_0000000c;
      auVar138._16_4_ = __real_0000000c;
      auVar138._20_4_ = __real_0000000c;
      auVar138._24_4_ = __real_0000000c;
      auVar138._28_4_ = __real_0000000c;
      auVar118 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_6));
      auVar119 = vpblendd_avx2(auVar119,pauVar95[-2],0x24);
      auVar119 = vpermt2d_avx512vl(auVar119,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*pauVar95);
      auVar120 = vpslld_avx512vl(auVar119,4);
      auVar105 = auVar120._0_16_;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar121 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar95));
      in_ZMM31 = ZEXT3264(auVar121);
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar122 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      in_ZMM26 = ZEXT3264(auVar122);
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar123 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar108 = auVar123._0_16_;
      in_ZMM27 = ZEXT3264(auVar123);
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar124 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar109 = auVar124._0_16_;
      in_ZMM28 = ZEXT3264(auVar124);
      auVar119._16_16_ = ZEXT116(0) * auVar112._16_16_ | ZEXT116(1) * auVar113._0_16_;
      auVar119._0_16_ = ZEXT116(0) * auVar113._0_16_ | ZEXT116(1) * auVar112._0_16_;
      auVar189 = vpslld_avx2(auVar119,4);
      auVar125 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar126 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
      auVar127 = vgatherdps_avx512vl(*param_1);
      unaff_RBX = uVar96 & 0xffffffff;
      auVar119 = *(undefined1 (*) [32])(param_3 + unaff_RBX);
      auVar128 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar129 = vsubps_avx512vl(auVar115,auVar121);
      auVar112 = vsubps_avx512vl(auVar116,auVar122);
      auVar113 = vsubps_avx512vl(auVar117,auVar123);
      auVar129 = vfmadd213ps_avx512vl(auVar129,auVar119,auVar121);
      auVar112 = vfmadd213ps_avx512vl(auVar112,auVar119,auVar122);
      auVar113 = vfmadd213ps_avx512vl(auVar113,auVar119,auVar123);
      auVar129 = vsubps_avx(auVar125,auVar129);
      auVar112 = vsubps_avx512vl(auVar126,auVar112);
      auVar113 = vsubps_avx512vl(auVar127,auVar113);
      auVar130 = vmulps_avx512vl(auVar112,auVar112);
      auVar130 = vfmadd231ps_avx512vl(auVar130,auVar129,auVar129);
      auVar130 = vfmadd231ps_avx512vl(auVar130,auVar113,auVar113);
      auVar130 = vsqrtps_avx512vl(auVar130);
      auVar131 = vsubps_avx512vl(auVar136,auVar119);
      auVar129 = vdivps_avx512vl(auVar129,auVar130);
      auVar112 = vdivps_avx512vl(auVar112,auVar130);
      auVar113 = vdivps_avx512vl(auVar113,auVar130);
      auVar132 = vsubps_avx512vl(auVar130,*(undefined1 (*) [32])(param_4 + unaff_RBX));
      auVar129 = vmulps_avx512vl(auVar129,auVar132);
      auVar112 = vmulps_avx512vl(auVar112,auVar132);
      auVar132 = vmulps_avx512vl(auVar113,auVar132);
      auVar113 = vmulps_avx512vl(auVar131,auVar124);
      auVar133 = vfmadd231ps_avx512vl(auVar113,auVar119,auVar118);
      auVar106 = auVar133._0_16_;
      auVar134 = vaddps_avx512vl(auVar133,auVar128);
      auVar113._4_4_ = param_5;
      auVar113._0_4_ = param_5;
      auVar113._8_4_ = param_5;
      auVar113._12_4_ = param_5;
      auVar113._16_4_ = param_5;
      auVar113._20_4_ = param_5;
      auVar113._24_4_ = param_5;
      auVar113._28_4_ = param_5;
      auVar129 = vmulps_avx512vl(auVar113,auVar129);
      auVar112 = vmulps_avx512vl(auVar113,auVar112);
      auVar113 = vmulps_avx512vl(auVar113,auVar132);
      auVar110 = auVar113._0_16_;
      auVar132 = vdivps_avx512vl(auVar129,auVar134);
      auVar135 = vdivps_avx512vl(auVar112,auVar134);
      auVar113 = vdivps_avx512vl(auVar113,auVar134);
      uVar89 = vcmpps_avx512vl(auVar128,ZEXT1632(auVar104),0);
      uVar90 = vcmpps_avx512vl(auVar133,ZEXT1632(auVar104),0);
      auVar129._4_4_ = __real_322bcc77;
      auVar129._0_4_ = __real_322bcc77;
      auVar129._8_4_ = __real_322bcc77;
      auVar129._12_4_ = __real_322bcc77;
      auVar129._16_4_ = __real_322bcc77;
      auVar129._20_4_ = __real_322bcc77;
      auVar129._24_4_ = __real_322bcc77;
      auVar129._28_4_ = __real_322bcc77;
      uVar91 = vcmpps_avx512vl(auVar130,auVar129,2);
      auVar129 = vmaxps_avx512vl(auVar119,auVar131);
      auVar129 = vaddps_avx512vl(auVar129,auVar136);
      auVar112._4_4_ = __real_40000000;
      auVar112._0_4_ = __real_40000000;
      auVar112._8_4_ = __real_40000000;
      auVar112._12_4_ = __real_40000000;
      auVar112._16_4_ = __real_40000000;
      auVar112._20_4_ = __real_40000000;
      auVar112._24_4_ = __real_40000000;
      auVar112._28_4_ = __real_40000000;
      auVar129 = vdivps_avx512vl(auVar112,auVar129);
      bVar98 = (byte)uVar91 | (byte)uVar89 & (byte)uVar90;
      iVar100 = auVar104._0_4_;
      auVar130._0_4_ = (uint)(bVar98 & 1) * iVar100 | (uint)!(bool)(bVar98 & 1) * auVar132._0_4_;
      bVar25 = (bool)(bVar98 >> 1 & 1);
      iVar146 = auVar104._4_4_;
      auVar130._4_4_ = (uint)bVar25 * iVar146 | (uint)!bVar25 * auVar132._4_4_;
      bVar25 = (bool)(bVar98 >> 2 & 1);
      iVar150 = auVar104._8_4_;
      auVar130._8_4_ = (uint)bVar25 * iVar150 | (uint)!bVar25 * auVar132._8_4_;
      bVar25 = (bool)(bVar98 >> 3 & 1);
      iVar154 = auVar104._12_4_;
      auVar130._12_4_ = (uint)bVar25 * iVar154 | (uint)!bVar25 * auVar132._12_4_;
      auVar130._16_4_ = (uint)!(bool)(bVar98 >> 4 & 1) * auVar132._16_4_;
      auVar130._20_4_ = (uint)!(bool)(bVar98 >> 5 & 1) * auVar132._20_4_;
      auVar130._24_4_ = (uint)!(bool)(bVar98 >> 6 & 1) * auVar132._24_4_;
      auVar130._28_4_ =
           (uint)(bVar98 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!(bool)(bVar98 >> 7) * auVar132._28_4_;
      auVar107._0_4_ = (uint)(bVar98 & 1) * iVar100 | (uint)!(bool)(bVar98 & 1) * auVar135._0_4_;
      bVar25 = (bool)(bVar98 >> 1 & 1);
      auVar107._4_4_ = (uint)bVar25 * iVar146 | (uint)!bVar25 * auVar135._4_4_;
      bVar25 = (bool)(bVar98 >> 2 & 1);
      auVar107._8_4_ = (uint)bVar25 * iVar150 | (uint)!bVar25 * auVar135._8_4_;
      bVar25 = (bool)(bVar98 >> 3 & 1);
      auVar107._12_4_ = (uint)bVar25 * iVar154 | (uint)!bVar25 * auVar135._12_4_;
      auVar132._16_4_ = (uint)!(bool)(bVar98 >> 4 & 1) * auVar135._16_4_;
      auVar132._0_16_ = auVar107;
      auVar132._20_4_ = (uint)!(bool)(bVar98 >> 5 & 1) * auVar135._20_4_;
      auVar132._24_4_ = (uint)!(bool)(bVar98 >> 6 & 1) * auVar135._24_4_;
      auVar132._28_4_ = (uint)!(bool)(bVar98 >> 7) * auVar135._28_4_;
      auVar133._0_4_ =
           (float)((uint)(bVar98 & 1) * iVar100 | (uint)!(bool)(bVar98 & 1) * auVar113._0_4_);
      bVar25 = (bool)(bVar98 >> 1 & 1);
      auVar133._4_4_ = (float)((uint)bVar25 * iVar146 | (uint)!bVar25 * auVar113._4_4_);
      bVar25 = (bool)(bVar98 >> 2 & 1);
      auVar133._8_4_ = (float)((uint)bVar25 * iVar150 | (uint)!bVar25 * auVar113._8_4_);
      bVar25 = (bool)(bVar98 >> 3 & 1);
      auVar133._12_4_ = (float)((uint)bVar25 * iVar154 | (uint)!bVar25 * auVar113._12_4_);
      fVar5 = (float)((uint)!(bool)(bVar98 >> 4 & 1) * auVar113._16_4_);
      auVar133._16_4_ = fVar5;
      fVar6 = (float)((uint)!(bool)(bVar98 >> 5 & 1) * auVar113._20_4_);
      auVar133._20_4_ = fVar6;
      fVar7 = (float)((uint)!(bool)(bVar98 >> 6 & 1) * auVar113._24_4_);
      auVar133._24_4_ = fVar7;
      fVar8 = (float)((uint)!(bool)(bVar98 >> 7) * auVar113._28_4_);
      auVar133._28_4_ = fVar8;
      uVar89 = vcmpps_avx512vl(ZEXT1632(auVar104),auVar128,1);
      if ((char)uVar89 != '\0') {
        auVar112 = vmulps_avx512vl(auVar128,auVar129);
        auVar113 = vfnmadd231ps_avx512vl(auVar125,auVar112,auVar130);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar189,uVar89,auVar113);
        auVar113 = vfnmadd231ps_avx512vl(auVar126,auVar112,auVar132);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar189 | auVar137),uVar89,auVar113);
        auVar127 = vfnmadd231ps_avx512vl(auVar127,auVar133,auVar112);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar189 | auVar139),uVar89,auVar127);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar189 | auVar138),uVar89,auVar128);
      }
      in_ZMM21 = ZEXT3264(auVar127);
      uVar89 = vcmpps_avx512vl(auVar118,ZEXT1632(auVar104),0xc);
      if ((char)uVar89 != '\0') {
        auVar112 = vmulps_avx512vl(auVar118,auVar129);
        auVar125._0_4_ = auVar119._0_4_ * auVar112._0_4_;
        auVar125._4_4_ = auVar119._4_4_ * auVar112._4_4_;
        auVar125._8_4_ = auVar119._8_4_ * auVar112._8_4_;
        auVar125._12_4_ = auVar119._12_4_ * auVar112._12_4_;
        auVar125._16_4_ = auVar119._16_4_ * auVar112._16_4_;
        auVar125._20_4_ = auVar119._20_4_ * auVar112._20_4_;
        auVar125._24_4_ = auVar119._24_4_ * auVar112._24_4_;
        auVar125._28_4_ = auVar119._28_4_ * auVar112._28_4_;
        auVar115 = vfmadd231ps_avx512vl(auVar115,auVar125,auVar130);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar119,uVar89,auVar115);
        auVar119 = vfmadd231ps_avx512vl(auVar116,auVar125,auVar132);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar114 | auVar137),uVar89,auVar119);
        auVar116._0_4_ = auVar133._0_4_ * auVar125._0_4_ + auVar117._0_4_;
        auVar116._4_4_ = auVar133._4_4_ * auVar125._4_4_ + auVar117._4_4_;
        auVar116._8_4_ = auVar133._8_4_ * auVar125._8_4_ + auVar117._8_4_;
        auVar116._12_4_ = auVar133._12_4_ * auVar125._12_4_ + auVar117._12_4_;
        auVar116._16_4_ = fVar5 * auVar125._16_4_ + auVar117._16_4_;
        auVar116._20_4_ = fVar6 * auVar125._20_4_ + auVar117._20_4_;
        auVar116._24_4_ = fVar7 * auVar125._24_4_ + auVar117._24_4_;
        auVar116._28_4_ = fVar8 * auVar125._28_4_ + auVar117._28_4_;
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar114 | auVar139),uVar89,auVar116);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar114 | auVar138),uVar89,auVar118);
      }
      uVar89 = vcmpps_avx512vl(auVar124,ZEXT1632(auVar104),0xc);
      if ((char)uVar89 != '\0') {
        auVar119 = vmulps_avx512vl(auVar124,auVar129);
        auVar114._0_4_ = auVar131._0_4_ * auVar119._0_4_;
        auVar114._4_4_ = auVar131._4_4_ * auVar119._4_4_;
        auVar114._8_4_ = auVar131._8_4_ * auVar119._8_4_;
        auVar114._12_4_ = auVar131._12_4_ * auVar119._12_4_;
        auVar114._16_4_ = auVar131._16_4_ * auVar119._16_4_;
        auVar114._20_4_ = auVar131._20_4_ * auVar119._20_4_;
        auVar114._24_4_ = auVar131._24_4_ * auVar119._24_4_;
        auVar114._28_4_ = auVar131._28_4_ * auVar119._28_4_;
        auVar119 = vfmadd213ps_avx512vl(auVar130,auVar114,auVar121);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar115,uVar89,auVar119);
        auVar119 = vfmadd213ps_avx512vl(auVar132,auVar114,auVar122);
        auVar107 = auVar119._0_16_;
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar120 | auVar137),uVar89,auVar119);
        auVar119 = vfmadd213ps_avx512vl(auVar133,auVar114,auVar123);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar120 | auVar139),uVar89,auVar119);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar120 | auVar138),uVar89,auVar124);
      }
      uVar96 = uVar96 + 0x20;
      pauVar95 = pauVar95 + 3;
      uVar93 = (int)uVar99 + 8;
      uVar99 = (ulonglong)uVar93;
    } while ((int)uVar93 < (int)uVar97);
  }
  if ((int)uVar99 < (int)param_6) {
    auVar136 = vpbroadcastd_avx512vl();
    auVar136 = vpor_avx2(auVar136,
                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar119 = vpbroadcastd_avx512vl();
    uVar96 = vpcmpgtd_avx512vl(auVar119,auVar136);
    pauVar95 = (undefined1 (*) [32])(param_2 + uVar99 * 0xc);
    bVar98 = (byte)uVar96;
    if (bVar98 == 0xff) {
      auVar136 = pauVar95[1];
      auVar119 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar95,auVar136);
      auVar129 = vpermi2d_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar95[2],auVar136);
      auVar118._16_16_ = ZEXT116(0) * auVar119._16_16_ | ZEXT116(1) * auVar129._0_16_;
      auVar118._0_16_ = ZEXT116(0) * auVar129._0_16_ | ZEXT116(1) * auVar119._0_16_;
      auVar117 = vperm2i128_avx2(auVar119,auVar129,0x31);
      auVar136 = vpblendd_avx2(auVar136,*pauVar95,0x24);
      auVar120 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar136,pauVar95[2]);
    }
    else {
      auVar136 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar95 + (longlong)param_1));
      auVar118._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * auVar136._4_4_;
      auVar118._0_4_ = (uint)(bVar98 & 1) * auVar136._0_4_;
      auVar118._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * auVar136._8_4_;
      auVar118._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * auVar136._12_4_;
      auVar118._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * auVar136._16_4_;
      auVar118._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * auVar136._20_4_;
      auVar118._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * auVar136._24_4_;
      auVar118._28_4_ = (uint)(byte)(uVar96 >> 7) * auVar136._28_4_;
      auVar136 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar95 + (longlong)param_1));
      auVar117._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * auVar136._4_4_;
      auVar117._0_4_ = (uint)(bVar98 & 1) * auVar136._0_4_;
      auVar117._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * auVar136._8_4_;
      auVar117._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * auVar136._12_4_;
      auVar117._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * auVar136._16_4_;
      auVar117._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * auVar136._20_4_;
      auVar117._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * auVar136._24_4_;
      auVar117._28_4_ = (uint)(byte)(uVar96 >> 7) * auVar136._28_4_;
      auVar136 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar95 + unaff_RBX));
      auVar120._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * auVar136._4_4_;
      auVar120._0_4_ = (uint)(bVar98 & 1) * auVar136._0_4_;
      auVar120._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * auVar136._8_4_;
      auVar120._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * auVar136._12_4_;
      auVar120._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * auVar136._16_4_;
      auVar120._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * auVar136._20_4_;
      auVar120._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * auVar136._24_4_;
      auVar120._28_4_ = (uint)(byte)(uVar96 >> 7) * auVar136._28_4_;
    }
    vpslld_avx512vl(auVar117,4);
    auVar137 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar105 = vxorps_avx512vl(auVar105,auVar105);
    auVar136 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar99));
    auVar104._0_4_ =
         (uint)(bVar98 & 1) * auVar136._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar105._0_4_;
    bVar25 = (bool)((byte)(uVar96 >> 1) & 1);
    auVar104._4_4_ = (uint)bVar25 * auVar136._4_4_ | (uint)!bVar25 * auVar105._4_4_;
    bVar25 = (bool)((byte)(uVar96 >> 2) & 1);
    auVar104._8_4_ = (uint)bVar25 * auVar136._8_4_ | (uint)!bVar25 * auVar105._8_4_;
    bVar25 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar104._12_4_ = (uint)bVar25 * auVar136._12_4_ | (uint)!bVar25 * auVar105._12_4_;
    auVar105 = vxorps_avx512vl(auVar106,auVar106);
    auVar119 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar25 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar39 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar52 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar113 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar106 = vxorps_avx512vl(auVar110,auVar110);
    auVar129 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar95));
    bVar26 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar40 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar53 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar114 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar107 = vxorps_avx512vl(auVar107,auVar107);
    auVar112 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    auVar115._0_4_ =
         (uint)(bVar98 & 1) * auVar112._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar107._0_4_;
    bVar27 = (bool)((byte)(uVar96 >> 1) & 1);
    auVar115._4_4_ = (uint)bVar27 * auVar112._4_4_ | (uint)!bVar27 * auVar107._4_4_;
    bVar27 = (bool)((byte)(uVar96 >> 2) & 1);
    auVar115._8_4_ = (uint)bVar27 * auVar112._8_4_ | (uint)!bVar27 * auVar107._8_4_;
    bVar27 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar115._12_4_ = (uint)bVar27 * auVar112._12_4_ | (uint)!bVar27 * auVar107._12_4_;
    auVar115._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * auVar112._16_4_;
    auVar115._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * auVar112._20_4_;
    auVar115._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * auVar112._24_4_;
    auVar115._28_4_ = (uint)(byte)(uVar96 >> 7) * auVar112._28_4_;
    auVar125 = vpslld_avx2(auVar120,4);
    auVar107 = vxorps_avx512vl(auVar108,auVar108);
    auVar112 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar27 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar41 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar54 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar108 = vxorps_avx512vl(auVar109,auVar109);
    auVar138 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar95));
    bVar28 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar42 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar55 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar109 = vxorps_avx512vl(auVar111,auVar111);
    auVar139 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar95));
    bVar29 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar43 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar56 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar116 = vgatherdps_avx512vl(*param_1);
    fVar1 = (float)((uint)(bVar98 & 1) * auVar116._0_4_);
    fVar7 = (float)((uint)((byte)(uVar96 >> 1) & 1) * auVar116._4_4_);
    auVar189._4_4_ = fVar7;
    auVar189._0_4_ = fVar1;
    fVar8 = (float)((uint)((byte)(uVar96 >> 2) & 1) * auVar116._8_4_);
    auVar189._8_4_ = fVar8;
    fVar5 = (float)((uint)((byte)(uVar96 >> 3) & 1) * auVar116._12_4_);
    auVar189._12_4_ = fVar5;
    fVar6 = (float)((uint)((byte)(uVar96 >> 4) & 1) * auVar116._16_4_);
    auVar189._16_4_ = fVar6;
    fVar2 = (float)((uint)((byte)(uVar96 >> 5) & 1) * auVar116._20_4_);
    auVar189._20_4_ = fVar2;
    fVar3 = (float)((uint)((byte)(uVar96 >> 6) & 1) * auVar116._24_4_);
    auVar189._24_4_ = fVar3;
    fVar4 = (float)((uint)(byte)(uVar96 >> 7) * auVar116._28_4_);
    auVar189._28_4_ = fVar4;
    bVar30 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar44 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar57 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar65 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar71 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar77 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar83 = SUB81(uVar96 >> 7,0);
    bVar31 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar45 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar58 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar66 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar72 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar78 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar84 = SUB81(uVar96 >> 7,0);
    bVar32 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar46 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar59 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar67 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar73 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar79 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar85 = SUB81(uVar96 >> 7,0);
    bVar33 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar47 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar60 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar68 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar74 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar80 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar86 = SUB81(uVar96 >> 7,0);
    bVar34 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar48 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar61 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar69 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar75 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar81 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar87 = SUB81(uVar96 >> 7,0);
    bVar35 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar49 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar62 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar70 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar76 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar82 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar88 = SUB81(uVar96 >> 7,0);
    vpslld_avx512vl(auVar118,4);
    auVar116 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar97));
    auVar110 = vxorps_avx512vl(auVar137._0_16_,auVar137._0_16_);
    auVar117 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
    bVar36 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar50 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar63 = (bool)((byte)(uVar96 >> 3) & 1);
    lVar94 = (longlong)((int)uVar99 << 2);
    auVar111 = vxorps_avx512vl(auVar104,auVar104);
    auVar118 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
    bVar37 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar51 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar64 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar120 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
    fVar171 = (float)((uint)(bVar98 & 1) * auVar120._0_4_);
    fVar173 = (float)((uint)((byte)(uVar96 >> 1) & 1) * auVar120._4_4_);
    auVar140._4_4_ = fVar173;
    auVar140._0_4_ = fVar171;
    fVar174 = (float)((uint)((byte)(uVar96 >> 2) & 1) * auVar120._8_4_);
    auVar140._8_4_ = fVar174;
    fVar175 = (float)((uint)((byte)(uVar96 >> 3) & 1) * auVar120._12_4_);
    auVar140._12_4_ = fVar175;
    fVar176 = (float)((uint)((byte)(uVar96 >> 4) & 1) * auVar120._16_4_);
    auVar140._16_4_ = fVar176;
    fVar177 = (float)((uint)((byte)(uVar96 >> 5) & 1) * auVar120._20_4_);
    auVar140._20_4_ = fVar177;
    fVar178 = (float)((uint)((byte)(uVar96 >> 6) & 1) * auVar120._24_4_);
    auVar140._24_4_ = fVar178;
    fVar179 = (float)((uint)(byte)(uVar96 >> 7) * auVar120._28_4_);
    auVar140._28_4_ = fVar179;
    piVar24 = (int *)(param_3 + lVar94);
    auVar141._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * piVar24[1];
    auVar141._0_4_ = (uint)(bVar98 & 1) * *piVar24;
    auVar141._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * piVar24[2];
    auVar141._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * piVar24[3];
    auVar141._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * piVar24[4];
    auVar141._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * piVar24[5];
    auVar141._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * piVar24[6];
    auVar141._28_4_ = (uint)(byte)(uVar96 >> 7) * piVar24[7];
    fVar101 = (float)((uint)(bVar98 & 1) * (uint)(bVar98 & 1) * auVar116._0_4_ |
                     (uint)!(bool)(bVar98 & 1) * local_140);
    bVar38 = (bool)((byte)(uVar96 >> 1) & 1);
    fVar147 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 1) & 1) * auVar116._4_4_ |
                     (uint)!bVar38 * iStack_13c);
    bVar38 = (bool)((byte)(uVar96 >> 2) & 1);
    fVar151 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 2) & 1) * auVar116._8_4_ |
                     (uint)!bVar38 * iStack_138);
    bVar38 = (bool)((byte)(uVar96 >> 3) & 1);
    fVar155 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 3) & 1) * auVar116._12_4_ |
                     (uint)!bVar38 * iStack_134);
    bVar38 = (bool)((byte)(uVar96 >> 4) & 1);
    fVar158 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 4) & 1) * auVar116._16_4_ |
                     (uint)!bVar38 * iStack_130);
    bVar38 = (bool)((byte)(uVar96 >> 5) & 1);
    fVar161 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 5) & 1) * auVar116._20_4_ |
                     (uint)!bVar38 * iStack_12c);
    bVar38 = (bool)((byte)(uVar96 >> 6) & 1);
    fVar164 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 6) & 1) * auVar116._24_4_ |
                     (uint)!bVar38 * iStack_128);
    bVar38 = SUB81(uVar96 >> 7,0);
    fVar167 = (float)((uint)bVar38 * (uint)(byte)(uVar96 >> 7) * auVar116._28_4_ |
                     (uint)!bVar38 * iStack_124);
    fVar102 = (float)((uint)(bVar98 & 1) *
                      ((uint)(bVar98 & 1) * auVar117._0_4_ |
                      (uint)!(bool)(bVar98 & 1) * auVar110._0_4_) |
                     (uint)!(bool)(bVar98 & 1) * local_120);
    bVar38 = (bool)((byte)(uVar96 >> 1) & 1);
    fVar148 = (float)((uint)bVar38 *
                      ((uint)bVar36 * auVar117._4_4_ | (uint)!bVar36 * auVar110._4_4_) |
                     (uint)!bVar38 * iStack_11c);
    bVar36 = (bool)((byte)(uVar96 >> 2) & 1);
    fVar152 = (float)((uint)bVar36 *
                      ((uint)bVar50 * auVar117._8_4_ | (uint)!bVar50 * auVar110._8_4_) |
                     (uint)!bVar36 * iStack_118);
    bVar36 = (bool)((byte)(uVar96 >> 3) & 1);
    fVar156 = (float)((uint)bVar36 *
                      ((uint)bVar63 * auVar117._12_4_ | (uint)!bVar63 * auVar110._12_4_) |
                     (uint)!bVar36 * iStack_114);
    bVar36 = (bool)((byte)(uVar96 >> 4) & 1);
    fVar159 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 4) & 1) * auVar117._16_4_ |
                     (uint)!bVar36 * iStack_110);
    bVar36 = (bool)((byte)(uVar96 >> 5) & 1);
    fVar162 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 5) & 1) * auVar117._20_4_ |
                     (uint)!bVar36 * iStack_10c);
    bVar36 = (bool)((byte)(uVar96 >> 6) & 1);
    fVar165 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 6) & 1) * auVar117._24_4_ |
                     (uint)!bVar36 * iStack_108);
    bVar36 = SUB81(uVar96 >> 7,0);
    fVar168 = (float)((uint)bVar36 * (uint)(byte)(uVar96 >> 7) * auVar117._28_4_ |
                     (uint)!bVar36 * iStack_104);
    fVar103 = (float)((uint)(bVar98 & 1) *
                      ((uint)(bVar98 & 1) * auVar118._0_4_ |
                      (uint)!(bool)(bVar98 & 1) * auVar111._0_4_) |
                     (uint)!(bool)(bVar98 & 1) * local_100);
    bVar36 = (bool)((byte)(uVar96 >> 1) & 1);
    fVar149 = (float)((uint)bVar36 *
                      ((uint)bVar37 * auVar118._4_4_ | (uint)!bVar37 * auVar111._4_4_) |
                     (uint)!bVar36 * iStack_fc);
    bVar36 = (bool)((byte)(uVar96 >> 2) & 1);
    fVar153 = (float)((uint)bVar36 *
                      ((uint)bVar51 * auVar118._8_4_ | (uint)!bVar51 * auVar111._8_4_) |
                     (uint)!bVar36 * iStack_f8);
    bVar36 = (bool)((byte)(uVar96 >> 3) & 1);
    fVar157 = (float)((uint)bVar36 *
                      ((uint)bVar64 * auVar118._12_4_ | (uint)!bVar64 * auVar111._12_4_) |
                     (uint)!bVar36 * iStack_f4);
    bVar36 = (bool)((byte)(uVar96 >> 4) & 1);
    fVar160 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 4) & 1) * auVar118._16_4_ |
                     (uint)!bVar36 * iStack_f0);
    bVar36 = (bool)((byte)(uVar96 >> 5) & 1);
    fVar163 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 5) & 1) * auVar118._20_4_ |
                     (uint)!bVar36 * iStack_ec);
    bVar36 = (bool)((byte)(uVar96 >> 6) & 1);
    fVar166 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 6) & 1) * auVar118._24_4_ |
                     (uint)!bVar36 * iStack_e8);
    bVar36 = SUB81(uVar96 >> 7,0);
    fVar169 = (float)((uint)bVar36 * (uint)(byte)(uVar96 >> 7) * auVar118._28_4_ |
                     (uint)!bVar36 * iStack_e4);
    auVar126._4_4_ = bVar30 * auVar104._4_4_ | (uint)!bVar30 * iStack_19c;
    auVar126._0_4_ = (bVar98 & 1) * auVar104._0_4_ | (uint)!(bool)(bVar98 & 1) * local_1a0;
    auVar126._8_4_ = bVar44 * auVar104._8_4_ | (uint)!bVar44 * iStack_198;
    auVar126._12_4_ = bVar57 * auVar104._12_4_ | (uint)!bVar57 * iStack_194;
    auVar126._16_4_ =
         (uint)bVar65 * (uint)((byte)(uVar96 >> 4) & 1) * auVar136._16_4_ |
         (uint)!bVar65 * iStack_190;
    auVar126._20_4_ =
         (uint)bVar71 * (uint)((byte)(uVar96 >> 5) & 1) * auVar136._20_4_ |
         (uint)!bVar71 * iStack_18c;
    auVar126._24_4_ =
         (uint)bVar77 * (uint)((byte)(uVar96 >> 6) & 1) * auVar136._24_4_ |
         (uint)!bVar77 * iStack_188;
    auVar126._28_4_ =
         (uint)bVar83 * (uint)(byte)(uVar96 >> 7) * auVar136._28_4_ | (uint)!bVar83 * iStack_184;
    auVar128._4_4_ =
         (uint)bVar31 * ((uint)bVar25 * auVar119._4_4_ | (uint)!bVar25 * auVar105._4_4_) |
         (uint)!bVar31 * iStack_17c;
    auVar128._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar119._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar105._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_180;
    auVar128._8_4_ =
         (uint)bVar45 * ((uint)bVar39 * auVar119._8_4_ | (uint)!bVar39 * auVar105._8_4_) |
         (uint)!bVar45 * iStack_178;
    auVar128._12_4_ =
         (uint)bVar58 * ((uint)bVar52 * auVar119._12_4_ | (uint)!bVar52 * auVar105._12_4_) |
         (uint)!bVar58 * iStack_174;
    auVar128._16_4_ =
         (uint)bVar66 * (uint)((byte)(uVar96 >> 4) & 1) * auVar119._16_4_ |
         (uint)!bVar66 * iStack_170;
    auVar128._20_4_ =
         (uint)bVar72 * (uint)((byte)(uVar96 >> 5) & 1) * auVar119._20_4_ |
         (uint)!bVar72 * iStack_16c;
    auVar128._24_4_ =
         (uint)bVar78 * (uint)((byte)(uVar96 >> 6) & 1) * auVar119._24_4_ |
         (uint)!bVar78 * iStack_168;
    auVar128._28_4_ =
         (uint)bVar84 * (uint)(byte)(uVar96 >> 7) * auVar119._28_4_ | (uint)!bVar84 * iStack_164;
    auVar131._4_4_ =
         (uint)bVar32 * ((uint)bVar26 * auVar129._4_4_ | (uint)!bVar26 * auVar106._4_4_) |
         (uint)!bVar32 * iStack_15c;
    auVar131._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar129._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar106._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_160;
    auVar131._8_4_ =
         (uint)bVar46 * ((uint)bVar40 * auVar129._8_4_ | (uint)!bVar40 * auVar106._8_4_) |
         (uint)!bVar46 * iStack_158;
    auVar131._12_4_ =
         (uint)bVar59 * ((uint)bVar53 * auVar129._12_4_ | (uint)!bVar53 * auVar106._12_4_) |
         (uint)!bVar59 * iStack_154;
    auVar131._16_4_ =
         (uint)bVar67 * (uint)((byte)(uVar96 >> 4) & 1) * auVar129._16_4_ |
         (uint)!bVar67 * iStack_150;
    auVar131._20_4_ =
         (uint)bVar73 * (uint)((byte)(uVar96 >> 5) & 1) * auVar129._20_4_ |
         (uint)!bVar73 * iStack_14c;
    auVar131._24_4_ =
         (uint)bVar79 * (uint)((byte)(uVar96 >> 6) & 1) * auVar129._24_4_ |
         (uint)!bVar79 * iStack_148;
    auVar131._28_4_ =
         (uint)bVar85 * (uint)(byte)(uVar96 >> 7) * auVar129._28_4_ | (uint)!bVar85 * iStack_144;
    auVar122._4_4_ =
         (uint)bVar33 * ((uint)bVar27 * auVar112._4_4_ | (uint)!bVar27 * auVar107._4_4_) |
         (uint)!bVar33 * iStack_1fc;
    auVar122._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar112._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar107._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_200;
    auVar122._8_4_ =
         (uint)bVar47 * ((uint)bVar41 * auVar112._8_4_ | (uint)!bVar41 * auVar107._8_4_) |
         (uint)!bVar47 * iStack_1f8;
    auVar122._12_4_ =
         (uint)bVar60 * ((uint)bVar54 * auVar112._12_4_ | (uint)!bVar54 * auVar107._12_4_) |
         (uint)!bVar60 * iStack_1f4;
    auVar122._16_4_ =
         (uint)bVar68 * (uint)((byte)(uVar96 >> 4) & 1) * auVar112._16_4_ |
         (uint)!bVar68 * iStack_1f0;
    auVar122._20_4_ =
         (uint)bVar74 * (uint)((byte)(uVar96 >> 5) & 1) * auVar112._20_4_ |
         (uint)!bVar74 * iStack_1ec;
    auVar122._24_4_ =
         (uint)bVar80 * (uint)((byte)(uVar96 >> 6) & 1) * auVar112._24_4_ |
         (uint)!bVar80 * iStack_1e8;
    auVar122._28_4_ =
         (uint)bVar86 * (uint)(byte)(uVar96 >> 7) * auVar112._28_4_ | (uint)!bVar86 * iStack_1e4;
    auVar123._4_4_ =
         (uint)bVar34 * ((uint)bVar28 * auVar138._4_4_ | (uint)!bVar28 * auVar108._4_4_) |
         (uint)!bVar34 * iStack_1dc;
    auVar123._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar138._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar108._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_1e0;
    auVar123._8_4_ =
         (uint)bVar48 * ((uint)bVar42 * auVar138._8_4_ | (uint)!bVar42 * auVar108._8_4_) |
         (uint)!bVar48 * iStack_1d8;
    auVar123._12_4_ =
         (uint)bVar61 * ((uint)bVar55 * auVar138._12_4_ | (uint)!bVar55 * auVar108._12_4_) |
         (uint)!bVar61 * iStack_1d4;
    auVar123._16_4_ =
         (uint)bVar69 * (uint)((byte)(uVar96 >> 4) & 1) * auVar138._16_4_ |
         (uint)!bVar69 * iStack_1d0;
    auVar123._20_4_ =
         (uint)bVar75 * (uint)((byte)(uVar96 >> 5) & 1) * auVar138._20_4_ |
         (uint)!bVar75 * iStack_1cc;
    auVar123._24_4_ =
         (uint)bVar81 * (uint)((byte)(uVar96 >> 6) & 1) * auVar138._24_4_ |
         (uint)!bVar81 * iStack_1c8;
    auVar123._28_4_ =
         (uint)bVar87 * (uint)(byte)(uVar96 >> 7) * auVar138._28_4_ | (uint)!bVar87 * iStack_1c4;
    auVar124._4_4_ =
         (uint)bVar35 * ((uint)bVar29 * auVar139._4_4_ | (uint)!bVar29 * auVar109._4_4_) |
         (uint)!bVar35 * iStack_1bc;
    auVar124._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar139._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar109._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_1c0;
    auVar124._8_4_ =
         (uint)bVar49 * ((uint)bVar43 * auVar139._8_4_ | (uint)!bVar43 * auVar109._8_4_) |
         (uint)!bVar49 * iStack_1b8;
    auVar124._12_4_ =
         (uint)bVar62 * ((uint)bVar56 * auVar139._12_4_ | (uint)!bVar56 * auVar109._12_4_) |
         (uint)!bVar62 * iStack_1b4;
    auVar124._16_4_ =
         (uint)bVar70 * (uint)((byte)(uVar96 >> 4) & 1) * auVar139._16_4_ |
         (uint)!bVar70 * iStack_1b0;
    auVar124._20_4_ =
         (uint)bVar76 * (uint)((byte)(uVar96 >> 5) & 1) * auVar139._20_4_ |
         (uint)!bVar76 * iStack_1ac;
    auVar124._24_4_ =
         (uint)bVar82 * (uint)((byte)(uVar96 >> 6) & 1) * auVar139._24_4_ |
         (uint)!bVar82 * iStack_1a8;
    auVar124._28_4_ =
         (uint)bVar88 * (uint)(byte)(uVar96 >> 7) * auVar139._28_4_ | (uint)!bVar88 * iStack_1a4;
    auVar136 = vsubps_avx512vl(auVar126,auVar122);
    auVar119 = vsubps_avx512vl(auVar128,auVar123);
    auVar129 = vsubps_avx512vl(auVar131,auVar124);
    auVar136 = vfmadd213ps_avx512vl(auVar136,auVar141,auVar122);
    auVar112 = vfmadd213ps_avx512vl(auVar119,auVar141,auVar123);
    auVar134._4_4_ = fVar147;
    auVar134._0_4_ = fVar101;
    auVar134._8_4_ = fVar151;
    auVar134._12_4_ = fVar155;
    auVar134._16_4_ = fVar158;
    auVar134._20_4_ = fVar161;
    auVar134._24_4_ = fVar164;
    auVar134._28_4_ = fVar167;
    auVar135._4_4_ = fVar148;
    auVar135._0_4_ = fVar102;
    auVar135._8_4_ = fVar152;
    auVar135._12_4_ = fVar156;
    auVar135._16_4_ = fVar159;
    auVar135._20_4_ = fVar162;
    auVar135._24_4_ = fVar165;
    auVar135._28_4_ = fVar168;
    auVar138 = vfmadd213ps_avx512vl(auVar129,auVar141,auVar124);
    auVar127._4_4_ = fVar149;
    auVar127._0_4_ = fVar103;
    auVar127._8_4_ = fVar153;
    auVar127._12_4_ = fVar157;
    auVar127._16_4_ = fVar160;
    auVar127._20_4_ = fVar163;
    auVar127._24_4_ = fVar166;
    auVar127._28_4_ = fVar169;
    auVar119 = vsubps_avx(auVar134,auVar136);
    auVar181._4_4_ = __real_3f800000;
    auVar181._0_4_ = __real_3f800000;
    auVar181._8_4_ = __real_3f800000;
    auVar181._12_4_ = __real_3f800000;
    auVar181._16_4_ = __real_3f800000;
    auVar181._20_4_ = __real_3f800000;
    auVar181._24_4_ = __real_3f800000;
    auVar181._28_4_ = __real_3f800000;
    auVar129 = vsubps_avx(auVar135,auVar112);
    auVar116 = vsubps_avx512vl(auVar181,auVar141);
    auVar136 = vmaxps_avx512vl(auVar141,auVar116);
    auVar182._0_4_ = auVar136._0_4_ + __real_3f800000;
    auVar182._4_4_ = auVar136._4_4_ + __real_3f800000;
    auVar182._8_4_ = auVar136._8_4_ + __real_3f800000;
    auVar182._12_4_ = auVar136._12_4_ + __real_3f800000;
    auVar182._16_4_ = auVar136._16_4_ + __real_3f800000;
    auVar182._20_4_ = auVar136._20_4_ + __real_3f800000;
    auVar182._24_4_ = auVar136._24_4_ + __real_3f800000;
    auVar182._28_4_ = auVar136._28_4_ + __real_3f800000;
    auVar190._4_4_ = __real_40000000;
    auVar190._0_4_ = __real_40000000;
    auVar190._8_4_ = __real_40000000;
    auVar190._12_4_ = __real_40000000;
    auVar190._16_4_ = __real_40000000;
    auVar190._20_4_ = __real_40000000;
    auVar190._24_4_ = __real_40000000;
    auVar190._28_4_ = __real_40000000;
    auVar112 = vsubps_avx(auVar127,auVar138);
    auVar136 = vdivps_avx(auVar190,auVar182);
    auVar183._0_4_ =
         auVar112._0_4_ * auVar112._0_4_ +
         auVar119._0_4_ * auVar119._0_4_ + auVar129._0_4_ * auVar129._0_4_;
    auVar183._4_4_ =
         auVar112._4_4_ * auVar112._4_4_ +
         auVar119._4_4_ * auVar119._4_4_ + auVar129._4_4_ * auVar129._4_4_;
    auVar183._8_4_ =
         auVar112._8_4_ * auVar112._8_4_ +
         auVar119._8_4_ * auVar119._8_4_ + auVar129._8_4_ * auVar129._8_4_;
    auVar183._12_4_ =
         auVar112._12_4_ * auVar112._12_4_ +
         auVar119._12_4_ * auVar119._12_4_ + auVar129._12_4_ * auVar129._12_4_;
    auVar183._16_4_ =
         auVar112._16_4_ * auVar112._16_4_ +
         auVar119._16_4_ * auVar119._16_4_ + auVar129._16_4_ * auVar129._16_4_;
    auVar183._20_4_ =
         auVar112._20_4_ * auVar112._20_4_ +
         auVar119._20_4_ * auVar119._20_4_ + auVar129._20_4_ * auVar129._20_4_;
    auVar183._24_4_ =
         auVar112._24_4_ * auVar112._24_4_ +
         auVar119._24_4_ * auVar119._24_4_ + auVar129._24_4_ * auVar129._24_4_;
    auVar183._28_4_ =
         auVar112._28_4_ * auVar112._28_4_ +
         auVar119._28_4_ * auVar119._28_4_ + auVar129._28_4_ * auVar129._28_4_;
    auVar138 = vsqrtps_avx(auVar183);
    auVar119 = vdivps_avx(auVar119,auVar138);
    auVar129 = vdivps_avx(auVar129,auVar138);
    auVar112 = vdivps_avx(auVar112,auVar138);
    piVar24 = (int *)(param_4 + lVar94);
    auVar142._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * piVar24[1];
    auVar142._0_4_ = (uint)(bVar98 & 1) * *piVar24;
    auVar142._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * piVar24[2];
    auVar142._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * piVar24[3];
    auVar142._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * piVar24[4];
    auVar142._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * piVar24[5];
    auVar142._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * piVar24[6];
    auVar142._28_4_ = (uint)(byte)(uVar96 >> 7) * piVar24[7];
    auVar139 = vsubps_avx(auVar138,auVar142);
    fVar188 = auVar139._0_4_;
    fVar192 = auVar139._4_4_;
    fVar193 = auVar139._8_4_;
    fVar194 = auVar139._12_4_;
    fVar195 = auVar139._16_4_;
    fVar196 = auVar139._20_4_;
    fVar197 = auVar139._24_4_;
    fVar198 = auVar139._28_4_;
    auVar170._0_4_ = param_5 * fVar188 * auVar119._0_4_;
    auVar170._4_4_ = param_5 * fVar192 * auVar119._4_4_;
    auVar170._8_4_ = param_5 * fVar193 * auVar119._8_4_;
    auVar170._12_4_ = param_5 * fVar194 * auVar119._12_4_;
    auVar170._16_4_ = param_5 * fVar195 * auVar119._16_4_;
    auVar170._20_4_ = param_5 * fVar196 * auVar119._20_4_;
    auVar170._24_4_ = param_5 * fVar197 * auVar119._24_4_;
    auVar170._28_4_ = param_5 * fVar198 * auVar119._28_4_;
    auVar184._0_4_ = param_5 * auVar129._0_4_ * fVar188;
    auVar184._4_4_ = param_5 * auVar129._4_4_ * fVar192;
    auVar184._8_4_ = param_5 * auVar129._8_4_ * fVar193;
    auVar184._12_4_ = param_5 * auVar129._12_4_ * fVar194;
    auVar184._16_4_ = param_5 * auVar129._16_4_ * fVar195;
    auVar184._20_4_ = param_5 * auVar129._20_4_ * fVar196;
    auVar184._24_4_ = param_5 * auVar129._24_4_ * fVar197;
    auVar184._28_4_ = param_5 * auVar129._28_4_ * fVar198;
    auVar191._0_4_ = param_5 * auVar112._0_4_ * fVar188;
    auVar191._4_4_ = param_5 * auVar112._4_4_ * fVar192;
    auVar191._8_4_ = param_5 * auVar112._8_4_ * fVar193;
    auVar191._12_4_ = param_5 * auVar112._12_4_ * fVar194;
    auVar191._16_4_ = param_5 * auVar112._16_4_ * fVar195;
    auVar191._20_4_ = param_5 * auVar112._20_4_ * fVar196;
    auVar191._24_4_ = param_5 * auVar112._24_4_ * fVar197;
    auVar191._28_4_ = param_5 * auVar112._28_4_ * fVar198;
    auVar199._0_4_ = auVar116._0_4_ * fVar1;
    auVar199._4_4_ = auVar116._4_4_ * fVar7;
    auVar199._8_4_ = auVar116._8_4_ * fVar8;
    auVar199._12_4_ = auVar116._12_4_ * fVar5;
    auVar199._16_4_ = auVar116._16_4_ * fVar6;
    auVar199._20_4_ = auVar116._20_4_ * fVar2;
    auVar199._24_4_ = auVar116._24_4_ * fVar3;
    auVar199._28_4_ = auVar116._28_4_ * fVar4;
    auVar139 = vfmadd231ps_avx512vl(auVar199,auVar141,auVar115);
    auVar180._0_4_ = auVar139._0_4_ + fVar171;
    auVar180._4_4_ = auVar139._4_4_ + fVar173;
    auVar180._8_4_ = auVar139._8_4_ + fVar174;
    auVar180._12_4_ = auVar139._12_4_ + fVar175;
    auVar180._16_4_ = auVar139._16_4_ + fVar176;
    auVar180._20_4_ = auVar139._20_4_ + fVar177;
    auVar180._24_4_ = auVar139._24_4_ + fVar178;
    auVar180._28_4_ = auVar139._28_4_ + fVar179;
    auVar119 = vdivps_avx(auVar170,auVar180);
    auVar129 = vdivps_avx(auVar184,auVar180);
    auVar112 = vdivps_avx(auVar191,auVar180);
    auVar92 = ZEXT412(0);
    uVar89 = vcmpps_avx512vl(auVar140,ZEXT1232(auVar92) << 0x20,0);
    uVar90 = vcmpps_avx512vl(auVar139,ZEXT1232(auVar92) << 0x20,0);
    auVar121._4_4_ = __real_322bcc77;
    auVar121._0_4_ = __real_322bcc77;
    auVar121._8_4_ = __real_322bcc77;
    auVar121._12_4_ = __real_322bcc77;
    auVar121._16_4_ = __real_322bcc77;
    auVar121._20_4_ = __real_322bcc77;
    auVar121._24_4_ = __real_322bcc77;
    auVar121._28_4_ = __real_322bcc77;
    uVar91 = vcmpps_avx512vl(auVar138,auVar121,2);
    bVar98 = (byte)uVar91 | (byte)uVar89 & (byte)uVar90;
    fVar188 = (float)((uint)!(bool)(bVar98 & 1) * auVar119._0_4_);
    fVar192 = (float)((uint)!(bool)(bVar98 >> 1 & 1) * auVar119._4_4_);
    auVar143._4_4_ = fVar192;
    auVar143._0_4_ = fVar188;
    fVar193 = (float)((uint)!(bool)(bVar98 >> 2 & 1) * auVar119._8_4_);
    auVar143._8_4_ = fVar193;
    fVar194 = (float)((uint)!(bool)(bVar98 >> 3 & 1) * auVar119._12_4_);
    auVar143._12_4_ = fVar194;
    fVar195 = (float)((uint)!(bool)(bVar98 >> 4 & 1) * auVar119._16_4_);
    auVar143._16_4_ = fVar195;
    fVar196 = (float)((uint)!(bool)(bVar98 >> 5 & 1) * auVar119._20_4_);
    auVar143._20_4_ = fVar196;
    fVar197 = (float)((uint)!(bool)(bVar98 >> 6 & 1) * auVar119._24_4_);
    auVar143._24_4_ = fVar197;
    auVar143._28_4_ =
         (float)((uint)(bVar98 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                (uint)!(bool)(bVar98 >> 7) * auVar119._28_4_);
    fVar198 = (float)((uint)!(bool)(bVar98 & 1) * auVar129._0_4_);
    fVar9 = (float)((uint)!(bool)(bVar98 >> 1 & 1) * auVar129._4_4_);
    auVar144._4_4_ = fVar9;
    auVar144._0_4_ = fVar198;
    fVar10 = (float)((uint)!(bool)(bVar98 >> 2 & 1) * auVar129._8_4_);
    auVar144._8_4_ = fVar10;
    fVar11 = (float)((uint)!(bool)(bVar98 >> 3 & 1) * auVar129._12_4_);
    auVar144._12_4_ = fVar11;
    fVar12 = (float)((uint)!(bool)(bVar98 >> 4 & 1) * auVar129._16_4_);
    auVar144._16_4_ = fVar12;
    fVar13 = (float)((uint)!(bool)(bVar98 >> 5 & 1) * auVar129._20_4_);
    auVar144._20_4_ = fVar13;
    fVar14 = (float)((uint)!(bool)(bVar98 >> 6 & 1) * auVar129._24_4_);
    auVar144._24_4_ = fVar14;
    fVar15 = (float)((uint)!(bool)(bVar98 >> 7) * auVar129._28_4_);
    auVar144._28_4_ = fVar15;
    fVar16 = (float)((uint)!(bool)(bVar98 & 1) * auVar112._0_4_);
    fVar17 = (float)((uint)!(bool)(bVar98 >> 1 & 1) * auVar112._4_4_);
    auVar145._4_4_ = fVar17;
    auVar145._0_4_ = fVar16;
    fVar18 = (float)((uint)!(bool)(bVar98 >> 2 & 1) * auVar112._8_4_);
    auVar145._8_4_ = fVar18;
    fVar19 = (float)((uint)!(bool)(bVar98 >> 3 & 1) * auVar112._12_4_);
    auVar145._12_4_ = fVar19;
    fVar20 = (float)((uint)!(bool)(bVar98 >> 4 & 1) * auVar112._16_4_);
    auVar145._16_4_ = fVar20;
    fVar21 = (float)((uint)!(bool)(bVar98 >> 5 & 1) * auVar112._20_4_);
    auVar145._20_4_ = fVar21;
    fVar22 = (float)((uint)!(bool)(bVar98 >> 6 & 1) * auVar112._24_4_);
    auVar145._24_4_ = fVar22;
    fVar23 = (float)((uint)!(bool)(bVar98 >> 7) * auVar112._28_4_);
    auVar145._28_4_ = fVar23;
    uVar99 = vcmpps_avx512vl(ZEXT1232(auVar92) << 0x20,auVar140,1);
    uVar99 = uVar96 & uVar99;
    if ((char)uVar99 != '\0') {
      fVar171 = auVar136._0_4_ * fVar171;
      fVar173 = auVar136._4_4_ * fVar173;
      fVar174 = auVar136._8_4_ * fVar174;
      fVar175 = auVar136._12_4_ * fVar175;
      fVar176 = auVar136._16_4_ * fVar176;
      fVar177 = auVar136._20_4_ * fVar177;
      fVar178 = auVar136._24_4_ * fVar178;
      fVar179 = auVar136._28_4_ * fVar179;
      auVar187._0_4_ = -(fVar171 * fVar188) + fVar101;
      auVar187._4_4_ = -(fVar173 * fVar192) + fVar147;
      auVar187._8_4_ = -(fVar174 * fVar193) + fVar151;
      auVar187._12_4_ = -(fVar175 * fVar194) + fVar155;
      auVar187._16_4_ = -(fVar176 * fVar195) + fVar158;
      auVar187._20_4_ = -(fVar177 * fVar196) + fVar161;
      auVar187._24_4_ = -(fVar178 * fVar197) + fVar164;
      auVar187._28_4_ = -(fVar179 * auVar143._28_4_) + fVar167;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar127,uVar99,auVar187);
      auVar186._0_4_ = -(fVar171 * fVar198) + fVar102;
      auVar186._4_4_ = -(fVar173 * fVar9) + fVar148;
      auVar186._8_4_ = -(fVar174 * fVar10) + fVar152;
      auVar186._12_4_ = -(fVar175 * fVar11) + fVar156;
      auVar186._16_4_ = -(fVar176 * fVar12) + fVar159;
      auVar186._20_4_ = -(fVar177 * fVar13) + fVar162;
      auVar186._24_4_ = -(fVar178 * fVar14) + fVar165;
      auVar186._28_4_ = -(fVar179 * fVar15) + fVar168;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar187,uVar99,auVar186);
      auVar185._0_4_ = -(fVar16 * fVar171) + fVar103;
      auVar185._4_4_ = -(fVar17 * fVar173) + fVar149;
      auVar185._8_4_ = -(fVar18 * fVar174) + fVar153;
      auVar185._12_4_ = -(fVar19 * fVar175) + fVar157;
      auVar185._16_4_ = -(fVar20 * fVar176) + fVar160;
      auVar185._20_4_ = -(fVar21 * fVar177) + fVar163;
      auVar185._24_4_ = -(fVar22 * fVar178) + fVar166;
      auVar185._28_4_ = -(fVar23 * fVar179) + fVar169;
      vscatterdps_avx512vl(ZEXT832(param_1) + (ZEXT1232(auVar92) << 0x20),uVar99,auVar185);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar139,uVar99,auVar140);
    }
    uVar99 = vcmpps_avx512vl(auVar115,ZEXT1232(auVar92) << 0x20,0xc);
    uVar99 = uVar96 & uVar99;
    if ((char)uVar99 != '\0') {
      auVar119 = vmulps_avx512vl(auVar115,auVar136);
      auVar119 = vmulps_avx512vl(auVar141,auVar119);
      auVar129 = vfmadd231ps_avx512vl(auVar126,auVar119,auVar143);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar145,uVar99,auVar129);
      auVar129 = vfmadd231ps_avx512vl(auVar128,auVar119,auVar144);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar125,uVar99,auVar129);
      auVar129 = vfmadd231ps_avx512vl(auVar131,auVar145,auVar119);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar119,uVar99,auVar129);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar180,uVar99,auVar115);
    }
    uVar99 = vcmpps_avx512vl(auVar189,ZEXT832(0) << 0x40,0xc);
    uVar96 = uVar96 & uVar99;
    if ((char)uVar96 != '\0') {
      auVar172._0_4_ = auVar116._0_4_ * auVar136._0_4_ * fVar1;
      auVar172._4_4_ = auVar116._4_4_ * auVar136._4_4_ * fVar7;
      auVar172._8_4_ = auVar116._8_4_ * auVar136._8_4_ * fVar8;
      auVar172._12_4_ = auVar116._12_4_ * auVar136._12_4_ * fVar5;
      auVar172._16_4_ = auVar116._16_4_ * auVar136._16_4_ * fVar6;
      auVar172._20_4_ = auVar116._20_4_ * auVar136._20_4_ * fVar2;
      auVar172._24_4_ = auVar116._24_4_ * auVar136._24_4_ * fVar3;
      auVar172._28_4_ = auVar116._28_4_ * auVar136._28_4_ * fVar4;
      auVar136 = vfmadd213ps_avx512vl(auVar143,auVar172,auVar122);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar125,uVar96,auVar136);
      auVar136 = vfmadd213ps_avx512vl(auVar144,auVar172,auVar123);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar125 | auVar137),uVar96,auVar136);
      auVar136 = vfmadd213ps_avx512vl(auVar145,auVar172,auVar124);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar125 | auVar113),uVar96,auVar136);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar125 | auVar114),uVar96,auVar189);
    }
  }
  return;
}

// ApplyAxialSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx @ 1400097f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,longlong param_6,uint param_7)

{
  float fVar1;
  float fVar6;
  float fVar14;
  float fVar17;
  float fVar24;
  undefined1 (*pauVar32) [32];
  int *piVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  bool bVar71;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  bool bVar76;
  bool bVar77;
  bool bVar78;
  bool bVar79;
  bool bVar80;
  bool bVar81;
  bool bVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
  bool bVar86;
  bool bVar87;
  bool bVar88;
  bool bVar89;
  bool bVar90;
  bool bVar91;
  bool bVar92;
  bool bVar93;
  bool bVar94;
  bool bVar95;
  bool bVar96;
  bool bVar97;
  bool bVar98;
  bool bVar99;
  bool bVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined1 auVar104 [12];
  undefined1 (*unaff_RBX) [32];
  uint uVar105;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 (*pauVar106) [16];
  ulonglong uVar107;
  longlong lVar108;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  byte bVar109;
  ulonglong uVar110;
  int iVar111;
  float fVar112;
  float fVar113;
  ulonglong uVar114;
  int iVar158;
  undefined1 auVar115 [16];
  float fVar164;
  float fVar166;
  float fVar168;
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  int iVar155;
  int iVar161;
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar149 [32];
  undefined1 auVar122 [16];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  float fVar156;
  float fVar157;
  float fVar159;
  float fVar160;
  float fVar162;
  float fVar163;
  float fVar165;
  float fVar167;
  float fVar169;
  float fVar170;
  float fVar171;
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [16];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 auVar187 [16];
  undefined1 in_ZMM27 [64];
  undefined1 auVar188 [16];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 auVar189 [16];
  undefined1 in_ZMM30 [64];
  float afStack_298 [4];
  float fStack_288;
  float fStack_284;
  uint local_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  undefined1 local_220 [32];
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined1 local_98 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar116 [16];
  
  auVar116 = in_ZMM24._0_16_;
  auVar117 = in_ZMM16._0_16_;
  auVar189 = in_ZMM30._0_16_;
  auVar122 = in_ZMM29._0_16_;
  auVar188 = in_ZMM28._0_16_;
  auVar121 = in_ZMM20._0_16_;
  auVar187 = in_ZMM27._0_16_;
  auVar120 = in_ZMM25._0_16_;
  auVar119 = in_ZMM23._0_16_;
  auVar118 = in_ZMM21._0_16_;
  local_98 = in_ZMM10._0_16_;
  uVar105 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar105 = param_7;
  }
  if ((int)(uVar105 & 0xfffffff8) < 1) {
    uVar107 = 0;
  }
  else {
    unaff_RBX = (undefined1 (*) [32])(param_2 + 0x40);
    unaff_R14 = 0;
    local_240 = __real_00000004;
    uStack_23c = __real_00000004;
    uStack_238 = __real_00000004;
    uStack_234 = __real_00000004;
    uStack_230 = __real_00000004;
    uStack_22c = __real_00000004;
    uStack_228 = __real_00000004;
    uStack_224 = __real_00000004;
    local_260 = __real_00000008;
    uStack_25c = __real_00000008;
    uStack_258 = __real_00000008;
    uStack_254 = __real_00000008;
    uStack_250 = __real_00000008;
    uStack_24c = __real_00000008;
    uStack_248 = __real_00000008;
    uStack_244 = __real_00000008;
    local_280 = __real_0000000c;
    uStack_27c = __real_0000000c;
    uStack_278 = __real_0000000c;
    uStack_274 = __real_0000000c;
    uStack_270 = __real_0000000c;
    uStack_26c = __real_0000000c;
    uStack_268 = __real_0000000c;
    uStack_264 = __real_0000000c;
    afStack_298[0] = __real_3f800000;
    afStack_298[1] = __real_3f800000;
    afStack_298[2] = __real_3f800000;
    afStack_298[3] = __real_3f800000;
    fStack_288 = __real_3f800000;
    fStack_284 = __real_3f800000;
    auVar115 = vxorps_avx512vl(in_ZMM17._0_16_,in_ZMM17._0_16_);
    uVar107 = 0;
    auVar119._4_4_ = __real_3f800000;
    auVar119._0_4_ = __real_3f800000;
    auVar119._8_4_ = __real_3f800000;
    auVar119._12_4_ = __real_3f800000;
    auVar146._16_4_ = __real_3f800000;
    auVar146._0_16_ = auVar119;
    auVar146._20_4_ = __real_3f800000;
    auVar146._24_4_ = __real_3f800000;
    auVar146._28_4_ = __real_3f800000;
    do {
      auVar131 = unaff_RBX[-1];
      auVar123 = vpermt2d_avx512vl(unaff_RBX[-2],
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar131);
      auVar124 = vpermt2d_avx512vl(*unaff_RBX,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar131);
      auVar125 = vshufi64x2_avx512vl(auVar123,auVar124,3);
      auVar126 = vpslld_avx512vl(auVar125,4);
      auVar187 = auVar126._0_16_;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar127 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar107));
      auVar188._4_4_ = __real_00000004;
      auVar188._0_4_ = __real_00000004;
      auVar188._8_4_ = __real_00000004;
      auVar188._12_4_ = __real_00000004;
      auVar148._16_4_ = __real_00000004;
      auVar148._0_16_ = auVar188;
      auVar148._20_4_ = __real_00000004;
      auVar148._24_4_ = __real_00000004;
      auVar148._28_4_ = __real_00000004;
      auVar188 = auVar187 | auVar188;
      auVar128 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar147._4_4_ = __real_00000008;
      auVar147._0_4_ = __real_00000008;
      auVar147._8_4_ = __real_00000008;
      auVar147._12_4_ = __real_00000008;
      auVar147._16_4_ = __real_00000008;
      auVar147._20_4_ = __real_00000008;
      auVar147._24_4_ = __real_00000008;
      auVar147._28_4_ = __real_00000008;
      auVar129 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      auVar125._4_4_ = __real_0000000c;
      auVar125._0_4_ = __real_0000000c;
      auVar125._8_4_ = __real_0000000c;
      auVar125._12_4_ = __real_0000000c;
      auVar125._16_4_ = __real_0000000c;
      auVar125._20_4_ = __real_0000000c;
      auVar125._24_4_ = __real_0000000c;
      auVar125._28_4_ = __real_0000000c;
      auVar130 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar131 = vpblendd_avx2(auVar131,unaff_RBX[-2],0x24);
      auVar131 = vpermt2d_avx512vl(auVar131,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*unaff_RBX);
      auVar132 = vpslld_avx512vl(auVar131,4);
      auVar121 = auVar132._0_16_;
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar133 = vgatherdps_avx512vl(*param_1);
      auVar122 = auVar133._0_16_;
      in_ZMM29 = ZEXT3264(auVar133);
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar134 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar116 = auVar134._0_16_;
      in_ZMM24 = ZEXT3264(auVar134);
      vxorps_avx512vl(in_ZMM25._0_16_,in_ZMM25._0_16_);
      auVar135 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar120 = auVar135._0_16_;
      in_ZMM25 = ZEXT3264(auVar135);
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      local_220 = auVar132 | auVar125;
      auVar136 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      in_ZMM26 = ZEXT3264(auVar136);
      auVar131._16_16_ = ZEXT116(0) * auVar123._16_16_ | ZEXT116(1) * auVar124._0_16_;
      auVar131._0_16_ = ZEXT116(0) * auVar124._0_16_ | ZEXT116(1) * auVar123._0_16_;
      auVar180 = vpslld_avx2(auVar131,4);
      auVar137 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      auVar138 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar139 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      unaff_R15 = unaff_R14 & 0xffffffff;
      auVar140 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar131 = *(undefined1 (*) [32])(param_3 + unaff_R15);
      auVar118._8_8_ = 0;
      auVar118._0_8_ = *(ulonglong *)(param_5 + uVar107);
      auVar124 = vpmovzxbd_avx2(auVar118);
      auVar123 = vsubps_avx512vl(auVar127,auVar133);
      auVar141 = vsubps_avx512vl(auVar128,auVar134);
      auVar142 = vsubps_avx512vl(auVar129,auVar135);
      auVar123 = vfmadd213ps_avx512vl(auVar123,auVar131,auVar133);
      auVar141 = vfmadd213ps_avx512vl(auVar141,auVar131,auVar134);
      auVar142 = vfmadd213ps_avx512vl(auVar142,auVar131,auVar135);
      auVar123 = vsubps_avx(auVar137,auVar123);
      auVar141 = vsubps_avx512vl(auVar138,auVar141);
      auVar142 = vsubps_avx512vl(auVar139,auVar142);
      auVar143 = vmulps_avx512vl(auVar141,auVar141);
      auVar143 = vfmadd231ps_avx512vl(auVar143,auVar123,auVar123);
      auVar176 = vpslld_avx2(auVar124,2);
      vpmovzxdq_avx2(auVar176._0_16_);
      vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
      auVar117 = vgatherqps_avx512vl(*(undefined8 *)(param_6 + (longlong)afStack_298));
      auVar124 = vfmadd231ps_avx512vl(auVar143,auVar142,auVar142);
      auVar124 = vsqrtps_avx512vl(auVar124);
      vpmovzxdq_avx2(auVar176._16_16_);
      vxorps_avx512vl(in_ZMM22._0_16_,in_ZMM22._0_16_);
      auVar118 = vgatherqps_avx512vl(*(undefined8 *)(*unaff_RBX + param_6));
      auVar143 = vsubps_avx512vl(auVar146,auVar131);
      auVar176 = vinsertf32x4_avx512vl(ZEXT1632(auVar117),auVar118,1);
      auVar123 = vdivps_avx(auVar123,auVar124);
      auVar141 = vdivps_avx512vl(auVar141,auVar124);
      auVar142 = vdivps_avx512vl(auVar142,auVar124);
      auVar144 = vsubps_avx512vl(auVar124,*(undefined1 (*) [32])(param_4 + unaff_R15));
      auVar123 = vmulps_avx512vl(auVar123,auVar144);
      auVar141 = vmulps_avx512vl(auVar141,auVar144);
      auVar142 = vmulps_avx512vl(auVar142,auVar144);
      auVar144 = vmulps_avx512vl(auVar143,auVar136);
      auVar144 = vfmadd231ps_avx512vl(auVar144,auVar131,auVar130);
      in_ZMM21 = ZEXT3264(auVar144);
      auVar118 = auVar144._0_16_;
      auVar145._0_4_ = auVar176._0_4_ * auVar123._0_4_;
      auVar145._4_4_ = auVar176._4_4_ * auVar123._4_4_;
      auVar145._8_4_ = auVar176._8_4_ * auVar123._8_4_;
      auVar145._12_4_ = auVar176._12_4_ * auVar123._12_4_;
      auVar145._16_4_ = auVar176._16_4_ * auVar123._16_4_;
      auVar145._20_4_ = auVar176._20_4_ * auVar123._20_4_;
      auVar145._24_4_ = auVar176._24_4_ * auVar123._24_4_;
      auVar145._28_4_ = auVar176._28_4_ * auVar123._28_4_;
      auVar123 = vmulps_avx512vl(auVar176,auVar141);
      auVar141 = vmulps_avx512vl(auVar176,auVar142);
      auVar142 = vaddps_avx512vl(auVar144,auVar140);
      in_ZMM22 = ZEXT3264(auVar142);
      auVar176 = vdivps_avx512vl(auVar145,auVar142);
      auVar145 = vdivps_avx512vl(auVar123,auVar142);
      auVar141 = vdivps_avx512vl(auVar141,auVar142);
      uVar101 = vcmpps_avx512vl(auVar140,ZEXT1632(auVar115),0);
      uVar102 = vcmpps_avx512vl(auVar144,ZEXT1632(auVar115),0);
      auVar123._4_4_ = __real_322bcc77;
      auVar123._0_4_ = __real_322bcc77;
      auVar123._8_4_ = __real_322bcc77;
      auVar123._12_4_ = __real_322bcc77;
      auVar123._16_4_ = __real_322bcc77;
      auVar123._20_4_ = __real_322bcc77;
      auVar123._24_4_ = __real_322bcc77;
      auVar123._28_4_ = __real_322bcc77;
      uVar103 = vcmpps_avx512vl(auVar124,auVar123,2);
      auVar123 = vmaxps_avx512vl(auVar131,auVar143);
      auVar123 = vaddps_avx512vl(auVar123,auVar146);
      auVar124._4_4_ = __real_40000000;
      auVar124._0_4_ = __real_40000000;
      auVar124._8_4_ = __real_40000000;
      auVar124._12_4_ = __real_40000000;
      auVar124._16_4_ = __real_40000000;
      auVar124._20_4_ = __real_40000000;
      auVar124._24_4_ = __real_40000000;
      auVar124._28_4_ = __real_40000000;
      auVar123 = vdivps_avx(auVar124,auVar123);
      bVar109 = (byte)uVar103 | (byte)uVar101 & (byte)uVar102;
      iVar111 = auVar115._0_4_;
      auVar142._0_4_ =
           (float)((uint)(bVar109 & 1) * iVar111 | (uint)!(bool)(bVar109 & 1) * auVar176._0_4_);
      bVar34 = (bool)(bVar109 >> 1 & 1);
      iVar155 = auVar115._4_4_;
      auVar142._4_4_ = (float)((uint)bVar34 * iVar155 | (uint)!bVar34 * auVar176._4_4_);
      bVar34 = (bool)(bVar109 >> 2 & 1);
      iVar158 = auVar115._8_4_;
      auVar142._8_4_ = (float)((uint)bVar34 * iVar158 | (uint)!bVar34 * auVar176._8_4_);
      bVar34 = (bool)(bVar109 >> 3 & 1);
      iVar161 = auVar115._12_4_;
      auVar142._12_4_ = (float)((uint)bVar34 * iVar161 | (uint)!bVar34 * auVar176._12_4_);
      fVar14 = (float)((uint)!(bool)(bVar109 >> 4 & 1) * auVar176._16_4_);
      auVar142._16_4_ = fVar14;
      fVar15 = (float)((uint)!(bool)(bVar109 >> 5 & 1) * auVar176._20_4_);
      auVar142._20_4_ = fVar15;
      fVar16 = (float)((uint)!(bool)(bVar109 >> 6 & 1) * auVar176._24_4_);
      auVar142._24_4_ = fVar16;
      auVar142._28_4_ =
           (float)((uint)(bVar109 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                  (uint)!(bool)(bVar109 >> 7) * auVar176._28_4_);
      auVar117._0_4_ = (uint)(bVar109 & 1) * iVar111 | (uint)!(bool)(bVar109 & 1) * auVar145._0_4_;
      bVar34 = (bool)(bVar109 >> 1 & 1);
      auVar117._4_4_ = (uint)bVar34 * iVar155 | (uint)!bVar34 * auVar145._4_4_;
      bVar34 = (bool)(bVar109 >> 2 & 1);
      auVar117._8_4_ = (uint)bVar34 * iVar158 | (uint)!bVar34 * auVar145._8_4_;
      bVar34 = (bool)(bVar109 >> 3 & 1);
      auVar117._12_4_ = (uint)bVar34 * iVar161 | (uint)!bVar34 * auVar145._12_4_;
      auVar176._16_4_ = (uint)!(bool)(bVar109 >> 4 & 1) * auVar145._16_4_;
      auVar176._0_16_ = auVar117;
      auVar176._20_4_ = (uint)!(bool)(bVar109 >> 5 & 1) * auVar145._20_4_;
      auVar176._24_4_ = (uint)!(bool)(bVar109 >> 6 & 1) * auVar145._24_4_;
      auVar176._28_4_ = (uint)!(bool)(bVar109 >> 7) * auVar145._28_4_;
      auVar144._0_4_ = (uint)(bVar109 & 1) * iVar111 | (uint)!(bool)(bVar109 & 1) * auVar141._0_4_;
      bVar34 = (bool)(bVar109 >> 1 & 1);
      auVar144._4_4_ = (uint)bVar34 * iVar155 | (uint)!bVar34 * auVar141._4_4_;
      bVar34 = (bool)(bVar109 >> 2 & 1);
      auVar144._8_4_ = (uint)bVar34 * iVar158 | (uint)!bVar34 * auVar141._8_4_;
      bVar34 = (bool)(bVar109 >> 3 & 1);
      auVar144._12_4_ = (uint)bVar34 * iVar161 | (uint)!bVar34 * auVar141._12_4_;
      auVar144._16_4_ = (uint)!(bool)(bVar109 >> 4 & 1) * auVar141._16_4_;
      auVar144._20_4_ = (uint)!(bool)(bVar109 >> 5 & 1) * auVar141._20_4_;
      auVar144._24_4_ = (uint)!(bool)(bVar109 >> 6 & 1) * auVar141._24_4_;
      auVar144._28_4_ = (uint)!(bool)(bVar109 >> 7) * auVar141._28_4_;
      uVar101 = vcmpps_avx512vl(ZEXT1632(auVar115),auVar140,1);
      if ((char)uVar101 != '\0') {
        auVar141._0_4_ = auVar140._0_4_ * auVar123._0_4_;
        auVar141._4_4_ = auVar140._4_4_ * auVar123._4_4_;
        auVar141._8_4_ = auVar140._8_4_ * auVar123._8_4_;
        auVar141._12_4_ = auVar140._12_4_ * auVar123._12_4_;
        auVar141._16_4_ = auVar140._16_4_ * auVar123._16_4_;
        auVar141._20_4_ = auVar140._20_4_ * auVar123._20_4_;
        auVar141._24_4_ = auVar140._24_4_ * auVar123._24_4_;
        auVar141._28_4_ = auVar140._28_4_ * auVar123._28_4_;
        auVar183._0_4_ = -(auVar141._0_4_ * auVar142._0_4_) + auVar137._0_4_;
        auVar183._4_4_ = -(auVar141._4_4_ * auVar142._4_4_) + auVar137._4_4_;
        auVar183._8_4_ = -(auVar141._8_4_ * auVar142._8_4_) + auVar137._8_4_;
        auVar183._12_4_ = -(auVar141._12_4_ * auVar142._12_4_) + auVar137._12_4_;
        auVar183._16_4_ = -(auVar141._16_4_ * fVar14) + auVar137._16_4_;
        auVar183._20_4_ = -(auVar141._20_4_ * fVar15) + auVar137._20_4_;
        auVar183._24_4_ = -(auVar141._24_4_ * fVar16) + auVar137._24_4_;
        auVar183._28_4_ = -(auVar141._28_4_ * auVar142._28_4_) + auVar137._28_4_;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar180,uVar101,auVar183);
        auVar138 = vfnmadd231ps_avx512vl(auVar138,auVar141,auVar176);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar180 | auVar148),uVar101,auVar138);
        auVar124 = vfnmadd231ps_avx512vl(auVar139,auVar144,auVar141);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar180 | auVar147),uVar101,auVar124);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar180 | auVar125),uVar101,auVar140);
      }
      uVar101 = vcmpps_avx512vl(auVar130,ZEXT1632(auVar115),0xc);
      if ((char)uVar101 != '\0') {
        auVar137._0_4_ = auVar131._0_4_ * auVar130._0_4_ * auVar123._0_4_;
        auVar137._4_4_ = auVar131._4_4_ * auVar130._4_4_ * auVar123._4_4_;
        auVar137._8_4_ = auVar131._8_4_ * auVar130._8_4_ * auVar123._8_4_;
        auVar137._12_4_ = auVar131._12_4_ * auVar130._12_4_ * auVar123._12_4_;
        auVar137._16_4_ = auVar131._16_4_ * auVar130._16_4_ * auVar123._16_4_;
        auVar137._20_4_ = auVar131._20_4_ * auVar130._20_4_ * auVar123._20_4_;
        auVar137._24_4_ = auVar131._24_4_ * auVar130._24_4_ * auVar123._24_4_;
        auVar137._28_4_ = auVar131._28_4_ * auVar130._28_4_ * auVar123._28_4_;
        auVar127 = vfmadd231ps_avx512vl(auVar127,auVar137,auVar142);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar131,uVar101,auVar127);
        auVar131 = vfmadd231ps_avx512vl(auVar128,auVar137,auVar176);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar180 | auVar148),uVar101,auVar131);
        auVar131 = vfmadd231ps_avx512vl(auVar129,auVar144,auVar137);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar138,uVar101,auVar131);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar126 | auVar125),uVar101,auVar130);
      }
      in_ZMM30 = ZEXT3264(auVar127);
      auVar189 = auVar127._0_16_;
      uVar101 = vcmpps_avx512vl(auVar136,ZEXT1632(auVar115),0xc);
      if ((char)uVar101 != '\0') {
        auVar131 = vmulps_avx512vl(auVar136,auVar123);
        auVar131 = vmulps_avx512vl(auVar143,auVar131);
        auVar124 = vfmadd213ps_avx512vl(auVar142,auVar131,auVar133);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar123,uVar101,auVar124);
        auVar123 = vfmadd213ps_avx512vl(auVar176,auVar131,auVar134);
        auVar117 = auVar123._0_16_;
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar132 | auVar148),uVar101,auVar123);
        auVar131 = vfmadd213ps_avx512vl(auVar144,auVar131,auVar135);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar132 | auVar147),uVar101,auVar131);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar132 | auVar125),uVar101,auVar136);
      }
      uVar107 = uVar107 + 8;
      unaff_R14 = unaff_R14 + 0x20;
      unaff_RBX = unaff_RBX + 3;
    } while ((int)uVar107 < (int)(uVar105 & 0xfffffff8));
  }
  if ((int)uVar107 < (int)param_7) {
    auVar146 = vpbroadcastd_avx512vl();
    auVar146 = vpor_avx2(auVar146,
                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar131 = vpbroadcastd_avx512vl();
    uVar110 = vpcmpgtd_avx512vl(auVar131,auVar146);
    pauVar32 = (undefined1 (*) [32])(param_2 + (uVar107 & 0xffffffff) * 0xc);
    bVar109 = (byte)uVar110;
    if (bVar109 == 0xff) {
      auVar146 = pauVar32[1];
      auVar131 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar32,auVar146);
      auVar123 = vpermi2d_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar32[2],auVar146);
      auVar128 = vinserti32x4_avx512vl(auVar131,auVar123._0_16_,1);
      auVar126 = vperm2i128_avx2(auVar131,auVar123,0x31);
      auVar146 = vpblendd_avx2(auVar146,*pauVar32,0x24);
      auVar129 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar146,pauVar32[2]);
    }
    else {
      auVar118 = vxorps_avx512vl(auVar118,auVar118);
      auVar146 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar32 + param_6));
      auVar128._0_4_ =
           (uint)(bVar109 & 1) * auVar146._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar118._0_4_;
      bVar34 = (bool)((byte)(uVar110 >> 1) & 1);
      auVar128._4_4_ = (uint)bVar34 * auVar146._4_4_ | (uint)!bVar34 * auVar118._4_4_;
      bVar34 = (bool)((byte)(uVar110 >> 2) & 1);
      auVar128._8_4_ = (uint)bVar34 * auVar146._8_4_ | (uint)!bVar34 * auVar118._8_4_;
      bVar34 = (bool)((byte)(uVar110 >> 3) & 1);
      auVar128._12_4_ = (uint)bVar34 * auVar146._12_4_ | (uint)!bVar34 * auVar118._12_4_;
      auVar128._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar146._16_4_;
      auVar128._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar146._20_4_;
      auVar128._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar146._24_4_;
      auVar128._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar146._28_4_;
      auVar146 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar32 + param_6));
      auVar126._4_4_ = (uint)((byte)(uVar110 >> 1) & 1) * auVar146._4_4_;
      auVar126._0_4_ = (uint)(bVar109 & 1) * auVar146._0_4_;
      auVar126._8_4_ = (uint)((byte)(uVar110 >> 2) & 1) * auVar146._8_4_;
      auVar126._12_4_ = (uint)((byte)(uVar110 >> 3) & 1) * auVar146._12_4_;
      auVar126._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar146._16_4_;
      auVar126._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar146._20_4_;
      auVar126._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar146._24_4_;
      auVar126._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar146._28_4_;
      auVar146 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar32 + param_6));
      auVar129._4_4_ = (uint)((byte)(uVar110 >> 1) & 1) * auVar146._4_4_;
      auVar129._0_4_ = (uint)(bVar109 & 1) * auVar146._0_4_;
      auVar129._8_4_ = (uint)((byte)(uVar110 >> 2) & 1) * auVar146._8_4_;
      auVar129._12_4_ = (uint)((byte)(uVar110 >> 3) & 1) * auVar146._12_4_;
      auVar129._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar146._16_4_;
      auVar129._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar146._20_4_;
      auVar129._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar146._24_4_;
      auVar129._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar146._28_4_;
    }
    lVar108 = (longlong)((int)uVar107 << 2);
    piVar33 = (int *)(param_3 + lVar108);
    fVar1 = (float)((uint)(bVar109 & 1) * *piVar33);
    fVar14 = (float)((uint)((byte)(uVar110 >> 1) & 1) * piVar33[1]);
    auVar130._4_4_ = fVar14;
    auVar130._0_4_ = fVar1;
    fVar15 = (float)((uint)((byte)(uVar110 >> 2) & 1) * piVar33[2]);
    auVar130._8_4_ = fVar15;
    fVar16 = (float)((uint)((byte)(uVar110 >> 3) & 1) * piVar33[3]);
    auVar130._12_4_ = fVar16;
    fVar2 = (float)((uint)((byte)(uVar110 >> 4) & 1) * piVar33[4]);
    auVar130._16_4_ = fVar2;
    fVar3 = (float)((uint)((byte)(uVar110 >> 5) & 1) * piVar33[5]);
    auVar130._20_4_ = fVar3;
    fVar4 = (float)((uint)((byte)(uVar110 >> 6) & 1) * piVar33[6]);
    auVar130._24_4_ = fVar4;
    fVar5 = (float)((uint)(byte)(uVar110 >> 7) * piVar33[7]);
    auVar130._28_4_ = fVar5;
    piVar33 = (int *)(param_4 + lVar108);
    auVar132._4_4_ = (uint)((byte)(uVar110 >> 1) & 1) * piVar33[1];
    auVar132._0_4_ = (uint)(bVar109 & 1) * *piVar33;
    auVar132._8_4_ = (uint)((byte)(uVar110 >> 2) & 1) * piVar33[2];
    auVar132._12_4_ = (uint)((byte)(uVar110 >> 3) & 1) * piVar33[3];
    auVar132._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * piVar33[4];
    auVar132._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * piVar33[5];
    auVar132._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * piVar33[6];
    auVar132._28_4_ = (uint)(byte)(uVar110 >> 7) * piVar33[7];
    pauVar106 = (undefined1 (*) [16])(param_5 + (uVar107 & 0xffffffff));
    uVar107 = (ulonglong)(byte)~bVar109;
    if ((~bVar109 & 0x81) == 0) {
      uVar114 = *(ulonglong *)*pauVar106;
    }
    else {
      auVar118 = vmovdqu8_avx512vl(*pauVar106);
      uVar114 = CONCAT17((char)(uVar110 >> 7) * auVar118[7],
                         CONCAT16(((byte)(uVar110 >> 6) & 1) * auVar118[6],
                                  CONCAT15(((byte)(uVar110 >> 5) & 1) * auVar118[5],
                                           CONCAT14(((byte)(uVar110 >> 4) & 1) * auVar118[4],
                                                    CONCAT13(((byte)(uVar110 >> 3) & 1) *
                                                             auVar118[3],
                                                             CONCAT12(((byte)(uVar110 >> 2) & 1) *
                                                                      auVar118[2],
                                                                      CONCAT11(((byte)(uVar110 >> 1)
                                                                               & 1) * auVar118[1],
                                                                               (bVar109 & 1) *
                                                                               auVar118[0])))))));
    }
    auVar177._8_8_ = 0;
    auVar177._0_8_ = uVar114;
    auVar142 = vpslld_avx2(auVar126,4);
    auVar147 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar119 = vxorps_avx512vl(auVar119,auVar119);
    auVar146 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)afStack_298));
    auVar115._0_4_ =
         (uint)(bVar109 & 1) * auVar146._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar119._0_4_;
    bVar34 = (bool)((byte)(uVar110 >> 1) & 1);
    auVar115._4_4_ = (uint)bVar34 * auVar146._4_4_ | (uint)!bVar34 * auVar119._4_4_;
    bVar34 = (bool)((byte)(uVar110 >> 2) & 1);
    auVar115._8_4_ = (uint)bVar34 * auVar146._8_4_ | (uint)!bVar34 * auVar119._8_4_;
    bVar34 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar115._12_4_ = (uint)bVar34 * auVar146._12_4_ | (uint)!bVar34 * auVar119._12_4_;
    auVar119 = vxorps_avx512vl(auVar120,auVar120);
    auVar131 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar34 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar48 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar61 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar148 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar120 = vxorps_avx512vl(auVar187,auVar187);
    auVar123 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar107));
    bVar35 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar49 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar62 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar126 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar121 = vxorps_avx512vl(auVar121,auVar121);
    auVar124 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)unaff_RBX));
    auVar149._0_4_ =
         (uint)(bVar109 & 1) * auVar124._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar121._0_4_;
    bVar36 = (bool)((byte)(uVar110 >> 1) & 1);
    auVar149._4_4_ = (uint)bVar36 * auVar124._4_4_ | (uint)!bVar36 * auVar121._4_4_;
    bVar36 = (bool)((byte)(uVar110 >> 2) & 1);
    auVar149._8_4_ = (uint)bVar36 * auVar124._8_4_ | (uint)!bVar36 * auVar121._8_4_;
    bVar36 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar149._12_4_ = (uint)bVar36 * auVar124._12_4_ | (uint)!bVar36 * auVar121._12_4_;
    auVar149._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar124._16_4_;
    auVar149._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar124._20_4_;
    auVar149._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar124._24_4_;
    auVar149._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar124._28_4_;
    auVar141 = vpslld_avx2(auVar129,4);
    auVar188 = vxorps_avx512vl(auVar188,auVar188);
    auVar124 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar36 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar50 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar63 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar122 = vxorps_avx512vl(auVar122,auVar122);
    auVar125 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar107));
    bVar37 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar51 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar64 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar121 = vxorps_avx512vl(auVar189,auVar189);
    auVar129 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar107));
    bVar38 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar52 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar65 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar117 = vxorps_avx512vl(auVar117,auVar117);
    auVar133 = vgatherdps_avx512vl(*param_1);
    auVar150._0_4_ =
         (uint)(bVar109 & 1) * auVar133._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar117._0_4_;
    bVar39 = (bool)((byte)(uVar110 >> 1) & 1);
    auVar150._4_4_ = (uint)bVar39 * auVar133._4_4_ | (uint)!bVar39 * auVar117._4_4_;
    bVar39 = (bool)((byte)(uVar110 >> 2) & 1);
    auVar150._8_4_ = (uint)bVar39 * auVar133._8_4_ | (uint)!bVar39 * auVar117._8_4_;
    bVar39 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar150._12_4_ = (uint)bVar39 * auVar133._12_4_ | (uint)!bVar39 * auVar117._12_4_;
    auVar150._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar133._16_4_;
    auVar150._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar133._20_4_;
    auVar150._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar133._24_4_;
    auVar150._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar133._28_4_;
    bVar39 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar53 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar66 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar74 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar80 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar87 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar94 = SUB81(uVar110 >> 7,0);
    bVar40 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar54 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar67 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar75 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar81 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar88 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar95 = SUB81(uVar110 >> 7,0);
    bVar41 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar55 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar68 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar76 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar82 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar89 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar96 = SUB81(uVar110 >> 7,0);
    bVar42 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar56 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar69 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar77 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar83 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar90 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar97 = SUB81(uVar110 >> 7,0);
    bVar43 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar57 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar70 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar78 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar84 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar91 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar98 = SUB81(uVar110 >> 7,0);
    bVar44 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar58 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar71 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar79 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar85 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar92 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar99 = SUB81(uVar110 >> 7,0);
    vpslld_avx512vl(auVar128,4);
    auVar128 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
    auVar117 = vxorps_avx512vl(auVar147._0_16_,auVar147._0_16_);
    auVar133 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
    bVar45 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar59 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar72 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar118 = vxorps_avx512vl(auVar115,auVar115);
    auVar137 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
    bVar46 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar60 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar73 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar134 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
    fVar6 = (float)((uint)(bVar109 & 1) * auVar134._0_4_);
    fVar7 = (float)((uint)((byte)(uVar110 >> 1) & 1) * auVar134._4_4_);
    auVar151._4_4_ = fVar7;
    auVar151._0_4_ = fVar6;
    fVar8 = (float)((uint)((byte)(uVar110 >> 2) & 1) * auVar134._8_4_);
    auVar151._8_4_ = fVar8;
    fVar9 = (float)((uint)((byte)(uVar110 >> 3) & 1) * auVar134._12_4_);
    auVar151._12_4_ = fVar9;
    fVar10 = (float)((uint)((byte)(uVar110 >> 4) & 1) * auVar134._16_4_);
    auVar151._16_4_ = fVar10;
    fVar11 = (float)((uint)((byte)(uVar110 >> 5) & 1) * auVar134._20_4_);
    auVar151._20_4_ = fVar11;
    fVar12 = (float)((uint)((byte)(uVar110 >> 6) & 1) * auVar134._24_4_);
    auVar151._24_4_ = fVar12;
    fVar13 = (float)((uint)(byte)(uVar110 >> 7) * auVar134._28_4_);
    auVar151._28_4_ = fVar13;
    fVar112 = (float)((uint)(bVar109 & 1) * (uint)(bVar109 & 1) * auVar128._0_4_ |
                     (uint)!(bool)(bVar109 & 1) * local_140);
    bVar47 = (bool)((byte)(uVar110 >> 1) & 1);
    fVar156 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 1) & 1) * auVar128._4_4_ |
                     (uint)!bVar47 * iStack_13c);
    bVar47 = (bool)((byte)(uVar110 >> 2) & 1);
    fVar159 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 2) & 1) * auVar128._8_4_ |
                     (uint)!bVar47 * iStack_138);
    bVar47 = (bool)((byte)(uVar110 >> 3) & 1);
    fVar162 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 3) & 1) * auVar128._12_4_ |
                     (uint)!bVar47 * iStack_134);
    bVar47 = (bool)((byte)(uVar110 >> 4) & 1);
    fVar164 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 4) & 1) * auVar128._16_4_ |
                     (uint)!bVar47 * iStack_130);
    bVar47 = (bool)((byte)(uVar110 >> 5) & 1);
    fVar166 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 5) & 1) * auVar128._20_4_ |
                     (uint)!bVar47 * iStack_12c);
    bVar47 = (bool)((byte)(uVar110 >> 6) & 1);
    fVar168 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 6) & 1) * auVar128._24_4_ |
                     (uint)!bVar47 * iStack_128);
    bVar47 = SUB81(uVar110 >> 7,0);
    fVar170 = (float)((uint)bVar47 * (uint)(byte)(uVar110 >> 7) * auVar128._28_4_ |
                     (uint)!bVar47 * iStack_124);
    fVar113 = (float)((uint)(bVar109 & 1) *
                      ((uint)(bVar109 & 1) * auVar133._0_4_ |
                      (uint)!(bool)(bVar109 & 1) * auVar117._0_4_) |
                     (uint)!(bool)(bVar109 & 1) * local_120);
    bVar47 = (bool)((byte)(uVar110 >> 1) & 1);
    fVar157 = (float)((uint)bVar47 *
                      ((uint)bVar45 * auVar133._4_4_ | (uint)!bVar45 * auVar117._4_4_) |
                     (uint)!bVar47 * iStack_11c);
    bVar45 = (bool)((byte)(uVar110 >> 2) & 1);
    fVar160 = (float)((uint)bVar45 *
                      ((uint)bVar59 * auVar133._8_4_ | (uint)!bVar59 * auVar117._8_4_) |
                     (uint)!bVar45 * iStack_118);
    bVar45 = (bool)((byte)(uVar110 >> 3) & 1);
    fVar163 = (float)((uint)bVar45 *
                      ((uint)bVar72 * auVar133._12_4_ | (uint)!bVar72 * auVar117._12_4_) |
                     (uint)!bVar45 * iStack_114);
    bVar45 = (bool)((byte)(uVar110 >> 4) & 1);
    fVar165 = (float)((uint)bVar45 * (uint)((byte)(uVar110 >> 4) & 1) * auVar133._16_4_ |
                     (uint)!bVar45 * iStack_110);
    bVar45 = (bool)((byte)(uVar110 >> 5) & 1);
    fVar167 = (float)((uint)bVar45 * (uint)((byte)(uVar110 >> 5) & 1) * auVar133._20_4_ |
                     (uint)!bVar45 * iStack_10c);
    bVar45 = (bool)((byte)(uVar110 >> 6) & 1);
    fVar169 = (float)((uint)bVar45 * (uint)((byte)(uVar110 >> 6) & 1) * auVar133._24_4_ |
                     (uint)!bVar45 * iStack_108);
    bVar45 = SUB81(uVar110 >> 7,0);
    fVar171 = (float)((uint)bVar45 * (uint)(byte)(uVar110 >> 7) * auVar133._28_4_ |
                     (uint)!bVar45 * iStack_104);
    bVar45 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar47 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar59 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar72 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar86 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar93 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar100 = SUB81(uVar110 >> 7,0);
    auVar139._4_4_ = bVar39 * auVar115._4_4_ | (uint)!bVar39 * iStack_19c;
    auVar139._0_4_ = (bVar109 & 1) * auVar115._0_4_ | (uint)!(bool)(bVar109 & 1) * local_1a0;
    auVar139._8_4_ = bVar53 * auVar115._8_4_ | (uint)!bVar53 * iStack_198;
    auVar139._12_4_ = bVar66 * auVar115._12_4_ | (uint)!bVar66 * iStack_194;
    auVar139._16_4_ =
         (uint)bVar74 * (uint)((byte)(uVar110 >> 4) & 1) * auVar146._16_4_ |
         (uint)!bVar74 * iStack_190;
    auVar139._20_4_ =
         (uint)bVar80 * (uint)((byte)(uVar110 >> 5) & 1) * auVar146._20_4_ |
         (uint)!bVar80 * iStack_18c;
    auVar139._24_4_ =
         (uint)bVar87 * (uint)((byte)(uVar110 >> 6) & 1) * auVar146._24_4_ |
         (uint)!bVar87 * iStack_188;
    auVar139._28_4_ =
         (uint)bVar94 * (uint)(byte)(uVar110 >> 7) * auVar146._28_4_ | (uint)!bVar94 * iStack_184;
    auVar140._4_4_ =
         (uint)bVar40 * ((uint)bVar34 * auVar131._4_4_ | (uint)!bVar34 * auVar119._4_4_) |
         (uint)!bVar40 * iStack_17c;
    auVar140._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar131._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar119._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_180;
    auVar140._8_4_ =
         (uint)bVar54 * ((uint)bVar48 * auVar131._8_4_ | (uint)!bVar48 * auVar119._8_4_) |
         (uint)!bVar54 * iStack_178;
    auVar140._12_4_ =
         (uint)bVar67 * ((uint)bVar61 * auVar131._12_4_ | (uint)!bVar61 * auVar119._12_4_) |
         (uint)!bVar67 * iStack_174;
    auVar140._16_4_ =
         (uint)bVar75 * (uint)((byte)(uVar110 >> 4) & 1) * auVar131._16_4_ |
         (uint)!bVar75 * iStack_170;
    auVar140._20_4_ =
         (uint)bVar81 * (uint)((byte)(uVar110 >> 5) & 1) * auVar131._20_4_ |
         (uint)!bVar81 * iStack_16c;
    auVar140._24_4_ =
         (uint)bVar88 * (uint)((byte)(uVar110 >> 6) & 1) * auVar131._24_4_ |
         (uint)!bVar88 * iStack_168;
    auVar140._28_4_ =
         (uint)bVar95 * (uint)(byte)(uVar110 >> 7) * auVar131._28_4_ | (uint)!bVar95 * iStack_164;
    auVar143._4_4_ =
         (uint)bVar41 * ((uint)bVar35 * auVar123._4_4_ | (uint)!bVar35 * auVar120._4_4_) |
         (uint)!bVar41 * iStack_15c;
    auVar143._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar123._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar120._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_160;
    auVar143._8_4_ =
         (uint)bVar55 * ((uint)bVar49 * auVar123._8_4_ | (uint)!bVar49 * auVar120._8_4_) |
         (uint)!bVar55 * iStack_158;
    auVar143._12_4_ =
         (uint)bVar68 * ((uint)bVar62 * auVar123._12_4_ | (uint)!bVar62 * auVar120._12_4_) |
         (uint)!bVar68 * iStack_154;
    auVar143._16_4_ =
         (uint)bVar76 * (uint)((byte)(uVar110 >> 4) & 1) * auVar123._16_4_ |
         (uint)!bVar76 * iStack_150;
    auVar143._20_4_ =
         (uint)bVar82 * (uint)((byte)(uVar110 >> 5) & 1) * auVar123._20_4_ |
         (uint)!bVar82 * iStack_14c;
    auVar143._24_4_ =
         (uint)bVar89 * (uint)((byte)(uVar110 >> 6) & 1) * auVar123._24_4_ |
         (uint)!bVar89 * iStack_148;
    auVar143._28_4_ =
         (uint)bVar96 * (uint)(byte)(uVar110 >> 7) * auVar123._28_4_ | (uint)!bVar96 * iStack_144;
    auVar134._4_4_ =
         (uint)bVar42 * ((uint)bVar36 * auVar124._4_4_ | (uint)!bVar36 * auVar188._4_4_) |
         (uint)!bVar42 * iStack_1fc;
    auVar134._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar124._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar188._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_200;
    auVar134._8_4_ =
         (uint)bVar56 * ((uint)bVar50 * auVar124._8_4_ | (uint)!bVar50 * auVar188._8_4_) |
         (uint)!bVar56 * iStack_1f8;
    auVar134._12_4_ =
         (uint)bVar69 * ((uint)bVar63 * auVar124._12_4_ | (uint)!bVar63 * auVar188._12_4_) |
         (uint)!bVar69 * iStack_1f4;
    auVar134._16_4_ =
         (uint)bVar77 * (uint)((byte)(uVar110 >> 4) & 1) * auVar124._16_4_ |
         (uint)!bVar77 * iStack_1f0;
    auVar134._20_4_ =
         (uint)bVar83 * (uint)((byte)(uVar110 >> 5) & 1) * auVar124._20_4_ |
         (uint)!bVar83 * iStack_1ec;
    auVar134._24_4_ =
         (uint)bVar90 * (uint)((byte)(uVar110 >> 6) & 1) * auVar124._24_4_ |
         (uint)!bVar90 * iStack_1e8;
    auVar134._28_4_ =
         (uint)bVar97 * (uint)(byte)(uVar110 >> 7) * auVar124._28_4_ | (uint)!bVar97 * iStack_1e4;
    auVar135._4_4_ =
         (uint)bVar43 * ((uint)bVar37 * auVar125._4_4_ | (uint)!bVar37 * auVar122._4_4_) |
         (uint)!bVar43 * iStack_1dc;
    auVar135._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar125._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar122._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_1e0;
    auVar135._8_4_ =
         (uint)bVar57 * ((uint)bVar51 * auVar125._8_4_ | (uint)!bVar51 * auVar122._8_4_) |
         (uint)!bVar57 * iStack_1d8;
    auVar135._12_4_ =
         (uint)bVar70 * ((uint)bVar64 * auVar125._12_4_ | (uint)!bVar64 * auVar122._12_4_) |
         (uint)!bVar70 * iStack_1d4;
    auVar135._16_4_ =
         (uint)bVar78 * (uint)((byte)(uVar110 >> 4) & 1) * auVar125._16_4_ |
         (uint)!bVar78 * iStack_1d0;
    auVar135._20_4_ =
         (uint)bVar84 * (uint)((byte)(uVar110 >> 5) & 1) * auVar125._20_4_ |
         (uint)!bVar84 * iStack_1cc;
    auVar135._24_4_ =
         (uint)bVar91 * (uint)((byte)(uVar110 >> 6) & 1) * auVar125._24_4_ |
         (uint)!bVar91 * iStack_1c8;
    auVar135._28_4_ =
         (uint)bVar98 * (uint)(byte)(uVar110 >> 7) * auVar125._28_4_ | (uint)!bVar98 * iStack_1c4;
    auVar136._4_4_ =
         (uint)bVar44 * ((uint)bVar38 * auVar129._4_4_ | (uint)!bVar38 * auVar121._4_4_) |
         (uint)!bVar44 * iStack_1bc;
    auVar136._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar129._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar121._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_1c0;
    auVar136._8_4_ =
         (uint)bVar58 * ((uint)bVar52 * auVar129._8_4_ | (uint)!bVar52 * auVar121._8_4_) |
         (uint)!bVar58 * iStack_1b8;
    auVar136._12_4_ =
         (uint)bVar71 * ((uint)bVar65 * auVar129._12_4_ | (uint)!bVar65 * auVar121._12_4_) |
         (uint)!bVar71 * iStack_1b4;
    auVar136._16_4_ =
         (uint)bVar79 * (uint)((byte)(uVar110 >> 4) & 1) * auVar129._16_4_ |
         (uint)!bVar79 * iStack_1b0;
    auVar136._20_4_ =
         (uint)bVar85 * (uint)((byte)(uVar110 >> 5) & 1) * auVar129._20_4_ |
         (uint)!bVar85 * iStack_1ac;
    auVar136._24_4_ =
         (uint)bVar92 * (uint)((byte)(uVar110 >> 6) & 1) * auVar129._24_4_ |
         (uint)!bVar92 * iStack_1a8;
    auVar136._28_4_ =
         (uint)bVar99 * (uint)(byte)(uVar110 >> 7) * auVar129._28_4_ | (uint)!bVar99 * iStack_1a4;
    auVar146 = vsubps_avx512vl(auVar139,auVar134);
    auVar131 = vsubps_avx512vl(auVar140,auVar135);
    auVar123 = vsubps_avx512vl(auVar143,auVar136);
    auVar125 = vfmadd213ps_avx512vl(auVar146,auVar130,auVar134);
    auVar128 = vfmadd213ps_avx512vl(auVar131,auVar130,auVar135);
    auVar138._4_4_ = fVar156;
    auVar138._0_4_ = fVar112;
    auVar138._8_4_ = fVar159;
    auVar138._12_4_ = fVar162;
    auVar138._16_4_ = fVar164;
    auVar138._20_4_ = fVar166;
    auVar138._24_4_ = fVar168;
    auVar138._28_4_ = fVar170;
    auVar127._4_4_ = fVar157;
    auVar127._0_4_ = fVar113;
    auVar127._8_4_ = fVar160;
    auVar127._12_4_ = fVar163;
    auVar127._16_4_ = fVar165;
    auVar127._20_4_ = fVar167;
    auVar127._24_4_ = fVar169;
    auVar127._28_4_ = fVar171;
    auVar184._4_4_ = __real_3f800000;
    auVar184._0_4_ = __real_3f800000;
    auVar184._8_4_ = __real_3f800000;
    auVar184._12_4_ = __real_3f800000;
    auVar184._16_4_ = __real_3f800000;
    auVar184._20_4_ = __real_3f800000;
    auVar184._24_4_ = __real_3f800000;
    auVar184._28_4_ = __real_3f800000;
    auVar124 = vsubps_avx(auVar184,auVar130);
    auVar146 = vpmovzxbd_avx2(auVar177);
    auVar146 = vpslld_avx2(auVar146,2);
    vpmovzxdq_avx2(auVar146._16_16_);
    vpmovzxdq_avx2(auVar146._0_16_);
    auVar119 = vxorps_avx512vl(auVar116,auVar116);
    auVar188 = vgatherqps_avx512vl(*(undefined8 *)(param_6 + param_3));
    bVar34 = (bool)((byte)(uVar110 >> 1) & 1);
    auVar117 = vgatherqps_avx512vl(*(undefined8 *)(param_6 + unaff_R15));
    bVar35 = (bool)(bVar109 >> 5 & 1);
    auVar122._8_8_ = (ulonglong)bVar35 * auVar117._8_8_ | (ulonglong)!bVar35 * SUB168(ZEXT816(0),4);
    auVar122._0_8_ = (ulonglong)(bVar109 >> 4 & 1) * auVar117._0_8_;
    auVar146 = vmaxps_avx(auVar130,auVar124);
    auVar178._0_4_ = auVar146._0_4_ + __real_3f800000;
    auVar178._4_4_ = auVar146._4_4_ + __real_3f800000;
    auVar178._8_4_ = auVar146._8_4_ + __real_3f800000;
    auVar178._12_4_ = auVar146._12_4_ + __real_3f800000;
    auVar178._16_4_ = auVar146._16_4_ + __real_3f800000;
    auVar178._20_4_ = auVar146._20_4_ + __real_3f800000;
    auVar178._24_4_ = auVar146._24_4_ + __real_3f800000;
    auVar178._28_4_ = auVar146._28_4_ + __real_3f800000;
    auVar185._4_4_ = __real_40000000;
    auVar185._0_4_ = __real_40000000;
    auVar185._8_4_ = __real_40000000;
    auVar185._12_4_ = __real_40000000;
    auVar185._16_4_ = __real_40000000;
    auVar185._20_4_ = __real_40000000;
    auVar185._24_4_ = __real_40000000;
    auVar185._28_4_ = __real_40000000;
    auVar146 = vdivps_avx(auVar185,auVar178);
    auVar180._4_4_ =
         (uint)bVar45 * ((uint)bVar46 * auVar137._4_4_ | (uint)!bVar46 * auVar118._4_4_) |
         (uint)!bVar45 * iStack_fc;
    auVar180._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar137._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar118._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_100;
    auVar180._8_4_ =
         (uint)bVar47 * ((uint)bVar60 * auVar137._8_4_ | (uint)!bVar60 * auVar118._8_4_) |
         (uint)!bVar47 * iStack_f8;
    auVar180._12_4_ =
         (uint)bVar59 * ((uint)bVar73 * auVar137._12_4_ | (uint)!bVar73 * auVar118._12_4_) |
         (uint)!bVar59 * iStack_f4;
    auVar180._16_4_ =
         (uint)bVar72 * (uint)((byte)(uVar110 >> 4) & 1) * auVar137._16_4_ |
         (uint)!bVar72 * iStack_f0;
    auVar180._20_4_ =
         (uint)bVar86 * (uint)((byte)(uVar110 >> 5) & 1) * auVar137._20_4_ |
         (uint)!bVar86 * iStack_ec;
    auVar180._24_4_ =
         (uint)bVar93 * (uint)((byte)(uVar110 >> 6) & 1) * auVar137._24_4_ |
         (uint)!bVar93 * iStack_e8;
    auVar180._28_4_ =
         (uint)bVar100 * (uint)(byte)(uVar110 >> 7) * auVar137._28_4_ | (uint)!bVar100 * iStack_e4;
    auVar129 = vfmadd213ps_avx512vl(auVar123,auVar130,auVar136);
    auVar131 = vsubps_avx(auVar138,auVar125);
    auVar123 = vsubps_avx(auVar127,auVar128);
    auVar125 = vsubps_avx(auVar180,auVar129);
    auVar128 = vinsertf32x4_avx512vl
                         (ZEXT1632(CONCAT88((ulonglong)bVar34 * auVar188._8_8_ |
                                            (ulonglong)!bVar34 * auVar119._8_8_,
                                            (ulonglong)(bVar109 & 1) * auVar188._0_8_ |
                                            (ulonglong)!(bool)(bVar109 & 1) * auVar119._0_8_)),
                          auVar122,1);
    auVar129 = vmulps_avx512vl(auVar123,auVar123);
    auVar129 = vfmadd231ps_avx512vl(auVar129,auVar131,auVar131);
    auVar129 = vfmadd231ps_avx512vl(auVar129,auVar125,auVar125);
    auVar129 = vsqrtps_avx512vl(auVar129);
    auVar133 = vdivps_avx512vl(auVar131,auVar129);
    auVar131 = vdivps_avx(auVar123,auVar129);
    auVar123 = vdivps_avx(auVar125,auVar129);
    auVar125 = vsubps_avx(auVar129,auVar132);
    auVar132 = vmulps_avx512vl(auVar133,auVar125);
    auVar133 = vmulps_avx512vl(auVar124,auVar150);
    auVar130 = vfmadd231ps_avx512vl(auVar133,auVar130,auVar149);
    auVar132 = vmulps_avx512vl(auVar128,auVar132);
    auVar182._0_4_ = auVar131._0_4_ * auVar125._0_4_ * auVar128._0_4_;
    auVar182._4_4_ = auVar131._4_4_ * auVar125._4_4_ * auVar128._4_4_;
    auVar182._8_4_ = auVar131._8_4_ * auVar125._8_4_ * auVar128._8_4_;
    auVar182._12_4_ = auVar131._12_4_ * auVar125._12_4_ * auVar128._12_4_;
    auVar182._16_4_ = auVar131._16_4_ * auVar125._16_4_ * auVar128._16_4_;
    auVar182._20_4_ = auVar131._20_4_ * auVar125._20_4_ * auVar128._20_4_;
    auVar182._24_4_ = auVar131._24_4_ * auVar125._24_4_ * auVar128._24_4_;
    auVar182._28_4_ = auVar131._28_4_ * auVar125._28_4_ * auVar128._28_4_;
    auVar174._0_4_ = auVar123._0_4_ * auVar125._0_4_ * auVar128._0_4_;
    auVar174._4_4_ = auVar123._4_4_ * auVar125._4_4_ * auVar128._4_4_;
    auVar174._8_4_ = auVar123._8_4_ * auVar125._8_4_ * auVar128._8_4_;
    auVar174._12_4_ = auVar123._12_4_ * auVar125._12_4_ * auVar128._12_4_;
    auVar174._16_4_ = auVar123._16_4_ * auVar125._16_4_ * auVar128._16_4_;
    auVar174._20_4_ = auVar123._20_4_ * auVar125._20_4_ * auVar128._20_4_;
    auVar174._24_4_ = auVar123._24_4_ * auVar125._24_4_ * auVar128._24_4_;
    auVar174._28_4_ = auVar123._28_4_ * auVar125._28_4_ * auVar128._28_4_;
    auVar186._0_4_ = auVar130._0_4_ + fVar6;
    auVar186._4_4_ = auVar130._4_4_ + fVar7;
    auVar186._8_4_ = auVar130._8_4_ + fVar8;
    auVar186._12_4_ = auVar130._12_4_ + fVar9;
    auVar186._16_4_ = auVar130._16_4_ + fVar10;
    auVar186._20_4_ = auVar130._20_4_ + fVar11;
    auVar186._24_4_ = auVar130._24_4_ + fVar12;
    auVar186._28_4_ = auVar130._28_4_ + fVar13;
    auVar123 = vdivps_avx512vl(auVar132,auVar186);
    auVar131 = vdivps_avx(auVar182,auVar186);
    auVar125 = vdivps_avx512vl(auVar174,auVar186);
    auVar104 = ZEXT412(0);
    uVar101 = vcmpps_avx512vl(auVar151,ZEXT1232(auVar104) << 0x20,0);
    uVar102 = vcmpps_avx512vl(auVar130,ZEXT1232(auVar104) << 0x20,0);
    auVar133._4_4_ = __real_322bcc77;
    auVar133._0_4_ = __real_322bcc77;
    auVar133._8_4_ = __real_322bcc77;
    auVar133._12_4_ = __real_322bcc77;
    auVar133._16_4_ = __real_322bcc77;
    auVar133._20_4_ = __real_322bcc77;
    auVar133._24_4_ = __real_322bcc77;
    auVar133._28_4_ = __real_322bcc77;
    uVar103 = vcmpps_avx512vl(auVar129,auVar133,2);
    bVar109 = (byte)uVar103 | (byte)uVar101 & (byte)uVar102;
    fVar17 = (float)((uint)!(bool)(bVar109 & 1) * auVar123._0_4_);
    fVar18 = (float)((uint)!(bool)(bVar109 >> 1 & 1) * auVar123._4_4_);
    auVar152._4_4_ = fVar18;
    auVar152._0_4_ = fVar17;
    fVar19 = (float)((uint)!(bool)(bVar109 >> 2 & 1) * auVar123._8_4_);
    auVar152._8_4_ = fVar19;
    fVar20 = (float)((uint)!(bool)(bVar109 >> 3 & 1) * auVar123._12_4_);
    auVar152._12_4_ = fVar20;
    fVar21 = (float)((uint)!(bool)(bVar109 >> 4 & 1) * auVar123._16_4_);
    auVar152._16_4_ = fVar21;
    fVar22 = (float)((uint)!(bool)(bVar109 >> 5 & 1) * auVar123._20_4_);
    auVar152._20_4_ = fVar22;
    fVar23 = (float)((uint)!(bool)(bVar109 >> 6 & 1) * auVar123._24_4_);
    auVar152._24_4_ = fVar23;
    auVar152._28_4_ =
         (float)((uint)(bVar109 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                (uint)!(bool)(bVar109 >> 7) * auVar123._28_4_);
    fVar24 = (float)((uint)!(bool)(bVar109 & 1) * auVar131._0_4_);
    fVar25 = (float)((uint)!(bool)(bVar109 >> 1 & 1) * auVar131._4_4_);
    auVar153._4_4_ = fVar25;
    auVar153._0_4_ = fVar24;
    fVar26 = (float)((uint)!(bool)(bVar109 >> 2 & 1) * auVar131._8_4_);
    auVar153._8_4_ = fVar26;
    fVar27 = (float)((uint)!(bool)(bVar109 >> 3 & 1) * auVar131._12_4_);
    auVar153._12_4_ = fVar27;
    fVar28 = (float)((uint)!(bool)(bVar109 >> 4 & 1) * auVar131._16_4_);
    auVar153._16_4_ = fVar28;
    fVar29 = (float)((uint)!(bool)(bVar109 >> 5 & 1) * auVar131._20_4_);
    auVar153._20_4_ = fVar29;
    fVar30 = (float)((uint)!(bool)(bVar109 >> 6 & 1) * auVar131._24_4_);
    auVar153._24_4_ = fVar30;
    fVar31 = (float)((uint)!(bool)(bVar109 >> 7) * auVar131._28_4_);
    auVar153._28_4_ = fVar31;
    auVar154._4_4_ = (uint)!(bool)(bVar109 >> 1 & 1) * auVar125._4_4_;
    auVar154._0_4_ = (uint)!(bool)(bVar109 & 1) * auVar125._0_4_;
    auVar154._8_4_ = (uint)!(bool)(bVar109 >> 2 & 1) * auVar125._8_4_;
    auVar154._12_4_ = (uint)!(bool)(bVar109 >> 3 & 1) * auVar125._12_4_;
    auVar154._16_4_ = (uint)!(bool)(bVar109 >> 4 & 1) * auVar125._16_4_;
    auVar154._20_4_ = (uint)!(bool)(bVar109 >> 5 & 1) * auVar125._20_4_;
    auVar154._24_4_ = (uint)!(bool)(bVar109 >> 6 & 1) * auVar125._24_4_;
    auVar154._28_4_ = (uint)!(bool)(bVar109 >> 7) * auVar125._28_4_;
    uVar107 = vcmpps_avx512vl(ZEXT1232(auVar104) << 0x20,auVar151,1);
    uVar107 = uVar110 & uVar107;
    if ((char)uVar107 != '\0') {
      auVar175._0_4_ = auVar146._0_4_ * fVar6;
      auVar175._4_4_ = auVar146._4_4_ * fVar7;
      auVar175._8_4_ = auVar146._8_4_ * fVar8;
      auVar175._12_4_ = auVar146._12_4_ * fVar9;
      auVar175._16_4_ = auVar146._16_4_ * fVar10;
      auVar175._20_4_ = auVar146._20_4_ * fVar11;
      auVar175._24_4_ = auVar146._24_4_ * fVar12;
      auVar175._28_4_ = auVar146._28_4_ * fVar13;
      auVar181._0_4_ = -(auVar175._0_4_ * fVar17) + fVar112;
      auVar181._4_4_ = -(auVar175._4_4_ * fVar18) + fVar156;
      auVar181._8_4_ = -(auVar175._8_4_ * fVar19) + fVar159;
      auVar181._12_4_ = -(auVar175._12_4_ * fVar20) + fVar162;
      auVar181._16_4_ = -(auVar175._16_4_ * fVar21) + fVar164;
      auVar181._20_4_ = -(auVar175._20_4_ * fVar22) + fVar166;
      auVar181._24_4_ = -(auVar175._24_4_ * fVar23) + fVar168;
      auVar181._28_4_ = -(auVar175._28_4_ * auVar152._28_4_) + fVar170;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar152,uVar107,auVar181);
      auVar179._0_4_ = -(auVar175._0_4_ * fVar24) + fVar113;
      auVar179._4_4_ = -(auVar175._4_4_ * fVar25) + fVar157;
      auVar179._8_4_ = -(auVar175._8_4_ * fVar26) + fVar160;
      auVar179._12_4_ = -(auVar175._12_4_ * fVar27) + fVar163;
      auVar179._16_4_ = -(auVar175._16_4_ * fVar28) + fVar165;
      auVar179._20_4_ = -(auVar175._20_4_ * fVar29) + fVar167;
      auVar179._24_4_ = -(auVar175._24_4_ * fVar30) + fVar169;
      auVar179._28_4_ = -(auVar175._28_4_ * fVar31) + fVar171;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar180,uVar107,auVar179);
      auVar131 = vfnmadd231ps_avx512vl(auVar180,auVar154,auVar175);
      vscatterdps_avx512vl(ZEXT832(param_1) + (ZEXT1232(auVar104) << 0x20),uVar107,auVar131);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar129,uVar107,auVar151);
    }
    uVar107 = vcmpps_avx512vl(auVar149,ZEXT1232(auVar104) << 0x20,0xc);
    uVar107 = uVar110 & uVar107;
    if ((char)uVar107 != '\0') {
      auVar131 = vmulps_avx512vl(auVar149,auVar146);
      auVar172._0_4_ = fVar1 * auVar131._0_4_;
      auVar172._4_4_ = fVar14 * auVar131._4_4_;
      auVar172._8_4_ = fVar15 * auVar131._8_4_;
      auVar172._12_4_ = fVar16 * auVar131._12_4_;
      auVar172._16_4_ = fVar2 * auVar131._16_4_;
      auVar172._20_4_ = fVar3 * auVar131._20_4_;
      auVar172._24_4_ = fVar4 * auVar131._24_4_;
      auVar172._28_4_ = fVar5 * auVar131._28_4_;
      auVar123 = vfmadd231ps_avx512vl(auVar139,auVar172,auVar152);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar142,uVar107,auVar123);
      auVar123 = vfmadd231ps_avx512vl(auVar140,auVar172,auVar153);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar141,uVar107,auVar123);
      auVar123 = vfmadd231ps_avx512vl(auVar143,auVar154,auVar172);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar131,uVar107,auVar123);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar130,uVar107,auVar149);
    }
    uVar107 = vcmpps_avx512vl(auVar150,ZEXT832(0) << 0x40,0xc);
    uVar110 = uVar110 & uVar107;
    if ((char)uVar110 != '\0') {
      auVar146 = vmulps_avx512vl(auVar150,auVar146);
      auVar173._0_4_ = auVar124._0_4_ * auVar146._0_4_;
      auVar173._4_4_ = auVar124._4_4_ * auVar146._4_4_;
      auVar173._8_4_ = auVar124._8_4_ * auVar146._8_4_;
      auVar173._12_4_ = auVar124._12_4_ * auVar146._12_4_;
      auVar173._16_4_ = auVar124._16_4_ * auVar146._16_4_;
      auVar173._20_4_ = auVar124._20_4_ * auVar146._20_4_;
      auVar173._24_4_ = auVar124._24_4_ * auVar146._24_4_;
      auVar173._28_4_ = auVar124._28_4_ * auVar146._28_4_;
      auVar146 = vfmadd213ps_avx512vl(auVar152,auVar173,auVar134);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar141,uVar110,auVar146);
      auVar146 = vfmadd213ps_avx512vl(auVar153,auVar173,auVar135);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar141 | auVar147),uVar110,auVar146);
      auVar146 = vfmadd213ps_avx512vl(auVar154,auVar173,auVar136);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar141 | auVar148),uVar110,auVar146);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar141 | auVar126),uVar110,auVar150);
    }
  }
  return;
}

// ApplyAxialSpringConstraints_avx512skx @ 14000a270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraints_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,float param_5
               ,uint param_6)

{
  float fVar1;
  float fVar5;
  float fVar9;
  float fVar16;
  int *piVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  bool bVar71;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  bool bVar76;
  bool bVar77;
  bool bVar78;
  bool bVar79;
  bool bVar80;
  bool bVar81;
  bool bVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
  bool bVar86;
  bool bVar87;
  bool bVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined1 auVar92 [12];
  uint uVar93;
  longlong lVar94;
  ulonglong unaff_RBX;
  undefined1 (*pauVar95) [32];
  ulonglong uVar96;
  uint uVar97;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar98;
  ulonglong uVar99;
  int iVar100;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar101;
  float fVar102;
  float fVar103;
  int iVar146;
  int iVar150;
  undefined1 auVar104 [16];
  float fVar158;
  float fVar161;
  float fVar164;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  int iVar154;
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar108 [16];
  undefined1 auVar138 [32];
  undefined1 auVar109 [16];
  undefined1 auVar139 [32];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar159;
  float fVar160;
  float fVar162;
  float fVar163;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar170 [32];
  float fVar171;
  float fVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  undefined1 auVar172 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  float fVar188;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  float fVar198;
  undefined1 auVar191 [32];
  undefined1 auVar199 [32];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM31 [64];
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  auVar111 = in_ZMM29._0_16_;
  auVar109 = in_ZMM28._0_16_;
  auVar108 = in_ZMM27._0_16_;
  auVar107 = in_ZMM20._0_16_;
  auVar110 = in_ZMM25._0_16_;
  auVar106 = in_ZMM23._0_16_;
  auVar105 = in_ZMM22._0_16_;
  uVar97 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar97 = param_6;
  }
  uVar97 = uVar97 & 0xfffffff8;
  if ((int)uVar97 < 1) {
    uVar99 = 0;
  }
  else {
    pauVar95 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar99 = 0;
    auVar104 = vxorps_avx512vl(in_ZMM19._0_16_,in_ZMM19._0_16_);
    uVar96 = 0;
    auVar136._4_4_ = __real_3f800000;
    auVar136._0_4_ = __real_3f800000;
    auVar136._8_4_ = __real_3f800000;
    auVar136._12_4_ = __real_3f800000;
    auVar136._16_4_ = __real_3f800000;
    auVar136._20_4_ = __real_3f800000;
    auVar136._24_4_ = __real_3f800000;
    auVar136._28_4_ = __real_3f800000;
    do {
      auVar119 = pauVar95[-1];
      auVar112 = vpermt2d_avx512vl(pauVar95[-2],
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar119);
      auVar113 = vpermt2d_avx512vl(*pauVar95,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar119);
      auVar129 = vperm2i128_avx2(auVar112,auVar113,0x31);
      auVar114 = vpslld_avx512vl(auVar129,4);
      auVar111 = auVar114._0_16_;
      auVar115 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      auVar137._4_4_ = __real_00000004;
      auVar137._0_4_ = __real_00000004;
      auVar137._8_4_ = __real_00000004;
      auVar137._12_4_ = __real_00000004;
      auVar137._16_4_ = __real_00000004;
      auVar137._20_4_ = __real_00000004;
      auVar137._24_4_ = __real_00000004;
      auVar137._28_4_ = __real_00000004;
      auVar116 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar99));
      auVar139._4_4_ = __real_00000008;
      auVar139._0_4_ = __real_00000008;
      auVar139._8_4_ = __real_00000008;
      auVar139._12_4_ = __real_00000008;
      auVar139._16_4_ = __real_00000008;
      auVar139._20_4_ = __real_00000008;
      auVar139._24_4_ = __real_00000008;
      auVar139._28_4_ = __real_00000008;
      auVar117 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar96));
      auVar138._4_4_ = __real_0000000c;
      auVar138._0_4_ = __real_0000000c;
      auVar138._8_4_ = __real_0000000c;
      auVar138._12_4_ = __real_0000000c;
      auVar138._16_4_ = __real_0000000c;
      auVar138._20_4_ = __real_0000000c;
      auVar138._24_4_ = __real_0000000c;
      auVar138._28_4_ = __real_0000000c;
      auVar118 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_6));
      auVar119 = vpblendd_avx2(auVar119,pauVar95[-2],0x24);
      auVar119 = vpermt2d_avx512vl(auVar119,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*pauVar95);
      auVar120 = vpslld_avx512vl(auVar119,4);
      auVar105 = auVar120._0_16_;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar121 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar95));
      in_ZMM31 = ZEXT3264(auVar121);
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar122 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      in_ZMM26 = ZEXT3264(auVar122);
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar123 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar108 = auVar123._0_16_;
      in_ZMM27 = ZEXT3264(auVar123);
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar124 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar109 = auVar124._0_16_;
      in_ZMM28 = ZEXT3264(auVar124);
      auVar119._16_16_ = ZEXT116(0) * auVar112._16_16_ | ZEXT116(1) * auVar113._0_16_;
      auVar119._0_16_ = ZEXT116(0) * auVar113._0_16_ | ZEXT116(1) * auVar112._0_16_;
      auVar189 = vpslld_avx2(auVar119,4);
      auVar125 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar126 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
      auVar127 = vgatherdps_avx512vl(*param_1);
      unaff_RBX = uVar96 & 0xffffffff;
      auVar119 = *(undefined1 (*) [32])(param_3 + unaff_RBX);
      auVar128 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar129 = vsubps_avx512vl(auVar115,auVar121);
      auVar112 = vsubps_avx512vl(auVar116,auVar122);
      auVar113 = vsubps_avx512vl(auVar117,auVar123);
      auVar129 = vfmadd213ps_avx512vl(auVar129,auVar119,auVar121);
      auVar112 = vfmadd213ps_avx512vl(auVar112,auVar119,auVar122);
      auVar113 = vfmadd213ps_avx512vl(auVar113,auVar119,auVar123);
      auVar129 = vsubps_avx(auVar125,auVar129);
      auVar112 = vsubps_avx512vl(auVar126,auVar112);
      auVar113 = vsubps_avx512vl(auVar127,auVar113);
      auVar130 = vmulps_avx512vl(auVar112,auVar112);
      auVar130 = vfmadd231ps_avx512vl(auVar130,auVar129,auVar129);
      auVar130 = vfmadd231ps_avx512vl(auVar130,auVar113,auVar113);
      auVar130 = vsqrtps_avx512vl(auVar130);
      auVar131 = vsubps_avx512vl(auVar136,auVar119);
      auVar129 = vdivps_avx512vl(auVar129,auVar130);
      auVar112 = vdivps_avx512vl(auVar112,auVar130);
      auVar113 = vdivps_avx512vl(auVar113,auVar130);
      auVar132 = vsubps_avx512vl(auVar130,*(undefined1 (*) [32])(param_4 + unaff_RBX));
      auVar129 = vmulps_avx512vl(auVar129,auVar132);
      auVar112 = vmulps_avx512vl(auVar112,auVar132);
      auVar132 = vmulps_avx512vl(auVar113,auVar132);
      auVar113 = vmulps_avx512vl(auVar131,auVar124);
      auVar133 = vfmadd231ps_avx512vl(auVar113,auVar119,auVar118);
      auVar106 = auVar133._0_16_;
      auVar134 = vaddps_avx512vl(auVar133,auVar128);
      auVar113._4_4_ = param_5;
      auVar113._0_4_ = param_5;
      auVar113._8_4_ = param_5;
      auVar113._12_4_ = param_5;
      auVar113._16_4_ = param_5;
      auVar113._20_4_ = param_5;
      auVar113._24_4_ = param_5;
      auVar113._28_4_ = param_5;
      auVar129 = vmulps_avx512vl(auVar113,auVar129);
      auVar112 = vmulps_avx512vl(auVar113,auVar112);
      auVar113 = vmulps_avx512vl(auVar113,auVar132);
      auVar110 = auVar113._0_16_;
      auVar132 = vdivps_avx512vl(auVar129,auVar134);
      auVar135 = vdivps_avx512vl(auVar112,auVar134);
      auVar113 = vdivps_avx512vl(auVar113,auVar134);
      uVar89 = vcmpps_avx512vl(auVar128,ZEXT1632(auVar104),0);
      uVar90 = vcmpps_avx512vl(auVar133,ZEXT1632(auVar104),0);
      auVar129._4_4_ = __real_322bcc77;
      auVar129._0_4_ = __real_322bcc77;
      auVar129._8_4_ = __real_322bcc77;
      auVar129._12_4_ = __real_322bcc77;
      auVar129._16_4_ = __real_322bcc77;
      auVar129._20_4_ = __real_322bcc77;
      auVar129._24_4_ = __real_322bcc77;
      auVar129._28_4_ = __real_322bcc77;
      uVar91 = vcmpps_avx512vl(auVar130,auVar129,2);
      auVar129 = vmaxps_avx512vl(auVar119,auVar131);
      auVar129 = vaddps_avx512vl(auVar129,auVar136);
      auVar112._4_4_ = __real_40000000;
      auVar112._0_4_ = __real_40000000;
      auVar112._8_4_ = __real_40000000;
      auVar112._12_4_ = __real_40000000;
      auVar112._16_4_ = __real_40000000;
      auVar112._20_4_ = __real_40000000;
      auVar112._24_4_ = __real_40000000;
      auVar112._28_4_ = __real_40000000;
      auVar129 = vdivps_avx512vl(auVar112,auVar129);
      bVar98 = (byte)uVar91 | (byte)uVar89 & (byte)uVar90;
      iVar100 = auVar104._0_4_;
      auVar130._0_4_ = (uint)(bVar98 & 1) * iVar100 | (uint)!(bool)(bVar98 & 1) * auVar132._0_4_;
      bVar25 = (bool)(bVar98 >> 1 & 1);
      iVar146 = auVar104._4_4_;
      auVar130._4_4_ = (uint)bVar25 * iVar146 | (uint)!bVar25 * auVar132._4_4_;
      bVar25 = (bool)(bVar98 >> 2 & 1);
      iVar150 = auVar104._8_4_;
      auVar130._8_4_ = (uint)bVar25 * iVar150 | (uint)!bVar25 * auVar132._8_4_;
      bVar25 = (bool)(bVar98 >> 3 & 1);
      iVar154 = auVar104._12_4_;
      auVar130._12_4_ = (uint)bVar25 * iVar154 | (uint)!bVar25 * auVar132._12_4_;
      auVar130._16_4_ = (uint)!(bool)(bVar98 >> 4 & 1) * auVar132._16_4_;
      auVar130._20_4_ = (uint)!(bool)(bVar98 >> 5 & 1) * auVar132._20_4_;
      auVar130._24_4_ = (uint)!(bool)(bVar98 >> 6 & 1) * auVar132._24_4_;
      auVar130._28_4_ =
           (uint)(bVar98 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!(bool)(bVar98 >> 7) * auVar132._28_4_;
      auVar107._0_4_ = (uint)(bVar98 & 1) * iVar100 | (uint)!(bool)(bVar98 & 1) * auVar135._0_4_;
      bVar25 = (bool)(bVar98 >> 1 & 1);
      auVar107._4_4_ = (uint)bVar25 * iVar146 | (uint)!bVar25 * auVar135._4_4_;
      bVar25 = (bool)(bVar98 >> 2 & 1);
      auVar107._8_4_ = (uint)bVar25 * iVar150 | (uint)!bVar25 * auVar135._8_4_;
      bVar25 = (bool)(bVar98 >> 3 & 1);
      auVar107._12_4_ = (uint)bVar25 * iVar154 | (uint)!bVar25 * auVar135._12_4_;
      auVar132._16_4_ = (uint)!(bool)(bVar98 >> 4 & 1) * auVar135._16_4_;
      auVar132._0_16_ = auVar107;
      auVar132._20_4_ = (uint)!(bool)(bVar98 >> 5 & 1) * auVar135._20_4_;
      auVar132._24_4_ = (uint)!(bool)(bVar98 >> 6 & 1) * auVar135._24_4_;
      auVar132._28_4_ = (uint)!(bool)(bVar98 >> 7) * auVar135._28_4_;
      auVar133._0_4_ =
           (float)((uint)(bVar98 & 1) * iVar100 | (uint)!(bool)(bVar98 & 1) * auVar113._0_4_);
      bVar25 = (bool)(bVar98 >> 1 & 1);
      auVar133._4_4_ = (float)((uint)bVar25 * iVar146 | (uint)!bVar25 * auVar113._4_4_);
      bVar25 = (bool)(bVar98 >> 2 & 1);
      auVar133._8_4_ = (float)((uint)bVar25 * iVar150 | (uint)!bVar25 * auVar113._8_4_);
      bVar25 = (bool)(bVar98 >> 3 & 1);
      auVar133._12_4_ = (float)((uint)bVar25 * iVar154 | (uint)!bVar25 * auVar113._12_4_);
      fVar5 = (float)((uint)!(bool)(bVar98 >> 4 & 1) * auVar113._16_4_);
      auVar133._16_4_ = fVar5;
      fVar6 = (float)((uint)!(bool)(bVar98 >> 5 & 1) * auVar113._20_4_);
      auVar133._20_4_ = fVar6;
      fVar7 = (float)((uint)!(bool)(bVar98 >> 6 & 1) * auVar113._24_4_);
      auVar133._24_4_ = fVar7;
      fVar8 = (float)((uint)!(bool)(bVar98 >> 7) * auVar113._28_4_);
      auVar133._28_4_ = fVar8;
      uVar89 = vcmpps_avx512vl(ZEXT1632(auVar104),auVar128,1);
      if ((char)uVar89 != '\0') {
        auVar112 = vmulps_avx512vl(auVar128,auVar129);
        auVar113 = vfnmadd231ps_avx512vl(auVar125,auVar112,auVar130);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar189,uVar89,auVar113);
        auVar113 = vfnmadd231ps_avx512vl(auVar126,auVar112,auVar132);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar189 | auVar137),uVar89,auVar113);
        auVar127 = vfnmadd231ps_avx512vl(auVar127,auVar133,auVar112);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar189 | auVar139),uVar89,auVar127);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar189 | auVar138),uVar89,auVar128);
      }
      in_ZMM21 = ZEXT3264(auVar127);
      uVar89 = vcmpps_avx512vl(auVar118,ZEXT1632(auVar104),0xc);
      if ((char)uVar89 != '\0') {
        auVar112 = vmulps_avx512vl(auVar118,auVar129);
        auVar125._0_4_ = auVar119._0_4_ * auVar112._0_4_;
        auVar125._4_4_ = auVar119._4_4_ * auVar112._4_4_;
        auVar125._8_4_ = auVar119._8_4_ * auVar112._8_4_;
        auVar125._12_4_ = auVar119._12_4_ * auVar112._12_4_;
        auVar125._16_4_ = auVar119._16_4_ * auVar112._16_4_;
        auVar125._20_4_ = auVar119._20_4_ * auVar112._20_4_;
        auVar125._24_4_ = auVar119._24_4_ * auVar112._24_4_;
        auVar125._28_4_ = auVar119._28_4_ * auVar112._28_4_;
        auVar115 = vfmadd231ps_avx512vl(auVar115,auVar125,auVar130);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar119,uVar89,auVar115);
        auVar119 = vfmadd231ps_avx512vl(auVar116,auVar125,auVar132);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar114 | auVar137),uVar89,auVar119);
        auVar116._0_4_ = auVar133._0_4_ * auVar125._0_4_ + auVar117._0_4_;
        auVar116._4_4_ = auVar133._4_4_ * auVar125._4_4_ + auVar117._4_4_;
        auVar116._8_4_ = auVar133._8_4_ * auVar125._8_4_ + auVar117._8_4_;
        auVar116._12_4_ = auVar133._12_4_ * auVar125._12_4_ + auVar117._12_4_;
        auVar116._16_4_ = fVar5 * auVar125._16_4_ + auVar117._16_4_;
        auVar116._20_4_ = fVar6 * auVar125._20_4_ + auVar117._20_4_;
        auVar116._24_4_ = fVar7 * auVar125._24_4_ + auVar117._24_4_;
        auVar116._28_4_ = fVar8 * auVar125._28_4_ + auVar117._28_4_;
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar114 | auVar139),uVar89,auVar116);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar114 | auVar138),uVar89,auVar118);
      }
      uVar89 = vcmpps_avx512vl(auVar124,ZEXT1632(auVar104),0xc);
      if ((char)uVar89 != '\0') {
        auVar119 = vmulps_avx512vl(auVar124,auVar129);
        auVar114._0_4_ = auVar131._0_4_ * auVar119._0_4_;
        auVar114._4_4_ = auVar131._4_4_ * auVar119._4_4_;
        auVar114._8_4_ = auVar131._8_4_ * auVar119._8_4_;
        auVar114._12_4_ = auVar131._12_4_ * auVar119._12_4_;
        auVar114._16_4_ = auVar131._16_4_ * auVar119._16_4_;
        auVar114._20_4_ = auVar131._20_4_ * auVar119._20_4_;
        auVar114._24_4_ = auVar131._24_4_ * auVar119._24_4_;
        auVar114._28_4_ = auVar131._28_4_ * auVar119._28_4_;
        auVar119 = vfmadd213ps_avx512vl(auVar130,auVar114,auVar121);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar115,uVar89,auVar119);
        auVar119 = vfmadd213ps_avx512vl(auVar132,auVar114,auVar122);
        auVar107 = auVar119._0_16_;
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar120 | auVar137),uVar89,auVar119);
        auVar119 = vfmadd213ps_avx512vl(auVar133,auVar114,auVar123);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar120 | auVar139),uVar89,auVar119);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar120 | auVar138),uVar89,auVar124);
      }
      uVar96 = uVar96 + 0x20;
      pauVar95 = pauVar95 + 3;
      uVar93 = (int)uVar99 + 8;
      uVar99 = (ulonglong)uVar93;
    } while ((int)uVar93 < (int)uVar97);
  }
  if ((int)uVar99 < (int)param_6) {
    auVar136 = vpbroadcastd_avx512vl();
    auVar136 = vpor_avx2(auVar136,
                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar119 = vpbroadcastd_avx512vl();
    uVar96 = vpcmpgtd_avx512vl(auVar119,auVar136);
    pauVar95 = (undefined1 (*) [32])(param_2 + uVar99 * 0xc);
    bVar98 = (byte)uVar96;
    if (bVar98 == 0xff) {
      auVar136 = pauVar95[1];
      auVar119 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar95,auVar136);
      auVar129 = vpermi2d_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar95[2],auVar136);
      auVar118._16_16_ = ZEXT116(0) * auVar119._16_16_ | ZEXT116(1) * auVar129._0_16_;
      auVar118._0_16_ = ZEXT116(0) * auVar129._0_16_ | ZEXT116(1) * auVar119._0_16_;
      auVar117 = vperm2i128_avx2(auVar119,auVar129,0x31);
      auVar136 = vpblendd_avx2(auVar136,*pauVar95,0x24);
      auVar120 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar136,pauVar95[2]);
    }
    else {
      auVar136 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar95 + (longlong)param_1));
      auVar118._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * auVar136._4_4_;
      auVar118._0_4_ = (uint)(bVar98 & 1) * auVar136._0_4_;
      auVar118._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * auVar136._8_4_;
      auVar118._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * auVar136._12_4_;
      auVar118._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * auVar136._16_4_;
      auVar118._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * auVar136._20_4_;
      auVar118._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * auVar136._24_4_;
      auVar118._28_4_ = (uint)(byte)(uVar96 >> 7) * auVar136._28_4_;
      auVar136 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar95 + (longlong)param_1));
      auVar117._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * auVar136._4_4_;
      auVar117._0_4_ = (uint)(bVar98 & 1) * auVar136._0_4_;
      auVar117._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * auVar136._8_4_;
      auVar117._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * auVar136._12_4_;
      auVar117._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * auVar136._16_4_;
      auVar117._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * auVar136._20_4_;
      auVar117._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * auVar136._24_4_;
      auVar117._28_4_ = (uint)(byte)(uVar96 >> 7) * auVar136._28_4_;
      auVar136 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar95 + unaff_RBX));
      auVar120._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * auVar136._4_4_;
      auVar120._0_4_ = (uint)(bVar98 & 1) * auVar136._0_4_;
      auVar120._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * auVar136._8_4_;
      auVar120._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * auVar136._12_4_;
      auVar120._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * auVar136._16_4_;
      auVar120._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * auVar136._20_4_;
      auVar120._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * auVar136._24_4_;
      auVar120._28_4_ = (uint)(byte)(uVar96 >> 7) * auVar136._28_4_;
    }
    vpslld_avx512vl(auVar117,4);
    auVar137 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar105 = vxorps_avx512vl(auVar105,auVar105);
    auVar136 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar99));
    auVar104._0_4_ =
         (uint)(bVar98 & 1) * auVar136._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar105._0_4_;
    bVar25 = (bool)((byte)(uVar96 >> 1) & 1);
    auVar104._4_4_ = (uint)bVar25 * auVar136._4_4_ | (uint)!bVar25 * auVar105._4_4_;
    bVar25 = (bool)((byte)(uVar96 >> 2) & 1);
    auVar104._8_4_ = (uint)bVar25 * auVar136._8_4_ | (uint)!bVar25 * auVar105._8_4_;
    bVar25 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar104._12_4_ = (uint)bVar25 * auVar136._12_4_ | (uint)!bVar25 * auVar105._12_4_;
    auVar105 = vxorps_avx512vl(auVar106,auVar106);
    auVar119 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar25 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar39 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar52 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar113 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar106 = vxorps_avx512vl(auVar110,auVar110);
    auVar129 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar95));
    bVar26 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar40 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar53 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar114 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar107 = vxorps_avx512vl(auVar107,auVar107);
    auVar112 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    auVar115._0_4_ =
         (uint)(bVar98 & 1) * auVar112._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar107._0_4_;
    bVar27 = (bool)((byte)(uVar96 >> 1) & 1);
    auVar115._4_4_ = (uint)bVar27 * auVar112._4_4_ | (uint)!bVar27 * auVar107._4_4_;
    bVar27 = (bool)((byte)(uVar96 >> 2) & 1);
    auVar115._8_4_ = (uint)bVar27 * auVar112._8_4_ | (uint)!bVar27 * auVar107._8_4_;
    bVar27 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar115._12_4_ = (uint)bVar27 * auVar112._12_4_ | (uint)!bVar27 * auVar107._12_4_;
    auVar115._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * auVar112._16_4_;
    auVar115._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * auVar112._20_4_;
    auVar115._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * auVar112._24_4_;
    auVar115._28_4_ = (uint)(byte)(uVar96 >> 7) * auVar112._28_4_;
    auVar125 = vpslld_avx2(auVar120,4);
    auVar107 = vxorps_avx512vl(auVar108,auVar108);
    auVar112 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar27 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar41 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar54 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar108 = vxorps_avx512vl(auVar109,auVar109);
    auVar138 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar95));
    bVar28 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar42 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar55 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar109 = vxorps_avx512vl(auVar111,auVar111);
    auVar139 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar95));
    bVar29 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar43 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar56 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar116 = vgatherdps_avx512vl(*param_1);
    fVar1 = (float)((uint)(bVar98 & 1) * auVar116._0_4_);
    fVar7 = (float)((uint)((byte)(uVar96 >> 1) & 1) * auVar116._4_4_);
    auVar189._4_4_ = fVar7;
    auVar189._0_4_ = fVar1;
    fVar8 = (float)((uint)((byte)(uVar96 >> 2) & 1) * auVar116._8_4_);
    auVar189._8_4_ = fVar8;
    fVar5 = (float)((uint)((byte)(uVar96 >> 3) & 1) * auVar116._12_4_);
    auVar189._12_4_ = fVar5;
    fVar6 = (float)((uint)((byte)(uVar96 >> 4) & 1) * auVar116._16_4_);
    auVar189._16_4_ = fVar6;
    fVar2 = (float)((uint)((byte)(uVar96 >> 5) & 1) * auVar116._20_4_);
    auVar189._20_4_ = fVar2;
    fVar3 = (float)((uint)((byte)(uVar96 >> 6) & 1) * auVar116._24_4_);
    auVar189._24_4_ = fVar3;
    fVar4 = (float)((uint)(byte)(uVar96 >> 7) * auVar116._28_4_);
    auVar189._28_4_ = fVar4;
    bVar30 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar44 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar57 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar65 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar71 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar77 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar83 = SUB81(uVar96 >> 7,0);
    bVar31 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar45 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar58 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar66 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar72 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar78 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar84 = SUB81(uVar96 >> 7,0);
    bVar32 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar46 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar59 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar67 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar73 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar79 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar85 = SUB81(uVar96 >> 7,0);
    bVar33 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar47 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar60 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar68 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar74 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar80 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar86 = SUB81(uVar96 >> 7,0);
    bVar34 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar48 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar61 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar69 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar75 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar81 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar87 = SUB81(uVar96 >> 7,0);
    bVar35 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar49 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar62 = (bool)((byte)(uVar96 >> 3) & 1);
    bVar70 = (bool)((byte)(uVar96 >> 4) & 1);
    bVar76 = (bool)((byte)(uVar96 >> 5) & 1);
    bVar82 = (bool)((byte)(uVar96 >> 6) & 1);
    bVar88 = SUB81(uVar96 >> 7,0);
    vpslld_avx512vl(auVar118,4);
    auVar116 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar97));
    auVar110 = vxorps_avx512vl(auVar137._0_16_,auVar137._0_16_);
    auVar117 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
    bVar36 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar50 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar63 = (bool)((byte)(uVar96 >> 3) & 1);
    lVar94 = (longlong)((int)uVar99 << 2);
    auVar111 = vxorps_avx512vl(auVar104,auVar104);
    auVar118 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
    bVar37 = (bool)((byte)(uVar96 >> 1) & 1);
    bVar51 = (bool)((byte)(uVar96 >> 2) & 1);
    bVar64 = (bool)((byte)(uVar96 >> 3) & 1);
    auVar120 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
    fVar171 = (float)((uint)(bVar98 & 1) * auVar120._0_4_);
    fVar173 = (float)((uint)((byte)(uVar96 >> 1) & 1) * auVar120._4_4_);
    auVar140._4_4_ = fVar173;
    auVar140._0_4_ = fVar171;
    fVar174 = (float)((uint)((byte)(uVar96 >> 2) & 1) * auVar120._8_4_);
    auVar140._8_4_ = fVar174;
    fVar175 = (float)((uint)((byte)(uVar96 >> 3) & 1) * auVar120._12_4_);
    auVar140._12_4_ = fVar175;
    fVar176 = (float)((uint)((byte)(uVar96 >> 4) & 1) * auVar120._16_4_);
    auVar140._16_4_ = fVar176;
    fVar177 = (float)((uint)((byte)(uVar96 >> 5) & 1) * auVar120._20_4_);
    auVar140._20_4_ = fVar177;
    fVar178 = (float)((uint)((byte)(uVar96 >> 6) & 1) * auVar120._24_4_);
    auVar140._24_4_ = fVar178;
    fVar179 = (float)((uint)(byte)(uVar96 >> 7) * auVar120._28_4_);
    auVar140._28_4_ = fVar179;
    piVar24 = (int *)(param_3 + lVar94);
    auVar141._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * piVar24[1];
    auVar141._0_4_ = (uint)(bVar98 & 1) * *piVar24;
    auVar141._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * piVar24[2];
    auVar141._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * piVar24[3];
    auVar141._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * piVar24[4];
    auVar141._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * piVar24[5];
    auVar141._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * piVar24[6];
    auVar141._28_4_ = (uint)(byte)(uVar96 >> 7) * piVar24[7];
    fVar101 = (float)((uint)(bVar98 & 1) * (uint)(bVar98 & 1) * auVar116._0_4_ |
                     (uint)!(bool)(bVar98 & 1) * local_140);
    bVar38 = (bool)((byte)(uVar96 >> 1) & 1);
    fVar147 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 1) & 1) * auVar116._4_4_ |
                     (uint)!bVar38 * iStack_13c);
    bVar38 = (bool)((byte)(uVar96 >> 2) & 1);
    fVar151 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 2) & 1) * auVar116._8_4_ |
                     (uint)!bVar38 * iStack_138);
    bVar38 = (bool)((byte)(uVar96 >> 3) & 1);
    fVar155 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 3) & 1) * auVar116._12_4_ |
                     (uint)!bVar38 * iStack_134);
    bVar38 = (bool)((byte)(uVar96 >> 4) & 1);
    fVar158 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 4) & 1) * auVar116._16_4_ |
                     (uint)!bVar38 * iStack_130);
    bVar38 = (bool)((byte)(uVar96 >> 5) & 1);
    fVar161 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 5) & 1) * auVar116._20_4_ |
                     (uint)!bVar38 * iStack_12c);
    bVar38 = (bool)((byte)(uVar96 >> 6) & 1);
    fVar164 = (float)((uint)bVar38 * (uint)((byte)(uVar96 >> 6) & 1) * auVar116._24_4_ |
                     (uint)!bVar38 * iStack_128);
    bVar38 = SUB81(uVar96 >> 7,0);
    fVar167 = (float)((uint)bVar38 * (uint)(byte)(uVar96 >> 7) * auVar116._28_4_ |
                     (uint)!bVar38 * iStack_124);
    fVar102 = (float)((uint)(bVar98 & 1) *
                      ((uint)(bVar98 & 1) * auVar117._0_4_ |
                      (uint)!(bool)(bVar98 & 1) * auVar110._0_4_) |
                     (uint)!(bool)(bVar98 & 1) * local_120);
    bVar38 = (bool)((byte)(uVar96 >> 1) & 1);
    fVar148 = (float)((uint)bVar38 *
                      ((uint)bVar36 * auVar117._4_4_ | (uint)!bVar36 * auVar110._4_4_) |
                     (uint)!bVar38 * iStack_11c);
    bVar36 = (bool)((byte)(uVar96 >> 2) & 1);
    fVar152 = (float)((uint)bVar36 *
                      ((uint)bVar50 * auVar117._8_4_ | (uint)!bVar50 * auVar110._8_4_) |
                     (uint)!bVar36 * iStack_118);
    bVar36 = (bool)((byte)(uVar96 >> 3) & 1);
    fVar156 = (float)((uint)bVar36 *
                      ((uint)bVar63 * auVar117._12_4_ | (uint)!bVar63 * auVar110._12_4_) |
                     (uint)!bVar36 * iStack_114);
    bVar36 = (bool)((byte)(uVar96 >> 4) & 1);
    fVar159 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 4) & 1) * auVar117._16_4_ |
                     (uint)!bVar36 * iStack_110);
    bVar36 = (bool)((byte)(uVar96 >> 5) & 1);
    fVar162 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 5) & 1) * auVar117._20_4_ |
                     (uint)!bVar36 * iStack_10c);
    bVar36 = (bool)((byte)(uVar96 >> 6) & 1);
    fVar165 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 6) & 1) * auVar117._24_4_ |
                     (uint)!bVar36 * iStack_108);
    bVar36 = SUB81(uVar96 >> 7,0);
    fVar168 = (float)((uint)bVar36 * (uint)(byte)(uVar96 >> 7) * auVar117._28_4_ |
                     (uint)!bVar36 * iStack_104);
    fVar103 = (float)((uint)(bVar98 & 1) *
                      ((uint)(bVar98 & 1) * auVar118._0_4_ |
                      (uint)!(bool)(bVar98 & 1) * auVar111._0_4_) |
                     (uint)!(bool)(bVar98 & 1) * local_100);
    bVar36 = (bool)((byte)(uVar96 >> 1) & 1);
    fVar149 = (float)((uint)bVar36 *
                      ((uint)bVar37 * auVar118._4_4_ | (uint)!bVar37 * auVar111._4_4_) |
                     (uint)!bVar36 * iStack_fc);
    bVar36 = (bool)((byte)(uVar96 >> 2) & 1);
    fVar153 = (float)((uint)bVar36 *
                      ((uint)bVar51 * auVar118._8_4_ | (uint)!bVar51 * auVar111._8_4_) |
                     (uint)!bVar36 * iStack_f8);
    bVar36 = (bool)((byte)(uVar96 >> 3) & 1);
    fVar157 = (float)((uint)bVar36 *
                      ((uint)bVar64 * auVar118._12_4_ | (uint)!bVar64 * auVar111._12_4_) |
                     (uint)!bVar36 * iStack_f4);
    bVar36 = (bool)((byte)(uVar96 >> 4) & 1);
    fVar160 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 4) & 1) * auVar118._16_4_ |
                     (uint)!bVar36 * iStack_f0);
    bVar36 = (bool)((byte)(uVar96 >> 5) & 1);
    fVar163 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 5) & 1) * auVar118._20_4_ |
                     (uint)!bVar36 * iStack_ec);
    bVar36 = (bool)((byte)(uVar96 >> 6) & 1);
    fVar166 = (float)((uint)bVar36 * (uint)((byte)(uVar96 >> 6) & 1) * auVar118._24_4_ |
                     (uint)!bVar36 * iStack_e8);
    bVar36 = SUB81(uVar96 >> 7,0);
    fVar169 = (float)((uint)bVar36 * (uint)(byte)(uVar96 >> 7) * auVar118._28_4_ |
                     (uint)!bVar36 * iStack_e4);
    auVar126._4_4_ = bVar30 * auVar104._4_4_ | (uint)!bVar30 * iStack_19c;
    auVar126._0_4_ = (bVar98 & 1) * auVar104._0_4_ | (uint)!(bool)(bVar98 & 1) * local_1a0;
    auVar126._8_4_ = bVar44 * auVar104._8_4_ | (uint)!bVar44 * iStack_198;
    auVar126._12_4_ = bVar57 * auVar104._12_4_ | (uint)!bVar57 * iStack_194;
    auVar126._16_4_ =
         (uint)bVar65 * (uint)((byte)(uVar96 >> 4) & 1) * auVar136._16_4_ |
         (uint)!bVar65 * iStack_190;
    auVar126._20_4_ =
         (uint)bVar71 * (uint)((byte)(uVar96 >> 5) & 1) * auVar136._20_4_ |
         (uint)!bVar71 * iStack_18c;
    auVar126._24_4_ =
         (uint)bVar77 * (uint)((byte)(uVar96 >> 6) & 1) * auVar136._24_4_ |
         (uint)!bVar77 * iStack_188;
    auVar126._28_4_ =
         (uint)bVar83 * (uint)(byte)(uVar96 >> 7) * auVar136._28_4_ | (uint)!bVar83 * iStack_184;
    auVar128._4_4_ =
         (uint)bVar31 * ((uint)bVar25 * auVar119._4_4_ | (uint)!bVar25 * auVar105._4_4_) |
         (uint)!bVar31 * iStack_17c;
    auVar128._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar119._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar105._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_180;
    auVar128._8_4_ =
         (uint)bVar45 * ((uint)bVar39 * auVar119._8_4_ | (uint)!bVar39 * auVar105._8_4_) |
         (uint)!bVar45 * iStack_178;
    auVar128._12_4_ =
         (uint)bVar58 * ((uint)bVar52 * auVar119._12_4_ | (uint)!bVar52 * auVar105._12_4_) |
         (uint)!bVar58 * iStack_174;
    auVar128._16_4_ =
         (uint)bVar66 * (uint)((byte)(uVar96 >> 4) & 1) * auVar119._16_4_ |
         (uint)!bVar66 * iStack_170;
    auVar128._20_4_ =
         (uint)bVar72 * (uint)((byte)(uVar96 >> 5) & 1) * auVar119._20_4_ |
         (uint)!bVar72 * iStack_16c;
    auVar128._24_4_ =
         (uint)bVar78 * (uint)((byte)(uVar96 >> 6) & 1) * auVar119._24_4_ |
         (uint)!bVar78 * iStack_168;
    auVar128._28_4_ =
         (uint)bVar84 * (uint)(byte)(uVar96 >> 7) * auVar119._28_4_ | (uint)!bVar84 * iStack_164;
    auVar131._4_4_ =
         (uint)bVar32 * ((uint)bVar26 * auVar129._4_4_ | (uint)!bVar26 * auVar106._4_4_) |
         (uint)!bVar32 * iStack_15c;
    auVar131._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar129._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar106._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_160;
    auVar131._8_4_ =
         (uint)bVar46 * ((uint)bVar40 * auVar129._8_4_ | (uint)!bVar40 * auVar106._8_4_) |
         (uint)!bVar46 * iStack_158;
    auVar131._12_4_ =
         (uint)bVar59 * ((uint)bVar53 * auVar129._12_4_ | (uint)!bVar53 * auVar106._12_4_) |
         (uint)!bVar59 * iStack_154;
    auVar131._16_4_ =
         (uint)bVar67 * (uint)((byte)(uVar96 >> 4) & 1) * auVar129._16_4_ |
         (uint)!bVar67 * iStack_150;
    auVar131._20_4_ =
         (uint)bVar73 * (uint)((byte)(uVar96 >> 5) & 1) * auVar129._20_4_ |
         (uint)!bVar73 * iStack_14c;
    auVar131._24_4_ =
         (uint)bVar79 * (uint)((byte)(uVar96 >> 6) & 1) * auVar129._24_4_ |
         (uint)!bVar79 * iStack_148;
    auVar131._28_4_ =
         (uint)bVar85 * (uint)(byte)(uVar96 >> 7) * auVar129._28_4_ | (uint)!bVar85 * iStack_144;
    auVar122._4_4_ =
         (uint)bVar33 * ((uint)bVar27 * auVar112._4_4_ | (uint)!bVar27 * auVar107._4_4_) |
         (uint)!bVar33 * iStack_1fc;
    auVar122._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar112._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar107._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_200;
    auVar122._8_4_ =
         (uint)bVar47 * ((uint)bVar41 * auVar112._8_4_ | (uint)!bVar41 * auVar107._8_4_) |
         (uint)!bVar47 * iStack_1f8;
    auVar122._12_4_ =
         (uint)bVar60 * ((uint)bVar54 * auVar112._12_4_ | (uint)!bVar54 * auVar107._12_4_) |
         (uint)!bVar60 * iStack_1f4;
    auVar122._16_4_ =
         (uint)bVar68 * (uint)((byte)(uVar96 >> 4) & 1) * auVar112._16_4_ |
         (uint)!bVar68 * iStack_1f0;
    auVar122._20_4_ =
         (uint)bVar74 * (uint)((byte)(uVar96 >> 5) & 1) * auVar112._20_4_ |
         (uint)!bVar74 * iStack_1ec;
    auVar122._24_4_ =
         (uint)bVar80 * (uint)((byte)(uVar96 >> 6) & 1) * auVar112._24_4_ |
         (uint)!bVar80 * iStack_1e8;
    auVar122._28_4_ =
         (uint)bVar86 * (uint)(byte)(uVar96 >> 7) * auVar112._28_4_ | (uint)!bVar86 * iStack_1e4;
    auVar123._4_4_ =
         (uint)bVar34 * ((uint)bVar28 * auVar138._4_4_ | (uint)!bVar28 * auVar108._4_4_) |
         (uint)!bVar34 * iStack_1dc;
    auVar123._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar138._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar108._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_1e0;
    auVar123._8_4_ =
         (uint)bVar48 * ((uint)bVar42 * auVar138._8_4_ | (uint)!bVar42 * auVar108._8_4_) |
         (uint)!bVar48 * iStack_1d8;
    auVar123._12_4_ =
         (uint)bVar61 * ((uint)bVar55 * auVar138._12_4_ | (uint)!bVar55 * auVar108._12_4_) |
         (uint)!bVar61 * iStack_1d4;
    auVar123._16_4_ =
         (uint)bVar69 * (uint)((byte)(uVar96 >> 4) & 1) * auVar138._16_4_ |
         (uint)!bVar69 * iStack_1d0;
    auVar123._20_4_ =
         (uint)bVar75 * (uint)((byte)(uVar96 >> 5) & 1) * auVar138._20_4_ |
         (uint)!bVar75 * iStack_1cc;
    auVar123._24_4_ =
         (uint)bVar81 * (uint)((byte)(uVar96 >> 6) & 1) * auVar138._24_4_ |
         (uint)!bVar81 * iStack_1c8;
    auVar123._28_4_ =
         (uint)bVar87 * (uint)(byte)(uVar96 >> 7) * auVar138._28_4_ | (uint)!bVar87 * iStack_1c4;
    auVar124._4_4_ =
         (uint)bVar35 * ((uint)bVar29 * auVar139._4_4_ | (uint)!bVar29 * auVar109._4_4_) |
         (uint)!bVar35 * iStack_1bc;
    auVar124._0_4_ =
         (uint)(bVar98 & 1) *
         ((uint)(bVar98 & 1) * auVar139._0_4_ | (uint)!(bool)(bVar98 & 1) * auVar109._0_4_) |
         (uint)!(bool)(bVar98 & 1) * local_1c0;
    auVar124._8_4_ =
         (uint)bVar49 * ((uint)bVar43 * auVar139._8_4_ | (uint)!bVar43 * auVar109._8_4_) |
         (uint)!bVar49 * iStack_1b8;
    auVar124._12_4_ =
         (uint)bVar62 * ((uint)bVar56 * auVar139._12_4_ | (uint)!bVar56 * auVar109._12_4_) |
         (uint)!bVar62 * iStack_1b4;
    auVar124._16_4_ =
         (uint)bVar70 * (uint)((byte)(uVar96 >> 4) & 1) * auVar139._16_4_ |
         (uint)!bVar70 * iStack_1b0;
    auVar124._20_4_ =
         (uint)bVar76 * (uint)((byte)(uVar96 >> 5) & 1) * auVar139._20_4_ |
         (uint)!bVar76 * iStack_1ac;
    auVar124._24_4_ =
         (uint)bVar82 * (uint)((byte)(uVar96 >> 6) & 1) * auVar139._24_4_ |
         (uint)!bVar82 * iStack_1a8;
    auVar124._28_4_ =
         (uint)bVar88 * (uint)(byte)(uVar96 >> 7) * auVar139._28_4_ | (uint)!bVar88 * iStack_1a4;
    auVar136 = vsubps_avx512vl(auVar126,auVar122);
    auVar119 = vsubps_avx512vl(auVar128,auVar123);
    auVar129 = vsubps_avx512vl(auVar131,auVar124);
    auVar136 = vfmadd213ps_avx512vl(auVar136,auVar141,auVar122);
    auVar112 = vfmadd213ps_avx512vl(auVar119,auVar141,auVar123);
    auVar134._4_4_ = fVar147;
    auVar134._0_4_ = fVar101;
    auVar134._8_4_ = fVar151;
    auVar134._12_4_ = fVar155;
    auVar134._16_4_ = fVar158;
    auVar134._20_4_ = fVar161;
    auVar134._24_4_ = fVar164;
    auVar134._28_4_ = fVar167;
    auVar135._4_4_ = fVar148;
    auVar135._0_4_ = fVar102;
    auVar135._8_4_ = fVar152;
    auVar135._12_4_ = fVar156;
    auVar135._16_4_ = fVar159;
    auVar135._20_4_ = fVar162;
    auVar135._24_4_ = fVar165;
    auVar135._28_4_ = fVar168;
    auVar138 = vfmadd213ps_avx512vl(auVar129,auVar141,auVar124);
    auVar127._4_4_ = fVar149;
    auVar127._0_4_ = fVar103;
    auVar127._8_4_ = fVar153;
    auVar127._12_4_ = fVar157;
    auVar127._16_4_ = fVar160;
    auVar127._20_4_ = fVar163;
    auVar127._24_4_ = fVar166;
    auVar127._28_4_ = fVar169;
    auVar119 = vsubps_avx(auVar134,auVar136);
    auVar181._4_4_ = __real_3f800000;
    auVar181._0_4_ = __real_3f800000;
    auVar181._8_4_ = __real_3f800000;
    auVar181._12_4_ = __real_3f800000;
    auVar181._16_4_ = __real_3f800000;
    auVar181._20_4_ = __real_3f800000;
    auVar181._24_4_ = __real_3f800000;
    auVar181._28_4_ = __real_3f800000;
    auVar129 = vsubps_avx(auVar135,auVar112);
    auVar116 = vsubps_avx512vl(auVar181,auVar141);
    auVar136 = vmaxps_avx512vl(auVar141,auVar116);
    auVar182._0_4_ = auVar136._0_4_ + __real_3f800000;
    auVar182._4_4_ = auVar136._4_4_ + __real_3f800000;
    auVar182._8_4_ = auVar136._8_4_ + __real_3f800000;
    auVar182._12_4_ = auVar136._12_4_ + __real_3f800000;
    auVar182._16_4_ = auVar136._16_4_ + __real_3f800000;
    auVar182._20_4_ = auVar136._20_4_ + __real_3f800000;
    auVar182._24_4_ = auVar136._24_4_ + __real_3f800000;
    auVar182._28_4_ = auVar136._28_4_ + __real_3f800000;
    auVar190._4_4_ = __real_40000000;
    auVar190._0_4_ = __real_40000000;
    auVar190._8_4_ = __real_40000000;
    auVar190._12_4_ = __real_40000000;
    auVar190._16_4_ = __real_40000000;
    auVar190._20_4_ = __real_40000000;
    auVar190._24_4_ = __real_40000000;
    auVar190._28_4_ = __real_40000000;
    auVar112 = vsubps_avx(auVar127,auVar138);
    auVar136 = vdivps_avx(auVar190,auVar182);
    auVar183._0_4_ =
         auVar112._0_4_ * auVar112._0_4_ +
         auVar119._0_4_ * auVar119._0_4_ + auVar129._0_4_ * auVar129._0_4_;
    auVar183._4_4_ =
         auVar112._4_4_ * auVar112._4_4_ +
         auVar119._4_4_ * auVar119._4_4_ + auVar129._4_4_ * auVar129._4_4_;
    auVar183._8_4_ =
         auVar112._8_4_ * auVar112._8_4_ +
         auVar119._8_4_ * auVar119._8_4_ + auVar129._8_4_ * auVar129._8_4_;
    auVar183._12_4_ =
         auVar112._12_4_ * auVar112._12_4_ +
         auVar119._12_4_ * auVar119._12_4_ + auVar129._12_4_ * auVar129._12_4_;
    auVar183._16_4_ =
         auVar112._16_4_ * auVar112._16_4_ +
         auVar119._16_4_ * auVar119._16_4_ + auVar129._16_4_ * auVar129._16_4_;
    auVar183._20_4_ =
         auVar112._20_4_ * auVar112._20_4_ +
         auVar119._20_4_ * auVar119._20_4_ + auVar129._20_4_ * auVar129._20_4_;
    auVar183._24_4_ =
         auVar112._24_4_ * auVar112._24_4_ +
         auVar119._24_4_ * auVar119._24_4_ + auVar129._24_4_ * auVar129._24_4_;
    auVar183._28_4_ =
         auVar112._28_4_ * auVar112._28_4_ +
         auVar119._28_4_ * auVar119._28_4_ + auVar129._28_4_ * auVar129._28_4_;
    auVar138 = vsqrtps_avx(auVar183);
    auVar119 = vdivps_avx(auVar119,auVar138);
    auVar129 = vdivps_avx(auVar129,auVar138);
    auVar112 = vdivps_avx(auVar112,auVar138);
    piVar24 = (int *)(param_4 + lVar94);
    auVar142._4_4_ = (uint)((byte)(uVar96 >> 1) & 1) * piVar24[1];
    auVar142._0_4_ = (uint)(bVar98 & 1) * *piVar24;
    auVar142._8_4_ = (uint)((byte)(uVar96 >> 2) & 1) * piVar24[2];
    auVar142._12_4_ = (uint)((byte)(uVar96 >> 3) & 1) * piVar24[3];
    auVar142._16_4_ = (uint)((byte)(uVar96 >> 4) & 1) * piVar24[4];
    auVar142._20_4_ = (uint)((byte)(uVar96 >> 5) & 1) * piVar24[5];
    auVar142._24_4_ = (uint)((byte)(uVar96 >> 6) & 1) * piVar24[6];
    auVar142._28_4_ = (uint)(byte)(uVar96 >> 7) * piVar24[7];
    auVar139 = vsubps_avx(auVar138,auVar142);
    fVar188 = auVar139._0_4_;
    fVar192 = auVar139._4_4_;
    fVar193 = auVar139._8_4_;
    fVar194 = auVar139._12_4_;
    fVar195 = auVar139._16_4_;
    fVar196 = auVar139._20_4_;
    fVar197 = auVar139._24_4_;
    fVar198 = auVar139._28_4_;
    auVar170._0_4_ = param_5 * fVar188 * auVar119._0_4_;
    auVar170._4_4_ = param_5 * fVar192 * auVar119._4_4_;
    auVar170._8_4_ = param_5 * fVar193 * auVar119._8_4_;
    auVar170._12_4_ = param_5 * fVar194 * auVar119._12_4_;
    auVar170._16_4_ = param_5 * fVar195 * auVar119._16_4_;
    auVar170._20_4_ = param_5 * fVar196 * auVar119._20_4_;
    auVar170._24_4_ = param_5 * fVar197 * auVar119._24_4_;
    auVar170._28_4_ = param_5 * fVar198 * auVar119._28_4_;
    auVar184._0_4_ = param_5 * auVar129._0_4_ * fVar188;
    auVar184._4_4_ = param_5 * auVar129._4_4_ * fVar192;
    auVar184._8_4_ = param_5 * auVar129._8_4_ * fVar193;
    auVar184._12_4_ = param_5 * auVar129._12_4_ * fVar194;
    auVar184._16_4_ = param_5 * auVar129._16_4_ * fVar195;
    auVar184._20_4_ = param_5 * auVar129._20_4_ * fVar196;
    auVar184._24_4_ = param_5 * auVar129._24_4_ * fVar197;
    auVar184._28_4_ = param_5 * auVar129._28_4_ * fVar198;
    auVar191._0_4_ = param_5 * auVar112._0_4_ * fVar188;
    auVar191._4_4_ = param_5 * auVar112._4_4_ * fVar192;
    auVar191._8_4_ = param_5 * auVar112._8_4_ * fVar193;
    auVar191._12_4_ = param_5 * auVar112._12_4_ * fVar194;
    auVar191._16_4_ = param_5 * auVar112._16_4_ * fVar195;
    auVar191._20_4_ = param_5 * auVar112._20_4_ * fVar196;
    auVar191._24_4_ = param_5 * auVar112._24_4_ * fVar197;
    auVar191._28_4_ = param_5 * auVar112._28_4_ * fVar198;
    auVar199._0_4_ = auVar116._0_4_ * fVar1;
    auVar199._4_4_ = auVar116._4_4_ * fVar7;
    auVar199._8_4_ = auVar116._8_4_ * fVar8;
    auVar199._12_4_ = auVar116._12_4_ * fVar5;
    auVar199._16_4_ = auVar116._16_4_ * fVar6;
    auVar199._20_4_ = auVar116._20_4_ * fVar2;
    auVar199._24_4_ = auVar116._24_4_ * fVar3;
    auVar199._28_4_ = auVar116._28_4_ * fVar4;
    auVar139 = vfmadd231ps_avx512vl(auVar199,auVar141,auVar115);
    auVar180._0_4_ = auVar139._0_4_ + fVar171;
    auVar180._4_4_ = auVar139._4_4_ + fVar173;
    auVar180._8_4_ = auVar139._8_4_ + fVar174;
    auVar180._12_4_ = auVar139._12_4_ + fVar175;
    auVar180._16_4_ = auVar139._16_4_ + fVar176;
    auVar180._20_4_ = auVar139._20_4_ + fVar177;
    auVar180._24_4_ = auVar139._24_4_ + fVar178;
    auVar180._28_4_ = auVar139._28_4_ + fVar179;
    auVar119 = vdivps_avx(auVar170,auVar180);
    auVar129 = vdivps_avx(auVar184,auVar180);
    auVar112 = vdivps_avx(auVar191,auVar180);
    auVar92 = ZEXT412(0);
    uVar89 = vcmpps_avx512vl(auVar140,ZEXT1232(auVar92) << 0x20,0);
    uVar90 = vcmpps_avx512vl(auVar139,ZEXT1232(auVar92) << 0x20,0);
    auVar121._4_4_ = __real_322bcc77;
    auVar121._0_4_ = __real_322bcc77;
    auVar121._8_4_ = __real_322bcc77;
    auVar121._12_4_ = __real_322bcc77;
    auVar121._16_4_ = __real_322bcc77;
    auVar121._20_4_ = __real_322bcc77;
    auVar121._24_4_ = __real_322bcc77;
    auVar121._28_4_ = __real_322bcc77;
    uVar91 = vcmpps_avx512vl(auVar138,auVar121,2);
    bVar98 = (byte)uVar91 | (byte)uVar89 & (byte)uVar90;
    fVar188 = (float)((uint)!(bool)(bVar98 & 1) * auVar119._0_4_);
    fVar192 = (float)((uint)!(bool)(bVar98 >> 1 & 1) * auVar119._4_4_);
    auVar143._4_4_ = fVar192;
    auVar143._0_4_ = fVar188;
    fVar193 = (float)((uint)!(bool)(bVar98 >> 2 & 1) * auVar119._8_4_);
    auVar143._8_4_ = fVar193;
    fVar194 = (float)((uint)!(bool)(bVar98 >> 3 & 1) * auVar119._12_4_);
    auVar143._12_4_ = fVar194;
    fVar195 = (float)((uint)!(bool)(bVar98 >> 4 & 1) * auVar119._16_4_);
    auVar143._16_4_ = fVar195;
    fVar196 = (float)((uint)!(bool)(bVar98 >> 5 & 1) * auVar119._20_4_);
    auVar143._20_4_ = fVar196;
    fVar197 = (float)((uint)!(bool)(bVar98 >> 6 & 1) * auVar119._24_4_);
    auVar143._24_4_ = fVar197;
    auVar143._28_4_ =
         (float)((uint)(bVar98 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                (uint)!(bool)(bVar98 >> 7) * auVar119._28_4_);
    fVar198 = (float)((uint)!(bool)(bVar98 & 1) * auVar129._0_4_);
    fVar9 = (float)((uint)!(bool)(bVar98 >> 1 & 1) * auVar129._4_4_);
    auVar144._4_4_ = fVar9;
    auVar144._0_4_ = fVar198;
    fVar10 = (float)((uint)!(bool)(bVar98 >> 2 & 1) * auVar129._8_4_);
    auVar144._8_4_ = fVar10;
    fVar11 = (float)((uint)!(bool)(bVar98 >> 3 & 1) * auVar129._12_4_);
    auVar144._12_4_ = fVar11;
    fVar12 = (float)((uint)!(bool)(bVar98 >> 4 & 1) * auVar129._16_4_);
    auVar144._16_4_ = fVar12;
    fVar13 = (float)((uint)!(bool)(bVar98 >> 5 & 1) * auVar129._20_4_);
    auVar144._20_4_ = fVar13;
    fVar14 = (float)((uint)!(bool)(bVar98 >> 6 & 1) * auVar129._24_4_);
    auVar144._24_4_ = fVar14;
    fVar15 = (float)((uint)!(bool)(bVar98 >> 7) * auVar129._28_4_);
    auVar144._28_4_ = fVar15;
    fVar16 = (float)((uint)!(bool)(bVar98 & 1) * auVar112._0_4_);
    fVar17 = (float)((uint)!(bool)(bVar98 >> 1 & 1) * auVar112._4_4_);
    auVar145._4_4_ = fVar17;
    auVar145._0_4_ = fVar16;
    fVar18 = (float)((uint)!(bool)(bVar98 >> 2 & 1) * auVar112._8_4_);
    auVar145._8_4_ = fVar18;
    fVar19 = (float)((uint)!(bool)(bVar98 >> 3 & 1) * auVar112._12_4_);
    auVar145._12_4_ = fVar19;
    fVar20 = (float)((uint)!(bool)(bVar98 >> 4 & 1) * auVar112._16_4_);
    auVar145._16_4_ = fVar20;
    fVar21 = (float)((uint)!(bool)(bVar98 >> 5 & 1) * auVar112._20_4_);
    auVar145._20_4_ = fVar21;
    fVar22 = (float)((uint)!(bool)(bVar98 >> 6 & 1) * auVar112._24_4_);
    auVar145._24_4_ = fVar22;
    fVar23 = (float)((uint)!(bool)(bVar98 >> 7) * auVar112._28_4_);
    auVar145._28_4_ = fVar23;
    uVar99 = vcmpps_avx512vl(ZEXT1232(auVar92) << 0x20,auVar140,1);
    uVar99 = uVar96 & uVar99;
    if ((char)uVar99 != '\0') {
      fVar171 = auVar136._0_4_ * fVar171;
      fVar173 = auVar136._4_4_ * fVar173;
      fVar174 = auVar136._8_4_ * fVar174;
      fVar175 = auVar136._12_4_ * fVar175;
      fVar176 = auVar136._16_4_ * fVar176;
      fVar177 = auVar136._20_4_ * fVar177;
      fVar178 = auVar136._24_4_ * fVar178;
      fVar179 = auVar136._28_4_ * fVar179;
      auVar187._0_4_ = -(fVar171 * fVar188) + fVar101;
      auVar187._4_4_ = -(fVar173 * fVar192) + fVar147;
      auVar187._8_4_ = -(fVar174 * fVar193) + fVar151;
      auVar187._12_4_ = -(fVar175 * fVar194) + fVar155;
      auVar187._16_4_ = -(fVar176 * fVar195) + fVar158;
      auVar187._20_4_ = -(fVar177 * fVar196) + fVar161;
      auVar187._24_4_ = -(fVar178 * fVar197) + fVar164;
      auVar187._28_4_ = -(fVar179 * auVar143._28_4_) + fVar167;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar127,uVar99,auVar187);
      auVar186._0_4_ = -(fVar171 * fVar198) + fVar102;
      auVar186._4_4_ = -(fVar173 * fVar9) + fVar148;
      auVar186._8_4_ = -(fVar174 * fVar10) + fVar152;
      auVar186._12_4_ = -(fVar175 * fVar11) + fVar156;
      auVar186._16_4_ = -(fVar176 * fVar12) + fVar159;
      auVar186._20_4_ = -(fVar177 * fVar13) + fVar162;
      auVar186._24_4_ = -(fVar178 * fVar14) + fVar165;
      auVar186._28_4_ = -(fVar179 * fVar15) + fVar168;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar187,uVar99,auVar186);
      auVar185._0_4_ = -(fVar16 * fVar171) + fVar103;
      auVar185._4_4_ = -(fVar17 * fVar173) + fVar149;
      auVar185._8_4_ = -(fVar18 * fVar174) + fVar153;
      auVar185._12_4_ = -(fVar19 * fVar175) + fVar157;
      auVar185._16_4_ = -(fVar20 * fVar176) + fVar160;
      auVar185._20_4_ = -(fVar21 * fVar177) + fVar163;
      auVar185._24_4_ = -(fVar22 * fVar178) + fVar166;
      auVar185._28_4_ = -(fVar23 * fVar179) + fVar169;
      vscatterdps_avx512vl(ZEXT832(param_1) + (ZEXT1232(auVar92) << 0x20),uVar99,auVar185);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar139,uVar99,auVar140);
    }
    uVar99 = vcmpps_avx512vl(auVar115,ZEXT1232(auVar92) << 0x20,0xc);
    uVar99 = uVar96 & uVar99;
    if ((char)uVar99 != '\0') {
      auVar119 = vmulps_avx512vl(auVar115,auVar136);
      auVar119 = vmulps_avx512vl(auVar141,auVar119);
      auVar129 = vfmadd231ps_avx512vl(auVar126,auVar119,auVar143);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar145,uVar99,auVar129);
      auVar129 = vfmadd231ps_avx512vl(auVar128,auVar119,auVar144);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar125,uVar99,auVar129);
      auVar129 = vfmadd231ps_avx512vl(auVar131,auVar145,auVar119);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar119,uVar99,auVar129);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar180,uVar99,auVar115);
    }
    uVar99 = vcmpps_avx512vl(auVar189,ZEXT832(0) << 0x40,0xc);
    uVar96 = uVar96 & uVar99;
    if ((char)uVar96 != '\0') {
      auVar172._0_4_ = auVar116._0_4_ * auVar136._0_4_ * fVar1;
      auVar172._4_4_ = auVar116._4_4_ * auVar136._4_4_ * fVar7;
      auVar172._8_4_ = auVar116._8_4_ * auVar136._8_4_ * fVar8;
      auVar172._12_4_ = auVar116._12_4_ * auVar136._12_4_ * fVar5;
      auVar172._16_4_ = auVar116._16_4_ * auVar136._16_4_ * fVar6;
      auVar172._20_4_ = auVar116._20_4_ * auVar136._20_4_ * fVar2;
      auVar172._24_4_ = auVar116._24_4_ * auVar136._24_4_ * fVar3;
      auVar172._28_4_ = auVar116._28_4_ * auVar136._28_4_ * fVar4;
      auVar136 = vfmadd213ps_avx512vl(auVar143,auVar172,auVar122);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar125,uVar96,auVar136);
      auVar136 = vfmadd213ps_avx512vl(auVar144,auVar172,auVar123);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar125 | auVar137),uVar96,auVar136);
      auVar136 = vfmadd213ps_avx512vl(auVar145,auVar172,auVar124);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar125 | auVar113),uVar96,auVar136);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar125 | auVar114),uVar96,auVar189);
    }
  }
  return;
}

// ApplyAxialSpringConstraintsWithWeightMaps_avx512skx @ 14000ac70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraintsWithWeightMaps_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,longlong param_6,uint param_7)

{
  float fVar1;
  float fVar6;
  float fVar14;
  float fVar17;
  float fVar24;
  undefined1 (*pauVar32) [32];
  int *piVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  bool bVar69;
  bool bVar70;
  bool bVar71;
  bool bVar72;
  bool bVar73;
  bool bVar74;
  bool bVar75;
  bool bVar76;
  bool bVar77;
  bool bVar78;
  bool bVar79;
  bool bVar80;
  bool bVar81;
  bool bVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
  bool bVar86;
  bool bVar87;
  bool bVar88;
  bool bVar89;
  bool bVar90;
  bool bVar91;
  bool bVar92;
  bool bVar93;
  bool bVar94;
  bool bVar95;
  bool bVar96;
  bool bVar97;
  bool bVar98;
  bool bVar99;
  bool bVar100;
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined1 auVar104 [12];
  undefined1 (*unaff_RBX) [32];
  uint uVar105;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 (*pauVar106) [16];
  ulonglong uVar107;
  longlong lVar108;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  byte bVar109;
  ulonglong uVar110;
  int iVar111;
  float fVar112;
  float fVar113;
  ulonglong uVar114;
  int iVar158;
  undefined1 auVar115 [16];
  float fVar164;
  float fVar166;
  float fVar168;
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  int iVar155;
  int iVar161;
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar149 [32];
  undefined1 auVar122 [16];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  float fVar156;
  float fVar157;
  float fVar159;
  float fVar160;
  float fVar162;
  float fVar163;
  float fVar165;
  float fVar167;
  float fVar169;
  float fVar170;
  float fVar171;
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [16];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 auVar187 [16];
  undefined1 in_ZMM27 [64];
  undefined1 auVar188 [16];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 auVar189 [16];
  undefined1 in_ZMM30 [64];
  float afStack_298 [4];
  float fStack_288;
  float fStack_284;
  uint local_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  undefined1 local_220 [32];
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined1 local_98 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar116 [16];
  
  auVar116 = in_ZMM24._0_16_;
  auVar117 = in_ZMM16._0_16_;
  auVar189 = in_ZMM30._0_16_;
  auVar122 = in_ZMM29._0_16_;
  auVar188 = in_ZMM28._0_16_;
  auVar121 = in_ZMM20._0_16_;
  auVar187 = in_ZMM27._0_16_;
  auVar120 = in_ZMM25._0_16_;
  auVar119 = in_ZMM23._0_16_;
  auVar118 = in_ZMM21._0_16_;
  local_98 = in_ZMM10._0_16_;
  uVar105 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar105 = param_7;
  }
  if ((int)(uVar105 & 0xfffffff8) < 1) {
    uVar107 = 0;
  }
  else {
    unaff_RBX = (undefined1 (*) [32])(param_2 + 0x40);
    unaff_R14 = 0;
    local_240 = __real_00000004;
    uStack_23c = __real_00000004;
    uStack_238 = __real_00000004;
    uStack_234 = __real_00000004;
    uStack_230 = __real_00000004;
    uStack_22c = __real_00000004;
    uStack_228 = __real_00000004;
    uStack_224 = __real_00000004;
    local_260 = __real_00000008;
    uStack_25c = __real_00000008;
    uStack_258 = __real_00000008;
    uStack_254 = __real_00000008;
    uStack_250 = __real_00000008;
    uStack_24c = __real_00000008;
    uStack_248 = __real_00000008;
    uStack_244 = __real_00000008;
    local_280 = __real_0000000c;
    uStack_27c = __real_0000000c;
    uStack_278 = __real_0000000c;
    uStack_274 = __real_0000000c;
    uStack_270 = __real_0000000c;
    uStack_26c = __real_0000000c;
    uStack_268 = __real_0000000c;
    uStack_264 = __real_0000000c;
    afStack_298[0] = __real_3f800000;
    afStack_298[1] = __real_3f800000;
    afStack_298[2] = __real_3f800000;
    afStack_298[3] = __real_3f800000;
    fStack_288 = __real_3f800000;
    fStack_284 = __real_3f800000;
    auVar115 = vxorps_avx512vl(in_ZMM17._0_16_,in_ZMM17._0_16_);
    uVar107 = 0;
    auVar119._4_4_ = __real_3f800000;
    auVar119._0_4_ = __real_3f800000;
    auVar119._8_4_ = __real_3f800000;
    auVar119._12_4_ = __real_3f800000;
    auVar146._16_4_ = __real_3f800000;
    auVar146._0_16_ = auVar119;
    auVar146._20_4_ = __real_3f800000;
    auVar146._24_4_ = __real_3f800000;
    auVar146._28_4_ = __real_3f800000;
    do {
      auVar131 = unaff_RBX[-1];
      auVar123 = vpermt2d_avx512vl(unaff_RBX[-2],
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar131);
      auVar124 = vpermt2d_avx512vl(*unaff_RBX,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar131);
      auVar125 = vshufi64x2_avx512vl(auVar123,auVar124,3);
      auVar126 = vpslld_avx512vl(auVar125,4);
      auVar187 = auVar126._0_16_;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar127 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar107));
      auVar188._4_4_ = __real_00000004;
      auVar188._0_4_ = __real_00000004;
      auVar188._8_4_ = __real_00000004;
      auVar188._12_4_ = __real_00000004;
      auVar148._16_4_ = __real_00000004;
      auVar148._0_16_ = auVar188;
      auVar148._20_4_ = __real_00000004;
      auVar148._24_4_ = __real_00000004;
      auVar148._28_4_ = __real_00000004;
      auVar188 = auVar187 | auVar188;
      auVar128 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar147._4_4_ = __real_00000008;
      auVar147._0_4_ = __real_00000008;
      auVar147._8_4_ = __real_00000008;
      auVar147._12_4_ = __real_00000008;
      auVar147._16_4_ = __real_00000008;
      auVar147._20_4_ = __real_00000008;
      auVar147._24_4_ = __real_00000008;
      auVar147._28_4_ = __real_00000008;
      auVar129 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      auVar125._4_4_ = __real_0000000c;
      auVar125._0_4_ = __real_0000000c;
      auVar125._8_4_ = __real_0000000c;
      auVar125._12_4_ = __real_0000000c;
      auVar125._16_4_ = __real_0000000c;
      auVar125._20_4_ = __real_0000000c;
      auVar125._24_4_ = __real_0000000c;
      auVar125._28_4_ = __real_0000000c;
      auVar130 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar131 = vpblendd_avx2(auVar131,unaff_RBX[-2],0x24);
      auVar131 = vpermt2d_avx512vl(auVar131,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*unaff_RBX);
      auVar132 = vpslld_avx512vl(auVar131,4);
      auVar121 = auVar132._0_16_;
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar133 = vgatherdps_avx512vl(*param_1);
      auVar122 = auVar133._0_16_;
      in_ZMM29 = ZEXT3264(auVar133);
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar134 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar116 = auVar134._0_16_;
      in_ZMM24 = ZEXT3264(auVar134);
      vxorps_avx512vl(in_ZMM25._0_16_,in_ZMM25._0_16_);
      auVar135 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar120 = auVar135._0_16_;
      in_ZMM25 = ZEXT3264(auVar135);
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      local_220 = auVar132 | auVar125;
      auVar136 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      in_ZMM26 = ZEXT3264(auVar136);
      auVar131._16_16_ = ZEXT116(0) * auVar123._16_16_ | ZEXT116(1) * auVar124._0_16_;
      auVar131._0_16_ = ZEXT116(0) * auVar124._0_16_ | ZEXT116(1) * auVar123._0_16_;
      auVar180 = vpslld_avx2(auVar131,4);
      auVar137 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      auVar138 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar139 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      unaff_R15 = unaff_R14 & 0xffffffff;
      auVar140 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      auVar131 = *(undefined1 (*) [32])(param_3 + unaff_R15);
      auVar118._8_8_ = 0;
      auVar118._0_8_ = *(ulonglong *)(param_5 + uVar107);
      auVar124 = vpmovzxbd_avx2(auVar118);
      auVar123 = vsubps_avx512vl(auVar127,auVar133);
      auVar141 = vsubps_avx512vl(auVar128,auVar134);
      auVar142 = vsubps_avx512vl(auVar129,auVar135);
      auVar123 = vfmadd213ps_avx512vl(auVar123,auVar131,auVar133);
      auVar141 = vfmadd213ps_avx512vl(auVar141,auVar131,auVar134);
      auVar142 = vfmadd213ps_avx512vl(auVar142,auVar131,auVar135);
      auVar123 = vsubps_avx(auVar137,auVar123);
      auVar141 = vsubps_avx512vl(auVar138,auVar141);
      auVar142 = vsubps_avx512vl(auVar139,auVar142);
      auVar143 = vmulps_avx512vl(auVar141,auVar141);
      auVar143 = vfmadd231ps_avx512vl(auVar143,auVar123,auVar123);
      auVar176 = vpslld_avx2(auVar124,2);
      vpmovzxdq_avx2(auVar176._0_16_);
      vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
      auVar117 = vgatherqps_avx512vl(*(undefined8 *)(param_6 + (longlong)afStack_298));
      auVar124 = vfmadd231ps_avx512vl(auVar143,auVar142,auVar142);
      auVar124 = vsqrtps_avx512vl(auVar124);
      vpmovzxdq_avx2(auVar176._16_16_);
      vxorps_avx512vl(in_ZMM22._0_16_,in_ZMM22._0_16_);
      auVar118 = vgatherqps_avx512vl(*(undefined8 *)(*unaff_RBX + param_6));
      auVar143 = vsubps_avx512vl(auVar146,auVar131);
      auVar176 = vinsertf32x4_avx512vl(ZEXT1632(auVar117),auVar118,1);
      auVar123 = vdivps_avx(auVar123,auVar124);
      auVar141 = vdivps_avx512vl(auVar141,auVar124);
      auVar142 = vdivps_avx512vl(auVar142,auVar124);
      auVar144 = vsubps_avx512vl(auVar124,*(undefined1 (*) [32])(param_4 + unaff_R15));
      auVar123 = vmulps_avx512vl(auVar123,auVar144);
      auVar141 = vmulps_avx512vl(auVar141,auVar144);
      auVar142 = vmulps_avx512vl(auVar142,auVar144);
      auVar144 = vmulps_avx512vl(auVar143,auVar136);
      auVar144 = vfmadd231ps_avx512vl(auVar144,auVar131,auVar130);
      in_ZMM21 = ZEXT3264(auVar144);
      auVar118 = auVar144._0_16_;
      auVar145._0_4_ = auVar176._0_4_ * auVar123._0_4_;
      auVar145._4_4_ = auVar176._4_4_ * auVar123._4_4_;
      auVar145._8_4_ = auVar176._8_4_ * auVar123._8_4_;
      auVar145._12_4_ = auVar176._12_4_ * auVar123._12_4_;
      auVar145._16_4_ = auVar176._16_4_ * auVar123._16_4_;
      auVar145._20_4_ = auVar176._20_4_ * auVar123._20_4_;
      auVar145._24_4_ = auVar176._24_4_ * auVar123._24_4_;
      auVar145._28_4_ = auVar176._28_4_ * auVar123._28_4_;
      auVar123 = vmulps_avx512vl(auVar176,auVar141);
      auVar141 = vmulps_avx512vl(auVar176,auVar142);
      auVar142 = vaddps_avx512vl(auVar144,auVar140);
      in_ZMM22 = ZEXT3264(auVar142);
      auVar176 = vdivps_avx512vl(auVar145,auVar142);
      auVar145 = vdivps_avx512vl(auVar123,auVar142);
      auVar141 = vdivps_avx512vl(auVar141,auVar142);
      uVar101 = vcmpps_avx512vl(auVar140,ZEXT1632(auVar115),0);
      uVar102 = vcmpps_avx512vl(auVar144,ZEXT1632(auVar115),0);
      auVar123._4_4_ = __real_322bcc77;
      auVar123._0_4_ = __real_322bcc77;
      auVar123._8_4_ = __real_322bcc77;
      auVar123._12_4_ = __real_322bcc77;
      auVar123._16_4_ = __real_322bcc77;
      auVar123._20_4_ = __real_322bcc77;
      auVar123._24_4_ = __real_322bcc77;
      auVar123._28_4_ = __real_322bcc77;
      uVar103 = vcmpps_avx512vl(auVar124,auVar123,2);
      auVar123 = vmaxps_avx512vl(auVar131,auVar143);
      auVar123 = vaddps_avx512vl(auVar123,auVar146);
      auVar124._4_4_ = __real_40000000;
      auVar124._0_4_ = __real_40000000;
      auVar124._8_4_ = __real_40000000;
      auVar124._12_4_ = __real_40000000;
      auVar124._16_4_ = __real_40000000;
      auVar124._20_4_ = __real_40000000;
      auVar124._24_4_ = __real_40000000;
      auVar124._28_4_ = __real_40000000;
      auVar123 = vdivps_avx(auVar124,auVar123);
      bVar109 = (byte)uVar103 | (byte)uVar101 & (byte)uVar102;
      iVar111 = auVar115._0_4_;
      auVar142._0_4_ =
           (float)((uint)(bVar109 & 1) * iVar111 | (uint)!(bool)(bVar109 & 1) * auVar176._0_4_);
      bVar34 = (bool)(bVar109 >> 1 & 1);
      iVar155 = auVar115._4_4_;
      auVar142._4_4_ = (float)((uint)bVar34 * iVar155 | (uint)!bVar34 * auVar176._4_4_);
      bVar34 = (bool)(bVar109 >> 2 & 1);
      iVar158 = auVar115._8_4_;
      auVar142._8_4_ = (float)((uint)bVar34 * iVar158 | (uint)!bVar34 * auVar176._8_4_);
      bVar34 = (bool)(bVar109 >> 3 & 1);
      iVar161 = auVar115._12_4_;
      auVar142._12_4_ = (float)((uint)bVar34 * iVar161 | (uint)!bVar34 * auVar176._12_4_);
      fVar14 = (float)((uint)!(bool)(bVar109 >> 4 & 1) * auVar176._16_4_);
      auVar142._16_4_ = fVar14;
      fVar15 = (float)((uint)!(bool)(bVar109 >> 5 & 1) * auVar176._20_4_);
      auVar142._20_4_ = fVar15;
      fVar16 = (float)((uint)!(bool)(bVar109 >> 6 & 1) * auVar176._24_4_);
      auVar142._24_4_ = fVar16;
      auVar142._28_4_ =
           (float)((uint)(bVar109 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                  (uint)!(bool)(bVar109 >> 7) * auVar176._28_4_);
      auVar117._0_4_ = (uint)(bVar109 & 1) * iVar111 | (uint)!(bool)(bVar109 & 1) * auVar145._0_4_;
      bVar34 = (bool)(bVar109 >> 1 & 1);
      auVar117._4_4_ = (uint)bVar34 * iVar155 | (uint)!bVar34 * auVar145._4_4_;
      bVar34 = (bool)(bVar109 >> 2 & 1);
      auVar117._8_4_ = (uint)bVar34 * iVar158 | (uint)!bVar34 * auVar145._8_4_;
      bVar34 = (bool)(bVar109 >> 3 & 1);
      auVar117._12_4_ = (uint)bVar34 * iVar161 | (uint)!bVar34 * auVar145._12_4_;
      auVar176._16_4_ = (uint)!(bool)(bVar109 >> 4 & 1) * auVar145._16_4_;
      auVar176._0_16_ = auVar117;
      auVar176._20_4_ = (uint)!(bool)(bVar109 >> 5 & 1) * auVar145._20_4_;
      auVar176._24_4_ = (uint)!(bool)(bVar109 >> 6 & 1) * auVar145._24_4_;
      auVar176._28_4_ = (uint)!(bool)(bVar109 >> 7) * auVar145._28_4_;
      auVar144._0_4_ = (uint)(bVar109 & 1) * iVar111 | (uint)!(bool)(bVar109 & 1) * auVar141._0_4_;
      bVar34 = (bool)(bVar109 >> 1 & 1);
      auVar144._4_4_ = (uint)bVar34 * iVar155 | (uint)!bVar34 * auVar141._4_4_;
      bVar34 = (bool)(bVar109 >> 2 & 1);
      auVar144._8_4_ = (uint)bVar34 * iVar158 | (uint)!bVar34 * auVar141._8_4_;
      bVar34 = (bool)(bVar109 >> 3 & 1);
      auVar144._12_4_ = (uint)bVar34 * iVar161 | (uint)!bVar34 * auVar141._12_4_;
      auVar144._16_4_ = (uint)!(bool)(bVar109 >> 4 & 1) * auVar141._16_4_;
      auVar144._20_4_ = (uint)!(bool)(bVar109 >> 5 & 1) * auVar141._20_4_;
      auVar144._24_4_ = (uint)!(bool)(bVar109 >> 6 & 1) * auVar141._24_4_;
      auVar144._28_4_ = (uint)!(bool)(bVar109 >> 7) * auVar141._28_4_;
      uVar101 = vcmpps_avx512vl(ZEXT1632(auVar115),auVar140,1);
      if ((char)uVar101 != '\0') {
        auVar141._0_4_ = auVar140._0_4_ * auVar123._0_4_;
        auVar141._4_4_ = auVar140._4_4_ * auVar123._4_4_;
        auVar141._8_4_ = auVar140._8_4_ * auVar123._8_4_;
        auVar141._12_4_ = auVar140._12_4_ * auVar123._12_4_;
        auVar141._16_4_ = auVar140._16_4_ * auVar123._16_4_;
        auVar141._20_4_ = auVar140._20_4_ * auVar123._20_4_;
        auVar141._24_4_ = auVar140._24_4_ * auVar123._24_4_;
        auVar141._28_4_ = auVar140._28_4_ * auVar123._28_4_;
        auVar183._0_4_ = -(auVar141._0_4_ * auVar142._0_4_) + auVar137._0_4_;
        auVar183._4_4_ = -(auVar141._4_4_ * auVar142._4_4_) + auVar137._4_4_;
        auVar183._8_4_ = -(auVar141._8_4_ * auVar142._8_4_) + auVar137._8_4_;
        auVar183._12_4_ = -(auVar141._12_4_ * auVar142._12_4_) + auVar137._12_4_;
        auVar183._16_4_ = -(auVar141._16_4_ * fVar14) + auVar137._16_4_;
        auVar183._20_4_ = -(auVar141._20_4_ * fVar15) + auVar137._20_4_;
        auVar183._24_4_ = -(auVar141._24_4_ * fVar16) + auVar137._24_4_;
        auVar183._28_4_ = -(auVar141._28_4_ * auVar142._28_4_) + auVar137._28_4_;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar180,uVar101,auVar183);
        auVar138 = vfnmadd231ps_avx512vl(auVar138,auVar141,auVar176);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar180 | auVar148),uVar101,auVar138);
        auVar124 = vfnmadd231ps_avx512vl(auVar139,auVar144,auVar141);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar180 | auVar147),uVar101,auVar124);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar180 | auVar125),uVar101,auVar140);
      }
      uVar101 = vcmpps_avx512vl(auVar130,ZEXT1632(auVar115),0xc);
      if ((char)uVar101 != '\0') {
        auVar137._0_4_ = auVar131._0_4_ * auVar130._0_4_ * auVar123._0_4_;
        auVar137._4_4_ = auVar131._4_4_ * auVar130._4_4_ * auVar123._4_4_;
        auVar137._8_4_ = auVar131._8_4_ * auVar130._8_4_ * auVar123._8_4_;
        auVar137._12_4_ = auVar131._12_4_ * auVar130._12_4_ * auVar123._12_4_;
        auVar137._16_4_ = auVar131._16_4_ * auVar130._16_4_ * auVar123._16_4_;
        auVar137._20_4_ = auVar131._20_4_ * auVar130._20_4_ * auVar123._20_4_;
        auVar137._24_4_ = auVar131._24_4_ * auVar130._24_4_ * auVar123._24_4_;
        auVar137._28_4_ = auVar131._28_4_ * auVar130._28_4_ * auVar123._28_4_;
        auVar127 = vfmadd231ps_avx512vl(auVar127,auVar137,auVar142);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar131,uVar101,auVar127);
        auVar131 = vfmadd231ps_avx512vl(auVar128,auVar137,auVar176);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar180 | auVar148),uVar101,auVar131);
        auVar131 = vfmadd231ps_avx512vl(auVar129,auVar144,auVar137);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar138,uVar101,auVar131);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar126 | auVar125),uVar101,auVar130);
      }
      in_ZMM30 = ZEXT3264(auVar127);
      auVar189 = auVar127._0_16_;
      uVar101 = vcmpps_avx512vl(auVar136,ZEXT1632(auVar115),0xc);
      if ((char)uVar101 != '\0') {
        auVar131 = vmulps_avx512vl(auVar136,auVar123);
        auVar131 = vmulps_avx512vl(auVar143,auVar131);
        auVar124 = vfmadd213ps_avx512vl(auVar142,auVar131,auVar133);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar123,uVar101,auVar124);
        auVar123 = vfmadd213ps_avx512vl(auVar176,auVar131,auVar134);
        auVar117 = auVar123._0_16_;
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar132 | auVar148),uVar101,auVar123);
        auVar131 = vfmadd213ps_avx512vl(auVar144,auVar131,auVar135);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar132 | auVar147),uVar101,auVar131);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar132 | auVar125),uVar101,auVar136);
      }
      uVar107 = uVar107 + 8;
      unaff_R14 = unaff_R14 + 0x20;
      unaff_RBX = unaff_RBX + 3;
    } while ((int)uVar107 < (int)(uVar105 & 0xfffffff8));
  }
  if ((int)uVar107 < (int)param_7) {
    auVar146 = vpbroadcastd_avx512vl();
    auVar146 = vpor_avx2(auVar146,
                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar131 = vpbroadcastd_avx512vl();
    uVar110 = vpcmpgtd_avx512vl(auVar131,auVar146);
    pauVar32 = (undefined1 (*) [32])(param_2 + (uVar107 & 0xffffffff) * 0xc);
    bVar109 = (byte)uVar110;
    if (bVar109 == 0xff) {
      auVar146 = pauVar32[1];
      auVar131 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar32,auVar146);
      auVar123 = vpermi2d_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar32[2],auVar146);
      auVar128 = vinserti32x4_avx512vl(auVar131,auVar123._0_16_,1);
      auVar126 = vperm2i128_avx2(auVar131,auVar123,0x31);
      auVar146 = vpblendd_avx2(auVar146,*pauVar32,0x24);
      auVar129 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar146,pauVar32[2]);
    }
    else {
      auVar118 = vxorps_avx512vl(auVar118,auVar118);
      auVar146 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar32 + param_6));
      auVar128._0_4_ =
           (uint)(bVar109 & 1) * auVar146._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar118._0_4_;
      bVar34 = (bool)((byte)(uVar110 >> 1) & 1);
      auVar128._4_4_ = (uint)bVar34 * auVar146._4_4_ | (uint)!bVar34 * auVar118._4_4_;
      bVar34 = (bool)((byte)(uVar110 >> 2) & 1);
      auVar128._8_4_ = (uint)bVar34 * auVar146._8_4_ | (uint)!bVar34 * auVar118._8_4_;
      bVar34 = (bool)((byte)(uVar110 >> 3) & 1);
      auVar128._12_4_ = (uint)bVar34 * auVar146._12_4_ | (uint)!bVar34 * auVar118._12_4_;
      auVar128._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar146._16_4_;
      auVar128._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar146._20_4_;
      auVar128._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar146._24_4_;
      auVar128._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar146._28_4_;
      auVar146 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar32 + param_6));
      auVar126._4_4_ = (uint)((byte)(uVar110 >> 1) & 1) * auVar146._4_4_;
      auVar126._0_4_ = (uint)(bVar109 & 1) * auVar146._0_4_;
      auVar126._8_4_ = (uint)((byte)(uVar110 >> 2) & 1) * auVar146._8_4_;
      auVar126._12_4_ = (uint)((byte)(uVar110 >> 3) & 1) * auVar146._12_4_;
      auVar126._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar146._16_4_;
      auVar126._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar146._20_4_;
      auVar126._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar146._24_4_;
      auVar126._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar146._28_4_;
      auVar146 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar32 + param_6));
      auVar129._4_4_ = (uint)((byte)(uVar110 >> 1) & 1) * auVar146._4_4_;
      auVar129._0_4_ = (uint)(bVar109 & 1) * auVar146._0_4_;
      auVar129._8_4_ = (uint)((byte)(uVar110 >> 2) & 1) * auVar146._8_4_;
      auVar129._12_4_ = (uint)((byte)(uVar110 >> 3) & 1) * auVar146._12_4_;
      auVar129._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar146._16_4_;
      auVar129._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar146._20_4_;
      auVar129._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar146._24_4_;
      auVar129._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar146._28_4_;
    }
    lVar108 = (longlong)((int)uVar107 << 2);
    piVar33 = (int *)(param_3 + lVar108);
    fVar1 = (float)((uint)(bVar109 & 1) * *piVar33);
    fVar14 = (float)((uint)((byte)(uVar110 >> 1) & 1) * piVar33[1]);
    auVar130._4_4_ = fVar14;
    auVar130._0_4_ = fVar1;
    fVar15 = (float)((uint)((byte)(uVar110 >> 2) & 1) * piVar33[2]);
    auVar130._8_4_ = fVar15;
    fVar16 = (float)((uint)((byte)(uVar110 >> 3) & 1) * piVar33[3]);
    auVar130._12_4_ = fVar16;
    fVar2 = (float)((uint)((byte)(uVar110 >> 4) & 1) * piVar33[4]);
    auVar130._16_4_ = fVar2;
    fVar3 = (float)((uint)((byte)(uVar110 >> 5) & 1) * piVar33[5]);
    auVar130._20_4_ = fVar3;
    fVar4 = (float)((uint)((byte)(uVar110 >> 6) & 1) * piVar33[6]);
    auVar130._24_4_ = fVar4;
    fVar5 = (float)((uint)(byte)(uVar110 >> 7) * piVar33[7]);
    auVar130._28_4_ = fVar5;
    piVar33 = (int *)(param_4 + lVar108);
    auVar132._4_4_ = (uint)((byte)(uVar110 >> 1) & 1) * piVar33[1];
    auVar132._0_4_ = (uint)(bVar109 & 1) * *piVar33;
    auVar132._8_4_ = (uint)((byte)(uVar110 >> 2) & 1) * piVar33[2];
    auVar132._12_4_ = (uint)((byte)(uVar110 >> 3) & 1) * piVar33[3];
    auVar132._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * piVar33[4];
    auVar132._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * piVar33[5];
    auVar132._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * piVar33[6];
    auVar132._28_4_ = (uint)(byte)(uVar110 >> 7) * piVar33[7];
    pauVar106 = (undefined1 (*) [16])(param_5 + (uVar107 & 0xffffffff));
    uVar107 = (ulonglong)(byte)~bVar109;
    if ((~bVar109 & 0x81) == 0) {
      uVar114 = *(ulonglong *)*pauVar106;
    }
    else {
      auVar118 = vmovdqu8_avx512vl(*pauVar106);
      uVar114 = CONCAT17((char)(uVar110 >> 7) * auVar118[7],
                         CONCAT16(((byte)(uVar110 >> 6) & 1) * auVar118[6],
                                  CONCAT15(((byte)(uVar110 >> 5) & 1) * auVar118[5],
                                           CONCAT14(((byte)(uVar110 >> 4) & 1) * auVar118[4],
                                                    CONCAT13(((byte)(uVar110 >> 3) & 1) *
                                                             auVar118[3],
                                                             CONCAT12(((byte)(uVar110 >> 2) & 1) *
                                                                      auVar118[2],
                                                                      CONCAT11(((byte)(uVar110 >> 1)
                                                                               & 1) * auVar118[1],
                                                                               (bVar109 & 1) *
                                                                               auVar118[0])))))));
    }
    auVar177._8_8_ = 0;
    auVar177._0_8_ = uVar114;
    auVar142 = vpslld_avx2(auVar126,4);
    auVar147 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar119 = vxorps_avx512vl(auVar119,auVar119);
    auVar146 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)afStack_298));
    auVar115._0_4_ =
         (uint)(bVar109 & 1) * auVar146._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar119._0_4_;
    bVar34 = (bool)((byte)(uVar110 >> 1) & 1);
    auVar115._4_4_ = (uint)bVar34 * auVar146._4_4_ | (uint)!bVar34 * auVar119._4_4_;
    bVar34 = (bool)((byte)(uVar110 >> 2) & 1);
    auVar115._8_4_ = (uint)bVar34 * auVar146._8_4_ | (uint)!bVar34 * auVar119._8_4_;
    bVar34 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar115._12_4_ = (uint)bVar34 * auVar146._12_4_ | (uint)!bVar34 * auVar119._12_4_;
    auVar119 = vxorps_avx512vl(auVar120,auVar120);
    auVar131 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar34 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar48 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar61 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar148 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar120 = vxorps_avx512vl(auVar187,auVar187);
    auVar123 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar107));
    bVar35 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar49 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar62 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar126 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar121 = vxorps_avx512vl(auVar121,auVar121);
    auVar124 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)unaff_RBX));
    auVar149._0_4_ =
         (uint)(bVar109 & 1) * auVar124._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar121._0_4_;
    bVar36 = (bool)((byte)(uVar110 >> 1) & 1);
    auVar149._4_4_ = (uint)bVar36 * auVar124._4_4_ | (uint)!bVar36 * auVar121._4_4_;
    bVar36 = (bool)((byte)(uVar110 >> 2) & 1);
    auVar149._8_4_ = (uint)bVar36 * auVar124._8_4_ | (uint)!bVar36 * auVar121._8_4_;
    bVar36 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar149._12_4_ = (uint)bVar36 * auVar124._12_4_ | (uint)!bVar36 * auVar121._12_4_;
    auVar149._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar124._16_4_;
    auVar149._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar124._20_4_;
    auVar149._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar124._24_4_;
    auVar149._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar124._28_4_;
    auVar141 = vpslld_avx2(auVar129,4);
    auVar188 = vxorps_avx512vl(auVar188,auVar188);
    auVar124 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar36 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar50 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar63 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar122 = vxorps_avx512vl(auVar122,auVar122);
    auVar125 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar107));
    bVar37 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar51 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar64 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar121 = vxorps_avx512vl(auVar189,auVar189);
    auVar129 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar107));
    bVar38 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar52 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar65 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar117 = vxorps_avx512vl(auVar117,auVar117);
    auVar133 = vgatherdps_avx512vl(*param_1);
    auVar150._0_4_ =
         (uint)(bVar109 & 1) * auVar133._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar117._0_4_;
    bVar39 = (bool)((byte)(uVar110 >> 1) & 1);
    auVar150._4_4_ = (uint)bVar39 * auVar133._4_4_ | (uint)!bVar39 * auVar117._4_4_;
    bVar39 = (bool)((byte)(uVar110 >> 2) & 1);
    auVar150._8_4_ = (uint)bVar39 * auVar133._8_4_ | (uint)!bVar39 * auVar117._8_4_;
    bVar39 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar150._12_4_ = (uint)bVar39 * auVar133._12_4_ | (uint)!bVar39 * auVar117._12_4_;
    auVar150._16_4_ = (uint)((byte)(uVar110 >> 4) & 1) * auVar133._16_4_;
    auVar150._20_4_ = (uint)((byte)(uVar110 >> 5) & 1) * auVar133._20_4_;
    auVar150._24_4_ = (uint)((byte)(uVar110 >> 6) & 1) * auVar133._24_4_;
    auVar150._28_4_ = (uint)(byte)(uVar110 >> 7) * auVar133._28_4_;
    bVar39 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar53 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar66 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar74 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar80 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar87 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar94 = SUB81(uVar110 >> 7,0);
    bVar40 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar54 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar67 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar75 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar81 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar88 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar95 = SUB81(uVar110 >> 7,0);
    bVar41 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar55 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar68 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar76 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar82 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar89 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar96 = SUB81(uVar110 >> 7,0);
    bVar42 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar56 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar69 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar77 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar83 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar90 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar97 = SUB81(uVar110 >> 7,0);
    bVar43 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar57 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar70 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar78 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar84 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar91 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar98 = SUB81(uVar110 >> 7,0);
    bVar44 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar58 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar71 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar79 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar85 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar92 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar99 = SUB81(uVar110 >> 7,0);
    vpslld_avx512vl(auVar128,4);
    auVar128 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
    auVar117 = vxorps_avx512vl(auVar147._0_16_,auVar147._0_16_);
    auVar133 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
    bVar45 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar59 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar72 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar118 = vxorps_avx512vl(auVar115,auVar115);
    auVar137 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
    bVar46 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar60 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar73 = (bool)((byte)(uVar110 >> 3) & 1);
    auVar134 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
    fVar6 = (float)((uint)(bVar109 & 1) * auVar134._0_4_);
    fVar7 = (float)((uint)((byte)(uVar110 >> 1) & 1) * auVar134._4_4_);
    auVar151._4_4_ = fVar7;
    auVar151._0_4_ = fVar6;
    fVar8 = (float)((uint)((byte)(uVar110 >> 2) & 1) * auVar134._8_4_);
    auVar151._8_4_ = fVar8;
    fVar9 = (float)((uint)((byte)(uVar110 >> 3) & 1) * auVar134._12_4_);
    auVar151._12_4_ = fVar9;
    fVar10 = (float)((uint)((byte)(uVar110 >> 4) & 1) * auVar134._16_4_);
    auVar151._16_4_ = fVar10;
    fVar11 = (float)((uint)((byte)(uVar110 >> 5) & 1) * auVar134._20_4_);
    auVar151._20_4_ = fVar11;
    fVar12 = (float)((uint)((byte)(uVar110 >> 6) & 1) * auVar134._24_4_);
    auVar151._24_4_ = fVar12;
    fVar13 = (float)((uint)(byte)(uVar110 >> 7) * auVar134._28_4_);
    auVar151._28_4_ = fVar13;
    fVar112 = (float)((uint)(bVar109 & 1) * (uint)(bVar109 & 1) * auVar128._0_4_ |
                     (uint)!(bool)(bVar109 & 1) * local_140);
    bVar47 = (bool)((byte)(uVar110 >> 1) & 1);
    fVar156 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 1) & 1) * auVar128._4_4_ |
                     (uint)!bVar47 * iStack_13c);
    bVar47 = (bool)((byte)(uVar110 >> 2) & 1);
    fVar159 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 2) & 1) * auVar128._8_4_ |
                     (uint)!bVar47 * iStack_138);
    bVar47 = (bool)((byte)(uVar110 >> 3) & 1);
    fVar162 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 3) & 1) * auVar128._12_4_ |
                     (uint)!bVar47 * iStack_134);
    bVar47 = (bool)((byte)(uVar110 >> 4) & 1);
    fVar164 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 4) & 1) * auVar128._16_4_ |
                     (uint)!bVar47 * iStack_130);
    bVar47 = (bool)((byte)(uVar110 >> 5) & 1);
    fVar166 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 5) & 1) * auVar128._20_4_ |
                     (uint)!bVar47 * iStack_12c);
    bVar47 = (bool)((byte)(uVar110 >> 6) & 1);
    fVar168 = (float)((uint)bVar47 * (uint)((byte)(uVar110 >> 6) & 1) * auVar128._24_4_ |
                     (uint)!bVar47 * iStack_128);
    bVar47 = SUB81(uVar110 >> 7,0);
    fVar170 = (float)((uint)bVar47 * (uint)(byte)(uVar110 >> 7) * auVar128._28_4_ |
                     (uint)!bVar47 * iStack_124);
    fVar113 = (float)((uint)(bVar109 & 1) *
                      ((uint)(bVar109 & 1) * auVar133._0_4_ |
                      (uint)!(bool)(bVar109 & 1) * auVar117._0_4_) |
                     (uint)!(bool)(bVar109 & 1) * local_120);
    bVar47 = (bool)((byte)(uVar110 >> 1) & 1);
    fVar157 = (float)((uint)bVar47 *
                      ((uint)bVar45 * auVar133._4_4_ | (uint)!bVar45 * auVar117._4_4_) |
                     (uint)!bVar47 * iStack_11c);
    bVar45 = (bool)((byte)(uVar110 >> 2) & 1);
    fVar160 = (float)((uint)bVar45 *
                      ((uint)bVar59 * auVar133._8_4_ | (uint)!bVar59 * auVar117._8_4_) |
                     (uint)!bVar45 * iStack_118);
    bVar45 = (bool)((byte)(uVar110 >> 3) & 1);
    fVar163 = (float)((uint)bVar45 *
                      ((uint)bVar72 * auVar133._12_4_ | (uint)!bVar72 * auVar117._12_4_) |
                     (uint)!bVar45 * iStack_114);
    bVar45 = (bool)((byte)(uVar110 >> 4) & 1);
    fVar165 = (float)((uint)bVar45 * (uint)((byte)(uVar110 >> 4) & 1) * auVar133._16_4_ |
                     (uint)!bVar45 * iStack_110);
    bVar45 = (bool)((byte)(uVar110 >> 5) & 1);
    fVar167 = (float)((uint)bVar45 * (uint)((byte)(uVar110 >> 5) & 1) * auVar133._20_4_ |
                     (uint)!bVar45 * iStack_10c);
    bVar45 = (bool)((byte)(uVar110 >> 6) & 1);
    fVar169 = (float)((uint)bVar45 * (uint)((byte)(uVar110 >> 6) & 1) * auVar133._24_4_ |
                     (uint)!bVar45 * iStack_108);
    bVar45 = SUB81(uVar110 >> 7,0);
    fVar171 = (float)((uint)bVar45 * (uint)(byte)(uVar110 >> 7) * auVar133._28_4_ |
                     (uint)!bVar45 * iStack_104);
    bVar45 = (bool)((byte)(uVar110 >> 1) & 1);
    bVar47 = (bool)((byte)(uVar110 >> 2) & 1);
    bVar59 = (bool)((byte)(uVar110 >> 3) & 1);
    bVar72 = (bool)((byte)(uVar110 >> 4) & 1);
    bVar86 = (bool)((byte)(uVar110 >> 5) & 1);
    bVar93 = (bool)((byte)(uVar110 >> 6) & 1);
    bVar100 = SUB81(uVar110 >> 7,0);
    auVar139._4_4_ = bVar39 * auVar115._4_4_ | (uint)!bVar39 * iStack_19c;
    auVar139._0_4_ = (bVar109 & 1) * auVar115._0_4_ | (uint)!(bool)(bVar109 & 1) * local_1a0;
    auVar139._8_4_ = bVar53 * auVar115._8_4_ | (uint)!bVar53 * iStack_198;
    auVar139._12_4_ = bVar66 * auVar115._12_4_ | (uint)!bVar66 * iStack_194;
    auVar139._16_4_ =
         (uint)bVar74 * (uint)((byte)(uVar110 >> 4) & 1) * auVar146._16_4_ |
         (uint)!bVar74 * iStack_190;
    auVar139._20_4_ =
         (uint)bVar80 * (uint)((byte)(uVar110 >> 5) & 1) * auVar146._20_4_ |
         (uint)!bVar80 * iStack_18c;
    auVar139._24_4_ =
         (uint)bVar87 * (uint)((byte)(uVar110 >> 6) & 1) * auVar146._24_4_ |
         (uint)!bVar87 * iStack_188;
    auVar139._28_4_ =
         (uint)bVar94 * (uint)(byte)(uVar110 >> 7) * auVar146._28_4_ | (uint)!bVar94 * iStack_184;
    auVar140._4_4_ =
         (uint)bVar40 * ((uint)bVar34 * auVar131._4_4_ | (uint)!bVar34 * auVar119._4_4_) |
         (uint)!bVar40 * iStack_17c;
    auVar140._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar131._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar119._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_180;
    auVar140._8_4_ =
         (uint)bVar54 * ((uint)bVar48 * auVar131._8_4_ | (uint)!bVar48 * auVar119._8_4_) |
         (uint)!bVar54 * iStack_178;
    auVar140._12_4_ =
         (uint)bVar67 * ((uint)bVar61 * auVar131._12_4_ | (uint)!bVar61 * auVar119._12_4_) |
         (uint)!bVar67 * iStack_174;
    auVar140._16_4_ =
         (uint)bVar75 * (uint)((byte)(uVar110 >> 4) & 1) * auVar131._16_4_ |
         (uint)!bVar75 * iStack_170;
    auVar140._20_4_ =
         (uint)bVar81 * (uint)((byte)(uVar110 >> 5) & 1) * auVar131._20_4_ |
         (uint)!bVar81 * iStack_16c;
    auVar140._24_4_ =
         (uint)bVar88 * (uint)((byte)(uVar110 >> 6) & 1) * auVar131._24_4_ |
         (uint)!bVar88 * iStack_168;
    auVar140._28_4_ =
         (uint)bVar95 * (uint)(byte)(uVar110 >> 7) * auVar131._28_4_ | (uint)!bVar95 * iStack_164;
    auVar143._4_4_ =
         (uint)bVar41 * ((uint)bVar35 * auVar123._4_4_ | (uint)!bVar35 * auVar120._4_4_) |
         (uint)!bVar41 * iStack_15c;
    auVar143._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar123._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar120._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_160;
    auVar143._8_4_ =
         (uint)bVar55 * ((uint)bVar49 * auVar123._8_4_ | (uint)!bVar49 * auVar120._8_4_) |
         (uint)!bVar55 * iStack_158;
    auVar143._12_4_ =
         (uint)bVar68 * ((uint)bVar62 * auVar123._12_4_ | (uint)!bVar62 * auVar120._12_4_) |
         (uint)!bVar68 * iStack_154;
    auVar143._16_4_ =
         (uint)bVar76 * (uint)((byte)(uVar110 >> 4) & 1) * auVar123._16_4_ |
         (uint)!bVar76 * iStack_150;
    auVar143._20_4_ =
         (uint)bVar82 * (uint)((byte)(uVar110 >> 5) & 1) * auVar123._20_4_ |
         (uint)!bVar82 * iStack_14c;
    auVar143._24_4_ =
         (uint)bVar89 * (uint)((byte)(uVar110 >> 6) & 1) * auVar123._24_4_ |
         (uint)!bVar89 * iStack_148;
    auVar143._28_4_ =
         (uint)bVar96 * (uint)(byte)(uVar110 >> 7) * auVar123._28_4_ | (uint)!bVar96 * iStack_144;
    auVar134._4_4_ =
         (uint)bVar42 * ((uint)bVar36 * auVar124._4_4_ | (uint)!bVar36 * auVar188._4_4_) |
         (uint)!bVar42 * iStack_1fc;
    auVar134._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar124._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar188._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_200;
    auVar134._8_4_ =
         (uint)bVar56 * ((uint)bVar50 * auVar124._8_4_ | (uint)!bVar50 * auVar188._8_4_) |
         (uint)!bVar56 * iStack_1f8;
    auVar134._12_4_ =
         (uint)bVar69 * ((uint)bVar63 * auVar124._12_4_ | (uint)!bVar63 * auVar188._12_4_) |
         (uint)!bVar69 * iStack_1f4;
    auVar134._16_4_ =
         (uint)bVar77 * (uint)((byte)(uVar110 >> 4) & 1) * auVar124._16_4_ |
         (uint)!bVar77 * iStack_1f0;
    auVar134._20_4_ =
         (uint)bVar83 * (uint)((byte)(uVar110 >> 5) & 1) * auVar124._20_4_ |
         (uint)!bVar83 * iStack_1ec;
    auVar134._24_4_ =
         (uint)bVar90 * (uint)((byte)(uVar110 >> 6) & 1) * auVar124._24_4_ |
         (uint)!bVar90 * iStack_1e8;
    auVar134._28_4_ =
         (uint)bVar97 * (uint)(byte)(uVar110 >> 7) * auVar124._28_4_ | (uint)!bVar97 * iStack_1e4;
    auVar135._4_4_ =
         (uint)bVar43 * ((uint)bVar37 * auVar125._4_4_ | (uint)!bVar37 * auVar122._4_4_) |
         (uint)!bVar43 * iStack_1dc;
    auVar135._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar125._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar122._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_1e0;
    auVar135._8_4_ =
         (uint)bVar57 * ((uint)bVar51 * auVar125._8_4_ | (uint)!bVar51 * auVar122._8_4_) |
         (uint)!bVar57 * iStack_1d8;
    auVar135._12_4_ =
         (uint)bVar70 * ((uint)bVar64 * auVar125._12_4_ | (uint)!bVar64 * auVar122._12_4_) |
         (uint)!bVar70 * iStack_1d4;
    auVar135._16_4_ =
         (uint)bVar78 * (uint)((byte)(uVar110 >> 4) & 1) * auVar125._16_4_ |
         (uint)!bVar78 * iStack_1d0;
    auVar135._20_4_ =
         (uint)bVar84 * (uint)((byte)(uVar110 >> 5) & 1) * auVar125._20_4_ |
         (uint)!bVar84 * iStack_1cc;
    auVar135._24_4_ =
         (uint)bVar91 * (uint)((byte)(uVar110 >> 6) & 1) * auVar125._24_4_ |
         (uint)!bVar91 * iStack_1c8;
    auVar135._28_4_ =
         (uint)bVar98 * (uint)(byte)(uVar110 >> 7) * auVar125._28_4_ | (uint)!bVar98 * iStack_1c4;
    auVar136._4_4_ =
         (uint)bVar44 * ((uint)bVar38 * auVar129._4_4_ | (uint)!bVar38 * auVar121._4_4_) |
         (uint)!bVar44 * iStack_1bc;
    auVar136._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar129._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar121._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_1c0;
    auVar136._8_4_ =
         (uint)bVar58 * ((uint)bVar52 * auVar129._8_4_ | (uint)!bVar52 * auVar121._8_4_) |
         (uint)!bVar58 * iStack_1b8;
    auVar136._12_4_ =
         (uint)bVar71 * ((uint)bVar65 * auVar129._12_4_ | (uint)!bVar65 * auVar121._12_4_) |
         (uint)!bVar71 * iStack_1b4;
    auVar136._16_4_ =
         (uint)bVar79 * (uint)((byte)(uVar110 >> 4) & 1) * auVar129._16_4_ |
         (uint)!bVar79 * iStack_1b0;
    auVar136._20_4_ =
         (uint)bVar85 * (uint)((byte)(uVar110 >> 5) & 1) * auVar129._20_4_ |
         (uint)!bVar85 * iStack_1ac;
    auVar136._24_4_ =
         (uint)bVar92 * (uint)((byte)(uVar110 >> 6) & 1) * auVar129._24_4_ |
         (uint)!bVar92 * iStack_1a8;
    auVar136._28_4_ =
         (uint)bVar99 * (uint)(byte)(uVar110 >> 7) * auVar129._28_4_ | (uint)!bVar99 * iStack_1a4;
    auVar146 = vsubps_avx512vl(auVar139,auVar134);
    auVar131 = vsubps_avx512vl(auVar140,auVar135);
    auVar123 = vsubps_avx512vl(auVar143,auVar136);
    auVar125 = vfmadd213ps_avx512vl(auVar146,auVar130,auVar134);
    auVar128 = vfmadd213ps_avx512vl(auVar131,auVar130,auVar135);
    auVar138._4_4_ = fVar156;
    auVar138._0_4_ = fVar112;
    auVar138._8_4_ = fVar159;
    auVar138._12_4_ = fVar162;
    auVar138._16_4_ = fVar164;
    auVar138._20_4_ = fVar166;
    auVar138._24_4_ = fVar168;
    auVar138._28_4_ = fVar170;
    auVar127._4_4_ = fVar157;
    auVar127._0_4_ = fVar113;
    auVar127._8_4_ = fVar160;
    auVar127._12_4_ = fVar163;
    auVar127._16_4_ = fVar165;
    auVar127._20_4_ = fVar167;
    auVar127._24_4_ = fVar169;
    auVar127._28_4_ = fVar171;
    auVar184._4_4_ = __real_3f800000;
    auVar184._0_4_ = __real_3f800000;
    auVar184._8_4_ = __real_3f800000;
    auVar184._12_4_ = __real_3f800000;
    auVar184._16_4_ = __real_3f800000;
    auVar184._20_4_ = __real_3f800000;
    auVar184._24_4_ = __real_3f800000;
    auVar184._28_4_ = __real_3f800000;
    auVar124 = vsubps_avx(auVar184,auVar130);
    auVar146 = vpmovzxbd_avx2(auVar177);
    auVar146 = vpslld_avx2(auVar146,2);
    vpmovzxdq_avx2(auVar146._16_16_);
    vpmovzxdq_avx2(auVar146._0_16_);
    auVar119 = vxorps_avx512vl(auVar116,auVar116);
    auVar188 = vgatherqps_avx512vl(*(undefined8 *)(param_6 + param_3));
    bVar34 = (bool)((byte)(uVar110 >> 1) & 1);
    auVar117 = vgatherqps_avx512vl(*(undefined8 *)(param_6 + unaff_R15));
    bVar35 = (bool)(bVar109 >> 5 & 1);
    auVar122._8_8_ = (ulonglong)bVar35 * auVar117._8_8_ | (ulonglong)!bVar35 * SUB168(ZEXT816(0),4);
    auVar122._0_8_ = (ulonglong)(bVar109 >> 4 & 1) * auVar117._0_8_;
    auVar146 = vmaxps_avx(auVar130,auVar124);
    auVar178._0_4_ = auVar146._0_4_ + __real_3f800000;
    auVar178._4_4_ = auVar146._4_4_ + __real_3f800000;
    auVar178._8_4_ = auVar146._8_4_ + __real_3f800000;
    auVar178._12_4_ = auVar146._12_4_ + __real_3f800000;
    auVar178._16_4_ = auVar146._16_4_ + __real_3f800000;
    auVar178._20_4_ = auVar146._20_4_ + __real_3f800000;
    auVar178._24_4_ = auVar146._24_4_ + __real_3f800000;
    auVar178._28_4_ = auVar146._28_4_ + __real_3f800000;
    auVar185._4_4_ = __real_40000000;
    auVar185._0_4_ = __real_40000000;
    auVar185._8_4_ = __real_40000000;
    auVar185._12_4_ = __real_40000000;
    auVar185._16_4_ = __real_40000000;
    auVar185._20_4_ = __real_40000000;
    auVar185._24_4_ = __real_40000000;
    auVar185._28_4_ = __real_40000000;
    auVar146 = vdivps_avx(auVar185,auVar178);
    auVar180._4_4_ =
         (uint)bVar45 * ((uint)bVar46 * auVar137._4_4_ | (uint)!bVar46 * auVar118._4_4_) |
         (uint)!bVar45 * iStack_fc;
    auVar180._0_4_ =
         (uint)(bVar109 & 1) *
         ((uint)(bVar109 & 1) * auVar137._0_4_ | (uint)!(bool)(bVar109 & 1) * auVar118._0_4_) |
         (uint)!(bool)(bVar109 & 1) * local_100;
    auVar180._8_4_ =
         (uint)bVar47 * ((uint)bVar60 * auVar137._8_4_ | (uint)!bVar60 * auVar118._8_4_) |
         (uint)!bVar47 * iStack_f8;
    auVar180._12_4_ =
         (uint)bVar59 * ((uint)bVar73 * auVar137._12_4_ | (uint)!bVar73 * auVar118._12_4_) |
         (uint)!bVar59 * iStack_f4;
    auVar180._16_4_ =
         (uint)bVar72 * (uint)((byte)(uVar110 >> 4) & 1) * auVar137._16_4_ |
         (uint)!bVar72 * iStack_f0;
    auVar180._20_4_ =
         (uint)bVar86 * (uint)((byte)(uVar110 >> 5) & 1) * auVar137._20_4_ |
         (uint)!bVar86 * iStack_ec;
    auVar180._24_4_ =
         (uint)bVar93 * (uint)((byte)(uVar110 >> 6) & 1) * auVar137._24_4_ |
         (uint)!bVar93 * iStack_e8;
    auVar180._28_4_ =
         (uint)bVar100 * (uint)(byte)(uVar110 >> 7) * auVar137._28_4_ | (uint)!bVar100 * iStack_e4;
    auVar129 = vfmadd213ps_avx512vl(auVar123,auVar130,auVar136);
    auVar131 = vsubps_avx(auVar138,auVar125);
    auVar123 = vsubps_avx(auVar127,auVar128);
    auVar125 = vsubps_avx(auVar180,auVar129);
    auVar128 = vinsertf32x4_avx512vl
                         (ZEXT1632(CONCAT88((ulonglong)bVar34 * auVar188._8_8_ |
                                            (ulonglong)!bVar34 * auVar119._8_8_,
                                            (ulonglong)(bVar109 & 1) * auVar188._0_8_ |
                                            (ulonglong)!(bool)(bVar109 & 1) * auVar119._0_8_)),
                          auVar122,1);
    auVar129 = vmulps_avx512vl(auVar123,auVar123);
    auVar129 = vfmadd231ps_avx512vl(auVar129,auVar131,auVar131);
    auVar129 = vfmadd231ps_avx512vl(auVar129,auVar125,auVar125);
    auVar129 = vsqrtps_avx512vl(auVar129);
    auVar133 = vdivps_avx512vl(auVar131,auVar129);
    auVar131 = vdivps_avx(auVar123,auVar129);
    auVar123 = vdivps_avx(auVar125,auVar129);
    auVar125 = vsubps_avx(auVar129,auVar132);
    auVar132 = vmulps_avx512vl(auVar133,auVar125);
    auVar133 = vmulps_avx512vl(auVar124,auVar150);
    auVar130 = vfmadd231ps_avx512vl(auVar133,auVar130,auVar149);
    auVar132 = vmulps_avx512vl(auVar128,auVar132);
    auVar182._0_4_ = auVar131._0_4_ * auVar125._0_4_ * auVar128._0_4_;
    auVar182._4_4_ = auVar131._4_4_ * auVar125._4_4_ * auVar128._4_4_;
    auVar182._8_4_ = auVar131._8_4_ * auVar125._8_4_ * auVar128._8_4_;
    auVar182._12_4_ = auVar131._12_4_ * auVar125._12_4_ * auVar128._12_4_;
    auVar182._16_4_ = auVar131._16_4_ * auVar125._16_4_ * auVar128._16_4_;
    auVar182._20_4_ = auVar131._20_4_ * auVar125._20_4_ * auVar128._20_4_;
    auVar182._24_4_ = auVar131._24_4_ * auVar125._24_4_ * auVar128._24_4_;
    auVar182._28_4_ = auVar131._28_4_ * auVar125._28_4_ * auVar128._28_4_;
    auVar174._0_4_ = auVar123._0_4_ * auVar125._0_4_ * auVar128._0_4_;
    auVar174._4_4_ = auVar123._4_4_ * auVar125._4_4_ * auVar128._4_4_;
    auVar174._8_4_ = auVar123._8_4_ * auVar125._8_4_ * auVar128._8_4_;
    auVar174._12_4_ = auVar123._12_4_ * auVar125._12_4_ * auVar128._12_4_;
    auVar174._16_4_ = auVar123._16_4_ * auVar125._16_4_ * auVar128._16_4_;
    auVar174._20_4_ = auVar123._20_4_ * auVar125._20_4_ * auVar128._20_4_;
    auVar174._24_4_ = auVar123._24_4_ * auVar125._24_4_ * auVar128._24_4_;
    auVar174._28_4_ = auVar123._28_4_ * auVar125._28_4_ * auVar128._28_4_;
    auVar186._0_4_ = auVar130._0_4_ + fVar6;
    auVar186._4_4_ = auVar130._4_4_ + fVar7;
    auVar186._8_4_ = auVar130._8_4_ + fVar8;
    auVar186._12_4_ = auVar130._12_4_ + fVar9;
    auVar186._16_4_ = auVar130._16_4_ + fVar10;
    auVar186._20_4_ = auVar130._20_4_ + fVar11;
    auVar186._24_4_ = auVar130._24_4_ + fVar12;
    auVar186._28_4_ = auVar130._28_4_ + fVar13;
    auVar123 = vdivps_avx512vl(auVar132,auVar186);
    auVar131 = vdivps_avx(auVar182,auVar186);
    auVar125 = vdivps_avx512vl(auVar174,auVar186);
    auVar104 = ZEXT412(0);
    uVar101 = vcmpps_avx512vl(auVar151,ZEXT1232(auVar104) << 0x20,0);
    uVar102 = vcmpps_avx512vl(auVar130,ZEXT1232(auVar104) << 0x20,0);
    auVar133._4_4_ = __real_322bcc77;
    auVar133._0_4_ = __real_322bcc77;
    auVar133._8_4_ = __real_322bcc77;
    auVar133._12_4_ = __real_322bcc77;
    auVar133._16_4_ = __real_322bcc77;
    auVar133._20_4_ = __real_322bcc77;
    auVar133._24_4_ = __real_322bcc77;
    auVar133._28_4_ = __real_322bcc77;
    uVar103 = vcmpps_avx512vl(auVar129,auVar133,2);
    bVar109 = (byte)uVar103 | (byte)uVar101 & (byte)uVar102;
    fVar17 = (float)((uint)!(bool)(bVar109 & 1) * auVar123._0_4_);
    fVar18 = (float)((uint)!(bool)(bVar109 >> 1 & 1) * auVar123._4_4_);
    auVar152._4_4_ = fVar18;
    auVar152._0_4_ = fVar17;
    fVar19 = (float)((uint)!(bool)(bVar109 >> 2 & 1) * auVar123._8_4_);
    auVar152._8_4_ = fVar19;
    fVar20 = (float)((uint)!(bool)(bVar109 >> 3 & 1) * auVar123._12_4_);
    auVar152._12_4_ = fVar20;
    fVar21 = (float)((uint)!(bool)(bVar109 >> 4 & 1) * auVar123._16_4_);
    auVar152._16_4_ = fVar21;
    fVar22 = (float)((uint)!(bool)(bVar109 >> 5 & 1) * auVar123._20_4_);
    auVar152._20_4_ = fVar22;
    fVar23 = (float)((uint)!(bool)(bVar109 >> 6 & 1) * auVar123._24_4_);
    auVar152._24_4_ = fVar23;
    auVar152._28_4_ =
         (float)((uint)(bVar109 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                (uint)!(bool)(bVar109 >> 7) * auVar123._28_4_);
    fVar24 = (float)((uint)!(bool)(bVar109 & 1) * auVar131._0_4_);
    fVar25 = (float)((uint)!(bool)(bVar109 >> 1 & 1) * auVar131._4_4_);
    auVar153._4_4_ = fVar25;
    auVar153._0_4_ = fVar24;
    fVar26 = (float)((uint)!(bool)(bVar109 >> 2 & 1) * auVar131._8_4_);
    auVar153._8_4_ = fVar26;
    fVar27 = (float)((uint)!(bool)(bVar109 >> 3 & 1) * auVar131._12_4_);
    auVar153._12_4_ = fVar27;
    fVar28 = (float)((uint)!(bool)(bVar109 >> 4 & 1) * auVar131._16_4_);
    auVar153._16_4_ = fVar28;
    fVar29 = (float)((uint)!(bool)(bVar109 >> 5 & 1) * auVar131._20_4_);
    auVar153._20_4_ = fVar29;
    fVar30 = (float)((uint)!(bool)(bVar109 >> 6 & 1) * auVar131._24_4_);
    auVar153._24_4_ = fVar30;
    fVar31 = (float)((uint)!(bool)(bVar109 >> 7) * auVar131._28_4_);
    auVar153._28_4_ = fVar31;
    auVar154._4_4_ = (uint)!(bool)(bVar109 >> 1 & 1) * auVar125._4_4_;
    auVar154._0_4_ = (uint)!(bool)(bVar109 & 1) * auVar125._0_4_;
    auVar154._8_4_ = (uint)!(bool)(bVar109 >> 2 & 1) * auVar125._8_4_;
    auVar154._12_4_ = (uint)!(bool)(bVar109 >> 3 & 1) * auVar125._12_4_;
    auVar154._16_4_ = (uint)!(bool)(bVar109 >> 4 & 1) * auVar125._16_4_;
    auVar154._20_4_ = (uint)!(bool)(bVar109 >> 5 & 1) * auVar125._20_4_;
    auVar154._24_4_ = (uint)!(bool)(bVar109 >> 6 & 1) * auVar125._24_4_;
    auVar154._28_4_ = (uint)!(bool)(bVar109 >> 7) * auVar125._28_4_;
    uVar107 = vcmpps_avx512vl(ZEXT1232(auVar104) << 0x20,auVar151,1);
    uVar107 = uVar110 & uVar107;
    if ((char)uVar107 != '\0') {
      auVar175._0_4_ = auVar146._0_4_ * fVar6;
      auVar175._4_4_ = auVar146._4_4_ * fVar7;
      auVar175._8_4_ = auVar146._8_4_ * fVar8;
      auVar175._12_4_ = auVar146._12_4_ * fVar9;
      auVar175._16_4_ = auVar146._16_4_ * fVar10;
      auVar175._20_4_ = auVar146._20_4_ * fVar11;
      auVar175._24_4_ = auVar146._24_4_ * fVar12;
      auVar175._28_4_ = auVar146._28_4_ * fVar13;
      auVar181._0_4_ = -(auVar175._0_4_ * fVar17) + fVar112;
      auVar181._4_4_ = -(auVar175._4_4_ * fVar18) + fVar156;
      auVar181._8_4_ = -(auVar175._8_4_ * fVar19) + fVar159;
      auVar181._12_4_ = -(auVar175._12_4_ * fVar20) + fVar162;
      auVar181._16_4_ = -(auVar175._16_4_ * fVar21) + fVar164;
      auVar181._20_4_ = -(auVar175._20_4_ * fVar22) + fVar166;
      auVar181._24_4_ = -(auVar175._24_4_ * fVar23) + fVar168;
      auVar181._28_4_ = -(auVar175._28_4_ * auVar152._28_4_) + fVar170;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar152,uVar107,auVar181);
      auVar179._0_4_ = -(auVar175._0_4_ * fVar24) + fVar113;
      auVar179._4_4_ = -(auVar175._4_4_ * fVar25) + fVar157;
      auVar179._8_4_ = -(auVar175._8_4_ * fVar26) + fVar160;
      auVar179._12_4_ = -(auVar175._12_4_ * fVar27) + fVar163;
      auVar179._16_4_ = -(auVar175._16_4_ * fVar28) + fVar165;
      auVar179._20_4_ = -(auVar175._20_4_ * fVar29) + fVar167;
      auVar179._24_4_ = -(auVar175._24_4_ * fVar30) + fVar169;
      auVar179._28_4_ = -(auVar175._28_4_ * fVar31) + fVar171;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar180,uVar107,auVar179);
      auVar131 = vfnmadd231ps_avx512vl(auVar180,auVar154,auVar175);
      vscatterdps_avx512vl(ZEXT832(param_1) + (ZEXT1232(auVar104) << 0x20),uVar107,auVar131);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar129,uVar107,auVar151);
    }
    uVar107 = vcmpps_avx512vl(auVar149,ZEXT1232(auVar104) << 0x20,0xc);
    uVar107 = uVar110 & uVar107;
    if ((char)uVar107 != '\0') {
      auVar131 = vmulps_avx512vl(auVar149,auVar146);
      auVar172._0_4_ = fVar1 * auVar131._0_4_;
      auVar172._4_4_ = fVar14 * auVar131._4_4_;
      auVar172._8_4_ = fVar15 * auVar131._8_4_;
      auVar172._12_4_ = fVar16 * auVar131._12_4_;
      auVar172._16_4_ = fVar2 * auVar131._16_4_;
      auVar172._20_4_ = fVar3 * auVar131._20_4_;
      auVar172._24_4_ = fVar4 * auVar131._24_4_;
      auVar172._28_4_ = fVar5 * auVar131._28_4_;
      auVar123 = vfmadd231ps_avx512vl(auVar139,auVar172,auVar152);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar142,uVar107,auVar123);
      auVar123 = vfmadd231ps_avx512vl(auVar140,auVar172,auVar153);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar141,uVar107,auVar123);
      auVar123 = vfmadd231ps_avx512vl(auVar143,auVar154,auVar172);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar131,uVar107,auVar123);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar130,uVar107,auVar149);
    }
    uVar107 = vcmpps_avx512vl(auVar150,ZEXT832(0) << 0x40,0xc);
    uVar110 = uVar110 & uVar107;
    if ((char)uVar110 != '\0') {
      auVar146 = vmulps_avx512vl(auVar150,auVar146);
      auVar173._0_4_ = auVar124._0_4_ * auVar146._0_4_;
      auVar173._4_4_ = auVar124._4_4_ * auVar146._4_4_;
      auVar173._8_4_ = auVar124._8_4_ * auVar146._8_4_;
      auVar173._12_4_ = auVar124._12_4_ * auVar146._12_4_;
      auVar173._16_4_ = auVar124._16_4_ * auVar146._16_4_;
      auVar173._20_4_ = auVar124._20_4_ * auVar146._20_4_;
      auVar173._24_4_ = auVar124._24_4_ * auVar146._24_4_;
      auVar173._28_4_ = auVar124._28_4_ * auVar146._28_4_;
      auVar146 = vfmadd213ps_avx512vl(auVar152,auVar173,auVar134);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar141,uVar110,auVar146);
      auVar146 = vfmadd213ps_avx512vl(auVar153,auVar173,auVar135);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar141 | auVar147),uVar110,auVar146);
      auVar146 = vfmadd213ps_avx512vl(auVar154,auVar173,auVar136);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar141 | auVar148),uVar110,auVar146);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar141 | auVar126),uVar110,auVar150);
    }
  }
  return;
}


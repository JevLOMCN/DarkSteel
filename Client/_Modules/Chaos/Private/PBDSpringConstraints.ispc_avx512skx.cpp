// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplySpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_CunfCuni_avx512skx @ 140359250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_CunfCuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
               uint param_5)

{
  undefined1 (*pauVar1) [32];
  int *piVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
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
  ulonglong uVar64;
  undefined8 uVar65;
  uint uVar66;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  uint uVar67;
  ulonglong uVar68;
  longlong unaff_R13;
  byte bVar69;
  ulonglong uVar70;
  ulonglong uVar71;
  int iVar72;
  int iVar99;
  int iVar100;
  undefined1 auVar73 [16];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  int iVar101;
  undefined1 auVar91 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar105 [16];
  undefined1 auVar106 [32];
  undefined1 auVar107 [16];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  float fVar111;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar112 [32];
  float fVar119;
  undefined1 auVar120 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar121 [16];
  undefined1 in_ZMM20 [64];
  undefined1 auVar122 [16];
  undefined1 in_ZMM21 [64];
  undefined1 auVar123 [16];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar124 [16];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 auVar125 [16];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
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
  int aiStack_138 [4];
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
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  auVar125 = in_ZMM27._0_16_;
  auVar73 = in_ZMM16._0_16_;
  auVar76 = in_ZMM26._0_16_;
  auVar75 = in_ZMM25._0_16_;
  auVar124 = in_ZMM24._0_16_;
  auVar121 = in_ZMM20._0_16_;
  auVar74 = in_ZMM23._0_16_;
  auVar123 = in_ZMM22._0_16_;
  auVar122 = in_ZMM21._0_16_;
  uVar67 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar67 = param_5;
  }
  auVar95._0_4_ = in_ZMM3._0_4_;
  if ((int)(uVar67 & 0xfffffff8) < 1) {
    uVar71 = 0;
  }
  else {
    uVar71 = 0;
    auVar105._4_4_ = __real_00000004;
    auVar105._0_4_ = __real_00000004;
    auVar105._8_4_ = __real_00000004;
    auVar105._12_4_ = __real_00000004;
    auVar92._16_4_ = __real_00000004;
    auVar92._0_16_ = auVar105;
    auVar92._20_4_ = __real_00000004;
    auVar92._24_4_ = __real_00000004;
    auVar92._28_4_ = __real_00000004;
    auVar107._4_4_ = __real_00000008;
    auVar107._0_4_ = __real_00000008;
    auVar107._8_4_ = __real_00000008;
    auVar107._12_4_ = __real_00000008;
    auVar93._16_4_ = __real_00000008;
    auVar93._0_16_ = auVar107;
    auVar93._20_4_ = __real_00000008;
    auVar93._24_4_ = __real_00000008;
    auVar93._28_4_ = __real_00000008;
    auVar73 = vxorps_avx512vl(auVar73,auVar73);
    auVar77 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar78 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    uVar68 = 0;
    do {
      auVar79 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + uVar68 * 2));
      auVar80 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x20 + uVar68 * 2));
      auVar81 = vmovdqa64_avx512vl(auVar79);
      auVar81 = vpermt2d_avx512vl(auVar81,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar80);
      auVar82 = vpslld_avx512vl(auVar81,4);
      auVar124 = auVar82._0_16_;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar125 = auVar124 | auVar105;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar68));
      auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RDI));
      auVar79 = vpermt2d_avx512vl(auVar79,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar80);
      auVar79 = vpslld_avx512vl(auVar79,4);
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
      in_ZMM30 = ZEXT3264(auVar87);
      auVar123 = auVar79._0_16_;
      auVar121 = auVar123 | auVar105;
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar88 = vgatherdps_avx512vl(*param_1);
      auVar74 = auVar88._0_16_;
      in_ZMM23 = ZEXT3264(auVar88);
      auVar122 = auVar123 | auVar107;
      vxorps_avx512vl(in_ZMM25._0_16_,in_ZMM25._0_16_);
      auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_138));
      auVar75 = auVar89._0_16_;
      in_ZMM25 = ZEXT3264(auVar89);
      auVar123 = auVar123 | auVar77._0_16_;
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      auVar76 = auVar90._0_16_;
      in_ZMM26 = ZEXT3264(auVar90);
      auVar79 = vsubps_avx512vl(auVar83,auVar87);
      auVar80 = vsubps_avx512vl(auVar84,auVar88);
      auVar81 = vsubps_avx512vl(auVar85,auVar89);
      auVar112._0_4_ =
           auVar81._0_4_ * auVar81._0_4_ +
           auVar79._0_4_ * auVar79._0_4_ + auVar80._0_4_ * auVar80._0_4_;
      auVar112._4_4_ =
           auVar81._4_4_ * auVar81._4_4_ +
           auVar79._4_4_ * auVar79._4_4_ + auVar80._4_4_ * auVar80._4_4_;
      auVar112._8_4_ =
           auVar81._8_4_ * auVar81._8_4_ +
           auVar79._8_4_ * auVar79._8_4_ + auVar80._8_4_ * auVar80._8_4_;
      auVar112._12_4_ =
           auVar81._12_4_ * auVar81._12_4_ +
           auVar79._12_4_ * auVar79._12_4_ + auVar80._12_4_ * auVar80._12_4_;
      auVar112._16_4_ =
           auVar81._16_4_ * auVar81._16_4_ +
           auVar79._16_4_ * auVar79._16_4_ + auVar80._16_4_ * auVar80._16_4_;
      auVar112._20_4_ =
           auVar81._20_4_ * auVar81._20_4_ +
           auVar79._20_4_ * auVar79._20_4_ + auVar80._20_4_ * auVar80._20_4_;
      auVar112._24_4_ =
           auVar81._24_4_ * auVar81._24_4_ +
           auVar79._24_4_ * auVar79._24_4_ + auVar80._24_4_ * auVar80._24_4_;
      auVar112._28_4_ =
           auVar81._28_4_ * auVar81._28_4_ +
           auVar79._28_4_ * auVar79._28_4_ + auVar80._28_4_ * auVar80._28_4_;
      auVar91 = vsqrtps_avx(auVar112);
      uVar70 = vcmpps_avx512vl(auVar112,auVar78,1);
      auVar79 = vdivps_avx(auVar79,auVar91);
      auVar80 = vdivps_avx(auVar80,auVar91);
      auVar81 = vdivps_avx(auVar81,auVar91);
      bVar69 = (byte)uVar70;
      iVar72 = auVar73._0_4_;
      bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
      iVar99 = auVar73._4_4_;
      bVar7 = (bool)((byte)(uVar70 >> 2) & 1);
      iVar100 = auVar73._8_4_;
      bVar20 = (bool)((byte)(uVar70 >> 3) & 1);
      iVar101 = auVar73._12_4_;
      bVar56 = SUB81(uVar70 >> 7,0);
      bVar5 = (bool)((byte)(uVar70 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar70 >> 2) & 1);
      bVar21 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar102._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar91._0_4_;
      bVar6 = (bool)((byte)(uVar70 >> 1) & 1);
      auVar102._4_4_ = (uint)bVar6 * iVar99 | (uint)!bVar6 * auVar91._4_4_;
      bVar6 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar102._8_4_ = (uint)bVar6 * iVar100 | (uint)!bVar6 * auVar91._8_4_;
      bVar6 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar102._12_4_ = (uint)bVar6 * iVar101 | (uint)!bVar6 * auVar91._12_4_;
      auVar102._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar91._16_4_;
      auVar102._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar91._20_4_;
      auVar102._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar91._24_4_;
      bVar6 = SUB81(uVar70 >> 7,0);
      auVar102._28_4_ =
           (uint)bVar6 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar6 * auVar91._28_4_;
      unaff_RSI = uVar68 & 0xffffffff;
      auVar91 = vsubps_avx(auVar102,*(undefined1 (*) [32])(param_3 + unaff_RSI));
      fVar111 = auVar91._0_4_;
      fVar113 = auVar91._4_4_;
      fVar114 = auVar91._8_4_;
      fVar115 = auVar91._12_4_;
      fVar116 = auVar91._16_4_;
      fVar117 = auVar91._20_4_;
      fVar118 = auVar91._24_4_;
      fVar119 = auVar91._28_4_;
      bVar6 = (bool)((byte)(uVar70 >> 1) & 1);
      bVar9 = (bool)((byte)(uVar70 >> 2) & 1);
      bVar22 = (bool)((byte)(uVar70 >> 3) & 1);
      bVar35 = (bool)((byte)(uVar70 >> 4) & 1);
      bVar42 = (bool)((byte)(uVar70 >> 5) & 1);
      bVar49 = (bool)((byte)(uVar70 >> 6) & 1);
      bVar57 = SUB81(uVar70 >> 7,0);
      auVar91 = vaddps_avx512vl(auVar86,auVar90);
      auVar109._0_4_ =
           (float)((uint)(bVar69 & 1) * (int)fVar111 |
                  (uint)!(bool)(bVar69 & 1) * (int)(fVar111 * auVar79._0_4_)) * auVar95._0_4_;
      auVar109._4_4_ =
           (float)((uint)bVar6 * (int)fVar113 | (uint)!bVar6 * (int)(fVar113 * auVar79._4_4_)) *
           auVar95._0_4_;
      auVar109._8_4_ =
           (float)((uint)bVar9 * (int)fVar114 | (uint)!bVar9 * (int)(fVar114 * auVar79._8_4_)) *
           auVar95._0_4_;
      auVar109._12_4_ =
           (float)((uint)bVar22 * (int)fVar115 | (uint)!bVar22 * (int)(fVar115 * auVar79._12_4_)) *
           auVar95._0_4_;
      auVar109._16_4_ =
           (float)((uint)bVar35 * (int)fVar116 | (uint)!bVar35 * (int)(fVar116 * auVar79._16_4_)) *
           auVar95._0_4_;
      auVar109._20_4_ =
           (float)((uint)bVar42 * (int)fVar117 | (uint)!bVar42 * (int)(fVar117 * auVar79._20_4_)) *
           auVar95._0_4_;
      auVar109._24_4_ =
           (float)((uint)bVar49 * (int)fVar118 | (uint)!bVar49 * (int)(fVar118 * auVar79._24_4_)) *
           auVar95._0_4_;
      auVar109._28_4_ =
           (float)((uint)bVar57 * (int)fVar119 | (uint)!bVar57 * (int)(fVar119 * auVar79._28_4_)) *
           auVar95._0_4_;
      auVar110._0_4_ =
           (float)((uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar80._0_4_) *
           fVar111 * auVar95._0_4_;
      auVar110._4_4_ =
           (float)((uint)bVar4 * iVar99 | (uint)!bVar4 * auVar80._4_4_) * fVar113 * auVar95._0_4_;
      auVar110._8_4_ =
           (float)((uint)bVar7 * iVar100 | (uint)!bVar7 * auVar80._8_4_) * fVar114 * auVar95._0_4_;
      auVar110._12_4_ =
           (float)((uint)bVar20 * iVar101 | (uint)!bVar20 * auVar80._12_4_) * fVar115 *
           auVar95._0_4_;
      auVar110._16_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar80._16_4_) * fVar116 *
           auVar95._0_4_;
      auVar110._20_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar80._20_4_) * fVar117 *
           auVar95._0_4_;
      auVar110._24_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar80._24_4_) * fVar118 *
           auVar95._0_4_;
      auVar110._28_4_ =
           (float)((uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                  (uint)!bVar56 * auVar80._28_4_) * fVar119 * auVar95._0_4_;
      auVar120._0_4_ =
           (float)((uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar81._0_4_) *
           fVar111 * auVar95._0_4_;
      auVar120._4_4_ =
           (float)((uint)bVar5 * iVar99 | (uint)!bVar5 * auVar81._4_4_) * fVar113 * auVar95._0_4_;
      auVar120._8_4_ =
           (float)((uint)bVar8 * iVar100 | (uint)!bVar8 * auVar81._8_4_) * fVar114 * auVar95._0_4_;
      auVar120._12_4_ =
           (float)((uint)bVar21 * iVar101 | (uint)!bVar21 * auVar81._12_4_) * fVar115 *
           auVar95._0_4_;
      auVar120._16_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar81._16_4_) * fVar116 *
           auVar95._0_4_;
      auVar120._20_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar81._20_4_) * fVar117 *
           auVar95._0_4_;
      auVar120._24_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar81._24_4_) * fVar118 *
           auVar95._0_4_;
      auVar120._28_4_ =
           (float)((uint)!SUB81(uVar70 >> 7,0) * auVar81._28_4_) * fVar119 * auVar95._0_4_;
      auVar79 = vdivps_avx(auVar109,auVar91);
      auVar80 = vdivps_avx(auVar110,auVar91);
      auVar81 = vdivps_avx(auVar120,auVar91);
      uVar70 = vcmpps_avx512vl(auVar90,ZEXT1632(auVar73),0);
      uVar64 = vcmpps_avx512vl(auVar86,ZEXT1632(auVar73),0);
      uVar70 = uVar70 & uVar64;
      bVar69 = (byte)uVar70;
      auVar91._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar79._0_4_;
      bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
      auVar91._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar79._4_4_;
      bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar91._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar79._8_4_;
      bVar4 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar91._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar79._12_4_;
      auVar91._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar79._16_4_;
      auVar91._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar79._20_4_;
      auVar91._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar79._24_4_;
      auVar91._28_4_ = (uint)!SUB81(uVar70 >> 7,0) * auVar79._28_4_;
      auVar106._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar80._0_4_;
      bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
      auVar106._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar80._4_4_;
      bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar106._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar80._8_4_;
      bVar4 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar106._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar80._12_4_;
      auVar106._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar80._16_4_;
      auVar106._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar80._20_4_;
      auVar106._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar80._24_4_;
      bVar4 = SUB81(uVar70 >> 7,0);
      auVar106._28_4_ =
           (uint)bVar4 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar4 * auVar80._28_4_;
      auVar80._0_4_ =
           (float)((uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar81._0_4_);
      bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
      auVar80._4_4_ = (float)((uint)bVar4 * iVar99 | (uint)!bVar4 * auVar81._4_4_);
      bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar80._8_4_ = (float)((uint)bVar4 * iVar100 | (uint)!bVar4 * auVar81._8_4_);
      bVar4 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar80._12_4_ = (float)((uint)bVar4 * iVar101 | (uint)!bVar4 * auVar81._12_4_);
      fVar111 = (float)((uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar81._16_4_);
      auVar80._16_4_ = fVar111;
      fVar113 = (float)((uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar81._20_4_);
      auVar80._20_4_ = fVar113;
      fVar114 = (float)((uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar81._24_4_);
      auVar80._24_4_ = fVar114;
      fVar115 = (float)((uint)!SUB81(uVar70 >> 7,0) * auVar81._28_4_);
      auVar80._28_4_ = fVar115;
      uVar65 = vcmpps_avx512vl(ZEXT1632(auVar73),auVar86,1);
      auVar79 = auVar85;
      if ((char)uVar65 != '\0') {
        auVar83 = vfnmadd231ps_avx512vl(auVar83,auVar86,auVar91);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar86,uVar65,auVar83);
        auVar84 = vfnmadd231ps_avx512vl(auVar84,auVar86,auVar106);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar65,auVar84);
        auVar79._0_4_ = -(auVar86._0_4_ * auVar80._0_4_) + auVar85._0_4_;
        auVar79._4_4_ = -(auVar86._4_4_ * auVar80._4_4_) + auVar85._4_4_;
        auVar79._8_4_ = -(auVar86._8_4_ * auVar80._8_4_) + auVar85._8_4_;
        auVar79._12_4_ = -(auVar86._12_4_ * auVar80._12_4_) + auVar85._12_4_;
        auVar79._16_4_ = -(auVar86._16_4_ * fVar111) + auVar85._16_4_;
        auVar79._20_4_ = -(auVar86._20_4_ * fVar113) + auVar85._20_4_;
        auVar79._24_4_ = -(auVar86._24_4_ * fVar114) + auVar85._24_4_;
        auVar79._28_4_ = -(auVar86._28_4_ * fVar115) + auVar85._28_4_;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar120,uVar65,auVar79);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar82 | auVar77),uVar65,auVar86);
      }
      in_ZMM31 = ZEXT3264(auVar84);
      in_ZMM28 = ZEXT3264(auVar83);
      uVar65 = vcmpps_avx512vl(ZEXT1632(auVar73),auVar90,1);
      if ((char)uVar65 != '\0') {
        auVar81 = vfmadd213ps_avx512vl(auVar91,auVar90,auVar87);
        vscatterdps_avx512vl(ZEXT832(param_1) + in_ZMM3._0_32_,uVar65,auVar81);
        auVar81 = vfmadd213ps_avx512vl(auVar106,auVar90,auVar88);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar92,uVar65,auVar81);
        auVar80 = vfmadd213ps_avx512vl(auVar80,auVar90,auVar89);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar93,uVar65,auVar80);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar79,uVar65,auVar90);
      }
      uVar68 = uVar68 + 0x20;
      uVar66 = (int)uVar71 + 8;
      uVar71 = (ulonglong)uVar66;
    } while ((int)uVar66 < (int)(uVar67 & 0xfffffff8));
  }
  if ((int)uVar71 < (int)param_5) {
    auVar77 = vpbroadcastd_avx512vl();
    auVar77 = vpor_avx2(auVar77,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar78 = vpbroadcastd_avx512vl();
    uVar68 = vpcmpgtd_avx512vl(auVar78,auVar77);
    pauVar1 = (undefined1 (*) [32])(param_2 + uVar71 * 8);
    bVar69 = (byte)uVar68;
    if (bVar69 == 0xff) {
      auVar77 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,*pauVar1,pauVar1[1]);
      auVar78 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,*pauVar1,pauVar1[1]);
    }
    else {
      auVar78 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + uVar71));
      auVar77._4_4_ = (uint)((byte)(uVar68 >> 1) & 1) * auVar78._4_4_;
      auVar77._0_4_ = (uint)(bVar69 & 1) * auVar78._0_4_;
      auVar77._8_4_ = (uint)((byte)(uVar68 >> 2) & 1) * auVar78._8_4_;
      auVar77._12_4_ = (uint)((byte)(uVar68 >> 3) & 1) * auVar78._12_4_;
      auVar77._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * auVar78._16_4_;
      auVar77._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * auVar78._20_4_;
      auVar77._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * auVar78._24_4_;
      auVar77._28_4_ = (uint)(byte)(uVar68 >> 7) * auVar78._28_4_;
      auVar92 = vpgatherdd_avx512vl(*(undefined4 *)((longlong)pauVar1 * 2));
      auVar78._4_4_ = (uint)((byte)(uVar68 >> 1) & 1) * auVar92._4_4_;
      auVar78._0_4_ = (uint)(bVar69 & 1) * auVar92._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar68 >> 2) & 1) * auVar92._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar68 >> 3) & 1) * auVar92._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * auVar92._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * auVar92._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * auVar92._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar68 >> 7) * auVar92._28_4_;
    }
    auVar106 = vpslld_avx2(auVar77,4);
    auVar103._4_4_ = __real_00000004;
    auVar103._0_4_ = __real_00000004;
    auVar103._8_4_ = __real_00000004;
    auVar103._12_4_ = __real_00000004;
    auVar103._16_4_ = __real_00000004;
    auVar103._20_4_ = __real_00000004;
    auVar103._24_4_ = __real_00000004;
    auVar103._28_4_ = __real_00000004;
    auVar122 = vxorps_avx512vl(auVar122,auVar122);
    auVar77 = vgatherdps_avx512vl(*param_1);
    bVar4 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar56 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar23 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar123 = vxorps_avx512vl(auVar123,auVar123);
    auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar5 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar57 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar24 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar104._4_4_ = __real_00000008;
    auVar104._0_4_ = __real_00000008;
    auVar104._8_4_ = __real_00000008;
    auVar104._12_4_ = __real_00000008;
    auVar104._16_4_ = __real_00000008;
    auVar104._20_4_ = __real_00000008;
    auVar104._24_4_ = __real_00000008;
    auVar104._28_4_ = __real_00000008;
    auVar74 = vxorps_avx512vl(auVar74,auVar74);
    auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar1));
    bVar6 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar25 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar108._4_4_ = __real_0000000c;
    auVar108._0_4_ = __real_0000000c;
    auVar108._8_4_ = __real_0000000c;
    auVar108._12_4_ = __real_0000000c;
    auVar108._16_4_ = __real_0000000c;
    auVar108._20_4_ = __real_0000000c;
    auVar108._24_4_ = __real_0000000c;
    auVar108._28_4_ = __real_0000000c;
    auVar121 = vxorps_avx512vl(auVar121,auVar121);
    auVar79 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    auVar90._0_4_ = (uint)(bVar69 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar121._0_4_;
    bVar7 = (bool)((byte)(uVar68 >> 1) & 1);
    auVar90._4_4_ = (uint)bVar7 * auVar79._4_4_ | (uint)!bVar7 * auVar121._4_4_;
    bVar7 = (bool)((byte)(uVar68 >> 2) & 1);
    auVar90._8_4_ = (uint)bVar7 * auVar79._8_4_ | (uint)!bVar7 * auVar121._8_4_;
    bVar7 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar90._12_4_ = (uint)bVar7 * auVar79._12_4_ | (uint)!bVar7 * auVar121._12_4_;
    auVar90._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * auVar79._16_4_;
    auVar90._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * auVar79._20_4_;
    auVar90._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * auVar79._24_4_;
    auVar90._28_4_ = (uint)(byte)(uVar68 >> 7) * auVar79._28_4_;
    auVar102 = vpslld_avx2(auVar78,4);
    auVar121 = vxorps_avx512vl(auVar124,auVar124);
    auVar78 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar71));
    bVar7 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar26 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar75 = vxorps_avx512vl(auVar75,auVar75);
    auVar79 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar8 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar27 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar76 = vxorps_avx512vl(auVar76,auVar76);
    auVar80 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar1));
    bVar9 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar28 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar73 = vxorps_avx512vl(auVar73,auVar73);
    auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_138));
    auVar83._0_4_ = (uint)(bVar69 & 1) * auVar81._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar73._0_4_;
    bVar20 = (bool)((byte)(uVar68 >> 1) & 1);
    auVar83._4_4_ = (uint)bVar20 * auVar81._4_4_ | (uint)!bVar20 * auVar73._4_4_;
    bVar20 = (bool)((byte)(uVar68 >> 2) & 1);
    auVar83._8_4_ = (uint)bVar20 * auVar81._8_4_ | (uint)!bVar20 * auVar73._8_4_;
    bVar20 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar83._12_4_ = (uint)bVar20 * auVar81._12_4_ | (uint)!bVar20 * auVar73._12_4_;
    auVar83._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * auVar81._16_4_;
    auVar83._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * auVar81._20_4_;
    auVar83._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * auVar81._24_4_;
    auVar83._28_4_ = (uint)(byte)(uVar68 >> 7) * auVar81._28_4_;
    bVar20 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar14 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar29 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar36 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar43 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar50 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar58 = SUB81(uVar68 >> 7,0);
    bVar21 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar15 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar30 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar37 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar44 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar51 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar59 = SUB81(uVar68 >> 7,0);
    bVar22 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar16 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar31 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar38 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar45 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar52 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar60 = SUB81(uVar68 >> 7,0);
    bVar35 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar17 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar32 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar39 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar46 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar53 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar61 = SUB81(uVar68 >> 7,0);
    bVar42 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar18 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar33 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar40 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar47 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar54 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar62 = SUB81(uVar68 >> 7,0);
    bVar49 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar19 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar34 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar41 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar48 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar55 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar63 = SUB81(uVar68 >> 7,0);
    auVar87._4_4_ =
         (uint)bVar20 * ((uint)bVar4 * auVar77._4_4_ | (uint)!bVar4 * auVar122._4_4_) |
         (uint)!bVar20 * iStack_fc;
    auVar87._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar77._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar122._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_100;
    auVar87._8_4_ =
         (uint)bVar14 * ((uint)bVar56 * auVar77._8_4_ | (uint)!bVar56 * auVar122._8_4_) |
         (uint)!bVar14 * iStack_f8;
    auVar87._12_4_ =
         (uint)bVar29 * ((uint)bVar23 * auVar77._12_4_ | (uint)!bVar23 * auVar122._12_4_) |
         (uint)!bVar29 * iStack_f4;
    auVar87._16_4_ =
         (uint)bVar36 * (uint)((byte)(uVar68 >> 4) & 1) * auVar77._16_4_ | (uint)!bVar36 * iStack_f0
    ;
    auVar87._20_4_ =
         (uint)bVar43 * (uint)((byte)(uVar68 >> 5) & 1) * auVar77._20_4_ | (uint)!bVar43 * iStack_ec
    ;
    auVar87._24_4_ =
         (uint)bVar50 * (uint)((byte)(uVar68 >> 6) & 1) * auVar77._24_4_ | (uint)!bVar50 * iStack_e8
    ;
    auVar87._28_4_ =
         (uint)bVar58 * (uint)(byte)(uVar68 >> 7) * auVar77._28_4_ | (uint)!bVar58 * iStack_e4;
    auVar88._4_4_ =
         (uint)bVar21 * ((uint)bVar5 * auVar92._4_4_ | (uint)!bVar5 * auVar123._4_4_) |
         (uint)!bVar21 * iStack_dc;
    auVar88._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar92._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar123._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_e0;
    auVar88._8_4_ =
         (uint)bVar15 * ((uint)bVar57 * auVar92._8_4_ | (uint)!bVar57 * auVar123._8_4_) |
         (uint)!bVar15 * iStack_d8;
    auVar88._12_4_ =
         (uint)bVar30 * ((uint)bVar24 * auVar92._12_4_ | (uint)!bVar24 * auVar123._12_4_) |
         (uint)!bVar30 * iStack_d4;
    auVar88._16_4_ =
         (uint)bVar37 * (uint)((byte)(uVar68 >> 4) & 1) * auVar92._16_4_ | (uint)!bVar37 * iStack_d0
    ;
    auVar88._20_4_ =
         (uint)bVar44 * (uint)((byte)(uVar68 >> 5) & 1) * auVar92._20_4_ | (uint)!bVar44 * iStack_cc
    ;
    auVar88._24_4_ =
         (uint)bVar51 * (uint)((byte)(uVar68 >> 6) & 1) * auVar92._24_4_ | (uint)!bVar51 * iStack_c8
    ;
    auVar88._28_4_ =
         (uint)bVar59 * (uint)(byte)(uVar68 >> 7) * auVar92._28_4_ | (uint)!bVar59 * iStack_c4;
    auVar89._4_4_ =
         (uint)bVar22 * ((uint)bVar6 * auVar93._4_4_ | (uint)!bVar6 * auVar74._4_4_) |
         (uint)!bVar22 * iStack_bc;
    auVar89._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar93._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar74._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_c0;
    auVar89._8_4_ =
         (uint)bVar16 * ((uint)bVar10 * auVar93._8_4_ | (uint)!bVar10 * auVar74._8_4_) |
         (uint)!bVar16 * iStack_b8;
    auVar89._12_4_ =
         (uint)bVar31 * ((uint)bVar25 * auVar93._12_4_ | (uint)!bVar25 * auVar74._12_4_) |
         (uint)!bVar31 * iStack_b4;
    auVar89._16_4_ =
         (uint)bVar38 * (uint)((byte)(uVar68 >> 4) & 1) * auVar93._16_4_ | (uint)!bVar38 * iStack_b0
    ;
    auVar89._20_4_ =
         (uint)bVar45 * (uint)((byte)(uVar68 >> 5) & 1) * auVar93._20_4_ | (uint)!bVar45 * iStack_ac
    ;
    auVar89._24_4_ =
         (uint)bVar52 * (uint)((byte)(uVar68 >> 6) & 1) * auVar93._24_4_ | (uint)!bVar52 * iStack_a8
    ;
    auVar89._28_4_ =
         (uint)bVar60 * (uint)(byte)(uVar68 >> 7) * auVar93._28_4_ | (uint)!bVar60 * iStack_a4;
    auVar82._4_4_ =
         (uint)bVar35 * ((uint)bVar7 * auVar78._4_4_ | (uint)!bVar7 * auVar121._4_4_) |
         (uint)!bVar35 * iStack_15c;
    auVar82._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar78._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar121._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_160;
    auVar82._8_4_ =
         (uint)bVar17 * ((uint)bVar11 * auVar78._8_4_ | (uint)!bVar11 * auVar121._8_4_) |
         (uint)!bVar17 * iStack_158;
    auVar82._12_4_ =
         (uint)bVar32 * ((uint)bVar26 * auVar78._12_4_ | (uint)!bVar26 * auVar121._12_4_) |
         (uint)!bVar32 * iStack_154;
    auVar82._16_4_ =
         (uint)bVar39 * (uint)((byte)(uVar68 >> 4) & 1) * auVar78._16_4_ |
         (uint)!bVar39 * iStack_150;
    auVar82._20_4_ =
         (uint)bVar46 * (uint)((byte)(uVar68 >> 5) & 1) * auVar78._20_4_ |
         (uint)!bVar46 * iStack_14c;
    auVar82._24_4_ =
         (uint)bVar53 * (uint)((byte)(uVar68 >> 6) & 1) * auVar78._24_4_ |
         (uint)!bVar53 * iStack_148;
    auVar82._28_4_ =
         (uint)bVar61 * (uint)(byte)(uVar68 >> 7) * auVar78._28_4_ | (uint)!bVar61 * iStack_144;
    auVar85._4_4_ =
         (uint)bVar42 * ((uint)bVar8 * auVar79._4_4_ | (uint)!bVar8 * auVar75._4_4_) |
         (uint)!bVar42 * iStack_13c;
    auVar85._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar75._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_140;
    auVar85._8_4_ =
         (uint)bVar18 * ((uint)bVar12 * auVar79._8_4_ | (uint)!bVar12 * auVar75._8_4_) |
         (uint)!bVar18 * aiStack_138[0];
    auVar85._12_4_ =
         (uint)bVar33 * ((uint)bVar27 * auVar79._12_4_ | (uint)!bVar27 * auVar75._12_4_) |
         (uint)!bVar33 * aiStack_138[1];
    auVar85._16_4_ =
         (uint)bVar40 * (uint)((byte)(uVar68 >> 4) & 1) * auVar79._16_4_ |
         (uint)!bVar40 * aiStack_138[2];
    auVar85._20_4_ =
         (uint)bVar47 * (uint)((byte)(uVar68 >> 5) & 1) * auVar79._20_4_ |
         (uint)!bVar47 * aiStack_138[3];
    auVar85._24_4_ =
         (uint)bVar54 * (uint)((byte)(uVar68 >> 6) & 1) * auVar79._24_4_ |
         (uint)!bVar54 * iStack_128;
    auVar85._28_4_ =
         (uint)bVar62 * (uint)(byte)(uVar68 >> 7) * auVar79._28_4_ | (uint)!bVar62 * iStack_124;
    auVar86._4_4_ =
         (uint)bVar49 * ((uint)bVar9 * auVar80._4_4_ | (uint)!bVar9 * auVar76._4_4_) |
         (uint)!bVar49 * iStack_11c;
    auVar86._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar76._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_120;
    auVar86._8_4_ =
         (uint)bVar19 * ((uint)bVar13 * auVar80._8_4_ | (uint)!bVar13 * auVar76._8_4_) |
         (uint)!bVar19 * iStack_118;
    auVar86._12_4_ =
         (uint)bVar34 * ((uint)bVar28 * auVar80._12_4_ | (uint)!bVar28 * auVar76._12_4_) |
         (uint)!bVar34 * iStack_114;
    auVar86._16_4_ =
         (uint)bVar41 * (uint)((byte)(uVar68 >> 4) & 1) * auVar80._16_4_ |
         (uint)!bVar41 * iStack_110;
    auVar86._20_4_ =
         (uint)bVar48 * (uint)((byte)(uVar68 >> 5) & 1) * auVar80._20_4_ |
         (uint)!bVar48 * iStack_10c;
    auVar86._24_4_ =
         (uint)bVar55 * (uint)((byte)(uVar68 >> 6) & 1) * auVar80._24_4_ |
         (uint)!bVar55 * iStack_108;
    auVar86._28_4_ =
         (uint)bVar63 * (uint)(byte)(uVar68 >> 7) * auVar80._28_4_ | (uint)!bVar63 * iStack_104;
    auVar77 = vsubps_avx512vl(auVar87,auVar82);
    auVar78 = vsubps_avx512vl(auVar88,auVar85);
    auVar92 = vsubps_avx512vl(auVar89,auVar86);
    auVar123 = vxorps_avx512vl(auVar125,auVar125);
    auVar93 = vmulps_avx512vl(auVar78,auVar78);
    auVar93 = vfmadd231ps_avx512vl(auVar93,auVar77,auVar77);
    auVar93 = vfmadd231ps_avx512vl(auVar93,auVar92,auVar92);
    auVar81._4_4_ = __real_38d1b717;
    auVar81._0_4_ = __real_38d1b717;
    auVar81._8_4_ = __real_38d1b717;
    auVar81._12_4_ = __real_38d1b717;
    auVar81._16_4_ = __real_38d1b717;
    auVar81._20_4_ = __real_38d1b717;
    auVar81._24_4_ = __real_38d1b717;
    auVar81._28_4_ = __real_38d1b717;
    uVar70 = vcmpps_avx512vl(auVar93,auVar81,1);
    auVar93 = vsqrtps_avx512vl(auVar93);
    auVar79 = vdivps_avx512vl(auVar77,auVar93);
    auVar80 = vdivps_avx512vl(auVar78,auVar93);
    auVar81 = vdivps_avx512vl(auVar92,auVar93);
    auVar91 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
    bVar3 = (byte)uVar70;
    bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar70 >> 2) & 1);
    bVar22 = (bool)((byte)(uVar70 >> 3) & 1);
    bVar56 = (bool)((byte)(uVar70 >> 4) & 1);
    bVar10 = (bool)((byte)(uVar70 >> 5) & 1);
    bVar12 = (bool)((byte)(uVar70 >> 6) & 1);
    bVar14 = SUB81(uVar70 >> 7,0);
    iVar72 = auVar123._0_4_;
    bVar5 = (bool)((byte)(uVar70 >> 1) & 1);
    iVar99 = auVar123._4_4_;
    bVar9 = (bool)((byte)(uVar70 >> 2) & 1);
    iVar100 = auVar123._8_4_;
    bVar35 = (bool)((byte)(uVar70 >> 3) & 1);
    iVar101 = auVar123._12_4_;
    bVar15 = SUB81(uVar70 >> 7,0);
    bVar6 = (bool)((byte)(uVar70 >> 1) & 1);
    bVar20 = (bool)((byte)(uVar70 >> 2) & 1);
    bVar42 = (bool)((byte)(uVar70 >> 3) & 1);
    local_1c0._0_4_ = auVar77._0_4_;
    local_1c0._4_4_ = auVar77._4_4_;
    local_1c0._8_4_ = auVar77._8_4_;
    local_1c0._12_4_ = auVar77._12_4_;
    local_1c0._16_4_ = auVar77._16_4_;
    local_1c0._20_4_ = auVar77._20_4_;
    local_1c0._24_4_ = auVar77._24_4_;
    local_1c0._28_4_ = auVar77._28_4_;
    bVar7 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar21 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar49 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar57 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar11 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar13 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar16 = SUB81(uVar68 >> 7,0);
    local_1c0._4_4_ =
         (uint)bVar7 * ((uint)bVar4 * auVar91._4_4_ | (uint)!bVar4 * auVar79._4_4_) |
         (uint)!bVar7 * local_1c0._4_4_;
    local_1c0._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar3 & 1) * auVar91._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar79._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_1c0._0_4_;
    local_1c0._8_4_ =
         (uint)bVar21 * ((uint)bVar8 * auVar91._8_4_ | (uint)!bVar8 * auVar79._8_4_) |
         (uint)!bVar21 * local_1c0._8_4_;
    local_1c0._12_4_ =
         (uint)bVar49 * ((uint)bVar22 * auVar91._12_4_ | (uint)!bVar22 * auVar79._12_4_) |
         (uint)!bVar49 * local_1c0._12_4_;
    local_1c0._16_4_ =
         (uint)bVar57 * ((uint)bVar56 * auVar91._16_4_ | (uint)!bVar56 * auVar79._16_4_) |
         (uint)!bVar57 * local_1c0._16_4_;
    local_1c0._20_4_ =
         (uint)bVar11 * ((uint)bVar10 * auVar91._20_4_ | (uint)!bVar10 * auVar79._20_4_) |
         (uint)!bVar11 * local_1c0._20_4_;
    local_1c0._24_4_ =
         (uint)bVar13 * ((uint)bVar12 * auVar91._24_4_ | (uint)!bVar12 * auVar79._24_4_) |
         (uint)!bVar13 * local_1c0._24_4_;
    local_1c0._28_4_ =
         (uint)bVar16 * ((uint)bVar14 * auVar91._28_4_ | (uint)!bVar14 * auVar79._28_4_) |
         (uint)!bVar16 * local_1c0._28_4_;
    local_1a0._0_4_ = auVar78._0_4_;
    local_1a0._4_4_ = auVar78._4_4_;
    local_1a0._8_4_ = auVar78._8_4_;
    local_1a0._12_4_ = auVar78._12_4_;
    local_1a0._16_4_ = auVar78._16_4_;
    local_1a0._20_4_ = auVar78._20_4_;
    local_1a0._24_4_ = auVar78._24_4_;
    local_1a0._28_4_ = auVar78._28_4_;
    bVar4 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar8 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar21 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar49 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar56 = SUB81(uVar68 >> 7,0);
    local_1a0._4_4_ =
         (uint)bVar4 * ((uint)bVar5 * iVar99 | (uint)!bVar5 * auVar80._4_4_) |
         (uint)!bVar4 * local_1a0._4_4_;
    local_1a0._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar3 & 1) * iVar72 | (uint)!(bool)(bVar3 & 1) * auVar80._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_1a0._0_4_;
    local_1a0._8_4_ =
         (uint)bVar7 * ((uint)bVar9 * iVar100 | (uint)!bVar9 * auVar80._8_4_) |
         (uint)!bVar7 * local_1a0._8_4_;
    local_1a0._12_4_ =
         (uint)bVar8 * ((uint)bVar35 * iVar101 | (uint)!bVar35 * auVar80._12_4_) |
         (uint)!bVar8 * local_1a0._12_4_;
    local_1a0._16_4_ =
         (uint)bVar21 * (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar80._16_4_ |
         (uint)!bVar21 * local_1a0._16_4_;
    local_1a0._20_4_ =
         (uint)bVar22 * (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar80._20_4_ |
         (uint)!bVar22 * local_1a0._20_4_;
    local_1a0._24_4_ =
         (uint)bVar49 * (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar80._24_4_ |
         (uint)!bVar49 * local_1a0._24_4_;
    local_1a0._28_4_ =
         (uint)bVar56 *
         ((uint)bVar15 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar15 * auVar80._28_4_
         ) | (uint)!bVar56 * local_1a0._28_4_;
    local_180._0_4_ = auVar92._0_4_;
    local_180._4_4_ = auVar92._4_4_;
    local_180._8_4_ = auVar92._8_4_;
    local_180._12_4_ = auVar92._12_4_;
    local_180._16_4_ = auVar92._16_4_;
    local_180._20_4_ = auVar92._20_4_;
    local_180._24_4_ = auVar92._24_4_;
    local_180._28_4_ = auVar92._28_4_;
    bVar4 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar7 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar8 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar9 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar21 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar22 = SUB81(uVar68 >> 7,0);
    local_180._4_4_ =
         (uint)bVar4 * ((uint)bVar6 * iVar99 | (uint)!bVar6 * auVar81._4_4_) |
         (uint)!bVar4 * local_180._4_4_;
    local_180._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar3 & 1) * iVar72 | (uint)!(bool)(bVar3 & 1) * auVar81._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_180._0_4_;
    local_180._8_4_ =
         (uint)bVar5 * ((uint)bVar20 * iVar100 | (uint)!bVar20 * auVar81._8_4_) |
         (uint)!bVar5 * local_180._8_4_;
    local_180._12_4_ =
         (uint)bVar7 * ((uint)bVar42 * iVar101 | (uint)!bVar42 * auVar81._12_4_) |
         (uint)!bVar7 * local_180._12_4_;
    local_180._16_4_ =
         (uint)bVar8 * (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar81._16_4_ |
         (uint)!bVar8 * local_180._16_4_;
    local_180._20_4_ =
         (uint)bVar9 * (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar81._20_4_ |
         (uint)!bVar9 * local_180._20_4_;
    local_180._24_4_ =
         (uint)bVar21 * (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar81._24_4_ |
         (uint)!bVar21 * local_180._24_4_;
    local_180._28_4_ =
         (uint)bVar22 * (uint)!SUB81(uVar70 >> 7,0) * auVar81._28_4_ |
         (uint)!bVar22 * local_180._28_4_;
    piVar2 = (int *)(param_3 + ((int)uVar71 << 2));
    auVar84._4_4_ = (uint)((byte)(uVar68 >> 1) & 1) * piVar2[1];
    auVar84._0_4_ = (uint)(bVar69 & 1) * *piVar2;
    auVar84._8_4_ = (uint)((byte)(uVar68 >> 2) & 1) * piVar2[2];
    auVar84._12_4_ = (uint)((byte)(uVar68 >> 3) & 1) * piVar2[3];
    auVar84._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * piVar2[4];
    auVar84._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * piVar2[5];
    auVar84._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * piVar2[6];
    auVar84._28_4_ = (uint)(byte)(uVar68 >> 7) * piVar2[7];
    auVar94._0_4_ = (uint)(bVar3 & 1) * iVar72 | (uint)!(bool)(bVar3 & 1) * auVar93._0_4_;
    bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
    auVar94._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar93._4_4_;
    bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
    auVar94._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar93._8_4_;
    bVar4 = (bool)((byte)(uVar70 >> 3) & 1);
    auVar94._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar93._12_4_;
    auVar94._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar93._16_4_;
    auVar94._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar93._20_4_;
    auVar94._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar93._24_4_;
    bVar4 = SUB81(uVar70 >> 7,0);
    auVar94._28_4_ =
         (uint)bVar4 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar4 * auVar93._28_4_;
    auVar77 = vsubps_avx512vl(auVar94,auVar84);
    auVar78 = vmulps_avx512vl(auVar77,local_1c0);
    auVar92 = vmulps_avx512vl(auVar77,local_1a0);
    auVar77 = vmulps_avx512vl(auVar77,local_180);
    auVar93 = vaddps_avx512vl(auVar90,auVar83);
    auVar95._4_4_ = auVar95._0_4_;
    auVar95._8_4_ = auVar95._0_4_;
    auVar95._12_4_ = auVar95._0_4_;
    auVar95._16_4_ = auVar95._0_4_;
    auVar95._20_4_ = auVar95._0_4_;
    auVar95._24_4_ = auVar95._0_4_;
    auVar95._28_4_ = auVar95._0_4_;
    auVar78 = vmulps_avx512vl(auVar95,auVar78);
    auVar92 = vmulps_avx512vl(auVar95,auVar92);
    auVar95 = vmulps_avx512vl(auVar95,auVar77);
    auVar77 = vdivps_avx512vl(auVar78,auVar93);
    auVar78 = vdivps_avx512vl(auVar92,auVar93);
    auVar95 = vdivps_avx512vl(auVar95,auVar93);
    uVar71 = vcmpps_avx512vl(auVar83,ZEXT1632(auVar123),0);
    uVar70 = vcmpps_avx512vl(auVar90,ZEXT1632(auVar123),0);
    uVar71 = uVar71 & uVar70;
    bVar69 = (byte)uVar71;
    auVar96._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar77._0_4_;
    bVar4 = (bool)((byte)(uVar71 >> 1) & 1);
    auVar96._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar77._4_4_;
    bVar4 = (bool)((byte)(uVar71 >> 2) & 1);
    auVar96._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar77._8_4_;
    bVar4 = (bool)((byte)(uVar71 >> 3) & 1);
    auVar96._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar77._12_4_;
    auVar96._16_4_ = (uint)!(bool)((byte)(uVar71 >> 4) & 1) * auVar77._16_4_;
    auVar96._20_4_ = (uint)!(bool)((byte)(uVar71 >> 5) & 1) * auVar77._20_4_;
    auVar96._24_4_ = (uint)!(bool)((byte)(uVar71 >> 6) & 1) * auVar77._24_4_;
    auVar96._28_4_ = (uint)!SUB81(uVar71 >> 7,0) * auVar77._28_4_;
    auVar97._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar78._0_4_;
    bVar4 = (bool)((byte)(uVar71 >> 1) & 1);
    auVar97._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar78._4_4_;
    bVar4 = (bool)((byte)(uVar71 >> 2) & 1);
    auVar97._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar78._8_4_;
    bVar4 = (bool)((byte)(uVar71 >> 3) & 1);
    auVar97._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar78._12_4_;
    auVar97._16_4_ = (uint)!(bool)((byte)(uVar71 >> 4) & 1) * auVar78._16_4_;
    auVar97._20_4_ = (uint)!(bool)((byte)(uVar71 >> 5) & 1) * auVar78._20_4_;
    auVar97._24_4_ = (uint)!(bool)((byte)(uVar71 >> 6) & 1) * auVar78._24_4_;
    bVar4 = SUB81(uVar71 >> 7,0);
    auVar97._28_4_ =
         (uint)bVar4 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar4 * auVar78._28_4_;
    auVar98._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar95._0_4_;
    bVar4 = (bool)((byte)(uVar71 >> 1) & 1);
    auVar98._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar95._4_4_;
    bVar4 = (bool)((byte)(uVar71 >> 2) & 1);
    auVar98._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar95._8_4_;
    bVar4 = (bool)((byte)(uVar71 >> 3) & 1);
    auVar98._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar95._12_4_;
    auVar98._16_4_ = (uint)!(bool)((byte)(uVar71 >> 4) & 1) * auVar95._16_4_;
    auVar98._20_4_ = (uint)!(bool)((byte)(uVar71 >> 5) & 1) * auVar95._20_4_;
    auVar98._24_4_ = (uint)!(bool)((byte)(uVar71 >> 6) & 1) * auVar95._24_4_;
    auVar98._28_4_ = (uint)!SUB81(uVar71 >> 7,0) * auVar95._28_4_;
    uVar71 = vcmpps_avx512vl(ZEXT1632(auVar123),auVar90,1);
    uVar71 = uVar68 & uVar71;
    if ((char)uVar71 != '\0') {
      auVar95 = vfnmadd231ps_avx512vl(auVar87,auVar90,auVar96);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar106,uVar71,auVar95);
      auVar95 = vfnmadd231ps_avx512vl(auVar88,auVar90,auVar97);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar103),uVar71,auVar95);
      auVar95 = vfnmadd231ps_avx512vl(auVar89,auVar90,auVar98);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar104),uVar71,auVar95);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar98,uVar71,auVar90);
    }
    uVar71 = vcmpps_avx512vl(ZEXT1632(auVar123),auVar83,1);
    uVar68 = uVar68 & uVar71;
    if ((char)uVar68 != '\0') {
      auVar95 = vfmadd213ps_avx512vl(auVar96,auVar83,auVar82);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar102,uVar68,auVar95);
      auVar95 = vfmadd213ps_avx512vl(auVar97,auVar83,auVar85);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar103),uVar68,auVar95);
      auVar95 = vfmadd213ps_avx512vl(auVar98,auVar83,auVar86);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar104),uVar68,auVar95);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar108),uVar68,auVar83);
    }
  }
  return;
}

// ApplySpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx @ 1403598f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,uint param_6)

{
  undefined1 (*pauVar1) [32];
  int *piVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  ulonglong uVar72;
  undefined8 uVar73;
  ulonglong unaff_RBX;
  uint uVar74;
  ulonglong uVar75;
  undefined1 auVar81 [16];
  undefined1 (*pauVar76) [16];
  ulonglong uVar77;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar78;
  ulonglong uVar79;
  int iVar80;
  int iVar110;
  int iVar111;
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar103 [32];
  int iVar112;
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [16];
  undefined1 auVar116 [32];
  undefined1 auVar117 [16];
  undefined1 auVar118 [32];
  undefined1 auVar119 [16];
  undefined1 auVar120 [32];
  undefined1 auVar121 [16];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  float fVar125;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 auVar126 [32];
  float fVar133;
  undefined1 unaff_XMM15 [16];
  undefined8 in_YMM15_H;
  undefined8 in_register_000015d8;
  undefined1 in_ZMM16 [64];
  undefined1 auVar134 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar135 [16];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 auVar136 [16];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 auVar137 [16];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
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
  int aiStack_138 [4];
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
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined1 auVar104 [32];
  
  auVar87 = in_ZMM16._0_16_;
  auVar136 = in_ZMM25._0_16_;
  auVar137 = in_ZMM27._0_16_;
  auVar86 = in_ZMM24._0_16_;
  auVar85 = in_ZMM23._0_16_;
  auVar134 = in_ZMM19._0_16_;
  auVar84 = in_ZMM22._0_16_;
  auVar83 = in_ZMM21._0_16_;
  auVar135 = in_ZMM20._0_16_;
  uVar74 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar74 = param_6;
  }
  uVar74 = uVar74 & 0xfffffff8;
  if ((int)uVar74 < 1) {
    uVar77 = 0;
  }
  else {
    uVar75 = 0;
    auVar115._4_4_ = __real_00000004;
    auVar115._0_4_ = __real_00000004;
    auVar115._8_4_ = __real_00000004;
    auVar115._12_4_ = __real_00000004;
    auVar100._16_4_ = __real_00000004;
    auVar100._0_16_ = auVar115;
    auVar100._20_4_ = __real_00000004;
    auVar100._24_4_ = __real_00000004;
    auVar100._28_4_ = __real_00000004;
    auVar117._4_4_ = __real_00000008;
    auVar117._0_4_ = __real_00000008;
    auVar117._8_4_ = __real_00000008;
    auVar117._12_4_ = __real_00000008;
    auVar101._16_4_ = __real_00000008;
    auVar101._0_16_ = auVar117;
    auVar101._20_4_ = __real_00000008;
    auVar101._24_4_ = __real_00000008;
    auVar101._28_4_ = __real_00000008;
    auVar119._0_12_ = ZEXT812(0);
    auVar119._12_4_ = 0;
    auVar121._4_4_ = __real_0000000c;
    auVar121._0_4_ = __real_0000000c;
    auVar121._8_4_ = __real_0000000c;
    auVar121._12_4_ = __real_0000000c;
    auVar88 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar87 = auVar88._0_16_;
    uVar77 = 0;
    do {
      auVar89 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + uVar75 * 2));
      auVar90 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x20 + uVar75 * 2));
      auVar91 = vmovdqa64_avx512vl(auVar89);
      auVar91 = vpermt2d_avx512vl(auVar91,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar90);
      auVar91 = vpslld_avx512vl(auVar91,4);
      auVar84 = auVar91._0_16_;
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar74));
      auVar136 = auVar84 | auVar115;
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar137 = auVar84 | auVar117;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_6));
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      auVar89 = vpermt2d_avx512vl(auVar89,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar90);
      auVar89 = vpslld_avx512vl(auVar89,4);
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      in_ZMM28 = ZEXT3264(auVar96);
      vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
      auVar83 = auVar97._0_16_;
      in_ZMM21 = ZEXT3264(auVar97);
      auVar134 = auVar89._0_16_ | auVar117;
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
      auVar85 = auVar98._0_16_;
      in_ZMM23 = ZEXT3264(auVar98);
      auVar135 = auVar89._0_16_ | auVar121;
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar99 = vgatherdps_avx512vl(*param_1);
      auVar86 = auVar99._0_16_;
      in_ZMM24 = ZEXT3264(auVar99);
      auVar81._8_8_ = 0;
      auVar81._0_8_ = *(ulonglong *)(param_4 + uVar77);
      auVar89 = vpmovzxbd_avx2(auVar81);
      auVar89 = vpslld_avx2(auVar89,2);
      vpmovzxdq_avx2(auVar89._16_16_);
      vpmovzxdq_avx2(auVar89._0_16_);
      auVar81 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + uVar75));
      auVar82 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + param_3));
      auVar89 = vsubps_avx512vl(auVar92,auVar96);
      auVar90 = vsubps_avx512vl(auVar93,auVar97);
      auVar91 = vsubps_avx512vl(auVar94,auVar98);
      auVar126._0_4_ =
           auVar91._0_4_ * auVar91._0_4_ +
           auVar89._0_4_ * auVar89._0_4_ + auVar90._0_4_ * auVar90._0_4_;
      auVar126._4_4_ =
           auVar91._4_4_ * auVar91._4_4_ +
           auVar89._4_4_ * auVar89._4_4_ + auVar90._4_4_ * auVar90._4_4_;
      auVar126._8_4_ =
           auVar91._8_4_ * auVar91._8_4_ +
           auVar89._8_4_ * auVar89._8_4_ + auVar90._8_4_ * auVar90._8_4_;
      auVar126._12_4_ =
           auVar91._12_4_ * auVar91._12_4_ +
           auVar89._12_4_ * auVar89._12_4_ + auVar90._12_4_ * auVar90._12_4_;
      auVar126._16_4_ =
           auVar91._16_4_ * auVar91._16_4_ +
           auVar89._16_4_ * auVar89._16_4_ + auVar90._16_4_ * auVar90._16_4_;
      auVar126._20_4_ =
           auVar91._20_4_ * auVar91._20_4_ +
           auVar89._20_4_ * auVar89._20_4_ + auVar90._20_4_ * auVar90._20_4_;
      auVar126._24_4_ =
           auVar91._24_4_ * auVar91._24_4_ +
           auVar89._24_4_ * auVar89._24_4_ + auVar90._24_4_ * auVar90._24_4_;
      auVar126._28_4_ =
           auVar91._28_4_ * auVar91._28_4_ +
           auVar89._28_4_ * auVar89._28_4_ + auVar90._28_4_ * auVar90._28_4_;
      uVar79 = vcmpps_avx512vl(auVar126,auVar88,1);
      auVar103 = vsqrtps_avx(auVar126);
      auVar89 = vdivps_avx(auVar89,auVar103);
      auVar90 = vdivps_avx(auVar90,auVar103);
      auVar91 = vdivps_avx(auVar91,auVar103);
      bVar78 = (byte)uVar79;
      bVar55 = SUB81(uVar79 >> 7,0);
      auVar113._4_4_ = (uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar103._4_4_;
      auVar113._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar103._0_4_;
      auVar113._8_4_ = (uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar103._8_4_;
      auVar113._12_4_ = (uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar103._12_4_;
      auVar113._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar103._16_4_;
      auVar113._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar103._20_4_;
      auVar113._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar103._24_4_;
      bVar56 = SUB81(uVar79 >> 7,0);
      auVar113._28_4_ =
           (uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar56 * auVar103._28_4_;
      unaff_RBX = uVar75 & 0xffffffff;
      auVar103 = vsubps_avx(auVar113,*(undefined1 (*) [32])(param_3 + unaff_RBX));
      fVar125 = auVar103._0_4_;
      fVar127 = auVar103._4_4_;
      fVar128 = auVar103._8_4_;
      fVar129 = auVar103._12_4_;
      fVar130 = auVar103._16_4_;
      fVar131 = auVar103._20_4_;
      fVar132 = auVar103._24_4_;
      fVar133 = auVar103._28_4_;
      bVar56 = (bool)((byte)(uVar79 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar79 >> 2) & 1);
      bVar21 = (bool)((byte)(uVar79 >> 3) & 1);
      bVar34 = (bool)((byte)(uVar79 >> 4) & 1);
      bVar41 = (bool)((byte)(uVar79 >> 5) & 1);
      bVar48 = (bool)((byte)(uVar79 >> 6) & 1);
      bVar57 = SUB81(uVar79 >> 7,0);
      auVar124._0_4_ = (float)((uint)!(bool)(bVar78 & 1) * auVar91._0_4_) * fVar125;
      auVar124._4_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar91._4_4_) * fVar127;
      auVar124._8_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar91._8_4_) * fVar128;
      auVar124._12_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar91._12_4_) * fVar129;
      auVar124._16_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar91._16_4_) * fVar130;
      auVar124._20_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar91._20_4_) * fVar131;
      auVar124._24_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar91._24_4_) * fVar132;
      auVar124._28_4_ = (float)((uint)!SUB81(uVar79 >> 7,0) * auVar91._28_4_) * fVar133;
      auVar91 = vaddps_avx512vl(auVar95,auVar99);
      fVar64 = auVar81._0_4_;
      auVar122._0_4_ =
           (float)((uint)(bVar78 & 1) * (int)fVar125 |
                  (uint)!(bool)(bVar78 & 1) * (int)(fVar125 * auVar89._0_4_)) * fVar64;
      fVar65 = auVar81._4_4_;
      auVar122._4_4_ =
           (float)((uint)bVar56 * (int)fVar127 | (uint)!bVar56 * (int)(fVar127 * auVar89._4_4_)) *
           fVar65;
      fVar66 = auVar81._8_4_;
      auVar122._8_4_ =
           (float)((uint)bVar8 * (int)fVar128 | (uint)!bVar8 * (int)(fVar128 * auVar89._8_4_)) *
           fVar66;
      fVar67 = auVar81._12_4_;
      auVar122._12_4_ =
           (float)((uint)bVar21 * (int)fVar129 | (uint)!bVar21 * (int)(fVar129 * auVar89._12_4_)) *
           fVar67;
      fVar68 = auVar82._0_4_;
      auVar122._16_4_ =
           (float)((uint)bVar34 * (int)fVar130 | (uint)!bVar34 * (int)(fVar130 * auVar89._16_4_)) *
           fVar68;
      fVar69 = auVar82._4_4_;
      auVar122._20_4_ =
           (float)((uint)bVar41 * (int)fVar131 | (uint)!bVar41 * (int)(fVar131 * auVar89._20_4_)) *
           fVar69;
      fVar70 = auVar82._8_4_;
      auVar122._24_4_ =
           (float)((uint)bVar48 * (int)fVar132 | (uint)!bVar48 * (int)(fVar132 * auVar89._24_4_)) *
           fVar70;
      fVar71 = auVar82._12_4_;
      auVar122._28_4_ =
           (float)((uint)bVar57 * (int)fVar133 | (uint)!bVar57 * (int)(fVar133 * auVar89._28_4_)) *
           fVar71;
      auVar123._0_4_ = (float)((uint)!(bool)(bVar78 & 1) * auVar90._0_4_) * fVar125 * fVar64;
      auVar123._4_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar90._4_4_) * fVar127 * fVar65;
      auVar123._8_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar90._8_4_) * fVar128 * fVar66;
      auVar123._12_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar90._12_4_) * fVar129 * fVar67;
      auVar123._16_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar90._16_4_) * fVar130 * fVar68;
      auVar123._20_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar90._20_4_) * fVar131 * fVar69;
      auVar123._24_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar90._24_4_) * fVar132 * fVar70;
      auVar123._28_4_ =
           (float)((uint)bVar55 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                  (uint)!bVar55 * auVar90._28_4_) * fVar133 * fVar71;
      auVar116._0_4_ = auVar124._0_4_ * fVar64;
      auVar116._4_4_ = auVar124._4_4_ * fVar65;
      auVar116._8_4_ = auVar124._8_4_ * fVar66;
      auVar116._12_4_ = auVar124._12_4_ * fVar67;
      auVar116._16_4_ = auVar124._16_4_ * fVar68;
      auVar116._20_4_ = auVar124._20_4_ * fVar69;
      auVar116._24_4_ = auVar124._24_4_ * fVar70;
      auVar116._28_4_ = auVar124._28_4_ * fVar71;
      auVar89 = vdivps_avx(auVar122,auVar91);
      auVar90 = vdivps_avx(auVar123,auVar91);
      auVar91 = vdivps_avx(auVar116,auVar91);
      uVar79 = vcmpps_avx512vl(auVar99,ZEXT1632(auVar119),0);
      uVar72 = vcmpps_avx512vl(auVar95,ZEXT1632(auVar119),0);
      uVar79 = uVar79 & uVar72;
      bVar78 = (byte)uVar79;
      auVar103._4_4_ = (uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar89._4_4_;
      auVar103._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar89._0_4_;
      auVar103._8_4_ = (uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar89._8_4_;
      auVar103._12_4_ = (uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar89._12_4_;
      auVar103._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar89._16_4_;
      auVar103._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar89._20_4_;
      auVar103._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar89._24_4_;
      auVar103._28_4_ = (uint)!SUB81(uVar79 >> 7,0) * auVar89._28_4_;
      auVar113 = ZEXT1632(auVar119);
      auVar89._4_4_ = (uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar90._4_4_;
      auVar89._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar90._0_4_;
      auVar89._8_4_ = (uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar90._8_4_;
      auVar89._12_4_ = (uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar90._12_4_;
      auVar89._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar90._16_4_;
      auVar89._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar90._20_4_;
      auVar89._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar90._24_4_;
      bVar56 = SUB81(uVar79 >> 7,0);
      auVar89._28_4_ =
           (uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar56 * auVar90._28_4_;
      auVar90._4_4_ = (uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar91._4_4_;
      auVar90._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar91._0_4_;
      auVar90._8_4_ = (uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar91._8_4_;
      auVar90._12_4_ = (uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar91._12_4_;
      auVar90._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar91._16_4_;
      auVar90._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar91._20_4_;
      auVar90._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar91._24_4_;
      auVar90._28_4_ = (uint)!SUB81(uVar79 >> 7,0) * auVar91._28_4_;
      uVar73 = vcmpps_avx512vl(auVar113,auVar95,1);
      if ((char)uVar73 != '\0') {
        auVar92 = vfnmadd231ps_avx512vl(auVar92,auVar95,auVar103);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar95,uVar73,auVar92);
        auVar93 = vfnmadd231ps_avx512vl(auVar93,auVar95,auVar89);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar103,uVar73,auVar93);
        auVar94 = vfnmadd231ps_avx512vl(auVar94,auVar95,auVar90);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar124,uVar73,auVar94);
        auVar91._16_8_ = in_YMM15_H;
        auVar91._0_16_ = unaff_XMM15;
        auVar91._24_8_ = in_register_000015d8;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar73,auVar95);
      }
      in_ZMM30 = ZEXT3264(auVar94);
      in_ZMM29 = ZEXT3264(auVar93);
      in_ZMM26 = ZEXT3264(auVar92);
      uVar73 = vcmpps_avx512vl(auVar113,auVar99,1);
      if ((char)uVar73 != '\0') {
        auVar91 = vfmadd213ps_avx512vl(auVar103,auVar99,auVar96);
        vscatterdps_avx512vl
                  (ZEXT832(param_1) +
                   ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001,uVar73,
                   auVar91);
        auVar89 = vfmadd213ps_avx512vl(auVar89,auVar99,auVar97);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar100,uVar73,auVar89);
        auVar89 = vfmadd213ps_avx512vl(auVar90,auVar99,auVar98);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar101,uVar73,auVar89);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar113,uVar73,auVar99);
      }
      uVar77 = uVar77 + 8;
      uVar75 = uVar75 + 0x20;
    } while ((int)uVar77 < (int)uVar74);
  }
  if ((int)uVar77 < (int)param_6) {
    auVar88 = vpbroadcastd_avx512vl();
    auVar88 = vpor_avx2(auVar88,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar100 = vpbroadcastd_avx512vl();
    uVar75 = vpcmpgtd_avx512vl(auVar100,auVar88);
    pauVar1 = (undefined1 (*) [32])(param_2 + (uVar77 & 0xffffffff) * 8);
    bVar78 = (byte)uVar75;
    if (bVar78 == 0xff) {
      auVar95 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,*pauVar1,pauVar1[1]);
      auVar88 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,*pauVar1,pauVar1[1]);
    }
    else {
      auVar88 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + param_5));
      auVar95._4_4_ = (uint)((byte)(uVar75 >> 1) & 1) * auVar88._4_4_;
      auVar95._0_4_ = (uint)(bVar78 & 1) * auVar88._0_4_;
      auVar95._8_4_ = (uint)((byte)(uVar75 >> 2) & 1) * auVar88._8_4_;
      auVar95._12_4_ = (uint)((byte)(uVar75 >> 3) & 1) * auVar88._12_4_;
      auVar95._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * auVar88._16_4_;
      auVar95._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * auVar88._20_4_;
      auVar95._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * auVar88._24_4_;
      auVar95._28_4_ = (uint)(byte)(uVar75 >> 7) * auVar88._28_4_;
      auVar100 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + uVar75));
      auVar88._4_4_ = (uint)((byte)(uVar75 >> 1) & 1) * auVar100._4_4_;
      auVar88._0_4_ = (uint)(bVar78 & 1) * auVar100._0_4_;
      auVar88._8_4_ = (uint)((byte)(uVar75 >> 2) & 1) * auVar100._8_4_;
      auVar88._12_4_ = (uint)((byte)(uVar75 >> 3) & 1) * auVar100._12_4_;
      auVar88._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * auVar100._16_4_;
      auVar88._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * auVar100._20_4_;
      auVar88._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * auVar100._24_4_;
      auVar88._28_4_ = (uint)(byte)(uVar75 >> 7) * auVar100._28_4_;
    }
    auVar116 = vpslld_avx2(auVar95,4);
    auVar114._4_4_ = __real_00000004;
    auVar114._0_4_ = __real_00000004;
    auVar114._8_4_ = __real_00000004;
    auVar114._12_4_ = __real_00000004;
    auVar114._16_4_ = __real_00000004;
    auVar114._20_4_ = __real_00000004;
    auVar114._24_4_ = __real_00000004;
    auVar114._28_4_ = __real_00000004;
    auVar135 = vxorps_avx512vl(auVar135,auVar135);
    auVar100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar75));
    bVar56 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar22 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar83 = vxorps_avx512vl(auVar83,auVar83);
    auVar101 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_138));
    bVar8 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar23 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar118._4_4_ = __real_00000008;
    auVar118._0_4_ = __real_00000008;
    auVar118._8_4_ = __real_00000008;
    auVar118._12_4_ = __real_00000008;
    auVar118._16_4_ = __real_00000008;
    auVar118._20_4_ = __real_00000008;
    auVar118._24_4_ = __real_00000008;
    auVar118._28_4_ = __real_00000008;
    auVar84 = vxorps_avx512vl(auVar84,auVar84);
    auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar21 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar24 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar120._4_4_ = __real_0000000c;
    auVar120._0_4_ = __real_0000000c;
    auVar120._8_4_ = __real_0000000c;
    auVar120._12_4_ = __real_0000000c;
    auVar120._16_4_ = __real_0000000c;
    auVar120._20_4_ = __real_0000000c;
    auVar120._24_4_ = __real_0000000c;
    auVar120._28_4_ = __real_0000000c;
    auVar134 = vxorps_avx512vl(auVar134,auVar134);
    auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar75));
    auVar102._0_4_ = (uint)(bVar78 & 1) * auVar90._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar134._0_4_
    ;
    bVar34 = (bool)((byte)(uVar75 >> 1) & 1);
    auVar102._4_4_ = (uint)bVar34 * auVar90._4_4_ | (uint)!bVar34 * auVar134._4_4_;
    bVar34 = (bool)((byte)(uVar75 >> 2) & 1);
    auVar102._8_4_ = (uint)bVar34 * auVar90._8_4_ | (uint)!bVar34 * auVar134._8_4_;
    bVar34 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar102._12_4_ = (uint)bVar34 * auVar90._12_4_ | (uint)!bVar34 * auVar134._12_4_;
    auVar102._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * auVar90._16_4_;
    auVar102._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * auVar90._20_4_;
    auVar102._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * auVar90._24_4_;
    auVar102._28_4_ = (uint)(byte)(uVar75 >> 7) * auVar90._28_4_;
    auVar113 = vpslld_avx2(auVar88,4);
    auVar85 = vxorps_avx512vl(auVar85,auVar85);
    auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
    bVar34 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar25 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar86 = vxorps_avx512vl(auVar86,auVar86);
    auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar41 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar26 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar134 = vxorps_avx512vl(auVar137,auVar137);
    auVar136 = vxorps_avx512vl(auVar136,auVar136);
    auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    bVar48 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar14 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar27 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar87 = vxorps_avx512vl(auVar87,auVar87);
    auVar103 = vgatherdps_avx512vl(*param_1);
    auVar104._0_4_ = (uint)(bVar78 & 1) * auVar103._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar87._0_4_
    ;
    bVar55 = (bool)((byte)(uVar75 >> 1) & 1);
    auVar104._4_4_ = (uint)bVar55 * auVar103._4_4_ | (uint)!bVar55 * auVar87._4_4_;
    bVar55 = (bool)((byte)(uVar75 >> 2) & 1);
    auVar104._8_4_ = (uint)bVar55 * auVar103._8_4_ | (uint)!bVar55 * auVar87._8_4_;
    bVar55 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar104._12_4_ = (uint)bVar55 * auVar103._12_4_ | (uint)!bVar55 * auVar87._12_4_;
    auVar104._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * auVar103._16_4_;
    auVar104._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * auVar103._20_4_;
    auVar104._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * auVar103._24_4_;
    auVar104._28_4_ = (uint)(byte)(uVar75 >> 7) * auVar103._28_4_;
    bVar55 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar15 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar28 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar35 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar42 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar49 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar58 = SUB81(uVar75 >> 7,0);
    bVar57 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar16 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar29 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar36 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar43 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar50 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar59 = SUB81(uVar75 >> 7,0);
    bVar4 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar17 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar30 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar37 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar44 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar51 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar60 = SUB81(uVar75 >> 7,0);
    bVar5 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar18 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar31 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar38 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar45 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar52 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar61 = SUB81(uVar75 >> 7,0);
    bVar6 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar19 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar32 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar39 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar46 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar53 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar62 = SUB81(uVar75 >> 7,0);
    bVar7 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar20 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar33 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar40 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar47 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar54 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar63 = SUB81(uVar75 >> 7,0);
    auVar92._4_4_ =
         (uint)bVar55 * ((uint)bVar56 * auVar100._4_4_ | (uint)!bVar56 * auVar135._4_4_) |
         (uint)!bVar55 * iStack_fc;
    auVar92._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar100._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar135._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_100;
    auVar92._8_4_ =
         (uint)bVar15 * ((uint)bVar9 * auVar100._8_4_ | (uint)!bVar9 * auVar135._8_4_) |
         (uint)!bVar15 * iStack_f8;
    auVar92._12_4_ =
         (uint)bVar28 * ((uint)bVar22 * auVar100._12_4_ | (uint)!bVar22 * auVar135._12_4_) |
         (uint)!bVar28 * iStack_f4;
    auVar92._16_4_ =
         (uint)bVar35 * (uint)((byte)(uVar75 >> 4) & 1) * auVar100._16_4_ |
         (uint)!bVar35 * iStack_f0;
    auVar92._20_4_ =
         (uint)bVar42 * (uint)((byte)(uVar75 >> 5) & 1) * auVar100._20_4_ |
         (uint)!bVar42 * iStack_ec;
    auVar92._24_4_ =
         (uint)bVar49 * (uint)((byte)(uVar75 >> 6) & 1) * auVar100._24_4_ |
         (uint)!bVar49 * iStack_e8;
    auVar92._28_4_ =
         (uint)bVar58 * (uint)(byte)(uVar75 >> 7) * auVar100._28_4_ | (uint)!bVar58 * iStack_e4;
    auVar93._4_4_ =
         (uint)bVar57 * ((uint)bVar8 * auVar101._4_4_ | (uint)!bVar8 * auVar83._4_4_) |
         (uint)!bVar57 * iStack_dc;
    auVar93._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar101._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar83._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_e0;
    auVar93._8_4_ =
         (uint)bVar16 * ((uint)bVar10 * auVar101._8_4_ | (uint)!bVar10 * auVar83._8_4_) |
         (uint)!bVar16 * iStack_d8;
    auVar93._12_4_ =
         (uint)bVar29 * ((uint)bVar23 * auVar101._12_4_ | (uint)!bVar23 * auVar83._12_4_) |
         (uint)!bVar29 * iStack_d4;
    auVar93._16_4_ =
         (uint)bVar36 * (uint)((byte)(uVar75 >> 4) & 1) * auVar101._16_4_ |
         (uint)!bVar36 * iStack_d0;
    auVar93._20_4_ =
         (uint)bVar43 * (uint)((byte)(uVar75 >> 5) & 1) * auVar101._20_4_ |
         (uint)!bVar43 * iStack_cc;
    auVar93._24_4_ =
         (uint)bVar50 * (uint)((byte)(uVar75 >> 6) & 1) * auVar101._24_4_ |
         (uint)!bVar50 * iStack_c8;
    auVar93._28_4_ =
         (uint)bVar59 * (uint)(byte)(uVar75 >> 7) * auVar101._28_4_ | (uint)!bVar59 * iStack_c4;
    auVar94._4_4_ =
         (uint)bVar4 * ((uint)bVar21 * auVar89._4_4_ | (uint)!bVar21 * auVar84._4_4_) |
         (uint)!bVar4 * iStack_bc;
    auVar94._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar84._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_c0;
    auVar94._8_4_ =
         (uint)bVar17 * ((uint)bVar11 * auVar89._8_4_ | (uint)!bVar11 * auVar84._8_4_) |
         (uint)!bVar17 * iStack_b8;
    auVar94._12_4_ =
         (uint)bVar30 * ((uint)bVar24 * auVar89._12_4_ | (uint)!bVar24 * auVar84._12_4_) |
         (uint)!bVar30 * iStack_b4;
    auVar94._16_4_ =
         (uint)bVar37 * (uint)((byte)(uVar75 >> 4) & 1) * auVar89._16_4_ | (uint)!bVar37 * iStack_b0
    ;
    auVar94._20_4_ =
         (uint)bVar44 * (uint)((byte)(uVar75 >> 5) & 1) * auVar89._20_4_ | (uint)!bVar44 * iStack_ac
    ;
    auVar94._24_4_ =
         (uint)bVar51 * (uint)((byte)(uVar75 >> 6) & 1) * auVar89._24_4_ | (uint)!bVar51 * iStack_a8
    ;
    auVar94._28_4_ =
         (uint)bVar60 * (uint)(byte)(uVar75 >> 7) * auVar89._28_4_ | (uint)!bVar60 * iStack_a4;
    auVar97._4_4_ =
         (uint)bVar5 * ((uint)bVar34 * auVar88._4_4_ | (uint)!bVar34 * auVar85._4_4_) |
         (uint)!bVar5 * iStack_15c;
    auVar97._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar88._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_160;
    auVar97._8_4_ =
         (uint)bVar18 * ((uint)bVar12 * auVar88._8_4_ | (uint)!bVar12 * auVar85._8_4_) |
         (uint)!bVar18 * iStack_158;
    auVar97._12_4_ =
         (uint)bVar31 * ((uint)bVar25 * auVar88._12_4_ | (uint)!bVar25 * auVar85._12_4_) |
         (uint)!bVar31 * iStack_154;
    auVar97._16_4_ =
         (uint)bVar38 * (uint)((byte)(uVar75 >> 4) & 1) * auVar88._16_4_ |
         (uint)!bVar38 * iStack_150;
    auVar97._20_4_ =
         (uint)bVar45 * (uint)((byte)(uVar75 >> 5) & 1) * auVar88._20_4_ |
         (uint)!bVar45 * iStack_14c;
    auVar97._24_4_ =
         (uint)bVar52 * (uint)((byte)(uVar75 >> 6) & 1) * auVar88._24_4_ |
         (uint)!bVar52 * iStack_148;
    auVar97._28_4_ =
         (uint)bVar61 * (uint)(byte)(uVar75 >> 7) * auVar88._28_4_ | (uint)!bVar61 * iStack_144;
    auVar98._4_4_ =
         (uint)bVar6 * ((uint)bVar41 * auVar90._4_4_ | (uint)!bVar41 * auVar86._4_4_) |
         (uint)!bVar6 * iStack_13c;
    auVar98._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar90._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar86._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_140;
    auVar98._8_4_ =
         (uint)bVar19 * ((uint)bVar13 * auVar90._8_4_ | (uint)!bVar13 * auVar86._8_4_) |
         (uint)!bVar19 * aiStack_138[0];
    auVar98._12_4_ =
         (uint)bVar32 * ((uint)bVar26 * auVar90._12_4_ | (uint)!bVar26 * auVar86._12_4_) |
         (uint)!bVar32 * aiStack_138[1];
    auVar98._16_4_ =
         (uint)bVar39 * (uint)((byte)(uVar75 >> 4) & 1) * auVar90._16_4_ |
         (uint)!bVar39 * aiStack_138[2];
    auVar98._20_4_ =
         (uint)bVar46 * (uint)((byte)(uVar75 >> 5) & 1) * auVar90._20_4_ |
         (uint)!bVar46 * aiStack_138[3];
    auVar98._24_4_ =
         (uint)bVar53 * (uint)((byte)(uVar75 >> 6) & 1) * auVar90._24_4_ |
         (uint)!bVar53 * iStack_128;
    auVar98._28_4_ =
         (uint)bVar62 * (uint)(byte)(uVar75 >> 7) * auVar90._28_4_ | (uint)!bVar62 * iStack_124;
    auVar99._4_4_ =
         (uint)bVar7 * ((uint)bVar48 * auVar91._4_4_ | (uint)!bVar48 * auVar136._4_4_) |
         (uint)!bVar7 * iStack_11c;
    auVar99._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar91._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar136._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_120;
    auVar99._8_4_ =
         (uint)bVar20 * ((uint)bVar14 * auVar91._8_4_ | (uint)!bVar14 * auVar136._8_4_) |
         (uint)!bVar20 * iStack_118;
    auVar99._12_4_ =
         (uint)bVar33 * ((uint)bVar27 * auVar91._12_4_ | (uint)!bVar27 * auVar136._12_4_) |
         (uint)!bVar33 * iStack_114;
    auVar99._16_4_ =
         (uint)bVar40 * (uint)((byte)(uVar75 >> 4) & 1) * auVar91._16_4_ |
         (uint)!bVar40 * iStack_110;
    auVar99._20_4_ =
         (uint)bVar47 * (uint)((byte)(uVar75 >> 5) & 1) * auVar91._20_4_ |
         (uint)!bVar47 * iStack_10c;
    auVar99._24_4_ =
         (uint)bVar54 * (uint)((byte)(uVar75 >> 6) & 1) * auVar91._24_4_ |
         (uint)!bVar54 * iStack_108;
    auVar99._28_4_ =
         (uint)bVar63 * (uint)(byte)(uVar75 >> 7) * auVar91._28_4_ | (uint)!bVar63 * iStack_104;
    auVar88 = vsubps_avx512vl(auVar92,auVar97);
    auVar100 = vsubps_avx512vl(auVar93,auVar98);
    auVar101 = vsubps_avx512vl(auVar94,auVar99);
    auVar89 = vmulps_avx512vl(auVar100,auVar100);
    auVar89 = vfmadd231ps_avx512vl(auVar89,auVar88,auVar88);
    auVar89 = vfmadd231ps_avx512vl(auVar89,auVar101,auVar101);
    auVar90 = vsqrtps_avx512vl(auVar89);
    auVar96._4_4_ = __real_38d1b717;
    auVar96._0_4_ = __real_38d1b717;
    auVar96._8_4_ = __real_38d1b717;
    auVar96._12_4_ = __real_38d1b717;
    auVar96._16_4_ = __real_38d1b717;
    auVar96._20_4_ = __real_38d1b717;
    auVar96._24_4_ = __real_38d1b717;
    auVar96._28_4_ = __real_38d1b717;
    uVar79 = vcmpps_avx512vl(auVar89,auVar96,1);
    auVar91 = vdivps_avx512vl(auVar88,auVar90);
    auVar103 = vdivps_avx512vl(auVar100,auVar90);
    auVar95 = vdivps_avx512vl(auVar101,auVar90);
    auVar96 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
    bVar3 = (byte)uVar79;
    bVar56 = (bool)((byte)(uVar79 >> 1) & 1);
    bVar41 = (bool)((byte)(uVar79 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar79 >> 3) & 1);
    bVar9 = (bool)((byte)(uVar79 >> 4) & 1);
    bVar11 = (bool)((byte)(uVar79 >> 5) & 1);
    bVar13 = (bool)((byte)(uVar79 >> 6) & 1);
    bVar15 = SUB81(uVar79 >> 7,0);
    iVar80 = auVar134._0_4_;
    bVar8 = (bool)((byte)(uVar79 >> 1) & 1);
    iVar110 = auVar134._4_4_;
    bVar48 = (bool)((byte)(uVar79 >> 2) & 1);
    iVar111 = auVar134._8_4_;
    bVar5 = (bool)((byte)(uVar79 >> 3) & 1);
    iVar112 = auVar134._12_4_;
    bVar16 = SUB81(uVar79 >> 7,0);
    bVar21 = (bool)((byte)(uVar79 >> 1) & 1);
    bVar55 = (bool)((byte)(uVar79 >> 2) & 1);
    bVar6 = (bool)((byte)(uVar79 >> 3) & 1);
    local_1c0._0_4_ = auVar88._0_4_;
    local_1c0._4_4_ = auVar88._4_4_;
    local_1c0._8_4_ = auVar88._8_4_;
    local_1c0._12_4_ = auVar88._12_4_;
    local_1c0._16_4_ = auVar88._16_4_;
    local_1c0._20_4_ = auVar88._20_4_;
    local_1c0._24_4_ = auVar88._24_4_;
    local_1c0._28_4_ = auVar88._28_4_;
    bVar34 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar57 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar7 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar10 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar12 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar14 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar17 = SUB81(uVar75 >> 7,0);
    local_1c0._4_4_ =
         (uint)bVar34 * ((uint)bVar56 * auVar96._4_4_ | (uint)!bVar56 * auVar91._4_4_) |
         (uint)!bVar34 * local_1c0._4_4_;
    local_1c0._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar3 & 1) * auVar96._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar91._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_1c0._0_4_;
    local_1c0._8_4_ =
         (uint)bVar57 * ((uint)bVar41 * auVar96._8_4_ | (uint)!bVar41 * auVar91._8_4_) |
         (uint)!bVar57 * local_1c0._8_4_;
    local_1c0._12_4_ =
         (uint)bVar7 * ((uint)bVar4 * auVar96._12_4_ | (uint)!bVar4 * auVar91._12_4_) |
         (uint)!bVar7 * local_1c0._12_4_;
    local_1c0._16_4_ =
         (uint)bVar10 * ((uint)bVar9 * auVar96._16_4_ | (uint)!bVar9 * auVar91._16_4_) |
         (uint)!bVar10 * local_1c0._16_4_;
    local_1c0._20_4_ =
         (uint)bVar12 * ((uint)bVar11 * auVar96._20_4_ | (uint)!bVar11 * auVar91._20_4_) |
         (uint)!bVar12 * local_1c0._20_4_;
    local_1c0._24_4_ =
         (uint)bVar14 * ((uint)bVar13 * auVar96._24_4_ | (uint)!bVar13 * auVar91._24_4_) |
         (uint)!bVar14 * local_1c0._24_4_;
    local_1c0._28_4_ =
         (uint)bVar17 * ((uint)bVar15 * auVar96._28_4_ | (uint)!bVar15 * auVar91._28_4_) |
         (uint)!bVar17 * local_1c0._28_4_;
    local_1a0._0_4_ = auVar100._0_4_;
    local_1a0._4_4_ = auVar100._4_4_;
    local_1a0._8_4_ = auVar100._8_4_;
    local_1a0._12_4_ = auVar100._12_4_;
    local_1a0._16_4_ = auVar100._16_4_;
    local_1a0._20_4_ = auVar100._20_4_;
    local_1a0._24_4_ = auVar100._24_4_;
    local_1a0._28_4_ = auVar100._28_4_;
    bVar56 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar34 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar41 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar57 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar4 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar9 = SUB81(uVar75 >> 7,0);
    local_1a0._4_4_ =
         (uint)bVar56 * ((uint)bVar8 * iVar110 | (uint)!bVar8 * auVar103._4_4_) |
         (uint)!bVar56 * local_1a0._4_4_;
    local_1a0._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar3 & 1) * iVar80 | (uint)!(bool)(bVar3 & 1) * auVar103._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_1a0._0_4_;
    local_1a0._8_4_ =
         (uint)bVar34 * ((uint)bVar48 * iVar111 | (uint)!bVar48 * auVar103._8_4_) |
         (uint)!bVar34 * local_1a0._8_4_;
    local_1a0._12_4_ =
         (uint)bVar41 * ((uint)bVar5 * iVar112 | (uint)!bVar5 * auVar103._12_4_) |
         (uint)!bVar41 * local_1a0._12_4_;
    local_1a0._16_4_ =
         (uint)bVar57 * (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar103._16_4_ |
         (uint)!bVar57 * local_1a0._16_4_;
    local_1a0._20_4_ =
         (uint)bVar4 * (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar103._20_4_ |
         (uint)!bVar4 * local_1a0._20_4_;
    local_1a0._24_4_ =
         (uint)bVar7 * (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar103._24_4_ |
         (uint)!bVar7 * local_1a0._24_4_;
    local_1a0._28_4_ =
         (uint)bVar9 *
         ((uint)bVar16 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar16 * auVar103._28_4_) | (uint)!bVar9 * local_1a0._28_4_;
    local_180._0_4_ = auVar101._0_4_;
    local_180._4_4_ = auVar101._4_4_;
    local_180._8_4_ = auVar101._8_4_;
    local_180._12_4_ = auVar101._12_4_;
    local_180._16_4_ = auVar101._16_4_;
    local_180._20_4_ = auVar101._20_4_;
    local_180._24_4_ = auVar101._24_4_;
    local_180._28_4_ = auVar101._28_4_;
    bVar56 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar34 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar41 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar48 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar57 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar4 = SUB81(uVar75 >> 7,0);
    local_180._4_4_ =
         (uint)bVar56 * ((uint)bVar21 * iVar110 | (uint)!bVar21 * auVar95._4_4_) |
         (uint)!bVar56 * local_180._4_4_;
    local_180._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar3 & 1) * iVar80 | (uint)!(bool)(bVar3 & 1) * auVar95._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_180._0_4_;
    local_180._8_4_ =
         (uint)bVar8 * ((uint)bVar55 * iVar111 | (uint)!bVar55 * auVar95._8_4_) |
         (uint)!bVar8 * local_180._8_4_;
    local_180._12_4_ =
         (uint)bVar34 * ((uint)bVar6 * iVar112 | (uint)!bVar6 * auVar95._12_4_) |
         (uint)!bVar34 * local_180._12_4_;
    local_180._16_4_ =
         (uint)bVar41 * (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar95._16_4_ |
         (uint)!bVar41 * local_180._16_4_;
    local_180._20_4_ =
         (uint)bVar48 * (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar95._20_4_ |
         (uint)!bVar48 * local_180._20_4_;
    local_180._24_4_ =
         (uint)bVar57 * (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar95._24_4_ |
         (uint)!bVar57 * local_180._24_4_;
    local_180._28_4_ =
         (uint)bVar4 * (uint)!SUB81(uVar79 >> 7,0) * auVar95._28_4_ |
         (uint)!bVar4 * local_180._28_4_;
    auVar105._0_4_ = (uint)(bVar3 & 1) * iVar80 | (uint)!(bool)(bVar3 & 1) * auVar90._0_4_;
    bVar56 = (bool)((byte)(uVar79 >> 1) & 1);
    auVar105._4_4_ = (uint)bVar56 * iVar110 | (uint)!bVar56 * auVar90._4_4_;
    bVar56 = (bool)((byte)(uVar79 >> 2) & 1);
    auVar105._8_4_ = (uint)bVar56 * iVar111 | (uint)!bVar56 * auVar90._8_4_;
    bVar56 = (bool)((byte)(uVar79 >> 3) & 1);
    auVar105._12_4_ = (uint)bVar56 * iVar112 | (uint)!bVar56 * auVar90._12_4_;
    auVar105._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar90._16_4_;
    auVar105._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar90._20_4_;
    auVar105._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar90._24_4_;
    bVar56 = SUB81(uVar79 >> 7,0);
    auVar105._28_4_ =
         (uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar56 * auVar90._28_4_;
    piVar2 = (int *)(param_3 + ((int)uVar77 << 2));
    auVar106._4_4_ = (uint)((byte)(uVar75 >> 1) & 1) * piVar2[1];
    auVar106._0_4_ = (uint)(bVar78 & 1) * *piVar2;
    auVar106._8_4_ = (uint)((byte)(uVar75 >> 2) & 1) * piVar2[2];
    auVar106._12_4_ = (uint)((byte)(uVar75 >> 3) & 1) * piVar2[3];
    auVar106._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * piVar2[4];
    auVar106._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * piVar2[5];
    auVar106._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * piVar2[6];
    auVar106._28_4_ = (uint)(byte)(uVar75 >> 7) * piVar2[7];
    pauVar76 = (undefined1 (*) [16])(param_4 + (uVar77 & 0xffffffff));
    if ((~bVar78 & 0x81) == 0) {
      uVar77 = *(ulonglong *)*pauVar76;
    }
    else {
      auVar83 = vmovdqu8_avx512vl(*pauVar76);
      uVar77 = CONCAT17((char)(uVar75 >> 7) * auVar83[7],
                        CONCAT16(((byte)(uVar75 >> 6) & 1) * auVar83[6],
                                 CONCAT15(((byte)(uVar75 >> 5) & 1) * auVar83[5],
                                          CONCAT14(((byte)(uVar75 >> 4) & 1) * auVar83[4],
                                                   CONCAT13(((byte)(uVar75 >> 3) & 1) * auVar83[3],
                                                            CONCAT12(((byte)(uVar75 >> 2) & 1) *
                                                                     auVar83[2],
                                                                     CONCAT11(((byte)(uVar75 >> 1) &
                                                                              1) * auVar83[1],
                                                                              (bVar78 & 1) *
                                                                              auVar83[0])))))));
    }
    auVar83._8_8_ = 0;
    auVar83._0_8_ = uVar77;
    auVar88 = vsubps_avx512vl(auVar105,auVar106);
    auVar100 = vmulps_avx512vl(auVar88,local_1c0);
    auVar101 = vmulps_avx512vl(auVar88,local_1a0);
    auVar90 = vpmovzxbd_avx512vl(auVar83);
    auVar90 = vpslld_avx512vl(auVar90,2);
    auVar83 = vextracti32x4_avx512vl(auVar90,1);
    vpmovzxdq_avx512vl(auVar83);
    auVar90 = vpmovzxdq_avx512vl(auVar90._0_16_);
    auVar83 = vxorps_avx512vl(auVar89._0_16_,auVar89._0_16_);
    auVar85 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + unaff_R12));
    bVar8 = (bool)((byte)(uVar75 >> 1) & 1);
    auVar86 = vxorps_avx512vl(auVar90._0_16_,auVar90._0_16_);
    auVar87 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + unaff_R14));
    bVar56 = (bool)(bVar78 >> 4 & 1);
    auVar134._0_8_ = (ulonglong)bVar56 * auVar87._0_8_ | (ulonglong)!bVar56 * auVar86._0_8_;
    bVar56 = (bool)(bVar78 >> 5 & 1);
    auVar134._8_8_ = (ulonglong)bVar56 * auVar87._8_8_ | (ulonglong)!bVar56 * auVar86._8_8_;
    auVar88 = vmulps_avx512vl(auVar88,local_180);
    auVar89 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)bVar8 * auVar85._8_8_ |
                                           (ulonglong)!bVar8 * auVar83._8_8_,
                                           (ulonglong)(bVar78 & 1) * auVar85._0_8_ |
                                           (ulonglong)!(bool)(bVar78 & 1) * auVar83._0_8_)),auVar134
                         ,1);
    auVar90 = vaddps_avx512vl(auVar102,auVar104);
    auVar100 = vmulps_avx512vl(auVar100,auVar89);
    auVar101 = vmulps_avx512vl(auVar101,auVar89);
    auVar88 = vmulps_avx512vl(auVar88,auVar89);
    auVar100 = vdivps_avx512vl(auVar100,auVar90);
    auVar89 = vdivps_avx512vl(auVar101,auVar90);
    auVar88 = vdivps_avx512vl(auVar88,auVar90);
    auVar83 = vxorps_avx512vl(auVar101._0_16_,auVar101._0_16_);
    uVar77 = vcmpps_avx512vl(auVar104,ZEXT1632(auVar83),0);
    uVar79 = vcmpps_avx512vl(auVar102,ZEXT1632(auVar83),0);
    uVar77 = uVar77 & uVar79;
    bVar78 = (byte)uVar77;
    iVar80 = auVar83._0_4_;
    auVar107._0_4_ = (uint)(bVar78 & 1) * iVar80 | (uint)!(bool)(bVar78 & 1) * auVar100._0_4_;
    bVar56 = (bool)((byte)(uVar77 >> 1) & 1);
    iVar110 = auVar83._4_4_;
    auVar107._4_4_ = (uint)bVar56 * iVar110 | (uint)!bVar56 * auVar100._4_4_;
    bVar56 = (bool)((byte)(uVar77 >> 2) & 1);
    iVar111 = auVar83._8_4_;
    auVar107._8_4_ = (uint)bVar56 * iVar111 | (uint)!bVar56 * auVar100._8_4_;
    bVar56 = (bool)((byte)(uVar77 >> 3) & 1);
    iVar112 = auVar83._12_4_;
    auVar107._12_4_ = (uint)bVar56 * iVar112 | (uint)!bVar56 * auVar100._12_4_;
    auVar107._16_4_ = (uint)!(bool)((byte)(uVar77 >> 4) & 1) * auVar100._16_4_;
    auVar107._20_4_ = (uint)!(bool)((byte)(uVar77 >> 5) & 1) * auVar100._20_4_;
    auVar107._24_4_ = (uint)!(bool)((byte)(uVar77 >> 6) & 1) * auVar100._24_4_;
    bVar56 = SUB81(uVar77 >> 7,0);
    auVar107._28_4_ =
         (uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar56 * auVar100._28_4_
    ;
    auVar108._0_4_ = (uint)(bVar78 & 1) * iVar80 | (uint)!(bool)(bVar78 & 1) * auVar89._0_4_;
    bVar56 = (bool)((byte)(uVar77 >> 1) & 1);
    auVar108._4_4_ = (uint)bVar56 * iVar110 | (uint)!bVar56 * auVar89._4_4_;
    bVar56 = (bool)((byte)(uVar77 >> 2) & 1);
    auVar108._8_4_ = (uint)bVar56 * iVar111 | (uint)!bVar56 * auVar89._8_4_;
    bVar56 = (bool)((byte)(uVar77 >> 3) & 1);
    auVar108._12_4_ = (uint)bVar56 * iVar112 | (uint)!bVar56 * auVar89._12_4_;
    auVar108._16_4_ = (uint)!(bool)((byte)(uVar77 >> 4) & 1) * auVar89._16_4_;
    auVar108._20_4_ = (uint)!(bool)((byte)(uVar77 >> 5) & 1) * auVar89._20_4_;
    auVar108._24_4_ = (uint)!(bool)((byte)(uVar77 >> 6) & 1) * auVar89._24_4_;
    auVar108._28_4_ = (uint)!SUB81(uVar77 >> 7,0) * auVar89._28_4_;
    auVar109._0_4_ = (uint)(bVar78 & 1) * iVar80 | (uint)!(bool)(bVar78 & 1) * auVar88._0_4_;
    bVar56 = (bool)((byte)(uVar77 >> 1) & 1);
    auVar109._4_4_ = (uint)bVar56 * iVar110 | (uint)!bVar56 * auVar88._4_4_;
    bVar56 = (bool)((byte)(uVar77 >> 2) & 1);
    auVar109._8_4_ = (uint)bVar56 * iVar111 | (uint)!bVar56 * auVar88._8_4_;
    bVar56 = (bool)((byte)(uVar77 >> 3) & 1);
    auVar109._12_4_ = (uint)bVar56 * iVar112 | (uint)!bVar56 * auVar88._12_4_;
    auVar109._16_4_ = (uint)!(bool)((byte)(uVar77 >> 4) & 1) * auVar88._16_4_;
    auVar109._20_4_ = (uint)!(bool)((byte)(uVar77 >> 5) & 1) * auVar88._20_4_;
    auVar109._24_4_ = (uint)!(bool)((byte)(uVar77 >> 6) & 1) * auVar88._24_4_;
    auVar109._28_4_ = (uint)!SUB81(uVar77 >> 7,0) * auVar88._28_4_;
    uVar77 = vcmpps_avx512vl(ZEXT1632(auVar83),auVar102,1);
    uVar77 = uVar75 & uVar77;
    if ((char)uVar77 != '\0') {
      auVar88 = vfnmadd231ps_avx512vl(auVar92,auVar102,auVar107);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar116,uVar77,auVar88);
      auVar88 = vfnmadd231ps_avx512vl(auVar93,auVar102,auVar108);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar116 | auVar114),uVar77,auVar88);
      auVar88 = vfnmadd231ps_avx512vl(auVar94,auVar102,auVar109);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar113 | auVar114),uVar77,auVar88);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar116,uVar77,auVar102);
    }
    uVar77 = vcmpps_avx512vl(ZEXT1632(auVar83),auVar104,1);
    uVar75 = uVar75 & uVar77;
    if ((char)uVar75 != '\0') {
      auVar88 = vfmadd213ps_avx512vl(auVar107,auVar104,auVar97);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar113,uVar75,auVar88);
      auVar88 = vfmadd213ps_avx512vl(auVar108,auVar104,auVar98);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar113 | auVar114),uVar75,auVar88);
      auVar88 = vfmadd213ps_avx512vl(auVar109,auVar104,auVar99);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar113 | auVar118),uVar75,auVar88);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar113 | auVar120),uVar75,auVar104);
    }
  }
  return;
}

// ApplySpringConstraints_avx512skx @ 14035a040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraints_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
               uint param_5)

{
  undefined1 (*pauVar1) [32];
  int *piVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
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
  ulonglong uVar64;
  undefined8 uVar65;
  uint uVar66;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  uint uVar67;
  ulonglong uVar68;
  longlong unaff_R13;
  byte bVar69;
  ulonglong uVar70;
  ulonglong uVar71;
  int iVar72;
  int iVar99;
  int iVar100;
  undefined1 auVar73 [16];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  int iVar101;
  undefined1 auVar91 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar105 [16];
  undefined1 auVar106 [32];
  undefined1 auVar107 [16];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  float fVar111;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar112 [32];
  float fVar119;
  undefined1 auVar120 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar121 [16];
  undefined1 in_ZMM20 [64];
  undefined1 auVar122 [16];
  undefined1 in_ZMM21 [64];
  undefined1 auVar123 [16];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar124 [16];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 auVar125 [16];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
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
  int aiStack_138 [4];
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
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  
  auVar125 = in_ZMM27._0_16_;
  auVar73 = in_ZMM16._0_16_;
  auVar76 = in_ZMM26._0_16_;
  auVar75 = in_ZMM25._0_16_;
  auVar124 = in_ZMM24._0_16_;
  auVar121 = in_ZMM20._0_16_;
  auVar74 = in_ZMM23._0_16_;
  auVar123 = in_ZMM22._0_16_;
  auVar122 = in_ZMM21._0_16_;
  uVar67 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar67 = param_5;
  }
  auVar95._0_4_ = in_ZMM3._0_4_;
  if ((int)(uVar67 & 0xfffffff8) < 1) {
    uVar71 = 0;
  }
  else {
    uVar71 = 0;
    auVar105._4_4_ = __real_00000004;
    auVar105._0_4_ = __real_00000004;
    auVar105._8_4_ = __real_00000004;
    auVar105._12_4_ = __real_00000004;
    auVar92._16_4_ = __real_00000004;
    auVar92._0_16_ = auVar105;
    auVar92._20_4_ = __real_00000004;
    auVar92._24_4_ = __real_00000004;
    auVar92._28_4_ = __real_00000004;
    auVar107._4_4_ = __real_00000008;
    auVar107._0_4_ = __real_00000008;
    auVar107._8_4_ = __real_00000008;
    auVar107._12_4_ = __real_00000008;
    auVar93._16_4_ = __real_00000008;
    auVar93._0_16_ = auVar107;
    auVar93._20_4_ = __real_00000008;
    auVar93._24_4_ = __real_00000008;
    auVar93._28_4_ = __real_00000008;
    auVar73 = vxorps_avx512vl(auVar73,auVar73);
    auVar77 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar78 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    uVar68 = 0;
    do {
      auVar79 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + uVar68 * 2));
      auVar80 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x20 + uVar68 * 2));
      auVar81 = vmovdqa64_avx512vl(auVar79);
      auVar81 = vpermt2d_avx512vl(auVar81,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar80);
      auVar82 = vpslld_avx512vl(auVar81,4);
      auVar124 = auVar82._0_16_;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar125 = auVar124 | auVar105;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar68));
      auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RDI));
      auVar79 = vpermt2d_avx512vl(auVar79,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar80);
      auVar79 = vpslld_avx512vl(auVar79,4);
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
      in_ZMM30 = ZEXT3264(auVar87);
      auVar123 = auVar79._0_16_;
      auVar121 = auVar123 | auVar105;
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar88 = vgatherdps_avx512vl(*param_1);
      auVar74 = auVar88._0_16_;
      in_ZMM23 = ZEXT3264(auVar88);
      auVar122 = auVar123 | auVar107;
      vxorps_avx512vl(in_ZMM25._0_16_,in_ZMM25._0_16_);
      auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_138));
      auVar75 = auVar89._0_16_;
      in_ZMM25 = ZEXT3264(auVar89);
      auVar123 = auVar123 | auVar77._0_16_;
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      auVar76 = auVar90._0_16_;
      in_ZMM26 = ZEXT3264(auVar90);
      auVar79 = vsubps_avx512vl(auVar83,auVar87);
      auVar80 = vsubps_avx512vl(auVar84,auVar88);
      auVar81 = vsubps_avx512vl(auVar85,auVar89);
      auVar112._0_4_ =
           auVar81._0_4_ * auVar81._0_4_ +
           auVar79._0_4_ * auVar79._0_4_ + auVar80._0_4_ * auVar80._0_4_;
      auVar112._4_4_ =
           auVar81._4_4_ * auVar81._4_4_ +
           auVar79._4_4_ * auVar79._4_4_ + auVar80._4_4_ * auVar80._4_4_;
      auVar112._8_4_ =
           auVar81._8_4_ * auVar81._8_4_ +
           auVar79._8_4_ * auVar79._8_4_ + auVar80._8_4_ * auVar80._8_4_;
      auVar112._12_4_ =
           auVar81._12_4_ * auVar81._12_4_ +
           auVar79._12_4_ * auVar79._12_4_ + auVar80._12_4_ * auVar80._12_4_;
      auVar112._16_4_ =
           auVar81._16_4_ * auVar81._16_4_ +
           auVar79._16_4_ * auVar79._16_4_ + auVar80._16_4_ * auVar80._16_4_;
      auVar112._20_4_ =
           auVar81._20_4_ * auVar81._20_4_ +
           auVar79._20_4_ * auVar79._20_4_ + auVar80._20_4_ * auVar80._20_4_;
      auVar112._24_4_ =
           auVar81._24_4_ * auVar81._24_4_ +
           auVar79._24_4_ * auVar79._24_4_ + auVar80._24_4_ * auVar80._24_4_;
      auVar112._28_4_ =
           auVar81._28_4_ * auVar81._28_4_ +
           auVar79._28_4_ * auVar79._28_4_ + auVar80._28_4_ * auVar80._28_4_;
      auVar91 = vsqrtps_avx(auVar112);
      uVar70 = vcmpps_avx512vl(auVar112,auVar78,1);
      auVar79 = vdivps_avx(auVar79,auVar91);
      auVar80 = vdivps_avx(auVar80,auVar91);
      auVar81 = vdivps_avx(auVar81,auVar91);
      bVar69 = (byte)uVar70;
      iVar72 = auVar73._0_4_;
      bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
      iVar99 = auVar73._4_4_;
      bVar7 = (bool)((byte)(uVar70 >> 2) & 1);
      iVar100 = auVar73._8_4_;
      bVar20 = (bool)((byte)(uVar70 >> 3) & 1);
      iVar101 = auVar73._12_4_;
      bVar56 = SUB81(uVar70 >> 7,0);
      bVar5 = (bool)((byte)(uVar70 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar70 >> 2) & 1);
      bVar21 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar102._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar91._0_4_;
      bVar6 = (bool)((byte)(uVar70 >> 1) & 1);
      auVar102._4_4_ = (uint)bVar6 * iVar99 | (uint)!bVar6 * auVar91._4_4_;
      bVar6 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar102._8_4_ = (uint)bVar6 * iVar100 | (uint)!bVar6 * auVar91._8_4_;
      bVar6 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar102._12_4_ = (uint)bVar6 * iVar101 | (uint)!bVar6 * auVar91._12_4_;
      auVar102._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar91._16_4_;
      auVar102._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar91._20_4_;
      auVar102._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar91._24_4_;
      bVar6 = SUB81(uVar70 >> 7,0);
      auVar102._28_4_ =
           (uint)bVar6 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar6 * auVar91._28_4_;
      unaff_RSI = uVar68 & 0xffffffff;
      auVar91 = vsubps_avx(auVar102,*(undefined1 (*) [32])(param_3 + unaff_RSI));
      fVar111 = auVar91._0_4_;
      fVar113 = auVar91._4_4_;
      fVar114 = auVar91._8_4_;
      fVar115 = auVar91._12_4_;
      fVar116 = auVar91._16_4_;
      fVar117 = auVar91._20_4_;
      fVar118 = auVar91._24_4_;
      fVar119 = auVar91._28_4_;
      bVar6 = (bool)((byte)(uVar70 >> 1) & 1);
      bVar9 = (bool)((byte)(uVar70 >> 2) & 1);
      bVar22 = (bool)((byte)(uVar70 >> 3) & 1);
      bVar35 = (bool)((byte)(uVar70 >> 4) & 1);
      bVar42 = (bool)((byte)(uVar70 >> 5) & 1);
      bVar49 = (bool)((byte)(uVar70 >> 6) & 1);
      bVar57 = SUB81(uVar70 >> 7,0);
      auVar91 = vaddps_avx512vl(auVar86,auVar90);
      auVar109._0_4_ =
           (float)((uint)(bVar69 & 1) * (int)fVar111 |
                  (uint)!(bool)(bVar69 & 1) * (int)(fVar111 * auVar79._0_4_)) * auVar95._0_4_;
      auVar109._4_4_ =
           (float)((uint)bVar6 * (int)fVar113 | (uint)!bVar6 * (int)(fVar113 * auVar79._4_4_)) *
           auVar95._0_4_;
      auVar109._8_4_ =
           (float)((uint)bVar9 * (int)fVar114 | (uint)!bVar9 * (int)(fVar114 * auVar79._8_4_)) *
           auVar95._0_4_;
      auVar109._12_4_ =
           (float)((uint)bVar22 * (int)fVar115 | (uint)!bVar22 * (int)(fVar115 * auVar79._12_4_)) *
           auVar95._0_4_;
      auVar109._16_4_ =
           (float)((uint)bVar35 * (int)fVar116 | (uint)!bVar35 * (int)(fVar116 * auVar79._16_4_)) *
           auVar95._0_4_;
      auVar109._20_4_ =
           (float)((uint)bVar42 * (int)fVar117 | (uint)!bVar42 * (int)(fVar117 * auVar79._20_4_)) *
           auVar95._0_4_;
      auVar109._24_4_ =
           (float)((uint)bVar49 * (int)fVar118 | (uint)!bVar49 * (int)(fVar118 * auVar79._24_4_)) *
           auVar95._0_4_;
      auVar109._28_4_ =
           (float)((uint)bVar57 * (int)fVar119 | (uint)!bVar57 * (int)(fVar119 * auVar79._28_4_)) *
           auVar95._0_4_;
      auVar110._0_4_ =
           (float)((uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar80._0_4_) *
           fVar111 * auVar95._0_4_;
      auVar110._4_4_ =
           (float)((uint)bVar4 * iVar99 | (uint)!bVar4 * auVar80._4_4_) * fVar113 * auVar95._0_4_;
      auVar110._8_4_ =
           (float)((uint)bVar7 * iVar100 | (uint)!bVar7 * auVar80._8_4_) * fVar114 * auVar95._0_4_;
      auVar110._12_4_ =
           (float)((uint)bVar20 * iVar101 | (uint)!bVar20 * auVar80._12_4_) * fVar115 *
           auVar95._0_4_;
      auVar110._16_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar80._16_4_) * fVar116 *
           auVar95._0_4_;
      auVar110._20_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar80._20_4_) * fVar117 *
           auVar95._0_4_;
      auVar110._24_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar80._24_4_) * fVar118 *
           auVar95._0_4_;
      auVar110._28_4_ =
           (float)((uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                  (uint)!bVar56 * auVar80._28_4_) * fVar119 * auVar95._0_4_;
      auVar120._0_4_ =
           (float)((uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar81._0_4_) *
           fVar111 * auVar95._0_4_;
      auVar120._4_4_ =
           (float)((uint)bVar5 * iVar99 | (uint)!bVar5 * auVar81._4_4_) * fVar113 * auVar95._0_4_;
      auVar120._8_4_ =
           (float)((uint)bVar8 * iVar100 | (uint)!bVar8 * auVar81._8_4_) * fVar114 * auVar95._0_4_;
      auVar120._12_4_ =
           (float)((uint)bVar21 * iVar101 | (uint)!bVar21 * auVar81._12_4_) * fVar115 *
           auVar95._0_4_;
      auVar120._16_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar81._16_4_) * fVar116 *
           auVar95._0_4_;
      auVar120._20_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar81._20_4_) * fVar117 *
           auVar95._0_4_;
      auVar120._24_4_ =
           (float)((uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar81._24_4_) * fVar118 *
           auVar95._0_4_;
      auVar120._28_4_ =
           (float)((uint)!SUB81(uVar70 >> 7,0) * auVar81._28_4_) * fVar119 * auVar95._0_4_;
      auVar79 = vdivps_avx(auVar109,auVar91);
      auVar80 = vdivps_avx(auVar110,auVar91);
      auVar81 = vdivps_avx(auVar120,auVar91);
      uVar70 = vcmpps_avx512vl(auVar90,ZEXT1632(auVar73),0);
      uVar64 = vcmpps_avx512vl(auVar86,ZEXT1632(auVar73),0);
      uVar70 = uVar70 & uVar64;
      bVar69 = (byte)uVar70;
      auVar91._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar79._0_4_;
      bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
      auVar91._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar79._4_4_;
      bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar91._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar79._8_4_;
      bVar4 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar91._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar79._12_4_;
      auVar91._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar79._16_4_;
      auVar91._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar79._20_4_;
      auVar91._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar79._24_4_;
      auVar91._28_4_ = (uint)!SUB81(uVar70 >> 7,0) * auVar79._28_4_;
      auVar106._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar80._0_4_;
      bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
      auVar106._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar80._4_4_;
      bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar106._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar80._8_4_;
      bVar4 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar106._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar80._12_4_;
      auVar106._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar80._16_4_;
      auVar106._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar80._20_4_;
      auVar106._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar80._24_4_;
      bVar4 = SUB81(uVar70 >> 7,0);
      auVar106._28_4_ =
           (uint)bVar4 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar4 * auVar80._28_4_;
      auVar80._0_4_ =
           (float)((uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar81._0_4_);
      bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
      auVar80._4_4_ = (float)((uint)bVar4 * iVar99 | (uint)!bVar4 * auVar81._4_4_);
      bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar80._8_4_ = (float)((uint)bVar4 * iVar100 | (uint)!bVar4 * auVar81._8_4_);
      bVar4 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar80._12_4_ = (float)((uint)bVar4 * iVar101 | (uint)!bVar4 * auVar81._12_4_);
      fVar111 = (float)((uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar81._16_4_);
      auVar80._16_4_ = fVar111;
      fVar113 = (float)((uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar81._20_4_);
      auVar80._20_4_ = fVar113;
      fVar114 = (float)((uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar81._24_4_);
      auVar80._24_4_ = fVar114;
      fVar115 = (float)((uint)!SUB81(uVar70 >> 7,0) * auVar81._28_4_);
      auVar80._28_4_ = fVar115;
      uVar65 = vcmpps_avx512vl(ZEXT1632(auVar73),auVar86,1);
      auVar79 = auVar85;
      if ((char)uVar65 != '\0') {
        auVar83 = vfnmadd231ps_avx512vl(auVar83,auVar86,auVar91);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar86,uVar65,auVar83);
        auVar84 = vfnmadd231ps_avx512vl(auVar84,auVar86,auVar106);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar65,auVar84);
        auVar79._0_4_ = -(auVar86._0_4_ * auVar80._0_4_) + auVar85._0_4_;
        auVar79._4_4_ = -(auVar86._4_4_ * auVar80._4_4_) + auVar85._4_4_;
        auVar79._8_4_ = -(auVar86._8_4_ * auVar80._8_4_) + auVar85._8_4_;
        auVar79._12_4_ = -(auVar86._12_4_ * auVar80._12_4_) + auVar85._12_4_;
        auVar79._16_4_ = -(auVar86._16_4_ * fVar111) + auVar85._16_4_;
        auVar79._20_4_ = -(auVar86._20_4_ * fVar113) + auVar85._20_4_;
        auVar79._24_4_ = -(auVar86._24_4_ * fVar114) + auVar85._24_4_;
        auVar79._28_4_ = -(auVar86._28_4_ * fVar115) + auVar85._28_4_;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar120,uVar65,auVar79);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar82 | auVar77),uVar65,auVar86);
      }
      in_ZMM31 = ZEXT3264(auVar84);
      in_ZMM28 = ZEXT3264(auVar83);
      uVar65 = vcmpps_avx512vl(ZEXT1632(auVar73),auVar90,1);
      if ((char)uVar65 != '\0') {
        auVar81 = vfmadd213ps_avx512vl(auVar91,auVar90,auVar87);
        vscatterdps_avx512vl(ZEXT832(param_1) + in_ZMM3._0_32_,uVar65,auVar81);
        auVar81 = vfmadd213ps_avx512vl(auVar106,auVar90,auVar88);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar92,uVar65,auVar81);
        auVar80 = vfmadd213ps_avx512vl(auVar80,auVar90,auVar89);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar93,uVar65,auVar80);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar79,uVar65,auVar90);
      }
      uVar68 = uVar68 + 0x20;
      uVar66 = (int)uVar71 + 8;
      uVar71 = (ulonglong)uVar66;
    } while ((int)uVar66 < (int)(uVar67 & 0xfffffff8));
  }
  if ((int)uVar71 < (int)param_5) {
    auVar77 = vpbroadcastd_avx512vl();
    auVar77 = vpor_avx2(auVar77,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar78 = vpbroadcastd_avx512vl();
    uVar68 = vpcmpgtd_avx512vl(auVar78,auVar77);
    pauVar1 = (undefined1 (*) [32])(param_2 + uVar71 * 8);
    bVar69 = (byte)uVar68;
    if (bVar69 == 0xff) {
      auVar77 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,*pauVar1,pauVar1[1]);
      auVar78 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,*pauVar1,pauVar1[1]);
    }
    else {
      auVar78 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + uVar71));
      auVar77._4_4_ = (uint)((byte)(uVar68 >> 1) & 1) * auVar78._4_4_;
      auVar77._0_4_ = (uint)(bVar69 & 1) * auVar78._0_4_;
      auVar77._8_4_ = (uint)((byte)(uVar68 >> 2) & 1) * auVar78._8_4_;
      auVar77._12_4_ = (uint)((byte)(uVar68 >> 3) & 1) * auVar78._12_4_;
      auVar77._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * auVar78._16_4_;
      auVar77._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * auVar78._20_4_;
      auVar77._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * auVar78._24_4_;
      auVar77._28_4_ = (uint)(byte)(uVar68 >> 7) * auVar78._28_4_;
      auVar92 = vpgatherdd_avx512vl(*(undefined4 *)((longlong)pauVar1 * 2));
      auVar78._4_4_ = (uint)((byte)(uVar68 >> 1) & 1) * auVar92._4_4_;
      auVar78._0_4_ = (uint)(bVar69 & 1) * auVar92._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar68 >> 2) & 1) * auVar92._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar68 >> 3) & 1) * auVar92._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * auVar92._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * auVar92._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * auVar92._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar68 >> 7) * auVar92._28_4_;
    }
    auVar106 = vpslld_avx2(auVar77,4);
    auVar103._4_4_ = __real_00000004;
    auVar103._0_4_ = __real_00000004;
    auVar103._8_4_ = __real_00000004;
    auVar103._12_4_ = __real_00000004;
    auVar103._16_4_ = __real_00000004;
    auVar103._20_4_ = __real_00000004;
    auVar103._24_4_ = __real_00000004;
    auVar103._28_4_ = __real_00000004;
    auVar122 = vxorps_avx512vl(auVar122,auVar122);
    auVar77 = vgatherdps_avx512vl(*param_1);
    bVar4 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar56 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar23 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar123 = vxorps_avx512vl(auVar123,auVar123);
    auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar5 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar57 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar24 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar104._4_4_ = __real_00000008;
    auVar104._0_4_ = __real_00000008;
    auVar104._8_4_ = __real_00000008;
    auVar104._12_4_ = __real_00000008;
    auVar104._16_4_ = __real_00000008;
    auVar104._20_4_ = __real_00000008;
    auVar104._24_4_ = __real_00000008;
    auVar104._28_4_ = __real_00000008;
    auVar74 = vxorps_avx512vl(auVar74,auVar74);
    auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar1));
    bVar6 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar25 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar108._4_4_ = __real_0000000c;
    auVar108._0_4_ = __real_0000000c;
    auVar108._8_4_ = __real_0000000c;
    auVar108._12_4_ = __real_0000000c;
    auVar108._16_4_ = __real_0000000c;
    auVar108._20_4_ = __real_0000000c;
    auVar108._24_4_ = __real_0000000c;
    auVar108._28_4_ = __real_0000000c;
    auVar121 = vxorps_avx512vl(auVar121,auVar121);
    auVar79 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    auVar90._0_4_ = (uint)(bVar69 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar121._0_4_;
    bVar7 = (bool)((byte)(uVar68 >> 1) & 1);
    auVar90._4_4_ = (uint)bVar7 * auVar79._4_4_ | (uint)!bVar7 * auVar121._4_4_;
    bVar7 = (bool)((byte)(uVar68 >> 2) & 1);
    auVar90._8_4_ = (uint)bVar7 * auVar79._8_4_ | (uint)!bVar7 * auVar121._8_4_;
    bVar7 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar90._12_4_ = (uint)bVar7 * auVar79._12_4_ | (uint)!bVar7 * auVar121._12_4_;
    auVar90._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * auVar79._16_4_;
    auVar90._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * auVar79._20_4_;
    auVar90._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * auVar79._24_4_;
    auVar90._28_4_ = (uint)(byte)(uVar68 >> 7) * auVar79._28_4_;
    auVar102 = vpslld_avx2(auVar78,4);
    auVar121 = vxorps_avx512vl(auVar124,auVar124);
    auVar78 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar71));
    bVar7 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar26 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar75 = vxorps_avx512vl(auVar75,auVar75);
    auVar79 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar8 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar27 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar76 = vxorps_avx512vl(auVar76,auVar76);
    auVar80 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar1));
    bVar9 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar28 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar73 = vxorps_avx512vl(auVar73,auVar73);
    auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_138));
    auVar83._0_4_ = (uint)(bVar69 & 1) * auVar81._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar73._0_4_;
    bVar20 = (bool)((byte)(uVar68 >> 1) & 1);
    auVar83._4_4_ = (uint)bVar20 * auVar81._4_4_ | (uint)!bVar20 * auVar73._4_4_;
    bVar20 = (bool)((byte)(uVar68 >> 2) & 1);
    auVar83._8_4_ = (uint)bVar20 * auVar81._8_4_ | (uint)!bVar20 * auVar73._8_4_;
    bVar20 = (bool)((byte)(uVar68 >> 3) & 1);
    auVar83._12_4_ = (uint)bVar20 * auVar81._12_4_ | (uint)!bVar20 * auVar73._12_4_;
    auVar83._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * auVar81._16_4_;
    auVar83._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * auVar81._20_4_;
    auVar83._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * auVar81._24_4_;
    auVar83._28_4_ = (uint)(byte)(uVar68 >> 7) * auVar81._28_4_;
    bVar20 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar14 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar29 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar36 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar43 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar50 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar58 = SUB81(uVar68 >> 7,0);
    bVar21 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar15 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar30 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar37 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar44 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar51 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar59 = SUB81(uVar68 >> 7,0);
    bVar22 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar16 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar31 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar38 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar45 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar52 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar60 = SUB81(uVar68 >> 7,0);
    bVar35 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar17 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar32 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar39 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar46 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar53 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar61 = SUB81(uVar68 >> 7,0);
    bVar42 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar18 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar33 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar40 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar47 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar54 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar62 = SUB81(uVar68 >> 7,0);
    bVar49 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar19 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar34 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar41 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar48 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar55 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar63 = SUB81(uVar68 >> 7,0);
    auVar87._4_4_ =
         (uint)bVar20 * ((uint)bVar4 * auVar77._4_4_ | (uint)!bVar4 * auVar122._4_4_) |
         (uint)!bVar20 * iStack_fc;
    auVar87._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar77._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar122._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_100;
    auVar87._8_4_ =
         (uint)bVar14 * ((uint)bVar56 * auVar77._8_4_ | (uint)!bVar56 * auVar122._8_4_) |
         (uint)!bVar14 * iStack_f8;
    auVar87._12_4_ =
         (uint)bVar29 * ((uint)bVar23 * auVar77._12_4_ | (uint)!bVar23 * auVar122._12_4_) |
         (uint)!bVar29 * iStack_f4;
    auVar87._16_4_ =
         (uint)bVar36 * (uint)((byte)(uVar68 >> 4) & 1) * auVar77._16_4_ | (uint)!bVar36 * iStack_f0
    ;
    auVar87._20_4_ =
         (uint)bVar43 * (uint)((byte)(uVar68 >> 5) & 1) * auVar77._20_4_ | (uint)!bVar43 * iStack_ec
    ;
    auVar87._24_4_ =
         (uint)bVar50 * (uint)((byte)(uVar68 >> 6) & 1) * auVar77._24_4_ | (uint)!bVar50 * iStack_e8
    ;
    auVar87._28_4_ =
         (uint)bVar58 * (uint)(byte)(uVar68 >> 7) * auVar77._28_4_ | (uint)!bVar58 * iStack_e4;
    auVar88._4_4_ =
         (uint)bVar21 * ((uint)bVar5 * auVar92._4_4_ | (uint)!bVar5 * auVar123._4_4_) |
         (uint)!bVar21 * iStack_dc;
    auVar88._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar92._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar123._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_e0;
    auVar88._8_4_ =
         (uint)bVar15 * ((uint)bVar57 * auVar92._8_4_ | (uint)!bVar57 * auVar123._8_4_) |
         (uint)!bVar15 * iStack_d8;
    auVar88._12_4_ =
         (uint)bVar30 * ((uint)bVar24 * auVar92._12_4_ | (uint)!bVar24 * auVar123._12_4_) |
         (uint)!bVar30 * iStack_d4;
    auVar88._16_4_ =
         (uint)bVar37 * (uint)((byte)(uVar68 >> 4) & 1) * auVar92._16_4_ | (uint)!bVar37 * iStack_d0
    ;
    auVar88._20_4_ =
         (uint)bVar44 * (uint)((byte)(uVar68 >> 5) & 1) * auVar92._20_4_ | (uint)!bVar44 * iStack_cc
    ;
    auVar88._24_4_ =
         (uint)bVar51 * (uint)((byte)(uVar68 >> 6) & 1) * auVar92._24_4_ | (uint)!bVar51 * iStack_c8
    ;
    auVar88._28_4_ =
         (uint)bVar59 * (uint)(byte)(uVar68 >> 7) * auVar92._28_4_ | (uint)!bVar59 * iStack_c4;
    auVar89._4_4_ =
         (uint)bVar22 * ((uint)bVar6 * auVar93._4_4_ | (uint)!bVar6 * auVar74._4_4_) |
         (uint)!bVar22 * iStack_bc;
    auVar89._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar93._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar74._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_c0;
    auVar89._8_4_ =
         (uint)bVar16 * ((uint)bVar10 * auVar93._8_4_ | (uint)!bVar10 * auVar74._8_4_) |
         (uint)!bVar16 * iStack_b8;
    auVar89._12_4_ =
         (uint)bVar31 * ((uint)bVar25 * auVar93._12_4_ | (uint)!bVar25 * auVar74._12_4_) |
         (uint)!bVar31 * iStack_b4;
    auVar89._16_4_ =
         (uint)bVar38 * (uint)((byte)(uVar68 >> 4) & 1) * auVar93._16_4_ | (uint)!bVar38 * iStack_b0
    ;
    auVar89._20_4_ =
         (uint)bVar45 * (uint)((byte)(uVar68 >> 5) & 1) * auVar93._20_4_ | (uint)!bVar45 * iStack_ac
    ;
    auVar89._24_4_ =
         (uint)bVar52 * (uint)((byte)(uVar68 >> 6) & 1) * auVar93._24_4_ | (uint)!bVar52 * iStack_a8
    ;
    auVar89._28_4_ =
         (uint)bVar60 * (uint)(byte)(uVar68 >> 7) * auVar93._28_4_ | (uint)!bVar60 * iStack_a4;
    auVar82._4_4_ =
         (uint)bVar35 * ((uint)bVar7 * auVar78._4_4_ | (uint)!bVar7 * auVar121._4_4_) |
         (uint)!bVar35 * iStack_15c;
    auVar82._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar78._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar121._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_160;
    auVar82._8_4_ =
         (uint)bVar17 * ((uint)bVar11 * auVar78._8_4_ | (uint)!bVar11 * auVar121._8_4_) |
         (uint)!bVar17 * iStack_158;
    auVar82._12_4_ =
         (uint)bVar32 * ((uint)bVar26 * auVar78._12_4_ | (uint)!bVar26 * auVar121._12_4_) |
         (uint)!bVar32 * iStack_154;
    auVar82._16_4_ =
         (uint)bVar39 * (uint)((byte)(uVar68 >> 4) & 1) * auVar78._16_4_ |
         (uint)!bVar39 * iStack_150;
    auVar82._20_4_ =
         (uint)bVar46 * (uint)((byte)(uVar68 >> 5) & 1) * auVar78._20_4_ |
         (uint)!bVar46 * iStack_14c;
    auVar82._24_4_ =
         (uint)bVar53 * (uint)((byte)(uVar68 >> 6) & 1) * auVar78._24_4_ |
         (uint)!bVar53 * iStack_148;
    auVar82._28_4_ =
         (uint)bVar61 * (uint)(byte)(uVar68 >> 7) * auVar78._28_4_ | (uint)!bVar61 * iStack_144;
    auVar85._4_4_ =
         (uint)bVar42 * ((uint)bVar8 * auVar79._4_4_ | (uint)!bVar8 * auVar75._4_4_) |
         (uint)!bVar42 * iStack_13c;
    auVar85._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar75._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_140;
    auVar85._8_4_ =
         (uint)bVar18 * ((uint)bVar12 * auVar79._8_4_ | (uint)!bVar12 * auVar75._8_4_) |
         (uint)!bVar18 * aiStack_138[0];
    auVar85._12_4_ =
         (uint)bVar33 * ((uint)bVar27 * auVar79._12_4_ | (uint)!bVar27 * auVar75._12_4_) |
         (uint)!bVar33 * aiStack_138[1];
    auVar85._16_4_ =
         (uint)bVar40 * (uint)((byte)(uVar68 >> 4) & 1) * auVar79._16_4_ |
         (uint)!bVar40 * aiStack_138[2];
    auVar85._20_4_ =
         (uint)bVar47 * (uint)((byte)(uVar68 >> 5) & 1) * auVar79._20_4_ |
         (uint)!bVar47 * aiStack_138[3];
    auVar85._24_4_ =
         (uint)bVar54 * (uint)((byte)(uVar68 >> 6) & 1) * auVar79._24_4_ |
         (uint)!bVar54 * iStack_128;
    auVar85._28_4_ =
         (uint)bVar62 * (uint)(byte)(uVar68 >> 7) * auVar79._28_4_ | (uint)!bVar62 * iStack_124;
    auVar86._4_4_ =
         (uint)bVar49 * ((uint)bVar9 * auVar80._4_4_ | (uint)!bVar9 * auVar76._4_4_) |
         (uint)!bVar49 * iStack_11c;
    auVar86._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar69 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar69 & 1) * auVar76._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_120;
    auVar86._8_4_ =
         (uint)bVar19 * ((uint)bVar13 * auVar80._8_4_ | (uint)!bVar13 * auVar76._8_4_) |
         (uint)!bVar19 * iStack_118;
    auVar86._12_4_ =
         (uint)bVar34 * ((uint)bVar28 * auVar80._12_4_ | (uint)!bVar28 * auVar76._12_4_) |
         (uint)!bVar34 * iStack_114;
    auVar86._16_4_ =
         (uint)bVar41 * (uint)((byte)(uVar68 >> 4) & 1) * auVar80._16_4_ |
         (uint)!bVar41 * iStack_110;
    auVar86._20_4_ =
         (uint)bVar48 * (uint)((byte)(uVar68 >> 5) & 1) * auVar80._20_4_ |
         (uint)!bVar48 * iStack_10c;
    auVar86._24_4_ =
         (uint)bVar55 * (uint)((byte)(uVar68 >> 6) & 1) * auVar80._24_4_ |
         (uint)!bVar55 * iStack_108;
    auVar86._28_4_ =
         (uint)bVar63 * (uint)(byte)(uVar68 >> 7) * auVar80._28_4_ | (uint)!bVar63 * iStack_104;
    auVar77 = vsubps_avx512vl(auVar87,auVar82);
    auVar78 = vsubps_avx512vl(auVar88,auVar85);
    auVar92 = vsubps_avx512vl(auVar89,auVar86);
    auVar123 = vxorps_avx512vl(auVar125,auVar125);
    auVar93 = vmulps_avx512vl(auVar78,auVar78);
    auVar93 = vfmadd231ps_avx512vl(auVar93,auVar77,auVar77);
    auVar93 = vfmadd231ps_avx512vl(auVar93,auVar92,auVar92);
    auVar81._4_4_ = __real_38d1b717;
    auVar81._0_4_ = __real_38d1b717;
    auVar81._8_4_ = __real_38d1b717;
    auVar81._12_4_ = __real_38d1b717;
    auVar81._16_4_ = __real_38d1b717;
    auVar81._20_4_ = __real_38d1b717;
    auVar81._24_4_ = __real_38d1b717;
    auVar81._28_4_ = __real_38d1b717;
    uVar70 = vcmpps_avx512vl(auVar93,auVar81,1);
    auVar93 = vsqrtps_avx512vl(auVar93);
    auVar79 = vdivps_avx512vl(auVar77,auVar93);
    auVar80 = vdivps_avx512vl(auVar78,auVar93);
    auVar81 = vdivps_avx512vl(auVar92,auVar93);
    auVar91 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
    bVar3 = (byte)uVar70;
    bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar70 >> 2) & 1);
    bVar22 = (bool)((byte)(uVar70 >> 3) & 1);
    bVar56 = (bool)((byte)(uVar70 >> 4) & 1);
    bVar10 = (bool)((byte)(uVar70 >> 5) & 1);
    bVar12 = (bool)((byte)(uVar70 >> 6) & 1);
    bVar14 = SUB81(uVar70 >> 7,0);
    iVar72 = auVar123._0_4_;
    bVar5 = (bool)((byte)(uVar70 >> 1) & 1);
    iVar99 = auVar123._4_4_;
    bVar9 = (bool)((byte)(uVar70 >> 2) & 1);
    iVar100 = auVar123._8_4_;
    bVar35 = (bool)((byte)(uVar70 >> 3) & 1);
    iVar101 = auVar123._12_4_;
    bVar15 = SUB81(uVar70 >> 7,0);
    bVar6 = (bool)((byte)(uVar70 >> 1) & 1);
    bVar20 = (bool)((byte)(uVar70 >> 2) & 1);
    bVar42 = (bool)((byte)(uVar70 >> 3) & 1);
    local_1c0._0_4_ = auVar77._0_4_;
    local_1c0._4_4_ = auVar77._4_4_;
    local_1c0._8_4_ = auVar77._8_4_;
    local_1c0._12_4_ = auVar77._12_4_;
    local_1c0._16_4_ = auVar77._16_4_;
    local_1c0._20_4_ = auVar77._20_4_;
    local_1c0._24_4_ = auVar77._24_4_;
    local_1c0._28_4_ = auVar77._28_4_;
    bVar7 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar21 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar49 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar57 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar11 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar13 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar16 = SUB81(uVar68 >> 7,0);
    local_1c0._4_4_ =
         (uint)bVar7 * ((uint)bVar4 * auVar91._4_4_ | (uint)!bVar4 * auVar79._4_4_) |
         (uint)!bVar7 * local_1c0._4_4_;
    local_1c0._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar3 & 1) * auVar91._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar79._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_1c0._0_4_;
    local_1c0._8_4_ =
         (uint)bVar21 * ((uint)bVar8 * auVar91._8_4_ | (uint)!bVar8 * auVar79._8_4_) |
         (uint)!bVar21 * local_1c0._8_4_;
    local_1c0._12_4_ =
         (uint)bVar49 * ((uint)bVar22 * auVar91._12_4_ | (uint)!bVar22 * auVar79._12_4_) |
         (uint)!bVar49 * local_1c0._12_4_;
    local_1c0._16_4_ =
         (uint)bVar57 * ((uint)bVar56 * auVar91._16_4_ | (uint)!bVar56 * auVar79._16_4_) |
         (uint)!bVar57 * local_1c0._16_4_;
    local_1c0._20_4_ =
         (uint)bVar11 * ((uint)bVar10 * auVar91._20_4_ | (uint)!bVar10 * auVar79._20_4_) |
         (uint)!bVar11 * local_1c0._20_4_;
    local_1c0._24_4_ =
         (uint)bVar13 * ((uint)bVar12 * auVar91._24_4_ | (uint)!bVar12 * auVar79._24_4_) |
         (uint)!bVar13 * local_1c0._24_4_;
    local_1c0._28_4_ =
         (uint)bVar16 * ((uint)bVar14 * auVar91._28_4_ | (uint)!bVar14 * auVar79._28_4_) |
         (uint)!bVar16 * local_1c0._28_4_;
    local_1a0._0_4_ = auVar78._0_4_;
    local_1a0._4_4_ = auVar78._4_4_;
    local_1a0._8_4_ = auVar78._8_4_;
    local_1a0._12_4_ = auVar78._12_4_;
    local_1a0._16_4_ = auVar78._16_4_;
    local_1a0._20_4_ = auVar78._20_4_;
    local_1a0._24_4_ = auVar78._24_4_;
    local_1a0._28_4_ = auVar78._28_4_;
    bVar4 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar8 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar21 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar49 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar56 = SUB81(uVar68 >> 7,0);
    local_1a0._4_4_ =
         (uint)bVar4 * ((uint)bVar5 * iVar99 | (uint)!bVar5 * auVar80._4_4_) |
         (uint)!bVar4 * local_1a0._4_4_;
    local_1a0._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar3 & 1) * iVar72 | (uint)!(bool)(bVar3 & 1) * auVar80._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_1a0._0_4_;
    local_1a0._8_4_ =
         (uint)bVar7 * ((uint)bVar9 * iVar100 | (uint)!bVar9 * auVar80._8_4_) |
         (uint)!bVar7 * local_1a0._8_4_;
    local_1a0._12_4_ =
         (uint)bVar8 * ((uint)bVar35 * iVar101 | (uint)!bVar35 * auVar80._12_4_) |
         (uint)!bVar8 * local_1a0._12_4_;
    local_1a0._16_4_ =
         (uint)bVar21 * (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar80._16_4_ |
         (uint)!bVar21 * local_1a0._16_4_;
    local_1a0._20_4_ =
         (uint)bVar22 * (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar80._20_4_ |
         (uint)!bVar22 * local_1a0._20_4_;
    local_1a0._24_4_ =
         (uint)bVar49 * (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar80._24_4_ |
         (uint)!bVar49 * local_1a0._24_4_;
    local_1a0._28_4_ =
         (uint)bVar56 *
         ((uint)bVar15 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar15 * auVar80._28_4_
         ) | (uint)!bVar56 * local_1a0._28_4_;
    local_180._0_4_ = auVar92._0_4_;
    local_180._4_4_ = auVar92._4_4_;
    local_180._8_4_ = auVar92._8_4_;
    local_180._12_4_ = auVar92._12_4_;
    local_180._16_4_ = auVar92._16_4_;
    local_180._20_4_ = auVar92._20_4_;
    local_180._24_4_ = auVar92._24_4_;
    local_180._28_4_ = auVar92._28_4_;
    bVar4 = (bool)((byte)(uVar68 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar68 >> 2) & 1);
    bVar7 = (bool)((byte)(uVar68 >> 3) & 1);
    bVar8 = (bool)((byte)(uVar68 >> 4) & 1);
    bVar9 = (bool)((byte)(uVar68 >> 5) & 1);
    bVar21 = (bool)((byte)(uVar68 >> 6) & 1);
    bVar22 = SUB81(uVar68 >> 7,0);
    local_180._4_4_ =
         (uint)bVar4 * ((uint)bVar6 * iVar99 | (uint)!bVar6 * auVar81._4_4_) |
         (uint)!bVar4 * local_180._4_4_;
    local_180._0_4_ =
         (uint)(bVar69 & 1) *
         ((uint)(bVar3 & 1) * iVar72 | (uint)!(bool)(bVar3 & 1) * auVar81._0_4_) |
         (uint)!(bool)(bVar69 & 1) * local_180._0_4_;
    local_180._8_4_ =
         (uint)bVar5 * ((uint)bVar20 * iVar100 | (uint)!bVar20 * auVar81._8_4_) |
         (uint)!bVar5 * local_180._8_4_;
    local_180._12_4_ =
         (uint)bVar7 * ((uint)bVar42 * iVar101 | (uint)!bVar42 * auVar81._12_4_) |
         (uint)!bVar7 * local_180._12_4_;
    local_180._16_4_ =
         (uint)bVar8 * (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar81._16_4_ |
         (uint)!bVar8 * local_180._16_4_;
    local_180._20_4_ =
         (uint)bVar9 * (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar81._20_4_ |
         (uint)!bVar9 * local_180._20_4_;
    local_180._24_4_ =
         (uint)bVar21 * (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar81._24_4_ |
         (uint)!bVar21 * local_180._24_4_;
    local_180._28_4_ =
         (uint)bVar22 * (uint)!SUB81(uVar70 >> 7,0) * auVar81._28_4_ |
         (uint)!bVar22 * local_180._28_4_;
    piVar2 = (int *)(param_3 + ((int)uVar71 << 2));
    auVar84._4_4_ = (uint)((byte)(uVar68 >> 1) & 1) * piVar2[1];
    auVar84._0_4_ = (uint)(bVar69 & 1) * *piVar2;
    auVar84._8_4_ = (uint)((byte)(uVar68 >> 2) & 1) * piVar2[2];
    auVar84._12_4_ = (uint)((byte)(uVar68 >> 3) & 1) * piVar2[3];
    auVar84._16_4_ = (uint)((byte)(uVar68 >> 4) & 1) * piVar2[4];
    auVar84._20_4_ = (uint)((byte)(uVar68 >> 5) & 1) * piVar2[5];
    auVar84._24_4_ = (uint)((byte)(uVar68 >> 6) & 1) * piVar2[6];
    auVar84._28_4_ = (uint)(byte)(uVar68 >> 7) * piVar2[7];
    auVar94._0_4_ = (uint)(bVar3 & 1) * iVar72 | (uint)!(bool)(bVar3 & 1) * auVar93._0_4_;
    bVar4 = (bool)((byte)(uVar70 >> 1) & 1);
    auVar94._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar93._4_4_;
    bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
    auVar94._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar93._8_4_;
    bVar4 = (bool)((byte)(uVar70 >> 3) & 1);
    auVar94._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar93._12_4_;
    auVar94._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar93._16_4_;
    auVar94._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar93._20_4_;
    auVar94._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar93._24_4_;
    bVar4 = SUB81(uVar70 >> 7,0);
    auVar94._28_4_ =
         (uint)bVar4 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar4 * auVar93._28_4_;
    auVar77 = vsubps_avx512vl(auVar94,auVar84);
    auVar78 = vmulps_avx512vl(auVar77,local_1c0);
    auVar92 = vmulps_avx512vl(auVar77,local_1a0);
    auVar77 = vmulps_avx512vl(auVar77,local_180);
    auVar93 = vaddps_avx512vl(auVar90,auVar83);
    auVar95._4_4_ = auVar95._0_4_;
    auVar95._8_4_ = auVar95._0_4_;
    auVar95._12_4_ = auVar95._0_4_;
    auVar95._16_4_ = auVar95._0_4_;
    auVar95._20_4_ = auVar95._0_4_;
    auVar95._24_4_ = auVar95._0_4_;
    auVar95._28_4_ = auVar95._0_4_;
    auVar78 = vmulps_avx512vl(auVar95,auVar78);
    auVar92 = vmulps_avx512vl(auVar95,auVar92);
    auVar95 = vmulps_avx512vl(auVar95,auVar77);
    auVar77 = vdivps_avx512vl(auVar78,auVar93);
    auVar78 = vdivps_avx512vl(auVar92,auVar93);
    auVar95 = vdivps_avx512vl(auVar95,auVar93);
    uVar71 = vcmpps_avx512vl(auVar83,ZEXT1632(auVar123),0);
    uVar70 = vcmpps_avx512vl(auVar90,ZEXT1632(auVar123),0);
    uVar71 = uVar71 & uVar70;
    bVar69 = (byte)uVar71;
    auVar96._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar77._0_4_;
    bVar4 = (bool)((byte)(uVar71 >> 1) & 1);
    auVar96._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar77._4_4_;
    bVar4 = (bool)((byte)(uVar71 >> 2) & 1);
    auVar96._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar77._8_4_;
    bVar4 = (bool)((byte)(uVar71 >> 3) & 1);
    auVar96._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar77._12_4_;
    auVar96._16_4_ = (uint)!(bool)((byte)(uVar71 >> 4) & 1) * auVar77._16_4_;
    auVar96._20_4_ = (uint)!(bool)((byte)(uVar71 >> 5) & 1) * auVar77._20_4_;
    auVar96._24_4_ = (uint)!(bool)((byte)(uVar71 >> 6) & 1) * auVar77._24_4_;
    auVar96._28_4_ = (uint)!SUB81(uVar71 >> 7,0) * auVar77._28_4_;
    auVar97._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar78._0_4_;
    bVar4 = (bool)((byte)(uVar71 >> 1) & 1);
    auVar97._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar78._4_4_;
    bVar4 = (bool)((byte)(uVar71 >> 2) & 1);
    auVar97._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar78._8_4_;
    bVar4 = (bool)((byte)(uVar71 >> 3) & 1);
    auVar97._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar78._12_4_;
    auVar97._16_4_ = (uint)!(bool)((byte)(uVar71 >> 4) & 1) * auVar78._16_4_;
    auVar97._20_4_ = (uint)!(bool)((byte)(uVar71 >> 5) & 1) * auVar78._20_4_;
    auVar97._24_4_ = (uint)!(bool)((byte)(uVar71 >> 6) & 1) * auVar78._24_4_;
    bVar4 = SUB81(uVar71 >> 7,0);
    auVar97._28_4_ =
         (uint)bVar4 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar4 * auVar78._28_4_;
    auVar98._0_4_ = (uint)(bVar69 & 1) * iVar72 | (uint)!(bool)(bVar69 & 1) * auVar95._0_4_;
    bVar4 = (bool)((byte)(uVar71 >> 1) & 1);
    auVar98._4_4_ = (uint)bVar4 * iVar99 | (uint)!bVar4 * auVar95._4_4_;
    bVar4 = (bool)((byte)(uVar71 >> 2) & 1);
    auVar98._8_4_ = (uint)bVar4 * iVar100 | (uint)!bVar4 * auVar95._8_4_;
    bVar4 = (bool)((byte)(uVar71 >> 3) & 1);
    auVar98._12_4_ = (uint)bVar4 * iVar101 | (uint)!bVar4 * auVar95._12_4_;
    auVar98._16_4_ = (uint)!(bool)((byte)(uVar71 >> 4) & 1) * auVar95._16_4_;
    auVar98._20_4_ = (uint)!(bool)((byte)(uVar71 >> 5) & 1) * auVar95._20_4_;
    auVar98._24_4_ = (uint)!(bool)((byte)(uVar71 >> 6) & 1) * auVar95._24_4_;
    auVar98._28_4_ = (uint)!SUB81(uVar71 >> 7,0) * auVar95._28_4_;
    uVar71 = vcmpps_avx512vl(ZEXT1632(auVar123),auVar90,1);
    uVar71 = uVar68 & uVar71;
    if ((char)uVar71 != '\0') {
      auVar95 = vfnmadd231ps_avx512vl(auVar87,auVar90,auVar96);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar106,uVar71,auVar95);
      auVar95 = vfnmadd231ps_avx512vl(auVar88,auVar90,auVar97);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar103),uVar71,auVar95);
      auVar95 = vfnmadd231ps_avx512vl(auVar89,auVar90,auVar98);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar104),uVar71,auVar95);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar98,uVar71,auVar90);
    }
    uVar71 = vcmpps_avx512vl(ZEXT1632(auVar123),auVar83,1);
    uVar68 = uVar68 & uVar71;
    if ((char)uVar68 != '\0') {
      auVar95 = vfmadd213ps_avx512vl(auVar96,auVar83,auVar82);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar102,uVar68,auVar95);
      auVar95 = vfmadd213ps_avx512vl(auVar97,auVar83,auVar85);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar103),uVar68,auVar95);
      auVar95 = vfmadd213ps_avx512vl(auVar98,auVar83,auVar86);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar104),uVar68,auVar95);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar102 | auVar108),uVar68,auVar83);
    }
  }
  return;
}

// ApplySpringConstraintsWithWeightMaps_avx512skx @ 14035a6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraintsWithWeightMaps_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,uint param_6)

{
  undefined1 (*pauVar1) [32];
  int *piVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
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
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  ulonglong uVar72;
  undefined8 uVar73;
  ulonglong unaff_RBX;
  uint uVar74;
  ulonglong uVar75;
  undefined1 auVar81 [16];
  undefined1 (*pauVar76) [16];
  ulonglong uVar77;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar78;
  ulonglong uVar79;
  int iVar80;
  int iVar110;
  int iVar111;
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar103 [32];
  int iVar112;
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [16];
  undefined1 auVar116 [32];
  undefined1 auVar117 [16];
  undefined1 auVar118 [32];
  undefined1 auVar119 [16];
  undefined1 auVar120 [32];
  undefined1 auVar121 [16];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  float fVar125;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 auVar126 [32];
  float fVar133;
  undefined1 unaff_XMM15 [16];
  undefined8 in_YMM15_H;
  undefined8 in_register_000015d8;
  undefined1 in_ZMM16 [64];
  undefined1 auVar134 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar135 [16];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 auVar136 [16];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 auVar137 [16];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
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
  int aiStack_138 [4];
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
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined1 auVar104 [32];
  
  auVar87 = in_ZMM16._0_16_;
  auVar136 = in_ZMM25._0_16_;
  auVar137 = in_ZMM27._0_16_;
  auVar86 = in_ZMM24._0_16_;
  auVar85 = in_ZMM23._0_16_;
  auVar134 = in_ZMM19._0_16_;
  auVar84 = in_ZMM22._0_16_;
  auVar83 = in_ZMM21._0_16_;
  auVar135 = in_ZMM20._0_16_;
  uVar74 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar74 = param_6;
  }
  uVar74 = uVar74 & 0xfffffff8;
  if ((int)uVar74 < 1) {
    uVar77 = 0;
  }
  else {
    uVar75 = 0;
    auVar115._4_4_ = __real_00000004;
    auVar115._0_4_ = __real_00000004;
    auVar115._8_4_ = __real_00000004;
    auVar115._12_4_ = __real_00000004;
    auVar100._16_4_ = __real_00000004;
    auVar100._0_16_ = auVar115;
    auVar100._20_4_ = __real_00000004;
    auVar100._24_4_ = __real_00000004;
    auVar100._28_4_ = __real_00000004;
    auVar117._4_4_ = __real_00000008;
    auVar117._0_4_ = __real_00000008;
    auVar117._8_4_ = __real_00000008;
    auVar117._12_4_ = __real_00000008;
    auVar101._16_4_ = __real_00000008;
    auVar101._0_16_ = auVar117;
    auVar101._20_4_ = __real_00000008;
    auVar101._24_4_ = __real_00000008;
    auVar101._28_4_ = __real_00000008;
    auVar119._0_12_ = ZEXT812(0);
    auVar119._12_4_ = 0;
    auVar121._4_4_ = __real_0000000c;
    auVar121._0_4_ = __real_0000000c;
    auVar121._8_4_ = __real_0000000c;
    auVar121._12_4_ = __real_0000000c;
    auVar88 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar87 = auVar88._0_16_;
    uVar77 = 0;
    do {
      auVar89 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + uVar75 * 2));
      auVar90 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x20 + uVar75 * 2));
      auVar91 = vmovdqa64_avx512vl(auVar89);
      auVar91 = vpermt2d_avx512vl(auVar91,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar90);
      auVar91 = vpslld_avx512vl(auVar91,4);
      auVar84 = auVar91._0_16_;
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar74));
      auVar136 = auVar84 | auVar115;
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar137 = auVar84 | auVar117;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_6));
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      auVar89 = vpermt2d_avx512vl(auVar89,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar90);
      auVar89 = vpslld_avx512vl(auVar89,4);
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      in_ZMM28 = ZEXT3264(auVar96);
      vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
      auVar83 = auVar97._0_16_;
      in_ZMM21 = ZEXT3264(auVar97);
      auVar134 = auVar89._0_16_ | auVar117;
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
      auVar85 = auVar98._0_16_;
      in_ZMM23 = ZEXT3264(auVar98);
      auVar135 = auVar89._0_16_ | auVar121;
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar99 = vgatherdps_avx512vl(*param_1);
      auVar86 = auVar99._0_16_;
      in_ZMM24 = ZEXT3264(auVar99);
      auVar81._8_8_ = 0;
      auVar81._0_8_ = *(ulonglong *)(param_4 + uVar77);
      auVar89 = vpmovzxbd_avx2(auVar81);
      auVar89 = vpslld_avx2(auVar89,2);
      vpmovzxdq_avx2(auVar89._16_16_);
      vpmovzxdq_avx2(auVar89._0_16_);
      auVar81 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + uVar75));
      auVar82 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + param_3));
      auVar89 = vsubps_avx512vl(auVar92,auVar96);
      auVar90 = vsubps_avx512vl(auVar93,auVar97);
      auVar91 = vsubps_avx512vl(auVar94,auVar98);
      auVar126._0_4_ =
           auVar91._0_4_ * auVar91._0_4_ +
           auVar89._0_4_ * auVar89._0_4_ + auVar90._0_4_ * auVar90._0_4_;
      auVar126._4_4_ =
           auVar91._4_4_ * auVar91._4_4_ +
           auVar89._4_4_ * auVar89._4_4_ + auVar90._4_4_ * auVar90._4_4_;
      auVar126._8_4_ =
           auVar91._8_4_ * auVar91._8_4_ +
           auVar89._8_4_ * auVar89._8_4_ + auVar90._8_4_ * auVar90._8_4_;
      auVar126._12_4_ =
           auVar91._12_4_ * auVar91._12_4_ +
           auVar89._12_4_ * auVar89._12_4_ + auVar90._12_4_ * auVar90._12_4_;
      auVar126._16_4_ =
           auVar91._16_4_ * auVar91._16_4_ +
           auVar89._16_4_ * auVar89._16_4_ + auVar90._16_4_ * auVar90._16_4_;
      auVar126._20_4_ =
           auVar91._20_4_ * auVar91._20_4_ +
           auVar89._20_4_ * auVar89._20_4_ + auVar90._20_4_ * auVar90._20_4_;
      auVar126._24_4_ =
           auVar91._24_4_ * auVar91._24_4_ +
           auVar89._24_4_ * auVar89._24_4_ + auVar90._24_4_ * auVar90._24_4_;
      auVar126._28_4_ =
           auVar91._28_4_ * auVar91._28_4_ +
           auVar89._28_4_ * auVar89._28_4_ + auVar90._28_4_ * auVar90._28_4_;
      uVar79 = vcmpps_avx512vl(auVar126,auVar88,1);
      auVar103 = vsqrtps_avx(auVar126);
      auVar89 = vdivps_avx(auVar89,auVar103);
      auVar90 = vdivps_avx(auVar90,auVar103);
      auVar91 = vdivps_avx(auVar91,auVar103);
      bVar78 = (byte)uVar79;
      bVar55 = SUB81(uVar79 >> 7,0);
      auVar113._4_4_ = (uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar103._4_4_;
      auVar113._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar103._0_4_;
      auVar113._8_4_ = (uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar103._8_4_;
      auVar113._12_4_ = (uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar103._12_4_;
      auVar113._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar103._16_4_;
      auVar113._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar103._20_4_;
      auVar113._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar103._24_4_;
      bVar56 = SUB81(uVar79 >> 7,0);
      auVar113._28_4_ =
           (uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar56 * auVar103._28_4_;
      unaff_RBX = uVar75 & 0xffffffff;
      auVar103 = vsubps_avx(auVar113,*(undefined1 (*) [32])(param_3 + unaff_RBX));
      fVar125 = auVar103._0_4_;
      fVar127 = auVar103._4_4_;
      fVar128 = auVar103._8_4_;
      fVar129 = auVar103._12_4_;
      fVar130 = auVar103._16_4_;
      fVar131 = auVar103._20_4_;
      fVar132 = auVar103._24_4_;
      fVar133 = auVar103._28_4_;
      bVar56 = (bool)((byte)(uVar79 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar79 >> 2) & 1);
      bVar21 = (bool)((byte)(uVar79 >> 3) & 1);
      bVar34 = (bool)((byte)(uVar79 >> 4) & 1);
      bVar41 = (bool)((byte)(uVar79 >> 5) & 1);
      bVar48 = (bool)((byte)(uVar79 >> 6) & 1);
      bVar57 = SUB81(uVar79 >> 7,0);
      auVar124._0_4_ = (float)((uint)!(bool)(bVar78 & 1) * auVar91._0_4_) * fVar125;
      auVar124._4_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar91._4_4_) * fVar127;
      auVar124._8_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar91._8_4_) * fVar128;
      auVar124._12_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar91._12_4_) * fVar129;
      auVar124._16_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar91._16_4_) * fVar130;
      auVar124._20_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar91._20_4_) * fVar131;
      auVar124._24_4_ = (float)((uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar91._24_4_) * fVar132;
      auVar124._28_4_ = (float)((uint)!SUB81(uVar79 >> 7,0) * auVar91._28_4_) * fVar133;
      auVar91 = vaddps_avx512vl(auVar95,auVar99);
      fVar64 = auVar81._0_4_;
      auVar122._0_4_ =
           (float)((uint)(bVar78 & 1) * (int)fVar125 |
                  (uint)!(bool)(bVar78 & 1) * (int)(fVar125 * auVar89._0_4_)) * fVar64;
      fVar65 = auVar81._4_4_;
      auVar122._4_4_ =
           (float)((uint)bVar56 * (int)fVar127 | (uint)!bVar56 * (int)(fVar127 * auVar89._4_4_)) *
           fVar65;
      fVar66 = auVar81._8_4_;
      auVar122._8_4_ =
           (float)((uint)bVar8 * (int)fVar128 | (uint)!bVar8 * (int)(fVar128 * auVar89._8_4_)) *
           fVar66;
      fVar67 = auVar81._12_4_;
      auVar122._12_4_ =
           (float)((uint)bVar21 * (int)fVar129 | (uint)!bVar21 * (int)(fVar129 * auVar89._12_4_)) *
           fVar67;
      fVar68 = auVar82._0_4_;
      auVar122._16_4_ =
           (float)((uint)bVar34 * (int)fVar130 | (uint)!bVar34 * (int)(fVar130 * auVar89._16_4_)) *
           fVar68;
      fVar69 = auVar82._4_4_;
      auVar122._20_4_ =
           (float)((uint)bVar41 * (int)fVar131 | (uint)!bVar41 * (int)(fVar131 * auVar89._20_4_)) *
           fVar69;
      fVar70 = auVar82._8_4_;
      auVar122._24_4_ =
           (float)((uint)bVar48 * (int)fVar132 | (uint)!bVar48 * (int)(fVar132 * auVar89._24_4_)) *
           fVar70;
      fVar71 = auVar82._12_4_;
      auVar122._28_4_ =
           (float)((uint)bVar57 * (int)fVar133 | (uint)!bVar57 * (int)(fVar133 * auVar89._28_4_)) *
           fVar71;
      auVar123._0_4_ = (float)((uint)!(bool)(bVar78 & 1) * auVar90._0_4_) * fVar125 * fVar64;
      auVar123._4_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar90._4_4_) * fVar127 * fVar65;
      auVar123._8_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar90._8_4_) * fVar128 * fVar66;
      auVar123._12_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar90._12_4_) * fVar129 * fVar67;
      auVar123._16_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar90._16_4_) * fVar130 * fVar68;
      auVar123._20_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar90._20_4_) * fVar131 * fVar69;
      auVar123._24_4_ =
           (float)((uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar90._24_4_) * fVar132 * fVar70;
      auVar123._28_4_ =
           (float)((uint)bVar55 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                  (uint)!bVar55 * auVar90._28_4_) * fVar133 * fVar71;
      auVar116._0_4_ = auVar124._0_4_ * fVar64;
      auVar116._4_4_ = auVar124._4_4_ * fVar65;
      auVar116._8_4_ = auVar124._8_4_ * fVar66;
      auVar116._12_4_ = auVar124._12_4_ * fVar67;
      auVar116._16_4_ = auVar124._16_4_ * fVar68;
      auVar116._20_4_ = auVar124._20_4_ * fVar69;
      auVar116._24_4_ = auVar124._24_4_ * fVar70;
      auVar116._28_4_ = auVar124._28_4_ * fVar71;
      auVar89 = vdivps_avx(auVar122,auVar91);
      auVar90 = vdivps_avx(auVar123,auVar91);
      auVar91 = vdivps_avx(auVar116,auVar91);
      uVar79 = vcmpps_avx512vl(auVar99,ZEXT1632(auVar119),0);
      uVar72 = vcmpps_avx512vl(auVar95,ZEXT1632(auVar119),0);
      uVar79 = uVar79 & uVar72;
      bVar78 = (byte)uVar79;
      auVar103._4_4_ = (uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar89._4_4_;
      auVar103._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar89._0_4_;
      auVar103._8_4_ = (uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar89._8_4_;
      auVar103._12_4_ = (uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar89._12_4_;
      auVar103._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar89._16_4_;
      auVar103._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar89._20_4_;
      auVar103._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar89._24_4_;
      auVar103._28_4_ = (uint)!SUB81(uVar79 >> 7,0) * auVar89._28_4_;
      auVar113 = ZEXT1632(auVar119);
      auVar89._4_4_ = (uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar90._4_4_;
      auVar89._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar90._0_4_;
      auVar89._8_4_ = (uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar90._8_4_;
      auVar89._12_4_ = (uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar90._12_4_;
      auVar89._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar90._16_4_;
      auVar89._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar90._20_4_;
      auVar89._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar90._24_4_;
      bVar56 = SUB81(uVar79 >> 7,0);
      auVar89._28_4_ =
           (uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar56 * auVar90._28_4_;
      auVar90._4_4_ = (uint)!(bool)((byte)(uVar79 >> 1) & 1) * auVar91._4_4_;
      auVar90._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar91._0_4_;
      auVar90._8_4_ = (uint)!(bool)((byte)(uVar79 >> 2) & 1) * auVar91._8_4_;
      auVar90._12_4_ = (uint)!(bool)((byte)(uVar79 >> 3) & 1) * auVar91._12_4_;
      auVar90._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar91._16_4_;
      auVar90._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar91._20_4_;
      auVar90._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar91._24_4_;
      auVar90._28_4_ = (uint)!SUB81(uVar79 >> 7,0) * auVar91._28_4_;
      uVar73 = vcmpps_avx512vl(auVar113,auVar95,1);
      if ((char)uVar73 != '\0') {
        auVar92 = vfnmadd231ps_avx512vl(auVar92,auVar95,auVar103);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar95,uVar73,auVar92);
        auVar93 = vfnmadd231ps_avx512vl(auVar93,auVar95,auVar89);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar103,uVar73,auVar93);
        auVar94 = vfnmadd231ps_avx512vl(auVar94,auVar95,auVar90);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar124,uVar73,auVar94);
        auVar91._16_8_ = in_YMM15_H;
        auVar91._0_16_ = unaff_XMM15;
        auVar91._24_8_ = in_register_000015d8;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar73,auVar95);
      }
      in_ZMM30 = ZEXT3264(auVar94);
      in_ZMM29 = ZEXT3264(auVar93);
      in_ZMM26 = ZEXT3264(auVar92);
      uVar73 = vcmpps_avx512vl(auVar113,auVar99,1);
      if ((char)uVar73 != '\0') {
        auVar91 = vfmadd213ps_avx512vl(auVar103,auVar99,auVar96);
        vscatterdps_avx512vl
                  (ZEXT832(param_1) +
                   ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001,uVar73,
                   auVar91);
        auVar89 = vfmadd213ps_avx512vl(auVar89,auVar99,auVar97);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar100,uVar73,auVar89);
        auVar89 = vfmadd213ps_avx512vl(auVar90,auVar99,auVar98);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar101,uVar73,auVar89);
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar113,uVar73,auVar99);
      }
      uVar77 = uVar77 + 8;
      uVar75 = uVar75 + 0x20;
    } while ((int)uVar77 < (int)uVar74);
  }
  if ((int)uVar77 < (int)param_6) {
    auVar88 = vpbroadcastd_avx512vl();
    auVar88 = vpor_avx2(auVar88,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar100 = vpbroadcastd_avx512vl();
    uVar75 = vpcmpgtd_avx512vl(auVar100,auVar88);
    pauVar1 = (undefined1 (*) [32])(param_2 + (uVar77 & 0xffffffff) * 8);
    bVar78 = (byte)uVar75;
    if (bVar78 == 0xff) {
      auVar95 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,*pauVar1,pauVar1[1]);
      auVar88 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,*pauVar1,pauVar1[1]);
    }
    else {
      auVar88 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + param_5));
      auVar95._4_4_ = (uint)((byte)(uVar75 >> 1) & 1) * auVar88._4_4_;
      auVar95._0_4_ = (uint)(bVar78 & 1) * auVar88._0_4_;
      auVar95._8_4_ = (uint)((byte)(uVar75 >> 2) & 1) * auVar88._8_4_;
      auVar95._12_4_ = (uint)((byte)(uVar75 >> 3) & 1) * auVar88._12_4_;
      auVar95._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * auVar88._16_4_;
      auVar95._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * auVar88._20_4_;
      auVar95._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * auVar88._24_4_;
      auVar95._28_4_ = (uint)(byte)(uVar75 >> 7) * auVar88._28_4_;
      auVar100 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + uVar75));
      auVar88._4_4_ = (uint)((byte)(uVar75 >> 1) & 1) * auVar100._4_4_;
      auVar88._0_4_ = (uint)(bVar78 & 1) * auVar100._0_4_;
      auVar88._8_4_ = (uint)((byte)(uVar75 >> 2) & 1) * auVar100._8_4_;
      auVar88._12_4_ = (uint)((byte)(uVar75 >> 3) & 1) * auVar100._12_4_;
      auVar88._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * auVar100._16_4_;
      auVar88._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * auVar100._20_4_;
      auVar88._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * auVar100._24_4_;
      auVar88._28_4_ = (uint)(byte)(uVar75 >> 7) * auVar100._28_4_;
    }
    auVar116 = vpslld_avx2(auVar95,4);
    auVar114._4_4_ = __real_00000004;
    auVar114._0_4_ = __real_00000004;
    auVar114._8_4_ = __real_00000004;
    auVar114._12_4_ = __real_00000004;
    auVar114._16_4_ = __real_00000004;
    auVar114._20_4_ = __real_00000004;
    auVar114._24_4_ = __real_00000004;
    auVar114._28_4_ = __real_00000004;
    auVar135 = vxorps_avx512vl(auVar135,auVar135);
    auVar100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar75));
    bVar56 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar22 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar83 = vxorps_avx512vl(auVar83,auVar83);
    auVar101 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_138));
    bVar8 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar23 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar118._4_4_ = __real_00000008;
    auVar118._0_4_ = __real_00000008;
    auVar118._8_4_ = __real_00000008;
    auVar118._12_4_ = __real_00000008;
    auVar118._16_4_ = __real_00000008;
    auVar118._20_4_ = __real_00000008;
    auVar118._24_4_ = __real_00000008;
    auVar118._28_4_ = __real_00000008;
    auVar84 = vxorps_avx512vl(auVar84,auVar84);
    auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar21 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar24 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar120._4_4_ = __real_0000000c;
    auVar120._0_4_ = __real_0000000c;
    auVar120._8_4_ = __real_0000000c;
    auVar120._12_4_ = __real_0000000c;
    auVar120._16_4_ = __real_0000000c;
    auVar120._20_4_ = __real_0000000c;
    auVar120._24_4_ = __real_0000000c;
    auVar120._28_4_ = __real_0000000c;
    auVar134 = vxorps_avx512vl(auVar134,auVar134);
    auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar75));
    auVar102._0_4_ = (uint)(bVar78 & 1) * auVar90._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar134._0_4_
    ;
    bVar34 = (bool)((byte)(uVar75 >> 1) & 1);
    auVar102._4_4_ = (uint)bVar34 * auVar90._4_4_ | (uint)!bVar34 * auVar134._4_4_;
    bVar34 = (bool)((byte)(uVar75 >> 2) & 1);
    auVar102._8_4_ = (uint)bVar34 * auVar90._8_4_ | (uint)!bVar34 * auVar134._8_4_;
    bVar34 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar102._12_4_ = (uint)bVar34 * auVar90._12_4_ | (uint)!bVar34 * auVar134._12_4_;
    auVar102._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * auVar90._16_4_;
    auVar102._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * auVar90._20_4_;
    auVar102._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * auVar90._24_4_;
    auVar102._28_4_ = (uint)(byte)(uVar75 >> 7) * auVar90._28_4_;
    auVar113 = vpslld_avx2(auVar88,4);
    auVar85 = vxorps_avx512vl(auVar85,auVar85);
    auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
    bVar34 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar25 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar86 = vxorps_avx512vl(auVar86,auVar86);
    auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar41 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar26 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar134 = vxorps_avx512vl(auVar137,auVar137);
    auVar136 = vxorps_avx512vl(auVar136,auVar136);
    auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    bVar48 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar14 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar27 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar87 = vxorps_avx512vl(auVar87,auVar87);
    auVar103 = vgatherdps_avx512vl(*param_1);
    auVar104._0_4_ = (uint)(bVar78 & 1) * auVar103._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar87._0_4_
    ;
    bVar55 = (bool)((byte)(uVar75 >> 1) & 1);
    auVar104._4_4_ = (uint)bVar55 * auVar103._4_4_ | (uint)!bVar55 * auVar87._4_4_;
    bVar55 = (bool)((byte)(uVar75 >> 2) & 1);
    auVar104._8_4_ = (uint)bVar55 * auVar103._8_4_ | (uint)!bVar55 * auVar87._8_4_;
    bVar55 = (bool)((byte)(uVar75 >> 3) & 1);
    auVar104._12_4_ = (uint)bVar55 * auVar103._12_4_ | (uint)!bVar55 * auVar87._12_4_;
    auVar104._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * auVar103._16_4_;
    auVar104._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * auVar103._20_4_;
    auVar104._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * auVar103._24_4_;
    auVar104._28_4_ = (uint)(byte)(uVar75 >> 7) * auVar103._28_4_;
    bVar55 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar15 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar28 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar35 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar42 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar49 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar58 = SUB81(uVar75 >> 7,0);
    bVar57 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar16 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar29 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar36 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar43 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar50 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar59 = SUB81(uVar75 >> 7,0);
    bVar4 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar17 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar30 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar37 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar44 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar51 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar60 = SUB81(uVar75 >> 7,0);
    bVar5 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar18 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar31 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar38 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar45 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar52 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar61 = SUB81(uVar75 >> 7,0);
    bVar6 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar19 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar32 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar39 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar46 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar53 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar62 = SUB81(uVar75 >> 7,0);
    bVar7 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar20 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar33 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar40 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar47 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar54 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar63 = SUB81(uVar75 >> 7,0);
    auVar92._4_4_ =
         (uint)bVar55 * ((uint)bVar56 * auVar100._4_4_ | (uint)!bVar56 * auVar135._4_4_) |
         (uint)!bVar55 * iStack_fc;
    auVar92._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar100._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar135._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_100;
    auVar92._8_4_ =
         (uint)bVar15 * ((uint)bVar9 * auVar100._8_4_ | (uint)!bVar9 * auVar135._8_4_) |
         (uint)!bVar15 * iStack_f8;
    auVar92._12_4_ =
         (uint)bVar28 * ((uint)bVar22 * auVar100._12_4_ | (uint)!bVar22 * auVar135._12_4_) |
         (uint)!bVar28 * iStack_f4;
    auVar92._16_4_ =
         (uint)bVar35 * (uint)((byte)(uVar75 >> 4) & 1) * auVar100._16_4_ |
         (uint)!bVar35 * iStack_f0;
    auVar92._20_4_ =
         (uint)bVar42 * (uint)((byte)(uVar75 >> 5) & 1) * auVar100._20_4_ |
         (uint)!bVar42 * iStack_ec;
    auVar92._24_4_ =
         (uint)bVar49 * (uint)((byte)(uVar75 >> 6) & 1) * auVar100._24_4_ |
         (uint)!bVar49 * iStack_e8;
    auVar92._28_4_ =
         (uint)bVar58 * (uint)(byte)(uVar75 >> 7) * auVar100._28_4_ | (uint)!bVar58 * iStack_e4;
    auVar93._4_4_ =
         (uint)bVar57 * ((uint)bVar8 * auVar101._4_4_ | (uint)!bVar8 * auVar83._4_4_) |
         (uint)!bVar57 * iStack_dc;
    auVar93._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar101._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar83._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_e0;
    auVar93._8_4_ =
         (uint)bVar16 * ((uint)bVar10 * auVar101._8_4_ | (uint)!bVar10 * auVar83._8_4_) |
         (uint)!bVar16 * iStack_d8;
    auVar93._12_4_ =
         (uint)bVar29 * ((uint)bVar23 * auVar101._12_4_ | (uint)!bVar23 * auVar83._12_4_) |
         (uint)!bVar29 * iStack_d4;
    auVar93._16_4_ =
         (uint)bVar36 * (uint)((byte)(uVar75 >> 4) & 1) * auVar101._16_4_ |
         (uint)!bVar36 * iStack_d0;
    auVar93._20_4_ =
         (uint)bVar43 * (uint)((byte)(uVar75 >> 5) & 1) * auVar101._20_4_ |
         (uint)!bVar43 * iStack_cc;
    auVar93._24_4_ =
         (uint)bVar50 * (uint)((byte)(uVar75 >> 6) & 1) * auVar101._24_4_ |
         (uint)!bVar50 * iStack_c8;
    auVar93._28_4_ =
         (uint)bVar59 * (uint)(byte)(uVar75 >> 7) * auVar101._28_4_ | (uint)!bVar59 * iStack_c4;
    auVar94._4_4_ =
         (uint)bVar4 * ((uint)bVar21 * auVar89._4_4_ | (uint)!bVar21 * auVar84._4_4_) |
         (uint)!bVar4 * iStack_bc;
    auVar94._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar84._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_c0;
    auVar94._8_4_ =
         (uint)bVar17 * ((uint)bVar11 * auVar89._8_4_ | (uint)!bVar11 * auVar84._8_4_) |
         (uint)!bVar17 * iStack_b8;
    auVar94._12_4_ =
         (uint)bVar30 * ((uint)bVar24 * auVar89._12_4_ | (uint)!bVar24 * auVar84._12_4_) |
         (uint)!bVar30 * iStack_b4;
    auVar94._16_4_ =
         (uint)bVar37 * (uint)((byte)(uVar75 >> 4) & 1) * auVar89._16_4_ | (uint)!bVar37 * iStack_b0
    ;
    auVar94._20_4_ =
         (uint)bVar44 * (uint)((byte)(uVar75 >> 5) & 1) * auVar89._20_4_ | (uint)!bVar44 * iStack_ac
    ;
    auVar94._24_4_ =
         (uint)bVar51 * (uint)((byte)(uVar75 >> 6) & 1) * auVar89._24_4_ | (uint)!bVar51 * iStack_a8
    ;
    auVar94._28_4_ =
         (uint)bVar60 * (uint)(byte)(uVar75 >> 7) * auVar89._28_4_ | (uint)!bVar60 * iStack_a4;
    auVar97._4_4_ =
         (uint)bVar5 * ((uint)bVar34 * auVar88._4_4_ | (uint)!bVar34 * auVar85._4_4_) |
         (uint)!bVar5 * iStack_15c;
    auVar97._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar88._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_160;
    auVar97._8_4_ =
         (uint)bVar18 * ((uint)bVar12 * auVar88._8_4_ | (uint)!bVar12 * auVar85._8_4_) |
         (uint)!bVar18 * iStack_158;
    auVar97._12_4_ =
         (uint)bVar31 * ((uint)bVar25 * auVar88._12_4_ | (uint)!bVar25 * auVar85._12_4_) |
         (uint)!bVar31 * iStack_154;
    auVar97._16_4_ =
         (uint)bVar38 * (uint)((byte)(uVar75 >> 4) & 1) * auVar88._16_4_ |
         (uint)!bVar38 * iStack_150;
    auVar97._20_4_ =
         (uint)bVar45 * (uint)((byte)(uVar75 >> 5) & 1) * auVar88._20_4_ |
         (uint)!bVar45 * iStack_14c;
    auVar97._24_4_ =
         (uint)bVar52 * (uint)((byte)(uVar75 >> 6) & 1) * auVar88._24_4_ |
         (uint)!bVar52 * iStack_148;
    auVar97._28_4_ =
         (uint)bVar61 * (uint)(byte)(uVar75 >> 7) * auVar88._28_4_ | (uint)!bVar61 * iStack_144;
    auVar98._4_4_ =
         (uint)bVar6 * ((uint)bVar41 * auVar90._4_4_ | (uint)!bVar41 * auVar86._4_4_) |
         (uint)!bVar6 * iStack_13c;
    auVar98._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar90._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar86._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_140;
    auVar98._8_4_ =
         (uint)bVar19 * ((uint)bVar13 * auVar90._8_4_ | (uint)!bVar13 * auVar86._8_4_) |
         (uint)!bVar19 * aiStack_138[0];
    auVar98._12_4_ =
         (uint)bVar32 * ((uint)bVar26 * auVar90._12_4_ | (uint)!bVar26 * auVar86._12_4_) |
         (uint)!bVar32 * aiStack_138[1];
    auVar98._16_4_ =
         (uint)bVar39 * (uint)((byte)(uVar75 >> 4) & 1) * auVar90._16_4_ |
         (uint)!bVar39 * aiStack_138[2];
    auVar98._20_4_ =
         (uint)bVar46 * (uint)((byte)(uVar75 >> 5) & 1) * auVar90._20_4_ |
         (uint)!bVar46 * aiStack_138[3];
    auVar98._24_4_ =
         (uint)bVar53 * (uint)((byte)(uVar75 >> 6) & 1) * auVar90._24_4_ |
         (uint)!bVar53 * iStack_128;
    auVar98._28_4_ =
         (uint)bVar62 * (uint)(byte)(uVar75 >> 7) * auVar90._28_4_ | (uint)!bVar62 * iStack_124;
    auVar99._4_4_ =
         (uint)bVar7 * ((uint)bVar48 * auVar91._4_4_ | (uint)!bVar48 * auVar136._4_4_) |
         (uint)!bVar7 * iStack_11c;
    auVar99._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar78 & 1) * auVar91._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar136._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_120;
    auVar99._8_4_ =
         (uint)bVar20 * ((uint)bVar14 * auVar91._8_4_ | (uint)!bVar14 * auVar136._8_4_) |
         (uint)!bVar20 * iStack_118;
    auVar99._12_4_ =
         (uint)bVar33 * ((uint)bVar27 * auVar91._12_4_ | (uint)!bVar27 * auVar136._12_4_) |
         (uint)!bVar33 * iStack_114;
    auVar99._16_4_ =
         (uint)bVar40 * (uint)((byte)(uVar75 >> 4) & 1) * auVar91._16_4_ |
         (uint)!bVar40 * iStack_110;
    auVar99._20_4_ =
         (uint)bVar47 * (uint)((byte)(uVar75 >> 5) & 1) * auVar91._20_4_ |
         (uint)!bVar47 * iStack_10c;
    auVar99._24_4_ =
         (uint)bVar54 * (uint)((byte)(uVar75 >> 6) & 1) * auVar91._24_4_ |
         (uint)!bVar54 * iStack_108;
    auVar99._28_4_ =
         (uint)bVar63 * (uint)(byte)(uVar75 >> 7) * auVar91._28_4_ | (uint)!bVar63 * iStack_104;
    auVar88 = vsubps_avx512vl(auVar92,auVar97);
    auVar100 = vsubps_avx512vl(auVar93,auVar98);
    auVar101 = vsubps_avx512vl(auVar94,auVar99);
    auVar89 = vmulps_avx512vl(auVar100,auVar100);
    auVar89 = vfmadd231ps_avx512vl(auVar89,auVar88,auVar88);
    auVar89 = vfmadd231ps_avx512vl(auVar89,auVar101,auVar101);
    auVar90 = vsqrtps_avx512vl(auVar89);
    auVar96._4_4_ = __real_38d1b717;
    auVar96._0_4_ = __real_38d1b717;
    auVar96._8_4_ = __real_38d1b717;
    auVar96._12_4_ = __real_38d1b717;
    auVar96._16_4_ = __real_38d1b717;
    auVar96._20_4_ = __real_38d1b717;
    auVar96._24_4_ = __real_38d1b717;
    auVar96._28_4_ = __real_38d1b717;
    uVar79 = vcmpps_avx512vl(auVar89,auVar96,1);
    auVar91 = vdivps_avx512vl(auVar88,auVar90);
    auVar103 = vdivps_avx512vl(auVar100,auVar90);
    auVar95 = vdivps_avx512vl(auVar101,auVar90);
    auVar96 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
    bVar3 = (byte)uVar79;
    bVar56 = (bool)((byte)(uVar79 >> 1) & 1);
    bVar41 = (bool)((byte)(uVar79 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar79 >> 3) & 1);
    bVar9 = (bool)((byte)(uVar79 >> 4) & 1);
    bVar11 = (bool)((byte)(uVar79 >> 5) & 1);
    bVar13 = (bool)((byte)(uVar79 >> 6) & 1);
    bVar15 = SUB81(uVar79 >> 7,0);
    iVar80 = auVar134._0_4_;
    bVar8 = (bool)((byte)(uVar79 >> 1) & 1);
    iVar110 = auVar134._4_4_;
    bVar48 = (bool)((byte)(uVar79 >> 2) & 1);
    iVar111 = auVar134._8_4_;
    bVar5 = (bool)((byte)(uVar79 >> 3) & 1);
    iVar112 = auVar134._12_4_;
    bVar16 = SUB81(uVar79 >> 7,0);
    bVar21 = (bool)((byte)(uVar79 >> 1) & 1);
    bVar55 = (bool)((byte)(uVar79 >> 2) & 1);
    bVar6 = (bool)((byte)(uVar79 >> 3) & 1);
    local_1c0._0_4_ = auVar88._0_4_;
    local_1c0._4_4_ = auVar88._4_4_;
    local_1c0._8_4_ = auVar88._8_4_;
    local_1c0._12_4_ = auVar88._12_4_;
    local_1c0._16_4_ = auVar88._16_4_;
    local_1c0._20_4_ = auVar88._20_4_;
    local_1c0._24_4_ = auVar88._24_4_;
    local_1c0._28_4_ = auVar88._28_4_;
    bVar34 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar57 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar7 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar10 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar12 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar14 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar17 = SUB81(uVar75 >> 7,0);
    local_1c0._4_4_ =
         (uint)bVar34 * ((uint)bVar56 * auVar96._4_4_ | (uint)!bVar56 * auVar91._4_4_) |
         (uint)!bVar34 * local_1c0._4_4_;
    local_1c0._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar3 & 1) * auVar96._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar91._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_1c0._0_4_;
    local_1c0._8_4_ =
         (uint)bVar57 * ((uint)bVar41 * auVar96._8_4_ | (uint)!bVar41 * auVar91._8_4_) |
         (uint)!bVar57 * local_1c0._8_4_;
    local_1c0._12_4_ =
         (uint)bVar7 * ((uint)bVar4 * auVar96._12_4_ | (uint)!bVar4 * auVar91._12_4_) |
         (uint)!bVar7 * local_1c0._12_4_;
    local_1c0._16_4_ =
         (uint)bVar10 * ((uint)bVar9 * auVar96._16_4_ | (uint)!bVar9 * auVar91._16_4_) |
         (uint)!bVar10 * local_1c0._16_4_;
    local_1c0._20_4_ =
         (uint)bVar12 * ((uint)bVar11 * auVar96._20_4_ | (uint)!bVar11 * auVar91._20_4_) |
         (uint)!bVar12 * local_1c0._20_4_;
    local_1c0._24_4_ =
         (uint)bVar14 * ((uint)bVar13 * auVar96._24_4_ | (uint)!bVar13 * auVar91._24_4_) |
         (uint)!bVar14 * local_1c0._24_4_;
    local_1c0._28_4_ =
         (uint)bVar17 * ((uint)bVar15 * auVar96._28_4_ | (uint)!bVar15 * auVar91._28_4_) |
         (uint)!bVar17 * local_1c0._28_4_;
    local_1a0._0_4_ = auVar100._0_4_;
    local_1a0._4_4_ = auVar100._4_4_;
    local_1a0._8_4_ = auVar100._8_4_;
    local_1a0._12_4_ = auVar100._12_4_;
    local_1a0._16_4_ = auVar100._16_4_;
    local_1a0._20_4_ = auVar100._20_4_;
    local_1a0._24_4_ = auVar100._24_4_;
    local_1a0._28_4_ = auVar100._28_4_;
    bVar56 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar34 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar41 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar57 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar4 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar9 = SUB81(uVar75 >> 7,0);
    local_1a0._4_4_ =
         (uint)bVar56 * ((uint)bVar8 * iVar110 | (uint)!bVar8 * auVar103._4_4_) |
         (uint)!bVar56 * local_1a0._4_4_;
    local_1a0._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar3 & 1) * iVar80 | (uint)!(bool)(bVar3 & 1) * auVar103._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_1a0._0_4_;
    local_1a0._8_4_ =
         (uint)bVar34 * ((uint)bVar48 * iVar111 | (uint)!bVar48 * auVar103._8_4_) |
         (uint)!bVar34 * local_1a0._8_4_;
    local_1a0._12_4_ =
         (uint)bVar41 * ((uint)bVar5 * iVar112 | (uint)!bVar5 * auVar103._12_4_) |
         (uint)!bVar41 * local_1a0._12_4_;
    local_1a0._16_4_ =
         (uint)bVar57 * (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar103._16_4_ |
         (uint)!bVar57 * local_1a0._16_4_;
    local_1a0._20_4_ =
         (uint)bVar4 * (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar103._20_4_ |
         (uint)!bVar4 * local_1a0._20_4_;
    local_1a0._24_4_ =
         (uint)bVar7 * (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar103._24_4_ |
         (uint)!bVar7 * local_1a0._24_4_;
    local_1a0._28_4_ =
         (uint)bVar9 *
         ((uint)bVar16 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar16 * auVar103._28_4_) | (uint)!bVar9 * local_1a0._28_4_;
    local_180._0_4_ = auVar101._0_4_;
    local_180._4_4_ = auVar101._4_4_;
    local_180._8_4_ = auVar101._8_4_;
    local_180._12_4_ = auVar101._12_4_;
    local_180._16_4_ = auVar101._16_4_;
    local_180._20_4_ = auVar101._20_4_;
    local_180._24_4_ = auVar101._24_4_;
    local_180._28_4_ = auVar101._28_4_;
    bVar56 = (bool)((byte)(uVar75 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar75 >> 2) & 1);
    bVar34 = (bool)((byte)(uVar75 >> 3) & 1);
    bVar41 = (bool)((byte)(uVar75 >> 4) & 1);
    bVar48 = (bool)((byte)(uVar75 >> 5) & 1);
    bVar57 = (bool)((byte)(uVar75 >> 6) & 1);
    bVar4 = SUB81(uVar75 >> 7,0);
    local_180._4_4_ =
         (uint)bVar56 * ((uint)bVar21 * iVar110 | (uint)!bVar21 * auVar95._4_4_) |
         (uint)!bVar56 * local_180._4_4_;
    local_180._0_4_ =
         (uint)(bVar78 & 1) *
         ((uint)(bVar3 & 1) * iVar80 | (uint)!(bool)(bVar3 & 1) * auVar95._0_4_) |
         (uint)!(bool)(bVar78 & 1) * local_180._0_4_;
    local_180._8_4_ =
         (uint)bVar8 * ((uint)bVar55 * iVar111 | (uint)!bVar55 * auVar95._8_4_) |
         (uint)!bVar8 * local_180._8_4_;
    local_180._12_4_ =
         (uint)bVar34 * ((uint)bVar6 * iVar112 | (uint)!bVar6 * auVar95._12_4_) |
         (uint)!bVar34 * local_180._12_4_;
    local_180._16_4_ =
         (uint)bVar41 * (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar95._16_4_ |
         (uint)!bVar41 * local_180._16_4_;
    local_180._20_4_ =
         (uint)bVar48 * (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar95._20_4_ |
         (uint)!bVar48 * local_180._20_4_;
    local_180._24_4_ =
         (uint)bVar57 * (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar95._24_4_ |
         (uint)!bVar57 * local_180._24_4_;
    local_180._28_4_ =
         (uint)bVar4 * (uint)!SUB81(uVar79 >> 7,0) * auVar95._28_4_ |
         (uint)!bVar4 * local_180._28_4_;
    auVar105._0_4_ = (uint)(bVar3 & 1) * iVar80 | (uint)!(bool)(bVar3 & 1) * auVar90._0_4_;
    bVar56 = (bool)((byte)(uVar79 >> 1) & 1);
    auVar105._4_4_ = (uint)bVar56 * iVar110 | (uint)!bVar56 * auVar90._4_4_;
    bVar56 = (bool)((byte)(uVar79 >> 2) & 1);
    auVar105._8_4_ = (uint)bVar56 * iVar111 | (uint)!bVar56 * auVar90._8_4_;
    bVar56 = (bool)((byte)(uVar79 >> 3) & 1);
    auVar105._12_4_ = (uint)bVar56 * iVar112 | (uint)!bVar56 * auVar90._12_4_;
    auVar105._16_4_ = (uint)!(bool)((byte)(uVar79 >> 4) & 1) * auVar90._16_4_;
    auVar105._20_4_ = (uint)!(bool)((byte)(uVar79 >> 5) & 1) * auVar90._20_4_;
    auVar105._24_4_ = (uint)!(bool)((byte)(uVar79 >> 6) & 1) * auVar90._24_4_;
    bVar56 = SUB81(uVar79 >> 7,0);
    auVar105._28_4_ =
         (uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar56 * auVar90._28_4_;
    piVar2 = (int *)(param_3 + ((int)uVar77 << 2));
    auVar106._4_4_ = (uint)((byte)(uVar75 >> 1) & 1) * piVar2[1];
    auVar106._0_4_ = (uint)(bVar78 & 1) * *piVar2;
    auVar106._8_4_ = (uint)((byte)(uVar75 >> 2) & 1) * piVar2[2];
    auVar106._12_4_ = (uint)((byte)(uVar75 >> 3) & 1) * piVar2[3];
    auVar106._16_4_ = (uint)((byte)(uVar75 >> 4) & 1) * piVar2[4];
    auVar106._20_4_ = (uint)((byte)(uVar75 >> 5) & 1) * piVar2[5];
    auVar106._24_4_ = (uint)((byte)(uVar75 >> 6) & 1) * piVar2[6];
    auVar106._28_4_ = (uint)(byte)(uVar75 >> 7) * piVar2[7];
    pauVar76 = (undefined1 (*) [16])(param_4 + (uVar77 & 0xffffffff));
    if ((~bVar78 & 0x81) == 0) {
      uVar77 = *(ulonglong *)*pauVar76;
    }
    else {
      auVar83 = vmovdqu8_avx512vl(*pauVar76);
      uVar77 = CONCAT17((char)(uVar75 >> 7) * auVar83[7],
                        CONCAT16(((byte)(uVar75 >> 6) & 1) * auVar83[6],
                                 CONCAT15(((byte)(uVar75 >> 5) & 1) * auVar83[5],
                                          CONCAT14(((byte)(uVar75 >> 4) & 1) * auVar83[4],
                                                   CONCAT13(((byte)(uVar75 >> 3) & 1) * auVar83[3],
                                                            CONCAT12(((byte)(uVar75 >> 2) & 1) *
                                                                     auVar83[2],
                                                                     CONCAT11(((byte)(uVar75 >> 1) &
                                                                              1) * auVar83[1],
                                                                              (bVar78 & 1) *
                                                                              auVar83[0])))))));
    }
    auVar83._8_8_ = 0;
    auVar83._0_8_ = uVar77;
    auVar88 = vsubps_avx512vl(auVar105,auVar106);
    auVar100 = vmulps_avx512vl(auVar88,local_1c0);
    auVar101 = vmulps_avx512vl(auVar88,local_1a0);
    auVar90 = vpmovzxbd_avx512vl(auVar83);
    auVar90 = vpslld_avx512vl(auVar90,2);
    auVar83 = vextracti32x4_avx512vl(auVar90,1);
    vpmovzxdq_avx512vl(auVar83);
    auVar90 = vpmovzxdq_avx512vl(auVar90._0_16_);
    auVar83 = vxorps_avx512vl(auVar89._0_16_,auVar89._0_16_);
    auVar85 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + unaff_R12));
    bVar8 = (bool)((byte)(uVar75 >> 1) & 1);
    auVar86 = vxorps_avx512vl(auVar90._0_16_,auVar90._0_16_);
    auVar87 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + unaff_R14));
    bVar56 = (bool)(bVar78 >> 4 & 1);
    auVar134._0_8_ = (ulonglong)bVar56 * auVar87._0_8_ | (ulonglong)!bVar56 * auVar86._0_8_;
    bVar56 = (bool)(bVar78 >> 5 & 1);
    auVar134._8_8_ = (ulonglong)bVar56 * auVar87._8_8_ | (ulonglong)!bVar56 * auVar86._8_8_;
    auVar88 = vmulps_avx512vl(auVar88,local_180);
    auVar89 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)bVar8 * auVar85._8_8_ |
                                           (ulonglong)!bVar8 * auVar83._8_8_,
                                           (ulonglong)(bVar78 & 1) * auVar85._0_8_ |
                                           (ulonglong)!(bool)(bVar78 & 1) * auVar83._0_8_)),auVar134
                         ,1);
    auVar90 = vaddps_avx512vl(auVar102,auVar104);
    auVar100 = vmulps_avx512vl(auVar100,auVar89);
    auVar101 = vmulps_avx512vl(auVar101,auVar89);
    auVar88 = vmulps_avx512vl(auVar88,auVar89);
    auVar100 = vdivps_avx512vl(auVar100,auVar90);
    auVar89 = vdivps_avx512vl(auVar101,auVar90);
    auVar88 = vdivps_avx512vl(auVar88,auVar90);
    auVar83 = vxorps_avx512vl(auVar101._0_16_,auVar101._0_16_);
    uVar77 = vcmpps_avx512vl(auVar104,ZEXT1632(auVar83),0);
    uVar79 = vcmpps_avx512vl(auVar102,ZEXT1632(auVar83),0);
    uVar77 = uVar77 & uVar79;
    bVar78 = (byte)uVar77;
    iVar80 = auVar83._0_4_;
    auVar107._0_4_ = (uint)(bVar78 & 1) * iVar80 | (uint)!(bool)(bVar78 & 1) * auVar100._0_4_;
    bVar56 = (bool)((byte)(uVar77 >> 1) & 1);
    iVar110 = auVar83._4_4_;
    auVar107._4_4_ = (uint)bVar56 * iVar110 | (uint)!bVar56 * auVar100._4_4_;
    bVar56 = (bool)((byte)(uVar77 >> 2) & 1);
    iVar111 = auVar83._8_4_;
    auVar107._8_4_ = (uint)bVar56 * iVar111 | (uint)!bVar56 * auVar100._8_4_;
    bVar56 = (bool)((byte)(uVar77 >> 3) & 1);
    iVar112 = auVar83._12_4_;
    auVar107._12_4_ = (uint)bVar56 * iVar112 | (uint)!bVar56 * auVar100._12_4_;
    auVar107._16_4_ = (uint)!(bool)((byte)(uVar77 >> 4) & 1) * auVar100._16_4_;
    auVar107._20_4_ = (uint)!(bool)((byte)(uVar77 >> 5) & 1) * auVar100._20_4_;
    auVar107._24_4_ = (uint)!(bool)((byte)(uVar77 >> 6) & 1) * auVar100._24_4_;
    bVar56 = SUB81(uVar77 >> 7,0);
    auVar107._28_4_ =
         (uint)bVar56 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar56 * auVar100._28_4_
    ;
    auVar108._0_4_ = (uint)(bVar78 & 1) * iVar80 | (uint)!(bool)(bVar78 & 1) * auVar89._0_4_;
    bVar56 = (bool)((byte)(uVar77 >> 1) & 1);
    auVar108._4_4_ = (uint)bVar56 * iVar110 | (uint)!bVar56 * auVar89._4_4_;
    bVar56 = (bool)((byte)(uVar77 >> 2) & 1);
    auVar108._8_4_ = (uint)bVar56 * iVar111 | (uint)!bVar56 * auVar89._8_4_;
    bVar56 = (bool)((byte)(uVar77 >> 3) & 1);
    auVar108._12_4_ = (uint)bVar56 * iVar112 | (uint)!bVar56 * auVar89._12_4_;
    auVar108._16_4_ = (uint)!(bool)((byte)(uVar77 >> 4) & 1) * auVar89._16_4_;
    auVar108._20_4_ = (uint)!(bool)((byte)(uVar77 >> 5) & 1) * auVar89._20_4_;
    auVar108._24_4_ = (uint)!(bool)((byte)(uVar77 >> 6) & 1) * auVar89._24_4_;
    auVar108._28_4_ = (uint)!SUB81(uVar77 >> 7,0) * auVar89._28_4_;
    auVar109._0_4_ = (uint)(bVar78 & 1) * iVar80 | (uint)!(bool)(bVar78 & 1) * auVar88._0_4_;
    bVar56 = (bool)((byte)(uVar77 >> 1) & 1);
    auVar109._4_4_ = (uint)bVar56 * iVar110 | (uint)!bVar56 * auVar88._4_4_;
    bVar56 = (bool)((byte)(uVar77 >> 2) & 1);
    auVar109._8_4_ = (uint)bVar56 * iVar111 | (uint)!bVar56 * auVar88._8_4_;
    bVar56 = (bool)((byte)(uVar77 >> 3) & 1);
    auVar109._12_4_ = (uint)bVar56 * iVar112 | (uint)!bVar56 * auVar88._12_4_;
    auVar109._16_4_ = (uint)!(bool)((byte)(uVar77 >> 4) & 1) * auVar88._16_4_;
    auVar109._20_4_ = (uint)!(bool)((byte)(uVar77 >> 5) & 1) * auVar88._20_4_;
    auVar109._24_4_ = (uint)!(bool)((byte)(uVar77 >> 6) & 1) * auVar88._24_4_;
    auVar109._28_4_ = (uint)!SUB81(uVar77 >> 7,0) * auVar88._28_4_;
    uVar77 = vcmpps_avx512vl(ZEXT1632(auVar83),auVar102,1);
    uVar77 = uVar75 & uVar77;
    if ((char)uVar77 != '\0') {
      auVar88 = vfnmadd231ps_avx512vl(auVar92,auVar102,auVar107);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar116,uVar77,auVar88);
      auVar88 = vfnmadd231ps_avx512vl(auVar93,auVar102,auVar108);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar116 | auVar114),uVar77,auVar88);
      auVar88 = vfnmadd231ps_avx512vl(auVar94,auVar102,auVar109);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar113 | auVar114),uVar77,auVar88);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar116,uVar77,auVar102);
    }
    uVar77 = vcmpps_avx512vl(ZEXT1632(auVar83),auVar104,1);
    uVar75 = uVar75 & uVar77;
    if ((char)uVar75 != '\0') {
      auVar88 = vfmadd213ps_avx512vl(auVar107,auVar104,auVar97);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar113,uVar75,auVar88);
      auVar88 = vfmadd213ps_avx512vl(auVar108,auVar104,auVar98);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar113 | auVar114),uVar75,auVar88);
      auVar88 = vfmadd213ps_avx512vl(auVar109,auVar104,auVar99);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar113 | auVar118),uVar75,auVar88);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar113 | auVar120),uVar75,auVar104);
    }
  }
  return;
}


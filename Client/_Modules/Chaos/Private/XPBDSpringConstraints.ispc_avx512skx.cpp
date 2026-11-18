// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// ApplyXPBDSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCuni_avx512skx @ 1409078a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,float param_5
               ,float param_6,uint param_7)

{
  float fVar1;
  float fVar5;
  float *pfVar7;
  float *pfVar8;
  undefined1 (*pauVar9) [32];
  int *piVar10;
  uint *puVar11;
  byte bVar12;
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
  bool bVar64;
  bool bVar65;
  bool bVar66;
  float fVar67;
  ulonglong uVar68;
  uint uVar69;
  ulonglong uVar70;
  longlong lVar71;
  longlong unaff_RBX;
  ulonglong uVar72;
  ulonglong unaff_RDI;
  uint uVar73;
  longlong unaff_R13;
  longlong unaff_R14;
  byte bVar74;
  int iVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  int iVar105;
  int iVar106;
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
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
  int iVar107;
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar108 [32];
  float fVar109;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar110 [32];
  float fVar117;
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar121 [16];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 auVar122 [16];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM31 [64];
  undefined1 auStack_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  int local_180;
  int iStack_17c;
  int aiStack_178 [4];
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
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  
  auVar103 = ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001;
  auVar102 = ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000;
  auVar122 = in_ZMM28._0_16_;
  auVar81 = in_ZMM21._0_16_;
  auVar80 = in_ZMM25._0_16_;
  auVar121 = in_ZMM24._0_16_;
  auVar79 = in_ZMM20._0_16_;
  auVar78 = in_ZMM23._0_16_;
  auVar77 = in_ZMM22._0_16_;
  uVar73 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar73 = param_7;
  }
  uVar73 = uVar73 & 0xfffffff8;
  if ((int)uVar73 < 1) {
    uVar70 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar67 = param_5 * param_6 * param_5;
    auVar104._4_4_ = fVar67;
    auVar104._0_4_ = fVar67;
    auVar104._8_4_ = fVar67;
    auVar104._12_4_ = fVar67;
    auVar104._16_4_ = fVar67;
    auVar104._20_4_ = fVar67;
    auVar104._24_4_ = fVar67;
    auVar104._28_4_ = fVar67;
    auVar82._4_4_ = __real_80000000;
    auVar82._0_4_ = __real_80000000;
    auVar82._8_4_ = __real_80000000;
    auVar82._12_4_ = __real_80000000;
    auVar82._16_4_ = __real_80000000;
    auVar82._20_4_ = __real_80000000;
    auVar82._24_4_ = __real_80000000;
    auVar82._28_4_ = __real_80000000;
    auVar82 = vxorps_avx512vl(auVar104,auVar82);
    uVar70 = 0;
    auVar83 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar84 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar85 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar76 = vxorps_avx512vl(in_ZMM19._0_16_,in_ZMM19._0_16_);
    auVar86 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar79 = auVar86._0_16_;
    auVar87 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
    auVar81 = auVar87._0_16_;
    uVar72 = 0;
    do {
      auVar88 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + uVar72 * 2));
      auVar89 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x20 + uVar72 * 2));
      auVar90 = vmovdqa64_avx512vl(auVar88);
      auVar90 = vpermt2d_avx512vl(auVar90,auVar102,auVar89);
      auVar88 = vpermt2d_avx512vl(auVar88,auVar103,auVar89);
      auVar91 = vpslld_avx512vl(auVar90,4);
      auVar88 = vpslld_avx512vl(auVar88,4);
      auVar77 = auVar88._0_16_;
      vxorps_avx512vl(in_ZMM25._0_16_,in_ZMM25._0_16_);
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RDI));
      auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar72));
      auVar80 = auVar93._0_16_;
      in_ZMM25 = ZEXT3264(auVar93);
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RDI));
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar73));
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_7));
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      unaff_RDI = uVar72 & 0xffffffff;
      pfVar7 = (float *)(param_4 + unaff_RDI);
      fVar67 = pfVar7[1];
      fVar5 = pfVar7[2];
      fVar6 = pfVar7[3];
      fVar1 = pfVar7[4];
      fVar2 = pfVar7[5];
      fVar3 = pfVar7[6];
      fVar4 = pfVar7[7];
      auVar88 = vsubps_avx512vl(auVar92,auVar93);
      auVar89 = vsubps_avx512vl(auVar94,auVar95);
      auVar90 = vsubps_avx512vl(auVar96,auVar97);
      auVar108._0_4_ =
           auVar90._0_4_ * auVar90._0_4_ +
           auVar88._0_4_ * auVar88._0_4_ + auVar89._0_4_ * auVar89._0_4_;
      auVar108._4_4_ =
           auVar90._4_4_ * auVar90._4_4_ +
           auVar88._4_4_ * auVar88._4_4_ + auVar89._4_4_ * auVar89._4_4_;
      auVar108._8_4_ =
           auVar90._8_4_ * auVar90._8_4_ +
           auVar88._8_4_ * auVar88._8_4_ + auVar89._8_4_ * auVar89._8_4_;
      auVar108._12_4_ =
           auVar90._12_4_ * auVar90._12_4_ +
           auVar88._12_4_ * auVar88._12_4_ + auVar89._12_4_ * auVar89._12_4_;
      auVar108._16_4_ =
           auVar90._16_4_ * auVar90._16_4_ +
           auVar88._16_4_ * auVar88._16_4_ + auVar89._16_4_ * auVar89._16_4_;
      auVar108._20_4_ =
           auVar90._20_4_ * auVar90._20_4_ +
           auVar88._20_4_ * auVar88._20_4_ + auVar89._20_4_ * auVar89._20_4_;
      auVar108._24_4_ =
           auVar90._24_4_ * auVar90._24_4_ +
           auVar88._24_4_ * auVar88._24_4_ + auVar89._24_4_ * auVar89._24_4_;
      auVar108._28_4_ =
           auVar90._28_4_ * auVar90._28_4_ +
           auVar88._28_4_ * auVar88._28_4_ + auVar89._28_4_ * auVar89._28_4_;
      auVar100 = vsqrtps_avx(auVar108);
      uVar68 = vcmpps_avx512vl(auVar108,auVar86,1);
      auVar88 = vdivps_avx(auVar88,auVar100);
      auVar89 = vdivps_avx(auVar89,auVar100);
      auVar90 = vdivps_avx(auVar90,auVar100);
      bVar74 = (byte)uVar68;
      iVar75 = auVar76._0_4_;
      auVar118._0_4_ = (uint)(bVar74 & 1) * iVar75 | (uint)!(bool)(bVar74 & 1) * auVar100._0_4_;
      bVar13 = (bool)((byte)(uVar68 >> 1) & 1);
      iVar105 = auVar76._4_4_;
      auVar118._4_4_ = (uint)bVar13 * iVar105 | (uint)!bVar13 * auVar100._4_4_;
      bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
      iVar106 = auVar76._8_4_;
      auVar118._8_4_ = (uint)bVar13 * iVar106 | (uint)!bVar13 * auVar100._8_4_;
      bVar13 = (bool)((byte)(uVar68 >> 3) & 1);
      iVar107 = auVar76._12_4_;
      auVar118._12_4_ = (uint)bVar13 * iVar107 | (uint)!bVar13 * auVar100._12_4_;
      auVar118._16_4_ = (uint)!(bool)((byte)(uVar68 >> 4) & 1) * auVar100._16_4_;
      auVar118._20_4_ = (uint)!(bool)((byte)(uVar68 >> 5) & 1) * auVar100._20_4_;
      auVar118._24_4_ = (uint)!(bool)((byte)(uVar68 >> 6) & 1) * auVar100._24_4_;
      bVar13 = SUB81(uVar68 >> 7,0);
      auVar118._28_4_ =
           (uint)bVar13 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar13 * auVar100._28_4_;
      auVar100 = vsubps_avx(auVar118,*(undefined1 (*) [32])(param_3 + unaff_RDI));
      auVar120._0_4_ = auVar98._0_4_ + auVar99._0_4_;
      auVar120._4_4_ = auVar98._4_4_ + auVar99._4_4_;
      auVar120._8_4_ = auVar98._8_4_ + auVar99._8_4_;
      auVar120._12_4_ = auVar98._12_4_ + auVar99._12_4_;
      auVar120._16_4_ = auVar98._16_4_ + auVar99._16_4_;
      auVar120._20_4_ = auVar98._20_4_ + auVar99._20_4_;
      auVar120._24_4_ = auVar98._24_4_ + auVar99._24_4_;
      auVar120._28_4_ = auVar98._28_4_ + auVar99._28_4_;
      auVar110._0_4_ = auVar82._0_4_ * auVar100._0_4_ - *pfVar7;
      auVar110._4_4_ = auVar82._4_4_ * auVar100._4_4_ - fVar67;
      auVar110._8_4_ = auVar82._8_4_ * auVar100._8_4_ - fVar5;
      auVar110._12_4_ = auVar82._12_4_ * auVar100._12_4_ - fVar6;
      auVar110._16_4_ = auVar82._16_4_ * auVar100._16_4_ - fVar1;
      auVar110._20_4_ = auVar82._20_4_ * auVar100._20_4_ - fVar2;
      auVar110._24_4_ = auVar82._24_4_ * auVar100._24_4_ - fVar3;
      auVar110._28_4_ = auVar82._28_4_ * auVar100._28_4_ - fVar4;
      auVar100 = vfmadd213ps_avx512vl(auVar120,auVar104,auVar87);
      auVar100 = vdivps_avx(auVar110,auVar100);
      fVar109 = auVar100._0_4_;
      fVar111 = auVar100._4_4_;
      fVar112 = auVar100._8_4_;
      fVar113 = auVar100._12_4_;
      fVar114 = auVar100._16_4_;
      fVar115 = auVar100._20_4_;
      fVar116 = auVar100._24_4_;
      fVar117 = auVar100._28_4_;
      auVar101._0_4_ =
           (uint)(bVar74 & 1) * (int)fVar109 |
           (uint)!(bool)(bVar74 & 1) * (int)(fVar109 * auVar88._0_4_);
      bVar13 = (bool)((byte)(uVar68 >> 1) & 1);
      auVar101._4_4_ = (uint)bVar13 * (int)fVar111 | (uint)!bVar13 * (int)(fVar111 * auVar88._4_4_);
      bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
      auVar101._8_4_ = (uint)bVar13 * (int)fVar112 | (uint)!bVar13 * (int)(fVar112 * auVar88._8_4_);
      bVar13 = (bool)((byte)(uVar68 >> 3) & 1);
      auVar101._12_4_ =
           (uint)bVar13 * (int)fVar113 | (uint)!bVar13 * (int)(fVar113 * auVar88._12_4_);
      bVar13 = (bool)((byte)(uVar68 >> 4) & 1);
      auVar101._16_4_ =
           (uint)bVar13 * (int)fVar114 | (uint)!bVar13 * (int)(fVar114 * auVar88._16_4_);
      bVar13 = (bool)((byte)(uVar68 >> 5) & 1);
      auVar101._20_4_ =
           (uint)bVar13 * (int)fVar115 | (uint)!bVar13 * (int)(fVar115 * auVar88._20_4_);
      bVar13 = (bool)((byte)(uVar68 >> 6) & 1);
      auVar101._24_4_ =
           (uint)bVar13 * (int)fVar116 | (uint)!bVar13 * (int)(fVar116 * auVar88._24_4_);
      bVar13 = SUB81(uVar68 >> 7,0);
      auVar101._28_4_ =
           (uint)bVar13 * (int)fVar117 | (uint)!bVar13 * (int)(fVar117 * auVar88._28_4_);
      pfVar8 = (float *)(param_4 + unaff_RDI);
      *pfVar8 = *pfVar7 + fVar109;
      pfVar8[1] = fVar67 + fVar111;
      pfVar8[2] = fVar5 + fVar112;
      pfVar8[3] = fVar6 + fVar113;
      pfVar8[4] = fVar1 + fVar114;
      pfVar8[5] = fVar2 + fVar115;
      pfVar8[6] = fVar3 + fVar116;
      pfVar8[7] = fVar4 + fVar117;
      auVar88 = vfmadd231ps_avx512vl(auVar92,auVar98,auVar101);
      auVar121 = auVar88._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar83),0xffff,auVar88);
      auVar88._0_4_ = (uint)(bVar74 & 1) * iVar75 | (uint)!(bool)(bVar74 & 1) * auVar89._0_4_;
      bVar13 = (bool)((byte)(uVar68 >> 1) & 1);
      auVar88._4_4_ = (uint)bVar13 * iVar105 | (uint)!bVar13 * auVar89._4_4_;
      bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
      auVar88._8_4_ = (uint)bVar13 * iVar106 | (uint)!bVar13 * auVar89._8_4_;
      bVar13 = (bool)((byte)(uVar68 >> 3) & 1);
      auVar88._12_4_ = (uint)bVar13 * iVar107 | (uint)!bVar13 * auVar89._12_4_;
      auVar88._16_4_ = (uint)!(bool)((byte)(uVar68 >> 4) & 1) * auVar89._16_4_;
      auVar88._20_4_ = (uint)!(bool)((byte)(uVar68 >> 5) & 1) * auVar89._20_4_;
      auVar88._24_4_ = (uint)!(bool)((byte)(uVar68 >> 6) & 1) * auVar89._24_4_;
      auVar88._28_4_ = (uint)!SUB81(uVar68 >> 7,0) * auVar89._28_4_;
      auVar89 = vmulps_avx512vl(auVar88,auVar100);
      auVar78 = auVar89._0_16_;
      auVar100 = vfmadd231ps_avx512vl(auVar94,auVar98,auVar89);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar83),0xffff,auVar100);
      auVar100._0_4_ =
           (float)((uint)(bVar74 & 1) * iVar75 | (uint)!(bool)(bVar74 & 1) * auVar90._0_4_);
      bVar13 = (bool)((byte)(uVar68 >> 1) & 1);
      auVar100._4_4_ = (float)((uint)bVar13 * iVar105 | (uint)!bVar13 * auVar90._4_4_);
      bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
      auVar100._8_4_ = (float)((uint)bVar13 * iVar106 | (uint)!bVar13 * auVar90._8_4_);
      bVar13 = (bool)((byte)(uVar68 >> 3) & 1);
      auVar100._12_4_ = (float)((uint)bVar13 * iVar107 | (uint)!bVar13 * auVar90._12_4_);
      fVar67 = (float)((uint)!(bool)((byte)(uVar68 >> 4) & 1) * auVar90._16_4_);
      auVar100._16_4_ = fVar67;
      fVar5 = (float)((uint)!(bool)((byte)(uVar68 >> 5) & 1) * auVar90._20_4_);
      auVar100._20_4_ = fVar5;
      fVar6 = (float)((uint)!(bool)((byte)(uVar68 >> 6) & 1) * auVar90._24_4_);
      auVar100._24_4_ = fVar6;
      bVar13 = SUB81(uVar68 >> 7,0);
      auVar100._28_4_ =
           (float)((uint)bVar13 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                  (uint)!bVar13 * auVar90._28_4_);
      auVar92._0_4_ = auVar100._0_4_ * fVar109;
      auVar92._4_4_ = auVar100._4_4_ * fVar111;
      auVar92._8_4_ = auVar100._8_4_ * fVar112;
      auVar92._12_4_ = auVar100._12_4_ * fVar113;
      auVar92._16_4_ = fVar67 * fVar114;
      auVar92._20_4_ = fVar5 * fVar115;
      auVar92._24_4_ = fVar6 * fVar116;
      auVar92._28_4_ = auVar100._28_4_ * fVar117;
      auVar90 = vfmadd231ps_avx512vl(auVar96,auVar98,auVar92);
      in_ZMM31 = ZEXT3264(auVar90);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar84),0xffff,auVar90);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar85),0xffff,auVar98);
      auVar90 = vfnmadd213ps_avx512vl(auVar101,auVar99,auVar93);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar99,0xffff,auVar90);
      auVar89 = vfnmadd231ps_avx512vl(auVar95,auVar99,auVar89);
      in_ZMM26 = ZEXT3264(auVar89);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar98,0xffff,auVar89);
      auVar89 = vfnmadd231ps_avx512vl(auVar97,auVar99,auVar92);
      in_ZMM28 = ZEXT3264(auVar89);
      auVar122 = auVar89._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar88,0xffff,auVar89);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar100,0xffff,auVar99);
      uVar72 = uVar72 + 0x20;
      uVar69 = (int)uVar70 + 8;
      uVar70 = (ulonglong)uVar69;
    } while ((int)uVar69 < (int)uVar73);
    if ((int)param_7 <= (int)uVar69) {
      return;
    }
  }
  auVar102 = vpbroadcastd_avx512vl();
  auVar102 = vpor_avx2(auVar102,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar103 = vpbroadcastd_avx512vl();
  uVar72 = vpcmpgtd_avx512vl(auVar103,auVar102);
  pauVar9 = (undefined1 (*) [32])(param_2 + uVar70 * 8);
  bVar74 = (byte)uVar72;
  if (bVar74 == 0xff) {
    auVar102 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                 ,*pauVar9,pauVar9[1]);
    auVar103 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                 ,*pauVar9,pauVar9[1]);
  }
  else {
    auVar103 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar9 + uVar70));
    auVar102._4_4_ = (uint)((byte)(uVar72 >> 1) & 1) * auVar103._4_4_;
    auVar102._0_4_ = (uint)(bVar74 & 1) * auVar103._0_4_;
    auVar102._8_4_ = (uint)((byte)(uVar72 >> 2) & 1) * auVar103._8_4_;
    auVar102._12_4_ = (uint)((byte)(uVar72 >> 3) & 1) * auVar103._12_4_;
    auVar102._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * auVar103._16_4_;
    auVar102._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * auVar103._20_4_;
    auVar102._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * auVar103._24_4_;
    auVar102._28_4_ = (uint)(byte)(uVar72 >> 7) * auVar103._28_4_;
    auVar82 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar9 + uVar70));
    auVar103._4_4_ = (uint)((byte)(uVar72 >> 1) & 1) * auVar82._4_4_;
    auVar103._0_4_ = (uint)(bVar74 & 1) * auVar82._0_4_;
    auVar103._8_4_ = (uint)((byte)(uVar72 >> 2) & 1) * auVar82._8_4_;
    auVar103._12_4_ = (uint)((byte)(uVar72 >> 3) & 1) * auVar82._12_4_;
    auVar103._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * auVar82._16_4_;
    auVar103._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * auVar82._20_4_;
    auVar103._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * auVar82._24_4_;
    auVar103._28_4_ = (uint)(byte)(uVar72 >> 7) * auVar82._28_4_;
  }
  auVar99 = vpslld_avx2(auVar102,4);
  auVar97._4_4_ = __real_00000004;
  auVar97._0_4_ = __real_00000004;
  auVar97._8_4_ = __real_00000004;
  auVar97._12_4_ = __real_00000004;
  auVar97._16_4_ = __real_00000004;
  auVar97._20_4_ = __real_00000004;
  auVar97._24_4_ = __real_00000004;
  auVar97._28_4_ = __real_00000004;
  auVar102 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar9));
  auVar77 = vxorps_avx512vl(auVar77,auVar77);
  auVar82 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  bVar13 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar23 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar104 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
  auVar78 = vxorps_avx512vl(auVar78,auVar78);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
  bVar14 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar72 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar79 = vxorps_avx512vl(auVar79,auVar79);
  auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar9));
  auVar91._0_4_ = (uint)(bVar74 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar79._0_4_;
  bVar15 = (bool)((byte)(uVar72 >> 1) & 1);
  auVar91._4_4_ = (uint)bVar15 * auVar84._4_4_ | (uint)!bVar15 * auVar79._4_4_;
  bVar15 = (bool)((byte)(uVar72 >> 2) & 1);
  auVar91._8_4_ = (uint)bVar15 * auVar84._8_4_ | (uint)!bVar15 * auVar79._8_4_;
  bVar15 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar91._12_4_ = (uint)bVar15 * auVar84._12_4_ | (uint)!bVar15 * auVar79._12_4_;
  auVar91._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * auVar84._16_4_;
  auVar91._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * auVar84._20_4_;
  auVar91._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * auVar84._24_4_;
  auVar91._28_4_ = (uint)(byte)(uVar72 >> 7) * auVar84._28_4_;
  auVar118 = vpslld_avx2(auVar103,4);
  auVar79 = vxorps_avx512vl(auVar121,auVar121);
  auVar103 = vgatherdps_avx512vl(*param_1);
  bVar15 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar25 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar35 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar70));
  auVar80 = vxorps_avx512vl(auVar80,auVar80);
  auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar16 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar26 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar36 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  auVar93._0_4_ = (uint)(bVar74 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar17 = (bool)((byte)(uVar72 >> 1) & 1);
  auVar93._4_4_ = (uint)bVar17 * auVar84._4_4_ | (uint)!bVar17 * auVar81._4_4_;
  bVar17 = (bool)((byte)(uVar72 >> 2) & 1);
  auVar93._8_4_ = (uint)bVar17 * auVar84._8_4_ | (uint)!bVar17 * auVar81._8_4_;
  bVar17 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar93._12_4_ = (uint)bVar17 * auVar84._12_4_ | (uint)!bVar17 * auVar81._12_4_;
  auVar93._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * auVar84._16_4_;
  auVar93._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * auVar84._20_4_;
  auVar93._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * auVar84._24_4_;
  auVar93._28_4_ = (uint)(byte)(uVar72 >> 7) * auVar84._28_4_;
  bVar17 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar27 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar37 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar43 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar49 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar55 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar61 = SUB81(uVar72 >> 7,0);
  bVar18 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar28 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar38 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar44 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar50 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar56 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar62 = SUB81(uVar72 >> 7,0);
  bVar19 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar29 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar39 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar45 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar51 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar57 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar63 = SUB81(uVar72 >> 7,0);
  bVar20 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar30 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar40 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar46 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar52 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar58 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar64 = SUB81(uVar72 >> 7,0);
  bVar21 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar31 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar41 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar47 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar53 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar59 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar65 = SUB81(uVar72 >> 7,0);
  bVar22 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar32 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar42 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar48 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar54 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar60 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar66 = SUB81(uVar72 >> 7,0);
  lVar71 = (longlong)((int)uVar70 << 2);
  piVar10 = (int *)(param_3 + lVar71);
  auVar94._4_4_ = (uint)((byte)(uVar72 >> 1) & 1) * piVar10[1];
  auVar94._0_4_ = (uint)(bVar74 & 1) * *piVar10;
  auVar94._8_4_ = (uint)((byte)(uVar72 >> 2) & 1) * piVar10[2];
  auVar94._12_4_ = (uint)((byte)(uVar72 >> 3) & 1) * piVar10[3];
  auVar94._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * piVar10[4];
  auVar94._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * piVar10[5];
  auVar94._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * piVar10[6];
  auVar94._28_4_ = (uint)(byte)(uVar72 >> 7) * piVar10[7];
  piVar10 = (int *)(param_4 + lVar71);
  fVar67 = (float)((uint)(bVar74 & 1) * *piVar10);
  fVar5 = (float)((uint)((byte)(uVar72 >> 1) & 1) * piVar10[1]);
  auVar95._4_4_ = fVar5;
  auVar95._0_4_ = fVar67;
  fVar6 = (float)((uint)((byte)(uVar72 >> 2) & 1) * piVar10[2]);
  auVar95._8_4_ = fVar6;
  fVar1 = (float)((uint)((byte)(uVar72 >> 3) & 1) * piVar10[3]);
  auVar95._12_4_ = fVar1;
  fVar2 = (float)((uint)((byte)(uVar72 >> 4) & 1) * piVar10[4]);
  auVar95._16_4_ = fVar2;
  fVar3 = (float)((uint)((byte)(uVar72 >> 5) & 1) * piVar10[5]);
  auVar95._20_4_ = fVar3;
  fVar4 = (float)((uint)((byte)(uVar72 >> 6) & 1) * piVar10[6]);
  auVar95._24_4_ = fVar4;
  fVar109 = (float)((uint)(byte)(uVar72 >> 7) * piVar10[7]);
  auVar95._28_4_ = fVar109;
  auVar87._4_4_ =
       (uint)bVar17 * (uint)((byte)(uVar72 >> 1) & 1) * auVar102._4_4_ | (uint)!bVar17 * iStack_11c;
  auVar87._0_4_ =
       (uint)(bVar74 & 1) * (uint)(bVar74 & 1) * auVar102._0_4_ |
       (uint)!(bool)(bVar74 & 1) * local_120;
  auVar87._8_4_ =
       (uint)bVar27 * (uint)((byte)(uVar72 >> 2) & 1) * auVar102._8_4_ | (uint)!bVar27 * iStack_118;
  auVar87._12_4_ =
       (uint)bVar37 * (uint)((byte)(uVar72 >> 3) & 1) * auVar102._12_4_ | (uint)!bVar37 * iStack_114
  ;
  auVar87._16_4_ =
       (uint)bVar43 * (uint)((byte)(uVar72 >> 4) & 1) * auVar102._16_4_ | (uint)!bVar43 * iStack_110
  ;
  auVar87._20_4_ =
       (uint)bVar49 * (uint)((byte)(uVar72 >> 5) & 1) * auVar102._20_4_ | (uint)!bVar49 * iStack_10c
  ;
  auVar87._24_4_ =
       (uint)bVar55 * (uint)((byte)(uVar72 >> 6) & 1) * auVar102._24_4_ | (uint)!bVar55 * iStack_108
  ;
  auVar87._28_4_ =
       (uint)bVar61 * (uint)(byte)(uVar72 >> 7) * auVar102._28_4_ | (uint)!bVar61 * iStack_104;
  auVar89._4_4_ =
       (uint)bVar18 * ((uint)bVar13 * auVar82._4_4_ | (uint)!bVar13 * auVar77._4_4_) |
       (uint)!bVar18 * iStack_fc;
  auVar89._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar82._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar77._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_100;
  auVar89._8_4_ =
       (uint)bVar28 * ((uint)bVar23 * auVar82._8_4_ | (uint)!bVar23 * auVar77._8_4_) |
       (uint)!bVar28 * iStack_f8;
  auVar89._12_4_ =
       (uint)bVar38 * ((uint)bVar33 * auVar82._12_4_ | (uint)!bVar33 * auVar77._12_4_) |
       (uint)!bVar38 * iStack_f4;
  auVar89._16_4_ =
       (uint)bVar44 * (uint)((byte)(uVar72 >> 4) & 1) * auVar82._16_4_ | (uint)!bVar44 * iStack_f0;
  auVar89._20_4_ =
       (uint)bVar50 * (uint)((byte)(uVar72 >> 5) & 1) * auVar82._20_4_ | (uint)!bVar50 * iStack_ec;
  auVar89._24_4_ =
       (uint)bVar56 * (uint)((byte)(uVar72 >> 6) & 1) * auVar82._24_4_ | (uint)!bVar56 * iStack_e8;
  auVar89._28_4_ =
       (uint)bVar62 * (uint)(byte)(uVar72 >> 7) * auVar82._28_4_ | (uint)!bVar62 * iStack_e4;
  auVar90._4_4_ =
       (uint)bVar19 * ((uint)bVar14 * auVar83._4_4_ | (uint)!bVar14 * auVar78._4_4_) |
       (uint)!bVar19 * iStack_dc;
  auVar90._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar78._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_e0;
  auVar90._8_4_ =
       (uint)bVar29 * ((uint)bVar24 * auVar83._8_4_ | (uint)!bVar24 * auVar78._8_4_) |
       (uint)!bVar29 * iStack_d8;
  auVar90._12_4_ =
       (uint)bVar39 * ((uint)bVar34 * auVar83._12_4_ | (uint)!bVar34 * auVar78._12_4_) |
       (uint)!bVar39 * iStack_d4;
  auVar90._16_4_ =
       (uint)bVar45 * (uint)((byte)(uVar72 >> 4) & 1) * auVar83._16_4_ | (uint)!bVar45 * iStack_d0;
  auVar90._20_4_ =
       (uint)bVar51 * (uint)((byte)(uVar72 >> 5) & 1) * auVar83._20_4_ | (uint)!bVar51 * iStack_cc;
  auVar90._24_4_ =
       (uint)bVar57 * (uint)((byte)(uVar72 >> 6) & 1) * auVar83._24_4_ | (uint)!bVar57 * iStack_c8;
  auVar90._28_4_ =
       (uint)bVar63 * (uint)(byte)(uVar72 >> 7) * auVar83._28_4_ | (uint)!bVar63 * iStack_c4;
  auVar84._4_4_ =
       (uint)bVar20 * ((uint)bVar15 * auVar103._4_4_ | (uint)!bVar15 * auVar79._4_4_) |
       (uint)!bVar20 * iStack_17c;
  auVar84._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar103._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar79._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_180;
  auVar84._8_4_ =
       (uint)bVar30 * ((uint)bVar25 * auVar103._8_4_ | (uint)!bVar25 * auVar79._8_4_) |
       (uint)!bVar30 * aiStack_178[0];
  auVar84._12_4_ =
       (uint)bVar40 * ((uint)bVar35 * auVar103._12_4_ | (uint)!bVar35 * auVar79._12_4_) |
       (uint)!bVar40 * aiStack_178[1];
  auVar84._16_4_ =
       (uint)bVar46 * (uint)((byte)(uVar72 >> 4) & 1) * auVar103._16_4_ |
       (uint)!bVar46 * aiStack_178[2];
  auVar84._20_4_ =
       (uint)bVar52 * (uint)((byte)(uVar72 >> 5) & 1) * auVar103._20_4_ |
       (uint)!bVar52 * aiStack_178[3];
  auVar84._24_4_ =
       (uint)bVar58 * (uint)((byte)(uVar72 >> 6) & 1) * auVar103._24_4_ | (uint)!bVar58 * iStack_168
  ;
  auVar84._28_4_ =
       (uint)bVar64 * (uint)(byte)(uVar72 >> 7) * auVar103._28_4_ | (uint)!bVar64 * iStack_164;
  auVar79 = vxorps_avx512vl(auVar122,auVar122);
  auVar85._4_4_ =
       (uint)bVar21 * (uint)((byte)(uVar72 >> 1) & 1) * auVar86._4_4_ | (uint)!bVar21 * iStack_15c;
  auVar85._0_4_ =
       (uint)(bVar74 & 1) * (uint)(bVar74 & 1) * auVar86._0_4_ |
       (uint)!(bool)(bVar74 & 1) * local_160;
  auVar85._8_4_ =
       (uint)bVar31 * (uint)((byte)(uVar72 >> 2) & 1) * auVar86._8_4_ | (uint)!bVar31 * iStack_158;
  auVar85._12_4_ =
       (uint)bVar41 * (uint)((byte)(uVar72 >> 3) & 1) * auVar86._12_4_ | (uint)!bVar41 * iStack_154;
  auVar85._16_4_ =
       (uint)bVar47 * (uint)((byte)(uVar72 >> 4) & 1) * auVar86._16_4_ | (uint)!bVar47 * iStack_150;
  auVar85._20_4_ =
       (uint)bVar53 * (uint)((byte)(uVar72 >> 5) & 1) * auVar86._20_4_ | (uint)!bVar53 * iStack_14c;
  auVar85._24_4_ =
       (uint)bVar59 * (uint)((byte)(uVar72 >> 6) & 1) * auVar86._24_4_ | (uint)!bVar59 * iStack_148;
  auVar85._28_4_ =
       (uint)bVar65 * (uint)(byte)(uVar72 >> 7) * auVar86._28_4_ | (uint)!bVar65 * iStack_144;
  auVar86._4_4_ =
       (uint)bVar22 * ((uint)bVar16 * auVar88._4_4_ | (uint)!bVar16 * auVar80._4_4_) |
       (uint)!bVar22 * iStack_13c;
  auVar86._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar88._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar80._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_140;
  auVar86._8_4_ =
       (uint)bVar32 * ((uint)bVar26 * auVar88._8_4_ | (uint)!bVar26 * auVar80._8_4_) |
       (uint)!bVar32 * iStack_138;
  auVar86._12_4_ =
       (uint)bVar42 * ((uint)bVar36 * auVar88._12_4_ | (uint)!bVar36 * auVar80._12_4_) |
       (uint)!bVar42 * iStack_134;
  auVar86._16_4_ =
       (uint)bVar48 * (uint)((byte)(uVar72 >> 4) & 1) * auVar88._16_4_ | (uint)!bVar48 * iStack_130;
  auVar86._20_4_ =
       (uint)bVar54 * (uint)((byte)(uVar72 >> 5) & 1) * auVar88._20_4_ | (uint)!bVar54 * iStack_12c;
  auVar86._24_4_ =
       (uint)bVar60 * (uint)((byte)(uVar72 >> 6) & 1) * auVar88._24_4_ | (uint)!bVar60 * iStack_128;
  auVar86._28_4_ =
       (uint)bVar66 * (uint)(byte)(uVar72 >> 7) * auVar88._28_4_ | (uint)!bVar66 * iStack_124;
  auVar103 = vsubps_avx512vl(auVar87,auVar84);
  auVar82 = vsubps_avx512vl(auVar89,auVar85);
  auVar88 = vsubps_avx512vl(auVar90,auVar86);
  auVar102 = vmulps_avx512vl(auVar82,auVar82);
  auVar102 = vfmadd231ps_avx512vl(auVar102,auVar103,auVar103);
  auVar100 = vfmadd231ps_avx512vl(auVar102,auVar88,auVar88);
  auVar102 = vsqrtps_avx(auVar100);
  auVar83._4_4_ = __real_38d1b717;
  auVar83._0_4_ = __real_38d1b717;
  auVar83._8_4_ = __real_38d1b717;
  auVar83._12_4_ = __real_38d1b717;
  auVar83._16_4_ = __real_38d1b717;
  auVar83._20_4_ = __real_38d1b717;
  auVar83._24_4_ = __real_38d1b717;
  auVar83._28_4_ = __real_38d1b717;
  uVar70 = vcmpps_avx512vl(auVar100,auVar83,1);
  auVar83 = vdivps_avx512vl(auVar103,auVar102);
  auVar100 = vdivps_avx512vl(auVar82,auVar102);
  auVar119._4_4_ = __real_3f800000;
  auVar119._0_4_ = __real_3f800000;
  auVar119._8_4_ = __real_3f800000;
  auVar119._12_4_ = __real_3f800000;
  auVar119._16_4_ = __real_3f800000;
  auVar119._20_4_ = __real_3f800000;
  auVar119._24_4_ = __real_3f800000;
  auVar119._28_4_ = __real_3f800000;
  auVar92 = vdivps_avx512vl(auVar88,auVar102);
  bVar12 = (byte)uVar70;
  bVar13 = (bool)((byte)(uVar70 >> 1) & 1);
  bVar17 = (bool)((byte)(uVar70 >> 2) & 1);
  bVar21 = (bool)((byte)(uVar70 >> 3) & 1);
  bVar25 = (bool)((byte)(uVar70 >> 4) & 1);
  bVar27 = (bool)((byte)(uVar70 >> 5) & 1);
  bVar29 = (bool)((byte)(uVar70 >> 6) & 1);
  bVar31 = SUB81(uVar70 >> 7,0);
  iVar75 = auVar79._0_4_;
  bVar14 = (bool)((byte)(uVar70 >> 1) & 1);
  iVar105 = auVar79._4_4_;
  bVar18 = (bool)((byte)(uVar70 >> 2) & 1);
  iVar106 = auVar79._8_4_;
  bVar22 = (bool)((byte)(uVar70 >> 3) & 1);
  iVar107 = auVar79._12_4_;
  bVar32 = SUB81(uVar70 >> 7,0);
  bVar15 = (bool)((byte)(uVar70 >> 1) & 1);
  bVar19 = (bool)((byte)(uVar70 >> 2) & 1);
  bVar23 = (bool)((byte)(uVar70 >> 3) & 1);
  auStack_1e0._0_4_ = auVar103._0_4_;
  auStack_1e0._4_4_ = auVar103._4_4_;
  auStack_1e0._8_4_ = auVar103._8_4_;
  auStack_1e0._12_4_ = auVar103._12_4_;
  auStack_1e0._16_4_ = auVar103._16_4_;
  auStack_1e0._20_4_ = auVar103._20_4_;
  auStack_1e0._24_4_ = auVar103._24_4_;
  auStack_1e0._28_4_ = auVar103._28_4_;
  bVar16 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar24 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar26 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar28 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar30 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar33 = SUB81(uVar72 >> 7,0);
  auStack_1e0._4_4_ =
       (uint)bVar16 * (bVar13 * __real_3f800000 | (uint)!bVar13 * auVar83._4_4_) |
       (uint)!bVar16 * auStack_1e0._4_4_;
  auStack_1e0._0_4_ =
       (uint)(bVar74 & 1) *
       ((bVar12 & 1) * __real_3f800000 | (uint)!(bool)(bVar12 & 1) * auVar83._0_4_) |
       (uint)!(bool)(bVar74 & 1) * auStack_1e0._0_4_;
  auStack_1e0._8_4_ =
       (uint)bVar20 * (bVar17 * __real_3f800000 | (uint)!bVar17 * auVar83._8_4_) |
       (uint)!bVar20 * auStack_1e0._8_4_;
  auStack_1e0._12_4_ =
       (uint)bVar24 * (bVar21 * __real_3f800000 | (uint)!bVar21 * auVar83._12_4_) |
       (uint)!bVar24 * auStack_1e0._12_4_;
  auStack_1e0._16_4_ =
       (uint)bVar26 * (bVar25 * __real_3f800000 | (uint)!bVar25 * auVar83._16_4_) |
       (uint)!bVar26 * auStack_1e0._16_4_;
  auStack_1e0._20_4_ =
       (uint)bVar28 * (bVar27 * __real_3f800000 | (uint)!bVar27 * auVar83._20_4_) |
       (uint)!bVar28 * auStack_1e0._20_4_;
  auStack_1e0._24_4_ =
       (uint)bVar30 * (bVar29 * __real_3f800000 | (uint)!bVar29 * auVar83._24_4_) |
       (uint)!bVar30 * auStack_1e0._24_4_;
  auStack_1e0._28_4_ =
       (uint)bVar33 * (bVar31 * __real_3f800000 | (uint)!bVar31 * auVar83._28_4_) |
       (uint)!bVar33 * auStack_1e0._28_4_;
  local_1c0._0_4_ = auVar82._0_4_;
  local_1c0._4_4_ = auVar82._4_4_;
  local_1c0._8_4_ = auVar82._8_4_;
  local_1c0._12_4_ = auVar82._12_4_;
  local_1c0._16_4_ = auVar82._16_4_;
  local_1c0._20_4_ = auVar82._20_4_;
  local_1c0._24_4_ = auVar82._24_4_;
  local_1c0._28_4_ = auVar82._28_4_;
  bVar13 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar20 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar21 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar24 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar25 = SUB81(uVar72 >> 7,0);
  local_1c0._4_4_ =
       (uint)bVar13 * ((uint)bVar14 * iVar105 | (uint)!bVar14 * auVar100._4_4_) |
       (uint)!bVar13 * local_1c0._4_4_;
  local_1c0._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar12 & 1) * iVar75 | (uint)!(bool)(bVar12 & 1) * auVar100._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_1c0._0_4_;
  local_1c0._8_4_ =
       (uint)bVar16 * ((uint)bVar18 * iVar106 | (uint)!bVar18 * auVar100._8_4_) |
       (uint)!bVar16 * local_1c0._8_4_;
  local_1c0._12_4_ =
       (uint)bVar17 * ((uint)bVar22 * iVar107 | (uint)!bVar22 * auVar100._12_4_) |
       (uint)!bVar17 * local_1c0._12_4_;
  local_1c0._16_4_ =
       (uint)bVar20 * (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar100._16_4_ |
       (uint)!bVar20 * local_1c0._16_4_;
  local_1c0._20_4_ =
       (uint)bVar21 * (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar100._20_4_ |
       (uint)!bVar21 * local_1c0._20_4_;
  local_1c0._24_4_ =
       (uint)bVar24 * (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar100._24_4_ |
       (uint)!bVar24 * local_1c0._24_4_;
  local_1c0._28_4_ =
       (uint)bVar25 *
       ((uint)bVar32 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar32 * auVar100._28_4_)
       | (uint)!bVar25 * local_1c0._28_4_;
  local_1a0._0_4_ = auVar88._0_4_;
  local_1a0._4_4_ = auVar88._4_4_;
  local_1a0._8_4_ = auVar88._8_4_;
  local_1a0._12_4_ = auVar88._12_4_;
  local_1a0._16_4_ = auVar88._16_4_;
  local_1a0._20_4_ = auVar88._20_4_;
  local_1a0._24_4_ = auVar88._24_4_;
  local_1a0._28_4_ = auVar88._28_4_;
  bVar13 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar14 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar21 = SUB81(uVar72 >> 7,0);
  local_1a0._4_4_ =
       (uint)bVar13 * ((uint)bVar15 * iVar105 | (uint)!bVar15 * auVar92._4_4_) |
       (uint)!bVar13 * local_1a0._4_4_;
  local_1a0._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar12 & 1) * iVar75 | (uint)!(bool)(bVar12 & 1) * auVar92._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_1a0._0_4_;
  local_1a0._8_4_ =
       (uint)bVar14 * ((uint)bVar19 * iVar106 | (uint)!bVar19 * auVar92._8_4_) |
       (uint)!bVar14 * local_1a0._8_4_;
  local_1a0._12_4_ =
       (uint)bVar16 * ((uint)bVar23 * iVar107 | (uint)!bVar23 * auVar92._12_4_) |
       (uint)!bVar16 * local_1a0._12_4_;
  local_1a0._16_4_ =
       (uint)bVar17 * (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar92._16_4_ |
       (uint)!bVar17 * local_1a0._16_4_;
  local_1a0._20_4_ =
       (uint)bVar18 * (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar92._20_4_ |
       (uint)!bVar18 * local_1a0._20_4_;
  local_1a0._24_4_ =
       (uint)bVar20 * (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar92._24_4_ |
       (uint)!bVar20 * local_1a0._24_4_;
  local_1a0._28_4_ =
       (uint)bVar21 * (uint)!SUB81(uVar70 >> 7,0) * auVar92._28_4_ |
       (uint)!bVar21 * local_1a0._28_4_;
  auVar96._0_4_ = (uint)(bVar12 & 1) * iVar75 | (uint)!(bool)(bVar12 & 1) * auVar102._0_4_;
  bVar13 = (bool)((byte)(uVar70 >> 1) & 1);
  auVar96._4_4_ = (uint)bVar13 * iVar105 | (uint)!bVar13 * auVar102._4_4_;
  bVar13 = (bool)((byte)(uVar70 >> 2) & 1);
  auVar96._8_4_ = (uint)bVar13 * iVar106 | (uint)!bVar13 * auVar102._8_4_;
  bVar13 = (bool)((byte)(uVar70 >> 3) & 1);
  auVar96._12_4_ = (uint)bVar13 * iVar107 | (uint)!bVar13 * auVar102._12_4_;
  auVar96._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar102._16_4_;
  auVar96._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar102._20_4_;
  auVar96._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar102._24_4_;
  bVar13 = SUB81(uVar70 >> 7,0);
  auVar96._28_4_ =
       (uint)bVar13 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar13 * auVar102._28_4_;
  auVar102 = vsubps_avx(auVar96,auVar94);
  auVar80 = vmulss_avx512f(ZEXT416((uint)(param_5 * param_6)),ZEXT416((uint)param_5));
  auVar103 = vbroadcastss_avx512vl(auVar80);
  auVar82 = vaddps_avx512vl(auVar91,auVar93);
  auVar102 = vfnmsub213ps_avx512vl(auVar102,auVar103,auVar95);
  auVar103 = vfmadd213ps_avx512vl(auVar82,auVar103,auVar119);
  auVar102 = vdivps_avx512vl(auVar102,auVar103);
  auVar103 = vmulps_avx512vl(auVar102,auStack_1e0);
  auVar82 = vmulps_avx512vl(auVar102,local_1c0);
  auVar83 = vmulps_avx512vl(auVar102,local_1a0);
  auVar98._0_4_ = fVar67 + auVar102._0_4_;
  auVar98._4_4_ = fVar5 + auVar102._4_4_;
  auVar98._8_4_ = fVar6 + auVar102._8_4_;
  auVar98._12_4_ = fVar1 + auVar102._12_4_;
  auVar98._16_4_ = fVar2 + auVar102._16_4_;
  auVar98._20_4_ = fVar3 + auVar102._20_4_;
  auVar98._24_4_ = fVar4 + auVar102._24_4_;
  auVar98._28_4_ = fVar109 + auVar102._28_4_;
  puVar11 = (uint *)(param_4 + lVar71);
  bVar13 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar14 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar15 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar16 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar17 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar18 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar19 = SUB81(uVar72 >> 7,0);
  *puVar11 = (uint)(bVar74 & 1) * (int)auVar98._0_4_ | (uint)!(bool)(bVar74 & 1) * *puVar11;
  puVar11[1] = (uint)bVar13 * (int)auVar98._4_4_ | (uint)!bVar13 * puVar11[1];
  puVar11[2] = (uint)bVar14 * (int)auVar98._8_4_ | (uint)!bVar14 * puVar11[2];
  puVar11[3] = (uint)bVar15 * (int)auVar98._12_4_ | (uint)!bVar15 * puVar11[3];
  puVar11[4] = (uint)bVar16 * (int)auVar98._16_4_ | (uint)!bVar16 * puVar11[4];
  puVar11[5] = (uint)bVar17 * (int)auVar98._20_4_ | (uint)!bVar17 * puVar11[5];
  puVar11[6] = (uint)bVar18 * (int)auVar98._24_4_ | (uint)!bVar18 * puVar11[6];
  puVar11[7] = (uint)bVar19 * (int)auVar98._28_4_ | (uint)!bVar19 * puVar11[7];
  auVar102 = vfmadd231ps_avx512vl(auVar87,auVar91,auVar103);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar99,uVar72,auVar102);
  auVar102 = vfmadd231ps_avx512vl(auVar89,auVar91,auVar82);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar99 | auVar97),uVar72,auVar102);
  auVar102 = vfmadd231ps_avx512vl(auVar90,auVar91,auVar83);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar99 | auVar104),uVar72,auVar102);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar99,uVar72,auVar91);
  auVar102 = vfnmadd213ps_avx512vl(auVar103,auVar93,auVar84);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar118,uVar72,auVar102);
  auVar102 = vfnmadd213ps_avx512vl(auVar82,auVar93,auVar85);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar98,uVar72,auVar102);
  auVar102 = vfnmadd213ps_avx512vl(auVar83,auVar93,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar95,uVar72,auVar102);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar99 | auVar97),uVar72,auVar93);
  return;
}

// ApplyXPBDSpringConstraintsWithDamping___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_avx512skx @ 140907f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDamping___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_avx512skx
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,float param_7,float param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  int *piVar3;
  uint *puVar4;
  byte bVar5;
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
  ulonglong uVar61;
  undefined1 auVar62 [32];
  undefined4 uVar63;
  undefined4 uVar64;
  int iVar65;
  uint uVar66;
  longlong lVar67;
  ulonglong unaff_RBX;
  uint uVar68;
  ulonglong uVar69;
  uint uVar70;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar71;
  undefined1 auVar81 [16];
  int iVar72;
  int iVar123;
  int iVar125;
  float fVar131;
  float fVar133;
  float fVar135;
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar74 [16];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
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
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  float fVar73;
  float fVar124;
  float fVar126;
  int iVar128;
  float fVar129;
  float fVar137;
  undefined1 auVar110 [32];
  undefined1 auVar78 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar111 [32];
  undefined1 auVar79 [16];
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
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
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
  float fVar153;
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 auVar157 [16];
  undefined1 in_ZMM30 [64];
  undefined1 auVar158 [16];
  undefined1 in_ZMM31 [64];
  undefined1 local_340 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [8];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined4 auStack_2d8 [4];
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint local_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  undefined1 local_260 [32];
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
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
  undefined1 auVar80 [16];
  float fVar127;
  float fVar130;
  float fVar132;
  float fVar134;
  float fVar136;
  
  uVar66 = __real_0000000c;
  iVar65 = __real_3f800000;
  uVar64 = __real_38d1b717;
  uVar63 = __real_322bcc77;
  auVar158 = in_ZMM31._0_16_;
  auVar157 = in_ZMM30._0_16_;
  auVar81 = in_ZMM23._0_16_;
  auVar80 = in_ZMM29._0_16_;
  auVar79 = in_ZMM28._0_16_;
  auVar78 = in_ZMM27._0_16_;
  auVar77 = in_ZMM22._0_16_;
  auVar74 = in_ZMM26._0_16_;
  auVar76 = in_ZMM25._0_16_;
  auVar75 = in_ZMM24._0_16_;
  uVar68 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar68 = param_9;
  }
  if ((int)(uVar68 & 0xfffffff8) < 1) {
    uVar70 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar143 = param_6 * param_7 * param_6;
    local_1e0._4_4_ = fVar143;
    local_1e0._0_4_ = fVar143;
    local_1e0._8_4_ = fVar143;
    local_1e0._12_4_ = fVar143;
    local_1e0._16_4_ = fVar143;
    local_1e0._20_4_ = fVar143;
    local_1e0._24_4_ = fVar143;
    local_1e0._28_4_ = fVar143;
    local_200 = param_8 + param_8;
    fStack_1fc = local_200;
    fStack_1f8 = local_200;
    fStack_1f4 = local_200;
    fStack_1f0 = local_200;
    fStack_1ec = local_200;
    fStack_1e8 = local_200;
    fStack_1e4 = local_200;
    local_220 = param_7;
    fStack_21c = param_7;
    fStack_218 = param_7;
    fStack_214 = param_7;
    fStack_210 = param_7;
    fStack_20c = param_7;
    fStack_208 = param_7;
    fStack_204 = param_7;
    local_240 = param_6;
    fStack_23c = param_6;
    fStack_238 = param_6;
    fStack_234 = param_6;
    fStack_230 = param_6;
    fStack_22c = param_6;
    fStack_228 = param_6;
    fStack_224 = param_6;
    auVar82._4_4_ = __real_80000000;
    auVar82._0_4_ = __real_80000000;
    auVar82._8_4_ = __real_80000000;
    auVar82._12_4_ = __real_80000000;
    auVar82._16_4_ = __real_80000000;
    auVar82._20_4_ = __real_80000000;
    auVar82._24_4_ = __real_80000000;
    auVar82._28_4_ = __real_80000000;
    local_260 = vxorps_avx512vl(local_1e0,auVar82);
    uVar70 = 0;
    auVar82 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar158 = auVar82._0_16_;
    auVar83 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar77 = auVar83._0_16_;
    local_280 = __real_0000000c;
    uStack_27c = __real_0000000c;
    uStack_278 = __real_0000000c;
    uStack_274 = __real_0000000c;
    uStack_270 = __real_0000000c;
    uStack_26c = __real_0000000c;
    uStack_268 = __real_0000000c;
    uStack_264 = __real_0000000c;
    local_2a0 = __real_38d1b717;
    uStack_29c = __real_38d1b717;
    uStack_298 = __real_38d1b717;
    uStack_294 = __real_38d1b717;
    uStack_290 = __real_38d1b717;
    uStack_28c = __real_38d1b717;
    uStack_288 = __real_38d1b717;
    uStack_284 = __real_38d1b717;
    local_2c0 = __real_3f800000;
    iStack_2bc = __real_3f800000;
    iStack_2b8 = __real_3f800000;
    iStack_2b4 = __real_3f800000;
    iStack_2b0 = __real_3f800000;
    iStack_2ac = __real_3f800000;
    iStack_2a8 = __real_3f800000;
    iStack_2a4 = __real_3f800000;
    auStack_2d8[0] = __real_322bcc77;
    auStack_2d8[1] = __real_322bcc77;
    auStack_2d8[2] = __real_322bcc77;
    auStack_2d8[3] = __real_322bcc77;
    uStack_2c8 = __real_322bcc77;
    uStack_2c4 = __real_322bcc77;
    uVar69 = 0;
    auVar110._4_4_ = __real_3f800000;
    auVar110._0_4_ = __real_3f800000;
    auVar110._8_4_ = __real_3f800000;
    auVar110._12_4_ = __real_3f800000;
    auVar110._16_4_ = __real_3f800000;
    auVar110._20_4_ = __real_3f800000;
    auVar110._24_4_ = __real_3f800000;
    auVar110._28_4_ = __real_3f800000;
    auVar74 = vxorps_avx512vl(auVar74,auVar74);
    do {
      auVar84 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_3 + uVar69 * 2));
      auVar86 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar69 * 2);
      auVar85 = vmovdqa64_avx512vl(auVar84);
      auVar85 = vpermt2d_avx512vl(auVar85,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar86);
      auVar86 = vpermt2d_avx512vl(auVar84,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar86);
      auVar87 = vpslld_avx512vl(auVar85,4);
      auVar80 = auVar87._0_16_;
      auVar88 = vpslld_avx512vl(auVar86,4);
      auVar79 = auVar88._0_16_;
      auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      local_1c0 = auVar88 | auVar82;
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_9));
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      auVar112._4_4_ = uVar66;
      auVar112._0_4_ = uVar66;
      auVar112._8_4_ = uVar66;
      auVar112._12_4_ = uVar66;
      auVar112._16_4_ = uVar66;
      auVar112._20_4_ = uVar66;
      auVar112._24_4_ = uVar66;
      auVar112._28_4_ = uVar66;
      auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      fVar145 = auVar94._0_4_;
      fVar148 = auVar94._4_4_;
      fVar151 = auVar94._8_4_;
      fVar127 = auVar94._12_4_;
      fVar130 = auVar94._16_4_;
      fVar132 = auVar94._20_4_;
      fVar134 = auVar94._24_4_;
      fVar136 = auVar94._28_4_;
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar69));
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar84 = vpslld_avx512vl(auVar85,2);
      auVar85 = vpslld_avx2(auVar85,3);
      auVar97 = vgatherdps_avx512vl(param_2[(longlong)param_1]);
      auVar84 = vpaddd_avx512vl(auVar85,auVar84);
      vpaddd_avx512vl(auVar84,auVar82);
      auVar85 = vpaddd_avx512vl(auVar86,auVar86);
      vpaddd_avx512vl(auVar86,auVar85);
      auVar85 = vpslld_avx512vl(auVar86,2);
      auVar86 = vpslld_avx512vl(auVar86,3);
      vpaddd_avx512vl(auVar84,auVar83);
      auVar98 = vgatherdps_avx512vl(param_2[(longlong)param_1]);
      auVar84 = vpaddd_avx512vl(auVar86,auVar85);
      unaff_RBX = uVar69 & 0xffffffff;
      auVar86 = *(undefined1 (*) [32])(param_4 + unaff_RBX);
      vpaddd_avx512vl(auVar84,auVar82);
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 + param_5));
      vpaddd_avx512vl(auVar84,auVar83);
      auVar100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 + (longlong)auStack_2d8));
      auVar101 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
      auVar75 = auVar101._0_16_;
      in_ZMM24 = ZEXT3264(auVar101);
      auVar102 = vgatherdps_avx512vl(*param_2);
      auVar103 = vsubps_avx512vl(auVar89,auVar90);
      auVar104 = vsubps_avx512vl(auVar91,auVar92);
      auVar84._4_4_ = uVar63;
      auVar84._0_4_ = uVar63;
      auVar84._8_4_ = uVar63;
      auVar84._12_4_ = uVar63;
      auVar84._16_4_ = uVar63;
      auVar84._20_4_ = uVar63;
      auVar84._24_4_ = uVar63;
      auVar84._28_4_ = uVar63;
      uVar61 = vcmpps_avx512vl(auVar86,auVar84,1);
      auVar84 = vdivps_avx512vl(auVar110,auVar86);
      auVar105 = vsubps_avx512vl(auVar93,auVar95);
      auVar106 = vaddps_avx512vl(auVar94,auVar96);
      auVar76 = auVar106._0_16_;
      auVar108._4_4_ = param_7;
      auVar108._0_4_ = param_7;
      auVar108._8_4_ = param_7;
      auVar108._12_4_ = param_7;
      auVar108._16_4_ = param_7;
      auVar108._20_4_ = param_7;
      auVar108._24_4_ = param_7;
      auVar108._28_4_ = param_7;
      auVar85 = vdivps_avx512vl(auVar108,auVar106);
      auVar85 = vsqrtps_avx512vl(auVar85);
      auVar109._4_4_ = local_200;
      auVar109._0_4_ = local_200;
      auVar109._8_4_ = local_200;
      auVar109._12_4_ = local_200;
      auVar109._16_4_ = local_200;
      auVar109._20_4_ = local_200;
      auVar109._24_4_ = local_200;
      auVar109._28_4_ = local_200;
      auVar85 = vmulps_avx512vl(auVar85,auVar109);
      auVar84 = vmulps_avx512vl(auVar85,auVar84);
      bVar6 = (bool)((byte)uVar61 & 1);
      auVar107._0_4_ = (uint)bVar6 * auVar85._0_4_ | (uint)!bVar6 * auVar84._0_4_;
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      auVar107._4_4_ = (uint)bVar6 * auVar85._4_4_ | (uint)!bVar6 * auVar84._4_4_;
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      auVar107._8_4_ = (uint)bVar6 * auVar85._8_4_ | (uint)!bVar6 * auVar84._8_4_;
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      auVar107._12_4_ = (uint)bVar6 * auVar85._12_4_ | (uint)!bVar6 * auVar84._12_4_;
      bVar6 = (bool)((byte)(uVar61 >> 4) & 1);
      auVar107._16_4_ = (uint)bVar6 * auVar85._16_4_ | (uint)!bVar6 * auVar84._16_4_;
      bVar6 = (bool)((byte)(uVar61 >> 5) & 1);
      auVar107._20_4_ = (uint)bVar6 * auVar85._20_4_ | (uint)!bVar6 * auVar84._20_4_;
      bVar6 = (bool)((byte)(uVar61 >> 6) & 1);
      auVar107._24_4_ = (uint)bVar6 * auVar85._24_4_ | (uint)!bVar6 * auVar84._24_4_;
      bVar6 = SUB81(uVar61 >> 7,0);
      auVar107._28_4_ = (uint)bVar6 * auVar85._28_4_ | (uint)!bVar6 * auVar84._28_4_;
      auVar84 = vmulps_avx512vl(auVar104,auVar104);
      auVar84 = vfmadd231ps_avx512vl(auVar84,auVar103,auVar103);
      auVar84 = vfmadd231ps_avx512vl(auVar84,auVar105,auVar105);
      auVar85._4_4_ = uVar64;
      auVar85._0_4_ = uVar64;
      auVar85._8_4_ = uVar64;
      auVar85._12_4_ = uVar64;
      auVar85._16_4_ = uVar64;
      auVar85._20_4_ = uVar64;
      auVar85._24_4_ = uVar64;
      auVar85._28_4_ = uVar64;
      uVar61 = vcmpps_avx512vl(auVar84,auVar85,1);
      auVar84 = vsqrtps_avx512vl(auVar84);
      auVar85 = vdivps_avx512vl(auVar103,auVar84);
      auVar108 = vdivps_avx512vl(auVar104,auVar84);
      auVar109 = vdivps_avx512vl(auVar105,auVar84);
      bVar71 = (byte)uVar61;
      iVar72 = auVar74._0_4_;
      auVar81._0_4_ = (uint)(bVar71 & 1) * iVar72 | (uint)!(bool)(bVar71 & 1) * auVar84._0_4_;
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      iVar123 = auVar74._4_4_;
      auVar81._4_4_ = (uint)bVar6 * iVar123 | (uint)!bVar6 * auVar84._4_4_;
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      iVar125 = auVar74._8_4_;
      auVar81._8_4_ = (uint)bVar6 * iVar125 | (uint)!bVar6 * auVar84._8_4_;
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      iVar128 = auVar74._12_4_;
      auVar81._12_4_ = (uint)bVar6 * iVar128 | (uint)!bVar6 * auVar84._12_4_;
      auVar103._16_4_ = (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar84._16_4_;
      auVar103._0_16_ = auVar81;
      auVar103._20_4_ = (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar84._20_4_;
      auVar103._24_4_ = (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar84._24_4_;
      bVar6 = SUB81(uVar61 >> 7,0);
      auVar103._28_4_ =
           (uint)bVar6 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar6 * auVar84._28_4_;
      auVar84 = vsubps_avx512vl(auVar103,auVar86);
      auVar86 = vsubps_avx(auVar89,auVar97);
      auVar86 = vsubps_avx512vl(auVar86,auVar90);
      auVar97 = vaddps_avx512vl(auVar86,auVar98);
      auVar86 = vsubps_avx(auVar91,auVar99);
      auVar86 = vsubps_avx(auVar86,auVar92);
      auVar86 = vaddps_avx512vl(auVar86,auVar101);
      auVar98 = vsubps_avx512vl(auVar93,auVar100);
      auVar98 = vsubps_avx512vl(auVar98,auVar95);
      auVar98 = vaddps_avx512vl(auVar98,auVar102);
      fVar73 = (float)((uint)(bVar71 & 1) * iVar65 | (uint)!(bool)(bVar71 & 1) * auVar85._0_4_);
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      fVar124 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._4_4_);
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      fVar126 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._8_4_);
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      fVar129 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._12_4_);
      bVar6 = (bool)((byte)(uVar61 >> 4) & 1);
      fVar131 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._16_4_);
      bVar6 = (bool)((byte)(uVar61 >> 5) & 1);
      fVar133 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._20_4_);
      bVar6 = (bool)((byte)(uVar61 >> 6) & 1);
      fVar135 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._24_4_);
      bVar6 = SUB81(uVar61 >> 7,0);
      fVar137 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._28_4_);
      auVar99._0_4_ = (uint)(bVar71 & 1) * iVar72 | (uint)!(bool)(bVar71 & 1) * auVar108._0_4_;
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      auVar99._4_4_ = (uint)bVar6 * iVar123 | (uint)!bVar6 * auVar108._4_4_;
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      auVar99._8_4_ = (uint)bVar6 * iVar125 | (uint)!bVar6 * auVar108._8_4_;
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      auVar99._12_4_ = (uint)bVar6 * iVar128 | (uint)!bVar6 * auVar108._12_4_;
      auVar99._16_4_ = (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar108._16_4_;
      auVar99._20_4_ = (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar108._20_4_;
      auVar99._24_4_ = (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar108._24_4_;
      auVar99._28_4_ = (uint)!SUB81(uVar61 >> 7,0) * auVar108._28_4_;
      auVar86 = vmulps_avx512vl(auVar99,auVar86);
      auVar101._0_4_ = fVar73 * auVar97._0_4_ + auVar86._0_4_;
      auVar101._4_4_ = fVar124 * auVar97._4_4_ + auVar86._4_4_;
      auVar101._8_4_ = fVar126 * auVar97._8_4_ + auVar86._8_4_;
      auVar101._12_4_ = fVar129 * auVar97._12_4_ + auVar86._12_4_;
      auVar101._16_4_ = fVar131 * auVar97._16_4_ + auVar86._16_4_;
      auVar101._20_4_ = fVar133 * auVar97._20_4_ + auVar86._20_4_;
      auVar101._24_4_ = fVar135 * auVar97._24_4_ + auVar86._24_4_;
      auVar101._28_4_ = fVar137 * auVar97._28_4_ + auVar86._28_4_;
      auVar78._0_4_ = (uint)(bVar71 & 1) * iVar72 | (uint)!(bool)(bVar71 & 1) * auVar109._0_4_;
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      auVar78._4_4_ = (uint)bVar6 * iVar123 | (uint)!bVar6 * auVar109._4_4_;
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      auVar78._8_4_ = (uint)bVar6 * iVar125 | (uint)!bVar6 * auVar109._8_4_;
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      auVar78._12_4_ = (uint)bVar6 * iVar128 | (uint)!bVar6 * auVar109._12_4_;
      auVar100._16_4_ = (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar109._16_4_;
      auVar100._0_16_ = auVar78;
      auVar100._20_4_ = (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar109._20_4_;
      auVar100._24_4_ = (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar109._24_4_;
      bVar6 = SUB81(uVar61 >> 7,0);
      auVar100._28_4_ =
           (uint)bVar6 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar6 * auVar109._28_4_
      ;
      auVar85 = vfmadd231ps_avx512vl(auVar101,auVar100,auVar98);
      auVar86 = *(undefined1 (*) [32])(param_5 + unaff_RBX);
      auVar97._4_4_ = param_6;
      auVar97._0_4_ = param_6;
      auVar97._8_4_ = param_6;
      auVar97._12_4_ = param_6;
      auVar97._16_4_ = param_6;
      auVar97._20_4_ = param_6;
      auVar97._24_4_ = param_6;
      auVar97._28_4_ = param_6;
      auVar97 = vmulps_avx512vl(auVar107,auVar97);
      auVar84 = vfmsub132ps_avx512vl(auVar84,auVar86,local_260);
      auVar84 = vfnmadd213ps_avx512vl(auVar85,auVar97,auVar84);
      auVar102._0_4_ = auVar97._0_4_ + fVar143;
      auVar102._4_4_ = auVar97._4_4_ + fVar143;
      auVar102._8_4_ = auVar97._8_4_ + fVar143;
      auVar102._12_4_ = auVar97._12_4_ + fVar143;
      auVar102._16_4_ = auVar97._16_4_ + fVar143;
      auVar102._20_4_ = auVar97._20_4_ + fVar143;
      auVar102._24_4_ = auVar97._24_4_ + fVar143;
      auVar102._28_4_ = auVar97._28_4_ + fVar143;
      auVar85 = vfmadd213ps_avx512vl(auVar102,auVar106,auVar110);
      auVar84 = vdivps_avx(auVar84,auVar85);
      pfVar1 = (float *)(param_5 + unaff_RBX);
      *pfVar1 = auVar86._0_4_ + auVar84._0_4_;
      pfVar1[1] = auVar86._4_4_ + auVar84._4_4_;
      pfVar1[2] = auVar86._8_4_ + auVar84._8_4_;
      pfVar1[3] = auVar86._12_4_ + auVar84._12_4_;
      pfVar1[4] = auVar86._16_4_ + auVar84._16_4_;
      pfVar1[5] = auVar86._20_4_ + auVar84._20_4_;
      pfVar1[6] = auVar86._24_4_ + auVar84._24_4_;
      pfVar1[7] = auVar86._28_4_ + auVar84._28_4_;
      auVar98._0_4_ = fVar73 * auVar84._0_4_;
      auVar98._4_4_ = fVar124 * auVar84._4_4_;
      auVar98._8_4_ = fVar126 * auVar84._8_4_;
      auVar98._12_4_ = fVar129 * auVar84._12_4_;
      auVar98._16_4_ = fVar131 * auVar84._16_4_;
      auVar98._20_4_ = fVar133 * auVar84._20_4_;
      auVar98._24_4_ = fVar135 * auVar84._24_4_;
      auVar98._28_4_ = fVar137 * auVar84._28_4_;
      auVar104._0_4_ = fVar145 * auVar98._0_4_ + auVar89._0_4_;
      auVar104._4_4_ = fVar148 * auVar98._4_4_ + auVar89._4_4_;
      auVar104._8_4_ = fVar151 * auVar98._8_4_ + auVar89._8_4_;
      auVar104._12_4_ = fVar127 * auVar98._12_4_ + auVar89._12_4_;
      auVar104._16_4_ = fVar130 * auVar98._16_4_ + auVar89._16_4_;
      auVar104._20_4_ = fVar132 * auVar98._20_4_ + auVar89._20_4_;
      auVar104._24_4_ = fVar134 * auVar98._24_4_ + auVar89._24_4_;
      auVar104._28_4_ = fVar136 * auVar98._28_4_ + auVar89._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar96,0xffff,auVar104);
      auVar86 = vmulps_avx512vl(auVar99,auVar84);
      auVar105._0_4_ = fVar145 * auVar86._0_4_ + auVar91._0_4_;
      auVar105._4_4_ = fVar148 * auVar86._4_4_ + auVar91._4_4_;
      auVar105._8_4_ = fVar151 * auVar86._8_4_ + auVar91._8_4_;
      auVar105._12_4_ = fVar127 * auVar86._12_4_ + auVar91._12_4_;
      auVar105._16_4_ = fVar130 * auVar86._16_4_ + auVar91._16_4_;
      auVar105._20_4_ = fVar132 * auVar86._20_4_ + auVar91._20_4_;
      auVar105._24_4_ = fVar134 * auVar86._24_4_ + auVar91._24_4_;
      auVar105._28_4_ = fVar136 * auVar86._28_4_ + auVar91._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar82),0xffff,auVar105);
      auVar84 = vmulps_avx512vl(auVar100,auVar84);
      auVar89._0_4_ = fVar145 * auVar84._0_4_ + auVar93._0_4_;
      auVar89._4_4_ = fVar148 * auVar84._4_4_ + auVar93._4_4_;
      auVar89._8_4_ = fVar151 * auVar84._8_4_ + auVar93._8_4_;
      auVar89._12_4_ = fVar127 * auVar84._12_4_ + auVar93._12_4_;
      auVar89._16_4_ = fVar130 * auVar84._16_4_ + auVar93._16_4_;
      auVar89._20_4_ = fVar132 * auVar84._20_4_ + auVar93._20_4_;
      auVar89._24_4_ = fVar134 * auVar84._24_4_ + auVar93._24_4_;
      auVar89._28_4_ = fVar136 * auVar84._28_4_ + auVar93._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar83),0xffff,auVar89);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar112),0xffff,auVar94);
      auVar85 = vfnmadd231ps_avx512vl(auVar90,auVar96,auVar98);
      in_ZMM30 = ZEXT3264(auVar85);
      auVar157 = auVar85._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar105,0xffff,auVar85);
      auVar87._0_4_ = -(auVar96._0_4_ * auVar86._0_4_) + auVar92._0_4_;
      auVar87._4_4_ = -(auVar96._4_4_ * auVar86._4_4_) + auVar92._4_4_;
      auVar87._8_4_ = -(auVar96._8_4_ * auVar86._8_4_) + auVar92._8_4_;
      auVar87._12_4_ = -(auVar96._12_4_ * auVar86._12_4_) + auVar92._12_4_;
      auVar87._16_4_ = -(auVar96._16_4_ * auVar86._16_4_) + auVar92._16_4_;
      auVar87._20_4_ = -(auVar96._20_4_ * auVar86._20_4_) + auVar92._20_4_;
      auVar87._24_4_ = -(auVar96._24_4_ * auVar86._24_4_) + auVar92._24_4_;
      auVar87._28_4_ = -(auVar96._28_4_ * auVar86._28_4_) + auVar92._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar88 | auVar82),0xffff,auVar87);
      auVar86._0_4_ = -(auVar96._0_4_ * auVar84._0_4_) + auVar95._0_4_;
      auVar86._4_4_ = -(auVar96._4_4_ * auVar84._4_4_) + auVar95._4_4_;
      auVar86._8_4_ = -(auVar96._8_4_ * auVar84._8_4_) + auVar95._8_4_;
      auVar86._12_4_ = -(auVar96._12_4_ * auVar84._12_4_) + auVar95._12_4_;
      auVar86._16_4_ = -(auVar96._16_4_ * auVar84._16_4_) + auVar95._16_4_;
      auVar86._20_4_ = -(auVar96._20_4_ * auVar84._20_4_) + auVar95._20_4_;
      auVar86._24_4_ = -(auVar96._24_4_ * auVar84._24_4_) + auVar95._24_4_;
      auVar86._28_4_ = -(auVar96._28_4_ * auVar84._28_4_) + auVar95._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar88 | auVar83),0xffff,auVar86);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar88 | auVar112),0xffff,auVar96);
      uVar69 = uVar69 + 0x20;
      uVar70 = uVar70 + 8;
    } while ((int)uVar70 < (int)(uVar68 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar70) {
      return;
    }
  }
  auVar82 = vpbroadcastd_avx512vl();
  auVar82 = vpor_avx2(auVar82,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar110 = vpbroadcastd_avx512vl();
  uVar69 = vpcmpgtd_avx512vl(auVar110,auVar82);
  pauVar2 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar70 * 8);
  bVar71 = (byte)uVar69;
  if (bVar71 == 0xff) {
    auVar83 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                ,*pauVar2,pauVar2[1]);
    auVar88 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                ,*pauVar2,pauVar2[1]);
  }
  else {
    auVar82 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar2 + (longlong)param_1));
    auVar83._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar82._4_4_;
    auVar83._0_4_ = (uint)(bVar71 & 1) * auVar82._0_4_;
    auVar83._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar82._8_4_;
    auVar83._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar82._12_4_;
    auVar83._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar82._16_4_;
    auVar83._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar82._20_4_;
    auVar83._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar82._24_4_;
    auVar83._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar82._28_4_;
    auVar82 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar2 + (longlong)param_2));
    auVar88._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar82._4_4_;
    auVar88._0_4_ = (uint)(bVar71 & 1) * auVar82._0_4_;
    auVar88._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar82._8_4_;
    auVar88._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar82._12_4_;
    auVar88._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar82._16_4_;
    auVar88._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar82._20_4_;
    auVar88._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar82._24_4_;
    auVar88._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar82._28_4_;
  }
  auVar108 = vpslld_avx2(auVar83,4);
  auVar140._4_4_ = __real_00000004;
  auVar140._0_4_ = __real_00000004;
  auVar140._8_4_ = __real_00000004;
  auVar140._12_4_ = __real_00000004;
  auVar140._16_4_ = __real_00000004;
  auVar140._20_4_ = __real_00000004;
  auVar140._24_4_ = __real_00000004;
  auVar140._28_4_ = __real_00000004;
  auVar75 = vxorps_avx512vl(auVar75,auVar75);
  auVar82 = vgatherdps_avx512vl(*param_1);
  bVar6 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar17 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar27 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar76 = vxorps_avx512vl(auVar76,auVar76);
  auVar110 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_2d8));
  bVar7 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar18 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar28 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar141._4_4_ = __real_00000008;
  auVar141._0_4_ = __real_00000008;
  auVar141._8_4_ = __real_00000008;
  auVar141._12_4_ = __real_00000008;
  auVar141._16_4_ = __real_00000008;
  auVar141._20_4_ = __real_00000008;
  auVar141._24_4_ = __real_00000008;
  auVar141._28_4_ = __real_00000008;
  auVar74 = vxorps_avx512vl(auVar74,auVar74);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar8 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar19 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar29 = (bool)((byte)(uVar69 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar77 = vxorps_avx512vl(auVar77,auVar77);
  auVar84 = vgatherdps_avx512vl(*param_1);
  auVar111._0_4_ = (uint)(bVar71 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar77._0_4_;
  bVar9 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar111._4_4_ = (uint)bVar9 * auVar84._4_4_ | (uint)!bVar9 * auVar77._4_4_;
  bVar9 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar111._8_4_ = (uint)bVar9 * auVar84._8_4_ | (uint)!bVar9 * auVar77._8_4_;
  bVar9 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar111._12_4_ = (uint)bVar9 * auVar84._12_4_ | (uint)!bVar9 * auVar77._12_4_;
  auVar111._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar84._16_4_;
  auVar111._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar84._20_4_;
  auVar111._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar84._24_4_;
  auVar111._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar84._28_4_;
  vpslld_avx512vl(auVar88,4);
  auVar78 = vxorps_avx512vl(auVar78,auVar78);
  auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
  bVar9 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar30 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar77 = vxorps_avx512vl(auVar79,auVar79);
  auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)param_2));
  auVar79._0_4_ = (uint)(bVar71 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar77._0_4_;
  bVar10 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar79._4_4_ = (uint)bVar10 * auVar85._4_4_ | (uint)!bVar10 * auVar77._4_4_;
  bVar10 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar79._8_4_ = (uint)bVar10 * auVar85._8_4_ | (uint)!bVar10 * auVar77._8_4_;
  bVar10 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar79._12_4_ = (uint)bVar10 * auVar85._12_4_ | (uint)!bVar10 * auVar77._12_4_;
  auVar77 = vxorps_avx512vl(auVar80,auVar80);
  auVar112 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  auVar80._0_4_ = (uint)(bVar71 & 1) * auVar112._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar77._0_4_;
  bVar10 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar80._4_4_ = (uint)bVar10 * auVar112._4_4_ | (uint)!bVar10 * auVar77._4_4_;
  bVar10 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar80._8_4_ = (uint)bVar10 * auVar112._8_4_ | (uint)!bVar10 * auVar77._8_4_;
  bVar10 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar80._12_4_ = (uint)bVar10 * auVar112._12_4_ | (uint)!bVar10 * auVar77._12_4_;
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_2d8));
  auVar113._0_4_ = (uint)(bVar71 & 1) * auVar97._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar10 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar113._4_4_ = (uint)bVar10 * auVar97._4_4_ | (uint)!bVar10 * auVar81._4_4_;
  bVar10 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar113._8_4_ = (uint)bVar10 * auVar97._8_4_ | (uint)!bVar10 * auVar81._8_4_;
  bVar10 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar113._12_4_ = (uint)bVar10 * auVar97._12_4_ | (uint)!bVar10 * auVar81._12_4_;
  auVar113._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar97._16_4_;
  auVar113._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar97._20_4_;
  auVar113._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar97._24_4_;
  auVar113._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar97._28_4_;
  bVar10 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar31 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar37 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar43 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar49 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar55 = SUB81(uVar69 >> 7,0);
  bVar11 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar32 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar38 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar44 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar50 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar56 = SUB81(uVar69 >> 7,0);
  bVar12 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar23 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar39 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar45 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar51 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar57 = SUB81(uVar69 >> 7,0);
  bVar13 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar40 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar46 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar52 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar58 = SUB81(uVar69 >> 7,0);
  bVar14 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar25 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar35 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar41 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar47 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar53 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar59 = SUB81(uVar69 >> 7,0);
  bVar15 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar26 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar36 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar42 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar48 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar54 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar60 = SUB81(uVar69 >> 7,0);
  auVar97 = vpaddd_avx512vl(auVar83,auVar83);
  vpaddd_avx512vl(auVar83,auVar97);
  auVar81 = vxorps_avx512vl(auVar79,auVar79);
  auVar97 = vgatherdps_avx512vl(param_2[(longlong)pauVar2]);
  auVar114._0_4_ = (uint)(bVar71 & 1) * auVar97._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar16 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar114._4_4_ = (uint)bVar16 * auVar97._4_4_ | (uint)!bVar16 * auVar81._4_4_;
  bVar16 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar114._8_4_ = (uint)bVar16 * auVar97._8_4_ | (uint)!bVar16 * auVar81._8_4_;
  bVar16 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar114._12_4_ = (uint)bVar16 * auVar97._12_4_ | (uint)!bVar16 * auVar81._12_4_;
  auVar114._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar97._16_4_;
  auVar114._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar97._20_4_;
  auVar114._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar97._24_4_;
  auVar114._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar97._28_4_;
  auVar97 = vpslld_avx512vl(auVar83,2);
  auVar83 = vpslld_avx2(auVar83,3);
  auVar83 = vpaddd_avx512vl(auVar83,auVar97);
  vpaddd_avx512vl(auVar83,auVar140);
  auVar81 = vxorps_avx512vl(auVar80,auVar80);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 + (longlong)pauVar2));
  auVar115._0_4_ = (uint)(bVar71 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar16 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar115._4_4_ = (uint)bVar16 * auVar83._4_4_ | (uint)!bVar16 * auVar81._4_4_;
  bVar16 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar115._8_4_ = (uint)bVar16 * auVar83._8_4_ | (uint)!bVar16 * auVar81._8_4_;
  bVar16 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar115._12_4_ = (uint)bVar16 * auVar83._12_4_ | (uint)!bVar16 * auVar81._12_4_;
  auVar115._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
  auVar115._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
  auVar115._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
  auVar115._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar83._28_4_;
  auVar81 = vxorps_avx512vl(auVar157,auVar157);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 + param_5));
  auVar116._0_4_ = (uint)(bVar71 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar16 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar116._4_4_ = (uint)bVar16 * auVar83._4_4_ | (uint)!bVar16 * auVar81._4_4_;
  bVar16 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar116._8_4_ = (uint)bVar16 * auVar83._8_4_ | (uint)!bVar16 * auVar81._8_4_;
  bVar16 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar116._12_4_ = (uint)bVar16 * auVar83._12_4_ | (uint)!bVar16 * auVar81._12_4_;
  auVar116._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
  auVar116._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
  auVar116._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
  auVar116._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar83._28_4_;
  auVar90._4_4_ = auVar88._4_4_ * 2;
  auVar90._0_4_ = auVar88._0_4_ * 2;
  auVar90._8_4_ = auVar88._8_4_ * 2;
  auVar90._12_4_ = auVar88._12_4_ * 2;
  auVar90._16_4_ = auVar88._16_4_ * 2;
  auVar90._20_4_ = auVar88._20_4_ * 2;
  auVar90._24_4_ = auVar88._24_4_ * 2;
  auVar90._28_4_ = auVar88._28_4_ * 2;
  vpaddd_avx512vl(auVar88,auVar90);
  auVar83 = vgatherdps_avx512vl(param_2[(longlong)pauVar2]);
  auVar117._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar83._4_4_;
  auVar117._0_4_ = (uint)(bVar71 & 1) * auVar83._0_4_;
  auVar117._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar83._8_4_;
  auVar117._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar83._12_4_;
  auVar117._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
  auVar117._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
  auVar117._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
  auVar117._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar83._28_4_;
  auVar83 = vpslld_avx512vl(auVar88,2);
  auVar97 = vpslld_avx2(auVar88,3);
  auVar83 = vpaddd_avx512vl(auVar97,auVar83);
  vpaddd_avx512vl(auVar83,auVar140);
  auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
  auVar118._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar97._4_4_;
  auVar118._0_4_ = (uint)(bVar71 & 1) * auVar97._0_4_;
  auVar118._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar97._8_4_;
  auVar118._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar97._12_4_;
  auVar118._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar97._16_4_;
  auVar118._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar97._20_4_;
  auVar118._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar97._24_4_;
  auVar118._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar97._28_4_;
  vpaddd_avx512vl(auVar83,auVar141);
  auVar81 = vxorps_avx512vl(auVar158,auVar158);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
  auVar119._0_4_ = (uint)(bVar71 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar16 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar119._4_4_ = (uint)bVar16 * auVar83._4_4_ | (uint)!bVar16 * auVar81._4_4_;
  bVar16 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar119._8_4_ = (uint)bVar16 * auVar83._8_4_ | (uint)!bVar16 * auVar81._8_4_;
  bVar16 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar119._12_4_ = (uint)bVar16 * auVar83._12_4_ | (uint)!bVar16 * auVar81._12_4_;
  auVar119._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
  auVar119._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
  auVar119._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
  auVar119._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar83._28_4_;
  auVar96._4_4_ =
       (uint)bVar10 * ((uint)bVar6 * auVar82._4_4_ | (uint)!bVar6 * auVar75._4_4_) |
       (uint)!bVar10 * iStack_13c;
  auVar96._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar71 & 1) * auVar82._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar75._0_4_) |
       (uint)!(bool)(bVar71 & 1) * local_140;
  auVar96._8_4_ =
       (uint)bVar21 * ((uint)bVar17 * auVar82._8_4_ | (uint)!bVar17 * auVar75._8_4_) |
       (uint)!bVar21 * iStack_138;
  auVar96._12_4_ =
       (uint)bVar31 * ((uint)bVar27 * auVar82._12_4_ | (uint)!bVar27 * auVar75._12_4_) |
       (uint)!bVar31 * iStack_134;
  auVar96._16_4_ =
       (uint)bVar37 * (uint)((byte)(uVar69 >> 4) & 1) * auVar82._16_4_ | (uint)!bVar37 * iStack_130;
  auVar96._20_4_ =
       (uint)bVar43 * (uint)((byte)(uVar69 >> 5) & 1) * auVar82._20_4_ | (uint)!bVar43 * iStack_12c;
  auVar96._24_4_ =
       (uint)bVar49 * (uint)((byte)(uVar69 >> 6) & 1) * auVar82._24_4_ | (uint)!bVar49 * iStack_128;
  auVar96._28_4_ =
       (uint)bVar55 * (uint)(byte)(uVar69 >> 7) * auVar82._28_4_ | (uint)!bVar55 * iStack_124;
  auVar106._4_4_ =
       (uint)bVar11 * ((uint)bVar7 * auVar110._4_4_ | (uint)!bVar7 * auVar76._4_4_) |
       (uint)!bVar11 * iStack_11c;
  auVar106._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar71 & 1) * auVar110._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar76._0_4_) |
       (uint)!(bool)(bVar71 & 1) * local_120;
  auVar106._8_4_ =
       (uint)bVar22 * ((uint)bVar18 * auVar110._8_4_ | (uint)!bVar18 * auVar76._8_4_) |
       (uint)!bVar22 * iStack_118;
  auVar106._12_4_ =
       (uint)bVar32 * ((uint)bVar28 * auVar110._12_4_ | (uint)!bVar28 * auVar76._12_4_) |
       (uint)!bVar32 * iStack_114;
  auVar106._16_4_ =
       (uint)bVar38 * (uint)((byte)(uVar69 >> 4) & 1) * auVar110._16_4_ | (uint)!bVar38 * iStack_110
  ;
  auVar106._20_4_ =
       (uint)bVar44 * (uint)((byte)(uVar69 >> 5) & 1) * auVar110._20_4_ | (uint)!bVar44 * iStack_10c
  ;
  auVar106._24_4_ =
       (uint)bVar50 * (uint)((byte)(uVar69 >> 6) & 1) * auVar110._24_4_ | (uint)!bVar50 * iStack_108
  ;
  auVar106._28_4_ =
       (uint)bVar56 * (uint)(byte)(uVar69 >> 7) * auVar110._28_4_ | (uint)!bVar56 * iStack_104;
  auVar62._4_4_ =
       (uint)bVar12 * ((uint)bVar8 * auVar86._4_4_ | (uint)!bVar8 * auVar74._4_4_) |
       (uint)!bVar12 * iStack_fc;
  auVar62._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar71 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar74._0_4_) |
       (uint)!(bool)(bVar71 & 1) * local_100;
  auVar62._8_4_ =
       (uint)bVar23 * ((uint)bVar19 * auVar86._8_4_ | (uint)!bVar19 * auVar74._8_4_) |
       (uint)!bVar23 * iStack_f8;
  auVar62._12_4_ =
       (uint)bVar33 * ((uint)bVar29 * auVar86._12_4_ | (uint)!bVar29 * auVar74._12_4_) |
       (uint)!bVar33 * iStack_f4;
  auVar62._16_4_ =
       (uint)bVar39 * (uint)((byte)(uVar69 >> 4) & 1) * auVar86._16_4_ | (uint)!bVar39 * iStack_f0;
  auVar62._20_4_ =
       (uint)bVar45 * (uint)((byte)(uVar69 >> 5) & 1) * auVar86._20_4_ | (uint)!bVar45 * iStack_ec;
  auVar62._24_4_ =
       (uint)bVar51 * (uint)((byte)(uVar69 >> 6) & 1) * auVar86._24_4_ | (uint)!bVar51 * iStack_e8;
  auVar62._28_4_ =
       (uint)bVar57 * (uint)(byte)(uVar69 >> 7) * auVar86._28_4_ | (uint)!bVar57 * iStack_e4;
  auVar93._4_4_ =
       (uint)bVar13 * ((uint)bVar9 * auVar84._4_4_ | (uint)!bVar9 * auVar78._4_4_) |
       (uint)!bVar13 * iStack_19c;
  auVar93._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar71 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar78._0_4_) |
       (uint)!(bool)(bVar71 & 1) * local_1a0;
  auVar93._8_4_ =
       (uint)bVar24 * ((uint)bVar20 * auVar84._8_4_ | (uint)!bVar20 * auVar78._8_4_) |
       (uint)!bVar24 * iStack_198;
  auVar93._12_4_ =
       (uint)bVar34 * ((uint)bVar30 * auVar84._12_4_ | (uint)!bVar30 * auVar78._12_4_) |
       (uint)!bVar34 * iStack_194;
  auVar93._16_4_ =
       (uint)bVar40 * (uint)((byte)(uVar69 >> 4) & 1) * auVar84._16_4_ | (uint)!bVar40 * iStack_190;
  auVar93._20_4_ =
       (uint)bVar46 * (uint)((byte)(uVar69 >> 5) & 1) * auVar84._20_4_ | (uint)!bVar46 * iStack_18c;
  auVar93._24_4_ =
       (uint)bVar52 * (uint)((byte)(uVar69 >> 6) & 1) * auVar84._24_4_ | (uint)!bVar52 * iStack_188;
  auVar93._28_4_ =
       (uint)bVar58 * (uint)(byte)(uVar69 >> 7) * auVar84._28_4_ | (uint)!bVar58 * iStack_184;
  auVar94._4_4_ = bVar14 * auVar79._4_4_ | (uint)!bVar14 * iStack_17c;
  auVar94._0_4_ = (bVar71 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar71 & 1) * local_180;
  auVar94._8_4_ = bVar25 * auVar79._8_4_ | (uint)!bVar25 * iStack_178;
  auVar94._12_4_ = bVar35 * auVar79._12_4_ | (uint)!bVar35 * iStack_174;
  auVar94._16_4_ =
       (uint)bVar41 * (uint)((byte)(uVar69 >> 4) & 1) * auVar85._16_4_ | (uint)!bVar41 * iStack_170;
  auVar94._20_4_ =
       (uint)bVar47 * (uint)((byte)(uVar69 >> 5) & 1) * auVar85._20_4_ | (uint)!bVar47 * iStack_16c;
  auVar94._24_4_ =
       (uint)bVar53 * (uint)((byte)(uVar69 >> 6) & 1) * auVar85._24_4_ | (uint)!bVar53 * iStack_168;
  auVar94._28_4_ =
       (uint)bVar59 * (uint)(byte)(uVar69 >> 7) * auVar85._28_4_ | (uint)!bVar59 * iStack_164;
  auVar95._4_4_ = bVar15 * auVar80._4_4_ | (uint)!bVar15 * iStack_15c;
  auVar95._0_4_ = (bVar71 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar71 & 1) * local_160;
  auVar95._8_4_ = bVar26 * auVar80._8_4_ | (uint)!bVar26 * iStack_158;
  auVar95._12_4_ = bVar36 * auVar80._12_4_ | (uint)!bVar36 * iStack_154;
  auVar95._16_4_ =
       (uint)bVar42 * (uint)((byte)(uVar69 >> 4) & 1) * auVar112._16_4_ | (uint)!bVar42 * iStack_150
  ;
  auVar95._20_4_ =
       (uint)bVar48 * (uint)((byte)(uVar69 >> 5) & 1) * auVar112._20_4_ | (uint)!bVar48 * iStack_14c
  ;
  auVar95._24_4_ =
       (uint)bVar54 * (uint)((byte)(uVar69 >> 6) & 1) * auVar112._24_4_ | (uint)!bVar54 * iStack_148
  ;
  auVar95._28_4_ =
       (uint)bVar60 * (uint)(byte)(uVar69 >> 7) * auVar112._28_4_ | (uint)!bVar60 * iStack_144;
  auVar82 = vsubps_avx512vl(auVar96,auVar93);
  auVar83 = vsubps_avx512vl(auVar106,auVar94);
  auVar86 = vsubps_avx512vl(auVar62,auVar95);
  fVar143 = auVar83._0_4_;
  fVar145 = auVar83._4_4_;
  fVar73 = auVar83._8_4_;
  fVar148 = auVar83._12_4_;
  fVar124 = auVar83._16_4_;
  fVar151 = auVar83._20_4_;
  fVar126 = auVar83._24_4_;
  fVar127 = auVar83._28_4_;
  fVar129 = auVar82._0_4_;
  fVar130 = auVar82._4_4_;
  fVar131 = auVar82._8_4_;
  fVar132 = auVar82._12_4_;
  fVar133 = auVar82._16_4_;
  fVar134 = auVar82._20_4_;
  fVar135 = auVar82._24_4_;
  fVar136 = auVar82._28_4_;
  fVar137 = auVar86._0_4_;
  auVar154._0_4_ = fVar137 * fVar137 + fVar129 * fVar129 + fVar143 * fVar143;
  fVar144 = auVar86._4_4_;
  auVar154._4_4_ = fVar144 * fVar144 + fVar130 * fVar130 + fVar145 * fVar145;
  fVar146 = auVar86._8_4_;
  auVar154._8_4_ = fVar146 * fVar146 + fVar131 * fVar131 + fVar73 * fVar73;
  fVar147 = auVar86._12_4_;
  auVar154._12_4_ = fVar147 * fVar147 + fVar132 * fVar132 + fVar148 * fVar148;
  fVar149 = auVar86._16_4_;
  auVar154._16_4_ = fVar149 * fVar149 + fVar133 * fVar133 + fVar124 * fVar124;
  fVar150 = auVar86._20_4_;
  auVar154._20_4_ = fVar150 * fVar150 + fVar134 * fVar134 + fVar151 * fVar151;
  fVar152 = auVar86._24_4_;
  auVar154._24_4_ = fVar152 * fVar152 + fVar135 * fVar135 + fVar126 * fVar126;
  fVar153 = auVar86._28_4_;
  auVar154._28_4_ = fVar153 * fVar153 + fVar136 * fVar136 + fVar127 * fVar127;
  auVar110 = vsqrtps_avx(auVar154);
  auVar91._4_4_ = __real_38d1b717;
  auVar91._0_4_ = __real_38d1b717;
  auVar91._8_4_ = __real_38d1b717;
  auVar91._12_4_ = __real_38d1b717;
  auVar91._16_4_ = __real_38d1b717;
  auVar91._20_4_ = __real_38d1b717;
  auVar91._24_4_ = __real_38d1b717;
  auVar91._28_4_ = __real_38d1b717;
  uVar61 = vcmpps_avx512vl(auVar154,auVar91,1);
  auVar82 = vdivps_avx(auVar82,auVar110);
  auVar142._4_4_ = __real_3f800000;
  auVar142._0_4_ = __real_3f800000;
  auVar142._8_4_ = __real_3f800000;
  auVar142._12_4_ = __real_3f800000;
  auVar142._16_4_ = __real_3f800000;
  auVar142._20_4_ = __real_3f800000;
  auVar142._24_4_ = __real_3f800000;
  auVar142._28_4_ = __real_3f800000;
  bVar5 = (byte)uVar61;
  bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
  bVar8 = (bool)((byte)(uVar61 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar61 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar61 >> 4) & 1);
  bVar14 = (bool)((byte)(uVar61 >> 5) & 1);
  bVar16 = (bool)((byte)(uVar61 >> 6) & 1);
  bVar18 = SUB81(uVar61 >> 7,0);
  bVar7 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar13 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar15 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar17 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar19 = SUB81(uVar69 >> 7,0);
  local_340._4_4_ =
       (uint)bVar7 * ((uint)bVar6 * __real_3f800000 | (uint)!bVar6 * auVar82._4_4_) |
       (uint)!bVar7 * (int)fVar130;
  local_340._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar5 & 1) * __real_3f800000 | (uint)!(bool)(bVar5 & 1) * auVar82._0_4_) |
       (uint)!(bool)(bVar71 & 1) * (int)fVar129;
  local_340._8_4_ =
       (uint)bVar9 * ((uint)bVar8 * __real_3f800000 | (uint)!bVar8 * auVar82._8_4_) |
       (uint)!bVar9 * (int)fVar131;
  local_340._12_4_ =
       (uint)bVar11 * ((uint)bVar10 * __real_3f800000 | (uint)!bVar10 * auVar82._12_4_) |
       (uint)!bVar11 * (int)fVar132;
  local_340._16_4_ =
       (uint)bVar13 * ((uint)bVar12 * __real_3f800000 | (uint)!bVar12 * auVar82._16_4_) |
       (uint)!bVar13 * (int)fVar133;
  local_340._20_4_ =
       (uint)bVar15 * ((uint)bVar14 * __real_3f800000 | (uint)!bVar14 * auVar82._20_4_) |
       (uint)!bVar15 * (int)fVar134;
  local_340._24_4_ =
       (uint)bVar17 * ((uint)bVar16 * __real_3f800000 | (uint)!bVar16 * auVar82._24_4_) |
       (uint)!bVar17 * (int)fVar135;
  local_340._28_4_ =
       (uint)bVar19 * ((uint)bVar18 * __real_3f800000 | (uint)!bVar18 * auVar82._28_4_) |
       (uint)!bVar19 * (int)fVar136;
  auVar82 = vdivps_avx(auVar83,auVar110);
  bVar12 = SUB81(uVar61 >> 7,0);
  bVar6 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar13 = SUB81(uVar69 >> 7,0);
  local_320._4_4_ =
       (uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 1) & 1) * auVar82._4_4_ |
       (uint)!bVar6 * (int)fVar145;
  local_320._0_4_ =
       (uint)(bVar71 & 1) * (uint)!(bool)(bVar5 & 1) * auVar82._0_4_ |
       (uint)!(bool)(bVar71 & 1) * (int)fVar143;
  local_320._8_4_ =
       (uint)bVar7 * (uint)!(bool)((byte)(uVar61 >> 2) & 1) * auVar82._8_4_ |
       (uint)!bVar7 * (int)fVar73;
  local_320._12_4_ =
       (uint)bVar8 * (uint)!(bool)((byte)(uVar61 >> 3) & 1) * auVar82._12_4_ |
       (uint)!bVar8 * (int)fVar148;
  local_320._16_4_ =
       (uint)bVar9 * (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar82._16_4_ |
       (uint)!bVar9 * (int)fVar124;
  local_320._20_4_ =
       (uint)bVar10 * (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar82._20_4_ |
       (uint)!bVar10 * (int)fVar151;
  local_320._24_4_ =
       (uint)bVar11 * (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar82._24_4_ |
       (uint)!bVar11 * (int)fVar126;
  local_320._28_4_ =
       (uint)bVar13 *
       ((uint)bVar12 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar12 * auVar82._28_4_)
       | (uint)!bVar13 * (int)fVar127;
  auVar82 = vdivps_avx(auVar86,auVar110);
  local_300._0_4_ =
       (uint)(bVar71 & 1) * (uint)!(bool)(bVar5 & 1) * auVar82._0_4_ |
       (uint)!(bool)(bVar71 & 1) * (int)fVar137;
  bVar6 = (bool)((byte)(uVar69 >> 1) & 1);
  local_300._4_4_ =
       (uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 1) & 1) * auVar82._4_4_ |
       (uint)!bVar6 * (int)fVar144;
  bVar6 = (bool)((byte)(uVar69 >> 2) & 1);
  fStack_2f8 = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 2) & 1) * auVar82._8_4_ |
                      (uint)!bVar6 * (int)fVar146);
  bVar6 = (bool)((byte)(uVar69 >> 3) & 1);
  fStack_2f4 = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 3) & 1) * auVar82._12_4_ |
                      (uint)!bVar6 * (int)fVar147);
  bVar6 = (bool)((byte)(uVar69 >> 4) & 1);
  fStack_2f0 = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar82._16_4_ |
                      (uint)!bVar6 * (int)fVar149);
  bVar6 = (bool)((byte)(uVar69 >> 5) & 1);
  fStack_2ec = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar82._20_4_ |
                      (uint)!bVar6 * (int)fVar150);
  bVar6 = (bool)((byte)(uVar69 >> 6) & 1);
  fStack_2e8 = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar82._24_4_ |
                      (uint)!bVar6 * (int)fVar152);
  bVar6 = SUB81(uVar69 >> 7,0);
  fStack_2e4 = (float)((uint)bVar6 * (uint)!SUB81(uVar61 >> 7,0) * auVar82._28_4_ |
                      (uint)!bVar6 * (int)fVar153);
  lVar67 = (longlong)(int)(uVar70 << 2);
  auVar120._4_4_ = (uint)!(bool)((byte)(uVar61 >> 1) & 1) * auVar110._4_4_;
  auVar120._0_4_ = (uint)!(bool)(bVar5 & 1) * auVar110._0_4_;
  auVar120._8_4_ = (uint)!(bool)((byte)(uVar61 >> 2) & 1) * auVar110._8_4_;
  auVar120._12_4_ = (uint)!(bool)((byte)(uVar61 >> 3) & 1) * auVar110._12_4_;
  auVar120._16_4_ = (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar110._16_4_;
  auVar120._20_4_ = (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar110._20_4_;
  auVar120._24_4_ = (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar110._24_4_;
  bVar6 = SUB81(uVar61 >> 7,0);
  auVar120._28_4_ =
       (uint)bVar6 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar6 * auVar110._28_4_;
  auVar83 = vaddps_avx512vl(auVar111,auVar113);
  param_8 = param_8 + param_8;
  auVar155._4_4_ = param_7;
  auVar155._0_4_ = param_7;
  auVar155._8_4_ = param_7;
  auVar155._12_4_ = param_7;
  auVar155._16_4_ = param_7;
  auVar155._20_4_ = param_7;
  auVar155._24_4_ = param_7;
  auVar155._28_4_ = param_7;
  auVar82 = vdivps_avx(auVar155,auVar83);
  auVar82 = vsqrtps_avx(auVar82);
  fVar143 = param_8 * auVar82._0_4_;
  fVar145 = param_8 * auVar82._4_4_;
  fVar73 = param_8 * auVar82._8_4_;
  fVar148 = param_8 * auVar82._12_4_;
  fVar124 = param_8 * auVar82._16_4_;
  fVar151 = param_8 * auVar82._20_4_;
  fVar126 = param_8 * auVar82._24_4_;
  param_8 = param_8 * auVar82._28_4_;
  piVar3 = (int *)(param_4 + lVar67);
  auVar121._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * piVar3[1];
  auVar121._0_4_ = (uint)(bVar71 & 1) * *piVar3;
  auVar121._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * piVar3[2];
  auVar121._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * piVar3[3];
  auVar121._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * piVar3[4];
  auVar121._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * piVar3[5];
  auVar121._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * piVar3[6];
  auVar121._28_4_ = (uint)(byte)(uVar69 >> 7) * piVar3[7];
  auVar110 = vsubps_avx(auVar120,auVar121);
  auVar92._4_4_ = __real_322bcc77;
  auVar92._0_4_ = __real_322bcc77;
  auVar92._8_4_ = __real_322bcc77;
  auVar92._12_4_ = __real_322bcc77;
  auVar92._16_4_ = __real_322bcc77;
  auVar92._20_4_ = __real_322bcc77;
  auVar92._24_4_ = __real_322bcc77;
  auVar92._28_4_ = __real_322bcc77;
  uVar61 = vcmpps_avx512vl(auVar121,auVar92,1);
  auVar82 = vdivps_avx(auVar142,auVar121);
  bVar6 = (bool)((byte)uVar61 & 1);
  bVar7 = (bool)((byte)(uVar61 >> 1) & 1);
  bVar8 = (bool)((byte)(uVar61 >> 2) & 1);
  bVar9 = (bool)((byte)(uVar61 >> 3) & 1);
  bVar10 = (bool)((byte)(uVar61 >> 4) & 1);
  bVar11 = (bool)((byte)(uVar61 >> 5) & 1);
  bVar12 = (bool)((byte)(uVar61 >> 6) & 1);
  bVar13 = SUB81(uVar61 >> 7,0);
  auVar156._0_4_ =
       param_6 * (float)((uint)bVar6 * (int)fVar143 | (uint)!bVar6 * (int)(fVar143 * auVar82._0_4_))
  ;
  auVar156._4_4_ =
       param_6 * (float)((uint)bVar7 * (int)fVar145 | (uint)!bVar7 * (int)(fVar145 * auVar82._4_4_))
  ;
  auVar156._8_4_ =
       param_6 * (float)((uint)bVar8 * (int)fVar73 | (uint)!bVar8 * (int)(fVar73 * auVar82._8_4_));
  auVar156._12_4_ =
       param_6 * (float)((uint)bVar9 * (int)fVar148 | (uint)!bVar9 * (int)(fVar148 * auVar82._12_4_)
                        );
  auVar156._16_4_ =
       param_6 * (float)((uint)bVar10 * (int)fVar124 |
                        (uint)!bVar10 * (int)(fVar124 * auVar82._16_4_));
  auVar156._20_4_ =
       param_6 * (float)((uint)bVar11 * (int)fVar151 |
                        (uint)!bVar11 * (int)(fVar151 * auVar82._20_4_));
  auVar156._24_4_ =
       param_6 * (float)((uint)bVar12 * (int)fVar126 |
                        (uint)!bVar12 * (int)(fVar126 * auVar82._24_4_));
  auVar156._28_4_ =
       param_6 * (float)((uint)bVar13 * (int)param_8 |
                        (uint)!bVar13 * (int)(param_8 * auVar82._28_4_));
  auVar82 = vsubps_avx512vl(auVar96,auVar114);
  auVar82 = vsubps_avx512vl(auVar82,auVar93);
  auVar82 = vaddps_avx512vl(auVar117,auVar82);
  auVar86 = vsubps_avx512vl(auVar106,auVar115);
  auVar84 = vsubps_avx512vl(auVar62,auVar116);
  auVar86 = vsubps_avx512vl(auVar86,auVar94);
  auVar86 = vaddps_avx512vl(auVar118,auVar86);
  auVar84 = vsubps_avx512vl(auVar84,auVar95);
  auVar84 = vaddps_avx512vl(auVar119,auVar84);
  auVar86 = vmulps_avx512vl(auVar86,local_320);
  auVar82 = vfmadd231ps_avx512vl(auVar86,local_340,auVar82);
  auVar82 = vfmadd231ps_avx512vl(auVar82,_local_300,auVar84);
  piVar3 = (int *)(param_5 + lVar67);
  auVar122._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * piVar3[1];
  auVar122._0_4_ = (uint)(bVar71 & 1) * *piVar3;
  auVar122._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * piVar3[2];
  auVar122._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * piVar3[3];
  auVar122._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * piVar3[4];
  auVar122._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * piVar3[5];
  auVar122._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * piVar3[6];
  auVar122._28_4_ = (uint)(byte)(uVar69 >> 7) * piVar3[7];
  auVar86 = vbroadcastss_avx512vl(ZEXT416((uint)(param_6 * param_6 * param_7)));
  auVar110 = vfnmsub213ps_avx512vl(auVar110,auVar86,auVar122);
  auVar139._0_4_ = -(auVar156._0_4_ * auVar82._0_4_) + auVar110._0_4_;
  auVar139._4_4_ = -(auVar156._4_4_ * auVar82._4_4_) + auVar110._4_4_;
  auVar139._8_4_ = -(auVar156._8_4_ * auVar82._8_4_) + auVar110._8_4_;
  auVar139._12_4_ = -(auVar156._12_4_ * auVar82._12_4_) + auVar110._12_4_;
  auVar139._16_4_ = -(auVar156._16_4_ * auVar82._16_4_) + auVar110._16_4_;
  auVar139._20_4_ = -(auVar156._20_4_ * auVar82._20_4_) + auVar110._20_4_;
  auVar139._24_4_ = -(auVar156._24_4_ * auVar82._24_4_) + auVar110._24_4_;
  auVar139._28_4_ = -(auVar156._28_4_ * auVar82._28_4_) + auVar110._28_4_;
  auVar82 = vaddps_avx512vl(auVar86,auVar156);
  auVar82 = vfmadd213ps_avx512vl(auVar82,auVar83,auVar142);
  auVar82 = vdivps_avx512vl(auVar139,auVar82);
  auVar110 = vaddps_avx512vl(auVar122,auVar82);
  puVar4 = (uint *)(param_5 + lVar67);
  bVar6 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar12 = SUB81(uVar69 >> 7,0);
  *puVar4 = (uint)(bVar71 & 1) * auVar110._0_4_ | (uint)!(bool)(bVar71 & 1) * *puVar4;
  puVar4[1] = (uint)bVar6 * auVar110._4_4_ | (uint)!bVar6 * puVar4[1];
  puVar4[2] = (uint)bVar7 * auVar110._8_4_ | (uint)!bVar7 * puVar4[2];
  puVar4[3] = (uint)bVar8 * auVar110._12_4_ | (uint)!bVar8 * puVar4[3];
  puVar4[4] = (uint)bVar9 * auVar110._16_4_ | (uint)!bVar9 * puVar4[4];
  puVar4[5] = (uint)bVar10 * auVar110._20_4_ | (uint)!bVar10 * puVar4[5];
  puVar4[6] = (uint)bVar11 * auVar110._24_4_ | (uint)!bVar11 * puVar4[6];
  puVar4[7] = (uint)bVar12 * auVar110._28_4_ | (uint)!bVar12 * puVar4[7];
  auVar110 = vmulps_avx512vl(local_340,auVar82);
  auVar83 = vfmadd231ps_avx512vl(auVar96,auVar111,auVar110);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar108,uVar69,auVar83);
  auVar83 = vmulps_avx512vl(local_320,auVar82);
  auVar86 = vfmadd231ps_avx512vl(auVar106,auVar111,auVar83);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar140),uVar69,auVar86);
  auVar138._0_4_ = (float)local_300._0_4_ * auVar82._0_4_;
  auVar138._4_4_ = (float)local_300._4_4_ * auVar82._4_4_;
  auVar138._8_4_ = fStack_2f8 * auVar82._8_4_;
  auVar138._12_4_ = fStack_2f4 * auVar82._12_4_;
  auVar138._16_4_ = fStack_2f0 * auVar82._16_4_;
  auVar138._20_4_ = fStack_2ec * auVar82._20_4_;
  auVar138._24_4_ = fStack_2e8 * auVar82._24_4_;
  auVar138._28_4_ = fStack_2e4 * auVar82._28_4_;
  auVar86 = vfmadd231ps_avx512vl(auVar62,auVar111,auVar138);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar82,uVar69,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar83,uVar69,auVar111);
  auVar82 = vfnmadd213ps_avx512vl(auVar110,auVar113,auVar93);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar138,uVar69,auVar82);
  auVar82 = vfnmadd213ps_avx512vl(auVar83,auVar113,auVar94);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar95,uVar69,auVar82);
  auVar82 = vfnmadd213ps_avx512vl(auVar138,auVar113,auVar95);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar94,uVar69,auVar82);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar140),uVar69,auVar113);
  return;
}

// ApplyXPBDSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_avx512skx @ 140908930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,undefined4 param_7,float param_8,uint param_9)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [32];
  int *piVar5;
  uint *puVar6;
  byte bVar7;
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
  bool bVar64;
  bool bVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  undefined4 uVar68;
  longlong lVar69;
  ulonglong unaff_RBX;
  uint uVar70;
  ulonglong uVar71;
  uint uVar72;
  ulonglong uVar73;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
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
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  float fVar123;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM27 [64];
  undefined1 auVar150 [16];
  undefined1 in_ZMM28 [64];
  undefined1 auVar151 [16];
  undefined1 in_ZMM29 [64];
  undefined1 auVar152 [16];
  undefined1 in_ZMM30 [64];
  undefined1 auVar153 [16];
  undefined1 in_ZMM31 [64];
  undefined1 local_280 [32];
  undefined1 local_260 [8];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  undefined1 local_240 [8];
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined4 auStack_218 [4];
  undefined4 uStack_208;
  undefined4 uStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
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
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  
  uVar68 = __real_38d1b717;
  auVar153 = in_ZMM31._0_16_;
  auVar152 = in_ZMM30._0_16_;
  auVar81 = in_ZMM22._0_16_;
  auVar151 = in_ZMM29._0_16_;
  auVar150 = in_ZMM28._0_16_;
  auVar80 = in_ZMM27._0_16_;
  auVar78 = in_ZMM21._0_16_;
  auVar79 = in_ZMM26._0_16_;
  auVar77 = in_ZMM25._0_16_;
  auVar76 = in_ZMM24._0_16_;
  auVar75 = in_ZMM23._0_16_;
  uVar70 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar70 = param_9;
  }
  local_1c0 = param_8 + param_8;
  uVar70 = uVar70 & 0xfffffff8;
  if ((int)uVar70 < 1) {
    uVar72 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fStack_1bc = local_1c0;
    fStack_1b8 = local_1c0;
    fStack_1b4 = local_1c0;
    fStack_1b0 = local_1c0;
    fStack_1ac = local_1c0;
    fStack_1a8 = local_1c0;
    fStack_1a4 = local_1c0;
    local_1e0 = param_7;
    uStack_1dc = param_7;
    uStack_1d8 = param_7;
    uStack_1d4 = param_7;
    uStack_1d0 = param_7;
    uStack_1cc = param_7;
    uStack_1c8 = param_7;
    uStack_1c4 = param_7;
    local_200 = param_6;
    fStack_1fc = param_6;
    fStack_1f8 = param_6;
    fStack_1f4 = param_6;
    fStack_1f0 = param_6;
    fStack_1ec = param_6;
    fStack_1e8 = param_6;
    fStack_1e4 = param_6;
    uVar73 = 0;
    auVar82 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar83 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar84 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auStack_218[0] = __real_38d1b717;
    auStack_218[1] = __real_38d1b717;
    auStack_218[2] = __real_38d1b717;
    auStack_218[3] = __real_38d1b717;
    uStack_208 = __real_38d1b717;
    uStack_204 = __real_38d1b717;
    auVar85 = vbroadcastss_avx512vl(ZEXT416((uint)__real_3f800000));
    auVar75 = auVar85._0_16_;
    auVar86 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar76 = auVar86._0_16_;
    uVar71 = 0;
    do {
      auVar100 = *(undefined1 (*) [32])(param_3 + uVar71 * 2);
      auVar88 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar71 * 2);
      auVar87 = vpermt2d_avx512vl(auVar100,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar88);
      auVar88 = vpermt2d_avx512vl(auVar100,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar88);
      auVar89 = vpslld_avx512vl(auVar87,4);
      auVar79 = auVar89._0_16_;
      auVar90 = vpslld_avx512vl(auVar88,4);
      auVar77 = auVar90._0_16_;
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar73));
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar150 = auVar77 | auVar82._0_16_;
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar152 = auVar77 | auVar83._0_16_;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_9));
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      fVar113 = auVar97._8_4_;
      fVar114 = auVar97._12_4_;
      fVar115 = auVar97._16_4_;
      fVar116 = auVar97._20_4_;
      fVar117 = auVar97._24_4_;
      fVar118 = auVar97._28_4_;
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar70));
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 5));
      auVar124 = vpslld_avx2(auVar87,2);
      auVar87 = vpslld_avx2(auVar87,3);
      auVar100._0_4_ = auVar87._0_4_ + auVar124._0_4_;
      auVar100._4_4_ = auVar87._4_4_ + auVar124._4_4_;
      auVar100._8_4_ = auVar87._8_4_ + auVar124._8_4_;
      auVar100._12_4_ = auVar87._12_4_ + auVar124._12_4_;
      auVar100._16_4_ = auVar87._16_4_ + auVar124._16_4_;
      auVar100._20_4_ = auVar87._20_4_ + auVar124._20_4_;
      auVar100._24_4_ = auVar87._24_4_ + auVar124._24_4_;
      auVar100._28_4_ = auVar87._28_4_ + auVar124._28_4_;
      vpaddd_avx512vl(auVar100,auVar82);
      auVar87 = vpaddd_avx512vl(auVar88,auVar88);
      vpaddd_avx512vl(auVar88,auVar87);
      vpaddd_avx512vl(auVar100,auVar83);
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1 * 4));
      auVar100 = vpslld_avx512vl(auVar88,2);
      auVar88 = vpslld_avx2(auVar88,3);
      auVar100 = vpaddd_avx512vl(auVar88,auVar100);
      vpaddd_avx512vl(auVar100,auVar82);
      auVar124 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
      vpaddd_avx512vl(auVar100,auVar83);
      auVar101 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBX));
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_R15));
      auVar103 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
      unaff_RBX = uVar71 & 0xffffffff;
      auVar100 = vsubps_avx512vl(auVar91,auVar92);
      auVar104 = vsubps_avx512vl(auVar93,auVar94);
      auVar105 = vsubps_avx512vl(auVar95,auVar96);
      auVar88 = vmulps_avx512vl(auVar104,auVar104);
      auVar88 = vfmadd231ps_avx512vl(auVar88,auVar100,auVar100);
      auVar106 = vfmadd231ps_avx512vl(auVar88,auVar105,auVar105);
      auVar88._4_4_ = uVar68;
      auVar88._0_4_ = uVar68;
      auVar88._8_4_ = uVar68;
      auVar88._12_4_ = uVar68;
      auVar88._16_4_ = uVar68;
      auVar88._20_4_ = uVar68;
      auVar88._24_4_ = uVar68;
      auVar88._28_4_ = uVar68;
      uVar66 = vcmpps_avx512vl(auVar106,auVar88,1);
      auVar88 = vsqrtps_avx512vl(auVar106);
      auVar81 = auVar88._0_16_;
      auVar106 = vdivps_avx512vl(auVar100,auVar88);
      auVar104 = vdivps_avx512vl(auVar104,auVar88);
      auVar88 = vdivps_avx512vl(auVar105,auVar88);
      uVar67 = vcmpps_avx512vl(*(undefined1 (*) [32])(param_4 + unaff_RBX),auVar86,1);
      auVar105 = vdivps_avx512vl(auVar85,*(undefined1 (*) [32])(param_4 + unaff_RBX));
      auVar100 = vsubps_avx(auVar91,auVar99);
      auVar100 = vsubps_avx512vl(auVar100,auVar92);
      auVar119._0_4_ = auVar100._0_4_ + auVar87._0_4_;
      auVar119._4_4_ = auVar100._4_4_ + auVar87._4_4_;
      auVar119._8_4_ = auVar100._8_4_ + auVar87._8_4_;
      auVar119._12_4_ = auVar100._12_4_ + auVar87._12_4_;
      auVar119._16_4_ = auVar100._16_4_ + auVar87._16_4_;
      auVar119._20_4_ = auVar100._20_4_ + auVar87._20_4_;
      auVar119._24_4_ = auVar100._24_4_ + auVar87._24_4_;
      auVar119._28_4_ = auVar100._28_4_ + auVar87._28_4_;
      fVar142 = auVar97._0_4_;
      auVar135._0_4_ = fVar142 + auVar98._0_4_;
      fVar144 = auVar97._4_4_;
      auVar135._4_4_ = fVar144 + auVar98._4_4_;
      auVar135._8_4_ = fVar113 + auVar98._8_4_;
      auVar135._12_4_ = fVar114 + auVar98._12_4_;
      auVar135._16_4_ = fVar115 + auVar98._16_4_;
      auVar135._20_4_ = fVar116 + auVar98._20_4_;
      auVar135._24_4_ = fVar117 + auVar98._24_4_;
      auVar135._28_4_ = fVar118 + auVar98._28_4_;
      auVar100 = vsubps_avx(auVar93,auVar124);
      auVar100 = vsubps_avx512vl(auVar100,auVar94);
      auVar121._0_4_ = auVar100._0_4_ + auVar102._0_4_;
      auVar121._4_4_ = auVar100._4_4_ + auVar102._4_4_;
      auVar121._8_4_ = auVar100._8_4_ + auVar102._8_4_;
      auVar121._12_4_ = auVar100._12_4_ + auVar102._12_4_;
      auVar121._16_4_ = auVar100._16_4_ + auVar102._16_4_;
      auVar121._20_4_ = auVar100._20_4_ + auVar102._20_4_;
      auVar121._24_4_ = auVar100._24_4_ + auVar102._24_4_;
      auVar121._28_4_ = auVar100._28_4_ + auVar102._28_4_;
      auVar99._4_4_ = param_7;
      auVar99._0_4_ = param_7;
      auVar99._8_4_ = param_7;
      auVar99._12_4_ = param_7;
      auVar99._16_4_ = param_7;
      auVar99._20_4_ = param_7;
      auVar99._24_4_ = param_7;
      auVar99._28_4_ = param_7;
      auVar100 = vdivps_avx(auVar99,auVar135);
      auVar100 = vsqrtps_avx(auVar100);
      auVar136._0_4_ = auVar100._0_4_ * local_1c0;
      auVar136._4_4_ = auVar100._4_4_ * local_1c0;
      auVar136._8_4_ = auVar100._8_4_ * local_1c0;
      auVar136._12_4_ = auVar100._12_4_ * local_1c0;
      auVar136._16_4_ = auVar100._16_4_ * local_1c0;
      auVar136._20_4_ = auVar100._20_4_ * local_1c0;
      auVar136._24_4_ = auVar100._24_4_ * local_1c0;
      auVar136._28_4_ = auVar100._28_4_ * local_1c0;
      auVar100 = vmulps_avx512vl(auVar136,auVar105);
      bVar8 = (bool)((byte)uVar67 & 1);
      auVar124._0_4_ = (uint)bVar8 * (int)auVar136._0_4_ | (uint)!bVar8 * auVar100._0_4_;
      bVar8 = (bool)((byte)(uVar67 >> 1) & 1);
      auVar124._4_4_ = (uint)bVar8 * (int)auVar136._4_4_ | (uint)!bVar8 * auVar100._4_4_;
      bVar8 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar124._8_4_ = (uint)bVar8 * (int)auVar136._8_4_ | (uint)!bVar8 * auVar100._8_4_;
      bVar8 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar124._12_4_ = (uint)bVar8 * (int)auVar136._12_4_ | (uint)!bVar8 * auVar100._12_4_;
      bVar8 = (bool)((byte)(uVar67 >> 4) & 1);
      auVar124._16_4_ = (uint)bVar8 * (int)auVar136._16_4_ | (uint)!bVar8 * auVar100._16_4_;
      bVar8 = (bool)((byte)(uVar67 >> 5) & 1);
      auVar124._20_4_ = (uint)bVar8 * (int)auVar136._20_4_ | (uint)!bVar8 * auVar100._20_4_;
      bVar8 = (bool)((byte)(uVar67 >> 6) & 1);
      auVar124._24_4_ = (uint)bVar8 * (int)auVar136._24_4_ | (uint)!bVar8 * auVar100._24_4_;
      bVar8 = SUB81(uVar67 >> 7,0);
      auVar124._28_4_ = (uint)bVar8 * (int)auVar136._28_4_ | (uint)!bVar8 * auVar100._28_4_;
      auVar100 = vsubps_avx(auVar95,auVar101);
      auVar100 = vsubps_avx512vl(auVar100,auVar96);
      bVar74 = (byte)uVar66;
      auVar101._4_4_ = (uint)!(bool)((byte)(uVar66 >> 1) & 1) * auVar104._4_4_;
      auVar101._0_4_ = (uint)!(bool)(bVar74 & 1) * auVar104._0_4_;
      auVar101._8_4_ = (uint)!(bool)((byte)(uVar66 >> 2) & 1) * auVar104._8_4_;
      auVar101._12_4_ = (uint)!(bool)((byte)(uVar66 >> 3) & 1) * auVar104._12_4_;
      auVar101._16_4_ = (uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar104._16_4_;
      auVar101._20_4_ = (uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar104._20_4_;
      auVar101._24_4_ = (uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar104._24_4_;
      bVar8 = SUB81(uVar66 >> 7,0);
      auVar101._28_4_ =
           (uint)bVar8 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar8 * auVar104._28_4_
      ;
      auVar87 = vmulps_avx512vl(auVar101,auVar121);
      auVar78._0_4_ =
           (uint)(bVar74 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar106._0_4_;
      bVar8 = (bool)((byte)(uVar66 >> 1) & 1);
      auVar78._4_4_ = (uint)bVar8 * auVar85._4_4_ | (uint)!bVar8 * auVar106._4_4_;
      bVar8 = (bool)((byte)(uVar66 >> 2) & 1);
      auVar78._8_4_ = (uint)bVar8 * auVar85._8_4_ | (uint)!bVar8 * auVar106._8_4_;
      bVar8 = (bool)((byte)(uVar66 >> 3) & 1);
      auVar78._12_4_ = (uint)bVar8 * auVar85._12_4_ | (uint)!bVar8 * auVar106._12_4_;
      bVar8 = (bool)((byte)(uVar66 >> 4) & 1);
      auVar102._16_4_ = (uint)bVar8 * auVar85._16_4_ | (uint)!bVar8 * auVar106._16_4_;
      auVar102._0_16_ = auVar78;
      bVar8 = (bool)((byte)(uVar66 >> 5) & 1);
      auVar102._20_4_ = (uint)bVar8 * auVar85._20_4_ | (uint)!bVar8 * auVar106._20_4_;
      bVar8 = (bool)((byte)(uVar66 >> 6) & 1);
      auVar102._24_4_ = (uint)bVar8 * auVar85._24_4_ | (uint)!bVar8 * auVar106._24_4_;
      bVar8 = SUB81(uVar66 >> 7,0);
      auVar102._28_4_ = (uint)bVar8 * auVar85._28_4_ | (uint)!bVar8 * auVar106._28_4_;
      auVar99 = vfmadd231ps_avx512vl(auVar87,auVar102,auVar119);
      fVar137 = (float)((uint)!(bool)(bVar74 & 1) * auVar88._0_4_);
      fVar1 = (float)((uint)!(bool)((byte)(uVar66 >> 1) & 1) * auVar88._4_4_);
      fVar143 = (float)((uint)!(bool)((byte)(uVar66 >> 2) & 1) * auVar88._8_4_);
      fVar141 = (float)((uint)!(bool)((byte)(uVar66 >> 3) & 1) * auVar88._12_4_);
      fVar140 = (float)((uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar88._16_4_);
      fVar145 = (float)((uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar88._20_4_);
      fVar139 = (float)((uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar88._24_4_);
      fVar138 = (float)((uint)!SUB81(uVar66 >> 7,0) * auVar88._28_4_);
      pfVar2 = (float *)(param_5 + unaff_RBX);
      fVar123 = pfVar2[1];
      fVar128 = pfVar2[2];
      fVar129 = pfVar2[3];
      fVar130 = pfVar2[4];
      fVar131 = pfVar2[5];
      fVar132 = pfVar2[6];
      fVar133 = pfVar2[7];
      auVar87._4_4_ = param_6;
      auVar87._0_4_ = param_6;
      auVar87._8_4_ = param_6;
      auVar87._12_4_ = param_6;
      auVar87._16_4_ = param_6;
      auVar87._20_4_ = param_6;
      auVar87._24_4_ = param_6;
      auVar87._28_4_ = param_6;
      auVar88 = vmulps_avx512vl(auVar124,auVar87);
      auVar104._0_4_ =
           -(auVar88._0_4_ * (fVar137 * (auVar100._0_4_ + auVar103._0_4_) + auVar99._0_4_)) -
           *pfVar2;
      auVar104._4_4_ =
           -(auVar88._4_4_ * (fVar1 * (auVar100._4_4_ + auVar103._4_4_) + auVar99._4_4_)) - fVar123;
      auVar104._8_4_ =
           -(auVar88._8_4_ * (fVar143 * (auVar100._8_4_ + auVar103._8_4_) + auVar99._8_4_)) -
           fVar128;
      auVar104._12_4_ =
           -(auVar88._12_4_ * (fVar141 * (auVar100._12_4_ + auVar103._12_4_) + auVar99._12_4_)) -
           fVar129;
      auVar104._16_4_ =
           -(auVar88._16_4_ * (fVar140 * (auVar100._16_4_ + auVar103._16_4_) + auVar99._16_4_)) -
           fVar130;
      auVar104._20_4_ =
           -(auVar88._20_4_ * (fVar145 * (auVar100._20_4_ + auVar103._20_4_) + auVar99._20_4_)) -
           fVar131;
      auVar104._24_4_ =
           -(auVar88._24_4_ * (fVar139 * (auVar100._24_4_ + auVar103._24_4_) + auVar99._24_4_)) -
           fVar132;
      auVar104._28_4_ =
           -(auVar88._28_4_ * (fVar138 * (auVar100._28_4_ + auVar103._28_4_) + auVar99._28_4_)) -
           fVar133;
      auVar100 = vfmadd213ps_avx512vl(auVar88,auVar135,auVar85);
      auVar100 = vdivps_avx(auVar104,auVar100);
      pfVar3 = (float *)(param_5 + unaff_RBX);
      *pfVar3 = *pfVar2 + auVar100._0_4_;
      pfVar3[1] = fVar123 + auVar100._4_4_;
      pfVar3[2] = fVar128 + auVar100._8_4_;
      pfVar3[3] = fVar129 + auVar100._12_4_;
      pfVar3[4] = fVar130 + auVar100._16_4_;
      pfVar3[5] = fVar131 + auVar100._20_4_;
      pfVar3[6] = fVar132 + auVar100._24_4_;
      pfVar3[7] = fVar133 + auVar100._28_4_;
      auVar88 = vmulps_avx512vl(auVar102,auVar100);
      auVar103._0_4_ = fVar142 * auVar88._0_4_ + auVar91._0_4_;
      auVar103._4_4_ = fVar144 * auVar88._4_4_ + auVar91._4_4_;
      auVar103._8_4_ = fVar113 * auVar88._8_4_ + auVar91._8_4_;
      auVar103._12_4_ = fVar114 * auVar88._12_4_ + auVar91._12_4_;
      auVar103._16_4_ = fVar115 * auVar88._16_4_ + auVar91._16_4_;
      auVar103._20_4_ = fVar116 * auVar88._20_4_ + auVar91._20_4_;
      auVar103._24_4_ = fVar117 * auVar88._24_4_ + auVar91._24_4_;
      auVar103._28_4_ = fVar118 * auVar88._28_4_ + auVar91._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar93,0xffff,auVar103);
      auVar87 = vmulps_avx512vl(auVar101,auVar100);
      auVar105._0_4_ = fVar142 * auVar87._0_4_ + auVar93._0_4_;
      auVar105._4_4_ = fVar144 * auVar87._4_4_ + auVar93._4_4_;
      auVar105._8_4_ = fVar113 * auVar87._8_4_ + auVar93._8_4_;
      auVar105._12_4_ = fVar114 * auVar87._12_4_ + auVar93._12_4_;
      auVar105._16_4_ = fVar115 * auVar87._16_4_ + auVar93._16_4_;
      auVar105._20_4_ = fVar116 * auVar87._20_4_ + auVar93._20_4_;
      auVar105._24_4_ = fVar117 * auVar87._24_4_ + auVar93._24_4_;
      auVar105._28_4_ = fVar118 * auVar87._28_4_ + auVar93._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar82),0xffff,auVar105);
      auVar91._0_4_ = fVar137 * auVar100._0_4_;
      auVar91._4_4_ = fVar1 * auVar100._4_4_;
      auVar91._8_4_ = fVar143 * auVar100._8_4_;
      auVar91._12_4_ = fVar141 * auVar100._12_4_;
      auVar91._16_4_ = fVar140 * auVar100._16_4_;
      auVar91._20_4_ = fVar145 * auVar100._20_4_;
      auVar91._24_4_ = fVar139 * auVar100._24_4_;
      auVar91._28_4_ = fVar138 * auVar100._28_4_;
      auVar93._0_4_ = fVar142 * auVar91._0_4_ + auVar95._0_4_;
      auVar93._4_4_ = fVar144 * auVar91._4_4_ + auVar95._4_4_;
      auVar93._8_4_ = fVar113 * auVar91._8_4_ + auVar95._8_4_;
      auVar93._12_4_ = fVar114 * auVar91._12_4_ + auVar95._12_4_;
      auVar93._16_4_ = fVar115 * auVar91._16_4_ + auVar95._16_4_;
      auVar93._20_4_ = fVar116 * auVar91._20_4_ + auVar95._20_4_;
      auVar93._24_4_ = fVar117 * auVar91._24_4_ + auVar95._24_4_;
      auVar93._28_4_ = fVar118 * auVar91._28_4_ + auVar95._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar83),0xffff,auVar93);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar84),0xffff,auVar97);
      auVar100 = vfnmadd231ps_avx512vl(auVar92,auVar98,auVar88);
      in_ZMM27 = ZEXT3264(auVar100);
      auVar80 = auVar100._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar98,0xffff,auVar100);
      auVar100 = vfnmadd231ps_avx512vl(auVar94,auVar98,auVar87);
      in_ZMM29 = ZEXT3264(auVar100);
      auVar151 = auVar100._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar84),0xffff,auVar100);
      auVar100 = vfnmadd231ps_avx512vl(auVar96,auVar98,auVar91);
      in_ZMM31 = ZEXT3264(auVar100);
      auVar153 = auVar100._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar97,0xffff,auVar100);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar90 | auVar84),0xffff,auVar98);
      uVar71 = uVar71 + 0x20;
      uVar72 = (int)uVar73 + 8;
      uVar73 = (ulonglong)uVar72;
    } while ((int)uVar72 < (int)uVar70);
    if ((int)param_9 <= (int)uVar72) {
      return;
    }
  }
  auVar82 = vpbroadcastd_avx512vl();
  auVar82 = vpor_avx2(auVar82,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar83 = vpbroadcastd_avx512vl();
  uVar71 = vpcmpgtd_avx512vl(auVar83,auVar82);
  pauVar4 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar72 * 8);
  bVar74 = (byte)uVar71;
  if (bVar74 == 0xff) {
    auVar83 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                ,*pauVar4,pauVar4[1]);
    auVar82 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                );
    auVar82 = vpermi2d_avx512vl(auVar82,*pauVar4,pauVar4[1]);
  }
  else {
    auVar82 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar4 + (longlong)param_1));
    auVar83._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * auVar82._4_4_;
    auVar83._0_4_ = (uint)(bVar74 & 1) * auVar82._0_4_;
    auVar83._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * auVar82._8_4_;
    auVar83._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * auVar82._12_4_;
    auVar83._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar82._16_4_;
    auVar83._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar82._20_4_;
    auVar83._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar82._24_4_;
    auVar83._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar82._28_4_;
    auVar75 = vxorps_avx512vl(auVar75,auVar75);
    auVar84 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar4 + (longlong)param_1));
    auVar82._0_4_ = (uint)(bVar74 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar75._0_4_;
    bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
    auVar82._4_4_ = (uint)bVar8 * auVar84._4_4_ | (uint)!bVar8 * auVar75._4_4_;
    bVar8 = (bool)((byte)(uVar71 >> 2) & 1);
    auVar82._8_4_ = (uint)bVar8 * auVar84._8_4_ | (uint)!bVar8 * auVar75._8_4_;
    bVar8 = (bool)((byte)(uVar71 >> 3) & 1);
    auVar82._12_4_ = (uint)bVar8 * auVar84._12_4_ | (uint)!bVar8 * auVar75._12_4_;
    auVar82._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar84._16_4_;
    auVar82._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar84._20_4_;
    auVar82._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar84._24_4_;
    auVar82._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar84._28_4_;
  }
  auVar91 = vpslld_avx2(auVar83,4);
  auVar122._4_4_ = __real_00000004;
  auVar122._0_4_ = __real_00000004;
  auVar122._8_4_ = __real_00000004;
  auVar122._12_4_ = __real_00000004;
  auVar122._16_4_ = __real_00000004;
  auVar122._20_4_ = __real_00000004;
  auVar122._24_4_ = __real_00000004;
  auVar122._28_4_ = __real_00000004;
  auVar75 = vxorps_avx512vl(auVar76,auVar76);
  auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar31 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar76 = vxorps_avx512vl(auVar77,auVar77);
  auVar85 = vgatherdps_avx512vl(*param_1);
  bVar9 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar32 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar125._4_4_ = __real_00000008;
  auVar125._0_4_ = __real_00000008;
  auVar125._8_4_ = __real_00000008;
  auVar125._12_4_ = __real_00000008;
  auVar125._16_4_ = __real_00000008;
  auVar125._20_4_ = __real_00000008;
  auVar125._24_4_ = __real_00000008;
  auVar125._28_4_ = __real_00000008;
  auVar77 = vxorps_avx512vl(auVar79,auVar79);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
  bVar10 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar71 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar78 = vxorps_avx512vl(auVar78,auVar78);
  auVar100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  auVar96._0_4_ = (uint)(bVar74 & 1) * auVar100._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar78._0_4_;
  bVar11 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar96._4_4_ = (uint)bVar11 * auVar100._4_4_ | (uint)!bVar11 * auVar78._4_4_;
  bVar11 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar96._8_4_ = (uint)bVar11 * auVar100._8_4_ | (uint)!bVar11 * auVar78._8_4_;
  bVar11 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar96._12_4_ = (uint)bVar11 * auVar100._12_4_ | (uint)!bVar11 * auVar78._12_4_;
  auVar96._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar100._16_4_;
  auVar96._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar100._20_4_;
  auVar96._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar100._24_4_;
  auVar96._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar100._28_4_;
  auVar100 = vpslld_avx512vl(auVar82,4);
  auVar78 = vxorps_avx512vl(auVar80,auVar80);
  auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_218));
  bVar11 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar23 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar79 = vxorps_avx512vl(auVar150,auVar150);
  auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar12 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar35 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar80 = vxorps_avx512vl(auVar151,auVar151);
  auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  auVar150._0_4_ = (uint)(bVar74 & 1) * auVar99._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar80._0_4_;
  bVar13 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar150._4_4_ = (uint)bVar13 * auVar99._4_4_ | (uint)!bVar13 * auVar80._4_4_;
  bVar13 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar150._8_4_ = (uint)bVar13 * auVar99._8_4_ | (uint)!bVar13 * auVar80._8_4_;
  bVar13 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar150._12_4_ = (uint)bVar13 * auVar99._12_4_ | (uint)!bVar13 * auVar80._12_4_;
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar89 = vgatherdps_avx512vl(*param_1);
  auVar97._0_4_ = (uint)(bVar74 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar13 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar97._4_4_ = (uint)bVar13 * auVar89._4_4_ | (uint)!bVar13 * auVar81._4_4_;
  bVar13 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar97._8_4_ = (uint)bVar13 * auVar89._8_4_ | (uint)!bVar13 * auVar81._8_4_;
  bVar13 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar97._12_4_ = (uint)bVar13 * auVar89._12_4_ | (uint)!bVar13 * auVar81._12_4_;
  auVar97._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar89._16_4_;
  auVar97._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar89._20_4_;
  auVar97._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar89._24_4_;
  auVar97._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar89._28_4_;
  bVar13 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar25 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar36 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar42 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar48 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar54 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar60 = SUB81(uVar71 >> 7,0);
  bVar14 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar26 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar37 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar43 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar49 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar55 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar61 = SUB81(uVar71 >> 7,0);
  bVar15 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar27 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar38 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar44 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar50 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar56 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar62 = SUB81(uVar71 >> 7,0);
  bVar16 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar28 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar39 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar45 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar51 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar57 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar63 = SUB81(uVar71 >> 7,0);
  bVar17 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar29 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar40 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar46 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar52 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar58 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar64 = SUB81(uVar71 >> 7,0);
  bVar18 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar30 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar41 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar47 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar53 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar59 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar65 = SUB81(uVar71 >> 7,0);
  auVar89 = vpaddd_avx512vl(auVar83,auVar83);
  vpaddd_avx512vl(auVar83,auVar89);
  auVar81 = vxorps_avx512vl(auVar150,auVar150);
  auVar89 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)pauVar4 * 4));
  auVar98._0_4_ = (uint)(bVar74 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar19 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar98._4_4_ = (uint)bVar19 * auVar89._4_4_ | (uint)!bVar19 * auVar81._4_4_;
  bVar19 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar98._8_4_ = (uint)bVar19 * auVar89._8_4_ | (uint)!bVar19 * auVar81._8_4_;
  bVar19 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar98._12_4_ = (uint)bVar19 * auVar89._12_4_ | (uint)!bVar19 * auVar81._12_4_;
  auVar98._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar89._16_4_;
  auVar98._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar89._20_4_;
  auVar98._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar89._24_4_;
  auVar98._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar89._28_4_;
  auVar89 = vpslld_avx512vl(auVar83,2);
  auVar83 = vpslld_avx2(auVar83,3);
  auVar83 = vpaddd_avx512vl(auVar83,auVar89);
  vpaddd_avx512vl(auVar83,auVar122);
  auVar81 = vxorps_avx512vl(auVar152,auVar152);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar4 + param_2));
  auVar106._0_4_ = (uint)(bVar74 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar19 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar106._4_4_ = (uint)bVar19 * auVar83._4_4_ | (uint)!bVar19 * auVar81._4_4_;
  bVar19 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar106._8_4_ = (uint)bVar19 * auVar83._8_4_ | (uint)!bVar19 * auVar81._8_4_;
  bVar19 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar106._12_4_ = (uint)bVar19 * auVar83._12_4_ | (uint)!bVar19 * auVar81._12_4_;
  auVar106._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar83._16_4_;
  auVar106._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar83._20_4_;
  auVar106._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar83._24_4_;
  auVar106._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar83._28_4_;
  auVar81 = vxorps_avx512vl(auVar153,auVar153);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar107._0_4_ = (uint)(bVar74 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar19 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar107._4_4_ = (uint)bVar19 * auVar83._4_4_ | (uint)!bVar19 * auVar81._4_4_;
  bVar19 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar107._8_4_ = (uint)bVar19 * auVar83._8_4_ | (uint)!bVar19 * auVar81._8_4_;
  bVar19 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar107._12_4_ = (uint)bVar19 * auVar83._12_4_ | (uint)!bVar19 * auVar81._12_4_;
  auVar107._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar83._16_4_;
  auVar107._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar83._20_4_;
  auVar107._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar83._24_4_;
  auVar107._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar83._28_4_;
  auVar83 = vpaddd_avx512vl(auVar82,auVar82);
  vpaddd_avx512vl(auVar82,auVar83);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)pauVar4 * 4));
  auVar108._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * auVar83._4_4_;
  auVar108._0_4_ = (uint)(bVar74 & 1) * auVar83._0_4_;
  auVar108._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * auVar83._8_4_;
  auVar108._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * auVar83._12_4_;
  auVar108._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar83._16_4_;
  auVar108._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar83._20_4_;
  auVar108._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar83._24_4_;
  auVar108._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar83._28_4_;
  auVar83 = vpslld_avx512vl(auVar82,2);
  auVar82 = vpslld_avx512vl(auVar82,3);
  auVar82 = vpaddd_avx512vl(auVar82,auVar83);
  vpaddd_avx512vl(auVar82,auVar122);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
  auVar109._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * auVar83._4_4_;
  auVar109._0_4_ = (uint)(bVar74 & 1) * auVar83._0_4_;
  auVar109._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * auVar83._8_4_;
  auVar109._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * auVar83._12_4_;
  auVar109._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar83._16_4_;
  auVar109._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar83._20_4_;
  auVar109._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar83._24_4_;
  auVar109._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar83._28_4_;
  vpaddd_avx512vl(auVar82,auVar125);
  auVar82 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
  auVar110._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * auVar82._4_4_;
  auVar110._0_4_ = (uint)(bVar74 & 1) * auVar82._0_4_;
  auVar110._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * auVar82._8_4_;
  auVar110._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * auVar82._12_4_;
  auVar110._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar82._16_4_;
  auVar110._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar82._20_4_;
  auVar110._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar82._24_4_;
  auVar110._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar82._28_4_;
  auVar92._4_4_ =
       (uint)bVar13 * ((uint)bVar8 * auVar84._4_4_ | (uint)!bVar8 * auVar75._4_4_) |
       (uint)!bVar13 * iStack_13c;
  auVar92._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar75._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_140;
  auVar92._8_4_ =
       (uint)bVar25 * ((uint)bVar20 * auVar84._8_4_ | (uint)!bVar20 * auVar75._8_4_) |
       (uint)!bVar25 * iStack_138;
  auVar92._12_4_ =
       (uint)bVar36 * ((uint)bVar31 * auVar84._12_4_ | (uint)!bVar31 * auVar75._12_4_) |
       (uint)!bVar36 * iStack_134;
  auVar92._16_4_ =
       (uint)bVar42 * (uint)((byte)(uVar71 >> 4) & 1) * auVar84._16_4_ | (uint)!bVar42 * iStack_130;
  auVar92._20_4_ =
       (uint)bVar48 * (uint)((byte)(uVar71 >> 5) & 1) * auVar84._20_4_ | (uint)!bVar48 * iStack_12c;
  auVar92._24_4_ =
       (uint)bVar54 * (uint)((byte)(uVar71 >> 6) & 1) * auVar84._24_4_ | (uint)!bVar54 * iStack_128;
  auVar92._28_4_ =
       (uint)bVar60 * (uint)(byte)(uVar71 >> 7) * auVar84._28_4_ | (uint)!bVar60 * iStack_124;
  auVar94._4_4_ =
       (uint)bVar14 * ((uint)bVar9 * auVar85._4_4_ | (uint)!bVar9 * auVar76._4_4_) |
       (uint)!bVar14 * iStack_11c;
  auVar94._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar76._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_120;
  auVar94._8_4_ =
       (uint)bVar26 * ((uint)bVar21 * auVar85._8_4_ | (uint)!bVar21 * auVar76._8_4_) |
       (uint)!bVar26 * iStack_118;
  auVar94._12_4_ =
       (uint)bVar37 * ((uint)bVar32 * auVar85._12_4_ | (uint)!bVar32 * auVar76._12_4_) |
       (uint)!bVar37 * iStack_114;
  auVar94._16_4_ =
       (uint)bVar43 * (uint)((byte)(uVar71 >> 4) & 1) * auVar85._16_4_ | (uint)!bVar43 * iStack_110;
  auVar94._20_4_ =
       (uint)bVar49 * (uint)((byte)(uVar71 >> 5) & 1) * auVar85._20_4_ | (uint)!bVar49 * iStack_10c;
  auVar94._24_4_ =
       (uint)bVar55 * (uint)((byte)(uVar71 >> 6) & 1) * auVar85._24_4_ | (uint)!bVar55 * iStack_108;
  auVar94._28_4_ =
       (uint)bVar61 * (uint)(byte)(uVar71 >> 7) * auVar85._28_4_ | (uint)!bVar61 * iStack_104;
  auVar95._4_4_ =
       (uint)bVar15 * ((uint)bVar10 * auVar86._4_4_ | (uint)!bVar10 * auVar77._4_4_) |
       (uint)!bVar15 * iStack_fc;
  auVar95._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar77._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_100;
  auVar95._8_4_ =
       (uint)bVar27 * ((uint)bVar22 * auVar86._8_4_ | (uint)!bVar22 * auVar77._8_4_) |
       (uint)!bVar27 * iStack_f8;
  auVar95._12_4_ =
       (uint)bVar38 * ((uint)bVar33 * auVar86._12_4_ | (uint)!bVar33 * auVar77._12_4_) |
       (uint)!bVar38 * iStack_f4;
  auVar95._16_4_ =
       (uint)bVar44 * (uint)((byte)(uVar71 >> 4) & 1) * auVar86._16_4_ | (uint)!bVar44 * iStack_f0;
  auVar95._20_4_ =
       (uint)bVar50 * (uint)((byte)(uVar71 >> 5) & 1) * auVar86._20_4_ | (uint)!bVar50 * iStack_ec;
  auVar95._24_4_ =
       (uint)bVar56 * (uint)((byte)(uVar71 >> 6) & 1) * auVar86._24_4_ | (uint)!bVar56 * iStack_e8;
  auVar95._28_4_ =
       (uint)bVar62 * (uint)(byte)(uVar71 >> 7) * auVar86._28_4_ | (uint)!bVar62 * iStack_e4;
  auVar86._4_4_ =
       (uint)bVar16 * ((uint)bVar11 * auVar88._4_4_ | (uint)!bVar11 * auVar78._4_4_) |
       (uint)!bVar16 * iStack_19c;
  auVar86._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar88._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar78._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_1a0;
  auVar86._8_4_ =
       (uint)bVar28 * ((uint)bVar23 * auVar88._8_4_ | (uint)!bVar23 * auVar78._8_4_) |
       (uint)!bVar28 * iStack_198;
  auVar86._12_4_ =
       (uint)bVar39 * ((uint)bVar34 * auVar88._12_4_ | (uint)!bVar34 * auVar78._12_4_) |
       (uint)!bVar39 * iStack_194;
  auVar86._16_4_ =
       (uint)bVar45 * (uint)((byte)(uVar71 >> 4) & 1) * auVar88._16_4_ | (uint)!bVar45 * iStack_190;
  auVar86._20_4_ =
       (uint)bVar51 * (uint)((byte)(uVar71 >> 5) & 1) * auVar88._20_4_ | (uint)!bVar51 * iStack_18c;
  auVar86._24_4_ =
       (uint)bVar57 * (uint)((byte)(uVar71 >> 6) & 1) * auVar88._24_4_ | (uint)!bVar57 * iStack_188;
  auVar86._28_4_ =
       (uint)bVar63 * (uint)(byte)(uVar71 >> 7) * auVar88._28_4_ | (uint)!bVar63 * iStack_184;
  auVar89._4_4_ =
       (uint)bVar17 * ((uint)bVar12 * auVar87._4_4_ | (uint)!bVar12 * auVar79._4_4_) |
       (uint)!bVar17 * iStack_17c;
  auVar89._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar79._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_180;
  auVar89._8_4_ =
       (uint)bVar29 * ((uint)bVar24 * auVar87._8_4_ | (uint)!bVar24 * auVar79._8_4_) |
       (uint)!bVar29 * iStack_178;
  auVar89._12_4_ =
       (uint)bVar40 * ((uint)bVar35 * auVar87._12_4_ | (uint)!bVar35 * auVar79._12_4_) |
       (uint)!bVar40 * iStack_174;
  auVar89._16_4_ =
       (uint)bVar46 * (uint)((byte)(uVar71 >> 4) & 1) * auVar87._16_4_ | (uint)!bVar46 * iStack_170;
  auVar89._20_4_ =
       (uint)bVar52 * (uint)((byte)(uVar71 >> 5) & 1) * auVar87._20_4_ | (uint)!bVar52 * iStack_16c;
  auVar89._24_4_ =
       (uint)bVar58 * (uint)((byte)(uVar71 >> 6) & 1) * auVar87._24_4_ | (uint)!bVar58 * iStack_168;
  auVar89._28_4_ =
       (uint)bVar64 * (uint)(byte)(uVar71 >> 7) * auVar87._28_4_ | (uint)!bVar64 * iStack_164;
  auVar90._4_4_ = bVar18 * auVar150._4_4_ | (uint)!bVar18 * iStack_15c;
  auVar90._0_4_ = (bVar74 & 1) * auVar150._0_4_ | (uint)!(bool)(bVar74 & 1) * local_160;
  auVar90._8_4_ = bVar30 * auVar150._8_4_ | (uint)!bVar30 * iStack_158;
  auVar90._12_4_ = bVar41 * auVar150._12_4_ | (uint)!bVar41 * iStack_154;
  auVar90._16_4_ =
       (uint)bVar47 * (uint)((byte)(uVar71 >> 4) & 1) * auVar99._16_4_ | (uint)!bVar47 * iStack_150;
  auVar90._20_4_ =
       (uint)bVar53 * (uint)((byte)(uVar71 >> 5) & 1) * auVar99._20_4_ | (uint)!bVar53 * iStack_14c;
  auVar90._24_4_ =
       (uint)bVar59 * (uint)((byte)(uVar71 >> 6) & 1) * auVar99._24_4_ | (uint)!bVar59 * iStack_148;
  auVar90._28_4_ =
       (uint)bVar65 * (uint)(byte)(uVar71 >> 7) * auVar99._28_4_ | (uint)!bVar65 * iStack_144;
  auVar82 = vsubps_avx512vl(auVar92,auVar86);
  auVar83 = vsubps_avx512vl(auVar94,auVar89);
  auVar85 = vsubps_avx512vl(auVar95,auVar90);
  fVar137 = auVar83._0_4_;
  fVar138 = auVar83._4_4_;
  fVar139 = auVar83._8_4_;
  fVar140 = auVar83._12_4_;
  fVar141 = auVar83._16_4_;
  fVar143 = auVar83._20_4_;
  fVar145 = auVar83._24_4_;
  fVar1 = auVar83._28_4_;
  fVar123 = auVar82._0_4_;
  fVar128 = auVar82._4_4_;
  fVar129 = auVar82._8_4_;
  fVar130 = auVar82._12_4_;
  fVar131 = auVar82._16_4_;
  fVar132 = auVar82._20_4_;
  fVar133 = auVar82._24_4_;
  fVar113 = auVar82._28_4_;
  fVar114 = auVar85._0_4_;
  auVar147._0_4_ = fVar114 * fVar114 + fVar123 * fVar123 + fVar137 * fVar137;
  fVar115 = auVar85._4_4_;
  auVar147._4_4_ = fVar115 * fVar115 + fVar128 * fVar128 + fVar138 * fVar138;
  fVar116 = auVar85._8_4_;
  auVar147._8_4_ = fVar116 * fVar116 + fVar129 * fVar129 + fVar139 * fVar139;
  fVar117 = auVar85._12_4_;
  auVar147._12_4_ = fVar117 * fVar117 + fVar130 * fVar130 + fVar140 * fVar140;
  fVar118 = auVar85._16_4_;
  auVar147._16_4_ = fVar118 * fVar118 + fVar131 * fVar131 + fVar141 * fVar141;
  fVar142 = auVar85._20_4_;
  auVar147._20_4_ = fVar142 * fVar142 + fVar132 * fVar132 + fVar143 * fVar143;
  fVar144 = auVar85._24_4_;
  auVar147._24_4_ = fVar144 * fVar144 + fVar133 * fVar133 + fVar145 * fVar145;
  fVar146 = auVar85._28_4_;
  auVar147._28_4_ = fVar146 * fVar146 + fVar113 * fVar113 + fVar1 * fVar1;
  auVar84._4_4_ = __real_38d1b717;
  auVar84._0_4_ = __real_38d1b717;
  auVar84._8_4_ = __real_38d1b717;
  auVar84._12_4_ = __real_38d1b717;
  auVar84._16_4_ = __real_38d1b717;
  auVar84._20_4_ = __real_38d1b717;
  auVar84._24_4_ = __real_38d1b717;
  auVar84._28_4_ = __real_38d1b717;
  uVar73 = vcmpps_avx512vl(auVar147,auVar84,1);
  auVar84 = vsqrtps_avx(auVar147);
  auVar82 = vdivps_avx(auVar82,auVar84);
  auVar83 = vdivps_avx(auVar83,auVar84);
  auVar84 = vdivps_avx(auVar85,auVar84);
  bVar7 = (byte)uVar73;
  bVar20 = SUB81(uVar73 >> 7,0);
  auVar148._4_4_ = __real_3f800000;
  auVar148._0_4_ = __real_3f800000;
  auVar148._8_4_ = __real_3f800000;
  auVar148._12_4_ = __real_3f800000;
  auVar148._16_4_ = __real_3f800000;
  auVar148._20_4_ = __real_3f800000;
  auVar148._24_4_ = __real_3f800000;
  auVar148._28_4_ = __real_3f800000;
  bVar8 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar14 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar16 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar18 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar21 = SUB81(uVar73 >> 7,0);
  bVar9 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar11 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar13 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar15 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar17 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar22 = SUB81(uVar71 >> 7,0);
  local_280._4_4_ =
       (uint)bVar9 * ((uint)bVar8 * (int)__real_3f800000 | (uint)!bVar8 * auVar82._4_4_) |
       (uint)!bVar9 * (int)fVar128;
  local_280._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar7 & 1) * (int)__real_3f800000 | (uint)!(bool)(bVar7 & 1) * auVar82._0_4_) |
       (uint)!(bool)(bVar74 & 1) * (int)fVar123;
  local_280._8_4_ =
       (uint)bVar11 * ((uint)bVar10 * (int)__real_3f800000 | (uint)!bVar10 * auVar82._8_4_) |
       (uint)!bVar11 * (int)fVar129;
  local_280._12_4_ =
       (uint)bVar13 * ((uint)bVar12 * (int)__real_3f800000 | (uint)!bVar12 * auVar82._12_4_) |
       (uint)!bVar13 * (int)fVar130;
  local_280._16_4_ =
       (uint)bVar15 * ((uint)bVar14 * (int)__real_3f800000 | (uint)!bVar14 * auVar82._16_4_) |
       (uint)!bVar15 * (int)fVar131;
  local_280._20_4_ =
       (uint)bVar17 * ((uint)bVar16 * (int)__real_3f800000 | (uint)!bVar16 * auVar82._20_4_) |
       (uint)!bVar17 * (int)fVar132;
  local_280._24_4_ =
       (uint)bVar19 * ((uint)bVar18 * (int)__real_3f800000 | (uint)!bVar18 * auVar82._24_4_) |
       (uint)!bVar19 * (int)fVar133;
  local_280._28_4_ =
       (uint)bVar22 * ((uint)bVar21 * (int)__real_3f800000 | (uint)!bVar21 * auVar82._28_4_) |
       (uint)!bVar22 * (int)fVar113;
  lVar69 = (longlong)(int)(uVar72 << 2);
  local_260._0_4_ =
       (uint)(bVar74 & 1) * (uint)!(bool)(bVar7 & 1) * auVar83._0_4_ |
       (uint)!(bool)(bVar74 & 1) * (int)fVar137;
  bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
  local_260._4_4_ =
       (uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 1) & 1) * auVar83._4_4_ |
       (uint)!bVar8 * (int)fVar138;
  bVar8 = (bool)((byte)(uVar71 >> 2) & 1);
  fStack_258 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 2) & 1) * auVar83._8_4_ |
                      (uint)!bVar8 * (int)fVar139);
  bVar8 = (bool)((byte)(uVar71 >> 3) & 1);
  fStack_254 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 3) & 1) * auVar83._12_4_ |
                      (uint)!bVar8 * (int)fVar140);
  bVar8 = (bool)((byte)(uVar71 >> 4) & 1);
  fStack_250 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 4) & 1) * auVar83._16_4_ |
                      (uint)!bVar8 * (int)fVar141);
  bVar8 = (bool)((byte)(uVar71 >> 5) & 1);
  fStack_24c = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 5) & 1) * auVar83._20_4_ |
                      (uint)!bVar8 * (int)fVar143);
  bVar8 = (bool)((byte)(uVar71 >> 6) & 1);
  fStack_248 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 6) & 1) * auVar83._24_4_ |
                      (uint)!bVar8 * (int)fVar145);
  bVar8 = SUB81(uVar71 >> 7,0);
  fStack_244 = (float)((uint)bVar8 *
                       ((uint)bVar20 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                       (uint)!bVar20 * auVar83._28_4_) | (uint)!bVar8 * (int)fVar1);
  piVar5 = (int *)(param_4 + lVar69);
  auVar111._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * piVar5[1];
  auVar111._0_4_ = (uint)(bVar74 & 1) * *piVar5;
  auVar111._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * piVar5[2];
  auVar111._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * piVar5[3];
  auVar111._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * piVar5[4];
  auVar111._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * piVar5[5];
  auVar111._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * piVar5[6];
  auVar111._28_4_ = (uint)(byte)(uVar71 >> 7) * piVar5[7];
  local_240._0_4_ =
       (uint)(bVar74 & 1) * (uint)!(bool)(bVar7 & 1) * auVar84._0_4_ |
       (uint)!(bool)(bVar74 & 1) * (int)fVar114;
  bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
  local_240._4_4_ =
       (uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 1) & 1) * auVar84._4_4_ |
       (uint)!bVar8 * (int)fVar115;
  bVar8 = (bool)((byte)(uVar71 >> 2) & 1);
  fStack_238 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 2) & 1) * auVar84._8_4_ |
                      (uint)!bVar8 * (int)fVar116);
  bVar8 = (bool)((byte)(uVar71 >> 3) & 1);
  fStack_234 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 3) & 1) * auVar84._12_4_ |
                      (uint)!bVar8 * (int)fVar117);
  bVar8 = (bool)((byte)(uVar71 >> 4) & 1);
  fStack_230 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 4) & 1) * auVar84._16_4_ |
                      (uint)!bVar8 * (int)fVar118);
  bVar8 = (bool)((byte)(uVar71 >> 5) & 1);
  fStack_22c = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 5) & 1) * auVar84._20_4_ |
                      (uint)!bVar8 * (int)fVar142);
  bVar8 = (bool)((byte)(uVar71 >> 6) & 1);
  fStack_228 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 6) & 1) * auVar84._24_4_ |
                      (uint)!bVar8 * (int)fVar144);
  bVar8 = SUB81(uVar71 >> 7,0);
  fStack_224 = (float)((uint)bVar8 * (uint)!SUB81(uVar73 >> 7,0) * auVar84._28_4_ |
                      (uint)!bVar8 * (int)fVar146);
  auVar85._4_4_ = __real_322bcc77;
  auVar85._0_4_ = __real_322bcc77;
  auVar85._8_4_ = __real_322bcc77;
  auVar85._12_4_ = __real_322bcc77;
  auVar85._16_4_ = __real_322bcc77;
  auVar85._20_4_ = __real_322bcc77;
  auVar85._24_4_ = __real_322bcc77;
  auVar85._28_4_ = __real_322bcc77;
  uVar73 = vcmpps_avx512vl(auVar111,auVar85,1);
  auVar83 = vaddps_avx512vl(auVar96,auVar97);
  auVar149._4_4_ = param_7;
  auVar149._0_4_ = param_7;
  auVar149._8_4_ = param_7;
  auVar149._12_4_ = param_7;
  auVar149._16_4_ = param_7;
  auVar149._20_4_ = param_7;
  auVar149._24_4_ = param_7;
  auVar149._28_4_ = param_7;
  auVar82 = vdivps_avx(auVar149,auVar83);
  auVar82 = vsqrtps_avx(auVar82);
  fVar137 = local_1c0 * auVar82._0_4_;
  fVar138 = local_1c0 * auVar82._4_4_;
  fVar139 = local_1c0 * auVar82._8_4_;
  fVar140 = local_1c0 * auVar82._12_4_;
  fVar141 = local_1c0 * auVar82._16_4_;
  fVar143 = local_1c0 * auVar82._20_4_;
  fVar145 = local_1c0 * auVar82._24_4_;
  local_1c0 = local_1c0 * auVar82._28_4_;
  auVar82 = vdivps_avx(auVar148,auVar111);
  bVar8 = (bool)((byte)uVar73 & 1);
  bVar9 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar13 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar14 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar15 = SUB81(uVar73 >> 7,0);
  auVar126._0_4_ =
       param_6 * (float)((uint)bVar8 * (int)fVar137 | (uint)!bVar8 * (int)(fVar137 * auVar82._0_4_))
  ;
  auVar126._4_4_ =
       param_6 * (float)((uint)bVar9 * (int)fVar138 | (uint)!bVar9 * (int)(fVar138 * auVar82._4_4_))
  ;
  auVar126._8_4_ =
       param_6 * (float)((uint)bVar10 * (int)fVar139 |
                        (uint)!bVar10 * (int)(fVar139 * auVar82._8_4_));
  auVar126._12_4_ =
       param_6 * (float)((uint)bVar11 * (int)fVar140 |
                        (uint)!bVar11 * (int)(fVar140 * auVar82._12_4_));
  auVar126._16_4_ =
       param_6 * (float)((uint)bVar12 * (int)fVar141 |
                        (uint)!bVar12 * (int)(fVar141 * auVar82._16_4_));
  auVar126._20_4_ =
       param_6 * (float)((uint)bVar13 * (int)fVar143 |
                        (uint)!bVar13 * (int)(fVar143 * auVar82._20_4_));
  auVar126._24_4_ =
       param_6 * (float)((uint)bVar14 * (int)fVar145 |
                        (uint)!bVar14 * (int)(fVar145 * auVar82._24_4_));
  auVar126._28_4_ =
       param_6 * (float)((uint)bVar15 * (int)local_1c0 |
                        (uint)!bVar15 * (int)(local_1c0 * auVar82._28_4_));
  auVar82 = vsubps_avx512vl(auVar92,auVar98);
  auVar84 = vsubps_avx512vl(auVar94,auVar106);
  auVar85 = vsubps_avx512vl(auVar95,auVar107);
  auVar82 = vsubps_avx512vl(auVar82,auVar86);
  auVar82 = vaddps_avx512vl(auVar108,auVar82);
  auVar84 = vsubps_avx512vl(auVar84,auVar89);
  auVar84 = vaddps_avx512vl(auVar109,auVar84);
  auVar85 = vsubps_avx512vl(auVar85,auVar90);
  auVar85 = vaddps_avx512vl(auVar110,auVar85);
  auVar84 = vmulps_avx512vl(auVar84,_local_260);
  auVar82 = vfmadd231ps_avx512vl(auVar84,local_280,auVar82);
  auVar82 = vfmadd231ps_avx512vl(auVar82,_local_240,auVar85);
  piVar5 = (int *)(param_5 + lVar69);
  fVar1 = (float)((uint)(bVar74 & 1) * *piVar5);
  fVar137 = (float)((uint)((byte)(uVar71 >> 1) & 1) * piVar5[1]);
  auVar112._4_4_ = fVar137;
  auVar112._0_4_ = fVar1;
  fVar138 = (float)((uint)((byte)(uVar71 >> 2) & 1) * piVar5[2]);
  auVar112._8_4_ = fVar138;
  fVar139 = (float)((uint)((byte)(uVar71 >> 3) & 1) * piVar5[3]);
  auVar112._12_4_ = fVar139;
  fVar140 = (float)((uint)((byte)(uVar71 >> 4) & 1) * piVar5[4]);
  auVar112._16_4_ = fVar140;
  fVar141 = (float)((uint)((byte)(uVar71 >> 5) & 1) * piVar5[5]);
  auVar112._20_4_ = fVar141;
  fVar143 = (float)((uint)((byte)(uVar71 >> 6) & 1) * piVar5[6]);
  auVar112._24_4_ = fVar143;
  fVar145 = (float)((uint)(byte)(uVar71 >> 7) * piVar5[7]);
  auVar112._28_4_ = fVar145;
  auVar82 = vfnmsub213ps_avx512vl(auVar82,auVar126,auVar112);
  auVar127._0_4_ = auVar83._0_4_ * auVar126._0_4_ + __real_3f800000;
  auVar127._4_4_ = auVar83._4_4_ * auVar126._4_4_ + __real_3f800000;
  auVar127._8_4_ = auVar83._8_4_ * auVar126._8_4_ + __real_3f800000;
  auVar127._12_4_ = auVar83._12_4_ * auVar126._12_4_ + __real_3f800000;
  auVar127._16_4_ = auVar83._16_4_ * auVar126._16_4_ + __real_3f800000;
  auVar127._20_4_ = auVar83._20_4_ * auVar126._20_4_ + __real_3f800000;
  auVar127._24_4_ = auVar83._24_4_ * auVar126._24_4_ + __real_3f800000;
  auVar127._28_4_ = auVar83._28_4_ * auVar126._28_4_ + __real_3f800000;
  auVar82 = vdivps_avx512vl(auVar82,auVar127);
  fVar123 = auVar82._0_4_;
  fVar128 = auVar82._4_4_;
  fVar129 = auVar82._8_4_;
  fVar130 = auVar82._12_4_;
  fVar131 = auVar82._16_4_;
  fVar132 = auVar82._20_4_;
  fVar133 = auVar82._24_4_;
  fVar113 = auVar82._28_4_;
  puVar6 = (uint *)(param_5 + lVar69);
  bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar11 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar12 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar14 = SUB81(uVar71 >> 7,0);
  *puVar6 = (uint)(bVar74 & 1) * (int)(fVar1 + fVar123) | (uint)!(bool)(bVar74 & 1) * *puVar6;
  puVar6[1] = (uint)bVar8 * (int)(fVar137 + fVar128) | (uint)!bVar8 * puVar6[1];
  puVar6[2] = (uint)bVar9 * (int)(fVar138 + fVar129) | (uint)!bVar9 * puVar6[2];
  puVar6[3] = (uint)bVar10 * (int)(fVar139 + fVar130) | (uint)!bVar10 * puVar6[3];
  puVar6[4] = (uint)bVar11 * (int)(fVar140 + fVar131) | (uint)!bVar11 * puVar6[4];
  puVar6[5] = (uint)bVar12 * (int)(fVar141 + fVar132) | (uint)!bVar12 * puVar6[5];
  puVar6[6] = (uint)bVar13 * (int)(fVar143 + fVar133) | (uint)!bVar13 * puVar6[6];
  puVar6[7] = (uint)bVar14 * (int)(fVar145 + fVar113) | (uint)!bVar14 * puVar6[7];
  auVar83 = vmulps_avx512vl(local_280,auVar82);
  auVar84 = vfmadd231ps_avx512vl(auVar92,auVar96,auVar83);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar71,auVar84);
  auVar134._0_4_ = (float)local_260._0_4_ * fVar123;
  auVar134._4_4_ = (float)local_260._4_4_ * fVar128;
  auVar134._8_4_ = fStack_258 * fVar129;
  auVar134._12_4_ = fStack_254 * fVar130;
  auVar134._16_4_ = fStack_250 * fVar131;
  auVar134._20_4_ = fStack_24c * fVar132;
  auVar134._24_4_ = fStack_248 * fVar133;
  auVar134._28_4_ = fStack_244 * fVar113;
  auVar84 = vfmadd231ps_avx512vl(auVar94,auVar96,auVar134);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar122),uVar71,auVar84);
  auVar120._0_4_ = (float)local_240._0_4_ * fVar123;
  auVar120._4_4_ = (float)local_240._4_4_ * fVar128;
  auVar120._8_4_ = fStack_238 * fVar129;
  auVar120._12_4_ = fStack_234 * fVar130;
  auVar120._16_4_ = fStack_230 * fVar131;
  auVar120._20_4_ = fStack_22c * fVar132;
  auVar120._24_4_ = fStack_228 * fVar133;
  auVar120._28_4_ = fStack_224 * fVar113;
  auVar84 = vfmadd231ps_avx512vl(auVar95,auVar96,auVar120);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar120,uVar71,auVar84);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar134,uVar71,auVar96);
  auVar83 = vfnmadd213ps_avx512vl(auVar83,auVar97,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar100,uVar71,auVar83);
  auVar84 = vfnmadd213ps_avx512vl(auVar134,auVar97,auVar89);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar83,uVar71,auVar84);
  auVar83 = vfnmadd213ps_avx512vl(auVar120,auVar97,auVar90);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar82,uVar71,auVar83);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar122),uVar71,auVar97);
  return;
}

// ApplyXPBDSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx @ 140909260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,float param_5
               ,longlong param_6,longlong param_7,uint param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [32];
  int *piVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
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
  bool bVar64;
  bool bVar65;
  ulonglong uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  ulonglong unaff_RBX;
  uint uVar74;
  undefined1 auVar81 [16];
  undefined1 (*pauVar75) [16];
  ulonglong uVar76;
  longlong lVar77;
  longlong unaff_R12;
  ulonglong unaff_R14;
  byte bVar78;
  int iVar79;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  int iVar110;
  int iVar111;
  undefined1 auVar87 [32];
  undefined1 auVar80 [16];
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
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar82 [16];
  int iVar112;
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [32];
  float fVar117;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar118 [32];
  float fVar125;
  undefined1 auVar126 [32];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 auVar127 [16];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 auVar128 [16];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
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
  int aiStack_178 [4];
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
  
  auVar107 = ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001;
  auVar106 = ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000;
  auVar85 = in_ZMM26._0_16_;
  auVar128 = in_ZMM25._0_16_;
  auVar84 = in_ZMM24._0_16_;
  auVar83 = in_ZMM20._0_16_;
  auVar82 = in_ZMM23._0_16_;
  auVar127 = in_ZMM22._0_16_;
  auVar81 = in_ZMM21._0_16_;
  uVar74 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar74 = param_8;
  }
  uVar74 = uVar74 & 0xfffffff8;
  if ((int)uVar74 < 1) {
    uVar76 = 0;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    unaff_RBX = 0;
    auVar114._4_4_ = __real_00000004;
    auVar114._0_4_ = __real_00000004;
    auVar114._8_4_ = __real_00000004;
    auVar114._12_4_ = __real_00000004;
    auVar108._16_4_ = __real_00000004;
    auVar108._0_16_ = auVar114;
    auVar108._20_4_ = __real_00000004;
    auVar108._24_4_ = __real_00000004;
    auVar108._28_4_ = __real_00000004;
    auVar115._4_4_ = __real_00000008;
    auVar115._0_4_ = __real_00000008;
    auVar115._8_4_ = __real_00000008;
    auVar115._12_4_ = __real_00000008;
    auVar109._16_4_ = __real_00000008;
    auVar109._0_16_ = auVar115;
    auVar109._20_4_ = __real_00000008;
    auVar109._24_4_ = __real_00000008;
    auVar109._28_4_ = __real_00000008;
    auVar87 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar80 = vxorps_avx512vl(in_ZMM17._0_16_,in_ZMM17._0_16_);
    auVar88 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar89 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
    uVar76 = 0;
    do {
      auVar90 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + unaff_RBX * 2));
      auVar91 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x20 + unaff_RBX * 2));
      auVar92 = vmovdqa64_avx512vl(auVar90);
      auVar92 = vpermt2d_avx512vl(auVar92,auVar106,auVar91);
      auVar90 = vpermt2d_avx512vl(auVar90,auVar107,auVar91);
      auVar93 = vpslld_avx512vl(auVar92,4);
      auVar94 = vpslld_avx512vl(auVar90,4);
      auVar83 = auVar94._0_16_;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar96 = vgatherdps_avx512vl(*param_1);
      auVar84 = auVar96._0_16_;
      in_ZMM24 = ZEXT3264(auVar96);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar127 = auVar83 | auVar114;
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar76));
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_8));
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar128 = auVar83 | auVar115;
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      unaff_R14 = unaff_RBX & 0xffffffff;
      pfVar1 = (float *)(param_4 + unaff_R14);
      fVar67 = pfVar1[1];
      fVar68 = pfVar1[2];
      fVar69 = pfVar1[3];
      fVar70 = pfVar1[4];
      fVar71 = pfVar1[5];
      fVar72 = pfVar1[6];
      fVar73 = pfVar1[7];
      auVar81._8_8_ = 0;
      auVar81._0_8_ = *(ulonglong *)(param_6 + uVar76);
      auVar90 = vpmovzxbd_avx2(auVar81);
      auVar101 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      in_ZMM31 = ZEXT3264(auVar101);
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar74));
      auVar90 = vpslld_avx2(auVar90,2);
      vpmovzxdq_avx2(auVar90._0_16_);
      vpmovzxdq_avx2(auVar90._16_16_);
      auVar81 = vgatherqps_avx512vl(*(undefined8 *)(param_7 + uVar76));
      auVar82 = vgatherqps_avx512vl(*(undefined8 *)(param_7 + unaff_R12));
      auVar90 = vsubps_avx512vl(auVar95,auVar96);
      auVar91 = vsubps_avx512vl(auVar97,auVar98);
      auVar92 = vsubps_avx512vl(auVar99,auVar100);
      auVar113._0_4_ =
           auVar92._0_4_ * auVar92._0_4_ +
           auVar90._0_4_ * auVar90._0_4_ + auVar91._0_4_ * auVar91._0_4_;
      auVar113._4_4_ =
           auVar92._4_4_ * auVar92._4_4_ +
           auVar90._4_4_ * auVar90._4_4_ + auVar91._4_4_ * auVar91._4_4_;
      auVar113._8_4_ =
           auVar92._8_4_ * auVar92._8_4_ +
           auVar90._8_4_ * auVar90._8_4_ + auVar91._8_4_ * auVar91._8_4_;
      auVar113._12_4_ =
           auVar92._12_4_ * auVar92._12_4_ +
           auVar90._12_4_ * auVar90._12_4_ + auVar91._12_4_ * auVar91._12_4_;
      auVar113._16_4_ =
           auVar92._16_4_ * auVar92._16_4_ +
           auVar90._16_4_ * auVar90._16_4_ + auVar91._16_4_ * auVar91._16_4_;
      auVar113._20_4_ =
           auVar92._20_4_ * auVar92._20_4_ +
           auVar90._20_4_ * auVar90._20_4_ + auVar91._20_4_ * auVar91._20_4_;
      auVar113._24_4_ =
           auVar92._24_4_ * auVar92._24_4_ +
           auVar90._24_4_ * auVar90._24_4_ + auVar91._24_4_ * auVar91._24_4_;
      auVar113._28_4_ =
           auVar92._28_4_ * auVar92._28_4_ +
           auVar90._28_4_ * auVar90._28_4_ + auVar91._28_4_ * auVar91._28_4_;
      auVar104 = vsqrtps_avx(auVar113);
      uVar66 = vcmpps_avx512vl(auVar113,auVar88,1);
      auVar90 = vdivps_avx(auVar90,auVar104);
      auVar91 = vdivps_avx(auVar91,auVar104);
      auVar92 = vdivps_avx(auVar92,auVar104);
      bVar78 = (byte)uVar66;
      iVar79 = auVar80._0_4_;
      auVar103._0_4_ = (uint)(bVar78 & 1) * iVar79 | (uint)!(bool)(bVar78 & 1) * auVar104._0_4_;
      bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
      iVar110 = auVar80._4_4_;
      auVar103._4_4_ = (uint)bVar9 * iVar110 | (uint)!bVar9 * auVar104._4_4_;
      bVar9 = (bool)((byte)(uVar66 >> 2) & 1);
      iVar111 = auVar80._8_4_;
      auVar103._8_4_ = (uint)bVar9 * iVar111 | (uint)!bVar9 * auVar104._8_4_;
      bVar9 = (bool)((byte)(uVar66 >> 3) & 1);
      iVar112 = auVar80._12_4_;
      auVar103._12_4_ = (uint)bVar9 * iVar112 | (uint)!bVar9 * auVar104._12_4_;
      auVar103._16_4_ = (uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar104._16_4_;
      auVar103._20_4_ = (uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar104._20_4_;
      auVar103._24_4_ = (uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar104._24_4_;
      bVar9 = SUB81(uVar66 >> 7,0);
      auVar103._28_4_ =
           (uint)bVar9 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar9 * auVar104._28_4_
      ;
      auVar104 = vsubps_avx(auVar103,*(undefined1 (*) [32])(param_3 + unaff_R14));
      auVar103 = vaddps_avx512vl(auVar101,auVar102);
      auVar118._0_4_ = auVar81._0_4_ * param_5 * param_5;
      auVar118._4_4_ = auVar81._4_4_ * param_5 * param_5;
      auVar118._8_4_ = auVar81._8_4_ * param_5 * param_5;
      auVar118._12_4_ = auVar81._12_4_ * param_5 * param_5;
      auVar118._16_4_ = auVar82._0_4_ * param_5 * param_5;
      auVar118._20_4_ = auVar82._4_4_ * param_5 * param_5;
      auVar118._24_4_ = auVar82._8_4_ * param_5 * param_5;
      auVar118._28_4_ = auVar82._12_4_ * param_5 * param_5;
      auVar126._0_4_ = -(auVar118._0_4_ * auVar104._0_4_) - *pfVar1;
      auVar126._4_4_ = -(auVar118._4_4_ * auVar104._4_4_) - fVar67;
      auVar126._8_4_ = -(auVar118._8_4_ * auVar104._8_4_) - fVar68;
      auVar126._12_4_ = -(auVar118._12_4_ * auVar104._12_4_) - fVar69;
      auVar126._16_4_ = -(auVar118._16_4_ * auVar104._16_4_) - fVar70;
      auVar126._20_4_ = -(auVar118._20_4_ * auVar104._20_4_) - fVar71;
      auVar126._24_4_ = -(auVar118._24_4_ * auVar104._24_4_) - fVar72;
      auVar126._28_4_ = -(auVar118._28_4_ * auVar104._28_4_) - fVar73;
      auVar104 = vfmadd213ps_avx512vl(auVar103,auVar118,auVar89);
      auVar104 = vdivps_avx(auVar126,auVar104);
      fVar117 = auVar104._0_4_;
      fVar119 = auVar104._4_4_;
      fVar120 = auVar104._8_4_;
      fVar121 = auVar104._12_4_;
      fVar122 = auVar104._16_4_;
      fVar123 = auVar104._20_4_;
      fVar124 = auVar104._24_4_;
      fVar125 = auVar104._28_4_;
      auVar105._0_4_ =
           (uint)(bVar78 & 1) * (int)fVar117 |
           (uint)!(bool)(bVar78 & 1) * (int)(fVar117 * auVar90._0_4_);
      bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
      auVar105._4_4_ = (uint)bVar9 * (int)fVar119 | (uint)!bVar9 * (int)(fVar119 * auVar90._4_4_);
      bVar9 = (bool)((byte)(uVar66 >> 2) & 1);
      auVar105._8_4_ = (uint)bVar9 * (int)fVar120 | (uint)!bVar9 * (int)(fVar120 * auVar90._8_4_);
      bVar9 = (bool)((byte)(uVar66 >> 3) & 1);
      auVar105._12_4_ = (uint)bVar9 * (int)fVar121 | (uint)!bVar9 * (int)(fVar121 * auVar90._12_4_);
      bVar9 = (bool)((byte)(uVar66 >> 4) & 1);
      auVar105._16_4_ = (uint)bVar9 * (int)fVar122 | (uint)!bVar9 * (int)(fVar122 * auVar90._16_4_);
      bVar9 = (bool)((byte)(uVar66 >> 5) & 1);
      auVar105._20_4_ = (uint)bVar9 * (int)fVar123 | (uint)!bVar9 * (int)(fVar123 * auVar90._20_4_);
      bVar9 = (bool)((byte)(uVar66 >> 6) & 1);
      auVar105._24_4_ = (uint)bVar9 * (int)fVar124 | (uint)!bVar9 * (int)(fVar124 * auVar90._24_4_);
      bVar9 = SUB81(uVar66 >> 7,0);
      auVar105._28_4_ = (uint)bVar9 * (int)fVar125 | (uint)!bVar9 * (int)(fVar125 * auVar90._28_4_);
      pfVar2 = (float *)(param_4 + unaff_R14);
      *pfVar2 = *pfVar1 + fVar117;
      pfVar2[1] = fVar67 + fVar119;
      pfVar2[2] = fVar68 + fVar120;
      pfVar2[3] = fVar69 + fVar121;
      pfVar2[4] = fVar70 + fVar122;
      pfVar2[5] = fVar71 + fVar123;
      pfVar2[6] = fVar72 + fVar124;
      pfVar2[7] = fVar73 + fVar125;
      auVar90 = vfmadd231ps_avx512vl(auVar95,auVar101,auVar105);
      in_ZMM28 = ZEXT3264(auVar90);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar109,0xffff,auVar90);
      auVar90._0_4_ = (uint)(bVar78 & 1) * iVar79 | (uint)!(bool)(bVar78 & 1) * auVar91._0_4_;
      bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
      auVar90._4_4_ = (uint)bVar9 * iVar110 | (uint)!bVar9 * auVar91._4_4_;
      bVar9 = (bool)((byte)(uVar66 >> 2) & 1);
      auVar90._8_4_ = (uint)bVar9 * iVar111 | (uint)!bVar9 * auVar91._8_4_;
      bVar9 = (bool)((byte)(uVar66 >> 3) & 1);
      auVar90._12_4_ = (uint)bVar9 * iVar112 | (uint)!bVar9 * auVar91._12_4_;
      auVar90._16_4_ = (uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar91._16_4_;
      auVar90._20_4_ = (uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar91._20_4_;
      auVar90._24_4_ = (uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar91._24_4_;
      auVar90._28_4_ = (uint)!SUB81(uVar66 >> 7,0) * auVar91._28_4_;
      auVar90 = vmulps_avx512vl(auVar90,auVar104);
      auVar81 = auVar90._0_16_;
      auVar91 = vfmadd231ps_avx512vl(auVar97,auVar101,auVar90);
      in_ZMM29 = ZEXT3264(auVar91);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar104,0xffff,auVar91);
      auVar91._0_4_ = (uint)(bVar78 & 1) * iVar79 | (uint)!(bool)(bVar78 & 1) * auVar92._0_4_;
      bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
      auVar91._4_4_ = (uint)bVar9 * iVar110 | (uint)!bVar9 * auVar92._4_4_;
      bVar9 = (bool)((byte)(uVar66 >> 2) & 1);
      auVar91._8_4_ = (uint)bVar9 * iVar111 | (uint)!bVar9 * auVar92._8_4_;
      bVar9 = (bool)((byte)(uVar66 >> 3) & 1);
      auVar91._12_4_ = (uint)bVar9 * iVar112 | (uint)!bVar9 * auVar92._12_4_;
      auVar91._16_4_ = (uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar92._16_4_;
      auVar91._20_4_ = (uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar92._20_4_;
      auVar91._24_4_ = (uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar92._24_4_;
      bVar9 = SUB81(uVar66 >> 7,0);
      auVar91._28_4_ =
           (uint)bVar9 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar9 * auVar92._28_4_;
      auVar92 = vmulps_avx512vl(auVar91,auVar104);
      auVar104 = vfmadd231ps_avx512vl(auVar99,auVar101,auVar92);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,0xffff,auVar104);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar93 | auVar87),0xffff,auVar101);
      auVar91 = vfmadd213ps_avx512vl(auVar105,auVar102,auVar96);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar108,0xffff,auVar91);
      auVar90 = vfmadd231ps_avx512vl(auVar98,auVar102,auVar90);
      in_ZMM23 = ZEXT3264(auVar90);
      auVar82 = auVar90._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar104,0xffff,auVar90);
      auVar90 = vfmadd231ps_avx512vl(auVar100,auVar102,auVar92);
      in_ZMM26 = ZEXT3264(auVar90);
      auVar85 = auVar90._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar93 | auVar87),0xffff,auVar90);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar94 | auVar87),0xffff,auVar102);
      uVar76 = uVar76 + 8;
      unaff_RBX = unaff_RBX + 0x20;
    } while ((int)uVar76 < (int)uVar74);
    if ((int)param_8 <= (int)uVar76) {
      return;
    }
  }
  auVar106 = vpbroadcastd_avx512vl();
  auVar106 = vpor_avx2(auVar106,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar107 = vpbroadcastd_avx512vl();
  uVar66 = vpcmpgtd_avx512vl(auVar107,auVar106);
  pauVar3 = (undefined1 (*) [32])(param_2 + (uVar76 & 0xffffffff) * 8);
  bVar78 = (byte)uVar66;
  if (bVar78 == 0xff) {
    auVar107 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                 ,*pauVar3,pauVar3[1]);
    auVar106 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                 ,*pauVar3,pauVar3[1]);
  }
  else {
    auVar106 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar3 + param_7));
    auVar107._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * auVar106._4_4_;
    auVar107._0_4_ = (uint)(bVar78 & 1) * auVar106._0_4_;
    auVar107._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * auVar106._8_4_;
    auVar107._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * auVar106._12_4_;
    auVar107._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * auVar106._16_4_;
    auVar107._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * auVar106._20_4_;
    auVar107._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * auVar106._24_4_;
    auVar107._28_4_ = (uint)(byte)(uVar66 >> 7) * auVar106._28_4_;
    auVar87 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar3 + param_7));
    auVar106._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * auVar87._4_4_;
    auVar106._0_4_ = (uint)(bVar78 & 1) * auVar87._0_4_;
    auVar106._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * auVar87._8_4_;
    auVar106._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * auVar87._12_4_;
    auVar106._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * auVar87._16_4_;
    auVar106._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * auVar87._20_4_;
    auVar106._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * auVar87._24_4_;
    auVar106._28_4_ = (uint)(byte)(uVar66 >> 7) * auVar87._28_4_;
  }
  auVar91 = vpslld_avx2(auVar107,4);
  auVar95._4_4_ = __real_00000004;
  auVar95._0_4_ = __real_00000004;
  auVar95._8_4_ = __real_00000004;
  auVar95._12_4_ = __real_00000004;
  auVar95._16_4_ = __real_00000004;
  auVar95._20_4_ = __real_00000004;
  auVar95._24_4_ = __real_00000004;
  auVar95._28_4_ = __real_00000004;
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar107 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar31 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar127 = vxorps_avx512vl(auVar127,auVar127);
  auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  bVar10 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar32 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar88 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
  auVar82 = vxorps_avx512vl(auVar82,auVar82);
  auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
  bVar11 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar66 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar83 = vxorps_avx512vl(auVar83,auVar83);
  auVar108 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar3));
  auVar92._0_4_ = (uint)(bVar78 & 1) * auVar108._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar83._0_4_;
  bVar12 = (bool)((byte)(uVar66 >> 1) & 1);
  auVar92._4_4_ = (uint)bVar12 * auVar108._4_4_ | (uint)!bVar12 * auVar83._4_4_;
  bVar12 = (bool)((byte)(uVar66 >> 2) & 1);
  auVar92._8_4_ = (uint)bVar12 * auVar108._8_4_ | (uint)!bVar12 * auVar83._8_4_;
  bVar12 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar92._12_4_ = (uint)bVar12 * auVar108._12_4_ | (uint)!bVar12 * auVar83._12_4_;
  auVar92._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * auVar108._16_4_;
  auVar92._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * auVar108._20_4_;
  auVar92._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * auVar108._24_4_;
  auVar92._28_4_ = (uint)(byte)(uVar66 >> 7) * auVar108._28_4_;
  auVar96 = vpslld_avx2(auVar106,4);
  auVar84 = vxorps_avx512vl(auVar84,auVar84);
  auVar106 = vgatherdps_avx512vl(*param_1);
  bVar12 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar23 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar108 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_7));
  auVar83 = vxorps_avx512vl(auVar128,auVar128);
  auVar109 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar13 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar35 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  auVar104._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * auVar90._4_4_;
  auVar104._0_4_ = (uint)(bVar78 & 1) * auVar90._0_4_;
  auVar104._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * auVar90._8_4_;
  auVar104._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * auVar90._12_4_;
  auVar104._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * auVar90._16_4_;
  auVar104._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * auVar90._20_4_;
  auVar104._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * auVar90._24_4_;
  auVar104._28_4_ = (uint)(byte)(uVar66 >> 7) * auVar90._28_4_;
  bVar14 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar25 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar36 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar42 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar48 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar54 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar60 = SUB81(uVar66 >> 7,0);
  bVar15 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar26 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar37 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar43 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar49 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar55 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar61 = SUB81(uVar66 >> 7,0);
  bVar16 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar27 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar38 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar44 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar50 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar56 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar62 = SUB81(uVar66 >> 7,0);
  bVar17 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar28 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar39 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar45 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar51 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar57 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar63 = SUB81(uVar66 >> 7,0);
  bVar18 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar29 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar40 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar46 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar52 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar58 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar64 = SUB81(uVar66 >> 7,0);
  bVar19 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar30 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar41 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar47 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar53 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar59 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar65 = SUB81(uVar66 >> 7,0);
  lVar77 = (longlong)((int)uVar76 << 2);
  piVar4 = (int *)(param_3 + lVar77);
  auVar93._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * piVar4[1];
  auVar93._0_4_ = (uint)(bVar78 & 1) * *piVar4;
  auVar93._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * piVar4[2];
  auVar93._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * piVar4[3];
  auVar93._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * piVar4[4];
  auVar93._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * piVar4[5];
  auVar93._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * piVar4[6];
  auVar93._28_4_ = (uint)(byte)(uVar66 >> 7) * piVar4[7];
  puVar5 = (uint *)(param_4 + lVar77);
  piVar4 = (int *)(param_4 + lVar77);
  auVar94._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * piVar4[1];
  auVar94._0_4_ = (uint)(bVar78 & 1) * *piVar4;
  auVar94._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * piVar4[2];
  auVar94._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * piVar4[3];
  auVar94._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * piVar4[4];
  auVar94._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * piVar4[5];
  auVar94._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * piVar4[6];
  auVar94._28_4_ = (uint)(byte)(uVar66 >> 7) * piVar4[7];
  pauVar75 = (undefined1 (*) [16])(param_6 + (uVar76 & 0xffffffff));
  if ((~bVar78 & 0x81) == 0) {
    uVar76 = *(ulonglong *)*pauVar75;
  }
  else {
    auVar128 = vmovdqu8_avx512vl(*pauVar75);
    uVar76 = CONCAT17((char)(uVar66 >> 7) * auVar128[7],
                      CONCAT16(((byte)(uVar66 >> 6) & 1) * auVar128[6],
                               CONCAT15(((byte)(uVar66 >> 5) & 1) * auVar128[5],
                                        CONCAT14(((byte)(uVar66 >> 4) & 1) * auVar128[4],
                                                 CONCAT13(((byte)(uVar66 >> 3) & 1) * auVar128[3],
                                                          CONCAT12(((byte)(uVar66 >> 2) & 1) *
                                                                   auVar128[2],
                                                                   CONCAT11(((byte)(uVar66 >> 1) & 1
                                                                            ) * auVar128[1],
                                                                            (bVar78 & 1) *
                                                                            auVar128[0])))))));
  }
  auVar128._8_8_ = 0;
  auVar128._0_8_ = uVar76;
  auVar90 = vpmovzxbd_avx512vl(auVar128);
  auVar90 = vpslld_avx2(auVar90,2);
  auVar128 = vextracti32x4_avx512vl(auVar90,1);
  vpmovzxdq_avx512vl(auVar128);
  vpmovzxdq_avx2(auVar90._0_16_);
  auVar128 = vxorps_avx512vl(auVar85,auVar85);
  auVar85 = vgatherqps_avx512vl(*(undefined8 *)(param_7 * 2));
  bVar6 = (bool)((byte)(uVar66 >> 1) & 1);
  auVar80 = vgatherqps_avx512vl(*(undefined8 *)(param_7 + (ulonglong)(byte)~bVar78));
  bVar7 = (bool)(bVar78 >> 5 & 1);
  auVar86._8_8_ = (ulonglong)bVar7 * auVar80._8_8_ | (ulonglong)!bVar7 * SUB168(ZEXT816(0),4);
  auVar86._0_8_ = (ulonglong)(bVar78 >> 4 & 1) * auVar80._0_8_;
  auVar99._4_4_ =
       (uint)bVar14 * ((uint)bVar9 * auVar107._4_4_ | (uint)!bVar9 * auVar81._4_4_) |
       (uint)!bVar14 * iStack_13c;
  auVar99._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar107._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar81._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_140;
  auVar99._8_4_ =
       (uint)bVar25 * ((uint)bVar20 * auVar107._8_4_ | (uint)!bVar20 * auVar81._8_4_) |
       (uint)!bVar25 * iStack_138;
  auVar99._12_4_ =
       (uint)bVar36 * ((uint)bVar31 * auVar107._12_4_ | (uint)!bVar31 * auVar81._12_4_) |
       (uint)!bVar36 * iStack_134;
  auVar99._16_4_ =
       (uint)bVar42 * (uint)((byte)(uVar66 >> 4) & 1) * auVar107._16_4_ | (uint)!bVar42 * iStack_130
  ;
  auVar99._20_4_ =
       (uint)bVar48 * (uint)((byte)(uVar66 >> 5) & 1) * auVar107._20_4_ | (uint)!bVar48 * iStack_12c
  ;
  auVar99._24_4_ =
       (uint)bVar54 * (uint)((byte)(uVar66 >> 6) & 1) * auVar107._24_4_ | (uint)!bVar54 * iStack_128
  ;
  auVar99._28_4_ =
       (uint)bVar60 * (uint)(byte)(uVar66 >> 7) * auVar107._28_4_ | (uint)!bVar60 * iStack_124;
  auVar100._4_4_ =
       (uint)bVar15 * ((uint)bVar10 * auVar87._4_4_ | (uint)!bVar10 * auVar127._4_4_) |
       (uint)!bVar15 * iStack_11c;
  auVar100._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar127._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_120;
  auVar100._8_4_ =
       (uint)bVar26 * ((uint)bVar21 * auVar87._8_4_ | (uint)!bVar21 * auVar127._8_4_) |
       (uint)!bVar26 * iStack_118;
  auVar100._12_4_ =
       (uint)bVar37 * ((uint)bVar32 * auVar87._12_4_ | (uint)!bVar32 * auVar127._12_4_) |
       (uint)!bVar37 * iStack_114;
  auVar100._16_4_ =
       (uint)bVar43 * (uint)((byte)(uVar66 >> 4) & 1) * auVar87._16_4_ | (uint)!bVar43 * iStack_110;
  auVar100._20_4_ =
       (uint)bVar49 * (uint)((byte)(uVar66 >> 5) & 1) * auVar87._20_4_ | (uint)!bVar49 * iStack_10c;
  auVar100._24_4_ =
       (uint)bVar55 * (uint)((byte)(uVar66 >> 6) & 1) * auVar87._24_4_ | (uint)!bVar55 * iStack_108;
  auVar100._28_4_ =
       (uint)bVar61 * (uint)(byte)(uVar66 >> 7) * auVar87._28_4_ | (uint)!bVar61 * iStack_104;
  auVar101._4_4_ =
       (uint)bVar16 * ((uint)bVar11 * auVar89._4_4_ | (uint)!bVar11 * auVar82._4_4_) |
       (uint)!bVar16 * iStack_fc;
  auVar101._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar82._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_100;
  auVar101._8_4_ =
       (uint)bVar27 * ((uint)bVar22 * auVar89._8_4_ | (uint)!bVar22 * auVar82._8_4_) |
       (uint)!bVar27 * iStack_f8;
  auVar101._12_4_ =
       (uint)bVar38 * ((uint)bVar33 * auVar89._12_4_ | (uint)!bVar33 * auVar82._12_4_) |
       (uint)!bVar38 * iStack_f4;
  auVar101._16_4_ =
       (uint)bVar44 * (uint)((byte)(uVar66 >> 4) & 1) * auVar89._16_4_ | (uint)!bVar44 * iStack_f0;
  auVar101._20_4_ =
       (uint)bVar50 * (uint)((byte)(uVar66 >> 5) & 1) * auVar89._20_4_ | (uint)!bVar50 * iStack_ec;
  auVar101._24_4_ =
       (uint)bVar56 * (uint)((byte)(uVar66 >> 6) & 1) * auVar89._24_4_ | (uint)!bVar56 * iStack_e8;
  auVar101._28_4_ =
       (uint)bVar62 * (uint)(byte)(uVar66 >> 7) * auVar89._28_4_ | (uint)!bVar62 * iStack_e4;
  auVar89._4_4_ =
       (uint)bVar17 * ((uint)bVar12 * auVar106._4_4_ | (uint)!bVar12 * auVar84._4_4_) |
       (uint)!bVar17 * iStack_19c;
  auVar89._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar106._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar84._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_1a0;
  auVar89._8_4_ =
       (uint)bVar28 * ((uint)bVar23 * auVar106._8_4_ | (uint)!bVar23 * auVar84._8_4_) |
       (uint)!bVar28 * iStack_198;
  auVar89._12_4_ =
       (uint)bVar39 * ((uint)bVar34 * auVar106._12_4_ | (uint)!bVar34 * auVar84._12_4_) |
       (uint)!bVar39 * iStack_194;
  auVar89._16_4_ =
       (uint)bVar45 * (uint)((byte)(uVar66 >> 4) & 1) * auVar106._16_4_ | (uint)!bVar45 * iStack_190
  ;
  auVar89._20_4_ =
       (uint)bVar51 * (uint)((byte)(uVar66 >> 5) & 1) * auVar106._20_4_ | (uint)!bVar51 * iStack_18c
  ;
  auVar89._24_4_ =
       (uint)bVar57 * (uint)((byte)(uVar66 >> 6) & 1) * auVar106._24_4_ | (uint)!bVar57 * iStack_188
  ;
  auVar89._28_4_ =
       (uint)bVar63 * (uint)(byte)(uVar66 >> 7) * auVar106._28_4_ | (uint)!bVar63 * iStack_184;
  auVar97._4_4_ =
       (uint)bVar18 * (uint)((byte)(uVar66 >> 1) & 1) * auVar108._4_4_ | (uint)!bVar18 * iStack_17c;
  auVar97._0_4_ =
       (uint)(bVar78 & 1) * (uint)(bVar78 & 1) * auVar108._0_4_ |
       (uint)!(bool)(bVar78 & 1) * local_180;
  auVar97._8_4_ =
       (uint)bVar29 * (uint)((byte)(uVar66 >> 2) & 1) * auVar108._8_4_ |
       (uint)!bVar29 * aiStack_178[0];
  auVar97._12_4_ =
       (uint)bVar40 * (uint)((byte)(uVar66 >> 3) & 1) * auVar108._12_4_ |
       (uint)!bVar40 * aiStack_178[1];
  auVar97._16_4_ =
       (uint)bVar46 * (uint)((byte)(uVar66 >> 4) & 1) * auVar108._16_4_ |
       (uint)!bVar46 * aiStack_178[2];
  auVar97._20_4_ =
       (uint)bVar52 * (uint)((byte)(uVar66 >> 5) & 1) * auVar108._20_4_ |
       (uint)!bVar52 * aiStack_178[3];
  auVar97._24_4_ =
       (uint)bVar58 * (uint)((byte)(uVar66 >> 6) & 1) * auVar108._24_4_ | (uint)!bVar58 * iStack_168
  ;
  auVar97._28_4_ =
       (uint)bVar64 * (uint)(byte)(uVar66 >> 7) * auVar108._28_4_ | (uint)!bVar64 * iStack_164;
  auVar107 = vinsertf32x4_avx512vl
                       (ZEXT1632(CONCAT88((ulonglong)bVar6 * auVar85._8_8_ |
                                          (ulonglong)!bVar6 * auVar128._8_8_,
                                          (ulonglong)(bVar78 & 1) * auVar85._0_8_ |
                                          (ulonglong)!(bool)(bVar78 & 1) * auVar128._0_8_)),auVar86,
                        1);
  auVar98._4_4_ =
       (uint)bVar19 * ((uint)bVar13 * auVar109._4_4_ | (uint)!bVar13 * auVar83._4_4_) |
       (uint)!bVar19 * iStack_15c;
  auVar98._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar109._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar83._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_160;
  auVar98._8_4_ =
       (uint)bVar30 * ((uint)bVar24 * auVar109._8_4_ | (uint)!bVar24 * auVar83._8_4_) |
       (uint)!bVar30 * iStack_158;
  auVar98._12_4_ =
       (uint)bVar41 * ((uint)bVar35 * auVar109._12_4_ | (uint)!bVar35 * auVar83._12_4_) |
       (uint)!bVar41 * iStack_154;
  auVar98._16_4_ =
       (uint)bVar47 * (uint)((byte)(uVar66 >> 4) & 1) * auVar109._16_4_ | (uint)!bVar47 * iStack_150
  ;
  auVar98._20_4_ =
       (uint)bVar53 * (uint)((byte)(uVar66 >> 5) & 1) * auVar109._20_4_ | (uint)!bVar53 * iStack_14c
  ;
  auVar98._24_4_ =
       (uint)bVar59 * (uint)((byte)(uVar66 >> 6) & 1) * auVar109._24_4_ | (uint)!bVar59 * iStack_148
  ;
  auVar98._28_4_ =
       (uint)bVar65 * (uint)(byte)(uVar66 >> 7) * auVar109._28_4_ | (uint)!bVar65 * iStack_144;
  auVar108 = vsubps_avx512vl(auVar99,auVar89);
  auVar109 = vsubps_avx512vl(auVar100,auVar97);
  auVar90 = vsubps_avx512vl(auVar101,auVar98);
  auVar106 = vmulps_avx512vl(auVar109,auVar109);
  auVar106 = vfmadd231ps_avx512vl(auVar106,auVar108,auVar108);
  auVar102 = vfmadd231ps_avx512vl(auVar106,auVar90,auVar90);
  auVar106 = vsqrtps_avx(auVar102);
  auVar87._4_4_ = __real_38d1b717;
  auVar87._0_4_ = __real_38d1b717;
  auVar87._8_4_ = __real_38d1b717;
  auVar87._12_4_ = __real_38d1b717;
  auVar87._16_4_ = __real_38d1b717;
  auVar87._20_4_ = __real_38d1b717;
  auVar87._24_4_ = __real_38d1b717;
  auVar87._28_4_ = __real_38d1b717;
  uVar76 = vcmpps_avx512vl(auVar102,auVar87,1);
  auVar87 = vdivps_avx512vl(auVar108,auVar106);
  auVar102 = vdivps_avx512vl(auVar109,auVar106);
  auVar103 = vdivps_avx512vl(auVar90,auVar106);
  auVar116._4_4_ = __real_3f800000;
  auVar116._0_4_ = __real_3f800000;
  auVar116._8_4_ = __real_3f800000;
  auVar116._12_4_ = __real_3f800000;
  auVar116._16_4_ = __real_3f800000;
  auVar116._20_4_ = __real_3f800000;
  auVar116._24_4_ = __real_3f800000;
  auVar116._28_4_ = __real_3f800000;
  bVar8 = (byte)uVar76;
  bVar9 = (bool)((byte)(uVar76 >> 1) & 1);
  bVar11 = (bool)((byte)(uVar76 >> 2) & 1);
  bVar13 = (bool)((byte)(uVar76 >> 3) & 1);
  bVar15 = (bool)((byte)(uVar76 >> 4) & 1);
  bVar17 = (bool)((byte)(uVar76 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar76 >> 6) & 1);
  bVar21 = SUB81(uVar76 >> 7,0);
  bVar22 = SUB81(uVar76 >> 7,0);
  local_200._0_4_ = auVar108._0_4_;
  local_200._4_4_ = auVar108._4_4_;
  local_200._8_4_ = auVar108._8_4_;
  local_200._12_4_ = auVar108._12_4_;
  local_200._16_4_ = auVar108._16_4_;
  local_200._20_4_ = auVar108._20_4_;
  local_200._24_4_ = auVar108._24_4_;
  local_200._28_4_ = auVar108._28_4_;
  bVar10 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar12 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar16 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar23 = SUB81(uVar66 >> 7,0);
  local_200._4_4_ =
       (uint)bVar10 * (bVar9 * __real_3f800000 | (uint)!bVar9 * auVar87._4_4_) |
       (uint)!bVar10 * local_200._4_4_;
  local_200._0_4_ =
       (uint)(bVar78 & 1) *
       ((bVar8 & 1) * __real_3f800000 | (uint)!(bool)(bVar8 & 1) * auVar87._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_200._0_4_;
  local_200._8_4_ =
       (uint)bVar12 * (bVar11 * __real_3f800000 | (uint)!bVar11 * auVar87._8_4_) |
       (uint)!bVar12 * local_200._8_4_;
  local_200._12_4_ =
       (uint)bVar14 * (bVar13 * __real_3f800000 | (uint)!bVar13 * auVar87._12_4_) |
       (uint)!bVar14 * local_200._12_4_;
  local_200._16_4_ =
       (uint)bVar16 * (bVar15 * __real_3f800000 | (uint)!bVar15 * auVar87._16_4_) |
       (uint)!bVar16 * local_200._16_4_;
  local_200._20_4_ =
       (uint)bVar18 * (bVar17 * __real_3f800000 | (uint)!bVar17 * auVar87._20_4_) |
       (uint)!bVar18 * local_200._20_4_;
  local_200._24_4_ =
       (uint)bVar20 * (bVar19 * __real_3f800000 | (uint)!bVar19 * auVar87._24_4_) |
       (uint)!bVar20 * local_200._24_4_;
  local_200._28_4_ =
       (uint)bVar23 * (bVar21 * __real_3f800000 | (uint)!bVar21 * auVar87._28_4_) |
       (uint)!bVar23 * local_200._28_4_;
  local_1e0._0_4_ = auVar109._0_4_;
  local_1e0._4_4_ = auVar109._4_4_;
  local_1e0._8_4_ = auVar109._8_4_;
  local_1e0._12_4_ = auVar109._12_4_;
  local_1e0._16_4_ = auVar109._16_4_;
  local_1e0._20_4_ = auVar109._20_4_;
  local_1e0._24_4_ = auVar109._24_4_;
  local_1e0._28_4_ = auVar109._28_4_;
  bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar13 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar14 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar15 = SUB81(uVar66 >> 7,0);
  local_1e0._4_4_ =
       (uint)bVar9 * (uint)!(bool)((byte)(uVar76 >> 1) & 1) * auVar102._4_4_ |
       (uint)!bVar9 * local_1e0._4_4_;
  local_1e0._0_4_ =
       (uint)(bVar78 & 1) * (uint)!(bool)(bVar8 & 1) * auVar102._0_4_ |
       (uint)!(bool)(bVar78 & 1) * local_1e0._0_4_;
  local_1e0._8_4_ =
       (uint)bVar10 * (uint)!(bool)((byte)(uVar76 >> 2) & 1) * auVar102._8_4_ |
       (uint)!bVar10 * local_1e0._8_4_;
  local_1e0._12_4_ =
       (uint)bVar11 * (uint)!(bool)((byte)(uVar76 >> 3) & 1) * auVar102._12_4_ |
       (uint)!bVar11 * local_1e0._12_4_;
  local_1e0._16_4_ =
       (uint)bVar12 * (uint)!(bool)((byte)(uVar76 >> 4) & 1) * auVar102._16_4_ |
       (uint)!bVar12 * local_1e0._16_4_;
  local_1e0._20_4_ =
       (uint)bVar13 * (uint)!(bool)((byte)(uVar76 >> 5) & 1) * auVar102._20_4_ |
       (uint)!bVar13 * local_1e0._20_4_;
  local_1e0._24_4_ =
       (uint)bVar14 * (uint)!(bool)((byte)(uVar76 >> 6) & 1) * auVar102._24_4_ |
       (uint)!bVar14 * local_1e0._24_4_;
  local_1e0._28_4_ =
       (uint)bVar15 *
       ((uint)bVar22 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar22 * auVar102._28_4_)
       | (uint)!bVar15 * local_1e0._28_4_;
  local_1c0._0_4_ = auVar90._0_4_;
  local_1c0._4_4_ = auVar90._4_4_;
  local_1c0._8_4_ = auVar90._8_4_;
  local_1c0._12_4_ = auVar90._12_4_;
  local_1c0._16_4_ = auVar90._16_4_;
  local_1c0._20_4_ = auVar90._20_4_;
  local_1c0._24_4_ = auVar90._24_4_;
  local_1c0._28_4_ = auVar90._28_4_;
  bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar13 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar14 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar15 = SUB81(uVar66 >> 7,0);
  local_1c0._4_4_ =
       (uint)bVar9 * (uint)!(bool)((byte)(uVar76 >> 1) & 1) * auVar103._4_4_ |
       (uint)!bVar9 * local_1c0._4_4_;
  local_1c0._0_4_ =
       (uint)(bVar78 & 1) * (uint)!(bool)(bVar8 & 1) * auVar103._0_4_ |
       (uint)!(bool)(bVar78 & 1) * local_1c0._0_4_;
  local_1c0._8_4_ =
       (uint)bVar10 * (uint)!(bool)((byte)(uVar76 >> 2) & 1) * auVar103._8_4_ |
       (uint)!bVar10 * local_1c0._8_4_;
  local_1c0._12_4_ =
       (uint)bVar11 * (uint)!(bool)((byte)(uVar76 >> 3) & 1) * auVar103._12_4_ |
       (uint)!bVar11 * local_1c0._12_4_;
  local_1c0._16_4_ =
       (uint)bVar12 * (uint)!(bool)((byte)(uVar76 >> 4) & 1) * auVar103._16_4_ |
       (uint)!bVar12 * local_1c0._16_4_;
  local_1c0._20_4_ =
       (uint)bVar13 * (uint)!(bool)((byte)(uVar76 >> 5) & 1) * auVar103._20_4_ |
       (uint)!bVar13 * local_1c0._20_4_;
  local_1c0._24_4_ =
       (uint)bVar14 * (uint)!(bool)((byte)(uVar76 >> 6) & 1) * auVar103._24_4_ |
       (uint)!bVar14 * local_1c0._24_4_;
  local_1c0._28_4_ =
       (uint)bVar15 * (uint)!SUB81(uVar76 >> 7,0) * auVar103._28_4_ |
       (uint)!bVar15 * local_1c0._28_4_;
  auVar102._4_4_ = (uint)!(bool)((byte)(uVar76 >> 1) & 1) * auVar106._4_4_;
  auVar102._0_4_ = (uint)!(bool)(bVar8 & 1) * auVar106._0_4_;
  auVar102._8_4_ = (uint)!(bool)((byte)(uVar76 >> 2) & 1) * auVar106._8_4_;
  auVar102._12_4_ = (uint)!(bool)((byte)(uVar76 >> 3) & 1) * auVar106._12_4_;
  auVar102._16_4_ = (uint)!(bool)((byte)(uVar76 >> 4) & 1) * auVar106._16_4_;
  auVar102._20_4_ = (uint)!(bool)((byte)(uVar76 >> 5) & 1) * auVar106._20_4_;
  auVar102._24_4_ = (uint)!(bool)((byte)(uVar76 >> 6) & 1) * auVar106._24_4_;
  bVar9 = SUB81(uVar76 >> 7,0);
  auVar102._28_4_ =
       (uint)bVar9 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar9 * auVar106._28_4_;
  auVar106 = vsubps_avx512vl(auVar102,auVar93);
  auVar87 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
  auVar107 = vmulps_avx512vl(auVar87,auVar107);
  auVar107 = vmulps_avx512vl(auVar87,auVar107);
  auVar87 = vaddps_avx512vl(auVar92,auVar104);
  auVar106 = vfnmsub213ps_avx512vl(auVar106,auVar107,auVar94);
  auVar107 = vfmadd213ps_avx512vl(auVar87,auVar107,auVar116);
  auVar106 = vdivps_avx512vl(auVar106,auVar107);
  auVar107 = vmulps_avx512vl(auVar106,local_200);
  auVar87 = vmulps_avx512vl(auVar106,local_1e0);
  auVar108 = vmulps_avx512vl(auVar106,local_1c0);
  auVar106 = vaddps_avx512vl(auVar94,auVar106);
  bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar13 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar14 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar15 = SUB81(uVar66 >> 7,0);
  *puVar5 = (uint)(bVar78 & 1) * auVar106._0_4_ | (uint)!(bool)(bVar78 & 1) * *puVar5;
  puVar5[1] = (uint)bVar9 * auVar106._4_4_ | (uint)!bVar9 * puVar5[1];
  puVar5[2] = (uint)bVar10 * auVar106._8_4_ | (uint)!bVar10 * puVar5[2];
  puVar5[3] = (uint)bVar11 * auVar106._12_4_ | (uint)!bVar11 * puVar5[3];
  puVar5[4] = (uint)bVar12 * auVar106._16_4_ | (uint)!bVar12 * puVar5[4];
  puVar5[5] = (uint)bVar13 * auVar106._20_4_ | (uint)!bVar13 * puVar5[5];
  puVar5[6] = (uint)bVar14 * auVar106._24_4_ | (uint)!bVar14 * puVar5[6];
  puVar5[7] = (uint)bVar15 * auVar106._28_4_ | (uint)!bVar15 * puVar5[7];
  auVar109 = vfmadd231ps_avx512vl(auVar99,auVar92,auVar107);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar66,auVar109);
  auVar109 = vfmadd231ps_avx512vl(auVar100,auVar92,auVar87);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar95),uVar66,auVar109);
  auVar109 = vfmadd231ps_avx512vl(auVar101,auVar92,auVar108);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar88),uVar66,auVar109);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar104,uVar66,auVar92);
  auVar107 = vfmadd213ps_avx512vl(auVar107,auVar104,auVar89);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar96,uVar66,auVar107);
  auVar107 = vfmadd213ps_avx512vl(auVar87,auVar104,auVar97);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar106,uVar66,auVar107);
  auVar106 = vfmadd213ps_avx512vl(auVar108,auVar104,auVar98);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar66,auVar106);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar95),uVar66,auVar104);
  return;
}

// ApplyXPBDSpringConstraintsWithDampingAndWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx @ 1409099b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDampingAndWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,byte param_7,longlong param_8,longlong param_9,
               byte param_10,undefined1 (*param_11) [16],longlong param_12,uint param_13)

{
  float fVar1;
  float *pfVar9;
  undefined1 (*pauVar10) [32];
  int *piVar11;
  uint *puVar12;
  byte bVar13;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  uint uVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
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
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar52 [16];
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
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  float fVar97;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar98 [32];
  float fVar106;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar107 [32];
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar125 [16];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar126 [16];
  undefined1 in_ZMM25 [64];
  undefined1 auVar127 [16];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 auVar128 [16];
  undefined1 in_ZMM30 [64];
  undefined1 auVar129 [16];
  undefined1 in_ZMM31 [64];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  uint auStack_278 [4];
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar40 = __real_0000000c;
  uVar39 = __real_00000008;
  uVar38 = __real_00000004;
  fVar1 = __real_3f800000;
  uVar37 = __real_38d1b717;
  uVar36 = __real_322bcc77;
  auVar125 = in_ZMM22._0_16_;
  auVar55 = in_ZMM20._0_16_;
  auVar129 = in_ZMM31._0_16_;
  auVar128 = in_ZMM30._0_16_;
  auVar54 = in_ZMM29._0_16_;
  auVar52 = in_ZMM19._0_16_;
  auVar53 = in_ZMM28._0_16_;
  auVar127 = in_ZMM26._0_16_;
  auVar126 = in_ZMM25._0_16_;
  auVar49 = in_ZMM23._0_16_;
  uVar42 = (ulonglong)param_10;
  uVar47 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar47 = param_13;
  }
  if ((int)(uVar47 & 0xfffffff8) < 1) {
    uVar43 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    local_1e0 = param_6;
    fStack_1dc = param_6;
    fStack_1d8 = param_6;
    fStack_1d4 = param_6;
    fStack_1d0 = param_6;
    fStack_1cc = param_6;
    fStack_1c8 = param_6;
    fStack_1c4 = param_6;
    uVar44 = 0;
    local_240 = __real_00000004;
    uStack_23c = __real_00000004;
    uStack_238 = __real_00000004;
    uStack_234 = __real_00000004;
    uStack_230 = __real_00000004;
    uStack_22c = __real_00000004;
    uStack_228 = __real_00000004;
    uStack_224 = __real_00000004;
    auStack_278[0] = __real_00000008;
    auStack_278[1] = __real_00000008;
    auStack_278[2] = __real_00000008;
    auStack_278[3] = __real_00000008;
    uStack_268 = __real_00000008;
    uStack_264 = __real_00000008;
    local_200 = __real_0000000c;
    uStack_1fc = __real_0000000c;
    uStack_1f8 = __real_0000000c;
    uStack_1f4 = __real_0000000c;
    uStack_1f0 = __real_0000000c;
    uStack_1ec = __real_0000000c;
    uStack_1e8 = __real_0000000c;
    uStack_1e4 = __real_0000000c;
    local_220 = __real_38d1b717;
    uStack_21c = __real_38d1b717;
    uStack_218 = __real_38d1b717;
    uStack_214 = __real_38d1b717;
    uStack_210 = __real_38d1b717;
    uStack_20c = __real_38d1b717;
    uStack_208 = __real_38d1b717;
    uStack_204 = __real_38d1b717;
    local_260 = __real_3f800000;
    fStack_25c = __real_3f800000;
    fStack_258 = __real_3f800000;
    fStack_254 = __real_3f800000;
    fStack_250 = __real_3f800000;
    fStack_24c = __real_3f800000;
    fStack_248 = __real_3f800000;
    fStack_244 = __real_3f800000;
    uVar43 = 0;
    do {
      auVar52 = (undefined1  [16])0x0;
      auVar49 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar49._8_8_ = 0;
        auVar49._0_8_ = *(ulonglong *)(param_8 + uVar43);
      }
      auVar79 = *(undefined1 (*) [32])(param_3 + uVar44 * 2);
      auVar96 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar44 * 2);
      auVar78 = vpermt2d_avx512vl(auVar79,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar96);
      auVar79 = vpermt2d_avx512vl(auVar79,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar96);
      if ((param_10 & 1) != 0) {
        auVar52._8_8_ = 0;
        auVar52._0_8_ = *(ulonglong *)(*param_11 + uVar43);
      }
      auVar56 = vpslld_avx512vl(auVar78,4);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar57 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar125._4_4_ = uVar38;
      auVar125._0_4_ = uVar38;
      auVar125._8_4_ = uVar38;
      auVar125._12_4_ = uVar38;
      auVar70._16_4_ = uVar38;
      auVar70._0_16_ = auVar125;
      auVar70._20_4_ = uVar38;
      auVar70._24_4_ = uVar38;
      auVar70._28_4_ = uVar38;
      auVar126 = auVar56._0_16_ | auVar125;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar58 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar127._4_4_ = uVar39;
      auVar127._0_4_ = uVar39;
      auVar127._8_4_ = uVar39;
      auVar127._12_4_ = uVar39;
      auVar71._16_4_ = uVar39;
      auVar71._0_16_ = auVar127;
      auVar71._20_4_ = uVar39;
      auVar71._24_4_ = uVar39;
      auVar71._28_4_ = uVar39;
      auVar127 = auVar56._0_16_ | auVar127;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar43));
      auVar80._4_4_ = uVar40;
      auVar80._0_4_ = uVar40;
      auVar80._8_4_ = uVar40;
      auVar80._12_4_ = uVar40;
      auVar80._16_4_ = uVar40;
      auVar80._20_4_ = uVar40;
      auVar80._24_4_ = uVar40;
      auVar80._28_4_ = uVar40;
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)param_11));
      auVar61 = vpslld_avx512vl(auVar79,4);
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_278));
      auVar125 = auVar61._0_16_ | auVar125;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_9));
      auVar64 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar44));
      auVar65 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar66 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42 * 4));
      vpslld_avx2(auVar78,2);
      vpslld_avx2(auVar78,3);
      auVar67 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42));
      auVar68 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
      auVar69 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42 * 4));
      auVar78 = vpslld_avx2(auVar79,2);
      auVar96 = vpslld_avx2(auVar79,3);
      auVar79._0_4_ = auVar96._0_4_ + auVar78._0_4_;
      auVar79._4_4_ = auVar96._4_4_ + auVar78._4_4_;
      auVar79._8_4_ = auVar96._8_4_ + auVar78._8_4_;
      auVar79._12_4_ = auVar96._12_4_ + auVar78._12_4_;
      auVar79._16_4_ = auVar96._16_4_ + auVar78._16_4_;
      auVar79._20_4_ = auVar96._20_4_ + auVar78._20_4_;
      auVar79._24_4_ = auVar96._24_4_ + auVar78._24_4_;
      auVar79._28_4_ = auVar96._28_4_ + auVar78._28_4_;
      vpaddd_avx512vl(auVar79,auVar70);
      auVar70 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
      vpaddd_avx512vl(auVar79,auVar71);
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
      auVar79 = vpmovsxbd_avx512vl(auVar49);
      vpslld_avx512vl(auVar79,2);
      auVar72 = vgatherdps_avx512vl(*(undefined4 *)(param_9 + (longlong)param_1));
      auVar79 = vpmovsxbd_avx512vl(auVar52);
      vpslld_avx512vl(auVar79,2);
      auVar78 = vgatherdps_avx512vl(*(undefined4 *)(param_12 + (longlong)param_1));
      uVar46 = uVar44 & 0xffffffff;
      auVar79 = *(undefined1 (*) [32])(param_4 + uVar46);
      auVar73 = vsubps_avx512vl(auVar57,auVar62);
      auVar74 = vsubps_avx512vl(auVar58,auVar63);
      auVar75 = vsubps_avx512vl(auVar59,auVar64);
      auVar96._4_4_ = uVar36;
      auVar96._0_4_ = uVar36;
      auVar96._8_4_ = uVar36;
      auVar96._12_4_ = uVar36;
      auVar96._16_4_ = uVar36;
      auVar96._20_4_ = uVar36;
      auVar96._24_4_ = uVar36;
      auVar96._28_4_ = uVar36;
      uVar45 = vcmpps_avx512vl(auVar79,auVar96,1);
      auVar95._0_4_ = auVar60._0_4_ + auVar65._0_4_;
      auVar95._4_4_ = auVar60._4_4_ + auVar65._4_4_;
      auVar95._8_4_ = auVar60._8_4_ + auVar65._8_4_;
      auVar95._12_4_ = auVar60._12_4_ + auVar65._12_4_;
      auVar95._16_4_ = auVar60._16_4_ + auVar65._16_4_;
      auVar95._20_4_ = auVar60._20_4_ + auVar65._20_4_;
      auVar95._24_4_ = auVar60._24_4_ + auVar65._24_4_;
      auVar95._28_4_ = auVar60._28_4_ + auVar65._28_4_;
      auVar123._0_4_ = auVar78._0_4_ + auVar78._0_4_;
      auVar123._4_4_ = auVar78._4_4_ + auVar78._4_4_;
      auVar123._8_4_ = auVar78._8_4_ + auVar78._8_4_;
      auVar123._12_4_ = auVar78._12_4_ + auVar78._12_4_;
      auVar123._16_4_ = auVar78._16_4_ + auVar78._16_4_;
      auVar123._20_4_ = auVar78._20_4_ + auVar78._20_4_;
      auVar123._24_4_ = auVar78._24_4_ + auVar78._24_4_;
      auVar123._28_4_ = auVar78._28_4_ + auVar78._28_4_;
      auVar96 = vdivps_avx512vl(auVar72,auVar95);
      auVar96 = vsqrtps_avx512vl(auVar96);
      auVar96 = vmulps_avx512vl(auVar123,auVar96);
      auVar78._4_4_ = fVar1;
      auVar78._0_4_ = fVar1;
      auVar78._8_4_ = fVar1;
      auVar78._12_4_ = fVar1;
      auVar78._16_4_ = fVar1;
      auVar78._20_4_ = fVar1;
      auVar78._24_4_ = fVar1;
      auVar78._28_4_ = fVar1;
      auVar76 = vdivps_avx512vl(auVar78,auVar79);
      auVar76 = vmulps_avx512vl(auVar96,auVar76);
      bVar14 = (bool)((byte)uVar45 & 1);
      auVar77._0_4_ = (uint)bVar14 * auVar96._0_4_ | (uint)!bVar14 * auVar76._0_4_;
      bVar14 = (bool)((byte)(uVar45 >> 1) & 1);
      auVar77._4_4_ = (uint)bVar14 * auVar96._4_4_ | (uint)!bVar14 * auVar76._4_4_;
      bVar14 = (bool)((byte)(uVar45 >> 2) & 1);
      auVar77._8_4_ = (uint)bVar14 * auVar96._8_4_ | (uint)!bVar14 * auVar76._8_4_;
      bVar14 = (bool)((byte)(uVar45 >> 3) & 1);
      auVar77._12_4_ = (uint)bVar14 * auVar96._12_4_ | (uint)!bVar14 * auVar76._12_4_;
      bVar14 = (bool)((byte)(uVar45 >> 4) & 1);
      auVar77._16_4_ = (uint)bVar14 * auVar96._16_4_ | (uint)!bVar14 * auVar76._16_4_;
      bVar14 = (bool)((byte)(uVar45 >> 5) & 1);
      auVar77._20_4_ = (uint)bVar14 * auVar96._20_4_ | (uint)!bVar14 * auVar76._20_4_;
      bVar14 = (bool)((byte)(uVar45 >> 6) & 1);
      auVar77._24_4_ = (uint)bVar14 * auVar96._24_4_ | (uint)!bVar14 * auVar76._24_4_;
      bVar14 = SUB81(uVar45 >> 7,0);
      auVar77._28_4_ = (uint)bVar14 * auVar96._28_4_ | (uint)!bVar14 * auVar76._28_4_;
      auVar96 = vmulps_avx512vl(auVar74,auVar74);
      auVar96 = vfmadd231ps_avx512vl(auVar96,auVar73,auVar73);
      auVar96 = vfmadd231ps_avx512vl(auVar96,auVar75,auVar75);
      auVar76._4_4_ = uVar37;
      auVar76._0_4_ = uVar37;
      auVar76._8_4_ = uVar37;
      auVar76._12_4_ = uVar37;
      auVar76._16_4_ = uVar37;
      auVar76._20_4_ = uVar37;
      auVar76._24_4_ = uVar37;
      auVar76._28_4_ = uVar37;
      uVar45 = vcmpps_avx512vl(auVar96,auVar76,1);
      auVar96 = vsqrtps_avx512vl(auVar96);
      auVar76 = vdivps_avx512vl(auVar73,auVar96);
      auVar73 = vdivps_avx512vl(auVar74,auVar96);
      auVar74 = vdivps_avx512vl(auVar75,auVar96);
      bVar48 = (byte)uVar45;
      auVar75._4_4_ = (uint)!(bool)((byte)(uVar45 >> 1) & 1) * auVar96._4_4_;
      auVar75._0_4_ = (uint)!(bool)(bVar48 & 1) * auVar96._0_4_;
      auVar75._8_4_ = (uint)!(bool)((byte)(uVar45 >> 2) & 1) * auVar96._8_4_;
      auVar75._12_4_ = (uint)!(bool)((byte)(uVar45 >> 3) & 1) * auVar96._12_4_;
      auVar75._16_4_ = (uint)!(bool)((byte)(uVar45 >> 4) & 1) * auVar96._16_4_;
      auVar75._20_4_ = (uint)!(bool)((byte)(uVar45 >> 5) & 1) * auVar96._20_4_;
      auVar75._24_4_ = (uint)!(bool)((byte)(uVar45 >> 6) & 1) * auVar96._24_4_;
      bVar14 = SUB81(uVar45 >> 7,0);
      auVar75._28_4_ =
           (uint)bVar14 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar14 * auVar96._28_4_;
      auVar96 = vsubps_avx512vl(auVar75,auVar79);
      auVar79 = vsubps_avx512vl(auVar57,auVar66);
      auVar79 = vsubps_avx512vl(auVar79,auVar62);
      auVar79 = vaddps_avx512vl(auVar79,auVar69);
      auVar66 = vsubps_avx512vl(auVar58,auVar67);
      auVar66 = vsubps_avx512vl(auVar66,auVar63);
      auVar70 = vaddps_avx512vl(auVar66,auVar70);
      auVar66 = vsubps_avx512vl(auVar59,auVar68);
      auVar66 = vsubps_avx512vl(auVar66,auVar64);
      auVar71 = vaddps_avx512vl(auVar66,auVar71);
      auVar55._0_4_ = (uint)(bVar48 & 1) * (int)fVar1 | (uint)!(bool)(bVar48 & 1) * auVar76._0_4_;
      bVar14 = (bool)((byte)(uVar45 >> 1) & 1);
      auVar55._4_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._4_4_;
      bVar14 = (bool)((byte)(uVar45 >> 2) & 1);
      auVar55._8_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._8_4_;
      bVar14 = (bool)((byte)(uVar45 >> 3) & 1);
      auVar55._12_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._12_4_;
      bVar14 = (bool)((byte)(uVar45 >> 4) & 1);
      auVar67._16_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._16_4_;
      auVar67._0_16_ = auVar55;
      bVar14 = (bool)((byte)(uVar45 >> 5) & 1);
      auVar67._20_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._20_4_;
      bVar14 = (bool)((byte)(uVar45 >> 6) & 1);
      auVar67._24_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._24_4_;
      bVar14 = SUB81(uVar45 >> 7,0);
      auVar67._28_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._28_4_;
      auVar68._4_4_ = (uint)!(bool)((byte)(uVar45 >> 1) & 1) * auVar73._4_4_;
      auVar68._0_4_ = (uint)!(bool)(bVar48 & 1) * auVar73._0_4_;
      auVar68._8_4_ = (uint)!(bool)((byte)(uVar45 >> 2) & 1) * auVar73._8_4_;
      auVar68._12_4_ = (uint)!(bool)((byte)(uVar45 >> 3) & 1) * auVar73._12_4_;
      auVar68._16_4_ = (uint)!(bool)((byte)(uVar45 >> 4) & 1) * auVar73._16_4_;
      auVar68._20_4_ = (uint)!(bool)((byte)(uVar45 >> 5) & 1) * auVar73._20_4_;
      auVar68._24_4_ = (uint)!(bool)((byte)(uVar45 >> 6) & 1) * auVar73._24_4_;
      auVar68._28_4_ = (uint)!SUB81(uVar45 >> 7,0) * auVar73._28_4_;
      auVar70 = vmulps_avx512vl(auVar68,auVar70);
      auVar70 = vfmadd231ps_avx512vl(auVar70,auVar67,auVar79);
      auVar79 = *(undefined1 (*) [32])(param_5 + uVar46);
      auVar69._4_4_ = (uint)!(bool)((byte)(uVar45 >> 1) & 1) * auVar74._4_4_;
      auVar69._0_4_ = (uint)!(bool)(bVar48 & 1) * auVar74._0_4_;
      auVar69._8_4_ = (uint)!(bool)((byte)(uVar45 >> 2) & 1) * auVar74._8_4_;
      auVar69._12_4_ = (uint)!(bool)((byte)(uVar45 >> 3) & 1) * auVar74._12_4_;
      auVar69._16_4_ = (uint)!(bool)((byte)(uVar45 >> 4) & 1) * auVar74._16_4_;
      auVar69._20_4_ = (uint)!(bool)((byte)(uVar45 >> 5) & 1) * auVar74._20_4_;
      auVar69._24_4_ = (uint)!(bool)((byte)(uVar45 >> 6) & 1) * auVar74._24_4_;
      bVar14 = SUB81(uVar45 >> 7,0);
      auVar69._28_4_ =
           (uint)bVar14 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar14 * auVar74._28_4_;
      auVar71 = vfmadd231ps_avx512vl(auVar70,auVar69,auVar71);
      auVar66._4_4_ = param_6;
      auVar66._0_4_ = param_6;
      auVar66._8_4_ = param_6;
      auVar66._12_4_ = param_6;
      auVar66._16_4_ = param_6;
      auVar66._20_4_ = param_6;
      auVar66._24_4_ = param_6;
      auVar66._28_4_ = param_6;
      auVar70 = vmulps_avx512vl(auVar66,auVar72);
      auVar70 = vmulps_avx512vl(auVar66,auVar70);
      auVar76 = vmulps_avx512vl(auVar66,auVar77);
      auVar52 = auVar76._0_16_;
      auVar96 = vfnmsub213ps_avx512vl(auVar96,auVar70,auVar79);
      auVar96 = vfnmadd213ps_avx512vl(auVar71,auVar76,auVar96);
      auVar71 = vaddps_avx512vl(auVar70,auVar76);
      auVar72._0_4_ = auVar95._0_4_ * auVar71._0_4_ + fVar1;
      auVar72._4_4_ = auVar95._4_4_ * auVar71._4_4_ + fVar1;
      auVar72._8_4_ = auVar95._8_4_ * auVar71._8_4_ + fVar1;
      auVar72._12_4_ = auVar95._12_4_ * auVar71._12_4_ + fVar1;
      auVar72._16_4_ = auVar95._16_4_ * auVar71._16_4_ + fVar1;
      auVar72._20_4_ = auVar95._20_4_ * auVar71._20_4_ + fVar1;
      auVar72._24_4_ = auVar95._24_4_ * auVar71._24_4_ + fVar1;
      auVar72._28_4_ = auVar95._28_4_ * auVar71._28_4_ + fVar1;
      auVar96 = vdivps_avx(auVar96,auVar72);
      pfVar9 = (float *)(param_5 + uVar46);
      *pfVar9 = auVar79._0_4_ + auVar96._0_4_;
      pfVar9[1] = auVar79._4_4_ + auVar96._4_4_;
      pfVar9[2] = auVar79._8_4_ + auVar96._8_4_;
      pfVar9[3] = auVar79._12_4_ + auVar96._12_4_;
      pfVar9[4] = auVar79._16_4_ + auVar96._16_4_;
      pfVar9[5] = auVar79._20_4_ + auVar96._20_4_;
      pfVar9[6] = auVar79._24_4_ + auVar96._24_4_;
      pfVar9[7] = auVar79._28_4_ + auVar96._28_4_;
      auVar79 = vmulps_avx512vl(auVar67,auVar96);
      auVar71 = vfmadd231ps_avx512vl(auVar57,auVar60,auVar79);
      in_ZMM29 = ZEXT3264(auVar71);
      auVar54 = auVar71._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar61 | auVar80),0xffff,auVar71);
      auVar71 = vmulps_avx512vl(auVar68,auVar96);
      auVar70 = vfmadd231ps_avx512vl(auVar58,auVar60,auVar71);
      in_ZMM30 = ZEXT3264(auVar70);
      auVar128 = auVar70._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar60,0xffff,auVar70);
      auVar96 = vmulps_avx512vl(auVar69,auVar96);
      auVar70 = vfmadd231ps_avx512vl(auVar59,auVar60,auVar96);
      in_ZMM31 = ZEXT3264(auVar70);
      auVar129 = auVar70._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar65,0xffff,auVar70);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar56 | auVar80),0xffff,auVar60);
      auVar79 = vfnmadd231ps_avx512vl(auVar62,auVar65,auVar79);
      in_ZMM23 = ZEXT3264(auVar79);
      auVar49 = auVar79._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar78,0xffff,auVar79);
      auVar79 = vfnmadd231ps_avx512vl(auVar63,auVar65,auVar71);
      in_ZMM28 = ZEXT3264(auVar79);
      auVar53 = auVar79._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar64,0xffff,auVar79);
      auVar56._0_4_ = -(auVar65._0_4_ * auVar96._0_4_) + auVar64._0_4_;
      auVar56._4_4_ = -(auVar65._4_4_ * auVar96._4_4_) + auVar64._4_4_;
      auVar56._8_4_ = -(auVar65._8_4_ * auVar96._8_4_) + auVar64._8_4_;
      auVar56._12_4_ = -(auVar65._12_4_ * auVar96._12_4_) + auVar64._12_4_;
      auVar56._16_4_ = -(auVar65._16_4_ * auVar96._16_4_) + auVar64._16_4_;
      auVar56._20_4_ = -(auVar65._20_4_ * auVar96._20_4_) + auVar64._20_4_;
      auVar56._24_4_ = -(auVar65._24_4_ * auVar96._24_4_) + auVar64._24_4_;
      auVar56._28_4_ = -(auVar65._28_4_ * auVar96._28_4_) + auVar64._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar77,0xffff,auVar56);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar61 | auVar80),0xffff,auVar65);
      uVar43 = uVar43 + 8;
      uVar44 = uVar44 + 0x20;
    } while ((int)uVar43 < (int)(uVar47 & 0xfffffff8));
    if ((int)param_13 <= (int)uVar43) {
      return;
    }
  }
  auVar79 = vpbroadcastd_avx512vl();
  auVar79 = vpor_avx2(auVar79,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar96 = vpbroadcastd_avx512vl();
  uVar44 = vpcmpgtd_avx512vl(auVar96,auVar79);
  uVar45 = uVar43 & 0xffffffff;
  pauVar10 = (undefined1 (*) [32])(param_3 + uVar45 * 8);
  bVar48 = (byte)uVar44;
  if (bVar48 == 0xff) {
    auVar79 = vmovdqa64_avx512vl(
                                ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                );
    auVar57 = vpermi2d_avx512vl(auVar79,*pauVar10,pauVar10[1]);
    auVar79 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                );
    auVar58 = vpermi2d_avx512vl(auVar79,*pauVar10,pauVar10[1]);
    auVar50 = vxorps_avx512vl(auVar125,auVar125);
  }
  else {
    auVar49 = vxorps_avx512vl(auVar49,auVar49);
    auVar79 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar10 + param_5));
    auVar57._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar49._0_4_;
    bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
    auVar57._4_4_ = (uint)bVar14 * auVar79._4_4_ | (uint)!bVar14 * auVar49._4_4_;
    bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
    auVar57._8_4_ = (uint)bVar14 * auVar79._8_4_ | (uint)!bVar14 * auVar49._8_4_;
    bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
    auVar57._12_4_ = (uint)bVar14 * auVar79._12_4_ | (uint)!bVar14 * auVar49._12_4_;
    auVar57._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
    auVar57._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
    auVar57._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
    auVar57._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
    auVar79 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar10 + param_5));
    auVar58._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_;
    auVar58._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_;
    auVar58._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_;
    auVar58._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_;
    auVar58._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
    auVar58._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
    auVar58._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
    auVar58._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
    auVar50 = vxorps_avx512vl(auVar125,auVar125);
  }
  auVar51 = (undefined1  [16])0x0;
  if ((param_7 & 1) != 0) {
    if ((~bVar48 & 0x81) == 0) {
      auVar51._8_8_ = 0;
      auVar51._0_8_ = *(ulonglong *)*(undefined1 (*) [16])(param_8 + uVar45);
    }
    else {
      auVar125 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_8 + uVar45));
      auVar51[1] = ((byte)(uVar44 >> 1) & 1) * auVar125[1];
      auVar51[0] = (bVar48 & 1) * auVar125[0];
      auVar51[2] = ((byte)(uVar44 >> 2) & 1) * auVar125[2];
      auVar51[3] = ((byte)(uVar44 >> 3) & 1) * auVar125[3];
      auVar51[4] = ((byte)(uVar44 >> 4) & 1) * auVar125[4];
      auVar51[5] = ((byte)(uVar44 >> 5) & 1) * auVar125[5];
      auVar51[6] = ((byte)(uVar44 >> 6) & 1) * auVar125[6];
      auVar51[7] = (char)(uVar44 >> 7) * auVar125[7];
      auVar51._8_8_ = 0;
    }
  }
  if ((param_10 & 1) != 0) {
    param_11 = (undefined1 (*) [16])(*param_11 + uVar45);
    if ((~bVar48 & 0x81) == 0) {
      auVar50._8_8_ = 0;
      auVar50._0_8_ = *(ulonglong *)*param_11;
    }
    else {
      auVar125 = vmovdqu8_avx512vl(*param_11);
      auVar50[1] = ((byte)(uVar44 >> 1) & 1) * auVar125[1];
      auVar50[0] = (bVar48 & 1) * auVar125[0];
      auVar50[2] = ((byte)(uVar44 >> 2) & 1) * auVar125[2];
      auVar50[3] = ((byte)(uVar44 >> 3) & 1) * auVar125[3];
      auVar50[4] = ((byte)(uVar44 >> 4) & 1) * auVar125[4];
      auVar50[5] = ((byte)(uVar44 >> 5) & 1) * auVar125[5];
      auVar50[6] = ((byte)(uVar44 >> 6) & 1) * auVar125[6];
      auVar50[7] = (char)(uVar44 >> 7) * auVar125[7];
      auVar50._8_8_ = 0;
    }
  }
  auVar78 = vpslld_avx512vl(auVar57,4);
  auVar92._4_4_ = __real_00000004;
  auVar92._0_4_ = __real_00000004;
  auVar92._8_4_ = __real_00000004;
  auVar92._12_4_ = __real_00000004;
  auVar92._16_4_ = __real_00000004;
  auVar92._20_4_ = __real_00000004;
  auVar92._24_4_ = __real_00000004;
  auVar92._28_4_ = __real_00000004;
  auVar125 = vxorps_avx512vl(auVar126,auVar126);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar23 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar127 = vxorps_avx512vl(auVar127,auVar127);
  auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  bVar15 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar24 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar71 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
  auVar49 = vxorps_avx512vl(auVar53,auVar53);
  auVar70 = vgatherdps_avx512vl(*param_1);
  bVar16 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar25 = (bool)((byte)(uVar44 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar52 = vxorps_avx512vl(auVar52,auVar52);
  auVar76 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  auVar74._0_4_ = (uint)(bVar48 & 1) * auVar76._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar52._0_4_;
  bVar17 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar74._4_4_ = (uint)bVar17 * auVar76._4_4_ | (uint)!bVar17 * auVar52._4_4_;
  bVar17 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar74._8_4_ = (uint)bVar17 * auVar76._8_4_ | (uint)!bVar17 * auVar52._8_4_;
  bVar17 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar74._12_4_ = (uint)bVar17 * auVar76._12_4_ | (uint)!bVar17 * auVar52._12_4_;
  auVar74._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar76._16_4_;
  auVar74._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar76._20_4_;
  auVar74._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar76._24_4_;
  auVar74._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar76._28_4_;
  auVar76 = vpslld_avx512vl(auVar58,4);
  auVar52 = vxorps_avx512vl(auVar54,auVar54);
  auVar80 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar42));
  bVar17 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar26 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar126 = vxorps_avx512vl(auVar128,auVar128);
  auVar66 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_278));
  auVar53._0_4_ = (uint)(bVar48 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar126._0_4_;
  bVar18 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar53._4_4_ = (uint)bVar18 * auVar66._4_4_ | (uint)!bVar18 * auVar126._4_4_;
  bVar18 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar53._8_4_ = (uint)bVar18 * auVar66._8_4_ | (uint)!bVar18 * auVar126._8_4_;
  bVar18 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar53._12_4_ = (uint)bVar18 * auVar66._12_4_ | (uint)!bVar18 * auVar126._12_4_;
  auVar126 = vxorps_avx512vl(auVar129,auVar129);
  auVar56 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
  auVar54._0_4_ = (uint)(bVar48 & 1) * auVar56._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar126._0_4_;
  bVar18 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar54._4_4_ = (uint)bVar18 * auVar56._4_4_ | (uint)!bVar18 * auVar126._4_4_;
  bVar18 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar54._8_4_ = (uint)bVar18 * auVar56._8_4_ | (uint)!bVar18 * auVar126._8_4_;
  bVar18 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar54._12_4_ = (uint)bVar18 * auVar56._12_4_ | (uint)!bVar18 * auVar126._12_4_;
  auVar55 = vxorps_avx512vl(auVar55,auVar55);
  auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  auVar81._0_4_ = (uint)(bVar48 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar55._0_4_;
  bVar18 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar81._4_4_ = (uint)bVar18 * auVar59._4_4_ | (uint)!bVar18 * auVar55._4_4_;
  bVar18 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar81._8_4_ = (uint)bVar18 * auVar59._8_4_ | (uint)!bVar18 * auVar55._8_4_;
  bVar18 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar81._12_4_ = (uint)bVar18 * auVar59._12_4_ | (uint)!bVar18 * auVar55._12_4_;
  auVar81._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar59._16_4_;
  auVar81._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar59._20_4_;
  auVar81._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar59._24_4_;
  auVar81._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar59._28_4_;
  local_160 = (uint)(bVar48 & 1) *
              ((uint)(bVar48 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar125._0_4_) |
              !(bool)(bVar48 & 1) * local_160;
  bVar18 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_15c = (uint)bVar18 * ((uint)bVar14 * auVar79._4_4_ | (uint)!bVar14 * auVar125._4_4_) |
               !bVar18 * uStack_15c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_158 = (uint)bVar14 * ((uint)bVar19 * auVar79._8_4_ | (uint)!bVar19 * auVar125._8_4_) |
               !bVar14 * uStack_158;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_154 = (uint)bVar14 * ((uint)bVar23 * auVar79._12_4_ | (uint)!bVar23 * auVar125._12_4_) |
               !bVar14 * uStack_154;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_150 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_ |
               !bVar14 * uStack_150;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_14c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_ |
               !bVar14 * uStack_14c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_148 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_ |
               !bVar14 * uStack_148;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_144 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar79._28_4_ | !bVar14 * uStack_144;
  local_140 = (uint)(bVar48 & 1) *
              ((uint)(bVar48 & 1) * auVar96._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar127._0_4_) |
              !(bool)(bVar48 & 1) * local_140;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_13c = (uint)bVar14 * ((uint)bVar15 * auVar96._4_4_ | (uint)!bVar15 * auVar127._4_4_) |
               !bVar14 * uStack_13c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_138 = (uint)bVar14 * ((uint)bVar20 * auVar96._8_4_ | (uint)!bVar20 * auVar127._8_4_) |
               !bVar14 * uStack_138;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_134 = (uint)bVar14 * ((uint)bVar24 * auVar96._12_4_ | (uint)!bVar24 * auVar127._12_4_) |
               !bVar14 * uStack_134;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_130 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar96._16_4_ |
               !bVar14 * uStack_130;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_12c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar96._20_4_ |
               !bVar14 * uStack_12c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_128 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar96._24_4_ |
               !bVar14 * uStack_128;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_124 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar96._28_4_ | !bVar14 * uStack_124;
  local_120 = (uint)(bVar48 & 1) *
              ((uint)(bVar48 & 1) * auVar70._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar49._0_4_) |
              !(bool)(bVar48 & 1) * local_120;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_11c = (uint)bVar14 * ((uint)bVar16 * auVar70._4_4_ | (uint)!bVar16 * auVar49._4_4_) |
               !bVar14 * uStack_11c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_118 = (uint)bVar14 * ((uint)bVar21 * auVar70._8_4_ | (uint)!bVar21 * auVar49._8_4_) |
               !bVar14 * uStack_118;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_114 = (uint)bVar14 * ((uint)bVar25 * auVar70._12_4_ | (uint)!bVar25 * auVar49._12_4_) |
               !bVar14 * uStack_114;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_110 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar70._16_4_ |
               !bVar14 * uStack_110;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_10c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar70._20_4_ |
               !bVar14 * uStack_10c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_108 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar70._24_4_ |
               !bVar14 * uStack_108;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_104 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar70._28_4_ | !bVar14 * uStack_104;
  local_1c0 = (uint)(bVar48 & 1) *
              ((uint)(bVar48 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar52._0_4_) |
              !(bool)(bVar48 & 1) * local_1c0;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_1bc = (uint)bVar14 * ((uint)bVar17 * auVar80._4_4_ | (uint)!bVar17 * auVar52._4_4_) |
               !bVar14 * uStack_1bc;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_1b8 = (uint)bVar14 * ((uint)bVar22 * auVar80._8_4_ | (uint)!bVar22 * auVar52._8_4_) |
               !bVar14 * uStack_1b8;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_1b4 = (uint)bVar14 * ((uint)bVar26 * auVar80._12_4_ | (uint)!bVar26 * auVar52._12_4_) |
               !bVar14 * uStack_1b4;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_1b0 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar80._16_4_ |
               !bVar14 * uStack_1b0;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_1ac = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar80._20_4_ |
               !bVar14 * uStack_1ac;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_1a8 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar80._24_4_ |
               !bVar14 * uStack_1a8;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_1a4 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar80._28_4_ | !bVar14 * uStack_1a4;
  local_1a0 = (bVar48 & 1) * auVar53._0_4_ | !(bool)(bVar48 & 1) * local_1a0;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_19c = bVar14 * auVar53._4_4_ | !bVar14 * uStack_19c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_198 = bVar14 * auVar53._8_4_ | !bVar14 * uStack_198;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_194 = bVar14 * auVar53._12_4_ | !bVar14 * uStack_194;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_190 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar66._16_4_ |
               !bVar14 * uStack_190;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_18c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar66._20_4_ |
               !bVar14 * uStack_18c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_188 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar66._24_4_ |
               !bVar14 * uStack_188;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_184 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar66._28_4_ | !bVar14 * uStack_184;
  local_180 = (bVar48 & 1) * auVar54._0_4_ | !(bool)(bVar48 & 1) * local_180;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_17c = bVar14 * auVar54._4_4_ | !bVar14 * uStack_17c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_178 = bVar14 * auVar54._8_4_ | !bVar14 * uStack_178;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_174 = bVar14 * auVar54._12_4_ | !bVar14 * uStack_174;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_170 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar56._16_4_ |
               !bVar14 * uStack_170;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_16c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar56._20_4_ |
               !bVar14 * uStack_16c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_168 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar56._24_4_ |
               !bVar14 * uStack_168;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_164 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar56._28_4_ | !bVar14 * uStack_164;
  auVar79 = vpaddd_avx512vl(auVar57,auVar57);
  vpaddd_avx512vl(auVar57,auVar79);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar43 * 4));
  auVar82._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_;
  auVar82._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_;
  auVar82._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_;
  auVar82._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_;
  auVar82._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
  auVar82._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
  auVar82._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
  auVar82._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
  auVar79 = vpslld_avx512vl(auVar57,2);
  auVar96 = vpslld_avx512vl(auVar57,3);
  auVar79 = vpaddd_avx512vl(auVar96,auVar79);
  auVar96 = vpaddd_avx512vl(auVar79,auVar92);
  auVar70 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_2));
  auVar83._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * auVar70._4_4_;
  auVar83._0_4_ = (uint)(bVar48 & 1) * auVar70._0_4_;
  auVar83._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * auVar70._8_4_;
  auVar83._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * auVar70._12_4_;
  auVar83._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar70._16_4_;
  auVar83._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar70._20_4_;
  auVar83._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar70._24_4_;
  auVar83._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar70._28_4_;
  vpaddd_avx512vl(auVar79,auVar71);
  auVar127 = vxorps_avx512vl(auVar96._0_16_,auVar96._0_16_);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(*param_11 + param_2));
  auVar84._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar127._0_4_;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar84._4_4_ = (uint)bVar14 * auVar79._4_4_ | (uint)!bVar14 * auVar127._4_4_;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar84._8_4_ = (uint)bVar14 * auVar79._8_4_ | (uint)!bVar14 * auVar127._8_4_;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar84._12_4_ = (uint)bVar14 * auVar79._12_4_ | (uint)!bVar14 * auVar127._12_4_;
  auVar84._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
  auVar84._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
  auVar84._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
  auVar84._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
  auVar79 = vpaddd_avx512vl(auVar58,auVar58);
  vpaddd_avx512vl(auVar58,auVar79);
  auVar127 = vxorps_avx512vl(auVar53,auVar53);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_11 * 4));
  auVar85._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar127._0_4_;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar85._4_4_ = (uint)bVar14 * auVar79._4_4_ | (uint)!bVar14 * auVar127._4_4_;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar85._8_4_ = (uint)bVar14 * auVar79._8_4_ | (uint)!bVar14 * auVar127._8_4_;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar85._12_4_ = (uint)bVar14 * auVar79._12_4_ | (uint)!bVar14 * auVar127._12_4_;
  auVar85._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
  auVar85._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
  auVar85._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
  auVar85._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
  auVar79 = vpslld_avx512vl(auVar58,2);
  auVar96 = vpslld_avx512vl(auVar58,3);
  auVar79 = vpaddd_avx512vl(auVar96,auVar79);
  vpaddd_avx512vl(auVar79,auVar92);
  auVar127 = vxorps_avx512vl(auVar54,auVar54);
  auVar96 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar86._0_4_ = (uint)(bVar48 & 1) * auVar96._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar127._0_4_;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar86._4_4_ = (uint)bVar14 * auVar96._4_4_ | (uint)!bVar14 * auVar127._4_4_;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar86._8_4_ = (uint)bVar14 * auVar96._8_4_ | (uint)!bVar14 * auVar127._8_4_;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar86._12_4_ = (uint)bVar14 * auVar96._12_4_ | (uint)!bVar14 * auVar127._12_4_;
  auVar86._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar96._16_4_;
  auVar86._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar96._20_4_;
  auVar86._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar96._24_4_;
  auVar86._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar96._28_4_;
  vpaddd_avx512vl(auVar79,auVar71);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar87._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_;
  auVar87._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_;
  auVar87._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_;
  auVar87._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_;
  auVar87._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
  auVar87._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
  auVar87._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
  auVar87._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
  auVar79 = vpmovsxbd_avx512vl(auVar51);
  vpslld_avx512vl(auVar79,2);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_9 + (longlong)auStack_278));
  fVar1 = (float)((uint)(bVar48 & 1) * auVar79._0_4_);
  fVar2 = (float)((uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_);
  auVar88._4_4_ = fVar2;
  auVar88._0_4_ = fVar1;
  fVar3 = (float)((uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_);
  auVar88._8_4_ = fVar3;
  fVar4 = (float)((uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_);
  auVar88._12_4_ = fVar4;
  fVar5 = (float)((uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_);
  auVar88._16_4_ = fVar5;
  fVar6 = (float)((uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_);
  auVar88._20_4_ = fVar6;
  fVar7 = (float)((uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_);
  auVar88._24_4_ = fVar7;
  fVar8 = (float)((uint)(byte)(uVar44 >> 7) * auVar79._28_4_);
  auVar88._28_4_ = fVar8;
  auVar79 = vpmovsxbd_avx512vl(auVar50);
  vpslld_avx512vl(auVar79,2);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_12 + (longlong)auStack_278));
  fVar106 = (float)((uint)(bVar48 & 1) * auVar79._0_4_);
  fVar108 = (float)((uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_);
  fVar109 = (float)((uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_);
  fVar110 = (float)((uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_);
  fVar111 = (float)((uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_);
  fVar112 = (float)((uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_);
  fVar113 = (float)((uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_);
  fVar114 = (float)((uint)(byte)(uVar44 >> 7) * auVar79._28_4_);
  auVar64._4_4_ = uStack_15c;
  auVar64._0_4_ = local_160;
  auVar64._8_4_ = uStack_158;
  auVar64._12_4_ = uStack_154;
  auVar64._16_4_ = uStack_150;
  auVar64._20_4_ = uStack_14c;
  auVar64._24_4_ = uStack_148;
  auVar64._28_4_ = uStack_144;
  auVar65._4_4_ = uStack_13c;
  auVar65._0_4_ = local_140;
  auVar65._8_4_ = uStack_138;
  auVar65._12_4_ = uStack_134;
  auVar65._16_4_ = uStack_130;
  auVar65._20_4_ = uStack_12c;
  auVar65._24_4_ = uStack_128;
  auVar65._28_4_ = uStack_124;
  auVar73._4_4_ = uStack_11c;
  auVar73._0_4_ = local_120;
  auVar73._8_4_ = uStack_118;
  auVar73._12_4_ = uStack_114;
  auVar73._16_4_ = uStack_110;
  auVar73._20_4_ = uStack_10c;
  auVar73._24_4_ = uStack_108;
  auVar73._28_4_ = uStack_104;
  auVar61._4_4_ = uStack_1bc;
  auVar61._0_4_ = local_1c0;
  auVar61._8_4_ = uStack_1b8;
  auVar61._12_4_ = uStack_1b4;
  auVar61._16_4_ = uStack_1b0;
  auVar61._20_4_ = uStack_1ac;
  auVar61._24_4_ = uStack_1a8;
  auVar61._28_4_ = uStack_1a4;
  auVar62._4_4_ = uStack_19c;
  auVar62._0_4_ = local_1a0;
  auVar62._8_4_ = uStack_198;
  auVar62._12_4_ = uStack_194;
  auVar62._16_4_ = uStack_190;
  auVar62._20_4_ = uStack_18c;
  auVar62._24_4_ = uStack_188;
  auVar62._28_4_ = uStack_184;
  auVar63._4_4_ = uStack_17c;
  auVar63._0_4_ = local_180;
  auVar63._8_4_ = uStack_178;
  auVar63._12_4_ = uStack_174;
  auVar63._16_4_ = uStack_170;
  auVar63._20_4_ = uStack_16c;
  auVar63._24_4_ = uStack_168;
  auVar63._28_4_ = uStack_164;
  auVar79 = vsubps_avx512vl(auVar64,auVar61);
  auVar70 = vsubps_avx512vl(auVar65,auVar62);
  auVar80 = vsubps_avx512vl(auVar73,auVar63);
  fVar28 = auVar70._0_4_;
  fVar29 = auVar70._4_4_;
  fVar30 = auVar70._8_4_;
  fVar31 = auVar70._12_4_;
  fVar32 = auVar70._16_4_;
  fVar33 = auVar70._20_4_;
  fVar34 = auVar70._24_4_;
  fVar35 = auVar70._28_4_;
  fVar97 = auVar79._0_4_;
  fVar99 = auVar79._4_4_;
  fVar100 = auVar79._8_4_;
  fVar101 = auVar79._12_4_;
  fVar102 = auVar79._16_4_;
  fVar103 = auVar79._20_4_;
  fVar104 = auVar79._24_4_;
  fVar105 = auVar79._28_4_;
  fVar115 = auVar80._0_4_;
  auVar124._0_4_ = fVar115 * fVar115 + fVar97 * fVar97 + fVar28 * fVar28;
  fVar116 = auVar80._4_4_;
  auVar124._4_4_ = fVar116 * fVar116 + fVar99 * fVar99 + fVar29 * fVar29;
  fVar117 = auVar80._8_4_;
  auVar124._8_4_ = fVar117 * fVar117 + fVar100 * fVar100 + fVar30 * fVar30;
  fVar118 = auVar80._12_4_;
  auVar124._12_4_ = fVar118 * fVar118 + fVar101 * fVar101 + fVar31 * fVar31;
  fVar119 = auVar80._16_4_;
  auVar124._16_4_ = fVar119 * fVar119 + fVar102 * fVar102 + fVar32 * fVar32;
  fVar120 = auVar80._20_4_;
  auVar124._20_4_ = fVar120 * fVar120 + fVar103 * fVar103 + fVar33 * fVar33;
  fVar121 = auVar80._24_4_;
  auVar124._24_4_ = fVar121 * fVar121 + fVar104 * fVar104 + fVar34 * fVar34;
  fVar122 = auVar80._28_4_;
  auVar124._28_4_ = fVar122 * fVar122 + fVar105 * fVar105 + fVar35 * fVar35;
  auVar96 = vsqrtps_avx(auVar124);
  auVar59._4_4_ = __real_38d1b717;
  auVar59._0_4_ = __real_38d1b717;
  auVar59._8_4_ = __real_38d1b717;
  auVar59._12_4_ = __real_38d1b717;
  auVar59._16_4_ = __real_38d1b717;
  auVar59._20_4_ = __real_38d1b717;
  auVar59._24_4_ = __real_38d1b717;
  auVar59._28_4_ = __real_38d1b717;
  uVar42 = vcmpps_avx512vl(auVar124,auVar59,1);
  auVar79 = vdivps_avx(auVar79,auVar96);
  auVar98._4_4_ = __real_3f800000;
  auVar98._0_4_ = __real_3f800000;
  auVar98._8_4_ = __real_3f800000;
  auVar98._12_4_ = __real_3f800000;
  auVar98._16_4_ = __real_3f800000;
  auVar98._20_4_ = __real_3f800000;
  auVar98._24_4_ = __real_3f800000;
  auVar98._28_4_ = __real_3f800000;
  bVar13 = (byte)uVar42;
  bVar14 = (bool)((byte)(uVar42 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar42 >> 2) & 1);
  bVar18 = (bool)((byte)(uVar42 >> 3) & 1);
  bVar20 = (bool)((byte)(uVar42 >> 4) & 1);
  bVar22 = (bool)((byte)(uVar42 >> 5) & 1);
  bVar24 = (bool)((byte)(uVar42 >> 6) & 1);
  bVar26 = SUB81(uVar42 >> 7,0);
  bVar15 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar21 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar23 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar25 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar27 = SUB81(uVar44 >> 7,0);
  local_300._4_4_ =
       (uint)bVar15 * ((uint)bVar14 * (int)__real_3f800000 | (uint)!bVar14 * auVar79._4_4_) |
       (uint)!bVar15 * (int)fVar99;
  local_300._0_4_ =
       (uint)(bVar48 & 1) *
       ((uint)(bVar13 & 1) * (int)__real_3f800000 | (uint)!(bool)(bVar13 & 1) * auVar79._0_4_) |
       (uint)!(bool)(bVar48 & 1) * (int)fVar97;
  local_300._8_4_ =
       (uint)bVar17 * ((uint)bVar16 * (int)__real_3f800000 | (uint)!bVar16 * auVar79._8_4_) |
       (uint)!bVar17 * (int)fVar100;
  local_300._12_4_ =
       (uint)bVar19 * ((uint)bVar18 * (int)__real_3f800000 | (uint)!bVar18 * auVar79._12_4_) |
       (uint)!bVar19 * (int)fVar101;
  local_300._16_4_ =
       (uint)bVar21 * ((uint)bVar20 * (int)__real_3f800000 | (uint)!bVar20 * auVar79._16_4_) |
       (uint)!bVar21 * (int)fVar102;
  local_300._20_4_ =
       (uint)bVar23 * ((uint)bVar22 * (int)__real_3f800000 | (uint)!bVar22 * auVar79._20_4_) |
       (uint)!bVar23 * (int)fVar103;
  local_300._24_4_ =
       (uint)bVar25 * ((uint)bVar24 * (int)__real_3f800000 | (uint)!bVar24 * auVar79._24_4_) |
       (uint)!bVar25 * (int)fVar104;
  local_300._28_4_ =
       (uint)bVar27 * ((uint)bVar26 * (int)__real_3f800000 | (uint)!bVar26 * auVar79._28_4_) |
       (uint)!bVar27 * (int)fVar105;
  auVar79 = vdivps_avx(auVar70,auVar96);
  bVar20 = SUB81(uVar42 >> 7,0);
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar21 = SUB81(uVar44 >> 7,0);
  local_2e0._4_4_ =
       (uint)bVar14 * (uint)!(bool)((byte)(uVar42 >> 1) & 1) * auVar79._4_4_ |
       (uint)!bVar14 * (int)fVar29;
  local_2e0._0_4_ =
       (uint)(bVar48 & 1) * (uint)!(bool)(bVar13 & 1) * auVar79._0_4_ |
       (uint)!(bool)(bVar48 & 1) * (int)fVar28;
  local_2e0._8_4_ =
       (uint)bVar15 * (uint)!(bool)((byte)(uVar42 >> 2) & 1) * auVar79._8_4_ |
       (uint)!bVar15 * (int)fVar30;
  local_2e0._12_4_ =
       (uint)bVar16 * (uint)!(bool)((byte)(uVar42 >> 3) & 1) * auVar79._12_4_ |
       (uint)!bVar16 * (int)fVar31;
  local_2e0._16_4_ =
       (uint)bVar17 * (uint)!(bool)((byte)(uVar42 >> 4) & 1) * auVar79._16_4_ |
       (uint)!bVar17 * (int)fVar32;
  local_2e0._20_4_ =
       (uint)bVar18 * (uint)!(bool)((byte)(uVar42 >> 5) & 1) * auVar79._20_4_ |
       (uint)!bVar18 * (int)fVar33;
  local_2e0._24_4_ =
       (uint)bVar19 * (uint)!(bool)((byte)(uVar42 >> 6) & 1) * auVar79._24_4_ |
       (uint)!bVar19 * (int)fVar34;
  local_2e0._28_4_ =
       (uint)bVar21 *
       ((uint)bVar20 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar20 * auVar79._28_4_)
       | (uint)!bVar21 * (int)fVar35;
  lVar41 = (longlong)((int)uVar43 << 2);
  auVar79 = vdivps_avx(auVar80,auVar96);
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar20 = SUB81(uVar44 >> 7,0);
  local_2c0._4_4_ =
       (uint)bVar14 * (uint)!(bool)((byte)(uVar42 >> 1) & 1) * auVar79._4_4_ |
       (uint)!bVar14 * (int)fVar116;
  local_2c0._0_4_ =
       (uint)(bVar48 & 1) * (uint)!(bool)(bVar13 & 1) * auVar79._0_4_ |
       (uint)!(bool)(bVar48 & 1) * (int)fVar115;
  local_2c0._8_4_ =
       (uint)bVar15 * (uint)!(bool)((byte)(uVar42 >> 2) & 1) * auVar79._8_4_ |
       (uint)!bVar15 * (int)fVar117;
  local_2c0._12_4_ =
       (uint)bVar16 * (uint)!(bool)((byte)(uVar42 >> 3) & 1) * auVar79._12_4_ |
       (uint)!bVar16 * (int)fVar118;
  local_2c0._16_4_ =
       (uint)bVar17 * (uint)!(bool)((byte)(uVar42 >> 4) & 1) * auVar79._16_4_ |
       (uint)!bVar17 * (int)fVar119;
  local_2c0._20_4_ =
       (uint)bVar18 * (uint)!(bool)((byte)(uVar42 >> 5) & 1) * auVar79._20_4_ |
       (uint)!bVar18 * (int)fVar120;
  local_2c0._24_4_ =
       (uint)bVar19 * (uint)!(bool)((byte)(uVar42 >> 6) & 1) * auVar79._24_4_ |
       (uint)!bVar19 * (int)fVar121;
  local_2c0._28_4_ =
       (uint)bVar20 * (uint)!SUB81(uVar42 >> 7,0) * auVar79._28_4_ | (uint)!bVar20 * (int)fVar122;
  auVar89._4_4_ = (uint)!(bool)((byte)(uVar42 >> 1) & 1) * auVar96._4_4_;
  auVar89._0_4_ = (uint)!(bool)(bVar13 & 1) * auVar96._0_4_;
  auVar89._8_4_ = (uint)!(bool)((byte)(uVar42 >> 2) & 1) * auVar96._8_4_;
  auVar89._12_4_ = (uint)!(bool)((byte)(uVar42 >> 3) & 1) * auVar96._12_4_;
  auVar89._16_4_ = (uint)!(bool)((byte)(uVar42 >> 4) & 1) * auVar96._16_4_;
  auVar89._20_4_ = (uint)!(bool)((byte)(uVar42 >> 5) & 1) * auVar96._20_4_;
  auVar89._24_4_ = (uint)!(bool)((byte)(uVar42 >> 6) & 1) * auVar96._24_4_;
  bVar14 = SUB81(uVar42 >> 7,0);
  auVar89._28_4_ =
       (uint)bVar14 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar14 * auVar96._28_4_;
  auVar70 = vaddps_avx512vl(auVar74,auVar81);
  auVar79 = vdivps_avx(auVar88,auVar70);
  auVar79 = vsqrtps_avx(auVar79);
  fVar106 = (fVar106 + fVar106) * auVar79._0_4_;
  fVar108 = (fVar108 + fVar108) * auVar79._4_4_;
  fVar109 = (fVar109 + fVar109) * auVar79._8_4_;
  fVar110 = (fVar110 + fVar110) * auVar79._12_4_;
  fVar111 = (fVar111 + fVar111) * auVar79._16_4_;
  fVar112 = (fVar112 + fVar112) * auVar79._20_4_;
  fVar113 = (fVar113 + fVar113) * auVar79._24_4_;
  fVar114 = (fVar114 + fVar114) * auVar79._28_4_;
  piVar11 = (int *)(param_4 + lVar41);
  auVar90._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * piVar11[1];
  auVar90._0_4_ = (uint)(bVar48 & 1) * *piVar11;
  auVar90._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * piVar11[2];
  auVar90._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * piVar11[3];
  auVar90._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * piVar11[4];
  auVar90._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * piVar11[5];
  auVar90._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * piVar11[6];
  auVar90._28_4_ = (uint)(byte)(uVar44 >> 7) * piVar11[7];
  auVar96 = vsubps_avx(auVar89,auVar90);
  auVar60._4_4_ = __real_322bcc77;
  auVar60._0_4_ = __real_322bcc77;
  auVar60._8_4_ = __real_322bcc77;
  auVar60._12_4_ = __real_322bcc77;
  auVar60._16_4_ = __real_322bcc77;
  auVar60._20_4_ = __real_322bcc77;
  auVar60._24_4_ = __real_322bcc77;
  auVar60._28_4_ = __real_322bcc77;
  uVar42 = vcmpps_avx512vl(auVar90,auVar60,1);
  auVar79 = vdivps_avx(auVar98,auVar90);
  bVar14 = (bool)((byte)uVar42 & 1);
  bVar15 = (bool)((byte)(uVar42 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar42 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar42 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar42 >> 4) & 1);
  bVar19 = (bool)((byte)(uVar42 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar42 >> 6) & 1);
  bVar21 = SUB81(uVar42 >> 7,0);
  auVar93._0_4_ = param_6 * param_6 * fVar1;
  auVar93._4_4_ = param_6 * param_6 * fVar2;
  auVar93._8_4_ = param_6 * param_6 * fVar3;
  auVar93._12_4_ = param_6 * param_6 * fVar4;
  auVar93._16_4_ = param_6 * param_6 * fVar5;
  auVar93._20_4_ = param_6 * param_6 * fVar6;
  auVar93._24_4_ = param_6 * param_6 * fVar7;
  auVar93._28_4_ = param_6 * param_6 * fVar8;
  auVar107._0_4_ =
       param_6 * (float)((uint)bVar14 * (int)fVar106 |
                        (uint)!bVar14 * (int)(fVar106 * auVar79._0_4_));
  auVar107._4_4_ =
       param_6 * (float)((uint)bVar15 * (int)fVar108 |
                        (uint)!bVar15 * (int)(fVar108 * auVar79._4_4_));
  auVar107._8_4_ =
       param_6 * (float)((uint)bVar16 * (int)fVar109 |
                        (uint)!bVar16 * (int)(fVar109 * auVar79._8_4_));
  auVar107._12_4_ =
       param_6 * (float)((uint)bVar17 * (int)fVar110 |
                        (uint)!bVar17 * (int)(fVar110 * auVar79._12_4_));
  auVar107._16_4_ =
       param_6 * (float)((uint)bVar18 * (int)fVar111 |
                        (uint)!bVar18 * (int)(fVar111 * auVar79._16_4_));
  auVar107._20_4_ =
       param_6 * (float)((uint)bVar19 * (int)fVar112 |
                        (uint)!bVar19 * (int)(fVar112 * auVar79._20_4_));
  auVar107._24_4_ =
       param_6 * (float)((uint)bVar20 * (int)fVar113 |
                        (uint)!bVar20 * (int)(fVar113 * auVar79._24_4_));
  auVar107._28_4_ =
       param_6 * (float)((uint)bVar21 * (int)fVar114 |
                        (uint)!bVar21 * (int)(fVar114 * auVar79._28_4_));
  auVar79 = vsubps_avx512vl(auVar64,auVar82);
  auVar79 = vsubps_avx512vl(auVar79,auVar61);
  auVar79 = vaddps_avx512vl(auVar85,auVar79);
  auVar80 = vsubps_avx512vl(auVar65,auVar83);
  auVar66 = vsubps_avx512vl(auVar73,auVar84);
  auVar80 = vsubps_avx512vl(auVar80,auVar62);
  auVar80 = vaddps_avx512vl(auVar86,auVar80);
  auVar66 = vsubps_avx512vl(auVar66,auVar63);
  auVar66 = vaddps_avx512vl(auVar87,auVar66);
  auVar80 = vmulps_avx512vl(auVar80,local_2e0);
  auVar79 = vfmadd231ps_avx512vl(auVar80,local_300,auVar79);
  auVar79 = vfmadd231ps_avx512vl(auVar79,local_2c0,auVar66);
  piVar11 = (int *)(param_5 + lVar41);
  auVar91._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * piVar11[1];
  auVar91._0_4_ = (uint)(bVar48 & 1) * *piVar11;
  auVar91._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * piVar11[2];
  auVar91._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * piVar11[3];
  auVar91._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * piVar11[4];
  auVar91._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * piVar11[5];
  auVar91._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * piVar11[6];
  auVar91._28_4_ = (uint)(byte)(uVar44 >> 7) * piVar11[7];
  auVar96 = vfnmsub213ps_avx512vl(auVar96,auVar93,auVar91);
  auVar79 = vfnmadd213ps_avx512vl(auVar79,auVar107,auVar96);
  auVar94._0_4_ = auVar70._0_4_ * (auVar107._0_4_ + auVar93._0_4_) + __real_3f800000;
  auVar94._4_4_ = auVar70._4_4_ * (auVar107._4_4_ + auVar93._4_4_) + __real_3f800000;
  auVar94._8_4_ = auVar70._8_4_ * (auVar107._8_4_ + auVar93._8_4_) + __real_3f800000;
  auVar94._12_4_ = auVar70._12_4_ * (auVar107._12_4_ + auVar93._12_4_) + __real_3f800000;
  auVar94._16_4_ = auVar70._16_4_ * (auVar107._16_4_ + auVar93._16_4_) + __real_3f800000;
  auVar94._20_4_ = auVar70._20_4_ * (auVar107._20_4_ + auVar93._20_4_) + __real_3f800000;
  auVar94._24_4_ = auVar70._24_4_ * (auVar107._24_4_ + auVar93._24_4_) + __real_3f800000;
  auVar94._28_4_ = auVar70._28_4_ * (auVar107._28_4_ + auVar93._28_4_) + __real_3f800000;
  auVar79 = vdivps_avx512vl(auVar79,auVar94);
  auVar96 = vaddps_avx512vl(auVar91,auVar79);
  puVar12 = (uint *)(param_5 + lVar41);
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar20 = SUB81(uVar44 >> 7,0);
  *puVar12 = (uint)(bVar48 & 1) * auVar96._0_4_ | (uint)!(bool)(bVar48 & 1) * *puVar12;
  puVar12[1] = (uint)bVar14 * auVar96._4_4_ | (uint)!bVar14 * puVar12[1];
  puVar12[2] = (uint)bVar15 * auVar96._8_4_ | (uint)!bVar15 * puVar12[2];
  puVar12[3] = (uint)bVar16 * auVar96._12_4_ | (uint)!bVar16 * puVar12[3];
  puVar12[4] = (uint)bVar17 * auVar96._16_4_ | (uint)!bVar17 * puVar12[4];
  puVar12[5] = (uint)bVar18 * auVar96._20_4_ | (uint)!bVar18 * puVar12[5];
  puVar12[6] = (uint)bVar19 * auVar96._24_4_ | (uint)!bVar19 * puVar12[6];
  puVar12[7] = (uint)bVar20 * auVar96._28_4_ | (uint)!bVar20 * puVar12[7];
  auVar96 = vmulps_avx512vl(local_300,auVar79);
  auVar70 = vfmadd231ps_avx512vl(auVar64,auVar74,auVar96);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar78,uVar44,auVar70);
  auVar70 = vmulps_avx512vl(local_2e0,auVar79);
  auVar80 = vfmadd231ps_avx512vl(auVar65,auVar74,auVar70);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar78 | auVar92),uVar44,auVar80);
  auVar79 = vmulps_avx512vl(local_2c0,auVar79);
  auVar80 = vfmadd231ps_avx512vl(auVar73,auVar74,auVar79);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar78 | auVar71),uVar44,auVar80);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar70,uVar44,auVar74);
  auVar96 = vfnmadd213ps_avx512vl(auVar96,auVar81,auVar61);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar76,uVar44,auVar96);
  auVar96 = vfnmadd213ps_avx512vl(auVar70,auVar81,auVar62);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar76 | auVar92),uVar44,auVar96);
  auVar79 = vfnmadd213ps_avx512vl(auVar79,auVar81,auVar63);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar79,uVar44,auVar79);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar78 | auVar92),uVar44,auVar81);
  return;
}

// ApplyXPBDSpringDampingConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx @ 14090a4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,byte param_7,longlong param_8,longlong param_9,
               byte param_10,undefined1 (*param_11) [16],longlong param_12,uint param_13)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [32];
  int *piVar4;
  uint *puVar5;
  byte bVar6;
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
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  longlong lVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  uint uVar77;
  byte bVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
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
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar85 [16];
  undefined1 auVar111 [32];
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
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  undefined1 auVar136 [32];
  float fVar150;
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar153 [16];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar154 [16];
  undefined1 in_ZMM25 [64];
  undefined1 auVar155 [16];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 auVar156 [16];
  undefined1 in_ZMM31 [64];
  undefined1 local_280 [32];
  undefined1 local_260 [8];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  undefined1 local_240 [32];
  undefined4 auStack_1f8 [4];
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
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
  
  uVar70 = __real_38d1b717;
  uVar69 = __real_322bcc77;
  auVar153 = in_ZMM22._0_16_;
  auVar85 = in_ZMM20._0_16_;
  auVar156 = in_ZMM31._0_16_;
  auVar84 = in_ZMM30._0_16_;
  auVar83 = in_ZMM29._0_16_;
  auVar81 = in_ZMM19._0_16_;
  auVar82 = in_ZMM28._0_16_;
  auVar155 = in_ZMM26._0_16_;
  auVar154 = in_ZMM25._0_16_;
  auVar79 = in_ZMM23._0_16_;
  uVar72 = (ulonglong)param_10;
  uVar77 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar77 = param_13;
  }
  if ((int)(uVar77 & 0xfffffff8) < 1) {
    uVar75 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    local_1e0 = param_6;
    fStack_1dc = param_6;
    fStack_1d8 = param_6;
    fStack_1d4 = param_6;
    fStack_1d0 = param_6;
    fStack_1cc = param_6;
    fStack_1c8 = param_6;
    fStack_1c4 = param_6;
    uVar73 = 0;
    auVar123._4_4_ = __real_00000004;
    auVar123._0_4_ = __real_00000004;
    auVar123._8_4_ = __real_00000004;
    auVar123._12_4_ = __real_00000004;
    auVar124._4_4_ = __real_00000008;
    auVar124._0_4_ = __real_00000008;
    auVar124._8_4_ = __real_00000008;
    auVar124._12_4_ = __real_00000008;
    auVar111._16_4_ = __real_00000008;
    auVar111._0_16_ = auVar124;
    auVar111._20_4_ = __real_00000008;
    auVar111._24_4_ = __real_00000008;
    auVar111._28_4_ = __real_00000008;
    auVar86 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auStack_1f8[0] = __real_38d1b717;
    auStack_1f8[1] = __real_38d1b717;
    auStack_1f8[2] = __real_38d1b717;
    auStack_1f8[3] = __real_38d1b717;
    uStack_1e8 = __real_38d1b717;
    uStack_1e4 = __real_38d1b717;
    auVar87 = vbroadcastss_avx512vl(ZEXT416((uint)__real_3f800000));
    auVar81 = auVar87._0_16_;
    uVar75 = 0;
    do {
      auVar85 = (undefined1  [16])0x0;
      auVar79 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar79._8_8_ = 0;
        auVar79._0_8_ = *(ulonglong *)(param_8 + uVar75);
      }
      auVar110 = *(undefined1 (*) [32])(param_3 + uVar73 * 2);
      auVar103 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar73 * 2);
      auVar109 = vpermt2d_avx512vl(auVar110,
                                   ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                   ,auVar103);
      auVar110 = vpermt2d_avx512vl(auVar110,
                                   ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                   ,auVar103);
      if ((param_10 & 1) != 0) {
        auVar85._8_8_ = 0;
        auVar85._0_8_ = *(ulonglong *)(*param_11 + uVar75);
      }
      auVar88 = vpslld_avx512vl(auVar109,4);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar154 = auVar88._0_16_ | auVar123;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar155 = auVar88._0_16_ | auVar124;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar73));
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)param_11));
      auVar93 = vpslld_avx512vl(auVar110,4);
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_1f8));
      auVar153 = auVar93._0_16_ | auVar123;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_9));
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar75));
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar72 * 4));
      vpslld_avx2(auVar109,2);
      vpslld_avx2(auVar109,3);
      auVar109 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar72));
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
      auVar100 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar72 * 4));
      vpslld_avx2(auVar110,2);
      vpslld_avx2(auVar110,3);
      auVar101 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
      auVar110 = vpmovsxbd_avx2(auVar79);
      vpslld_avx2(auVar110,2);
      auVar103 = vgatherdps_avx512vl(*(undefined4 *)(param_9 + (longlong)param_1));
      auVar110 = vpmovsxbd_avx2(auVar85);
      vpslld_avx2(auVar110,2);
      auVar104 = vgatherdps_avx512vl(*(undefined4 *)(param_12 + (longlong)param_1));
      uVar76 = uVar73 & 0xffffffff;
      auVar105 = vsubps_avx512vl(auVar89,auVar94);
      auVar106 = vsubps_avx512vl(auVar90,auVar95);
      auVar107 = vaddps_avx512vl(auVar92,auVar97);
      auVar85 = auVar107._0_16_;
      auVar110 = vdivps_avx512vl(auVar103,auVar107);
      auVar110 = vsqrtps_avx(auVar110);
      fVar134 = (auVar104._0_4_ + auVar104._0_4_) * auVar110._0_4_;
      fVar137 = (auVar104._4_4_ + auVar104._4_4_) * auVar110._4_4_;
      fVar139 = (auVar104._8_4_ + auVar104._8_4_) * auVar110._8_4_;
      fVar141 = (auVar104._12_4_ + auVar104._12_4_) * auVar110._12_4_;
      fVar143 = (auVar104._16_4_ + auVar104._16_4_) * auVar110._16_4_;
      fVar145 = (auVar104._20_4_ + auVar104._20_4_) * auVar110._20_4_;
      fVar147 = (auVar104._24_4_ + auVar104._24_4_) * auVar110._24_4_;
      fVar149 = (auVar104._28_4_ + auVar104._28_4_) * auVar110._28_4_;
      auVar104 = vsubps_avx512vl(auVar91,auVar96);
      auVar110._4_4_ = uVar69;
      auVar110._0_4_ = uVar69;
      auVar110._8_4_ = uVar69;
      auVar110._12_4_ = uVar69;
      auVar110._16_4_ = uVar69;
      auVar110._20_4_ = uVar69;
      auVar110._24_4_ = uVar69;
      auVar110._28_4_ = uVar69;
      uVar74 = vcmpps_avx512vl(*(undefined1 (*) [32])(param_4 + uVar76),auVar110,1);
      auVar108 = vdivps_avx512vl(auVar87,*(undefined1 (*) [32])(param_4 + uVar76));
      bVar7 = (bool)((byte)uVar74 & 1);
      bVar8 = (bool)((byte)(uVar74 >> 1) & 1);
      bVar12 = (bool)((byte)(uVar74 >> 2) & 1);
      bVar23 = (bool)((byte)(uVar74 >> 3) & 1);
      bVar34 = (bool)((byte)(uVar74 >> 4) & 1);
      bVar41 = (bool)((byte)(uVar74 >> 5) & 1);
      bVar48 = (bool)((byte)(uVar74 >> 6) & 1);
      bVar55 = SUB81(uVar74 >> 7,0);
      auVar110 = vmulps_avx512vl(auVar106,auVar106);
      auVar110 = vfmadd231ps_avx512vl(auVar110,auVar105,auVar105);
      auVar136._0_4_ = auVar104._0_4_ * auVar104._0_4_ + auVar110._0_4_;
      auVar136._4_4_ = auVar104._4_4_ * auVar104._4_4_ + auVar110._4_4_;
      auVar136._8_4_ = auVar104._8_4_ * auVar104._8_4_ + auVar110._8_4_;
      auVar136._12_4_ = auVar104._12_4_ * auVar104._12_4_ + auVar110._12_4_;
      auVar136._16_4_ = auVar104._16_4_ * auVar104._16_4_ + auVar110._16_4_;
      auVar136._20_4_ = auVar104._20_4_ * auVar104._20_4_ + auVar110._20_4_;
      auVar136._24_4_ = auVar104._24_4_ * auVar104._24_4_ + auVar110._24_4_;
      auVar136._28_4_ = auVar104._28_4_ * auVar104._28_4_ + auVar110._28_4_;
      auVar103._4_4_ = uVar70;
      auVar103._0_4_ = uVar70;
      auVar103._8_4_ = uVar70;
      auVar103._12_4_ = uVar70;
      auVar103._16_4_ = uVar70;
      auVar103._20_4_ = uVar70;
      auVar103._24_4_ = uVar70;
      auVar103._28_4_ = uVar70;
      uVar74 = vcmpps_avx512vl(auVar136,auVar103,1);
      auVar110 = vsqrtps_avx(auVar136);
      auVar105 = vdivps_avx512vl(auVar105,auVar110);
      auVar106 = vdivps_avx512vl(auVar106,auVar110);
      auVar110 = vdivps_avx(auVar104,auVar110);
      auVar103 = vsubps_avx512vl(auVar89,auVar98);
      auVar103 = vsubps_avx512vl(auVar103,auVar94);
      auVar104._0_4_ = auVar103._0_4_ + auVar100._0_4_;
      auVar104._4_4_ = auVar103._4_4_ + auVar100._4_4_;
      auVar104._8_4_ = auVar103._8_4_ + auVar100._8_4_;
      auVar104._12_4_ = auVar103._12_4_ + auVar100._12_4_;
      auVar104._16_4_ = auVar103._16_4_ + auVar100._16_4_;
      auVar104._20_4_ = auVar103._20_4_ + auVar100._20_4_;
      auVar104._24_4_ = auVar103._24_4_ + auVar100._24_4_;
      auVar104._28_4_ = auVar103._28_4_ + auVar100._28_4_;
      auVar103 = vsubps_avx512vl(auVar90,auVar109);
      auVar103 = vsubps_avx512vl(auVar103,auVar95);
      auVar122._0_4_ = auVar103._0_4_ + auVar101._0_4_;
      auVar122._4_4_ = auVar103._4_4_ + auVar101._4_4_;
      auVar122._8_4_ = auVar103._8_4_ + auVar101._8_4_;
      auVar122._12_4_ = auVar103._12_4_ + auVar101._12_4_;
      auVar122._16_4_ = auVar103._16_4_ + auVar101._16_4_;
      auVar122._20_4_ = auVar103._20_4_ + auVar101._20_4_;
      auVar122._24_4_ = auVar103._24_4_ + auVar101._24_4_;
      auVar122._28_4_ = auVar103._28_4_ + auVar101._28_4_;
      auVar103 = vsubps_avx512vl(auVar91,auVar99);
      auVar103 = vsubps_avx(auVar103,auVar96);
      bVar78 = (byte)uVar74;
      auVar109._0_4_ =
           (uint)(bVar78 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar105._0_4_;
      bVar9 = (bool)((byte)(uVar74 >> 1) & 1);
      auVar109._4_4_ = (uint)bVar9 * auVar87._4_4_ | (uint)!bVar9 * auVar105._4_4_;
      bVar9 = (bool)((byte)(uVar74 >> 2) & 1);
      auVar109._8_4_ = (uint)bVar9 * auVar87._8_4_ | (uint)!bVar9 * auVar105._8_4_;
      bVar9 = (bool)((byte)(uVar74 >> 3) & 1);
      auVar109._12_4_ = (uint)bVar9 * auVar87._12_4_ | (uint)!bVar9 * auVar105._12_4_;
      bVar9 = (bool)((byte)(uVar74 >> 4) & 1);
      auVar109._16_4_ = (uint)bVar9 * auVar87._16_4_ | (uint)!bVar9 * auVar105._16_4_;
      bVar9 = (bool)((byte)(uVar74 >> 5) & 1);
      auVar109._20_4_ = (uint)bVar9 * auVar87._20_4_ | (uint)!bVar9 * auVar105._20_4_;
      bVar9 = (bool)((byte)(uVar74 >> 6) & 1);
      auVar109._24_4_ = (uint)bVar9 * auVar87._24_4_ | (uint)!bVar9 * auVar105._24_4_;
      bVar9 = SUB81(uVar74 >> 7,0);
      auVar109._28_4_ = (uint)bVar9 * auVar87._28_4_ | (uint)!bVar9 * auVar105._28_4_;
      auVar98._4_4_ = (uint)!(bool)((byte)(uVar74 >> 1) & 1) * auVar106._4_4_;
      auVar98._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar106._0_4_;
      auVar98._8_4_ = (uint)!(bool)((byte)(uVar74 >> 2) & 1) * auVar106._8_4_;
      auVar98._12_4_ = (uint)!(bool)((byte)(uVar74 >> 3) & 1) * auVar106._12_4_;
      auVar98._16_4_ = (uint)!(bool)((byte)(uVar74 >> 4) & 1) * auVar106._16_4_;
      auVar98._20_4_ = (uint)!(bool)((byte)(uVar74 >> 5) & 1) * auVar106._20_4_;
      auVar98._24_4_ = (uint)!(bool)((byte)(uVar74 >> 6) & 1) * auVar106._24_4_;
      bVar9 = SUB81(uVar74 >> 7,0);
      auVar98._28_4_ =
           (uint)bVar9 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar9 * auVar106._28_4_
      ;
      auVar99 = vmulps_avx512vl(auVar98,auVar122);
      auVar99 = vfmadd231ps_avx512vl(auVar99,auVar109,auVar104);
      fVar125 = (float)((uint)!(bool)(bVar78 & 1) * auVar110._0_4_);
      fVar126 = (float)((uint)!(bool)((byte)(uVar74 >> 1) & 1) * auVar110._4_4_);
      auVar100._4_4_ = fVar126;
      auVar100._0_4_ = fVar125;
      fVar132 = (float)((uint)!(bool)((byte)(uVar74 >> 2) & 1) * auVar110._8_4_);
      auVar100._8_4_ = fVar132;
      fVar127 = (float)((uint)!(bool)((byte)(uVar74 >> 3) & 1) * auVar110._12_4_);
      auVar100._12_4_ = fVar127;
      fVar128 = (float)((uint)!(bool)((byte)(uVar74 >> 4) & 1) * auVar110._16_4_);
      auVar100._16_4_ = fVar128;
      fVar129 = (float)((uint)!(bool)((byte)(uVar74 >> 5) & 1) * auVar110._20_4_);
      auVar100._20_4_ = fVar129;
      fVar130 = (float)((uint)!(bool)((byte)(uVar74 >> 6) & 1) * auVar110._24_4_);
      auVar100._24_4_ = fVar130;
      fVar131 = (float)((uint)!SUB81(uVar74 >> 7,0) * auVar110._28_4_);
      auVar100._28_4_ = fVar131;
      pfVar1 = (float *)(param_5 + uVar76);
      fVar62 = pfVar1[1];
      fVar63 = pfVar1[2];
      fVar64 = pfVar1[3];
      fVar65 = pfVar1[4];
      fVar66 = pfVar1[5];
      fVar67 = pfVar1[6];
      fVar68 = pfVar1[7];
      auVar101._0_4_ =
           (float)((uint)bVar7 * (int)fVar134 | (uint)!bVar7 * (int)(fVar134 * auVar108._0_4_)) *
           param_6;
      auVar101._4_4_ =
           (float)((uint)bVar8 * (int)fVar137 | (uint)!bVar8 * (int)(fVar137 * auVar108._4_4_)) *
           param_6;
      auVar101._8_4_ =
           (float)((uint)bVar12 * (int)fVar139 | (uint)!bVar12 * (int)(fVar139 * auVar108._8_4_)) *
           param_6;
      auVar101._12_4_ =
           (float)((uint)bVar23 * (int)fVar141 | (uint)!bVar23 * (int)(fVar141 * auVar108._12_4_)) *
           param_6;
      auVar101._16_4_ =
           (float)((uint)bVar34 * (int)fVar143 | (uint)!bVar34 * (int)(fVar143 * auVar108._16_4_)) *
           param_6;
      auVar101._20_4_ =
           (float)((uint)bVar41 * (int)fVar145 | (uint)!bVar41 * (int)(fVar145 * auVar108._20_4_)) *
           param_6;
      auVar101._24_4_ =
           (float)((uint)bVar48 * (int)fVar147 | (uint)!bVar48 * (int)(fVar147 * auVar108._24_4_)) *
           param_6;
      auVar101._28_4_ =
           (float)((uint)bVar55 * (int)fVar149 | (uint)!bVar55 * (int)(fVar149 * auVar108._28_4_)) *
           param_6;
      auVar105._0_4_ =
           -(auVar101._0_4_ * (fVar125 * (auVar103._0_4_ + auVar102._0_4_) + auVar99._0_4_)) -
           *pfVar1;
      auVar105._4_4_ =
           -(auVar101._4_4_ * (fVar126 * (auVar103._4_4_ + auVar102._4_4_) + auVar99._4_4_)) -
           fVar62;
      auVar105._8_4_ =
           -(auVar101._8_4_ * (fVar132 * (auVar103._8_4_ + auVar102._8_4_) + auVar99._8_4_)) -
           fVar63;
      auVar105._12_4_ =
           -(auVar101._12_4_ * (fVar127 * (auVar103._12_4_ + auVar102._12_4_) + auVar99._12_4_)) -
           fVar64;
      auVar105._16_4_ =
           -(auVar101._16_4_ * (fVar128 * (auVar103._16_4_ + auVar102._16_4_) + auVar99._16_4_)) -
           fVar65;
      auVar105._20_4_ =
           -(auVar101._20_4_ * (fVar129 * (auVar103._20_4_ + auVar102._20_4_) + auVar99._20_4_)) -
           fVar66;
      auVar105._24_4_ =
           -(auVar101._24_4_ * (fVar130 * (auVar103._24_4_ + auVar102._24_4_) + auVar99._24_4_)) -
           fVar67;
      auVar105._28_4_ =
           -(auVar101._28_4_ * (fVar131 * (auVar103._28_4_ + auVar102._28_4_) + auVar99._28_4_)) -
           fVar68;
      auVar110 = vfmadd213ps_avx512vl(auVar101,auVar107,auVar87);
      auVar110 = vdivps_avx(auVar105,auVar110);
      pfVar2 = (float *)(param_5 + uVar76);
      *pfVar2 = *pfVar1 + auVar110._0_4_;
      pfVar2[1] = fVar62 + auVar110._4_4_;
      pfVar2[2] = fVar63 + auVar110._8_4_;
      pfVar2[3] = fVar64 + auVar110._12_4_;
      pfVar2[4] = fVar65 + auVar110._16_4_;
      pfVar2[5] = fVar66 + auVar110._20_4_;
      pfVar2[6] = fVar67 + auVar110._24_4_;
      pfVar2[7] = fVar68 + auVar110._28_4_;
      auVar103 = vmulps_avx512vl(auVar109,auVar110);
      auVar109 = vfmadd231ps_avx512vl(auVar89,auVar92,auVar103);
      in_ZMM29 = ZEXT3264(auVar109);
      auVar83 = auVar109._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar93 | auVar86),0xffff,auVar109);
      auVar109 = vmulps_avx512vl(auVar98,auVar110);
      auVar89 = vfmadd231ps_avx512vl(auVar90,auVar92,auVar109);
      in_ZMM30 = ZEXT3264(auVar89);
      auVar84 = auVar89._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar92,0xffff,auVar89);
      auVar89._0_4_ = fVar125 * auVar110._0_4_;
      auVar89._4_4_ = fVar126 * auVar110._4_4_;
      auVar89._8_4_ = fVar132 * auVar110._8_4_;
      auVar89._12_4_ = fVar127 * auVar110._12_4_;
      auVar89._16_4_ = fVar128 * auVar110._16_4_;
      auVar89._20_4_ = fVar129 * auVar110._20_4_;
      auVar89._24_4_ = fVar130 * auVar110._24_4_;
      auVar89._28_4_ = fVar131 * auVar110._28_4_;
      auVar110 = vfmadd231ps_avx512vl(auVar91,auVar92,auVar89);
      in_ZMM31 = ZEXT3264(auVar110);
      auVar156 = auVar110._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar97,0xffff,auVar110);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar88 | auVar86),0xffff,auVar92);
      auVar110 = vfnmadd231ps_avx512vl(auVar94,auVar97,auVar103);
      in_ZMM23 = ZEXT3264(auVar110);
      auVar79 = auVar110._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar111,0xffff,auVar110);
      auVar110 = vfnmadd231ps_avx512vl(auVar95,auVar97,auVar109);
      in_ZMM28 = ZEXT3264(auVar110);
      auVar82 = auVar110._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar96,0xffff,auVar110);
      auVar88._0_4_ = -(auVar97._0_4_ * auVar89._0_4_) + auVar96._0_4_;
      auVar88._4_4_ = -(auVar97._4_4_ * auVar89._4_4_) + auVar96._4_4_;
      auVar88._8_4_ = -(auVar97._8_4_ * auVar89._8_4_) + auVar96._8_4_;
      auVar88._12_4_ = -(auVar97._12_4_ * auVar89._12_4_) + auVar96._12_4_;
      auVar88._16_4_ = -(auVar97._16_4_ * auVar89._16_4_) + auVar96._16_4_;
      auVar88._20_4_ = -(auVar97._20_4_ * auVar89._20_4_) + auVar96._20_4_;
      auVar88._24_4_ = -(auVar97._24_4_ * auVar89._24_4_) + auVar96._24_4_;
      auVar88._28_4_ = -(auVar97._28_4_ * auVar89._28_4_) + auVar96._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar100,0xffff,auVar88);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar93 | auVar86),0xffff,auVar97);
      uVar75 = uVar75 + 8;
      uVar73 = uVar73 + 0x20;
    } while ((int)uVar75 < (int)(uVar77 & 0xfffffff8));
    if ((int)param_13 <= (int)uVar75) {
      return;
    }
  }
  auVar86 = vpbroadcastd_avx512vl();
  auVar86 = vpor_avx2(auVar86,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar87 = vpbroadcastd_avx512vl();
  uVar73 = vpcmpgtd_avx512vl(auVar87,auVar86);
  uVar74 = uVar75 & 0xffffffff;
  pauVar3 = (undefined1 (*) [32])(param_3 + uVar74 * 8);
  bVar78 = (byte)uVar73;
  if (bVar78 == 0xff) {
    auVar86 = vmovdqa64_avx512vl(
                                ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                );
    auVar86 = vpermi2d_avx512vl(auVar86,*pauVar3,pauVar3[1]);
    auVar87 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                );
    auVar87 = vpermi2d_avx512vl(auVar87,*pauVar3,pauVar3[1]);
    auVar153 = vxorps_avx512vl(auVar153,auVar153);
  }
  else {
    auVar79 = vxorps_avx512vl(auVar79,auVar79);
    auVar87 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar3 + param_5));
    auVar86._0_4_ = (uint)(bVar78 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar79._0_4_;
    bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
    auVar86._4_4_ = (uint)bVar7 * auVar87._4_4_ | (uint)!bVar7 * auVar79._4_4_;
    bVar7 = (bool)((byte)(uVar73 >> 2) & 1);
    auVar86._8_4_ = (uint)bVar7 * auVar87._8_4_ | (uint)!bVar7 * auVar79._8_4_;
    bVar7 = (bool)((byte)(uVar73 >> 3) & 1);
    auVar86._12_4_ = (uint)bVar7 * auVar87._12_4_ | (uint)!bVar7 * auVar79._12_4_;
    auVar86._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar87._16_4_;
    auVar86._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar87._20_4_;
    auVar86._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar87._24_4_;
    auVar86._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar87._28_4_;
    auVar111 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar3 + param_5));
    auVar87._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar111._4_4_;
    auVar87._0_4_ = (uint)(bVar78 & 1) * auVar111._0_4_;
    auVar87._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar111._8_4_;
    auVar87._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar111._12_4_;
    auVar87._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar111._16_4_;
    auVar87._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar111._20_4_;
    auVar87._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar111._24_4_;
    auVar87._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar111._28_4_;
    auVar153 = vxorps_avx512vl(auVar153,auVar153);
  }
  auVar80 = (undefined1  [16])0x0;
  if ((param_7 & 1) != 0) {
    if ((~bVar78 & 0x81) == 0) {
      auVar80._8_8_ = 0;
      auVar80._0_8_ = *(ulonglong *)*(undefined1 (*) [16])(param_8 + uVar74);
    }
    else {
      auVar79 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_8 + uVar74));
      auVar80[1] = ((byte)(uVar73 >> 1) & 1) * auVar79[1];
      auVar80[0] = (bVar78 & 1) * auVar79[0];
      auVar80[2] = ((byte)(uVar73 >> 2) & 1) * auVar79[2];
      auVar80[3] = ((byte)(uVar73 >> 3) & 1) * auVar79[3];
      auVar80[4] = ((byte)(uVar73 >> 4) & 1) * auVar79[4];
      auVar80[5] = ((byte)(uVar73 >> 5) & 1) * auVar79[5];
      auVar80[6] = ((byte)(uVar73 >> 6) & 1) * auVar79[6];
      auVar80[7] = (char)(uVar73 >> 7) * auVar79[7];
      auVar80._8_8_ = 0;
    }
  }
  if ((param_10 & 1) != 0) {
    param_11 = (undefined1 (*) [16])(*param_11 + uVar74);
    if ((~bVar78 & 0x81) == 0) {
      auVar153._8_8_ = 0;
      auVar153._0_8_ = *(ulonglong *)*param_11;
    }
    else {
      auVar79 = vmovdqu8_avx512vl(*param_11);
      auVar153[1] = ((byte)(uVar73 >> 1) & 1) * auVar79[1];
      auVar153[0] = (bVar78 & 1) * auVar79[0];
      auVar153[2] = ((byte)(uVar73 >> 2) & 1) * auVar79[2];
      auVar153[3] = ((byte)(uVar73 >> 3) & 1) * auVar79[3];
      auVar153[4] = ((byte)(uVar73 >> 4) & 1) * auVar79[4];
      auVar153[5] = ((byte)(uVar73 >> 5) & 1) * auVar79[5];
      auVar153[6] = ((byte)(uVar73 >> 6) & 1) * auVar79[6];
      auVar153[7] = (char)(uVar73 >> 7) * auVar79[7];
      auVar153._8_8_ = 0;
    }
  }
  auVar110 = vpslld_avx512vl(auVar86,4);
  auVar118._4_4_ = __real_00000004;
  auVar118._0_4_ = __real_00000004;
  auVar118._8_4_ = __real_00000004;
  auVar118._12_4_ = __real_00000004;
  auVar118._16_4_ = __real_00000004;
  auVar118._20_4_ = __real_00000004;
  auVar118._24_4_ = __real_00000004;
  auVar118._28_4_ = __real_00000004;
  auVar79 = vxorps_avx512vl(auVar154,auVar154);
  auVar111 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar24 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar154 = vxorps_avx512vl(auVar155,auVar155);
  auVar103 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  bVar8 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar14 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar25 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar109 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
  auVar155 = vxorps_avx512vl(auVar82,auVar82);
  auVar88 = vgatherdps_avx512vl(*param_1);
  bVar9 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar26 = (bool)((byte)(uVar73 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  auVar99._0_4_ = (uint)(bVar78 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar81._0_4_;
  bVar12 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar99._4_4_ = (uint)bVar12 * auVar89._4_4_ | (uint)!bVar12 * auVar81._4_4_;
  bVar12 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar99._8_4_ = (uint)bVar12 * auVar89._8_4_ | (uint)!bVar12 * auVar81._8_4_;
  bVar12 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar99._12_4_ = (uint)bVar12 * auVar89._12_4_ | (uint)!bVar12 * auVar81._12_4_;
  auVar99._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar89._16_4_;
  auVar99._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar89._20_4_;
  auVar99._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar89._24_4_;
  auVar99._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar89._28_4_;
  auVar89 = vpslld_avx512vl(auVar87,4);
  auVar81 = vxorps_avx512vl(auVar83,auVar83);
  auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar72));
  bVar12 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar27 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar82 = vxorps_avx512vl(auVar84,auVar84);
  auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_1f8));
  auVar83._0_4_ = (uint)(bVar78 & 1) * auVar91._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar82._0_4_;
  bVar23 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar83._4_4_ = (uint)bVar23 * auVar91._4_4_ | (uint)!bVar23 * auVar82._4_4_;
  bVar23 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar83._8_4_ = (uint)bVar23 * auVar91._8_4_ | (uint)!bVar23 * auVar82._8_4_;
  bVar23 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar83._12_4_ = (uint)bVar23 * auVar91._12_4_ | (uint)!bVar23 * auVar82._12_4_;
  auVar82 = vxorps_avx512vl(auVar156,auVar156);
  auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
  auVar84._0_4_ = (uint)(bVar78 & 1) * auVar98._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar82._0_4_;
  bVar23 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar84._4_4_ = (uint)bVar23 * auVar98._4_4_ | (uint)!bVar23 * auVar82._4_4_;
  bVar23 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar84._8_4_ = (uint)bVar23 * auVar98._8_4_ | (uint)!bVar23 * auVar82._8_4_;
  bVar23 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar84._12_4_ = (uint)bVar23 * auVar98._12_4_ | (uint)!bVar23 * auVar82._12_4_;
  auVar85 = vxorps_avx512vl(auVar85,auVar85);
  auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  auVar102._0_4_ = (uint)(bVar78 & 1) * auVar92._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_;
  bVar23 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar102._4_4_ = (uint)bVar23 * auVar92._4_4_ | (uint)!bVar23 * auVar85._4_4_;
  bVar23 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar102._8_4_ = (uint)bVar23 * auVar92._8_4_ | (uint)!bVar23 * auVar85._8_4_;
  bVar23 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar102._12_4_ = (uint)bVar23 * auVar92._12_4_ | (uint)!bVar23 * auVar85._12_4_;
  auVar102._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar92._16_4_;
  auVar102._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar92._20_4_;
  auVar102._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar92._24_4_;
  auVar102._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar92._28_4_;
  bVar23 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar17 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar28 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar35 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar42 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar49 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar56 = SUB81(uVar73 >> 7,0);
  bVar34 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar18 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar29 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar36 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar43 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar50 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar57 = SUB81(uVar73 >> 7,0);
  bVar41 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar19 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar30 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar37 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar44 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar51 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar58 = SUB81(uVar73 >> 7,0);
  bVar48 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar31 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar38 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar45 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar52 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar59 = SUB81(uVar73 >> 7,0);
  bVar55 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar32 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar39 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar46 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar53 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar60 = SUB81(uVar73 >> 7,0);
  bVar10 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar40 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar47 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar54 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar61 = SUB81(uVar73 >> 7,0);
  auVar92 = vpaddd_avx512vl(auVar86,auVar86);
  vpaddd_avx512vl(auVar86,auVar92);
  auVar92 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar74 * 4));
  auVar106._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar92._4_4_;
  auVar106._0_4_ = (uint)(bVar78 & 1) * auVar92._0_4_;
  auVar106._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar92._8_4_;
  auVar106._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar92._12_4_;
  auVar106._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar92._16_4_;
  auVar106._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar92._20_4_;
  auVar106._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar92._24_4_;
  auVar106._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar92._28_4_;
  auVar92 = vpslld_avx512vl(auVar86,2);
  auVar86 = vpslld_avx512vl(auVar86,3);
  auVar86 = vpaddd_avx512vl(auVar86,auVar92);
  auVar92 = vpaddd_avx512vl(auVar86,auVar118);
  auVar93 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar3 + param_2));
  auVar107._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar93._4_4_;
  auVar107._0_4_ = (uint)(bVar78 & 1) * auVar93._0_4_;
  auVar107._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar93._8_4_;
  auVar107._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar93._12_4_;
  auVar107._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar93._16_4_;
  auVar107._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar93._20_4_;
  auVar107._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar93._24_4_;
  auVar107._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar93._28_4_;
  vpaddd_avx512vl(auVar86,auVar109);
  auVar85 = vxorps_avx512vl(auVar92._0_16_,auVar92._0_16_);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(*param_11 + param_2));
  auVar108._0_4_ = (uint)(bVar78 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_;
  bVar11 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar108._4_4_ = (uint)bVar11 * auVar86._4_4_ | (uint)!bVar11 * auVar85._4_4_;
  bVar11 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar108._8_4_ = (uint)bVar11 * auVar86._8_4_ | (uint)!bVar11 * auVar85._8_4_;
  bVar11 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar108._12_4_ = (uint)bVar11 * auVar86._12_4_ | (uint)!bVar11 * auVar85._12_4_;
  auVar108._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_;
  auVar108._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_;
  auVar108._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_;
  auVar108._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar86._28_4_;
  auVar86 = vpaddd_avx512vl(auVar87,auVar87);
  vpaddd_avx512vl(auVar87,auVar86);
  auVar85 = vxorps_avx512vl(auVar83,auVar83);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_11 * 4));
  auVar112._0_4_ = (uint)(bVar78 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_;
  bVar11 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar112._4_4_ = (uint)bVar11 * auVar86._4_4_ | (uint)!bVar11 * auVar85._4_4_;
  bVar11 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar112._8_4_ = (uint)bVar11 * auVar86._8_4_ | (uint)!bVar11 * auVar85._8_4_;
  bVar11 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar112._12_4_ = (uint)bVar11 * auVar86._12_4_ | (uint)!bVar11 * auVar85._12_4_;
  auVar112._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_;
  auVar112._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_;
  auVar112._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_;
  auVar112._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar86._28_4_;
  auVar86 = vpslld_avx512vl(auVar87,2);
  auVar87 = vpslld_avx512vl(auVar87,3);
  auVar86 = vpaddd_avx512vl(auVar87,auVar86);
  vpaddd_avx512vl(auVar86,auVar118);
  auVar87 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar113._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar87._4_4_;
  auVar113._0_4_ = (uint)(bVar78 & 1) * auVar87._0_4_;
  auVar113._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar87._8_4_;
  auVar113._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar87._12_4_;
  auVar113._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar87._16_4_;
  auVar113._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar87._20_4_;
  auVar113._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar87._24_4_;
  auVar113._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar87._28_4_;
  vpaddd_avx512vl(auVar86,auVar109);
  auVar85 = vxorps_avx512vl(auVar84,auVar84);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar114._0_4_ = (uint)(bVar78 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_;
  bVar11 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar114._4_4_ = (uint)bVar11 * auVar86._4_4_ | (uint)!bVar11 * auVar85._4_4_;
  bVar11 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar114._8_4_ = (uint)bVar11 * auVar86._8_4_ | (uint)!bVar11 * auVar85._8_4_;
  bVar11 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar114._12_4_ = (uint)bVar11 * auVar86._12_4_ | (uint)!bVar11 * auVar85._12_4_;
  auVar114._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_;
  auVar114._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_;
  auVar114._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_;
  auVar114._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar86._28_4_;
  auVar86 = vpmovsxbd_avx512vl(auVar80);
  vpslld_avx2(auVar86,2);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(param_9 + param_5));
  auVar115._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar86._4_4_;
  auVar115._0_4_ = (uint)(bVar78 & 1) * auVar86._0_4_;
  auVar115._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar86._8_4_;
  auVar115._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar86._12_4_;
  auVar115._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_;
  auVar115._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_;
  auVar115._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_;
  auVar115._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar86._28_4_;
  auVar86 = vpmovsxbd_avx512vl(auVar153);
  vpslld_avx2(auVar86,2);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(param_12 + param_5));
  fVar125 = (float)((uint)(bVar78 & 1) * auVar86._0_4_);
  fVar126 = (float)((uint)((byte)(uVar73 >> 1) & 1) * auVar86._4_4_);
  fVar127 = (float)((uint)((byte)(uVar73 >> 2) & 1) * auVar86._8_4_);
  fVar128 = (float)((uint)((byte)(uVar73 >> 3) & 1) * auVar86._12_4_);
  fVar129 = (float)((uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_);
  fVar130 = (float)((uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_);
  fVar131 = (float)((uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_);
  fVar132 = (float)((uint)(byte)(uVar73 >> 7) * auVar86._28_4_);
  auVar95._4_4_ =
       (uint)bVar23 * ((uint)bVar7 * auVar111._4_4_ | (uint)!bVar7 * auVar79._4_4_) |
       (uint)!bVar23 * iStack_15c;
  auVar95._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar111._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar79._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_160;
  auVar95._8_4_ =
       (uint)bVar17 * ((uint)bVar13 * auVar111._8_4_ | (uint)!bVar13 * auVar79._8_4_) |
       (uint)!bVar17 * iStack_158;
  auVar95._12_4_ =
       (uint)bVar28 * ((uint)bVar24 * auVar111._12_4_ | (uint)!bVar24 * auVar79._12_4_) |
       (uint)!bVar28 * iStack_154;
  auVar95._16_4_ =
       (uint)bVar35 * (uint)((byte)(uVar73 >> 4) & 1) * auVar111._16_4_ | (uint)!bVar35 * iStack_150
  ;
  auVar95._20_4_ =
       (uint)bVar42 * (uint)((byte)(uVar73 >> 5) & 1) * auVar111._20_4_ | (uint)!bVar42 * iStack_14c
  ;
  auVar95._24_4_ =
       (uint)bVar49 * (uint)((byte)(uVar73 >> 6) & 1) * auVar111._24_4_ | (uint)!bVar49 * iStack_148
  ;
  auVar95._28_4_ =
       (uint)bVar56 * (uint)(byte)(uVar73 >> 7) * auVar111._28_4_ | (uint)!bVar56 * iStack_144;
  auVar96._4_4_ =
       (uint)bVar34 * ((uint)bVar8 * auVar103._4_4_ | (uint)!bVar8 * auVar154._4_4_) |
       (uint)!bVar34 * iStack_13c;
  auVar96._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar103._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar154._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_140;
  auVar96._8_4_ =
       (uint)bVar18 * ((uint)bVar14 * auVar103._8_4_ | (uint)!bVar14 * auVar154._8_4_) |
       (uint)!bVar18 * iStack_138;
  auVar96._12_4_ =
       (uint)bVar29 * ((uint)bVar25 * auVar103._12_4_ | (uint)!bVar25 * auVar154._12_4_) |
       (uint)!bVar29 * iStack_134;
  auVar96._16_4_ =
       (uint)bVar36 * (uint)((byte)(uVar73 >> 4) & 1) * auVar103._16_4_ | (uint)!bVar36 * iStack_130
  ;
  auVar96._20_4_ =
       (uint)bVar43 * (uint)((byte)(uVar73 >> 5) & 1) * auVar103._20_4_ | (uint)!bVar43 * iStack_12c
  ;
  auVar96._24_4_ =
       (uint)bVar50 * (uint)((byte)(uVar73 >> 6) & 1) * auVar103._24_4_ | (uint)!bVar50 * iStack_128
  ;
  auVar96._28_4_ =
       (uint)bVar57 * (uint)(byte)(uVar73 >> 7) * auVar103._28_4_ | (uint)!bVar57 * iStack_124;
  auVar97._4_4_ =
       (uint)bVar41 * ((uint)bVar9 * auVar88._4_4_ | (uint)!bVar9 * auVar155._4_4_) |
       (uint)!bVar41 * iStack_11c;
  auVar97._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar88._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar155._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_120;
  auVar97._8_4_ =
       (uint)bVar19 * ((uint)bVar15 * auVar88._8_4_ | (uint)!bVar15 * auVar155._8_4_) |
       (uint)!bVar19 * iStack_118;
  auVar97._12_4_ =
       (uint)bVar30 * ((uint)bVar26 * auVar88._12_4_ | (uint)!bVar26 * auVar155._12_4_) |
       (uint)!bVar30 * iStack_114;
  auVar97._16_4_ =
       (uint)bVar37 * (uint)((byte)(uVar73 >> 4) & 1) * auVar88._16_4_ | (uint)!bVar37 * iStack_110;
  auVar97._20_4_ =
       (uint)bVar44 * (uint)((byte)(uVar73 >> 5) & 1) * auVar88._20_4_ | (uint)!bVar44 * iStack_10c;
  auVar97._24_4_ =
       (uint)bVar51 * (uint)((byte)(uVar73 >> 6) & 1) * auVar88._24_4_ | (uint)!bVar51 * iStack_108;
  auVar97._28_4_ =
       (uint)bVar58 * (uint)(byte)(uVar73 >> 7) * auVar88._28_4_ | (uint)!bVar58 * iStack_104;
  auVar92._4_4_ =
       (uint)bVar48 * ((uint)bVar12 * auVar90._4_4_ | (uint)!bVar12 * auVar81._4_4_) |
       (uint)!bVar48 * iStack_1bc;
  auVar92._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar90._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar81._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_1c0;
  auVar92._8_4_ =
       (uint)bVar20 * ((uint)bVar16 * auVar90._8_4_ | (uint)!bVar16 * auVar81._8_4_) |
       (uint)!bVar20 * iStack_1b8;
  auVar92._12_4_ =
       (uint)bVar31 * ((uint)bVar27 * auVar90._12_4_ | (uint)!bVar27 * auVar81._12_4_) |
       (uint)!bVar31 * iStack_1b4;
  auVar92._16_4_ =
       (uint)bVar38 * (uint)((byte)(uVar73 >> 4) & 1) * auVar90._16_4_ | (uint)!bVar38 * iStack_1b0;
  auVar92._20_4_ =
       (uint)bVar45 * (uint)((byte)(uVar73 >> 5) & 1) * auVar90._20_4_ | (uint)!bVar45 * iStack_1ac;
  auVar92._24_4_ =
       (uint)bVar52 * (uint)((byte)(uVar73 >> 6) & 1) * auVar90._24_4_ | (uint)!bVar52 * iStack_1a8;
  auVar92._28_4_ =
       (uint)bVar59 * (uint)(byte)(uVar73 >> 7) * auVar90._28_4_ | (uint)!bVar59 * iStack_1a4;
  auVar93._4_4_ = bVar55 * auVar83._4_4_ | (uint)!bVar55 * iStack_19c;
  auVar93._0_4_ = (bVar78 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar78 & 1) * local_1a0;
  auVar93._8_4_ = bVar21 * auVar83._8_4_ | (uint)!bVar21 * iStack_198;
  auVar93._12_4_ = bVar32 * auVar83._12_4_ | (uint)!bVar32 * iStack_194;
  auVar93._16_4_ =
       (uint)bVar39 * (uint)((byte)(uVar73 >> 4) & 1) * auVar91._16_4_ | (uint)!bVar39 * iStack_190;
  auVar93._20_4_ =
       (uint)bVar46 * (uint)((byte)(uVar73 >> 5) & 1) * auVar91._20_4_ | (uint)!bVar46 * iStack_18c;
  auVar93._24_4_ =
       (uint)bVar53 * (uint)((byte)(uVar73 >> 6) & 1) * auVar91._24_4_ | (uint)!bVar53 * iStack_188;
  auVar93._28_4_ =
       (uint)bVar60 * (uint)(byte)(uVar73 >> 7) * auVar91._28_4_ | (uint)!bVar60 * iStack_184;
  auVar94._4_4_ = bVar10 * auVar84._4_4_ | (uint)!bVar10 * iStack_17c;
  auVar94._0_4_ = (bVar78 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar78 & 1) * local_180;
  auVar94._8_4_ = bVar22 * auVar84._8_4_ | (uint)!bVar22 * iStack_178;
  auVar94._12_4_ = bVar33 * auVar84._12_4_ | (uint)!bVar33 * iStack_174;
  auVar94._16_4_ =
       (uint)bVar40 * (uint)((byte)(uVar73 >> 4) & 1) * auVar98._16_4_ | (uint)!bVar40 * iStack_170;
  auVar94._20_4_ =
       (uint)bVar47 * (uint)((byte)(uVar73 >> 5) & 1) * auVar98._20_4_ | (uint)!bVar47 * iStack_16c;
  auVar94._24_4_ =
       (uint)bVar54 * (uint)((byte)(uVar73 >> 6) & 1) * auVar98._24_4_ | (uint)!bVar54 * iStack_168;
  auVar94._28_4_ =
       (uint)bVar61 * (uint)(byte)(uVar73 >> 7) * auVar98._28_4_ | (uint)!bVar61 * iStack_164;
  auVar86 = vsubps_avx512vl(auVar95,auVar92);
  auVar87 = vsubps_avx512vl(auVar96,auVar93);
  auVar103 = vsubps_avx512vl(auVar97,auVar94);
  fVar62 = auVar87._0_4_;
  fVar63 = auVar87._4_4_;
  fVar64 = auVar87._8_4_;
  fVar65 = auVar87._12_4_;
  fVar66 = auVar87._16_4_;
  fVar67 = auVar87._20_4_;
  fVar68 = auVar87._24_4_;
  fVar134 = auVar87._28_4_;
  fVar137 = auVar86._0_4_;
  fVar139 = auVar86._4_4_;
  fVar141 = auVar86._8_4_;
  fVar143 = auVar86._12_4_;
  fVar145 = auVar86._16_4_;
  fVar147 = auVar86._20_4_;
  fVar149 = auVar86._24_4_;
  fVar133 = auVar86._28_4_;
  fVar135 = auVar103._0_4_;
  auVar151._0_4_ = fVar135 * fVar135 + fVar137 * fVar137 + fVar62 * fVar62;
  fVar138 = auVar103._4_4_;
  auVar151._4_4_ = fVar138 * fVar138 + fVar139 * fVar139 + fVar63 * fVar63;
  fVar140 = auVar103._8_4_;
  auVar151._8_4_ = fVar140 * fVar140 + fVar141 * fVar141 + fVar64 * fVar64;
  fVar142 = auVar103._12_4_;
  auVar151._12_4_ = fVar142 * fVar142 + fVar143 * fVar143 + fVar65 * fVar65;
  fVar144 = auVar103._16_4_;
  auVar151._16_4_ = fVar144 * fVar144 + fVar145 * fVar145 + fVar66 * fVar66;
  fVar146 = auVar103._20_4_;
  auVar151._20_4_ = fVar146 * fVar146 + fVar147 * fVar147 + fVar67 * fVar67;
  fVar148 = auVar103._24_4_;
  auVar151._24_4_ = fVar148 * fVar148 + fVar149 * fVar149 + fVar68 * fVar68;
  fVar150 = auVar103._28_4_;
  auVar151._28_4_ = fVar150 * fVar150 + fVar133 * fVar133 + fVar134 * fVar134;
  auVar90._4_4_ = __real_38d1b717;
  auVar90._0_4_ = __real_38d1b717;
  auVar90._8_4_ = __real_38d1b717;
  auVar90._12_4_ = __real_38d1b717;
  auVar90._16_4_ = __real_38d1b717;
  auVar90._20_4_ = __real_38d1b717;
  auVar90._24_4_ = __real_38d1b717;
  auVar90._28_4_ = __real_38d1b717;
  uVar72 = vcmpps_avx512vl(auVar151,auVar90,1);
  auVar111 = vsqrtps_avx(auVar151);
  auVar86 = vdivps_avx(auVar86,auVar111);
  auVar87 = vdivps_avx(auVar87,auVar111);
  auVar111 = vdivps_avx(auVar103,auVar111);
  auVar152._4_4_ = __real_3f800000;
  auVar152._0_4_ = __real_3f800000;
  auVar152._8_4_ = __real_3f800000;
  auVar152._12_4_ = __real_3f800000;
  auVar152._16_4_ = __real_3f800000;
  auVar152._20_4_ = __real_3f800000;
  auVar152._24_4_ = __real_3f800000;
  auVar152._28_4_ = __real_3f800000;
  bVar6 = (byte)uVar72;
  bVar14 = SUB81(uVar72 >> 7,0);
  bVar7 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar23 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar41 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar55 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar15 = SUB81(uVar72 >> 7,0);
  bVar8 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar48 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar16 = SUB81(uVar73 >> 7,0);
  local_280._4_4_ =
       (uint)bVar8 * ((uint)bVar7 * (int)__real_3f800000 | (uint)!bVar7 * auVar86._4_4_) |
       (uint)!bVar8 * (int)fVar139;
  local_280._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar6 & 1) * (int)__real_3f800000 | (uint)!(bool)(bVar6 & 1) * auVar86._0_4_) |
       (uint)!(bool)(bVar78 & 1) * (int)fVar137;
  local_280._8_4_ =
       (uint)bVar12 * ((uint)bVar9 * (int)__real_3f800000 | (uint)!bVar9 * auVar86._8_4_) |
       (uint)!bVar12 * (int)fVar141;
  local_280._12_4_ =
       (uint)bVar34 * ((uint)bVar23 * (int)__real_3f800000 | (uint)!bVar23 * auVar86._12_4_) |
       (uint)!bVar34 * (int)fVar143;
  local_280._16_4_ =
       (uint)bVar48 * ((uint)bVar41 * (int)__real_3f800000 | (uint)!bVar41 * auVar86._16_4_) |
       (uint)!bVar48 * (int)fVar145;
  local_280._20_4_ =
       (uint)bVar10 * ((uint)bVar55 * (int)__real_3f800000 | (uint)!bVar55 * auVar86._20_4_) |
       (uint)!bVar10 * (int)fVar147;
  local_280._24_4_ =
       (uint)bVar13 * ((uint)bVar11 * (int)__real_3f800000 | (uint)!bVar11 * auVar86._24_4_) |
       (uint)!bVar13 * (int)fVar149;
  local_280._28_4_ =
       (uint)bVar16 * ((uint)bVar15 * (int)__real_3f800000 | (uint)!bVar15 * auVar86._28_4_) |
       (uint)!bVar16 * (int)fVar133;
  lVar71 = (longlong)((int)uVar75 << 2);
  local_260._0_4_ =
       (uint)(bVar78 & 1) * (uint)!(bool)(bVar6 & 1) * auVar87._0_4_ |
       (uint)!(bool)(bVar78 & 1) * (int)fVar62;
  bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
  local_260._4_4_ =
       (uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 1) & 1) * auVar87._4_4_ |
       (uint)!bVar7 * (int)fVar63;
  bVar7 = (bool)((byte)(uVar73 >> 2) & 1);
  fStack_258 = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 2) & 1) * auVar87._8_4_ |
                      (uint)!bVar7 * (int)fVar64);
  bVar7 = (bool)((byte)(uVar73 >> 3) & 1);
  fStack_254 = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 3) & 1) * auVar87._12_4_ |
                      (uint)!bVar7 * (int)fVar65);
  bVar7 = (bool)((byte)(uVar73 >> 4) & 1);
  fStack_250 = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 4) & 1) * auVar87._16_4_ |
                      (uint)!bVar7 * (int)fVar66);
  bVar7 = (bool)((byte)(uVar73 >> 5) & 1);
  fStack_24c = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 5) & 1) * auVar87._20_4_ |
                      (uint)!bVar7 * (int)fVar67);
  bVar7 = (bool)((byte)(uVar73 >> 6) & 1);
  fStack_248 = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 6) & 1) * auVar87._24_4_ |
                      (uint)!bVar7 * (int)fVar68);
  bVar7 = SUB81(uVar73 >> 7,0);
  fStack_244 = (float)((uint)bVar7 *
                       ((uint)bVar14 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                       (uint)!bVar14 * auVar87._28_4_) | (uint)!bVar7 * (int)fVar134);
  piVar4 = (int *)(param_4 + lVar71);
  auVar116._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * piVar4[1];
  auVar116._0_4_ = (uint)(bVar78 & 1) * *piVar4;
  auVar116._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * piVar4[2];
  auVar116._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * piVar4[3];
  auVar116._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * piVar4[4];
  auVar116._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * piVar4[5];
  auVar116._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * piVar4[6];
  auVar116._28_4_ = (uint)(byte)(uVar73 >> 7) * piVar4[7];
  bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar8 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar9 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar23 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar34 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar41 = SUB81(uVar73 >> 7,0);
  local_240._4_4_ =
       (uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 1) & 1) * auVar111._4_4_ |
       (uint)!bVar7 * (int)fVar138;
  local_240._0_4_ =
       (uint)(bVar78 & 1) * (uint)!(bool)(bVar6 & 1) * auVar111._0_4_ |
       (uint)!(bool)(bVar78 & 1) * (int)fVar135;
  local_240._8_4_ =
       (uint)bVar8 * (uint)!(bool)((byte)(uVar72 >> 2) & 1) * auVar111._8_4_ |
       (uint)!bVar8 * (int)fVar140;
  local_240._12_4_ =
       (uint)bVar9 * (uint)!(bool)((byte)(uVar72 >> 3) & 1) * auVar111._12_4_ |
       (uint)!bVar9 * (int)fVar142;
  local_240._16_4_ =
       (uint)bVar12 * (uint)!(bool)((byte)(uVar72 >> 4) & 1) * auVar111._16_4_ |
       (uint)!bVar12 * (int)fVar144;
  local_240._20_4_ =
       (uint)bVar23 * (uint)!(bool)((byte)(uVar72 >> 5) & 1) * auVar111._20_4_ |
       (uint)!bVar23 * (int)fVar146;
  local_240._24_4_ =
       (uint)bVar34 * (uint)!(bool)((byte)(uVar72 >> 6) & 1) * auVar111._24_4_ |
       (uint)!bVar34 * (int)fVar148;
  local_240._28_4_ =
       (uint)bVar41 * (uint)!SUB81(uVar72 >> 7,0) * auVar111._28_4_ | (uint)!bVar41 * (int)fVar150;
  auVar91._4_4_ = __real_322bcc77;
  auVar91._0_4_ = __real_322bcc77;
  auVar91._8_4_ = __real_322bcc77;
  auVar91._12_4_ = __real_322bcc77;
  auVar91._16_4_ = __real_322bcc77;
  auVar91._20_4_ = __real_322bcc77;
  auVar91._24_4_ = __real_322bcc77;
  auVar91._28_4_ = __real_322bcc77;
  uVar72 = vcmpps_avx512vl(auVar116,auVar91,1);
  auVar87 = vaddps_avx512vl(auVar99,auVar102);
  auVar86 = vdivps_avx(auVar115,auVar87);
  auVar86 = vsqrtps_avx(auVar86);
  fVar125 = (fVar125 + fVar125) * auVar86._0_4_;
  fVar126 = (fVar126 + fVar126) * auVar86._4_4_;
  fVar127 = (fVar127 + fVar127) * auVar86._8_4_;
  fVar128 = (fVar128 + fVar128) * auVar86._12_4_;
  fVar129 = (fVar129 + fVar129) * auVar86._16_4_;
  fVar130 = (fVar130 + fVar130) * auVar86._20_4_;
  fVar131 = (fVar131 + fVar131) * auVar86._24_4_;
  fVar132 = (fVar132 + fVar132) * auVar86._28_4_;
  auVar86 = vdivps_avx(auVar152,auVar116);
  bVar7 = (bool)((byte)uVar72 & 1);
  bVar8 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar12 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar23 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar34 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar41 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar48 = SUB81(uVar72 >> 7,0);
  auVar119._0_4_ =
       param_6 * (float)((uint)bVar7 * (int)fVar125 | (uint)!bVar7 * (int)(fVar125 * auVar86._0_4_))
  ;
  auVar119._4_4_ =
       param_6 * (float)((uint)bVar8 * (int)fVar126 | (uint)!bVar8 * (int)(fVar126 * auVar86._4_4_))
  ;
  auVar119._8_4_ =
       param_6 * (float)((uint)bVar9 * (int)fVar127 | (uint)!bVar9 * (int)(fVar127 * auVar86._8_4_))
  ;
  auVar119._12_4_ =
       param_6 * (float)((uint)bVar12 * (int)fVar128 |
                        (uint)!bVar12 * (int)(fVar128 * auVar86._12_4_));
  auVar119._16_4_ =
       param_6 * (float)((uint)bVar23 * (int)fVar129 |
                        (uint)!bVar23 * (int)(fVar129 * auVar86._16_4_));
  auVar119._20_4_ =
       param_6 * (float)((uint)bVar34 * (int)fVar130 |
                        (uint)!bVar34 * (int)(fVar130 * auVar86._20_4_));
  auVar119._24_4_ =
       param_6 * (float)((uint)bVar41 * (int)fVar131 |
                        (uint)!bVar41 * (int)(fVar131 * auVar86._24_4_));
  auVar119._28_4_ =
       param_6 * (float)((uint)bVar48 * (int)fVar132 |
                        (uint)!bVar48 * (int)(fVar132 * auVar86._28_4_));
  auVar86 = vsubps_avx512vl(auVar95,auVar106);
  auVar111 = vsubps_avx512vl(auVar96,auVar107);
  auVar103 = vsubps_avx512vl(auVar97,auVar108);
  auVar86 = vsubps_avx512vl(auVar86,auVar92);
  auVar86 = vaddps_avx512vl(auVar112,auVar86);
  auVar111 = vsubps_avx512vl(auVar111,auVar93);
  auVar111 = vaddps_avx512vl(auVar113,auVar111);
  auVar103 = vsubps_avx512vl(auVar103,auVar94);
  auVar103 = vaddps_avx512vl(auVar114,auVar103);
  auVar111 = vmulps_avx512vl(auVar111,_local_260);
  auVar86 = vfmadd231ps_avx512vl(auVar111,local_280,auVar86);
  auVar86 = vfmadd231ps_avx512vl(auVar86,local_240,auVar103);
  piVar4 = (int *)(param_5 + lVar71);
  auVar117._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * piVar4[1];
  auVar117._0_4_ = (uint)(bVar78 & 1) * *piVar4;
  auVar117._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * piVar4[2];
  auVar117._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * piVar4[3];
  auVar117._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * piVar4[4];
  auVar117._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * piVar4[5];
  auVar117._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * piVar4[6];
  auVar117._28_4_ = (uint)(byte)(uVar73 >> 7) * piVar4[7];
  auVar86 = vfnmsub213ps_avx512vl(auVar86,auVar119,auVar117);
  auVar120._0_4_ = auVar87._0_4_ * auVar119._0_4_ + __real_3f800000;
  auVar120._4_4_ = auVar87._4_4_ * auVar119._4_4_ + __real_3f800000;
  auVar120._8_4_ = auVar87._8_4_ * auVar119._8_4_ + __real_3f800000;
  auVar120._12_4_ = auVar87._12_4_ * auVar119._12_4_ + __real_3f800000;
  auVar120._16_4_ = auVar87._16_4_ * auVar119._16_4_ + __real_3f800000;
  auVar120._20_4_ = auVar87._20_4_ * auVar119._20_4_ + __real_3f800000;
  auVar120._24_4_ = auVar87._24_4_ * auVar119._24_4_ + __real_3f800000;
  auVar120._28_4_ = auVar87._28_4_ * auVar119._28_4_ + __real_3f800000;
  auVar86 = vdivps_avx512vl(auVar86,auVar120);
  auVar87 = vaddps_avx512vl(auVar117,auVar86);
  puVar5 = (uint *)(param_5 + lVar71);
  bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar8 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar9 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar23 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar34 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar41 = SUB81(uVar73 >> 7,0);
  *puVar5 = (uint)(bVar78 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar78 & 1) * *puVar5;
  puVar5[1] = (uint)bVar7 * auVar87._4_4_ | (uint)!bVar7 * puVar5[1];
  puVar5[2] = (uint)bVar8 * auVar87._8_4_ | (uint)!bVar8 * puVar5[2];
  puVar5[3] = (uint)bVar9 * auVar87._12_4_ | (uint)!bVar9 * puVar5[3];
  puVar5[4] = (uint)bVar12 * auVar87._16_4_ | (uint)!bVar12 * puVar5[4];
  puVar5[5] = (uint)bVar23 * auVar87._20_4_ | (uint)!bVar23 * puVar5[5];
  puVar5[6] = (uint)bVar34 * auVar87._24_4_ | (uint)!bVar34 * puVar5[6];
  puVar5[7] = (uint)bVar41 * auVar87._28_4_ | (uint)!bVar41 * puVar5[7];
  auVar87 = vmulps_avx512vl(local_280,auVar86);
  auVar111 = vfmadd231ps_avx512vl(auVar95,auVar99,auVar87);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar110,uVar73,auVar111);
  auVar121._0_4_ = (float)local_260._0_4_ * auVar86._0_4_;
  auVar121._4_4_ = (float)local_260._4_4_ * auVar86._4_4_;
  auVar121._8_4_ = fStack_258 * auVar86._8_4_;
  auVar121._12_4_ = fStack_254 * auVar86._12_4_;
  auVar121._16_4_ = fStack_250 * auVar86._16_4_;
  auVar121._20_4_ = fStack_24c * auVar86._20_4_;
  auVar121._24_4_ = fStack_248 * auVar86._24_4_;
  auVar121._28_4_ = fStack_244 * auVar86._28_4_;
  auVar111 = vfmadd231ps_avx512vl(auVar96,auVar99,auVar121);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar110 | auVar118),uVar73,auVar111);
  auVar86 = vmulps_avx512vl(local_240,auVar86);
  auVar111 = vfmadd231ps_avx512vl(auVar97,auVar99,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar110 | auVar109),uVar73,auVar111);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar121,uVar73,auVar99);
  auVar87 = vfnmadd213ps_avx512vl(auVar87,auVar102,auVar92);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar89,uVar73,auVar87);
  auVar87 = vfnmadd213ps_avx512vl(auVar121,auVar102,auVar93);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar118),uVar73,auVar87);
  auVar86 = vfnmadd213ps_avx512vl(auVar86,auVar102,auVar94);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar86,uVar73,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar110 | auVar118),uVar73,auVar102);
  return;
}

// ApplyXPBDSpringConstraints_avx512skx @ 14090aee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraints_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,float param_5
               ,float param_6,uint param_7)

{
  float fVar1;
  float fVar5;
  float *pfVar7;
  float *pfVar8;
  undefined1 (*pauVar9) [32];
  int *piVar10;
  uint *puVar11;
  byte bVar12;
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
  bool bVar64;
  bool bVar65;
  bool bVar66;
  float fVar67;
  ulonglong uVar68;
  uint uVar69;
  ulonglong uVar70;
  longlong lVar71;
  longlong unaff_RBX;
  ulonglong uVar72;
  ulonglong unaff_RDI;
  uint uVar73;
  longlong unaff_R13;
  longlong unaff_R14;
  byte bVar74;
  int iVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  int iVar105;
  int iVar106;
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
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
  int iVar107;
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar108 [32];
  float fVar109;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar110 [32];
  float fVar117;
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar121 [16];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 auVar122 [16];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM31 [64];
  undefined1 auStack_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  int local_180;
  int iStack_17c;
  int aiStack_178 [4];
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
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  
  auVar103 = ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001;
  auVar102 = ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000;
  auVar122 = in_ZMM28._0_16_;
  auVar81 = in_ZMM21._0_16_;
  auVar80 = in_ZMM25._0_16_;
  auVar121 = in_ZMM24._0_16_;
  auVar79 = in_ZMM20._0_16_;
  auVar78 = in_ZMM23._0_16_;
  auVar77 = in_ZMM22._0_16_;
  uVar73 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar73 = param_7;
  }
  uVar73 = uVar73 & 0xfffffff8;
  if ((int)uVar73 < 1) {
    uVar70 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar67 = param_5 * param_6 * param_5;
    auVar104._4_4_ = fVar67;
    auVar104._0_4_ = fVar67;
    auVar104._8_4_ = fVar67;
    auVar104._12_4_ = fVar67;
    auVar104._16_4_ = fVar67;
    auVar104._20_4_ = fVar67;
    auVar104._24_4_ = fVar67;
    auVar104._28_4_ = fVar67;
    auVar82._4_4_ = __real_80000000;
    auVar82._0_4_ = __real_80000000;
    auVar82._8_4_ = __real_80000000;
    auVar82._12_4_ = __real_80000000;
    auVar82._16_4_ = __real_80000000;
    auVar82._20_4_ = __real_80000000;
    auVar82._24_4_ = __real_80000000;
    auVar82._28_4_ = __real_80000000;
    auVar82 = vxorps_avx512vl(auVar104,auVar82);
    uVar70 = 0;
    auVar83 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar84 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar85 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar76 = vxorps_avx512vl(in_ZMM19._0_16_,in_ZMM19._0_16_);
    auVar86 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar79 = auVar86._0_16_;
    auVar87 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
    auVar81 = auVar87._0_16_;
    uVar72 = 0;
    do {
      auVar88 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + uVar72 * 2));
      auVar89 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x20 + uVar72 * 2));
      auVar90 = vmovdqa64_avx512vl(auVar88);
      auVar90 = vpermt2d_avx512vl(auVar90,auVar102,auVar89);
      auVar88 = vpermt2d_avx512vl(auVar88,auVar103,auVar89);
      auVar91 = vpslld_avx512vl(auVar90,4);
      auVar88 = vpslld_avx512vl(auVar88,4);
      auVar77 = auVar88._0_16_;
      vxorps_avx512vl(in_ZMM25._0_16_,in_ZMM25._0_16_);
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RDI));
      auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar72));
      auVar80 = auVar93._0_16_;
      in_ZMM25 = ZEXT3264(auVar93);
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RDI));
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar73));
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_7));
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      unaff_RDI = uVar72 & 0xffffffff;
      pfVar7 = (float *)(param_4 + unaff_RDI);
      fVar67 = pfVar7[1];
      fVar5 = pfVar7[2];
      fVar6 = pfVar7[3];
      fVar1 = pfVar7[4];
      fVar2 = pfVar7[5];
      fVar3 = pfVar7[6];
      fVar4 = pfVar7[7];
      auVar88 = vsubps_avx512vl(auVar92,auVar93);
      auVar89 = vsubps_avx512vl(auVar94,auVar95);
      auVar90 = vsubps_avx512vl(auVar96,auVar97);
      auVar108._0_4_ =
           auVar90._0_4_ * auVar90._0_4_ +
           auVar88._0_4_ * auVar88._0_4_ + auVar89._0_4_ * auVar89._0_4_;
      auVar108._4_4_ =
           auVar90._4_4_ * auVar90._4_4_ +
           auVar88._4_4_ * auVar88._4_4_ + auVar89._4_4_ * auVar89._4_4_;
      auVar108._8_4_ =
           auVar90._8_4_ * auVar90._8_4_ +
           auVar88._8_4_ * auVar88._8_4_ + auVar89._8_4_ * auVar89._8_4_;
      auVar108._12_4_ =
           auVar90._12_4_ * auVar90._12_4_ +
           auVar88._12_4_ * auVar88._12_4_ + auVar89._12_4_ * auVar89._12_4_;
      auVar108._16_4_ =
           auVar90._16_4_ * auVar90._16_4_ +
           auVar88._16_4_ * auVar88._16_4_ + auVar89._16_4_ * auVar89._16_4_;
      auVar108._20_4_ =
           auVar90._20_4_ * auVar90._20_4_ +
           auVar88._20_4_ * auVar88._20_4_ + auVar89._20_4_ * auVar89._20_4_;
      auVar108._24_4_ =
           auVar90._24_4_ * auVar90._24_4_ +
           auVar88._24_4_ * auVar88._24_4_ + auVar89._24_4_ * auVar89._24_4_;
      auVar108._28_4_ =
           auVar90._28_4_ * auVar90._28_4_ +
           auVar88._28_4_ * auVar88._28_4_ + auVar89._28_4_ * auVar89._28_4_;
      auVar100 = vsqrtps_avx(auVar108);
      uVar68 = vcmpps_avx512vl(auVar108,auVar86,1);
      auVar88 = vdivps_avx(auVar88,auVar100);
      auVar89 = vdivps_avx(auVar89,auVar100);
      auVar90 = vdivps_avx(auVar90,auVar100);
      bVar74 = (byte)uVar68;
      iVar75 = auVar76._0_4_;
      auVar118._0_4_ = (uint)(bVar74 & 1) * iVar75 | (uint)!(bool)(bVar74 & 1) * auVar100._0_4_;
      bVar13 = (bool)((byte)(uVar68 >> 1) & 1);
      iVar105 = auVar76._4_4_;
      auVar118._4_4_ = (uint)bVar13 * iVar105 | (uint)!bVar13 * auVar100._4_4_;
      bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
      iVar106 = auVar76._8_4_;
      auVar118._8_4_ = (uint)bVar13 * iVar106 | (uint)!bVar13 * auVar100._8_4_;
      bVar13 = (bool)((byte)(uVar68 >> 3) & 1);
      iVar107 = auVar76._12_4_;
      auVar118._12_4_ = (uint)bVar13 * iVar107 | (uint)!bVar13 * auVar100._12_4_;
      auVar118._16_4_ = (uint)!(bool)((byte)(uVar68 >> 4) & 1) * auVar100._16_4_;
      auVar118._20_4_ = (uint)!(bool)((byte)(uVar68 >> 5) & 1) * auVar100._20_4_;
      auVar118._24_4_ = (uint)!(bool)((byte)(uVar68 >> 6) & 1) * auVar100._24_4_;
      bVar13 = SUB81(uVar68 >> 7,0);
      auVar118._28_4_ =
           (uint)bVar13 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar13 * auVar100._28_4_;
      auVar100 = vsubps_avx(auVar118,*(undefined1 (*) [32])(param_3 + unaff_RDI));
      auVar120._0_4_ = auVar98._0_4_ + auVar99._0_4_;
      auVar120._4_4_ = auVar98._4_4_ + auVar99._4_4_;
      auVar120._8_4_ = auVar98._8_4_ + auVar99._8_4_;
      auVar120._12_4_ = auVar98._12_4_ + auVar99._12_4_;
      auVar120._16_4_ = auVar98._16_4_ + auVar99._16_4_;
      auVar120._20_4_ = auVar98._20_4_ + auVar99._20_4_;
      auVar120._24_4_ = auVar98._24_4_ + auVar99._24_4_;
      auVar120._28_4_ = auVar98._28_4_ + auVar99._28_4_;
      auVar110._0_4_ = auVar82._0_4_ * auVar100._0_4_ - *pfVar7;
      auVar110._4_4_ = auVar82._4_4_ * auVar100._4_4_ - fVar67;
      auVar110._8_4_ = auVar82._8_4_ * auVar100._8_4_ - fVar5;
      auVar110._12_4_ = auVar82._12_4_ * auVar100._12_4_ - fVar6;
      auVar110._16_4_ = auVar82._16_4_ * auVar100._16_4_ - fVar1;
      auVar110._20_4_ = auVar82._20_4_ * auVar100._20_4_ - fVar2;
      auVar110._24_4_ = auVar82._24_4_ * auVar100._24_4_ - fVar3;
      auVar110._28_4_ = auVar82._28_4_ * auVar100._28_4_ - fVar4;
      auVar100 = vfmadd213ps_avx512vl(auVar120,auVar104,auVar87);
      auVar100 = vdivps_avx(auVar110,auVar100);
      fVar109 = auVar100._0_4_;
      fVar111 = auVar100._4_4_;
      fVar112 = auVar100._8_4_;
      fVar113 = auVar100._12_4_;
      fVar114 = auVar100._16_4_;
      fVar115 = auVar100._20_4_;
      fVar116 = auVar100._24_4_;
      fVar117 = auVar100._28_4_;
      auVar101._0_4_ =
           (uint)(bVar74 & 1) * (int)fVar109 |
           (uint)!(bool)(bVar74 & 1) * (int)(fVar109 * auVar88._0_4_);
      bVar13 = (bool)((byte)(uVar68 >> 1) & 1);
      auVar101._4_4_ = (uint)bVar13 * (int)fVar111 | (uint)!bVar13 * (int)(fVar111 * auVar88._4_4_);
      bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
      auVar101._8_4_ = (uint)bVar13 * (int)fVar112 | (uint)!bVar13 * (int)(fVar112 * auVar88._8_4_);
      bVar13 = (bool)((byte)(uVar68 >> 3) & 1);
      auVar101._12_4_ =
           (uint)bVar13 * (int)fVar113 | (uint)!bVar13 * (int)(fVar113 * auVar88._12_4_);
      bVar13 = (bool)((byte)(uVar68 >> 4) & 1);
      auVar101._16_4_ =
           (uint)bVar13 * (int)fVar114 | (uint)!bVar13 * (int)(fVar114 * auVar88._16_4_);
      bVar13 = (bool)((byte)(uVar68 >> 5) & 1);
      auVar101._20_4_ =
           (uint)bVar13 * (int)fVar115 | (uint)!bVar13 * (int)(fVar115 * auVar88._20_4_);
      bVar13 = (bool)((byte)(uVar68 >> 6) & 1);
      auVar101._24_4_ =
           (uint)bVar13 * (int)fVar116 | (uint)!bVar13 * (int)(fVar116 * auVar88._24_4_);
      bVar13 = SUB81(uVar68 >> 7,0);
      auVar101._28_4_ =
           (uint)bVar13 * (int)fVar117 | (uint)!bVar13 * (int)(fVar117 * auVar88._28_4_);
      pfVar8 = (float *)(param_4 + unaff_RDI);
      *pfVar8 = *pfVar7 + fVar109;
      pfVar8[1] = fVar67 + fVar111;
      pfVar8[2] = fVar5 + fVar112;
      pfVar8[3] = fVar6 + fVar113;
      pfVar8[4] = fVar1 + fVar114;
      pfVar8[5] = fVar2 + fVar115;
      pfVar8[6] = fVar3 + fVar116;
      pfVar8[7] = fVar4 + fVar117;
      auVar88 = vfmadd231ps_avx512vl(auVar92,auVar98,auVar101);
      auVar121 = auVar88._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar83),0xffff,auVar88);
      auVar88._0_4_ = (uint)(bVar74 & 1) * iVar75 | (uint)!(bool)(bVar74 & 1) * auVar89._0_4_;
      bVar13 = (bool)((byte)(uVar68 >> 1) & 1);
      auVar88._4_4_ = (uint)bVar13 * iVar105 | (uint)!bVar13 * auVar89._4_4_;
      bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
      auVar88._8_4_ = (uint)bVar13 * iVar106 | (uint)!bVar13 * auVar89._8_4_;
      bVar13 = (bool)((byte)(uVar68 >> 3) & 1);
      auVar88._12_4_ = (uint)bVar13 * iVar107 | (uint)!bVar13 * auVar89._12_4_;
      auVar88._16_4_ = (uint)!(bool)((byte)(uVar68 >> 4) & 1) * auVar89._16_4_;
      auVar88._20_4_ = (uint)!(bool)((byte)(uVar68 >> 5) & 1) * auVar89._20_4_;
      auVar88._24_4_ = (uint)!(bool)((byte)(uVar68 >> 6) & 1) * auVar89._24_4_;
      auVar88._28_4_ = (uint)!SUB81(uVar68 >> 7,0) * auVar89._28_4_;
      auVar89 = vmulps_avx512vl(auVar88,auVar100);
      auVar78 = auVar89._0_16_;
      auVar100 = vfmadd231ps_avx512vl(auVar94,auVar98,auVar89);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar83),0xffff,auVar100);
      auVar100._0_4_ =
           (float)((uint)(bVar74 & 1) * iVar75 | (uint)!(bool)(bVar74 & 1) * auVar90._0_4_);
      bVar13 = (bool)((byte)(uVar68 >> 1) & 1);
      auVar100._4_4_ = (float)((uint)bVar13 * iVar105 | (uint)!bVar13 * auVar90._4_4_);
      bVar13 = (bool)((byte)(uVar68 >> 2) & 1);
      auVar100._8_4_ = (float)((uint)bVar13 * iVar106 | (uint)!bVar13 * auVar90._8_4_);
      bVar13 = (bool)((byte)(uVar68 >> 3) & 1);
      auVar100._12_4_ = (float)((uint)bVar13 * iVar107 | (uint)!bVar13 * auVar90._12_4_);
      fVar67 = (float)((uint)!(bool)((byte)(uVar68 >> 4) & 1) * auVar90._16_4_);
      auVar100._16_4_ = fVar67;
      fVar5 = (float)((uint)!(bool)((byte)(uVar68 >> 5) & 1) * auVar90._20_4_);
      auVar100._20_4_ = fVar5;
      fVar6 = (float)((uint)!(bool)((byte)(uVar68 >> 6) & 1) * auVar90._24_4_);
      auVar100._24_4_ = fVar6;
      bVar13 = SUB81(uVar68 >> 7,0);
      auVar100._28_4_ =
           (float)((uint)bVar13 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                  (uint)!bVar13 * auVar90._28_4_);
      auVar92._0_4_ = auVar100._0_4_ * fVar109;
      auVar92._4_4_ = auVar100._4_4_ * fVar111;
      auVar92._8_4_ = auVar100._8_4_ * fVar112;
      auVar92._12_4_ = auVar100._12_4_ * fVar113;
      auVar92._16_4_ = fVar67 * fVar114;
      auVar92._20_4_ = fVar5 * fVar115;
      auVar92._24_4_ = fVar6 * fVar116;
      auVar92._28_4_ = auVar100._28_4_ * fVar117;
      auVar90 = vfmadd231ps_avx512vl(auVar96,auVar98,auVar92);
      in_ZMM31 = ZEXT3264(auVar90);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar84),0xffff,auVar90);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar85),0xffff,auVar98);
      auVar90 = vfnmadd213ps_avx512vl(auVar101,auVar99,auVar93);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar99,0xffff,auVar90);
      auVar89 = vfnmadd231ps_avx512vl(auVar95,auVar99,auVar89);
      in_ZMM26 = ZEXT3264(auVar89);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar98,0xffff,auVar89);
      auVar89 = vfnmadd231ps_avx512vl(auVar97,auVar99,auVar92);
      in_ZMM28 = ZEXT3264(auVar89);
      auVar122 = auVar89._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar88,0xffff,auVar89);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar100,0xffff,auVar99);
      uVar72 = uVar72 + 0x20;
      uVar69 = (int)uVar70 + 8;
      uVar70 = (ulonglong)uVar69;
    } while ((int)uVar69 < (int)uVar73);
    if ((int)param_7 <= (int)uVar69) {
      return;
    }
  }
  auVar102 = vpbroadcastd_avx512vl();
  auVar102 = vpor_avx2(auVar102,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar103 = vpbroadcastd_avx512vl();
  uVar72 = vpcmpgtd_avx512vl(auVar103,auVar102);
  pauVar9 = (undefined1 (*) [32])(param_2 + uVar70 * 8);
  bVar74 = (byte)uVar72;
  if (bVar74 == 0xff) {
    auVar102 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                 ,*pauVar9,pauVar9[1]);
    auVar103 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                 ,*pauVar9,pauVar9[1]);
  }
  else {
    auVar103 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar9 + uVar70));
    auVar102._4_4_ = (uint)((byte)(uVar72 >> 1) & 1) * auVar103._4_4_;
    auVar102._0_4_ = (uint)(bVar74 & 1) * auVar103._0_4_;
    auVar102._8_4_ = (uint)((byte)(uVar72 >> 2) & 1) * auVar103._8_4_;
    auVar102._12_4_ = (uint)((byte)(uVar72 >> 3) & 1) * auVar103._12_4_;
    auVar102._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * auVar103._16_4_;
    auVar102._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * auVar103._20_4_;
    auVar102._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * auVar103._24_4_;
    auVar102._28_4_ = (uint)(byte)(uVar72 >> 7) * auVar103._28_4_;
    auVar82 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar9 + uVar70));
    auVar103._4_4_ = (uint)((byte)(uVar72 >> 1) & 1) * auVar82._4_4_;
    auVar103._0_4_ = (uint)(bVar74 & 1) * auVar82._0_4_;
    auVar103._8_4_ = (uint)((byte)(uVar72 >> 2) & 1) * auVar82._8_4_;
    auVar103._12_4_ = (uint)((byte)(uVar72 >> 3) & 1) * auVar82._12_4_;
    auVar103._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * auVar82._16_4_;
    auVar103._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * auVar82._20_4_;
    auVar103._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * auVar82._24_4_;
    auVar103._28_4_ = (uint)(byte)(uVar72 >> 7) * auVar82._28_4_;
  }
  auVar99 = vpslld_avx2(auVar102,4);
  auVar97._4_4_ = __real_00000004;
  auVar97._0_4_ = __real_00000004;
  auVar97._8_4_ = __real_00000004;
  auVar97._12_4_ = __real_00000004;
  auVar97._16_4_ = __real_00000004;
  auVar97._20_4_ = __real_00000004;
  auVar97._24_4_ = __real_00000004;
  auVar97._28_4_ = __real_00000004;
  auVar102 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar9));
  auVar77 = vxorps_avx512vl(auVar77,auVar77);
  auVar82 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  bVar13 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar23 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar104 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
  auVar78 = vxorps_avx512vl(auVar78,auVar78);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
  bVar14 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar72 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar79 = vxorps_avx512vl(auVar79,auVar79);
  auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar9));
  auVar91._0_4_ = (uint)(bVar74 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar79._0_4_;
  bVar15 = (bool)((byte)(uVar72 >> 1) & 1);
  auVar91._4_4_ = (uint)bVar15 * auVar84._4_4_ | (uint)!bVar15 * auVar79._4_4_;
  bVar15 = (bool)((byte)(uVar72 >> 2) & 1);
  auVar91._8_4_ = (uint)bVar15 * auVar84._8_4_ | (uint)!bVar15 * auVar79._8_4_;
  bVar15 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar91._12_4_ = (uint)bVar15 * auVar84._12_4_ | (uint)!bVar15 * auVar79._12_4_;
  auVar91._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * auVar84._16_4_;
  auVar91._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * auVar84._20_4_;
  auVar91._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * auVar84._24_4_;
  auVar91._28_4_ = (uint)(byte)(uVar72 >> 7) * auVar84._28_4_;
  auVar118 = vpslld_avx2(auVar103,4);
  auVar79 = vxorps_avx512vl(auVar121,auVar121);
  auVar103 = vgatherdps_avx512vl(*param_1);
  bVar15 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar25 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar35 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar70));
  auVar80 = vxorps_avx512vl(auVar80,auVar80);
  auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar16 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar26 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar36 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  auVar93._0_4_ = (uint)(bVar74 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar17 = (bool)((byte)(uVar72 >> 1) & 1);
  auVar93._4_4_ = (uint)bVar17 * auVar84._4_4_ | (uint)!bVar17 * auVar81._4_4_;
  bVar17 = (bool)((byte)(uVar72 >> 2) & 1);
  auVar93._8_4_ = (uint)bVar17 * auVar84._8_4_ | (uint)!bVar17 * auVar81._8_4_;
  bVar17 = (bool)((byte)(uVar72 >> 3) & 1);
  auVar93._12_4_ = (uint)bVar17 * auVar84._12_4_ | (uint)!bVar17 * auVar81._12_4_;
  auVar93._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * auVar84._16_4_;
  auVar93._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * auVar84._20_4_;
  auVar93._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * auVar84._24_4_;
  auVar93._28_4_ = (uint)(byte)(uVar72 >> 7) * auVar84._28_4_;
  bVar17 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar27 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar37 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar43 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar49 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar55 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar61 = SUB81(uVar72 >> 7,0);
  bVar18 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar28 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar38 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar44 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar50 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar56 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar62 = SUB81(uVar72 >> 7,0);
  bVar19 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar29 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar39 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar45 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar51 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar57 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar63 = SUB81(uVar72 >> 7,0);
  bVar20 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar30 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar40 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar46 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar52 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar58 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar64 = SUB81(uVar72 >> 7,0);
  bVar21 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar31 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar41 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar47 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar53 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar59 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar65 = SUB81(uVar72 >> 7,0);
  bVar22 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar32 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar42 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar48 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar54 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar60 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar66 = SUB81(uVar72 >> 7,0);
  lVar71 = (longlong)((int)uVar70 << 2);
  piVar10 = (int *)(param_3 + lVar71);
  auVar94._4_4_ = (uint)((byte)(uVar72 >> 1) & 1) * piVar10[1];
  auVar94._0_4_ = (uint)(bVar74 & 1) * *piVar10;
  auVar94._8_4_ = (uint)((byte)(uVar72 >> 2) & 1) * piVar10[2];
  auVar94._12_4_ = (uint)((byte)(uVar72 >> 3) & 1) * piVar10[3];
  auVar94._16_4_ = (uint)((byte)(uVar72 >> 4) & 1) * piVar10[4];
  auVar94._20_4_ = (uint)((byte)(uVar72 >> 5) & 1) * piVar10[5];
  auVar94._24_4_ = (uint)((byte)(uVar72 >> 6) & 1) * piVar10[6];
  auVar94._28_4_ = (uint)(byte)(uVar72 >> 7) * piVar10[7];
  piVar10 = (int *)(param_4 + lVar71);
  fVar67 = (float)((uint)(bVar74 & 1) * *piVar10);
  fVar5 = (float)((uint)((byte)(uVar72 >> 1) & 1) * piVar10[1]);
  auVar95._4_4_ = fVar5;
  auVar95._0_4_ = fVar67;
  fVar6 = (float)((uint)((byte)(uVar72 >> 2) & 1) * piVar10[2]);
  auVar95._8_4_ = fVar6;
  fVar1 = (float)((uint)((byte)(uVar72 >> 3) & 1) * piVar10[3]);
  auVar95._12_4_ = fVar1;
  fVar2 = (float)((uint)((byte)(uVar72 >> 4) & 1) * piVar10[4]);
  auVar95._16_4_ = fVar2;
  fVar3 = (float)((uint)((byte)(uVar72 >> 5) & 1) * piVar10[5]);
  auVar95._20_4_ = fVar3;
  fVar4 = (float)((uint)((byte)(uVar72 >> 6) & 1) * piVar10[6]);
  auVar95._24_4_ = fVar4;
  fVar109 = (float)((uint)(byte)(uVar72 >> 7) * piVar10[7]);
  auVar95._28_4_ = fVar109;
  auVar87._4_4_ =
       (uint)bVar17 * (uint)((byte)(uVar72 >> 1) & 1) * auVar102._4_4_ | (uint)!bVar17 * iStack_11c;
  auVar87._0_4_ =
       (uint)(bVar74 & 1) * (uint)(bVar74 & 1) * auVar102._0_4_ |
       (uint)!(bool)(bVar74 & 1) * local_120;
  auVar87._8_4_ =
       (uint)bVar27 * (uint)((byte)(uVar72 >> 2) & 1) * auVar102._8_4_ | (uint)!bVar27 * iStack_118;
  auVar87._12_4_ =
       (uint)bVar37 * (uint)((byte)(uVar72 >> 3) & 1) * auVar102._12_4_ | (uint)!bVar37 * iStack_114
  ;
  auVar87._16_4_ =
       (uint)bVar43 * (uint)((byte)(uVar72 >> 4) & 1) * auVar102._16_4_ | (uint)!bVar43 * iStack_110
  ;
  auVar87._20_4_ =
       (uint)bVar49 * (uint)((byte)(uVar72 >> 5) & 1) * auVar102._20_4_ | (uint)!bVar49 * iStack_10c
  ;
  auVar87._24_4_ =
       (uint)bVar55 * (uint)((byte)(uVar72 >> 6) & 1) * auVar102._24_4_ | (uint)!bVar55 * iStack_108
  ;
  auVar87._28_4_ =
       (uint)bVar61 * (uint)(byte)(uVar72 >> 7) * auVar102._28_4_ | (uint)!bVar61 * iStack_104;
  auVar89._4_4_ =
       (uint)bVar18 * ((uint)bVar13 * auVar82._4_4_ | (uint)!bVar13 * auVar77._4_4_) |
       (uint)!bVar18 * iStack_fc;
  auVar89._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar82._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar77._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_100;
  auVar89._8_4_ =
       (uint)bVar28 * ((uint)bVar23 * auVar82._8_4_ | (uint)!bVar23 * auVar77._8_4_) |
       (uint)!bVar28 * iStack_f8;
  auVar89._12_4_ =
       (uint)bVar38 * ((uint)bVar33 * auVar82._12_4_ | (uint)!bVar33 * auVar77._12_4_) |
       (uint)!bVar38 * iStack_f4;
  auVar89._16_4_ =
       (uint)bVar44 * (uint)((byte)(uVar72 >> 4) & 1) * auVar82._16_4_ | (uint)!bVar44 * iStack_f0;
  auVar89._20_4_ =
       (uint)bVar50 * (uint)((byte)(uVar72 >> 5) & 1) * auVar82._20_4_ | (uint)!bVar50 * iStack_ec;
  auVar89._24_4_ =
       (uint)bVar56 * (uint)((byte)(uVar72 >> 6) & 1) * auVar82._24_4_ | (uint)!bVar56 * iStack_e8;
  auVar89._28_4_ =
       (uint)bVar62 * (uint)(byte)(uVar72 >> 7) * auVar82._28_4_ | (uint)!bVar62 * iStack_e4;
  auVar90._4_4_ =
       (uint)bVar19 * ((uint)bVar14 * auVar83._4_4_ | (uint)!bVar14 * auVar78._4_4_) |
       (uint)!bVar19 * iStack_dc;
  auVar90._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar78._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_e0;
  auVar90._8_4_ =
       (uint)bVar29 * ((uint)bVar24 * auVar83._8_4_ | (uint)!bVar24 * auVar78._8_4_) |
       (uint)!bVar29 * iStack_d8;
  auVar90._12_4_ =
       (uint)bVar39 * ((uint)bVar34 * auVar83._12_4_ | (uint)!bVar34 * auVar78._12_4_) |
       (uint)!bVar39 * iStack_d4;
  auVar90._16_4_ =
       (uint)bVar45 * (uint)((byte)(uVar72 >> 4) & 1) * auVar83._16_4_ | (uint)!bVar45 * iStack_d0;
  auVar90._20_4_ =
       (uint)bVar51 * (uint)((byte)(uVar72 >> 5) & 1) * auVar83._20_4_ | (uint)!bVar51 * iStack_cc;
  auVar90._24_4_ =
       (uint)bVar57 * (uint)((byte)(uVar72 >> 6) & 1) * auVar83._24_4_ | (uint)!bVar57 * iStack_c8;
  auVar90._28_4_ =
       (uint)bVar63 * (uint)(byte)(uVar72 >> 7) * auVar83._28_4_ | (uint)!bVar63 * iStack_c4;
  auVar84._4_4_ =
       (uint)bVar20 * ((uint)bVar15 * auVar103._4_4_ | (uint)!bVar15 * auVar79._4_4_) |
       (uint)!bVar20 * iStack_17c;
  auVar84._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar103._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar79._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_180;
  auVar84._8_4_ =
       (uint)bVar30 * ((uint)bVar25 * auVar103._8_4_ | (uint)!bVar25 * auVar79._8_4_) |
       (uint)!bVar30 * aiStack_178[0];
  auVar84._12_4_ =
       (uint)bVar40 * ((uint)bVar35 * auVar103._12_4_ | (uint)!bVar35 * auVar79._12_4_) |
       (uint)!bVar40 * aiStack_178[1];
  auVar84._16_4_ =
       (uint)bVar46 * (uint)((byte)(uVar72 >> 4) & 1) * auVar103._16_4_ |
       (uint)!bVar46 * aiStack_178[2];
  auVar84._20_4_ =
       (uint)bVar52 * (uint)((byte)(uVar72 >> 5) & 1) * auVar103._20_4_ |
       (uint)!bVar52 * aiStack_178[3];
  auVar84._24_4_ =
       (uint)bVar58 * (uint)((byte)(uVar72 >> 6) & 1) * auVar103._24_4_ | (uint)!bVar58 * iStack_168
  ;
  auVar84._28_4_ =
       (uint)bVar64 * (uint)(byte)(uVar72 >> 7) * auVar103._28_4_ | (uint)!bVar64 * iStack_164;
  auVar79 = vxorps_avx512vl(auVar122,auVar122);
  auVar85._4_4_ =
       (uint)bVar21 * (uint)((byte)(uVar72 >> 1) & 1) * auVar86._4_4_ | (uint)!bVar21 * iStack_15c;
  auVar85._0_4_ =
       (uint)(bVar74 & 1) * (uint)(bVar74 & 1) * auVar86._0_4_ |
       (uint)!(bool)(bVar74 & 1) * local_160;
  auVar85._8_4_ =
       (uint)bVar31 * (uint)((byte)(uVar72 >> 2) & 1) * auVar86._8_4_ | (uint)!bVar31 * iStack_158;
  auVar85._12_4_ =
       (uint)bVar41 * (uint)((byte)(uVar72 >> 3) & 1) * auVar86._12_4_ | (uint)!bVar41 * iStack_154;
  auVar85._16_4_ =
       (uint)bVar47 * (uint)((byte)(uVar72 >> 4) & 1) * auVar86._16_4_ | (uint)!bVar47 * iStack_150;
  auVar85._20_4_ =
       (uint)bVar53 * (uint)((byte)(uVar72 >> 5) & 1) * auVar86._20_4_ | (uint)!bVar53 * iStack_14c;
  auVar85._24_4_ =
       (uint)bVar59 * (uint)((byte)(uVar72 >> 6) & 1) * auVar86._24_4_ | (uint)!bVar59 * iStack_148;
  auVar85._28_4_ =
       (uint)bVar65 * (uint)(byte)(uVar72 >> 7) * auVar86._28_4_ | (uint)!bVar65 * iStack_144;
  auVar86._4_4_ =
       (uint)bVar22 * ((uint)bVar16 * auVar88._4_4_ | (uint)!bVar16 * auVar80._4_4_) |
       (uint)!bVar22 * iStack_13c;
  auVar86._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar88._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar80._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_140;
  auVar86._8_4_ =
       (uint)bVar32 * ((uint)bVar26 * auVar88._8_4_ | (uint)!bVar26 * auVar80._8_4_) |
       (uint)!bVar32 * iStack_138;
  auVar86._12_4_ =
       (uint)bVar42 * ((uint)bVar36 * auVar88._12_4_ | (uint)!bVar36 * auVar80._12_4_) |
       (uint)!bVar42 * iStack_134;
  auVar86._16_4_ =
       (uint)bVar48 * (uint)((byte)(uVar72 >> 4) & 1) * auVar88._16_4_ | (uint)!bVar48 * iStack_130;
  auVar86._20_4_ =
       (uint)bVar54 * (uint)((byte)(uVar72 >> 5) & 1) * auVar88._20_4_ | (uint)!bVar54 * iStack_12c;
  auVar86._24_4_ =
       (uint)bVar60 * (uint)((byte)(uVar72 >> 6) & 1) * auVar88._24_4_ | (uint)!bVar60 * iStack_128;
  auVar86._28_4_ =
       (uint)bVar66 * (uint)(byte)(uVar72 >> 7) * auVar88._28_4_ | (uint)!bVar66 * iStack_124;
  auVar103 = vsubps_avx512vl(auVar87,auVar84);
  auVar82 = vsubps_avx512vl(auVar89,auVar85);
  auVar88 = vsubps_avx512vl(auVar90,auVar86);
  auVar102 = vmulps_avx512vl(auVar82,auVar82);
  auVar102 = vfmadd231ps_avx512vl(auVar102,auVar103,auVar103);
  auVar100 = vfmadd231ps_avx512vl(auVar102,auVar88,auVar88);
  auVar102 = vsqrtps_avx(auVar100);
  auVar83._4_4_ = __real_38d1b717;
  auVar83._0_4_ = __real_38d1b717;
  auVar83._8_4_ = __real_38d1b717;
  auVar83._12_4_ = __real_38d1b717;
  auVar83._16_4_ = __real_38d1b717;
  auVar83._20_4_ = __real_38d1b717;
  auVar83._24_4_ = __real_38d1b717;
  auVar83._28_4_ = __real_38d1b717;
  uVar70 = vcmpps_avx512vl(auVar100,auVar83,1);
  auVar83 = vdivps_avx512vl(auVar103,auVar102);
  auVar100 = vdivps_avx512vl(auVar82,auVar102);
  auVar119._4_4_ = __real_3f800000;
  auVar119._0_4_ = __real_3f800000;
  auVar119._8_4_ = __real_3f800000;
  auVar119._12_4_ = __real_3f800000;
  auVar119._16_4_ = __real_3f800000;
  auVar119._20_4_ = __real_3f800000;
  auVar119._24_4_ = __real_3f800000;
  auVar119._28_4_ = __real_3f800000;
  auVar92 = vdivps_avx512vl(auVar88,auVar102);
  bVar12 = (byte)uVar70;
  bVar13 = (bool)((byte)(uVar70 >> 1) & 1);
  bVar17 = (bool)((byte)(uVar70 >> 2) & 1);
  bVar21 = (bool)((byte)(uVar70 >> 3) & 1);
  bVar25 = (bool)((byte)(uVar70 >> 4) & 1);
  bVar27 = (bool)((byte)(uVar70 >> 5) & 1);
  bVar29 = (bool)((byte)(uVar70 >> 6) & 1);
  bVar31 = SUB81(uVar70 >> 7,0);
  iVar75 = auVar79._0_4_;
  bVar14 = (bool)((byte)(uVar70 >> 1) & 1);
  iVar105 = auVar79._4_4_;
  bVar18 = (bool)((byte)(uVar70 >> 2) & 1);
  iVar106 = auVar79._8_4_;
  bVar22 = (bool)((byte)(uVar70 >> 3) & 1);
  iVar107 = auVar79._12_4_;
  bVar32 = SUB81(uVar70 >> 7,0);
  bVar15 = (bool)((byte)(uVar70 >> 1) & 1);
  bVar19 = (bool)((byte)(uVar70 >> 2) & 1);
  bVar23 = (bool)((byte)(uVar70 >> 3) & 1);
  auStack_1e0._0_4_ = auVar103._0_4_;
  auStack_1e0._4_4_ = auVar103._4_4_;
  auStack_1e0._8_4_ = auVar103._8_4_;
  auStack_1e0._12_4_ = auVar103._12_4_;
  auStack_1e0._16_4_ = auVar103._16_4_;
  auStack_1e0._20_4_ = auVar103._20_4_;
  auStack_1e0._24_4_ = auVar103._24_4_;
  auStack_1e0._28_4_ = auVar103._28_4_;
  bVar16 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar24 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar26 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar28 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar30 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar33 = SUB81(uVar72 >> 7,0);
  auStack_1e0._4_4_ =
       (uint)bVar16 * (bVar13 * __real_3f800000 | (uint)!bVar13 * auVar83._4_4_) |
       (uint)!bVar16 * auStack_1e0._4_4_;
  auStack_1e0._0_4_ =
       (uint)(bVar74 & 1) *
       ((bVar12 & 1) * __real_3f800000 | (uint)!(bool)(bVar12 & 1) * auVar83._0_4_) |
       (uint)!(bool)(bVar74 & 1) * auStack_1e0._0_4_;
  auStack_1e0._8_4_ =
       (uint)bVar20 * (bVar17 * __real_3f800000 | (uint)!bVar17 * auVar83._8_4_) |
       (uint)!bVar20 * auStack_1e0._8_4_;
  auStack_1e0._12_4_ =
       (uint)bVar24 * (bVar21 * __real_3f800000 | (uint)!bVar21 * auVar83._12_4_) |
       (uint)!bVar24 * auStack_1e0._12_4_;
  auStack_1e0._16_4_ =
       (uint)bVar26 * (bVar25 * __real_3f800000 | (uint)!bVar25 * auVar83._16_4_) |
       (uint)!bVar26 * auStack_1e0._16_4_;
  auStack_1e0._20_4_ =
       (uint)bVar28 * (bVar27 * __real_3f800000 | (uint)!bVar27 * auVar83._20_4_) |
       (uint)!bVar28 * auStack_1e0._20_4_;
  auStack_1e0._24_4_ =
       (uint)bVar30 * (bVar29 * __real_3f800000 | (uint)!bVar29 * auVar83._24_4_) |
       (uint)!bVar30 * auStack_1e0._24_4_;
  auStack_1e0._28_4_ =
       (uint)bVar33 * (bVar31 * __real_3f800000 | (uint)!bVar31 * auVar83._28_4_) |
       (uint)!bVar33 * auStack_1e0._28_4_;
  local_1c0._0_4_ = auVar82._0_4_;
  local_1c0._4_4_ = auVar82._4_4_;
  local_1c0._8_4_ = auVar82._8_4_;
  local_1c0._12_4_ = auVar82._12_4_;
  local_1c0._16_4_ = auVar82._16_4_;
  local_1c0._20_4_ = auVar82._20_4_;
  local_1c0._24_4_ = auVar82._24_4_;
  local_1c0._28_4_ = auVar82._28_4_;
  bVar13 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar20 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar21 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar24 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar25 = SUB81(uVar72 >> 7,0);
  local_1c0._4_4_ =
       (uint)bVar13 * ((uint)bVar14 * iVar105 | (uint)!bVar14 * auVar100._4_4_) |
       (uint)!bVar13 * local_1c0._4_4_;
  local_1c0._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar12 & 1) * iVar75 | (uint)!(bool)(bVar12 & 1) * auVar100._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_1c0._0_4_;
  local_1c0._8_4_ =
       (uint)bVar16 * ((uint)bVar18 * iVar106 | (uint)!bVar18 * auVar100._8_4_) |
       (uint)!bVar16 * local_1c0._8_4_;
  local_1c0._12_4_ =
       (uint)bVar17 * ((uint)bVar22 * iVar107 | (uint)!bVar22 * auVar100._12_4_) |
       (uint)!bVar17 * local_1c0._12_4_;
  local_1c0._16_4_ =
       (uint)bVar20 * (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar100._16_4_ |
       (uint)!bVar20 * local_1c0._16_4_;
  local_1c0._20_4_ =
       (uint)bVar21 * (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar100._20_4_ |
       (uint)!bVar21 * local_1c0._20_4_;
  local_1c0._24_4_ =
       (uint)bVar24 * (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar100._24_4_ |
       (uint)!bVar24 * local_1c0._24_4_;
  local_1c0._28_4_ =
       (uint)bVar25 *
       ((uint)bVar32 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar32 * auVar100._28_4_)
       | (uint)!bVar25 * local_1c0._28_4_;
  local_1a0._0_4_ = auVar88._0_4_;
  local_1a0._4_4_ = auVar88._4_4_;
  local_1a0._8_4_ = auVar88._8_4_;
  local_1a0._12_4_ = auVar88._12_4_;
  local_1a0._16_4_ = auVar88._16_4_;
  local_1a0._20_4_ = auVar88._20_4_;
  local_1a0._24_4_ = auVar88._24_4_;
  local_1a0._28_4_ = auVar88._28_4_;
  bVar13 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar14 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar21 = SUB81(uVar72 >> 7,0);
  local_1a0._4_4_ =
       (uint)bVar13 * ((uint)bVar15 * iVar105 | (uint)!bVar15 * auVar92._4_4_) |
       (uint)!bVar13 * local_1a0._4_4_;
  local_1a0._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar12 & 1) * iVar75 | (uint)!(bool)(bVar12 & 1) * auVar92._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_1a0._0_4_;
  local_1a0._8_4_ =
       (uint)bVar14 * ((uint)bVar19 * iVar106 | (uint)!bVar19 * auVar92._8_4_) |
       (uint)!bVar14 * local_1a0._8_4_;
  local_1a0._12_4_ =
       (uint)bVar16 * ((uint)bVar23 * iVar107 | (uint)!bVar23 * auVar92._12_4_) |
       (uint)!bVar16 * local_1a0._12_4_;
  local_1a0._16_4_ =
       (uint)bVar17 * (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar92._16_4_ |
       (uint)!bVar17 * local_1a0._16_4_;
  local_1a0._20_4_ =
       (uint)bVar18 * (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar92._20_4_ |
       (uint)!bVar18 * local_1a0._20_4_;
  local_1a0._24_4_ =
       (uint)bVar20 * (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar92._24_4_ |
       (uint)!bVar20 * local_1a0._24_4_;
  local_1a0._28_4_ =
       (uint)bVar21 * (uint)!SUB81(uVar70 >> 7,0) * auVar92._28_4_ |
       (uint)!bVar21 * local_1a0._28_4_;
  auVar96._0_4_ = (uint)(bVar12 & 1) * iVar75 | (uint)!(bool)(bVar12 & 1) * auVar102._0_4_;
  bVar13 = (bool)((byte)(uVar70 >> 1) & 1);
  auVar96._4_4_ = (uint)bVar13 * iVar105 | (uint)!bVar13 * auVar102._4_4_;
  bVar13 = (bool)((byte)(uVar70 >> 2) & 1);
  auVar96._8_4_ = (uint)bVar13 * iVar106 | (uint)!bVar13 * auVar102._8_4_;
  bVar13 = (bool)((byte)(uVar70 >> 3) & 1);
  auVar96._12_4_ = (uint)bVar13 * iVar107 | (uint)!bVar13 * auVar102._12_4_;
  auVar96._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar102._16_4_;
  auVar96._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar102._20_4_;
  auVar96._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar102._24_4_;
  bVar13 = SUB81(uVar70 >> 7,0);
  auVar96._28_4_ =
       (uint)bVar13 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar13 * auVar102._28_4_;
  auVar102 = vsubps_avx(auVar96,auVar94);
  auVar80 = vmulss_avx512f(ZEXT416((uint)(param_5 * param_6)),ZEXT416((uint)param_5));
  auVar103 = vbroadcastss_avx512vl(auVar80);
  auVar82 = vaddps_avx512vl(auVar91,auVar93);
  auVar102 = vfnmsub213ps_avx512vl(auVar102,auVar103,auVar95);
  auVar103 = vfmadd213ps_avx512vl(auVar82,auVar103,auVar119);
  auVar102 = vdivps_avx512vl(auVar102,auVar103);
  auVar103 = vmulps_avx512vl(auVar102,auStack_1e0);
  auVar82 = vmulps_avx512vl(auVar102,local_1c0);
  auVar83 = vmulps_avx512vl(auVar102,local_1a0);
  auVar98._0_4_ = fVar67 + auVar102._0_4_;
  auVar98._4_4_ = fVar5 + auVar102._4_4_;
  auVar98._8_4_ = fVar6 + auVar102._8_4_;
  auVar98._12_4_ = fVar1 + auVar102._12_4_;
  auVar98._16_4_ = fVar2 + auVar102._16_4_;
  auVar98._20_4_ = fVar3 + auVar102._20_4_;
  auVar98._24_4_ = fVar4 + auVar102._24_4_;
  auVar98._28_4_ = fVar109 + auVar102._28_4_;
  puVar11 = (uint *)(param_4 + lVar71);
  bVar13 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar14 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar15 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar16 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar17 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar18 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar19 = SUB81(uVar72 >> 7,0);
  *puVar11 = (uint)(bVar74 & 1) * (int)auVar98._0_4_ | (uint)!(bool)(bVar74 & 1) * *puVar11;
  puVar11[1] = (uint)bVar13 * (int)auVar98._4_4_ | (uint)!bVar13 * puVar11[1];
  puVar11[2] = (uint)bVar14 * (int)auVar98._8_4_ | (uint)!bVar14 * puVar11[2];
  puVar11[3] = (uint)bVar15 * (int)auVar98._12_4_ | (uint)!bVar15 * puVar11[3];
  puVar11[4] = (uint)bVar16 * (int)auVar98._16_4_ | (uint)!bVar16 * puVar11[4];
  puVar11[5] = (uint)bVar17 * (int)auVar98._20_4_ | (uint)!bVar17 * puVar11[5];
  puVar11[6] = (uint)bVar18 * (int)auVar98._24_4_ | (uint)!bVar18 * puVar11[6];
  puVar11[7] = (uint)bVar19 * (int)auVar98._28_4_ | (uint)!bVar19 * puVar11[7];
  auVar102 = vfmadd231ps_avx512vl(auVar87,auVar91,auVar103);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar99,uVar72,auVar102);
  auVar102 = vfmadd231ps_avx512vl(auVar89,auVar91,auVar82);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar99 | auVar97),uVar72,auVar102);
  auVar102 = vfmadd231ps_avx512vl(auVar90,auVar91,auVar83);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar99 | auVar104),uVar72,auVar102);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar99,uVar72,auVar91);
  auVar102 = vfnmadd213ps_avx512vl(auVar103,auVar93,auVar84);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar118,uVar72,auVar102);
  auVar102 = vfnmadd213ps_avx512vl(auVar82,auVar93,auVar85);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar98,uVar72,auVar102);
  auVar102 = vfnmadd213ps_avx512vl(auVar83,auVar93,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar95,uVar72,auVar102);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar99 | auVar97),uVar72,auVar93);
  return;
}

// ApplyXPBDSpringConstraintsWithDamping_avx512skx @ 14090b580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDamping_avx512skx
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,float param_7,float param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  int *piVar3;
  uint *puVar4;
  byte bVar5;
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
  ulonglong uVar61;
  undefined1 auVar62 [32];
  undefined4 uVar63;
  undefined4 uVar64;
  int iVar65;
  uint uVar66;
  longlong lVar67;
  ulonglong unaff_RBX;
  uint uVar68;
  ulonglong uVar69;
  uint uVar70;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar71;
  undefined1 auVar81 [16];
  int iVar72;
  int iVar123;
  int iVar125;
  float fVar131;
  float fVar133;
  float fVar135;
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar74 [16];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
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
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  float fVar73;
  float fVar124;
  float fVar126;
  int iVar128;
  float fVar129;
  float fVar137;
  undefined1 auVar110 [32];
  undefined1 auVar78 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar111 [32];
  undefined1 auVar79 [16];
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
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
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
  float fVar153;
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 auVar157 [16];
  undefined1 in_ZMM30 [64];
  undefined1 auVar158 [16];
  undefined1 in_ZMM31 [64];
  undefined1 local_340 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [8];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined4 auStack_2d8 [4];
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int iStack_2ac;
  int iStack_2a8;
  int iStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint local_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  undefined1 local_260 [32];
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
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
  undefined1 auVar80 [16];
  float fVar127;
  float fVar130;
  float fVar132;
  float fVar134;
  float fVar136;
  
  uVar66 = __real_0000000c;
  iVar65 = __real_3f800000;
  uVar64 = __real_38d1b717;
  uVar63 = __real_322bcc77;
  auVar158 = in_ZMM31._0_16_;
  auVar157 = in_ZMM30._0_16_;
  auVar81 = in_ZMM23._0_16_;
  auVar80 = in_ZMM29._0_16_;
  auVar79 = in_ZMM28._0_16_;
  auVar78 = in_ZMM27._0_16_;
  auVar77 = in_ZMM22._0_16_;
  auVar74 = in_ZMM26._0_16_;
  auVar76 = in_ZMM25._0_16_;
  auVar75 = in_ZMM24._0_16_;
  uVar68 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar68 = param_9;
  }
  if ((int)(uVar68 & 0xfffffff8) < 1) {
    uVar70 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar143 = param_6 * param_7 * param_6;
    local_1e0._4_4_ = fVar143;
    local_1e0._0_4_ = fVar143;
    local_1e0._8_4_ = fVar143;
    local_1e0._12_4_ = fVar143;
    local_1e0._16_4_ = fVar143;
    local_1e0._20_4_ = fVar143;
    local_1e0._24_4_ = fVar143;
    local_1e0._28_4_ = fVar143;
    local_200 = param_8 + param_8;
    fStack_1fc = local_200;
    fStack_1f8 = local_200;
    fStack_1f4 = local_200;
    fStack_1f0 = local_200;
    fStack_1ec = local_200;
    fStack_1e8 = local_200;
    fStack_1e4 = local_200;
    local_220 = param_7;
    fStack_21c = param_7;
    fStack_218 = param_7;
    fStack_214 = param_7;
    fStack_210 = param_7;
    fStack_20c = param_7;
    fStack_208 = param_7;
    fStack_204 = param_7;
    local_240 = param_6;
    fStack_23c = param_6;
    fStack_238 = param_6;
    fStack_234 = param_6;
    fStack_230 = param_6;
    fStack_22c = param_6;
    fStack_228 = param_6;
    fStack_224 = param_6;
    auVar82._4_4_ = __real_80000000;
    auVar82._0_4_ = __real_80000000;
    auVar82._8_4_ = __real_80000000;
    auVar82._12_4_ = __real_80000000;
    auVar82._16_4_ = __real_80000000;
    auVar82._20_4_ = __real_80000000;
    auVar82._24_4_ = __real_80000000;
    auVar82._28_4_ = __real_80000000;
    local_260 = vxorps_avx512vl(local_1e0,auVar82);
    uVar70 = 0;
    auVar82 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar158 = auVar82._0_16_;
    auVar83 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar77 = auVar83._0_16_;
    local_280 = __real_0000000c;
    uStack_27c = __real_0000000c;
    uStack_278 = __real_0000000c;
    uStack_274 = __real_0000000c;
    uStack_270 = __real_0000000c;
    uStack_26c = __real_0000000c;
    uStack_268 = __real_0000000c;
    uStack_264 = __real_0000000c;
    local_2a0 = __real_38d1b717;
    uStack_29c = __real_38d1b717;
    uStack_298 = __real_38d1b717;
    uStack_294 = __real_38d1b717;
    uStack_290 = __real_38d1b717;
    uStack_28c = __real_38d1b717;
    uStack_288 = __real_38d1b717;
    uStack_284 = __real_38d1b717;
    local_2c0 = __real_3f800000;
    iStack_2bc = __real_3f800000;
    iStack_2b8 = __real_3f800000;
    iStack_2b4 = __real_3f800000;
    iStack_2b0 = __real_3f800000;
    iStack_2ac = __real_3f800000;
    iStack_2a8 = __real_3f800000;
    iStack_2a4 = __real_3f800000;
    auStack_2d8[0] = __real_322bcc77;
    auStack_2d8[1] = __real_322bcc77;
    auStack_2d8[2] = __real_322bcc77;
    auStack_2d8[3] = __real_322bcc77;
    uStack_2c8 = __real_322bcc77;
    uStack_2c4 = __real_322bcc77;
    uVar69 = 0;
    auVar110._4_4_ = __real_3f800000;
    auVar110._0_4_ = __real_3f800000;
    auVar110._8_4_ = __real_3f800000;
    auVar110._12_4_ = __real_3f800000;
    auVar110._16_4_ = __real_3f800000;
    auVar110._20_4_ = __real_3f800000;
    auVar110._24_4_ = __real_3f800000;
    auVar110._28_4_ = __real_3f800000;
    auVar74 = vxorps_avx512vl(auVar74,auVar74);
    do {
      auVar84 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_3 + uVar69 * 2));
      auVar86 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar69 * 2);
      auVar85 = vmovdqa64_avx512vl(auVar84);
      auVar85 = vpermt2d_avx512vl(auVar85,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar86);
      auVar86 = vpermt2d_avx512vl(auVar84,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar86);
      auVar87 = vpslld_avx512vl(auVar85,4);
      auVar80 = auVar87._0_16_;
      auVar88 = vpslld_avx512vl(auVar86,4);
      auVar79 = auVar88._0_16_;
      auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      local_1c0 = auVar88 | auVar82;
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_9));
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      auVar112._4_4_ = uVar66;
      auVar112._0_4_ = uVar66;
      auVar112._8_4_ = uVar66;
      auVar112._12_4_ = uVar66;
      auVar112._16_4_ = uVar66;
      auVar112._20_4_ = uVar66;
      auVar112._24_4_ = uVar66;
      auVar112._28_4_ = uVar66;
      auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      fVar145 = auVar94._0_4_;
      fVar148 = auVar94._4_4_;
      fVar151 = auVar94._8_4_;
      fVar127 = auVar94._12_4_;
      fVar130 = auVar94._16_4_;
      fVar132 = auVar94._20_4_;
      fVar134 = auVar94._24_4_;
      fVar136 = auVar94._28_4_;
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar69));
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar84 = vpslld_avx512vl(auVar85,2);
      auVar85 = vpslld_avx2(auVar85,3);
      auVar97 = vgatherdps_avx512vl(param_2[(longlong)param_1]);
      auVar84 = vpaddd_avx512vl(auVar85,auVar84);
      vpaddd_avx512vl(auVar84,auVar82);
      auVar85 = vpaddd_avx512vl(auVar86,auVar86);
      vpaddd_avx512vl(auVar86,auVar85);
      auVar85 = vpslld_avx512vl(auVar86,2);
      auVar86 = vpslld_avx512vl(auVar86,3);
      vpaddd_avx512vl(auVar84,auVar83);
      auVar98 = vgatherdps_avx512vl(param_2[(longlong)param_1]);
      auVar84 = vpaddd_avx512vl(auVar86,auVar85);
      unaff_RBX = uVar69 & 0xffffffff;
      auVar86 = *(undefined1 (*) [32])(param_4 + unaff_RBX);
      vpaddd_avx512vl(auVar84,auVar82);
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 + param_5));
      vpaddd_avx512vl(auVar84,auVar83);
      auVar100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 + (longlong)auStack_2d8));
      auVar101 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
      auVar75 = auVar101._0_16_;
      in_ZMM24 = ZEXT3264(auVar101);
      auVar102 = vgatherdps_avx512vl(*param_2);
      auVar103 = vsubps_avx512vl(auVar89,auVar90);
      auVar104 = vsubps_avx512vl(auVar91,auVar92);
      auVar84._4_4_ = uVar63;
      auVar84._0_4_ = uVar63;
      auVar84._8_4_ = uVar63;
      auVar84._12_4_ = uVar63;
      auVar84._16_4_ = uVar63;
      auVar84._20_4_ = uVar63;
      auVar84._24_4_ = uVar63;
      auVar84._28_4_ = uVar63;
      uVar61 = vcmpps_avx512vl(auVar86,auVar84,1);
      auVar84 = vdivps_avx512vl(auVar110,auVar86);
      auVar105 = vsubps_avx512vl(auVar93,auVar95);
      auVar106 = vaddps_avx512vl(auVar94,auVar96);
      auVar76 = auVar106._0_16_;
      auVar108._4_4_ = param_7;
      auVar108._0_4_ = param_7;
      auVar108._8_4_ = param_7;
      auVar108._12_4_ = param_7;
      auVar108._16_4_ = param_7;
      auVar108._20_4_ = param_7;
      auVar108._24_4_ = param_7;
      auVar108._28_4_ = param_7;
      auVar85 = vdivps_avx512vl(auVar108,auVar106);
      auVar85 = vsqrtps_avx512vl(auVar85);
      auVar109._4_4_ = local_200;
      auVar109._0_4_ = local_200;
      auVar109._8_4_ = local_200;
      auVar109._12_4_ = local_200;
      auVar109._16_4_ = local_200;
      auVar109._20_4_ = local_200;
      auVar109._24_4_ = local_200;
      auVar109._28_4_ = local_200;
      auVar85 = vmulps_avx512vl(auVar85,auVar109);
      auVar84 = vmulps_avx512vl(auVar85,auVar84);
      bVar6 = (bool)((byte)uVar61 & 1);
      auVar107._0_4_ = (uint)bVar6 * auVar85._0_4_ | (uint)!bVar6 * auVar84._0_4_;
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      auVar107._4_4_ = (uint)bVar6 * auVar85._4_4_ | (uint)!bVar6 * auVar84._4_4_;
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      auVar107._8_4_ = (uint)bVar6 * auVar85._8_4_ | (uint)!bVar6 * auVar84._8_4_;
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      auVar107._12_4_ = (uint)bVar6 * auVar85._12_4_ | (uint)!bVar6 * auVar84._12_4_;
      bVar6 = (bool)((byte)(uVar61 >> 4) & 1);
      auVar107._16_4_ = (uint)bVar6 * auVar85._16_4_ | (uint)!bVar6 * auVar84._16_4_;
      bVar6 = (bool)((byte)(uVar61 >> 5) & 1);
      auVar107._20_4_ = (uint)bVar6 * auVar85._20_4_ | (uint)!bVar6 * auVar84._20_4_;
      bVar6 = (bool)((byte)(uVar61 >> 6) & 1);
      auVar107._24_4_ = (uint)bVar6 * auVar85._24_4_ | (uint)!bVar6 * auVar84._24_4_;
      bVar6 = SUB81(uVar61 >> 7,0);
      auVar107._28_4_ = (uint)bVar6 * auVar85._28_4_ | (uint)!bVar6 * auVar84._28_4_;
      auVar84 = vmulps_avx512vl(auVar104,auVar104);
      auVar84 = vfmadd231ps_avx512vl(auVar84,auVar103,auVar103);
      auVar84 = vfmadd231ps_avx512vl(auVar84,auVar105,auVar105);
      auVar85._4_4_ = uVar64;
      auVar85._0_4_ = uVar64;
      auVar85._8_4_ = uVar64;
      auVar85._12_4_ = uVar64;
      auVar85._16_4_ = uVar64;
      auVar85._20_4_ = uVar64;
      auVar85._24_4_ = uVar64;
      auVar85._28_4_ = uVar64;
      uVar61 = vcmpps_avx512vl(auVar84,auVar85,1);
      auVar84 = vsqrtps_avx512vl(auVar84);
      auVar85 = vdivps_avx512vl(auVar103,auVar84);
      auVar108 = vdivps_avx512vl(auVar104,auVar84);
      auVar109 = vdivps_avx512vl(auVar105,auVar84);
      bVar71 = (byte)uVar61;
      iVar72 = auVar74._0_4_;
      auVar81._0_4_ = (uint)(bVar71 & 1) * iVar72 | (uint)!(bool)(bVar71 & 1) * auVar84._0_4_;
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      iVar123 = auVar74._4_4_;
      auVar81._4_4_ = (uint)bVar6 * iVar123 | (uint)!bVar6 * auVar84._4_4_;
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      iVar125 = auVar74._8_4_;
      auVar81._8_4_ = (uint)bVar6 * iVar125 | (uint)!bVar6 * auVar84._8_4_;
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      iVar128 = auVar74._12_4_;
      auVar81._12_4_ = (uint)bVar6 * iVar128 | (uint)!bVar6 * auVar84._12_4_;
      auVar103._16_4_ = (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar84._16_4_;
      auVar103._0_16_ = auVar81;
      auVar103._20_4_ = (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar84._20_4_;
      auVar103._24_4_ = (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar84._24_4_;
      bVar6 = SUB81(uVar61 >> 7,0);
      auVar103._28_4_ =
           (uint)bVar6 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar6 * auVar84._28_4_;
      auVar84 = vsubps_avx512vl(auVar103,auVar86);
      auVar86 = vsubps_avx(auVar89,auVar97);
      auVar86 = vsubps_avx512vl(auVar86,auVar90);
      auVar97 = vaddps_avx512vl(auVar86,auVar98);
      auVar86 = vsubps_avx(auVar91,auVar99);
      auVar86 = vsubps_avx(auVar86,auVar92);
      auVar86 = vaddps_avx512vl(auVar86,auVar101);
      auVar98 = vsubps_avx512vl(auVar93,auVar100);
      auVar98 = vsubps_avx512vl(auVar98,auVar95);
      auVar98 = vaddps_avx512vl(auVar98,auVar102);
      fVar73 = (float)((uint)(bVar71 & 1) * iVar65 | (uint)!(bool)(bVar71 & 1) * auVar85._0_4_);
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      fVar124 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._4_4_);
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      fVar126 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._8_4_);
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      fVar129 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._12_4_);
      bVar6 = (bool)((byte)(uVar61 >> 4) & 1);
      fVar131 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._16_4_);
      bVar6 = (bool)((byte)(uVar61 >> 5) & 1);
      fVar133 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._20_4_);
      bVar6 = (bool)((byte)(uVar61 >> 6) & 1);
      fVar135 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._24_4_);
      bVar6 = SUB81(uVar61 >> 7,0);
      fVar137 = (float)((uint)bVar6 * iVar65 | (uint)!bVar6 * auVar85._28_4_);
      auVar99._0_4_ = (uint)(bVar71 & 1) * iVar72 | (uint)!(bool)(bVar71 & 1) * auVar108._0_4_;
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      auVar99._4_4_ = (uint)bVar6 * iVar123 | (uint)!bVar6 * auVar108._4_4_;
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      auVar99._8_4_ = (uint)bVar6 * iVar125 | (uint)!bVar6 * auVar108._8_4_;
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      auVar99._12_4_ = (uint)bVar6 * iVar128 | (uint)!bVar6 * auVar108._12_4_;
      auVar99._16_4_ = (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar108._16_4_;
      auVar99._20_4_ = (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar108._20_4_;
      auVar99._24_4_ = (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar108._24_4_;
      auVar99._28_4_ = (uint)!SUB81(uVar61 >> 7,0) * auVar108._28_4_;
      auVar86 = vmulps_avx512vl(auVar99,auVar86);
      auVar101._0_4_ = fVar73 * auVar97._0_4_ + auVar86._0_4_;
      auVar101._4_4_ = fVar124 * auVar97._4_4_ + auVar86._4_4_;
      auVar101._8_4_ = fVar126 * auVar97._8_4_ + auVar86._8_4_;
      auVar101._12_4_ = fVar129 * auVar97._12_4_ + auVar86._12_4_;
      auVar101._16_4_ = fVar131 * auVar97._16_4_ + auVar86._16_4_;
      auVar101._20_4_ = fVar133 * auVar97._20_4_ + auVar86._20_4_;
      auVar101._24_4_ = fVar135 * auVar97._24_4_ + auVar86._24_4_;
      auVar101._28_4_ = fVar137 * auVar97._28_4_ + auVar86._28_4_;
      auVar78._0_4_ = (uint)(bVar71 & 1) * iVar72 | (uint)!(bool)(bVar71 & 1) * auVar109._0_4_;
      bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
      auVar78._4_4_ = (uint)bVar6 * iVar123 | (uint)!bVar6 * auVar109._4_4_;
      bVar6 = (bool)((byte)(uVar61 >> 2) & 1);
      auVar78._8_4_ = (uint)bVar6 * iVar125 | (uint)!bVar6 * auVar109._8_4_;
      bVar6 = (bool)((byte)(uVar61 >> 3) & 1);
      auVar78._12_4_ = (uint)bVar6 * iVar128 | (uint)!bVar6 * auVar109._12_4_;
      auVar100._16_4_ = (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar109._16_4_;
      auVar100._0_16_ = auVar78;
      auVar100._20_4_ = (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar109._20_4_;
      auVar100._24_4_ = (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar109._24_4_;
      bVar6 = SUB81(uVar61 >> 7,0);
      auVar100._28_4_ =
           (uint)bVar6 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar6 * auVar109._28_4_
      ;
      auVar85 = vfmadd231ps_avx512vl(auVar101,auVar100,auVar98);
      auVar86 = *(undefined1 (*) [32])(param_5 + unaff_RBX);
      auVar97._4_4_ = param_6;
      auVar97._0_4_ = param_6;
      auVar97._8_4_ = param_6;
      auVar97._12_4_ = param_6;
      auVar97._16_4_ = param_6;
      auVar97._20_4_ = param_6;
      auVar97._24_4_ = param_6;
      auVar97._28_4_ = param_6;
      auVar97 = vmulps_avx512vl(auVar107,auVar97);
      auVar84 = vfmsub132ps_avx512vl(auVar84,auVar86,local_260);
      auVar84 = vfnmadd213ps_avx512vl(auVar85,auVar97,auVar84);
      auVar102._0_4_ = auVar97._0_4_ + fVar143;
      auVar102._4_4_ = auVar97._4_4_ + fVar143;
      auVar102._8_4_ = auVar97._8_4_ + fVar143;
      auVar102._12_4_ = auVar97._12_4_ + fVar143;
      auVar102._16_4_ = auVar97._16_4_ + fVar143;
      auVar102._20_4_ = auVar97._20_4_ + fVar143;
      auVar102._24_4_ = auVar97._24_4_ + fVar143;
      auVar102._28_4_ = auVar97._28_4_ + fVar143;
      auVar85 = vfmadd213ps_avx512vl(auVar102,auVar106,auVar110);
      auVar84 = vdivps_avx(auVar84,auVar85);
      pfVar1 = (float *)(param_5 + unaff_RBX);
      *pfVar1 = auVar86._0_4_ + auVar84._0_4_;
      pfVar1[1] = auVar86._4_4_ + auVar84._4_4_;
      pfVar1[2] = auVar86._8_4_ + auVar84._8_4_;
      pfVar1[3] = auVar86._12_4_ + auVar84._12_4_;
      pfVar1[4] = auVar86._16_4_ + auVar84._16_4_;
      pfVar1[5] = auVar86._20_4_ + auVar84._20_4_;
      pfVar1[6] = auVar86._24_4_ + auVar84._24_4_;
      pfVar1[7] = auVar86._28_4_ + auVar84._28_4_;
      auVar98._0_4_ = fVar73 * auVar84._0_4_;
      auVar98._4_4_ = fVar124 * auVar84._4_4_;
      auVar98._8_4_ = fVar126 * auVar84._8_4_;
      auVar98._12_4_ = fVar129 * auVar84._12_4_;
      auVar98._16_4_ = fVar131 * auVar84._16_4_;
      auVar98._20_4_ = fVar133 * auVar84._20_4_;
      auVar98._24_4_ = fVar135 * auVar84._24_4_;
      auVar98._28_4_ = fVar137 * auVar84._28_4_;
      auVar104._0_4_ = fVar145 * auVar98._0_4_ + auVar89._0_4_;
      auVar104._4_4_ = fVar148 * auVar98._4_4_ + auVar89._4_4_;
      auVar104._8_4_ = fVar151 * auVar98._8_4_ + auVar89._8_4_;
      auVar104._12_4_ = fVar127 * auVar98._12_4_ + auVar89._12_4_;
      auVar104._16_4_ = fVar130 * auVar98._16_4_ + auVar89._16_4_;
      auVar104._20_4_ = fVar132 * auVar98._20_4_ + auVar89._20_4_;
      auVar104._24_4_ = fVar134 * auVar98._24_4_ + auVar89._24_4_;
      auVar104._28_4_ = fVar136 * auVar98._28_4_ + auVar89._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar96,0xffff,auVar104);
      auVar86 = vmulps_avx512vl(auVar99,auVar84);
      auVar105._0_4_ = fVar145 * auVar86._0_4_ + auVar91._0_4_;
      auVar105._4_4_ = fVar148 * auVar86._4_4_ + auVar91._4_4_;
      auVar105._8_4_ = fVar151 * auVar86._8_4_ + auVar91._8_4_;
      auVar105._12_4_ = fVar127 * auVar86._12_4_ + auVar91._12_4_;
      auVar105._16_4_ = fVar130 * auVar86._16_4_ + auVar91._16_4_;
      auVar105._20_4_ = fVar132 * auVar86._20_4_ + auVar91._20_4_;
      auVar105._24_4_ = fVar134 * auVar86._24_4_ + auVar91._24_4_;
      auVar105._28_4_ = fVar136 * auVar86._28_4_ + auVar91._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar82),0xffff,auVar105);
      auVar84 = vmulps_avx512vl(auVar100,auVar84);
      auVar89._0_4_ = fVar145 * auVar84._0_4_ + auVar93._0_4_;
      auVar89._4_4_ = fVar148 * auVar84._4_4_ + auVar93._4_4_;
      auVar89._8_4_ = fVar151 * auVar84._8_4_ + auVar93._8_4_;
      auVar89._12_4_ = fVar127 * auVar84._12_4_ + auVar93._12_4_;
      auVar89._16_4_ = fVar130 * auVar84._16_4_ + auVar93._16_4_;
      auVar89._20_4_ = fVar132 * auVar84._20_4_ + auVar93._20_4_;
      auVar89._24_4_ = fVar134 * auVar84._24_4_ + auVar93._24_4_;
      auVar89._28_4_ = fVar136 * auVar84._28_4_ + auVar93._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar83),0xffff,auVar89);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar112),0xffff,auVar94);
      auVar85 = vfnmadd231ps_avx512vl(auVar90,auVar96,auVar98);
      in_ZMM30 = ZEXT3264(auVar85);
      auVar157 = auVar85._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar105,0xffff,auVar85);
      auVar87._0_4_ = -(auVar96._0_4_ * auVar86._0_4_) + auVar92._0_4_;
      auVar87._4_4_ = -(auVar96._4_4_ * auVar86._4_4_) + auVar92._4_4_;
      auVar87._8_4_ = -(auVar96._8_4_ * auVar86._8_4_) + auVar92._8_4_;
      auVar87._12_4_ = -(auVar96._12_4_ * auVar86._12_4_) + auVar92._12_4_;
      auVar87._16_4_ = -(auVar96._16_4_ * auVar86._16_4_) + auVar92._16_4_;
      auVar87._20_4_ = -(auVar96._20_4_ * auVar86._20_4_) + auVar92._20_4_;
      auVar87._24_4_ = -(auVar96._24_4_ * auVar86._24_4_) + auVar92._24_4_;
      auVar87._28_4_ = -(auVar96._28_4_ * auVar86._28_4_) + auVar92._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar88 | auVar82),0xffff,auVar87);
      auVar86._0_4_ = -(auVar96._0_4_ * auVar84._0_4_) + auVar95._0_4_;
      auVar86._4_4_ = -(auVar96._4_4_ * auVar84._4_4_) + auVar95._4_4_;
      auVar86._8_4_ = -(auVar96._8_4_ * auVar84._8_4_) + auVar95._8_4_;
      auVar86._12_4_ = -(auVar96._12_4_ * auVar84._12_4_) + auVar95._12_4_;
      auVar86._16_4_ = -(auVar96._16_4_ * auVar84._16_4_) + auVar95._16_4_;
      auVar86._20_4_ = -(auVar96._20_4_ * auVar84._20_4_) + auVar95._20_4_;
      auVar86._24_4_ = -(auVar96._24_4_ * auVar84._24_4_) + auVar95._24_4_;
      auVar86._28_4_ = -(auVar96._28_4_ * auVar84._28_4_) + auVar95._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar88 | auVar83),0xffff,auVar86);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar88 | auVar112),0xffff,auVar96);
      uVar69 = uVar69 + 0x20;
      uVar70 = uVar70 + 8;
    } while ((int)uVar70 < (int)(uVar68 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar70) {
      return;
    }
  }
  auVar82 = vpbroadcastd_avx512vl();
  auVar82 = vpor_avx2(auVar82,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar110 = vpbroadcastd_avx512vl();
  uVar69 = vpcmpgtd_avx512vl(auVar110,auVar82);
  pauVar2 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar70 * 8);
  bVar71 = (byte)uVar69;
  if (bVar71 == 0xff) {
    auVar83 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                ,*pauVar2,pauVar2[1]);
    auVar88 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                ,*pauVar2,pauVar2[1]);
  }
  else {
    auVar82 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar2 + (longlong)param_1));
    auVar83._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar82._4_4_;
    auVar83._0_4_ = (uint)(bVar71 & 1) * auVar82._0_4_;
    auVar83._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar82._8_4_;
    auVar83._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar82._12_4_;
    auVar83._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar82._16_4_;
    auVar83._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar82._20_4_;
    auVar83._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar82._24_4_;
    auVar83._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar82._28_4_;
    auVar82 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar2 + (longlong)param_2));
    auVar88._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar82._4_4_;
    auVar88._0_4_ = (uint)(bVar71 & 1) * auVar82._0_4_;
    auVar88._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar82._8_4_;
    auVar88._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar82._12_4_;
    auVar88._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar82._16_4_;
    auVar88._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar82._20_4_;
    auVar88._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar82._24_4_;
    auVar88._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar82._28_4_;
  }
  auVar108 = vpslld_avx2(auVar83,4);
  auVar140._4_4_ = __real_00000004;
  auVar140._0_4_ = __real_00000004;
  auVar140._8_4_ = __real_00000004;
  auVar140._12_4_ = __real_00000004;
  auVar140._16_4_ = __real_00000004;
  auVar140._20_4_ = __real_00000004;
  auVar140._24_4_ = __real_00000004;
  auVar140._28_4_ = __real_00000004;
  auVar75 = vxorps_avx512vl(auVar75,auVar75);
  auVar82 = vgatherdps_avx512vl(*param_1);
  bVar6 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar17 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar27 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar76 = vxorps_avx512vl(auVar76,auVar76);
  auVar110 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_2d8));
  bVar7 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar18 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar28 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar141._4_4_ = __real_00000008;
  auVar141._0_4_ = __real_00000008;
  auVar141._8_4_ = __real_00000008;
  auVar141._12_4_ = __real_00000008;
  auVar141._16_4_ = __real_00000008;
  auVar141._20_4_ = __real_00000008;
  auVar141._24_4_ = __real_00000008;
  auVar141._28_4_ = __real_00000008;
  auVar74 = vxorps_avx512vl(auVar74,auVar74);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar8 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar19 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar29 = (bool)((byte)(uVar69 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar77 = vxorps_avx512vl(auVar77,auVar77);
  auVar84 = vgatherdps_avx512vl(*param_1);
  auVar111._0_4_ = (uint)(bVar71 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar77._0_4_;
  bVar9 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar111._4_4_ = (uint)bVar9 * auVar84._4_4_ | (uint)!bVar9 * auVar77._4_4_;
  bVar9 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar111._8_4_ = (uint)bVar9 * auVar84._8_4_ | (uint)!bVar9 * auVar77._8_4_;
  bVar9 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar111._12_4_ = (uint)bVar9 * auVar84._12_4_ | (uint)!bVar9 * auVar77._12_4_;
  auVar111._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar84._16_4_;
  auVar111._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar84._20_4_;
  auVar111._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar84._24_4_;
  auVar111._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar84._28_4_;
  vpslld_avx512vl(auVar88,4);
  auVar78 = vxorps_avx512vl(auVar78,auVar78);
  auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
  bVar9 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar30 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar77 = vxorps_avx512vl(auVar79,auVar79);
  auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)param_2));
  auVar79._0_4_ = (uint)(bVar71 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar77._0_4_;
  bVar10 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar79._4_4_ = (uint)bVar10 * auVar85._4_4_ | (uint)!bVar10 * auVar77._4_4_;
  bVar10 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar79._8_4_ = (uint)bVar10 * auVar85._8_4_ | (uint)!bVar10 * auVar77._8_4_;
  bVar10 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar79._12_4_ = (uint)bVar10 * auVar85._12_4_ | (uint)!bVar10 * auVar77._12_4_;
  auVar77 = vxorps_avx512vl(auVar80,auVar80);
  auVar112 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  auVar80._0_4_ = (uint)(bVar71 & 1) * auVar112._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar77._0_4_;
  bVar10 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar80._4_4_ = (uint)bVar10 * auVar112._4_4_ | (uint)!bVar10 * auVar77._4_4_;
  bVar10 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar80._8_4_ = (uint)bVar10 * auVar112._8_4_ | (uint)!bVar10 * auVar77._8_4_;
  bVar10 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar80._12_4_ = (uint)bVar10 * auVar112._12_4_ | (uint)!bVar10 * auVar77._12_4_;
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_2d8));
  auVar113._0_4_ = (uint)(bVar71 & 1) * auVar97._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar10 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar113._4_4_ = (uint)bVar10 * auVar97._4_4_ | (uint)!bVar10 * auVar81._4_4_;
  bVar10 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar113._8_4_ = (uint)bVar10 * auVar97._8_4_ | (uint)!bVar10 * auVar81._8_4_;
  bVar10 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar113._12_4_ = (uint)bVar10 * auVar97._12_4_ | (uint)!bVar10 * auVar81._12_4_;
  auVar113._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar97._16_4_;
  auVar113._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar97._20_4_;
  auVar113._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar97._24_4_;
  auVar113._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar97._28_4_;
  bVar10 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar31 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar37 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar43 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar49 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar55 = SUB81(uVar69 >> 7,0);
  bVar11 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar32 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar38 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar44 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar50 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar56 = SUB81(uVar69 >> 7,0);
  bVar12 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar23 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar39 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar45 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar51 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar57 = SUB81(uVar69 >> 7,0);
  bVar13 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar40 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar46 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar52 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar58 = SUB81(uVar69 >> 7,0);
  bVar14 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar25 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar35 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar41 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar47 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar53 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar59 = SUB81(uVar69 >> 7,0);
  bVar15 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar26 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar36 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar42 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar48 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar54 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar60 = SUB81(uVar69 >> 7,0);
  auVar97 = vpaddd_avx512vl(auVar83,auVar83);
  vpaddd_avx512vl(auVar83,auVar97);
  auVar81 = vxorps_avx512vl(auVar79,auVar79);
  auVar97 = vgatherdps_avx512vl(param_2[(longlong)pauVar2]);
  auVar114._0_4_ = (uint)(bVar71 & 1) * auVar97._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar16 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar114._4_4_ = (uint)bVar16 * auVar97._4_4_ | (uint)!bVar16 * auVar81._4_4_;
  bVar16 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar114._8_4_ = (uint)bVar16 * auVar97._8_4_ | (uint)!bVar16 * auVar81._8_4_;
  bVar16 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar114._12_4_ = (uint)bVar16 * auVar97._12_4_ | (uint)!bVar16 * auVar81._12_4_;
  auVar114._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar97._16_4_;
  auVar114._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar97._20_4_;
  auVar114._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar97._24_4_;
  auVar114._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar97._28_4_;
  auVar97 = vpslld_avx512vl(auVar83,2);
  auVar83 = vpslld_avx2(auVar83,3);
  auVar83 = vpaddd_avx512vl(auVar83,auVar97);
  vpaddd_avx512vl(auVar83,auVar140);
  auVar81 = vxorps_avx512vl(auVar80,auVar80);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 + (longlong)pauVar2));
  auVar115._0_4_ = (uint)(bVar71 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar16 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar115._4_4_ = (uint)bVar16 * auVar83._4_4_ | (uint)!bVar16 * auVar81._4_4_;
  bVar16 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar115._8_4_ = (uint)bVar16 * auVar83._8_4_ | (uint)!bVar16 * auVar81._8_4_;
  bVar16 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar115._12_4_ = (uint)bVar16 * auVar83._12_4_ | (uint)!bVar16 * auVar81._12_4_;
  auVar115._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
  auVar115._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
  auVar115._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
  auVar115._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar83._28_4_;
  auVar81 = vxorps_avx512vl(auVar157,auVar157);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 + param_5));
  auVar116._0_4_ = (uint)(bVar71 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar16 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar116._4_4_ = (uint)bVar16 * auVar83._4_4_ | (uint)!bVar16 * auVar81._4_4_;
  bVar16 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar116._8_4_ = (uint)bVar16 * auVar83._8_4_ | (uint)!bVar16 * auVar81._8_4_;
  bVar16 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar116._12_4_ = (uint)bVar16 * auVar83._12_4_ | (uint)!bVar16 * auVar81._12_4_;
  auVar116._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
  auVar116._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
  auVar116._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
  auVar116._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar83._28_4_;
  auVar90._4_4_ = auVar88._4_4_ * 2;
  auVar90._0_4_ = auVar88._0_4_ * 2;
  auVar90._8_4_ = auVar88._8_4_ * 2;
  auVar90._12_4_ = auVar88._12_4_ * 2;
  auVar90._16_4_ = auVar88._16_4_ * 2;
  auVar90._20_4_ = auVar88._20_4_ * 2;
  auVar90._24_4_ = auVar88._24_4_ * 2;
  auVar90._28_4_ = auVar88._28_4_ * 2;
  vpaddd_avx512vl(auVar88,auVar90);
  auVar83 = vgatherdps_avx512vl(param_2[(longlong)pauVar2]);
  auVar117._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar83._4_4_;
  auVar117._0_4_ = (uint)(bVar71 & 1) * auVar83._0_4_;
  auVar117._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar83._8_4_;
  auVar117._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar83._12_4_;
  auVar117._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
  auVar117._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
  auVar117._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
  auVar117._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar83._28_4_;
  auVar83 = vpslld_avx512vl(auVar88,2);
  auVar97 = vpslld_avx2(auVar88,3);
  auVar83 = vpaddd_avx512vl(auVar97,auVar83);
  vpaddd_avx512vl(auVar83,auVar140);
  auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
  auVar118._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar97._4_4_;
  auVar118._0_4_ = (uint)(bVar71 & 1) * auVar97._0_4_;
  auVar118._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar97._8_4_;
  auVar118._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar97._12_4_;
  auVar118._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar97._16_4_;
  auVar118._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar97._20_4_;
  auVar118._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar97._24_4_;
  auVar118._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar97._28_4_;
  vpaddd_avx512vl(auVar83,auVar141);
  auVar81 = vxorps_avx512vl(auVar158,auVar158);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
  auVar119._0_4_ = (uint)(bVar71 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar81._0_4_;
  bVar16 = (bool)((byte)(uVar69 >> 1) & 1);
  auVar119._4_4_ = (uint)bVar16 * auVar83._4_4_ | (uint)!bVar16 * auVar81._4_4_;
  bVar16 = (bool)((byte)(uVar69 >> 2) & 1);
  auVar119._8_4_ = (uint)bVar16 * auVar83._8_4_ | (uint)!bVar16 * auVar81._8_4_;
  bVar16 = (bool)((byte)(uVar69 >> 3) & 1);
  auVar119._12_4_ = (uint)bVar16 * auVar83._12_4_ | (uint)!bVar16 * auVar81._12_4_;
  auVar119._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
  auVar119._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
  auVar119._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
  auVar119._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar83._28_4_;
  auVar96._4_4_ =
       (uint)bVar10 * ((uint)bVar6 * auVar82._4_4_ | (uint)!bVar6 * auVar75._4_4_) |
       (uint)!bVar10 * iStack_13c;
  auVar96._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar71 & 1) * auVar82._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar75._0_4_) |
       (uint)!(bool)(bVar71 & 1) * local_140;
  auVar96._8_4_ =
       (uint)bVar21 * ((uint)bVar17 * auVar82._8_4_ | (uint)!bVar17 * auVar75._8_4_) |
       (uint)!bVar21 * iStack_138;
  auVar96._12_4_ =
       (uint)bVar31 * ((uint)bVar27 * auVar82._12_4_ | (uint)!bVar27 * auVar75._12_4_) |
       (uint)!bVar31 * iStack_134;
  auVar96._16_4_ =
       (uint)bVar37 * (uint)((byte)(uVar69 >> 4) & 1) * auVar82._16_4_ | (uint)!bVar37 * iStack_130;
  auVar96._20_4_ =
       (uint)bVar43 * (uint)((byte)(uVar69 >> 5) & 1) * auVar82._20_4_ | (uint)!bVar43 * iStack_12c;
  auVar96._24_4_ =
       (uint)bVar49 * (uint)((byte)(uVar69 >> 6) & 1) * auVar82._24_4_ | (uint)!bVar49 * iStack_128;
  auVar96._28_4_ =
       (uint)bVar55 * (uint)(byte)(uVar69 >> 7) * auVar82._28_4_ | (uint)!bVar55 * iStack_124;
  auVar106._4_4_ =
       (uint)bVar11 * ((uint)bVar7 * auVar110._4_4_ | (uint)!bVar7 * auVar76._4_4_) |
       (uint)!bVar11 * iStack_11c;
  auVar106._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar71 & 1) * auVar110._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar76._0_4_) |
       (uint)!(bool)(bVar71 & 1) * local_120;
  auVar106._8_4_ =
       (uint)bVar22 * ((uint)bVar18 * auVar110._8_4_ | (uint)!bVar18 * auVar76._8_4_) |
       (uint)!bVar22 * iStack_118;
  auVar106._12_4_ =
       (uint)bVar32 * ((uint)bVar28 * auVar110._12_4_ | (uint)!bVar28 * auVar76._12_4_) |
       (uint)!bVar32 * iStack_114;
  auVar106._16_4_ =
       (uint)bVar38 * (uint)((byte)(uVar69 >> 4) & 1) * auVar110._16_4_ | (uint)!bVar38 * iStack_110
  ;
  auVar106._20_4_ =
       (uint)bVar44 * (uint)((byte)(uVar69 >> 5) & 1) * auVar110._20_4_ | (uint)!bVar44 * iStack_10c
  ;
  auVar106._24_4_ =
       (uint)bVar50 * (uint)((byte)(uVar69 >> 6) & 1) * auVar110._24_4_ | (uint)!bVar50 * iStack_108
  ;
  auVar106._28_4_ =
       (uint)bVar56 * (uint)(byte)(uVar69 >> 7) * auVar110._28_4_ | (uint)!bVar56 * iStack_104;
  auVar62._4_4_ =
       (uint)bVar12 * ((uint)bVar8 * auVar86._4_4_ | (uint)!bVar8 * auVar74._4_4_) |
       (uint)!bVar12 * iStack_fc;
  auVar62._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar71 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar74._0_4_) |
       (uint)!(bool)(bVar71 & 1) * local_100;
  auVar62._8_4_ =
       (uint)bVar23 * ((uint)bVar19 * auVar86._8_4_ | (uint)!bVar19 * auVar74._8_4_) |
       (uint)!bVar23 * iStack_f8;
  auVar62._12_4_ =
       (uint)bVar33 * ((uint)bVar29 * auVar86._12_4_ | (uint)!bVar29 * auVar74._12_4_) |
       (uint)!bVar33 * iStack_f4;
  auVar62._16_4_ =
       (uint)bVar39 * (uint)((byte)(uVar69 >> 4) & 1) * auVar86._16_4_ | (uint)!bVar39 * iStack_f0;
  auVar62._20_4_ =
       (uint)bVar45 * (uint)((byte)(uVar69 >> 5) & 1) * auVar86._20_4_ | (uint)!bVar45 * iStack_ec;
  auVar62._24_4_ =
       (uint)bVar51 * (uint)((byte)(uVar69 >> 6) & 1) * auVar86._24_4_ | (uint)!bVar51 * iStack_e8;
  auVar62._28_4_ =
       (uint)bVar57 * (uint)(byte)(uVar69 >> 7) * auVar86._28_4_ | (uint)!bVar57 * iStack_e4;
  auVar93._4_4_ =
       (uint)bVar13 * ((uint)bVar9 * auVar84._4_4_ | (uint)!bVar9 * auVar78._4_4_) |
       (uint)!bVar13 * iStack_19c;
  auVar93._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar71 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar71 & 1) * auVar78._0_4_) |
       (uint)!(bool)(bVar71 & 1) * local_1a0;
  auVar93._8_4_ =
       (uint)bVar24 * ((uint)bVar20 * auVar84._8_4_ | (uint)!bVar20 * auVar78._8_4_) |
       (uint)!bVar24 * iStack_198;
  auVar93._12_4_ =
       (uint)bVar34 * ((uint)bVar30 * auVar84._12_4_ | (uint)!bVar30 * auVar78._12_4_) |
       (uint)!bVar34 * iStack_194;
  auVar93._16_4_ =
       (uint)bVar40 * (uint)((byte)(uVar69 >> 4) & 1) * auVar84._16_4_ | (uint)!bVar40 * iStack_190;
  auVar93._20_4_ =
       (uint)bVar46 * (uint)((byte)(uVar69 >> 5) & 1) * auVar84._20_4_ | (uint)!bVar46 * iStack_18c;
  auVar93._24_4_ =
       (uint)bVar52 * (uint)((byte)(uVar69 >> 6) & 1) * auVar84._24_4_ | (uint)!bVar52 * iStack_188;
  auVar93._28_4_ =
       (uint)bVar58 * (uint)(byte)(uVar69 >> 7) * auVar84._28_4_ | (uint)!bVar58 * iStack_184;
  auVar94._4_4_ = bVar14 * auVar79._4_4_ | (uint)!bVar14 * iStack_17c;
  auVar94._0_4_ = (bVar71 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar71 & 1) * local_180;
  auVar94._8_4_ = bVar25 * auVar79._8_4_ | (uint)!bVar25 * iStack_178;
  auVar94._12_4_ = bVar35 * auVar79._12_4_ | (uint)!bVar35 * iStack_174;
  auVar94._16_4_ =
       (uint)bVar41 * (uint)((byte)(uVar69 >> 4) & 1) * auVar85._16_4_ | (uint)!bVar41 * iStack_170;
  auVar94._20_4_ =
       (uint)bVar47 * (uint)((byte)(uVar69 >> 5) & 1) * auVar85._20_4_ | (uint)!bVar47 * iStack_16c;
  auVar94._24_4_ =
       (uint)bVar53 * (uint)((byte)(uVar69 >> 6) & 1) * auVar85._24_4_ | (uint)!bVar53 * iStack_168;
  auVar94._28_4_ =
       (uint)bVar59 * (uint)(byte)(uVar69 >> 7) * auVar85._28_4_ | (uint)!bVar59 * iStack_164;
  auVar95._4_4_ = bVar15 * auVar80._4_4_ | (uint)!bVar15 * iStack_15c;
  auVar95._0_4_ = (bVar71 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar71 & 1) * local_160;
  auVar95._8_4_ = bVar26 * auVar80._8_4_ | (uint)!bVar26 * iStack_158;
  auVar95._12_4_ = bVar36 * auVar80._12_4_ | (uint)!bVar36 * iStack_154;
  auVar95._16_4_ =
       (uint)bVar42 * (uint)((byte)(uVar69 >> 4) & 1) * auVar112._16_4_ | (uint)!bVar42 * iStack_150
  ;
  auVar95._20_4_ =
       (uint)bVar48 * (uint)((byte)(uVar69 >> 5) & 1) * auVar112._20_4_ | (uint)!bVar48 * iStack_14c
  ;
  auVar95._24_4_ =
       (uint)bVar54 * (uint)((byte)(uVar69 >> 6) & 1) * auVar112._24_4_ | (uint)!bVar54 * iStack_148
  ;
  auVar95._28_4_ =
       (uint)bVar60 * (uint)(byte)(uVar69 >> 7) * auVar112._28_4_ | (uint)!bVar60 * iStack_144;
  auVar82 = vsubps_avx512vl(auVar96,auVar93);
  auVar83 = vsubps_avx512vl(auVar106,auVar94);
  auVar86 = vsubps_avx512vl(auVar62,auVar95);
  fVar143 = auVar83._0_4_;
  fVar145 = auVar83._4_4_;
  fVar73 = auVar83._8_4_;
  fVar148 = auVar83._12_4_;
  fVar124 = auVar83._16_4_;
  fVar151 = auVar83._20_4_;
  fVar126 = auVar83._24_4_;
  fVar127 = auVar83._28_4_;
  fVar129 = auVar82._0_4_;
  fVar130 = auVar82._4_4_;
  fVar131 = auVar82._8_4_;
  fVar132 = auVar82._12_4_;
  fVar133 = auVar82._16_4_;
  fVar134 = auVar82._20_4_;
  fVar135 = auVar82._24_4_;
  fVar136 = auVar82._28_4_;
  fVar137 = auVar86._0_4_;
  auVar154._0_4_ = fVar137 * fVar137 + fVar129 * fVar129 + fVar143 * fVar143;
  fVar144 = auVar86._4_4_;
  auVar154._4_4_ = fVar144 * fVar144 + fVar130 * fVar130 + fVar145 * fVar145;
  fVar146 = auVar86._8_4_;
  auVar154._8_4_ = fVar146 * fVar146 + fVar131 * fVar131 + fVar73 * fVar73;
  fVar147 = auVar86._12_4_;
  auVar154._12_4_ = fVar147 * fVar147 + fVar132 * fVar132 + fVar148 * fVar148;
  fVar149 = auVar86._16_4_;
  auVar154._16_4_ = fVar149 * fVar149 + fVar133 * fVar133 + fVar124 * fVar124;
  fVar150 = auVar86._20_4_;
  auVar154._20_4_ = fVar150 * fVar150 + fVar134 * fVar134 + fVar151 * fVar151;
  fVar152 = auVar86._24_4_;
  auVar154._24_4_ = fVar152 * fVar152 + fVar135 * fVar135 + fVar126 * fVar126;
  fVar153 = auVar86._28_4_;
  auVar154._28_4_ = fVar153 * fVar153 + fVar136 * fVar136 + fVar127 * fVar127;
  auVar110 = vsqrtps_avx(auVar154);
  auVar91._4_4_ = __real_38d1b717;
  auVar91._0_4_ = __real_38d1b717;
  auVar91._8_4_ = __real_38d1b717;
  auVar91._12_4_ = __real_38d1b717;
  auVar91._16_4_ = __real_38d1b717;
  auVar91._20_4_ = __real_38d1b717;
  auVar91._24_4_ = __real_38d1b717;
  auVar91._28_4_ = __real_38d1b717;
  uVar61 = vcmpps_avx512vl(auVar154,auVar91,1);
  auVar82 = vdivps_avx(auVar82,auVar110);
  auVar142._4_4_ = __real_3f800000;
  auVar142._0_4_ = __real_3f800000;
  auVar142._8_4_ = __real_3f800000;
  auVar142._12_4_ = __real_3f800000;
  auVar142._16_4_ = __real_3f800000;
  auVar142._20_4_ = __real_3f800000;
  auVar142._24_4_ = __real_3f800000;
  auVar142._28_4_ = __real_3f800000;
  bVar5 = (byte)uVar61;
  bVar6 = (bool)((byte)(uVar61 >> 1) & 1);
  bVar8 = (bool)((byte)(uVar61 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar61 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar61 >> 4) & 1);
  bVar14 = (bool)((byte)(uVar61 >> 5) & 1);
  bVar16 = (bool)((byte)(uVar61 >> 6) & 1);
  bVar18 = SUB81(uVar61 >> 7,0);
  bVar7 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar13 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar15 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar17 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar19 = SUB81(uVar69 >> 7,0);
  local_340._4_4_ =
       (uint)bVar7 * ((uint)bVar6 * __real_3f800000 | (uint)!bVar6 * auVar82._4_4_) |
       (uint)!bVar7 * (int)fVar130;
  local_340._0_4_ =
       (uint)(bVar71 & 1) *
       ((uint)(bVar5 & 1) * __real_3f800000 | (uint)!(bool)(bVar5 & 1) * auVar82._0_4_) |
       (uint)!(bool)(bVar71 & 1) * (int)fVar129;
  local_340._8_4_ =
       (uint)bVar9 * ((uint)bVar8 * __real_3f800000 | (uint)!bVar8 * auVar82._8_4_) |
       (uint)!bVar9 * (int)fVar131;
  local_340._12_4_ =
       (uint)bVar11 * ((uint)bVar10 * __real_3f800000 | (uint)!bVar10 * auVar82._12_4_) |
       (uint)!bVar11 * (int)fVar132;
  local_340._16_4_ =
       (uint)bVar13 * ((uint)bVar12 * __real_3f800000 | (uint)!bVar12 * auVar82._16_4_) |
       (uint)!bVar13 * (int)fVar133;
  local_340._20_4_ =
       (uint)bVar15 * ((uint)bVar14 * __real_3f800000 | (uint)!bVar14 * auVar82._20_4_) |
       (uint)!bVar15 * (int)fVar134;
  local_340._24_4_ =
       (uint)bVar17 * ((uint)bVar16 * __real_3f800000 | (uint)!bVar16 * auVar82._24_4_) |
       (uint)!bVar17 * (int)fVar135;
  local_340._28_4_ =
       (uint)bVar19 * ((uint)bVar18 * __real_3f800000 | (uint)!bVar18 * auVar82._28_4_) |
       (uint)!bVar19 * (int)fVar136;
  auVar82 = vdivps_avx(auVar83,auVar110);
  bVar12 = SUB81(uVar61 >> 7,0);
  bVar6 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar13 = SUB81(uVar69 >> 7,0);
  local_320._4_4_ =
       (uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 1) & 1) * auVar82._4_4_ |
       (uint)!bVar6 * (int)fVar145;
  local_320._0_4_ =
       (uint)(bVar71 & 1) * (uint)!(bool)(bVar5 & 1) * auVar82._0_4_ |
       (uint)!(bool)(bVar71 & 1) * (int)fVar143;
  local_320._8_4_ =
       (uint)bVar7 * (uint)!(bool)((byte)(uVar61 >> 2) & 1) * auVar82._8_4_ |
       (uint)!bVar7 * (int)fVar73;
  local_320._12_4_ =
       (uint)bVar8 * (uint)!(bool)((byte)(uVar61 >> 3) & 1) * auVar82._12_4_ |
       (uint)!bVar8 * (int)fVar148;
  local_320._16_4_ =
       (uint)bVar9 * (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar82._16_4_ |
       (uint)!bVar9 * (int)fVar124;
  local_320._20_4_ =
       (uint)bVar10 * (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar82._20_4_ |
       (uint)!bVar10 * (int)fVar151;
  local_320._24_4_ =
       (uint)bVar11 * (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar82._24_4_ |
       (uint)!bVar11 * (int)fVar126;
  local_320._28_4_ =
       (uint)bVar13 *
       ((uint)bVar12 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar12 * auVar82._28_4_)
       | (uint)!bVar13 * (int)fVar127;
  auVar82 = vdivps_avx(auVar86,auVar110);
  local_300._0_4_ =
       (uint)(bVar71 & 1) * (uint)!(bool)(bVar5 & 1) * auVar82._0_4_ |
       (uint)!(bool)(bVar71 & 1) * (int)fVar137;
  bVar6 = (bool)((byte)(uVar69 >> 1) & 1);
  local_300._4_4_ =
       (uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 1) & 1) * auVar82._4_4_ |
       (uint)!bVar6 * (int)fVar144;
  bVar6 = (bool)((byte)(uVar69 >> 2) & 1);
  fStack_2f8 = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 2) & 1) * auVar82._8_4_ |
                      (uint)!bVar6 * (int)fVar146);
  bVar6 = (bool)((byte)(uVar69 >> 3) & 1);
  fStack_2f4 = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 3) & 1) * auVar82._12_4_ |
                      (uint)!bVar6 * (int)fVar147);
  bVar6 = (bool)((byte)(uVar69 >> 4) & 1);
  fStack_2f0 = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar82._16_4_ |
                      (uint)!bVar6 * (int)fVar149);
  bVar6 = (bool)((byte)(uVar69 >> 5) & 1);
  fStack_2ec = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar82._20_4_ |
                      (uint)!bVar6 * (int)fVar150);
  bVar6 = (bool)((byte)(uVar69 >> 6) & 1);
  fStack_2e8 = (float)((uint)bVar6 * (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar82._24_4_ |
                      (uint)!bVar6 * (int)fVar152);
  bVar6 = SUB81(uVar69 >> 7,0);
  fStack_2e4 = (float)((uint)bVar6 * (uint)!SUB81(uVar61 >> 7,0) * auVar82._28_4_ |
                      (uint)!bVar6 * (int)fVar153);
  lVar67 = (longlong)(int)(uVar70 << 2);
  auVar120._4_4_ = (uint)!(bool)((byte)(uVar61 >> 1) & 1) * auVar110._4_4_;
  auVar120._0_4_ = (uint)!(bool)(bVar5 & 1) * auVar110._0_4_;
  auVar120._8_4_ = (uint)!(bool)((byte)(uVar61 >> 2) & 1) * auVar110._8_4_;
  auVar120._12_4_ = (uint)!(bool)((byte)(uVar61 >> 3) & 1) * auVar110._12_4_;
  auVar120._16_4_ = (uint)!(bool)((byte)(uVar61 >> 4) & 1) * auVar110._16_4_;
  auVar120._20_4_ = (uint)!(bool)((byte)(uVar61 >> 5) & 1) * auVar110._20_4_;
  auVar120._24_4_ = (uint)!(bool)((byte)(uVar61 >> 6) & 1) * auVar110._24_4_;
  bVar6 = SUB81(uVar61 >> 7,0);
  auVar120._28_4_ =
       (uint)bVar6 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar6 * auVar110._28_4_;
  auVar83 = vaddps_avx512vl(auVar111,auVar113);
  param_8 = param_8 + param_8;
  auVar155._4_4_ = param_7;
  auVar155._0_4_ = param_7;
  auVar155._8_4_ = param_7;
  auVar155._12_4_ = param_7;
  auVar155._16_4_ = param_7;
  auVar155._20_4_ = param_7;
  auVar155._24_4_ = param_7;
  auVar155._28_4_ = param_7;
  auVar82 = vdivps_avx(auVar155,auVar83);
  auVar82 = vsqrtps_avx(auVar82);
  fVar143 = param_8 * auVar82._0_4_;
  fVar145 = param_8 * auVar82._4_4_;
  fVar73 = param_8 * auVar82._8_4_;
  fVar148 = param_8 * auVar82._12_4_;
  fVar124 = param_8 * auVar82._16_4_;
  fVar151 = param_8 * auVar82._20_4_;
  fVar126 = param_8 * auVar82._24_4_;
  param_8 = param_8 * auVar82._28_4_;
  piVar3 = (int *)(param_4 + lVar67);
  auVar121._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * piVar3[1];
  auVar121._0_4_ = (uint)(bVar71 & 1) * *piVar3;
  auVar121._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * piVar3[2];
  auVar121._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * piVar3[3];
  auVar121._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * piVar3[4];
  auVar121._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * piVar3[5];
  auVar121._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * piVar3[6];
  auVar121._28_4_ = (uint)(byte)(uVar69 >> 7) * piVar3[7];
  auVar110 = vsubps_avx(auVar120,auVar121);
  auVar92._4_4_ = __real_322bcc77;
  auVar92._0_4_ = __real_322bcc77;
  auVar92._8_4_ = __real_322bcc77;
  auVar92._12_4_ = __real_322bcc77;
  auVar92._16_4_ = __real_322bcc77;
  auVar92._20_4_ = __real_322bcc77;
  auVar92._24_4_ = __real_322bcc77;
  auVar92._28_4_ = __real_322bcc77;
  uVar61 = vcmpps_avx512vl(auVar121,auVar92,1);
  auVar82 = vdivps_avx(auVar142,auVar121);
  bVar6 = (bool)((byte)uVar61 & 1);
  bVar7 = (bool)((byte)(uVar61 >> 1) & 1);
  bVar8 = (bool)((byte)(uVar61 >> 2) & 1);
  bVar9 = (bool)((byte)(uVar61 >> 3) & 1);
  bVar10 = (bool)((byte)(uVar61 >> 4) & 1);
  bVar11 = (bool)((byte)(uVar61 >> 5) & 1);
  bVar12 = (bool)((byte)(uVar61 >> 6) & 1);
  bVar13 = SUB81(uVar61 >> 7,0);
  auVar156._0_4_ =
       param_6 * (float)((uint)bVar6 * (int)fVar143 | (uint)!bVar6 * (int)(fVar143 * auVar82._0_4_))
  ;
  auVar156._4_4_ =
       param_6 * (float)((uint)bVar7 * (int)fVar145 | (uint)!bVar7 * (int)(fVar145 * auVar82._4_4_))
  ;
  auVar156._8_4_ =
       param_6 * (float)((uint)bVar8 * (int)fVar73 | (uint)!bVar8 * (int)(fVar73 * auVar82._8_4_));
  auVar156._12_4_ =
       param_6 * (float)((uint)bVar9 * (int)fVar148 | (uint)!bVar9 * (int)(fVar148 * auVar82._12_4_)
                        );
  auVar156._16_4_ =
       param_6 * (float)((uint)bVar10 * (int)fVar124 |
                        (uint)!bVar10 * (int)(fVar124 * auVar82._16_4_));
  auVar156._20_4_ =
       param_6 * (float)((uint)bVar11 * (int)fVar151 |
                        (uint)!bVar11 * (int)(fVar151 * auVar82._20_4_));
  auVar156._24_4_ =
       param_6 * (float)((uint)bVar12 * (int)fVar126 |
                        (uint)!bVar12 * (int)(fVar126 * auVar82._24_4_));
  auVar156._28_4_ =
       param_6 * (float)((uint)bVar13 * (int)param_8 |
                        (uint)!bVar13 * (int)(param_8 * auVar82._28_4_));
  auVar82 = vsubps_avx512vl(auVar96,auVar114);
  auVar82 = vsubps_avx512vl(auVar82,auVar93);
  auVar82 = vaddps_avx512vl(auVar117,auVar82);
  auVar86 = vsubps_avx512vl(auVar106,auVar115);
  auVar84 = vsubps_avx512vl(auVar62,auVar116);
  auVar86 = vsubps_avx512vl(auVar86,auVar94);
  auVar86 = vaddps_avx512vl(auVar118,auVar86);
  auVar84 = vsubps_avx512vl(auVar84,auVar95);
  auVar84 = vaddps_avx512vl(auVar119,auVar84);
  auVar86 = vmulps_avx512vl(auVar86,local_320);
  auVar82 = vfmadd231ps_avx512vl(auVar86,local_340,auVar82);
  auVar82 = vfmadd231ps_avx512vl(auVar82,_local_300,auVar84);
  piVar3 = (int *)(param_5 + lVar67);
  auVar122._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * piVar3[1];
  auVar122._0_4_ = (uint)(bVar71 & 1) * *piVar3;
  auVar122._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * piVar3[2];
  auVar122._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * piVar3[3];
  auVar122._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * piVar3[4];
  auVar122._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * piVar3[5];
  auVar122._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * piVar3[6];
  auVar122._28_4_ = (uint)(byte)(uVar69 >> 7) * piVar3[7];
  auVar86 = vbroadcastss_avx512vl(ZEXT416((uint)(param_6 * param_6 * param_7)));
  auVar110 = vfnmsub213ps_avx512vl(auVar110,auVar86,auVar122);
  auVar139._0_4_ = -(auVar156._0_4_ * auVar82._0_4_) + auVar110._0_4_;
  auVar139._4_4_ = -(auVar156._4_4_ * auVar82._4_4_) + auVar110._4_4_;
  auVar139._8_4_ = -(auVar156._8_4_ * auVar82._8_4_) + auVar110._8_4_;
  auVar139._12_4_ = -(auVar156._12_4_ * auVar82._12_4_) + auVar110._12_4_;
  auVar139._16_4_ = -(auVar156._16_4_ * auVar82._16_4_) + auVar110._16_4_;
  auVar139._20_4_ = -(auVar156._20_4_ * auVar82._20_4_) + auVar110._20_4_;
  auVar139._24_4_ = -(auVar156._24_4_ * auVar82._24_4_) + auVar110._24_4_;
  auVar139._28_4_ = -(auVar156._28_4_ * auVar82._28_4_) + auVar110._28_4_;
  auVar82 = vaddps_avx512vl(auVar86,auVar156);
  auVar82 = vfmadd213ps_avx512vl(auVar82,auVar83,auVar142);
  auVar82 = vdivps_avx512vl(auVar139,auVar82);
  auVar110 = vaddps_avx512vl(auVar122,auVar82);
  puVar4 = (uint *)(param_5 + lVar67);
  bVar6 = (bool)((byte)(uVar69 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar69 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar69 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar69 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar69 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar69 >> 6) & 1);
  bVar12 = SUB81(uVar69 >> 7,0);
  *puVar4 = (uint)(bVar71 & 1) * auVar110._0_4_ | (uint)!(bool)(bVar71 & 1) * *puVar4;
  puVar4[1] = (uint)bVar6 * auVar110._4_4_ | (uint)!bVar6 * puVar4[1];
  puVar4[2] = (uint)bVar7 * auVar110._8_4_ | (uint)!bVar7 * puVar4[2];
  puVar4[3] = (uint)bVar8 * auVar110._12_4_ | (uint)!bVar8 * puVar4[3];
  puVar4[4] = (uint)bVar9 * auVar110._16_4_ | (uint)!bVar9 * puVar4[4];
  puVar4[5] = (uint)bVar10 * auVar110._20_4_ | (uint)!bVar10 * puVar4[5];
  puVar4[6] = (uint)bVar11 * auVar110._24_4_ | (uint)!bVar11 * puVar4[6];
  puVar4[7] = (uint)bVar12 * auVar110._28_4_ | (uint)!bVar12 * puVar4[7];
  auVar110 = vmulps_avx512vl(local_340,auVar82);
  auVar83 = vfmadd231ps_avx512vl(auVar96,auVar111,auVar110);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar108,uVar69,auVar83);
  auVar83 = vmulps_avx512vl(local_320,auVar82);
  auVar86 = vfmadd231ps_avx512vl(auVar106,auVar111,auVar83);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar140),uVar69,auVar86);
  auVar138._0_4_ = (float)local_300._0_4_ * auVar82._0_4_;
  auVar138._4_4_ = (float)local_300._4_4_ * auVar82._4_4_;
  auVar138._8_4_ = fStack_2f8 * auVar82._8_4_;
  auVar138._12_4_ = fStack_2f4 * auVar82._12_4_;
  auVar138._16_4_ = fStack_2f0 * auVar82._16_4_;
  auVar138._20_4_ = fStack_2ec * auVar82._20_4_;
  auVar138._24_4_ = fStack_2e8 * auVar82._24_4_;
  auVar138._28_4_ = fStack_2e4 * auVar82._28_4_;
  auVar86 = vfmadd231ps_avx512vl(auVar62,auVar111,auVar138);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar82,uVar69,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar83,uVar69,auVar111);
  auVar82 = vfnmadd213ps_avx512vl(auVar110,auVar113,auVar93);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar138,uVar69,auVar82);
  auVar82 = vfnmadd213ps_avx512vl(auVar83,auVar113,auVar94);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar95,uVar69,auVar82);
  auVar82 = vfnmadd213ps_avx512vl(auVar138,auVar113,auVar95);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar94,uVar69,auVar82);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar140),uVar69,auVar113);
  return;
}

// ApplyXPBDSpringDampingConstraints_avx512skx @ 14090bf70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraints_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,undefined4 param_7,float param_8,uint param_9)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [32];
  int *piVar5;
  uint *puVar6;
  byte bVar7;
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
  bool bVar64;
  bool bVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  undefined4 uVar68;
  longlong lVar69;
  ulonglong unaff_RBX;
  uint uVar70;
  ulonglong uVar71;
  uint uVar72;
  ulonglong uVar73;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
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
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  float fVar123;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM27 [64];
  undefined1 auVar150 [16];
  undefined1 in_ZMM28 [64];
  undefined1 auVar151 [16];
  undefined1 in_ZMM29 [64];
  undefined1 auVar152 [16];
  undefined1 in_ZMM30 [64];
  undefined1 auVar153 [16];
  undefined1 in_ZMM31 [64];
  undefined1 local_280 [32];
  undefined1 local_260 [8];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  undefined1 local_240 [8];
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined4 auStack_218 [4];
  undefined4 uStack_208;
  undefined4 uStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
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
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  
  uVar68 = __real_38d1b717;
  auVar153 = in_ZMM31._0_16_;
  auVar152 = in_ZMM30._0_16_;
  auVar81 = in_ZMM22._0_16_;
  auVar151 = in_ZMM29._0_16_;
  auVar150 = in_ZMM28._0_16_;
  auVar80 = in_ZMM27._0_16_;
  auVar78 = in_ZMM21._0_16_;
  auVar79 = in_ZMM26._0_16_;
  auVar77 = in_ZMM25._0_16_;
  auVar76 = in_ZMM24._0_16_;
  auVar75 = in_ZMM23._0_16_;
  uVar70 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar70 = param_9;
  }
  local_1c0 = param_8 + param_8;
  uVar70 = uVar70 & 0xfffffff8;
  if ((int)uVar70 < 1) {
    uVar72 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fStack_1bc = local_1c0;
    fStack_1b8 = local_1c0;
    fStack_1b4 = local_1c0;
    fStack_1b0 = local_1c0;
    fStack_1ac = local_1c0;
    fStack_1a8 = local_1c0;
    fStack_1a4 = local_1c0;
    local_1e0 = param_7;
    uStack_1dc = param_7;
    uStack_1d8 = param_7;
    uStack_1d4 = param_7;
    uStack_1d0 = param_7;
    uStack_1cc = param_7;
    uStack_1c8 = param_7;
    uStack_1c4 = param_7;
    local_200 = param_6;
    fStack_1fc = param_6;
    fStack_1f8 = param_6;
    fStack_1f4 = param_6;
    fStack_1f0 = param_6;
    fStack_1ec = param_6;
    fStack_1e8 = param_6;
    fStack_1e4 = param_6;
    uVar73 = 0;
    auVar82 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar83 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar84 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auStack_218[0] = __real_38d1b717;
    auStack_218[1] = __real_38d1b717;
    auStack_218[2] = __real_38d1b717;
    auStack_218[3] = __real_38d1b717;
    uStack_208 = __real_38d1b717;
    uStack_204 = __real_38d1b717;
    auVar85 = vbroadcastss_avx512vl(ZEXT416((uint)__real_3f800000));
    auVar75 = auVar85._0_16_;
    auVar86 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar76 = auVar86._0_16_;
    uVar71 = 0;
    do {
      auVar100 = *(undefined1 (*) [32])(param_3 + uVar71 * 2);
      auVar88 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar71 * 2);
      auVar87 = vpermt2d_avx512vl(auVar100,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar88);
      auVar88 = vpermt2d_avx512vl(auVar100,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar88);
      auVar89 = vpslld_avx512vl(auVar87,4);
      auVar79 = auVar89._0_16_;
      auVar90 = vpslld_avx512vl(auVar88,4);
      auVar77 = auVar90._0_16_;
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar73));
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar150 = auVar77 | auVar82._0_16_;
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar93 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar152 = auVar77 | auVar83._0_16_;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_9));
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      fVar113 = auVar97._8_4_;
      fVar114 = auVar97._12_4_;
      fVar115 = auVar97._16_4_;
      fVar116 = auVar97._20_4_;
      fVar117 = auVar97._24_4_;
      fVar118 = auVar97._28_4_;
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar70));
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 5));
      auVar124 = vpslld_avx2(auVar87,2);
      auVar87 = vpslld_avx2(auVar87,3);
      auVar100._0_4_ = auVar87._0_4_ + auVar124._0_4_;
      auVar100._4_4_ = auVar87._4_4_ + auVar124._4_4_;
      auVar100._8_4_ = auVar87._8_4_ + auVar124._8_4_;
      auVar100._12_4_ = auVar87._12_4_ + auVar124._12_4_;
      auVar100._16_4_ = auVar87._16_4_ + auVar124._16_4_;
      auVar100._20_4_ = auVar87._20_4_ + auVar124._20_4_;
      auVar100._24_4_ = auVar87._24_4_ + auVar124._24_4_;
      auVar100._28_4_ = auVar87._28_4_ + auVar124._28_4_;
      vpaddd_avx512vl(auVar100,auVar82);
      auVar87 = vpaddd_avx512vl(auVar88,auVar88);
      vpaddd_avx512vl(auVar88,auVar87);
      vpaddd_avx512vl(auVar100,auVar83);
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1 * 4));
      auVar100 = vpslld_avx512vl(auVar88,2);
      auVar88 = vpslld_avx2(auVar88,3);
      auVar100 = vpaddd_avx512vl(auVar88,auVar100);
      vpaddd_avx512vl(auVar100,auVar82);
      auVar124 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
      vpaddd_avx512vl(auVar100,auVar83);
      auVar101 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBX));
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_R15));
      auVar103 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
      unaff_RBX = uVar71 & 0xffffffff;
      auVar100 = vsubps_avx512vl(auVar91,auVar92);
      auVar104 = vsubps_avx512vl(auVar93,auVar94);
      auVar105 = vsubps_avx512vl(auVar95,auVar96);
      auVar88 = vmulps_avx512vl(auVar104,auVar104);
      auVar88 = vfmadd231ps_avx512vl(auVar88,auVar100,auVar100);
      auVar106 = vfmadd231ps_avx512vl(auVar88,auVar105,auVar105);
      auVar88._4_4_ = uVar68;
      auVar88._0_4_ = uVar68;
      auVar88._8_4_ = uVar68;
      auVar88._12_4_ = uVar68;
      auVar88._16_4_ = uVar68;
      auVar88._20_4_ = uVar68;
      auVar88._24_4_ = uVar68;
      auVar88._28_4_ = uVar68;
      uVar66 = vcmpps_avx512vl(auVar106,auVar88,1);
      auVar88 = vsqrtps_avx512vl(auVar106);
      auVar81 = auVar88._0_16_;
      auVar106 = vdivps_avx512vl(auVar100,auVar88);
      auVar104 = vdivps_avx512vl(auVar104,auVar88);
      auVar88 = vdivps_avx512vl(auVar105,auVar88);
      uVar67 = vcmpps_avx512vl(*(undefined1 (*) [32])(param_4 + unaff_RBX),auVar86,1);
      auVar105 = vdivps_avx512vl(auVar85,*(undefined1 (*) [32])(param_4 + unaff_RBX));
      auVar100 = vsubps_avx(auVar91,auVar99);
      auVar100 = vsubps_avx512vl(auVar100,auVar92);
      auVar119._0_4_ = auVar100._0_4_ + auVar87._0_4_;
      auVar119._4_4_ = auVar100._4_4_ + auVar87._4_4_;
      auVar119._8_4_ = auVar100._8_4_ + auVar87._8_4_;
      auVar119._12_4_ = auVar100._12_4_ + auVar87._12_4_;
      auVar119._16_4_ = auVar100._16_4_ + auVar87._16_4_;
      auVar119._20_4_ = auVar100._20_4_ + auVar87._20_4_;
      auVar119._24_4_ = auVar100._24_4_ + auVar87._24_4_;
      auVar119._28_4_ = auVar100._28_4_ + auVar87._28_4_;
      fVar142 = auVar97._0_4_;
      auVar135._0_4_ = fVar142 + auVar98._0_4_;
      fVar144 = auVar97._4_4_;
      auVar135._4_4_ = fVar144 + auVar98._4_4_;
      auVar135._8_4_ = fVar113 + auVar98._8_4_;
      auVar135._12_4_ = fVar114 + auVar98._12_4_;
      auVar135._16_4_ = fVar115 + auVar98._16_4_;
      auVar135._20_4_ = fVar116 + auVar98._20_4_;
      auVar135._24_4_ = fVar117 + auVar98._24_4_;
      auVar135._28_4_ = fVar118 + auVar98._28_4_;
      auVar100 = vsubps_avx(auVar93,auVar124);
      auVar100 = vsubps_avx512vl(auVar100,auVar94);
      auVar121._0_4_ = auVar100._0_4_ + auVar102._0_4_;
      auVar121._4_4_ = auVar100._4_4_ + auVar102._4_4_;
      auVar121._8_4_ = auVar100._8_4_ + auVar102._8_4_;
      auVar121._12_4_ = auVar100._12_4_ + auVar102._12_4_;
      auVar121._16_4_ = auVar100._16_4_ + auVar102._16_4_;
      auVar121._20_4_ = auVar100._20_4_ + auVar102._20_4_;
      auVar121._24_4_ = auVar100._24_4_ + auVar102._24_4_;
      auVar121._28_4_ = auVar100._28_4_ + auVar102._28_4_;
      auVar99._4_4_ = param_7;
      auVar99._0_4_ = param_7;
      auVar99._8_4_ = param_7;
      auVar99._12_4_ = param_7;
      auVar99._16_4_ = param_7;
      auVar99._20_4_ = param_7;
      auVar99._24_4_ = param_7;
      auVar99._28_4_ = param_7;
      auVar100 = vdivps_avx(auVar99,auVar135);
      auVar100 = vsqrtps_avx(auVar100);
      auVar136._0_4_ = auVar100._0_4_ * local_1c0;
      auVar136._4_4_ = auVar100._4_4_ * local_1c0;
      auVar136._8_4_ = auVar100._8_4_ * local_1c0;
      auVar136._12_4_ = auVar100._12_4_ * local_1c0;
      auVar136._16_4_ = auVar100._16_4_ * local_1c0;
      auVar136._20_4_ = auVar100._20_4_ * local_1c0;
      auVar136._24_4_ = auVar100._24_4_ * local_1c0;
      auVar136._28_4_ = auVar100._28_4_ * local_1c0;
      auVar100 = vmulps_avx512vl(auVar136,auVar105);
      bVar8 = (bool)((byte)uVar67 & 1);
      auVar124._0_4_ = (uint)bVar8 * (int)auVar136._0_4_ | (uint)!bVar8 * auVar100._0_4_;
      bVar8 = (bool)((byte)(uVar67 >> 1) & 1);
      auVar124._4_4_ = (uint)bVar8 * (int)auVar136._4_4_ | (uint)!bVar8 * auVar100._4_4_;
      bVar8 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar124._8_4_ = (uint)bVar8 * (int)auVar136._8_4_ | (uint)!bVar8 * auVar100._8_4_;
      bVar8 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar124._12_4_ = (uint)bVar8 * (int)auVar136._12_4_ | (uint)!bVar8 * auVar100._12_4_;
      bVar8 = (bool)((byte)(uVar67 >> 4) & 1);
      auVar124._16_4_ = (uint)bVar8 * (int)auVar136._16_4_ | (uint)!bVar8 * auVar100._16_4_;
      bVar8 = (bool)((byte)(uVar67 >> 5) & 1);
      auVar124._20_4_ = (uint)bVar8 * (int)auVar136._20_4_ | (uint)!bVar8 * auVar100._20_4_;
      bVar8 = (bool)((byte)(uVar67 >> 6) & 1);
      auVar124._24_4_ = (uint)bVar8 * (int)auVar136._24_4_ | (uint)!bVar8 * auVar100._24_4_;
      bVar8 = SUB81(uVar67 >> 7,0);
      auVar124._28_4_ = (uint)bVar8 * (int)auVar136._28_4_ | (uint)!bVar8 * auVar100._28_4_;
      auVar100 = vsubps_avx(auVar95,auVar101);
      auVar100 = vsubps_avx512vl(auVar100,auVar96);
      bVar74 = (byte)uVar66;
      auVar101._4_4_ = (uint)!(bool)((byte)(uVar66 >> 1) & 1) * auVar104._4_4_;
      auVar101._0_4_ = (uint)!(bool)(bVar74 & 1) * auVar104._0_4_;
      auVar101._8_4_ = (uint)!(bool)((byte)(uVar66 >> 2) & 1) * auVar104._8_4_;
      auVar101._12_4_ = (uint)!(bool)((byte)(uVar66 >> 3) & 1) * auVar104._12_4_;
      auVar101._16_4_ = (uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar104._16_4_;
      auVar101._20_4_ = (uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar104._20_4_;
      auVar101._24_4_ = (uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar104._24_4_;
      bVar8 = SUB81(uVar66 >> 7,0);
      auVar101._28_4_ =
           (uint)bVar8 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar8 * auVar104._28_4_
      ;
      auVar87 = vmulps_avx512vl(auVar101,auVar121);
      auVar78._0_4_ =
           (uint)(bVar74 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar106._0_4_;
      bVar8 = (bool)((byte)(uVar66 >> 1) & 1);
      auVar78._4_4_ = (uint)bVar8 * auVar85._4_4_ | (uint)!bVar8 * auVar106._4_4_;
      bVar8 = (bool)((byte)(uVar66 >> 2) & 1);
      auVar78._8_4_ = (uint)bVar8 * auVar85._8_4_ | (uint)!bVar8 * auVar106._8_4_;
      bVar8 = (bool)((byte)(uVar66 >> 3) & 1);
      auVar78._12_4_ = (uint)bVar8 * auVar85._12_4_ | (uint)!bVar8 * auVar106._12_4_;
      bVar8 = (bool)((byte)(uVar66 >> 4) & 1);
      auVar102._16_4_ = (uint)bVar8 * auVar85._16_4_ | (uint)!bVar8 * auVar106._16_4_;
      auVar102._0_16_ = auVar78;
      bVar8 = (bool)((byte)(uVar66 >> 5) & 1);
      auVar102._20_4_ = (uint)bVar8 * auVar85._20_4_ | (uint)!bVar8 * auVar106._20_4_;
      bVar8 = (bool)((byte)(uVar66 >> 6) & 1);
      auVar102._24_4_ = (uint)bVar8 * auVar85._24_4_ | (uint)!bVar8 * auVar106._24_4_;
      bVar8 = SUB81(uVar66 >> 7,0);
      auVar102._28_4_ = (uint)bVar8 * auVar85._28_4_ | (uint)!bVar8 * auVar106._28_4_;
      auVar99 = vfmadd231ps_avx512vl(auVar87,auVar102,auVar119);
      fVar137 = (float)((uint)!(bool)(bVar74 & 1) * auVar88._0_4_);
      fVar1 = (float)((uint)!(bool)((byte)(uVar66 >> 1) & 1) * auVar88._4_4_);
      fVar143 = (float)((uint)!(bool)((byte)(uVar66 >> 2) & 1) * auVar88._8_4_);
      fVar141 = (float)((uint)!(bool)((byte)(uVar66 >> 3) & 1) * auVar88._12_4_);
      fVar140 = (float)((uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar88._16_4_);
      fVar145 = (float)((uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar88._20_4_);
      fVar139 = (float)((uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar88._24_4_);
      fVar138 = (float)((uint)!SUB81(uVar66 >> 7,0) * auVar88._28_4_);
      pfVar2 = (float *)(param_5 + unaff_RBX);
      fVar123 = pfVar2[1];
      fVar128 = pfVar2[2];
      fVar129 = pfVar2[3];
      fVar130 = pfVar2[4];
      fVar131 = pfVar2[5];
      fVar132 = pfVar2[6];
      fVar133 = pfVar2[7];
      auVar87._4_4_ = param_6;
      auVar87._0_4_ = param_6;
      auVar87._8_4_ = param_6;
      auVar87._12_4_ = param_6;
      auVar87._16_4_ = param_6;
      auVar87._20_4_ = param_6;
      auVar87._24_4_ = param_6;
      auVar87._28_4_ = param_6;
      auVar88 = vmulps_avx512vl(auVar124,auVar87);
      auVar104._0_4_ =
           -(auVar88._0_4_ * (fVar137 * (auVar100._0_4_ + auVar103._0_4_) + auVar99._0_4_)) -
           *pfVar2;
      auVar104._4_4_ =
           -(auVar88._4_4_ * (fVar1 * (auVar100._4_4_ + auVar103._4_4_) + auVar99._4_4_)) - fVar123;
      auVar104._8_4_ =
           -(auVar88._8_4_ * (fVar143 * (auVar100._8_4_ + auVar103._8_4_) + auVar99._8_4_)) -
           fVar128;
      auVar104._12_4_ =
           -(auVar88._12_4_ * (fVar141 * (auVar100._12_4_ + auVar103._12_4_) + auVar99._12_4_)) -
           fVar129;
      auVar104._16_4_ =
           -(auVar88._16_4_ * (fVar140 * (auVar100._16_4_ + auVar103._16_4_) + auVar99._16_4_)) -
           fVar130;
      auVar104._20_4_ =
           -(auVar88._20_4_ * (fVar145 * (auVar100._20_4_ + auVar103._20_4_) + auVar99._20_4_)) -
           fVar131;
      auVar104._24_4_ =
           -(auVar88._24_4_ * (fVar139 * (auVar100._24_4_ + auVar103._24_4_) + auVar99._24_4_)) -
           fVar132;
      auVar104._28_4_ =
           -(auVar88._28_4_ * (fVar138 * (auVar100._28_4_ + auVar103._28_4_) + auVar99._28_4_)) -
           fVar133;
      auVar100 = vfmadd213ps_avx512vl(auVar88,auVar135,auVar85);
      auVar100 = vdivps_avx(auVar104,auVar100);
      pfVar3 = (float *)(param_5 + unaff_RBX);
      *pfVar3 = *pfVar2 + auVar100._0_4_;
      pfVar3[1] = fVar123 + auVar100._4_4_;
      pfVar3[2] = fVar128 + auVar100._8_4_;
      pfVar3[3] = fVar129 + auVar100._12_4_;
      pfVar3[4] = fVar130 + auVar100._16_4_;
      pfVar3[5] = fVar131 + auVar100._20_4_;
      pfVar3[6] = fVar132 + auVar100._24_4_;
      pfVar3[7] = fVar133 + auVar100._28_4_;
      auVar88 = vmulps_avx512vl(auVar102,auVar100);
      auVar103._0_4_ = fVar142 * auVar88._0_4_ + auVar91._0_4_;
      auVar103._4_4_ = fVar144 * auVar88._4_4_ + auVar91._4_4_;
      auVar103._8_4_ = fVar113 * auVar88._8_4_ + auVar91._8_4_;
      auVar103._12_4_ = fVar114 * auVar88._12_4_ + auVar91._12_4_;
      auVar103._16_4_ = fVar115 * auVar88._16_4_ + auVar91._16_4_;
      auVar103._20_4_ = fVar116 * auVar88._20_4_ + auVar91._20_4_;
      auVar103._24_4_ = fVar117 * auVar88._24_4_ + auVar91._24_4_;
      auVar103._28_4_ = fVar118 * auVar88._28_4_ + auVar91._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar93,0xffff,auVar103);
      auVar87 = vmulps_avx512vl(auVar101,auVar100);
      auVar105._0_4_ = fVar142 * auVar87._0_4_ + auVar93._0_4_;
      auVar105._4_4_ = fVar144 * auVar87._4_4_ + auVar93._4_4_;
      auVar105._8_4_ = fVar113 * auVar87._8_4_ + auVar93._8_4_;
      auVar105._12_4_ = fVar114 * auVar87._12_4_ + auVar93._12_4_;
      auVar105._16_4_ = fVar115 * auVar87._16_4_ + auVar93._16_4_;
      auVar105._20_4_ = fVar116 * auVar87._20_4_ + auVar93._20_4_;
      auVar105._24_4_ = fVar117 * auVar87._24_4_ + auVar93._24_4_;
      auVar105._28_4_ = fVar118 * auVar87._28_4_ + auVar93._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar82),0xffff,auVar105);
      auVar91._0_4_ = fVar137 * auVar100._0_4_;
      auVar91._4_4_ = fVar1 * auVar100._4_4_;
      auVar91._8_4_ = fVar143 * auVar100._8_4_;
      auVar91._12_4_ = fVar141 * auVar100._12_4_;
      auVar91._16_4_ = fVar140 * auVar100._16_4_;
      auVar91._20_4_ = fVar145 * auVar100._20_4_;
      auVar91._24_4_ = fVar139 * auVar100._24_4_;
      auVar91._28_4_ = fVar138 * auVar100._28_4_;
      auVar93._0_4_ = fVar142 * auVar91._0_4_ + auVar95._0_4_;
      auVar93._4_4_ = fVar144 * auVar91._4_4_ + auVar95._4_4_;
      auVar93._8_4_ = fVar113 * auVar91._8_4_ + auVar95._8_4_;
      auVar93._12_4_ = fVar114 * auVar91._12_4_ + auVar95._12_4_;
      auVar93._16_4_ = fVar115 * auVar91._16_4_ + auVar95._16_4_;
      auVar93._20_4_ = fVar116 * auVar91._20_4_ + auVar95._20_4_;
      auVar93._24_4_ = fVar117 * auVar91._24_4_ + auVar95._24_4_;
      auVar93._28_4_ = fVar118 * auVar91._28_4_ + auVar95._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar83),0xffff,auVar93);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar84),0xffff,auVar97);
      auVar100 = vfnmadd231ps_avx512vl(auVar92,auVar98,auVar88);
      in_ZMM27 = ZEXT3264(auVar100);
      auVar80 = auVar100._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar98,0xffff,auVar100);
      auVar100 = vfnmadd231ps_avx512vl(auVar94,auVar98,auVar87);
      in_ZMM29 = ZEXT3264(auVar100);
      auVar151 = auVar100._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar84),0xffff,auVar100);
      auVar100 = vfnmadd231ps_avx512vl(auVar96,auVar98,auVar91);
      in_ZMM31 = ZEXT3264(auVar100);
      auVar153 = auVar100._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar97,0xffff,auVar100);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar90 | auVar84),0xffff,auVar98);
      uVar71 = uVar71 + 0x20;
      uVar72 = (int)uVar73 + 8;
      uVar73 = (ulonglong)uVar72;
    } while ((int)uVar72 < (int)uVar70);
    if ((int)param_9 <= (int)uVar72) {
      return;
    }
  }
  auVar82 = vpbroadcastd_avx512vl();
  auVar82 = vpor_avx2(auVar82,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar83 = vpbroadcastd_avx512vl();
  uVar71 = vpcmpgtd_avx512vl(auVar83,auVar82);
  pauVar4 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar72 * 8);
  bVar74 = (byte)uVar71;
  if (bVar74 == 0xff) {
    auVar83 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                ,*pauVar4,pauVar4[1]);
    auVar82 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                );
    auVar82 = vpermi2d_avx512vl(auVar82,*pauVar4,pauVar4[1]);
  }
  else {
    auVar82 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar4 + (longlong)param_1));
    auVar83._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * auVar82._4_4_;
    auVar83._0_4_ = (uint)(bVar74 & 1) * auVar82._0_4_;
    auVar83._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * auVar82._8_4_;
    auVar83._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * auVar82._12_4_;
    auVar83._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar82._16_4_;
    auVar83._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar82._20_4_;
    auVar83._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar82._24_4_;
    auVar83._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar82._28_4_;
    auVar75 = vxorps_avx512vl(auVar75,auVar75);
    auVar84 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar4 + (longlong)param_1));
    auVar82._0_4_ = (uint)(bVar74 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar75._0_4_;
    bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
    auVar82._4_4_ = (uint)bVar8 * auVar84._4_4_ | (uint)!bVar8 * auVar75._4_4_;
    bVar8 = (bool)((byte)(uVar71 >> 2) & 1);
    auVar82._8_4_ = (uint)bVar8 * auVar84._8_4_ | (uint)!bVar8 * auVar75._8_4_;
    bVar8 = (bool)((byte)(uVar71 >> 3) & 1);
    auVar82._12_4_ = (uint)bVar8 * auVar84._12_4_ | (uint)!bVar8 * auVar75._12_4_;
    auVar82._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar84._16_4_;
    auVar82._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar84._20_4_;
    auVar82._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar84._24_4_;
    auVar82._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar84._28_4_;
  }
  auVar91 = vpslld_avx2(auVar83,4);
  auVar122._4_4_ = __real_00000004;
  auVar122._0_4_ = __real_00000004;
  auVar122._8_4_ = __real_00000004;
  auVar122._12_4_ = __real_00000004;
  auVar122._16_4_ = __real_00000004;
  auVar122._20_4_ = __real_00000004;
  auVar122._24_4_ = __real_00000004;
  auVar122._28_4_ = __real_00000004;
  auVar75 = vxorps_avx512vl(auVar76,auVar76);
  auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar31 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar76 = vxorps_avx512vl(auVar77,auVar77);
  auVar85 = vgatherdps_avx512vl(*param_1);
  bVar9 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar32 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar125._4_4_ = __real_00000008;
  auVar125._0_4_ = __real_00000008;
  auVar125._8_4_ = __real_00000008;
  auVar125._12_4_ = __real_00000008;
  auVar125._16_4_ = __real_00000008;
  auVar125._20_4_ = __real_00000008;
  auVar125._24_4_ = __real_00000008;
  auVar125._28_4_ = __real_00000008;
  auVar77 = vxorps_avx512vl(auVar79,auVar79);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
  bVar10 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar71 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar78 = vxorps_avx512vl(auVar78,auVar78);
  auVar100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  auVar96._0_4_ = (uint)(bVar74 & 1) * auVar100._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar78._0_4_;
  bVar11 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar96._4_4_ = (uint)bVar11 * auVar100._4_4_ | (uint)!bVar11 * auVar78._4_4_;
  bVar11 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar96._8_4_ = (uint)bVar11 * auVar100._8_4_ | (uint)!bVar11 * auVar78._8_4_;
  bVar11 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar96._12_4_ = (uint)bVar11 * auVar100._12_4_ | (uint)!bVar11 * auVar78._12_4_;
  auVar96._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar100._16_4_;
  auVar96._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar100._20_4_;
  auVar96._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar100._24_4_;
  auVar96._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar100._28_4_;
  auVar100 = vpslld_avx512vl(auVar82,4);
  auVar78 = vxorps_avx512vl(auVar80,auVar80);
  auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_218));
  bVar11 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar23 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar79 = vxorps_avx512vl(auVar150,auVar150);
  auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar12 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar35 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar80 = vxorps_avx512vl(auVar151,auVar151);
  auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  auVar150._0_4_ = (uint)(bVar74 & 1) * auVar99._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar80._0_4_;
  bVar13 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar150._4_4_ = (uint)bVar13 * auVar99._4_4_ | (uint)!bVar13 * auVar80._4_4_;
  bVar13 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar150._8_4_ = (uint)bVar13 * auVar99._8_4_ | (uint)!bVar13 * auVar80._8_4_;
  bVar13 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar150._12_4_ = (uint)bVar13 * auVar99._12_4_ | (uint)!bVar13 * auVar80._12_4_;
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar89 = vgatherdps_avx512vl(*param_1);
  auVar97._0_4_ = (uint)(bVar74 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar13 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar97._4_4_ = (uint)bVar13 * auVar89._4_4_ | (uint)!bVar13 * auVar81._4_4_;
  bVar13 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar97._8_4_ = (uint)bVar13 * auVar89._8_4_ | (uint)!bVar13 * auVar81._8_4_;
  bVar13 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar97._12_4_ = (uint)bVar13 * auVar89._12_4_ | (uint)!bVar13 * auVar81._12_4_;
  auVar97._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar89._16_4_;
  auVar97._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar89._20_4_;
  auVar97._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar89._24_4_;
  auVar97._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar89._28_4_;
  bVar13 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar25 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar36 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar42 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar48 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar54 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar60 = SUB81(uVar71 >> 7,0);
  bVar14 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar26 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar37 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar43 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar49 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar55 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar61 = SUB81(uVar71 >> 7,0);
  bVar15 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar27 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar38 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar44 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar50 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar56 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar62 = SUB81(uVar71 >> 7,0);
  bVar16 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar28 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar39 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar45 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar51 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar57 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar63 = SUB81(uVar71 >> 7,0);
  bVar17 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar29 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar40 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar46 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar52 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar58 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar64 = SUB81(uVar71 >> 7,0);
  bVar18 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar30 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar41 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar47 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar53 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar59 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar65 = SUB81(uVar71 >> 7,0);
  auVar89 = vpaddd_avx512vl(auVar83,auVar83);
  vpaddd_avx512vl(auVar83,auVar89);
  auVar81 = vxorps_avx512vl(auVar150,auVar150);
  auVar89 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)pauVar4 * 4));
  auVar98._0_4_ = (uint)(bVar74 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar19 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar98._4_4_ = (uint)bVar19 * auVar89._4_4_ | (uint)!bVar19 * auVar81._4_4_;
  bVar19 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar98._8_4_ = (uint)bVar19 * auVar89._8_4_ | (uint)!bVar19 * auVar81._8_4_;
  bVar19 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar98._12_4_ = (uint)bVar19 * auVar89._12_4_ | (uint)!bVar19 * auVar81._12_4_;
  auVar98._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar89._16_4_;
  auVar98._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar89._20_4_;
  auVar98._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar89._24_4_;
  auVar98._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar89._28_4_;
  auVar89 = vpslld_avx512vl(auVar83,2);
  auVar83 = vpslld_avx2(auVar83,3);
  auVar83 = vpaddd_avx512vl(auVar83,auVar89);
  vpaddd_avx512vl(auVar83,auVar122);
  auVar81 = vxorps_avx512vl(auVar152,auVar152);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar4 + param_2));
  auVar106._0_4_ = (uint)(bVar74 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar19 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar106._4_4_ = (uint)bVar19 * auVar83._4_4_ | (uint)!bVar19 * auVar81._4_4_;
  bVar19 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar106._8_4_ = (uint)bVar19 * auVar83._8_4_ | (uint)!bVar19 * auVar81._8_4_;
  bVar19 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar106._12_4_ = (uint)bVar19 * auVar83._12_4_ | (uint)!bVar19 * auVar81._12_4_;
  auVar106._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar83._16_4_;
  auVar106._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar83._20_4_;
  auVar106._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar83._24_4_;
  auVar106._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar83._28_4_;
  auVar81 = vxorps_avx512vl(auVar153,auVar153);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar107._0_4_ = (uint)(bVar74 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar81._0_4_;
  bVar19 = (bool)((byte)(uVar71 >> 1) & 1);
  auVar107._4_4_ = (uint)bVar19 * auVar83._4_4_ | (uint)!bVar19 * auVar81._4_4_;
  bVar19 = (bool)((byte)(uVar71 >> 2) & 1);
  auVar107._8_4_ = (uint)bVar19 * auVar83._8_4_ | (uint)!bVar19 * auVar81._8_4_;
  bVar19 = (bool)((byte)(uVar71 >> 3) & 1);
  auVar107._12_4_ = (uint)bVar19 * auVar83._12_4_ | (uint)!bVar19 * auVar81._12_4_;
  auVar107._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar83._16_4_;
  auVar107._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar83._20_4_;
  auVar107._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar83._24_4_;
  auVar107._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar83._28_4_;
  auVar83 = vpaddd_avx512vl(auVar82,auVar82);
  vpaddd_avx512vl(auVar82,auVar83);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)pauVar4 * 4));
  auVar108._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * auVar83._4_4_;
  auVar108._0_4_ = (uint)(bVar74 & 1) * auVar83._0_4_;
  auVar108._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * auVar83._8_4_;
  auVar108._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * auVar83._12_4_;
  auVar108._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar83._16_4_;
  auVar108._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar83._20_4_;
  auVar108._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar83._24_4_;
  auVar108._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar83._28_4_;
  auVar83 = vpslld_avx512vl(auVar82,2);
  auVar82 = vpslld_avx512vl(auVar82,3);
  auVar82 = vpaddd_avx512vl(auVar82,auVar83);
  vpaddd_avx512vl(auVar82,auVar122);
  auVar83 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
  auVar109._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * auVar83._4_4_;
  auVar109._0_4_ = (uint)(bVar74 & 1) * auVar83._0_4_;
  auVar109._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * auVar83._8_4_;
  auVar109._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * auVar83._12_4_;
  auVar109._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar83._16_4_;
  auVar109._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar83._20_4_;
  auVar109._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar83._24_4_;
  auVar109._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar83._28_4_;
  vpaddd_avx512vl(auVar82,auVar125);
  auVar82 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
  auVar110._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * auVar82._4_4_;
  auVar110._0_4_ = (uint)(bVar74 & 1) * auVar82._0_4_;
  auVar110._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * auVar82._8_4_;
  auVar110._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * auVar82._12_4_;
  auVar110._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * auVar82._16_4_;
  auVar110._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * auVar82._20_4_;
  auVar110._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * auVar82._24_4_;
  auVar110._28_4_ = (uint)(byte)(uVar71 >> 7) * auVar82._28_4_;
  auVar92._4_4_ =
       (uint)bVar13 * ((uint)bVar8 * auVar84._4_4_ | (uint)!bVar8 * auVar75._4_4_) |
       (uint)!bVar13 * iStack_13c;
  auVar92._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar75._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_140;
  auVar92._8_4_ =
       (uint)bVar25 * ((uint)bVar20 * auVar84._8_4_ | (uint)!bVar20 * auVar75._8_4_) |
       (uint)!bVar25 * iStack_138;
  auVar92._12_4_ =
       (uint)bVar36 * ((uint)bVar31 * auVar84._12_4_ | (uint)!bVar31 * auVar75._12_4_) |
       (uint)!bVar36 * iStack_134;
  auVar92._16_4_ =
       (uint)bVar42 * (uint)((byte)(uVar71 >> 4) & 1) * auVar84._16_4_ | (uint)!bVar42 * iStack_130;
  auVar92._20_4_ =
       (uint)bVar48 * (uint)((byte)(uVar71 >> 5) & 1) * auVar84._20_4_ | (uint)!bVar48 * iStack_12c;
  auVar92._24_4_ =
       (uint)bVar54 * (uint)((byte)(uVar71 >> 6) & 1) * auVar84._24_4_ | (uint)!bVar54 * iStack_128;
  auVar92._28_4_ =
       (uint)bVar60 * (uint)(byte)(uVar71 >> 7) * auVar84._28_4_ | (uint)!bVar60 * iStack_124;
  auVar94._4_4_ =
       (uint)bVar14 * ((uint)bVar9 * auVar85._4_4_ | (uint)!bVar9 * auVar76._4_4_) |
       (uint)!bVar14 * iStack_11c;
  auVar94._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar76._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_120;
  auVar94._8_4_ =
       (uint)bVar26 * ((uint)bVar21 * auVar85._8_4_ | (uint)!bVar21 * auVar76._8_4_) |
       (uint)!bVar26 * iStack_118;
  auVar94._12_4_ =
       (uint)bVar37 * ((uint)bVar32 * auVar85._12_4_ | (uint)!bVar32 * auVar76._12_4_) |
       (uint)!bVar37 * iStack_114;
  auVar94._16_4_ =
       (uint)bVar43 * (uint)((byte)(uVar71 >> 4) & 1) * auVar85._16_4_ | (uint)!bVar43 * iStack_110;
  auVar94._20_4_ =
       (uint)bVar49 * (uint)((byte)(uVar71 >> 5) & 1) * auVar85._20_4_ | (uint)!bVar49 * iStack_10c;
  auVar94._24_4_ =
       (uint)bVar55 * (uint)((byte)(uVar71 >> 6) & 1) * auVar85._24_4_ | (uint)!bVar55 * iStack_108;
  auVar94._28_4_ =
       (uint)bVar61 * (uint)(byte)(uVar71 >> 7) * auVar85._28_4_ | (uint)!bVar61 * iStack_104;
  auVar95._4_4_ =
       (uint)bVar15 * ((uint)bVar10 * auVar86._4_4_ | (uint)!bVar10 * auVar77._4_4_) |
       (uint)!bVar15 * iStack_fc;
  auVar95._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar77._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_100;
  auVar95._8_4_ =
       (uint)bVar27 * ((uint)bVar22 * auVar86._8_4_ | (uint)!bVar22 * auVar77._8_4_) |
       (uint)!bVar27 * iStack_f8;
  auVar95._12_4_ =
       (uint)bVar38 * ((uint)bVar33 * auVar86._12_4_ | (uint)!bVar33 * auVar77._12_4_) |
       (uint)!bVar38 * iStack_f4;
  auVar95._16_4_ =
       (uint)bVar44 * (uint)((byte)(uVar71 >> 4) & 1) * auVar86._16_4_ | (uint)!bVar44 * iStack_f0;
  auVar95._20_4_ =
       (uint)bVar50 * (uint)((byte)(uVar71 >> 5) & 1) * auVar86._20_4_ | (uint)!bVar50 * iStack_ec;
  auVar95._24_4_ =
       (uint)bVar56 * (uint)((byte)(uVar71 >> 6) & 1) * auVar86._24_4_ | (uint)!bVar56 * iStack_e8;
  auVar95._28_4_ =
       (uint)bVar62 * (uint)(byte)(uVar71 >> 7) * auVar86._28_4_ | (uint)!bVar62 * iStack_e4;
  auVar86._4_4_ =
       (uint)bVar16 * ((uint)bVar11 * auVar88._4_4_ | (uint)!bVar11 * auVar78._4_4_) |
       (uint)!bVar16 * iStack_19c;
  auVar86._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar88._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar78._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_1a0;
  auVar86._8_4_ =
       (uint)bVar28 * ((uint)bVar23 * auVar88._8_4_ | (uint)!bVar23 * auVar78._8_4_) |
       (uint)!bVar28 * iStack_198;
  auVar86._12_4_ =
       (uint)bVar39 * ((uint)bVar34 * auVar88._12_4_ | (uint)!bVar34 * auVar78._12_4_) |
       (uint)!bVar39 * iStack_194;
  auVar86._16_4_ =
       (uint)bVar45 * (uint)((byte)(uVar71 >> 4) & 1) * auVar88._16_4_ | (uint)!bVar45 * iStack_190;
  auVar86._20_4_ =
       (uint)bVar51 * (uint)((byte)(uVar71 >> 5) & 1) * auVar88._20_4_ | (uint)!bVar51 * iStack_18c;
  auVar86._24_4_ =
       (uint)bVar57 * (uint)((byte)(uVar71 >> 6) & 1) * auVar88._24_4_ | (uint)!bVar57 * iStack_188;
  auVar86._28_4_ =
       (uint)bVar63 * (uint)(byte)(uVar71 >> 7) * auVar88._28_4_ | (uint)!bVar63 * iStack_184;
  auVar89._4_4_ =
       (uint)bVar17 * ((uint)bVar12 * auVar87._4_4_ | (uint)!bVar12 * auVar79._4_4_) |
       (uint)!bVar17 * iStack_17c;
  auVar89._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar74 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar74 & 1) * auVar79._0_4_) |
       (uint)!(bool)(bVar74 & 1) * local_180;
  auVar89._8_4_ =
       (uint)bVar29 * ((uint)bVar24 * auVar87._8_4_ | (uint)!bVar24 * auVar79._8_4_) |
       (uint)!bVar29 * iStack_178;
  auVar89._12_4_ =
       (uint)bVar40 * ((uint)bVar35 * auVar87._12_4_ | (uint)!bVar35 * auVar79._12_4_) |
       (uint)!bVar40 * iStack_174;
  auVar89._16_4_ =
       (uint)bVar46 * (uint)((byte)(uVar71 >> 4) & 1) * auVar87._16_4_ | (uint)!bVar46 * iStack_170;
  auVar89._20_4_ =
       (uint)bVar52 * (uint)((byte)(uVar71 >> 5) & 1) * auVar87._20_4_ | (uint)!bVar52 * iStack_16c;
  auVar89._24_4_ =
       (uint)bVar58 * (uint)((byte)(uVar71 >> 6) & 1) * auVar87._24_4_ | (uint)!bVar58 * iStack_168;
  auVar89._28_4_ =
       (uint)bVar64 * (uint)(byte)(uVar71 >> 7) * auVar87._28_4_ | (uint)!bVar64 * iStack_164;
  auVar90._4_4_ = bVar18 * auVar150._4_4_ | (uint)!bVar18 * iStack_15c;
  auVar90._0_4_ = (bVar74 & 1) * auVar150._0_4_ | (uint)!(bool)(bVar74 & 1) * local_160;
  auVar90._8_4_ = bVar30 * auVar150._8_4_ | (uint)!bVar30 * iStack_158;
  auVar90._12_4_ = bVar41 * auVar150._12_4_ | (uint)!bVar41 * iStack_154;
  auVar90._16_4_ =
       (uint)bVar47 * (uint)((byte)(uVar71 >> 4) & 1) * auVar99._16_4_ | (uint)!bVar47 * iStack_150;
  auVar90._20_4_ =
       (uint)bVar53 * (uint)((byte)(uVar71 >> 5) & 1) * auVar99._20_4_ | (uint)!bVar53 * iStack_14c;
  auVar90._24_4_ =
       (uint)bVar59 * (uint)((byte)(uVar71 >> 6) & 1) * auVar99._24_4_ | (uint)!bVar59 * iStack_148;
  auVar90._28_4_ =
       (uint)bVar65 * (uint)(byte)(uVar71 >> 7) * auVar99._28_4_ | (uint)!bVar65 * iStack_144;
  auVar82 = vsubps_avx512vl(auVar92,auVar86);
  auVar83 = vsubps_avx512vl(auVar94,auVar89);
  auVar85 = vsubps_avx512vl(auVar95,auVar90);
  fVar137 = auVar83._0_4_;
  fVar138 = auVar83._4_4_;
  fVar139 = auVar83._8_4_;
  fVar140 = auVar83._12_4_;
  fVar141 = auVar83._16_4_;
  fVar143 = auVar83._20_4_;
  fVar145 = auVar83._24_4_;
  fVar1 = auVar83._28_4_;
  fVar123 = auVar82._0_4_;
  fVar128 = auVar82._4_4_;
  fVar129 = auVar82._8_4_;
  fVar130 = auVar82._12_4_;
  fVar131 = auVar82._16_4_;
  fVar132 = auVar82._20_4_;
  fVar133 = auVar82._24_4_;
  fVar113 = auVar82._28_4_;
  fVar114 = auVar85._0_4_;
  auVar147._0_4_ = fVar114 * fVar114 + fVar123 * fVar123 + fVar137 * fVar137;
  fVar115 = auVar85._4_4_;
  auVar147._4_4_ = fVar115 * fVar115 + fVar128 * fVar128 + fVar138 * fVar138;
  fVar116 = auVar85._8_4_;
  auVar147._8_4_ = fVar116 * fVar116 + fVar129 * fVar129 + fVar139 * fVar139;
  fVar117 = auVar85._12_4_;
  auVar147._12_4_ = fVar117 * fVar117 + fVar130 * fVar130 + fVar140 * fVar140;
  fVar118 = auVar85._16_4_;
  auVar147._16_4_ = fVar118 * fVar118 + fVar131 * fVar131 + fVar141 * fVar141;
  fVar142 = auVar85._20_4_;
  auVar147._20_4_ = fVar142 * fVar142 + fVar132 * fVar132 + fVar143 * fVar143;
  fVar144 = auVar85._24_4_;
  auVar147._24_4_ = fVar144 * fVar144 + fVar133 * fVar133 + fVar145 * fVar145;
  fVar146 = auVar85._28_4_;
  auVar147._28_4_ = fVar146 * fVar146 + fVar113 * fVar113 + fVar1 * fVar1;
  auVar84._4_4_ = __real_38d1b717;
  auVar84._0_4_ = __real_38d1b717;
  auVar84._8_4_ = __real_38d1b717;
  auVar84._12_4_ = __real_38d1b717;
  auVar84._16_4_ = __real_38d1b717;
  auVar84._20_4_ = __real_38d1b717;
  auVar84._24_4_ = __real_38d1b717;
  auVar84._28_4_ = __real_38d1b717;
  uVar73 = vcmpps_avx512vl(auVar147,auVar84,1);
  auVar84 = vsqrtps_avx(auVar147);
  auVar82 = vdivps_avx(auVar82,auVar84);
  auVar83 = vdivps_avx(auVar83,auVar84);
  auVar84 = vdivps_avx(auVar85,auVar84);
  bVar7 = (byte)uVar73;
  bVar20 = SUB81(uVar73 >> 7,0);
  auVar148._4_4_ = __real_3f800000;
  auVar148._0_4_ = __real_3f800000;
  auVar148._8_4_ = __real_3f800000;
  auVar148._12_4_ = __real_3f800000;
  auVar148._16_4_ = __real_3f800000;
  auVar148._20_4_ = __real_3f800000;
  auVar148._24_4_ = __real_3f800000;
  auVar148._28_4_ = __real_3f800000;
  bVar8 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar14 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar16 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar18 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar21 = SUB81(uVar73 >> 7,0);
  bVar9 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar11 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar13 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar15 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar17 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar22 = SUB81(uVar71 >> 7,0);
  local_280._4_4_ =
       (uint)bVar9 * ((uint)bVar8 * (int)__real_3f800000 | (uint)!bVar8 * auVar82._4_4_) |
       (uint)!bVar9 * (int)fVar128;
  local_280._0_4_ =
       (uint)(bVar74 & 1) *
       ((uint)(bVar7 & 1) * (int)__real_3f800000 | (uint)!(bool)(bVar7 & 1) * auVar82._0_4_) |
       (uint)!(bool)(bVar74 & 1) * (int)fVar123;
  local_280._8_4_ =
       (uint)bVar11 * ((uint)bVar10 * (int)__real_3f800000 | (uint)!bVar10 * auVar82._8_4_) |
       (uint)!bVar11 * (int)fVar129;
  local_280._12_4_ =
       (uint)bVar13 * ((uint)bVar12 * (int)__real_3f800000 | (uint)!bVar12 * auVar82._12_4_) |
       (uint)!bVar13 * (int)fVar130;
  local_280._16_4_ =
       (uint)bVar15 * ((uint)bVar14 * (int)__real_3f800000 | (uint)!bVar14 * auVar82._16_4_) |
       (uint)!bVar15 * (int)fVar131;
  local_280._20_4_ =
       (uint)bVar17 * ((uint)bVar16 * (int)__real_3f800000 | (uint)!bVar16 * auVar82._20_4_) |
       (uint)!bVar17 * (int)fVar132;
  local_280._24_4_ =
       (uint)bVar19 * ((uint)bVar18 * (int)__real_3f800000 | (uint)!bVar18 * auVar82._24_4_) |
       (uint)!bVar19 * (int)fVar133;
  local_280._28_4_ =
       (uint)bVar22 * ((uint)bVar21 * (int)__real_3f800000 | (uint)!bVar21 * auVar82._28_4_) |
       (uint)!bVar22 * (int)fVar113;
  lVar69 = (longlong)(int)(uVar72 << 2);
  local_260._0_4_ =
       (uint)(bVar74 & 1) * (uint)!(bool)(bVar7 & 1) * auVar83._0_4_ |
       (uint)!(bool)(bVar74 & 1) * (int)fVar137;
  bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
  local_260._4_4_ =
       (uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 1) & 1) * auVar83._4_4_ |
       (uint)!bVar8 * (int)fVar138;
  bVar8 = (bool)((byte)(uVar71 >> 2) & 1);
  fStack_258 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 2) & 1) * auVar83._8_4_ |
                      (uint)!bVar8 * (int)fVar139);
  bVar8 = (bool)((byte)(uVar71 >> 3) & 1);
  fStack_254 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 3) & 1) * auVar83._12_4_ |
                      (uint)!bVar8 * (int)fVar140);
  bVar8 = (bool)((byte)(uVar71 >> 4) & 1);
  fStack_250 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 4) & 1) * auVar83._16_4_ |
                      (uint)!bVar8 * (int)fVar141);
  bVar8 = (bool)((byte)(uVar71 >> 5) & 1);
  fStack_24c = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 5) & 1) * auVar83._20_4_ |
                      (uint)!bVar8 * (int)fVar143);
  bVar8 = (bool)((byte)(uVar71 >> 6) & 1);
  fStack_248 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 6) & 1) * auVar83._24_4_ |
                      (uint)!bVar8 * (int)fVar145);
  bVar8 = SUB81(uVar71 >> 7,0);
  fStack_244 = (float)((uint)bVar8 *
                       ((uint)bVar20 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                       (uint)!bVar20 * auVar83._28_4_) | (uint)!bVar8 * (int)fVar1);
  piVar5 = (int *)(param_4 + lVar69);
  auVar111._4_4_ = (uint)((byte)(uVar71 >> 1) & 1) * piVar5[1];
  auVar111._0_4_ = (uint)(bVar74 & 1) * *piVar5;
  auVar111._8_4_ = (uint)((byte)(uVar71 >> 2) & 1) * piVar5[2];
  auVar111._12_4_ = (uint)((byte)(uVar71 >> 3) & 1) * piVar5[3];
  auVar111._16_4_ = (uint)((byte)(uVar71 >> 4) & 1) * piVar5[4];
  auVar111._20_4_ = (uint)((byte)(uVar71 >> 5) & 1) * piVar5[5];
  auVar111._24_4_ = (uint)((byte)(uVar71 >> 6) & 1) * piVar5[6];
  auVar111._28_4_ = (uint)(byte)(uVar71 >> 7) * piVar5[7];
  local_240._0_4_ =
       (uint)(bVar74 & 1) * (uint)!(bool)(bVar7 & 1) * auVar84._0_4_ |
       (uint)!(bool)(bVar74 & 1) * (int)fVar114;
  bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
  local_240._4_4_ =
       (uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 1) & 1) * auVar84._4_4_ |
       (uint)!bVar8 * (int)fVar115;
  bVar8 = (bool)((byte)(uVar71 >> 2) & 1);
  fStack_238 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 2) & 1) * auVar84._8_4_ |
                      (uint)!bVar8 * (int)fVar116);
  bVar8 = (bool)((byte)(uVar71 >> 3) & 1);
  fStack_234 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 3) & 1) * auVar84._12_4_ |
                      (uint)!bVar8 * (int)fVar117);
  bVar8 = (bool)((byte)(uVar71 >> 4) & 1);
  fStack_230 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 4) & 1) * auVar84._16_4_ |
                      (uint)!bVar8 * (int)fVar118);
  bVar8 = (bool)((byte)(uVar71 >> 5) & 1);
  fStack_22c = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 5) & 1) * auVar84._20_4_ |
                      (uint)!bVar8 * (int)fVar142);
  bVar8 = (bool)((byte)(uVar71 >> 6) & 1);
  fStack_228 = (float)((uint)bVar8 * (uint)!(bool)((byte)(uVar73 >> 6) & 1) * auVar84._24_4_ |
                      (uint)!bVar8 * (int)fVar144);
  bVar8 = SUB81(uVar71 >> 7,0);
  fStack_224 = (float)((uint)bVar8 * (uint)!SUB81(uVar73 >> 7,0) * auVar84._28_4_ |
                      (uint)!bVar8 * (int)fVar146);
  auVar85._4_4_ = __real_322bcc77;
  auVar85._0_4_ = __real_322bcc77;
  auVar85._8_4_ = __real_322bcc77;
  auVar85._12_4_ = __real_322bcc77;
  auVar85._16_4_ = __real_322bcc77;
  auVar85._20_4_ = __real_322bcc77;
  auVar85._24_4_ = __real_322bcc77;
  auVar85._28_4_ = __real_322bcc77;
  uVar73 = vcmpps_avx512vl(auVar111,auVar85,1);
  auVar83 = vaddps_avx512vl(auVar96,auVar97);
  auVar149._4_4_ = param_7;
  auVar149._0_4_ = param_7;
  auVar149._8_4_ = param_7;
  auVar149._12_4_ = param_7;
  auVar149._16_4_ = param_7;
  auVar149._20_4_ = param_7;
  auVar149._24_4_ = param_7;
  auVar149._28_4_ = param_7;
  auVar82 = vdivps_avx(auVar149,auVar83);
  auVar82 = vsqrtps_avx(auVar82);
  fVar137 = local_1c0 * auVar82._0_4_;
  fVar138 = local_1c0 * auVar82._4_4_;
  fVar139 = local_1c0 * auVar82._8_4_;
  fVar140 = local_1c0 * auVar82._12_4_;
  fVar141 = local_1c0 * auVar82._16_4_;
  fVar143 = local_1c0 * auVar82._20_4_;
  fVar145 = local_1c0 * auVar82._24_4_;
  local_1c0 = local_1c0 * auVar82._28_4_;
  auVar82 = vdivps_avx(auVar148,auVar111);
  bVar8 = (bool)((byte)uVar73 & 1);
  bVar9 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar13 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar14 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar15 = SUB81(uVar73 >> 7,0);
  auVar126._0_4_ =
       param_6 * (float)((uint)bVar8 * (int)fVar137 | (uint)!bVar8 * (int)(fVar137 * auVar82._0_4_))
  ;
  auVar126._4_4_ =
       param_6 * (float)((uint)bVar9 * (int)fVar138 | (uint)!bVar9 * (int)(fVar138 * auVar82._4_4_))
  ;
  auVar126._8_4_ =
       param_6 * (float)((uint)bVar10 * (int)fVar139 |
                        (uint)!bVar10 * (int)(fVar139 * auVar82._8_4_));
  auVar126._12_4_ =
       param_6 * (float)((uint)bVar11 * (int)fVar140 |
                        (uint)!bVar11 * (int)(fVar140 * auVar82._12_4_));
  auVar126._16_4_ =
       param_6 * (float)((uint)bVar12 * (int)fVar141 |
                        (uint)!bVar12 * (int)(fVar141 * auVar82._16_4_));
  auVar126._20_4_ =
       param_6 * (float)((uint)bVar13 * (int)fVar143 |
                        (uint)!bVar13 * (int)(fVar143 * auVar82._20_4_));
  auVar126._24_4_ =
       param_6 * (float)((uint)bVar14 * (int)fVar145 |
                        (uint)!bVar14 * (int)(fVar145 * auVar82._24_4_));
  auVar126._28_4_ =
       param_6 * (float)((uint)bVar15 * (int)local_1c0 |
                        (uint)!bVar15 * (int)(local_1c0 * auVar82._28_4_));
  auVar82 = vsubps_avx512vl(auVar92,auVar98);
  auVar84 = vsubps_avx512vl(auVar94,auVar106);
  auVar85 = vsubps_avx512vl(auVar95,auVar107);
  auVar82 = vsubps_avx512vl(auVar82,auVar86);
  auVar82 = vaddps_avx512vl(auVar108,auVar82);
  auVar84 = vsubps_avx512vl(auVar84,auVar89);
  auVar84 = vaddps_avx512vl(auVar109,auVar84);
  auVar85 = vsubps_avx512vl(auVar85,auVar90);
  auVar85 = vaddps_avx512vl(auVar110,auVar85);
  auVar84 = vmulps_avx512vl(auVar84,_local_260);
  auVar82 = vfmadd231ps_avx512vl(auVar84,local_280,auVar82);
  auVar82 = vfmadd231ps_avx512vl(auVar82,_local_240,auVar85);
  piVar5 = (int *)(param_5 + lVar69);
  fVar1 = (float)((uint)(bVar74 & 1) * *piVar5);
  fVar137 = (float)((uint)((byte)(uVar71 >> 1) & 1) * piVar5[1]);
  auVar112._4_4_ = fVar137;
  auVar112._0_4_ = fVar1;
  fVar138 = (float)((uint)((byte)(uVar71 >> 2) & 1) * piVar5[2]);
  auVar112._8_4_ = fVar138;
  fVar139 = (float)((uint)((byte)(uVar71 >> 3) & 1) * piVar5[3]);
  auVar112._12_4_ = fVar139;
  fVar140 = (float)((uint)((byte)(uVar71 >> 4) & 1) * piVar5[4]);
  auVar112._16_4_ = fVar140;
  fVar141 = (float)((uint)((byte)(uVar71 >> 5) & 1) * piVar5[5]);
  auVar112._20_4_ = fVar141;
  fVar143 = (float)((uint)((byte)(uVar71 >> 6) & 1) * piVar5[6]);
  auVar112._24_4_ = fVar143;
  fVar145 = (float)((uint)(byte)(uVar71 >> 7) * piVar5[7]);
  auVar112._28_4_ = fVar145;
  auVar82 = vfnmsub213ps_avx512vl(auVar82,auVar126,auVar112);
  auVar127._0_4_ = auVar83._0_4_ * auVar126._0_4_ + __real_3f800000;
  auVar127._4_4_ = auVar83._4_4_ * auVar126._4_4_ + __real_3f800000;
  auVar127._8_4_ = auVar83._8_4_ * auVar126._8_4_ + __real_3f800000;
  auVar127._12_4_ = auVar83._12_4_ * auVar126._12_4_ + __real_3f800000;
  auVar127._16_4_ = auVar83._16_4_ * auVar126._16_4_ + __real_3f800000;
  auVar127._20_4_ = auVar83._20_4_ * auVar126._20_4_ + __real_3f800000;
  auVar127._24_4_ = auVar83._24_4_ * auVar126._24_4_ + __real_3f800000;
  auVar127._28_4_ = auVar83._28_4_ * auVar126._28_4_ + __real_3f800000;
  auVar82 = vdivps_avx512vl(auVar82,auVar127);
  fVar123 = auVar82._0_4_;
  fVar128 = auVar82._4_4_;
  fVar129 = auVar82._8_4_;
  fVar130 = auVar82._12_4_;
  fVar131 = auVar82._16_4_;
  fVar132 = auVar82._20_4_;
  fVar133 = auVar82._24_4_;
  fVar113 = auVar82._28_4_;
  puVar6 = (uint *)(param_5 + lVar69);
  bVar8 = (bool)((byte)(uVar71 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar71 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar71 >> 3) & 1);
  bVar11 = (bool)((byte)(uVar71 >> 4) & 1);
  bVar12 = (bool)((byte)(uVar71 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar71 >> 6) & 1);
  bVar14 = SUB81(uVar71 >> 7,0);
  *puVar6 = (uint)(bVar74 & 1) * (int)(fVar1 + fVar123) | (uint)!(bool)(bVar74 & 1) * *puVar6;
  puVar6[1] = (uint)bVar8 * (int)(fVar137 + fVar128) | (uint)!bVar8 * puVar6[1];
  puVar6[2] = (uint)bVar9 * (int)(fVar138 + fVar129) | (uint)!bVar9 * puVar6[2];
  puVar6[3] = (uint)bVar10 * (int)(fVar139 + fVar130) | (uint)!bVar10 * puVar6[3];
  puVar6[4] = (uint)bVar11 * (int)(fVar140 + fVar131) | (uint)!bVar11 * puVar6[4];
  puVar6[5] = (uint)bVar12 * (int)(fVar141 + fVar132) | (uint)!bVar12 * puVar6[5];
  puVar6[6] = (uint)bVar13 * (int)(fVar143 + fVar133) | (uint)!bVar13 * puVar6[6];
  puVar6[7] = (uint)bVar14 * (int)(fVar145 + fVar113) | (uint)!bVar14 * puVar6[7];
  auVar83 = vmulps_avx512vl(local_280,auVar82);
  auVar84 = vfmadd231ps_avx512vl(auVar92,auVar96,auVar83);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar71,auVar84);
  auVar134._0_4_ = (float)local_260._0_4_ * fVar123;
  auVar134._4_4_ = (float)local_260._4_4_ * fVar128;
  auVar134._8_4_ = fStack_258 * fVar129;
  auVar134._12_4_ = fStack_254 * fVar130;
  auVar134._16_4_ = fStack_250 * fVar131;
  auVar134._20_4_ = fStack_24c * fVar132;
  auVar134._24_4_ = fStack_248 * fVar133;
  auVar134._28_4_ = fStack_244 * fVar113;
  auVar84 = vfmadd231ps_avx512vl(auVar94,auVar96,auVar134);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar122),uVar71,auVar84);
  auVar120._0_4_ = (float)local_240._0_4_ * fVar123;
  auVar120._4_4_ = (float)local_240._4_4_ * fVar128;
  auVar120._8_4_ = fStack_238 * fVar129;
  auVar120._12_4_ = fStack_234 * fVar130;
  auVar120._16_4_ = fStack_230 * fVar131;
  auVar120._20_4_ = fStack_22c * fVar132;
  auVar120._24_4_ = fStack_228 * fVar133;
  auVar120._28_4_ = fStack_224 * fVar113;
  auVar84 = vfmadd231ps_avx512vl(auVar95,auVar96,auVar120);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar120,uVar71,auVar84);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar134,uVar71,auVar96);
  auVar83 = vfnmadd213ps_avx512vl(auVar83,auVar97,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar100,uVar71,auVar83);
  auVar84 = vfnmadd213ps_avx512vl(auVar134,auVar97,auVar89);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar83,uVar71,auVar84);
  auVar83 = vfnmadd213ps_avx512vl(auVar120,auVar97,auVar90);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar82,uVar71,auVar83);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar122),uVar71,auVar97);
  return;
}

// ApplyXPBDSpringConstraintsWithWeightMaps_avx512skx @ 14090c8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithWeightMaps_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,float param_5
               ,longlong param_6,longlong param_7,uint param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [32];
  int *piVar4;
  uint *puVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
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
  bool bVar64;
  bool bVar65;
  ulonglong uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  ulonglong unaff_RBX;
  uint uVar74;
  undefined1 auVar81 [16];
  undefined1 (*pauVar75) [16];
  ulonglong uVar76;
  longlong lVar77;
  longlong unaff_R12;
  ulonglong unaff_R14;
  byte bVar78;
  int iVar79;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  int iVar110;
  int iVar111;
  undefined1 auVar87 [32];
  undefined1 auVar80 [16];
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
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar82 [16];
  int iVar112;
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [32];
  float fVar117;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar118 [32];
  float fVar125;
  undefined1 auVar126 [32];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 auVar127 [16];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 auVar128 [16];
  undefined1 in_ZMM25 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
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
  int aiStack_178 [4];
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
  
  auVar107 = ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001;
  auVar106 = ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000;
  auVar85 = in_ZMM26._0_16_;
  auVar128 = in_ZMM25._0_16_;
  auVar84 = in_ZMM24._0_16_;
  auVar83 = in_ZMM20._0_16_;
  auVar82 = in_ZMM23._0_16_;
  auVar127 = in_ZMM22._0_16_;
  auVar81 = in_ZMM21._0_16_;
  uVar74 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar74 = param_8;
  }
  uVar74 = uVar74 & 0xfffffff8;
  if ((int)uVar74 < 1) {
    uVar76 = 0;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    unaff_RBX = 0;
    auVar114._4_4_ = __real_00000004;
    auVar114._0_4_ = __real_00000004;
    auVar114._8_4_ = __real_00000004;
    auVar114._12_4_ = __real_00000004;
    auVar108._16_4_ = __real_00000004;
    auVar108._0_16_ = auVar114;
    auVar108._20_4_ = __real_00000004;
    auVar108._24_4_ = __real_00000004;
    auVar108._28_4_ = __real_00000004;
    auVar115._4_4_ = __real_00000008;
    auVar115._0_4_ = __real_00000008;
    auVar115._8_4_ = __real_00000008;
    auVar115._12_4_ = __real_00000008;
    auVar109._16_4_ = __real_00000008;
    auVar109._0_16_ = auVar115;
    auVar109._20_4_ = __real_00000008;
    auVar109._24_4_ = __real_00000008;
    auVar109._28_4_ = __real_00000008;
    auVar87 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar80 = vxorps_avx512vl(in_ZMM17._0_16_,in_ZMM17._0_16_);
    auVar88 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar89 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
    uVar76 = 0;
    do {
      auVar90 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + unaff_RBX * 2));
      auVar91 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_2 + 0x20 + unaff_RBX * 2));
      auVar92 = vmovdqa64_avx512vl(auVar90);
      auVar92 = vpermt2d_avx512vl(auVar92,auVar106,auVar91);
      auVar90 = vpermt2d_avx512vl(auVar90,auVar107,auVar91);
      auVar93 = vpslld_avx512vl(auVar92,4);
      auVar94 = vpslld_avx512vl(auVar90,4);
      auVar83 = auVar94._0_16_;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar96 = vgatherdps_avx512vl(*param_1);
      auVar84 = auVar96._0_16_;
      in_ZMM24 = ZEXT3264(auVar96);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar127 = auVar83 | auVar114;
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar76));
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_8));
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar128 = auVar83 | auVar115;
      vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      unaff_R14 = unaff_RBX & 0xffffffff;
      pfVar1 = (float *)(param_4 + unaff_R14);
      fVar67 = pfVar1[1];
      fVar68 = pfVar1[2];
      fVar69 = pfVar1[3];
      fVar70 = pfVar1[4];
      fVar71 = pfVar1[5];
      fVar72 = pfVar1[6];
      fVar73 = pfVar1[7];
      auVar81._8_8_ = 0;
      auVar81._0_8_ = *(ulonglong *)(param_6 + uVar76);
      auVar90 = vpmovzxbd_avx2(auVar81);
      auVar101 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      in_ZMM31 = ZEXT3264(auVar101);
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar74));
      auVar90 = vpslld_avx2(auVar90,2);
      vpmovzxdq_avx2(auVar90._0_16_);
      vpmovzxdq_avx2(auVar90._16_16_);
      auVar81 = vgatherqps_avx512vl(*(undefined8 *)(param_7 + uVar76));
      auVar82 = vgatherqps_avx512vl(*(undefined8 *)(param_7 + unaff_R12));
      auVar90 = vsubps_avx512vl(auVar95,auVar96);
      auVar91 = vsubps_avx512vl(auVar97,auVar98);
      auVar92 = vsubps_avx512vl(auVar99,auVar100);
      auVar113._0_4_ =
           auVar92._0_4_ * auVar92._0_4_ +
           auVar90._0_4_ * auVar90._0_4_ + auVar91._0_4_ * auVar91._0_4_;
      auVar113._4_4_ =
           auVar92._4_4_ * auVar92._4_4_ +
           auVar90._4_4_ * auVar90._4_4_ + auVar91._4_4_ * auVar91._4_4_;
      auVar113._8_4_ =
           auVar92._8_4_ * auVar92._8_4_ +
           auVar90._8_4_ * auVar90._8_4_ + auVar91._8_4_ * auVar91._8_4_;
      auVar113._12_4_ =
           auVar92._12_4_ * auVar92._12_4_ +
           auVar90._12_4_ * auVar90._12_4_ + auVar91._12_4_ * auVar91._12_4_;
      auVar113._16_4_ =
           auVar92._16_4_ * auVar92._16_4_ +
           auVar90._16_4_ * auVar90._16_4_ + auVar91._16_4_ * auVar91._16_4_;
      auVar113._20_4_ =
           auVar92._20_4_ * auVar92._20_4_ +
           auVar90._20_4_ * auVar90._20_4_ + auVar91._20_4_ * auVar91._20_4_;
      auVar113._24_4_ =
           auVar92._24_4_ * auVar92._24_4_ +
           auVar90._24_4_ * auVar90._24_4_ + auVar91._24_4_ * auVar91._24_4_;
      auVar113._28_4_ =
           auVar92._28_4_ * auVar92._28_4_ +
           auVar90._28_4_ * auVar90._28_4_ + auVar91._28_4_ * auVar91._28_4_;
      auVar104 = vsqrtps_avx(auVar113);
      uVar66 = vcmpps_avx512vl(auVar113,auVar88,1);
      auVar90 = vdivps_avx(auVar90,auVar104);
      auVar91 = vdivps_avx(auVar91,auVar104);
      auVar92 = vdivps_avx(auVar92,auVar104);
      bVar78 = (byte)uVar66;
      iVar79 = auVar80._0_4_;
      auVar103._0_4_ = (uint)(bVar78 & 1) * iVar79 | (uint)!(bool)(bVar78 & 1) * auVar104._0_4_;
      bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
      iVar110 = auVar80._4_4_;
      auVar103._4_4_ = (uint)bVar9 * iVar110 | (uint)!bVar9 * auVar104._4_4_;
      bVar9 = (bool)((byte)(uVar66 >> 2) & 1);
      iVar111 = auVar80._8_4_;
      auVar103._8_4_ = (uint)bVar9 * iVar111 | (uint)!bVar9 * auVar104._8_4_;
      bVar9 = (bool)((byte)(uVar66 >> 3) & 1);
      iVar112 = auVar80._12_4_;
      auVar103._12_4_ = (uint)bVar9 * iVar112 | (uint)!bVar9 * auVar104._12_4_;
      auVar103._16_4_ = (uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar104._16_4_;
      auVar103._20_4_ = (uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar104._20_4_;
      auVar103._24_4_ = (uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar104._24_4_;
      bVar9 = SUB81(uVar66 >> 7,0);
      auVar103._28_4_ =
           (uint)bVar9 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar9 * auVar104._28_4_
      ;
      auVar104 = vsubps_avx(auVar103,*(undefined1 (*) [32])(param_3 + unaff_R14));
      auVar103 = vaddps_avx512vl(auVar101,auVar102);
      auVar118._0_4_ = auVar81._0_4_ * param_5 * param_5;
      auVar118._4_4_ = auVar81._4_4_ * param_5 * param_5;
      auVar118._8_4_ = auVar81._8_4_ * param_5 * param_5;
      auVar118._12_4_ = auVar81._12_4_ * param_5 * param_5;
      auVar118._16_4_ = auVar82._0_4_ * param_5 * param_5;
      auVar118._20_4_ = auVar82._4_4_ * param_5 * param_5;
      auVar118._24_4_ = auVar82._8_4_ * param_5 * param_5;
      auVar118._28_4_ = auVar82._12_4_ * param_5 * param_5;
      auVar126._0_4_ = -(auVar118._0_4_ * auVar104._0_4_) - *pfVar1;
      auVar126._4_4_ = -(auVar118._4_4_ * auVar104._4_4_) - fVar67;
      auVar126._8_4_ = -(auVar118._8_4_ * auVar104._8_4_) - fVar68;
      auVar126._12_4_ = -(auVar118._12_4_ * auVar104._12_4_) - fVar69;
      auVar126._16_4_ = -(auVar118._16_4_ * auVar104._16_4_) - fVar70;
      auVar126._20_4_ = -(auVar118._20_4_ * auVar104._20_4_) - fVar71;
      auVar126._24_4_ = -(auVar118._24_4_ * auVar104._24_4_) - fVar72;
      auVar126._28_4_ = -(auVar118._28_4_ * auVar104._28_4_) - fVar73;
      auVar104 = vfmadd213ps_avx512vl(auVar103,auVar118,auVar89);
      auVar104 = vdivps_avx(auVar126,auVar104);
      fVar117 = auVar104._0_4_;
      fVar119 = auVar104._4_4_;
      fVar120 = auVar104._8_4_;
      fVar121 = auVar104._12_4_;
      fVar122 = auVar104._16_4_;
      fVar123 = auVar104._20_4_;
      fVar124 = auVar104._24_4_;
      fVar125 = auVar104._28_4_;
      auVar105._0_4_ =
           (uint)(bVar78 & 1) * (int)fVar117 |
           (uint)!(bool)(bVar78 & 1) * (int)(fVar117 * auVar90._0_4_);
      bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
      auVar105._4_4_ = (uint)bVar9 * (int)fVar119 | (uint)!bVar9 * (int)(fVar119 * auVar90._4_4_);
      bVar9 = (bool)((byte)(uVar66 >> 2) & 1);
      auVar105._8_4_ = (uint)bVar9 * (int)fVar120 | (uint)!bVar9 * (int)(fVar120 * auVar90._8_4_);
      bVar9 = (bool)((byte)(uVar66 >> 3) & 1);
      auVar105._12_4_ = (uint)bVar9 * (int)fVar121 | (uint)!bVar9 * (int)(fVar121 * auVar90._12_4_);
      bVar9 = (bool)((byte)(uVar66 >> 4) & 1);
      auVar105._16_4_ = (uint)bVar9 * (int)fVar122 | (uint)!bVar9 * (int)(fVar122 * auVar90._16_4_);
      bVar9 = (bool)((byte)(uVar66 >> 5) & 1);
      auVar105._20_4_ = (uint)bVar9 * (int)fVar123 | (uint)!bVar9 * (int)(fVar123 * auVar90._20_4_);
      bVar9 = (bool)((byte)(uVar66 >> 6) & 1);
      auVar105._24_4_ = (uint)bVar9 * (int)fVar124 | (uint)!bVar9 * (int)(fVar124 * auVar90._24_4_);
      bVar9 = SUB81(uVar66 >> 7,0);
      auVar105._28_4_ = (uint)bVar9 * (int)fVar125 | (uint)!bVar9 * (int)(fVar125 * auVar90._28_4_);
      pfVar2 = (float *)(param_4 + unaff_R14);
      *pfVar2 = *pfVar1 + fVar117;
      pfVar2[1] = fVar67 + fVar119;
      pfVar2[2] = fVar68 + fVar120;
      pfVar2[3] = fVar69 + fVar121;
      pfVar2[4] = fVar70 + fVar122;
      pfVar2[5] = fVar71 + fVar123;
      pfVar2[6] = fVar72 + fVar124;
      pfVar2[7] = fVar73 + fVar125;
      auVar90 = vfmadd231ps_avx512vl(auVar95,auVar101,auVar105);
      in_ZMM28 = ZEXT3264(auVar90);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar109,0xffff,auVar90);
      auVar90._0_4_ = (uint)(bVar78 & 1) * iVar79 | (uint)!(bool)(bVar78 & 1) * auVar91._0_4_;
      bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
      auVar90._4_4_ = (uint)bVar9 * iVar110 | (uint)!bVar9 * auVar91._4_4_;
      bVar9 = (bool)((byte)(uVar66 >> 2) & 1);
      auVar90._8_4_ = (uint)bVar9 * iVar111 | (uint)!bVar9 * auVar91._8_4_;
      bVar9 = (bool)((byte)(uVar66 >> 3) & 1);
      auVar90._12_4_ = (uint)bVar9 * iVar112 | (uint)!bVar9 * auVar91._12_4_;
      auVar90._16_4_ = (uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar91._16_4_;
      auVar90._20_4_ = (uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar91._20_4_;
      auVar90._24_4_ = (uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar91._24_4_;
      auVar90._28_4_ = (uint)!SUB81(uVar66 >> 7,0) * auVar91._28_4_;
      auVar90 = vmulps_avx512vl(auVar90,auVar104);
      auVar81 = auVar90._0_16_;
      auVar91 = vfmadd231ps_avx512vl(auVar97,auVar101,auVar90);
      in_ZMM29 = ZEXT3264(auVar91);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar104,0xffff,auVar91);
      auVar91._0_4_ = (uint)(bVar78 & 1) * iVar79 | (uint)!(bool)(bVar78 & 1) * auVar92._0_4_;
      bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
      auVar91._4_4_ = (uint)bVar9 * iVar110 | (uint)!bVar9 * auVar92._4_4_;
      bVar9 = (bool)((byte)(uVar66 >> 2) & 1);
      auVar91._8_4_ = (uint)bVar9 * iVar111 | (uint)!bVar9 * auVar92._8_4_;
      bVar9 = (bool)((byte)(uVar66 >> 3) & 1);
      auVar91._12_4_ = (uint)bVar9 * iVar112 | (uint)!bVar9 * auVar92._12_4_;
      auVar91._16_4_ = (uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar92._16_4_;
      auVar91._20_4_ = (uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar92._20_4_;
      auVar91._24_4_ = (uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar92._24_4_;
      bVar9 = SUB81(uVar66 >> 7,0);
      auVar91._28_4_ =
           (uint)bVar9 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar9 * auVar92._28_4_;
      auVar92 = vmulps_avx512vl(auVar91,auVar104);
      auVar104 = vfmadd231ps_avx512vl(auVar99,auVar101,auVar92);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,0xffff,auVar104);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar93 | auVar87),0xffff,auVar101);
      auVar91 = vfmadd213ps_avx512vl(auVar105,auVar102,auVar96);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar108,0xffff,auVar91);
      auVar90 = vfmadd231ps_avx512vl(auVar98,auVar102,auVar90);
      in_ZMM23 = ZEXT3264(auVar90);
      auVar82 = auVar90._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar104,0xffff,auVar90);
      auVar90 = vfmadd231ps_avx512vl(auVar100,auVar102,auVar92);
      in_ZMM26 = ZEXT3264(auVar90);
      auVar85 = auVar90._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar93 | auVar87),0xffff,auVar90);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar94 | auVar87),0xffff,auVar102);
      uVar76 = uVar76 + 8;
      unaff_RBX = unaff_RBX + 0x20;
    } while ((int)uVar76 < (int)uVar74);
    if ((int)param_8 <= (int)uVar76) {
      return;
    }
  }
  auVar106 = vpbroadcastd_avx512vl();
  auVar106 = vpor_avx2(auVar106,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar107 = vpbroadcastd_avx512vl();
  uVar66 = vpcmpgtd_avx512vl(auVar107,auVar106);
  pauVar3 = (undefined1 (*) [32])(param_2 + (uVar76 & 0xffffffff) * 8);
  bVar78 = (byte)uVar66;
  if (bVar78 == 0xff) {
    auVar107 = vpermi2d_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                 ,*pauVar3,pauVar3[1]);
    auVar106 = vpermi2d_avx512vl(___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                 ,*pauVar3,pauVar3[1]);
  }
  else {
    auVar106 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar3 + param_7));
    auVar107._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * auVar106._4_4_;
    auVar107._0_4_ = (uint)(bVar78 & 1) * auVar106._0_4_;
    auVar107._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * auVar106._8_4_;
    auVar107._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * auVar106._12_4_;
    auVar107._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * auVar106._16_4_;
    auVar107._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * auVar106._20_4_;
    auVar107._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * auVar106._24_4_;
    auVar107._28_4_ = (uint)(byte)(uVar66 >> 7) * auVar106._28_4_;
    auVar87 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar3 + param_7));
    auVar106._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * auVar87._4_4_;
    auVar106._0_4_ = (uint)(bVar78 & 1) * auVar87._0_4_;
    auVar106._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * auVar87._8_4_;
    auVar106._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * auVar87._12_4_;
    auVar106._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * auVar87._16_4_;
    auVar106._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * auVar87._20_4_;
    auVar106._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * auVar87._24_4_;
    auVar106._28_4_ = (uint)(byte)(uVar66 >> 7) * auVar87._28_4_;
  }
  auVar91 = vpslld_avx2(auVar107,4);
  auVar95._4_4_ = __real_00000004;
  auVar95._0_4_ = __real_00000004;
  auVar95._8_4_ = __real_00000004;
  auVar95._12_4_ = __real_00000004;
  auVar95._16_4_ = __real_00000004;
  auVar95._20_4_ = __real_00000004;
  auVar95._24_4_ = __real_00000004;
  auVar95._28_4_ = __real_00000004;
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar107 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar31 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar127 = vxorps_avx512vl(auVar127,auVar127);
  auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  bVar10 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar32 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar88 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
  auVar82 = vxorps_avx512vl(auVar82,auVar82);
  auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
  bVar11 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar66 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar83 = vxorps_avx512vl(auVar83,auVar83);
  auVar108 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)pauVar3));
  auVar92._0_4_ = (uint)(bVar78 & 1) * auVar108._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar83._0_4_;
  bVar12 = (bool)((byte)(uVar66 >> 1) & 1);
  auVar92._4_4_ = (uint)bVar12 * auVar108._4_4_ | (uint)!bVar12 * auVar83._4_4_;
  bVar12 = (bool)((byte)(uVar66 >> 2) & 1);
  auVar92._8_4_ = (uint)bVar12 * auVar108._8_4_ | (uint)!bVar12 * auVar83._8_4_;
  bVar12 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar92._12_4_ = (uint)bVar12 * auVar108._12_4_ | (uint)!bVar12 * auVar83._12_4_;
  auVar92._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * auVar108._16_4_;
  auVar92._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * auVar108._20_4_;
  auVar92._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * auVar108._24_4_;
  auVar92._28_4_ = (uint)(byte)(uVar66 >> 7) * auVar108._28_4_;
  auVar96 = vpslld_avx2(auVar106,4);
  auVar84 = vxorps_avx512vl(auVar84,auVar84);
  auVar106 = vgatherdps_avx512vl(*param_1);
  bVar12 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar23 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar108 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_7));
  auVar83 = vxorps_avx512vl(auVar128,auVar128);
  auVar109 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar13 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar35 = (bool)((byte)(uVar66 >> 3) & 1);
  auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
  auVar104._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * auVar90._4_4_;
  auVar104._0_4_ = (uint)(bVar78 & 1) * auVar90._0_4_;
  auVar104._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * auVar90._8_4_;
  auVar104._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * auVar90._12_4_;
  auVar104._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * auVar90._16_4_;
  auVar104._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * auVar90._20_4_;
  auVar104._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * auVar90._24_4_;
  auVar104._28_4_ = (uint)(byte)(uVar66 >> 7) * auVar90._28_4_;
  bVar14 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar25 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar36 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar42 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar48 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar54 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar60 = SUB81(uVar66 >> 7,0);
  bVar15 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar26 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar37 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar43 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar49 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar55 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar61 = SUB81(uVar66 >> 7,0);
  bVar16 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar27 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar38 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar44 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar50 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar56 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar62 = SUB81(uVar66 >> 7,0);
  bVar17 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar28 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar39 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar45 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar51 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar57 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar63 = SUB81(uVar66 >> 7,0);
  bVar18 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar29 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar40 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar46 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar52 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar58 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar64 = SUB81(uVar66 >> 7,0);
  bVar19 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar30 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar41 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar47 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar53 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar59 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar65 = SUB81(uVar66 >> 7,0);
  lVar77 = (longlong)((int)uVar76 << 2);
  piVar4 = (int *)(param_3 + lVar77);
  auVar93._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * piVar4[1];
  auVar93._0_4_ = (uint)(bVar78 & 1) * *piVar4;
  auVar93._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * piVar4[2];
  auVar93._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * piVar4[3];
  auVar93._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * piVar4[4];
  auVar93._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * piVar4[5];
  auVar93._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * piVar4[6];
  auVar93._28_4_ = (uint)(byte)(uVar66 >> 7) * piVar4[7];
  puVar5 = (uint *)(param_4 + lVar77);
  piVar4 = (int *)(param_4 + lVar77);
  auVar94._4_4_ = (uint)((byte)(uVar66 >> 1) & 1) * piVar4[1];
  auVar94._0_4_ = (uint)(bVar78 & 1) * *piVar4;
  auVar94._8_4_ = (uint)((byte)(uVar66 >> 2) & 1) * piVar4[2];
  auVar94._12_4_ = (uint)((byte)(uVar66 >> 3) & 1) * piVar4[3];
  auVar94._16_4_ = (uint)((byte)(uVar66 >> 4) & 1) * piVar4[4];
  auVar94._20_4_ = (uint)((byte)(uVar66 >> 5) & 1) * piVar4[5];
  auVar94._24_4_ = (uint)((byte)(uVar66 >> 6) & 1) * piVar4[6];
  auVar94._28_4_ = (uint)(byte)(uVar66 >> 7) * piVar4[7];
  pauVar75 = (undefined1 (*) [16])(param_6 + (uVar76 & 0xffffffff));
  if ((~bVar78 & 0x81) == 0) {
    uVar76 = *(ulonglong *)*pauVar75;
  }
  else {
    auVar128 = vmovdqu8_avx512vl(*pauVar75);
    uVar76 = CONCAT17((char)(uVar66 >> 7) * auVar128[7],
                      CONCAT16(((byte)(uVar66 >> 6) & 1) * auVar128[6],
                               CONCAT15(((byte)(uVar66 >> 5) & 1) * auVar128[5],
                                        CONCAT14(((byte)(uVar66 >> 4) & 1) * auVar128[4],
                                                 CONCAT13(((byte)(uVar66 >> 3) & 1) * auVar128[3],
                                                          CONCAT12(((byte)(uVar66 >> 2) & 1) *
                                                                   auVar128[2],
                                                                   CONCAT11(((byte)(uVar66 >> 1) & 1
                                                                            ) * auVar128[1],
                                                                            (bVar78 & 1) *
                                                                            auVar128[0])))))));
  }
  auVar128._8_8_ = 0;
  auVar128._0_8_ = uVar76;
  auVar90 = vpmovzxbd_avx512vl(auVar128);
  auVar90 = vpslld_avx2(auVar90,2);
  auVar128 = vextracti32x4_avx512vl(auVar90,1);
  vpmovzxdq_avx512vl(auVar128);
  vpmovzxdq_avx2(auVar90._0_16_);
  auVar128 = vxorps_avx512vl(auVar85,auVar85);
  auVar85 = vgatherqps_avx512vl(*(undefined8 *)(param_7 * 2));
  bVar6 = (bool)((byte)(uVar66 >> 1) & 1);
  auVar80 = vgatherqps_avx512vl(*(undefined8 *)(param_7 + (ulonglong)(byte)~bVar78));
  bVar7 = (bool)(bVar78 >> 5 & 1);
  auVar86._8_8_ = (ulonglong)bVar7 * auVar80._8_8_ | (ulonglong)!bVar7 * SUB168(ZEXT816(0),4);
  auVar86._0_8_ = (ulonglong)(bVar78 >> 4 & 1) * auVar80._0_8_;
  auVar99._4_4_ =
       (uint)bVar14 * ((uint)bVar9 * auVar107._4_4_ | (uint)!bVar9 * auVar81._4_4_) |
       (uint)!bVar14 * iStack_13c;
  auVar99._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar107._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar81._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_140;
  auVar99._8_4_ =
       (uint)bVar25 * ((uint)bVar20 * auVar107._8_4_ | (uint)!bVar20 * auVar81._8_4_) |
       (uint)!bVar25 * iStack_138;
  auVar99._12_4_ =
       (uint)bVar36 * ((uint)bVar31 * auVar107._12_4_ | (uint)!bVar31 * auVar81._12_4_) |
       (uint)!bVar36 * iStack_134;
  auVar99._16_4_ =
       (uint)bVar42 * (uint)((byte)(uVar66 >> 4) & 1) * auVar107._16_4_ | (uint)!bVar42 * iStack_130
  ;
  auVar99._20_4_ =
       (uint)bVar48 * (uint)((byte)(uVar66 >> 5) & 1) * auVar107._20_4_ | (uint)!bVar48 * iStack_12c
  ;
  auVar99._24_4_ =
       (uint)bVar54 * (uint)((byte)(uVar66 >> 6) & 1) * auVar107._24_4_ | (uint)!bVar54 * iStack_128
  ;
  auVar99._28_4_ =
       (uint)bVar60 * (uint)(byte)(uVar66 >> 7) * auVar107._28_4_ | (uint)!bVar60 * iStack_124;
  auVar100._4_4_ =
       (uint)bVar15 * ((uint)bVar10 * auVar87._4_4_ | (uint)!bVar10 * auVar127._4_4_) |
       (uint)!bVar15 * iStack_11c;
  auVar100._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar127._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_120;
  auVar100._8_4_ =
       (uint)bVar26 * ((uint)bVar21 * auVar87._8_4_ | (uint)!bVar21 * auVar127._8_4_) |
       (uint)!bVar26 * iStack_118;
  auVar100._12_4_ =
       (uint)bVar37 * ((uint)bVar32 * auVar87._12_4_ | (uint)!bVar32 * auVar127._12_4_) |
       (uint)!bVar37 * iStack_114;
  auVar100._16_4_ =
       (uint)bVar43 * (uint)((byte)(uVar66 >> 4) & 1) * auVar87._16_4_ | (uint)!bVar43 * iStack_110;
  auVar100._20_4_ =
       (uint)bVar49 * (uint)((byte)(uVar66 >> 5) & 1) * auVar87._20_4_ | (uint)!bVar49 * iStack_10c;
  auVar100._24_4_ =
       (uint)bVar55 * (uint)((byte)(uVar66 >> 6) & 1) * auVar87._24_4_ | (uint)!bVar55 * iStack_108;
  auVar100._28_4_ =
       (uint)bVar61 * (uint)(byte)(uVar66 >> 7) * auVar87._28_4_ | (uint)!bVar61 * iStack_104;
  auVar101._4_4_ =
       (uint)bVar16 * ((uint)bVar11 * auVar89._4_4_ | (uint)!bVar11 * auVar82._4_4_) |
       (uint)!bVar16 * iStack_fc;
  auVar101._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar82._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_100;
  auVar101._8_4_ =
       (uint)bVar27 * ((uint)bVar22 * auVar89._8_4_ | (uint)!bVar22 * auVar82._8_4_) |
       (uint)!bVar27 * iStack_f8;
  auVar101._12_4_ =
       (uint)bVar38 * ((uint)bVar33 * auVar89._12_4_ | (uint)!bVar33 * auVar82._12_4_) |
       (uint)!bVar38 * iStack_f4;
  auVar101._16_4_ =
       (uint)bVar44 * (uint)((byte)(uVar66 >> 4) & 1) * auVar89._16_4_ | (uint)!bVar44 * iStack_f0;
  auVar101._20_4_ =
       (uint)bVar50 * (uint)((byte)(uVar66 >> 5) & 1) * auVar89._20_4_ | (uint)!bVar50 * iStack_ec;
  auVar101._24_4_ =
       (uint)bVar56 * (uint)((byte)(uVar66 >> 6) & 1) * auVar89._24_4_ | (uint)!bVar56 * iStack_e8;
  auVar101._28_4_ =
       (uint)bVar62 * (uint)(byte)(uVar66 >> 7) * auVar89._28_4_ | (uint)!bVar62 * iStack_e4;
  auVar89._4_4_ =
       (uint)bVar17 * ((uint)bVar12 * auVar106._4_4_ | (uint)!bVar12 * auVar84._4_4_) |
       (uint)!bVar17 * iStack_19c;
  auVar89._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar106._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar84._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_1a0;
  auVar89._8_4_ =
       (uint)bVar28 * ((uint)bVar23 * auVar106._8_4_ | (uint)!bVar23 * auVar84._8_4_) |
       (uint)!bVar28 * iStack_198;
  auVar89._12_4_ =
       (uint)bVar39 * ((uint)bVar34 * auVar106._12_4_ | (uint)!bVar34 * auVar84._12_4_) |
       (uint)!bVar39 * iStack_194;
  auVar89._16_4_ =
       (uint)bVar45 * (uint)((byte)(uVar66 >> 4) & 1) * auVar106._16_4_ | (uint)!bVar45 * iStack_190
  ;
  auVar89._20_4_ =
       (uint)bVar51 * (uint)((byte)(uVar66 >> 5) & 1) * auVar106._20_4_ | (uint)!bVar51 * iStack_18c
  ;
  auVar89._24_4_ =
       (uint)bVar57 * (uint)((byte)(uVar66 >> 6) & 1) * auVar106._24_4_ | (uint)!bVar57 * iStack_188
  ;
  auVar89._28_4_ =
       (uint)bVar63 * (uint)(byte)(uVar66 >> 7) * auVar106._28_4_ | (uint)!bVar63 * iStack_184;
  auVar97._4_4_ =
       (uint)bVar18 * (uint)((byte)(uVar66 >> 1) & 1) * auVar108._4_4_ | (uint)!bVar18 * iStack_17c;
  auVar97._0_4_ =
       (uint)(bVar78 & 1) * (uint)(bVar78 & 1) * auVar108._0_4_ |
       (uint)!(bool)(bVar78 & 1) * local_180;
  auVar97._8_4_ =
       (uint)bVar29 * (uint)((byte)(uVar66 >> 2) & 1) * auVar108._8_4_ |
       (uint)!bVar29 * aiStack_178[0];
  auVar97._12_4_ =
       (uint)bVar40 * (uint)((byte)(uVar66 >> 3) & 1) * auVar108._12_4_ |
       (uint)!bVar40 * aiStack_178[1];
  auVar97._16_4_ =
       (uint)bVar46 * (uint)((byte)(uVar66 >> 4) & 1) * auVar108._16_4_ |
       (uint)!bVar46 * aiStack_178[2];
  auVar97._20_4_ =
       (uint)bVar52 * (uint)((byte)(uVar66 >> 5) & 1) * auVar108._20_4_ |
       (uint)!bVar52 * aiStack_178[3];
  auVar97._24_4_ =
       (uint)bVar58 * (uint)((byte)(uVar66 >> 6) & 1) * auVar108._24_4_ | (uint)!bVar58 * iStack_168
  ;
  auVar97._28_4_ =
       (uint)bVar64 * (uint)(byte)(uVar66 >> 7) * auVar108._28_4_ | (uint)!bVar64 * iStack_164;
  auVar107 = vinsertf32x4_avx512vl
                       (ZEXT1632(CONCAT88((ulonglong)bVar6 * auVar85._8_8_ |
                                          (ulonglong)!bVar6 * auVar128._8_8_,
                                          (ulonglong)(bVar78 & 1) * auVar85._0_8_ |
                                          (ulonglong)!(bool)(bVar78 & 1) * auVar128._0_8_)),auVar86,
                        1);
  auVar98._4_4_ =
       (uint)bVar19 * ((uint)bVar13 * auVar109._4_4_ | (uint)!bVar13 * auVar83._4_4_) |
       (uint)!bVar19 * iStack_15c;
  auVar98._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar109._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar83._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_160;
  auVar98._8_4_ =
       (uint)bVar30 * ((uint)bVar24 * auVar109._8_4_ | (uint)!bVar24 * auVar83._8_4_) |
       (uint)!bVar30 * iStack_158;
  auVar98._12_4_ =
       (uint)bVar41 * ((uint)bVar35 * auVar109._12_4_ | (uint)!bVar35 * auVar83._12_4_) |
       (uint)!bVar41 * iStack_154;
  auVar98._16_4_ =
       (uint)bVar47 * (uint)((byte)(uVar66 >> 4) & 1) * auVar109._16_4_ | (uint)!bVar47 * iStack_150
  ;
  auVar98._20_4_ =
       (uint)bVar53 * (uint)((byte)(uVar66 >> 5) & 1) * auVar109._20_4_ | (uint)!bVar53 * iStack_14c
  ;
  auVar98._24_4_ =
       (uint)bVar59 * (uint)((byte)(uVar66 >> 6) & 1) * auVar109._24_4_ | (uint)!bVar59 * iStack_148
  ;
  auVar98._28_4_ =
       (uint)bVar65 * (uint)(byte)(uVar66 >> 7) * auVar109._28_4_ | (uint)!bVar65 * iStack_144;
  auVar108 = vsubps_avx512vl(auVar99,auVar89);
  auVar109 = vsubps_avx512vl(auVar100,auVar97);
  auVar90 = vsubps_avx512vl(auVar101,auVar98);
  auVar106 = vmulps_avx512vl(auVar109,auVar109);
  auVar106 = vfmadd231ps_avx512vl(auVar106,auVar108,auVar108);
  auVar102 = vfmadd231ps_avx512vl(auVar106,auVar90,auVar90);
  auVar106 = vsqrtps_avx(auVar102);
  auVar87._4_4_ = __real_38d1b717;
  auVar87._0_4_ = __real_38d1b717;
  auVar87._8_4_ = __real_38d1b717;
  auVar87._12_4_ = __real_38d1b717;
  auVar87._16_4_ = __real_38d1b717;
  auVar87._20_4_ = __real_38d1b717;
  auVar87._24_4_ = __real_38d1b717;
  auVar87._28_4_ = __real_38d1b717;
  uVar76 = vcmpps_avx512vl(auVar102,auVar87,1);
  auVar87 = vdivps_avx512vl(auVar108,auVar106);
  auVar102 = vdivps_avx512vl(auVar109,auVar106);
  auVar103 = vdivps_avx512vl(auVar90,auVar106);
  auVar116._4_4_ = __real_3f800000;
  auVar116._0_4_ = __real_3f800000;
  auVar116._8_4_ = __real_3f800000;
  auVar116._12_4_ = __real_3f800000;
  auVar116._16_4_ = __real_3f800000;
  auVar116._20_4_ = __real_3f800000;
  auVar116._24_4_ = __real_3f800000;
  auVar116._28_4_ = __real_3f800000;
  bVar8 = (byte)uVar76;
  bVar9 = (bool)((byte)(uVar76 >> 1) & 1);
  bVar11 = (bool)((byte)(uVar76 >> 2) & 1);
  bVar13 = (bool)((byte)(uVar76 >> 3) & 1);
  bVar15 = (bool)((byte)(uVar76 >> 4) & 1);
  bVar17 = (bool)((byte)(uVar76 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar76 >> 6) & 1);
  bVar21 = SUB81(uVar76 >> 7,0);
  bVar22 = SUB81(uVar76 >> 7,0);
  local_200._0_4_ = auVar108._0_4_;
  local_200._4_4_ = auVar108._4_4_;
  local_200._8_4_ = auVar108._8_4_;
  local_200._12_4_ = auVar108._12_4_;
  local_200._16_4_ = auVar108._16_4_;
  local_200._20_4_ = auVar108._20_4_;
  local_200._24_4_ = auVar108._24_4_;
  local_200._28_4_ = auVar108._28_4_;
  bVar10 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar12 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar16 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar23 = SUB81(uVar66 >> 7,0);
  local_200._4_4_ =
       (uint)bVar10 * (bVar9 * __real_3f800000 | (uint)!bVar9 * auVar87._4_4_) |
       (uint)!bVar10 * local_200._4_4_;
  local_200._0_4_ =
       (uint)(bVar78 & 1) *
       ((bVar8 & 1) * __real_3f800000 | (uint)!(bool)(bVar8 & 1) * auVar87._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_200._0_4_;
  local_200._8_4_ =
       (uint)bVar12 * (bVar11 * __real_3f800000 | (uint)!bVar11 * auVar87._8_4_) |
       (uint)!bVar12 * local_200._8_4_;
  local_200._12_4_ =
       (uint)bVar14 * (bVar13 * __real_3f800000 | (uint)!bVar13 * auVar87._12_4_) |
       (uint)!bVar14 * local_200._12_4_;
  local_200._16_4_ =
       (uint)bVar16 * (bVar15 * __real_3f800000 | (uint)!bVar15 * auVar87._16_4_) |
       (uint)!bVar16 * local_200._16_4_;
  local_200._20_4_ =
       (uint)bVar18 * (bVar17 * __real_3f800000 | (uint)!bVar17 * auVar87._20_4_) |
       (uint)!bVar18 * local_200._20_4_;
  local_200._24_4_ =
       (uint)bVar20 * (bVar19 * __real_3f800000 | (uint)!bVar19 * auVar87._24_4_) |
       (uint)!bVar20 * local_200._24_4_;
  local_200._28_4_ =
       (uint)bVar23 * (bVar21 * __real_3f800000 | (uint)!bVar21 * auVar87._28_4_) |
       (uint)!bVar23 * local_200._28_4_;
  local_1e0._0_4_ = auVar109._0_4_;
  local_1e0._4_4_ = auVar109._4_4_;
  local_1e0._8_4_ = auVar109._8_4_;
  local_1e0._12_4_ = auVar109._12_4_;
  local_1e0._16_4_ = auVar109._16_4_;
  local_1e0._20_4_ = auVar109._20_4_;
  local_1e0._24_4_ = auVar109._24_4_;
  local_1e0._28_4_ = auVar109._28_4_;
  bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar13 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar14 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar15 = SUB81(uVar66 >> 7,0);
  local_1e0._4_4_ =
       (uint)bVar9 * (uint)!(bool)((byte)(uVar76 >> 1) & 1) * auVar102._4_4_ |
       (uint)!bVar9 * local_1e0._4_4_;
  local_1e0._0_4_ =
       (uint)(bVar78 & 1) * (uint)!(bool)(bVar8 & 1) * auVar102._0_4_ |
       (uint)!(bool)(bVar78 & 1) * local_1e0._0_4_;
  local_1e0._8_4_ =
       (uint)bVar10 * (uint)!(bool)((byte)(uVar76 >> 2) & 1) * auVar102._8_4_ |
       (uint)!bVar10 * local_1e0._8_4_;
  local_1e0._12_4_ =
       (uint)bVar11 * (uint)!(bool)((byte)(uVar76 >> 3) & 1) * auVar102._12_4_ |
       (uint)!bVar11 * local_1e0._12_4_;
  local_1e0._16_4_ =
       (uint)bVar12 * (uint)!(bool)((byte)(uVar76 >> 4) & 1) * auVar102._16_4_ |
       (uint)!bVar12 * local_1e0._16_4_;
  local_1e0._20_4_ =
       (uint)bVar13 * (uint)!(bool)((byte)(uVar76 >> 5) & 1) * auVar102._20_4_ |
       (uint)!bVar13 * local_1e0._20_4_;
  local_1e0._24_4_ =
       (uint)bVar14 * (uint)!(bool)((byte)(uVar76 >> 6) & 1) * auVar102._24_4_ |
       (uint)!bVar14 * local_1e0._24_4_;
  local_1e0._28_4_ =
       (uint)bVar15 *
       ((uint)bVar22 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar22 * auVar102._28_4_)
       | (uint)!bVar15 * local_1e0._28_4_;
  local_1c0._0_4_ = auVar90._0_4_;
  local_1c0._4_4_ = auVar90._4_4_;
  local_1c0._8_4_ = auVar90._8_4_;
  local_1c0._12_4_ = auVar90._12_4_;
  local_1c0._16_4_ = auVar90._16_4_;
  local_1c0._20_4_ = auVar90._20_4_;
  local_1c0._24_4_ = auVar90._24_4_;
  local_1c0._28_4_ = auVar90._28_4_;
  bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar13 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar14 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar15 = SUB81(uVar66 >> 7,0);
  local_1c0._4_4_ =
       (uint)bVar9 * (uint)!(bool)((byte)(uVar76 >> 1) & 1) * auVar103._4_4_ |
       (uint)!bVar9 * local_1c0._4_4_;
  local_1c0._0_4_ =
       (uint)(bVar78 & 1) * (uint)!(bool)(bVar8 & 1) * auVar103._0_4_ |
       (uint)!(bool)(bVar78 & 1) * local_1c0._0_4_;
  local_1c0._8_4_ =
       (uint)bVar10 * (uint)!(bool)((byte)(uVar76 >> 2) & 1) * auVar103._8_4_ |
       (uint)!bVar10 * local_1c0._8_4_;
  local_1c0._12_4_ =
       (uint)bVar11 * (uint)!(bool)((byte)(uVar76 >> 3) & 1) * auVar103._12_4_ |
       (uint)!bVar11 * local_1c0._12_4_;
  local_1c0._16_4_ =
       (uint)bVar12 * (uint)!(bool)((byte)(uVar76 >> 4) & 1) * auVar103._16_4_ |
       (uint)!bVar12 * local_1c0._16_4_;
  local_1c0._20_4_ =
       (uint)bVar13 * (uint)!(bool)((byte)(uVar76 >> 5) & 1) * auVar103._20_4_ |
       (uint)!bVar13 * local_1c0._20_4_;
  local_1c0._24_4_ =
       (uint)bVar14 * (uint)!(bool)((byte)(uVar76 >> 6) & 1) * auVar103._24_4_ |
       (uint)!bVar14 * local_1c0._24_4_;
  local_1c0._28_4_ =
       (uint)bVar15 * (uint)!SUB81(uVar76 >> 7,0) * auVar103._28_4_ |
       (uint)!bVar15 * local_1c0._28_4_;
  auVar102._4_4_ = (uint)!(bool)((byte)(uVar76 >> 1) & 1) * auVar106._4_4_;
  auVar102._0_4_ = (uint)!(bool)(bVar8 & 1) * auVar106._0_4_;
  auVar102._8_4_ = (uint)!(bool)((byte)(uVar76 >> 2) & 1) * auVar106._8_4_;
  auVar102._12_4_ = (uint)!(bool)((byte)(uVar76 >> 3) & 1) * auVar106._12_4_;
  auVar102._16_4_ = (uint)!(bool)((byte)(uVar76 >> 4) & 1) * auVar106._16_4_;
  auVar102._20_4_ = (uint)!(bool)((byte)(uVar76 >> 5) & 1) * auVar106._20_4_;
  auVar102._24_4_ = (uint)!(bool)((byte)(uVar76 >> 6) & 1) * auVar106._24_4_;
  bVar9 = SUB81(uVar76 >> 7,0);
  auVar102._28_4_ =
       (uint)bVar9 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar9 * auVar106._28_4_;
  auVar106 = vsubps_avx512vl(auVar102,auVar93);
  auVar87 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
  auVar107 = vmulps_avx512vl(auVar87,auVar107);
  auVar107 = vmulps_avx512vl(auVar87,auVar107);
  auVar87 = vaddps_avx512vl(auVar92,auVar104);
  auVar106 = vfnmsub213ps_avx512vl(auVar106,auVar107,auVar94);
  auVar107 = vfmadd213ps_avx512vl(auVar87,auVar107,auVar116);
  auVar106 = vdivps_avx512vl(auVar106,auVar107);
  auVar107 = vmulps_avx512vl(auVar106,local_200);
  auVar87 = vmulps_avx512vl(auVar106,local_1e0);
  auVar108 = vmulps_avx512vl(auVar106,local_1c0);
  auVar106 = vaddps_avx512vl(auVar94,auVar106);
  bVar9 = (bool)((byte)(uVar66 >> 1) & 1);
  bVar10 = (bool)((byte)(uVar66 >> 2) & 1);
  bVar11 = (bool)((byte)(uVar66 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar66 >> 4) & 1);
  bVar13 = (bool)((byte)(uVar66 >> 5) & 1);
  bVar14 = (bool)((byte)(uVar66 >> 6) & 1);
  bVar15 = SUB81(uVar66 >> 7,0);
  *puVar5 = (uint)(bVar78 & 1) * auVar106._0_4_ | (uint)!(bool)(bVar78 & 1) * *puVar5;
  puVar5[1] = (uint)bVar9 * auVar106._4_4_ | (uint)!bVar9 * puVar5[1];
  puVar5[2] = (uint)bVar10 * auVar106._8_4_ | (uint)!bVar10 * puVar5[2];
  puVar5[3] = (uint)bVar11 * auVar106._12_4_ | (uint)!bVar11 * puVar5[3];
  puVar5[4] = (uint)bVar12 * auVar106._16_4_ | (uint)!bVar12 * puVar5[4];
  puVar5[5] = (uint)bVar13 * auVar106._20_4_ | (uint)!bVar13 * puVar5[5];
  puVar5[6] = (uint)bVar14 * auVar106._24_4_ | (uint)!bVar14 * puVar5[6];
  puVar5[7] = (uint)bVar15 * auVar106._28_4_ | (uint)!bVar15 * puVar5[7];
  auVar109 = vfmadd231ps_avx512vl(auVar99,auVar92,auVar107);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar66,auVar109);
  auVar109 = vfmadd231ps_avx512vl(auVar100,auVar92,auVar87);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar95),uVar66,auVar109);
  auVar109 = vfmadd231ps_avx512vl(auVar101,auVar92,auVar108);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar88),uVar66,auVar109);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar104,uVar66,auVar92);
  auVar107 = vfmadd213ps_avx512vl(auVar107,auVar104,auVar89);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar96,uVar66,auVar107);
  auVar107 = vfmadd213ps_avx512vl(auVar87,auVar104,auVar97);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar106,uVar66,auVar107);
  auVar106 = vfmadd213ps_avx512vl(auVar108,auVar104,auVar98);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar91,uVar66,auVar106);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar91 | auVar95),uVar66,auVar104);
  return;
}

// ApplyXPBDSpringConstraintsWithDampingAndWeightMaps_avx512skx @ 14090cff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDampingAndWeightMaps_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,byte param_7,longlong param_8,longlong param_9,
               byte param_10,undefined1 (*param_11) [16],longlong param_12,uint param_13)

{
  float fVar1;
  float *pfVar9;
  undefined1 (*pauVar10) [32];
  int *piVar11;
  uint *puVar12;
  byte bVar13;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  longlong lVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  uint uVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
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
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar52 [16];
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
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  float fVar97;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar98 [32];
  float fVar106;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar107 [32];
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar125 [16];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar126 [16];
  undefined1 in_ZMM25 [64];
  undefined1 auVar127 [16];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 auVar128 [16];
  undefined1 in_ZMM30 [64];
  undefined1 auVar129 [16];
  undefined1 in_ZMM31 [64];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  uint auStack_278 [4];
  uint uStack_268;
  uint uStack_264;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar40 = __real_0000000c;
  uVar39 = __real_00000008;
  uVar38 = __real_00000004;
  fVar1 = __real_3f800000;
  uVar37 = __real_38d1b717;
  uVar36 = __real_322bcc77;
  auVar125 = in_ZMM22._0_16_;
  auVar55 = in_ZMM20._0_16_;
  auVar129 = in_ZMM31._0_16_;
  auVar128 = in_ZMM30._0_16_;
  auVar54 = in_ZMM29._0_16_;
  auVar52 = in_ZMM19._0_16_;
  auVar53 = in_ZMM28._0_16_;
  auVar127 = in_ZMM26._0_16_;
  auVar126 = in_ZMM25._0_16_;
  auVar49 = in_ZMM23._0_16_;
  uVar42 = (ulonglong)param_10;
  uVar47 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar47 = param_13;
  }
  if ((int)(uVar47 & 0xfffffff8) < 1) {
    uVar43 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    local_1e0 = param_6;
    fStack_1dc = param_6;
    fStack_1d8 = param_6;
    fStack_1d4 = param_6;
    fStack_1d0 = param_6;
    fStack_1cc = param_6;
    fStack_1c8 = param_6;
    fStack_1c4 = param_6;
    uVar44 = 0;
    local_240 = __real_00000004;
    uStack_23c = __real_00000004;
    uStack_238 = __real_00000004;
    uStack_234 = __real_00000004;
    uStack_230 = __real_00000004;
    uStack_22c = __real_00000004;
    uStack_228 = __real_00000004;
    uStack_224 = __real_00000004;
    auStack_278[0] = __real_00000008;
    auStack_278[1] = __real_00000008;
    auStack_278[2] = __real_00000008;
    auStack_278[3] = __real_00000008;
    uStack_268 = __real_00000008;
    uStack_264 = __real_00000008;
    local_200 = __real_0000000c;
    uStack_1fc = __real_0000000c;
    uStack_1f8 = __real_0000000c;
    uStack_1f4 = __real_0000000c;
    uStack_1f0 = __real_0000000c;
    uStack_1ec = __real_0000000c;
    uStack_1e8 = __real_0000000c;
    uStack_1e4 = __real_0000000c;
    local_220 = __real_38d1b717;
    uStack_21c = __real_38d1b717;
    uStack_218 = __real_38d1b717;
    uStack_214 = __real_38d1b717;
    uStack_210 = __real_38d1b717;
    uStack_20c = __real_38d1b717;
    uStack_208 = __real_38d1b717;
    uStack_204 = __real_38d1b717;
    local_260 = __real_3f800000;
    fStack_25c = __real_3f800000;
    fStack_258 = __real_3f800000;
    fStack_254 = __real_3f800000;
    fStack_250 = __real_3f800000;
    fStack_24c = __real_3f800000;
    fStack_248 = __real_3f800000;
    fStack_244 = __real_3f800000;
    uVar43 = 0;
    do {
      auVar52 = (undefined1  [16])0x0;
      auVar49 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar49._8_8_ = 0;
        auVar49._0_8_ = *(ulonglong *)(param_8 + uVar43);
      }
      auVar79 = *(undefined1 (*) [32])(param_3 + uVar44 * 2);
      auVar96 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar44 * 2);
      auVar78 = vpermt2d_avx512vl(auVar79,
                                  ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                  ,auVar96);
      auVar79 = vpermt2d_avx512vl(auVar79,
                                  ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                  ,auVar96);
      if ((param_10 & 1) != 0) {
        auVar52._8_8_ = 0;
        auVar52._0_8_ = *(ulonglong *)(*param_11 + uVar43);
      }
      auVar56 = vpslld_avx512vl(auVar78,4);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar57 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar125._4_4_ = uVar38;
      auVar125._0_4_ = uVar38;
      auVar125._8_4_ = uVar38;
      auVar125._12_4_ = uVar38;
      auVar70._16_4_ = uVar38;
      auVar70._0_16_ = auVar125;
      auVar70._20_4_ = uVar38;
      auVar70._24_4_ = uVar38;
      auVar70._28_4_ = uVar38;
      auVar126 = auVar56._0_16_ | auVar125;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar58 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar127._4_4_ = uVar39;
      auVar127._0_4_ = uVar39;
      auVar127._8_4_ = uVar39;
      auVar127._12_4_ = uVar39;
      auVar71._16_4_ = uVar39;
      auVar71._0_16_ = auVar127;
      auVar71._20_4_ = uVar39;
      auVar71._24_4_ = uVar39;
      auVar71._28_4_ = uVar39;
      auVar127 = auVar56._0_16_ | auVar127;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar43));
      auVar80._4_4_ = uVar40;
      auVar80._0_4_ = uVar40;
      auVar80._8_4_ = uVar40;
      auVar80._12_4_ = uVar40;
      auVar80._16_4_ = uVar40;
      auVar80._20_4_ = uVar40;
      auVar80._24_4_ = uVar40;
      auVar80._28_4_ = uVar40;
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)param_11));
      auVar61 = vpslld_avx512vl(auVar79,4);
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_278));
      auVar125 = auVar61._0_16_ | auVar125;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_9));
      auVar64 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar44));
      auVar65 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar66 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42 * 4));
      vpslld_avx2(auVar78,2);
      vpslld_avx2(auVar78,3);
      auVar67 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42));
      auVar68 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
      auVar69 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42 * 4));
      auVar78 = vpslld_avx2(auVar79,2);
      auVar96 = vpslld_avx2(auVar79,3);
      auVar79._0_4_ = auVar96._0_4_ + auVar78._0_4_;
      auVar79._4_4_ = auVar96._4_4_ + auVar78._4_4_;
      auVar79._8_4_ = auVar96._8_4_ + auVar78._8_4_;
      auVar79._12_4_ = auVar96._12_4_ + auVar78._12_4_;
      auVar79._16_4_ = auVar96._16_4_ + auVar78._16_4_;
      auVar79._20_4_ = auVar96._20_4_ + auVar78._20_4_;
      auVar79._24_4_ = auVar96._24_4_ + auVar78._24_4_;
      auVar79._28_4_ = auVar96._28_4_ + auVar78._28_4_;
      vpaddd_avx512vl(auVar79,auVar70);
      auVar70 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
      vpaddd_avx512vl(auVar79,auVar71);
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
      auVar79 = vpmovsxbd_avx512vl(auVar49);
      vpslld_avx512vl(auVar79,2);
      auVar72 = vgatherdps_avx512vl(*(undefined4 *)(param_9 + (longlong)param_1));
      auVar79 = vpmovsxbd_avx512vl(auVar52);
      vpslld_avx512vl(auVar79,2);
      auVar78 = vgatherdps_avx512vl(*(undefined4 *)(param_12 + (longlong)param_1));
      uVar46 = uVar44 & 0xffffffff;
      auVar79 = *(undefined1 (*) [32])(param_4 + uVar46);
      auVar73 = vsubps_avx512vl(auVar57,auVar62);
      auVar74 = vsubps_avx512vl(auVar58,auVar63);
      auVar75 = vsubps_avx512vl(auVar59,auVar64);
      auVar96._4_4_ = uVar36;
      auVar96._0_4_ = uVar36;
      auVar96._8_4_ = uVar36;
      auVar96._12_4_ = uVar36;
      auVar96._16_4_ = uVar36;
      auVar96._20_4_ = uVar36;
      auVar96._24_4_ = uVar36;
      auVar96._28_4_ = uVar36;
      uVar45 = vcmpps_avx512vl(auVar79,auVar96,1);
      auVar95._0_4_ = auVar60._0_4_ + auVar65._0_4_;
      auVar95._4_4_ = auVar60._4_4_ + auVar65._4_4_;
      auVar95._8_4_ = auVar60._8_4_ + auVar65._8_4_;
      auVar95._12_4_ = auVar60._12_4_ + auVar65._12_4_;
      auVar95._16_4_ = auVar60._16_4_ + auVar65._16_4_;
      auVar95._20_4_ = auVar60._20_4_ + auVar65._20_4_;
      auVar95._24_4_ = auVar60._24_4_ + auVar65._24_4_;
      auVar95._28_4_ = auVar60._28_4_ + auVar65._28_4_;
      auVar123._0_4_ = auVar78._0_4_ + auVar78._0_4_;
      auVar123._4_4_ = auVar78._4_4_ + auVar78._4_4_;
      auVar123._8_4_ = auVar78._8_4_ + auVar78._8_4_;
      auVar123._12_4_ = auVar78._12_4_ + auVar78._12_4_;
      auVar123._16_4_ = auVar78._16_4_ + auVar78._16_4_;
      auVar123._20_4_ = auVar78._20_4_ + auVar78._20_4_;
      auVar123._24_4_ = auVar78._24_4_ + auVar78._24_4_;
      auVar123._28_4_ = auVar78._28_4_ + auVar78._28_4_;
      auVar96 = vdivps_avx512vl(auVar72,auVar95);
      auVar96 = vsqrtps_avx512vl(auVar96);
      auVar96 = vmulps_avx512vl(auVar123,auVar96);
      auVar78._4_4_ = fVar1;
      auVar78._0_4_ = fVar1;
      auVar78._8_4_ = fVar1;
      auVar78._12_4_ = fVar1;
      auVar78._16_4_ = fVar1;
      auVar78._20_4_ = fVar1;
      auVar78._24_4_ = fVar1;
      auVar78._28_4_ = fVar1;
      auVar76 = vdivps_avx512vl(auVar78,auVar79);
      auVar76 = vmulps_avx512vl(auVar96,auVar76);
      bVar14 = (bool)((byte)uVar45 & 1);
      auVar77._0_4_ = (uint)bVar14 * auVar96._0_4_ | (uint)!bVar14 * auVar76._0_4_;
      bVar14 = (bool)((byte)(uVar45 >> 1) & 1);
      auVar77._4_4_ = (uint)bVar14 * auVar96._4_4_ | (uint)!bVar14 * auVar76._4_4_;
      bVar14 = (bool)((byte)(uVar45 >> 2) & 1);
      auVar77._8_4_ = (uint)bVar14 * auVar96._8_4_ | (uint)!bVar14 * auVar76._8_4_;
      bVar14 = (bool)((byte)(uVar45 >> 3) & 1);
      auVar77._12_4_ = (uint)bVar14 * auVar96._12_4_ | (uint)!bVar14 * auVar76._12_4_;
      bVar14 = (bool)((byte)(uVar45 >> 4) & 1);
      auVar77._16_4_ = (uint)bVar14 * auVar96._16_4_ | (uint)!bVar14 * auVar76._16_4_;
      bVar14 = (bool)((byte)(uVar45 >> 5) & 1);
      auVar77._20_4_ = (uint)bVar14 * auVar96._20_4_ | (uint)!bVar14 * auVar76._20_4_;
      bVar14 = (bool)((byte)(uVar45 >> 6) & 1);
      auVar77._24_4_ = (uint)bVar14 * auVar96._24_4_ | (uint)!bVar14 * auVar76._24_4_;
      bVar14 = SUB81(uVar45 >> 7,0);
      auVar77._28_4_ = (uint)bVar14 * auVar96._28_4_ | (uint)!bVar14 * auVar76._28_4_;
      auVar96 = vmulps_avx512vl(auVar74,auVar74);
      auVar96 = vfmadd231ps_avx512vl(auVar96,auVar73,auVar73);
      auVar96 = vfmadd231ps_avx512vl(auVar96,auVar75,auVar75);
      auVar76._4_4_ = uVar37;
      auVar76._0_4_ = uVar37;
      auVar76._8_4_ = uVar37;
      auVar76._12_4_ = uVar37;
      auVar76._16_4_ = uVar37;
      auVar76._20_4_ = uVar37;
      auVar76._24_4_ = uVar37;
      auVar76._28_4_ = uVar37;
      uVar45 = vcmpps_avx512vl(auVar96,auVar76,1);
      auVar96 = vsqrtps_avx512vl(auVar96);
      auVar76 = vdivps_avx512vl(auVar73,auVar96);
      auVar73 = vdivps_avx512vl(auVar74,auVar96);
      auVar74 = vdivps_avx512vl(auVar75,auVar96);
      bVar48 = (byte)uVar45;
      auVar75._4_4_ = (uint)!(bool)((byte)(uVar45 >> 1) & 1) * auVar96._4_4_;
      auVar75._0_4_ = (uint)!(bool)(bVar48 & 1) * auVar96._0_4_;
      auVar75._8_4_ = (uint)!(bool)((byte)(uVar45 >> 2) & 1) * auVar96._8_4_;
      auVar75._12_4_ = (uint)!(bool)((byte)(uVar45 >> 3) & 1) * auVar96._12_4_;
      auVar75._16_4_ = (uint)!(bool)((byte)(uVar45 >> 4) & 1) * auVar96._16_4_;
      auVar75._20_4_ = (uint)!(bool)((byte)(uVar45 >> 5) & 1) * auVar96._20_4_;
      auVar75._24_4_ = (uint)!(bool)((byte)(uVar45 >> 6) & 1) * auVar96._24_4_;
      bVar14 = SUB81(uVar45 >> 7,0);
      auVar75._28_4_ =
           (uint)bVar14 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar14 * auVar96._28_4_;
      auVar96 = vsubps_avx512vl(auVar75,auVar79);
      auVar79 = vsubps_avx512vl(auVar57,auVar66);
      auVar79 = vsubps_avx512vl(auVar79,auVar62);
      auVar79 = vaddps_avx512vl(auVar79,auVar69);
      auVar66 = vsubps_avx512vl(auVar58,auVar67);
      auVar66 = vsubps_avx512vl(auVar66,auVar63);
      auVar70 = vaddps_avx512vl(auVar66,auVar70);
      auVar66 = vsubps_avx512vl(auVar59,auVar68);
      auVar66 = vsubps_avx512vl(auVar66,auVar64);
      auVar71 = vaddps_avx512vl(auVar66,auVar71);
      auVar55._0_4_ = (uint)(bVar48 & 1) * (int)fVar1 | (uint)!(bool)(bVar48 & 1) * auVar76._0_4_;
      bVar14 = (bool)((byte)(uVar45 >> 1) & 1);
      auVar55._4_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._4_4_;
      bVar14 = (bool)((byte)(uVar45 >> 2) & 1);
      auVar55._8_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._8_4_;
      bVar14 = (bool)((byte)(uVar45 >> 3) & 1);
      auVar55._12_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._12_4_;
      bVar14 = (bool)((byte)(uVar45 >> 4) & 1);
      auVar67._16_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._16_4_;
      auVar67._0_16_ = auVar55;
      bVar14 = (bool)((byte)(uVar45 >> 5) & 1);
      auVar67._20_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._20_4_;
      bVar14 = (bool)((byte)(uVar45 >> 6) & 1);
      auVar67._24_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._24_4_;
      bVar14 = SUB81(uVar45 >> 7,0);
      auVar67._28_4_ = (uint)bVar14 * (int)fVar1 | (uint)!bVar14 * auVar76._28_4_;
      auVar68._4_4_ = (uint)!(bool)((byte)(uVar45 >> 1) & 1) * auVar73._4_4_;
      auVar68._0_4_ = (uint)!(bool)(bVar48 & 1) * auVar73._0_4_;
      auVar68._8_4_ = (uint)!(bool)((byte)(uVar45 >> 2) & 1) * auVar73._8_4_;
      auVar68._12_4_ = (uint)!(bool)((byte)(uVar45 >> 3) & 1) * auVar73._12_4_;
      auVar68._16_4_ = (uint)!(bool)((byte)(uVar45 >> 4) & 1) * auVar73._16_4_;
      auVar68._20_4_ = (uint)!(bool)((byte)(uVar45 >> 5) & 1) * auVar73._20_4_;
      auVar68._24_4_ = (uint)!(bool)((byte)(uVar45 >> 6) & 1) * auVar73._24_4_;
      auVar68._28_4_ = (uint)!SUB81(uVar45 >> 7,0) * auVar73._28_4_;
      auVar70 = vmulps_avx512vl(auVar68,auVar70);
      auVar70 = vfmadd231ps_avx512vl(auVar70,auVar67,auVar79);
      auVar79 = *(undefined1 (*) [32])(param_5 + uVar46);
      auVar69._4_4_ = (uint)!(bool)((byte)(uVar45 >> 1) & 1) * auVar74._4_4_;
      auVar69._0_4_ = (uint)!(bool)(bVar48 & 1) * auVar74._0_4_;
      auVar69._8_4_ = (uint)!(bool)((byte)(uVar45 >> 2) & 1) * auVar74._8_4_;
      auVar69._12_4_ = (uint)!(bool)((byte)(uVar45 >> 3) & 1) * auVar74._12_4_;
      auVar69._16_4_ = (uint)!(bool)((byte)(uVar45 >> 4) & 1) * auVar74._16_4_;
      auVar69._20_4_ = (uint)!(bool)((byte)(uVar45 >> 5) & 1) * auVar74._20_4_;
      auVar69._24_4_ = (uint)!(bool)((byte)(uVar45 >> 6) & 1) * auVar74._24_4_;
      bVar14 = SUB81(uVar45 >> 7,0);
      auVar69._28_4_ =
           (uint)bVar14 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
           (uint)!bVar14 * auVar74._28_4_;
      auVar71 = vfmadd231ps_avx512vl(auVar70,auVar69,auVar71);
      auVar66._4_4_ = param_6;
      auVar66._0_4_ = param_6;
      auVar66._8_4_ = param_6;
      auVar66._12_4_ = param_6;
      auVar66._16_4_ = param_6;
      auVar66._20_4_ = param_6;
      auVar66._24_4_ = param_6;
      auVar66._28_4_ = param_6;
      auVar70 = vmulps_avx512vl(auVar66,auVar72);
      auVar70 = vmulps_avx512vl(auVar66,auVar70);
      auVar76 = vmulps_avx512vl(auVar66,auVar77);
      auVar52 = auVar76._0_16_;
      auVar96 = vfnmsub213ps_avx512vl(auVar96,auVar70,auVar79);
      auVar96 = vfnmadd213ps_avx512vl(auVar71,auVar76,auVar96);
      auVar71 = vaddps_avx512vl(auVar70,auVar76);
      auVar72._0_4_ = auVar95._0_4_ * auVar71._0_4_ + fVar1;
      auVar72._4_4_ = auVar95._4_4_ * auVar71._4_4_ + fVar1;
      auVar72._8_4_ = auVar95._8_4_ * auVar71._8_4_ + fVar1;
      auVar72._12_4_ = auVar95._12_4_ * auVar71._12_4_ + fVar1;
      auVar72._16_4_ = auVar95._16_4_ * auVar71._16_4_ + fVar1;
      auVar72._20_4_ = auVar95._20_4_ * auVar71._20_4_ + fVar1;
      auVar72._24_4_ = auVar95._24_4_ * auVar71._24_4_ + fVar1;
      auVar72._28_4_ = auVar95._28_4_ * auVar71._28_4_ + fVar1;
      auVar96 = vdivps_avx(auVar96,auVar72);
      pfVar9 = (float *)(param_5 + uVar46);
      *pfVar9 = auVar79._0_4_ + auVar96._0_4_;
      pfVar9[1] = auVar79._4_4_ + auVar96._4_4_;
      pfVar9[2] = auVar79._8_4_ + auVar96._8_4_;
      pfVar9[3] = auVar79._12_4_ + auVar96._12_4_;
      pfVar9[4] = auVar79._16_4_ + auVar96._16_4_;
      pfVar9[5] = auVar79._20_4_ + auVar96._20_4_;
      pfVar9[6] = auVar79._24_4_ + auVar96._24_4_;
      pfVar9[7] = auVar79._28_4_ + auVar96._28_4_;
      auVar79 = vmulps_avx512vl(auVar67,auVar96);
      auVar71 = vfmadd231ps_avx512vl(auVar57,auVar60,auVar79);
      in_ZMM29 = ZEXT3264(auVar71);
      auVar54 = auVar71._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar61 | auVar80),0xffff,auVar71);
      auVar71 = vmulps_avx512vl(auVar68,auVar96);
      auVar70 = vfmadd231ps_avx512vl(auVar58,auVar60,auVar71);
      in_ZMM30 = ZEXT3264(auVar70);
      auVar128 = auVar70._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar60,0xffff,auVar70);
      auVar96 = vmulps_avx512vl(auVar69,auVar96);
      auVar70 = vfmadd231ps_avx512vl(auVar59,auVar60,auVar96);
      in_ZMM31 = ZEXT3264(auVar70);
      auVar129 = auVar70._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar65,0xffff,auVar70);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar56 | auVar80),0xffff,auVar60);
      auVar79 = vfnmadd231ps_avx512vl(auVar62,auVar65,auVar79);
      in_ZMM23 = ZEXT3264(auVar79);
      auVar49 = auVar79._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar78,0xffff,auVar79);
      auVar79 = vfnmadd231ps_avx512vl(auVar63,auVar65,auVar71);
      in_ZMM28 = ZEXT3264(auVar79);
      auVar53 = auVar79._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar64,0xffff,auVar79);
      auVar56._0_4_ = -(auVar65._0_4_ * auVar96._0_4_) + auVar64._0_4_;
      auVar56._4_4_ = -(auVar65._4_4_ * auVar96._4_4_) + auVar64._4_4_;
      auVar56._8_4_ = -(auVar65._8_4_ * auVar96._8_4_) + auVar64._8_4_;
      auVar56._12_4_ = -(auVar65._12_4_ * auVar96._12_4_) + auVar64._12_4_;
      auVar56._16_4_ = -(auVar65._16_4_ * auVar96._16_4_) + auVar64._16_4_;
      auVar56._20_4_ = -(auVar65._20_4_ * auVar96._20_4_) + auVar64._20_4_;
      auVar56._24_4_ = -(auVar65._24_4_ * auVar96._24_4_) + auVar64._24_4_;
      auVar56._28_4_ = -(auVar65._28_4_ * auVar96._28_4_) + auVar64._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar77,0xffff,auVar56);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar61 | auVar80),0xffff,auVar65);
      uVar43 = uVar43 + 8;
      uVar44 = uVar44 + 0x20;
    } while ((int)uVar43 < (int)(uVar47 & 0xfffffff8));
    if ((int)param_13 <= (int)uVar43) {
      return;
    }
  }
  auVar79 = vpbroadcastd_avx512vl();
  auVar79 = vpor_avx2(auVar79,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar96 = vpbroadcastd_avx512vl();
  uVar44 = vpcmpgtd_avx512vl(auVar96,auVar79);
  uVar45 = uVar43 & 0xffffffff;
  pauVar10 = (undefined1 (*) [32])(param_3 + uVar45 * 8);
  bVar48 = (byte)uVar44;
  if (bVar48 == 0xff) {
    auVar79 = vmovdqa64_avx512vl(
                                ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                );
    auVar57 = vpermi2d_avx512vl(auVar79,*pauVar10,pauVar10[1]);
    auVar79 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                );
    auVar58 = vpermi2d_avx512vl(auVar79,*pauVar10,pauVar10[1]);
    auVar50 = vxorps_avx512vl(auVar125,auVar125);
  }
  else {
    auVar49 = vxorps_avx512vl(auVar49,auVar49);
    auVar79 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar10 + param_5));
    auVar57._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar49._0_4_;
    bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
    auVar57._4_4_ = (uint)bVar14 * auVar79._4_4_ | (uint)!bVar14 * auVar49._4_4_;
    bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
    auVar57._8_4_ = (uint)bVar14 * auVar79._8_4_ | (uint)!bVar14 * auVar49._8_4_;
    bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
    auVar57._12_4_ = (uint)bVar14 * auVar79._12_4_ | (uint)!bVar14 * auVar49._12_4_;
    auVar57._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
    auVar57._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
    auVar57._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
    auVar57._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
    auVar79 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar10 + param_5));
    auVar58._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_;
    auVar58._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_;
    auVar58._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_;
    auVar58._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_;
    auVar58._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
    auVar58._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
    auVar58._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
    auVar58._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
    auVar50 = vxorps_avx512vl(auVar125,auVar125);
  }
  auVar51 = (undefined1  [16])0x0;
  if ((param_7 & 1) != 0) {
    if ((~bVar48 & 0x81) == 0) {
      auVar51._8_8_ = 0;
      auVar51._0_8_ = *(ulonglong *)*(undefined1 (*) [16])(param_8 + uVar45);
    }
    else {
      auVar125 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_8 + uVar45));
      auVar51[1] = ((byte)(uVar44 >> 1) & 1) * auVar125[1];
      auVar51[0] = (bVar48 & 1) * auVar125[0];
      auVar51[2] = ((byte)(uVar44 >> 2) & 1) * auVar125[2];
      auVar51[3] = ((byte)(uVar44 >> 3) & 1) * auVar125[3];
      auVar51[4] = ((byte)(uVar44 >> 4) & 1) * auVar125[4];
      auVar51[5] = ((byte)(uVar44 >> 5) & 1) * auVar125[5];
      auVar51[6] = ((byte)(uVar44 >> 6) & 1) * auVar125[6];
      auVar51[7] = (char)(uVar44 >> 7) * auVar125[7];
      auVar51._8_8_ = 0;
    }
  }
  if ((param_10 & 1) != 0) {
    param_11 = (undefined1 (*) [16])(*param_11 + uVar45);
    if ((~bVar48 & 0x81) == 0) {
      auVar50._8_8_ = 0;
      auVar50._0_8_ = *(ulonglong *)*param_11;
    }
    else {
      auVar125 = vmovdqu8_avx512vl(*param_11);
      auVar50[1] = ((byte)(uVar44 >> 1) & 1) * auVar125[1];
      auVar50[0] = (bVar48 & 1) * auVar125[0];
      auVar50[2] = ((byte)(uVar44 >> 2) & 1) * auVar125[2];
      auVar50[3] = ((byte)(uVar44 >> 3) & 1) * auVar125[3];
      auVar50[4] = ((byte)(uVar44 >> 4) & 1) * auVar125[4];
      auVar50[5] = ((byte)(uVar44 >> 5) & 1) * auVar125[5];
      auVar50[6] = ((byte)(uVar44 >> 6) & 1) * auVar125[6];
      auVar50[7] = (char)(uVar44 >> 7) * auVar125[7];
      auVar50._8_8_ = 0;
    }
  }
  auVar78 = vpslld_avx512vl(auVar57,4);
  auVar92._4_4_ = __real_00000004;
  auVar92._0_4_ = __real_00000004;
  auVar92._8_4_ = __real_00000004;
  auVar92._12_4_ = __real_00000004;
  auVar92._16_4_ = __real_00000004;
  auVar92._20_4_ = __real_00000004;
  auVar92._24_4_ = __real_00000004;
  auVar92._28_4_ = __real_00000004;
  auVar125 = vxorps_avx512vl(auVar126,auVar126);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar23 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar127 = vxorps_avx512vl(auVar127,auVar127);
  auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  bVar15 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar24 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar71 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
  auVar49 = vxorps_avx512vl(auVar53,auVar53);
  auVar70 = vgatherdps_avx512vl(*param_1);
  bVar16 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar25 = (bool)((byte)(uVar44 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar52 = vxorps_avx512vl(auVar52,auVar52);
  auVar76 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  auVar74._0_4_ = (uint)(bVar48 & 1) * auVar76._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar52._0_4_;
  bVar17 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar74._4_4_ = (uint)bVar17 * auVar76._4_4_ | (uint)!bVar17 * auVar52._4_4_;
  bVar17 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar74._8_4_ = (uint)bVar17 * auVar76._8_4_ | (uint)!bVar17 * auVar52._8_4_;
  bVar17 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar74._12_4_ = (uint)bVar17 * auVar76._12_4_ | (uint)!bVar17 * auVar52._12_4_;
  auVar74._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar76._16_4_;
  auVar74._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar76._20_4_;
  auVar74._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar76._24_4_;
  auVar74._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar76._28_4_;
  auVar76 = vpslld_avx512vl(auVar58,4);
  auVar52 = vxorps_avx512vl(auVar54,auVar54);
  auVar80 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar42));
  bVar17 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar26 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar126 = vxorps_avx512vl(auVar128,auVar128);
  auVar66 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_278));
  auVar53._0_4_ = (uint)(bVar48 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar126._0_4_;
  bVar18 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar53._4_4_ = (uint)bVar18 * auVar66._4_4_ | (uint)!bVar18 * auVar126._4_4_;
  bVar18 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar53._8_4_ = (uint)bVar18 * auVar66._8_4_ | (uint)!bVar18 * auVar126._8_4_;
  bVar18 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar53._12_4_ = (uint)bVar18 * auVar66._12_4_ | (uint)!bVar18 * auVar126._12_4_;
  auVar126 = vxorps_avx512vl(auVar129,auVar129);
  auVar56 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
  auVar54._0_4_ = (uint)(bVar48 & 1) * auVar56._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar126._0_4_;
  bVar18 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar54._4_4_ = (uint)bVar18 * auVar56._4_4_ | (uint)!bVar18 * auVar126._4_4_;
  bVar18 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar54._8_4_ = (uint)bVar18 * auVar56._8_4_ | (uint)!bVar18 * auVar126._8_4_;
  bVar18 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar54._12_4_ = (uint)bVar18 * auVar56._12_4_ | (uint)!bVar18 * auVar126._12_4_;
  auVar55 = vxorps_avx512vl(auVar55,auVar55);
  auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  auVar81._0_4_ = (uint)(bVar48 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar55._0_4_;
  bVar18 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar81._4_4_ = (uint)bVar18 * auVar59._4_4_ | (uint)!bVar18 * auVar55._4_4_;
  bVar18 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar81._8_4_ = (uint)bVar18 * auVar59._8_4_ | (uint)!bVar18 * auVar55._8_4_;
  bVar18 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar81._12_4_ = (uint)bVar18 * auVar59._12_4_ | (uint)!bVar18 * auVar55._12_4_;
  auVar81._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar59._16_4_;
  auVar81._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar59._20_4_;
  auVar81._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar59._24_4_;
  auVar81._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar59._28_4_;
  local_160 = (uint)(bVar48 & 1) *
              ((uint)(bVar48 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar125._0_4_) |
              !(bool)(bVar48 & 1) * local_160;
  bVar18 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_15c = (uint)bVar18 * ((uint)bVar14 * auVar79._4_4_ | (uint)!bVar14 * auVar125._4_4_) |
               !bVar18 * uStack_15c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_158 = (uint)bVar14 * ((uint)bVar19 * auVar79._8_4_ | (uint)!bVar19 * auVar125._8_4_) |
               !bVar14 * uStack_158;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_154 = (uint)bVar14 * ((uint)bVar23 * auVar79._12_4_ | (uint)!bVar23 * auVar125._12_4_) |
               !bVar14 * uStack_154;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_150 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_ |
               !bVar14 * uStack_150;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_14c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_ |
               !bVar14 * uStack_14c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_148 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_ |
               !bVar14 * uStack_148;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_144 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar79._28_4_ | !bVar14 * uStack_144;
  local_140 = (uint)(bVar48 & 1) *
              ((uint)(bVar48 & 1) * auVar96._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar127._0_4_) |
              !(bool)(bVar48 & 1) * local_140;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_13c = (uint)bVar14 * ((uint)bVar15 * auVar96._4_4_ | (uint)!bVar15 * auVar127._4_4_) |
               !bVar14 * uStack_13c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_138 = (uint)bVar14 * ((uint)bVar20 * auVar96._8_4_ | (uint)!bVar20 * auVar127._8_4_) |
               !bVar14 * uStack_138;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_134 = (uint)bVar14 * ((uint)bVar24 * auVar96._12_4_ | (uint)!bVar24 * auVar127._12_4_) |
               !bVar14 * uStack_134;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_130 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar96._16_4_ |
               !bVar14 * uStack_130;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_12c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar96._20_4_ |
               !bVar14 * uStack_12c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_128 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar96._24_4_ |
               !bVar14 * uStack_128;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_124 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar96._28_4_ | !bVar14 * uStack_124;
  local_120 = (uint)(bVar48 & 1) *
              ((uint)(bVar48 & 1) * auVar70._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar49._0_4_) |
              !(bool)(bVar48 & 1) * local_120;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_11c = (uint)bVar14 * ((uint)bVar16 * auVar70._4_4_ | (uint)!bVar16 * auVar49._4_4_) |
               !bVar14 * uStack_11c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_118 = (uint)bVar14 * ((uint)bVar21 * auVar70._8_4_ | (uint)!bVar21 * auVar49._8_4_) |
               !bVar14 * uStack_118;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_114 = (uint)bVar14 * ((uint)bVar25 * auVar70._12_4_ | (uint)!bVar25 * auVar49._12_4_) |
               !bVar14 * uStack_114;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_110 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar70._16_4_ |
               !bVar14 * uStack_110;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_10c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar70._20_4_ |
               !bVar14 * uStack_10c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_108 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar70._24_4_ |
               !bVar14 * uStack_108;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_104 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar70._28_4_ | !bVar14 * uStack_104;
  local_1c0 = (uint)(bVar48 & 1) *
              ((uint)(bVar48 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar52._0_4_) |
              !(bool)(bVar48 & 1) * local_1c0;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_1bc = (uint)bVar14 * ((uint)bVar17 * auVar80._4_4_ | (uint)!bVar17 * auVar52._4_4_) |
               !bVar14 * uStack_1bc;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_1b8 = (uint)bVar14 * ((uint)bVar22 * auVar80._8_4_ | (uint)!bVar22 * auVar52._8_4_) |
               !bVar14 * uStack_1b8;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_1b4 = (uint)bVar14 * ((uint)bVar26 * auVar80._12_4_ | (uint)!bVar26 * auVar52._12_4_) |
               !bVar14 * uStack_1b4;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_1b0 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar80._16_4_ |
               !bVar14 * uStack_1b0;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_1ac = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar80._20_4_ |
               !bVar14 * uStack_1ac;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_1a8 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar80._24_4_ |
               !bVar14 * uStack_1a8;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_1a4 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar80._28_4_ | !bVar14 * uStack_1a4;
  local_1a0 = (bVar48 & 1) * auVar53._0_4_ | !(bool)(bVar48 & 1) * local_1a0;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_19c = bVar14 * auVar53._4_4_ | !bVar14 * uStack_19c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_198 = bVar14 * auVar53._8_4_ | !bVar14 * uStack_198;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_194 = bVar14 * auVar53._12_4_ | !bVar14 * uStack_194;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_190 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar66._16_4_ |
               !bVar14 * uStack_190;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_18c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar66._20_4_ |
               !bVar14 * uStack_18c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_188 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar66._24_4_ |
               !bVar14 * uStack_188;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_184 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar66._28_4_ | !bVar14 * uStack_184;
  local_180 = (bVar48 & 1) * auVar54._0_4_ | !(bool)(bVar48 & 1) * local_180;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  uStack_17c = bVar14 * auVar54._4_4_ | !bVar14 * uStack_17c;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  uStack_178 = bVar14 * auVar54._8_4_ | !bVar14 * uStack_178;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  uStack_174 = bVar14 * auVar54._12_4_ | !bVar14 * uStack_174;
  bVar14 = (bool)((byte)(uVar44 >> 4) & 1);
  uStack_170 = (uint)bVar14 * (uint)((byte)(uVar44 >> 4) & 1) * auVar56._16_4_ |
               !bVar14 * uStack_170;
  bVar14 = (bool)((byte)(uVar44 >> 5) & 1);
  uStack_16c = (uint)bVar14 * (uint)((byte)(uVar44 >> 5) & 1) * auVar56._20_4_ |
               !bVar14 * uStack_16c;
  bVar14 = (bool)((byte)(uVar44 >> 6) & 1);
  uStack_168 = (uint)bVar14 * (uint)((byte)(uVar44 >> 6) & 1) * auVar56._24_4_ |
               !bVar14 * uStack_168;
  bVar14 = SUB81(uVar44 >> 7,0);
  uStack_164 = (uint)bVar14 * (uint)(byte)(uVar44 >> 7) * auVar56._28_4_ | !bVar14 * uStack_164;
  auVar79 = vpaddd_avx512vl(auVar57,auVar57);
  vpaddd_avx512vl(auVar57,auVar79);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar43 * 4));
  auVar82._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_;
  auVar82._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_;
  auVar82._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_;
  auVar82._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_;
  auVar82._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
  auVar82._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
  auVar82._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
  auVar82._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
  auVar79 = vpslld_avx512vl(auVar57,2);
  auVar96 = vpslld_avx512vl(auVar57,3);
  auVar79 = vpaddd_avx512vl(auVar96,auVar79);
  auVar96 = vpaddd_avx512vl(auVar79,auVar92);
  auVar70 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_2));
  auVar83._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * auVar70._4_4_;
  auVar83._0_4_ = (uint)(bVar48 & 1) * auVar70._0_4_;
  auVar83._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * auVar70._8_4_;
  auVar83._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * auVar70._12_4_;
  auVar83._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar70._16_4_;
  auVar83._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar70._20_4_;
  auVar83._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar70._24_4_;
  auVar83._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar70._28_4_;
  vpaddd_avx512vl(auVar79,auVar71);
  auVar127 = vxorps_avx512vl(auVar96._0_16_,auVar96._0_16_);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(*param_11 + param_2));
  auVar84._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar127._0_4_;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar84._4_4_ = (uint)bVar14 * auVar79._4_4_ | (uint)!bVar14 * auVar127._4_4_;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar84._8_4_ = (uint)bVar14 * auVar79._8_4_ | (uint)!bVar14 * auVar127._8_4_;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar84._12_4_ = (uint)bVar14 * auVar79._12_4_ | (uint)!bVar14 * auVar127._12_4_;
  auVar84._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
  auVar84._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
  auVar84._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
  auVar84._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
  auVar79 = vpaddd_avx512vl(auVar58,auVar58);
  vpaddd_avx512vl(auVar58,auVar79);
  auVar127 = vxorps_avx512vl(auVar53,auVar53);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_11 * 4));
  auVar85._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar127._0_4_;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar85._4_4_ = (uint)bVar14 * auVar79._4_4_ | (uint)!bVar14 * auVar127._4_4_;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar85._8_4_ = (uint)bVar14 * auVar79._8_4_ | (uint)!bVar14 * auVar127._8_4_;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar85._12_4_ = (uint)bVar14 * auVar79._12_4_ | (uint)!bVar14 * auVar127._12_4_;
  auVar85._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
  auVar85._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
  auVar85._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
  auVar85._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
  auVar79 = vpslld_avx512vl(auVar58,2);
  auVar96 = vpslld_avx512vl(auVar58,3);
  auVar79 = vpaddd_avx512vl(auVar96,auVar79);
  vpaddd_avx512vl(auVar79,auVar92);
  auVar127 = vxorps_avx512vl(auVar54,auVar54);
  auVar96 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar86._0_4_ = (uint)(bVar48 & 1) * auVar96._0_4_ | (uint)!(bool)(bVar48 & 1) * auVar127._0_4_;
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  auVar86._4_4_ = (uint)bVar14 * auVar96._4_4_ | (uint)!bVar14 * auVar127._4_4_;
  bVar14 = (bool)((byte)(uVar44 >> 2) & 1);
  auVar86._8_4_ = (uint)bVar14 * auVar96._8_4_ | (uint)!bVar14 * auVar127._8_4_;
  bVar14 = (bool)((byte)(uVar44 >> 3) & 1);
  auVar86._12_4_ = (uint)bVar14 * auVar96._12_4_ | (uint)!bVar14 * auVar127._12_4_;
  auVar86._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar96._16_4_;
  auVar86._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar96._20_4_;
  auVar86._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar96._24_4_;
  auVar86._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar96._28_4_;
  vpaddd_avx512vl(auVar79,auVar71);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar87._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_;
  auVar87._0_4_ = (uint)(bVar48 & 1) * auVar79._0_4_;
  auVar87._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_;
  auVar87._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_;
  auVar87._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_;
  auVar87._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_;
  auVar87._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_;
  auVar87._28_4_ = (uint)(byte)(uVar44 >> 7) * auVar79._28_4_;
  auVar79 = vpmovsxbd_avx512vl(auVar51);
  vpslld_avx512vl(auVar79,2);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_9 + (longlong)auStack_278));
  fVar1 = (float)((uint)(bVar48 & 1) * auVar79._0_4_);
  fVar2 = (float)((uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_);
  auVar88._4_4_ = fVar2;
  auVar88._0_4_ = fVar1;
  fVar3 = (float)((uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_);
  auVar88._8_4_ = fVar3;
  fVar4 = (float)((uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_);
  auVar88._12_4_ = fVar4;
  fVar5 = (float)((uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_);
  auVar88._16_4_ = fVar5;
  fVar6 = (float)((uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_);
  auVar88._20_4_ = fVar6;
  fVar7 = (float)((uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_);
  auVar88._24_4_ = fVar7;
  fVar8 = (float)((uint)(byte)(uVar44 >> 7) * auVar79._28_4_);
  auVar88._28_4_ = fVar8;
  auVar79 = vpmovsxbd_avx512vl(auVar50);
  vpslld_avx512vl(auVar79,2);
  auVar79 = vgatherdps_avx512vl(*(undefined4 *)(param_12 + (longlong)auStack_278));
  fVar106 = (float)((uint)(bVar48 & 1) * auVar79._0_4_);
  fVar108 = (float)((uint)((byte)(uVar44 >> 1) & 1) * auVar79._4_4_);
  fVar109 = (float)((uint)((byte)(uVar44 >> 2) & 1) * auVar79._8_4_);
  fVar110 = (float)((uint)((byte)(uVar44 >> 3) & 1) * auVar79._12_4_);
  fVar111 = (float)((uint)((byte)(uVar44 >> 4) & 1) * auVar79._16_4_);
  fVar112 = (float)((uint)((byte)(uVar44 >> 5) & 1) * auVar79._20_4_);
  fVar113 = (float)((uint)((byte)(uVar44 >> 6) & 1) * auVar79._24_4_);
  fVar114 = (float)((uint)(byte)(uVar44 >> 7) * auVar79._28_4_);
  auVar64._4_4_ = uStack_15c;
  auVar64._0_4_ = local_160;
  auVar64._8_4_ = uStack_158;
  auVar64._12_4_ = uStack_154;
  auVar64._16_4_ = uStack_150;
  auVar64._20_4_ = uStack_14c;
  auVar64._24_4_ = uStack_148;
  auVar64._28_4_ = uStack_144;
  auVar65._4_4_ = uStack_13c;
  auVar65._0_4_ = local_140;
  auVar65._8_4_ = uStack_138;
  auVar65._12_4_ = uStack_134;
  auVar65._16_4_ = uStack_130;
  auVar65._20_4_ = uStack_12c;
  auVar65._24_4_ = uStack_128;
  auVar65._28_4_ = uStack_124;
  auVar73._4_4_ = uStack_11c;
  auVar73._0_4_ = local_120;
  auVar73._8_4_ = uStack_118;
  auVar73._12_4_ = uStack_114;
  auVar73._16_4_ = uStack_110;
  auVar73._20_4_ = uStack_10c;
  auVar73._24_4_ = uStack_108;
  auVar73._28_4_ = uStack_104;
  auVar61._4_4_ = uStack_1bc;
  auVar61._0_4_ = local_1c0;
  auVar61._8_4_ = uStack_1b8;
  auVar61._12_4_ = uStack_1b4;
  auVar61._16_4_ = uStack_1b0;
  auVar61._20_4_ = uStack_1ac;
  auVar61._24_4_ = uStack_1a8;
  auVar61._28_4_ = uStack_1a4;
  auVar62._4_4_ = uStack_19c;
  auVar62._0_4_ = local_1a0;
  auVar62._8_4_ = uStack_198;
  auVar62._12_4_ = uStack_194;
  auVar62._16_4_ = uStack_190;
  auVar62._20_4_ = uStack_18c;
  auVar62._24_4_ = uStack_188;
  auVar62._28_4_ = uStack_184;
  auVar63._4_4_ = uStack_17c;
  auVar63._0_4_ = local_180;
  auVar63._8_4_ = uStack_178;
  auVar63._12_4_ = uStack_174;
  auVar63._16_4_ = uStack_170;
  auVar63._20_4_ = uStack_16c;
  auVar63._24_4_ = uStack_168;
  auVar63._28_4_ = uStack_164;
  auVar79 = vsubps_avx512vl(auVar64,auVar61);
  auVar70 = vsubps_avx512vl(auVar65,auVar62);
  auVar80 = vsubps_avx512vl(auVar73,auVar63);
  fVar28 = auVar70._0_4_;
  fVar29 = auVar70._4_4_;
  fVar30 = auVar70._8_4_;
  fVar31 = auVar70._12_4_;
  fVar32 = auVar70._16_4_;
  fVar33 = auVar70._20_4_;
  fVar34 = auVar70._24_4_;
  fVar35 = auVar70._28_4_;
  fVar97 = auVar79._0_4_;
  fVar99 = auVar79._4_4_;
  fVar100 = auVar79._8_4_;
  fVar101 = auVar79._12_4_;
  fVar102 = auVar79._16_4_;
  fVar103 = auVar79._20_4_;
  fVar104 = auVar79._24_4_;
  fVar105 = auVar79._28_4_;
  fVar115 = auVar80._0_4_;
  auVar124._0_4_ = fVar115 * fVar115 + fVar97 * fVar97 + fVar28 * fVar28;
  fVar116 = auVar80._4_4_;
  auVar124._4_4_ = fVar116 * fVar116 + fVar99 * fVar99 + fVar29 * fVar29;
  fVar117 = auVar80._8_4_;
  auVar124._8_4_ = fVar117 * fVar117 + fVar100 * fVar100 + fVar30 * fVar30;
  fVar118 = auVar80._12_4_;
  auVar124._12_4_ = fVar118 * fVar118 + fVar101 * fVar101 + fVar31 * fVar31;
  fVar119 = auVar80._16_4_;
  auVar124._16_4_ = fVar119 * fVar119 + fVar102 * fVar102 + fVar32 * fVar32;
  fVar120 = auVar80._20_4_;
  auVar124._20_4_ = fVar120 * fVar120 + fVar103 * fVar103 + fVar33 * fVar33;
  fVar121 = auVar80._24_4_;
  auVar124._24_4_ = fVar121 * fVar121 + fVar104 * fVar104 + fVar34 * fVar34;
  fVar122 = auVar80._28_4_;
  auVar124._28_4_ = fVar122 * fVar122 + fVar105 * fVar105 + fVar35 * fVar35;
  auVar96 = vsqrtps_avx(auVar124);
  auVar59._4_4_ = __real_38d1b717;
  auVar59._0_4_ = __real_38d1b717;
  auVar59._8_4_ = __real_38d1b717;
  auVar59._12_4_ = __real_38d1b717;
  auVar59._16_4_ = __real_38d1b717;
  auVar59._20_4_ = __real_38d1b717;
  auVar59._24_4_ = __real_38d1b717;
  auVar59._28_4_ = __real_38d1b717;
  uVar42 = vcmpps_avx512vl(auVar124,auVar59,1);
  auVar79 = vdivps_avx(auVar79,auVar96);
  auVar98._4_4_ = __real_3f800000;
  auVar98._0_4_ = __real_3f800000;
  auVar98._8_4_ = __real_3f800000;
  auVar98._12_4_ = __real_3f800000;
  auVar98._16_4_ = __real_3f800000;
  auVar98._20_4_ = __real_3f800000;
  auVar98._24_4_ = __real_3f800000;
  auVar98._28_4_ = __real_3f800000;
  bVar13 = (byte)uVar42;
  bVar14 = (bool)((byte)(uVar42 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar42 >> 2) & 1);
  bVar18 = (bool)((byte)(uVar42 >> 3) & 1);
  bVar20 = (bool)((byte)(uVar42 >> 4) & 1);
  bVar22 = (bool)((byte)(uVar42 >> 5) & 1);
  bVar24 = (bool)((byte)(uVar42 >> 6) & 1);
  bVar26 = SUB81(uVar42 >> 7,0);
  bVar15 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar21 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar23 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar25 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar27 = SUB81(uVar44 >> 7,0);
  local_300._4_4_ =
       (uint)bVar15 * ((uint)bVar14 * (int)__real_3f800000 | (uint)!bVar14 * auVar79._4_4_) |
       (uint)!bVar15 * (int)fVar99;
  local_300._0_4_ =
       (uint)(bVar48 & 1) *
       ((uint)(bVar13 & 1) * (int)__real_3f800000 | (uint)!(bool)(bVar13 & 1) * auVar79._0_4_) |
       (uint)!(bool)(bVar48 & 1) * (int)fVar97;
  local_300._8_4_ =
       (uint)bVar17 * ((uint)bVar16 * (int)__real_3f800000 | (uint)!bVar16 * auVar79._8_4_) |
       (uint)!bVar17 * (int)fVar100;
  local_300._12_4_ =
       (uint)bVar19 * ((uint)bVar18 * (int)__real_3f800000 | (uint)!bVar18 * auVar79._12_4_) |
       (uint)!bVar19 * (int)fVar101;
  local_300._16_4_ =
       (uint)bVar21 * ((uint)bVar20 * (int)__real_3f800000 | (uint)!bVar20 * auVar79._16_4_) |
       (uint)!bVar21 * (int)fVar102;
  local_300._20_4_ =
       (uint)bVar23 * ((uint)bVar22 * (int)__real_3f800000 | (uint)!bVar22 * auVar79._20_4_) |
       (uint)!bVar23 * (int)fVar103;
  local_300._24_4_ =
       (uint)bVar25 * ((uint)bVar24 * (int)__real_3f800000 | (uint)!bVar24 * auVar79._24_4_) |
       (uint)!bVar25 * (int)fVar104;
  local_300._28_4_ =
       (uint)bVar27 * ((uint)bVar26 * (int)__real_3f800000 | (uint)!bVar26 * auVar79._28_4_) |
       (uint)!bVar27 * (int)fVar105;
  auVar79 = vdivps_avx(auVar70,auVar96);
  bVar20 = SUB81(uVar42 >> 7,0);
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar21 = SUB81(uVar44 >> 7,0);
  local_2e0._4_4_ =
       (uint)bVar14 * (uint)!(bool)((byte)(uVar42 >> 1) & 1) * auVar79._4_4_ |
       (uint)!bVar14 * (int)fVar29;
  local_2e0._0_4_ =
       (uint)(bVar48 & 1) * (uint)!(bool)(bVar13 & 1) * auVar79._0_4_ |
       (uint)!(bool)(bVar48 & 1) * (int)fVar28;
  local_2e0._8_4_ =
       (uint)bVar15 * (uint)!(bool)((byte)(uVar42 >> 2) & 1) * auVar79._8_4_ |
       (uint)!bVar15 * (int)fVar30;
  local_2e0._12_4_ =
       (uint)bVar16 * (uint)!(bool)((byte)(uVar42 >> 3) & 1) * auVar79._12_4_ |
       (uint)!bVar16 * (int)fVar31;
  local_2e0._16_4_ =
       (uint)bVar17 * (uint)!(bool)((byte)(uVar42 >> 4) & 1) * auVar79._16_4_ |
       (uint)!bVar17 * (int)fVar32;
  local_2e0._20_4_ =
       (uint)bVar18 * (uint)!(bool)((byte)(uVar42 >> 5) & 1) * auVar79._20_4_ |
       (uint)!bVar18 * (int)fVar33;
  local_2e0._24_4_ =
       (uint)bVar19 * (uint)!(bool)((byte)(uVar42 >> 6) & 1) * auVar79._24_4_ |
       (uint)!bVar19 * (int)fVar34;
  local_2e0._28_4_ =
       (uint)bVar21 *
       ((uint)bVar20 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar20 * auVar79._28_4_)
       | (uint)!bVar21 * (int)fVar35;
  lVar41 = (longlong)((int)uVar43 << 2);
  auVar79 = vdivps_avx(auVar80,auVar96);
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar20 = SUB81(uVar44 >> 7,0);
  local_2c0._4_4_ =
       (uint)bVar14 * (uint)!(bool)((byte)(uVar42 >> 1) & 1) * auVar79._4_4_ |
       (uint)!bVar14 * (int)fVar116;
  local_2c0._0_4_ =
       (uint)(bVar48 & 1) * (uint)!(bool)(bVar13 & 1) * auVar79._0_4_ |
       (uint)!(bool)(bVar48 & 1) * (int)fVar115;
  local_2c0._8_4_ =
       (uint)bVar15 * (uint)!(bool)((byte)(uVar42 >> 2) & 1) * auVar79._8_4_ |
       (uint)!bVar15 * (int)fVar117;
  local_2c0._12_4_ =
       (uint)bVar16 * (uint)!(bool)((byte)(uVar42 >> 3) & 1) * auVar79._12_4_ |
       (uint)!bVar16 * (int)fVar118;
  local_2c0._16_4_ =
       (uint)bVar17 * (uint)!(bool)((byte)(uVar42 >> 4) & 1) * auVar79._16_4_ |
       (uint)!bVar17 * (int)fVar119;
  local_2c0._20_4_ =
       (uint)bVar18 * (uint)!(bool)((byte)(uVar42 >> 5) & 1) * auVar79._20_4_ |
       (uint)!bVar18 * (int)fVar120;
  local_2c0._24_4_ =
       (uint)bVar19 * (uint)!(bool)((byte)(uVar42 >> 6) & 1) * auVar79._24_4_ |
       (uint)!bVar19 * (int)fVar121;
  local_2c0._28_4_ =
       (uint)bVar20 * (uint)!SUB81(uVar42 >> 7,0) * auVar79._28_4_ | (uint)!bVar20 * (int)fVar122;
  auVar89._4_4_ = (uint)!(bool)((byte)(uVar42 >> 1) & 1) * auVar96._4_4_;
  auVar89._0_4_ = (uint)!(bool)(bVar13 & 1) * auVar96._0_4_;
  auVar89._8_4_ = (uint)!(bool)((byte)(uVar42 >> 2) & 1) * auVar96._8_4_;
  auVar89._12_4_ = (uint)!(bool)((byte)(uVar42 >> 3) & 1) * auVar96._12_4_;
  auVar89._16_4_ = (uint)!(bool)((byte)(uVar42 >> 4) & 1) * auVar96._16_4_;
  auVar89._20_4_ = (uint)!(bool)((byte)(uVar42 >> 5) & 1) * auVar96._20_4_;
  auVar89._24_4_ = (uint)!(bool)((byte)(uVar42 >> 6) & 1) * auVar96._24_4_;
  bVar14 = SUB81(uVar42 >> 7,0);
  auVar89._28_4_ =
       (uint)bVar14 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar14 * auVar96._28_4_;
  auVar70 = vaddps_avx512vl(auVar74,auVar81);
  auVar79 = vdivps_avx(auVar88,auVar70);
  auVar79 = vsqrtps_avx(auVar79);
  fVar106 = (fVar106 + fVar106) * auVar79._0_4_;
  fVar108 = (fVar108 + fVar108) * auVar79._4_4_;
  fVar109 = (fVar109 + fVar109) * auVar79._8_4_;
  fVar110 = (fVar110 + fVar110) * auVar79._12_4_;
  fVar111 = (fVar111 + fVar111) * auVar79._16_4_;
  fVar112 = (fVar112 + fVar112) * auVar79._20_4_;
  fVar113 = (fVar113 + fVar113) * auVar79._24_4_;
  fVar114 = (fVar114 + fVar114) * auVar79._28_4_;
  piVar11 = (int *)(param_4 + lVar41);
  auVar90._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * piVar11[1];
  auVar90._0_4_ = (uint)(bVar48 & 1) * *piVar11;
  auVar90._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * piVar11[2];
  auVar90._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * piVar11[3];
  auVar90._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * piVar11[4];
  auVar90._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * piVar11[5];
  auVar90._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * piVar11[6];
  auVar90._28_4_ = (uint)(byte)(uVar44 >> 7) * piVar11[7];
  auVar96 = vsubps_avx(auVar89,auVar90);
  auVar60._4_4_ = __real_322bcc77;
  auVar60._0_4_ = __real_322bcc77;
  auVar60._8_4_ = __real_322bcc77;
  auVar60._12_4_ = __real_322bcc77;
  auVar60._16_4_ = __real_322bcc77;
  auVar60._20_4_ = __real_322bcc77;
  auVar60._24_4_ = __real_322bcc77;
  auVar60._28_4_ = __real_322bcc77;
  uVar42 = vcmpps_avx512vl(auVar90,auVar60,1);
  auVar79 = vdivps_avx(auVar98,auVar90);
  bVar14 = (bool)((byte)uVar42 & 1);
  bVar15 = (bool)((byte)(uVar42 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar42 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar42 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar42 >> 4) & 1);
  bVar19 = (bool)((byte)(uVar42 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar42 >> 6) & 1);
  bVar21 = SUB81(uVar42 >> 7,0);
  auVar93._0_4_ = param_6 * param_6 * fVar1;
  auVar93._4_4_ = param_6 * param_6 * fVar2;
  auVar93._8_4_ = param_6 * param_6 * fVar3;
  auVar93._12_4_ = param_6 * param_6 * fVar4;
  auVar93._16_4_ = param_6 * param_6 * fVar5;
  auVar93._20_4_ = param_6 * param_6 * fVar6;
  auVar93._24_4_ = param_6 * param_6 * fVar7;
  auVar93._28_4_ = param_6 * param_6 * fVar8;
  auVar107._0_4_ =
       param_6 * (float)((uint)bVar14 * (int)fVar106 |
                        (uint)!bVar14 * (int)(fVar106 * auVar79._0_4_));
  auVar107._4_4_ =
       param_6 * (float)((uint)bVar15 * (int)fVar108 |
                        (uint)!bVar15 * (int)(fVar108 * auVar79._4_4_));
  auVar107._8_4_ =
       param_6 * (float)((uint)bVar16 * (int)fVar109 |
                        (uint)!bVar16 * (int)(fVar109 * auVar79._8_4_));
  auVar107._12_4_ =
       param_6 * (float)((uint)bVar17 * (int)fVar110 |
                        (uint)!bVar17 * (int)(fVar110 * auVar79._12_4_));
  auVar107._16_4_ =
       param_6 * (float)((uint)bVar18 * (int)fVar111 |
                        (uint)!bVar18 * (int)(fVar111 * auVar79._16_4_));
  auVar107._20_4_ =
       param_6 * (float)((uint)bVar19 * (int)fVar112 |
                        (uint)!bVar19 * (int)(fVar112 * auVar79._20_4_));
  auVar107._24_4_ =
       param_6 * (float)((uint)bVar20 * (int)fVar113 |
                        (uint)!bVar20 * (int)(fVar113 * auVar79._24_4_));
  auVar107._28_4_ =
       param_6 * (float)((uint)bVar21 * (int)fVar114 |
                        (uint)!bVar21 * (int)(fVar114 * auVar79._28_4_));
  auVar79 = vsubps_avx512vl(auVar64,auVar82);
  auVar79 = vsubps_avx512vl(auVar79,auVar61);
  auVar79 = vaddps_avx512vl(auVar85,auVar79);
  auVar80 = vsubps_avx512vl(auVar65,auVar83);
  auVar66 = vsubps_avx512vl(auVar73,auVar84);
  auVar80 = vsubps_avx512vl(auVar80,auVar62);
  auVar80 = vaddps_avx512vl(auVar86,auVar80);
  auVar66 = vsubps_avx512vl(auVar66,auVar63);
  auVar66 = vaddps_avx512vl(auVar87,auVar66);
  auVar80 = vmulps_avx512vl(auVar80,local_2e0);
  auVar79 = vfmadd231ps_avx512vl(auVar80,local_300,auVar79);
  auVar79 = vfmadd231ps_avx512vl(auVar79,local_2c0,auVar66);
  piVar11 = (int *)(param_5 + lVar41);
  auVar91._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * piVar11[1];
  auVar91._0_4_ = (uint)(bVar48 & 1) * *piVar11;
  auVar91._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * piVar11[2];
  auVar91._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * piVar11[3];
  auVar91._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * piVar11[4];
  auVar91._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * piVar11[5];
  auVar91._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * piVar11[6];
  auVar91._28_4_ = (uint)(byte)(uVar44 >> 7) * piVar11[7];
  auVar96 = vfnmsub213ps_avx512vl(auVar96,auVar93,auVar91);
  auVar79 = vfnmadd213ps_avx512vl(auVar79,auVar107,auVar96);
  auVar94._0_4_ = auVar70._0_4_ * (auVar107._0_4_ + auVar93._0_4_) + __real_3f800000;
  auVar94._4_4_ = auVar70._4_4_ * (auVar107._4_4_ + auVar93._4_4_) + __real_3f800000;
  auVar94._8_4_ = auVar70._8_4_ * (auVar107._8_4_ + auVar93._8_4_) + __real_3f800000;
  auVar94._12_4_ = auVar70._12_4_ * (auVar107._12_4_ + auVar93._12_4_) + __real_3f800000;
  auVar94._16_4_ = auVar70._16_4_ * (auVar107._16_4_ + auVar93._16_4_) + __real_3f800000;
  auVar94._20_4_ = auVar70._20_4_ * (auVar107._20_4_ + auVar93._20_4_) + __real_3f800000;
  auVar94._24_4_ = auVar70._24_4_ * (auVar107._24_4_ + auVar93._24_4_) + __real_3f800000;
  auVar94._28_4_ = auVar70._28_4_ * (auVar107._28_4_ + auVar93._28_4_) + __real_3f800000;
  auVar79 = vdivps_avx512vl(auVar79,auVar94);
  auVar96 = vaddps_avx512vl(auVar91,auVar79);
  puVar12 = (uint *)(param_5 + lVar41);
  bVar14 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar20 = SUB81(uVar44 >> 7,0);
  *puVar12 = (uint)(bVar48 & 1) * auVar96._0_4_ | (uint)!(bool)(bVar48 & 1) * *puVar12;
  puVar12[1] = (uint)bVar14 * auVar96._4_4_ | (uint)!bVar14 * puVar12[1];
  puVar12[2] = (uint)bVar15 * auVar96._8_4_ | (uint)!bVar15 * puVar12[2];
  puVar12[3] = (uint)bVar16 * auVar96._12_4_ | (uint)!bVar16 * puVar12[3];
  puVar12[4] = (uint)bVar17 * auVar96._16_4_ | (uint)!bVar17 * puVar12[4];
  puVar12[5] = (uint)bVar18 * auVar96._20_4_ | (uint)!bVar18 * puVar12[5];
  puVar12[6] = (uint)bVar19 * auVar96._24_4_ | (uint)!bVar19 * puVar12[6];
  puVar12[7] = (uint)bVar20 * auVar96._28_4_ | (uint)!bVar20 * puVar12[7];
  auVar96 = vmulps_avx512vl(local_300,auVar79);
  auVar70 = vfmadd231ps_avx512vl(auVar64,auVar74,auVar96);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar78,uVar44,auVar70);
  auVar70 = vmulps_avx512vl(local_2e0,auVar79);
  auVar80 = vfmadd231ps_avx512vl(auVar65,auVar74,auVar70);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar78 | auVar92),uVar44,auVar80);
  auVar79 = vmulps_avx512vl(local_2c0,auVar79);
  auVar80 = vfmadd231ps_avx512vl(auVar73,auVar74,auVar79);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar78 | auVar71),uVar44,auVar80);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar70,uVar44,auVar74);
  auVar96 = vfnmadd213ps_avx512vl(auVar96,auVar81,auVar61);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar76,uVar44,auVar96);
  auVar96 = vfnmadd213ps_avx512vl(auVar70,auVar81,auVar62);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar76 | auVar92),uVar44,auVar96);
  auVar79 = vfnmadd213ps_avx512vl(auVar79,auVar81,auVar63);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar79,uVar44,auVar79);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar78 | auVar92),uVar44,auVar81);
  return;
}

// ApplyXPBDSpringDampingConstraintsWithWeightMaps_avx512skx @ 14090dae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraintsWithWeightMaps_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,byte param_7,longlong param_8,longlong param_9,
               byte param_10,undefined1 (*param_11) [16],longlong param_12,uint param_13)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [32];
  int *piVar4;
  uint *puVar5;
  byte bVar6;
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
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  longlong lVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  ulonglong uVar76;
  uint uVar77;
  byte bVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
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
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar85 [16];
  undefined1 auVar111 [32];
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
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  undefined1 auVar136 [32];
  float fVar150;
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar153 [16];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar154 [16];
  undefined1 in_ZMM25 [64];
  undefined1 auVar155 [16];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 auVar156 [16];
  undefined1 in_ZMM31 [64];
  undefined1 local_280 [32];
  undefined1 local_260 [8];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  undefined1 local_240 [32];
  undefined4 auStack_1f8 [4];
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
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
  
  uVar70 = __real_38d1b717;
  uVar69 = __real_322bcc77;
  auVar153 = in_ZMM22._0_16_;
  auVar85 = in_ZMM20._0_16_;
  auVar156 = in_ZMM31._0_16_;
  auVar84 = in_ZMM30._0_16_;
  auVar83 = in_ZMM29._0_16_;
  auVar81 = in_ZMM19._0_16_;
  auVar82 = in_ZMM28._0_16_;
  auVar155 = in_ZMM26._0_16_;
  auVar154 = in_ZMM25._0_16_;
  auVar79 = in_ZMM23._0_16_;
  uVar72 = (ulonglong)param_10;
  uVar77 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar77 = param_13;
  }
  if ((int)(uVar77 & 0xfffffff8) < 1) {
    uVar75 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    local_1e0 = param_6;
    fStack_1dc = param_6;
    fStack_1d8 = param_6;
    fStack_1d4 = param_6;
    fStack_1d0 = param_6;
    fStack_1cc = param_6;
    fStack_1c8 = param_6;
    fStack_1c4 = param_6;
    uVar73 = 0;
    auVar123._4_4_ = __real_00000004;
    auVar123._0_4_ = __real_00000004;
    auVar123._8_4_ = __real_00000004;
    auVar123._12_4_ = __real_00000004;
    auVar124._4_4_ = __real_00000008;
    auVar124._0_4_ = __real_00000008;
    auVar124._8_4_ = __real_00000008;
    auVar124._12_4_ = __real_00000008;
    auVar111._16_4_ = __real_00000008;
    auVar111._0_16_ = auVar124;
    auVar111._20_4_ = __real_00000008;
    auVar111._24_4_ = __real_00000008;
    auVar111._28_4_ = __real_00000008;
    auVar86 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auStack_1f8[0] = __real_38d1b717;
    auStack_1f8[1] = __real_38d1b717;
    auStack_1f8[2] = __real_38d1b717;
    auStack_1f8[3] = __real_38d1b717;
    uStack_1e8 = __real_38d1b717;
    uStack_1e4 = __real_38d1b717;
    auVar87 = vbroadcastss_avx512vl(ZEXT416((uint)__real_3f800000));
    auVar81 = auVar87._0_16_;
    uVar75 = 0;
    do {
      auVar85 = (undefined1  [16])0x0;
      auVar79 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar79._8_8_ = 0;
        auVar79._0_8_ = *(ulonglong *)(param_8 + uVar75);
      }
      auVar110 = *(undefined1 (*) [32])(param_3 + uVar73 * 2);
      auVar103 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar73 * 2);
      auVar109 = vpermt2d_avx512vl(auVar110,
                                   ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                   ,auVar103);
      auVar110 = vpermt2d_avx512vl(auVar110,
                                   ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                   ,auVar103);
      if ((param_10 & 1) != 0) {
        auVar85._8_8_ = 0;
        auVar85._0_8_ = *(ulonglong *)(*param_11 + uVar75);
      }
      auVar88 = vpslld_avx512vl(auVar109,4);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar154 = auVar88._0_16_ | auVar123;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      auVar155 = auVar88._0_16_ | auVar124;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar73));
      auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)param_11));
      auVar93 = vpslld_avx512vl(auVar110,4);
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      auVar94 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_1f8));
      auVar153 = auVar93._0_16_ | auVar123;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar95 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_9));
      auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar75));
      auVar97 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar98 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar72 * 4));
      vpslld_avx2(auVar109,2);
      vpslld_avx2(auVar109,3);
      auVar109 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar72));
      auVar99 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
      auVar100 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar72 * 4));
      vpslld_avx2(auVar110,2);
      vpslld_avx2(auVar110,3);
      auVar101 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
      auVar110 = vpmovsxbd_avx2(auVar79);
      vpslld_avx2(auVar110,2);
      auVar103 = vgatherdps_avx512vl(*(undefined4 *)(param_9 + (longlong)param_1));
      auVar110 = vpmovsxbd_avx2(auVar85);
      vpslld_avx2(auVar110,2);
      auVar104 = vgatherdps_avx512vl(*(undefined4 *)(param_12 + (longlong)param_1));
      uVar76 = uVar73 & 0xffffffff;
      auVar105 = vsubps_avx512vl(auVar89,auVar94);
      auVar106 = vsubps_avx512vl(auVar90,auVar95);
      auVar107 = vaddps_avx512vl(auVar92,auVar97);
      auVar85 = auVar107._0_16_;
      auVar110 = vdivps_avx512vl(auVar103,auVar107);
      auVar110 = vsqrtps_avx(auVar110);
      fVar134 = (auVar104._0_4_ + auVar104._0_4_) * auVar110._0_4_;
      fVar137 = (auVar104._4_4_ + auVar104._4_4_) * auVar110._4_4_;
      fVar139 = (auVar104._8_4_ + auVar104._8_4_) * auVar110._8_4_;
      fVar141 = (auVar104._12_4_ + auVar104._12_4_) * auVar110._12_4_;
      fVar143 = (auVar104._16_4_ + auVar104._16_4_) * auVar110._16_4_;
      fVar145 = (auVar104._20_4_ + auVar104._20_4_) * auVar110._20_4_;
      fVar147 = (auVar104._24_4_ + auVar104._24_4_) * auVar110._24_4_;
      fVar149 = (auVar104._28_4_ + auVar104._28_4_) * auVar110._28_4_;
      auVar104 = vsubps_avx512vl(auVar91,auVar96);
      auVar110._4_4_ = uVar69;
      auVar110._0_4_ = uVar69;
      auVar110._8_4_ = uVar69;
      auVar110._12_4_ = uVar69;
      auVar110._16_4_ = uVar69;
      auVar110._20_4_ = uVar69;
      auVar110._24_4_ = uVar69;
      auVar110._28_4_ = uVar69;
      uVar74 = vcmpps_avx512vl(*(undefined1 (*) [32])(param_4 + uVar76),auVar110,1);
      auVar108 = vdivps_avx512vl(auVar87,*(undefined1 (*) [32])(param_4 + uVar76));
      bVar7 = (bool)((byte)uVar74 & 1);
      bVar8 = (bool)((byte)(uVar74 >> 1) & 1);
      bVar12 = (bool)((byte)(uVar74 >> 2) & 1);
      bVar23 = (bool)((byte)(uVar74 >> 3) & 1);
      bVar34 = (bool)((byte)(uVar74 >> 4) & 1);
      bVar41 = (bool)((byte)(uVar74 >> 5) & 1);
      bVar48 = (bool)((byte)(uVar74 >> 6) & 1);
      bVar55 = SUB81(uVar74 >> 7,0);
      auVar110 = vmulps_avx512vl(auVar106,auVar106);
      auVar110 = vfmadd231ps_avx512vl(auVar110,auVar105,auVar105);
      auVar136._0_4_ = auVar104._0_4_ * auVar104._0_4_ + auVar110._0_4_;
      auVar136._4_4_ = auVar104._4_4_ * auVar104._4_4_ + auVar110._4_4_;
      auVar136._8_4_ = auVar104._8_4_ * auVar104._8_4_ + auVar110._8_4_;
      auVar136._12_4_ = auVar104._12_4_ * auVar104._12_4_ + auVar110._12_4_;
      auVar136._16_4_ = auVar104._16_4_ * auVar104._16_4_ + auVar110._16_4_;
      auVar136._20_4_ = auVar104._20_4_ * auVar104._20_4_ + auVar110._20_4_;
      auVar136._24_4_ = auVar104._24_4_ * auVar104._24_4_ + auVar110._24_4_;
      auVar136._28_4_ = auVar104._28_4_ * auVar104._28_4_ + auVar110._28_4_;
      auVar103._4_4_ = uVar70;
      auVar103._0_4_ = uVar70;
      auVar103._8_4_ = uVar70;
      auVar103._12_4_ = uVar70;
      auVar103._16_4_ = uVar70;
      auVar103._20_4_ = uVar70;
      auVar103._24_4_ = uVar70;
      auVar103._28_4_ = uVar70;
      uVar74 = vcmpps_avx512vl(auVar136,auVar103,1);
      auVar110 = vsqrtps_avx(auVar136);
      auVar105 = vdivps_avx512vl(auVar105,auVar110);
      auVar106 = vdivps_avx512vl(auVar106,auVar110);
      auVar110 = vdivps_avx(auVar104,auVar110);
      auVar103 = vsubps_avx512vl(auVar89,auVar98);
      auVar103 = vsubps_avx512vl(auVar103,auVar94);
      auVar104._0_4_ = auVar103._0_4_ + auVar100._0_4_;
      auVar104._4_4_ = auVar103._4_4_ + auVar100._4_4_;
      auVar104._8_4_ = auVar103._8_4_ + auVar100._8_4_;
      auVar104._12_4_ = auVar103._12_4_ + auVar100._12_4_;
      auVar104._16_4_ = auVar103._16_4_ + auVar100._16_4_;
      auVar104._20_4_ = auVar103._20_4_ + auVar100._20_4_;
      auVar104._24_4_ = auVar103._24_4_ + auVar100._24_4_;
      auVar104._28_4_ = auVar103._28_4_ + auVar100._28_4_;
      auVar103 = vsubps_avx512vl(auVar90,auVar109);
      auVar103 = vsubps_avx512vl(auVar103,auVar95);
      auVar122._0_4_ = auVar103._0_4_ + auVar101._0_4_;
      auVar122._4_4_ = auVar103._4_4_ + auVar101._4_4_;
      auVar122._8_4_ = auVar103._8_4_ + auVar101._8_4_;
      auVar122._12_4_ = auVar103._12_4_ + auVar101._12_4_;
      auVar122._16_4_ = auVar103._16_4_ + auVar101._16_4_;
      auVar122._20_4_ = auVar103._20_4_ + auVar101._20_4_;
      auVar122._24_4_ = auVar103._24_4_ + auVar101._24_4_;
      auVar122._28_4_ = auVar103._28_4_ + auVar101._28_4_;
      auVar103 = vsubps_avx512vl(auVar91,auVar99);
      auVar103 = vsubps_avx(auVar103,auVar96);
      bVar78 = (byte)uVar74;
      auVar109._0_4_ =
           (uint)(bVar78 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar105._0_4_;
      bVar9 = (bool)((byte)(uVar74 >> 1) & 1);
      auVar109._4_4_ = (uint)bVar9 * auVar87._4_4_ | (uint)!bVar9 * auVar105._4_4_;
      bVar9 = (bool)((byte)(uVar74 >> 2) & 1);
      auVar109._8_4_ = (uint)bVar9 * auVar87._8_4_ | (uint)!bVar9 * auVar105._8_4_;
      bVar9 = (bool)((byte)(uVar74 >> 3) & 1);
      auVar109._12_4_ = (uint)bVar9 * auVar87._12_4_ | (uint)!bVar9 * auVar105._12_4_;
      bVar9 = (bool)((byte)(uVar74 >> 4) & 1);
      auVar109._16_4_ = (uint)bVar9 * auVar87._16_4_ | (uint)!bVar9 * auVar105._16_4_;
      bVar9 = (bool)((byte)(uVar74 >> 5) & 1);
      auVar109._20_4_ = (uint)bVar9 * auVar87._20_4_ | (uint)!bVar9 * auVar105._20_4_;
      bVar9 = (bool)((byte)(uVar74 >> 6) & 1);
      auVar109._24_4_ = (uint)bVar9 * auVar87._24_4_ | (uint)!bVar9 * auVar105._24_4_;
      bVar9 = SUB81(uVar74 >> 7,0);
      auVar109._28_4_ = (uint)bVar9 * auVar87._28_4_ | (uint)!bVar9 * auVar105._28_4_;
      auVar98._4_4_ = (uint)!(bool)((byte)(uVar74 >> 1) & 1) * auVar106._4_4_;
      auVar98._0_4_ = (uint)!(bool)(bVar78 & 1) * auVar106._0_4_;
      auVar98._8_4_ = (uint)!(bool)((byte)(uVar74 >> 2) & 1) * auVar106._8_4_;
      auVar98._12_4_ = (uint)!(bool)((byte)(uVar74 >> 3) & 1) * auVar106._12_4_;
      auVar98._16_4_ = (uint)!(bool)((byte)(uVar74 >> 4) & 1) * auVar106._16_4_;
      auVar98._20_4_ = (uint)!(bool)((byte)(uVar74 >> 5) & 1) * auVar106._20_4_;
      auVar98._24_4_ = (uint)!(bool)((byte)(uVar74 >> 6) & 1) * auVar106._24_4_;
      bVar9 = SUB81(uVar74 >> 7,0);
      auVar98._28_4_ =
           (uint)bVar9 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar9 * auVar106._28_4_
      ;
      auVar99 = vmulps_avx512vl(auVar98,auVar122);
      auVar99 = vfmadd231ps_avx512vl(auVar99,auVar109,auVar104);
      fVar125 = (float)((uint)!(bool)(bVar78 & 1) * auVar110._0_4_);
      fVar126 = (float)((uint)!(bool)((byte)(uVar74 >> 1) & 1) * auVar110._4_4_);
      auVar100._4_4_ = fVar126;
      auVar100._0_4_ = fVar125;
      fVar132 = (float)((uint)!(bool)((byte)(uVar74 >> 2) & 1) * auVar110._8_4_);
      auVar100._8_4_ = fVar132;
      fVar127 = (float)((uint)!(bool)((byte)(uVar74 >> 3) & 1) * auVar110._12_4_);
      auVar100._12_4_ = fVar127;
      fVar128 = (float)((uint)!(bool)((byte)(uVar74 >> 4) & 1) * auVar110._16_4_);
      auVar100._16_4_ = fVar128;
      fVar129 = (float)((uint)!(bool)((byte)(uVar74 >> 5) & 1) * auVar110._20_4_);
      auVar100._20_4_ = fVar129;
      fVar130 = (float)((uint)!(bool)((byte)(uVar74 >> 6) & 1) * auVar110._24_4_);
      auVar100._24_4_ = fVar130;
      fVar131 = (float)((uint)!SUB81(uVar74 >> 7,0) * auVar110._28_4_);
      auVar100._28_4_ = fVar131;
      pfVar1 = (float *)(param_5 + uVar76);
      fVar62 = pfVar1[1];
      fVar63 = pfVar1[2];
      fVar64 = pfVar1[3];
      fVar65 = pfVar1[4];
      fVar66 = pfVar1[5];
      fVar67 = pfVar1[6];
      fVar68 = pfVar1[7];
      auVar101._0_4_ =
           (float)((uint)bVar7 * (int)fVar134 | (uint)!bVar7 * (int)(fVar134 * auVar108._0_4_)) *
           param_6;
      auVar101._4_4_ =
           (float)((uint)bVar8 * (int)fVar137 | (uint)!bVar8 * (int)(fVar137 * auVar108._4_4_)) *
           param_6;
      auVar101._8_4_ =
           (float)((uint)bVar12 * (int)fVar139 | (uint)!bVar12 * (int)(fVar139 * auVar108._8_4_)) *
           param_6;
      auVar101._12_4_ =
           (float)((uint)bVar23 * (int)fVar141 | (uint)!bVar23 * (int)(fVar141 * auVar108._12_4_)) *
           param_6;
      auVar101._16_4_ =
           (float)((uint)bVar34 * (int)fVar143 | (uint)!bVar34 * (int)(fVar143 * auVar108._16_4_)) *
           param_6;
      auVar101._20_4_ =
           (float)((uint)bVar41 * (int)fVar145 | (uint)!bVar41 * (int)(fVar145 * auVar108._20_4_)) *
           param_6;
      auVar101._24_4_ =
           (float)((uint)bVar48 * (int)fVar147 | (uint)!bVar48 * (int)(fVar147 * auVar108._24_4_)) *
           param_6;
      auVar101._28_4_ =
           (float)((uint)bVar55 * (int)fVar149 | (uint)!bVar55 * (int)(fVar149 * auVar108._28_4_)) *
           param_6;
      auVar105._0_4_ =
           -(auVar101._0_4_ * (fVar125 * (auVar103._0_4_ + auVar102._0_4_) + auVar99._0_4_)) -
           *pfVar1;
      auVar105._4_4_ =
           -(auVar101._4_4_ * (fVar126 * (auVar103._4_4_ + auVar102._4_4_) + auVar99._4_4_)) -
           fVar62;
      auVar105._8_4_ =
           -(auVar101._8_4_ * (fVar132 * (auVar103._8_4_ + auVar102._8_4_) + auVar99._8_4_)) -
           fVar63;
      auVar105._12_4_ =
           -(auVar101._12_4_ * (fVar127 * (auVar103._12_4_ + auVar102._12_4_) + auVar99._12_4_)) -
           fVar64;
      auVar105._16_4_ =
           -(auVar101._16_4_ * (fVar128 * (auVar103._16_4_ + auVar102._16_4_) + auVar99._16_4_)) -
           fVar65;
      auVar105._20_4_ =
           -(auVar101._20_4_ * (fVar129 * (auVar103._20_4_ + auVar102._20_4_) + auVar99._20_4_)) -
           fVar66;
      auVar105._24_4_ =
           -(auVar101._24_4_ * (fVar130 * (auVar103._24_4_ + auVar102._24_4_) + auVar99._24_4_)) -
           fVar67;
      auVar105._28_4_ =
           -(auVar101._28_4_ * (fVar131 * (auVar103._28_4_ + auVar102._28_4_) + auVar99._28_4_)) -
           fVar68;
      auVar110 = vfmadd213ps_avx512vl(auVar101,auVar107,auVar87);
      auVar110 = vdivps_avx(auVar105,auVar110);
      pfVar2 = (float *)(param_5 + uVar76);
      *pfVar2 = *pfVar1 + auVar110._0_4_;
      pfVar2[1] = fVar62 + auVar110._4_4_;
      pfVar2[2] = fVar63 + auVar110._8_4_;
      pfVar2[3] = fVar64 + auVar110._12_4_;
      pfVar2[4] = fVar65 + auVar110._16_4_;
      pfVar2[5] = fVar66 + auVar110._20_4_;
      pfVar2[6] = fVar67 + auVar110._24_4_;
      pfVar2[7] = fVar68 + auVar110._28_4_;
      auVar103 = vmulps_avx512vl(auVar109,auVar110);
      auVar109 = vfmadd231ps_avx512vl(auVar89,auVar92,auVar103);
      in_ZMM29 = ZEXT3264(auVar109);
      auVar83 = auVar109._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar93 | auVar86),0xffff,auVar109);
      auVar109 = vmulps_avx512vl(auVar98,auVar110);
      auVar89 = vfmadd231ps_avx512vl(auVar90,auVar92,auVar109);
      in_ZMM30 = ZEXT3264(auVar89);
      auVar84 = auVar89._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar92,0xffff,auVar89);
      auVar89._0_4_ = fVar125 * auVar110._0_4_;
      auVar89._4_4_ = fVar126 * auVar110._4_4_;
      auVar89._8_4_ = fVar132 * auVar110._8_4_;
      auVar89._12_4_ = fVar127 * auVar110._12_4_;
      auVar89._16_4_ = fVar128 * auVar110._16_4_;
      auVar89._20_4_ = fVar129 * auVar110._20_4_;
      auVar89._24_4_ = fVar130 * auVar110._24_4_;
      auVar89._28_4_ = fVar131 * auVar110._28_4_;
      auVar110 = vfmadd231ps_avx512vl(auVar91,auVar92,auVar89);
      in_ZMM31 = ZEXT3264(auVar110);
      auVar156 = auVar110._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar97,0xffff,auVar110);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar88 | auVar86),0xffff,auVar92);
      auVar110 = vfnmadd231ps_avx512vl(auVar94,auVar97,auVar103);
      in_ZMM23 = ZEXT3264(auVar110);
      auVar79 = auVar110._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar111,0xffff,auVar110);
      auVar110 = vfnmadd231ps_avx512vl(auVar95,auVar97,auVar109);
      in_ZMM28 = ZEXT3264(auVar110);
      auVar82 = auVar110._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar96,0xffff,auVar110);
      auVar88._0_4_ = -(auVar97._0_4_ * auVar89._0_4_) + auVar96._0_4_;
      auVar88._4_4_ = -(auVar97._4_4_ * auVar89._4_4_) + auVar96._4_4_;
      auVar88._8_4_ = -(auVar97._8_4_ * auVar89._8_4_) + auVar96._8_4_;
      auVar88._12_4_ = -(auVar97._12_4_ * auVar89._12_4_) + auVar96._12_4_;
      auVar88._16_4_ = -(auVar97._16_4_ * auVar89._16_4_) + auVar96._16_4_;
      auVar88._20_4_ = -(auVar97._20_4_ * auVar89._20_4_) + auVar96._20_4_;
      auVar88._24_4_ = -(auVar97._24_4_ * auVar89._24_4_) + auVar96._24_4_;
      auVar88._28_4_ = -(auVar97._28_4_ * auVar89._28_4_) + auVar96._28_4_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar100,0xffff,auVar88);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar93 | auVar86),0xffff,auVar97);
      uVar75 = uVar75 + 8;
      uVar73 = uVar73 + 0x20;
    } while ((int)uVar75 < (int)(uVar77 & 0xfffffff8));
    if ((int)param_13 <= (int)uVar75) {
      return;
    }
  }
  auVar86 = vpbroadcastd_avx512vl();
  auVar86 = vpor_avx2(auVar86,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar87 = vpbroadcastd_avx512vl();
  uVar73 = vpcmpgtd_avx512vl(auVar87,auVar86);
  uVar74 = uVar75 & 0xffffffff;
  pauVar3 = (undefined1 (*) [32])(param_3 + uVar74 * 8);
  bVar78 = (byte)uVar73;
  if (bVar78 == 0xff) {
    auVar86 = vmovdqa64_avx512vl(
                                ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                );
    auVar86 = vpermi2d_avx512vl(auVar86,*pauVar3,pauVar3[1]);
    auVar87 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                );
    auVar87 = vpermi2d_avx512vl(auVar87,*pauVar3,pauVar3[1]);
    auVar153 = vxorps_avx512vl(auVar153,auVar153);
  }
  else {
    auVar79 = vxorps_avx512vl(auVar79,auVar79);
    auVar87 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar3 + param_5));
    auVar86._0_4_ = (uint)(bVar78 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar79._0_4_;
    bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
    auVar86._4_4_ = (uint)bVar7 * auVar87._4_4_ | (uint)!bVar7 * auVar79._4_4_;
    bVar7 = (bool)((byte)(uVar73 >> 2) & 1);
    auVar86._8_4_ = (uint)bVar7 * auVar87._8_4_ | (uint)!bVar7 * auVar79._8_4_;
    bVar7 = (bool)((byte)(uVar73 >> 3) & 1);
    auVar86._12_4_ = (uint)bVar7 * auVar87._12_4_ | (uint)!bVar7 * auVar79._12_4_;
    auVar86._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar87._16_4_;
    auVar86._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar87._20_4_;
    auVar86._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar87._24_4_;
    auVar86._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar87._28_4_;
    auVar111 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar3 + param_5));
    auVar87._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar111._4_4_;
    auVar87._0_4_ = (uint)(bVar78 & 1) * auVar111._0_4_;
    auVar87._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar111._8_4_;
    auVar87._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar111._12_4_;
    auVar87._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar111._16_4_;
    auVar87._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar111._20_4_;
    auVar87._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar111._24_4_;
    auVar87._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar111._28_4_;
    auVar153 = vxorps_avx512vl(auVar153,auVar153);
  }
  auVar80 = (undefined1  [16])0x0;
  if ((param_7 & 1) != 0) {
    if ((~bVar78 & 0x81) == 0) {
      auVar80._8_8_ = 0;
      auVar80._0_8_ = *(ulonglong *)*(undefined1 (*) [16])(param_8 + uVar74);
    }
    else {
      auVar79 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_8 + uVar74));
      auVar80[1] = ((byte)(uVar73 >> 1) & 1) * auVar79[1];
      auVar80[0] = (bVar78 & 1) * auVar79[0];
      auVar80[2] = ((byte)(uVar73 >> 2) & 1) * auVar79[2];
      auVar80[3] = ((byte)(uVar73 >> 3) & 1) * auVar79[3];
      auVar80[4] = ((byte)(uVar73 >> 4) & 1) * auVar79[4];
      auVar80[5] = ((byte)(uVar73 >> 5) & 1) * auVar79[5];
      auVar80[6] = ((byte)(uVar73 >> 6) & 1) * auVar79[6];
      auVar80[7] = (char)(uVar73 >> 7) * auVar79[7];
      auVar80._8_8_ = 0;
    }
  }
  if ((param_10 & 1) != 0) {
    param_11 = (undefined1 (*) [16])(*param_11 + uVar74);
    if ((~bVar78 & 0x81) == 0) {
      auVar153._8_8_ = 0;
      auVar153._0_8_ = *(ulonglong *)*param_11;
    }
    else {
      auVar79 = vmovdqu8_avx512vl(*param_11);
      auVar153[1] = ((byte)(uVar73 >> 1) & 1) * auVar79[1];
      auVar153[0] = (bVar78 & 1) * auVar79[0];
      auVar153[2] = ((byte)(uVar73 >> 2) & 1) * auVar79[2];
      auVar153[3] = ((byte)(uVar73 >> 3) & 1) * auVar79[3];
      auVar153[4] = ((byte)(uVar73 >> 4) & 1) * auVar79[4];
      auVar153[5] = ((byte)(uVar73 >> 5) & 1) * auVar79[5];
      auVar153[6] = ((byte)(uVar73 >> 6) & 1) * auVar79[6];
      auVar153[7] = (char)(uVar73 >> 7) * auVar79[7];
      auVar153._8_8_ = 0;
    }
  }
  auVar110 = vpslld_avx512vl(auVar86,4);
  auVar118._4_4_ = __real_00000004;
  auVar118._0_4_ = __real_00000004;
  auVar118._8_4_ = __real_00000004;
  auVar118._12_4_ = __real_00000004;
  auVar118._16_4_ = __real_00000004;
  auVar118._20_4_ = __real_00000004;
  auVar118._24_4_ = __real_00000004;
  auVar118._28_4_ = __real_00000004;
  auVar79 = vxorps_avx512vl(auVar154,auVar154);
  auVar111 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar24 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar154 = vxorps_avx512vl(auVar155,auVar155);
  auVar103 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  bVar8 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar14 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar25 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar109 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
  auVar155 = vxorps_avx512vl(auVar82,auVar82);
  auVar88 = vgatherdps_avx512vl(*param_1);
  bVar9 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar26 = (bool)((byte)(uVar73 >> 3) & 1);
  vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
  auVar81 = vxorps_avx512vl(auVar81,auVar81);
  auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
  auVar99._0_4_ = (uint)(bVar78 & 1) * auVar89._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar81._0_4_;
  bVar12 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar99._4_4_ = (uint)bVar12 * auVar89._4_4_ | (uint)!bVar12 * auVar81._4_4_;
  bVar12 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar99._8_4_ = (uint)bVar12 * auVar89._8_4_ | (uint)!bVar12 * auVar81._8_4_;
  bVar12 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar99._12_4_ = (uint)bVar12 * auVar89._12_4_ | (uint)!bVar12 * auVar81._12_4_;
  auVar99._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar89._16_4_;
  auVar99._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar89._20_4_;
  auVar99._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar89._24_4_;
  auVar99._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar89._28_4_;
  auVar89 = vpslld_avx512vl(auVar87,4);
  auVar81 = vxorps_avx512vl(auVar83,auVar83);
  auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar72));
  bVar12 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar27 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar82 = vxorps_avx512vl(auVar84,auVar84);
  auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)auStack_1f8));
  auVar83._0_4_ = (uint)(bVar78 & 1) * auVar91._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar82._0_4_;
  bVar23 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar83._4_4_ = (uint)bVar23 * auVar91._4_4_ | (uint)!bVar23 * auVar82._4_4_;
  bVar23 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar83._8_4_ = (uint)bVar23 * auVar91._8_4_ | (uint)!bVar23 * auVar82._8_4_;
  bVar23 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar83._12_4_ = (uint)bVar23 * auVar91._12_4_ | (uint)!bVar23 * auVar82._12_4_;
  auVar82 = vxorps_avx512vl(auVar156,auVar156);
  auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
  auVar84._0_4_ = (uint)(bVar78 & 1) * auVar98._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar82._0_4_;
  bVar23 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar84._4_4_ = (uint)bVar23 * auVar98._4_4_ | (uint)!bVar23 * auVar82._4_4_;
  bVar23 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar84._8_4_ = (uint)bVar23 * auVar98._8_4_ | (uint)!bVar23 * auVar82._8_4_;
  bVar23 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar84._12_4_ = (uint)bVar23 * auVar98._12_4_ | (uint)!bVar23 * auVar82._12_4_;
  auVar85 = vxorps_avx512vl(auVar85,auVar85);
  auVar92 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
  auVar102._0_4_ = (uint)(bVar78 & 1) * auVar92._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_;
  bVar23 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar102._4_4_ = (uint)bVar23 * auVar92._4_4_ | (uint)!bVar23 * auVar85._4_4_;
  bVar23 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar102._8_4_ = (uint)bVar23 * auVar92._8_4_ | (uint)!bVar23 * auVar85._8_4_;
  bVar23 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar102._12_4_ = (uint)bVar23 * auVar92._12_4_ | (uint)!bVar23 * auVar85._12_4_;
  auVar102._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar92._16_4_;
  auVar102._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar92._20_4_;
  auVar102._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar92._24_4_;
  auVar102._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar92._28_4_;
  bVar23 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar17 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar28 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar35 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar42 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar49 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar56 = SUB81(uVar73 >> 7,0);
  bVar34 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar18 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar29 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar36 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar43 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar50 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar57 = SUB81(uVar73 >> 7,0);
  bVar41 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar19 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar30 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar37 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar44 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar51 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar58 = SUB81(uVar73 >> 7,0);
  bVar48 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar20 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar31 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar38 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar45 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar52 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar59 = SUB81(uVar73 >> 7,0);
  bVar55 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar21 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar32 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar39 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar46 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar53 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar60 = SUB81(uVar73 >> 7,0);
  bVar10 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar22 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar33 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar40 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar47 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar54 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar61 = SUB81(uVar73 >> 7,0);
  auVar92 = vpaddd_avx512vl(auVar86,auVar86);
  vpaddd_avx512vl(auVar86,auVar92);
  auVar92 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar74 * 4));
  auVar106._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar92._4_4_;
  auVar106._0_4_ = (uint)(bVar78 & 1) * auVar92._0_4_;
  auVar106._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar92._8_4_;
  auVar106._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar92._12_4_;
  auVar106._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar92._16_4_;
  auVar106._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar92._20_4_;
  auVar106._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar92._24_4_;
  auVar106._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar92._28_4_;
  auVar92 = vpslld_avx512vl(auVar86,2);
  auVar86 = vpslld_avx512vl(auVar86,3);
  auVar86 = vpaddd_avx512vl(auVar86,auVar92);
  auVar92 = vpaddd_avx512vl(auVar86,auVar118);
  auVar93 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar3 + param_2));
  auVar107._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar93._4_4_;
  auVar107._0_4_ = (uint)(bVar78 & 1) * auVar93._0_4_;
  auVar107._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar93._8_4_;
  auVar107._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar93._12_4_;
  auVar107._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar93._16_4_;
  auVar107._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar93._20_4_;
  auVar107._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar93._24_4_;
  auVar107._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar93._28_4_;
  vpaddd_avx512vl(auVar86,auVar109);
  auVar85 = vxorps_avx512vl(auVar92._0_16_,auVar92._0_16_);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(*param_11 + param_2));
  auVar108._0_4_ = (uint)(bVar78 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_;
  bVar11 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar108._4_4_ = (uint)bVar11 * auVar86._4_4_ | (uint)!bVar11 * auVar85._4_4_;
  bVar11 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar108._8_4_ = (uint)bVar11 * auVar86._8_4_ | (uint)!bVar11 * auVar85._8_4_;
  bVar11 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar108._12_4_ = (uint)bVar11 * auVar86._12_4_ | (uint)!bVar11 * auVar85._12_4_;
  auVar108._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_;
  auVar108._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_;
  auVar108._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_;
  auVar108._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar86._28_4_;
  auVar86 = vpaddd_avx512vl(auVar87,auVar87);
  vpaddd_avx512vl(auVar87,auVar86);
  auVar85 = vxorps_avx512vl(auVar83,auVar83);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_11 * 4));
  auVar112._0_4_ = (uint)(bVar78 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_;
  bVar11 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar112._4_4_ = (uint)bVar11 * auVar86._4_4_ | (uint)!bVar11 * auVar85._4_4_;
  bVar11 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar112._8_4_ = (uint)bVar11 * auVar86._8_4_ | (uint)!bVar11 * auVar85._8_4_;
  bVar11 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar112._12_4_ = (uint)bVar11 * auVar86._12_4_ | (uint)!bVar11 * auVar85._12_4_;
  auVar112._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_;
  auVar112._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_;
  auVar112._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_;
  auVar112._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar86._28_4_;
  auVar86 = vpslld_avx512vl(auVar87,2);
  auVar87 = vpslld_avx512vl(auVar87,3);
  auVar86 = vpaddd_avx512vl(auVar87,auVar86);
  vpaddd_avx512vl(auVar86,auVar118);
  auVar87 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar113._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar87._4_4_;
  auVar113._0_4_ = (uint)(bVar78 & 1) * auVar87._0_4_;
  auVar113._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar87._8_4_;
  auVar113._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar87._12_4_;
  auVar113._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar87._16_4_;
  auVar113._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar87._20_4_;
  auVar113._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar87._24_4_;
  auVar113._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar87._28_4_;
  vpaddd_avx512vl(auVar86,auVar109);
  auVar85 = vxorps_avx512vl(auVar84,auVar84);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_5));
  auVar114._0_4_ = (uint)(bVar78 & 1) * auVar86._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar85._0_4_;
  bVar11 = (bool)((byte)(uVar73 >> 1) & 1);
  auVar114._4_4_ = (uint)bVar11 * auVar86._4_4_ | (uint)!bVar11 * auVar85._4_4_;
  bVar11 = (bool)((byte)(uVar73 >> 2) & 1);
  auVar114._8_4_ = (uint)bVar11 * auVar86._8_4_ | (uint)!bVar11 * auVar85._8_4_;
  bVar11 = (bool)((byte)(uVar73 >> 3) & 1);
  auVar114._12_4_ = (uint)bVar11 * auVar86._12_4_ | (uint)!bVar11 * auVar85._12_4_;
  auVar114._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_;
  auVar114._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_;
  auVar114._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_;
  auVar114._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar86._28_4_;
  auVar86 = vpmovsxbd_avx512vl(auVar80);
  vpslld_avx2(auVar86,2);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(param_9 + param_5));
  auVar115._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * auVar86._4_4_;
  auVar115._0_4_ = (uint)(bVar78 & 1) * auVar86._0_4_;
  auVar115._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * auVar86._8_4_;
  auVar115._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * auVar86._12_4_;
  auVar115._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_;
  auVar115._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_;
  auVar115._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_;
  auVar115._28_4_ = (uint)(byte)(uVar73 >> 7) * auVar86._28_4_;
  auVar86 = vpmovsxbd_avx512vl(auVar153);
  vpslld_avx2(auVar86,2);
  auVar86 = vgatherdps_avx512vl(*(undefined4 *)(param_12 + param_5));
  fVar125 = (float)((uint)(bVar78 & 1) * auVar86._0_4_);
  fVar126 = (float)((uint)((byte)(uVar73 >> 1) & 1) * auVar86._4_4_);
  fVar127 = (float)((uint)((byte)(uVar73 >> 2) & 1) * auVar86._8_4_);
  fVar128 = (float)((uint)((byte)(uVar73 >> 3) & 1) * auVar86._12_4_);
  fVar129 = (float)((uint)((byte)(uVar73 >> 4) & 1) * auVar86._16_4_);
  fVar130 = (float)((uint)((byte)(uVar73 >> 5) & 1) * auVar86._20_4_);
  fVar131 = (float)((uint)((byte)(uVar73 >> 6) & 1) * auVar86._24_4_);
  fVar132 = (float)((uint)(byte)(uVar73 >> 7) * auVar86._28_4_);
  auVar95._4_4_ =
       (uint)bVar23 * ((uint)bVar7 * auVar111._4_4_ | (uint)!bVar7 * auVar79._4_4_) |
       (uint)!bVar23 * iStack_15c;
  auVar95._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar111._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar79._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_160;
  auVar95._8_4_ =
       (uint)bVar17 * ((uint)bVar13 * auVar111._8_4_ | (uint)!bVar13 * auVar79._8_4_) |
       (uint)!bVar17 * iStack_158;
  auVar95._12_4_ =
       (uint)bVar28 * ((uint)bVar24 * auVar111._12_4_ | (uint)!bVar24 * auVar79._12_4_) |
       (uint)!bVar28 * iStack_154;
  auVar95._16_4_ =
       (uint)bVar35 * (uint)((byte)(uVar73 >> 4) & 1) * auVar111._16_4_ | (uint)!bVar35 * iStack_150
  ;
  auVar95._20_4_ =
       (uint)bVar42 * (uint)((byte)(uVar73 >> 5) & 1) * auVar111._20_4_ | (uint)!bVar42 * iStack_14c
  ;
  auVar95._24_4_ =
       (uint)bVar49 * (uint)((byte)(uVar73 >> 6) & 1) * auVar111._24_4_ | (uint)!bVar49 * iStack_148
  ;
  auVar95._28_4_ =
       (uint)bVar56 * (uint)(byte)(uVar73 >> 7) * auVar111._28_4_ | (uint)!bVar56 * iStack_144;
  auVar96._4_4_ =
       (uint)bVar34 * ((uint)bVar8 * auVar103._4_4_ | (uint)!bVar8 * auVar154._4_4_) |
       (uint)!bVar34 * iStack_13c;
  auVar96._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar103._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar154._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_140;
  auVar96._8_4_ =
       (uint)bVar18 * ((uint)bVar14 * auVar103._8_4_ | (uint)!bVar14 * auVar154._8_4_) |
       (uint)!bVar18 * iStack_138;
  auVar96._12_4_ =
       (uint)bVar29 * ((uint)bVar25 * auVar103._12_4_ | (uint)!bVar25 * auVar154._12_4_) |
       (uint)!bVar29 * iStack_134;
  auVar96._16_4_ =
       (uint)bVar36 * (uint)((byte)(uVar73 >> 4) & 1) * auVar103._16_4_ | (uint)!bVar36 * iStack_130
  ;
  auVar96._20_4_ =
       (uint)bVar43 * (uint)((byte)(uVar73 >> 5) & 1) * auVar103._20_4_ | (uint)!bVar43 * iStack_12c
  ;
  auVar96._24_4_ =
       (uint)bVar50 * (uint)((byte)(uVar73 >> 6) & 1) * auVar103._24_4_ | (uint)!bVar50 * iStack_128
  ;
  auVar96._28_4_ =
       (uint)bVar57 * (uint)(byte)(uVar73 >> 7) * auVar103._28_4_ | (uint)!bVar57 * iStack_124;
  auVar97._4_4_ =
       (uint)bVar41 * ((uint)bVar9 * auVar88._4_4_ | (uint)!bVar9 * auVar155._4_4_) |
       (uint)!bVar41 * iStack_11c;
  auVar97._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar88._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar155._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_120;
  auVar97._8_4_ =
       (uint)bVar19 * ((uint)bVar15 * auVar88._8_4_ | (uint)!bVar15 * auVar155._8_4_) |
       (uint)!bVar19 * iStack_118;
  auVar97._12_4_ =
       (uint)bVar30 * ((uint)bVar26 * auVar88._12_4_ | (uint)!bVar26 * auVar155._12_4_) |
       (uint)!bVar30 * iStack_114;
  auVar97._16_4_ =
       (uint)bVar37 * (uint)((byte)(uVar73 >> 4) & 1) * auVar88._16_4_ | (uint)!bVar37 * iStack_110;
  auVar97._20_4_ =
       (uint)bVar44 * (uint)((byte)(uVar73 >> 5) & 1) * auVar88._20_4_ | (uint)!bVar44 * iStack_10c;
  auVar97._24_4_ =
       (uint)bVar51 * (uint)((byte)(uVar73 >> 6) & 1) * auVar88._24_4_ | (uint)!bVar51 * iStack_108;
  auVar97._28_4_ =
       (uint)bVar58 * (uint)(byte)(uVar73 >> 7) * auVar88._28_4_ | (uint)!bVar58 * iStack_104;
  auVar92._4_4_ =
       (uint)bVar48 * ((uint)bVar12 * auVar90._4_4_ | (uint)!bVar12 * auVar81._4_4_) |
       (uint)!bVar48 * iStack_1bc;
  auVar92._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar78 & 1) * auVar90._0_4_ | (uint)!(bool)(bVar78 & 1) * auVar81._0_4_) |
       (uint)!(bool)(bVar78 & 1) * local_1c0;
  auVar92._8_4_ =
       (uint)bVar20 * ((uint)bVar16 * auVar90._8_4_ | (uint)!bVar16 * auVar81._8_4_) |
       (uint)!bVar20 * iStack_1b8;
  auVar92._12_4_ =
       (uint)bVar31 * ((uint)bVar27 * auVar90._12_4_ | (uint)!bVar27 * auVar81._12_4_) |
       (uint)!bVar31 * iStack_1b4;
  auVar92._16_4_ =
       (uint)bVar38 * (uint)((byte)(uVar73 >> 4) & 1) * auVar90._16_4_ | (uint)!bVar38 * iStack_1b0;
  auVar92._20_4_ =
       (uint)bVar45 * (uint)((byte)(uVar73 >> 5) & 1) * auVar90._20_4_ | (uint)!bVar45 * iStack_1ac;
  auVar92._24_4_ =
       (uint)bVar52 * (uint)((byte)(uVar73 >> 6) & 1) * auVar90._24_4_ | (uint)!bVar52 * iStack_1a8;
  auVar92._28_4_ =
       (uint)bVar59 * (uint)(byte)(uVar73 >> 7) * auVar90._28_4_ | (uint)!bVar59 * iStack_1a4;
  auVar93._4_4_ = bVar55 * auVar83._4_4_ | (uint)!bVar55 * iStack_19c;
  auVar93._0_4_ = (bVar78 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar78 & 1) * local_1a0;
  auVar93._8_4_ = bVar21 * auVar83._8_4_ | (uint)!bVar21 * iStack_198;
  auVar93._12_4_ = bVar32 * auVar83._12_4_ | (uint)!bVar32 * iStack_194;
  auVar93._16_4_ =
       (uint)bVar39 * (uint)((byte)(uVar73 >> 4) & 1) * auVar91._16_4_ | (uint)!bVar39 * iStack_190;
  auVar93._20_4_ =
       (uint)bVar46 * (uint)((byte)(uVar73 >> 5) & 1) * auVar91._20_4_ | (uint)!bVar46 * iStack_18c;
  auVar93._24_4_ =
       (uint)bVar53 * (uint)((byte)(uVar73 >> 6) & 1) * auVar91._24_4_ | (uint)!bVar53 * iStack_188;
  auVar93._28_4_ =
       (uint)bVar60 * (uint)(byte)(uVar73 >> 7) * auVar91._28_4_ | (uint)!bVar60 * iStack_184;
  auVar94._4_4_ = bVar10 * auVar84._4_4_ | (uint)!bVar10 * iStack_17c;
  auVar94._0_4_ = (bVar78 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar78 & 1) * local_180;
  auVar94._8_4_ = bVar22 * auVar84._8_4_ | (uint)!bVar22 * iStack_178;
  auVar94._12_4_ = bVar33 * auVar84._12_4_ | (uint)!bVar33 * iStack_174;
  auVar94._16_4_ =
       (uint)bVar40 * (uint)((byte)(uVar73 >> 4) & 1) * auVar98._16_4_ | (uint)!bVar40 * iStack_170;
  auVar94._20_4_ =
       (uint)bVar47 * (uint)((byte)(uVar73 >> 5) & 1) * auVar98._20_4_ | (uint)!bVar47 * iStack_16c;
  auVar94._24_4_ =
       (uint)bVar54 * (uint)((byte)(uVar73 >> 6) & 1) * auVar98._24_4_ | (uint)!bVar54 * iStack_168;
  auVar94._28_4_ =
       (uint)bVar61 * (uint)(byte)(uVar73 >> 7) * auVar98._28_4_ | (uint)!bVar61 * iStack_164;
  auVar86 = vsubps_avx512vl(auVar95,auVar92);
  auVar87 = vsubps_avx512vl(auVar96,auVar93);
  auVar103 = vsubps_avx512vl(auVar97,auVar94);
  fVar62 = auVar87._0_4_;
  fVar63 = auVar87._4_4_;
  fVar64 = auVar87._8_4_;
  fVar65 = auVar87._12_4_;
  fVar66 = auVar87._16_4_;
  fVar67 = auVar87._20_4_;
  fVar68 = auVar87._24_4_;
  fVar134 = auVar87._28_4_;
  fVar137 = auVar86._0_4_;
  fVar139 = auVar86._4_4_;
  fVar141 = auVar86._8_4_;
  fVar143 = auVar86._12_4_;
  fVar145 = auVar86._16_4_;
  fVar147 = auVar86._20_4_;
  fVar149 = auVar86._24_4_;
  fVar133 = auVar86._28_4_;
  fVar135 = auVar103._0_4_;
  auVar151._0_4_ = fVar135 * fVar135 + fVar137 * fVar137 + fVar62 * fVar62;
  fVar138 = auVar103._4_4_;
  auVar151._4_4_ = fVar138 * fVar138 + fVar139 * fVar139 + fVar63 * fVar63;
  fVar140 = auVar103._8_4_;
  auVar151._8_4_ = fVar140 * fVar140 + fVar141 * fVar141 + fVar64 * fVar64;
  fVar142 = auVar103._12_4_;
  auVar151._12_4_ = fVar142 * fVar142 + fVar143 * fVar143 + fVar65 * fVar65;
  fVar144 = auVar103._16_4_;
  auVar151._16_4_ = fVar144 * fVar144 + fVar145 * fVar145 + fVar66 * fVar66;
  fVar146 = auVar103._20_4_;
  auVar151._20_4_ = fVar146 * fVar146 + fVar147 * fVar147 + fVar67 * fVar67;
  fVar148 = auVar103._24_4_;
  auVar151._24_4_ = fVar148 * fVar148 + fVar149 * fVar149 + fVar68 * fVar68;
  fVar150 = auVar103._28_4_;
  auVar151._28_4_ = fVar150 * fVar150 + fVar133 * fVar133 + fVar134 * fVar134;
  auVar90._4_4_ = __real_38d1b717;
  auVar90._0_4_ = __real_38d1b717;
  auVar90._8_4_ = __real_38d1b717;
  auVar90._12_4_ = __real_38d1b717;
  auVar90._16_4_ = __real_38d1b717;
  auVar90._20_4_ = __real_38d1b717;
  auVar90._24_4_ = __real_38d1b717;
  auVar90._28_4_ = __real_38d1b717;
  uVar72 = vcmpps_avx512vl(auVar151,auVar90,1);
  auVar111 = vsqrtps_avx(auVar151);
  auVar86 = vdivps_avx(auVar86,auVar111);
  auVar87 = vdivps_avx(auVar87,auVar111);
  auVar111 = vdivps_avx(auVar103,auVar111);
  auVar152._4_4_ = __real_3f800000;
  auVar152._0_4_ = __real_3f800000;
  auVar152._8_4_ = __real_3f800000;
  auVar152._12_4_ = __real_3f800000;
  auVar152._16_4_ = __real_3f800000;
  auVar152._20_4_ = __real_3f800000;
  auVar152._24_4_ = __real_3f800000;
  auVar152._28_4_ = __real_3f800000;
  bVar6 = (byte)uVar72;
  bVar14 = SUB81(uVar72 >> 7,0);
  bVar7 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar23 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar41 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar55 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar15 = SUB81(uVar72 >> 7,0);
  bVar8 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar34 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar48 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar16 = SUB81(uVar73 >> 7,0);
  local_280._4_4_ =
       (uint)bVar8 * ((uint)bVar7 * (int)__real_3f800000 | (uint)!bVar7 * auVar86._4_4_) |
       (uint)!bVar8 * (int)fVar139;
  local_280._0_4_ =
       (uint)(bVar78 & 1) *
       ((uint)(bVar6 & 1) * (int)__real_3f800000 | (uint)!(bool)(bVar6 & 1) * auVar86._0_4_) |
       (uint)!(bool)(bVar78 & 1) * (int)fVar137;
  local_280._8_4_ =
       (uint)bVar12 * ((uint)bVar9 * (int)__real_3f800000 | (uint)!bVar9 * auVar86._8_4_) |
       (uint)!bVar12 * (int)fVar141;
  local_280._12_4_ =
       (uint)bVar34 * ((uint)bVar23 * (int)__real_3f800000 | (uint)!bVar23 * auVar86._12_4_) |
       (uint)!bVar34 * (int)fVar143;
  local_280._16_4_ =
       (uint)bVar48 * ((uint)bVar41 * (int)__real_3f800000 | (uint)!bVar41 * auVar86._16_4_) |
       (uint)!bVar48 * (int)fVar145;
  local_280._20_4_ =
       (uint)bVar10 * ((uint)bVar55 * (int)__real_3f800000 | (uint)!bVar55 * auVar86._20_4_) |
       (uint)!bVar10 * (int)fVar147;
  local_280._24_4_ =
       (uint)bVar13 * ((uint)bVar11 * (int)__real_3f800000 | (uint)!bVar11 * auVar86._24_4_) |
       (uint)!bVar13 * (int)fVar149;
  local_280._28_4_ =
       (uint)bVar16 * ((uint)bVar15 * (int)__real_3f800000 | (uint)!bVar15 * auVar86._28_4_) |
       (uint)!bVar16 * (int)fVar133;
  lVar71 = (longlong)((int)uVar75 << 2);
  local_260._0_4_ =
       (uint)(bVar78 & 1) * (uint)!(bool)(bVar6 & 1) * auVar87._0_4_ |
       (uint)!(bool)(bVar78 & 1) * (int)fVar62;
  bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
  local_260._4_4_ =
       (uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 1) & 1) * auVar87._4_4_ |
       (uint)!bVar7 * (int)fVar63;
  bVar7 = (bool)((byte)(uVar73 >> 2) & 1);
  fStack_258 = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 2) & 1) * auVar87._8_4_ |
                      (uint)!bVar7 * (int)fVar64);
  bVar7 = (bool)((byte)(uVar73 >> 3) & 1);
  fStack_254 = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 3) & 1) * auVar87._12_4_ |
                      (uint)!bVar7 * (int)fVar65);
  bVar7 = (bool)((byte)(uVar73 >> 4) & 1);
  fStack_250 = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 4) & 1) * auVar87._16_4_ |
                      (uint)!bVar7 * (int)fVar66);
  bVar7 = (bool)((byte)(uVar73 >> 5) & 1);
  fStack_24c = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 5) & 1) * auVar87._20_4_ |
                      (uint)!bVar7 * (int)fVar67);
  bVar7 = (bool)((byte)(uVar73 >> 6) & 1);
  fStack_248 = (float)((uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 6) & 1) * auVar87._24_4_ |
                      (uint)!bVar7 * (int)fVar68);
  bVar7 = SUB81(uVar73 >> 7,0);
  fStack_244 = (float)((uint)bVar7 *
                       ((uint)bVar14 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
                       (uint)!bVar14 * auVar87._28_4_) | (uint)!bVar7 * (int)fVar134);
  piVar4 = (int *)(param_4 + lVar71);
  auVar116._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * piVar4[1];
  auVar116._0_4_ = (uint)(bVar78 & 1) * *piVar4;
  auVar116._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * piVar4[2];
  auVar116._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * piVar4[3];
  auVar116._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * piVar4[4];
  auVar116._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * piVar4[5];
  auVar116._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * piVar4[6];
  auVar116._28_4_ = (uint)(byte)(uVar73 >> 7) * piVar4[7];
  bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar8 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar9 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar23 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar34 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar41 = SUB81(uVar73 >> 7,0);
  local_240._4_4_ =
       (uint)bVar7 * (uint)!(bool)((byte)(uVar72 >> 1) & 1) * auVar111._4_4_ |
       (uint)!bVar7 * (int)fVar138;
  local_240._0_4_ =
       (uint)(bVar78 & 1) * (uint)!(bool)(bVar6 & 1) * auVar111._0_4_ |
       (uint)!(bool)(bVar78 & 1) * (int)fVar135;
  local_240._8_4_ =
       (uint)bVar8 * (uint)!(bool)((byte)(uVar72 >> 2) & 1) * auVar111._8_4_ |
       (uint)!bVar8 * (int)fVar140;
  local_240._12_4_ =
       (uint)bVar9 * (uint)!(bool)((byte)(uVar72 >> 3) & 1) * auVar111._12_4_ |
       (uint)!bVar9 * (int)fVar142;
  local_240._16_4_ =
       (uint)bVar12 * (uint)!(bool)((byte)(uVar72 >> 4) & 1) * auVar111._16_4_ |
       (uint)!bVar12 * (int)fVar144;
  local_240._20_4_ =
       (uint)bVar23 * (uint)!(bool)((byte)(uVar72 >> 5) & 1) * auVar111._20_4_ |
       (uint)!bVar23 * (int)fVar146;
  local_240._24_4_ =
       (uint)bVar34 * (uint)!(bool)((byte)(uVar72 >> 6) & 1) * auVar111._24_4_ |
       (uint)!bVar34 * (int)fVar148;
  local_240._28_4_ =
       (uint)bVar41 * (uint)!SUB81(uVar72 >> 7,0) * auVar111._28_4_ | (uint)!bVar41 * (int)fVar150;
  auVar91._4_4_ = __real_322bcc77;
  auVar91._0_4_ = __real_322bcc77;
  auVar91._8_4_ = __real_322bcc77;
  auVar91._12_4_ = __real_322bcc77;
  auVar91._16_4_ = __real_322bcc77;
  auVar91._20_4_ = __real_322bcc77;
  auVar91._24_4_ = __real_322bcc77;
  auVar91._28_4_ = __real_322bcc77;
  uVar72 = vcmpps_avx512vl(auVar116,auVar91,1);
  auVar87 = vaddps_avx512vl(auVar99,auVar102);
  auVar86 = vdivps_avx(auVar115,auVar87);
  auVar86 = vsqrtps_avx(auVar86);
  fVar125 = (fVar125 + fVar125) * auVar86._0_4_;
  fVar126 = (fVar126 + fVar126) * auVar86._4_4_;
  fVar127 = (fVar127 + fVar127) * auVar86._8_4_;
  fVar128 = (fVar128 + fVar128) * auVar86._12_4_;
  fVar129 = (fVar129 + fVar129) * auVar86._16_4_;
  fVar130 = (fVar130 + fVar130) * auVar86._20_4_;
  fVar131 = (fVar131 + fVar131) * auVar86._24_4_;
  fVar132 = (fVar132 + fVar132) * auVar86._28_4_;
  auVar86 = vdivps_avx(auVar152,auVar116);
  bVar7 = (bool)((byte)uVar72 & 1);
  bVar8 = (bool)((byte)(uVar72 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar72 >> 2) & 1);
  bVar12 = (bool)((byte)(uVar72 >> 3) & 1);
  bVar23 = (bool)((byte)(uVar72 >> 4) & 1);
  bVar34 = (bool)((byte)(uVar72 >> 5) & 1);
  bVar41 = (bool)((byte)(uVar72 >> 6) & 1);
  bVar48 = SUB81(uVar72 >> 7,0);
  auVar119._0_4_ =
       param_6 * (float)((uint)bVar7 * (int)fVar125 | (uint)!bVar7 * (int)(fVar125 * auVar86._0_4_))
  ;
  auVar119._4_4_ =
       param_6 * (float)((uint)bVar8 * (int)fVar126 | (uint)!bVar8 * (int)(fVar126 * auVar86._4_4_))
  ;
  auVar119._8_4_ =
       param_6 * (float)((uint)bVar9 * (int)fVar127 | (uint)!bVar9 * (int)(fVar127 * auVar86._8_4_))
  ;
  auVar119._12_4_ =
       param_6 * (float)((uint)bVar12 * (int)fVar128 |
                        (uint)!bVar12 * (int)(fVar128 * auVar86._12_4_));
  auVar119._16_4_ =
       param_6 * (float)((uint)bVar23 * (int)fVar129 |
                        (uint)!bVar23 * (int)(fVar129 * auVar86._16_4_));
  auVar119._20_4_ =
       param_6 * (float)((uint)bVar34 * (int)fVar130 |
                        (uint)!bVar34 * (int)(fVar130 * auVar86._20_4_));
  auVar119._24_4_ =
       param_6 * (float)((uint)bVar41 * (int)fVar131 |
                        (uint)!bVar41 * (int)(fVar131 * auVar86._24_4_));
  auVar119._28_4_ =
       param_6 * (float)((uint)bVar48 * (int)fVar132 |
                        (uint)!bVar48 * (int)(fVar132 * auVar86._28_4_));
  auVar86 = vsubps_avx512vl(auVar95,auVar106);
  auVar111 = vsubps_avx512vl(auVar96,auVar107);
  auVar103 = vsubps_avx512vl(auVar97,auVar108);
  auVar86 = vsubps_avx512vl(auVar86,auVar92);
  auVar86 = vaddps_avx512vl(auVar112,auVar86);
  auVar111 = vsubps_avx512vl(auVar111,auVar93);
  auVar111 = vaddps_avx512vl(auVar113,auVar111);
  auVar103 = vsubps_avx512vl(auVar103,auVar94);
  auVar103 = vaddps_avx512vl(auVar114,auVar103);
  auVar111 = vmulps_avx512vl(auVar111,_local_260);
  auVar86 = vfmadd231ps_avx512vl(auVar111,local_280,auVar86);
  auVar86 = vfmadd231ps_avx512vl(auVar86,local_240,auVar103);
  piVar4 = (int *)(param_5 + lVar71);
  auVar117._4_4_ = (uint)((byte)(uVar73 >> 1) & 1) * piVar4[1];
  auVar117._0_4_ = (uint)(bVar78 & 1) * *piVar4;
  auVar117._8_4_ = (uint)((byte)(uVar73 >> 2) & 1) * piVar4[2];
  auVar117._12_4_ = (uint)((byte)(uVar73 >> 3) & 1) * piVar4[3];
  auVar117._16_4_ = (uint)((byte)(uVar73 >> 4) & 1) * piVar4[4];
  auVar117._20_4_ = (uint)((byte)(uVar73 >> 5) & 1) * piVar4[5];
  auVar117._24_4_ = (uint)((byte)(uVar73 >> 6) & 1) * piVar4[6];
  auVar117._28_4_ = (uint)(byte)(uVar73 >> 7) * piVar4[7];
  auVar86 = vfnmsub213ps_avx512vl(auVar86,auVar119,auVar117);
  auVar120._0_4_ = auVar87._0_4_ * auVar119._0_4_ + __real_3f800000;
  auVar120._4_4_ = auVar87._4_4_ * auVar119._4_4_ + __real_3f800000;
  auVar120._8_4_ = auVar87._8_4_ * auVar119._8_4_ + __real_3f800000;
  auVar120._12_4_ = auVar87._12_4_ * auVar119._12_4_ + __real_3f800000;
  auVar120._16_4_ = auVar87._16_4_ * auVar119._16_4_ + __real_3f800000;
  auVar120._20_4_ = auVar87._20_4_ * auVar119._20_4_ + __real_3f800000;
  auVar120._24_4_ = auVar87._24_4_ * auVar119._24_4_ + __real_3f800000;
  auVar120._28_4_ = auVar87._28_4_ * auVar119._28_4_ + __real_3f800000;
  auVar86 = vdivps_avx512vl(auVar86,auVar120);
  auVar87 = vaddps_avx512vl(auVar117,auVar86);
  puVar5 = (uint *)(param_5 + lVar71);
  bVar7 = (bool)((byte)(uVar73 >> 1) & 1);
  bVar8 = (bool)((byte)(uVar73 >> 2) & 1);
  bVar9 = (bool)((byte)(uVar73 >> 3) & 1);
  bVar12 = (bool)((byte)(uVar73 >> 4) & 1);
  bVar23 = (bool)((byte)(uVar73 >> 5) & 1);
  bVar34 = (bool)((byte)(uVar73 >> 6) & 1);
  bVar41 = SUB81(uVar73 >> 7,0);
  *puVar5 = (uint)(bVar78 & 1) * auVar87._0_4_ | (uint)!(bool)(bVar78 & 1) * *puVar5;
  puVar5[1] = (uint)bVar7 * auVar87._4_4_ | (uint)!bVar7 * puVar5[1];
  puVar5[2] = (uint)bVar8 * auVar87._8_4_ | (uint)!bVar8 * puVar5[2];
  puVar5[3] = (uint)bVar9 * auVar87._12_4_ | (uint)!bVar9 * puVar5[3];
  puVar5[4] = (uint)bVar12 * auVar87._16_4_ | (uint)!bVar12 * puVar5[4];
  puVar5[5] = (uint)bVar23 * auVar87._20_4_ | (uint)!bVar23 * puVar5[5];
  puVar5[6] = (uint)bVar34 * auVar87._24_4_ | (uint)!bVar34 * puVar5[6];
  puVar5[7] = (uint)bVar41 * auVar87._28_4_ | (uint)!bVar41 * puVar5[7];
  auVar87 = vmulps_avx512vl(local_280,auVar86);
  auVar111 = vfmadd231ps_avx512vl(auVar95,auVar99,auVar87);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar110,uVar73,auVar111);
  auVar121._0_4_ = (float)local_260._0_4_ * auVar86._0_4_;
  auVar121._4_4_ = (float)local_260._4_4_ * auVar86._4_4_;
  auVar121._8_4_ = fStack_258 * auVar86._8_4_;
  auVar121._12_4_ = fStack_254 * auVar86._12_4_;
  auVar121._16_4_ = fStack_250 * auVar86._16_4_;
  auVar121._20_4_ = fStack_24c * auVar86._20_4_;
  auVar121._24_4_ = fStack_248 * auVar86._24_4_;
  auVar121._28_4_ = fStack_244 * auVar86._28_4_;
  auVar111 = vfmadd231ps_avx512vl(auVar96,auVar99,auVar121);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar110 | auVar118),uVar73,auVar111);
  auVar86 = vmulps_avx512vl(local_240,auVar86);
  auVar111 = vfmadd231ps_avx512vl(auVar97,auVar99,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar110 | auVar109),uVar73,auVar111);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar121,uVar73,auVar99);
  auVar87 = vfnmadd213ps_avx512vl(auVar87,auVar102,auVar92);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar89,uVar73,auVar87);
  auVar87 = vfnmadd213ps_avx512vl(auVar121,auVar102,auVar93);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar89 | auVar118),uVar73,auVar87);
  auVar86 = vfnmadd213ps_avx512vl(auVar86,auVar102,auVar94);
  vscatterdps_avx512vl(ZEXT832(param_1) + auVar86,uVar73,auVar86);
  vscatterdps_avx512vl(ZEXT832(param_1) + (auVar110 | auVar118),uVar73,auVar102);
  return;
}


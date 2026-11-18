// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 16

// ApplyPreSimulationTransforms___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuni_avx512skx @ 140cc93a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransforms___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,undefined4 *param_9,
               uint *param_10,undefined4 param_11,int param_12,uint param_13)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [32];
  undefined1 (*pauVar21) [32];
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  undefined1 (*pauVar27) [32];
  longlong lVar28;
  undefined1 auVar29 [16];
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
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
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
  undefined1 auVar30 [16];
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
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  float fVar110;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  float fVar125;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar126 [32];
  float fVar134;
  undefined1 auVar127 [32];
  float fVar135;
  float fVar136;
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  float fVar137;
  float fVar138;
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  undefined1 in_ZMM21 [64];
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 auVar49 [32];
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
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  
  uVar16 = __real_00000024;
  uVar15 = __real_00000020;
  uVar14 = __real_00000014;
  auVar68 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar67 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar66 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar65 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar64 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar63 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  uVar13 = __real_00000018;
  uVar12 = __real_00000010;
  uVar11 = __real_0000000c;
  uVar10 = __real_00000008;
  uVar9 = __real_00000004;
  auVar105 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar47 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar48 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar31 = in_ZMM10._0_32_;
  auVar32 = in_ZMM12._0_32_;
  auVar102 = in_ZMM9._0_32_;
  auVar34 = in_ZMM11._0_32_;
  auVar30 = in_ZMM21._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  uVar26 = param_13 - param_12;
  pauVar27 = (undefined1 (*) [32])(ulonglong)uVar26;
  uVar17 = uVar26 + 7;
  if (-1 < (int)uVar26) {
    uVar17 = uVar26;
  }
  iVar18 = ((uVar17 & 0xfffffff8) - uVar26) + param_13;
  if (param_12 < iVar18) {
    auVar73._4_4_ = param_11;
    auVar73._0_4_ = param_11;
    auVar73._8_4_ = param_11;
    auVar73._12_4_ = param_11;
    auVar73._16_4_ = param_11;
    auVar73._20_4_ = param_11;
    auVar73._24_4_ = param_11;
    auVar73._28_4_ = param_11;
    lVar28 = (longlong)param_12;
    lVar8 = lVar28 * 0xc;
    local_228 = param_3;
    lVar19 = param_3 + 0x40;
    local_220 = param_1;
    pauVar27 = (undefined1 (*) [32])(lVar28 * 0x10 + param_1 + 0x60);
    local_218 = param_2;
    lVar23 = param_2 + 0x40;
    local_210 = param_4;
    lVar25 = param_4 + 0x40;
    lVar22 = param_7 + 0x40;
    lVar24 = param_5 + 0x40;
    param_12 = param_12 << 2;
    local_108 = __real_00000004;
    uStack_104 = __real_00000004;
    uStack_100 = __real_00000004;
    uStack_fc = __real_00000004;
    uStack_f8 = __real_00000004;
    uStack_f4 = __real_00000004;
    uStack_f0 = __real_00000004;
    uStack_ec = __real_00000004;
    local_128 = __real_00000008;
    uStack_124 = __real_00000008;
    uStack_120 = __real_00000008;
    uStack_11c = __real_00000008;
    uStack_118 = __real_00000008;
    uStack_114 = __real_00000008;
    uStack_110 = __real_00000008;
    uStack_10c = __real_00000008;
    local_148 = __real_0000000c;
    uStack_144 = __real_0000000c;
    uStack_140 = __real_0000000c;
    uStack_13c = __real_0000000c;
    uStack_138 = __real_0000000c;
    uStack_134 = __real_0000000c;
    uStack_130 = __real_0000000c;
    uStack_12c = __real_0000000c;
    local_168 = __real_00000010;
    uStack_164 = __real_00000010;
    uStack_160 = __real_00000010;
    uStack_15c = __real_00000010;
    uStack_158 = __real_00000010;
    uStack_154 = __real_00000010;
    uStack_150 = __real_00000010;
    uStack_14c = __real_00000010;
    local_188 = __real_00000014;
    uStack_184 = __real_00000014;
    uStack_180 = __real_00000014;
    uStack_17c = __real_00000014;
    uStack_178 = __real_00000014;
    uStack_174 = __real_00000014;
    uStack_170 = __real_00000014;
    uStack_16c = __real_00000014;
    local_1a8 = __real_00000018;
    uStack_1a4 = __real_00000018;
    uStack_1a0 = __real_00000018;
    uStack_19c = __real_00000018;
    uStack_198 = __real_00000018;
    uStack_194 = __real_00000018;
    uStack_190 = __real_00000018;
    uStack_18c = __real_00000018;
    local_1c8 = __real_00000020;
    uStack_1c4 = __real_00000020;
    uStack_1c0 = __real_00000020;
    uStack_1bc = __real_00000020;
    uStack_1b8 = __real_00000020;
    uStack_1b4 = __real_00000020;
    uStack_1b0 = __real_00000020;
    uStack_1ac = __real_00000020;
    local_1e8 = __real_00000024;
    uStack_1e4 = __real_00000024;
    uStack_1e0 = __real_00000024;
    uStack_1dc = __real_00000024;
    uStack_1d8 = __real_00000024;
    uStack_1d4 = __real_00000024;
    uStack_1d0 = __real_00000024;
    uStack_1cc = __real_00000024;
    local_208 = __real_00000028;
    uStack_204 = __real_00000028;
    uStack_200 = __real_00000028;
    uStack_1fc = __real_00000028;
    uStack_1f8 = __real_00000028;
    uStack_1f4 = __real_00000028;
    uStack_1f0 = __real_00000028;
    uStack_1ec = __real_00000028;
    auVar30 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    do {
      auVar102 = *(undefined1 (*) [32])(param_8 + param_12);
      auVar31 = vpaddd_avx512vl(auVar102,auVar102);
      auVar32 = vpslld_avx512vl(auVar102,2);
      vpaddd_avx512vl(auVar32,auVar31);
      auVar33 = vgatherdps_avx512vl(param_9[param_5 * 2]);
      fVar129 = auVar33._8_4_;
      fVar131 = auVar33._12_4_;
      fVar82 = auVar33._16_4_;
      fVar87 = auVar33._20_4_;
      fVar92 = auVar33._24_4_;
      fVar97 = auVar33._28_4_;
      auVar31 = vpslld_avx512vl(auVar102,4);
      auVar102 = vpslld_avx2(auVar102,5);
      auVar34 = vpaddd_avx512vl(auVar102,auVar31);
      auVar35._4_4_ = uVar9;
      auVar35._0_4_ = uVar9;
      auVar35._8_4_ = uVar9;
      auVar35._12_4_ = uVar9;
      auVar35._16_4_ = uVar9;
      auVar35._20_4_ = uVar9;
      auVar35._24_4_ = uVar9;
      auVar35._28_4_ = uVar9;
      vpord_avx512vl(auVar34,auVar35);
      auVar35 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar36._4_4_ = uVar10;
      auVar36._0_4_ = uVar10;
      auVar36._8_4_ = uVar10;
      auVar36._12_4_ = uVar10;
      auVar36._16_4_ = uVar10;
      auVar36._20_4_ = uVar10;
      auVar36._24_4_ = uVar10;
      auVar36._28_4_ = uVar10;
      vpord_avx512vl(auVar34,auVar36);
      auVar36 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar37._4_4_ = uVar11;
      auVar37._0_4_ = uVar11;
      auVar37._8_4_ = uVar11;
      auVar37._12_4_ = uVar11;
      auVar37._16_4_ = uVar11;
      auVar37._20_4_ = uVar11;
      auVar37._24_4_ = uVar11;
      auVar37._28_4_ = uVar11;
      vpord_avx512vl(auVar34,auVar37);
      auVar37 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      fVar80 = auVar37._8_4_;
      fVar81 = auVar37._12_4_;
      fVar83 = auVar37._16_4_;
      fVar88 = auVar37._20_4_;
      fVar93 = auVar37._24_4_;
      fVar98 = auVar37._28_4_;
      auVar102._4_4_ = uVar12;
      auVar102._0_4_ = uVar12;
      auVar102._8_4_ = uVar12;
      auVar102._12_4_ = uVar12;
      auVar102._16_4_ = uVar12;
      auVar102._20_4_ = uVar12;
      auVar102._24_4_ = uVar12;
      auVar102._28_4_ = uVar12;
      vpaddd_avx512vl(auVar34,auVar102);
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar31._4_4_ = uVar14;
      auVar31._0_4_ = uVar14;
      auVar31._8_4_ = uVar14;
      auVar31._12_4_ = uVar14;
      auVar31._16_4_ = uVar14;
      auVar31._20_4_ = uVar14;
      auVar31._24_4_ = uVar14;
      auVar31._28_4_ = uVar14;
      vpaddd_avx512vl(auVar34,auVar31);
      auVar31 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar32._4_4_ = uVar13;
      auVar32._0_4_ = uVar13;
      auVar32._8_4_ = uVar13;
      auVar32._12_4_ = uVar13;
      auVar32._16_4_ = uVar13;
      auVar32._20_4_ = uVar13;
      auVar32._24_4_ = uVar13;
      auVar32._28_4_ = uVar13;
      vpaddd_avx512vl(auVar34,auVar32);
      auVar32 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar41._4_4_ = uVar15;
      auVar41._0_4_ = uVar15;
      auVar41._8_4_ = uVar15;
      auVar41._12_4_ = uVar15;
      auVar41._16_4_ = uVar15;
      auVar41._20_4_ = uVar15;
      auVar41._24_4_ = uVar15;
      auVar41._28_4_ = uVar15;
      vpaddd_avx512vl(auVar34,auVar41);
      auVar38 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      fVar125 = auVar38._8_4_;
      fVar132 = auVar38._12_4_;
      fVar84 = auVar38._16_4_;
      fVar89 = auVar38._20_4_;
      fVar94 = auVar38._24_4_;
      fVar99 = auVar38._28_4_;
      auVar42._4_4_ = uVar16;
      auVar42._0_4_ = uVar16;
      auVar42._8_4_ = uVar16;
      auVar42._12_4_ = uVar16;
      auVar42._16_4_ = uVar16;
      auVar42._20_4_ = uVar16;
      auVar42._24_4_ = uVar16;
      auVar42._28_4_ = uVar16;
      vpaddd_avx512vl(auVar34,auVar42);
      auVar39 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      fVar128 = auVar39._8_4_;
      fVar133 = auVar39._12_4_;
      fVar85 = auVar39._16_4_;
      fVar90 = auVar39._20_4_;
      fVar95 = auVar39._24_4_;
      fVar100 = auVar39._28_4_;
      auVar40 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar19));
      fVar130 = auVar40._8_4_;
      fVar134 = auVar40._12_4_;
      fVar86 = auVar40._16_4_;
      fVar91 = auVar40._20_4_;
      fVar96 = auVar40._24_4_;
      fVar101 = auVar40._28_4_;
      auVar34 = *(undefined1 (*) [32])(lVar19 + -0x40 + lVar8);
      auVar42 = *(undefined1 (*) [32])(lVar19 + -0x20 + lVar8);
      auVar41 = vblendps_avx(auVar42,auVar34,0x24);
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar48,auVar42);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar105,*(undefined1 (*) [32])(lVar19 + lVar8));
      auVar42 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar19 + lVar8),auVar47,auVar42);
      auVar43 = vinsertf32x4_avx512vl(auVar34,auVar42._0_16_,1);
      auVar34 = vshuff64x2_avx512vl(auVar34,auVar42,3);
      fVar139 = auVar38._0_4_;
      auVar45._0_4_ = fVar139 * auVar43._0_4_;
      fVar140 = auVar38._4_4_;
      auVar45._4_4_ = fVar140 * auVar43._4_4_;
      auVar45._8_4_ = fVar125 * auVar43._8_4_;
      auVar45._12_4_ = fVar132 * auVar43._12_4_;
      auVar45._16_4_ = fVar84 * auVar43._16_4_;
      auVar45._20_4_ = fVar89 * auVar43._20_4_;
      auVar45._24_4_ = fVar94 * auVar43._24_4_;
      auVar45._28_4_ = fVar99 * auVar43._28_4_;
      fVar141 = auVar39._0_4_;
      auVar38._0_4_ = fVar141 * auVar34._0_4_;
      fVar142 = auVar39._4_4_;
      auVar38._4_4_ = fVar142 * auVar34._4_4_;
      auVar38._8_4_ = fVar128 * auVar34._8_4_;
      auVar38._12_4_ = fVar133 * auVar34._12_4_;
      auVar38._16_4_ = fVar85 * auVar34._16_4_;
      auVar38._20_4_ = fVar90 * auVar34._20_4_;
      auVar38._24_4_ = fVar95 * auVar34._24_4_;
      auVar38._28_4_ = fVar100 * auVar34._28_4_;
      fVar143 = auVar40._0_4_;
      auVar39._0_4_ = fVar143 * auVar41._0_4_;
      fVar144 = auVar40._4_4_;
      auVar39._4_4_ = fVar144 * auVar41._4_4_;
      auVar39._8_4_ = fVar130 * auVar41._8_4_;
      auVar39._12_4_ = fVar134 * auVar41._12_4_;
      auVar39._16_4_ = fVar86 * auVar41._16_4_;
      auVar39._20_4_ = fVar91 * auVar41._20_4_;
      auVar39._24_4_ = fVar96 * auVar41._24_4_;
      auVar39._28_4_ = fVar101 * auVar41._28_4_;
      auVar34 = vmulps_avx512vl(auVar35,auVar45);
      auVar42 = vmulps_avx512vl(auVar36,auVar38);
      fVar135 = auVar33._0_4_;
      fVar136 = auVar33._4_4_;
      auVar34 = vfmsub231ps_avx512vl(auVar34,auVar33,auVar38);
      auVar42 = vfmsub231ps_avx512vl(auVar42,auVar35,auVar39);
      fVar110 = auVar36._0_4_ * auVar45._0_4_ - fVar135 * auVar39._0_4_;
      fVar118 = auVar36._4_4_ * auVar45._4_4_ - fVar136 * auVar39._4_4_;
      fVar119 = auVar36._8_4_ * auVar45._8_4_ - fVar129 * auVar39._8_4_;
      fVar120 = auVar36._12_4_ * auVar45._12_4_ - fVar131 * auVar39._12_4_;
      fVar121 = auVar36._16_4_ * auVar45._16_4_ - fVar82 * auVar39._16_4_;
      fVar122 = auVar36._20_4_ * auVar45._20_4_ - fVar87 * auVar39._20_4_;
      fVar123 = auVar36._24_4_ * auVar45._24_4_ - fVar92 * auVar39._24_4_;
      fVar124 = auVar36._28_4_ * auVar45._28_4_ - fVar97 * auVar39._28_4_;
      auVar42 = vaddps_avx512vl(auVar42,auVar42);
      auVar111._0_4_ = fVar110 + fVar110;
      auVar111._4_4_ = fVar118 + fVar118;
      auVar111._8_4_ = fVar119 + fVar119;
      auVar111._12_4_ = fVar120 + fVar120;
      auVar111._16_4_ = fVar121 + fVar121;
      auVar111._20_4_ = fVar122 + fVar122;
      auVar111._24_4_ = fVar123 + fVar123;
      auVar111._28_4_ = fVar124 + fVar124;
      auVar34 = vaddps_avx512vl(auVar34,auVar34);
      auVar41 = vfmadd231ps_avx512vl(auVar45,auVar37,auVar42);
      fVar137 = auVar37._0_4_;
      auVar44._0_4_ = fVar137 * auVar111._0_4_ + auVar38._0_4_;
      fVar138 = auVar37._4_4_;
      auVar44._4_4_ = fVar138 * auVar111._4_4_ + auVar38._4_4_;
      auVar44._8_4_ = fVar80 * auVar111._8_4_ + auVar38._8_4_;
      auVar44._12_4_ = fVar81 * auVar111._12_4_ + auVar38._12_4_;
      auVar44._16_4_ = fVar83 * auVar111._16_4_ + auVar38._16_4_;
      auVar44._20_4_ = fVar88 * auVar111._20_4_ + auVar38._20_4_;
      auVar44._24_4_ = fVar93 * auVar111._24_4_ + auVar38._24_4_;
      auVar44._28_4_ = fVar98 * auVar111._28_4_ + auVar38._28_4_;
      auVar38 = vfmadd231ps_avx512vl(auVar39,auVar37,auVar34);
      auVar39 = vmulps_avx512vl(auVar35,auVar42);
      auVar40 = vmulps_avx512vl(auVar36,auVar111);
      auVar43 = vmulps_avx512vl(auVar33,auVar34);
      auVar34 = vfmsub231ps_avx512vl(auVar40,auVar35,auVar34);
      auVar34 = vaddps_avx512vl(auVar41,auVar34);
      auVar42 = vfmsub231ps_avx512vl(auVar43,auVar36,auVar42);
      auVar42 = vaddps_avx512vl(auVar44,auVar42);
      auVar40._0_4_ = auVar102._0_4_ + auVar34._0_4_;
      auVar40._4_4_ = auVar102._4_4_ + auVar34._4_4_;
      auVar40._8_4_ = auVar102._8_4_ + auVar34._8_4_;
      auVar40._12_4_ = auVar102._12_4_ + auVar34._12_4_;
      auVar40._16_4_ = auVar102._16_4_ + auVar34._16_4_;
      auVar40._20_4_ = auVar102._20_4_ + auVar34._20_4_;
      auVar40._24_4_ = auVar102._24_4_ + auVar34._24_4_;
      auVar40._28_4_ = auVar102._28_4_ + auVar34._28_4_;
      auVar112._0_4_ = auVar31._0_4_ + auVar42._0_4_;
      auVar112._4_4_ = auVar31._4_4_ + auVar42._4_4_;
      auVar112._8_4_ = auVar31._8_4_ + auVar42._8_4_;
      auVar112._12_4_ = auVar31._12_4_ + auVar42._12_4_;
      auVar112._16_4_ = auVar31._16_4_ + auVar42._16_4_;
      auVar112._20_4_ = auVar31._20_4_ + auVar42._20_4_;
      auVar112._24_4_ = auVar31._24_4_ + auVar42._24_4_;
      auVar112._28_4_ = auVar31._28_4_ + auVar42._28_4_;
      uVar17 = *param_10;
      auVar103._4_4_ = uVar17;
      auVar103._0_4_ = uVar17;
      auVar103._8_4_ = uVar17;
      auVar103._12_4_ = uVar17;
      auVar103._16_4_ = uVar17;
      auVar103._20_4_ = uVar17;
      auVar103._24_4_ = uVar17;
      auVar103._28_4_ = uVar17;
      auVar106._0_4_ = auVar32._0_4_ + auVar38._0_4_ + (fVar135 * auVar111._0_4_ - auVar39._0_4_);
      auVar106._4_4_ = auVar32._4_4_ + auVar38._4_4_ + (fVar136 * auVar111._4_4_ - auVar39._4_4_);
      auVar106._8_4_ = auVar32._8_4_ + auVar38._8_4_ + (fVar129 * auVar111._8_4_ - auVar39._8_4_);
      auVar106._12_4_ =
           auVar32._12_4_ + auVar38._12_4_ + (fVar131 * auVar111._12_4_ - auVar39._12_4_);
      auVar106._16_4_ =
           auVar32._16_4_ + auVar38._16_4_ + (fVar82 * auVar111._16_4_ - auVar39._16_4_);
      auVar106._20_4_ =
           auVar32._20_4_ + auVar38._20_4_ + (fVar87 * auVar111._20_4_ - auVar39._20_4_);
      auVar106._24_4_ =
           auVar32._24_4_ + auVar38._24_4_ + (fVar92 * auVar111._24_4_ - auVar39._24_4_);
      auVar106._28_4_ =
           auVar32._28_4_ + auVar38._28_4_ + (fVar97 * auVar111._28_4_ - auVar39._28_4_);
      auVar42 = vsubps_avx(auVar40,auVar103);
      auVar38 = vbroadcastss_avx512vl(ZEXT416(param_10[1]));
      auVar39 = vbroadcastss_avx512vl(ZEXT416(param_10[2]));
      auVar41 = vsubps_avx512vl(auVar112,auVar38);
      auVar40 = vsubps_avx512vl(auVar106,auVar39);
      auVar34 = *(undefined1 (*) [32])(param_6 + param_12);
      auVar43 = vunpcklps_avx512vl(auVar42,auVar41);
      auVar44 = vunpcklps_avx512vl(auVar40,auVar34);
      auVar45 = vunpcklpd_avx512vl(auVar43,auVar44);
      auVar43 = vunpckhpd_avx512vl(auVar43,auVar44);
      auVar44 = vunpckhps_avx512vl(auVar42,auVar41);
      auVar34 = vunpckhps_avx(auVar40,auVar34);
      auVar46 = vunpcklpd_avx512vl(auVar44,auVar34);
      auVar34 = vunpckhpd_avx512vl(auVar44,auVar34);
      auVar44 = vinsertf32x4_avx512vl(auVar45,auVar43._0_16_,1);
      pauVar27[-3] = auVar44;
      auVar44 = vinsertf32x4_avx512vl(auVar46,auVar34._0_16_,1);
      pauVar27[-2] = auVar44;
      auVar43 = vshuff64x2_avx512vl(auVar45,auVar43,3);
      pauVar27[-1] = auVar43;
      auVar34 = vshuff64x2_avx512vl(auVar46,auVar34,3);
      *pauVar27 = auVar34;
      auVar34 = vpermt2ps_avx512vl(auVar40,auVar63,auVar41);
      auVar43 = vpermt2ps_avx512vl(auVar42,auVar64,auVar41);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar65,auVar34);
      *(undefined1 (*) [32])(lVar19 + -0x40 + lVar8) = auVar43;
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar66,auVar42);
      *(undefined1 (*) [32])(lVar19 + -0x20 + lVar8) = auVar34;
      auVar34 = vpermt2ps_avx512vl(auVar41,auVar67,auVar42);
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar68,auVar40);
      *(undefined1 (*) [32])(lVar19 + lVar8) = auVar34;
      auVar34 = *(undefined1 (*) [32])(lVar23 + -0x40 + lVar8);
      auVar42 = *(undefined1 (*) [32])(lVar23 + -0x20 + lVar8);
      auVar41 = vblendps_avx(auVar42,auVar34,0x24);
      auVar40 = vpermt2ps_avx512vl(auVar34,auVar48,auVar42);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar105,*(undefined1 (*) [32])(lVar23 + lVar8));
      auVar42 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar23 + lVar8),auVar47,auVar42);
      auVar34 = vperm2f128_avx(auVar40,auVar42,0x31);
      auVar107._0_4_ = fVar139 * auVar40._0_4_;
      auVar107._4_4_ = fVar140 * auVar40._4_4_;
      auVar107._8_4_ = fVar125 * auVar40._8_4_;
      auVar107._12_4_ = fVar132 * auVar40._12_4_;
      auVar107._16_4_ = fVar84 * auVar42._0_4_;
      auVar107._20_4_ = fVar89 * auVar42._4_4_;
      auVar107._24_4_ = fVar94 * auVar42._8_4_;
      auVar107._28_4_ = fVar99 * auVar42._12_4_;
      auVar43._0_4_ = fVar141 * auVar34._0_4_;
      auVar43._4_4_ = fVar142 * auVar34._4_4_;
      auVar43._8_4_ = fVar128 * auVar34._8_4_;
      auVar43._12_4_ = fVar133 * auVar34._12_4_;
      auVar43._16_4_ = fVar85 * auVar34._16_4_;
      auVar43._20_4_ = fVar90 * auVar34._20_4_;
      auVar43._24_4_ = fVar95 * auVar34._24_4_;
      auVar43._28_4_ = fVar100 * auVar34._28_4_;
      auVar113._0_4_ = fVar143 * auVar41._0_4_;
      auVar113._4_4_ = fVar144 * auVar41._4_4_;
      auVar113._8_4_ = fVar130 * auVar41._8_4_;
      auVar113._12_4_ = fVar134 * auVar41._12_4_;
      auVar113._16_4_ = fVar86 * auVar41._16_4_;
      auVar113._20_4_ = fVar91 * auVar41._20_4_;
      auVar113._24_4_ = fVar96 * auVar41._24_4_;
      auVar113._28_4_ = fVar101 * auVar41._28_4_;
      auVar34 = vmulps_avx512vl(auVar36,auVar43);
      auVar42 = vmulps_avx512vl(auVar33,auVar113);
      fVar110 = fVar135 * auVar43._0_4_ - auVar35._0_4_ * auVar107._0_4_;
      fVar118 = fVar136 * auVar43._4_4_ - auVar35._4_4_ * auVar107._4_4_;
      fVar119 = fVar129 * auVar43._8_4_ - auVar35._8_4_ * auVar107._8_4_;
      fVar120 = fVar131 * auVar43._12_4_ - auVar35._12_4_ * auVar107._12_4_;
      fVar121 = fVar82 * auVar43._16_4_ - auVar35._16_4_ * auVar107._16_4_;
      fVar122 = fVar87 * auVar43._20_4_ - auVar35._20_4_ * auVar107._20_4_;
      fVar123 = fVar92 * auVar43._24_4_ - auVar35._24_4_ * auVar107._24_4_;
      fVar124 = fVar97 * auVar43._28_4_ - auVar35._28_4_ * auVar107._28_4_;
      auVar34 = vfmsub231ps_avx512vl(auVar34,auVar35,auVar113);
      auVar42 = vfmsub231ps_avx512vl(auVar42,auVar36,auVar107);
      auVar34 = vaddps_avx512vl(auVar34,auVar34);
      auVar42 = vaddps_avx512vl(auVar42,auVar42);
      auVar126._0_4_ = fVar110 + fVar110;
      auVar126._4_4_ = fVar118 + fVar118;
      auVar126._8_4_ = fVar119 + fVar119;
      auVar126._12_4_ = fVar120 + fVar120;
      auVar126._16_4_ = fVar121 + fVar121;
      auVar126._20_4_ = fVar122 + fVar122;
      auVar126._24_4_ = fVar123 + fVar123;
      auVar126._28_4_ = fVar124 + fVar124;
      auVar41 = vfmadd231ps_avx512vl(auVar107,auVar37,auVar34);
      auVar40 = vfmadd231ps_avx512vl(auVar43,auVar37,auVar42);
      auVar114._0_4_ = fVar137 * auVar126._0_4_ + auVar113._0_4_;
      auVar114._4_4_ = fVar138 * auVar126._4_4_ + auVar113._4_4_;
      auVar114._8_4_ = fVar80 * auVar126._8_4_ + auVar113._8_4_;
      auVar114._12_4_ = fVar81 * auVar126._12_4_ + auVar113._12_4_;
      auVar114._16_4_ = fVar83 * auVar126._16_4_ + auVar113._16_4_;
      auVar114._20_4_ = fVar88 * auVar126._20_4_ + auVar113._20_4_;
      auVar114._24_4_ = fVar93 * auVar126._24_4_ + auVar113._24_4_;
      auVar114._28_4_ = fVar98 * auVar126._28_4_ + auVar113._28_4_;
      auVar43 = vmulps_avx512vl(auVar35,auVar34);
      auVar44 = vmulps_avx512vl(auVar36,auVar42);
      auVar45 = vmulps_avx512vl(auVar33,auVar126);
      auVar42 = vfmsub231ps_avx512vl(auVar43,auVar33,auVar42);
      auVar42 = vaddps_avx512vl(auVar114,auVar42);
      auVar43 = vfmsub231ps_avx512vl(auVar44,auVar35,auVar126);
      auVar41 = vaddps_avx512vl(auVar41,auVar43);
      auVar34 = vfmsub231ps_avx512vl(auVar45,auVar36,auVar34);
      auVar34 = vaddps_avx512vl(auVar40,auVar34);
      auVar40 = vpermt2ps_avx512vl(auVar42,auVar63,auVar34);
      auVar43 = vpermt2ps_avx512vl(auVar41,auVar64,auVar34);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar65,auVar40);
      *(undefined1 (*) [32])(lVar23 + -0x40 + lVar8) = auVar43;
      auVar40 = vpermt2ps_avx512vl(auVar40,auVar66,auVar41);
      *(undefined1 (*) [32])(lVar23 + -0x20 + lVar8) = auVar40;
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar67,auVar41);
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar68,auVar42);
      *(undefined1 (*) [32])(lVar23 + lVar8) = auVar34;
      auVar34 = *(undefined1 (*) [32])(lVar25 + -0x40 + lVar8);
      auVar42 = *(undefined1 (*) [32])(lVar25 + -0x20 + lVar8);
      auVar41 = vblendps_avx(auVar42,auVar34,0x24);
      auVar40 = vpermt2ps_avx512vl(auVar34,auVar48,auVar42);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar105,*(undefined1 (*) [32])(lVar25 + lVar8));
      auVar42 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar25 + lVar8),auVar47,auVar42);
      auVar34 = vperm2f128_avx(auVar40,auVar42,0x31);
      auVar108._0_4_ = fVar139 * auVar40._0_4_;
      auVar108._4_4_ = fVar140 * auVar40._4_4_;
      auVar108._8_4_ = fVar125 * auVar40._8_4_;
      auVar108._12_4_ = fVar132 * auVar40._12_4_;
      auVar108._16_4_ = fVar84 * auVar42._0_4_;
      auVar108._20_4_ = fVar89 * auVar42._4_4_;
      auVar108._24_4_ = fVar94 * auVar42._8_4_;
      auVar108._28_4_ = fVar99 * auVar42._12_4_;
      auVar46._0_4_ = fVar141 * auVar34._0_4_;
      auVar46._4_4_ = fVar142 * auVar34._4_4_;
      auVar46._8_4_ = fVar128 * auVar34._8_4_;
      auVar46._12_4_ = fVar133 * auVar34._12_4_;
      auVar46._16_4_ = fVar85 * auVar34._16_4_;
      auVar46._20_4_ = fVar90 * auVar34._20_4_;
      auVar46._24_4_ = fVar95 * auVar34._24_4_;
      auVar46._28_4_ = fVar100 * auVar34._28_4_;
      auVar115._0_4_ = fVar143 * auVar41._0_4_;
      auVar115._4_4_ = fVar144 * auVar41._4_4_;
      auVar115._8_4_ = fVar130 * auVar41._8_4_;
      auVar115._12_4_ = fVar134 * auVar41._12_4_;
      auVar115._16_4_ = fVar86 * auVar41._16_4_;
      auVar115._20_4_ = fVar91 * auVar41._20_4_;
      auVar115._24_4_ = fVar96 * auVar41._24_4_;
      auVar115._28_4_ = fVar101 * auVar41._28_4_;
      auVar34 = vmulps_avx512vl(auVar36,auVar46);
      auVar42 = vmulps_avx512vl(auVar33,auVar115);
      fVar125 = fVar135 * auVar46._0_4_ - auVar35._0_4_ * auVar108._0_4_;
      fVar128 = fVar136 * auVar46._4_4_ - auVar35._4_4_ * auVar108._4_4_;
      fVar129 = fVar129 * auVar46._8_4_ - auVar35._8_4_ * auVar108._8_4_;
      fVar130 = fVar131 * auVar46._12_4_ - auVar35._12_4_ * auVar108._12_4_;
      fVar131 = fVar82 * auVar46._16_4_ - auVar35._16_4_ * auVar108._16_4_;
      fVar132 = fVar87 * auVar46._20_4_ - auVar35._20_4_ * auVar108._20_4_;
      fVar133 = fVar92 * auVar46._24_4_ - auVar35._24_4_ * auVar108._24_4_;
      fVar134 = fVar97 * auVar46._28_4_ - auVar35._28_4_ * auVar108._28_4_;
      auVar34 = vfmsub231ps_avx512vl(auVar34,auVar35,auVar115);
      auVar42 = vfmsub231ps_avx512vl(auVar42,auVar36,auVar108);
      auVar41 = vaddps_avx512vl(auVar34,auVar34);
      auVar42 = vaddps_avx512vl(auVar42,auVar42);
      auVar127._0_4_ = fVar125 + fVar125;
      auVar127._4_4_ = fVar128 + fVar128;
      auVar127._8_4_ = fVar129 + fVar129;
      auVar127._12_4_ = fVar130 + fVar130;
      auVar127._16_4_ = fVar131 + fVar131;
      auVar127._20_4_ = fVar132 + fVar132;
      auVar127._24_4_ = fVar133 + fVar133;
      auVar127._28_4_ = fVar134 + fVar134;
      auVar40 = vfmadd231ps_avx512vl(auVar108,auVar37,auVar41);
      auVar37 = vfmadd231ps_avx512vl(auVar46,auVar37,auVar42);
      auVar34._0_4_ = auVar127._0_4_ * fVar137 + auVar115._0_4_;
      auVar34._4_4_ = auVar127._4_4_ * fVar138 + auVar115._4_4_;
      auVar34._8_4_ = auVar127._8_4_ * fVar80 + auVar115._8_4_;
      auVar34._12_4_ = auVar127._12_4_ * fVar81 + auVar115._12_4_;
      auVar34._16_4_ = auVar127._16_4_ * fVar83 + auVar115._16_4_;
      auVar34._20_4_ = auVar127._20_4_ * fVar88 + auVar115._20_4_;
      auVar34._24_4_ = auVar127._24_4_ * fVar93 + auVar115._24_4_;
      auVar34._28_4_ = auVar127._28_4_ * fVar98 + auVar115._28_4_;
      auVar43 = vmulps_avx512vl(auVar35,auVar41);
      auVar44 = vmulps_avx512vl(auVar36,auVar42);
      auVar45 = vmulps_avx512vl(auVar33,auVar127);
      auVar42 = vfmsub231ps_avx512vl(auVar43,auVar42,auVar33);
      auVar35 = vfmsub231ps_avx512vl(auVar44,auVar127,auVar35);
      auVar35 = vaddps_avx512vl(auVar40,auVar35);
      auVar41 = vfmsub231ps_avx512vl(auVar45,auVar41,auVar36);
      auVar41 = vaddps_avx512vl(auVar37,auVar41);
      auVar109._0_4_ = auVar102._0_4_ + auVar35._0_4_;
      auVar109._4_4_ = auVar102._4_4_ + auVar35._4_4_;
      auVar109._8_4_ = auVar102._8_4_ + auVar35._8_4_;
      auVar109._12_4_ = auVar102._12_4_ + auVar35._12_4_;
      auVar109._16_4_ = auVar102._16_4_ + auVar35._16_4_;
      auVar109._20_4_ = auVar102._20_4_ + auVar35._20_4_;
      auVar109._24_4_ = auVar102._24_4_ + auVar35._24_4_;
      auVar109._28_4_ = auVar102._28_4_ + auVar35._28_4_;
      auVar33._0_4_ = auVar31._0_4_ + auVar41._0_4_;
      auVar33._4_4_ = auVar31._4_4_ + auVar41._4_4_;
      auVar33._8_4_ = auVar31._8_4_ + auVar41._8_4_;
      auVar33._12_4_ = auVar31._12_4_ + auVar41._12_4_;
      auVar33._16_4_ = auVar31._16_4_ + auVar41._16_4_;
      auVar33._20_4_ = auVar31._20_4_ + auVar41._20_4_;
      auVar33._24_4_ = auVar31._24_4_ + auVar41._24_4_;
      auVar33._28_4_ = auVar31._28_4_ + auVar41._28_4_;
      auVar116._0_4_ = auVar32._0_4_ + auVar34._0_4_ + auVar42._0_4_;
      auVar116._4_4_ = auVar32._4_4_ + auVar34._4_4_ + auVar42._4_4_;
      auVar116._8_4_ = auVar32._8_4_ + auVar34._8_4_ + auVar42._8_4_;
      auVar116._12_4_ = auVar32._12_4_ + auVar34._12_4_ + auVar42._12_4_;
      auVar116._16_4_ = auVar32._16_4_ + auVar34._16_4_ + auVar42._16_4_;
      auVar116._20_4_ = auVar32._20_4_ + auVar34._20_4_ + auVar42._20_4_;
      auVar116._24_4_ = auVar32._24_4_ + auVar34._24_4_ + auVar42._24_4_;
      auVar116._28_4_ = auVar32._28_4_ + auVar34._28_4_ + auVar42._28_4_;
      auVar37 = vsubps_avx(auVar109,auVar103);
      auVar36 = vsubps_avx512vl(auVar33,auVar38);
      auVar35 = vsubps_avx512vl(auVar116,auVar39);
      auVar42 = vpermt2ps_avx512vl(auVar35,auVar63,auVar36);
      auVar41 = vpermt2ps_avx512vl(auVar37,auVar64,auVar36);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar65,auVar42);
      *(undefined1 (*) [32])(lVar25 + -0x40 + lVar8) = auVar41;
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar66,auVar37);
      *(undefined1 (*) [32])(lVar25 + -0x20 + lVar8) = auVar42;
      auVar42 = vpermt2ps_avx512vl(auVar36,auVar67,auVar37);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar68,auVar35);
      *(undefined1 (*) [32])(lVar25 + lVar8) = auVar42;
      auVar42 = *(undefined1 (*) [32])(lVar22 + -0x40 + lVar8);
      auVar41 = *(undefined1 (*) [32])(lVar22 + -0x20 + lVar8);
      auVar33 = vpermt2ps_avx512vl(auVar42,auVar48,auVar41);
      auVar38 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar22 + lVar8),auVar47,auVar41);
      auVar39 = vinsertf32x4_avx512vl(auVar33,auVar38._0_16_,1);
      auVar33 = vshuff64x2_avx512vl(auVar33,auVar38,3);
      auVar42 = vpermt2ps_avx512vl(auVar41,
                                   ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a
                                   ,auVar42);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000
                                   ,*(undefined1 (*) [32])(lVar22 + lVar8));
      auVar41 = vsubps_avx512vl(auVar39,auVar37);
      auVar36 = vsubps_avx512vl(auVar33,auVar36);
      auVar37 = vsubps_avx(auVar42,auVar35);
      auVar42 = vdivps_avx(auVar41,auVar73);
      auVar41 = vdivps_avx(auVar36,auVar73);
      auVar37 = vdivps_avx(auVar37,auVar73);
      auVar36 = vpermt2ps_avx512vl(auVar37,auVar63,auVar41);
      auVar35 = vpermt2ps_avx512vl(auVar42,auVar64,auVar41);
      auVar35 = vpermt2ps_avx512vl(auVar35,auVar65,auVar36);
      *(undefined1 (*) [32])(lVar24 + -0x40 + lVar8) = auVar35;
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar66,auVar42);
      *(undefined1 (*) [32])(lVar24 + -0x20 + lVar8) = auVar36;
      auVar42 = vpermt2ps_avx512vl(auVar41,auVar67,auVar42);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar68,auVar37);
      *(undefined1 (*) [32])(lVar24 + lVar8) = auVar42;
      lVar28 = lVar28 + 8;
      lVar19 = lVar19 + 0x60;
      pauVar27 = pauVar27 + 4;
      lVar23 = lVar23 + 0x60;
      lVar25 = lVar25 + 0x60;
      lVar22 = lVar22 + 0x60;
      lVar24 = lVar24 + 0x60;
      param_12 = param_12 + 0x20;
    } while (lVar28 < iVar18);
    param_12 = (int)lVar28;
  }
  if (param_12 < (int)param_13) {
    auVar47 = vpbroadcastd_avx512vl();
    auVar48._0_4_ =
         auVar47._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar48._4_4_ = auVar47._4_4_ + _UNK_150b50ae4;
    auVar48._8_4_ = auVar47._8_4_ + _UNK_150b50ae8;
    auVar48._12_4_ = auVar47._12_4_ + _UNK_150b50aec;
    auVar48._16_4_ = auVar47._16_4_ + _UNK_150b50af0;
    auVar48._20_4_ = auVar47._20_4_ + _UNK_150b50af4;
    auVar48._24_4_ = auVar47._24_4_ + _UNK_150b50af8;
    auVar48._28_4_ = auVar47._28_4_ + _UNK_150b50afc;
    auVar47 = vpbroadcastd_avx512vl();
    uVar5 = vpcmpgtd_avx512vl(auVar47,auVar48);
    lVar23 = (longlong)(param_12 * 4);
    auVar48 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_8 + lVar23));
    bVar3 = (byte)uVar5;
    auVar49._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar49._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar49._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar49._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar49._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar49._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar49._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar49._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    vpslld_avx2(auVar49,2);
    auVar48 = vgatherdps_avx512vl(param_9[param_2 * 2]);
    auVar50._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar50._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar50._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar50._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar50._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar50._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar50._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar50._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar105 = vpslld_avx2(auVar49,4);
    auVar48 = vpslld_avx2(auVar49,5);
    auVar47._0_4_ = auVar48._0_4_ + auVar105._0_4_;
    auVar47._4_4_ = auVar48._4_4_ + auVar105._4_4_;
    auVar47._8_4_ = auVar48._8_4_ + auVar105._8_4_;
    auVar47._12_4_ = auVar48._12_4_ + auVar105._12_4_;
    auVar47._16_4_ = auVar48._16_4_ + auVar105._16_4_;
    auVar47._20_4_ = auVar48._20_4_ + auVar105._20_4_;
    auVar47._24_4_ = auVar48._24_4_ + auVar105._24_4_;
    auVar47._28_4_ = auVar48._28_4_ + auVar105._28_4_;
    auVar105._4_4_ = __real_00000004;
    auVar105._0_4_ = __real_00000004;
    auVar105._8_4_ = __real_00000004;
    auVar105._12_4_ = __real_00000004;
    auVar105._16_4_ = __real_00000004;
    auVar105._20_4_ = __real_00000004;
    auVar105._24_4_ = __real_00000004;
    auVar105._28_4_ = __real_00000004;
    vpord_avx512vl(auVar47,auVar105);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 * 2));
    auVar51._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar51._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar51._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar51._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar51._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar51._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar51._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar51._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar63._4_4_ = __real_00000008;
    auVar63._0_4_ = __real_00000008;
    auVar63._8_4_ = __real_00000008;
    auVar63._12_4_ = __real_00000008;
    auVar63._16_4_ = __real_00000008;
    auVar63._20_4_ = __real_00000008;
    auVar63._24_4_ = __real_00000008;
    auVar63._28_4_ = __real_00000008;
    vpord_avx512vl(auVar47,auVar63);
    auVar48 = vgatherdps_avx512vl(*param_9);
    auVar52._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar52._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar52._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar52._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar52._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar52._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar52._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar52._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar64._4_4_ = __real_0000000c;
    auVar64._0_4_ = __real_0000000c;
    auVar64._8_4_ = __real_0000000c;
    auVar64._12_4_ = __real_0000000c;
    auVar64._16_4_ = __real_0000000c;
    auVar64._20_4_ = __real_0000000c;
    auVar64._24_4_ = __real_0000000c;
    auVar64._28_4_ = __real_0000000c;
    vpord_avx512vl(auVar47,auVar64);
    auVar48 = vgatherdps_avx512vl(*param_9);
    auVar53._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar53._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar53._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar53._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar53._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar53._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar53._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar53._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar65._4_4_ = __real_00000010;
    auVar65._0_4_ = __real_00000010;
    auVar65._8_4_ = __real_00000010;
    auVar65._12_4_ = __real_00000010;
    auVar65._16_4_ = __real_00000010;
    auVar65._20_4_ = __real_00000010;
    auVar65._24_4_ = __real_00000010;
    auVar65._28_4_ = __real_00000010;
    auVar48 = vpaddd_avx512vl(auVar47,auVar65);
    auVar105 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_8));
    fVar129 = (float)((uint)(bVar3 & 1) * auVar105._0_4_);
    fVar132 = (float)((uint)((byte)(uVar5 >> 1) & 1) * auVar105._4_4_);
    auVar54._4_4_ = fVar132;
    auVar54._0_4_ = fVar129;
    fVar131 = (float)((uint)((byte)(uVar5 >> 2) & 1) * auVar105._8_4_);
    auVar54._8_4_ = fVar131;
    fVar130 = (float)((uint)((byte)(uVar5 >> 3) & 1) * auVar105._12_4_);
    auVar54._12_4_ = fVar130;
    fVar128 = (float)((uint)((byte)(uVar5 >> 4) & 1) * auVar105._16_4_);
    auVar54._16_4_ = fVar128;
    fVar125 = (float)((uint)((byte)(uVar5 >> 5) & 1) * auVar105._20_4_);
    auVar54._20_4_ = fVar125;
    fVar81 = (float)((uint)((byte)(uVar5 >> 6) & 1) * auVar105._24_4_);
    auVar54._24_4_ = fVar81;
    fVar80 = (float)((uint)(byte)(uVar5 >> 7) * auVar105._28_4_);
    auVar54._28_4_ = fVar80;
    auVar66._4_4_ = __real_00000014;
    auVar66._0_4_ = __real_00000014;
    auVar66._8_4_ = __real_00000014;
    auVar66._12_4_ = __real_00000014;
    auVar66._16_4_ = __real_00000014;
    auVar66._20_4_ = __real_00000014;
    auVar66._24_4_ = __real_00000014;
    auVar66._28_4_ = __real_00000014;
    auVar105 = vpaddd_avx512vl(auVar47,auVar66);
    auVar29 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar55._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar55._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar55._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar55._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar55._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar55._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar55._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar55._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar67._4_4_ = __real_00000018;
    auVar67._0_4_ = __real_00000018;
    auVar67._8_4_ = __real_00000018;
    auVar67._12_4_ = __real_00000018;
    auVar67._16_4_ = __real_00000018;
    auVar67._20_4_ = __real_00000018;
    auVar67._24_4_ = __real_00000018;
    auVar67._28_4_ = __real_00000018;
    auVar48 = vpaddd_avx512vl(auVar47,auVar67);
    auVar29 = vxorps_avx512vl(auVar105._0_16_,auVar105._0_16_);
    auVar105 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_2));
    auVar56._0_4_ = (uint)(bVar3 & 1) * auVar105._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar56._4_4_ = (uint)bVar4 * auVar105._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar56._8_4_ = (uint)bVar4 * auVar105._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar56._12_4_ = (uint)bVar4 * auVar105._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar56._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar105._16_4_;
    auVar56._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar105._20_4_;
    auVar56._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar105._24_4_;
    auVar56._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar105._28_4_;
    auVar68._4_4_ = __real_00000020;
    auVar68._0_4_ = __real_00000020;
    auVar68._8_4_ = __real_00000020;
    auVar68._12_4_ = __real_00000020;
    auVar68._16_4_ = __real_00000020;
    auVar68._20_4_ = __real_00000020;
    auVar68._24_4_ = __real_00000020;
    auVar68._28_4_ = __real_00000020;
    auVar105 = vpaddd_avx512vl(auVar47,auVar68);
    auVar29 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 * 2));
    auVar57._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar57._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar57._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar57._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar57._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar57._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar57._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar57._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar6._4_4_ = __real_00000024;
    auVar6._0_4_ = __real_00000024;
    auVar6._8_4_ = __real_00000024;
    auVar6._12_4_ = __real_00000024;
    auVar6._16_4_ = __real_00000024;
    auVar6._20_4_ = __real_00000024;
    auVar6._24_4_ = __real_00000024;
    auVar6._28_4_ = __real_00000024;
    auVar48 = vpaddd_avx512vl(auVar47,auVar6);
    auVar29 = vxorps_avx512vl(auVar105._0_16_,auVar105._0_16_);
    auVar105 = vgatherdps_avx512vl(*param_9);
    auVar58._0_4_ = (uint)(bVar3 & 1) * auVar105._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar58._4_4_ = (uint)bVar4 * auVar105._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar58._8_4_ = (uint)bVar4 * auVar105._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar58._12_4_ = (uint)bVar4 * auVar105._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar58._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar105._16_4_;
    auVar58._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar105._20_4_;
    auVar58._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar105._24_4_;
    auVar58._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar105._28_4_;
    auVar7._4_4_ = __real_00000028;
    auVar7._0_4_ = __real_00000028;
    auVar7._8_4_ = __real_00000028;
    auVar7._12_4_ = __real_00000028;
    auVar7._16_4_ = __real_00000028;
    auVar7._20_4_ = __real_00000028;
    auVar7._24_4_ = __real_00000028;
    auVar7._28_4_ = __real_00000028;
    vpaddd_avx512vl(auVar47,auVar7);
    auVar29 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_8));
    auVar59._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar59._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar59._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar59._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar59._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar59._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar59._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar59._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    lVar19 = (longlong)param_12;
    pauVar20 = (undefined1 (*) [32])(param_3 + lVar19 * 0xc);
    if (bVar3 == 0xff) {
      auVar48 = pauVar20[1];
      auVar47 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar20,auVar48);
      auVar105 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                    ,pauVar20[2],auVar48);
      auVar60 = vinsertf32x4_avx512vl(auVar47,auVar105._0_16_,1);
      auVar61 = vshuff64x2_avx512vl(auVar47,auVar105,3);
      auVar48 = vblendps_avx(auVar48,*pauVar20,0x24);
      auVar62 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar48,pauVar20[2]);
    }
    else {
      auVar30 = vxorps_avx512vl(auVar30,auVar30);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + param_4));
      auVar60._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar60._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar60._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar60._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar30 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + lVar19 * 3));
      auVar61._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar61._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar61._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar61._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar61._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar61._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar61._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar61._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + lVar19 * 3));
      auVar62._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
      auVar62._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    }
    pauVar21 = (undefined1 (*) [32])(param_1 + lVar19 * 0x10);
    auVar48 = vmulps_avx512vl(auVar57,auVar60);
    auVar47 = vmulps_avx512vl(auVar58,auVar61);
    auVar105 = vmulps_avx512vl(auVar59,auVar62);
    auVar63 = vmulps_avx512vl(auVar51,auVar48);
    auVar64 = vmulps_avx512vl(auVar52,auVar47);
    auVar65 = vmulps_avx512vl(auVar50,auVar105);
    auVar63 = vfmsub231ps_avx512vl(auVar63,auVar50,auVar47);
    auVar64 = vfmsub231ps_avx512vl(auVar64,auVar51,auVar105);
    auVar65 = vfmsub231ps_avx512vl(auVar65,auVar52,auVar48);
    auVar64 = vaddps_avx512vl(auVar64,auVar64);
    auVar65 = vaddps_avx512vl(auVar65,auVar65);
    auVar63 = vaddps_avx512vl(auVar63,auVar63);
    auVar48 = vfmadd231ps_avx512vl(auVar48,auVar53,auVar64);
    auVar47 = vfmadd231ps_avx512vl(auVar47,auVar53,auVar65);
    auVar105 = vfmadd231ps_avx512vl(auVar105,auVar53,auVar63);
    auVar66 = vmulps_avx512vl(auVar51,auVar64);
    auVar67 = vmulps_avx512vl(auVar52,auVar65);
    auVar68 = vmulps_avx512vl(auVar50,auVar63);
    auVar65 = vfmsub231ps_avx512vl(auVar66,auVar50,auVar65);
    auVar105 = vaddps_avx512vl(auVar105,auVar65);
    auVar63 = vfmsub231ps_avx512vl(auVar67,auVar51,auVar63);
    auVar48 = vaddps_avx512vl(auVar48,auVar63);
    auVar63 = vfmsub231ps_avx512vl(auVar68,auVar52,auVar64);
    auVar47 = vaddps_avx512vl(auVar47,auVar63);
    auVar48 = vaddps_avx512vl(auVar54,auVar48);
    auVar47 = vaddps_avx512vl(auVar55,auVar47);
    auVar105 = vaddps_avx512vl(auVar56,auVar105);
    auVar63 = vbroadcastss_avx512vl(ZEXT416(*param_10));
    auVar48 = vsubps_avx512vl(auVar48,auVar63);
    auVar64 = vbroadcastss_avx512vl(ZEXT416(param_10[1]));
    auVar47 = vsubps_avx512vl(auVar47,auVar64);
    auVar65 = vbroadcastss_avx512vl(ZEXT416(param_10[2]));
    auVar105 = vsubps_avx512vl(auVar105,auVar65);
    piVar2 = (int *)(param_6 + lVar23);
    auVar69._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * piVar2[1];
    auVar69._0_4_ = (uint)(bVar3 & 1) * *piVar2;
    auVar69._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * piVar2[2];
    auVar69._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * piVar2[3];
    auVar69._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * piVar2[4];
    auVar69._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * piVar2[5];
    auVar69._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * piVar2[6];
    auVar69._28_4_ = (uint)(byte)(uVar5 >> 7) * piVar2[7];
    if (bVar3 == 0xff) {
      auVar66 = vunpcklps_avx512vl(auVar48,auVar47);
      auVar67 = vunpcklps_avx512vl(auVar105,auVar69);
      auVar68 = vunpcklpd_avx512vl(auVar66,auVar67);
      auVar66 = vunpckhpd_avx512vl(auVar66,auVar67);
      auVar67 = vunpckhps_avx512vl(auVar48,auVar47);
      auVar102 = vunpckhps_avx512vl(auVar105,auVar69);
      auVar73 = vunpcklpd_avx512vl(auVar67,auVar102);
      auVar67 = vunpckhpd_avx512vl(auVar67,auVar102);
      auVar102 = vinsertf32x4_avx512vl(auVar68,auVar66._0_16_,1);
      *pauVar21 = auVar102;
      auVar102 = vinsertf32x4_avx512vl(auVar73,auVar67._0_16_,1);
      pauVar21[1] = auVar102;
      auVar66 = vshuff64x2_avx512vl(auVar68,auVar66,3);
      pauVar21[2] = auVar66;
      auVar66 = vshuff64x2_avx512vl(auVar73,auVar67,3);
      pauVar21[3] = auVar66;
      auVar66 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar105,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar48,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar67,auVar66);
      *pauVar20 = auVar67;
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar66,auVar48);
      pauVar20[1] = auVar66;
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar47,auVar48);
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar48,auVar105);
      pauVar20[2] = auVar48;
      pauVar20 = (undefined1 (*) [32])(param_2 + lVar19 * 0xc);
      auVar48 = *(undefined1 (*) [32])(param_2 + lVar19 * 0xc);
      auVar47 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar19 * 0xc);
      auVar105 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar19 * 0xc);
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar48,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar105,auVar47);
      auVar70 = vinsertf32x4_avx512vl(auVar66,auVar67._0_16_,1);
      auVar71 = vshuff64x2_avx512vl(auVar66,auVar67,3);
      auVar48 = vblendps_avx(auVar47,auVar48,0x24);
      auVar72 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar48,auVar105);
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar21) + auVar34,uVar5,auVar48);
      vscatterdps_avx512vl(ZEXT832(pauVar21) + auVar34,uVar5,auVar47);
      vscatterdps_avx512vl(ZEXT832(pauVar21) + auVar34,uVar5,auVar105);
      vscatterdps_avx512vl(ZEXT832(pauVar21) + auVar34,uVar5,auVar69);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar31,uVar5,auVar48);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar102,uVar5,auVar47);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar34,uVar5,auVar105);
      pauVar20 = (undefined1 (*) [32])(param_2 + lVar19 * 0xc);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + (longlong)*pauVar20));
      auVar70._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
      auVar70._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
      auVar70._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
      auVar70._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
      auVar70._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar70._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar70._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar70._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar30 = vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + lVar19 * 0x10));
      auVar71._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar71._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar71._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar71._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar71._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar71._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar71._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar71._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar30 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                        ._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + (longlong)param_10));
      auVar72._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar72._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar72._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar72._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar72._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar72._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar72._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar72._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    }
    auVar48 = vmulps_avx512vl(auVar57,auVar70);
    auVar47 = vmulps_avx512vl(auVar58,auVar71);
    auVar105 = vmulps_avx512vl(auVar59,auVar72);
    auVar66 = vmulps_avx512vl(auVar51,auVar48);
    auVar67 = vmulps_avx512vl(auVar52,auVar47);
    auVar68 = vmulps_avx512vl(auVar50,auVar105);
    auVar66 = vfmsub231ps_avx512vl(auVar66,auVar50,auVar47);
    auVar67 = vfmsub231ps_avx512vl(auVar67,auVar51,auVar105);
    auVar68 = vfmsub231ps_avx512vl(auVar68,auVar52,auVar48);
    auVar67 = vaddps_avx512vl(auVar67,auVar67);
    auVar68 = vaddps_avx512vl(auVar68,auVar68);
    auVar66 = vaddps_avx512vl(auVar66,auVar66);
    auVar48 = vfmadd231ps_avx512vl(auVar48,auVar53,auVar67);
    auVar47 = vfmadd231ps_avx512vl(auVar47,auVar53,auVar68);
    auVar105 = vfmadd231ps_avx512vl(auVar105,auVar53,auVar66);
    auVar102 = vmulps_avx512vl(auVar51,auVar67);
    auVar73 = vmulps_avx512vl(auVar52,auVar68);
    auVar42 = vmulps_avx512vl(auVar50,auVar66);
    auVar68 = vfmsub231ps_avx512vl(auVar102,auVar50,auVar68);
    auVar105 = vaddps_avx512vl(auVar105,auVar68);
    auVar66 = vfmsub231ps_avx512vl(auVar73,auVar51,auVar66);
    auVar48 = vaddps_avx512vl(auVar48,auVar66);
    auVar66 = vfmsub231ps_avx512vl(auVar42,auVar52,auVar67);
    auVar47 = vaddps_avx512vl(auVar47,auVar66);
    if (bVar3 == 0xff) {
      auVar66 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar105,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar48,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar67,auVar66);
      *pauVar20 = auVar67;
      lVar23 = lVar19 * 0xc;
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar66,auVar48);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar23) = auVar66;
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar47,auVar48);
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar48,auVar105);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar23) = auVar48;
      auVar48 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar23);
      auVar47 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar23);
      pauVar20 = (undefined1 (*) [32])(lVar23 + param_4);
      auVar105 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                    ,*(undefined1 (*) [32])(param_4 + lVar23),auVar48);
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar47,auVar48);
      auVar74 = vinsertf32x4_avx512vl(auVar105,auVar66._0_16_,1);
      auVar75 = vshuff64x2_avx512vl(auVar105,auVar66,3);
      auVar48 = vblendps_avx(auVar48,*(undefined1 (*) [32])(param_4 + lVar23),0x24);
      auVar76 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar48,auVar47);
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar31,uVar5,auVar48);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar34,uVar5,auVar47);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar32,uVar5,auVar105);
      pauVar20 = (undefined1 (*) [32])(param_4 + lVar19 * 0xc);
      auVar105 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + (longlong)*pauVar20));
      auVar74._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar105._4_4_;
      auVar74._0_4_ = (uint)(bVar3 & 1) * auVar105._0_4_;
      auVar74._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar105._8_4_;
      auVar74._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar105._12_4_;
      auVar74._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar105._16_4_;
      auVar74._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar105._20_4_;
      auVar74._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar105._24_4_;
      auVar74._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar105._28_4_;
      auVar30 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + (longlong)param_10));
      auVar75._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar75._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar75._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar75._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar75._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar75._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar75._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar75._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar30 = vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + lVar23));
      auVar76._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar76._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar76._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar76._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    }
    auVar48 = vmulps_avx512vl(auVar57,auVar74);
    auVar47 = vmulps_avx512vl(auVar58,auVar75);
    auVar105 = vmulps_avx512vl(auVar59,auVar76);
    auVar66 = vmulps_avx512vl(auVar51,auVar48);
    auVar67 = vmulps_avx512vl(auVar52,auVar47);
    auVar68 = vmulps_avx512vl(auVar50,auVar105);
    auVar66 = vfmsub231ps_avx512vl(auVar66,auVar50,auVar47);
    auVar67 = vfmsub231ps_avx512vl(auVar67,auVar51,auVar105);
    auVar68 = vfmsub231ps_avx512vl(auVar68,auVar52,auVar48);
    auVar67 = vaddps_avx512vl(auVar67,auVar67);
    auVar68 = vaddps_avx512vl(auVar68,auVar68);
    auVar66 = vaddps_avx512vl(auVar66,auVar66);
    auVar48 = vfmadd231ps_avx512vl(auVar48,auVar53,auVar67);
    auVar47 = vfmadd231ps_avx512vl(auVar47,auVar53,auVar68);
    auVar105 = vfmadd213ps_avx512vl(auVar53,auVar66,auVar105);
    auVar102 = vmulps_avx512vl(auVar51,auVar67);
    auVar31 = vmulps_avx512vl(auVar52,auVar68);
    auVar32 = vmulps_avx512vl(auVar50,auVar66);
    auVar68 = vfmsub231ps_avx512vl(auVar102,auVar50,auVar68);
    auVar105 = vaddps_avx512vl(auVar105,auVar68);
    auVar66 = vfmsub231ps_avx512vl(auVar31,auVar51,auVar66);
    auVar48 = vaddps_avx512vl(auVar48,auVar66);
    auVar66 = vfmsub231ps_avx512vl(auVar32,auVar52,auVar67);
    auVar47 = vaddps_avx512vl(auVar47,auVar66);
    auVar104._0_4_ = fVar129 + auVar48._0_4_;
    auVar104._4_4_ = fVar132 + auVar48._4_4_;
    auVar104._8_4_ = fVar131 + auVar48._8_4_;
    auVar104._12_4_ = fVar130 + auVar48._12_4_;
    auVar104._16_4_ = fVar128 + auVar48._16_4_;
    auVar104._20_4_ = fVar125 + auVar48._20_4_;
    auVar104._24_4_ = fVar81 + auVar48._24_4_;
    auVar104._28_4_ = fVar80 + auVar48._28_4_;
    auVar48 = vaddps_avx512vl(auVar55,auVar47);
    auVar47 = vaddps_avx512vl(auVar56,auVar105);
    auVar105 = vsubps_avx512vl(auVar104,auVar63);
    auVar48 = vsubps_avx512vl(auVar48,auVar64);
    auVar47 = vsubps_avx512vl(auVar47,auVar65);
    if (bVar3 == 0xff) {
      auVar63 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar47,auVar48);
      auVar64 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar105,auVar48);
      auVar64 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar64,auVar63);
      *pauVar20 = auVar64;
      lVar23 = lVar19 * 0xc;
      auVar63 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar63,auVar105);
      *(undefined1 (*) [32])(param_4 + 0x20 + lVar23) = auVar63;
      auVar63 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar48,auVar105);
      auVar63 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar63,auVar47);
      *(undefined1 (*) [32])(param_4 + 0x40 + lVar23) = auVar63;
      auVar63 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar23);
      auVar64 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar23);
      auVar65 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*(undefined1 (*) [32])(param_7 + lVar23),auVar63);
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar64,auVar63);
      auVar77 = vinsertf32x4_avx512vl(auVar65,auVar66._0_16_,1);
      auVar78 = vshuff64x2_avx512vl(auVar65,auVar66,3);
      auVar63 = vblendps_avx(auVar63,*(undefined1 (*) [32])(param_7 + lVar23),0x24);
      auVar79 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar63,auVar64);
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar20) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,
                 auVar105);
      vscatterdps_avx512vl
                (ZEXT832(pauVar20) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar5,
                 auVar48);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar105,uVar5,auVar47);
      puVar1 = (undefined4 *)(param_7 + lVar19 * 0xc);
      auVar63 = vgatherdps_avx512vl(*puVar1);
      auVar77._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar63._4_4_;
      auVar77._0_4_ = (uint)(bVar3 & 1) * auVar63._0_4_;
      auVar77._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar63._8_4_;
      auVar77._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar63._12_4_;
      auVar77._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar63._16_4_;
      auVar77._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar63._20_4_;
      auVar77._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar63._24_4_;
      auVar77._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar63._28_4_;
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar1 + (ulonglong)param_13));
      auVar78._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar63._4_4_;
      auVar78._0_4_ = (uint)(bVar3 & 1) * auVar63._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar63._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar63._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar63._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar63._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar63._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar63._28_4_;
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar1 + (longlong)&local_228));
      auVar79._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar63._4_4_;
      auVar79._0_4_ = (uint)(bVar3 & 1) * auVar63._0_4_;
      auVar79._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar63._8_4_;
      auVar79._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar63._12_4_;
      auVar79._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar63._16_4_;
      auVar79._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar63._20_4_;
      auVar79._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar63._24_4_;
      auVar79._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar63._28_4_;
    }
    auVar105 = vsubps_avx(auVar77,auVar105);
    auVar63 = vsubps_avx(auVar78,auVar48);
    auVar64 = vsubps_avx(auVar79,auVar47);
    auVar117._4_4_ = param_11;
    auVar117._0_4_ = param_11;
    auVar117._8_4_ = param_11;
    auVar117._12_4_ = param_11;
    auVar117._16_4_ = param_11;
    auVar117._20_4_ = param_11;
    auVar117._24_4_ = param_11;
    auVar117._28_4_ = param_11;
    auVar48 = vdivps_avx(auVar105,auVar117);
    auVar47 = vdivps_avx(auVar63,auVar117);
    auVar105 = vdivps_avx(auVar64,auVar117);
    pauVar27 = (undefined1 (*) [32])(param_5 + lVar19 * 0xc);
    if (bVar3 == 0xff) {
      auVar63 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar105,auVar47);
      auVar64 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar48,auVar47);
      auVar64 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar64,auVar63);
      *pauVar27 = auVar64;
      auVar63 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar63,auVar48);
      pauVar27[1] = auVar63;
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar47,auVar48);
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar48,auVar105);
      pauVar27[2] = auVar48;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar27) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,
                 auVar48);
      vscatterdps_avx512vl
                (ZEXT832(pauVar27) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar5,
                 auVar47);
      vscatterdps_avx512vl
                (ZEXT832(pauVar27) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar5,
                 auVar105);
    }
  }
  return;
}

// ApplyPreSimulationTransform___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_avx512skx @ 140cca5f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransform___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,uint *param_8,uint *param_9,undefined4 param_10,
               uint param_11)

{
  undefined1 (*pauVar1) [32];
  int *piVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  undefined1 (*pauVar6) [32];
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
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
  undefined1 auVar14 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined4 local_e8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  
  auVar40 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar39 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar38 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar37 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar36 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar34 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar35 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar33 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar32 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar17 = in_ZMM11._0_32_;
  auVar18 = in_ZMM12._0_32_;
  auVar15 = in_ZMM10._0_32_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  uVar7 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar7 = param_11;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar11 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    auVar41._4_4_ = param_10;
    auVar41._0_4_ = param_10;
    auVar41._8_4_ = param_10;
    auVar41._12_4_ = param_10;
    auVar41._16_4_ = param_10;
    auVar41._20_4_ = param_10;
    auVar41._24_4_ = param_10;
    auVar41._28_4_ = param_10;
    lVar9 = 0x10;
    uVar11 = 0;
    uVar10 = 0;
    do {
      auVar15 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar9 * 4);
      auVar17 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar9 * 4);
      auVar18 = *(undefined1 (*) [32])(param_3 + lVar9 * 4);
      auVar16 = vblendps_avx(auVar17,auVar15,0x24);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar32,auVar17);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar35,auVar18);
      auVar17 = vpermt2ps_avx512vl(auVar18,auVar33,auVar17);
      auVar18 = vinsertf32x4_avx512vl(auVar15,auVar17._0_16_,1);
      auVar19 = vbroadcastss_avx512vl(ZEXT416(param_8[8]));
      auVar15 = vshuff64x2_avx512vl(auVar15,auVar17,3);
      auVar17 = vmulps_avx512vl(auVar18,auVar19);
      auVar20 = vbroadcastss_avx512vl(ZEXT416(param_8[9]));
      auVar21 = vbroadcastss_avx512vl(ZEXT416(param_8[10]));
      auVar15 = vmulps_avx512vl(auVar15,auVar20);
      auVar18 = vmulps_avx512vl(auVar16,auVar21);
      auVar22 = vbroadcastss_avx512vl(ZEXT416(param_8[3]));
      auVar23 = vbroadcastss_avx512vl(ZEXT416(param_8[1]));
      auVar24 = vbroadcastss_avx512vl(ZEXT416(param_8[2]));
      auVar25 = vbroadcastss_avx512vl(ZEXT416(*param_8));
      auVar16 = vmulps_avx512vl(auVar17,auVar23);
      auVar26 = vmulps_avx512vl(auVar15,auVar24);
      auVar27 = vmulps_avx512vl(auVar18,auVar25);
      auVar16 = vfmsub231ps_avx512vl(auVar16,auVar15,auVar25);
      auVar26 = vfmsub231ps_avx512vl(auVar26,auVar18,auVar23);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar17,auVar24);
      auVar28._0_4_ = auVar26._0_4_ + auVar26._0_4_;
      auVar28._4_4_ = auVar26._4_4_ + auVar26._4_4_;
      auVar28._8_4_ = auVar26._8_4_ + auVar26._8_4_;
      auVar28._12_4_ = auVar26._12_4_ + auVar26._12_4_;
      auVar28._16_4_ = auVar26._16_4_ + auVar26._16_4_;
      auVar28._20_4_ = auVar26._20_4_ + auVar26._20_4_;
      auVar28._24_4_ = auVar26._24_4_ + auVar26._24_4_;
      auVar28._28_4_ = auVar26._28_4_ + auVar26._28_4_;
      auVar29._0_4_ = auVar27._0_4_ + auVar27._0_4_;
      auVar29._4_4_ = auVar27._4_4_ + auVar27._4_4_;
      auVar29._8_4_ = auVar27._8_4_ + auVar27._8_4_;
      auVar29._12_4_ = auVar27._12_4_ + auVar27._12_4_;
      auVar29._16_4_ = auVar27._16_4_ + auVar27._16_4_;
      auVar29._20_4_ = auVar27._20_4_ + auVar27._20_4_;
      auVar29._24_4_ = auVar27._24_4_ + auVar27._24_4_;
      auVar29._28_4_ = auVar27._28_4_ + auVar27._28_4_;
      auVar31._0_4_ = auVar16._0_4_ + auVar16._0_4_;
      auVar31._4_4_ = auVar16._4_4_ + auVar16._4_4_;
      auVar31._8_4_ = auVar16._8_4_ + auVar16._8_4_;
      auVar31._12_4_ = auVar16._12_4_ + auVar16._12_4_;
      auVar31._16_4_ = auVar16._16_4_ + auVar16._16_4_;
      auVar31._20_4_ = auVar16._20_4_ + auVar16._20_4_;
      auVar31._24_4_ = auVar16._24_4_ + auVar16._24_4_;
      auVar31._28_4_ = auVar16._28_4_ + auVar16._28_4_;
      auVar17 = vfmadd231ps_avx512vl(auVar17,auVar22,auVar28);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar22,auVar29);
      auVar18 = vfmadd231ps_avx512vl(auVar18,auVar22,auVar31);
      auVar16 = vmulps_avx512vl(auVar23,auVar28);
      auVar26 = vmulps_avx512vl(auVar24,auVar29);
      auVar27 = vmulps_avx512vl(auVar25,auVar31);
      auVar16 = vfmsub231ps_avx512vl(auVar16,auVar25,auVar29);
      auVar18 = vaddps_avx512vl(auVar18,auVar16);
      auVar16 = vfmsub231ps_avx512vl(auVar26,auVar23,auVar31);
      auVar17 = vaddps_avx512vl(auVar17,auVar16);
      auVar16 = vfmsub231ps_avx512vl(auVar27,auVar24,auVar28);
      auVar28 = vbroadcastss_avx512vl(ZEXT416(param_8[4]));
      auVar29 = vbroadcastss_avx512vl(ZEXT416(param_8[5]));
      fVar3 = (float)param_8[6];
      auVar44._4_4_ = fVar3;
      auVar44._0_4_ = fVar3;
      auVar44._8_4_ = fVar3;
      auVar44._12_4_ = fVar3;
      auVar44._16_4_ = fVar3;
      auVar44._20_4_ = fVar3;
      auVar44._24_4_ = fVar3;
      auVar44._28_4_ = fVar3;
      auVar26._0_4_ = auVar16._0_4_ + auVar15._0_4_;
      auVar26._4_4_ = auVar16._4_4_ + auVar15._4_4_;
      auVar26._8_4_ = auVar16._8_4_ + auVar15._8_4_;
      auVar26._12_4_ = auVar16._12_4_ + auVar15._12_4_;
      auVar26._16_4_ = auVar16._16_4_ + auVar15._16_4_;
      auVar26._20_4_ = auVar16._20_4_ + auVar15._20_4_;
      auVar26._24_4_ = auVar16._24_4_ + auVar15._24_4_;
      auVar26._28_4_ = auVar16._28_4_ + auVar15._28_4_;
      auVar15 = vaddps_avx512vl(auVar28,auVar17);
      auVar16 = vaddps_avx512vl(auVar29,auVar26);
      auVar48._0_4_ = auVar18._0_4_ + fVar3;
      auVar48._4_4_ = auVar18._4_4_ + fVar3;
      auVar48._8_4_ = auVar18._8_4_ + fVar3;
      auVar48._12_4_ = auVar18._12_4_ + fVar3;
      auVar48._16_4_ = auVar18._16_4_ + fVar3;
      auVar48._20_4_ = auVar18._20_4_ + fVar3;
      auVar48._24_4_ = auVar18._24_4_ + fVar3;
      auVar48._28_4_ = auVar18._28_4_ + fVar3;
      uVar4 = *param_9;
      auVar45._4_4_ = uVar4;
      auVar45._0_4_ = uVar4;
      auVar45._8_4_ = uVar4;
      auVar45._12_4_ = uVar4;
      auVar45._16_4_ = uVar4;
      auVar45._20_4_ = uVar4;
      auVar45._24_4_ = uVar4;
      auVar45._28_4_ = uVar4;
      auVar17 = vsubps_avx(auVar15,auVar45);
      uVar4 = param_9[1];
      auVar46._4_4_ = uVar4;
      auVar46._0_4_ = uVar4;
      auVar46._8_4_ = uVar4;
      auVar46._12_4_ = uVar4;
      auVar46._16_4_ = uVar4;
      auVar46._20_4_ = uVar4;
      auVar46._24_4_ = uVar4;
      auVar46._28_4_ = uVar4;
      auVar18 = vsubps_avx(auVar16,auVar46);
      uVar4 = param_9[2];
      auVar47._4_4_ = uVar4;
      auVar47._0_4_ = uVar4;
      auVar47._8_4_ = uVar4;
      auVar47._12_4_ = uVar4;
      auVar47._16_4_ = uVar4;
      auVar47._20_4_ = uVar4;
      auVar47._24_4_ = uVar4;
      auVar47._28_4_ = uVar4;
      auVar16 = vsubps_avx(auVar48,auVar47);
      auVar15 = *(undefined1 (*) [32])(param_6 + (uVar10 & 0xffffffff));
      auVar26 = vunpcklps_avx(auVar17,auVar18);
      auVar27 = vunpcklps_avx(auVar16,auVar15);
      auVar31 = vunpcklpd_avx(auVar26,auVar27);
      auVar26 = vunpckhpd_avx(auVar26,auVar27);
      auVar27 = vunpckhps_avx(auVar17,auVar18);
      auVar15 = vunpckhps_avx(auVar16,auVar15);
      auVar30 = vunpcklpd_avx512vl(auVar27,auVar15);
      auVar15 = vunpckhpd_avx(auVar27,auVar15);
      auVar51._16_16_ = auVar26._0_16_;
      auVar51._0_16_ = auVar31._0_16_;
      *(undefined1 (*) [32])(param_1 + uVar10 * 4) = auVar51;
      auVar27 = vinsertf32x4_avx512vl(auVar30,auVar15._0_16_,1);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar10 * 4) = auVar27;
      auVar26 = vperm2f128_avx(auVar31,auVar26,0x31);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar10 * 4) = auVar26;
      auVar15 = vshuff64x2_avx512vl(auVar30,auVar15,3);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar10 * 4) = auVar15;
      auVar15 = vpermt2ps_avx512vl(auVar16,auVar34,auVar18);
      auVar26 = vpermt2ps_avx512vl(auVar17,auVar36,auVar18);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar37,auVar15);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar9 * 4) = auVar26;
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar38,auVar17);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar9 * 4) = auVar15;
      auVar15 = vpermt2ps_avx512vl(auVar18,auVar39,auVar17);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar40,auVar16);
      *(undefined1 (*) [32])(param_3 + lVar9 * 4) = auVar15;
      auVar15 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar9 * 4);
      auVar17 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar9 * 4);
      auVar18 = *(undefined1 (*) [32])(param_2 + lVar9 * 4);
      auVar16 = vblendps_avx(auVar17,auVar15,0x24);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar32,auVar17);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar35,auVar18);
      auVar17 = vpermt2ps_avx512vl(auVar18,auVar33,auVar17);
      auVar18 = vinsertf32x4_avx512vl(auVar15,auVar17._0_16_,1);
      auVar15 = vshuff64x2_avx512vl(auVar15,auVar17,3);
      auVar17 = vmulps_avx512vl(auVar18,auVar19);
      auVar15 = vmulps_avx512vl(auVar15,auVar20);
      auVar16 = vmulps_avx512vl(auVar16,auVar21);
      auVar18 = vmulps_avx512vl(auVar17,auVar23);
      auVar26 = vmulps_avx512vl(auVar15,auVar24);
      auVar27 = vmulps_avx512vl(auVar16,auVar25);
      auVar31 = vfmsub231ps_avx512vl(auVar18,auVar15,auVar25);
      auVar26 = vfmsub231ps_avx512vl(auVar26,auVar16,auVar23);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar17,auVar24);
      auVar18._0_4_ = auVar26._0_4_ + auVar26._0_4_;
      auVar18._4_4_ = auVar26._4_4_ + auVar26._4_4_;
      auVar18._8_4_ = auVar26._8_4_ + auVar26._8_4_;
      auVar18._12_4_ = auVar26._12_4_ + auVar26._12_4_;
      auVar18._16_4_ = auVar26._16_4_ + auVar26._16_4_;
      auVar18._20_4_ = auVar26._20_4_ + auVar26._20_4_;
      auVar18._24_4_ = auVar26._24_4_ + auVar26._24_4_;
      auVar18._28_4_ = auVar26._28_4_ + auVar26._28_4_;
      auVar50._0_4_ = auVar27._0_4_ + auVar27._0_4_;
      auVar50._4_4_ = auVar27._4_4_ + auVar27._4_4_;
      auVar50._8_4_ = auVar27._8_4_ + auVar27._8_4_;
      auVar50._12_4_ = auVar27._12_4_ + auVar27._12_4_;
      auVar50._16_4_ = auVar27._16_4_ + auVar27._16_4_;
      auVar50._20_4_ = auVar27._20_4_ + auVar27._20_4_;
      auVar50._24_4_ = auVar27._24_4_ + auVar27._24_4_;
      auVar50._28_4_ = auVar27._28_4_ + auVar27._28_4_;
      auVar49._0_4_ = auVar31._0_4_ + auVar31._0_4_;
      auVar49._4_4_ = auVar31._4_4_ + auVar31._4_4_;
      auVar49._8_4_ = auVar31._8_4_ + auVar31._8_4_;
      auVar49._12_4_ = auVar31._12_4_ + auVar31._12_4_;
      auVar49._16_4_ = auVar31._16_4_ + auVar31._16_4_;
      auVar49._20_4_ = auVar31._20_4_ + auVar31._20_4_;
      auVar49._24_4_ = auVar31._24_4_ + auVar31._24_4_;
      auVar49._28_4_ = auVar31._28_4_ + auVar31._28_4_;
      auVar17 = vfmadd231ps_avx512vl(auVar17,auVar22,auVar18);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar22,auVar50);
      auVar16 = vfmadd231ps_avx512vl(auVar16,auVar22,auVar49);
      auVar26 = vmulps_avx512vl(auVar23,auVar18);
      auVar27 = vmulps_avx512vl(auVar24,auVar50);
      auVar31 = vmulps_avx512vl(auVar25,auVar49);
      auVar26 = vfmsub231ps_avx512vl(auVar26,auVar25,auVar50);
      auVar30._0_4_ = auVar16._0_4_ + auVar26._0_4_;
      auVar30._4_4_ = auVar16._4_4_ + auVar26._4_4_;
      auVar30._8_4_ = auVar16._8_4_ + auVar26._8_4_;
      auVar30._12_4_ = auVar16._12_4_ + auVar26._12_4_;
      auVar30._16_4_ = auVar16._16_4_ + auVar26._16_4_;
      auVar30._20_4_ = auVar16._20_4_ + auVar26._20_4_;
      auVar30._24_4_ = auVar16._24_4_ + auVar26._24_4_;
      auVar30._28_4_ = auVar16._28_4_ + auVar26._28_4_;
      auVar16 = vfmsub231ps_avx512vl(auVar27,auVar23,auVar49);
      auVar17 = vaddps_avx512vl(auVar17,auVar16);
      auVar16 = vfmsub231ps_avx512vl(auVar31,auVar24,auVar18);
      auVar15 = vaddps_avx512vl(auVar15,auVar16);
      auVar16 = vpermt2ps_avx512vl(auVar30,auVar34,auVar15);
      auVar26 = vpermt2ps_avx512vl(auVar17,auVar36,auVar15);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar37,auVar16);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar9 * 4) = auVar26;
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar38,auVar17);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar9 * 4) = auVar16;
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar39,auVar17);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar40,auVar30);
      *(undefined1 (*) [32])(param_2 + lVar9 * 4) = auVar15;
      auVar15 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar9 * 4);
      auVar17 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar9 * 4);
      auVar16 = *(undefined1 (*) [32])(param_4 + lVar9 * 4);
      auVar26 = vblendps_avx(auVar17,auVar15,0x24);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar32,auVar17);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar35,auVar16);
      auVar17 = vpermt2ps_avx512vl(auVar16,auVar33,auVar17);
      auVar16 = vinsertf32x4_avx512vl(auVar15,auVar17._0_16_,1);
      auVar15 = vshuff64x2_avx512vl(auVar15,auVar17,3);
      auVar17 = vmulps_avx512vl(auVar16,auVar19);
      auVar15 = vmulps_avx512vl(auVar15,auVar20);
      auVar16 = vmulps_avx512vl(auVar26,auVar21);
      auVar26 = vmulps_avx512vl(auVar17,auVar23);
      auVar27 = vmulps_avx512vl(auVar15,auVar24);
      auVar31 = vmulps_avx512vl(auVar16,auVar25);
      auVar26 = vfmsub231ps_avx512vl(auVar26,auVar15,auVar25);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar16,auVar23);
      auVar31 = vfmsub231ps_avx512vl(auVar31,auVar17,auVar24);
      auVar27 = vaddps_avx512vl(auVar27,auVar27);
      auVar31 = vaddps_avx512vl(auVar31,auVar31);
      auVar26 = vaddps_avx512vl(auVar26,auVar26);
      auVar17 = vfmadd231ps_avx512vl(auVar17,auVar22,auVar27);
      auVar19 = vfmadd231ps_avx512vl(auVar15,auVar22,auVar31);
      auVar15 = vfmadd213ps_avx512vl(auVar22,auVar26,auVar16);
      auVar16 = vmulps_avx512vl(auVar23,auVar27);
      auVar20 = vmulps_avx512vl(auVar24,auVar31);
      auVar21 = vmulps_avx512vl(auVar25,auVar26);
      auVar16 = vfmsub231ps_avx512vl(auVar16,auVar25,auVar31);
      auVar16 = vaddps_avx512vl(auVar15,auVar16);
      auVar15 = vfmsub231ps_avx512vl(auVar20,auVar23,auVar26);
      auVar26 = vaddps_avx512vl(auVar17,auVar15);
      auVar17 = vfmsub231ps_avx512vl(auVar21,auVar24,auVar27);
      auVar27._0_4_ = auVar17._0_4_ + auVar19._0_4_;
      auVar27._4_4_ = auVar17._4_4_ + auVar19._4_4_;
      auVar27._8_4_ = auVar17._8_4_ + auVar19._8_4_;
      auVar27._12_4_ = auVar17._12_4_ + auVar19._12_4_;
      auVar27._16_4_ = auVar17._16_4_ + auVar19._16_4_;
      auVar27._20_4_ = auVar17._20_4_ + auVar19._20_4_;
      auVar27._24_4_ = auVar17._24_4_ + auVar19._24_4_;
      auVar27._28_4_ = auVar17._28_4_ + auVar19._28_4_;
      auVar26 = vaddps_avx512vl(auVar28,auVar26);
      auVar27 = vaddps_avx512vl(auVar29,auVar27);
      auVar16 = vaddps_avx512vl(auVar44,auVar16);
      auVar19 = vsubps_avx512vl(auVar26,auVar45);
      auVar31 = vsubps_avx(auVar27,auVar46);
      auVar20 = vsubps_avx512vl(auVar16,auVar47);
      auVar16 = vpermt2ps_avx512vl(auVar20,auVar34,auVar31);
      auVar26 = vpermt2ps_avx512vl(auVar19,auVar36,auVar31);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar37,auVar16);
      *(undefined1 (*) [32])(param_4 + -0x40 + lVar9 * 4) = auVar26;
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar38,auVar19);
      *(undefined1 (*) [32])(param_4 + -0x20 + lVar9 * 4) = auVar16;
      auVar16 = vpermt2ps_avx512vl(auVar31,auVar39,auVar19);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar40,auVar20);
      *(undefined1 (*) [32])(param_4 + lVar9 * 4) = auVar16;
      auVar16 = *(undefined1 (*) [32])(param_7 + -0x40 + lVar9 * 4);
      auVar26 = *(undefined1 (*) [32])(param_7 + -0x20 + lVar9 * 4);
      auVar27 = *(undefined1 (*) [32])(param_7 + lVar9 * 4);
      auVar21 = vpermt2ps_avx512vl(auVar16,auVar32,auVar26);
      auVar22 = vpermt2ps_avx512vl(auVar27,auVar33,auVar26);
      auVar23 = vinsertf32x4_avx512vl(auVar21,auVar22._0_16_,1);
      auVar21 = vshuff64x2_avx512vl(auVar21,auVar22,3);
      auVar16 = vpermt2ps_avx512vl(auVar26,
                                   ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a
                                   ,auVar16);
      auVar16 = vpermt2ps_avx512vl(auVar16,
                                   ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000
                                   ,auVar27);
      auVar26 = vsubps_avx512vl(auVar23,auVar19);
      auVar27 = vsubps_avx512vl(auVar21,auVar31);
      auVar31 = vsubps_avx512vl(auVar16,auVar20);
      auVar26 = vdivps_avx512vl(auVar26,auVar41);
      auVar16 = vdivps_avx(auVar27,auVar41);
      auVar27 = vdivps_avx512vl(auVar31,auVar41);
      auVar31 = vpermt2ps_avx512vl(auVar27,auVar34,auVar16);
      auVar19 = vpermt2ps_avx512vl(auVar26,auVar36,auVar16);
      auVar19 = vpermt2ps_avx512vl(auVar19,auVar37,auVar31);
      *(undefined1 (*) [32])(param_5 + -0x40 + lVar9 * 4) = auVar19;
      auVar31 = vpermt2ps_avx512vl(auVar31,auVar38,auVar26);
      *(undefined1 (*) [32])(param_5 + -0x20 + lVar9 * 4) = auVar31;
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar39,auVar26);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar40,auVar27);
      *(undefined1 (*) [32])(param_5 + lVar9 * 4) = auVar16;
      uVar10 = uVar10 + 0x20;
      lVar9 = lVar9 + 0x18;
      uVar11 = uVar11 + 8;
    } while ((int)uVar11 < (int)(uVar7 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar11) {
      return;
    }
  }
  auVar32 = vpbroadcastd_avx512vl();
  auVar32 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar33 = vpbroadcastd_avx512vl();
  uVar10 = vpcmpgtd_avx512vl(auVar33,auVar32);
  uVar8 = (ulonglong)uVar11;
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar8 * 0xc);
  bVar12 = (byte)uVar10;
  if (bVar12 == 0xff) {
    auVar32 = pauVar1[1];
    auVar33 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,*pauVar1,auVar32);
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,pauVar1[2],auVar32);
    auVar35._16_16_ = auVar34._0_16_;
    auVar35._0_16_ = auVar33._0_16_;
    auVar33 = vperm2f128_avx(auVar33,auVar34,0x31);
    auVar32 = vblendps_avx(auVar32,*pauVar1,0x24);
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar32,pauVar1[2]);
  }
  else {
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_5));
    auVar35._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar32._4_4_;
    auVar35._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_;
    auVar35._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar32._8_4_;
    auVar35._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar32._12_4_;
    auVar35._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar35._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar35._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar35._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_5));
    auVar33._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar32._4_4_;
    auVar33._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_;
    auVar33._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar32._8_4_;
    auVar33._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar32._12_4_;
    auVar33._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar33._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar33._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar33._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar34 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_5));
    auVar32._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar34._4_4_;
    auVar32._0_4_ = (uint)(bVar12 & 1) * auVar34._0_4_;
    auVar32._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar34._8_4_;
    auVar32._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar34._12_4_;
    auVar32._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar34._16_4_;
    auVar32._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar34._20_4_;
    auVar32._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar34._24_4_;
    auVar32._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar34._28_4_;
  }
  pauVar6 = (undefined1 (*) [32])(param_1 + uVar8 * 0x10);
  fVar3 = (float)param_8[8];
  auVar24._4_4_ = fVar3;
  auVar24._0_4_ = fVar3;
  auVar24._8_4_ = fVar3;
  auVar24._12_4_ = fVar3;
  auVar24._16_4_ = fVar3;
  auVar24._20_4_ = fVar3;
  auVar24._24_4_ = fVar3;
  auVar24._28_4_ = fVar3;
  auVar39._0_4_ = auVar35._0_4_ * fVar3;
  auVar39._4_4_ = auVar35._4_4_ * fVar3;
  auVar39._8_4_ = auVar35._8_4_ * fVar3;
  auVar39._12_4_ = auVar35._12_4_ * fVar3;
  auVar39._16_4_ = auVar35._16_4_ * fVar3;
  auVar39._20_4_ = auVar35._20_4_ * fVar3;
  auVar39._24_4_ = auVar35._24_4_ * fVar3;
  auVar39._28_4_ = auVar35._28_4_ * fVar3;
  auVar35 = vbroadcastss_avx512vl(ZEXT416(param_8[9]));
  auVar33 = vmulps_avx512vl(auVar33,auVar35);
  auVar34 = vbroadcastss_avx512vl(ZEXT416(param_8[10]));
  auVar32 = vmulps_avx512vl(auVar32,auVar34);
  uVar7 = param_8[3];
  auVar14._4_4_ = uVar7;
  auVar14._0_4_ = uVar7;
  auVar14._8_4_ = uVar7;
  auVar14._12_4_ = uVar7;
  auVar21._16_4_ = uVar7;
  auVar21._0_16_ = auVar14;
  auVar21._20_4_ = uVar7;
  auVar21._24_4_ = uVar7;
  auVar21._28_4_ = uVar7;
  uVar7 = param_8[1];
  auVar22._4_4_ = uVar7;
  auVar22._0_4_ = uVar7;
  auVar22._8_4_ = uVar7;
  auVar22._12_4_ = uVar7;
  auVar22._16_4_ = uVar7;
  auVar22._20_4_ = uVar7;
  auVar22._24_4_ = uVar7;
  auVar22._28_4_ = uVar7;
  uVar7 = param_8[2];
  auVar20._4_4_ = uVar7;
  auVar20._0_4_ = uVar7;
  auVar20._8_4_ = uVar7;
  auVar20._12_4_ = uVar7;
  auVar20._16_4_ = uVar7;
  auVar20._20_4_ = uVar7;
  auVar20._24_4_ = uVar7;
  auVar20._28_4_ = uVar7;
  uVar7 = *param_8;
  auVar23._4_4_ = uVar7;
  auVar23._0_4_ = uVar7;
  auVar23._8_4_ = uVar7;
  auVar23._12_4_ = uVar7;
  auVar23._16_4_ = uVar7;
  auVar23._20_4_ = uVar7;
  auVar23._24_4_ = uVar7;
  auVar23._28_4_ = uVar7;
  auVar36 = vmulps_avx512vl(auVar39,auVar22);
  auVar37 = vmulps_avx512vl(auVar33,auVar20);
  auVar38 = vmulps_avx512vl(auVar32,auVar23);
  auVar36 = vfmsub231ps_avx512vl(auVar36,auVar33,auVar23);
  auVar37 = vfmsub231ps_avx512vl(auVar37,auVar32,auVar22);
  auVar38 = vfmsub231ps_avx512vl(auVar38,auVar39,auVar20);
  auVar37 = vaddps_avx512vl(auVar37,auVar37);
  auVar38 = vaddps_avx512vl(auVar38,auVar38);
  auVar36 = vaddps_avx512vl(auVar36,auVar36);
  auVar39 = vfmadd231ps_avx512vl(auVar39,auVar21,auVar37);
  auVar33 = vfmadd231ps_avx512vl(auVar33,auVar21,auVar38);
  auVar32 = vfmadd231ps_avx512vl(auVar32,auVar21,auVar36);
  auVar40 = vmulps_avx512vl(auVar22,auVar37);
  auVar41 = vmulps_avx512vl(auVar20,auVar38);
  auVar16 = vmulps_avx512vl(auVar23,auVar36);
  auVar38 = vfmsub231ps_avx512vl(auVar40,auVar23,auVar38);
  auVar32 = vaddps_avx512vl(auVar32,auVar38);
  auVar36 = vfmsub231ps_avx512vl(auVar41,auVar22,auVar36);
  auVar36 = vaddps_avx512vl(auVar39,auVar36);
  auVar37 = vfmsub231ps_avx512vl(auVar16,auVar20,auVar37);
  auVar38 = vbroadcastss_avx512vl(ZEXT416(param_8[4]));
  auVar39 = vbroadcastss_avx512vl(ZEXT416(param_8[5]));
  auVar33 = vaddps_avx512vl(auVar33,auVar37);
  auVar37 = vbroadcastss_avx512vl(ZEXT416(param_8[6]));
  auVar36 = vaddps_avx512vl(auVar38,auVar36);
  auVar33 = vaddps_avx512vl(auVar39,auVar33);
  auVar32 = vaddps_avx512vl(auVar37,auVar32);
  auVar40 = vbroadcastss_avx512vl(ZEXT416(*param_9));
  auVar36 = vsubps_avx512vl(auVar36,auVar40);
  auVar41 = vbroadcastss_avx512vl(ZEXT416(param_9[1]));
  auVar33 = vsubps_avx512vl(auVar33,auVar41);
  auVar16 = vbroadcastss_avx512vl(ZEXT416(param_9[2]));
  auVar32 = vsubps_avx512vl(auVar32,auVar16);
  piVar2 = (int *)(param_6 + (int)(uVar11 << 2));
  auVar19._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * piVar2[1];
  auVar19._0_4_ = (uint)(bVar12 & 1) * *piVar2;
  auVar19._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * piVar2[2];
  auVar19._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * piVar2[3];
  auVar19._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * piVar2[4];
  auVar19._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * piVar2[5];
  auVar19._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * piVar2[6];
  auVar19._28_4_ = (uint)(byte)(uVar10 >> 7) * piVar2[7];
  if (bVar12 == 0xff) {
    auVar15 = vunpcklps_avx512vl(auVar36,auVar33);
    auVar26 = vunpcklps_avx512vl(auVar32,auVar19);
    auVar27 = vunpcklpd_avx512vl(auVar15,auVar26);
    auVar15 = vunpckhpd_avx512vl(auVar15,auVar26);
    auVar26 = vunpckhps_avx512vl(auVar36,auVar33);
    auVar31 = vunpckhps_avx512vl(auVar32,auVar19);
    auVar19 = vunpcklpd_avx512vl(auVar26,auVar31);
    auVar26 = vunpckhpd_avx512vl(auVar26,auVar31);
    auVar31 = vinsertf32x4_avx512vl(auVar27,auVar15._0_16_,1);
    *pauVar6 = auVar31;
    auVar31 = vinsertf32x4_avx512vl(auVar19,auVar26._0_16_,1);
    pauVar6[1] = auVar31;
    auVar15 = vshuff64x2_avx512vl(auVar27,auVar15,3);
    pauVar6[2] = auVar15;
    auVar15 = vshuff64x2_avx512vl(auVar19,auVar26,3);
    pauVar6[3] = auVar15;
    auVar15 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar32,auVar33);
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar36,auVar33);
    auVar26 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar26,auVar15);
    *pauVar1 = auVar26;
    auVar15 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar15,auVar36);
    pauVar1[1] = auVar15;
    auVar33 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar33,auVar36);
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar33,auVar32);
    pauVar1[2] = auVar32;
    pauVar6 = (undefined1 (*) [32])(param_2 + uVar8 * 0xc);
    auVar32 = *(undefined1 (*) [32])(param_2 + uVar8 * 0xc);
    auVar33 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar8 * 0xc);
    auVar36 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar8 * 0xc);
    auVar15 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar32,auVar33);
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar36,auVar33);
    auVar25 = vinsertf32x4_avx512vl(auVar15,auVar26._0_16_,1);
    auVar15 = vshuff64x2_avx512vl(auVar15,auVar26,3);
    auVar32 = vblendps_avx(auVar33,auVar32,0x24);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar32,auVar36);
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar10,
               auVar36);
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar10,
               auVar33);
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar10,
               auVar32);
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar10,
               auVar19);
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar36);
    vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar15,uVar10,auVar33);
    vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar17,uVar10,auVar32);
    pauVar6 = (undefined1 (*) [32])(param_2 + uVar8 * 0xc);
    auVar13 = vxorps_avx512vl(auVar32._0_16_,auVar32._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + param_5));
    auVar25._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar13._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar25._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar13._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar25._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar13._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar25._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar13._12_4_;
    auVar25._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar25._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar25._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar25._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar13 = vxorps_avx512vl(auVar33._0_16_,auVar33._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + param_7));
    auVar15._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar13._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar15._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar13._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar15._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar13._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar15._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar13._12_4_;
    auVar15._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar15._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar15._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar15._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar13 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                              ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                      ._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + uVar8 * 3));
    auVar36._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar13._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar36._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar13._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar36._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar13._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar36._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar13._12_4_;
    auVar36._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar36._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar36._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar36._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
  }
  auVar32 = vmulps_avx512vl(auVar25,auVar24);
  auVar33 = vmulps_avx512vl(auVar15,auVar35);
  auVar36 = vmulps_avx512vl(auVar36,auVar34);
  auVar15 = vmulps_avx512vl(auVar32,auVar22);
  auVar26 = vmulps_avx512vl(auVar33,auVar20);
  auVar27 = vmulps_avx512vl(auVar36,auVar23);
  auVar15 = vfmsub231ps_avx512vl(auVar15,auVar33,auVar23);
  auVar26 = vfmsub231ps_avx512vl(auVar26,auVar36,auVar22);
  auVar27 = vfmsub231ps_avx512vl(auVar27,auVar32,auVar20);
  auVar26 = vaddps_avx512vl(auVar26,auVar26);
  auVar27 = vaddps_avx512vl(auVar27,auVar27);
  auVar15 = vaddps_avx512vl(auVar15,auVar15);
  auVar31 = vbroadcastss_avx512vl(auVar14);
  auVar32 = vfmadd231ps_avx512vl(auVar32,auVar31,auVar26);
  auVar33 = vfmadd231ps_avx512vl(auVar33,auVar31,auVar27);
  auVar36 = vfmadd213ps_avx512vl(auVar31,auVar15,auVar36);
  auVar31 = vmulps_avx512vl(auVar22,auVar26);
  auVar19 = vmulps_avx512vl(auVar20,auVar27);
  auVar25 = vmulps_avx512vl(auVar23,auVar15);
  auVar27 = vfmsub231ps_avx512vl(auVar31,auVar23,auVar27);
  auVar36 = vaddps_avx512vl(auVar36,auVar27);
  auVar15 = vfmsub231ps_avx512vl(auVar19,auVar22,auVar15);
  auVar32 = vaddps_avx512vl(auVar32,auVar15);
  auVar15 = vfmsub231ps_avx512vl(auVar25,auVar20,auVar26);
  auVar33 = vaddps_avx512vl(auVar33,auVar15);
  if (bVar12 == 0xff) {
    auVar15 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar36,auVar33);
    auVar17 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar32,auVar33);
    auVar17 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar17,auVar15);
    *pauVar6 = auVar17;
    lVar9 = uVar8 * 0xc;
    auVar15 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar15,auVar32);
    *(undefined1 (*) [32])(param_2 + 0x20 + lVar9) = auVar15;
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar33,auVar32);
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar32,auVar36);
    *(undefined1 (*) [32])(param_2 + 0x40 + lVar9) = auVar32;
    auVar32 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar9);
    auVar33 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar9);
    pauVar6 = (undefined1 (*) [32])(lVar9 + param_4);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,*(undefined1 (*) [32])(param_4 + lVar9),auVar32);
    auVar15 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar33,auVar32);
    auVar17 = vinsertf32x4_avx512vl(auVar36,auVar15._0_16_,1);
    auVar42 = vshuff64x2_avx512vl(auVar36,auVar15,3);
    auVar32 = vblendps_avx(auVar32,*(undefined1 (*) [32])(param_4 + lVar9),0x24);
    auVar43 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar32,auVar33);
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar32);
    vscatterdps_avx512vl(ZEXT832(pauVar6) + auVar17,uVar10,auVar33);
    vscatterdps_avx512vl(ZEXT832(pauVar6) + auVar18,uVar10,auVar36);
    pauVar6 = (undefined1 (*) [32])(param_4 + uVar8 * 0xc);
    auVar14 = vxorps_avx512vl(auVar36._0_16_,auVar36._0_16_);
    auVar36 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + param_5));
    auVar17._0_4_ = (uint)(bVar12 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar14._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar17._4_4_ = (uint)bVar5 * auVar36._4_4_ | (uint)!bVar5 * auVar14._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar17._8_4_ = (uint)bVar5 * auVar36._8_4_ | (uint)!bVar5 * auVar14._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar17._12_4_ = (uint)bVar5 * auVar36._12_4_ | (uint)!bVar5 * auVar14._12_4_;
    auVar17._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar36._16_4_;
    auVar17._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar36._20_4_;
    auVar17._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar36._24_4_;
    auVar17._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar36._28_4_;
    auVar14 = vxorps_avx512vl(auVar32._0_16_,auVar32._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + uVar8 * 3));
    auVar42._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar14._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar42._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar14._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar42._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar14._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar42._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar14._12_4_;
    auVar42._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar42._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar42._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar42._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar14 = vxorps_avx512vl(auVar33._0_16_,auVar33._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + (longlong)*pauVar6));
    auVar43._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar14._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar43._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar14._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar43._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar14._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar43._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar14._12_4_;
    auVar43._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar43._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar43._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar43._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
  }
  auVar32 = vmulps_avx512vl(auVar17,auVar24);
  auVar33 = vmulps_avx512vl(auVar42,auVar35);
  auVar35 = vmulps_avx512vl(auVar43,auVar34);
  auVar34 = vmulps_avx512vl(auVar32,auVar22);
  auVar36 = vmulps_avx512vl(auVar33,auVar20);
  auVar15 = vmulps_avx512vl(auVar35,auVar23);
  auVar34 = vfmsub231ps_avx512vl(auVar34,auVar33,auVar23);
  auVar36 = vfmsub231ps_avx512vl(auVar36,auVar35,auVar22);
  auVar15 = vfmsub231ps_avx512vl(auVar15,auVar32,auVar20);
  auVar36 = vaddps_avx512vl(auVar36,auVar36);
  auVar15 = vaddps_avx512vl(auVar15,auVar15);
  auVar34 = vaddps_avx512vl(auVar34,auVar34);
  auVar32 = vfmadd231ps_avx512vl(auVar32,auVar21,auVar36);
  auVar33 = vfmadd231ps_avx512vl(auVar33,auVar21,auVar15);
  auVar35 = vfmadd213ps_avx512vl(auVar21,auVar34,auVar35);
  auVar17 = vmulps_avx512vl(auVar22,auVar36);
  auVar18 = vmulps_avx512vl(auVar20,auVar15);
  auVar26 = vmulps_avx512vl(auVar23,auVar34);
  auVar15 = vfmsub231ps_avx512vl(auVar17,auVar23,auVar15);
  auVar35 = vaddps_avx512vl(auVar35,auVar15);
  auVar34 = vfmsub231ps_avx512vl(auVar18,auVar22,auVar34);
  auVar32 = vaddps_avx512vl(auVar32,auVar34);
  auVar34 = vfmsub231ps_avx512vl(auVar26,auVar20,auVar36);
  auVar33 = vaddps_avx512vl(auVar33,auVar34);
  auVar32 = vaddps_avx512vl(auVar38,auVar32);
  auVar33 = vaddps_avx512vl(auVar39,auVar33);
  auVar35 = vaddps_avx512vl(auVar37,auVar35);
  auVar32 = vsubps_avx512vl(auVar32,auVar40);
  auVar33 = vsubps_avx512vl(auVar33,auVar41);
  auVar35 = vsubps_avx512vl(auVar35,auVar16);
  if (bVar12 == 0xff) {
    auVar34 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar35,auVar33);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar32,auVar33);
    auVar36 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar36,auVar34);
    *pauVar6 = auVar36;
    lVar9 = uVar8 * 0xc;
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar34,auVar32);
    *(undefined1 (*) [32])(param_4 + 0x20 + lVar9) = auVar34;
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar33,auVar32);
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar34,auVar35);
    *(undefined1 (*) [32])(param_4 + 0x40 + lVar9) = auVar34;
    auVar34 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar9);
    auVar36 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar9);
    auVar37 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,*(undefined1 (*) [32])(param_7 + lVar9),auVar34);
    auVar38 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar36,auVar34);
    auVar40 = vinsertf32x4_avx512vl(auVar37,auVar38._0_16_,1);
    auVar37 = vshuff64x2_avx512vl(auVar37,auVar38,3);
    auVar34 = vblendps_avx(auVar34,*(undefined1 (*) [32])(param_7 + lVar9),0x24);
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar34,auVar36);
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar32);
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar33);
    vscatterdps_avx512vl(ZEXT832(pauVar6) + auVar32,uVar10,auVar35);
    param_7 = param_7 + uVar8 * 0xc;
    auVar34 = vgatherdps_avx512vl(*(undefined4 *)(param_7 + param_5));
    auVar40._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar34._4_4_;
    auVar40._0_4_ = (uint)(bVar12 & 1) * auVar34._0_4_;
    auVar40._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar34._8_4_;
    auVar40._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar34._12_4_;
    auVar40._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar34._16_4_;
    auVar40._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar34._20_4_;
    auVar40._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar34._24_4_;
    auVar40._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar34._28_4_;
    auVar34 = vgatherdps_avx512vl(*(undefined4 *)(param_7 + param_5));
    auVar37._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar34._4_4_;
    auVar37._0_4_ = (uint)(bVar12 & 1) * auVar34._0_4_;
    auVar37._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar34._8_4_;
    auVar37._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar34._12_4_;
    auVar37._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar34._16_4_;
    auVar37._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar34._20_4_;
    auVar37._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar34._24_4_;
    auVar37._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar34._28_4_;
    auVar14 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                              ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                      ._0_16_);
    auVar36 = vgatherdps_avx512vl(*(undefined4 *)((longlong)local_e8 + param_7));
    auVar34._0_4_ = (uint)(bVar12 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar14._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar34._4_4_ = (uint)bVar5 * auVar36._4_4_ | (uint)!bVar5 * auVar14._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar34._8_4_ = (uint)bVar5 * auVar36._8_4_ | (uint)!bVar5 * auVar14._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar34._12_4_ = (uint)bVar5 * auVar36._12_4_ | (uint)!bVar5 * auVar14._12_4_;
    auVar34._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar36._16_4_;
    auVar34._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar36._20_4_;
    auVar34._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar36._24_4_;
    auVar34._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar36._28_4_;
  }
  auVar32 = vsubps_avx(auVar40,auVar32);
  auVar33 = vsubps_avx(auVar37,auVar33);
  auVar35 = vsubps_avx512vl(auVar34,auVar35);
  auVar38._4_4_ = param_10;
  auVar38._0_4_ = param_10;
  auVar38._8_4_ = param_10;
  auVar38._12_4_ = param_10;
  auVar38._16_4_ = param_10;
  auVar38._20_4_ = param_10;
  auVar38._24_4_ = param_10;
  auVar38._28_4_ = param_10;
  auVar32 = vdivps_avx(auVar32,auVar38);
  auVar33 = vdivps_avx(auVar33,auVar38);
  auVar35 = vdivps_avx(auVar35,auVar38);
  pauVar1 = (undefined1 (*) [32])(param_5 + uVar8 * 0xc);
  if (bVar12 == 0xff) {
    auVar34 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar35,auVar33);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar32,auVar33);
    auVar36 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar36,auVar34);
    *pauVar1 = auVar36;
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar34,auVar32);
    pauVar1[1] = auVar34;
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar33,auVar32);
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar32,auVar35);
    pauVar1[2] = auVar32;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar32);
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar10,
               auVar33);
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar10,
               auVar35);
  }
  return;
}

// ApplyAnimationPreSimulationTransform___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_avx512skx @ 140ccb540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAnimationPreSimulationTransform___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint *param_4,undefined4 *param_5
               ,uint param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
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
  undefined4 local_48 [14];
  
  auVar33 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar32 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar31 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar30 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar29 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar28 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar27 = ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000;
  auVar26 = ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a;
  auVar25 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar24 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar23 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  uVar6 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar6 = param_7;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar38._4_4_ = param_6;
    auVar38._0_4_ = param_6;
    auVar38._8_4_ = param_6;
    auVar38._12_4_ = param_6;
    auVar38._16_4_ = param_6;
    auVar38._20_4_ = param_6;
    auVar38._24_4_ = param_6;
    auVar38._28_4_ = param_6;
    lVar7 = 0x40;
    uVar9 = 0;
    do {
      auVar12 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar14 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar14,auVar12,0x24);
      auVar12 = vpermt2ps_avx512vl(auVar12,auVar23,auVar14);
      auVar13 = vpermt2ps_avx512vl(auVar15,auVar25,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar14 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar7),auVar24,auVar14);
      auVar15 = vinsertf32x4_avx512vl(auVar12,auVar14._0_16_,1);
      auVar16 = vshuff64x2_avx512vl(auVar12,auVar14,3);
      uVar2 = param_4[8];
      auVar12._4_4_ = uVar2;
      auVar12._0_4_ = uVar2;
      auVar12._8_4_ = uVar2;
      auVar12._12_4_ = uVar2;
      auVar12._16_4_ = uVar2;
      auVar12._20_4_ = uVar2;
      auVar12._24_4_ = uVar2;
      auVar12._28_4_ = uVar2;
      auVar12 = vmulps_avx512vl(auVar15,auVar12);
      uVar2 = param_4[9];
      auVar14._4_4_ = uVar2;
      auVar14._0_4_ = uVar2;
      auVar14._8_4_ = uVar2;
      auVar14._12_4_ = uVar2;
      auVar14._16_4_ = uVar2;
      auVar14._20_4_ = uVar2;
      auVar14._24_4_ = uVar2;
      auVar14._28_4_ = uVar2;
      auVar14 = vmulps_avx512vl(auVar16,auVar14);
      uVar2 = param_4[10];
      auVar15._4_4_ = uVar2;
      auVar15._0_4_ = uVar2;
      auVar15._8_4_ = uVar2;
      auVar15._12_4_ = uVar2;
      auVar15._16_4_ = uVar2;
      auVar15._20_4_ = uVar2;
      auVar15._24_4_ = uVar2;
      auVar15._28_4_ = uVar2;
      auVar15 = vmulps_avx512vl(auVar13,auVar15);
      auVar13 = vbroadcastss_avx512vl(ZEXT416(param_4[3]));
      auVar16 = vbroadcastss_avx512vl(ZEXT416(param_4[1]));
      auVar17 = vbroadcastss_avx512vl(ZEXT416(param_4[2]));
      auVar18 = vbroadcastss_avx512vl(ZEXT416(*param_4));
      auVar19 = vmulps_avx512vl(auVar12,auVar16);
      auVar20 = vmulps_avx512vl(auVar14,auVar17);
      auVar21 = vmulps_avx512vl(auVar15,auVar18);
      auVar19 = vfmsub231ps_avx512vl(auVar19,auVar14,auVar18);
      auVar20 = vfmsub231ps_avx512vl(auVar20,auVar15,auVar16);
      auVar21 = vfmsub231ps_avx512vl(auVar21,auVar12,auVar17);
      auVar20 = vaddps_avx512vl(auVar20,auVar20);
      auVar41._0_4_ = auVar21._0_4_ + auVar21._0_4_;
      auVar41._4_4_ = auVar21._4_4_ + auVar21._4_4_;
      auVar41._8_4_ = auVar21._8_4_ + auVar21._8_4_;
      auVar41._12_4_ = auVar21._12_4_ + auVar21._12_4_;
      auVar41._16_4_ = auVar21._16_4_ + auVar21._16_4_;
      auVar41._20_4_ = auVar21._20_4_ + auVar21._20_4_;
      auVar41._24_4_ = auVar21._24_4_ + auVar21._24_4_;
      auVar41._28_4_ = auVar21._28_4_ + auVar21._28_4_;
      auVar19 = vaddps_avx512vl(auVar19,auVar19);
      auVar12 = vfmadd231ps_avx512vl(auVar12,auVar13,auVar20);
      auVar14 = vfmadd231ps_avx512vl(auVar14,auVar13,auVar41);
      auVar15 = vfmadd213ps_avx512vl(auVar13,auVar19,auVar15);
      auVar13 = vmulps_avx512vl(auVar16,auVar20);
      auVar21 = vmulps_avx512vl(auVar17,auVar41);
      auVar22 = vmulps_avx512vl(auVar18,auVar19);
      auVar13 = vfmsub231ps_avx512vl(auVar13,auVar18,auVar41);
      auVar15 = vaddps_avx512vl(auVar15,auVar13);
      auVar13 = vfmsub231ps_avx512vl(auVar21,auVar16,auVar19);
      auVar12 = vaddps_avx512vl(auVar12,auVar13);
      auVar13 = vfmsub231ps_avx512vl(auVar22,auVar17,auVar20);
      auVar14 = vaddps_avx512vl(auVar14,auVar13);
      uVar2 = param_4[4];
      auVar13._4_4_ = uVar2;
      auVar13._0_4_ = uVar2;
      auVar13._8_4_ = uVar2;
      auVar13._12_4_ = uVar2;
      auVar13._16_4_ = uVar2;
      auVar13._20_4_ = uVar2;
      auVar13._24_4_ = uVar2;
      auVar13._28_4_ = uVar2;
      auVar12 = vaddps_avx512vl(auVar12,auVar13);
      uVar2 = param_4[5];
      auVar16._4_4_ = uVar2;
      auVar16._0_4_ = uVar2;
      auVar16._8_4_ = uVar2;
      auVar16._12_4_ = uVar2;
      auVar16._16_4_ = uVar2;
      auVar16._20_4_ = uVar2;
      auVar16._24_4_ = uVar2;
      auVar16._28_4_ = uVar2;
      auVar14 = vaddps_avx512vl(auVar14,auVar16);
      uVar2 = param_4[6];
      auVar17._4_4_ = uVar2;
      auVar17._0_4_ = uVar2;
      auVar17._8_4_ = uVar2;
      auVar17._12_4_ = uVar2;
      auVar17._16_4_ = uVar2;
      auVar17._20_4_ = uVar2;
      auVar17._24_4_ = uVar2;
      auVar17._28_4_ = uVar2;
      auVar15 = vaddps_avx512vl(auVar15,auVar17);
      uVar3 = *param_5;
      auVar18._4_4_ = uVar3;
      auVar18._0_4_ = uVar3;
      auVar18._8_4_ = uVar3;
      auVar18._12_4_ = uVar3;
      auVar18._16_4_ = uVar3;
      auVar18._20_4_ = uVar3;
      auVar18._24_4_ = uVar3;
      auVar18._28_4_ = uVar3;
      auVar13 = vsubps_avx512vl(auVar12,auVar18);
      uVar3 = param_5[1];
      auVar19._4_4_ = uVar3;
      auVar19._0_4_ = uVar3;
      auVar19._8_4_ = uVar3;
      auVar19._12_4_ = uVar3;
      auVar19._16_4_ = uVar3;
      auVar19._20_4_ = uVar3;
      auVar19._24_4_ = uVar3;
      auVar19._28_4_ = uVar3;
      auVar16 = vsubps_avx512vl(auVar14,auVar19);
      uVar3 = param_5[2];
      auVar20._4_4_ = uVar3;
      auVar20._0_4_ = uVar3;
      auVar20._8_4_ = uVar3;
      auVar20._12_4_ = uVar3;
      auVar20._16_4_ = uVar3;
      auVar20._20_4_ = uVar3;
      auVar20._24_4_ = uVar3;
      auVar20._28_4_ = uVar3;
      auVar15 = vsubps_avx512vl(auVar15,auVar20);
      auVar12 = vpermt2ps_avx512vl(auVar15,auVar28,auVar16);
      auVar14 = vpermt2ps_avx512vl(auVar13,auVar29,auVar16);
      auVar14 = vpermt2ps_avx512vl(auVar14,auVar30,auVar12);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar7) = auVar14;
      auVar12 = vpermt2ps_avx512vl(auVar12,auVar31,auVar13);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar7) = auVar12;
      auVar12 = vpermt2ps_avx512vl(auVar16,auVar32,auVar13);
      auVar12 = vpermt2ps_avx512vl(auVar12,auVar33,auVar15);
      *(undefined1 (*) [32])(param_1 + lVar7) = auVar12;
      auVar12 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar7);
      auVar14 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar7);
      auVar17 = vpermt2ps_avx512vl(auVar12,auVar23,auVar14);
      auVar18 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar7),auVar24,auVar14);
      auVar19 = vinsertf32x4_avx512vl(auVar17,auVar18._0_16_,1);
      auVar17 = vshuff64x2_avx512vl(auVar17,auVar18,3);
      auVar12 = vpermt2ps_avx512vl(auVar14,auVar26,auVar12);
      auVar12 = vpermt2ps_avx512vl(auVar12,auVar27,*(undefined1 (*) [32])(param_3 + lVar7));
      auVar14 = vsubps_avx512vl(auVar19,auVar13);
      auVar13 = vsubps_avx512vl(auVar17,auVar16);
      auVar12 = vsubps_avx512vl(auVar12,auVar15);
      auVar14 = vdivps_avx512vl(auVar14,auVar38);
      auVar15 = vdivps_avx512vl(auVar13,auVar38);
      auVar12 = vdivps_avx512vl(auVar12,auVar38);
      auVar13 = vpermt2ps_avx512vl(auVar12,auVar28,auVar15);
      auVar16 = vpermt2ps_avx512vl(auVar14,auVar29,auVar15);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar30,auVar13);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar7) = auVar16;
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar31,auVar14);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar7) = auVar13;
      auVar14 = vpermt2ps_avx512vl(auVar15,auVar32,auVar14);
      auVar12 = vpermt2ps_avx512vl(auVar14,auVar33,auVar12);
      *(undefined1 (*) [32])(param_2 + lVar7) = auVar12;
      lVar7 = lVar7 + 0x60;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)(uVar6 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar9) {
      return;
    }
  }
  auVar23 = vpbroadcastd_avx512vl();
  auVar23 = vpor_avx2(auVar23,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar24 = vpbroadcastd_avx512vl();
  uVar5 = vpcmpgtd_avx512vl(auVar24,auVar23);
  uVar8 = (ulonglong)uVar9;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar8 * 0xc);
  bVar10 = (byte)uVar5;
  if (bVar10 == 0xff) {
    auVar23 = pauVar1[1];
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,*pauVar1,auVar23);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,pauVar1[2],auVar23);
    auVar26 = vinsertf32x4_avx512vl(auVar24,auVar25._0_16_,1);
    auVar24 = vshuff64x2_avx512vl(auVar24,auVar25,3);
    auVar23 = vblendps_avx(auVar23,*pauVar1,0x24);
    auVar23 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar23,pauVar1[2]);
  }
  else {
    auVar23 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_2));
    auVar26._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar23._4_4_;
    auVar26._0_4_ = (uint)(bVar10 & 1) * auVar23._0_4_;
    auVar26._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar23._8_4_;
    auVar26._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar23._12_4_;
    auVar26._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar23._16_4_;
    auVar26._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar23._20_4_;
    auVar26._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar23._24_4_;
    auVar26._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar23._28_4_;
    auVar23 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
    auVar24._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar23._4_4_;
    auVar24._0_4_ = (uint)(bVar10 & 1) * auVar23._0_4_;
    auVar24._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar23._8_4_;
    auVar24._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar23._12_4_;
    auVar24._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar23._16_4_;
    auVar24._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar23._20_4_;
    auVar24._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar23._24_4_;
    auVar24._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar23._28_4_;
    auVar25 = vgatherdps_avx512vl(*(undefined4 *)*pauVar1);
    auVar23._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar25._4_4_;
    auVar23._0_4_ = (uint)(bVar10 & 1) * auVar25._0_4_;
    auVar23._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar25._8_4_;
    auVar23._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar25._12_4_;
    auVar23._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar25._16_4_;
    auVar23._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar25._20_4_;
    auVar23._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar25._24_4_;
    auVar23._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar25._28_4_;
  }
  uVar6 = param_4[8];
  auVar25._4_4_ = uVar6;
  auVar25._0_4_ = uVar6;
  auVar25._8_4_ = uVar6;
  auVar25._12_4_ = uVar6;
  auVar25._16_4_ = uVar6;
  auVar25._20_4_ = uVar6;
  auVar25._24_4_ = uVar6;
  auVar25._28_4_ = uVar6;
  auVar25 = vmulps_avx512vl(auVar26,auVar25);
  uVar6 = param_4[9];
  auVar27._4_4_ = uVar6;
  auVar27._0_4_ = uVar6;
  auVar27._8_4_ = uVar6;
  auVar27._12_4_ = uVar6;
  auVar27._16_4_ = uVar6;
  auVar27._20_4_ = uVar6;
  auVar27._24_4_ = uVar6;
  auVar27._28_4_ = uVar6;
  auVar24 = vmulps_avx512vl(auVar24,auVar27);
  uVar6 = param_4[10];
  auVar28._4_4_ = uVar6;
  auVar28._0_4_ = uVar6;
  auVar28._8_4_ = uVar6;
  auVar28._12_4_ = uVar6;
  auVar28._16_4_ = uVar6;
  auVar28._20_4_ = uVar6;
  auVar28._24_4_ = uVar6;
  auVar28._28_4_ = uVar6;
  auVar23 = vmulps_avx512vl(auVar23,auVar28);
  uVar6 = param_4[3];
  auVar39._4_4_ = uVar6;
  auVar39._0_4_ = uVar6;
  auVar39._8_4_ = uVar6;
  auVar39._12_4_ = uVar6;
  auVar39._16_4_ = uVar6;
  auVar39._20_4_ = uVar6;
  auVar39._24_4_ = uVar6;
  auVar39._28_4_ = uVar6;
  uVar6 = param_4[1];
  auVar40._4_4_ = uVar6;
  auVar40._0_4_ = uVar6;
  auVar40._8_4_ = uVar6;
  auVar40._12_4_ = uVar6;
  auVar40._16_4_ = uVar6;
  auVar40._20_4_ = uVar6;
  auVar40._24_4_ = uVar6;
  auVar40._28_4_ = uVar6;
  auVar26 = vbroadcastss_avx512vl(ZEXT416(param_4[2]));
  auVar27 = vbroadcastss_avx512vl(ZEXT416(*param_4));
  auVar28 = vmulps_avx512vl(auVar25,auVar40);
  auVar29 = vmulps_avx512vl(auVar24,auVar26);
  auVar30 = vmulps_avx512vl(auVar23,auVar27);
  auVar28 = vfmsub231ps_avx512vl(auVar28,auVar24,auVar27);
  auVar29 = vfmsub231ps_avx512vl(auVar29,auVar23,auVar40);
  auVar30 = vfmsub231ps_avx512vl(auVar30,auVar25,auVar26);
  auVar29 = vaddps_avx512vl(auVar29,auVar29);
  auVar30 = vaddps_avx512vl(auVar30,auVar30);
  auVar28 = vaddps_avx512vl(auVar28,auVar28);
  auVar25 = vfmadd231ps_avx512vl(auVar25,auVar39,auVar29);
  auVar24 = vfmadd231ps_avx512vl(auVar24,auVar39,auVar30);
  auVar23 = vfmadd213ps_avx512vl(auVar39,auVar28,auVar23);
  auVar31 = vmulps_avx512vl(auVar40,auVar29);
  auVar32 = vmulps_avx512vl(auVar26,auVar30);
  auVar33 = vmulps_avx512vl(auVar27,auVar28);
  auVar27 = vfmsub231ps_avx512vl(auVar31,auVar27,auVar30);
  auVar22._0_4_ = auVar23._0_4_ + auVar27._0_4_;
  auVar22._4_4_ = auVar23._4_4_ + auVar27._4_4_;
  auVar22._8_4_ = auVar23._8_4_ + auVar27._8_4_;
  auVar22._12_4_ = auVar23._12_4_ + auVar27._12_4_;
  auVar22._16_4_ = auVar23._16_4_ + auVar27._16_4_;
  auVar22._20_4_ = auVar23._20_4_ + auVar27._20_4_;
  auVar22._24_4_ = auVar23._24_4_ + auVar27._24_4_;
  auVar22._28_4_ = auVar23._28_4_ + auVar27._28_4_;
  auVar23 = vfmsub231ps_avx512vl(auVar32,auVar40,auVar28);
  auVar23 = vaddps_avx512vl(auVar25,auVar23);
  auVar25 = vfmsub231ps_avx512vl(auVar33,auVar26,auVar29);
  auVar24 = vaddps_avx512vl(auVar24,auVar25);
  uVar6 = param_4[4];
  auVar29._4_4_ = uVar6;
  auVar29._0_4_ = uVar6;
  auVar29._8_4_ = uVar6;
  auVar29._12_4_ = uVar6;
  auVar29._16_4_ = uVar6;
  auVar29._20_4_ = uVar6;
  auVar29._24_4_ = uVar6;
  auVar29._28_4_ = uVar6;
  auVar23 = vaddps_avx512vl(auVar23,auVar29);
  uVar6 = param_4[5];
  auVar30._4_4_ = uVar6;
  auVar30._0_4_ = uVar6;
  auVar30._8_4_ = uVar6;
  auVar30._12_4_ = uVar6;
  auVar30._16_4_ = uVar6;
  auVar30._20_4_ = uVar6;
  auVar30._24_4_ = uVar6;
  auVar30._28_4_ = uVar6;
  auVar24 = vaddps_avx512vl(auVar24,auVar30);
  uVar6 = param_4[6];
  auVar31._4_4_ = uVar6;
  auVar31._0_4_ = uVar6;
  auVar31._8_4_ = uVar6;
  auVar31._12_4_ = uVar6;
  auVar31._16_4_ = uVar6;
  auVar31._20_4_ = uVar6;
  auVar31._24_4_ = uVar6;
  auVar31._28_4_ = uVar6;
  auVar25 = vaddps_avx512vl(auVar22,auVar31);
  uVar3 = *param_5;
  auVar32._4_4_ = uVar3;
  auVar32._0_4_ = uVar3;
  auVar32._8_4_ = uVar3;
  auVar32._12_4_ = uVar3;
  auVar32._16_4_ = uVar3;
  auVar32._20_4_ = uVar3;
  auVar32._24_4_ = uVar3;
  auVar32._28_4_ = uVar3;
  auVar23 = vsubps_avx512vl(auVar23,auVar32);
  uVar3 = param_5[1];
  auVar33._4_4_ = uVar3;
  auVar33._0_4_ = uVar3;
  auVar33._8_4_ = uVar3;
  auVar33._12_4_ = uVar3;
  auVar33._16_4_ = uVar3;
  auVar33._20_4_ = uVar3;
  auVar33._24_4_ = uVar3;
  auVar33._28_4_ = uVar3;
  auVar24 = vsubps_avx512vl(auVar24,auVar33);
  uVar3 = param_5[2];
  auVar21._4_4_ = uVar3;
  auVar21._0_4_ = uVar3;
  auVar21._8_4_ = uVar3;
  auVar21._12_4_ = uVar3;
  auVar21._16_4_ = uVar3;
  auVar21._20_4_ = uVar3;
  auVar21._24_4_ = uVar3;
  auVar21._28_4_ = uVar3;
  auVar25 = vsubps_avx512vl(auVar25,auVar21);
  if (bVar10 == 0xff) {
    auVar26 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar25,auVar24);
    auVar27 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar23,auVar24);
    auVar27 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar27,auVar26);
    *pauVar1 = auVar27;
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar26,auVar23);
    pauVar1[1] = auVar26;
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar24,auVar23);
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar26,auVar25);
    pauVar1[2] = auVar26;
    auVar26 = *(undefined1 (*) [32])(param_3 + uVar8 * 0xc);
    auVar27 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar8 * 0xc);
    auVar28 = *(undefined1 (*) [32])(param_3 + 0x40 + uVar8 * 0xc);
    auVar29 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar26,auVar27);
    auVar30 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar28,auVar27);
    auVar34 = vinsertf32x4_avx512vl(auVar29,auVar30._0_16_,1);
    auVar35 = vshuff64x2_avx512vl(auVar29,auVar30,3);
    auVar26 = vblendps_avx(auVar27,auVar26,0x24);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar26,auVar28);
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,auVar23
              );
    vscatterdps_avx512vl(ZEXT832(pauVar1) + ZEXT432(param_6),uVar5,auVar24);
    vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar23,uVar5,auVar25);
    param_3 = param_3 + uVar8 * 0xc;
    auVar26 = vgatherdps_avx512vl(*(undefined4 *)(param_3 + unaff_RBP));
    auVar34._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar26._4_4_;
    auVar34._0_4_ = (uint)(bVar10 & 1) * auVar26._0_4_;
    auVar34._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar26._8_4_;
    auVar34._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar26._12_4_;
    auVar34._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
    auVar34._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
    auVar34._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
    auVar34._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar26._28_4_;
    auVar26 = vgatherdps_avx512vl(*(undefined4 *)((longlong)local_48 + param_3));
    auVar35._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar26._4_4_;
    auVar35._0_4_ = (uint)(bVar10 & 1) * auVar26._0_4_;
    auVar35._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar26._8_4_;
    auVar35._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar26._12_4_;
    auVar35._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
    auVar35._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
    auVar35._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
    auVar35._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar26._28_4_;
    auVar11 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                              ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                      ._0_16_);
    auVar26 = vgatherdps_avx512vl(*(undefined4 *)(param_3 + uVar5));
    auVar36._0_4_ = (uint)(bVar10 & 1) * auVar26._0_4_ | (uint)!(bool)(bVar10 & 1) * auVar11._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar36._4_4_ = (uint)bVar4 * auVar26._4_4_ | (uint)!bVar4 * auVar11._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar36._8_4_ = (uint)bVar4 * auVar26._8_4_ | (uint)!bVar4 * auVar11._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar36._12_4_ = (uint)bVar4 * auVar26._12_4_ | (uint)!bVar4 * auVar11._12_4_;
    auVar36._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
    auVar36._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
    auVar36._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
    auVar36._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar26._28_4_;
  }
  auVar23 = vsubps_avx(auVar34,auVar23);
  auVar24 = vsubps_avx(auVar35,auVar24);
  auVar25 = vsubps_avx512vl(auVar36,auVar25);
  auVar37._4_4_ = param_6;
  auVar37._0_4_ = param_6;
  auVar37._8_4_ = param_6;
  auVar37._12_4_ = param_6;
  auVar37._16_4_ = param_6;
  auVar37._20_4_ = param_6;
  auVar37._24_4_ = param_6;
  auVar37._28_4_ = param_6;
  auVar23 = vdivps_avx(auVar23,auVar37);
  auVar24 = vdivps_avx(auVar24,auVar37);
  auVar25 = vdivps_avx(auVar25,auVar37);
  pauVar1 = (undefined1 (*) [32])(param_2 + uVar8 * 0xc);
  if (bVar10 == 0xff) {
    auVar26 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar25,auVar24);
    auVar27 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar23,auVar24);
    auVar27 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar27,auVar26);
    *pauVar1 = auVar27;
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar26,auVar23);
    pauVar1[1] = auVar26;
    auVar23 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar24,auVar23);
    auVar23 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar23,auVar25);
    pauVar1[2] = auVar23;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,auVar23
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar5,auVar24
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar5,auVar25
              );
  }
  return;
}

// ApplyPreSimulationTransformAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuniCunf_avx512skx @ 140ccbc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuniCunf_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,uint *param_8,uint *param_9,undefined4 param_10,
               uint param_11,undefined4 param_12)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  byte bVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
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
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar25 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 in_ZMM12 [64];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  
  auVar48 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar47 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar45 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar46 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar44 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar43 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar26 = in_ZMM12._0_32_;
  uVar20 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar20 = param_11;
  }
  if ((int)(uVar20 & 0xfffffff8) < 1) {
    uVar19 = 0;
  }
  else {
    auVar49._4_4_ = param_12;
    auVar49._0_4_ = param_12;
    auVar49._8_4_ = param_12;
    auVar49._12_4_ = param_12;
    auVar49._16_4_ = param_12;
    auVar49._20_4_ = param_12;
    auVar49._24_4_ = param_12;
    auVar49._28_4_ = param_12;
    lVar18 = 0x10;
    uVar19 = 0;
    uVar16 = 0;
    do {
      auVar41 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
      auVar42 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
      auVar26 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar18 * 4);
      auVar28 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar18 * 4);
      auVar29 = *(undefined1 (*) [32])(param_3 + lVar18 * 4);
      auVar27 = vblendps_avx(auVar28,auVar26,0x24);
      auVar26 = vpermt2ps_avx512vl(auVar26,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar28);
      auVar27 = vpermt2ps_avx512vl(auVar27,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar29);
      auVar28 = vpermt2ps_avx512vl(auVar29,auVar43,auVar28);
      auVar29 = vinsertf32x4_avx512vl(auVar26,auVar28._0_16_,1);
      auVar30 = vbroadcastss_avx512vl(ZEXT416(param_8[8]));
      auVar26 = vshuff64x2_avx512vl(auVar26,auVar28,3);
      auVar28 = vmulps_avx512vl(auVar29,auVar30);
      auVar31 = vbroadcastss_avx512vl(ZEXT416(param_8[9]));
      fVar2 = (float)param_8[10];
      auVar58._4_4_ = fVar2;
      auVar58._0_4_ = fVar2;
      auVar58._8_4_ = fVar2;
      auVar58._12_4_ = fVar2;
      auVar58._16_4_ = fVar2;
      auVar58._20_4_ = fVar2;
      auVar58._24_4_ = fVar2;
      auVar58._28_4_ = fVar2;
      auVar26 = vmulps_avx512vl(auVar26,auVar31);
      auVar37._0_4_ = auVar27._0_4_ * fVar2;
      auVar37._4_4_ = auVar27._4_4_ * fVar2;
      auVar37._8_4_ = auVar27._8_4_ * fVar2;
      auVar37._12_4_ = auVar27._12_4_ * fVar2;
      auVar37._16_4_ = auVar27._16_4_ * fVar2;
      auVar37._20_4_ = auVar27._20_4_ * fVar2;
      auVar37._24_4_ = auVar27._24_4_ * fVar2;
      auVar37._28_4_ = auVar27._28_4_ * fVar2;
      auVar32 = vbroadcastss_avx512vl(ZEXT416(param_8[3]));
      auVar33 = vbroadcastss_avx512vl(ZEXT416(param_8[1]));
      auVar34 = vbroadcastss_avx512vl(ZEXT416(param_8[2]));
      auVar35 = vbroadcastss_avx512vl(ZEXT416(*param_8));
      auVar29 = vmulps_avx512vl(auVar28,auVar33);
      auVar27 = vmulps_avx512vl(auVar26,auVar34);
      auVar36 = vmulps_avx512vl(auVar37,auVar35);
      auVar29 = vfmsub231ps_avx512vl(auVar29,auVar26,auVar35);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar37,auVar33);
      auVar36 = vfmsub231ps_avx512vl(auVar36,auVar28,auVar34);
      auVar39._0_4_ = auVar27._0_4_ + auVar27._0_4_;
      auVar39._4_4_ = auVar27._4_4_ + auVar27._4_4_;
      auVar39._8_4_ = auVar27._8_4_ + auVar27._8_4_;
      auVar39._12_4_ = auVar27._12_4_ + auVar27._12_4_;
      auVar39._16_4_ = auVar27._16_4_ + auVar27._16_4_;
      auVar39._20_4_ = auVar27._20_4_ + auVar27._20_4_;
      auVar39._24_4_ = auVar27._24_4_ + auVar27._24_4_;
      auVar39._28_4_ = auVar27._28_4_ + auVar27._28_4_;
      auVar40._0_4_ = auVar36._0_4_ + auVar36._0_4_;
      auVar40._4_4_ = auVar36._4_4_ + auVar36._4_4_;
      auVar40._8_4_ = auVar36._8_4_ + auVar36._8_4_;
      auVar40._12_4_ = auVar36._12_4_ + auVar36._12_4_;
      auVar40._16_4_ = auVar36._16_4_ + auVar36._16_4_;
      auVar40._20_4_ = auVar36._20_4_ + auVar36._20_4_;
      auVar40._24_4_ = auVar36._24_4_ + auVar36._24_4_;
      auVar40._28_4_ = auVar36._28_4_ + auVar36._28_4_;
      auVar38._0_4_ = auVar29._0_4_ + auVar29._0_4_;
      auVar38._4_4_ = auVar29._4_4_ + auVar29._4_4_;
      auVar38._8_4_ = auVar29._8_4_ + auVar29._8_4_;
      auVar38._12_4_ = auVar29._12_4_ + auVar29._12_4_;
      auVar38._16_4_ = auVar29._16_4_ + auVar29._16_4_;
      auVar38._20_4_ = auVar29._20_4_ + auVar29._20_4_;
      auVar38._24_4_ = auVar29._24_4_ + auVar29._24_4_;
      auVar38._28_4_ = auVar29._28_4_ + auVar29._28_4_;
      auVar28 = vfmadd231ps_avx512vl(auVar28,auVar32,auVar39);
      auVar26 = vfmadd231ps_avx512vl(auVar26,auVar32,auVar40);
      auVar29 = vfmadd231ps_avx512vl(auVar37,auVar32,auVar38);
      auVar27 = vmulps_avx512vl(auVar33,auVar39);
      auVar36 = vmulps_avx512vl(auVar34,auVar40);
      auVar37 = vmulps_avx512vl(auVar35,auVar38);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar35,auVar40);
      auVar36 = vfmsub231ps_avx512vl(auVar36,auVar33,auVar38);
      auVar37 = vfmsub231ps_avx512vl(auVar37,auVar34,auVar39);
      fVar3 = (float)param_8[4];
      fVar4 = (float)param_8[5];
      fVar5 = (float)param_8[6];
      auVar61._0_4_ = auVar36._0_4_ + auVar28._0_4_ + fVar3;
      auVar61._4_4_ = auVar36._4_4_ + auVar28._4_4_ + fVar3;
      auVar61._8_4_ = auVar36._8_4_ + auVar28._8_4_ + fVar3;
      auVar61._12_4_ = auVar36._12_4_ + auVar28._12_4_ + fVar3;
      auVar61._16_4_ = auVar36._16_4_ + auVar28._16_4_ + fVar3;
      auVar61._20_4_ = auVar36._20_4_ + auVar28._20_4_ + fVar3;
      auVar61._24_4_ = auVar36._24_4_ + auVar28._24_4_ + fVar3;
      auVar61._28_4_ = auVar36._28_4_ + auVar28._28_4_ + fVar3;
      auVar36._0_4_ = fVar4 + auVar26._0_4_ + auVar37._0_4_;
      auVar36._4_4_ = fVar4 + auVar26._4_4_ + auVar37._4_4_;
      auVar36._8_4_ = fVar4 + auVar26._8_4_ + auVar37._8_4_;
      auVar36._12_4_ = fVar4 + auVar26._12_4_ + auVar37._12_4_;
      auVar36._16_4_ = fVar4 + auVar26._16_4_ + auVar37._16_4_;
      auVar36._20_4_ = fVar4 + auVar26._20_4_ + auVar37._20_4_;
      auVar36._24_4_ = fVar4 + auVar26._24_4_ + auVar37._24_4_;
      auVar36._28_4_ = fVar4 + auVar26._28_4_ + auVar37._28_4_;
      auVar63._0_4_ = fVar5 + auVar29._0_4_ + auVar27._0_4_;
      auVar63._4_4_ = fVar5 + auVar29._4_4_ + auVar27._4_4_;
      auVar63._8_4_ = fVar5 + auVar29._8_4_ + auVar27._8_4_;
      auVar63._12_4_ = fVar5 + auVar29._12_4_ + auVar27._12_4_;
      auVar63._16_4_ = fVar5 + auVar29._16_4_ + auVar27._16_4_;
      auVar63._20_4_ = fVar5 + auVar29._20_4_ + auVar27._20_4_;
      auVar63._24_4_ = fVar5 + auVar29._24_4_ + auVar27._24_4_;
      auVar63._28_4_ = fVar5 + auVar29._28_4_ + auVar27._28_4_;
      uVar6 = *param_9;
      auVar60._4_4_ = uVar6;
      auVar60._0_4_ = uVar6;
      auVar60._8_4_ = uVar6;
      auVar60._12_4_ = uVar6;
      auVar60._16_4_ = uVar6;
      auVar60._20_4_ = uVar6;
      auVar60._24_4_ = uVar6;
      auVar60._28_4_ = uVar6;
      auVar29 = vsubps_avx(auVar61,auVar60);
      uVar6 = param_9[1];
      auVar26._4_4_ = uVar6;
      auVar26._0_4_ = uVar6;
      auVar26._8_4_ = uVar6;
      auVar26._12_4_ = uVar6;
      auVar26._16_4_ = uVar6;
      auVar26._20_4_ = uVar6;
      auVar26._24_4_ = uVar6;
      auVar26._28_4_ = uVar6;
      auVar27 = vsubps_avx(auVar36,auVar26);
      uVar6 = param_9[2];
      auVar62._4_4_ = uVar6;
      auVar62._0_4_ = uVar6;
      auVar62._8_4_ = uVar6;
      auVar62._12_4_ = uVar6;
      auVar62._16_4_ = uVar6;
      auVar62._20_4_ = uVar6;
      auVar62._24_4_ = uVar6;
      auVar62._28_4_ = uVar6;
      auVar36 = vsubps_avx(auVar63,auVar62);
      auVar28 = *(undefined1 (*) [32])(param_6 + (uVar16 & 0xffffffff));
      auVar37 = vunpcklps_avx(auVar29,auVar27);
      auVar38 = vunpcklps_avx512vl(auVar36,auVar28);
      auVar39 = vunpcklpd_avx512vl(auVar37,auVar38);
      auVar37 = vunpckhpd_avx512vl(auVar37,auVar38);
      auVar38 = vunpckhps_avx512vl(auVar29,auVar27);
      auVar28 = vunpckhps_avx(auVar36,auVar28);
      auVar40 = vunpcklpd_avx512vl(auVar38,auVar28);
      auVar28 = vunpckhpd_avx512vl(auVar38,auVar28);
      auVar38 = vinsertf32x4_avx512vl(auVar39,auVar37._0_16_,1);
      *(undefined1 (*) [32])(param_1 + uVar16 * 4) = auVar38;
      auVar38 = vinsertf32x4_avx512vl(auVar40,auVar28._0_16_,1);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar16 * 4) = auVar38;
      auVar37 = vshuff64x2_avx512vl(auVar39,auVar37,3);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar16 * 4) = auVar37;
      auVar28 = vshuff64x2_avx512vl(auVar40,auVar28,3);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar16 * 4) = auVar28;
      auVar28 = vpermt2ps_avx512vl(auVar36,auVar44,auVar27);
      auVar37 = vpermt2ps_avx512vl(auVar29,auVar46,auVar27);
      auVar37 = vpermt2ps_avx512vl(auVar37,auVar45,auVar28);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar18 * 4) = auVar37;
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar47,auVar29);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar18 * 4) = auVar28;
      auVar28 = vpermt2ps_avx512vl(auVar27,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar29);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar48,auVar36);
      *(undefined1 (*) [32])(param_3 + lVar18 * 4) = auVar28;
      auVar28 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar18 * 4);
      auVar29 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar18 * 4);
      auVar27 = *(undefined1 (*) [32])(param_2 + lVar18 * 4);
      auVar36 = vblendps_avx(auVar29,auVar28,0x24);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar42,auVar29);
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar41,auVar27);
      auVar29 = vpermt2ps_avx512vl(auVar27,auVar43,auVar29);
      auVar27 = vinsertf32x4_avx512vl(auVar28,auVar29._0_16_,1);
      auVar28 = vshuff64x2_avx512vl(auVar28,auVar29,3);
      auVar29 = vmulps_avx512vl(auVar27,auVar30);
      auVar28 = vmulps_avx512vl(auVar28,auVar31);
      auVar27 = vmulps_avx512vl(auVar36,auVar58);
      auVar36 = vmulps_avx512vl(auVar29,auVar33);
      auVar37 = vmulps_avx512vl(auVar28,auVar34);
      auVar38 = vmulps_avx512vl(auVar27,auVar35);
      auVar36 = vfmsub231ps_avx512vl(auVar36,auVar28,auVar35);
      auVar37 = vfmsub231ps_avx512vl(auVar37,auVar27,auVar33);
      auVar38 = vfmsub231ps_avx512vl(auVar38,auVar29,auVar34);
      auVar37 = vaddps_avx512vl(auVar37,auVar37);
      auVar59._0_4_ = auVar38._0_4_ + auVar38._0_4_;
      auVar59._4_4_ = auVar38._4_4_ + auVar38._4_4_;
      auVar59._8_4_ = auVar38._8_4_ + auVar38._8_4_;
      auVar59._12_4_ = auVar38._12_4_ + auVar38._12_4_;
      auVar59._16_4_ = auVar38._16_4_ + auVar38._16_4_;
      auVar59._20_4_ = auVar38._20_4_ + auVar38._20_4_;
      auVar59._24_4_ = auVar38._24_4_ + auVar38._24_4_;
      auVar59._28_4_ = auVar38._28_4_ + auVar38._28_4_;
      auVar36 = vaddps_avx512vl(auVar36,auVar36);
      auVar29 = vfmadd231ps_avx512vl(auVar29,auVar32,auVar37);
      auVar28 = vfmadd231ps_avx512vl(auVar28,auVar32,auVar59);
      auVar27 = vfmadd231ps_avx512vl(auVar27,auVar32,auVar36);
      auVar38 = vmulps_avx512vl(auVar33,auVar37);
      auVar39 = vmulps_avx512vl(auVar34,auVar59);
      auVar40 = vmulps_avx512vl(auVar35,auVar36);
      auVar38 = vfmsub231ps_avx512vl(auVar38,auVar35,auVar59);
      local_140 = vaddps_avx512vl(auVar27,auVar38);
      auVar27 = vfmsub231ps_avx512vl(auVar39,auVar33,auVar36);
      local_180._0_4_ = auVar27._0_4_ + auVar29._0_4_;
      local_180._4_4_ = auVar27._4_4_ + auVar29._4_4_;
      local_180._8_4_ = auVar27._8_4_ + auVar29._8_4_;
      local_180._12_4_ = auVar27._12_4_ + auVar29._12_4_;
      local_180._16_4_ = auVar27._16_4_ + auVar29._16_4_;
      local_180._20_4_ = auVar27._20_4_ + auVar29._20_4_;
      local_180._24_4_ = auVar27._24_4_ + auVar29._24_4_;
      local_180._28_4_ = auVar27._28_4_ + auVar29._28_4_;
      auVar29 = vfmsub231ps_avx512vl(auVar40,auVar34,auVar37);
      local_160 = vaddps_avx512vl(auVar28,auVar29);
      auVar28 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar18 * 4);
      auVar29 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar18 * 4);
      auVar27 = *(undefined1 (*) [32])(param_4 + lVar18 * 4);
      auVar36 = vblendps_avx(auVar29,auVar28,0x24);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar42,auVar29);
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar41,auVar27);
      auVar29 = vpermt2ps_avx512vl(auVar27,auVar43,auVar29);
      auVar27 = vinsertf32x4_avx512vl(auVar28,auVar29._0_16_,1);
      auVar28 = vshuff64x2_avx512vl(auVar28,auVar29,3);
      auVar29 = vmulps_avx512vl(auVar27,auVar30);
      auVar28 = vmulps_avx512vl(auVar28,auVar31);
      auVar41._0_4_ = auVar36._0_4_ * fVar2;
      auVar41._4_4_ = auVar36._4_4_ * fVar2;
      auVar41._8_4_ = auVar36._8_4_ * fVar2;
      auVar41._12_4_ = auVar36._12_4_ * fVar2;
      auVar41._16_4_ = auVar36._16_4_ * fVar2;
      auVar41._20_4_ = auVar36._20_4_ * fVar2;
      auVar41._24_4_ = auVar36._24_4_ * fVar2;
      auVar41._28_4_ = auVar36._28_4_ * fVar2;
      auVar27 = vmulps_avx512vl(auVar29,auVar33);
      auVar36 = vmulps_avx512vl(auVar28,auVar34);
      auVar37 = vmulps_avx512vl(auVar41,auVar35);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar28,auVar35);
      auVar36 = vfmsub231ps_avx512vl(auVar36,auVar41,auVar33);
      auVar37 = vfmsub231ps_avx512vl(auVar37,auVar29,auVar34);
      auVar36 = vaddps_avx512vl(auVar36,auVar36);
      auVar37 = vaddps_avx512vl(auVar37,auVar37);
      auVar27 = vaddps_avx512vl(auVar27,auVar27);
      auVar29 = vfmadd231ps_avx512vl(auVar29,auVar32,auVar36);
      auVar28 = vfmadd231ps_avx512vl(auVar28,auVar32,auVar37);
      auVar41 = vfmadd213ps_avx512vl(auVar32,auVar27,auVar41);
      auVar30 = vmulps_avx512vl(auVar33,auVar36);
      auVar31 = vmulps_avx512vl(auVar34,auVar37);
      auVar32 = vmulps_avx512vl(auVar35,auVar27);
      auVar37 = vfmsub231ps_avx512vl(auVar30,auVar35,auVar37);
      auVar37 = vaddps_avx512vl(auVar41,auVar37);
      auVar27 = vfmsub231ps_avx512vl(auVar31,auVar33,auVar27);
      auVar29 = vaddps_avx512vl(auVar29,auVar27);
      auVar27 = vfmsub231ps_avx512vl(auVar32,auVar34,auVar36);
      auVar28 = vaddps_avx512vl(auVar28,auVar27);
      auVar27._0_4_ = fVar3 + auVar29._0_4_;
      auVar27._4_4_ = fVar3 + auVar29._4_4_;
      auVar27._8_4_ = fVar3 + auVar29._8_4_;
      auVar27._12_4_ = fVar3 + auVar29._12_4_;
      auVar27._16_4_ = fVar3 + auVar29._16_4_;
      auVar27._20_4_ = fVar3 + auVar29._20_4_;
      auVar27._24_4_ = fVar3 + auVar29._24_4_;
      auVar27._28_4_ = fVar3 + auVar29._28_4_;
      auVar29._0_4_ = fVar4 + auVar28._0_4_;
      auVar29._4_4_ = fVar4 + auVar28._4_4_;
      auVar29._8_4_ = fVar4 + auVar28._8_4_;
      auVar29._12_4_ = fVar4 + auVar28._12_4_;
      auVar29._16_4_ = fVar4 + auVar28._16_4_;
      auVar29._20_4_ = fVar4 + auVar28._20_4_;
      auVar29._24_4_ = fVar4 + auVar28._24_4_;
      auVar29._28_4_ = fVar4 + auVar28._28_4_;
      auVar30._0_4_ = fVar5 + auVar37._0_4_;
      auVar30._4_4_ = fVar5 + auVar37._4_4_;
      auVar30._8_4_ = fVar5 + auVar37._8_4_;
      auVar30._12_4_ = fVar5 + auVar37._12_4_;
      auVar30._16_4_ = fVar5 + auVar37._16_4_;
      auVar30._20_4_ = fVar5 + auVar37._20_4_;
      auVar30._24_4_ = fVar5 + auVar37._24_4_;
      auVar30._28_4_ = fVar5 + auVar37._28_4_;
      auVar36 = vsubps_avx(auVar27,auVar60);
      auVar37 = vsubps_avx(auVar29,auVar26);
      auVar41 = vsubps_avx(auVar30,auVar62);
      auVar28 = vpermt2ps_avx512vl(auVar41,auVar44,auVar37);
      auVar29 = vpermt2ps_avx512vl(auVar36,auVar46,auVar37);
      auVar29 = vpermt2ps_avx512vl(auVar29,auVar45,auVar28);
      *(undefined1 (*) [32])(param_4 + -0x40 + lVar18 * 4) = auVar29;
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar47,auVar36);
      *(undefined1 (*) [32])(param_4 + -0x20 + lVar18 * 4) = auVar28;
      auVar30 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar28 = vpermt2ps_avx512vl(auVar37,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar36);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar48,auVar41);
      *(undefined1 (*) [32])(param_4 + lVar18 * 4) = auVar28;
      auVar28 = *(undefined1 (*) [32])(param_7 + -0x40 + lVar18 * 4);
      auVar29 = *(undefined1 (*) [32])(param_7 + -0x20 + lVar18 * 4);
      auVar27 = *(undefined1 (*) [32])(param_7 + lVar18 * 4);
      auVar42 = vpermt2ps_avx512vl(auVar28,auVar42,auVar29);
      auVar31 = vpermt2ps_avx512vl(auVar27,auVar43,auVar29);
      auVar32 = vinsertf32x4_avx512vl(auVar42,auVar31._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar42,auVar31,3);
      auVar28 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a
                                   ,auVar28);
      auVar28 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000
                                   ,auVar27);
      auVar29 = vsubps_avx512vl(auVar32,auVar36);
      auVar27 = vsubps_avx512vl(auVar42,auVar37);
      auVar36 = vsubps_avx512vl(auVar28,auVar41);
      auVar28._4_4_ = param_10;
      auVar28._0_4_ = param_10;
      auVar28._8_4_ = param_10;
      auVar28._12_4_ = param_10;
      auVar28._16_4_ = param_10;
      auVar28._20_4_ = param_10;
      auVar28._24_4_ = param_10;
      auVar28._28_4_ = param_10;
      auVar29 = vdivps_avx512vl(auVar29,auVar28);
      auVar27 = vdivps_avx512vl(auVar27,auVar28);
      auVar28 = vdivps_avx512vl(auVar36,auVar28);
      auVar36 = vpermt2ps_avx512vl(auVar28,auVar44,auVar27);
      auVar37 = vpermt2ps_avx512vl(auVar29,auVar46,auVar27);
      auVar37 = vpermt2ps_avx512vl(auVar37,auVar45,auVar36);
      *(undefined1 (*) [32])(param_5 + -0x40 + lVar18 * 4) = auVar37;
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar47,auVar29);
      *(undefined1 (*) [32])(param_5 + -0x20 + lVar18 * 4) = auVar36;
      auVar36 = vpermt2ps_avx512vl(auVar27,auVar30,auVar29);
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar48,auVar28);
      *(undefined1 (*) [32])(param_5 + lVar18 * 4) = auVar36;
      auVar36 = vsubps_avx512vl(local_180,auVar29);
      auVar37 = vsubps_avx512vl(local_160,auVar27);
      auVar41 = vsubps_avx512vl(local_140,auVar28);
      auVar42 = vmulps_avx512vl(auVar37,auVar37);
      auVar42 = vfmadd231ps_avx512vl(auVar42,auVar36,auVar36);
      auVar42 = vfmadd231ps_avx512vl(auVar42,auVar41,auVar41);
      uVar17 = vcmpps_avx512vl(auVar49,auVar42,1);
      bVar21 = (byte)uVar17;
      if (bVar21 != 0) {
        auVar42 = vdivps_avx(auVar49,auVar42);
        auVar42 = vsqrtps_avx(auVar42);
        auVar29 = vfmadd213ps_avx512vl(auVar36,auVar42,auVar29);
        auVar27 = vfmadd213ps_avx512vl(auVar37,auVar42,auVar27);
        auVar28 = vfmadd213ps_avx512vl(auVar41,auVar42,auVar28);
        bVar7 = (bool)((byte)(uVar17 >> 1) & 1);
        bVar8 = (bool)((byte)(uVar17 >> 2) & 1);
        bVar9 = (bool)((byte)(uVar17 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar17 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar17 >> 5) & 1);
        bVar12 = (bool)((byte)(uVar17 >> 6) & 1);
        bVar13 = SUB81(uVar17 >> 7,0);
        local_180._4_4_ = (uint)bVar7 * auVar29._4_4_ | (uint)!bVar7 * local_180._4_4_;
        local_180._0_4_ =
             (uint)(bVar21 & 1) * auVar29._0_4_ | (uint)!(bool)(bVar21 & 1) * local_180._0_4_;
        local_180._8_4_ = (uint)bVar8 * auVar29._8_4_ | (uint)!bVar8 * local_180._8_4_;
        local_180._12_4_ = (uint)bVar9 * auVar29._12_4_ | (uint)!bVar9 * local_180._12_4_;
        local_180._16_4_ = (uint)bVar10 * auVar29._16_4_ | (uint)!bVar10 * local_180._16_4_;
        local_180._20_4_ = (uint)bVar11 * auVar29._20_4_ | (uint)!bVar11 * local_180._20_4_;
        local_180._24_4_ = (uint)bVar12 * auVar29._24_4_ | (uint)!bVar12 * local_180._24_4_;
        local_180._28_4_ = (uint)bVar13 * auVar29._28_4_ | (uint)!bVar13 * local_180._28_4_;
        bVar7 = (bool)((byte)(uVar17 >> 1) & 1);
        bVar8 = (bool)((byte)(uVar17 >> 2) & 1);
        bVar9 = (bool)((byte)(uVar17 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar17 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar17 >> 5) & 1);
        bVar12 = (bool)((byte)(uVar17 >> 6) & 1);
        bVar13 = SUB81(uVar17 >> 7,0);
        local_160._4_4_ = (uint)bVar7 * auVar27._4_4_ | (uint)!bVar7 * local_160._4_4_;
        local_160._0_4_ =
             (uint)(bVar21 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar21 & 1) * local_160._0_4_;
        local_160._8_4_ = (uint)bVar8 * auVar27._8_4_ | (uint)!bVar8 * local_160._8_4_;
        local_160._12_4_ = (uint)bVar9 * auVar27._12_4_ | (uint)!bVar9 * local_160._12_4_;
        local_160._16_4_ = (uint)bVar10 * auVar27._16_4_ | (uint)!bVar10 * local_160._16_4_;
        local_160._20_4_ = (uint)bVar11 * auVar27._20_4_ | (uint)!bVar11 * local_160._20_4_;
        local_160._24_4_ = (uint)bVar12 * auVar27._24_4_ | (uint)!bVar12 * local_160._24_4_;
        local_160._28_4_ = (uint)bVar13 * auVar27._28_4_ | (uint)!bVar13 * local_160._28_4_;
        bVar7 = (bool)((byte)(uVar17 >> 1) & 1);
        bVar8 = (bool)((byte)(uVar17 >> 2) & 1);
        bVar9 = (bool)((byte)(uVar17 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar17 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar17 >> 5) & 1);
        bVar12 = (bool)((byte)(uVar17 >> 6) & 1);
        bVar13 = SUB81(uVar17 >> 7,0);
        local_140._4_4_ = (uint)bVar7 * auVar28._4_4_ | (uint)!bVar7 * local_140._4_4_;
        local_140._0_4_ =
             (uint)(bVar21 & 1) * auVar28._0_4_ | (uint)!(bool)(bVar21 & 1) * local_140._0_4_;
        local_140._8_4_ = (uint)bVar8 * auVar28._8_4_ | (uint)!bVar8 * local_140._8_4_;
        local_140._12_4_ = (uint)bVar9 * auVar28._12_4_ | (uint)!bVar9 * local_140._12_4_;
        local_140._16_4_ = (uint)bVar10 * auVar28._16_4_ | (uint)!bVar10 * local_140._16_4_;
        local_140._20_4_ = (uint)bVar11 * auVar28._20_4_ | (uint)!bVar11 * local_140._20_4_;
        local_140._24_4_ = (uint)bVar12 * auVar28._24_4_ | (uint)!bVar12 * local_140._24_4_;
        local_140._28_4_ = (uint)bVar13 * auVar28._28_4_ | (uint)!bVar13 * local_140._28_4_;
      }
      auVar28 = vpermt2ps_avx512vl(local_140,auVar44,local_160);
      auVar29 = vpermt2ps_avx512vl(local_180,auVar46,local_160);
      auVar29 = vpermt2ps_avx512vl(auVar29,auVar45,auVar28);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar18 * 4) = auVar29;
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar47,local_180);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar18 * 4) = auVar28;
      auVar28 = vpermt2ps_avx512vl(local_160,
                                   ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,local_180);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar48,local_140);
      *(undefined1 (*) [32])(param_2 + lVar18 * 4) = auVar28;
      uVar16 = uVar16 + 0x20;
      lVar18 = lVar18 + 0x18;
      uVar19 = uVar19 + 8;
    } while ((int)uVar19 < (int)(uVar20 & 0xfffffff8));
  }
  if ((int)uVar19 < (int)param_11) {
    auVar43 = vpbroadcastd_avx512vl();
    auVar43 = vpor_avx2(auVar43,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar44 = vpbroadcastd_avx512vl();
    uVar16 = vpcmpgtd_avx512vl(auVar44,auVar43);
    uVar17 = (ulonglong)uVar19;
    pauVar15 = (undefined1 (*) [32])(param_3 + uVar17 * 0xc);
    bVar21 = (byte)uVar16;
    if (bVar21 == 0xff) {
      auVar43 = pauVar15[1];
      auVar44 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar15,auVar43);
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar15[2],auVar43);
      auVar46._16_16_ = auVar45._0_16_;
      auVar46._0_16_ = auVar44._0_16_;
      auVar44 = vperm2f128_avx(auVar44,auVar45,0x31);
      auVar43 = vblendps_avx(auVar43,*pauVar15,0x24);
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar43,pauVar15[2]);
    }
    else {
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_5));
      auVar46._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * auVar43._4_4_;
      auVar46._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_;
      auVar46._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * auVar43._8_4_;
      auVar46._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * auVar43._12_4_;
      auVar46._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar46._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar46._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar46._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_5));
      auVar44._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * auVar43._4_4_;
      auVar44._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_;
      auVar44._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * auVar43._8_4_;
      auVar44._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * auVar43._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_5));
      auVar43._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * auVar45._4_4_;
      auVar43._0_4_ = (uint)(bVar21 & 1) * auVar45._0_4_;
      auVar43._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * auVar45._8_4_;
      auVar43._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * auVar45._12_4_;
      auVar43._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar45._16_4_;
      auVar43._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar45._20_4_;
      auVar43._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar45._24_4_;
      auVar43._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar45._28_4_;
    }
    pauVar14 = (undefined1 (*) [32])(param_1 + uVar17 * 0x10);
    auVar45 = vbroadcastss_avx512vl(ZEXT416(param_8[8]));
    auVar46 = vmulps_avx512vl(auVar46,auVar45);
    auVar47 = vbroadcastss_avx512vl(ZEXT416(param_8[9]));
    auVar44 = vmulps_avx512vl(auVar44,auVar47);
    auVar48 = vbroadcastss_avx512vl(ZEXT416(param_8[10]));
    auVar43 = vmulps_avx512vl(auVar43,auVar48);
    uVar20 = param_8[3];
    auVar25._4_4_ = uVar20;
    auVar25._0_4_ = uVar20;
    auVar25._8_4_ = uVar20;
    auVar25._12_4_ = uVar20;
    auVar32._16_4_ = uVar20;
    auVar32._0_16_ = auVar25;
    auVar32._20_4_ = uVar20;
    auVar32._24_4_ = uVar20;
    auVar32._28_4_ = uVar20;
    uVar20 = param_8[1];
    auVar33._4_4_ = uVar20;
    auVar33._0_4_ = uVar20;
    auVar33._8_4_ = uVar20;
    auVar33._12_4_ = uVar20;
    auVar33._16_4_ = uVar20;
    auVar33._20_4_ = uVar20;
    auVar33._24_4_ = uVar20;
    auVar33._28_4_ = uVar20;
    uVar20 = param_8[2];
    auVar31._4_4_ = uVar20;
    auVar31._0_4_ = uVar20;
    auVar31._8_4_ = uVar20;
    auVar31._12_4_ = uVar20;
    auVar31._16_4_ = uVar20;
    auVar31._20_4_ = uVar20;
    auVar31._24_4_ = uVar20;
    auVar31._28_4_ = uVar20;
    uVar20 = *param_8;
    auVar34._4_4_ = uVar20;
    auVar34._0_4_ = uVar20;
    auVar34._8_4_ = uVar20;
    auVar34._12_4_ = uVar20;
    auVar34._16_4_ = uVar20;
    auVar34._20_4_ = uVar20;
    auVar34._24_4_ = uVar20;
    auVar34._28_4_ = uVar20;
    auVar49 = vmulps_avx512vl(auVar46,auVar33);
    auVar28 = vmulps_avx512vl(auVar44,auVar31);
    auVar29 = vmulps_avx512vl(auVar43,auVar34);
    auVar49 = vfmsub231ps_avx512vl(auVar49,auVar44,auVar34);
    auVar28 = vfmsub231ps_avx512vl(auVar28,auVar43,auVar33);
    auVar29 = vfmsub231ps_avx512vl(auVar29,auVar46,auVar31);
    auVar28 = vaddps_avx512vl(auVar28,auVar28);
    auVar29 = vaddps_avx512vl(auVar29,auVar29);
    auVar49 = vaddps_avx512vl(auVar49,auVar49);
    auVar46 = vfmadd231ps_avx512vl(auVar46,auVar32,auVar28);
    auVar44 = vfmadd231ps_avx512vl(auVar44,auVar32,auVar29);
    auVar43 = vfmadd231ps_avx512vl(auVar43,auVar32,auVar49);
    auVar27 = vmulps_avx512vl(auVar33,auVar28);
    auVar36 = vmulps_avx512vl(auVar31,auVar29);
    auVar37 = vmulps_avx512vl(auVar34,auVar49);
    auVar29 = vfmsub231ps_avx512vl(auVar27,auVar34,auVar29);
    auVar43 = vaddps_avx512vl(auVar43,auVar29);
    auVar49 = vfmsub231ps_avx512vl(auVar36,auVar33,auVar49);
    auVar46 = vaddps_avx512vl(auVar46,auVar49);
    auVar49 = vfmsub231ps_avx512vl(auVar37,auVar31,auVar28);
    auVar28 = vbroadcastss_avx512vl(ZEXT416(param_8[4]));
    auVar29 = vbroadcastss_avx512vl(ZEXT416(param_8[5]));
    auVar44 = vaddps_avx512vl(auVar44,auVar49);
    auVar49 = vbroadcastss_avx512vl(ZEXT416(param_8[6]));
    auVar46 = vaddps_avx512vl(auVar28,auVar46);
    auVar44 = vaddps_avx512vl(auVar29,auVar44);
    auVar43 = vaddps_avx512vl(auVar49,auVar43);
    auVar27 = vbroadcastss_avx512vl(ZEXT416(*param_9));
    auVar46 = vsubps_avx512vl(auVar46,auVar27);
    auVar36 = vbroadcastss_avx512vl(ZEXT416(param_9[1]));
    auVar44 = vsubps_avx512vl(auVar44,auVar36);
    auVar37 = vbroadcastss_avx512vl(ZEXT416(param_9[2]));
    auVar43 = vsubps_avx512vl(auVar43,auVar37);
    piVar1 = (int *)(param_6 + (int)(uVar19 << 2));
    auVar42._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * piVar1[1];
    auVar42._0_4_ = (uint)(bVar21 & 1) * *piVar1;
    auVar42._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * piVar1[2];
    auVar42._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * piVar1[3];
    auVar42._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * piVar1[4];
    auVar42._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * piVar1[5];
    auVar42._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * piVar1[6];
    auVar42._28_4_ = (uint)(byte)(uVar16 >> 7) * piVar1[7];
    if (bVar21 == 0xff) {
      auVar26 = vunpcklps_avx512vl(auVar46,auVar44);
      auVar41 = vunpcklps_avx512vl(auVar43,auVar42);
      auVar30 = vunpcklpd_avx512vl(auVar26,auVar41);
      auVar26 = vunpckhpd_avx(auVar26,auVar41);
      auVar41 = vunpckhps_avx512vl(auVar46,auVar44);
      auVar42 = vunpckhps_avx512vl(auVar43,auVar42);
      auVar35 = vunpcklpd_avx512vl(auVar41,auVar42);
      auVar41 = vunpckhpd_avx512vl(auVar41,auVar42);
      auVar42 = vinsertf32x4_avx512vl(auVar30,auVar26._0_16_,1);
      *pauVar14 = auVar42;
      auVar42 = vinsertf32x4_avx512vl(auVar35,auVar41._0_16_,1);
      pauVar14[1] = auVar42;
      auVar26 = vshuff64x2_avx512vl(auVar30,auVar26,3);
      pauVar14[2] = auVar26;
      auVar26 = vshuff64x2_avx512vl(auVar35,auVar41,3);
      pauVar14[3] = auVar26;
      auVar26 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar43,auVar44);
      auVar41 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar46,auVar44);
      auVar41 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar41,auVar26);
      *pauVar15 = auVar41;
      auVar26 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar26,auVar46);
      pauVar15[1] = auVar26;
      auVar44 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar44,auVar46);
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar44,auVar43);
      pauVar15[2] = auVar43;
      pauVar15 = (undefined1 (*) [32])(param_2 + uVar17 * 0xc);
      auVar43 = *(undefined1 (*) [32])(param_2 + uVar17 * 0xc);
      auVar44 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar17 * 0xc);
      auVar46 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar17 * 0xc);
      auVar26 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar43,auVar44);
      auVar41 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar46,auVar44);
      auVar50 = vinsertf32x4_avx512vl(auVar26,auVar41._0_16_,1);
      auVar35 = vshuff64x2_avx512vl(auVar26,auVar41,3);
      auVar43 = vblendps_avx(auVar44,auVar43,0x24);
      auVar51 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar43,auVar46);
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar16,
                 auVar46);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar16,
                 auVar44);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar16,
                 auVar43);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar16,
                 auVar42);
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar16,
                 auVar46);
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar16,
                 auVar44);
      vscatterdps_avx512vl(ZEXT832(pauVar15) + auVar26,uVar16,auVar43);
      pauVar15 = (undefined1 (*) [32])(param_2 + uVar17 * 0xc);
      auVar24 = vxorps_avx512vl(auVar43._0_16_,auVar43._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_5));
      auVar50._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar24._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar50._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar24._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar50._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar24._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar50._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar24._12_4_;
      auVar50._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar50._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar50._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar50._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar24 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar15 * 2));
      auVar35._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar24._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar35._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar24._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar35._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar24._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar35._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar24._12_4_;
      auVar35._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar35._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar35._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar35._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar24 = vxorps_avx512vl(auVar46._0_16_,auVar46._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + uVar17 * 0x10));
      auVar51._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar24._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar51._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar24._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar51._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar24._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar51._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar24._12_4_;
      auVar51._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar51._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar51._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar51._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
    }
    auVar43 = vmulps_avx512vl(auVar50,auVar45);
    auVar44 = vmulps_avx512vl(auVar35,auVar47);
    auVar46 = vmulps_avx512vl(auVar51,auVar48);
    auVar26 = vmulps_avx512vl(auVar43,auVar33);
    auVar41 = vmulps_avx512vl(auVar44,auVar31);
    auVar42 = vmulps_avx512vl(auVar46,auVar34);
    auVar26 = vfmsub231ps_avx512vl(auVar26,auVar44,auVar34);
    auVar41 = vfmsub231ps_avx512vl(auVar41,auVar46,auVar33);
    auVar42 = vfmsub231ps_avx512vl(auVar42,auVar43,auVar31);
    auVar41 = vaddps_avx512vl(auVar41,auVar41);
    auVar42 = vaddps_avx512vl(auVar42,auVar42);
    auVar26 = vaddps_avx512vl(auVar26,auVar26);
    auVar30 = vbroadcastss_avx512vl(auVar25);
    auVar43 = vfmadd231ps_avx512vl(auVar43,auVar30,auVar41);
    auVar44 = vfmadd231ps_avx512vl(auVar44,auVar30,auVar42);
    auVar46 = vfmadd213ps_avx512vl(auVar30,auVar26,auVar46);
    auVar30 = vmulps_avx512vl(auVar33,auVar41);
    auVar35 = vmulps_avx512vl(auVar31,auVar42);
    auVar38 = vmulps_avx512vl(auVar34,auVar26);
    auVar30 = vfmsub231ps_avx512vl(auVar30,auVar34,auVar42);
    local_1a0 = vaddps_avx512vl(auVar46,auVar30);
    auVar26 = vfmsub231ps_avx512vl(auVar35,auVar33,auVar26);
    local_1e0 = vaddps_avx512vl(auVar43,auVar26);
    auVar43 = vfmsub231ps_avx512vl(auVar38,auVar31,auVar41);
    local_1c0 = vaddps_avx512vl(auVar44,auVar43);
    pauVar14 = (undefined1 (*) [32])(param_4 + uVar17 * 0xc);
    if (bVar21 == 0xff) {
      auVar43 = pauVar14[1];
      auVar44 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar14,auVar43);
      auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar14[2],auVar43);
      auVar52 = vinsertf32x4_avx512vl(auVar44,auVar46._0_16_,1);
      auVar53 = vshuff64x2_avx512vl(auVar44,auVar46,3);
      auVar43 = vblendps_avx(auVar43,*pauVar14,0x24);
      auVar54 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar43,pauVar14[2]);
    }
    else {
      auVar25 = vxorps_avx512vl(auVar42._0_16_,auVar42._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + param_5));
      auVar52._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar52._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar52._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar52._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar52._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar52._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar52._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar52._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar25 = vxorps_avx512vl(auVar46._0_16_,auVar46._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + param_5));
      auVar53._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar53._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar53._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar53._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar53._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar53._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar53._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar53._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar25 = vxorps_avx512vl(auVar26._0_16_,auVar26._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + param_5));
      auVar54._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar54._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar54._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar54._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar54._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar54._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar54._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar54._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
    }
    auVar43 = vmulps_avx512vl(auVar52,auVar45);
    auVar44 = vmulps_avx512vl(auVar53,auVar47);
    auVar46 = vmulps_avx512vl(auVar54,auVar48);
    auVar45 = vmulps_avx512vl(auVar43,auVar33);
    auVar47 = vmulps_avx512vl(auVar44,auVar31);
    auVar48 = vmulps_avx512vl(auVar46,auVar34);
    auVar45 = vfmsub231ps_avx512vl(auVar45,auVar44,auVar34);
    auVar47 = vfmsub231ps_avx512vl(auVar47,auVar46,auVar33);
    auVar48 = vfmsub231ps_avx512vl(auVar48,auVar43,auVar31);
    auVar47 = vaddps_avx512vl(auVar47,auVar47);
    auVar48 = vaddps_avx512vl(auVar48,auVar48);
    auVar45 = vaddps_avx512vl(auVar45,auVar45);
    auVar43 = vfmadd231ps_avx512vl(auVar43,auVar32,auVar47);
    auVar44 = vfmadd231ps_avx512vl(auVar44,auVar32,auVar48);
    auVar46 = vfmadd213ps_avx512vl(auVar32,auVar45,auVar46);
    auVar26 = vmulps_avx512vl(auVar33,auVar47);
    auVar41 = vmulps_avx512vl(auVar31,auVar48);
    auVar42 = vmulps_avx512vl(auVar34,auVar45);
    auVar48 = vfmsub231ps_avx512vl(auVar26,auVar34,auVar48);
    auVar46 = vaddps_avx512vl(auVar46,auVar48);
    auVar26 = vfmsub231ps_avx512vl(auVar41,auVar33,auVar45);
    auVar43 = vaddps_avx512vl(auVar43,auVar26);
    auVar47 = vfmsub231ps_avx512vl(auVar42,auVar31,auVar47);
    auVar44 = vaddps_avx512vl(auVar44,auVar47);
    auVar43 = vaddps_avx512vl(auVar28,auVar43);
    auVar44 = vaddps_avx512vl(auVar29,auVar44);
    auVar46 = vaddps_avx512vl(auVar49,auVar46);
    auVar43 = vsubps_avx512vl(auVar43,auVar27);
    auVar44 = vsubps_avx512vl(auVar44,auVar36);
    auVar46 = vsubps_avx512vl(auVar46,auVar37);
    if (bVar21 == 0xff) {
      auVar45 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar46,auVar44);
      auVar47 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar43,auVar44);
      auVar47 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar47,auVar45);
      *pauVar14 = auVar47;
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar45,auVar43);
      pauVar14[1] = auVar45;
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar44,auVar43);
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar45,auVar46);
      pauVar14[2] = auVar45;
      auVar45 = *(undefined1 (*) [32])(param_7 + uVar17 * 0xc);
      auVar47 = *(undefined1 (*) [32])(param_7 + 0x20 + uVar17 * 0xc);
      auVar48 = *(undefined1 (*) [32])(param_7 + 0x40 + uVar17 * 0xc);
      auVar26 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar45,auVar47);
      auVar49 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar48,auVar47);
      auVar55 = vinsertf32x4_avx512vl(auVar26,auVar49._0_16_,1);
      auVar56 = vshuff64x2_avx512vl(auVar26,auVar49,3);
      auVar45 = vblendps_avx(auVar47,auVar45,0x24);
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar45,auVar48);
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar16,
                 auVar43);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar16,
                 auVar44);
      vscatterdps_avx512vl(ZEXT832(pauVar14) + auVar43,uVar16,auVar46);
      param_7 = param_7 + uVar17 * 0xc;
      auVar47 = vgatherdps_avx512vl(*(undefined4 *)(param_7 + param_5));
      auVar55._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * auVar47._4_4_;
      auVar55._0_4_ = (uint)(bVar21 & 1) * auVar47._0_4_;
      auVar55._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * auVar47._8_4_;
      auVar55._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * auVar47._12_4_;
      auVar55._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar47._16_4_;
      auVar55._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar47._20_4_;
      auVar55._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar47._24_4_;
      auVar55._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar47._28_4_;
      auVar25 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
      auVar47 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_7));
      auVar56._0_4_ = (uint)(bVar21 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar56._4_4_ = (uint)bVar7 * auVar47._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar56._8_4_ = (uint)bVar7 * auVar47._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar56._12_4_ = (uint)bVar7 * auVar47._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar56._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar47._16_4_;
      auVar56._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar47._20_4_;
      auVar56._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar47._24_4_;
      auVar56._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar47._28_4_;
      auVar25 = vxorps_avx512vl(auVar45._0_16_,auVar45._0_16_);
      auVar47 = vgatherdps_avx512vl(*(undefined4 *)(param_7 + param_2));
      auVar45._0_4_ = (uint)(bVar21 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar45._4_4_ = (uint)bVar7 * auVar47._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar45._8_4_ = (uint)bVar7 * auVar47._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar45._12_4_ = (uint)bVar7 * auVar47._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar45._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar47._16_4_;
      auVar45._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar47._20_4_;
      auVar45._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar47._24_4_;
      auVar45._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar47._28_4_;
    }
    auVar43 = vsubps_avx(auVar55,auVar43);
    auVar44 = vsubps_avx512vl(auVar56,auVar44);
    auVar46 = vsubps_avx512vl(auVar45,auVar46);
    auVar47._4_4_ = param_10;
    auVar47._0_4_ = param_10;
    auVar47._8_4_ = param_10;
    auVar47._12_4_ = param_10;
    auVar47._16_4_ = param_10;
    auVar47._20_4_ = param_10;
    auVar47._24_4_ = param_10;
    auVar47._28_4_ = param_10;
    auVar43 = vdivps_avx(auVar43,auVar47);
    auVar44 = vdivps_avx(auVar44,auVar47);
    auVar46 = vdivps_avx(auVar46,auVar47);
    pauVar14 = (undefined1 (*) [32])(param_5 + uVar17 * 0xc);
    if (bVar21 == 0xff) {
      auVar45 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar46,auVar44);
      auVar47 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar43,auVar44);
      auVar47 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar47,auVar45);
      *pauVar14 = auVar47;
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar45,auVar43);
      pauVar14[1] = auVar45;
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar44,auVar43);
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar45,auVar46);
      pauVar14[2] = auVar45;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar16,
                 auVar43);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar16,
                 auVar44);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar16,
                 auVar46);
    }
    auVar45 = vsubps_avx512vl(local_1e0,auVar43);
    auVar47 = vsubps_avx512vl(local_1c0,auVar44);
    auVar48 = vsubps_avx512vl(local_1a0,auVar46);
    auVar26 = vmulps_avx512vl(auVar47,auVar47);
    auVar26 = vfmadd231ps_avx512vl(auVar26,auVar45,auVar45);
    auVar26 = vfmadd231ps_avx512vl(auVar26,auVar48,auVar48);
    auVar57._4_4_ = param_12;
    auVar57._0_4_ = param_12;
    auVar57._8_4_ = param_12;
    auVar57._12_4_ = param_12;
    auVar57._16_4_ = param_12;
    auVar57._20_4_ = param_12;
    auVar57._24_4_ = param_12;
    auVar57._28_4_ = param_12;
    uVar23 = vcmpps_avx512vl(auVar57,auVar26,1);
    uVar23 = uVar16 & uVar23;
    bVar22 = (byte)uVar23;
    if (bVar22 != 0) {
      auVar26 = vdivps_avx512vl(auVar57,auVar26);
      auVar26 = vsqrtps_avx(auVar26);
      auVar46 = vfmadd213ps_avx512vl(auVar48,auVar26,auVar46);
      bVar7 = (bool)((byte)(uVar23 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar23 >> 2) & 1);
      bVar9 = (bool)((byte)(uVar23 >> 3) & 1);
      bVar10 = (bool)((byte)(uVar23 >> 4) & 1);
      bVar11 = (bool)((byte)(uVar23 >> 5) & 1);
      bVar12 = (bool)((byte)(uVar23 >> 6) & 1);
      bVar13 = SUB81(uVar23 >> 7,0);
      local_1e0._4_4_ =
           (uint)bVar7 * (int)(auVar26._4_4_ * auVar45._4_4_ + auVar43._4_4_) |
           (uint)!bVar7 * local_1e0._4_4_;
      local_1e0._0_4_ =
           (uint)(bVar22 & 1) * (int)(auVar26._0_4_ * auVar45._0_4_ + auVar43._0_4_) |
           (uint)!(bool)(bVar22 & 1) * local_1e0._0_4_;
      local_1e0._8_4_ =
           (uint)bVar8 * (int)(auVar26._8_4_ * auVar45._8_4_ + auVar43._8_4_) |
           (uint)!bVar8 * local_1e0._8_4_;
      local_1e0._12_4_ =
           (uint)bVar9 * (int)(auVar26._12_4_ * auVar45._12_4_ + auVar43._12_4_) |
           (uint)!bVar9 * local_1e0._12_4_;
      local_1e0._16_4_ =
           (uint)bVar10 * (int)(auVar26._16_4_ * auVar45._16_4_ + auVar43._16_4_) |
           (uint)!bVar10 * local_1e0._16_4_;
      local_1e0._20_4_ =
           (uint)bVar11 * (int)(auVar26._20_4_ * auVar45._20_4_ + auVar43._20_4_) |
           (uint)!bVar11 * local_1e0._20_4_;
      local_1e0._24_4_ =
           (uint)bVar12 * (int)(auVar26._24_4_ * auVar45._24_4_ + auVar43._24_4_) |
           (uint)!bVar12 * local_1e0._24_4_;
      local_1e0._28_4_ =
           (uint)bVar13 * (int)(auVar26._28_4_ * auVar45._28_4_ + auVar43._28_4_) |
           (uint)!bVar13 * local_1e0._28_4_;
      bVar7 = (bool)((byte)(uVar23 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar23 >> 2) & 1);
      bVar9 = (bool)((byte)(uVar23 >> 3) & 1);
      bVar10 = (bool)((byte)(uVar23 >> 4) & 1);
      bVar11 = (bool)((byte)(uVar23 >> 5) & 1);
      bVar12 = (bool)((byte)(uVar23 >> 6) & 1);
      bVar13 = SUB81(uVar23 >> 7,0);
      local_1c0._4_4_ =
           (uint)bVar7 * (int)(auVar26._4_4_ * auVar47._4_4_ + auVar44._4_4_) |
           (uint)!bVar7 * local_1c0._4_4_;
      local_1c0._0_4_ =
           (uint)(bVar22 & 1) * (int)(auVar26._0_4_ * auVar47._0_4_ + auVar44._0_4_) |
           (uint)!(bool)(bVar22 & 1) * local_1c0._0_4_;
      local_1c0._8_4_ =
           (uint)bVar8 * (int)(auVar26._8_4_ * auVar47._8_4_ + auVar44._8_4_) |
           (uint)!bVar8 * local_1c0._8_4_;
      local_1c0._12_4_ =
           (uint)bVar9 * (int)(auVar26._12_4_ * auVar47._12_4_ + auVar44._12_4_) |
           (uint)!bVar9 * local_1c0._12_4_;
      local_1c0._16_4_ =
           (uint)bVar10 * (int)(auVar26._16_4_ * auVar47._16_4_ + auVar44._16_4_) |
           (uint)!bVar10 * local_1c0._16_4_;
      local_1c0._20_4_ =
           (uint)bVar11 * (int)(auVar26._20_4_ * auVar47._20_4_ + auVar44._20_4_) |
           (uint)!bVar11 * local_1c0._20_4_;
      local_1c0._24_4_ =
           (uint)bVar12 * (int)(auVar26._24_4_ * auVar47._24_4_ + auVar44._24_4_) |
           (uint)!bVar12 * local_1c0._24_4_;
      local_1c0._28_4_ =
           (uint)bVar13 * (int)(auVar26._28_4_ * auVar47._28_4_ + auVar44._28_4_) |
           (uint)!bVar13 * local_1c0._28_4_;
      bVar7 = (bool)((byte)(uVar23 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar23 >> 2) & 1);
      bVar9 = (bool)((byte)(uVar23 >> 3) & 1);
      bVar10 = (bool)((byte)(uVar23 >> 4) & 1);
      bVar11 = (bool)((byte)(uVar23 >> 5) & 1);
      bVar12 = (bool)((byte)(uVar23 >> 6) & 1);
      bVar13 = SUB81(uVar23 >> 7,0);
      local_1a0._4_4_ = (uint)bVar7 * auVar46._4_4_ | (uint)!bVar7 * local_1a0._4_4_;
      local_1a0._0_4_ =
           (uint)(bVar22 & 1) * auVar46._0_4_ | (uint)!(bool)(bVar22 & 1) * local_1a0._0_4_;
      local_1a0._8_4_ = (uint)bVar8 * auVar46._8_4_ | (uint)!bVar8 * local_1a0._8_4_;
      local_1a0._12_4_ = (uint)bVar9 * auVar46._12_4_ | (uint)!bVar9 * local_1a0._12_4_;
      local_1a0._16_4_ = (uint)bVar10 * auVar46._16_4_ | (uint)!bVar10 * local_1a0._16_4_;
      local_1a0._20_4_ = (uint)bVar11 * auVar46._20_4_ | (uint)!bVar11 * local_1a0._20_4_;
      local_1a0._24_4_ = (uint)bVar12 * auVar46._24_4_ | (uint)!bVar12 * local_1a0._24_4_;
      local_1a0._28_4_ = (uint)bVar13 * auVar46._28_4_ | (uint)!bVar13 * local_1a0._28_4_;
    }
    if (bVar21 == 0xff) {
      auVar43 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,local_1a0,local_1c0);
      auVar44 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,local_1e0,local_1c0);
      auVar44 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar44,auVar43);
      auVar48._8_8_ = local_1e0._24_8_;
      auVar48._0_8_ = local_1e0._24_8_;
      auVar48._16_8_ = local_1e0._24_8_;
      auVar48._24_8_ = local_1e0._24_8_;
      *pauVar15 = auVar44;
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar43,local_1e0);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar17 * 0xc) = auVar43;
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000900000008
                                   ,local_1c0,auVar48);
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar43,local_1a0);
      *(undefined1 (*) [32])(param_2 + 0x40 + uVar17 * 0xc) = auVar43;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar16,
                 local_1e0);
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar16,
                 local_1c0);
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar16,
                 local_1a0);
    }
  }
  return;
}

// ApplyPreSimulationTransformsAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuniCunf_avx512skx @ 140cccce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformsAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuniCunf_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,undefined4 *param_9,
               uint *param_10,uint param_11,int param_12,int param_13,uint param_14)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [32];
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [32];
  uint uVar27;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong lVar28;
  byte bVar29;
  byte bVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
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
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar33 [16];
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
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  float fVar97;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  float fVar108;
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM17 [64];
  undefined1 auVar109 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar110 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar111 [16];
  undefined1 in_ZMM20 [64];
  undefined1 auVar112 [16];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM24 [64];
  undefined1 local_320 [32];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
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
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 local_120 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 auVar56 [32];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  
  auVar71 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar70 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar69 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar92 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar54 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  uVar17 = __real_0000000c;
  uVar16 = __real_00000008;
  uVar15 = __real_00000004;
  auVar55 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar89 = in_ZMM10._0_32_;
  auVar91 = in_ZMM11._0_32_;
  auVar112 = in_ZMM21._0_16_;
  auVar111 = in_ZMM20._0_16_;
  auVar110 = in_ZMM19._0_16_;
  auVar109 = in_ZMM18._0_16_;
  auVar33 = in_ZMM17._0_16_;
  auVar32 = in_ZMM16._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  uVar27 = param_13 - param_12;
  uVar18 = uVar27 + 7;
  if (-1 < (int)uVar27) {
    uVar18 = uVar27;
  }
  iVar19 = ((uVar18 & 0xfffffff8) - uVar27) + param_13;
  if (param_12 < iVar19) {
    local_260 = param_11;
    uStack_25c = param_11;
    uStack_258 = param_11;
    uStack_254 = param_11;
    uStack_250 = param_11;
    uStack_24c = param_11;
    uStack_248 = param_11;
    uStack_244 = param_11;
    auVar72._4_4_ = param_14;
    auVar72._0_4_ = param_14;
    auVar72._8_4_ = param_14;
    auVar72._12_4_ = param_14;
    auVar72._16_4_ = param_14;
    auVar72._20_4_ = param_14;
    auVar72._24_4_ = param_14;
    auVar72._28_4_ = param_14;
    unaff_R13 = (longlong)param_12;
    lVar20 = (longlong)iVar19;
    lVar14 = unaff_R13 * 0xc;
    lVar28 = param_3 + 0x40;
    pauVar26 = (undefined1 (*) [32])(param_1 + unaff_R13 * 0x10 + 0x60);
    lVar23 = param_2 + 0x40;
    lVar25 = param_4 + 0x40;
    lVar24 = param_7 + 0x40;
    lVar21 = param_5 + 0x40;
    param_12 = param_12 << 2;
    local_140 = __real_00000004;
    uStack_13c = __real_00000004;
    uStack_138 = __real_00000004;
    uStack_134 = __real_00000004;
    uStack_130 = __real_00000004;
    uStack_12c = __real_00000004;
    uStack_128 = __real_00000004;
    uStack_124 = __real_00000004;
    local_160 = __real_00000008;
    uStack_15c = __real_00000008;
    uStack_158 = __real_00000008;
    uStack_154 = __real_00000008;
    uStack_150 = __real_00000008;
    uStack_14c = __real_00000008;
    uStack_148 = __real_00000008;
    uStack_144 = __real_00000008;
    local_180 = __real_0000000c;
    uStack_17c = __real_0000000c;
    uStack_178 = __real_0000000c;
    uStack_174 = __real_0000000c;
    uStack_170 = __real_0000000c;
    uStack_16c = __real_0000000c;
    uStack_168 = __real_0000000c;
    uStack_164 = __real_0000000c;
    local_1a0 = __real_00000010;
    uStack_19c = __real_00000010;
    uStack_198 = __real_00000010;
    uStack_194 = __real_00000010;
    uStack_190 = __real_00000010;
    uStack_18c = __real_00000010;
    uStack_188 = __real_00000010;
    uStack_184 = __real_00000010;
    local_1c0 = __real_00000014;
    uStack_1bc = __real_00000014;
    uStack_1b8 = __real_00000014;
    uStack_1b4 = __real_00000014;
    uStack_1b0 = __real_00000014;
    uStack_1ac = __real_00000014;
    uStack_1a8 = __real_00000014;
    uStack_1a4 = __real_00000014;
    local_1e0 = __real_00000018;
    uStack_1dc = __real_00000018;
    uStack_1d8 = __real_00000018;
    uStack_1d4 = __real_00000018;
    uStack_1d0 = __real_00000018;
    uStack_1cc = __real_00000018;
    uStack_1c8 = __real_00000018;
    uStack_1c4 = __real_00000018;
    local_200 = __real_00000020;
    uStack_1fc = __real_00000020;
    uStack_1f8 = __real_00000020;
    uStack_1f4 = __real_00000020;
    uStack_1f0 = __real_00000020;
    uStack_1ec = __real_00000020;
    uStack_1e8 = __real_00000020;
    uStack_1e4 = __real_00000020;
    local_220 = __real_00000024;
    uStack_21c = __real_00000024;
    uStack_218 = __real_00000024;
    uStack_214 = __real_00000024;
    uStack_210 = __real_00000024;
    uStack_20c = __real_00000024;
    uStack_208 = __real_00000024;
    uStack_204 = __real_00000024;
    local_240 = __real_00000028;
    uStack_23c = __real_00000028;
    uStack_238 = __real_00000028;
    uStack_234 = __real_00000028;
    uStack_230 = __real_00000028;
    uStack_22c = __real_00000028;
    uStack_228 = __real_00000028;
    uStack_224 = __real_00000028;
    do {
      auVar53 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
      auVar89 = *(undefined1 (*) [32])(param_8 + param_12);
      vpslld_avx2(auVar89,2);
      auVar34 = vgatherdps_avx512vl(param_9[lVar21 * 2]);
      auVar91 = vpslld_avx2(auVar89,4);
      auVar89 = vpslld_avx2(auVar89,5);
      auVar42._0_4_ = auVar89._0_4_ + auVar91._0_4_;
      auVar42._4_4_ = auVar89._4_4_ + auVar91._4_4_;
      auVar42._8_4_ = auVar89._8_4_ + auVar91._8_4_;
      auVar42._12_4_ = auVar89._12_4_ + auVar91._12_4_;
      auVar42._16_4_ = auVar89._16_4_ + auVar91._16_4_;
      auVar42._20_4_ = auVar89._20_4_ + auVar91._20_4_;
      auVar42._24_4_ = auVar89._24_4_ + auVar91._24_4_;
      auVar42._28_4_ = auVar89._28_4_ + auVar91._28_4_;
      auVar89._4_4_ = uVar15;
      auVar89._0_4_ = uVar15;
      auVar89._8_4_ = uVar15;
      auVar89._12_4_ = uVar15;
      auVar89._16_4_ = uVar15;
      auVar89._20_4_ = uVar15;
      auVar89._24_4_ = uVar15;
      auVar89._28_4_ = uVar15;
      vpor_avx2(auVar42,auVar89);
      auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      auVar91._4_4_ = uVar16;
      auVar91._0_4_ = uVar16;
      auVar91._8_4_ = uVar16;
      auVar91._12_4_ = uVar16;
      auVar91._16_4_ = uVar16;
      auVar91._20_4_ = uVar16;
      auVar91._24_4_ = uVar16;
      auVar91._28_4_ = uVar16;
      vpor_avx2(auVar42,auVar91);
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      auVar43._4_4_ = uVar17;
      auVar43._0_4_ = uVar17;
      auVar43._8_4_ = uVar17;
      auVar43._12_4_ = uVar17;
      auVar43._16_4_ = uVar17;
      auVar43._20_4_ = uVar17;
      auVar43._24_4_ = uVar17;
      auVar43._28_4_ = uVar17;
      vpor_avx2(auVar42,auVar43);
      auVar35 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      fVar83 = auVar35._8_4_;
      fVar84 = auVar35._12_4_;
      fVar85 = auVar35._16_4_;
      fVar86 = auVar35._20_4_;
      fVar87 = auVar35._24_4_;
      fVar88 = auVar35._28_4_;
      auVar36 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      auVar37 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      auVar38 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar39 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar21));
      in_ZMM24 = ZEXT3264(auVar39);
      auVar40 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + (longlong)(local_2c0 + 8)));
      auVar41 = vgatherdps_avx512vl(*param_9);
      auVar42 = *(undefined1 (*) [32])(lVar28 + -0x40 + lVar14);
      auVar44 = *(undefined1 (*) [32])(lVar28 + -0x20 + lVar14);
      auVar43 = vblendps_avx(auVar44,auVar42,0x24);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar43,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(lVar28 + lVar14));
      auVar44 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar28 + lVar14),auVar55,auVar44);
      auVar45 = vinsertf32x4_avx512vl(auVar42,auVar44._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar42,auVar44,3);
      auVar44 = vmulps_avx512vl(auVar39,auVar45);
      auVar48._0_4_ = auVar40._0_4_ * auVar42._0_4_;
      auVar48._4_4_ = auVar40._4_4_ * auVar42._4_4_;
      auVar48._8_4_ = auVar40._8_4_ * auVar42._8_4_;
      auVar48._12_4_ = auVar40._12_4_ * auVar42._12_4_;
      auVar48._16_4_ = auVar40._16_4_ * auVar42._16_4_;
      auVar48._20_4_ = auVar40._20_4_ * auVar42._20_4_;
      auVar48._24_4_ = auVar40._24_4_ * auVar42._24_4_;
      auVar48._28_4_ = auVar40._28_4_ * auVar42._28_4_;
      auVar42 = vmulps_avx512vl(auVar41,auVar43);
      auVar43 = vmulps_avx512vl(auVar89,auVar44);
      auVar46._0_4_ = auVar91._0_4_ * auVar48._0_4_;
      auVar46._4_4_ = auVar91._4_4_ * auVar48._4_4_;
      auVar46._8_4_ = auVar91._8_4_ * auVar48._8_4_;
      auVar46._12_4_ = auVar91._12_4_ * auVar48._12_4_;
      auVar46._16_4_ = auVar91._16_4_ * auVar48._16_4_;
      auVar46._20_4_ = auVar91._20_4_ * auVar48._20_4_;
      auVar46._24_4_ = auVar91._24_4_ * auVar48._24_4_;
      auVar46._28_4_ = auVar91._28_4_ * auVar48._28_4_;
      auVar45 = vmulps_avx512vl(auVar34,auVar42);
      auVar43 = vfmsub231ps_avx512vl(auVar43,auVar34,auVar48);
      auVar46 = vfmsub231ps_avx512vl(auVar46,auVar89,auVar42);
      fVar97 = auVar91._0_4_ * auVar44._0_4_ - auVar45._0_4_;
      fVar100 = auVar91._4_4_ * auVar44._4_4_ - auVar45._4_4_;
      fVar101 = auVar91._8_4_ * auVar44._8_4_ - auVar45._8_4_;
      fVar102 = auVar91._12_4_ * auVar44._12_4_ - auVar45._12_4_;
      fVar103 = auVar91._16_4_ * auVar44._16_4_ - auVar45._16_4_;
      fVar104 = auVar91._20_4_ * auVar44._20_4_ - auVar45._20_4_;
      fVar105 = auVar91._24_4_ * auVar44._24_4_ - auVar45._24_4_;
      fVar107 = auVar91._28_4_ * auVar44._28_4_ - auVar45._28_4_;
      auVar96._0_4_ = auVar46._0_4_ + auVar46._0_4_;
      auVar96._4_4_ = auVar46._4_4_ + auVar46._4_4_;
      auVar96._8_4_ = auVar46._8_4_ + auVar46._8_4_;
      auVar96._12_4_ = auVar46._12_4_ + auVar46._12_4_;
      auVar96._16_4_ = auVar46._16_4_ + auVar46._16_4_;
      auVar96._20_4_ = auVar46._20_4_ + auVar46._20_4_;
      auVar96._24_4_ = auVar46._24_4_ + auVar46._24_4_;
      auVar96._28_4_ = auVar46._28_4_ + auVar46._28_4_;
      auVar98._0_4_ = fVar97 + fVar97;
      auVar98._4_4_ = fVar100 + fVar100;
      auVar98._8_4_ = fVar101 + fVar101;
      auVar98._12_4_ = fVar102 + fVar102;
      auVar98._16_4_ = fVar103 + fVar103;
      auVar98._20_4_ = fVar104 + fVar104;
      auVar98._24_4_ = fVar105 + fVar105;
      auVar98._28_4_ = fVar107 + fVar107;
      auVar43 = vaddps_avx512vl(auVar43,auVar43);
      fVar106 = auVar35._0_4_;
      auVar52._0_4_ = fVar106 * auVar96._0_4_ + auVar44._0_4_;
      fVar108 = auVar35._4_4_;
      auVar52._4_4_ = fVar108 * auVar96._4_4_ + auVar44._4_4_;
      auVar52._8_4_ = fVar83 * auVar96._8_4_ + auVar44._8_4_;
      auVar52._12_4_ = fVar84 * auVar96._12_4_ + auVar44._12_4_;
      auVar52._16_4_ = fVar85 * auVar96._16_4_ + auVar44._16_4_;
      auVar52._20_4_ = fVar86 * auVar96._20_4_ + auVar44._20_4_;
      auVar52._24_4_ = fVar87 * auVar96._24_4_ + auVar44._24_4_;
      auVar52._28_4_ = fVar88 * auVar96._28_4_ + auVar44._28_4_;
      auVar49._0_4_ = fVar106 * auVar98._0_4_ + auVar48._0_4_;
      auVar49._4_4_ = fVar108 * auVar98._4_4_ + auVar48._4_4_;
      auVar49._8_4_ = fVar83 * auVar98._8_4_ + auVar48._8_4_;
      auVar49._12_4_ = fVar84 * auVar98._12_4_ + auVar48._12_4_;
      auVar49._16_4_ = fVar85 * auVar98._16_4_ + auVar48._16_4_;
      auVar49._20_4_ = fVar86 * auVar98._20_4_ + auVar48._20_4_;
      auVar49._24_4_ = fVar87 * auVar98._24_4_ + auVar48._24_4_;
      auVar49._28_4_ = fVar88 * auVar98._28_4_ + auVar48._28_4_;
      auVar42 = vfmadd231ps_avx512vl(auVar42,auVar35,auVar43);
      auVar44 = vmulps_avx512vl(auVar89,auVar96);
      auVar45 = vmulps_avx512vl(auVar91,auVar98);
      auVar46 = vmulps_avx512vl(auVar34,auVar43);
      auVar44 = vfmsub231ps_avx512vl(auVar44,auVar34,auVar98);
      auVar42 = vaddps_avx512vl(auVar42,auVar44);
      auVar44 = vfmsub231ps_avx512vl(auVar45,auVar89,auVar43);
      auVar44 = vaddps_avx512vl(auVar52,auVar44);
      auVar43 = vfmsub231ps_avx512vl(auVar46,auVar91,auVar96);
      auVar43 = vaddps_avx512vl(auVar49,auVar43);
      auVar45._0_4_ = auVar36._0_4_ + auVar44._0_4_;
      auVar45._4_4_ = auVar36._4_4_ + auVar44._4_4_;
      auVar45._8_4_ = auVar36._8_4_ + auVar44._8_4_;
      auVar45._12_4_ = auVar36._12_4_ + auVar44._12_4_;
      auVar45._16_4_ = auVar36._16_4_ + auVar44._16_4_;
      auVar45._20_4_ = auVar36._20_4_ + auVar44._20_4_;
      auVar45._24_4_ = auVar36._24_4_ + auVar44._24_4_;
      auVar45._28_4_ = auVar36._28_4_ + auVar44._28_4_;
      auVar50._0_4_ = auVar37._0_4_ + auVar43._0_4_;
      auVar50._4_4_ = auVar37._4_4_ + auVar43._4_4_;
      auVar50._8_4_ = auVar37._8_4_ + auVar43._8_4_;
      auVar50._12_4_ = auVar37._12_4_ + auVar43._12_4_;
      auVar50._16_4_ = auVar37._16_4_ + auVar43._16_4_;
      auVar50._20_4_ = auVar37._20_4_ + auVar43._20_4_;
      auVar50._24_4_ = auVar37._24_4_ + auVar43._24_4_;
      auVar50._28_4_ = auVar37._28_4_ + auVar43._28_4_;
      local_120 = vbroadcastss_avx512vl(ZEXT416(*param_10));
      auVar42 = vaddps_avx512vl(auVar38,auVar42);
      auVar45 = vsubps_avx512vl(auVar45,local_120);
      uVar18 = param_10[1];
      auVar99._4_4_ = uVar18;
      auVar99._0_4_ = uVar18;
      auVar99._8_4_ = uVar18;
      auVar99._12_4_ = uVar18;
      auVar99._16_4_ = uVar18;
      auVar99._20_4_ = uVar18;
      auVar99._24_4_ = uVar18;
      auVar99._28_4_ = uVar18;
      auVar46 = vbroadcastss_avx512vl(ZEXT416(param_10[2]));
      auVar44 = vsubps_avx(auVar50,auVar99);
      auVar47 = vsubps_avx512vl(auVar42,auVar46);
      auVar42 = *(undefined1 (*) [32])(param_6 + param_12);
      auVar43 = vunpcklps_avx512vl(auVar45,auVar44);
      auVar48 = vunpcklps_avx512vl(auVar47,auVar42);
      auVar49 = vunpcklpd_avx512vl(auVar43,auVar48);
      auVar48 = vunpckhpd_avx512vl(auVar43,auVar48);
      auVar43 = vunpckhps_avx(auVar45,auVar44);
      auVar42 = vunpckhps_avx512vl(auVar47,auVar42);
      auVar50 = vunpcklpd_avx512vl(auVar43,auVar42);
      auVar42 = vunpckhpd_avx512vl(auVar43,auVar42);
      auVar43 = vinsertf32x4_avx512vl(auVar49,auVar48._0_16_,1);
      pauVar26[-3] = auVar43;
      auVar43 = vinsertf32x4_avx512vl(auVar50,auVar42._0_16_,1);
      pauVar26[-2] = auVar43;
      auVar43 = vshuff64x2_avx512vl(auVar49,auVar48,3);
      pauVar26[-1] = auVar43;
      auVar42 = vshuff64x2_avx512vl(auVar50,auVar42,3);
      *pauVar26 = auVar42;
      auVar42 = vpermt2ps_avx512vl(auVar47,auVar54,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar45,auVar92,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar69,auVar42);
      *(undefined1 (*) [32])(lVar28 + -0x40 + lVar14) = auVar43;
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar70,auVar45);
      *(undefined1 (*) [32])(lVar28 + -0x20 + lVar14) = auVar42;
      auVar42 = vpermt2ps_avx512vl(auVar44,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar45);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar71,auVar47);
      *(undefined1 (*) [32])(lVar28 + lVar14) = auVar42;
      auVar45 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
      auVar42 = *(undefined1 (*) [32])(lVar23 + -0x40 + lVar14);
      auVar44 = *(undefined1 (*) [32])(lVar23 + -0x20 + lVar14);
      auVar43 = vblendps_avx(auVar44,auVar42,0x24);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar53,*(undefined1 (*) [32])(lVar23 + lVar14));
      auVar44 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar23 + lVar14),auVar55,auVar44);
      auVar47 = vinsertf32x4_avx512vl(auVar42,auVar44._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar42,auVar44,3);
      auVar44 = vmulps_avx512vl(auVar39,auVar47);
      auVar42 = vmulps_avx512vl(auVar40,auVar42);
      auVar51._0_4_ = auVar41._0_4_ * auVar43._0_4_;
      auVar51._4_4_ = auVar41._4_4_ * auVar43._4_4_;
      auVar51._8_4_ = auVar41._8_4_ * auVar43._8_4_;
      auVar51._12_4_ = auVar41._12_4_ * auVar43._12_4_;
      auVar51._16_4_ = auVar41._16_4_ * auVar43._16_4_;
      auVar51._20_4_ = auVar41._20_4_ * auVar43._20_4_;
      auVar51._24_4_ = auVar41._24_4_ * auVar43._24_4_;
      auVar51._28_4_ = auVar41._28_4_ * auVar43._28_4_;
      auVar43 = vmulps_avx512vl(auVar89,auVar44);
      auVar47 = vmulps_avx512vl(auVar91,auVar42);
      auVar48 = vmulps_avx512vl(auVar34,auVar51);
      auVar43 = vfmsub231ps_avx512vl(auVar43,auVar34,auVar42);
      auVar47 = vfmsub231ps_avx512vl(auVar47,auVar89,auVar51);
      auVar48 = vfmsub231ps_avx512vl(auVar48,auVar91,auVar44);
      auVar47 = vaddps_avx512vl(auVar47,auVar47);
      auVar48 = vaddps_avx512vl(auVar48,auVar48);
      auVar43 = vaddps_avx512vl(auVar43,auVar43);
      auVar44 = vfmadd231ps_avx512vl(auVar44,auVar35,auVar47);
      auVar42 = vfmadd231ps_avx512vl(auVar42,auVar35,auVar48);
      auVar49 = vfmadd231ps_avx512vl(auVar51,auVar35,auVar43);
      auVar50 = vmulps_avx512vl(auVar89,auVar47);
      auVar51 = vmulps_avx512vl(auVar91,auVar48);
      auVar52 = vmulps_avx512vl(auVar34,auVar43);
      auVar48 = vfmsub231ps_avx512vl(auVar50,auVar34,auVar48);
      local_280 = vaddps_avx512vl(auVar49,auVar48);
      auVar43 = vfmsub231ps_avx512vl(auVar51,auVar89,auVar43);
      local_2c0 = vaddps_avx512vl(auVar44,auVar43);
      auVar44 = vfmsub231ps_avx512vl(auVar52,auVar91,auVar47);
      local_2a0 = vaddps_avx512vl(auVar42,auVar44);
      auVar42 = *(undefined1 (*) [32])(lVar25 + -0x40 + lVar14);
      auVar44 = *(undefined1 (*) [32])(lVar25 + -0x20 + lVar14);
      auVar43 = vblendps_avx(auVar44,auVar42,0x24);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar53,*(undefined1 (*) [32])(lVar25 + lVar14));
      auVar44 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar25 + lVar14),auVar55,auVar44);
      auVar53 = vinsertf32x4_avx512vl(auVar42,auVar44._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar42,auVar44,3);
      auVar44 = vmulps_avx512vl(auVar39,auVar53);
      auVar53._0_4_ = auVar40._0_4_ * auVar42._0_4_;
      auVar53._4_4_ = auVar40._4_4_ * auVar42._4_4_;
      auVar53._8_4_ = auVar40._8_4_ * auVar42._8_4_;
      auVar53._12_4_ = auVar40._12_4_ * auVar42._12_4_;
      auVar53._16_4_ = auVar40._16_4_ * auVar42._16_4_;
      auVar53._20_4_ = auVar40._20_4_ * auVar42._20_4_;
      auVar53._24_4_ = auVar40._24_4_ * auVar42._24_4_;
      auVar53._28_4_ = auVar40._28_4_ * auVar42._28_4_;
      auVar47._0_4_ = auVar41._0_4_ * auVar43._0_4_;
      auVar47._4_4_ = auVar41._4_4_ * auVar43._4_4_;
      auVar47._8_4_ = auVar41._8_4_ * auVar43._8_4_;
      auVar47._12_4_ = auVar41._12_4_ * auVar43._12_4_;
      auVar47._16_4_ = auVar41._16_4_ * auVar43._16_4_;
      auVar47._20_4_ = auVar41._20_4_ * auVar43._20_4_;
      auVar47._24_4_ = auVar41._24_4_ * auVar43._24_4_;
      auVar47._28_4_ = auVar41._28_4_ * auVar43._28_4_;
      auVar42 = vmulps_avx512vl(auVar91,auVar53);
      auVar43 = vmulps_avx512vl(auVar34,auVar47);
      fVar97 = auVar34._0_4_ * auVar53._0_4_ - auVar89._0_4_ * auVar44._0_4_;
      fVar100 = auVar34._4_4_ * auVar53._4_4_ - auVar89._4_4_ * auVar44._4_4_;
      fVar101 = auVar34._8_4_ * auVar53._8_4_ - auVar89._8_4_ * auVar44._8_4_;
      fVar102 = auVar34._12_4_ * auVar53._12_4_ - auVar89._12_4_ * auVar44._12_4_;
      fVar103 = auVar34._16_4_ * auVar53._16_4_ - auVar89._16_4_ * auVar44._16_4_;
      fVar104 = auVar34._20_4_ * auVar53._20_4_ - auVar89._20_4_ * auVar44._20_4_;
      fVar105 = auVar34._24_4_ * auVar53._24_4_ - auVar89._24_4_ * auVar44._24_4_;
      fVar107 = auVar34._28_4_ * auVar53._28_4_ - auVar89._28_4_ * auVar44._28_4_;
      auVar42 = vfmsub231ps_avx512vl(auVar42,auVar89,auVar47);
      auVar43 = vfmsub231ps_avx512vl(auVar43,auVar91,auVar44);
      auVar42 = vaddps_avx512vl(auVar42,auVar42);
      auVar43 = vaddps_avx512vl(auVar43,auVar43);
      auVar41._0_4_ = fVar97 + fVar97;
      auVar41._4_4_ = fVar100 + fVar100;
      auVar41._8_4_ = fVar101 + fVar101;
      auVar41._12_4_ = fVar102 + fVar102;
      auVar41._16_4_ = fVar103 + fVar103;
      auVar41._20_4_ = fVar104 + fVar104;
      auVar41._24_4_ = fVar105 + fVar105;
      auVar41._28_4_ = fVar107 + fVar107;
      auVar44 = vfmadd231ps_avx512vl(auVar44,auVar35,auVar42);
      auVar53 = vfmadd231ps_avx512vl(auVar53,auVar35,auVar43);
      auVar35 = vmulps_avx512vl(auVar89,auVar42);
      auVar39 = vmulps_avx512vl(auVar91,auVar43);
      auVar40 = vmulps_avx512vl(auVar34,auVar41);
      auVar43 = vfmsub231ps_avx512vl(auVar35,auVar43,auVar34);
      auVar34 = vfmsub231ps_avx512vl(auVar39,auVar41,auVar89);
      auVar44 = vaddps_avx512vl(auVar44,auVar34);
      auVar42 = vfmsub231ps_avx512vl(auVar40,auVar42,auVar91);
      auVar42 = vaddps_avx512vl(auVar53,auVar42);
      auVar39._0_4_ = auVar36._0_4_ + auVar44._0_4_;
      auVar39._4_4_ = auVar36._4_4_ + auVar44._4_4_;
      auVar39._8_4_ = auVar36._8_4_ + auVar44._8_4_;
      auVar39._12_4_ = auVar36._12_4_ + auVar44._12_4_;
      auVar39._16_4_ = auVar36._16_4_ + auVar44._16_4_;
      auVar39._20_4_ = auVar36._20_4_ + auVar44._20_4_;
      auVar39._24_4_ = auVar36._24_4_ + auVar44._24_4_;
      auVar39._28_4_ = auVar36._28_4_ + auVar44._28_4_;
      auVar35._0_4_ = auVar37._0_4_ + auVar42._0_4_;
      auVar35._4_4_ = auVar37._4_4_ + auVar42._4_4_;
      auVar35._8_4_ = auVar37._8_4_ + auVar42._8_4_;
      auVar35._12_4_ = auVar37._12_4_ + auVar42._12_4_;
      auVar35._16_4_ = auVar37._16_4_ + auVar42._16_4_;
      auVar35._20_4_ = auVar37._20_4_ + auVar42._20_4_;
      auVar35._24_4_ = auVar37._24_4_ + auVar42._24_4_;
      auVar35._28_4_ = auVar37._28_4_ + auVar42._28_4_;
      auVar34._0_4_ = auVar38._0_4_ + auVar41._0_4_ * fVar106 + auVar47._0_4_ + auVar43._0_4_;
      auVar34._4_4_ = auVar38._4_4_ + auVar41._4_4_ * fVar108 + auVar47._4_4_ + auVar43._4_4_;
      auVar34._8_4_ = auVar38._8_4_ + auVar41._8_4_ * fVar83 + auVar47._8_4_ + auVar43._8_4_;
      auVar34._12_4_ = auVar38._12_4_ + auVar41._12_4_ * fVar84 + auVar47._12_4_ + auVar43._12_4_;
      auVar34._16_4_ = auVar38._16_4_ + auVar41._16_4_ * fVar85 + auVar47._16_4_ + auVar43._16_4_;
      auVar34._20_4_ = auVar38._20_4_ + auVar41._20_4_ * fVar86 + auVar47._20_4_ + auVar43._20_4_;
      auVar34._24_4_ = auVar38._24_4_ + auVar41._24_4_ * fVar87 + auVar47._24_4_ + auVar43._24_4_;
      auVar34._28_4_ = auVar38._28_4_ + auVar41._28_4_ * fVar88 + auVar47._28_4_ + auVar43._28_4_;
      auVar43 = vsubps_avx(auVar39,local_120);
      auVar53 = vsubps_avx(auVar35,auVar99);
      auVar35 = vsubps_avx512vl(auVar34,auVar46);
      auVar42 = vpermt2ps_avx512vl(auVar35,auVar54,auVar53);
      auVar44 = vpermt2ps_avx512vl(auVar43,auVar92,auVar53);
      auVar44 = vpermt2ps_avx512vl(auVar44,auVar69,auVar42);
      *(undefined1 (*) [32])(lVar25 + -0x40 + lVar14) = auVar44;
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar70,auVar43);
      *(undefined1 (*) [32])(lVar25 + -0x20 + lVar14) = auVar42;
      auVar34 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar112 = __ymm_0000000700000007000000070000000700000006000000050000000f0000000e._0_16_;
      auVar42 = vpermt2ps_avx512vl(auVar53,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar43);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar71,auVar35);
      *(undefined1 (*) [32])(lVar25 + lVar14) = auVar42;
      auVar42 = *(undefined1 (*) [32])(lVar24 + -0x40 + lVar14);
      auVar44 = *(undefined1 (*) [32])(lVar24 + -0x20 + lVar14);
      auVar45 = vpermt2ps_avx512vl(auVar42,auVar45,auVar44);
      auVar36 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar24 + lVar14),auVar55,auVar44);
      auVar37 = vinsertf32x4_avx512vl(auVar45,auVar36._0_16_,1);
      auVar111 = auVar37._0_16_;
      auVar45 = vshuff64x2_avx512vl(auVar45,auVar36,3);
      auVar110 = __ymm_0000000000000000000000000000000600000003000000000000000d0000000a._0_16_;
      auVar42 = vpermt2ps_avx512vl(auVar44,
                                   ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a
                                   ,auVar42);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000
                                   ,*(undefined1 (*) [32])(lVar24 + lVar14));
      auVar43 = vsubps_avx512vl(auVar37,auVar43);
      auVar53 = vsubps_avx512vl(auVar45,auVar53);
      auVar45 = vsubps_avx512vl(auVar42,auVar35);
      auVar44._4_4_ = param_11;
      auVar44._0_4_ = param_11;
      auVar44._8_4_ = param_11;
      auVar44._12_4_ = param_11;
      auVar44._16_4_ = param_11;
      auVar44._20_4_ = param_11;
      auVar44._24_4_ = param_11;
      auVar44._28_4_ = param_11;
      auVar35 = vdivps_avx512vl(auVar43,auVar44);
      auVar32 = auVar35._0_16_;
      auVar42 = vdivps_avx(auVar53,auVar44);
      auVar44 = vdivps_avx(auVar45,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar44,auVar54,auVar42);
      auVar53 = vpermt2ps_avx512vl(auVar35,auVar92,auVar42);
      auVar109 = auVar69._0_16_;
      auVar53 = vpermt2ps_avx512vl(auVar53,auVar69,auVar43);
      *(undefined1 (*) [32])(lVar21 + -0x40 + lVar14) = auVar53;
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar70,auVar35);
      *(undefined1 (*) [32])(lVar21 + -0x20 + lVar14) = auVar43;
      auVar43 = vpermt2ps_avx512vl(auVar42,auVar34,auVar35);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar71,auVar44);
      *(undefined1 (*) [32])(lVar21 + lVar14) = auVar43;
      auVar45 = vsubps_avx512vl(local_2c0,auVar35);
      auVar33 = auVar45._0_16_;
      auVar43 = vsubps_avx(local_2a0,auVar42);
      auVar53 = vsubps_avx(local_280,auVar44);
      fVar83 = auVar43._0_4_;
      auVar36._0_4_ = fVar83 * fVar83;
      fVar84 = auVar43._4_4_;
      auVar36._4_4_ = fVar84 * fVar84;
      fVar85 = auVar43._8_4_;
      auVar36._8_4_ = fVar85 * fVar85;
      fVar86 = auVar43._12_4_;
      auVar36._12_4_ = fVar86 * fVar86;
      fVar87 = auVar43._16_4_;
      auVar36._16_4_ = fVar87 * fVar87;
      fVar88 = auVar43._20_4_;
      auVar36._20_4_ = fVar88 * fVar88;
      fVar97 = auVar43._24_4_;
      auVar36._24_4_ = fVar97 * fVar97;
      fVar100 = auVar43._28_4_;
      auVar36._28_4_ = fVar100 * fVar100;
      auVar43 = vfmadd231ps_avx512vl(auVar36,auVar45,auVar45);
      fVar101 = auVar53._0_4_;
      auVar37._0_4_ = fVar101 * fVar101 + auVar43._0_4_;
      fVar102 = auVar53._4_4_;
      auVar37._4_4_ = fVar102 * fVar102 + auVar43._4_4_;
      fVar103 = auVar53._8_4_;
      auVar37._8_4_ = fVar103 * fVar103 + auVar43._8_4_;
      fVar104 = auVar53._12_4_;
      auVar37._12_4_ = fVar104 * fVar104 + auVar43._12_4_;
      fVar105 = auVar53._16_4_;
      auVar37._16_4_ = fVar105 * fVar105 + auVar43._16_4_;
      fVar107 = auVar53._20_4_;
      auVar37._20_4_ = fVar107 * fVar107 + auVar43._20_4_;
      fVar106 = auVar53._24_4_;
      auVar37._24_4_ = fVar106 * fVar106 + auVar43._24_4_;
      fVar108 = auVar53._28_4_;
      auVar37._28_4_ = fVar108 * fVar108 + auVar43._28_4_;
      uVar10 = vcmpps_avx512vl(auVar72,auVar37,1);
      bVar29 = (byte)uVar10;
      if (bVar29 != 0) {
        auVar43 = vdivps_avx(auVar72,auVar37);
        auVar43 = vsqrtps_avx(auVar43);
        auVar53 = vfmadd213ps_avx512vl(auVar45,auVar43,auVar35);
        auVar33 = auVar53._0_16_;
        bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
        bVar4 = (bool)((byte)(uVar10 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar10 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar10 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar10 >> 6) & 1);
        bVar9 = SUB81(uVar10 >> 7,0);
        local_2c0._4_4_ = (uint)bVar3 * auVar53._4_4_ | (uint)!bVar3 * local_2c0._4_4_;
        local_2c0._0_4_ =
             (uint)(bVar29 & 1) * auVar53._0_4_ | (uint)!(bool)(bVar29 & 1) * local_2c0._0_4_;
        local_2c0._8_4_ = (uint)bVar4 * auVar53._8_4_ | (uint)!bVar4 * local_2c0._8_4_;
        local_2c0._12_4_ = (uint)bVar5 * auVar53._12_4_ | (uint)!bVar5 * local_2c0._12_4_;
        local_2c0._16_4_ = (uint)bVar6 * auVar53._16_4_ | (uint)!bVar6 * local_2c0._16_4_;
        local_2c0._20_4_ = (uint)bVar7 * auVar53._20_4_ | (uint)!bVar7 * local_2c0._20_4_;
        local_2c0._24_4_ = (uint)bVar8 * auVar53._24_4_ | (uint)!bVar8 * local_2c0._24_4_;
        local_2c0._28_4_ = (uint)bVar9 * auVar53._28_4_ | (uint)!bVar9 * local_2c0._28_4_;
        bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
        bVar4 = (bool)((byte)(uVar10 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar10 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar10 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar10 >> 6) & 1);
        bVar9 = SUB81(uVar10 >> 7,0);
        local_2a0._4_4_ =
             (uint)bVar3 * (int)(auVar43._4_4_ * fVar84 + auVar42._4_4_) |
             (uint)!bVar3 * local_2a0._4_4_;
        local_2a0._0_4_ =
             (uint)(bVar29 & 1) * (int)(auVar43._0_4_ * fVar83 + auVar42._0_4_) |
             (uint)!(bool)(bVar29 & 1) * local_2a0._0_4_;
        local_2a0._8_4_ =
             (uint)bVar4 * (int)(auVar43._8_4_ * fVar85 + auVar42._8_4_) |
             (uint)!bVar4 * local_2a0._8_4_;
        local_2a0._12_4_ =
             (uint)bVar5 * (int)(auVar43._12_4_ * fVar86 + auVar42._12_4_) |
             (uint)!bVar5 * local_2a0._12_4_;
        local_2a0._16_4_ =
             (uint)bVar6 * (int)(auVar43._16_4_ * fVar87 + auVar42._16_4_) |
             (uint)!bVar6 * local_2a0._16_4_;
        local_2a0._20_4_ =
             (uint)bVar7 * (int)(auVar43._20_4_ * fVar88 + auVar42._20_4_) |
             (uint)!bVar7 * local_2a0._20_4_;
        local_2a0._24_4_ =
             (uint)bVar8 * (int)(auVar43._24_4_ * fVar97 + auVar42._24_4_) |
             (uint)!bVar8 * local_2a0._24_4_;
        local_2a0._28_4_ =
             (uint)bVar9 * (int)(auVar43._28_4_ * fVar100 + auVar42._28_4_) |
             (uint)!bVar9 * local_2a0._28_4_;
        bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
        bVar4 = (bool)((byte)(uVar10 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar10 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar10 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar10 >> 6) & 1);
        bVar9 = SUB81(uVar10 >> 7,0);
        local_280._4_4_ =
             (uint)bVar3 * (int)(auVar43._4_4_ * fVar102 + auVar44._4_4_) |
             (uint)!bVar3 * local_280._4_4_;
        local_280._0_4_ =
             (uint)(bVar29 & 1) * (int)(auVar43._0_4_ * fVar101 + auVar44._0_4_) |
             (uint)!(bool)(bVar29 & 1) * local_280._0_4_;
        local_280._8_4_ =
             (uint)bVar4 * (int)(auVar43._8_4_ * fVar103 + auVar44._8_4_) |
             (uint)!bVar4 * local_280._8_4_;
        local_280._12_4_ =
             (uint)bVar5 * (int)(auVar43._12_4_ * fVar104 + auVar44._12_4_) |
             (uint)!bVar5 * local_280._12_4_;
        local_280._16_4_ =
             (uint)bVar6 * (int)(auVar43._16_4_ * fVar105 + auVar44._16_4_) |
             (uint)!bVar6 * local_280._16_4_;
        local_280._20_4_ =
             (uint)bVar7 * (int)(auVar43._20_4_ * fVar107 + auVar44._20_4_) |
             (uint)!bVar7 * local_280._20_4_;
        local_280._24_4_ =
             (uint)bVar8 * (int)(auVar43._24_4_ * fVar106 + auVar44._24_4_) |
             (uint)!bVar8 * local_280._24_4_;
        local_280._28_4_ =
             (uint)bVar9 * (int)(auVar43._28_4_ * fVar108 + auVar44._28_4_) |
             (uint)!bVar9 * local_280._28_4_;
      }
      auVar42 = vpermt2ps_avx512vl(local_280,auVar54,local_2a0);
      auVar44 = vpermt2ps_avx512vl(local_2c0,auVar92,local_2a0);
      auVar44 = vpermt2ps_avx512vl(auVar44,auVar69,auVar42);
      *(undefined1 (*) [32])(lVar23 + -0x40 + lVar14) = auVar44;
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar70,local_2c0);
      *(undefined1 (*) [32])(lVar23 + -0x20 + lVar14) = auVar42;
      auVar42 = vpermt2ps_avx512vl(local_2a0,
                                   ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,local_2c0);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar71,local_280);
      *(undefined1 (*) [32])(lVar23 + lVar14) = auVar42;
      unaff_R13 = unaff_R13 + 8;
      lVar28 = lVar28 + 0x60;
      pauVar26 = pauVar26 + 4;
      lVar23 = lVar23 + 0x60;
      lVar25 = lVar25 + 0x60;
      lVar24 = lVar24 + 0x60;
      lVar21 = lVar21 + 0x60;
      param_12 = param_12 + 0x20;
    } while (unaff_R13 < lVar20);
    param_12 = (int)unaff_R13;
    unaff_R12 = param_6;
  }
  if (param_12 < param_13) {
    auVar54 = vpbroadcastd_avx512vl();
    auVar55._0_4_ =
         auVar54._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar55._4_4_ = auVar54._4_4_ + _UNK_150b50ae4;
    auVar55._8_4_ = auVar54._8_4_ + _UNK_150b50ae8;
    auVar55._12_4_ = auVar54._12_4_ + _UNK_150b50aec;
    auVar55._16_4_ = auVar54._16_4_ + _UNK_150b50af0;
    auVar55._20_4_ = auVar54._20_4_ + _UNK_150b50af4;
    auVar55._24_4_ = auVar54._24_4_ + _UNK_150b50af8;
    auVar55._28_4_ = auVar54._28_4_ + _UNK_150b50afc;
    auVar54 = vpbroadcastd_avx512vl();
    uVar10 = vpcmpgtd_avx512vl(auVar54,auVar55);
    auVar55 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_8 + param_12 * 4));
    bVar29 = (byte)uVar10;
    auVar56._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
    auVar56._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
    auVar56._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
    auVar56._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
    auVar56._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar56._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar56._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar56._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    vpslld_avx2(auVar56,2);
    auVar55 = vgatherdps_avx512vl(param_9[param_1 * 2]);
    auVar57._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
    auVar57._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
    auVar57._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
    auVar57._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
    auVar57._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar57._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar57._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar57._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar92 = vpslld_avx2(auVar56,4);
    auVar55 = vpslld_avx2(auVar56,5);
    auVar54._0_4_ = auVar55._0_4_ + auVar92._0_4_;
    auVar54._4_4_ = auVar55._4_4_ + auVar92._4_4_;
    auVar54._8_4_ = auVar55._8_4_ + auVar92._8_4_;
    auVar54._12_4_ = auVar55._12_4_ + auVar92._12_4_;
    auVar54._16_4_ = auVar55._16_4_ + auVar92._16_4_;
    auVar54._20_4_ = auVar55._20_4_ + auVar92._20_4_;
    auVar54._24_4_ = auVar55._24_4_ + auVar92._24_4_;
    auVar54._28_4_ = auVar55._28_4_ + auVar92._28_4_;
    auVar92._4_4_ = __real_00000004;
    auVar92._0_4_ = __real_00000004;
    auVar92._8_4_ = __real_00000004;
    auVar92._12_4_ = __real_00000004;
    auVar92._16_4_ = __real_00000004;
    auVar92._20_4_ = __real_00000004;
    auVar92._24_4_ = __real_00000004;
    auVar92._28_4_ = __real_00000004;
    vpord_avx512vl(auVar54,auVar92);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar58._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
    auVar58._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
    auVar58._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
    auVar58._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
    auVar58._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar58._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar58._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar58._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar69._4_4_ = __real_00000008;
    auVar69._0_4_ = __real_00000008;
    auVar69._8_4_ = __real_00000008;
    auVar69._12_4_ = __real_00000008;
    auVar69._16_4_ = __real_00000008;
    auVar69._20_4_ = __real_00000008;
    auVar69._24_4_ = __real_00000008;
    auVar69._28_4_ = __real_00000008;
    vpord_avx512vl(auVar54,auVar69);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar59._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
    auVar59._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
    auVar59._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
    auVar59._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
    auVar59._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar59._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar59._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar59._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar70._4_4_ = __real_0000000c;
    auVar70._0_4_ = __real_0000000c;
    auVar70._8_4_ = __real_0000000c;
    auVar70._12_4_ = __real_0000000c;
    auVar70._16_4_ = __real_0000000c;
    auVar70._20_4_ = __real_0000000c;
    auVar70._24_4_ = __real_0000000c;
    auVar70._28_4_ = __real_0000000c;
    vpord_avx512vl(auVar54,auVar70);
    auVar32 = vxorps_avx512vl(auVar32,auVar32);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar60._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar32._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar60._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar32._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar60._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar32._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar60._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar32._12_4_;
    auVar60._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar60._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar60._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar60._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar71._4_4_ = __real_00000010;
    auVar71._0_4_ = __real_00000010;
    auVar71._8_4_ = __real_00000010;
    auVar71._12_4_ = __real_00000010;
    auVar71._16_4_ = __real_00000010;
    auVar71._20_4_ = __real_00000010;
    auVar71._24_4_ = __real_00000010;
    auVar71._28_4_ = __real_00000010;
    vpaddd_avx512vl(auVar54,auVar71);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    fVar100 = (float)((uint)(bVar29 & 1) * auVar55._0_4_);
    fVar87 = (float)((uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_);
    fVar86 = (float)((uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_);
    fVar85 = (float)((uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_);
    fVar84 = (float)((uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_);
    fVar83 = (float)((uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_);
    fVar88 = (float)((uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_);
    fVar97 = (float)((uint)(byte)(uVar10 >> 7) * auVar55._28_4_);
    auVar38._4_4_ = __real_00000014;
    auVar38._0_4_ = __real_00000014;
    auVar38._8_4_ = __real_00000014;
    auVar38._12_4_ = __real_00000014;
    auVar38._16_4_ = __real_00000014;
    auVar38._20_4_ = __real_00000014;
    auVar38._24_4_ = __real_00000014;
    auVar38._28_4_ = __real_00000014;
    vpaddd_avx512vl(auVar54,auVar38);
    auVar33 = vxorps_avx512vl(auVar33,auVar33);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar61._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar61._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar61._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar61._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar61._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar61._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar61._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar61._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar40._4_4_ = __real_00000018;
    auVar40._0_4_ = __real_00000018;
    auVar40._8_4_ = __real_00000018;
    auVar40._12_4_ = __real_00000018;
    auVar40._16_4_ = __real_00000018;
    auVar40._20_4_ = __real_00000018;
    auVar40._24_4_ = __real_00000018;
    auVar40._28_4_ = __real_00000018;
    vpaddd_avx512vl(auVar54,auVar40);
    auVar33 = vxorps_avx512vl(auVar109,auVar109);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar62._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar62._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar62._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar62._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar62._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar62._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar62._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar62._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar11._4_4_ = __real_00000020;
    auVar11._0_4_ = __real_00000020;
    auVar11._8_4_ = __real_00000020;
    auVar11._12_4_ = __real_00000020;
    auVar11._16_4_ = __real_00000020;
    auVar11._20_4_ = __real_00000020;
    auVar11._24_4_ = __real_00000020;
    auVar11._28_4_ = __real_00000020;
    vpaddd_avx512vl(auVar54,auVar11);
    auVar33 = vxorps_avx512vl(auVar110,auVar110);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar63._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar63._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar63._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar63._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar63._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar63._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar63._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar63._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar12._4_4_ = __real_00000024;
    auVar12._0_4_ = __real_00000024;
    auVar12._8_4_ = __real_00000024;
    auVar12._12_4_ = __real_00000024;
    auVar12._16_4_ = __real_00000024;
    auVar12._20_4_ = __real_00000024;
    auVar12._24_4_ = __real_00000024;
    auVar12._28_4_ = __real_00000024;
    vpaddd_avx512vl(auVar54,auVar12);
    auVar33 = vxorps_avx512vl(auVar111,auVar111);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar64._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar64._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar64._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar64._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar64._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar64._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar64._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar64._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar13._4_4_ = __real_00000028;
    auVar13._0_4_ = __real_00000028;
    auVar13._8_4_ = __real_00000028;
    auVar13._12_4_ = __real_00000028;
    auVar13._16_4_ = __real_00000028;
    auVar13._20_4_ = __real_00000028;
    auVar13._24_4_ = __real_00000028;
    auVar13._28_4_ = __real_00000028;
    vpaddd_avx512vl(auVar54,auVar13);
    auVar33 = vxorps_avx512vl(auVar112,auVar112);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_8));
    auVar65._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar65._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar65._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar65._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar65._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar65._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar65._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar65._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    lVar28 = (longlong)param_12;
    pauVar26 = (undefined1 (*) [32])(param_3 + lVar28 * 0xc);
    if (bVar29 == 0xff) {
      auVar55 = pauVar26[1];
      auVar54 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar26,auVar55);
      auVar92 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar26[2],auVar55);
      auVar66 = vinsertf32x4_avx512vl(auVar54,auVar92._0_16_,1);
      auVar67 = vshuff64x2_avx512vl(auVar54,auVar92,3);
      auVar55 = vblendps_avx(auVar55,*pauVar26,0x24);
      auVar68 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar55,pauVar26[2]);
    }
    else {
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + param_7));
      auVar66._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar66._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar66._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar66._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar66._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar66._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar66._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar66._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar33 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + lVar28 * 3));
      auVar67._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_
      ;
      bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
      auVar67._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
      bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
      auVar67._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
      bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
      auVar67._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
      auVar67._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar67._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar67._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar67._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + lVar28 * 3));
      auVar68._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar68._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar68._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar68._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar68._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar68._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar68._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar68._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    }
    pauVar22 = (undefined1 (*) [32])(param_1 + lVar28 * 0x10);
    auVar55 = vmulps_avx512vl(auVar63,auVar66);
    auVar54 = vmulps_avx512vl(auVar64,auVar67);
    auVar92 = vmulps_avx512vl(auVar65,auVar68);
    auVar69 = vmulps_avx512vl(auVar58,auVar55);
    auVar70 = vmulps_avx512vl(auVar59,auVar54);
    auVar71 = vmulps_avx512vl(auVar57,auVar92);
    auVar69 = vfmsub231ps_avx512vl(auVar69,auVar57,auVar54);
    auVar70 = vfmsub231ps_avx512vl(auVar70,auVar58,auVar92);
    auVar71 = vfmsub231ps_avx512vl(auVar71,auVar59,auVar55);
    auVar70 = vaddps_avx512vl(auVar70,auVar70);
    auVar71 = vaddps_avx512vl(auVar71,auVar71);
    auVar69 = vaddps_avx512vl(auVar69,auVar69);
    auVar55 = vfmadd231ps_avx512vl(auVar55,auVar60,auVar70);
    auVar54 = vfmadd231ps_avx512vl(auVar54,auVar60,auVar71);
    auVar92 = vfmadd231ps_avx512vl(auVar92,auVar60,auVar69);
    auVar72 = vmulps_avx512vl(auVar58,auVar70);
    auVar42 = vmulps_avx512vl(auVar59,auVar71);
    auVar44 = vmulps_avx512vl(auVar57,auVar69);
    auVar71 = vfmsub231ps_avx512vl(auVar72,auVar57,auVar71);
    auVar92 = vaddps_avx512vl(auVar92,auVar71);
    auVar69 = vfmsub231ps_avx512vl(auVar42,auVar58,auVar69);
    auVar55 = vaddps_avx512vl(auVar55,auVar69);
    auVar69 = vfmsub231ps_avx512vl(auVar44,auVar59,auVar70);
    auVar54 = vaddps_avx512vl(auVar54,auVar69);
    auVar93._0_4_ = fVar100 + auVar55._0_4_;
    auVar93._4_4_ = fVar87 + auVar55._4_4_;
    auVar93._8_4_ = fVar86 + auVar55._8_4_;
    auVar93._12_4_ = fVar85 + auVar55._12_4_;
    auVar93._16_4_ = fVar84 + auVar55._16_4_;
    auVar93._20_4_ = fVar83 + auVar55._20_4_;
    auVar93._24_4_ = fVar88 + auVar55._24_4_;
    auVar93._28_4_ = fVar97 + auVar55._28_4_;
    auVar55 = vaddps_avx512vl(auVar61,auVar54);
    auVar54 = vaddps_avx512vl(auVar62,auVar92);
    auVar92 = vbroadcastss_avx512vl(ZEXT416(*param_10));
    auVar69 = vsubps_avx512vl(auVar93,auVar92);
    auVar70 = vbroadcastss_avx512vl(ZEXT416(param_10[1]));
    auVar55 = vsubps_avx512vl(auVar55,auVar70);
    auVar71 = vbroadcastss_avx512vl(ZEXT416(param_10[2]));
    auVar54 = vsubps_avx512vl(auVar54,auVar71);
    piVar1 = (int *)(param_6 + param_12 * 4);
    auVar73._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * piVar1[1];
    auVar73._0_4_ = (uint)(bVar29 & 1) * *piVar1;
    auVar73._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * piVar1[2];
    auVar73._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * piVar1[3];
    auVar73._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * piVar1[4];
    auVar73._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * piVar1[5];
    auVar73._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * piVar1[6];
    auVar73._28_4_ = (uint)(byte)(uVar10 >> 7) * piVar1[7];
    if (bVar29 == 0xff) {
      auVar89 = vunpcklps_avx512vl(auVar69,auVar55);
      auVar91 = vunpcklps_avx512vl(auVar54,auVar73);
      auVar72 = vunpcklpd_avx512vl(auVar89,auVar91);
      auVar89 = vunpckhpd_avx512vl(auVar89,auVar91);
      auVar91 = vunpckhps_avx512vl(auVar69,auVar55);
      auVar42 = vunpckhps_avx512vl(auVar54,auVar73);
      auVar44 = vunpcklpd_avx512vl(auVar91,auVar42);
      auVar91 = vunpckhpd_avx512vl(auVar91,auVar42);
      auVar42 = vinsertf32x4_avx512vl(auVar72,auVar89._0_16_,1);
      *pauVar22 = auVar42;
      auVar42 = vinsertf32x4_avx512vl(auVar44,auVar91._0_16_,1);
      pauVar22[1] = auVar42;
      auVar89 = vshuff64x2_avx512vl(auVar72,auVar89,3);
      pauVar22[2] = auVar89;
      auVar89 = vshuff64x2_avx512vl(auVar44,auVar91,3);
      pauVar22[3] = auVar89;
      auVar89 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar54,auVar55);
      auVar91 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar69,auVar55);
      auVar91 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar91,auVar89);
      *pauVar26 = auVar91;
      auVar89 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar89,auVar69);
      pauVar26[1] = auVar89;
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar55,auVar69);
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar55,auVar54);
      pauVar26[2] = auVar55;
      pauVar26 = (undefined1 (*) [32])(param_2 + lVar28 * 0xc);
      auVar55 = *(undefined1 (*) [32])(param_2 + lVar28 * 0xc);
      auVar54 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar28 * 0xc);
      auVar69 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar28 * 0xc);
      auVar89 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar55,auVar54);
      auVar91 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar69,auVar54);
      auVar74 = vinsertf32x4_avx512vl(auVar89,auVar91._0_16_,1);
      auVar75 = vshuff64x2_avx512vl(auVar89,auVar91,3);
      auVar55 = vblendps_avx(auVar54,auVar55,0x24);
      auVar76 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar55,auVar69);
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar91,uVar10,auVar69);
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar91,uVar10,auVar55);
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar91,uVar10,auVar54);
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar91,uVar10,auVar73);
      vscatterdps_avx512vl(ZEXT832(pauVar26) + auVar89,uVar10,auVar69);
      vscatterdps_avx512vl(ZEXT832(pauVar26) + ZEXT432(param_11),uVar10,auVar55);
      vscatterdps_avx512vl(ZEXT832(pauVar26) + auVar91,uVar10,auVar54);
      pauVar26 = (undefined1 (*) [32])(param_2 + lVar28 * 0xc);
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + param_6));
      auVar74._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar74._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar74._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar74._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar74._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar74._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar74._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar74._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + param_4));
      auVar75._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar75._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar75._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar75._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar75._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar75._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar75._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar75._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar33 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                        ._0_16_);
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + (longlong)param_10));
      auVar76._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_
      ;
      bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
      auVar76._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
      bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
      auVar76._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
      bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
      auVar76._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    }
    auVar55 = vmulps_avx512vl(auVar63,auVar74);
    auVar54 = vmulps_avx512vl(auVar64,auVar75);
    auVar69 = vmulps_avx512vl(auVar65,auVar76);
    auVar89 = vmulps_avx512vl(auVar58,auVar55);
    auVar91 = vmulps_avx512vl(auVar59,auVar54);
    auVar72 = vmulps_avx512vl(auVar57,auVar69);
    auVar89 = vfmsub231ps_avx512vl(auVar89,auVar57,auVar54);
    auVar91 = vfmsub231ps_avx512vl(auVar91,auVar58,auVar69);
    auVar72 = vfmsub231ps_avx512vl(auVar72,auVar59,auVar55);
    auVar91 = vaddps_avx512vl(auVar91,auVar91);
    auVar72 = vaddps_avx512vl(auVar72,auVar72);
    auVar89 = vaddps_avx512vl(auVar89,auVar89);
    auVar55 = vfmadd231ps_avx512vl(auVar55,auVar60,auVar91);
    auVar54 = vfmadd231ps_avx512vl(auVar54,auVar60,auVar72);
    auVar69 = vfmadd231ps_avx512vl(auVar69,auVar60,auVar89);
    auVar42 = vmulps_avx512vl(auVar58,auVar91);
    auVar44 = vmulps_avx512vl(auVar59,auVar72);
    auVar43 = vmulps_avx512vl(auVar57,auVar89);
    auVar72 = vfmsub231ps_avx512vl(auVar42,auVar57,auVar72);
    local_2e0 = vaddps_avx512vl(auVar69,auVar72);
    auVar69 = vfmsub231ps_avx512vl(auVar44,auVar58,auVar89);
    local_320 = vaddps_avx512vl(auVar55,auVar69);
    auVar55 = vfmsub231ps_avx512vl(auVar43,auVar59,auVar91);
    local_300 = vaddps_avx512vl(auVar54,auVar55);
    pauVar22 = (undefined1 (*) [32])(param_4 + lVar28 * 0xc);
    if (bVar29 == 0xff) {
      auVar55 = pauVar22[1];
      auVar54 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar22,auVar55);
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar22[2],auVar55);
      auVar77 = vinsertf32x4_avx512vl(auVar54,auVar69._0_16_,1);
      auVar78 = vshuff64x2_avx512vl(auVar54,auVar69,3);
      auVar55 = vblendps_avx(auVar55,*pauVar22,0x24);
      auVar79 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar55,pauVar22[2]);
    }
    else {
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar22 * 2));
      auVar77._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar77._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar77._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar77._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar77._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar77._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar77._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar77._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar22 + unaff_R12));
      auVar78._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar78._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar33 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                        ._0_16_);
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar22 + unaff_R13));
      auVar79._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_
      ;
      bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
      auVar79._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
      bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
      auVar79._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
      bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
      auVar79._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
      auVar79._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar79._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar79._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar79._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    }
    auVar55 = vmulps_avx512vl(auVar63,auVar77);
    auVar54 = vmulps_avx512vl(auVar64,auVar78);
    auVar69 = vmulps_avx512vl(auVar65,auVar79);
    auVar89 = vmulps_avx512vl(auVar58,auVar55);
    auVar91 = vmulps_avx512vl(auVar59,auVar54);
    auVar72 = vmulps_avx512vl(auVar57,auVar69);
    auVar89 = vfmsub231ps_avx512vl(auVar89,auVar57,auVar54);
    auVar91 = vfmsub231ps_avx512vl(auVar91,auVar58,auVar69);
    auVar72 = vfmsub231ps_avx512vl(auVar72,auVar59,auVar55);
    auVar91 = vaddps_avx512vl(auVar91,auVar91);
    auVar72 = vaddps_avx512vl(auVar72,auVar72);
    auVar89 = vaddps_avx512vl(auVar89,auVar89);
    auVar55 = vfmadd231ps_avx512vl(auVar55,auVar60,auVar91);
    auVar54 = vfmadd231ps_avx512vl(auVar54,auVar60,auVar72);
    auVar69 = vfmadd213ps_avx512vl(auVar60,auVar89,auVar69);
    auVar42 = vmulps_avx512vl(auVar58,auVar91);
    auVar44 = vmulps_avx512vl(auVar59,auVar72);
    auVar43 = vmulps_avx512vl(auVar57,auVar89);
    auVar72 = vfmsub231ps_avx512vl(auVar42,auVar57,auVar72);
    auVar69 = vaddps_avx512vl(auVar69,auVar72);
    auVar89 = vfmsub231ps_avx512vl(auVar44,auVar58,auVar89);
    auVar55 = vaddps_avx512vl(auVar55,auVar89);
    auVar89 = vfmsub231ps_avx512vl(auVar43,auVar59,auVar91);
    auVar54 = vaddps_avx512vl(auVar54,auVar89);
    auVar90._0_4_ = fVar100 + auVar55._0_4_;
    auVar90._4_4_ = fVar87 + auVar55._4_4_;
    auVar90._8_4_ = fVar86 + auVar55._8_4_;
    auVar90._12_4_ = fVar85 + auVar55._12_4_;
    auVar90._16_4_ = fVar84 + auVar55._16_4_;
    auVar90._20_4_ = fVar83 + auVar55._20_4_;
    auVar90._24_4_ = fVar88 + auVar55._24_4_;
    auVar90._28_4_ = fVar97 + auVar55._28_4_;
    auVar55 = vaddps_avx512vl(auVar61,auVar54);
    auVar54 = vaddps_avx512vl(auVar62,auVar69);
    auVar92 = vsubps_avx512vl(auVar90,auVar92);
    auVar55 = vsubps_avx512vl(auVar55,auVar70);
    auVar54 = vsubps_avx512vl(auVar54,auVar71);
    if (bVar29 == 0xff) {
      auVar69 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar54,auVar55);
      auVar70 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar92,auVar55);
      auVar70 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar70,auVar69);
      *pauVar22 = auVar70;
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar69,auVar92);
      pauVar22[1] = auVar69;
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar55,auVar92);
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar69,auVar54);
      pauVar22[2] = auVar69;
      auVar69 = *(undefined1 (*) [32])(param_7 + lVar28 * 0xc);
      auVar70 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar28 * 0xc);
      auVar71 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar28 * 0xc);
      auVar89 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar69,auVar70);
      auVar91 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar71,auVar70);
      auVar80 = vinsertf32x4_avx512vl(auVar89,auVar91._0_16_,1);
      auVar81 = vshuff64x2_avx512vl(auVar89,auVar91,3);
      auVar69 = vblendps_avx(auVar70,auVar69,0x24);
      auVar82 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar69,auVar71);
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
                 auVar92);
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar10,
                 auVar55);
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar92,uVar10,auVar54);
      puVar2 = (undefined4 *)(param_7 + lVar28 * 0xc);
      auVar69 = vgatherdps_avx512vl(*puVar2);
      auVar80._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar69._4_4_;
      auVar80._0_4_ = (uint)(bVar29 & 1) * auVar69._0_4_;
      auVar80._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar69._8_4_;
      auVar80._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar69._12_4_;
      auVar80._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar69._16_4_;
      auVar80._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar69._20_4_;
      auVar80._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar69._24_4_;
      auVar80._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar69._28_4_;
      auVar69 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)(local_2c0 + 8)));
      auVar81._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar69._4_4_;
      auVar81._0_4_ = (uint)(bVar29 & 1) * auVar69._0_4_;
      auVar81._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar69._8_4_;
      auVar81._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar69._12_4_;
      auVar81._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar69._16_4_;
      auVar81._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar69._20_4_;
      auVar81._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar69._24_4_;
      auVar81._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar69._28_4_;
      auVar69 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)pauVar26));
      auVar82._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar69._4_4_;
      auVar82._0_4_ = (uint)(bVar29 & 1) * auVar69._0_4_;
      auVar82._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar69._8_4_;
      auVar82._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar69._12_4_;
      auVar82._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar69._16_4_;
      auVar82._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar69._20_4_;
      auVar82._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar69._24_4_;
      auVar82._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar69._28_4_;
    }
    auVar92 = vsubps_avx(auVar80,auVar92);
    auVar69 = vsubps_avx(auVar81,auVar55);
    auVar70 = vsubps_avx(auVar82,auVar54);
    auVar94._4_4_ = param_11;
    auVar94._0_4_ = param_11;
    auVar94._8_4_ = param_11;
    auVar94._12_4_ = param_11;
    auVar94._16_4_ = param_11;
    auVar94._20_4_ = param_11;
    auVar94._24_4_ = param_11;
    auVar94._28_4_ = param_11;
    auVar55 = vdivps_avx(auVar92,auVar94);
    auVar54 = vdivps_avx(auVar69,auVar94);
    auVar92 = vdivps_avx(auVar70,auVar94);
    pauVar22 = (undefined1 (*) [32])(param_5 + lVar28 * 0xc);
    if (bVar29 == 0xff) {
      auVar69 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar92,auVar54);
      auVar70 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar55,auVar54);
      auVar70 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar70,auVar69);
      *pauVar22 = auVar70;
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar69,auVar55);
      pauVar22[1] = auVar69;
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar54,auVar55);
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar69,auVar92);
      pauVar22[2] = auVar69;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
                 auVar55);
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar10,
                 auVar54);
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar10,
                 auVar92);
    }
    auVar69 = vsubps_avx512vl(local_320,auVar55);
    auVar70 = vsubps_avx512vl(local_300,auVar54);
    auVar71 = vsubps_avx512vl(local_2e0,auVar92);
    auVar89 = vmulps_avx512vl(auVar70,auVar70);
    auVar89 = vfmadd231ps_avx512vl(auVar89,auVar69,auVar69);
    auVar89 = vfmadd231ps_avx512vl(auVar89,auVar71,auVar71);
    auVar91 = vbroadcastss_avx512vl(ZEXT416(param_14));
    uVar31 = vcmpps_avx512vl(auVar91,auVar89,1);
    uVar31 = uVar10 & uVar31;
    bVar30 = (byte)uVar31;
    if (bVar30 != 0) {
      auVar89 = vdivps_avx512vl(auVar91,auVar89);
      auVar89 = vsqrtps_avx512vl(auVar89);
      auVar55 = vfmadd213ps_avx512vl(auVar69,auVar89,auVar55);
      auVar54 = vfmadd213ps_avx512vl(auVar70,auVar89,auVar54);
      auVar92 = vfmadd213ps_avx512vl(auVar71,auVar89,auVar92);
      bVar3 = (bool)((byte)(uVar31 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar31 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar31 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar31 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar31 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar31 >> 6) & 1);
      bVar9 = SUB81(uVar31 >> 7,0);
      local_320._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * local_320._4_4_;
      local_320._0_4_ =
           (uint)(bVar30 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar30 & 1) * local_320._0_4_;
      local_320._8_4_ = (uint)bVar4 * auVar55._8_4_ | (uint)!bVar4 * local_320._8_4_;
      local_320._12_4_ = (uint)bVar5 * auVar55._12_4_ | (uint)!bVar5 * local_320._12_4_;
      local_320._16_4_ = (uint)bVar6 * auVar55._16_4_ | (uint)!bVar6 * local_320._16_4_;
      local_320._20_4_ = (uint)bVar7 * auVar55._20_4_ | (uint)!bVar7 * local_320._20_4_;
      local_320._24_4_ = (uint)bVar8 * auVar55._24_4_ | (uint)!bVar8 * local_320._24_4_;
      local_320._28_4_ = (uint)bVar9 * auVar55._28_4_ | (uint)!bVar9 * local_320._28_4_;
      bVar3 = (bool)((byte)(uVar31 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar31 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar31 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar31 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar31 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar31 >> 6) & 1);
      bVar9 = SUB81(uVar31 >> 7,0);
      local_300._4_4_ = (uint)bVar3 * auVar54._4_4_ | (uint)!bVar3 * local_300._4_4_;
      local_300._0_4_ =
           (uint)(bVar30 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar30 & 1) * local_300._0_4_;
      local_300._8_4_ = (uint)bVar4 * auVar54._8_4_ | (uint)!bVar4 * local_300._8_4_;
      local_300._12_4_ = (uint)bVar5 * auVar54._12_4_ | (uint)!bVar5 * local_300._12_4_;
      local_300._16_4_ = (uint)bVar6 * auVar54._16_4_ | (uint)!bVar6 * local_300._16_4_;
      local_300._20_4_ = (uint)bVar7 * auVar54._20_4_ | (uint)!bVar7 * local_300._20_4_;
      local_300._24_4_ = (uint)bVar8 * auVar54._24_4_ | (uint)!bVar8 * local_300._24_4_;
      local_300._28_4_ = (uint)bVar9 * auVar54._28_4_ | (uint)!bVar9 * local_300._28_4_;
      bVar3 = (bool)((byte)(uVar31 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar31 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar31 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar31 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar31 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar31 >> 6) & 1);
      bVar9 = SUB81(uVar31 >> 7,0);
      local_2e0._4_4_ = (uint)bVar3 * auVar92._4_4_ | (uint)!bVar3 * local_2e0._4_4_;
      local_2e0._0_4_ =
           (uint)(bVar30 & 1) * auVar92._0_4_ | (uint)!(bool)(bVar30 & 1) * local_2e0._0_4_;
      local_2e0._8_4_ = (uint)bVar4 * auVar92._8_4_ | (uint)!bVar4 * local_2e0._8_4_;
      local_2e0._12_4_ = (uint)bVar5 * auVar92._12_4_ | (uint)!bVar5 * local_2e0._12_4_;
      local_2e0._16_4_ = (uint)bVar6 * auVar92._16_4_ | (uint)!bVar6 * local_2e0._16_4_;
      local_2e0._20_4_ = (uint)bVar7 * auVar92._20_4_ | (uint)!bVar7 * local_2e0._20_4_;
      local_2e0._24_4_ = (uint)bVar8 * auVar92._24_4_ | (uint)!bVar8 * local_2e0._24_4_;
      local_2e0._28_4_ = (uint)bVar9 * auVar92._28_4_ | (uint)!bVar9 * local_2e0._28_4_;
    }
    if (bVar29 == 0xff) {
      auVar55 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,local_2e0,local_300);
      auVar54 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,local_320,local_300);
      auVar54 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar54,auVar55);
      auVar95._8_8_ = local_320._24_8_;
      auVar95._0_8_ = local_320._24_8_;
      auVar95._16_8_ = local_320._24_8_;
      auVar95._24_8_ = local_320._24_8_;
      *pauVar26 = auVar54;
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar55,local_320);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar28 * 0xc) = auVar55;
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000900000008
                                   ,local_300,auVar95);
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar55,local_2e0);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar28 * 0xc) = auVar55;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar26) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
                 local_320);
      vscatterdps_avx512vl
                (ZEXT832(pauVar26) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar10,
                 local_300);
      vscatterdps_avx512vl
                (ZEXT832(pauVar26) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar10,
                 local_2e0);
    }
  }
  return;
}

// PreSubstepInterpolation___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_avx512skx @ 140cce100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PreSubstepInterpolation___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,uint param_8,int param_9)

{
  undefined1 (*pauVar1) [32];
  byte bVar2;
  bool bVar3;
  float fVar4;
  ulonglong uVar5;
  undefined1 auVar6 [32];
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RBX;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar19 [16];
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
  undefined1 in_ZMM16 [64];
  undefined1 auVar47 [16];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar30 [32];
  
  auVar31 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar34 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar33 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar32 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar30 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar38 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar35 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar28 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar29 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar47 = in_ZMM17._0_16_;
  auVar19 = in_ZMM16._0_16_;
  uVar12 = (ulonglong)param_8;
  uVar11 = param_9 - param_8;
  uVar7 = uVar11 + 7;
  if (-1 < (int)uVar11) {
    uVar7 = uVar11;
  }
  iVar8 = ((uVar7 & 0xfffffff8) - uVar11) + param_9;
  if ((int)param_8 < iVar8) {
    auVar43._4_4_ = param_7;
    auVar43._0_4_ = param_7;
    auVar43._8_4_ = param_7;
    auVar43._12_4_ = param_7;
    auVar43._16_4_ = param_7;
    auVar43._20_4_ = param_7;
    auVar43._24_4_ = param_7;
    auVar43._28_4_ = param_7;
    fVar4 = __real_3f800000 - param_7;
    auVar45._4_4_ = fVar4;
    auVar45._0_4_ = fVar4;
    auVar45._8_4_ = fVar4;
    auVar45._12_4_ = fVar4;
    auVar45._16_4_ = fVar4;
    auVar45._20_4_ = fVar4;
    auVar45._24_4_ = fVar4;
    auVar45._28_4_ = fVar4;
    uVar12 = (ulonglong)(int)param_8;
    unaff_RBX = uVar12 * 0xc;
    lVar15 = param_3 + 0x40;
    lVar16 = param_4 + 0x40;
    lVar13 = param_1 + 0x40;
    lVar14 = param_5 + 0x40;
    lVar10 = param_6 + 0x40;
    auVar19 = __ymm_00000004000000030000000200000001000000000000000c0000000b0000000a._0_16_;
    auVar47 = __ymm_0000000000000002000000000000000900000001000000000000000800000000._0_16_;
    lVar9 = param_2 + 0x40;
    auVar20 = vbroadcastss_avx512vl(ZEXT416(__real_00800000));
    auVar18 = vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
    do {
      auVar21 = *(undefined1 (*) [32])(lVar15 + -0x40 + unaff_RBX);
      auVar23 = *(undefined1 (*) [32])(lVar15 + -0x20 + unaff_RBX);
      auVar26 = vblendps_avx(auVar23,auVar21,0x24);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar29,auVar23);
      auVar22 = vpermt2ps_avx512vl(auVar26,auVar35,*(undefined1 (*) [32])(lVar15 + unaff_RBX));
      auVar23 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar15 + unaff_RBX),auVar28,auVar23);
      auVar24 = vinsertf32x4_avx512vl(auVar21,auVar23._0_16_,1);
      auVar25 = vshuff64x2_avx512vl(auVar21,auVar23,3);
      auVar21 = *(undefined1 (*) [32])(lVar16 + -0x40 + unaff_RBX);
      auVar23 = *(undefined1 (*) [32])(lVar16 + -0x20 + unaff_RBX);
      auVar26 = vblendps_avx(auVar23,auVar21,0x24);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar29,auVar23);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar35,*(undefined1 (*) [32])(lVar16 + unaff_RBX));
      auVar23 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar16 + unaff_RBX),auVar28,auVar23);
      auVar27 = vinsertf32x4_avx512vl(auVar21,auVar23._0_16_,1);
      auVar21 = vshuff64x2_avx512vl(auVar21,auVar23,3);
      auVar23 = vmulps_avx512vl(auVar45,auVar27);
      auVar21 = vmulps_avx512vl(auVar45,auVar21);
      auVar26 = vmulps_avx512vl(auVar45,auVar26);
      auVar23 = vfmadd231ps_avx512vl(auVar23,auVar43,auVar24);
      auVar21 = vfmadd231ps_avx512vl(auVar21,auVar43,auVar25);
      auVar26 = vfmadd231ps_avx512vl(auVar26,auVar43,auVar22);
      auVar22 = vpermt2ps_avx512vl(auVar26,auVar38,auVar21);
      auVar24 = vpermt2ps_avx512vl(auVar23,auVar30,auVar21);
      auVar24 = vpermt2ps_avx512vl(auVar24,auVar32,auVar22);
      *(undefined1 (*) [32])(lVar13 + -0x40 + unaff_RBX) = auVar24;
      auVar22 = vpermt2ps_avx512vl(auVar22,auVar33,auVar23);
      *(undefined1 (*) [32])(lVar13 + -0x20 + unaff_RBX) = auVar22;
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar34,auVar23);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar31,auVar26);
      *(undefined1 (*) [32])(lVar13 + unaff_RBX) = auVar21;
      auVar21 = *(undefined1 (*) [32])(lVar14 + -0x40 + unaff_RBX);
      auVar23 = *(undefined1 (*) [32])(lVar14 + -0x20 + unaff_RBX);
      auVar26 = vblendps_avx(auVar23,auVar21,0x24);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar29,auVar23);
      auVar22 = vpermt2ps_avx512vl(auVar26,auVar35,*(undefined1 (*) [32])(lVar14 + unaff_RBX));
      auVar23 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar14 + unaff_RBX),auVar28,auVar23);
      auVar24 = vinsertf32x4_avx512vl(auVar21,auVar23._0_16_,1);
      auVar25 = vshuff64x2_avx512vl(auVar21,auVar23,3);
      auVar21 = *(undefined1 (*) [32])(lVar10 + -0x40 + unaff_RBX);
      auVar23 = *(undefined1 (*) [32])(lVar10 + -0x20 + unaff_RBX);
      auVar26 = vblendps_avx(auVar23,auVar21,0x24);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar29,auVar23);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar35,*(undefined1 (*) [32])(lVar10 + unaff_RBX));
      auVar23 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar10 + unaff_RBX),auVar28,auVar23);
      auVar27 = vinsertf32x4_avx512vl(auVar21,auVar23._0_16_,1);
      auVar21 = vshuff64x2_avx512vl(auVar21,auVar23,3);
      auVar23 = vmulps_avx512vl(auVar45,auVar27);
      auVar21 = vmulps_avx512vl(auVar45,auVar21);
      auVar26 = vmulps_avx512vl(auVar45,auVar26);
      auVar23 = vfmadd231ps_avx512vl(auVar23,auVar43,auVar24);
      auVar21 = vfmadd231ps_avx512vl(auVar21,auVar43,auVar25);
      auVar26 = vfmadd231ps_avx512vl(auVar26,auVar43,auVar22);
      auVar22 = vmulps_avx512vl(auVar21,auVar21);
      auVar22 = vfmadd231ps_avx512vl(auVar22,auVar23,auVar23);
      auVar22 = vfmadd231ps_avx512vl(auVar22,auVar26,auVar26);
      uVar5 = vcmpps_avx512vl(auVar22,auVar20,2);
      auVar22 = vsqrtps_avx512vl(auVar22);
      auVar23 = vdivps_avx512vl(auVar23,auVar22);
      auVar21 = vdivps_avx512vl(auVar21,auVar22);
      auVar26 = vdivps_avx512vl(auVar26,auVar22);
      auVar22 = vbroadcastss_avx512vl(ZEXT416((uint)__real_3f800000));
      bVar17 = (byte)uVar5;
      auVar24._0_4_ = (uint)(bVar17 & 1) * auVar22._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar23._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar24._4_4_ = (uint)bVar3 * auVar22._4_4_ | (uint)!bVar3 * auVar23._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar24._8_4_ = (uint)bVar3 * auVar22._8_4_ | (uint)!bVar3 * auVar23._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar24._12_4_ = (uint)bVar3 * auVar22._12_4_ | (uint)!bVar3 * auVar23._12_4_;
      bVar3 = (bool)((byte)(uVar5 >> 4) & 1);
      auVar24._16_4_ = (uint)bVar3 * auVar22._16_4_ | (uint)!bVar3 * auVar23._16_4_;
      bVar3 = (bool)((byte)(uVar5 >> 5) & 1);
      auVar24._20_4_ = (uint)bVar3 * auVar22._20_4_ | (uint)!bVar3 * auVar23._20_4_;
      bVar3 = (bool)((byte)(uVar5 >> 6) & 1);
      auVar24._24_4_ = (uint)bVar3 * auVar22._24_4_ | (uint)!bVar3 * auVar23._24_4_;
      bVar3 = SUB81(uVar5 >> 7,0);
      auVar24._28_4_ = (uint)bVar3 * auVar22._28_4_ | (uint)!bVar3 * auVar23._28_4_;
      auVar23._0_4_ = (uint)(bVar17 & 1) * auVar18._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar21._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar23._4_4_ = (uint)bVar3 * auVar18._4_4_ | (uint)!bVar3 * auVar21._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar23._8_4_ = (uint)bVar3 * auVar18._8_4_ | (uint)!bVar3 * auVar21._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar23._12_4_ = (uint)bVar3 * auVar18._12_4_ | (uint)!bVar3 * auVar21._12_4_;
      auVar23._16_4_ = (uint)!(bool)((byte)(uVar5 >> 4) & 1) * auVar21._16_4_;
      auVar23._20_4_ = (uint)!(bool)((byte)(uVar5 >> 5) & 1) * auVar21._20_4_;
      auVar23._24_4_ = (uint)!(bool)((byte)(uVar5 >> 6) & 1) * auVar21._24_4_;
      bVar3 = SUB81(uVar5 >> 7,0);
      auVar23._28_4_ =
           (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar21._28_4_;
      auVar21._0_4_ = (uint)(bVar17 & 1) * auVar18._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar26._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar21._4_4_ = (uint)bVar3 * auVar18._4_4_ | (uint)!bVar3 * auVar26._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar21._8_4_ = (uint)bVar3 * auVar18._8_4_ | (uint)!bVar3 * auVar26._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar21._12_4_ = (uint)bVar3 * auVar18._12_4_ | (uint)!bVar3 * auVar26._12_4_;
      auVar21._16_4_ = (uint)!(bool)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
      auVar21._20_4_ = (uint)!(bool)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
      auVar21._24_4_ = (uint)!(bool)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
      auVar21._28_4_ = (uint)!SUB81(uVar5 >> 7,0) * auVar26._28_4_;
      auVar26 = vpermt2ps_avx512vl(auVar21,auVar38,auVar23);
      auVar22 = vpermt2ps_avx512vl(auVar24,auVar30,auVar23);
      auVar22 = vpermt2ps_avx512vl(auVar22,auVar32,auVar26);
      *(undefined1 (*) [32])(lVar9 + -0x40 + unaff_RBX) = auVar22;
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar33,auVar24);
      *(undefined1 (*) [32])(lVar9 + -0x20 + unaff_RBX) = auVar26;
      auVar23 = vpermt2ps_avx512vl(auVar23,auVar34,auVar24);
      auVar21 = vpermt2ps_avx512vl(auVar23,auVar31,auVar21);
      *(undefined1 (*) [32])(lVar9 + unaff_RBX) = auVar21;
      uVar12 = uVar12 + 8;
      lVar15 = lVar15 + 0x60;
      lVar16 = lVar16 + 0x60;
      lVar13 = lVar13 + 0x60;
      lVar14 = lVar14 + 0x60;
      lVar10 = lVar10 + 0x60;
      lVar9 = lVar9 + 0x60;
    } while ((longlong)uVar12 < (longlong)iVar8);
  }
  if ((int)uVar12 < param_9) {
    auVar28 = vpbroadcastd_avx512vl();
    auVar29._0_4_ =
         auVar28._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar29._4_4_ = auVar28._4_4_ + _UNK_150b50ae4;
    auVar29._8_4_ = auVar28._8_4_ + _UNK_150b50ae8;
    auVar29._12_4_ = auVar28._12_4_ + _UNK_150b50aec;
    auVar29._16_4_ = auVar28._16_4_ + _UNK_150b50af0;
    auVar29._20_4_ = auVar28._20_4_ + _UNK_150b50af4;
    auVar29._24_4_ = auVar28._24_4_ + _UNK_150b50af8;
    auVar29._28_4_ = auVar28._28_4_ + _UNK_150b50afc;
    auVar28 = vpbroadcastd_avx512vl();
    uVar5 = vpcmpgtd_avx512vl(auVar28,auVar29);
    lVar15 = (longlong)(int)uVar12;
    pauVar1 = (undefined1 (*) [32])(param_3 + lVar15 * 0xc);
    bVar17 = (byte)uVar5;
    if (bVar17 == 0xff) {
      auVar29 = pauVar1[1];
      auVar28 = vblendps_avx(auVar29,*pauVar1,0x24);
      auVar35 = vpermt2ps_avx512vl(*pauVar1,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar29);
      auVar31 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,pauVar1[2]);
      auVar29 = vpermt2ps_avx512vl(pauVar1[2],
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar29);
      auVar30._16_16_ = auVar29._0_16_;
      auVar30._0_16_ = auVar35._0_16_;
      auVar38 = vperm2f128_avx(auVar35,auVar29,0x31);
      auVar29 = *(undefined1 (*) [32])(param_4 + lVar15 * 0xc);
      auVar28 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar15 * 0xc);
      auVar35 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar15 * 0xc);
      auVar32 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar29,auVar28);
      auVar33 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar35,auVar28);
      auVar34 = vinsertf32x4_avx512vl(auVar32,auVar33._0_16_,1);
      auVar32 = vshuff64x2_avx512vl(auVar32,auVar33,3);
      auVar29 = vblendps_avx(auVar28,auVar29,0x24);
      auVar28 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar35);
    }
    else {
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_1));
      auVar30._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar30._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar30._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar30._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar30._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar30._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar30._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar30._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_2));
      auVar38._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar38._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar38._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar38._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar38._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar38._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar38._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar38._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
      auVar31._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar31._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar31._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar31._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar31._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar31._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar31._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar31._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      param_4 = param_4 + lVar15 * 0xc;
      auVar19 = vxorps_avx512vl(auVar19,auVar19);
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_4 + param_1));
      auVar34._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar34._4_4_ = (uint)bVar3 * auVar29._4_4_ | (uint)!bVar3 * auVar19._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar34._8_4_ = (uint)bVar3 * auVar29._8_4_ | (uint)!bVar3 * auVar19._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar34._12_4_ = (uint)bVar3 * auVar29._12_4_ | (uint)!bVar3 * auVar19._12_4_;
      auVar34._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar34._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar34._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar34._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar19 = vxorps_avx512vl(auVar47,auVar47);
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_4 + param_2));
      auVar32._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar32._4_4_ = (uint)bVar3 * auVar29._4_4_ | (uint)!bVar3 * auVar19._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar32._8_4_ = (uint)bVar3 * auVar29._8_4_ | (uint)!bVar3 * auVar19._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar32._12_4_ = (uint)bVar3 * auVar29._12_4_ | (uint)!bVar3 * auVar19._12_4_;
      auVar32._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar32._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar32._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar32._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_4 + unaff_RBX));
      auVar28._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar28._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar28._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar28._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar28._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar28._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar28._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar28._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
    }
    auVar20._4_4_ = param_7;
    auVar20._0_4_ = param_7;
    auVar20._8_4_ = param_7;
    auVar20._12_4_ = param_7;
    auVar20._16_4_ = param_7;
    auVar20._20_4_ = param_7;
    auVar20._24_4_ = param_7;
    auVar20._28_4_ = param_7;
    auVar19 = vsubss_avx512f(ZEXT416((uint)__real_3f800000),ZEXT416((uint)param_7));
    auVar33._0_4_ = auVar19._0_4_;
    auVar33._4_4_ = auVar33._0_4_;
    auVar33._8_4_ = auVar33._0_4_;
    auVar33._12_4_ = auVar33._0_4_;
    auVar33._16_4_ = auVar33._0_4_;
    auVar33._20_4_ = auVar33._0_4_;
    auVar33._24_4_ = auVar33._0_4_;
    auVar33._28_4_ = auVar33._0_4_;
    auVar29 = vmulps_avx512vl(auVar33,auVar34);
    auVar35 = vmulps_avx512vl(auVar33,auVar32);
    auVar29 = vfmadd231ps_avx512vl(auVar29,auVar20,auVar30);
    auVar35 = vfmadd231ps_avx512vl(auVar35,auVar20,auVar38);
    auVar26._0_4_ = param_7 * auVar31._0_4_ + auVar33._0_4_ * auVar28._0_4_;
    auVar26._4_4_ = param_7 * auVar31._4_4_ + auVar33._0_4_ * auVar28._4_4_;
    auVar26._8_4_ = param_7 * auVar31._8_4_ + auVar33._0_4_ * auVar28._8_4_;
    auVar26._12_4_ = param_7 * auVar31._12_4_ + auVar33._0_4_ * auVar28._12_4_;
    auVar26._16_4_ = param_7 * auVar31._16_4_ + auVar33._0_4_ * auVar28._16_4_;
    auVar26._20_4_ = param_7 * auVar31._20_4_ + auVar33._0_4_ * auVar28._20_4_;
    auVar26._24_4_ = param_7 * auVar31._24_4_ + auVar33._0_4_ * auVar28._24_4_;
    auVar26._28_4_ = param_7 * auVar31._28_4_ + auVar33._0_4_ * auVar28._28_4_;
    pauVar1 = (undefined1 (*) [32])(param_1 + lVar15 * 0xc);
    if (bVar17 == 0xff) {
      auVar28 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar26,auVar35);
      auVar38 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar29,auVar35);
      auVar38 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar38,auVar28);
      *pauVar1 = auVar38;
      auVar28 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar28,auVar29);
      pauVar1[1] = auVar28;
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar35,auVar29);
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar29,auVar26);
      pauVar1[2] = auVar29;
      lVar16 = lVar15 * 0xc;
      auVar29 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar16);
      auVar28 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar16);
      auVar35 = vblendps_avx(auVar29,*(undefined1 (*) [32])(param_5 + lVar16),0x24);
      auVar38 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_5 + lVar16),
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar29);
      auVar36 = vpermt2ps_avx512vl(auVar35,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar28);
      auVar29 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar29);
      auVar25._16_16_ = auVar29._0_16_;
      auVar25._0_16_ = auVar38._0_16_;
      auVar22 = vperm2f128_avx(auVar38,auVar29,0x31);
      auVar29 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar16);
      auVar28 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar16);
      auVar35 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*(undefined1 (*) [32])(param_6 + lVar16),auVar29);
      auVar38 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar28,auVar29);
      auVar37 = vinsertf32x4_avx512vl(auVar35,auVar38._0_16_,1);
      auVar27 = vshuff64x2_avx512vl(auVar35,auVar38,3);
      auVar29 = vblendps_avx(auVar29,*(undefined1 (*) [32])(param_6 + lVar16),0x24);
      auVar35 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar28);
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar20,uVar5,auVar29);
      vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar31,uVar5,auVar35);
      vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar30,uVar5,auVar26);
      lVar16 = lVar15 * 0xc;
      param_5 = param_5 + lVar16;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_5 + lVar16));
      auVar25._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar25._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar25._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar25._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar25._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar25._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar25._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar25._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_5 + param_2));
      auVar22._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar22._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar22._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar22._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar22._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar22._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar22._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar22._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_5 + unaff_RBX));
      auVar36._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar36._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar36._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar36._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar36._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar36._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar36._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar36._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      param_6 = param_6 + lVar16;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_6 + lVar16));
      auVar37._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar37._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar37._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar37._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar37._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar37._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar37._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar37._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar19 = vxorps_avx512vl(auVar35._0_16_,auVar35._0_16_);
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_6 + param_2));
      auVar27._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar27._4_4_ = (uint)bVar3 * auVar29._4_4_ | (uint)!bVar3 * auVar19._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar27._8_4_ = (uint)bVar3 * auVar29._8_4_ | (uint)!bVar3 * auVar19._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar27._12_4_ = (uint)bVar3 * auVar29._12_4_ | (uint)!bVar3 * auVar19._12_4_;
      auVar27._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar27._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar27._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar27._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_6 + unaff_RBX));
      auVar35._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar35._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar35._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar35._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar35._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar35._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar35._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar35._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
    }
    auVar29 = vmulps_avx512vl(auVar33,auVar27);
    auVar46._0_4_ = param_7 * auVar25._0_4_ + auVar33._0_4_ * auVar37._0_4_;
    auVar46._4_4_ = param_7 * auVar25._4_4_ + auVar33._0_4_ * auVar37._4_4_;
    auVar46._8_4_ = param_7 * auVar25._8_4_ + auVar33._0_4_ * auVar37._8_4_;
    auVar46._12_4_ = param_7 * auVar25._12_4_ + auVar33._0_4_ * auVar37._12_4_;
    auVar46._16_4_ = param_7 * auVar25._16_4_ + auVar33._0_4_ * auVar37._16_4_;
    auVar46._20_4_ = param_7 * auVar25._20_4_ + auVar33._0_4_ * auVar37._20_4_;
    auVar46._24_4_ = param_7 * auVar25._24_4_ + auVar33._0_4_ * auVar37._24_4_;
    auVar46._28_4_ = param_7 * auVar25._28_4_ + auVar33._0_4_ * auVar37._28_4_;
    auVar38 = vfmadd231ps_avx512vl(auVar29,auVar20,auVar22);
    auVar42._0_4_ = param_7 * auVar36._0_4_ + auVar33._0_4_ * auVar35._0_4_;
    auVar42._4_4_ = param_7 * auVar36._4_4_ + auVar33._0_4_ * auVar35._4_4_;
    auVar42._8_4_ = param_7 * auVar36._8_4_ + auVar33._0_4_ * auVar35._8_4_;
    auVar42._12_4_ = param_7 * auVar36._12_4_ + auVar33._0_4_ * auVar35._12_4_;
    auVar42._16_4_ = param_7 * auVar36._16_4_ + auVar33._0_4_ * auVar35._16_4_;
    auVar42._20_4_ = param_7 * auVar36._20_4_ + auVar33._0_4_ * auVar35._20_4_;
    auVar42._24_4_ = param_7 * auVar36._24_4_ + auVar33._0_4_ * auVar35._24_4_;
    auVar42._28_4_ = param_7 * auVar36._28_4_ + auVar33._0_4_ * auVar35._28_4_;
    auVar29 = vmulps_avx512vl(auVar38,auVar38);
    auVar44._0_4_ = auVar42._0_4_ * auVar42._0_4_ + auVar46._0_4_ * auVar46._0_4_ + auVar29._0_4_;
    auVar44._4_4_ = auVar42._4_4_ * auVar42._4_4_ + auVar46._4_4_ * auVar46._4_4_ + auVar29._4_4_;
    auVar44._8_4_ = auVar42._8_4_ * auVar42._8_4_ + auVar46._8_4_ * auVar46._8_4_ + auVar29._8_4_;
    auVar44._12_4_ =
         auVar42._12_4_ * auVar42._12_4_ + auVar46._12_4_ * auVar46._12_4_ + auVar29._12_4_;
    auVar44._16_4_ =
         auVar42._16_4_ * auVar42._16_4_ + auVar46._16_4_ * auVar46._16_4_ + auVar29._16_4_;
    auVar44._20_4_ =
         auVar42._20_4_ * auVar42._20_4_ + auVar46._20_4_ * auVar46._20_4_ + auVar29._20_4_;
    auVar44._24_4_ =
         auVar42._24_4_ * auVar42._24_4_ + auVar46._24_4_ * auVar46._24_4_ + auVar29._24_4_;
    auVar44._28_4_ =
         auVar42._28_4_ * auVar42._28_4_ + auVar46._28_4_ * auVar46._28_4_ + auVar29._28_4_;
    auVar6._4_4_ = __real_00800000;
    auVar6._0_4_ = __real_00800000;
    auVar6._8_4_ = __real_00800000;
    auVar6._12_4_ = __real_00800000;
    auVar6._16_4_ = __real_00800000;
    auVar6._20_4_ = __real_00800000;
    auVar6._24_4_ = __real_00800000;
    auVar6._28_4_ = __real_00800000;
    uVar12 = vcmpps_avx512vl(auVar44,auVar6,2);
    auVar28 = vsqrtps_avx(auVar44);
    auVar29 = vdivps_avx(auVar46,auVar28);
    auVar35 = vdivps_avx512vl(auVar38,auVar28);
    auVar38 = vbroadcastss_avx512vl(ZEXT416((uint)__real_3f800000));
    bVar2 = (byte)uVar12;
    auVar39._0_4_ = (uint)(bVar2 & 1) * auVar38._0_4_ | (uint)!(bool)(bVar2 & 1) * auVar29._0_4_;
    bVar3 = (bool)((byte)(uVar12 >> 1) & 1);
    auVar39._4_4_ = (uint)bVar3 * auVar38._4_4_ | (uint)!bVar3 * auVar29._4_4_;
    bVar3 = (bool)((byte)(uVar12 >> 2) & 1);
    auVar39._8_4_ = (uint)bVar3 * auVar38._8_4_ | (uint)!bVar3 * auVar29._8_4_;
    bVar3 = (bool)((byte)(uVar12 >> 3) & 1);
    auVar39._12_4_ = (uint)bVar3 * auVar38._12_4_ | (uint)!bVar3 * auVar29._12_4_;
    bVar3 = (bool)((byte)(uVar12 >> 4) & 1);
    auVar39._16_4_ = (uint)bVar3 * auVar38._16_4_ | (uint)!bVar3 * auVar29._16_4_;
    bVar3 = (bool)((byte)(uVar12 >> 5) & 1);
    auVar39._20_4_ = (uint)bVar3 * auVar38._20_4_ | (uint)!bVar3 * auVar29._20_4_;
    bVar3 = (bool)((byte)(uVar12 >> 6) & 1);
    auVar39._24_4_ = (uint)bVar3 * auVar38._24_4_ | (uint)!bVar3 * auVar29._24_4_;
    bVar3 = SUB81(uVar12 >> 7,0);
    auVar39._28_4_ = (uint)bVar3 * auVar38._28_4_ | (uint)!bVar3 * auVar29._28_4_;
    auVar29 = vdivps_avx(auVar42,auVar28);
    auVar40._4_4_ = (uint)!(bool)((byte)(uVar12 >> 1) & 1) * auVar35._4_4_;
    auVar40._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar35._0_4_;
    auVar40._8_4_ = (uint)!(bool)((byte)(uVar12 >> 2) & 1) * auVar35._8_4_;
    auVar40._12_4_ = (uint)!(bool)((byte)(uVar12 >> 3) & 1) * auVar35._12_4_;
    auVar40._16_4_ = (uint)!(bool)((byte)(uVar12 >> 4) & 1) * auVar35._16_4_;
    auVar40._20_4_ = (uint)!(bool)((byte)(uVar12 >> 5) & 1) * auVar35._20_4_;
    auVar40._24_4_ = (uint)!(bool)((byte)(uVar12 >> 6) & 1) * auVar35._24_4_;
    bVar3 = SUB81(uVar12 >> 7,0);
    auVar40._28_4_ =
         (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar35._28_4_;
    auVar41._4_4_ = (uint)!(bool)((byte)(uVar12 >> 1) & 1) * auVar29._4_4_;
    auVar41._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar29._0_4_;
    auVar41._8_4_ = (uint)!(bool)((byte)(uVar12 >> 2) & 1) * auVar29._8_4_;
    auVar41._12_4_ = (uint)!(bool)((byte)(uVar12 >> 3) & 1) * auVar29._12_4_;
    auVar41._16_4_ = (uint)!(bool)((byte)(uVar12 >> 4) & 1) * auVar29._16_4_;
    auVar41._20_4_ = (uint)!(bool)((byte)(uVar12 >> 5) & 1) * auVar29._20_4_;
    auVar41._24_4_ = (uint)!(bool)((byte)(uVar12 >> 6) & 1) * auVar29._24_4_;
    auVar41._28_4_ = (uint)!SUB81(uVar12 >> 7,0) * auVar29._28_4_;
    pauVar1 = (undefined1 (*) [32])(param_2 + lVar15 * 0xc);
    if (bVar17 == 0xff) {
      auVar29 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar41,auVar40);
      auVar28 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar39,auVar40);
      auVar28 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar28,auVar29);
      *pauVar1 = auVar28;
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar29,auVar39);
      pauVar1[1] = auVar29;
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar40,auVar39);
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar29,auVar41);
      pauVar1[2] = auVar29;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,
                 auVar39);
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar5,
                 auVar40);
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar5,
                 auVar41);
    }
  }
  return;
}

// CalculateBounds___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_avx512skx @ 140cce900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateBounds___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_avx512skx
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5,undefined1 (*param_6) [16])

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong unaff_RBX;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  ulonglong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar32 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  
  auVar17 = vpsllw_avx512vl(*param_6,0xf);
  uVar1 = *param_1;
  local_a0._4_4_ = uVar1;
  local_a0._0_4_ = uVar1;
  local_a0._8_4_ = uVar1;
  local_a0._12_4_ = uVar1;
  local_a0._16_4_ = uVar1;
  local_a0._20_4_ = uVar1;
  local_a0._24_4_ = uVar1;
  local_a0._28_4_ = uVar1;
  uVar1 = param_1[1];
  local_80._4_4_ = uVar1;
  local_80._0_4_ = uVar1;
  local_80._8_4_ = uVar1;
  local_80._12_4_ = uVar1;
  local_80._16_4_ = uVar1;
  local_80._20_4_ = uVar1;
  local_80._24_4_ = uVar1;
  local_80._28_4_ = uVar1;
  uVar1 = param_1[2];
  local_60._4_4_ = uVar1;
  local_60._0_4_ = uVar1;
  local_60._8_4_ = uVar1;
  local_60._12_4_ = uVar1;
  local_60._16_4_ = uVar1;
  local_60._20_4_ = uVar1;
  local_60._24_4_ = uVar1;
  local_60._28_4_ = uVar1;
  uVar1 = *param_2;
  local_100._4_4_ = uVar1;
  local_100._0_4_ = uVar1;
  local_100._8_4_ = uVar1;
  local_100._12_4_ = uVar1;
  local_100._16_4_ = uVar1;
  local_100._20_4_ = uVar1;
  local_100._24_4_ = uVar1;
  local_100._28_4_ = uVar1;
  uVar1 = param_2[1];
  local_e0._4_4_ = uVar1;
  local_e0._0_4_ = uVar1;
  local_e0._8_4_ = uVar1;
  local_e0._12_4_ = uVar1;
  local_e0._16_4_ = uVar1;
  local_e0._20_4_ = uVar1;
  local_e0._24_4_ = uVar1;
  local_e0._28_4_ = uVar1;
  uVar1 = param_2[2];
  local_c0._4_4_ = uVar1;
  local_c0._0_4_ = uVar1;
  local_c0._8_4_ = uVar1;
  local_c0._12_4_ = uVar1;
  local_c0._16_4_ = uVar1;
  local_c0._20_4_ = uVar1;
  local_c0._24_4_ = uVar1;
  local_c0._28_4_ = uVar1;
  iVar10 = (int)param_4;
  uVar13 = param_5 - iVar10;
  uVar11 = uVar13 + 7;
  if (-1 < (int)uVar13) {
    uVar11 = uVar13;
  }
  iVar12 = ((uVar11 & 0xfffffff8) - uVar13) + param_5;
  if (iVar10 < iVar12) {
    param_4 = (longlong)iVar10;
    pauVar14 = (undefined1 (*) [32])(param_3 + param_4 * 0xc + 0x40);
    do {
      auVar25 = pauVar14[-1];
      auVar24 = vblendps_avx(auVar25,pauVar14[-2],0x24);
      auVar23 = vpermt2ps_avx512vl(pauVar14[-2],
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar25);
      auVar24 = vpermt2ps_avx512vl(auVar24,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*pauVar14);
      auVar25 = vpermt2ps_avx512vl(*pauVar14,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar25);
      auVar26 = vinsertf32x4_avx512vl(auVar23,auVar25._0_16_,1);
      auVar25 = vshuff64x2_avx512vl(auVar23,auVar25,3);
      local_a0 = vminps_avx512vl(local_a0,auVar26);
      local_80 = vminps_avx512vl(local_80,auVar25);
      local_60 = vminps_avx(local_60,auVar24);
      local_100 = vmaxps_avx512vl(local_100,auVar26);
      local_e0 = vmaxps_avx512vl(local_e0,auVar25);
      local_c0 = vmaxps_avx(local_c0,auVar24);
      param_4 = param_4 + 8;
      pauVar14 = pauVar14 + 3;
    } while (param_4 < iVar12);
  }
  uVar15 = vpmovw2m_avx512vl(auVar17);
  if ((int)param_4 < param_5) {
    auVar25 = vpbroadcastd_avx512vl();
    auVar25 = vpaddd_avx512vl(auVar25,
                              ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                             );
    auVar24 = vpbroadcastd_avx512vl();
    uVar9 = vpcmpgtd_avx512vl(auVar24,auVar25);
    pauVar14 = (undefined1 (*) [32])(param_3 + (longlong)(int)param_4 * 0xc);
    bVar16 = (byte)uVar9;
    if (bVar16 == 0xff) {
      auVar25 = pauVar14[1];
      auVar23 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar14,auVar25);
      auVar26 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar14[2],auVar25);
      auVar24 = vinsertf32x4_avx512vl(auVar23,auVar26._0_16_,1);
      auVar23 = vshuff64x2_avx512vl(auVar23,auVar26,3);
      auVar25 = vblendps_avx(auVar25,*pauVar14,0x24);
      auVar25 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar25,pauVar14[2]);
    }
    else {
      auVar25 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + (longlong)param_1));
      auVar24._4_4_ = (uint)((byte)(uVar9 >> 1) & 1) * auVar25._4_4_;
      auVar24._0_4_ = (uint)(bVar16 & 1) * auVar25._0_4_;
      auVar24._8_4_ = (uint)((byte)(uVar9 >> 2) & 1) * auVar25._8_4_;
      auVar24._12_4_ = (uint)((byte)(uVar9 >> 3) & 1) * auVar25._12_4_;
      auVar24._16_4_ = (uint)((byte)(uVar9 >> 4) & 1) * auVar25._16_4_;
      auVar24._20_4_ = (uint)((byte)(uVar9 >> 5) & 1) * auVar25._20_4_;
      auVar24._24_4_ = (uint)((byte)(uVar9 >> 6) & 1) * auVar25._24_4_;
      auVar24._28_4_ = (uint)(byte)(uVar9 >> 7) * auVar25._28_4_;
      auVar17 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar25 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + (longlong)param_2));
      auVar23._0_4_ = (uint)(bVar16 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar16 & 1) * auVar17._0_4_
      ;
      bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
      auVar23._4_4_ = (uint)bVar2 * auVar25._4_4_ | (uint)!bVar2 * auVar17._4_4_;
      bVar2 = (bool)((byte)(uVar9 >> 2) & 1);
      auVar23._8_4_ = (uint)bVar2 * auVar25._8_4_ | (uint)!bVar2 * auVar17._8_4_;
      bVar2 = (bool)((byte)(uVar9 >> 3) & 1);
      auVar23._12_4_ = (uint)bVar2 * auVar25._12_4_ | (uint)!bVar2 * auVar17._12_4_;
      auVar23._16_4_ = (uint)((byte)(uVar9 >> 4) & 1) * auVar25._16_4_;
      auVar23._20_4_ = (uint)((byte)(uVar9 >> 5) & 1) * auVar25._20_4_;
      auVar23._24_4_ = (uint)((byte)(uVar9 >> 6) & 1) * auVar25._24_4_;
      auVar23._28_4_ = (uint)(byte)(uVar9 >> 7) * auVar25._28_4_;
      auVar17 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                        ._0_16_);
      auVar26 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + unaff_RBX));
      auVar25._0_4_ = (uint)(bVar16 & 1) * auVar26._0_4_ | (uint)!(bool)(bVar16 & 1) * auVar17._0_4_
      ;
      bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
      auVar25._4_4_ = (uint)bVar2 * auVar26._4_4_ | (uint)!bVar2 * auVar17._4_4_;
      bVar2 = (bool)((byte)(uVar9 >> 2) & 1);
      auVar25._8_4_ = (uint)bVar2 * auVar26._8_4_ | (uint)!bVar2 * auVar17._8_4_;
      bVar2 = (bool)((byte)(uVar9 >> 3) & 1);
      auVar25._12_4_ = (uint)bVar2 * auVar26._12_4_ | (uint)!bVar2 * auVar17._12_4_;
      auVar25._16_4_ = (uint)((byte)(uVar9 >> 4) & 1) * auVar26._16_4_;
      auVar25._20_4_ = (uint)((byte)(uVar9 >> 5) & 1) * auVar26._20_4_;
      auVar25._24_4_ = (uint)((byte)(uVar9 >> 6) & 1) * auVar26._24_4_;
      auVar25._28_4_ = (uint)(byte)(uVar9 >> 7) * auVar26._28_4_;
    }
    auVar26 = vminps_avx512vl(local_a0,auVar24);
    auVar27 = vminps_avx512vl(local_80,auVar23);
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_a0._4_4_ = (uint)bVar2 * auVar26._4_4_ | (uint)!bVar2 * local_a0._4_4_;
    local_a0._0_4_ = (uint)(bVar16 & 1) * auVar26._0_4_ | (uint)!(bool)(bVar16 & 1) * local_a0._0_4_
    ;
    local_a0._8_4_ = (uint)bVar3 * auVar26._8_4_ | (uint)!bVar3 * local_a0._8_4_;
    local_a0._12_4_ = (uint)bVar4 * auVar26._12_4_ | (uint)!bVar4 * local_a0._12_4_;
    local_a0._16_4_ = (uint)bVar5 * auVar26._16_4_ | (uint)!bVar5 * local_a0._16_4_;
    local_a0._20_4_ = (uint)bVar6 * auVar26._20_4_ | (uint)!bVar6 * local_a0._20_4_;
    local_a0._24_4_ = (uint)bVar7 * auVar26._24_4_ | (uint)!bVar7 * local_a0._24_4_;
    local_a0._28_4_ = (uint)bVar8 * auVar26._28_4_ | (uint)!bVar8 * local_a0._28_4_;
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_80._4_4_ = (uint)bVar2 * auVar27._4_4_ | (uint)!bVar2 * local_80._4_4_;
    local_80._0_4_ = (uint)(bVar16 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar16 & 1) * local_80._0_4_
    ;
    local_80._8_4_ = (uint)bVar3 * auVar27._8_4_ | (uint)!bVar3 * local_80._8_4_;
    local_80._12_4_ = (uint)bVar4 * auVar27._12_4_ | (uint)!bVar4 * local_80._12_4_;
    local_80._16_4_ = (uint)bVar5 * auVar27._16_4_ | (uint)!bVar5 * local_80._16_4_;
    local_80._20_4_ = (uint)bVar6 * auVar27._20_4_ | (uint)!bVar6 * local_80._20_4_;
    local_80._24_4_ = (uint)bVar7 * auVar27._24_4_ | (uint)!bVar7 * local_80._24_4_;
    local_80._28_4_ = (uint)bVar8 * auVar27._28_4_ | (uint)!bVar8 * local_80._28_4_;
    auVar26 = vminps_avx512vl(local_60,auVar25);
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_60._4_4_ = (uint)bVar2 * auVar26._4_4_ | (uint)!bVar2 * local_60._4_4_;
    local_60._0_4_ = (uint)(bVar16 & 1) * auVar26._0_4_ | (uint)!(bool)(bVar16 & 1) * local_60._0_4_
    ;
    local_60._8_4_ = (uint)bVar3 * auVar26._8_4_ | (uint)!bVar3 * local_60._8_4_;
    local_60._12_4_ = (uint)bVar4 * auVar26._12_4_ | (uint)!bVar4 * local_60._12_4_;
    local_60._16_4_ = (uint)bVar5 * auVar26._16_4_ | (uint)!bVar5 * local_60._16_4_;
    local_60._20_4_ = (uint)bVar6 * auVar26._20_4_ | (uint)!bVar6 * local_60._20_4_;
    local_60._24_4_ = (uint)bVar7 * auVar26._24_4_ | (uint)!bVar7 * local_60._24_4_;
    local_60._28_4_ = (uint)bVar8 * auVar26._28_4_ | (uint)!bVar8 * local_60._28_4_;
    auVar24 = vmaxps_avx512vl(local_100,auVar24);
    auVar23 = vmaxps_avx512vl(local_e0,auVar23);
    auVar25 = vmaxps_avx512vl(local_c0,auVar25);
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_100._4_4_ = (uint)bVar2 * auVar24._4_4_ | (uint)!bVar2 * local_100._4_4_;
    local_100._0_4_ =
         (uint)(bVar16 & 1) * auVar24._0_4_ | (uint)!(bool)(bVar16 & 1) * local_100._0_4_;
    local_100._8_4_ = (uint)bVar3 * auVar24._8_4_ | (uint)!bVar3 * local_100._8_4_;
    local_100._12_4_ = (uint)bVar4 * auVar24._12_4_ | (uint)!bVar4 * local_100._12_4_;
    local_100._16_4_ = (uint)bVar5 * auVar24._16_4_ | (uint)!bVar5 * local_100._16_4_;
    local_100._20_4_ = (uint)bVar6 * auVar24._20_4_ | (uint)!bVar6 * local_100._20_4_;
    local_100._24_4_ = (uint)bVar7 * auVar24._24_4_ | (uint)!bVar7 * local_100._24_4_;
    local_100._28_4_ = (uint)bVar8 * auVar24._28_4_ | (uint)!bVar8 * local_100._28_4_;
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_e0._4_4_ = (uint)bVar2 * auVar23._4_4_ | (uint)!bVar2 * local_e0._4_4_;
    local_e0._0_4_ = (uint)(bVar16 & 1) * auVar23._0_4_ | (uint)!(bool)(bVar16 & 1) * local_e0._0_4_
    ;
    local_e0._8_4_ = (uint)bVar3 * auVar23._8_4_ | (uint)!bVar3 * local_e0._8_4_;
    local_e0._12_4_ = (uint)bVar4 * auVar23._12_4_ | (uint)!bVar4 * local_e0._12_4_;
    local_e0._16_4_ = (uint)bVar5 * auVar23._16_4_ | (uint)!bVar5 * local_e0._16_4_;
    local_e0._20_4_ = (uint)bVar6 * auVar23._20_4_ | (uint)!bVar6 * local_e0._20_4_;
    local_e0._24_4_ = (uint)bVar7 * auVar23._24_4_ | (uint)!bVar7 * local_e0._24_4_;
    local_e0._28_4_ = (uint)bVar8 * auVar23._28_4_ | (uint)!bVar8 * local_e0._28_4_;
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_c0._4_4_ = (uint)bVar2 * auVar25._4_4_ | (uint)!bVar2 * local_c0._4_4_;
    local_c0._0_4_ = (uint)(bVar16 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar16 & 1) * local_c0._0_4_
    ;
    local_c0._8_4_ = (uint)bVar3 * auVar25._8_4_ | (uint)!bVar3 * local_c0._8_4_;
    local_c0._12_4_ = (uint)bVar4 * auVar25._12_4_ | (uint)!bVar4 * local_c0._12_4_;
    local_c0._16_4_ = (uint)bVar5 * auVar25._16_4_ | (uint)!bVar5 * local_c0._16_4_;
    local_c0._20_4_ = (uint)bVar6 * auVar25._20_4_ | (uint)!bVar6 * local_c0._20_4_;
    local_c0._24_4_ = (uint)bVar7 * auVar25._24_4_ | (uint)!bVar7 * local_c0._24_4_;
    local_c0._28_4_ = (uint)bVar8 * auVar25._28_4_ | (uint)!bVar8 * local_c0._28_4_;
  }
  auVar25 = vbroadcastss_avx512vl(ZEXT416(__real_7f800000));
  auVar24 = vblendmps_avx512vl(auVar25,local_a0);
  bVar16 = (byte)uVar15;
  auVar17._0_4_ = (uint)(bVar16 & 1) * auVar24._0_4_ | (uint)!(bool)(bVar16 & 1) * local_a0._0_4_;
  bVar2 = (bool)((byte)(uVar15 >> 1) & 1);
  auVar17._4_4_ = (uint)bVar2 * auVar24._4_4_ | (uint)!bVar2 * local_a0._4_4_;
  bVar2 = (bool)((byte)(uVar15 >> 2) & 1);
  auVar17._8_4_ = (uint)bVar2 * auVar24._8_4_ | (uint)!bVar2 * local_a0._8_4_;
  bVar2 = (bool)((byte)(uVar15 >> 3) & 1);
  auVar17._12_4_ = (uint)bVar2 * auVar24._12_4_ | (uint)!bVar2 * local_a0._12_4_;
  bVar2 = (bool)((byte)(uVar15 >> 4) & 1);
  auVar26._16_4_ = (uint)bVar2 * auVar24._16_4_ | (uint)!bVar2 * local_a0._16_4_;
  auVar26._0_16_ = auVar17;
  bVar2 = (bool)((byte)(uVar15 >> 5) & 1);
  auVar26._20_4_ = (uint)bVar2 * auVar24._20_4_ | (uint)!bVar2 * local_a0._20_4_;
  bVar2 = (bool)((byte)(uVar15 >> 6) & 1);
  auVar26._24_4_ = (uint)bVar2 * auVar24._24_4_ | (uint)!bVar2 * local_a0._24_4_;
  bVar2 = (bool)((byte)(uVar15 >> 7) & 1);
  auVar26._28_4_ = (uint)bVar2 * auVar24._28_4_ | (uint)!bVar2 * local_a0._28_4_;
  auVar18 = vextractf32x4_avx512vl(auVar26,1);
  auVar17 = vminps_avx512vl(auVar18,auVar17);
  auVar18 = vshufpd_avx512vl(auVar17,auVar17,1);
  auVar17 = vminps_avx512vl(auVar18,auVar17);
  auVar18 = vmovshdup_avx512vl(auVar17);
  auVar17 = vminss_avx512f(auVar17,auVar18);
  auVar24 = vblendmps_avx512vl(auVar25,local_80);
  auVar18._0_4_ = (uint)(bVar16 & 1) * auVar24._0_4_ | (uint)!(bool)(bVar16 & 1) * local_80._0_4_;
  bVar2 = (bool)((byte)(uVar15 >> 1) & 1);
  auVar18._4_4_ = (uint)bVar2 * auVar24._4_4_ | (uint)!bVar2 * local_80._4_4_;
  bVar2 = (bool)((byte)(uVar15 >> 2) & 1);
  auVar18._8_4_ = (uint)bVar2 * auVar24._8_4_ | (uint)!bVar2 * local_80._8_4_;
  bVar2 = (bool)((byte)(uVar15 >> 3) & 1);
  auVar18._12_4_ = (uint)bVar2 * auVar24._12_4_ | (uint)!bVar2 * local_80._12_4_;
  bVar2 = (bool)((byte)(uVar15 >> 4) & 1);
  auVar27._16_4_ = (uint)bVar2 * auVar24._16_4_ | (uint)!bVar2 * local_80._16_4_;
  auVar27._0_16_ = auVar18;
  bVar2 = (bool)((byte)(uVar15 >> 5) & 1);
  auVar27._20_4_ = (uint)bVar2 * auVar24._20_4_ | (uint)!bVar2 * local_80._20_4_;
  bVar2 = (bool)((byte)(uVar15 >> 6) & 1);
  auVar27._24_4_ = (uint)bVar2 * auVar24._24_4_ | (uint)!bVar2 * local_80._24_4_;
  bVar2 = (bool)((byte)(uVar15 >> 7) & 1);
  auVar27._28_4_ = (uint)bVar2 * auVar24._28_4_ | (uint)!bVar2 * local_80._28_4_;
  auVar19 = vextractf32x4_avx512vl(auVar27,1);
  auVar18 = vminps_avx512vl(auVar19,auVar18);
  auVar19 = vshufpd_avx512vl(auVar18,auVar18,1);
  auVar18 = vminps_avx512vl(auVar19,auVar18);
  auVar19 = vmovshdup_avx512vl(auVar18);
  auVar18 = vminss_avx512f(auVar18,auVar19);
  auVar19._0_4_ = (uint)(bVar16 & 1) * local_60._0_4_ | (uint)!(bool)(bVar16 & 1) * auVar25._0_4_;
  bVar2 = (bool)((byte)(uVar15 >> 1) & 1);
  auVar19._4_4_ = (uint)bVar2 * local_60._4_4_ | (uint)!bVar2 * auVar25._4_4_;
  bVar2 = (bool)((byte)(uVar15 >> 2) & 1);
  auVar19._8_4_ = (uint)bVar2 * local_60._8_4_ | (uint)!bVar2 * auVar25._8_4_;
  bVar2 = (bool)((byte)(uVar15 >> 3) & 1);
  auVar19._12_4_ = (uint)bVar2 * local_60._12_4_ | (uint)!bVar2 * auVar25._12_4_;
  bVar2 = (bool)((byte)(uVar15 >> 4) & 1);
  auVar28._16_4_ = (uint)bVar2 * local_60._16_4_ | (uint)!bVar2 * auVar25._16_4_;
  auVar28._0_16_ = auVar19;
  bVar2 = (bool)((byte)(uVar15 >> 5) & 1);
  auVar28._20_4_ = (uint)bVar2 * local_60._20_4_ | (uint)!bVar2 * auVar25._20_4_;
  bVar2 = (bool)((byte)(uVar15 >> 6) & 1);
  auVar28._24_4_ = (uint)bVar2 * local_60._24_4_ | (uint)!bVar2 * auVar25._24_4_;
  bVar2 = (bool)((byte)(uVar15 >> 7) & 1);
  auVar28._28_4_ = (uint)bVar2 * local_60._28_4_ | (uint)!bVar2 * auVar25._28_4_;
  auVar20 = vextractf32x4_avx512vl(auVar28,1);
  auVar19 = vminps_avx512vl(auVar20,auVar19);
  auVar20 = vshufpd_avx512vl(auVar19,auVar19,1);
  auVar19 = vminps_avx512vl(auVar20,auVar19);
  auVar20 = vmovshdup_avx512vl(auVar19);
  auVar19 = vminss_avx512f(auVar19,auVar20);
  *param_1 = auVar17._0_4_;
  param_1[1] = auVar18._0_4_;
  param_1[2] = auVar19._0_4_;
  auVar32._4_4_ = __real_ff800000;
  auVar32._0_4_ = __real_ff800000;
  auVar32._8_4_ = __real_ff800000;
  auVar32._12_4_ = __real_ff800000;
  auVar32._16_4_ = __real_ff800000;
  auVar32._20_4_ = __real_ff800000;
  auVar32._24_4_ = __real_ff800000;
  auVar32._28_4_ = __real_ff800000;
  auVar25 = vblendmps_avx512vl(auVar32,local_100);
  auVar20._0_4_ = (uint)(bVar16 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar16 & 1) * local_100._0_4_;
  bVar2 = (bool)((byte)(uVar15 >> 1) & 1);
  auVar20._4_4_ = (uint)bVar2 * auVar25._4_4_ | (uint)!bVar2 * local_100._4_4_;
  bVar2 = (bool)((byte)(uVar15 >> 2) & 1);
  auVar20._8_4_ = (uint)bVar2 * auVar25._8_4_ | (uint)!bVar2 * local_100._8_4_;
  bVar2 = (bool)((byte)(uVar15 >> 3) & 1);
  auVar20._12_4_ = (uint)bVar2 * auVar25._12_4_ | (uint)!bVar2 * local_100._12_4_;
  bVar2 = (bool)((byte)(uVar15 >> 4) & 1);
  auVar29._16_4_ = (uint)bVar2 * auVar25._16_4_ | (uint)!bVar2 * local_100._16_4_;
  auVar29._0_16_ = auVar20;
  bVar2 = (bool)((byte)(uVar15 >> 5) & 1);
  auVar29._20_4_ = (uint)bVar2 * auVar25._20_4_ | (uint)!bVar2 * local_100._20_4_;
  bVar2 = (bool)((byte)(uVar15 >> 6) & 1);
  auVar29._24_4_ = (uint)bVar2 * auVar25._24_4_ | (uint)!bVar2 * local_100._24_4_;
  bVar2 = (bool)((byte)(uVar15 >> 7) & 1);
  auVar29._28_4_ = (uint)bVar2 * auVar25._28_4_ | (uint)!bVar2 * local_100._28_4_;
  auVar17 = vmaxps_avx(auVar29._16_16_,auVar20);
  auVar18 = vshufpd_avx(auVar17,auVar17,1);
  auVar17 = vmaxps_avx(auVar18,auVar17);
  auVar18 = vmovshdup_avx(auVar17);
  auVar18 = vmaxss_avx(auVar18,auVar17);
  auVar25 = vblendmps_avx512vl(auVar32,local_e0);
  auVar21._0_4_ = (uint)(bVar16 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar16 & 1) * local_e0._0_4_;
  bVar2 = (bool)((byte)(uVar15 >> 1) & 1);
  auVar21._4_4_ = (uint)bVar2 * auVar25._4_4_ | (uint)!bVar2 * local_e0._4_4_;
  bVar2 = (bool)((byte)(uVar15 >> 2) & 1);
  auVar21._8_4_ = (uint)bVar2 * auVar25._8_4_ | (uint)!bVar2 * local_e0._8_4_;
  bVar2 = (bool)((byte)(uVar15 >> 3) & 1);
  auVar21._12_4_ = (uint)bVar2 * auVar25._12_4_ | (uint)!bVar2 * local_e0._12_4_;
  bVar2 = (bool)((byte)(uVar15 >> 4) & 1);
  auVar30._16_4_ = (uint)bVar2 * auVar25._16_4_ | (uint)!bVar2 * local_e0._16_4_;
  auVar30._0_16_ = auVar21;
  bVar2 = (bool)((byte)(uVar15 >> 5) & 1);
  auVar30._20_4_ = (uint)bVar2 * auVar25._20_4_ | (uint)!bVar2 * local_e0._20_4_;
  bVar2 = (bool)((byte)(uVar15 >> 6) & 1);
  auVar30._24_4_ = (uint)bVar2 * auVar25._24_4_ | (uint)!bVar2 * local_e0._24_4_;
  bVar2 = (bool)((byte)(uVar15 >> 7) & 1);
  auVar30._28_4_ = (uint)bVar2 * auVar25._28_4_ | (uint)!bVar2 * local_e0._28_4_;
  auVar17 = vmaxps_avx(auVar30._16_16_,auVar21);
  auVar19 = vshufpd_avx(auVar17,auVar17,1);
  auVar17 = vmaxps_avx(auVar19,auVar17);
  auVar19 = vmovshdup_avx(auVar17);
  auVar19 = vmaxss_avx(auVar19,auVar17);
  auVar22._0_4_ = (uint)(bVar16 & 1) * local_c0._0_4_ | (uint)!(bool)(bVar16 & 1) * __real_ff800000;
  bVar2 = (bool)((byte)(uVar15 >> 1) & 1);
  auVar22._4_4_ = (uint)bVar2 * local_c0._4_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar15 >> 2) & 1);
  auVar22._8_4_ = (uint)bVar2 * local_c0._8_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar15 >> 3) & 1);
  auVar22._12_4_ = (uint)bVar2 * local_c0._12_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar15 >> 4) & 1);
  auVar31._16_4_ = (uint)bVar2 * local_c0._16_4_ | (uint)!bVar2 * __real_ff800000;
  auVar31._0_16_ = auVar22;
  bVar2 = (bool)((byte)(uVar15 >> 5) & 1);
  auVar31._20_4_ = (uint)bVar2 * local_c0._20_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar15 >> 6) & 1);
  auVar31._24_4_ = (uint)bVar2 * local_c0._24_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar15 >> 7) & 1);
  auVar31._28_4_ = (uint)bVar2 * local_c0._28_4_ | (uint)!bVar2 * __real_ff800000;
  auVar17 = vmaxps_avx(auVar31._16_16_,auVar22);
  auVar20 = vshufpd_avx(auVar17,auVar17,1);
  auVar17 = vmaxps_avx(auVar20,auVar17);
  auVar20 = vmovshdup_avx(auVar17);
  auVar17 = vmaxss_avx(auVar20,auVar17);
  *param_2 = auVar18._0_4_;
  param_2[1] = auVar19._0_4_;
  param_2[2] = auVar17._0_4_;
  return;
}

// CalculateSquaredRadius___REFunfREFs_5B__c_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_avx512skx @ 140cced10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateSquaredRadius___REFunfREFs_5B__c_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_avx512skx
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5,undefined1 (*param_6) [16])

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  ulonglong uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  longlong unaff_RBX;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 (*pauVar13) [32];
  ulonglong uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  auVar16 = vpsllw_avx512vl(*param_6,0xf);
  uVar1 = *param_1;
  auVar26._4_4_ = uVar1;
  auVar26._0_4_ = uVar1;
  auVar26._8_4_ = uVar1;
  auVar26._12_4_ = uVar1;
  auVar26._16_4_ = uVar1;
  auVar26._20_4_ = uVar1;
  auVar26._24_4_ = uVar1;
  auVar26._28_4_ = uVar1;
  iVar9 = (int)param_4;
  uVar12 = param_5 - iVar9;
  uVar10 = uVar12 + 7;
  if (-1 < (int)uVar12) {
    uVar10 = uVar12;
  }
  iVar11 = ((uVar10 & 0xfffffff8) - uVar12) + param_5;
  if (iVar9 < iVar11) {
    param_4 = (longlong)iVar9;
    pauVar13 = (undefined1 (*) [32])(param_3 + param_4 * 0xc + 0x40);
    do {
      auVar21 = pauVar13[-1];
      auVar19 = vblendps_avx(auVar21,pauVar13[-2],0x24);
      auVar17 = vpermt2ps_avx512vl(pauVar13[-2],
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar21);
      auVar18 = vpermt2ps_avx512vl(auVar19,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*pauVar13);
      auVar19 = vpermt2ps_avx512vl(*pauVar13,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar21);
      auVar20 = vinsertf32x4_avx512vl(auVar17,auVar19._0_16_,1);
      uVar1 = *param_2;
      auVar21._4_4_ = uVar1;
      auVar21._0_4_ = uVar1;
      auVar21._8_4_ = uVar1;
      auVar21._12_4_ = uVar1;
      auVar21._16_4_ = uVar1;
      auVar21._20_4_ = uVar1;
      auVar21._24_4_ = uVar1;
      auVar21._28_4_ = uVar1;
      auVar21 = vsubps_avx512vl(auVar20,auVar21);
      auVar17 = vshuff64x2_avx512vl(auVar17,auVar19,3);
      uVar1 = param_2[1];
      auVar19._4_4_ = uVar1;
      auVar19._0_4_ = uVar1;
      auVar19._8_4_ = uVar1;
      auVar19._12_4_ = uVar1;
      auVar19._16_4_ = uVar1;
      auVar19._20_4_ = uVar1;
      auVar19._24_4_ = uVar1;
      auVar19._28_4_ = uVar1;
      auVar19 = vsubps_avx512vl(auVar17,auVar19);
      uVar1 = param_2[2];
      auVar17._4_4_ = uVar1;
      auVar17._0_4_ = uVar1;
      auVar17._8_4_ = uVar1;
      auVar17._12_4_ = uVar1;
      auVar17._16_4_ = uVar1;
      auVar17._20_4_ = uVar1;
      auVar17._24_4_ = uVar1;
      auVar17._28_4_ = uVar1;
      auVar17 = vsubps_avx512vl(auVar18,auVar17);
      auVar18._0_4_ = auVar19._0_4_ * auVar19._0_4_;
      auVar18._4_4_ = auVar19._4_4_ * auVar19._4_4_;
      auVar18._8_4_ = auVar19._8_4_ * auVar19._8_4_;
      auVar18._12_4_ = auVar19._12_4_ * auVar19._12_4_;
      auVar18._16_4_ = auVar19._16_4_ * auVar19._16_4_;
      auVar18._20_4_ = auVar19._20_4_ * auVar19._20_4_;
      auVar18._24_4_ = auVar19._24_4_ * auVar19._24_4_;
      auVar18._28_4_ = auVar19._28_4_ * auVar19._28_4_;
      auVar21 = vfmadd231ps_avx512vl(auVar18,auVar21,auVar21);
      auVar21 = vfmadd231ps_avx512vl(auVar21,auVar17,auVar17);
      auVar26 = vmaxps_avx(auVar26,auVar21);
      param_4 = param_4 + 8;
      pauVar13 = pauVar13 + 3;
    } while (param_4 < iVar11);
  }
  uVar14 = vpmovw2m_avx512vl(auVar16);
  auVar20 = auVar26;
  if ((int)param_4 < param_5) {
    auVar21 = vpbroadcastd_avx512vl();
    auVar4._0_4_ = auVar21._0_4_ +
                   ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar4._4_4_ = auVar21._4_4_ + _UNK_150b50ae4;
    auVar4._8_4_ = auVar21._8_4_ + _UNK_150b50ae8;
    auVar4._12_4_ = auVar21._12_4_ + _UNK_150b50aec;
    auVar4._16_4_ = auVar21._16_4_ + _UNK_150b50af0;
    auVar4._20_4_ = auVar21._20_4_ + _UNK_150b50af4;
    auVar4._24_4_ = auVar21._24_4_ + _UNK_150b50af8;
    auVar4._28_4_ = auVar21._28_4_ + _UNK_150b50afc;
    auVar21 = vpbroadcastd_avx512vl();
    uVar5 = vpcmpgtd_avx512vl(auVar21,auVar4);
    pauVar13 = (undefined1 (*) [32])(param_3 + (longlong)(int)param_4 * 0xc);
    bVar15 = (byte)uVar5;
    if (bVar15 == 0xff) {
      auVar21 = pauVar13[1];
      auVar19 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar13,auVar21);
      auVar17 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar13[2],auVar21);
      auVar22 = vinsertf32x4_avx512vl(auVar19,auVar17._0_16_,1);
      auVar23 = vshuff64x2_avx512vl(auVar19,auVar17,3);
      auVar21 = vblendps_avx(auVar21,*pauVar13,0x24);
      auVar24 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar21,pauVar13[2]);
    }
    else {
      auVar21 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar13 + (longlong)param_2));
      auVar22._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar21._4_4_;
      auVar22._0_4_ = (uint)(bVar15 & 1) * auVar21._0_4_;
      auVar22._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar21._8_4_;
      auVar22._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar21._12_4_;
      auVar22._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar21._16_4_;
      auVar22._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar21._20_4_;
      auVar22._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar21._24_4_;
      auVar22._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar21._28_4_;
      auVar21 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar13 + unaff_RBX));
      auVar23._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar21._4_4_;
      auVar23._0_4_ = (uint)(bVar15 & 1) * auVar21._0_4_;
      auVar23._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar21._8_4_;
      auVar23._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar21._12_4_;
      auVar23._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar21._16_4_;
      auVar23._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar21._20_4_;
      auVar23._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar21._24_4_;
      auVar23._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar21._28_4_;
      auVar21 = vgatherdps_avx512vl(*(undefined4 *)*pauVar13);
      auVar24._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar21._4_4_;
      auVar24._0_4_ = (uint)(bVar15 & 1) * auVar21._0_4_;
      auVar24._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar21._8_4_;
      auVar24._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar21._12_4_;
      auVar24._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar21._16_4_;
      auVar24._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar21._20_4_;
      auVar24._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar21._24_4_;
      auVar24._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar21._28_4_;
    }
    uVar1 = *param_2;
    auVar6._4_4_ = uVar1;
    auVar6._0_4_ = uVar1;
    auVar6._8_4_ = uVar1;
    auVar6._12_4_ = uVar1;
    auVar6._16_4_ = uVar1;
    auVar6._20_4_ = uVar1;
    auVar6._24_4_ = uVar1;
    auVar6._28_4_ = uVar1;
    auVar21 = vsubps_avx512vl(auVar22,auVar6);
    uVar1 = param_2[1];
    auVar7._4_4_ = uVar1;
    auVar7._0_4_ = uVar1;
    auVar7._8_4_ = uVar1;
    auVar7._12_4_ = uVar1;
    auVar7._16_4_ = uVar1;
    auVar7._20_4_ = uVar1;
    auVar7._24_4_ = uVar1;
    auVar7._28_4_ = uVar1;
    auVar19 = vsubps_avx512vl(auVar23,auVar7);
    uVar1 = param_2[2];
    auVar8._4_4_ = uVar1;
    auVar8._0_4_ = uVar1;
    auVar8._8_4_ = uVar1;
    auVar8._12_4_ = uVar1;
    auVar8._16_4_ = uVar1;
    auVar8._20_4_ = uVar1;
    auVar8._24_4_ = uVar1;
    auVar8._28_4_ = uVar1;
    auVar17 = vsubps_avx512vl(auVar24,auVar8);
    auVar27._0_4_ =
         auVar17._0_4_ * auVar17._0_4_ +
         auVar21._0_4_ * auVar21._0_4_ + auVar19._0_4_ * auVar19._0_4_;
    auVar27._4_4_ =
         auVar17._4_4_ * auVar17._4_4_ +
         auVar21._4_4_ * auVar21._4_4_ + auVar19._4_4_ * auVar19._4_4_;
    auVar27._8_4_ =
         auVar17._8_4_ * auVar17._8_4_ +
         auVar21._8_4_ * auVar21._8_4_ + auVar19._8_4_ * auVar19._8_4_;
    auVar27._12_4_ =
         auVar17._12_4_ * auVar17._12_4_ +
         auVar21._12_4_ * auVar21._12_4_ + auVar19._12_4_ * auVar19._12_4_;
    auVar27._16_4_ =
         auVar17._16_4_ * auVar17._16_4_ +
         auVar21._16_4_ * auVar21._16_4_ + auVar19._16_4_ * auVar19._16_4_;
    auVar27._20_4_ =
         auVar17._20_4_ * auVar17._20_4_ +
         auVar21._20_4_ * auVar21._20_4_ + auVar19._20_4_ * auVar19._20_4_;
    auVar27._24_4_ =
         auVar17._24_4_ * auVar17._24_4_ +
         auVar21._24_4_ * auVar21._24_4_ + auVar19._24_4_ * auVar19._24_4_;
    auVar27._28_4_ =
         auVar17._28_4_ * auVar17._28_4_ +
         auVar21._28_4_ * auVar21._28_4_ + auVar19._28_4_ * auVar19._28_4_;
    auVar21 = vmaxps_avx512vl(auVar26,auVar27);
    auVar20._0_4_ = (uint)(bVar15 & 1) * auVar21._0_4_ | (uint)!(bool)(bVar15 & 1) * auVar26._0_4_;
    bVar2 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar20._4_4_ = (uint)bVar2 * auVar21._4_4_ | (uint)!bVar2 * auVar26._4_4_;
    bVar2 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar20._8_4_ = (uint)bVar2 * auVar21._8_4_ | (uint)!bVar2 * auVar26._8_4_;
    bVar2 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar20._12_4_ = (uint)bVar2 * auVar21._12_4_ | (uint)!bVar2 * auVar26._12_4_;
    bVar2 = (bool)((byte)(uVar5 >> 4) & 1);
    auVar20._16_4_ = (uint)bVar2 * auVar21._16_4_ | (uint)!bVar2 * auVar26._16_4_;
    bVar2 = (bool)((byte)(uVar5 >> 5) & 1);
    auVar20._20_4_ = (uint)bVar2 * auVar21._20_4_ | (uint)!bVar2 * auVar26._20_4_;
    bVar2 = (bool)((byte)(uVar5 >> 6) & 1);
    auVar20._24_4_ = (uint)bVar2 * auVar21._24_4_ | (uint)!bVar2 * auVar26._24_4_;
    bVar2 = SUB81(uVar5 >> 7,0);
    auVar20._28_4_ = (uint)bVar2 * auVar21._28_4_ | (uint)!bVar2 * auVar26._28_4_;
  }
  bVar2 = (bool)((byte)uVar14 & 1);
  auVar16._0_4_ = (uint)bVar2 * auVar20._0_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar14 >> 1) & 1);
  auVar16._4_4_ = (uint)bVar2 * auVar20._4_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar14 >> 2) & 1);
  auVar16._8_4_ = (uint)bVar2 * auVar20._8_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar14 >> 3) & 1);
  auVar16._12_4_ = (uint)bVar2 * auVar20._12_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar14 >> 4) & 1);
  auVar25._16_4_ = (uint)bVar2 * auVar20._16_4_ | (uint)!bVar2 * __real_ff800000;
  auVar25._0_16_ = auVar16;
  bVar2 = (bool)((byte)(uVar14 >> 5) & 1);
  auVar25._20_4_ = (uint)bVar2 * auVar20._20_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar14 >> 6) & 1);
  auVar25._24_4_ = (uint)bVar2 * auVar20._24_4_ | (uint)!bVar2 * __real_ff800000;
  bVar2 = (bool)((byte)(uVar14 >> 7) & 1);
  auVar25._28_4_ = (uint)bVar2 * auVar20._28_4_ | (uint)!bVar2 * __real_ff800000;
  auVar16 = vmaxps_avx(auVar25._16_16_,auVar16);
  auVar3 = vshufpd_avx(auVar16,auVar16,1);
  auVar16 = vmaxps_avx(auVar3,auVar16);
  auVar3 = vmovshdup_avx(auVar16);
  auVar16 = vmaxss_avx(auVar3,auVar16);
  *param_1 = auVar16._0_4_;
  return;
}

// ApplyPreSimulationTransforms_avx512skx @ 140ccef40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransforms_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,undefined4 *param_9,
               uint *param_10,undefined4 param_11,int param_12,uint param_13)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [32];
  undefined1 (*pauVar21) [32];
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  undefined1 (*pauVar27) [32];
  longlong lVar28;
  undefined1 auVar29 [16];
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
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
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
  undefined1 auVar30 [16];
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
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  float fVar110;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  float fVar125;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar126 [32];
  float fVar134;
  undefined1 auVar127 [32];
  float fVar135;
  float fVar136;
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  float fVar137;
  float fVar138;
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  undefined1 in_ZMM21 [64];
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 auVar49 [32];
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
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  
  uVar16 = __real_00000024;
  uVar15 = __real_00000020;
  uVar14 = __real_00000014;
  auVar68 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar67 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar66 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar65 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar64 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar63 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  uVar13 = __real_00000018;
  uVar12 = __real_00000010;
  uVar11 = __real_0000000c;
  uVar10 = __real_00000008;
  uVar9 = __real_00000004;
  auVar105 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar47 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar48 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar31 = in_ZMM10._0_32_;
  auVar32 = in_ZMM12._0_32_;
  auVar102 = in_ZMM9._0_32_;
  auVar34 = in_ZMM11._0_32_;
  auVar30 = in_ZMM21._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  uVar26 = param_13 - param_12;
  pauVar27 = (undefined1 (*) [32])(ulonglong)uVar26;
  uVar17 = uVar26 + 7;
  if (-1 < (int)uVar26) {
    uVar17 = uVar26;
  }
  iVar18 = ((uVar17 & 0xfffffff8) - uVar26) + param_13;
  if (param_12 < iVar18) {
    auVar73._4_4_ = param_11;
    auVar73._0_4_ = param_11;
    auVar73._8_4_ = param_11;
    auVar73._12_4_ = param_11;
    auVar73._16_4_ = param_11;
    auVar73._20_4_ = param_11;
    auVar73._24_4_ = param_11;
    auVar73._28_4_ = param_11;
    lVar28 = (longlong)param_12;
    lVar8 = lVar28 * 0xc;
    local_228 = param_3;
    lVar19 = param_3 + 0x40;
    local_220 = param_1;
    pauVar27 = (undefined1 (*) [32])(lVar28 * 0x10 + param_1 + 0x60);
    local_218 = param_2;
    lVar23 = param_2 + 0x40;
    local_210 = param_4;
    lVar25 = param_4 + 0x40;
    lVar22 = param_7 + 0x40;
    lVar24 = param_5 + 0x40;
    param_12 = param_12 << 2;
    local_108 = __real_00000004;
    uStack_104 = __real_00000004;
    uStack_100 = __real_00000004;
    uStack_fc = __real_00000004;
    uStack_f8 = __real_00000004;
    uStack_f4 = __real_00000004;
    uStack_f0 = __real_00000004;
    uStack_ec = __real_00000004;
    local_128 = __real_00000008;
    uStack_124 = __real_00000008;
    uStack_120 = __real_00000008;
    uStack_11c = __real_00000008;
    uStack_118 = __real_00000008;
    uStack_114 = __real_00000008;
    uStack_110 = __real_00000008;
    uStack_10c = __real_00000008;
    local_148 = __real_0000000c;
    uStack_144 = __real_0000000c;
    uStack_140 = __real_0000000c;
    uStack_13c = __real_0000000c;
    uStack_138 = __real_0000000c;
    uStack_134 = __real_0000000c;
    uStack_130 = __real_0000000c;
    uStack_12c = __real_0000000c;
    local_168 = __real_00000010;
    uStack_164 = __real_00000010;
    uStack_160 = __real_00000010;
    uStack_15c = __real_00000010;
    uStack_158 = __real_00000010;
    uStack_154 = __real_00000010;
    uStack_150 = __real_00000010;
    uStack_14c = __real_00000010;
    local_188 = __real_00000014;
    uStack_184 = __real_00000014;
    uStack_180 = __real_00000014;
    uStack_17c = __real_00000014;
    uStack_178 = __real_00000014;
    uStack_174 = __real_00000014;
    uStack_170 = __real_00000014;
    uStack_16c = __real_00000014;
    local_1a8 = __real_00000018;
    uStack_1a4 = __real_00000018;
    uStack_1a0 = __real_00000018;
    uStack_19c = __real_00000018;
    uStack_198 = __real_00000018;
    uStack_194 = __real_00000018;
    uStack_190 = __real_00000018;
    uStack_18c = __real_00000018;
    local_1c8 = __real_00000020;
    uStack_1c4 = __real_00000020;
    uStack_1c0 = __real_00000020;
    uStack_1bc = __real_00000020;
    uStack_1b8 = __real_00000020;
    uStack_1b4 = __real_00000020;
    uStack_1b0 = __real_00000020;
    uStack_1ac = __real_00000020;
    local_1e8 = __real_00000024;
    uStack_1e4 = __real_00000024;
    uStack_1e0 = __real_00000024;
    uStack_1dc = __real_00000024;
    uStack_1d8 = __real_00000024;
    uStack_1d4 = __real_00000024;
    uStack_1d0 = __real_00000024;
    uStack_1cc = __real_00000024;
    local_208 = __real_00000028;
    uStack_204 = __real_00000028;
    uStack_200 = __real_00000028;
    uStack_1fc = __real_00000028;
    uStack_1f8 = __real_00000028;
    uStack_1f4 = __real_00000028;
    uStack_1f0 = __real_00000028;
    uStack_1ec = __real_00000028;
    auVar30 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    do {
      auVar102 = *(undefined1 (*) [32])(param_8 + param_12);
      auVar31 = vpaddd_avx512vl(auVar102,auVar102);
      auVar32 = vpslld_avx512vl(auVar102,2);
      vpaddd_avx512vl(auVar32,auVar31);
      auVar33 = vgatherdps_avx512vl(param_9[param_5 * 2]);
      fVar129 = auVar33._8_4_;
      fVar131 = auVar33._12_4_;
      fVar82 = auVar33._16_4_;
      fVar87 = auVar33._20_4_;
      fVar92 = auVar33._24_4_;
      fVar97 = auVar33._28_4_;
      auVar31 = vpslld_avx512vl(auVar102,4);
      auVar102 = vpslld_avx2(auVar102,5);
      auVar34 = vpaddd_avx512vl(auVar102,auVar31);
      auVar35._4_4_ = uVar9;
      auVar35._0_4_ = uVar9;
      auVar35._8_4_ = uVar9;
      auVar35._12_4_ = uVar9;
      auVar35._16_4_ = uVar9;
      auVar35._20_4_ = uVar9;
      auVar35._24_4_ = uVar9;
      auVar35._28_4_ = uVar9;
      vpord_avx512vl(auVar34,auVar35);
      auVar35 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar36._4_4_ = uVar10;
      auVar36._0_4_ = uVar10;
      auVar36._8_4_ = uVar10;
      auVar36._12_4_ = uVar10;
      auVar36._16_4_ = uVar10;
      auVar36._20_4_ = uVar10;
      auVar36._24_4_ = uVar10;
      auVar36._28_4_ = uVar10;
      vpord_avx512vl(auVar34,auVar36);
      auVar36 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar37._4_4_ = uVar11;
      auVar37._0_4_ = uVar11;
      auVar37._8_4_ = uVar11;
      auVar37._12_4_ = uVar11;
      auVar37._16_4_ = uVar11;
      auVar37._20_4_ = uVar11;
      auVar37._24_4_ = uVar11;
      auVar37._28_4_ = uVar11;
      vpord_avx512vl(auVar34,auVar37);
      auVar37 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      fVar80 = auVar37._8_4_;
      fVar81 = auVar37._12_4_;
      fVar83 = auVar37._16_4_;
      fVar88 = auVar37._20_4_;
      fVar93 = auVar37._24_4_;
      fVar98 = auVar37._28_4_;
      auVar102._4_4_ = uVar12;
      auVar102._0_4_ = uVar12;
      auVar102._8_4_ = uVar12;
      auVar102._12_4_ = uVar12;
      auVar102._16_4_ = uVar12;
      auVar102._20_4_ = uVar12;
      auVar102._24_4_ = uVar12;
      auVar102._28_4_ = uVar12;
      vpaddd_avx512vl(auVar34,auVar102);
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar31._4_4_ = uVar14;
      auVar31._0_4_ = uVar14;
      auVar31._8_4_ = uVar14;
      auVar31._12_4_ = uVar14;
      auVar31._16_4_ = uVar14;
      auVar31._20_4_ = uVar14;
      auVar31._24_4_ = uVar14;
      auVar31._28_4_ = uVar14;
      vpaddd_avx512vl(auVar34,auVar31);
      auVar31 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar32._4_4_ = uVar13;
      auVar32._0_4_ = uVar13;
      auVar32._8_4_ = uVar13;
      auVar32._12_4_ = uVar13;
      auVar32._16_4_ = uVar13;
      auVar32._20_4_ = uVar13;
      auVar32._24_4_ = uVar13;
      auVar32._28_4_ = uVar13;
      vpaddd_avx512vl(auVar34,auVar32);
      auVar32 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      auVar41._4_4_ = uVar15;
      auVar41._0_4_ = uVar15;
      auVar41._8_4_ = uVar15;
      auVar41._12_4_ = uVar15;
      auVar41._16_4_ = uVar15;
      auVar41._20_4_ = uVar15;
      auVar41._24_4_ = uVar15;
      auVar41._28_4_ = uVar15;
      vpaddd_avx512vl(auVar34,auVar41);
      auVar38 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      fVar125 = auVar38._8_4_;
      fVar132 = auVar38._12_4_;
      fVar84 = auVar38._16_4_;
      fVar89 = auVar38._20_4_;
      fVar94 = auVar38._24_4_;
      fVar99 = auVar38._28_4_;
      auVar42._4_4_ = uVar16;
      auVar42._0_4_ = uVar16;
      auVar42._8_4_ = uVar16;
      auVar42._12_4_ = uVar16;
      auVar42._16_4_ = uVar16;
      auVar42._20_4_ = uVar16;
      auVar42._24_4_ = uVar16;
      auVar42._28_4_ = uVar16;
      vpaddd_avx512vl(auVar34,auVar42);
      auVar39 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_5));
      fVar128 = auVar39._8_4_;
      fVar133 = auVar39._12_4_;
      fVar85 = auVar39._16_4_;
      fVar90 = auVar39._20_4_;
      fVar95 = auVar39._24_4_;
      fVar100 = auVar39._28_4_;
      auVar40 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar19));
      fVar130 = auVar40._8_4_;
      fVar134 = auVar40._12_4_;
      fVar86 = auVar40._16_4_;
      fVar91 = auVar40._20_4_;
      fVar96 = auVar40._24_4_;
      fVar101 = auVar40._28_4_;
      auVar34 = *(undefined1 (*) [32])(lVar19 + -0x40 + lVar8);
      auVar42 = *(undefined1 (*) [32])(lVar19 + -0x20 + lVar8);
      auVar41 = vblendps_avx(auVar42,auVar34,0x24);
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar48,auVar42);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar105,*(undefined1 (*) [32])(lVar19 + lVar8));
      auVar42 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar19 + lVar8),auVar47,auVar42);
      auVar43 = vinsertf32x4_avx512vl(auVar34,auVar42._0_16_,1);
      auVar34 = vshuff64x2_avx512vl(auVar34,auVar42,3);
      fVar139 = auVar38._0_4_;
      auVar45._0_4_ = fVar139 * auVar43._0_4_;
      fVar140 = auVar38._4_4_;
      auVar45._4_4_ = fVar140 * auVar43._4_4_;
      auVar45._8_4_ = fVar125 * auVar43._8_4_;
      auVar45._12_4_ = fVar132 * auVar43._12_4_;
      auVar45._16_4_ = fVar84 * auVar43._16_4_;
      auVar45._20_4_ = fVar89 * auVar43._20_4_;
      auVar45._24_4_ = fVar94 * auVar43._24_4_;
      auVar45._28_4_ = fVar99 * auVar43._28_4_;
      fVar141 = auVar39._0_4_;
      auVar38._0_4_ = fVar141 * auVar34._0_4_;
      fVar142 = auVar39._4_4_;
      auVar38._4_4_ = fVar142 * auVar34._4_4_;
      auVar38._8_4_ = fVar128 * auVar34._8_4_;
      auVar38._12_4_ = fVar133 * auVar34._12_4_;
      auVar38._16_4_ = fVar85 * auVar34._16_4_;
      auVar38._20_4_ = fVar90 * auVar34._20_4_;
      auVar38._24_4_ = fVar95 * auVar34._24_4_;
      auVar38._28_4_ = fVar100 * auVar34._28_4_;
      fVar143 = auVar40._0_4_;
      auVar39._0_4_ = fVar143 * auVar41._0_4_;
      fVar144 = auVar40._4_4_;
      auVar39._4_4_ = fVar144 * auVar41._4_4_;
      auVar39._8_4_ = fVar130 * auVar41._8_4_;
      auVar39._12_4_ = fVar134 * auVar41._12_4_;
      auVar39._16_4_ = fVar86 * auVar41._16_4_;
      auVar39._20_4_ = fVar91 * auVar41._20_4_;
      auVar39._24_4_ = fVar96 * auVar41._24_4_;
      auVar39._28_4_ = fVar101 * auVar41._28_4_;
      auVar34 = vmulps_avx512vl(auVar35,auVar45);
      auVar42 = vmulps_avx512vl(auVar36,auVar38);
      fVar135 = auVar33._0_4_;
      fVar136 = auVar33._4_4_;
      auVar34 = vfmsub231ps_avx512vl(auVar34,auVar33,auVar38);
      auVar42 = vfmsub231ps_avx512vl(auVar42,auVar35,auVar39);
      fVar110 = auVar36._0_4_ * auVar45._0_4_ - fVar135 * auVar39._0_4_;
      fVar118 = auVar36._4_4_ * auVar45._4_4_ - fVar136 * auVar39._4_4_;
      fVar119 = auVar36._8_4_ * auVar45._8_4_ - fVar129 * auVar39._8_4_;
      fVar120 = auVar36._12_4_ * auVar45._12_4_ - fVar131 * auVar39._12_4_;
      fVar121 = auVar36._16_4_ * auVar45._16_4_ - fVar82 * auVar39._16_4_;
      fVar122 = auVar36._20_4_ * auVar45._20_4_ - fVar87 * auVar39._20_4_;
      fVar123 = auVar36._24_4_ * auVar45._24_4_ - fVar92 * auVar39._24_4_;
      fVar124 = auVar36._28_4_ * auVar45._28_4_ - fVar97 * auVar39._28_4_;
      auVar42 = vaddps_avx512vl(auVar42,auVar42);
      auVar111._0_4_ = fVar110 + fVar110;
      auVar111._4_4_ = fVar118 + fVar118;
      auVar111._8_4_ = fVar119 + fVar119;
      auVar111._12_4_ = fVar120 + fVar120;
      auVar111._16_4_ = fVar121 + fVar121;
      auVar111._20_4_ = fVar122 + fVar122;
      auVar111._24_4_ = fVar123 + fVar123;
      auVar111._28_4_ = fVar124 + fVar124;
      auVar34 = vaddps_avx512vl(auVar34,auVar34);
      auVar41 = vfmadd231ps_avx512vl(auVar45,auVar37,auVar42);
      fVar137 = auVar37._0_4_;
      auVar44._0_4_ = fVar137 * auVar111._0_4_ + auVar38._0_4_;
      fVar138 = auVar37._4_4_;
      auVar44._4_4_ = fVar138 * auVar111._4_4_ + auVar38._4_4_;
      auVar44._8_4_ = fVar80 * auVar111._8_4_ + auVar38._8_4_;
      auVar44._12_4_ = fVar81 * auVar111._12_4_ + auVar38._12_4_;
      auVar44._16_4_ = fVar83 * auVar111._16_4_ + auVar38._16_4_;
      auVar44._20_4_ = fVar88 * auVar111._20_4_ + auVar38._20_4_;
      auVar44._24_4_ = fVar93 * auVar111._24_4_ + auVar38._24_4_;
      auVar44._28_4_ = fVar98 * auVar111._28_4_ + auVar38._28_4_;
      auVar38 = vfmadd231ps_avx512vl(auVar39,auVar37,auVar34);
      auVar39 = vmulps_avx512vl(auVar35,auVar42);
      auVar40 = vmulps_avx512vl(auVar36,auVar111);
      auVar43 = vmulps_avx512vl(auVar33,auVar34);
      auVar34 = vfmsub231ps_avx512vl(auVar40,auVar35,auVar34);
      auVar34 = vaddps_avx512vl(auVar41,auVar34);
      auVar42 = vfmsub231ps_avx512vl(auVar43,auVar36,auVar42);
      auVar42 = vaddps_avx512vl(auVar44,auVar42);
      auVar40._0_4_ = auVar102._0_4_ + auVar34._0_4_;
      auVar40._4_4_ = auVar102._4_4_ + auVar34._4_4_;
      auVar40._8_4_ = auVar102._8_4_ + auVar34._8_4_;
      auVar40._12_4_ = auVar102._12_4_ + auVar34._12_4_;
      auVar40._16_4_ = auVar102._16_4_ + auVar34._16_4_;
      auVar40._20_4_ = auVar102._20_4_ + auVar34._20_4_;
      auVar40._24_4_ = auVar102._24_4_ + auVar34._24_4_;
      auVar40._28_4_ = auVar102._28_4_ + auVar34._28_4_;
      auVar112._0_4_ = auVar31._0_4_ + auVar42._0_4_;
      auVar112._4_4_ = auVar31._4_4_ + auVar42._4_4_;
      auVar112._8_4_ = auVar31._8_4_ + auVar42._8_4_;
      auVar112._12_4_ = auVar31._12_4_ + auVar42._12_4_;
      auVar112._16_4_ = auVar31._16_4_ + auVar42._16_4_;
      auVar112._20_4_ = auVar31._20_4_ + auVar42._20_4_;
      auVar112._24_4_ = auVar31._24_4_ + auVar42._24_4_;
      auVar112._28_4_ = auVar31._28_4_ + auVar42._28_4_;
      uVar17 = *param_10;
      auVar103._4_4_ = uVar17;
      auVar103._0_4_ = uVar17;
      auVar103._8_4_ = uVar17;
      auVar103._12_4_ = uVar17;
      auVar103._16_4_ = uVar17;
      auVar103._20_4_ = uVar17;
      auVar103._24_4_ = uVar17;
      auVar103._28_4_ = uVar17;
      auVar106._0_4_ = auVar32._0_4_ + auVar38._0_4_ + (fVar135 * auVar111._0_4_ - auVar39._0_4_);
      auVar106._4_4_ = auVar32._4_4_ + auVar38._4_4_ + (fVar136 * auVar111._4_4_ - auVar39._4_4_);
      auVar106._8_4_ = auVar32._8_4_ + auVar38._8_4_ + (fVar129 * auVar111._8_4_ - auVar39._8_4_);
      auVar106._12_4_ =
           auVar32._12_4_ + auVar38._12_4_ + (fVar131 * auVar111._12_4_ - auVar39._12_4_);
      auVar106._16_4_ =
           auVar32._16_4_ + auVar38._16_4_ + (fVar82 * auVar111._16_4_ - auVar39._16_4_);
      auVar106._20_4_ =
           auVar32._20_4_ + auVar38._20_4_ + (fVar87 * auVar111._20_4_ - auVar39._20_4_);
      auVar106._24_4_ =
           auVar32._24_4_ + auVar38._24_4_ + (fVar92 * auVar111._24_4_ - auVar39._24_4_);
      auVar106._28_4_ =
           auVar32._28_4_ + auVar38._28_4_ + (fVar97 * auVar111._28_4_ - auVar39._28_4_);
      auVar42 = vsubps_avx(auVar40,auVar103);
      auVar38 = vbroadcastss_avx512vl(ZEXT416(param_10[1]));
      auVar39 = vbroadcastss_avx512vl(ZEXT416(param_10[2]));
      auVar41 = vsubps_avx512vl(auVar112,auVar38);
      auVar40 = vsubps_avx512vl(auVar106,auVar39);
      auVar34 = *(undefined1 (*) [32])(param_6 + param_12);
      auVar43 = vunpcklps_avx512vl(auVar42,auVar41);
      auVar44 = vunpcklps_avx512vl(auVar40,auVar34);
      auVar45 = vunpcklpd_avx512vl(auVar43,auVar44);
      auVar43 = vunpckhpd_avx512vl(auVar43,auVar44);
      auVar44 = vunpckhps_avx512vl(auVar42,auVar41);
      auVar34 = vunpckhps_avx(auVar40,auVar34);
      auVar46 = vunpcklpd_avx512vl(auVar44,auVar34);
      auVar34 = vunpckhpd_avx512vl(auVar44,auVar34);
      auVar44 = vinsertf32x4_avx512vl(auVar45,auVar43._0_16_,1);
      pauVar27[-3] = auVar44;
      auVar44 = vinsertf32x4_avx512vl(auVar46,auVar34._0_16_,1);
      pauVar27[-2] = auVar44;
      auVar43 = vshuff64x2_avx512vl(auVar45,auVar43,3);
      pauVar27[-1] = auVar43;
      auVar34 = vshuff64x2_avx512vl(auVar46,auVar34,3);
      *pauVar27 = auVar34;
      auVar34 = vpermt2ps_avx512vl(auVar40,auVar63,auVar41);
      auVar43 = vpermt2ps_avx512vl(auVar42,auVar64,auVar41);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar65,auVar34);
      *(undefined1 (*) [32])(lVar19 + -0x40 + lVar8) = auVar43;
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar66,auVar42);
      *(undefined1 (*) [32])(lVar19 + -0x20 + lVar8) = auVar34;
      auVar34 = vpermt2ps_avx512vl(auVar41,auVar67,auVar42);
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar68,auVar40);
      *(undefined1 (*) [32])(lVar19 + lVar8) = auVar34;
      auVar34 = *(undefined1 (*) [32])(lVar23 + -0x40 + lVar8);
      auVar42 = *(undefined1 (*) [32])(lVar23 + -0x20 + lVar8);
      auVar41 = vblendps_avx(auVar42,auVar34,0x24);
      auVar40 = vpermt2ps_avx512vl(auVar34,auVar48,auVar42);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar105,*(undefined1 (*) [32])(lVar23 + lVar8));
      auVar42 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar23 + lVar8),auVar47,auVar42);
      auVar34 = vperm2f128_avx(auVar40,auVar42,0x31);
      auVar107._0_4_ = fVar139 * auVar40._0_4_;
      auVar107._4_4_ = fVar140 * auVar40._4_4_;
      auVar107._8_4_ = fVar125 * auVar40._8_4_;
      auVar107._12_4_ = fVar132 * auVar40._12_4_;
      auVar107._16_4_ = fVar84 * auVar42._0_4_;
      auVar107._20_4_ = fVar89 * auVar42._4_4_;
      auVar107._24_4_ = fVar94 * auVar42._8_4_;
      auVar107._28_4_ = fVar99 * auVar42._12_4_;
      auVar43._0_4_ = fVar141 * auVar34._0_4_;
      auVar43._4_4_ = fVar142 * auVar34._4_4_;
      auVar43._8_4_ = fVar128 * auVar34._8_4_;
      auVar43._12_4_ = fVar133 * auVar34._12_4_;
      auVar43._16_4_ = fVar85 * auVar34._16_4_;
      auVar43._20_4_ = fVar90 * auVar34._20_4_;
      auVar43._24_4_ = fVar95 * auVar34._24_4_;
      auVar43._28_4_ = fVar100 * auVar34._28_4_;
      auVar113._0_4_ = fVar143 * auVar41._0_4_;
      auVar113._4_4_ = fVar144 * auVar41._4_4_;
      auVar113._8_4_ = fVar130 * auVar41._8_4_;
      auVar113._12_4_ = fVar134 * auVar41._12_4_;
      auVar113._16_4_ = fVar86 * auVar41._16_4_;
      auVar113._20_4_ = fVar91 * auVar41._20_4_;
      auVar113._24_4_ = fVar96 * auVar41._24_4_;
      auVar113._28_4_ = fVar101 * auVar41._28_4_;
      auVar34 = vmulps_avx512vl(auVar36,auVar43);
      auVar42 = vmulps_avx512vl(auVar33,auVar113);
      fVar110 = fVar135 * auVar43._0_4_ - auVar35._0_4_ * auVar107._0_4_;
      fVar118 = fVar136 * auVar43._4_4_ - auVar35._4_4_ * auVar107._4_4_;
      fVar119 = fVar129 * auVar43._8_4_ - auVar35._8_4_ * auVar107._8_4_;
      fVar120 = fVar131 * auVar43._12_4_ - auVar35._12_4_ * auVar107._12_4_;
      fVar121 = fVar82 * auVar43._16_4_ - auVar35._16_4_ * auVar107._16_4_;
      fVar122 = fVar87 * auVar43._20_4_ - auVar35._20_4_ * auVar107._20_4_;
      fVar123 = fVar92 * auVar43._24_4_ - auVar35._24_4_ * auVar107._24_4_;
      fVar124 = fVar97 * auVar43._28_4_ - auVar35._28_4_ * auVar107._28_4_;
      auVar34 = vfmsub231ps_avx512vl(auVar34,auVar35,auVar113);
      auVar42 = vfmsub231ps_avx512vl(auVar42,auVar36,auVar107);
      auVar34 = vaddps_avx512vl(auVar34,auVar34);
      auVar42 = vaddps_avx512vl(auVar42,auVar42);
      auVar126._0_4_ = fVar110 + fVar110;
      auVar126._4_4_ = fVar118 + fVar118;
      auVar126._8_4_ = fVar119 + fVar119;
      auVar126._12_4_ = fVar120 + fVar120;
      auVar126._16_4_ = fVar121 + fVar121;
      auVar126._20_4_ = fVar122 + fVar122;
      auVar126._24_4_ = fVar123 + fVar123;
      auVar126._28_4_ = fVar124 + fVar124;
      auVar41 = vfmadd231ps_avx512vl(auVar107,auVar37,auVar34);
      auVar40 = vfmadd231ps_avx512vl(auVar43,auVar37,auVar42);
      auVar114._0_4_ = fVar137 * auVar126._0_4_ + auVar113._0_4_;
      auVar114._4_4_ = fVar138 * auVar126._4_4_ + auVar113._4_4_;
      auVar114._8_4_ = fVar80 * auVar126._8_4_ + auVar113._8_4_;
      auVar114._12_4_ = fVar81 * auVar126._12_4_ + auVar113._12_4_;
      auVar114._16_4_ = fVar83 * auVar126._16_4_ + auVar113._16_4_;
      auVar114._20_4_ = fVar88 * auVar126._20_4_ + auVar113._20_4_;
      auVar114._24_4_ = fVar93 * auVar126._24_4_ + auVar113._24_4_;
      auVar114._28_4_ = fVar98 * auVar126._28_4_ + auVar113._28_4_;
      auVar43 = vmulps_avx512vl(auVar35,auVar34);
      auVar44 = vmulps_avx512vl(auVar36,auVar42);
      auVar45 = vmulps_avx512vl(auVar33,auVar126);
      auVar42 = vfmsub231ps_avx512vl(auVar43,auVar33,auVar42);
      auVar42 = vaddps_avx512vl(auVar114,auVar42);
      auVar43 = vfmsub231ps_avx512vl(auVar44,auVar35,auVar126);
      auVar41 = vaddps_avx512vl(auVar41,auVar43);
      auVar34 = vfmsub231ps_avx512vl(auVar45,auVar36,auVar34);
      auVar34 = vaddps_avx512vl(auVar40,auVar34);
      auVar40 = vpermt2ps_avx512vl(auVar42,auVar63,auVar34);
      auVar43 = vpermt2ps_avx512vl(auVar41,auVar64,auVar34);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar65,auVar40);
      *(undefined1 (*) [32])(lVar23 + -0x40 + lVar8) = auVar43;
      auVar40 = vpermt2ps_avx512vl(auVar40,auVar66,auVar41);
      *(undefined1 (*) [32])(lVar23 + -0x20 + lVar8) = auVar40;
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar67,auVar41);
      auVar34 = vpermt2ps_avx512vl(auVar34,auVar68,auVar42);
      *(undefined1 (*) [32])(lVar23 + lVar8) = auVar34;
      auVar34 = *(undefined1 (*) [32])(lVar25 + -0x40 + lVar8);
      auVar42 = *(undefined1 (*) [32])(lVar25 + -0x20 + lVar8);
      auVar41 = vblendps_avx(auVar42,auVar34,0x24);
      auVar40 = vpermt2ps_avx512vl(auVar34,auVar48,auVar42);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar105,*(undefined1 (*) [32])(lVar25 + lVar8));
      auVar42 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar25 + lVar8),auVar47,auVar42);
      auVar34 = vperm2f128_avx(auVar40,auVar42,0x31);
      auVar108._0_4_ = fVar139 * auVar40._0_4_;
      auVar108._4_4_ = fVar140 * auVar40._4_4_;
      auVar108._8_4_ = fVar125 * auVar40._8_4_;
      auVar108._12_4_ = fVar132 * auVar40._12_4_;
      auVar108._16_4_ = fVar84 * auVar42._0_4_;
      auVar108._20_4_ = fVar89 * auVar42._4_4_;
      auVar108._24_4_ = fVar94 * auVar42._8_4_;
      auVar108._28_4_ = fVar99 * auVar42._12_4_;
      auVar46._0_4_ = fVar141 * auVar34._0_4_;
      auVar46._4_4_ = fVar142 * auVar34._4_4_;
      auVar46._8_4_ = fVar128 * auVar34._8_4_;
      auVar46._12_4_ = fVar133 * auVar34._12_4_;
      auVar46._16_4_ = fVar85 * auVar34._16_4_;
      auVar46._20_4_ = fVar90 * auVar34._20_4_;
      auVar46._24_4_ = fVar95 * auVar34._24_4_;
      auVar46._28_4_ = fVar100 * auVar34._28_4_;
      auVar115._0_4_ = fVar143 * auVar41._0_4_;
      auVar115._4_4_ = fVar144 * auVar41._4_4_;
      auVar115._8_4_ = fVar130 * auVar41._8_4_;
      auVar115._12_4_ = fVar134 * auVar41._12_4_;
      auVar115._16_4_ = fVar86 * auVar41._16_4_;
      auVar115._20_4_ = fVar91 * auVar41._20_4_;
      auVar115._24_4_ = fVar96 * auVar41._24_4_;
      auVar115._28_4_ = fVar101 * auVar41._28_4_;
      auVar34 = vmulps_avx512vl(auVar36,auVar46);
      auVar42 = vmulps_avx512vl(auVar33,auVar115);
      fVar125 = fVar135 * auVar46._0_4_ - auVar35._0_4_ * auVar108._0_4_;
      fVar128 = fVar136 * auVar46._4_4_ - auVar35._4_4_ * auVar108._4_4_;
      fVar129 = fVar129 * auVar46._8_4_ - auVar35._8_4_ * auVar108._8_4_;
      fVar130 = fVar131 * auVar46._12_4_ - auVar35._12_4_ * auVar108._12_4_;
      fVar131 = fVar82 * auVar46._16_4_ - auVar35._16_4_ * auVar108._16_4_;
      fVar132 = fVar87 * auVar46._20_4_ - auVar35._20_4_ * auVar108._20_4_;
      fVar133 = fVar92 * auVar46._24_4_ - auVar35._24_4_ * auVar108._24_4_;
      fVar134 = fVar97 * auVar46._28_4_ - auVar35._28_4_ * auVar108._28_4_;
      auVar34 = vfmsub231ps_avx512vl(auVar34,auVar35,auVar115);
      auVar42 = vfmsub231ps_avx512vl(auVar42,auVar36,auVar108);
      auVar41 = vaddps_avx512vl(auVar34,auVar34);
      auVar42 = vaddps_avx512vl(auVar42,auVar42);
      auVar127._0_4_ = fVar125 + fVar125;
      auVar127._4_4_ = fVar128 + fVar128;
      auVar127._8_4_ = fVar129 + fVar129;
      auVar127._12_4_ = fVar130 + fVar130;
      auVar127._16_4_ = fVar131 + fVar131;
      auVar127._20_4_ = fVar132 + fVar132;
      auVar127._24_4_ = fVar133 + fVar133;
      auVar127._28_4_ = fVar134 + fVar134;
      auVar40 = vfmadd231ps_avx512vl(auVar108,auVar37,auVar41);
      auVar37 = vfmadd231ps_avx512vl(auVar46,auVar37,auVar42);
      auVar34._0_4_ = auVar127._0_4_ * fVar137 + auVar115._0_4_;
      auVar34._4_4_ = auVar127._4_4_ * fVar138 + auVar115._4_4_;
      auVar34._8_4_ = auVar127._8_4_ * fVar80 + auVar115._8_4_;
      auVar34._12_4_ = auVar127._12_4_ * fVar81 + auVar115._12_4_;
      auVar34._16_4_ = auVar127._16_4_ * fVar83 + auVar115._16_4_;
      auVar34._20_4_ = auVar127._20_4_ * fVar88 + auVar115._20_4_;
      auVar34._24_4_ = auVar127._24_4_ * fVar93 + auVar115._24_4_;
      auVar34._28_4_ = auVar127._28_4_ * fVar98 + auVar115._28_4_;
      auVar43 = vmulps_avx512vl(auVar35,auVar41);
      auVar44 = vmulps_avx512vl(auVar36,auVar42);
      auVar45 = vmulps_avx512vl(auVar33,auVar127);
      auVar42 = vfmsub231ps_avx512vl(auVar43,auVar42,auVar33);
      auVar35 = vfmsub231ps_avx512vl(auVar44,auVar127,auVar35);
      auVar35 = vaddps_avx512vl(auVar40,auVar35);
      auVar41 = vfmsub231ps_avx512vl(auVar45,auVar41,auVar36);
      auVar41 = vaddps_avx512vl(auVar37,auVar41);
      auVar109._0_4_ = auVar102._0_4_ + auVar35._0_4_;
      auVar109._4_4_ = auVar102._4_4_ + auVar35._4_4_;
      auVar109._8_4_ = auVar102._8_4_ + auVar35._8_4_;
      auVar109._12_4_ = auVar102._12_4_ + auVar35._12_4_;
      auVar109._16_4_ = auVar102._16_4_ + auVar35._16_4_;
      auVar109._20_4_ = auVar102._20_4_ + auVar35._20_4_;
      auVar109._24_4_ = auVar102._24_4_ + auVar35._24_4_;
      auVar109._28_4_ = auVar102._28_4_ + auVar35._28_4_;
      auVar33._0_4_ = auVar31._0_4_ + auVar41._0_4_;
      auVar33._4_4_ = auVar31._4_4_ + auVar41._4_4_;
      auVar33._8_4_ = auVar31._8_4_ + auVar41._8_4_;
      auVar33._12_4_ = auVar31._12_4_ + auVar41._12_4_;
      auVar33._16_4_ = auVar31._16_4_ + auVar41._16_4_;
      auVar33._20_4_ = auVar31._20_4_ + auVar41._20_4_;
      auVar33._24_4_ = auVar31._24_4_ + auVar41._24_4_;
      auVar33._28_4_ = auVar31._28_4_ + auVar41._28_4_;
      auVar116._0_4_ = auVar32._0_4_ + auVar34._0_4_ + auVar42._0_4_;
      auVar116._4_4_ = auVar32._4_4_ + auVar34._4_4_ + auVar42._4_4_;
      auVar116._8_4_ = auVar32._8_4_ + auVar34._8_4_ + auVar42._8_4_;
      auVar116._12_4_ = auVar32._12_4_ + auVar34._12_4_ + auVar42._12_4_;
      auVar116._16_4_ = auVar32._16_4_ + auVar34._16_4_ + auVar42._16_4_;
      auVar116._20_4_ = auVar32._20_4_ + auVar34._20_4_ + auVar42._20_4_;
      auVar116._24_4_ = auVar32._24_4_ + auVar34._24_4_ + auVar42._24_4_;
      auVar116._28_4_ = auVar32._28_4_ + auVar34._28_4_ + auVar42._28_4_;
      auVar37 = vsubps_avx(auVar109,auVar103);
      auVar36 = vsubps_avx512vl(auVar33,auVar38);
      auVar35 = vsubps_avx512vl(auVar116,auVar39);
      auVar42 = vpermt2ps_avx512vl(auVar35,auVar63,auVar36);
      auVar41 = vpermt2ps_avx512vl(auVar37,auVar64,auVar36);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar65,auVar42);
      *(undefined1 (*) [32])(lVar25 + -0x40 + lVar8) = auVar41;
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar66,auVar37);
      *(undefined1 (*) [32])(lVar25 + -0x20 + lVar8) = auVar42;
      auVar42 = vpermt2ps_avx512vl(auVar36,auVar67,auVar37);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar68,auVar35);
      *(undefined1 (*) [32])(lVar25 + lVar8) = auVar42;
      auVar42 = *(undefined1 (*) [32])(lVar22 + -0x40 + lVar8);
      auVar41 = *(undefined1 (*) [32])(lVar22 + -0x20 + lVar8);
      auVar33 = vpermt2ps_avx512vl(auVar42,auVar48,auVar41);
      auVar38 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar22 + lVar8),auVar47,auVar41);
      auVar39 = vinsertf32x4_avx512vl(auVar33,auVar38._0_16_,1);
      auVar33 = vshuff64x2_avx512vl(auVar33,auVar38,3);
      auVar42 = vpermt2ps_avx512vl(auVar41,
                                   ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a
                                   ,auVar42);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000
                                   ,*(undefined1 (*) [32])(lVar22 + lVar8));
      auVar41 = vsubps_avx512vl(auVar39,auVar37);
      auVar36 = vsubps_avx512vl(auVar33,auVar36);
      auVar37 = vsubps_avx(auVar42,auVar35);
      auVar42 = vdivps_avx(auVar41,auVar73);
      auVar41 = vdivps_avx(auVar36,auVar73);
      auVar37 = vdivps_avx(auVar37,auVar73);
      auVar36 = vpermt2ps_avx512vl(auVar37,auVar63,auVar41);
      auVar35 = vpermt2ps_avx512vl(auVar42,auVar64,auVar41);
      auVar35 = vpermt2ps_avx512vl(auVar35,auVar65,auVar36);
      *(undefined1 (*) [32])(lVar24 + -0x40 + lVar8) = auVar35;
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar66,auVar42);
      *(undefined1 (*) [32])(lVar24 + -0x20 + lVar8) = auVar36;
      auVar42 = vpermt2ps_avx512vl(auVar41,auVar67,auVar42);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar68,auVar37);
      *(undefined1 (*) [32])(lVar24 + lVar8) = auVar42;
      lVar28 = lVar28 + 8;
      lVar19 = lVar19 + 0x60;
      pauVar27 = pauVar27 + 4;
      lVar23 = lVar23 + 0x60;
      lVar25 = lVar25 + 0x60;
      lVar22 = lVar22 + 0x60;
      lVar24 = lVar24 + 0x60;
      param_12 = param_12 + 0x20;
    } while (lVar28 < iVar18);
    param_12 = (int)lVar28;
  }
  if (param_12 < (int)param_13) {
    auVar47 = vpbroadcastd_avx512vl();
    auVar48._0_4_ =
         auVar47._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar48._4_4_ = auVar47._4_4_ + _UNK_150b50ae4;
    auVar48._8_4_ = auVar47._8_4_ + _UNK_150b50ae8;
    auVar48._12_4_ = auVar47._12_4_ + _UNK_150b50aec;
    auVar48._16_4_ = auVar47._16_4_ + _UNK_150b50af0;
    auVar48._20_4_ = auVar47._20_4_ + _UNK_150b50af4;
    auVar48._24_4_ = auVar47._24_4_ + _UNK_150b50af8;
    auVar48._28_4_ = auVar47._28_4_ + _UNK_150b50afc;
    auVar47 = vpbroadcastd_avx512vl();
    uVar5 = vpcmpgtd_avx512vl(auVar47,auVar48);
    lVar23 = (longlong)(param_12 * 4);
    auVar48 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_8 + lVar23));
    bVar3 = (byte)uVar5;
    auVar49._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar49._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar49._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar49._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar49._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar49._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar49._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar49._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    vpslld_avx2(auVar49,2);
    auVar48 = vgatherdps_avx512vl(param_9[param_2 * 2]);
    auVar50._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar50._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar50._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar50._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar50._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar50._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar50._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar50._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar105 = vpslld_avx2(auVar49,4);
    auVar48 = vpslld_avx2(auVar49,5);
    auVar47._0_4_ = auVar48._0_4_ + auVar105._0_4_;
    auVar47._4_4_ = auVar48._4_4_ + auVar105._4_4_;
    auVar47._8_4_ = auVar48._8_4_ + auVar105._8_4_;
    auVar47._12_4_ = auVar48._12_4_ + auVar105._12_4_;
    auVar47._16_4_ = auVar48._16_4_ + auVar105._16_4_;
    auVar47._20_4_ = auVar48._20_4_ + auVar105._20_4_;
    auVar47._24_4_ = auVar48._24_4_ + auVar105._24_4_;
    auVar47._28_4_ = auVar48._28_4_ + auVar105._28_4_;
    auVar105._4_4_ = __real_00000004;
    auVar105._0_4_ = __real_00000004;
    auVar105._8_4_ = __real_00000004;
    auVar105._12_4_ = __real_00000004;
    auVar105._16_4_ = __real_00000004;
    auVar105._20_4_ = __real_00000004;
    auVar105._24_4_ = __real_00000004;
    auVar105._28_4_ = __real_00000004;
    vpord_avx512vl(auVar47,auVar105);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 * 2));
    auVar51._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar51._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar51._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar51._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar51._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar51._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar51._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar51._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar63._4_4_ = __real_00000008;
    auVar63._0_4_ = __real_00000008;
    auVar63._8_4_ = __real_00000008;
    auVar63._12_4_ = __real_00000008;
    auVar63._16_4_ = __real_00000008;
    auVar63._20_4_ = __real_00000008;
    auVar63._24_4_ = __real_00000008;
    auVar63._28_4_ = __real_00000008;
    vpord_avx512vl(auVar47,auVar63);
    auVar48 = vgatherdps_avx512vl(*param_9);
    auVar52._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar52._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar52._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar52._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar52._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar52._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar52._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar52._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar64._4_4_ = __real_0000000c;
    auVar64._0_4_ = __real_0000000c;
    auVar64._8_4_ = __real_0000000c;
    auVar64._12_4_ = __real_0000000c;
    auVar64._16_4_ = __real_0000000c;
    auVar64._20_4_ = __real_0000000c;
    auVar64._24_4_ = __real_0000000c;
    auVar64._28_4_ = __real_0000000c;
    vpord_avx512vl(auVar47,auVar64);
    auVar48 = vgatherdps_avx512vl(*param_9);
    auVar53._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
    auVar53._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
    auVar53._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
    auVar53._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
    auVar53._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar53._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar53._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar53._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar65._4_4_ = __real_00000010;
    auVar65._0_4_ = __real_00000010;
    auVar65._8_4_ = __real_00000010;
    auVar65._12_4_ = __real_00000010;
    auVar65._16_4_ = __real_00000010;
    auVar65._20_4_ = __real_00000010;
    auVar65._24_4_ = __real_00000010;
    auVar65._28_4_ = __real_00000010;
    auVar48 = vpaddd_avx512vl(auVar47,auVar65);
    auVar105 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_8));
    fVar129 = (float)((uint)(bVar3 & 1) * auVar105._0_4_);
    fVar132 = (float)((uint)((byte)(uVar5 >> 1) & 1) * auVar105._4_4_);
    auVar54._4_4_ = fVar132;
    auVar54._0_4_ = fVar129;
    fVar131 = (float)((uint)((byte)(uVar5 >> 2) & 1) * auVar105._8_4_);
    auVar54._8_4_ = fVar131;
    fVar130 = (float)((uint)((byte)(uVar5 >> 3) & 1) * auVar105._12_4_);
    auVar54._12_4_ = fVar130;
    fVar128 = (float)((uint)((byte)(uVar5 >> 4) & 1) * auVar105._16_4_);
    auVar54._16_4_ = fVar128;
    fVar125 = (float)((uint)((byte)(uVar5 >> 5) & 1) * auVar105._20_4_);
    auVar54._20_4_ = fVar125;
    fVar81 = (float)((uint)((byte)(uVar5 >> 6) & 1) * auVar105._24_4_);
    auVar54._24_4_ = fVar81;
    fVar80 = (float)((uint)(byte)(uVar5 >> 7) * auVar105._28_4_);
    auVar54._28_4_ = fVar80;
    auVar66._4_4_ = __real_00000014;
    auVar66._0_4_ = __real_00000014;
    auVar66._8_4_ = __real_00000014;
    auVar66._12_4_ = __real_00000014;
    auVar66._16_4_ = __real_00000014;
    auVar66._20_4_ = __real_00000014;
    auVar66._24_4_ = __real_00000014;
    auVar66._28_4_ = __real_00000014;
    auVar105 = vpaddd_avx512vl(auVar47,auVar66);
    auVar29 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar55._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar55._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar55._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar55._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar55._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar55._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar55._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar55._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar67._4_4_ = __real_00000018;
    auVar67._0_4_ = __real_00000018;
    auVar67._8_4_ = __real_00000018;
    auVar67._12_4_ = __real_00000018;
    auVar67._16_4_ = __real_00000018;
    auVar67._20_4_ = __real_00000018;
    auVar67._24_4_ = __real_00000018;
    auVar67._28_4_ = __real_00000018;
    auVar48 = vpaddd_avx512vl(auVar47,auVar67);
    auVar29 = vxorps_avx512vl(auVar105._0_16_,auVar105._0_16_);
    auVar105 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_2));
    auVar56._0_4_ = (uint)(bVar3 & 1) * auVar105._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar56._4_4_ = (uint)bVar4 * auVar105._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar56._8_4_ = (uint)bVar4 * auVar105._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar56._12_4_ = (uint)bVar4 * auVar105._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar56._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar105._16_4_;
    auVar56._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar105._20_4_;
    auVar56._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar105._24_4_;
    auVar56._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar105._28_4_;
    auVar68._4_4_ = __real_00000020;
    auVar68._0_4_ = __real_00000020;
    auVar68._8_4_ = __real_00000020;
    auVar68._12_4_ = __real_00000020;
    auVar68._16_4_ = __real_00000020;
    auVar68._20_4_ = __real_00000020;
    auVar68._24_4_ = __real_00000020;
    auVar68._28_4_ = __real_00000020;
    auVar105 = vpaddd_avx512vl(auVar47,auVar68);
    auVar29 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 * 2));
    auVar57._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar57._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar57._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar57._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar57._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar57._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar57._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar57._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    auVar6._4_4_ = __real_00000024;
    auVar6._0_4_ = __real_00000024;
    auVar6._8_4_ = __real_00000024;
    auVar6._12_4_ = __real_00000024;
    auVar6._16_4_ = __real_00000024;
    auVar6._20_4_ = __real_00000024;
    auVar6._24_4_ = __real_00000024;
    auVar6._28_4_ = __real_00000024;
    auVar48 = vpaddd_avx512vl(auVar47,auVar6);
    auVar29 = vxorps_avx512vl(auVar105._0_16_,auVar105._0_16_);
    auVar105 = vgatherdps_avx512vl(*param_9);
    auVar58._0_4_ = (uint)(bVar3 & 1) * auVar105._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar58._4_4_ = (uint)bVar4 * auVar105._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar58._8_4_ = (uint)bVar4 * auVar105._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar58._12_4_ = (uint)bVar4 * auVar105._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar58._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar105._16_4_;
    auVar58._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar105._20_4_;
    auVar58._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar105._24_4_;
    auVar58._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar105._28_4_;
    auVar7._4_4_ = __real_00000028;
    auVar7._0_4_ = __real_00000028;
    auVar7._8_4_ = __real_00000028;
    auVar7._12_4_ = __real_00000028;
    auVar7._16_4_ = __real_00000028;
    auVar7._20_4_ = __real_00000028;
    auVar7._24_4_ = __real_00000028;
    auVar7._28_4_ = __real_00000028;
    vpaddd_avx512vl(auVar47,auVar7);
    auVar29 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_8));
    auVar59._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar29._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar59._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar29._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar59._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar29._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar59._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar29._12_4_;
    auVar59._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
    auVar59._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
    auVar59._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
    auVar59._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    lVar19 = (longlong)param_12;
    pauVar20 = (undefined1 (*) [32])(param_3 + lVar19 * 0xc);
    if (bVar3 == 0xff) {
      auVar48 = pauVar20[1];
      auVar47 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar20,auVar48);
      auVar105 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                    ,pauVar20[2],auVar48);
      auVar60 = vinsertf32x4_avx512vl(auVar47,auVar105._0_16_,1);
      auVar61 = vshuff64x2_avx512vl(auVar47,auVar105,3);
      auVar48 = vblendps_avx(auVar48,*pauVar20,0x24);
      auVar62 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar48,pauVar20[2]);
    }
    else {
      auVar30 = vxorps_avx512vl(auVar30,auVar30);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + param_4));
      auVar60._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar60._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar60._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar60._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar30 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + lVar19 * 3));
      auVar61._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar61._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar61._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar61._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar61._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar61._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar61._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar61._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + lVar19 * 3));
      auVar62._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
      auVar62._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    }
    pauVar21 = (undefined1 (*) [32])(param_1 + lVar19 * 0x10);
    auVar48 = vmulps_avx512vl(auVar57,auVar60);
    auVar47 = vmulps_avx512vl(auVar58,auVar61);
    auVar105 = vmulps_avx512vl(auVar59,auVar62);
    auVar63 = vmulps_avx512vl(auVar51,auVar48);
    auVar64 = vmulps_avx512vl(auVar52,auVar47);
    auVar65 = vmulps_avx512vl(auVar50,auVar105);
    auVar63 = vfmsub231ps_avx512vl(auVar63,auVar50,auVar47);
    auVar64 = vfmsub231ps_avx512vl(auVar64,auVar51,auVar105);
    auVar65 = vfmsub231ps_avx512vl(auVar65,auVar52,auVar48);
    auVar64 = vaddps_avx512vl(auVar64,auVar64);
    auVar65 = vaddps_avx512vl(auVar65,auVar65);
    auVar63 = vaddps_avx512vl(auVar63,auVar63);
    auVar48 = vfmadd231ps_avx512vl(auVar48,auVar53,auVar64);
    auVar47 = vfmadd231ps_avx512vl(auVar47,auVar53,auVar65);
    auVar105 = vfmadd231ps_avx512vl(auVar105,auVar53,auVar63);
    auVar66 = vmulps_avx512vl(auVar51,auVar64);
    auVar67 = vmulps_avx512vl(auVar52,auVar65);
    auVar68 = vmulps_avx512vl(auVar50,auVar63);
    auVar65 = vfmsub231ps_avx512vl(auVar66,auVar50,auVar65);
    auVar105 = vaddps_avx512vl(auVar105,auVar65);
    auVar63 = vfmsub231ps_avx512vl(auVar67,auVar51,auVar63);
    auVar48 = vaddps_avx512vl(auVar48,auVar63);
    auVar63 = vfmsub231ps_avx512vl(auVar68,auVar52,auVar64);
    auVar47 = vaddps_avx512vl(auVar47,auVar63);
    auVar48 = vaddps_avx512vl(auVar54,auVar48);
    auVar47 = vaddps_avx512vl(auVar55,auVar47);
    auVar105 = vaddps_avx512vl(auVar56,auVar105);
    auVar63 = vbroadcastss_avx512vl(ZEXT416(*param_10));
    auVar48 = vsubps_avx512vl(auVar48,auVar63);
    auVar64 = vbroadcastss_avx512vl(ZEXT416(param_10[1]));
    auVar47 = vsubps_avx512vl(auVar47,auVar64);
    auVar65 = vbroadcastss_avx512vl(ZEXT416(param_10[2]));
    auVar105 = vsubps_avx512vl(auVar105,auVar65);
    piVar2 = (int *)(param_6 + lVar23);
    auVar69._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * piVar2[1];
    auVar69._0_4_ = (uint)(bVar3 & 1) * *piVar2;
    auVar69._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * piVar2[2];
    auVar69._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * piVar2[3];
    auVar69._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * piVar2[4];
    auVar69._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * piVar2[5];
    auVar69._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * piVar2[6];
    auVar69._28_4_ = (uint)(byte)(uVar5 >> 7) * piVar2[7];
    if (bVar3 == 0xff) {
      auVar66 = vunpcklps_avx512vl(auVar48,auVar47);
      auVar67 = vunpcklps_avx512vl(auVar105,auVar69);
      auVar68 = vunpcklpd_avx512vl(auVar66,auVar67);
      auVar66 = vunpckhpd_avx512vl(auVar66,auVar67);
      auVar67 = vunpckhps_avx512vl(auVar48,auVar47);
      auVar102 = vunpckhps_avx512vl(auVar105,auVar69);
      auVar73 = vunpcklpd_avx512vl(auVar67,auVar102);
      auVar67 = vunpckhpd_avx512vl(auVar67,auVar102);
      auVar102 = vinsertf32x4_avx512vl(auVar68,auVar66._0_16_,1);
      *pauVar21 = auVar102;
      auVar102 = vinsertf32x4_avx512vl(auVar73,auVar67._0_16_,1);
      pauVar21[1] = auVar102;
      auVar66 = vshuff64x2_avx512vl(auVar68,auVar66,3);
      pauVar21[2] = auVar66;
      auVar66 = vshuff64x2_avx512vl(auVar73,auVar67,3);
      pauVar21[3] = auVar66;
      auVar66 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar105,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar48,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar67,auVar66);
      *pauVar20 = auVar67;
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar66,auVar48);
      pauVar20[1] = auVar66;
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar47,auVar48);
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar48,auVar105);
      pauVar20[2] = auVar48;
      pauVar20 = (undefined1 (*) [32])(param_2 + lVar19 * 0xc);
      auVar48 = *(undefined1 (*) [32])(param_2 + lVar19 * 0xc);
      auVar47 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar19 * 0xc);
      auVar105 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar19 * 0xc);
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar48,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar105,auVar47);
      auVar70 = vinsertf32x4_avx512vl(auVar66,auVar67._0_16_,1);
      auVar71 = vshuff64x2_avx512vl(auVar66,auVar67,3);
      auVar48 = vblendps_avx(auVar47,auVar48,0x24);
      auVar72 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar48,auVar105);
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar21) + auVar34,uVar5,auVar48);
      vscatterdps_avx512vl(ZEXT832(pauVar21) + auVar34,uVar5,auVar47);
      vscatterdps_avx512vl(ZEXT832(pauVar21) + auVar34,uVar5,auVar105);
      vscatterdps_avx512vl(ZEXT832(pauVar21) + auVar34,uVar5,auVar69);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar31,uVar5,auVar48);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar102,uVar5,auVar47);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar34,uVar5,auVar105);
      pauVar20 = (undefined1 (*) [32])(param_2 + lVar19 * 0xc);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + (longlong)*pauVar20));
      auVar70._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar48._4_4_;
      auVar70._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_;
      auVar70._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar48._8_4_;
      auVar70._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar48._12_4_;
      auVar70._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar70._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar70._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar70._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar30 = vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + lVar19 * 0x10));
      auVar71._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar71._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar71._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar71._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar71._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar71._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar71._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar71._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar30 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                        ._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + (longlong)param_10));
      auVar72._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar72._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar72._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar72._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar72._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar72._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar72._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar72._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    }
    auVar48 = vmulps_avx512vl(auVar57,auVar70);
    auVar47 = vmulps_avx512vl(auVar58,auVar71);
    auVar105 = vmulps_avx512vl(auVar59,auVar72);
    auVar66 = vmulps_avx512vl(auVar51,auVar48);
    auVar67 = vmulps_avx512vl(auVar52,auVar47);
    auVar68 = vmulps_avx512vl(auVar50,auVar105);
    auVar66 = vfmsub231ps_avx512vl(auVar66,auVar50,auVar47);
    auVar67 = vfmsub231ps_avx512vl(auVar67,auVar51,auVar105);
    auVar68 = vfmsub231ps_avx512vl(auVar68,auVar52,auVar48);
    auVar67 = vaddps_avx512vl(auVar67,auVar67);
    auVar68 = vaddps_avx512vl(auVar68,auVar68);
    auVar66 = vaddps_avx512vl(auVar66,auVar66);
    auVar48 = vfmadd231ps_avx512vl(auVar48,auVar53,auVar67);
    auVar47 = vfmadd231ps_avx512vl(auVar47,auVar53,auVar68);
    auVar105 = vfmadd231ps_avx512vl(auVar105,auVar53,auVar66);
    auVar102 = vmulps_avx512vl(auVar51,auVar67);
    auVar73 = vmulps_avx512vl(auVar52,auVar68);
    auVar42 = vmulps_avx512vl(auVar50,auVar66);
    auVar68 = vfmsub231ps_avx512vl(auVar102,auVar50,auVar68);
    auVar105 = vaddps_avx512vl(auVar105,auVar68);
    auVar66 = vfmsub231ps_avx512vl(auVar73,auVar51,auVar66);
    auVar48 = vaddps_avx512vl(auVar48,auVar66);
    auVar66 = vfmsub231ps_avx512vl(auVar42,auVar52,auVar67);
    auVar47 = vaddps_avx512vl(auVar47,auVar66);
    if (bVar3 == 0xff) {
      auVar66 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar105,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar48,auVar47);
      auVar67 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar67,auVar66);
      *pauVar20 = auVar67;
      lVar23 = lVar19 * 0xc;
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar66,auVar48);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar23) = auVar66;
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar47,auVar48);
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar48,auVar105);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar23) = auVar48;
      auVar48 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar23);
      auVar47 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar23);
      pauVar20 = (undefined1 (*) [32])(lVar23 + param_4);
      auVar105 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                    ,*(undefined1 (*) [32])(param_4 + lVar23),auVar48);
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar47,auVar48);
      auVar74 = vinsertf32x4_avx512vl(auVar105,auVar66._0_16_,1);
      auVar75 = vshuff64x2_avx512vl(auVar105,auVar66,3);
      auVar48 = vblendps_avx(auVar48,*(undefined1 (*) [32])(param_4 + lVar23),0x24);
      auVar76 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar48,auVar47);
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar31,uVar5,auVar48);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar34,uVar5,auVar47);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar32,uVar5,auVar105);
      pauVar20 = (undefined1 (*) [32])(param_4 + lVar19 * 0xc);
      auVar105 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + (longlong)*pauVar20));
      auVar74._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar105._4_4_;
      auVar74._0_4_ = (uint)(bVar3 & 1) * auVar105._0_4_;
      auVar74._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar105._8_4_;
      auVar74._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar105._12_4_;
      auVar74._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar105._16_4_;
      auVar74._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar105._20_4_;
      auVar74._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar105._24_4_;
      auVar74._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar105._28_4_;
      auVar30 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + (longlong)param_10));
      auVar75._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar75._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar75._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar75._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar75._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar75._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar75._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar75._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
      auVar30 = vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar20 + lVar23));
      auVar76._0_4_ = (uint)(bVar3 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar3 & 1) * auVar30._0_4_;
      bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar76._4_4_ = (uint)bVar4 * auVar48._4_4_ | (uint)!bVar4 * auVar30._4_4_;
      bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar76._8_4_ = (uint)bVar4 * auVar48._8_4_ | (uint)!bVar4 * auVar30._8_4_;
      bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar76._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * auVar30._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar48._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar48._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar48._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar48._28_4_;
    }
    auVar48 = vmulps_avx512vl(auVar57,auVar74);
    auVar47 = vmulps_avx512vl(auVar58,auVar75);
    auVar105 = vmulps_avx512vl(auVar59,auVar76);
    auVar66 = vmulps_avx512vl(auVar51,auVar48);
    auVar67 = vmulps_avx512vl(auVar52,auVar47);
    auVar68 = vmulps_avx512vl(auVar50,auVar105);
    auVar66 = vfmsub231ps_avx512vl(auVar66,auVar50,auVar47);
    auVar67 = vfmsub231ps_avx512vl(auVar67,auVar51,auVar105);
    auVar68 = vfmsub231ps_avx512vl(auVar68,auVar52,auVar48);
    auVar67 = vaddps_avx512vl(auVar67,auVar67);
    auVar68 = vaddps_avx512vl(auVar68,auVar68);
    auVar66 = vaddps_avx512vl(auVar66,auVar66);
    auVar48 = vfmadd231ps_avx512vl(auVar48,auVar53,auVar67);
    auVar47 = vfmadd231ps_avx512vl(auVar47,auVar53,auVar68);
    auVar105 = vfmadd213ps_avx512vl(auVar53,auVar66,auVar105);
    auVar102 = vmulps_avx512vl(auVar51,auVar67);
    auVar31 = vmulps_avx512vl(auVar52,auVar68);
    auVar32 = vmulps_avx512vl(auVar50,auVar66);
    auVar68 = vfmsub231ps_avx512vl(auVar102,auVar50,auVar68);
    auVar105 = vaddps_avx512vl(auVar105,auVar68);
    auVar66 = vfmsub231ps_avx512vl(auVar31,auVar51,auVar66);
    auVar48 = vaddps_avx512vl(auVar48,auVar66);
    auVar66 = vfmsub231ps_avx512vl(auVar32,auVar52,auVar67);
    auVar47 = vaddps_avx512vl(auVar47,auVar66);
    auVar104._0_4_ = fVar129 + auVar48._0_4_;
    auVar104._4_4_ = fVar132 + auVar48._4_4_;
    auVar104._8_4_ = fVar131 + auVar48._8_4_;
    auVar104._12_4_ = fVar130 + auVar48._12_4_;
    auVar104._16_4_ = fVar128 + auVar48._16_4_;
    auVar104._20_4_ = fVar125 + auVar48._20_4_;
    auVar104._24_4_ = fVar81 + auVar48._24_4_;
    auVar104._28_4_ = fVar80 + auVar48._28_4_;
    auVar48 = vaddps_avx512vl(auVar55,auVar47);
    auVar47 = vaddps_avx512vl(auVar56,auVar105);
    auVar105 = vsubps_avx512vl(auVar104,auVar63);
    auVar48 = vsubps_avx512vl(auVar48,auVar64);
    auVar47 = vsubps_avx512vl(auVar47,auVar65);
    if (bVar3 == 0xff) {
      auVar63 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar47,auVar48);
      auVar64 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar105,auVar48);
      auVar64 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar64,auVar63);
      *pauVar20 = auVar64;
      lVar23 = lVar19 * 0xc;
      auVar63 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar63,auVar105);
      *(undefined1 (*) [32])(param_4 + 0x20 + lVar23) = auVar63;
      auVar63 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar48,auVar105);
      auVar63 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar63,auVar47);
      *(undefined1 (*) [32])(param_4 + 0x40 + lVar23) = auVar63;
      auVar63 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar23);
      auVar64 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar23);
      auVar65 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*(undefined1 (*) [32])(param_7 + lVar23),auVar63);
      auVar66 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar64,auVar63);
      auVar77 = vinsertf32x4_avx512vl(auVar65,auVar66._0_16_,1);
      auVar78 = vshuff64x2_avx512vl(auVar65,auVar66,3);
      auVar63 = vblendps_avx(auVar63,*(undefined1 (*) [32])(param_7 + lVar23),0x24);
      auVar79 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar63,auVar64);
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar20) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,
                 auVar105);
      vscatterdps_avx512vl
                (ZEXT832(pauVar20) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar5,
                 auVar48);
      vscatterdps_avx512vl(ZEXT832(pauVar20) + auVar105,uVar5,auVar47);
      puVar1 = (undefined4 *)(param_7 + lVar19 * 0xc);
      auVar63 = vgatherdps_avx512vl(*puVar1);
      auVar77._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar63._4_4_;
      auVar77._0_4_ = (uint)(bVar3 & 1) * auVar63._0_4_;
      auVar77._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar63._8_4_;
      auVar77._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar63._12_4_;
      auVar77._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar63._16_4_;
      auVar77._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar63._20_4_;
      auVar77._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar63._24_4_;
      auVar77._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar63._28_4_;
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar1 + (ulonglong)param_13));
      auVar78._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar63._4_4_;
      auVar78._0_4_ = (uint)(bVar3 & 1) * auVar63._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar63._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar63._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar63._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar63._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar63._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar63._28_4_;
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar1 + (longlong)&local_228));
      auVar79._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar63._4_4_;
      auVar79._0_4_ = (uint)(bVar3 & 1) * auVar63._0_4_;
      auVar79._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar63._8_4_;
      auVar79._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar63._12_4_;
      auVar79._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar63._16_4_;
      auVar79._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar63._20_4_;
      auVar79._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar63._24_4_;
      auVar79._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar63._28_4_;
    }
    auVar105 = vsubps_avx(auVar77,auVar105);
    auVar63 = vsubps_avx(auVar78,auVar48);
    auVar64 = vsubps_avx(auVar79,auVar47);
    auVar117._4_4_ = param_11;
    auVar117._0_4_ = param_11;
    auVar117._8_4_ = param_11;
    auVar117._12_4_ = param_11;
    auVar117._16_4_ = param_11;
    auVar117._20_4_ = param_11;
    auVar117._24_4_ = param_11;
    auVar117._28_4_ = param_11;
    auVar48 = vdivps_avx(auVar105,auVar117);
    auVar47 = vdivps_avx(auVar63,auVar117);
    auVar105 = vdivps_avx(auVar64,auVar117);
    pauVar27 = (undefined1 (*) [32])(param_5 + lVar19 * 0xc);
    if (bVar3 == 0xff) {
      auVar63 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar105,auVar47);
      auVar64 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar48,auVar47);
      auVar64 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar64,auVar63);
      *pauVar27 = auVar64;
      auVar63 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar63,auVar48);
      pauVar27[1] = auVar63;
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar47,auVar48);
      auVar48 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar48,auVar105);
      pauVar27[2] = auVar48;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar27) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,
                 auVar48);
      vscatterdps_avx512vl
                (ZEXT832(pauVar27) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar5,
                 auVar47);
      vscatterdps_avx512vl
                (ZEXT832(pauVar27) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar5,
                 auVar105);
    }
  }
  return;
}

// ApplyPreSimulationTransform_avx512skx @ 140cd0190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransform_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,uint *param_8,uint *param_9,undefined4 param_10,
               uint param_11)

{
  undefined1 (*pauVar1) [32];
  int *piVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  undefined1 (*pauVar6) [32];
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
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
  undefined1 auVar14 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined4 local_e8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  
  auVar40 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar39 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar38 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar37 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar36 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar34 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar35 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar33 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar32 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar17 = in_ZMM11._0_32_;
  auVar18 = in_ZMM12._0_32_;
  auVar15 = in_ZMM10._0_32_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  uVar7 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar7 = param_11;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar11 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    auVar41._4_4_ = param_10;
    auVar41._0_4_ = param_10;
    auVar41._8_4_ = param_10;
    auVar41._12_4_ = param_10;
    auVar41._16_4_ = param_10;
    auVar41._20_4_ = param_10;
    auVar41._24_4_ = param_10;
    auVar41._28_4_ = param_10;
    lVar9 = 0x10;
    uVar11 = 0;
    uVar10 = 0;
    do {
      auVar15 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar9 * 4);
      auVar17 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar9 * 4);
      auVar18 = *(undefined1 (*) [32])(param_3 + lVar9 * 4);
      auVar16 = vblendps_avx(auVar17,auVar15,0x24);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar32,auVar17);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar35,auVar18);
      auVar17 = vpermt2ps_avx512vl(auVar18,auVar33,auVar17);
      auVar18 = vinsertf32x4_avx512vl(auVar15,auVar17._0_16_,1);
      auVar19 = vbroadcastss_avx512vl(ZEXT416(param_8[8]));
      auVar15 = vshuff64x2_avx512vl(auVar15,auVar17,3);
      auVar17 = vmulps_avx512vl(auVar18,auVar19);
      auVar20 = vbroadcastss_avx512vl(ZEXT416(param_8[9]));
      auVar21 = vbroadcastss_avx512vl(ZEXT416(param_8[10]));
      auVar15 = vmulps_avx512vl(auVar15,auVar20);
      auVar18 = vmulps_avx512vl(auVar16,auVar21);
      auVar22 = vbroadcastss_avx512vl(ZEXT416(param_8[3]));
      auVar23 = vbroadcastss_avx512vl(ZEXT416(param_8[1]));
      auVar24 = vbroadcastss_avx512vl(ZEXT416(param_8[2]));
      auVar25 = vbroadcastss_avx512vl(ZEXT416(*param_8));
      auVar16 = vmulps_avx512vl(auVar17,auVar23);
      auVar26 = vmulps_avx512vl(auVar15,auVar24);
      auVar27 = vmulps_avx512vl(auVar18,auVar25);
      auVar16 = vfmsub231ps_avx512vl(auVar16,auVar15,auVar25);
      auVar26 = vfmsub231ps_avx512vl(auVar26,auVar18,auVar23);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar17,auVar24);
      auVar28._0_4_ = auVar26._0_4_ + auVar26._0_4_;
      auVar28._4_4_ = auVar26._4_4_ + auVar26._4_4_;
      auVar28._8_4_ = auVar26._8_4_ + auVar26._8_4_;
      auVar28._12_4_ = auVar26._12_4_ + auVar26._12_4_;
      auVar28._16_4_ = auVar26._16_4_ + auVar26._16_4_;
      auVar28._20_4_ = auVar26._20_4_ + auVar26._20_4_;
      auVar28._24_4_ = auVar26._24_4_ + auVar26._24_4_;
      auVar28._28_4_ = auVar26._28_4_ + auVar26._28_4_;
      auVar29._0_4_ = auVar27._0_4_ + auVar27._0_4_;
      auVar29._4_4_ = auVar27._4_4_ + auVar27._4_4_;
      auVar29._8_4_ = auVar27._8_4_ + auVar27._8_4_;
      auVar29._12_4_ = auVar27._12_4_ + auVar27._12_4_;
      auVar29._16_4_ = auVar27._16_4_ + auVar27._16_4_;
      auVar29._20_4_ = auVar27._20_4_ + auVar27._20_4_;
      auVar29._24_4_ = auVar27._24_4_ + auVar27._24_4_;
      auVar29._28_4_ = auVar27._28_4_ + auVar27._28_4_;
      auVar31._0_4_ = auVar16._0_4_ + auVar16._0_4_;
      auVar31._4_4_ = auVar16._4_4_ + auVar16._4_4_;
      auVar31._8_4_ = auVar16._8_4_ + auVar16._8_4_;
      auVar31._12_4_ = auVar16._12_4_ + auVar16._12_4_;
      auVar31._16_4_ = auVar16._16_4_ + auVar16._16_4_;
      auVar31._20_4_ = auVar16._20_4_ + auVar16._20_4_;
      auVar31._24_4_ = auVar16._24_4_ + auVar16._24_4_;
      auVar31._28_4_ = auVar16._28_4_ + auVar16._28_4_;
      auVar17 = vfmadd231ps_avx512vl(auVar17,auVar22,auVar28);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar22,auVar29);
      auVar18 = vfmadd231ps_avx512vl(auVar18,auVar22,auVar31);
      auVar16 = vmulps_avx512vl(auVar23,auVar28);
      auVar26 = vmulps_avx512vl(auVar24,auVar29);
      auVar27 = vmulps_avx512vl(auVar25,auVar31);
      auVar16 = vfmsub231ps_avx512vl(auVar16,auVar25,auVar29);
      auVar18 = vaddps_avx512vl(auVar18,auVar16);
      auVar16 = vfmsub231ps_avx512vl(auVar26,auVar23,auVar31);
      auVar17 = vaddps_avx512vl(auVar17,auVar16);
      auVar16 = vfmsub231ps_avx512vl(auVar27,auVar24,auVar28);
      auVar28 = vbroadcastss_avx512vl(ZEXT416(param_8[4]));
      auVar29 = vbroadcastss_avx512vl(ZEXT416(param_8[5]));
      fVar3 = (float)param_8[6];
      auVar44._4_4_ = fVar3;
      auVar44._0_4_ = fVar3;
      auVar44._8_4_ = fVar3;
      auVar44._12_4_ = fVar3;
      auVar44._16_4_ = fVar3;
      auVar44._20_4_ = fVar3;
      auVar44._24_4_ = fVar3;
      auVar44._28_4_ = fVar3;
      auVar26._0_4_ = auVar16._0_4_ + auVar15._0_4_;
      auVar26._4_4_ = auVar16._4_4_ + auVar15._4_4_;
      auVar26._8_4_ = auVar16._8_4_ + auVar15._8_4_;
      auVar26._12_4_ = auVar16._12_4_ + auVar15._12_4_;
      auVar26._16_4_ = auVar16._16_4_ + auVar15._16_4_;
      auVar26._20_4_ = auVar16._20_4_ + auVar15._20_4_;
      auVar26._24_4_ = auVar16._24_4_ + auVar15._24_4_;
      auVar26._28_4_ = auVar16._28_4_ + auVar15._28_4_;
      auVar15 = vaddps_avx512vl(auVar28,auVar17);
      auVar16 = vaddps_avx512vl(auVar29,auVar26);
      auVar48._0_4_ = auVar18._0_4_ + fVar3;
      auVar48._4_4_ = auVar18._4_4_ + fVar3;
      auVar48._8_4_ = auVar18._8_4_ + fVar3;
      auVar48._12_4_ = auVar18._12_4_ + fVar3;
      auVar48._16_4_ = auVar18._16_4_ + fVar3;
      auVar48._20_4_ = auVar18._20_4_ + fVar3;
      auVar48._24_4_ = auVar18._24_4_ + fVar3;
      auVar48._28_4_ = auVar18._28_4_ + fVar3;
      uVar4 = *param_9;
      auVar45._4_4_ = uVar4;
      auVar45._0_4_ = uVar4;
      auVar45._8_4_ = uVar4;
      auVar45._12_4_ = uVar4;
      auVar45._16_4_ = uVar4;
      auVar45._20_4_ = uVar4;
      auVar45._24_4_ = uVar4;
      auVar45._28_4_ = uVar4;
      auVar17 = vsubps_avx(auVar15,auVar45);
      uVar4 = param_9[1];
      auVar46._4_4_ = uVar4;
      auVar46._0_4_ = uVar4;
      auVar46._8_4_ = uVar4;
      auVar46._12_4_ = uVar4;
      auVar46._16_4_ = uVar4;
      auVar46._20_4_ = uVar4;
      auVar46._24_4_ = uVar4;
      auVar46._28_4_ = uVar4;
      auVar18 = vsubps_avx(auVar16,auVar46);
      uVar4 = param_9[2];
      auVar47._4_4_ = uVar4;
      auVar47._0_4_ = uVar4;
      auVar47._8_4_ = uVar4;
      auVar47._12_4_ = uVar4;
      auVar47._16_4_ = uVar4;
      auVar47._20_4_ = uVar4;
      auVar47._24_4_ = uVar4;
      auVar47._28_4_ = uVar4;
      auVar16 = vsubps_avx(auVar48,auVar47);
      auVar15 = *(undefined1 (*) [32])(param_6 + (uVar10 & 0xffffffff));
      auVar26 = vunpcklps_avx(auVar17,auVar18);
      auVar27 = vunpcklps_avx(auVar16,auVar15);
      auVar31 = vunpcklpd_avx(auVar26,auVar27);
      auVar26 = vunpckhpd_avx(auVar26,auVar27);
      auVar27 = vunpckhps_avx(auVar17,auVar18);
      auVar15 = vunpckhps_avx(auVar16,auVar15);
      auVar30 = vunpcklpd_avx512vl(auVar27,auVar15);
      auVar15 = vunpckhpd_avx(auVar27,auVar15);
      auVar51._16_16_ = auVar26._0_16_;
      auVar51._0_16_ = auVar31._0_16_;
      *(undefined1 (*) [32])(param_1 + uVar10 * 4) = auVar51;
      auVar27 = vinsertf32x4_avx512vl(auVar30,auVar15._0_16_,1);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar10 * 4) = auVar27;
      auVar26 = vperm2f128_avx(auVar31,auVar26,0x31);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar10 * 4) = auVar26;
      auVar15 = vshuff64x2_avx512vl(auVar30,auVar15,3);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar10 * 4) = auVar15;
      auVar15 = vpermt2ps_avx512vl(auVar16,auVar34,auVar18);
      auVar26 = vpermt2ps_avx512vl(auVar17,auVar36,auVar18);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar37,auVar15);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar9 * 4) = auVar26;
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar38,auVar17);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar9 * 4) = auVar15;
      auVar15 = vpermt2ps_avx512vl(auVar18,auVar39,auVar17);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar40,auVar16);
      *(undefined1 (*) [32])(param_3 + lVar9 * 4) = auVar15;
      auVar15 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar9 * 4);
      auVar17 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar9 * 4);
      auVar18 = *(undefined1 (*) [32])(param_2 + lVar9 * 4);
      auVar16 = vblendps_avx(auVar17,auVar15,0x24);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar32,auVar17);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar35,auVar18);
      auVar17 = vpermt2ps_avx512vl(auVar18,auVar33,auVar17);
      auVar18 = vinsertf32x4_avx512vl(auVar15,auVar17._0_16_,1);
      auVar15 = vshuff64x2_avx512vl(auVar15,auVar17,3);
      auVar17 = vmulps_avx512vl(auVar18,auVar19);
      auVar15 = vmulps_avx512vl(auVar15,auVar20);
      auVar16 = vmulps_avx512vl(auVar16,auVar21);
      auVar18 = vmulps_avx512vl(auVar17,auVar23);
      auVar26 = vmulps_avx512vl(auVar15,auVar24);
      auVar27 = vmulps_avx512vl(auVar16,auVar25);
      auVar31 = vfmsub231ps_avx512vl(auVar18,auVar15,auVar25);
      auVar26 = vfmsub231ps_avx512vl(auVar26,auVar16,auVar23);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar17,auVar24);
      auVar18._0_4_ = auVar26._0_4_ + auVar26._0_4_;
      auVar18._4_4_ = auVar26._4_4_ + auVar26._4_4_;
      auVar18._8_4_ = auVar26._8_4_ + auVar26._8_4_;
      auVar18._12_4_ = auVar26._12_4_ + auVar26._12_4_;
      auVar18._16_4_ = auVar26._16_4_ + auVar26._16_4_;
      auVar18._20_4_ = auVar26._20_4_ + auVar26._20_4_;
      auVar18._24_4_ = auVar26._24_4_ + auVar26._24_4_;
      auVar18._28_4_ = auVar26._28_4_ + auVar26._28_4_;
      auVar50._0_4_ = auVar27._0_4_ + auVar27._0_4_;
      auVar50._4_4_ = auVar27._4_4_ + auVar27._4_4_;
      auVar50._8_4_ = auVar27._8_4_ + auVar27._8_4_;
      auVar50._12_4_ = auVar27._12_4_ + auVar27._12_4_;
      auVar50._16_4_ = auVar27._16_4_ + auVar27._16_4_;
      auVar50._20_4_ = auVar27._20_4_ + auVar27._20_4_;
      auVar50._24_4_ = auVar27._24_4_ + auVar27._24_4_;
      auVar50._28_4_ = auVar27._28_4_ + auVar27._28_4_;
      auVar49._0_4_ = auVar31._0_4_ + auVar31._0_4_;
      auVar49._4_4_ = auVar31._4_4_ + auVar31._4_4_;
      auVar49._8_4_ = auVar31._8_4_ + auVar31._8_4_;
      auVar49._12_4_ = auVar31._12_4_ + auVar31._12_4_;
      auVar49._16_4_ = auVar31._16_4_ + auVar31._16_4_;
      auVar49._20_4_ = auVar31._20_4_ + auVar31._20_4_;
      auVar49._24_4_ = auVar31._24_4_ + auVar31._24_4_;
      auVar49._28_4_ = auVar31._28_4_ + auVar31._28_4_;
      auVar17 = vfmadd231ps_avx512vl(auVar17,auVar22,auVar18);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar22,auVar50);
      auVar16 = vfmadd231ps_avx512vl(auVar16,auVar22,auVar49);
      auVar26 = vmulps_avx512vl(auVar23,auVar18);
      auVar27 = vmulps_avx512vl(auVar24,auVar50);
      auVar31 = vmulps_avx512vl(auVar25,auVar49);
      auVar26 = vfmsub231ps_avx512vl(auVar26,auVar25,auVar50);
      auVar30._0_4_ = auVar16._0_4_ + auVar26._0_4_;
      auVar30._4_4_ = auVar16._4_4_ + auVar26._4_4_;
      auVar30._8_4_ = auVar16._8_4_ + auVar26._8_4_;
      auVar30._12_4_ = auVar16._12_4_ + auVar26._12_4_;
      auVar30._16_4_ = auVar16._16_4_ + auVar26._16_4_;
      auVar30._20_4_ = auVar16._20_4_ + auVar26._20_4_;
      auVar30._24_4_ = auVar16._24_4_ + auVar26._24_4_;
      auVar30._28_4_ = auVar16._28_4_ + auVar26._28_4_;
      auVar16 = vfmsub231ps_avx512vl(auVar27,auVar23,auVar49);
      auVar17 = vaddps_avx512vl(auVar17,auVar16);
      auVar16 = vfmsub231ps_avx512vl(auVar31,auVar24,auVar18);
      auVar15 = vaddps_avx512vl(auVar15,auVar16);
      auVar16 = vpermt2ps_avx512vl(auVar30,auVar34,auVar15);
      auVar26 = vpermt2ps_avx512vl(auVar17,auVar36,auVar15);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar37,auVar16);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar9 * 4) = auVar26;
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar38,auVar17);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar9 * 4) = auVar16;
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar39,auVar17);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar40,auVar30);
      *(undefined1 (*) [32])(param_2 + lVar9 * 4) = auVar15;
      auVar15 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar9 * 4);
      auVar17 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar9 * 4);
      auVar16 = *(undefined1 (*) [32])(param_4 + lVar9 * 4);
      auVar26 = vblendps_avx(auVar17,auVar15,0x24);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar32,auVar17);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar35,auVar16);
      auVar17 = vpermt2ps_avx512vl(auVar16,auVar33,auVar17);
      auVar16 = vinsertf32x4_avx512vl(auVar15,auVar17._0_16_,1);
      auVar15 = vshuff64x2_avx512vl(auVar15,auVar17,3);
      auVar17 = vmulps_avx512vl(auVar16,auVar19);
      auVar15 = vmulps_avx512vl(auVar15,auVar20);
      auVar16 = vmulps_avx512vl(auVar26,auVar21);
      auVar26 = vmulps_avx512vl(auVar17,auVar23);
      auVar27 = vmulps_avx512vl(auVar15,auVar24);
      auVar31 = vmulps_avx512vl(auVar16,auVar25);
      auVar26 = vfmsub231ps_avx512vl(auVar26,auVar15,auVar25);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar16,auVar23);
      auVar31 = vfmsub231ps_avx512vl(auVar31,auVar17,auVar24);
      auVar27 = vaddps_avx512vl(auVar27,auVar27);
      auVar31 = vaddps_avx512vl(auVar31,auVar31);
      auVar26 = vaddps_avx512vl(auVar26,auVar26);
      auVar17 = vfmadd231ps_avx512vl(auVar17,auVar22,auVar27);
      auVar19 = vfmadd231ps_avx512vl(auVar15,auVar22,auVar31);
      auVar15 = vfmadd213ps_avx512vl(auVar22,auVar26,auVar16);
      auVar16 = vmulps_avx512vl(auVar23,auVar27);
      auVar20 = vmulps_avx512vl(auVar24,auVar31);
      auVar21 = vmulps_avx512vl(auVar25,auVar26);
      auVar16 = vfmsub231ps_avx512vl(auVar16,auVar25,auVar31);
      auVar16 = vaddps_avx512vl(auVar15,auVar16);
      auVar15 = vfmsub231ps_avx512vl(auVar20,auVar23,auVar26);
      auVar26 = vaddps_avx512vl(auVar17,auVar15);
      auVar17 = vfmsub231ps_avx512vl(auVar21,auVar24,auVar27);
      auVar27._0_4_ = auVar17._0_4_ + auVar19._0_4_;
      auVar27._4_4_ = auVar17._4_4_ + auVar19._4_4_;
      auVar27._8_4_ = auVar17._8_4_ + auVar19._8_4_;
      auVar27._12_4_ = auVar17._12_4_ + auVar19._12_4_;
      auVar27._16_4_ = auVar17._16_4_ + auVar19._16_4_;
      auVar27._20_4_ = auVar17._20_4_ + auVar19._20_4_;
      auVar27._24_4_ = auVar17._24_4_ + auVar19._24_4_;
      auVar27._28_4_ = auVar17._28_4_ + auVar19._28_4_;
      auVar26 = vaddps_avx512vl(auVar28,auVar26);
      auVar27 = vaddps_avx512vl(auVar29,auVar27);
      auVar16 = vaddps_avx512vl(auVar44,auVar16);
      auVar19 = vsubps_avx512vl(auVar26,auVar45);
      auVar31 = vsubps_avx(auVar27,auVar46);
      auVar20 = vsubps_avx512vl(auVar16,auVar47);
      auVar16 = vpermt2ps_avx512vl(auVar20,auVar34,auVar31);
      auVar26 = vpermt2ps_avx512vl(auVar19,auVar36,auVar31);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar37,auVar16);
      *(undefined1 (*) [32])(param_4 + -0x40 + lVar9 * 4) = auVar26;
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar38,auVar19);
      *(undefined1 (*) [32])(param_4 + -0x20 + lVar9 * 4) = auVar16;
      auVar16 = vpermt2ps_avx512vl(auVar31,auVar39,auVar19);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar40,auVar20);
      *(undefined1 (*) [32])(param_4 + lVar9 * 4) = auVar16;
      auVar16 = *(undefined1 (*) [32])(param_7 + -0x40 + lVar9 * 4);
      auVar26 = *(undefined1 (*) [32])(param_7 + -0x20 + lVar9 * 4);
      auVar27 = *(undefined1 (*) [32])(param_7 + lVar9 * 4);
      auVar21 = vpermt2ps_avx512vl(auVar16,auVar32,auVar26);
      auVar22 = vpermt2ps_avx512vl(auVar27,auVar33,auVar26);
      auVar23 = vinsertf32x4_avx512vl(auVar21,auVar22._0_16_,1);
      auVar21 = vshuff64x2_avx512vl(auVar21,auVar22,3);
      auVar16 = vpermt2ps_avx512vl(auVar26,
                                   ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a
                                   ,auVar16);
      auVar16 = vpermt2ps_avx512vl(auVar16,
                                   ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000
                                   ,auVar27);
      auVar26 = vsubps_avx512vl(auVar23,auVar19);
      auVar27 = vsubps_avx512vl(auVar21,auVar31);
      auVar31 = vsubps_avx512vl(auVar16,auVar20);
      auVar26 = vdivps_avx512vl(auVar26,auVar41);
      auVar16 = vdivps_avx(auVar27,auVar41);
      auVar27 = vdivps_avx512vl(auVar31,auVar41);
      auVar31 = vpermt2ps_avx512vl(auVar27,auVar34,auVar16);
      auVar19 = vpermt2ps_avx512vl(auVar26,auVar36,auVar16);
      auVar19 = vpermt2ps_avx512vl(auVar19,auVar37,auVar31);
      *(undefined1 (*) [32])(param_5 + -0x40 + lVar9 * 4) = auVar19;
      auVar31 = vpermt2ps_avx512vl(auVar31,auVar38,auVar26);
      *(undefined1 (*) [32])(param_5 + -0x20 + lVar9 * 4) = auVar31;
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar39,auVar26);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar40,auVar27);
      *(undefined1 (*) [32])(param_5 + lVar9 * 4) = auVar16;
      uVar10 = uVar10 + 0x20;
      lVar9 = lVar9 + 0x18;
      uVar11 = uVar11 + 8;
    } while ((int)uVar11 < (int)(uVar7 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar11) {
      return;
    }
  }
  auVar32 = vpbroadcastd_avx512vl();
  auVar32 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar33 = vpbroadcastd_avx512vl();
  uVar10 = vpcmpgtd_avx512vl(auVar33,auVar32);
  uVar8 = (ulonglong)uVar11;
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar8 * 0xc);
  bVar12 = (byte)uVar10;
  if (bVar12 == 0xff) {
    auVar32 = pauVar1[1];
    auVar33 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,*pauVar1,auVar32);
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,pauVar1[2],auVar32);
    auVar35._16_16_ = auVar34._0_16_;
    auVar35._0_16_ = auVar33._0_16_;
    auVar33 = vperm2f128_avx(auVar33,auVar34,0x31);
    auVar32 = vblendps_avx(auVar32,*pauVar1,0x24);
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar32,pauVar1[2]);
  }
  else {
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_5));
    auVar35._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar32._4_4_;
    auVar35._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_;
    auVar35._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar32._8_4_;
    auVar35._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar32._12_4_;
    auVar35._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar35._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar35._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar35._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_5));
    auVar33._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar32._4_4_;
    auVar33._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_;
    auVar33._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar32._8_4_;
    auVar33._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar32._12_4_;
    auVar33._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar33._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar33._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar33._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar34 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_5));
    auVar32._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar34._4_4_;
    auVar32._0_4_ = (uint)(bVar12 & 1) * auVar34._0_4_;
    auVar32._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar34._8_4_;
    auVar32._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar34._12_4_;
    auVar32._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar34._16_4_;
    auVar32._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar34._20_4_;
    auVar32._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar34._24_4_;
    auVar32._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar34._28_4_;
  }
  pauVar6 = (undefined1 (*) [32])(param_1 + uVar8 * 0x10);
  fVar3 = (float)param_8[8];
  auVar24._4_4_ = fVar3;
  auVar24._0_4_ = fVar3;
  auVar24._8_4_ = fVar3;
  auVar24._12_4_ = fVar3;
  auVar24._16_4_ = fVar3;
  auVar24._20_4_ = fVar3;
  auVar24._24_4_ = fVar3;
  auVar24._28_4_ = fVar3;
  auVar39._0_4_ = auVar35._0_4_ * fVar3;
  auVar39._4_4_ = auVar35._4_4_ * fVar3;
  auVar39._8_4_ = auVar35._8_4_ * fVar3;
  auVar39._12_4_ = auVar35._12_4_ * fVar3;
  auVar39._16_4_ = auVar35._16_4_ * fVar3;
  auVar39._20_4_ = auVar35._20_4_ * fVar3;
  auVar39._24_4_ = auVar35._24_4_ * fVar3;
  auVar39._28_4_ = auVar35._28_4_ * fVar3;
  auVar35 = vbroadcastss_avx512vl(ZEXT416(param_8[9]));
  auVar33 = vmulps_avx512vl(auVar33,auVar35);
  auVar34 = vbroadcastss_avx512vl(ZEXT416(param_8[10]));
  auVar32 = vmulps_avx512vl(auVar32,auVar34);
  uVar7 = param_8[3];
  auVar14._4_4_ = uVar7;
  auVar14._0_4_ = uVar7;
  auVar14._8_4_ = uVar7;
  auVar14._12_4_ = uVar7;
  auVar21._16_4_ = uVar7;
  auVar21._0_16_ = auVar14;
  auVar21._20_4_ = uVar7;
  auVar21._24_4_ = uVar7;
  auVar21._28_4_ = uVar7;
  uVar7 = param_8[1];
  auVar22._4_4_ = uVar7;
  auVar22._0_4_ = uVar7;
  auVar22._8_4_ = uVar7;
  auVar22._12_4_ = uVar7;
  auVar22._16_4_ = uVar7;
  auVar22._20_4_ = uVar7;
  auVar22._24_4_ = uVar7;
  auVar22._28_4_ = uVar7;
  uVar7 = param_8[2];
  auVar20._4_4_ = uVar7;
  auVar20._0_4_ = uVar7;
  auVar20._8_4_ = uVar7;
  auVar20._12_4_ = uVar7;
  auVar20._16_4_ = uVar7;
  auVar20._20_4_ = uVar7;
  auVar20._24_4_ = uVar7;
  auVar20._28_4_ = uVar7;
  uVar7 = *param_8;
  auVar23._4_4_ = uVar7;
  auVar23._0_4_ = uVar7;
  auVar23._8_4_ = uVar7;
  auVar23._12_4_ = uVar7;
  auVar23._16_4_ = uVar7;
  auVar23._20_4_ = uVar7;
  auVar23._24_4_ = uVar7;
  auVar23._28_4_ = uVar7;
  auVar36 = vmulps_avx512vl(auVar39,auVar22);
  auVar37 = vmulps_avx512vl(auVar33,auVar20);
  auVar38 = vmulps_avx512vl(auVar32,auVar23);
  auVar36 = vfmsub231ps_avx512vl(auVar36,auVar33,auVar23);
  auVar37 = vfmsub231ps_avx512vl(auVar37,auVar32,auVar22);
  auVar38 = vfmsub231ps_avx512vl(auVar38,auVar39,auVar20);
  auVar37 = vaddps_avx512vl(auVar37,auVar37);
  auVar38 = vaddps_avx512vl(auVar38,auVar38);
  auVar36 = vaddps_avx512vl(auVar36,auVar36);
  auVar39 = vfmadd231ps_avx512vl(auVar39,auVar21,auVar37);
  auVar33 = vfmadd231ps_avx512vl(auVar33,auVar21,auVar38);
  auVar32 = vfmadd231ps_avx512vl(auVar32,auVar21,auVar36);
  auVar40 = vmulps_avx512vl(auVar22,auVar37);
  auVar41 = vmulps_avx512vl(auVar20,auVar38);
  auVar16 = vmulps_avx512vl(auVar23,auVar36);
  auVar38 = vfmsub231ps_avx512vl(auVar40,auVar23,auVar38);
  auVar32 = vaddps_avx512vl(auVar32,auVar38);
  auVar36 = vfmsub231ps_avx512vl(auVar41,auVar22,auVar36);
  auVar36 = vaddps_avx512vl(auVar39,auVar36);
  auVar37 = vfmsub231ps_avx512vl(auVar16,auVar20,auVar37);
  auVar38 = vbroadcastss_avx512vl(ZEXT416(param_8[4]));
  auVar39 = vbroadcastss_avx512vl(ZEXT416(param_8[5]));
  auVar33 = vaddps_avx512vl(auVar33,auVar37);
  auVar37 = vbroadcastss_avx512vl(ZEXT416(param_8[6]));
  auVar36 = vaddps_avx512vl(auVar38,auVar36);
  auVar33 = vaddps_avx512vl(auVar39,auVar33);
  auVar32 = vaddps_avx512vl(auVar37,auVar32);
  auVar40 = vbroadcastss_avx512vl(ZEXT416(*param_9));
  auVar36 = vsubps_avx512vl(auVar36,auVar40);
  auVar41 = vbroadcastss_avx512vl(ZEXT416(param_9[1]));
  auVar33 = vsubps_avx512vl(auVar33,auVar41);
  auVar16 = vbroadcastss_avx512vl(ZEXT416(param_9[2]));
  auVar32 = vsubps_avx512vl(auVar32,auVar16);
  piVar2 = (int *)(param_6 + (int)(uVar11 << 2));
  auVar19._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * piVar2[1];
  auVar19._0_4_ = (uint)(bVar12 & 1) * *piVar2;
  auVar19._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * piVar2[2];
  auVar19._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * piVar2[3];
  auVar19._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * piVar2[4];
  auVar19._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * piVar2[5];
  auVar19._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * piVar2[6];
  auVar19._28_4_ = (uint)(byte)(uVar10 >> 7) * piVar2[7];
  if (bVar12 == 0xff) {
    auVar15 = vunpcklps_avx512vl(auVar36,auVar33);
    auVar26 = vunpcklps_avx512vl(auVar32,auVar19);
    auVar27 = vunpcklpd_avx512vl(auVar15,auVar26);
    auVar15 = vunpckhpd_avx512vl(auVar15,auVar26);
    auVar26 = vunpckhps_avx512vl(auVar36,auVar33);
    auVar31 = vunpckhps_avx512vl(auVar32,auVar19);
    auVar19 = vunpcklpd_avx512vl(auVar26,auVar31);
    auVar26 = vunpckhpd_avx512vl(auVar26,auVar31);
    auVar31 = vinsertf32x4_avx512vl(auVar27,auVar15._0_16_,1);
    *pauVar6 = auVar31;
    auVar31 = vinsertf32x4_avx512vl(auVar19,auVar26._0_16_,1);
    pauVar6[1] = auVar31;
    auVar15 = vshuff64x2_avx512vl(auVar27,auVar15,3);
    pauVar6[2] = auVar15;
    auVar15 = vshuff64x2_avx512vl(auVar19,auVar26,3);
    pauVar6[3] = auVar15;
    auVar15 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar32,auVar33);
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar36,auVar33);
    auVar26 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar26,auVar15);
    *pauVar1 = auVar26;
    auVar15 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar15,auVar36);
    pauVar1[1] = auVar15;
    auVar33 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar33,auVar36);
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar33,auVar32);
    pauVar1[2] = auVar32;
    pauVar6 = (undefined1 (*) [32])(param_2 + uVar8 * 0xc);
    auVar32 = *(undefined1 (*) [32])(param_2 + uVar8 * 0xc);
    auVar33 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar8 * 0xc);
    auVar36 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar8 * 0xc);
    auVar15 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar32,auVar33);
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar36,auVar33);
    auVar25 = vinsertf32x4_avx512vl(auVar15,auVar26._0_16_,1);
    auVar15 = vshuff64x2_avx512vl(auVar15,auVar26,3);
    auVar32 = vblendps_avx(auVar33,auVar32,0x24);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar32,auVar36);
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar10,
               auVar36);
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar10,
               auVar33);
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar10,
               auVar32);
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar10,
               auVar19);
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar36);
    vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar15,uVar10,auVar33);
    vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar17,uVar10,auVar32);
    pauVar6 = (undefined1 (*) [32])(param_2 + uVar8 * 0xc);
    auVar13 = vxorps_avx512vl(auVar32._0_16_,auVar32._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + param_5));
    auVar25._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar13._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar25._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar13._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar25._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar13._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar25._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar13._12_4_;
    auVar25._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar25._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar25._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar25._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar13 = vxorps_avx512vl(auVar33._0_16_,auVar33._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + param_7));
    auVar15._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar13._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar15._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar13._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar15._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar13._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar15._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar13._12_4_;
    auVar15._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar15._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar15._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar15._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar13 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                              ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                      ._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + uVar8 * 3));
    auVar36._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar13._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar36._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar13._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar36._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar13._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar36._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar13._12_4_;
    auVar36._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar36._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar36._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar36._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
  }
  auVar32 = vmulps_avx512vl(auVar25,auVar24);
  auVar33 = vmulps_avx512vl(auVar15,auVar35);
  auVar36 = vmulps_avx512vl(auVar36,auVar34);
  auVar15 = vmulps_avx512vl(auVar32,auVar22);
  auVar26 = vmulps_avx512vl(auVar33,auVar20);
  auVar27 = vmulps_avx512vl(auVar36,auVar23);
  auVar15 = vfmsub231ps_avx512vl(auVar15,auVar33,auVar23);
  auVar26 = vfmsub231ps_avx512vl(auVar26,auVar36,auVar22);
  auVar27 = vfmsub231ps_avx512vl(auVar27,auVar32,auVar20);
  auVar26 = vaddps_avx512vl(auVar26,auVar26);
  auVar27 = vaddps_avx512vl(auVar27,auVar27);
  auVar15 = vaddps_avx512vl(auVar15,auVar15);
  auVar31 = vbroadcastss_avx512vl(auVar14);
  auVar32 = vfmadd231ps_avx512vl(auVar32,auVar31,auVar26);
  auVar33 = vfmadd231ps_avx512vl(auVar33,auVar31,auVar27);
  auVar36 = vfmadd213ps_avx512vl(auVar31,auVar15,auVar36);
  auVar31 = vmulps_avx512vl(auVar22,auVar26);
  auVar19 = vmulps_avx512vl(auVar20,auVar27);
  auVar25 = vmulps_avx512vl(auVar23,auVar15);
  auVar27 = vfmsub231ps_avx512vl(auVar31,auVar23,auVar27);
  auVar36 = vaddps_avx512vl(auVar36,auVar27);
  auVar15 = vfmsub231ps_avx512vl(auVar19,auVar22,auVar15);
  auVar32 = vaddps_avx512vl(auVar32,auVar15);
  auVar15 = vfmsub231ps_avx512vl(auVar25,auVar20,auVar26);
  auVar33 = vaddps_avx512vl(auVar33,auVar15);
  if (bVar12 == 0xff) {
    auVar15 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar36,auVar33);
    auVar17 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar32,auVar33);
    auVar17 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar17,auVar15);
    *pauVar6 = auVar17;
    lVar9 = uVar8 * 0xc;
    auVar15 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar15,auVar32);
    *(undefined1 (*) [32])(param_2 + 0x20 + lVar9) = auVar15;
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar33,auVar32);
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar32,auVar36);
    *(undefined1 (*) [32])(param_2 + 0x40 + lVar9) = auVar32;
    auVar32 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar9);
    auVar33 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar9);
    pauVar6 = (undefined1 (*) [32])(lVar9 + param_4);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,*(undefined1 (*) [32])(param_4 + lVar9),auVar32);
    auVar15 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar33,auVar32);
    auVar17 = vinsertf32x4_avx512vl(auVar36,auVar15._0_16_,1);
    auVar42 = vshuff64x2_avx512vl(auVar36,auVar15,3);
    auVar32 = vblendps_avx(auVar32,*(undefined1 (*) [32])(param_4 + lVar9),0x24);
    auVar43 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar32,auVar33);
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar32);
    vscatterdps_avx512vl(ZEXT832(pauVar6) + auVar17,uVar10,auVar33);
    vscatterdps_avx512vl(ZEXT832(pauVar6) + auVar18,uVar10,auVar36);
    pauVar6 = (undefined1 (*) [32])(param_4 + uVar8 * 0xc);
    auVar14 = vxorps_avx512vl(auVar36._0_16_,auVar36._0_16_);
    auVar36 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + param_5));
    auVar17._0_4_ = (uint)(bVar12 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar14._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar17._4_4_ = (uint)bVar5 * auVar36._4_4_ | (uint)!bVar5 * auVar14._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar17._8_4_ = (uint)bVar5 * auVar36._8_4_ | (uint)!bVar5 * auVar14._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar17._12_4_ = (uint)bVar5 * auVar36._12_4_ | (uint)!bVar5 * auVar14._12_4_;
    auVar17._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar36._16_4_;
    auVar17._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar36._20_4_;
    auVar17._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar36._24_4_;
    auVar17._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar36._28_4_;
    auVar14 = vxorps_avx512vl(auVar32._0_16_,auVar32._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar6 + uVar8 * 3));
    auVar42._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar14._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar42._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar14._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar42._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar14._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar42._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar14._12_4_;
    auVar42._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar42._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar42._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar42._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
    auVar14 = vxorps_avx512vl(auVar33._0_16_,auVar33._0_16_);
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + (longlong)*pauVar6));
    auVar43._0_4_ = (uint)(bVar12 & 1) * auVar32._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar14._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar43._4_4_ = (uint)bVar5 * auVar32._4_4_ | (uint)!bVar5 * auVar14._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar43._8_4_ = (uint)bVar5 * auVar32._8_4_ | (uint)!bVar5 * auVar14._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar43._12_4_ = (uint)bVar5 * auVar32._12_4_ | (uint)!bVar5 * auVar14._12_4_;
    auVar43._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar32._16_4_;
    auVar43._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar32._20_4_;
    auVar43._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar32._24_4_;
    auVar43._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar32._28_4_;
  }
  auVar32 = vmulps_avx512vl(auVar17,auVar24);
  auVar33 = vmulps_avx512vl(auVar42,auVar35);
  auVar35 = vmulps_avx512vl(auVar43,auVar34);
  auVar34 = vmulps_avx512vl(auVar32,auVar22);
  auVar36 = vmulps_avx512vl(auVar33,auVar20);
  auVar15 = vmulps_avx512vl(auVar35,auVar23);
  auVar34 = vfmsub231ps_avx512vl(auVar34,auVar33,auVar23);
  auVar36 = vfmsub231ps_avx512vl(auVar36,auVar35,auVar22);
  auVar15 = vfmsub231ps_avx512vl(auVar15,auVar32,auVar20);
  auVar36 = vaddps_avx512vl(auVar36,auVar36);
  auVar15 = vaddps_avx512vl(auVar15,auVar15);
  auVar34 = vaddps_avx512vl(auVar34,auVar34);
  auVar32 = vfmadd231ps_avx512vl(auVar32,auVar21,auVar36);
  auVar33 = vfmadd231ps_avx512vl(auVar33,auVar21,auVar15);
  auVar35 = vfmadd213ps_avx512vl(auVar21,auVar34,auVar35);
  auVar17 = vmulps_avx512vl(auVar22,auVar36);
  auVar18 = vmulps_avx512vl(auVar20,auVar15);
  auVar26 = vmulps_avx512vl(auVar23,auVar34);
  auVar15 = vfmsub231ps_avx512vl(auVar17,auVar23,auVar15);
  auVar35 = vaddps_avx512vl(auVar35,auVar15);
  auVar34 = vfmsub231ps_avx512vl(auVar18,auVar22,auVar34);
  auVar32 = vaddps_avx512vl(auVar32,auVar34);
  auVar34 = vfmsub231ps_avx512vl(auVar26,auVar20,auVar36);
  auVar33 = vaddps_avx512vl(auVar33,auVar34);
  auVar32 = vaddps_avx512vl(auVar38,auVar32);
  auVar33 = vaddps_avx512vl(auVar39,auVar33);
  auVar35 = vaddps_avx512vl(auVar37,auVar35);
  auVar32 = vsubps_avx512vl(auVar32,auVar40);
  auVar33 = vsubps_avx512vl(auVar33,auVar41);
  auVar35 = vsubps_avx512vl(auVar35,auVar16);
  if (bVar12 == 0xff) {
    auVar34 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar35,auVar33);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar32,auVar33);
    auVar36 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar36,auVar34);
    *pauVar6 = auVar36;
    lVar9 = uVar8 * 0xc;
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar34,auVar32);
    *(undefined1 (*) [32])(param_4 + 0x20 + lVar9) = auVar34;
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar33,auVar32);
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar34,auVar35);
    *(undefined1 (*) [32])(param_4 + 0x40 + lVar9) = auVar34;
    auVar34 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar9);
    auVar36 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar9);
    auVar37 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,*(undefined1 (*) [32])(param_7 + lVar9),auVar34);
    auVar38 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar36,auVar34);
    auVar40 = vinsertf32x4_avx512vl(auVar37,auVar38._0_16_,1);
    auVar37 = vshuff64x2_avx512vl(auVar37,auVar38,3);
    auVar34 = vblendps_avx(auVar34,*(undefined1 (*) [32])(param_7 + lVar9),0x24);
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar34,auVar36);
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar32);
    vscatterdps_avx512vl
              (ZEXT832(pauVar6) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar33);
    vscatterdps_avx512vl(ZEXT832(pauVar6) + auVar32,uVar10,auVar35);
    param_7 = param_7 + uVar8 * 0xc;
    auVar34 = vgatherdps_avx512vl(*(undefined4 *)(param_7 + param_5));
    auVar40._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar34._4_4_;
    auVar40._0_4_ = (uint)(bVar12 & 1) * auVar34._0_4_;
    auVar40._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar34._8_4_;
    auVar40._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar34._12_4_;
    auVar40._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar34._16_4_;
    auVar40._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar34._20_4_;
    auVar40._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar34._24_4_;
    auVar40._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar34._28_4_;
    auVar34 = vgatherdps_avx512vl(*(undefined4 *)(param_7 + param_5));
    auVar37._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar34._4_4_;
    auVar37._0_4_ = (uint)(bVar12 & 1) * auVar34._0_4_;
    auVar37._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar34._8_4_;
    auVar37._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar34._12_4_;
    auVar37._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar34._16_4_;
    auVar37._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar34._20_4_;
    auVar37._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar34._24_4_;
    auVar37._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar34._28_4_;
    auVar14 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                              ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                      ._0_16_);
    auVar36 = vgatherdps_avx512vl(*(undefined4 *)((longlong)local_e8 + param_7));
    auVar34._0_4_ = (uint)(bVar12 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar12 & 1) * auVar14._0_4_;
    bVar5 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar34._4_4_ = (uint)bVar5 * auVar36._4_4_ | (uint)!bVar5 * auVar14._4_4_;
    bVar5 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar34._8_4_ = (uint)bVar5 * auVar36._8_4_ | (uint)!bVar5 * auVar14._8_4_;
    bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar34._12_4_ = (uint)bVar5 * auVar36._12_4_ | (uint)!bVar5 * auVar14._12_4_;
    auVar34._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar36._16_4_;
    auVar34._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar36._20_4_;
    auVar34._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar36._24_4_;
    auVar34._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar36._28_4_;
  }
  auVar32 = vsubps_avx(auVar40,auVar32);
  auVar33 = vsubps_avx(auVar37,auVar33);
  auVar35 = vsubps_avx512vl(auVar34,auVar35);
  auVar38._4_4_ = param_10;
  auVar38._0_4_ = param_10;
  auVar38._8_4_ = param_10;
  auVar38._12_4_ = param_10;
  auVar38._16_4_ = param_10;
  auVar38._20_4_ = param_10;
  auVar38._24_4_ = param_10;
  auVar38._28_4_ = param_10;
  auVar32 = vdivps_avx(auVar32,auVar38);
  auVar33 = vdivps_avx(auVar33,auVar38);
  auVar35 = vdivps_avx(auVar35,auVar38);
  pauVar1 = (undefined1 (*) [32])(param_5 + uVar8 * 0xc);
  if (bVar12 == 0xff) {
    auVar34 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar35,auVar33);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar32,auVar33);
    auVar36 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar36,auVar34);
    *pauVar1 = auVar36;
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar34,auVar32);
    pauVar1[1] = auVar34;
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar33,auVar32);
    auVar32 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar32,auVar35);
    pauVar1[2] = auVar32;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
               auVar32);
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar10,
               auVar33);
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar10,
               auVar35);
  }
  return;
}

// ApplyAnimationPreSimulationTransform_avx512skx @ 140cd10e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAnimationPreSimulationTransform_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint *param_4,undefined4 *param_5
               ,uint param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
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
  undefined4 local_48 [14];
  
  auVar33 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar32 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar31 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar30 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar29 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar28 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar27 = ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000;
  auVar26 = ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a;
  auVar25 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar24 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar23 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  uVar6 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar6 = param_7;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar38._4_4_ = param_6;
    auVar38._0_4_ = param_6;
    auVar38._8_4_ = param_6;
    auVar38._12_4_ = param_6;
    auVar38._16_4_ = param_6;
    auVar38._20_4_ = param_6;
    auVar38._24_4_ = param_6;
    auVar38._28_4_ = param_6;
    lVar7 = 0x40;
    uVar9 = 0;
    do {
      auVar12 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar14 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar14,auVar12,0x24);
      auVar12 = vpermt2ps_avx512vl(auVar12,auVar23,auVar14);
      auVar13 = vpermt2ps_avx512vl(auVar15,auVar25,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar14 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar7),auVar24,auVar14);
      auVar15 = vinsertf32x4_avx512vl(auVar12,auVar14._0_16_,1);
      auVar16 = vshuff64x2_avx512vl(auVar12,auVar14,3);
      uVar2 = param_4[8];
      auVar12._4_4_ = uVar2;
      auVar12._0_4_ = uVar2;
      auVar12._8_4_ = uVar2;
      auVar12._12_4_ = uVar2;
      auVar12._16_4_ = uVar2;
      auVar12._20_4_ = uVar2;
      auVar12._24_4_ = uVar2;
      auVar12._28_4_ = uVar2;
      auVar12 = vmulps_avx512vl(auVar15,auVar12);
      uVar2 = param_4[9];
      auVar14._4_4_ = uVar2;
      auVar14._0_4_ = uVar2;
      auVar14._8_4_ = uVar2;
      auVar14._12_4_ = uVar2;
      auVar14._16_4_ = uVar2;
      auVar14._20_4_ = uVar2;
      auVar14._24_4_ = uVar2;
      auVar14._28_4_ = uVar2;
      auVar14 = vmulps_avx512vl(auVar16,auVar14);
      uVar2 = param_4[10];
      auVar15._4_4_ = uVar2;
      auVar15._0_4_ = uVar2;
      auVar15._8_4_ = uVar2;
      auVar15._12_4_ = uVar2;
      auVar15._16_4_ = uVar2;
      auVar15._20_4_ = uVar2;
      auVar15._24_4_ = uVar2;
      auVar15._28_4_ = uVar2;
      auVar15 = vmulps_avx512vl(auVar13,auVar15);
      auVar13 = vbroadcastss_avx512vl(ZEXT416(param_4[3]));
      auVar16 = vbroadcastss_avx512vl(ZEXT416(param_4[1]));
      auVar17 = vbroadcastss_avx512vl(ZEXT416(param_4[2]));
      auVar18 = vbroadcastss_avx512vl(ZEXT416(*param_4));
      auVar19 = vmulps_avx512vl(auVar12,auVar16);
      auVar20 = vmulps_avx512vl(auVar14,auVar17);
      auVar21 = vmulps_avx512vl(auVar15,auVar18);
      auVar19 = vfmsub231ps_avx512vl(auVar19,auVar14,auVar18);
      auVar20 = vfmsub231ps_avx512vl(auVar20,auVar15,auVar16);
      auVar21 = vfmsub231ps_avx512vl(auVar21,auVar12,auVar17);
      auVar20 = vaddps_avx512vl(auVar20,auVar20);
      auVar41._0_4_ = auVar21._0_4_ + auVar21._0_4_;
      auVar41._4_4_ = auVar21._4_4_ + auVar21._4_4_;
      auVar41._8_4_ = auVar21._8_4_ + auVar21._8_4_;
      auVar41._12_4_ = auVar21._12_4_ + auVar21._12_4_;
      auVar41._16_4_ = auVar21._16_4_ + auVar21._16_4_;
      auVar41._20_4_ = auVar21._20_4_ + auVar21._20_4_;
      auVar41._24_4_ = auVar21._24_4_ + auVar21._24_4_;
      auVar41._28_4_ = auVar21._28_4_ + auVar21._28_4_;
      auVar19 = vaddps_avx512vl(auVar19,auVar19);
      auVar12 = vfmadd231ps_avx512vl(auVar12,auVar13,auVar20);
      auVar14 = vfmadd231ps_avx512vl(auVar14,auVar13,auVar41);
      auVar15 = vfmadd213ps_avx512vl(auVar13,auVar19,auVar15);
      auVar13 = vmulps_avx512vl(auVar16,auVar20);
      auVar21 = vmulps_avx512vl(auVar17,auVar41);
      auVar22 = vmulps_avx512vl(auVar18,auVar19);
      auVar13 = vfmsub231ps_avx512vl(auVar13,auVar18,auVar41);
      auVar15 = vaddps_avx512vl(auVar15,auVar13);
      auVar13 = vfmsub231ps_avx512vl(auVar21,auVar16,auVar19);
      auVar12 = vaddps_avx512vl(auVar12,auVar13);
      auVar13 = vfmsub231ps_avx512vl(auVar22,auVar17,auVar20);
      auVar14 = vaddps_avx512vl(auVar14,auVar13);
      uVar2 = param_4[4];
      auVar13._4_4_ = uVar2;
      auVar13._0_4_ = uVar2;
      auVar13._8_4_ = uVar2;
      auVar13._12_4_ = uVar2;
      auVar13._16_4_ = uVar2;
      auVar13._20_4_ = uVar2;
      auVar13._24_4_ = uVar2;
      auVar13._28_4_ = uVar2;
      auVar12 = vaddps_avx512vl(auVar12,auVar13);
      uVar2 = param_4[5];
      auVar16._4_4_ = uVar2;
      auVar16._0_4_ = uVar2;
      auVar16._8_4_ = uVar2;
      auVar16._12_4_ = uVar2;
      auVar16._16_4_ = uVar2;
      auVar16._20_4_ = uVar2;
      auVar16._24_4_ = uVar2;
      auVar16._28_4_ = uVar2;
      auVar14 = vaddps_avx512vl(auVar14,auVar16);
      uVar2 = param_4[6];
      auVar17._4_4_ = uVar2;
      auVar17._0_4_ = uVar2;
      auVar17._8_4_ = uVar2;
      auVar17._12_4_ = uVar2;
      auVar17._16_4_ = uVar2;
      auVar17._20_4_ = uVar2;
      auVar17._24_4_ = uVar2;
      auVar17._28_4_ = uVar2;
      auVar15 = vaddps_avx512vl(auVar15,auVar17);
      uVar3 = *param_5;
      auVar18._4_4_ = uVar3;
      auVar18._0_4_ = uVar3;
      auVar18._8_4_ = uVar3;
      auVar18._12_4_ = uVar3;
      auVar18._16_4_ = uVar3;
      auVar18._20_4_ = uVar3;
      auVar18._24_4_ = uVar3;
      auVar18._28_4_ = uVar3;
      auVar13 = vsubps_avx512vl(auVar12,auVar18);
      uVar3 = param_5[1];
      auVar19._4_4_ = uVar3;
      auVar19._0_4_ = uVar3;
      auVar19._8_4_ = uVar3;
      auVar19._12_4_ = uVar3;
      auVar19._16_4_ = uVar3;
      auVar19._20_4_ = uVar3;
      auVar19._24_4_ = uVar3;
      auVar19._28_4_ = uVar3;
      auVar16 = vsubps_avx512vl(auVar14,auVar19);
      uVar3 = param_5[2];
      auVar20._4_4_ = uVar3;
      auVar20._0_4_ = uVar3;
      auVar20._8_4_ = uVar3;
      auVar20._12_4_ = uVar3;
      auVar20._16_4_ = uVar3;
      auVar20._20_4_ = uVar3;
      auVar20._24_4_ = uVar3;
      auVar20._28_4_ = uVar3;
      auVar15 = vsubps_avx512vl(auVar15,auVar20);
      auVar12 = vpermt2ps_avx512vl(auVar15,auVar28,auVar16);
      auVar14 = vpermt2ps_avx512vl(auVar13,auVar29,auVar16);
      auVar14 = vpermt2ps_avx512vl(auVar14,auVar30,auVar12);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar7) = auVar14;
      auVar12 = vpermt2ps_avx512vl(auVar12,auVar31,auVar13);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar7) = auVar12;
      auVar12 = vpermt2ps_avx512vl(auVar16,auVar32,auVar13);
      auVar12 = vpermt2ps_avx512vl(auVar12,auVar33,auVar15);
      *(undefined1 (*) [32])(param_1 + lVar7) = auVar12;
      auVar12 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar7);
      auVar14 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar7);
      auVar17 = vpermt2ps_avx512vl(auVar12,auVar23,auVar14);
      auVar18 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar7),auVar24,auVar14);
      auVar19 = vinsertf32x4_avx512vl(auVar17,auVar18._0_16_,1);
      auVar17 = vshuff64x2_avx512vl(auVar17,auVar18,3);
      auVar12 = vpermt2ps_avx512vl(auVar14,auVar26,auVar12);
      auVar12 = vpermt2ps_avx512vl(auVar12,auVar27,*(undefined1 (*) [32])(param_3 + lVar7));
      auVar14 = vsubps_avx512vl(auVar19,auVar13);
      auVar13 = vsubps_avx512vl(auVar17,auVar16);
      auVar12 = vsubps_avx512vl(auVar12,auVar15);
      auVar14 = vdivps_avx512vl(auVar14,auVar38);
      auVar15 = vdivps_avx512vl(auVar13,auVar38);
      auVar12 = vdivps_avx512vl(auVar12,auVar38);
      auVar13 = vpermt2ps_avx512vl(auVar12,auVar28,auVar15);
      auVar16 = vpermt2ps_avx512vl(auVar14,auVar29,auVar15);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar30,auVar13);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar7) = auVar16;
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar31,auVar14);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar7) = auVar13;
      auVar14 = vpermt2ps_avx512vl(auVar15,auVar32,auVar14);
      auVar12 = vpermt2ps_avx512vl(auVar14,auVar33,auVar12);
      *(undefined1 (*) [32])(param_2 + lVar7) = auVar12;
      lVar7 = lVar7 + 0x60;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)(uVar6 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar9) {
      return;
    }
  }
  auVar23 = vpbroadcastd_avx512vl();
  auVar23 = vpor_avx2(auVar23,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar24 = vpbroadcastd_avx512vl();
  uVar5 = vpcmpgtd_avx512vl(auVar24,auVar23);
  uVar8 = (ulonglong)uVar9;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar8 * 0xc);
  bVar10 = (byte)uVar5;
  if (bVar10 == 0xff) {
    auVar23 = pauVar1[1];
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,*pauVar1,auVar23);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,pauVar1[2],auVar23);
    auVar26 = vinsertf32x4_avx512vl(auVar24,auVar25._0_16_,1);
    auVar24 = vshuff64x2_avx512vl(auVar24,auVar25,3);
    auVar23 = vblendps_avx(auVar23,*pauVar1,0x24);
    auVar23 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar23,pauVar1[2]);
  }
  else {
    auVar23 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_2));
    auVar26._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar23._4_4_;
    auVar26._0_4_ = (uint)(bVar10 & 1) * auVar23._0_4_;
    auVar26._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar23._8_4_;
    auVar26._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar23._12_4_;
    auVar26._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar23._16_4_;
    auVar26._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar23._20_4_;
    auVar26._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar23._24_4_;
    auVar26._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar23._28_4_;
    auVar23 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
    auVar24._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar23._4_4_;
    auVar24._0_4_ = (uint)(bVar10 & 1) * auVar23._0_4_;
    auVar24._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar23._8_4_;
    auVar24._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar23._12_4_;
    auVar24._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar23._16_4_;
    auVar24._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar23._20_4_;
    auVar24._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar23._24_4_;
    auVar24._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar23._28_4_;
    auVar25 = vgatherdps_avx512vl(*(undefined4 *)*pauVar1);
    auVar23._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar25._4_4_;
    auVar23._0_4_ = (uint)(bVar10 & 1) * auVar25._0_4_;
    auVar23._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar25._8_4_;
    auVar23._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar25._12_4_;
    auVar23._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar25._16_4_;
    auVar23._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar25._20_4_;
    auVar23._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar25._24_4_;
    auVar23._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar25._28_4_;
  }
  uVar6 = param_4[8];
  auVar25._4_4_ = uVar6;
  auVar25._0_4_ = uVar6;
  auVar25._8_4_ = uVar6;
  auVar25._12_4_ = uVar6;
  auVar25._16_4_ = uVar6;
  auVar25._20_4_ = uVar6;
  auVar25._24_4_ = uVar6;
  auVar25._28_4_ = uVar6;
  auVar25 = vmulps_avx512vl(auVar26,auVar25);
  uVar6 = param_4[9];
  auVar27._4_4_ = uVar6;
  auVar27._0_4_ = uVar6;
  auVar27._8_4_ = uVar6;
  auVar27._12_4_ = uVar6;
  auVar27._16_4_ = uVar6;
  auVar27._20_4_ = uVar6;
  auVar27._24_4_ = uVar6;
  auVar27._28_4_ = uVar6;
  auVar24 = vmulps_avx512vl(auVar24,auVar27);
  uVar6 = param_4[10];
  auVar28._4_4_ = uVar6;
  auVar28._0_4_ = uVar6;
  auVar28._8_4_ = uVar6;
  auVar28._12_4_ = uVar6;
  auVar28._16_4_ = uVar6;
  auVar28._20_4_ = uVar6;
  auVar28._24_4_ = uVar6;
  auVar28._28_4_ = uVar6;
  auVar23 = vmulps_avx512vl(auVar23,auVar28);
  uVar6 = param_4[3];
  auVar39._4_4_ = uVar6;
  auVar39._0_4_ = uVar6;
  auVar39._8_4_ = uVar6;
  auVar39._12_4_ = uVar6;
  auVar39._16_4_ = uVar6;
  auVar39._20_4_ = uVar6;
  auVar39._24_4_ = uVar6;
  auVar39._28_4_ = uVar6;
  uVar6 = param_4[1];
  auVar40._4_4_ = uVar6;
  auVar40._0_4_ = uVar6;
  auVar40._8_4_ = uVar6;
  auVar40._12_4_ = uVar6;
  auVar40._16_4_ = uVar6;
  auVar40._20_4_ = uVar6;
  auVar40._24_4_ = uVar6;
  auVar40._28_4_ = uVar6;
  auVar26 = vbroadcastss_avx512vl(ZEXT416(param_4[2]));
  auVar27 = vbroadcastss_avx512vl(ZEXT416(*param_4));
  auVar28 = vmulps_avx512vl(auVar25,auVar40);
  auVar29 = vmulps_avx512vl(auVar24,auVar26);
  auVar30 = vmulps_avx512vl(auVar23,auVar27);
  auVar28 = vfmsub231ps_avx512vl(auVar28,auVar24,auVar27);
  auVar29 = vfmsub231ps_avx512vl(auVar29,auVar23,auVar40);
  auVar30 = vfmsub231ps_avx512vl(auVar30,auVar25,auVar26);
  auVar29 = vaddps_avx512vl(auVar29,auVar29);
  auVar30 = vaddps_avx512vl(auVar30,auVar30);
  auVar28 = vaddps_avx512vl(auVar28,auVar28);
  auVar25 = vfmadd231ps_avx512vl(auVar25,auVar39,auVar29);
  auVar24 = vfmadd231ps_avx512vl(auVar24,auVar39,auVar30);
  auVar23 = vfmadd213ps_avx512vl(auVar39,auVar28,auVar23);
  auVar31 = vmulps_avx512vl(auVar40,auVar29);
  auVar32 = vmulps_avx512vl(auVar26,auVar30);
  auVar33 = vmulps_avx512vl(auVar27,auVar28);
  auVar27 = vfmsub231ps_avx512vl(auVar31,auVar27,auVar30);
  auVar22._0_4_ = auVar23._0_4_ + auVar27._0_4_;
  auVar22._4_4_ = auVar23._4_4_ + auVar27._4_4_;
  auVar22._8_4_ = auVar23._8_4_ + auVar27._8_4_;
  auVar22._12_4_ = auVar23._12_4_ + auVar27._12_4_;
  auVar22._16_4_ = auVar23._16_4_ + auVar27._16_4_;
  auVar22._20_4_ = auVar23._20_4_ + auVar27._20_4_;
  auVar22._24_4_ = auVar23._24_4_ + auVar27._24_4_;
  auVar22._28_4_ = auVar23._28_4_ + auVar27._28_4_;
  auVar23 = vfmsub231ps_avx512vl(auVar32,auVar40,auVar28);
  auVar23 = vaddps_avx512vl(auVar25,auVar23);
  auVar25 = vfmsub231ps_avx512vl(auVar33,auVar26,auVar29);
  auVar24 = vaddps_avx512vl(auVar24,auVar25);
  uVar6 = param_4[4];
  auVar29._4_4_ = uVar6;
  auVar29._0_4_ = uVar6;
  auVar29._8_4_ = uVar6;
  auVar29._12_4_ = uVar6;
  auVar29._16_4_ = uVar6;
  auVar29._20_4_ = uVar6;
  auVar29._24_4_ = uVar6;
  auVar29._28_4_ = uVar6;
  auVar23 = vaddps_avx512vl(auVar23,auVar29);
  uVar6 = param_4[5];
  auVar30._4_4_ = uVar6;
  auVar30._0_4_ = uVar6;
  auVar30._8_4_ = uVar6;
  auVar30._12_4_ = uVar6;
  auVar30._16_4_ = uVar6;
  auVar30._20_4_ = uVar6;
  auVar30._24_4_ = uVar6;
  auVar30._28_4_ = uVar6;
  auVar24 = vaddps_avx512vl(auVar24,auVar30);
  uVar6 = param_4[6];
  auVar31._4_4_ = uVar6;
  auVar31._0_4_ = uVar6;
  auVar31._8_4_ = uVar6;
  auVar31._12_4_ = uVar6;
  auVar31._16_4_ = uVar6;
  auVar31._20_4_ = uVar6;
  auVar31._24_4_ = uVar6;
  auVar31._28_4_ = uVar6;
  auVar25 = vaddps_avx512vl(auVar22,auVar31);
  uVar3 = *param_5;
  auVar32._4_4_ = uVar3;
  auVar32._0_4_ = uVar3;
  auVar32._8_4_ = uVar3;
  auVar32._12_4_ = uVar3;
  auVar32._16_4_ = uVar3;
  auVar32._20_4_ = uVar3;
  auVar32._24_4_ = uVar3;
  auVar32._28_4_ = uVar3;
  auVar23 = vsubps_avx512vl(auVar23,auVar32);
  uVar3 = param_5[1];
  auVar33._4_4_ = uVar3;
  auVar33._0_4_ = uVar3;
  auVar33._8_4_ = uVar3;
  auVar33._12_4_ = uVar3;
  auVar33._16_4_ = uVar3;
  auVar33._20_4_ = uVar3;
  auVar33._24_4_ = uVar3;
  auVar33._28_4_ = uVar3;
  auVar24 = vsubps_avx512vl(auVar24,auVar33);
  uVar3 = param_5[2];
  auVar21._4_4_ = uVar3;
  auVar21._0_4_ = uVar3;
  auVar21._8_4_ = uVar3;
  auVar21._12_4_ = uVar3;
  auVar21._16_4_ = uVar3;
  auVar21._20_4_ = uVar3;
  auVar21._24_4_ = uVar3;
  auVar21._28_4_ = uVar3;
  auVar25 = vsubps_avx512vl(auVar25,auVar21);
  if (bVar10 == 0xff) {
    auVar26 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar25,auVar24);
    auVar27 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar23,auVar24);
    auVar27 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar27,auVar26);
    *pauVar1 = auVar27;
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar26,auVar23);
    pauVar1[1] = auVar26;
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar24,auVar23);
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar26,auVar25);
    pauVar1[2] = auVar26;
    auVar26 = *(undefined1 (*) [32])(param_3 + uVar8 * 0xc);
    auVar27 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar8 * 0xc);
    auVar28 = *(undefined1 (*) [32])(param_3 + 0x40 + uVar8 * 0xc);
    auVar29 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar26,auVar27);
    auVar30 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar28,auVar27);
    auVar34 = vinsertf32x4_avx512vl(auVar29,auVar30._0_16_,1);
    auVar35 = vshuff64x2_avx512vl(auVar29,auVar30,3);
    auVar26 = vblendps_avx(auVar27,auVar26,0x24);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar26,auVar28);
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,auVar23
              );
    vscatterdps_avx512vl(ZEXT832(pauVar1) + ZEXT432(param_6),uVar5,auVar24);
    vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar23,uVar5,auVar25);
    param_3 = param_3 + uVar8 * 0xc;
    auVar26 = vgatherdps_avx512vl(*(undefined4 *)(param_3 + unaff_RBP));
    auVar34._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar26._4_4_;
    auVar34._0_4_ = (uint)(bVar10 & 1) * auVar26._0_4_;
    auVar34._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar26._8_4_;
    auVar34._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar26._12_4_;
    auVar34._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
    auVar34._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
    auVar34._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
    auVar34._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar26._28_4_;
    auVar26 = vgatherdps_avx512vl(*(undefined4 *)((longlong)local_48 + param_3));
    auVar35._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar26._4_4_;
    auVar35._0_4_ = (uint)(bVar10 & 1) * auVar26._0_4_;
    auVar35._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar26._8_4_;
    auVar35._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar26._12_4_;
    auVar35._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
    auVar35._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
    auVar35._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
    auVar35._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar26._28_4_;
    auVar11 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                              ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                      ._0_16_);
    auVar26 = vgatherdps_avx512vl(*(undefined4 *)(param_3 + uVar5));
    auVar36._0_4_ = (uint)(bVar10 & 1) * auVar26._0_4_ | (uint)!(bool)(bVar10 & 1) * auVar11._0_4_;
    bVar4 = (bool)((byte)(uVar5 >> 1) & 1);
    auVar36._4_4_ = (uint)bVar4 * auVar26._4_4_ | (uint)!bVar4 * auVar11._4_4_;
    bVar4 = (bool)((byte)(uVar5 >> 2) & 1);
    auVar36._8_4_ = (uint)bVar4 * auVar26._8_4_ | (uint)!bVar4 * auVar11._8_4_;
    bVar4 = (bool)((byte)(uVar5 >> 3) & 1);
    auVar36._12_4_ = (uint)bVar4 * auVar26._12_4_ | (uint)!bVar4 * auVar11._12_4_;
    auVar36._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
    auVar36._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
    auVar36._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
    auVar36._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar26._28_4_;
  }
  auVar23 = vsubps_avx(auVar34,auVar23);
  auVar24 = vsubps_avx(auVar35,auVar24);
  auVar25 = vsubps_avx512vl(auVar36,auVar25);
  auVar37._4_4_ = param_6;
  auVar37._0_4_ = param_6;
  auVar37._8_4_ = param_6;
  auVar37._12_4_ = param_6;
  auVar37._16_4_ = param_6;
  auVar37._20_4_ = param_6;
  auVar37._24_4_ = param_6;
  auVar37._28_4_ = param_6;
  auVar23 = vdivps_avx(auVar23,auVar37);
  auVar24 = vdivps_avx(auVar24,auVar37);
  auVar25 = vdivps_avx(auVar25,auVar37);
  pauVar1 = (undefined1 (*) [32])(param_2 + uVar8 * 0xc);
  if (bVar10 == 0xff) {
    auVar26 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar25,auVar24);
    auVar27 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar23,auVar24);
    auVar27 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar27,auVar26);
    *pauVar1 = auVar27;
    auVar26 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar26,auVar23);
    pauVar1[1] = auVar26;
    auVar23 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar24,auVar23);
    auVar23 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar23,auVar25);
    pauVar1[2] = auVar23;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,auVar23
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar5,auVar24
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar5,auVar25
              );
  }
  return;
}

// ApplyPreSimulationTransformAndClampVelocity_avx512skx @ 140cd17a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformAndClampVelocity_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,uint *param_8,uint *param_9,undefined4 param_10,
               uint param_11,undefined4 param_12)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 (*pauVar14) [32];
  undefined1 (*pauVar15) [32];
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  byte bVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
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
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar25 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 in_ZMM12 [64];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  
  auVar48 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar47 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar45 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar46 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar44 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar43 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar26 = in_ZMM12._0_32_;
  uVar20 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar20 = param_11;
  }
  if ((int)(uVar20 & 0xfffffff8) < 1) {
    uVar19 = 0;
  }
  else {
    auVar49._4_4_ = param_12;
    auVar49._0_4_ = param_12;
    auVar49._8_4_ = param_12;
    auVar49._12_4_ = param_12;
    auVar49._16_4_ = param_12;
    auVar49._20_4_ = param_12;
    auVar49._24_4_ = param_12;
    auVar49._28_4_ = param_12;
    lVar18 = 0x10;
    uVar19 = 0;
    uVar16 = 0;
    do {
      auVar41 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
      auVar42 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
      auVar26 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar18 * 4);
      auVar28 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar18 * 4);
      auVar29 = *(undefined1 (*) [32])(param_3 + lVar18 * 4);
      auVar27 = vblendps_avx(auVar28,auVar26,0x24);
      auVar26 = vpermt2ps_avx512vl(auVar26,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar28);
      auVar27 = vpermt2ps_avx512vl(auVar27,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar29);
      auVar28 = vpermt2ps_avx512vl(auVar29,auVar43,auVar28);
      auVar29 = vinsertf32x4_avx512vl(auVar26,auVar28._0_16_,1);
      auVar30 = vbroadcastss_avx512vl(ZEXT416(param_8[8]));
      auVar26 = vshuff64x2_avx512vl(auVar26,auVar28,3);
      auVar28 = vmulps_avx512vl(auVar29,auVar30);
      auVar31 = vbroadcastss_avx512vl(ZEXT416(param_8[9]));
      fVar2 = (float)param_8[10];
      auVar58._4_4_ = fVar2;
      auVar58._0_4_ = fVar2;
      auVar58._8_4_ = fVar2;
      auVar58._12_4_ = fVar2;
      auVar58._16_4_ = fVar2;
      auVar58._20_4_ = fVar2;
      auVar58._24_4_ = fVar2;
      auVar58._28_4_ = fVar2;
      auVar26 = vmulps_avx512vl(auVar26,auVar31);
      auVar37._0_4_ = auVar27._0_4_ * fVar2;
      auVar37._4_4_ = auVar27._4_4_ * fVar2;
      auVar37._8_4_ = auVar27._8_4_ * fVar2;
      auVar37._12_4_ = auVar27._12_4_ * fVar2;
      auVar37._16_4_ = auVar27._16_4_ * fVar2;
      auVar37._20_4_ = auVar27._20_4_ * fVar2;
      auVar37._24_4_ = auVar27._24_4_ * fVar2;
      auVar37._28_4_ = auVar27._28_4_ * fVar2;
      auVar32 = vbroadcastss_avx512vl(ZEXT416(param_8[3]));
      auVar33 = vbroadcastss_avx512vl(ZEXT416(param_8[1]));
      auVar34 = vbroadcastss_avx512vl(ZEXT416(param_8[2]));
      auVar35 = vbroadcastss_avx512vl(ZEXT416(*param_8));
      auVar29 = vmulps_avx512vl(auVar28,auVar33);
      auVar27 = vmulps_avx512vl(auVar26,auVar34);
      auVar36 = vmulps_avx512vl(auVar37,auVar35);
      auVar29 = vfmsub231ps_avx512vl(auVar29,auVar26,auVar35);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar37,auVar33);
      auVar36 = vfmsub231ps_avx512vl(auVar36,auVar28,auVar34);
      auVar39._0_4_ = auVar27._0_4_ + auVar27._0_4_;
      auVar39._4_4_ = auVar27._4_4_ + auVar27._4_4_;
      auVar39._8_4_ = auVar27._8_4_ + auVar27._8_4_;
      auVar39._12_4_ = auVar27._12_4_ + auVar27._12_4_;
      auVar39._16_4_ = auVar27._16_4_ + auVar27._16_4_;
      auVar39._20_4_ = auVar27._20_4_ + auVar27._20_4_;
      auVar39._24_4_ = auVar27._24_4_ + auVar27._24_4_;
      auVar39._28_4_ = auVar27._28_4_ + auVar27._28_4_;
      auVar40._0_4_ = auVar36._0_4_ + auVar36._0_4_;
      auVar40._4_4_ = auVar36._4_4_ + auVar36._4_4_;
      auVar40._8_4_ = auVar36._8_4_ + auVar36._8_4_;
      auVar40._12_4_ = auVar36._12_4_ + auVar36._12_4_;
      auVar40._16_4_ = auVar36._16_4_ + auVar36._16_4_;
      auVar40._20_4_ = auVar36._20_4_ + auVar36._20_4_;
      auVar40._24_4_ = auVar36._24_4_ + auVar36._24_4_;
      auVar40._28_4_ = auVar36._28_4_ + auVar36._28_4_;
      auVar38._0_4_ = auVar29._0_4_ + auVar29._0_4_;
      auVar38._4_4_ = auVar29._4_4_ + auVar29._4_4_;
      auVar38._8_4_ = auVar29._8_4_ + auVar29._8_4_;
      auVar38._12_4_ = auVar29._12_4_ + auVar29._12_4_;
      auVar38._16_4_ = auVar29._16_4_ + auVar29._16_4_;
      auVar38._20_4_ = auVar29._20_4_ + auVar29._20_4_;
      auVar38._24_4_ = auVar29._24_4_ + auVar29._24_4_;
      auVar38._28_4_ = auVar29._28_4_ + auVar29._28_4_;
      auVar28 = vfmadd231ps_avx512vl(auVar28,auVar32,auVar39);
      auVar26 = vfmadd231ps_avx512vl(auVar26,auVar32,auVar40);
      auVar29 = vfmadd231ps_avx512vl(auVar37,auVar32,auVar38);
      auVar27 = vmulps_avx512vl(auVar33,auVar39);
      auVar36 = vmulps_avx512vl(auVar34,auVar40);
      auVar37 = vmulps_avx512vl(auVar35,auVar38);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar35,auVar40);
      auVar36 = vfmsub231ps_avx512vl(auVar36,auVar33,auVar38);
      auVar37 = vfmsub231ps_avx512vl(auVar37,auVar34,auVar39);
      fVar3 = (float)param_8[4];
      fVar4 = (float)param_8[5];
      fVar5 = (float)param_8[6];
      auVar61._0_4_ = auVar36._0_4_ + auVar28._0_4_ + fVar3;
      auVar61._4_4_ = auVar36._4_4_ + auVar28._4_4_ + fVar3;
      auVar61._8_4_ = auVar36._8_4_ + auVar28._8_4_ + fVar3;
      auVar61._12_4_ = auVar36._12_4_ + auVar28._12_4_ + fVar3;
      auVar61._16_4_ = auVar36._16_4_ + auVar28._16_4_ + fVar3;
      auVar61._20_4_ = auVar36._20_4_ + auVar28._20_4_ + fVar3;
      auVar61._24_4_ = auVar36._24_4_ + auVar28._24_4_ + fVar3;
      auVar61._28_4_ = auVar36._28_4_ + auVar28._28_4_ + fVar3;
      auVar36._0_4_ = fVar4 + auVar26._0_4_ + auVar37._0_4_;
      auVar36._4_4_ = fVar4 + auVar26._4_4_ + auVar37._4_4_;
      auVar36._8_4_ = fVar4 + auVar26._8_4_ + auVar37._8_4_;
      auVar36._12_4_ = fVar4 + auVar26._12_4_ + auVar37._12_4_;
      auVar36._16_4_ = fVar4 + auVar26._16_4_ + auVar37._16_4_;
      auVar36._20_4_ = fVar4 + auVar26._20_4_ + auVar37._20_4_;
      auVar36._24_4_ = fVar4 + auVar26._24_4_ + auVar37._24_4_;
      auVar36._28_4_ = fVar4 + auVar26._28_4_ + auVar37._28_4_;
      auVar63._0_4_ = fVar5 + auVar29._0_4_ + auVar27._0_4_;
      auVar63._4_4_ = fVar5 + auVar29._4_4_ + auVar27._4_4_;
      auVar63._8_4_ = fVar5 + auVar29._8_4_ + auVar27._8_4_;
      auVar63._12_4_ = fVar5 + auVar29._12_4_ + auVar27._12_4_;
      auVar63._16_4_ = fVar5 + auVar29._16_4_ + auVar27._16_4_;
      auVar63._20_4_ = fVar5 + auVar29._20_4_ + auVar27._20_4_;
      auVar63._24_4_ = fVar5 + auVar29._24_4_ + auVar27._24_4_;
      auVar63._28_4_ = fVar5 + auVar29._28_4_ + auVar27._28_4_;
      uVar6 = *param_9;
      auVar60._4_4_ = uVar6;
      auVar60._0_4_ = uVar6;
      auVar60._8_4_ = uVar6;
      auVar60._12_4_ = uVar6;
      auVar60._16_4_ = uVar6;
      auVar60._20_4_ = uVar6;
      auVar60._24_4_ = uVar6;
      auVar60._28_4_ = uVar6;
      auVar29 = vsubps_avx(auVar61,auVar60);
      uVar6 = param_9[1];
      auVar26._4_4_ = uVar6;
      auVar26._0_4_ = uVar6;
      auVar26._8_4_ = uVar6;
      auVar26._12_4_ = uVar6;
      auVar26._16_4_ = uVar6;
      auVar26._20_4_ = uVar6;
      auVar26._24_4_ = uVar6;
      auVar26._28_4_ = uVar6;
      auVar27 = vsubps_avx(auVar36,auVar26);
      uVar6 = param_9[2];
      auVar62._4_4_ = uVar6;
      auVar62._0_4_ = uVar6;
      auVar62._8_4_ = uVar6;
      auVar62._12_4_ = uVar6;
      auVar62._16_4_ = uVar6;
      auVar62._20_4_ = uVar6;
      auVar62._24_4_ = uVar6;
      auVar62._28_4_ = uVar6;
      auVar36 = vsubps_avx(auVar63,auVar62);
      auVar28 = *(undefined1 (*) [32])(param_6 + (uVar16 & 0xffffffff));
      auVar37 = vunpcklps_avx(auVar29,auVar27);
      auVar38 = vunpcklps_avx512vl(auVar36,auVar28);
      auVar39 = vunpcklpd_avx512vl(auVar37,auVar38);
      auVar37 = vunpckhpd_avx512vl(auVar37,auVar38);
      auVar38 = vunpckhps_avx512vl(auVar29,auVar27);
      auVar28 = vunpckhps_avx(auVar36,auVar28);
      auVar40 = vunpcklpd_avx512vl(auVar38,auVar28);
      auVar28 = vunpckhpd_avx512vl(auVar38,auVar28);
      auVar38 = vinsertf32x4_avx512vl(auVar39,auVar37._0_16_,1);
      *(undefined1 (*) [32])(param_1 + uVar16 * 4) = auVar38;
      auVar38 = vinsertf32x4_avx512vl(auVar40,auVar28._0_16_,1);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar16 * 4) = auVar38;
      auVar37 = vshuff64x2_avx512vl(auVar39,auVar37,3);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar16 * 4) = auVar37;
      auVar28 = vshuff64x2_avx512vl(auVar40,auVar28,3);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar16 * 4) = auVar28;
      auVar28 = vpermt2ps_avx512vl(auVar36,auVar44,auVar27);
      auVar37 = vpermt2ps_avx512vl(auVar29,auVar46,auVar27);
      auVar37 = vpermt2ps_avx512vl(auVar37,auVar45,auVar28);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar18 * 4) = auVar37;
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar47,auVar29);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar18 * 4) = auVar28;
      auVar28 = vpermt2ps_avx512vl(auVar27,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar29);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar48,auVar36);
      *(undefined1 (*) [32])(param_3 + lVar18 * 4) = auVar28;
      auVar28 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar18 * 4);
      auVar29 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar18 * 4);
      auVar27 = *(undefined1 (*) [32])(param_2 + lVar18 * 4);
      auVar36 = vblendps_avx(auVar29,auVar28,0x24);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar42,auVar29);
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar41,auVar27);
      auVar29 = vpermt2ps_avx512vl(auVar27,auVar43,auVar29);
      auVar27 = vinsertf32x4_avx512vl(auVar28,auVar29._0_16_,1);
      auVar28 = vshuff64x2_avx512vl(auVar28,auVar29,3);
      auVar29 = vmulps_avx512vl(auVar27,auVar30);
      auVar28 = vmulps_avx512vl(auVar28,auVar31);
      auVar27 = vmulps_avx512vl(auVar36,auVar58);
      auVar36 = vmulps_avx512vl(auVar29,auVar33);
      auVar37 = vmulps_avx512vl(auVar28,auVar34);
      auVar38 = vmulps_avx512vl(auVar27,auVar35);
      auVar36 = vfmsub231ps_avx512vl(auVar36,auVar28,auVar35);
      auVar37 = vfmsub231ps_avx512vl(auVar37,auVar27,auVar33);
      auVar38 = vfmsub231ps_avx512vl(auVar38,auVar29,auVar34);
      auVar37 = vaddps_avx512vl(auVar37,auVar37);
      auVar59._0_4_ = auVar38._0_4_ + auVar38._0_4_;
      auVar59._4_4_ = auVar38._4_4_ + auVar38._4_4_;
      auVar59._8_4_ = auVar38._8_4_ + auVar38._8_4_;
      auVar59._12_4_ = auVar38._12_4_ + auVar38._12_4_;
      auVar59._16_4_ = auVar38._16_4_ + auVar38._16_4_;
      auVar59._20_4_ = auVar38._20_4_ + auVar38._20_4_;
      auVar59._24_4_ = auVar38._24_4_ + auVar38._24_4_;
      auVar59._28_4_ = auVar38._28_4_ + auVar38._28_4_;
      auVar36 = vaddps_avx512vl(auVar36,auVar36);
      auVar29 = vfmadd231ps_avx512vl(auVar29,auVar32,auVar37);
      auVar28 = vfmadd231ps_avx512vl(auVar28,auVar32,auVar59);
      auVar27 = vfmadd231ps_avx512vl(auVar27,auVar32,auVar36);
      auVar38 = vmulps_avx512vl(auVar33,auVar37);
      auVar39 = vmulps_avx512vl(auVar34,auVar59);
      auVar40 = vmulps_avx512vl(auVar35,auVar36);
      auVar38 = vfmsub231ps_avx512vl(auVar38,auVar35,auVar59);
      local_140 = vaddps_avx512vl(auVar27,auVar38);
      auVar27 = vfmsub231ps_avx512vl(auVar39,auVar33,auVar36);
      local_180._0_4_ = auVar27._0_4_ + auVar29._0_4_;
      local_180._4_4_ = auVar27._4_4_ + auVar29._4_4_;
      local_180._8_4_ = auVar27._8_4_ + auVar29._8_4_;
      local_180._12_4_ = auVar27._12_4_ + auVar29._12_4_;
      local_180._16_4_ = auVar27._16_4_ + auVar29._16_4_;
      local_180._20_4_ = auVar27._20_4_ + auVar29._20_4_;
      local_180._24_4_ = auVar27._24_4_ + auVar29._24_4_;
      local_180._28_4_ = auVar27._28_4_ + auVar29._28_4_;
      auVar29 = vfmsub231ps_avx512vl(auVar40,auVar34,auVar37);
      local_160 = vaddps_avx512vl(auVar28,auVar29);
      auVar28 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar18 * 4);
      auVar29 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar18 * 4);
      auVar27 = *(undefined1 (*) [32])(param_4 + lVar18 * 4);
      auVar36 = vblendps_avx(auVar29,auVar28,0x24);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar42,auVar29);
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar41,auVar27);
      auVar29 = vpermt2ps_avx512vl(auVar27,auVar43,auVar29);
      auVar27 = vinsertf32x4_avx512vl(auVar28,auVar29._0_16_,1);
      auVar28 = vshuff64x2_avx512vl(auVar28,auVar29,3);
      auVar29 = vmulps_avx512vl(auVar27,auVar30);
      auVar28 = vmulps_avx512vl(auVar28,auVar31);
      auVar41._0_4_ = auVar36._0_4_ * fVar2;
      auVar41._4_4_ = auVar36._4_4_ * fVar2;
      auVar41._8_4_ = auVar36._8_4_ * fVar2;
      auVar41._12_4_ = auVar36._12_4_ * fVar2;
      auVar41._16_4_ = auVar36._16_4_ * fVar2;
      auVar41._20_4_ = auVar36._20_4_ * fVar2;
      auVar41._24_4_ = auVar36._24_4_ * fVar2;
      auVar41._28_4_ = auVar36._28_4_ * fVar2;
      auVar27 = vmulps_avx512vl(auVar29,auVar33);
      auVar36 = vmulps_avx512vl(auVar28,auVar34);
      auVar37 = vmulps_avx512vl(auVar41,auVar35);
      auVar27 = vfmsub231ps_avx512vl(auVar27,auVar28,auVar35);
      auVar36 = vfmsub231ps_avx512vl(auVar36,auVar41,auVar33);
      auVar37 = vfmsub231ps_avx512vl(auVar37,auVar29,auVar34);
      auVar36 = vaddps_avx512vl(auVar36,auVar36);
      auVar37 = vaddps_avx512vl(auVar37,auVar37);
      auVar27 = vaddps_avx512vl(auVar27,auVar27);
      auVar29 = vfmadd231ps_avx512vl(auVar29,auVar32,auVar36);
      auVar28 = vfmadd231ps_avx512vl(auVar28,auVar32,auVar37);
      auVar41 = vfmadd213ps_avx512vl(auVar32,auVar27,auVar41);
      auVar30 = vmulps_avx512vl(auVar33,auVar36);
      auVar31 = vmulps_avx512vl(auVar34,auVar37);
      auVar32 = vmulps_avx512vl(auVar35,auVar27);
      auVar37 = vfmsub231ps_avx512vl(auVar30,auVar35,auVar37);
      auVar37 = vaddps_avx512vl(auVar41,auVar37);
      auVar27 = vfmsub231ps_avx512vl(auVar31,auVar33,auVar27);
      auVar29 = vaddps_avx512vl(auVar29,auVar27);
      auVar27 = vfmsub231ps_avx512vl(auVar32,auVar34,auVar36);
      auVar28 = vaddps_avx512vl(auVar28,auVar27);
      auVar27._0_4_ = fVar3 + auVar29._0_4_;
      auVar27._4_4_ = fVar3 + auVar29._4_4_;
      auVar27._8_4_ = fVar3 + auVar29._8_4_;
      auVar27._12_4_ = fVar3 + auVar29._12_4_;
      auVar27._16_4_ = fVar3 + auVar29._16_4_;
      auVar27._20_4_ = fVar3 + auVar29._20_4_;
      auVar27._24_4_ = fVar3 + auVar29._24_4_;
      auVar27._28_4_ = fVar3 + auVar29._28_4_;
      auVar29._0_4_ = fVar4 + auVar28._0_4_;
      auVar29._4_4_ = fVar4 + auVar28._4_4_;
      auVar29._8_4_ = fVar4 + auVar28._8_4_;
      auVar29._12_4_ = fVar4 + auVar28._12_4_;
      auVar29._16_4_ = fVar4 + auVar28._16_4_;
      auVar29._20_4_ = fVar4 + auVar28._20_4_;
      auVar29._24_4_ = fVar4 + auVar28._24_4_;
      auVar29._28_4_ = fVar4 + auVar28._28_4_;
      auVar30._0_4_ = fVar5 + auVar37._0_4_;
      auVar30._4_4_ = fVar5 + auVar37._4_4_;
      auVar30._8_4_ = fVar5 + auVar37._8_4_;
      auVar30._12_4_ = fVar5 + auVar37._12_4_;
      auVar30._16_4_ = fVar5 + auVar37._16_4_;
      auVar30._20_4_ = fVar5 + auVar37._20_4_;
      auVar30._24_4_ = fVar5 + auVar37._24_4_;
      auVar30._28_4_ = fVar5 + auVar37._28_4_;
      auVar36 = vsubps_avx(auVar27,auVar60);
      auVar37 = vsubps_avx(auVar29,auVar26);
      auVar41 = vsubps_avx(auVar30,auVar62);
      auVar28 = vpermt2ps_avx512vl(auVar41,auVar44,auVar37);
      auVar29 = vpermt2ps_avx512vl(auVar36,auVar46,auVar37);
      auVar29 = vpermt2ps_avx512vl(auVar29,auVar45,auVar28);
      *(undefined1 (*) [32])(param_4 + -0x40 + lVar18 * 4) = auVar29;
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar47,auVar36);
      *(undefined1 (*) [32])(param_4 + -0x20 + lVar18 * 4) = auVar28;
      auVar30 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar28 = vpermt2ps_avx512vl(auVar37,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar36);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar48,auVar41);
      *(undefined1 (*) [32])(param_4 + lVar18 * 4) = auVar28;
      auVar28 = *(undefined1 (*) [32])(param_7 + -0x40 + lVar18 * 4);
      auVar29 = *(undefined1 (*) [32])(param_7 + -0x20 + lVar18 * 4);
      auVar27 = *(undefined1 (*) [32])(param_7 + lVar18 * 4);
      auVar42 = vpermt2ps_avx512vl(auVar28,auVar42,auVar29);
      auVar31 = vpermt2ps_avx512vl(auVar27,auVar43,auVar29);
      auVar32 = vinsertf32x4_avx512vl(auVar42,auVar31._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar42,auVar31,3);
      auVar28 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a
                                   ,auVar28);
      auVar28 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000
                                   ,auVar27);
      auVar29 = vsubps_avx512vl(auVar32,auVar36);
      auVar27 = vsubps_avx512vl(auVar42,auVar37);
      auVar36 = vsubps_avx512vl(auVar28,auVar41);
      auVar28._4_4_ = param_10;
      auVar28._0_4_ = param_10;
      auVar28._8_4_ = param_10;
      auVar28._12_4_ = param_10;
      auVar28._16_4_ = param_10;
      auVar28._20_4_ = param_10;
      auVar28._24_4_ = param_10;
      auVar28._28_4_ = param_10;
      auVar29 = vdivps_avx512vl(auVar29,auVar28);
      auVar27 = vdivps_avx512vl(auVar27,auVar28);
      auVar28 = vdivps_avx512vl(auVar36,auVar28);
      auVar36 = vpermt2ps_avx512vl(auVar28,auVar44,auVar27);
      auVar37 = vpermt2ps_avx512vl(auVar29,auVar46,auVar27);
      auVar37 = vpermt2ps_avx512vl(auVar37,auVar45,auVar36);
      *(undefined1 (*) [32])(param_5 + -0x40 + lVar18 * 4) = auVar37;
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar47,auVar29);
      *(undefined1 (*) [32])(param_5 + -0x20 + lVar18 * 4) = auVar36;
      auVar36 = vpermt2ps_avx512vl(auVar27,auVar30,auVar29);
      auVar36 = vpermt2ps_avx512vl(auVar36,auVar48,auVar28);
      *(undefined1 (*) [32])(param_5 + lVar18 * 4) = auVar36;
      auVar36 = vsubps_avx512vl(local_180,auVar29);
      auVar37 = vsubps_avx512vl(local_160,auVar27);
      auVar41 = vsubps_avx512vl(local_140,auVar28);
      auVar42 = vmulps_avx512vl(auVar37,auVar37);
      auVar42 = vfmadd231ps_avx512vl(auVar42,auVar36,auVar36);
      auVar42 = vfmadd231ps_avx512vl(auVar42,auVar41,auVar41);
      uVar17 = vcmpps_avx512vl(auVar49,auVar42,1);
      bVar21 = (byte)uVar17;
      if (bVar21 != 0) {
        auVar42 = vdivps_avx(auVar49,auVar42);
        auVar42 = vsqrtps_avx(auVar42);
        auVar29 = vfmadd213ps_avx512vl(auVar36,auVar42,auVar29);
        auVar27 = vfmadd213ps_avx512vl(auVar37,auVar42,auVar27);
        auVar28 = vfmadd213ps_avx512vl(auVar41,auVar42,auVar28);
        bVar7 = (bool)((byte)(uVar17 >> 1) & 1);
        bVar8 = (bool)((byte)(uVar17 >> 2) & 1);
        bVar9 = (bool)((byte)(uVar17 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar17 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar17 >> 5) & 1);
        bVar12 = (bool)((byte)(uVar17 >> 6) & 1);
        bVar13 = SUB81(uVar17 >> 7,0);
        local_180._4_4_ = (uint)bVar7 * auVar29._4_4_ | (uint)!bVar7 * local_180._4_4_;
        local_180._0_4_ =
             (uint)(bVar21 & 1) * auVar29._0_4_ | (uint)!(bool)(bVar21 & 1) * local_180._0_4_;
        local_180._8_4_ = (uint)bVar8 * auVar29._8_4_ | (uint)!bVar8 * local_180._8_4_;
        local_180._12_4_ = (uint)bVar9 * auVar29._12_4_ | (uint)!bVar9 * local_180._12_4_;
        local_180._16_4_ = (uint)bVar10 * auVar29._16_4_ | (uint)!bVar10 * local_180._16_4_;
        local_180._20_4_ = (uint)bVar11 * auVar29._20_4_ | (uint)!bVar11 * local_180._20_4_;
        local_180._24_4_ = (uint)bVar12 * auVar29._24_4_ | (uint)!bVar12 * local_180._24_4_;
        local_180._28_4_ = (uint)bVar13 * auVar29._28_4_ | (uint)!bVar13 * local_180._28_4_;
        bVar7 = (bool)((byte)(uVar17 >> 1) & 1);
        bVar8 = (bool)((byte)(uVar17 >> 2) & 1);
        bVar9 = (bool)((byte)(uVar17 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar17 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar17 >> 5) & 1);
        bVar12 = (bool)((byte)(uVar17 >> 6) & 1);
        bVar13 = SUB81(uVar17 >> 7,0);
        local_160._4_4_ = (uint)bVar7 * auVar27._4_4_ | (uint)!bVar7 * local_160._4_4_;
        local_160._0_4_ =
             (uint)(bVar21 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar21 & 1) * local_160._0_4_;
        local_160._8_4_ = (uint)bVar8 * auVar27._8_4_ | (uint)!bVar8 * local_160._8_4_;
        local_160._12_4_ = (uint)bVar9 * auVar27._12_4_ | (uint)!bVar9 * local_160._12_4_;
        local_160._16_4_ = (uint)bVar10 * auVar27._16_4_ | (uint)!bVar10 * local_160._16_4_;
        local_160._20_4_ = (uint)bVar11 * auVar27._20_4_ | (uint)!bVar11 * local_160._20_4_;
        local_160._24_4_ = (uint)bVar12 * auVar27._24_4_ | (uint)!bVar12 * local_160._24_4_;
        local_160._28_4_ = (uint)bVar13 * auVar27._28_4_ | (uint)!bVar13 * local_160._28_4_;
        bVar7 = (bool)((byte)(uVar17 >> 1) & 1);
        bVar8 = (bool)((byte)(uVar17 >> 2) & 1);
        bVar9 = (bool)((byte)(uVar17 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar17 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar17 >> 5) & 1);
        bVar12 = (bool)((byte)(uVar17 >> 6) & 1);
        bVar13 = SUB81(uVar17 >> 7,0);
        local_140._4_4_ = (uint)bVar7 * auVar28._4_4_ | (uint)!bVar7 * local_140._4_4_;
        local_140._0_4_ =
             (uint)(bVar21 & 1) * auVar28._0_4_ | (uint)!(bool)(bVar21 & 1) * local_140._0_4_;
        local_140._8_4_ = (uint)bVar8 * auVar28._8_4_ | (uint)!bVar8 * local_140._8_4_;
        local_140._12_4_ = (uint)bVar9 * auVar28._12_4_ | (uint)!bVar9 * local_140._12_4_;
        local_140._16_4_ = (uint)bVar10 * auVar28._16_4_ | (uint)!bVar10 * local_140._16_4_;
        local_140._20_4_ = (uint)bVar11 * auVar28._20_4_ | (uint)!bVar11 * local_140._20_4_;
        local_140._24_4_ = (uint)bVar12 * auVar28._24_4_ | (uint)!bVar12 * local_140._24_4_;
        local_140._28_4_ = (uint)bVar13 * auVar28._28_4_ | (uint)!bVar13 * local_140._28_4_;
      }
      auVar28 = vpermt2ps_avx512vl(local_140,auVar44,local_160);
      auVar29 = vpermt2ps_avx512vl(local_180,auVar46,local_160);
      auVar29 = vpermt2ps_avx512vl(auVar29,auVar45,auVar28);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar18 * 4) = auVar29;
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar47,local_180);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar18 * 4) = auVar28;
      auVar28 = vpermt2ps_avx512vl(local_160,
                                   ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,local_180);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar48,local_140);
      *(undefined1 (*) [32])(param_2 + lVar18 * 4) = auVar28;
      uVar16 = uVar16 + 0x20;
      lVar18 = lVar18 + 0x18;
      uVar19 = uVar19 + 8;
    } while ((int)uVar19 < (int)(uVar20 & 0xfffffff8));
  }
  if ((int)uVar19 < (int)param_11) {
    auVar43 = vpbroadcastd_avx512vl();
    auVar43 = vpor_avx2(auVar43,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar44 = vpbroadcastd_avx512vl();
    uVar16 = vpcmpgtd_avx512vl(auVar44,auVar43);
    uVar17 = (ulonglong)uVar19;
    pauVar15 = (undefined1 (*) [32])(param_3 + uVar17 * 0xc);
    bVar21 = (byte)uVar16;
    if (bVar21 == 0xff) {
      auVar43 = pauVar15[1];
      auVar44 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar15,auVar43);
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar15[2],auVar43);
      auVar46._16_16_ = auVar45._0_16_;
      auVar46._0_16_ = auVar44._0_16_;
      auVar44 = vperm2f128_avx(auVar44,auVar45,0x31);
      auVar43 = vblendps_avx(auVar43,*pauVar15,0x24);
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar43,pauVar15[2]);
    }
    else {
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_5));
      auVar46._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * auVar43._4_4_;
      auVar46._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_;
      auVar46._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * auVar43._8_4_;
      auVar46._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * auVar43._12_4_;
      auVar46._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar46._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar46._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar46._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_5));
      auVar44._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * auVar43._4_4_;
      auVar44._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_;
      auVar44._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * auVar43._8_4_;
      auVar44._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * auVar43._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_5));
      auVar43._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * auVar45._4_4_;
      auVar43._0_4_ = (uint)(bVar21 & 1) * auVar45._0_4_;
      auVar43._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * auVar45._8_4_;
      auVar43._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * auVar45._12_4_;
      auVar43._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar45._16_4_;
      auVar43._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar45._20_4_;
      auVar43._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar45._24_4_;
      auVar43._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar45._28_4_;
    }
    pauVar14 = (undefined1 (*) [32])(param_1 + uVar17 * 0x10);
    auVar45 = vbroadcastss_avx512vl(ZEXT416(param_8[8]));
    auVar46 = vmulps_avx512vl(auVar46,auVar45);
    auVar47 = vbroadcastss_avx512vl(ZEXT416(param_8[9]));
    auVar44 = vmulps_avx512vl(auVar44,auVar47);
    auVar48 = vbroadcastss_avx512vl(ZEXT416(param_8[10]));
    auVar43 = vmulps_avx512vl(auVar43,auVar48);
    uVar20 = param_8[3];
    auVar25._4_4_ = uVar20;
    auVar25._0_4_ = uVar20;
    auVar25._8_4_ = uVar20;
    auVar25._12_4_ = uVar20;
    auVar32._16_4_ = uVar20;
    auVar32._0_16_ = auVar25;
    auVar32._20_4_ = uVar20;
    auVar32._24_4_ = uVar20;
    auVar32._28_4_ = uVar20;
    uVar20 = param_8[1];
    auVar33._4_4_ = uVar20;
    auVar33._0_4_ = uVar20;
    auVar33._8_4_ = uVar20;
    auVar33._12_4_ = uVar20;
    auVar33._16_4_ = uVar20;
    auVar33._20_4_ = uVar20;
    auVar33._24_4_ = uVar20;
    auVar33._28_4_ = uVar20;
    uVar20 = param_8[2];
    auVar31._4_4_ = uVar20;
    auVar31._0_4_ = uVar20;
    auVar31._8_4_ = uVar20;
    auVar31._12_4_ = uVar20;
    auVar31._16_4_ = uVar20;
    auVar31._20_4_ = uVar20;
    auVar31._24_4_ = uVar20;
    auVar31._28_4_ = uVar20;
    uVar20 = *param_8;
    auVar34._4_4_ = uVar20;
    auVar34._0_4_ = uVar20;
    auVar34._8_4_ = uVar20;
    auVar34._12_4_ = uVar20;
    auVar34._16_4_ = uVar20;
    auVar34._20_4_ = uVar20;
    auVar34._24_4_ = uVar20;
    auVar34._28_4_ = uVar20;
    auVar49 = vmulps_avx512vl(auVar46,auVar33);
    auVar28 = vmulps_avx512vl(auVar44,auVar31);
    auVar29 = vmulps_avx512vl(auVar43,auVar34);
    auVar49 = vfmsub231ps_avx512vl(auVar49,auVar44,auVar34);
    auVar28 = vfmsub231ps_avx512vl(auVar28,auVar43,auVar33);
    auVar29 = vfmsub231ps_avx512vl(auVar29,auVar46,auVar31);
    auVar28 = vaddps_avx512vl(auVar28,auVar28);
    auVar29 = vaddps_avx512vl(auVar29,auVar29);
    auVar49 = vaddps_avx512vl(auVar49,auVar49);
    auVar46 = vfmadd231ps_avx512vl(auVar46,auVar32,auVar28);
    auVar44 = vfmadd231ps_avx512vl(auVar44,auVar32,auVar29);
    auVar43 = vfmadd231ps_avx512vl(auVar43,auVar32,auVar49);
    auVar27 = vmulps_avx512vl(auVar33,auVar28);
    auVar36 = vmulps_avx512vl(auVar31,auVar29);
    auVar37 = vmulps_avx512vl(auVar34,auVar49);
    auVar29 = vfmsub231ps_avx512vl(auVar27,auVar34,auVar29);
    auVar43 = vaddps_avx512vl(auVar43,auVar29);
    auVar49 = vfmsub231ps_avx512vl(auVar36,auVar33,auVar49);
    auVar46 = vaddps_avx512vl(auVar46,auVar49);
    auVar49 = vfmsub231ps_avx512vl(auVar37,auVar31,auVar28);
    auVar28 = vbroadcastss_avx512vl(ZEXT416(param_8[4]));
    auVar29 = vbroadcastss_avx512vl(ZEXT416(param_8[5]));
    auVar44 = vaddps_avx512vl(auVar44,auVar49);
    auVar49 = vbroadcastss_avx512vl(ZEXT416(param_8[6]));
    auVar46 = vaddps_avx512vl(auVar28,auVar46);
    auVar44 = vaddps_avx512vl(auVar29,auVar44);
    auVar43 = vaddps_avx512vl(auVar49,auVar43);
    auVar27 = vbroadcastss_avx512vl(ZEXT416(*param_9));
    auVar46 = vsubps_avx512vl(auVar46,auVar27);
    auVar36 = vbroadcastss_avx512vl(ZEXT416(param_9[1]));
    auVar44 = vsubps_avx512vl(auVar44,auVar36);
    auVar37 = vbroadcastss_avx512vl(ZEXT416(param_9[2]));
    auVar43 = vsubps_avx512vl(auVar43,auVar37);
    piVar1 = (int *)(param_6 + (int)(uVar19 << 2));
    auVar42._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * piVar1[1];
    auVar42._0_4_ = (uint)(bVar21 & 1) * *piVar1;
    auVar42._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * piVar1[2];
    auVar42._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * piVar1[3];
    auVar42._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * piVar1[4];
    auVar42._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * piVar1[5];
    auVar42._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * piVar1[6];
    auVar42._28_4_ = (uint)(byte)(uVar16 >> 7) * piVar1[7];
    if (bVar21 == 0xff) {
      auVar26 = vunpcklps_avx512vl(auVar46,auVar44);
      auVar41 = vunpcklps_avx512vl(auVar43,auVar42);
      auVar30 = vunpcklpd_avx512vl(auVar26,auVar41);
      auVar26 = vunpckhpd_avx(auVar26,auVar41);
      auVar41 = vunpckhps_avx512vl(auVar46,auVar44);
      auVar42 = vunpckhps_avx512vl(auVar43,auVar42);
      auVar35 = vunpcklpd_avx512vl(auVar41,auVar42);
      auVar41 = vunpckhpd_avx512vl(auVar41,auVar42);
      auVar42 = vinsertf32x4_avx512vl(auVar30,auVar26._0_16_,1);
      *pauVar14 = auVar42;
      auVar42 = vinsertf32x4_avx512vl(auVar35,auVar41._0_16_,1);
      pauVar14[1] = auVar42;
      auVar26 = vshuff64x2_avx512vl(auVar30,auVar26,3);
      pauVar14[2] = auVar26;
      auVar26 = vshuff64x2_avx512vl(auVar35,auVar41,3);
      pauVar14[3] = auVar26;
      auVar26 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar43,auVar44);
      auVar41 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar46,auVar44);
      auVar41 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar41,auVar26);
      *pauVar15 = auVar41;
      auVar26 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar26,auVar46);
      pauVar15[1] = auVar26;
      auVar44 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar44,auVar46);
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar44,auVar43);
      pauVar15[2] = auVar43;
      pauVar15 = (undefined1 (*) [32])(param_2 + uVar17 * 0xc);
      auVar43 = *(undefined1 (*) [32])(param_2 + uVar17 * 0xc);
      auVar44 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar17 * 0xc);
      auVar46 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar17 * 0xc);
      auVar26 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar43,auVar44);
      auVar41 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar46,auVar44);
      auVar50 = vinsertf32x4_avx512vl(auVar26,auVar41._0_16_,1);
      auVar35 = vshuff64x2_avx512vl(auVar26,auVar41,3);
      auVar43 = vblendps_avx(auVar44,auVar43,0x24);
      auVar51 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar43,auVar46);
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar16,
                 auVar46);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar16,
                 auVar44);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar16,
                 auVar43);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar16,
                 auVar42);
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar16,
                 auVar46);
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar16,
                 auVar44);
      vscatterdps_avx512vl(ZEXT832(pauVar15) + auVar26,uVar16,auVar43);
      pauVar15 = (undefined1 (*) [32])(param_2 + uVar17 * 0xc);
      auVar24 = vxorps_avx512vl(auVar43._0_16_,auVar43._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_5));
      auVar50._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar24._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar50._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar24._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar50._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar24._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar50._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar24._12_4_;
      auVar50._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar50._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar50._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar50._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar24 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar15 * 2));
      auVar35._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar24._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar35._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar24._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar35._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar24._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar35._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar24._12_4_;
      auVar35._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar35._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar35._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar35._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar24 = vxorps_avx512vl(auVar46._0_16_,auVar46._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + uVar17 * 0x10));
      auVar51._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar24._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar51._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar24._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar51._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar24._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar51._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar24._12_4_;
      auVar51._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar51._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar51._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar51._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
    }
    auVar43 = vmulps_avx512vl(auVar50,auVar45);
    auVar44 = vmulps_avx512vl(auVar35,auVar47);
    auVar46 = vmulps_avx512vl(auVar51,auVar48);
    auVar26 = vmulps_avx512vl(auVar43,auVar33);
    auVar41 = vmulps_avx512vl(auVar44,auVar31);
    auVar42 = vmulps_avx512vl(auVar46,auVar34);
    auVar26 = vfmsub231ps_avx512vl(auVar26,auVar44,auVar34);
    auVar41 = vfmsub231ps_avx512vl(auVar41,auVar46,auVar33);
    auVar42 = vfmsub231ps_avx512vl(auVar42,auVar43,auVar31);
    auVar41 = vaddps_avx512vl(auVar41,auVar41);
    auVar42 = vaddps_avx512vl(auVar42,auVar42);
    auVar26 = vaddps_avx512vl(auVar26,auVar26);
    auVar30 = vbroadcastss_avx512vl(auVar25);
    auVar43 = vfmadd231ps_avx512vl(auVar43,auVar30,auVar41);
    auVar44 = vfmadd231ps_avx512vl(auVar44,auVar30,auVar42);
    auVar46 = vfmadd213ps_avx512vl(auVar30,auVar26,auVar46);
    auVar30 = vmulps_avx512vl(auVar33,auVar41);
    auVar35 = vmulps_avx512vl(auVar31,auVar42);
    auVar38 = vmulps_avx512vl(auVar34,auVar26);
    auVar30 = vfmsub231ps_avx512vl(auVar30,auVar34,auVar42);
    local_1a0 = vaddps_avx512vl(auVar46,auVar30);
    auVar26 = vfmsub231ps_avx512vl(auVar35,auVar33,auVar26);
    local_1e0 = vaddps_avx512vl(auVar43,auVar26);
    auVar43 = vfmsub231ps_avx512vl(auVar38,auVar31,auVar41);
    local_1c0 = vaddps_avx512vl(auVar44,auVar43);
    pauVar14 = (undefined1 (*) [32])(param_4 + uVar17 * 0xc);
    if (bVar21 == 0xff) {
      auVar43 = pauVar14[1];
      auVar44 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar14,auVar43);
      auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar14[2],auVar43);
      auVar52 = vinsertf32x4_avx512vl(auVar44,auVar46._0_16_,1);
      auVar53 = vshuff64x2_avx512vl(auVar44,auVar46,3);
      auVar43 = vblendps_avx(auVar43,*pauVar14,0x24);
      auVar54 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar43,pauVar14[2]);
    }
    else {
      auVar25 = vxorps_avx512vl(auVar42._0_16_,auVar42._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + param_5));
      auVar52._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar52._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar52._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar52._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar52._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar52._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar52._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar52._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar25 = vxorps_avx512vl(auVar46._0_16_,auVar46._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + param_5));
      auVar53._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar53._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar53._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar53._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar53._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar53._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar53._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar53._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
      auVar25 = vxorps_avx512vl(auVar26._0_16_,auVar26._0_16_);
      auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + param_5));
      auVar54._0_4_ = (uint)(bVar21 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar54._4_4_ = (uint)bVar7 * auVar43._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar54._8_4_ = (uint)bVar7 * auVar43._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar54._12_4_ = (uint)bVar7 * auVar43._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar54._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar43._16_4_;
      auVar54._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar43._20_4_;
      auVar54._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar43._24_4_;
      auVar54._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar43._28_4_;
    }
    auVar43 = vmulps_avx512vl(auVar52,auVar45);
    auVar44 = vmulps_avx512vl(auVar53,auVar47);
    auVar46 = vmulps_avx512vl(auVar54,auVar48);
    auVar45 = vmulps_avx512vl(auVar43,auVar33);
    auVar47 = vmulps_avx512vl(auVar44,auVar31);
    auVar48 = vmulps_avx512vl(auVar46,auVar34);
    auVar45 = vfmsub231ps_avx512vl(auVar45,auVar44,auVar34);
    auVar47 = vfmsub231ps_avx512vl(auVar47,auVar46,auVar33);
    auVar48 = vfmsub231ps_avx512vl(auVar48,auVar43,auVar31);
    auVar47 = vaddps_avx512vl(auVar47,auVar47);
    auVar48 = vaddps_avx512vl(auVar48,auVar48);
    auVar45 = vaddps_avx512vl(auVar45,auVar45);
    auVar43 = vfmadd231ps_avx512vl(auVar43,auVar32,auVar47);
    auVar44 = vfmadd231ps_avx512vl(auVar44,auVar32,auVar48);
    auVar46 = vfmadd213ps_avx512vl(auVar32,auVar45,auVar46);
    auVar26 = vmulps_avx512vl(auVar33,auVar47);
    auVar41 = vmulps_avx512vl(auVar31,auVar48);
    auVar42 = vmulps_avx512vl(auVar34,auVar45);
    auVar48 = vfmsub231ps_avx512vl(auVar26,auVar34,auVar48);
    auVar46 = vaddps_avx512vl(auVar46,auVar48);
    auVar26 = vfmsub231ps_avx512vl(auVar41,auVar33,auVar45);
    auVar43 = vaddps_avx512vl(auVar43,auVar26);
    auVar47 = vfmsub231ps_avx512vl(auVar42,auVar31,auVar47);
    auVar44 = vaddps_avx512vl(auVar44,auVar47);
    auVar43 = vaddps_avx512vl(auVar28,auVar43);
    auVar44 = vaddps_avx512vl(auVar29,auVar44);
    auVar46 = vaddps_avx512vl(auVar49,auVar46);
    auVar43 = vsubps_avx512vl(auVar43,auVar27);
    auVar44 = vsubps_avx512vl(auVar44,auVar36);
    auVar46 = vsubps_avx512vl(auVar46,auVar37);
    if (bVar21 == 0xff) {
      auVar45 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar46,auVar44);
      auVar47 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar43,auVar44);
      auVar47 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar47,auVar45);
      *pauVar14 = auVar47;
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar45,auVar43);
      pauVar14[1] = auVar45;
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar44,auVar43);
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar45,auVar46);
      pauVar14[2] = auVar45;
      auVar45 = *(undefined1 (*) [32])(param_7 + uVar17 * 0xc);
      auVar47 = *(undefined1 (*) [32])(param_7 + 0x20 + uVar17 * 0xc);
      auVar48 = *(undefined1 (*) [32])(param_7 + 0x40 + uVar17 * 0xc);
      auVar26 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar45,auVar47);
      auVar49 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar48,auVar47);
      auVar55 = vinsertf32x4_avx512vl(auVar26,auVar49._0_16_,1);
      auVar56 = vshuff64x2_avx512vl(auVar26,auVar49,3);
      auVar45 = vblendps_avx(auVar47,auVar45,0x24);
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar45,auVar48);
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar16,
                 auVar43);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar16,
                 auVar44);
      vscatterdps_avx512vl(ZEXT832(pauVar14) + auVar43,uVar16,auVar46);
      param_7 = param_7 + uVar17 * 0xc;
      auVar47 = vgatherdps_avx512vl(*(undefined4 *)(param_7 + param_5));
      auVar55._4_4_ = (uint)((byte)(uVar16 >> 1) & 1) * auVar47._4_4_;
      auVar55._0_4_ = (uint)(bVar21 & 1) * auVar47._0_4_;
      auVar55._8_4_ = (uint)((byte)(uVar16 >> 2) & 1) * auVar47._8_4_;
      auVar55._12_4_ = (uint)((byte)(uVar16 >> 3) & 1) * auVar47._12_4_;
      auVar55._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar47._16_4_;
      auVar55._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar47._20_4_;
      auVar55._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar47._24_4_;
      auVar55._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar47._28_4_;
      auVar25 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
      auVar47 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar15 + param_7));
      auVar56._0_4_ = (uint)(bVar21 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar56._4_4_ = (uint)bVar7 * auVar47._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar56._8_4_ = (uint)bVar7 * auVar47._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar56._12_4_ = (uint)bVar7 * auVar47._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar56._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar47._16_4_;
      auVar56._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar47._20_4_;
      auVar56._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar47._24_4_;
      auVar56._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar47._28_4_;
      auVar25 = vxorps_avx512vl(auVar45._0_16_,auVar45._0_16_);
      auVar47 = vgatherdps_avx512vl(*(undefined4 *)(param_7 + param_2));
      auVar45._0_4_ = (uint)(bVar21 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar25._0_4_
      ;
      bVar7 = (bool)((byte)(uVar16 >> 1) & 1);
      auVar45._4_4_ = (uint)bVar7 * auVar47._4_4_ | (uint)!bVar7 * auVar25._4_4_;
      bVar7 = (bool)((byte)(uVar16 >> 2) & 1);
      auVar45._8_4_ = (uint)bVar7 * auVar47._8_4_ | (uint)!bVar7 * auVar25._8_4_;
      bVar7 = (bool)((byte)(uVar16 >> 3) & 1);
      auVar45._12_4_ = (uint)bVar7 * auVar47._12_4_ | (uint)!bVar7 * auVar25._12_4_;
      auVar45._16_4_ = (uint)((byte)(uVar16 >> 4) & 1) * auVar47._16_4_;
      auVar45._20_4_ = (uint)((byte)(uVar16 >> 5) & 1) * auVar47._20_4_;
      auVar45._24_4_ = (uint)((byte)(uVar16 >> 6) & 1) * auVar47._24_4_;
      auVar45._28_4_ = (uint)(byte)(uVar16 >> 7) * auVar47._28_4_;
    }
    auVar43 = vsubps_avx(auVar55,auVar43);
    auVar44 = vsubps_avx512vl(auVar56,auVar44);
    auVar46 = vsubps_avx512vl(auVar45,auVar46);
    auVar47._4_4_ = param_10;
    auVar47._0_4_ = param_10;
    auVar47._8_4_ = param_10;
    auVar47._12_4_ = param_10;
    auVar47._16_4_ = param_10;
    auVar47._20_4_ = param_10;
    auVar47._24_4_ = param_10;
    auVar47._28_4_ = param_10;
    auVar43 = vdivps_avx(auVar43,auVar47);
    auVar44 = vdivps_avx(auVar44,auVar47);
    auVar46 = vdivps_avx(auVar46,auVar47);
    pauVar14 = (undefined1 (*) [32])(param_5 + uVar17 * 0xc);
    if (bVar21 == 0xff) {
      auVar45 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar46,auVar44);
      auVar47 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar43,auVar44);
      auVar47 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar47,auVar45);
      *pauVar14 = auVar47;
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar45,auVar43);
      pauVar14[1] = auVar45;
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar44,auVar43);
      auVar45 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar45,auVar46);
      pauVar14[2] = auVar45;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar16,
                 auVar43);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar16,
                 auVar44);
      vscatterdps_avx512vl
                (ZEXT832(pauVar14) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar16,
                 auVar46);
    }
    auVar45 = vsubps_avx512vl(local_1e0,auVar43);
    auVar47 = vsubps_avx512vl(local_1c0,auVar44);
    auVar48 = vsubps_avx512vl(local_1a0,auVar46);
    auVar26 = vmulps_avx512vl(auVar47,auVar47);
    auVar26 = vfmadd231ps_avx512vl(auVar26,auVar45,auVar45);
    auVar26 = vfmadd231ps_avx512vl(auVar26,auVar48,auVar48);
    auVar57._4_4_ = param_12;
    auVar57._0_4_ = param_12;
    auVar57._8_4_ = param_12;
    auVar57._12_4_ = param_12;
    auVar57._16_4_ = param_12;
    auVar57._20_4_ = param_12;
    auVar57._24_4_ = param_12;
    auVar57._28_4_ = param_12;
    uVar23 = vcmpps_avx512vl(auVar57,auVar26,1);
    uVar23 = uVar16 & uVar23;
    bVar22 = (byte)uVar23;
    if (bVar22 != 0) {
      auVar26 = vdivps_avx512vl(auVar57,auVar26);
      auVar26 = vsqrtps_avx(auVar26);
      auVar46 = vfmadd213ps_avx512vl(auVar48,auVar26,auVar46);
      bVar7 = (bool)((byte)(uVar23 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar23 >> 2) & 1);
      bVar9 = (bool)((byte)(uVar23 >> 3) & 1);
      bVar10 = (bool)((byte)(uVar23 >> 4) & 1);
      bVar11 = (bool)((byte)(uVar23 >> 5) & 1);
      bVar12 = (bool)((byte)(uVar23 >> 6) & 1);
      bVar13 = SUB81(uVar23 >> 7,0);
      local_1e0._4_4_ =
           (uint)bVar7 * (int)(auVar26._4_4_ * auVar45._4_4_ + auVar43._4_4_) |
           (uint)!bVar7 * local_1e0._4_4_;
      local_1e0._0_4_ =
           (uint)(bVar22 & 1) * (int)(auVar26._0_4_ * auVar45._0_4_ + auVar43._0_4_) |
           (uint)!(bool)(bVar22 & 1) * local_1e0._0_4_;
      local_1e0._8_4_ =
           (uint)bVar8 * (int)(auVar26._8_4_ * auVar45._8_4_ + auVar43._8_4_) |
           (uint)!bVar8 * local_1e0._8_4_;
      local_1e0._12_4_ =
           (uint)bVar9 * (int)(auVar26._12_4_ * auVar45._12_4_ + auVar43._12_4_) |
           (uint)!bVar9 * local_1e0._12_4_;
      local_1e0._16_4_ =
           (uint)bVar10 * (int)(auVar26._16_4_ * auVar45._16_4_ + auVar43._16_4_) |
           (uint)!bVar10 * local_1e0._16_4_;
      local_1e0._20_4_ =
           (uint)bVar11 * (int)(auVar26._20_4_ * auVar45._20_4_ + auVar43._20_4_) |
           (uint)!bVar11 * local_1e0._20_4_;
      local_1e0._24_4_ =
           (uint)bVar12 * (int)(auVar26._24_4_ * auVar45._24_4_ + auVar43._24_4_) |
           (uint)!bVar12 * local_1e0._24_4_;
      local_1e0._28_4_ =
           (uint)bVar13 * (int)(auVar26._28_4_ * auVar45._28_4_ + auVar43._28_4_) |
           (uint)!bVar13 * local_1e0._28_4_;
      bVar7 = (bool)((byte)(uVar23 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar23 >> 2) & 1);
      bVar9 = (bool)((byte)(uVar23 >> 3) & 1);
      bVar10 = (bool)((byte)(uVar23 >> 4) & 1);
      bVar11 = (bool)((byte)(uVar23 >> 5) & 1);
      bVar12 = (bool)((byte)(uVar23 >> 6) & 1);
      bVar13 = SUB81(uVar23 >> 7,0);
      local_1c0._4_4_ =
           (uint)bVar7 * (int)(auVar26._4_4_ * auVar47._4_4_ + auVar44._4_4_) |
           (uint)!bVar7 * local_1c0._4_4_;
      local_1c0._0_4_ =
           (uint)(bVar22 & 1) * (int)(auVar26._0_4_ * auVar47._0_4_ + auVar44._0_4_) |
           (uint)!(bool)(bVar22 & 1) * local_1c0._0_4_;
      local_1c0._8_4_ =
           (uint)bVar8 * (int)(auVar26._8_4_ * auVar47._8_4_ + auVar44._8_4_) |
           (uint)!bVar8 * local_1c0._8_4_;
      local_1c0._12_4_ =
           (uint)bVar9 * (int)(auVar26._12_4_ * auVar47._12_4_ + auVar44._12_4_) |
           (uint)!bVar9 * local_1c0._12_4_;
      local_1c0._16_4_ =
           (uint)bVar10 * (int)(auVar26._16_4_ * auVar47._16_4_ + auVar44._16_4_) |
           (uint)!bVar10 * local_1c0._16_4_;
      local_1c0._20_4_ =
           (uint)bVar11 * (int)(auVar26._20_4_ * auVar47._20_4_ + auVar44._20_4_) |
           (uint)!bVar11 * local_1c0._20_4_;
      local_1c0._24_4_ =
           (uint)bVar12 * (int)(auVar26._24_4_ * auVar47._24_4_ + auVar44._24_4_) |
           (uint)!bVar12 * local_1c0._24_4_;
      local_1c0._28_4_ =
           (uint)bVar13 * (int)(auVar26._28_4_ * auVar47._28_4_ + auVar44._28_4_) |
           (uint)!bVar13 * local_1c0._28_4_;
      bVar7 = (bool)((byte)(uVar23 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar23 >> 2) & 1);
      bVar9 = (bool)((byte)(uVar23 >> 3) & 1);
      bVar10 = (bool)((byte)(uVar23 >> 4) & 1);
      bVar11 = (bool)((byte)(uVar23 >> 5) & 1);
      bVar12 = (bool)((byte)(uVar23 >> 6) & 1);
      bVar13 = SUB81(uVar23 >> 7,0);
      local_1a0._4_4_ = (uint)bVar7 * auVar46._4_4_ | (uint)!bVar7 * local_1a0._4_4_;
      local_1a0._0_4_ =
           (uint)(bVar22 & 1) * auVar46._0_4_ | (uint)!(bool)(bVar22 & 1) * local_1a0._0_4_;
      local_1a0._8_4_ = (uint)bVar8 * auVar46._8_4_ | (uint)!bVar8 * local_1a0._8_4_;
      local_1a0._12_4_ = (uint)bVar9 * auVar46._12_4_ | (uint)!bVar9 * local_1a0._12_4_;
      local_1a0._16_4_ = (uint)bVar10 * auVar46._16_4_ | (uint)!bVar10 * local_1a0._16_4_;
      local_1a0._20_4_ = (uint)bVar11 * auVar46._20_4_ | (uint)!bVar11 * local_1a0._20_4_;
      local_1a0._24_4_ = (uint)bVar12 * auVar46._24_4_ | (uint)!bVar12 * local_1a0._24_4_;
      local_1a0._28_4_ = (uint)bVar13 * auVar46._28_4_ | (uint)!bVar13 * local_1a0._28_4_;
    }
    if (bVar21 == 0xff) {
      auVar43 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,local_1a0,local_1c0);
      auVar44 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,local_1e0,local_1c0);
      auVar44 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar44,auVar43);
      auVar48._8_8_ = local_1e0._24_8_;
      auVar48._0_8_ = local_1e0._24_8_;
      auVar48._16_8_ = local_1e0._24_8_;
      auVar48._24_8_ = local_1e0._24_8_;
      *pauVar15 = auVar44;
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar43,local_1e0);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar17 * 0xc) = auVar43;
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000900000008
                                   ,local_1c0,auVar48);
      auVar43 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar43,local_1a0);
      *(undefined1 (*) [32])(param_2 + 0x40 + uVar17 * 0xc) = auVar43;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar16,
                 local_1e0);
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar16,
                 local_1c0);
      vscatterdps_avx512vl
                (ZEXT832(pauVar15) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar16,
                 local_1a0);
    }
  }
  return;
}

// ApplyPreSimulationTransformsAndClampVelocity_avx512skx @ 140cd2880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformsAndClampVelocity_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,undefined4 *param_9,
               uint *param_10,uint param_11,int param_12,int param_13,uint param_14)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [32];
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [32];
  uint uVar27;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong lVar28;
  byte bVar29;
  byte bVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
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
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar33 [16];
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
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  float fVar97;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  float fVar108;
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM17 [64];
  undefined1 auVar109 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar110 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar111 [16];
  undefined1 in_ZMM20 [64];
  undefined1 auVar112 [16];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM24 [64];
  undefined1 local_320 [32];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
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
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 local_120 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 auVar56 [32];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  
  auVar71 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar70 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar69 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar92 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar54 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  uVar17 = __real_0000000c;
  uVar16 = __real_00000008;
  uVar15 = __real_00000004;
  auVar55 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar89 = in_ZMM10._0_32_;
  auVar91 = in_ZMM11._0_32_;
  auVar112 = in_ZMM21._0_16_;
  auVar111 = in_ZMM20._0_16_;
  auVar110 = in_ZMM19._0_16_;
  auVar109 = in_ZMM18._0_16_;
  auVar33 = in_ZMM17._0_16_;
  auVar32 = in_ZMM16._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  uVar27 = param_13 - param_12;
  uVar18 = uVar27 + 7;
  if (-1 < (int)uVar27) {
    uVar18 = uVar27;
  }
  iVar19 = ((uVar18 & 0xfffffff8) - uVar27) + param_13;
  if (param_12 < iVar19) {
    local_260 = param_11;
    uStack_25c = param_11;
    uStack_258 = param_11;
    uStack_254 = param_11;
    uStack_250 = param_11;
    uStack_24c = param_11;
    uStack_248 = param_11;
    uStack_244 = param_11;
    auVar72._4_4_ = param_14;
    auVar72._0_4_ = param_14;
    auVar72._8_4_ = param_14;
    auVar72._12_4_ = param_14;
    auVar72._16_4_ = param_14;
    auVar72._20_4_ = param_14;
    auVar72._24_4_ = param_14;
    auVar72._28_4_ = param_14;
    unaff_R13 = (longlong)param_12;
    lVar20 = (longlong)iVar19;
    lVar14 = unaff_R13 * 0xc;
    lVar28 = param_3 + 0x40;
    pauVar26 = (undefined1 (*) [32])(param_1 + unaff_R13 * 0x10 + 0x60);
    lVar23 = param_2 + 0x40;
    lVar25 = param_4 + 0x40;
    lVar24 = param_7 + 0x40;
    lVar21 = param_5 + 0x40;
    param_12 = param_12 << 2;
    local_140 = __real_00000004;
    uStack_13c = __real_00000004;
    uStack_138 = __real_00000004;
    uStack_134 = __real_00000004;
    uStack_130 = __real_00000004;
    uStack_12c = __real_00000004;
    uStack_128 = __real_00000004;
    uStack_124 = __real_00000004;
    local_160 = __real_00000008;
    uStack_15c = __real_00000008;
    uStack_158 = __real_00000008;
    uStack_154 = __real_00000008;
    uStack_150 = __real_00000008;
    uStack_14c = __real_00000008;
    uStack_148 = __real_00000008;
    uStack_144 = __real_00000008;
    local_180 = __real_0000000c;
    uStack_17c = __real_0000000c;
    uStack_178 = __real_0000000c;
    uStack_174 = __real_0000000c;
    uStack_170 = __real_0000000c;
    uStack_16c = __real_0000000c;
    uStack_168 = __real_0000000c;
    uStack_164 = __real_0000000c;
    local_1a0 = __real_00000010;
    uStack_19c = __real_00000010;
    uStack_198 = __real_00000010;
    uStack_194 = __real_00000010;
    uStack_190 = __real_00000010;
    uStack_18c = __real_00000010;
    uStack_188 = __real_00000010;
    uStack_184 = __real_00000010;
    local_1c0 = __real_00000014;
    uStack_1bc = __real_00000014;
    uStack_1b8 = __real_00000014;
    uStack_1b4 = __real_00000014;
    uStack_1b0 = __real_00000014;
    uStack_1ac = __real_00000014;
    uStack_1a8 = __real_00000014;
    uStack_1a4 = __real_00000014;
    local_1e0 = __real_00000018;
    uStack_1dc = __real_00000018;
    uStack_1d8 = __real_00000018;
    uStack_1d4 = __real_00000018;
    uStack_1d0 = __real_00000018;
    uStack_1cc = __real_00000018;
    uStack_1c8 = __real_00000018;
    uStack_1c4 = __real_00000018;
    local_200 = __real_00000020;
    uStack_1fc = __real_00000020;
    uStack_1f8 = __real_00000020;
    uStack_1f4 = __real_00000020;
    uStack_1f0 = __real_00000020;
    uStack_1ec = __real_00000020;
    uStack_1e8 = __real_00000020;
    uStack_1e4 = __real_00000020;
    local_220 = __real_00000024;
    uStack_21c = __real_00000024;
    uStack_218 = __real_00000024;
    uStack_214 = __real_00000024;
    uStack_210 = __real_00000024;
    uStack_20c = __real_00000024;
    uStack_208 = __real_00000024;
    uStack_204 = __real_00000024;
    local_240 = __real_00000028;
    uStack_23c = __real_00000028;
    uStack_238 = __real_00000028;
    uStack_234 = __real_00000028;
    uStack_230 = __real_00000028;
    uStack_22c = __real_00000028;
    uStack_228 = __real_00000028;
    uStack_224 = __real_00000028;
    do {
      auVar53 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
      auVar89 = *(undefined1 (*) [32])(param_8 + param_12);
      vpslld_avx2(auVar89,2);
      auVar34 = vgatherdps_avx512vl(param_9[lVar21 * 2]);
      auVar91 = vpslld_avx2(auVar89,4);
      auVar89 = vpslld_avx2(auVar89,5);
      auVar42._0_4_ = auVar89._0_4_ + auVar91._0_4_;
      auVar42._4_4_ = auVar89._4_4_ + auVar91._4_4_;
      auVar42._8_4_ = auVar89._8_4_ + auVar91._8_4_;
      auVar42._12_4_ = auVar89._12_4_ + auVar91._12_4_;
      auVar42._16_4_ = auVar89._16_4_ + auVar91._16_4_;
      auVar42._20_4_ = auVar89._20_4_ + auVar91._20_4_;
      auVar42._24_4_ = auVar89._24_4_ + auVar91._24_4_;
      auVar42._28_4_ = auVar89._28_4_ + auVar91._28_4_;
      auVar89._4_4_ = uVar15;
      auVar89._0_4_ = uVar15;
      auVar89._8_4_ = uVar15;
      auVar89._12_4_ = uVar15;
      auVar89._16_4_ = uVar15;
      auVar89._20_4_ = uVar15;
      auVar89._24_4_ = uVar15;
      auVar89._28_4_ = uVar15;
      vpor_avx2(auVar42,auVar89);
      auVar89 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      auVar91._4_4_ = uVar16;
      auVar91._0_4_ = uVar16;
      auVar91._8_4_ = uVar16;
      auVar91._12_4_ = uVar16;
      auVar91._16_4_ = uVar16;
      auVar91._20_4_ = uVar16;
      auVar91._24_4_ = uVar16;
      auVar91._28_4_ = uVar16;
      vpor_avx2(auVar42,auVar91);
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      auVar43._4_4_ = uVar17;
      auVar43._0_4_ = uVar17;
      auVar43._8_4_ = uVar17;
      auVar43._12_4_ = uVar17;
      auVar43._16_4_ = uVar17;
      auVar43._20_4_ = uVar17;
      auVar43._24_4_ = uVar17;
      auVar43._28_4_ = uVar17;
      vpor_avx2(auVar42,auVar43);
      auVar35 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      fVar83 = auVar35._8_4_;
      fVar84 = auVar35._12_4_;
      fVar85 = auVar35._16_4_;
      fVar86 = auVar35._20_4_;
      fVar87 = auVar35._24_4_;
      fVar88 = auVar35._28_4_;
      auVar36 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      auVar37 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      auVar38 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar20));
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      auVar39 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + lVar21));
      in_ZMM24 = ZEXT3264(auVar39);
      auVar40 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + (longlong)(local_2c0 + 8)));
      auVar41 = vgatherdps_avx512vl(*param_9);
      auVar42 = *(undefined1 (*) [32])(lVar28 + -0x40 + lVar14);
      auVar44 = *(undefined1 (*) [32])(lVar28 + -0x20 + lVar14);
      auVar43 = vblendps_avx(auVar44,auVar42,0x24);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar43,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(lVar28 + lVar14));
      auVar44 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar28 + lVar14),auVar55,auVar44);
      auVar45 = vinsertf32x4_avx512vl(auVar42,auVar44._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar42,auVar44,3);
      auVar44 = vmulps_avx512vl(auVar39,auVar45);
      auVar48._0_4_ = auVar40._0_4_ * auVar42._0_4_;
      auVar48._4_4_ = auVar40._4_4_ * auVar42._4_4_;
      auVar48._8_4_ = auVar40._8_4_ * auVar42._8_4_;
      auVar48._12_4_ = auVar40._12_4_ * auVar42._12_4_;
      auVar48._16_4_ = auVar40._16_4_ * auVar42._16_4_;
      auVar48._20_4_ = auVar40._20_4_ * auVar42._20_4_;
      auVar48._24_4_ = auVar40._24_4_ * auVar42._24_4_;
      auVar48._28_4_ = auVar40._28_4_ * auVar42._28_4_;
      auVar42 = vmulps_avx512vl(auVar41,auVar43);
      auVar43 = vmulps_avx512vl(auVar89,auVar44);
      auVar46._0_4_ = auVar91._0_4_ * auVar48._0_4_;
      auVar46._4_4_ = auVar91._4_4_ * auVar48._4_4_;
      auVar46._8_4_ = auVar91._8_4_ * auVar48._8_4_;
      auVar46._12_4_ = auVar91._12_4_ * auVar48._12_4_;
      auVar46._16_4_ = auVar91._16_4_ * auVar48._16_4_;
      auVar46._20_4_ = auVar91._20_4_ * auVar48._20_4_;
      auVar46._24_4_ = auVar91._24_4_ * auVar48._24_4_;
      auVar46._28_4_ = auVar91._28_4_ * auVar48._28_4_;
      auVar45 = vmulps_avx512vl(auVar34,auVar42);
      auVar43 = vfmsub231ps_avx512vl(auVar43,auVar34,auVar48);
      auVar46 = vfmsub231ps_avx512vl(auVar46,auVar89,auVar42);
      fVar97 = auVar91._0_4_ * auVar44._0_4_ - auVar45._0_4_;
      fVar100 = auVar91._4_4_ * auVar44._4_4_ - auVar45._4_4_;
      fVar101 = auVar91._8_4_ * auVar44._8_4_ - auVar45._8_4_;
      fVar102 = auVar91._12_4_ * auVar44._12_4_ - auVar45._12_4_;
      fVar103 = auVar91._16_4_ * auVar44._16_4_ - auVar45._16_4_;
      fVar104 = auVar91._20_4_ * auVar44._20_4_ - auVar45._20_4_;
      fVar105 = auVar91._24_4_ * auVar44._24_4_ - auVar45._24_4_;
      fVar107 = auVar91._28_4_ * auVar44._28_4_ - auVar45._28_4_;
      auVar96._0_4_ = auVar46._0_4_ + auVar46._0_4_;
      auVar96._4_4_ = auVar46._4_4_ + auVar46._4_4_;
      auVar96._8_4_ = auVar46._8_4_ + auVar46._8_4_;
      auVar96._12_4_ = auVar46._12_4_ + auVar46._12_4_;
      auVar96._16_4_ = auVar46._16_4_ + auVar46._16_4_;
      auVar96._20_4_ = auVar46._20_4_ + auVar46._20_4_;
      auVar96._24_4_ = auVar46._24_4_ + auVar46._24_4_;
      auVar96._28_4_ = auVar46._28_4_ + auVar46._28_4_;
      auVar98._0_4_ = fVar97 + fVar97;
      auVar98._4_4_ = fVar100 + fVar100;
      auVar98._8_4_ = fVar101 + fVar101;
      auVar98._12_4_ = fVar102 + fVar102;
      auVar98._16_4_ = fVar103 + fVar103;
      auVar98._20_4_ = fVar104 + fVar104;
      auVar98._24_4_ = fVar105 + fVar105;
      auVar98._28_4_ = fVar107 + fVar107;
      auVar43 = vaddps_avx512vl(auVar43,auVar43);
      fVar106 = auVar35._0_4_;
      auVar52._0_4_ = fVar106 * auVar96._0_4_ + auVar44._0_4_;
      fVar108 = auVar35._4_4_;
      auVar52._4_4_ = fVar108 * auVar96._4_4_ + auVar44._4_4_;
      auVar52._8_4_ = fVar83 * auVar96._8_4_ + auVar44._8_4_;
      auVar52._12_4_ = fVar84 * auVar96._12_4_ + auVar44._12_4_;
      auVar52._16_4_ = fVar85 * auVar96._16_4_ + auVar44._16_4_;
      auVar52._20_4_ = fVar86 * auVar96._20_4_ + auVar44._20_4_;
      auVar52._24_4_ = fVar87 * auVar96._24_4_ + auVar44._24_4_;
      auVar52._28_4_ = fVar88 * auVar96._28_4_ + auVar44._28_4_;
      auVar49._0_4_ = fVar106 * auVar98._0_4_ + auVar48._0_4_;
      auVar49._4_4_ = fVar108 * auVar98._4_4_ + auVar48._4_4_;
      auVar49._8_4_ = fVar83 * auVar98._8_4_ + auVar48._8_4_;
      auVar49._12_4_ = fVar84 * auVar98._12_4_ + auVar48._12_4_;
      auVar49._16_4_ = fVar85 * auVar98._16_4_ + auVar48._16_4_;
      auVar49._20_4_ = fVar86 * auVar98._20_4_ + auVar48._20_4_;
      auVar49._24_4_ = fVar87 * auVar98._24_4_ + auVar48._24_4_;
      auVar49._28_4_ = fVar88 * auVar98._28_4_ + auVar48._28_4_;
      auVar42 = vfmadd231ps_avx512vl(auVar42,auVar35,auVar43);
      auVar44 = vmulps_avx512vl(auVar89,auVar96);
      auVar45 = vmulps_avx512vl(auVar91,auVar98);
      auVar46 = vmulps_avx512vl(auVar34,auVar43);
      auVar44 = vfmsub231ps_avx512vl(auVar44,auVar34,auVar98);
      auVar42 = vaddps_avx512vl(auVar42,auVar44);
      auVar44 = vfmsub231ps_avx512vl(auVar45,auVar89,auVar43);
      auVar44 = vaddps_avx512vl(auVar52,auVar44);
      auVar43 = vfmsub231ps_avx512vl(auVar46,auVar91,auVar96);
      auVar43 = vaddps_avx512vl(auVar49,auVar43);
      auVar45._0_4_ = auVar36._0_4_ + auVar44._0_4_;
      auVar45._4_4_ = auVar36._4_4_ + auVar44._4_4_;
      auVar45._8_4_ = auVar36._8_4_ + auVar44._8_4_;
      auVar45._12_4_ = auVar36._12_4_ + auVar44._12_4_;
      auVar45._16_4_ = auVar36._16_4_ + auVar44._16_4_;
      auVar45._20_4_ = auVar36._20_4_ + auVar44._20_4_;
      auVar45._24_4_ = auVar36._24_4_ + auVar44._24_4_;
      auVar45._28_4_ = auVar36._28_4_ + auVar44._28_4_;
      auVar50._0_4_ = auVar37._0_4_ + auVar43._0_4_;
      auVar50._4_4_ = auVar37._4_4_ + auVar43._4_4_;
      auVar50._8_4_ = auVar37._8_4_ + auVar43._8_4_;
      auVar50._12_4_ = auVar37._12_4_ + auVar43._12_4_;
      auVar50._16_4_ = auVar37._16_4_ + auVar43._16_4_;
      auVar50._20_4_ = auVar37._20_4_ + auVar43._20_4_;
      auVar50._24_4_ = auVar37._24_4_ + auVar43._24_4_;
      auVar50._28_4_ = auVar37._28_4_ + auVar43._28_4_;
      local_120 = vbroadcastss_avx512vl(ZEXT416(*param_10));
      auVar42 = vaddps_avx512vl(auVar38,auVar42);
      auVar45 = vsubps_avx512vl(auVar45,local_120);
      uVar18 = param_10[1];
      auVar99._4_4_ = uVar18;
      auVar99._0_4_ = uVar18;
      auVar99._8_4_ = uVar18;
      auVar99._12_4_ = uVar18;
      auVar99._16_4_ = uVar18;
      auVar99._20_4_ = uVar18;
      auVar99._24_4_ = uVar18;
      auVar99._28_4_ = uVar18;
      auVar46 = vbroadcastss_avx512vl(ZEXT416(param_10[2]));
      auVar44 = vsubps_avx(auVar50,auVar99);
      auVar47 = vsubps_avx512vl(auVar42,auVar46);
      auVar42 = *(undefined1 (*) [32])(param_6 + param_12);
      auVar43 = vunpcklps_avx512vl(auVar45,auVar44);
      auVar48 = vunpcklps_avx512vl(auVar47,auVar42);
      auVar49 = vunpcklpd_avx512vl(auVar43,auVar48);
      auVar48 = vunpckhpd_avx512vl(auVar43,auVar48);
      auVar43 = vunpckhps_avx(auVar45,auVar44);
      auVar42 = vunpckhps_avx512vl(auVar47,auVar42);
      auVar50 = vunpcklpd_avx512vl(auVar43,auVar42);
      auVar42 = vunpckhpd_avx512vl(auVar43,auVar42);
      auVar43 = vinsertf32x4_avx512vl(auVar49,auVar48._0_16_,1);
      pauVar26[-3] = auVar43;
      auVar43 = vinsertf32x4_avx512vl(auVar50,auVar42._0_16_,1);
      pauVar26[-2] = auVar43;
      auVar43 = vshuff64x2_avx512vl(auVar49,auVar48,3);
      pauVar26[-1] = auVar43;
      auVar42 = vshuff64x2_avx512vl(auVar50,auVar42,3);
      *pauVar26 = auVar42;
      auVar42 = vpermt2ps_avx512vl(auVar47,auVar54,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar45,auVar92,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar69,auVar42);
      *(undefined1 (*) [32])(lVar28 + -0x40 + lVar14) = auVar43;
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar70,auVar45);
      *(undefined1 (*) [32])(lVar28 + -0x20 + lVar14) = auVar42;
      auVar42 = vpermt2ps_avx512vl(auVar44,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar45);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar71,auVar47);
      *(undefined1 (*) [32])(lVar28 + lVar14) = auVar42;
      auVar45 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
      auVar42 = *(undefined1 (*) [32])(lVar23 + -0x40 + lVar14);
      auVar44 = *(undefined1 (*) [32])(lVar23 + -0x20 + lVar14);
      auVar43 = vblendps_avx(auVar44,auVar42,0x24);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar53,*(undefined1 (*) [32])(lVar23 + lVar14));
      auVar44 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar23 + lVar14),auVar55,auVar44);
      auVar47 = vinsertf32x4_avx512vl(auVar42,auVar44._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar42,auVar44,3);
      auVar44 = vmulps_avx512vl(auVar39,auVar47);
      auVar42 = vmulps_avx512vl(auVar40,auVar42);
      auVar51._0_4_ = auVar41._0_4_ * auVar43._0_4_;
      auVar51._4_4_ = auVar41._4_4_ * auVar43._4_4_;
      auVar51._8_4_ = auVar41._8_4_ * auVar43._8_4_;
      auVar51._12_4_ = auVar41._12_4_ * auVar43._12_4_;
      auVar51._16_4_ = auVar41._16_4_ * auVar43._16_4_;
      auVar51._20_4_ = auVar41._20_4_ * auVar43._20_4_;
      auVar51._24_4_ = auVar41._24_4_ * auVar43._24_4_;
      auVar51._28_4_ = auVar41._28_4_ * auVar43._28_4_;
      auVar43 = vmulps_avx512vl(auVar89,auVar44);
      auVar47 = vmulps_avx512vl(auVar91,auVar42);
      auVar48 = vmulps_avx512vl(auVar34,auVar51);
      auVar43 = vfmsub231ps_avx512vl(auVar43,auVar34,auVar42);
      auVar47 = vfmsub231ps_avx512vl(auVar47,auVar89,auVar51);
      auVar48 = vfmsub231ps_avx512vl(auVar48,auVar91,auVar44);
      auVar47 = vaddps_avx512vl(auVar47,auVar47);
      auVar48 = vaddps_avx512vl(auVar48,auVar48);
      auVar43 = vaddps_avx512vl(auVar43,auVar43);
      auVar44 = vfmadd231ps_avx512vl(auVar44,auVar35,auVar47);
      auVar42 = vfmadd231ps_avx512vl(auVar42,auVar35,auVar48);
      auVar49 = vfmadd231ps_avx512vl(auVar51,auVar35,auVar43);
      auVar50 = vmulps_avx512vl(auVar89,auVar47);
      auVar51 = vmulps_avx512vl(auVar91,auVar48);
      auVar52 = vmulps_avx512vl(auVar34,auVar43);
      auVar48 = vfmsub231ps_avx512vl(auVar50,auVar34,auVar48);
      local_280 = vaddps_avx512vl(auVar49,auVar48);
      auVar43 = vfmsub231ps_avx512vl(auVar51,auVar89,auVar43);
      local_2c0 = vaddps_avx512vl(auVar44,auVar43);
      auVar44 = vfmsub231ps_avx512vl(auVar52,auVar91,auVar47);
      local_2a0 = vaddps_avx512vl(auVar42,auVar44);
      auVar42 = *(undefined1 (*) [32])(lVar25 + -0x40 + lVar14);
      auVar44 = *(undefined1 (*) [32])(lVar25 + -0x20 + lVar14);
      auVar43 = vblendps_avx(auVar44,auVar42,0x24);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar53,*(undefined1 (*) [32])(lVar25 + lVar14));
      auVar44 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar25 + lVar14),auVar55,auVar44);
      auVar53 = vinsertf32x4_avx512vl(auVar42,auVar44._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar42,auVar44,3);
      auVar44 = vmulps_avx512vl(auVar39,auVar53);
      auVar53._0_4_ = auVar40._0_4_ * auVar42._0_4_;
      auVar53._4_4_ = auVar40._4_4_ * auVar42._4_4_;
      auVar53._8_4_ = auVar40._8_4_ * auVar42._8_4_;
      auVar53._12_4_ = auVar40._12_4_ * auVar42._12_4_;
      auVar53._16_4_ = auVar40._16_4_ * auVar42._16_4_;
      auVar53._20_4_ = auVar40._20_4_ * auVar42._20_4_;
      auVar53._24_4_ = auVar40._24_4_ * auVar42._24_4_;
      auVar53._28_4_ = auVar40._28_4_ * auVar42._28_4_;
      auVar47._0_4_ = auVar41._0_4_ * auVar43._0_4_;
      auVar47._4_4_ = auVar41._4_4_ * auVar43._4_4_;
      auVar47._8_4_ = auVar41._8_4_ * auVar43._8_4_;
      auVar47._12_4_ = auVar41._12_4_ * auVar43._12_4_;
      auVar47._16_4_ = auVar41._16_4_ * auVar43._16_4_;
      auVar47._20_4_ = auVar41._20_4_ * auVar43._20_4_;
      auVar47._24_4_ = auVar41._24_4_ * auVar43._24_4_;
      auVar47._28_4_ = auVar41._28_4_ * auVar43._28_4_;
      auVar42 = vmulps_avx512vl(auVar91,auVar53);
      auVar43 = vmulps_avx512vl(auVar34,auVar47);
      fVar97 = auVar34._0_4_ * auVar53._0_4_ - auVar89._0_4_ * auVar44._0_4_;
      fVar100 = auVar34._4_4_ * auVar53._4_4_ - auVar89._4_4_ * auVar44._4_4_;
      fVar101 = auVar34._8_4_ * auVar53._8_4_ - auVar89._8_4_ * auVar44._8_4_;
      fVar102 = auVar34._12_4_ * auVar53._12_4_ - auVar89._12_4_ * auVar44._12_4_;
      fVar103 = auVar34._16_4_ * auVar53._16_4_ - auVar89._16_4_ * auVar44._16_4_;
      fVar104 = auVar34._20_4_ * auVar53._20_4_ - auVar89._20_4_ * auVar44._20_4_;
      fVar105 = auVar34._24_4_ * auVar53._24_4_ - auVar89._24_4_ * auVar44._24_4_;
      fVar107 = auVar34._28_4_ * auVar53._28_4_ - auVar89._28_4_ * auVar44._28_4_;
      auVar42 = vfmsub231ps_avx512vl(auVar42,auVar89,auVar47);
      auVar43 = vfmsub231ps_avx512vl(auVar43,auVar91,auVar44);
      auVar42 = vaddps_avx512vl(auVar42,auVar42);
      auVar43 = vaddps_avx512vl(auVar43,auVar43);
      auVar41._0_4_ = fVar97 + fVar97;
      auVar41._4_4_ = fVar100 + fVar100;
      auVar41._8_4_ = fVar101 + fVar101;
      auVar41._12_4_ = fVar102 + fVar102;
      auVar41._16_4_ = fVar103 + fVar103;
      auVar41._20_4_ = fVar104 + fVar104;
      auVar41._24_4_ = fVar105 + fVar105;
      auVar41._28_4_ = fVar107 + fVar107;
      auVar44 = vfmadd231ps_avx512vl(auVar44,auVar35,auVar42);
      auVar53 = vfmadd231ps_avx512vl(auVar53,auVar35,auVar43);
      auVar35 = vmulps_avx512vl(auVar89,auVar42);
      auVar39 = vmulps_avx512vl(auVar91,auVar43);
      auVar40 = vmulps_avx512vl(auVar34,auVar41);
      auVar43 = vfmsub231ps_avx512vl(auVar35,auVar43,auVar34);
      auVar34 = vfmsub231ps_avx512vl(auVar39,auVar41,auVar89);
      auVar44 = vaddps_avx512vl(auVar44,auVar34);
      auVar42 = vfmsub231ps_avx512vl(auVar40,auVar42,auVar91);
      auVar42 = vaddps_avx512vl(auVar53,auVar42);
      auVar39._0_4_ = auVar36._0_4_ + auVar44._0_4_;
      auVar39._4_4_ = auVar36._4_4_ + auVar44._4_4_;
      auVar39._8_4_ = auVar36._8_4_ + auVar44._8_4_;
      auVar39._12_4_ = auVar36._12_4_ + auVar44._12_4_;
      auVar39._16_4_ = auVar36._16_4_ + auVar44._16_4_;
      auVar39._20_4_ = auVar36._20_4_ + auVar44._20_4_;
      auVar39._24_4_ = auVar36._24_4_ + auVar44._24_4_;
      auVar39._28_4_ = auVar36._28_4_ + auVar44._28_4_;
      auVar35._0_4_ = auVar37._0_4_ + auVar42._0_4_;
      auVar35._4_4_ = auVar37._4_4_ + auVar42._4_4_;
      auVar35._8_4_ = auVar37._8_4_ + auVar42._8_4_;
      auVar35._12_4_ = auVar37._12_4_ + auVar42._12_4_;
      auVar35._16_4_ = auVar37._16_4_ + auVar42._16_4_;
      auVar35._20_4_ = auVar37._20_4_ + auVar42._20_4_;
      auVar35._24_4_ = auVar37._24_4_ + auVar42._24_4_;
      auVar35._28_4_ = auVar37._28_4_ + auVar42._28_4_;
      auVar34._0_4_ = auVar38._0_4_ + auVar41._0_4_ * fVar106 + auVar47._0_4_ + auVar43._0_4_;
      auVar34._4_4_ = auVar38._4_4_ + auVar41._4_4_ * fVar108 + auVar47._4_4_ + auVar43._4_4_;
      auVar34._8_4_ = auVar38._8_4_ + auVar41._8_4_ * fVar83 + auVar47._8_4_ + auVar43._8_4_;
      auVar34._12_4_ = auVar38._12_4_ + auVar41._12_4_ * fVar84 + auVar47._12_4_ + auVar43._12_4_;
      auVar34._16_4_ = auVar38._16_4_ + auVar41._16_4_ * fVar85 + auVar47._16_4_ + auVar43._16_4_;
      auVar34._20_4_ = auVar38._20_4_ + auVar41._20_4_ * fVar86 + auVar47._20_4_ + auVar43._20_4_;
      auVar34._24_4_ = auVar38._24_4_ + auVar41._24_4_ * fVar87 + auVar47._24_4_ + auVar43._24_4_;
      auVar34._28_4_ = auVar38._28_4_ + auVar41._28_4_ * fVar88 + auVar47._28_4_ + auVar43._28_4_;
      auVar43 = vsubps_avx(auVar39,local_120);
      auVar53 = vsubps_avx(auVar35,auVar99);
      auVar35 = vsubps_avx512vl(auVar34,auVar46);
      auVar42 = vpermt2ps_avx512vl(auVar35,auVar54,auVar53);
      auVar44 = vpermt2ps_avx512vl(auVar43,auVar92,auVar53);
      auVar44 = vpermt2ps_avx512vl(auVar44,auVar69,auVar42);
      *(undefined1 (*) [32])(lVar25 + -0x40 + lVar14) = auVar44;
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar70,auVar43);
      *(undefined1 (*) [32])(lVar25 + -0x20 + lVar14) = auVar42;
      auVar34 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar112 = __ymm_0000000700000007000000070000000700000006000000050000000f0000000e._0_16_;
      auVar42 = vpermt2ps_avx512vl(auVar53,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar43);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar71,auVar35);
      *(undefined1 (*) [32])(lVar25 + lVar14) = auVar42;
      auVar42 = *(undefined1 (*) [32])(lVar24 + -0x40 + lVar14);
      auVar44 = *(undefined1 (*) [32])(lVar24 + -0x20 + lVar14);
      auVar45 = vpermt2ps_avx512vl(auVar42,auVar45,auVar44);
      auVar36 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar24 + lVar14),auVar55,auVar44);
      auVar37 = vinsertf32x4_avx512vl(auVar45,auVar36._0_16_,1);
      auVar111 = auVar37._0_16_;
      auVar45 = vshuff64x2_avx512vl(auVar45,auVar36,3);
      auVar110 = __ymm_0000000000000000000000000000000600000003000000000000000d0000000a._0_16_;
      auVar42 = vpermt2ps_avx512vl(auVar44,
                                   ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a
                                   ,auVar42);
      auVar42 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000
                                   ,*(undefined1 (*) [32])(lVar24 + lVar14));
      auVar43 = vsubps_avx512vl(auVar37,auVar43);
      auVar53 = vsubps_avx512vl(auVar45,auVar53);
      auVar45 = vsubps_avx512vl(auVar42,auVar35);
      auVar44._4_4_ = param_11;
      auVar44._0_4_ = param_11;
      auVar44._8_4_ = param_11;
      auVar44._12_4_ = param_11;
      auVar44._16_4_ = param_11;
      auVar44._20_4_ = param_11;
      auVar44._24_4_ = param_11;
      auVar44._28_4_ = param_11;
      auVar35 = vdivps_avx512vl(auVar43,auVar44);
      auVar32 = auVar35._0_16_;
      auVar42 = vdivps_avx(auVar53,auVar44);
      auVar44 = vdivps_avx(auVar45,auVar44);
      auVar43 = vpermt2ps_avx512vl(auVar44,auVar54,auVar42);
      auVar53 = vpermt2ps_avx512vl(auVar35,auVar92,auVar42);
      auVar109 = auVar69._0_16_;
      auVar53 = vpermt2ps_avx512vl(auVar53,auVar69,auVar43);
      *(undefined1 (*) [32])(lVar21 + -0x40 + lVar14) = auVar53;
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar70,auVar35);
      *(undefined1 (*) [32])(lVar21 + -0x20 + lVar14) = auVar43;
      auVar43 = vpermt2ps_avx512vl(auVar42,auVar34,auVar35);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar71,auVar44);
      *(undefined1 (*) [32])(lVar21 + lVar14) = auVar43;
      auVar45 = vsubps_avx512vl(local_2c0,auVar35);
      auVar33 = auVar45._0_16_;
      auVar43 = vsubps_avx(local_2a0,auVar42);
      auVar53 = vsubps_avx(local_280,auVar44);
      fVar83 = auVar43._0_4_;
      auVar36._0_4_ = fVar83 * fVar83;
      fVar84 = auVar43._4_4_;
      auVar36._4_4_ = fVar84 * fVar84;
      fVar85 = auVar43._8_4_;
      auVar36._8_4_ = fVar85 * fVar85;
      fVar86 = auVar43._12_4_;
      auVar36._12_4_ = fVar86 * fVar86;
      fVar87 = auVar43._16_4_;
      auVar36._16_4_ = fVar87 * fVar87;
      fVar88 = auVar43._20_4_;
      auVar36._20_4_ = fVar88 * fVar88;
      fVar97 = auVar43._24_4_;
      auVar36._24_4_ = fVar97 * fVar97;
      fVar100 = auVar43._28_4_;
      auVar36._28_4_ = fVar100 * fVar100;
      auVar43 = vfmadd231ps_avx512vl(auVar36,auVar45,auVar45);
      fVar101 = auVar53._0_4_;
      auVar37._0_4_ = fVar101 * fVar101 + auVar43._0_4_;
      fVar102 = auVar53._4_4_;
      auVar37._4_4_ = fVar102 * fVar102 + auVar43._4_4_;
      fVar103 = auVar53._8_4_;
      auVar37._8_4_ = fVar103 * fVar103 + auVar43._8_4_;
      fVar104 = auVar53._12_4_;
      auVar37._12_4_ = fVar104 * fVar104 + auVar43._12_4_;
      fVar105 = auVar53._16_4_;
      auVar37._16_4_ = fVar105 * fVar105 + auVar43._16_4_;
      fVar107 = auVar53._20_4_;
      auVar37._20_4_ = fVar107 * fVar107 + auVar43._20_4_;
      fVar106 = auVar53._24_4_;
      auVar37._24_4_ = fVar106 * fVar106 + auVar43._24_4_;
      fVar108 = auVar53._28_4_;
      auVar37._28_4_ = fVar108 * fVar108 + auVar43._28_4_;
      uVar10 = vcmpps_avx512vl(auVar72,auVar37,1);
      bVar29 = (byte)uVar10;
      if (bVar29 != 0) {
        auVar43 = vdivps_avx(auVar72,auVar37);
        auVar43 = vsqrtps_avx(auVar43);
        auVar53 = vfmadd213ps_avx512vl(auVar45,auVar43,auVar35);
        auVar33 = auVar53._0_16_;
        bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
        bVar4 = (bool)((byte)(uVar10 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar10 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar10 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar10 >> 6) & 1);
        bVar9 = SUB81(uVar10 >> 7,0);
        local_2c0._4_4_ = (uint)bVar3 * auVar53._4_4_ | (uint)!bVar3 * local_2c0._4_4_;
        local_2c0._0_4_ =
             (uint)(bVar29 & 1) * auVar53._0_4_ | (uint)!(bool)(bVar29 & 1) * local_2c0._0_4_;
        local_2c0._8_4_ = (uint)bVar4 * auVar53._8_4_ | (uint)!bVar4 * local_2c0._8_4_;
        local_2c0._12_4_ = (uint)bVar5 * auVar53._12_4_ | (uint)!bVar5 * local_2c0._12_4_;
        local_2c0._16_4_ = (uint)bVar6 * auVar53._16_4_ | (uint)!bVar6 * local_2c0._16_4_;
        local_2c0._20_4_ = (uint)bVar7 * auVar53._20_4_ | (uint)!bVar7 * local_2c0._20_4_;
        local_2c0._24_4_ = (uint)bVar8 * auVar53._24_4_ | (uint)!bVar8 * local_2c0._24_4_;
        local_2c0._28_4_ = (uint)bVar9 * auVar53._28_4_ | (uint)!bVar9 * local_2c0._28_4_;
        bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
        bVar4 = (bool)((byte)(uVar10 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar10 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar10 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar10 >> 6) & 1);
        bVar9 = SUB81(uVar10 >> 7,0);
        local_2a0._4_4_ =
             (uint)bVar3 * (int)(auVar43._4_4_ * fVar84 + auVar42._4_4_) |
             (uint)!bVar3 * local_2a0._4_4_;
        local_2a0._0_4_ =
             (uint)(bVar29 & 1) * (int)(auVar43._0_4_ * fVar83 + auVar42._0_4_) |
             (uint)!(bool)(bVar29 & 1) * local_2a0._0_4_;
        local_2a0._8_4_ =
             (uint)bVar4 * (int)(auVar43._8_4_ * fVar85 + auVar42._8_4_) |
             (uint)!bVar4 * local_2a0._8_4_;
        local_2a0._12_4_ =
             (uint)bVar5 * (int)(auVar43._12_4_ * fVar86 + auVar42._12_4_) |
             (uint)!bVar5 * local_2a0._12_4_;
        local_2a0._16_4_ =
             (uint)bVar6 * (int)(auVar43._16_4_ * fVar87 + auVar42._16_4_) |
             (uint)!bVar6 * local_2a0._16_4_;
        local_2a0._20_4_ =
             (uint)bVar7 * (int)(auVar43._20_4_ * fVar88 + auVar42._20_4_) |
             (uint)!bVar7 * local_2a0._20_4_;
        local_2a0._24_4_ =
             (uint)bVar8 * (int)(auVar43._24_4_ * fVar97 + auVar42._24_4_) |
             (uint)!bVar8 * local_2a0._24_4_;
        local_2a0._28_4_ =
             (uint)bVar9 * (int)(auVar43._28_4_ * fVar100 + auVar42._28_4_) |
             (uint)!bVar9 * local_2a0._28_4_;
        bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
        bVar4 = (bool)((byte)(uVar10 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar10 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar10 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar10 >> 6) & 1);
        bVar9 = SUB81(uVar10 >> 7,0);
        local_280._4_4_ =
             (uint)bVar3 * (int)(auVar43._4_4_ * fVar102 + auVar44._4_4_) |
             (uint)!bVar3 * local_280._4_4_;
        local_280._0_4_ =
             (uint)(bVar29 & 1) * (int)(auVar43._0_4_ * fVar101 + auVar44._0_4_) |
             (uint)!(bool)(bVar29 & 1) * local_280._0_4_;
        local_280._8_4_ =
             (uint)bVar4 * (int)(auVar43._8_4_ * fVar103 + auVar44._8_4_) |
             (uint)!bVar4 * local_280._8_4_;
        local_280._12_4_ =
             (uint)bVar5 * (int)(auVar43._12_4_ * fVar104 + auVar44._12_4_) |
             (uint)!bVar5 * local_280._12_4_;
        local_280._16_4_ =
             (uint)bVar6 * (int)(auVar43._16_4_ * fVar105 + auVar44._16_4_) |
             (uint)!bVar6 * local_280._16_4_;
        local_280._20_4_ =
             (uint)bVar7 * (int)(auVar43._20_4_ * fVar107 + auVar44._20_4_) |
             (uint)!bVar7 * local_280._20_4_;
        local_280._24_4_ =
             (uint)bVar8 * (int)(auVar43._24_4_ * fVar106 + auVar44._24_4_) |
             (uint)!bVar8 * local_280._24_4_;
        local_280._28_4_ =
             (uint)bVar9 * (int)(auVar43._28_4_ * fVar108 + auVar44._28_4_) |
             (uint)!bVar9 * local_280._28_4_;
      }
      auVar42 = vpermt2ps_avx512vl(local_280,auVar54,local_2a0);
      auVar44 = vpermt2ps_avx512vl(local_2c0,auVar92,local_2a0);
      auVar44 = vpermt2ps_avx512vl(auVar44,auVar69,auVar42);
      *(undefined1 (*) [32])(lVar23 + -0x40 + lVar14) = auVar44;
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar70,local_2c0);
      *(undefined1 (*) [32])(lVar23 + -0x20 + lVar14) = auVar42;
      auVar42 = vpermt2ps_avx512vl(local_2a0,
                                   ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,local_2c0);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar71,local_280);
      *(undefined1 (*) [32])(lVar23 + lVar14) = auVar42;
      unaff_R13 = unaff_R13 + 8;
      lVar28 = lVar28 + 0x60;
      pauVar26 = pauVar26 + 4;
      lVar23 = lVar23 + 0x60;
      lVar25 = lVar25 + 0x60;
      lVar24 = lVar24 + 0x60;
      lVar21 = lVar21 + 0x60;
      param_12 = param_12 + 0x20;
    } while (unaff_R13 < lVar20);
    param_12 = (int)unaff_R13;
    unaff_R12 = param_6;
  }
  if (param_12 < param_13) {
    auVar54 = vpbroadcastd_avx512vl();
    auVar55._0_4_ =
         auVar54._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar55._4_4_ = auVar54._4_4_ + _UNK_150b50ae4;
    auVar55._8_4_ = auVar54._8_4_ + _UNK_150b50ae8;
    auVar55._12_4_ = auVar54._12_4_ + _UNK_150b50aec;
    auVar55._16_4_ = auVar54._16_4_ + _UNK_150b50af0;
    auVar55._20_4_ = auVar54._20_4_ + _UNK_150b50af4;
    auVar55._24_4_ = auVar54._24_4_ + _UNK_150b50af8;
    auVar55._28_4_ = auVar54._28_4_ + _UNK_150b50afc;
    auVar54 = vpbroadcastd_avx512vl();
    uVar10 = vpcmpgtd_avx512vl(auVar54,auVar55);
    auVar55 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_8 + param_12 * 4));
    bVar29 = (byte)uVar10;
    auVar56._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
    auVar56._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
    auVar56._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
    auVar56._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
    auVar56._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar56._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar56._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar56._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    vpslld_avx2(auVar56,2);
    auVar55 = vgatherdps_avx512vl(param_9[param_1 * 2]);
    auVar57._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
    auVar57._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
    auVar57._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
    auVar57._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
    auVar57._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar57._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar57._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar57._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar92 = vpslld_avx2(auVar56,4);
    auVar55 = vpslld_avx2(auVar56,5);
    auVar54._0_4_ = auVar55._0_4_ + auVar92._0_4_;
    auVar54._4_4_ = auVar55._4_4_ + auVar92._4_4_;
    auVar54._8_4_ = auVar55._8_4_ + auVar92._8_4_;
    auVar54._12_4_ = auVar55._12_4_ + auVar92._12_4_;
    auVar54._16_4_ = auVar55._16_4_ + auVar92._16_4_;
    auVar54._20_4_ = auVar55._20_4_ + auVar92._20_4_;
    auVar54._24_4_ = auVar55._24_4_ + auVar92._24_4_;
    auVar54._28_4_ = auVar55._28_4_ + auVar92._28_4_;
    auVar92._4_4_ = __real_00000004;
    auVar92._0_4_ = __real_00000004;
    auVar92._8_4_ = __real_00000004;
    auVar92._12_4_ = __real_00000004;
    auVar92._16_4_ = __real_00000004;
    auVar92._20_4_ = __real_00000004;
    auVar92._24_4_ = __real_00000004;
    auVar92._28_4_ = __real_00000004;
    vpord_avx512vl(auVar54,auVar92);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar58._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
    auVar58._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
    auVar58._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
    auVar58._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
    auVar58._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar58._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar58._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar58._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar69._4_4_ = __real_00000008;
    auVar69._0_4_ = __real_00000008;
    auVar69._8_4_ = __real_00000008;
    auVar69._12_4_ = __real_00000008;
    auVar69._16_4_ = __real_00000008;
    auVar69._20_4_ = __real_00000008;
    auVar69._24_4_ = __real_00000008;
    auVar69._28_4_ = __real_00000008;
    vpord_avx512vl(auVar54,auVar69);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar59._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
    auVar59._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
    auVar59._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
    auVar59._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
    auVar59._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar59._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar59._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar59._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar70._4_4_ = __real_0000000c;
    auVar70._0_4_ = __real_0000000c;
    auVar70._8_4_ = __real_0000000c;
    auVar70._12_4_ = __real_0000000c;
    auVar70._16_4_ = __real_0000000c;
    auVar70._20_4_ = __real_0000000c;
    auVar70._24_4_ = __real_0000000c;
    auVar70._28_4_ = __real_0000000c;
    vpord_avx512vl(auVar54,auVar70);
    auVar32 = vxorps_avx512vl(auVar32,auVar32);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar60._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar32._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar60._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar32._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar60._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar32._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar60._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar32._12_4_;
    auVar60._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar60._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar60._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar60._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar71._4_4_ = __real_00000010;
    auVar71._0_4_ = __real_00000010;
    auVar71._8_4_ = __real_00000010;
    auVar71._12_4_ = __real_00000010;
    auVar71._16_4_ = __real_00000010;
    auVar71._20_4_ = __real_00000010;
    auVar71._24_4_ = __real_00000010;
    auVar71._28_4_ = __real_00000010;
    vpaddd_avx512vl(auVar54,auVar71);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    fVar100 = (float)((uint)(bVar29 & 1) * auVar55._0_4_);
    fVar87 = (float)((uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_);
    fVar86 = (float)((uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_);
    fVar85 = (float)((uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_);
    fVar84 = (float)((uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_);
    fVar83 = (float)((uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_);
    fVar88 = (float)((uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_);
    fVar97 = (float)((uint)(byte)(uVar10 >> 7) * auVar55._28_4_);
    auVar38._4_4_ = __real_00000014;
    auVar38._0_4_ = __real_00000014;
    auVar38._8_4_ = __real_00000014;
    auVar38._12_4_ = __real_00000014;
    auVar38._16_4_ = __real_00000014;
    auVar38._20_4_ = __real_00000014;
    auVar38._24_4_ = __real_00000014;
    auVar38._28_4_ = __real_00000014;
    vpaddd_avx512vl(auVar54,auVar38);
    auVar33 = vxorps_avx512vl(auVar33,auVar33);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar61._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar61._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar61._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar61._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar61._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar61._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar61._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar61._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar40._4_4_ = __real_00000018;
    auVar40._0_4_ = __real_00000018;
    auVar40._8_4_ = __real_00000018;
    auVar40._12_4_ = __real_00000018;
    auVar40._16_4_ = __real_00000018;
    auVar40._20_4_ = __real_00000018;
    auVar40._24_4_ = __real_00000018;
    auVar40._28_4_ = __real_00000018;
    vpaddd_avx512vl(auVar54,auVar40);
    auVar33 = vxorps_avx512vl(auVar109,auVar109);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar62._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar62._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar62._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar62._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar62._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar62._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar62._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar62._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar11._4_4_ = __real_00000020;
    auVar11._0_4_ = __real_00000020;
    auVar11._8_4_ = __real_00000020;
    auVar11._12_4_ = __real_00000020;
    auVar11._16_4_ = __real_00000020;
    auVar11._20_4_ = __real_00000020;
    auVar11._24_4_ = __real_00000020;
    auVar11._28_4_ = __real_00000020;
    vpaddd_avx512vl(auVar54,auVar11);
    auVar33 = vxorps_avx512vl(auVar110,auVar110);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar63._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar63._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar63._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar63._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar63._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar63._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar63._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar63._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar12._4_4_ = __real_00000024;
    auVar12._0_4_ = __real_00000024;
    auVar12._8_4_ = __real_00000024;
    auVar12._12_4_ = __real_00000024;
    auVar12._16_4_ = __real_00000024;
    auVar12._20_4_ = __real_00000024;
    auVar12._24_4_ = __real_00000024;
    auVar12._28_4_ = __real_00000024;
    vpaddd_avx512vl(auVar54,auVar12);
    auVar33 = vxorps_avx512vl(auVar111,auVar111);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_1));
    auVar64._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar64._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar64._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar64._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar64._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar64._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar64._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar64._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    auVar13._4_4_ = __real_00000028;
    auVar13._0_4_ = __real_00000028;
    auVar13._8_4_ = __real_00000028;
    auVar13._12_4_ = __real_00000028;
    auVar13._16_4_ = __real_00000028;
    auVar13._20_4_ = __real_00000028;
    auVar13._24_4_ = __real_00000028;
    auVar13._28_4_ = __real_00000028;
    vpaddd_avx512vl(auVar54,auVar13);
    auVar33 = vxorps_avx512vl(auVar112,auVar112);
    auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_9 + param_8));
    auVar65._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_;
    bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
    auVar65._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
    bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
    auVar65._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
    bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
    auVar65._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
    auVar65._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
    auVar65._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
    auVar65._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
    auVar65._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    lVar28 = (longlong)param_12;
    pauVar26 = (undefined1 (*) [32])(param_3 + lVar28 * 0xc);
    if (bVar29 == 0xff) {
      auVar55 = pauVar26[1];
      auVar54 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar26,auVar55);
      auVar92 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar26[2],auVar55);
      auVar66 = vinsertf32x4_avx512vl(auVar54,auVar92._0_16_,1);
      auVar67 = vshuff64x2_avx512vl(auVar54,auVar92,3);
      auVar55 = vblendps_avx(auVar55,*pauVar26,0x24);
      auVar68 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar55,pauVar26[2]);
    }
    else {
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + param_7));
      auVar66._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar66._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar66._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar66._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar66._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar66._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar66._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar66._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar33 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + lVar28 * 3));
      auVar67._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_
      ;
      bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
      auVar67._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
      bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
      auVar67._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
      bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
      auVar67._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
      auVar67._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar67._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar67._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar67._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + lVar28 * 3));
      auVar68._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar68._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar68._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar68._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar68._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar68._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar68._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar68._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    }
    pauVar22 = (undefined1 (*) [32])(param_1 + lVar28 * 0x10);
    auVar55 = vmulps_avx512vl(auVar63,auVar66);
    auVar54 = vmulps_avx512vl(auVar64,auVar67);
    auVar92 = vmulps_avx512vl(auVar65,auVar68);
    auVar69 = vmulps_avx512vl(auVar58,auVar55);
    auVar70 = vmulps_avx512vl(auVar59,auVar54);
    auVar71 = vmulps_avx512vl(auVar57,auVar92);
    auVar69 = vfmsub231ps_avx512vl(auVar69,auVar57,auVar54);
    auVar70 = vfmsub231ps_avx512vl(auVar70,auVar58,auVar92);
    auVar71 = vfmsub231ps_avx512vl(auVar71,auVar59,auVar55);
    auVar70 = vaddps_avx512vl(auVar70,auVar70);
    auVar71 = vaddps_avx512vl(auVar71,auVar71);
    auVar69 = vaddps_avx512vl(auVar69,auVar69);
    auVar55 = vfmadd231ps_avx512vl(auVar55,auVar60,auVar70);
    auVar54 = vfmadd231ps_avx512vl(auVar54,auVar60,auVar71);
    auVar92 = vfmadd231ps_avx512vl(auVar92,auVar60,auVar69);
    auVar72 = vmulps_avx512vl(auVar58,auVar70);
    auVar42 = vmulps_avx512vl(auVar59,auVar71);
    auVar44 = vmulps_avx512vl(auVar57,auVar69);
    auVar71 = vfmsub231ps_avx512vl(auVar72,auVar57,auVar71);
    auVar92 = vaddps_avx512vl(auVar92,auVar71);
    auVar69 = vfmsub231ps_avx512vl(auVar42,auVar58,auVar69);
    auVar55 = vaddps_avx512vl(auVar55,auVar69);
    auVar69 = vfmsub231ps_avx512vl(auVar44,auVar59,auVar70);
    auVar54 = vaddps_avx512vl(auVar54,auVar69);
    auVar93._0_4_ = fVar100 + auVar55._0_4_;
    auVar93._4_4_ = fVar87 + auVar55._4_4_;
    auVar93._8_4_ = fVar86 + auVar55._8_4_;
    auVar93._12_4_ = fVar85 + auVar55._12_4_;
    auVar93._16_4_ = fVar84 + auVar55._16_4_;
    auVar93._20_4_ = fVar83 + auVar55._20_4_;
    auVar93._24_4_ = fVar88 + auVar55._24_4_;
    auVar93._28_4_ = fVar97 + auVar55._28_4_;
    auVar55 = vaddps_avx512vl(auVar61,auVar54);
    auVar54 = vaddps_avx512vl(auVar62,auVar92);
    auVar92 = vbroadcastss_avx512vl(ZEXT416(*param_10));
    auVar69 = vsubps_avx512vl(auVar93,auVar92);
    auVar70 = vbroadcastss_avx512vl(ZEXT416(param_10[1]));
    auVar55 = vsubps_avx512vl(auVar55,auVar70);
    auVar71 = vbroadcastss_avx512vl(ZEXT416(param_10[2]));
    auVar54 = vsubps_avx512vl(auVar54,auVar71);
    piVar1 = (int *)(param_6 + param_12 * 4);
    auVar73._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * piVar1[1];
    auVar73._0_4_ = (uint)(bVar29 & 1) * *piVar1;
    auVar73._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * piVar1[2];
    auVar73._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * piVar1[3];
    auVar73._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * piVar1[4];
    auVar73._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * piVar1[5];
    auVar73._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * piVar1[6];
    auVar73._28_4_ = (uint)(byte)(uVar10 >> 7) * piVar1[7];
    if (bVar29 == 0xff) {
      auVar89 = vunpcklps_avx512vl(auVar69,auVar55);
      auVar91 = vunpcklps_avx512vl(auVar54,auVar73);
      auVar72 = vunpcklpd_avx512vl(auVar89,auVar91);
      auVar89 = vunpckhpd_avx512vl(auVar89,auVar91);
      auVar91 = vunpckhps_avx512vl(auVar69,auVar55);
      auVar42 = vunpckhps_avx512vl(auVar54,auVar73);
      auVar44 = vunpcklpd_avx512vl(auVar91,auVar42);
      auVar91 = vunpckhpd_avx512vl(auVar91,auVar42);
      auVar42 = vinsertf32x4_avx512vl(auVar72,auVar89._0_16_,1);
      *pauVar22 = auVar42;
      auVar42 = vinsertf32x4_avx512vl(auVar44,auVar91._0_16_,1);
      pauVar22[1] = auVar42;
      auVar89 = vshuff64x2_avx512vl(auVar72,auVar89,3);
      pauVar22[2] = auVar89;
      auVar89 = vshuff64x2_avx512vl(auVar44,auVar91,3);
      pauVar22[3] = auVar89;
      auVar89 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar54,auVar55);
      auVar91 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar69,auVar55);
      auVar91 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar91,auVar89);
      *pauVar26 = auVar91;
      auVar89 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar89,auVar69);
      pauVar26[1] = auVar89;
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar55,auVar69);
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar55,auVar54);
      pauVar26[2] = auVar55;
      pauVar26 = (undefined1 (*) [32])(param_2 + lVar28 * 0xc);
      auVar55 = *(undefined1 (*) [32])(param_2 + lVar28 * 0xc);
      auVar54 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar28 * 0xc);
      auVar69 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar28 * 0xc);
      auVar89 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar55,auVar54);
      auVar91 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar69,auVar54);
      auVar74 = vinsertf32x4_avx512vl(auVar89,auVar91._0_16_,1);
      auVar75 = vshuff64x2_avx512vl(auVar89,auVar91,3);
      auVar55 = vblendps_avx(auVar54,auVar55,0x24);
      auVar76 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar55,auVar69);
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar91,uVar10,auVar69);
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar91,uVar10,auVar55);
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar91,uVar10,auVar54);
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar91,uVar10,auVar73);
      vscatterdps_avx512vl(ZEXT832(pauVar26) + auVar89,uVar10,auVar69);
      vscatterdps_avx512vl(ZEXT832(pauVar26) + ZEXT432(param_11),uVar10,auVar55);
      vscatterdps_avx512vl(ZEXT832(pauVar26) + auVar91,uVar10,auVar54);
      pauVar26 = (undefined1 (*) [32])(param_2 + lVar28 * 0xc);
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + param_6));
      auVar74._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar74._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar74._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar74._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar74._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar74._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar74._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar74._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + param_4));
      auVar75._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar75._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar75._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar75._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar75._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar75._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar75._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar75._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar33 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                        ._0_16_);
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + (longlong)param_10));
      auVar76._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_
      ;
      bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
      auVar76._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
      bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
      auVar76._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
      bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
      auVar76._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    }
    auVar55 = vmulps_avx512vl(auVar63,auVar74);
    auVar54 = vmulps_avx512vl(auVar64,auVar75);
    auVar69 = vmulps_avx512vl(auVar65,auVar76);
    auVar89 = vmulps_avx512vl(auVar58,auVar55);
    auVar91 = vmulps_avx512vl(auVar59,auVar54);
    auVar72 = vmulps_avx512vl(auVar57,auVar69);
    auVar89 = vfmsub231ps_avx512vl(auVar89,auVar57,auVar54);
    auVar91 = vfmsub231ps_avx512vl(auVar91,auVar58,auVar69);
    auVar72 = vfmsub231ps_avx512vl(auVar72,auVar59,auVar55);
    auVar91 = vaddps_avx512vl(auVar91,auVar91);
    auVar72 = vaddps_avx512vl(auVar72,auVar72);
    auVar89 = vaddps_avx512vl(auVar89,auVar89);
    auVar55 = vfmadd231ps_avx512vl(auVar55,auVar60,auVar91);
    auVar54 = vfmadd231ps_avx512vl(auVar54,auVar60,auVar72);
    auVar69 = vfmadd231ps_avx512vl(auVar69,auVar60,auVar89);
    auVar42 = vmulps_avx512vl(auVar58,auVar91);
    auVar44 = vmulps_avx512vl(auVar59,auVar72);
    auVar43 = vmulps_avx512vl(auVar57,auVar89);
    auVar72 = vfmsub231ps_avx512vl(auVar42,auVar57,auVar72);
    local_2e0 = vaddps_avx512vl(auVar69,auVar72);
    auVar69 = vfmsub231ps_avx512vl(auVar44,auVar58,auVar89);
    local_320 = vaddps_avx512vl(auVar55,auVar69);
    auVar55 = vfmsub231ps_avx512vl(auVar43,auVar59,auVar91);
    local_300 = vaddps_avx512vl(auVar54,auVar55);
    pauVar22 = (undefined1 (*) [32])(param_4 + lVar28 * 0xc);
    if (bVar29 == 0xff) {
      auVar55 = pauVar22[1];
      auVar54 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar22,auVar55);
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar22[2],auVar55);
      auVar77 = vinsertf32x4_avx512vl(auVar54,auVar69._0_16_,1);
      auVar78 = vshuff64x2_avx512vl(auVar54,auVar69,3);
      auVar55 = vblendps_avx(auVar55,*pauVar22,0x24);
      auVar79 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar55,pauVar22[2]);
    }
    else {
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar22 * 2));
      auVar77._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar77._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar77._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar77._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar77._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar77._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar77._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar77._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar22 + unaff_R12));
      auVar78._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar55._4_4_;
      auVar78._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar55._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar55._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
      auVar33 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                        ._0_16_);
      auVar55 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar22 + unaff_R13));
      auVar79._0_4_ = (uint)(bVar29 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar29 & 1) * auVar33._0_4_
      ;
      bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
      auVar79._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * auVar33._4_4_;
      bVar3 = (bool)((byte)(uVar10 >> 2) & 1);
      auVar79._8_4_ = (uint)bVar3 * auVar55._8_4_ | (uint)!bVar3 * auVar33._8_4_;
      bVar3 = (bool)((byte)(uVar10 >> 3) & 1);
      auVar79._12_4_ = (uint)bVar3 * auVar55._12_4_ | (uint)!bVar3 * auVar33._12_4_;
      auVar79._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar55._16_4_;
      auVar79._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar55._20_4_;
      auVar79._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar55._24_4_;
      auVar79._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar55._28_4_;
    }
    auVar55 = vmulps_avx512vl(auVar63,auVar77);
    auVar54 = vmulps_avx512vl(auVar64,auVar78);
    auVar69 = vmulps_avx512vl(auVar65,auVar79);
    auVar89 = vmulps_avx512vl(auVar58,auVar55);
    auVar91 = vmulps_avx512vl(auVar59,auVar54);
    auVar72 = vmulps_avx512vl(auVar57,auVar69);
    auVar89 = vfmsub231ps_avx512vl(auVar89,auVar57,auVar54);
    auVar91 = vfmsub231ps_avx512vl(auVar91,auVar58,auVar69);
    auVar72 = vfmsub231ps_avx512vl(auVar72,auVar59,auVar55);
    auVar91 = vaddps_avx512vl(auVar91,auVar91);
    auVar72 = vaddps_avx512vl(auVar72,auVar72);
    auVar89 = vaddps_avx512vl(auVar89,auVar89);
    auVar55 = vfmadd231ps_avx512vl(auVar55,auVar60,auVar91);
    auVar54 = vfmadd231ps_avx512vl(auVar54,auVar60,auVar72);
    auVar69 = vfmadd213ps_avx512vl(auVar60,auVar89,auVar69);
    auVar42 = vmulps_avx512vl(auVar58,auVar91);
    auVar44 = vmulps_avx512vl(auVar59,auVar72);
    auVar43 = vmulps_avx512vl(auVar57,auVar89);
    auVar72 = vfmsub231ps_avx512vl(auVar42,auVar57,auVar72);
    auVar69 = vaddps_avx512vl(auVar69,auVar72);
    auVar89 = vfmsub231ps_avx512vl(auVar44,auVar58,auVar89);
    auVar55 = vaddps_avx512vl(auVar55,auVar89);
    auVar89 = vfmsub231ps_avx512vl(auVar43,auVar59,auVar91);
    auVar54 = vaddps_avx512vl(auVar54,auVar89);
    auVar90._0_4_ = fVar100 + auVar55._0_4_;
    auVar90._4_4_ = fVar87 + auVar55._4_4_;
    auVar90._8_4_ = fVar86 + auVar55._8_4_;
    auVar90._12_4_ = fVar85 + auVar55._12_4_;
    auVar90._16_4_ = fVar84 + auVar55._16_4_;
    auVar90._20_4_ = fVar83 + auVar55._20_4_;
    auVar90._24_4_ = fVar88 + auVar55._24_4_;
    auVar90._28_4_ = fVar97 + auVar55._28_4_;
    auVar55 = vaddps_avx512vl(auVar61,auVar54);
    auVar54 = vaddps_avx512vl(auVar62,auVar69);
    auVar92 = vsubps_avx512vl(auVar90,auVar92);
    auVar55 = vsubps_avx512vl(auVar55,auVar70);
    auVar54 = vsubps_avx512vl(auVar54,auVar71);
    if (bVar29 == 0xff) {
      auVar69 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar54,auVar55);
      auVar70 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar92,auVar55);
      auVar70 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar70,auVar69);
      *pauVar22 = auVar70;
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar69,auVar92);
      pauVar22[1] = auVar69;
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar55,auVar92);
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar69,auVar54);
      pauVar22[2] = auVar69;
      auVar69 = *(undefined1 (*) [32])(param_7 + lVar28 * 0xc);
      auVar70 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar28 * 0xc);
      auVar71 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar28 * 0xc);
      auVar89 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar69,auVar70);
      auVar91 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar71,auVar70);
      auVar80 = vinsertf32x4_avx512vl(auVar89,auVar91._0_16_,1);
      auVar81 = vshuff64x2_avx512vl(auVar89,auVar91,3);
      auVar69 = vblendps_avx(auVar70,auVar69,0x24);
      auVar82 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar69,auVar71);
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
                 auVar92);
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar10,
                 auVar55);
      vscatterdps_avx512vl(ZEXT832(pauVar22) + auVar92,uVar10,auVar54);
      puVar2 = (undefined4 *)(param_7 + lVar28 * 0xc);
      auVar69 = vgatherdps_avx512vl(*puVar2);
      auVar80._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar69._4_4_;
      auVar80._0_4_ = (uint)(bVar29 & 1) * auVar69._0_4_;
      auVar80._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar69._8_4_;
      auVar80._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar69._12_4_;
      auVar80._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar69._16_4_;
      auVar80._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar69._20_4_;
      auVar80._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar69._24_4_;
      auVar80._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar69._28_4_;
      auVar69 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)(local_2c0 + 8)));
      auVar81._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar69._4_4_;
      auVar81._0_4_ = (uint)(bVar29 & 1) * auVar69._0_4_;
      auVar81._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar69._8_4_;
      auVar81._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar69._12_4_;
      auVar81._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar69._16_4_;
      auVar81._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar69._20_4_;
      auVar81._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar69._24_4_;
      auVar81._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar69._28_4_;
      auVar69 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)pauVar26));
      auVar82._4_4_ = (uint)((byte)(uVar10 >> 1) & 1) * auVar69._4_4_;
      auVar82._0_4_ = (uint)(bVar29 & 1) * auVar69._0_4_;
      auVar82._8_4_ = (uint)((byte)(uVar10 >> 2) & 1) * auVar69._8_4_;
      auVar82._12_4_ = (uint)((byte)(uVar10 >> 3) & 1) * auVar69._12_4_;
      auVar82._16_4_ = (uint)((byte)(uVar10 >> 4) & 1) * auVar69._16_4_;
      auVar82._20_4_ = (uint)((byte)(uVar10 >> 5) & 1) * auVar69._20_4_;
      auVar82._24_4_ = (uint)((byte)(uVar10 >> 6) & 1) * auVar69._24_4_;
      auVar82._28_4_ = (uint)(byte)(uVar10 >> 7) * auVar69._28_4_;
    }
    auVar92 = vsubps_avx(auVar80,auVar92);
    auVar69 = vsubps_avx(auVar81,auVar55);
    auVar70 = vsubps_avx(auVar82,auVar54);
    auVar94._4_4_ = param_11;
    auVar94._0_4_ = param_11;
    auVar94._8_4_ = param_11;
    auVar94._12_4_ = param_11;
    auVar94._16_4_ = param_11;
    auVar94._20_4_ = param_11;
    auVar94._24_4_ = param_11;
    auVar94._28_4_ = param_11;
    auVar55 = vdivps_avx(auVar92,auVar94);
    auVar54 = vdivps_avx(auVar69,auVar94);
    auVar92 = vdivps_avx(auVar70,auVar94);
    pauVar22 = (undefined1 (*) [32])(param_5 + lVar28 * 0xc);
    if (bVar29 == 0xff) {
      auVar69 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar92,auVar54);
      auVar70 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar55,auVar54);
      auVar70 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar70,auVar69);
      *pauVar22 = auVar70;
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar69,auVar55);
      pauVar22[1] = auVar69;
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar54,auVar55);
      auVar69 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar69,auVar92);
      pauVar22[2] = auVar69;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
                 auVar55);
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar10,
                 auVar54);
      vscatterdps_avx512vl
                (ZEXT832(pauVar22) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar10,
                 auVar92);
    }
    auVar69 = vsubps_avx512vl(local_320,auVar55);
    auVar70 = vsubps_avx512vl(local_300,auVar54);
    auVar71 = vsubps_avx512vl(local_2e0,auVar92);
    auVar89 = vmulps_avx512vl(auVar70,auVar70);
    auVar89 = vfmadd231ps_avx512vl(auVar89,auVar69,auVar69);
    auVar89 = vfmadd231ps_avx512vl(auVar89,auVar71,auVar71);
    auVar91 = vbroadcastss_avx512vl(ZEXT416(param_14));
    uVar31 = vcmpps_avx512vl(auVar91,auVar89,1);
    uVar31 = uVar10 & uVar31;
    bVar30 = (byte)uVar31;
    if (bVar30 != 0) {
      auVar89 = vdivps_avx512vl(auVar91,auVar89);
      auVar89 = vsqrtps_avx512vl(auVar89);
      auVar55 = vfmadd213ps_avx512vl(auVar69,auVar89,auVar55);
      auVar54 = vfmadd213ps_avx512vl(auVar70,auVar89,auVar54);
      auVar92 = vfmadd213ps_avx512vl(auVar71,auVar89,auVar92);
      bVar3 = (bool)((byte)(uVar31 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar31 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar31 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar31 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar31 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar31 >> 6) & 1);
      bVar9 = SUB81(uVar31 >> 7,0);
      local_320._4_4_ = (uint)bVar3 * auVar55._4_4_ | (uint)!bVar3 * local_320._4_4_;
      local_320._0_4_ =
           (uint)(bVar30 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar30 & 1) * local_320._0_4_;
      local_320._8_4_ = (uint)bVar4 * auVar55._8_4_ | (uint)!bVar4 * local_320._8_4_;
      local_320._12_4_ = (uint)bVar5 * auVar55._12_4_ | (uint)!bVar5 * local_320._12_4_;
      local_320._16_4_ = (uint)bVar6 * auVar55._16_4_ | (uint)!bVar6 * local_320._16_4_;
      local_320._20_4_ = (uint)bVar7 * auVar55._20_4_ | (uint)!bVar7 * local_320._20_4_;
      local_320._24_4_ = (uint)bVar8 * auVar55._24_4_ | (uint)!bVar8 * local_320._24_4_;
      local_320._28_4_ = (uint)bVar9 * auVar55._28_4_ | (uint)!bVar9 * local_320._28_4_;
      bVar3 = (bool)((byte)(uVar31 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar31 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar31 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar31 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar31 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar31 >> 6) & 1);
      bVar9 = SUB81(uVar31 >> 7,0);
      local_300._4_4_ = (uint)bVar3 * auVar54._4_4_ | (uint)!bVar3 * local_300._4_4_;
      local_300._0_4_ =
           (uint)(bVar30 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar30 & 1) * local_300._0_4_;
      local_300._8_4_ = (uint)bVar4 * auVar54._8_4_ | (uint)!bVar4 * local_300._8_4_;
      local_300._12_4_ = (uint)bVar5 * auVar54._12_4_ | (uint)!bVar5 * local_300._12_4_;
      local_300._16_4_ = (uint)bVar6 * auVar54._16_4_ | (uint)!bVar6 * local_300._16_4_;
      local_300._20_4_ = (uint)bVar7 * auVar54._20_4_ | (uint)!bVar7 * local_300._20_4_;
      local_300._24_4_ = (uint)bVar8 * auVar54._24_4_ | (uint)!bVar8 * local_300._24_4_;
      local_300._28_4_ = (uint)bVar9 * auVar54._28_4_ | (uint)!bVar9 * local_300._28_4_;
      bVar3 = (bool)((byte)(uVar31 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar31 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar31 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar31 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar31 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar31 >> 6) & 1);
      bVar9 = SUB81(uVar31 >> 7,0);
      local_2e0._4_4_ = (uint)bVar3 * auVar92._4_4_ | (uint)!bVar3 * local_2e0._4_4_;
      local_2e0._0_4_ =
           (uint)(bVar30 & 1) * auVar92._0_4_ | (uint)!(bool)(bVar30 & 1) * local_2e0._0_4_;
      local_2e0._8_4_ = (uint)bVar4 * auVar92._8_4_ | (uint)!bVar4 * local_2e0._8_4_;
      local_2e0._12_4_ = (uint)bVar5 * auVar92._12_4_ | (uint)!bVar5 * local_2e0._12_4_;
      local_2e0._16_4_ = (uint)bVar6 * auVar92._16_4_ | (uint)!bVar6 * local_2e0._16_4_;
      local_2e0._20_4_ = (uint)bVar7 * auVar92._20_4_ | (uint)!bVar7 * local_2e0._20_4_;
      local_2e0._24_4_ = (uint)bVar8 * auVar92._24_4_ | (uint)!bVar8 * local_2e0._24_4_;
      local_2e0._28_4_ = (uint)bVar9 * auVar92._28_4_ | (uint)!bVar9 * local_2e0._28_4_;
    }
    if (bVar29 == 0xff) {
      auVar55 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,local_2e0,local_300);
      auVar54 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,local_320,local_300);
      auVar54 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar54,auVar55);
      auVar95._8_8_ = local_320._24_8_;
      auVar95._0_8_ = local_320._24_8_;
      auVar95._16_8_ = local_320._24_8_;
      auVar95._24_8_ = local_320._24_8_;
      *pauVar26 = auVar54;
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar55,local_320);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar28 * 0xc) = auVar55;
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000900000008
                                   ,local_300,auVar95);
      auVar55 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar55,local_2e0);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar28 * 0xc) = auVar55;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar26) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar10,
                 local_320);
      vscatterdps_avx512vl
                (ZEXT832(pauVar26) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar10,
                 local_300);
      vscatterdps_avx512vl
                (ZEXT832(pauVar26) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar10,
                 local_2e0);
    }
  }
  return;
}

// PreSubstepInterpolation_avx512skx @ 140cd3ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PreSubstepInterpolation_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,uint param_8,int param_9)

{
  undefined1 (*pauVar1) [32];
  byte bVar2;
  bool bVar3;
  float fVar4;
  ulonglong uVar5;
  undefined1 auVar6 [32];
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RBX;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar19 [16];
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
  undefined1 in_ZMM16 [64];
  undefined1 auVar47 [16];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar30 [32];
  
  auVar31 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar34 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar33 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar32 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar30 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar38 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar35 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar28 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar29 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar47 = in_ZMM17._0_16_;
  auVar19 = in_ZMM16._0_16_;
  uVar12 = (ulonglong)param_8;
  uVar11 = param_9 - param_8;
  uVar7 = uVar11 + 7;
  if (-1 < (int)uVar11) {
    uVar7 = uVar11;
  }
  iVar8 = ((uVar7 & 0xfffffff8) - uVar11) + param_9;
  if ((int)param_8 < iVar8) {
    auVar43._4_4_ = param_7;
    auVar43._0_4_ = param_7;
    auVar43._8_4_ = param_7;
    auVar43._12_4_ = param_7;
    auVar43._16_4_ = param_7;
    auVar43._20_4_ = param_7;
    auVar43._24_4_ = param_7;
    auVar43._28_4_ = param_7;
    fVar4 = __real_3f800000 - param_7;
    auVar45._4_4_ = fVar4;
    auVar45._0_4_ = fVar4;
    auVar45._8_4_ = fVar4;
    auVar45._12_4_ = fVar4;
    auVar45._16_4_ = fVar4;
    auVar45._20_4_ = fVar4;
    auVar45._24_4_ = fVar4;
    auVar45._28_4_ = fVar4;
    uVar12 = (ulonglong)(int)param_8;
    unaff_RBX = uVar12 * 0xc;
    lVar15 = param_3 + 0x40;
    lVar16 = param_4 + 0x40;
    lVar13 = param_1 + 0x40;
    lVar14 = param_5 + 0x40;
    lVar10 = param_6 + 0x40;
    auVar19 = __ymm_00000004000000030000000200000001000000000000000c0000000b0000000a._0_16_;
    auVar47 = __ymm_0000000000000002000000000000000900000001000000000000000800000000._0_16_;
    lVar9 = param_2 + 0x40;
    auVar20 = vbroadcastss_avx512vl(ZEXT416(__real_00800000));
    auVar18 = vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
    do {
      auVar21 = *(undefined1 (*) [32])(lVar15 + -0x40 + unaff_RBX);
      auVar23 = *(undefined1 (*) [32])(lVar15 + -0x20 + unaff_RBX);
      auVar26 = vblendps_avx(auVar23,auVar21,0x24);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar29,auVar23);
      auVar22 = vpermt2ps_avx512vl(auVar26,auVar35,*(undefined1 (*) [32])(lVar15 + unaff_RBX));
      auVar23 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar15 + unaff_RBX),auVar28,auVar23);
      auVar24 = vinsertf32x4_avx512vl(auVar21,auVar23._0_16_,1);
      auVar25 = vshuff64x2_avx512vl(auVar21,auVar23,3);
      auVar21 = *(undefined1 (*) [32])(lVar16 + -0x40 + unaff_RBX);
      auVar23 = *(undefined1 (*) [32])(lVar16 + -0x20 + unaff_RBX);
      auVar26 = vblendps_avx(auVar23,auVar21,0x24);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar29,auVar23);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar35,*(undefined1 (*) [32])(lVar16 + unaff_RBX));
      auVar23 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar16 + unaff_RBX),auVar28,auVar23);
      auVar27 = vinsertf32x4_avx512vl(auVar21,auVar23._0_16_,1);
      auVar21 = vshuff64x2_avx512vl(auVar21,auVar23,3);
      auVar23 = vmulps_avx512vl(auVar45,auVar27);
      auVar21 = vmulps_avx512vl(auVar45,auVar21);
      auVar26 = vmulps_avx512vl(auVar45,auVar26);
      auVar23 = vfmadd231ps_avx512vl(auVar23,auVar43,auVar24);
      auVar21 = vfmadd231ps_avx512vl(auVar21,auVar43,auVar25);
      auVar26 = vfmadd231ps_avx512vl(auVar26,auVar43,auVar22);
      auVar22 = vpermt2ps_avx512vl(auVar26,auVar38,auVar21);
      auVar24 = vpermt2ps_avx512vl(auVar23,auVar30,auVar21);
      auVar24 = vpermt2ps_avx512vl(auVar24,auVar32,auVar22);
      *(undefined1 (*) [32])(lVar13 + -0x40 + unaff_RBX) = auVar24;
      auVar22 = vpermt2ps_avx512vl(auVar22,auVar33,auVar23);
      *(undefined1 (*) [32])(lVar13 + -0x20 + unaff_RBX) = auVar22;
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar34,auVar23);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar31,auVar26);
      *(undefined1 (*) [32])(lVar13 + unaff_RBX) = auVar21;
      auVar21 = *(undefined1 (*) [32])(lVar14 + -0x40 + unaff_RBX);
      auVar23 = *(undefined1 (*) [32])(lVar14 + -0x20 + unaff_RBX);
      auVar26 = vblendps_avx(auVar23,auVar21,0x24);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar29,auVar23);
      auVar22 = vpermt2ps_avx512vl(auVar26,auVar35,*(undefined1 (*) [32])(lVar14 + unaff_RBX));
      auVar23 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar14 + unaff_RBX),auVar28,auVar23);
      auVar24 = vinsertf32x4_avx512vl(auVar21,auVar23._0_16_,1);
      auVar25 = vshuff64x2_avx512vl(auVar21,auVar23,3);
      auVar21 = *(undefined1 (*) [32])(lVar10 + -0x40 + unaff_RBX);
      auVar23 = *(undefined1 (*) [32])(lVar10 + -0x20 + unaff_RBX);
      auVar26 = vblendps_avx(auVar23,auVar21,0x24);
      auVar21 = vpermt2ps_avx512vl(auVar21,auVar29,auVar23);
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar35,*(undefined1 (*) [32])(lVar10 + unaff_RBX));
      auVar23 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(lVar10 + unaff_RBX),auVar28,auVar23);
      auVar27 = vinsertf32x4_avx512vl(auVar21,auVar23._0_16_,1);
      auVar21 = vshuff64x2_avx512vl(auVar21,auVar23,3);
      auVar23 = vmulps_avx512vl(auVar45,auVar27);
      auVar21 = vmulps_avx512vl(auVar45,auVar21);
      auVar26 = vmulps_avx512vl(auVar45,auVar26);
      auVar23 = vfmadd231ps_avx512vl(auVar23,auVar43,auVar24);
      auVar21 = vfmadd231ps_avx512vl(auVar21,auVar43,auVar25);
      auVar26 = vfmadd231ps_avx512vl(auVar26,auVar43,auVar22);
      auVar22 = vmulps_avx512vl(auVar21,auVar21);
      auVar22 = vfmadd231ps_avx512vl(auVar22,auVar23,auVar23);
      auVar22 = vfmadd231ps_avx512vl(auVar22,auVar26,auVar26);
      uVar5 = vcmpps_avx512vl(auVar22,auVar20,2);
      auVar22 = vsqrtps_avx512vl(auVar22);
      auVar23 = vdivps_avx512vl(auVar23,auVar22);
      auVar21 = vdivps_avx512vl(auVar21,auVar22);
      auVar26 = vdivps_avx512vl(auVar26,auVar22);
      auVar22 = vbroadcastss_avx512vl(ZEXT416((uint)__real_3f800000));
      bVar17 = (byte)uVar5;
      auVar24._0_4_ = (uint)(bVar17 & 1) * auVar22._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar23._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar24._4_4_ = (uint)bVar3 * auVar22._4_4_ | (uint)!bVar3 * auVar23._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar24._8_4_ = (uint)bVar3 * auVar22._8_4_ | (uint)!bVar3 * auVar23._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar24._12_4_ = (uint)bVar3 * auVar22._12_4_ | (uint)!bVar3 * auVar23._12_4_;
      bVar3 = (bool)((byte)(uVar5 >> 4) & 1);
      auVar24._16_4_ = (uint)bVar3 * auVar22._16_4_ | (uint)!bVar3 * auVar23._16_4_;
      bVar3 = (bool)((byte)(uVar5 >> 5) & 1);
      auVar24._20_4_ = (uint)bVar3 * auVar22._20_4_ | (uint)!bVar3 * auVar23._20_4_;
      bVar3 = (bool)((byte)(uVar5 >> 6) & 1);
      auVar24._24_4_ = (uint)bVar3 * auVar22._24_4_ | (uint)!bVar3 * auVar23._24_4_;
      bVar3 = SUB81(uVar5 >> 7,0);
      auVar24._28_4_ = (uint)bVar3 * auVar22._28_4_ | (uint)!bVar3 * auVar23._28_4_;
      auVar23._0_4_ = (uint)(bVar17 & 1) * auVar18._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar21._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar23._4_4_ = (uint)bVar3 * auVar18._4_4_ | (uint)!bVar3 * auVar21._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar23._8_4_ = (uint)bVar3 * auVar18._8_4_ | (uint)!bVar3 * auVar21._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar23._12_4_ = (uint)bVar3 * auVar18._12_4_ | (uint)!bVar3 * auVar21._12_4_;
      auVar23._16_4_ = (uint)!(bool)((byte)(uVar5 >> 4) & 1) * auVar21._16_4_;
      auVar23._20_4_ = (uint)!(bool)((byte)(uVar5 >> 5) & 1) * auVar21._20_4_;
      auVar23._24_4_ = (uint)!(bool)((byte)(uVar5 >> 6) & 1) * auVar21._24_4_;
      bVar3 = SUB81(uVar5 >> 7,0);
      auVar23._28_4_ =
           (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar21._28_4_;
      auVar21._0_4_ = (uint)(bVar17 & 1) * auVar18._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar26._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar21._4_4_ = (uint)bVar3 * auVar18._4_4_ | (uint)!bVar3 * auVar26._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar21._8_4_ = (uint)bVar3 * auVar18._8_4_ | (uint)!bVar3 * auVar26._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar21._12_4_ = (uint)bVar3 * auVar18._12_4_ | (uint)!bVar3 * auVar26._12_4_;
      auVar21._16_4_ = (uint)!(bool)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
      auVar21._20_4_ = (uint)!(bool)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
      auVar21._24_4_ = (uint)!(bool)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
      auVar21._28_4_ = (uint)!SUB81(uVar5 >> 7,0) * auVar26._28_4_;
      auVar26 = vpermt2ps_avx512vl(auVar21,auVar38,auVar23);
      auVar22 = vpermt2ps_avx512vl(auVar24,auVar30,auVar23);
      auVar22 = vpermt2ps_avx512vl(auVar22,auVar32,auVar26);
      *(undefined1 (*) [32])(lVar9 + -0x40 + unaff_RBX) = auVar22;
      auVar26 = vpermt2ps_avx512vl(auVar26,auVar33,auVar24);
      *(undefined1 (*) [32])(lVar9 + -0x20 + unaff_RBX) = auVar26;
      auVar23 = vpermt2ps_avx512vl(auVar23,auVar34,auVar24);
      auVar21 = vpermt2ps_avx512vl(auVar23,auVar31,auVar21);
      *(undefined1 (*) [32])(lVar9 + unaff_RBX) = auVar21;
      uVar12 = uVar12 + 8;
      lVar15 = lVar15 + 0x60;
      lVar16 = lVar16 + 0x60;
      lVar13 = lVar13 + 0x60;
      lVar14 = lVar14 + 0x60;
      lVar10 = lVar10 + 0x60;
      lVar9 = lVar9 + 0x60;
    } while ((longlong)uVar12 < (longlong)iVar8);
  }
  if ((int)uVar12 < param_9) {
    auVar28 = vpbroadcastd_avx512vl();
    auVar29._0_4_ =
         auVar28._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar29._4_4_ = auVar28._4_4_ + _UNK_150b50ae4;
    auVar29._8_4_ = auVar28._8_4_ + _UNK_150b50ae8;
    auVar29._12_4_ = auVar28._12_4_ + _UNK_150b50aec;
    auVar29._16_4_ = auVar28._16_4_ + _UNK_150b50af0;
    auVar29._20_4_ = auVar28._20_4_ + _UNK_150b50af4;
    auVar29._24_4_ = auVar28._24_4_ + _UNK_150b50af8;
    auVar29._28_4_ = auVar28._28_4_ + _UNK_150b50afc;
    auVar28 = vpbroadcastd_avx512vl();
    uVar5 = vpcmpgtd_avx512vl(auVar28,auVar29);
    lVar15 = (longlong)(int)uVar12;
    pauVar1 = (undefined1 (*) [32])(param_3 + lVar15 * 0xc);
    bVar17 = (byte)uVar5;
    if (bVar17 == 0xff) {
      auVar29 = pauVar1[1];
      auVar28 = vblendps_avx(auVar29,*pauVar1,0x24);
      auVar35 = vpermt2ps_avx512vl(*pauVar1,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar29);
      auVar31 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,pauVar1[2]);
      auVar29 = vpermt2ps_avx512vl(pauVar1[2],
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar29);
      auVar30._16_16_ = auVar29._0_16_;
      auVar30._0_16_ = auVar35._0_16_;
      auVar38 = vperm2f128_avx(auVar35,auVar29,0x31);
      auVar29 = *(undefined1 (*) [32])(param_4 + lVar15 * 0xc);
      auVar28 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar15 * 0xc);
      auVar35 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar15 * 0xc);
      auVar32 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar29,auVar28);
      auVar33 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar35,auVar28);
      auVar34 = vinsertf32x4_avx512vl(auVar32,auVar33._0_16_,1);
      auVar32 = vshuff64x2_avx512vl(auVar32,auVar33,3);
      auVar29 = vblendps_avx(auVar28,auVar29,0x24);
      auVar28 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar35);
    }
    else {
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_1));
      auVar30._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar30._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar30._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar30._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar30._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar30._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar30._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar30._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_2));
      auVar38._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar38._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar38._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar38._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar38._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar38._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar38._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar38._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
      auVar31._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar31._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar31._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar31._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar31._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar31._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar31._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar31._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      param_4 = param_4 + lVar15 * 0xc;
      auVar19 = vxorps_avx512vl(auVar19,auVar19);
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_4 + param_1));
      auVar34._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar34._4_4_ = (uint)bVar3 * auVar29._4_4_ | (uint)!bVar3 * auVar19._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar34._8_4_ = (uint)bVar3 * auVar29._8_4_ | (uint)!bVar3 * auVar19._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar34._12_4_ = (uint)bVar3 * auVar29._12_4_ | (uint)!bVar3 * auVar19._12_4_;
      auVar34._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar34._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar34._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar34._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar19 = vxorps_avx512vl(auVar47,auVar47);
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_4 + param_2));
      auVar32._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar32._4_4_ = (uint)bVar3 * auVar29._4_4_ | (uint)!bVar3 * auVar19._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar32._8_4_ = (uint)bVar3 * auVar29._8_4_ | (uint)!bVar3 * auVar19._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar32._12_4_ = (uint)bVar3 * auVar29._12_4_ | (uint)!bVar3 * auVar19._12_4_;
      auVar32._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar32._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar32._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar32._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_4 + unaff_RBX));
      auVar28._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar28._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar28._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar28._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar28._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar28._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar28._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar28._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
    }
    auVar20._4_4_ = param_7;
    auVar20._0_4_ = param_7;
    auVar20._8_4_ = param_7;
    auVar20._12_4_ = param_7;
    auVar20._16_4_ = param_7;
    auVar20._20_4_ = param_7;
    auVar20._24_4_ = param_7;
    auVar20._28_4_ = param_7;
    auVar19 = vsubss_avx512f(ZEXT416((uint)__real_3f800000),ZEXT416((uint)param_7));
    auVar33._0_4_ = auVar19._0_4_;
    auVar33._4_4_ = auVar33._0_4_;
    auVar33._8_4_ = auVar33._0_4_;
    auVar33._12_4_ = auVar33._0_4_;
    auVar33._16_4_ = auVar33._0_4_;
    auVar33._20_4_ = auVar33._0_4_;
    auVar33._24_4_ = auVar33._0_4_;
    auVar33._28_4_ = auVar33._0_4_;
    auVar29 = vmulps_avx512vl(auVar33,auVar34);
    auVar35 = vmulps_avx512vl(auVar33,auVar32);
    auVar29 = vfmadd231ps_avx512vl(auVar29,auVar20,auVar30);
    auVar35 = vfmadd231ps_avx512vl(auVar35,auVar20,auVar38);
    auVar26._0_4_ = param_7 * auVar31._0_4_ + auVar33._0_4_ * auVar28._0_4_;
    auVar26._4_4_ = param_7 * auVar31._4_4_ + auVar33._0_4_ * auVar28._4_4_;
    auVar26._8_4_ = param_7 * auVar31._8_4_ + auVar33._0_4_ * auVar28._8_4_;
    auVar26._12_4_ = param_7 * auVar31._12_4_ + auVar33._0_4_ * auVar28._12_4_;
    auVar26._16_4_ = param_7 * auVar31._16_4_ + auVar33._0_4_ * auVar28._16_4_;
    auVar26._20_4_ = param_7 * auVar31._20_4_ + auVar33._0_4_ * auVar28._20_4_;
    auVar26._24_4_ = param_7 * auVar31._24_4_ + auVar33._0_4_ * auVar28._24_4_;
    auVar26._28_4_ = param_7 * auVar31._28_4_ + auVar33._0_4_ * auVar28._28_4_;
    pauVar1 = (undefined1 (*) [32])(param_1 + lVar15 * 0xc);
    if (bVar17 == 0xff) {
      auVar28 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar26,auVar35);
      auVar38 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar29,auVar35);
      auVar38 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar38,auVar28);
      *pauVar1 = auVar38;
      auVar28 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar28,auVar29);
      pauVar1[1] = auVar28;
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar35,auVar29);
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar29,auVar26);
      pauVar1[2] = auVar29;
      lVar16 = lVar15 * 0xc;
      auVar29 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar16);
      auVar28 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar16);
      auVar35 = vblendps_avx(auVar29,*(undefined1 (*) [32])(param_5 + lVar16),0x24);
      auVar38 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_5 + lVar16),
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar29);
      auVar36 = vpermt2ps_avx512vl(auVar35,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar28);
      auVar29 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar29);
      auVar25._16_16_ = auVar29._0_16_;
      auVar25._0_16_ = auVar38._0_16_;
      auVar22 = vperm2f128_avx(auVar38,auVar29,0x31);
      auVar29 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar16);
      auVar28 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar16);
      auVar35 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*(undefined1 (*) [32])(param_6 + lVar16),auVar29);
      auVar38 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar28,auVar29);
      auVar37 = vinsertf32x4_avx512vl(auVar35,auVar38._0_16_,1);
      auVar27 = vshuff64x2_avx512vl(auVar35,auVar38,3);
      auVar29 = vblendps_avx(auVar29,*(undefined1 (*) [32])(param_6 + lVar16),0x24);
      auVar35 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar28);
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar20,uVar5,auVar29);
      vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar31,uVar5,auVar35);
      vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar30,uVar5,auVar26);
      lVar16 = lVar15 * 0xc;
      param_5 = param_5 + lVar16;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_5 + lVar16));
      auVar25._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar25._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar25._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar25._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar25._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar25._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar25._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar25._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_5 + param_2));
      auVar22._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar22._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar22._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar22._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar22._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar22._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar22._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar22._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_5 + unaff_RBX));
      auVar36._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar36._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar36._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar36._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar36._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar36._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar36._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar36._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      param_6 = param_6 + lVar16;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_6 + lVar16));
      auVar37._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar37._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar37._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar37._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar37._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar37._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar37._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar37._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar19 = vxorps_avx512vl(auVar35._0_16_,auVar35._0_16_);
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_6 + param_2));
      auVar27._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_
      ;
      bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
      auVar27._4_4_ = (uint)bVar3 * auVar29._4_4_ | (uint)!bVar3 * auVar19._4_4_;
      bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
      auVar27._8_4_ = (uint)bVar3 * auVar29._8_4_ | (uint)!bVar3 * auVar19._8_4_;
      bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
      auVar27._12_4_ = (uint)bVar3 * auVar29._12_4_ | (uint)!bVar3 * auVar19._12_4_;
      auVar27._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar27._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar27._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar27._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
      auVar29 = vgatherdps_avx512vl(*(undefined4 *)(param_6 + unaff_RBX));
      auVar35._4_4_ = (uint)((byte)(uVar5 >> 1) & 1) * auVar29._4_4_;
      auVar35._0_4_ = (uint)(bVar17 & 1) * auVar29._0_4_;
      auVar35._8_4_ = (uint)((byte)(uVar5 >> 2) & 1) * auVar29._8_4_;
      auVar35._12_4_ = (uint)((byte)(uVar5 >> 3) & 1) * auVar29._12_4_;
      auVar35._16_4_ = (uint)((byte)(uVar5 >> 4) & 1) * auVar29._16_4_;
      auVar35._20_4_ = (uint)((byte)(uVar5 >> 5) & 1) * auVar29._20_4_;
      auVar35._24_4_ = (uint)((byte)(uVar5 >> 6) & 1) * auVar29._24_4_;
      auVar35._28_4_ = (uint)(byte)(uVar5 >> 7) * auVar29._28_4_;
    }
    auVar29 = vmulps_avx512vl(auVar33,auVar27);
    auVar46._0_4_ = param_7 * auVar25._0_4_ + auVar33._0_4_ * auVar37._0_4_;
    auVar46._4_4_ = param_7 * auVar25._4_4_ + auVar33._0_4_ * auVar37._4_4_;
    auVar46._8_4_ = param_7 * auVar25._8_4_ + auVar33._0_4_ * auVar37._8_4_;
    auVar46._12_4_ = param_7 * auVar25._12_4_ + auVar33._0_4_ * auVar37._12_4_;
    auVar46._16_4_ = param_7 * auVar25._16_4_ + auVar33._0_4_ * auVar37._16_4_;
    auVar46._20_4_ = param_7 * auVar25._20_4_ + auVar33._0_4_ * auVar37._20_4_;
    auVar46._24_4_ = param_7 * auVar25._24_4_ + auVar33._0_4_ * auVar37._24_4_;
    auVar46._28_4_ = param_7 * auVar25._28_4_ + auVar33._0_4_ * auVar37._28_4_;
    auVar38 = vfmadd231ps_avx512vl(auVar29,auVar20,auVar22);
    auVar42._0_4_ = param_7 * auVar36._0_4_ + auVar33._0_4_ * auVar35._0_4_;
    auVar42._4_4_ = param_7 * auVar36._4_4_ + auVar33._0_4_ * auVar35._4_4_;
    auVar42._8_4_ = param_7 * auVar36._8_4_ + auVar33._0_4_ * auVar35._8_4_;
    auVar42._12_4_ = param_7 * auVar36._12_4_ + auVar33._0_4_ * auVar35._12_4_;
    auVar42._16_4_ = param_7 * auVar36._16_4_ + auVar33._0_4_ * auVar35._16_4_;
    auVar42._20_4_ = param_7 * auVar36._20_4_ + auVar33._0_4_ * auVar35._20_4_;
    auVar42._24_4_ = param_7 * auVar36._24_4_ + auVar33._0_4_ * auVar35._24_4_;
    auVar42._28_4_ = param_7 * auVar36._28_4_ + auVar33._0_4_ * auVar35._28_4_;
    auVar29 = vmulps_avx512vl(auVar38,auVar38);
    auVar44._0_4_ = auVar42._0_4_ * auVar42._0_4_ + auVar46._0_4_ * auVar46._0_4_ + auVar29._0_4_;
    auVar44._4_4_ = auVar42._4_4_ * auVar42._4_4_ + auVar46._4_4_ * auVar46._4_4_ + auVar29._4_4_;
    auVar44._8_4_ = auVar42._8_4_ * auVar42._8_4_ + auVar46._8_4_ * auVar46._8_4_ + auVar29._8_4_;
    auVar44._12_4_ =
         auVar42._12_4_ * auVar42._12_4_ + auVar46._12_4_ * auVar46._12_4_ + auVar29._12_4_;
    auVar44._16_4_ =
         auVar42._16_4_ * auVar42._16_4_ + auVar46._16_4_ * auVar46._16_4_ + auVar29._16_4_;
    auVar44._20_4_ =
         auVar42._20_4_ * auVar42._20_4_ + auVar46._20_4_ * auVar46._20_4_ + auVar29._20_4_;
    auVar44._24_4_ =
         auVar42._24_4_ * auVar42._24_4_ + auVar46._24_4_ * auVar46._24_4_ + auVar29._24_4_;
    auVar44._28_4_ =
         auVar42._28_4_ * auVar42._28_4_ + auVar46._28_4_ * auVar46._28_4_ + auVar29._28_4_;
    auVar6._4_4_ = __real_00800000;
    auVar6._0_4_ = __real_00800000;
    auVar6._8_4_ = __real_00800000;
    auVar6._12_4_ = __real_00800000;
    auVar6._16_4_ = __real_00800000;
    auVar6._20_4_ = __real_00800000;
    auVar6._24_4_ = __real_00800000;
    auVar6._28_4_ = __real_00800000;
    uVar12 = vcmpps_avx512vl(auVar44,auVar6,2);
    auVar28 = vsqrtps_avx(auVar44);
    auVar29 = vdivps_avx(auVar46,auVar28);
    auVar35 = vdivps_avx512vl(auVar38,auVar28);
    auVar38 = vbroadcastss_avx512vl(ZEXT416((uint)__real_3f800000));
    bVar2 = (byte)uVar12;
    auVar39._0_4_ = (uint)(bVar2 & 1) * auVar38._0_4_ | (uint)!(bool)(bVar2 & 1) * auVar29._0_4_;
    bVar3 = (bool)((byte)(uVar12 >> 1) & 1);
    auVar39._4_4_ = (uint)bVar3 * auVar38._4_4_ | (uint)!bVar3 * auVar29._4_4_;
    bVar3 = (bool)((byte)(uVar12 >> 2) & 1);
    auVar39._8_4_ = (uint)bVar3 * auVar38._8_4_ | (uint)!bVar3 * auVar29._8_4_;
    bVar3 = (bool)((byte)(uVar12 >> 3) & 1);
    auVar39._12_4_ = (uint)bVar3 * auVar38._12_4_ | (uint)!bVar3 * auVar29._12_4_;
    bVar3 = (bool)((byte)(uVar12 >> 4) & 1);
    auVar39._16_4_ = (uint)bVar3 * auVar38._16_4_ | (uint)!bVar3 * auVar29._16_4_;
    bVar3 = (bool)((byte)(uVar12 >> 5) & 1);
    auVar39._20_4_ = (uint)bVar3 * auVar38._20_4_ | (uint)!bVar3 * auVar29._20_4_;
    bVar3 = (bool)((byte)(uVar12 >> 6) & 1);
    auVar39._24_4_ = (uint)bVar3 * auVar38._24_4_ | (uint)!bVar3 * auVar29._24_4_;
    bVar3 = SUB81(uVar12 >> 7,0);
    auVar39._28_4_ = (uint)bVar3 * auVar38._28_4_ | (uint)!bVar3 * auVar29._28_4_;
    auVar29 = vdivps_avx(auVar42,auVar28);
    auVar40._4_4_ = (uint)!(bool)((byte)(uVar12 >> 1) & 1) * auVar35._4_4_;
    auVar40._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar35._0_4_;
    auVar40._8_4_ = (uint)!(bool)((byte)(uVar12 >> 2) & 1) * auVar35._8_4_;
    auVar40._12_4_ = (uint)!(bool)((byte)(uVar12 >> 3) & 1) * auVar35._12_4_;
    auVar40._16_4_ = (uint)!(bool)((byte)(uVar12 >> 4) & 1) * auVar35._16_4_;
    auVar40._20_4_ = (uint)!(bool)((byte)(uVar12 >> 5) & 1) * auVar35._20_4_;
    auVar40._24_4_ = (uint)!(bool)((byte)(uVar12 >> 6) & 1) * auVar35._24_4_;
    bVar3 = SUB81(uVar12 >> 7,0);
    auVar40._28_4_ =
         (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar35._28_4_;
    auVar41._4_4_ = (uint)!(bool)((byte)(uVar12 >> 1) & 1) * auVar29._4_4_;
    auVar41._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar29._0_4_;
    auVar41._8_4_ = (uint)!(bool)((byte)(uVar12 >> 2) & 1) * auVar29._8_4_;
    auVar41._12_4_ = (uint)!(bool)((byte)(uVar12 >> 3) & 1) * auVar29._12_4_;
    auVar41._16_4_ = (uint)!(bool)((byte)(uVar12 >> 4) & 1) * auVar29._16_4_;
    auVar41._20_4_ = (uint)!(bool)((byte)(uVar12 >> 5) & 1) * auVar29._20_4_;
    auVar41._24_4_ = (uint)!(bool)((byte)(uVar12 >> 6) & 1) * auVar29._24_4_;
    auVar41._28_4_ = (uint)!SUB81(uVar12 >> 7,0) * auVar29._28_4_;
    pauVar1 = (undefined1 (*) [32])(param_2 + lVar15 * 0xc);
    if (bVar17 == 0xff) {
      auVar29 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar41,auVar40);
      auVar28 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar39,auVar40);
      auVar28 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar28,auVar29);
      *pauVar1 = auVar28;
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar29,auVar39);
      pauVar1[1] = auVar29;
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                   ,auVar40,auVar39);
      auVar29 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar29,auVar41);
      pauVar1[2] = auVar29;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar5,
                 auVar39);
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar5,
                 auVar40);
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar5,
                 auVar41);
    }
  }
  return;
}

// CalculateBounds_avx512skx @ 140cd44a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateBounds_avx512skx
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong unaff_RBX;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  
  uVar1 = *param_1;
  local_a0._4_4_ = uVar1;
  local_a0._0_4_ = uVar1;
  local_a0._8_4_ = uVar1;
  local_a0._12_4_ = uVar1;
  local_a0._16_4_ = uVar1;
  local_a0._20_4_ = uVar1;
  local_a0._24_4_ = uVar1;
  local_a0._28_4_ = uVar1;
  uVar1 = param_1[1];
  local_80._4_4_ = uVar1;
  local_80._0_4_ = uVar1;
  local_80._8_4_ = uVar1;
  local_80._12_4_ = uVar1;
  local_80._16_4_ = uVar1;
  local_80._20_4_ = uVar1;
  local_80._24_4_ = uVar1;
  local_80._28_4_ = uVar1;
  uVar1 = param_1[2];
  local_60._4_4_ = uVar1;
  local_60._0_4_ = uVar1;
  local_60._8_4_ = uVar1;
  local_60._12_4_ = uVar1;
  local_60._16_4_ = uVar1;
  local_60._20_4_ = uVar1;
  local_60._24_4_ = uVar1;
  local_60._28_4_ = uVar1;
  uVar1 = *param_2;
  local_100._4_4_ = uVar1;
  local_100._0_4_ = uVar1;
  local_100._8_4_ = uVar1;
  local_100._12_4_ = uVar1;
  local_100._16_4_ = uVar1;
  local_100._20_4_ = uVar1;
  local_100._24_4_ = uVar1;
  local_100._28_4_ = uVar1;
  uVar1 = param_2[1];
  local_e0._4_4_ = uVar1;
  local_e0._0_4_ = uVar1;
  local_e0._8_4_ = uVar1;
  local_e0._12_4_ = uVar1;
  local_e0._16_4_ = uVar1;
  local_e0._20_4_ = uVar1;
  local_e0._24_4_ = uVar1;
  local_e0._28_4_ = uVar1;
  uVar1 = param_2[2];
  local_c0._4_4_ = uVar1;
  local_c0._0_4_ = uVar1;
  local_c0._8_4_ = uVar1;
  local_c0._12_4_ = uVar1;
  local_c0._16_4_ = uVar1;
  local_c0._20_4_ = uVar1;
  local_c0._24_4_ = uVar1;
  local_c0._28_4_ = uVar1;
  iVar10 = (int)param_4;
  uVar13 = param_5 - iVar10;
  uVar11 = uVar13 + 7;
  if (-1 < (int)uVar13) {
    uVar11 = uVar13;
  }
  iVar12 = ((uVar11 & 0xfffffff8) - uVar13) + param_5;
  if (iVar10 < iVar12) {
    param_4 = (longlong)iVar10;
    pauVar14 = (undefined1 (*) [32])(param_3 + param_4 * 0xc + 0x40);
    do {
      auVar22 = pauVar14[-1];
      auVar21 = vblendps_avx(auVar22,pauVar14[-2],0x24);
      auVar20 = vpermt2ps_avx512vl(pauVar14[-2],
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar22);
      auVar21 = vpermt2ps_avx512vl(auVar21,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*pauVar14);
      auVar22 = vpermt2ps_avx512vl(*pauVar14,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar22);
      auVar23 = vinsertf32x4_avx512vl(auVar20,auVar22._0_16_,1);
      auVar22 = vshuff64x2_avx512vl(auVar20,auVar22,3);
      local_a0 = vminps_avx512vl(local_a0,auVar23);
      local_80 = vminps_avx512vl(local_80,auVar22);
      local_60 = vminps_avx(local_60,auVar21);
      local_100 = vmaxps_avx512vl(local_100,auVar23);
      local_e0 = vmaxps_avx512vl(local_e0,auVar22);
      local_c0 = vmaxps_avx(local_c0,auVar21);
      param_4 = param_4 + 8;
      pauVar14 = pauVar14 + 3;
    } while (param_4 < iVar12);
  }
  if ((int)param_4 < param_5) {
    auVar22 = vpbroadcastd_avx512vl();
    auVar22 = vpaddd_avx512vl(auVar22,
                              ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                             );
    auVar21 = vpbroadcastd_avx512vl();
    uVar9 = vpcmpgtd_avx512vl(auVar21,auVar22);
    pauVar14 = (undefined1 (*) [32])(param_3 + (longlong)(int)param_4 * 0xc);
    bVar15 = (byte)uVar9;
    if (bVar15 == 0xff) {
      auVar22 = pauVar14[1];
      auVar20 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar14,auVar22);
      auVar23 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar14[2],auVar22);
      auVar21 = vinsertf32x4_avx512vl(auVar20,auVar23._0_16_,1);
      auVar20 = vshuff64x2_avx512vl(auVar20,auVar23,3);
      auVar22 = vblendps_avx(auVar22,*pauVar14,0x24);
      auVar22 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar22,pauVar14[2]);
    }
    else {
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + (longlong)param_1));
      auVar21._4_4_ = (uint)((byte)(uVar9 >> 1) & 1) * auVar22._4_4_;
      auVar21._0_4_ = (uint)(bVar15 & 1) * auVar22._0_4_;
      auVar21._8_4_ = (uint)((byte)(uVar9 >> 2) & 1) * auVar22._8_4_;
      auVar21._12_4_ = (uint)((byte)(uVar9 >> 3) & 1) * auVar22._12_4_;
      auVar21._16_4_ = (uint)((byte)(uVar9 >> 4) & 1) * auVar22._16_4_;
      auVar21._20_4_ = (uint)((byte)(uVar9 >> 5) & 1) * auVar22._20_4_;
      auVar21._24_4_ = (uint)((byte)(uVar9 >> 6) & 1) * auVar22._24_4_;
      auVar21._28_4_ = (uint)(byte)(uVar9 >> 7) * auVar22._28_4_;
      auVar16 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + (longlong)param_2));
      auVar20._0_4_ = (uint)(bVar15 & 1) * auVar22._0_4_ | (uint)!(bool)(bVar15 & 1) * auVar16._0_4_
      ;
      bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
      auVar20._4_4_ = (uint)bVar2 * auVar22._4_4_ | (uint)!bVar2 * auVar16._4_4_;
      bVar2 = (bool)((byte)(uVar9 >> 2) & 1);
      auVar20._8_4_ = (uint)bVar2 * auVar22._8_4_ | (uint)!bVar2 * auVar16._8_4_;
      bVar2 = (bool)((byte)(uVar9 >> 3) & 1);
      auVar20._12_4_ = (uint)bVar2 * auVar22._12_4_ | (uint)!bVar2 * auVar16._12_4_;
      auVar20._16_4_ = (uint)((byte)(uVar9 >> 4) & 1) * auVar22._16_4_;
      auVar20._20_4_ = (uint)((byte)(uVar9 >> 5) & 1) * auVar22._20_4_;
      auVar20._24_4_ = (uint)((byte)(uVar9 >> 6) & 1) * auVar22._24_4_;
      auVar20._28_4_ = (uint)(byte)(uVar9 >> 7) * auVar22._28_4_;
      auVar16 = vxorps_avx512vl(__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                ._0_16_,__ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                        ._0_16_);
      auVar23 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + unaff_RBX));
      auVar22._0_4_ = (uint)(bVar15 & 1) * auVar23._0_4_ | (uint)!(bool)(bVar15 & 1) * auVar16._0_4_
      ;
      bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
      auVar22._4_4_ = (uint)bVar2 * auVar23._4_4_ | (uint)!bVar2 * auVar16._4_4_;
      bVar2 = (bool)((byte)(uVar9 >> 2) & 1);
      auVar22._8_4_ = (uint)bVar2 * auVar23._8_4_ | (uint)!bVar2 * auVar16._8_4_;
      bVar2 = (bool)((byte)(uVar9 >> 3) & 1);
      auVar22._12_4_ = (uint)bVar2 * auVar23._12_4_ | (uint)!bVar2 * auVar16._12_4_;
      auVar22._16_4_ = (uint)((byte)(uVar9 >> 4) & 1) * auVar23._16_4_;
      auVar22._20_4_ = (uint)((byte)(uVar9 >> 5) & 1) * auVar23._20_4_;
      auVar22._24_4_ = (uint)((byte)(uVar9 >> 6) & 1) * auVar23._24_4_;
      auVar22._28_4_ = (uint)(byte)(uVar9 >> 7) * auVar23._28_4_;
    }
    auVar23 = vminps_avx512vl(local_a0,auVar21);
    auVar24 = vminps_avx512vl(local_80,auVar20);
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_a0._4_4_ = (uint)bVar2 * auVar23._4_4_ | (uint)!bVar2 * local_a0._4_4_;
    local_a0._0_4_ = (uint)(bVar15 & 1) * auVar23._0_4_ | (uint)!(bool)(bVar15 & 1) * local_a0._0_4_
    ;
    local_a0._8_4_ = (uint)bVar3 * auVar23._8_4_ | (uint)!bVar3 * local_a0._8_4_;
    local_a0._12_4_ = (uint)bVar4 * auVar23._12_4_ | (uint)!bVar4 * local_a0._12_4_;
    local_a0._16_4_ = (uint)bVar5 * auVar23._16_4_ | (uint)!bVar5 * local_a0._16_4_;
    local_a0._20_4_ = (uint)bVar6 * auVar23._20_4_ | (uint)!bVar6 * local_a0._20_4_;
    local_a0._24_4_ = (uint)bVar7 * auVar23._24_4_ | (uint)!bVar7 * local_a0._24_4_;
    local_a0._28_4_ = (uint)bVar8 * auVar23._28_4_ | (uint)!bVar8 * local_a0._28_4_;
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_80._4_4_ = (uint)bVar2 * auVar24._4_4_ | (uint)!bVar2 * local_80._4_4_;
    local_80._0_4_ = (uint)(bVar15 & 1) * auVar24._0_4_ | (uint)!(bool)(bVar15 & 1) * local_80._0_4_
    ;
    local_80._8_4_ = (uint)bVar3 * auVar24._8_4_ | (uint)!bVar3 * local_80._8_4_;
    local_80._12_4_ = (uint)bVar4 * auVar24._12_4_ | (uint)!bVar4 * local_80._12_4_;
    local_80._16_4_ = (uint)bVar5 * auVar24._16_4_ | (uint)!bVar5 * local_80._16_4_;
    local_80._20_4_ = (uint)bVar6 * auVar24._20_4_ | (uint)!bVar6 * local_80._20_4_;
    local_80._24_4_ = (uint)bVar7 * auVar24._24_4_ | (uint)!bVar7 * local_80._24_4_;
    local_80._28_4_ = (uint)bVar8 * auVar24._28_4_ | (uint)!bVar8 * local_80._28_4_;
    auVar23 = vminps_avx512vl(local_60,auVar22);
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_60._4_4_ = (uint)bVar2 * auVar23._4_4_ | (uint)!bVar2 * local_60._4_4_;
    local_60._0_4_ = (uint)(bVar15 & 1) * auVar23._0_4_ | (uint)!(bool)(bVar15 & 1) * local_60._0_4_
    ;
    local_60._8_4_ = (uint)bVar3 * auVar23._8_4_ | (uint)!bVar3 * local_60._8_4_;
    local_60._12_4_ = (uint)bVar4 * auVar23._12_4_ | (uint)!bVar4 * local_60._12_4_;
    local_60._16_4_ = (uint)bVar5 * auVar23._16_4_ | (uint)!bVar5 * local_60._16_4_;
    local_60._20_4_ = (uint)bVar6 * auVar23._20_4_ | (uint)!bVar6 * local_60._20_4_;
    local_60._24_4_ = (uint)bVar7 * auVar23._24_4_ | (uint)!bVar7 * local_60._24_4_;
    local_60._28_4_ = (uint)bVar8 * auVar23._28_4_ | (uint)!bVar8 * local_60._28_4_;
    auVar21 = vmaxps_avx512vl(local_100,auVar21);
    auVar20 = vmaxps_avx512vl(local_e0,auVar20);
    auVar22 = vmaxps_avx512vl(local_c0,auVar22);
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_100._4_4_ = (uint)bVar2 * auVar21._4_4_ | (uint)!bVar2 * local_100._4_4_;
    local_100._0_4_ =
         (uint)(bVar15 & 1) * auVar21._0_4_ | (uint)!(bool)(bVar15 & 1) * local_100._0_4_;
    local_100._8_4_ = (uint)bVar3 * auVar21._8_4_ | (uint)!bVar3 * local_100._8_4_;
    local_100._12_4_ = (uint)bVar4 * auVar21._12_4_ | (uint)!bVar4 * local_100._12_4_;
    local_100._16_4_ = (uint)bVar5 * auVar21._16_4_ | (uint)!bVar5 * local_100._16_4_;
    local_100._20_4_ = (uint)bVar6 * auVar21._20_4_ | (uint)!bVar6 * local_100._20_4_;
    local_100._24_4_ = (uint)bVar7 * auVar21._24_4_ | (uint)!bVar7 * local_100._24_4_;
    local_100._28_4_ = (uint)bVar8 * auVar21._28_4_ | (uint)!bVar8 * local_100._28_4_;
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_e0._4_4_ = (uint)bVar2 * auVar20._4_4_ | (uint)!bVar2 * local_e0._4_4_;
    local_e0._0_4_ = (uint)(bVar15 & 1) * auVar20._0_4_ | (uint)!(bool)(bVar15 & 1) * local_e0._0_4_
    ;
    local_e0._8_4_ = (uint)bVar3 * auVar20._8_4_ | (uint)!bVar3 * local_e0._8_4_;
    local_e0._12_4_ = (uint)bVar4 * auVar20._12_4_ | (uint)!bVar4 * local_e0._12_4_;
    local_e0._16_4_ = (uint)bVar5 * auVar20._16_4_ | (uint)!bVar5 * local_e0._16_4_;
    local_e0._20_4_ = (uint)bVar6 * auVar20._20_4_ | (uint)!bVar6 * local_e0._20_4_;
    local_e0._24_4_ = (uint)bVar7 * auVar20._24_4_ | (uint)!bVar7 * local_e0._24_4_;
    local_e0._28_4_ = (uint)bVar8 * auVar20._28_4_ | (uint)!bVar8 * local_e0._28_4_;
    bVar2 = (bool)((byte)(uVar9 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar9 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar9 >> 3) & 1);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    bVar6 = (bool)((byte)(uVar9 >> 5) & 1);
    bVar7 = (bool)((byte)(uVar9 >> 6) & 1);
    bVar8 = SUB81(uVar9 >> 7,0);
    local_c0._4_4_ = (uint)bVar2 * auVar22._4_4_ | (uint)!bVar2 * local_c0._4_4_;
    local_c0._0_4_ = (uint)(bVar15 & 1) * auVar22._0_4_ | (uint)!(bool)(bVar15 & 1) * local_c0._0_4_
    ;
    local_c0._8_4_ = (uint)bVar3 * auVar22._8_4_ | (uint)!bVar3 * local_c0._8_4_;
    local_c0._12_4_ = (uint)bVar4 * auVar22._12_4_ | (uint)!bVar4 * local_c0._12_4_;
    local_c0._16_4_ = (uint)bVar5 * auVar22._16_4_ | (uint)!bVar5 * local_c0._16_4_;
    local_c0._20_4_ = (uint)bVar6 * auVar22._20_4_ | (uint)!bVar6 * local_c0._20_4_;
    local_c0._24_4_ = (uint)bVar7 * auVar22._24_4_ | (uint)!bVar7 * local_c0._24_4_;
    local_c0._28_4_ = (uint)bVar8 * auVar22._28_4_ | (uint)!bVar8 * local_c0._28_4_;
  }
  auVar16 = vextractf32x4_avx512vl(local_a0,1);
  auVar16 = vminps_avx512vl(auVar16,local_a0._0_16_);
  auVar17 = vshufpd_avx512vl(auVar16,auVar16,1);
  auVar16 = vminps_avx512vl(auVar17,auVar16);
  auVar17 = vmovshdup_avx512vl(auVar16);
  auVar16 = vminss_avx512f(auVar16,auVar17);
  auVar17 = vextractf32x4_avx512vl(local_80,1);
  auVar17 = vminps_avx512vl(auVar17,local_80._0_16_);
  auVar18 = vshufpd_avx512vl(auVar17,auVar17,1);
  auVar17 = vminps_avx512vl(auVar18,auVar17);
  auVar18 = vmovshdup_avx512vl(auVar17);
  auVar17 = vminss_avx512f(auVar17,auVar18);
  auVar18 = vextractf32x4_avx512vl(local_60,1);
  auVar18 = vminps_avx512vl(auVar18,local_60._0_16_);
  auVar19 = vshufpd_avx512vl(auVar18,auVar18,1);
  auVar18 = vminps_avx512vl(auVar19,auVar18);
  auVar19 = vmovshdup_avx512vl(auVar18);
  auVar18 = vminss_avx512f(auVar18,auVar19);
  *param_1 = auVar16._0_4_;
  param_1[1] = auVar17._0_4_;
  param_1[2] = auVar18._0_4_;
  auVar16 = vmaxps_avx(local_100._16_16_,local_100._0_16_);
  auVar17 = vshufpd_avx(auVar16,auVar16,1);
  auVar16 = vmaxps_avx(auVar17,auVar16);
  auVar17 = vmovshdup_avx(auVar16);
  auVar17 = vmaxss_avx(auVar17,auVar16);
  auVar16 = vmaxps_avx(local_e0._16_16_,local_e0._0_16_);
  auVar18 = vshufpd_avx(auVar16,auVar16,1);
  auVar16 = vmaxps_avx(auVar18,auVar16);
  auVar18 = vmovshdup_avx(auVar16);
  auVar18 = vmaxss_avx(auVar18,auVar16);
  auVar16 = vmaxps_avx(local_c0._16_16_,local_c0._0_16_);
  auVar19 = vshufpd_avx(auVar16,auVar16,1);
  auVar16 = vmaxps_avx(auVar19,auVar16);
  auVar19 = vmovshdup_avx(auVar16);
  auVar16 = vmaxss_avx(auVar19,auVar16);
  *param_2 = auVar17._0_4_;
  param_2[1] = auVar18._0_4_;
  param_2[2] = auVar16._0_4_;
  return;
}

// CalculateSquaredRadius_avx512skx @ 140cd4860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateSquaredRadius_avx512skx
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  longlong unaff_RBX;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  byte bVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  
  uVar1 = *param_1;
  auVar24._4_4_ = uVar1;
  auVar24._0_4_ = uVar1;
  auVar24._8_4_ = uVar1;
  auVar24._12_4_ = uVar1;
  auVar24._16_4_ = uVar1;
  auVar24._20_4_ = uVar1;
  auVar24._24_4_ = uVar1;
  auVar24._28_4_ = uVar1;
  iVar10 = (int)param_4;
  uVar13 = param_5 - iVar10;
  uVar11 = uVar13 + 7;
  if (-1 < (int)uVar13) {
    uVar11 = uVar13;
  }
  iVar12 = ((uVar11 & 0xfffffff8) - uVar13) + param_5;
  if (iVar10 < iVar12) {
    param_4 = (longlong)iVar10;
    pauVar14 = (undefined1 (*) [32])(param_3 + param_4 * 0xc + 0x40);
    do {
      auVar20 = pauVar14[-1];
      auVar18 = vblendps_avx(auVar20,pauVar14[-2],0x24);
      auVar16 = vpermt2ps_avx512vl(pauVar14[-2],
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar20);
      auVar17 = vpermt2ps_avx512vl(auVar18,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*pauVar14);
      auVar18 = vpermt2ps_avx512vl(*pauVar14,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar20);
      auVar19 = vinsertf32x4_avx512vl(auVar16,auVar18._0_16_,1);
      uVar1 = *param_2;
      auVar20._4_4_ = uVar1;
      auVar20._0_4_ = uVar1;
      auVar20._8_4_ = uVar1;
      auVar20._12_4_ = uVar1;
      auVar20._16_4_ = uVar1;
      auVar20._20_4_ = uVar1;
      auVar20._24_4_ = uVar1;
      auVar20._28_4_ = uVar1;
      auVar20 = vsubps_avx512vl(auVar19,auVar20);
      auVar16 = vshuff64x2_avx512vl(auVar16,auVar18,3);
      uVar1 = param_2[1];
      auVar18._4_4_ = uVar1;
      auVar18._0_4_ = uVar1;
      auVar18._8_4_ = uVar1;
      auVar18._12_4_ = uVar1;
      auVar18._16_4_ = uVar1;
      auVar18._20_4_ = uVar1;
      auVar18._24_4_ = uVar1;
      auVar18._28_4_ = uVar1;
      auVar18 = vsubps_avx512vl(auVar16,auVar18);
      uVar1 = param_2[2];
      auVar16._4_4_ = uVar1;
      auVar16._0_4_ = uVar1;
      auVar16._8_4_ = uVar1;
      auVar16._12_4_ = uVar1;
      auVar16._16_4_ = uVar1;
      auVar16._20_4_ = uVar1;
      auVar16._24_4_ = uVar1;
      auVar16._28_4_ = uVar1;
      auVar16 = vsubps_avx512vl(auVar17,auVar16);
      auVar17._0_4_ = auVar20._0_4_ * auVar20._0_4_ + auVar18._0_4_ * auVar18._0_4_;
      auVar17._4_4_ = auVar20._4_4_ * auVar20._4_4_ + auVar18._4_4_ * auVar18._4_4_;
      auVar17._8_4_ = auVar20._8_4_ * auVar20._8_4_ + auVar18._8_4_ * auVar18._8_4_;
      auVar17._12_4_ = auVar20._12_4_ * auVar20._12_4_ + auVar18._12_4_ * auVar18._12_4_;
      auVar17._16_4_ = auVar20._16_4_ * auVar20._16_4_ + auVar18._16_4_ * auVar18._16_4_;
      auVar17._20_4_ = auVar20._20_4_ * auVar20._20_4_ + auVar18._20_4_ * auVar18._20_4_;
      auVar17._24_4_ = auVar20._24_4_ * auVar20._24_4_ + auVar18._24_4_ * auVar18._24_4_;
      auVar17._28_4_ = auVar20._28_4_ * auVar20._28_4_ + auVar18._28_4_ * auVar18._28_4_;
      auVar20 = vfmadd231ps_avx512vl(auVar17,auVar16,auVar16);
      auVar24 = vmaxps_avx(auVar24,auVar20);
      param_4 = param_4 + 8;
      pauVar14 = pauVar14 + 3;
    } while (param_4 < iVar12);
  }
  auVar19 = auVar24;
  if ((int)param_4 < param_5) {
    auVar20 = vpbroadcastd_avx512vl();
    auVar5._0_4_ = auVar20._0_4_ +
                   ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar5._4_4_ = auVar20._4_4_ + _UNK_150b50ae4;
    auVar5._8_4_ = auVar20._8_4_ + _UNK_150b50ae8;
    auVar5._12_4_ = auVar20._12_4_ + _UNK_150b50aec;
    auVar5._16_4_ = auVar20._16_4_ + _UNK_150b50af0;
    auVar5._20_4_ = auVar20._20_4_ + _UNK_150b50af4;
    auVar5._24_4_ = auVar20._24_4_ + _UNK_150b50af8;
    auVar5._28_4_ = auVar20._28_4_ + _UNK_150b50afc;
    auVar20 = vpbroadcastd_avx512vl();
    uVar6 = vpcmpgtd_avx512vl(auVar20,auVar5);
    pauVar14 = (undefined1 (*) [32])(param_3 + (longlong)(int)param_4 * 0xc);
    bVar15 = (byte)uVar6;
    if (bVar15 == 0xff) {
      auVar20 = pauVar14[1];
      auVar18 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*pauVar14,auVar20);
      auVar16 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,pauVar14[2],auVar20);
      auVar21 = vinsertf32x4_avx512vl(auVar18,auVar16._0_16_,1);
      auVar22 = vshuff64x2_avx512vl(auVar18,auVar16,3);
      auVar20 = vblendps_avx(auVar20,*pauVar14,0x24);
      auVar23 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar20,pauVar14[2]);
    }
    else {
      auVar20 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + (longlong)param_2));
      auVar21._4_4_ = (uint)((byte)(uVar6 >> 1) & 1) * auVar20._4_4_;
      auVar21._0_4_ = (uint)(bVar15 & 1) * auVar20._0_4_;
      auVar21._8_4_ = (uint)((byte)(uVar6 >> 2) & 1) * auVar20._8_4_;
      auVar21._12_4_ = (uint)((byte)(uVar6 >> 3) & 1) * auVar20._12_4_;
      auVar21._16_4_ = (uint)((byte)(uVar6 >> 4) & 1) * auVar20._16_4_;
      auVar21._20_4_ = (uint)((byte)(uVar6 >> 5) & 1) * auVar20._20_4_;
      auVar21._24_4_ = (uint)((byte)(uVar6 >> 6) & 1) * auVar20._24_4_;
      auVar21._28_4_ = (uint)(byte)(uVar6 >> 7) * auVar20._28_4_;
      auVar20 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + unaff_RBX));
      auVar22._4_4_ = (uint)((byte)(uVar6 >> 1) & 1) * auVar20._4_4_;
      auVar22._0_4_ = (uint)(bVar15 & 1) * auVar20._0_4_;
      auVar22._8_4_ = (uint)((byte)(uVar6 >> 2) & 1) * auVar20._8_4_;
      auVar22._12_4_ = (uint)((byte)(uVar6 >> 3) & 1) * auVar20._12_4_;
      auVar22._16_4_ = (uint)((byte)(uVar6 >> 4) & 1) * auVar20._16_4_;
      auVar22._20_4_ = (uint)((byte)(uVar6 >> 5) & 1) * auVar20._20_4_;
      auVar22._24_4_ = (uint)((byte)(uVar6 >> 6) & 1) * auVar20._24_4_;
      auVar22._28_4_ = (uint)(byte)(uVar6 >> 7) * auVar20._28_4_;
      auVar20 = vgatherdps_avx512vl(*(undefined4 *)*pauVar14);
      auVar23._4_4_ = (uint)((byte)(uVar6 >> 1) & 1) * auVar20._4_4_;
      auVar23._0_4_ = (uint)(bVar15 & 1) * auVar20._0_4_;
      auVar23._8_4_ = (uint)((byte)(uVar6 >> 2) & 1) * auVar20._8_4_;
      auVar23._12_4_ = (uint)((byte)(uVar6 >> 3) & 1) * auVar20._12_4_;
      auVar23._16_4_ = (uint)((byte)(uVar6 >> 4) & 1) * auVar20._16_4_;
      auVar23._20_4_ = (uint)((byte)(uVar6 >> 5) & 1) * auVar20._20_4_;
      auVar23._24_4_ = (uint)((byte)(uVar6 >> 6) & 1) * auVar20._24_4_;
      auVar23._28_4_ = (uint)(byte)(uVar6 >> 7) * auVar20._28_4_;
    }
    uVar1 = *param_2;
    auVar7._4_4_ = uVar1;
    auVar7._0_4_ = uVar1;
    auVar7._8_4_ = uVar1;
    auVar7._12_4_ = uVar1;
    auVar7._16_4_ = uVar1;
    auVar7._20_4_ = uVar1;
    auVar7._24_4_ = uVar1;
    auVar7._28_4_ = uVar1;
    auVar20 = vsubps_avx512vl(auVar21,auVar7);
    uVar1 = param_2[1];
    auVar8._4_4_ = uVar1;
    auVar8._0_4_ = uVar1;
    auVar8._8_4_ = uVar1;
    auVar8._12_4_ = uVar1;
    auVar8._16_4_ = uVar1;
    auVar8._20_4_ = uVar1;
    auVar8._24_4_ = uVar1;
    auVar8._28_4_ = uVar1;
    auVar18 = vsubps_avx512vl(auVar22,auVar8);
    uVar1 = param_2[2];
    auVar9._4_4_ = uVar1;
    auVar9._0_4_ = uVar1;
    auVar9._8_4_ = uVar1;
    auVar9._12_4_ = uVar1;
    auVar9._16_4_ = uVar1;
    auVar9._20_4_ = uVar1;
    auVar9._24_4_ = uVar1;
    auVar9._28_4_ = uVar1;
    auVar16 = vsubps_avx512vl(auVar23,auVar9);
    auVar25._0_4_ =
         auVar16._0_4_ * auVar16._0_4_ +
         auVar20._0_4_ * auVar20._0_4_ + auVar18._0_4_ * auVar18._0_4_;
    auVar25._4_4_ =
         auVar16._4_4_ * auVar16._4_4_ +
         auVar20._4_4_ * auVar20._4_4_ + auVar18._4_4_ * auVar18._4_4_;
    auVar25._8_4_ =
         auVar16._8_4_ * auVar16._8_4_ +
         auVar20._8_4_ * auVar20._8_4_ + auVar18._8_4_ * auVar18._8_4_;
    auVar25._12_4_ =
         auVar16._12_4_ * auVar16._12_4_ +
         auVar20._12_4_ * auVar20._12_4_ + auVar18._12_4_ * auVar18._12_4_;
    auVar25._16_4_ =
         auVar16._16_4_ * auVar16._16_4_ +
         auVar20._16_4_ * auVar20._16_4_ + auVar18._16_4_ * auVar18._16_4_;
    auVar25._20_4_ =
         auVar16._20_4_ * auVar16._20_4_ +
         auVar20._20_4_ * auVar20._20_4_ + auVar18._20_4_ * auVar18._20_4_;
    auVar25._24_4_ =
         auVar16._24_4_ * auVar16._24_4_ +
         auVar20._24_4_ * auVar20._24_4_ + auVar18._24_4_ * auVar18._24_4_;
    auVar25._28_4_ =
         auVar16._28_4_ * auVar16._28_4_ +
         auVar20._28_4_ * auVar20._28_4_ + auVar18._28_4_ * auVar18._28_4_;
    auVar20 = vmaxps_avx512vl(auVar24,auVar25);
    auVar19._0_4_ = (uint)(bVar15 & 1) * auVar20._0_4_ | (uint)!(bool)(bVar15 & 1) * auVar24._0_4_;
    bVar2 = (bool)((byte)(uVar6 >> 1) & 1);
    auVar19._4_4_ = (uint)bVar2 * auVar20._4_4_ | (uint)!bVar2 * auVar24._4_4_;
    bVar2 = (bool)((byte)(uVar6 >> 2) & 1);
    auVar19._8_4_ = (uint)bVar2 * auVar20._8_4_ | (uint)!bVar2 * auVar24._8_4_;
    bVar2 = (bool)((byte)(uVar6 >> 3) & 1);
    auVar19._12_4_ = (uint)bVar2 * auVar20._12_4_ | (uint)!bVar2 * auVar24._12_4_;
    bVar2 = (bool)((byte)(uVar6 >> 4) & 1);
    auVar19._16_4_ = (uint)bVar2 * auVar20._16_4_ | (uint)!bVar2 * auVar24._16_4_;
    bVar2 = (bool)((byte)(uVar6 >> 5) & 1);
    auVar19._20_4_ = (uint)bVar2 * auVar20._20_4_ | (uint)!bVar2 * auVar24._20_4_;
    bVar2 = (bool)((byte)(uVar6 >> 6) & 1);
    auVar19._24_4_ = (uint)bVar2 * auVar20._24_4_ | (uint)!bVar2 * auVar24._24_4_;
    bVar2 = SUB81(uVar6 >> 7,0);
    auVar19._28_4_ = (uint)bVar2 * auVar20._28_4_ | (uint)!bVar2 * auVar24._28_4_;
  }
  auVar3 = vmaxps_avx(auVar19._16_16_,auVar19._0_16_);
  auVar4 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vmaxps_avx(auVar4,auVar3);
  auVar4 = vmovshdup_avx(auVar3);
  auVar3 = vmaxss_avx(auVar4,auVar3);
  *param_1 = auVar3._0_4_;
  return;
}


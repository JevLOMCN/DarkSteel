// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// UpdatePositionBasedState___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CuniCuni_avx512skx @ 14036ef30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdatePositionBasedState___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CuniCuni_avx512skx
               (float *param_1,undefined4 *param_2,int *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,uint param_8,int param_9,
               undefined1 (*param_10) [16])

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [32];
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  byte bVar21;
  byte bVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [32];
  int iVar27;
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  uint uVar30;
  int iVar31;
  bool bVar32;
  byte bVar33;
  ulonglong uVar34;
  undefined1 auVar42 [16];
  int iVar116;
  int iVar117;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  undefined1 auVar37 [16];
  undefined1 auVar75 [32];
  undefined1 auVar38 [16];
  undefined1 auVar76 [32];
  undefined1 auVar39 [16];
  undefined1 auVar77 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar108 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar109 [32];
  undefined1 auVar46 [16];
  undefined1 auVar110 [32];
  undefined1 auVar47 [16];
  undefined1 auVar111 [32];
  undefined1 auVar48 [16];
  undefined1 auVar112 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar118 [32];
  float fVar119;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  undefined1 auVar120 [32];
  float fVar127;
  undefined1 auVar128 [16];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [64];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 auVar134 [16];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [32];
  undefined1 local_3a0 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [8];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [8];
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 local_1e0 [8];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  
  auVar50 = in_ZMM20._0_16_;
  auVar42 = in_ZMM19._0_16_;
  auVar36 = in_ZMM16._0_16_;
  puVar2 = local_3c0 + 8;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_e8 = in_ZMM6._0_16_;
  auVar35 = vpsllw_avx512vl(*param_10,0xf);
  auVar51._0_12_ = ZEXT812(0);
  auVar51._12_4_ = 0;
  auVar133 = ZEXT1664(auVar51);
  auVar60 = ZEXT1632(auVar51);
  local_320 = ZEXT1632(auVar51);
  local_340 = ZEXT1632(auVar51);
  local_360 = ZEXT1632(auVar51);
  uVar23 = param_9 - param_8;
  uVar30 = uVar23 + 7;
  if (-1 < (int)uVar23) {
    uVar30 = uVar23;
  }
  iVar31 = ((uVar30 & 0xfffffff8) - uVar23) + param_9;
  local_3c0 = local_360;
  local_3a0 = local_360;
  local_380 = local_360;
  lVar25 = (longlong)iVar31;
  uVar29 = (ulonglong)param_8;
  if ((int)param_8 < iVar31) {
    uVar29 = (ulonglong)(int)param_8;
    pauVar26 = (undefined1 (*) [32])(param_5 + uVar29 * 0xc);
    pauVar28 = (undefined1 (*) [32])(uVar29 * 0xc + param_4);
    iVar27 = param_8 * 4;
    auVar36 = vxorps_avx512vl(auVar36,auVar36);
    do {
      auVar60 = *(undefined1 (*) [32])(param_7 + iVar27);
      auVar42 = auVar60._0_16_;
      uVar34 = vcmpps_avx512vl(auVar60,ZEXT1632(auVar36),8);
      bVar33 = (byte)uVar34;
      if (bVar33 != 0xff) {
        uVar11 = vcmpps_avx512vl(auVar60,ZEXT1632(auVar36),0xc);
        bVar21 = (byte)uVar11;
        if (bVar33 == 0) {
          auVar60 = pauVar28[1];
          auVar64 = vblendps_avx(auVar60,*pauVar28,0x24);
          auVar58 = vpermt2ps_avx512vl(*pauVar28,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar60);
          auVar59 = vpermt2ps_avx512vl(auVar64,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar28[2]);
          auVar60 = vpermt2ps_avx512vl(pauVar28[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar60);
          auVar61 = vinsertf32x4_avx512vl(auVar58,auVar60._0_16_,1);
          auVar62 = vshuff64x2_avx512vl(auVar58,auVar60,3);
          auVar60 = pauVar26[1];
          auVar64 = vblendps_avx(auVar60,*pauVar26,0x24);
          auVar63 = vpermt2ps_avx512vl(*pauVar26,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar60);
          auVar64 = vpermt2ps_avx512vl(auVar64,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar26[2]);
          auVar60 = vpermt2ps_avx512vl(pauVar26[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar60);
          auVar58 = vinsertf32x4_avx512vl(auVar63,auVar60._0_16_,1);
          auVar63 = vshuff64x2_avx512vl(auVar63,auVar60,3);
        }
        else {
          auVar42 = vxorps_avx512vl(auVar42,auVar42);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + (longlong)*pauVar28));
          auVar61._0_4_ =
               (uint)(bVar21 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar42._0_4_;
          bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
          auVar61._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)((byte)(uVar11 >> 2) & 1);
          auVar61._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)((byte)(uVar11 >> 3) & 1);
          auVar61._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar61._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * auVar60._16_4_;
          auVar61._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * auVar60._20_4_;
          auVar61._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * auVar60._24_4_;
          auVar61._28_4_ = (uint)(byte)(uVar11 >> 7) * auVar60._28_4_;
          auVar42 = vxorps_avx512vl(in_ZMM20._0_16_,in_ZMM20._0_16_);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar28 + (longlong)param_1));
          auVar62._0_4_ =
               (uint)(bVar21 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar42._0_4_;
          bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
          auVar62._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)((byte)(uVar11 >> 2) & 1);
          auVar62._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)((byte)(uVar11 >> 3) & 1);
          auVar62._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar62._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * auVar60._16_4_;
          auVar62._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * auVar60._20_4_;
          auVar62._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * auVar60._24_4_;
          auVar62._28_4_ = (uint)(byte)(uVar11 >> 7) * auVar60._28_4_;
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar28 + (longlong)param_2));
          auVar59._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * auVar60._4_4_;
          auVar59._0_4_ = (uint)(bVar21 & 1) * auVar60._0_4_;
          auVar59._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * auVar60._8_4_;
          auVar59._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * auVar60._12_4_;
          auVar59._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * auVar60._16_4_;
          auVar59._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * auVar60._20_4_;
          auVar59._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * auVar60._24_4_;
          auVar59._28_4_ = (uint)(byte)(uVar11 >> 7) * auVar60._28_4_;
          auVar42 = vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + (longlong)*pauVar26));
          auVar58._0_4_ =
               (uint)(bVar21 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar42._0_4_;
          bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
          auVar58._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)((byte)(uVar11 >> 2) & 1);
          auVar58._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)((byte)(uVar11 >> 3) & 1);
          auVar58._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar58._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * auVar60._16_4_;
          auVar58._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * auVar60._20_4_;
          auVar58._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * auVar60._24_4_;
          auVar58._28_4_ = (uint)(byte)(uVar11 >> 7) * auVar60._28_4_;
          auVar42 = vxorps_avx512vl(in_ZMM22._0_16_,in_ZMM22._0_16_);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + (longlong)param_1));
          auVar63._0_4_ =
               (uint)(bVar21 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar42._0_4_;
          bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
          auVar63._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)((byte)(uVar11 >> 2) & 1);
          auVar63._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)((byte)(uVar11 >> 3) & 1);
          auVar63._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar63._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * auVar60._16_4_;
          auVar63._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * auVar60._20_4_;
          auVar63._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * auVar60._24_4_;
          auVar63._28_4_ = (uint)(byte)(uVar11 >> 7) * auVar60._28_4_;
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + (longlong)param_2));
          auVar64._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * auVar60._4_4_;
          auVar64._0_4_ = (uint)(bVar21 & 1) * auVar60._0_4_;
          auVar64._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * auVar60._8_4_;
          auVar64._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * auVar60._12_4_;
          auVar64._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * auVar60._16_4_;
          auVar64._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * auVar60._20_4_;
          auVar64._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * auVar60._24_4_;
          auVar64._28_4_ = (uint)(byte)(uVar11 >> 7) * auVar60._28_4_;
        }
        piVar1 = (int *)(param_6 + iVar27);
        auVar60._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
        auVar60._0_4_ = (uint)(bVar21 & 1) * *piVar1;
        auVar60._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
        auVar60._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
        auVar60._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
        auVar60._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
        auVar60._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
        auVar60._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
        in_ZMM23 = ZEXT3264(auVar60);
        auVar61 = vfmadd213ps_avx512vl(auVar61,auVar60,local_360);
        auVar62 = vfmadd213ps_avx512vl(auVar62,auVar60,local_340);
        in_ZMM20 = ZEXT3264(auVar62);
        auVar59 = vfmadd213ps_avx512vl(auVar59,auVar60,local_320);
        bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar11 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar11 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar11 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar11 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar11 >> 6) & 1);
        bVar9 = SUB81(uVar11 >> 7,0);
        local_360._4_4_ = (uint)bVar4 * auVar61._4_4_ | (uint)!bVar4 * local_360._4_4_;
        local_360._0_4_ =
             (uint)(bVar21 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar21 & 1) * local_360._0_4_;
        local_360._8_4_ = (uint)bVar32 * auVar61._8_4_ | (uint)!bVar32 * local_360._8_4_;
        local_360._12_4_ = (uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * local_360._12_4_;
        local_360._16_4_ = (uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * local_360._16_4_;
        local_360._20_4_ = (uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * local_360._20_4_;
        local_360._24_4_ = (uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * local_360._24_4_;
        local_360._28_4_ = (uint)bVar9 * auVar61._28_4_ | (uint)!bVar9 * local_360._28_4_;
        bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar11 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar11 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar11 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar11 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar11 >> 6) & 1);
        bVar9 = SUB81(uVar11 >> 7,0);
        local_340._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_340._4_4_;
        local_340._0_4_ =
             (uint)(bVar21 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar21 & 1) * local_340._0_4_;
        local_340._8_4_ = (uint)bVar32 * auVar62._8_4_ | (uint)!bVar32 * local_340._8_4_;
        local_340._12_4_ = (uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * local_340._12_4_;
        local_340._16_4_ = (uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * local_340._16_4_;
        local_340._20_4_ = (uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * local_340._20_4_;
        local_340._24_4_ = (uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * local_340._24_4_;
        local_340._28_4_ = (uint)bVar9 * auVar62._28_4_ | (uint)!bVar9 * local_340._28_4_;
        bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar11 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar11 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar11 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar11 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar11 >> 6) & 1);
        bVar9 = SUB81(uVar11 >> 7,0);
        local_320._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * local_320._4_4_;
        local_320._0_4_ =
             (uint)(bVar21 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar21 & 1) * local_320._0_4_;
        local_320._8_4_ = (uint)bVar32 * auVar59._8_4_ | (uint)!bVar32 * local_320._8_4_;
        local_320._12_4_ = (uint)bVar5 * auVar59._12_4_ | (uint)!bVar5 * local_320._12_4_;
        local_320._16_4_ = (uint)bVar6 * auVar59._16_4_ | (uint)!bVar6 * local_320._16_4_;
        local_320._20_4_ = (uint)bVar7 * auVar59._20_4_ | (uint)!bVar7 * local_320._20_4_;
        local_320._24_4_ = (uint)bVar8 * auVar59._24_4_ | (uint)!bVar8 * local_320._24_4_;
        local_320._28_4_ = (uint)bVar9 * auVar59._28_4_ | (uint)!bVar9 * local_320._28_4_;
        auVar58 = vfmadd213ps_avx512vl(auVar58,auVar60,local_3c0);
        in_ZMM21 = ZEXT3264(auVar58);
        auVar59 = vfmadd213ps_avx512vl(auVar63,auVar60,local_3a0);
        in_ZMM22 = ZEXT3264(auVar59);
        auVar64 = vfmadd213ps_avx512vl(auVar64,auVar60,local_380);
        bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar11 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar11 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar11 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar11 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar11 >> 6) & 1);
        bVar9 = SUB81(uVar11 >> 7,0);
        local_3c0._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * local_3c0._4_4_;
        local_3c0._0_4_ =
             (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * local_3c0._0_4_;
        local_3c0._8_4_ = (uint)bVar32 * auVar58._8_4_ | (uint)!bVar32 * local_3c0._8_4_;
        local_3c0._12_4_ = (uint)bVar5 * auVar58._12_4_ | (uint)!bVar5 * local_3c0._12_4_;
        local_3c0._16_4_ = (uint)bVar6 * auVar58._16_4_ | (uint)!bVar6 * local_3c0._16_4_;
        local_3c0._20_4_ = (uint)bVar7 * auVar58._20_4_ | (uint)!bVar7 * local_3c0._20_4_;
        local_3c0._24_4_ = (uint)bVar8 * auVar58._24_4_ | (uint)!bVar8 * local_3c0._24_4_;
        local_3c0._28_4_ = (uint)bVar9 * auVar58._28_4_ | (uint)!bVar9 * local_3c0._28_4_;
        bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar11 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar11 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar11 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar11 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar11 >> 6) & 1);
        bVar9 = SUB81(uVar11 >> 7,0);
        local_3a0._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * local_3a0._4_4_;
        local_3a0._0_4_ =
             (uint)(bVar21 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar21 & 1) * local_3a0._0_4_;
        local_3a0._8_4_ = (uint)bVar32 * auVar59._8_4_ | (uint)!bVar32 * local_3a0._8_4_;
        local_3a0._12_4_ = (uint)bVar5 * auVar59._12_4_ | (uint)!bVar5 * local_3a0._12_4_;
        local_3a0._16_4_ = (uint)bVar6 * auVar59._16_4_ | (uint)!bVar6 * local_3a0._16_4_;
        local_3a0._20_4_ = (uint)bVar7 * auVar59._20_4_ | (uint)!bVar7 * local_3a0._20_4_;
        local_3a0._24_4_ = (uint)bVar8 * auVar59._24_4_ | (uint)!bVar8 * local_3a0._24_4_;
        local_3a0._28_4_ = (uint)bVar9 * auVar59._28_4_ | (uint)!bVar9 * local_3a0._28_4_;
        bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar11 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar11 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar11 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar11 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar11 >> 6) & 1);
        bVar9 = SUB81(uVar11 >> 7,0);
        local_380._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_380._4_4_;
        local_380._0_4_ =
             (uint)(bVar21 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar21 & 1) * local_380._0_4_;
        local_380._8_4_ = (uint)bVar32 * auVar64._8_4_ | (uint)!bVar32 * local_380._8_4_;
        local_380._12_4_ = (uint)bVar5 * auVar64._12_4_ | (uint)!bVar5 * local_380._12_4_;
        local_380._16_4_ = (uint)bVar6 * auVar64._16_4_ | (uint)!bVar6 * local_380._16_4_;
        local_380._20_4_ = (uint)bVar7 * auVar64._20_4_ | (uint)!bVar7 * local_380._20_4_;
        local_380._24_4_ = (uint)bVar8 * auVar64._24_4_ | (uint)!bVar8 * local_380._24_4_;
        local_380._28_4_ = (uint)bVar9 * auVar64._28_4_ | (uint)!bVar9 * local_380._28_4_;
        auVar60 = vaddps_avx512vl(auVar133._0_32_,auVar60);
        auVar42._0_4_ =
             (uint)(bVar33 & 1) * auVar133._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar60._0_4_;
        bVar4 = (bool)((byte)(uVar34 >> 1) & 1);
        auVar42._4_4_ = (uint)bVar4 * auVar133._4_4_ | (uint)!bVar4 * auVar60._4_4_;
        bVar4 = (bool)((byte)(uVar34 >> 2) & 1);
        auVar42._8_4_ = (uint)bVar4 * auVar133._8_4_ | (uint)!bVar4 * auVar60._8_4_;
        bVar4 = (bool)((byte)(uVar34 >> 3) & 1);
        auVar42._12_4_ = (uint)bVar4 * auVar133._12_4_ | (uint)!bVar4 * auVar60._12_4_;
        bVar4 = (bool)((byte)(uVar34 >> 4) & 1);
        bVar32 = (bool)((byte)(uVar34 >> 5) & 1);
        bVar5 = (bool)((byte)(uVar34 >> 6) & 1);
        bVar6 = SUB81(uVar34 >> 7,0);
        auVar133 = ZEXT3264(CONCAT428((uint)bVar6 * auVar133._28_4_ | (uint)!bVar6 * auVar60._28_4_,
                                      CONCAT424((uint)bVar5 * auVar133._24_4_ |
                                                (uint)!bVar5 * auVar60._24_4_,
                                                CONCAT420((uint)bVar32 * auVar133._20_4_ |
                                                          (uint)!bVar32 * auVar60._20_4_,
                                                          CONCAT416((uint)bVar4 * auVar133._16_4_ |
                                                                    (uint)!bVar4 * auVar60._16_4_,
                                                                    auVar42)))));
      }
      auVar50 = in_ZMM20._0_16_;
      auVar60 = auVar133._0_32_;
      uVar29 = uVar29 + 8;
      pauVar26 = pauVar26 + 3;
      pauVar28 = pauVar28 + 3;
      iVar27 = iVar27 + 0x20;
    } while ((longlong)uVar29 < lVar25);
  }
  uVar34 = vpmovw2m_avx512vl(auVar35);
  auVar64 = vpbroadcastd_avx512vl();
  iVar27 = (int)uVar29;
  auVar79 = auVar60;
  if (iVar27 < param_9) {
    auVar58 = vpbroadcastd_avx512vl();
    auVar80._0_4_ =
         auVar58._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar80._4_4_ = auVar58._4_4_ + _UNK_150b50ae4;
    auVar80._8_4_ = auVar58._8_4_ + _UNK_150b50ae8;
    auVar80._12_4_ = auVar58._12_4_ + _UNK_150b50aec;
    auVar80._16_4_ = auVar58._16_4_ + _UNK_150b50af0;
    auVar80._20_4_ = auVar58._20_4_ + _UNK_150b50af4;
    auVar80._24_4_ = auVar58._24_4_ + _UNK_150b50af8;
    auVar80._28_4_ = auVar58._28_4_ + _UNK_150b50afc;
    uVar14 = vpcmpd_avx512vl(auVar80,auVar64,5);
    uVar29 = vpcmpgtd_avx512vl(auVar64,auVar80);
    piVar1 = (int *)(param_7 + iVar27 * 4);
    bVar33 = (byte)uVar29;
    auVar81._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * piVar1[1];
    auVar81._0_4_ = (uint)(bVar33 & 1) * *piVar1;
    auVar81._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * piVar1[2];
    auVar81._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * piVar1[3];
    auVar81._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * piVar1[4];
    auVar81._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * piVar1[5];
    auVar81._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * piVar1[6];
    auVar81._28_4_ = (uint)(byte)(uVar29 >> 7) * piVar1[7];
    uVar12 = vcmpps_avx512vl(auVar81,ZEXT1232(ZEXT812(0)),8);
    if ((byte)((byte)uVar12 | (byte)uVar14) != 0xff) {
      uVar12 = vcmpps_avx512vl(auVar81,ZEXT1232(ZEXT812(0)),8);
      bVar21 = bVar33 & (byte)uVar12;
      if (bVar21 != bVar33) {
        bVar21 = bVar21 ^ bVar33;
        lVar24 = (longlong)iVar27;
        pauVar26 = (undefined1 (*) [32])(param_4 + lVar24 * 0xc);
        if (bVar21 == 0xff) {
          auVar58 = pauVar26[1];
          auVar59 = vblendps_avx(auVar58,*pauVar26,0x24);
          auVar63 = vpermt2ps_avx512vl(*pauVar26,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar58);
          auVar42 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
          auVar66 = vpermt2ps_avx512vl(auVar59,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar26[2]);
          auVar58 = vpermt2ps_avx512vl(pauVar26[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar58);
          auVar65._16_16_ = auVar58._0_16_;
          auVar65._0_16_ = auVar63._0_16_;
          auVar82 = vperm2f128_avx(auVar63,auVar58,0x31);
          auVar58 = *(undefined1 (*) [32])(param_5 + lVar24 * 0xc);
          auVar59 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar24 * 0xc);
          auVar63 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar24 * 0xc);
          auVar50 = auVar63._0_16_;
          auVar62 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar58,auVar59);
          auVar61 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar63,auVar59);
          auVar67 = vinsertf32x4_avx512vl(auVar62,auVar61._0_16_,1);
          auVar68 = vshuff64x2_avx512vl(auVar62,auVar61,3);
          auVar58 = vblendps_avx(auVar59,auVar58,0x24);
          auVar69 = vpermt2ps_avx512vl(auVar58,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,auVar63);
        }
        else {
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + (longlong)param_1));
          auVar65._4_4_ = (uint)(bVar21 >> 1 & 1) * auVar58._4_4_;
          auVar65._0_4_ = (uint)(bVar21 & 1) * auVar58._0_4_;
          auVar65._8_4_ = (uint)(bVar21 >> 2 & 1) * auVar58._8_4_;
          auVar65._12_4_ = (uint)(bVar21 >> 3 & 1) * auVar58._12_4_;
          auVar65._16_4_ = (uint)(bVar21 >> 4 & 1) * auVar58._16_4_;
          auVar65._20_4_ = (uint)(bVar21 >> 5 & 1) * auVar58._20_4_;
          auVar65._24_4_ = (uint)(bVar21 >> 6 & 1) * auVar58._24_4_;
          auVar65._28_4_ = (uint)(bVar21 >> 7) * auVar58._28_4_;
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + (longlong)param_2));
          auVar82._4_4_ = (uint)(bVar21 >> 1 & 1) * auVar58._4_4_;
          auVar82._0_4_ = (uint)(bVar21 & 1) * auVar58._0_4_;
          auVar82._8_4_ = (uint)(bVar21 >> 2 & 1) * auVar58._8_4_;
          auVar82._12_4_ = (uint)(bVar21 >> 3 & 1) * auVar58._12_4_;
          auVar82._16_4_ = (uint)(bVar21 >> 4 & 1) * auVar58._16_4_;
          auVar82._20_4_ = (uint)(bVar21 >> 5 & 1) * auVar58._20_4_;
          auVar82._24_4_ = (uint)(bVar21 >> 6 & 1) * auVar58._24_4_;
          auVar82._28_4_ = (uint)(bVar21 >> 7) * auVar58._28_4_;
          auVar42 = __ymm_0000005c0000005000000044000000380000002c000000200000001400000008._0_16_;
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + lVar25));
          auVar66._4_4_ = (uint)(bVar21 >> 1 & 1) * auVar58._4_4_;
          auVar66._0_4_ = (uint)(bVar21 & 1) * auVar58._0_4_;
          auVar66._8_4_ = (uint)(bVar21 >> 2 & 1) * auVar58._8_4_;
          auVar66._12_4_ = (uint)(bVar21 >> 3 & 1) * auVar58._12_4_;
          auVar66._16_4_ = (uint)(bVar21 >> 4 & 1) * auVar58._16_4_;
          auVar66._20_4_ = (uint)(bVar21 >> 5 & 1) * auVar58._20_4_;
          auVar66._24_4_ = (uint)(bVar21 >> 6 & 1) * auVar58._24_4_;
          auVar66._28_4_ = (uint)(bVar21 >> 7) * auVar58._28_4_;
          lVar24 = param_5 + lVar24 * 0xc;
          auVar35 = vxorps_avx512vl(auVar36,auVar36);
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(lVar24 + (longlong)param_1));
          auVar67._0_4_ =
               (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar35._0_4_;
          bVar4 = (bool)(bVar21 >> 1 & 1);
          auVar67._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * auVar35._4_4_;
          bVar4 = (bool)(bVar21 >> 2 & 1);
          auVar67._8_4_ = (uint)bVar4 * auVar58._8_4_ | (uint)!bVar4 * auVar35._8_4_;
          bVar4 = (bool)(bVar21 >> 3 & 1);
          auVar67._12_4_ = (uint)bVar4 * auVar58._12_4_ | (uint)!bVar4 * auVar35._12_4_;
          auVar67._16_4_ = (uint)(bVar21 >> 4 & 1) * auVar58._16_4_;
          auVar67._20_4_ = (uint)(bVar21 >> 5 & 1) * auVar58._20_4_;
          auVar67._24_4_ = (uint)(bVar21 >> 6 & 1) * auVar58._24_4_;
          auVar67._28_4_ = (uint)(bVar21 >> 7) * auVar58._28_4_;
          auVar35 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                    ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                            ._0_16_);
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(lVar24 + (longlong)param_2));
          auVar68._0_4_ =
               (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar35._0_4_;
          bVar4 = (bool)(bVar21 >> 1 & 1);
          auVar68._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * auVar35._4_4_;
          bVar4 = (bool)(bVar21 >> 2 & 1);
          auVar68._8_4_ = (uint)bVar4 * auVar58._8_4_ | (uint)!bVar4 * auVar35._8_4_;
          bVar4 = (bool)(bVar21 >> 3 & 1);
          auVar68._12_4_ = (uint)bVar4 * auVar58._12_4_ | (uint)!bVar4 * auVar35._12_4_;
          auVar68._16_4_ = (uint)(bVar21 >> 4 & 1) * auVar58._16_4_;
          auVar68._20_4_ = (uint)(bVar21 >> 5 & 1) * auVar58._20_4_;
          auVar68._24_4_ = (uint)(bVar21 >> 6 & 1) * auVar58._24_4_;
          auVar68._28_4_ = (uint)(bVar21 >> 7) * auVar58._28_4_;
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(lVar24 + lVar25));
          auVar69._4_4_ = (uint)(bVar21 >> 1 & 1) * auVar58._4_4_;
          auVar69._0_4_ = (uint)(bVar21 & 1) * auVar58._0_4_;
          auVar69._8_4_ = (uint)(bVar21 >> 2 & 1) * auVar58._8_4_;
          auVar69._12_4_ = (uint)(bVar21 >> 3 & 1) * auVar58._12_4_;
          auVar69._16_4_ = (uint)(bVar21 >> 4 & 1) * auVar58._16_4_;
          auVar69._20_4_ = (uint)(bVar21 >> 5 & 1) * auVar58._20_4_;
          auVar69._24_4_ = (uint)(bVar21 >> 6 & 1) * auVar58._24_4_;
          auVar69._28_4_ = (uint)(bVar21 >> 7) * auVar58._28_4_;
        }
        piVar1 = (int *)(param_6 + iVar27 * 4);
        auVar70._4_4_ = (uint)(bVar21 >> 1 & 1) * piVar1[1];
        auVar70._0_4_ = (uint)(bVar21 & 1) * *piVar1;
        auVar70._8_4_ = (uint)(bVar21 >> 2 & 1) * piVar1[2];
        auVar70._12_4_ = (uint)(bVar21 >> 3 & 1) * piVar1[3];
        auVar70._16_4_ = (uint)(bVar21 >> 4 & 1) * piVar1[4];
        auVar70._20_4_ = (uint)(bVar21 >> 5 & 1) * piVar1[5];
        auVar70._24_4_ = (uint)(bVar21 >> 6 & 1) * piVar1[6];
        auVar70._28_4_ = (uint)(bVar21 >> 7) * piVar1[7];
        auVar58 = vfmadd213ps_avx512vl(auVar65,auVar70,local_360);
        auVar59 = vfmadd213ps_avx512vl(auVar82,auVar70,local_340);
        auVar63 = vfmadd213ps_avx512vl(auVar66,auVar70,local_320);
        bVar4 = (bool)(bVar21 >> 1 & 1);
        bVar32 = (bool)(bVar21 >> 2 & 1);
        bVar5 = (bool)(bVar21 >> 3 & 1);
        bVar6 = (bool)(bVar21 >> 4 & 1);
        bVar7 = (bool)(bVar21 >> 5 & 1);
        bVar8 = (bool)(bVar21 >> 6 & 1);
        local_360._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * local_360._4_4_;
        local_360._0_4_ =
             (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * local_360._0_4_;
        local_360._8_4_ = (uint)bVar32 * auVar58._8_4_ | (uint)!bVar32 * local_360._8_4_;
        local_360._12_4_ = (uint)bVar5 * auVar58._12_4_ | (uint)!bVar5 * local_360._12_4_;
        local_360._16_4_ = (uint)bVar6 * auVar58._16_4_ | (uint)!bVar6 * local_360._16_4_;
        local_360._20_4_ = (uint)bVar7 * auVar58._20_4_ | (uint)!bVar7 * local_360._20_4_;
        local_360._24_4_ = (uint)bVar8 * auVar58._24_4_ | (uint)!bVar8 * local_360._24_4_;
        local_360._28_4_ =
             (uint)(bVar21 >> 7) * auVar58._28_4_ | (uint)!(bool)(bVar21 >> 7) * local_360._28_4_;
        bVar4 = (bool)(bVar21 >> 1 & 1);
        bVar32 = (bool)(bVar21 >> 2 & 1);
        bVar5 = (bool)(bVar21 >> 3 & 1);
        bVar6 = (bool)(bVar21 >> 4 & 1);
        bVar7 = (bool)(bVar21 >> 5 & 1);
        bVar8 = (bool)(bVar21 >> 6 & 1);
        local_340._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * local_340._4_4_;
        local_340._0_4_ =
             (uint)(bVar21 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar21 & 1) * local_340._0_4_;
        local_340._8_4_ = (uint)bVar32 * auVar59._8_4_ | (uint)!bVar32 * local_340._8_4_;
        local_340._12_4_ = (uint)bVar5 * auVar59._12_4_ | (uint)!bVar5 * local_340._12_4_;
        local_340._16_4_ = (uint)bVar6 * auVar59._16_4_ | (uint)!bVar6 * local_340._16_4_;
        local_340._20_4_ = (uint)bVar7 * auVar59._20_4_ | (uint)!bVar7 * local_340._20_4_;
        local_340._24_4_ = (uint)bVar8 * auVar59._24_4_ | (uint)!bVar8 * local_340._24_4_;
        local_340._28_4_ =
             (uint)(bVar21 >> 7) * auVar59._28_4_ | (uint)!(bool)(bVar21 >> 7) * local_340._28_4_;
        bVar4 = (bool)(bVar21 >> 1 & 1);
        bVar32 = (bool)(bVar21 >> 2 & 1);
        bVar5 = (bool)(bVar21 >> 3 & 1);
        bVar6 = (bool)(bVar21 >> 4 & 1);
        bVar7 = (bool)(bVar21 >> 5 & 1);
        bVar8 = (bool)(bVar21 >> 6 & 1);
        local_320._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * local_320._4_4_;
        local_320._0_4_ =
             (uint)(bVar21 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar21 & 1) * local_320._0_4_;
        local_320._8_4_ = (uint)bVar32 * auVar63._8_4_ | (uint)!bVar32 * local_320._8_4_;
        local_320._12_4_ = (uint)bVar5 * auVar63._12_4_ | (uint)!bVar5 * local_320._12_4_;
        local_320._16_4_ = (uint)bVar6 * auVar63._16_4_ | (uint)!bVar6 * local_320._16_4_;
        local_320._20_4_ = (uint)bVar7 * auVar63._20_4_ | (uint)!bVar7 * local_320._20_4_;
        local_320._24_4_ = (uint)bVar8 * auVar63._24_4_ | (uint)!bVar8 * local_320._24_4_;
        local_320._28_4_ =
             (uint)(bVar21 >> 7) * auVar63._28_4_ | (uint)!(bool)(bVar21 >> 7) * local_320._28_4_;
        auVar58 = vfmadd213ps_avx512vl(auVar67,auVar70,local_3c0);
        auVar59 = vfmadd213ps_avx512vl(auVar68,auVar70,local_3a0);
        auVar63 = vfmadd213ps_avx512vl(auVar69,auVar70,local_380);
        bVar4 = (bool)(bVar21 >> 1 & 1);
        bVar32 = (bool)(bVar21 >> 2 & 1);
        bVar5 = (bool)(bVar21 >> 3 & 1);
        bVar6 = (bool)(bVar21 >> 4 & 1);
        bVar7 = (bool)(bVar21 >> 5 & 1);
        bVar8 = (bool)(bVar21 >> 6 & 1);
        local_3c0._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * local_3c0._4_4_;
        local_3c0._0_4_ =
             (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * local_3c0._0_4_;
        local_3c0._8_4_ = (uint)bVar32 * auVar58._8_4_ | (uint)!bVar32 * local_3c0._8_4_;
        local_3c0._12_4_ = (uint)bVar5 * auVar58._12_4_ | (uint)!bVar5 * local_3c0._12_4_;
        local_3c0._16_4_ = (uint)bVar6 * auVar58._16_4_ | (uint)!bVar6 * local_3c0._16_4_;
        local_3c0._20_4_ = (uint)bVar7 * auVar58._20_4_ | (uint)!bVar7 * local_3c0._20_4_;
        local_3c0._24_4_ = (uint)bVar8 * auVar58._24_4_ | (uint)!bVar8 * local_3c0._24_4_;
        local_3c0._28_4_ =
             (uint)(bVar21 >> 7) * auVar58._28_4_ | (uint)!(bool)(bVar21 >> 7) * local_3c0._28_4_;
        bVar4 = (bool)(bVar21 >> 1 & 1);
        bVar32 = (bool)(bVar21 >> 2 & 1);
        bVar5 = (bool)(bVar21 >> 3 & 1);
        bVar6 = (bool)(bVar21 >> 4 & 1);
        bVar7 = (bool)(bVar21 >> 5 & 1);
        bVar8 = (bool)(bVar21 >> 6 & 1);
        local_3a0._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * local_3a0._4_4_;
        local_3a0._0_4_ =
             (uint)(bVar21 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar21 & 1) * local_3a0._0_4_;
        local_3a0._8_4_ = (uint)bVar32 * auVar59._8_4_ | (uint)!bVar32 * local_3a0._8_4_;
        local_3a0._12_4_ = (uint)bVar5 * auVar59._12_4_ | (uint)!bVar5 * local_3a0._12_4_;
        local_3a0._16_4_ = (uint)bVar6 * auVar59._16_4_ | (uint)!bVar6 * local_3a0._16_4_;
        local_3a0._20_4_ = (uint)bVar7 * auVar59._20_4_ | (uint)!bVar7 * local_3a0._20_4_;
        local_3a0._24_4_ = (uint)bVar8 * auVar59._24_4_ | (uint)!bVar8 * local_3a0._24_4_;
        local_3a0._28_4_ =
             (uint)(bVar21 >> 7) * auVar59._28_4_ | (uint)!(bool)(bVar21 >> 7) * local_3a0._28_4_;
        bVar4 = (bool)(bVar21 >> 1 & 1);
        bVar32 = (bool)(bVar21 >> 2 & 1);
        bVar5 = (bool)(bVar21 >> 3 & 1);
        bVar6 = (bool)(bVar21 >> 4 & 1);
        bVar7 = (bool)(bVar21 >> 5 & 1);
        bVar8 = (bool)(bVar21 >> 6 & 1);
        local_380._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * local_380._4_4_;
        local_380._0_4_ =
             (uint)(bVar21 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar21 & 1) * local_380._0_4_;
        local_380._8_4_ = (uint)bVar32 * auVar63._8_4_ | (uint)!bVar32 * local_380._8_4_;
        local_380._12_4_ = (uint)bVar5 * auVar63._12_4_ | (uint)!bVar5 * local_380._12_4_;
        local_380._16_4_ = (uint)bVar6 * auVar63._16_4_ | (uint)!bVar6 * local_380._16_4_;
        local_380._20_4_ = (uint)bVar7 * auVar63._20_4_ | (uint)!bVar7 * local_380._20_4_;
        local_380._24_4_ = (uint)bVar8 * auVar63._24_4_ | (uint)!bVar8 * local_380._24_4_;
        local_380._28_4_ =
             (uint)(bVar21 >> 7) * auVar63._28_4_ | (uint)!(bool)(bVar21 >> 7) * local_380._28_4_;
        auVar58 = vaddps_avx512vl(auVar60,auVar70);
        auVar79._0_4_ =
             (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar60._0_4_;
        bVar4 = (bool)(bVar21 >> 1 & 1);
        auVar79._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * auVar60._4_4_;
        bVar4 = (bool)(bVar21 >> 2 & 1);
        auVar79._8_4_ = (uint)bVar4 * auVar58._8_4_ | (uint)!bVar4 * auVar60._8_4_;
        bVar4 = (bool)(bVar21 >> 3 & 1);
        auVar79._12_4_ = (uint)bVar4 * auVar58._12_4_ | (uint)!bVar4 * auVar60._12_4_;
        bVar4 = (bool)(bVar21 >> 4 & 1);
        auVar79._16_4_ = (uint)bVar4 * auVar58._16_4_ | (uint)!bVar4 * auVar60._16_4_;
        bVar4 = (bool)(bVar21 >> 5 & 1);
        auVar79._20_4_ = (uint)bVar4 * auVar58._20_4_ | (uint)!bVar4 * auVar60._20_4_;
        bVar4 = (bool)(bVar21 >> 6 & 1);
        auVar79._24_4_ = (uint)bVar4 * auVar58._24_4_ | (uint)!bVar4 * auVar60._24_4_;
        auVar79._28_4_ =
             (uint)(bVar21 >> 7) * auVar58._28_4_ | (uint)!(bool)(bVar21 >> 7) * auVar60._28_4_;
      }
    }
  }
  bVar33 = (byte)uVar34;
  auVar71._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_360._4_4_;
  auVar71._0_4_ = (uint)(bVar33 & 1) * local_360._0_4_;
  auVar71._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_360._8_4_;
  auVar71._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_360._12_4_;
  auVar71._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_360._16_4_;
  auVar71._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_360._20_4_;
  auVar71._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_360._24_4_;
  auVar71._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_360._28_4_;
  auVar60 = vhaddps_avx(auVar71,auVar71);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar72._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_340._4_4_;
  auVar72._0_4_ = (uint)(bVar33 & 1) * local_340._0_4_;
  auVar72._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_340._8_4_;
  auVar72._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_340._12_4_;
  auVar72._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_340._16_4_;
  auVar72._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_340._20_4_;
  auVar72._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_340._24_4_;
  auVar72._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_340._28_4_;
  auVar58 = vhaddps_avx(auVar72,auVar72);
  auVar58 = vhaddps_avx(auVar58,auVar58);
  fVar119 = auVar60._0_4_ + auVar60._16_4_;
  auVar35 = ZEXT416((uint)fVar119);
  auVar73._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_320._4_4_;
  auVar73._0_4_ = (uint)(bVar33 & 1) * local_320._0_4_;
  auVar73._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_320._8_4_;
  auVar73._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_320._12_4_;
  auVar73._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_320._16_4_;
  auVar73._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_320._20_4_;
  auVar73._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_320._24_4_;
  auVar73._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_320._28_4_;
  auVar60 = vhaddps_avx(auVar73,auVar73);
  fVar121 = auVar58._0_4_ + auVar58._16_4_;
  auVar36 = ZEXT416((uint)fVar121);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  fVar122 = auVar60._0_4_ + auVar60._16_4_;
  auVar51 = ZEXT416((uint)fVar122);
  auVar74._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_3c0._4_4_;
  auVar74._0_4_ = (uint)(bVar33 & 1) * local_3c0._0_4_;
  auVar74._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_3c0._8_4_;
  auVar74._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_3c0._12_4_;
  auVar74._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_3c0._16_4_;
  auVar74._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_3c0._20_4_;
  auVar74._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_3c0._24_4_;
  auVar74._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_3c0._28_4_;
  auVar60 = vhaddps_avx(auVar74,auVar74);
  *param_1 = fVar119;
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar37 = vextractf32x4_avx512vl(auVar60,1);
  auVar37 = vaddss_avx512f(auVar60._0_16_,auVar37);
  auVar75._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_3a0._4_4_;
  auVar75._0_4_ = (uint)(bVar33 & 1) * local_3a0._0_4_;
  auVar75._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_3a0._8_4_;
  auVar75._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_3a0._12_4_;
  auVar75._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_3a0._16_4_;
  auVar75._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_3a0._20_4_;
  auVar75._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_3a0._24_4_;
  auVar75._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_3a0._28_4_;
  auVar60 = vhaddps_avx(auVar75,auVar75);
  param_1[1] = fVar121;
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar38 = vextractf32x4_avx512vl(auVar60,1);
  auVar38 = vaddss_avx512f(auVar60._0_16_,auVar38);
  auVar76._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_380._4_4_;
  auVar76._0_4_ = (uint)(bVar33 & 1) * local_380._0_4_;
  auVar76._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_380._8_4_;
  auVar76._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_380._12_4_;
  auVar76._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_380._16_4_;
  auVar76._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_380._20_4_;
  auVar76._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_380._24_4_;
  auVar76._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_380._28_4_;
  auVar60 = vhaddps_avx(auVar76,auVar76);
  param_1[2] = fVar122;
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar39 = vextractf32x4_avx512vl(auVar60,1);
  auVar39 = vaddss_avx512f(auVar60._0_16_,auVar39);
  *param_2 = auVar37._0_4_;
  param_2[1] = auVar38._0_4_;
  auVar77._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * auVar79._4_4_;
  auVar77._0_4_ = (uint)(bVar33 & 1) * auVar79._0_4_;
  auVar77._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * auVar79._8_4_;
  auVar77._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * auVar79._12_4_;
  auVar77._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar79._16_4_;
  auVar77._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar79._20_4_;
  auVar77._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar79._24_4_;
  auVar77._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * auVar79._28_4_;
  auVar60 = vhaddps_avx(auVar77,auVar77);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  param_2[2] = auVar39._0_4_;
  auVar40 = vextractf32x4_avx512vl(auVar60,1);
  auVar41 = vaddss_avx512f(auVar60._0_16_,auVar40);
  auVar40 = vxorps_avx512vl(auVar40,auVar40);
  if ((auVar41._0_4_ != auVar40._0_4_) || (NAN(auVar41._0_4_) || NAN(auVar40._0_4_))) {
    auVar35 = vinsertps_avx(ZEXT416((uint)fVar119),ZEXT416((uint)fVar121),0x10);
    auVar35 = vinsertps_avx(auVar35,ZEXT416((uint)fVar122),0x20);
    auVar41._4_4_ = auVar41._0_4_;
    auVar41._8_4_ = auVar41._0_4_;
    auVar41._12_4_ = auVar41._0_4_;
    auVar35 = vdivps_avx(auVar35,auVar41);
    auVar36 = vmovshdup_avx(auVar35);
    auVar51 = vshufpd_avx(auVar35,auVar35,1);
    *param_1 = auVar35._0_4_;
    param_1[1] = auVar36._0_4_;
    param_1[2] = auVar51._0_4_;
    auVar37 = vinsertps_avx512f(auVar37,auVar38,0x10);
    auVar37 = vinsertps_avx512f(auVar37,auVar39,0x20);
    auVar37 = vdivps_avx(auVar37,auVar41);
    *param_2 = auVar37._0_4_;
    uVar3 = vextractps_avx(auVar37,1);
    param_2[1] = uVar3;
    uVar3 = vextractps_avx(auVar37,2);
    param_2[2] = uVar3;
  }
  local_3e0 = ZEXT832(0) << 0x20;
  local_400 = ZEXT832(0) << 0x20;
  local_420 = ZEXT832(0) << 0x20;
  local_300 = local_420;
  local_2e0 = local_420;
  local_2c0 = local_420;
  local_2a0 = ZEXT832(0) << 0x20;
  _local_280 = local_2a0;
  local_260 = local_2a0;
  local_240 = local_2a0;
  local_220 = local_2a0;
  _local_200 = local_2a0;
  _local_1e0 = local_2a0;
  local_1c0 = local_2a0;
  auVar60 = ZEXT832(0) << 0x20;
  local_1a0 = auVar60;
  local_180 = auVar60;
  local_160 = auVar60;
  local_140 = auVar60;
  local_120 = __real_3f800000;
  uStack_11c = __real_3f800000;
  uStack_118 = __real_3f800000;
  uStack_114 = __real_3f800000;
  uStack_110 = __real_3f800000;
  uStack_10c = __real_3f800000;
  uStack_108 = __real_3f800000;
  uStack_104 = __real_3f800000;
  auVar37 = __ymm_00000054000000480000003c0000003000000024000000180000000c00000000._0_16_;
  if ((int)param_8 < iVar31) {
    lVar24 = (longlong)(int)param_8;
    pauVar26 = (undefined1 (*) [32])(param_5 + lVar24 * 0xc);
    pauVar28 = (undefined1 (*) [32])(lVar24 * 0xc + param_4);
    iVar31 = param_8 << 2;
    auVar39 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar50 = __ymm_000000580000004c0000004000000034000000280000001c0000001000000004._0_16_;
    do {
      auVar58 = *(undefined1 (*) [32])(param_7 + iVar31);
      uVar12 = vcmpps_avx512vl(auVar58,auVar60,8);
      if ((char)uVar12 != -1) {
        uVar29 = vcmpps_avx512vl(auVar58,auVar60,0xc);
        bVar21 = (byte)uVar29;
        if ((char)uVar12 == '\0') {
          auVar58 = pauVar28[1];
          auVar59 = vblendps_avx(auVar58,*pauVar28,0x24);
          auVar63 = vpermt2ps_avx512vl(*pauVar28,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar58);
          auVar83 = vpermt2ps_avx512vl(auVar59,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar28[2]);
          auVar58 = vpermt2ps_avx512vl(pauVar28[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar58);
          auVar84 = vinsertf32x4_avx512vl(auVar63,auVar58._0_16_,1);
          auVar85 = vshuff64x2_avx512vl(auVar63,auVar58,3);
          auVar58 = pauVar26[1];
          auVar59 = vblendps_avx(auVar58,*pauVar26,0x24);
          auVar63 = vpermt2ps_avx512vl(*pauVar26,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar58);
          auVar86 = vpermt2ps_avx512vl(auVar59,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar26[2]);
          auVar58 = vpermt2ps_avx512vl(pauVar26[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar58);
          auVar87 = vinsertf32x4_avx512vl(auVar63,auVar58._0_16_,1);
          auVar88 = vshuff64x2_avx512vl(auVar63,auVar58,3);
        }
        else {
          auVar42 = vxorps_avx512vl(auVar58._0_16_,auVar58._0_16_);
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar28 + lVar25));
          auVar84._0_4_ =
               (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar42._0_4_;
          bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
          auVar84._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
          auVar84._8_4_ = (uint)bVar4 * auVar58._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
          auVar84._12_4_ = (uint)bVar4 * auVar58._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar84._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar58._16_4_;
          auVar84._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar58._20_4_;
          auVar84._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar58._24_4_;
          auVar84._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar58._28_4_;
          auVar42 = vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)*pauVar28);
          auVar85._0_4_ =
               (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar42._0_4_;
          bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
          auVar85._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
          auVar85._8_4_ = (uint)bVar4 * auVar58._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
          auVar85._12_4_ = (uint)bVar4 * auVar58._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar85._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar58._16_4_;
          auVar85._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar58._20_4_;
          auVar85._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar58._24_4_;
          auVar85._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar58._28_4_;
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + (longlong)*pauVar28));
          auVar83._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar58._4_4_;
          auVar83._0_4_ = (uint)(bVar21 & 1) * auVar58._0_4_;
          auVar83._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar58._8_4_;
          auVar83._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar58._12_4_;
          auVar83._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar58._16_4_;
          auVar83._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar58._20_4_;
          auVar83._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar58._24_4_;
          auVar83._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar58._28_4_;
          auVar42 = vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + lVar25));
          auVar87._0_4_ =
               (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar42._0_4_;
          bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
          auVar87._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
          auVar87._8_4_ = (uint)bVar4 * auVar58._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
          auVar87._12_4_ = (uint)bVar4 * auVar58._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar87._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar58._16_4_;
          auVar87._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar58._20_4_;
          auVar87._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar58._24_4_;
          auVar87._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar58._28_4_;
          auVar42 = vxorps_avx512vl(in_ZMM25._0_16_,in_ZMM25._0_16_);
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)*pauVar26);
          auVar88._0_4_ =
               (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * auVar42._0_4_;
          bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
          auVar88._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
          auVar88._8_4_ = (uint)bVar4 * auVar58._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
          auVar88._12_4_ = (uint)bVar4 * auVar58._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar88._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar58._16_4_;
          auVar88._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar58._20_4_;
          auVar88._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar58._24_4_;
          auVar88._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar58._28_4_;
          auVar58 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + (longlong)*pauVar26));
          auVar86._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar58._4_4_;
          auVar86._0_4_ = (uint)(bVar21 & 1) * auVar58._0_4_;
          auVar86._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar58._8_4_;
          auVar86._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar58._12_4_;
          auVar86._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar58._16_4_;
          auVar86._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar58._20_4_;
          auVar86._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar58._24_4_;
          auVar86._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar58._28_4_;
        }
        piVar1 = (int *)(param_6 + iVar31);
        auVar78._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * piVar1[1];
        auVar78._0_4_ = (uint)(bVar21 & 1) * *piVar1;
        auVar78._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * piVar1[2];
        auVar78._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * piVar1[3];
        auVar78._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * piVar1[4];
        auVar78._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * piVar1[5];
        auVar78._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * piVar1[6];
        auVar78._28_4_ = (uint)(byte)(uVar29 >> 7) * piVar1[7];
        auVar58 = vbroadcastss_avx512vl(auVar35);
        auVar58 = vsubps_avx512vl(auVar84,auVar58);
        auVar59 = vbroadcastss_avx512vl(auVar36);
        auVar59 = vsubps_avx512vl(auVar85,auVar59);
        auVar63 = vbroadcastss_avx512vl(auVar51);
        auVar63 = vsubps_avx512vl(auVar83,auVar63);
        auVar62 = vmulps_avx512vl(auVar87,auVar78);
        auVar61 = vmulps_avx512vl(auVar88,auVar78);
        auVar79 = vmulps_avx512vl(auVar86,auVar78);
        auVar80 = vmulps_avx512vl(auVar62,auVar59);
        auVar81 = vmulps_avx512vl(auVar61,auVar63);
        auVar82 = vmulps_avx512vl(auVar79,auVar58);
        auVar61 = vfmsub231ps_avx512vl(auVar80,auVar58,auVar61);
        auVar79 = vfmsub231ps_avx512vl(auVar81,auVar59,auVar79);
        auVar62 = vfmsub231ps_avx512vl(auVar82,auVar63,auVar62);
        auVar79 = vaddps_avx512vl(auVar79,local_420);
        auVar62 = vaddps_avx512vl(auVar62,local_400);
        auVar61 = vaddps_avx512vl(auVar61,local_3e0);
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_420._4_4_ = (uint)bVar4 * auVar79._4_4_ | (uint)!bVar4 * local_420._4_4_;
        local_420._0_4_ =
             (uint)(bVar21 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar21 & 1) * local_420._0_4_;
        local_420._8_4_ = (uint)bVar32 * auVar79._8_4_ | (uint)!bVar32 * local_420._8_4_;
        local_420._12_4_ = (uint)bVar5 * auVar79._12_4_ | (uint)!bVar5 * local_420._12_4_;
        local_420._16_4_ = (uint)bVar6 * auVar79._16_4_ | (uint)!bVar6 * local_420._16_4_;
        local_420._20_4_ = (uint)bVar7 * auVar79._20_4_ | (uint)!bVar7 * local_420._20_4_;
        local_420._24_4_ = (uint)bVar8 * auVar79._24_4_ | (uint)!bVar8 * local_420._24_4_;
        local_420._28_4_ = (uint)bVar9 * auVar79._28_4_ | (uint)!bVar9 * local_420._28_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_400._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_400._4_4_;
        local_400._0_4_ =
             (uint)(bVar21 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar21 & 1) * local_400._0_4_;
        local_400._8_4_ = (uint)bVar32 * auVar62._8_4_ | (uint)!bVar32 * local_400._8_4_;
        local_400._12_4_ = (uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * local_400._12_4_;
        local_400._16_4_ = (uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * local_400._16_4_;
        local_400._20_4_ = (uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * local_400._20_4_;
        local_400._24_4_ = (uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * local_400._24_4_;
        local_400._28_4_ = (uint)bVar9 * auVar62._28_4_ | (uint)!bVar9 * local_400._28_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_3e0._4_4_ = (uint)bVar4 * auVar61._4_4_ | (uint)!bVar4 * local_3e0._4_4_;
        local_3e0._0_4_ =
             (uint)(bVar21 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar21 & 1) * local_3e0._0_4_;
        local_3e0._8_4_ = (uint)bVar32 * auVar61._8_4_ | (uint)!bVar32 * local_3e0._8_4_;
        local_3e0._12_4_ = (uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * local_3e0._12_4_;
        local_3e0._16_4_ = (uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * local_3e0._16_4_;
        local_3e0._20_4_ = (uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * local_3e0._20_4_;
        local_3e0._24_4_ = (uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * local_3e0._24_4_;
        local_3e0._28_4_ = (uint)bVar9 * auVar61._28_4_ | (uint)!bVar9 * local_3e0._28_4_;
        auVar62 = vmulps_avx512vl(auVar63,auVar60);
        auVar61 = vmulps_avx512vl(auVar59,auVar60);
        auVar79 = vmulps_avx512vl(auVar63,auVar63);
        auVar62 = vsubps_avx512vl(auVar62,auVar62);
        auVar80 = vmulps_avx512vl(auVar59,auVar63);
        auVar63 = vfnmadd213ps_avx512vl(auVar63,auVar58,auVar61);
        auVar81 = vmulps_avx512vl(auVar59,auVar59);
        auVar82 = vaddps_avx512vl(auVar81,auVar79);
        auVar59 = vfnmadd231ps_avx512vl(auVar62,auVar58,auVar59);
        auVar63 = vsubps_avx512vl(auVar63,auVar61);
        auVar62 = vfnmsub231ps_avx512vl(auVar80,auVar58,auVar60);
        auVar61 = vmulps_avx512vl(auVar58,auVar58);
        auVar79 = vaddps_avx512vl(auVar61,auVar79);
        auVar58 = vfmadd231ps_avx512vl(auVar62,auVar60,auVar58);
        auVar62 = vaddps_avx512vl(auVar61,auVar81);
        auVar59 = vmulps_avx512vl(auVar78,auVar59);
        auVar63 = vmulps_avx512vl(auVar78,auVar63);
        auVar58 = vmulps_avx512vl(auVar78,auVar58);
        auVar61 = vfmadd213ps_avx512vl(auVar82,auVar78,local_300);
        auVar80 = vaddps_avx512vl(auVar59,local_2e0);
        auVar81 = vaddps_avx512vl(auVar63,local_2c0);
        auVar59 = vaddps_avx512vl(auVar59,_local_280);
        in_ZMM24 = ZEXT3264(auVar59);
        auVar79 = vfmadd213ps_avx512vl(auVar79,auVar78,local_260);
        auVar82 = vaddps_avx512vl(auVar58,local_240);
        auVar63 = vaddps_avx512vl(auVar63,_local_200);
        in_ZMM23 = ZEXT3264(auVar63);
        auVar58 = vaddps_avx512vl(auVar58,_local_1e0);
        in_ZMM25 = ZEXT3264(auVar58);
        auVar62 = vfmadd213ps_avx512vl(auVar62,auVar78,local_1c0);
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_300._4_4_ = (uint)bVar4 * auVar61._4_4_ | (uint)!bVar4 * local_300._4_4_;
        local_300._0_4_ =
             (uint)(bVar21 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar21 & 1) * local_300._0_4_;
        local_300._8_4_ = (uint)bVar32 * auVar61._8_4_ | (uint)!bVar32 * local_300._8_4_;
        local_300._12_4_ = (uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * local_300._12_4_;
        local_300._16_4_ = (uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * local_300._16_4_;
        local_300._20_4_ = (uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * local_300._20_4_;
        local_300._24_4_ = (uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * local_300._24_4_;
        local_300._28_4_ = (uint)bVar9 * auVar61._28_4_ | (uint)!bVar9 * local_300._28_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_2e0._4_4_ = (uint)bVar4 * auVar80._4_4_ | (uint)!bVar4 * local_2e0._4_4_;
        local_2e0._0_4_ =
             (uint)(bVar21 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar21 & 1) * local_2e0._0_4_;
        local_2e0._8_4_ = (uint)bVar32 * auVar80._8_4_ | (uint)!bVar32 * local_2e0._8_4_;
        local_2e0._12_4_ = (uint)bVar5 * auVar80._12_4_ | (uint)!bVar5 * local_2e0._12_4_;
        local_2e0._16_4_ = (uint)bVar6 * auVar80._16_4_ | (uint)!bVar6 * local_2e0._16_4_;
        local_2e0._20_4_ = (uint)bVar7 * auVar80._20_4_ | (uint)!bVar7 * local_2e0._20_4_;
        local_2e0._24_4_ = (uint)bVar8 * auVar80._24_4_ | (uint)!bVar8 * local_2e0._24_4_;
        local_2e0._28_4_ = (uint)bVar9 * auVar80._28_4_ | (uint)!bVar9 * local_2e0._28_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_2c0._4_4_ = (uint)bVar4 * auVar81._4_4_ | (uint)!bVar4 * local_2c0._4_4_;
        local_2c0._0_4_ =
             (uint)(bVar21 & 1) * auVar81._0_4_ | (uint)!(bool)(bVar21 & 1) * local_2c0._0_4_;
        local_2c0._8_4_ = (uint)bVar32 * auVar81._8_4_ | (uint)!bVar32 * local_2c0._8_4_;
        local_2c0._12_4_ = (uint)bVar5 * auVar81._12_4_ | (uint)!bVar5 * local_2c0._12_4_;
        local_2c0._16_4_ = (uint)bVar6 * auVar81._16_4_ | (uint)!bVar6 * local_2c0._16_4_;
        local_2c0._20_4_ = (uint)bVar7 * auVar81._20_4_ | (uint)!bVar7 * local_2c0._20_4_;
        local_2c0._24_4_ = (uint)bVar8 * auVar81._24_4_ | (uint)!bVar8 * local_2c0._24_4_;
        local_2c0._28_4_ = (uint)bVar9 * auVar81._28_4_ | (uint)!bVar9 * local_2c0._28_4_;
        auVar15._4_4_ = (uint)!(bool)((byte)(uVar29 >> 3) & 1) * local_2a0._12_4_;
        auVar15._0_4_ = (uint)!(bool)((byte)(uVar29 >> 2) & 1) * local_2a0._8_4_;
        auVar15._8_4_ = (uint)!(bool)((byte)(uVar29 >> 4) & 1) * local_2a0._16_4_;
        auVar15._12_4_ = (uint)!(bool)((byte)(uVar29 >> 5) & 1) * local_2a0._20_4_;
        auVar15._16_4_ = (uint)!(bool)((byte)(uVar29 >> 6) & 1) * local_2a0._24_4_;
        auVar15._20_4_ = (uint)!SUB81(uVar29 >> 7,0) * local_2a0._28_4_;
        auVar15._24_8_ = 0;
        local_2a0 = auVar15 << 0x40;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_280._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * local_280._4_4_;
        local_280._0_4_ =
             (uint)(bVar21 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar21 & 1) * local_280._0_4_;
        fStack_278 = (float)((uint)bVar32 * auVar59._8_4_ | (uint)!bVar32 * (int)fStack_278);
        fStack_274 = (float)((uint)bVar5 * auVar59._12_4_ | (uint)!bVar5 * (int)fStack_274);
        fStack_270 = (float)((uint)bVar6 * auVar59._16_4_ | (uint)!bVar6 * (int)fStack_270);
        fStack_26c = (float)((uint)bVar7 * auVar59._20_4_ | (uint)!bVar7 * (int)fStack_26c);
        fStack_268 = (float)((uint)bVar8 * auVar59._24_4_ | (uint)!bVar8 * (int)fStack_268);
        fStack_264 = (float)((uint)bVar9 * auVar59._28_4_ | (uint)!bVar9 * (int)fStack_264);
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_260._4_4_ = (uint)bVar4 * auVar79._4_4_ | (uint)!bVar4 * local_260._4_4_;
        local_260._0_4_ =
             (uint)(bVar21 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar21 & 1) * local_260._0_4_;
        local_260._8_4_ = (uint)bVar32 * auVar79._8_4_ | (uint)!bVar32 * local_260._8_4_;
        local_260._12_4_ = (uint)bVar5 * auVar79._12_4_ | (uint)!bVar5 * local_260._12_4_;
        local_260._16_4_ = (uint)bVar6 * auVar79._16_4_ | (uint)!bVar6 * local_260._16_4_;
        local_260._20_4_ = (uint)bVar7 * auVar79._20_4_ | (uint)!bVar7 * local_260._20_4_;
        local_260._24_4_ = (uint)bVar8 * auVar79._24_4_ | (uint)!bVar8 * local_260._24_4_;
        local_260._28_4_ = (uint)bVar9 * auVar79._28_4_ | (uint)!bVar9 * local_260._28_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_240._4_4_ = (uint)bVar4 * auVar82._4_4_ | (uint)!bVar4 * local_240._4_4_;
        local_240._0_4_ =
             (uint)(bVar21 & 1) * auVar82._0_4_ | (uint)!(bool)(bVar21 & 1) * local_240._0_4_;
        local_240._8_4_ = (uint)bVar32 * auVar82._8_4_ | (uint)!bVar32 * local_240._8_4_;
        local_240._12_4_ = (uint)bVar5 * auVar82._12_4_ | (uint)!bVar5 * local_240._12_4_;
        local_240._16_4_ = (uint)bVar6 * auVar82._16_4_ | (uint)!bVar6 * local_240._16_4_;
        local_240._20_4_ = (uint)bVar7 * auVar82._20_4_ | (uint)!bVar7 * local_240._20_4_;
        local_240._24_4_ = (uint)bVar8 * auVar82._24_4_ | (uint)!bVar8 * local_240._24_4_;
        local_240._28_4_ = (uint)bVar9 * auVar82._28_4_ | (uint)!bVar9 * local_240._28_4_;
        auVar16._4_4_ = (uint)!(bool)((byte)(uVar29 >> 3) & 1) * local_220._12_4_;
        auVar16._0_4_ = (uint)!(bool)((byte)(uVar29 >> 2) & 1) * local_220._8_4_;
        auVar16._8_4_ = (uint)!(bool)((byte)(uVar29 >> 4) & 1) * local_220._16_4_;
        auVar16._12_4_ = (uint)!(bool)((byte)(uVar29 >> 5) & 1) * local_220._20_4_;
        auVar16._16_4_ = (uint)!(bool)((byte)(uVar29 >> 6) & 1) * local_220._24_4_;
        auVar16._20_4_ = (uint)!SUB81(uVar29 >> 7,0) * local_220._28_4_;
        auVar16._24_8_ = 0;
        local_220 = auVar16 << 0x40;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_200._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * local_200._4_4_;
        local_200._0_4_ =
             (uint)(bVar21 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar21 & 1) * local_200._0_4_;
        fStack_1f8 = (float)((uint)bVar32 * auVar63._8_4_ | (uint)!bVar32 * (int)fStack_1f8);
        fStack_1f4 = (float)((uint)bVar5 * auVar63._12_4_ | (uint)!bVar5 * (int)fStack_1f4);
        fStack_1f0 = (float)((uint)bVar6 * auVar63._16_4_ | (uint)!bVar6 * (int)fStack_1f0);
        fStack_1ec = (float)((uint)bVar7 * auVar63._20_4_ | (uint)!bVar7 * (int)fStack_1ec);
        fStack_1e8 = (float)((uint)bVar8 * auVar63._24_4_ | (uint)!bVar8 * (int)fStack_1e8);
        fStack_1e4 = (float)((uint)bVar9 * auVar63._28_4_ | (uint)!bVar9 * (int)fStack_1e4);
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_1e0._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * local_1e0._4_4_;
        local_1e0._0_4_ =
             (uint)(bVar21 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar21 & 1) * local_1e0._0_4_;
        fStack_1d8 = (float)((uint)bVar32 * auVar58._8_4_ | (uint)!bVar32 * (int)fStack_1d8);
        fStack_1d4 = (float)((uint)bVar5 * auVar58._12_4_ | (uint)!bVar5 * (int)fStack_1d4);
        fStack_1d0 = (float)((uint)bVar6 * auVar58._16_4_ | (uint)!bVar6 * (int)fStack_1d0);
        fStack_1cc = (float)((uint)bVar7 * auVar58._20_4_ | (uint)!bVar7 * (int)fStack_1cc);
        fStack_1c8 = (float)((uint)bVar8 * auVar58._24_4_ | (uint)!bVar8 * (int)fStack_1c8);
        fStack_1c4 = (float)((uint)bVar9 * auVar58._28_4_ | (uint)!bVar9 * (int)fStack_1c4);
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_1c0._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_1c0._4_4_;
        local_1c0._0_4_ =
             (uint)(bVar21 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar21 & 1) * local_1c0._0_4_;
        local_1c0._8_4_ = (uint)bVar32 * auVar62._8_4_ | (uint)!bVar32 * local_1c0._8_4_;
        local_1c0._12_4_ = (uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * local_1c0._12_4_;
        local_1c0._16_4_ = (uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * local_1c0._16_4_;
        local_1c0._20_4_ = (uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * local_1c0._20_4_;
        local_1c0._24_4_ = (uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * local_1c0._24_4_;
        local_1c0._28_4_ = (uint)bVar9 * auVar62._28_4_ | (uint)!bVar9 * local_1c0._28_4_;
        auVar17._4_4_ = (uint)!(bool)((byte)(uVar29 >> 3) & 1) * local_1a0._12_4_;
        auVar17._0_4_ = (uint)!(bool)((byte)(uVar29 >> 2) & 1) * local_1a0._8_4_;
        auVar17._8_4_ = (uint)!(bool)((byte)(uVar29 >> 4) & 1) * local_1a0._16_4_;
        auVar17._12_4_ = (uint)!(bool)((byte)(uVar29 >> 5) & 1) * local_1a0._20_4_;
        auVar17._16_4_ = (uint)!(bool)((byte)(uVar29 >> 6) & 1) * local_1a0._24_4_;
        auVar17._20_4_ = (uint)!SUB81(uVar29 >> 7,0) * local_1a0._28_4_;
        auVar17._24_8_ = 0;
        local_1a0 = auVar17 << 0x40;
        auVar18._4_4_ = (uint)!(bool)((byte)(uVar29 >> 3) & 1) * local_180._12_4_;
        auVar18._0_4_ = (uint)!(bool)((byte)(uVar29 >> 2) & 1) * local_180._8_4_;
        auVar18._8_4_ = (uint)!(bool)((byte)(uVar29 >> 4) & 1) * local_180._16_4_;
        auVar18._12_4_ = (uint)!(bool)((byte)(uVar29 >> 5) & 1) * local_180._20_4_;
        auVar18._16_4_ = (uint)!(bool)((byte)(uVar29 >> 6) & 1) * local_180._24_4_;
        auVar18._20_4_ = (uint)!SUB81(uVar29 >> 7,0) * local_180._28_4_;
        auVar18._24_8_ = 0;
        local_180 = auVar18 << 0x40;
        auVar19._4_4_ = (uint)!(bool)((byte)(uVar29 >> 3) & 1) * local_160._12_4_;
        auVar19._0_4_ = (uint)!(bool)((byte)(uVar29 >> 2) & 1) * local_160._8_4_;
        auVar19._8_4_ = (uint)!(bool)((byte)(uVar29 >> 4) & 1) * local_160._16_4_;
        auVar19._12_4_ = (uint)!(bool)((byte)(uVar29 >> 5) & 1) * local_160._20_4_;
        auVar19._16_4_ = (uint)!(bool)((byte)(uVar29 >> 6) & 1) * local_160._24_4_;
        auVar19._20_4_ = (uint)!SUB81(uVar29 >> 7,0) * local_160._28_4_;
        auVar19._24_8_ = 0;
        local_160 = auVar19 << 0x40;
        auVar20._4_4_ = (uint)!(bool)((byte)(uVar29 >> 3) & 1) * local_140._12_4_;
        auVar20._0_4_ = (uint)!(bool)((byte)(uVar29 >> 2) & 1) * local_140._8_4_;
        auVar20._8_4_ = (uint)!(bool)((byte)(uVar29 >> 4) & 1) * local_140._16_4_;
        auVar20._12_4_ = (uint)!(bool)((byte)(uVar29 >> 5) & 1) * local_140._20_4_;
        auVar20._16_4_ = (uint)!(bool)((byte)(uVar29 >> 6) & 1) * local_140._24_4_;
        auVar20._20_4_ = (uint)!SUB81(uVar29 >> 7,0) * local_140._28_4_;
        auVar20._24_8_ = 0;
        local_140 = auVar20 << 0x40;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        bVar32 = (bool)((byte)(uVar29 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar29 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar29 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar29 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar29 >> 6) & 1);
        bVar9 = SUB81(uVar29 >> 7,0);
        local_120 = (bVar21 & 1) * __real_3f800000 | !(bool)(bVar21 & 1) * local_120;
        uStack_11c = bVar4 * __real_3f800000 | !bVar4 * uStack_11c;
        uStack_118 = bVar32 * __real_3f800000 | !bVar32 * uStack_118;
        uStack_114 = bVar5 * __real_3f800000 | !bVar5 * uStack_114;
        uStack_110 = bVar6 * __real_3f800000 | !bVar6 * uStack_110;
        uStack_10c = bVar7 * __real_3f800000 | !bVar7 * uStack_10c;
        uStack_108 = bVar8 * __real_3f800000 | !bVar8 * uStack_108;
        uStack_104 = bVar9 * __real_3f800000 | !bVar9 * uStack_104;
      }
      lVar24 = lVar24 + 8;
      pauVar26 = pauVar26 + 3;
      pauVar28 = pauVar28 + 3;
      iVar31 = iVar31 + 0x20;
    } while (lVar24 < lVar25);
    param_8 = (uint)lVar24;
    auVar42 = auVar37;
  }
  if ((int)param_8 < param_9) {
    auVar60 = vpbroadcastd_avx512vl();
    auVar10._0_4_ =
         auVar60._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar10._4_4_ = auVar60._4_4_ + _UNK_150b50ae4;
    auVar10._8_4_ = auVar60._8_4_ + _UNK_150b50ae8;
    auVar10._12_4_ = auVar60._12_4_ + _UNK_150b50aec;
    auVar10._16_4_ = auVar60._16_4_ + _UNK_150b50af0;
    auVar10._20_4_ = auVar60._20_4_ + _UNK_150b50af4;
    auVar10._24_4_ = auVar60._24_4_ + _UNK_150b50af8;
    auVar10._28_4_ = auVar60._28_4_ + _UNK_150b50afc;
    uVar14 = vpcmpd_avx512vl(auVar10,auVar64,5);
    uVar29 = vpcmpgtd_avx512vl(auVar64,auVar10);
    piVar1 = (int *)(param_7 + (int)(param_8 * 4));
    bVar21 = (byte)uVar29;
    auVar89._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * piVar1[1];
    auVar89._0_4_ = (uint)(bVar21 & 1) * *piVar1;
    auVar89._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * piVar1[2];
    auVar89._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * piVar1[3];
    auVar89._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * piVar1[4];
    auVar89._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * piVar1[5];
    auVar89._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * piVar1[6];
    auVar89._28_4_ = (uint)(byte)(uVar29 >> 7) * piVar1[7];
    auVar133 = ZEXT1664((undefined1  [16])0x0);
    uVar12 = vcmpps_avx512vl(auVar89,auVar133._0_32_,8);
    if ((byte)((byte)uVar12 | (byte)uVar14) != 0xff) {
      uVar12 = vcmpps_avx512vl(auVar89,auVar133._0_32_,8);
      bVar22 = bVar21 & (byte)uVar12;
      if (bVar22 != bVar21) {
        bVar22 = bVar22 ^ bVar21;
        lVar25 = (longlong)(int)param_8;
        pauVar26 = (undefined1 (*) [32])(param_4 + lVar25 * 0xc);
        if (bVar22 == 0xff) {
          auVar60 = pauVar26[1];
          auVar64 = vblendps_avx(auVar60,*pauVar26,0x24);
          auVar58 = vpermt2ps_avx512vl(*pauVar26,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar60);
          auVar90 = vpermt2ps_avx512vl(auVar64,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar26[2]);
          auVar60 = vpermt2ps_avx512vl(pauVar26[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar60);
          auVar91 = vinsertf32x4_avx512vl(auVar58,auVar60._0_16_,1);
          auVar92 = vshuff64x2_avx512vl(auVar58,auVar60,3);
          auVar60 = *(undefined1 (*) [32])(param_5 + lVar25 * 0xc);
          auVar64 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar25 * 0xc);
          auVar58 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar25 * 0xc);
          auVar37 = auVar58._0_16_;
          auVar59 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar60,auVar64);
          auVar63 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar58,auVar64);
          auVar93 = vinsertf32x4_avx512vl(auVar59,auVar63._0_16_,1);
          auVar94 = vshuff64x2_avx512vl(auVar59,auVar63,3);
          auVar60 = vblendps_avx(auVar64,auVar60,0x24);
          auVar95 = vpermt2ps_avx512vl(auVar60,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,auVar58);
        }
        else {
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar26 * 2));
          auVar91._4_4_ = (uint)(bVar22 >> 1 & 1) * auVar60._4_4_;
          auVar91._0_4_ = (uint)(bVar22 & 1) * auVar60._0_4_;
          bVar4 = (bool)(bVar22 >> 2 & 1);
          auVar91._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar133._8_4_;
          bVar4 = (bool)(bVar22 >> 3 & 1);
          auVar91._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar133._12_4_;
          auVar91._16_4_ = (uint)(bVar22 >> 4 & 1) * auVar60._16_4_;
          auVar91._20_4_ = (uint)(bVar22 >> 5 & 1) * auVar60._20_4_;
          auVar91._24_4_ = (uint)(bVar22 >> 6 & 1) * auVar60._24_4_;
          auVar91._28_4_ = (uint)(bVar22 >> 7) * auVar60._28_4_;
          auVar38 = vxorps_avx512vl(auVar39,auVar39);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(local_400 + (longlong)*pauVar26));
          auVar92._0_4_ =
               (uint)(bVar22 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar22 & 1) * auVar38._0_4_;
          bVar4 = (bool)(bVar22 >> 1 & 1);
          auVar92._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar38._4_4_;
          bVar4 = (bool)(bVar22 >> 2 & 1);
          auVar92._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar38._8_4_;
          bVar4 = (bool)(bVar22 >> 3 & 1);
          auVar92._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar38._12_4_;
          auVar92._16_4_ = (uint)(bVar22 >> 4 & 1) * auVar60._16_4_;
          auVar92._20_4_ = (uint)(bVar22 >> 5 & 1) * auVar60._20_4_;
          auVar92._24_4_ = (uint)(bVar22 >> 6 & 1) * auVar60._24_4_;
          auVar92._28_4_ = (uint)(bVar22 >> 7) * auVar60._28_4_;
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + (longlong)*pauVar26));
          auVar90._4_4_ = (uint)(bVar22 >> 1 & 1) * auVar60._4_4_;
          auVar90._0_4_ = (uint)(bVar22 & 1) * auVar60._0_4_;
          auVar90._8_4_ = (uint)(bVar22 >> 2 & 1) * auVar60._8_4_;
          auVar90._12_4_ = (uint)(bVar22 >> 3 & 1) * auVar60._12_4_;
          auVar90._16_4_ = (uint)(bVar22 >> 4 & 1) * auVar60._16_4_;
          auVar90._20_4_ = (uint)(bVar22 >> 5 & 1) * auVar60._20_4_;
          auVar90._24_4_ = (uint)(bVar22 >> 6 & 1) * auVar60._24_4_;
          auVar90._28_4_ = (uint)(bVar22 >> 7) * auVar60._28_4_;
          param_5 = param_5 + lVar25 * 0xc;
          auVar42 = vxorps_avx512vl(auVar42,auVar42);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar26 + param_5));
          auVar93._0_4_ =
               (uint)(bVar22 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar22 & 1) * auVar42._0_4_;
          bVar4 = (bool)(bVar22 >> 1 & 1);
          auVar93._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)(bVar22 >> 2 & 1);
          auVar93._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)(bVar22 >> 3 & 1);
          auVar93._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar93._16_4_ = (uint)(bVar22 >> 4 & 1) * auVar60._16_4_;
          auVar93._20_4_ = (uint)(bVar22 >> 5 & 1) * auVar60._20_4_;
          auVar93._24_4_ = (uint)(bVar22 >> 6 & 1) * auVar60._24_4_;
          auVar93._28_4_ = (uint)(bVar22 >> 7) * auVar60._28_4_;
          auVar42 = vxorps_avx512vl(auVar50,auVar50);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(local_400 + param_5));
          auVar94._0_4_ =
               (uint)(bVar22 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar22 & 1) * auVar42._0_4_;
          bVar4 = (bool)(bVar22 >> 1 & 1);
          auVar94._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
          bVar4 = (bool)(bVar22 >> 2 & 1);
          auVar94._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
          bVar4 = (bool)(bVar22 >> 3 & 1);
          auVar94._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
          auVar94._16_4_ = (uint)(bVar22 >> 4 & 1) * auVar60._16_4_;
          auVar94._20_4_ = (uint)(bVar22 >> 5 & 1) * auVar60._20_4_;
          auVar94._24_4_ = (uint)(bVar22 >> 6 & 1) * auVar60._24_4_;
          auVar94._28_4_ = (uint)(bVar22 >> 7) * auVar60._28_4_;
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + param_5));
          auVar95._4_4_ = (uint)(bVar22 >> 1 & 1) * auVar60._4_4_;
          auVar95._0_4_ = (uint)(bVar22 & 1) * auVar60._0_4_;
          auVar95._8_4_ = (uint)(bVar22 >> 2 & 1) * auVar60._8_4_;
          auVar95._12_4_ = (uint)(bVar22 >> 3 & 1) * auVar60._12_4_;
          auVar95._16_4_ = (uint)(bVar22 >> 4 & 1) * auVar60._16_4_;
          auVar95._20_4_ = (uint)(bVar22 >> 5 & 1) * auVar60._20_4_;
          auVar95._24_4_ = (uint)(bVar22 >> 6 & 1) * auVar60._24_4_;
          auVar95._28_4_ = (uint)(bVar22 >> 7) * auVar60._28_4_;
        }
        piVar1 = (int *)(param_6 + (int)(param_8 * 4));
        auVar96._4_4_ = (uint)(bVar22 >> 1 & 1) * piVar1[1];
        auVar96._0_4_ = (uint)(bVar22 & 1) * *piVar1;
        auVar96._8_4_ = (uint)(bVar22 >> 2 & 1) * piVar1[2];
        auVar96._12_4_ = (uint)(bVar22 >> 3 & 1) * piVar1[3];
        auVar96._16_4_ = (uint)(bVar22 >> 4 & 1) * piVar1[4];
        auVar96._20_4_ = (uint)(bVar22 >> 5 & 1) * piVar1[5];
        auVar96._24_4_ = (uint)(bVar22 >> 6 & 1) * piVar1[6];
        auVar96._28_4_ = (uint)(bVar22 >> 7) * piVar1[7];
        auVar42 = vxorps_avx512vl(auVar37,auVar37);
        auVar120._0_4_ = auVar35._0_4_;
        auVar120._4_4_ = auVar120._0_4_;
        auVar120._8_4_ = auVar120._0_4_;
        auVar120._12_4_ = auVar120._0_4_;
        auVar120._16_4_ = auVar120._0_4_;
        auVar120._20_4_ = auVar120._0_4_;
        auVar120._24_4_ = auVar120._0_4_;
        auVar120._28_4_ = auVar120._0_4_;
        auVar60 = vsubps_avx(auVar91,auVar120);
        auVar129._0_4_ = auVar36._0_4_;
        auVar129._4_4_ = auVar129._0_4_;
        auVar129._8_4_ = auVar129._0_4_;
        auVar129._12_4_ = auVar129._0_4_;
        auVar129._16_4_ = auVar129._0_4_;
        auVar129._20_4_ = auVar129._0_4_;
        auVar129._24_4_ = auVar129._0_4_;
        auVar129._28_4_ = auVar129._0_4_;
        auVar59 = vsubps_avx512vl(auVar92,auVar129);
        auVar131._0_4_ = auVar51._0_4_;
        auVar131._4_4_ = auVar131._0_4_;
        auVar131._8_4_ = auVar131._0_4_;
        auVar131._12_4_ = auVar131._0_4_;
        auVar131._16_4_ = auVar131._0_4_;
        auVar131._20_4_ = auVar131._0_4_;
        auVar131._24_4_ = auVar131._0_4_;
        auVar131._28_4_ = auVar131._0_4_;
        auVar64 = vsubps_avx(auVar90,auVar131);
        auVar58 = vmulps_avx512vl(auVar93,auVar96);
        auVar63 = vmulps_avx512vl(auVar94,auVar96);
        auVar62 = vmulps_avx512vl(auVar95,auVar96);
        auVar61 = vmulps_avx512vl(auVar58,auVar59);
        auVar79 = vmulps_avx512vl(auVar63,auVar64);
        auVar80 = vmulps_avx512vl(auVar62,auVar60);
        auVar63 = vfmsub231ps_avx512vl(auVar61,auVar60,auVar63);
        auVar62 = vfmsub231ps_avx512vl(auVar79,auVar59,auVar62);
        auVar58 = vfmsub231ps_avx512vl(auVar80,auVar64,auVar58);
        auVar62 = vaddps_avx512vl(auVar62,local_420);
        auVar58 = vaddps_avx512vl(auVar58,local_400);
        auVar63 = vaddps_avx512vl(auVar63,local_3e0);
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_420._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_420._4_4_;
        local_420._0_4_ =
             (uint)(bVar22 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar22 & 1) * local_420._0_4_;
        local_420._8_4_ = (uint)bVar32 * auVar62._8_4_ | (uint)!bVar32 * local_420._8_4_;
        local_420._12_4_ = (uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * local_420._12_4_;
        local_420._16_4_ = (uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * local_420._16_4_;
        local_420._20_4_ = (uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * local_420._20_4_;
        local_420._24_4_ = (uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * local_420._24_4_;
        local_420._28_4_ =
             (uint)(bVar22 >> 7) * auVar62._28_4_ | (uint)!(bool)(bVar22 >> 7) * local_420._28_4_;
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_400._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * local_400._4_4_;
        local_400._0_4_ =
             (uint)(bVar22 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar22 & 1) * local_400._0_4_;
        local_400._8_4_ = (uint)bVar32 * auVar58._8_4_ | (uint)!bVar32 * local_400._8_4_;
        local_400._12_4_ = (uint)bVar5 * auVar58._12_4_ | (uint)!bVar5 * local_400._12_4_;
        local_400._16_4_ = (uint)bVar6 * auVar58._16_4_ | (uint)!bVar6 * local_400._16_4_;
        local_400._20_4_ = (uint)bVar7 * auVar58._20_4_ | (uint)!bVar7 * local_400._20_4_;
        local_400._24_4_ = (uint)bVar8 * auVar58._24_4_ | (uint)!bVar8 * local_400._24_4_;
        local_400._28_4_ =
             (uint)(bVar22 >> 7) * auVar58._28_4_ | (uint)!(bool)(bVar22 >> 7) * local_400._28_4_;
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_3e0._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * local_3e0._4_4_;
        local_3e0._0_4_ =
             (uint)(bVar22 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar22 & 1) * local_3e0._0_4_;
        local_3e0._8_4_ = (uint)bVar32 * auVar63._8_4_ | (uint)!bVar32 * local_3e0._8_4_;
        local_3e0._12_4_ = (uint)bVar5 * auVar63._12_4_ | (uint)!bVar5 * local_3e0._12_4_;
        local_3e0._16_4_ = (uint)bVar6 * auVar63._16_4_ | (uint)!bVar6 * local_3e0._16_4_;
        local_3e0._20_4_ = (uint)bVar7 * auVar63._20_4_ | (uint)!bVar7 * local_3e0._20_4_;
        local_3e0._24_4_ = (uint)bVar8 * auVar63._24_4_ | (uint)!bVar8 * local_3e0._24_4_;
        local_3e0._28_4_ =
             (uint)(bVar22 >> 7) * auVar63._28_4_ | (uint)!(bool)(bVar22 >> 7) * local_3e0._28_4_;
        auVar58 = vmulps_avx512vl(auVar64,ZEXT1632(auVar42));
        auVar63 = vmulps_avx512vl(auVar59,ZEXT1632(auVar42));
        auVar62 = vmulps_avx512vl(auVar64,auVar64);
        auVar58 = vsubps_avx(auVar58,auVar58);
        auVar61 = vmulps_avx512vl(auVar59,auVar64);
        fVar119 = auVar60._0_4_;
        auVar118._0_4_ = -(fVar119 * auVar64._0_4_) + auVar63._0_4_;
        fVar121 = auVar60._4_4_;
        auVar118._4_4_ = -(fVar121 * auVar64._4_4_) + auVar63._4_4_;
        fVar122 = auVar60._8_4_;
        auVar118._8_4_ = -(fVar122 * auVar64._8_4_) + auVar63._8_4_;
        fVar123 = auVar60._12_4_;
        auVar118._12_4_ = -(fVar123 * auVar64._12_4_) + auVar63._12_4_;
        fVar124 = auVar60._16_4_;
        auVar118._16_4_ = -(fVar124 * auVar64._16_4_) + auVar63._16_4_;
        fVar125 = auVar60._20_4_;
        auVar118._20_4_ = -(fVar125 * auVar64._20_4_) + auVar63._20_4_;
        fVar126 = auVar60._24_4_;
        auVar118._24_4_ = -(fVar126 * auVar64._24_4_) + auVar63._24_4_;
        fVar127 = auVar60._28_4_;
        auVar118._28_4_ = -(fVar127 * auVar64._28_4_) + auVar63._28_4_;
        auVar79 = vmulps_avx512vl(auVar59,auVar59);
        auVar80 = vaddps_avx512vl(auVar79,auVar62);
        auVar132._0_4_ = -(fVar119 * auVar59._0_4_) + auVar58._0_4_;
        auVar132._4_4_ = -(fVar121 * auVar59._4_4_) + auVar58._4_4_;
        auVar132._8_4_ = -(fVar122 * auVar59._8_4_) + auVar58._8_4_;
        auVar132._12_4_ = -(fVar123 * auVar59._12_4_) + auVar58._12_4_;
        auVar132._16_4_ = -(fVar124 * auVar59._16_4_) + auVar58._16_4_;
        auVar132._20_4_ = -(fVar125 * auVar59._20_4_) + auVar58._20_4_;
        auVar132._24_4_ = -(fVar126 * auVar59._24_4_) + auVar58._24_4_;
        auVar132._28_4_ = -(fVar127 * auVar59._28_4_) + auVar58._28_4_;
        auVar64 = vsubps_avx(auVar118,auVar63);
        auVar58 = vfnmsub231ps_avx512vl(auVar61,auVar60,ZEXT1632(auVar42));
        auVar130._0_4_ = fVar119 * fVar119;
        auVar130._4_4_ = fVar121 * fVar121;
        auVar130._8_4_ = fVar122 * fVar122;
        auVar130._12_4_ = fVar123 * fVar123;
        auVar130._16_4_ = fVar124 * fVar124;
        auVar130._20_4_ = fVar125 * fVar125;
        auVar130._24_4_ = fVar126 * fVar126;
        auVar130._28_4_ = fVar127 * fVar127;
        auVar59 = vaddps_avx512vl(auVar130,auVar62);
        auVar60 = vfmadd231ps_avx512vl(auVar58,ZEXT1632(auVar42),auVar60);
        auVar58 = vaddps_avx512vl(auVar130,auVar79);
        auVar63 = vmulps_avx512vl(auVar96,auVar132);
        auVar64 = vmulps_avx512vl(auVar96,auVar64);
        auVar60 = vmulps_avx512vl(auVar96,auVar60);
        auVar62 = vfmadd213ps_avx512vl(auVar80,auVar96,local_300);
        auVar61 = vaddps_avx512vl(auVar63,local_2e0);
        auVar79 = vaddps_avx512vl(auVar64,local_2c0);
        auVar59 = vfmadd213ps_avx512vl(auVar59,auVar96,local_260);
        auVar80 = vaddps_avx512vl(auVar60,local_240);
        auVar58 = vfmadd213ps_avx512vl(auVar58,auVar96,local_1c0);
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_300._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_300._4_4_;
        local_300._0_4_ =
             (uint)(bVar22 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar22 & 1) * local_300._0_4_;
        local_300._8_4_ = (uint)bVar32 * auVar62._8_4_ | (uint)!bVar32 * local_300._8_4_;
        local_300._12_4_ = (uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * local_300._12_4_;
        local_300._16_4_ = (uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * local_300._16_4_;
        local_300._20_4_ = (uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * local_300._20_4_;
        local_300._24_4_ = (uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * local_300._24_4_;
        local_300._28_4_ =
             (uint)(bVar22 >> 7) * auVar62._28_4_ | (uint)!(bool)(bVar22 >> 7) * local_300._28_4_;
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_2e0._4_4_ = (uint)bVar4 * auVar61._4_4_ | (uint)!bVar4 * local_2e0._4_4_;
        local_2e0._0_4_ =
             (uint)(bVar22 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar22 & 1) * local_2e0._0_4_;
        local_2e0._8_4_ = (uint)bVar32 * auVar61._8_4_ | (uint)!bVar32 * local_2e0._8_4_;
        local_2e0._12_4_ = (uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * local_2e0._12_4_;
        local_2e0._16_4_ = (uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * local_2e0._16_4_;
        local_2e0._20_4_ = (uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * local_2e0._20_4_;
        local_2e0._24_4_ = (uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * local_2e0._24_4_;
        local_2e0._28_4_ =
             (uint)(bVar22 >> 7) * auVar61._28_4_ | (uint)!(bool)(bVar22 >> 7) * local_2e0._28_4_;
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_2c0._4_4_ = (uint)bVar4 * auVar79._4_4_ | (uint)!bVar4 * local_2c0._4_4_;
        local_2c0._0_4_ =
             (uint)(bVar22 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar22 & 1) * local_2c0._0_4_;
        local_2c0._8_4_ = (uint)bVar32 * auVar79._8_4_ | (uint)!bVar32 * local_2c0._8_4_;
        local_2c0._12_4_ = (uint)bVar5 * auVar79._12_4_ | (uint)!bVar5 * local_2c0._12_4_;
        local_2c0._16_4_ = (uint)bVar6 * auVar79._16_4_ | (uint)!bVar6 * local_2c0._16_4_;
        local_2c0._20_4_ = (uint)bVar7 * auVar79._20_4_ | (uint)!bVar7 * local_2c0._20_4_;
        local_2c0._24_4_ = (uint)bVar8 * auVar79._24_4_ | (uint)!bVar8 * local_2c0._24_4_;
        local_2c0._28_4_ =
             (uint)(bVar22 >> 7) * auVar79._28_4_ | (uint)!(bool)(bVar22 >> 7) * local_2c0._28_4_;
        iVar27 = auVar42._0_4_;
        iVar116 = auVar42._4_4_;
        bVar4 = (bool)(bVar22 >> 2 & 1);
        iVar117 = auVar42._8_4_;
        iVar31 = auVar42._12_4_;
        bVar32 = (bool)(bVar22 >> 3 & 1);
        local_2a0._4_4_ = (uint)(bVar22 >> 1 & 1) * iVar116;
        local_2a0._0_4_ = (uint)(bVar22 & 1) * iVar27;
        local_2a0._8_4_ = (uint)bVar4 * iVar117 | (uint)!bVar4 * local_2a0._8_4_;
        local_2a0._12_4_ = (uint)bVar32 * iVar31 | (uint)!bVar32 * local_2a0._12_4_;
        local_2a0._16_4_ = (uint)!(bool)(bVar22 >> 4 & 1) * local_2a0._16_4_;
        local_2a0._20_4_ = (uint)!(bool)(bVar22 >> 5 & 1) * local_2a0._20_4_;
        local_2a0._24_4_ = (uint)!(bool)(bVar22 >> 6 & 1) * local_2a0._24_4_;
        local_2a0._28_4_ = (uint)!(bool)(bVar22 >> 7) * local_2a0._28_4_;
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_280._4_4_ =
             (uint)bVar4 * (int)(auVar63._4_4_ + (float)local_280._4_4_) |
             (uint)!bVar4 * local_280._4_4_;
        local_280._0_4_ =
             (uint)(bVar22 & 1) * (int)(auVar63._0_4_ + (float)local_280._0_4_) |
             (uint)!(bool)(bVar22 & 1) * local_280._0_4_;
        fStack_278 = (float)((uint)bVar32 * (int)(auVar63._8_4_ + fStack_278) |
                            (uint)!bVar32 * (int)fStack_278);
        fStack_274 = (float)((uint)bVar5 * (int)(auVar63._12_4_ + fStack_274) |
                            (uint)!bVar5 * (int)fStack_274);
        fStack_270 = (float)((uint)bVar6 * (int)(auVar63._16_4_ + fStack_270) |
                            (uint)!bVar6 * (int)fStack_270);
        fStack_26c = (float)((uint)bVar7 * (int)(auVar63._20_4_ + fStack_26c) |
                            (uint)!bVar7 * (int)fStack_26c);
        fStack_268 = (float)((uint)bVar8 * (int)(auVar63._24_4_ + fStack_268) |
                            (uint)!bVar8 * (int)fStack_268);
        fStack_264 = (float)((uint)(bVar22 >> 7) * (int)(auVar63._28_4_ + fStack_264) |
                            (uint)!(bool)(bVar22 >> 7) * (int)fStack_264);
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_260._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * local_260._4_4_;
        local_260._0_4_ =
             (uint)(bVar22 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar22 & 1) * local_260._0_4_;
        local_260._8_4_ = (uint)bVar32 * auVar59._8_4_ | (uint)!bVar32 * local_260._8_4_;
        local_260._12_4_ = (uint)bVar5 * auVar59._12_4_ | (uint)!bVar5 * local_260._12_4_;
        local_260._16_4_ = (uint)bVar6 * auVar59._16_4_ | (uint)!bVar6 * local_260._16_4_;
        local_260._20_4_ = (uint)bVar7 * auVar59._20_4_ | (uint)!bVar7 * local_260._20_4_;
        local_260._24_4_ = (uint)bVar8 * auVar59._24_4_ | (uint)!bVar8 * local_260._24_4_;
        local_260._28_4_ =
             (uint)(bVar22 >> 7) * auVar59._28_4_ | (uint)!(bool)(bVar22 >> 7) * local_260._28_4_;
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_240._4_4_ = (uint)bVar4 * auVar80._4_4_ | (uint)!bVar4 * local_240._4_4_;
        local_240._0_4_ =
             (uint)(bVar22 & 1) * auVar80._0_4_ | (uint)!(bool)(bVar22 & 1) * local_240._0_4_;
        local_240._8_4_ = (uint)bVar32 * auVar80._8_4_ | (uint)!bVar32 * local_240._8_4_;
        local_240._12_4_ = (uint)bVar5 * auVar80._12_4_ | (uint)!bVar5 * local_240._12_4_;
        local_240._16_4_ = (uint)bVar6 * auVar80._16_4_ | (uint)!bVar6 * local_240._16_4_;
        local_240._20_4_ = (uint)bVar7 * auVar80._20_4_ | (uint)!bVar7 * local_240._20_4_;
        local_240._24_4_ = (uint)bVar8 * auVar80._24_4_ | (uint)!bVar8 * local_240._24_4_;
        local_240._28_4_ =
             (uint)(bVar22 >> 7) * auVar80._28_4_ | (uint)!(bool)(bVar22 >> 7) * local_240._28_4_;
        bVar4 = (bool)(bVar22 >> 2 & 1);
        bVar32 = (bool)(bVar22 >> 3 & 1);
        local_220._4_4_ = (uint)(bVar22 >> 1 & 1) * iVar116;
        local_220._0_4_ = (uint)(bVar22 & 1) * iVar27;
        local_220._8_4_ = (uint)bVar4 * iVar117 | (uint)!bVar4 * local_220._8_4_;
        local_220._12_4_ = (uint)bVar32 * iVar31 | (uint)!bVar32 * local_220._12_4_;
        local_220._16_4_ = (uint)!(bool)(bVar22 >> 4 & 1) * local_220._16_4_;
        local_220._20_4_ = (uint)!(bool)(bVar22 >> 5 & 1) * local_220._20_4_;
        local_220._24_4_ = (uint)!(bool)(bVar22 >> 6 & 1) * local_220._24_4_;
        local_220._28_4_ = (uint)!(bool)(bVar22 >> 7) * local_220._28_4_;
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_200._4_4_ =
             (uint)bVar4 * (int)(auVar64._4_4_ + (float)local_200._4_4_) |
             (uint)!bVar4 * local_200._4_4_;
        local_200._0_4_ =
             (uint)(bVar22 & 1) * (int)(auVar64._0_4_ + (float)local_200._0_4_) |
             (uint)!(bool)(bVar22 & 1) * local_200._0_4_;
        fStack_1f8 = (float)((uint)bVar32 * (int)(auVar64._8_4_ + fStack_1f8) |
                            (uint)!bVar32 * (int)fStack_1f8);
        fStack_1f4 = (float)((uint)bVar5 * (int)(auVar64._12_4_ + fStack_1f4) |
                            (uint)!bVar5 * (int)fStack_1f4);
        fStack_1f0 = (float)((uint)bVar6 * (int)(auVar64._16_4_ + fStack_1f0) |
                            (uint)!bVar6 * (int)fStack_1f0);
        fStack_1ec = (float)((uint)bVar7 * (int)(auVar64._20_4_ + fStack_1ec) |
                            (uint)!bVar7 * (int)fStack_1ec);
        fStack_1e8 = (float)((uint)bVar8 * (int)(auVar64._24_4_ + fStack_1e8) |
                            (uint)!bVar8 * (int)fStack_1e8);
        fStack_1e4 = (float)((uint)(bVar22 >> 7) * (int)(auVar64._28_4_ + fStack_1e4) |
                            (uint)!(bool)(bVar22 >> 7) * (int)fStack_1e4);
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_1e0._4_4_ =
             (uint)bVar4 * (int)(auVar60._4_4_ + (float)local_1e0._4_4_) |
             (uint)!bVar4 * local_1e0._4_4_;
        local_1e0._0_4_ =
             (uint)(bVar22 & 1) * (int)(auVar60._0_4_ + (float)local_1e0._0_4_) |
             (uint)!(bool)(bVar22 & 1) * local_1e0._0_4_;
        fStack_1d8 = (float)((uint)bVar32 * (int)(auVar60._8_4_ + fStack_1d8) |
                            (uint)!bVar32 * (int)fStack_1d8);
        fStack_1d4 = (float)((uint)bVar5 * (int)(auVar60._12_4_ + fStack_1d4) |
                            (uint)!bVar5 * (int)fStack_1d4);
        fStack_1d0 = (float)((uint)bVar6 * (int)(auVar60._16_4_ + fStack_1d0) |
                            (uint)!bVar6 * (int)fStack_1d0);
        fStack_1cc = (float)((uint)bVar7 * (int)(auVar60._20_4_ + fStack_1cc) |
                            (uint)!bVar7 * (int)fStack_1cc);
        fStack_1c8 = (float)((uint)bVar8 * (int)(auVar60._24_4_ + fStack_1c8) |
                            (uint)!bVar8 * (int)fStack_1c8);
        fStack_1c4 = (float)((uint)(bVar22 >> 7) * (int)(auVar60._28_4_ + fStack_1c4) |
                            (uint)!(bool)(bVar22 >> 7) * (int)fStack_1c4);
        bVar4 = (bool)(bVar22 >> 1 & 1);
        bVar32 = (bool)(bVar22 >> 2 & 1);
        bVar5 = (bool)(bVar22 >> 3 & 1);
        bVar6 = (bool)(bVar22 >> 4 & 1);
        bVar7 = (bool)(bVar22 >> 5 & 1);
        bVar8 = (bool)(bVar22 >> 6 & 1);
        local_1c0._4_4_ = (uint)bVar4 * auVar58._4_4_ | (uint)!bVar4 * local_1c0._4_4_;
        local_1c0._0_4_ =
             (uint)(bVar22 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar22 & 1) * local_1c0._0_4_;
        local_1c0._8_4_ = (uint)bVar32 * auVar58._8_4_ | (uint)!bVar32 * local_1c0._8_4_;
        local_1c0._12_4_ = (uint)bVar5 * auVar58._12_4_ | (uint)!bVar5 * local_1c0._12_4_;
        local_1c0._16_4_ = (uint)bVar6 * auVar58._16_4_ | (uint)!bVar6 * local_1c0._16_4_;
        local_1c0._20_4_ = (uint)bVar7 * auVar58._20_4_ | (uint)!bVar7 * local_1c0._20_4_;
        local_1c0._24_4_ = (uint)bVar8 * auVar58._24_4_ | (uint)!bVar8 * local_1c0._24_4_;
        local_1c0._28_4_ =
             (uint)(bVar22 >> 7) * auVar58._28_4_ | (uint)!(bool)(bVar22 >> 7) * local_1c0._28_4_;
        bVar4 = (bool)(bVar22 >> 2 & 1);
        bVar32 = (bool)(bVar22 >> 3 & 1);
        local_1a0._4_4_ = (uint)(bVar22 >> 1 & 1) * iVar116;
        local_1a0._0_4_ = (uint)(bVar22 & 1) * iVar27;
        local_1a0._8_4_ = (uint)bVar4 * iVar117 | (uint)!bVar4 * local_1a0._8_4_;
        local_1a0._12_4_ = (uint)bVar32 * iVar31 | (uint)!bVar32 * local_1a0._12_4_;
        local_1a0._16_4_ = (uint)!(bool)(bVar22 >> 4 & 1) * local_1a0._16_4_;
        local_1a0._20_4_ = (uint)!(bool)(bVar22 >> 5 & 1) * local_1a0._20_4_;
        local_1a0._24_4_ = (uint)!(bool)(bVar22 >> 6 & 1) * local_1a0._24_4_;
        local_1a0._28_4_ =
             (uint)(bVar22 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
             (uint)!(bool)(bVar22 >> 7) * local_1a0._28_4_;
        bVar4 = (bool)(bVar22 >> 2 & 1);
        bVar32 = (bool)(bVar22 >> 3 & 1);
        local_180._4_4_ = (uint)(bVar22 >> 1 & 1) * iVar116;
        local_180._0_4_ = (uint)(bVar22 & 1) * iVar27;
        local_180._8_4_ = (uint)bVar4 * iVar117 | (uint)!bVar4 * local_180._8_4_;
        local_180._12_4_ = (uint)bVar32 * iVar31 | (uint)!bVar32 * local_180._12_4_;
        local_180._16_4_ = (uint)!(bool)(bVar22 >> 4 & 1) * local_180._16_4_;
        local_180._20_4_ = (uint)!(bool)(bVar22 >> 5 & 1) * local_180._20_4_;
        local_180._24_4_ = (uint)!(bool)(bVar22 >> 6 & 1) * local_180._24_4_;
        local_180._28_4_ = (uint)!(bool)(bVar22 >> 7) * local_180._28_4_;
        bVar4 = (bool)(bVar22 >> 2 & 1);
        bVar32 = (bool)(bVar22 >> 3 & 1);
        local_160._4_4_ = (uint)(bVar22 >> 1 & 1) * iVar116;
        local_160._0_4_ = (uint)(bVar22 & 1) * iVar27;
        local_160._8_4_ = (uint)bVar4 * iVar117 | (uint)!bVar4 * local_160._8_4_;
        local_160._12_4_ = (uint)bVar32 * iVar31 | (uint)!bVar32 * local_160._12_4_;
        local_160._16_4_ = (uint)!(bool)(bVar22 >> 4 & 1) * local_160._16_4_;
        local_160._20_4_ = (uint)!(bool)(bVar22 >> 5 & 1) * local_160._20_4_;
        local_160._24_4_ = (uint)!(bool)(bVar22 >> 6 & 1) * local_160._24_4_;
        local_160._28_4_ = (uint)!(bool)(bVar22 >> 7) * local_160._28_4_;
        bVar4 = (bool)(bVar22 >> 2 & 1);
        bVar32 = (bool)(bVar22 >> 3 & 1);
        local_140._4_4_ = (uint)(bVar22 >> 1 & 1) * iVar116;
        local_140._0_4_ = (uint)(bVar22 & 1) * iVar27;
        local_140._8_4_ = (uint)bVar4 * iVar117 | (uint)!bVar4 * local_140._8_4_;
        local_140._12_4_ = (uint)bVar32 * iVar31 | (uint)!bVar32 * local_140._12_4_;
        local_140._16_4_ = (uint)!(bool)(bVar22 >> 4 & 1) * local_140._16_4_;
        local_140._20_4_ = (uint)!(bool)(bVar22 >> 5 & 1) * local_140._20_4_;
        local_140._24_4_ = (uint)!(bool)(bVar22 >> 6 & 1) * local_140._24_4_;
        local_140._28_4_ = (uint)!(bool)(bVar22 >> 7) * local_140._28_4_;
        local_120 = (bVar22 & 1) * __real_3f800000 | !(bool)(bVar22 & 1) * local_120;
        bVar4 = (bool)(bVar22 >> 1 & 1);
        uStack_11c = bVar4 * __real_3f800000 | !bVar4 * uStack_11c;
        bVar4 = (bool)(bVar22 >> 2 & 1);
        uStack_118 = bVar4 * __real_3f800000 | !bVar4 * uStack_118;
        bVar4 = (bool)(bVar22 >> 3 & 1);
        uStack_114 = bVar4 * __real_3f800000 | !bVar4 * uStack_114;
        bVar4 = (bool)(bVar22 >> 4 & 1);
        uStack_110 = bVar4 * __real_3f800000 | !bVar4 * uStack_110;
        bVar4 = (bool)(bVar22 >> 5 & 1);
        uStack_10c = bVar4 * __real_3f800000 | !bVar4 * uStack_10c;
        bVar4 = (bool)(bVar22 >> 6 & 1);
        uStack_108 = bVar4 * __real_3f800000 | !bVar4 * uStack_108;
        uStack_104 = (bVar22 >> 7) * __real_3f800000 | !(bool)(bVar22 >> 7) * uStack_104;
      }
    }
  }
  auVar97._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_300._4_4_;
  auVar97._0_4_ = (uint)(bVar33 & 1) * local_300._0_4_;
  auVar97._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_300._8_4_;
  auVar97._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_300._12_4_;
  auVar97._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_300._16_4_;
  auVar97._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_300._20_4_;
  auVar97._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_300._24_4_;
  auVar97._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_300._28_4_;
  auVar60 = vhaddps_avx(auVar97,auVar97);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar98._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_2e0._4_4_;
  auVar98._0_4_ = (uint)(bVar33 & 1) * local_2e0._0_4_;
  auVar98._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_2e0._8_4_;
  auVar98._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_2e0._12_4_;
  auVar98._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_2e0._16_4_;
  auVar98._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_2e0._20_4_;
  auVar98._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_2e0._24_4_;
  auVar98._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_2e0._28_4_;
  auVar64 = vhaddps_avx(auVar98,auVar98);
  auVar64 = vhaddps_avx(auVar64,auVar64);
  fVar119 = auVar60._0_4_ + auVar60._16_4_;
  auVar99._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_2c0._4_4_;
  auVar99._0_4_ = (uint)(bVar33 & 1) * local_2c0._0_4_;
  auVar99._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_2c0._8_4_;
  auVar99._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_2c0._12_4_;
  auVar99._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_2c0._16_4_;
  auVar99._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_2c0._20_4_;
  auVar99._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_2c0._24_4_;
  auVar99._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_2c0._28_4_;
  auVar60 = vhaddps_avx(auVar99,auVar99);
  fVar121 = auVar64._0_4_ + auVar64._16_4_;
  auVar60 = vhaddps_avx(auVar60,auVar60);
  fVar122 = auVar60._0_4_ + auVar60._16_4_;
  auVar100._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_2a0._4_4_;
  auVar100._0_4_ = (uint)(bVar33 & 1) * local_2a0._0_4_;
  auVar100._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_2a0._8_4_;
  auVar100._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_2a0._12_4_;
  auVar100._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_2a0._16_4_;
  auVar100._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_2a0._20_4_;
  auVar100._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_2a0._24_4_;
  auVar100._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_2a0._28_4_;
  auVar60 = vhaddps_avx(auVar100,auVar100);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar101._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_280._4_4_;
  auVar101._0_4_ = (uint)(bVar33 & 1) * local_280._0_4_;
  auVar101._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * (int)fStack_278;
  auVar101._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * (int)fStack_274;
  auVar101._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * (int)fStack_270;
  auVar101._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * (int)fStack_26c;
  auVar101._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * (int)fStack_268;
  auVar101._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * (int)fStack_264;
  auVar64 = vhaddps_avx(auVar101,auVar101);
  auVar64 = vhaddps_avx(auVar64,auVar64);
  fVar123 = auVar60._0_4_ + auVar60._16_4_;
  auVar102._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_260._4_4_;
  auVar102._0_4_ = (uint)(bVar33 & 1) * local_260._0_4_;
  auVar102._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_260._8_4_;
  auVar102._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_260._12_4_;
  auVar102._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_260._16_4_;
  auVar102._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_260._20_4_;
  auVar102._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_260._24_4_;
  auVar102._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_260._28_4_;
  auVar60 = vhaddps_avx(auVar102,auVar102);
  auVar42 = vextractf32x4_avx512vl(auVar64,1);
  auVar38 = vaddss_avx512f(auVar64._0_16_,auVar42);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar39 = vaddss_avx512f(auVar60._0_16_,auVar60._16_16_);
  auVar103._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_240._4_4_;
  auVar103._0_4_ = (uint)(bVar33 & 1) * local_240._0_4_;
  auVar103._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_240._8_4_;
  auVar103._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_240._12_4_;
  auVar103._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_240._16_4_;
  auVar103._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_240._20_4_;
  auVar103._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_240._24_4_;
  auVar103._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_240._28_4_;
  auVar60 = vhaddps_avx(auVar103,auVar103);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar104._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_220._4_4_;
  auVar104._0_4_ = (uint)(bVar33 & 1) * local_220._0_4_;
  auVar104._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_220._8_4_;
  auVar104._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_220._12_4_;
  auVar104._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_220._16_4_;
  auVar104._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_220._20_4_;
  auVar104._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_220._24_4_;
  auVar104._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_220._28_4_;
  auVar64 = vhaddps_avx(auVar104,auVar104);
  auVar64 = vhaddps_avx(auVar64,auVar64);
  fVar124 = auVar60._0_4_ + auVar60._16_4_;
  auVar105._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_200._4_4_;
  auVar105._0_4_ = (uint)(bVar33 & 1) * local_200._0_4_;
  auVar105._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * (int)fStack_1f8;
  auVar105._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * (int)fStack_1f4;
  auVar105._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * (int)fStack_1f0;
  auVar105._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * (int)fStack_1ec;
  auVar105._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * (int)fStack_1e8;
  auVar105._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * (int)fStack_1e4;
  auVar60 = vhaddps_avx(auVar105,auVar105);
  auVar42 = vextractf32x4_avx512vl(auVar64,1);
  auVar40 = vaddss_avx512f(auVar64._0_16_,auVar42);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar42 = vextractf32x4_avx512vl(auVar60,1);
  auVar41 = vaddss_avx512f(auVar60._0_16_,auVar42);
  auVar106._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_1e0._4_4_;
  auVar106._0_4_ = (uint)(bVar33 & 1) * local_1e0._0_4_;
  auVar106._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * (int)fStack_1d8;
  auVar106._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * (int)fStack_1d4;
  auVar106._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * (int)fStack_1d0;
  auVar106._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * (int)fStack_1cc;
  auVar106._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * (int)fStack_1c8;
  auVar106._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * (int)fStack_1c4;
  auVar60 = vhaddps_avx(auVar106,auVar106);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar42 = vextractf32x4_avx512vl(auVar60,1);
  auVar107._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_1c0._4_4_;
  auVar107._0_4_ = (uint)(bVar33 & 1) * local_1c0._0_4_;
  auVar107._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_1c0._8_4_;
  auVar107._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_1c0._12_4_;
  auVar107._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_1c0._16_4_;
  auVar107._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_1c0._20_4_;
  auVar107._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_1c0._24_4_;
  auVar107._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_1c0._28_4_;
  auVar64 = vhaddps_avx(auVar107,auVar107);
  auVar64 = vhaddps_avx(auVar64,auVar64);
  auVar43 = vaddss_avx512f(auVar60._0_16_,auVar42);
  auVar108._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_1a0._4_4_;
  auVar108._0_4_ = (uint)(bVar33 & 1) * local_1a0._0_4_;
  auVar108._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_1a0._8_4_;
  auVar108._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_1a0._12_4_;
  auVar108._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_1a0._16_4_;
  auVar108._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_1a0._20_4_;
  auVar108._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_1a0._24_4_;
  auVar108._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_1a0._28_4_;
  auVar60 = vhaddps_avx(auVar108,auVar108);
  auVar42 = vextractf32x4_avx512vl(auVar64,1);
  auVar44 = vaddss_avx512f(auVar64._0_16_,auVar42);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar42 = vextractf32x4_avx512vl(auVar60,1);
  auVar45 = vaddss_avx512f(auVar60._0_16_,auVar42);
  auVar109._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_180._4_4_;
  auVar109._0_4_ = (uint)(bVar33 & 1) * local_180._0_4_;
  auVar109._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_180._8_4_;
  auVar109._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_180._12_4_;
  auVar109._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_180._16_4_;
  auVar109._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_180._20_4_;
  auVar109._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_180._24_4_;
  auVar109._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_180._28_4_;
  auVar60 = vhaddps_avx(auVar109,auVar109);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar42 = vextractf32x4_avx512vl(auVar60,1);
  auVar46 = vaddss_avx512f(auVar60._0_16_,auVar42);
  auVar110._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_160._4_4_;
  auVar110._0_4_ = (uint)(bVar33 & 1) * local_160._0_4_;
  auVar110._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_160._8_4_;
  auVar110._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_160._12_4_;
  auVar110._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_160._16_4_;
  auVar110._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_160._20_4_;
  auVar110._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_160._24_4_;
  auVar110._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_160._28_4_;
  auVar60 = vhaddps_avx(auVar110,auVar110);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar42 = vextractf32x4_avx512vl(auVar60,1);
  auVar47 = vaddss_avx512f(auVar60._0_16_,auVar42);
  auVar111._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_140._4_4_;
  auVar111._0_4_ = (uint)(bVar33 & 1) * local_140._0_4_;
  auVar111._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_140._8_4_;
  auVar111._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_140._12_4_;
  auVar111._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_140._16_4_;
  auVar111._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_140._20_4_;
  auVar111._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_140._24_4_;
  auVar111._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_140._28_4_;
  auVar60 = vhaddps_avx(auVar111,auVar111);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar42 = vextractf32x4_avx512vl(auVar60,1);
  auVar48 = vaddss_avx512f(auVar60._0_16_,auVar42);
  auVar112._4_4_ = ((byte)(uVar34 >> 1) & 1) * uStack_11c;
  auVar112._0_4_ = (bVar33 & 1) * local_120;
  auVar112._8_4_ = ((byte)(uVar34 >> 2) & 1) * uStack_118;
  auVar112._12_4_ = ((byte)(uVar34 >> 3) & 1) * uStack_114;
  auVar112._16_4_ = ((byte)(uVar34 >> 4) & 1) * uStack_110;
  auVar112._20_4_ = ((byte)(uVar34 >> 5) & 1) * uStack_10c;
  auVar112._24_4_ = ((byte)(uVar34 >> 6) & 1) * uStack_108;
  auVar112._28_4_ = ((byte)(uVar34 >> 7) & 1) * uStack_104;
  auVar60 = vhaddps_avx(auVar112,auVar112);
  auVar60 = vhaddps_avx(auVar60,auVar60);
  auVar42 = vextractf32x4_avx512vl(auVar60,1);
  auVar49 = vaddss_avx512f(auVar60._0_16_,auVar42);
  auVar42 = vinsertps_avx512f(ZEXT416((uint)fVar122),ZEXT416((uint)fVar123),0x10);
  auVar42 = vinsertps_avx512f(auVar42,ZEXT416((uint)fVar124),0x20);
  auVar35 = vinsertps_avx512f(auVar42,auVar40,0x30);
  auVar42 = vinsertps_avx512f(auVar41,auVar43,0x10);
  auVar42 = vinsertps_avx512f(auVar42,auVar46,0x20);
  auVar36 = vinsertps_avx512f(auVar42,auVar47,0x30);
  auVar42 = vinsertps_avx512f(ZEXT416((uint)fVar119),ZEXT416((uint)fVar122),0x10);
  auVar42 = vinsertps_avx512f(auVar42,auVar41,0x20);
  auVar42 = vinsertps_avx512f(auVar42,auVar44,0x30);
  auVar51 = vinsertps_avx512f(auVar39,auVar40,0x10);
  auVar51 = vinsertps_avx512f(auVar51,auVar47,0x20);
  auVar51 = vinsertps_avx512f(auVar51,auVar49,0x30);
  auVar50 = vinsertps_avx512f(ZEXT416((uint)fVar121),ZEXT416((uint)fVar123),0x10);
  auVar50 = vinsertps_avx512f(auVar50,auVar43,0x20);
  auVar50 = vinsertps_avx512f(auVar50,auVar45,0x30);
  auVar37 = vinsertps_avx512f(auVar38,ZEXT416((uint)fVar124),0x10);
  auVar37 = vinsertps_avx512f(auVar37,auVar46,0x20);
  auVar37 = vinsertps_avx512f(auVar37,auVar48,0x30);
  auVar50 = vmulps_avx512vl(auVar50,auVar37);
  auVar51 = vfmsub231ps_avx512vl(auVar50,auVar42,auVar51);
  auVar50 = vbroadcastss_avx512vl(auVar51);
  auVar37 = vshufps_avx512vl(auVar51,auVar51,0x55);
  auVar52 = vshufps_avx512vl(auVar51,auVar51,0xaa);
  auVar53 = vshufps_avx512vl(auVar51,auVar51,0xff);
  auVar54 = vshufps_avx512vl(auVar49,auVar44,0);
  auVar55 = vshufps_avx512vl(auVar45,auVar48,0);
  auVar42 = vinsertps_avx512f(auVar46,auVar47,0x10);
  auVar42 = vinsertps_avx512f(auVar42,auVar41,0x20);
  auVar42 = vinsertps_avx512f(auVar42,auVar43,0x30);
  auVar56._0_4_ = auVar42._0_4_ * auVar55._0_4_;
  auVar56._4_4_ = auVar42._4_4_ * auVar55._4_4_;
  auVar56._8_4_ = auVar42._8_4_ * auVar55._8_4_;
  auVar56._12_4_ = auVar42._12_4_ * auVar55._12_4_;
  auVar54 = vfmsub231ps_avx512vl(auVar56,auVar36,auVar54);
  auVar55 = vshufps_avx512vl(auVar39,ZEXT416((uint)fVar119),0);
  auVar56 = vshufps_avx512vl(ZEXT416((uint)fVar121),auVar38,0);
  auVar42 = vinsertps_avx512f(ZEXT416((uint)fVar124),auVar40,0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416((uint)fVar122),0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416((uint)fVar123),0x30);
  auVar134._0_4_ = auVar56._0_4_ * auVar42._0_4_;
  auVar134._4_4_ = auVar56._4_4_ * auVar42._4_4_;
  auVar134._8_4_ = auVar56._8_4_ * auVar42._8_4_;
  auVar134._12_4_ = auVar56._12_4_ * auVar42._12_4_;
  auVar55 = vfmsub231ps_avx512vl(auVar134,auVar35,auVar55);
  auVar57._0_4_ = auVar37._0_4_ * auVar52._0_4_;
  auVar57._4_4_ = auVar37._4_4_ * auVar52._4_4_;
  auVar57._8_4_ = auVar37._8_4_ * auVar52._8_4_;
  auVar57._12_4_ = auVar37._12_4_ * auVar52._12_4_;
  auVar42 = vfmadd231ps_avx512vl(auVar57,auVar50,auVar53);
  auVar56 = vshufps_avx512vl(auVar54,auVar54,0xd8);
  auVar56 = vmulps_avx512vl(auVar55,auVar56);
  auVar57 = vshufpd_avx512vl(auVar56,auVar56,1);
  auVar56 = vaddps_avx512vl(auVar56,auVar57);
  auVar57 = vshufps_avx512vl(auVar56,auVar56,0x39);
  auVar57 = vaddps_avx512vl(auVar56,auVar57);
  auVar42 = vsubps_avx(auVar42,auVar57);
  if ((auVar42._0_4_ != 0.0) ||
     (auVar60 = ___ymm_00000000000000003f800000000000000000000000000000000000003f800000,
     auVar64 = ___ymm_3f800000000000000000000000000000000000003f8000000000000000000000,
     NAN(auVar42._0_4_))) {
    auVar57 = vinsertps_avx(ZEXT416((uint)fVar119),ZEXT416((uint)fVar121),0x10);
    auVar57 = vinsertps_avx512f(auVar57,auVar38,0x20);
    auVar13 = vinsertps_avx512f(auVar57,auVar39,0x30);
    auVar134 = vshufps_avx(auVar54,auVar54,0x33);
    auVar57 = vinsertps_avx(ZEXT416((uint)fVar121),ZEXT416((uint)fVar119),0x10);
    auVar39 = vinsertps_avx512f(auVar57,auVar39,0x20);
    auVar38 = vinsertps_avx512f(auVar39,auVar38,0x30);
    auVar39 = vshufps_avx(auVar54,auVar54,0x66);
    auVar128._0_4_ = auVar13._0_4_ * auVar134._0_4_ - auVar38._0_4_ * auVar39._0_4_;
    auVar128._4_4_ = auVar13._4_4_ * auVar134._4_4_ - auVar38._4_4_ * auVar39._4_4_;
    auVar128._8_4_ = auVar13._8_4_ * auVar134._8_4_ - auVar38._8_4_ * auVar39._8_4_;
    auVar128._12_4_ = auVar13._12_4_ * auVar134._12_4_ - auVar38._12_4_ * auVar39._12_4_;
    auVar52 = vfmsub213ps_avx512vl(auVar52,auVar35,auVar128);
    auVar38 = vinsertps_avx512f(auVar44,auVar45,0x10);
    auVar38 = vinsertps_avx(auVar38,auVar48,0x20);
    auVar38 = vinsertps_avx(auVar38,auVar49,0x30);
    auVar57 = vshufps_avx512vl(auVar55,auVar55,0x33);
    auVar44 = vinsertps_avx512f(auVar45,auVar44,0x10);
    auVar44 = vinsertps_avx512f(auVar44,auVar49,0x20);
    auVar44 = vinsertps_avx512f(auVar44,auVar48,0x30);
    auVar45 = vshufps_avx512vl(auVar55,auVar55,0x66);
    auVar44 = vmulps_avx512vl(auVar45,auVar44);
    auVar44 = vfmsub231ps_avx512vl(auVar44,auVar38,auVar57);
    auVar44 = vfmsub213ps_avx512vl(auVar37,auVar36,auVar44);
    auVar48 = vshufps_avx512vl(auVar55,auVar55,0xcc);
    auVar37 = vinsertps_avx512f(auVar43,auVar41,0x10);
    auVar37 = vinsertps_avx512f(auVar37,auVar47,0x20);
    auVar37 = vinsertps_avx512f(auVar37,auVar46,0x30);
    auVar37 = vmulps_avx512vl(auVar45,auVar37);
    auVar36 = vfmadd231ps_avx512vl(auVar37,auVar36,auVar48);
    auVar37 = vfmsub213ps_avx512vl(auVar50,auVar38,auVar36);
    auVar50 = vshufps_avx(auVar54,auVar54,0xcc);
    auVar36 = vinsertps_avx(ZEXT416((uint)fVar123),ZEXT416((uint)fVar122),0x10);
    auVar36 = vinsertps_avx512f(auVar36,auVar40,0x20);
    auVar36 = vinsertps_avx(auVar36,ZEXT416((uint)fVar124),0x30);
    auVar38._0_4_ = auVar36._0_4_ * auVar39._0_4_;
    auVar38._4_4_ = auVar36._4_4_ * auVar39._4_4_;
    auVar38._8_4_ = auVar36._8_4_ * auVar39._8_4_;
    auVar38._12_4_ = auVar36._12_4_ * auVar39._12_4_;
    auVar35 = vfmadd231ps_avx512vl(auVar38,auVar35,auVar50);
    auVar35 = vfmsub231ps_avx512vl(auVar35,auVar53,auVar13);
    auVar42 = vdivps_avx(___xmm_3f800000bf800000bf8000003f800000,auVar42);
    fVar119 = auVar42._0_4_;
    fVar121 = auVar42._4_4_;
    fVar122 = auVar42._8_4_;
    fVar123 = auVar42._12_4_;
    auVar42 = vmulps_avx512vl(auVar37,auVar42);
    auVar60 = vpermt2ps_avx512vl(ZEXT1632(CONCAT412(auVar35._12_4_ * fVar123,
                                                    CONCAT48(auVar35._8_4_ * fVar122,
                                                             CONCAT44(auVar35._4_4_ * fVar121,
                                                                      auVar35._0_4_ * fVar119)))),
                                 ___ymm_000000080000000a0000000000000002000000090000000b0000000100000003
                                 ,ZEXT1632(CONCAT412(auVar44._12_4_ * fVar123,
                                                     CONCAT48(auVar44._8_4_ * fVar122,
                                                              CONCAT44(auVar44._4_4_ * fVar121,
                                                                       auVar44._0_4_ * fVar119)))));
    auVar64 = vpermt2ps_avx512vl(ZEXT1632(CONCAT412(auVar52._12_4_ * fVar123,
                                                    CONCAT48(auVar52._8_4_ * fVar122,
                                                             CONCAT44(auVar52._4_4_ * fVar121,
                                                                      auVar52._0_4_ * fVar119)))),
                                 ___ymm_000000080000000a0000000000000002000000090000000b0000000100000003
                                 ,ZEXT1632(auVar42));
  }
  auVar113._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_3e0._4_4_;
  auVar113._0_4_ = (uint)(bVar33 & 1) * local_3e0._0_4_;
  auVar113._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_3e0._8_4_;
  auVar113._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_3e0._12_4_;
  auVar113._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_3e0._16_4_;
  auVar113._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_3e0._20_4_;
  auVar113._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_3e0._24_4_;
  auVar113._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_3e0._28_4_;
  auVar58 = vhaddps_avx(auVar113,auVar113);
  auVar58 = vhaddps_avx(auVar58,auVar58);
  auVar114._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_400._4_4_;
  auVar114._0_4_ = (uint)(bVar33 & 1) * local_400._0_4_;
  auVar114._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_400._8_4_;
  auVar114._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_400._12_4_;
  auVar114._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_400._16_4_;
  auVar114._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_400._20_4_;
  auVar114._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_400._24_4_;
  auVar114._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_400._28_4_;
  auVar115._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * local_420._4_4_;
  auVar115._0_4_ = (uint)(bVar33 & 1) * local_420._0_4_;
  auVar115._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * local_420._8_4_;
  auVar115._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * local_420._12_4_;
  auVar115._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * local_420._16_4_;
  auVar115._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * local_420._20_4_;
  auVar115._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * local_420._24_4_;
  auVar115._28_4_ = (uint)((byte)(uVar34 >> 7) & 1) * local_420._28_4_;
  auVar59 = vhaddps_avx(auVar114,auVar114);
  fVar119 = auVar58._0_4_ + auVar58._16_4_;
  auVar58 = vhaddps_avx(auVar59,auVar59);
  fVar121 = auVar58._0_4_ + auVar58._16_4_;
  auVar58 = vhaddps_avx(auVar115,auVar115);
  auVar58 = vhaddps_avx(auVar58,auVar58);
  fVar122 = auVar58._0_4_ + auVar58._16_4_;
  auVar37._0_4_ =
       auVar64._16_4_ * 0.0 + auVar64._0_4_ * fVar119 +
       fVar121 * auVar60._16_4_ + auVar60._0_4_ * fVar122;
  auVar37._4_4_ =
       auVar64._20_4_ * 0.0 + auVar64._4_4_ * fVar119 +
       fVar121 * auVar60._20_4_ + auVar60._4_4_ * fVar122;
  auVar37._8_4_ =
       auVar64._24_4_ * 0.0 + auVar64._8_4_ * fVar119 +
       fVar121 * auVar60._24_4_ + auVar60._8_4_ * fVar122;
  auVar37._12_4_ =
       auVar64._28_4_ * 0.0 + auVar64._12_4_ * fVar119 +
       fVar121 * auVar60._28_4_ + auVar60._12_4_ * fVar122;
  auVar42 = vmovshdup_avx(auVar37);
  auVar35 = vshufpd_avx(auVar37,auVar37,1);
  auVar36 = vmovshdup_avx512vl(auVar51);
  auVar50 = vshufpd_avx512vl(auVar51,auVar51,1);
  auVar36 = vfmadd213ss_avx512f(auVar53,auVar51,ZEXT416((uint)(auVar36._0_4_ * auVar50._0_4_)));
  auVar51 = vmovshdup_avx512vl(auVar56);
  auVar51 = vaddss_avx512f(auVar56,auVar51);
  auVar36 = vsubss_avx512f(auVar36,auVar51);
  bVar4 = __real_322bcc77 <= auVar36._0_4_;
  bVar32 = (~(uint)auVar36._0_4_ & 0x7f800000) != 0;
  *param_3 = (uint)(bVar32 && bVar4) * (int)auVar37._0_4_;
  param_3[1] = (uint)(bVar32 && bVar4) * auVar42._0_4_;
  param_3[2] = (uint)(bVar32 && bVar4) * auVar35._0_4_;
  return;
}

// UpdatePositionBasedState_avx512skx @ 140370300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdatePositionBasedState_avx512skx
               (float *param_1,undefined4 *param_2,int *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,uint param_8,int param_9)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [32];
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  byte bVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [32];
  int iVar28;
  undefined1 (*pauVar29) [32];
  ulonglong uVar30;
  uint uVar31;
  int iVar32;
  bool bVar33;
  byte bVar34;
  undefined1 auVar35 [16];
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
  int iVar93;
  int iVar94;
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
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar41 [16];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar95 [32];
  float fVar96;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar97 [32];
  float fVar104;
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [64];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined4 auStack_440 [4];
  longlong local_430;
  int *local_428;
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [32];
  undefined1 local_3a0 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [8];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [8];
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 local_1e0 [8];
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  
  auVar41 = in_ZMM19._0_16_;
  auVar53 = in_ZMM20._0_16_;
  auVar60 = in_ZMM16._0_16_;
  puVar2 = local_3c0 + 8;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_430 = param_4;
  auVar35._0_12_ = ZEXT812(0);
  auVar35._12_4_ = 0;
  auVar109 = ZEXT1664(auVar35);
  auVar63 = ZEXT1632(auVar35);
  local_320 = ZEXT1632(auVar35);
  local_340 = ZEXT1632(auVar35);
  local_360 = ZEXT1632(auVar35);
  uVar24 = param_9 - param_8;
  uVar31 = uVar24 + 7;
  if (-1 < (int)uVar24) {
    uVar31 = uVar24;
  }
  iVar32 = ((uVar31 & 0xfffffff8) - uVar24) + param_9;
  local_3c0 = local_360;
  local_3a0 = local_360;
  local_380 = local_360;
  lVar26 = (longlong)iVar32;
  uVar30 = (ulonglong)param_8;
  if ((int)param_8 < iVar32) {
    local_428 = param_3;
    uVar30 = (ulonglong)(int)param_8;
    pauVar27 = (undefined1 (*) [32])(param_5 + uVar30 * 0xc);
    pauVar29 = (undefined1 (*) [32])(uVar30 * 0xc + param_4);
    iVar28 = param_8 * 4;
    auVar60 = __ymm_000000580000004c0000004000000034000000280000001c0000001000000004._0_16_;
    do {
      auVar63 = *(undefined1 (*) [32])(param_7 + iVar28);
      uVar11 = vcmpps_avx512vl(auVar63,ZEXT1232(ZEXT812(0)),8);
      bVar34 = (byte)uVar11;
      if (bVar34 != 0xff) {
        uVar12 = vcmpps_avx512vl(auVar63,ZEXT1232(ZEXT812(0)),0xc);
        bVar23 = (byte)uVar12;
        if (bVar34 == 0) {
          auVar63 = pauVar29[1];
          auVar65 = vblendps_avx(auVar63,*pauVar29,0x24);
          auVar61 = vpermt2ps_avx512vl(*pauVar29,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar63);
          auVar62 = vpermt2ps_avx512vl(auVar65,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar29[2]);
          auVar63 = vpermt2ps_avx512vl(pauVar29[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar63);
          auVar64 = vinsertf32x4_avx512vl(auVar61,auVar63._0_16_,1);
          auVar65 = vshuff64x2_avx512vl(auVar61,auVar63,3);
          auVar63 = pauVar27[1];
          auVar61 = vblendps_avx(auVar63,*pauVar27,0x24);
          auVar66 = vpermt2ps_avx512vl(*pauVar27,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar63);
          auVar67 = vpermt2ps_avx512vl(auVar61,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar27[2]);
          auVar63 = vpermt2ps_avx512vl(pauVar27[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar63);
          auVar61 = vinsertf32x4_avx512vl(auVar66,auVar63._0_16_,1);
          auVar66 = vshuff64x2_avx512vl(auVar66,auVar63,3);
        }
        else {
          auVar41 = vxorps_avx512vl(auVar63._0_16_,auVar63._0_16_);
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar29 + lVar26));
          auVar64._0_4_ =
               (uint)(bVar23 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar41._0_4_;
          bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
          auVar64._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)((byte)(uVar12 >> 2) & 1);
          auVar64._8_4_ = (uint)bVar4 * auVar63._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)((byte)(uVar12 >> 3) & 1);
          auVar64._12_4_ = (uint)bVar4 * auVar63._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar64._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * auVar63._16_4_;
          auVar64._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * auVar63._20_4_;
          auVar64._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * auVar63._24_4_;
          auVar64._28_4_ = (uint)(byte)(uVar12 >> 7) * auVar63._28_4_;
          auVar41 = vxorps_avx512vl(in_ZMM19._0_16_,in_ZMM19._0_16_);
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar29 + uVar11));
          auVar65._0_4_ =
               (uint)(bVar23 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar41._0_4_;
          bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
          auVar65._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)((byte)(uVar12 >> 2) & 1);
          auVar65._8_4_ = (uint)bVar4 * auVar63._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)((byte)(uVar12 >> 3) & 1);
          auVar65._12_4_ = (uint)bVar4 * auVar63._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar65._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * auVar63._16_4_;
          auVar65._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * auVar63._20_4_;
          auVar65._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * auVar63._24_4_;
          auVar65._28_4_ = (uint)(byte)(uVar12 >> 7) * auVar63._28_4_;
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar29 + (longlong)param_1));
          auVar62._4_4_ = (uint)((byte)(uVar12 >> 1) & 1) * auVar63._4_4_;
          auVar62._0_4_ = (uint)(bVar23 & 1) * auVar63._0_4_;
          auVar62._8_4_ = (uint)((byte)(uVar12 >> 2) & 1) * auVar63._8_4_;
          auVar62._12_4_ = (uint)((byte)(uVar12 >> 3) & 1) * auVar63._12_4_;
          auVar62._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * auVar63._16_4_;
          auVar62._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * auVar63._20_4_;
          auVar62._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * auVar63._24_4_;
          auVar62._28_4_ = (uint)(byte)(uVar12 >> 7) * auVar63._28_4_;
          auVar41 = vxorps_avx512vl(in_ZMM20._0_16_,in_ZMM20._0_16_);
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + lVar26));
          auVar61._0_4_ =
               (uint)(bVar23 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar41._0_4_;
          bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
          auVar61._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)((byte)(uVar12 >> 2) & 1);
          auVar61._8_4_ = (uint)bVar4 * auVar63._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)((byte)(uVar12 >> 3) & 1);
          auVar61._12_4_ = (uint)bVar4 * auVar63._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar61._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * auVar63._16_4_;
          auVar61._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * auVar63._20_4_;
          auVar61._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * auVar63._24_4_;
          auVar61._28_4_ = (uint)(byte)(uVar12 >> 7) * auVar63._28_4_;
          auVar41 = vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)((longlong)auStack_440 + (longlong)*pauVar27)
                                       );
          auVar66._0_4_ =
               (uint)(bVar23 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar41._0_4_;
          bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
          auVar66._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)((byte)(uVar12 >> 2) & 1);
          auVar66._8_4_ = (uint)bVar4 * auVar63._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)((byte)(uVar12 >> 3) & 1);
          auVar66._12_4_ = (uint)bVar4 * auVar63._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar66._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * auVar63._16_4_;
          auVar66._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * auVar63._20_4_;
          auVar66._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * auVar63._24_4_;
          auVar66._28_4_ = (uint)(byte)(uVar12 >> 7) * auVar63._28_4_;
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + (longlong)param_1));
          auVar67._4_4_ = (uint)((byte)(uVar12 >> 1) & 1) * auVar63._4_4_;
          auVar67._0_4_ = (uint)(bVar23 & 1) * auVar63._0_4_;
          auVar67._8_4_ = (uint)((byte)(uVar12 >> 2) & 1) * auVar63._8_4_;
          auVar67._12_4_ = (uint)((byte)(uVar12 >> 3) & 1) * auVar63._12_4_;
          auVar67._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * auVar63._16_4_;
          auVar67._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * auVar63._20_4_;
          auVar67._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * auVar63._24_4_;
          auVar67._28_4_ = (uint)(byte)(uVar12 >> 7) * auVar63._28_4_;
        }
        piVar1 = (int *)(param_6 + iVar28);
        auVar63._4_4_ = (uint)((byte)(uVar12 >> 1) & 1) * piVar1[1];
        auVar63._0_4_ = (uint)(bVar23 & 1) * *piVar1;
        auVar63._8_4_ = (uint)((byte)(uVar12 >> 2) & 1) * piVar1[2];
        auVar63._12_4_ = (uint)((byte)(uVar12 >> 3) & 1) * piVar1[3];
        auVar63._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * piVar1[4];
        auVar63._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * piVar1[5];
        auVar63._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * piVar1[6];
        auVar63._28_4_ = (uint)(byte)(uVar12 >> 7) * piVar1[7];
        auVar64 = vfmadd213ps_avx512vl(auVar64,auVar63,local_360);
        auVar65 = vfmadd213ps_avx512vl(auVar65,auVar63,local_340);
        in_ZMM19 = ZEXT3264(auVar65);
        auVar62 = vfmadd213ps_avx512vl(auVar62,auVar63,local_320);
        bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar12 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar12 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar12 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar12 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar12 >> 6) & 1);
        bVar9 = SUB81(uVar12 >> 7,0);
        local_360._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_360._4_4_;
        local_360._0_4_ =
             (uint)(bVar23 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar23 & 1) * local_360._0_4_;
        local_360._8_4_ = (uint)bVar33 * auVar64._8_4_ | (uint)!bVar33 * local_360._8_4_;
        local_360._12_4_ = (uint)bVar5 * auVar64._12_4_ | (uint)!bVar5 * local_360._12_4_;
        local_360._16_4_ = (uint)bVar6 * auVar64._16_4_ | (uint)!bVar6 * local_360._16_4_;
        local_360._20_4_ = (uint)bVar7 * auVar64._20_4_ | (uint)!bVar7 * local_360._20_4_;
        local_360._24_4_ = (uint)bVar8 * auVar64._24_4_ | (uint)!bVar8 * local_360._24_4_;
        local_360._28_4_ = (uint)bVar9 * auVar64._28_4_ | (uint)!bVar9 * local_360._28_4_;
        bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar12 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar12 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar12 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar12 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar12 >> 6) & 1);
        bVar9 = SUB81(uVar12 >> 7,0);
        local_340._4_4_ = (uint)bVar4 * auVar65._4_4_ | (uint)!bVar4 * local_340._4_4_;
        local_340._0_4_ =
             (uint)(bVar23 & 1) * auVar65._0_4_ | (uint)!(bool)(bVar23 & 1) * local_340._0_4_;
        local_340._8_4_ = (uint)bVar33 * auVar65._8_4_ | (uint)!bVar33 * local_340._8_4_;
        local_340._12_4_ = (uint)bVar5 * auVar65._12_4_ | (uint)!bVar5 * local_340._12_4_;
        local_340._16_4_ = (uint)bVar6 * auVar65._16_4_ | (uint)!bVar6 * local_340._16_4_;
        local_340._20_4_ = (uint)bVar7 * auVar65._20_4_ | (uint)!bVar7 * local_340._20_4_;
        local_340._24_4_ = (uint)bVar8 * auVar65._24_4_ | (uint)!bVar8 * local_340._24_4_;
        local_340._28_4_ = (uint)bVar9 * auVar65._28_4_ | (uint)!bVar9 * local_340._28_4_;
        bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar12 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar12 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar12 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar12 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar12 >> 6) & 1);
        bVar9 = SUB81(uVar12 >> 7,0);
        local_320._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_320._4_4_;
        local_320._0_4_ =
             (uint)(bVar23 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar23 & 1) * local_320._0_4_;
        local_320._8_4_ = (uint)bVar33 * auVar62._8_4_ | (uint)!bVar33 * local_320._8_4_;
        local_320._12_4_ = (uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * local_320._12_4_;
        local_320._16_4_ = (uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * local_320._16_4_;
        local_320._20_4_ = (uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * local_320._20_4_;
        local_320._24_4_ = (uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * local_320._24_4_;
        local_320._28_4_ = (uint)bVar9 * auVar62._28_4_ | (uint)!bVar9 * local_320._28_4_;
        auVar65 = vfmadd213ps_avx512vl(auVar61,auVar63,local_3c0);
        in_ZMM20 = ZEXT3264(auVar65);
        auVar64 = vfmadd213ps_avx512vl(auVar66,auVar63,local_3a0);
        in_ZMM21 = ZEXT3264(auVar64);
        auVar61 = vfmadd213ps_avx512vl(auVar67,auVar63,local_380);
        bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar12 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar12 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar12 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar12 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar12 >> 6) & 1);
        bVar9 = SUB81(uVar12 >> 7,0);
        local_3c0._4_4_ = (uint)bVar4 * auVar65._4_4_ | (uint)!bVar4 * local_3c0._4_4_;
        local_3c0._0_4_ =
             (uint)(bVar23 & 1) * auVar65._0_4_ | (uint)!(bool)(bVar23 & 1) * local_3c0._0_4_;
        local_3c0._8_4_ = (uint)bVar33 * auVar65._8_4_ | (uint)!bVar33 * local_3c0._8_4_;
        local_3c0._12_4_ = (uint)bVar5 * auVar65._12_4_ | (uint)!bVar5 * local_3c0._12_4_;
        local_3c0._16_4_ = (uint)bVar6 * auVar65._16_4_ | (uint)!bVar6 * local_3c0._16_4_;
        local_3c0._20_4_ = (uint)bVar7 * auVar65._20_4_ | (uint)!bVar7 * local_3c0._20_4_;
        local_3c0._24_4_ = (uint)bVar8 * auVar65._24_4_ | (uint)!bVar8 * local_3c0._24_4_;
        local_3c0._28_4_ = (uint)bVar9 * auVar65._28_4_ | (uint)!bVar9 * local_3c0._28_4_;
        bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar12 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar12 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar12 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar12 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar12 >> 6) & 1);
        bVar9 = SUB81(uVar12 >> 7,0);
        local_3a0._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_3a0._4_4_;
        local_3a0._0_4_ =
             (uint)(bVar23 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar23 & 1) * local_3a0._0_4_;
        local_3a0._8_4_ = (uint)bVar33 * auVar64._8_4_ | (uint)!bVar33 * local_3a0._8_4_;
        local_3a0._12_4_ = (uint)bVar5 * auVar64._12_4_ | (uint)!bVar5 * local_3a0._12_4_;
        local_3a0._16_4_ = (uint)bVar6 * auVar64._16_4_ | (uint)!bVar6 * local_3a0._16_4_;
        local_3a0._20_4_ = (uint)bVar7 * auVar64._20_4_ | (uint)!bVar7 * local_3a0._20_4_;
        local_3a0._24_4_ = (uint)bVar8 * auVar64._24_4_ | (uint)!bVar8 * local_3a0._24_4_;
        local_3a0._28_4_ = (uint)bVar9 * auVar64._28_4_ | (uint)!bVar9 * local_3a0._28_4_;
        bVar4 = (bool)((byte)(uVar12 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar12 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar12 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar12 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar12 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar12 >> 6) & 1);
        bVar9 = SUB81(uVar12 >> 7,0);
        local_380._4_4_ = (uint)bVar4 * auVar61._4_4_ | (uint)!bVar4 * local_380._4_4_;
        local_380._0_4_ =
             (uint)(bVar23 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar23 & 1) * local_380._0_4_;
        local_380._8_4_ = (uint)bVar33 * auVar61._8_4_ | (uint)!bVar33 * local_380._8_4_;
        local_380._12_4_ = (uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * local_380._12_4_;
        local_380._16_4_ = (uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * local_380._16_4_;
        local_380._20_4_ = (uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * local_380._20_4_;
        local_380._24_4_ = (uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * local_380._24_4_;
        local_380._28_4_ = (uint)bVar9 * auVar61._28_4_ | (uint)!bVar9 * local_380._28_4_;
        auVar63 = vaddps_avx512vl(auVar109._0_32_,auVar63);
        bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar11 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar11 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar11 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar11 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar11 >> 6) & 1);
        bVar9 = SUB81(uVar11 >> 7,0);
        auVar109 = ZEXT3264(CONCAT428((uint)bVar9 * auVar109._28_4_ | (uint)!bVar9 * auVar63._28_4_,
                                      CONCAT424((uint)bVar8 * auVar109._24_4_ |
                                                (uint)!bVar8 * auVar63._24_4_,
                                                CONCAT420((uint)bVar7 * auVar109._20_4_ |
                                                          (uint)!bVar7 * auVar63._20_4_,
                                                          CONCAT416((uint)bVar6 * auVar109._16_4_ |
                                                                    (uint)!bVar6 * auVar63._16_4_,
                                                                    CONCAT412((uint)bVar5 *
                                                                              auVar109._12_4_ |
                                                                              (uint)!bVar5 *
                                                                              auVar63._12_4_,
                                                                              CONCAT48((uint)bVar33
                                                                                       * auVar109.
                                                  _8_4_ | (uint)!bVar33 * auVar63._8_4_,
                                                  CONCAT44((uint)bVar4 * auVar109._4_4_ |
                                                           (uint)!bVar4 * auVar63._4_4_,
                                                           (uint)(bVar34 & 1) * auVar109._0_4_ |
                                                           (uint)!(bool)(bVar34 & 1) * auVar63._0_4_
                                                          ))))))));
      }
      auVar41 = in_ZMM19._0_16_;
      auVar53 = in_ZMM20._0_16_;
      auVar63 = auVar109._0_32_;
      uVar30 = uVar30 + 8;
      pauVar27 = pauVar27 + 3;
      pauVar29 = pauVar29 + 3;
      iVar28 = iVar28 + 0x20;
    } while ((longlong)uVar30 < lVar26);
  }
  auVar65 = vpbroadcastd_avx512vl();
  iVar28 = (int)uVar30;
  auVar75 = auVar63;
  if (iVar28 < param_9) {
    auVar64 = vpbroadcastd_avx512vl();
    auVar76._0_4_ =
         auVar64._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar76._4_4_ = auVar64._4_4_ + _UNK_150b50ae4;
    auVar76._8_4_ = auVar64._8_4_ + _UNK_150b50ae8;
    auVar76._12_4_ = auVar64._12_4_ + _UNK_150b50aec;
    auVar76._16_4_ = auVar64._16_4_ + _UNK_150b50af0;
    auVar76._20_4_ = auVar64._20_4_ + _UNK_150b50af4;
    auVar76._24_4_ = auVar64._24_4_ + _UNK_150b50af8;
    auVar76._28_4_ = auVar64._28_4_ + _UNK_150b50afc;
    uVar15 = vpcmpd_avx512vl(auVar76,auVar65,5);
    uVar30 = vpcmpgtd_avx512vl(auVar65,auVar76);
    piVar1 = (int *)(param_7 + iVar28 * 4);
    bVar34 = (byte)uVar30;
    auVar77._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * piVar1[1];
    auVar77._0_4_ = (uint)(bVar34 & 1) * *piVar1;
    auVar77._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * piVar1[2];
    auVar77._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * piVar1[3];
    auVar77._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * piVar1[4];
    auVar77._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * piVar1[5];
    auVar77._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * piVar1[6];
    auVar77._28_4_ = (uint)(byte)(uVar30 >> 7) * piVar1[7];
    uVar13 = vcmpps_avx512vl(auVar77,ZEXT1232(ZEXT812(0)),8);
    if ((byte)((byte)uVar13 | (byte)uVar15) != 0xff) {
      uVar13 = vcmpps_avx512vl(auVar77,ZEXT1232(ZEXT812(0)),8);
      bVar23 = bVar34 & (byte)uVar13;
      if (bVar23 != bVar34) {
        bVar23 = bVar23 ^ bVar34;
        lVar25 = (longlong)iVar28;
        pauVar27 = (undefined1 (*) [32])(param_4 + lVar25 * 0xc);
        if (bVar23 == 0xff) {
          auVar64 = pauVar27[1];
          auVar61 = vblendps_avx(auVar64,*pauVar27,0x24);
          auVar62 = vpermt2ps_avx512vl(*pauVar27,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar64);
          auVar41 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
          auVar69 = vpermt2ps_avx512vl(auVar61,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar27[2]);
          auVar64 = vpermt2ps_avx512vl(pauVar27[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar64);
          auVar68._16_16_ = auVar64._0_16_;
          auVar68._0_16_ = auVar62._0_16_;
          auVar78 = vperm2f128_avx(auVar62,auVar64,0x31);
          auVar64 = *(undefined1 (*) [32])(param_5 + lVar25 * 0xc);
          auVar61 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar25 * 0xc);
          auVar62 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar25 * 0xc);
          auVar53 = auVar62._0_16_;
          auVar66 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar64,auVar61);
          auVar67 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar62,auVar61);
          auVar70 = vinsertf32x4_avx512vl(auVar66,auVar67._0_16_,1);
          auVar71 = vshuff64x2_avx512vl(auVar66,auVar67,3);
          auVar64 = vblendps_avx(auVar61,auVar64,0x24);
          auVar72 = vpermt2ps_avx512vl(auVar64,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,auVar62);
        }
        else {
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + (longlong)param_1));
          auVar68._4_4_ = (uint)(bVar23 >> 1 & 1) * auVar64._4_4_;
          auVar68._0_4_ = (uint)(bVar23 & 1) * auVar64._0_4_;
          auVar68._8_4_ = (uint)(bVar23 >> 2 & 1) * auVar64._8_4_;
          auVar68._12_4_ = (uint)(bVar23 >> 3 & 1) * auVar64._12_4_;
          auVar68._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar64._16_4_;
          auVar68._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar64._20_4_;
          auVar68._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar64._24_4_;
          auVar68._28_4_ = (uint)(bVar23 >> 7) * auVar64._28_4_;
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + (longlong)param_2));
          auVar78._4_4_ = (uint)(bVar23 >> 1 & 1) * auVar64._4_4_;
          auVar78._0_4_ = (uint)(bVar23 & 1) * auVar64._0_4_;
          auVar78._8_4_ = (uint)(bVar23 >> 2 & 1) * auVar64._8_4_;
          auVar78._12_4_ = (uint)(bVar23 >> 3 & 1) * auVar64._12_4_;
          auVar78._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar64._16_4_;
          auVar78._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar64._20_4_;
          auVar78._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar64._24_4_;
          auVar78._28_4_ = (uint)(bVar23 >> 7) * auVar64._28_4_;
          auVar41 = __ymm_0000005c0000005000000044000000380000002c000000200000001400000008._0_16_;
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + lVar26));
          auVar69._4_4_ = (uint)(bVar23 >> 1 & 1) * auVar64._4_4_;
          auVar69._0_4_ = (uint)(bVar23 & 1) * auVar64._0_4_;
          auVar69._8_4_ = (uint)(bVar23 >> 2 & 1) * auVar64._8_4_;
          auVar69._12_4_ = (uint)(bVar23 >> 3 & 1) * auVar64._12_4_;
          auVar69._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar64._16_4_;
          auVar69._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar64._20_4_;
          auVar69._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar64._24_4_;
          auVar69._28_4_ = (uint)(bVar23 >> 7) * auVar64._28_4_;
          lVar25 = param_5 + lVar25 * 0xc;
          auVar35 = vxorps_avx512vl(auVar60,auVar60);
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(lVar25 + (longlong)param_1));
          auVar70._0_4_ =
               (uint)(bVar23 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar35._0_4_;
          bVar4 = (bool)(bVar23 >> 1 & 1);
          auVar70._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar35._4_4_;
          bVar4 = (bool)(bVar23 >> 2 & 1);
          auVar70._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * auVar35._8_4_;
          bVar4 = (bool)(bVar23 >> 3 & 1);
          auVar70._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * auVar35._12_4_;
          auVar70._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar64._16_4_;
          auVar70._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar64._20_4_;
          auVar70._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar64._24_4_;
          auVar70._28_4_ = (uint)(bVar23 >> 7) * auVar64._28_4_;
          auVar35 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                    ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                            ._0_16_);
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(lVar25 + (longlong)param_2));
          auVar71._0_4_ =
               (uint)(bVar23 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar35._0_4_;
          bVar4 = (bool)(bVar23 >> 1 & 1);
          auVar71._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar35._4_4_;
          bVar4 = (bool)(bVar23 >> 2 & 1);
          auVar71._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * auVar35._8_4_;
          bVar4 = (bool)(bVar23 >> 3 & 1);
          auVar71._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * auVar35._12_4_;
          auVar71._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar64._16_4_;
          auVar71._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar64._20_4_;
          auVar71._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar64._24_4_;
          auVar71._28_4_ = (uint)(bVar23 >> 7) * auVar64._28_4_;
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(lVar25 + lVar26));
          auVar72._4_4_ = (uint)(bVar23 >> 1 & 1) * auVar64._4_4_;
          auVar72._0_4_ = (uint)(bVar23 & 1) * auVar64._0_4_;
          auVar72._8_4_ = (uint)(bVar23 >> 2 & 1) * auVar64._8_4_;
          auVar72._12_4_ = (uint)(bVar23 >> 3 & 1) * auVar64._12_4_;
          auVar72._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar64._16_4_;
          auVar72._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar64._20_4_;
          auVar72._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar64._24_4_;
          auVar72._28_4_ = (uint)(bVar23 >> 7) * auVar64._28_4_;
        }
        piVar1 = (int *)(param_6 + iVar28 * 4);
        auVar73._4_4_ = (uint)(bVar23 >> 1 & 1) * piVar1[1];
        auVar73._0_4_ = (uint)(bVar23 & 1) * *piVar1;
        auVar73._8_4_ = (uint)(bVar23 >> 2 & 1) * piVar1[2];
        auVar73._12_4_ = (uint)(bVar23 >> 3 & 1) * piVar1[3];
        auVar73._16_4_ = (uint)(bVar23 >> 4 & 1) * piVar1[4];
        auVar73._20_4_ = (uint)(bVar23 >> 5 & 1) * piVar1[5];
        auVar73._24_4_ = (uint)(bVar23 >> 6 & 1) * piVar1[6];
        auVar73._28_4_ = (uint)(bVar23 >> 7) * piVar1[7];
        auVar64 = vfmadd213ps_avx512vl(auVar68,auVar73,local_360);
        auVar61 = vfmadd213ps_avx512vl(auVar78,auVar73,local_340);
        auVar62 = vfmadd213ps_avx512vl(auVar69,auVar73,local_320);
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_360._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_360._4_4_;
        local_360._0_4_ =
             (uint)(bVar23 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar23 & 1) * local_360._0_4_;
        local_360._8_4_ = (uint)bVar33 * auVar64._8_4_ | (uint)!bVar33 * local_360._8_4_;
        local_360._12_4_ = (uint)bVar5 * auVar64._12_4_ | (uint)!bVar5 * local_360._12_4_;
        local_360._16_4_ = (uint)bVar6 * auVar64._16_4_ | (uint)!bVar6 * local_360._16_4_;
        local_360._20_4_ = (uint)bVar7 * auVar64._20_4_ | (uint)!bVar7 * local_360._20_4_;
        local_360._24_4_ = (uint)bVar8 * auVar64._24_4_ | (uint)!bVar8 * local_360._24_4_;
        local_360._28_4_ =
             (uint)(bVar23 >> 7) * auVar64._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_360._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_340._4_4_ = (uint)bVar4 * auVar61._4_4_ | (uint)!bVar4 * local_340._4_4_;
        local_340._0_4_ =
             (uint)(bVar23 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar23 & 1) * local_340._0_4_;
        local_340._8_4_ = (uint)bVar33 * auVar61._8_4_ | (uint)!bVar33 * local_340._8_4_;
        local_340._12_4_ = (uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * local_340._12_4_;
        local_340._16_4_ = (uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * local_340._16_4_;
        local_340._20_4_ = (uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * local_340._20_4_;
        local_340._24_4_ = (uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * local_340._24_4_;
        local_340._28_4_ =
             (uint)(bVar23 >> 7) * auVar61._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_340._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_320._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_320._4_4_;
        local_320._0_4_ =
             (uint)(bVar23 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar23 & 1) * local_320._0_4_;
        local_320._8_4_ = (uint)bVar33 * auVar62._8_4_ | (uint)!bVar33 * local_320._8_4_;
        local_320._12_4_ = (uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * local_320._12_4_;
        local_320._16_4_ = (uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * local_320._16_4_;
        local_320._20_4_ = (uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * local_320._20_4_;
        local_320._24_4_ = (uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * local_320._24_4_;
        local_320._28_4_ =
             (uint)(bVar23 >> 7) * auVar62._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_320._28_4_;
        auVar64 = vfmadd213ps_avx512vl(auVar70,auVar73,local_3c0);
        auVar61 = vfmadd213ps_avx512vl(auVar71,auVar73,local_3a0);
        auVar62 = vfmadd213ps_avx512vl(auVar72,auVar73,local_380);
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_3c0._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_3c0._4_4_;
        local_3c0._0_4_ =
             (uint)(bVar23 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar23 & 1) * local_3c0._0_4_;
        local_3c0._8_4_ = (uint)bVar33 * auVar64._8_4_ | (uint)!bVar33 * local_3c0._8_4_;
        local_3c0._12_4_ = (uint)bVar5 * auVar64._12_4_ | (uint)!bVar5 * local_3c0._12_4_;
        local_3c0._16_4_ = (uint)bVar6 * auVar64._16_4_ | (uint)!bVar6 * local_3c0._16_4_;
        local_3c0._20_4_ = (uint)bVar7 * auVar64._20_4_ | (uint)!bVar7 * local_3c0._20_4_;
        local_3c0._24_4_ = (uint)bVar8 * auVar64._24_4_ | (uint)!bVar8 * local_3c0._24_4_;
        local_3c0._28_4_ =
             (uint)(bVar23 >> 7) * auVar64._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_3c0._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_3a0._4_4_ = (uint)bVar4 * auVar61._4_4_ | (uint)!bVar4 * local_3a0._4_4_;
        local_3a0._0_4_ =
             (uint)(bVar23 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar23 & 1) * local_3a0._0_4_;
        local_3a0._8_4_ = (uint)bVar33 * auVar61._8_4_ | (uint)!bVar33 * local_3a0._8_4_;
        local_3a0._12_4_ = (uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * local_3a0._12_4_;
        local_3a0._16_4_ = (uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * local_3a0._16_4_;
        local_3a0._20_4_ = (uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * local_3a0._20_4_;
        local_3a0._24_4_ = (uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * local_3a0._24_4_;
        local_3a0._28_4_ =
             (uint)(bVar23 >> 7) * auVar61._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_3a0._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_380._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_380._4_4_;
        local_380._0_4_ =
             (uint)(bVar23 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar23 & 1) * local_380._0_4_;
        local_380._8_4_ = (uint)bVar33 * auVar62._8_4_ | (uint)!bVar33 * local_380._8_4_;
        local_380._12_4_ = (uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * local_380._12_4_;
        local_380._16_4_ = (uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * local_380._16_4_;
        local_380._20_4_ = (uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * local_380._20_4_;
        local_380._24_4_ = (uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * local_380._24_4_;
        local_380._28_4_ =
             (uint)(bVar23 >> 7) * auVar62._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_380._28_4_;
        auVar64 = vaddps_avx512vl(auVar63,auVar73);
        auVar75._0_4_ =
             (uint)(bVar23 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar63._0_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        auVar75._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar63._4_4_;
        bVar4 = (bool)(bVar23 >> 2 & 1);
        auVar75._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * auVar63._8_4_;
        bVar4 = (bool)(bVar23 >> 3 & 1);
        auVar75._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * auVar63._12_4_;
        bVar4 = (bool)(bVar23 >> 4 & 1);
        auVar75._16_4_ = (uint)bVar4 * auVar64._16_4_ | (uint)!bVar4 * auVar63._16_4_;
        bVar4 = (bool)(bVar23 >> 5 & 1);
        auVar75._20_4_ = (uint)bVar4 * auVar64._20_4_ | (uint)!bVar4 * auVar63._20_4_;
        bVar4 = (bool)(bVar23 >> 6 & 1);
        auVar75._24_4_ = (uint)bVar4 * auVar64._24_4_ | (uint)!bVar4 * auVar63._24_4_;
        auVar75._28_4_ =
             (uint)(bVar23 >> 7) * auVar64._28_4_ | (uint)!(bool)(bVar23 >> 7) * auVar63._28_4_;
      }
    }
  }
  auVar63 = vhaddps_avx(local_360,local_360);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar64 = vhaddps_avx(local_340,local_340);
  fVar96 = auVar63._0_4_ + auVar63._16_4_;
  auVar35 = ZEXT416((uint)fVar96);
  auVar63 = vhaddps_avx(auVar64,auVar64);
  fVar98 = auVar63._0_4_ + auVar63._16_4_;
  auVar60 = ZEXT416((uint)fVar98);
  auVar63 = vhaddps_avx(local_320,local_320);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  fVar99 = auVar63._0_4_ + auVar63._16_4_;
  auVar52 = ZEXT416((uint)fVar99);
  *param_1 = fVar96;
  param_1[1] = fVar98;
  param_1[2] = fVar99;
  auVar63 = vhaddps_avx(local_3c0,local_3c0);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar36 = vextractf32x4_avx512vl(auVar63,1);
  auVar64 = vhaddps_avx(local_3a0,local_3a0);
  auVar36 = vaddss_avx512f(auVar63._0_16_,auVar36);
  auVar63 = vhaddps_avx(auVar64,auVar64);
  auVar37 = vextractf32x4_avx512vl(auVar63,1);
  auVar37 = vaddss_avx512f(auVar63._0_16_,auVar37);
  auVar63 = vhaddps_avx(local_380,local_380);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar38 = vextractf32x4_avx512vl(auVar63,1);
  auVar38 = vaddss_avx512f(auVar63._0_16_,auVar38);
  *param_2 = auVar36._0_4_;
  param_2[1] = auVar37._0_4_;
  auVar63 = vhaddps_avx(auVar75,auVar75);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  param_2[2] = auVar38._0_4_;
  auVar39 = vextractf32x4_avx512vl(auVar63,1);
  auVar40 = vaddss_avx512f(auVar63._0_16_,auVar39);
  auVar39 = vxorps_avx512vl(auVar39,auVar39);
  if ((auVar40._0_4_ != auVar39._0_4_) || (NAN(auVar40._0_4_) || NAN(auVar39._0_4_))) {
    auVar35 = vinsertps_avx(ZEXT416((uint)fVar96),ZEXT416((uint)fVar98),0x10);
    auVar35 = vinsertps_avx(auVar35,ZEXT416((uint)fVar99),0x20);
    auVar40._4_4_ = auVar40._0_4_;
    auVar40._8_4_ = auVar40._0_4_;
    auVar40._12_4_ = auVar40._0_4_;
    auVar35 = vdivps_avx(auVar35,auVar40);
    auVar60 = vmovshdup_avx(auVar35);
    auVar52 = vshufpd_avx(auVar35,auVar35,1);
    *param_1 = auVar35._0_4_;
    param_1[1] = auVar60._0_4_;
    param_1[2] = auVar52._0_4_;
    auVar36 = vinsertps_avx512f(auVar36,auVar37,0x10);
    auVar36 = vinsertps_avx512f(auVar36,auVar38,0x20);
    auVar36 = vdivps_avx(auVar36,auVar40);
    *param_2 = auVar36._0_4_;
    uVar3 = vextractps_avx(auVar36,1);
    param_2[1] = uVar3;
    uVar3 = vextractps_avx(auVar36,2);
    param_2[2] = uVar3;
  }
  local_3e0 = ZEXT832(0) << 0x20;
  local_400 = ZEXT832(0) << 0x20;
  local_420 = ZEXT832(0) << 0x20;
  local_300 = local_420;
  local_2e0 = local_420;
  local_2c0 = local_420;
  local_2a0 = ZEXT832(0) << 0x20;
  _local_280 = local_2a0;
  local_260 = local_2a0;
  local_240 = local_2a0;
  local_220 = local_2a0;
  _local_200 = local_2a0;
  _local_1e0 = local_2a0;
  local_1c0 = local_2a0;
  auVar63 = ZEXT832(0) << 0x20;
  local_1a0 = auVar63;
  local_180 = auVar63;
  local_160 = auVar63;
  local_140 = auVar63;
  local_120 = __real_3f800000;
  uStack_11c = __real_3f800000;
  uStack_118 = __real_3f800000;
  uStack_114 = __real_3f800000;
  uStack_110 = __real_3f800000;
  uStack_10c = __real_3f800000;
  uStack_108 = __real_3f800000;
  uStack_104 = __real_3f800000;
  auVar36 = __ymm_00000054000000480000003c0000003000000024000000180000000c00000000._0_16_;
  if ((int)param_8 < iVar32) {
    lVar25 = (longlong)(int)param_8;
    pauVar27 = (undefined1 (*) [32])(param_5 + lVar25 * 0xc);
    pauVar29 = (undefined1 (*) [32])(lVar25 * 0xc + param_4);
    iVar32 = param_8 << 2;
    auVar38 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar53 = __ymm_000000580000004c0000004000000034000000280000001c0000001000000004._0_16_;
    do {
      auVar64 = *(undefined1 (*) [32])(param_7 + iVar32);
      uVar13 = vcmpps_avx512vl(auVar64,auVar63,8);
      if ((char)uVar13 != -1) {
        uVar30 = vcmpps_avx512vl(auVar64,auVar63,0xc);
        bVar34 = (byte)uVar30;
        if ((char)uVar13 == '\0') {
          auVar64 = pauVar29[1];
          auVar61 = vblendps_avx(auVar64,*pauVar29,0x24);
          auVar62 = vpermt2ps_avx512vl(*pauVar29,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar64);
          auVar79 = vpermt2ps_avx512vl(auVar61,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar29[2]);
          auVar64 = vpermt2ps_avx512vl(pauVar29[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar64);
          auVar80 = vinsertf32x4_avx512vl(auVar62,auVar64._0_16_,1);
          auVar81 = vshuff64x2_avx512vl(auVar62,auVar64,3);
          auVar64 = pauVar27[1];
          auVar61 = vblendps_avx(auVar64,*pauVar27,0x24);
          auVar62 = vpermt2ps_avx512vl(*pauVar27,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar64);
          auVar82 = vpermt2ps_avx512vl(auVar61,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar27[2]);
          auVar64 = vpermt2ps_avx512vl(pauVar27[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar64);
          auVar83 = vinsertf32x4_avx512vl(auVar62,auVar64._0_16_,1);
          auVar84 = vshuff64x2_avx512vl(auVar62,auVar64,3);
        }
        else {
          auVar41 = vxorps_avx512vl(auVar64._0_16_,auVar64._0_16_);
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar29 + lVar26));
          auVar80._0_4_ =
               (uint)(bVar34 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar34 & 1) * auVar41._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar80._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar80._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar80._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar80._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
          auVar80._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
          auVar80._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
          auVar80._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
          auVar41 = vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)*pauVar29);
          auVar81._0_4_ =
               (uint)(bVar34 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar34 & 1) * auVar41._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar81._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar81._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar81._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar81._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
          auVar81._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
          auVar81._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
          auVar81._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + (longlong)*pauVar29));
          auVar79._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar64._4_4_;
          auVar79._0_4_ = (uint)(bVar34 & 1) * auVar64._0_4_;
          auVar79._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar64._8_4_;
          auVar79._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar64._12_4_;
          auVar79._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
          auVar79._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
          auVar79._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
          auVar79._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
          auVar41 = vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + lVar26));
          auVar83._0_4_ =
               (uint)(bVar34 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar34 & 1) * auVar41._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar83._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar83._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar83._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar83._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
          auVar83._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
          auVar83._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
          auVar83._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
          auVar41 = vxorps_avx512vl(in_ZMM25._0_16_,in_ZMM25._0_16_);
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)*pauVar27);
          auVar84._0_4_ =
               (uint)(bVar34 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar34 & 1) * auVar41._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar84._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar84._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar84._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar84._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
          auVar84._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
          auVar84._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
          auVar84._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + (longlong)*pauVar27));
          auVar82._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar64._4_4_;
          auVar82._0_4_ = (uint)(bVar34 & 1) * auVar64._0_4_;
          auVar82._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar64._8_4_;
          auVar82._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar64._12_4_;
          auVar82._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
          auVar82._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
          auVar82._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
          auVar82._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
        }
        piVar1 = (int *)(param_6 + iVar32);
        auVar74._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * piVar1[1];
        auVar74._0_4_ = (uint)(bVar34 & 1) * *piVar1;
        auVar74._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * piVar1[2];
        auVar74._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * piVar1[3];
        auVar74._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * piVar1[4];
        auVar74._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * piVar1[5];
        auVar74._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * piVar1[6];
        auVar74._28_4_ = (uint)(byte)(uVar30 >> 7) * piVar1[7];
        auVar64 = vbroadcastss_avx512vl(auVar35);
        auVar64 = vsubps_avx512vl(auVar80,auVar64);
        auVar61 = vbroadcastss_avx512vl(auVar60);
        auVar61 = vsubps_avx512vl(auVar81,auVar61);
        auVar62 = vbroadcastss_avx512vl(auVar52);
        auVar62 = vsubps_avx512vl(auVar79,auVar62);
        auVar66 = vmulps_avx512vl(auVar83,auVar74);
        auVar67 = vmulps_avx512vl(auVar84,auVar74);
        auVar75 = vmulps_avx512vl(auVar82,auVar74);
        auVar76 = vmulps_avx512vl(auVar66,auVar61);
        auVar77 = vmulps_avx512vl(auVar67,auVar62);
        auVar78 = vmulps_avx512vl(auVar75,auVar64);
        auVar67 = vfmsub231ps_avx512vl(auVar76,auVar64,auVar67);
        auVar75 = vfmsub231ps_avx512vl(auVar77,auVar61,auVar75);
        auVar66 = vfmsub231ps_avx512vl(auVar78,auVar62,auVar66);
        auVar75 = vaddps_avx512vl(auVar75,local_420);
        auVar66 = vaddps_avx512vl(auVar66,local_400);
        auVar67 = vaddps_avx512vl(auVar67,local_3e0);
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_420._4_4_ = (uint)bVar4 * auVar75._4_4_ | (uint)!bVar4 * local_420._4_4_;
        local_420._0_4_ =
             (uint)(bVar34 & 1) * auVar75._0_4_ | (uint)!(bool)(bVar34 & 1) * local_420._0_4_;
        local_420._8_4_ = (uint)bVar33 * auVar75._8_4_ | (uint)!bVar33 * local_420._8_4_;
        local_420._12_4_ = (uint)bVar5 * auVar75._12_4_ | (uint)!bVar5 * local_420._12_4_;
        local_420._16_4_ = (uint)bVar6 * auVar75._16_4_ | (uint)!bVar6 * local_420._16_4_;
        local_420._20_4_ = (uint)bVar7 * auVar75._20_4_ | (uint)!bVar7 * local_420._20_4_;
        local_420._24_4_ = (uint)bVar8 * auVar75._24_4_ | (uint)!bVar8 * local_420._24_4_;
        local_420._28_4_ = (uint)bVar9 * auVar75._28_4_ | (uint)!bVar9 * local_420._28_4_;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_400._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * local_400._4_4_;
        local_400._0_4_ =
             (uint)(bVar34 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar34 & 1) * local_400._0_4_;
        local_400._8_4_ = (uint)bVar33 * auVar66._8_4_ | (uint)!bVar33 * local_400._8_4_;
        local_400._12_4_ = (uint)bVar5 * auVar66._12_4_ | (uint)!bVar5 * local_400._12_4_;
        local_400._16_4_ = (uint)bVar6 * auVar66._16_4_ | (uint)!bVar6 * local_400._16_4_;
        local_400._20_4_ = (uint)bVar7 * auVar66._20_4_ | (uint)!bVar7 * local_400._20_4_;
        local_400._24_4_ = (uint)bVar8 * auVar66._24_4_ | (uint)!bVar8 * local_400._24_4_;
        local_400._28_4_ = (uint)bVar9 * auVar66._28_4_ | (uint)!bVar9 * local_400._28_4_;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_3e0._4_4_ = (uint)bVar4 * auVar67._4_4_ | (uint)!bVar4 * local_3e0._4_4_;
        local_3e0._0_4_ =
             (uint)(bVar34 & 1) * auVar67._0_4_ | (uint)!(bool)(bVar34 & 1) * local_3e0._0_4_;
        local_3e0._8_4_ = (uint)bVar33 * auVar67._8_4_ | (uint)!bVar33 * local_3e0._8_4_;
        local_3e0._12_4_ = (uint)bVar5 * auVar67._12_4_ | (uint)!bVar5 * local_3e0._12_4_;
        local_3e0._16_4_ = (uint)bVar6 * auVar67._16_4_ | (uint)!bVar6 * local_3e0._16_4_;
        local_3e0._20_4_ = (uint)bVar7 * auVar67._20_4_ | (uint)!bVar7 * local_3e0._20_4_;
        local_3e0._24_4_ = (uint)bVar8 * auVar67._24_4_ | (uint)!bVar8 * local_3e0._24_4_;
        local_3e0._28_4_ = (uint)bVar9 * auVar67._28_4_ | (uint)!bVar9 * local_3e0._28_4_;
        auVar66 = vmulps_avx512vl(auVar62,auVar63);
        auVar67 = vmulps_avx512vl(auVar61,auVar63);
        auVar75 = vmulps_avx512vl(auVar62,auVar62);
        auVar66 = vsubps_avx512vl(auVar66,auVar66);
        auVar76 = vmulps_avx512vl(auVar61,auVar62);
        auVar62 = vfnmadd213ps_avx512vl(auVar62,auVar64,auVar67);
        auVar77 = vmulps_avx512vl(auVar61,auVar61);
        auVar78 = vaddps_avx512vl(auVar77,auVar75);
        auVar61 = vfnmadd231ps_avx512vl(auVar66,auVar64,auVar61);
        auVar62 = vsubps_avx512vl(auVar62,auVar67);
        auVar66 = vfnmsub231ps_avx512vl(auVar76,auVar64,auVar63);
        auVar67 = vmulps_avx512vl(auVar64,auVar64);
        auVar75 = vaddps_avx512vl(auVar67,auVar75);
        auVar64 = vfmadd231ps_avx512vl(auVar66,auVar63,auVar64);
        auVar66 = vaddps_avx512vl(auVar67,auVar77);
        auVar61 = vmulps_avx512vl(auVar74,auVar61);
        auVar62 = vmulps_avx512vl(auVar74,auVar62);
        auVar64 = vmulps_avx512vl(auVar74,auVar64);
        auVar67 = vfmadd213ps_avx512vl(auVar78,auVar74,local_300);
        auVar76 = vaddps_avx512vl(auVar61,local_2e0);
        auVar77 = vaddps_avx512vl(auVar62,local_2c0);
        auVar61 = vaddps_avx512vl(auVar61,_local_280);
        in_ZMM24 = ZEXT3264(auVar61);
        auVar75 = vfmadd213ps_avx512vl(auVar75,auVar74,local_260);
        auVar78 = vaddps_avx512vl(auVar64,local_240);
        auVar62 = vaddps_avx512vl(auVar62,_local_200);
        in_ZMM23 = ZEXT3264(auVar62);
        auVar64 = vaddps_avx512vl(auVar64,_local_1e0);
        in_ZMM25 = ZEXT3264(auVar64);
        auVar66 = vfmadd213ps_avx512vl(auVar66,auVar74,local_1c0);
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_300._4_4_ = (uint)bVar4 * auVar67._4_4_ | (uint)!bVar4 * local_300._4_4_;
        local_300._0_4_ =
             (uint)(bVar34 & 1) * auVar67._0_4_ | (uint)!(bool)(bVar34 & 1) * local_300._0_4_;
        local_300._8_4_ = (uint)bVar33 * auVar67._8_4_ | (uint)!bVar33 * local_300._8_4_;
        local_300._12_4_ = (uint)bVar5 * auVar67._12_4_ | (uint)!bVar5 * local_300._12_4_;
        local_300._16_4_ = (uint)bVar6 * auVar67._16_4_ | (uint)!bVar6 * local_300._16_4_;
        local_300._20_4_ = (uint)bVar7 * auVar67._20_4_ | (uint)!bVar7 * local_300._20_4_;
        local_300._24_4_ = (uint)bVar8 * auVar67._24_4_ | (uint)!bVar8 * local_300._24_4_;
        local_300._28_4_ = (uint)bVar9 * auVar67._28_4_ | (uint)!bVar9 * local_300._28_4_;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_2e0._4_4_ = (uint)bVar4 * auVar76._4_4_ | (uint)!bVar4 * local_2e0._4_4_;
        local_2e0._0_4_ =
             (uint)(bVar34 & 1) * auVar76._0_4_ | (uint)!(bool)(bVar34 & 1) * local_2e0._0_4_;
        local_2e0._8_4_ = (uint)bVar33 * auVar76._8_4_ | (uint)!bVar33 * local_2e0._8_4_;
        local_2e0._12_4_ = (uint)bVar5 * auVar76._12_4_ | (uint)!bVar5 * local_2e0._12_4_;
        local_2e0._16_4_ = (uint)bVar6 * auVar76._16_4_ | (uint)!bVar6 * local_2e0._16_4_;
        local_2e0._20_4_ = (uint)bVar7 * auVar76._20_4_ | (uint)!bVar7 * local_2e0._20_4_;
        local_2e0._24_4_ = (uint)bVar8 * auVar76._24_4_ | (uint)!bVar8 * local_2e0._24_4_;
        local_2e0._28_4_ = (uint)bVar9 * auVar76._28_4_ | (uint)!bVar9 * local_2e0._28_4_;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_2c0._4_4_ = (uint)bVar4 * auVar77._4_4_ | (uint)!bVar4 * local_2c0._4_4_;
        local_2c0._0_4_ =
             (uint)(bVar34 & 1) * auVar77._0_4_ | (uint)!(bool)(bVar34 & 1) * local_2c0._0_4_;
        local_2c0._8_4_ = (uint)bVar33 * auVar77._8_4_ | (uint)!bVar33 * local_2c0._8_4_;
        local_2c0._12_4_ = (uint)bVar5 * auVar77._12_4_ | (uint)!bVar5 * local_2c0._12_4_;
        local_2c0._16_4_ = (uint)bVar6 * auVar77._16_4_ | (uint)!bVar6 * local_2c0._16_4_;
        local_2c0._20_4_ = (uint)bVar7 * auVar77._20_4_ | (uint)!bVar7 * local_2c0._20_4_;
        local_2c0._24_4_ = (uint)bVar8 * auVar77._24_4_ | (uint)!bVar8 * local_2c0._24_4_;
        local_2c0._28_4_ = (uint)bVar9 * auVar77._28_4_ | (uint)!bVar9 * local_2c0._28_4_;
        auVar17._4_4_ = (uint)!(bool)((byte)(uVar30 >> 3) & 1) * local_2a0._12_4_;
        auVar17._0_4_ = (uint)!(bool)((byte)(uVar30 >> 2) & 1) * local_2a0._8_4_;
        auVar17._8_4_ = (uint)!(bool)((byte)(uVar30 >> 4) & 1) * local_2a0._16_4_;
        auVar17._12_4_ = (uint)!(bool)((byte)(uVar30 >> 5) & 1) * local_2a0._20_4_;
        auVar17._16_4_ = (uint)!(bool)((byte)(uVar30 >> 6) & 1) * local_2a0._24_4_;
        auVar17._20_4_ = (uint)!SUB81(uVar30 >> 7,0) * local_2a0._28_4_;
        auVar17._24_8_ = 0;
        local_2a0 = auVar17 << 0x40;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_280._4_4_ = (uint)bVar4 * auVar61._4_4_ | (uint)!bVar4 * local_280._4_4_;
        local_280._0_4_ =
             (uint)(bVar34 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar34 & 1) * local_280._0_4_;
        fStack_278 = (float)((uint)bVar33 * auVar61._8_4_ | (uint)!bVar33 * (int)fStack_278);
        fStack_274 = (float)((uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * (int)fStack_274);
        fStack_270 = (float)((uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * (int)fStack_270);
        fStack_26c = (float)((uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * (int)fStack_26c);
        fStack_268 = (float)((uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * (int)fStack_268);
        fStack_264 = (float)((uint)bVar9 * auVar61._28_4_ | (uint)!bVar9 * (int)fStack_264);
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_260._4_4_ = (uint)bVar4 * auVar75._4_4_ | (uint)!bVar4 * local_260._4_4_;
        local_260._0_4_ =
             (uint)(bVar34 & 1) * auVar75._0_4_ | (uint)!(bool)(bVar34 & 1) * local_260._0_4_;
        local_260._8_4_ = (uint)bVar33 * auVar75._8_4_ | (uint)!bVar33 * local_260._8_4_;
        local_260._12_4_ = (uint)bVar5 * auVar75._12_4_ | (uint)!bVar5 * local_260._12_4_;
        local_260._16_4_ = (uint)bVar6 * auVar75._16_4_ | (uint)!bVar6 * local_260._16_4_;
        local_260._20_4_ = (uint)bVar7 * auVar75._20_4_ | (uint)!bVar7 * local_260._20_4_;
        local_260._24_4_ = (uint)bVar8 * auVar75._24_4_ | (uint)!bVar8 * local_260._24_4_;
        local_260._28_4_ = (uint)bVar9 * auVar75._28_4_ | (uint)!bVar9 * local_260._28_4_;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_240._4_4_ = (uint)bVar4 * auVar78._4_4_ | (uint)!bVar4 * local_240._4_4_;
        local_240._0_4_ =
             (uint)(bVar34 & 1) * auVar78._0_4_ | (uint)!(bool)(bVar34 & 1) * local_240._0_4_;
        local_240._8_4_ = (uint)bVar33 * auVar78._8_4_ | (uint)!bVar33 * local_240._8_4_;
        local_240._12_4_ = (uint)bVar5 * auVar78._12_4_ | (uint)!bVar5 * local_240._12_4_;
        local_240._16_4_ = (uint)bVar6 * auVar78._16_4_ | (uint)!bVar6 * local_240._16_4_;
        local_240._20_4_ = (uint)bVar7 * auVar78._20_4_ | (uint)!bVar7 * local_240._20_4_;
        local_240._24_4_ = (uint)bVar8 * auVar78._24_4_ | (uint)!bVar8 * local_240._24_4_;
        local_240._28_4_ = (uint)bVar9 * auVar78._28_4_ | (uint)!bVar9 * local_240._28_4_;
        auVar18._4_4_ = (uint)!(bool)((byte)(uVar30 >> 3) & 1) * local_220._12_4_;
        auVar18._0_4_ = (uint)!(bool)((byte)(uVar30 >> 2) & 1) * local_220._8_4_;
        auVar18._8_4_ = (uint)!(bool)((byte)(uVar30 >> 4) & 1) * local_220._16_4_;
        auVar18._12_4_ = (uint)!(bool)((byte)(uVar30 >> 5) & 1) * local_220._20_4_;
        auVar18._16_4_ = (uint)!(bool)((byte)(uVar30 >> 6) & 1) * local_220._24_4_;
        auVar18._20_4_ = (uint)!SUB81(uVar30 >> 7,0) * local_220._28_4_;
        auVar18._24_8_ = 0;
        local_220 = auVar18 << 0x40;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_200._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_200._4_4_;
        local_200._0_4_ =
             (uint)(bVar34 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar34 & 1) * local_200._0_4_;
        fStack_1f8 = (float)((uint)bVar33 * auVar62._8_4_ | (uint)!bVar33 * (int)fStack_1f8);
        fStack_1f4 = (float)((uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * (int)fStack_1f4);
        fStack_1f0 = (float)((uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * (int)fStack_1f0);
        fStack_1ec = (float)((uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * (int)fStack_1ec);
        fStack_1e8 = (float)((uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * (int)fStack_1e8);
        fStack_1e4 = (float)((uint)bVar9 * auVar62._28_4_ | (uint)!bVar9 * (int)fStack_1e4);
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_1e0._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_1e0._4_4_;
        local_1e0._0_4_ =
             (uint)(bVar34 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar34 & 1) * local_1e0._0_4_;
        fStack_1d8 = (float)((uint)bVar33 * auVar64._8_4_ | (uint)!bVar33 * (int)fStack_1d8);
        fStack_1d4 = (float)((uint)bVar5 * auVar64._12_4_ | (uint)!bVar5 * (int)fStack_1d4);
        fStack_1d0 = (float)((uint)bVar6 * auVar64._16_4_ | (uint)!bVar6 * (int)fStack_1d0);
        fStack_1cc = (float)((uint)bVar7 * auVar64._20_4_ | (uint)!bVar7 * (int)fStack_1cc);
        fStack_1c8 = (float)((uint)bVar8 * auVar64._24_4_ | (uint)!bVar8 * (int)fStack_1c8);
        fStack_1c4 = (float)((uint)bVar9 * auVar64._28_4_ | (uint)!bVar9 * (int)fStack_1c4);
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_1c0._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * local_1c0._4_4_;
        local_1c0._0_4_ =
             (uint)(bVar34 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar34 & 1) * local_1c0._0_4_;
        local_1c0._8_4_ = (uint)bVar33 * auVar66._8_4_ | (uint)!bVar33 * local_1c0._8_4_;
        local_1c0._12_4_ = (uint)bVar5 * auVar66._12_4_ | (uint)!bVar5 * local_1c0._12_4_;
        local_1c0._16_4_ = (uint)bVar6 * auVar66._16_4_ | (uint)!bVar6 * local_1c0._16_4_;
        local_1c0._20_4_ = (uint)bVar7 * auVar66._20_4_ | (uint)!bVar7 * local_1c0._20_4_;
        local_1c0._24_4_ = (uint)bVar8 * auVar66._24_4_ | (uint)!bVar8 * local_1c0._24_4_;
        local_1c0._28_4_ = (uint)bVar9 * auVar66._28_4_ | (uint)!bVar9 * local_1c0._28_4_;
        auVar19._4_4_ = (uint)!(bool)((byte)(uVar30 >> 3) & 1) * local_1a0._12_4_;
        auVar19._0_4_ = (uint)!(bool)((byte)(uVar30 >> 2) & 1) * local_1a0._8_4_;
        auVar19._8_4_ = (uint)!(bool)((byte)(uVar30 >> 4) & 1) * local_1a0._16_4_;
        auVar19._12_4_ = (uint)!(bool)((byte)(uVar30 >> 5) & 1) * local_1a0._20_4_;
        auVar19._16_4_ = (uint)!(bool)((byte)(uVar30 >> 6) & 1) * local_1a0._24_4_;
        auVar19._20_4_ = (uint)!SUB81(uVar30 >> 7,0) * local_1a0._28_4_;
        auVar19._24_8_ = 0;
        local_1a0 = auVar19 << 0x40;
        auVar20._4_4_ = (uint)!(bool)((byte)(uVar30 >> 3) & 1) * local_180._12_4_;
        auVar20._0_4_ = (uint)!(bool)((byte)(uVar30 >> 2) & 1) * local_180._8_4_;
        auVar20._8_4_ = (uint)!(bool)((byte)(uVar30 >> 4) & 1) * local_180._16_4_;
        auVar20._12_4_ = (uint)!(bool)((byte)(uVar30 >> 5) & 1) * local_180._20_4_;
        auVar20._16_4_ = (uint)!(bool)((byte)(uVar30 >> 6) & 1) * local_180._24_4_;
        auVar20._20_4_ = (uint)!SUB81(uVar30 >> 7,0) * local_180._28_4_;
        auVar20._24_8_ = 0;
        local_180 = auVar20 << 0x40;
        auVar21._4_4_ = (uint)!(bool)((byte)(uVar30 >> 3) & 1) * local_160._12_4_;
        auVar21._0_4_ = (uint)!(bool)((byte)(uVar30 >> 2) & 1) * local_160._8_4_;
        auVar21._8_4_ = (uint)!(bool)((byte)(uVar30 >> 4) & 1) * local_160._16_4_;
        auVar21._12_4_ = (uint)!(bool)((byte)(uVar30 >> 5) & 1) * local_160._20_4_;
        auVar21._16_4_ = (uint)!(bool)((byte)(uVar30 >> 6) & 1) * local_160._24_4_;
        auVar21._20_4_ = (uint)!SUB81(uVar30 >> 7,0) * local_160._28_4_;
        auVar21._24_8_ = 0;
        local_160 = auVar21 << 0x40;
        auVar22._4_4_ = (uint)!(bool)((byte)(uVar30 >> 3) & 1) * local_140._12_4_;
        auVar22._0_4_ = (uint)!(bool)((byte)(uVar30 >> 2) & 1) * local_140._8_4_;
        auVar22._8_4_ = (uint)!(bool)((byte)(uVar30 >> 4) & 1) * local_140._16_4_;
        auVar22._12_4_ = (uint)!(bool)((byte)(uVar30 >> 5) & 1) * local_140._20_4_;
        auVar22._16_4_ = (uint)!(bool)((byte)(uVar30 >> 6) & 1) * local_140._24_4_;
        auVar22._20_4_ = (uint)!SUB81(uVar30 >> 7,0) * local_140._28_4_;
        auVar22._24_8_ = 0;
        local_140 = auVar22 << 0x40;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        bVar33 = (bool)((byte)(uVar30 >> 2) & 1);
        bVar5 = (bool)((byte)(uVar30 >> 3) & 1);
        bVar6 = (bool)((byte)(uVar30 >> 4) & 1);
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        bVar8 = (bool)((byte)(uVar30 >> 6) & 1);
        bVar9 = SUB81(uVar30 >> 7,0);
        local_120 = (bVar34 & 1) * __real_3f800000 | !(bool)(bVar34 & 1) * local_120;
        uStack_11c = bVar4 * __real_3f800000 | !bVar4 * uStack_11c;
        uStack_118 = bVar33 * __real_3f800000 | !bVar33 * uStack_118;
        uStack_114 = bVar5 * __real_3f800000 | !bVar5 * uStack_114;
        uStack_110 = bVar6 * __real_3f800000 | !bVar6 * uStack_110;
        uStack_10c = bVar7 * __real_3f800000 | !bVar7 * uStack_10c;
        uStack_108 = bVar8 * __real_3f800000 | !bVar8 * uStack_108;
        uStack_104 = bVar9 * __real_3f800000 | !bVar9 * uStack_104;
      }
      lVar25 = lVar25 + 8;
      pauVar27 = pauVar27 + 3;
      pauVar29 = pauVar29 + 3;
      iVar32 = iVar32 + 0x20;
    } while (lVar25 < lVar26);
    param_8 = (uint)lVar25;
    auVar41 = auVar36;
  }
  if ((int)param_8 < param_9) {
    auVar63 = vpbroadcastd_avx512vl();
    auVar10._0_4_ =
         auVar63._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar10._4_4_ = auVar63._4_4_ + _UNK_150b50ae4;
    auVar10._8_4_ = auVar63._8_4_ + _UNK_150b50ae8;
    auVar10._12_4_ = auVar63._12_4_ + _UNK_150b50aec;
    auVar10._16_4_ = auVar63._16_4_ + _UNK_150b50af0;
    auVar10._20_4_ = auVar63._20_4_ + _UNK_150b50af4;
    auVar10._24_4_ = auVar63._24_4_ + _UNK_150b50af8;
    auVar10._28_4_ = auVar63._28_4_ + _UNK_150b50afc;
    uVar15 = vpcmpd_avx512vl(auVar10,auVar65,5);
    uVar30 = vpcmpgtd_avx512vl(auVar65,auVar10);
    piVar1 = (int *)(param_7 + (int)(param_8 * 4));
    bVar34 = (byte)uVar30;
    auVar85._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * piVar1[1];
    auVar85._0_4_ = (uint)(bVar34 & 1) * *piVar1;
    auVar85._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * piVar1[2];
    auVar85._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * piVar1[3];
    auVar85._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * piVar1[4];
    auVar85._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * piVar1[5];
    auVar85._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * piVar1[6];
    auVar85._28_4_ = (uint)(byte)(uVar30 >> 7) * piVar1[7];
    auVar109 = ZEXT1664((undefined1  [16])0x0);
    uVar13 = vcmpps_avx512vl(auVar85,auVar109._0_32_,8);
    if ((byte)((byte)uVar13 | (byte)uVar15) != 0xff) {
      uVar13 = vcmpps_avx512vl(auVar85,auVar109._0_32_,8);
      bVar23 = bVar34 & (byte)uVar13;
      if (bVar23 != bVar34) {
        bVar23 = bVar23 ^ bVar34;
        lVar26 = (longlong)(int)param_8;
        pauVar27 = (undefined1 (*) [32])(param_4 + lVar26 * 0xc);
        if (bVar23 == 0xff) {
          auVar63 = pauVar27[1];
          auVar65 = vblendps_avx(auVar63,*pauVar27,0x24);
          auVar64 = vpermt2ps_avx512vl(*pauVar27,
                                       ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar63);
          auVar86 = vpermt2ps_avx512vl(auVar65,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,pauVar27[2]);
          auVar63 = vpermt2ps_avx512vl(pauVar27[2],
                                       ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar63);
          auVar87 = vinsertf32x4_avx512vl(auVar64,auVar63._0_16_,1);
          auVar88 = vshuff64x2_avx512vl(auVar64,auVar63,3);
          auVar63 = *(undefined1 (*) [32])(param_5 + lVar26 * 0xc);
          auVar65 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar26 * 0xc);
          auVar64 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar26 * 0xc);
          auVar36 = auVar64._0_16_;
          auVar61 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,auVar63,auVar65);
          auVar62 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,auVar64,auVar65);
          auVar89 = vinsertf32x4_avx512vl(auVar61,auVar62._0_16_,1);
          auVar90 = vshuff64x2_avx512vl(auVar61,auVar62,3);
          auVar63 = vblendps_avx(auVar65,auVar63,0x24);
          auVar91 = vpermt2ps_avx512vl(auVar63,
                                       ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,auVar64);
        }
        else {
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar27 * 2));
          auVar87._4_4_ = (uint)(bVar23 >> 1 & 1) * auVar63._4_4_;
          auVar87._0_4_ = (uint)(bVar23 & 1) * auVar63._0_4_;
          bVar4 = (bool)(bVar23 >> 2 & 1);
          auVar87._8_4_ = (uint)bVar4 * auVar63._8_4_ | (uint)!bVar4 * auVar109._8_4_;
          bVar4 = (bool)(bVar23 >> 3 & 1);
          auVar87._12_4_ = (uint)bVar4 * auVar63._12_4_ | (uint)!bVar4 * auVar109._12_4_;
          auVar87._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar63._16_4_;
          auVar87._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar63._20_4_;
          auVar87._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar63._24_4_;
          auVar87._28_4_ = (uint)(bVar23 >> 7) * auVar63._28_4_;
          auVar37 = vxorps_avx512vl(auVar38,auVar38);
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(local_400 + (longlong)*pauVar27));
          auVar88._0_4_ =
               (uint)(bVar23 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar37._0_4_;
          bVar4 = (bool)(bVar23 >> 1 & 1);
          auVar88._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * auVar37._4_4_;
          bVar4 = (bool)(bVar23 >> 2 & 1);
          auVar88._8_4_ = (uint)bVar4 * auVar63._8_4_ | (uint)!bVar4 * auVar37._8_4_;
          bVar4 = (bool)(bVar23 >> 3 & 1);
          auVar88._12_4_ = (uint)bVar4 * auVar63._12_4_ | (uint)!bVar4 * auVar37._12_4_;
          auVar88._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar63._16_4_;
          auVar88._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar63._20_4_;
          auVar88._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar63._24_4_;
          auVar88._28_4_ = (uint)(bVar23 >> 7) * auVar63._28_4_;
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + (longlong)*pauVar27));
          auVar86._4_4_ = (uint)(bVar23 >> 1 & 1) * auVar63._4_4_;
          auVar86._0_4_ = (uint)(bVar23 & 1) * auVar63._0_4_;
          auVar86._8_4_ = (uint)(bVar23 >> 2 & 1) * auVar63._8_4_;
          auVar86._12_4_ = (uint)(bVar23 >> 3 & 1) * auVar63._12_4_;
          auVar86._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar63._16_4_;
          auVar86._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar63._20_4_;
          auVar86._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar63._24_4_;
          auVar86._28_4_ = (uint)(bVar23 >> 7) * auVar63._28_4_;
          param_5 = param_5 + lVar26 * 0xc;
          auVar41 = vxorps_avx512vl(auVar41,auVar41);
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + param_5));
          auVar89._0_4_ =
               (uint)(bVar23 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar41._0_4_;
          bVar4 = (bool)(bVar23 >> 1 & 1);
          auVar89._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)(bVar23 >> 2 & 1);
          auVar89._8_4_ = (uint)bVar4 * auVar63._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)(bVar23 >> 3 & 1);
          auVar89._12_4_ = (uint)bVar4 * auVar63._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar89._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar63._16_4_;
          auVar89._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar63._20_4_;
          auVar89._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar63._24_4_;
          auVar89._28_4_ = (uint)(bVar23 >> 7) * auVar63._28_4_;
          auVar41 = vxorps_avx512vl(auVar53,auVar53);
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(local_400 + param_5));
          auVar90._0_4_ =
               (uint)(bVar23 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar23 & 1) * auVar41._0_4_;
          bVar4 = (bool)(bVar23 >> 1 & 1);
          auVar90._4_4_ = (uint)bVar4 * auVar63._4_4_ | (uint)!bVar4 * auVar41._4_4_;
          bVar4 = (bool)(bVar23 >> 2 & 1);
          auVar90._8_4_ = (uint)bVar4 * auVar63._8_4_ | (uint)!bVar4 * auVar41._8_4_;
          bVar4 = (bool)(bVar23 >> 3 & 1);
          auVar90._12_4_ = (uint)bVar4 * auVar63._12_4_ | (uint)!bVar4 * auVar41._12_4_;
          auVar90._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar63._16_4_;
          auVar90._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar63._20_4_;
          auVar90._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar63._24_4_;
          auVar90._28_4_ = (uint)(bVar23 >> 7) * auVar63._28_4_;
          auVar63 = vgatherdps_avx512vl(*(undefined4 *)(puVar2 + param_5));
          auVar91._4_4_ = (uint)(bVar23 >> 1 & 1) * auVar63._4_4_;
          auVar91._0_4_ = (uint)(bVar23 & 1) * auVar63._0_4_;
          auVar91._8_4_ = (uint)(bVar23 >> 2 & 1) * auVar63._8_4_;
          auVar91._12_4_ = (uint)(bVar23 >> 3 & 1) * auVar63._12_4_;
          auVar91._16_4_ = (uint)(bVar23 >> 4 & 1) * auVar63._16_4_;
          auVar91._20_4_ = (uint)(bVar23 >> 5 & 1) * auVar63._20_4_;
          auVar91._24_4_ = (uint)(bVar23 >> 6 & 1) * auVar63._24_4_;
          auVar91._28_4_ = (uint)(bVar23 >> 7) * auVar63._28_4_;
        }
        piVar1 = (int *)(param_6 + (int)(param_8 * 4));
        auVar92._4_4_ = (uint)(bVar23 >> 1 & 1) * piVar1[1];
        auVar92._0_4_ = (uint)(bVar23 & 1) * *piVar1;
        auVar92._8_4_ = (uint)(bVar23 >> 2 & 1) * piVar1[2];
        auVar92._12_4_ = (uint)(bVar23 >> 3 & 1) * piVar1[3];
        auVar92._16_4_ = (uint)(bVar23 >> 4 & 1) * piVar1[4];
        auVar92._20_4_ = (uint)(bVar23 >> 5 & 1) * piVar1[5];
        auVar92._24_4_ = (uint)(bVar23 >> 6 & 1) * piVar1[6];
        auVar92._28_4_ = (uint)(bVar23 >> 7) * piVar1[7];
        auVar41 = vxorps_avx512vl(auVar36,auVar36);
        auVar97._0_4_ = auVar35._0_4_;
        auVar97._4_4_ = auVar97._0_4_;
        auVar97._8_4_ = auVar97._0_4_;
        auVar97._12_4_ = auVar97._0_4_;
        auVar97._16_4_ = auVar97._0_4_;
        auVar97._20_4_ = auVar97._0_4_;
        auVar97._24_4_ = auVar97._0_4_;
        auVar97._28_4_ = auVar97._0_4_;
        auVar63 = vsubps_avx(auVar87,auVar97);
        auVar105._0_4_ = auVar60._0_4_;
        auVar105._4_4_ = auVar105._0_4_;
        auVar105._8_4_ = auVar105._0_4_;
        auVar105._12_4_ = auVar105._0_4_;
        auVar105._16_4_ = auVar105._0_4_;
        auVar105._20_4_ = auVar105._0_4_;
        auVar105._24_4_ = auVar105._0_4_;
        auVar105._28_4_ = auVar105._0_4_;
        auVar61 = vsubps_avx512vl(auVar88,auVar105);
        auVar107._0_4_ = auVar52._0_4_;
        auVar107._4_4_ = auVar107._0_4_;
        auVar107._8_4_ = auVar107._0_4_;
        auVar107._12_4_ = auVar107._0_4_;
        auVar107._16_4_ = auVar107._0_4_;
        auVar107._20_4_ = auVar107._0_4_;
        auVar107._24_4_ = auVar107._0_4_;
        auVar107._28_4_ = auVar107._0_4_;
        auVar65 = vsubps_avx(auVar86,auVar107);
        auVar64 = vmulps_avx512vl(auVar89,auVar92);
        auVar62 = vmulps_avx512vl(auVar90,auVar92);
        auVar66 = vmulps_avx512vl(auVar91,auVar92);
        auVar67 = vmulps_avx512vl(auVar64,auVar61);
        auVar75 = vmulps_avx512vl(auVar62,auVar65);
        auVar76 = vmulps_avx512vl(auVar66,auVar63);
        auVar62 = vfmsub231ps_avx512vl(auVar67,auVar63,auVar62);
        auVar66 = vfmsub231ps_avx512vl(auVar75,auVar61,auVar66);
        auVar64 = vfmsub231ps_avx512vl(auVar76,auVar65,auVar64);
        auVar66 = vaddps_avx512vl(auVar66,local_420);
        auVar64 = vaddps_avx512vl(auVar64,local_400);
        auVar62 = vaddps_avx512vl(auVar62,local_3e0);
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_420._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * local_420._4_4_;
        local_420._0_4_ =
             (uint)(bVar23 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar23 & 1) * local_420._0_4_;
        local_420._8_4_ = (uint)bVar33 * auVar66._8_4_ | (uint)!bVar33 * local_420._8_4_;
        local_420._12_4_ = (uint)bVar5 * auVar66._12_4_ | (uint)!bVar5 * local_420._12_4_;
        local_420._16_4_ = (uint)bVar6 * auVar66._16_4_ | (uint)!bVar6 * local_420._16_4_;
        local_420._20_4_ = (uint)bVar7 * auVar66._20_4_ | (uint)!bVar7 * local_420._20_4_;
        local_420._24_4_ = (uint)bVar8 * auVar66._24_4_ | (uint)!bVar8 * local_420._24_4_;
        local_420._28_4_ =
             (uint)(bVar23 >> 7) * auVar66._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_420._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_400._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_400._4_4_;
        local_400._0_4_ =
             (uint)(bVar23 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar23 & 1) * local_400._0_4_;
        local_400._8_4_ = (uint)bVar33 * auVar64._8_4_ | (uint)!bVar33 * local_400._8_4_;
        local_400._12_4_ = (uint)bVar5 * auVar64._12_4_ | (uint)!bVar5 * local_400._12_4_;
        local_400._16_4_ = (uint)bVar6 * auVar64._16_4_ | (uint)!bVar6 * local_400._16_4_;
        local_400._20_4_ = (uint)bVar7 * auVar64._20_4_ | (uint)!bVar7 * local_400._20_4_;
        local_400._24_4_ = (uint)bVar8 * auVar64._24_4_ | (uint)!bVar8 * local_400._24_4_;
        local_400._28_4_ =
             (uint)(bVar23 >> 7) * auVar64._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_400._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_3e0._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_3e0._4_4_;
        local_3e0._0_4_ =
             (uint)(bVar23 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar23 & 1) * local_3e0._0_4_;
        local_3e0._8_4_ = (uint)bVar33 * auVar62._8_4_ | (uint)!bVar33 * local_3e0._8_4_;
        local_3e0._12_4_ = (uint)bVar5 * auVar62._12_4_ | (uint)!bVar5 * local_3e0._12_4_;
        local_3e0._16_4_ = (uint)bVar6 * auVar62._16_4_ | (uint)!bVar6 * local_3e0._16_4_;
        local_3e0._20_4_ = (uint)bVar7 * auVar62._20_4_ | (uint)!bVar7 * local_3e0._20_4_;
        local_3e0._24_4_ = (uint)bVar8 * auVar62._24_4_ | (uint)!bVar8 * local_3e0._24_4_;
        local_3e0._28_4_ =
             (uint)(bVar23 >> 7) * auVar62._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_3e0._28_4_;
        auVar64 = vmulps_avx512vl(auVar65,ZEXT1632(auVar41));
        auVar62 = vmulps_avx512vl(auVar61,ZEXT1632(auVar41));
        auVar66 = vmulps_avx512vl(auVar65,auVar65);
        auVar64 = vsubps_avx(auVar64,auVar64);
        auVar67 = vmulps_avx512vl(auVar61,auVar65);
        fVar96 = auVar63._0_4_;
        auVar95._0_4_ = -(fVar96 * auVar65._0_4_) + auVar62._0_4_;
        fVar98 = auVar63._4_4_;
        auVar95._4_4_ = -(fVar98 * auVar65._4_4_) + auVar62._4_4_;
        fVar99 = auVar63._8_4_;
        auVar95._8_4_ = -(fVar99 * auVar65._8_4_) + auVar62._8_4_;
        fVar100 = auVar63._12_4_;
        auVar95._12_4_ = -(fVar100 * auVar65._12_4_) + auVar62._12_4_;
        fVar101 = auVar63._16_4_;
        auVar95._16_4_ = -(fVar101 * auVar65._16_4_) + auVar62._16_4_;
        fVar102 = auVar63._20_4_;
        auVar95._20_4_ = -(fVar102 * auVar65._20_4_) + auVar62._20_4_;
        fVar103 = auVar63._24_4_;
        auVar95._24_4_ = -(fVar103 * auVar65._24_4_) + auVar62._24_4_;
        fVar104 = auVar63._28_4_;
        auVar95._28_4_ = -(fVar104 * auVar65._28_4_) + auVar62._28_4_;
        auVar75 = vmulps_avx512vl(auVar61,auVar61);
        auVar76 = vaddps_avx512vl(auVar75,auVar66);
        auVar108._0_4_ = -(fVar96 * auVar61._0_4_) + auVar64._0_4_;
        auVar108._4_4_ = -(fVar98 * auVar61._4_4_) + auVar64._4_4_;
        auVar108._8_4_ = -(fVar99 * auVar61._8_4_) + auVar64._8_4_;
        auVar108._12_4_ = -(fVar100 * auVar61._12_4_) + auVar64._12_4_;
        auVar108._16_4_ = -(fVar101 * auVar61._16_4_) + auVar64._16_4_;
        auVar108._20_4_ = -(fVar102 * auVar61._20_4_) + auVar64._20_4_;
        auVar108._24_4_ = -(fVar103 * auVar61._24_4_) + auVar64._24_4_;
        auVar108._28_4_ = -(fVar104 * auVar61._28_4_) + auVar64._28_4_;
        auVar65 = vsubps_avx(auVar95,auVar62);
        auVar64 = vfnmsub231ps_avx512vl(auVar67,auVar63,ZEXT1632(auVar41));
        auVar106._0_4_ = fVar96 * fVar96;
        auVar106._4_4_ = fVar98 * fVar98;
        auVar106._8_4_ = fVar99 * fVar99;
        auVar106._12_4_ = fVar100 * fVar100;
        auVar106._16_4_ = fVar101 * fVar101;
        auVar106._20_4_ = fVar102 * fVar102;
        auVar106._24_4_ = fVar103 * fVar103;
        auVar106._28_4_ = fVar104 * fVar104;
        auVar61 = vaddps_avx512vl(auVar106,auVar66);
        auVar63 = vfmadd231ps_avx512vl(auVar64,ZEXT1632(auVar41),auVar63);
        auVar64 = vaddps_avx512vl(auVar106,auVar75);
        auVar62 = vmulps_avx512vl(auVar92,auVar108);
        auVar65 = vmulps_avx512vl(auVar92,auVar65);
        auVar63 = vmulps_avx512vl(auVar92,auVar63);
        auVar66 = vfmadd213ps_avx512vl(auVar76,auVar92,local_300);
        auVar67 = vaddps_avx512vl(auVar62,local_2e0);
        auVar75 = vaddps_avx512vl(auVar65,local_2c0);
        auVar61 = vfmadd213ps_avx512vl(auVar61,auVar92,local_260);
        auVar76 = vaddps_avx512vl(auVar63,local_240);
        auVar64 = vfmadd213ps_avx512vl(auVar64,auVar92,local_1c0);
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_300._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * local_300._4_4_;
        local_300._0_4_ =
             (uint)(bVar23 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar23 & 1) * local_300._0_4_;
        local_300._8_4_ = (uint)bVar33 * auVar66._8_4_ | (uint)!bVar33 * local_300._8_4_;
        local_300._12_4_ = (uint)bVar5 * auVar66._12_4_ | (uint)!bVar5 * local_300._12_4_;
        local_300._16_4_ = (uint)bVar6 * auVar66._16_4_ | (uint)!bVar6 * local_300._16_4_;
        local_300._20_4_ = (uint)bVar7 * auVar66._20_4_ | (uint)!bVar7 * local_300._20_4_;
        local_300._24_4_ = (uint)bVar8 * auVar66._24_4_ | (uint)!bVar8 * local_300._24_4_;
        local_300._28_4_ =
             (uint)(bVar23 >> 7) * auVar66._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_300._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_2e0._4_4_ = (uint)bVar4 * auVar67._4_4_ | (uint)!bVar4 * local_2e0._4_4_;
        local_2e0._0_4_ =
             (uint)(bVar23 & 1) * auVar67._0_4_ | (uint)!(bool)(bVar23 & 1) * local_2e0._0_4_;
        local_2e0._8_4_ = (uint)bVar33 * auVar67._8_4_ | (uint)!bVar33 * local_2e0._8_4_;
        local_2e0._12_4_ = (uint)bVar5 * auVar67._12_4_ | (uint)!bVar5 * local_2e0._12_4_;
        local_2e0._16_4_ = (uint)bVar6 * auVar67._16_4_ | (uint)!bVar6 * local_2e0._16_4_;
        local_2e0._20_4_ = (uint)bVar7 * auVar67._20_4_ | (uint)!bVar7 * local_2e0._20_4_;
        local_2e0._24_4_ = (uint)bVar8 * auVar67._24_4_ | (uint)!bVar8 * local_2e0._24_4_;
        local_2e0._28_4_ =
             (uint)(bVar23 >> 7) * auVar67._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_2e0._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_2c0._4_4_ = (uint)bVar4 * auVar75._4_4_ | (uint)!bVar4 * local_2c0._4_4_;
        local_2c0._0_4_ =
             (uint)(bVar23 & 1) * auVar75._0_4_ | (uint)!(bool)(bVar23 & 1) * local_2c0._0_4_;
        local_2c0._8_4_ = (uint)bVar33 * auVar75._8_4_ | (uint)!bVar33 * local_2c0._8_4_;
        local_2c0._12_4_ = (uint)bVar5 * auVar75._12_4_ | (uint)!bVar5 * local_2c0._12_4_;
        local_2c0._16_4_ = (uint)bVar6 * auVar75._16_4_ | (uint)!bVar6 * local_2c0._16_4_;
        local_2c0._20_4_ = (uint)bVar7 * auVar75._20_4_ | (uint)!bVar7 * local_2c0._20_4_;
        local_2c0._24_4_ = (uint)bVar8 * auVar75._24_4_ | (uint)!bVar8 * local_2c0._24_4_;
        local_2c0._28_4_ =
             (uint)(bVar23 >> 7) * auVar75._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_2c0._28_4_;
        iVar28 = auVar41._0_4_;
        iVar93 = auVar41._4_4_;
        bVar4 = (bool)(bVar23 >> 2 & 1);
        iVar94 = auVar41._8_4_;
        iVar32 = auVar41._12_4_;
        bVar33 = (bool)(bVar23 >> 3 & 1);
        local_2a0._4_4_ = (uint)(bVar23 >> 1 & 1) * iVar93;
        local_2a0._0_4_ = (uint)(bVar23 & 1) * iVar28;
        local_2a0._8_4_ = (uint)bVar4 * iVar94 | (uint)!bVar4 * local_2a0._8_4_;
        local_2a0._12_4_ = (uint)bVar33 * iVar32 | (uint)!bVar33 * local_2a0._12_4_;
        local_2a0._16_4_ = (uint)!(bool)(bVar23 >> 4 & 1) * local_2a0._16_4_;
        local_2a0._20_4_ = (uint)!(bool)(bVar23 >> 5 & 1) * local_2a0._20_4_;
        local_2a0._24_4_ = (uint)!(bool)(bVar23 >> 6 & 1) * local_2a0._24_4_;
        local_2a0._28_4_ = (uint)!(bool)(bVar23 >> 7) * local_2a0._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_280._4_4_ =
             (uint)bVar4 * (int)(auVar62._4_4_ + (float)local_280._4_4_) |
             (uint)!bVar4 * local_280._4_4_;
        local_280._0_4_ =
             (uint)(bVar23 & 1) * (int)(auVar62._0_4_ + (float)local_280._0_4_) |
             (uint)!(bool)(bVar23 & 1) * local_280._0_4_;
        fStack_278 = (float)((uint)bVar33 * (int)(auVar62._8_4_ + fStack_278) |
                            (uint)!bVar33 * (int)fStack_278);
        fStack_274 = (float)((uint)bVar5 * (int)(auVar62._12_4_ + fStack_274) |
                            (uint)!bVar5 * (int)fStack_274);
        fStack_270 = (float)((uint)bVar6 * (int)(auVar62._16_4_ + fStack_270) |
                            (uint)!bVar6 * (int)fStack_270);
        fStack_26c = (float)((uint)bVar7 * (int)(auVar62._20_4_ + fStack_26c) |
                            (uint)!bVar7 * (int)fStack_26c);
        fStack_268 = (float)((uint)bVar8 * (int)(auVar62._24_4_ + fStack_268) |
                            (uint)!bVar8 * (int)fStack_268);
        fStack_264 = (float)((uint)(bVar23 >> 7) * (int)(auVar62._28_4_ + fStack_264) |
                            (uint)!(bool)(bVar23 >> 7) * (int)fStack_264);
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_260._4_4_ = (uint)bVar4 * auVar61._4_4_ | (uint)!bVar4 * local_260._4_4_;
        local_260._0_4_ =
             (uint)(bVar23 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar23 & 1) * local_260._0_4_;
        local_260._8_4_ = (uint)bVar33 * auVar61._8_4_ | (uint)!bVar33 * local_260._8_4_;
        local_260._12_4_ = (uint)bVar5 * auVar61._12_4_ | (uint)!bVar5 * local_260._12_4_;
        local_260._16_4_ = (uint)bVar6 * auVar61._16_4_ | (uint)!bVar6 * local_260._16_4_;
        local_260._20_4_ = (uint)bVar7 * auVar61._20_4_ | (uint)!bVar7 * local_260._20_4_;
        local_260._24_4_ = (uint)bVar8 * auVar61._24_4_ | (uint)!bVar8 * local_260._24_4_;
        local_260._28_4_ =
             (uint)(bVar23 >> 7) * auVar61._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_260._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_240._4_4_ = (uint)bVar4 * auVar76._4_4_ | (uint)!bVar4 * local_240._4_4_;
        local_240._0_4_ =
             (uint)(bVar23 & 1) * auVar76._0_4_ | (uint)!(bool)(bVar23 & 1) * local_240._0_4_;
        local_240._8_4_ = (uint)bVar33 * auVar76._8_4_ | (uint)!bVar33 * local_240._8_4_;
        local_240._12_4_ = (uint)bVar5 * auVar76._12_4_ | (uint)!bVar5 * local_240._12_4_;
        local_240._16_4_ = (uint)bVar6 * auVar76._16_4_ | (uint)!bVar6 * local_240._16_4_;
        local_240._20_4_ = (uint)bVar7 * auVar76._20_4_ | (uint)!bVar7 * local_240._20_4_;
        local_240._24_4_ = (uint)bVar8 * auVar76._24_4_ | (uint)!bVar8 * local_240._24_4_;
        local_240._28_4_ =
             (uint)(bVar23 >> 7) * auVar76._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_240._28_4_;
        bVar4 = (bool)(bVar23 >> 2 & 1);
        bVar33 = (bool)(bVar23 >> 3 & 1);
        local_220._4_4_ = (uint)(bVar23 >> 1 & 1) * iVar93;
        local_220._0_4_ = (uint)(bVar23 & 1) * iVar28;
        local_220._8_4_ = (uint)bVar4 * iVar94 | (uint)!bVar4 * local_220._8_4_;
        local_220._12_4_ = (uint)bVar33 * iVar32 | (uint)!bVar33 * local_220._12_4_;
        local_220._16_4_ = (uint)!(bool)(bVar23 >> 4 & 1) * local_220._16_4_;
        local_220._20_4_ = (uint)!(bool)(bVar23 >> 5 & 1) * local_220._20_4_;
        local_220._24_4_ = (uint)!(bool)(bVar23 >> 6 & 1) * local_220._24_4_;
        local_220._28_4_ = (uint)!(bool)(bVar23 >> 7) * local_220._28_4_;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_200._4_4_ =
             (uint)bVar4 * (int)(auVar65._4_4_ + (float)local_200._4_4_) |
             (uint)!bVar4 * local_200._4_4_;
        local_200._0_4_ =
             (uint)(bVar23 & 1) * (int)(auVar65._0_4_ + (float)local_200._0_4_) |
             (uint)!(bool)(bVar23 & 1) * local_200._0_4_;
        fStack_1f8 = (float)((uint)bVar33 * (int)(auVar65._8_4_ + fStack_1f8) |
                            (uint)!bVar33 * (int)fStack_1f8);
        fStack_1f4 = (float)((uint)bVar5 * (int)(auVar65._12_4_ + fStack_1f4) |
                            (uint)!bVar5 * (int)fStack_1f4);
        fStack_1f0 = (float)((uint)bVar6 * (int)(auVar65._16_4_ + fStack_1f0) |
                            (uint)!bVar6 * (int)fStack_1f0);
        fStack_1ec = (float)((uint)bVar7 * (int)(auVar65._20_4_ + fStack_1ec) |
                            (uint)!bVar7 * (int)fStack_1ec);
        fStack_1e8 = (float)((uint)bVar8 * (int)(auVar65._24_4_ + fStack_1e8) |
                            (uint)!bVar8 * (int)fStack_1e8);
        fStack_1e4 = (float)((uint)(bVar23 >> 7) * (int)(auVar65._28_4_ + fStack_1e4) |
                            (uint)!(bool)(bVar23 >> 7) * (int)fStack_1e4);
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_1e0._4_4_ =
             (uint)bVar4 * (int)(auVar63._4_4_ + (float)local_1e0._4_4_) |
             (uint)!bVar4 * local_1e0._4_4_;
        local_1e0._0_4_ =
             (uint)(bVar23 & 1) * (int)(auVar63._0_4_ + (float)local_1e0._0_4_) |
             (uint)!(bool)(bVar23 & 1) * local_1e0._0_4_;
        fStack_1d8 = (float)((uint)bVar33 * (int)(auVar63._8_4_ + fStack_1d8) |
                            (uint)!bVar33 * (int)fStack_1d8);
        fStack_1d4 = (float)((uint)bVar5 * (int)(auVar63._12_4_ + fStack_1d4) |
                            (uint)!bVar5 * (int)fStack_1d4);
        fStack_1d0 = (float)((uint)bVar6 * (int)(auVar63._16_4_ + fStack_1d0) |
                            (uint)!bVar6 * (int)fStack_1d0);
        fStack_1cc = (float)((uint)bVar7 * (int)(auVar63._20_4_ + fStack_1cc) |
                            (uint)!bVar7 * (int)fStack_1cc);
        fStack_1c8 = (float)((uint)bVar8 * (int)(auVar63._24_4_ + fStack_1c8) |
                            (uint)!bVar8 * (int)fStack_1c8);
        fStack_1c4 = (float)((uint)(bVar23 >> 7) * (int)(auVar63._28_4_ + fStack_1c4) |
                            (uint)!(bool)(bVar23 >> 7) * (int)fStack_1c4);
        bVar4 = (bool)(bVar23 >> 1 & 1);
        bVar33 = (bool)(bVar23 >> 2 & 1);
        bVar5 = (bool)(bVar23 >> 3 & 1);
        bVar6 = (bool)(bVar23 >> 4 & 1);
        bVar7 = (bool)(bVar23 >> 5 & 1);
        bVar8 = (bool)(bVar23 >> 6 & 1);
        local_1c0._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_1c0._4_4_;
        local_1c0._0_4_ =
             (uint)(bVar23 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar23 & 1) * local_1c0._0_4_;
        local_1c0._8_4_ = (uint)bVar33 * auVar64._8_4_ | (uint)!bVar33 * local_1c0._8_4_;
        local_1c0._12_4_ = (uint)bVar5 * auVar64._12_4_ | (uint)!bVar5 * local_1c0._12_4_;
        local_1c0._16_4_ = (uint)bVar6 * auVar64._16_4_ | (uint)!bVar6 * local_1c0._16_4_;
        local_1c0._20_4_ = (uint)bVar7 * auVar64._20_4_ | (uint)!bVar7 * local_1c0._20_4_;
        local_1c0._24_4_ = (uint)bVar8 * auVar64._24_4_ | (uint)!bVar8 * local_1c0._24_4_;
        local_1c0._28_4_ =
             (uint)(bVar23 >> 7) * auVar64._28_4_ | (uint)!(bool)(bVar23 >> 7) * local_1c0._28_4_;
        bVar4 = (bool)(bVar23 >> 2 & 1);
        bVar33 = (bool)(bVar23 >> 3 & 1);
        local_1a0._4_4_ = (uint)(bVar23 >> 1 & 1) * iVar93;
        local_1a0._0_4_ = (uint)(bVar23 & 1) * iVar28;
        local_1a0._8_4_ = (uint)bVar4 * iVar94 | (uint)!bVar4 * local_1a0._8_4_;
        local_1a0._12_4_ = (uint)bVar33 * iVar32 | (uint)!bVar33 * local_1a0._12_4_;
        local_1a0._16_4_ = (uint)!(bool)(bVar23 >> 4 & 1) * local_1a0._16_4_;
        local_1a0._20_4_ = (uint)!(bool)(bVar23 >> 5 & 1) * local_1a0._20_4_;
        local_1a0._24_4_ = (uint)!(bool)(bVar23 >> 6 & 1) * local_1a0._24_4_;
        local_1a0._28_4_ =
             (uint)(bVar23 >> 7) * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
             (uint)!(bool)(bVar23 >> 7) * local_1a0._28_4_;
        bVar4 = (bool)(bVar23 >> 2 & 1);
        bVar33 = (bool)(bVar23 >> 3 & 1);
        local_180._4_4_ = (uint)(bVar23 >> 1 & 1) * iVar93;
        local_180._0_4_ = (uint)(bVar23 & 1) * iVar28;
        local_180._8_4_ = (uint)bVar4 * iVar94 | (uint)!bVar4 * local_180._8_4_;
        local_180._12_4_ = (uint)bVar33 * iVar32 | (uint)!bVar33 * local_180._12_4_;
        local_180._16_4_ = (uint)!(bool)(bVar23 >> 4 & 1) * local_180._16_4_;
        local_180._20_4_ = (uint)!(bool)(bVar23 >> 5 & 1) * local_180._20_4_;
        local_180._24_4_ = (uint)!(bool)(bVar23 >> 6 & 1) * local_180._24_4_;
        local_180._28_4_ = (uint)!(bool)(bVar23 >> 7) * local_180._28_4_;
        bVar4 = (bool)(bVar23 >> 2 & 1);
        bVar33 = (bool)(bVar23 >> 3 & 1);
        local_160._4_4_ = (uint)(bVar23 >> 1 & 1) * iVar93;
        local_160._0_4_ = (uint)(bVar23 & 1) * iVar28;
        local_160._8_4_ = (uint)bVar4 * iVar94 | (uint)!bVar4 * local_160._8_4_;
        local_160._12_4_ = (uint)bVar33 * iVar32 | (uint)!bVar33 * local_160._12_4_;
        local_160._16_4_ = (uint)!(bool)(bVar23 >> 4 & 1) * local_160._16_4_;
        local_160._20_4_ = (uint)!(bool)(bVar23 >> 5 & 1) * local_160._20_4_;
        local_160._24_4_ = (uint)!(bool)(bVar23 >> 6 & 1) * local_160._24_4_;
        local_160._28_4_ = (uint)!(bool)(bVar23 >> 7) * local_160._28_4_;
        bVar4 = (bool)(bVar23 >> 2 & 1);
        bVar33 = (bool)(bVar23 >> 3 & 1);
        local_140._4_4_ = (uint)(bVar23 >> 1 & 1) * iVar93;
        local_140._0_4_ = (uint)(bVar23 & 1) * iVar28;
        local_140._8_4_ = (uint)bVar4 * iVar94 | (uint)!bVar4 * local_140._8_4_;
        local_140._12_4_ = (uint)bVar33 * iVar32 | (uint)!bVar33 * local_140._12_4_;
        local_140._16_4_ = (uint)!(bool)(bVar23 >> 4 & 1) * local_140._16_4_;
        local_140._20_4_ = (uint)!(bool)(bVar23 >> 5 & 1) * local_140._20_4_;
        local_140._24_4_ = (uint)!(bool)(bVar23 >> 6 & 1) * local_140._24_4_;
        local_140._28_4_ = (uint)!(bool)(bVar23 >> 7) * local_140._28_4_;
        local_120 = (bVar23 & 1) * __real_3f800000 | !(bool)(bVar23 & 1) * local_120;
        bVar4 = (bool)(bVar23 >> 1 & 1);
        uStack_11c = bVar4 * __real_3f800000 | !bVar4 * uStack_11c;
        bVar4 = (bool)(bVar23 >> 2 & 1);
        uStack_118 = bVar4 * __real_3f800000 | !bVar4 * uStack_118;
        bVar4 = (bool)(bVar23 >> 3 & 1);
        uStack_114 = bVar4 * __real_3f800000 | !bVar4 * uStack_114;
        bVar4 = (bool)(bVar23 >> 4 & 1);
        uStack_110 = bVar4 * __real_3f800000 | !bVar4 * uStack_110;
        bVar4 = (bool)(bVar23 >> 5 & 1);
        uStack_10c = bVar4 * __real_3f800000 | !bVar4 * uStack_10c;
        bVar4 = (bool)(bVar23 >> 6 & 1);
        uStack_108 = bVar4 * __real_3f800000 | !bVar4 * uStack_108;
        uStack_104 = (bVar23 >> 7) * __real_3f800000 | !(bool)(bVar23 >> 7) * uStack_104;
      }
    }
  }
  auVar63 = vhaddps_avx(local_300,local_300);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar65 = vhaddps_avx(local_2e0,local_2e0);
  fVar96 = auVar63._0_4_ + auVar63._16_4_;
  auVar63 = vhaddps_avx(auVar65,auVar65);
  auVar65 = vhaddps_avx(local_2c0,local_2c0);
  auVar65 = vhaddps_avx(auVar65,auVar65);
  auVar37 = vaddss_avx512f(auVar63._0_16_,auVar63._16_16_);
  fVar98 = auVar65._0_4_ + auVar65._16_4_;
  auVar63 = vhaddps_avx(local_2a0,local_2a0);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar41 = vextractf32x4_avx512vl(auVar63,1);
  auVar65 = vhaddps_avx(_local_280,_local_280);
  auVar65 = vhaddps_avx(auVar65,auVar65);
  auVar38 = vaddss_avx512f(auVar63._0_16_,auVar41);
  auVar63 = vhaddps_avx(local_260,local_260);
  auVar41 = vextractf32x4_avx512vl(auVar65,1);
  auVar39 = vaddss_avx512f(auVar65._0_16_,auVar41);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar41 = vextractf32x4_avx512vl(auVar63,1);
  auVar40 = vaddss_avx512f(auVar63._0_16_,auVar41);
  auVar63 = vhaddps_avx(local_240,local_240);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar41 = vextractf32x4_avx512vl(auVar63,1);
  auVar65 = vhaddps_avx(local_220,local_220);
  auVar65 = vhaddps_avx(auVar65,auVar65);
  auVar42 = vaddss_avx512f(auVar63._0_16_,auVar41);
  auVar63 = vhaddps_avx(_local_200,_local_200);
  auVar41 = vextractf32x4_avx512vl(auVar65,1);
  auVar43 = vaddss_avx512f(auVar65._0_16_,auVar41);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar41 = vextractf32x4_avx512vl(auVar63,1);
  auVar44 = vaddss_avx512f(auVar63._0_16_,auVar41);
  auVar63 = vhaddps_avx(_local_1e0,_local_1e0);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar41 = vextractf32x4_avx512vl(auVar63,1);
  auVar65 = vhaddps_avx(local_1c0,local_1c0);
  auVar65 = vhaddps_avx(auVar65,auVar65);
  auVar45 = vaddss_avx512f(auVar63._0_16_,auVar41);
  auVar63 = vhaddps_avx(local_1a0,local_1a0);
  auVar41 = vextractf32x4_avx512vl(auVar65,1);
  auVar46 = vaddss_avx512f(auVar65._0_16_,auVar41);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar41 = vextractf32x4_avx512vl(auVar63,1);
  auVar47 = vaddss_avx512f(auVar63._0_16_,auVar41);
  auVar63 = vhaddps_avx(local_180,local_180);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar41 = vextractf32x4_avx512vl(auVar63,1);
  auVar65 = vhaddps_avx(local_160,local_160);
  auVar65 = vhaddps_avx(auVar65,auVar65);
  auVar48 = vaddss_avx512f(auVar63._0_16_,auVar41);
  auVar63 = vhaddps_avx(local_140,local_140);
  auVar41 = vextractf32x4_avx512vl(auVar65,1);
  auVar49 = vaddss_avx512f(auVar65._0_16_,auVar41);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar41 = vextractf32x4_avx512vl(auVar63,1);
  auVar50 = vaddss_avx512f(auVar63._0_16_,auVar41);
  auVar16._4_4_ = uStack_11c;
  auVar16._0_4_ = local_120;
  auVar16._8_4_ = uStack_118;
  auVar16._12_4_ = uStack_114;
  auVar16._16_4_ = uStack_110;
  auVar16._20_4_ = uStack_10c;
  auVar16._24_4_ = uStack_108;
  auVar16._28_4_ = uStack_104;
  auVar63 = vhaddps_avx(auVar16,auVar16);
  auVar63 = vhaddps_avx(auVar63,auVar63);
  auVar41 = vextractf32x4_avx512vl(auVar63,1);
  auVar51 = vaddss_avx512f(auVar63._0_16_,auVar41);
  auVar41 = vinsertps_avx512f(ZEXT416((uint)fVar98),auVar38,0x10);
  auVar41 = vinsertps_avx512f(auVar41,auVar42,0x20);
  auVar35 = vinsertps_avx512f(auVar41,auVar43,0x30);
  auVar41 = vinsertps_avx512f(auVar44,auVar45,0x10);
  auVar41 = vinsertps_avx512f(auVar41,auVar48,0x20);
  auVar60 = vinsertps_avx512f(auVar41,auVar49,0x30);
  auVar41 = vinsertps_avx512f(ZEXT416((uint)fVar96),ZEXT416((uint)fVar98),0x10);
  auVar41 = vinsertps_avx512f(auVar41,auVar44,0x20);
  auVar41 = vinsertps_avx512f(auVar41,auVar46,0x30);
  auVar53 = vinsertps_avx512f(auVar40,auVar43,0x10);
  auVar53 = vinsertps_avx512f(auVar53,auVar49,0x20);
  auVar53 = vinsertps_avx512f(auVar53,auVar51,0x30);
  auVar52 = vinsertps_avx512f(auVar37,auVar38,0x10);
  auVar52 = vinsertps_avx512f(auVar52,auVar45,0x20);
  auVar52 = vinsertps_avx512f(auVar52,auVar47,0x30);
  auVar36 = vinsertps_avx512f(auVar39,auVar42,0x10);
  auVar36 = vinsertps_avx512f(auVar36,auVar48,0x20);
  auVar36 = vinsertps_avx512f(auVar36,auVar50,0x30);
  auVar52 = vmulps_avx512vl(auVar52,auVar36);
  auVar53 = vfmsub231ps_avx512vl(auVar52,auVar41,auVar53);
  auVar52 = vbroadcastss_avx512vl(auVar53);
  auVar36 = vshufps_avx512vl(auVar53,auVar53,0x55);
  auVar54 = vshufps_avx512vl(auVar53,auVar53,0xaa);
  auVar55 = vshufps_avx512vl(auVar53,auVar53,0xff);
  auVar56 = vshufps_avx512vl(auVar51,auVar46,0);
  auVar57 = vshufps_avx512vl(auVar47,auVar50,0);
  auVar41 = vinsertps_avx512f(auVar48,auVar49,0x10);
  auVar41 = vinsertps_avx512f(auVar41,auVar44,0x20);
  auVar41 = vinsertps_avx512f(auVar41,auVar45,0x30);
  auVar58._0_4_ = auVar41._0_4_ * auVar57._0_4_;
  auVar58._4_4_ = auVar41._4_4_ * auVar57._4_4_;
  auVar58._8_4_ = auVar41._8_4_ * auVar57._8_4_;
  auVar58._12_4_ = auVar41._12_4_ * auVar57._12_4_;
  auVar56 = vfmsub231ps_avx512vl(auVar58,auVar60,auVar56);
  auVar57 = vshufps_avx512vl(auVar40,ZEXT416((uint)fVar96),0);
  auVar58 = vshufps_avx512vl(auVar37,auVar39,0);
  auVar41 = vinsertps_avx512f(auVar42,auVar43,0x10);
  auVar41 = vinsertps_avx(auVar41,ZEXT416((uint)fVar98),0x20);
  auVar41 = vinsertps_avx(auVar41,auVar38,0x30);
  auVar59._0_4_ = auVar58._0_4_ * auVar41._0_4_;
  auVar59._4_4_ = auVar58._4_4_ * auVar41._4_4_;
  auVar59._8_4_ = auVar58._8_4_ * auVar41._8_4_;
  auVar59._12_4_ = auVar58._12_4_ * auVar41._12_4_;
  auVar57 = vfmsub231ps_avx512vl(auVar59,auVar35,auVar57);
  auVar41._0_4_ = auVar36._0_4_ * auVar54._0_4_;
  auVar41._4_4_ = auVar36._4_4_ * auVar54._4_4_;
  auVar41._8_4_ = auVar36._8_4_ * auVar54._8_4_;
  auVar41._12_4_ = auVar36._12_4_ * auVar54._12_4_;
  auVar41 = vfmadd231ps_avx512vl(auVar41,auVar52,auVar55);
  auVar58 = vshufps_avx512vl(auVar56,auVar56,0xd8);
  auVar58 = vmulps_avx512vl(auVar57,auVar58);
  auVar59 = vshufpd_avx512vl(auVar58,auVar58,1);
  auVar58 = vaddps_avx512vl(auVar58,auVar59);
  auVar59 = vshufps_avx512vl(auVar58,auVar58,0x39);
  auVar59 = vaddps_avx512vl(auVar58,auVar59);
  auVar41 = vsubps_avx(auVar41,auVar59);
  if ((auVar41._0_4_ != 0.0) ||
     (auVar63 = ___ymm_3f800000000000000000000000000000000000003f8000000000000000000000,
     auVar65 = ___ymm_00000000000000003f800000000000000000000000000000000000003f800000,
     NAN(auVar41._0_4_))) {
    auVar59 = vinsertps_avx512f(ZEXT416((uint)fVar96),auVar37,0x10);
    auVar59 = vinsertps_avx512f(auVar59,auVar39,0x20);
    auVar14 = vinsertps_avx512f(auVar59,auVar40,0x30);
    auVar59 = vshufps_avx(auVar56,auVar56,0x33);
    auVar37 = vinsertps_avx512f(auVar37,ZEXT416((uint)fVar96),0x10);
    auVar37 = vinsertps_avx512f(auVar37,auVar40,0x20);
    auVar37 = vinsertps_avx512f(auVar37,auVar39,0x30);
    auVar40 = vshufps_avx512vl(auVar56,auVar56,0x66);
    auVar37 = vmulps_avx512vl(auVar37,auVar40);
    auVar39._0_4_ = auVar14._0_4_ * auVar59._0_4_ - auVar37._0_4_;
    auVar39._4_4_ = auVar14._4_4_ * auVar59._4_4_ - auVar37._4_4_;
    auVar39._8_4_ = auVar14._8_4_ * auVar59._8_4_ - auVar37._8_4_;
    auVar39._12_4_ = auVar14._12_4_ * auVar59._12_4_ - auVar37._12_4_;
    auVar54 = vfmsub213ps_avx512vl(auVar54,auVar35,auVar39);
    auVar37 = vinsertps_avx512f(auVar46,auVar47,0x10);
    auVar37 = vinsertps_avx(auVar37,auVar50,0x20);
    auVar37 = vinsertps_avx(auVar37,auVar51,0x30);
    auVar59 = vshufps_avx512vl(auVar57,auVar57,0x33);
    auVar39 = vinsertps_avx512f(auVar47,auVar46,0x10);
    auVar39 = vinsertps_avx512f(auVar39,auVar51,0x20);
    auVar39 = vinsertps_avx512f(auVar39,auVar50,0x30);
    auVar46 = vshufps_avx512vl(auVar57,auVar57,0x66);
    auVar39 = vmulps_avx512vl(auVar46,auVar39);
    auVar39 = vfmsub231ps_avx512vl(auVar39,auVar37,auVar59);
    auVar39 = vfmsub213ps_avx512vl(auVar36,auVar60,auVar39);
    auVar47 = vshufps_avx512vl(auVar57,auVar57,0xcc);
    auVar36 = vinsertps_avx512f(auVar45,auVar44,0x10);
    auVar36 = vinsertps_avx512f(auVar36,auVar49,0x20);
    auVar36 = vinsertps_avx512f(auVar36,auVar48,0x30);
    auVar36 = vmulps_avx512vl(auVar46,auVar36);
    auVar60 = vfmadd231ps_avx512vl(auVar36,auVar60,auVar47);
    auVar36 = vfmsub213ps_avx512vl(auVar52,auVar37,auVar60);
    auVar52 = vshufps_avx(auVar56,auVar56,0xcc);
    auVar60 = vinsertps_avx(auVar38,ZEXT416((uint)fVar98),0x10);
    auVar60 = vinsertps_avx512f(auVar60,auVar43,0x20);
    auVar60 = vinsertps_avx512f(auVar60,auVar42,0x30);
    auVar60 = vmulps_avx512vl(auVar60,auVar40);
    auVar35 = vfmadd231ps_avx512vl(auVar60,auVar35,auVar52);
    auVar35 = vfmsub231ps_avx512vl(auVar35,auVar55,auVar14);
    auVar41 = vdivps_avx(___xmm_3f800000bf800000bf8000003f800000,auVar41);
    auVar60 = vmulps_avx512vl(auVar39,auVar41);
    auVar52 = vmulps_avx512vl(auVar36,auVar41);
    auVar65 = vpermt2ps_avx512vl(ZEXT1632(CONCAT412(auVar35._12_4_ * auVar41._12_4_,
                                                    CONCAT48(auVar35._8_4_ * auVar41._8_4_,
                                                             CONCAT44(auVar35._4_4_ * auVar41._4_4_,
                                                                      auVar35._0_4_ * auVar41._0_4_)
                                                            ))),
                                 ___ymm_000000080000000a0000000000000002000000090000000b0000000100000003
                                 ,ZEXT1632(auVar60));
    auVar63 = vpermt2ps_avx512vl(ZEXT1632(CONCAT412(auVar54._12_4_ * auVar41._12_4_,
                                                    CONCAT48(auVar54._8_4_ * auVar41._8_4_,
                                                             CONCAT44(auVar54._4_4_ * auVar41._4_4_,
                                                                      auVar54._0_4_ * auVar41._0_4_)
                                                            ))),
                                 ___ymm_000000080000000a0000000000000002000000090000000b0000000100000003
                                 ,ZEXT1632(auVar52));
  }
  auVar64 = vhaddps_avx(local_3e0,local_3e0);
  auVar64 = vhaddps_avx(auVar64,auVar64);
  auVar61 = vhaddps_avx(local_400,local_400);
  fVar96 = auVar64._0_4_ + auVar64._16_4_;
  auVar64 = vhaddps_avx(auVar61,auVar61);
  fVar98 = auVar64._0_4_ + auVar64._16_4_;
  auVar64 = vhaddps_avx(local_420,local_420);
  auVar64 = vhaddps_avx(auVar64,auVar64);
  fVar99 = auVar64._0_4_ + auVar64._16_4_;
  auVar36._0_4_ =
       auVar63._16_4_ * 0.0 + auVar63._0_4_ * fVar96 +
       fVar98 * auVar65._16_4_ + auVar65._0_4_ * fVar99;
  auVar36._4_4_ =
       auVar63._20_4_ * 0.0 + auVar63._4_4_ * fVar96 +
       fVar98 * auVar65._20_4_ + auVar65._4_4_ * fVar99;
  auVar36._8_4_ =
       auVar63._24_4_ * 0.0 + auVar63._8_4_ * fVar96 +
       fVar98 * auVar65._24_4_ + auVar65._8_4_ * fVar99;
  auVar36._12_4_ =
       auVar63._28_4_ * 0.0 + auVar63._12_4_ * fVar96 +
       fVar98 * auVar65._28_4_ + auVar65._12_4_ * fVar99;
  auVar41 = vmovshdup_avx(auVar36);
  auVar35 = vshufpd_avx(auVar36,auVar36,1);
  auVar60 = vmovshdup_avx512vl(auVar53);
  auVar52 = vshufpd_avx512vl(auVar53,auVar53,1);
  auVar60 = vfmadd213ss_avx512f(auVar55,auVar53,ZEXT416((uint)(auVar60._0_4_ * auVar52._0_4_)));
  auVar53 = vmovshdup_avx512vl(auVar58);
  auVar53 = vaddss_avx512f(auVar58,auVar53);
  auVar60 = vsubss_avx512f(auVar60,auVar53);
  bVar4 = __real_322bcc77 <= auVar60._0_4_;
  bVar33 = (~(uint)auVar60._0_4_ & 0x7f800000) != 0;
  *param_3 = (uint)(bVar33 && bVar4) * (int)auVar36._0_4_;
  param_3[1] = (uint)(bVar33 && bVar4) * auVar41._0_4_;
  param_3[2] = (uint)(bVar33 && bVar4) * auVar35._0_4_;
  return;
}


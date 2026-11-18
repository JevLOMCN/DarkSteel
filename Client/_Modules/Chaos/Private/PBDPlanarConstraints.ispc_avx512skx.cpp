// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplyPBDPlanarConstraintsWithFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuni_avx512skx @ 1402ff5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsWithFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,longlong param_6,undefined4 param_7,float param_8,uint param_9)

{
  longlong lVar1;
  undefined1 (*pauVar2) [32];
  undefined1 *puVar3;
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
  undefined8 uVar25;
  undefined8 uVar26;
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
  undefined1 *unaff_RBX;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  longlong unaff_R13;
  longlong lVar43;
  uint uVar44;
  byte bVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
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
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
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
  undefined1 auVar83 [32];
  undefined1 auVar84 [16];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar85 [32];
  float fVar86;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar87 [32];
  undefined1 auVar95 [32];
  undefined1 in_ZMM13 [64];
  undefined1 auVar96 [16];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar97 [16];
  undefined1 in_ZMM21 [64];
  undefined1 auVar98 [16];
  undefined1 in_ZMM22 [64];
  undefined1 auVar99 [16];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM28 [64];
  uint local_1a0 [4];
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
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_68 [16];
  
  auVar99 = in_ZMM23._0_16_;
  auVar96 = in_ZMM16._0_16_;
  auVar51 = in_ZMM22._0_16_;
  auVar50 = in_ZMM21._0_16_;
  auVar48 = in_ZMM20._0_16_;
  puVar3 = local_120 + 8;
  local_68 = in_ZMM13._0_16_;
  local_c8 = in_ZMM7._0_16_;
  local_d8 = in_ZMM6._0_16_;
  uVar42 = (ulonglong)param_9;
  uVar41 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar41 = param_9;
  }
  uVar41 = uVar41 & 0xfffffff8;
  auVar97 = __ymm_00000054000000480000003c0000003000000024000000180000000c00000000._0_16_;
  auVar98 = __ymm_000000580000004c0000004000000034000000280000001c0000001000000004._0_16_;
  if ((int)uVar41 < 1) {
    uVar39 = 0;
  }
  else {
    unaff_RBX = local_120;
    auVar66._4_4_ = param_7;
    auVar66._0_4_ = param_7;
    auVar66._8_4_ = param_7;
    auVar66._12_4_ = param_7;
    auVar66._16_4_ = param_7;
    auVar66._20_4_ = param_7;
    auVar66._24_4_ = param_7;
    auVar66._28_4_ = param_7;
    uVar40 = 0;
    auVar84._0_12_ = ZEXT812(0);
    auVar84._12_4_ = 0;
    auVar67._4_4_ = __real_00000004;
    auVar67._0_4_ = __real_00000004;
    auVar67._8_4_ = __real_00000004;
    auVar67._12_4_ = __real_00000004;
    auVar67._16_4_ = __real_00000004;
    auVar67._20_4_ = __real_00000004;
    auVar67._24_4_ = __real_00000004;
    auVar67._28_4_ = __real_00000004;
    auVar52 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar96 = auVar52._0_16_;
    vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar48 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar99 = __ymm_0000005c0000005000000044000000380000002c000000200000001400000008._0_16_;
    lVar43 = 0;
    uVar44 = 0;
    do {
      auVar55 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_3 + (ulonglong)uVar44));
      vpslld_avx512vl(auVar55,4);
      local_140 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      local_120 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      local_100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar56 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar42));
      in_ZMM28 = ZEXT3264(auVar56);
      uVar25 = vcmpps_avx512vl(auVar56,ZEXT1632(auVar84),8);
      if ((char)uVar25 == '\0') {
        auVar59 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar43);
        auVar64 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar43);
        auVar62 = vblendps_avx(auVar59,*(undefined1 (*) [32])(param_4 + lVar43),0x24);
        auVar57 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_4 + lVar43),
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar59);
        auVar58 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar64);
        auVar59 = vpermt2ps_avx512vl(auVar64,
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar59);
        auVar60 = vinsertf32x4_avx512vl(auVar57,auVar59._0_16_,1);
        auVar57 = vshuff64x2_avx512vl(auVar57,auVar59,3);
        auVar59 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar43);
        auVar64 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar43);
        auVar62 = vblendps_avx(auVar59,*(undefined1 (*) [32])(param_5 + lVar43),0x24);
        auVar61 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_5 + lVar43),
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar59);
        auVar62 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar64);
        auVar59 = vpermt2ps_avx512vl(auVar64,
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar59);
        auVar63 = vinsertf32x4_avx512vl(auVar61,auVar59._0_16_,1);
        auVar61 = vshuff64x2_avx512vl(auVar61,auVar59,3);
        auVar59 = vsubps_avx(auVar60,local_140);
        auVar57 = vsubps_avx512vl(auVar57,local_120);
        auVar64 = vsubps_avx(auVar58,local_100);
        auVar57 = vmulps_avx512vl(auVar61,auVar57);
        auVar59 = vfmadd231ps_avx512vl(auVar57,auVar63,auVar59);
        auVar59 = vfmadd231ps_avx512vl(auVar59,auVar62,auVar64);
        uVar46 = vcmpps_avx512vl(ZEXT1632(auVar84),auVar59,1);
        uVar47 = vcmpps_avx512vl(auVar56,ZEXT1632(auVar84),4);
        uVar46 = uVar46 & uVar47;
        bVar45 = (byte)uVar46;
        if (bVar45 != 0) {
          auVar64 = vfmadd231ps_avx512vl(local_140,auVar63,auVar59);
          auVar57 = vfmadd231ps_avx512vl(local_120,auVar61,auVar59);
          local_140._0_4_ =
               (uint)(bVar45 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar45 & 1) * local_140._0_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          local_140._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_140._4_4_;
          bVar4 = (bool)((byte)(uVar46 >> 2) & 1);
          local_140._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * local_140._8_4_;
          bVar4 = (bool)((byte)(uVar46 >> 3) & 1);
          local_140._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * local_140._12_4_;
          bVar4 = (bool)((byte)(uVar46 >> 4) & 1);
          local_140._16_4_ = (uint)bVar4 * auVar64._16_4_ | (uint)!bVar4 * local_140._16_4_;
          bVar4 = (bool)((byte)(uVar46 >> 5) & 1);
          local_140._20_4_ = (uint)bVar4 * auVar64._20_4_ | (uint)!bVar4 * local_140._20_4_;
          bVar4 = (bool)((byte)(uVar46 >> 6) & 1);
          local_140._24_4_ = (uint)bVar4 * auVar64._24_4_ | (uint)!bVar4 * local_140._24_4_;
          bVar4 = SUB81(uVar46 >> 7,0);
          local_140._28_4_ = (uint)bVar4 * auVar64._28_4_ | (uint)!bVar4 * local_140._28_4_;
          auVar64 = vfmadd231ps_avx512vl(local_100,auVar62,auVar59);
          local_120._0_4_ =
               (uint)(bVar45 & 1) * auVar57._0_4_ | (uint)!(bool)(bVar45 & 1) * local_120._0_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          local_120._4_4_ = (uint)bVar4 * auVar57._4_4_ | (uint)!bVar4 * local_120._4_4_;
          bVar4 = (bool)((byte)(uVar46 >> 2) & 1);
          local_120._8_4_ = (uint)bVar4 * auVar57._8_4_ | (uint)!bVar4 * local_120._8_4_;
          bVar4 = (bool)((byte)(uVar46 >> 3) & 1);
          local_120._12_4_ = (uint)bVar4 * auVar57._12_4_ | (uint)!bVar4 * local_120._12_4_;
          bVar4 = (bool)((byte)(uVar46 >> 4) & 1);
          local_120._16_4_ = (uint)bVar4 * auVar57._16_4_ | (uint)!bVar4 * local_120._16_4_;
          bVar4 = (bool)((byte)(uVar46 >> 5) & 1);
          local_120._20_4_ = (uint)bVar4 * auVar57._20_4_ | (uint)!bVar4 * local_120._20_4_;
          bVar4 = (bool)((byte)(uVar46 >> 6) & 1);
          local_120._24_4_ = (uint)bVar4 * auVar57._24_4_ | (uint)!bVar4 * local_120._24_4_;
          bVar4 = SUB81(uVar46 >> 7,0);
          local_120._28_4_ = (uint)bVar4 * auVar57._28_4_ | (uint)!bVar4 * local_120._28_4_;
          local_100._0_4_ =
               (uint)(bVar45 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar45 & 1) * local_100._0_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          local_100._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_100._4_4_;
          bVar4 = (bool)((byte)(uVar46 >> 2) & 1);
          local_100._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * local_100._8_4_;
          bVar4 = (bool)((byte)(uVar46 >> 3) & 1);
          local_100._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * local_100._12_4_;
          bVar4 = (bool)((byte)(uVar46 >> 4) & 1);
          local_100._16_4_ = (uint)bVar4 * auVar64._16_4_ | (uint)!bVar4 * local_100._16_4_;
          bVar4 = (bool)((byte)(uVar46 >> 5) & 1);
          local_100._20_4_ = (uint)bVar4 * auVar64._20_4_ | (uint)!bVar4 * local_100._20_4_;
          bVar4 = (bool)((byte)(uVar46 >> 6) & 1);
          local_100._24_4_ = (uint)bVar4 * auVar64._24_4_ | (uint)!bVar4 * local_100._24_4_;
          bVar4 = SUB81(uVar46 >> 7,0);
          local_100._28_4_ = (uint)bVar4 * auVar64._28_4_ | (uint)!bVar4 * local_100._28_4_;
          if (bVar45 == 0xff) {
            auVar64 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar43);
            auVar57 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar43);
            auVar58 = vblendps_avx(auVar64,*(undefined1 (*) [32])(param_6 + lVar43),0x24);
            auVar65 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_6 + lVar43),
                                         ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                         ,auVar64);
            auVar60 = vpermt2ps_avx512vl(auVar58,
                                         ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                         ,auVar57);
            auVar64 = vpermt2ps_avx512vl(auVar57,
                                         ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                         ,auVar64);
            auVar57._16_16_ = auVar64._0_16_;
            auVar57._0_16_ = auVar65._0_16_;
            auVar64 = vperm2f128_avx(auVar65,auVar64,0x31);
          }
          else {
            lVar1 = param_6 + lVar43;
            auVar64 = vgatherdps_avx512vl(*(undefined4 *)(puVar3 + lVar1));
            auVar57._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar64._4_4_;
            auVar57._0_4_ = (uint)(bVar45 & 1) * auVar64._0_4_;
            auVar57._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar64._8_4_;
            auVar57._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar64._12_4_;
            auVar57._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar64._16_4_;
            auVar57._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar64._20_4_;
            auVar57._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar64._24_4_;
            auVar57._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar64._28_4_;
            auVar58 = vgatherdps_avx512vl(*(undefined4 *)(lVar1 + uVar40));
            auVar64._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar58._4_4_;
            auVar64._0_4_ = (uint)(bVar45 & 1) * auVar58._0_4_;
            auVar64._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar58._8_4_;
            auVar64._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar58._12_4_;
            auVar64._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar58._16_4_;
            auVar64._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar58._20_4_;
            auVar64._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar58._24_4_;
            auVar64._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar58._28_4_;
            auVar58 = vgatherdps_avx512vl(*(undefined4 *)(lVar1 + (ulonglong)uVar41));
            auVar60._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar58._4_4_;
            auVar60._0_4_ = (uint)(bVar45 & 1) * auVar58._0_4_;
            auVar60._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar58._8_4_;
            auVar60._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar58._12_4_;
            auVar60._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar58._16_4_;
            auVar60._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar58._20_4_;
            auVar60._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar58._24_4_;
            auVar60._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar58._28_4_;
          }
          auVar58 = vpaddd_avx512vl(auVar55,auVar55);
          vpaddd_avx512vl(auVar55,auVar58);
          auVar65 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42 * 4));
          auVar58._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar65._4_4_;
          auVar58._0_4_ = (uint)(bVar45 & 1) * auVar65._0_4_;
          auVar58._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar65._8_4_;
          auVar58._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar65._12_4_;
          auVar58._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar65._16_4_;
          auVar58._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar65._20_4_;
          auVar58._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar65._24_4_;
          auVar58._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar65._28_4_;
          auVar65 = vpslld_avx512vl(auVar55,2);
          auVar55 = vpslld_avx512vl(auVar55,3);
          auVar55 = vpaddd_avx512vl(auVar55,auVar65);
          vpaddd_avx512vl(auVar55,auVar67);
          auVar65 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42));
          auVar53._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar65._4_4_;
          auVar53._0_4_ = (uint)(bVar45 & 1) * auVar65._0_4_;
          auVar53._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar65._8_4_;
          auVar53._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar65._12_4_;
          auVar53._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar65._16_4_;
          auVar53._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar65._20_4_;
          auVar53._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar65._24_4_;
          auVar53._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar65._28_4_;
          vpaddd_avx512vl(auVar55,auVar52);
          auVar55 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_R13));
          auVar65._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar55._4_4_;
          auVar65._0_4_ = (uint)(bVar45 & 1) * auVar55._0_4_;
          auVar65._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar55._8_4_;
          auVar65._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar55._12_4_;
          auVar65._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar55._16_4_;
          auVar65._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar55._20_4_;
          auVar65._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar55._24_4_;
          auVar65._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar55._28_4_;
          auVar54 = vsubps_avx512vl(local_140,auVar58);
          auVar55 = vsubps_avx(local_120,auVar53);
          auVar58 = vsubps_avx(local_100,auVar65);
          fVar86 = -(param_8 * auVar57._0_4_) + auVar54._0_4_;
          fVar88 = -(param_8 * auVar57._4_4_) + auVar54._4_4_;
          fVar89 = -(param_8 * auVar57._8_4_) + auVar54._8_4_;
          fVar90 = -(param_8 * auVar57._12_4_) + auVar54._12_4_;
          fVar91 = -(param_8 * auVar57._16_4_) + auVar54._16_4_;
          fVar92 = -(param_8 * auVar57._20_4_) + auVar54._20_4_;
          fVar93 = -(param_8 * auVar57._24_4_) + auVar54._24_4_;
          fVar94 = -(param_8 * auVar57._28_4_) + auVar54._28_4_;
          auVar95._0_4_ = -(param_8 * auVar64._0_4_) + auVar55._0_4_;
          auVar95._4_4_ = -(param_8 * auVar64._4_4_) + auVar55._4_4_;
          auVar95._8_4_ = -(param_8 * auVar64._8_4_) + auVar55._8_4_;
          auVar95._12_4_ = -(param_8 * auVar64._12_4_) + auVar55._12_4_;
          auVar95._16_4_ = -(param_8 * auVar64._16_4_) + auVar55._16_4_;
          auVar95._20_4_ = -(param_8 * auVar64._20_4_) + auVar55._20_4_;
          auVar95._24_4_ = -(param_8 * auVar64._24_4_) + auVar55._24_4_;
          auVar95._28_4_ = -(param_8 * auVar64._28_4_) + auVar55._28_4_;
          auVar85._0_4_ = -(param_8 * auVar60._0_4_) + auVar58._0_4_;
          auVar85._4_4_ = -(param_8 * auVar60._4_4_) + auVar58._4_4_;
          auVar85._8_4_ = -(param_8 * auVar60._8_4_) + auVar58._8_4_;
          auVar85._12_4_ = -(param_8 * auVar60._12_4_) + auVar58._12_4_;
          auVar85._16_4_ = -(param_8 * auVar60._16_4_) + auVar58._16_4_;
          auVar85._20_4_ = -(param_8 * auVar60._20_4_) + auVar58._20_4_;
          auVar85._24_4_ = -(param_8 * auVar60._24_4_) + auVar58._24_4_;
          auVar85._28_4_ = -(param_8 * auVar60._28_4_) + auVar58._28_4_;
          auVar55 = vmulps_avx512vl(auVar61,auVar95);
          auVar54._0_4_ = auVar62._0_4_ * auVar85._0_4_ + auVar63._0_4_ * fVar86 + auVar55._0_4_;
          auVar54._4_4_ = auVar62._4_4_ * auVar85._4_4_ + auVar63._4_4_ * fVar88 + auVar55._4_4_;
          auVar54._8_4_ = auVar62._8_4_ * auVar85._8_4_ + auVar63._8_4_ * fVar89 + auVar55._8_4_;
          auVar54._12_4_ =
               auVar62._12_4_ * auVar85._12_4_ + auVar63._12_4_ * fVar90 + auVar55._12_4_;
          auVar54._16_4_ =
               auVar62._16_4_ * auVar85._16_4_ + auVar63._16_4_ * fVar91 + auVar55._16_4_;
          auVar54._20_4_ =
               auVar62._20_4_ * auVar85._20_4_ + auVar63._20_4_ * fVar92 + auVar55._20_4_;
          auVar54._24_4_ =
               auVar62._24_4_ * auVar85._24_4_ + auVar63._24_4_ * fVar93 + auVar55._24_4_;
          auVar54._28_4_ =
               auVar62._28_4_ * auVar85._28_4_ + auVar63._28_4_ * fVar94 + auVar55._28_4_;
          auVar87._0_4_ = -(auVar54._0_4_ * auVar63._0_4_) + fVar86;
          auVar87._4_4_ = -(auVar54._4_4_ * auVar63._4_4_) + fVar88;
          auVar87._8_4_ = -(auVar54._8_4_ * auVar63._8_4_) + fVar89;
          auVar87._12_4_ = -(auVar54._12_4_ * auVar63._12_4_) + fVar90;
          auVar87._16_4_ = -(auVar54._16_4_ * auVar63._16_4_) + fVar91;
          auVar87._20_4_ = -(auVar54._20_4_ * auVar63._20_4_) + fVar92;
          auVar87._24_4_ = -(auVar54._24_4_ * auVar63._24_4_) + fVar93;
          auVar87._28_4_ = -(auVar54._28_4_ * auVar63._28_4_) + fVar94;
          auVar58 = vfnmadd231ps_avx512vl(auVar95,auVar54,auVar61);
          auVar61._0_4_ = -(auVar62._0_4_ * auVar54._0_4_) + auVar85._0_4_;
          auVar61._4_4_ = -(auVar62._4_4_ * auVar54._4_4_) + auVar85._4_4_;
          auVar61._8_4_ = -(auVar62._8_4_ * auVar54._8_4_) + auVar85._8_4_;
          auVar61._12_4_ = -(auVar62._12_4_ * auVar54._12_4_) + auVar85._12_4_;
          auVar61._16_4_ = -(auVar62._16_4_ * auVar54._16_4_) + auVar85._16_4_;
          auVar61._20_4_ = -(auVar62._20_4_ * auVar54._20_4_) + auVar85._20_4_;
          auVar61._24_4_ = -(auVar62._24_4_ * auVar54._24_4_) + auVar85._24_4_;
          auVar61._28_4_ = -(auVar62._28_4_ * auVar54._28_4_) + auVar85._28_4_;
          auVar55 = vmulps_avx512vl(auVar58,auVar58);
          auVar55 = vfmadd231ps_avx512vl(auVar55,auVar87,auVar87);
          auVar55 = vfmadd231ps_avx512vl(auVar55,auVar61,auVar61);
          auVar62 = vsqrtps_avx512vl(auVar55);
          auVar55 = vmulps_avx512vl(auVar66,auVar59);
          auVar59 = vminps_avx512vl(auVar55,auVar62);
          auVar55._4_4_ = __real_322bcc77;
          auVar55._0_4_ = __real_322bcc77;
          auVar55._8_4_ = __real_322bcc77;
          auVar55._12_4_ = __real_322bcc77;
          auVar55._16_4_ = __real_322bcc77;
          auVar55._20_4_ = __real_322bcc77;
          auVar55._24_4_ = __real_322bcc77;
          auVar55._28_4_ = __real_322bcc77;
          uVar47 = vcmpps_avx512vl(auVar62,auVar55,5);
          auVar55 = vdivps_avx512vl(auVar59,auVar62);
          auVar59._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar55._4_4_;
          auVar59._0_4_ = (uint)((byte)uVar47 & 1) * auVar55._0_4_;
          auVar59._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar55._8_4_;
          auVar59._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar55._12_4_;
          auVar59._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar55._16_4_;
          auVar59._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar55._20_4_;
          auVar59._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar55._24_4_;
          auVar59._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar55._28_4_;
          auVar55 = vfnmadd213ps_avx512vl(auVar87,auVar59,local_140);
          auVar62 = vfnmadd213ps_avx512vl(auVar58,auVar59,local_120);
          auVar59 = vfnmadd213ps_avx512vl(auVar61,auVar59,local_100);
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          bVar5 = (bool)((byte)(uVar46 >> 2) & 1);
          bVar6 = (bool)((byte)(uVar46 >> 3) & 1);
          bVar9 = (bool)((byte)(uVar46 >> 4) & 1);
          bVar13 = (bool)((byte)(uVar46 >> 5) & 1);
          bVar17 = (bool)((byte)(uVar46 >> 6) & 1);
          bVar21 = SUB81(uVar46 >> 7,0);
          local_140._4_4_ = (uint)bVar4 * auVar55._4_4_ | (uint)!bVar4 * local_140._4_4_;
          local_140._0_4_ =
               (uint)(bVar45 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar45 & 1) * local_140._0_4_;
          local_140._8_4_ = (uint)bVar5 * auVar55._8_4_ | (uint)!bVar5 * local_140._8_4_;
          local_140._12_4_ = (uint)bVar6 * auVar55._12_4_ | (uint)!bVar6 * local_140._12_4_;
          local_140._16_4_ = (uint)bVar9 * auVar55._16_4_ | (uint)!bVar9 * local_140._16_4_;
          local_140._20_4_ = (uint)bVar13 * auVar55._20_4_ | (uint)!bVar13 * local_140._20_4_;
          local_140._24_4_ = (uint)bVar17 * auVar55._24_4_ | (uint)!bVar17 * local_140._24_4_;
          local_140._28_4_ = (uint)bVar21 * auVar55._28_4_ | (uint)!bVar21 * local_140._28_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          bVar5 = (bool)((byte)(uVar46 >> 2) & 1);
          bVar6 = (bool)((byte)(uVar46 >> 3) & 1);
          bVar9 = (bool)((byte)(uVar46 >> 4) & 1);
          bVar13 = (bool)((byte)(uVar46 >> 5) & 1);
          bVar17 = (bool)((byte)(uVar46 >> 6) & 1);
          bVar21 = SUB81(uVar46 >> 7,0);
          local_120._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_120._4_4_;
          local_120._0_4_ =
               (uint)(bVar45 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar45 & 1) * local_120._0_4_;
          local_120._8_4_ = (uint)bVar5 * auVar62._8_4_ | (uint)!bVar5 * local_120._8_4_;
          local_120._12_4_ = (uint)bVar6 * auVar62._12_4_ | (uint)!bVar6 * local_120._12_4_;
          local_120._16_4_ = (uint)bVar9 * auVar62._16_4_ | (uint)!bVar9 * local_120._16_4_;
          local_120._20_4_ = (uint)bVar13 * auVar62._20_4_ | (uint)!bVar13 * local_120._20_4_;
          local_120._24_4_ = (uint)bVar17 * auVar62._24_4_ | (uint)!bVar17 * local_120._24_4_;
          local_120._28_4_ = (uint)bVar21 * auVar62._28_4_ | (uint)!bVar21 * local_120._28_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          bVar5 = (bool)((byte)(uVar46 >> 2) & 1);
          bVar6 = (bool)((byte)(uVar46 >> 3) & 1);
          bVar9 = (bool)((byte)(uVar46 >> 4) & 1);
          bVar13 = (bool)((byte)(uVar46 >> 5) & 1);
          bVar17 = (bool)((byte)(uVar46 >> 6) & 1);
          bVar21 = SUB81(uVar46 >> 7,0);
          local_100._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * local_100._4_4_;
          local_100._0_4_ =
               (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * local_100._0_4_;
          local_100._8_4_ = (uint)bVar5 * auVar59._8_4_ | (uint)!bVar5 * local_100._8_4_;
          local_100._12_4_ = (uint)bVar6 * auVar59._12_4_ | (uint)!bVar6 * local_100._12_4_;
          local_100._16_4_ = (uint)bVar9 * auVar59._16_4_ | (uint)!bVar9 * local_100._16_4_;
          local_100._20_4_ = (uint)bVar13 * auVar59._20_4_ | (uint)!bVar13 * local_100._20_4_;
          local_100._24_4_ = (uint)bVar17 * auVar59._24_4_ | (uint)!bVar17 * local_100._24_4_;
          local_100._28_4_ = (uint)bVar21 * auVar59._28_4_ | (uint)!bVar21 * local_100._28_4_;
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar59,uVar46,local_140);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar57,uVar46,local_120);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar64,uVar46,local_100);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar85,uVar46,auVar56);
        }
      }
      uVar44 = uVar44 + 0x20;
      lVar43 = lVar43 + 0x60;
      uVar39 = (int)uVar40 + 8;
      uVar40 = (ulonglong)uVar39;
      auVar50 = auVar97;
      auVar51 = auVar98;
    } while ((int)uVar39 < (int)uVar41);
  }
  if ((int)uVar39 < (int)param_9) {
    auVar52 = vpbroadcastd_avx512vl();
    auVar66 = vpord_avx512vl(auVar52,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
    auVar67 = vpbroadcastd_avx512vl();
    uVar42 = vpcmpgtd_avx512vl(auVar67,auVar66);
    auVar52 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_3 + (int)(uVar39 << 2)));
    bVar45 = (byte)uVar42;
    auVar63._4_4_ = (uint)((byte)(uVar42 >> 1) & 1) * auVar52._4_4_;
    auVar63._0_4_ = (uint)(bVar45 & 1) * auVar52._0_4_;
    auVar63._8_4_ = (uint)((byte)(uVar42 >> 2) & 1) * auVar52._8_4_;
    auVar63._12_4_ = (uint)((byte)(uVar42 >> 3) & 1) * auVar52._12_4_;
    auVar63._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar52._16_4_;
    auVar63._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar52._20_4_;
    auVar63._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar52._24_4_;
    auVar63._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar52._28_4_;
    auVar55 = vpslld_avx512vl(auVar63,4);
    auVar48 = vxorps_avx512vl(auVar48,auVar48);
    auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
    auVar49._0_4_ = (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar48._0_4_;
    bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
    auVar49._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar48._4_4_;
    bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
    auVar49._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar48._8_4_;
    bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
    auVar49._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar48._12_4_;
    auVar52._4_4_ = __real_00000004;
    auVar52._0_4_ = __real_00000004;
    auVar52._8_4_ = __real_00000004;
    auVar52._12_4_ = __real_00000004;
    auVar52._16_4_ = __real_00000004;
    auVar52._20_4_ = __real_00000004;
    auVar52._24_4_ = __real_00000004;
    auVar52._28_4_ = __real_00000004;
    auVar50 = vxorps_avx512vl(auVar50,auVar50);
    auVar64 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)unaff_RBX));
    bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar42 >> 2) & 1);
    bVar9 = (bool)((byte)(uVar42 >> 3) & 1);
    auVar56._4_4_ = __real_00000008;
    auVar56._0_4_ = __real_00000008;
    auVar56._8_4_ = __real_00000008;
    auVar56._12_4_ = __real_00000008;
    auVar56._16_4_ = __real_00000008;
    auVar56._20_4_ = __real_00000008;
    auVar56._24_4_ = __real_00000008;
    auVar56._28_4_ = __real_00000008;
    auVar51 = vxorps_avx512vl(auVar51,auVar51);
    auVar57 = vgatherdps_avx512vl(*param_1);
    auVar48._0_4_ = (uint)(bVar45 & 1) * auVar57._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar51._0_4_;
    bVar5 = (bool)((byte)(uVar42 >> 1) & 1);
    auVar48._4_4_ = (uint)bVar5 * auVar57._4_4_ | (uint)!bVar5 * auVar51._4_4_;
    bVar5 = (bool)((byte)(uVar42 >> 2) & 1);
    auVar48._8_4_ = (uint)bVar5 * auVar57._8_4_ | (uint)!bVar5 * auVar51._8_4_;
    bVar5 = (bool)((byte)(uVar42 >> 3) & 1);
    auVar48._12_4_ = (uint)bVar5 * auVar57._12_4_ | (uint)!bVar5 * auVar51._12_4_;
    auVar62._4_4_ = __real_0000000c;
    auVar62._0_4_ = __real_0000000c;
    auVar62._8_4_ = __real_0000000c;
    auVar62._12_4_ = __real_0000000c;
    auVar62._16_4_ = __real_0000000c;
    auVar62._20_4_ = __real_0000000c;
    auVar62._24_4_ = __real_0000000c;
    auVar62._28_4_ = __real_0000000c;
    auVar51 = vxorps_avx512vl(auVar96,auVar96);
    auVar58 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)puVar3));
    auVar68._0_4_ = (uint)(bVar45 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar51._0_4_;
    bVar5 = (bool)((byte)(uVar42 >> 1) & 1);
    auVar68._4_4_ = (uint)bVar5 * auVar58._4_4_ | (uint)!bVar5 * auVar51._4_4_;
    bVar5 = (bool)((byte)(uVar42 >> 2) & 1);
    auVar68._8_4_ = (uint)bVar5 * auVar58._8_4_ | (uint)!bVar5 * auVar51._8_4_;
    bVar5 = (bool)((byte)(uVar42 >> 3) & 1);
    auVar68._12_4_ = (uint)bVar5 * auVar58._12_4_ | (uint)!bVar5 * auVar51._12_4_;
    auVar68._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar58._16_4_;
    auVar68._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar58._20_4_;
    auVar68._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar58._24_4_;
    auVar68._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar58._28_4_;
    uVar26 = vpcmpd_avx512vl(auVar66,auVar67,5);
    auVar51 = vxorps_avx512vl(auVar99,auVar99);
    local_1a0[0] = (bVar45 & 1) * auVar49._0_4_ | !(bool)(bVar45 & 1) * local_1a0[0];
    bVar5 = (bool)((byte)(uVar42 >> 1) & 1);
    local_1a0[1] = bVar5 * auVar49._4_4_ | !bVar5 * local_1a0[1];
    bVar5 = (bool)((byte)(uVar42 >> 2) & 1);
    local_1a0[2] = bVar5 * auVar49._8_4_ | !bVar5 * local_1a0[2];
    bVar5 = (bool)((byte)(uVar42 >> 3) & 1);
    local_1a0[3] = bVar5 * auVar49._12_4_ | !bVar5 * local_1a0[3];
    bVar5 = (bool)((byte)(uVar42 >> 4) & 1);
    uStack_190 = (uint)bVar5 * (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_ |
                 !bVar5 * uStack_190;
    bVar5 = (bool)((byte)(uVar42 >> 5) & 1);
    uStack_18c = (uint)bVar5 * (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_ |
                 !bVar5 * uStack_18c;
    bVar5 = (bool)((byte)(uVar42 >> 6) & 1);
    uStack_188 = (uint)bVar5 * (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_ |
                 !bVar5 * uStack_188;
    bVar5 = SUB81(uVar42 >> 7,0);
    uStack_184 = (uint)bVar5 * (uint)(byte)(uVar42 >> 7) * auVar59._28_4_ | !bVar5 * uStack_184;
    local_180 = (uint)(bVar45 & 1) *
                ((uint)(bVar45 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_) |
                !(bool)(bVar45 & 1) * local_180;
    bVar5 = (bool)((byte)(uVar42 >> 1) & 1);
    uStack_17c = (uint)bVar5 * ((uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar50._4_4_) |
                 !bVar5 * uStack_17c;
    bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
    uStack_178 = (uint)bVar4 * ((uint)bVar6 * auVar64._8_4_ | (uint)!bVar6 * auVar50._8_4_) |
                 !bVar4 * uStack_178;
    bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
    uStack_174 = (uint)bVar4 * ((uint)bVar9 * auVar64._12_4_ | (uint)!bVar9 * auVar50._12_4_) |
                 !bVar4 * uStack_174;
    bVar4 = (bool)((byte)(uVar42 >> 4) & 1);
    uStack_170 = (uint)bVar4 * (uint)((byte)(uVar42 >> 4) & 1) * auVar64._16_4_ |
                 !bVar4 * uStack_170;
    bVar4 = (bool)((byte)(uVar42 >> 5) & 1);
    uStack_16c = (uint)bVar4 * (uint)((byte)(uVar42 >> 5) & 1) * auVar64._20_4_ |
                 !bVar4 * uStack_16c;
    bVar4 = (bool)((byte)(uVar42 >> 6) & 1);
    uStack_168 = (uint)bVar4 * (uint)((byte)(uVar42 >> 6) & 1) * auVar64._24_4_ |
                 !bVar4 * uStack_168;
    bVar4 = SUB81(uVar42 >> 7,0);
    uStack_164 = (uint)bVar4 * (uint)(byte)(uVar42 >> 7) * auVar64._28_4_ | !bVar4 * uStack_164;
    local_160 = (bVar45 & 1) * auVar48._0_4_ | !(bool)(bVar45 & 1) * local_160;
    bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
    uStack_15c = bVar4 * auVar48._4_4_ | !bVar4 * uStack_15c;
    bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
    uStack_158 = bVar4 * auVar48._8_4_ | !bVar4 * uStack_158;
    bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
    uStack_154 = bVar4 * auVar48._12_4_ | !bVar4 * uStack_154;
    bVar4 = (bool)((byte)(uVar42 >> 4) & 1);
    uStack_150 = (uint)bVar4 * (uint)((byte)(uVar42 >> 4) & 1) * auVar57._16_4_ |
                 !bVar4 * uStack_150;
    bVar4 = (bool)((byte)(uVar42 >> 5) & 1);
    uStack_14c = (uint)bVar4 * (uint)((byte)(uVar42 >> 5) & 1) * auVar57._20_4_ |
                 !bVar4 * uStack_14c;
    bVar4 = (bool)((byte)(uVar42 >> 6) & 1);
    uStack_148 = (uint)bVar4 * (uint)((byte)(uVar42 >> 6) & 1) * auVar57._24_4_ |
                 !bVar4 * uStack_148;
    bVar4 = SUB81(uVar42 >> 7,0);
    uStack_144 = (uint)bVar4 * (uint)(byte)(uVar42 >> 7) * auVar57._28_4_ | !bVar4 * uStack_144;
    uVar25 = vcmpps_avx512vl(auVar68,ZEXT1632(auVar51),0xc);
    if ((byte)((byte)uVar25 | (byte)uVar26) == 0xff) {
      uVar40 = (ulonglong)auVar66._0_4_;
      lVar43 = uVar40 * 3;
      pauVar2 = (undefined1 (*) [32])(param_4 + uVar40 * 0xc);
      if (bVar45 == 0xff) {
        auVar59 = pauVar2[1];
        auVar64 = vblendps_avx(auVar59,*pauVar2,0x24);
        auVar57 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar59);
        auVar69 = vpermt2ps_avx512vl(auVar64,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar59 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar59);
        auVar70 = vinsertf32x4_avx512vl(auVar57,auVar59._0_16_,1);
        auVar71 = vshuff64x2_avx512vl(auVar57,auVar59,3);
        auVar59 = *(undefined1 (*) [32])(param_5 + uVar40 * 0xc);
        auVar64 = *(undefined1 (*) [32])(param_5 + 0x20 + uVar40 * 0xc);
        auVar57 = *(undefined1 (*) [32])(param_5 + 0x40 + uVar40 * 0xc);
        auVar58 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar59,auVar64);
        auVar60 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar57,auVar64);
        auVar72 = vinsertf32x4_avx512vl(auVar58,auVar60._0_16_,1);
        auVar73 = vshuff64x2_avx512vl(auVar58,auVar60,3);
        auVar59 = vblendps_avx(auVar64,auVar59,0x24);
        auVar74 = vpermt2ps_avx512vl(auVar59,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar57);
      }
      else {
        auVar50 = vxorps_avx512vl(auVar48,auVar48);
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)(puVar3 + (longlong)*pauVar2));
        auVar70._0_4_ =
             (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
        auVar70._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
        auVar70._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
        auVar70._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar70._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar70._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar70._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar70._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + lVar43));
        auVar71._0_4_ =
             (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar51._0_4_;
        bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
        auVar71._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar51._4_4_;
        bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
        auVar71._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar51._8_4_;
        bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
        auVar71._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar51._12_4_;
        auVar71._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar71._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar71._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar71._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar2 * 2));
        auVar69._4_4_ = (uint)((byte)(uVar42 >> 1) & 1) * auVar59._4_4_;
        auVar69._0_4_ = (uint)(bVar45 & 1) * auVar59._0_4_;
        auVar69._8_4_ = (uint)((byte)(uVar42 >> 2) & 1) * auVar59._8_4_;
        auVar69._12_4_ = (uint)((byte)(uVar42 >> 3) & 1) * auVar59._12_4_;
        auVar69._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar69._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar69._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar69._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        param_5 = param_5 + uVar40 * 0xc;
        auVar50 = vxorps_avx512vl(auVar49,auVar49);
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)(puVar3 + param_5));
        auVar72._0_4_ =
             (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
        auVar72._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
        auVar72._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
        auVar72._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar72._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar72._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar72._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar72._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar50 = vxorps_avx512vl(auVar97,auVar97);
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)(param_5 + lVar43));
        auVar73._0_4_ =
             (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
        auVar73._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
        auVar73._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
        auVar73._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar73._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar73._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar73._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar73._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)local_1a0 + param_5));
        auVar74._4_4_ = (uint)((byte)(uVar42 >> 1) & 1) * auVar59._4_4_;
        auVar74._0_4_ = (uint)(bVar45 & 1) * auVar59._0_4_;
        auVar74._8_4_ = (uint)((byte)(uVar42 >> 2) & 1) * auVar59._8_4_;
        auVar74._12_4_ = (uint)((byte)(uVar42 >> 3) & 1) * auVar59._12_4_;
        auVar74._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar74._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar74._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar74._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
      }
      auVar30._4_4_ = local_1a0[1];
      auVar30._0_4_ = local_1a0[0];
      auVar30._8_4_ = local_1a0[2];
      auVar30._12_4_ = local_1a0[3];
      auVar30._16_4_ = uStack_190;
      auVar30._20_4_ = uStack_18c;
      auVar30._24_4_ = uStack_188;
      auVar30._28_4_ = uStack_184;
      auVar33._4_4_ = uStack_17c;
      auVar33._0_4_ = local_180;
      auVar33._8_4_ = uStack_178;
      auVar33._12_4_ = uStack_174;
      auVar33._16_4_ = uStack_170;
      auVar33._20_4_ = uStack_16c;
      auVar33._24_4_ = uStack_168;
      auVar33._28_4_ = uStack_164;
      auVar36._4_4_ = uStack_15c;
      auVar36._0_4_ = local_160;
      auVar36._8_4_ = uStack_158;
      auVar36._12_4_ = uStack_154;
      auVar36._16_4_ = uStack_150;
      auVar36._20_4_ = uStack_14c;
      auVar36._24_4_ = uStack_148;
      auVar36._28_4_ = uStack_144;
      auVar59 = vsubps_avx512vl(auVar70,auVar30);
      auVar64 = vsubps_avx512vl(auVar71,auVar33);
      auVar57 = vsubps_avx512vl(auVar69,auVar36);
      auVar64 = vmulps_avx512vl(auVar73,auVar64);
      auVar59 = vfmadd231ps_avx512vl(auVar64,auVar72,auVar59);
      auVar59 = vfmadd231ps_avx512vl(auVar59,auVar74,auVar57);
      auVar50 = vxorps_avx512vl(auVar57._0_16_,auVar57._0_16_);
      uVar42 = vcmpps_avx512vl(auVar68,ZEXT1632(auVar50),4);
      uVar46 = vcmpps_avx512vl(ZEXT1632(auVar50),auVar59,1);
      uVar47 = vpcmpgtd_avx512vl(auVar67,auVar66);
      uVar47 = uVar42 & uVar46 & uVar47;
      bVar45 = (byte)uVar47;
      if (bVar45 != 0) {
        auVar66 = vfmadd231ps_avx512vl(auVar30,auVar72,auVar59);
        auVar67 = vfmadd231ps_avx512vl(auVar33,auVar73,auVar59);
        auVar64 = vfmadd231ps_avx512vl(auVar36,auVar74,auVar59);
        local_1a0[0] = (uint)(bVar45 & 1) * auVar66._0_4_ | !(bool)(bVar45 & 1) * local_1a0[0];
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        local_1a0[1] = (uint)bVar4 * auVar66._4_4_ | !bVar4 * local_1a0[1];
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        local_1a0[2] = (uint)bVar4 * auVar66._8_4_ | !bVar4 * local_1a0[2];
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        local_1a0[3] = (uint)bVar4 * auVar66._12_4_ | !bVar4 * local_1a0[3];
        bVar4 = (bool)((byte)(uVar47 >> 4) & 1);
        uStack_190 = (uint)bVar4 * auVar66._16_4_ | !bVar4 * uStack_190;
        bVar4 = (bool)((byte)(uVar47 >> 5) & 1);
        uStack_18c = (uint)bVar4 * auVar66._20_4_ | !bVar4 * uStack_18c;
        bVar4 = (bool)((byte)(uVar47 >> 6) & 1);
        uStack_188 = (uint)bVar4 * auVar66._24_4_ | !bVar4 * uStack_188;
        bVar4 = SUB81(uVar47 >> 7,0);
        uStack_184 = (uint)bVar4 * auVar66._28_4_ | !bVar4 * uStack_184;
        local_180 = (uint)(bVar45 & 1) * auVar67._0_4_ | !(bool)(bVar45 & 1) * local_180;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        uStack_17c = (uint)bVar4 * auVar67._4_4_ | !bVar4 * uStack_17c;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        uStack_178 = (uint)bVar4 * auVar67._8_4_ | !bVar4 * uStack_178;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        uStack_174 = (uint)bVar4 * auVar67._12_4_ | !bVar4 * uStack_174;
        bVar4 = (bool)((byte)(uVar47 >> 4) & 1);
        uStack_170 = (uint)bVar4 * auVar67._16_4_ | !bVar4 * uStack_170;
        bVar4 = (bool)((byte)(uVar47 >> 5) & 1);
        uStack_16c = (uint)bVar4 * auVar67._20_4_ | !bVar4 * uStack_16c;
        bVar4 = (bool)((byte)(uVar47 >> 6) & 1);
        uStack_168 = (uint)bVar4 * auVar67._24_4_ | !bVar4 * uStack_168;
        bVar4 = SUB81(uVar47 >> 7,0);
        uStack_164 = (uint)bVar4 * auVar67._28_4_ | !bVar4 * uStack_164;
        local_160 = (uint)(bVar45 & 1) * auVar64._0_4_ | !(bool)(bVar45 & 1) * local_160;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        uStack_15c = (uint)bVar4 * auVar64._4_4_ | !bVar4 * uStack_15c;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        uStack_158 = (uint)bVar4 * auVar64._8_4_ | !bVar4 * uStack_158;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        uStack_154 = (uint)bVar4 * auVar64._12_4_ | !bVar4 * uStack_154;
        bVar4 = (bool)((byte)(uVar47 >> 4) & 1);
        uStack_150 = (uint)bVar4 * auVar64._16_4_ | !bVar4 * uStack_150;
        bVar4 = (bool)((byte)(uVar47 >> 5) & 1);
        uStack_14c = (uint)bVar4 * auVar64._20_4_ | !bVar4 * uStack_14c;
        bVar4 = (bool)((byte)(uVar47 >> 6) & 1);
        uStack_148 = (uint)bVar4 * auVar64._24_4_ | !bVar4 * uStack_148;
        bVar4 = SUB81(uVar47 >> 7,0);
        uStack_144 = (uint)bVar4 * auVar64._28_4_ | !bVar4 * uStack_144;
        pauVar2 = (undefined1 (*) [32])(param_6 + uVar40 * 0xc);
        if (bVar45 == 0xff) {
          auVar66 = pauVar2[1];
          auVar57 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,*pauVar2,auVar66);
          auVar58 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,pauVar2[2],auVar66);
          auVar75 = vinsertf32x4_avx512vl(auVar57,auVar58._0_16_,1);
          auVar76 = vshuff64x2_avx512vl(auVar57,auVar58,3);
          auVar66 = vblendps_avx(auVar66,*pauVar2,0x24);
          auVar77 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,auVar66,pauVar2[2]);
        }
        else {
          auVar66 = vgatherdps_avx512vl(*(undefined4 *)(unaff_RBX + (longlong)*pauVar2));
          auVar75._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar66._4_4_;
          auVar75._0_4_ = (uint)(bVar45 & 1) * auVar66._0_4_;
          auVar75._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar66._8_4_;
          auVar75._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar66._12_4_;
          auVar75._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
          auVar75._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
          auVar75._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
          auVar75._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
          auVar50 = vxorps_avx512vl(auVar97,auVar97);
          auVar66 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + uVar41));
          auVar76._0_4_ =
               (uint)(bVar45 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
          bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar76._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * auVar50._4_4_;
          bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar76._8_4_ = (uint)bVar4 * auVar66._8_4_ | (uint)!bVar4 * auVar50._8_4_;
          bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar76._12_4_ = (uint)bVar4 * auVar66._12_4_ | (uint)!bVar4 * auVar50._12_4_;
          auVar76._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
          auVar76._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
          auVar76._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
          auVar76._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
          auVar50 = vxorps_avx512vl(auVar98,auVar98);
          auVar66 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + lVar43));
          auVar77._0_4_ =
               (uint)(bVar45 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
          bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar77._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * auVar50._4_4_;
          bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar77._8_4_ = (uint)bVar4 * auVar66._8_4_ | (uint)!bVar4 * auVar50._8_4_;
          bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar77._12_4_ = (uint)bVar4 * auVar66._12_4_ | (uint)!bVar4 * auVar50._12_4_;
          auVar77._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
          auVar77._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
          auVar77._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
          auVar77._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
        }
        auVar66 = vpaddd_avx512vl(auVar63,auVar63);
        vpaddd_avx512vl(auVar63,auVar66);
        auVar50 = vxorps_avx512vl(auVar67._0_16_,auVar67._0_16_);
        auVar66 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar40 * 0xc));
        auVar78._0_4_ =
             (uint)(bVar45 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        auVar78._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        auVar78._8_4_ = (uint)bVar4 * auVar66._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        auVar78._12_4_ = (uint)bVar4 * auVar66._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar78._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
        auVar78._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
        auVar78._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
        auVar78._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
        auVar66 = vpslld_avx512vl(auVar63,2);
        auVar67 = vpslld_avx512vl(auVar63,3);
        auVar66 = vpaddd_avx512vl(auVar67,auVar66);
        auVar27._4_4_ = __real_00000004;
        auVar27._0_4_ = __real_00000004;
        auVar27._8_4_ = __real_00000004;
        auVar27._12_4_ = __real_00000004;
        auVar27._16_4_ = __real_00000004;
        auVar27._20_4_ = __real_00000004;
        auVar27._24_4_ = __real_00000004;
        auVar27._28_4_ = __real_00000004;
        auVar67 = vpaddd_avx512vl(auVar66,auVar27);
        auVar50 = vxorps_avx512vl(auVar64._0_16_,auVar64._0_16_);
        auVar64 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + lVar43));
        auVar79._0_4_ =
             (uint)(bVar45 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        auVar79._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        auVar79._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        auVar79._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar79._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar64._16_4_;
        auVar79._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar64._20_4_;
        auVar79._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar64._24_4_;
        auVar79._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar64._28_4_;
        auVar28._4_4_ = __real_00000008;
        auVar28._0_4_ = __real_00000008;
        auVar28._8_4_ = __real_00000008;
        auVar28._12_4_ = __real_00000008;
        auVar28._16_4_ = __real_00000008;
        auVar28._20_4_ = __real_00000008;
        auVar28._24_4_ = __real_00000008;
        auVar28._28_4_ = __real_00000008;
        vpaddd_avx512vl(auVar66,auVar28);
        auVar50 = vxorps_avx512vl(auVar67._0_16_,auVar67._0_16_);
        auVar66 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
        auVar80._0_4_ =
             (uint)(bVar45 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        auVar80._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        auVar80._8_4_ = (uint)bVar4 * auVar66._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        auVar80._12_4_ = (uint)bVar4 * auVar66._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar80._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
        auVar80._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
        auVar80._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
        auVar80._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
        auVar31._4_4_ = local_1a0[1];
        auVar31._0_4_ = local_1a0[0];
        auVar31._8_4_ = local_1a0[2];
        auVar31._12_4_ = local_1a0[3];
        auVar31._16_4_ = uStack_190;
        auVar31._20_4_ = uStack_18c;
        auVar31._24_4_ = uStack_188;
        auVar31._28_4_ = uStack_184;
        auVar34._4_4_ = uStack_17c;
        auVar34._0_4_ = local_180;
        auVar34._8_4_ = uStack_178;
        auVar34._12_4_ = uStack_174;
        auVar34._16_4_ = uStack_170;
        auVar34._20_4_ = uStack_16c;
        auVar34._24_4_ = uStack_168;
        auVar34._28_4_ = uStack_164;
        auVar37._4_4_ = uStack_15c;
        auVar37._0_4_ = local_160;
        auVar37._8_4_ = uStack_158;
        auVar37._12_4_ = uStack_154;
        auVar37._16_4_ = uStack_150;
        auVar37._20_4_ = uStack_14c;
        auVar37._24_4_ = uStack_148;
        auVar37._28_4_ = uStack_144;
        auVar66 = vsubps_avx512vl(auVar31,auVar78);
        auVar67 = vsubps_avx512vl(auVar34,auVar79);
        auVar64 = vsubps_avx512vl(auVar37,auVar80);
        auVar83._4_4_ = param_8;
        auVar83._0_4_ = param_8;
        auVar83._8_4_ = param_8;
        auVar83._12_4_ = param_8;
        auVar83._16_4_ = param_8;
        auVar83._20_4_ = param_8;
        auVar83._24_4_ = param_8;
        auVar83._28_4_ = param_8;
        auVar66 = vfnmadd231ps_avx512vl(auVar66,auVar83,auVar75);
        auVar67 = vfnmadd231ps_avx512vl(auVar67,auVar83,auVar76);
        auVar64 = vfnmadd231ps_avx512vl(auVar64,auVar83,auVar77);
        auVar57 = vmulps_avx512vl(auVar73,auVar67);
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar72,auVar66);
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar74,auVar64);
        auVar66 = vfnmadd231ps_avx512vl(auVar66,auVar57,auVar72);
        auVar67 = vfnmadd231ps_avx512vl(auVar67,auVar57,auVar73);
        auVar64 = vfnmadd213ps_avx512vl(auVar57,auVar74,auVar64);
        auVar57 = vmulps_avx512vl(auVar67,auVar67);
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar66,auVar66);
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar64,auVar64);
        auVar57 = vsqrtps_avx512vl(auVar57);
        auVar82._4_4_ = param_7;
        auVar82._0_4_ = param_7;
        auVar82._8_4_ = param_7;
        auVar82._12_4_ = param_7;
        auVar82._16_4_ = param_7;
        auVar82._20_4_ = param_7;
        auVar82._24_4_ = param_7;
        auVar82._28_4_ = param_7;
        auVar59 = vmulps_avx512vl(auVar82,auVar59);
        auVar59 = vminps_avx512vl(auVar59,auVar57);
        auVar29._4_4_ = __real_322bcc77;
        auVar29._0_4_ = __real_322bcc77;
        auVar29._8_4_ = __real_322bcc77;
        auVar29._12_4_ = __real_322bcc77;
        auVar29._16_4_ = __real_322bcc77;
        auVar29._20_4_ = __real_322bcc77;
        auVar29._24_4_ = __real_322bcc77;
        auVar29._28_4_ = __real_322bcc77;
        uVar42 = vcmpps_avx512vl(auVar57,auVar29,5);
        auVar59 = vdivps_avx512vl(auVar59,auVar57);
        auVar81._4_4_ = (uint)((byte)(uVar42 >> 1) & 1) * auVar59._4_4_;
        auVar81._0_4_ = (uint)((byte)uVar42 & 1) * auVar59._0_4_;
        auVar81._8_4_ = (uint)((byte)(uVar42 >> 2) & 1) * auVar59._8_4_;
        auVar81._12_4_ = (uint)((byte)(uVar42 >> 3) & 1) * auVar59._12_4_;
        auVar81._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar81._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar81._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar81._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar66 = vfnmadd213ps_avx512vl(auVar66,auVar81,auVar31);
        auVar67 = vfnmadd213ps_avx512vl(auVar67,auVar81,auVar34);
        auVar59 = vfnmadd213ps_avx512vl(auVar64,auVar81,auVar37);
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar9 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar21 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar14 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar18 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar22 = SUB81(uVar47 >> 7,0);
        bVar5 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar13 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar7 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar11 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar15 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar19 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar23 = SUB81(uVar47 >> 7,0);
        bVar6 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar17 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar8 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar16 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar20 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar24 = SUB81(uVar47 >> 7,0);
        auVar32._4_4_ = (uint)bVar4 * auVar66._4_4_ | !bVar4 * local_1a0[1];
        auVar32._0_4_ = (uint)(bVar45 & 1) * auVar66._0_4_ | !(bool)(bVar45 & 1) * local_1a0[0];
        auVar32._8_4_ = (uint)bVar9 * auVar66._8_4_ | !bVar9 * local_1a0[2];
        auVar32._12_4_ = (uint)bVar21 * auVar66._12_4_ | !bVar21 * local_1a0[3];
        auVar32._16_4_ = (uint)bVar10 * auVar66._16_4_ | !bVar10 * uStack_190;
        auVar32._20_4_ = (uint)bVar14 * auVar66._20_4_ | !bVar14 * uStack_18c;
        auVar32._24_4_ = (uint)bVar18 * auVar66._24_4_ | !bVar18 * uStack_188;
        auVar32._28_4_ = (uint)bVar22 * auVar66._28_4_ | !bVar22 * uStack_184;
        auVar35._4_4_ = (uint)bVar5 * auVar67._4_4_ | !bVar5 * uStack_17c;
        auVar35._0_4_ = (uint)(bVar45 & 1) * auVar67._0_4_ | !(bool)(bVar45 & 1) * local_180;
        auVar35._8_4_ = (uint)bVar13 * auVar67._8_4_ | !bVar13 * uStack_178;
        auVar35._12_4_ = (uint)bVar7 * auVar67._12_4_ | !bVar7 * uStack_174;
        auVar35._16_4_ = (uint)bVar11 * auVar67._16_4_ | !bVar11 * uStack_170;
        auVar35._20_4_ = (uint)bVar15 * auVar67._20_4_ | !bVar15 * uStack_16c;
        auVar35._24_4_ = (uint)bVar19 * auVar67._24_4_ | !bVar19 * uStack_168;
        auVar35._28_4_ = (uint)bVar23 * auVar67._28_4_ | !bVar23 * uStack_164;
        auVar38._4_4_ = (uint)bVar6 * auVar59._4_4_ | !bVar6 * uStack_15c;
        auVar38._0_4_ = (uint)(bVar45 & 1) * auVar59._0_4_ | !(bool)(bVar45 & 1) * local_160;
        auVar38._8_4_ = (uint)bVar17 * auVar59._8_4_ | !bVar17 * uStack_158;
        auVar38._12_4_ = (uint)bVar8 * auVar59._12_4_ | !bVar8 * uStack_154;
        auVar38._16_4_ = (uint)bVar12 * auVar59._16_4_ | !bVar12 * uStack_150;
        auVar38._20_4_ = (uint)bVar16 * auVar59._20_4_ | !bVar16 * uStack_14c;
        auVar38._24_4_ = (uint)bVar20 * auVar59._24_4_ | !bVar20 * uStack_148;
        auVar38._28_4_ = (uint)bVar24 * auVar59._28_4_ | !bVar24 * uStack_144;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar55,uVar47,auVar32);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar55 | auVar52),uVar47,auVar35);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar55 | auVar56),uVar47,auVar38);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar55 | auVar62),uVar47,auVar68);
      }
    }
  }
  return;
}

// ApplyPBDPlanarConstraintsNoFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_Cuni_avx512skx @ 1402fff50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsNoFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_Cuni_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  undefined4 *puVar2;
  bool bVar3;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  ulonglong uVar30;
  ulonglong unaff_RBX;
  undefined1 *unaff_RSI;
  longlong lVar31;
  int iVar32;
  byte bVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar36;
  uint uVar57;
  uint uVar60;
  uint uVar66;
  uint uVar69;
  uint uVar72;
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  uint uVar37;
  uint uVar38;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  uint uVar58;
  uint uVar59;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar67;
  uint uVar68;
  uint uVar70;
  uint uVar71;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM17 [64];
  undefined1 auVar82 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar83 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar84 [16];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
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
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  auVar84 = in_ZMM20._0_16_;
  auVar83 = in_ZMM19._0_16_;
  auVar82 = in_ZMM18._0_16_;
  auVar39 = in_ZMM17._0_16_;
  local_38 = in_ZMM9._0_16_;
  local_48 = in_ZMM8._0_16_;
  local_58 = in_ZMM7._0_16_;
  local_68 = in_ZMM6._0_16_;
  uVar36 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar36 = param_5;
  }
  if ((int)(uVar36 & 0xfffffff8) < 1) {
    iVar32 = 0;
  }
  else {
    unaff_RSI = local_c0;
    lVar31 = 0x10;
    iVar32 = 0;
    auVar78._4_4_ = __real_00000004;
    auVar78._0_4_ = __real_00000004;
    auVar78._8_4_ = __real_00000004;
    auVar78._12_4_ = __real_00000004;
    auVar79._4_4_ = __real_00000008;
    auVar79._0_4_ = __real_00000008;
    auVar79._8_4_ = __real_00000008;
    auVar79._12_4_ = __real_00000008;
    auVar50._16_4_ = __real_00000008;
    auVar50._0_16_ = auVar79;
    auVar50._20_4_ = __real_00000008;
    auVar50._24_4_ = __real_00000008;
    auVar50._28_4_ = __real_00000008;
    auVar80._4_4_ = __real_0000000c;
    auVar80._0_4_ = __real_0000000c;
    auVar80._8_4_ = __real_0000000c;
    auVar80._12_4_ = __real_0000000c;
    auVar51._16_4_ = __real_0000000c;
    auVar51._0_16_ = auVar80;
    auVar51._20_4_ = __real_0000000c;
    auVar51._24_4_ = __real_0000000c;
    auVar51._28_4_ = __real_0000000c;
    auVar81._0_12_ = ZEXT812(0);
    auVar81._12_4_ = 0;
    unaff_RBX = 0;
    do {
      auVar41 = vpslld_avx512vl(*(undefined1 (*) [32])(param_2 + (unaff_RBX & 0xffffffff)),4);
      auVar39 = auVar41._0_16_;
      vxorps_avx512vl(in_ZMM22._0_16_,in_ZMM22._0_16_);
      auVar41 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      in_ZMM22 = ZEXT3264(auVar41);
      auVar82 = auVar39 | auVar78;
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      local_c0 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
      in_ZMM23 = ZEXT3264(local_c0);
      auVar83 = auVar39 | auVar79;
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      local_a0 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
      in_ZMM24 = ZEXT3264(local_a0);
      auVar84 = auVar39 | auVar80;
      vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
      auVar42 = vgatherdps_avx512vl(*param_1);
      in_ZMM21 = ZEXT3264(auVar42);
      uVar24 = vcmpps_avx512vl(auVar42,ZEXT1632(auVar81),8);
      if ((char)uVar24 == '\0') {
        auVar43 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar31 * 4);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar31 * 4);
        auVar49 = *(undefined1 (*) [32])(param_3 + lVar31 * 4);
        auVar48 = vblendps_avx(auVar45,auVar43,0x24);
        auVar43 = vpermt2ps_avx512vl(auVar43,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar45);
        auVar44 = vpermt2ps_avx512vl(auVar48,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar49);
        auVar45 = vpermt2ps_avx512vl(auVar49,
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45);
        auVar46 = vinsertf32x4_avx512vl(auVar43,auVar45._0_16_,1);
        auVar47 = vshuff64x2_avx512vl(auVar43,auVar45,3);
        auVar43 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar31 * 4);
        auVar45 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar31 * 4);
        auVar49 = *(undefined1 (*) [32])(param_4 + lVar31 * 4);
        auVar48 = vblendps_avx(auVar45,auVar43,0x24);
        auVar43 = vpermt2ps_avx512vl(auVar43,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar45);
        auVar48 = vpermt2ps_avx512vl(auVar48,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar49);
        auVar45 = vpermt2ps_avx512vl(auVar49,
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45);
        auVar49 = vinsertf32x4_avx512vl(auVar43,auVar45._0_16_,1);
        auVar43 = vshuff64x2_avx512vl(auVar43,auVar45,3);
        auVar45 = vsubps_avx512vl(auVar46,auVar41);
        auVar46 = vsubps_avx512vl(auVar47,local_c0);
        auVar44 = vsubps_avx512vl(auVar44,local_a0);
        auVar46 = vmulps_avx512vl(auVar43,auVar46);
        auVar45 = vfmadd231ps_avx512vl(auVar46,auVar49,auVar45);
        auVar45 = vfmadd231ps_avx512vl(auVar45,auVar48,auVar44);
        uVar34 = vcmpps_avx512vl(ZEXT1632(auVar81),auVar45,1);
        uVar30 = vcmpps_avx512vl(auVar42,ZEXT1632(auVar81),4);
        uVar34 = uVar34 & uVar30;
        bVar33 = (byte)uVar34;
        if (bVar33 != 0) {
          auVar49 = vfmadd213ps_avx512vl(auVar49,auVar45,auVar41);
          auVar43 = vfmadd213ps_avx512vl(auVar43,auVar45,local_c0);
          auVar45 = vfmadd213ps_avx512vl(auVar48,auVar45,local_a0);
          local_e0._0_4_ = auVar41._0_4_;
          local_e0._4_4_ = auVar41._4_4_;
          local_e0._8_4_ = auVar41._8_4_;
          local_e0._12_4_ = auVar41._12_4_;
          local_e0._16_4_ = auVar41._16_4_;
          local_e0._20_4_ = auVar41._20_4_;
          local_e0._24_4_ = auVar41._24_4_;
          local_e0._28_4_ = auVar41._28_4_;
          bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
          bVar4 = (bool)((byte)(uVar34 >> 2) & 1);
          bVar5 = (bool)((byte)(uVar34 >> 3) & 1);
          bVar8 = (bool)((byte)(uVar34 >> 4) & 1);
          bVar12 = (bool)((byte)(uVar34 >> 5) & 1);
          bVar16 = (bool)((byte)(uVar34 >> 6) & 1);
          bVar20 = SUB81(uVar34 >> 7,0);
          local_e0._4_4_ = (uint)bVar3 * auVar49._4_4_ | (uint)!bVar3 * local_e0._4_4_;
          local_e0._0_4_ =
               (uint)(bVar33 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar33 & 1) * local_e0._0_4_;
          local_e0._8_4_ = (uint)bVar4 * auVar49._8_4_ | (uint)!bVar4 * local_e0._8_4_;
          local_e0._12_4_ = (uint)bVar5 * auVar49._12_4_ | (uint)!bVar5 * local_e0._12_4_;
          local_e0._16_4_ = (uint)bVar8 * auVar49._16_4_ | (uint)!bVar8 * local_e0._16_4_;
          local_e0._20_4_ = (uint)bVar12 * auVar49._20_4_ | (uint)!bVar12 * local_e0._20_4_;
          local_e0._24_4_ = (uint)bVar16 * auVar49._24_4_ | (uint)!bVar16 * local_e0._24_4_;
          local_e0._28_4_ = (uint)bVar20 * auVar49._28_4_ | (uint)!bVar20 * local_e0._28_4_;
          bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
          bVar4 = (bool)((byte)(uVar34 >> 2) & 1);
          bVar5 = (bool)((byte)(uVar34 >> 3) & 1);
          bVar8 = (bool)((byte)(uVar34 >> 4) & 1);
          bVar12 = (bool)((byte)(uVar34 >> 5) & 1);
          bVar16 = (bool)((byte)(uVar34 >> 6) & 1);
          bVar20 = SUB81(uVar34 >> 7,0);
          local_c0._4_4_ = (uint)bVar3 * auVar43._4_4_ | (uint)!bVar3 * local_c0._4_4_;
          local_c0._0_4_ =
               (uint)(bVar33 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar33 & 1) * local_c0._0_4_;
          local_c0._8_4_ = (uint)bVar4 * auVar43._8_4_ | (uint)!bVar4 * local_c0._8_4_;
          local_c0._12_4_ = (uint)bVar5 * auVar43._12_4_ | (uint)!bVar5 * local_c0._12_4_;
          local_c0._16_4_ = (uint)bVar8 * auVar43._16_4_ | (uint)!bVar8 * local_c0._16_4_;
          local_c0._20_4_ = (uint)bVar12 * auVar43._20_4_ | (uint)!bVar12 * local_c0._20_4_;
          local_c0._24_4_ = (uint)bVar16 * auVar43._24_4_ | (uint)!bVar16 * local_c0._24_4_;
          local_c0._28_4_ = (uint)bVar20 * auVar43._28_4_ | (uint)!bVar20 * local_c0._28_4_;
          bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
          bVar4 = (bool)((byte)(uVar34 >> 2) & 1);
          bVar5 = (bool)((byte)(uVar34 >> 3) & 1);
          bVar8 = (bool)((byte)(uVar34 >> 4) & 1);
          bVar12 = (bool)((byte)(uVar34 >> 5) & 1);
          bVar16 = (bool)((byte)(uVar34 >> 6) & 1);
          bVar20 = SUB81(uVar34 >> 7,0);
          local_a0._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * local_a0._4_4_;
          local_a0._0_4_ =
               (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * local_a0._0_4_;
          local_a0._8_4_ = (uint)bVar4 * auVar45._8_4_ | (uint)!bVar4 * local_a0._8_4_;
          local_a0._12_4_ = (uint)bVar5 * auVar45._12_4_ | (uint)!bVar5 * local_a0._12_4_;
          local_a0._16_4_ = (uint)bVar8 * auVar45._16_4_ | (uint)!bVar8 * local_a0._16_4_;
          local_a0._20_4_ = (uint)bVar12 * auVar45._20_4_ | (uint)!bVar12 * local_a0._20_4_;
          local_a0._24_4_ = (uint)bVar16 * auVar45._24_4_ | (uint)!bVar16 * local_a0._24_4_;
          local_a0._28_4_ = (uint)bVar20 * auVar45._28_4_ | (uint)!bVar20 * local_a0._28_4_;
          in_ZMM22 = ZEXT3264(local_e0);
          in_ZMM23 = ZEXT3264(local_c0);
          in_ZMM24 = ZEXT3264(local_a0);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar50,uVar34,local_e0);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar51,uVar34,local_c0);
          vscatterdps_avx512vl
                    (ZEXT832(param_1) +
                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000,uVar34,
                     local_a0);
          vscatterdps_avx512vl(ZEXT832(param_1) + ZEXT1632(auVar81),uVar34,auVar42);
        }
      }
      unaff_RBX = unaff_RBX + 0x20;
      lVar31 = lVar31 + 0x18;
      iVar32 = iVar32 + 8;
    } while (iVar32 < (int)(uVar36 & 0xfffffff8));
  }
  if (iVar32 < (int)param_5) {
    auVar50 = vpbroadcastd_avx512vl();
    auVar50 = vpor_avx2(auVar50,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar51 = vpbroadcastd_avx512vl();
    uVar34 = vpcmpgtd_avx512vl(auVar51,auVar50);
    auVar41 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_2 + (iVar32 << 2)));
    bVar33 = (byte)uVar34;
    auVar45._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * auVar41._4_4_;
    auVar45._0_4_ = (uint)(bVar33 & 1) * auVar41._0_4_;
    auVar45._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * auVar41._8_4_;
    auVar45._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * auVar41._12_4_;
    auVar45._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar41._16_4_;
    auVar45._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar41._20_4_;
    auVar45._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar41._24_4_;
    auVar45._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar41._28_4_;
    auVar47 = vpslld_avx2(auVar45,4);
    auVar39 = vxorps_avx512vl(auVar39,auVar39);
    auVar45 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)(iVar32 << 2)));
    auVar40._0_4_ = (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    auVar40._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    auVar40._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    auVar40._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
    auVar41._4_4_ = __real_00000004;
    auVar41._0_4_ = __real_00000004;
    auVar41._8_4_ = __real_00000004;
    auVar41._12_4_ = __real_00000004;
    auVar41._16_4_ = __real_00000004;
    auVar41._20_4_ = __real_00000004;
    auVar41._24_4_ = __real_00000004;
    auVar41._28_4_ = __real_00000004;
    auVar39 = vxorps_avx512vl(auVar82,auVar82);
    auVar49 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    auVar82._0_4_ = (uint)(bVar33 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    auVar82._4_4_ = (uint)bVar3 * auVar49._4_4_ | (uint)!bVar3 * auVar39._4_4_;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    auVar82._8_4_ = (uint)bVar3 * auVar49._8_4_ | (uint)!bVar3 * auVar39._8_4_;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    auVar82._12_4_ = (uint)bVar3 * auVar49._12_4_ | (uint)!bVar3 * auVar39._12_4_;
    auVar42._4_4_ = __real_00000008;
    auVar42._0_4_ = __real_00000008;
    auVar42._8_4_ = __real_00000008;
    auVar42._12_4_ = __real_00000008;
    auVar42._16_4_ = __real_00000008;
    auVar42._20_4_ = __real_00000008;
    auVar42._24_4_ = __real_00000008;
    auVar42._28_4_ = __real_00000008;
    auVar39 = vxorps_avx512vl(auVar83,auVar83);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
    auVar83._0_4_ = (uint)(bVar33 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    auVar83._4_4_ = (uint)bVar3 * auVar48._4_4_ | (uint)!bVar3 * auVar39._4_4_;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    auVar83._8_4_ = (uint)bVar3 * auVar48._8_4_ | (uint)!bVar3 * auVar39._8_4_;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    auVar83._12_4_ = (uint)bVar3 * auVar48._12_4_ | (uint)!bVar3 * auVar39._12_4_;
    auVar43._4_4_ = __real_0000000c;
    auVar43._0_4_ = __real_0000000c;
    auVar43._8_4_ = __real_0000000c;
    auVar43._12_4_ = __real_0000000c;
    auVar43._16_4_ = __real_0000000c;
    auVar43._20_4_ = __real_0000000c;
    auVar43._24_4_ = __real_0000000c;
    auVar43._28_4_ = __real_0000000c;
    auVar44 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    auVar46._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * auVar44._4_4_;
    auVar46._0_4_ = (uint)(bVar33 & 1) * auVar44._0_4_;
    auVar46._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * auVar44._8_4_;
    auVar46._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * auVar44._12_4_;
    auVar46._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar44._16_4_;
    auVar46._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar44._20_4_;
    auVar46._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar44._24_4_;
    auVar46._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar44._28_4_;
    uVar25 = vpcmpd_avx512vl(auVar50,auVar51,5);
    auVar39 = vxorps_avx512vl(auVar84,auVar84);
    uVar36 = (bVar33 & 1) * auVar40._0_4_ | (uint)!(bool)(bVar33 & 1) * local_140;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    uVar57 = bVar3 * auVar40._4_4_ | (uint)!bVar3 * iStack_13c;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    uVar60 = bVar3 * auVar40._8_4_ | (uint)!bVar3 * iStack_138;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    uVar63 = bVar3 * auVar40._12_4_ | (uint)!bVar3 * iStack_134;
    bVar3 = (bool)((byte)(uVar34 >> 4) & 1);
    uVar66 = (uint)bVar3 * (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_ |
             (uint)!bVar3 * iStack_130;
    bVar3 = (bool)((byte)(uVar34 >> 5) & 1);
    uVar69 = (uint)bVar3 * (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_ |
             (uint)!bVar3 * iStack_12c;
    bVar3 = (bool)((byte)(uVar34 >> 6) & 1);
    uVar72 = (uint)bVar3 * (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_ |
             (uint)!bVar3 * iStack_128;
    bVar3 = SUB81(uVar34 >> 7,0);
    uVar75 = (uint)bVar3 * (uint)(byte)(uVar34 >> 7) * auVar45._28_4_ | (uint)!bVar3 * iStack_124;
    uVar37 = (bVar33 & 1) * auVar82._0_4_ | (uint)!(bool)(bVar33 & 1) * local_120;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    uVar58 = bVar3 * auVar82._4_4_ | (uint)!bVar3 * iStack_11c;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    uVar61 = bVar3 * auVar82._8_4_ | (uint)!bVar3 * iStack_118;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    uVar64 = bVar3 * auVar82._12_4_ | (uint)!bVar3 * iStack_114;
    bVar3 = (bool)((byte)(uVar34 >> 4) & 1);
    uVar67 = (uint)bVar3 * (uint)((byte)(uVar34 >> 4) & 1) * auVar49._16_4_ |
             (uint)!bVar3 * iStack_110;
    bVar3 = (bool)((byte)(uVar34 >> 5) & 1);
    uVar70 = (uint)bVar3 * (uint)((byte)(uVar34 >> 5) & 1) * auVar49._20_4_ |
             (uint)!bVar3 * iStack_10c;
    bVar3 = (bool)((byte)(uVar34 >> 6) & 1);
    uVar73 = (uint)bVar3 * (uint)((byte)(uVar34 >> 6) & 1) * auVar49._24_4_ |
             (uint)!bVar3 * iStack_108;
    bVar3 = SUB81(uVar34 >> 7,0);
    uVar76 = (uint)bVar3 * (uint)(byte)(uVar34 >> 7) * auVar49._28_4_ | (uint)!bVar3 * iStack_104;
    uVar38 = (bVar33 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar33 & 1) * local_100;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    uVar59 = bVar3 * auVar83._4_4_ | (uint)!bVar3 * iStack_fc;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    uVar62 = bVar3 * auVar83._8_4_ | (uint)!bVar3 * iStack_f8;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    uVar65 = bVar3 * auVar83._12_4_ | (uint)!bVar3 * iStack_f4;
    bVar3 = (bool)((byte)(uVar34 >> 4) & 1);
    uVar68 = (uint)bVar3 * (uint)((byte)(uVar34 >> 4) & 1) * auVar48._16_4_ |
             (uint)!bVar3 * iStack_f0;
    bVar3 = (bool)((byte)(uVar34 >> 5) & 1);
    uVar71 = (uint)bVar3 * (uint)((byte)(uVar34 >> 5) & 1) * auVar48._20_4_ |
             (uint)!bVar3 * iStack_ec;
    bVar3 = (bool)((byte)(uVar34 >> 6) & 1);
    uVar74 = (uint)bVar3 * (uint)((byte)(uVar34 >> 6) & 1) * auVar48._24_4_ |
             (uint)!bVar3 * iStack_e8;
    bVar3 = SUB81(uVar34 >> 7,0);
    uVar77 = (uint)bVar3 * (uint)(byte)(uVar34 >> 7) * auVar48._28_4_ | (uint)!bVar3 * iStack_e4;
    uVar24 = vcmpps_avx512vl(auVar46,ZEXT1632(auVar39),0xc);
    if ((byte)((byte)uVar24 | (byte)uVar25) == 0xff) {
      uVar30 = (ulonglong)auVar50._0_4_;
      pauVar1 = (undefined1 (*) [32])(param_3 + uVar30 * 0xc);
      if (bVar33 == 0xff) {
        auVar45 = pauVar1[1];
        auVar49 = vblendps_avx(auVar45,*pauVar1,0x24);
        auVar48 = vpermt2ps_avx512vl(*pauVar1,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar45);
        auVar56 = vpermt2ps_avx512vl(auVar49,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar1[2]);
        auVar45 = vpermt2ps_avx512vl(pauVar1[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45);
        auVar52 = vinsertf32x4_avx512vl(auVar48,auVar45._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar48,auVar45,3);
        auVar45 = *(undefined1 (*) [32])(param_4 + uVar30 * 0xc);
        auVar49 = *(undefined1 (*) [32])(param_4 + 0x20 + uVar30 * 0xc);
        auVar48 = *(undefined1 (*) [32])(param_4 + 0x40 + uVar30 * 0xc);
        auVar44 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar45,auVar49);
        auVar53 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar48,auVar49);
        auVar54 = vinsertf32x4_avx512vl(auVar44,auVar53._0_16_,1);
        auVar44 = vshuff64x2_avx512vl(auVar44,auVar53,3);
        auVar45 = vblendps_avx(auVar49,auVar45,0x24);
        auVar49 = vpermt2ps_avx512vl(auVar45,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar48);
      }
      else {
        auVar39 = vxorps_avx512vl(auVar40,auVar40);
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)*pauVar1);
        auVar52._0_4_ =
             (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
        bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
        auVar52._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
        bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
        auVar52._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
        bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
        auVar52._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        auVar39 = vxorps_avx512vl(auVar82,auVar82);
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)(local_c0 + 8 + (longlong)*pauVar1));
        auVar55._0_4_ =
             (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
        bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
        auVar55._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
        bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
        auVar55._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
        bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
        auVar55._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
        auVar55._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar55._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar55._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar55._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)(unaff_RSI + (longlong)*pauVar1));
        auVar56._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * auVar45._4_4_;
        auVar56._0_4_ = (uint)(bVar33 & 1) * auVar45._0_4_;
        auVar56._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * auVar45._8_4_;
        auVar56._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * auVar45._12_4_;
        auVar56._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar56._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar56._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar56._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        puVar2 = (undefined4 *)(param_4 + uVar30 * 0xc);
        auVar39 = vxorps_avx512vl(auVar83,auVar83);
        auVar45 = vgatherdps_avx512vl(*puVar2);
        auVar54._0_4_ =
             (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
        bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
        bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
        bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        auVar39 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)(local_c0 + 8)));
        auVar44._0_4_ =
             (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
        bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
        auVar44._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
        bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
        auVar44._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
        bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
        auVar44._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
        auVar44._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar44._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar44._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar44._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)unaff_RSI));
        auVar49._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * auVar45._4_4_;
        auVar49._0_4_ = (uint)(bVar33 & 1) * auVar45._0_4_;
        auVar49._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * auVar45._8_4_;
        auVar49._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * auVar45._12_4_;
        auVar49._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar49._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar49._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar49._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
      }
      auVar48._4_4_ = uVar57;
      auVar48._0_4_ = uVar36;
      auVar48._8_4_ = uVar60;
      auVar48._12_4_ = uVar63;
      auVar48._16_4_ = uVar66;
      auVar48._20_4_ = uVar69;
      auVar48._24_4_ = uVar72;
      auVar48._28_4_ = uVar75;
      auVar53._4_4_ = uVar58;
      auVar53._0_4_ = uVar37;
      auVar53._8_4_ = uVar61;
      auVar53._12_4_ = uVar64;
      auVar53._16_4_ = uVar67;
      auVar53._20_4_ = uVar70;
      auVar53._24_4_ = uVar73;
      auVar53._28_4_ = uVar76;
      auVar28._4_4_ = uVar59;
      auVar28._0_4_ = uVar38;
      auVar28._8_4_ = uVar62;
      auVar28._12_4_ = uVar65;
      auVar28._16_4_ = uVar68;
      auVar28._20_4_ = uVar71;
      auVar28._24_4_ = uVar74;
      auVar28._28_4_ = uVar77;
      auVar45 = vsubps_avx512vl(auVar52,auVar48);
      auVar55 = vsubps_avx512vl(auVar55,auVar53);
      auVar56 = vsubps_avx512vl(auVar56,auVar28);
      auVar55 = vmulps_avx512vl(auVar44,auVar55);
      auVar45 = vfmadd231ps_avx512vl(auVar55,auVar54,auVar45);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar49,auVar56);
      auVar39 = vxorps_avx512vl(auVar56._0_16_,auVar56._0_16_);
      uVar34 = vcmpps_avx512vl(auVar46,ZEXT1632(auVar39),4);
      uVar30 = vcmpps_avx512vl(ZEXT1632(auVar39),auVar45,1);
      uVar35 = vpcmpgtd_avx512vl(auVar51,auVar50);
      uVar35 = uVar34 & uVar30 & uVar35;
      bVar33 = (byte)uVar35;
      if (bVar33 != 0) {
        auVar50 = vfmadd213ps_avx512vl(auVar54,auVar45,auVar48);
        auVar51 = vfmadd213ps_avx512vl(auVar44,auVar45,auVar53);
        auVar45 = vfmadd213ps_avx512vl(auVar49,auVar45,auVar28);
        bVar3 = (bool)((byte)(uVar35 >> 1) & 1);
        bVar8 = (bool)((byte)(uVar35 >> 2) & 1);
        bVar20 = (bool)((byte)(uVar35 >> 3) & 1);
        bVar9 = (bool)((byte)(uVar35 >> 4) & 1);
        bVar13 = (bool)((byte)(uVar35 >> 5) & 1);
        bVar17 = (bool)((byte)(uVar35 >> 6) & 1);
        bVar21 = SUB81(uVar35 >> 7,0);
        bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
        bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
        bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar35 >> 4) & 1);
        bVar14 = (bool)((byte)(uVar35 >> 5) & 1);
        bVar18 = (bool)((byte)(uVar35 >> 6) & 1);
        bVar22 = SUB81(uVar35 >> 7,0);
        bVar5 = (bool)((byte)(uVar35 >> 1) & 1);
        bVar16 = (bool)((byte)(uVar35 >> 2) & 1);
        bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
        bVar11 = (bool)((byte)(uVar35 >> 4) & 1);
        bVar15 = (bool)((byte)(uVar35 >> 5) & 1);
        bVar19 = (bool)((byte)(uVar35 >> 6) & 1);
        bVar23 = SUB81(uVar35 >> 7,0);
        auVar26._4_4_ = (uint)bVar3 * auVar50._4_4_ | !bVar3 * uVar57;
        auVar26._0_4_ = (uint)(bVar33 & 1) * auVar50._0_4_ | !(bool)(bVar33 & 1) * uVar36;
        auVar26._8_4_ = (uint)bVar8 * auVar50._8_4_ | !bVar8 * uVar60;
        auVar26._12_4_ = (uint)bVar20 * auVar50._12_4_ | !bVar20 * uVar63;
        auVar26._16_4_ = (uint)bVar9 * auVar50._16_4_ | !bVar9 * uVar66;
        auVar26._20_4_ = (uint)bVar13 * auVar50._20_4_ | !bVar13 * uVar69;
        auVar26._24_4_ = (uint)bVar17 * auVar50._24_4_ | !bVar17 * uVar72;
        auVar26._28_4_ = (uint)bVar21 * auVar50._28_4_ | !bVar21 * uVar75;
        auVar27._4_4_ = (uint)bVar4 * auVar51._4_4_ | !bVar4 * uVar58;
        auVar27._0_4_ = (uint)(bVar33 & 1) * auVar51._0_4_ | !(bool)(bVar33 & 1) * uVar37;
        auVar27._8_4_ = (uint)bVar12 * auVar51._8_4_ | !bVar12 * uVar61;
        auVar27._12_4_ = (uint)bVar6 * auVar51._12_4_ | !bVar6 * uVar64;
        auVar27._16_4_ = (uint)bVar10 * auVar51._16_4_ | !bVar10 * uVar67;
        auVar27._20_4_ = (uint)bVar14 * auVar51._20_4_ | !bVar14 * uVar70;
        auVar27._24_4_ = (uint)bVar18 * auVar51._24_4_ | !bVar18 * uVar73;
        auVar27._28_4_ = (uint)bVar22 * auVar51._28_4_ | !bVar22 * uVar76;
        auVar29._4_4_ = (uint)bVar5 * auVar45._4_4_ | !bVar5 * uVar59;
        auVar29._0_4_ = (uint)(bVar33 & 1) * auVar45._0_4_ | !(bool)(bVar33 & 1) * uVar38;
        auVar29._8_4_ = (uint)bVar16 * auVar45._8_4_ | !bVar16 * uVar62;
        auVar29._12_4_ = (uint)bVar7 * auVar45._12_4_ | !bVar7 * uVar65;
        auVar29._16_4_ = (uint)bVar11 * auVar45._16_4_ | !bVar11 * uVar68;
        auVar29._20_4_ = (uint)bVar15 * auVar45._20_4_ | !bVar15 * uVar71;
        auVar29._24_4_ = (uint)bVar19 * auVar45._24_4_ | !bVar19 * uVar74;
        auVar29._28_4_ = (uint)bVar23 * auVar45._28_4_ | !bVar23 * uVar77;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar47,uVar35,auVar26);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar47 | auVar41),uVar35,auVar27);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar47 | auVar42),uVar35,auVar29);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar47 | auVar43),uVar35,auVar46);
      }
    }
  }
  return;
}

// ApplyPBDPlanarConstraintsWithFriction_avx512skx @ 1403004c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsWithFriction_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,
               longlong param_5,longlong param_6,undefined4 param_7,float param_8,uint param_9)

{
  longlong lVar1;
  undefined1 (*pauVar2) [32];
  undefined1 *puVar3;
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
  undefined8 uVar25;
  undefined8 uVar26;
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
  undefined1 *unaff_RBX;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  longlong unaff_R13;
  longlong lVar43;
  uint uVar44;
  byte bVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
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
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
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
  undefined1 auVar83 [32];
  undefined1 auVar84 [16];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar85 [32];
  float fVar86;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar87 [32];
  undefined1 auVar95 [32];
  undefined1 in_ZMM13 [64];
  undefined1 auVar96 [16];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar97 [16];
  undefined1 in_ZMM21 [64];
  undefined1 auVar98 [16];
  undefined1 in_ZMM22 [64];
  undefined1 auVar99 [16];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM28 [64];
  uint local_1a0 [4];
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
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_68 [16];
  
  auVar99 = in_ZMM23._0_16_;
  auVar96 = in_ZMM16._0_16_;
  auVar51 = in_ZMM22._0_16_;
  auVar50 = in_ZMM21._0_16_;
  auVar48 = in_ZMM20._0_16_;
  puVar3 = local_120 + 8;
  local_68 = in_ZMM13._0_16_;
  local_c8 = in_ZMM7._0_16_;
  local_d8 = in_ZMM6._0_16_;
  uVar42 = (ulonglong)param_9;
  uVar41 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar41 = param_9;
  }
  uVar41 = uVar41 & 0xfffffff8;
  auVar97 = __ymm_00000054000000480000003c0000003000000024000000180000000c00000000._0_16_;
  auVar98 = __ymm_000000580000004c0000004000000034000000280000001c0000001000000004._0_16_;
  if ((int)uVar41 < 1) {
    uVar39 = 0;
  }
  else {
    unaff_RBX = local_120;
    auVar66._4_4_ = param_7;
    auVar66._0_4_ = param_7;
    auVar66._8_4_ = param_7;
    auVar66._12_4_ = param_7;
    auVar66._16_4_ = param_7;
    auVar66._20_4_ = param_7;
    auVar66._24_4_ = param_7;
    auVar66._28_4_ = param_7;
    uVar40 = 0;
    auVar84._0_12_ = ZEXT812(0);
    auVar84._12_4_ = 0;
    auVar67._4_4_ = __real_00000004;
    auVar67._0_4_ = __real_00000004;
    auVar67._8_4_ = __real_00000004;
    auVar67._12_4_ = __real_00000004;
    auVar67._16_4_ = __real_00000004;
    auVar67._20_4_ = __real_00000004;
    auVar67._24_4_ = __real_00000004;
    auVar67._28_4_ = __real_00000004;
    auVar52 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar96 = auVar52._0_16_;
    vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar48 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar99 = __ymm_0000005c0000005000000044000000380000002c000000200000001400000008._0_16_;
    lVar43 = 0;
    uVar44 = 0;
    do {
      auVar55 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_3 + (ulonglong)uVar44));
      vpslld_avx512vl(auVar55,4);
      local_140 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      local_120 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_4));
      local_100 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar56 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar42));
      in_ZMM28 = ZEXT3264(auVar56);
      uVar25 = vcmpps_avx512vl(auVar56,ZEXT1632(auVar84),8);
      if ((char)uVar25 == '\0') {
        auVar59 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar43);
        auVar64 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar43);
        auVar62 = vblendps_avx(auVar59,*(undefined1 (*) [32])(param_4 + lVar43),0x24);
        auVar57 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_4 + lVar43),
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar59);
        auVar58 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar64);
        auVar59 = vpermt2ps_avx512vl(auVar64,
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar59);
        auVar60 = vinsertf32x4_avx512vl(auVar57,auVar59._0_16_,1);
        auVar57 = vshuff64x2_avx512vl(auVar57,auVar59,3);
        auVar59 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar43);
        auVar64 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar43);
        auVar62 = vblendps_avx(auVar59,*(undefined1 (*) [32])(param_5 + lVar43),0x24);
        auVar61 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_5 + lVar43),
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar59);
        auVar62 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar64);
        auVar59 = vpermt2ps_avx512vl(auVar64,
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar59);
        auVar63 = vinsertf32x4_avx512vl(auVar61,auVar59._0_16_,1);
        auVar61 = vshuff64x2_avx512vl(auVar61,auVar59,3);
        auVar59 = vsubps_avx(auVar60,local_140);
        auVar57 = vsubps_avx512vl(auVar57,local_120);
        auVar64 = vsubps_avx(auVar58,local_100);
        auVar57 = vmulps_avx512vl(auVar61,auVar57);
        auVar59 = vfmadd231ps_avx512vl(auVar57,auVar63,auVar59);
        auVar59 = vfmadd231ps_avx512vl(auVar59,auVar62,auVar64);
        uVar46 = vcmpps_avx512vl(ZEXT1632(auVar84),auVar59,1);
        uVar47 = vcmpps_avx512vl(auVar56,ZEXT1632(auVar84),4);
        uVar46 = uVar46 & uVar47;
        bVar45 = (byte)uVar46;
        if (bVar45 != 0) {
          auVar64 = vfmadd231ps_avx512vl(local_140,auVar63,auVar59);
          auVar57 = vfmadd231ps_avx512vl(local_120,auVar61,auVar59);
          local_140._0_4_ =
               (uint)(bVar45 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar45 & 1) * local_140._0_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          local_140._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_140._4_4_;
          bVar4 = (bool)((byte)(uVar46 >> 2) & 1);
          local_140._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * local_140._8_4_;
          bVar4 = (bool)((byte)(uVar46 >> 3) & 1);
          local_140._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * local_140._12_4_;
          bVar4 = (bool)((byte)(uVar46 >> 4) & 1);
          local_140._16_4_ = (uint)bVar4 * auVar64._16_4_ | (uint)!bVar4 * local_140._16_4_;
          bVar4 = (bool)((byte)(uVar46 >> 5) & 1);
          local_140._20_4_ = (uint)bVar4 * auVar64._20_4_ | (uint)!bVar4 * local_140._20_4_;
          bVar4 = (bool)((byte)(uVar46 >> 6) & 1);
          local_140._24_4_ = (uint)bVar4 * auVar64._24_4_ | (uint)!bVar4 * local_140._24_4_;
          bVar4 = SUB81(uVar46 >> 7,0);
          local_140._28_4_ = (uint)bVar4 * auVar64._28_4_ | (uint)!bVar4 * local_140._28_4_;
          auVar64 = vfmadd231ps_avx512vl(local_100,auVar62,auVar59);
          local_120._0_4_ =
               (uint)(bVar45 & 1) * auVar57._0_4_ | (uint)!(bool)(bVar45 & 1) * local_120._0_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          local_120._4_4_ = (uint)bVar4 * auVar57._4_4_ | (uint)!bVar4 * local_120._4_4_;
          bVar4 = (bool)((byte)(uVar46 >> 2) & 1);
          local_120._8_4_ = (uint)bVar4 * auVar57._8_4_ | (uint)!bVar4 * local_120._8_4_;
          bVar4 = (bool)((byte)(uVar46 >> 3) & 1);
          local_120._12_4_ = (uint)bVar4 * auVar57._12_4_ | (uint)!bVar4 * local_120._12_4_;
          bVar4 = (bool)((byte)(uVar46 >> 4) & 1);
          local_120._16_4_ = (uint)bVar4 * auVar57._16_4_ | (uint)!bVar4 * local_120._16_4_;
          bVar4 = (bool)((byte)(uVar46 >> 5) & 1);
          local_120._20_4_ = (uint)bVar4 * auVar57._20_4_ | (uint)!bVar4 * local_120._20_4_;
          bVar4 = (bool)((byte)(uVar46 >> 6) & 1);
          local_120._24_4_ = (uint)bVar4 * auVar57._24_4_ | (uint)!bVar4 * local_120._24_4_;
          bVar4 = SUB81(uVar46 >> 7,0);
          local_120._28_4_ = (uint)bVar4 * auVar57._28_4_ | (uint)!bVar4 * local_120._28_4_;
          local_100._0_4_ =
               (uint)(bVar45 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar45 & 1) * local_100._0_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          local_100._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * local_100._4_4_;
          bVar4 = (bool)((byte)(uVar46 >> 2) & 1);
          local_100._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * local_100._8_4_;
          bVar4 = (bool)((byte)(uVar46 >> 3) & 1);
          local_100._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * local_100._12_4_;
          bVar4 = (bool)((byte)(uVar46 >> 4) & 1);
          local_100._16_4_ = (uint)bVar4 * auVar64._16_4_ | (uint)!bVar4 * local_100._16_4_;
          bVar4 = (bool)((byte)(uVar46 >> 5) & 1);
          local_100._20_4_ = (uint)bVar4 * auVar64._20_4_ | (uint)!bVar4 * local_100._20_4_;
          bVar4 = (bool)((byte)(uVar46 >> 6) & 1);
          local_100._24_4_ = (uint)bVar4 * auVar64._24_4_ | (uint)!bVar4 * local_100._24_4_;
          bVar4 = SUB81(uVar46 >> 7,0);
          local_100._28_4_ = (uint)bVar4 * auVar64._28_4_ | (uint)!bVar4 * local_100._28_4_;
          if (bVar45 == 0xff) {
            auVar64 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar43);
            auVar57 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar43);
            auVar58 = vblendps_avx(auVar64,*(undefined1 (*) [32])(param_6 + lVar43),0x24);
            auVar65 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_6 + lVar43),
                                         ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                         ,auVar64);
            auVar60 = vpermt2ps_avx512vl(auVar58,
                                         ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                         ,auVar57);
            auVar64 = vpermt2ps_avx512vl(auVar57,
                                         ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                         ,auVar64);
            auVar57._16_16_ = auVar64._0_16_;
            auVar57._0_16_ = auVar65._0_16_;
            auVar64 = vperm2f128_avx(auVar65,auVar64,0x31);
          }
          else {
            lVar1 = param_6 + lVar43;
            auVar64 = vgatherdps_avx512vl(*(undefined4 *)(puVar3 + lVar1));
            auVar57._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar64._4_4_;
            auVar57._0_4_ = (uint)(bVar45 & 1) * auVar64._0_4_;
            auVar57._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar64._8_4_;
            auVar57._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar64._12_4_;
            auVar57._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar64._16_4_;
            auVar57._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar64._20_4_;
            auVar57._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar64._24_4_;
            auVar57._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar64._28_4_;
            auVar58 = vgatherdps_avx512vl(*(undefined4 *)(lVar1 + uVar40));
            auVar64._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar58._4_4_;
            auVar64._0_4_ = (uint)(bVar45 & 1) * auVar58._0_4_;
            auVar64._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar58._8_4_;
            auVar64._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar58._12_4_;
            auVar64._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar58._16_4_;
            auVar64._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar58._20_4_;
            auVar64._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar58._24_4_;
            auVar64._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar58._28_4_;
            auVar58 = vgatherdps_avx512vl(*(undefined4 *)(lVar1 + (ulonglong)uVar41));
            auVar60._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar58._4_4_;
            auVar60._0_4_ = (uint)(bVar45 & 1) * auVar58._0_4_;
            auVar60._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar58._8_4_;
            auVar60._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar58._12_4_;
            auVar60._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar58._16_4_;
            auVar60._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar58._20_4_;
            auVar60._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar58._24_4_;
            auVar60._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar58._28_4_;
          }
          auVar58 = vpaddd_avx512vl(auVar55,auVar55);
          vpaddd_avx512vl(auVar55,auVar58);
          auVar65 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42 * 4));
          auVar58._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar65._4_4_;
          auVar58._0_4_ = (uint)(bVar45 & 1) * auVar65._0_4_;
          auVar58._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar65._8_4_;
          auVar58._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar65._12_4_;
          auVar58._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar65._16_4_;
          auVar58._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar65._20_4_;
          auVar58._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar65._24_4_;
          auVar58._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar65._28_4_;
          auVar65 = vpslld_avx512vl(auVar55,2);
          auVar55 = vpslld_avx512vl(auVar55,3);
          auVar55 = vpaddd_avx512vl(auVar55,auVar65);
          vpaddd_avx512vl(auVar55,auVar67);
          auVar65 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar42));
          auVar53._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar65._4_4_;
          auVar53._0_4_ = (uint)(bVar45 & 1) * auVar65._0_4_;
          auVar53._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar65._8_4_;
          auVar53._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar65._12_4_;
          auVar53._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar65._16_4_;
          auVar53._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar65._20_4_;
          auVar53._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar65._24_4_;
          auVar53._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar65._28_4_;
          vpaddd_avx512vl(auVar55,auVar52);
          auVar55 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_R13));
          auVar65._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar55._4_4_;
          auVar65._0_4_ = (uint)(bVar45 & 1) * auVar55._0_4_;
          auVar65._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar55._8_4_;
          auVar65._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar55._12_4_;
          auVar65._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar55._16_4_;
          auVar65._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar55._20_4_;
          auVar65._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar55._24_4_;
          auVar65._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar55._28_4_;
          auVar54 = vsubps_avx512vl(local_140,auVar58);
          auVar55 = vsubps_avx(local_120,auVar53);
          auVar58 = vsubps_avx(local_100,auVar65);
          fVar86 = -(param_8 * auVar57._0_4_) + auVar54._0_4_;
          fVar88 = -(param_8 * auVar57._4_4_) + auVar54._4_4_;
          fVar89 = -(param_8 * auVar57._8_4_) + auVar54._8_4_;
          fVar90 = -(param_8 * auVar57._12_4_) + auVar54._12_4_;
          fVar91 = -(param_8 * auVar57._16_4_) + auVar54._16_4_;
          fVar92 = -(param_8 * auVar57._20_4_) + auVar54._20_4_;
          fVar93 = -(param_8 * auVar57._24_4_) + auVar54._24_4_;
          fVar94 = -(param_8 * auVar57._28_4_) + auVar54._28_4_;
          auVar95._0_4_ = -(param_8 * auVar64._0_4_) + auVar55._0_4_;
          auVar95._4_4_ = -(param_8 * auVar64._4_4_) + auVar55._4_4_;
          auVar95._8_4_ = -(param_8 * auVar64._8_4_) + auVar55._8_4_;
          auVar95._12_4_ = -(param_8 * auVar64._12_4_) + auVar55._12_4_;
          auVar95._16_4_ = -(param_8 * auVar64._16_4_) + auVar55._16_4_;
          auVar95._20_4_ = -(param_8 * auVar64._20_4_) + auVar55._20_4_;
          auVar95._24_4_ = -(param_8 * auVar64._24_4_) + auVar55._24_4_;
          auVar95._28_4_ = -(param_8 * auVar64._28_4_) + auVar55._28_4_;
          auVar85._0_4_ = -(param_8 * auVar60._0_4_) + auVar58._0_4_;
          auVar85._4_4_ = -(param_8 * auVar60._4_4_) + auVar58._4_4_;
          auVar85._8_4_ = -(param_8 * auVar60._8_4_) + auVar58._8_4_;
          auVar85._12_4_ = -(param_8 * auVar60._12_4_) + auVar58._12_4_;
          auVar85._16_4_ = -(param_8 * auVar60._16_4_) + auVar58._16_4_;
          auVar85._20_4_ = -(param_8 * auVar60._20_4_) + auVar58._20_4_;
          auVar85._24_4_ = -(param_8 * auVar60._24_4_) + auVar58._24_4_;
          auVar85._28_4_ = -(param_8 * auVar60._28_4_) + auVar58._28_4_;
          auVar55 = vmulps_avx512vl(auVar61,auVar95);
          auVar54._0_4_ = auVar62._0_4_ * auVar85._0_4_ + auVar63._0_4_ * fVar86 + auVar55._0_4_;
          auVar54._4_4_ = auVar62._4_4_ * auVar85._4_4_ + auVar63._4_4_ * fVar88 + auVar55._4_4_;
          auVar54._8_4_ = auVar62._8_4_ * auVar85._8_4_ + auVar63._8_4_ * fVar89 + auVar55._8_4_;
          auVar54._12_4_ =
               auVar62._12_4_ * auVar85._12_4_ + auVar63._12_4_ * fVar90 + auVar55._12_4_;
          auVar54._16_4_ =
               auVar62._16_4_ * auVar85._16_4_ + auVar63._16_4_ * fVar91 + auVar55._16_4_;
          auVar54._20_4_ =
               auVar62._20_4_ * auVar85._20_4_ + auVar63._20_4_ * fVar92 + auVar55._20_4_;
          auVar54._24_4_ =
               auVar62._24_4_ * auVar85._24_4_ + auVar63._24_4_ * fVar93 + auVar55._24_4_;
          auVar54._28_4_ =
               auVar62._28_4_ * auVar85._28_4_ + auVar63._28_4_ * fVar94 + auVar55._28_4_;
          auVar87._0_4_ = -(auVar54._0_4_ * auVar63._0_4_) + fVar86;
          auVar87._4_4_ = -(auVar54._4_4_ * auVar63._4_4_) + fVar88;
          auVar87._8_4_ = -(auVar54._8_4_ * auVar63._8_4_) + fVar89;
          auVar87._12_4_ = -(auVar54._12_4_ * auVar63._12_4_) + fVar90;
          auVar87._16_4_ = -(auVar54._16_4_ * auVar63._16_4_) + fVar91;
          auVar87._20_4_ = -(auVar54._20_4_ * auVar63._20_4_) + fVar92;
          auVar87._24_4_ = -(auVar54._24_4_ * auVar63._24_4_) + fVar93;
          auVar87._28_4_ = -(auVar54._28_4_ * auVar63._28_4_) + fVar94;
          auVar58 = vfnmadd231ps_avx512vl(auVar95,auVar54,auVar61);
          auVar61._0_4_ = -(auVar62._0_4_ * auVar54._0_4_) + auVar85._0_4_;
          auVar61._4_4_ = -(auVar62._4_4_ * auVar54._4_4_) + auVar85._4_4_;
          auVar61._8_4_ = -(auVar62._8_4_ * auVar54._8_4_) + auVar85._8_4_;
          auVar61._12_4_ = -(auVar62._12_4_ * auVar54._12_4_) + auVar85._12_4_;
          auVar61._16_4_ = -(auVar62._16_4_ * auVar54._16_4_) + auVar85._16_4_;
          auVar61._20_4_ = -(auVar62._20_4_ * auVar54._20_4_) + auVar85._20_4_;
          auVar61._24_4_ = -(auVar62._24_4_ * auVar54._24_4_) + auVar85._24_4_;
          auVar61._28_4_ = -(auVar62._28_4_ * auVar54._28_4_) + auVar85._28_4_;
          auVar55 = vmulps_avx512vl(auVar58,auVar58);
          auVar55 = vfmadd231ps_avx512vl(auVar55,auVar87,auVar87);
          auVar55 = vfmadd231ps_avx512vl(auVar55,auVar61,auVar61);
          auVar62 = vsqrtps_avx512vl(auVar55);
          auVar55 = vmulps_avx512vl(auVar66,auVar59);
          auVar59 = vminps_avx512vl(auVar55,auVar62);
          auVar55._4_4_ = __real_322bcc77;
          auVar55._0_4_ = __real_322bcc77;
          auVar55._8_4_ = __real_322bcc77;
          auVar55._12_4_ = __real_322bcc77;
          auVar55._16_4_ = __real_322bcc77;
          auVar55._20_4_ = __real_322bcc77;
          auVar55._24_4_ = __real_322bcc77;
          auVar55._28_4_ = __real_322bcc77;
          uVar47 = vcmpps_avx512vl(auVar62,auVar55,5);
          auVar55 = vdivps_avx512vl(auVar59,auVar62);
          auVar59._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar55._4_4_;
          auVar59._0_4_ = (uint)((byte)uVar47 & 1) * auVar55._0_4_;
          auVar59._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar55._8_4_;
          auVar59._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar55._12_4_;
          auVar59._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar55._16_4_;
          auVar59._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar55._20_4_;
          auVar59._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar55._24_4_;
          auVar59._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar55._28_4_;
          auVar55 = vfnmadd213ps_avx512vl(auVar87,auVar59,local_140);
          auVar62 = vfnmadd213ps_avx512vl(auVar58,auVar59,local_120);
          auVar59 = vfnmadd213ps_avx512vl(auVar61,auVar59,local_100);
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          bVar5 = (bool)((byte)(uVar46 >> 2) & 1);
          bVar6 = (bool)((byte)(uVar46 >> 3) & 1);
          bVar9 = (bool)((byte)(uVar46 >> 4) & 1);
          bVar13 = (bool)((byte)(uVar46 >> 5) & 1);
          bVar17 = (bool)((byte)(uVar46 >> 6) & 1);
          bVar21 = SUB81(uVar46 >> 7,0);
          local_140._4_4_ = (uint)bVar4 * auVar55._4_4_ | (uint)!bVar4 * local_140._4_4_;
          local_140._0_4_ =
               (uint)(bVar45 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar45 & 1) * local_140._0_4_;
          local_140._8_4_ = (uint)bVar5 * auVar55._8_4_ | (uint)!bVar5 * local_140._8_4_;
          local_140._12_4_ = (uint)bVar6 * auVar55._12_4_ | (uint)!bVar6 * local_140._12_4_;
          local_140._16_4_ = (uint)bVar9 * auVar55._16_4_ | (uint)!bVar9 * local_140._16_4_;
          local_140._20_4_ = (uint)bVar13 * auVar55._20_4_ | (uint)!bVar13 * local_140._20_4_;
          local_140._24_4_ = (uint)bVar17 * auVar55._24_4_ | (uint)!bVar17 * local_140._24_4_;
          local_140._28_4_ = (uint)bVar21 * auVar55._28_4_ | (uint)!bVar21 * local_140._28_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          bVar5 = (bool)((byte)(uVar46 >> 2) & 1);
          bVar6 = (bool)((byte)(uVar46 >> 3) & 1);
          bVar9 = (bool)((byte)(uVar46 >> 4) & 1);
          bVar13 = (bool)((byte)(uVar46 >> 5) & 1);
          bVar17 = (bool)((byte)(uVar46 >> 6) & 1);
          bVar21 = SUB81(uVar46 >> 7,0);
          local_120._4_4_ = (uint)bVar4 * auVar62._4_4_ | (uint)!bVar4 * local_120._4_4_;
          local_120._0_4_ =
               (uint)(bVar45 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar45 & 1) * local_120._0_4_;
          local_120._8_4_ = (uint)bVar5 * auVar62._8_4_ | (uint)!bVar5 * local_120._8_4_;
          local_120._12_4_ = (uint)bVar6 * auVar62._12_4_ | (uint)!bVar6 * local_120._12_4_;
          local_120._16_4_ = (uint)bVar9 * auVar62._16_4_ | (uint)!bVar9 * local_120._16_4_;
          local_120._20_4_ = (uint)bVar13 * auVar62._20_4_ | (uint)!bVar13 * local_120._20_4_;
          local_120._24_4_ = (uint)bVar17 * auVar62._24_4_ | (uint)!bVar17 * local_120._24_4_;
          local_120._28_4_ = (uint)bVar21 * auVar62._28_4_ | (uint)!bVar21 * local_120._28_4_;
          bVar4 = (bool)((byte)(uVar46 >> 1) & 1);
          bVar5 = (bool)((byte)(uVar46 >> 2) & 1);
          bVar6 = (bool)((byte)(uVar46 >> 3) & 1);
          bVar9 = (bool)((byte)(uVar46 >> 4) & 1);
          bVar13 = (bool)((byte)(uVar46 >> 5) & 1);
          bVar17 = (bool)((byte)(uVar46 >> 6) & 1);
          bVar21 = SUB81(uVar46 >> 7,0);
          local_100._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * local_100._4_4_;
          local_100._0_4_ =
               (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * local_100._0_4_;
          local_100._8_4_ = (uint)bVar5 * auVar59._8_4_ | (uint)!bVar5 * local_100._8_4_;
          local_100._12_4_ = (uint)bVar6 * auVar59._12_4_ | (uint)!bVar6 * local_100._12_4_;
          local_100._16_4_ = (uint)bVar9 * auVar59._16_4_ | (uint)!bVar9 * local_100._16_4_;
          local_100._20_4_ = (uint)bVar13 * auVar59._20_4_ | (uint)!bVar13 * local_100._20_4_;
          local_100._24_4_ = (uint)bVar17 * auVar59._24_4_ | (uint)!bVar17 * local_100._24_4_;
          local_100._28_4_ = (uint)bVar21 * auVar59._28_4_ | (uint)!bVar21 * local_100._28_4_;
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar59,uVar46,local_140);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar57,uVar46,local_120);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar64,uVar46,local_100);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar85,uVar46,auVar56);
        }
      }
      uVar44 = uVar44 + 0x20;
      lVar43 = lVar43 + 0x60;
      uVar39 = (int)uVar40 + 8;
      uVar40 = (ulonglong)uVar39;
      auVar50 = auVar97;
      auVar51 = auVar98;
    } while ((int)uVar39 < (int)uVar41);
  }
  if ((int)uVar39 < (int)param_9) {
    auVar52 = vpbroadcastd_avx512vl();
    auVar66 = vpord_avx512vl(auVar52,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
    auVar67 = vpbroadcastd_avx512vl();
    uVar42 = vpcmpgtd_avx512vl(auVar67,auVar66);
    auVar52 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_3 + (int)(uVar39 << 2)));
    bVar45 = (byte)uVar42;
    auVar63._4_4_ = (uint)((byte)(uVar42 >> 1) & 1) * auVar52._4_4_;
    auVar63._0_4_ = (uint)(bVar45 & 1) * auVar52._0_4_;
    auVar63._8_4_ = (uint)((byte)(uVar42 >> 2) & 1) * auVar52._8_4_;
    auVar63._12_4_ = (uint)((byte)(uVar42 >> 3) & 1) * auVar52._12_4_;
    auVar63._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar52._16_4_;
    auVar63._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar52._20_4_;
    auVar63._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar52._24_4_;
    auVar63._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar52._28_4_;
    auVar55 = vpslld_avx512vl(auVar63,4);
    auVar48 = vxorps_avx512vl(auVar48,auVar48);
    auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
    auVar49._0_4_ = (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar48._0_4_;
    bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
    auVar49._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar48._4_4_;
    bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
    auVar49._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar48._8_4_;
    bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
    auVar49._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar48._12_4_;
    auVar52._4_4_ = __real_00000004;
    auVar52._0_4_ = __real_00000004;
    auVar52._8_4_ = __real_00000004;
    auVar52._12_4_ = __real_00000004;
    auVar52._16_4_ = __real_00000004;
    auVar52._20_4_ = __real_00000004;
    auVar52._24_4_ = __real_00000004;
    auVar52._28_4_ = __real_00000004;
    auVar50 = vxorps_avx512vl(auVar50,auVar50);
    auVar64 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)unaff_RBX));
    bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar42 >> 2) & 1);
    bVar9 = (bool)((byte)(uVar42 >> 3) & 1);
    auVar56._4_4_ = __real_00000008;
    auVar56._0_4_ = __real_00000008;
    auVar56._8_4_ = __real_00000008;
    auVar56._12_4_ = __real_00000008;
    auVar56._16_4_ = __real_00000008;
    auVar56._20_4_ = __real_00000008;
    auVar56._24_4_ = __real_00000008;
    auVar56._28_4_ = __real_00000008;
    auVar51 = vxorps_avx512vl(auVar51,auVar51);
    auVar57 = vgatherdps_avx512vl(*param_1);
    auVar48._0_4_ = (uint)(bVar45 & 1) * auVar57._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar51._0_4_;
    bVar5 = (bool)((byte)(uVar42 >> 1) & 1);
    auVar48._4_4_ = (uint)bVar5 * auVar57._4_4_ | (uint)!bVar5 * auVar51._4_4_;
    bVar5 = (bool)((byte)(uVar42 >> 2) & 1);
    auVar48._8_4_ = (uint)bVar5 * auVar57._8_4_ | (uint)!bVar5 * auVar51._8_4_;
    bVar5 = (bool)((byte)(uVar42 >> 3) & 1);
    auVar48._12_4_ = (uint)bVar5 * auVar57._12_4_ | (uint)!bVar5 * auVar51._12_4_;
    auVar62._4_4_ = __real_0000000c;
    auVar62._0_4_ = __real_0000000c;
    auVar62._8_4_ = __real_0000000c;
    auVar62._12_4_ = __real_0000000c;
    auVar62._16_4_ = __real_0000000c;
    auVar62._20_4_ = __real_0000000c;
    auVar62._24_4_ = __real_0000000c;
    auVar62._28_4_ = __real_0000000c;
    auVar51 = vxorps_avx512vl(auVar96,auVar96);
    auVar58 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)puVar3));
    auVar68._0_4_ = (uint)(bVar45 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar51._0_4_;
    bVar5 = (bool)((byte)(uVar42 >> 1) & 1);
    auVar68._4_4_ = (uint)bVar5 * auVar58._4_4_ | (uint)!bVar5 * auVar51._4_4_;
    bVar5 = (bool)((byte)(uVar42 >> 2) & 1);
    auVar68._8_4_ = (uint)bVar5 * auVar58._8_4_ | (uint)!bVar5 * auVar51._8_4_;
    bVar5 = (bool)((byte)(uVar42 >> 3) & 1);
    auVar68._12_4_ = (uint)bVar5 * auVar58._12_4_ | (uint)!bVar5 * auVar51._12_4_;
    auVar68._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar58._16_4_;
    auVar68._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar58._20_4_;
    auVar68._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar58._24_4_;
    auVar68._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar58._28_4_;
    uVar26 = vpcmpd_avx512vl(auVar66,auVar67,5);
    auVar51 = vxorps_avx512vl(auVar99,auVar99);
    local_1a0[0] = (bVar45 & 1) * auVar49._0_4_ | !(bool)(bVar45 & 1) * local_1a0[0];
    bVar5 = (bool)((byte)(uVar42 >> 1) & 1);
    local_1a0[1] = bVar5 * auVar49._4_4_ | !bVar5 * local_1a0[1];
    bVar5 = (bool)((byte)(uVar42 >> 2) & 1);
    local_1a0[2] = bVar5 * auVar49._8_4_ | !bVar5 * local_1a0[2];
    bVar5 = (bool)((byte)(uVar42 >> 3) & 1);
    local_1a0[3] = bVar5 * auVar49._12_4_ | !bVar5 * local_1a0[3];
    bVar5 = (bool)((byte)(uVar42 >> 4) & 1);
    uStack_190 = (uint)bVar5 * (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_ |
                 !bVar5 * uStack_190;
    bVar5 = (bool)((byte)(uVar42 >> 5) & 1);
    uStack_18c = (uint)bVar5 * (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_ |
                 !bVar5 * uStack_18c;
    bVar5 = (bool)((byte)(uVar42 >> 6) & 1);
    uStack_188 = (uint)bVar5 * (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_ |
                 !bVar5 * uStack_188;
    bVar5 = SUB81(uVar42 >> 7,0);
    uStack_184 = (uint)bVar5 * (uint)(byte)(uVar42 >> 7) * auVar59._28_4_ | !bVar5 * uStack_184;
    local_180 = (uint)(bVar45 & 1) *
                ((uint)(bVar45 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_) |
                !(bool)(bVar45 & 1) * local_180;
    bVar5 = (bool)((byte)(uVar42 >> 1) & 1);
    uStack_17c = (uint)bVar5 * ((uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar50._4_4_) |
                 !bVar5 * uStack_17c;
    bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
    uStack_178 = (uint)bVar4 * ((uint)bVar6 * auVar64._8_4_ | (uint)!bVar6 * auVar50._8_4_) |
                 !bVar4 * uStack_178;
    bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
    uStack_174 = (uint)bVar4 * ((uint)bVar9 * auVar64._12_4_ | (uint)!bVar9 * auVar50._12_4_) |
                 !bVar4 * uStack_174;
    bVar4 = (bool)((byte)(uVar42 >> 4) & 1);
    uStack_170 = (uint)bVar4 * (uint)((byte)(uVar42 >> 4) & 1) * auVar64._16_4_ |
                 !bVar4 * uStack_170;
    bVar4 = (bool)((byte)(uVar42 >> 5) & 1);
    uStack_16c = (uint)bVar4 * (uint)((byte)(uVar42 >> 5) & 1) * auVar64._20_4_ |
                 !bVar4 * uStack_16c;
    bVar4 = (bool)((byte)(uVar42 >> 6) & 1);
    uStack_168 = (uint)bVar4 * (uint)((byte)(uVar42 >> 6) & 1) * auVar64._24_4_ |
                 !bVar4 * uStack_168;
    bVar4 = SUB81(uVar42 >> 7,0);
    uStack_164 = (uint)bVar4 * (uint)(byte)(uVar42 >> 7) * auVar64._28_4_ | !bVar4 * uStack_164;
    local_160 = (bVar45 & 1) * auVar48._0_4_ | !(bool)(bVar45 & 1) * local_160;
    bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
    uStack_15c = bVar4 * auVar48._4_4_ | !bVar4 * uStack_15c;
    bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
    uStack_158 = bVar4 * auVar48._8_4_ | !bVar4 * uStack_158;
    bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
    uStack_154 = bVar4 * auVar48._12_4_ | !bVar4 * uStack_154;
    bVar4 = (bool)((byte)(uVar42 >> 4) & 1);
    uStack_150 = (uint)bVar4 * (uint)((byte)(uVar42 >> 4) & 1) * auVar57._16_4_ |
                 !bVar4 * uStack_150;
    bVar4 = (bool)((byte)(uVar42 >> 5) & 1);
    uStack_14c = (uint)bVar4 * (uint)((byte)(uVar42 >> 5) & 1) * auVar57._20_4_ |
                 !bVar4 * uStack_14c;
    bVar4 = (bool)((byte)(uVar42 >> 6) & 1);
    uStack_148 = (uint)bVar4 * (uint)((byte)(uVar42 >> 6) & 1) * auVar57._24_4_ |
                 !bVar4 * uStack_148;
    bVar4 = SUB81(uVar42 >> 7,0);
    uStack_144 = (uint)bVar4 * (uint)(byte)(uVar42 >> 7) * auVar57._28_4_ | !bVar4 * uStack_144;
    uVar25 = vcmpps_avx512vl(auVar68,ZEXT1632(auVar51),0xc);
    if ((byte)((byte)uVar25 | (byte)uVar26) == 0xff) {
      uVar40 = (ulonglong)auVar66._0_4_;
      lVar43 = uVar40 * 3;
      pauVar2 = (undefined1 (*) [32])(param_4 + uVar40 * 0xc);
      if (bVar45 == 0xff) {
        auVar59 = pauVar2[1];
        auVar64 = vblendps_avx(auVar59,*pauVar2,0x24);
        auVar57 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar59);
        auVar69 = vpermt2ps_avx512vl(auVar64,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar59 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar59);
        auVar70 = vinsertf32x4_avx512vl(auVar57,auVar59._0_16_,1);
        auVar71 = vshuff64x2_avx512vl(auVar57,auVar59,3);
        auVar59 = *(undefined1 (*) [32])(param_5 + uVar40 * 0xc);
        auVar64 = *(undefined1 (*) [32])(param_5 + 0x20 + uVar40 * 0xc);
        auVar57 = *(undefined1 (*) [32])(param_5 + 0x40 + uVar40 * 0xc);
        auVar58 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar59,auVar64);
        auVar60 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar57,auVar64);
        auVar72 = vinsertf32x4_avx512vl(auVar58,auVar60._0_16_,1);
        auVar73 = vshuff64x2_avx512vl(auVar58,auVar60,3);
        auVar59 = vblendps_avx(auVar64,auVar59,0x24);
        auVar74 = vpermt2ps_avx512vl(auVar59,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar57);
      }
      else {
        auVar50 = vxorps_avx512vl(auVar48,auVar48);
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)(puVar3 + (longlong)*pauVar2));
        auVar70._0_4_ =
             (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
        auVar70._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
        auVar70._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
        auVar70._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar70._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar70._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar70._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar70._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + lVar43));
        auVar71._0_4_ =
             (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar51._0_4_;
        bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
        auVar71._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar51._4_4_;
        bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
        auVar71._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar51._8_4_;
        bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
        auVar71._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar51._12_4_;
        auVar71._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar71._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar71._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar71._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar2 * 2));
        auVar69._4_4_ = (uint)((byte)(uVar42 >> 1) & 1) * auVar59._4_4_;
        auVar69._0_4_ = (uint)(bVar45 & 1) * auVar59._0_4_;
        auVar69._8_4_ = (uint)((byte)(uVar42 >> 2) & 1) * auVar59._8_4_;
        auVar69._12_4_ = (uint)((byte)(uVar42 >> 3) & 1) * auVar59._12_4_;
        auVar69._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar69._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar69._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar69._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        param_5 = param_5 + uVar40 * 0xc;
        auVar50 = vxorps_avx512vl(auVar49,auVar49);
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)(puVar3 + param_5));
        auVar72._0_4_ =
             (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
        auVar72._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
        auVar72._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
        auVar72._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar72._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar72._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar72._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar72._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar50 = vxorps_avx512vl(auVar97,auVar97);
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)(param_5 + lVar43));
        auVar73._0_4_ =
             (uint)(bVar45 & 1) * auVar59._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar42 >> 1) & 1);
        auVar73._4_4_ = (uint)bVar4 * auVar59._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar42 >> 2) & 1);
        auVar73._8_4_ = (uint)bVar4 * auVar59._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar42 >> 3) & 1);
        auVar73._12_4_ = (uint)bVar4 * auVar59._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar73._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar73._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar73._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar73._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar59 = vgatherdps_avx512vl(*(undefined4 *)((longlong)local_1a0 + param_5));
        auVar74._4_4_ = (uint)((byte)(uVar42 >> 1) & 1) * auVar59._4_4_;
        auVar74._0_4_ = (uint)(bVar45 & 1) * auVar59._0_4_;
        auVar74._8_4_ = (uint)((byte)(uVar42 >> 2) & 1) * auVar59._8_4_;
        auVar74._12_4_ = (uint)((byte)(uVar42 >> 3) & 1) * auVar59._12_4_;
        auVar74._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar74._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar74._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar74._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
      }
      auVar30._4_4_ = local_1a0[1];
      auVar30._0_4_ = local_1a0[0];
      auVar30._8_4_ = local_1a0[2];
      auVar30._12_4_ = local_1a0[3];
      auVar30._16_4_ = uStack_190;
      auVar30._20_4_ = uStack_18c;
      auVar30._24_4_ = uStack_188;
      auVar30._28_4_ = uStack_184;
      auVar33._4_4_ = uStack_17c;
      auVar33._0_4_ = local_180;
      auVar33._8_4_ = uStack_178;
      auVar33._12_4_ = uStack_174;
      auVar33._16_4_ = uStack_170;
      auVar33._20_4_ = uStack_16c;
      auVar33._24_4_ = uStack_168;
      auVar33._28_4_ = uStack_164;
      auVar36._4_4_ = uStack_15c;
      auVar36._0_4_ = local_160;
      auVar36._8_4_ = uStack_158;
      auVar36._12_4_ = uStack_154;
      auVar36._16_4_ = uStack_150;
      auVar36._20_4_ = uStack_14c;
      auVar36._24_4_ = uStack_148;
      auVar36._28_4_ = uStack_144;
      auVar59 = vsubps_avx512vl(auVar70,auVar30);
      auVar64 = vsubps_avx512vl(auVar71,auVar33);
      auVar57 = vsubps_avx512vl(auVar69,auVar36);
      auVar64 = vmulps_avx512vl(auVar73,auVar64);
      auVar59 = vfmadd231ps_avx512vl(auVar64,auVar72,auVar59);
      auVar59 = vfmadd231ps_avx512vl(auVar59,auVar74,auVar57);
      auVar50 = vxorps_avx512vl(auVar57._0_16_,auVar57._0_16_);
      uVar42 = vcmpps_avx512vl(auVar68,ZEXT1632(auVar50),4);
      uVar46 = vcmpps_avx512vl(ZEXT1632(auVar50),auVar59,1);
      uVar47 = vpcmpgtd_avx512vl(auVar67,auVar66);
      uVar47 = uVar42 & uVar46 & uVar47;
      bVar45 = (byte)uVar47;
      if (bVar45 != 0) {
        auVar66 = vfmadd231ps_avx512vl(auVar30,auVar72,auVar59);
        auVar67 = vfmadd231ps_avx512vl(auVar33,auVar73,auVar59);
        auVar64 = vfmadd231ps_avx512vl(auVar36,auVar74,auVar59);
        local_1a0[0] = (uint)(bVar45 & 1) * auVar66._0_4_ | !(bool)(bVar45 & 1) * local_1a0[0];
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        local_1a0[1] = (uint)bVar4 * auVar66._4_4_ | !bVar4 * local_1a0[1];
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        local_1a0[2] = (uint)bVar4 * auVar66._8_4_ | !bVar4 * local_1a0[2];
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        local_1a0[3] = (uint)bVar4 * auVar66._12_4_ | !bVar4 * local_1a0[3];
        bVar4 = (bool)((byte)(uVar47 >> 4) & 1);
        uStack_190 = (uint)bVar4 * auVar66._16_4_ | !bVar4 * uStack_190;
        bVar4 = (bool)((byte)(uVar47 >> 5) & 1);
        uStack_18c = (uint)bVar4 * auVar66._20_4_ | !bVar4 * uStack_18c;
        bVar4 = (bool)((byte)(uVar47 >> 6) & 1);
        uStack_188 = (uint)bVar4 * auVar66._24_4_ | !bVar4 * uStack_188;
        bVar4 = SUB81(uVar47 >> 7,0);
        uStack_184 = (uint)bVar4 * auVar66._28_4_ | !bVar4 * uStack_184;
        local_180 = (uint)(bVar45 & 1) * auVar67._0_4_ | !(bool)(bVar45 & 1) * local_180;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        uStack_17c = (uint)bVar4 * auVar67._4_4_ | !bVar4 * uStack_17c;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        uStack_178 = (uint)bVar4 * auVar67._8_4_ | !bVar4 * uStack_178;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        uStack_174 = (uint)bVar4 * auVar67._12_4_ | !bVar4 * uStack_174;
        bVar4 = (bool)((byte)(uVar47 >> 4) & 1);
        uStack_170 = (uint)bVar4 * auVar67._16_4_ | !bVar4 * uStack_170;
        bVar4 = (bool)((byte)(uVar47 >> 5) & 1);
        uStack_16c = (uint)bVar4 * auVar67._20_4_ | !bVar4 * uStack_16c;
        bVar4 = (bool)((byte)(uVar47 >> 6) & 1);
        uStack_168 = (uint)bVar4 * auVar67._24_4_ | !bVar4 * uStack_168;
        bVar4 = SUB81(uVar47 >> 7,0);
        uStack_164 = (uint)bVar4 * auVar67._28_4_ | !bVar4 * uStack_164;
        local_160 = (uint)(bVar45 & 1) * auVar64._0_4_ | !(bool)(bVar45 & 1) * local_160;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        uStack_15c = (uint)bVar4 * auVar64._4_4_ | !bVar4 * uStack_15c;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        uStack_158 = (uint)bVar4 * auVar64._8_4_ | !bVar4 * uStack_158;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        uStack_154 = (uint)bVar4 * auVar64._12_4_ | !bVar4 * uStack_154;
        bVar4 = (bool)((byte)(uVar47 >> 4) & 1);
        uStack_150 = (uint)bVar4 * auVar64._16_4_ | !bVar4 * uStack_150;
        bVar4 = (bool)((byte)(uVar47 >> 5) & 1);
        uStack_14c = (uint)bVar4 * auVar64._20_4_ | !bVar4 * uStack_14c;
        bVar4 = (bool)((byte)(uVar47 >> 6) & 1);
        uStack_148 = (uint)bVar4 * auVar64._24_4_ | !bVar4 * uStack_148;
        bVar4 = SUB81(uVar47 >> 7,0);
        uStack_144 = (uint)bVar4 * auVar64._28_4_ | !bVar4 * uStack_144;
        pauVar2 = (undefined1 (*) [32])(param_6 + uVar40 * 0xc);
        if (bVar45 == 0xff) {
          auVar66 = pauVar2[1];
          auVar57 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                       ,*pauVar2,auVar66);
          auVar58 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                       ,pauVar2[2],auVar66);
          auVar75 = vinsertf32x4_avx512vl(auVar57,auVar58._0_16_,1);
          auVar76 = vshuff64x2_avx512vl(auVar57,auVar58,3);
          auVar66 = vblendps_avx(auVar66,*pauVar2,0x24);
          auVar77 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                       ,auVar66,pauVar2[2]);
        }
        else {
          auVar66 = vgatherdps_avx512vl(*(undefined4 *)(unaff_RBX + (longlong)*pauVar2));
          auVar75._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar66._4_4_;
          auVar75._0_4_ = (uint)(bVar45 & 1) * auVar66._0_4_;
          auVar75._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar66._8_4_;
          auVar75._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar66._12_4_;
          auVar75._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
          auVar75._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
          auVar75._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
          auVar75._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
          auVar50 = vxorps_avx512vl(auVar97,auVar97);
          auVar66 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + uVar41));
          auVar76._0_4_ =
               (uint)(bVar45 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
          bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar76._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * auVar50._4_4_;
          bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar76._8_4_ = (uint)bVar4 * auVar66._8_4_ | (uint)!bVar4 * auVar50._8_4_;
          bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar76._12_4_ = (uint)bVar4 * auVar66._12_4_ | (uint)!bVar4 * auVar50._12_4_;
          auVar76._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
          auVar76._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
          auVar76._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
          auVar76._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
          auVar50 = vxorps_avx512vl(auVar98,auVar98);
          auVar66 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + lVar43));
          auVar77._0_4_ =
               (uint)(bVar45 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
          bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar77._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * auVar50._4_4_;
          bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar77._8_4_ = (uint)bVar4 * auVar66._8_4_ | (uint)!bVar4 * auVar50._8_4_;
          bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar77._12_4_ = (uint)bVar4 * auVar66._12_4_ | (uint)!bVar4 * auVar50._12_4_;
          auVar77._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
          auVar77._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
          auVar77._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
          auVar77._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
        }
        auVar66 = vpaddd_avx512vl(auVar63,auVar63);
        vpaddd_avx512vl(auVar63,auVar66);
        auVar50 = vxorps_avx512vl(auVar67._0_16_,auVar67._0_16_);
        auVar66 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar40 * 0xc));
        auVar78._0_4_ =
             (uint)(bVar45 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        auVar78._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        auVar78._8_4_ = (uint)bVar4 * auVar66._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        auVar78._12_4_ = (uint)bVar4 * auVar66._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar78._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
        auVar78._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
        auVar78._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
        auVar78._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
        auVar66 = vpslld_avx512vl(auVar63,2);
        auVar67 = vpslld_avx512vl(auVar63,3);
        auVar66 = vpaddd_avx512vl(auVar67,auVar66);
        auVar27._4_4_ = __real_00000004;
        auVar27._0_4_ = __real_00000004;
        auVar27._8_4_ = __real_00000004;
        auVar27._12_4_ = __real_00000004;
        auVar27._16_4_ = __real_00000004;
        auVar27._20_4_ = __real_00000004;
        auVar27._24_4_ = __real_00000004;
        auVar27._28_4_ = __real_00000004;
        auVar67 = vpaddd_avx512vl(auVar66,auVar27);
        auVar50 = vxorps_avx512vl(auVar64._0_16_,auVar64._0_16_);
        auVar64 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + lVar43));
        auVar79._0_4_ =
             (uint)(bVar45 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        auVar79._4_4_ = (uint)bVar4 * auVar64._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        auVar79._8_4_ = (uint)bVar4 * auVar64._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        auVar79._12_4_ = (uint)bVar4 * auVar64._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar79._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar64._16_4_;
        auVar79._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar64._20_4_;
        auVar79._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar64._24_4_;
        auVar79._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar64._28_4_;
        auVar28._4_4_ = __real_00000008;
        auVar28._0_4_ = __real_00000008;
        auVar28._8_4_ = __real_00000008;
        auVar28._12_4_ = __real_00000008;
        auVar28._16_4_ = __real_00000008;
        auVar28._20_4_ = __real_00000008;
        auVar28._24_4_ = __real_00000008;
        auVar28._28_4_ = __real_00000008;
        vpaddd_avx512vl(auVar66,auVar28);
        auVar50 = vxorps_avx512vl(auVar67._0_16_,auVar67._0_16_);
        auVar66 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (longlong)param_1));
        auVar80._0_4_ =
             (uint)(bVar45 & 1) * auVar66._0_4_ | (uint)!(bool)(bVar45 & 1) * auVar50._0_4_;
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        auVar80._4_4_ = (uint)bVar4 * auVar66._4_4_ | (uint)!bVar4 * auVar50._4_4_;
        bVar4 = (bool)((byte)(uVar47 >> 2) & 1);
        auVar80._8_4_ = (uint)bVar4 * auVar66._8_4_ | (uint)!bVar4 * auVar50._8_4_;
        bVar4 = (bool)((byte)(uVar47 >> 3) & 1);
        auVar80._12_4_ = (uint)bVar4 * auVar66._12_4_ | (uint)!bVar4 * auVar50._12_4_;
        auVar80._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar66._16_4_;
        auVar80._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar66._20_4_;
        auVar80._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar66._24_4_;
        auVar80._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar66._28_4_;
        auVar31._4_4_ = local_1a0[1];
        auVar31._0_4_ = local_1a0[0];
        auVar31._8_4_ = local_1a0[2];
        auVar31._12_4_ = local_1a0[3];
        auVar31._16_4_ = uStack_190;
        auVar31._20_4_ = uStack_18c;
        auVar31._24_4_ = uStack_188;
        auVar31._28_4_ = uStack_184;
        auVar34._4_4_ = uStack_17c;
        auVar34._0_4_ = local_180;
        auVar34._8_4_ = uStack_178;
        auVar34._12_4_ = uStack_174;
        auVar34._16_4_ = uStack_170;
        auVar34._20_4_ = uStack_16c;
        auVar34._24_4_ = uStack_168;
        auVar34._28_4_ = uStack_164;
        auVar37._4_4_ = uStack_15c;
        auVar37._0_4_ = local_160;
        auVar37._8_4_ = uStack_158;
        auVar37._12_4_ = uStack_154;
        auVar37._16_4_ = uStack_150;
        auVar37._20_4_ = uStack_14c;
        auVar37._24_4_ = uStack_148;
        auVar37._28_4_ = uStack_144;
        auVar66 = vsubps_avx512vl(auVar31,auVar78);
        auVar67 = vsubps_avx512vl(auVar34,auVar79);
        auVar64 = vsubps_avx512vl(auVar37,auVar80);
        auVar83._4_4_ = param_8;
        auVar83._0_4_ = param_8;
        auVar83._8_4_ = param_8;
        auVar83._12_4_ = param_8;
        auVar83._16_4_ = param_8;
        auVar83._20_4_ = param_8;
        auVar83._24_4_ = param_8;
        auVar83._28_4_ = param_8;
        auVar66 = vfnmadd231ps_avx512vl(auVar66,auVar83,auVar75);
        auVar67 = vfnmadd231ps_avx512vl(auVar67,auVar83,auVar76);
        auVar64 = vfnmadd231ps_avx512vl(auVar64,auVar83,auVar77);
        auVar57 = vmulps_avx512vl(auVar73,auVar67);
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar72,auVar66);
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar74,auVar64);
        auVar66 = vfnmadd231ps_avx512vl(auVar66,auVar57,auVar72);
        auVar67 = vfnmadd231ps_avx512vl(auVar67,auVar57,auVar73);
        auVar64 = vfnmadd213ps_avx512vl(auVar57,auVar74,auVar64);
        auVar57 = vmulps_avx512vl(auVar67,auVar67);
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar66,auVar66);
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar64,auVar64);
        auVar57 = vsqrtps_avx512vl(auVar57);
        auVar82._4_4_ = param_7;
        auVar82._0_4_ = param_7;
        auVar82._8_4_ = param_7;
        auVar82._12_4_ = param_7;
        auVar82._16_4_ = param_7;
        auVar82._20_4_ = param_7;
        auVar82._24_4_ = param_7;
        auVar82._28_4_ = param_7;
        auVar59 = vmulps_avx512vl(auVar82,auVar59);
        auVar59 = vminps_avx512vl(auVar59,auVar57);
        auVar29._4_4_ = __real_322bcc77;
        auVar29._0_4_ = __real_322bcc77;
        auVar29._8_4_ = __real_322bcc77;
        auVar29._12_4_ = __real_322bcc77;
        auVar29._16_4_ = __real_322bcc77;
        auVar29._20_4_ = __real_322bcc77;
        auVar29._24_4_ = __real_322bcc77;
        auVar29._28_4_ = __real_322bcc77;
        uVar42 = vcmpps_avx512vl(auVar57,auVar29,5);
        auVar59 = vdivps_avx512vl(auVar59,auVar57);
        auVar81._4_4_ = (uint)((byte)(uVar42 >> 1) & 1) * auVar59._4_4_;
        auVar81._0_4_ = (uint)((byte)uVar42 & 1) * auVar59._0_4_;
        auVar81._8_4_ = (uint)((byte)(uVar42 >> 2) & 1) * auVar59._8_4_;
        auVar81._12_4_ = (uint)((byte)(uVar42 >> 3) & 1) * auVar59._12_4_;
        auVar81._16_4_ = (uint)((byte)(uVar42 >> 4) & 1) * auVar59._16_4_;
        auVar81._20_4_ = (uint)((byte)(uVar42 >> 5) & 1) * auVar59._20_4_;
        auVar81._24_4_ = (uint)((byte)(uVar42 >> 6) & 1) * auVar59._24_4_;
        auVar81._28_4_ = (uint)(byte)(uVar42 >> 7) * auVar59._28_4_;
        auVar66 = vfnmadd213ps_avx512vl(auVar66,auVar81,auVar31);
        auVar67 = vfnmadd213ps_avx512vl(auVar67,auVar81,auVar34);
        auVar59 = vfnmadd213ps_avx512vl(auVar64,auVar81,auVar37);
        bVar4 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar9 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar21 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar14 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar18 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar22 = SUB81(uVar47 >> 7,0);
        bVar5 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar13 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar7 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar11 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar15 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar19 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar23 = SUB81(uVar47 >> 7,0);
        bVar6 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar17 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar8 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar16 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar20 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar24 = SUB81(uVar47 >> 7,0);
        auVar32._4_4_ = (uint)bVar4 * auVar66._4_4_ | !bVar4 * local_1a0[1];
        auVar32._0_4_ = (uint)(bVar45 & 1) * auVar66._0_4_ | !(bool)(bVar45 & 1) * local_1a0[0];
        auVar32._8_4_ = (uint)bVar9 * auVar66._8_4_ | !bVar9 * local_1a0[2];
        auVar32._12_4_ = (uint)bVar21 * auVar66._12_4_ | !bVar21 * local_1a0[3];
        auVar32._16_4_ = (uint)bVar10 * auVar66._16_4_ | !bVar10 * uStack_190;
        auVar32._20_4_ = (uint)bVar14 * auVar66._20_4_ | !bVar14 * uStack_18c;
        auVar32._24_4_ = (uint)bVar18 * auVar66._24_4_ | !bVar18 * uStack_188;
        auVar32._28_4_ = (uint)bVar22 * auVar66._28_4_ | !bVar22 * uStack_184;
        auVar35._4_4_ = (uint)bVar5 * auVar67._4_4_ | !bVar5 * uStack_17c;
        auVar35._0_4_ = (uint)(bVar45 & 1) * auVar67._0_4_ | !(bool)(bVar45 & 1) * local_180;
        auVar35._8_4_ = (uint)bVar13 * auVar67._8_4_ | !bVar13 * uStack_178;
        auVar35._12_4_ = (uint)bVar7 * auVar67._12_4_ | !bVar7 * uStack_174;
        auVar35._16_4_ = (uint)bVar11 * auVar67._16_4_ | !bVar11 * uStack_170;
        auVar35._20_4_ = (uint)bVar15 * auVar67._20_4_ | !bVar15 * uStack_16c;
        auVar35._24_4_ = (uint)bVar19 * auVar67._24_4_ | !bVar19 * uStack_168;
        auVar35._28_4_ = (uint)bVar23 * auVar67._28_4_ | !bVar23 * uStack_164;
        auVar38._4_4_ = (uint)bVar6 * auVar59._4_4_ | !bVar6 * uStack_15c;
        auVar38._0_4_ = (uint)(bVar45 & 1) * auVar59._0_4_ | !(bool)(bVar45 & 1) * local_160;
        auVar38._8_4_ = (uint)bVar17 * auVar59._8_4_ | !bVar17 * uStack_158;
        auVar38._12_4_ = (uint)bVar8 * auVar59._12_4_ | !bVar8 * uStack_154;
        auVar38._16_4_ = (uint)bVar12 * auVar59._16_4_ | !bVar12 * uStack_150;
        auVar38._20_4_ = (uint)bVar16 * auVar59._20_4_ | !bVar16 * uStack_14c;
        auVar38._24_4_ = (uint)bVar20 * auVar59._24_4_ | !bVar20 * uStack_148;
        auVar38._28_4_ = (uint)bVar24 * auVar59._28_4_ | !bVar24 * uStack_144;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar55,uVar47,auVar32);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar55 | auVar52),uVar47,auVar35);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar55 | auVar56),uVar47,auVar38);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar55 | auVar62),uVar47,auVar68);
      }
    }
  }
  return;
}

// ApplyPBDPlanarConstraintsNoFriction_avx512skx @ 140300e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsNoFriction_avx512skx
               (undefined4 *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  undefined4 *puVar2;
  bool bVar3;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  ulonglong uVar30;
  ulonglong unaff_RBX;
  undefined1 *unaff_RSI;
  longlong lVar31;
  int iVar32;
  byte bVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar36;
  uint uVar57;
  uint uVar60;
  uint uVar66;
  uint uVar69;
  uint uVar72;
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  uint uVar37;
  uint uVar38;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  uint uVar58;
  uint uVar59;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar67;
  uint uVar68;
  uint uVar70;
  uint uVar71;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM17 [64];
  undefined1 auVar82 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar83 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar84 [16];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 in_ZMM23 [64];
  undefined1 in_ZMM24 [64];
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
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  auVar84 = in_ZMM20._0_16_;
  auVar83 = in_ZMM19._0_16_;
  auVar82 = in_ZMM18._0_16_;
  auVar39 = in_ZMM17._0_16_;
  local_38 = in_ZMM9._0_16_;
  local_48 = in_ZMM8._0_16_;
  local_58 = in_ZMM7._0_16_;
  local_68 = in_ZMM6._0_16_;
  uVar36 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar36 = param_5;
  }
  if ((int)(uVar36 & 0xfffffff8) < 1) {
    iVar32 = 0;
  }
  else {
    unaff_RSI = local_c0;
    lVar31 = 0x10;
    iVar32 = 0;
    auVar78._4_4_ = __real_00000004;
    auVar78._0_4_ = __real_00000004;
    auVar78._8_4_ = __real_00000004;
    auVar78._12_4_ = __real_00000004;
    auVar79._4_4_ = __real_00000008;
    auVar79._0_4_ = __real_00000008;
    auVar79._8_4_ = __real_00000008;
    auVar79._12_4_ = __real_00000008;
    auVar50._16_4_ = __real_00000008;
    auVar50._0_16_ = auVar79;
    auVar50._20_4_ = __real_00000008;
    auVar50._24_4_ = __real_00000008;
    auVar50._28_4_ = __real_00000008;
    auVar80._4_4_ = __real_0000000c;
    auVar80._0_4_ = __real_0000000c;
    auVar80._8_4_ = __real_0000000c;
    auVar80._12_4_ = __real_0000000c;
    auVar51._16_4_ = __real_0000000c;
    auVar51._0_16_ = auVar80;
    auVar51._20_4_ = __real_0000000c;
    auVar51._24_4_ = __real_0000000c;
    auVar51._28_4_ = __real_0000000c;
    auVar81._0_12_ = ZEXT812(0);
    auVar81._12_4_ = 0;
    unaff_RBX = 0;
    do {
      auVar41 = vpslld_avx512vl(*(undefined1 (*) [32])(param_2 + (unaff_RBX & 0xffffffff)),4);
      auVar39 = auVar41._0_16_;
      vxorps_avx512vl(in_ZMM22._0_16_,in_ZMM22._0_16_);
      auVar41 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
      in_ZMM22 = ZEXT3264(auVar41);
      auVar82 = auVar39 | auVar78;
      vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
      local_c0 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
      in_ZMM23 = ZEXT3264(local_c0);
      auVar83 = auVar39 | auVar79;
      vxorps_avx512vl(in_ZMM24._0_16_,in_ZMM24._0_16_);
      local_a0 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
      in_ZMM24 = ZEXT3264(local_a0);
      auVar84 = auVar39 | auVar80;
      vxorps_avx512vl(in_ZMM21._0_16_,in_ZMM21._0_16_);
      auVar42 = vgatherdps_avx512vl(*param_1);
      in_ZMM21 = ZEXT3264(auVar42);
      uVar24 = vcmpps_avx512vl(auVar42,ZEXT1632(auVar81),8);
      if ((char)uVar24 == '\0') {
        auVar43 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar31 * 4);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar31 * 4);
        auVar49 = *(undefined1 (*) [32])(param_3 + lVar31 * 4);
        auVar48 = vblendps_avx(auVar45,auVar43,0x24);
        auVar43 = vpermt2ps_avx512vl(auVar43,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar45);
        auVar44 = vpermt2ps_avx512vl(auVar48,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar49);
        auVar45 = vpermt2ps_avx512vl(auVar49,
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45);
        auVar46 = vinsertf32x4_avx512vl(auVar43,auVar45._0_16_,1);
        auVar47 = vshuff64x2_avx512vl(auVar43,auVar45,3);
        auVar43 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar31 * 4);
        auVar45 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar31 * 4);
        auVar49 = *(undefined1 (*) [32])(param_4 + lVar31 * 4);
        auVar48 = vblendps_avx(auVar45,auVar43,0x24);
        auVar43 = vpermt2ps_avx512vl(auVar43,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar45);
        auVar48 = vpermt2ps_avx512vl(auVar48,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar49);
        auVar45 = vpermt2ps_avx512vl(auVar49,
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45);
        auVar49 = vinsertf32x4_avx512vl(auVar43,auVar45._0_16_,1);
        auVar43 = vshuff64x2_avx512vl(auVar43,auVar45,3);
        auVar45 = vsubps_avx512vl(auVar46,auVar41);
        auVar46 = vsubps_avx512vl(auVar47,local_c0);
        auVar44 = vsubps_avx512vl(auVar44,local_a0);
        auVar46 = vmulps_avx512vl(auVar43,auVar46);
        auVar45 = vfmadd231ps_avx512vl(auVar46,auVar49,auVar45);
        auVar45 = vfmadd231ps_avx512vl(auVar45,auVar48,auVar44);
        uVar34 = vcmpps_avx512vl(ZEXT1632(auVar81),auVar45,1);
        uVar30 = vcmpps_avx512vl(auVar42,ZEXT1632(auVar81),4);
        uVar34 = uVar34 & uVar30;
        bVar33 = (byte)uVar34;
        if (bVar33 != 0) {
          auVar49 = vfmadd213ps_avx512vl(auVar49,auVar45,auVar41);
          auVar43 = vfmadd213ps_avx512vl(auVar43,auVar45,local_c0);
          auVar45 = vfmadd213ps_avx512vl(auVar48,auVar45,local_a0);
          local_e0._0_4_ = auVar41._0_4_;
          local_e0._4_4_ = auVar41._4_4_;
          local_e0._8_4_ = auVar41._8_4_;
          local_e0._12_4_ = auVar41._12_4_;
          local_e0._16_4_ = auVar41._16_4_;
          local_e0._20_4_ = auVar41._20_4_;
          local_e0._24_4_ = auVar41._24_4_;
          local_e0._28_4_ = auVar41._28_4_;
          bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
          bVar4 = (bool)((byte)(uVar34 >> 2) & 1);
          bVar5 = (bool)((byte)(uVar34 >> 3) & 1);
          bVar8 = (bool)((byte)(uVar34 >> 4) & 1);
          bVar12 = (bool)((byte)(uVar34 >> 5) & 1);
          bVar16 = (bool)((byte)(uVar34 >> 6) & 1);
          bVar20 = SUB81(uVar34 >> 7,0);
          local_e0._4_4_ = (uint)bVar3 * auVar49._4_4_ | (uint)!bVar3 * local_e0._4_4_;
          local_e0._0_4_ =
               (uint)(bVar33 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar33 & 1) * local_e0._0_4_;
          local_e0._8_4_ = (uint)bVar4 * auVar49._8_4_ | (uint)!bVar4 * local_e0._8_4_;
          local_e0._12_4_ = (uint)bVar5 * auVar49._12_4_ | (uint)!bVar5 * local_e0._12_4_;
          local_e0._16_4_ = (uint)bVar8 * auVar49._16_4_ | (uint)!bVar8 * local_e0._16_4_;
          local_e0._20_4_ = (uint)bVar12 * auVar49._20_4_ | (uint)!bVar12 * local_e0._20_4_;
          local_e0._24_4_ = (uint)bVar16 * auVar49._24_4_ | (uint)!bVar16 * local_e0._24_4_;
          local_e0._28_4_ = (uint)bVar20 * auVar49._28_4_ | (uint)!bVar20 * local_e0._28_4_;
          bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
          bVar4 = (bool)((byte)(uVar34 >> 2) & 1);
          bVar5 = (bool)((byte)(uVar34 >> 3) & 1);
          bVar8 = (bool)((byte)(uVar34 >> 4) & 1);
          bVar12 = (bool)((byte)(uVar34 >> 5) & 1);
          bVar16 = (bool)((byte)(uVar34 >> 6) & 1);
          bVar20 = SUB81(uVar34 >> 7,0);
          local_c0._4_4_ = (uint)bVar3 * auVar43._4_4_ | (uint)!bVar3 * local_c0._4_4_;
          local_c0._0_4_ =
               (uint)(bVar33 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar33 & 1) * local_c0._0_4_;
          local_c0._8_4_ = (uint)bVar4 * auVar43._8_4_ | (uint)!bVar4 * local_c0._8_4_;
          local_c0._12_4_ = (uint)bVar5 * auVar43._12_4_ | (uint)!bVar5 * local_c0._12_4_;
          local_c0._16_4_ = (uint)bVar8 * auVar43._16_4_ | (uint)!bVar8 * local_c0._16_4_;
          local_c0._20_4_ = (uint)bVar12 * auVar43._20_4_ | (uint)!bVar12 * local_c0._20_4_;
          local_c0._24_4_ = (uint)bVar16 * auVar43._24_4_ | (uint)!bVar16 * local_c0._24_4_;
          local_c0._28_4_ = (uint)bVar20 * auVar43._28_4_ | (uint)!bVar20 * local_c0._28_4_;
          bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
          bVar4 = (bool)((byte)(uVar34 >> 2) & 1);
          bVar5 = (bool)((byte)(uVar34 >> 3) & 1);
          bVar8 = (bool)((byte)(uVar34 >> 4) & 1);
          bVar12 = (bool)((byte)(uVar34 >> 5) & 1);
          bVar16 = (bool)((byte)(uVar34 >> 6) & 1);
          bVar20 = SUB81(uVar34 >> 7,0);
          local_a0._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * local_a0._4_4_;
          local_a0._0_4_ =
               (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * local_a0._0_4_;
          local_a0._8_4_ = (uint)bVar4 * auVar45._8_4_ | (uint)!bVar4 * local_a0._8_4_;
          local_a0._12_4_ = (uint)bVar5 * auVar45._12_4_ | (uint)!bVar5 * local_a0._12_4_;
          local_a0._16_4_ = (uint)bVar8 * auVar45._16_4_ | (uint)!bVar8 * local_a0._16_4_;
          local_a0._20_4_ = (uint)bVar12 * auVar45._20_4_ | (uint)!bVar12 * local_a0._20_4_;
          local_a0._24_4_ = (uint)bVar16 * auVar45._24_4_ | (uint)!bVar16 * local_a0._24_4_;
          local_a0._28_4_ = (uint)bVar20 * auVar45._28_4_ | (uint)!bVar20 * local_a0._28_4_;
          in_ZMM22 = ZEXT3264(local_e0);
          in_ZMM23 = ZEXT3264(local_c0);
          in_ZMM24 = ZEXT3264(local_a0);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar50,uVar34,local_e0);
          vscatterdps_avx512vl(ZEXT832(param_1) + auVar51,uVar34,local_c0);
          vscatterdps_avx512vl
                    (ZEXT832(param_1) +
                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000,uVar34,
                     local_a0);
          vscatterdps_avx512vl(ZEXT832(param_1) + ZEXT1632(auVar81),uVar34,auVar42);
        }
      }
      unaff_RBX = unaff_RBX + 0x20;
      lVar31 = lVar31 + 0x18;
      iVar32 = iVar32 + 8;
    } while (iVar32 < (int)(uVar36 & 0xfffffff8));
  }
  if (iVar32 < (int)param_5) {
    auVar50 = vpbroadcastd_avx512vl();
    auVar50 = vpor_avx2(auVar50,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar51 = vpbroadcastd_avx512vl();
    uVar34 = vpcmpgtd_avx512vl(auVar51,auVar50);
    auVar41 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_2 + (iVar32 << 2)));
    bVar33 = (byte)uVar34;
    auVar45._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * auVar41._4_4_;
    auVar45._0_4_ = (uint)(bVar33 & 1) * auVar41._0_4_;
    auVar45._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * auVar41._8_4_;
    auVar45._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * auVar41._12_4_;
    auVar45._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar41._16_4_;
    auVar45._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar41._20_4_;
    auVar45._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar41._24_4_;
    auVar45._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar41._28_4_;
    auVar47 = vpslld_avx2(auVar45,4);
    auVar39 = vxorps_avx512vl(auVar39,auVar39);
    auVar45 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)(iVar32 << 2)));
    auVar40._0_4_ = (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    auVar40._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    auVar40._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    auVar40._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
    auVar41._4_4_ = __real_00000004;
    auVar41._0_4_ = __real_00000004;
    auVar41._8_4_ = __real_00000004;
    auVar41._12_4_ = __real_00000004;
    auVar41._16_4_ = __real_00000004;
    auVar41._20_4_ = __real_00000004;
    auVar41._24_4_ = __real_00000004;
    auVar41._28_4_ = __real_00000004;
    auVar39 = vxorps_avx512vl(auVar82,auVar82);
    auVar49 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    auVar82._0_4_ = (uint)(bVar33 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    auVar82._4_4_ = (uint)bVar3 * auVar49._4_4_ | (uint)!bVar3 * auVar39._4_4_;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    auVar82._8_4_ = (uint)bVar3 * auVar49._8_4_ | (uint)!bVar3 * auVar39._8_4_;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    auVar82._12_4_ = (uint)bVar3 * auVar49._12_4_ | (uint)!bVar3 * auVar39._12_4_;
    auVar42._4_4_ = __real_00000008;
    auVar42._0_4_ = __real_00000008;
    auVar42._8_4_ = __real_00000008;
    auVar42._12_4_ = __real_00000008;
    auVar42._16_4_ = __real_00000008;
    auVar42._20_4_ = __real_00000008;
    auVar42._24_4_ = __real_00000008;
    auVar42._28_4_ = __real_00000008;
    auVar39 = vxorps_avx512vl(auVar83,auVar83);
    auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_2));
    auVar83._0_4_ = (uint)(bVar33 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    auVar83._4_4_ = (uint)bVar3 * auVar48._4_4_ | (uint)!bVar3 * auVar39._4_4_;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    auVar83._8_4_ = (uint)bVar3 * auVar48._8_4_ | (uint)!bVar3 * auVar39._8_4_;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    auVar83._12_4_ = (uint)bVar3 * auVar48._12_4_ | (uint)!bVar3 * auVar39._12_4_;
    auVar43._4_4_ = __real_0000000c;
    auVar43._0_4_ = __real_0000000c;
    auVar43._8_4_ = __real_0000000c;
    auVar43._12_4_ = __real_0000000c;
    auVar43._16_4_ = __real_0000000c;
    auVar43._20_4_ = __real_0000000c;
    auVar43._24_4_ = __real_0000000c;
    auVar43._28_4_ = __real_0000000c;
    auVar44 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    auVar46._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * auVar44._4_4_;
    auVar46._0_4_ = (uint)(bVar33 & 1) * auVar44._0_4_;
    auVar46._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * auVar44._8_4_;
    auVar46._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * auVar44._12_4_;
    auVar46._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar44._16_4_;
    auVar46._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar44._20_4_;
    auVar46._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar44._24_4_;
    auVar46._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar44._28_4_;
    uVar25 = vpcmpd_avx512vl(auVar50,auVar51,5);
    auVar39 = vxorps_avx512vl(auVar84,auVar84);
    uVar36 = (bVar33 & 1) * auVar40._0_4_ | (uint)!(bool)(bVar33 & 1) * local_140;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    uVar57 = bVar3 * auVar40._4_4_ | (uint)!bVar3 * iStack_13c;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    uVar60 = bVar3 * auVar40._8_4_ | (uint)!bVar3 * iStack_138;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    uVar63 = bVar3 * auVar40._12_4_ | (uint)!bVar3 * iStack_134;
    bVar3 = (bool)((byte)(uVar34 >> 4) & 1);
    uVar66 = (uint)bVar3 * (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_ |
             (uint)!bVar3 * iStack_130;
    bVar3 = (bool)((byte)(uVar34 >> 5) & 1);
    uVar69 = (uint)bVar3 * (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_ |
             (uint)!bVar3 * iStack_12c;
    bVar3 = (bool)((byte)(uVar34 >> 6) & 1);
    uVar72 = (uint)bVar3 * (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_ |
             (uint)!bVar3 * iStack_128;
    bVar3 = SUB81(uVar34 >> 7,0);
    uVar75 = (uint)bVar3 * (uint)(byte)(uVar34 >> 7) * auVar45._28_4_ | (uint)!bVar3 * iStack_124;
    uVar37 = (bVar33 & 1) * auVar82._0_4_ | (uint)!(bool)(bVar33 & 1) * local_120;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    uVar58 = bVar3 * auVar82._4_4_ | (uint)!bVar3 * iStack_11c;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    uVar61 = bVar3 * auVar82._8_4_ | (uint)!bVar3 * iStack_118;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    uVar64 = bVar3 * auVar82._12_4_ | (uint)!bVar3 * iStack_114;
    bVar3 = (bool)((byte)(uVar34 >> 4) & 1);
    uVar67 = (uint)bVar3 * (uint)((byte)(uVar34 >> 4) & 1) * auVar49._16_4_ |
             (uint)!bVar3 * iStack_110;
    bVar3 = (bool)((byte)(uVar34 >> 5) & 1);
    uVar70 = (uint)bVar3 * (uint)((byte)(uVar34 >> 5) & 1) * auVar49._20_4_ |
             (uint)!bVar3 * iStack_10c;
    bVar3 = (bool)((byte)(uVar34 >> 6) & 1);
    uVar73 = (uint)bVar3 * (uint)((byte)(uVar34 >> 6) & 1) * auVar49._24_4_ |
             (uint)!bVar3 * iStack_108;
    bVar3 = SUB81(uVar34 >> 7,0);
    uVar76 = (uint)bVar3 * (uint)(byte)(uVar34 >> 7) * auVar49._28_4_ | (uint)!bVar3 * iStack_104;
    uVar38 = (bVar33 & 1) * auVar83._0_4_ | (uint)!(bool)(bVar33 & 1) * local_100;
    bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
    uVar59 = bVar3 * auVar83._4_4_ | (uint)!bVar3 * iStack_fc;
    bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
    uVar62 = bVar3 * auVar83._8_4_ | (uint)!bVar3 * iStack_f8;
    bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
    uVar65 = bVar3 * auVar83._12_4_ | (uint)!bVar3 * iStack_f4;
    bVar3 = (bool)((byte)(uVar34 >> 4) & 1);
    uVar68 = (uint)bVar3 * (uint)((byte)(uVar34 >> 4) & 1) * auVar48._16_4_ |
             (uint)!bVar3 * iStack_f0;
    bVar3 = (bool)((byte)(uVar34 >> 5) & 1);
    uVar71 = (uint)bVar3 * (uint)((byte)(uVar34 >> 5) & 1) * auVar48._20_4_ |
             (uint)!bVar3 * iStack_ec;
    bVar3 = (bool)((byte)(uVar34 >> 6) & 1);
    uVar74 = (uint)bVar3 * (uint)((byte)(uVar34 >> 6) & 1) * auVar48._24_4_ |
             (uint)!bVar3 * iStack_e8;
    bVar3 = SUB81(uVar34 >> 7,0);
    uVar77 = (uint)bVar3 * (uint)(byte)(uVar34 >> 7) * auVar48._28_4_ | (uint)!bVar3 * iStack_e4;
    uVar24 = vcmpps_avx512vl(auVar46,ZEXT1632(auVar39),0xc);
    if ((byte)((byte)uVar24 | (byte)uVar25) == 0xff) {
      uVar30 = (ulonglong)auVar50._0_4_;
      pauVar1 = (undefined1 (*) [32])(param_3 + uVar30 * 0xc);
      if (bVar33 == 0xff) {
        auVar45 = pauVar1[1];
        auVar49 = vblendps_avx(auVar45,*pauVar1,0x24);
        auVar48 = vpermt2ps_avx512vl(*pauVar1,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar45);
        auVar56 = vpermt2ps_avx512vl(auVar49,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar1[2]);
        auVar45 = vpermt2ps_avx512vl(pauVar1[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45);
        auVar52 = vinsertf32x4_avx512vl(auVar48,auVar45._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar48,auVar45,3);
        auVar45 = *(undefined1 (*) [32])(param_4 + uVar30 * 0xc);
        auVar49 = *(undefined1 (*) [32])(param_4 + 0x20 + uVar30 * 0xc);
        auVar48 = *(undefined1 (*) [32])(param_4 + 0x40 + uVar30 * 0xc);
        auVar44 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar45,auVar49);
        auVar53 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar48,auVar49);
        auVar54 = vinsertf32x4_avx512vl(auVar44,auVar53._0_16_,1);
        auVar44 = vshuff64x2_avx512vl(auVar44,auVar53,3);
        auVar45 = vblendps_avx(auVar49,auVar45,0x24);
        auVar49 = vpermt2ps_avx512vl(auVar45,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar48);
      }
      else {
        auVar39 = vxorps_avx512vl(auVar40,auVar40);
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)*pauVar1);
        auVar52._0_4_ =
             (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
        bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
        auVar52._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
        bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
        auVar52._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
        bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
        auVar52._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        auVar39 = vxorps_avx512vl(auVar82,auVar82);
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)(local_c0 + 8 + (longlong)*pauVar1));
        auVar55._0_4_ =
             (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
        bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
        auVar55._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
        bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
        auVar55._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
        bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
        auVar55._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
        auVar55._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar55._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar55._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar55._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)(unaff_RSI + (longlong)*pauVar1));
        auVar56._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * auVar45._4_4_;
        auVar56._0_4_ = (uint)(bVar33 & 1) * auVar45._0_4_;
        auVar56._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * auVar45._8_4_;
        auVar56._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * auVar45._12_4_;
        auVar56._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar56._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar56._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar56._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        puVar2 = (undefined4 *)(param_4 + uVar30 * 0xc);
        auVar39 = vxorps_avx512vl(auVar83,auVar83);
        auVar45 = vgatherdps_avx512vl(*puVar2);
        auVar54._0_4_ =
             (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
        bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
        bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
        bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        auVar39 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)(local_c0 + 8)));
        auVar44._0_4_ =
             (uint)(bVar33 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar39._0_4_;
        bVar3 = (bool)((byte)(uVar34 >> 1) & 1);
        auVar44._4_4_ = (uint)bVar3 * auVar45._4_4_ | (uint)!bVar3 * auVar39._4_4_;
        bVar3 = (bool)((byte)(uVar34 >> 2) & 1);
        auVar44._8_4_ = (uint)bVar3 * auVar45._8_4_ | (uint)!bVar3 * auVar39._8_4_;
        bVar3 = (bool)((byte)(uVar34 >> 3) & 1);
        auVar44._12_4_ = (uint)bVar3 * auVar45._12_4_ | (uint)!bVar3 * auVar39._12_4_;
        auVar44._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar44._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar44._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar44._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
        auVar45 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)unaff_RSI));
        auVar49._4_4_ = (uint)((byte)(uVar34 >> 1) & 1) * auVar45._4_4_;
        auVar49._0_4_ = (uint)(bVar33 & 1) * auVar45._0_4_;
        auVar49._8_4_ = (uint)((byte)(uVar34 >> 2) & 1) * auVar45._8_4_;
        auVar49._12_4_ = (uint)((byte)(uVar34 >> 3) & 1) * auVar45._12_4_;
        auVar49._16_4_ = (uint)((byte)(uVar34 >> 4) & 1) * auVar45._16_4_;
        auVar49._20_4_ = (uint)((byte)(uVar34 >> 5) & 1) * auVar45._20_4_;
        auVar49._24_4_ = (uint)((byte)(uVar34 >> 6) & 1) * auVar45._24_4_;
        auVar49._28_4_ = (uint)(byte)(uVar34 >> 7) * auVar45._28_4_;
      }
      auVar48._4_4_ = uVar57;
      auVar48._0_4_ = uVar36;
      auVar48._8_4_ = uVar60;
      auVar48._12_4_ = uVar63;
      auVar48._16_4_ = uVar66;
      auVar48._20_4_ = uVar69;
      auVar48._24_4_ = uVar72;
      auVar48._28_4_ = uVar75;
      auVar53._4_4_ = uVar58;
      auVar53._0_4_ = uVar37;
      auVar53._8_4_ = uVar61;
      auVar53._12_4_ = uVar64;
      auVar53._16_4_ = uVar67;
      auVar53._20_4_ = uVar70;
      auVar53._24_4_ = uVar73;
      auVar53._28_4_ = uVar76;
      auVar28._4_4_ = uVar59;
      auVar28._0_4_ = uVar38;
      auVar28._8_4_ = uVar62;
      auVar28._12_4_ = uVar65;
      auVar28._16_4_ = uVar68;
      auVar28._20_4_ = uVar71;
      auVar28._24_4_ = uVar74;
      auVar28._28_4_ = uVar77;
      auVar45 = vsubps_avx512vl(auVar52,auVar48);
      auVar55 = vsubps_avx512vl(auVar55,auVar53);
      auVar56 = vsubps_avx512vl(auVar56,auVar28);
      auVar55 = vmulps_avx512vl(auVar44,auVar55);
      auVar45 = vfmadd231ps_avx512vl(auVar55,auVar54,auVar45);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar49,auVar56);
      auVar39 = vxorps_avx512vl(auVar56._0_16_,auVar56._0_16_);
      uVar34 = vcmpps_avx512vl(auVar46,ZEXT1632(auVar39),4);
      uVar30 = vcmpps_avx512vl(ZEXT1632(auVar39),auVar45,1);
      uVar35 = vpcmpgtd_avx512vl(auVar51,auVar50);
      uVar35 = uVar34 & uVar30 & uVar35;
      bVar33 = (byte)uVar35;
      if (bVar33 != 0) {
        auVar50 = vfmadd213ps_avx512vl(auVar54,auVar45,auVar48);
        auVar51 = vfmadd213ps_avx512vl(auVar44,auVar45,auVar53);
        auVar45 = vfmadd213ps_avx512vl(auVar49,auVar45,auVar28);
        bVar3 = (bool)((byte)(uVar35 >> 1) & 1);
        bVar8 = (bool)((byte)(uVar35 >> 2) & 1);
        bVar20 = (bool)((byte)(uVar35 >> 3) & 1);
        bVar9 = (bool)((byte)(uVar35 >> 4) & 1);
        bVar13 = (bool)((byte)(uVar35 >> 5) & 1);
        bVar17 = (bool)((byte)(uVar35 >> 6) & 1);
        bVar21 = SUB81(uVar35 >> 7,0);
        bVar4 = (bool)((byte)(uVar35 >> 1) & 1);
        bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
        bVar6 = (bool)((byte)(uVar35 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar35 >> 4) & 1);
        bVar14 = (bool)((byte)(uVar35 >> 5) & 1);
        bVar18 = (bool)((byte)(uVar35 >> 6) & 1);
        bVar22 = SUB81(uVar35 >> 7,0);
        bVar5 = (bool)((byte)(uVar35 >> 1) & 1);
        bVar16 = (bool)((byte)(uVar35 >> 2) & 1);
        bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
        bVar11 = (bool)((byte)(uVar35 >> 4) & 1);
        bVar15 = (bool)((byte)(uVar35 >> 5) & 1);
        bVar19 = (bool)((byte)(uVar35 >> 6) & 1);
        bVar23 = SUB81(uVar35 >> 7,0);
        auVar26._4_4_ = (uint)bVar3 * auVar50._4_4_ | !bVar3 * uVar57;
        auVar26._0_4_ = (uint)(bVar33 & 1) * auVar50._0_4_ | !(bool)(bVar33 & 1) * uVar36;
        auVar26._8_4_ = (uint)bVar8 * auVar50._8_4_ | !bVar8 * uVar60;
        auVar26._12_4_ = (uint)bVar20 * auVar50._12_4_ | !bVar20 * uVar63;
        auVar26._16_4_ = (uint)bVar9 * auVar50._16_4_ | !bVar9 * uVar66;
        auVar26._20_4_ = (uint)bVar13 * auVar50._20_4_ | !bVar13 * uVar69;
        auVar26._24_4_ = (uint)bVar17 * auVar50._24_4_ | !bVar17 * uVar72;
        auVar26._28_4_ = (uint)bVar21 * auVar50._28_4_ | !bVar21 * uVar75;
        auVar27._4_4_ = (uint)bVar4 * auVar51._4_4_ | !bVar4 * uVar58;
        auVar27._0_4_ = (uint)(bVar33 & 1) * auVar51._0_4_ | !(bool)(bVar33 & 1) * uVar37;
        auVar27._8_4_ = (uint)bVar12 * auVar51._8_4_ | !bVar12 * uVar61;
        auVar27._12_4_ = (uint)bVar6 * auVar51._12_4_ | !bVar6 * uVar64;
        auVar27._16_4_ = (uint)bVar10 * auVar51._16_4_ | !bVar10 * uVar67;
        auVar27._20_4_ = (uint)bVar14 * auVar51._20_4_ | !bVar14 * uVar70;
        auVar27._24_4_ = (uint)bVar18 * auVar51._24_4_ | !bVar18 * uVar73;
        auVar27._28_4_ = (uint)bVar22 * auVar51._28_4_ | !bVar22 * uVar76;
        auVar29._4_4_ = (uint)bVar5 * auVar45._4_4_ | !bVar5 * uVar59;
        auVar29._0_4_ = (uint)(bVar33 & 1) * auVar45._0_4_ | !(bool)(bVar33 & 1) * uVar38;
        auVar29._8_4_ = (uint)bVar16 * auVar45._8_4_ | !bVar16 * uVar62;
        auVar29._12_4_ = (uint)bVar7 * auVar45._12_4_ | !bVar7 * uVar65;
        auVar29._16_4_ = (uint)bVar11 * auVar45._16_4_ | !bVar11 * uVar68;
        auVar29._20_4_ = (uint)bVar15 * auVar45._20_4_ | !bVar15 * uVar71;
        auVar29._24_4_ = (uint)bVar19 * auVar45._24_4_ | !bVar19 * uVar74;
        auVar29._28_4_ = (uint)bVar23 * auVar45._28_4_ | !bVar23 * uVar77;
        vscatterdps_avx512vl(ZEXT832(param_1) + auVar47,uVar35,auVar26);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar47 | auVar41),uVar35,auVar27);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar47 | auVar42),uVar35,auVar29);
        vscatterdps_avx512vl(ZEXT832(param_1) + (auVar47 | auVar43),uVar35,auVar46);
      }
    }
  }
  return;
}


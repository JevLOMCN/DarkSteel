// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplySpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_CunfCuni_avx @ 140361540

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_CunfCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,uint param_5)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar67 [32];
  undefined1 auVar71 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  uint uVar72;
  int iVar73;
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  undefined1 in_ZMM3 [64];
  float fVar83;
  float fVar92;
  undefined1 auVar84 [16];
  float fVar90;
  float fVar91;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar85 [32];
  float fVar96;
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  uint uVar97;
  uint uVar104;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  uint uVar102;
  uint uVar103;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  undefined1 auVar100 [32];
  uint uVar108;
  undefined1 auVar101 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar114 [16];
  uint uVar113;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  uint uVar122;
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  float fVar125;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar126 [32];
  float fVar136;
  undefined1 auVar127 [32];
  uint uVar135;
  undefined1 auVar128 [32];
  int iVar137;
  undefined1 auVar138 [16];
  undefined1 auVar139 [32];
  float fVar140;
  float fVar145;
  float fVar146;
  undefined1 auVar141 [16];
  float fVar148;
  float fVar149;
  float fVar150;
  undefined1 auVar143 [32];
  float fVar147;
  undefined1 auVar142 [16];
  float fVar151;
  undefined1 auVar144 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  float fVar154;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  undefined1 auVar155 [32];
  float fVar163;
  undefined1 auVar156 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  int local_3b0;
  int iStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  float local_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
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
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  longlong lVar19;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar68 [32];
  
  uVar113 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar113 = param_5;
  }
  auVar66 = in_ZMM3._0_16_;
  if ((int)(uVar113 & 0xfffffff8) < 1) {
    uVar16 = 0;
  }
  else {
    auVar71 = vshufps_avx(auVar66,auVar66,0);
    uVar16 = 0;
    uVar37 = 0;
    do {
      auVar43._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar37 * 2);
      auVar43._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar37 * 2);
      auVar60._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar37 * 2);
      auVar60._0_16_ = *(undefined1 (*) [16])(param_2 + uVar37 * 2);
      auVar46 = vshufps_avx(auVar60,auVar43,0x88);
      auVar43 = vshufps_avx(auVar60,auVar43,0xdd);
      auVar42 = vpslld_avx(auVar46._16_16_,4);
      auVar65 = vpslld_avx(auVar46._0_16_,4);
      lVar40 = (longlong)auVar65._0_4_;
      lVar22 = (longlong)auVar65._4_4_;
      lVar24 = (longlong)auVar65._8_4_;
      lVar23 = (longlong)auVar65._12_4_;
      lVar35 = (longlong)auVar42._0_4_;
      lVar31 = (longlong)auVar42._4_4_;
      lVar20 = (longlong)auVar42._8_4_;
      lVar17 = (longlong)auVar42._12_4_;
      auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + lVar31)),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + lVar20)),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + lVar17)),0x30);
      auVar65 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar40)),
                              ZEXT416(*(uint *)(param_1 + lVar22)),0x10);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + lVar24)),0x20);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + lVar23)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_1 + 4 + lVar20)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_1 + 4 + lVar17)),0x30);
      auVar141 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar40)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x10);
      auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x20);
      auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x30);
      auVar74._16_16_ = auVar42;
      auVar74._0_16_ = auVar65;
      auVar152._16_16_ = auVar57;
      auVar152._0_16_ = auVar141;
      auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 8 + lVar20)),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 8 + lVar17)),0x30);
      auVar65 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar40)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x10);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x20);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x30);
      auVar139._16_16_ = auVar42;
      auVar139._0_16_ = auVar65;
      uVar14 = *(uint *)(param_1 + 0xc + lVar40);
      uVar33 = *(uint *)(param_1 + 0xc + lVar22);
      uVar72 = *(uint *)(param_1 + 0xc + lVar24);
      uVar76 = *(uint *)(param_1 + 0xc + lVar23);
      uVar77 = *(uint *)(param_1 + 0xc + lVar35);
      uVar78 = *(uint *)(param_1 + 0xc + lVar31);
      uVar79 = *(uint *)(param_1 + 0xc + lVar20);
      uVar80 = *(uint *)(param_1 + 0xc + lVar17);
      auVar42 = vinsertps_avx(ZEXT416(uVar77),ZEXT416(uVar78),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(uVar79),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(uVar80),0x30);
      auVar65 = vinsertps_avx(ZEXT416(uVar14),ZEXT416(uVar33),0x10);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(uVar72),0x20);
      auVar141 = vpslld_avx(auVar43._16_16_,4);
      auVar57 = vpslld_avx(auVar43._0_16_,4);
      lVar36 = (longlong)auVar57._0_4_;
      lVar32 = (longlong)auVar57._4_4_;
      lVar18 = (longlong)auVar57._8_4_;
      lVar21 = (longlong)auVar57._12_4_;
      lVar34 = (longlong)auVar141._0_4_;
      lVar39 = (longlong)auVar141._4_4_;
      lVar38 = (longlong)auVar141._8_4_;
      lVar41 = (longlong)auVar141._12_4_;
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar34)),
                              ZEXT416(*(uint *)(param_1 + lVar39)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_1 + lVar38)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_1 + lVar41)),0x30);
      auVar141 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar36)),
                               ZEXT416(*(uint *)(param_1 + lVar32)),0x10);
      auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)(param_1 + lVar18)),0x20);
      auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)(param_1 + lVar21)),0x30);
      auVar84 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar34)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x10);
      auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x20);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(uVar76),0x30);
      auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_1 + 4 + lVar41)),0x30);
      auVar98 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar32)),0x10);
      auVar98 = vinsertps_avx(auVar98,ZEXT416(*(uint *)(param_1 + 4 + lVar18)),0x20);
      auVar61._16_16_ = auVar42;
      auVar61._0_16_ = auVar65;
      auVar98 = vinsertps_avx(auVar98,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x30);
      auVar114 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x10);
      auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x20);
      auVar123._16_16_ = auVar57;
      auVar123._0_16_ = auVar141;
      auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)(param_1 + 8 + lVar41)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar32)),0x10);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 8 + lVar18)),0x20);
      auVar164._16_16_ = auVar84;
      auVar164._0_16_ = auVar98;
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x30);
      auVar44._16_16_ = auVar114;
      auVar44._0_16_ = auVar10;
      auVar46 = vsubps_avx(auVar74,auVar123);
      auVar43 = vsubps_avx(auVar152,auVar164);
      auVar60 = vsubps_avx(auVar139,auVar44);
      auVar143._0_4_ =
           auVar46._0_4_ * auVar46._0_4_ + auVar43._0_4_ * auVar43._0_4_ +
           auVar60._0_4_ * auVar60._0_4_;
      auVar143._4_4_ =
           auVar46._4_4_ * auVar46._4_4_ + auVar43._4_4_ * auVar43._4_4_ +
           auVar60._4_4_ * auVar60._4_4_;
      auVar143._8_4_ =
           auVar46._8_4_ * auVar46._8_4_ + auVar43._8_4_ * auVar43._8_4_ +
           auVar60._8_4_ * auVar60._8_4_;
      auVar143._12_4_ =
           auVar46._12_4_ * auVar46._12_4_ + auVar43._12_4_ * auVar43._12_4_ +
           auVar60._12_4_ * auVar60._12_4_;
      auVar143._16_4_ =
           auVar46._16_4_ * auVar46._16_4_ + auVar43._16_4_ * auVar43._16_4_ +
           auVar60._16_4_ * auVar60._16_4_;
      auVar143._20_4_ =
           auVar46._20_4_ * auVar46._20_4_ + auVar43._20_4_ * auVar43._20_4_ +
           auVar60._20_4_ * auVar60._20_4_;
      auVar143._24_4_ =
           auVar46._24_4_ * auVar46._24_4_ + auVar43._24_4_ * auVar43._24_4_ +
           auVar60._24_4_ * auVar60._24_4_;
      auVar143._28_4_ =
           auVar46._28_4_ * auVar46._28_4_ + auVar43._28_4_ * auVar43._28_4_ +
           auVar60._28_4_ * auVar60._28_4_;
      uVar81 = *(uint *)(param_1 + 0xc + lVar34);
      uVar82 = *(uint *)(param_1 + 0xc + lVar39);
      uVar118 = *(uint *)(param_1 + 0xc + lVar38);
      auVar11 = vinsertps_avx(ZEXT416(uVar81),ZEXT416(uVar82),0x10);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(uVar118),0x20);
      uVar119 = *(uint *)(param_1 + 0xc + lVar41);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(uVar119),0x30);
      uVar120 = *(uint *)(param_1 + 0xc + lVar36);
      uVar121 = *(uint *)(param_1 + 0xc + lVar32);
      uVar122 = *(uint *)(param_1 + 0xc + lVar18);
      auVar12 = vinsertps_avx(ZEXT416(uVar120),ZEXT416(uVar121),0x10);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(uVar122),0x20);
      uVar135 = *(uint *)(param_1 + 0xc + lVar21);
      auVar67 = vsqrtps_avx(auVar143);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(uVar135),0x30);
      auVar46 = vdivps_avx(auVar46,auVar67);
      auVar155._16_16_ = auVar11;
      auVar155._0_16_ = auVar12;
      auVar44 = vdivps_avx(auVar43,auVar67);
      auVar43 = vcmpps_avx(auVar143,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar60 = vdivps_avx(auVar60,auVar67);
      auVar46 = vblendvps_avx(auVar46,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar43);
      uVar97 = auVar43._0_4_;
      uVar102 = auVar43._4_4_;
      uVar103 = auVar43._8_4_;
      uVar104 = auVar43._12_4_;
      uVar105 = auVar43._16_4_;
      uVar106 = auVar43._20_4_;
      uVar107 = auVar43._24_4_;
      uVar108 = auVar43._28_4_;
      auVar45._0_4_ = ~uVar97 & auVar67._0_4_;
      auVar45._4_4_ = ~uVar102 & auVar67._4_4_;
      auVar45._8_4_ = ~uVar103 & auVar67._8_4_;
      auVar45._12_4_ = ~uVar104 & auVar67._12_4_;
      auVar45._16_4_ = ~uVar105 & auVar67._16_4_;
      auVar45._20_4_ = ~uVar106 & auVar67._20_4_;
      auVar45._24_4_ = ~uVar107 & auVar67._24_4_;
      auVar45._28_4_ = ~uVar108 & auVar67._28_4_;
      auVar126._16_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + (uVar37 & 0xffffffff));
      auVar126._0_16_ = *(undefined1 (*) [16])(param_3 + (uVar37 & 0xffffffff));
      auVar43 = vsubps_avx(auVar45,auVar126);
      fVar83 = auVar43._0_4_;
      fVar90 = auVar43._4_4_;
      fVar91 = auVar43._8_4_;
      fVar92 = auVar43._12_4_;
      fVar93 = auVar43._16_4_;
      fVar94 = auVar43._20_4_;
      fVar95 = auVar43._24_4_;
      fVar96 = auVar43._28_4_;
      local_1e0 = auVar71._0_4_;
      fStack_1dc = auVar71._4_4_;
      fStack_1d8 = auVar71._8_4_;
      fStack_1d4 = auVar71._12_4_;
      auVar67._0_4_ = local_1e0 * auVar46._0_4_ * fVar83;
      auVar67._4_4_ = fStack_1dc * auVar46._4_4_ * fVar90;
      auVar67._8_4_ = fStack_1d8 * auVar46._8_4_ * fVar91;
      auVar67._12_4_ = fStack_1d4 * auVar46._12_4_ * fVar92;
      auVar67._16_4_ = local_1e0 * auVar46._16_4_ * fVar93;
      auVar67._20_4_ = fStack_1dc * auVar46._20_4_ * fVar94;
      auVar67._24_4_ = fStack_1d8 * auVar46._24_4_ * fVar95;
      auVar67._28_4_ = fStack_1d4 * auVar46._28_4_ * fVar96;
      auVar85._0_4_ = local_1e0 * (float)(~uVar97 & auVar44._0_4_) * fVar83;
      auVar85._4_4_ = fStack_1dc * (float)(~uVar102 & auVar44._4_4_) * fVar90;
      auVar85._8_4_ = fStack_1d8 * (float)(~uVar103 & auVar44._8_4_) * fVar91;
      auVar85._12_4_ = fStack_1d4 * (float)(~uVar104 & auVar44._12_4_) * fVar92;
      auVar85._16_4_ = local_1e0 * (float)(~uVar105 & auVar44._16_4_) * fVar93;
      auVar85._20_4_ = fStack_1dc * (float)(~uVar106 & auVar44._20_4_) * fVar94;
      auVar85._24_4_ = fStack_1d8 * (float)(~uVar107 & auVar44._24_4_) * fVar95;
      auVar85._28_4_ = fStack_1d4 * (float)(~uVar108 & auVar44._28_4_) * fVar96;
      fVar2 = auVar65._0_4_;
      fVar154 = auVar12._0_4_;
      auVar100._0_4_ = fVar154 + fVar2;
      fVar3 = auVar65._4_4_;
      fVar157 = auVar12._4_4_;
      auVar100._4_4_ = fVar157 + fVar3;
      fVar4 = auVar65._8_4_;
      fVar158 = auVar12._8_4_;
      auVar100._8_4_ = fVar158 + fVar4;
      fVar5 = auVar65._12_4_;
      fVar159 = auVar12._12_4_;
      auVar100._12_4_ = fVar159 + fVar5;
      fVar6 = auVar42._0_4_;
      fVar160 = auVar11._0_4_;
      auVar100._16_4_ = fVar160 + fVar6;
      fVar7 = auVar42._4_4_;
      fVar161 = auVar11._4_4_;
      auVar100._20_4_ = fVar161 + fVar7;
      fVar8 = auVar42._8_4_;
      fVar162 = auVar11._8_4_;
      auVar100._24_4_ = fVar162 + fVar8;
      fVar9 = auVar42._12_4_;
      fVar163 = auVar11._12_4_;
      auVar100._28_4_ = fVar163 + fVar9;
      auVar44 = vdivps_avx(auVar67,auVar100);
      auVar46._0_4_ = local_1e0 * (float)(~uVar97 & auVar60._0_4_) * fVar83;
      auVar46._4_4_ = fStack_1dc * (float)(~uVar102 & auVar60._4_4_) * fVar90;
      auVar46._8_4_ = fStack_1d8 * (float)(~uVar103 & auVar60._8_4_) * fVar91;
      auVar46._12_4_ = fStack_1d4 * (float)(~uVar104 & auVar60._12_4_) * fVar92;
      auVar46._16_4_ = local_1e0 * (float)(~uVar105 & auVar60._16_4_) * fVar93;
      auVar46._20_4_ = fStack_1dc * (float)(~uVar106 & auVar60._20_4_) * fVar94;
      auVar46._24_4_ = fStack_1d8 * (float)(~uVar107 & auVar60._24_4_) * fVar95;
      auVar46._28_4_ = fStack_1d4 * (float)(~uVar108 & auVar60._28_4_) * fVar96;
      auVar60 = vdivps_avx(auVar85,auVar100);
      auVar67 = vdivps_avx(auVar46,auVar100);
      auVar42 = ZEXT816(0);
      auVar46 = vcmpps_avx(auVar155,ZEXT1632(auVar42),0);
      auVar43 = vcmpps_avx(auVar61,ZEXT1632(auVar42),0);
      uVar97 = auVar43._0_4_ & auVar46._0_4_;
      uVar102 = auVar43._4_4_ & auVar46._4_4_;
      uVar103 = auVar43._8_4_ & auVar46._8_4_;
      uVar104 = auVar43._12_4_ & auVar46._12_4_;
      uVar105 = auVar43._16_4_ & auVar46._16_4_;
      uVar106 = auVar43._20_4_ & auVar46._20_4_;
      uVar107 = auVar43._24_4_ & auVar46._24_4_;
      uVar108 = auVar43._28_4_ & auVar46._28_4_;
      fVar140 = (float)(~uVar97 & auVar44._0_4_);
      fVar145 = (float)(~uVar102 & auVar44._4_4_);
      fVar146 = (float)(~uVar103 & auVar44._8_4_);
      fVar147 = (float)(~uVar104 & auVar44._12_4_);
      fVar148 = (float)(~uVar105 & auVar44._16_4_);
      fVar149 = (float)(~uVar106 & auVar44._20_4_);
      fVar150 = (float)(~uVar107 & auVar44._24_4_);
      fVar151 = (float)(~uVar108 & auVar44._28_4_);
      fVar125 = (float)(~uVar97 & auVar60._0_4_);
      fVar129 = (float)(~uVar102 & auVar60._4_4_);
      fVar130 = (float)(~uVar103 & auVar60._8_4_);
      fVar131 = (float)(~uVar104 & auVar60._12_4_);
      fVar132 = (float)(~uVar105 & auVar60._16_4_);
      fVar133 = (float)(~uVar106 & auVar60._20_4_);
      fVar134 = (float)(~uVar107 & auVar60._24_4_);
      fVar136 = (float)(~uVar108 & auVar60._28_4_);
      fVar83 = (float)(~uVar97 & auVar67._0_4_);
      fVar90 = (float)(~uVar102 & auVar67._4_4_);
      fVar91 = (float)(~uVar103 & auVar67._8_4_);
      fVar92 = (float)(~uVar104 & auVar67._12_4_);
      fVar93 = (float)(~uVar105 & auVar67._16_4_);
      fVar94 = (float)(~uVar106 & auVar67._20_4_);
      fVar95 = (float)(~uVar107 & auVar67._24_4_);
      fVar96 = (float)(~uVar108 & auVar67._28_4_);
      auVar46 = vcmpps_avx(ZEXT1632(auVar42),auVar61,1);
      uVar97 = vmovmskps_avx(auVar46);
      if (uVar97 == 0) {
LAB_140361c55:
        auVar46 = vcmpps_avx(ZEXT832(0) << 0x20,auVar155,1);
        uVar14 = vmovmskps_avx(auVar46);
      }
      else {
        auVar47._0_4_ = fVar140 * fVar2;
        auVar47._4_4_ = fVar145 * fVar3;
        auVar47._8_4_ = fVar146 * fVar4;
        auVar47._12_4_ = fVar147 * fVar5;
        auVar47._16_4_ = fVar148 * fVar6;
        auVar47._20_4_ = fVar149 * fVar7;
        auVar47._24_4_ = fVar150 * fVar8;
        auVar47._28_4_ = fVar151 * fVar9;
        auVar46 = vsubps_avx(auVar74,auVar47);
        cVar13 = (char)uVar97;
        if ((uVar97 & 1) != 0) {
          *(int *)(param_1 + lVar40) = auVar46._0_4_;
        }
        auVar42 = auVar46._0_16_;
        auVar65 = auVar46._16_16_;
        if ((uVar97 & 2) == 0) {
          if ((uVar97 & 4) == 0) goto LAB_140361b15;
LAB_140361de1:
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + lVar24) = uVar15;
          if ((uVar97 & 8) != 0) goto LAB_140361df2;
LAB_140361b1f:
          if ((uVar97 & 0x10) == 0) goto LAB_140361b2f;
LAB_140361e09:
          *(int *)(param_1 + lVar35) = auVar46._16_4_;
          if ((uVar97 & 0x20) != 0) goto LAB_140361e19;
LAB_140361b39:
          if ((uVar97 & 0x40) == 0) goto LAB_140361b43;
LAB_140361e2a:
          uVar15 = vextractps_avx(auVar65,2);
          *(undefined4 *)(param_1 + lVar20) = uVar15;
          if (cVar13 < '\0') goto LAB_140361e3a;
LAB_140361b4c:
          auVar48._0_4_ = fVar125 * fVar2;
          auVar48._4_4_ = fVar129 * fVar3;
          auVar48._8_4_ = fVar130 * fVar4;
          auVar48._12_4_ = fVar131 * fVar5;
          auVar48._16_4_ = fVar132 * fVar6;
          auVar48._20_4_ = fVar133 * fVar7;
          auVar48._24_4_ = fVar134 * fVar8;
          auVar48._28_4_ = fVar136 * fVar9;
          auVar46 = vsubps_avx(auVar152,auVar48);
          if ((uVar97 & 1) == 0) goto LAB_140361b5e;
LAB_140361e58:
          *(int *)(param_1 + 4 + lVar40) = auVar46._0_4_;
          if ((uVar97 & 2) != 0) goto LAB_140361e69;
LAB_140361b68:
          if ((uVar97 & 4) == 0) goto LAB_140361b72;
LAB_140361e7b:
          uVar15 = vextractps_avx(auVar46._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar24) = uVar15;
          if ((uVar97 & 8) != 0) goto LAB_140361e8d;
LAB_140361b7c:
          auVar42 = auVar46._16_16_;
          if ((uVar97 & 0x10) == 0) goto LAB_140361b8c;
LAB_140361ea5:
          *(int *)(param_1 + 4 + lVar35) = auVar42._0_4_;
          if ((uVar97 & 0x20) != 0) goto LAB_140361eb6;
LAB_140361b96:
          if ((uVar97 & 0x40) == 0) goto LAB_140361ba0;
LAB_140361ec8:
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 4 + lVar20) = uVar15;
          if (cVar13 < '\0') goto LAB_140361ed9;
LAB_140361ba9:
          auVar49._0_4_ = fVar2 * fVar83;
          auVar49._4_4_ = fVar3 * fVar90;
          auVar49._8_4_ = fVar4 * fVar91;
          auVar49._12_4_ = fVar5 * fVar92;
          auVar49._16_4_ = fVar6 * fVar93;
          auVar49._20_4_ = fVar7 * fVar94;
          auVar49._24_4_ = fVar8 * fVar95;
          auVar49._28_4_ = fVar9 * fVar96;
          auVar46 = vsubps_avx(auVar139,auVar49);
          if ((uVar97 & 1) == 0) goto LAB_140361bbb;
LAB_140361ef8:
          *(int *)(param_1 + 8 + lVar40) = auVar46._0_4_;
          if ((uVar97 & 2) != 0) goto LAB_140361f09;
LAB_140361bc5:
          if ((uVar97 & 4) == 0) goto LAB_140361bcf;
LAB_140361f1b:
          uVar15 = vextractps_avx(auVar46._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar24) = uVar15;
          if ((uVar97 & 8) != 0) goto LAB_140361f2d;
LAB_140361bd9:
          auVar42 = auVar46._16_16_;
        }
        else {
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + lVar22) = uVar15;
          if ((uVar97 & 4) != 0) goto LAB_140361de1;
LAB_140361b15:
          if ((uVar97 & 8) == 0) goto LAB_140361b1f;
LAB_140361df2:
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + lVar23) = uVar15;
          if ((uVar97 & 0x10) != 0) goto LAB_140361e09;
LAB_140361b2f:
          if ((uVar97 & 0x20) == 0) goto LAB_140361b39;
LAB_140361e19:
          uVar15 = vextractps_avx(auVar65,1);
          *(undefined4 *)(param_1 + lVar31) = uVar15;
          if ((uVar97 & 0x40) != 0) goto LAB_140361e2a;
LAB_140361b43:
          if (-1 < cVar13) goto LAB_140361b4c;
LAB_140361e3a:
          uVar15 = vextractps_avx(auVar65,3);
          *(undefined4 *)(param_1 + lVar17) = uVar15;
          auVar53._0_4_ = fVar125 * fVar2;
          auVar53._4_4_ = fVar129 * fVar3;
          auVar53._8_4_ = fVar130 * fVar4;
          auVar53._12_4_ = fVar131 * fVar5;
          auVar53._16_4_ = fVar132 * fVar6;
          auVar53._20_4_ = fVar133 * fVar7;
          auVar53._24_4_ = fVar134 * fVar8;
          auVar53._28_4_ = fVar136 * fVar9;
          auVar46 = vsubps_avx(auVar152,auVar53);
          if ((uVar97 & 1) != 0) goto LAB_140361e58;
LAB_140361b5e:
          if ((uVar97 & 2) == 0) goto LAB_140361b68;
LAB_140361e69:
          uVar15 = vextractps_avx(auVar46._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar22) = uVar15;
          if ((uVar97 & 4) != 0) goto LAB_140361e7b;
LAB_140361b72:
          if ((uVar97 & 8) == 0) goto LAB_140361b7c;
LAB_140361e8d:
          uVar15 = vextractps_avx(auVar46._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar23) = uVar15;
          auVar42 = auVar46._16_16_;
          if ((uVar97 & 0x10) != 0) goto LAB_140361ea5;
LAB_140361b8c:
          if ((uVar97 & 0x20) == 0) goto LAB_140361b96;
LAB_140361eb6:
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 4 + lVar31) = uVar15;
          if ((uVar97 & 0x40) != 0) goto LAB_140361ec8;
LAB_140361ba0:
          if (-1 < cVar13) goto LAB_140361ba9;
LAB_140361ed9:
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 4 + lVar17) = uVar15;
          auVar54._0_4_ = fVar2 * fVar83;
          auVar54._4_4_ = fVar3 * fVar90;
          auVar54._8_4_ = fVar4 * fVar91;
          auVar54._12_4_ = fVar5 * fVar92;
          auVar54._16_4_ = fVar6 * fVar93;
          auVar54._20_4_ = fVar7 * fVar94;
          auVar54._24_4_ = fVar8 * fVar95;
          auVar54._28_4_ = fVar9 * fVar96;
          auVar46 = vsubps_avx(auVar139,auVar54);
          if ((uVar97 & 1) != 0) goto LAB_140361ef8;
LAB_140361bbb:
          if ((uVar97 & 2) == 0) goto LAB_140361bc5;
LAB_140361f09:
          uVar15 = vextractps_avx(auVar46._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar22) = uVar15;
          if ((uVar97 & 4) != 0) goto LAB_140361f1b;
LAB_140361bcf:
          if ((uVar97 & 8) == 0) goto LAB_140361bd9;
LAB_140361f2d:
          uVar15 = vextractps_avx(auVar46._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar23) = uVar15;
          auVar42 = auVar46._16_16_;
        }
        if ((uVar97 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar35) = auVar42._0_4_;
        }
        if ((uVar97 & 0x20) != 0) {
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 8 + lVar31) = uVar15;
        }
        if ((uVar97 & 0x40) != 0) {
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 8 + lVar20) = uVar15;
        }
        if (cVar13 < '\0') {
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 8 + lVar17) = uVar15;
        }
        if ((uVar97 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar40) = uVar14;
        }
        if ((uVar97 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar22) = uVar33;
        }
        if ((uVar97 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar24) = uVar72;
        }
        if ((uVar97 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar23) = uVar76;
        }
        if ((uVar97 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar77;
        }
        if ((uVar97 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar31) = uVar78;
        }
        if ((uVar97 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar79;
        }
        if (-1 < cVar13) goto LAB_140361c55;
        *(uint *)(param_1 + 0xc + lVar17) = uVar80;
        auVar46 = vcmpps_avx(ZEXT832(0) << 0x20,auVar155,1);
        uVar14 = vmovmskps_avx(auVar46);
      }
      if (uVar14 != 0) {
        auVar42._0_4_ = auVar141._0_4_ + fVar154 * fVar140;
        auVar42._4_4_ = auVar141._4_4_ + fVar157 * fVar145;
        auVar42._8_4_ = auVar141._8_4_ + fVar158 * fVar146;
        auVar42._12_4_ = auVar141._12_4_ + fVar159 * fVar147;
        auVar50._16_4_ = auVar57._0_4_ + fVar160 * fVar148;
        auVar50._0_16_ = auVar42;
        auVar50._20_4_ = auVar57._4_4_ + fVar161 * fVar149;
        auVar50._24_4_ = auVar57._8_4_ + fVar162 * fVar150;
        auVar50._28_4_ = auVar57._12_4_ + fVar163 * fVar151;
        cVar13 = (char)uVar14;
        if ((uVar14 & 1) != 0) {
          *(float *)(param_1 + lVar36) = auVar42._0_4_;
        }
        auVar65 = auVar50._16_16_;
        local_380 = auVar10._0_4_;
        fStack_37c = auVar10._4_4_;
        fStack_378 = auVar10._8_4_;
        fStack_374 = auVar10._12_4_;
        fStack_370 = auVar114._0_4_;
        fStack_36c = auVar114._4_4_;
        fStack_368 = auVar114._8_4_;
        fStack_364 = auVar114._12_4_;
        if ((uVar14 & 2) == 0) {
          if ((uVar14 & 4) == 0) goto LAB_140361ca9;
LAB_140362070:
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + lVar18) = uVar15;
          if ((uVar14 & 8) != 0) goto LAB_140362080;
LAB_140361cb2:
          if ((uVar14 & 0x10) == 0) goto LAB_140361cc1;
LAB_140362096:
          *(float *)(param_1 + lVar34) = auVar50._16_4_;
          if ((uVar14 & 0x20) != 0) goto LAB_1403620a4;
LAB_140361cca:
          if ((uVar14 & 0x40) == 0) goto LAB_140361cd3;
LAB_1403620b4:
          uVar15 = vextractps_avx(auVar65,2);
          *(undefined4 *)(param_1 + lVar38) = uVar15;
          if (cVar13 < '\0') goto LAB_1403620c3;
LAB_140361cdb:
          auVar51._0_4_ = auVar98._0_4_ + fVar154 * fVar125;
          auVar51._4_4_ = auVar98._4_4_ + fVar157 * fVar129;
          auVar51._8_4_ = auVar98._8_4_ + fVar158 * fVar130;
          auVar51._12_4_ = auVar98._12_4_ + fVar159 * fVar131;
          auVar51._16_4_ = auVar84._0_4_ + fVar160 * fVar132;
          auVar51._20_4_ = auVar84._4_4_ + fVar161 * fVar133;
          auVar51._24_4_ = auVar84._8_4_ + fVar162 * fVar134;
          auVar51._28_4_ = auVar84._12_4_ + fVar163 * fVar136;
          if ((uVar14 & 1) == 0) goto LAB_140361ced;
LAB_1403620e1:
          *(int *)(param_1 + 4 + lVar36) = auVar51._0_4_;
          if ((uVar14 & 2) != 0) goto LAB_1403620f1;
LAB_140361cf6:
          if ((uVar14 & 4) == 0) goto LAB_140361cff;
LAB_140362102:
          uVar15 = vextractps_avx(auVar51._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar18) = uVar15;
          if ((uVar14 & 8) != 0) goto LAB_140362113;
LAB_140361d08:
          auVar42 = auVar51._16_16_;
          if ((uVar14 & 0x10) == 0) goto LAB_140361d17;
LAB_14036212a:
          *(int *)(param_1 + 4 + lVar34) = auVar42._0_4_;
          if ((uVar14 & 0x20) != 0) goto LAB_140362139;
LAB_140361d20:
          if ((uVar14 & 0x40) == 0) goto LAB_140361d29;
LAB_14036214a:
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 4 + lVar38) = uVar15;
          if (cVar13 < '\0') goto LAB_14036215a;
LAB_140361d31:
          auVar52._0_4_ = fVar154 * fVar83 + local_380;
          auVar52._4_4_ = fVar157 * fVar90 + fStack_37c;
          auVar52._8_4_ = fVar158 * fVar91 + fStack_378;
          auVar52._12_4_ = fVar159 * fVar92 + fStack_374;
          auVar52._16_4_ = fVar160 * fVar93 + fStack_370;
          auVar52._20_4_ = fVar161 * fVar94 + fStack_36c;
          auVar52._24_4_ = fVar162 * fVar95 + fStack_368;
          auVar52._28_4_ = fVar163 * fVar96 + fStack_364;
          if ((uVar14 & 1) == 0) goto LAB_140361d47;
LAB_14036217d:
          *(int *)(param_1 + 8 + lVar36) = auVar52._0_4_;
          if ((uVar14 & 2) != 0) goto LAB_14036218d;
LAB_140361d50:
          if ((uVar14 & 4) == 0) goto LAB_140361d59;
LAB_14036219e:
          uVar15 = vextractps_avx(auVar52._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar18) = uVar15;
          if ((uVar14 & 8) != 0) goto LAB_1403621af;
LAB_140361d62:
          auVar42 = auVar52._16_16_;
        }
        else {
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + lVar32) = uVar15;
          if ((uVar14 & 4) != 0) goto LAB_140362070;
LAB_140361ca9:
          if ((uVar14 & 8) == 0) goto LAB_140361cb2;
LAB_140362080:
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + lVar21) = uVar15;
          if ((uVar14 & 0x10) != 0) goto LAB_140362096;
LAB_140361cc1:
          if ((uVar14 & 0x20) == 0) goto LAB_140361cca;
LAB_1403620a4:
          uVar15 = vextractps_avx(auVar65,1);
          *(undefined4 *)(param_1 + lVar39) = uVar15;
          if ((uVar14 & 0x40) != 0) goto LAB_1403620b4;
LAB_140361cd3:
          if (-1 < cVar13) goto LAB_140361cdb;
LAB_1403620c3:
          uVar15 = vextractps_avx(auVar65,3);
          *(undefined4 *)(param_1 + lVar41) = uVar15;
          auVar51._0_4_ = auVar98._0_4_ + fVar154 * fVar125;
          auVar51._4_4_ = auVar98._4_4_ + fVar157 * fVar129;
          auVar51._8_4_ = auVar98._8_4_ + fVar158 * fVar130;
          auVar51._12_4_ = auVar98._12_4_ + fVar159 * fVar131;
          auVar51._16_4_ = auVar84._0_4_ + fVar160 * fVar132;
          auVar51._20_4_ = auVar84._4_4_ + fVar161 * fVar133;
          auVar51._24_4_ = auVar84._8_4_ + fVar162 * fVar134;
          auVar51._28_4_ = auVar84._12_4_ + fVar163 * fVar136;
          if ((uVar14 & 1) != 0) goto LAB_1403620e1;
LAB_140361ced:
          if ((uVar14 & 2) == 0) goto LAB_140361cf6;
LAB_1403620f1:
          uVar15 = vextractps_avx(auVar51._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar32) = uVar15;
          if ((uVar14 & 4) != 0) goto LAB_140362102;
LAB_140361cff:
          if ((uVar14 & 8) == 0) goto LAB_140361d08;
LAB_140362113:
          uVar15 = vextractps_avx(auVar51._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar21) = uVar15;
          auVar42 = auVar51._16_16_;
          if ((uVar14 & 0x10) != 0) goto LAB_14036212a;
LAB_140361d17:
          if ((uVar14 & 0x20) == 0) goto LAB_140361d20;
LAB_140362139:
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 4 + lVar39) = uVar15;
          if ((uVar14 & 0x40) != 0) goto LAB_14036214a;
LAB_140361d29:
          if (-1 < cVar13) goto LAB_140361d31;
LAB_14036215a:
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 4 + lVar41) = uVar15;
          auVar52._0_4_ = fVar154 * fVar83 + local_380;
          auVar52._4_4_ = fVar157 * fVar90 + fStack_37c;
          auVar52._8_4_ = fVar158 * fVar91 + fStack_378;
          auVar52._12_4_ = fVar159 * fVar92 + fStack_374;
          auVar52._16_4_ = fVar160 * fVar93 + fStack_370;
          auVar52._20_4_ = fVar161 * fVar94 + fStack_36c;
          auVar52._24_4_ = fVar162 * fVar95 + fStack_368;
          auVar52._28_4_ = fVar163 * fVar96 + fStack_364;
          if ((uVar14 & 1) != 0) goto LAB_14036217d;
LAB_140361d47:
          if ((uVar14 & 2) == 0) goto LAB_140361d50;
LAB_14036218d:
          uVar15 = vextractps_avx(auVar52._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar32) = uVar15;
          if ((uVar14 & 4) != 0) goto LAB_14036219e;
LAB_140361d59:
          if ((uVar14 & 8) == 0) goto LAB_140361d62;
LAB_1403621af:
          uVar15 = vextractps_avx(auVar52._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar21) = uVar15;
          auVar42 = auVar52._16_16_;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar34) = auVar42._0_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 8 + lVar39) = uVar15;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 8 + lVar38) = uVar15;
        }
        if (cVar13 < '\0') {
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 8 + lVar41) = uVar15;
        }
        if ((uVar14 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar120;
        }
        if ((uVar14 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar121;
        }
        if ((uVar14 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar18) = uVar122;
        }
        if ((uVar14 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar135;
        }
        if ((uVar14 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar81;
        }
        if ((uVar14 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar82;
        }
        if ((uVar14 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar38) = uVar118;
        }
        if (cVar13 < '\0') {
          *(uint *)(param_1 + 0xc + lVar41) = uVar119;
        }
      }
      uVar37 = uVar37 + 0x20;
      uVar14 = (int)uVar16 + 8;
      uVar16 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)(uVar113 & 0xfffffff8));
  }
  uVar113 = (uint)uVar16;
  if ((int)param_5 <= (int)uVar113) {
    return;
  }
  auVar71 = vpshufd_avx(ZEXT416(uVar113),0);
  auVar55._16_16_ = auVar71;
  auVar55._0_16_ = auVar71;
  auVar65 = vpshufd_avx(ZEXT416(param_5),0);
  pauVar1 = (undefined1 (*) [16])(param_2 + uVar16 * 8);
  auVar57 = SUB3216(auVar55 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar141 = SUB3216(auVar55 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar42 = vpcmpgtd_avx(auVar65,auVar141);
  auVar71 = vpcmpgtd_avx(auVar65,auVar57);
  auVar71 = vpand_avx(auVar71,auVar42);
  auVar42 = vpcmpeqd_avx(auVar42,auVar42);
  auVar42 = auVar42 & ~auVar71;
  if ((((SUB161(auVar42 >> 0x1f,0) & 1) == 0 && (SUB161(auVar42 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar42 >> 0x5f,0) & 1) == 0) && -1 < auVar42[0xf]) {
    auVar109._16_16_ = pauVar1[3];
    auVar109._0_16_ = pauVar1[1];
    auVar86._16_16_ = pauVar1[2];
    auVar86._0_16_ = *pauVar1;
    auVar46 = vshufps_avx(auVar86,auVar109,0x88);
    auVar43 = vshufps_avx(auVar86,auVar109,0xdd);
  }
  else {
    auVar71 = vpcmpgtd_avx(auVar65,auVar141);
    auVar42 = vpcmpgtd_avx(auVar65,auVar57);
    auVar84._0_4_ =
         auVar42._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar84._4_4_ = auVar42._4_4_ & _UNK_150b519c4;
    auVar84._8_4_ = auVar42._8_4_ & _UNK_150b519c8;
    auVar84._12_4_ = auVar42._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar84,1);
    vextractps_avx(auVar84,2);
    vextractps_avx(auVar84,3);
    auVar98._0_4_ =
         auVar42._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar98._4_4_ = auVar42._4_4_ & _UNK_150b519e4;
    auVar98._8_4_ = auVar42._8_4_ & _UNK_150b519e8;
    auVar98._12_4_ = auVar42._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar98,1);
    vextractps_avx(auVar98,2);
    vextractps_avx(auVar98,3);
    auVar46 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar71._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar43 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar71._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar98._0_4_))));
  }
  auVar138 = vpslld_avx(auVar46._0_16_,4);
  auVar142 = vpslld_avx(auVar46._16_16_,4);
  auVar10 = vpcmpgtd_avx(auVar65,auVar57);
  auVar12 = vpand_avx(auVar138,auVar10);
  lVar17 = param_1 + auVar12._0_4_;
  lVar18 = param_1 + auVar12._4_4_;
  auVar84 = vpcmpgtd_avx(auVar65,auVar141);
  auVar42 = vpand_avx(auVar142,auVar84);
  lVar20 = param_1 + auVar42._0_4_;
  lVar21 = param_1 + auVar42._4_4_;
  lVar22 = param_1 + auVar42._8_4_;
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar42._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar42._4_4_)),0x10);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + auVar42._8_4_)),0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + auVar42._12_4_)),0x30);
  lVar23 = param_1 + auVar42._12_4_;
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar12._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar12._4_4_)),0x10);
  auVar75._16_16_ = auVar84;
  auVar75._0_16_ = auVar10;
  uVar72 = auVar10._0_4_;
  uVar76 = auVar10._4_4_;
  uVar77 = auVar10._8_4_;
  uVar78 = auVar10._12_4_;
  uVar79 = auVar84._0_4_;
  uVar80 = auVar84._4_4_;
  uVar81 = auVar84._8_4_;
  uVar82 = auVar84._12_4_;
  auVar141 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d50) + lVar20)),
                           ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d54) + lVar21)),0x10);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d58) + lVar22)
                                           ),0x20);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d5c) + lVar23)
                                           ),0x30);
  auVar58 = vpslld_avx(auVar43._16_16_,4);
  auVar114 = vpand_avx(auVar84,auVar58);
  lVar24 = param_1 + auVar114._0_4_;
  auVar84 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar114._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar114._4_4_)),0x10);
  lVar31 = param_1 + auVar114._4_4_;
  auVar98 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d50) + lVar24)),
                          ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d54) + lVar31)),0x10);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_1 + auVar114._8_4_)),0x20);
  lVar32 = param_1 + auVar114._8_4_;
  auVar98 = vinsertps_avx(auVar98,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d58) + lVar32)),
                          0x20);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_1 + auVar114._12_4_)),0x30);
  lVar34 = param_1 + auVar114._12_4_;
  auVar98 = vinsertps_avx(auVar98,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d5c) + lVar34)),
                          0x30);
  auVar114 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar72 & 
                                             ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                             ) + lVar17)),
                           ZEXT416(*(uint *)((ulonglong)(uVar76 & _UNK_150b50d44) + lVar18)),0x10);
  auVar59 = vpslld_avx(auVar43._0_16_,4);
  auVar99 = vpand_avx(auVar10,auVar59);
  lVar35 = param_1 + auVar99._0_4_;
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar99._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar99._4_4_)),0x10);
  lVar36 = param_1 + auVar99._4_4_;
  auVar11 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar72 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar35)),
                          ZEXT416(*(uint *)((ulonglong)(uVar76 & _UNK_150b50d44) + lVar36)),0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + auVar12._8_4_)),0x20);
  lVar38 = param_1 + auVar12._8_4_;
  auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)((ulonglong)(uVar77 & _UNK_150b50d48) + lVar38)
                                           ),0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar99._8_4_)),0x20);
  lVar39 = param_1 + auVar99._8_4_;
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)((ulonglong)(uVar77 & _UNK_150b50d48) + lVar39)),
                          0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + auVar12._12_4_)),0x30);
  lVar40 = param_1 + auVar12._12_4_;
  auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d4c) + lVar40)
                                           ),0x30);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar99._12_4_)),0x30);
  lVar41 = param_1 + auVar99._12_4_;
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d4c) + lVar41)),
                          0x30);
  auVar87._16_16_ = auVar71;
  auVar87._0_16_ = auVar42;
  auVar99._0_4_ = uVar72 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar99._4_4_ = uVar76 & _UNK_150b50d64;
  auVar99._8_4_ = uVar77 & _UNK_150b50d68;
  auVar99._12_4_ = uVar78 & _UNK_150b50d6c;
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d70) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d74) + lVar21)),0x10);
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d70) + lVar24)),
                          ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d74) + lVar31)),0x10);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d78) + lVar22)),
                          0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d78) + lVar32)),
                          0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d7c) + lVar23)),
                          0x30);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d7c) + lVar34)),
                          0x30);
  uVar15 = vextractps_avx(auVar99,1);
  lVar19 = CONCAT44((int)((ulonglong)lVar34 >> 0x20),uVar15);
  uVar14 = vextractps_avx(auVar99,2);
  uVar33 = vextractps_avx(auVar99,3);
  auVar12 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar99._0_4_ + lVar17)),
                          ZEXT416(*(uint *)(lVar19 + lVar18)),0x10);
  auVar115._16_16_ = auVar141;
  auVar115._0_16_ = auVar114;
  auVar141 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar99._0_4_ + lVar35)),
                           ZEXT416(*(uint *)(lVar19 + lVar36)),0x10);
  auVar114 = vinsertps_avx(auVar12,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar38)),0x20);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar39)),0x20);
  auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)((ulonglong)uVar33 + lVar40)),0x30);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)uVar33 + lVar41)),0x30);
  auVar101._16_16_ = auVar71;
  auVar101._0_16_ = auVar114;
  auVar110._16_16_ = auVar84;
  auVar110._0_16_ = auVar10;
  auVar111._16_16_ = auVar98;
  auVar111._0_16_ = auVar11;
  auVar124._16_16_ = auVar42;
  auVar124._0_16_ = auVar141;
  auVar46 = vmaskmovps_avx(auVar75,auVar87);
  auVar43 = vmaskmovps_avx(auVar75,auVar115);
  auVar44 = vmaskmovps_avx(auVar75,auVar101);
  auVar60 = vmaskmovps_avx(auVar75,auVar110);
  auVar67 = vmaskmovps_avx(auVar75,auVar111);
  auVar45 = vmaskmovps_avx(auVar75,auVar124);
  auVar61 = vsubps_avx(auVar46,auVar60);
  auVar85 = vsubps_avx(auVar43,auVar67);
  auVar123 = vsubps_avx(auVar44,auVar45);
  auVar127._0_4_ =
       auVar123._0_4_ * auVar123._0_4_ +
       auVar85._0_4_ * auVar85._0_4_ + auVar61._0_4_ * auVar61._0_4_;
  auVar127._4_4_ =
       auVar123._4_4_ * auVar123._4_4_ +
       auVar85._4_4_ * auVar85._4_4_ + auVar61._4_4_ * auVar61._4_4_;
  auVar127._8_4_ =
       auVar123._8_4_ * auVar123._8_4_ +
       auVar85._8_4_ * auVar85._8_4_ + auVar61._8_4_ * auVar61._8_4_;
  auVar127._12_4_ =
       auVar123._12_4_ * auVar123._12_4_ +
       auVar85._12_4_ * auVar85._12_4_ + auVar61._12_4_ * auVar61._12_4_;
  auVar127._16_4_ =
       auVar123._16_4_ * auVar123._16_4_ +
       auVar85._16_4_ * auVar85._16_4_ + auVar61._16_4_ * auVar61._16_4_;
  auVar127._20_4_ =
       auVar123._20_4_ * auVar123._20_4_ +
       auVar85._20_4_ * auVar85._20_4_ + auVar61._20_4_ * auVar61._20_4_;
  auVar127._24_4_ =
       auVar123._24_4_ * auVar123._24_4_ +
       auVar85._24_4_ * auVar85._24_4_ + auVar61._24_4_ * auVar61._24_4_;
  auVar127._28_4_ =
       auVar123._28_4_ * auVar123._28_4_ +
       auVar85._28_4_ * auVar85._28_4_ + auVar61._28_4_ * auVar61._28_4_;
  auVar100 = vsqrtps_avx(auVar127);
  auVar74 = vcmpps_avx(auVar127,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar61 = vdivps_avx(auVar61,auVar100);
  auVar61 = vblendvps_avx(auVar61,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar74);
  auVar61 = vmaskmovps_avx(auVar75,auVar61);
  auVar85 = vdivps_avx(auVar85,auVar100);
  uVar33 = auVar74._0_4_;
  auVar116._0_4_ = ~uVar33 & auVar85._0_4_;
  uVar118 = auVar74._4_4_;
  auVar116._4_4_ = ~uVar118 & auVar85._4_4_;
  uVar119 = auVar74._8_4_;
  auVar116._8_4_ = ~uVar119 & auVar85._8_4_;
  uVar120 = auVar74._12_4_;
  auVar116._12_4_ = ~uVar120 & auVar85._12_4_;
  uVar121 = auVar74._16_4_;
  auVar116._16_4_ = ~uVar121 & auVar85._16_4_;
  uVar122 = auVar74._20_4_;
  auVar116._20_4_ = ~uVar122 & auVar85._20_4_;
  uVar135 = auVar74._24_4_;
  auVar116._24_4_ = ~uVar135 & auVar85._24_4_;
  uVar97 = auVar74._28_4_;
  auVar116._28_4_ = ~uVar97 & auVar85._28_4_;
  auVar74 = vmaskmovps_avx(auVar75,auVar116);
  auVar85 = vdivps_avx(auVar123,auVar100);
  auVar117._0_4_ = ~uVar33 & auVar85._0_4_;
  auVar117._4_4_ = ~uVar118 & auVar85._4_4_;
  auVar117._8_4_ = ~uVar119 & auVar85._8_4_;
  auVar117._12_4_ = ~uVar120 & auVar85._12_4_;
  auVar117._16_4_ = ~uVar121 & auVar85._16_4_;
  auVar117._20_4_ = ~uVar122 & auVar85._20_4_;
  auVar117._24_4_ = ~uVar135 & auVar85._24_4_;
  auVar117._28_4_ = ~uVar97 & auVar85._28_4_;
  auVar85 = vmaskmovps_avx(auVar75,auVar117);
  auVar114._0_4_ = uVar72 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar114._4_4_ = uVar76 & _UNK_150b50d84;
  auVar114._8_4_ = uVar77 & _UNK_150b50d88;
  auVar114._12_4_ = uVar78 & _UNK_150b50d8c;
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d90) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d94) + lVar21)),0x10);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d98) + lVar22)),
                          0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d9c) + lVar23)),
                          0x30);
  uVar15 = vextractps_avx(auVar114,1);
  lVar20 = CONCAT44((int)((ulonglong)lVar18 >> 0x20),uVar15);
  uVar14 = vextractps_avx(auVar114,2);
  uVar15 = vextractps_avx(auVar114,3);
  lVar21 = CONCAT44((int)((ulonglong)lVar41 >> 0x20),uVar15);
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar114._0_4_ + lVar17)),
                          ZEXT416(*(uint *)(lVar20 + lVar18)),0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar38)),0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(lVar21 + lVar40)),0x30);
  auVar165._16_16_ = auVar71;
  auVar165._0_16_ = auVar42;
  auVar141 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d90) + lVar24)),
                           ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d94) + lVar31)),0x10);
  auVar88._0_4_ = ~uVar33 & auVar100._0_4_;
  auVar88._4_4_ = ~uVar118 & auVar100._4_4_;
  auVar88._8_4_ = ~uVar119 & auVar100._8_4_;
  auVar88._12_4_ = ~uVar120 & auVar100._12_4_;
  auVar88._16_4_ = ~uVar121 & auVar100._16_4_;
  auVar88._20_4_ = ~uVar122 & auVar100._20_4_;
  auVar88._24_4_ = ~uVar135 & auVar100._24_4_;
  auVar88._28_4_ = ~uVar97 & auVar100._28_4_;
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d98) + lVar32)
                                           ),0x20);
  auVar100 = vmaskmovps_avx(auVar75,*(undefined1 (*) [32])(param_3 + (int)(uVar113 << 2)));
  auVar100 = vsubps_avx(auVar88,auVar100);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d9c) + lVar34)
                                           ),0x30);
  auVar84 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar114._0_4_ + lVar35)),
                          ZEXT416(*(uint *)(lVar20 + lVar36)),0x10);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar39)),0x20);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(lVar21 + lVar41)),0x30);
  local_240 = auVar61._0_4_;
  fStack_23c = auVar61._4_4_;
  fStack_238 = auVar61._8_4_;
  fStack_234 = auVar61._12_4_;
  fStack_230 = auVar61._16_4_;
  fStack_22c = auVar61._20_4_;
  fStack_228 = auVar61._24_4_;
  fStack_224 = auVar61._28_4_;
  fVar83 = auVar100._0_4_;
  fVar90 = auVar100._4_4_;
  fVar91 = auVar100._8_4_;
  fVar92 = auVar100._12_4_;
  fVar93 = auVar100._16_4_;
  fVar94 = auVar100._20_4_;
  fVar95 = auVar100._24_4_;
  fVar96 = auVar100._28_4_;
  local_220 = auVar74._0_4_;
  fStack_21c = auVar74._4_4_;
  fStack_218 = auVar74._8_4_;
  fStack_214 = auVar74._12_4_;
  fStack_210 = auVar74._16_4_;
  fStack_20c = auVar74._20_4_;
  fStack_208 = auVar74._24_4_;
  fStack_204 = auVar74._28_4_;
  local_200 = auVar85._0_4_;
  fStack_1fc = auVar85._4_4_;
  fStack_1f8 = auVar85._8_4_;
  fStack_1f4 = auVar85._12_4_;
  fStack_1f0 = auVar85._16_4_;
  fStack_1ec = auVar85._20_4_;
  fStack_1e8 = auVar85._24_4_;
  fStack_1e4 = auVar85._28_4_;
  auVar89._16_16_ = auVar141;
  auVar89._0_16_ = auVar84;
  auVar66 = vpermilps_avx(auVar66,0);
  fVar125 = auVar66._0_4_;
  auVar128._0_4_ = fVar125 * fVar83 * local_240;
  fVar129 = auVar66._4_4_;
  auVar128._4_4_ = fVar129 * fVar90 * fStack_23c;
  fVar130 = auVar66._8_4_;
  auVar128._8_4_ = fVar130 * fVar91 * fStack_238;
  fVar131 = auVar66._12_4_;
  auVar128._12_4_ = fVar131 * fVar92 * fStack_234;
  auVar128._16_4_ = fVar125 * fVar93 * fStack_230;
  auVar128._20_4_ = fVar129 * fVar94 * fStack_22c;
  auVar128._24_4_ = fVar130 * fVar95 * fStack_228;
  auVar128._28_4_ = fVar131 * fVar96 * fStack_224;
  fVar2 = auVar84._0_4_;
  fVar154 = auVar42._0_4_;
  auVar153._0_4_ = fVar154 + fVar2;
  fVar3 = auVar84._4_4_;
  fVar157 = auVar42._4_4_;
  auVar153._4_4_ = fVar157 + fVar3;
  fVar4 = auVar84._8_4_;
  fVar158 = auVar42._8_4_;
  auVar153._8_4_ = fVar158 + fVar4;
  fVar5 = auVar84._12_4_;
  fVar159 = auVar42._12_4_;
  auVar153._12_4_ = fVar159 + fVar5;
  fVar6 = auVar141._0_4_;
  fVar160 = auVar71._0_4_;
  auVar153._16_4_ = fVar160 + fVar6;
  fVar7 = auVar141._4_4_;
  fVar161 = auVar71._4_4_;
  auVar153._20_4_ = fVar161 + fVar7;
  fVar8 = auVar141._8_4_;
  fVar162 = auVar71._8_4_;
  auVar153._24_4_ = fVar162 + fVar8;
  fVar9 = auVar141._12_4_;
  fVar163 = auVar71._12_4_;
  auVar153._28_4_ = fVar163 + fVar9;
  auVar85 = vdivps_avx(auVar128,auVar153);
  auVar156._0_4_ = fVar125 * fVar83 * local_220;
  auVar156._4_4_ = fVar129 * fVar90 * fStack_21c;
  auVar156._8_4_ = fVar130 * fVar91 * fStack_218;
  auVar156._12_4_ = fVar131 * fVar92 * fStack_214;
  auVar156._16_4_ = fVar125 * fVar93 * fStack_210;
  auVar156._20_4_ = fVar129 * fVar94 * fStack_20c;
  auVar156._24_4_ = fVar130 * fVar95 * fStack_208;
  auVar156._28_4_ = fVar131 * fVar96 * fStack_204;
  auVar100 = vdivps_avx(auVar156,auVar153);
  auVar62._0_4_ = fVar125 * fVar83 * local_200;
  auVar62._4_4_ = fVar129 * fVar90 * fStack_1fc;
  auVar62._8_4_ = fVar130 * fVar91 * fStack_1f8;
  auVar62._12_4_ = fVar131 * fVar92 * fStack_1f4;
  auVar62._16_4_ = fVar125 * fVar93 * fStack_1f0;
  auVar62._20_4_ = fVar129 * fVar94 * fStack_1ec;
  auVar62._24_4_ = fVar130 * fVar95 * fStack_1e8;
  auVar62._28_4_ = fVar131 * fVar96 * fStack_1e4;
  auVar123 = vdivps_avx(auVar62,auVar153);
  auVar74 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar61 = vcmpps_avx(auVar74,auVar89,0);
  auVar74 = vcmpps_avx(auVar165,auVar74,0);
  uVar113 = auVar61._0_4_ & auVar74._0_4_;
  uVar14 = auVar61._4_4_ & auVar74._4_4_;
  uVar33 = auVar61._8_4_ & auVar74._8_4_;
  uVar118 = auVar61._12_4_ & auVar74._12_4_;
  uVar119 = auVar61._16_4_ & auVar74._16_4_;
  uVar120 = auVar61._20_4_ & auVar74._20_4_;
  uVar121 = auVar61._24_4_ & auVar74._24_4_;
  uVar122 = auVar61._28_4_ & auVar74._28_4_;
  fVar140 = (float)(~uVar113 & auVar85._0_4_);
  fVar145 = (float)(~uVar14 & auVar85._4_4_);
  fVar146 = (float)(~uVar33 & auVar85._8_4_);
  fVar147 = (float)(~uVar118 & auVar85._12_4_);
  fVar148 = (float)(~uVar119 & auVar85._16_4_);
  fVar149 = (float)(~uVar120 & auVar85._20_4_);
  fVar150 = (float)(~uVar121 & auVar85._24_4_);
  fVar151 = (float)(~uVar122 & auVar85._28_4_);
  fVar125 = (float)(~uVar113 & auVar100._0_4_);
  fVar129 = (float)(~uVar14 & auVar100._4_4_);
  fVar130 = (float)(~uVar33 & auVar100._8_4_);
  fVar131 = (float)(~uVar118 & auVar100._12_4_);
  fVar132 = (float)(~uVar119 & auVar100._16_4_);
  fVar133 = (float)(~uVar120 & auVar100._20_4_);
  fVar134 = (float)(~uVar121 & auVar100._24_4_);
  fVar136 = (float)(~uVar122 & auVar100._28_4_);
  fVar83 = (float)(~uVar113 & auVar123._0_4_);
  fVar90 = (float)(~uVar14 & auVar123._4_4_);
  fVar91 = (float)(~uVar33 & auVar123._8_4_);
  fVar92 = (float)(~uVar118 & auVar123._12_4_);
  fVar93 = (float)(~uVar119 & auVar123._16_4_);
  fVar94 = (float)(~uVar120 & auVar123._20_4_);
  fVar95 = (float)(~uVar121 & auVar123._24_4_);
  fVar96 = (float)(~uVar122 & auVar123._28_4_);
  auVar74 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar61 = vcmpps_avx(auVar74,auVar165,1);
  auVar63._0_4_ = auVar61._0_4_ & uVar72;
  auVar63._4_4_ = auVar61._4_4_ & uVar76;
  auVar63._8_4_ = auVar61._8_4_ & uVar77;
  auVar63._12_4_ = auVar61._12_4_ & uVar78;
  auVar63._16_4_ = auVar61._16_4_ & uVar79;
  auVar63._20_4_ = auVar61._20_4_ & uVar80;
  auVar63._24_4_ = auVar61._24_4_ & uVar81;
  auVar63._28_4_ = auVar61._28_4_ & uVar82;
  uVar113 = vmovmskps_avx(auVar63);
  if (uVar113 == 0) goto LAB_140362be5;
  auVar64._0_4_ = fVar154 * fVar140;
  auVar64._4_4_ = fVar157 * fVar145;
  auVar64._8_4_ = fVar158 * fVar146;
  auVar64._12_4_ = fVar159 * fVar147;
  auVar64._16_4_ = fVar160 * fVar148;
  auVar64._20_4_ = fVar161 * fVar149;
  auVar64._24_4_ = fVar162 * fVar150;
  auVar64._28_4_ = fVar163 * fVar151;
  auVar46 = vsubps_avx(auVar46,auVar64);
  cVar13 = (char)uVar113;
  iVar73 = auVar138._0_4_;
  auVar66 = auVar46._0_16_;
  auVar98 = auVar46._16_16_;
  iVar25 = auVar138._4_4_;
  iVar26 = auVar138._8_4_;
  iVar27 = auVar138._12_4_;
  iVar137 = auVar142._0_4_;
  iVar28 = auVar142._4_4_;
  iVar29 = auVar142._8_4_;
  iVar30 = auVar142._12_4_;
  if ((uVar113 & 1) == 0) {
    if ((uVar113 & 2) == 0) goto LAB_140362aaa;
LAB_140362e00:
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + iVar25) = uVar15;
    if ((uVar113 & 4) != 0) goto LAB_140362e19;
LAB_140362ab3:
    if ((uVar113 & 8) == 0) goto LAB_140362abc;
LAB_140362e32:
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + iVar27) = uVar15;
    if ((uVar113 & 0x10) != 0) goto LAB_140362e57;
LAB_140362ad1:
    if ((uVar113 & 0x20) == 0) goto LAB_140362ada;
LAB_140362e6e:
    uVar15 = vextractps_avx(auVar98,1);
    *(undefined4 *)(param_1 + iVar28) = uVar15;
    if ((uVar113 & 0x40) != 0) goto LAB_140362e87;
LAB_140362ae3:
    auVar144._0_4_ = fVar154 * fVar125;
    auVar144._4_4_ = fVar157 * fVar129;
    auVar144._8_4_ = fVar158 * fVar130;
    auVar144._12_4_ = fVar159 * fVar131;
    auVar144._16_4_ = fVar160 * fVar132;
    auVar144._20_4_ = fVar161 * fVar133;
    auVar144._24_4_ = fVar162 * fVar134;
    auVar144._28_4_ = fVar163 * fVar136;
    if (-1 < cVar13) goto LAB_140362af0;
LAB_140362ea4:
    uVar15 = vextractps_avx(auVar98,3);
    *(undefined4 *)(param_1 + iVar30) = uVar15;
    auVar46 = vsubps_avx(auVar43,auVar144);
    if ((uVar113 & 1) != 0) goto LAB_140362ec2;
LAB_140362afe:
    if ((uVar113 & 2) == 0) goto LAB_140362b07;
LAB_140362eda:
    uVar15 = vextractps_avx(auVar46._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar15;
    if ((uVar113 & 4) != 0) goto LAB_140362ef4;
LAB_140362b10:
    if ((uVar113 & 8) == 0) goto LAB_140362b19;
LAB_140362f0e:
    uVar15 = vextractps_avx(auVar46._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar15;
    auVar66 = auVar46._16_16_;
    if ((uVar113 & 0x10) != 0) goto LAB_140362f2e;
LAB_140362b28:
    if ((uVar113 & 0x20) == 0) goto LAB_140362b31;
LAB_140362f46:
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar15;
    if ((uVar113 & 0x40) != 0) goto LAB_140362f60;
LAB_140362b3a:
    auVar112._0_4_ = fVar154 * fVar83;
    auVar112._4_4_ = fVar157 * fVar90;
    auVar112._8_4_ = fVar158 * fVar91;
    auVar112._12_4_ = fVar159 * fVar92;
    auVar112._16_4_ = fVar160 * fVar93;
    auVar112._20_4_ = fVar161 * fVar94;
    auVar112._24_4_ = fVar162 * fVar95;
    auVar112._28_4_ = fVar163 * fVar96;
    if (-1 < cVar13) goto LAB_140362b47;
LAB_140362f7e:
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar30) = uVar15;
    auVar46 = vsubps_avx(auVar44,auVar112);
    if ((uVar113 & 1) != 0) goto LAB_140362f9c;
LAB_140362b54:
    if ((uVar113 & 2) == 0) goto LAB_140362b5d;
LAB_140362fb4:
    uVar15 = vextractps_avx(auVar46._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar15;
    if ((uVar113 & 4) != 0) goto LAB_140362fce;
LAB_140362b66:
    if ((uVar113 & 8) == 0) goto LAB_140362b6f;
LAB_140362fe8:
    uVar15 = vextractps_avx(auVar46._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar15;
    auVar66 = auVar46._16_16_;
  }
  else {
    *(int *)(param_1 + iVar73) = auVar46._0_4_;
    if ((uVar113 & 2) != 0) goto LAB_140362e00;
LAB_140362aaa:
    if ((uVar113 & 4) == 0) goto LAB_140362ab3;
LAB_140362e19:
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + iVar26) = uVar15;
    if ((uVar113 & 8) != 0) goto LAB_140362e32;
LAB_140362abc:
    if ((uVar113 & 0x10) == 0) goto LAB_140362ad1;
LAB_140362e57:
    *(int *)(param_1 + iVar137) = auVar46._16_4_;
    if ((uVar113 & 0x20) != 0) goto LAB_140362e6e;
LAB_140362ada:
    if ((uVar113 & 0x40) == 0) goto LAB_140362ae3;
LAB_140362e87:
    uVar15 = vextractps_avx(auVar98,2);
    *(undefined4 *)(param_1 + iVar29) = uVar15;
    auVar144._0_4_ = fVar154 * fVar125;
    auVar144._4_4_ = fVar157 * fVar129;
    auVar144._8_4_ = fVar158 * fVar130;
    auVar144._12_4_ = fVar159 * fVar131;
    auVar144._16_4_ = fVar160 * fVar132;
    auVar144._20_4_ = fVar161 * fVar133;
    auVar144._24_4_ = fVar162 * fVar134;
    auVar144._28_4_ = fVar163 * fVar136;
    if (cVar13 < '\0') goto LAB_140362ea4;
LAB_140362af0:
    auVar46 = vsubps_avx(auVar43,auVar144);
    if ((uVar113 & 1) == 0) goto LAB_140362afe;
LAB_140362ec2:
    *(int *)(param_1 + 4 + (longlong)iVar73) = auVar46._0_4_;
    if ((uVar113 & 2) != 0) goto LAB_140362eda;
LAB_140362b07:
    if ((uVar113 & 4) == 0) goto LAB_140362b10;
LAB_140362ef4:
    uVar15 = vextractps_avx(auVar46._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar15;
    if ((uVar113 & 8) != 0) goto LAB_140362f0e;
LAB_140362b19:
    auVar66 = auVar46._16_16_;
    if ((uVar113 & 0x10) == 0) goto LAB_140362b28;
LAB_140362f2e:
    *(int *)(param_1 + 4 + (longlong)iVar137) = auVar66._0_4_;
    if ((uVar113 & 0x20) != 0) goto LAB_140362f46;
LAB_140362b31:
    if ((uVar113 & 0x40) == 0) goto LAB_140362b3a;
LAB_140362f60:
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar15;
    auVar112._0_4_ = fVar154 * fVar83;
    auVar112._4_4_ = fVar157 * fVar90;
    auVar112._8_4_ = fVar158 * fVar91;
    auVar112._12_4_ = fVar159 * fVar92;
    auVar112._16_4_ = fVar160 * fVar93;
    auVar112._20_4_ = fVar161 * fVar94;
    auVar112._24_4_ = fVar162 * fVar95;
    auVar112._28_4_ = fVar163 * fVar96;
    if (cVar13 < '\0') goto LAB_140362f7e;
LAB_140362b47:
    auVar46 = vsubps_avx(auVar44,auVar112);
    if ((uVar113 & 1) == 0) goto LAB_140362b54;
LAB_140362f9c:
    *(int *)(param_1 + 8 + (longlong)iVar73) = auVar46._0_4_;
    if ((uVar113 & 2) != 0) goto LAB_140362fb4;
LAB_140362b5d:
    if ((uVar113 & 4) == 0) goto LAB_140362b66;
LAB_140362fce:
    uVar15 = vextractps_avx(auVar46._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar15;
    if ((uVar113 & 8) != 0) goto LAB_140362fe8;
LAB_140362b6f:
    auVar66 = auVar46._16_16_;
  }
  if ((uVar113 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar137) = auVar66._0_4_;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar30) = uVar15;
  }
  if ((uVar113 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar73) = fVar154;
  }
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar15;
  }
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar137) = fVar160;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar28) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar15;
  }
LAB_140362be5:
  auVar66 = vpcmpgtd_avx(auVar65,auVar57);
  auVar46 = vcmpps_avx(auVar74,auVar89,1);
  auVar56._0_4_ = auVar46._0_4_ & auVar66._0_4_;
  auVar56._4_4_ = auVar46._4_4_ & auVar66._4_4_;
  auVar56._8_4_ = auVar46._8_4_ & auVar66._8_4_;
  auVar56._12_4_ = auVar46._12_4_ & auVar66._12_4_;
  auVar56._16_4_ = auVar46._16_4_ & uVar79;
  auVar56._20_4_ = auVar46._20_4_ & uVar80;
  auVar56._24_4_ = auVar46._24_4_ & uVar81;
  auVar56._28_4_ = auVar46._28_4_ & uVar82;
  uVar113 = vmovmskps_avx(auVar56);
  if (uVar113 == 0) {
    return;
  }
  local_340 = auVar59._0_4_;
  iStack_33c = auVar59._4_4_;
  iStack_338 = auVar59._8_4_;
  iStack_334 = auVar59._12_4_;
  local_3b0 = auVar58._0_4_;
  iStack_3ac = auVar58._4_4_;
  iStack_3a8 = auVar58._8_4_;
  iStack_3a4 = auVar58._12_4_;
  local_360 = auVar60._0_4_;
  fStack_35c = auVar60._4_4_;
  fStack_358 = auVar60._8_4_;
  fStack_354 = auVar60._12_4_;
  fStack_350 = auVar60._16_4_;
  fStack_34c = auVar60._20_4_;
  fStack_348 = auVar60._24_4_;
  fStack_344 = auVar60._28_4_;
  auVar66._0_4_ = fVar140 * fVar2 + local_360;
  auVar66._4_4_ = fVar145 * fVar3 + fStack_35c;
  auVar66._8_4_ = fVar146 * fVar4 + fStack_358;
  auVar66._12_4_ = fVar147 * fVar5 + fStack_354;
  auVar68._16_4_ = fVar148 * fVar6 + fStack_350;
  auVar68._0_16_ = auVar66;
  auVar68._20_4_ = fVar149 * fVar7 + fStack_34c;
  auVar68._24_4_ = fVar150 * fVar8 + fStack_348;
  auVar68._28_4_ = fVar151 * fVar9 + fStack_344;
  cVar13 = (char)uVar113;
  auVar71 = auVar68._16_16_;
  local_320 = auVar67._0_4_;
  fStack_31c = auVar67._4_4_;
  fStack_318 = auVar67._8_4_;
  fStack_314 = auVar67._12_4_;
  fStack_310 = auVar67._16_4_;
  fStack_30c = auVar67._20_4_;
  fStack_308 = auVar67._24_4_;
  fStack_304 = auVar67._28_4_;
  local_300 = auVar45._0_4_;
  fStack_2fc = auVar45._4_4_;
  fStack_2f8 = auVar45._8_4_;
  fStack_2f4 = auVar45._12_4_;
  fStack_2f0 = auVar45._16_4_;
  fStack_2ec = auVar45._20_4_;
  fStack_2e8 = auVar45._24_4_;
  fStack_2e4 = auVar45._28_4_;
  if ((uVar113 & 1) != 0) {
    *(float *)(param_1 + local_340) = auVar66._0_4_;
  }
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + iStack_33c) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + iStack_338) = uVar15;
  }
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + iStack_334) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(float *)(param_1 + local_3b0) = auVar68._16_4_;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + iStack_3ac) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + iStack_3a8) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + iStack_3a4) = uVar15;
    auVar69._0_4_ = fVar125 * fVar2 + local_320;
    auVar69._4_4_ = fVar129 * fVar3 + fStack_31c;
    auVar69._8_4_ = fVar130 * fVar4 + fStack_318;
    auVar69._12_4_ = fVar131 * fVar5 + fStack_314;
    auVar69._16_4_ = fVar132 * fVar6 + fStack_310;
    auVar69._20_4_ = fVar133 * fVar7 + fStack_30c;
    auVar69._24_4_ = fVar134 * fVar8 + fStack_308;
    auVar69._28_4_ = fVar136 * fVar9 + fStack_304;
  }
  else {
    auVar69._0_4_ = fVar125 * fVar2 + local_320;
    auVar69._4_4_ = fVar129 * fVar3 + fStack_31c;
    auVar69._8_4_ = fVar130 * fVar4 + fStack_318;
    auVar69._12_4_ = fVar131 * fVar5 + fStack_314;
    auVar69._16_4_ = fVar132 * fVar6 + fStack_310;
    auVar69._20_4_ = fVar133 * fVar7 + fStack_30c;
    auVar69._24_4_ = fVar134 * fVar8 + fStack_308;
    auVar69._28_4_ = fVar136 * fVar9 + fStack_304;
  }
  if ((uVar113 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_340) = auVar69._0_4_;
  }
  auVar66 = auVar69._0_16_;
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_33c) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_338) = uVar15;
  }
  auVar71 = auVar69._16_16_;
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_334) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_3b0) = auVar69._16_4_;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3ac) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3a8) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3a4) = uVar15;
    auVar70._0_4_ = fVar83 * fVar2 + local_300;
    auVar70._4_4_ = fVar90 * fVar3 + fStack_2fc;
    auVar70._8_4_ = fVar91 * fVar4 + fStack_2f8;
    auVar70._12_4_ = fVar92 * fVar5 + fStack_2f4;
    auVar70._16_4_ = fVar93 * fVar6 + fStack_2f0;
    auVar70._20_4_ = fVar94 * fVar7 + fStack_2ec;
    auVar70._24_4_ = fVar95 * fVar8 + fStack_2e8;
    auVar70._28_4_ = fVar96 * fVar9 + fStack_2e4;
  }
  else {
    auVar70._0_4_ = fVar83 * fVar2 + local_300;
    auVar70._4_4_ = fVar90 * fVar3 + fStack_2fc;
    auVar70._8_4_ = fVar91 * fVar4 + fStack_2f8;
    auVar70._12_4_ = fVar92 * fVar5 + fStack_2f4;
    auVar70._16_4_ = fVar93 * fVar6 + fStack_2f0;
    auVar70._20_4_ = fVar94 * fVar7 + fStack_2ec;
    auVar70._24_4_ = fVar95 * fVar8 + fStack_2e8;
    auVar70._28_4_ = fVar96 * fVar9 + fStack_2e4;
  }
  if ((uVar113 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_340) = auVar70._0_4_;
  }
  auVar66 = auVar70._0_16_;
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_33c) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_338) = uVar15;
  }
  auVar71 = auVar70._16_16_;
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_334) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_3b0) = auVar70._16_4_;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3ac) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3a8) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3a4) = uVar15;
  }
  if ((uVar113 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_340) = fVar2;
  }
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_33c) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_338) = uVar15;
  }
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_334) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_3b0) = fVar6;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar141,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3ac) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar141,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3a8) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar141,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3a4) = uVar15;
  }
  return;
}

// ApplySpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx @ 140363490

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar42 [32];
  undefined1 auVar41 [16];
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
  undefined1 auVar54 [16];
  undefined1 auVar53 [32];
  undefined1 auVar55 [16];
  undefined1 auVar61 [32];
  undefined1 auVar56 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar60 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  uint uVar78;
  undefined1 auVar79 [16];
  uint uVar84;
  uint uVar85;
  uint uVar87;
  uint uVar89;
  uint uVar91;
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  uint uVar86;
  uint uVar93;
  undefined1 auVar82 [32];
  uint uVar88;
  uint uVar90;
  uint uVar92;
  uint uVar94;
  undefined1 auVar83 [32];
  undefined1 auVar95 [16];
  undefined1 auVar97 [32];
  undefined1 auVar96 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  float fVar106;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar107 [32];
  float fVar117;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  float fVar120;
  uint uVar121;
  float fVar124;
  float fVar125;
  uint uVar126;
  float fVar127;
  uint uVar128;
  float fVar129;
  uint uVar130;
  float fVar131;
  uint uVar132;
  float fVar133;
  uint uVar134;
  float fVar135;
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  uint uVar136;
  float fVar137;
  float fVar144;
  undefined1 auVar138 [16];
  float fVar142;
  float fVar143;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar139 [32];
  float fVar148;
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  float fVar149;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar159 [32];
  uint uVar162;
  uint uVar163;
  uint uVar164;
  undefined1 auVar160 [32];
  uint uVar165;
  undefined1 auVar161 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [16];
  undefined1 auVar168 [32];
  int local_430;
  int iStack_42c;
  int iStack_428;
  int iStack_424;
  int local_3e0;
  int iStack_3dc;
  int iStack_3d8;
  int iStack_3d4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float local_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
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
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  
  uVar121 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar121 = param_6;
  }
  if ((int)(uVar121 & 0xfffffff8) < 1) {
    uVar30 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar29 = 0;
    uVar30 = 0;
    do {
      auVar61._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar29 * 2);
      auVar61._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar29 * 2);
      auVar42._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar29 * 2);
      auVar42._0_16_ = *(undefined1 (*) [16])(param_2 + uVar29 * 2);
      auVar43 = vshufps_avx(auVar42,auVar61,0x88);
      auVar42 = vshufps_avx(auVar42,auVar61,0xdd);
      auVar40 = vpslld_avx(auVar43._16_16_,4);
      auVar55 = vpslld_avx(auVar43._0_16_,4);
      lVar37 = (longlong)auVar55._0_4_;
      lVar25 = (longlong)auVar55._4_4_;
      lVar27 = (longlong)auVar55._8_4_;
      lVar35 = (longlong)auVar55._12_4_;
      lVar33 = (longlong)auVar40._0_4_;
      lVar31 = (longlong)auVar40._4_4_;
      lVar23 = (longlong)auVar40._8_4_;
      lVar19 = (longlong)auVar40._12_4_;
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + lVar31)),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + lVar23)),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + lVar19)),0x30);
      auVar55 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar37)),
                              ZEXT416(*(uint *)(param_1 + lVar25)),0x10);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_1 + lVar35)),0x30);
      auVar168._16_16_ = auVar40;
      auVar168._0_16_ = auVar55;
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 4 + lVar19)),0x30);
      auVar55 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar37)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x10);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x30);
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x20);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + 8 + lVar19)),0x30);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar37)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x10);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar166._16_16_ = auVar40;
      auVar166._0_16_ = auVar55;
      auVar40 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x30);
      auVar118._16_16_ = auVar41;
      auVar118._0_16_ = auVar40;
      uVar21 = *(uint *)(param_1 + 0xc + lVar37);
      uVar126 = *(uint *)(param_1 + 0xc + lVar25);
      uVar128 = *(uint *)(param_1 + 0xc + lVar27);
      uVar88 = *(uint *)(param_1 + 0xc + lVar35);
      uVar90 = *(uint *)(param_1 + 0xc + lVar33);
      uVar92 = *(uint *)(param_1 + 0xc + lVar31);
      uVar94 = *(uint *)(param_1 + 0xc + lVar23);
      uVar130 = *(uint *)(param_1 + 0xc + lVar19);
      auVar40 = vinsertps_avx(ZEXT416(uVar90),ZEXT416(uVar92),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(uVar94),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(uVar130),0x30);
      auVar55 = vinsertps_avx(ZEXT416(uVar21),ZEXT416(uVar126),0x10);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(uVar128),0x20);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(uVar88),0x30);
      auVar139._16_16_ = auVar40;
      auVar139._0_16_ = auVar55;
      auVar41 = vpslld_avx(auVar42._16_16_,4);
      auVar56 = vpslld_avx(auVar42._0_16_,4);
      lVar36 = (longlong)auVar56._0_4_;
      lVar39 = (longlong)auVar56._4_4_;
      lVar38 = (longlong)auVar56._8_4_;
      lVar26 = (longlong)auVar56._12_4_;
      lVar28 = (longlong)auVar41._0_4_;
      lVar34 = (longlong)auVar41._4_4_;
      lVar32 = (longlong)auVar41._8_4_;
      lVar24 = (longlong)auVar41._12_4_;
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + lVar34)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar32)),0x20);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar24)),0x30);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + lVar39)),0x10);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + lVar38)),0x20);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + lVar26)),0x30);
      auVar97._16_16_ = auVar41;
      auVar97._0_16_ = auVar56;
      auVar54 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar34)),0x10);
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 4 + lVar32)),0x20);
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x30);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x20);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_1 + 4 + lVar26)),0x30);
      auVar80._16_16_ = auVar54;
      auVar80._0_16_ = auVar13;
      auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar34)),0x10);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 8 + lVar32)),0x20);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x30);
      auVar95 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x10);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x20);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar26)),0x30);
      auVar73._16_16_ = auVar14;
      auVar73._0_16_ = auVar95;
      auVar43 = vsubps_avx(auVar168,auVar97);
      auVar42 = vsubps_avx(auVar166,auVar80);
      auVar73 = vsubps_avx(auVar118,auVar73);
      auVar62._0_4_ =
           auVar43._0_4_ * auVar43._0_4_ + auVar42._0_4_ * auVar42._0_4_ +
           auVar73._0_4_ * auVar73._0_4_;
      auVar62._4_4_ =
           auVar43._4_4_ * auVar43._4_4_ + auVar42._4_4_ * auVar42._4_4_ +
           auVar73._4_4_ * auVar73._4_4_;
      auVar62._8_4_ =
           auVar43._8_4_ * auVar43._8_4_ + auVar42._8_4_ * auVar42._8_4_ +
           auVar73._8_4_ * auVar73._8_4_;
      auVar62._12_4_ =
           auVar43._12_4_ * auVar43._12_4_ + auVar42._12_4_ * auVar42._12_4_ +
           auVar73._12_4_ * auVar73._12_4_;
      auVar62._16_4_ =
           auVar43._16_4_ * auVar43._16_4_ + auVar42._16_4_ * auVar42._16_4_ +
           auVar73._16_4_ * auVar73._16_4_;
      auVar62._20_4_ =
           auVar43._20_4_ * auVar43._20_4_ + auVar42._20_4_ * auVar42._20_4_ +
           auVar73._20_4_ * auVar73._20_4_;
      auVar62._24_4_ =
           auVar43._24_4_ * auVar43._24_4_ + auVar42._24_4_ * auVar42._24_4_ +
           auVar73._24_4_ * auVar73._24_4_;
      auVar62._28_4_ =
           auVar43._28_4_ * auVar43._28_4_ + auVar42._28_4_ * auVar42._28_4_ +
           auVar73._28_4_ * auVar73._28_4_;
      auVar107._16_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + (uVar29 & 0xffffffff));
      auVar107._0_16_ = *(undefined1 (*) [16])(param_3 + (uVar29 & 0xffffffff));
      uVar132 = *(uint *)(param_1 + 0xc + lVar28);
      uVar134 = *(uint *)(param_1 + 0xc + lVar34);
      uVar136 = *(uint *)(param_1 + 0xc + lVar32);
      auVar60 = vinsertps_avx(ZEXT416(uVar132),ZEXT416(uVar134),0x10);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(uVar136),0x20);
      uVar162 = *(uint *)(param_1 + 0xc + lVar24);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(uVar162),0x30);
      uVar163 = *(uint *)(param_1 + 0xc + lVar36);
      uVar164 = *(uint *)(param_1 + 0xc + lVar39);
      uVar165 = *(uint *)(param_1 + 0xc + lVar38);
      auVar15 = vinsertps_avx(ZEXT416(uVar163),ZEXT416(uVar164),0x10);
      auVar74 = vsqrtps_avx(auVar62);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(uVar165),0x20);
      auVar43 = vdivps_avx(auVar43,auVar74);
      auVar61 = vdivps_avx(auVar42,auVar74);
      uVar2 = *(uint *)(param_1 + 0xc + lVar26);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(uVar2),0x30);
      auVar73 = vdivps_avx(auVar73,auVar74);
      auVar160._16_16_ = auVar60;
      auVar160._0_16_ = auVar15;
      auVar42 = vcmpps_avx(auVar62,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar43 = vblendvps_avx(auVar43,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar42);
      uVar78 = auVar42._0_4_;
      uVar84 = auVar42._4_4_;
      uVar85 = auVar42._8_4_;
      uVar86 = auVar42._12_4_;
      uVar87 = auVar42._16_4_;
      uVar89 = auVar42._20_4_;
      uVar91 = auVar42._24_4_;
      uVar93 = auVar42._28_4_;
      auVar138 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_4 + 4 + uVar30)));
      auVar63._0_4_ = ~uVar78 & auVar74._0_4_;
      auVar63._4_4_ = ~uVar84 & auVar74._4_4_;
      auVar63._8_4_ = ~uVar85 & auVar74._8_4_;
      auVar63._12_4_ = ~uVar86 & auVar74._12_4_;
      auVar63._16_4_ = ~uVar87 & auVar74._16_4_;
      auVar63._20_4_ = ~uVar89 & auVar74._20_4_;
      auVar63._24_4_ = ~uVar91 & auVar74._24_4_;
      auVar63._28_4_ = ~uVar93 & auVar74._28_4_;
      auVar72 = vpslld_avx(auVar138,2);
      auVar138 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + (ulonglong)auVar72._0_4_)),
                               ZEXT416(*(uint *)(param_5 + (ulonglong)auVar72._4_4_)),0x10);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar72._8_4_)),0x20)
      ;
      auVar18 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_4 + uVar30)));
      auVar42 = vsubps_avx(auVar63,auVar107);
      auVar79 = vpslld_avx(auVar18,2);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar72._12_4_)),0x30
                              );
      auVar18 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + (ulonglong)auVar79._0_4_)),
                              ZEXT416(*(uint *)(param_5 + (ulonglong)auVar79._4_4_)),0x10);
      auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar79._8_4_)),0x20);
      auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar79._12_4_)),0x30);
      fVar106 = auVar42._0_4_;
      fVar112 = auVar42._4_4_;
      fVar114 = auVar42._8_4_;
      fVar116 = auVar42._12_4_;
      fVar120 = auVar42._16_4_;
      fVar125 = auVar42._20_4_;
      fVar129 = auVar42._24_4_;
      fVar133 = auVar42._28_4_;
      fVar111 = auVar18._0_4_;
      auVar74._0_4_ = auVar43._0_4_ * fVar106 * fVar111;
      fVar113 = auVar18._4_4_;
      auVar74._4_4_ = auVar43._4_4_ * fVar112 * fVar113;
      fVar115 = auVar18._8_4_;
      auVar74._8_4_ = auVar43._8_4_ * fVar114 * fVar115;
      fVar117 = auVar18._12_4_;
      auVar74._12_4_ = auVar43._12_4_ * fVar116 * fVar117;
      fVar124 = auVar138._0_4_;
      auVar74._16_4_ = auVar43._16_4_ * fVar120 * fVar124;
      fVar127 = auVar138._4_4_;
      auVar74._20_4_ = auVar43._20_4_ * fVar125 * fVar127;
      fVar131 = auVar138._8_4_;
      auVar74._24_4_ = auVar43._24_4_ * fVar129 * fVar131;
      fVar135 = auVar138._12_4_;
      auVar74._28_4_ = auVar43._28_4_ * fVar133 * fVar135;
      auVar81._0_4_ = (float)(~uVar78 & auVar61._0_4_) * fVar106 * fVar111;
      auVar81._4_4_ = (float)(~uVar84 & auVar61._4_4_) * fVar112 * fVar113;
      auVar81._8_4_ = (float)(~uVar85 & auVar61._8_4_) * fVar114 * fVar115;
      auVar81._12_4_ = (float)(~uVar86 & auVar61._12_4_) * fVar116 * fVar117;
      auVar81._16_4_ = (float)(~uVar87 & auVar61._16_4_) * fVar120 * fVar124;
      auVar81._20_4_ = (float)(~uVar89 & auVar61._20_4_) * fVar125 * fVar127;
      auVar81._24_4_ = (float)(~uVar91 & auVar61._24_4_) * fVar129 * fVar131;
      auVar81._28_4_ = (float)(~uVar93 & auVar61._28_4_) * fVar133 * fVar135;
      fVar5 = auVar15._0_4_;
      fVar137 = auVar55._0_4_;
      auVar100._0_4_ = fVar137 + fVar5;
      fVar6 = auVar15._4_4_;
      fVar142 = auVar55._4_4_;
      auVar100._4_4_ = fVar142 + fVar6;
      fVar7 = auVar15._8_4_;
      fVar143 = auVar55._8_4_;
      auVar100._8_4_ = fVar143 + fVar7;
      fVar8 = auVar15._12_4_;
      fVar144 = auVar55._12_4_;
      auVar100._12_4_ = fVar144 + fVar8;
      fVar9 = auVar60._0_4_;
      fVar145 = auVar40._0_4_;
      auVar100._16_4_ = fVar145 + fVar9;
      fVar10 = auVar60._4_4_;
      fVar146 = auVar40._4_4_;
      auVar100._20_4_ = fVar146 + fVar10;
      fVar11 = auVar60._8_4_;
      fVar147 = auVar40._8_4_;
      auVar100._24_4_ = fVar147 + fVar11;
      fVar12 = auVar60._12_4_;
      fVar148 = auVar40._12_4_;
      auVar100._28_4_ = fVar148 + fVar12;
      auVar61 = vdivps_avx(auVar74,auVar100);
      auVar43._0_4_ = (float)(~uVar78 & auVar73._0_4_) * fVar106 * fVar111;
      auVar43._4_4_ = (float)(~uVar84 & auVar73._4_4_) * fVar112 * fVar113;
      auVar43._8_4_ = (float)(~uVar85 & auVar73._8_4_) * fVar114 * fVar115;
      auVar43._12_4_ = (float)(~uVar86 & auVar73._12_4_) * fVar116 * fVar117;
      auVar43._16_4_ = (float)(~uVar87 & auVar73._16_4_) * fVar120 * fVar124;
      auVar43._20_4_ = (float)(~uVar89 & auVar73._20_4_) * fVar125 * fVar127;
      auVar43._24_4_ = (float)(~uVar91 & auVar73._24_4_) * fVar129 * fVar131;
      auVar43._28_4_ = (float)(~uVar93 & auVar73._28_4_) * fVar133 * fVar135;
      auVar73 = vdivps_avx(auVar81,auVar100);
      auVar74 = vdivps_avx(auVar43,auVar100);
      auVar43 = vcmpps_avx(auVar160,ZEXT832(0) << 0x20,0);
      auVar42 = vcmpps_avx(auVar139,ZEXT832(0) << 0x20,0);
      uVar78 = auVar43._0_4_ & auVar42._0_4_;
      uVar84 = auVar43._4_4_ & auVar42._4_4_;
      uVar85 = auVar43._8_4_ & auVar42._8_4_;
      uVar86 = auVar43._12_4_ & auVar42._12_4_;
      uVar87 = auVar43._16_4_ & auVar42._16_4_;
      uVar89 = auVar43._20_4_ & auVar42._20_4_;
      uVar91 = auVar43._24_4_ & auVar42._24_4_;
      uVar93 = auVar43._28_4_ & auVar42._28_4_;
      fVar149 = (float)(~uVar78 & auVar61._0_4_);
      fVar152 = (float)(~uVar84 & auVar61._4_4_);
      fVar153 = (float)(~uVar85 & auVar61._8_4_);
      fVar154 = (float)(~uVar86 & auVar61._12_4_);
      fVar155 = (float)(~uVar87 & auVar61._16_4_);
      fVar156 = (float)(~uVar89 & auVar61._20_4_);
      fVar157 = (float)(~uVar91 & auVar61._24_4_);
      fVar158 = (float)(~uVar93 & auVar61._28_4_);
      fVar120 = (float)(~uVar78 & auVar73._0_4_);
      fVar124 = (float)(~uVar84 & auVar73._4_4_);
      fVar125 = (float)(~uVar85 & auVar73._8_4_);
      fVar127 = (float)(~uVar86 & auVar73._12_4_);
      fVar129 = (float)(~uVar87 & auVar73._16_4_);
      fVar131 = (float)(~uVar89 & auVar73._20_4_);
      fVar133 = (float)(~uVar91 & auVar73._24_4_);
      fVar135 = (float)(~uVar93 & auVar73._28_4_);
      fVar106 = (float)(~uVar78 & auVar74._0_4_);
      fVar111 = (float)(~uVar84 & auVar74._4_4_);
      fVar112 = (float)(~uVar85 & auVar74._8_4_);
      fVar113 = (float)(~uVar86 & auVar74._12_4_);
      fVar114 = (float)(~uVar87 & auVar74._16_4_);
      fVar115 = (float)(~uVar89 & auVar74._20_4_);
      fVar116 = (float)(~uVar91 & auVar74._24_4_);
      fVar117 = (float)(~uVar93 & auVar74._28_4_);
      auVar42 = ZEXT832(0) << 0x20;
      auVar43 = vcmpps_avx(auVar42,auVar139,1);
      uVar78 = vmovmskps_avx(auVar43);
      if (uVar78 == 0) {
LAB_140363c65:
        auVar43 = vcmpps_avx(auVar42,auVar160,1);
        uVar21 = vmovmskps_avx(auVar43);
      }
      else {
        auVar44._0_4_ = fVar137 * fVar149;
        auVar44._4_4_ = fVar142 * fVar152;
        auVar44._8_4_ = fVar143 * fVar153;
        auVar44._12_4_ = fVar144 * fVar154;
        auVar44._16_4_ = fVar145 * fVar155;
        auVar44._20_4_ = fVar146 * fVar156;
        auVar44._24_4_ = fVar147 * fVar157;
        auVar44._28_4_ = fVar148 * fVar158;
        auVar43 = vsubps_avx(auVar168,auVar44);
        cVar20 = (char)uVar78;
        if ((uVar78 & 1) != 0) {
          *(int *)(param_1 + lVar37) = auVar43._0_4_;
        }
        auVar40 = auVar43._0_16_;
        auVar55 = auVar43._16_16_;
        if ((uVar78 & 2) == 0) {
          if ((uVar78 & 4) == 0) goto LAB_140363b24;
LAB_140363e21:
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + lVar27) = uVar4;
          if ((uVar78 & 8) != 0) goto LAB_140363e32;
LAB_140363b2e:
          if ((uVar78 & 0x10) == 0) goto LAB_140363b3e;
LAB_140363e49:
          *(int *)(param_1 + lVar33) = auVar43._16_4_;
          if ((uVar78 & 0x20) != 0) goto LAB_140363e59;
LAB_140363b48:
          if ((uVar78 & 0x40) == 0) goto LAB_140363b52;
LAB_140363e6a:
          uVar4 = vextractps_avx(auVar55,2);
          *(undefined4 *)(param_1 + lVar23) = uVar4;
          if (cVar20 < '\0') goto LAB_140363e7a;
LAB_140363b5b:
          auVar45._0_4_ = fVar137 * fVar120;
          auVar45._4_4_ = fVar142 * fVar124;
          auVar45._8_4_ = fVar143 * fVar125;
          auVar45._12_4_ = fVar144 * fVar127;
          auVar45._16_4_ = fVar145 * fVar129;
          auVar45._20_4_ = fVar146 * fVar131;
          auVar45._24_4_ = fVar147 * fVar133;
          auVar45._28_4_ = fVar148 * fVar135;
          auVar43 = vsubps_avx(auVar166,auVar45);
          if ((uVar78 & 1) == 0) goto LAB_140363b6e;
LAB_140363e99:
          *(int *)(param_1 + 4 + lVar37) = auVar43._0_4_;
          if ((uVar78 & 2) != 0) goto LAB_140363eaa;
LAB_140363b78:
          if ((uVar78 & 4) == 0) goto LAB_140363b82;
LAB_140363ebc:
          uVar4 = vextractps_avx(auVar43._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar27) = uVar4;
          if ((uVar78 & 8) != 0) goto LAB_140363ece;
LAB_140363b8c:
          auVar40 = auVar43._16_16_;
          if ((uVar78 & 0x10) == 0) goto LAB_140363b9c;
LAB_140363ee6:
          *(int *)(param_1 + 4 + lVar33) = auVar40._0_4_;
          if ((uVar78 & 0x20) != 0) goto LAB_140363ef7;
LAB_140363ba6:
          if ((uVar78 & 0x40) == 0) goto LAB_140363bb0;
LAB_140363f09:
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 4 + lVar23) = uVar4;
          if (cVar20 < '\0') goto LAB_140363f1a;
LAB_140363bb9:
          auVar46._0_4_ = fVar137 * fVar106;
          auVar46._4_4_ = fVar142 * fVar111;
          auVar46._8_4_ = fVar143 * fVar112;
          auVar46._12_4_ = fVar144 * fVar113;
          auVar46._16_4_ = fVar145 * fVar114;
          auVar46._20_4_ = fVar146 * fVar115;
          auVar46._24_4_ = fVar147 * fVar116;
          auVar46._28_4_ = fVar148 * fVar117;
          auVar43 = vsubps_avx(auVar118,auVar46);
          if ((uVar78 & 1) == 0) goto LAB_140363bcb;
LAB_140363f39:
          *(int *)(param_1 + 8 + lVar37) = auVar43._0_4_;
          if ((uVar78 & 2) != 0) goto LAB_140363f4a;
LAB_140363bd5:
          if ((uVar78 & 4) == 0) goto LAB_140363bdf;
LAB_140363f5c:
          uVar4 = vextractps_avx(auVar43._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar27) = uVar4;
          if ((uVar78 & 8) != 0) goto LAB_140363f6e;
LAB_140363be9:
          auVar40 = auVar43._16_16_;
        }
        else {
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + lVar25) = uVar4;
          if ((uVar78 & 4) != 0) goto LAB_140363e21;
LAB_140363b24:
          if ((uVar78 & 8) == 0) goto LAB_140363b2e;
LAB_140363e32:
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + lVar35) = uVar4;
          if ((uVar78 & 0x10) != 0) goto LAB_140363e49;
LAB_140363b3e:
          if ((uVar78 & 0x20) == 0) goto LAB_140363b48;
LAB_140363e59:
          uVar4 = vextractps_avx(auVar55,1);
          *(undefined4 *)(param_1 + lVar31) = uVar4;
          if ((uVar78 & 0x40) != 0) goto LAB_140363e6a;
LAB_140363b52:
          if (-1 < cVar20) goto LAB_140363b5b;
LAB_140363e7a:
          uVar4 = vextractps_avx(auVar55,3);
          *(undefined4 *)(param_1 + lVar19) = uVar4;
          auVar50._0_4_ = fVar137 * fVar120;
          auVar50._4_4_ = fVar142 * fVar124;
          auVar50._8_4_ = fVar143 * fVar125;
          auVar50._12_4_ = fVar144 * fVar127;
          auVar50._16_4_ = fVar145 * fVar129;
          auVar50._20_4_ = fVar146 * fVar131;
          auVar50._24_4_ = fVar147 * fVar133;
          auVar50._28_4_ = fVar148 * fVar135;
          auVar43 = vsubps_avx(auVar166,auVar50);
          if ((uVar78 & 1) != 0) goto LAB_140363e99;
LAB_140363b6e:
          if ((uVar78 & 2) == 0) goto LAB_140363b78;
LAB_140363eaa:
          uVar4 = vextractps_avx(auVar43._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar25) = uVar4;
          if ((uVar78 & 4) != 0) goto LAB_140363ebc;
LAB_140363b82:
          if ((uVar78 & 8) == 0) goto LAB_140363b8c;
LAB_140363ece:
          uVar4 = vextractps_avx(auVar43._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar35) = uVar4;
          auVar40 = auVar43._16_16_;
          if ((uVar78 & 0x10) != 0) goto LAB_140363ee6;
LAB_140363b9c:
          if ((uVar78 & 0x20) == 0) goto LAB_140363ba6;
LAB_140363ef7:
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
          if ((uVar78 & 0x40) != 0) goto LAB_140363f09;
LAB_140363bb0:
          if (-1 < cVar20) goto LAB_140363bb9;
LAB_140363f1a:
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 4 + lVar19) = uVar4;
          auVar51._0_4_ = fVar137 * fVar106;
          auVar51._4_4_ = fVar142 * fVar111;
          auVar51._8_4_ = fVar143 * fVar112;
          auVar51._12_4_ = fVar144 * fVar113;
          auVar51._16_4_ = fVar145 * fVar114;
          auVar51._20_4_ = fVar146 * fVar115;
          auVar51._24_4_ = fVar147 * fVar116;
          auVar51._28_4_ = fVar148 * fVar117;
          auVar43 = vsubps_avx(auVar118,auVar51);
          if ((uVar78 & 1) != 0) goto LAB_140363f39;
LAB_140363bcb:
          if ((uVar78 & 2) == 0) goto LAB_140363bd5;
LAB_140363f4a:
          uVar4 = vextractps_avx(auVar43._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar25) = uVar4;
          if ((uVar78 & 4) != 0) goto LAB_140363f5c;
LAB_140363bdf:
          if ((uVar78 & 8) == 0) goto LAB_140363be9;
LAB_140363f6e:
          uVar4 = vextractps_avx(auVar43._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar35) = uVar4;
          auVar40 = auVar43._16_16_;
        }
        if ((uVar78 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar33) = auVar40._0_4_;
        }
        if ((uVar78 & 0x20) != 0) {
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
        }
        if ((uVar78 & 0x40) != 0) {
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 8 + lVar23) = uVar4;
        }
        if (cVar20 < '\0') {
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 8 + lVar19) = uVar4;
        }
        if ((uVar78 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar37) = uVar21;
        }
        if ((uVar78 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar25) = uVar126;
        }
        if ((uVar78 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar27) = uVar128;
        }
        if ((uVar78 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar88;
        }
        if ((uVar78 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar33) = uVar90;
        }
        if ((uVar78 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar31) = uVar92;
        }
        if ((uVar78 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar23) = uVar94;
        }
        if (-1 < cVar20) goto LAB_140363c65;
        *(uint *)(param_1 + 0xc + lVar19) = uVar130;
        auVar43 = vcmpps_avx(auVar42,auVar160,1);
        uVar21 = vmovmskps_avx(auVar43);
      }
      if (uVar21 != 0) {
        auVar40._0_4_ = auVar56._0_4_ + fVar5 * fVar149;
        auVar40._4_4_ = auVar56._4_4_ + fVar6 * fVar152;
        auVar40._8_4_ = auVar56._8_4_ + fVar7 * fVar153;
        auVar40._12_4_ = auVar56._12_4_ + fVar8 * fVar154;
        auVar47._16_4_ = auVar41._0_4_ + fVar9 * fVar155;
        auVar47._0_16_ = auVar40;
        auVar47._20_4_ = auVar41._4_4_ + fVar10 * fVar156;
        auVar47._24_4_ = auVar41._8_4_ + fVar11 * fVar157;
        auVar47._28_4_ = auVar41._12_4_ + fVar12 * fVar158;
        cVar20 = (char)uVar21;
        if ((uVar21 & 1) != 0) {
          *(float *)(param_1 + lVar36) = auVar40._0_4_;
        }
        auVar55 = auVar47._16_16_;
        local_360 = auVar13._0_4_;
        fStack_35c = auVar13._4_4_;
        fStack_358 = auVar13._8_4_;
        fStack_354 = auVar13._12_4_;
        fStack_350 = auVar54._0_4_;
        fStack_34c = auVar54._4_4_;
        fStack_348 = auVar54._8_4_;
        fStack_344 = auVar54._12_4_;
        local_320 = auVar95._0_4_;
        fStack_31c = auVar95._4_4_;
        fStack_318 = auVar95._8_4_;
        fStack_314 = auVar95._12_4_;
        fStack_310 = auVar14._0_4_;
        fStack_30c = auVar14._4_4_;
        fStack_308 = auVar14._8_4_;
        fStack_304 = auVar14._12_4_;
        if ((uVar21 & 2) == 0) {
          if ((uVar21 & 4) == 0) goto LAB_140363cca;
LAB_1403640c1:
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + lVar38) = uVar4;
          if ((uVar21 & 8) != 0) goto LAB_1403640d2;
LAB_140363cd4:
          if ((uVar21 & 0x10) == 0) goto LAB_140363ce4;
LAB_1403640e9:
          *(float *)(param_1 + lVar28) = auVar47._16_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_1403640f9;
LAB_140363cee:
          if ((uVar21 & 0x40) == 0) goto LAB_140363cf8;
LAB_14036410a:
          uVar4 = vextractps_avx(auVar55,2);
          *(undefined4 *)(param_1 + lVar32) = uVar4;
          if (cVar20 < '\0') goto LAB_140364119;
LAB_140363d00:
          auVar48._0_4_ = fVar5 * fVar120 + local_360;
          auVar48._4_4_ = fVar6 * fVar124 + fStack_35c;
          auVar48._8_4_ = fVar7 * fVar125 + fStack_358;
          auVar48._12_4_ = fVar8 * fVar127 + fStack_354;
          auVar48._16_4_ = fVar9 * fVar129 + fStack_350;
          auVar48._20_4_ = fVar10 * fVar131 + fStack_34c;
          auVar48._24_4_ = fVar11 * fVar133 + fStack_348;
          auVar48._28_4_ = fVar12 * fVar135 + fStack_344;
          if ((uVar21 & 1) == 0) goto LAB_140363d18;
LAB_14036413d:
          *(int *)(param_1 + 4 + lVar36) = auVar48._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_14036414e;
LAB_140363d22:
          if ((uVar21 & 4) == 0) goto LAB_140363d2c;
LAB_140364160:
          uVar4 = vextractps_avx(auVar48._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar38) = uVar4;
          if ((uVar21 & 8) != 0) goto LAB_140364172;
LAB_140363d36:
          auVar40 = auVar48._16_16_;
          if ((uVar21 & 0x10) == 0) goto LAB_140363d46;
LAB_14036418a:
          *(int *)(param_1 + 4 + lVar28) = auVar40._0_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_14036419b;
LAB_140363d50:
          if ((uVar21 & 0x40) == 0) goto LAB_140363d5a;
LAB_1403641ad:
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 4 + lVar32) = uVar4;
          if (cVar20 < '\0') goto LAB_1403641bd;
LAB_140363d62:
          auVar49._0_4_ = fVar5 * fVar106 + local_320;
          auVar49._4_4_ = fVar6 * fVar111 + fStack_31c;
          auVar49._8_4_ = fVar7 * fVar112 + fStack_318;
          auVar49._12_4_ = fVar8 * fVar113 + fStack_314;
          auVar49._16_4_ = fVar9 * fVar114 + fStack_310;
          auVar49._20_4_ = fVar10 * fVar115 + fStack_30c;
          auVar49._24_4_ = fVar11 * fVar116 + fStack_308;
          auVar49._28_4_ = fVar12 * fVar117 + fStack_304;
          if ((uVar21 & 1) == 0) goto LAB_140363d79;
LAB_1403641e1:
          *(int *)(param_1 + 8 + lVar36) = auVar49._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_1403641f2;
LAB_140363d83:
          if ((uVar21 & 4) == 0) goto LAB_140363d8d;
LAB_140364204:
          uVar4 = vextractps_avx(auVar49._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar38) = uVar4;
          if ((uVar21 & 8) != 0) goto LAB_140364216;
LAB_140363d97:
          auVar40 = auVar49._16_16_;
        }
        else {
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + lVar39) = uVar4;
          if ((uVar21 & 4) != 0) goto LAB_1403640c1;
LAB_140363cca:
          if ((uVar21 & 8) == 0) goto LAB_140363cd4;
LAB_1403640d2:
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + lVar26) = uVar4;
          if ((uVar21 & 0x10) != 0) goto LAB_1403640e9;
LAB_140363ce4:
          if ((uVar21 & 0x20) == 0) goto LAB_140363cee;
LAB_1403640f9:
          uVar4 = vextractps_avx(auVar55,1);
          *(undefined4 *)(param_1 + lVar34) = uVar4;
          if ((uVar21 & 0x40) != 0) goto LAB_14036410a;
LAB_140363cf8:
          if (-1 < cVar20) goto LAB_140363d00;
LAB_140364119:
          uVar4 = vextractps_avx(auVar55,3);
          *(undefined4 *)(param_1 + lVar24) = uVar4;
          auVar48._0_4_ = fVar5 * fVar120 + local_360;
          auVar48._4_4_ = fVar6 * fVar124 + fStack_35c;
          auVar48._8_4_ = fVar7 * fVar125 + fStack_358;
          auVar48._12_4_ = fVar8 * fVar127 + fStack_354;
          auVar48._16_4_ = fVar9 * fVar129 + fStack_350;
          auVar48._20_4_ = fVar10 * fVar131 + fStack_34c;
          auVar48._24_4_ = fVar11 * fVar133 + fStack_348;
          auVar48._28_4_ = fVar12 * fVar135 + fStack_344;
          if ((uVar21 & 1) != 0) goto LAB_14036413d;
LAB_140363d18:
          if ((uVar21 & 2) == 0) goto LAB_140363d22;
LAB_14036414e:
          uVar4 = vextractps_avx(auVar48._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar39) = uVar4;
          if ((uVar21 & 4) != 0) goto LAB_140364160;
LAB_140363d2c:
          if ((uVar21 & 8) == 0) goto LAB_140363d36;
LAB_140364172:
          uVar4 = vextractps_avx(auVar48._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
          auVar40 = auVar48._16_16_;
          if ((uVar21 & 0x10) != 0) goto LAB_14036418a;
LAB_140363d46:
          if ((uVar21 & 0x20) == 0) goto LAB_140363d50;
LAB_14036419b:
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
          if ((uVar21 & 0x40) != 0) goto LAB_1403641ad;
LAB_140363d5a:
          if (-1 < cVar20) goto LAB_140363d62;
LAB_1403641bd:
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 4 + lVar24) = uVar4;
          auVar49._0_4_ = fVar5 * fVar106 + local_320;
          auVar49._4_4_ = fVar6 * fVar111 + fStack_31c;
          auVar49._8_4_ = fVar7 * fVar112 + fStack_318;
          auVar49._12_4_ = fVar8 * fVar113 + fStack_314;
          auVar49._16_4_ = fVar9 * fVar114 + fStack_310;
          auVar49._20_4_ = fVar10 * fVar115 + fStack_30c;
          auVar49._24_4_ = fVar11 * fVar116 + fStack_308;
          auVar49._28_4_ = fVar12 * fVar117 + fStack_304;
          if ((uVar21 & 1) != 0) goto LAB_1403641e1;
LAB_140363d79:
          if ((uVar21 & 2) == 0) goto LAB_140363d83;
LAB_1403641f2:
          uVar4 = vextractps_avx(auVar49._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar39) = uVar4;
          if ((uVar21 & 4) != 0) goto LAB_140364204;
LAB_140363d8d:
          if ((uVar21 & 8) == 0) goto LAB_140363d97;
LAB_140364216:
          uVar4 = vextractps_avx(auVar49._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
          auVar40 = auVar49._16_16_;
        }
        if ((uVar21 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar28) = auVar40._0_4_;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 8 + lVar32) = uVar4;
        }
        if (cVar20 < '\0') {
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 8 + lVar24) = uVar4;
        }
        if ((uVar21 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar163;
        }
        if ((uVar21 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar164;
        }
        if ((uVar21 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar38) = uVar165;
        }
        if ((uVar21 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar26) = uVar2;
        }
        if ((uVar21 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar132;
        }
        if ((uVar21 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar134;
        }
        if ((uVar21 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar136;
        }
        if (cVar20 < '\0') {
          *(uint *)(param_1 + 0xc + lVar24) = uVar162;
        }
      }
      uVar30 = uVar30 + 8;
      uVar29 = uVar29 + 0x20;
    } while ((int)uVar30 < (int)(uVar121 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar30) {
      return;
    }
  }
  auVar40 = vpshufd_avx(ZEXT416((uint)uVar30),0);
  auVar52._16_16_ = auVar40;
  auVar52._0_16_ = auVar40;
  auVar41 = vpshufd_avx(ZEXT416(param_6),0);
  auVar56 = SUB3216(auVar52 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar54 = SUB3216(auVar52 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar40 = vpcmpgtd_avx(auVar41,auVar54);
  auVar55 = vpcmpgtd_avx(auVar41,auVar56);
  auVar64._16_16_ = auVar40;
  auVar64._0_16_ = auVar55;
  uVar29 = uVar30 & 0xffffffff;
  pauVar1 = (undefined1 (*) [16])(param_2 + uVar29 * 8);
  iVar22 = vmovmskps_avx(auVar64);
  if (iVar22 == 0xff) {
    auVar101._16_16_ = pauVar1[3];
    auVar101._0_16_ = pauVar1[1];
    auVar103._16_16_ = pauVar1[2];
    auVar103._0_16_ = *pauVar1;
    auVar43 = vshufps_avx(auVar103,auVar101,0x88);
    auVar42 = vshufps_avx(auVar103,auVar101,0xdd);
  }
  else {
    auVar13 = vpcmpgtd_avx(auVar41,auVar54);
    auVar14 = vpcmpgtd_avx(auVar41,auVar56);
    auVar95._0_4_ =
         auVar14._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar95._4_4_ = auVar14._4_4_ & _UNK_150b519c4;
    auVar95._8_4_ = auVar14._8_4_ & _UNK_150b519c8;
    auVar95._12_4_ = auVar14._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar95,1);
    vextractps_avx(auVar95,2);
    vextractps_avx(auVar95,3);
    auVar60._0_4_ =
         auVar14._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar60._4_4_ = auVar14._4_4_ & _UNK_150b519e4;
    auVar60._8_4_ = auVar14._8_4_ & _UNK_150b519e8;
    auVar60._12_4_ = auVar14._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar60,1);
    vextractps_avx(auVar60,2);
    vextractps_avx(auVar60,3);
    auVar43 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar13._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar42 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar13._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar60._0_4_))));
  }
  auVar17 = vpcmpgtd_avx(auVar41,auVar54);
  auVar15 = vpcmpgtd_avx(auVar41,auVar56);
  auVar82._16_16_ = auVar17;
  auVar82._0_16_ = auVar15;
  auVar57 = vpslld_avx(auVar43._0_16_,4);
  auVar96 = vpslld_avx(auVar43._16_16_,4);
  auVar72 = vpand_avx(auVar15,auVar57);
  auVar14 = vpand_avx(auVar17,auVar96);
  lVar19 = param_1 + auVar14._0_4_;
  lVar23 = param_1 + auVar14._4_4_;
  auVar54 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar14._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar14._4_4_)),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + auVar14._8_4_)),0x20);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + auVar14._12_4_)),0x30);
  lVar24 = param_1 + auVar14._8_4_;
  uVar121 = auVar15._0_4_;
  uVar21 = auVar15._4_4_;
  uVar126 = auVar15._8_4_;
  uVar128 = auVar15._12_4_;
  uVar88 = auVar17._0_4_;
  uVar90 = auVar17._4_4_;
  uVar92 = auVar17._8_4_;
  uVar94 = auVar17._12_4_;
  auVar13 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d50) + lVar19)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d54) + lVar23)),0x10);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d58) + lVar24)),
                          0x20);
  lVar25 = param_1 + auVar14._12_4_;
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d5c) + lVar25)),
                          0x30);
  auVar58 = vpslld_avx(auVar42._16_16_,4);
  auVar60 = vpand_avx(auVar17,auVar58);
  lVar26 = param_1 + auVar60._0_4_;
  auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar60._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar60._4_4_)),0x10);
  lVar27 = param_1 + auVar60._4_4_;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + auVar60._8_4_)),0x20);
  auVar95 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d50) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d54) + lVar27)),0x10);
  lVar28 = param_1 + auVar60._8_4_;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + auVar60._12_4_)),0x30);
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d58) + lVar28)),
                          0x20);
  lVar31 = param_1 + auVar60._12_4_;
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d5c) + lVar31)),
                          0x30);
  lVar32 = param_1 + auVar72._0_4_;
  auVar60 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar72._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar72._4_4_)),0x10);
  auVar59 = vpslld_avx(auVar42._0_16_,4);
  auVar79 = vpand_avx(auVar15,auVar59);
  lVar33 = param_1 + auVar79._0_4_;
  lVar34 = param_1 + auVar72._4_4_;
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar32)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d44) + lVar34)),0x10);
  auVar138 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar79._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar79._4_4_)),0x10);
  lVar35 = param_1 + auVar79._4_4_;
  auVar18 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar33)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d44) + lVar35)),0x10);
  auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(param_1 + auVar72._8_4_)),0x20);
  lVar36 = param_1 + auVar72._8_4_;
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d48) + lVar36))
                          ,0x20);
  auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_1 + auVar79._8_4_)),0x20);
  lVar37 = param_1 + auVar79._8_4_;
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d48) + lVar37))
                          ,0x20);
  auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(param_1 + auVar72._12_4_)),0x30);
  lVar38 = param_1 + auVar72._12_4_;
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d4c) + lVar38))
                          ,0x30);
  auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_1 + auVar79._12_4_)),0x30);
  lVar39 = param_1 + auVar79._12_4_;
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d4c) + lVar39))
                          ,0x30);
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d70) + lVar19)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d74) + lVar23)),0x10);
  auVar79 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d70) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d74) + lVar27)),0x10);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d78) + lVar24)),
                          0x20);
  auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d78) + lVar28)),
                          0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d7c) + lVar25)),
                          0x30);
  auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d7c) + lVar31)),
                          0x30);
  auVar16 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar32)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d64) + lVar34)),0x10);
  auVar167 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar121 &
                                             ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                             ) + lVar33)),
                           ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d64) + lVar35)),0x10);
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d68) + lVar36))
                          ,0x20);
  auVar167 = vinsertps_avx(auVar167,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d68) + lVar37
                                                     )),0x20);
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d6c) + lVar38))
                          ,0x30);
  auVar98._16_16_ = auVar54;
  auVar98._0_16_ = auVar60;
  auVar54 = vinsertps_avx(auVar167,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d6c) + lVar39)
                                          ),0x30);
  auVar104._16_16_ = auVar13;
  auVar104._0_16_ = auVar15;
  auVar65._16_16_ = auVar72;
  auVar65._0_16_ = auVar16;
  auVar108._16_16_ = auVar14;
  auVar108._0_16_ = auVar138;
  auVar119._16_16_ = auVar95;
  auVar119._0_16_ = auVar18;
  auVar102._16_16_ = auVar79;
  auVar102._0_16_ = auVar54;
  auVar43 = vmaskmovps_avx(auVar82,auVar98);
  auVar42 = vmaskmovps_avx(auVar82,auVar104);
  auVar61 = vmaskmovps_avx(auVar82,auVar65);
  auVar73 = vmaskmovps_avx(auVar82,auVar108);
  auVar74 = vmaskmovps_avx(auVar82,auVar119);
  auVar62 = vmaskmovps_avx(auVar82,auVar102);
  auVar63 = vsubps_avx(auVar43,auVar73);
  auVar81 = vsubps_avx(auVar42,auVar74);
  auVar97 = vsubps_avx(auVar61,auVar62);
  auVar150._0_4_ =
       auVar97._0_4_ * auVar97._0_4_ + auVar81._0_4_ * auVar81._0_4_ + auVar63._0_4_ * auVar63._0_4_
  ;
  auVar150._4_4_ =
       auVar97._4_4_ * auVar97._4_4_ + auVar81._4_4_ * auVar81._4_4_ + auVar63._4_4_ * auVar63._4_4_
  ;
  auVar150._8_4_ =
       auVar97._8_4_ * auVar97._8_4_ + auVar81._8_4_ * auVar81._8_4_ + auVar63._8_4_ * auVar63._8_4_
  ;
  auVar150._12_4_ =
       auVar97._12_4_ * auVar97._12_4_ +
       auVar81._12_4_ * auVar81._12_4_ + auVar63._12_4_ * auVar63._12_4_;
  auVar150._16_4_ =
       auVar97._16_4_ * auVar97._16_4_ +
       auVar81._16_4_ * auVar81._16_4_ + auVar63._16_4_ * auVar63._16_4_;
  auVar150._20_4_ =
       auVar97._20_4_ * auVar97._20_4_ +
       auVar81._20_4_ * auVar81._20_4_ + auVar63._20_4_ * auVar63._20_4_;
  auVar150._24_4_ =
       auVar97._24_4_ * auVar97._24_4_ +
       auVar81._24_4_ * auVar81._24_4_ + auVar63._24_4_ * auVar63._24_4_;
  auVar150._28_4_ =
       auVar97._28_4_ * auVar97._28_4_ +
       auVar81._28_4_ * auVar81._28_4_ + auVar63._28_4_ * auVar63._28_4_;
  auVar100 = vsqrtps_avx(auVar150);
  auVar80 = vcmpps_avx(auVar150,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar63 = vdivps_avx(auVar63,auVar100);
  auVar63 = vblendvps_avx(auVar63,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar80);
  auVar81 = vdivps_avx(auVar81,auVar100);
  auVar97 = vdivps_avx(auVar97,auVar100);
  uVar130 = auVar80._0_4_;
  auVar99._0_4_ = ~uVar130 & auVar81._0_4_;
  uVar132 = auVar80._4_4_;
  auVar99._4_4_ = ~uVar132 & auVar81._4_4_;
  uVar134 = auVar80._8_4_;
  auVar99._8_4_ = ~uVar134 & auVar81._8_4_;
  uVar136 = auVar80._12_4_;
  auVar99._12_4_ = ~uVar136 & auVar81._12_4_;
  uVar162 = auVar80._16_4_;
  auVar99._16_4_ = ~uVar162 & auVar81._16_4_;
  uVar163 = auVar80._20_4_;
  auVar99._20_4_ = ~uVar163 & auVar81._20_4_;
  uVar164 = auVar80._24_4_;
  auVar99._24_4_ = ~uVar164 & auVar81._24_4_;
  uVar165 = auVar80._28_4_;
  auVar99._28_4_ = ~uVar165 & auVar81._28_4_;
  auVar66._0_4_ = ~uVar130 & auVar97._0_4_;
  auVar66._4_4_ = ~uVar132 & auVar97._4_4_;
  auVar66._8_4_ = ~uVar134 & auVar97._8_4_;
  auVar66._12_4_ = ~uVar136 & auVar97._12_4_;
  auVar66._16_4_ = ~uVar162 & auVar97._16_4_;
  auVar66._20_4_ = ~uVar163 & auVar97._20_4_;
  auVar66._24_4_ = ~uVar164 & auVar97._24_4_;
  auVar66._28_4_ = ~uVar165 & auVar97._28_4_;
  auVar63 = vmaskmovps_avx(auVar82,auVar63);
  auVar80 = vmaskmovps_avx(auVar82,auVar99);
  auVar81 = vmaskmovps_avx(auVar82,auVar66);
  auVar54 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d90) + lVar19)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d94) + lVar23)),0x10);
  auVar13 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d90) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d94) + lVar27)),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d98) + lVar24)),
                          0x20);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d98) + lVar28)),
                          0x20);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d9c) + lVar25)),
                          0x30);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d9c) + lVar31)),
                          0x30);
  auVar14 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                            ) + lVar32)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d84) + lVar34)),0x10);
  auVar95 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                            ) + lVar33)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d84) + lVar35)),0x10);
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d88) + lVar36))
                          ,0x20);
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d88) + lVar37))
                          ,0x20);
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d8c) + lVar38))
                          ,0x30);
  auVar159._16_16_ = auVar54;
  auVar159._0_16_ = auVar14;
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d8c) + lVar39))
                          ,0x30);
  auVar97 = vmaskmovps_avx(auVar82,*(undefined1 (*) [32])(param_3 + (int)((uint)uVar30 << 2)));
  auVar83._16_16_ = auVar13;
  auVar83._0_16_ = auVar95;
  auVar161._0_4_ = ~uVar130 & auVar100._0_4_;
  auVar161._4_4_ = ~uVar132 & auVar100._4_4_;
  auVar161._8_4_ = ~uVar134 & auVar100._8_4_;
  auVar161._12_4_ = ~uVar136 & auVar100._12_4_;
  auVar161._16_4_ = ~uVar162 & auVar100._16_4_;
  auVar161._20_4_ = ~uVar163 & auVar100._20_4_;
  auVar161._24_4_ = ~uVar164 & auVar100._24_4_;
  auVar161._28_4_ = ~uVar165 & auVar100._28_4_;
  if ((~(byte)iVar22 & 0x81) == 0) {
    auVar167._8_8_ = 0;
    auVar167._0_8_ = *(ulonglong *)(param_4 + uVar29);
  }
  else {
    pbVar3 = (byte *)(param_4 + uVar29);
    auVar60 = vpcmpgtd_avx(auVar41,auVar56);
    auVar67._16_16_ = auVar17;
    auVar67._0_16_ = auVar60;
    uVar121 = vmovmskps_avx(auVar67);
    if ((uVar121 & 1) != 0) {
      auVar167 = ZEXT116(*pbVar3);
    }
    if ((uVar121 & 2) != 0) {
      auVar60 = vpinsrb_avx(auVar167,(uint)pbVar3[1],1);
      auVar167 = vpblendw_avx(auVar60,auVar167,0xe);
    }
    if ((uVar121 & 4) != 0) {
      auVar60 = vpmovzxwd_avx(auVar167);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[2],2);
      auVar60 = vpinsrb_avx(auVar60,(uint)auVar167[3],3);
      auVar167 = vpblendw_avx(auVar60,auVar167,0xc);
    }
    if ((uVar121 & 8) != 0) {
      auVar60 = vpmovzxwd_avx(auVar167);
      auVar60 = vpinsrb_avx(auVar60,(uint)auVar167[2],2);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[3],3);
      auVar167 = vpblendw_avx(auVar60,auVar167,0xc);
    }
    if ((uVar121 & 0x10) != 0) {
      auVar60 = vpshufb_avx(auVar167,___xmm_80800706808005048080030203020100);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[4],4);
      auVar60 = vpinsrb_avx(auVar60,(uint)auVar167[5],5);
      auVar167 = vpblendw_avx(auVar60,auVar167,8);
    }
    if ((uVar121 & 0x20) != 0) {
      auVar60 = vpshufb_avx(auVar167,___xmm_80800706808005048080030403020100);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[5],5);
      auVar167 = vpblendw_avx(auVar60,auVar167,8);
    }
    if ((uVar121 & 0x40) != 0) {
      auVar60 = vpshufb_avx(auVar167,___xmm_80800706808005048080050403020100);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[6],6);
      auVar167 = vpinsrb_avx(auVar60,(uint)auVar167[7],7);
    }
    if ((uVar121 & 0x80) != 0) {
      auVar60 = vpshufb_avx(auVar167,___xmm_80800706808005048006050403020100);
      auVar167 = vpinsrb_avx(auVar60,(uint)pbVar3[7],7);
    }
  }
  auVar97 = vsubps_avx(auVar161,auVar97);
  local_220 = auVar63._0_4_;
  fStack_21c = auVar63._4_4_;
  fStack_218 = auVar63._8_4_;
  fStack_214 = auVar63._12_4_;
  fStack_210 = auVar63._16_4_;
  fStack_20c = auVar63._20_4_;
  fStack_208 = auVar63._24_4_;
  fStack_204 = auVar63._28_4_;
  fVar120 = auVar97._0_4_;
  fVar124 = auVar97._4_4_;
  fVar125 = auVar97._8_4_;
  fVar127 = auVar97._12_4_;
  fVar129 = auVar97._16_4_;
  fVar131 = auVar97._20_4_;
  fVar133 = auVar97._24_4_;
  fVar135 = auVar97._28_4_;
  local_200 = auVar80._0_4_;
  fStack_1fc = auVar80._4_4_;
  fStack_1f8 = auVar80._8_4_;
  fStack_1f4 = auVar80._12_4_;
  fStack_1f0 = auVar80._16_4_;
  fStack_1ec = auVar80._20_4_;
  fStack_1e8 = auVar80._24_4_;
  fStack_1e4 = auVar80._28_4_;
  local_1e0 = auVar81._0_4_;
  fStack_1dc = auVar81._4_4_;
  fStack_1d8 = auVar81._8_4_;
  fStack_1d4 = auVar81._12_4_;
  fStack_1d0 = auVar81._16_4_;
  fStack_1cc = auVar81._20_4_;
  fStack_1c8 = auVar81._24_4_;
  fStack_1c4 = auVar81._28_4_;
  auVar60 = vpshufd_avx(auVar167,0x55);
  auVar60 = vpmovzxbd_avx(auVar60);
  auVar15 = vpmovzxbd_avx(auVar167);
  auVar138 = vpslld_avx(auVar15,2);
  auVar60 = vpslld_avx(auVar60,2);
  auVar15 = vpunpckhdq_avx(auVar60,ZEXT816(0) << 0x20);
  auVar60 = vpmovzxdq_avx(auVar60);
  auVar68._16_16_ = auVar15;
  auVar68._0_16_ = auVar60;
  auVar15 = vpunpckhdq_avx(auVar138,ZEXT816(0) << 0x20);
  auVar60 = vpmovzxdq_avx(auVar138);
  auVar140._16_16_ = auVar15;
  auVar140._0_16_ = auVar60;
  auVar60 = vpmovsxdq_avx(auVar55);
  auVar55 = vpshufd_avx(auVar55,0xfa);
  auVar151._16_16_ = auVar55;
  auVar151._0_16_ = auVar60;
  auVar63 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar140,auVar151);
  auVar55 = vpmovsxdq_avx(auVar40);
  auVar40 = vpshufd_avx(auVar40,0xfa);
  auVar122._16_16_ = auVar40;
  auVar122._0_16_ = auVar55;
  auVar80 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar68,auVar122);
  auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + auVar80._0_8_)),
                          ZEXT416(*(uint *)(param_5 + auVar80._8_8_)),0x10);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_5 + auVar80._16_8_)),0x20);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_5 + auVar80._24_8_)),0x30);
  auVar55 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + auVar63._0_8_)),
                          ZEXT416(*(uint *)(param_5 + auVar63._8_8_)),0x10);
  auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_5 + auVar63._16_8_)),0x20);
  auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_5 + auVar63._24_8_)),0x30);
  fVar5 = auVar95._0_4_;
  fVar137 = auVar14._0_4_;
  auVar123._0_4_ = fVar137 + fVar5;
  fVar6 = auVar95._4_4_;
  fVar142 = auVar14._4_4_;
  auVar123._4_4_ = fVar142 + fVar6;
  fVar7 = auVar95._8_4_;
  fVar143 = auVar14._8_4_;
  auVar123._8_4_ = fVar143 + fVar7;
  fVar8 = auVar95._12_4_;
  fVar144 = auVar14._12_4_;
  auVar123._12_4_ = fVar144 + fVar8;
  fVar9 = auVar13._0_4_;
  fVar145 = auVar54._0_4_;
  auVar123._16_4_ = fVar145 + fVar9;
  fVar10 = auVar13._4_4_;
  fVar146 = auVar54._4_4_;
  auVar123._20_4_ = fVar146 + fVar10;
  fVar11 = auVar13._8_4_;
  fVar147 = auVar54._8_4_;
  auVar123._24_4_ = fVar147 + fVar11;
  fVar12 = auVar13._12_4_;
  fVar148 = auVar54._12_4_;
  auVar123._28_4_ = fVar148 + fVar12;
  fVar106 = auVar55._0_4_;
  auVar109._0_4_ = fVar120 * local_220 * fVar106;
  fVar111 = auVar55._4_4_;
  auVar109._4_4_ = fVar124 * fStack_21c * fVar111;
  fVar112 = auVar55._8_4_;
  auVar109._8_4_ = fVar125 * fStack_218 * fVar112;
  fVar113 = auVar55._12_4_;
  auVar109._12_4_ = fVar127 * fStack_214 * fVar113;
  fVar114 = auVar40._0_4_;
  auVar109._16_4_ = fVar129 * fStack_210 * fVar114;
  fVar115 = auVar40._4_4_;
  auVar109._20_4_ = fVar131 * fStack_20c * fVar115;
  fVar116 = auVar40._8_4_;
  auVar109._24_4_ = fVar133 * fStack_208 * fVar116;
  fVar117 = auVar40._12_4_;
  auVar109._28_4_ = fVar135 * fStack_204 * fVar117;
  auVar81 = vdivps_avx(auVar109,auVar123);
  auVar141._0_4_ = fVar120 * local_200 * fVar106;
  auVar141._4_4_ = fVar124 * fStack_1fc * fVar111;
  auVar141._8_4_ = fVar125 * fStack_1f8 * fVar112;
  auVar141._12_4_ = fVar127 * fStack_1f4 * fVar113;
  auVar141._16_4_ = fVar129 * fStack_1f0 * fVar114;
  auVar141._20_4_ = fVar131 * fStack_1ec * fVar115;
  auVar141._24_4_ = fVar133 * fStack_1e8 * fVar116;
  auVar141._28_4_ = fVar135 * fStack_1e4 * fVar117;
  auVar97 = vdivps_avx(auVar141,auVar123);
  auVar69._0_4_ = fVar120 * local_1e0 * fVar106;
  auVar69._4_4_ = fVar124 * fStack_1dc * fVar111;
  auVar69._8_4_ = fVar125 * fStack_1d8 * fVar112;
  auVar69._12_4_ = fVar127 * fStack_1d4 * fVar113;
  auVar69._16_4_ = fVar129 * fStack_1d0 * fVar114;
  auVar69._20_4_ = fVar131 * fStack_1cc * fVar115;
  auVar69._24_4_ = fVar133 * fStack_1c8 * fVar116;
  auVar69._28_4_ = fVar135 * fStack_1c4 * fVar117;
  auVar100 = vdivps_avx(auVar69,auVar123);
  auVar107 = ZEXT1632((undefined1  [16])0x0);
  auVar63 = vcmpps_avx(auVar107,auVar83,0);
  auVar80 = vcmpps_avx(auVar159,auVar107,0);
  uVar121 = auVar80._0_4_ & auVar63._0_4_;
  uVar21 = auVar80._4_4_ & auVar63._4_4_;
  uVar126 = auVar80._8_4_ & auVar63._8_4_;
  uVar128 = auVar80._12_4_ & auVar63._12_4_;
  uVar130 = auVar80._16_4_ & auVar63._16_4_;
  uVar132 = auVar80._20_4_ & auVar63._20_4_;
  uVar134 = auVar80._24_4_ & auVar63._24_4_;
  uVar136 = auVar80._28_4_ & auVar63._28_4_;
  fVar106 = (float)(~uVar121 & auVar81._0_4_);
  fVar111 = (float)(~uVar21 & auVar81._4_4_);
  fVar112 = (float)(~uVar126 & auVar81._8_4_);
  fVar113 = (float)(~uVar128 & auVar81._12_4_);
  fVar114 = (float)(~uVar130 & auVar81._16_4_);
  fVar115 = (float)(~uVar132 & auVar81._20_4_);
  fVar116 = (float)(~uVar134 & auVar81._24_4_);
  fVar117 = (float)(~uVar136 & auVar81._28_4_);
  fVar149 = (float)(~uVar121 & auVar97._0_4_);
  fVar152 = (float)(~uVar21 & auVar97._4_4_);
  fVar153 = (float)(~uVar126 & auVar97._8_4_);
  fVar154 = (float)(~uVar128 & auVar97._12_4_);
  fVar155 = (float)(~uVar130 & auVar97._16_4_);
  fVar156 = (float)(~uVar132 & auVar97._20_4_);
  fVar157 = (float)(~uVar134 & auVar97._24_4_);
  fVar158 = (float)(~uVar136 & auVar97._28_4_);
  fVar120 = (float)(~uVar121 & auVar100._0_4_);
  fVar124 = (float)(~uVar21 & auVar100._4_4_);
  fVar125 = (float)(~uVar126 & auVar100._8_4_);
  fVar127 = (float)(~uVar128 & auVar100._12_4_);
  fVar129 = (float)(~uVar130 & auVar100._16_4_);
  fVar131 = (float)(~uVar132 & auVar100._20_4_);
  fVar133 = (float)(~uVar134 & auVar100._24_4_);
  fVar135 = (float)(~uVar136 & auVar100._28_4_);
  auVar40 = vpcmpgtd_avx(auVar41,auVar56);
  auVar63 = vcmpps_avx(auVar107,auVar159,1);
  auVar70._0_4_ = auVar63._0_4_ & auVar40._0_4_;
  auVar70._4_4_ = auVar63._4_4_ & auVar40._4_4_;
  auVar70._8_4_ = auVar63._8_4_ & auVar40._8_4_;
  auVar70._12_4_ = auVar63._12_4_ & auVar40._12_4_;
  auVar70._16_4_ = auVar63._16_4_ & uVar88;
  auVar70._20_4_ = auVar63._20_4_ & uVar90;
  auVar70._24_4_ = auVar63._24_4_ & uVar92;
  auVar70._28_4_ = auVar63._28_4_ & uVar94;
  uVar121 = vmovmskps_avx(auVar70);
  if (uVar121 == 0) goto LAB_140364dee;
  local_3e0 = auVar57._0_4_;
  iStack_3dc = auVar57._4_4_;
  iStack_3d8 = auVar57._8_4_;
  iStack_3d4 = auVar57._12_4_;
  local_430 = auVar96._0_4_;
  iStack_42c = auVar96._4_4_;
  iStack_428 = auVar96._8_4_;
  iStack_424 = auVar96._12_4_;
  auVar71._0_4_ = fVar137 * fVar106;
  auVar71._4_4_ = fVar142 * fVar111;
  auVar71._8_4_ = fVar143 * fVar112;
  auVar71._12_4_ = fVar144 * fVar113;
  auVar71._16_4_ = fVar145 * fVar114;
  auVar71._20_4_ = fVar146 * fVar115;
  auVar71._24_4_ = fVar147 * fVar116;
  auVar71._28_4_ = fVar148 * fVar117;
  auVar43 = vsubps_avx(auVar43,auVar71);
  cVar20 = (char)uVar121;
  auVar40 = auVar43._0_16_;
  auVar55 = auVar43._16_16_;
  if ((uVar121 & 1) == 0) {
    if ((uVar121 & 2) == 0) goto LAB_140364cab;
LAB_140365004:
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + iStack_3dc) = uVar4;
    if ((uVar121 & 4) != 0) goto LAB_14036501d;
LAB_140364cb4:
    if ((uVar121 & 8) == 0) goto LAB_140364cbd;
LAB_140365036:
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + iStack_3d4) = uVar4;
    if ((uVar121 & 0x10) != 0) goto LAB_14036505b;
LAB_140364cd2:
    if ((uVar121 & 0x20) == 0) goto LAB_140364cdb;
LAB_140365072:
    uVar4 = vextractps_avx(auVar55,1);
    *(undefined4 *)(param_1 + iStack_42c) = uVar4;
    if ((uVar121 & 0x40) != 0) goto LAB_14036508b;
LAB_140364ce4:
    auVar110._0_4_ = fVar137 * fVar149;
    auVar110._4_4_ = fVar142 * fVar152;
    auVar110._8_4_ = fVar143 * fVar153;
    auVar110._12_4_ = fVar144 * fVar154;
    auVar110._16_4_ = fVar145 * fVar155;
    auVar110._20_4_ = fVar146 * fVar156;
    auVar110._24_4_ = fVar147 * fVar157;
    auVar110._28_4_ = fVar148 * fVar158;
    if (-1 < cVar20) goto LAB_140364cf1;
LAB_1403650a8:
    uVar4 = vextractps_avx(auVar55,3);
    *(undefined4 *)(param_1 + iStack_424) = uVar4;
    auVar43 = vsubps_avx(auVar42,auVar110);
    if ((uVar121 & 1) != 0) goto LAB_1403650c5;
LAB_140364cfe:
    if ((uVar121 & 2) == 0) goto LAB_140364d07;
LAB_1403650dd:
    uVar4 = vextractps_avx(auVar43._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3dc) = uVar4;
    if ((uVar121 & 4) != 0) goto LAB_1403650f7;
LAB_140364d10:
    if ((uVar121 & 8) == 0) goto LAB_140364d19;
LAB_140365111:
    uVar4 = vextractps_avx(auVar43._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3d4) = uVar4;
    auVar40 = auVar43._16_16_;
    if ((uVar121 & 0x10) != 0) goto LAB_140365131;
LAB_140364d28:
    if ((uVar121 & 0x20) == 0) goto LAB_140364d31;
LAB_140365149:
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_42c) = uVar4;
    if ((uVar121 & 0x40) != 0) goto LAB_140365163;
LAB_140364d3a:
    auVar105._0_4_ = fVar137 * fVar120;
    auVar105._4_4_ = fVar142 * fVar124;
    auVar105._8_4_ = fVar143 * fVar125;
    auVar105._12_4_ = fVar144 * fVar127;
    auVar105._16_4_ = fVar145 * fVar129;
    auVar105._20_4_ = fVar146 * fVar131;
    auVar105._24_4_ = fVar147 * fVar133;
    auVar105._28_4_ = fVar148 * fVar135;
    if (-1 < cVar20) goto LAB_140364d47;
LAB_140365181:
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_424) = uVar4;
    auVar43 = vsubps_avx(auVar61,auVar105);
    if ((uVar121 & 1) != 0) goto LAB_14036519f;
LAB_140364d54:
    if ((uVar121 & 2) == 0) goto LAB_140364d5d;
LAB_1403651b7:
    uVar4 = vextractps_avx(auVar43._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3dc) = uVar4;
    if ((uVar121 & 4) != 0) goto LAB_1403651d1;
LAB_140364d66:
    if ((uVar121 & 8) == 0) goto LAB_140364d6f;
LAB_1403651eb:
    uVar4 = vextractps_avx(auVar43._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3d4) = uVar4;
    auVar40 = auVar43._16_16_;
  }
  else {
    *(int *)(param_1 + local_3e0) = auVar43._0_4_;
    if ((uVar121 & 2) != 0) goto LAB_140365004;
LAB_140364cab:
    if ((uVar121 & 4) == 0) goto LAB_140364cb4;
LAB_14036501d:
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + iStack_3d8) = uVar4;
    if ((uVar121 & 8) != 0) goto LAB_140365036;
LAB_140364cbd:
    if ((uVar121 & 0x10) == 0) goto LAB_140364cd2;
LAB_14036505b:
    *(int *)(param_1 + local_430) = auVar43._16_4_;
    if ((uVar121 & 0x20) != 0) goto LAB_140365072;
LAB_140364cdb:
    if ((uVar121 & 0x40) == 0) goto LAB_140364ce4;
LAB_14036508b:
    uVar4 = vextractps_avx(auVar55,2);
    *(undefined4 *)(param_1 + iStack_428) = uVar4;
    auVar110._0_4_ = fVar137 * fVar149;
    auVar110._4_4_ = fVar142 * fVar152;
    auVar110._8_4_ = fVar143 * fVar153;
    auVar110._12_4_ = fVar144 * fVar154;
    auVar110._16_4_ = fVar145 * fVar155;
    auVar110._20_4_ = fVar146 * fVar156;
    auVar110._24_4_ = fVar147 * fVar157;
    auVar110._28_4_ = fVar148 * fVar158;
    if (cVar20 < '\0') goto LAB_1403650a8;
LAB_140364cf1:
    auVar43 = vsubps_avx(auVar42,auVar110);
    if ((uVar121 & 1) == 0) goto LAB_140364cfe;
LAB_1403650c5:
    *(int *)(param_1 + 4 + (longlong)local_3e0) = auVar43._0_4_;
    if ((uVar121 & 2) != 0) goto LAB_1403650dd;
LAB_140364d07:
    if ((uVar121 & 4) == 0) goto LAB_140364d10;
LAB_1403650f7:
    uVar4 = vextractps_avx(auVar43._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3d8) = uVar4;
    if ((uVar121 & 8) != 0) goto LAB_140365111;
LAB_140364d19:
    auVar40 = auVar43._16_16_;
    if ((uVar121 & 0x10) == 0) goto LAB_140364d28;
LAB_140365131:
    *(int *)(param_1 + 4 + (longlong)local_430) = auVar40._0_4_;
    if ((uVar121 & 0x20) != 0) goto LAB_140365149;
LAB_140364d31:
    if ((uVar121 & 0x40) == 0) goto LAB_140364d3a;
LAB_140365163:
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_428) = uVar4;
    auVar105._0_4_ = fVar137 * fVar120;
    auVar105._4_4_ = fVar142 * fVar124;
    auVar105._8_4_ = fVar143 * fVar125;
    auVar105._12_4_ = fVar144 * fVar127;
    auVar105._16_4_ = fVar145 * fVar129;
    auVar105._20_4_ = fVar146 * fVar131;
    auVar105._24_4_ = fVar147 * fVar133;
    auVar105._28_4_ = fVar148 * fVar135;
    if (cVar20 < '\0') goto LAB_140365181;
LAB_140364d47:
    auVar43 = vsubps_avx(auVar61,auVar105);
    if ((uVar121 & 1) == 0) goto LAB_140364d54;
LAB_14036519f:
    *(int *)(param_1 + 8 + (longlong)local_3e0) = auVar43._0_4_;
    if ((uVar121 & 2) != 0) goto LAB_1403651b7;
LAB_140364d5d:
    if ((uVar121 & 4) == 0) goto LAB_140364d66;
LAB_1403651d1:
    uVar4 = vextractps_avx(auVar43._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3d8) = uVar4;
    if ((uVar121 & 8) != 0) goto LAB_1403651eb;
LAB_140364d6f:
    auVar40 = auVar43._16_16_;
  }
  if ((uVar121 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_430) = auVar40._0_4_;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_42c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_428) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_424) = uVar4;
  }
  if ((uVar121 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_3e0) = fVar137;
  }
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar14,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3dc) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar14,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3d8) = uVar4;
  }
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar14,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3d4) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_430) = fVar145;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar54,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_42c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar54,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_428) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar54,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_424) = uVar4;
  }
LAB_140364dee:
  auVar40 = vpcmpgtd_avx(auVar41,auVar56);
  auVar43 = vcmpps_avx(auVar107,auVar83,1);
  auVar53._0_4_ = auVar43._0_4_ & auVar40._0_4_;
  auVar53._4_4_ = auVar43._4_4_ & auVar40._4_4_;
  auVar53._8_4_ = auVar43._8_4_ & auVar40._8_4_;
  auVar53._12_4_ = auVar43._12_4_ & auVar40._12_4_;
  auVar53._16_4_ = auVar43._16_4_ & uVar88;
  auVar53._20_4_ = auVar43._20_4_ & uVar90;
  auVar53._24_4_ = auVar43._24_4_ & uVar92;
  auVar53._28_4_ = auVar43._28_4_ & uVar94;
  uVar121 = vmovmskps_avx(auVar53);
  if (uVar121 == 0) {
    return;
  }
  local_380 = auVar59._0_4_;
  iStack_37c = auVar59._4_4_;
  iStack_378 = auVar59._8_4_;
  iStack_374 = auVar59._12_4_;
  local_360 = auVar58._0_4_;
  fStack_35c = auVar58._4_4_;
  fStack_358 = auVar58._8_4_;
  fStack_354 = auVar58._12_4_;
  local_3c0 = auVar73._0_4_;
  fStack_3bc = auVar73._4_4_;
  fStack_3b8 = auVar73._8_4_;
  fStack_3b4 = auVar73._12_4_;
  fStack_3b0 = auVar73._16_4_;
  fStack_3ac = auVar73._20_4_;
  fStack_3a8 = auVar73._24_4_;
  fStack_3a4 = auVar73._28_4_;
  auVar55._0_4_ = fVar5 * fVar106 + local_3c0;
  auVar55._4_4_ = fVar6 * fVar111 + fStack_3bc;
  auVar55._8_4_ = fVar7 * fVar112 + fStack_3b8;
  auVar55._12_4_ = fVar8 * fVar113 + fStack_3b4;
  auVar75._16_4_ = fVar9 * fVar114 + fStack_3b0;
  auVar75._0_16_ = auVar55;
  auVar75._20_4_ = fVar10 * fVar115 + fStack_3ac;
  auVar75._24_4_ = fVar11 * fVar116 + fStack_3a8;
  auVar75._28_4_ = fVar12 * fVar117 + fStack_3a4;
  cVar20 = (char)uVar121;
  auVar40 = auVar75._16_16_;
  local_3a0 = auVar74._0_4_;
  fStack_39c = auVar74._4_4_;
  fStack_398 = auVar74._8_4_;
  fStack_394 = auVar74._12_4_;
  fStack_390 = auVar74._16_4_;
  fStack_38c = auVar74._20_4_;
  fStack_388 = auVar74._24_4_;
  fStack_384 = auVar74._28_4_;
  local_340 = auVar62._0_4_;
  fStack_33c = auVar62._4_4_;
  fStack_338 = auVar62._8_4_;
  fStack_334 = auVar62._12_4_;
  fStack_330 = auVar62._16_4_;
  fStack_32c = auVar62._20_4_;
  fStack_328 = auVar62._24_4_;
  fStack_324 = auVar62._28_4_;
  if ((uVar121 & 1) != 0) {
    *(float *)(param_1 + local_380) = auVar55._0_4_;
  }
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar55,1);
    *(undefined4 *)(param_1 + iStack_37c) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar55,2);
    *(undefined4 *)(param_1 + iStack_378) = uVar4;
  }
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar55,3);
    *(undefined4 *)(param_1 + iStack_374) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(float *)(param_1 + (int)local_360) = auVar75._16_4_;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + (int)fStack_35c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + (int)fStack_358) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + (int)fStack_354) = uVar4;
    auVar76._0_4_ = fVar149 * fVar5 + local_3a0;
    auVar76._4_4_ = fVar152 * fVar6 + fStack_39c;
    auVar76._8_4_ = fVar153 * fVar7 + fStack_398;
    auVar76._12_4_ = fVar154 * fVar8 + fStack_394;
    auVar76._16_4_ = fVar155 * fVar9 + fStack_390;
    auVar76._20_4_ = fVar156 * fVar10 + fStack_38c;
    auVar76._24_4_ = fVar157 * fVar11 + fStack_388;
    auVar76._28_4_ = fVar158 * fVar12 + fStack_384;
  }
  else {
    auVar76._0_4_ = fVar149 * fVar5 + local_3a0;
    auVar76._4_4_ = fVar152 * fVar6 + fStack_39c;
    auVar76._8_4_ = fVar153 * fVar7 + fStack_398;
    auVar76._12_4_ = fVar154 * fVar8 + fStack_394;
    auVar76._16_4_ = fVar155 * fVar9 + fStack_390;
    auVar76._20_4_ = fVar156 * fVar10 + fStack_38c;
    auVar76._24_4_ = fVar157 * fVar11 + fStack_388;
    auVar76._28_4_ = fVar158 * fVar12 + fStack_384;
  }
  if ((uVar121 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_380) = auVar76._0_4_;
  }
  auVar40 = auVar76._0_16_;
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_378) = uVar4;
  }
  auVar55 = auVar76._16_16_;
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_374) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_360) = auVar76._16_4_;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar55,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_35c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar55,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_358) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar55,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_354) = uVar4;
    auVar77._0_4_ = fVar120 * fVar5 + local_340;
    auVar77._4_4_ = fVar124 * fVar6 + fStack_33c;
    auVar77._8_4_ = fVar125 * fVar7 + fStack_338;
    auVar77._12_4_ = fVar127 * fVar8 + fStack_334;
    auVar77._16_4_ = fVar129 * fVar9 + fStack_330;
    auVar77._20_4_ = fVar131 * fVar10 + fStack_32c;
    auVar77._24_4_ = fVar133 * fVar11 + fStack_328;
    auVar77._28_4_ = fVar135 * fVar12 + fStack_324;
  }
  else {
    auVar77._0_4_ = fVar120 * fVar5 + local_340;
    auVar77._4_4_ = fVar124 * fVar6 + fStack_33c;
    auVar77._8_4_ = fVar125 * fVar7 + fStack_338;
    auVar77._12_4_ = fVar127 * fVar8 + fStack_334;
    auVar77._16_4_ = fVar129 * fVar9 + fStack_330;
    auVar77._20_4_ = fVar131 * fVar10 + fStack_32c;
    auVar77._24_4_ = fVar133 * fVar11 + fStack_328;
    auVar77._28_4_ = fVar135 * fVar12 + fStack_324;
  }
  if ((uVar121 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_380) = auVar77._0_4_;
  }
  auVar40 = auVar77._0_16_;
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_378) = uVar4;
  }
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_374) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_360) = auVar77._16_4_;
  }
  if ((uVar121 & 0x20) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_35c) = auVar77._20_4_;
  }
  if ((uVar121 & 0x40) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_358) = auVar77._24_4_;
  }
  if (cVar20 < '\0') {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_354) = auVar77._28_4_;
  }
  if ((uVar121 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_380) = fVar5;
  }
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar95,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar95,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_378) = uVar4;
  }
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar95,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_374) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_360) = fVar9;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar13,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_35c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar13,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_358) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar13,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_354) = uVar4;
  }
  return;
}

// ApplySpringConstraints_avx @ 1403657b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraints_avx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,uint param_5)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar67 [32];
  undefined1 auVar71 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  uint uVar72;
  int iVar73;
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  undefined1 in_ZMM3 [64];
  float fVar83;
  float fVar92;
  undefined1 auVar84 [16];
  float fVar90;
  float fVar91;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar85 [32];
  float fVar96;
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  uint uVar97;
  uint uVar104;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  uint uVar102;
  uint uVar103;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  undefined1 auVar100 [32];
  uint uVar108;
  undefined1 auVar101 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar114 [16];
  uint uVar113;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  uint uVar122;
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  float fVar125;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar126 [32];
  float fVar136;
  undefined1 auVar127 [32];
  uint uVar135;
  undefined1 auVar128 [32];
  int iVar137;
  undefined1 auVar138 [16];
  undefined1 auVar139 [32];
  float fVar140;
  float fVar145;
  float fVar146;
  undefined1 auVar141 [16];
  float fVar148;
  float fVar149;
  float fVar150;
  undefined1 auVar143 [32];
  float fVar147;
  undefined1 auVar142 [16];
  float fVar151;
  undefined1 auVar144 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  float fVar154;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  undefined1 auVar155 [32];
  float fVar163;
  undefined1 auVar156 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  int local_3b0;
  int iStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
  float local_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
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
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  longlong lVar19;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar68 [32];
  
  uVar113 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar113 = param_5;
  }
  auVar66 = in_ZMM3._0_16_;
  if ((int)(uVar113 & 0xfffffff8) < 1) {
    uVar16 = 0;
  }
  else {
    auVar71 = vshufps_avx(auVar66,auVar66,0);
    uVar16 = 0;
    uVar37 = 0;
    do {
      auVar43._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar37 * 2);
      auVar43._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar37 * 2);
      auVar60._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar37 * 2);
      auVar60._0_16_ = *(undefined1 (*) [16])(param_2 + uVar37 * 2);
      auVar46 = vshufps_avx(auVar60,auVar43,0x88);
      auVar43 = vshufps_avx(auVar60,auVar43,0xdd);
      auVar42 = vpslld_avx(auVar46._16_16_,4);
      auVar65 = vpslld_avx(auVar46._0_16_,4);
      lVar40 = (longlong)auVar65._0_4_;
      lVar22 = (longlong)auVar65._4_4_;
      lVar24 = (longlong)auVar65._8_4_;
      lVar23 = (longlong)auVar65._12_4_;
      lVar35 = (longlong)auVar42._0_4_;
      lVar31 = (longlong)auVar42._4_4_;
      lVar20 = (longlong)auVar42._8_4_;
      lVar17 = (longlong)auVar42._12_4_;
      auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + lVar31)),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + lVar20)),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + lVar17)),0x30);
      auVar65 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar40)),
                              ZEXT416(*(uint *)(param_1 + lVar22)),0x10);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + lVar24)),0x20);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + lVar23)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_1 + 4 + lVar20)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_1 + 4 + lVar17)),0x30);
      auVar141 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar40)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x10);
      auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x20);
      auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x30);
      auVar74._16_16_ = auVar42;
      auVar74._0_16_ = auVar65;
      auVar152._16_16_ = auVar57;
      auVar152._0_16_ = auVar141;
      auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 8 + lVar20)),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 8 + lVar17)),0x30);
      auVar65 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar40)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x10);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x20);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x30);
      auVar139._16_16_ = auVar42;
      auVar139._0_16_ = auVar65;
      uVar14 = *(uint *)(param_1 + 0xc + lVar40);
      uVar33 = *(uint *)(param_1 + 0xc + lVar22);
      uVar72 = *(uint *)(param_1 + 0xc + lVar24);
      uVar76 = *(uint *)(param_1 + 0xc + lVar23);
      uVar77 = *(uint *)(param_1 + 0xc + lVar35);
      uVar78 = *(uint *)(param_1 + 0xc + lVar31);
      uVar79 = *(uint *)(param_1 + 0xc + lVar20);
      uVar80 = *(uint *)(param_1 + 0xc + lVar17);
      auVar42 = vinsertps_avx(ZEXT416(uVar77),ZEXT416(uVar78),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(uVar79),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(uVar80),0x30);
      auVar65 = vinsertps_avx(ZEXT416(uVar14),ZEXT416(uVar33),0x10);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(uVar72),0x20);
      auVar141 = vpslld_avx(auVar43._16_16_,4);
      auVar57 = vpslld_avx(auVar43._0_16_,4);
      lVar36 = (longlong)auVar57._0_4_;
      lVar32 = (longlong)auVar57._4_4_;
      lVar18 = (longlong)auVar57._8_4_;
      lVar21 = (longlong)auVar57._12_4_;
      lVar34 = (longlong)auVar141._0_4_;
      lVar39 = (longlong)auVar141._4_4_;
      lVar38 = (longlong)auVar141._8_4_;
      lVar41 = (longlong)auVar141._12_4_;
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar34)),
                              ZEXT416(*(uint *)(param_1 + lVar39)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_1 + lVar38)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_1 + lVar41)),0x30);
      auVar141 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar36)),
                               ZEXT416(*(uint *)(param_1 + lVar32)),0x10);
      auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)(param_1 + lVar18)),0x20);
      auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)(param_1 + lVar21)),0x30);
      auVar84 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar34)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x10);
      auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x20);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(uVar76),0x30);
      auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_1 + 4 + lVar41)),0x30);
      auVar98 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar32)),0x10);
      auVar98 = vinsertps_avx(auVar98,ZEXT416(*(uint *)(param_1 + 4 + lVar18)),0x20);
      auVar61._16_16_ = auVar42;
      auVar61._0_16_ = auVar65;
      auVar98 = vinsertps_avx(auVar98,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x30);
      auVar114 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x10);
      auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x20);
      auVar123._16_16_ = auVar57;
      auVar123._0_16_ = auVar141;
      auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)(param_1 + 8 + lVar41)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar32)),0x10);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 8 + lVar18)),0x20);
      auVar164._16_16_ = auVar84;
      auVar164._0_16_ = auVar98;
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x30);
      auVar44._16_16_ = auVar114;
      auVar44._0_16_ = auVar10;
      auVar46 = vsubps_avx(auVar74,auVar123);
      auVar43 = vsubps_avx(auVar152,auVar164);
      auVar60 = vsubps_avx(auVar139,auVar44);
      auVar143._0_4_ =
           auVar46._0_4_ * auVar46._0_4_ + auVar43._0_4_ * auVar43._0_4_ +
           auVar60._0_4_ * auVar60._0_4_;
      auVar143._4_4_ =
           auVar46._4_4_ * auVar46._4_4_ + auVar43._4_4_ * auVar43._4_4_ +
           auVar60._4_4_ * auVar60._4_4_;
      auVar143._8_4_ =
           auVar46._8_4_ * auVar46._8_4_ + auVar43._8_4_ * auVar43._8_4_ +
           auVar60._8_4_ * auVar60._8_4_;
      auVar143._12_4_ =
           auVar46._12_4_ * auVar46._12_4_ + auVar43._12_4_ * auVar43._12_4_ +
           auVar60._12_4_ * auVar60._12_4_;
      auVar143._16_4_ =
           auVar46._16_4_ * auVar46._16_4_ + auVar43._16_4_ * auVar43._16_4_ +
           auVar60._16_4_ * auVar60._16_4_;
      auVar143._20_4_ =
           auVar46._20_4_ * auVar46._20_4_ + auVar43._20_4_ * auVar43._20_4_ +
           auVar60._20_4_ * auVar60._20_4_;
      auVar143._24_4_ =
           auVar46._24_4_ * auVar46._24_4_ + auVar43._24_4_ * auVar43._24_4_ +
           auVar60._24_4_ * auVar60._24_4_;
      auVar143._28_4_ =
           auVar46._28_4_ * auVar46._28_4_ + auVar43._28_4_ * auVar43._28_4_ +
           auVar60._28_4_ * auVar60._28_4_;
      uVar81 = *(uint *)(param_1 + 0xc + lVar34);
      uVar82 = *(uint *)(param_1 + 0xc + lVar39);
      uVar118 = *(uint *)(param_1 + 0xc + lVar38);
      auVar11 = vinsertps_avx(ZEXT416(uVar81),ZEXT416(uVar82),0x10);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(uVar118),0x20);
      uVar119 = *(uint *)(param_1 + 0xc + lVar41);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(uVar119),0x30);
      uVar120 = *(uint *)(param_1 + 0xc + lVar36);
      uVar121 = *(uint *)(param_1 + 0xc + lVar32);
      uVar122 = *(uint *)(param_1 + 0xc + lVar18);
      auVar12 = vinsertps_avx(ZEXT416(uVar120),ZEXT416(uVar121),0x10);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(uVar122),0x20);
      uVar135 = *(uint *)(param_1 + 0xc + lVar21);
      auVar67 = vsqrtps_avx(auVar143);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(uVar135),0x30);
      auVar46 = vdivps_avx(auVar46,auVar67);
      auVar155._16_16_ = auVar11;
      auVar155._0_16_ = auVar12;
      auVar44 = vdivps_avx(auVar43,auVar67);
      auVar43 = vcmpps_avx(auVar143,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar60 = vdivps_avx(auVar60,auVar67);
      auVar46 = vblendvps_avx(auVar46,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar43);
      uVar97 = auVar43._0_4_;
      uVar102 = auVar43._4_4_;
      uVar103 = auVar43._8_4_;
      uVar104 = auVar43._12_4_;
      uVar105 = auVar43._16_4_;
      uVar106 = auVar43._20_4_;
      uVar107 = auVar43._24_4_;
      uVar108 = auVar43._28_4_;
      auVar45._0_4_ = ~uVar97 & auVar67._0_4_;
      auVar45._4_4_ = ~uVar102 & auVar67._4_4_;
      auVar45._8_4_ = ~uVar103 & auVar67._8_4_;
      auVar45._12_4_ = ~uVar104 & auVar67._12_4_;
      auVar45._16_4_ = ~uVar105 & auVar67._16_4_;
      auVar45._20_4_ = ~uVar106 & auVar67._20_4_;
      auVar45._24_4_ = ~uVar107 & auVar67._24_4_;
      auVar45._28_4_ = ~uVar108 & auVar67._28_4_;
      auVar126._16_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + (uVar37 & 0xffffffff));
      auVar126._0_16_ = *(undefined1 (*) [16])(param_3 + (uVar37 & 0xffffffff));
      auVar43 = vsubps_avx(auVar45,auVar126);
      fVar83 = auVar43._0_4_;
      fVar90 = auVar43._4_4_;
      fVar91 = auVar43._8_4_;
      fVar92 = auVar43._12_4_;
      fVar93 = auVar43._16_4_;
      fVar94 = auVar43._20_4_;
      fVar95 = auVar43._24_4_;
      fVar96 = auVar43._28_4_;
      local_1e0 = auVar71._0_4_;
      fStack_1dc = auVar71._4_4_;
      fStack_1d8 = auVar71._8_4_;
      fStack_1d4 = auVar71._12_4_;
      auVar67._0_4_ = local_1e0 * auVar46._0_4_ * fVar83;
      auVar67._4_4_ = fStack_1dc * auVar46._4_4_ * fVar90;
      auVar67._8_4_ = fStack_1d8 * auVar46._8_4_ * fVar91;
      auVar67._12_4_ = fStack_1d4 * auVar46._12_4_ * fVar92;
      auVar67._16_4_ = local_1e0 * auVar46._16_4_ * fVar93;
      auVar67._20_4_ = fStack_1dc * auVar46._20_4_ * fVar94;
      auVar67._24_4_ = fStack_1d8 * auVar46._24_4_ * fVar95;
      auVar67._28_4_ = fStack_1d4 * auVar46._28_4_ * fVar96;
      auVar85._0_4_ = local_1e0 * (float)(~uVar97 & auVar44._0_4_) * fVar83;
      auVar85._4_4_ = fStack_1dc * (float)(~uVar102 & auVar44._4_4_) * fVar90;
      auVar85._8_4_ = fStack_1d8 * (float)(~uVar103 & auVar44._8_4_) * fVar91;
      auVar85._12_4_ = fStack_1d4 * (float)(~uVar104 & auVar44._12_4_) * fVar92;
      auVar85._16_4_ = local_1e0 * (float)(~uVar105 & auVar44._16_4_) * fVar93;
      auVar85._20_4_ = fStack_1dc * (float)(~uVar106 & auVar44._20_4_) * fVar94;
      auVar85._24_4_ = fStack_1d8 * (float)(~uVar107 & auVar44._24_4_) * fVar95;
      auVar85._28_4_ = fStack_1d4 * (float)(~uVar108 & auVar44._28_4_) * fVar96;
      fVar2 = auVar65._0_4_;
      fVar154 = auVar12._0_4_;
      auVar100._0_4_ = fVar154 + fVar2;
      fVar3 = auVar65._4_4_;
      fVar157 = auVar12._4_4_;
      auVar100._4_4_ = fVar157 + fVar3;
      fVar4 = auVar65._8_4_;
      fVar158 = auVar12._8_4_;
      auVar100._8_4_ = fVar158 + fVar4;
      fVar5 = auVar65._12_4_;
      fVar159 = auVar12._12_4_;
      auVar100._12_4_ = fVar159 + fVar5;
      fVar6 = auVar42._0_4_;
      fVar160 = auVar11._0_4_;
      auVar100._16_4_ = fVar160 + fVar6;
      fVar7 = auVar42._4_4_;
      fVar161 = auVar11._4_4_;
      auVar100._20_4_ = fVar161 + fVar7;
      fVar8 = auVar42._8_4_;
      fVar162 = auVar11._8_4_;
      auVar100._24_4_ = fVar162 + fVar8;
      fVar9 = auVar42._12_4_;
      fVar163 = auVar11._12_4_;
      auVar100._28_4_ = fVar163 + fVar9;
      auVar44 = vdivps_avx(auVar67,auVar100);
      auVar46._0_4_ = local_1e0 * (float)(~uVar97 & auVar60._0_4_) * fVar83;
      auVar46._4_4_ = fStack_1dc * (float)(~uVar102 & auVar60._4_4_) * fVar90;
      auVar46._8_4_ = fStack_1d8 * (float)(~uVar103 & auVar60._8_4_) * fVar91;
      auVar46._12_4_ = fStack_1d4 * (float)(~uVar104 & auVar60._12_4_) * fVar92;
      auVar46._16_4_ = local_1e0 * (float)(~uVar105 & auVar60._16_4_) * fVar93;
      auVar46._20_4_ = fStack_1dc * (float)(~uVar106 & auVar60._20_4_) * fVar94;
      auVar46._24_4_ = fStack_1d8 * (float)(~uVar107 & auVar60._24_4_) * fVar95;
      auVar46._28_4_ = fStack_1d4 * (float)(~uVar108 & auVar60._28_4_) * fVar96;
      auVar60 = vdivps_avx(auVar85,auVar100);
      auVar67 = vdivps_avx(auVar46,auVar100);
      auVar42 = ZEXT816(0);
      auVar46 = vcmpps_avx(auVar155,ZEXT1632(auVar42),0);
      auVar43 = vcmpps_avx(auVar61,ZEXT1632(auVar42),0);
      uVar97 = auVar43._0_4_ & auVar46._0_4_;
      uVar102 = auVar43._4_4_ & auVar46._4_4_;
      uVar103 = auVar43._8_4_ & auVar46._8_4_;
      uVar104 = auVar43._12_4_ & auVar46._12_4_;
      uVar105 = auVar43._16_4_ & auVar46._16_4_;
      uVar106 = auVar43._20_4_ & auVar46._20_4_;
      uVar107 = auVar43._24_4_ & auVar46._24_4_;
      uVar108 = auVar43._28_4_ & auVar46._28_4_;
      fVar140 = (float)(~uVar97 & auVar44._0_4_);
      fVar145 = (float)(~uVar102 & auVar44._4_4_);
      fVar146 = (float)(~uVar103 & auVar44._8_4_);
      fVar147 = (float)(~uVar104 & auVar44._12_4_);
      fVar148 = (float)(~uVar105 & auVar44._16_4_);
      fVar149 = (float)(~uVar106 & auVar44._20_4_);
      fVar150 = (float)(~uVar107 & auVar44._24_4_);
      fVar151 = (float)(~uVar108 & auVar44._28_4_);
      fVar125 = (float)(~uVar97 & auVar60._0_4_);
      fVar129 = (float)(~uVar102 & auVar60._4_4_);
      fVar130 = (float)(~uVar103 & auVar60._8_4_);
      fVar131 = (float)(~uVar104 & auVar60._12_4_);
      fVar132 = (float)(~uVar105 & auVar60._16_4_);
      fVar133 = (float)(~uVar106 & auVar60._20_4_);
      fVar134 = (float)(~uVar107 & auVar60._24_4_);
      fVar136 = (float)(~uVar108 & auVar60._28_4_);
      fVar83 = (float)(~uVar97 & auVar67._0_4_);
      fVar90 = (float)(~uVar102 & auVar67._4_4_);
      fVar91 = (float)(~uVar103 & auVar67._8_4_);
      fVar92 = (float)(~uVar104 & auVar67._12_4_);
      fVar93 = (float)(~uVar105 & auVar67._16_4_);
      fVar94 = (float)(~uVar106 & auVar67._20_4_);
      fVar95 = (float)(~uVar107 & auVar67._24_4_);
      fVar96 = (float)(~uVar108 & auVar67._28_4_);
      auVar46 = vcmpps_avx(ZEXT1632(auVar42),auVar61,1);
      uVar97 = vmovmskps_avx(auVar46);
      if (uVar97 == 0) {
LAB_140365ec5:
        auVar46 = vcmpps_avx(ZEXT832(0) << 0x20,auVar155,1);
        uVar14 = vmovmskps_avx(auVar46);
      }
      else {
        auVar47._0_4_ = fVar140 * fVar2;
        auVar47._4_4_ = fVar145 * fVar3;
        auVar47._8_4_ = fVar146 * fVar4;
        auVar47._12_4_ = fVar147 * fVar5;
        auVar47._16_4_ = fVar148 * fVar6;
        auVar47._20_4_ = fVar149 * fVar7;
        auVar47._24_4_ = fVar150 * fVar8;
        auVar47._28_4_ = fVar151 * fVar9;
        auVar46 = vsubps_avx(auVar74,auVar47);
        cVar13 = (char)uVar97;
        if ((uVar97 & 1) != 0) {
          *(int *)(param_1 + lVar40) = auVar46._0_4_;
        }
        auVar42 = auVar46._0_16_;
        auVar65 = auVar46._16_16_;
        if ((uVar97 & 2) == 0) {
          if ((uVar97 & 4) == 0) goto LAB_140365d85;
LAB_140366051:
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + lVar24) = uVar15;
          if ((uVar97 & 8) != 0) goto LAB_140366062;
LAB_140365d8f:
          if ((uVar97 & 0x10) == 0) goto LAB_140365d9f;
LAB_140366079:
          *(int *)(param_1 + lVar35) = auVar46._16_4_;
          if ((uVar97 & 0x20) != 0) goto LAB_140366089;
LAB_140365da9:
          if ((uVar97 & 0x40) == 0) goto LAB_140365db3;
LAB_14036609a:
          uVar15 = vextractps_avx(auVar65,2);
          *(undefined4 *)(param_1 + lVar20) = uVar15;
          if (cVar13 < '\0') goto LAB_1403660aa;
LAB_140365dbc:
          auVar48._0_4_ = fVar125 * fVar2;
          auVar48._4_4_ = fVar129 * fVar3;
          auVar48._8_4_ = fVar130 * fVar4;
          auVar48._12_4_ = fVar131 * fVar5;
          auVar48._16_4_ = fVar132 * fVar6;
          auVar48._20_4_ = fVar133 * fVar7;
          auVar48._24_4_ = fVar134 * fVar8;
          auVar48._28_4_ = fVar136 * fVar9;
          auVar46 = vsubps_avx(auVar152,auVar48);
          if ((uVar97 & 1) == 0) goto LAB_140365dce;
LAB_1403660c8:
          *(int *)(param_1 + 4 + lVar40) = auVar46._0_4_;
          if ((uVar97 & 2) != 0) goto LAB_1403660d9;
LAB_140365dd8:
          if ((uVar97 & 4) == 0) goto LAB_140365de2;
LAB_1403660eb:
          uVar15 = vextractps_avx(auVar46._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar24) = uVar15;
          if ((uVar97 & 8) != 0) goto LAB_1403660fd;
LAB_140365dec:
          auVar42 = auVar46._16_16_;
          if ((uVar97 & 0x10) == 0) goto LAB_140365dfc;
LAB_140366115:
          *(int *)(param_1 + 4 + lVar35) = auVar42._0_4_;
          if ((uVar97 & 0x20) != 0) goto LAB_140366126;
LAB_140365e06:
          if ((uVar97 & 0x40) == 0) goto LAB_140365e10;
LAB_140366138:
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 4 + lVar20) = uVar15;
          if (cVar13 < '\0') goto LAB_140366149;
LAB_140365e19:
          auVar49._0_4_ = fVar2 * fVar83;
          auVar49._4_4_ = fVar3 * fVar90;
          auVar49._8_4_ = fVar4 * fVar91;
          auVar49._12_4_ = fVar5 * fVar92;
          auVar49._16_4_ = fVar6 * fVar93;
          auVar49._20_4_ = fVar7 * fVar94;
          auVar49._24_4_ = fVar8 * fVar95;
          auVar49._28_4_ = fVar9 * fVar96;
          auVar46 = vsubps_avx(auVar139,auVar49);
          if ((uVar97 & 1) == 0) goto LAB_140365e2b;
LAB_140366168:
          *(int *)(param_1 + 8 + lVar40) = auVar46._0_4_;
          if ((uVar97 & 2) != 0) goto LAB_140366179;
LAB_140365e35:
          if ((uVar97 & 4) == 0) goto LAB_140365e3f;
LAB_14036618b:
          uVar15 = vextractps_avx(auVar46._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar24) = uVar15;
          if ((uVar97 & 8) != 0) goto LAB_14036619d;
LAB_140365e49:
          auVar42 = auVar46._16_16_;
        }
        else {
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + lVar22) = uVar15;
          if ((uVar97 & 4) != 0) goto LAB_140366051;
LAB_140365d85:
          if ((uVar97 & 8) == 0) goto LAB_140365d8f;
LAB_140366062:
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + lVar23) = uVar15;
          if ((uVar97 & 0x10) != 0) goto LAB_140366079;
LAB_140365d9f:
          if ((uVar97 & 0x20) == 0) goto LAB_140365da9;
LAB_140366089:
          uVar15 = vextractps_avx(auVar65,1);
          *(undefined4 *)(param_1 + lVar31) = uVar15;
          if ((uVar97 & 0x40) != 0) goto LAB_14036609a;
LAB_140365db3:
          if (-1 < cVar13) goto LAB_140365dbc;
LAB_1403660aa:
          uVar15 = vextractps_avx(auVar65,3);
          *(undefined4 *)(param_1 + lVar17) = uVar15;
          auVar53._0_4_ = fVar125 * fVar2;
          auVar53._4_4_ = fVar129 * fVar3;
          auVar53._8_4_ = fVar130 * fVar4;
          auVar53._12_4_ = fVar131 * fVar5;
          auVar53._16_4_ = fVar132 * fVar6;
          auVar53._20_4_ = fVar133 * fVar7;
          auVar53._24_4_ = fVar134 * fVar8;
          auVar53._28_4_ = fVar136 * fVar9;
          auVar46 = vsubps_avx(auVar152,auVar53);
          if ((uVar97 & 1) != 0) goto LAB_1403660c8;
LAB_140365dce:
          if ((uVar97 & 2) == 0) goto LAB_140365dd8;
LAB_1403660d9:
          uVar15 = vextractps_avx(auVar46._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar22) = uVar15;
          if ((uVar97 & 4) != 0) goto LAB_1403660eb;
LAB_140365de2:
          if ((uVar97 & 8) == 0) goto LAB_140365dec;
LAB_1403660fd:
          uVar15 = vextractps_avx(auVar46._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar23) = uVar15;
          auVar42 = auVar46._16_16_;
          if ((uVar97 & 0x10) != 0) goto LAB_140366115;
LAB_140365dfc:
          if ((uVar97 & 0x20) == 0) goto LAB_140365e06;
LAB_140366126:
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 4 + lVar31) = uVar15;
          if ((uVar97 & 0x40) != 0) goto LAB_140366138;
LAB_140365e10:
          if (-1 < cVar13) goto LAB_140365e19;
LAB_140366149:
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 4 + lVar17) = uVar15;
          auVar54._0_4_ = fVar2 * fVar83;
          auVar54._4_4_ = fVar3 * fVar90;
          auVar54._8_4_ = fVar4 * fVar91;
          auVar54._12_4_ = fVar5 * fVar92;
          auVar54._16_4_ = fVar6 * fVar93;
          auVar54._20_4_ = fVar7 * fVar94;
          auVar54._24_4_ = fVar8 * fVar95;
          auVar54._28_4_ = fVar9 * fVar96;
          auVar46 = vsubps_avx(auVar139,auVar54);
          if ((uVar97 & 1) != 0) goto LAB_140366168;
LAB_140365e2b:
          if ((uVar97 & 2) == 0) goto LAB_140365e35;
LAB_140366179:
          uVar15 = vextractps_avx(auVar46._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar22) = uVar15;
          if ((uVar97 & 4) != 0) goto LAB_14036618b;
LAB_140365e3f:
          if ((uVar97 & 8) == 0) goto LAB_140365e49;
LAB_14036619d:
          uVar15 = vextractps_avx(auVar46._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar23) = uVar15;
          auVar42 = auVar46._16_16_;
        }
        if ((uVar97 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar35) = auVar42._0_4_;
        }
        if ((uVar97 & 0x20) != 0) {
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 8 + lVar31) = uVar15;
        }
        if ((uVar97 & 0x40) != 0) {
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 8 + lVar20) = uVar15;
        }
        if (cVar13 < '\0') {
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 8 + lVar17) = uVar15;
        }
        if ((uVar97 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar40) = uVar14;
        }
        if ((uVar97 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar22) = uVar33;
        }
        if ((uVar97 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar24) = uVar72;
        }
        if ((uVar97 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar23) = uVar76;
        }
        if ((uVar97 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar77;
        }
        if ((uVar97 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar31) = uVar78;
        }
        if ((uVar97 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar79;
        }
        if (-1 < cVar13) goto LAB_140365ec5;
        *(uint *)(param_1 + 0xc + lVar17) = uVar80;
        auVar46 = vcmpps_avx(ZEXT832(0) << 0x20,auVar155,1);
        uVar14 = vmovmskps_avx(auVar46);
      }
      if (uVar14 != 0) {
        auVar42._0_4_ = auVar141._0_4_ + fVar154 * fVar140;
        auVar42._4_4_ = auVar141._4_4_ + fVar157 * fVar145;
        auVar42._8_4_ = auVar141._8_4_ + fVar158 * fVar146;
        auVar42._12_4_ = auVar141._12_4_ + fVar159 * fVar147;
        auVar50._16_4_ = auVar57._0_4_ + fVar160 * fVar148;
        auVar50._0_16_ = auVar42;
        auVar50._20_4_ = auVar57._4_4_ + fVar161 * fVar149;
        auVar50._24_4_ = auVar57._8_4_ + fVar162 * fVar150;
        auVar50._28_4_ = auVar57._12_4_ + fVar163 * fVar151;
        cVar13 = (char)uVar14;
        if ((uVar14 & 1) != 0) {
          *(float *)(param_1 + lVar36) = auVar42._0_4_;
        }
        auVar65 = auVar50._16_16_;
        local_380 = auVar10._0_4_;
        fStack_37c = auVar10._4_4_;
        fStack_378 = auVar10._8_4_;
        fStack_374 = auVar10._12_4_;
        fStack_370 = auVar114._0_4_;
        fStack_36c = auVar114._4_4_;
        fStack_368 = auVar114._8_4_;
        fStack_364 = auVar114._12_4_;
        if ((uVar14 & 2) == 0) {
          if ((uVar14 & 4) == 0) goto LAB_140365f19;
LAB_1403662e0:
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + lVar18) = uVar15;
          if ((uVar14 & 8) != 0) goto LAB_1403662f0;
LAB_140365f22:
          if ((uVar14 & 0x10) == 0) goto LAB_140365f31;
LAB_140366306:
          *(float *)(param_1 + lVar34) = auVar50._16_4_;
          if ((uVar14 & 0x20) != 0) goto LAB_140366314;
LAB_140365f3a:
          if ((uVar14 & 0x40) == 0) goto LAB_140365f43;
LAB_140366324:
          uVar15 = vextractps_avx(auVar65,2);
          *(undefined4 *)(param_1 + lVar38) = uVar15;
          if (cVar13 < '\0') goto LAB_140366333;
LAB_140365f4b:
          auVar51._0_4_ = auVar98._0_4_ + fVar154 * fVar125;
          auVar51._4_4_ = auVar98._4_4_ + fVar157 * fVar129;
          auVar51._8_4_ = auVar98._8_4_ + fVar158 * fVar130;
          auVar51._12_4_ = auVar98._12_4_ + fVar159 * fVar131;
          auVar51._16_4_ = auVar84._0_4_ + fVar160 * fVar132;
          auVar51._20_4_ = auVar84._4_4_ + fVar161 * fVar133;
          auVar51._24_4_ = auVar84._8_4_ + fVar162 * fVar134;
          auVar51._28_4_ = auVar84._12_4_ + fVar163 * fVar136;
          if ((uVar14 & 1) == 0) goto LAB_140365f5d;
LAB_140366351:
          *(int *)(param_1 + 4 + lVar36) = auVar51._0_4_;
          if ((uVar14 & 2) != 0) goto LAB_140366361;
LAB_140365f66:
          if ((uVar14 & 4) == 0) goto LAB_140365f6f;
LAB_140366372:
          uVar15 = vextractps_avx(auVar51._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar18) = uVar15;
          if ((uVar14 & 8) != 0) goto LAB_140366383;
LAB_140365f78:
          auVar42 = auVar51._16_16_;
          if ((uVar14 & 0x10) == 0) goto LAB_140365f87;
LAB_14036639a:
          *(int *)(param_1 + 4 + lVar34) = auVar42._0_4_;
          if ((uVar14 & 0x20) != 0) goto LAB_1403663a9;
LAB_140365f90:
          if ((uVar14 & 0x40) == 0) goto LAB_140365f99;
LAB_1403663ba:
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 4 + lVar38) = uVar15;
          if (cVar13 < '\0') goto LAB_1403663ca;
LAB_140365fa1:
          auVar52._0_4_ = fVar154 * fVar83 + local_380;
          auVar52._4_4_ = fVar157 * fVar90 + fStack_37c;
          auVar52._8_4_ = fVar158 * fVar91 + fStack_378;
          auVar52._12_4_ = fVar159 * fVar92 + fStack_374;
          auVar52._16_4_ = fVar160 * fVar93 + fStack_370;
          auVar52._20_4_ = fVar161 * fVar94 + fStack_36c;
          auVar52._24_4_ = fVar162 * fVar95 + fStack_368;
          auVar52._28_4_ = fVar163 * fVar96 + fStack_364;
          if ((uVar14 & 1) == 0) goto LAB_140365fb7;
LAB_1403663ed:
          *(int *)(param_1 + 8 + lVar36) = auVar52._0_4_;
          if ((uVar14 & 2) != 0) goto LAB_1403663fd;
LAB_140365fc0:
          if ((uVar14 & 4) == 0) goto LAB_140365fc9;
LAB_14036640e:
          uVar15 = vextractps_avx(auVar52._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar18) = uVar15;
          if ((uVar14 & 8) != 0) goto LAB_14036641f;
LAB_140365fd2:
          auVar42 = auVar52._16_16_;
        }
        else {
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + lVar32) = uVar15;
          if ((uVar14 & 4) != 0) goto LAB_1403662e0;
LAB_140365f19:
          if ((uVar14 & 8) == 0) goto LAB_140365f22;
LAB_1403662f0:
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + lVar21) = uVar15;
          if ((uVar14 & 0x10) != 0) goto LAB_140366306;
LAB_140365f31:
          if ((uVar14 & 0x20) == 0) goto LAB_140365f3a;
LAB_140366314:
          uVar15 = vextractps_avx(auVar65,1);
          *(undefined4 *)(param_1 + lVar39) = uVar15;
          if ((uVar14 & 0x40) != 0) goto LAB_140366324;
LAB_140365f43:
          if (-1 < cVar13) goto LAB_140365f4b;
LAB_140366333:
          uVar15 = vextractps_avx(auVar65,3);
          *(undefined4 *)(param_1 + lVar41) = uVar15;
          auVar51._0_4_ = auVar98._0_4_ + fVar154 * fVar125;
          auVar51._4_4_ = auVar98._4_4_ + fVar157 * fVar129;
          auVar51._8_4_ = auVar98._8_4_ + fVar158 * fVar130;
          auVar51._12_4_ = auVar98._12_4_ + fVar159 * fVar131;
          auVar51._16_4_ = auVar84._0_4_ + fVar160 * fVar132;
          auVar51._20_4_ = auVar84._4_4_ + fVar161 * fVar133;
          auVar51._24_4_ = auVar84._8_4_ + fVar162 * fVar134;
          auVar51._28_4_ = auVar84._12_4_ + fVar163 * fVar136;
          if ((uVar14 & 1) != 0) goto LAB_140366351;
LAB_140365f5d:
          if ((uVar14 & 2) == 0) goto LAB_140365f66;
LAB_140366361:
          uVar15 = vextractps_avx(auVar51._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar32) = uVar15;
          if ((uVar14 & 4) != 0) goto LAB_140366372;
LAB_140365f6f:
          if ((uVar14 & 8) == 0) goto LAB_140365f78;
LAB_140366383:
          uVar15 = vextractps_avx(auVar51._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar21) = uVar15;
          auVar42 = auVar51._16_16_;
          if ((uVar14 & 0x10) != 0) goto LAB_14036639a;
LAB_140365f87:
          if ((uVar14 & 0x20) == 0) goto LAB_140365f90;
LAB_1403663a9:
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 4 + lVar39) = uVar15;
          if ((uVar14 & 0x40) != 0) goto LAB_1403663ba;
LAB_140365f99:
          if (-1 < cVar13) goto LAB_140365fa1;
LAB_1403663ca:
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 4 + lVar41) = uVar15;
          auVar52._0_4_ = fVar154 * fVar83 + local_380;
          auVar52._4_4_ = fVar157 * fVar90 + fStack_37c;
          auVar52._8_4_ = fVar158 * fVar91 + fStack_378;
          auVar52._12_4_ = fVar159 * fVar92 + fStack_374;
          auVar52._16_4_ = fVar160 * fVar93 + fStack_370;
          auVar52._20_4_ = fVar161 * fVar94 + fStack_36c;
          auVar52._24_4_ = fVar162 * fVar95 + fStack_368;
          auVar52._28_4_ = fVar163 * fVar96 + fStack_364;
          if ((uVar14 & 1) != 0) goto LAB_1403663ed;
LAB_140365fb7:
          if ((uVar14 & 2) == 0) goto LAB_140365fc0;
LAB_1403663fd:
          uVar15 = vextractps_avx(auVar52._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar32) = uVar15;
          if ((uVar14 & 4) != 0) goto LAB_14036640e;
LAB_140365fc9:
          if ((uVar14 & 8) == 0) goto LAB_140365fd2;
LAB_14036641f:
          uVar15 = vextractps_avx(auVar52._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar21) = uVar15;
          auVar42 = auVar52._16_16_;
        }
        if ((uVar14 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar34) = auVar42._0_4_;
        }
        if ((uVar14 & 0x20) != 0) {
          uVar15 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 8 + lVar39) = uVar15;
        }
        if ((uVar14 & 0x40) != 0) {
          uVar15 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 8 + lVar38) = uVar15;
        }
        if (cVar13 < '\0') {
          uVar15 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 8 + lVar41) = uVar15;
        }
        if ((uVar14 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar120;
        }
        if ((uVar14 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar121;
        }
        if ((uVar14 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar18) = uVar122;
        }
        if ((uVar14 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar135;
        }
        if ((uVar14 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar81;
        }
        if ((uVar14 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar82;
        }
        if ((uVar14 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar38) = uVar118;
        }
        if (cVar13 < '\0') {
          *(uint *)(param_1 + 0xc + lVar41) = uVar119;
        }
      }
      uVar37 = uVar37 + 0x20;
      uVar14 = (int)uVar16 + 8;
      uVar16 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)(uVar113 & 0xfffffff8));
  }
  uVar113 = (uint)uVar16;
  if ((int)param_5 <= (int)uVar113) {
    return;
  }
  auVar71 = vpshufd_avx(ZEXT416(uVar113),0);
  auVar55._16_16_ = auVar71;
  auVar55._0_16_ = auVar71;
  auVar65 = vpshufd_avx(ZEXT416(param_5),0);
  pauVar1 = (undefined1 (*) [16])(param_2 + uVar16 * 8);
  auVar57 = SUB3216(auVar55 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar141 = SUB3216(auVar55 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar42 = vpcmpgtd_avx(auVar65,auVar141);
  auVar71 = vpcmpgtd_avx(auVar65,auVar57);
  auVar71 = vpand_avx(auVar71,auVar42);
  auVar42 = vpcmpeqd_avx(auVar42,auVar42);
  auVar42 = auVar42 & ~auVar71;
  if ((((SUB161(auVar42 >> 0x1f,0) & 1) == 0 && (SUB161(auVar42 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar42 >> 0x5f,0) & 1) == 0) && -1 < auVar42[0xf]) {
    auVar109._16_16_ = pauVar1[3];
    auVar109._0_16_ = pauVar1[1];
    auVar86._16_16_ = pauVar1[2];
    auVar86._0_16_ = *pauVar1;
    auVar46 = vshufps_avx(auVar86,auVar109,0x88);
    auVar43 = vshufps_avx(auVar86,auVar109,0xdd);
  }
  else {
    auVar71 = vpcmpgtd_avx(auVar65,auVar141);
    auVar42 = vpcmpgtd_avx(auVar65,auVar57);
    auVar84._0_4_ =
         auVar42._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar84._4_4_ = auVar42._4_4_ & _UNK_150b519c4;
    auVar84._8_4_ = auVar42._8_4_ & _UNK_150b519c8;
    auVar84._12_4_ = auVar42._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar84,1);
    vextractps_avx(auVar84,2);
    vextractps_avx(auVar84,3);
    auVar98._0_4_ =
         auVar42._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar98._4_4_ = auVar42._4_4_ & _UNK_150b519e4;
    auVar98._8_4_ = auVar42._8_4_ & _UNK_150b519e8;
    auVar98._12_4_ = auVar42._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar98,1);
    vextractps_avx(auVar98,2);
    vextractps_avx(auVar98,3);
    auVar46 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar71._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar43 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar71._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar98._0_4_))));
  }
  auVar138 = vpslld_avx(auVar46._0_16_,4);
  auVar142 = vpslld_avx(auVar46._16_16_,4);
  auVar10 = vpcmpgtd_avx(auVar65,auVar57);
  auVar12 = vpand_avx(auVar138,auVar10);
  lVar17 = param_1 + auVar12._0_4_;
  lVar18 = param_1 + auVar12._4_4_;
  auVar84 = vpcmpgtd_avx(auVar65,auVar141);
  auVar42 = vpand_avx(auVar142,auVar84);
  lVar20 = param_1 + auVar42._0_4_;
  lVar21 = param_1 + auVar42._4_4_;
  lVar22 = param_1 + auVar42._8_4_;
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar42._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar42._4_4_)),0x10);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + auVar42._8_4_)),0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + auVar42._12_4_)),0x30);
  lVar23 = param_1 + auVar42._12_4_;
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar12._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar12._4_4_)),0x10);
  auVar75._16_16_ = auVar84;
  auVar75._0_16_ = auVar10;
  uVar72 = auVar10._0_4_;
  uVar76 = auVar10._4_4_;
  uVar77 = auVar10._8_4_;
  uVar78 = auVar10._12_4_;
  uVar79 = auVar84._0_4_;
  uVar80 = auVar84._4_4_;
  uVar81 = auVar84._8_4_;
  uVar82 = auVar84._12_4_;
  auVar141 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d50) + lVar20)),
                           ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d54) + lVar21)),0x10);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d58) + lVar22)
                                           ),0x20);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d5c) + lVar23)
                                           ),0x30);
  auVar58 = vpslld_avx(auVar43._16_16_,4);
  auVar114 = vpand_avx(auVar84,auVar58);
  lVar24 = param_1 + auVar114._0_4_;
  auVar84 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar114._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar114._4_4_)),0x10);
  lVar31 = param_1 + auVar114._4_4_;
  auVar98 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d50) + lVar24)),
                          ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d54) + lVar31)),0x10);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_1 + auVar114._8_4_)),0x20);
  lVar32 = param_1 + auVar114._8_4_;
  auVar98 = vinsertps_avx(auVar98,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d58) + lVar32)),
                          0x20);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_1 + auVar114._12_4_)),0x30);
  lVar34 = param_1 + auVar114._12_4_;
  auVar98 = vinsertps_avx(auVar98,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d5c) + lVar34)),
                          0x30);
  auVar114 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar72 & 
                                             ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                             ) + lVar17)),
                           ZEXT416(*(uint *)((ulonglong)(uVar76 & _UNK_150b50d44) + lVar18)),0x10);
  auVar59 = vpslld_avx(auVar43._0_16_,4);
  auVar99 = vpand_avx(auVar10,auVar59);
  lVar35 = param_1 + auVar99._0_4_;
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar99._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar99._4_4_)),0x10);
  lVar36 = param_1 + auVar99._4_4_;
  auVar11 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar72 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar35)),
                          ZEXT416(*(uint *)((ulonglong)(uVar76 & _UNK_150b50d44) + lVar36)),0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + auVar12._8_4_)),0x20);
  lVar38 = param_1 + auVar12._8_4_;
  auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)((ulonglong)(uVar77 & _UNK_150b50d48) + lVar38)
                                           ),0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar99._8_4_)),0x20);
  lVar39 = param_1 + auVar99._8_4_;
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)((ulonglong)(uVar77 & _UNK_150b50d48) + lVar39)),
                          0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + auVar12._12_4_)),0x30);
  lVar40 = param_1 + auVar12._12_4_;
  auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d4c) + lVar40)
                                           ),0x30);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar99._12_4_)),0x30);
  lVar41 = param_1 + auVar99._12_4_;
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d4c) + lVar41)),
                          0x30);
  auVar87._16_16_ = auVar71;
  auVar87._0_16_ = auVar42;
  auVar99._0_4_ = uVar72 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar99._4_4_ = uVar76 & _UNK_150b50d64;
  auVar99._8_4_ = uVar77 & _UNK_150b50d68;
  auVar99._12_4_ = uVar78 & _UNK_150b50d6c;
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d70) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d74) + lVar21)),0x10);
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d70) + lVar24)),
                          ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d74) + lVar31)),0x10);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d78) + lVar22)),
                          0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d78) + lVar32)),
                          0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d7c) + lVar23)),
                          0x30);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d7c) + lVar34)),
                          0x30);
  uVar15 = vextractps_avx(auVar99,1);
  lVar19 = CONCAT44((int)((ulonglong)lVar34 >> 0x20),uVar15);
  uVar14 = vextractps_avx(auVar99,2);
  uVar33 = vextractps_avx(auVar99,3);
  auVar12 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar99._0_4_ + lVar17)),
                          ZEXT416(*(uint *)(lVar19 + lVar18)),0x10);
  auVar115._16_16_ = auVar141;
  auVar115._0_16_ = auVar114;
  auVar141 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar99._0_4_ + lVar35)),
                           ZEXT416(*(uint *)(lVar19 + lVar36)),0x10);
  auVar114 = vinsertps_avx(auVar12,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar38)),0x20);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar39)),0x20);
  auVar114 = vinsertps_avx(auVar114,ZEXT416(*(uint *)((ulonglong)uVar33 + lVar40)),0x30);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)uVar33 + lVar41)),0x30);
  auVar101._16_16_ = auVar71;
  auVar101._0_16_ = auVar114;
  auVar110._16_16_ = auVar84;
  auVar110._0_16_ = auVar10;
  auVar111._16_16_ = auVar98;
  auVar111._0_16_ = auVar11;
  auVar124._16_16_ = auVar42;
  auVar124._0_16_ = auVar141;
  auVar46 = vmaskmovps_avx(auVar75,auVar87);
  auVar43 = vmaskmovps_avx(auVar75,auVar115);
  auVar44 = vmaskmovps_avx(auVar75,auVar101);
  auVar60 = vmaskmovps_avx(auVar75,auVar110);
  auVar67 = vmaskmovps_avx(auVar75,auVar111);
  auVar45 = vmaskmovps_avx(auVar75,auVar124);
  auVar61 = vsubps_avx(auVar46,auVar60);
  auVar85 = vsubps_avx(auVar43,auVar67);
  auVar123 = vsubps_avx(auVar44,auVar45);
  auVar127._0_4_ =
       auVar123._0_4_ * auVar123._0_4_ +
       auVar85._0_4_ * auVar85._0_4_ + auVar61._0_4_ * auVar61._0_4_;
  auVar127._4_4_ =
       auVar123._4_4_ * auVar123._4_4_ +
       auVar85._4_4_ * auVar85._4_4_ + auVar61._4_4_ * auVar61._4_4_;
  auVar127._8_4_ =
       auVar123._8_4_ * auVar123._8_4_ +
       auVar85._8_4_ * auVar85._8_4_ + auVar61._8_4_ * auVar61._8_4_;
  auVar127._12_4_ =
       auVar123._12_4_ * auVar123._12_4_ +
       auVar85._12_4_ * auVar85._12_4_ + auVar61._12_4_ * auVar61._12_4_;
  auVar127._16_4_ =
       auVar123._16_4_ * auVar123._16_4_ +
       auVar85._16_4_ * auVar85._16_4_ + auVar61._16_4_ * auVar61._16_4_;
  auVar127._20_4_ =
       auVar123._20_4_ * auVar123._20_4_ +
       auVar85._20_4_ * auVar85._20_4_ + auVar61._20_4_ * auVar61._20_4_;
  auVar127._24_4_ =
       auVar123._24_4_ * auVar123._24_4_ +
       auVar85._24_4_ * auVar85._24_4_ + auVar61._24_4_ * auVar61._24_4_;
  auVar127._28_4_ =
       auVar123._28_4_ * auVar123._28_4_ +
       auVar85._28_4_ * auVar85._28_4_ + auVar61._28_4_ * auVar61._28_4_;
  auVar100 = vsqrtps_avx(auVar127);
  auVar74 = vcmpps_avx(auVar127,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar61 = vdivps_avx(auVar61,auVar100);
  auVar61 = vblendvps_avx(auVar61,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar74);
  auVar61 = vmaskmovps_avx(auVar75,auVar61);
  auVar85 = vdivps_avx(auVar85,auVar100);
  uVar33 = auVar74._0_4_;
  auVar116._0_4_ = ~uVar33 & auVar85._0_4_;
  uVar118 = auVar74._4_4_;
  auVar116._4_4_ = ~uVar118 & auVar85._4_4_;
  uVar119 = auVar74._8_4_;
  auVar116._8_4_ = ~uVar119 & auVar85._8_4_;
  uVar120 = auVar74._12_4_;
  auVar116._12_4_ = ~uVar120 & auVar85._12_4_;
  uVar121 = auVar74._16_4_;
  auVar116._16_4_ = ~uVar121 & auVar85._16_4_;
  uVar122 = auVar74._20_4_;
  auVar116._20_4_ = ~uVar122 & auVar85._20_4_;
  uVar135 = auVar74._24_4_;
  auVar116._24_4_ = ~uVar135 & auVar85._24_4_;
  uVar97 = auVar74._28_4_;
  auVar116._28_4_ = ~uVar97 & auVar85._28_4_;
  auVar74 = vmaskmovps_avx(auVar75,auVar116);
  auVar85 = vdivps_avx(auVar123,auVar100);
  auVar117._0_4_ = ~uVar33 & auVar85._0_4_;
  auVar117._4_4_ = ~uVar118 & auVar85._4_4_;
  auVar117._8_4_ = ~uVar119 & auVar85._8_4_;
  auVar117._12_4_ = ~uVar120 & auVar85._12_4_;
  auVar117._16_4_ = ~uVar121 & auVar85._16_4_;
  auVar117._20_4_ = ~uVar122 & auVar85._20_4_;
  auVar117._24_4_ = ~uVar135 & auVar85._24_4_;
  auVar117._28_4_ = ~uVar97 & auVar85._28_4_;
  auVar85 = vmaskmovps_avx(auVar75,auVar117);
  auVar114._0_4_ = uVar72 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar114._4_4_ = uVar76 & _UNK_150b50d84;
  auVar114._8_4_ = uVar77 & _UNK_150b50d88;
  auVar114._12_4_ = uVar78 & _UNK_150b50d8c;
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d90) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d94) + lVar21)),0x10);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d98) + lVar22)),
                          0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d9c) + lVar23)),
                          0x30);
  uVar15 = vextractps_avx(auVar114,1);
  lVar20 = CONCAT44((int)((ulonglong)lVar18 >> 0x20),uVar15);
  uVar14 = vextractps_avx(auVar114,2);
  uVar15 = vextractps_avx(auVar114,3);
  lVar21 = CONCAT44((int)((ulonglong)lVar41 >> 0x20),uVar15);
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar114._0_4_ + lVar17)),
                          ZEXT416(*(uint *)(lVar20 + lVar18)),0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar38)),0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(lVar21 + lVar40)),0x30);
  auVar165._16_16_ = auVar71;
  auVar165._0_16_ = auVar42;
  auVar141 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d90) + lVar24)),
                           ZEXT416(*(uint *)((ulonglong)(uVar80 & _UNK_150b50d94) + lVar31)),0x10);
  auVar88._0_4_ = ~uVar33 & auVar100._0_4_;
  auVar88._4_4_ = ~uVar118 & auVar100._4_4_;
  auVar88._8_4_ = ~uVar119 & auVar100._8_4_;
  auVar88._12_4_ = ~uVar120 & auVar100._12_4_;
  auVar88._16_4_ = ~uVar121 & auVar100._16_4_;
  auVar88._20_4_ = ~uVar122 & auVar100._20_4_;
  auVar88._24_4_ = ~uVar135 & auVar100._24_4_;
  auVar88._28_4_ = ~uVar97 & auVar100._28_4_;
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d98) + lVar32)
                                           ),0x20);
  auVar100 = vmaskmovps_avx(auVar75,*(undefined1 (*) [32])(param_3 + (int)(uVar113 << 2)));
  auVar100 = vsubps_avx(auVar88,auVar100);
  auVar141 = vinsertps_avx(auVar141,ZEXT416(*(uint *)((ulonglong)(uVar82 & _UNK_150b50d9c) + lVar34)
                                           ),0x30);
  auVar84 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar114._0_4_ + lVar35)),
                          ZEXT416(*(uint *)(lVar20 + lVar36)),0x10);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar39)),0x20);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(lVar21 + lVar41)),0x30);
  local_240 = auVar61._0_4_;
  fStack_23c = auVar61._4_4_;
  fStack_238 = auVar61._8_4_;
  fStack_234 = auVar61._12_4_;
  fStack_230 = auVar61._16_4_;
  fStack_22c = auVar61._20_4_;
  fStack_228 = auVar61._24_4_;
  fStack_224 = auVar61._28_4_;
  fVar83 = auVar100._0_4_;
  fVar90 = auVar100._4_4_;
  fVar91 = auVar100._8_4_;
  fVar92 = auVar100._12_4_;
  fVar93 = auVar100._16_4_;
  fVar94 = auVar100._20_4_;
  fVar95 = auVar100._24_4_;
  fVar96 = auVar100._28_4_;
  local_220 = auVar74._0_4_;
  fStack_21c = auVar74._4_4_;
  fStack_218 = auVar74._8_4_;
  fStack_214 = auVar74._12_4_;
  fStack_210 = auVar74._16_4_;
  fStack_20c = auVar74._20_4_;
  fStack_208 = auVar74._24_4_;
  fStack_204 = auVar74._28_4_;
  local_200 = auVar85._0_4_;
  fStack_1fc = auVar85._4_4_;
  fStack_1f8 = auVar85._8_4_;
  fStack_1f4 = auVar85._12_4_;
  fStack_1f0 = auVar85._16_4_;
  fStack_1ec = auVar85._20_4_;
  fStack_1e8 = auVar85._24_4_;
  fStack_1e4 = auVar85._28_4_;
  auVar89._16_16_ = auVar141;
  auVar89._0_16_ = auVar84;
  auVar66 = vpermilps_avx(auVar66,0);
  fVar125 = auVar66._0_4_;
  auVar128._0_4_ = fVar125 * fVar83 * local_240;
  fVar129 = auVar66._4_4_;
  auVar128._4_4_ = fVar129 * fVar90 * fStack_23c;
  fVar130 = auVar66._8_4_;
  auVar128._8_4_ = fVar130 * fVar91 * fStack_238;
  fVar131 = auVar66._12_4_;
  auVar128._12_4_ = fVar131 * fVar92 * fStack_234;
  auVar128._16_4_ = fVar125 * fVar93 * fStack_230;
  auVar128._20_4_ = fVar129 * fVar94 * fStack_22c;
  auVar128._24_4_ = fVar130 * fVar95 * fStack_228;
  auVar128._28_4_ = fVar131 * fVar96 * fStack_224;
  fVar2 = auVar84._0_4_;
  fVar154 = auVar42._0_4_;
  auVar153._0_4_ = fVar154 + fVar2;
  fVar3 = auVar84._4_4_;
  fVar157 = auVar42._4_4_;
  auVar153._4_4_ = fVar157 + fVar3;
  fVar4 = auVar84._8_4_;
  fVar158 = auVar42._8_4_;
  auVar153._8_4_ = fVar158 + fVar4;
  fVar5 = auVar84._12_4_;
  fVar159 = auVar42._12_4_;
  auVar153._12_4_ = fVar159 + fVar5;
  fVar6 = auVar141._0_4_;
  fVar160 = auVar71._0_4_;
  auVar153._16_4_ = fVar160 + fVar6;
  fVar7 = auVar141._4_4_;
  fVar161 = auVar71._4_4_;
  auVar153._20_4_ = fVar161 + fVar7;
  fVar8 = auVar141._8_4_;
  fVar162 = auVar71._8_4_;
  auVar153._24_4_ = fVar162 + fVar8;
  fVar9 = auVar141._12_4_;
  fVar163 = auVar71._12_4_;
  auVar153._28_4_ = fVar163 + fVar9;
  auVar85 = vdivps_avx(auVar128,auVar153);
  auVar156._0_4_ = fVar125 * fVar83 * local_220;
  auVar156._4_4_ = fVar129 * fVar90 * fStack_21c;
  auVar156._8_4_ = fVar130 * fVar91 * fStack_218;
  auVar156._12_4_ = fVar131 * fVar92 * fStack_214;
  auVar156._16_4_ = fVar125 * fVar93 * fStack_210;
  auVar156._20_4_ = fVar129 * fVar94 * fStack_20c;
  auVar156._24_4_ = fVar130 * fVar95 * fStack_208;
  auVar156._28_4_ = fVar131 * fVar96 * fStack_204;
  auVar100 = vdivps_avx(auVar156,auVar153);
  auVar62._0_4_ = fVar125 * fVar83 * local_200;
  auVar62._4_4_ = fVar129 * fVar90 * fStack_1fc;
  auVar62._8_4_ = fVar130 * fVar91 * fStack_1f8;
  auVar62._12_4_ = fVar131 * fVar92 * fStack_1f4;
  auVar62._16_4_ = fVar125 * fVar93 * fStack_1f0;
  auVar62._20_4_ = fVar129 * fVar94 * fStack_1ec;
  auVar62._24_4_ = fVar130 * fVar95 * fStack_1e8;
  auVar62._28_4_ = fVar131 * fVar96 * fStack_1e4;
  auVar123 = vdivps_avx(auVar62,auVar153);
  auVar74 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar61 = vcmpps_avx(auVar74,auVar89,0);
  auVar74 = vcmpps_avx(auVar165,auVar74,0);
  uVar113 = auVar61._0_4_ & auVar74._0_4_;
  uVar14 = auVar61._4_4_ & auVar74._4_4_;
  uVar33 = auVar61._8_4_ & auVar74._8_4_;
  uVar118 = auVar61._12_4_ & auVar74._12_4_;
  uVar119 = auVar61._16_4_ & auVar74._16_4_;
  uVar120 = auVar61._20_4_ & auVar74._20_4_;
  uVar121 = auVar61._24_4_ & auVar74._24_4_;
  uVar122 = auVar61._28_4_ & auVar74._28_4_;
  fVar140 = (float)(~uVar113 & auVar85._0_4_);
  fVar145 = (float)(~uVar14 & auVar85._4_4_);
  fVar146 = (float)(~uVar33 & auVar85._8_4_);
  fVar147 = (float)(~uVar118 & auVar85._12_4_);
  fVar148 = (float)(~uVar119 & auVar85._16_4_);
  fVar149 = (float)(~uVar120 & auVar85._20_4_);
  fVar150 = (float)(~uVar121 & auVar85._24_4_);
  fVar151 = (float)(~uVar122 & auVar85._28_4_);
  fVar125 = (float)(~uVar113 & auVar100._0_4_);
  fVar129 = (float)(~uVar14 & auVar100._4_4_);
  fVar130 = (float)(~uVar33 & auVar100._8_4_);
  fVar131 = (float)(~uVar118 & auVar100._12_4_);
  fVar132 = (float)(~uVar119 & auVar100._16_4_);
  fVar133 = (float)(~uVar120 & auVar100._20_4_);
  fVar134 = (float)(~uVar121 & auVar100._24_4_);
  fVar136 = (float)(~uVar122 & auVar100._28_4_);
  fVar83 = (float)(~uVar113 & auVar123._0_4_);
  fVar90 = (float)(~uVar14 & auVar123._4_4_);
  fVar91 = (float)(~uVar33 & auVar123._8_4_);
  fVar92 = (float)(~uVar118 & auVar123._12_4_);
  fVar93 = (float)(~uVar119 & auVar123._16_4_);
  fVar94 = (float)(~uVar120 & auVar123._20_4_);
  fVar95 = (float)(~uVar121 & auVar123._24_4_);
  fVar96 = (float)(~uVar122 & auVar123._28_4_);
  auVar74 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar61 = vcmpps_avx(auVar74,auVar165,1);
  auVar63._0_4_ = auVar61._0_4_ & uVar72;
  auVar63._4_4_ = auVar61._4_4_ & uVar76;
  auVar63._8_4_ = auVar61._8_4_ & uVar77;
  auVar63._12_4_ = auVar61._12_4_ & uVar78;
  auVar63._16_4_ = auVar61._16_4_ & uVar79;
  auVar63._20_4_ = auVar61._20_4_ & uVar80;
  auVar63._24_4_ = auVar61._24_4_ & uVar81;
  auVar63._28_4_ = auVar61._28_4_ & uVar82;
  uVar113 = vmovmskps_avx(auVar63);
  if (uVar113 == 0) goto LAB_140366e55;
  auVar64._0_4_ = fVar154 * fVar140;
  auVar64._4_4_ = fVar157 * fVar145;
  auVar64._8_4_ = fVar158 * fVar146;
  auVar64._12_4_ = fVar159 * fVar147;
  auVar64._16_4_ = fVar160 * fVar148;
  auVar64._20_4_ = fVar161 * fVar149;
  auVar64._24_4_ = fVar162 * fVar150;
  auVar64._28_4_ = fVar163 * fVar151;
  auVar46 = vsubps_avx(auVar46,auVar64);
  cVar13 = (char)uVar113;
  iVar73 = auVar138._0_4_;
  auVar66 = auVar46._0_16_;
  auVar98 = auVar46._16_16_;
  iVar25 = auVar138._4_4_;
  iVar26 = auVar138._8_4_;
  iVar27 = auVar138._12_4_;
  iVar137 = auVar142._0_4_;
  iVar28 = auVar142._4_4_;
  iVar29 = auVar142._8_4_;
  iVar30 = auVar142._12_4_;
  if ((uVar113 & 1) == 0) {
    if ((uVar113 & 2) == 0) goto LAB_140366d1a;
LAB_140367070:
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + iVar25) = uVar15;
    if ((uVar113 & 4) != 0) goto LAB_140367089;
LAB_140366d23:
    if ((uVar113 & 8) == 0) goto LAB_140366d2c;
LAB_1403670a2:
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + iVar27) = uVar15;
    if ((uVar113 & 0x10) != 0) goto LAB_1403670c7;
LAB_140366d41:
    if ((uVar113 & 0x20) == 0) goto LAB_140366d4a;
LAB_1403670de:
    uVar15 = vextractps_avx(auVar98,1);
    *(undefined4 *)(param_1 + iVar28) = uVar15;
    if ((uVar113 & 0x40) != 0) goto LAB_1403670f7;
LAB_140366d53:
    auVar144._0_4_ = fVar154 * fVar125;
    auVar144._4_4_ = fVar157 * fVar129;
    auVar144._8_4_ = fVar158 * fVar130;
    auVar144._12_4_ = fVar159 * fVar131;
    auVar144._16_4_ = fVar160 * fVar132;
    auVar144._20_4_ = fVar161 * fVar133;
    auVar144._24_4_ = fVar162 * fVar134;
    auVar144._28_4_ = fVar163 * fVar136;
    if (-1 < cVar13) goto LAB_140366d60;
LAB_140367114:
    uVar15 = vextractps_avx(auVar98,3);
    *(undefined4 *)(param_1 + iVar30) = uVar15;
    auVar46 = vsubps_avx(auVar43,auVar144);
    if ((uVar113 & 1) != 0) goto LAB_140367132;
LAB_140366d6e:
    if ((uVar113 & 2) == 0) goto LAB_140366d77;
LAB_14036714a:
    uVar15 = vextractps_avx(auVar46._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar15;
    if ((uVar113 & 4) != 0) goto LAB_140367164;
LAB_140366d80:
    if ((uVar113 & 8) == 0) goto LAB_140366d89;
LAB_14036717e:
    uVar15 = vextractps_avx(auVar46._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar15;
    auVar66 = auVar46._16_16_;
    if ((uVar113 & 0x10) != 0) goto LAB_14036719e;
LAB_140366d98:
    if ((uVar113 & 0x20) == 0) goto LAB_140366da1;
LAB_1403671b6:
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar15;
    if ((uVar113 & 0x40) != 0) goto LAB_1403671d0;
LAB_140366daa:
    auVar112._0_4_ = fVar154 * fVar83;
    auVar112._4_4_ = fVar157 * fVar90;
    auVar112._8_4_ = fVar158 * fVar91;
    auVar112._12_4_ = fVar159 * fVar92;
    auVar112._16_4_ = fVar160 * fVar93;
    auVar112._20_4_ = fVar161 * fVar94;
    auVar112._24_4_ = fVar162 * fVar95;
    auVar112._28_4_ = fVar163 * fVar96;
    if (-1 < cVar13) goto LAB_140366db7;
LAB_1403671ee:
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar30) = uVar15;
    auVar46 = vsubps_avx(auVar44,auVar112);
    if ((uVar113 & 1) != 0) goto LAB_14036720c;
LAB_140366dc4:
    if ((uVar113 & 2) == 0) goto LAB_140366dcd;
LAB_140367224:
    uVar15 = vextractps_avx(auVar46._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar15;
    if ((uVar113 & 4) != 0) goto LAB_14036723e;
LAB_140366dd6:
    if ((uVar113 & 8) == 0) goto LAB_140366ddf;
LAB_140367258:
    uVar15 = vextractps_avx(auVar46._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar15;
    auVar66 = auVar46._16_16_;
  }
  else {
    *(int *)(param_1 + iVar73) = auVar46._0_4_;
    if ((uVar113 & 2) != 0) goto LAB_140367070;
LAB_140366d1a:
    if ((uVar113 & 4) == 0) goto LAB_140366d23;
LAB_140367089:
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + iVar26) = uVar15;
    if ((uVar113 & 8) != 0) goto LAB_1403670a2;
LAB_140366d2c:
    if ((uVar113 & 0x10) == 0) goto LAB_140366d41;
LAB_1403670c7:
    *(int *)(param_1 + iVar137) = auVar46._16_4_;
    if ((uVar113 & 0x20) != 0) goto LAB_1403670de;
LAB_140366d4a:
    if ((uVar113 & 0x40) == 0) goto LAB_140366d53;
LAB_1403670f7:
    uVar15 = vextractps_avx(auVar98,2);
    *(undefined4 *)(param_1 + iVar29) = uVar15;
    auVar144._0_4_ = fVar154 * fVar125;
    auVar144._4_4_ = fVar157 * fVar129;
    auVar144._8_4_ = fVar158 * fVar130;
    auVar144._12_4_ = fVar159 * fVar131;
    auVar144._16_4_ = fVar160 * fVar132;
    auVar144._20_4_ = fVar161 * fVar133;
    auVar144._24_4_ = fVar162 * fVar134;
    auVar144._28_4_ = fVar163 * fVar136;
    if (cVar13 < '\0') goto LAB_140367114;
LAB_140366d60:
    auVar46 = vsubps_avx(auVar43,auVar144);
    if ((uVar113 & 1) == 0) goto LAB_140366d6e;
LAB_140367132:
    *(int *)(param_1 + 4 + (longlong)iVar73) = auVar46._0_4_;
    if ((uVar113 & 2) != 0) goto LAB_14036714a;
LAB_140366d77:
    if ((uVar113 & 4) == 0) goto LAB_140366d80;
LAB_140367164:
    uVar15 = vextractps_avx(auVar46._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar15;
    if ((uVar113 & 8) != 0) goto LAB_14036717e;
LAB_140366d89:
    auVar66 = auVar46._16_16_;
    if ((uVar113 & 0x10) == 0) goto LAB_140366d98;
LAB_14036719e:
    *(int *)(param_1 + 4 + (longlong)iVar137) = auVar66._0_4_;
    if ((uVar113 & 0x20) != 0) goto LAB_1403671b6;
LAB_140366da1:
    if ((uVar113 & 0x40) == 0) goto LAB_140366daa;
LAB_1403671d0:
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar15;
    auVar112._0_4_ = fVar154 * fVar83;
    auVar112._4_4_ = fVar157 * fVar90;
    auVar112._8_4_ = fVar158 * fVar91;
    auVar112._12_4_ = fVar159 * fVar92;
    auVar112._16_4_ = fVar160 * fVar93;
    auVar112._20_4_ = fVar161 * fVar94;
    auVar112._24_4_ = fVar162 * fVar95;
    auVar112._28_4_ = fVar163 * fVar96;
    if (cVar13 < '\0') goto LAB_1403671ee;
LAB_140366db7:
    auVar46 = vsubps_avx(auVar44,auVar112);
    if ((uVar113 & 1) == 0) goto LAB_140366dc4;
LAB_14036720c:
    *(int *)(param_1 + 8 + (longlong)iVar73) = auVar46._0_4_;
    if ((uVar113 & 2) != 0) goto LAB_140367224;
LAB_140366dcd:
    if ((uVar113 & 4) == 0) goto LAB_140366dd6;
LAB_14036723e:
    uVar15 = vextractps_avx(auVar46._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar15;
    if ((uVar113 & 8) != 0) goto LAB_140367258;
LAB_140366ddf:
    auVar66 = auVar46._16_16_;
  }
  if ((uVar113 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar137) = auVar66._0_4_;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar30) = uVar15;
  }
  if ((uVar113 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar73) = fVar154;
  }
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar15;
  }
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar137) = fVar160;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar28) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar15;
  }
LAB_140366e55:
  auVar66 = vpcmpgtd_avx(auVar65,auVar57);
  auVar46 = vcmpps_avx(auVar74,auVar89,1);
  auVar56._0_4_ = auVar46._0_4_ & auVar66._0_4_;
  auVar56._4_4_ = auVar46._4_4_ & auVar66._4_4_;
  auVar56._8_4_ = auVar46._8_4_ & auVar66._8_4_;
  auVar56._12_4_ = auVar46._12_4_ & auVar66._12_4_;
  auVar56._16_4_ = auVar46._16_4_ & uVar79;
  auVar56._20_4_ = auVar46._20_4_ & uVar80;
  auVar56._24_4_ = auVar46._24_4_ & uVar81;
  auVar56._28_4_ = auVar46._28_4_ & uVar82;
  uVar113 = vmovmskps_avx(auVar56);
  if (uVar113 == 0) {
    return;
  }
  local_340 = auVar59._0_4_;
  iStack_33c = auVar59._4_4_;
  iStack_338 = auVar59._8_4_;
  iStack_334 = auVar59._12_4_;
  local_3b0 = auVar58._0_4_;
  iStack_3ac = auVar58._4_4_;
  iStack_3a8 = auVar58._8_4_;
  iStack_3a4 = auVar58._12_4_;
  local_360 = auVar60._0_4_;
  fStack_35c = auVar60._4_4_;
  fStack_358 = auVar60._8_4_;
  fStack_354 = auVar60._12_4_;
  fStack_350 = auVar60._16_4_;
  fStack_34c = auVar60._20_4_;
  fStack_348 = auVar60._24_4_;
  fStack_344 = auVar60._28_4_;
  auVar66._0_4_ = fVar140 * fVar2 + local_360;
  auVar66._4_4_ = fVar145 * fVar3 + fStack_35c;
  auVar66._8_4_ = fVar146 * fVar4 + fStack_358;
  auVar66._12_4_ = fVar147 * fVar5 + fStack_354;
  auVar68._16_4_ = fVar148 * fVar6 + fStack_350;
  auVar68._0_16_ = auVar66;
  auVar68._20_4_ = fVar149 * fVar7 + fStack_34c;
  auVar68._24_4_ = fVar150 * fVar8 + fStack_348;
  auVar68._28_4_ = fVar151 * fVar9 + fStack_344;
  cVar13 = (char)uVar113;
  auVar71 = auVar68._16_16_;
  local_320 = auVar67._0_4_;
  fStack_31c = auVar67._4_4_;
  fStack_318 = auVar67._8_4_;
  fStack_314 = auVar67._12_4_;
  fStack_310 = auVar67._16_4_;
  fStack_30c = auVar67._20_4_;
  fStack_308 = auVar67._24_4_;
  fStack_304 = auVar67._28_4_;
  local_300 = auVar45._0_4_;
  fStack_2fc = auVar45._4_4_;
  fStack_2f8 = auVar45._8_4_;
  fStack_2f4 = auVar45._12_4_;
  fStack_2f0 = auVar45._16_4_;
  fStack_2ec = auVar45._20_4_;
  fStack_2e8 = auVar45._24_4_;
  fStack_2e4 = auVar45._28_4_;
  if ((uVar113 & 1) != 0) {
    *(float *)(param_1 + local_340) = auVar66._0_4_;
  }
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + iStack_33c) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + iStack_338) = uVar15;
  }
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + iStack_334) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(float *)(param_1 + local_3b0) = auVar68._16_4_;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + iStack_3ac) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + iStack_3a8) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + iStack_3a4) = uVar15;
    auVar69._0_4_ = fVar125 * fVar2 + local_320;
    auVar69._4_4_ = fVar129 * fVar3 + fStack_31c;
    auVar69._8_4_ = fVar130 * fVar4 + fStack_318;
    auVar69._12_4_ = fVar131 * fVar5 + fStack_314;
    auVar69._16_4_ = fVar132 * fVar6 + fStack_310;
    auVar69._20_4_ = fVar133 * fVar7 + fStack_30c;
    auVar69._24_4_ = fVar134 * fVar8 + fStack_308;
    auVar69._28_4_ = fVar136 * fVar9 + fStack_304;
  }
  else {
    auVar69._0_4_ = fVar125 * fVar2 + local_320;
    auVar69._4_4_ = fVar129 * fVar3 + fStack_31c;
    auVar69._8_4_ = fVar130 * fVar4 + fStack_318;
    auVar69._12_4_ = fVar131 * fVar5 + fStack_314;
    auVar69._16_4_ = fVar132 * fVar6 + fStack_310;
    auVar69._20_4_ = fVar133 * fVar7 + fStack_30c;
    auVar69._24_4_ = fVar134 * fVar8 + fStack_308;
    auVar69._28_4_ = fVar136 * fVar9 + fStack_304;
  }
  if ((uVar113 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_340) = auVar69._0_4_;
  }
  auVar66 = auVar69._0_16_;
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_33c) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_338) = uVar15;
  }
  auVar71 = auVar69._16_16_;
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_334) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_3b0) = auVar69._16_4_;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3ac) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3a8) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3a4) = uVar15;
    auVar70._0_4_ = fVar83 * fVar2 + local_300;
    auVar70._4_4_ = fVar90 * fVar3 + fStack_2fc;
    auVar70._8_4_ = fVar91 * fVar4 + fStack_2f8;
    auVar70._12_4_ = fVar92 * fVar5 + fStack_2f4;
    auVar70._16_4_ = fVar93 * fVar6 + fStack_2f0;
    auVar70._20_4_ = fVar94 * fVar7 + fStack_2ec;
    auVar70._24_4_ = fVar95 * fVar8 + fStack_2e8;
    auVar70._28_4_ = fVar96 * fVar9 + fStack_2e4;
  }
  else {
    auVar70._0_4_ = fVar83 * fVar2 + local_300;
    auVar70._4_4_ = fVar90 * fVar3 + fStack_2fc;
    auVar70._8_4_ = fVar91 * fVar4 + fStack_2f8;
    auVar70._12_4_ = fVar92 * fVar5 + fStack_2f4;
    auVar70._16_4_ = fVar93 * fVar6 + fStack_2f0;
    auVar70._20_4_ = fVar94 * fVar7 + fStack_2ec;
    auVar70._24_4_ = fVar95 * fVar8 + fStack_2e8;
    auVar70._28_4_ = fVar96 * fVar9 + fStack_2e4;
  }
  if ((uVar113 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_340) = auVar70._0_4_;
  }
  auVar66 = auVar70._0_16_;
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_33c) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_338) = uVar15;
  }
  auVar71 = auVar70._16_16_;
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_334) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_3b0) = auVar70._16_4_;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3ac) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3a8) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3a4) = uVar15;
  }
  if ((uVar113 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_340) = fVar2;
  }
  if ((uVar113 & 2) != 0) {
    uVar15 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_33c) = uVar15;
  }
  if ((uVar113 & 4) != 0) {
    uVar15 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_338) = uVar15;
  }
  if ((uVar113 & 8) != 0) {
    uVar15 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_334) = uVar15;
  }
  if ((uVar113 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_3b0) = fVar6;
  }
  if ((uVar113 & 0x20) != 0) {
    uVar15 = vextractps_avx(auVar141,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3ac) = uVar15;
  }
  if ((uVar113 & 0x40) != 0) {
    uVar15 = vextractps_avx(auVar141,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3a8) = uVar15;
  }
  if (cVar13 < '\0') {
    uVar15 = vextractps_avx(auVar141,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3a4) = uVar15;
  }
  return;
}

// ApplySpringConstraintsWithWeightMaps_avx @ 140367700

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraintsWithWeightMaps_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar42 [32];
  undefined1 auVar41 [16];
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
  undefined1 auVar54 [16];
  undefined1 auVar53 [32];
  undefined1 auVar55 [16];
  undefined1 auVar61 [32];
  undefined1 auVar56 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar60 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  uint uVar78;
  undefined1 auVar79 [16];
  uint uVar84;
  uint uVar85;
  uint uVar87;
  uint uVar89;
  uint uVar91;
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  uint uVar86;
  uint uVar93;
  undefined1 auVar82 [32];
  uint uVar88;
  uint uVar90;
  uint uVar92;
  uint uVar94;
  undefined1 auVar83 [32];
  undefined1 auVar95 [16];
  undefined1 auVar97 [32];
  undefined1 auVar96 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  float fVar106;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar107 [32];
  float fVar117;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  float fVar120;
  uint uVar121;
  float fVar124;
  float fVar125;
  uint uVar126;
  float fVar127;
  uint uVar128;
  float fVar129;
  uint uVar130;
  float fVar131;
  uint uVar132;
  float fVar133;
  uint uVar134;
  float fVar135;
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  uint uVar136;
  float fVar137;
  float fVar144;
  undefined1 auVar138 [16];
  float fVar142;
  float fVar143;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar139 [32];
  float fVar148;
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  float fVar149;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar159 [32];
  uint uVar162;
  uint uVar163;
  uint uVar164;
  undefined1 auVar160 [32];
  uint uVar165;
  undefined1 auVar161 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [16];
  undefined1 auVar168 [32];
  int local_430;
  int iStack_42c;
  int iStack_428;
  int iStack_424;
  int local_3e0;
  int iStack_3dc;
  int iStack_3d8;
  int iStack_3d4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float local_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
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
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  
  uVar121 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar121 = param_6;
  }
  if ((int)(uVar121 & 0xfffffff8) < 1) {
    uVar30 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar29 = 0;
    uVar30 = 0;
    do {
      auVar61._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar29 * 2);
      auVar61._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar29 * 2);
      auVar42._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar29 * 2);
      auVar42._0_16_ = *(undefined1 (*) [16])(param_2 + uVar29 * 2);
      auVar43 = vshufps_avx(auVar42,auVar61,0x88);
      auVar42 = vshufps_avx(auVar42,auVar61,0xdd);
      auVar40 = vpslld_avx(auVar43._16_16_,4);
      auVar55 = vpslld_avx(auVar43._0_16_,4);
      lVar37 = (longlong)auVar55._0_4_;
      lVar25 = (longlong)auVar55._4_4_;
      lVar27 = (longlong)auVar55._8_4_;
      lVar35 = (longlong)auVar55._12_4_;
      lVar33 = (longlong)auVar40._0_4_;
      lVar31 = (longlong)auVar40._4_4_;
      lVar23 = (longlong)auVar40._8_4_;
      lVar19 = (longlong)auVar40._12_4_;
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + lVar31)),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + lVar23)),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + lVar19)),0x30);
      auVar55 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar37)),
                              ZEXT416(*(uint *)(param_1 + lVar25)),0x10);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_1 + lVar35)),0x30);
      auVar168._16_16_ = auVar40;
      auVar168._0_16_ = auVar55;
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 4 + lVar19)),0x30);
      auVar55 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar37)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x10);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x30);
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x20);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + 8 + lVar19)),0x30);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar37)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x10);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar166._16_16_ = auVar40;
      auVar166._0_16_ = auVar55;
      auVar40 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x30);
      auVar118._16_16_ = auVar41;
      auVar118._0_16_ = auVar40;
      uVar21 = *(uint *)(param_1 + 0xc + lVar37);
      uVar126 = *(uint *)(param_1 + 0xc + lVar25);
      uVar128 = *(uint *)(param_1 + 0xc + lVar27);
      uVar88 = *(uint *)(param_1 + 0xc + lVar35);
      uVar90 = *(uint *)(param_1 + 0xc + lVar33);
      uVar92 = *(uint *)(param_1 + 0xc + lVar31);
      uVar94 = *(uint *)(param_1 + 0xc + lVar23);
      uVar130 = *(uint *)(param_1 + 0xc + lVar19);
      auVar40 = vinsertps_avx(ZEXT416(uVar90),ZEXT416(uVar92),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(uVar94),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(uVar130),0x30);
      auVar55 = vinsertps_avx(ZEXT416(uVar21),ZEXT416(uVar126),0x10);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(uVar128),0x20);
      auVar55 = vinsertps_avx(auVar55,ZEXT416(uVar88),0x30);
      auVar139._16_16_ = auVar40;
      auVar139._0_16_ = auVar55;
      auVar41 = vpslld_avx(auVar42._16_16_,4);
      auVar56 = vpslld_avx(auVar42._0_16_,4);
      lVar36 = (longlong)auVar56._0_4_;
      lVar39 = (longlong)auVar56._4_4_;
      lVar38 = (longlong)auVar56._8_4_;
      lVar26 = (longlong)auVar56._12_4_;
      lVar28 = (longlong)auVar41._0_4_;
      lVar34 = (longlong)auVar41._4_4_;
      lVar32 = (longlong)auVar41._8_4_;
      lVar24 = (longlong)auVar41._12_4_;
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + lVar34)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar32)),0x20);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar24)),0x30);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + lVar39)),0x10);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + lVar38)),0x20);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + lVar26)),0x30);
      auVar97._16_16_ = auVar41;
      auVar97._0_16_ = auVar56;
      auVar54 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar34)),0x10);
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 4 + lVar32)),0x20);
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x30);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x20);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_1 + 4 + lVar26)),0x30);
      auVar80._16_16_ = auVar54;
      auVar80._0_16_ = auVar13;
      auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar34)),0x10);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 8 + lVar32)),0x20);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x30);
      auVar95 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x10);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x20);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar26)),0x30);
      auVar73._16_16_ = auVar14;
      auVar73._0_16_ = auVar95;
      auVar43 = vsubps_avx(auVar168,auVar97);
      auVar42 = vsubps_avx(auVar166,auVar80);
      auVar73 = vsubps_avx(auVar118,auVar73);
      auVar62._0_4_ =
           auVar43._0_4_ * auVar43._0_4_ + auVar42._0_4_ * auVar42._0_4_ +
           auVar73._0_4_ * auVar73._0_4_;
      auVar62._4_4_ =
           auVar43._4_4_ * auVar43._4_4_ + auVar42._4_4_ * auVar42._4_4_ +
           auVar73._4_4_ * auVar73._4_4_;
      auVar62._8_4_ =
           auVar43._8_4_ * auVar43._8_4_ + auVar42._8_4_ * auVar42._8_4_ +
           auVar73._8_4_ * auVar73._8_4_;
      auVar62._12_4_ =
           auVar43._12_4_ * auVar43._12_4_ + auVar42._12_4_ * auVar42._12_4_ +
           auVar73._12_4_ * auVar73._12_4_;
      auVar62._16_4_ =
           auVar43._16_4_ * auVar43._16_4_ + auVar42._16_4_ * auVar42._16_4_ +
           auVar73._16_4_ * auVar73._16_4_;
      auVar62._20_4_ =
           auVar43._20_4_ * auVar43._20_4_ + auVar42._20_4_ * auVar42._20_4_ +
           auVar73._20_4_ * auVar73._20_4_;
      auVar62._24_4_ =
           auVar43._24_4_ * auVar43._24_4_ + auVar42._24_4_ * auVar42._24_4_ +
           auVar73._24_4_ * auVar73._24_4_;
      auVar62._28_4_ =
           auVar43._28_4_ * auVar43._28_4_ + auVar42._28_4_ * auVar42._28_4_ +
           auVar73._28_4_ * auVar73._28_4_;
      auVar107._16_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + (uVar29 & 0xffffffff));
      auVar107._0_16_ = *(undefined1 (*) [16])(param_3 + (uVar29 & 0xffffffff));
      uVar132 = *(uint *)(param_1 + 0xc + lVar28);
      uVar134 = *(uint *)(param_1 + 0xc + lVar34);
      uVar136 = *(uint *)(param_1 + 0xc + lVar32);
      auVar60 = vinsertps_avx(ZEXT416(uVar132),ZEXT416(uVar134),0x10);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(uVar136),0x20);
      uVar162 = *(uint *)(param_1 + 0xc + lVar24);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(uVar162),0x30);
      uVar163 = *(uint *)(param_1 + 0xc + lVar36);
      uVar164 = *(uint *)(param_1 + 0xc + lVar39);
      uVar165 = *(uint *)(param_1 + 0xc + lVar38);
      auVar15 = vinsertps_avx(ZEXT416(uVar163),ZEXT416(uVar164),0x10);
      auVar74 = vsqrtps_avx(auVar62);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(uVar165),0x20);
      auVar43 = vdivps_avx(auVar43,auVar74);
      auVar61 = vdivps_avx(auVar42,auVar74);
      uVar2 = *(uint *)(param_1 + 0xc + lVar26);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(uVar2),0x30);
      auVar73 = vdivps_avx(auVar73,auVar74);
      auVar160._16_16_ = auVar60;
      auVar160._0_16_ = auVar15;
      auVar42 = vcmpps_avx(auVar62,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar43 = vblendvps_avx(auVar43,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar42);
      uVar78 = auVar42._0_4_;
      uVar84 = auVar42._4_4_;
      uVar85 = auVar42._8_4_;
      uVar86 = auVar42._12_4_;
      uVar87 = auVar42._16_4_;
      uVar89 = auVar42._20_4_;
      uVar91 = auVar42._24_4_;
      uVar93 = auVar42._28_4_;
      auVar138 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_4 + 4 + uVar30)));
      auVar63._0_4_ = ~uVar78 & auVar74._0_4_;
      auVar63._4_4_ = ~uVar84 & auVar74._4_4_;
      auVar63._8_4_ = ~uVar85 & auVar74._8_4_;
      auVar63._12_4_ = ~uVar86 & auVar74._12_4_;
      auVar63._16_4_ = ~uVar87 & auVar74._16_4_;
      auVar63._20_4_ = ~uVar89 & auVar74._20_4_;
      auVar63._24_4_ = ~uVar91 & auVar74._24_4_;
      auVar63._28_4_ = ~uVar93 & auVar74._28_4_;
      auVar72 = vpslld_avx(auVar138,2);
      auVar138 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + (ulonglong)auVar72._0_4_)),
                               ZEXT416(*(uint *)(param_5 + (ulonglong)auVar72._4_4_)),0x10);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar72._8_4_)),0x20)
      ;
      auVar18 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_4 + uVar30)));
      auVar42 = vsubps_avx(auVar63,auVar107);
      auVar79 = vpslld_avx(auVar18,2);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar72._12_4_)),0x30
                              );
      auVar18 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + (ulonglong)auVar79._0_4_)),
                              ZEXT416(*(uint *)(param_5 + (ulonglong)auVar79._4_4_)),0x10);
      auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar79._8_4_)),0x20);
      auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar79._12_4_)),0x30);
      fVar106 = auVar42._0_4_;
      fVar112 = auVar42._4_4_;
      fVar114 = auVar42._8_4_;
      fVar116 = auVar42._12_4_;
      fVar120 = auVar42._16_4_;
      fVar125 = auVar42._20_4_;
      fVar129 = auVar42._24_4_;
      fVar133 = auVar42._28_4_;
      fVar111 = auVar18._0_4_;
      auVar74._0_4_ = auVar43._0_4_ * fVar106 * fVar111;
      fVar113 = auVar18._4_4_;
      auVar74._4_4_ = auVar43._4_4_ * fVar112 * fVar113;
      fVar115 = auVar18._8_4_;
      auVar74._8_4_ = auVar43._8_4_ * fVar114 * fVar115;
      fVar117 = auVar18._12_4_;
      auVar74._12_4_ = auVar43._12_4_ * fVar116 * fVar117;
      fVar124 = auVar138._0_4_;
      auVar74._16_4_ = auVar43._16_4_ * fVar120 * fVar124;
      fVar127 = auVar138._4_4_;
      auVar74._20_4_ = auVar43._20_4_ * fVar125 * fVar127;
      fVar131 = auVar138._8_4_;
      auVar74._24_4_ = auVar43._24_4_ * fVar129 * fVar131;
      fVar135 = auVar138._12_4_;
      auVar74._28_4_ = auVar43._28_4_ * fVar133 * fVar135;
      auVar81._0_4_ = (float)(~uVar78 & auVar61._0_4_) * fVar106 * fVar111;
      auVar81._4_4_ = (float)(~uVar84 & auVar61._4_4_) * fVar112 * fVar113;
      auVar81._8_4_ = (float)(~uVar85 & auVar61._8_4_) * fVar114 * fVar115;
      auVar81._12_4_ = (float)(~uVar86 & auVar61._12_4_) * fVar116 * fVar117;
      auVar81._16_4_ = (float)(~uVar87 & auVar61._16_4_) * fVar120 * fVar124;
      auVar81._20_4_ = (float)(~uVar89 & auVar61._20_4_) * fVar125 * fVar127;
      auVar81._24_4_ = (float)(~uVar91 & auVar61._24_4_) * fVar129 * fVar131;
      auVar81._28_4_ = (float)(~uVar93 & auVar61._28_4_) * fVar133 * fVar135;
      fVar5 = auVar15._0_4_;
      fVar137 = auVar55._0_4_;
      auVar100._0_4_ = fVar137 + fVar5;
      fVar6 = auVar15._4_4_;
      fVar142 = auVar55._4_4_;
      auVar100._4_4_ = fVar142 + fVar6;
      fVar7 = auVar15._8_4_;
      fVar143 = auVar55._8_4_;
      auVar100._8_4_ = fVar143 + fVar7;
      fVar8 = auVar15._12_4_;
      fVar144 = auVar55._12_4_;
      auVar100._12_4_ = fVar144 + fVar8;
      fVar9 = auVar60._0_4_;
      fVar145 = auVar40._0_4_;
      auVar100._16_4_ = fVar145 + fVar9;
      fVar10 = auVar60._4_4_;
      fVar146 = auVar40._4_4_;
      auVar100._20_4_ = fVar146 + fVar10;
      fVar11 = auVar60._8_4_;
      fVar147 = auVar40._8_4_;
      auVar100._24_4_ = fVar147 + fVar11;
      fVar12 = auVar60._12_4_;
      fVar148 = auVar40._12_4_;
      auVar100._28_4_ = fVar148 + fVar12;
      auVar61 = vdivps_avx(auVar74,auVar100);
      auVar43._0_4_ = (float)(~uVar78 & auVar73._0_4_) * fVar106 * fVar111;
      auVar43._4_4_ = (float)(~uVar84 & auVar73._4_4_) * fVar112 * fVar113;
      auVar43._8_4_ = (float)(~uVar85 & auVar73._8_4_) * fVar114 * fVar115;
      auVar43._12_4_ = (float)(~uVar86 & auVar73._12_4_) * fVar116 * fVar117;
      auVar43._16_4_ = (float)(~uVar87 & auVar73._16_4_) * fVar120 * fVar124;
      auVar43._20_4_ = (float)(~uVar89 & auVar73._20_4_) * fVar125 * fVar127;
      auVar43._24_4_ = (float)(~uVar91 & auVar73._24_4_) * fVar129 * fVar131;
      auVar43._28_4_ = (float)(~uVar93 & auVar73._28_4_) * fVar133 * fVar135;
      auVar73 = vdivps_avx(auVar81,auVar100);
      auVar74 = vdivps_avx(auVar43,auVar100);
      auVar43 = vcmpps_avx(auVar160,ZEXT832(0) << 0x20,0);
      auVar42 = vcmpps_avx(auVar139,ZEXT832(0) << 0x20,0);
      uVar78 = auVar43._0_4_ & auVar42._0_4_;
      uVar84 = auVar43._4_4_ & auVar42._4_4_;
      uVar85 = auVar43._8_4_ & auVar42._8_4_;
      uVar86 = auVar43._12_4_ & auVar42._12_4_;
      uVar87 = auVar43._16_4_ & auVar42._16_4_;
      uVar89 = auVar43._20_4_ & auVar42._20_4_;
      uVar91 = auVar43._24_4_ & auVar42._24_4_;
      uVar93 = auVar43._28_4_ & auVar42._28_4_;
      fVar149 = (float)(~uVar78 & auVar61._0_4_);
      fVar152 = (float)(~uVar84 & auVar61._4_4_);
      fVar153 = (float)(~uVar85 & auVar61._8_4_);
      fVar154 = (float)(~uVar86 & auVar61._12_4_);
      fVar155 = (float)(~uVar87 & auVar61._16_4_);
      fVar156 = (float)(~uVar89 & auVar61._20_4_);
      fVar157 = (float)(~uVar91 & auVar61._24_4_);
      fVar158 = (float)(~uVar93 & auVar61._28_4_);
      fVar120 = (float)(~uVar78 & auVar73._0_4_);
      fVar124 = (float)(~uVar84 & auVar73._4_4_);
      fVar125 = (float)(~uVar85 & auVar73._8_4_);
      fVar127 = (float)(~uVar86 & auVar73._12_4_);
      fVar129 = (float)(~uVar87 & auVar73._16_4_);
      fVar131 = (float)(~uVar89 & auVar73._20_4_);
      fVar133 = (float)(~uVar91 & auVar73._24_4_);
      fVar135 = (float)(~uVar93 & auVar73._28_4_);
      fVar106 = (float)(~uVar78 & auVar74._0_4_);
      fVar111 = (float)(~uVar84 & auVar74._4_4_);
      fVar112 = (float)(~uVar85 & auVar74._8_4_);
      fVar113 = (float)(~uVar86 & auVar74._12_4_);
      fVar114 = (float)(~uVar87 & auVar74._16_4_);
      fVar115 = (float)(~uVar89 & auVar74._20_4_);
      fVar116 = (float)(~uVar91 & auVar74._24_4_);
      fVar117 = (float)(~uVar93 & auVar74._28_4_);
      auVar42 = ZEXT832(0) << 0x20;
      auVar43 = vcmpps_avx(auVar42,auVar139,1);
      uVar78 = vmovmskps_avx(auVar43);
      if (uVar78 == 0) {
LAB_140367ed5:
        auVar43 = vcmpps_avx(auVar42,auVar160,1);
        uVar21 = vmovmskps_avx(auVar43);
      }
      else {
        auVar44._0_4_ = fVar137 * fVar149;
        auVar44._4_4_ = fVar142 * fVar152;
        auVar44._8_4_ = fVar143 * fVar153;
        auVar44._12_4_ = fVar144 * fVar154;
        auVar44._16_4_ = fVar145 * fVar155;
        auVar44._20_4_ = fVar146 * fVar156;
        auVar44._24_4_ = fVar147 * fVar157;
        auVar44._28_4_ = fVar148 * fVar158;
        auVar43 = vsubps_avx(auVar168,auVar44);
        cVar20 = (char)uVar78;
        if ((uVar78 & 1) != 0) {
          *(int *)(param_1 + lVar37) = auVar43._0_4_;
        }
        auVar40 = auVar43._0_16_;
        auVar55 = auVar43._16_16_;
        if ((uVar78 & 2) == 0) {
          if ((uVar78 & 4) == 0) goto LAB_140367d94;
LAB_140368091:
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + lVar27) = uVar4;
          if ((uVar78 & 8) != 0) goto LAB_1403680a2;
LAB_140367d9e:
          if ((uVar78 & 0x10) == 0) goto LAB_140367dae;
LAB_1403680b9:
          *(int *)(param_1 + lVar33) = auVar43._16_4_;
          if ((uVar78 & 0x20) != 0) goto LAB_1403680c9;
LAB_140367db8:
          if ((uVar78 & 0x40) == 0) goto LAB_140367dc2;
LAB_1403680da:
          uVar4 = vextractps_avx(auVar55,2);
          *(undefined4 *)(param_1 + lVar23) = uVar4;
          if (cVar20 < '\0') goto LAB_1403680ea;
LAB_140367dcb:
          auVar45._0_4_ = fVar137 * fVar120;
          auVar45._4_4_ = fVar142 * fVar124;
          auVar45._8_4_ = fVar143 * fVar125;
          auVar45._12_4_ = fVar144 * fVar127;
          auVar45._16_4_ = fVar145 * fVar129;
          auVar45._20_4_ = fVar146 * fVar131;
          auVar45._24_4_ = fVar147 * fVar133;
          auVar45._28_4_ = fVar148 * fVar135;
          auVar43 = vsubps_avx(auVar166,auVar45);
          if ((uVar78 & 1) == 0) goto LAB_140367dde;
LAB_140368109:
          *(int *)(param_1 + 4 + lVar37) = auVar43._0_4_;
          if ((uVar78 & 2) != 0) goto LAB_14036811a;
LAB_140367de8:
          if ((uVar78 & 4) == 0) goto LAB_140367df2;
LAB_14036812c:
          uVar4 = vextractps_avx(auVar43._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar27) = uVar4;
          if ((uVar78 & 8) != 0) goto LAB_14036813e;
LAB_140367dfc:
          auVar40 = auVar43._16_16_;
          if ((uVar78 & 0x10) == 0) goto LAB_140367e0c;
LAB_140368156:
          *(int *)(param_1 + 4 + lVar33) = auVar40._0_4_;
          if ((uVar78 & 0x20) != 0) goto LAB_140368167;
LAB_140367e16:
          if ((uVar78 & 0x40) == 0) goto LAB_140367e20;
LAB_140368179:
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 4 + lVar23) = uVar4;
          if (cVar20 < '\0') goto LAB_14036818a;
LAB_140367e29:
          auVar46._0_4_ = fVar137 * fVar106;
          auVar46._4_4_ = fVar142 * fVar111;
          auVar46._8_4_ = fVar143 * fVar112;
          auVar46._12_4_ = fVar144 * fVar113;
          auVar46._16_4_ = fVar145 * fVar114;
          auVar46._20_4_ = fVar146 * fVar115;
          auVar46._24_4_ = fVar147 * fVar116;
          auVar46._28_4_ = fVar148 * fVar117;
          auVar43 = vsubps_avx(auVar118,auVar46);
          if ((uVar78 & 1) == 0) goto LAB_140367e3b;
LAB_1403681a9:
          *(int *)(param_1 + 8 + lVar37) = auVar43._0_4_;
          if ((uVar78 & 2) != 0) goto LAB_1403681ba;
LAB_140367e45:
          if ((uVar78 & 4) == 0) goto LAB_140367e4f;
LAB_1403681cc:
          uVar4 = vextractps_avx(auVar43._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar27) = uVar4;
          if ((uVar78 & 8) != 0) goto LAB_1403681de;
LAB_140367e59:
          auVar40 = auVar43._16_16_;
        }
        else {
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + lVar25) = uVar4;
          if ((uVar78 & 4) != 0) goto LAB_140368091;
LAB_140367d94:
          if ((uVar78 & 8) == 0) goto LAB_140367d9e;
LAB_1403680a2:
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + lVar35) = uVar4;
          if ((uVar78 & 0x10) != 0) goto LAB_1403680b9;
LAB_140367dae:
          if ((uVar78 & 0x20) == 0) goto LAB_140367db8;
LAB_1403680c9:
          uVar4 = vextractps_avx(auVar55,1);
          *(undefined4 *)(param_1 + lVar31) = uVar4;
          if ((uVar78 & 0x40) != 0) goto LAB_1403680da;
LAB_140367dc2:
          if (-1 < cVar20) goto LAB_140367dcb;
LAB_1403680ea:
          uVar4 = vextractps_avx(auVar55,3);
          *(undefined4 *)(param_1 + lVar19) = uVar4;
          auVar50._0_4_ = fVar137 * fVar120;
          auVar50._4_4_ = fVar142 * fVar124;
          auVar50._8_4_ = fVar143 * fVar125;
          auVar50._12_4_ = fVar144 * fVar127;
          auVar50._16_4_ = fVar145 * fVar129;
          auVar50._20_4_ = fVar146 * fVar131;
          auVar50._24_4_ = fVar147 * fVar133;
          auVar50._28_4_ = fVar148 * fVar135;
          auVar43 = vsubps_avx(auVar166,auVar50);
          if ((uVar78 & 1) != 0) goto LAB_140368109;
LAB_140367dde:
          if ((uVar78 & 2) == 0) goto LAB_140367de8;
LAB_14036811a:
          uVar4 = vextractps_avx(auVar43._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar25) = uVar4;
          if ((uVar78 & 4) != 0) goto LAB_14036812c;
LAB_140367df2:
          if ((uVar78 & 8) == 0) goto LAB_140367dfc;
LAB_14036813e:
          uVar4 = vextractps_avx(auVar43._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar35) = uVar4;
          auVar40 = auVar43._16_16_;
          if ((uVar78 & 0x10) != 0) goto LAB_140368156;
LAB_140367e0c:
          if ((uVar78 & 0x20) == 0) goto LAB_140367e16;
LAB_140368167:
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
          if ((uVar78 & 0x40) != 0) goto LAB_140368179;
LAB_140367e20:
          if (-1 < cVar20) goto LAB_140367e29;
LAB_14036818a:
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 4 + lVar19) = uVar4;
          auVar51._0_4_ = fVar137 * fVar106;
          auVar51._4_4_ = fVar142 * fVar111;
          auVar51._8_4_ = fVar143 * fVar112;
          auVar51._12_4_ = fVar144 * fVar113;
          auVar51._16_4_ = fVar145 * fVar114;
          auVar51._20_4_ = fVar146 * fVar115;
          auVar51._24_4_ = fVar147 * fVar116;
          auVar51._28_4_ = fVar148 * fVar117;
          auVar43 = vsubps_avx(auVar118,auVar51);
          if ((uVar78 & 1) != 0) goto LAB_1403681a9;
LAB_140367e3b:
          if ((uVar78 & 2) == 0) goto LAB_140367e45;
LAB_1403681ba:
          uVar4 = vextractps_avx(auVar43._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar25) = uVar4;
          if ((uVar78 & 4) != 0) goto LAB_1403681cc;
LAB_140367e4f:
          if ((uVar78 & 8) == 0) goto LAB_140367e59;
LAB_1403681de:
          uVar4 = vextractps_avx(auVar43._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar35) = uVar4;
          auVar40 = auVar43._16_16_;
        }
        if ((uVar78 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar33) = auVar40._0_4_;
        }
        if ((uVar78 & 0x20) != 0) {
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
        }
        if ((uVar78 & 0x40) != 0) {
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 8 + lVar23) = uVar4;
        }
        if (cVar20 < '\0') {
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 8 + lVar19) = uVar4;
        }
        if ((uVar78 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar37) = uVar21;
        }
        if ((uVar78 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar25) = uVar126;
        }
        if ((uVar78 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar27) = uVar128;
        }
        if ((uVar78 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar88;
        }
        if ((uVar78 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar33) = uVar90;
        }
        if ((uVar78 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar31) = uVar92;
        }
        if ((uVar78 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar23) = uVar94;
        }
        if (-1 < cVar20) goto LAB_140367ed5;
        *(uint *)(param_1 + 0xc + lVar19) = uVar130;
        auVar43 = vcmpps_avx(auVar42,auVar160,1);
        uVar21 = vmovmskps_avx(auVar43);
      }
      if (uVar21 != 0) {
        auVar40._0_4_ = auVar56._0_4_ + fVar5 * fVar149;
        auVar40._4_4_ = auVar56._4_4_ + fVar6 * fVar152;
        auVar40._8_4_ = auVar56._8_4_ + fVar7 * fVar153;
        auVar40._12_4_ = auVar56._12_4_ + fVar8 * fVar154;
        auVar47._16_4_ = auVar41._0_4_ + fVar9 * fVar155;
        auVar47._0_16_ = auVar40;
        auVar47._20_4_ = auVar41._4_4_ + fVar10 * fVar156;
        auVar47._24_4_ = auVar41._8_4_ + fVar11 * fVar157;
        auVar47._28_4_ = auVar41._12_4_ + fVar12 * fVar158;
        cVar20 = (char)uVar21;
        if ((uVar21 & 1) != 0) {
          *(float *)(param_1 + lVar36) = auVar40._0_4_;
        }
        auVar55 = auVar47._16_16_;
        local_360 = auVar13._0_4_;
        fStack_35c = auVar13._4_4_;
        fStack_358 = auVar13._8_4_;
        fStack_354 = auVar13._12_4_;
        fStack_350 = auVar54._0_4_;
        fStack_34c = auVar54._4_4_;
        fStack_348 = auVar54._8_4_;
        fStack_344 = auVar54._12_4_;
        local_320 = auVar95._0_4_;
        fStack_31c = auVar95._4_4_;
        fStack_318 = auVar95._8_4_;
        fStack_314 = auVar95._12_4_;
        fStack_310 = auVar14._0_4_;
        fStack_30c = auVar14._4_4_;
        fStack_308 = auVar14._8_4_;
        fStack_304 = auVar14._12_4_;
        if ((uVar21 & 2) == 0) {
          if ((uVar21 & 4) == 0) goto LAB_140367f3a;
LAB_140368331:
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + lVar38) = uVar4;
          if ((uVar21 & 8) != 0) goto LAB_140368342;
LAB_140367f44:
          if ((uVar21 & 0x10) == 0) goto LAB_140367f54;
LAB_140368359:
          *(float *)(param_1 + lVar28) = auVar47._16_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_140368369;
LAB_140367f5e:
          if ((uVar21 & 0x40) == 0) goto LAB_140367f68;
LAB_14036837a:
          uVar4 = vextractps_avx(auVar55,2);
          *(undefined4 *)(param_1 + lVar32) = uVar4;
          if (cVar20 < '\0') goto LAB_140368389;
LAB_140367f70:
          auVar48._0_4_ = fVar5 * fVar120 + local_360;
          auVar48._4_4_ = fVar6 * fVar124 + fStack_35c;
          auVar48._8_4_ = fVar7 * fVar125 + fStack_358;
          auVar48._12_4_ = fVar8 * fVar127 + fStack_354;
          auVar48._16_4_ = fVar9 * fVar129 + fStack_350;
          auVar48._20_4_ = fVar10 * fVar131 + fStack_34c;
          auVar48._24_4_ = fVar11 * fVar133 + fStack_348;
          auVar48._28_4_ = fVar12 * fVar135 + fStack_344;
          if ((uVar21 & 1) == 0) goto LAB_140367f88;
LAB_1403683ad:
          *(int *)(param_1 + 4 + lVar36) = auVar48._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_1403683be;
LAB_140367f92:
          if ((uVar21 & 4) == 0) goto LAB_140367f9c;
LAB_1403683d0:
          uVar4 = vextractps_avx(auVar48._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar38) = uVar4;
          if ((uVar21 & 8) != 0) goto LAB_1403683e2;
LAB_140367fa6:
          auVar40 = auVar48._16_16_;
          if ((uVar21 & 0x10) == 0) goto LAB_140367fb6;
LAB_1403683fa:
          *(int *)(param_1 + 4 + lVar28) = auVar40._0_4_;
          if ((uVar21 & 0x20) != 0) goto LAB_14036840b;
LAB_140367fc0:
          if ((uVar21 & 0x40) == 0) goto LAB_140367fca;
LAB_14036841d:
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 4 + lVar32) = uVar4;
          if (cVar20 < '\0') goto LAB_14036842d;
LAB_140367fd2:
          auVar49._0_4_ = fVar5 * fVar106 + local_320;
          auVar49._4_4_ = fVar6 * fVar111 + fStack_31c;
          auVar49._8_4_ = fVar7 * fVar112 + fStack_318;
          auVar49._12_4_ = fVar8 * fVar113 + fStack_314;
          auVar49._16_4_ = fVar9 * fVar114 + fStack_310;
          auVar49._20_4_ = fVar10 * fVar115 + fStack_30c;
          auVar49._24_4_ = fVar11 * fVar116 + fStack_308;
          auVar49._28_4_ = fVar12 * fVar117 + fStack_304;
          if ((uVar21 & 1) == 0) goto LAB_140367fe9;
LAB_140368451:
          *(int *)(param_1 + 8 + lVar36) = auVar49._0_4_;
          if ((uVar21 & 2) != 0) goto LAB_140368462;
LAB_140367ff3:
          if ((uVar21 & 4) == 0) goto LAB_140367ffd;
LAB_140368474:
          uVar4 = vextractps_avx(auVar49._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar38) = uVar4;
          if ((uVar21 & 8) != 0) goto LAB_140368486;
LAB_140368007:
          auVar40 = auVar49._16_16_;
        }
        else {
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + lVar39) = uVar4;
          if ((uVar21 & 4) != 0) goto LAB_140368331;
LAB_140367f3a:
          if ((uVar21 & 8) == 0) goto LAB_140367f44;
LAB_140368342:
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + lVar26) = uVar4;
          if ((uVar21 & 0x10) != 0) goto LAB_140368359;
LAB_140367f54:
          if ((uVar21 & 0x20) == 0) goto LAB_140367f5e;
LAB_140368369:
          uVar4 = vextractps_avx(auVar55,1);
          *(undefined4 *)(param_1 + lVar34) = uVar4;
          if ((uVar21 & 0x40) != 0) goto LAB_14036837a;
LAB_140367f68:
          if (-1 < cVar20) goto LAB_140367f70;
LAB_140368389:
          uVar4 = vextractps_avx(auVar55,3);
          *(undefined4 *)(param_1 + lVar24) = uVar4;
          auVar48._0_4_ = fVar5 * fVar120 + local_360;
          auVar48._4_4_ = fVar6 * fVar124 + fStack_35c;
          auVar48._8_4_ = fVar7 * fVar125 + fStack_358;
          auVar48._12_4_ = fVar8 * fVar127 + fStack_354;
          auVar48._16_4_ = fVar9 * fVar129 + fStack_350;
          auVar48._20_4_ = fVar10 * fVar131 + fStack_34c;
          auVar48._24_4_ = fVar11 * fVar133 + fStack_348;
          auVar48._28_4_ = fVar12 * fVar135 + fStack_344;
          if ((uVar21 & 1) != 0) goto LAB_1403683ad;
LAB_140367f88:
          if ((uVar21 & 2) == 0) goto LAB_140367f92;
LAB_1403683be:
          uVar4 = vextractps_avx(auVar48._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar39) = uVar4;
          if ((uVar21 & 4) != 0) goto LAB_1403683d0;
LAB_140367f9c:
          if ((uVar21 & 8) == 0) goto LAB_140367fa6;
LAB_1403683e2:
          uVar4 = vextractps_avx(auVar48._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
          auVar40 = auVar48._16_16_;
          if ((uVar21 & 0x10) != 0) goto LAB_1403683fa;
LAB_140367fb6:
          if ((uVar21 & 0x20) == 0) goto LAB_140367fc0;
LAB_14036840b:
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
          if ((uVar21 & 0x40) != 0) goto LAB_14036841d;
LAB_140367fca:
          if (-1 < cVar20) goto LAB_140367fd2;
LAB_14036842d:
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 4 + lVar24) = uVar4;
          auVar49._0_4_ = fVar5 * fVar106 + local_320;
          auVar49._4_4_ = fVar6 * fVar111 + fStack_31c;
          auVar49._8_4_ = fVar7 * fVar112 + fStack_318;
          auVar49._12_4_ = fVar8 * fVar113 + fStack_314;
          auVar49._16_4_ = fVar9 * fVar114 + fStack_310;
          auVar49._20_4_ = fVar10 * fVar115 + fStack_30c;
          auVar49._24_4_ = fVar11 * fVar116 + fStack_308;
          auVar49._28_4_ = fVar12 * fVar117 + fStack_304;
          if ((uVar21 & 1) != 0) goto LAB_140368451;
LAB_140367fe9:
          if ((uVar21 & 2) == 0) goto LAB_140367ff3;
LAB_140368462:
          uVar4 = vextractps_avx(auVar49._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar39) = uVar4;
          if ((uVar21 & 4) != 0) goto LAB_140368474;
LAB_140367ffd:
          if ((uVar21 & 8) == 0) goto LAB_140368007;
LAB_140368486:
          uVar4 = vextractps_avx(auVar49._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
          auVar40 = auVar49._16_16_;
        }
        if ((uVar21 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar28) = auVar40._0_4_;
        }
        if ((uVar21 & 0x20) != 0) {
          uVar4 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
        }
        if ((uVar21 & 0x40) != 0) {
          uVar4 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 8 + lVar32) = uVar4;
        }
        if (cVar20 < '\0') {
          uVar4 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 8 + lVar24) = uVar4;
        }
        if ((uVar21 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar163;
        }
        if ((uVar21 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar164;
        }
        if ((uVar21 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar38) = uVar165;
        }
        if ((uVar21 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar26) = uVar2;
        }
        if ((uVar21 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar132;
        }
        if ((uVar21 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar134;
        }
        if ((uVar21 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar136;
        }
        if (cVar20 < '\0') {
          *(uint *)(param_1 + 0xc + lVar24) = uVar162;
        }
      }
      uVar30 = uVar30 + 8;
      uVar29 = uVar29 + 0x20;
    } while ((int)uVar30 < (int)(uVar121 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar30) {
      return;
    }
  }
  auVar40 = vpshufd_avx(ZEXT416((uint)uVar30),0);
  auVar52._16_16_ = auVar40;
  auVar52._0_16_ = auVar40;
  auVar41 = vpshufd_avx(ZEXT416(param_6),0);
  auVar56 = SUB3216(auVar52 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar54 = SUB3216(auVar52 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar40 = vpcmpgtd_avx(auVar41,auVar54);
  auVar55 = vpcmpgtd_avx(auVar41,auVar56);
  auVar64._16_16_ = auVar40;
  auVar64._0_16_ = auVar55;
  uVar29 = uVar30 & 0xffffffff;
  pauVar1 = (undefined1 (*) [16])(param_2 + uVar29 * 8);
  iVar22 = vmovmskps_avx(auVar64);
  if (iVar22 == 0xff) {
    auVar101._16_16_ = pauVar1[3];
    auVar101._0_16_ = pauVar1[1];
    auVar103._16_16_ = pauVar1[2];
    auVar103._0_16_ = *pauVar1;
    auVar43 = vshufps_avx(auVar103,auVar101,0x88);
    auVar42 = vshufps_avx(auVar103,auVar101,0xdd);
  }
  else {
    auVar13 = vpcmpgtd_avx(auVar41,auVar54);
    auVar14 = vpcmpgtd_avx(auVar41,auVar56);
    auVar95._0_4_ =
         auVar14._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar95._4_4_ = auVar14._4_4_ & _UNK_150b519c4;
    auVar95._8_4_ = auVar14._8_4_ & _UNK_150b519c8;
    auVar95._12_4_ = auVar14._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar95,1);
    vextractps_avx(auVar95,2);
    vextractps_avx(auVar95,3);
    auVar60._0_4_ =
         auVar14._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar60._4_4_ = auVar14._4_4_ & _UNK_150b519e4;
    auVar60._8_4_ = auVar14._8_4_ & _UNK_150b519e8;
    auVar60._12_4_ = auVar14._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar60,1);
    vextractps_avx(auVar60,2);
    vextractps_avx(auVar60,3);
    auVar43 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar13._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar42 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar13._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar60._0_4_))));
  }
  auVar17 = vpcmpgtd_avx(auVar41,auVar54);
  auVar15 = vpcmpgtd_avx(auVar41,auVar56);
  auVar82._16_16_ = auVar17;
  auVar82._0_16_ = auVar15;
  auVar57 = vpslld_avx(auVar43._0_16_,4);
  auVar96 = vpslld_avx(auVar43._16_16_,4);
  auVar72 = vpand_avx(auVar15,auVar57);
  auVar14 = vpand_avx(auVar17,auVar96);
  lVar19 = param_1 + auVar14._0_4_;
  lVar23 = param_1 + auVar14._4_4_;
  auVar54 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar14._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar14._4_4_)),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + auVar14._8_4_)),0x20);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + auVar14._12_4_)),0x30);
  lVar24 = param_1 + auVar14._8_4_;
  uVar121 = auVar15._0_4_;
  uVar21 = auVar15._4_4_;
  uVar126 = auVar15._8_4_;
  uVar128 = auVar15._12_4_;
  uVar88 = auVar17._0_4_;
  uVar90 = auVar17._4_4_;
  uVar92 = auVar17._8_4_;
  uVar94 = auVar17._12_4_;
  auVar13 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d50) + lVar19)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d54) + lVar23)),0x10);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d58) + lVar24)),
                          0x20);
  lVar25 = param_1 + auVar14._12_4_;
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d5c) + lVar25)),
                          0x30);
  auVar58 = vpslld_avx(auVar42._16_16_,4);
  auVar60 = vpand_avx(auVar17,auVar58);
  lVar26 = param_1 + auVar60._0_4_;
  auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar60._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar60._4_4_)),0x10);
  lVar27 = param_1 + auVar60._4_4_;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + auVar60._8_4_)),0x20);
  auVar95 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d50) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d54) + lVar27)),0x10);
  lVar28 = param_1 + auVar60._8_4_;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + auVar60._12_4_)),0x30);
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d58) + lVar28)),
                          0x20);
  lVar31 = param_1 + auVar60._12_4_;
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d5c) + lVar31)),
                          0x30);
  lVar32 = param_1 + auVar72._0_4_;
  auVar60 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar72._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar72._4_4_)),0x10);
  auVar59 = vpslld_avx(auVar42._0_16_,4);
  auVar79 = vpand_avx(auVar15,auVar59);
  lVar33 = param_1 + auVar79._0_4_;
  lVar34 = param_1 + auVar72._4_4_;
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar32)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d44) + lVar34)),0x10);
  auVar138 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar79._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar79._4_4_)),0x10);
  lVar35 = param_1 + auVar79._4_4_;
  auVar18 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar33)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d44) + lVar35)),0x10);
  auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(param_1 + auVar72._8_4_)),0x20);
  lVar36 = param_1 + auVar72._8_4_;
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d48) + lVar36))
                          ,0x20);
  auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_1 + auVar79._8_4_)),0x20);
  lVar37 = param_1 + auVar79._8_4_;
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d48) + lVar37))
                          ,0x20);
  auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(param_1 + auVar72._12_4_)),0x30);
  lVar38 = param_1 + auVar72._12_4_;
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d4c) + lVar38))
                          ,0x30);
  auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_1 + auVar79._12_4_)),0x30);
  lVar39 = param_1 + auVar79._12_4_;
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d4c) + lVar39))
                          ,0x30);
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d70) + lVar19)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d74) + lVar23)),0x10);
  auVar79 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d70) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d74) + lVar27)),0x10);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d78) + lVar24)),
                          0x20);
  auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d78) + lVar28)),
                          0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d7c) + lVar25)),
                          0x30);
  auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d7c) + lVar31)),
                          0x30);
  auVar16 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar32)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d64) + lVar34)),0x10);
  auVar167 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar121 &
                                             ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                             ) + lVar33)),
                           ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d64) + lVar35)),0x10);
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d68) + lVar36))
                          ,0x20);
  auVar167 = vinsertps_avx(auVar167,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d68) + lVar37
                                                     )),0x20);
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d6c) + lVar38))
                          ,0x30);
  auVar98._16_16_ = auVar54;
  auVar98._0_16_ = auVar60;
  auVar54 = vinsertps_avx(auVar167,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d6c) + lVar39)
                                          ),0x30);
  auVar104._16_16_ = auVar13;
  auVar104._0_16_ = auVar15;
  auVar65._16_16_ = auVar72;
  auVar65._0_16_ = auVar16;
  auVar108._16_16_ = auVar14;
  auVar108._0_16_ = auVar138;
  auVar119._16_16_ = auVar95;
  auVar119._0_16_ = auVar18;
  auVar102._16_16_ = auVar79;
  auVar102._0_16_ = auVar54;
  auVar43 = vmaskmovps_avx(auVar82,auVar98);
  auVar42 = vmaskmovps_avx(auVar82,auVar104);
  auVar61 = vmaskmovps_avx(auVar82,auVar65);
  auVar73 = vmaskmovps_avx(auVar82,auVar108);
  auVar74 = vmaskmovps_avx(auVar82,auVar119);
  auVar62 = vmaskmovps_avx(auVar82,auVar102);
  auVar63 = vsubps_avx(auVar43,auVar73);
  auVar81 = vsubps_avx(auVar42,auVar74);
  auVar97 = vsubps_avx(auVar61,auVar62);
  auVar150._0_4_ =
       auVar97._0_4_ * auVar97._0_4_ + auVar81._0_4_ * auVar81._0_4_ + auVar63._0_4_ * auVar63._0_4_
  ;
  auVar150._4_4_ =
       auVar97._4_4_ * auVar97._4_4_ + auVar81._4_4_ * auVar81._4_4_ + auVar63._4_4_ * auVar63._4_4_
  ;
  auVar150._8_4_ =
       auVar97._8_4_ * auVar97._8_4_ + auVar81._8_4_ * auVar81._8_4_ + auVar63._8_4_ * auVar63._8_4_
  ;
  auVar150._12_4_ =
       auVar97._12_4_ * auVar97._12_4_ +
       auVar81._12_4_ * auVar81._12_4_ + auVar63._12_4_ * auVar63._12_4_;
  auVar150._16_4_ =
       auVar97._16_4_ * auVar97._16_4_ +
       auVar81._16_4_ * auVar81._16_4_ + auVar63._16_4_ * auVar63._16_4_;
  auVar150._20_4_ =
       auVar97._20_4_ * auVar97._20_4_ +
       auVar81._20_4_ * auVar81._20_4_ + auVar63._20_4_ * auVar63._20_4_;
  auVar150._24_4_ =
       auVar97._24_4_ * auVar97._24_4_ +
       auVar81._24_4_ * auVar81._24_4_ + auVar63._24_4_ * auVar63._24_4_;
  auVar150._28_4_ =
       auVar97._28_4_ * auVar97._28_4_ +
       auVar81._28_4_ * auVar81._28_4_ + auVar63._28_4_ * auVar63._28_4_;
  auVar100 = vsqrtps_avx(auVar150);
  auVar80 = vcmpps_avx(auVar150,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar63 = vdivps_avx(auVar63,auVar100);
  auVar63 = vblendvps_avx(auVar63,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar80);
  auVar81 = vdivps_avx(auVar81,auVar100);
  auVar97 = vdivps_avx(auVar97,auVar100);
  uVar130 = auVar80._0_4_;
  auVar99._0_4_ = ~uVar130 & auVar81._0_4_;
  uVar132 = auVar80._4_4_;
  auVar99._4_4_ = ~uVar132 & auVar81._4_4_;
  uVar134 = auVar80._8_4_;
  auVar99._8_4_ = ~uVar134 & auVar81._8_4_;
  uVar136 = auVar80._12_4_;
  auVar99._12_4_ = ~uVar136 & auVar81._12_4_;
  uVar162 = auVar80._16_4_;
  auVar99._16_4_ = ~uVar162 & auVar81._16_4_;
  uVar163 = auVar80._20_4_;
  auVar99._20_4_ = ~uVar163 & auVar81._20_4_;
  uVar164 = auVar80._24_4_;
  auVar99._24_4_ = ~uVar164 & auVar81._24_4_;
  uVar165 = auVar80._28_4_;
  auVar99._28_4_ = ~uVar165 & auVar81._28_4_;
  auVar66._0_4_ = ~uVar130 & auVar97._0_4_;
  auVar66._4_4_ = ~uVar132 & auVar97._4_4_;
  auVar66._8_4_ = ~uVar134 & auVar97._8_4_;
  auVar66._12_4_ = ~uVar136 & auVar97._12_4_;
  auVar66._16_4_ = ~uVar162 & auVar97._16_4_;
  auVar66._20_4_ = ~uVar163 & auVar97._20_4_;
  auVar66._24_4_ = ~uVar164 & auVar97._24_4_;
  auVar66._28_4_ = ~uVar165 & auVar97._28_4_;
  auVar63 = vmaskmovps_avx(auVar82,auVar63);
  auVar80 = vmaskmovps_avx(auVar82,auVar99);
  auVar81 = vmaskmovps_avx(auVar82,auVar66);
  auVar54 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d90) + lVar19)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d94) + lVar23)),0x10);
  auVar13 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar88 & _UNK_150b50d90) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar90 & _UNK_150b50d94) + lVar27)),0x10);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d98) + lVar24)),
                          0x20);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)((ulonglong)(uVar92 & _UNK_150b50d98) + lVar28)),
                          0x20);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d9c) + lVar25)),
                          0x30);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)((ulonglong)(uVar94 & _UNK_150b50d9c) + lVar31)),
                          0x30);
  auVar14 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                            ) + lVar32)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d84) + lVar34)),0x10);
  auVar95 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar121 &
                                            ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                            ) + lVar33)),
                          ZEXT416(*(uint *)((ulonglong)(uVar21 & _UNK_150b50d84) + lVar35)),0x10);
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d88) + lVar36))
                          ,0x20);
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar126 & _UNK_150b50d88) + lVar37))
                          ,0x20);
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d8c) + lVar38))
                          ,0x30);
  auVar159._16_16_ = auVar54;
  auVar159._0_16_ = auVar14;
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar128 & _UNK_150b50d8c) + lVar39))
                          ,0x30);
  auVar97 = vmaskmovps_avx(auVar82,*(undefined1 (*) [32])(param_3 + (int)((uint)uVar30 << 2)));
  auVar83._16_16_ = auVar13;
  auVar83._0_16_ = auVar95;
  auVar161._0_4_ = ~uVar130 & auVar100._0_4_;
  auVar161._4_4_ = ~uVar132 & auVar100._4_4_;
  auVar161._8_4_ = ~uVar134 & auVar100._8_4_;
  auVar161._12_4_ = ~uVar136 & auVar100._12_4_;
  auVar161._16_4_ = ~uVar162 & auVar100._16_4_;
  auVar161._20_4_ = ~uVar163 & auVar100._20_4_;
  auVar161._24_4_ = ~uVar164 & auVar100._24_4_;
  auVar161._28_4_ = ~uVar165 & auVar100._28_4_;
  if ((~(byte)iVar22 & 0x81) == 0) {
    auVar167._8_8_ = 0;
    auVar167._0_8_ = *(ulonglong *)(param_4 + uVar29);
  }
  else {
    pbVar3 = (byte *)(param_4 + uVar29);
    auVar60 = vpcmpgtd_avx(auVar41,auVar56);
    auVar67._16_16_ = auVar17;
    auVar67._0_16_ = auVar60;
    uVar121 = vmovmskps_avx(auVar67);
    if ((uVar121 & 1) != 0) {
      auVar167 = ZEXT116(*pbVar3);
    }
    if ((uVar121 & 2) != 0) {
      auVar60 = vpinsrb_avx(auVar167,(uint)pbVar3[1],1);
      auVar167 = vpblendw_avx(auVar60,auVar167,0xe);
    }
    if ((uVar121 & 4) != 0) {
      auVar60 = vpmovzxwd_avx(auVar167);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[2],2);
      auVar60 = vpinsrb_avx(auVar60,(uint)auVar167[3],3);
      auVar167 = vpblendw_avx(auVar60,auVar167,0xc);
    }
    if ((uVar121 & 8) != 0) {
      auVar60 = vpmovzxwd_avx(auVar167);
      auVar60 = vpinsrb_avx(auVar60,(uint)auVar167[2],2);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[3],3);
      auVar167 = vpblendw_avx(auVar60,auVar167,0xc);
    }
    if ((uVar121 & 0x10) != 0) {
      auVar60 = vpshufb_avx(auVar167,___xmm_80800706808005048080030203020100);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[4],4);
      auVar60 = vpinsrb_avx(auVar60,(uint)auVar167[5],5);
      auVar167 = vpblendw_avx(auVar60,auVar167,8);
    }
    if ((uVar121 & 0x20) != 0) {
      auVar60 = vpshufb_avx(auVar167,___xmm_80800706808005048080030403020100);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[5],5);
      auVar167 = vpblendw_avx(auVar60,auVar167,8);
    }
    if ((uVar121 & 0x40) != 0) {
      auVar60 = vpshufb_avx(auVar167,___xmm_80800706808005048080050403020100);
      auVar60 = vpinsrb_avx(auVar60,(uint)pbVar3[6],6);
      auVar167 = vpinsrb_avx(auVar60,(uint)auVar167[7],7);
    }
    if ((uVar121 & 0x80) != 0) {
      auVar60 = vpshufb_avx(auVar167,___xmm_80800706808005048006050403020100);
      auVar167 = vpinsrb_avx(auVar60,(uint)pbVar3[7],7);
    }
  }
  auVar97 = vsubps_avx(auVar161,auVar97);
  local_220 = auVar63._0_4_;
  fStack_21c = auVar63._4_4_;
  fStack_218 = auVar63._8_4_;
  fStack_214 = auVar63._12_4_;
  fStack_210 = auVar63._16_4_;
  fStack_20c = auVar63._20_4_;
  fStack_208 = auVar63._24_4_;
  fStack_204 = auVar63._28_4_;
  fVar120 = auVar97._0_4_;
  fVar124 = auVar97._4_4_;
  fVar125 = auVar97._8_4_;
  fVar127 = auVar97._12_4_;
  fVar129 = auVar97._16_4_;
  fVar131 = auVar97._20_4_;
  fVar133 = auVar97._24_4_;
  fVar135 = auVar97._28_4_;
  local_200 = auVar80._0_4_;
  fStack_1fc = auVar80._4_4_;
  fStack_1f8 = auVar80._8_4_;
  fStack_1f4 = auVar80._12_4_;
  fStack_1f0 = auVar80._16_4_;
  fStack_1ec = auVar80._20_4_;
  fStack_1e8 = auVar80._24_4_;
  fStack_1e4 = auVar80._28_4_;
  local_1e0 = auVar81._0_4_;
  fStack_1dc = auVar81._4_4_;
  fStack_1d8 = auVar81._8_4_;
  fStack_1d4 = auVar81._12_4_;
  fStack_1d0 = auVar81._16_4_;
  fStack_1cc = auVar81._20_4_;
  fStack_1c8 = auVar81._24_4_;
  fStack_1c4 = auVar81._28_4_;
  auVar60 = vpshufd_avx(auVar167,0x55);
  auVar60 = vpmovzxbd_avx(auVar60);
  auVar15 = vpmovzxbd_avx(auVar167);
  auVar138 = vpslld_avx(auVar15,2);
  auVar60 = vpslld_avx(auVar60,2);
  auVar15 = vpunpckhdq_avx(auVar60,ZEXT816(0) << 0x20);
  auVar60 = vpmovzxdq_avx(auVar60);
  auVar68._16_16_ = auVar15;
  auVar68._0_16_ = auVar60;
  auVar15 = vpunpckhdq_avx(auVar138,ZEXT816(0) << 0x20);
  auVar60 = vpmovzxdq_avx(auVar138);
  auVar140._16_16_ = auVar15;
  auVar140._0_16_ = auVar60;
  auVar60 = vpmovsxdq_avx(auVar55);
  auVar55 = vpshufd_avx(auVar55,0xfa);
  auVar151._16_16_ = auVar55;
  auVar151._0_16_ = auVar60;
  auVar63 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar140,auVar151);
  auVar55 = vpmovsxdq_avx(auVar40);
  auVar40 = vpshufd_avx(auVar40,0xfa);
  auVar122._16_16_ = auVar40;
  auVar122._0_16_ = auVar55;
  auVar80 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar68,auVar122);
  auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + auVar80._0_8_)),
                          ZEXT416(*(uint *)(param_5 + auVar80._8_8_)),0x10);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_5 + auVar80._16_8_)),0x20);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_5 + auVar80._24_8_)),0x30);
  auVar55 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + auVar63._0_8_)),
                          ZEXT416(*(uint *)(param_5 + auVar63._8_8_)),0x10);
  auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_5 + auVar63._16_8_)),0x20);
  auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)(param_5 + auVar63._24_8_)),0x30);
  fVar5 = auVar95._0_4_;
  fVar137 = auVar14._0_4_;
  auVar123._0_4_ = fVar137 + fVar5;
  fVar6 = auVar95._4_4_;
  fVar142 = auVar14._4_4_;
  auVar123._4_4_ = fVar142 + fVar6;
  fVar7 = auVar95._8_4_;
  fVar143 = auVar14._8_4_;
  auVar123._8_4_ = fVar143 + fVar7;
  fVar8 = auVar95._12_4_;
  fVar144 = auVar14._12_4_;
  auVar123._12_4_ = fVar144 + fVar8;
  fVar9 = auVar13._0_4_;
  fVar145 = auVar54._0_4_;
  auVar123._16_4_ = fVar145 + fVar9;
  fVar10 = auVar13._4_4_;
  fVar146 = auVar54._4_4_;
  auVar123._20_4_ = fVar146 + fVar10;
  fVar11 = auVar13._8_4_;
  fVar147 = auVar54._8_4_;
  auVar123._24_4_ = fVar147 + fVar11;
  fVar12 = auVar13._12_4_;
  fVar148 = auVar54._12_4_;
  auVar123._28_4_ = fVar148 + fVar12;
  fVar106 = auVar55._0_4_;
  auVar109._0_4_ = fVar120 * local_220 * fVar106;
  fVar111 = auVar55._4_4_;
  auVar109._4_4_ = fVar124 * fStack_21c * fVar111;
  fVar112 = auVar55._8_4_;
  auVar109._8_4_ = fVar125 * fStack_218 * fVar112;
  fVar113 = auVar55._12_4_;
  auVar109._12_4_ = fVar127 * fStack_214 * fVar113;
  fVar114 = auVar40._0_4_;
  auVar109._16_4_ = fVar129 * fStack_210 * fVar114;
  fVar115 = auVar40._4_4_;
  auVar109._20_4_ = fVar131 * fStack_20c * fVar115;
  fVar116 = auVar40._8_4_;
  auVar109._24_4_ = fVar133 * fStack_208 * fVar116;
  fVar117 = auVar40._12_4_;
  auVar109._28_4_ = fVar135 * fStack_204 * fVar117;
  auVar81 = vdivps_avx(auVar109,auVar123);
  auVar141._0_4_ = fVar120 * local_200 * fVar106;
  auVar141._4_4_ = fVar124 * fStack_1fc * fVar111;
  auVar141._8_4_ = fVar125 * fStack_1f8 * fVar112;
  auVar141._12_4_ = fVar127 * fStack_1f4 * fVar113;
  auVar141._16_4_ = fVar129 * fStack_1f0 * fVar114;
  auVar141._20_4_ = fVar131 * fStack_1ec * fVar115;
  auVar141._24_4_ = fVar133 * fStack_1e8 * fVar116;
  auVar141._28_4_ = fVar135 * fStack_1e4 * fVar117;
  auVar97 = vdivps_avx(auVar141,auVar123);
  auVar69._0_4_ = fVar120 * local_1e0 * fVar106;
  auVar69._4_4_ = fVar124 * fStack_1dc * fVar111;
  auVar69._8_4_ = fVar125 * fStack_1d8 * fVar112;
  auVar69._12_4_ = fVar127 * fStack_1d4 * fVar113;
  auVar69._16_4_ = fVar129 * fStack_1d0 * fVar114;
  auVar69._20_4_ = fVar131 * fStack_1cc * fVar115;
  auVar69._24_4_ = fVar133 * fStack_1c8 * fVar116;
  auVar69._28_4_ = fVar135 * fStack_1c4 * fVar117;
  auVar100 = vdivps_avx(auVar69,auVar123);
  auVar107 = ZEXT1632((undefined1  [16])0x0);
  auVar63 = vcmpps_avx(auVar107,auVar83,0);
  auVar80 = vcmpps_avx(auVar159,auVar107,0);
  uVar121 = auVar80._0_4_ & auVar63._0_4_;
  uVar21 = auVar80._4_4_ & auVar63._4_4_;
  uVar126 = auVar80._8_4_ & auVar63._8_4_;
  uVar128 = auVar80._12_4_ & auVar63._12_4_;
  uVar130 = auVar80._16_4_ & auVar63._16_4_;
  uVar132 = auVar80._20_4_ & auVar63._20_4_;
  uVar134 = auVar80._24_4_ & auVar63._24_4_;
  uVar136 = auVar80._28_4_ & auVar63._28_4_;
  fVar106 = (float)(~uVar121 & auVar81._0_4_);
  fVar111 = (float)(~uVar21 & auVar81._4_4_);
  fVar112 = (float)(~uVar126 & auVar81._8_4_);
  fVar113 = (float)(~uVar128 & auVar81._12_4_);
  fVar114 = (float)(~uVar130 & auVar81._16_4_);
  fVar115 = (float)(~uVar132 & auVar81._20_4_);
  fVar116 = (float)(~uVar134 & auVar81._24_4_);
  fVar117 = (float)(~uVar136 & auVar81._28_4_);
  fVar149 = (float)(~uVar121 & auVar97._0_4_);
  fVar152 = (float)(~uVar21 & auVar97._4_4_);
  fVar153 = (float)(~uVar126 & auVar97._8_4_);
  fVar154 = (float)(~uVar128 & auVar97._12_4_);
  fVar155 = (float)(~uVar130 & auVar97._16_4_);
  fVar156 = (float)(~uVar132 & auVar97._20_4_);
  fVar157 = (float)(~uVar134 & auVar97._24_4_);
  fVar158 = (float)(~uVar136 & auVar97._28_4_);
  fVar120 = (float)(~uVar121 & auVar100._0_4_);
  fVar124 = (float)(~uVar21 & auVar100._4_4_);
  fVar125 = (float)(~uVar126 & auVar100._8_4_);
  fVar127 = (float)(~uVar128 & auVar100._12_4_);
  fVar129 = (float)(~uVar130 & auVar100._16_4_);
  fVar131 = (float)(~uVar132 & auVar100._20_4_);
  fVar133 = (float)(~uVar134 & auVar100._24_4_);
  fVar135 = (float)(~uVar136 & auVar100._28_4_);
  auVar40 = vpcmpgtd_avx(auVar41,auVar56);
  auVar63 = vcmpps_avx(auVar107,auVar159,1);
  auVar70._0_4_ = auVar63._0_4_ & auVar40._0_4_;
  auVar70._4_4_ = auVar63._4_4_ & auVar40._4_4_;
  auVar70._8_4_ = auVar63._8_4_ & auVar40._8_4_;
  auVar70._12_4_ = auVar63._12_4_ & auVar40._12_4_;
  auVar70._16_4_ = auVar63._16_4_ & uVar88;
  auVar70._20_4_ = auVar63._20_4_ & uVar90;
  auVar70._24_4_ = auVar63._24_4_ & uVar92;
  auVar70._28_4_ = auVar63._28_4_ & uVar94;
  uVar121 = vmovmskps_avx(auVar70);
  if (uVar121 == 0) goto LAB_14036905e;
  local_3e0 = auVar57._0_4_;
  iStack_3dc = auVar57._4_4_;
  iStack_3d8 = auVar57._8_4_;
  iStack_3d4 = auVar57._12_4_;
  local_430 = auVar96._0_4_;
  iStack_42c = auVar96._4_4_;
  iStack_428 = auVar96._8_4_;
  iStack_424 = auVar96._12_4_;
  auVar71._0_4_ = fVar137 * fVar106;
  auVar71._4_4_ = fVar142 * fVar111;
  auVar71._8_4_ = fVar143 * fVar112;
  auVar71._12_4_ = fVar144 * fVar113;
  auVar71._16_4_ = fVar145 * fVar114;
  auVar71._20_4_ = fVar146 * fVar115;
  auVar71._24_4_ = fVar147 * fVar116;
  auVar71._28_4_ = fVar148 * fVar117;
  auVar43 = vsubps_avx(auVar43,auVar71);
  cVar20 = (char)uVar121;
  auVar40 = auVar43._0_16_;
  auVar55 = auVar43._16_16_;
  if ((uVar121 & 1) == 0) {
    if ((uVar121 & 2) == 0) goto LAB_140368f1b;
LAB_140369274:
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + iStack_3dc) = uVar4;
    if ((uVar121 & 4) != 0) goto LAB_14036928d;
LAB_140368f24:
    if ((uVar121 & 8) == 0) goto LAB_140368f2d;
LAB_1403692a6:
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + iStack_3d4) = uVar4;
    if ((uVar121 & 0x10) != 0) goto LAB_1403692cb;
LAB_140368f42:
    if ((uVar121 & 0x20) == 0) goto LAB_140368f4b;
LAB_1403692e2:
    uVar4 = vextractps_avx(auVar55,1);
    *(undefined4 *)(param_1 + iStack_42c) = uVar4;
    if ((uVar121 & 0x40) != 0) goto LAB_1403692fb;
LAB_140368f54:
    auVar110._0_4_ = fVar137 * fVar149;
    auVar110._4_4_ = fVar142 * fVar152;
    auVar110._8_4_ = fVar143 * fVar153;
    auVar110._12_4_ = fVar144 * fVar154;
    auVar110._16_4_ = fVar145 * fVar155;
    auVar110._20_4_ = fVar146 * fVar156;
    auVar110._24_4_ = fVar147 * fVar157;
    auVar110._28_4_ = fVar148 * fVar158;
    if (-1 < cVar20) goto LAB_140368f61;
LAB_140369318:
    uVar4 = vextractps_avx(auVar55,3);
    *(undefined4 *)(param_1 + iStack_424) = uVar4;
    auVar43 = vsubps_avx(auVar42,auVar110);
    if ((uVar121 & 1) != 0) goto LAB_140369335;
LAB_140368f6e:
    if ((uVar121 & 2) == 0) goto LAB_140368f77;
LAB_14036934d:
    uVar4 = vextractps_avx(auVar43._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3dc) = uVar4;
    if ((uVar121 & 4) != 0) goto LAB_140369367;
LAB_140368f80:
    if ((uVar121 & 8) == 0) goto LAB_140368f89;
LAB_140369381:
    uVar4 = vextractps_avx(auVar43._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3d4) = uVar4;
    auVar40 = auVar43._16_16_;
    if ((uVar121 & 0x10) != 0) goto LAB_1403693a1;
LAB_140368f98:
    if ((uVar121 & 0x20) == 0) goto LAB_140368fa1;
LAB_1403693b9:
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_42c) = uVar4;
    if ((uVar121 & 0x40) != 0) goto LAB_1403693d3;
LAB_140368faa:
    auVar105._0_4_ = fVar137 * fVar120;
    auVar105._4_4_ = fVar142 * fVar124;
    auVar105._8_4_ = fVar143 * fVar125;
    auVar105._12_4_ = fVar144 * fVar127;
    auVar105._16_4_ = fVar145 * fVar129;
    auVar105._20_4_ = fVar146 * fVar131;
    auVar105._24_4_ = fVar147 * fVar133;
    auVar105._28_4_ = fVar148 * fVar135;
    if (-1 < cVar20) goto LAB_140368fb7;
LAB_1403693f1:
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_424) = uVar4;
    auVar43 = vsubps_avx(auVar61,auVar105);
    if ((uVar121 & 1) != 0) goto LAB_14036940f;
LAB_140368fc4:
    if ((uVar121 & 2) == 0) goto LAB_140368fcd;
LAB_140369427:
    uVar4 = vextractps_avx(auVar43._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3dc) = uVar4;
    if ((uVar121 & 4) != 0) goto LAB_140369441;
LAB_140368fd6:
    if ((uVar121 & 8) == 0) goto LAB_140368fdf;
LAB_14036945b:
    uVar4 = vextractps_avx(auVar43._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3d4) = uVar4;
    auVar40 = auVar43._16_16_;
  }
  else {
    *(int *)(param_1 + local_3e0) = auVar43._0_4_;
    if ((uVar121 & 2) != 0) goto LAB_140369274;
LAB_140368f1b:
    if ((uVar121 & 4) == 0) goto LAB_140368f24;
LAB_14036928d:
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + iStack_3d8) = uVar4;
    if ((uVar121 & 8) != 0) goto LAB_1403692a6;
LAB_140368f2d:
    if ((uVar121 & 0x10) == 0) goto LAB_140368f42;
LAB_1403692cb:
    *(int *)(param_1 + local_430) = auVar43._16_4_;
    if ((uVar121 & 0x20) != 0) goto LAB_1403692e2;
LAB_140368f4b:
    if ((uVar121 & 0x40) == 0) goto LAB_140368f54;
LAB_1403692fb:
    uVar4 = vextractps_avx(auVar55,2);
    *(undefined4 *)(param_1 + iStack_428) = uVar4;
    auVar110._0_4_ = fVar137 * fVar149;
    auVar110._4_4_ = fVar142 * fVar152;
    auVar110._8_4_ = fVar143 * fVar153;
    auVar110._12_4_ = fVar144 * fVar154;
    auVar110._16_4_ = fVar145 * fVar155;
    auVar110._20_4_ = fVar146 * fVar156;
    auVar110._24_4_ = fVar147 * fVar157;
    auVar110._28_4_ = fVar148 * fVar158;
    if (cVar20 < '\0') goto LAB_140369318;
LAB_140368f61:
    auVar43 = vsubps_avx(auVar42,auVar110);
    if ((uVar121 & 1) == 0) goto LAB_140368f6e;
LAB_140369335:
    *(int *)(param_1 + 4 + (longlong)local_3e0) = auVar43._0_4_;
    if ((uVar121 & 2) != 0) goto LAB_14036934d;
LAB_140368f77:
    if ((uVar121 & 4) == 0) goto LAB_140368f80;
LAB_140369367:
    uVar4 = vextractps_avx(auVar43._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3d8) = uVar4;
    if ((uVar121 & 8) != 0) goto LAB_140369381;
LAB_140368f89:
    auVar40 = auVar43._16_16_;
    if ((uVar121 & 0x10) == 0) goto LAB_140368f98;
LAB_1403693a1:
    *(int *)(param_1 + 4 + (longlong)local_430) = auVar40._0_4_;
    if ((uVar121 & 0x20) != 0) goto LAB_1403693b9;
LAB_140368fa1:
    if ((uVar121 & 0x40) == 0) goto LAB_140368faa;
LAB_1403693d3:
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_428) = uVar4;
    auVar105._0_4_ = fVar137 * fVar120;
    auVar105._4_4_ = fVar142 * fVar124;
    auVar105._8_4_ = fVar143 * fVar125;
    auVar105._12_4_ = fVar144 * fVar127;
    auVar105._16_4_ = fVar145 * fVar129;
    auVar105._20_4_ = fVar146 * fVar131;
    auVar105._24_4_ = fVar147 * fVar133;
    auVar105._28_4_ = fVar148 * fVar135;
    if (cVar20 < '\0') goto LAB_1403693f1;
LAB_140368fb7:
    auVar43 = vsubps_avx(auVar61,auVar105);
    if ((uVar121 & 1) == 0) goto LAB_140368fc4;
LAB_14036940f:
    *(int *)(param_1 + 8 + (longlong)local_3e0) = auVar43._0_4_;
    if ((uVar121 & 2) != 0) goto LAB_140369427;
LAB_140368fcd:
    if ((uVar121 & 4) == 0) goto LAB_140368fd6;
LAB_140369441:
    uVar4 = vextractps_avx(auVar43._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3d8) = uVar4;
    if ((uVar121 & 8) != 0) goto LAB_14036945b;
LAB_140368fdf:
    auVar40 = auVar43._16_16_;
  }
  if ((uVar121 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_430) = auVar40._0_4_;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_42c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_428) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_424) = uVar4;
  }
  if ((uVar121 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_3e0) = fVar137;
  }
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar14,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3dc) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar14,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3d8) = uVar4;
  }
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar14,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3d4) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_430) = fVar145;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar54,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_42c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar54,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_428) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar54,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_424) = uVar4;
  }
LAB_14036905e:
  auVar40 = vpcmpgtd_avx(auVar41,auVar56);
  auVar43 = vcmpps_avx(auVar107,auVar83,1);
  auVar53._0_4_ = auVar43._0_4_ & auVar40._0_4_;
  auVar53._4_4_ = auVar43._4_4_ & auVar40._4_4_;
  auVar53._8_4_ = auVar43._8_4_ & auVar40._8_4_;
  auVar53._12_4_ = auVar43._12_4_ & auVar40._12_4_;
  auVar53._16_4_ = auVar43._16_4_ & uVar88;
  auVar53._20_4_ = auVar43._20_4_ & uVar90;
  auVar53._24_4_ = auVar43._24_4_ & uVar92;
  auVar53._28_4_ = auVar43._28_4_ & uVar94;
  uVar121 = vmovmskps_avx(auVar53);
  if (uVar121 == 0) {
    return;
  }
  local_380 = auVar59._0_4_;
  iStack_37c = auVar59._4_4_;
  iStack_378 = auVar59._8_4_;
  iStack_374 = auVar59._12_4_;
  local_360 = auVar58._0_4_;
  fStack_35c = auVar58._4_4_;
  fStack_358 = auVar58._8_4_;
  fStack_354 = auVar58._12_4_;
  local_3c0 = auVar73._0_4_;
  fStack_3bc = auVar73._4_4_;
  fStack_3b8 = auVar73._8_4_;
  fStack_3b4 = auVar73._12_4_;
  fStack_3b0 = auVar73._16_4_;
  fStack_3ac = auVar73._20_4_;
  fStack_3a8 = auVar73._24_4_;
  fStack_3a4 = auVar73._28_4_;
  auVar55._0_4_ = fVar5 * fVar106 + local_3c0;
  auVar55._4_4_ = fVar6 * fVar111 + fStack_3bc;
  auVar55._8_4_ = fVar7 * fVar112 + fStack_3b8;
  auVar55._12_4_ = fVar8 * fVar113 + fStack_3b4;
  auVar75._16_4_ = fVar9 * fVar114 + fStack_3b0;
  auVar75._0_16_ = auVar55;
  auVar75._20_4_ = fVar10 * fVar115 + fStack_3ac;
  auVar75._24_4_ = fVar11 * fVar116 + fStack_3a8;
  auVar75._28_4_ = fVar12 * fVar117 + fStack_3a4;
  cVar20 = (char)uVar121;
  auVar40 = auVar75._16_16_;
  local_3a0 = auVar74._0_4_;
  fStack_39c = auVar74._4_4_;
  fStack_398 = auVar74._8_4_;
  fStack_394 = auVar74._12_4_;
  fStack_390 = auVar74._16_4_;
  fStack_38c = auVar74._20_4_;
  fStack_388 = auVar74._24_4_;
  fStack_384 = auVar74._28_4_;
  local_340 = auVar62._0_4_;
  fStack_33c = auVar62._4_4_;
  fStack_338 = auVar62._8_4_;
  fStack_334 = auVar62._12_4_;
  fStack_330 = auVar62._16_4_;
  fStack_32c = auVar62._20_4_;
  fStack_328 = auVar62._24_4_;
  fStack_324 = auVar62._28_4_;
  if ((uVar121 & 1) != 0) {
    *(float *)(param_1 + local_380) = auVar55._0_4_;
  }
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar55,1);
    *(undefined4 *)(param_1 + iStack_37c) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar55,2);
    *(undefined4 *)(param_1 + iStack_378) = uVar4;
  }
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar55,3);
    *(undefined4 *)(param_1 + iStack_374) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(float *)(param_1 + (int)local_360) = auVar75._16_4_;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + (int)fStack_35c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + (int)fStack_358) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + (int)fStack_354) = uVar4;
    auVar76._0_4_ = fVar149 * fVar5 + local_3a0;
    auVar76._4_4_ = fVar152 * fVar6 + fStack_39c;
    auVar76._8_4_ = fVar153 * fVar7 + fStack_398;
    auVar76._12_4_ = fVar154 * fVar8 + fStack_394;
    auVar76._16_4_ = fVar155 * fVar9 + fStack_390;
    auVar76._20_4_ = fVar156 * fVar10 + fStack_38c;
    auVar76._24_4_ = fVar157 * fVar11 + fStack_388;
    auVar76._28_4_ = fVar158 * fVar12 + fStack_384;
  }
  else {
    auVar76._0_4_ = fVar149 * fVar5 + local_3a0;
    auVar76._4_4_ = fVar152 * fVar6 + fStack_39c;
    auVar76._8_4_ = fVar153 * fVar7 + fStack_398;
    auVar76._12_4_ = fVar154 * fVar8 + fStack_394;
    auVar76._16_4_ = fVar155 * fVar9 + fStack_390;
    auVar76._20_4_ = fVar156 * fVar10 + fStack_38c;
    auVar76._24_4_ = fVar157 * fVar11 + fStack_388;
    auVar76._28_4_ = fVar158 * fVar12 + fStack_384;
  }
  if ((uVar121 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_380) = auVar76._0_4_;
  }
  auVar40 = auVar76._0_16_;
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_378) = uVar4;
  }
  auVar55 = auVar76._16_16_;
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_374) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_360) = auVar76._16_4_;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar55,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_35c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar55,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_358) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar55,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_354) = uVar4;
    auVar77._0_4_ = fVar120 * fVar5 + local_340;
    auVar77._4_4_ = fVar124 * fVar6 + fStack_33c;
    auVar77._8_4_ = fVar125 * fVar7 + fStack_338;
    auVar77._12_4_ = fVar127 * fVar8 + fStack_334;
    auVar77._16_4_ = fVar129 * fVar9 + fStack_330;
    auVar77._20_4_ = fVar131 * fVar10 + fStack_32c;
    auVar77._24_4_ = fVar133 * fVar11 + fStack_328;
    auVar77._28_4_ = fVar135 * fVar12 + fStack_324;
  }
  else {
    auVar77._0_4_ = fVar120 * fVar5 + local_340;
    auVar77._4_4_ = fVar124 * fVar6 + fStack_33c;
    auVar77._8_4_ = fVar125 * fVar7 + fStack_338;
    auVar77._12_4_ = fVar127 * fVar8 + fStack_334;
    auVar77._16_4_ = fVar129 * fVar9 + fStack_330;
    auVar77._20_4_ = fVar131 * fVar10 + fStack_32c;
    auVar77._24_4_ = fVar133 * fVar11 + fStack_328;
    auVar77._28_4_ = fVar135 * fVar12 + fStack_324;
  }
  if ((uVar121 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_380) = auVar77._0_4_;
  }
  auVar40 = auVar77._0_16_;
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_378) = uVar4;
  }
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_374) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_360) = auVar77._16_4_;
  }
  if ((uVar121 & 0x20) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_35c) = auVar77._20_4_;
  }
  if ((uVar121 & 0x40) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_358) = auVar77._24_4_;
  }
  if (cVar20 < '\0') {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_354) = auVar77._28_4_;
  }
  if ((uVar121 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_380) = fVar5;
  }
  if ((uVar121 & 2) != 0) {
    uVar4 = vextractps_avx(auVar95,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar121 & 4) != 0) {
    uVar4 = vextractps_avx(auVar95,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_378) = uVar4;
  }
  if ((uVar121 & 8) != 0) {
    uVar4 = vextractps_avx(auVar95,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_374) = uVar4;
  }
  if ((uVar121 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_360) = fVar9;
  }
  if ((uVar121 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar13,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_35c) = uVar4;
  }
  if ((uVar121 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar13,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_358) = uVar4;
  }
  if (cVar20 < '\0') {
    uVar4 = vextractps_avx(auVar13,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_354) = uVar4;
  }
  return;
}


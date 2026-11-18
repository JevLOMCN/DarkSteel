// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 16

// ApplyPreSimulationTransforms___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuni_avx2 @ 140cd4a60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransforms___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,undefined8 param_9,
               undefined4 *param_10,undefined4 param_11,int param_12,int param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [32];
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [32];
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 (*pauVar19) [32];
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  float fVar37;
  float fVar41;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  float fVar42;
  float fVar43;
  float fVar50;
  float fVar52;
  float fVar54;
  undefined1 auVar44 [16];
  float fVar51;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  float fVar64;
  float fVar76;
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 in_ZMM2 [64];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [16];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 in_ZMM4 [64];
  float fVar91;
  undefined1 auVar92 [16];
  float fVar104;
  float fVar108;
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  float fVar102;
  float fVar103;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 in_ZMM5 [64];
  float fVar109;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  float fVar120;
  undefined1 auVar121 [16];
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  float fVar133;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  float fVar148;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  undefined1 auVar149 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  float fVar159;
  undefined1 auVar160 [16];
  float fVar165;
  float fVar166;
  float fVar168;
  float fVar170;
  float fVar171;
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  float fVar167;
  float fVar172;
  undefined1 auVar163 [32];
  undefined1 auVar169 [16];
  undefined1 auVar164 [32];
  float fVar173;
  float fVar174;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  float fVar181;
  float fVar182;
  float fVar183;
  float fVar185;
  float fVar187;
  undefined1 auVar175 [32];
  float fVar186;
  float fVar188;
  float fVar189;
  float fVar190;
  undefined1 auVar184 [16];
  float fVar191;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  undefined1 auVar192 [32];
  float fVar200;
  undefined1 auVar193 [32];
  undefined1 auVar201 [32];
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined1 auVar31 [32];
  undefined1 auVar45 [32];
  undefined1 auVar84 [32];
  undefined1 auVar99 [32];
  undefined1 auVar125 [32];
  
  uVar8 = __real_00000030;
  uVar7 = __real_00000006;
  uVar6 = __real_0000000c;
  uVar5 = __real_00000008;
  uVar2 = __real_00000004;
  uVar18 = param_13 - param_12;
  uVar15 = uVar18 + 7;
  if (-1 < (int)uVar18) {
    uVar15 = uVar18;
  }
  iVar9 = ((uVar15 & 0xfffffff8) - uVar18) + param_13;
  if (param_12 < iVar9) {
    lVar20 = (longlong)param_12;
    lVar4 = lVar20 * 0xc;
    lVar10 = param_3 + 0x40;
    pauVar19 = (undefined1 (*) [32])(lVar20 * 0x10 + param_1 + 0x60);
    lVar13 = param_2 + 0x40;
    lVar17 = param_4 + 0x40;
    lVar16 = param_7 + 0x40;
    lVar12 = param_5 + 0x40;
    param_12 = param_12 << 2;
    do {
      auVar110 = *(undefined1 (*) [32])(param_8 + param_12);
      auVar86._4_4_ = uVar7;
      auVar86._0_4_ = uVar7;
      auVar86._8_4_ = uVar7;
      auVar86._12_4_ = uVar7;
      auVar86._16_4_ = uVar7;
      auVar86._20_4_ = uVar7;
      auVar86._24_4_ = uVar7;
      auVar86._28_4_ = uVar7;
      vpmulld_avx2(auVar110,auVar86);
      auVar111 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar157 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar111._4_4_ = uVar8;
      auVar111._0_4_ = uVar8;
      auVar111._8_4_ = uVar8;
      auVar111._12_4_ = uVar8;
      auVar111._16_4_ = uVar8;
      auVar111._20_4_ = uVar8;
      auVar111._24_4_ = uVar8;
      auVar111._28_4_ = uVar8;
      auVar111 = vpmulld_avx2(auVar110,auVar111);
      auVar81._4_4_ = uVar2;
      auVar81._0_4_ = uVar2;
      auVar81._8_4_ = uVar2;
      auVar81._12_4_ = uVar2;
      auVar81._16_4_ = uVar2;
      auVar81._20_4_ = uVar2;
      auVar81._24_4_ = uVar2;
      auVar81._28_4_ = uVar2;
      vpor_avx2(auVar111,auVar81);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar158 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar66._4_4_ = uVar5;
      auVar66._0_4_ = uVar5;
      auVar66._8_4_ = uVar5;
      auVar66._12_4_ = uVar5;
      auVar66._16_4_ = uVar5;
      auVar66._20_4_ = uVar5;
      auVar66._24_4_ = uVar5;
      auVar66._28_4_ = uVar5;
      vpor_avx2(auVar111,auVar66);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar161 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar110._4_4_ = uVar6;
      auVar110._0_4_ = uVar6;
      auVar110._8_4_ = uVar6;
      auVar110._12_4_ = uVar6;
      auVar110._16_4_ = uVar6;
      auVar110._20_4_ = uVar6;
      auVar110._24_4_ = uVar6;
      auVar110._28_4_ = uVar6;
      vpor_avx2(auVar111,auVar110);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar175 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar201 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar77 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar110 = vpcmpeqd_avx2(auVar77,auVar77);
      auVar23 = vgatherdps(ZEXT432(0) << 0x20,auVar110);
      auVar110 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar24 = vgatherdps(ZEXT832(0) << 0x20,auVar110);
      auVar110 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      fVar51 = auVar24._4_4_;
      fVar53 = auVar24._8_4_;
      fVar55 = auVar24._12_4_;
      auVar25 = vgatherdps(ZEXT832(0) << 0x20,auVar110);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      fVar64 = auVar25._0_4_;
      fVar70 = auVar25._4_4_;
      fVar71 = auVar25._8_4_;
      fVar72 = auVar25._12_4_;
      auVar26 = vgatherdps(ZEXT832(0) << 0x20,auVar110);
      auVar110 = *(undefined1 (*) [32])(lVar10 + -0x40 + lVar4);
      auVar111 = *(undefined1 (*) [32])(lVar10 + -0x20 + lVar4);
      auVar66 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar111);
      auVar81 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar66 = vblendps_avx(auVar81,auVar66,0x88);
      auVar81 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar111);
      auVar86 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(lVar10 + lVar4));
      auVar81 = vblendps_avx(auVar86,auVar81,0x13);
      auVar86 = vperm2f128_avx(auVar66,auVar81,0x31);
      auVar110 = vblendps_avx(auVar111,auVar110,0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(lVar10 + lVar4));
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      fVar43 = auVar24._0_4_;
      fVar91 = auVar66._0_4_ * fVar43;
      fVar102 = auVar66._4_4_ * fVar51;
      fVar103 = auVar66._8_4_ * fVar53;
      fVar104 = auVar66._12_4_ * fVar55;
      fVar57 = auVar24._16_4_;
      fVar105 = auVar81._0_4_ * fVar57;
      fVar59 = auVar24._20_4_;
      fVar106 = auVar81._4_4_ * fVar59;
      fVar61 = auVar24._24_4_;
      fVar107 = auVar81._8_4_ * fVar61;
      fVar63 = auVar24._28_4_;
      fVar108 = auVar81._12_4_ * fVar63;
      fVar42 = fVar64 * auVar86._0_4_;
      fVar50 = fVar70 * auVar86._4_4_;
      fVar52 = fVar71 * auVar86._8_4_;
      fVar54 = fVar72 * auVar86._12_4_;
      fVar73 = auVar25._16_4_;
      fVar56 = fVar73 * auVar86._16_4_;
      fVar74 = auVar25._20_4_;
      fVar58 = fVar74 * auVar86._20_4_;
      fVar75 = auVar25._24_4_;
      fVar60 = fVar75 * auVar86._24_4_;
      fVar76 = auVar25._28_4_;
      fVar62 = fVar76 * auVar86._28_4_;
      fVar21 = auVar26._0_4_;
      fVar109 = fVar21 * auVar110._0_4_;
      fVar35 = auVar26._4_4_;
      fVar113 = fVar35 * auVar110._4_4_;
      fVar36 = auVar26._8_4_;
      fVar114 = fVar36 * auVar110._8_4_;
      fVar37 = auVar26._12_4_;
      fVar115 = fVar37 * auVar110._12_4_;
      fVar38 = auVar26._16_4_;
      fVar116 = fVar38 * auVar110._16_4_;
      fVar39 = auVar26._20_4_;
      fVar117 = fVar39 * auVar110._20_4_;
      fVar40 = auVar26._24_4_;
      fVar118 = fVar40 * auVar110._24_4_;
      fVar41 = auVar26._28_4_;
      fVar119 = fVar41 * auVar110._28_4_;
      fVar174 = auVar158._0_4_;
      fVar177 = auVar158._4_4_;
      fVar179 = auVar158._8_4_;
      fVar181 = auVar158._12_4_;
      fVar183 = auVar158._16_4_;
      fVar186 = auVar158._20_4_;
      fVar188 = auVar158._24_4_;
      fVar190 = auVar158._28_4_;
      fVar191 = auVar161._0_4_;
      fVar194 = auVar161._4_4_;
      fVar195 = auVar161._8_4_;
      fVar196 = auVar161._12_4_;
      fVar197 = auVar161._16_4_;
      fVar198 = auVar161._20_4_;
      fVar199 = auVar161._24_4_;
      fVar200 = auVar161._28_4_;
      fVar159 = auVar157._0_4_;
      fVar165 = auVar157._4_4_;
      fVar166 = auVar157._8_4_;
      fVar167 = auVar157._12_4_;
      fVar168 = auVar157._16_4_;
      fVar170 = auVar157._20_4_;
      fVar171 = auVar157._24_4_;
      fVar172 = auVar157._28_4_;
      fVar120 = fVar159 * fVar42 - fVar174 * fVar91;
      fVar126 = fVar165 * fVar50 - fVar177 * fVar102;
      fVar127 = fVar166 * fVar52 - fVar179 * fVar103;
      fVar128 = fVar167 * fVar54 - fVar181 * fVar104;
      fVar129 = fVar168 * fVar56 - fVar183 * fVar105;
      fVar130 = fVar170 * fVar58 - fVar186 * fVar106;
      fVar131 = fVar171 * fVar60 - fVar188 * fVar107;
      fVar132 = fVar172 * fVar62 - fVar190 * fVar108;
      fVar133 = fVar174 * fVar109 - fVar191 * fVar42;
      fVar141 = fVar177 * fVar113 - fVar194 * fVar50;
      fVar142 = fVar179 * fVar114 - fVar195 * fVar52;
      fVar143 = fVar181 * fVar115 - fVar196 * fVar54;
      fVar144 = fVar183 * fVar116 - fVar197 * fVar56;
      fVar145 = fVar186 * fVar117 - fVar198 * fVar58;
      fVar146 = fVar188 * fVar118 - fVar199 * fVar60;
      fVar147 = fVar190 * fVar119 - fVar200 * fVar62;
      fVar148 = fVar191 * fVar91 - fVar159 * fVar109;
      fVar150 = fVar194 * fVar102 - fVar165 * fVar113;
      fVar151 = fVar195 * fVar103 - fVar166 * fVar114;
      fVar152 = fVar196 * fVar104 - fVar167 * fVar115;
      fVar153 = fVar197 * fVar105 - fVar168 * fVar116;
      fVar154 = fVar198 * fVar106 - fVar170 * fVar117;
      fVar155 = fVar199 * fVar107 - fVar171 * fVar118;
      fVar156 = fVar200 * fVar108 - fVar172 * fVar119;
      fVar133 = fVar133 + fVar133;
      fVar141 = fVar141 + fVar141;
      fVar142 = fVar142 + fVar142;
      fVar143 = fVar143 + fVar143;
      fVar144 = fVar144 + fVar144;
      fVar145 = fVar145 + fVar145;
      fVar146 = fVar146 + fVar146;
      fVar147 = fVar147 + fVar147;
      fVar148 = fVar148 + fVar148;
      fVar150 = fVar150 + fVar150;
      fVar151 = fVar151 + fVar151;
      fVar152 = fVar152 + fVar152;
      fVar153 = fVar153 + fVar153;
      fVar154 = fVar154 + fVar154;
      fVar155 = fVar155 + fVar155;
      fVar156 = fVar156 + fVar156;
      fVar120 = fVar120 + fVar120;
      fVar126 = fVar126 + fVar126;
      fVar127 = fVar127 + fVar127;
      fVar128 = fVar128 + fVar128;
      fVar129 = fVar129 + fVar129;
      fVar130 = fVar130 + fVar130;
      fVar131 = fVar131 + fVar131;
      fVar132 = fVar132 + fVar132;
      fVar173 = auVar175._0_4_;
      fVar176 = auVar175._4_4_;
      fVar178 = auVar175._8_4_;
      fVar180 = auVar175._12_4_;
      fVar182 = auVar175._16_4_;
      fVar185 = auVar175._20_4_;
      fVar187 = auVar175._24_4_;
      fVar189 = auVar175._28_4_;
      auVar122._0_4_ =
           auVar201._0_4_ + (fVar174 * fVar120 - fVar191 * fVar148) + fVar173 * fVar133 + fVar91;
      auVar122._4_4_ =
           auVar201._4_4_ + (fVar177 * fVar126 - fVar194 * fVar150) + fVar176 * fVar141 + fVar102;
      auVar122._8_4_ =
           auVar201._8_4_ + (fVar179 * fVar127 - fVar195 * fVar151) + fVar178 * fVar142 + fVar103;
      auVar122._12_4_ =
           auVar201._12_4_ + (fVar181 * fVar128 - fVar196 * fVar152) + fVar180 * fVar143 + fVar104;
      auVar122._16_4_ =
           auVar201._16_4_ + (fVar183 * fVar129 - fVar197 * fVar153) + fVar182 * fVar144 + fVar105;
      auVar122._20_4_ =
           auVar201._20_4_ + (fVar186 * fVar130 - fVar198 * fVar154) + fVar185 * fVar145 + fVar106;
      auVar122._24_4_ =
           auVar201._24_4_ + (fVar188 * fVar131 - fVar199 * fVar155) + fVar187 * fVar146 + fVar107;
      auVar122._28_4_ =
           auVar201._28_4_ + (fVar190 * fVar132 - fVar200 * fVar156) + fVar189 * fVar147 + fVar108;
      local_388 = auVar77._0_4_;
      fStack_384 = auVar77._4_4_;
      fStack_380 = auVar77._8_4_;
      fStack_37c = auVar77._12_4_;
      fStack_378 = auVar77._16_4_;
      fStack_374 = auVar77._20_4_;
      fStack_370 = auVar77._24_4_;
      fStack_36c = auVar77._28_4_;
      auVar157._0_4_ =
           fVar173 * fVar148 + fVar42 + (fVar191 * fVar133 - fVar159 * fVar120) + local_388;
      auVar157._4_4_ =
           fVar176 * fVar150 + fVar50 + (fVar194 * fVar141 - fVar165 * fVar126) + fStack_384;
      auVar157._8_4_ =
           fVar178 * fVar151 + fVar52 + (fVar195 * fVar142 - fVar166 * fVar127) + fStack_380;
      auVar157._12_4_ =
           fVar180 * fVar152 + fVar54 + (fVar196 * fVar143 - fVar167 * fVar128) + fStack_37c;
      auVar157._16_4_ =
           fVar182 * fVar153 + fVar56 + (fVar197 * fVar144 - fVar168 * fVar129) + fStack_378;
      auVar157._20_4_ =
           fVar185 * fVar154 + fVar58 + (fVar198 * fVar145 - fVar170 * fVar130) + fStack_374;
      auVar157._24_4_ =
           fVar187 * fVar155 + fVar60 + (fVar199 * fVar146 - fVar171 * fVar131) + fStack_370;
      auVar157._28_4_ =
           fVar189 * fVar156 + fVar62 + (fVar200 * fVar147 - fVar172 * fVar132) + fStack_36c;
      auVar149._0_4_ =
           auVar23._0_4_ + (fVar159 * fVar148 - fVar174 * fVar133) + fVar173 * fVar120 + fVar109;
      auVar149._4_4_ =
           auVar23._4_4_ + (fVar165 * fVar150 - fVar177 * fVar141) + fVar176 * fVar126 + fVar113;
      auVar149._8_4_ =
           auVar23._8_4_ + (fVar166 * fVar151 - fVar179 * fVar142) + fVar178 * fVar127 + fVar114;
      auVar149._12_4_ =
           auVar23._12_4_ + (fVar167 * fVar152 - fVar181 * fVar143) + fVar180 * fVar128 + fVar115;
      auVar149._16_4_ =
           auVar23._16_4_ + (fVar168 * fVar153 - fVar183 * fVar144) + fVar182 * fVar129 + fVar116;
      auVar149._20_4_ =
           auVar23._20_4_ + (fVar170 * fVar154 - fVar186 * fVar145) + fVar185 * fVar130 + fVar117;
      auVar149._24_4_ =
           auVar23._24_4_ + (fVar171 * fVar155 - fVar188 * fVar146) + fVar187 * fVar131 + fVar118;
      auVar149._28_4_ =
           auVar23._28_4_ + (fVar172 * fVar156 - fVar190 * fVar147) + fVar189 * fVar132 + fVar119;
      uVar1 = *param_10;
      auVar161._4_4_ = uVar1;
      auVar161._0_4_ = uVar1;
      auVar161._8_4_ = uVar1;
      auVar161._12_4_ = uVar1;
      auVar161._16_4_ = uVar1;
      auVar161._20_4_ = uVar1;
      auVar161._24_4_ = uVar1;
      auVar161._28_4_ = uVar1;
      auVar66 = vsubps_avx(auVar122,auVar161);
      uVar1 = param_10[1];
      auVar27._4_4_ = uVar1;
      auVar27._0_4_ = uVar1;
      auVar27._8_4_ = uVar1;
      auVar27._12_4_ = uVar1;
      auVar27._16_4_ = uVar1;
      auVar27._20_4_ = uVar1;
      auVar27._24_4_ = uVar1;
      auVar27._28_4_ = uVar1;
      auVar81 = vsubps_avx(auVar157,auVar27);
      uVar1 = param_10[2];
      auVar28._4_4_ = uVar1;
      auVar28._0_4_ = uVar1;
      auVar28._8_4_ = uVar1;
      auVar28._12_4_ = uVar1;
      auVar28._16_4_ = uVar1;
      auVar28._20_4_ = uVar1;
      auVar28._24_4_ = uVar1;
      auVar28._28_4_ = uVar1;
      auVar86 = vsubps_avx(auVar149,auVar28);
      auVar110 = *(undefined1 (*) [32])(param_6 + param_12);
      auVar111 = vunpcklps_avx(auVar66,auVar81);
      auVar24 = vunpcklps_avx(auVar86,auVar110);
      auVar25 = vunpcklpd_avx(auVar111,auVar24);
      auVar111 = vunpckhpd_avx(auVar111,auVar24);
      auVar158._16_16_ = auVar111._0_16_;
      auVar158._0_16_ = auVar25._0_16_;
      pauVar19[-3] = auVar158;
      auVar110 = vunpckhps_avx(auVar86,auVar110);
      auVar24 = vunpckhps_avx(auVar66,auVar81);
      auVar26 = vunpcklpd_avx(auVar24,auVar110);
      auVar110 = vunpckhpd_avx(auVar24,auVar110);
      auVar192._16_16_ = auVar110._0_16_;
      auVar192._0_16_ = auVar26._0_16_;
      pauVar19[-2] = auVar192;
      auVar111 = vperm2f128_avx(auVar25,auVar111,0x31);
      pauVar19[-1] = auVar111;
      auVar110 = vperm2f128_avx(auVar26,auVar110,0x31);
      *pauVar19 = auVar110;
      auVar24._16_16_ = auVar81._0_16_;
      auVar24._0_16_ = auVar66._0_16_;
      auVar111 = vshufpd_avx(auVar66,auVar24,2);
      auVar24 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar86);
      auVar110 = vpermpd_avx2(auVar81,0xe9);
      auVar110 = vblendps_avx(auVar24,auVar110,7);
      auVar24 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar111);
      auVar111 = vblendps_avx(auVar111,auVar24,0xa4);
      *(undefined1 (*) [32])(lVar10 + -0x40 + lVar4) = auVar111;
      auVar111 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar110);
      auVar110 = vshufpd_avx(auVar66,auVar66,1);
      auVar110 = vblendps_avx(auVar111,auVar110,0x92);
      *(undefined1 (*) [32])(lVar10 + -0x20 + lVar4) = auVar110;
      auVar111 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar81);
      auVar110 = vpermpd_avx2(auVar66,0xff);
      auVar110 = vblendps_avx(auVar111,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar86,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      *(undefined1 (*) [32])(lVar10 + lVar4) = auVar110;
      auVar25 = ___ymm_0000000200000002000000000000000000000001000000000000000100000000;
      auVar24 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
      auVar110 = *(undefined1 (*) [32])(lVar13 + -0x40 + lVar4);
      auVar111 = *(undefined1 (*) [32])(lVar13 + -0x20 + lVar4);
      auVar66 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar111);
      auVar81 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar66 = vblendps_avx(auVar81,auVar66,0x88);
      auVar81 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar111);
      auVar86 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(lVar13 + lVar4));
      auVar81 = vblendps_avx(auVar86,auVar81,0x13);
      auVar86 = vperm2f128_avx(auVar66,auVar81,0x31);
      auVar110 = vblendps_avx(auVar111,auVar110,0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(lVar13 + lVar4));
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      fVar148 = auVar66._0_4_ * fVar43;
      fVar150 = auVar66._4_4_ * fVar51;
      fVar151 = auVar66._8_4_ * fVar53;
      fVar152 = auVar66._12_4_ * fVar55;
      fVar153 = auVar81._0_4_ * fVar57;
      fVar154 = auVar81._4_4_ * fVar59;
      fVar155 = auVar81._8_4_ * fVar61;
      fVar156 = auVar81._12_4_ * fVar63;
      fVar91 = fVar64 * auVar86._0_4_;
      fVar102 = fVar70 * auVar86._4_4_;
      fVar103 = fVar71 * auVar86._8_4_;
      fVar104 = fVar72 * auVar86._12_4_;
      fVar105 = fVar73 * auVar86._16_4_;
      fVar106 = fVar74 * auVar86._20_4_;
      fVar107 = fVar75 * auVar86._24_4_;
      fVar108 = fVar76 * auVar86._28_4_;
      fVar42 = fVar21 * auVar110._0_4_;
      fVar50 = fVar35 * auVar110._4_4_;
      fVar52 = fVar36 * auVar110._8_4_;
      fVar54 = fVar37 * auVar110._12_4_;
      fVar56 = fVar38 * auVar110._16_4_;
      fVar58 = fVar39 * auVar110._20_4_;
      fVar60 = fVar40 * auVar110._24_4_;
      fVar62 = fVar41 * auVar110._28_4_;
      fVar109 = fVar159 * fVar91 - fVar174 * fVar148;
      fVar113 = fVar165 * fVar102 - fVar177 * fVar150;
      fVar114 = fVar166 * fVar103 - fVar179 * fVar151;
      fVar115 = fVar167 * fVar104 - fVar181 * fVar152;
      fVar116 = fVar168 * fVar105 - fVar183 * fVar153;
      fVar117 = fVar170 * fVar106 - fVar186 * fVar154;
      fVar118 = fVar171 * fVar107 - fVar188 * fVar155;
      fVar119 = fVar172 * fVar108 - fVar190 * fVar156;
      fVar120 = fVar174 * fVar42 - fVar191 * fVar91;
      fVar126 = fVar177 * fVar50 - fVar194 * fVar102;
      fVar127 = fVar179 * fVar52 - fVar195 * fVar103;
      fVar128 = fVar181 * fVar54 - fVar196 * fVar104;
      fVar129 = fVar183 * fVar56 - fVar197 * fVar105;
      fVar130 = fVar186 * fVar58 - fVar198 * fVar106;
      fVar131 = fVar188 * fVar60 - fVar199 * fVar107;
      fVar132 = fVar190 * fVar62 - fVar200 * fVar108;
      fVar133 = fVar191 * fVar148 - fVar159 * fVar42;
      fVar141 = fVar194 * fVar150 - fVar165 * fVar50;
      fVar142 = fVar195 * fVar151 - fVar166 * fVar52;
      fVar143 = fVar196 * fVar152 - fVar167 * fVar54;
      fVar144 = fVar197 * fVar153 - fVar168 * fVar56;
      fVar145 = fVar198 * fVar154 - fVar170 * fVar58;
      fVar146 = fVar199 * fVar155 - fVar171 * fVar60;
      fVar147 = fVar200 * fVar156 - fVar172 * fVar62;
      fVar120 = fVar120 + fVar120;
      fVar126 = fVar126 + fVar126;
      fVar127 = fVar127 + fVar127;
      fVar128 = fVar128 + fVar128;
      fVar129 = fVar129 + fVar129;
      fVar130 = fVar130 + fVar130;
      fVar131 = fVar131 + fVar131;
      fVar132 = fVar132 + fVar132;
      fVar133 = fVar133 + fVar133;
      fVar141 = fVar141 + fVar141;
      fVar142 = fVar142 + fVar142;
      fVar143 = fVar143 + fVar143;
      fVar144 = fVar144 + fVar144;
      fVar145 = fVar145 + fVar145;
      fVar146 = fVar146 + fVar146;
      fVar147 = fVar147 + fVar147;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      auVar77._0_4_ = (fVar159 * fVar133 - fVar174 * fVar120) + fVar173 * fVar109 + fVar42;
      auVar77._4_4_ = (fVar165 * fVar141 - fVar177 * fVar126) + fVar176 * fVar113 + fVar50;
      auVar77._8_4_ = (fVar166 * fVar142 - fVar179 * fVar127) + fVar178 * fVar114 + fVar52;
      auVar77._12_4_ = (fVar167 * fVar143 - fVar181 * fVar128) + fVar180 * fVar115 + fVar54;
      auVar77._16_4_ = (fVar168 * fVar144 - fVar183 * fVar129) + fVar182 * fVar116 + fVar56;
      auVar77._20_4_ = (fVar170 * fVar145 - fVar186 * fVar130) + fVar185 * fVar117 + fVar58;
      auVar77._24_4_ = (fVar171 * fVar146 - fVar188 * fVar131) + fVar187 * fVar118 + fVar60;
      auVar77._28_4_ = (fVar172 * fVar147 - fVar190 * fVar132) + fVar189 * fVar119 + fVar62;
      auVar83._0_4_ = fVar173 * fVar120 + fVar148 + (fVar174 * fVar109 - fVar191 * fVar133);
      auVar83._4_4_ = fVar176 * fVar126 + fVar150 + (fVar177 * fVar113 - fVar194 * fVar141);
      auVar83._8_4_ = fVar178 * fVar127 + fVar151 + (fVar179 * fVar114 - fVar195 * fVar142);
      auVar83._12_4_ = fVar180 * fVar128 + fVar152 + (fVar181 * fVar115 - fVar196 * fVar143);
      auVar84._16_4_ = fVar182 * fVar129 + fVar153 + (fVar183 * fVar116 - fVar197 * fVar144);
      auVar84._0_16_ = auVar83;
      auVar84._20_4_ = fVar185 * fVar130 + fVar154 + (fVar186 * fVar117 - fVar198 * fVar145);
      auVar84._24_4_ = fVar187 * fVar131 + fVar155 + (fVar188 * fVar118 - fVar199 * fVar146);
      auVar84._28_4_ = fVar189 * fVar132 + fVar156 + (fVar190 * fVar119 - fVar200 * fVar147);
      auVar44._0_4_ = fVar173 * fVar133 + fVar91 + (fVar191 * fVar120 - fVar159 * fVar109);
      auVar44._4_4_ = fVar176 * fVar141 + fVar102 + (fVar194 * fVar126 - fVar165 * fVar113);
      auVar44._8_4_ = fVar178 * fVar142 + fVar103 + (fVar195 * fVar127 - fVar166 * fVar114);
      auVar44._12_4_ = fVar180 * fVar143 + fVar104 + (fVar196 * fVar128 - fVar167 * fVar115);
      auVar45._16_4_ = fVar182 * fVar144 + fVar105 + (fVar197 * fVar129 - fVar168 * fVar116);
      auVar45._0_16_ = auVar44;
      auVar45._20_4_ = fVar185 * fVar145 + fVar106 + (fVar198 * fVar130 - fVar170 * fVar117);
      auVar45._24_4_ = fVar187 * fVar146 + fVar107 + (fVar199 * fVar131 - fVar171 * fVar118);
      auVar45._28_4_ = fVar189 * fVar147 + fVar108 + (fVar200 * fVar132 - fVar172 * fVar119);
      auVar175._16_16_ = auVar44;
      auVar175._0_16_ = auVar83;
      auVar111 = vshufpd_avx(auVar84,auVar175,2);
      auVar66 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar77);
      auVar110 = vpermpd_avx2(auVar45,0xe9);
      auVar110 = vblendps_avx(auVar66,auVar110,7);
      auVar66 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar111);
      auVar111 = vblendps_avx(auVar111,auVar66,0xa4);
      *(undefined1 (*) [32])(lVar13 + -0x40 + lVar4) = auVar111;
      auVar111 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar110);
      auVar110 = vshufpd_avx(auVar84,auVar84,1);
      auVar110 = vblendps_avx(auVar111,auVar110,0x92);
      *(undefined1 (*) [32])(lVar13 + -0x20 + lVar4) = auVar110;
      auVar175 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar111 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar45);
      auVar110 = vpermpd_avx2(auVar84,0xff);
      auVar110 = vblendps_avx(auVar111,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar77,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      *(undefined1 (*) [32])(lVar13 + lVar4) = auVar110;
      auVar158 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar157 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar77 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar110 = *(undefined1 (*) [32])(lVar17 + -0x40 + lVar4);
      auVar111 = *(undefined1 (*) [32])(lVar17 + -0x20 + lVar4);
      auVar66 = vpermps_avx2(auVar25,auVar111);
      auVar81 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar66 = vblendps_avx(auVar81,auVar66,0x88);
      auVar81 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar111);
      auVar86 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(lVar17 + lVar4));
      auVar81 = vblendps_avx(auVar86,auVar81,0x13);
      auVar86 = vperm2f128_avx(auVar66,auVar81,0x31);
      auVar110 = vblendps_avx(auVar111,auVar110,0x24);
      auVar110 = vpermps_avx2(auVar24,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(lVar17 + lVar4));
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      fVar43 = auVar66._0_4_ * fVar43;
      fVar51 = auVar66._4_4_ * fVar51;
      fVar53 = auVar66._8_4_ * fVar53;
      fVar55 = auVar66._12_4_ * fVar55;
      fVar57 = auVar81._0_4_ * fVar57;
      fVar59 = auVar81._4_4_ * fVar59;
      fVar61 = auVar81._8_4_ * fVar61;
      fVar63 = auVar81._12_4_ * fVar63;
      fVar64 = fVar64 * auVar86._0_4_;
      fVar70 = fVar70 * auVar86._4_4_;
      fVar71 = fVar71 * auVar86._8_4_;
      fVar72 = fVar72 * auVar86._12_4_;
      fVar73 = fVar73 * auVar86._16_4_;
      fVar74 = fVar74 * auVar86._20_4_;
      fVar75 = fVar75 * auVar86._24_4_;
      fVar76 = fVar76 * auVar86._28_4_;
      fVar21 = fVar21 * auVar110._0_4_;
      fVar35 = fVar35 * auVar110._4_4_;
      fVar36 = fVar36 * auVar110._8_4_;
      fVar37 = fVar37 * auVar110._12_4_;
      fVar38 = fVar38 * auVar110._16_4_;
      fVar39 = fVar39 * auVar110._20_4_;
      fVar40 = fVar40 * auVar110._24_4_;
      fVar41 = fVar41 * auVar110._28_4_;
      fVar42 = fVar159 * fVar64 - fVar174 * fVar43;
      fVar50 = fVar165 * fVar70 - fVar177 * fVar51;
      fVar52 = fVar166 * fVar71 - fVar179 * fVar53;
      fVar54 = fVar167 * fVar72 - fVar181 * fVar55;
      fVar56 = fVar168 * fVar73 - fVar183 * fVar57;
      fVar58 = fVar170 * fVar74 - fVar186 * fVar59;
      fVar60 = fVar171 * fVar75 - fVar188 * fVar61;
      fVar62 = fVar172 * fVar76 - fVar190 * fVar63;
      fVar91 = fVar174 * fVar21 - fVar191 * fVar64;
      fVar102 = fVar177 * fVar35 - fVar194 * fVar70;
      fVar103 = fVar179 * fVar36 - fVar195 * fVar71;
      fVar104 = fVar181 * fVar37 - fVar196 * fVar72;
      fVar105 = fVar183 * fVar38 - fVar197 * fVar73;
      fVar106 = fVar186 * fVar39 - fVar198 * fVar74;
      fVar107 = fVar188 * fVar40 - fVar199 * fVar75;
      fVar108 = fVar190 * fVar41 - fVar200 * fVar76;
      fVar109 = fVar191 * fVar43 - fVar159 * fVar21;
      fVar113 = fVar194 * fVar51 - fVar165 * fVar35;
      fVar114 = fVar195 * fVar53 - fVar166 * fVar36;
      fVar115 = fVar196 * fVar55 - fVar167 * fVar37;
      fVar116 = fVar197 * fVar57 - fVar168 * fVar38;
      fVar117 = fVar198 * fVar59 - fVar170 * fVar39;
      fVar118 = fVar199 * fVar61 - fVar171 * fVar40;
      fVar119 = fVar200 * fVar63 - fVar172 * fVar41;
      fVar91 = fVar91 + fVar91;
      fVar102 = fVar102 + fVar102;
      fVar103 = fVar103 + fVar103;
      fVar104 = fVar104 + fVar104;
      fVar105 = fVar105 + fVar105;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar108 = fVar108 + fVar108;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar42 = fVar42 + fVar42;
      fVar50 = fVar50 + fVar50;
      fVar52 = fVar52 + fVar52;
      fVar54 = fVar54 + fVar54;
      fVar56 = fVar56 + fVar56;
      fVar58 = fVar58 + fVar58;
      fVar60 = fVar60 + fVar60;
      fVar62 = fVar62 + fVar62;
      auVar46._0_4_ =
           (fVar42 * fVar174 - fVar191 * fVar109) + fVar173 * fVar91 + fVar43 + auVar201._0_4_;
      auVar46._4_4_ =
           (fVar50 * fVar177 - fVar194 * fVar113) + fVar176 * fVar102 + fVar51 + auVar201._4_4_;
      auVar46._8_4_ =
           (fVar52 * fVar179 - fVar195 * fVar114) + fVar178 * fVar103 + fVar53 + auVar201._8_4_;
      auVar46._12_4_ =
           (fVar54 * fVar181 - fVar196 * fVar115) + fVar180 * fVar104 + fVar55 + auVar201._12_4_;
      auVar46._16_4_ =
           (fVar56 * fVar183 - fVar197 * fVar116) + fVar182 * fVar105 + fVar57 + auVar201._16_4_;
      auVar46._20_4_ =
           (fVar58 * fVar186 - fVar198 * fVar117) + fVar185 * fVar106 + fVar59 + auVar201._20_4_;
      auVar46._24_4_ =
           (fVar60 * fVar188 - fVar199 * fVar118) + fVar187 * fVar107 + fVar61 + auVar201._24_4_;
      auVar46._28_4_ =
           (fVar62 * fVar190 - fVar200 * fVar119) + fVar189 * fVar108 + fVar63 + auVar201._28_4_;
      auVar201._0_4_ =
           fVar173 * fVar109 + fVar64 + (fVar91 * fVar191 - fVar159 * fVar42) + local_388;
      auVar201._4_4_ =
           fVar176 * fVar113 + fVar70 + (fVar102 * fVar194 - fVar165 * fVar50) + fStack_384;
      auVar201._8_4_ =
           fVar178 * fVar114 + fVar71 + (fVar103 * fVar195 - fVar166 * fVar52) + fStack_380;
      auVar201._12_4_ =
           fVar180 * fVar115 + fVar72 + (fVar104 * fVar196 - fVar167 * fVar54) + fStack_37c;
      auVar201._16_4_ =
           fVar182 * fVar116 + fVar73 + (fVar105 * fVar197 - fVar168 * fVar56) + fStack_378;
      auVar201._20_4_ =
           fVar185 * fVar117 + fVar74 + (fVar106 * fVar198 - fVar170 * fVar58) + fStack_374;
      auVar201._24_4_ =
           fVar187 * fVar118 + fVar75 + (fVar107 * fVar199 - fVar171 * fVar60) + fStack_370;
      auVar201._28_4_ =
           fVar189 * fVar119 + fVar76 + (fVar108 * fVar200 - fVar172 * fVar62) + fStack_36c;
      auVar25._0_4_ =
           fVar42 * fVar173 + fVar21 + (fVar109 * fVar159 - fVar174 * fVar91) + auVar23._0_4_;
      auVar25._4_4_ =
           fVar50 * fVar176 + fVar35 + (fVar113 * fVar165 - fVar177 * fVar102) + auVar23._4_4_;
      auVar25._8_4_ =
           fVar52 * fVar178 + fVar36 + (fVar114 * fVar166 - fVar179 * fVar103) + auVar23._8_4_;
      auVar25._12_4_ =
           fVar54 * fVar180 + fVar37 + (fVar115 * fVar167 - fVar181 * fVar104) + auVar23._12_4_;
      auVar25._16_4_ =
           fVar56 * fVar182 + fVar38 + (fVar116 * fVar168 - fVar183 * fVar105) + auVar23._16_4_;
      auVar25._20_4_ =
           fVar58 * fVar185 + fVar39 + (fVar117 * fVar170 - fVar186 * fVar106) + auVar23._20_4_;
      auVar25._24_4_ =
           fVar60 * fVar187 + fVar40 + (fVar118 * fVar171 - fVar188 * fVar107) + auVar23._24_4_;
      auVar25._28_4_ =
           fVar62 * fVar189 + fVar41 + (fVar119 * fVar172 - fVar190 * fVar108) + auVar23._28_4_;
      auVar86 = vsubps_avx(auVar46,auVar161);
      auVar24 = vsubps_avx(auVar201,auVar27);
      auVar25 = vsubps_avx(auVar25,auVar28);
      auVar23._16_16_ = auVar24._0_16_;
      auVar23._0_16_ = auVar86._0_16_;
      auVar111 = vshufpd_avx(auVar86,auVar23,2);
      auVar66 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar25);
      auVar110 = vpermpd_avx2(auVar24,0xe9);
      auVar110 = vblendps_avx(auVar66,auVar110,7);
      auVar66 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar111);
      auVar111 = vblendps_avx(auVar111,auVar66,0xa4);
      *(undefined1 (*) [32])(lVar17 + -0x40 + lVar4) = auVar111;
      auVar23 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar111 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar110);
      auVar110 = vshufpd_avx(auVar86,auVar86,1);
      auVar110 = vblendps_avx(auVar111,auVar110,0x92);
      *(undefined1 (*) [32])(lVar17 + -0x20 + lVar4) = auVar110;
      auVar161 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar111 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar24);
      auVar110 = vpermpd_avx2(auVar86,0xff);
      auVar110 = vblendps_avx(auVar111,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar25,0xe0);
      auVar110 = vpermps_avx2(auVar175,auVar110);
      *(undefined1 (*) [32])(lVar17 + lVar4) = auVar110;
      auVar110 = *(undefined1 (*) [32])(lVar16 + -0x40 + lVar4);
      auVar111 = *(undefined1 (*) [32])(lVar16 + -0x20 + lVar4);
      auVar66 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar111);
      auVar81 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar66 = vblendps_avx(auVar81,auVar66,0x88);
      auVar81 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar111);
      auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(lVar16 + lVar4));
      auVar81 = vblendps_avx(auVar26,auVar81,0x13);
      auVar134._16_16_ = auVar81._0_16_;
      auVar134._0_16_ = auVar66._0_16_;
      auVar81 = vperm2f128_avx(auVar66,auVar81,0x31);
      auVar110 = vblendps_avx(auVar111,auVar110,0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(lVar16 + lVar4));
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      auVar111 = vsubps_avx(auVar134,auVar86);
      auVar26._4_4_ = param_11;
      auVar26._0_4_ = param_11;
      auVar26._8_4_ = param_11;
      auVar26._12_4_ = param_11;
      auVar26._16_4_ = param_11;
      auVar26._20_4_ = param_11;
      auVar26._24_4_ = param_11;
      auVar26._28_4_ = param_11;
      auVar66 = vdivps_avx(auVar111,auVar26);
      auVar111 = vsubps_avx(auVar81,auVar24);
      auVar81 = vdivps_avx(auVar111,auVar26);
      auVar110 = vsubps_avx(auVar110,auVar25);
      auVar86 = vdivps_avx(auVar110,auVar26);
      auVar78._16_16_ = auVar81._0_16_;
      auVar78._0_16_ = auVar66._0_16_;
      auVar111 = vshufpd_avx(auVar66,auVar78,2);
      auVar24 = vpermps_avx2(auVar77,auVar86);
      auVar110 = vpermpd_avx2(auVar81,0xe9);
      auVar110 = vblendps_avx(auVar24,auVar110,7);
      auVar24 = vpermps_avx2(auVar157,auVar110);
      in_ZMM5 = ZEXT3264(auVar24);
      auVar111 = vpermps_avx2(auVar158,auVar111);
      auVar111 = vblendps_avx(auVar111,auVar24,0xa4);
      *(undefined1 (*) [32])(lVar12 + -0x40 + lVar4) = auVar111;
      auVar111 = vpermps_avx2(auVar23,auVar110);
      auVar110 = vshufpd_avx(auVar66,auVar66,1);
      in_ZMM4 = ZEXT3264(auVar110);
      auVar110 = vblendps_avx(auVar111,auVar110,0x92);
      *(undefined1 (*) [32])(lVar12 + -0x20 + lVar4) = auVar110;
      auVar111 = vpermps_avx2(auVar161,auVar81);
      in_ZMM2 = ZEXT3264(auVar111);
      auVar110 = vpermpd_avx2(auVar66,0xff);
      auVar110 = vblendps_avx(auVar111,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar86,0xe0);
      auVar110 = vpermps_avx2(auVar175,auVar110);
      *(undefined1 (*) [32])(lVar12 + lVar4) = auVar110;
      lVar20 = lVar20 + 8;
      lVar10 = lVar10 + 0x60;
      pauVar19 = pauVar19 + 4;
      lVar13 = lVar13 + 0x60;
      lVar17 = lVar17 + 0x60;
      lVar16 = lVar16 + 0x60;
      lVar12 = lVar12 + 0x60;
      param_12 = param_12 + 0x20;
    } while (lVar20 < iVar9);
    param_12 = (int)lVar20;
  }
  if (param_12 < param_13) {
    auVar3._0_4_ = param_12 +
                   ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar3._4_4_ = param_12 + _UNK_150b50ae4;
    auVar3._8_4_ = param_12 + _UNK_150b50ae8;
    auVar3._12_4_ = param_12 + _UNK_150b50aec;
    auVar3._16_4_ = param_12 + _UNK_150b50af0;
    auVar3._20_4_ = param_12 + _UNK_150b50af4;
    auVar3._24_4_ = param_12 + _UNK_150b50af8;
    auVar3._28_4_ = param_12 + _UNK_150b50afc;
    auVar47._4_4_ = param_13;
    auVar47._0_4_ = param_13;
    auVar47._8_4_ = param_13;
    auVar47._12_4_ = param_13;
    auVar47._16_4_ = param_13;
    auVar47._20_4_ = param_13;
    auVar47._24_4_ = param_13;
    auVar47._28_4_ = param_13;
    auVar111 = vpcmpgtd_avx2(auVar47,auVar3);
    auVar110 = vmaskmovps_avx(auVar111,*(undefined1 (*) [32])(param_8 + param_12 * 4));
    auVar65._4_4_ = __real_00000006;
    auVar65._0_4_ = __real_00000006;
    auVar65._8_4_ = __real_00000006;
    auVar65._12_4_ = __real_00000006;
    auVar65._16_4_ = __real_00000006;
    auVar65._20_4_ = __real_00000006;
    auVar65._24_4_ = __real_00000006;
    auVar65._28_4_ = __real_00000006;
    vpmulld_avx2(auVar110,auVar65);
    auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar111);
    auVar79._4_4_ = __real_00000030;
    auVar79._0_4_ = __real_00000030;
    auVar79._8_4_ = __real_00000030;
    auVar79._12_4_ = __real_00000030;
    auVar79._16_4_ = __real_00000030;
    auVar79._20_4_ = __real_00000030;
    auVar79._24_4_ = __real_00000030;
    auVar79._28_4_ = __real_00000030;
    auVar110 = vpmulld_avx2(auVar110,auVar79);
    auVar80._4_4_ = __real_00000004;
    auVar80._0_4_ = __real_00000004;
    auVar80._8_4_ = __real_00000004;
    auVar80._12_4_ = __real_00000004;
    auVar80._16_4_ = __real_00000004;
    auVar80._20_4_ = __real_00000004;
    auVar80._24_4_ = __real_00000004;
    auVar80._28_4_ = __real_00000004;
    vpor_avx2(auVar110,auVar80);
    auVar81 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar111);
    auVar85._4_4_ = __real_00000008;
    auVar85._0_4_ = __real_00000008;
    auVar85._8_4_ = __real_00000008;
    auVar85._12_4_ = __real_00000008;
    auVar85._16_4_ = __real_00000008;
    auVar85._20_4_ = __real_00000008;
    auVar85._24_4_ = __real_00000008;
    auVar85._28_4_ = __real_00000008;
    vpor_avx2(auVar110,auVar85);
    auVar86 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar111);
    auVar93._4_4_ = __real_0000000c;
    auVar93._0_4_ = __real_0000000c;
    auVar93._8_4_ = __real_0000000c;
    auVar93._12_4_ = __real_0000000c;
    auVar93._16_4_ = __real_0000000c;
    auVar93._20_4_ = __real_0000000c;
    auVar93._24_4_ = __real_0000000c;
    auVar93._28_4_ = __real_0000000c;
    vpor_avx2(auVar110,auVar93);
    auVar110 = vgatherdps(ZEXT832(0),auVar111);
    auVar24 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    auVar25 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    auVar77 = vgatherdps(ZEXT832(0) << 0x20,auVar111);
    auVar157 = vgatherdps(ZEXT832(0) << 0x20,auVar111);
    auVar158 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    lVar10 = (longlong)param_12;
    pauVar19 = (undefined1 (*) [32])(param_3 + lVar10 * 0xc);
    uVar15 = vmovmskps_avx(auVar111);
    if (uVar15 == 0xff) {
      auVar23 = pauVar19[1];
      auVar161 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                              ,auVar23);
      auVar175 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,*pauVar19);
      auVar161 = vblendps_avx(auVar175,auVar161,0x88);
      auVar175 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar23);
      auVar27 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar19[2]);
      auVar175 = vblendps_avx(auVar27,auVar175,0x13);
      auVar94._16_16_ = auVar175._0_16_;
      auVar94._0_16_ = auVar161._0_16_;
      auVar161 = vperm2f128_avx(auVar161,auVar175,0x31);
      auVar23 = vblendps_avx(auVar23,*pauVar19,0x24);
      auVar23 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar23);
      auVar162._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar162._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar175 = vpermps_avx2(auVar162,pauVar19[2]);
      auVar23 = vblendps_avx(auVar23,auVar175,0xe0);
    }
    else {
      auVar94 = vgatherdps(ZEXT832(0),auVar111);
      auVar161 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar23 = vgatherdps(ZEXT432(0) << 0x20,auVar111);
    }
    pauVar11 = (undefined1 (*) [32])(param_1 + lVar10 * 0x10);
    cVar14 = (char)uVar15;
    local_388 = auVar77._0_4_;
    fStack_384 = auVar77._4_4_;
    fStack_380 = auVar77._8_4_;
    fStack_37c = auVar77._12_4_;
    fStack_378 = auVar77._16_4_;
    fStack_374 = auVar77._20_4_;
    fStack_370 = auVar77._24_4_;
    fStack_36c = auVar77._28_4_;
    fVar159 = auVar94._0_4_ * local_388;
    fVar165 = auVar94._4_4_ * fStack_384;
    fVar166 = auVar94._8_4_ * fStack_380;
    fVar167 = auVar94._12_4_ * fStack_37c;
    fVar168 = auVar94._16_4_ * fStack_378;
    fVar170 = auVar94._20_4_ * fStack_374;
    fVar171 = auVar94._24_4_ * fStack_370;
    fVar172 = auVar94._28_4_ * fStack_36c;
    fVar106 = auVar157._0_4_;
    fVar105 = fVar106 * auVar161._0_4_;
    fVar108 = auVar157._4_4_;
    fVar107 = fVar108 * auVar161._4_4_;
    fVar113 = auVar157._8_4_;
    fVar109 = fVar113 * auVar161._8_4_;
    fVar115 = auVar157._12_4_;
    fVar114 = fVar115 * auVar161._12_4_;
    fVar73 = auVar157._16_4_;
    fVar116 = fVar73 * auVar161._16_4_;
    fVar74 = auVar157._20_4_;
    fVar117 = fVar74 * auVar161._20_4_;
    fVar75 = auVar157._24_4_;
    fVar118 = fVar75 * auVar161._24_4_;
    fVar76 = auVar157._28_4_;
    fVar119 = fVar76 * auVar161._28_4_;
    fVar141 = auVar158._0_4_;
    fVar53 = fVar141 * auVar23._0_4_;
    fVar143 = auVar158._4_4_;
    fVar71 = fVar143 * auVar23._4_4_;
    fVar145 = auVar158._8_4_;
    fVar55 = fVar145 * auVar23._8_4_;
    fVar147 = auVar158._12_4_;
    fVar72 = fVar147 * auVar23._12_4_;
    fVar150 = auVar158._16_4_;
    fVar42 = fVar150 * auVar23._16_4_;
    fVar152 = auVar158._20_4_;
    fVar21 = fVar152 * auVar23._20_4_;
    fVar154 = auVar158._24_4_;
    fVar50 = fVar154 * auVar23._24_4_;
    fVar156 = auVar158._28_4_;
    fVar35 = fVar156 * auVar23._28_4_;
    fVar43 = auVar81._0_4_;
    fVar57 = auVar81._4_4_;
    fVar59 = auVar81._8_4_;
    fVar61 = auVar81._12_4_;
    fVar63 = auVar81._16_4_;
    fVar64 = auVar81._20_4_;
    fVar51 = auVar81._24_4_;
    fVar70 = auVar81._28_4_;
    fVar60 = auVar86._0_4_;
    fVar40 = auVar86._4_4_;
    fVar62 = auVar86._8_4_;
    fVar41 = auVar86._12_4_;
    fVar91 = auVar86._16_4_;
    fVar102 = auVar86._20_4_;
    fVar103 = auVar86._24_4_;
    fVar104 = auVar86._28_4_;
    fVar52 = auVar66._0_4_;
    fVar36 = auVar66._4_4_;
    fVar54 = auVar66._8_4_;
    fVar37 = auVar66._12_4_;
    fVar56 = auVar66._16_4_;
    fVar38 = auVar66._20_4_;
    fVar58 = auVar66._24_4_;
    fVar39 = auVar66._28_4_;
    fVar133 = fVar52 * fVar105 - fVar159 * fVar43;
    fVar142 = fVar36 * fVar107 - fVar165 * fVar57;
    fVar144 = fVar54 * fVar109 - fVar166 * fVar59;
    fVar146 = fVar37 * fVar114 - fVar167 * fVar61;
    fVar148 = fVar56 * fVar116 - fVar168 * fVar63;
    fVar151 = fVar38 * fVar117 - fVar170 * fVar64;
    fVar153 = fVar58 * fVar118 - fVar171 * fVar51;
    fVar155 = fVar39 * fVar119 - fVar172 * fVar70;
    fVar174 = fVar43 * fVar53 - fVar60 * fVar105;
    fVar177 = fVar57 * fVar71 - fVar40 * fVar107;
    fVar179 = fVar59 * fVar55 - fVar62 * fVar109;
    fVar181 = fVar61 * fVar72 - fVar41 * fVar114;
    fVar183 = fVar63 * fVar42 - fVar91 * fVar116;
    fVar186 = fVar64 * fVar21 - fVar102 * fVar117;
    fVar188 = fVar51 * fVar50 - fVar103 * fVar118;
    fVar190 = fVar70 * fVar35 - fVar104 * fVar119;
    fVar191 = fVar60 * fVar159 - fVar52 * fVar53;
    fVar194 = fVar40 * fVar165 - fVar36 * fVar71;
    fVar195 = fVar62 * fVar166 - fVar54 * fVar55;
    fVar196 = fVar41 * fVar167 - fVar37 * fVar72;
    fVar197 = fVar91 * fVar168 - fVar56 * fVar42;
    fVar198 = fVar102 * fVar170 - fVar38 * fVar21;
    fVar199 = fVar103 * fVar171 - fVar58 * fVar50;
    fVar200 = fVar104 * fVar172 - fVar39 * fVar35;
    fVar174 = fVar174 + fVar174;
    fVar177 = fVar177 + fVar177;
    fVar179 = fVar179 + fVar179;
    fVar181 = fVar181 + fVar181;
    fVar183 = fVar183 + fVar183;
    fVar186 = fVar186 + fVar186;
    fVar188 = fVar188 + fVar188;
    fVar190 = fVar190 + fVar190;
    fVar191 = fVar191 + fVar191;
    fVar194 = fVar194 + fVar194;
    fVar195 = fVar195 + fVar195;
    fVar196 = fVar196 + fVar196;
    fVar197 = fVar197 + fVar197;
    fVar198 = fVar198 + fVar198;
    fVar199 = fVar199 + fVar199;
    fVar200 = fVar200 + fVar200;
    fVar133 = fVar133 + fVar133;
    fVar142 = fVar142 + fVar142;
    fVar144 = fVar144 + fVar144;
    fVar146 = fVar146 + fVar146;
    fVar148 = fVar148 + fVar148;
    fVar151 = fVar151 + fVar151;
    fVar153 = fVar153 + fVar153;
    fVar155 = fVar155 + fVar155;
    fVar120 = auVar110._0_4_;
    fVar126 = auVar110._4_4_;
    fVar127 = auVar110._8_4_;
    fVar128 = auVar110._12_4_;
    fVar129 = auVar110._16_4_;
    fVar130 = auVar110._20_4_;
    fVar131 = auVar110._24_4_;
    fVar132 = auVar110._28_4_;
    auVar123._0_4_ =
         auVar24._0_4_ + fVar120 * fVar174 + fVar159 + (fVar43 * fVar133 - fVar191 * fVar60);
    auVar123._4_4_ =
         auVar24._4_4_ + fVar126 * fVar177 + fVar165 + (fVar57 * fVar142 - fVar194 * fVar40);
    auVar123._8_4_ =
         auVar24._8_4_ + fVar127 * fVar179 + fVar166 + (fVar59 * fVar144 - fVar195 * fVar62);
    auVar123._12_4_ =
         auVar24._12_4_ + fVar128 * fVar181 + fVar167 + (fVar61 * fVar146 - fVar196 * fVar41);
    auVar123._16_4_ =
         auVar24._16_4_ + fVar129 * fVar183 + fVar168 + (fVar63 * fVar148 - fVar197 * fVar91);
    auVar123._20_4_ =
         auVar24._20_4_ + fVar130 * fVar186 + fVar170 + (fVar64 * fVar151 - fVar198 * fVar102);
    auVar123._24_4_ =
         auVar24._24_4_ + fVar131 * fVar188 + fVar171 + (fVar51 * fVar153 - fVar199 * fVar103);
    auVar123._28_4_ =
         auVar24._28_4_ + fVar132 * fVar190 + fVar172 + (fVar70 * fVar155 - fVar200 * fVar104);
    auVar95._0_4_ =
         auVar25._0_4_ + fVar120 * fVar191 + fVar105 + (fVar60 * fVar174 - fVar52 * fVar133);
    auVar95._4_4_ =
         auVar25._4_4_ + fVar126 * fVar194 + fVar107 + (fVar40 * fVar177 - fVar36 * fVar142);
    auVar95._8_4_ =
         auVar25._8_4_ + fVar127 * fVar195 + fVar109 + (fVar62 * fVar179 - fVar54 * fVar144);
    auVar95._12_4_ =
         auVar25._12_4_ + fVar128 * fVar196 + fVar114 + (fVar41 * fVar181 - fVar37 * fVar146);
    auVar95._16_4_ =
         auVar25._16_4_ + fVar129 * fVar197 + fVar116 + (fVar91 * fVar183 - fVar56 * fVar148);
    auVar95._20_4_ =
         auVar25._20_4_ + fVar130 * fVar198 + fVar117 + (fVar102 * fVar186 - fVar38 * fVar151);
    auVar95._24_4_ =
         auVar25._24_4_ + fVar131 * fVar199 + fVar118 + (fVar103 * fVar188 - fVar58 * fVar153);
    auVar95._28_4_ =
         auVar25._28_4_ + fVar132 * fVar200 + fVar119 + (fVar104 * fVar190 - fVar39 * fVar155);
    local_368 = auVar26._0_4_;
    fStack_364 = auVar26._4_4_;
    fStack_360 = auVar26._8_4_;
    fStack_35c = auVar26._12_4_;
    fStack_358 = auVar26._16_4_;
    fStack_354 = auVar26._20_4_;
    fStack_350 = auVar26._24_4_;
    fStack_34c = auVar26._28_4_;
    auVar163._0_4_ = (fVar52 * fVar191 - fVar174 * fVar43) + fVar120 * fVar133 + fVar53 + local_368;
    auVar163._4_4_ = (fVar36 * fVar194 - fVar177 * fVar57) + fVar126 * fVar142 + fVar71 + fStack_364
    ;
    auVar163._8_4_ = (fVar54 * fVar195 - fVar179 * fVar59) + fVar127 * fVar144 + fVar55 + fStack_360
    ;
    auVar163._12_4_ =
         (fVar37 * fVar196 - fVar181 * fVar61) + fVar128 * fVar146 + fVar72 + fStack_35c;
    auVar163._16_4_ =
         (fVar56 * fVar197 - fVar183 * fVar63) + fVar129 * fVar148 + fVar42 + fStack_358;
    auVar163._20_4_ =
         (fVar38 * fVar198 - fVar186 * fVar64) + fVar130 * fVar151 + fVar21 + fStack_354;
    auVar163._24_4_ =
         (fVar58 * fVar199 - fVar188 * fVar51) + fVar131 * fVar153 + fVar50 + fStack_350;
    auVar163._28_4_ =
         (fVar39 * fVar200 - fVar190 * fVar70) + fVar132 * fVar155 + fVar35 + fStack_34c;
    uVar2 = *param_10;
    auVar29._4_4_ = uVar2;
    auVar29._0_4_ = uVar2;
    auVar29._8_4_ = uVar2;
    auVar29._12_4_ = uVar2;
    auVar29._16_4_ = uVar2;
    auVar29._20_4_ = uVar2;
    auVar29._24_4_ = uVar2;
    auVar29._28_4_ = uVar2;
    auVar110 = vsubps_avx(auVar123,auVar29);
    uVar2 = param_10[1];
    auVar124._4_4_ = uVar2;
    auVar124._0_4_ = uVar2;
    auVar124._8_4_ = uVar2;
    auVar124._12_4_ = uVar2;
    auVar124._16_4_ = uVar2;
    auVar124._20_4_ = uVar2;
    auVar124._24_4_ = uVar2;
    auVar124._28_4_ = uVar2;
    auVar66 = vsubps_avx(auVar95,auVar124);
    uVar2 = param_10[2];
    auVar96._4_4_ = uVar2;
    auVar96._0_4_ = uVar2;
    auVar96._8_4_ = uVar2;
    auVar96._12_4_ = uVar2;
    auVar96._16_4_ = uVar2;
    auVar96._20_4_ = uVar2;
    auVar96._24_4_ = uVar2;
    auVar96._28_4_ = uVar2;
    auVar81 = vsubps_avx(auVar163,auVar96);
    auVar86 = vmaskmovps_avx(auVar111,*(undefined1 (*) [32])(param_6 + param_12 * 4));
    auVar44 = auVar110._0_16_;
    auVar83 = auVar110._16_16_;
    auVar22 = auVar66._0_16_;
    if (cVar14 == -1) {
      auVar26 = vunpcklps_avx(auVar110,auVar66);
      auVar77 = vunpcklps_avx(auVar81,auVar86);
      auVar157 = vunpcklpd_avx(auVar26,auVar77);
      auVar26 = vunpckhpd_avx(auVar26,auVar77);
      auVar77 = vunpckhps_avx(auVar110,auVar66);
      auVar86 = vunpckhps_avx(auVar81,auVar86);
      auVar135._16_16_ = auVar26._0_16_;
      auVar135._0_16_ = auVar157._0_16_;
      *pauVar11 = auVar135;
      auVar158 = vunpcklpd_avx(auVar77,auVar86);
      auVar86 = vunpckhpd_avx(auVar77,auVar86);
      auVar193._16_16_ = auVar86._0_16_;
      auVar193._0_16_ = auVar158._0_16_;
      pauVar11[1] = auVar193;
      auVar26 = vperm2f128_avx(auVar157,auVar26,0x31);
      pauVar11[2] = auVar26;
      auVar86 = vperm2f128_avx(auVar158,auVar86,0x31);
      pauVar11[3] = auVar86;
      auVar97._16_16_ = auVar22;
      auVar97._0_16_ = auVar44;
      auVar26 = vshufpd_avx(auVar110,auVar97,2);
      auVar77 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar81);
      auVar86 = vpermpd_avx2(auVar66,0xe9);
      auVar86 = vblendps_avx(auVar77,auVar86,7);
      auVar136._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar136._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar77 = vpermps_avx2(auVar136,auVar86);
      auVar26 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar26);
      auVar26 = vblendps_avx(auVar26,auVar77,0xa4);
      *pauVar19 = auVar26;
      auVar26 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar86);
      auVar86 = vshufpd_avx(auVar110,auVar110,1);
      auVar86 = vblendps_avx(auVar26,auVar86,0x92);
      pauVar19[1] = auVar86;
      auVar98._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar98._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar66 = vpermps_avx2(auVar98,auVar66);
      auVar110 = vpermpd_avx2(auVar110,0xff);
      auVar110 = vblendps_avx(auVar66,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar81,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      pauVar19[2] = auVar110;
      auVar110 = *(undefined1 (*) [32])(param_2 + lVar10 * 0xc);
      auVar66 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar10 * 0xc);
      auVar81 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar10 * 0xc);
      auVar86 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar66);
      auVar26 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar86 = vblendps_avx(auVar26,auVar86,0x88);
      auVar26 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar66);
      auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar81);
      auVar26 = vblendps_avx(auVar77,auVar26,0x13);
      auVar30._16_16_ = auVar26._0_16_;
      auVar30._0_16_ = auVar86._0_16_;
      auVar86 = vperm2f128_avx(auVar86,auVar26,0x31);
      auVar110 = vblendps_avx(auVar66,auVar110,0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar137._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar137._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar66 = vpermps_avx2(auVar137,auVar81);
      auVar110 = vblendps_avx(auVar110,auVar66,0xe0);
    }
    else {
      auVar184 = auVar66._16_16_;
      auVar160 = auVar81._0_16_;
      auVar169 = auVar81._16_16_;
      auVar92 = auVar86._0_16_;
      auVar121 = auVar86._16_16_;
      if ((uVar15 & 1) != 0) {
        *(int *)*pauVar11 = auVar110._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(*pauVar11 + 0x10) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)pauVar11[1] = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(pauVar11[1] + 0x10) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)pauVar11[2] = auVar110._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(pauVar11[2] + 0x10) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)pauVar11[3] = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(pauVar11[3] + 0x10) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar11 + 4) = auVar66._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(*pauVar11 + 0x14) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(pauVar11[1] + 4) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(pauVar11[1] + 0x14) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar11[2] + 4) = auVar66._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar184,1);
        *(undefined4 *)(pauVar11[2] + 0x14) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar184,2);
        *(undefined4 *)(pauVar11[3] + 4) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar184,3);
        *(undefined4 *)(pauVar11[3] + 0x14) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar11 + 8) = auVar81._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)(*pauVar11 + 0x18) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)(pauVar11[1] + 8) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(pauVar11[1] + 0x18) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar11[2] + 8) = auVar81._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar169,1);
        *(undefined4 *)(pauVar11[2] + 0x18) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar169,2);
        *(undefined4 *)(pauVar11[3] + 8) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar169,3);
        *(undefined4 *)(pauVar11[3] + 0x18) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar11 + 0xc) = auVar86._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar92,1);
        *(undefined4 *)(*pauVar11 + 0x1c) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar92,2);
        *(undefined4 *)(pauVar11[1] + 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar92,3);
        *(undefined4 *)(pauVar11[1] + 0x1c) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar11[2] + 0xc) = auVar86._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar121,1);
        *(undefined4 *)(pauVar11[2] + 0x1c) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar121,2);
        *(undefined4 *)(pauVar11[3] + 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar121,3);
        *(undefined4 *)(pauVar11[3] + 0x1c) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)*pauVar19 = auVar110._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(*pauVar19 + 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(pauVar19[1] + 4) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x10) = auVar110._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)(pauVar19[2] + 8) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar19 + 4) = auVar66._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(pauVar19[1] + 8) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x14) = auVar66._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar184,1);
        *(undefined4 *)pauVar19[2] = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar184,2);
        *(undefined4 *)(pauVar19[2] + 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar184,3);
        *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar19 + 8) = auVar81._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)pauVar19[1] = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x18) = auVar81._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar169,1);
        *(undefined4 *)(pauVar19[2] + 4) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar169,2);
        *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar169,3);
        *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
      }
      auVar30 = vgatherdps(ZEXT832(0) << 0x20,auVar111);
      auVar86 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar110 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    }
    pauVar19 = (undefined1 (*) [32])(param_2 + lVar10 * 0xc);
    fVar159 = auVar30._0_4_ * local_388;
    fVar165 = auVar30._4_4_ * fStack_384;
    fVar166 = auVar30._8_4_ * fStack_380;
    fVar167 = auVar30._12_4_ * fStack_37c;
    fVar168 = auVar30._16_4_ * fStack_378;
    fVar170 = auVar30._20_4_ * fStack_374;
    fVar171 = auVar30._24_4_ * fStack_370;
    fVar172 = auVar30._28_4_ * fStack_36c;
    fVar105 = fVar106 * auVar86._0_4_;
    fVar107 = fVar108 * auVar86._4_4_;
    fVar109 = fVar113 * auVar86._8_4_;
    fVar114 = fVar115 * auVar86._12_4_;
    fVar116 = fVar73 * auVar86._16_4_;
    fVar117 = fVar74 * auVar86._20_4_;
    fVar118 = fVar75 * auVar86._24_4_;
    fVar119 = fVar76 * auVar86._28_4_;
    fVar53 = fVar141 * auVar110._0_4_;
    fVar71 = fVar143 * auVar110._4_4_;
    fVar55 = fVar145 * auVar110._8_4_;
    fVar72 = fVar147 * auVar110._12_4_;
    fVar42 = fVar150 * auVar110._16_4_;
    fVar21 = fVar152 * auVar110._20_4_;
    fVar50 = fVar154 * auVar110._24_4_;
    fVar35 = fVar156 * auVar110._28_4_;
    fVar133 = fVar52 * fVar105 - fVar159 * fVar43;
    fVar142 = fVar36 * fVar107 - fVar165 * fVar57;
    fVar144 = fVar54 * fVar109 - fVar166 * fVar59;
    fVar146 = fVar37 * fVar114 - fVar167 * fVar61;
    fVar148 = fVar56 * fVar116 - fVar168 * fVar63;
    fVar151 = fVar38 * fVar117 - fVar170 * fVar64;
    fVar153 = fVar58 * fVar118 - fVar171 * fVar51;
    fVar155 = fVar39 * fVar119 - fVar172 * fVar70;
    fVar174 = fVar43 * fVar53 - fVar60 * fVar105;
    fVar177 = fVar57 * fVar71 - fVar40 * fVar107;
    fVar179 = fVar59 * fVar55 - fVar62 * fVar109;
    fVar181 = fVar61 * fVar72 - fVar41 * fVar114;
    fVar183 = fVar63 * fVar42 - fVar91 * fVar116;
    fVar186 = fVar64 * fVar21 - fVar102 * fVar117;
    fVar188 = fVar51 * fVar50 - fVar103 * fVar118;
    fVar190 = fVar70 * fVar35 - fVar104 * fVar119;
    fVar191 = fVar60 * fVar159 - fVar52 * fVar53;
    fVar194 = fVar40 * fVar165 - fVar36 * fVar71;
    fVar195 = fVar62 * fVar166 - fVar54 * fVar55;
    fVar196 = fVar41 * fVar167 - fVar37 * fVar72;
    fVar197 = fVar91 * fVar168 - fVar56 * fVar42;
    fVar198 = fVar102 * fVar170 - fVar38 * fVar21;
    fVar199 = fVar103 * fVar171 - fVar58 * fVar50;
    fVar200 = fVar104 * fVar172 - fVar39 * fVar35;
    fVar174 = fVar174 + fVar174;
    fVar177 = fVar177 + fVar177;
    fVar179 = fVar179 + fVar179;
    fVar181 = fVar181 + fVar181;
    fVar183 = fVar183 + fVar183;
    fVar186 = fVar186 + fVar186;
    fVar188 = fVar188 + fVar188;
    fVar190 = fVar190 + fVar190;
    fVar191 = fVar191 + fVar191;
    fVar194 = fVar194 + fVar194;
    fVar195 = fVar195 + fVar195;
    fVar196 = fVar196 + fVar196;
    fVar197 = fVar197 + fVar197;
    fVar198 = fVar198 + fVar198;
    fVar199 = fVar199 + fVar199;
    fVar200 = fVar200 + fVar200;
    fVar133 = fVar133 + fVar133;
    fVar142 = fVar142 + fVar142;
    fVar144 = fVar144 + fVar144;
    fVar146 = fVar146 + fVar146;
    fVar148 = fVar148 + fVar148;
    fVar151 = fVar151 + fVar151;
    fVar153 = fVar153 + fVar153;
    fVar155 = fVar155 + fVar155;
    auVar22._0_4_ = (fVar52 * fVar191 - fVar174 * fVar43) + fVar120 * fVar133 + fVar53;
    auVar22._4_4_ = (fVar36 * fVar194 - fVar177 * fVar57) + fVar126 * fVar142 + fVar71;
    auVar22._8_4_ = (fVar54 * fVar195 - fVar179 * fVar59) + fVar127 * fVar144 + fVar55;
    auVar22._12_4_ = (fVar37 * fVar196 - fVar181 * fVar61) + fVar128 * fVar146 + fVar72;
    auVar31._16_4_ = (fVar56 * fVar197 - fVar183 * fVar63) + fVar129 * fVar148 + fVar42;
    auVar31._0_16_ = auVar22;
    auVar31._20_4_ = (fVar38 * fVar198 - fVar186 * fVar64) + fVar130 * fVar151 + fVar21;
    auVar31._24_4_ = (fVar58 * fVar199 - fVar188 * fVar51) + fVar131 * fVar153 + fVar50;
    auVar31._28_4_ = (fVar39 * fVar200 - fVar190 * fVar70) + fVar132 * fVar155 + fVar35;
    auVar121._0_4_ = fVar120 * fVar174 + fVar159 + (fVar43 * fVar133 - fVar191 * fVar60);
    auVar121._4_4_ = fVar126 * fVar177 + fVar165 + (fVar57 * fVar142 - fVar194 * fVar40);
    auVar121._8_4_ = fVar127 * fVar179 + fVar166 + (fVar59 * fVar144 - fVar195 * fVar62);
    auVar121._12_4_ = fVar128 * fVar181 + fVar167 + (fVar61 * fVar146 - fVar196 * fVar41);
    auVar125._16_4_ = fVar129 * fVar183 + fVar168 + (fVar63 * fVar148 - fVar197 * fVar91);
    auVar125._0_16_ = auVar121;
    auVar125._20_4_ = fVar130 * fVar186 + fVar170 + (fVar64 * fVar151 - fVar198 * fVar102);
    auVar125._24_4_ = fVar131 * fVar188 + fVar171 + (fVar51 * fVar153 - fVar199 * fVar103);
    auVar125._28_4_ = fVar132 * fVar190 + fVar172 + (fVar70 * fVar155 - fVar200 * fVar104);
    auVar92._0_4_ = (fVar60 * fVar174 - fVar52 * fVar133) + fVar120 * fVar191 + fVar105;
    auVar92._4_4_ = (fVar40 * fVar177 - fVar36 * fVar142) + fVar126 * fVar194 + fVar107;
    auVar92._8_4_ = (fVar62 * fVar179 - fVar54 * fVar144) + fVar127 * fVar195 + fVar109;
    auVar92._12_4_ = (fVar41 * fVar181 - fVar37 * fVar146) + fVar128 * fVar196 + fVar114;
    auVar99._16_4_ = (fVar91 * fVar183 - fVar56 * fVar148) + fVar129 * fVar197 + fVar116;
    auVar99._0_16_ = auVar92;
    auVar99._20_4_ = (fVar102 * fVar186 - fVar38 * fVar151) + fVar130 * fVar198 + fVar117;
    auVar99._24_4_ = (fVar103 * fVar188 - fVar58 * fVar153) + fVar131 * fVar199 + fVar118;
    auVar99._28_4_ = (fVar104 * fVar190 - fVar39 * fVar155) + fVar132 * fVar200 + fVar119;
    auVar44 = auVar125._16_16_;
    if (cVar14 == -1) {
      auVar138._16_16_ = auVar92;
      auVar138._0_16_ = auVar121;
      auVar66 = vshufpd_avx(auVar125,auVar138,2);
      auVar81 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar31);
      auVar110 = vpermpd_avx2(auVar99,0xe9);
      auVar110 = vblendps_avx(auVar81,auVar110,7);
      auVar164._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar164._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar81 = vpermps_avx2(auVar164,auVar110);
      auVar66 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar66);
      auVar66 = vblendps_avx(auVar66,auVar81,0xa4);
      *pauVar19 = auVar66;
      lVar13 = lVar10 * 0xc;
      auVar66 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar110);
      auVar110 = vshufpd_avx(auVar125,auVar125,1);
      auVar110 = vblendps_avx(auVar66,auVar110,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar13) = auVar110;
      auVar139._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar139._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar66 = vpermps_avx2(auVar139,auVar99);
      auVar110 = vpermpd_avx2(auVar125,0xff);
      auVar110 = vblendps_avx(auVar66,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar31,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar13) = auVar110;
      auVar110 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar13);
      auVar66 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar13);
      auVar81 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar110);
      auVar86 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(param_4 + lVar13));
      auVar81 = vblendps_avx(auVar86,auVar81,0x88);
      auVar86 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar110);
      auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar66);
      auVar86 = vblendps_avx(auVar26,auVar86,0x13);
      auVar32._16_16_ = auVar86._0_16_;
      auVar32._0_16_ = auVar81._0_16_;
      auVar81 = vperm2f128_avx(auVar81,auVar86,0x31);
      auVar110 = vblendps_avx(auVar110,*(undefined1 (*) [32])(param_4 + lVar13),0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar140._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar140._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar66 = vpermps_avx2(auVar140,auVar66);
      auVar110 = vblendps_avx(auVar110,auVar66,0xe0);
    }
    else {
      auVar160 = auVar99._16_16_;
      auVar83 = auVar31._16_16_;
      if ((uVar15 & 1) != 0) {
        *(float *)*pauVar19 = auVar121._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar121,1);
        *(undefined4 *)(param_2 + 0xc + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar121,2);
        *(undefined4 *)(param_2 + 0x18 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar121,3);
        *(undefined4 *)(param_2 + 0x24 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(float *)(param_2 + 0x30 + lVar10 * 0xc) = auVar125._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(param_2 + 0x3c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)(param_2 + 0x48 + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(param_2 + 0x54 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(float *)(param_2 + 4 + lVar10 * 0xc) = auVar92._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar92,1);
        *(undefined4 *)(param_2 + 0x10 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar92,2);
        *(undefined4 *)(param_2 + 0x1c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar92,3);
        *(undefined4 *)(param_2 + 0x28 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(float *)(param_2 + 0x34 + lVar10 * 0xc) = auVar99._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)(param_2 + 0x40 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)(param_2 + 0x4c + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(param_2 + 0x58 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(float *)(param_2 + 8 + lVar10 * 0xc) = auVar22._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(param_2 + 0x14 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(param_2 + 0x20 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(param_2 + 0x2c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(float *)(param_2 + 0x38 + lVar10 * 0xc) = auVar31._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(param_2 + 0x44 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)(param_2 + 0x50 + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(param_2 + 0x5c + lVar10 * 0xc) = uVar2;
      }
      auVar32 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar110 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    }
    pauVar19 = (undefined1 (*) [32])(param_4 + lVar10 * 0xc);
    local_388 = auVar32._0_4_ * local_388;
    fStack_384 = auVar32._4_4_ * fStack_384;
    fStack_380 = auVar32._8_4_ * fStack_380;
    fStack_37c = auVar32._12_4_ * fStack_37c;
    fStack_378 = auVar32._16_4_ * fStack_378;
    fStack_374 = auVar32._20_4_ * fStack_374;
    fStack_370 = auVar32._24_4_ * fStack_370;
    fStack_36c = auVar32._28_4_ * fStack_36c;
    fVar106 = fVar106 * auVar81._0_4_;
    fVar108 = fVar108 * auVar81._4_4_;
    fVar113 = fVar113 * auVar81._8_4_;
    fVar115 = fVar115 * auVar81._12_4_;
    fVar73 = fVar73 * auVar81._16_4_;
    fVar74 = fVar74 * auVar81._20_4_;
    fVar75 = fVar75 * auVar81._24_4_;
    fVar76 = fVar76 * auVar81._28_4_;
    fVar141 = fVar141 * auVar110._0_4_;
    fVar143 = fVar143 * auVar110._4_4_;
    fVar145 = fVar145 * auVar110._8_4_;
    fVar147 = fVar147 * auVar110._12_4_;
    fVar150 = fVar150 * auVar110._16_4_;
    fVar152 = fVar152 * auVar110._20_4_;
    fVar154 = fVar154 * auVar110._24_4_;
    fVar156 = fVar156 * auVar110._28_4_;
    fVar53 = fVar52 * fVar106 - fVar43 * local_388;
    fVar71 = fVar36 * fVar108 - fVar57 * fStack_384;
    fVar55 = fVar54 * fVar113 - fVar59 * fStack_380;
    fVar72 = fVar37 * fVar115 - fVar61 * fStack_37c;
    fVar42 = fVar56 * fVar73 - fVar63 * fStack_378;
    fVar21 = fVar38 * fVar74 - fVar64 * fStack_374;
    fVar50 = fVar58 * fVar75 - fVar51 * fStack_370;
    fVar35 = fVar39 * fVar76 - fVar70 * fStack_36c;
    fVar105 = fVar43 * fVar141 - fVar60 * fVar106;
    fVar107 = fVar57 * fVar143 - fVar40 * fVar108;
    fVar109 = fVar59 * fVar145 - fVar62 * fVar113;
    fVar114 = fVar61 * fVar147 - fVar41 * fVar115;
    fVar116 = fVar63 * fVar150 - fVar91 * fVar73;
    fVar117 = fVar64 * fVar152 - fVar102 * fVar74;
    fVar118 = fVar51 * fVar154 - fVar103 * fVar75;
    fVar119 = fVar70 * fVar156 - fVar104 * fVar76;
    fVar133 = fVar60 * local_388 - fVar52 * fVar141;
    fVar142 = fVar40 * fStack_384 - fVar36 * fVar143;
    fVar144 = fVar62 * fStack_380 - fVar54 * fVar145;
    fVar146 = fVar41 * fStack_37c - fVar37 * fVar147;
    fVar148 = fVar91 * fStack_378 - fVar56 * fVar150;
    fVar151 = fVar102 * fStack_374 - fVar38 * fVar152;
    fVar153 = fVar103 * fStack_370 - fVar58 * fVar154;
    fVar155 = fVar104 * fStack_36c - fVar39 * fVar156;
    fVar105 = fVar105 + fVar105;
    fVar107 = fVar107 + fVar107;
    fVar109 = fVar109 + fVar109;
    fVar114 = fVar114 + fVar114;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    fVar118 = fVar118 + fVar118;
    fVar119 = fVar119 + fVar119;
    fVar133 = fVar133 + fVar133;
    fVar142 = fVar142 + fVar142;
    fVar144 = fVar144 + fVar144;
    fVar146 = fVar146 + fVar146;
    fVar148 = fVar148 + fVar148;
    fVar151 = fVar151 + fVar151;
    fVar153 = fVar153 + fVar153;
    fVar155 = fVar155 + fVar155;
    fVar53 = fVar53 + fVar53;
    fVar71 = fVar71 + fVar71;
    fVar55 = fVar55 + fVar55;
    fVar72 = fVar72 + fVar72;
    fVar42 = fVar42 + fVar42;
    fVar21 = fVar21 + fVar21;
    fVar50 = fVar50 + fVar50;
    fVar35 = fVar35 + fVar35;
    auVar33._0_4_ =
         (fVar43 * fVar53 - fVar133 * fVar60) + fVar120 * fVar105 + local_388 + auVar24._0_4_;
    auVar33._4_4_ =
         (fVar57 * fVar71 - fVar142 * fVar40) + fVar126 * fVar107 + fStack_384 + auVar24._4_4_;
    auVar33._8_4_ =
         (fVar59 * fVar55 - fVar144 * fVar62) + fVar127 * fVar109 + fStack_380 + auVar24._8_4_;
    auVar33._12_4_ =
         (fVar61 * fVar72 - fVar146 * fVar41) + fVar128 * fVar114 + fStack_37c + auVar24._12_4_;
    auVar33._16_4_ =
         (fVar63 * fVar42 - fVar148 * fVar91) + fVar129 * fVar116 + fStack_378 + auVar24._16_4_;
    auVar33._20_4_ =
         (fVar64 * fVar21 - fVar151 * fVar102) + fVar130 * fVar117 + fStack_374 + auVar24._20_4_;
    auVar33._24_4_ =
         (fVar51 * fVar50 - fVar153 * fVar103) + fVar131 * fVar118 + fStack_370 + auVar24._24_4_;
    auVar33._28_4_ =
         (fVar70 * fVar35 - fVar155 * fVar104) + fVar132 * fVar119 + fStack_36c + auVar24._28_4_;
    auVar87._0_4_ =
         (fVar60 * fVar105 - fVar53 * fVar52) + fVar120 * fVar133 + fVar106 + auVar25._0_4_;
    auVar87._4_4_ =
         (fVar40 * fVar107 - fVar71 * fVar36) + fVar126 * fVar142 + fVar108 + auVar25._4_4_;
    auVar87._8_4_ =
         (fVar62 * fVar109 - fVar55 * fVar54) + fVar127 * fVar144 + fVar113 + auVar25._8_4_;
    auVar87._12_4_ =
         (fVar41 * fVar114 - fVar72 * fVar37) + fVar128 * fVar146 + fVar115 + auVar25._12_4_;
    auVar87._16_4_ =
         (fVar91 * fVar116 - fVar42 * fVar56) + fVar129 * fVar148 + fVar73 + auVar25._16_4_;
    auVar87._20_4_ =
         (fVar102 * fVar117 - fVar21 * fVar38) + fVar130 * fVar151 + fVar74 + auVar25._20_4_;
    auVar87._24_4_ =
         (fVar103 * fVar118 - fVar50 * fVar58) + fVar131 * fVar153 + fVar75 + auVar25._24_4_;
    auVar87._28_4_ =
         (fVar104 * fVar119 - fVar35 * fVar39) + fVar132 * fVar155 + fVar76 + auVar25._28_4_;
    auVar67._0_4_ = fVar53 * fVar120 + fVar141 + (fVar52 * fVar133 - fVar105 * fVar43) + local_368;
    auVar67._4_4_ = fVar71 * fVar126 + fVar143 + (fVar36 * fVar142 - fVar107 * fVar57) + fStack_364;
    auVar67._8_4_ = fVar55 * fVar127 + fVar145 + (fVar54 * fVar144 - fVar109 * fVar59) + fStack_360;
    auVar67._12_4_ = fVar72 * fVar128 + fVar147 + (fVar37 * fVar146 - fVar114 * fVar61) + fStack_35c
    ;
    auVar67._16_4_ = fVar42 * fVar129 + fVar150 + (fVar56 * fVar148 - fVar116 * fVar63) + fStack_358
    ;
    auVar67._20_4_ = fVar21 * fVar130 + fVar152 + (fVar38 * fVar151 - fVar117 * fVar64) + fStack_354
    ;
    auVar67._24_4_ = fVar50 * fVar131 + fVar154 + (fVar58 * fVar153 - fVar118 * fVar51) + fStack_350
    ;
    auVar67._28_4_ = fVar35 * fVar132 + fVar156 + (fVar39 * fVar155 - fVar119 * fVar70) + fStack_34c
    ;
    uVar2 = *param_10;
    auVar82._4_4_ = uVar2;
    auVar82._0_4_ = uVar2;
    auVar82._8_4_ = uVar2;
    auVar82._12_4_ = uVar2;
    auVar82._16_4_ = uVar2;
    auVar82._20_4_ = uVar2;
    auVar82._24_4_ = uVar2;
    auVar82._28_4_ = uVar2;
    auVar110 = vsubps_avx(auVar33,auVar82);
    uVar2 = param_10[1];
    auVar34._4_4_ = uVar2;
    auVar34._0_4_ = uVar2;
    auVar34._8_4_ = uVar2;
    auVar34._12_4_ = uVar2;
    auVar34._16_4_ = uVar2;
    auVar34._20_4_ = uVar2;
    auVar34._24_4_ = uVar2;
    auVar34._28_4_ = uVar2;
    auVar66 = vsubps_avx(auVar87,auVar34);
    uVar2 = param_10[2];
    auVar88._4_4_ = uVar2;
    auVar88._0_4_ = uVar2;
    auVar88._8_4_ = uVar2;
    auVar88._12_4_ = uVar2;
    auVar88._16_4_ = uVar2;
    auVar88._20_4_ = uVar2;
    auVar88._24_4_ = uVar2;
    auVar88._28_4_ = uVar2;
    auVar81 = vsubps_avx(auVar67,auVar88);
    auVar83 = auVar110._0_16_;
    auVar22 = auVar110._16_16_;
    auVar44 = auVar66._0_16_;
    if (cVar14 == -1) {
      auVar48._16_16_ = auVar44;
      auVar48._0_16_ = auVar83;
      auVar86 = vshufpd_avx(auVar110,auVar48,2);
      auVar24 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar81);
      auVar111 = vpermpd_avx2(auVar66,0xe9);
      auVar111 = vblendps_avx(auVar24,auVar111,7);
      auVar100._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar100._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar24 = vpermps_avx2(auVar100,auVar111);
      auVar86 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar86);
      auVar86 = vblendps_avx(auVar86,auVar24,0xa4);
      *pauVar19 = auVar86;
      lVar13 = lVar10 * 0xc;
      auVar86 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar111);
      auVar111 = vshufpd_avx(auVar110,auVar110,1);
      auVar111 = vblendps_avx(auVar86,auVar111,0x92);
      *(undefined1 (*) [32])(param_4 + 0x20 + lVar13) = auVar111;
      auVar49._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar49._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar86 = vpermps_avx2(auVar49,auVar66);
      auVar111 = vpermpd_avx2(auVar110,0xff);
      auVar111 = vblendps_avx(auVar86,auVar111,3);
      auVar111 = vblendps_avx(auVar111,auVar81,0xe0);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar111);
      *(undefined1 (*) [32])(param_4 + 0x40 + lVar13) = auVar111;
      auVar111 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar13);
      auVar86 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar13);
      auVar24 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar111);
      auVar25 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(param_7 + lVar13));
      auVar24 = vblendps_avx(auVar25,auVar24,0x88);
      auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar111);
      auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar86);
      auVar25 = vblendps_avx(auVar26,auVar25,0x13);
      auVar89._16_16_ = auVar25._0_16_;
      auVar89._0_16_ = auVar24._0_16_;
      auVar24 = vperm2f128_avx(auVar24,auVar25,0x31);
      auVar111 = vblendps_avx(auVar111,*(undefined1 (*) [32])(param_7 + lVar13),0x24);
      auVar111 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar111);
      auVar112._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar112._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar86 = vpermps_avx2(auVar112,auVar86);
      auVar111 = vblendps_avx(auVar111,auVar86,0xe0);
    }
    else {
      auVar92 = auVar66._16_16_;
      auVar121 = auVar81._0_16_;
      auVar160 = auVar81._16_16_;
      if ((uVar15 & 1) != 0) {
        *(int *)*pauVar19 = auVar110._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(param_4 + 0xc + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)(param_4 + 0x18 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(param_4 + 0x24 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(param_4 + 0x30 + lVar10 * 0xc) = auVar110._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(param_4 + 0x3c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(param_4 + 0x48 + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(param_4 + 0x54 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(param_4 + 4 + lVar10 * 0xc) = auVar66._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(param_4 + 0x10 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)(param_4 + 0x1c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(param_4 + 0x28 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(param_4 + 0x34 + lVar10 * 0xc) = auVar66._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar92,1);
        *(undefined4 *)(param_4 + 0x40 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar92,2);
        *(undefined4 *)(param_4 + 0x4c + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar92,3);
        *(undefined4 *)(param_4 + 0x58 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(param_4 + 8 + lVar10 * 0xc) = auVar81._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar121,1);
        *(undefined4 *)(param_4 + 0x14 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar121,2);
        *(undefined4 *)(param_4 + 0x20 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar121,3);
        *(undefined4 *)(param_4 + 0x2c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(param_4 + 0x38 + lVar10 * 0xc) = auVar81._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)(param_4 + 0x44 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)(param_4 + 0x50 + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(param_4 + 0x5c + lVar10 * 0xc) = uVar2;
      }
      auVar89 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar24 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar111 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    }
    auVar110 = vsubps_avx(auVar89,auVar110);
    auVar90._4_4_ = param_11;
    auVar90._0_4_ = param_11;
    auVar90._8_4_ = param_11;
    auVar90._12_4_ = param_11;
    auVar90._16_4_ = param_11;
    auVar90._20_4_ = param_11;
    auVar90._24_4_ = param_11;
    auVar90._28_4_ = param_11;
    auVar110 = vdivps_avx(auVar110,auVar90);
    auVar66 = vsubps_avx(auVar24,auVar66);
    auVar66 = vdivps_avx(auVar66,auVar90);
    auVar111 = vsubps_avx(auVar111,auVar81);
    auVar111 = vdivps_avx(auVar111,auVar90);
    pauVar19 = (undefined1 (*) [32])(param_5 + lVar10 * 0xc);
    auVar83 = auVar110._0_16_;
    auVar22 = auVar110._16_16_;
    auVar44 = auVar66._0_16_;
    if (cVar14 == -1) {
      auVar68._16_16_ = auVar44;
      auVar68._0_16_ = auVar83;
      auVar86 = vshufpd_avx(auVar110,auVar68,2);
      auVar24 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar111);
      auVar81 = vpermpd_avx2(auVar66,0xe9);
      auVar81 = vblendps_avx(auVar24,auVar81,7);
      auVar101._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar101._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar24 = vpermps_avx2(auVar101,auVar81);
      auVar86 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar86);
      auVar86 = vblendps_avx(auVar86,auVar24,0xa4);
      *pauVar19 = auVar86;
      auVar86 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar81);
      auVar81 = vshufpd_avx(auVar110,auVar110,1);
      auVar81 = vblendps_avx(auVar86,auVar81,0x92);
      pauVar19[1] = auVar81;
      auVar69._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar69._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar66 = vpermps_avx2(auVar69,auVar66);
      auVar110 = vpermpd_avx2(auVar110,0xff);
      auVar110 = vblendps_avx(auVar66,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      pauVar19[2] = auVar110;
    }
    else {
      auVar160 = auVar66._16_16_;
      auVar92 = auVar111._0_16_;
      auVar121 = auVar111._16_16_;
      if ((uVar15 & 1) != 0) {
        *(int *)*pauVar19 = auVar110._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(*pauVar19 + 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(pauVar19[1] + 4) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x10) = auVar110._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(pauVar19[2] + 8) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar19 + 4) = auVar66._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(pauVar19[1] + 8) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x14) = auVar66._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)pauVar19[2] = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)(pauVar19[2] + 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar19 + 8) = auVar111._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar92,1);
        *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar92,2);
        *(undefined4 *)pauVar19[1] = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar92,3);
        *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x18) = auVar111._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar121,1);
        *(undefined4 *)(pauVar19[2] + 4) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar121,2);
        *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar121,3);
        *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
      }
    }
  }
  return;
}

// ApplyPreSimulationTransform___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_avx2 @ 140cd6cb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransform___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float *param_8,undefined4 *param_9,
               undefined4 param_10,uint param_11)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar29;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  float fVar30;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  float fVar31;
  undefined1 auVar32 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar33 [32];
  float fVar43;
  undefined1 auVar35 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  float fVar52;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar53 [16];
  undefined1 auVar54 [32];
  float fVar64;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  float fVar65;
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar66 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  float fVar74;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  float fVar75;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  float fVar80;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  float fVar91;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 auVar92 [32];
  float fVar100;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar101 [32];
  float fVar109;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  float fVar120;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar121 [32];
  undefined1 auVar126 [16];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar22 [32];
  undefined1 auVar34 [32];
  undefined1 auVar47 [32];
  undefined1 auVar61 [32];
  undefined1 auVar67 [32];
  
  uVar5 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar5 = param_11;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar7 = 0x10;
    uVar6 = 0;
    uVar8 = 0;
    do {
      auVar82 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar7 * 4);
      auVar58 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar7 * 4);
      auVar46 = *(undefined1 (*) [32])(param_3 + lVar7 * 4);
      auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar58);
      auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar82);
      auVar62 = vblendps_avx(auVar112,auVar62,0x88);
      auVar112 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar58);
      auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar46);
      auVar112 = vblendps_avx(auVar77,auVar112,0x13);
      auVar77 = vperm2f128_avx(auVar62,auVar112,0x31);
      auVar82 = vblendps_avx(auVar58,auVar82,0x24);
      auVar82 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar46);
      auVar82 = vblendps_avx(auVar82,auVar58,0xe0);
      fVar43 = param_8[8];
      fVar80 = auVar62._0_4_ * fVar43;
      fVar84 = auVar62._4_4_ * fVar43;
      fVar85 = auVar62._8_4_ * fVar43;
      fVar86 = auVar62._12_4_ * fVar43;
      fVar87 = auVar112._0_4_ * fVar43;
      fVar88 = auVar112._4_4_ * fVar43;
      fVar89 = auVar112._8_4_ * fVar43;
      fVar90 = auVar112._12_4_ * fVar43;
      fVar64 = param_8[9];
      fVar31 = auVar77._0_4_ * fVar64;
      fVar36 = auVar77._4_4_ * fVar64;
      fVar37 = auVar77._8_4_ * fVar64;
      fVar38 = auVar77._12_4_ * fVar64;
      fVar39 = auVar77._16_4_ * fVar64;
      fVar40 = auVar77._20_4_ * fVar64;
      fVar41 = auVar77._24_4_ * fVar64;
      fVar42 = auVar77._28_4_ * fVar64;
      fVar30 = param_8[10];
      fVar91 = auVar82._0_4_ * fVar30;
      fVar93 = auVar82._4_4_ * fVar30;
      fVar94 = auVar82._8_4_ * fVar30;
      fVar95 = auVar82._12_4_ * fVar30;
      fVar96 = auVar82._16_4_ * fVar30;
      fVar97 = auVar82._20_4_ * fVar30;
      fVar98 = auVar82._24_4_ * fVar30;
      fVar99 = auVar82._28_4_ * fVar30;
      fVar75 = param_8[3];
      fVar65 = param_8[1];
      fVar52 = param_8[2];
      fVar74 = *param_8;
      fVar100 = fVar31 * fVar74 - fVar65 * fVar80;
      fVar102 = fVar36 * fVar74 - fVar65 * fVar84;
      fVar103 = fVar37 * fVar74 - fVar65 * fVar85;
      fVar104 = fVar38 * fVar74 - fVar65 * fVar86;
      fVar105 = fVar39 * fVar74 - fVar65 * fVar87;
      fVar106 = fVar40 * fVar74 - fVar65 * fVar88;
      fVar107 = fVar41 * fVar74 - fVar65 * fVar89;
      fVar108 = fVar42 * fVar74 - fVar65 * fVar90;
      fVar109 = fVar91 * fVar65 - fVar31 * fVar52;
      fVar113 = fVar93 * fVar65 - fVar36 * fVar52;
      fVar114 = fVar94 * fVar65 - fVar37 * fVar52;
      fVar115 = fVar95 * fVar65 - fVar38 * fVar52;
      fVar116 = fVar96 * fVar65 - fVar39 * fVar52;
      fVar117 = fVar97 * fVar65 - fVar40 * fVar52;
      fVar118 = fVar98 * fVar65 - fVar41 * fVar52;
      fVar119 = fVar99 * fVar65 - fVar42 * fVar52;
      fVar120 = fVar80 * fVar52 - fVar74 * fVar91;
      fVar122 = fVar84 * fVar52 - fVar74 * fVar93;
      fVar123 = fVar85 * fVar52 - fVar74 * fVar94;
      fVar124 = fVar86 * fVar52 - fVar74 * fVar95;
      fVar125 = fVar87 * fVar52 - fVar74 * fVar96;
      fVar127 = fVar88 * fVar52 - fVar74 * fVar97;
      fVar128 = fVar89 * fVar52 - fVar74 * fVar98;
      fVar129 = fVar90 * fVar52 - fVar74 * fVar99;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar122 = fVar122 + fVar122;
      fVar123 = fVar123 + fVar123;
      fVar124 = fVar124 + fVar124;
      fVar125 = fVar125 + fVar125;
      fVar127 = fVar127 + fVar127;
      fVar128 = fVar128 + fVar128;
      fVar129 = fVar129 + fVar129;
      fVar100 = fVar100 + fVar100;
      fVar102 = fVar102 + fVar102;
      fVar103 = fVar103 + fVar103;
      fVar104 = fVar104 + fVar104;
      fVar105 = fVar105 + fVar105;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar108 = fVar108 + fVar108;
      fVar10 = param_8[4];
      fVar9 = param_8[5];
      fVar29 = param_8[6];
      auVar130._0_4_ = (fVar65 * fVar100 - fVar120 * fVar52) + fVar75 * fVar109 + fVar80 + fVar10;
      auVar130._4_4_ = (fVar65 * fVar102 - fVar122 * fVar52) + fVar75 * fVar113 + fVar84 + fVar10;
      auVar130._8_4_ = (fVar65 * fVar103 - fVar123 * fVar52) + fVar75 * fVar114 + fVar85 + fVar10;
      auVar130._12_4_ = (fVar65 * fVar104 - fVar124 * fVar52) + fVar75 * fVar115 + fVar86 + fVar10;
      auVar130._16_4_ = (fVar65 * fVar105 - fVar125 * fVar52) + fVar75 * fVar116 + fVar87 + fVar10;
      auVar130._20_4_ = (fVar65 * fVar106 - fVar127 * fVar52) + fVar75 * fVar117 + fVar88 + fVar10;
      auVar130._24_4_ = (fVar65 * fVar107 - fVar128 * fVar52) + fVar75 * fVar118 + fVar89 + fVar10;
      auVar130._28_4_ = (fVar65 * fVar108 - fVar129 * fVar52) + fVar75 * fVar119 + fVar90 + fVar10;
      auVar77._0_4_ = fVar9 + (fVar52 * fVar109 - fVar74 * fVar100) + fVar75 * fVar120 + fVar31;
      auVar77._4_4_ = fVar9 + (fVar52 * fVar113 - fVar74 * fVar102) + fVar75 * fVar122 + fVar36;
      auVar77._8_4_ = fVar9 + (fVar52 * fVar114 - fVar74 * fVar103) + fVar75 * fVar123 + fVar37;
      auVar77._12_4_ = fVar9 + (fVar52 * fVar115 - fVar74 * fVar104) + fVar75 * fVar124 + fVar38;
      auVar77._16_4_ = fVar9 + (fVar52 * fVar116 - fVar74 * fVar105) + fVar75 * fVar125 + fVar39;
      auVar77._20_4_ = fVar9 + (fVar52 * fVar117 - fVar74 * fVar106) + fVar75 * fVar127 + fVar40;
      auVar77._24_4_ = fVar9 + (fVar52 * fVar118 - fVar74 * fVar107) + fVar75 * fVar128 + fVar41;
      auVar77._28_4_ = fVar9 + (fVar52 * fVar119 - fVar74 * fVar108) + fVar75 * fVar129 + fVar42;
      auVar132._0_4_ = (fVar74 * fVar120 - fVar65 * fVar109) + fVar75 * fVar100 + fVar91 + fVar29;
      auVar132._4_4_ = (fVar74 * fVar122 - fVar65 * fVar113) + fVar75 * fVar102 + fVar93 + fVar29;
      auVar132._8_4_ = (fVar74 * fVar123 - fVar65 * fVar114) + fVar75 * fVar103 + fVar94 + fVar29;
      auVar132._12_4_ = (fVar74 * fVar124 - fVar65 * fVar115) + fVar75 * fVar104 + fVar95 + fVar29;
      auVar132._16_4_ = (fVar74 * fVar125 - fVar65 * fVar116) + fVar75 * fVar105 + fVar96 + fVar29;
      auVar132._20_4_ = (fVar74 * fVar127 - fVar65 * fVar117) + fVar75 * fVar106 + fVar97 + fVar29;
      auVar132._24_4_ = (fVar74 * fVar128 - fVar65 * fVar118) + fVar75 * fVar107 + fVar98 + fVar29;
      auVar132._28_4_ = (fVar74 * fVar129 - fVar65 * fVar119) + fVar75 * fVar108 + fVar99 + fVar29;
      uVar1 = *param_9;
      auVar12._4_4_ = uVar1;
      auVar12._0_4_ = uVar1;
      auVar12._8_4_ = uVar1;
      auVar12._12_4_ = uVar1;
      auVar12._16_4_ = uVar1;
      auVar12._20_4_ = uVar1;
      auVar12._24_4_ = uVar1;
      auVar12._28_4_ = uVar1;
      auVar46 = vsubps_avx(auVar130,auVar12);
      uVar1 = param_9[1];
      auVar13._4_4_ = uVar1;
      auVar13._0_4_ = uVar1;
      auVar13._8_4_ = uVar1;
      auVar13._12_4_ = uVar1;
      auVar13._16_4_ = uVar1;
      auVar13._20_4_ = uVar1;
      auVar13._24_4_ = uVar1;
      auVar13._28_4_ = uVar1;
      auVar62 = vsubps_avx(auVar77,auVar13);
      uVar1 = param_9[2];
      auVar14._4_4_ = uVar1;
      auVar14._0_4_ = uVar1;
      auVar14._8_4_ = uVar1;
      auVar14._12_4_ = uVar1;
      auVar14._16_4_ = uVar1;
      auVar14._20_4_ = uVar1;
      auVar14._24_4_ = uVar1;
      auVar14._28_4_ = uVar1;
      auVar112 = vsubps_avx(auVar132,auVar14);
      auVar82 = *(undefined1 (*) [32])(param_6 + (uVar8 & 0xffffffff));
      auVar58 = vunpcklps_avx(auVar46,auVar62);
      auVar77 = vunpcklps_avx(auVar112,auVar82);
      auVar55 = vunpcklpd_avx(auVar58,auVar77);
      auVar58 = vunpckhpd_avx(auVar58,auVar77);
      auVar33._16_16_ = auVar58._0_16_;
      auVar33._0_16_ = auVar55._0_16_;
      *(undefined1 (*) [32])(param_1 + uVar8 * 4) = auVar33;
      auVar82 = vunpckhps_avx(auVar112,auVar82);
      auVar77 = vunpckhps_avx(auVar46,auVar62);
      auVar33 = vunpcklpd_avx(auVar77,auVar82);
      auVar82 = vunpckhpd_avx(auVar77,auVar82);
      auVar54._16_16_ = auVar82._0_16_;
      auVar54._0_16_ = auVar33._0_16_;
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar8 * 4) = auVar54;
      auVar58 = vperm2f128_avx(auVar55,auVar58,0x31);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar8 * 4) = auVar58;
      auVar82 = vperm2f128_avx(auVar33,auVar82,0x31);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar8 * 4) = auVar82;
      auVar82._16_16_ = auVar62._0_16_;
      auVar82._0_16_ = auVar46._0_16_;
      auVar58 = vshufpd_avx(auVar46,auVar82,2);
      auVar77 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar112);
      auVar82 = vpermpd_avx2(auVar62,0xe9);
      auVar82 = vblendps_avx(auVar77,auVar82,7);
      auVar77 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar58);
      auVar58 = vblendps_avx(auVar58,auVar77,0xa4);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7 * 4) = auVar58;
      auVar58 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar82);
      auVar82 = vshufpd_avx(auVar46,auVar46,1);
      auVar82 = vblendps_avx(auVar58,auVar82,0x92);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7 * 4) = auVar82;
      auVar58 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar62);
      auVar82 = vpermpd_avx2(auVar46,0xff);
      auVar82 = vblendps_avx(auVar58,auVar82,3);
      auVar82 = vblendps_avx(auVar82,auVar112,0xe0);
      auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar82);
      *(undefined1 (*) [32])(param_3 + lVar7 * 4) = auVar82;
      auVar54 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar33 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
      auVar55 = ___ymm_0000000600000003000000000000000000000005000000020000000000000000;
      auVar82 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7 * 4);
      auVar58 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7 * 4);
      auVar46 = *(undefined1 (*) [32])(param_2 + lVar7 * 4);
      auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar58);
      auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar82);
      auVar62 = vblendps_avx(auVar112,auVar62,0x88);
      auVar112 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar58);
      auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar46);
      auVar112 = vblendps_avx(auVar77,auVar112,0x13);
      auVar77 = vperm2f128_avx(auVar62,auVar112,0x31);
      auVar82 = vblendps_avx(auVar58,auVar82,0x24);
      auVar82 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar46);
      auVar82 = vblendps_avx(auVar82,auVar58,0xe0);
      fVar120 = fVar43 * auVar62._0_4_;
      fVar122 = fVar43 * auVar62._4_4_;
      fVar123 = fVar43 * auVar62._8_4_;
      fVar124 = fVar43 * auVar62._12_4_;
      fVar125 = fVar43 * auVar112._0_4_;
      fVar127 = fVar43 * auVar112._4_4_;
      fVar128 = fVar43 * auVar112._8_4_;
      fVar129 = fVar43 * auVar112._12_4_;
      fVar80 = fVar64 * auVar77._0_4_;
      fVar84 = fVar64 * auVar77._4_4_;
      fVar85 = fVar64 * auVar77._8_4_;
      fVar86 = fVar64 * auVar77._12_4_;
      fVar87 = fVar64 * auVar77._16_4_;
      fVar88 = fVar64 * auVar77._20_4_;
      fVar89 = fVar64 * auVar77._24_4_;
      fVar90 = fVar64 * auVar77._28_4_;
      fVar31 = fVar30 * auVar82._0_4_;
      fVar36 = fVar30 * auVar82._4_4_;
      fVar37 = fVar30 * auVar82._8_4_;
      fVar38 = fVar30 * auVar82._12_4_;
      fVar39 = fVar30 * auVar82._16_4_;
      fVar40 = fVar30 * auVar82._20_4_;
      fVar41 = fVar30 * auVar82._24_4_;
      fVar42 = fVar30 * auVar82._28_4_;
      fVar91 = fVar80 * fVar74 - fVar120 * fVar65;
      fVar93 = fVar84 * fVar74 - fVar122 * fVar65;
      fVar94 = fVar85 * fVar74 - fVar123 * fVar65;
      fVar95 = fVar86 * fVar74 - fVar124 * fVar65;
      fVar96 = fVar87 * fVar74 - fVar125 * fVar65;
      fVar97 = fVar88 * fVar74 - fVar127 * fVar65;
      fVar98 = fVar89 * fVar74 - fVar128 * fVar65;
      fVar99 = fVar90 * fVar74 - fVar129 * fVar65;
      fVar100 = fVar31 * fVar65 - fVar80 * fVar52;
      fVar102 = fVar36 * fVar65 - fVar84 * fVar52;
      fVar103 = fVar37 * fVar65 - fVar85 * fVar52;
      fVar104 = fVar38 * fVar65 - fVar86 * fVar52;
      fVar105 = fVar39 * fVar65 - fVar87 * fVar52;
      fVar106 = fVar40 * fVar65 - fVar88 * fVar52;
      fVar107 = fVar41 * fVar65 - fVar89 * fVar52;
      fVar108 = fVar42 * fVar65 - fVar90 * fVar52;
      fVar109 = fVar120 * fVar52 - fVar74 * fVar31;
      fVar113 = fVar122 * fVar52 - fVar74 * fVar36;
      fVar114 = fVar123 * fVar52 - fVar74 * fVar37;
      fVar115 = fVar124 * fVar52 - fVar74 * fVar38;
      fVar116 = fVar125 * fVar52 - fVar74 * fVar39;
      fVar117 = fVar127 * fVar52 - fVar74 * fVar40;
      fVar118 = fVar128 * fVar52 - fVar74 * fVar41;
      fVar119 = fVar129 * fVar52 - fVar74 * fVar42;
      fVar100 = fVar100 + fVar100;
      fVar102 = fVar102 + fVar102;
      fVar103 = fVar103 + fVar103;
      fVar104 = fVar104 + fVar104;
      fVar105 = fVar105 + fVar105;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar108 = fVar108 + fVar108;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar91 = fVar91 + fVar91;
      fVar93 = fVar93 + fVar93;
      fVar94 = fVar94 + fVar94;
      fVar95 = fVar95 + fVar95;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar98 = fVar98 + fVar98;
      fVar99 = fVar99 + fVar99;
      auVar62._0_4_ = fVar75 * fVar91 + fVar31 + (fVar74 * fVar109 - fVar65 * fVar100);
      auVar62._4_4_ = fVar75 * fVar93 + fVar36 + (fVar74 * fVar113 - fVar65 * fVar102);
      auVar62._8_4_ = fVar75 * fVar94 + fVar37 + (fVar74 * fVar114 - fVar65 * fVar103);
      auVar62._12_4_ = fVar75 * fVar95 + fVar38 + (fVar74 * fVar115 - fVar65 * fVar104);
      auVar62._16_4_ = fVar75 * fVar96 + fVar39 + (fVar74 * fVar116 - fVar65 * fVar105);
      auVar62._20_4_ = fVar75 * fVar97 + fVar40 + (fVar74 * fVar117 - fVar65 * fVar106);
      auVar62._24_4_ = fVar75 * fVar98 + fVar41 + (fVar74 * fVar118 - fVar65 * fVar107);
      auVar62._28_4_ = fVar75 * fVar99 + fVar42 + (fVar74 * fVar119 - fVar65 * fVar108);
      auVar66._0_4_ = fVar75 * fVar100 + fVar120 + (fVar65 * fVar91 - fVar52 * fVar109);
      auVar66._4_4_ = fVar75 * fVar102 + fVar122 + (fVar65 * fVar93 - fVar52 * fVar113);
      auVar66._8_4_ = fVar75 * fVar103 + fVar123 + (fVar65 * fVar94 - fVar52 * fVar114);
      auVar66._12_4_ = fVar75 * fVar104 + fVar124 + (fVar65 * fVar95 - fVar52 * fVar115);
      auVar67._16_4_ = fVar75 * fVar105 + fVar125 + (fVar65 * fVar96 - fVar52 * fVar116);
      auVar67._0_16_ = auVar66;
      auVar67._20_4_ = fVar75 * fVar106 + fVar127 + (fVar65 * fVar97 - fVar52 * fVar117);
      auVar67._24_4_ = fVar75 * fVar107 + fVar128 + (fVar65 * fVar98 - fVar52 * fVar118);
      auVar67._28_4_ = fVar75 * fVar108 + fVar129 + (fVar65 * fVar99 - fVar52 * fVar119);
      auVar32._0_4_ = fVar75 * fVar109 + fVar80 + (fVar52 * fVar100 - fVar74 * fVar91);
      auVar32._4_4_ = fVar75 * fVar113 + fVar84 + (fVar52 * fVar102 - fVar74 * fVar93);
      auVar32._8_4_ = fVar75 * fVar114 + fVar85 + (fVar52 * fVar103 - fVar74 * fVar94);
      auVar32._12_4_ = fVar75 * fVar115 + fVar86 + (fVar52 * fVar104 - fVar74 * fVar95);
      auVar34._16_4_ = fVar75 * fVar116 + fVar87 + (fVar52 * fVar105 - fVar74 * fVar96);
      auVar34._0_16_ = auVar32;
      auVar34._20_4_ = fVar75 * fVar117 + fVar88 + (fVar52 * fVar106 - fVar74 * fVar97);
      auVar34._24_4_ = fVar75 * fVar118 + fVar89 + (fVar52 * fVar107 - fVar74 * fVar98);
      auVar34._28_4_ = fVar75 * fVar119 + fVar90 + (fVar52 * fVar108 - fVar74 * fVar99);
      auVar45._16_16_ = auVar32;
      auVar45._0_16_ = auVar66;
      auVar58 = vshufpd_avx(auVar67,auVar45,2);
      auVar46 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar62);
      auVar82 = vpermpd_avx2(auVar34,0xe9);
      auVar82 = vblendps_avx(auVar46,auVar82,7);
      auVar46 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar58);
      auVar58 = vblendps_avx(auVar58,auVar46,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar7 * 4) = auVar58;
      auVar58 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar82);
      auVar82 = vshufpd_avx(auVar67,auVar67,1);
      auVar82 = vblendps_avx(auVar58,auVar82,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar7 * 4) = auVar82;
      auVar58 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar34);
      auVar82 = vpermpd_avx2(auVar67,0xff);
      auVar82 = vblendps_avx(auVar58,auVar82,3);
      auVar82 = vblendps_avx(auVar82,auVar62,0xe0);
      auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar82);
      *(undefined1 (*) [32])(param_2 + lVar7 * 4) = auVar82;
      auVar45 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar34 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar82 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar7 * 4);
      auVar58 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar7 * 4);
      auVar46 = *(undefined1 (*) [32])(param_4 + lVar7 * 4);
      auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar58);
      auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar82);
      auVar62 = vblendps_avx(auVar112,auVar62,0x88);
      auVar112 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar58);
      auVar77 = vpermps_avx2(auVar55,auVar46);
      auVar112 = vblendps_avx(auVar77,auVar112,0x13);
      auVar77 = vperm2f128_avx(auVar62,auVar112,0x31);
      auVar82 = vblendps_avx(auVar58,auVar82,0x24);
      auVar82 = vpermps_avx2(auVar33,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar46);
      auVar82 = vblendps_avx(auVar82,auVar58,0xe0);
      fVar42 = fVar43 * auVar62._0_4_;
      fVar80 = fVar43 * auVar62._4_4_;
      fVar84 = fVar43 * auVar62._8_4_;
      fVar85 = fVar43 * auVar62._12_4_;
      fVar86 = fVar43 * auVar112._0_4_;
      fVar87 = fVar43 * auVar112._4_4_;
      fVar88 = fVar43 * auVar112._8_4_;
      fVar43 = fVar43 * auVar112._12_4_;
      fVar98 = fVar64 * auVar77._0_4_;
      fVar99 = fVar64 * auVar77._4_4_;
      fVar100 = fVar64 * auVar77._8_4_;
      fVar102 = fVar64 * auVar77._12_4_;
      fVar103 = fVar64 * auVar77._16_4_;
      fVar104 = fVar64 * auVar77._20_4_;
      fVar105 = fVar64 * auVar77._24_4_;
      fVar64 = fVar64 * auVar77._28_4_;
      fVar31 = fVar30 * auVar82._0_4_;
      fVar36 = fVar30 * auVar82._4_4_;
      fVar37 = fVar30 * auVar82._8_4_;
      fVar38 = fVar30 * auVar82._12_4_;
      fVar39 = fVar30 * auVar82._16_4_;
      fVar40 = fVar30 * auVar82._20_4_;
      fVar41 = fVar30 * auVar82._24_4_;
      fVar30 = fVar30 * auVar82._28_4_;
      fVar89 = fVar98 * fVar74 - fVar65 * fVar42;
      fVar90 = fVar99 * fVar74 - fVar65 * fVar80;
      fVar91 = fVar100 * fVar74 - fVar65 * fVar84;
      fVar93 = fVar102 * fVar74 - fVar65 * fVar85;
      fVar94 = fVar103 * fVar74 - fVar65 * fVar86;
      fVar95 = fVar104 * fVar74 - fVar65 * fVar87;
      fVar96 = fVar105 * fVar74 - fVar65 * fVar88;
      fVar97 = fVar64 * fVar74 - fVar65 * fVar43;
      fVar106 = fVar31 * fVar65 - fVar98 * fVar52;
      fVar107 = fVar36 * fVar65 - fVar99 * fVar52;
      fVar108 = fVar37 * fVar65 - fVar100 * fVar52;
      fVar109 = fVar38 * fVar65 - fVar102 * fVar52;
      fVar113 = fVar39 * fVar65 - fVar103 * fVar52;
      fVar114 = fVar40 * fVar65 - fVar104 * fVar52;
      fVar115 = fVar41 * fVar65 - fVar105 * fVar52;
      fVar116 = fVar30 * fVar65 - fVar64 * fVar52;
      fVar117 = fVar42 * fVar52 - fVar74 * fVar31;
      fVar118 = fVar80 * fVar52 - fVar74 * fVar36;
      fVar119 = fVar84 * fVar52 - fVar74 * fVar37;
      fVar120 = fVar85 * fVar52 - fVar74 * fVar38;
      fVar122 = fVar86 * fVar52 - fVar74 * fVar39;
      fVar123 = fVar87 * fVar52 - fVar74 * fVar40;
      fVar124 = fVar88 * fVar52 - fVar74 * fVar41;
      fVar125 = fVar43 * fVar52 - fVar74 * fVar30;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar108 = fVar108 + fVar108;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar122 = fVar122 + fVar122;
      fVar123 = fVar123 + fVar123;
      fVar124 = fVar124 + fVar124;
      fVar125 = fVar125 + fVar125;
      fVar89 = fVar89 + fVar89;
      fVar90 = fVar90 + fVar90;
      fVar91 = fVar91 + fVar91;
      fVar93 = fVar93 + fVar93;
      fVar94 = fVar94 + fVar94;
      fVar95 = fVar95 + fVar95;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      auVar46._0_4_ = fVar75 * fVar106 + fVar42 + (fVar65 * fVar89 - fVar52 * fVar117) + fVar10;
      auVar46._4_4_ = fVar75 * fVar107 + fVar80 + (fVar65 * fVar90 - fVar52 * fVar118) + fVar10;
      auVar46._8_4_ = fVar75 * fVar108 + fVar84 + (fVar65 * fVar91 - fVar52 * fVar119) + fVar10;
      auVar46._12_4_ = fVar75 * fVar109 + fVar85 + (fVar65 * fVar93 - fVar52 * fVar120) + fVar10;
      auVar46._16_4_ = fVar75 * fVar113 + fVar86 + (fVar65 * fVar94 - fVar52 * fVar122) + fVar10;
      auVar46._20_4_ = fVar75 * fVar114 + fVar87 + (fVar65 * fVar95 - fVar52 * fVar123) + fVar10;
      auVar46._24_4_ = fVar75 * fVar115 + fVar88 + (fVar65 * fVar96 - fVar52 * fVar124) + fVar10;
      auVar46._28_4_ = fVar75 * fVar116 + fVar43 + (fVar65 * fVar97 - fVar52 * fVar125) + fVar10;
      auVar55._0_4_ = fVar75 * fVar117 + fVar98 + (fVar52 * fVar106 - fVar74 * fVar89) + fVar9;
      auVar55._4_4_ = fVar75 * fVar118 + fVar99 + (fVar52 * fVar107 - fVar74 * fVar90) + fVar9;
      auVar55._8_4_ = fVar75 * fVar119 + fVar100 + (fVar52 * fVar108 - fVar74 * fVar91) + fVar9;
      auVar55._12_4_ = fVar75 * fVar120 + fVar102 + (fVar52 * fVar109 - fVar74 * fVar93) + fVar9;
      auVar55._16_4_ = fVar75 * fVar122 + fVar103 + (fVar52 * fVar113 - fVar74 * fVar94) + fVar9;
      auVar55._20_4_ = fVar75 * fVar123 + fVar104 + (fVar52 * fVar114 - fVar74 * fVar95) + fVar9;
      auVar55._24_4_ = fVar75 * fVar124 + fVar105 + (fVar52 * fVar115 - fVar74 * fVar96) + fVar9;
      auVar55._28_4_ = fVar75 * fVar125 + fVar64 + (fVar52 * fVar116 - fVar74 * fVar97) + fVar9;
      auVar58._0_4_ = fVar89 * fVar75 + fVar31 + (fVar74 * fVar117 - fVar65 * fVar106) + fVar29;
      auVar58._4_4_ = fVar90 * fVar75 + fVar36 + (fVar74 * fVar118 - fVar65 * fVar107) + fVar29;
      auVar58._8_4_ = fVar91 * fVar75 + fVar37 + (fVar74 * fVar119 - fVar65 * fVar108) + fVar29;
      auVar58._12_4_ = fVar93 * fVar75 + fVar38 + (fVar74 * fVar120 - fVar65 * fVar109) + fVar29;
      auVar58._16_4_ = fVar94 * fVar75 + fVar39 + (fVar74 * fVar122 - fVar65 * fVar113) + fVar29;
      auVar58._20_4_ = fVar95 * fVar75 + fVar40 + (fVar74 * fVar123 - fVar65 * fVar114) + fVar29;
      auVar58._24_4_ = fVar96 * fVar75 + fVar41 + (fVar74 * fVar124 - fVar65 * fVar115) + fVar29;
      auVar58._28_4_ = fVar97 * fVar75 + fVar30 + (fVar74 * fVar125 - fVar65 * fVar116) + fVar29;
      auVar77 = vsubps_avx(auVar46,auVar12);
      auVar55 = vsubps_avx(auVar55,auVar13);
      auVar33 = vsubps_avx(auVar58,auVar14);
      auVar56._16_16_ = auVar55._0_16_;
      auVar56._0_16_ = auVar77._0_16_;
      auVar58 = vshufpd_avx(auVar77,auVar56,2);
      auVar46 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar33);
      auVar82 = vpermpd_avx2(auVar55,0xe9);
      auVar82 = vblendps_avx(auVar46,auVar82,7);
      auVar46 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar82);
      auVar58 = vpermps_avx2(auVar54,auVar58);
      auVar58 = vblendps_avx(auVar58,auVar46,0xa4);
      *(undefined1 (*) [32])(param_4 + -0x40 + lVar7 * 4) = auVar58;
      auVar13 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar58 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar82);
      auVar82 = vshufpd_avx(auVar77,auVar77,1);
      auVar82 = vblendps_avx(auVar58,auVar82,0x92);
      *(undefined1 (*) [32])(param_4 + -0x20 + lVar7 * 4) = auVar82;
      auVar56 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar14 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar58 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar55);
      auVar82 = vpermpd_avx2(auVar77,0xff);
      auVar82 = vblendps_avx(auVar58,auVar82,3);
      auVar82 = vblendps_avx(auVar82,auVar33,0xe0);
      auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar82);
      *(undefined1 (*) [32])(param_4 + lVar7 * 4) = auVar82;
      auVar82 = *(undefined1 (*) [32])(param_7 + -0x40 + lVar7 * 4);
      auVar58 = *(undefined1 (*) [32])(param_7 + -0x20 + lVar7 * 4);
      auVar46 = *(undefined1 (*) [32])(param_7 + lVar7 * 4);
      auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar58);
      auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar82);
      auVar62 = vblendps_avx(auVar112,auVar62,0x88);
      auVar112 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar58);
      auVar12 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar46);
      auVar112 = vblendps_avx(auVar12,auVar112,0x13);
      auVar101._16_16_ = auVar112._0_16_;
      auVar101._0_16_ = auVar62._0_16_;
      auVar62 = vperm2f128_avx(auVar62,auVar112,0x31);
      auVar82 = vblendps_avx(auVar58,auVar82,0x24);
      auVar82 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar46);
      auVar82 = vblendps_avx(auVar82,auVar58,0xe0);
      auVar58 = vsubps_avx(auVar101,auVar77);
      auVar112._4_4_ = param_10;
      auVar112._0_4_ = param_10;
      auVar112._8_4_ = param_10;
      auVar112._12_4_ = param_10;
      auVar112._16_4_ = param_10;
      auVar112._20_4_ = param_10;
      auVar112._24_4_ = param_10;
      auVar112._28_4_ = param_10;
      auVar46 = vdivps_avx(auVar58,auVar112);
      auVar58 = vsubps_avx(auVar62,auVar55);
      auVar62 = vdivps_avx(auVar58,auVar112);
      auVar82 = vsubps_avx(auVar82,auVar33);
      auVar112 = vdivps_avx(auVar82,auVar112);
      auVar57._16_16_ = auVar62._0_16_;
      auVar57._0_16_ = auVar46._0_16_;
      auVar58 = vshufpd_avx(auVar46,auVar57,2);
      auVar77 = vpermps_avx2(auVar34,auVar112);
      auVar82 = vpermpd_avx2(auVar62,0xe9);
      auVar82 = vblendps_avx(auVar77,auVar82,7);
      auVar77 = vpermps_avx2(auVar45,auVar82);
      auVar58 = vpermps_avx2(auVar54,auVar58);
      auVar58 = vblendps_avx(auVar58,auVar77,0xa4);
      *(undefined1 (*) [32])(param_5 + -0x40 + lVar7 * 4) = auVar58;
      auVar58 = vpermps_avx2(auVar13,auVar82);
      auVar82 = vshufpd_avx(auVar46,auVar46,1);
      auVar82 = vblendps_avx(auVar58,auVar82,0x92);
      *(undefined1 (*) [32])(param_5 + -0x20 + lVar7 * 4) = auVar82;
      auVar58 = vpermps_avx2(auVar14,auVar62);
      auVar82 = vpermpd_avx2(auVar46,0xff);
      auVar82 = vblendps_avx(auVar58,auVar82,3);
      auVar82 = vblendps_avx(auVar82,auVar112,0xe0);
      auVar82 = vpermps_avx2(auVar56,auVar82);
      *(undefined1 (*) [32])(param_5 + lVar7 * 4) = auVar82;
      uVar8 = uVar8 + 0x20;
      lVar7 = lVar7 + 0x18;
      uVar6 = uVar6 + 8;
    } while ((int)uVar6 < (int)(uVar5 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar6) {
      return;
    }
  }
  auVar15._4_4_ = uVar6;
  auVar15._0_4_ = uVar6;
  auVar15._8_4_ = uVar6;
  auVar15._12_4_ = uVar6;
  auVar15._16_4_ = uVar6;
  auVar15._20_4_ = uVar6;
  auVar15._24_4_ = uVar6;
  auVar15._28_4_ = uVar6;
  auVar82 = vpor_avx2(auVar15,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar35._4_4_ = param_11;
  auVar35._0_4_ = param_11;
  auVar35._8_4_ = param_11;
  auVar35._12_4_ = param_11;
  auVar35._16_4_ = param_11;
  auVar35._20_4_ = param_11;
  auVar35._24_4_ = param_11;
  auVar35._28_4_ = param_11;
  auVar82 = vpcmpgtd_avx2(auVar35,auVar82);
  uVar8 = (ulonglong)uVar6;
  pauVar3 = (undefined1 (*) [32])(param_3 + uVar8 * 0xc);
  uVar5 = vmovmskps_avx(auVar82);
  if (uVar5 == 0xff) {
    auVar58 = pauVar3[1];
    auVar46 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar58);
    auVar62 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar3);
    auVar46 = vblendps_avx(auVar62,auVar46,0x88);
    auVar62 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar58);
    auVar112 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            pauVar3[2]);
    auVar62 = vblendps_avx(auVar112,auVar62,0x13);
    auVar16._16_16_ = auVar62._0_16_;
    auVar16._0_16_ = auVar46._0_16_;
    auVar46 = vperm2f128_avx(auVar46,auVar62,0x31);
    auVar58 = vblendps_avx(auVar58,*pauVar3,0x24);
    auVar58 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar58);
    auVar68._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar68._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar62 = vpermps_avx2(auVar68,pauVar3[2]);
    auVar58 = vblendps_avx(auVar58,auVar62,0xe0);
  }
  else {
    auVar16 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar82);
    auVar46 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
  }
  pauVar2 = (undefined1 (*) [32])(param_1 + uVar8 * 0x10);
  cVar4 = (char)uVar5;
  fVar43 = param_8[8];
  fVar41 = auVar16._0_4_ * fVar43;
  fVar42 = auVar16._4_4_ * fVar43;
  fVar80 = auVar16._8_4_ * fVar43;
  fVar84 = auVar16._12_4_ * fVar43;
  fVar85 = auVar16._16_4_ * fVar43;
  fVar86 = auVar16._20_4_ * fVar43;
  fVar87 = auVar16._24_4_ * fVar43;
  fVar88 = auVar16._28_4_ * fVar43;
  fVar64 = param_8[9];
  fVar9 = auVar46._0_4_ * fVar64;
  fVar29 = auVar46._4_4_ * fVar64;
  fVar31 = auVar46._8_4_ * fVar64;
  fVar36 = auVar46._12_4_ * fVar64;
  fVar37 = auVar46._16_4_ * fVar64;
  fVar38 = auVar46._20_4_ * fVar64;
  fVar39 = auVar46._24_4_ * fVar64;
  fVar40 = auVar46._28_4_ * fVar64;
  fVar30 = param_8[10];
  fVar89 = fVar30 * auVar58._0_4_;
  fVar90 = fVar30 * auVar58._4_4_;
  fVar91 = fVar30 * auVar58._8_4_;
  fVar93 = fVar30 * auVar58._12_4_;
  fVar94 = fVar30 * auVar58._16_4_;
  fVar95 = fVar30 * auVar58._20_4_;
  fVar96 = fVar30 * auVar58._24_4_;
  fVar97 = fVar30 * auVar58._28_4_;
  fVar75 = param_8[3];
  fVar65 = param_8[1];
  fVar52 = param_8[2];
  fVar74 = *param_8;
  fVar98 = fVar9 * fVar74 - fVar41 * fVar65;
  fVar99 = fVar29 * fVar74 - fVar42 * fVar65;
  fVar100 = fVar31 * fVar74 - fVar80 * fVar65;
  fVar102 = fVar36 * fVar74 - fVar84 * fVar65;
  fVar103 = fVar37 * fVar74 - fVar85 * fVar65;
  fVar104 = fVar38 * fVar74 - fVar86 * fVar65;
  fVar105 = fVar39 * fVar74 - fVar87 * fVar65;
  fVar106 = fVar40 * fVar74 - fVar88 * fVar65;
  fVar107 = fVar89 * fVar65 - fVar9 * fVar52;
  fVar108 = fVar90 * fVar65 - fVar29 * fVar52;
  fVar109 = fVar91 * fVar65 - fVar31 * fVar52;
  fVar113 = fVar93 * fVar65 - fVar36 * fVar52;
  fVar114 = fVar94 * fVar65 - fVar37 * fVar52;
  fVar115 = fVar95 * fVar65 - fVar38 * fVar52;
  fVar116 = fVar96 * fVar65 - fVar39 * fVar52;
  fVar117 = fVar97 * fVar65 - fVar40 * fVar52;
  fVar118 = fVar41 * fVar52 - fVar89 * fVar74;
  fVar119 = fVar42 * fVar52 - fVar90 * fVar74;
  fVar120 = fVar80 * fVar52 - fVar91 * fVar74;
  fVar122 = fVar84 * fVar52 - fVar93 * fVar74;
  fVar123 = fVar85 * fVar52 - fVar94 * fVar74;
  fVar124 = fVar86 * fVar52 - fVar95 * fVar74;
  fVar125 = fVar87 * fVar52 - fVar96 * fVar74;
  fVar127 = fVar88 * fVar52 - fVar97 * fVar74;
  fVar107 = fVar107 + fVar107;
  fVar108 = fVar108 + fVar108;
  fVar109 = fVar109 + fVar109;
  fVar113 = fVar113 + fVar113;
  fVar114 = fVar114 + fVar114;
  fVar115 = fVar115 + fVar115;
  fVar116 = fVar116 + fVar116;
  fVar117 = fVar117 + fVar117;
  fVar118 = fVar118 + fVar118;
  fVar119 = fVar119 + fVar119;
  fVar120 = fVar120 + fVar120;
  fVar122 = fVar122 + fVar122;
  fVar123 = fVar123 + fVar123;
  fVar124 = fVar124 + fVar124;
  fVar125 = fVar125 + fVar125;
  fVar127 = fVar127 + fVar127;
  fVar98 = fVar98 + fVar98;
  fVar99 = fVar99 + fVar99;
  fVar100 = fVar100 + fVar100;
  fVar102 = fVar102 + fVar102;
  fVar103 = fVar103 + fVar103;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar10 = param_8[4];
  auVar110._0_4_ = fVar10 + fVar75 * fVar107 + fVar41 + (fVar65 * fVar98 - fVar118 * fVar52);
  auVar110._4_4_ = fVar10 + fVar75 * fVar108 + fVar42 + (fVar65 * fVar99 - fVar119 * fVar52);
  auVar110._8_4_ = fVar10 + fVar75 * fVar109 + fVar80 + (fVar65 * fVar100 - fVar120 * fVar52);
  auVar110._12_4_ = fVar10 + fVar75 * fVar113 + fVar84 + (fVar65 * fVar102 - fVar122 * fVar52);
  auVar110._16_4_ = fVar10 + fVar75 * fVar114 + fVar85 + (fVar65 * fVar103 - fVar123 * fVar52);
  auVar110._20_4_ = fVar10 + fVar75 * fVar115 + fVar86 + (fVar65 * fVar104 - fVar124 * fVar52);
  auVar110._24_4_ = fVar10 + fVar75 * fVar116 + fVar87 + (fVar65 * fVar105 - fVar125 * fVar52);
  auVar110._28_4_ = fVar10 + fVar75 * fVar117 + fVar88 + (fVar65 * fVar106 - fVar127 * fVar52);
  fVar10 = param_8[5];
  auVar17._0_4_ = fVar10 + (fVar52 * fVar107 - fVar98 * fVar74) + fVar75 * fVar118 + fVar9;
  auVar17._4_4_ = fVar10 + (fVar52 * fVar108 - fVar99 * fVar74) + fVar75 * fVar119 + fVar29;
  auVar17._8_4_ = fVar10 + (fVar52 * fVar109 - fVar100 * fVar74) + fVar75 * fVar120 + fVar31;
  auVar17._12_4_ = fVar10 + (fVar52 * fVar113 - fVar102 * fVar74) + fVar75 * fVar122 + fVar36;
  auVar17._16_4_ = fVar10 + (fVar52 * fVar114 - fVar103 * fVar74) + fVar75 * fVar123 + fVar37;
  auVar17._20_4_ = fVar10 + (fVar52 * fVar115 - fVar104 * fVar74) + fVar75 * fVar124 + fVar38;
  auVar17._24_4_ = fVar10 + (fVar52 * fVar116 - fVar105 * fVar74) + fVar75 * fVar125 + fVar39;
  auVar17._28_4_ = fVar10 + (fVar52 * fVar117 - fVar106 * fVar74) + fVar75 * fVar127 + fVar40;
  fVar10 = param_8[6];
  auVar131._0_4_ = fVar10 + fVar75 * fVar98 + fVar89 + (fVar74 * fVar118 - fVar107 * fVar65);
  auVar131._4_4_ = fVar10 + fVar75 * fVar99 + fVar90 + (fVar74 * fVar119 - fVar108 * fVar65);
  auVar131._8_4_ = fVar10 + fVar75 * fVar100 + fVar91 + (fVar74 * fVar120 - fVar109 * fVar65);
  auVar131._12_4_ = fVar10 + fVar75 * fVar102 + fVar93 + (fVar74 * fVar122 - fVar113 * fVar65);
  auVar131._16_4_ = fVar10 + fVar75 * fVar103 + fVar94 + (fVar74 * fVar123 - fVar114 * fVar65);
  auVar131._20_4_ = fVar10 + fVar75 * fVar104 + fVar95 + (fVar74 * fVar124 - fVar115 * fVar65);
  auVar131._24_4_ = fVar10 + fVar75 * fVar105 + fVar96 + (fVar74 * fVar125 - fVar116 * fVar65);
  auVar131._28_4_ = fVar10 + fVar75 * fVar106 + fVar97 + (fVar74 * fVar127 - fVar117 * fVar65);
  uVar1 = *param_9;
  auVar121._4_4_ = uVar1;
  auVar121._0_4_ = uVar1;
  auVar121._8_4_ = uVar1;
  auVar121._12_4_ = uVar1;
  auVar121._16_4_ = uVar1;
  auVar121._20_4_ = uVar1;
  auVar121._24_4_ = uVar1;
  auVar121._28_4_ = uVar1;
  auVar58 = vsubps_avx(auVar110,auVar121);
  uVar1 = param_9[1];
  auVar111._4_4_ = uVar1;
  auVar111._0_4_ = uVar1;
  auVar111._8_4_ = uVar1;
  auVar111._12_4_ = uVar1;
  auVar111._16_4_ = uVar1;
  auVar111._20_4_ = uVar1;
  auVar111._24_4_ = uVar1;
  auVar111._28_4_ = uVar1;
  auVar46 = vsubps_avx(auVar17,auVar111);
  uVar1 = param_9[2];
  auVar18._4_4_ = uVar1;
  auVar18._0_4_ = uVar1;
  auVar18._8_4_ = uVar1;
  auVar18._12_4_ = uVar1;
  auVar18._16_4_ = uVar1;
  auVar18._20_4_ = uVar1;
  auVar18._24_4_ = uVar1;
  auVar18._28_4_ = uVar1;
  auVar62 = vsubps_avx(auVar131,auVar18);
  auVar112 = vmaskmovps_avx(auVar82,*(undefined1 (*) [32])(param_6 + (int)(uVar6 << 2)));
  auVar66 = auVar58._0_16_;
  auVar11 = auVar58._16_16_;
  auVar32 = auVar46._0_16_;
  if (cVar4 == -1) {
    auVar77 = vunpcklps_avx(auVar58,auVar46);
    auVar55 = vunpcklps_avx(auVar62,auVar112);
    auVar33 = vunpcklpd_avx(auVar77,auVar55);
    auVar77 = vunpckhpd_avx(auVar77,auVar55);
    auVar55 = vunpckhps_avx(auVar58,auVar46);
    auVar112 = vunpckhps_avx(auVar62,auVar112);
    auVar76._16_16_ = auVar77._0_16_;
    auVar76._0_16_ = auVar33._0_16_;
    *pauVar2 = auVar76;
    auVar12 = vunpcklpd_avx(auVar55,auVar112);
    auVar112 = vunpckhpd_avx(auVar55,auVar112);
    auVar69._16_16_ = auVar112._0_16_;
    auVar69._0_16_ = auVar12._0_16_;
    pauVar2[1] = auVar69;
    auVar77 = vperm2f128_avx(auVar33,auVar77,0x31);
    pauVar2[2] = auVar77;
    auVar112 = vperm2f128_avx(auVar12,auVar112,0x31);
    pauVar2[3] = auVar112;
    auVar20._16_16_ = auVar32;
    auVar20._0_16_ = auVar66;
    auVar77 = vshufpd_avx(auVar58,auVar20,2);
    auVar55 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar62);
    auVar112 = vpermpd_avx2(auVar46,0xe9);
    auVar112 = vblendps_avx(auVar55,auVar112,7);
    auVar59._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar59._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar55 = vpermps_avx2(auVar59,auVar112);
    auVar77 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar77);
    auVar77 = vblendps_avx(auVar77,auVar55,0xa4);
    *pauVar3 = auVar77;
    auVar77 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar112);
    auVar112 = vshufpd_avx(auVar58,auVar58,1);
    auVar112 = vblendps_avx(auVar77,auVar112,0x92);
    pauVar3[1] = auVar112;
    auVar21._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar21._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar46 = vpermps_avx2(auVar21,auVar46);
    auVar58 = vpermpd_avx2(auVar58,0xff);
    auVar58 = vblendps_avx(auVar46,auVar58,3);
    auVar58 = vblendps_avx(auVar58,auVar62,0xe0);
    auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar58);
    pauVar3[2] = auVar58;
    auVar58 = *(undefined1 (*) [32])(param_2 + uVar8 * 0xc);
    auVar46 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar8 * 0xc);
    auVar62 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar8 * 0xc);
    auVar112 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar46);
    auVar77 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           auVar58);
    auVar112 = vblendps_avx(auVar77,auVar112,0x88);
    auVar77 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar46);
    auVar55 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar62);
    auVar77 = vblendps_avx(auVar55,auVar77,0x13);
    auVar19._16_16_ = auVar77._0_16_;
    auVar19._0_16_ = auVar112._0_16_;
    auVar112 = vperm2f128_avx(auVar112,auVar77,0x31);
    auVar58 = vblendps_avx(auVar46,auVar58,0x24);
    auVar58 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar58);
    auVar60._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar60._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar46 = vpermps_avx2(auVar60,auVar62);
    auVar58 = vblendps_avx(auVar58,auVar46,0xe0);
    fVar75 = param_8[3];
    fVar43 = param_8[8];
    fVar64 = param_8[9];
    fVar30 = param_8[10];
    fVar74 = *param_8;
    fVar65 = param_8[1];
    fVar52 = param_8[2];
  }
  else {
    auVar126 = auVar46._16_16_;
    auVar44 = auVar62._0_16_;
    auVar53 = auVar62._16_16_;
    auVar133 = auVar112._0_16_;
    auVar134 = auVar112._16_16_;
    if ((uVar5 & 1) != 0) {
      *(int *)*pauVar2 = auVar58._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(*pauVar2 + 0x10) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)pauVar2[1] = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(pauVar2[1] + 0x10) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)pauVar2[2] = auVar58._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(pauVar2[2] + 0x10) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)pauVar2[3] = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(pauVar2[3] + 0x10) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar2 + 4) = auVar46._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(*pauVar2 + 0x14) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(pauVar2[1] + 4) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(pauVar2[1] + 0x14) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar2[2] + 4) = auVar46._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)(pauVar2[2] + 0x14) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(pauVar2[3] + 4) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(pauVar2[3] + 0x14) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar2 + 8) = auVar62._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(*pauVar2 + 0x18) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)(pauVar2[1] + 8) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(pauVar2[1] + 0x18) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar2[2] + 8) = auVar62._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(pauVar2[2] + 0x18) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(pauVar2[3] + 8) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(pauVar2[3] + 0x18) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar2 + 0xc) = auVar112._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar133,1);
      *(undefined4 *)(*pauVar2 + 0x1c) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar133,2);
      *(undefined4 *)(pauVar2[1] + 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar133,3);
      *(undefined4 *)(pauVar2[1] + 0x1c) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar2[2] + 0xc) = auVar112._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar134,1);
      *(undefined4 *)(pauVar2[2] + 0x1c) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar134,2);
      *(undefined4 *)(pauVar2[3] + 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar134,3);
      *(undefined4 *)(pauVar2[3] + 0x1c) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)*pauVar3 = auVar58._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(*pauVar3 + 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)(*pauVar3 + 0x18) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(pauVar3[1] + 4) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x10) = auVar58._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(pauVar3[1] + 0x1c) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)(pauVar3[2] + 8) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(pauVar3[2] + 0x14) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar3 + 4) = auVar46._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(*pauVar3 + 0x10) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(*pauVar3 + 0x1c) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(pauVar3[1] + 8) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x14) = auVar46._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)pauVar3[2] = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(pauVar3[2] + 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(pauVar3[2] + 0x18) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar3 + 8) = auVar62._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(*pauVar3 + 0x14) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)pauVar3[1] = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(pauVar3[1] + 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x18) = auVar62._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(pauVar3[2] + 4) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(pauVar3[2] + 0x10) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(pauVar3[2] + 0x1c) = uVar1;
    }
    auVar19 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
  }
  pauVar3 = (undefined1 (*) [32])(param_2 + uVar8 * 0xc);
  fVar95 = auVar58._0_4_ * fVar30;
  fVar96 = auVar58._4_4_ * fVar30;
  fVar97 = auVar58._8_4_ * fVar30;
  fVar98 = auVar58._12_4_ * fVar30;
  fVar99 = auVar58._16_4_ * fVar30;
  fVar100 = auVar58._20_4_ * fVar30;
  fVar102 = auVar58._24_4_ * fVar30;
  fVar30 = auVar58._28_4_ * fVar30;
  fVar87 = auVar112._0_4_ * fVar64;
  fVar88 = auVar112._4_4_ * fVar64;
  fVar89 = auVar112._8_4_ * fVar64;
  fVar90 = auVar112._12_4_ * fVar64;
  fVar91 = auVar112._16_4_ * fVar64;
  fVar93 = auVar112._20_4_ * fVar64;
  fVar94 = auVar112._24_4_ * fVar64;
  fVar64 = auVar112._28_4_ * fVar64;
  fVar40 = auVar19._0_4_ * fVar43;
  fVar41 = auVar19._4_4_ * fVar43;
  fVar42 = auVar19._8_4_ * fVar43;
  fVar80 = auVar19._12_4_ * fVar43;
  fVar84 = auVar19._16_4_ * fVar43;
  fVar85 = auVar19._20_4_ * fVar43;
  fVar86 = auVar19._24_4_ * fVar43;
  fVar43 = auVar19._28_4_ * fVar43;
  fVar10 = fVar87 * fVar74 - fVar40 * fVar65;
  fVar9 = fVar88 * fVar74 - fVar41 * fVar65;
  fVar29 = fVar89 * fVar74 - fVar42 * fVar65;
  fVar31 = fVar90 * fVar74 - fVar80 * fVar65;
  fVar36 = fVar91 * fVar74 - fVar84 * fVar65;
  fVar37 = fVar93 * fVar74 - fVar85 * fVar65;
  fVar38 = fVar94 * fVar74 - fVar86 * fVar65;
  fVar39 = fVar64 * fVar74 - fVar43 * fVar65;
  fVar103 = fVar95 * fVar65 - fVar87 * fVar52;
  fVar104 = fVar96 * fVar65 - fVar88 * fVar52;
  fVar105 = fVar97 * fVar65 - fVar89 * fVar52;
  fVar106 = fVar98 * fVar65 - fVar90 * fVar52;
  fVar107 = fVar99 * fVar65 - fVar91 * fVar52;
  fVar108 = fVar100 * fVar65 - fVar93 * fVar52;
  fVar109 = fVar102 * fVar65 - fVar94 * fVar52;
  fVar113 = fVar30 * fVar65 - fVar64 * fVar52;
  fVar114 = fVar40 * fVar52 - fVar95 * fVar74;
  fVar115 = fVar41 * fVar52 - fVar96 * fVar74;
  fVar116 = fVar42 * fVar52 - fVar97 * fVar74;
  fVar117 = fVar80 * fVar52 - fVar98 * fVar74;
  fVar118 = fVar84 * fVar52 - fVar99 * fVar74;
  fVar119 = fVar85 * fVar52 - fVar100 * fVar74;
  fVar120 = fVar86 * fVar52 - fVar102 * fVar74;
  fVar122 = fVar43 * fVar52 - fVar30 * fVar74;
  fVar103 = fVar103 + fVar103;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar108 = fVar108 + fVar108;
  fVar109 = fVar109 + fVar109;
  fVar113 = fVar113 + fVar113;
  fVar114 = fVar114 + fVar114;
  fVar115 = fVar115 + fVar115;
  fVar116 = fVar116 + fVar116;
  fVar117 = fVar117 + fVar117;
  fVar118 = fVar118 + fVar118;
  fVar119 = fVar119 + fVar119;
  fVar120 = fVar120 + fVar120;
  fVar122 = fVar122 + fVar122;
  fVar10 = fVar10 + fVar10;
  fVar9 = fVar9 + fVar9;
  fVar29 = fVar29 + fVar29;
  fVar31 = fVar31 + fVar31;
  fVar36 = fVar36 + fVar36;
  fVar37 = fVar37 + fVar37;
  fVar38 = fVar38 + fVar38;
  fVar39 = fVar39 + fVar39;
  auVar11._0_4_ = fVar10 * fVar75 + fVar95 + (fVar74 * fVar114 - fVar103 * fVar65);
  auVar11._4_4_ = fVar9 * fVar75 + fVar96 + (fVar74 * fVar115 - fVar104 * fVar65);
  auVar11._8_4_ = fVar29 * fVar75 + fVar97 + (fVar74 * fVar116 - fVar105 * fVar65);
  auVar11._12_4_ = fVar31 * fVar75 + fVar98 + (fVar74 * fVar117 - fVar106 * fVar65);
  auVar22._16_4_ = fVar36 * fVar75 + fVar99 + (fVar74 * fVar118 - fVar107 * fVar65);
  auVar22._0_16_ = auVar11;
  auVar22._20_4_ = fVar37 * fVar75 + fVar100 + (fVar74 * fVar119 - fVar108 * fVar65);
  auVar22._24_4_ = fVar38 * fVar75 + fVar102 + (fVar74 * fVar120 - fVar109 * fVar65);
  auVar22._28_4_ = fVar39 * fVar75 + fVar30 + (fVar74 * fVar122 - fVar113 * fVar65);
  auVar53._0_4_ = (fVar65 * fVar10 - fVar114 * fVar52) + fVar75 * fVar103 + fVar40;
  auVar53._4_4_ = (fVar65 * fVar9 - fVar115 * fVar52) + fVar75 * fVar104 + fVar41;
  auVar53._8_4_ = (fVar65 * fVar29 - fVar116 * fVar52) + fVar75 * fVar105 + fVar42;
  auVar53._12_4_ = (fVar65 * fVar31 - fVar117 * fVar52) + fVar75 * fVar106 + fVar80;
  auVar61._16_4_ = (fVar65 * fVar36 - fVar118 * fVar52) + fVar75 * fVar107 + fVar84;
  auVar61._0_16_ = auVar53;
  auVar61._20_4_ = (fVar65 * fVar37 - fVar119 * fVar52) + fVar75 * fVar108 + fVar85;
  auVar61._24_4_ = (fVar65 * fVar38 - fVar120 * fVar52) + fVar75 * fVar109 + fVar86;
  auVar61._28_4_ = (fVar65 * fVar39 - fVar122 * fVar52) + fVar75 * fVar113 + fVar43;
  auVar44._0_4_ = (fVar52 * fVar103 - fVar10 * fVar74) + fVar75 * fVar114 + fVar87;
  auVar44._4_4_ = (fVar52 * fVar104 - fVar9 * fVar74) + fVar75 * fVar115 + fVar88;
  auVar44._8_4_ = (fVar52 * fVar105 - fVar29 * fVar74) + fVar75 * fVar116 + fVar89;
  auVar44._12_4_ = (fVar52 * fVar106 - fVar31 * fVar74) + fVar75 * fVar117 + fVar90;
  auVar47._16_4_ = (fVar52 * fVar107 - fVar36 * fVar74) + fVar75 * fVar118 + fVar91;
  auVar47._0_16_ = auVar44;
  auVar47._20_4_ = (fVar52 * fVar108 - fVar37 * fVar74) + fVar75 * fVar119 + fVar93;
  auVar47._24_4_ = (fVar52 * fVar109 - fVar38 * fVar74) + fVar75 * fVar120 + fVar94;
  auVar47._28_4_ = (fVar52 * fVar113 - fVar39 * fVar74) + fVar75 * fVar122 + fVar64;
  auVar32 = auVar61._16_16_;
  if (cVar4 == -1) {
    auVar70._16_16_ = auVar44;
    auVar70._0_16_ = auVar53;
    auVar46 = vshufpd_avx(auVar61,auVar70,2);
    auVar62 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar22);
    auVar58 = vpermpd_avx2(auVar47,0xe9);
    auVar58 = vblendps_avx(auVar62,auVar58,7);
    auVar81._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar81._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar62 = vpermps_avx2(auVar81,auVar58);
    auVar46 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar46);
    auVar46 = vblendps_avx(auVar46,auVar62,0xa4);
    *pauVar3 = auVar46;
    lVar7 = uVar8 * 0xc;
    auVar46 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar58);
    auVar58 = vshufpd_avx(auVar61,auVar61,1);
    auVar58 = vblendps_avx(auVar46,auVar58,0x92);
    *(undefined1 (*) [32])(param_2 + 0x20 + lVar7) = auVar58;
    auVar71._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar71._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar46 = vpermps_avx2(auVar71,auVar47);
    auVar58 = vpermpd_avx2(auVar61,0xff);
    auVar58 = vblendps_avx(auVar46,auVar58,3);
    auVar58 = vblendps_avx(auVar58,auVar22,0xe0);
    auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar58);
    *(undefined1 (*) [32])(param_2 + 0x40 + lVar7) = auVar58;
    auVar58 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar7);
    auVar46 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar7);
    auVar62 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar58);
    auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_4 + lVar7));
    auVar62 = vblendps_avx(auVar112,auVar62,0x88);
    auVar112 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar58);
    auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar46);
    auVar112 = vblendps_avx(auVar77,auVar112,0x13);
    auVar23._16_16_ = auVar112._0_16_;
    auVar23._0_16_ = auVar62._0_16_;
    auVar62 = vperm2f128_avx(auVar62,auVar112,0x31);
    auVar58 = vblendps_avx(auVar58,*(undefined1 (*) [32])(param_4 + lVar7),0x24);
    auVar58 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar58);
    auVar72._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar72._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar46 = vpermps_avx2(auVar72,auVar46);
    auVar58 = vblendps_avx(auVar58,auVar46,0xe0);
  }
  else {
    auVar126 = auVar47._16_16_;
    auVar66 = auVar22._16_16_;
    if ((uVar5 & 1) != 0) {
      *(float *)*pauVar3 = auVar53._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(param_2 + 0xc + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(param_2 + 0x18 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(param_2 + 0x24 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_2 + 0x30 + uVar8 * 0xc) = auVar61._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(param_2 + 0x3c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(param_2 + 0x48 + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(param_2 + 0x54 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(param_2 + 4 + uVar8 * 0xc) = auVar44._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(param_2 + 0x10 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)(param_2 + 0x1c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(param_2 + 0x28 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_2 + 0x34 + uVar8 * 0xc) = auVar47._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)(param_2 + 0x40 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(param_2 + 0x4c + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(param_2 + 0x58 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(param_2 + 8 + uVar8 * 0xc) = auVar11._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(param_2 + 0x14 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)(param_2 + 0x20 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(param_2 + 0x2c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_2 + 0x38 + uVar8 * 0xc) = auVar22._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(param_2 + 0x44 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)(param_2 + 0x50 + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(param_2 + 0x5c + uVar8 * 0xc) = uVar1;
    }
    auVar23 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar62 = vgatherdps(ZEXT832(0),auVar82);
    auVar58 = vgatherdps(ZEXT832(0),auVar82);
  }
  pauVar3 = (undefined1 (*) [32])(param_4 + uVar8 * 0xc);
  fVar43 = param_8[8];
  fVar40 = auVar23._0_4_ * fVar43;
  fVar41 = auVar23._4_4_ * fVar43;
  fVar42 = auVar23._8_4_ * fVar43;
  fVar80 = auVar23._12_4_ * fVar43;
  fVar84 = auVar23._16_4_ * fVar43;
  fVar85 = auVar23._20_4_ * fVar43;
  fVar86 = auVar23._24_4_ * fVar43;
  fVar43 = auVar23._28_4_ * fVar43;
  fVar64 = param_8[9];
  fVar9 = auVar62._0_4_ * fVar64;
  fVar29 = auVar62._4_4_ * fVar64;
  fVar31 = auVar62._8_4_ * fVar64;
  fVar36 = auVar62._12_4_ * fVar64;
  fVar37 = auVar62._16_4_ * fVar64;
  fVar38 = auVar62._20_4_ * fVar64;
  fVar39 = auVar62._24_4_ * fVar64;
  fVar64 = auVar62._28_4_ * fVar64;
  fVar30 = param_8[10];
  fVar87 = auVar58._0_4_ * fVar30;
  fVar88 = auVar58._4_4_ * fVar30;
  fVar89 = auVar58._8_4_ * fVar30;
  fVar90 = auVar58._12_4_ * fVar30;
  fVar91 = auVar58._16_4_ * fVar30;
  fVar93 = auVar58._20_4_ * fVar30;
  fVar94 = auVar58._24_4_ * fVar30;
  fVar30 = auVar58._28_4_ * fVar30;
  fVar75 = param_8[3];
  fVar65 = param_8[1];
  fVar52 = param_8[2];
  fVar74 = *param_8;
  fVar95 = fVar9 * fVar74 - fVar40 * fVar65;
  fVar96 = fVar29 * fVar74 - fVar41 * fVar65;
  fVar97 = fVar31 * fVar74 - fVar42 * fVar65;
  fVar98 = fVar36 * fVar74 - fVar80 * fVar65;
  fVar99 = fVar37 * fVar74 - fVar84 * fVar65;
  fVar100 = fVar38 * fVar74 - fVar85 * fVar65;
  fVar102 = fVar39 * fVar74 - fVar86 * fVar65;
  fVar103 = fVar64 * fVar74 - fVar43 * fVar65;
  fVar104 = fVar87 * fVar65 - fVar9 * fVar52;
  fVar105 = fVar88 * fVar65 - fVar29 * fVar52;
  fVar106 = fVar89 * fVar65 - fVar31 * fVar52;
  fVar107 = fVar90 * fVar65 - fVar36 * fVar52;
  fVar108 = fVar91 * fVar65 - fVar37 * fVar52;
  fVar109 = fVar93 * fVar65 - fVar38 * fVar52;
  fVar113 = fVar94 * fVar65 - fVar39 * fVar52;
  fVar114 = fVar30 * fVar65 - fVar64 * fVar52;
  fVar115 = fVar40 * fVar52 - fVar87 * fVar74;
  fVar116 = fVar41 * fVar52 - fVar88 * fVar74;
  fVar117 = fVar42 * fVar52 - fVar89 * fVar74;
  fVar118 = fVar80 * fVar52 - fVar90 * fVar74;
  fVar119 = fVar84 * fVar52 - fVar91 * fVar74;
  fVar120 = fVar85 * fVar52 - fVar93 * fVar74;
  fVar122 = fVar86 * fVar52 - fVar94 * fVar74;
  fVar123 = fVar43 * fVar52 - fVar30 * fVar74;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar108 = fVar108 + fVar108;
  fVar109 = fVar109 + fVar109;
  fVar113 = fVar113 + fVar113;
  fVar114 = fVar114 + fVar114;
  fVar115 = fVar115 + fVar115;
  fVar116 = fVar116 + fVar116;
  fVar117 = fVar117 + fVar117;
  fVar118 = fVar118 + fVar118;
  fVar119 = fVar119 + fVar119;
  fVar120 = fVar120 + fVar120;
  fVar122 = fVar122 + fVar122;
  fVar123 = fVar123 + fVar123;
  fVar95 = fVar95 + fVar95;
  fVar96 = fVar96 + fVar96;
  fVar97 = fVar97 + fVar97;
  fVar98 = fVar98 + fVar98;
  fVar99 = fVar99 + fVar99;
  fVar100 = fVar100 + fVar100;
  fVar102 = fVar102 + fVar102;
  fVar103 = fVar103 + fVar103;
  fVar10 = param_8[4];
  auVar48._0_4_ = fVar10 + (fVar65 * fVar95 - fVar115 * fVar52) + fVar75 * fVar104 + fVar40;
  auVar48._4_4_ = fVar10 + (fVar65 * fVar96 - fVar116 * fVar52) + fVar75 * fVar105 + fVar41;
  auVar48._8_4_ = fVar10 + (fVar65 * fVar97 - fVar117 * fVar52) + fVar75 * fVar106 + fVar42;
  auVar48._12_4_ = fVar10 + (fVar65 * fVar98 - fVar118 * fVar52) + fVar75 * fVar107 + fVar80;
  auVar48._16_4_ = fVar10 + (fVar65 * fVar99 - fVar119 * fVar52) + fVar75 * fVar108 + fVar84;
  auVar48._20_4_ = fVar10 + (fVar65 * fVar100 - fVar120 * fVar52) + fVar75 * fVar109 + fVar85;
  auVar48._24_4_ = fVar10 + (fVar65 * fVar102 - fVar122 * fVar52) + fVar75 * fVar113 + fVar86;
  auVar48._28_4_ = fVar10 + (fVar65 * fVar103 - fVar123 * fVar52) + fVar75 * fVar114 + fVar43;
  fVar43 = param_8[5];
  auVar24._0_4_ = fVar43 + (fVar52 * fVar104 - fVar95 * fVar74) + fVar75 * fVar115 + fVar9;
  auVar24._4_4_ = fVar43 + (fVar52 * fVar105 - fVar96 * fVar74) + fVar75 * fVar116 + fVar29;
  auVar24._8_4_ = fVar43 + (fVar52 * fVar106 - fVar97 * fVar74) + fVar75 * fVar117 + fVar31;
  auVar24._12_4_ = fVar43 + (fVar52 * fVar107 - fVar98 * fVar74) + fVar75 * fVar118 + fVar36;
  auVar24._16_4_ = fVar43 + (fVar52 * fVar108 - fVar99 * fVar74) + fVar75 * fVar119 + fVar37;
  auVar24._20_4_ = fVar43 + (fVar52 * fVar109 - fVar100 * fVar74) + fVar75 * fVar120 + fVar38;
  auVar24._24_4_ = fVar43 + (fVar52 * fVar113 - fVar102 * fVar74) + fVar75 * fVar122 + fVar39;
  auVar24._28_4_ = fVar43 + (fVar52 * fVar114 - fVar103 * fVar74) + fVar75 * fVar123 + fVar64;
  fVar43 = param_8[6];
  auVar63._0_4_ = fVar43 + fVar95 * fVar75 + fVar87 + (fVar74 * fVar115 - fVar104 * fVar65);
  auVar63._4_4_ = fVar43 + fVar96 * fVar75 + fVar88 + (fVar74 * fVar116 - fVar105 * fVar65);
  auVar63._8_4_ = fVar43 + fVar97 * fVar75 + fVar89 + (fVar74 * fVar117 - fVar106 * fVar65);
  auVar63._12_4_ = fVar43 + fVar98 * fVar75 + fVar90 + (fVar74 * fVar118 - fVar107 * fVar65);
  auVar63._16_4_ = fVar43 + fVar99 * fVar75 + fVar91 + (fVar74 * fVar119 - fVar108 * fVar65);
  auVar63._20_4_ = fVar43 + fVar100 * fVar75 + fVar93 + (fVar74 * fVar120 - fVar109 * fVar65);
  auVar63._24_4_ = fVar43 + fVar102 * fVar75 + fVar94 + (fVar74 * fVar122 - fVar113 * fVar65);
  auVar63._28_4_ = fVar43 + fVar103 * fVar75 + fVar30 + (fVar74 * fVar123 - fVar114 * fVar65);
  uVar1 = *param_9;
  auVar73._4_4_ = uVar1;
  auVar73._0_4_ = uVar1;
  auVar73._8_4_ = uVar1;
  auVar73._12_4_ = uVar1;
  auVar73._16_4_ = uVar1;
  auVar73._20_4_ = uVar1;
  auVar73._24_4_ = uVar1;
  auVar73._28_4_ = uVar1;
  auVar58 = vsubps_avx(auVar48,auVar73);
  uVar1 = param_9[1];
  auVar49._4_4_ = uVar1;
  auVar49._0_4_ = uVar1;
  auVar49._8_4_ = uVar1;
  auVar49._12_4_ = uVar1;
  auVar49._16_4_ = uVar1;
  auVar49._20_4_ = uVar1;
  auVar49._24_4_ = uVar1;
  auVar49._28_4_ = uVar1;
  auVar46 = vsubps_avx(auVar24,auVar49);
  uVar1 = param_9[2];
  auVar25._4_4_ = uVar1;
  auVar25._0_4_ = uVar1;
  auVar25._8_4_ = uVar1;
  auVar25._12_4_ = uVar1;
  auVar25._16_4_ = uVar1;
  auVar25._20_4_ = uVar1;
  auVar25._24_4_ = uVar1;
  auVar25._28_4_ = uVar1;
  auVar62 = vsubps_avx(auVar63,auVar25);
  auVar66 = auVar58._0_16_;
  auVar11 = auVar58._16_16_;
  auVar32 = auVar46._0_16_;
  if (cVar4 == -1) {
    auVar27._16_16_ = auVar32;
    auVar27._0_16_ = auVar66;
    auVar112 = vshufpd_avx(auVar58,auVar27,2);
    auVar77 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar62);
    auVar82 = vpermpd_avx2(auVar46,0xe9);
    auVar82 = vblendps_avx(auVar77,auVar82,7);
    auVar78._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar78._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar77 = vpermps_avx2(auVar78,auVar82);
    auVar112 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                            auVar112);
    auVar112 = vblendps_avx(auVar112,auVar77,0xa4);
    *pauVar3 = auVar112;
    lVar7 = uVar8 * 0xc;
    auVar112 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                            auVar82);
    auVar82 = vshufpd_avx(auVar58,auVar58,1);
    auVar82 = vblendps_avx(auVar112,auVar82,0x92);
    *(undefined1 (*) [32])(param_4 + 0x20 + lVar7) = auVar82;
    auVar28._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar28._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar112 = vpermps_avx2(auVar28,auVar46);
    auVar82 = vpermpd_avx2(auVar58,0xff);
    auVar82 = vblendps_avx(auVar112,auVar82,3);
    auVar82 = vblendps_avx(auVar82,auVar62,0xe0);
    auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar82);
    *(undefined1 (*) [32])(param_4 + 0x40 + lVar7) = auVar82;
    auVar82 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar7);
    auVar112 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar7);
    auVar77 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar82);
    auVar55 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *(undefined1 (*) [32])(param_7 + lVar7));
    auVar77 = vblendps_avx(auVar55,auVar77,0x88);
    auVar55 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar82);
    auVar33 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar112);
    auVar55 = vblendps_avx(auVar33,auVar55,0x13);
    auVar26._16_16_ = auVar55._0_16_;
    auVar26._0_16_ = auVar77._0_16_;
    auVar77 = vperm2f128_avx(auVar77,auVar55,0x31);
    auVar82 = vblendps_avx(auVar82,*(undefined1 (*) [32])(param_7 + lVar7),0x24);
    auVar82 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar82);
    auVar83._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar83._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar112 = vpermps_avx2(auVar83,auVar112);
    auVar82 = vblendps_avx(auVar82,auVar112,0xe0);
  }
  else {
    auVar44 = auVar46._16_16_;
    auVar53 = auVar62._0_16_;
    auVar126 = auVar62._16_16_;
    if ((uVar5 & 1) != 0) {
      *(int *)*pauVar3 = auVar58._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(param_4 + 0xc + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)(param_4 + 0x18 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(param_4 + 0x24 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(param_4 + 0x30 + uVar8 * 0xc) = auVar58._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(param_4 + 0x3c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)(param_4 + 0x48 + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(param_4 + 0x54 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(param_4 + 4 + uVar8 * 0xc) = auVar46._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(param_4 + 0x10 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(param_4 + 0x1c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(param_4 + 0x28 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(param_4 + 0x34 + uVar8 * 0xc) = auVar46._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(param_4 + 0x40 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)(param_4 + 0x4c + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(param_4 + 0x58 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(param_4 + 8 + uVar8 * 0xc) = auVar62._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(param_4 + 0x14 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(param_4 + 0x20 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(param_4 + 0x2c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(param_4 + 0x38 + uVar8 * 0xc) = auVar62._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)(param_4 + 0x44 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(param_4 + 0x50 + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(param_4 + 0x5c + uVar8 * 0xc) = uVar1;
    }
    auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar77 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar82 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
  }
  auVar58 = vsubps_avx(auVar26,auVar58);
  auVar92._4_4_ = param_10;
  auVar92._0_4_ = param_10;
  auVar92._8_4_ = param_10;
  auVar92._12_4_ = param_10;
  auVar92._16_4_ = param_10;
  auVar92._20_4_ = param_10;
  auVar92._24_4_ = param_10;
  auVar92._28_4_ = param_10;
  auVar58 = vdivps_avx(auVar58,auVar92);
  auVar46 = vsubps_avx(auVar77,auVar46);
  auVar46 = vdivps_avx(auVar46,auVar92);
  auVar82 = vsubps_avx(auVar82,auVar62);
  auVar82 = vdivps_avx(auVar82,auVar92);
  pauVar3 = (undefined1 (*) [32])(param_5 + uVar8 * 0xc);
  auVar66 = auVar58._0_16_;
  auVar11 = auVar58._16_16_;
  auVar32 = auVar46._0_16_;
  if (cVar4 == -1) {
    auVar50._16_16_ = auVar32;
    auVar50._0_16_ = auVar66;
    auVar112 = vshufpd_avx(auVar58,auVar50,2);
    auVar77 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar82);
    auVar62 = vpermpd_avx2(auVar46,0xe9);
    auVar62 = vblendps_avx(auVar77,auVar62,7);
    auVar79._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar79._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar77 = vpermps_avx2(auVar79,auVar62);
    auVar112 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                            auVar112);
    auVar112 = vblendps_avx(auVar112,auVar77,0xa4);
    *pauVar3 = auVar112;
    auVar112 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                            auVar62);
    auVar62 = vshufpd_avx(auVar58,auVar58,1);
    auVar62 = vblendps_avx(auVar112,auVar62,0x92);
    pauVar3[1] = auVar62;
    auVar51._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar51._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar46 = vpermps_avx2(auVar51,auVar46);
    auVar58 = vpermpd_avx2(auVar58,0xff);
    auVar58 = vblendps_avx(auVar46,auVar58,3);
    auVar82 = vblendps_avx(auVar58,auVar82,0xe0);
    auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar82);
    pauVar3[2] = auVar82;
  }
  else {
    auVar126 = auVar46._16_16_;
    auVar44 = auVar82._0_16_;
    auVar53 = auVar82._16_16_;
    if ((uVar5 & 1) != 0) {
      *(int *)*pauVar3 = auVar58._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(*pauVar3 + 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)(*pauVar3 + 0x18) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(pauVar3[1] + 4) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x10) = auVar58._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(pauVar3[1] + 0x1c) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)(pauVar3[2] + 8) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(pauVar3[2] + 0x14) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar3 + 4) = auVar46._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(*pauVar3 + 0x10) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(*pauVar3 + 0x1c) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(pauVar3[1] + 8) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x14) = auVar46._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)pauVar3[2] = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(pauVar3[2] + 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(pauVar3[2] + 0x18) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar3 + 8) = auVar82._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(*pauVar3 + 0x14) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)pauVar3[1] = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(pauVar3[1] + 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x18) = auVar82._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(pauVar3[2] + 4) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(pauVar3[2] + 0x10) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(pauVar3[2] + 0x1c) = uVar1;
    }
  }
  return;
}

// ApplyAnimationPreSimulationTransform___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_avx2 @ 140cd8c20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAnimationPreSimulationTransform___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,float *param_4,
               undefined4 *param_5,undefined4 param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar39 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  float fVar60;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  float fVar70;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
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
  
  auVar53 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar61 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
  uVar9 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar9 = param_7;
  }
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    lVar11 = 0x40;
    uVar12 = 0;
    do {
      auVar54 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar14 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar47 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar11);
      auVar29 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar11);
      auVar30 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar29);
      auVar44 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar47);
      auVar30 = vblendps_avx(auVar44,auVar30,0x88);
      auVar44 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar29);
      auVar57 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_1 + lVar11));
      auVar44 = vblendps_avx(auVar57,auVar44,0x13);
      auVar57 = vperm2f128_avx(auVar30,auVar44,0x31);
      auVar47 = vblendps_avx(auVar29,auVar47,0x24);
      auVar47 = vpermps_avx2(auVar61,auVar47);
      auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_1 + lVar11));
      auVar47 = vblendps_avx(auVar47,auVar29,0xe0);
      fVar95 = param_4[8];
      fVar88 = auVar30._0_4_ * fVar95;
      fVar89 = auVar30._4_4_ * fVar95;
      fVar90 = auVar30._8_4_ * fVar95;
      fVar91 = auVar30._12_4_ * fVar95;
      fVar92 = auVar44._0_4_ * fVar95;
      fVar93 = auVar44._4_4_ * fVar95;
      fVar94 = auVar44._8_4_ * fVar95;
      fVar95 = auVar44._12_4_ * fVar95;
      fVar26 = param_4[9];
      fVar13 = auVar57._0_4_ * fVar26;
      fVar20 = auVar57._4_4_ * fVar26;
      fVar21 = auVar57._8_4_ * fVar26;
      fVar22 = auVar57._12_4_ * fVar26;
      fVar23 = auVar57._16_4_ * fVar26;
      fVar24 = auVar57._20_4_ * fVar26;
      fVar25 = auVar57._24_4_ * fVar26;
      fVar26 = auVar57._28_4_ * fVar26;
      fVar42 = param_4[10];
      fVar27 = auVar47._0_4_ * fVar42;
      fVar35 = auVar47._4_4_ * fVar42;
      fVar36 = auVar47._8_4_ * fVar42;
      fVar37 = auVar47._12_4_ * fVar42;
      fVar38 = auVar47._16_4_ * fVar42;
      fVar40 = auVar47._20_4_ * fVar42;
      fVar41 = auVar47._24_4_ * fVar42;
      fVar42 = auVar47._28_4_ * fVar42;
      fVar2 = param_4[3];
      fVar3 = param_4[1];
      fVar4 = param_4[2];
      fVar5 = *param_4;
      fVar60 = fVar13 * fVar5 - fVar88 * fVar3;
      fVar63 = fVar20 * fVar5 - fVar89 * fVar3;
      fVar64 = fVar21 * fVar5 - fVar90 * fVar3;
      fVar65 = fVar22 * fVar5 - fVar91 * fVar3;
      fVar66 = fVar23 * fVar5 - fVar92 * fVar3;
      fVar67 = fVar24 * fVar5 - fVar93 * fVar3;
      fVar68 = fVar25 * fVar5 - fVar94 * fVar3;
      fVar69 = fVar26 * fVar5 - fVar95 * fVar3;
      fVar70 = fVar27 * fVar3 - fVar4 * fVar13;
      fVar73 = fVar35 * fVar3 - fVar4 * fVar20;
      fVar74 = fVar36 * fVar3 - fVar4 * fVar21;
      fVar75 = fVar37 * fVar3 - fVar4 * fVar22;
      fVar76 = fVar38 * fVar3 - fVar4 * fVar23;
      fVar77 = fVar40 * fVar3 - fVar4 * fVar24;
      fVar78 = fVar41 * fVar3 - fVar4 * fVar25;
      fVar79 = fVar42 * fVar3 - fVar4 * fVar26;
      fVar80 = fVar88 * fVar4 - fVar27 * fVar5;
      fVar81 = fVar89 * fVar4 - fVar35 * fVar5;
      fVar82 = fVar90 * fVar4 - fVar36 * fVar5;
      fVar83 = fVar91 * fVar4 - fVar37 * fVar5;
      fVar84 = fVar92 * fVar4 - fVar38 * fVar5;
      fVar85 = fVar93 * fVar4 - fVar40 * fVar5;
      fVar86 = fVar94 * fVar4 - fVar41 * fVar5;
      fVar87 = fVar95 * fVar4 - fVar42 * fVar5;
      fVar70 = fVar70 + fVar70;
      fVar73 = fVar73 + fVar73;
      fVar74 = fVar74 + fVar74;
      fVar75 = fVar75 + fVar75;
      fVar76 = fVar76 + fVar76;
      fVar77 = fVar77 + fVar77;
      fVar78 = fVar78 + fVar78;
      fVar79 = fVar79 + fVar79;
      fVar80 = fVar80 + fVar80;
      fVar81 = fVar81 + fVar81;
      fVar82 = fVar82 + fVar82;
      fVar83 = fVar83 + fVar83;
      fVar84 = fVar84 + fVar84;
      fVar85 = fVar85 + fVar85;
      fVar86 = fVar86 + fVar86;
      fVar87 = fVar87 + fVar87;
      fVar60 = fVar60 + fVar60;
      fVar63 = fVar63 + fVar63;
      fVar64 = fVar64 + fVar64;
      fVar65 = fVar65 + fVar65;
      fVar66 = fVar66 + fVar66;
      fVar67 = fVar67 + fVar67;
      fVar68 = fVar68 + fVar68;
      fVar69 = fVar69 + fVar69;
      fVar6 = param_4[4];
      auVar44._0_4_ = fVar6 + fVar2 * fVar70 + fVar88 + (fVar3 * fVar60 - fVar4 * fVar80);
      auVar44._4_4_ = fVar6 + fVar2 * fVar73 + fVar89 + (fVar3 * fVar63 - fVar4 * fVar81);
      auVar44._8_4_ = fVar6 + fVar2 * fVar74 + fVar90 + (fVar3 * fVar64 - fVar4 * fVar82);
      auVar44._12_4_ = fVar6 + fVar2 * fVar75 + fVar91 + (fVar3 * fVar65 - fVar4 * fVar83);
      auVar44._16_4_ = fVar6 + fVar2 * fVar76 + fVar92 + (fVar3 * fVar66 - fVar4 * fVar84);
      auVar44._20_4_ = fVar6 + fVar2 * fVar77 + fVar93 + (fVar3 * fVar67 - fVar4 * fVar85);
      auVar44._24_4_ = fVar6 + fVar2 * fVar78 + fVar94 + (fVar3 * fVar68 - fVar4 * fVar86);
      auVar44._28_4_ = fVar6 + fVar2 * fVar79 + fVar95 + (fVar3 * fVar69 - fVar4 * fVar87);
      fVar95 = param_4[5];
      auVar51._0_4_ = fVar95 + fVar2 * fVar80 + fVar13 + (fVar4 * fVar70 - fVar5 * fVar60);
      auVar51._4_4_ = fVar95 + fVar2 * fVar81 + fVar20 + (fVar4 * fVar73 - fVar5 * fVar63);
      auVar51._8_4_ = fVar95 + fVar2 * fVar82 + fVar21 + (fVar4 * fVar74 - fVar5 * fVar64);
      auVar51._12_4_ = fVar95 + fVar2 * fVar83 + fVar22 + (fVar4 * fVar75 - fVar5 * fVar65);
      auVar51._16_4_ = fVar95 + fVar2 * fVar84 + fVar23 + (fVar4 * fVar76 - fVar5 * fVar66);
      auVar51._20_4_ = fVar95 + fVar2 * fVar85 + fVar24 + (fVar4 * fVar77 - fVar5 * fVar67);
      auVar51._24_4_ = fVar95 + fVar2 * fVar86 + fVar25 + (fVar4 * fVar78 - fVar5 * fVar68);
      auVar51._28_4_ = fVar95 + fVar2 * fVar87 + fVar26 + (fVar4 * fVar79 - fVar5 * fVar69);
      fVar95 = param_4[6];
      auVar29._0_4_ = fVar95 + fVar60 * fVar2 + fVar27 + (fVar5 * fVar80 - fVar3 * fVar70);
      auVar29._4_4_ = fVar95 + fVar63 * fVar2 + fVar35 + (fVar5 * fVar81 - fVar3 * fVar73);
      auVar29._8_4_ = fVar95 + fVar64 * fVar2 + fVar36 + (fVar5 * fVar82 - fVar3 * fVar74);
      auVar29._12_4_ = fVar95 + fVar65 * fVar2 + fVar37 + (fVar5 * fVar83 - fVar3 * fVar75);
      auVar29._16_4_ = fVar95 + fVar66 * fVar2 + fVar38 + (fVar5 * fVar84 - fVar3 * fVar76);
      auVar29._20_4_ = fVar95 + fVar67 * fVar2 + fVar40 + (fVar5 * fVar85 - fVar3 * fVar77);
      auVar29._24_4_ = fVar95 + fVar68 * fVar2 + fVar41 + (fVar5 * fVar86 - fVar3 * fVar78);
      auVar29._28_4_ = fVar95 + fVar69 * fVar2 + fVar42 + (fVar5 * fVar87 - fVar3 * fVar79);
      uVar7 = *param_5;
      auVar47._4_4_ = uVar7;
      auVar47._0_4_ = uVar7;
      auVar47._8_4_ = uVar7;
      auVar47._12_4_ = uVar7;
      auVar47._16_4_ = uVar7;
      auVar47._20_4_ = uVar7;
      auVar47._24_4_ = uVar7;
      auVar47._28_4_ = uVar7;
      auVar57 = vsubps_avx(auVar44,auVar47);
      uVar7 = param_5[1];
      auVar45._4_4_ = uVar7;
      auVar45._0_4_ = uVar7;
      auVar45._8_4_ = uVar7;
      auVar45._12_4_ = uVar7;
      auVar45._16_4_ = uVar7;
      auVar45._20_4_ = uVar7;
      auVar45._24_4_ = uVar7;
      auVar45._28_4_ = uVar7;
      auVar45 = vsubps_avx(auVar51,auVar45);
      uVar7 = param_5[2];
      auVar46._4_4_ = uVar7;
      auVar46._0_4_ = uVar7;
      auVar46._8_4_ = uVar7;
      auVar46._12_4_ = uVar7;
      auVar46._16_4_ = uVar7;
      auVar46._20_4_ = uVar7;
      auVar46._24_4_ = uVar7;
      auVar46._28_4_ = uVar7;
      auVar46 = vsubps_avx(auVar29,auVar46);
      auVar30._16_16_ = auVar45._0_16_;
      auVar30._0_16_ = auVar57._0_16_;
      auVar29 = vshufpd_avx(auVar57,auVar30,2);
      auVar30 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar46);
      auVar47 = vpermpd_avx2(auVar45,0xe9);
      auVar47 = vblendps_avx(auVar30,auVar47,7);
      auVar30 = vpermps_avx2(auVar53,auVar47);
      auVar29 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar29);
      auVar29 = vblendps_avx(auVar29,auVar30,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar11) = auVar29;
      auVar15 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar29 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar47);
      auVar47 = vshufpd_avx(auVar57,auVar57,1);
      auVar47 = vblendps_avx(auVar29,auVar47,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar11) = auVar47;
      auVar31 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar16 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar29 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar45);
      auVar47 = vpermpd_avx2(auVar57,0xff);
      auVar47 = vblendps_avx(auVar29,auVar47,3);
      auVar47 = vblendps_avx(auVar47,auVar46,0xe0);
      auVar47 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar47);
      *(undefined1 (*) [32])(param_1 + lVar11) = auVar47;
      auVar47 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar11);
      auVar29 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar11);
      auVar30 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar29);
      auVar44 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar47);
      auVar30 = vblendps_avx(auVar44,auVar30,0x88);
      auVar44 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar29);
      auVar51 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_3 + lVar11));
      auVar44 = vblendps_avx(auVar51,auVar44,0x13);
      auVar71._16_16_ = auVar44._0_16_;
      auVar71._0_16_ = auVar30._0_16_;
      auVar44 = vperm2f128_avx(auVar30,auVar44,0x31);
      auVar47 = vblendps_avx(auVar29,auVar47,0x24);
      auVar47 = vpermps_avx2(auVar61,auVar47);
      auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_3 + lVar11));
      auVar47 = vblendps_avx(auVar47,auVar29,0xe0);
      auVar29 = vsubps_avx(auVar71,auVar57);
      auVar57._4_4_ = param_6;
      auVar57._0_4_ = param_6;
      auVar57._8_4_ = param_6;
      auVar57._12_4_ = param_6;
      auVar57._16_4_ = param_6;
      auVar57._20_4_ = param_6;
      auVar57._24_4_ = param_6;
      auVar57._28_4_ = param_6;
      auVar30 = vdivps_avx(auVar29,auVar57);
      auVar29 = vsubps_avx(auVar44,auVar45);
      auVar44 = vdivps_avx(auVar29,auVar57);
      auVar47 = vsubps_avx(auVar47,auVar46);
      auVar57 = vdivps_avx(auVar47,auVar57);
      auVar52._16_16_ = auVar44._0_16_;
      auVar52._0_16_ = auVar30._0_16_;
      auVar29 = vshufpd_avx(auVar30,auVar52,2);
      auVar45 = vpermps_avx2(auVar14,auVar57);
      auVar47 = vpermpd_avx2(auVar44,0xe9);
      auVar47 = vblendps_avx(auVar45,auVar47,7);
      auVar45 = vpermps_avx2(auVar53,auVar47);
      auVar29 = vpermps_avx2(auVar54,auVar29);
      auVar29 = vblendps_avx(auVar29,auVar45,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar11) = auVar29;
      auVar29 = vpermps_avx2(auVar15,auVar47);
      auVar47 = vshufpd_avx(auVar30,auVar30,1);
      auVar47 = vblendps_avx(auVar29,auVar47,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar11) = auVar47;
      auVar29 = vpermps_avx2(auVar16,auVar44);
      auVar47 = vpermpd_avx2(auVar30,0xff);
      auVar47 = vblendps_avx(auVar29,auVar47,3);
      auVar47 = vblendps_avx(auVar47,auVar57,0xe0);
      auVar47 = vpermps_avx2(auVar31,auVar47);
      *(undefined1 (*) [32])(param_2 + lVar11) = auVar47;
      lVar11 = lVar11 + 0x60;
      uVar12 = uVar12 + 8;
    } while ((int)uVar12 < (int)(uVar9 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar12) {
      return;
    }
  }
  auVar61._4_4_ = uVar12;
  auVar61._0_4_ = uVar12;
  auVar61._8_4_ = uVar12;
  auVar61._12_4_ = uVar12;
  auVar61._16_4_ = uVar12;
  auVar61._20_4_ = uVar12;
  auVar61._24_4_ = uVar12;
  auVar61._28_4_ = uVar12;
  auVar61 = vpor_avx2(auVar61,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar53._4_4_ = param_7;
  auVar53._0_4_ = param_7;
  auVar53._8_4_ = param_7;
  auVar53._12_4_ = param_7;
  auVar53._16_4_ = param_7;
  auVar53._20_4_ = param_7;
  auVar53._24_4_ = param_7;
  auVar53._28_4_ = param_7;
  auVar61 = vpcmpgtd_avx2(auVar53,auVar61);
  uVar10 = (ulonglong)uVar12;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar10 * 0xc);
  uVar9 = vmovmskps_avx(auVar61);
  if (uVar9 == 0xff) {
    auVar53 = pauVar1[1];
    auVar47 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar53);
    auVar29 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar1);
    auVar47 = vblendps_avx(auVar29,auVar47,0x88);
    auVar29 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar53);
    auVar30 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar1[2]);
    auVar29 = vblendps_avx(auVar30,auVar29,0x13);
    auVar14._16_16_ = auVar29._0_16_;
    auVar14._0_16_ = auVar47._0_16_;
    auVar47 = vperm2f128_avx(auVar47,auVar29,0x31);
    auVar53 = vblendps_avx(auVar53,*pauVar1,0x24);
    auVar53 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar53);
    auVar54._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar54._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar29 = vpermps_avx2(auVar54,pauVar1[2]);
    auVar53 = vblendps_avx(auVar53,auVar29,0xe0);
  }
  else {
    auVar14 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar61);
    auVar47 = vgatherdps(ZEXT832(0),auVar61);
    auVar53 = vgatherdps(ZEXT832(0),auVar61);
  }
  cVar8 = (char)uVar9;
  fVar95 = param_4[8];
  fVar27 = auVar14._0_4_ * fVar95;
  fVar35 = auVar14._4_4_ * fVar95;
  fVar36 = auVar14._8_4_ * fVar95;
  fVar37 = auVar14._12_4_ * fVar95;
  fVar38 = auVar14._16_4_ * fVar95;
  fVar40 = auVar14._20_4_ * fVar95;
  fVar41 = auVar14._24_4_ * fVar95;
  fVar95 = auVar14._28_4_ * fVar95;
  fVar26 = param_4[9];
  fVar13 = auVar47._0_4_ * fVar26;
  fVar20 = auVar47._4_4_ * fVar26;
  fVar21 = auVar47._8_4_ * fVar26;
  fVar22 = auVar47._12_4_ * fVar26;
  fVar23 = auVar47._16_4_ * fVar26;
  fVar24 = auVar47._20_4_ * fVar26;
  fVar25 = auVar47._24_4_ * fVar26;
  fVar26 = auVar47._28_4_ * fVar26;
  fVar42 = param_4[10];
  fVar60 = auVar53._0_4_ * fVar42;
  fVar63 = auVar53._4_4_ * fVar42;
  fVar64 = auVar53._8_4_ * fVar42;
  fVar65 = auVar53._12_4_ * fVar42;
  fVar66 = auVar53._16_4_ * fVar42;
  fVar67 = auVar53._20_4_ * fVar42;
  fVar68 = auVar53._24_4_ * fVar42;
  fVar42 = auVar53._28_4_ * fVar42;
  fVar2 = param_4[3];
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = *param_4;
  fVar69 = fVar13 * fVar5 - fVar27 * fVar3;
  fVar70 = fVar20 * fVar5 - fVar35 * fVar3;
  fVar73 = fVar21 * fVar5 - fVar36 * fVar3;
  fVar74 = fVar22 * fVar5 - fVar37 * fVar3;
  fVar75 = fVar23 * fVar5 - fVar38 * fVar3;
  fVar76 = fVar24 * fVar5 - fVar40 * fVar3;
  fVar77 = fVar25 * fVar5 - fVar41 * fVar3;
  fVar78 = fVar26 * fVar5 - fVar95 * fVar3;
  fVar79 = fVar60 * fVar3 - fVar13 * fVar4;
  fVar80 = fVar63 * fVar3 - fVar20 * fVar4;
  fVar81 = fVar64 * fVar3 - fVar21 * fVar4;
  fVar82 = fVar65 * fVar3 - fVar22 * fVar4;
  fVar83 = fVar66 * fVar3 - fVar23 * fVar4;
  fVar84 = fVar67 * fVar3 - fVar24 * fVar4;
  fVar85 = fVar68 * fVar3 - fVar25 * fVar4;
  fVar86 = fVar42 * fVar3 - fVar26 * fVar4;
  fVar87 = fVar27 * fVar4 - fVar60 * fVar5;
  fVar88 = fVar35 * fVar4 - fVar63 * fVar5;
  fVar89 = fVar36 * fVar4 - fVar64 * fVar5;
  fVar90 = fVar37 * fVar4 - fVar65 * fVar5;
  fVar91 = fVar38 * fVar4 - fVar66 * fVar5;
  fVar92 = fVar40 * fVar4 - fVar67 * fVar5;
  fVar93 = fVar41 * fVar4 - fVar68 * fVar5;
  fVar94 = fVar95 * fVar4 - fVar42 * fVar5;
  fVar79 = fVar79 + fVar79;
  fVar80 = fVar80 + fVar80;
  fVar81 = fVar81 + fVar81;
  fVar82 = fVar82 + fVar82;
  fVar83 = fVar83 + fVar83;
  fVar84 = fVar84 + fVar84;
  fVar85 = fVar85 + fVar85;
  fVar86 = fVar86 + fVar86;
  fVar87 = fVar87 + fVar87;
  fVar88 = fVar88 + fVar88;
  fVar89 = fVar89 + fVar89;
  fVar90 = fVar90 + fVar90;
  fVar91 = fVar91 + fVar91;
  fVar92 = fVar92 + fVar92;
  fVar93 = fVar93 + fVar93;
  fVar94 = fVar94 + fVar94;
  fVar69 = fVar69 + fVar69;
  fVar70 = fVar70 + fVar70;
  fVar73 = fVar73 + fVar73;
  fVar74 = fVar74 + fVar74;
  fVar75 = fVar75 + fVar75;
  fVar76 = fVar76 + fVar76;
  fVar77 = fVar77 + fVar77;
  fVar78 = fVar78 + fVar78;
  fVar6 = param_4[4];
  auVar31._0_4_ = fVar6 + (fVar3 * fVar69 - fVar87 * fVar4) + fVar2 * fVar79 + fVar27;
  auVar31._4_4_ = fVar6 + (fVar3 * fVar70 - fVar88 * fVar4) + fVar2 * fVar80 + fVar35;
  auVar31._8_4_ = fVar6 + (fVar3 * fVar73 - fVar89 * fVar4) + fVar2 * fVar81 + fVar36;
  auVar31._12_4_ = fVar6 + (fVar3 * fVar74 - fVar90 * fVar4) + fVar2 * fVar82 + fVar37;
  auVar31._16_4_ = fVar6 + (fVar3 * fVar75 - fVar91 * fVar4) + fVar2 * fVar83 + fVar38;
  auVar31._20_4_ = fVar6 + (fVar3 * fVar76 - fVar92 * fVar4) + fVar2 * fVar84 + fVar40;
  auVar31._24_4_ = fVar6 + (fVar3 * fVar77 - fVar93 * fVar4) + fVar2 * fVar85 + fVar41;
  auVar31._28_4_ = fVar6 + (fVar3 * fVar78 - fVar94 * fVar4) + fVar2 * fVar86 + fVar95;
  fVar95 = param_4[5];
  auVar15._0_4_ = fVar95 + (fVar4 * fVar79 - fVar69 * fVar5) + fVar2 * fVar87 + fVar13;
  auVar15._4_4_ = fVar95 + (fVar4 * fVar80 - fVar70 * fVar5) + fVar2 * fVar88 + fVar20;
  auVar15._8_4_ = fVar95 + (fVar4 * fVar81 - fVar73 * fVar5) + fVar2 * fVar89 + fVar21;
  auVar15._12_4_ = fVar95 + (fVar4 * fVar82 - fVar74 * fVar5) + fVar2 * fVar90 + fVar22;
  auVar15._16_4_ = fVar95 + (fVar4 * fVar83 - fVar75 * fVar5) + fVar2 * fVar91 + fVar23;
  auVar15._20_4_ = fVar95 + (fVar4 * fVar84 - fVar76 * fVar5) + fVar2 * fVar92 + fVar24;
  auVar15._24_4_ = fVar95 + (fVar4 * fVar85 - fVar77 * fVar5) + fVar2 * fVar93 + fVar25;
  auVar15._28_4_ = fVar95 + (fVar4 * fVar86 - fVar78 * fVar5) + fVar2 * fVar94 + fVar26;
  fVar95 = param_4[6];
  auVar48._0_4_ = fVar95 + fVar69 * fVar2 + fVar60 + (fVar5 * fVar87 - fVar79 * fVar3);
  auVar48._4_4_ = fVar95 + fVar70 * fVar2 + fVar63 + (fVar5 * fVar88 - fVar80 * fVar3);
  auVar48._8_4_ = fVar95 + fVar73 * fVar2 + fVar64 + (fVar5 * fVar89 - fVar81 * fVar3);
  auVar48._12_4_ = fVar95 + fVar74 * fVar2 + fVar65 + (fVar5 * fVar90 - fVar82 * fVar3);
  auVar48._16_4_ = fVar95 + fVar75 * fVar2 + fVar66 + (fVar5 * fVar91 - fVar83 * fVar3);
  auVar48._20_4_ = fVar95 + fVar76 * fVar2 + fVar67 + (fVar5 * fVar92 - fVar84 * fVar3);
  auVar48._24_4_ = fVar95 + fVar77 * fVar2 + fVar68 + (fVar5 * fVar93 - fVar85 * fVar3);
  auVar48._28_4_ = fVar95 + fVar78 * fVar2 + fVar42 + (fVar5 * fVar94 - fVar86 * fVar3);
  uVar7 = *param_5;
  auVar55._4_4_ = uVar7;
  auVar55._0_4_ = uVar7;
  auVar55._8_4_ = uVar7;
  auVar55._12_4_ = uVar7;
  auVar55._16_4_ = uVar7;
  auVar55._20_4_ = uVar7;
  auVar55._24_4_ = uVar7;
  auVar55._28_4_ = uVar7;
  auVar53 = vsubps_avx(auVar31,auVar55);
  uVar7 = param_5[1];
  auVar32._4_4_ = uVar7;
  auVar32._0_4_ = uVar7;
  auVar32._8_4_ = uVar7;
  auVar32._12_4_ = uVar7;
  auVar32._16_4_ = uVar7;
  auVar32._20_4_ = uVar7;
  auVar32._24_4_ = uVar7;
  auVar32._28_4_ = uVar7;
  auVar47 = vsubps_avx(auVar15,auVar32);
  uVar7 = param_5[2];
  auVar16._4_4_ = uVar7;
  auVar16._0_4_ = uVar7;
  auVar16._8_4_ = uVar7;
  auVar16._12_4_ = uVar7;
  auVar16._16_4_ = uVar7;
  auVar16._20_4_ = uVar7;
  auVar16._24_4_ = uVar7;
  auVar16._28_4_ = uVar7;
  auVar29 = vsubps_avx(auVar48,auVar16);
  auVar50 = auVar53._0_16_;
  auVar56 = auVar53._16_16_;
  auVar28 = auVar47._0_16_;
  if (cVar8 == -1) {
    auVar18._16_16_ = auVar28;
    auVar18._0_16_ = auVar50;
    auVar30 = vshufpd_avx(auVar53,auVar18,2);
    auVar44 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar29);
    auVar61 = vpermpd_avx2(auVar47,0xe9);
    auVar61 = vblendps_avx(auVar44,auVar61,7);
    auVar58._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar58._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar44 = vpermps_avx2(auVar58,auVar61);
    auVar30 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar30);
    auVar30 = vblendps_avx(auVar30,auVar44,0xa4);
    *pauVar1 = auVar30;
    auVar30 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar61);
    auVar61 = vshufpd_avx(auVar53,auVar53,1);
    auVar61 = vblendps_avx(auVar30,auVar61,0x92);
    pauVar1[1] = auVar61;
    auVar19._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar19._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar30 = vpermps_avx2(auVar19,auVar47);
    auVar61 = vpermpd_avx2(auVar53,0xff);
    auVar61 = vblendps_avx(auVar30,auVar61,3);
    auVar61 = vblendps_avx(auVar61,auVar29,0xe0);
    auVar61 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar61);
    pauVar1[2] = auVar61;
    auVar61 = *(undefined1 (*) [32])(param_3 + uVar10 * 0xc);
    auVar30 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar10 * 0xc);
    auVar44 = *(undefined1 (*) [32])(param_3 + 0x40 + uVar10 * 0xc);
    auVar57 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar30);
    auVar45 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           auVar61);
    auVar57 = vblendps_avx(auVar45,auVar57,0x88);
    auVar45 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar30);
    auVar46 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar44);
    auVar45 = vblendps_avx(auVar46,auVar45,0x13);
    auVar17._16_16_ = auVar45._0_16_;
    auVar17._0_16_ = auVar57._0_16_;
    auVar57 = vperm2f128_avx(auVar57,auVar45,0x31);
    auVar61 = vblendps_avx(auVar30,auVar61,0x24);
    auVar61 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar61);
    auVar62._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar62._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar30 = vpermps_avx2(auVar62,auVar44);
    auVar61 = vblendps_avx(auVar61,auVar30,0xe0);
  }
  else {
    auVar39 = auVar47._16_16_;
    auVar43 = auVar29._0_16_;
    auVar49 = auVar29._16_16_;
    if ((uVar9 & 1) != 0) {
      *(int *)*pauVar1 = auVar53._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar50,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar50,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar50,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x10) = auVar53._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar56,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar56,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar56,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar7;
    }
    if ((uVar9 & 1) != 0) {
      *(int *)(*pauVar1 + 4) = auVar47._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar28,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar28,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar28,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x14) = auVar47._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar39,1);
      *(undefined4 *)pauVar1[2] = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar39,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar39,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar7;
    }
    if ((uVar9 & 1) != 0) {
      *(int *)(*pauVar1 + 8) = auVar29._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar43,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar43,2);
      *(undefined4 *)pauVar1[1] = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar43,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x18) = auVar29._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar49,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar49,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar49,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar7;
    }
    auVar17 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar61);
    auVar57 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar61);
    auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar61);
  }
  auVar53 = vsubps_avx(auVar17,auVar53);
  auVar72._4_4_ = param_6;
  auVar72._0_4_ = param_6;
  auVar72._8_4_ = param_6;
  auVar72._12_4_ = param_6;
  auVar72._16_4_ = param_6;
  auVar72._20_4_ = param_6;
  auVar72._24_4_ = param_6;
  auVar72._28_4_ = param_6;
  auVar53 = vdivps_avx(auVar53,auVar72);
  auVar47 = vsubps_avx(auVar57,auVar47);
  auVar47 = vdivps_avx(auVar47,auVar72);
  auVar61 = vsubps_avx(auVar61,auVar29);
  auVar61 = vdivps_avx(auVar61,auVar72);
  pauVar1 = (undefined1 (*) [32])(param_2 + uVar10 * 0xc);
  auVar50 = auVar53._0_16_;
  auVar56 = auVar53._16_16_;
  auVar28 = auVar47._0_16_;
  if (cVar8 == -1) {
    auVar33._16_16_ = auVar28;
    auVar33._0_16_ = auVar50;
    auVar30 = vshufpd_avx(auVar53,auVar33,2);
    auVar44 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar61);
    auVar29 = vpermpd_avx2(auVar47,0xe9);
    auVar29 = vblendps_avx(auVar44,auVar29,7);
    auVar59._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar59._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar44 = vpermps_avx2(auVar59,auVar29);
    auVar30 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar30);
    auVar30 = vblendps_avx(auVar30,auVar44,0xa4);
    *pauVar1 = auVar30;
    auVar30 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar29);
    auVar29 = vshufpd_avx(auVar53,auVar53,1);
    auVar29 = vblendps_avx(auVar30,auVar29,0x92);
    pauVar1[1] = auVar29;
    auVar34._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar34._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar47 = vpermps_avx2(auVar34,auVar47);
    auVar53 = vpermpd_avx2(auVar53,0xff);
    auVar53 = vblendps_avx(auVar47,auVar53,3);
    auVar61 = vblendps_avx(auVar53,auVar61,0xe0);
    auVar61 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar61);
    pauVar1[2] = auVar61;
  }
  else {
    auVar49 = auVar47._16_16_;
    auVar39 = auVar61._0_16_;
    auVar43 = auVar61._16_16_;
    if ((uVar9 & 1) != 0) {
      *(int *)*pauVar1 = auVar53._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar50,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar50,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar50,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x10) = auVar53._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar56,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar56,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar56,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar7;
    }
    if ((uVar9 & 1) != 0) {
      *(int *)(*pauVar1 + 4) = auVar47._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar28,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar28,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar28,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x14) = auVar47._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar49,1);
      *(undefined4 *)pauVar1[2] = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar49,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar49,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar7;
    }
    if ((uVar9 & 1) != 0) {
      *(int *)(*pauVar1 + 8) = auVar61._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar39,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar39,2);
      *(undefined4 *)pauVar1[1] = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar39,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x18) = auVar61._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar43,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar43,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar43,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar7;
    }
  }
  return;
}

// ApplyPreSimulationTransformAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuniCunf_avx2 @ 140cd9910

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuniCunf_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float *param_8,undefined4 *param_9,
               undefined4 param_10,uint param_11,undefined4 param_12)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  undefined1 auVar3 [32];
  undefined1 (*pauVar4) [32];
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar29;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  float fVar30;
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  float fVar31;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  float fVar41;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  float fVar42;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  float fVar43;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar44 [32];
  float fVar53;
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  float fVar54;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  float fVar71;
  float fVar72;
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
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  float fVar101;
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar102 [16];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar108 [16];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  float fVar109;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  float fVar121;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  float fVar122;
  undefined1 auVar123 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar131 [16];
  undefined1 auVar126 [32];
  float fVar135;
  undefined1 auVar136 [16];
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 auVar137 [32];
  undefined1 auVar142 [16];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  float fVar149;
  float fVar150;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar168 [32];
  float fVar169;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  undefined1 auVar170 [32];
  float fVar177;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  float fVar180;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  float fVar189;
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  
  uVar6 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar6 = param_11;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar9 = 0;
  }
  else {
    lVar8 = 0x10;
    uVar9 = 0;
    uVar7 = 0;
    auVar18 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
    do {
      auVar74 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar8 * 4);
      auVar55 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar8 * 4);
      auVar17 = *(undefined1 (*) [32])(param_3 + lVar8 * 4);
      auVar38 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar55);
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar74);
      auVar38 = vblendps_avx(auVar73,auVar38,0x88);
      auVar73 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar55);
      auVar168 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar17);
      auVar73 = vblendps_avx(auVar168,auVar73,0x13);
      auVar168 = vperm2f128_avx(auVar38,auVar73,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      fVar30 = param_8[8];
      fVar54 = auVar38._0_4_ * fVar30;
      fVar58 = auVar38._4_4_ * fVar30;
      fVar59 = auVar38._8_4_ * fVar30;
      fVar60 = auVar38._12_4_ * fVar30;
      fVar61 = auVar73._0_4_ * fVar30;
      fVar62 = auVar73._4_4_ * fVar30;
      fVar65 = auVar73._8_4_ * fVar30;
      fVar68 = auVar73._12_4_ * fVar30;
      fVar134 = param_8[9];
      fVar43 = auVar168._0_4_ * fVar134;
      fVar47 = auVar168._4_4_ * fVar134;
      fVar48 = auVar168._8_4_ * fVar134;
      fVar49 = auVar168._12_4_ * fVar134;
      fVar50 = auVar168._16_4_ * fVar134;
      fVar51 = auVar168._20_4_ * fVar134;
      fVar52 = auVar168._24_4_ * fVar134;
      fVar53 = auVar168._28_4_ * fVar134;
      fVar41 = param_8[10];
      fVar71 = auVar74._0_4_ * fVar41;
      fVar87 = auVar74._4_4_ * fVar41;
      fVar89 = auVar74._8_4_ * fVar41;
      fVar91 = auVar74._12_4_ * fVar41;
      fVar93 = auVar74._16_4_ * fVar41;
      fVar95 = auVar74._20_4_ * fVar41;
      fVar97 = auVar74._24_4_ * fVar41;
      fVar99 = auVar74._28_4_ * fVar41;
      fVar101 = param_8[3];
      fVar121 = param_8[1];
      fVar11 = param_8[2];
      fVar31 = *param_8;
      fVar109 = fVar43 * fVar31 - fVar121 * fVar54;
      fVar114 = fVar47 * fVar31 - fVar121 * fVar58;
      fVar115 = fVar48 * fVar31 - fVar121 * fVar59;
      fVar116 = fVar49 * fVar31 - fVar121 * fVar60;
      fVar117 = fVar50 * fVar31 - fVar121 * fVar61;
      fVar118 = fVar51 * fVar31 - fVar121 * fVar62;
      fVar119 = fVar52 * fVar31 - fVar121 * fVar65;
      fVar120 = fVar53 * fVar31 - fVar121 * fVar68;
      fVar135 = fVar71 * fVar121 - fVar43 * fVar11;
      fVar138 = fVar87 * fVar121 - fVar47 * fVar11;
      fVar139 = fVar89 * fVar121 - fVar48 * fVar11;
      fVar140 = fVar91 * fVar121 - fVar49 * fVar11;
      fVar141 = fVar93 * fVar121 - fVar50 * fVar11;
      fVar143 = fVar95 * fVar121 - fVar51 * fVar11;
      fVar144 = fVar97 * fVar121 - fVar52 * fVar11;
      fVar145 = fVar99 * fVar121 - fVar53 * fVar11;
      fVar149 = fVar54 * fVar11 - fVar31 * fVar71;
      fVar154 = fVar58 * fVar11 - fVar31 * fVar87;
      fVar156 = fVar59 * fVar11 - fVar31 * fVar89;
      fVar158 = fVar60 * fVar11 - fVar31 * fVar91;
      fVar160 = fVar61 * fVar11 - fVar31 * fVar93;
      fVar162 = fVar62 * fVar11 - fVar31 * fVar95;
      fVar164 = fVar65 * fVar11 - fVar31 * fVar97;
      fVar166 = fVar68 * fVar11 - fVar31 * fVar99;
      fVar135 = fVar135 + fVar135;
      fVar138 = fVar138 + fVar138;
      fVar139 = fVar139 + fVar139;
      fVar140 = fVar140 + fVar140;
      fVar141 = fVar141 + fVar141;
      fVar143 = fVar143 + fVar143;
      fVar144 = fVar144 + fVar144;
      fVar145 = fVar145 + fVar145;
      fVar149 = fVar149 + fVar149;
      fVar154 = fVar154 + fVar154;
      fVar156 = fVar156 + fVar156;
      fVar158 = fVar158 + fVar158;
      fVar160 = fVar160 + fVar160;
      fVar162 = fVar162 + fVar162;
      fVar164 = fVar164 + fVar164;
      fVar166 = fVar166 + fVar166;
      fVar109 = fVar109 + fVar109;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar42 = param_8[4];
      fVar10 = param_8[5];
      fVar29 = param_8[6];
      auVar112._0_4_ = fVar42 + (fVar121 * fVar109 - fVar149 * fVar11) + fVar101 * fVar135 + fVar54;
      auVar112._4_4_ = fVar42 + (fVar121 * fVar114 - fVar154 * fVar11) + fVar101 * fVar138 + fVar58;
      auVar112._8_4_ = fVar42 + (fVar121 * fVar115 - fVar156 * fVar11) + fVar101 * fVar139 + fVar59;
      auVar112._12_4_ = fVar42 + (fVar121 * fVar116 - fVar158 * fVar11) + fVar101 * fVar140 + fVar60
      ;
      auVar112._16_4_ = fVar42 + (fVar121 * fVar117 - fVar160 * fVar11) + fVar101 * fVar141 + fVar61
      ;
      auVar112._20_4_ = fVar42 + (fVar121 * fVar118 - fVar162 * fVar11) + fVar101 * fVar143 + fVar62
      ;
      auVar112._24_4_ = fVar42 + (fVar121 * fVar119 - fVar164 * fVar11) + fVar101 * fVar144 + fVar65
      ;
      auVar112._28_4_ = fVar42 + (fVar121 * fVar120 - fVar166 * fVar11) + fVar101 * fVar145 + fVar68
      ;
      auVar110._0_4_ = fVar10 + (fVar11 * fVar135 - fVar31 * fVar109) + fVar101 * fVar149 + fVar43;
      auVar110._4_4_ = fVar10 + (fVar11 * fVar138 - fVar31 * fVar114) + fVar101 * fVar154 + fVar47;
      auVar110._8_4_ = fVar10 + (fVar11 * fVar139 - fVar31 * fVar115) + fVar101 * fVar156 + fVar48;
      auVar110._12_4_ = fVar10 + (fVar11 * fVar140 - fVar31 * fVar116) + fVar101 * fVar158 + fVar49;
      auVar110._16_4_ = fVar10 + (fVar11 * fVar141 - fVar31 * fVar117) + fVar101 * fVar160 + fVar50;
      auVar110._20_4_ = fVar10 + (fVar11 * fVar143 - fVar31 * fVar118) + fVar101 * fVar162 + fVar51;
      auVar110._24_4_ = fVar10 + (fVar11 * fVar144 - fVar31 * fVar119) + fVar101 * fVar164 + fVar52;
      auVar110._28_4_ = fVar10 + (fVar11 * fVar145 - fVar31 * fVar120) + fVar101 * fVar166 + fVar53;
      auVar170._0_4_ = fVar29 + (fVar31 * fVar149 - fVar121 * fVar135) + fVar101 * fVar109 + fVar71;
      auVar170._4_4_ = fVar29 + (fVar31 * fVar154 - fVar121 * fVar138) + fVar101 * fVar114 + fVar87;
      auVar170._8_4_ = fVar29 + (fVar31 * fVar156 - fVar121 * fVar139) + fVar101 * fVar115 + fVar89;
      auVar170._12_4_ = fVar29 + (fVar31 * fVar158 - fVar121 * fVar140) + fVar101 * fVar116 + fVar91
      ;
      auVar170._16_4_ = fVar29 + (fVar31 * fVar160 - fVar121 * fVar141) + fVar101 * fVar117 + fVar93
      ;
      auVar170._20_4_ = fVar29 + (fVar31 * fVar162 - fVar121 * fVar143) + fVar101 * fVar118 + fVar95
      ;
      auVar170._24_4_ = fVar29 + (fVar31 * fVar164 - fVar121 * fVar144) + fVar101 * fVar119 + fVar97
      ;
      auVar170._28_4_ = fVar29 + (fVar31 * fVar166 - fVar121 * fVar145) + fVar101 * fVar120 + fVar99
      ;
      uVar2 = *param_9;
      auVar14._4_4_ = uVar2;
      auVar14._0_4_ = uVar2;
      auVar14._8_4_ = uVar2;
      auVar14._12_4_ = uVar2;
      auVar14._16_4_ = uVar2;
      auVar14._20_4_ = uVar2;
      auVar14._24_4_ = uVar2;
      auVar14._28_4_ = uVar2;
      auVar55 = vsubps_avx(auVar112,auVar14);
      uVar2 = param_9[1];
      auVar15._4_4_ = uVar2;
      auVar15._0_4_ = uVar2;
      auVar15._8_4_ = uVar2;
      auVar15._12_4_ = uVar2;
      auVar15._16_4_ = uVar2;
      auVar15._20_4_ = uVar2;
      auVar15._24_4_ = uVar2;
      auVar15._28_4_ = uVar2;
      auVar17 = vsubps_avx(auVar110,auVar15);
      uVar2 = param_9[2];
      auVar16._4_4_ = uVar2;
      auVar16._0_4_ = uVar2;
      auVar16._8_4_ = uVar2;
      auVar16._12_4_ = uVar2;
      auVar16._16_4_ = uVar2;
      auVar16._20_4_ = uVar2;
      auVar16._24_4_ = uVar2;
      auVar16._28_4_ = uVar2;
      auVar38 = vsubps_avx(auVar170,auVar16);
      auVar74 = *(undefined1 (*) [32])(param_6 + (uVar7 & 0xffffffff));
      auVar73 = vunpcklps_avx(auVar55,auVar17);
      auVar168 = vunpcklps_avx(auVar38,auVar74);
      auVar112 = vunpcklpd_avx(auVar73,auVar168);
      auVar73 = vunpckhpd_avx(auVar73,auVar168);
      auVar181._16_16_ = auVar73._0_16_;
      auVar181._0_16_ = auVar112._0_16_;
      *(undefined1 (*) [32])(param_1 + uVar7 * 4) = auVar181;
      auVar74 = vunpckhps_avx(auVar38,auVar74);
      auVar168 = vunpckhps_avx(auVar55,auVar17);
      auVar3 = vunpcklpd_avx(auVar168,auVar74);
      auVar74 = vunpckhpd_avx(auVar168,auVar74);
      auVar182._16_16_ = auVar74._0_16_;
      auVar182._0_16_ = auVar3._0_16_;
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar7 * 4) = auVar182;
      auVar73 = vperm2f128_avx(auVar112,auVar73,0x31);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar7 * 4) = auVar73;
      auVar74 = vperm2f128_avx(auVar3,auVar74,0x31);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar7 * 4) = auVar74;
      auVar74._16_16_ = auVar17._0_16_;
      auVar74._0_16_ = auVar55._0_16_;
      auVar74 = vshufpd_avx(auVar55,auVar74,2);
      auVar73 = vpermps_avx2(auVar18,auVar38);
      auVar18 = vpermpd_avx2(auVar17,0xe9);
      auVar18 = vblendps_avx(auVar73,auVar18,7);
      auVar73 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar18);
      auVar74 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar74);
      auVar74 = vblendps_avx(auVar74,auVar73,0xa4);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar8 * 4) = auVar74;
      auVar74 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar18);
      auVar18 = vshufpd_avx(auVar55,auVar55,1);
      auVar18 = vblendps_avx(auVar74,auVar18,0x92);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar8 * 4) = auVar18;
      auVar74 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar17);
      auVar18 = vpermpd_avx2(auVar55,0xff);
      auVar18 = vblendps_avx(auVar74,auVar18,3);
      auVar18 = vblendps_avx(auVar18,auVar38,0xe0);
      auVar18 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar18);
      *(undefined1 (*) [32])(param_3 + lVar8 * 4) = auVar18;
      auVar112 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar152 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar110 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar18 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar74 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar8 * 4);
      auVar55 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar8 * 4);
      auVar17 = *(undefined1 (*) [32])(param_2 + lVar8 * 4);
      auVar38 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar55);
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar74);
      auVar38 = vblendps_avx(auVar73,auVar38,0x88);
      auVar73 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar55);
      auVar168 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar17);
      auVar73 = vblendps_avx(auVar168,auVar73,0x13);
      auVar168 = vperm2f128_avx(auVar38,auVar73,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      fVar169 = auVar38._0_4_ * fVar30;
      fVar171 = auVar38._4_4_ * fVar30;
      fVar172 = auVar38._8_4_ * fVar30;
      fVar173 = auVar38._12_4_ * fVar30;
      fVar174 = auVar73._0_4_ * fVar30;
      fVar175 = auVar73._4_4_ * fVar30;
      fVar176 = auVar73._8_4_ * fVar30;
      fVar177 = auVar73._12_4_ * fVar30;
      fVar180 = auVar168._0_4_ * fVar134;
      fVar183 = auVar168._4_4_ * fVar134;
      fVar184 = auVar168._8_4_ * fVar134;
      fVar185 = auVar168._12_4_ * fVar134;
      fVar186 = auVar168._16_4_ * fVar134;
      fVar187 = auVar168._20_4_ * fVar134;
      fVar188 = auVar168._24_4_ * fVar134;
      fVar189 = auVar168._28_4_ * fVar134;
      fVar72 = auVar74._0_4_ * fVar41;
      fVar88 = auVar74._4_4_ * fVar41;
      fVar90 = auVar74._8_4_ * fVar41;
      fVar92 = auVar74._12_4_ * fVar41;
      fVar94 = auVar74._16_4_ * fVar41;
      fVar96 = auVar74._20_4_ * fVar41;
      fVar98 = auVar74._24_4_ * fVar41;
      fVar100 = auVar74._28_4_ * fVar41;
      fVar43 = fVar180 * fVar31 - fVar169 * fVar121;
      fVar48 = fVar183 * fVar31 - fVar171 * fVar121;
      fVar50 = fVar184 * fVar31 - fVar172 * fVar121;
      fVar52 = fVar185 * fVar31 - fVar173 * fVar121;
      fVar54 = fVar186 * fVar31 - fVar174 * fVar121;
      fVar59 = fVar187 * fVar31 - fVar175 * fVar121;
      fVar61 = fVar188 * fVar31 - fVar176 * fVar121;
      fVar65 = fVar189 * fVar31 - fVar177 * fVar121;
      fVar68 = fVar72 * fVar121 - fVar180 * fVar11;
      fVar87 = fVar88 * fVar121 - fVar183 * fVar11;
      fVar91 = fVar90 * fVar121 - fVar184 * fVar11;
      fVar95 = fVar92 * fVar121 - fVar185 * fVar11;
      fVar99 = fVar94 * fVar121 - fVar186 * fVar11;
      fVar114 = fVar96 * fVar121 - fVar187 * fVar11;
      fVar116 = fVar98 * fVar121 - fVar188 * fVar11;
      fVar118 = fVar100 * fVar121 - fVar189 * fVar11;
      fVar144 = fVar169 * fVar11 - fVar31 * fVar72;
      fVar149 = fVar171 * fVar11 - fVar31 * fVar88;
      fVar156 = fVar172 * fVar11 - fVar31 * fVar90;
      fVar160 = fVar173 * fVar11 - fVar31 * fVar92;
      fVar164 = fVar174 * fVar11 - fVar31 * fVar94;
      fVar63 = fVar175 * fVar11 - fVar31 * fVar96;
      fVar66 = fVar176 * fVar11 - fVar31 * fVar98;
      fVar69 = fVar177 * fVar11 - fVar31 * fVar100;
      fVar68 = fVar68 + fVar68;
      fVar87 = fVar87 + fVar87;
      fVar91 = fVar91 + fVar91;
      fVar95 = fVar95 + fVar95;
      fVar99 = fVar99 + fVar99;
      fVar114 = fVar114 + fVar114;
      fVar116 = fVar116 + fVar116;
      fVar118 = fVar118 + fVar118;
      fVar144 = fVar144 + fVar144;
      fVar149 = fVar149 + fVar149;
      fVar156 = fVar156 + fVar156;
      fVar160 = fVar160 + fVar160;
      fVar164 = fVar164 + fVar164;
      fVar63 = fVar63 + fVar63;
      fVar66 = fVar66 + fVar66;
      fVar69 = fVar69 + fVar69;
      fVar43 = fVar43 + fVar43;
      fVar48 = fVar48 + fVar48;
      fVar50 = fVar50 + fVar50;
      fVar52 = fVar52 + fVar52;
      fVar54 = fVar54 + fVar54;
      fVar59 = fVar59 + fVar59;
      fVar61 = fVar61 + fVar61;
      fVar65 = fVar65 + fVar65;
      auVar74 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar8 * 4);
      auVar55 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar8 * 4);
      auVar17 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar55);
      auVar38 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar74);
      auVar38 = vblendps_avx(auVar38,auVar17,0x88);
      auVar17 = *(undefined1 (*) [32])(param_4 + lVar8 * 4);
      auVar73 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar55);
      auVar168 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar17);
      auVar73 = vblendps_avx(auVar168,auVar73,0x13);
      auVar168 = vperm2f128_avx(auVar38,auVar73,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      fVar47 = auVar38._0_4_ * fVar30;
      fVar49 = auVar38._4_4_ * fVar30;
      fVar51 = auVar38._8_4_ * fVar30;
      fVar53 = auVar38._12_4_ * fVar30;
      fVar58 = auVar73._0_4_ * fVar30;
      fVar60 = auVar73._4_4_ * fVar30;
      fVar62 = auVar73._8_4_ * fVar30;
      fVar30 = auVar73._12_4_ * fVar30;
      fVar122 = auVar168._0_4_ * fVar134;
      fVar127 = auVar168._4_4_ * fVar134;
      fVar128 = auVar168._8_4_ * fVar134;
      fVar129 = auVar168._12_4_ * fVar134;
      fVar130 = auVar168._16_4_ * fVar134;
      fVar132 = auVar168._20_4_ * fVar134;
      fVar133 = auVar168._24_4_ * fVar134;
      fVar134 = auVar168._28_4_ * fVar134;
      fVar71 = auVar74._0_4_ * fVar41;
      fVar89 = auVar74._4_4_ * fVar41;
      fVar93 = auVar74._8_4_ * fVar41;
      fVar97 = auVar74._12_4_ * fVar41;
      fVar109 = auVar74._16_4_ * fVar41;
      fVar115 = auVar74._20_4_ * fVar41;
      fVar117 = auVar74._24_4_ * fVar41;
      fVar41 = auVar74._28_4_ * fVar41;
      fVar119 = fVar122 * fVar31 - fVar121 * fVar47;
      fVar120 = fVar127 * fVar31 - fVar121 * fVar49;
      fVar135 = fVar128 * fVar31 - fVar121 * fVar51;
      fVar138 = fVar129 * fVar31 - fVar121 * fVar53;
      fVar139 = fVar130 * fVar31 - fVar121 * fVar58;
      fVar140 = fVar132 * fVar31 - fVar121 * fVar60;
      fVar141 = fVar133 * fVar31 - fVar121 * fVar62;
      fVar143 = fVar134 * fVar31 - fVar121 * fVar30;
      fVar145 = fVar71 * fVar121 - fVar122 * fVar11;
      fVar154 = fVar89 * fVar121 - fVar127 * fVar11;
      fVar158 = fVar93 * fVar121 - fVar128 * fVar11;
      fVar162 = fVar97 * fVar121 - fVar129 * fVar11;
      fVar166 = fVar109 * fVar121 - fVar130 * fVar11;
      fVar64 = fVar115 * fVar121 - fVar132 * fVar11;
      fVar67 = fVar117 * fVar121 - fVar133 * fVar11;
      fVar70 = fVar41 * fVar121 - fVar134 * fVar11;
      fVar150 = fVar47 * fVar11 - fVar31 * fVar71;
      fVar155 = fVar49 * fVar11 - fVar31 * fVar89;
      fVar157 = fVar51 * fVar11 - fVar31 * fVar93;
      fVar159 = fVar53 * fVar11 - fVar31 * fVar97;
      fVar161 = fVar58 * fVar11 - fVar31 * fVar109;
      fVar163 = fVar60 * fVar11 - fVar31 * fVar115;
      fVar165 = fVar62 * fVar11 - fVar31 * fVar117;
      fVar167 = fVar30 * fVar11 - fVar31 * fVar41;
      fVar145 = fVar145 + fVar145;
      fVar154 = fVar154 + fVar154;
      fVar158 = fVar158 + fVar158;
      fVar162 = fVar162 + fVar162;
      fVar166 = fVar166 + fVar166;
      fVar64 = fVar64 + fVar64;
      fVar67 = fVar67 + fVar67;
      fVar70 = fVar70 + fVar70;
      fVar150 = fVar150 + fVar150;
      fVar155 = fVar155 + fVar155;
      fVar157 = fVar157 + fVar157;
      fVar159 = fVar159 + fVar159;
      fVar161 = fVar161 + fVar161;
      fVar163 = fVar163 + fVar163;
      fVar165 = fVar165 + fVar165;
      fVar167 = fVar167 + fVar167;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar135 = fVar135 + fVar135;
      fVar138 = fVar138 + fVar138;
      fVar139 = fVar139 + fVar139;
      fVar140 = fVar140 + fVar140;
      fVar141 = fVar141 + fVar141;
      fVar143 = fVar143 + fVar143;
      auVar168._0_4_ = (fVar31 * fVar144 - fVar121 * fVar68) + fVar101 * fVar43 + fVar72;
      auVar168._4_4_ = (fVar31 * fVar149 - fVar121 * fVar87) + fVar101 * fVar48 + fVar88;
      auVar168._8_4_ = (fVar31 * fVar156 - fVar121 * fVar91) + fVar101 * fVar50 + fVar90;
      auVar168._12_4_ = (fVar31 * fVar160 - fVar121 * fVar95) + fVar101 * fVar52 + fVar92;
      auVar168._16_4_ = (fVar31 * fVar164 - fVar121 * fVar99) + fVar101 * fVar54 + fVar94;
      auVar168._20_4_ = (fVar31 * fVar63 - fVar121 * fVar114) + fVar101 * fVar59 + fVar96;
      auVar168._24_4_ = (fVar31 * fVar66 - fVar121 * fVar116) + fVar101 * fVar61 + fVar98;
      auVar168._28_4_ = (fVar31 * fVar69 - fVar121 * fVar118) + fVar101 * fVar65 + fVar100;
      auVar38._0_4_ = fVar101 * fVar68 + fVar169 + (fVar121 * fVar43 - fVar11 * fVar144);
      auVar38._4_4_ = fVar101 * fVar87 + fVar171 + (fVar121 * fVar48 - fVar11 * fVar149);
      auVar38._8_4_ = fVar101 * fVar91 + fVar172 + (fVar121 * fVar50 - fVar11 * fVar156);
      auVar38._12_4_ = fVar101 * fVar95 + fVar173 + (fVar121 * fVar52 - fVar11 * fVar160);
      auVar38._16_4_ = fVar101 * fVar99 + fVar174 + (fVar121 * fVar54 - fVar11 * fVar164);
      auVar38._20_4_ = fVar101 * fVar114 + fVar175 + (fVar121 * fVar59 - fVar11 * fVar63);
      auVar38._24_4_ = fVar101 * fVar116 + fVar176 + (fVar121 * fVar61 - fVar11 * fVar66);
      auVar38._28_4_ = fVar101 * fVar118 + fVar177 + (fVar121 * fVar65 - fVar11 * fVar69);
      auVar73._0_4_ = fVar101 * fVar144 + fVar180 + (fVar11 * fVar68 - fVar31 * fVar43);
      auVar73._4_4_ = fVar101 * fVar149 + fVar183 + (fVar11 * fVar87 - fVar31 * fVar48);
      auVar73._8_4_ = fVar101 * fVar156 + fVar184 + (fVar11 * fVar91 - fVar31 * fVar50);
      auVar73._12_4_ = fVar101 * fVar160 + fVar185 + (fVar11 * fVar95 - fVar31 * fVar52);
      auVar73._16_4_ = fVar101 * fVar164 + fVar186 + (fVar11 * fVar99 - fVar31 * fVar54);
      auVar73._20_4_ = fVar101 * fVar63 + fVar187 + (fVar11 * fVar114 - fVar31 * fVar59);
      auVar73._24_4_ = fVar101 * fVar66 + fVar188 + (fVar11 * fVar116 - fVar31 * fVar61);
      auVar73._28_4_ = fVar101 * fVar69 + fVar189 + (fVar11 * fVar118 - fVar31 * fVar65);
      auVar17._0_4_ = (fVar121 * fVar119 - fVar150 * fVar11) + fVar101 * fVar145 + fVar47 + fVar42;
      auVar17._4_4_ = (fVar121 * fVar120 - fVar155 * fVar11) + fVar101 * fVar154 + fVar49 + fVar42;
      auVar17._8_4_ = (fVar121 * fVar135 - fVar157 * fVar11) + fVar101 * fVar158 + fVar51 + fVar42;
      auVar17._12_4_ = (fVar121 * fVar138 - fVar159 * fVar11) + fVar101 * fVar162 + fVar53 + fVar42;
      auVar17._16_4_ = (fVar121 * fVar139 - fVar161 * fVar11) + fVar101 * fVar166 + fVar58 + fVar42;
      auVar17._20_4_ = (fVar121 * fVar140 - fVar163 * fVar11) + fVar101 * fVar64 + fVar60 + fVar42;
      auVar17._24_4_ = (fVar121 * fVar141 - fVar165 * fVar11) + fVar101 * fVar67 + fVar62 + fVar42;
      auVar17._28_4_ = (fVar121 * fVar143 - fVar167 * fVar11) + fVar101 * fVar70 + fVar30 + fVar42;
      auVar45._0_4_ = fVar101 * fVar150 + fVar122 + (fVar11 * fVar145 - fVar31 * fVar119) + fVar10;
      auVar45._4_4_ = fVar101 * fVar155 + fVar127 + (fVar11 * fVar154 - fVar31 * fVar120) + fVar10;
      auVar45._8_4_ = fVar101 * fVar157 + fVar128 + (fVar11 * fVar158 - fVar31 * fVar135) + fVar10;
      auVar45._12_4_ = fVar101 * fVar159 + fVar129 + (fVar11 * fVar162 - fVar31 * fVar138) + fVar10;
      auVar45._16_4_ = fVar101 * fVar161 + fVar130 + (fVar11 * fVar166 - fVar31 * fVar139) + fVar10;
      auVar45._20_4_ = fVar101 * fVar163 + fVar132 + (fVar11 * fVar64 - fVar31 * fVar140) + fVar10;
      auVar45._24_4_ = fVar101 * fVar165 + fVar133 + (fVar11 * fVar67 - fVar31 * fVar141) + fVar10;
      auVar45._28_4_ = fVar101 * fVar167 + fVar134 + (fVar11 * fVar70 - fVar31 * fVar143) + fVar10;
      auVar32._0_4_ = fVar119 * fVar101 + fVar71 + (fVar31 * fVar150 - fVar121 * fVar145) + fVar29;
      auVar32._4_4_ = fVar120 * fVar101 + fVar89 + (fVar31 * fVar155 - fVar121 * fVar154) + fVar29;
      auVar32._8_4_ = fVar135 * fVar101 + fVar93 + (fVar31 * fVar157 - fVar121 * fVar158) + fVar29;
      auVar32._12_4_ = fVar138 * fVar101 + fVar97 + (fVar31 * fVar159 - fVar121 * fVar162) + fVar29;
      auVar32._16_4_ = fVar139 * fVar101 + fVar109 + (fVar31 * fVar161 - fVar121 * fVar166) + fVar29
      ;
      auVar32._20_4_ = fVar140 * fVar101 + fVar115 + (fVar31 * fVar163 - fVar121 * fVar64) + fVar29;
      auVar32._24_4_ = fVar141 * fVar101 + fVar117 + (fVar31 * fVar165 - fVar121 * fVar67) + fVar29;
      auVar32._28_4_ = fVar143 * fVar101 + fVar41 + (fVar31 * fVar167 - fVar121 * fVar70) + fVar29;
      auVar14 = vsubps_avx(auVar17,auVar14);
      auVar15 = vsubps_avx(auVar45,auVar15);
      auVar16 = vsubps_avx(auVar32,auVar16);
      auVar33._16_16_ = auVar15._0_16_;
      auVar33._0_16_ = auVar14._0_16_;
      auVar55 = vshufpd_avx(auVar14,auVar33,2);
      auVar17 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar16);
      auVar74 = vpermpd_avx2(auVar15,0xe9);
      auVar74 = vblendps_avx(auVar17,auVar74,7);
      auVar17 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar55);
      auVar55 = vblendps_avx(auVar55,auVar17,0xa4);
      *(undefined1 (*) [32])(param_4 + -0x40 + lVar8 * 4) = auVar55;
      auVar55 = vpermps_avx2(auVar112,auVar74);
      auVar74 = vshufpd_avx(auVar14,auVar14,1);
      auVar74 = vblendps_avx(auVar55,auVar74,0x92);
      *(undefined1 (*) [32])(param_4 + -0x20 + lVar8 * 4) = auVar74;
      auVar33 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar55 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar15);
      auVar74 = vpermpd_avx2(auVar14,0xff);
      auVar74 = vblendps_avx(auVar55,auVar74,3);
      auVar74 = vblendps_avx(auVar74,auVar16,0xe0);
      auVar74 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar74);
      *(undefined1 (*) [32])(param_4 + lVar8 * 4) = auVar74;
      auVar74 = *(undefined1 (*) [32])(param_7 + -0x40 + lVar8 * 4);
      auVar55 = *(undefined1 (*) [32])(param_7 + -0x20 + lVar8 * 4);
      auVar17 = *(undefined1 (*) [32])(param_7 + lVar8 * 4);
      auVar112 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar55);
      auVar3 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar74);
      auVar112 = vblendps_avx(auVar3,auVar112,0x88);
      auVar3 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                            auVar55);
      auVar32 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar17);
      auVar3 = vblendps_avx(auVar32,auVar3,0x13);
      auVar151._16_16_ = auVar3._0_16_;
      auVar151._0_16_ = auVar112._0_16_;
      auVar112 = vperm2f128_avx(auVar112,auVar3,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      auVar55 = vsubps_avx(auVar151,auVar14);
      auVar3._4_4_ = param_10;
      auVar3._0_4_ = param_10;
      auVar3._8_4_ = param_10;
      auVar3._12_4_ = param_10;
      auVar3._16_4_ = param_10;
      auVar3._20_4_ = param_10;
      auVar3._24_4_ = param_10;
      auVar3._28_4_ = param_10;
      auVar17 = vdivps_avx(auVar55,auVar3);
      auVar55 = vsubps_avx(auVar112,auVar15);
      auVar112 = vdivps_avx(auVar55,auVar3);
      auVar74 = vsubps_avx(auVar74,auVar16);
      auVar3 = vdivps_avx(auVar74,auVar3);
      auVar34._16_16_ = auVar112._0_16_;
      auVar34._0_16_ = auVar17._0_16_;
      auVar55 = vshufpd_avx(auVar17,auVar34,2);
      auVar14 = vpermps_avx2(auVar18,auVar3);
      auVar74 = vpermpd_avx2(auVar112,0xe9);
      auVar74 = vblendps_avx(auVar14,auVar74,7);
      auVar14 = vpermps_avx2(auVar110,auVar74);
      auVar55 = vpermps_avx2(auVar152,auVar55);
      auVar55 = vblendps_avx(auVar55,auVar14,0xa4);
      *(undefined1 (*) [32])(param_5 + -0x40 + lVar8 * 4) = auVar55;
      auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar74);
      auVar74 = vshufpd_avx(auVar17,auVar17,1);
      auVar74 = vblendps_avx(auVar55,auVar74,0x92);
      *(undefined1 (*) [32])(param_5 + -0x20 + lVar8 * 4) = auVar74;
      auVar55 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar112);
      auVar74 = vpermpd_avx2(auVar17,0xff);
      auVar74 = vblendps_avx(auVar55,auVar74,3);
      auVar74 = vblendps_avx(auVar74,auVar3,0xe0);
      auVar74 = vpermps_avx2(auVar33,auVar74);
      *(undefined1 (*) [32])(param_5 + lVar8 * 4) = auVar74;
      auVar74 = vsubps_avx(auVar38,auVar17);
      auVar55 = vsubps_avx(auVar73,auVar112);
      auVar14 = vsubps_avx(auVar168,auVar3);
      fVar30 = auVar55._0_4_;
      fVar134 = auVar55._4_4_;
      fVar41 = auVar55._8_4_;
      fVar101 = auVar55._12_4_;
      fVar121 = auVar55._16_4_;
      fVar11 = auVar55._20_4_;
      fVar31 = auVar55._24_4_;
      fVar42 = auVar55._28_4_;
      fVar10 = auVar74._0_4_;
      fVar29 = auVar74._4_4_;
      fVar43 = auVar74._8_4_;
      fVar47 = auVar74._12_4_;
      fVar48 = auVar74._16_4_;
      fVar49 = auVar74._20_4_;
      fVar50 = auVar74._24_4_;
      fVar51 = auVar74._28_4_;
      fVar52 = auVar14._0_4_;
      auVar152._0_4_ = fVar52 * fVar52 + fVar10 * fVar10 + fVar30 * fVar30;
      fVar53 = auVar14._4_4_;
      auVar152._4_4_ = fVar53 * fVar53 + fVar29 * fVar29 + fVar134 * fVar134;
      fVar54 = auVar14._8_4_;
      auVar152._8_4_ = fVar54 * fVar54 + fVar43 * fVar43 + fVar41 * fVar41;
      fVar58 = auVar14._12_4_;
      auVar152._12_4_ = fVar58 * fVar58 + fVar47 * fVar47 + fVar101 * fVar101;
      fVar59 = auVar14._16_4_;
      auVar152._16_4_ = fVar59 * fVar59 + fVar48 * fVar48 + fVar121 * fVar121;
      fVar60 = auVar14._20_4_;
      auVar152._20_4_ = fVar60 * fVar60 + fVar49 * fVar49 + fVar11 * fVar11;
      fVar61 = auVar14._24_4_;
      auVar152._24_4_ = fVar61 * fVar61 + fVar50 * fVar50 + fVar31 * fVar31;
      fVar62 = auVar14._28_4_;
      auVar152._28_4_ = fVar62 * fVar62 + fVar51 * fVar51 + fVar42 * fVar42;
      auVar55._4_4_ = param_12;
      auVar55._0_4_ = param_12;
      auVar55._8_4_ = param_12;
      auVar55._12_4_ = param_12;
      auVar55._16_4_ = param_12;
      auVar55._20_4_ = param_12;
      auVar55._24_4_ = param_12;
      auVar55._28_4_ = param_12;
      auVar74 = vcmpps_avx(auVar55,auVar152,1);
      if ((((((((SUB321(auVar74 >> 0x1f,0) & 1) != 0 || (SUB321(auVar74 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar74 >> 0x5f,0) & 1) != 0) || SUB321(auVar74 >> 0x7f,0) != '\0') ||
            (SUB321(auVar74 >> 0x9f,0) & 1) != 0) || SUB321(auVar74 >> 0xbf,0) != '\0') ||
          (SUB321(auVar74 >> 0xdf,0) & 1) != 0) || auVar74[0x1f] < '\0') {
        auVar55 = vdivps_avx(auVar55,auVar152);
        auVar55 = vsqrtps_avx(auVar55);
        fVar65 = auVar55._0_4_;
        auVar103._0_4_ = fVar65 * fVar10 + auVar17._0_4_;
        fVar10 = auVar55._4_4_;
        auVar103._4_4_ = fVar10 * fVar29 + auVar17._4_4_;
        fVar29 = auVar55._8_4_;
        auVar103._8_4_ = fVar29 * fVar43 + auVar17._8_4_;
        fVar43 = auVar55._12_4_;
        auVar103._12_4_ = fVar43 * fVar47 + auVar17._12_4_;
        fVar47 = auVar55._16_4_;
        auVar103._16_4_ = fVar47 * fVar48 + auVar17._16_4_;
        fVar48 = auVar55._20_4_;
        auVar103._20_4_ = fVar48 * fVar49 + auVar17._20_4_;
        fVar49 = auVar55._24_4_;
        auVar103._24_4_ = fVar49 * fVar50 + auVar17._24_4_;
        fVar50 = auVar55._28_4_;
        auVar103._28_4_ = fVar50 * fVar51 + auVar17._28_4_;
        auVar124._0_4_ = fVar65 * fVar30 + auVar112._0_4_;
        auVar124._4_4_ = fVar10 * fVar134 + auVar112._4_4_;
        auVar124._8_4_ = fVar29 * fVar41 + auVar112._8_4_;
        auVar124._12_4_ = fVar43 * fVar101 + auVar112._12_4_;
        auVar124._16_4_ = fVar47 * fVar121 + auVar112._16_4_;
        auVar124._20_4_ = fVar48 * fVar11 + auVar112._20_4_;
        auVar124._24_4_ = fVar49 * fVar31 + auVar112._24_4_;
        auVar124._28_4_ = fVar50 * fVar42 + auVar112._28_4_;
        auVar137._0_4_ = fVar65 * fVar52 + auVar3._0_4_;
        auVar137._4_4_ = fVar10 * fVar53 + auVar3._4_4_;
        auVar137._8_4_ = fVar29 * fVar54 + auVar3._8_4_;
        auVar137._12_4_ = fVar43 * fVar58 + auVar3._12_4_;
        auVar137._16_4_ = fVar47 * fVar59 + auVar3._16_4_;
        auVar137._20_4_ = fVar48 * fVar60 + auVar3._20_4_;
        auVar137._24_4_ = fVar49 * fVar61 + auVar3._24_4_;
        auVar137._28_4_ = fVar50 * fVar62 + auVar3._28_4_;
        auVar38 = vmaskmovps_avx(auVar74,auVar103);
        auVar73 = vmaskmovps_avx(auVar74,auVar124);
        auVar168 = vmaskmovps_avx(auVar74,auVar137);
      }
      auVar12._16_16_ = auVar73._0_16_;
      auVar12._0_16_ = auVar38._0_16_;
      auVar55 = vshufpd_avx(auVar38,auVar12,2);
      auVar17 = vpermps_avx2(auVar18,auVar168);
      auVar74 = vpermpd_avx2(auVar73,0xe9);
      auVar74 = vblendps_avx(auVar17,auVar74,7);
      auVar44._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar44._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar17 = vpermps_avx2(auVar44,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar55);
      auVar55 = vblendps_avx(auVar55,auVar17,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar8 * 4) = auVar55;
      auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar74);
      auVar74 = vshufpd_avx(auVar38,auVar38,1);
      auVar74 = vblendps_avx(auVar55,auVar74,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar8 * 4) = auVar74;
      auVar13._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar13._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar55 = vpermps_avx2(auVar13,auVar73);
      auVar74 = vpermpd_avx2(auVar38,0xff);
      auVar74 = vblendps_avx(auVar55,auVar74,3);
      auVar74 = vblendps_avx(auVar74,auVar168,0xe0);
      auVar74 = vpermps_avx2(auVar33,auVar74);
      *(undefined1 (*) [32])(param_2 + lVar8 * 4) = auVar74;
      uVar7 = uVar7 + 0x20;
      lVar8 = lVar8 + 0x18;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)(uVar6 & 0xfffffff8));
  }
  if ((int)uVar9 < (int)param_11) {
    auVar18._4_4_ = uVar9;
    auVar18._0_4_ = uVar9;
    auVar18._8_4_ = uVar9;
    auVar18._12_4_ = uVar9;
    auVar18._16_4_ = uVar9;
    auVar18._20_4_ = uVar9;
    auVar18._24_4_ = uVar9;
    auVar18._28_4_ = uVar9;
    auVar18 = vpor_avx2(auVar18,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar35._4_4_ = param_11;
    auVar35._0_4_ = param_11;
    auVar35._8_4_ = param_11;
    auVar35._12_4_ = param_11;
    auVar35._16_4_ = param_11;
    auVar35._20_4_ = param_11;
    auVar35._24_4_ = param_11;
    auVar35._28_4_ = param_11;
    auVar18 = vpcmpgtd_avx2(auVar35,auVar18);
    uVar7 = (ulonglong)uVar9;
    pauVar1 = (undefined1 (*) [32])(param_3 + uVar7 * 0xc);
    uVar6 = vmovmskps_avx(auVar18);
    if (uVar6 == 0xff) {
      auVar74 = pauVar1[1];
      auVar55 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar74);
      auVar17 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar55 = vblendps_avx(auVar17,auVar55,0x88);
      auVar17 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar74);
      auVar38 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar17 = vblendps_avx(auVar38,auVar17,0x13);
      auVar19._16_16_ = auVar17._0_16_;
      auVar19._0_16_ = auVar55._0_16_;
      auVar55 = vperm2f128_avx(auVar55,auVar17,0x31);
      auVar74 = vblendps_avx(auVar74,*pauVar1,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar75._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar75._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar17 = vpermps_avx2(auVar75,pauVar1[2]);
      auVar74 = vblendps_avx(auVar74,auVar17,0xe0);
    }
    else {
      auVar19 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
      auVar55 = vgatherdps(ZEXT832(0),auVar18);
      auVar74 = vgatherdps(ZEXT832(0),auVar18);
    }
    pauVar4 = (undefined1 (*) [32])(param_1 + uVar7 * 0x10);
    cVar5 = (char)uVar6;
    fVar31 = param_8[8];
    fVar52 = fVar31 * auVar19._0_4_;
    fVar53 = fVar31 * auVar19._4_4_;
    fVar54 = fVar31 * auVar19._8_4_;
    fVar58 = fVar31 * auVar19._12_4_;
    fVar59 = fVar31 * auVar19._16_4_;
    fVar60 = fVar31 * auVar19._20_4_;
    fVar61 = fVar31 * auVar19._24_4_;
    fVar62 = fVar31 * auVar19._28_4_;
    fVar42 = param_8[9];
    fVar10 = fVar42 * auVar55._0_4_;
    fVar29 = fVar42 * auVar55._4_4_;
    fVar43 = fVar42 * auVar55._8_4_;
    fVar47 = fVar42 * auVar55._12_4_;
    fVar48 = fVar42 * auVar55._16_4_;
    fVar49 = fVar42 * auVar55._20_4_;
    fVar50 = fVar42 * auVar55._24_4_;
    fVar51 = fVar42 * auVar55._28_4_;
    fVar30 = param_8[10];
    fVar65 = auVar74._0_4_ * fVar30;
    fVar68 = auVar74._4_4_ * fVar30;
    fVar71 = auVar74._8_4_ * fVar30;
    fVar87 = auVar74._12_4_ * fVar30;
    fVar89 = auVar74._16_4_ * fVar30;
    fVar91 = auVar74._20_4_ * fVar30;
    fVar93 = auVar74._24_4_ * fVar30;
    fVar95 = auVar74._28_4_ * fVar30;
    fVar134 = param_8[3];
    fVar41 = param_8[1];
    fVar101 = param_8[2];
    fVar121 = *param_8;
    fVar97 = fVar10 * fVar121 - fVar52 * fVar41;
    fVar99 = fVar29 * fVar121 - fVar53 * fVar41;
    fVar109 = fVar43 * fVar121 - fVar54 * fVar41;
    fVar114 = fVar47 * fVar121 - fVar58 * fVar41;
    fVar115 = fVar48 * fVar121 - fVar59 * fVar41;
    fVar116 = fVar49 * fVar121 - fVar60 * fVar41;
    fVar117 = fVar50 * fVar121 - fVar61 * fVar41;
    fVar118 = fVar51 * fVar121 - fVar62 * fVar41;
    fVar119 = fVar65 * fVar41 - fVar10 * fVar101;
    fVar120 = fVar68 * fVar41 - fVar29 * fVar101;
    fVar135 = fVar71 * fVar41 - fVar43 * fVar101;
    fVar138 = fVar87 * fVar41 - fVar47 * fVar101;
    fVar139 = fVar89 * fVar41 - fVar48 * fVar101;
    fVar140 = fVar91 * fVar41 - fVar49 * fVar101;
    fVar141 = fVar93 * fVar41 - fVar50 * fVar101;
    fVar143 = fVar95 * fVar41 - fVar51 * fVar101;
    fVar144 = fVar52 * fVar101 - fVar65 * fVar121;
    fVar145 = fVar53 * fVar101 - fVar68 * fVar121;
    fVar149 = fVar54 * fVar101 - fVar71 * fVar121;
    fVar154 = fVar58 * fVar101 - fVar87 * fVar121;
    fVar156 = fVar59 * fVar101 - fVar89 * fVar121;
    fVar158 = fVar60 * fVar101 - fVar91 * fVar121;
    fVar160 = fVar61 * fVar101 - fVar93 * fVar121;
    fVar162 = fVar62 * fVar101 - fVar95 * fVar121;
    fVar119 = fVar119 + fVar119;
    fVar120 = fVar120 + fVar120;
    fVar135 = fVar135 + fVar135;
    fVar138 = fVar138 + fVar138;
    fVar139 = fVar139 + fVar139;
    fVar140 = fVar140 + fVar140;
    fVar141 = fVar141 + fVar141;
    fVar143 = fVar143 + fVar143;
    fVar144 = fVar144 + fVar144;
    fVar145 = fVar145 + fVar145;
    fVar149 = fVar149 + fVar149;
    fVar154 = fVar154 + fVar154;
    fVar156 = fVar156 + fVar156;
    fVar158 = fVar158 + fVar158;
    fVar160 = fVar160 + fVar160;
    fVar162 = fVar162 + fVar162;
    fVar97 = fVar97 + fVar97;
    fVar99 = fVar99 + fVar99;
    fVar109 = fVar109 + fVar109;
    fVar114 = fVar114 + fVar114;
    fVar115 = fVar115 + fVar115;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    fVar118 = fVar118 + fVar118;
    fVar11 = param_8[4];
    auVar36._0_4_ = fVar11 + (fVar41 * fVar97 - fVar144 * fVar101) + fVar134 * fVar119 + fVar52;
    auVar36._4_4_ = fVar11 + (fVar41 * fVar99 - fVar145 * fVar101) + fVar134 * fVar120 + fVar53;
    auVar36._8_4_ = fVar11 + (fVar41 * fVar109 - fVar149 * fVar101) + fVar134 * fVar135 + fVar54;
    auVar36._12_4_ = fVar11 + (fVar41 * fVar114 - fVar154 * fVar101) + fVar134 * fVar138 + fVar58;
    auVar36._16_4_ = fVar11 + (fVar41 * fVar115 - fVar156 * fVar101) + fVar134 * fVar139 + fVar59;
    auVar36._20_4_ = fVar11 + (fVar41 * fVar116 - fVar158 * fVar101) + fVar134 * fVar140 + fVar60;
    auVar36._24_4_ = fVar11 + (fVar41 * fVar117 - fVar160 * fVar101) + fVar134 * fVar141 + fVar61;
    auVar36._28_4_ = fVar11 + (fVar41 * fVar118 - fVar162 * fVar101) + fVar134 * fVar143 + fVar62;
    fVar11 = param_8[5];
    auVar20._0_4_ = fVar11 + fVar134 * fVar144 + fVar10 + (fVar101 * fVar119 - fVar121 * fVar97);
    auVar20._4_4_ = fVar11 + fVar134 * fVar145 + fVar29 + (fVar101 * fVar120 - fVar121 * fVar99);
    auVar20._8_4_ = fVar11 + fVar134 * fVar149 + fVar43 + (fVar101 * fVar135 - fVar121 * fVar109);
    auVar20._12_4_ = fVar11 + fVar134 * fVar154 + fVar47 + (fVar101 * fVar138 - fVar121 * fVar114);
    auVar20._16_4_ = fVar11 + fVar134 * fVar156 + fVar48 + (fVar101 * fVar139 - fVar121 * fVar115);
    auVar20._20_4_ = fVar11 + fVar134 * fVar158 + fVar49 + (fVar101 * fVar140 - fVar121 * fVar116);
    auVar20._24_4_ = fVar11 + fVar134 * fVar160 + fVar50 + (fVar101 * fVar141 - fVar121 * fVar117);
    auVar20._28_4_ = fVar11 + fVar134 * fVar162 + fVar51 + (fVar101 * fVar143 - fVar121 * fVar118);
    fVar11 = param_8[6];
    auVar104._0_4_ = fVar11 + (fVar121 * fVar144 - fVar119 * fVar41) + fVar134 * fVar97 + fVar65;
    auVar104._4_4_ = fVar11 + (fVar121 * fVar145 - fVar120 * fVar41) + fVar134 * fVar99 + fVar68;
    auVar104._8_4_ = fVar11 + (fVar121 * fVar149 - fVar135 * fVar41) + fVar134 * fVar109 + fVar71;
    auVar104._12_4_ = fVar11 + (fVar121 * fVar154 - fVar138 * fVar41) + fVar134 * fVar114 + fVar87;
    auVar104._16_4_ = fVar11 + (fVar121 * fVar156 - fVar139 * fVar41) + fVar134 * fVar115 + fVar89;
    auVar104._20_4_ = fVar11 + (fVar121 * fVar158 - fVar140 * fVar41) + fVar134 * fVar116 + fVar91;
    auVar104._24_4_ = fVar11 + (fVar121 * fVar160 - fVar141 * fVar41) + fVar134 * fVar117 + fVar93;
    auVar104._28_4_ = fVar11 + (fVar121 * fVar162 - fVar143 * fVar41) + fVar134 * fVar118 + fVar95;
    uVar2 = *param_9;
    auVar125._4_4_ = uVar2;
    auVar125._0_4_ = uVar2;
    auVar125._8_4_ = uVar2;
    auVar125._12_4_ = uVar2;
    auVar125._16_4_ = uVar2;
    auVar125._20_4_ = uVar2;
    auVar125._24_4_ = uVar2;
    auVar125._28_4_ = uVar2;
    auVar74 = vsubps_avx(auVar36,auVar125);
    uVar2 = param_9[1];
    auVar37._4_4_ = uVar2;
    auVar37._0_4_ = uVar2;
    auVar37._8_4_ = uVar2;
    auVar37._12_4_ = uVar2;
    auVar37._16_4_ = uVar2;
    auVar37._20_4_ = uVar2;
    auVar37._24_4_ = uVar2;
    auVar37._28_4_ = uVar2;
    auVar55 = vsubps_avx(auVar20,auVar37);
    uVar2 = param_9[2];
    auVar21._4_4_ = uVar2;
    auVar21._0_4_ = uVar2;
    auVar21._8_4_ = uVar2;
    auVar21._12_4_ = uVar2;
    auVar21._16_4_ = uVar2;
    auVar21._20_4_ = uVar2;
    auVar21._24_4_ = uVar2;
    auVar21._28_4_ = uVar2;
    auVar17 = vsubps_avx(auVar104,auVar21);
    auVar38 = vmaskmovps_avx(auVar18,*(undefined1 (*) [32])(param_6 + (int)(uVar9 << 2)));
    auVar136 = auVar74._0_16_;
    auVar142 = auVar74._16_16_;
    auVar123 = auVar55._0_16_;
    if (cVar5 == -1) {
      auVar73 = vunpcklps_avx(auVar74,auVar55);
      auVar168 = vunpcklps_avx(auVar17,auVar38);
      auVar112 = vunpcklpd_avx(auVar73,auVar168);
      auVar73 = vunpckhpd_avx(auVar73,auVar168);
      auVar168 = vunpckhps_avx(auVar74,auVar55);
      auVar38 = vunpckhps_avx(auVar17,auVar38);
      auVar111._16_16_ = auVar73._0_16_;
      auVar111._0_16_ = auVar112._0_16_;
      *pauVar4 = auVar111;
      auVar3 = vunpcklpd_avx(auVar168,auVar38);
      auVar38 = vunpckhpd_avx(auVar168,auVar38);
      auVar76._16_16_ = auVar38._0_16_;
      auVar76._0_16_ = auVar3._0_16_;
      pauVar4[1] = auVar76;
      auVar73 = vperm2f128_avx(auVar112,auVar73,0x31);
      pauVar4[2] = auVar73;
      auVar38 = vperm2f128_avx(auVar3,auVar38,0x31);
      pauVar4[3] = auVar38;
      auVar23._16_16_ = auVar123;
      auVar23._0_16_ = auVar136;
      auVar73 = vshufpd_avx(auVar74,auVar23,2);
      auVar168 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar17);
      auVar38 = vpermpd_avx2(auVar55,0xe9);
      auVar38 = vblendps_avx(auVar168,auVar38,7);
      auVar56._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar56._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar168 = vpermps_avx2(auVar56,auVar38);
      auVar73 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar73);
      auVar73 = vblendps_avx(auVar73,auVar168,0xa4);
      *pauVar1 = auVar73;
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar38);
      auVar38 = vshufpd_avx(auVar74,auVar74,1);
      auVar38 = vblendps_avx(auVar73,auVar38,0x92);
      pauVar1[1] = auVar38;
      auVar24._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar24._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar55 = vpermps_avx2(auVar24,auVar55);
      auVar74 = vpermpd_avx2(auVar74,0xff);
      auVar74 = vblendps_avx(auVar55,auVar74,3);
      auVar74 = vblendps_avx(auVar74,auVar17,0xe0);
      auVar74 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar74);
      pauVar1[2] = auVar74;
      auVar74 = *(undefined1 (*) [32])(param_2 + uVar7 * 0xc);
      auVar55 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc);
      auVar17 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc);
      auVar38 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar55);
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar74);
      auVar38 = vblendps_avx(auVar73,auVar38,0x88);
      auVar73 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar55);
      auVar168 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar17);
      auVar73 = vblendps_avx(auVar168,auVar73,0x13);
      auVar22._16_16_ = auVar73._0_16_;
      auVar22._0_16_ = auVar38._0_16_;
      auVar38 = vperm2f128_avx(auVar38,auVar73,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar77._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar77._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar55 = vpermps_avx2(auVar77,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      fVar41 = param_8[1];
      fVar134 = param_8[3];
      fVar31 = param_8[8];
      fVar42 = param_8[9];
      fVar30 = param_8[10];
      fVar121 = *param_8;
      fVar101 = param_8[2];
    }
    else {
      auVar131 = auVar55._16_16_;
      auVar102 = auVar17._0_16_;
      auVar108 = auVar17._16_16_;
      auVar178 = auVar38._0_16_;
      auVar179 = auVar38._16_16_;
      if ((uVar6 & 1) != 0) {
        *(int *)*pauVar4 = auVar74._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(*pauVar4 + 0x10) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)pauVar4[1] = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(pauVar4[1] + 0x10) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)pauVar4[2] = auVar74._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(pauVar4[2] + 0x10) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)pauVar4[3] = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(pauVar4[3] + 0x10) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar4 + 4) = auVar55._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(*pauVar4 + 0x14) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(pauVar4[1] + 4) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(pauVar4[1] + 0x14) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 4) = auVar55._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)(pauVar4[2] + 0x14) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(pauVar4[3] + 4) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(pauVar4[3] + 0x14) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar4 + 8) = auVar17._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)(*pauVar4 + 0x18) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)(pauVar4[1] + 8) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(pauVar4[1] + 0x18) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 8) = auVar17._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(pauVar4[2] + 0x18) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)(pauVar4[3] + 8) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(pauVar4[3] + 0x18) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar4 + 0xc) = auVar38._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar178,1);
        *(undefined4 *)(*pauVar4 + 0x1c) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar178,2);
        *(undefined4 *)(pauVar4[1] + 0xc) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar178,3);
        *(undefined4 *)(pauVar4[1] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 0xc) = auVar38._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar179,1);
        *(undefined4 *)(pauVar4[2] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar179,2);
        *(undefined4 *)(pauVar4[3] + 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar179,3);
        *(undefined4 *)(pauVar4[3] + 0x1c) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)*pauVar1 = auVar74._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x10) = auVar74._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar1 + 4) = auVar55._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x14) = auVar55._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar1 + 8) = auVar17._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x18) = auVar17._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
      auVar22 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar74 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
    }
    fVar11 = fVar31 * auVar22._0_4_;
    fVar10 = fVar31 * auVar22._4_4_;
    fVar29 = fVar31 * auVar22._8_4_;
    fVar43 = fVar31 * auVar22._12_4_;
    fVar47 = fVar31 * auVar22._16_4_;
    fVar48 = fVar31 * auVar22._20_4_;
    fVar49 = fVar31 * auVar22._24_4_;
    fVar50 = fVar31 * auVar22._28_4_;
    fVar51 = fVar42 * auVar38._0_4_;
    fVar52 = fVar42 * auVar38._4_4_;
    fVar53 = fVar42 * auVar38._8_4_;
    fVar54 = fVar42 * auVar38._12_4_;
    fVar58 = fVar42 * auVar38._16_4_;
    fVar59 = fVar42 * auVar38._20_4_;
    fVar60 = fVar42 * auVar38._24_4_;
    fVar61 = fVar42 * auVar38._28_4_;
    fVar62 = fVar30 * auVar74._0_4_;
    fVar65 = fVar30 * auVar74._4_4_;
    fVar68 = fVar30 * auVar74._8_4_;
    fVar71 = fVar30 * auVar74._12_4_;
    fVar87 = fVar30 * auVar74._16_4_;
    fVar89 = fVar30 * auVar74._20_4_;
    fVar91 = fVar30 * auVar74._24_4_;
    fVar93 = fVar30 * auVar74._28_4_;
    fVar95 = fVar51 * fVar121 - fVar11 * fVar41;
    fVar97 = fVar52 * fVar121 - fVar10 * fVar41;
    fVar99 = fVar53 * fVar121 - fVar29 * fVar41;
    fVar109 = fVar54 * fVar121 - fVar43 * fVar41;
    fVar114 = fVar58 * fVar121 - fVar47 * fVar41;
    fVar115 = fVar59 * fVar121 - fVar48 * fVar41;
    fVar116 = fVar60 * fVar121 - fVar49 * fVar41;
    fVar117 = fVar61 * fVar121 - fVar50 * fVar41;
    fVar118 = fVar62 * fVar41 - fVar51 * fVar101;
    fVar119 = fVar65 * fVar41 - fVar52 * fVar101;
    fVar120 = fVar68 * fVar41 - fVar53 * fVar101;
    fVar135 = fVar71 * fVar41 - fVar54 * fVar101;
    fVar138 = fVar87 * fVar41 - fVar58 * fVar101;
    fVar139 = fVar89 * fVar41 - fVar59 * fVar101;
    fVar140 = fVar91 * fVar41 - fVar60 * fVar101;
    fVar141 = fVar93 * fVar41 - fVar61 * fVar101;
    fVar143 = fVar11 * fVar101 - fVar62 * fVar121;
    fVar144 = fVar10 * fVar101 - fVar65 * fVar121;
    fVar145 = fVar29 * fVar101 - fVar68 * fVar121;
    fVar149 = fVar43 * fVar101 - fVar71 * fVar121;
    fVar154 = fVar47 * fVar101 - fVar87 * fVar121;
    fVar156 = fVar48 * fVar101 - fVar89 * fVar121;
    fVar158 = fVar49 * fVar101 - fVar91 * fVar121;
    fVar160 = fVar50 * fVar101 - fVar93 * fVar121;
    fVar118 = fVar118 + fVar118;
    fVar119 = fVar119 + fVar119;
    fVar120 = fVar120 + fVar120;
    fVar135 = fVar135 + fVar135;
    fVar138 = fVar138 + fVar138;
    fVar139 = fVar139 + fVar139;
    fVar140 = fVar140 + fVar140;
    fVar141 = fVar141 + fVar141;
    fVar143 = fVar143 + fVar143;
    fVar144 = fVar144 + fVar144;
    fVar145 = fVar145 + fVar145;
    fVar149 = fVar149 + fVar149;
    fVar154 = fVar154 + fVar154;
    fVar156 = fVar156 + fVar156;
    fVar158 = fVar158 + fVar158;
    fVar160 = fVar160 + fVar160;
    fVar95 = fVar95 + fVar95;
    fVar97 = fVar97 + fVar97;
    fVar99 = fVar99 + fVar99;
    fVar109 = fVar109 + fVar109;
    fVar114 = fVar114 + fVar114;
    fVar115 = fVar115 + fVar115;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    local_2c0._0_4_ = fVar95 * fVar134 + fVar62 + (fVar121 * fVar143 - fVar118 * fVar41);
    local_2c0._4_4_ = fVar97 * fVar134 + fVar65 + (fVar121 * fVar144 - fVar119 * fVar41);
    local_2c0._8_4_ = fVar99 * fVar134 + fVar68 + (fVar121 * fVar145 - fVar120 * fVar41);
    local_2c0._12_4_ = fVar109 * fVar134 + fVar71 + (fVar121 * fVar149 - fVar135 * fVar41);
    local_2c0._16_4_ = fVar114 * fVar134 + fVar87 + (fVar121 * fVar154 - fVar138 * fVar41);
    local_2c0._20_4_ = fVar115 * fVar134 + fVar89 + (fVar121 * fVar156 - fVar139 * fVar41);
    local_2c0._24_4_ = fVar116 * fVar134 + fVar91 + (fVar121 * fVar158 - fVar140 * fVar41);
    local_2c0._28_4_ = fVar117 * fVar134 + fVar93 + (fVar121 * fVar160 - fVar141 * fVar41);
    local_300._0_4_ = (fVar41 * fVar95 - fVar143 * fVar101) + fVar134 * fVar118 + fVar11;
    local_300._4_4_ = (fVar41 * fVar97 - fVar144 * fVar101) + fVar134 * fVar119 + fVar10;
    local_300._8_4_ = (fVar41 * fVar99 - fVar145 * fVar101) + fVar134 * fVar120 + fVar29;
    local_300._12_4_ = (fVar41 * fVar109 - fVar149 * fVar101) + fVar134 * fVar135 + fVar43;
    local_300._16_4_ = (fVar41 * fVar114 - fVar154 * fVar101) + fVar134 * fVar138 + fVar47;
    local_300._20_4_ = (fVar41 * fVar115 - fVar156 * fVar101) + fVar134 * fVar139 + fVar48;
    local_300._24_4_ = (fVar41 * fVar116 - fVar158 * fVar101) + fVar134 * fVar140 + fVar49;
    local_300._28_4_ = (fVar41 * fVar117 - fVar160 * fVar101) + fVar134 * fVar141 + fVar50;
    local_2e0._0_4_ = (fVar101 * fVar118 - fVar121 * fVar95) + fVar134 * fVar143 + fVar51;
    local_2e0._4_4_ = (fVar101 * fVar119 - fVar121 * fVar97) + fVar134 * fVar144 + fVar52;
    local_2e0._8_4_ = (fVar101 * fVar120 - fVar121 * fVar99) + fVar134 * fVar145 + fVar53;
    local_2e0._12_4_ = (fVar101 * fVar135 - fVar121 * fVar109) + fVar134 * fVar149 + fVar54;
    local_2e0._16_4_ = (fVar101 * fVar138 - fVar121 * fVar114) + fVar134 * fVar154 + fVar58;
    local_2e0._20_4_ = (fVar101 * fVar139 - fVar121 * fVar115) + fVar134 * fVar156 + fVar59;
    local_2e0._24_4_ = (fVar101 * fVar140 - fVar121 * fVar116) + fVar134 * fVar158 + fVar60;
    local_2e0._28_4_ = (fVar101 * fVar141 - fVar121 * fVar117) + fVar134 * fVar160 + fVar61;
    pauVar4 = (undefined1 (*) [32])(param_2 + uVar7 * 0xc);
    pauVar1 = (undefined1 (*) [32])(param_4 + uVar7 * 0xc);
    if (cVar5 == -1) {
      auVar74 = pauVar1[1];
      auVar55 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar74);
      auVar17 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar55 = vblendps_avx(auVar17,auVar55,0x88);
      auVar17 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar74);
      auVar38 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar17 = vblendps_avx(auVar38,auVar17,0x13);
      auVar25._16_16_ = auVar17._0_16_;
      auVar25._0_16_ = auVar55._0_16_;
      auVar55 = vperm2f128_avx(auVar55,auVar17,0x31);
      auVar74 = vblendps_avx(auVar74,*pauVar1,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar78._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar78._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar17 = vpermps_avx2(auVar78,pauVar1[2]);
      auVar74 = vblendps_avx(auVar74,auVar17,0xe0);
      fVar134 = param_8[3];
      fVar41 = param_8[1];
      fVar31 = param_8[8];
      fVar42 = param_8[9];
      fVar30 = param_8[10];
      fVar101 = param_8[2];
      fVar121 = *param_8;
    }
    else {
      auVar25 = vgatherdps(ZEXT432(0) << 0x20,auVar18);
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar74 = vgatherdps(ZEXT832(0),auVar18);
    }
    fVar61 = auVar74._0_4_ * fVar30;
    fVar62 = auVar74._4_4_ * fVar30;
    fVar65 = auVar74._8_4_ * fVar30;
    fVar68 = auVar74._12_4_ * fVar30;
    fVar71 = auVar74._16_4_ * fVar30;
    fVar87 = auVar74._20_4_ * fVar30;
    fVar89 = auVar74._24_4_ * fVar30;
    fVar30 = auVar74._28_4_ * fVar30;
    fVar51 = fVar42 * auVar55._0_4_;
    fVar52 = fVar42 * auVar55._4_4_;
    fVar53 = fVar42 * auVar55._8_4_;
    fVar54 = fVar42 * auVar55._12_4_;
    fVar58 = fVar42 * auVar55._16_4_;
    fVar59 = fVar42 * auVar55._20_4_;
    fVar60 = fVar42 * auVar55._24_4_;
    fVar42 = fVar42 * auVar55._28_4_;
    fVar10 = fVar31 * auVar25._0_4_;
    fVar29 = fVar31 * auVar25._4_4_;
    fVar43 = fVar31 * auVar25._8_4_;
    fVar47 = fVar31 * auVar25._12_4_;
    fVar48 = fVar31 * auVar25._16_4_;
    fVar49 = fVar31 * auVar25._20_4_;
    fVar50 = fVar31 * auVar25._24_4_;
    fVar31 = fVar31 * auVar25._28_4_;
    fVar91 = fVar51 * fVar121 - fVar41 * fVar10;
    fVar93 = fVar52 * fVar121 - fVar41 * fVar29;
    fVar95 = fVar53 * fVar121 - fVar41 * fVar43;
    fVar97 = fVar54 * fVar121 - fVar41 * fVar47;
    fVar99 = fVar58 * fVar121 - fVar41 * fVar48;
    fVar109 = fVar59 * fVar121 - fVar41 * fVar49;
    fVar114 = fVar60 * fVar121 - fVar41 * fVar50;
    fVar115 = fVar42 * fVar121 - fVar41 * fVar31;
    fVar116 = fVar61 * fVar41 - fVar51 * fVar101;
    fVar117 = fVar62 * fVar41 - fVar52 * fVar101;
    fVar118 = fVar65 * fVar41 - fVar53 * fVar101;
    fVar119 = fVar68 * fVar41 - fVar54 * fVar101;
    fVar120 = fVar71 * fVar41 - fVar58 * fVar101;
    fVar135 = fVar87 * fVar41 - fVar59 * fVar101;
    fVar138 = fVar89 * fVar41 - fVar60 * fVar101;
    fVar139 = fVar30 * fVar41 - fVar42 * fVar101;
    fVar140 = fVar10 * fVar101 - fVar61 * fVar121;
    fVar141 = fVar29 * fVar101 - fVar62 * fVar121;
    fVar143 = fVar43 * fVar101 - fVar65 * fVar121;
    fVar144 = fVar47 * fVar101 - fVar68 * fVar121;
    fVar145 = fVar48 * fVar101 - fVar71 * fVar121;
    fVar149 = fVar49 * fVar101 - fVar87 * fVar121;
    fVar154 = fVar50 * fVar101 - fVar89 * fVar121;
    fVar156 = fVar31 * fVar101 - fVar30 * fVar121;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    fVar118 = fVar118 + fVar118;
    fVar119 = fVar119 + fVar119;
    fVar120 = fVar120 + fVar120;
    fVar135 = fVar135 + fVar135;
    fVar138 = fVar138 + fVar138;
    fVar139 = fVar139 + fVar139;
    fVar140 = fVar140 + fVar140;
    fVar141 = fVar141 + fVar141;
    fVar143 = fVar143 + fVar143;
    fVar144 = fVar144 + fVar144;
    fVar145 = fVar145 + fVar145;
    fVar149 = fVar149 + fVar149;
    fVar154 = fVar154 + fVar154;
    fVar156 = fVar156 + fVar156;
    fVar91 = fVar91 + fVar91;
    fVar93 = fVar93 + fVar93;
    fVar95 = fVar95 + fVar95;
    fVar97 = fVar97 + fVar97;
    fVar99 = fVar99 + fVar99;
    fVar109 = fVar109 + fVar109;
    fVar114 = fVar114 + fVar114;
    fVar115 = fVar115 + fVar115;
    fVar11 = param_8[4];
    auVar26._0_4_ = fVar11 + (fVar41 * fVar91 - fVar140 * fVar101) + fVar134 * fVar116 + fVar10;
    auVar26._4_4_ = fVar11 + (fVar41 * fVar93 - fVar141 * fVar101) + fVar134 * fVar117 + fVar29;
    auVar26._8_4_ = fVar11 + (fVar41 * fVar95 - fVar143 * fVar101) + fVar134 * fVar118 + fVar43;
    auVar26._12_4_ = fVar11 + (fVar41 * fVar97 - fVar144 * fVar101) + fVar134 * fVar119 + fVar47;
    auVar26._16_4_ = fVar11 + (fVar41 * fVar99 - fVar145 * fVar101) + fVar134 * fVar120 + fVar48;
    auVar26._20_4_ = fVar11 + (fVar41 * fVar109 - fVar149 * fVar101) + fVar134 * fVar135 + fVar49;
    auVar26._24_4_ = fVar11 + (fVar41 * fVar114 - fVar154 * fVar101) + fVar134 * fVar138 + fVar50;
    auVar26._28_4_ = fVar11 + (fVar41 * fVar115 - fVar156 * fVar101) + fVar134 * fVar139 + fVar31;
    fVar11 = param_8[5];
    auVar39._0_4_ = fVar11 + (fVar101 * fVar116 - fVar91 * fVar121) + fVar134 * fVar140 + fVar51;
    auVar39._4_4_ = fVar11 + (fVar101 * fVar117 - fVar93 * fVar121) + fVar134 * fVar141 + fVar52;
    auVar39._8_4_ = fVar11 + (fVar101 * fVar118 - fVar95 * fVar121) + fVar134 * fVar143 + fVar53;
    auVar39._12_4_ = fVar11 + (fVar101 * fVar119 - fVar97 * fVar121) + fVar134 * fVar144 + fVar54;
    auVar39._16_4_ = fVar11 + (fVar101 * fVar120 - fVar99 * fVar121) + fVar134 * fVar145 + fVar58;
    auVar39._20_4_ = fVar11 + (fVar101 * fVar135 - fVar109 * fVar121) + fVar134 * fVar149 + fVar59;
    auVar39._24_4_ = fVar11 + (fVar101 * fVar138 - fVar114 * fVar121) + fVar134 * fVar154 + fVar60;
    auVar39._28_4_ = fVar11 + (fVar101 * fVar139 - fVar115 * fVar121) + fVar134 * fVar156 + fVar42;
    fVar101 = param_8[6];
    auVar79._0_4_ = fVar101 + fVar91 * fVar134 + fVar61 + (fVar121 * fVar140 - fVar41 * fVar116);
    auVar79._4_4_ = fVar101 + fVar93 * fVar134 + fVar62 + (fVar121 * fVar141 - fVar41 * fVar117);
    auVar79._8_4_ = fVar101 + fVar95 * fVar134 + fVar65 + (fVar121 * fVar143 - fVar41 * fVar118);
    auVar79._12_4_ = fVar101 + fVar97 * fVar134 + fVar68 + (fVar121 * fVar144 - fVar41 * fVar119);
    auVar79._16_4_ = fVar101 + fVar99 * fVar134 + fVar71 + (fVar121 * fVar145 - fVar41 * fVar120);
    auVar79._20_4_ = fVar101 + fVar109 * fVar134 + fVar87 + (fVar121 * fVar149 - fVar41 * fVar135);
    auVar79._24_4_ = fVar101 + fVar114 * fVar134 + fVar89 + (fVar121 * fVar154 - fVar41 * fVar138);
    auVar79._28_4_ = fVar101 + fVar115 * fVar134 + fVar30 + (fVar121 * fVar156 - fVar41 * fVar139);
    uVar2 = *param_9;
    auVar57._4_4_ = uVar2;
    auVar57._0_4_ = uVar2;
    auVar57._8_4_ = uVar2;
    auVar57._12_4_ = uVar2;
    auVar57._16_4_ = uVar2;
    auVar57._20_4_ = uVar2;
    auVar57._24_4_ = uVar2;
    auVar57._28_4_ = uVar2;
    auVar74 = vsubps_avx(auVar26,auVar57);
    uVar2 = param_9[1];
    auVar27._4_4_ = uVar2;
    auVar27._0_4_ = uVar2;
    auVar27._8_4_ = uVar2;
    auVar27._12_4_ = uVar2;
    auVar27._16_4_ = uVar2;
    auVar27._20_4_ = uVar2;
    auVar27._24_4_ = uVar2;
    auVar27._28_4_ = uVar2;
    auVar55 = vsubps_avx(auVar39,auVar27);
    uVar2 = param_9[2];
    auVar40._4_4_ = uVar2;
    auVar40._0_4_ = uVar2;
    auVar40._8_4_ = uVar2;
    auVar40._12_4_ = uVar2;
    auVar40._16_4_ = uVar2;
    auVar40._20_4_ = uVar2;
    auVar40._24_4_ = uVar2;
    auVar40._28_4_ = uVar2;
    auVar17 = vsubps_avx(auVar79,auVar40);
    auVar136 = auVar74._0_16_;
    auVar142 = auVar74._16_16_;
    auVar123 = auVar55._0_16_;
    if (cVar5 == -1) {
      auVar81._16_16_ = auVar123;
      auVar81._0_16_ = auVar136;
      auVar73 = vshufpd_avx(auVar74,auVar81,2);
      auVar168 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar17);
      auVar38 = vpermpd_avx2(auVar55,0xe9);
      auVar38 = vblendps_avx(auVar168,auVar38,7);
      auVar146._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar146._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar168 = vpermps_avx2(auVar146,auVar38);
      auVar73 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar73);
      auVar73 = vblendps_avx(auVar73,auVar168,0xa4);
      *pauVar1 = auVar73;
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar38);
      auVar38 = vshufpd_avx(auVar74,auVar74,1);
      auVar38 = vblendps_avx(auVar73,auVar38,0x92);
      pauVar1[1] = auVar38;
      auVar82._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar82._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar73 = vpermps_avx2(auVar82,auVar55);
      auVar38 = vpermpd_avx2(auVar74,0xff);
      auVar38 = vblendps_avx(auVar73,auVar38,3);
      auVar38 = vblendps_avx(auVar38,auVar17,0xe0);
      auVar38 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar38);
      pauVar1[2] = auVar38;
      auVar38 = *(undefined1 (*) [32])(param_7 + uVar7 * 0xc);
      auVar73 = *(undefined1 (*) [32])(param_7 + 0x20 + uVar7 * 0xc);
      auVar168 = *(undefined1 (*) [32])(param_7 + 0x40 + uVar7 * 0xc);
      auVar112 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                              ,auVar73);
      auVar3 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar38);
      auVar112 = vblendps_avx(auVar3,auVar112,0x88);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar73);
      auVar14 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar168);
      auVar3 = vblendps_avx(auVar14,auVar3,0x13);
      auVar80._16_16_ = auVar3._0_16_;
      auVar80._0_16_ = auVar112._0_16_;
      auVar112 = vperm2f128_avx(auVar112,auVar3,0x31);
      auVar38 = vblendps_avx(auVar73,auVar38,0x24);
      auVar38 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar38);
      auVar153._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar153._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar73 = vpermps_avx2(auVar153,auVar168);
      auVar38 = vblendps_avx(auVar38,auVar73,0xe0);
    }
    else {
      auVar102 = auVar55._16_16_;
      auVar108 = auVar17._0_16_;
      auVar131 = auVar17._16_16_;
      if ((uVar6 & 1) != 0) {
        *(int *)*pauVar1 = auVar74._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x10) = auVar74._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar1 + 4) = auVar55._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x14) = auVar55._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar1 + 8) = auVar17._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x18) = auVar17._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
    }
    auVar74 = vsubps_avx(auVar80,auVar74);
    auVar83._4_4_ = param_10;
    auVar83._0_4_ = param_10;
    auVar83._8_4_ = param_10;
    auVar83._12_4_ = param_10;
    auVar83._16_4_ = param_10;
    auVar83._20_4_ = param_10;
    auVar83._24_4_ = param_10;
    auVar83._28_4_ = param_10;
    auVar74 = vdivps_avx(auVar74,auVar83);
    auVar55 = vsubps_avx(auVar112,auVar55);
    auVar55 = vdivps_avx(auVar55,auVar83);
    auVar17 = vsubps_avx(auVar38,auVar17);
    auVar17 = vdivps_avx(auVar17,auVar83);
    pauVar1 = (undefined1 (*) [32])(param_5 + uVar7 * 0xc);
    auVar136 = auVar74._0_16_;
    auVar142 = auVar74._16_16_;
    auVar123 = auVar55._0_16_;
    if (cVar5 == -1) {
      auVar84._16_16_ = auVar123;
      auVar84._0_16_ = auVar136;
      auVar73 = vshufpd_avx(auVar74,auVar84,2);
      auVar168 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar17);
      auVar38 = vpermpd_avx2(auVar55,0xe9);
      auVar38 = vblendps_avx(auVar168,auVar38,7);
      auVar147._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar147._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar168 = vpermps_avx2(auVar147,auVar38);
      auVar73 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar73);
      auVar73 = vblendps_avx(auVar73,auVar168,0xa4);
      *pauVar1 = auVar73;
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar38);
      auVar38 = vshufpd_avx(auVar74,auVar74,1);
      auVar38 = vblendps_avx(auVar73,auVar38,0x92);
      pauVar1[1] = auVar38;
      auVar85._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar85._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar73 = vpermps_avx2(auVar85,auVar55);
      auVar38 = vpermpd_avx2(auVar74,0xff);
      auVar38 = vblendps_avx(auVar73,auVar38,3);
      auVar38 = vblendps_avx(auVar38,auVar17,0xe0);
      auVar38 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar38);
      pauVar1[2] = auVar38;
    }
    else {
      auVar102 = auVar55._16_16_;
      auVar108 = auVar17._0_16_;
      auVar131 = auVar17._16_16_;
      if ((uVar6 & 1) != 0) {
        *(float *)*pauVar1 = auVar74._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x10) = auVar74._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(float *)(*pauVar1 + 4) = auVar55._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x14) = auVar55._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(float *)(*pauVar1 + 8) = auVar17._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x18) = auVar17._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
    }
    auVar38 = vsubps_avx(local_300,auVar74);
    auVar73 = vsubps_avx(local_2e0,auVar55);
    auVar168 = vsubps_avx(local_2c0,auVar17);
    fVar30 = auVar73._0_4_;
    fVar134 = auVar73._4_4_;
    fVar41 = auVar73._8_4_;
    fVar101 = auVar73._12_4_;
    fVar121 = auVar73._16_4_;
    fVar11 = auVar73._20_4_;
    fVar31 = auVar73._24_4_;
    fVar42 = auVar73._28_4_;
    fVar10 = auVar38._0_4_;
    fVar29 = auVar38._4_4_;
    fVar43 = auVar38._8_4_;
    fVar47 = auVar38._12_4_;
    fVar48 = auVar38._16_4_;
    fVar49 = auVar38._20_4_;
    fVar50 = auVar38._24_4_;
    fVar51 = auVar38._28_4_;
    fVar52 = auVar168._0_4_;
    auVar126._0_4_ = fVar52 * fVar52 + fVar10 * fVar10 + fVar30 * fVar30;
    fVar53 = auVar168._4_4_;
    auVar126._4_4_ = fVar53 * fVar53 + fVar29 * fVar29 + fVar134 * fVar134;
    fVar54 = auVar168._8_4_;
    auVar126._8_4_ = fVar54 * fVar54 + fVar43 * fVar43 + fVar41 * fVar41;
    fVar58 = auVar168._12_4_;
    auVar126._12_4_ = fVar58 * fVar58 + fVar47 * fVar47 + fVar101 * fVar101;
    fVar59 = auVar168._16_4_;
    auVar126._16_4_ = fVar59 * fVar59 + fVar48 * fVar48 + fVar121 * fVar121;
    fVar60 = auVar168._20_4_;
    auVar126._20_4_ = fVar60 * fVar60 + fVar49 * fVar49 + fVar11 * fVar11;
    fVar61 = auVar168._24_4_;
    auVar126._24_4_ = fVar61 * fVar61 + fVar50 * fVar50 + fVar31 * fVar31;
    fVar62 = auVar168._28_4_;
    auVar126._28_4_ = fVar62 * fVar62 + fVar51 * fVar51 + fVar42 * fVar42;
    auVar148._4_4_ = param_12;
    auVar148._0_4_ = param_12;
    auVar148._8_4_ = param_12;
    auVar148._12_4_ = param_12;
    auVar148._16_4_ = param_12;
    auVar148._20_4_ = param_12;
    auVar148._24_4_ = param_12;
    auVar148._28_4_ = param_12;
    auVar38 = vcmpps_avx(auVar148,auVar126,1);
    auVar73 = auVar18 & auVar38;
    if ((((((((SUB321(auVar73 >> 0x1f,0) & 1) != 0 || (SUB321(auVar73 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar73 >> 0x5f,0) & 1) != 0) || SUB321(auVar73 >> 0x7f,0) != '\0') ||
          (SUB321(auVar73 >> 0x9f,0) & 1) != 0) || SUB321(auVar73 >> 0xbf,0) != '\0') ||
        (SUB321(auVar73 >> 0xdf,0) & 1) != 0) || auVar73[0x1f] < '\0') {
      auVar73 = vdivps_avx(auVar148,auVar126);
      auVar73 = vsqrtps_avx(auVar73);
      auVar46._0_4_ = auVar38._0_4_ & auVar18._0_4_;
      auVar46._4_4_ = auVar38._4_4_ & auVar18._4_4_;
      auVar46._8_4_ = auVar38._8_4_ & auVar18._8_4_;
      auVar46._12_4_ = auVar38._12_4_ & auVar18._12_4_;
      auVar46._16_4_ = auVar38._16_4_ & auVar18._16_4_;
      auVar46._20_4_ = auVar38._20_4_ & auVar18._20_4_;
      auVar46._24_4_ = auVar38._24_4_ & auVar18._24_4_;
      auVar46._28_4_ = auVar38._28_4_ & auVar18._28_4_;
      fVar65 = auVar73._0_4_;
      auVar86._0_4_ = fVar65 * fVar10 + auVar74._0_4_;
      fVar10 = auVar73._4_4_;
      auVar86._4_4_ = fVar10 * fVar29 + auVar74._4_4_;
      fVar29 = auVar73._8_4_;
      auVar86._8_4_ = fVar29 * fVar43 + auVar74._8_4_;
      fVar43 = auVar73._12_4_;
      auVar86._12_4_ = fVar43 * fVar47 + auVar74._12_4_;
      fVar47 = auVar73._16_4_;
      auVar86._16_4_ = fVar47 * fVar48 + auVar74._16_4_;
      fVar48 = auVar73._20_4_;
      auVar86._20_4_ = fVar48 * fVar49 + auVar74._20_4_;
      fVar49 = auVar73._24_4_;
      auVar86._24_4_ = fVar49 * fVar50 + auVar74._24_4_;
      fVar50 = auVar73._28_4_;
      auVar86._28_4_ = fVar50 * fVar51 + auVar74._28_4_;
      auVar113._0_4_ = fVar65 * fVar30 + auVar55._0_4_;
      auVar113._4_4_ = fVar10 * fVar134 + auVar55._4_4_;
      auVar113._8_4_ = fVar29 * fVar41 + auVar55._8_4_;
      auVar113._12_4_ = fVar43 * fVar101 + auVar55._12_4_;
      auVar113._16_4_ = fVar47 * fVar121 + auVar55._16_4_;
      auVar113._20_4_ = fVar48 * fVar11 + auVar55._20_4_;
      auVar113._24_4_ = fVar49 * fVar31 + auVar55._24_4_;
      auVar113._28_4_ = fVar50 * fVar42 + auVar55._28_4_;
      auVar105._0_4_ = fVar65 * fVar52 + auVar17._0_4_;
      auVar105._4_4_ = fVar10 * fVar53 + auVar17._4_4_;
      auVar105._8_4_ = fVar29 * fVar54 + auVar17._8_4_;
      auVar105._12_4_ = fVar43 * fVar58 + auVar17._12_4_;
      auVar105._16_4_ = fVar47 * fVar59 + auVar17._16_4_;
      auVar105._20_4_ = fVar48 * fVar60 + auVar17._20_4_;
      auVar105._24_4_ = fVar49 * fVar61 + auVar17._24_4_;
      auVar105._28_4_ = fVar50 * fVar62 + auVar17._28_4_;
      local_300 = vmaskmovps_avx(auVar46,auVar86);
      local_2e0 = vmaskmovps_avx(auVar46,auVar113);
      local_2c0 = vmaskmovps_avx(auVar46,auVar105);
    }
    if (cVar5 == -1) {
      auVar18 = vperm2f128_avx(local_300,local_2e0,0x20);
      auVar74 = vshufpd_avx(local_300,auVar18,2);
      auVar55 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,local_2c0);
      auVar18 = vpermpd_avx2(local_2e0,0xe9);
      auVar18 = vblendps_avx(auVar55,auVar18,7);
      auVar106._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar106._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar55 = vpermps_avx2(auVar106,auVar18);
      auVar74 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar74);
      auVar74 = vblendps_avx(auVar74,auVar55,0xa4);
      auVar107._8_8_ = local_300._24_8_;
      auVar107._0_8_ = local_300._24_8_;
      auVar107._16_8_ = local_300._24_8_;
      auVar107._24_8_ = local_300._24_8_;
      *pauVar4 = auVar74;
      auVar74 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar18);
      auVar18 = vshufpd_avx(local_300,local_300,1);
      auVar18 = vblendps_avx(auVar74,auVar18,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc) = auVar18;
      auVar28._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar28._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar18 = vpermps_avx2(auVar28,local_2e0);
      auVar18 = vblendpd_avx(auVar18,auVar107,1);
      auVar18 = vblendps_avx(auVar18,local_2c0,0xe0);
      auVar18 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar18);
      *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc) = auVar18;
    }
    else {
      auVar123 = local_300._0_16_;
      auVar102 = local_300._16_16_;
      auVar136 = local_2e0._0_16_;
      auVar108 = local_2e0._16_16_;
      auVar142 = local_2c0._0_16_;
      auVar131 = local_2c0._16_16_;
      if ((uVar6 & 1) != 0) {
        *(int *)*pauVar4 = local_300._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(param_2 + 0xc + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(param_2 + 0x18 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(param_2 + 0x24 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + uVar7 * 0xc) = local_300._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)(param_2 + 0x3c + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)(param_2 + 0x48 + uVar7 * 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(param_2 + 0x54 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(param_2 + 4 + uVar7 * 0xc) = local_2e0._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(param_2 + 0x10 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)(param_2 + 0x1c + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(param_2 + 0x28 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + uVar7 * 0xc) = local_2e0._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(param_2 + 0x40 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)(param_2 + 0x4c + uVar7 * 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(param_2 + 0x58 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(param_2 + 8 + uVar7 * 0xc) = local_2c0._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(param_2 + 0x14 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)(param_2 + 0x20 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(param_2 + 0x2c + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + uVar7 * 0xc) = local_2c0._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)(param_2 + 0x44 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(param_2 + 0x50 + uVar7 * 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(param_2 + 0x5c + uVar7 * 0xc) = uVar2;
      }
    }
  }
  return;
}

// ApplyPreSimulationTransformsAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuniCunf_avx2 @ 140cdba00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformsAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuniCunf_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,undefined8 param_9,
               undefined4 *param_10,undefined4 param_11,int param_12,int param_13,
               undefined4 param_14)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [32];
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [32];
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [32];
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar34;
  float fVar36;
  float fVar40;
  float fVar43;
  float fVar45;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar41;
  float fVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar42 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  float fVar64;
  float fVar66;
  float fVar68;
  float fVar70;
  float fVar73;
  float fVar75;
  float fVar77;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  float fVar65;
  float fVar67;
  float fVar69;
  float fVar71;
  float fVar74;
  float fVar76;
  float fVar78;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar72 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  float fVar79;
  float fVar87;
  undefined1 auVar80 [32];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 in_ZMM2 [64];
  float fVar88;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  float fVar102;
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  float fVar103;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  float fVar125;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  undefined1 auVar126 [32];
  float fVar143;
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
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  float fVar149;
  undefined1 auVar150 [16];
  float fVar158;
  float fVar159;
  float fVar161;
  float fVar163;
  float fVar164;
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  float fVar160;
  float fVar165;
  undefined1 auVar155 [32];
  undefined1 auVar162 [16];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  float fVar170;
  float fVar171;
  float fVar175;
  float fVar177;
  float fVar179;
  float fVar181;
  float fVar183;
  float fVar185;
  float fVar187;
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  float fVar176;
  float fVar178;
  float fVar180;
  float fVar182;
  float fVar184;
  float fVar186;
  float fVar188;
  undefined1 auVar174 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  undefined1 auVar200 [16];
  float fVar203;
  float fVar204;
  float fVar206;
  float fVar208;
  float fVar209;
  undefined1 auVar201 [32];
  float fVar205;
  float fVar210;
  undefined1 auVar202 [32];
  undefined1 auVar207 [16];
  float fVar211;
  float fVar212;
  float fVar215;
  float fVar217;
  float fVar219;
  float fVar221;
  float fVar223;
  float fVar225;
  undefined1 auVar213 [32];
  float fVar216;
  float fVar218;
  float fVar220;
  float fVar222;
  float fVar224;
  float fVar226;
  float fVar227;
  float fVar228;
  undefined1 auVar214 [32];
  float fVar229;
  float fVar231;
  float fVar232;
  float fVar233;
  float fVar234;
  float fVar235;
  float fVar236;
  undefined1 auVar230 [32];
  float fVar237;
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float local_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [32];
  
  iVar9 = __real_00000024;
  uVar8 = __real_00000030;
  uVar7 = __real_00000006;
  uVar6 = __real_0000000c;
  uVar5 = __real_00000008;
  uVar2 = __real_00000004;
  uVar19 = param_13 - param_12;
  uVar16 = uVar19 + 7;
  if (-1 < (int)uVar19) {
    uVar16 = uVar19;
  }
  iVar10 = ((uVar16 & 0xfffffff8) - uVar19) + param_13;
  if (param_12 < iVar10) {
    lVar20 = (longlong)param_12;
    lVar4 = lVar20 * 0xc;
    lVar21 = param_3 + 0x40;
    pauVar18 = (undefined1 (*) [32])(param_1 + lVar20 * 0x10 + 0x60);
    lVar13 = param_2 + 0x40;
    lVar17 = param_4 + 0x40;
    lVar14 = param_7 + 0x40;
    lVar11 = param_5 + 0x40;
    param_12 = param_12 << 2;
    auVar146 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
    do {
      auVar3 = *(undefined1 (*) [32])(param_8 + param_12);
      auVar144._4_4_ = uVar7;
      auVar144._0_4_ = uVar7;
      auVar144._8_4_ = uVar7;
      auVar144._12_4_ = uVar7;
      auVar144._16_4_ = uVar7;
      auVar144._20_4_ = uVar7;
      auVar144._24_4_ = uVar7;
      auVar144._28_4_ = uVar7;
      vpmulld_avx2(auVar3,auVar144);
      auVar94 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar201 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar94);
      auVar94._4_4_ = uVar8;
      auVar94._0_4_ = uVar8;
      auVar94._8_4_ = uVar8;
      auVar94._12_4_ = uVar8;
      auVar94._16_4_ = uVar8;
      auVar94._20_4_ = uVar8;
      auVar94._24_4_ = uVar8;
      auVar94._28_4_ = uVar8;
      auVar94 = vpmulld_avx2(auVar3,auVar94);
      auVar126._4_4_ = uVar2;
      auVar126._0_4_ = uVar2;
      auVar126._8_4_ = uVar2;
      auVar126._12_4_ = uVar2;
      auVar126._16_4_ = uVar2;
      auVar126._20_4_ = uVar2;
      auVar126._24_4_ = uVar2;
      auVar126._28_4_ = uVar2;
      vpor_avx2(auVar94,auVar126);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar213 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar91._4_4_ = uVar5;
      auVar91._0_4_ = uVar5;
      auVar91._8_4_ = uVar5;
      auVar91._12_4_ = uVar5;
      auVar91._16_4_ = uVar5;
      auVar91._20_4_ = uVar5;
      auVar91._24_4_ = uVar5;
      auVar91._28_4_ = uVar5;
      vpor_avx2(auVar94,auVar91);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar151 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar90._4_4_ = uVar6;
      auVar90._0_4_ = uVar6;
      auVar90._8_4_ = uVar6;
      auVar90._12_4_ = uVar6;
      auVar90._16_4_ = uVar6;
      auVar90._20_4_ = uVar6;
      auVar90._24_4_ = uVar6;
      auVar90._28_4_ = uVar6;
      vpor_avx2(auVar94,auVar90);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar189 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar90 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar230 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar166 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3._0_4_ = auVar94._0_4_ + iVar9;
      auVar3._4_4_ = auVar94._4_4_ + iVar9;
      auVar3._8_4_ = auVar94._8_4_ + iVar9;
      auVar3._12_4_ = auVar94._12_4_ + iVar9;
      auVar3._16_4_ = auVar94._16_4_ + iVar9;
      auVar3._20_4_ = auVar94._20_4_ + iVar9;
      auVar3._24_4_ = auVar94._24_4_ + iVar9;
      auVar3._28_4_ = auVar94._28_4_ + iVar9;
      auVar94 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar144 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar94);
      auVar3 = vpcmpeqd_avx2(auVar3,auVar3);
      auVar126 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = *(undefined1 (*) [32])(lVar21 + -0x40 + lVar4);
      auVar94 = *(undefined1 (*) [32])(lVar21 + -0x20 + lVar4);
      auVar105 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar94);
      auVar121 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar3);
      auVar105 = vblendps_avx(auVar121,auVar105,0x88);
      auVar121 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar94);
      auVar153 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(lVar21 + lVar4));
      auVar121 = vblendps_avx(auVar153,auVar121,0x13);
      auVar153 = vperm2f128_avx(auVar105,auVar121,0x31);
      auVar3 = vblendps_avx(auVar94,auVar3,0x24);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar21 + lVar4));
      auVar3 = vblendps_avx(auVar3,auVar94,0xe0);
      fVar125 = auVar166._0_4_;
      fVar49 = fVar125 * auVar105._0_4_;
      fVar137 = auVar166._4_4_;
      fVar64 = fVar137 * auVar105._4_4_;
      fVar138 = auVar166._8_4_;
      fVar66 = fVar138 * auVar105._8_4_;
      fVar139 = auVar166._12_4_;
      fVar68 = fVar139 * auVar105._12_4_;
      fVar140 = auVar166._16_4_;
      fVar70 = fVar140 * auVar121._0_4_;
      fVar141 = auVar166._20_4_;
      fVar73 = fVar141 * auVar121._4_4_;
      fVar142 = auVar166._24_4_;
      fVar75 = fVar142 * auVar121._8_4_;
      fVar143 = auVar166._28_4_;
      fVar77 = fVar143 * auVar121._12_4_;
      fVar23 = auVar144._0_4_;
      fVar22 = fVar23 * auVar153._0_4_;
      fVar35 = auVar144._4_4_;
      fVar34 = fVar35 * auVar153._4_4_;
      fVar37 = auVar144._8_4_;
      fVar36 = fVar37 * auVar153._8_4_;
      fVar39 = auVar144._12_4_;
      fVar38 = fVar39 * auVar153._12_4_;
      fVar41 = auVar144._16_4_;
      fVar40 = fVar41 * auVar153._16_4_;
      fVar44 = auVar144._20_4_;
      fVar43 = fVar44 * auVar153._20_4_;
      fVar46 = auVar144._24_4_;
      fVar45 = fVar46 * auVar153._24_4_;
      fVar48 = auVar144._28_4_;
      fVar47 = fVar48 * auVar153._28_4_;
      fVar50 = auVar126._0_4_;
      fVar79 = fVar50 * auVar3._0_4_;
      fVar65 = auVar126._4_4_;
      fVar81 = fVar65 * auVar3._4_4_;
      fVar67 = auVar126._8_4_;
      fVar82 = fVar67 * auVar3._8_4_;
      fVar69 = auVar126._12_4_;
      fVar83 = fVar69 * auVar3._12_4_;
      fVar71 = auVar126._16_4_;
      fVar84 = fVar71 * auVar3._16_4_;
      fVar74 = auVar126._20_4_;
      fVar85 = fVar74 * auVar3._20_4_;
      fVar76 = auVar126._24_4_;
      fVar86 = fVar76 * auVar3._24_4_;
      fVar78 = auVar126._28_4_;
      fVar87 = fVar78 * auVar3._28_4_;
      fVar211 = auVar213._0_4_;
      fVar215 = auVar213._4_4_;
      fVar217 = auVar213._8_4_;
      fVar219 = auVar213._12_4_;
      fVar221 = auVar213._16_4_;
      fVar223 = auVar213._20_4_;
      fVar225 = auVar213._24_4_;
      fVar227 = auVar213._28_4_;
      fVar149 = auVar151._0_4_;
      fVar158 = auVar151._4_4_;
      fVar159 = auVar151._8_4_;
      fVar160 = auVar151._12_4_;
      fVar161 = auVar151._16_4_;
      fVar163 = auVar151._20_4_;
      fVar164 = auVar151._24_4_;
      fVar165 = auVar151._28_4_;
      fVar199 = auVar201._0_4_;
      fVar203 = auVar201._4_4_;
      fVar204 = auVar201._8_4_;
      fVar205 = auVar201._12_4_;
      fVar206 = auVar201._16_4_;
      fVar208 = auVar201._20_4_;
      fVar209 = auVar201._24_4_;
      fVar210 = auVar201._28_4_;
      fVar88 = fVar199 * fVar22 - fVar211 * fVar49;
      fVar96 = fVar203 * fVar34 - fVar215 * fVar64;
      fVar97 = fVar204 * fVar36 - fVar217 * fVar66;
      fVar98 = fVar205 * fVar38 - fVar219 * fVar68;
      fVar99 = fVar206 * fVar40 - fVar221 * fVar70;
      fVar100 = fVar208 * fVar43 - fVar223 * fVar73;
      fVar101 = fVar209 * fVar45 - fVar225 * fVar75;
      fVar102 = fVar210 * fVar47 - fVar227 * fVar77;
      fVar103 = fVar211 * fVar79 - fVar149 * fVar22;
      fVar114 = fVar215 * fVar81 - fVar158 * fVar34;
      fVar115 = fVar217 * fVar82 - fVar159 * fVar36;
      fVar116 = fVar219 * fVar83 - fVar160 * fVar38;
      fVar117 = fVar221 * fVar84 - fVar161 * fVar40;
      fVar118 = fVar223 * fVar85 - fVar163 * fVar43;
      fVar119 = fVar225 * fVar86 - fVar164 * fVar45;
      fVar120 = fVar227 * fVar87 - fVar165 * fVar47;
      fVar170 = fVar149 * fVar49 - fVar199 * fVar79;
      fVar175 = fVar158 * fVar64 - fVar203 * fVar81;
      fVar177 = fVar159 * fVar66 - fVar204 * fVar82;
      fVar179 = fVar160 * fVar68 - fVar205 * fVar83;
      fVar181 = fVar161 * fVar70 - fVar206 * fVar84;
      fVar183 = fVar163 * fVar73 - fVar208 * fVar85;
      fVar185 = fVar164 * fVar75 - fVar209 * fVar86;
      fVar187 = fVar165 * fVar77 - fVar210 * fVar87;
      fVar103 = fVar103 + fVar103;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar170 = fVar170 + fVar170;
      fVar175 = fVar175 + fVar175;
      fVar177 = fVar177 + fVar177;
      fVar179 = fVar179 + fVar179;
      fVar181 = fVar181 + fVar181;
      fVar183 = fVar183 + fVar183;
      fVar185 = fVar185 + fVar185;
      fVar187 = fVar187 + fVar187;
      fVar88 = fVar88 + fVar88;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar98 = fVar98 + fVar98;
      fVar99 = fVar99 + fVar99;
      fVar100 = fVar100 + fVar100;
      fVar101 = fVar101 + fVar101;
      fVar102 = fVar102 + fVar102;
      fVar212 = auVar189._0_4_;
      fVar216 = auVar189._4_4_;
      fVar218 = auVar189._8_4_;
      fVar220 = auVar189._12_4_;
      fVar222 = auVar189._16_4_;
      fVar224 = auVar189._20_4_;
      fVar226 = auVar189._24_4_;
      fVar228 = auVar189._28_4_;
      local_480 = auVar90._0_4_;
      fStack_47c = auVar90._4_4_;
      fStack_478 = auVar90._8_4_;
      fStack_474 = auVar90._12_4_;
      fStack_470 = auVar90._16_4_;
      fStack_46c = auVar90._20_4_;
      fStack_468 = auVar90._24_4_;
      fStack_464 = auVar90._28_4_;
      auVar201._0_4_ =
           (fVar211 * fVar88 - fVar149 * fVar170) + fVar212 * fVar103 + fVar49 + local_480;
      auVar201._4_4_ =
           (fVar215 * fVar96 - fVar158 * fVar175) + fVar216 * fVar114 + fVar64 + fStack_47c;
      auVar201._8_4_ =
           (fVar217 * fVar97 - fVar159 * fVar177) + fVar218 * fVar115 + fVar66 + fStack_478;
      auVar201._12_4_ =
           (fVar219 * fVar98 - fVar160 * fVar179) + fVar220 * fVar116 + fVar68 + fStack_474;
      auVar201._16_4_ =
           (fVar221 * fVar99 - fVar161 * fVar181) + fVar222 * fVar117 + fVar70 + fStack_470;
      auVar201._20_4_ =
           (fVar223 * fVar100 - fVar163 * fVar183) + fVar224 * fVar118 + fVar73 + fStack_46c;
      auVar201._24_4_ =
           (fVar225 * fVar101 - fVar164 * fVar185) + fVar226 * fVar119 + fVar75 + fStack_468;
      auVar201._28_4_ =
           (fVar227 * fVar102 - fVar165 * fVar187) + fVar228 * fVar120 + fVar77 + fStack_464;
      local_460 = auVar91._0_4_;
      fStack_45c = auVar91._4_4_;
      fStack_458 = auVar91._8_4_;
      fStack_454 = auVar91._12_4_;
      fStack_450 = auVar91._16_4_;
      fStack_44c = auVar91._20_4_;
      fStack_448 = auVar91._24_4_;
      fStack_444 = auVar91._28_4_;
      auVar92._0_4_ =
           fVar212 * fVar170 + fVar22 + (fVar149 * fVar103 - fVar199 * fVar88) + local_460;
      auVar92._4_4_ =
           fVar216 * fVar175 + fVar34 + (fVar158 * fVar114 - fVar203 * fVar96) + fStack_45c;
      auVar92._8_4_ =
           fVar218 * fVar177 + fVar36 + (fVar159 * fVar115 - fVar204 * fVar97) + fStack_458;
      auVar92._12_4_ =
           fVar220 * fVar179 + fVar38 + (fVar160 * fVar116 - fVar205 * fVar98) + fStack_454;
      auVar92._16_4_ =
           fVar222 * fVar181 + fVar40 + (fVar161 * fVar117 - fVar206 * fVar99) + fStack_450;
      auVar92._20_4_ =
           fVar224 * fVar183 + fVar43 + (fVar163 * fVar118 - fVar208 * fVar100) + fStack_44c;
      auVar92._24_4_ =
           fVar226 * fVar185 + fVar45 + (fVar164 * fVar119 - fVar209 * fVar101) + fStack_448;
      auVar92._28_4_ =
           fVar228 * fVar187 + fVar47 + (fVar165 * fVar120 - fVar210 * fVar102) + fStack_444;
      auVar104._0_4_ =
           auVar230._0_4_ + (fVar199 * fVar170 - fVar211 * fVar103) + fVar212 * fVar88 + fVar79;
      auVar104._4_4_ =
           auVar230._4_4_ + (fVar203 * fVar175 - fVar215 * fVar114) + fVar216 * fVar96 + fVar81;
      auVar104._8_4_ =
           auVar230._8_4_ + (fVar204 * fVar177 - fVar217 * fVar115) + fVar218 * fVar97 + fVar82;
      auVar104._12_4_ =
           auVar230._12_4_ + (fVar205 * fVar179 - fVar219 * fVar116) + fVar220 * fVar98 + fVar83;
      auVar104._16_4_ =
           auVar230._16_4_ + (fVar206 * fVar181 - fVar221 * fVar117) + fVar222 * fVar99 + fVar84;
      auVar104._20_4_ =
           auVar230._20_4_ + (fVar208 * fVar183 - fVar223 * fVar118) + fVar224 * fVar100 + fVar85;
      auVar104._24_4_ =
           auVar230._24_4_ + (fVar209 * fVar185 - fVar225 * fVar119) + fVar226 * fVar101 + fVar86;
      auVar104._28_4_ =
           auVar230._28_4_ + (fVar210 * fVar187 - fVar227 * fVar120) + fVar228 * fVar102 + fVar87;
      uVar1 = *param_10;
      auVar151._4_4_ = uVar1;
      auVar151._0_4_ = uVar1;
      auVar151._8_4_ = uVar1;
      auVar151._12_4_ = uVar1;
      auVar151._16_4_ = uVar1;
      auVar151._20_4_ = uVar1;
      auVar151._24_4_ = uVar1;
      auVar151._28_4_ = uVar1;
      auVar105 = vsubps_avx(auVar201,auVar151);
      uVar1 = param_10[1];
      auVar52._4_4_ = uVar1;
      auVar52._0_4_ = uVar1;
      auVar52._8_4_ = uVar1;
      auVar52._12_4_ = uVar1;
      auVar52._16_4_ = uVar1;
      auVar52._20_4_ = uVar1;
      auVar52._24_4_ = uVar1;
      auVar52._28_4_ = uVar1;
      auVar121 = vsubps_avx(auVar92,auVar52);
      uVar1 = param_10[2];
      auVar53._4_4_ = uVar1;
      auVar53._0_4_ = uVar1;
      auVar53._8_4_ = uVar1;
      auVar53._12_4_ = uVar1;
      auVar53._16_4_ = uVar1;
      auVar53._20_4_ = uVar1;
      auVar53._24_4_ = uVar1;
      auVar53._28_4_ = uVar1;
      auVar153 = vsubps_avx(auVar104,auVar53);
      auVar3 = *(undefined1 (*) [32])(param_6 + param_12);
      auVar94 = vunpcklps_avx(auVar105,auVar121);
      auVar90 = vunpcklps_avx(auVar153,auVar3);
      auVar91 = vunpcklpd_avx(auVar94,auVar90);
      auVar94 = vunpckhpd_avx(auVar94,auVar90);
      auVar172._16_16_ = auVar94._0_16_;
      auVar172._0_16_ = auVar91._0_16_;
      pauVar18[-3] = auVar172;
      auVar3 = vunpckhps_avx(auVar153,auVar3);
      auVar90 = vunpckhps_avx(auVar105,auVar121);
      auVar126 = vunpcklpd_avx(auVar90,auVar3);
      auVar3 = vunpckhpd_avx(auVar90,auVar3);
      auVar173._16_16_ = auVar3._0_16_;
      auVar173._0_16_ = auVar126._0_16_;
      pauVar18[-2] = auVar173;
      auVar94 = vperm2f128_avx(auVar91,auVar94,0x31);
      pauVar18[-1] = auVar94;
      auVar3 = vperm2f128_avx(auVar126,auVar3,0x31);
      *pauVar18 = auVar3;
      auVar54._16_16_ = auVar121._0_16_;
      auVar54._0_16_ = auVar105._0_16_;
      auVar94 = vshufpd_avx(auVar105,auVar54,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar153);
      auVar3 = vpermpd_avx2(auVar121,0xe9);
      auVar3 = vblendps_avx(auVar90,auVar3,7);
      auVar90 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar3);
      auVar146 = vpermps_avx2(auVar146,auVar94);
      auVar146 = vblendps_avx(auVar146,auVar90,0xa4);
      *(undefined1 (*) [32])(lVar21 + -0x40 + lVar4) = auVar146;
      auVar3 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                            auVar3);
      auVar146 = vshufpd_avx(auVar105,auVar105,1);
      auVar146 = vblendps_avx(auVar3,auVar146,0x92);
      *(undefined1 (*) [32])(lVar21 + -0x20 + lVar4) = auVar146;
      auVar3 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001,
                            auVar121);
      auVar146 = vpermpd_avx2(auVar105,0xff);
      auVar146 = vblendps_avx(auVar3,auVar146,3);
      auVar146 = vblendps_avx(auVar146,auVar153,0xe0);
      auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar146);
      *(undefined1 (*) [32])(lVar21 + lVar4) = auVar146;
      auVar146 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar201 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar3 = *(undefined1 (*) [32])(lVar13 + -0x40 + lVar4);
      auVar94 = *(undefined1 (*) [32])(lVar13 + -0x20 + lVar4);
      auVar105 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar94);
      auVar121 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar3);
      auVar105 = vblendps_avx(auVar121,auVar105,0x88);
      auVar121 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar94);
      auVar153 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(lVar13 + lVar4));
      auVar121 = vblendps_avx(auVar153,auVar121,0x13);
      auVar153 = vperm2f128_avx(auVar105,auVar121,0x31);
      auVar3 = vblendps_avx(auVar94,auVar3,0x24);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar13 + lVar4));
      auVar3 = vblendps_avx(auVar3,auVar94,0xe0);
      fVar171 = fVar125 * auVar105._0_4_;
      fVar176 = fVar137 * auVar105._4_4_;
      fVar178 = fVar138 * auVar105._8_4_;
      fVar180 = fVar139 * auVar105._12_4_;
      fVar182 = fVar140 * auVar121._0_4_;
      fVar184 = fVar141 * auVar121._4_4_;
      fVar186 = fVar142 * auVar121._8_4_;
      fVar188 = fVar143 * auVar121._12_4_;
      fVar191 = auVar153._0_4_ * fVar23;
      fVar192 = auVar153._4_4_ * fVar35;
      fVar193 = auVar153._8_4_ * fVar37;
      fVar194 = auVar153._12_4_ * fVar39;
      fVar195 = auVar153._16_4_ * fVar41;
      fVar196 = auVar153._20_4_ * fVar44;
      fVar197 = auVar153._24_4_ * fVar46;
      fVar198 = auVar153._28_4_ * fVar48;
      fVar103 = auVar3._0_4_ * fVar50;
      fVar114 = auVar3._4_4_ * fVar65;
      fVar115 = auVar3._8_4_ * fVar67;
      fVar116 = auVar3._12_4_ * fVar69;
      fVar117 = auVar3._16_4_ * fVar71;
      fVar118 = auVar3._20_4_ * fVar74;
      fVar119 = auVar3._24_4_ * fVar76;
      fVar120 = auVar3._28_4_ * fVar78;
      fVar22 = fVar199 * fVar191 - fVar211 * fVar171;
      fVar34 = fVar203 * fVar192 - fVar215 * fVar176;
      fVar36 = fVar204 * fVar193 - fVar217 * fVar178;
      fVar38 = fVar205 * fVar194 - fVar219 * fVar180;
      fVar40 = fVar206 * fVar195 - fVar221 * fVar182;
      fVar43 = fVar208 * fVar196 - fVar223 * fVar184;
      fVar45 = fVar209 * fVar197 - fVar225 * fVar186;
      fVar47 = fVar210 * fVar198 - fVar227 * fVar188;
      fVar49 = fVar211 * fVar103 - fVar149 * fVar191;
      fVar66 = fVar215 * fVar114 - fVar158 * fVar192;
      fVar70 = fVar217 * fVar115 - fVar159 * fVar193;
      fVar75 = fVar219 * fVar116 - fVar160 * fVar194;
      fVar79 = fVar221 * fVar117 - fVar161 * fVar195;
      fVar82 = fVar223 * fVar118 - fVar163 * fVar196;
      fVar84 = fVar225 * fVar119 - fVar164 * fVar197;
      fVar86 = fVar227 * fVar120 - fVar165 * fVar198;
      fVar64 = fVar149 * fVar171 - fVar199 * fVar103;
      fVar68 = fVar158 * fVar176 - fVar203 * fVar114;
      fVar73 = fVar159 * fVar178 - fVar204 * fVar115;
      fVar77 = fVar160 * fVar180 - fVar205 * fVar116;
      fVar81 = fVar161 * fVar182 - fVar206 * fVar117;
      fVar83 = fVar163 * fVar184 - fVar208 * fVar118;
      fVar85 = fVar164 * fVar186 - fVar209 * fVar119;
      fVar87 = fVar165 * fVar188 - fVar210 * fVar120;
      fVar49 = fVar49 + fVar49;
      fVar66 = fVar66 + fVar66;
      fVar70 = fVar70 + fVar70;
      fVar75 = fVar75 + fVar75;
      fVar79 = fVar79 + fVar79;
      fVar82 = fVar82 + fVar82;
      fVar84 = fVar84 + fVar84;
      fVar86 = fVar86 + fVar86;
      fVar64 = fVar64 + fVar64;
      fVar68 = fVar68 + fVar68;
      fVar73 = fVar73 + fVar73;
      fVar77 = fVar77 + fVar77;
      fVar81 = fVar81 + fVar81;
      fVar83 = fVar83 + fVar83;
      fVar85 = fVar85 + fVar85;
      fVar87 = fVar87 + fVar87;
      fVar22 = fVar22 + fVar22;
      fVar34 = fVar34 + fVar34;
      fVar36 = fVar36 + fVar36;
      fVar38 = fVar38 + fVar38;
      fVar40 = fVar40 + fVar40;
      fVar43 = fVar43 + fVar43;
      fVar45 = fVar45 + fVar45;
      fVar47 = fVar47 + fVar47;
      auVar3 = *(undefined1 (*) [32])(lVar17 + -0x40 + lVar4);
      auVar94 = *(undefined1 (*) [32])(lVar17 + -0x20 + lVar4);
      auVar105 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar94);
      auVar121 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar3);
      auVar105 = vblendps_avx(auVar121,auVar105,0x88);
      auVar121 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar94);
      auVar153 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(lVar17 + lVar4));
      auVar121 = vblendps_avx(auVar153,auVar121,0x13);
      auVar153 = vperm2f128_avx(auVar105,auVar121,0x31);
      auVar3 = vblendps_avx(auVar94,auVar3,0x24);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar17 + lVar4));
      auVar3 = vblendps_avx(auVar3,auVar94,0xe0);
      fVar125 = auVar105._0_4_ * fVar125;
      fVar137 = auVar105._4_4_ * fVar137;
      fVar138 = auVar105._8_4_ * fVar138;
      fVar139 = auVar105._12_4_ * fVar139;
      fVar140 = auVar121._0_4_ * fVar140;
      fVar141 = auVar121._4_4_ * fVar141;
      fVar142 = auVar121._8_4_ * fVar142;
      fVar143 = auVar121._12_4_ * fVar143;
      fVar23 = auVar153._0_4_ * fVar23;
      fVar35 = auVar153._4_4_ * fVar35;
      fVar37 = auVar153._8_4_ * fVar37;
      fVar39 = auVar153._12_4_ * fVar39;
      fVar41 = auVar153._16_4_ * fVar41;
      fVar44 = auVar153._20_4_ * fVar44;
      fVar46 = auVar153._24_4_ * fVar46;
      fVar48 = auVar153._28_4_ * fVar48;
      fVar50 = auVar3._0_4_ * fVar50;
      fVar65 = auVar3._4_4_ * fVar65;
      fVar67 = auVar3._8_4_ * fVar67;
      fVar69 = auVar3._12_4_ * fVar69;
      fVar71 = auVar3._16_4_ * fVar71;
      fVar74 = auVar3._20_4_ * fVar74;
      fVar76 = auVar3._24_4_ * fVar76;
      fVar78 = auVar3._28_4_ * fVar78;
      fVar88 = fVar199 * fVar23 - fVar211 * fVar125;
      fVar96 = fVar203 * fVar35 - fVar215 * fVar137;
      fVar97 = fVar204 * fVar37 - fVar217 * fVar138;
      fVar98 = fVar205 * fVar39 - fVar219 * fVar139;
      fVar99 = fVar206 * fVar41 - fVar221 * fVar140;
      fVar100 = fVar208 * fVar44 - fVar223 * fVar141;
      fVar101 = fVar209 * fVar46 - fVar225 * fVar142;
      fVar102 = fVar210 * fVar48 - fVar227 * fVar143;
      fVar170 = fVar211 * fVar50 - fVar149 * fVar23;
      fVar175 = fVar215 * fVar65 - fVar158 * fVar35;
      fVar177 = fVar217 * fVar67 - fVar159 * fVar37;
      fVar179 = fVar219 * fVar69 - fVar160 * fVar39;
      fVar181 = fVar221 * fVar71 - fVar161 * fVar41;
      fVar183 = fVar223 * fVar74 - fVar163 * fVar44;
      fVar185 = fVar225 * fVar76 - fVar164 * fVar46;
      fVar187 = fVar227 * fVar78 - fVar165 * fVar48;
      fVar229 = fVar149 * fVar125 - fVar199 * fVar50;
      fVar231 = fVar158 * fVar137 - fVar203 * fVar65;
      fVar232 = fVar159 * fVar138 - fVar204 * fVar67;
      fVar233 = fVar160 * fVar139 - fVar205 * fVar69;
      fVar234 = fVar161 * fVar140 - fVar206 * fVar71;
      fVar235 = fVar163 * fVar141 - fVar208 * fVar74;
      fVar236 = fVar164 * fVar142 - fVar209 * fVar76;
      fVar237 = fVar165 * fVar143 - fVar210 * fVar78;
      fVar170 = fVar170 + fVar170;
      fVar175 = fVar175 + fVar175;
      fVar177 = fVar177 + fVar177;
      fVar179 = fVar179 + fVar179;
      fVar181 = fVar181 + fVar181;
      fVar183 = fVar183 + fVar183;
      fVar185 = fVar185 + fVar185;
      fVar187 = fVar187 + fVar187;
      fVar229 = fVar229 + fVar229;
      fVar231 = fVar231 + fVar231;
      fVar232 = fVar232 + fVar232;
      fVar233 = fVar233 + fVar233;
      fVar234 = fVar234 + fVar234;
      fVar235 = fVar235 + fVar235;
      fVar236 = fVar236 + fVar236;
      fVar237 = fVar237 + fVar237;
      fVar88 = fVar88 + fVar88;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar98 = fVar98 + fVar98;
      fVar99 = fVar99 + fVar99;
      fVar100 = fVar100 + fVar100;
      fVar101 = fVar101 + fVar101;
      fVar102 = fVar102 + fVar102;
      auVar153._0_4_ = (fVar199 * fVar64 - fVar211 * fVar49) + fVar212 * fVar22 + fVar103;
      auVar153._4_4_ = (fVar203 * fVar68 - fVar215 * fVar66) + fVar216 * fVar34 + fVar114;
      auVar153._8_4_ = (fVar204 * fVar73 - fVar217 * fVar70) + fVar218 * fVar36 + fVar115;
      auVar153._12_4_ = (fVar205 * fVar77 - fVar219 * fVar75) + fVar220 * fVar38 + fVar116;
      auVar153._16_4_ = (fVar206 * fVar81 - fVar221 * fVar79) + fVar222 * fVar40 + fVar117;
      auVar153._20_4_ = (fVar208 * fVar83 - fVar223 * fVar82) + fVar224 * fVar43 + fVar118;
      auVar153._24_4_ = (fVar209 * fVar85 - fVar225 * fVar84) + fVar226 * fVar45 + fVar119;
      auVar153._28_4_ = (fVar210 * fVar87 - fVar227 * fVar86) + fVar228 * fVar47 + fVar120;
      auVar105._0_4_ = fVar212 * fVar49 + fVar171 + (fVar211 * fVar22 - fVar149 * fVar64);
      auVar105._4_4_ = fVar216 * fVar66 + fVar176 + (fVar215 * fVar34 - fVar158 * fVar68);
      auVar105._8_4_ = fVar218 * fVar70 + fVar178 + (fVar217 * fVar36 - fVar159 * fVar73);
      auVar105._12_4_ = fVar220 * fVar75 + fVar180 + (fVar219 * fVar38 - fVar160 * fVar77);
      auVar105._16_4_ = fVar222 * fVar79 + fVar182 + (fVar221 * fVar40 - fVar161 * fVar81);
      auVar105._20_4_ = fVar224 * fVar82 + fVar184 + (fVar223 * fVar43 - fVar163 * fVar83);
      auVar105._24_4_ = fVar226 * fVar84 + fVar186 + (fVar225 * fVar45 - fVar164 * fVar85);
      auVar105._28_4_ = fVar228 * fVar86 + fVar188 + (fVar227 * fVar47 - fVar165 * fVar87);
      auVar121._0_4_ = fVar212 * fVar64 + fVar191 + (fVar149 * fVar49 - fVar199 * fVar22);
      auVar121._4_4_ = fVar216 * fVar68 + fVar192 + (fVar158 * fVar66 - fVar203 * fVar34);
      auVar121._8_4_ = fVar218 * fVar73 + fVar193 + (fVar159 * fVar70 - fVar204 * fVar36);
      auVar121._12_4_ = fVar220 * fVar77 + fVar194 + (fVar160 * fVar75 - fVar205 * fVar38);
      auVar121._16_4_ = fVar222 * fVar81 + fVar195 + (fVar161 * fVar79 - fVar206 * fVar40);
      auVar121._20_4_ = fVar224 * fVar83 + fVar196 + (fVar163 * fVar82 - fVar208 * fVar43);
      auVar121._24_4_ = fVar226 * fVar85 + fVar197 + (fVar164 * fVar84 - fVar209 * fVar45);
      auVar121._28_4_ = fVar228 * fVar87 + fVar198 + (fVar165 * fVar86 - fVar210 * fVar47);
      auVar93._0_4_ =
           (fVar88 * fVar211 - fVar149 * fVar229) + fVar212 * fVar170 + fVar125 + local_480;
      auVar93._4_4_ =
           (fVar96 * fVar215 - fVar158 * fVar231) + fVar216 * fVar175 + fVar137 + fStack_47c;
      auVar93._8_4_ =
           (fVar97 * fVar217 - fVar159 * fVar232) + fVar218 * fVar177 + fVar138 + fStack_478;
      auVar93._12_4_ =
           (fVar98 * fVar219 - fVar160 * fVar233) + fVar220 * fVar179 + fVar139 + fStack_474;
      auVar93._16_4_ =
           (fVar99 * fVar221 - fVar161 * fVar234) + fVar222 * fVar181 + fVar140 + fStack_470;
      auVar93._20_4_ =
           (fVar100 * fVar223 - fVar163 * fVar235) + fVar224 * fVar183 + fVar141 + fStack_46c;
      auVar93._24_4_ =
           (fVar101 * fVar225 - fVar164 * fVar236) + fVar226 * fVar185 + fVar142 + fStack_468;
      auVar93._28_4_ =
           (fVar102 * fVar227 - fVar165 * fVar237) + fVar228 * fVar187 + fVar143 + fStack_464;
      auVar213._0_4_ =
           (fVar170 * fVar149 - fVar199 * fVar88) + fVar212 * fVar229 + fVar23 + local_460;
      auVar213._4_4_ =
           (fVar175 * fVar158 - fVar203 * fVar96) + fVar216 * fVar231 + fVar35 + fStack_45c;
      auVar213._8_4_ =
           (fVar177 * fVar159 - fVar204 * fVar97) + fVar218 * fVar232 + fVar37 + fStack_458;
      auVar213._12_4_ =
           (fVar179 * fVar160 - fVar205 * fVar98) + fVar220 * fVar233 + fVar39 + fStack_454;
      auVar213._16_4_ =
           (fVar181 * fVar161 - fVar206 * fVar99) + fVar222 * fVar234 + fVar41 + fStack_450;
      auVar213._20_4_ =
           (fVar183 * fVar163 - fVar208 * fVar100) + fVar224 * fVar235 + fVar44 + fStack_44c;
      auVar213._24_4_ =
           (fVar185 * fVar164 - fVar209 * fVar101) + fVar226 * fVar236 + fVar46 + fStack_448;
      auVar213._28_4_ =
           (fVar187 * fVar165 - fVar210 * fVar102) + fVar228 * fVar237 + fVar48 + fStack_444;
      auVar127._0_4_ =
           fVar88 * fVar212 + fVar50 + (fVar229 * fVar199 - fVar211 * fVar170) + auVar230._0_4_;
      auVar127._4_4_ =
           fVar96 * fVar216 + fVar65 + (fVar231 * fVar203 - fVar215 * fVar175) + auVar230._4_4_;
      auVar127._8_4_ =
           fVar97 * fVar218 + fVar67 + (fVar232 * fVar204 - fVar217 * fVar177) + auVar230._8_4_;
      auVar127._12_4_ =
           fVar98 * fVar220 + fVar69 + (fVar233 * fVar205 - fVar219 * fVar179) + auVar230._12_4_;
      auVar127._16_4_ =
           fVar99 * fVar222 + fVar71 + (fVar234 * fVar206 - fVar221 * fVar181) + auVar230._16_4_;
      auVar127._20_4_ =
           fVar100 * fVar224 + fVar74 + (fVar235 * fVar208 - fVar223 * fVar183) + auVar230._20_4_;
      auVar127._24_4_ =
           fVar101 * fVar226 + fVar76 + (fVar236 * fVar209 - fVar225 * fVar185) + auVar230._24_4_;
      auVar127._28_4_ =
           fVar102 * fVar228 + fVar78 + (fVar237 * fVar210 - fVar227 * fVar187) + auVar230._28_4_;
      auVar126 = vsubps_avx(auVar93,auVar151);
      auVar144 = vsubps_avx(auVar213,auVar52);
      auVar151 = vsubps_avx(auVar127,auVar53);
      auVar230._16_16_ = auVar144._0_16_;
      auVar230._0_16_ = auVar126._0_16_;
      auVar94 = vshufpd_avx(auVar126,auVar230,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar151);
      auVar3 = vpermpd_avx2(auVar144,0xe9);
      auVar3 = vblendps_avx(auVar90,auVar3,7);
      auVar90 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar94);
      auVar94 = vblendps_avx(auVar94,auVar90,0xa4);
      *(undefined1 (*) [32])(lVar17 + -0x40 + lVar4) = auVar94;
      auVar213 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar94 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar3);
      auVar3 = vshufpd_avx(auVar126,auVar126,1);
      auVar3 = vblendps_avx(auVar94,auVar3,0x92);
      *(undefined1 (*) [32])(lVar17 + -0x20 + lVar4) = auVar3;
      auVar52 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar94 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar144);
      auVar3 = vpermpd_avx2(auVar126,0xff);
      auVar3 = vblendps_avx(auVar94,auVar3,3);
      auVar3 = vblendps_avx(auVar3,auVar151,0xe0);
      auVar3 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                            auVar3);
      *(undefined1 (*) [32])(lVar17 + lVar4) = auVar3;
      auVar3 = *(undefined1 (*) [32])(lVar14 + -0x40 + lVar4);
      auVar94 = *(undefined1 (*) [32])(lVar14 + -0x20 + lVar4);
      auVar90 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar94);
      auVar91 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar3);
      auVar90 = vblendps_avx(auVar91,auVar90,0x88);
      auVar91 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar94);
      auVar166 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(lVar14 + lVar4));
      auVar91 = vblendps_avx(auVar166,auVar91,0x13);
      auVar190._16_16_ = auVar91._0_16_;
      auVar190._0_16_ = auVar90._0_16_;
      auVar91 = vperm2f128_avx(auVar90,auVar91,0x31);
      auVar3 = vblendps_avx(auVar94,auVar3,0x24);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar14 + lVar4));
      auVar3 = vblendps_avx(auVar3,auVar94,0xe0);
      auVar94 = vsubps_avx(auVar190,auVar126);
      auVar166._4_4_ = param_14;
      auVar166._0_4_ = param_14;
      auVar166._8_4_ = param_14;
      auVar166._12_4_ = param_14;
      auVar166._16_4_ = param_14;
      auVar166._20_4_ = param_14;
      auVar166._24_4_ = param_14;
      auVar166._28_4_ = param_14;
      auVar189._4_4_ = param_11;
      auVar189._0_4_ = param_11;
      auVar189._8_4_ = param_11;
      auVar189._12_4_ = param_11;
      auVar189._16_4_ = param_11;
      auVar189._20_4_ = param_11;
      auVar189._24_4_ = param_11;
      auVar189._28_4_ = param_11;
      auVar90 = vdivps_avx(auVar94,auVar189);
      auVar94 = vsubps_avx(auVar91,auVar144);
      auVar91 = vdivps_avx(auVar94,auVar189);
      auVar3 = vsubps_avx(auVar3,auVar151);
      auVar126 = vdivps_avx(auVar3,auVar189);
      auVar128._16_16_ = auVar91._0_16_;
      auVar128._0_16_ = auVar90._0_16_;
      auVar94 = vshufpd_avx(auVar90,auVar128,2);
      auVar144 = vpermps_avx2(auVar201,auVar126);
      auVar3 = vpermpd_avx2(auVar91,0xe9);
      auVar3 = vblendps_avx(auVar144,auVar3,7);
      auVar144 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                              ,auVar3);
      auVar94 = vpermps_avx2(auVar146,auVar94);
      auVar94 = vblendps_avx(auVar94,auVar144,0xa4);
      *(undefined1 (*) [32])(lVar11 + -0x40 + lVar4) = auVar94;
      auVar94 = vpermps_avx2(auVar213,auVar3);
      auVar3 = vshufpd_avx(auVar90,auVar90,1);
      auVar3 = vblendps_avx(auVar94,auVar3,0x92);
      *(undefined1 (*) [32])(lVar11 + -0x20 + lVar4) = auVar3;
      auVar94 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar91);
      auVar3 = vpermpd_avx2(auVar90,0xff);
      auVar3 = vblendps_avx(auVar94,auVar3,3);
      auVar3 = vblendps_avx(auVar3,auVar126,0xe0);
      auVar3 = vpermps_avx2(auVar52,auVar3);
      *(undefined1 (*) [32])(lVar11 + lVar4) = auVar3;
      auVar3 = vsubps_avx(auVar105,auVar90);
      auVar94 = vsubps_avx(auVar121,auVar91);
      auVar144 = vsubps_avx(auVar153,auVar126);
      fVar22 = auVar94._0_4_;
      fVar23 = auVar94._4_4_;
      fVar34 = auVar94._8_4_;
      fVar35 = auVar94._12_4_;
      fVar36 = auVar94._16_4_;
      fVar37 = auVar94._20_4_;
      fVar38 = auVar94._24_4_;
      fVar39 = auVar94._28_4_;
      fVar40 = auVar3._0_4_;
      fVar41 = auVar3._4_4_;
      fVar43 = auVar3._8_4_;
      fVar44 = auVar3._12_4_;
      fVar45 = auVar3._16_4_;
      fVar46 = auVar3._20_4_;
      fVar47 = auVar3._24_4_;
      fVar48 = auVar3._28_4_;
      fVar49 = auVar144._0_4_;
      auVar174._0_4_ = fVar49 * fVar49 + fVar40 * fVar40 + fVar22 * fVar22;
      fVar64 = auVar144._4_4_;
      auVar174._4_4_ = fVar64 * fVar64 + fVar41 * fVar41 + fVar23 * fVar23;
      fVar50 = auVar144._8_4_;
      auVar174._8_4_ = fVar50 * fVar50 + fVar43 * fVar43 + fVar34 * fVar34;
      fVar66 = auVar144._12_4_;
      auVar174._12_4_ = fVar66 * fVar66 + fVar44 * fVar44 + fVar35 * fVar35;
      fVar68 = auVar144._16_4_;
      auVar174._16_4_ = fVar68 * fVar68 + fVar45 * fVar45 + fVar36 * fVar36;
      fVar65 = auVar144._20_4_;
      auVar174._20_4_ = fVar65 * fVar65 + fVar46 * fVar46 + fVar37 * fVar37;
      fVar70 = auVar144._24_4_;
      auVar174._24_4_ = fVar70 * fVar70 + fVar47 * fVar47 + fVar38 * fVar38;
      fVar73 = auVar144._28_4_;
      auVar174._28_4_ = fVar73 * fVar73 + fVar48 * fVar48 + fVar39 * fVar39;
      auVar3 = vcmpps_avx(auVar166,auVar174,1);
      if ((((((((SUB321(auVar3 >> 0x1f,0) & 1) != 0 || (SUB321(auVar3 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar3 >> 0x5f,0) & 1) != 0) || SUB321(auVar3 >> 0x7f,0) != '\0') ||
            (SUB321(auVar3 >> 0x9f,0) & 1) != 0) || SUB321(auVar3 >> 0xbf,0) != '\0') ||
          (SUB321(auVar3 >> 0xdf,0) & 1) != 0) || auVar3[0x1f] < '\0') {
        auVar94 = vdivps_avx(auVar166,auVar174);
        auVar94 = vsqrtps_avx(auVar94);
        fVar67 = auVar94._0_4_;
        auVar129._0_4_ = fVar67 * fVar40 + auVar90._0_4_;
        fVar40 = auVar94._4_4_;
        auVar129._4_4_ = fVar40 * fVar41 + auVar90._4_4_;
        fVar41 = auVar94._8_4_;
        auVar129._8_4_ = fVar41 * fVar43 + auVar90._8_4_;
        fVar43 = auVar94._12_4_;
        auVar129._12_4_ = fVar43 * fVar44 + auVar90._12_4_;
        fVar44 = auVar94._16_4_;
        auVar129._16_4_ = fVar44 * fVar45 + auVar90._16_4_;
        fVar45 = auVar94._20_4_;
        auVar129._20_4_ = fVar45 * fVar46 + auVar90._20_4_;
        fVar46 = auVar94._24_4_;
        auVar129._24_4_ = fVar46 * fVar47 + auVar90._24_4_;
        fVar47 = auVar94._28_4_;
        auVar129._28_4_ = fVar47 * fVar48 + auVar90._28_4_;
        auVar145._0_4_ = fVar67 * fVar22 + auVar91._0_4_;
        auVar145._4_4_ = fVar40 * fVar23 + auVar91._4_4_;
        auVar145._8_4_ = fVar41 * fVar34 + auVar91._8_4_;
        auVar145._12_4_ = fVar43 * fVar35 + auVar91._12_4_;
        auVar145._16_4_ = fVar44 * fVar36 + auVar91._16_4_;
        auVar145._20_4_ = fVar45 * fVar37 + auVar91._20_4_;
        auVar145._24_4_ = fVar46 * fVar38 + auVar91._24_4_;
        auVar145._28_4_ = fVar47 * fVar39 + auVar91._28_4_;
        auVar152._0_4_ = fVar67 * fVar49 + auVar126._0_4_;
        auVar152._4_4_ = fVar40 * fVar64 + auVar126._4_4_;
        auVar152._8_4_ = fVar41 * fVar50 + auVar126._8_4_;
        auVar152._12_4_ = fVar43 * fVar66 + auVar126._12_4_;
        auVar152._16_4_ = fVar44 * fVar68 + auVar126._16_4_;
        auVar152._20_4_ = fVar45 * fVar65 + auVar126._20_4_;
        auVar152._24_4_ = fVar46 * fVar70 + auVar126._24_4_;
        auVar152._28_4_ = fVar47 * fVar73 + auVar126._28_4_;
        auVar105 = vmaskmovps_avx(auVar3,auVar129);
        auVar121 = vmaskmovps_avx(auVar3,auVar145);
        auVar153 = vmaskmovps_avx(auVar3,auVar152);
      }
      in_ZMM2 = ZEXT3264(auVar153);
      auVar25._16_16_ = auVar121._0_16_;
      auVar25._0_16_ = auVar105._0_16_;
      auVar94 = vshufpd_avx(auVar105,auVar25,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar153);
      auVar3 = vpermpd_avx2(auVar121,0xe9);
      auVar3 = vblendps_avx(auVar90,auVar3,7);
      auVar89._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar89._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar90 = vpermps_avx2(auVar89,auVar3);
      auVar94 = vpermps_avx2(auVar146,auVar94);
      auVar94 = vblendps_avx(auVar94,auVar90,0xa4);
      *(undefined1 (*) [32])(lVar13 + -0x40 + lVar4) = auVar94;
      auVar94 = vpermps_avx2(auVar213,auVar3);
      auVar3 = vshufpd_avx(auVar105,auVar105,1);
      auVar3 = vblendps_avx(auVar94,auVar3,0x92);
      *(undefined1 (*) [32])(lVar13 + -0x20 + lVar4) = auVar3;
      auVar26._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar26._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar94 = vpermps_avx2(auVar26,auVar121);
      auVar3 = vpermpd_avx2(auVar105,0xff);
      auVar3 = vblendps_avx(auVar94,auVar3,3);
      auVar3 = vblendps_avx(auVar3,auVar153,0xe0);
      auVar3 = vpermps_avx2(auVar52,auVar3);
      *(undefined1 (*) [32])(lVar13 + lVar4) = auVar3;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + 0x60;
      pauVar18 = pauVar18 + 4;
      lVar13 = lVar13 + 0x60;
      lVar17 = lVar17 + 0x60;
      lVar14 = lVar14 + 0x60;
      lVar11 = lVar11 + 0x60;
      param_12 = param_12 + 0x20;
    } while (lVar20 < iVar10);
    param_12 = (int)lVar20;
  }
  if (param_12 < param_13) {
    auVar146._0_4_ =
         param_12 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar146._4_4_ = param_12 + _UNK_150b50ae4;
    auVar146._8_4_ = param_12 + _UNK_150b50ae8;
    auVar146._12_4_ = param_12 + _UNK_150b50aec;
    auVar146._16_4_ = param_12 + _UNK_150b50af0;
    auVar146._20_4_ = param_12 + _UNK_150b50af4;
    auVar146._24_4_ = param_12 + _UNK_150b50af8;
    auVar146._28_4_ = param_12 + _UNK_150b50afc;
    auVar55._4_4_ = param_13;
    auVar55._0_4_ = param_13;
    auVar55._8_4_ = param_13;
    auVar55._12_4_ = param_13;
    auVar55._16_4_ = param_13;
    auVar55._20_4_ = param_13;
    auVar55._24_4_ = param_13;
    auVar55._28_4_ = param_13;
    auVar3 = vpcmpgtd_avx2(auVar55,auVar146);
    auVar146 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_8 + param_12 * 4));
    auVar56._4_4_ = __real_00000006;
    auVar56._0_4_ = __real_00000006;
    auVar56._8_4_ = __real_00000006;
    auVar56._12_4_ = __real_00000006;
    auVar56._16_4_ = __real_00000006;
    auVar56._20_4_ = __real_00000006;
    auVar56._24_4_ = __real_00000006;
    auVar56._28_4_ = __real_00000006;
    vpmulld_avx2(auVar146,auVar56);
    auVar94 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar57._4_4_ = __real_00000030;
    auVar57._0_4_ = __real_00000030;
    auVar57._8_4_ = __real_00000030;
    auVar57._12_4_ = __real_00000030;
    auVar57._16_4_ = __real_00000030;
    auVar57._20_4_ = __real_00000030;
    auVar57._24_4_ = __real_00000030;
    auVar57._28_4_ = __real_00000030;
    auVar146 = vpmulld_avx2(auVar146,auVar57);
    auVar58._4_4_ = __real_00000004;
    auVar58._0_4_ = __real_00000004;
    auVar58._8_4_ = __real_00000004;
    auVar58._12_4_ = __real_00000004;
    auVar58._16_4_ = __real_00000004;
    auVar58._20_4_ = __real_00000004;
    auVar58._24_4_ = __real_00000004;
    auVar58._28_4_ = __real_00000004;
    vpor_avx2(auVar146,auVar58);
    auVar105 = vgatherdps(ZEXT832(0),auVar3);
    auVar59._4_4_ = __real_00000008;
    auVar59._0_4_ = __real_00000008;
    auVar59._8_4_ = __real_00000008;
    auVar59._12_4_ = __real_00000008;
    auVar59._16_4_ = __real_00000008;
    auVar59._20_4_ = __real_00000008;
    auVar59._24_4_ = __real_00000008;
    auVar59._28_4_ = __real_00000008;
    vpor_avx2(auVar146,auVar59);
    auVar121 = vgatherdps(ZEXT832(0),auVar3);
    auVar60._4_4_ = __real_0000000c;
    auVar60._0_4_ = __real_0000000c;
    auVar60._8_4_ = __real_0000000c;
    auVar60._12_4_ = __real_0000000c;
    auVar60._16_4_ = __real_0000000c;
    auVar60._20_4_ = __real_0000000c;
    auVar60._24_4_ = __real_0000000c;
    auVar60._28_4_ = __real_0000000c;
    vpor_avx2(auVar146,auVar60);
    auVar146 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar91 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar126 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar153 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar90 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
    auVar144 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar151 = vgatherdps(ZEXT1632(ZEXT816(0)),auVar3);
    lVar21 = (longlong)param_12;
    pauVar18 = (undefined1 (*) [32])(param_3 + lVar21 * 0xc);
    uVar16 = vmovmskps_avx(auVar3);
    if (uVar16 == 0xff) {
      auVar166 = pauVar18[1];
      auVar189 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                              ,auVar166);
      auVar201 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,*pauVar18);
      auVar189 = vblendps_avx(auVar201,auVar189,0x88);
      auVar201 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar166);
      auVar213 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,pauVar18[2]);
      auVar201 = vblendps_avx(auVar213,auVar201,0x13);
      auVar61._16_16_ = auVar201._0_16_;
      auVar61._0_16_ = auVar189._0_16_;
      auVar189 = vperm2f128_avx(auVar189,auVar201,0x31);
      auVar166 = vblendps_avx(auVar166,*pauVar18,0x24);
      auVar166 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar166);
      auVar154._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar154._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar201 = vpermps_avx2(auVar154,pauVar18[2]);
      auVar166 = vblendps_avx(auVar166,auVar201,0xe0);
    }
    else {
      auVar61 = vgatherdps(ZEXT832(0),auVar3);
      auVar189 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar166 = vgatherdps(ZEXT432(0) << 0x20,auVar3);
    }
    pauVar12 = (undefined1 (*) [32])(param_1 + lVar21 * 0x10);
    cVar15 = (char)uVar16;
    local_480 = auVar90._0_4_;
    fStack_47c = auVar90._4_4_;
    fStack_478 = auVar90._8_4_;
    fStack_474 = auVar90._12_4_;
    fStack_470 = auVar90._16_4_;
    fStack_46c = auVar90._20_4_;
    fStack_468 = auVar90._24_4_;
    fStack_464 = auVar90._28_4_;
    fVar149 = auVar61._0_4_ * local_480;
    fVar158 = auVar61._4_4_ * fStack_47c;
    fVar159 = auVar61._8_4_ * fStack_478;
    fVar160 = auVar61._12_4_ * fStack_474;
    fVar161 = auVar61._16_4_ * fStack_470;
    fVar163 = auVar61._20_4_ * fStack_46c;
    fVar164 = auVar61._24_4_ * fStack_468;
    fVar165 = auVar61._28_4_ * fStack_464;
    fVar64 = auVar144._0_4_;
    fVar49 = fVar64 * auVar189._0_4_;
    fVar66 = auVar144._4_4_;
    fVar50 = fVar66 * auVar189._4_4_;
    fVar65 = auVar144._8_4_;
    fVar68 = fVar65 * auVar189._8_4_;
    fVar73 = auVar144._12_4_;
    fVar70 = fVar73 * auVar189._12_4_;
    fVar75 = auVar144._16_4_;
    fVar67 = fVar75 * auVar189._16_4_;
    fVar69 = auVar144._20_4_;
    fVar77 = fVar69 * auVar189._20_4_;
    fVar81 = auVar144._24_4_;
    fVar79 = fVar81 * auVar189._24_4_;
    fVar82 = auVar144._28_4_;
    fVar71 = fVar82 * auVar189._28_4_;
    fVar114 = auVar151._0_4_;
    fVar40 = fVar114 * auVar166._0_4_;
    fVar116 = auVar151._4_4_;
    fVar41 = fVar116 * auVar166._4_4_;
    fVar118 = auVar151._8_4_;
    fVar43 = fVar118 * auVar166._8_4_;
    fVar120 = auVar151._12_4_;
    fVar44 = fVar120 * auVar166._12_4_;
    fVar175 = auVar151._16_4_;
    fVar45 = fVar175 * auVar166._16_4_;
    fVar179 = auVar151._20_4_;
    fVar46 = fVar179 * auVar166._20_4_;
    fVar183 = auVar151._24_4_;
    fVar47 = fVar183 * auVar166._24_4_;
    fVar187 = auVar151._28_4_;
    fVar48 = fVar187 * auVar166._28_4_;
    fVar22 = auVar105._0_4_;
    fVar23 = auVar105._4_4_;
    fVar34 = auVar105._8_4_;
    fVar35 = auVar105._12_4_;
    fVar36 = auVar105._16_4_;
    fVar37 = auVar105._20_4_;
    fVar38 = auVar105._24_4_;
    fVar39 = auVar105._28_4_;
    fVar88 = auVar121._0_4_;
    fVar96 = auVar121._4_4_;
    fVar97 = auVar121._8_4_;
    fVar98 = auVar121._12_4_;
    fVar99 = auVar121._16_4_;
    fVar100 = auVar121._20_4_;
    fVar101 = auVar121._24_4_;
    fVar102 = auVar121._28_4_;
    fVar83 = auVar94._0_4_;
    fVar74 = auVar94._4_4_;
    fVar84 = auVar94._8_4_;
    fVar85 = auVar94._12_4_;
    fVar76 = auVar94._16_4_;
    fVar86 = auVar94._20_4_;
    fVar87 = auVar94._24_4_;
    fVar78 = auVar94._28_4_;
    fVar103 = fVar83 * fVar49 - fVar149 * fVar22;
    fVar115 = fVar74 * fVar50 - fVar158 * fVar23;
    fVar117 = fVar84 * fVar68 - fVar159 * fVar34;
    fVar119 = fVar85 * fVar70 - fVar160 * fVar35;
    fVar170 = fVar76 * fVar67 - fVar161 * fVar36;
    fVar177 = fVar86 * fVar77 - fVar163 * fVar37;
    fVar181 = fVar87 * fVar79 - fVar164 * fVar38;
    fVar185 = fVar78 * fVar71 - fVar165 * fVar39;
    fVar171 = fVar22 * fVar40 - fVar88 * fVar49;
    fVar176 = fVar23 * fVar41 - fVar96 * fVar50;
    fVar178 = fVar34 * fVar43 - fVar97 * fVar68;
    fVar180 = fVar35 * fVar44 - fVar98 * fVar70;
    fVar182 = fVar36 * fVar45 - fVar99 * fVar67;
    fVar184 = fVar37 * fVar46 - fVar100 * fVar77;
    fVar186 = fVar38 * fVar47 - fVar101 * fVar79;
    fVar188 = fVar39 * fVar48 - fVar102 * fVar71;
    fVar212 = fVar88 * fVar149 - fVar83 * fVar40;
    fVar216 = fVar96 * fVar158 - fVar74 * fVar41;
    fVar218 = fVar97 * fVar159 - fVar84 * fVar43;
    fVar220 = fVar98 * fVar160 - fVar85 * fVar44;
    fVar222 = fVar99 * fVar161 - fVar76 * fVar45;
    fVar224 = fVar100 * fVar163 - fVar86 * fVar46;
    fVar226 = fVar101 * fVar164 - fVar87 * fVar47;
    fVar228 = fVar102 * fVar165 - fVar78 * fVar48;
    fVar171 = fVar171 + fVar171;
    fVar176 = fVar176 + fVar176;
    fVar178 = fVar178 + fVar178;
    fVar180 = fVar180 + fVar180;
    fVar182 = fVar182 + fVar182;
    fVar184 = fVar184 + fVar184;
    fVar186 = fVar186 + fVar186;
    fVar188 = fVar188 + fVar188;
    fVar212 = fVar212 + fVar212;
    fVar216 = fVar216 + fVar216;
    fVar218 = fVar218 + fVar218;
    fVar220 = fVar220 + fVar220;
    fVar222 = fVar222 + fVar222;
    fVar224 = fVar224 + fVar224;
    fVar226 = fVar226 + fVar226;
    fVar228 = fVar228 + fVar228;
    fVar103 = fVar103 + fVar103;
    fVar115 = fVar115 + fVar115;
    fVar117 = fVar117 + fVar117;
    fVar119 = fVar119 + fVar119;
    fVar170 = fVar170 + fVar170;
    fVar177 = fVar177 + fVar177;
    fVar181 = fVar181 + fVar181;
    fVar185 = fVar185 + fVar185;
    fVar125 = auVar146._0_4_;
    fVar137 = auVar146._4_4_;
    fVar138 = auVar146._8_4_;
    fVar139 = auVar146._12_4_;
    fVar140 = auVar146._16_4_;
    fVar141 = auVar146._20_4_;
    fVar142 = auVar146._24_4_;
    fVar143 = auVar146._28_4_;
    auVar130._0_4_ =
         auVar91._0_4_ + fVar125 * fVar171 + fVar149 + (fVar22 * fVar103 - fVar212 * fVar88);
    auVar130._4_4_ =
         auVar91._4_4_ + fVar137 * fVar176 + fVar158 + (fVar23 * fVar115 - fVar216 * fVar96);
    auVar130._8_4_ =
         auVar91._8_4_ + fVar138 * fVar178 + fVar159 + (fVar34 * fVar117 - fVar218 * fVar97);
    auVar130._12_4_ =
         auVar91._12_4_ + fVar139 * fVar180 + fVar160 + (fVar35 * fVar119 - fVar220 * fVar98);
    auVar130._16_4_ =
         auVar91._16_4_ + fVar140 * fVar182 + fVar161 + (fVar36 * fVar170 - fVar222 * fVar99);
    auVar130._20_4_ =
         auVar91._20_4_ + fVar141 * fVar184 + fVar163 + (fVar37 * fVar177 - fVar224 * fVar100);
    auVar130._24_4_ =
         auVar91._24_4_ + fVar142 * fVar186 + fVar164 + (fVar38 * fVar181 - fVar226 * fVar101);
    auVar130._28_4_ =
         auVar91._28_4_ + fVar143 * fVar188 + fVar165 + (fVar39 * fVar185 - fVar228 * fVar102);
    auVar155._0_4_ =
         auVar126._0_4_ + fVar125 * fVar212 + fVar49 + (fVar88 * fVar171 - fVar83 * fVar103);
    auVar155._4_4_ =
         auVar126._4_4_ + fVar137 * fVar216 + fVar50 + (fVar96 * fVar176 - fVar74 * fVar115);
    auVar155._8_4_ =
         auVar126._8_4_ + fVar138 * fVar218 + fVar68 + (fVar97 * fVar178 - fVar84 * fVar117);
    auVar155._12_4_ =
         auVar126._12_4_ + fVar139 * fVar220 + fVar70 + (fVar98 * fVar180 - fVar85 * fVar119);
    auVar155._16_4_ =
         auVar126._16_4_ + fVar140 * fVar222 + fVar67 + (fVar99 * fVar182 - fVar76 * fVar170);
    auVar155._20_4_ =
         auVar126._20_4_ + fVar141 * fVar224 + fVar77 + (fVar100 * fVar184 - fVar86 * fVar177);
    auVar155._24_4_ =
         auVar126._24_4_ + fVar142 * fVar226 + fVar79 + (fVar101 * fVar186 - fVar87 * fVar181);
    auVar155._28_4_ =
         auVar126._28_4_ + fVar143 * fVar228 + fVar71 + (fVar102 * fVar188 - fVar78 * fVar185);
    local_460 = auVar153._0_4_;
    fStack_45c = auVar153._4_4_;
    fStack_458 = auVar153._8_4_;
    fStack_454 = auVar153._12_4_;
    fStack_450 = auVar153._16_4_;
    fStack_44c = auVar153._20_4_;
    fStack_448 = auVar153._24_4_;
    fStack_444 = auVar153._28_4_;
    auVar202._0_4_ = (fVar83 * fVar212 - fVar171 * fVar22) + fVar125 * fVar103 + fVar40 + local_460;
    auVar202._4_4_ = (fVar74 * fVar216 - fVar176 * fVar23) + fVar137 * fVar115 + fVar41 + fStack_45c
    ;
    auVar202._8_4_ = (fVar84 * fVar218 - fVar178 * fVar34) + fVar138 * fVar117 + fVar43 + fStack_458
    ;
    auVar202._12_4_ =
         (fVar85 * fVar220 - fVar180 * fVar35) + fVar139 * fVar119 + fVar44 + fStack_454;
    auVar202._16_4_ =
         (fVar76 * fVar222 - fVar182 * fVar36) + fVar140 * fVar170 + fVar45 + fStack_450;
    auVar202._20_4_ =
         (fVar86 * fVar224 - fVar184 * fVar37) + fVar141 * fVar177 + fVar46 + fStack_44c;
    auVar202._24_4_ =
         (fVar87 * fVar226 - fVar186 * fVar38) + fVar142 * fVar181 + fVar47 + fStack_448;
    auVar202._28_4_ =
         (fVar78 * fVar228 - fVar188 * fVar39) + fVar143 * fVar185 + fVar48 + fStack_444;
    uVar2 = *param_10;
    auVar27._4_4_ = uVar2;
    auVar27._0_4_ = uVar2;
    auVar27._8_4_ = uVar2;
    auVar27._12_4_ = uVar2;
    auVar27._16_4_ = uVar2;
    auVar27._20_4_ = uVar2;
    auVar27._24_4_ = uVar2;
    auVar27._28_4_ = uVar2;
    auVar146 = vsubps_avx(auVar130,auVar27);
    uVar2 = param_10[1];
    auVar28._4_4_ = uVar2;
    auVar28._0_4_ = uVar2;
    auVar28._8_4_ = uVar2;
    auVar28._12_4_ = uVar2;
    auVar28._16_4_ = uVar2;
    auVar28._20_4_ = uVar2;
    auVar28._24_4_ = uVar2;
    auVar28._28_4_ = uVar2;
    auVar94 = vsubps_avx(auVar155,auVar28);
    uVar2 = param_10[2];
    auVar131._4_4_ = uVar2;
    auVar131._0_4_ = uVar2;
    auVar131._8_4_ = uVar2;
    auVar131._12_4_ = uVar2;
    auVar131._16_4_ = uVar2;
    auVar131._20_4_ = uVar2;
    auVar131._24_4_ = uVar2;
    auVar131._28_4_ = uVar2;
    auVar105 = vsubps_avx(auVar202,auVar131);
    auVar121 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_6 + param_12 * 4));
    auVar51 = auVar146._0_16_;
    auVar72 = auVar146._16_16_;
    auVar24 = auVar94._0_16_;
    if (cVar15 == -1) {
      auVar153 = vunpcklps_avx(auVar146,auVar94);
      auVar90 = vunpcklps_avx(auVar105,auVar121);
      auVar144 = vunpcklpd_avx(auVar153,auVar90);
      auVar153 = vunpckhpd_avx(auVar153,auVar90);
      auVar90 = vunpckhps_avx(auVar146,auVar94);
      auVar121 = vunpckhps_avx(auVar105,auVar121);
      auVar167._16_16_ = auVar153._0_16_;
      auVar167._0_16_ = auVar144._0_16_;
      *pauVar12 = auVar167;
      auVar151 = vunpcklpd_avx(auVar90,auVar121);
      auVar121 = vunpckhpd_avx(auVar90,auVar121);
      auVar214._16_16_ = auVar121._0_16_;
      auVar214._0_16_ = auVar151._0_16_;
      pauVar12[1] = auVar214;
      auVar153 = vperm2f128_avx(auVar144,auVar153,0x31);
      pauVar12[2] = auVar153;
      auVar121 = vperm2f128_avx(auVar151,auVar121,0x31);
      pauVar12[3] = auVar121;
      auVar132._16_16_ = auVar24;
      auVar132._0_16_ = auVar51;
      auVar153 = vshufpd_avx(auVar146,auVar132,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar105);
      auVar121 = vpermpd_avx2(auVar94,0xe9);
      auVar121 = vblendps_avx(auVar90,auVar121,7);
      auVar168._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar168._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar90 = vpermps_avx2(auVar168,auVar121);
      auVar153 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar153);
      auVar153 = vblendps_avx(auVar153,auVar90,0xa4);
      *pauVar18 = auVar153;
      auVar153 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar121);
      auVar121 = vshufpd_avx(auVar146,auVar146,1);
      auVar121 = vblendps_avx(auVar153,auVar121,0x92);
      pauVar18[1] = auVar121;
      auVar133._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar133._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar94 = vpermps_avx2(auVar133,auVar94);
      auVar146 = vpermpd_avx2(auVar146,0xff);
      auVar146 = vblendps_avx(auVar94,auVar146,3);
      auVar146 = vblendps_avx(auVar146,auVar105,0xe0);
      auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar146);
      pauVar18[2] = auVar146;
      auVar146 = *(undefined1 (*) [32])(param_2 + lVar21 * 0xc);
      auVar94 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar21 * 0xc);
      auVar105 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar21 * 0xc);
      auVar121 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                              ,auVar94);
      auVar153 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar146);
      auVar121 = vblendps_avx(auVar153,auVar121,0x88);
      auVar153 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar94);
      auVar90 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar105);
      auVar153 = vblendps_avx(auVar90,auVar153,0x13);
      auVar29._16_16_ = auVar153._0_16_;
      auVar29._0_16_ = auVar121._0_16_;
      auVar121 = vperm2f128_avx(auVar121,auVar153,0x31);
      auVar146 = vblendps_avx(auVar94,auVar146,0x24);
      auVar146 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar146);
      auVar156._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar156._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar94 = vpermps_avx2(auVar156,auVar105);
      auVar146 = vblendps_avx(auVar146,auVar94,0xe0);
    }
    else {
      auVar42 = auVar94._16_16_;
      auVar200 = auVar105._0_16_;
      auVar207 = auVar105._16_16_;
      auVar150 = auVar121._0_16_;
      auVar162 = auVar121._16_16_;
      if ((uVar16 & 1) != 0) {
        *(int *)*pauVar12 = auVar146._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(*pauVar12 + 0x10) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)pauVar12[1] = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(pauVar12[1] + 0x10) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)pauVar12[2] = auVar146._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(pauVar12[2] + 0x10) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)pauVar12[3] = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(pauVar12[3] + 0x10) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar12 + 4) = auVar94._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(*pauVar12 + 0x14) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(pauVar12[1] + 4) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(pauVar12[1] + 0x14) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar12[2] + 4) = auVar94._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)(pauVar12[2] + 0x14) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(pauVar12[3] + 4) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar12[3] + 0x14) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar12 + 8) = auVar105._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar200,1);
        *(undefined4 *)(*pauVar12 + 0x18) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar200,2);
        *(undefined4 *)(pauVar12[1] + 8) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar200,3);
        *(undefined4 *)(pauVar12[1] + 0x18) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar12[2] + 8) = auVar105._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar207,1);
        *(undefined4 *)(pauVar12[2] + 0x18) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar207,2);
        *(undefined4 *)(pauVar12[3] + 8) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar207,3);
        *(undefined4 *)(pauVar12[3] + 0x18) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar12 + 0xc) = auVar121._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar150,1);
        *(undefined4 *)(*pauVar12 + 0x1c) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar150,2);
        *(undefined4 *)(pauVar12[1] + 0xc) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar150,3);
        *(undefined4 *)(pauVar12[1] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar12[2] + 0xc) = auVar121._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar162,1);
        *(undefined4 *)(pauVar12[2] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar162,2);
        *(undefined4 *)(pauVar12[3] + 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar162,3);
        *(undefined4 *)(pauVar12[3] + 0x1c) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)*pauVar18 = auVar146._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(*pauVar18 + 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)(*pauVar18 + 0x18) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(pauVar18[1] + 4) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x10) = auVar146._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(pauVar18[1] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)(pauVar18[2] + 8) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(pauVar18[2] + 0x14) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar18 + 4) = auVar94._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(*pauVar18 + 0x10) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(*pauVar18 + 0x1c) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(pauVar18[1] + 8) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x14) = auVar94._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)pauVar18[2] = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(pauVar18[2] + 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar18[2] + 0x18) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar18 + 8) = auVar105._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar200,1);
        *(undefined4 *)(*pauVar18 + 0x14) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar200,2);
        *(undefined4 *)pauVar18[1] = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar200,3);
        *(undefined4 *)(pauVar18[1] + 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x18) = auVar105._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar207,1);
        *(undefined4 *)(pauVar18[2] + 4) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar207,2);
        *(undefined4 *)(pauVar18[2] + 0x10) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar207,3);
        *(undefined4 *)(pauVar18[2] + 0x1c) = uVar2;
      }
      auVar29 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar121 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar146 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    }
    pauVar12 = (undefined1 (*) [32])(param_2 + lVar21 * 0xc);
    fVar40 = auVar29._0_4_ * local_480;
    fVar41 = auVar29._4_4_ * fStack_47c;
    fVar43 = auVar29._8_4_ * fStack_478;
    fVar44 = auVar29._12_4_ * fStack_474;
    fVar45 = auVar29._16_4_ * fStack_470;
    fVar46 = auVar29._20_4_ * fStack_46c;
    fVar47 = auVar29._24_4_ * fStack_468;
    fVar48 = auVar29._28_4_ * fStack_464;
    fVar49 = fVar64 * auVar121._0_4_;
    fVar50 = fVar66 * auVar121._4_4_;
    fVar68 = fVar65 * auVar121._8_4_;
    fVar70 = fVar73 * auVar121._12_4_;
    fVar67 = fVar75 * auVar121._16_4_;
    fVar77 = fVar69 * auVar121._20_4_;
    fVar79 = fVar81 * auVar121._24_4_;
    fVar71 = fVar82 * auVar121._28_4_;
    fVar103 = fVar114 * auVar146._0_4_;
    fVar115 = fVar116 * auVar146._4_4_;
    fVar117 = fVar118 * auVar146._8_4_;
    fVar119 = fVar120 * auVar146._12_4_;
    fVar170 = fVar175 * auVar146._16_4_;
    fVar177 = fVar179 * auVar146._20_4_;
    fVar181 = fVar183 * auVar146._24_4_;
    fVar185 = fVar187 * auVar146._28_4_;
    fVar149 = fVar83 * fVar49 - fVar22 * fVar40;
    fVar158 = fVar74 * fVar50 - fVar23 * fVar41;
    fVar159 = fVar84 * fVar68 - fVar34 * fVar43;
    fVar160 = fVar85 * fVar70 - fVar35 * fVar44;
    fVar161 = fVar76 * fVar67 - fVar36 * fVar45;
    fVar163 = fVar86 * fVar77 - fVar37 * fVar46;
    fVar164 = fVar87 * fVar79 - fVar38 * fVar47;
    fVar165 = fVar78 * fVar71 - fVar39 * fVar48;
    fVar171 = fVar22 * fVar103 - fVar88 * fVar49;
    fVar176 = fVar23 * fVar115 - fVar96 * fVar50;
    fVar178 = fVar34 * fVar117 - fVar97 * fVar68;
    fVar180 = fVar35 * fVar119 - fVar98 * fVar70;
    fVar182 = fVar36 * fVar170 - fVar99 * fVar67;
    fVar184 = fVar37 * fVar177 - fVar100 * fVar77;
    fVar186 = fVar38 * fVar181 - fVar101 * fVar79;
    fVar188 = fVar39 * fVar185 - fVar102 * fVar71;
    fVar212 = fVar88 * fVar40 - fVar83 * fVar103;
    fVar216 = fVar96 * fVar41 - fVar74 * fVar115;
    fVar218 = fVar97 * fVar43 - fVar84 * fVar117;
    fVar220 = fVar98 * fVar44 - fVar85 * fVar119;
    fVar222 = fVar99 * fVar45 - fVar76 * fVar170;
    fVar224 = fVar100 * fVar46 - fVar86 * fVar177;
    fVar226 = fVar101 * fVar47 - fVar87 * fVar181;
    fVar228 = fVar102 * fVar48 - fVar78 * fVar185;
    fVar171 = fVar171 + fVar171;
    fVar176 = fVar176 + fVar176;
    fVar178 = fVar178 + fVar178;
    fVar180 = fVar180 + fVar180;
    fVar182 = fVar182 + fVar182;
    fVar184 = fVar184 + fVar184;
    fVar186 = fVar186 + fVar186;
    fVar188 = fVar188 + fVar188;
    fVar212 = fVar212 + fVar212;
    fVar216 = fVar216 + fVar216;
    fVar218 = fVar218 + fVar218;
    fVar220 = fVar220 + fVar220;
    fVar222 = fVar222 + fVar222;
    fVar224 = fVar224 + fVar224;
    fVar226 = fVar226 + fVar226;
    fVar228 = fVar228 + fVar228;
    fVar149 = fVar149 + fVar149;
    fVar158 = fVar158 + fVar158;
    fVar159 = fVar159 + fVar159;
    fVar160 = fVar160 + fVar160;
    fVar161 = fVar161 + fVar161;
    fVar163 = fVar163 + fVar163;
    fVar164 = fVar164 + fVar164;
    fVar165 = fVar165 + fVar165;
    local_3c0._0_4_ = (fVar83 * fVar212 - fVar171 * fVar22) + fVar125 * fVar149 + fVar103;
    local_3c0._4_4_ = (fVar74 * fVar216 - fVar176 * fVar23) + fVar137 * fVar158 + fVar115;
    local_3c0._8_4_ = (fVar84 * fVar218 - fVar178 * fVar34) + fVar138 * fVar159 + fVar117;
    local_3c0._12_4_ = (fVar85 * fVar220 - fVar180 * fVar35) + fVar139 * fVar160 + fVar119;
    local_3c0._16_4_ = (fVar76 * fVar222 - fVar182 * fVar36) + fVar140 * fVar161 + fVar170;
    local_3c0._20_4_ = (fVar86 * fVar224 - fVar184 * fVar37) + fVar141 * fVar163 + fVar177;
    local_3c0._24_4_ = (fVar87 * fVar226 - fVar186 * fVar38) + fVar142 * fVar164 + fVar181;
    local_3c0._28_4_ = (fVar78 * fVar228 - fVar188 * fVar39) + fVar143 * fVar165 + fVar185;
    local_400._0_4_ = (fVar22 * fVar149 - fVar212 * fVar88) + fVar125 * fVar171 + fVar40;
    local_400._4_4_ = (fVar23 * fVar158 - fVar216 * fVar96) + fVar137 * fVar176 + fVar41;
    local_400._8_4_ = (fVar34 * fVar159 - fVar218 * fVar97) + fVar138 * fVar178 + fVar43;
    local_400._12_4_ = (fVar35 * fVar160 - fVar220 * fVar98) + fVar139 * fVar180 + fVar44;
    local_400._16_4_ = (fVar36 * fVar161 - fVar222 * fVar99) + fVar140 * fVar182 + fVar45;
    local_400._20_4_ = (fVar37 * fVar163 - fVar224 * fVar100) + fVar141 * fVar184 + fVar46;
    local_400._24_4_ = (fVar38 * fVar164 - fVar226 * fVar101) + fVar142 * fVar186 + fVar47;
    local_400._28_4_ = (fVar39 * fVar165 - fVar228 * fVar102) + fVar143 * fVar188 + fVar48;
    local_3e0._0_4_ = (fVar88 * fVar171 - fVar149 * fVar83) + fVar125 * fVar212 + fVar49;
    local_3e0._4_4_ = (fVar96 * fVar176 - fVar158 * fVar74) + fVar137 * fVar216 + fVar50;
    local_3e0._8_4_ = (fVar97 * fVar178 - fVar159 * fVar84) + fVar138 * fVar218 + fVar68;
    local_3e0._12_4_ = (fVar98 * fVar180 - fVar160 * fVar85) + fVar139 * fVar220 + fVar70;
    local_3e0._16_4_ = (fVar99 * fVar182 - fVar161 * fVar76) + fVar140 * fVar222 + fVar67;
    local_3e0._20_4_ = (fVar100 * fVar184 - fVar163 * fVar86) + fVar141 * fVar224 + fVar77;
    local_3e0._24_4_ = (fVar101 * fVar186 - fVar164 * fVar87) + fVar142 * fVar226 + fVar79;
    local_3e0._28_4_ = (fVar102 * fVar188 - fVar165 * fVar78) + fVar143 * fVar228 + fVar71;
    pauVar18 = (undefined1 (*) [32])(param_4 + lVar21 * 0xc);
    if (cVar15 == -1) {
      auVar146 = pauVar18[1];
      auVar94 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar146);
      auVar105 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,*pauVar18);
      auVar94 = vblendps_avx(auVar105,auVar94,0x88);
      auVar105 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar146);
      auVar121 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,pauVar18[2]);
      auVar105 = vblendps_avx(auVar121,auVar105,0x13);
      auVar30._16_16_ = auVar105._0_16_;
      auVar30._0_16_ = auVar94._0_16_;
      auVar94 = vperm2f128_avx(auVar94,auVar105,0x31);
      auVar146 = vblendps_avx(auVar146,*pauVar18,0x24);
      auVar146 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar146);
      auVar157._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar157._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar105 = vpermps_avx2(auVar157,pauVar18[2]);
      auVar146 = vblendps_avx(auVar146,auVar105,0xe0);
    }
    else {
      auVar30 = vgatherdps(ZEXT432(0) << 0x20,auVar3);
      auVar94 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar146 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    }
    local_480 = auVar30._0_4_ * local_480;
    fStack_47c = auVar30._4_4_ * fStack_47c;
    fStack_478 = auVar30._8_4_ * fStack_478;
    fStack_474 = auVar30._12_4_ * fStack_474;
    fStack_470 = auVar30._16_4_ * fStack_470;
    fStack_46c = auVar30._20_4_ * fStack_46c;
    fStack_468 = auVar30._24_4_ * fStack_468;
    fStack_464 = auVar30._28_4_ * fStack_464;
    fVar64 = fVar64 * auVar94._0_4_;
    fVar66 = fVar66 * auVar94._4_4_;
    fVar65 = fVar65 * auVar94._8_4_;
    fVar73 = fVar73 * auVar94._12_4_;
    fVar75 = fVar75 * auVar94._16_4_;
    fVar69 = fVar69 * auVar94._20_4_;
    fVar81 = fVar81 * auVar94._24_4_;
    fVar82 = fVar82 * auVar94._28_4_;
    fVar114 = fVar114 * auVar146._0_4_;
    fVar116 = fVar116 * auVar146._4_4_;
    fVar118 = fVar118 * auVar146._8_4_;
    fVar120 = fVar120 * auVar146._12_4_;
    fVar175 = fVar175 * auVar146._16_4_;
    fVar179 = fVar179 * auVar146._20_4_;
    fVar183 = fVar183 * auVar146._24_4_;
    fVar187 = fVar187 * auVar146._28_4_;
    fVar40 = fVar83 * fVar64 - fVar22 * local_480;
    fVar41 = fVar74 * fVar66 - fVar23 * fStack_47c;
    fVar43 = fVar84 * fVar65 - fVar34 * fStack_478;
    fVar44 = fVar85 * fVar73 - fVar35 * fStack_474;
    fVar45 = fVar76 * fVar75 - fVar36 * fStack_470;
    fVar46 = fVar86 * fVar69 - fVar37 * fStack_46c;
    fVar47 = fVar87 * fVar81 - fVar38 * fStack_468;
    fVar48 = fVar78 * fVar82 - fVar39 * fStack_464;
    fVar49 = fVar22 * fVar114 - fVar88 * fVar64;
    fVar50 = fVar23 * fVar116 - fVar96 * fVar66;
    fVar68 = fVar34 * fVar118 - fVar97 * fVar65;
    fVar70 = fVar35 * fVar120 - fVar98 * fVar73;
    fVar67 = fVar36 * fVar175 - fVar99 * fVar75;
    fVar77 = fVar37 * fVar179 - fVar100 * fVar69;
    fVar79 = fVar38 * fVar183 - fVar101 * fVar81;
    fVar71 = fVar39 * fVar187 - fVar102 * fVar82;
    fVar103 = fVar88 * local_480 - fVar83 * fVar114;
    fVar115 = fVar96 * fStack_47c - fVar74 * fVar116;
    fVar117 = fVar97 * fStack_478 - fVar84 * fVar118;
    fVar119 = fVar98 * fStack_474 - fVar85 * fVar120;
    fVar170 = fVar99 * fStack_470 - fVar76 * fVar175;
    fVar177 = fVar100 * fStack_46c - fVar86 * fVar179;
    fVar181 = fVar101 * fStack_468 - fVar87 * fVar183;
    fVar185 = fVar102 * fStack_464 - fVar78 * fVar187;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar50 + fVar50;
    fVar68 = fVar68 + fVar68;
    fVar70 = fVar70 + fVar70;
    fVar67 = fVar67 + fVar67;
    fVar77 = fVar77 + fVar77;
    fVar79 = fVar79 + fVar79;
    fVar71 = fVar71 + fVar71;
    fVar103 = fVar103 + fVar103;
    fVar115 = fVar115 + fVar115;
    fVar117 = fVar117 + fVar117;
    fVar119 = fVar119 + fVar119;
    fVar170 = fVar170 + fVar170;
    fVar177 = fVar177 + fVar177;
    fVar181 = fVar181 + fVar181;
    fVar185 = fVar185 + fVar185;
    fVar40 = fVar40 + fVar40;
    fVar41 = fVar41 + fVar41;
    fVar43 = fVar43 + fVar43;
    fVar44 = fVar44 + fVar44;
    fVar45 = fVar45 + fVar45;
    fVar46 = fVar46 + fVar46;
    fVar47 = fVar47 + fVar47;
    fVar48 = fVar48 + fVar48;
    auVar31._0_4_ =
         (fVar22 * fVar40 - fVar103 * fVar88) + fVar125 * fVar49 + local_480 + auVar91._0_4_;
    auVar31._4_4_ =
         (fVar23 * fVar41 - fVar115 * fVar96) + fVar137 * fVar50 + fStack_47c + auVar91._4_4_;
    auVar31._8_4_ =
         (fVar34 * fVar43 - fVar117 * fVar97) + fVar138 * fVar68 + fStack_478 + auVar91._8_4_;
    auVar31._12_4_ =
         (fVar35 * fVar44 - fVar119 * fVar98) + fVar139 * fVar70 + fStack_474 + auVar91._12_4_;
    auVar31._16_4_ =
         (fVar36 * fVar45 - fVar170 * fVar99) + fVar140 * fVar67 + fStack_470 + auVar91._16_4_;
    auVar31._20_4_ =
         (fVar37 * fVar46 - fVar177 * fVar100) + fVar141 * fVar77 + fStack_46c + auVar91._20_4_;
    auVar31._24_4_ =
         (fVar38 * fVar47 - fVar181 * fVar101) + fVar142 * fVar79 + fStack_468 + auVar91._24_4_;
    auVar31._28_4_ =
         (fVar39 * fVar48 - fVar185 * fVar102) + fVar143 * fVar71 + fStack_464 + auVar91._28_4_;
    auVar62._0_4_ =
         (fVar88 * fVar49 - fVar40 * fVar83) + fVar125 * fVar103 + fVar64 + auVar126._0_4_;
    auVar62._4_4_ =
         (fVar96 * fVar50 - fVar41 * fVar74) + fVar137 * fVar115 + fVar66 + auVar126._4_4_;
    auVar62._8_4_ =
         (fVar97 * fVar68 - fVar43 * fVar84) + fVar138 * fVar117 + fVar65 + auVar126._8_4_;
    auVar62._12_4_ =
         (fVar98 * fVar70 - fVar44 * fVar85) + fVar139 * fVar119 + fVar73 + auVar126._12_4_;
    auVar62._16_4_ =
         (fVar99 * fVar67 - fVar45 * fVar76) + fVar140 * fVar170 + fVar75 + auVar126._16_4_;
    auVar62._20_4_ =
         (fVar100 * fVar77 - fVar46 * fVar86) + fVar141 * fVar177 + fVar69 + auVar126._20_4_;
    auVar62._24_4_ =
         (fVar101 * fVar79 - fVar47 * fVar87) + fVar142 * fVar181 + fVar81 + auVar126._24_4_;
    auVar62._28_4_ =
         (fVar102 * fVar71 - fVar48 * fVar78) + fVar143 * fVar185 + fVar82 + auVar126._28_4_;
    auVar106._0_4_ = fVar40 * fVar125 + fVar114 + (fVar83 * fVar103 - fVar49 * fVar22) + local_460;
    auVar106._4_4_ = fVar41 * fVar137 + fVar116 + (fVar74 * fVar115 - fVar50 * fVar23) + fStack_45c;
    auVar106._8_4_ = fVar43 * fVar138 + fVar118 + (fVar84 * fVar117 - fVar68 * fVar34) + fStack_458;
    auVar106._12_4_ = fVar44 * fVar139 + fVar120 + (fVar85 * fVar119 - fVar70 * fVar35) + fStack_454
    ;
    auVar106._16_4_ = fVar45 * fVar140 + fVar175 + (fVar76 * fVar170 - fVar67 * fVar36) + fStack_450
    ;
    auVar106._20_4_ = fVar46 * fVar141 + fVar179 + (fVar86 * fVar177 - fVar77 * fVar37) + fStack_44c
    ;
    auVar106._24_4_ = fVar47 * fVar142 + fVar183 + (fVar87 * fVar181 - fVar79 * fVar38) + fStack_448
    ;
    auVar106._28_4_ = fVar48 * fVar143 + fVar187 + (fVar78 * fVar185 - fVar71 * fVar39) + fStack_444
    ;
    uVar2 = *param_10;
    auVar95._4_4_ = uVar2;
    auVar95._0_4_ = uVar2;
    auVar95._8_4_ = uVar2;
    auVar95._12_4_ = uVar2;
    auVar95._16_4_ = uVar2;
    auVar95._20_4_ = uVar2;
    auVar95._24_4_ = uVar2;
    auVar95._28_4_ = uVar2;
    auVar146 = vsubps_avx(auVar31,auVar95);
    uVar2 = param_10[1];
    auVar32._4_4_ = uVar2;
    auVar32._0_4_ = uVar2;
    auVar32._8_4_ = uVar2;
    auVar32._12_4_ = uVar2;
    auVar32._16_4_ = uVar2;
    auVar32._20_4_ = uVar2;
    auVar32._24_4_ = uVar2;
    auVar32._28_4_ = uVar2;
    auVar94 = vsubps_avx(auVar62,auVar32);
    uVar2 = param_10[2];
    auVar63._4_4_ = uVar2;
    auVar63._0_4_ = uVar2;
    auVar63._8_4_ = uVar2;
    auVar63._12_4_ = uVar2;
    auVar63._16_4_ = uVar2;
    auVar63._20_4_ = uVar2;
    auVar63._24_4_ = uVar2;
    auVar63._28_4_ = uVar2;
    auVar105 = vsubps_avx(auVar106,auVar63);
    auVar51 = auVar146._0_16_;
    auVar72 = auVar146._16_16_;
    auVar24 = auVar94._0_16_;
    if (cVar15 == -1) {
      auVar108._16_16_ = auVar24;
      auVar108._0_16_ = auVar51;
      auVar153 = vshufpd_avx(auVar146,auVar108,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar105);
      auVar121 = vpermpd_avx2(auVar94,0xe9);
      auVar121 = vblendps_avx(auVar90,auVar121,7);
      auVar134._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar134._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar90 = vpermps_avx2(auVar134,auVar121);
      auVar153 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar153);
      auVar153 = vblendps_avx(auVar153,auVar90,0xa4);
      *pauVar18 = auVar153;
      auVar153 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar121);
      auVar121 = vshufpd_avx(auVar146,auVar146,1);
      auVar121 = vblendps_avx(auVar153,auVar121,0x92);
      pauVar18[1] = auVar121;
      auVar109._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar109._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar153 = vpermps_avx2(auVar109,auVar94);
      auVar121 = vpermpd_avx2(auVar146,0xff);
      auVar121 = vblendps_avx(auVar153,auVar121,3);
      auVar121 = vblendps_avx(auVar121,auVar105,0xe0);
      auVar121 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar121);
      pauVar18[2] = auVar121;
      auVar121 = *(undefined1 (*) [32])(param_7 + lVar21 * 0xc);
      auVar153 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar21 * 0xc);
      auVar90 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar21 * 0xc);
      auVar91 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar153);
      auVar126 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar121);
      auVar91 = vblendps_avx(auVar126,auVar91,0x88);
      auVar126 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar153);
      auVar144 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar90);
      auVar126 = vblendps_avx(auVar144,auVar126,0x13);
      auVar107._16_16_ = auVar126._0_16_;
      auVar107._0_16_ = auVar91._0_16_;
      auVar91 = vperm2f128_avx(auVar91,auVar126,0x31);
      auVar121 = vblendps_avx(auVar153,auVar121,0x24);
      auVar121 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar121);
      auVar147._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar147._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar153 = vpermps_avx2(auVar147,auVar90);
      auVar121 = vblendps_avx(auVar121,auVar153,0xe0);
    }
    else {
      auVar42 = auVar94._16_16_;
      auVar150 = auVar105._0_16_;
      auVar162 = auVar105._16_16_;
      if ((uVar16 & 1) != 0) {
        *(int *)*pauVar18 = auVar146._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(*pauVar18 + 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)(*pauVar18 + 0x18) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(pauVar18[1] + 4) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x10) = auVar146._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(pauVar18[1] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)(pauVar18[2] + 8) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(pauVar18[2] + 0x14) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar18 + 4) = auVar94._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(*pauVar18 + 0x10) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(*pauVar18 + 0x1c) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(pauVar18[1] + 8) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x14) = auVar94._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)pauVar18[2] = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(pauVar18[2] + 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar18[2] + 0x18) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar18 + 8) = auVar105._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar150,1);
        *(undefined4 *)(*pauVar18 + 0x14) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar150,2);
        *(undefined4 *)pauVar18[1] = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar150,3);
        *(undefined4 *)(pauVar18[1] + 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x18) = auVar105._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar162,1);
        *(undefined4 *)(pauVar18[2] + 4) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar162,2);
        *(undefined4 *)(pauVar18[2] + 0x10) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar162,3);
        *(undefined4 *)(pauVar18[2] + 0x1c) = uVar2;
      }
      auVar107 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar91 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar121 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    }
    auVar146 = vsubps_avx(auVar107,auVar146);
    auVar110._4_4_ = param_11;
    auVar110._0_4_ = param_11;
    auVar110._8_4_ = param_11;
    auVar110._12_4_ = param_11;
    auVar110._16_4_ = param_11;
    auVar110._20_4_ = param_11;
    auVar110._24_4_ = param_11;
    auVar110._28_4_ = param_11;
    auVar146 = vdivps_avx(auVar146,auVar110);
    auVar94 = vsubps_avx(auVar91,auVar94);
    auVar94 = vdivps_avx(auVar94,auVar110);
    auVar105 = vsubps_avx(auVar121,auVar105);
    auVar105 = vdivps_avx(auVar105,auVar110);
    pauVar18 = (undefined1 (*) [32])(param_5 + lVar21 * 0xc);
    auVar51 = auVar146._0_16_;
    auVar72 = auVar146._16_16_;
    auVar24 = auVar94._0_16_;
    if (cVar15 == -1) {
      auVar111._16_16_ = auVar24;
      auVar111._0_16_ = auVar51;
      auVar153 = vshufpd_avx(auVar146,auVar111,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar105);
      auVar121 = vpermpd_avx2(auVar94,0xe9);
      auVar121 = vblendps_avx(auVar90,auVar121,7);
      auVar135._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar135._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar90 = vpermps_avx2(auVar135,auVar121);
      auVar153 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar153);
      auVar153 = vblendps_avx(auVar153,auVar90,0xa4);
      *pauVar18 = auVar153;
      auVar153 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar121);
      auVar121 = vshufpd_avx(auVar146,auVar146,1);
      auVar121 = vblendps_avx(auVar153,auVar121,0x92);
      pauVar18[1] = auVar121;
      auVar112._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar112._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar153 = vpermps_avx2(auVar112,auVar94);
      auVar121 = vpermpd_avx2(auVar146,0xff);
      auVar121 = vblendps_avx(auVar153,auVar121,3);
      auVar121 = vblendps_avx(auVar121,auVar105,0xe0);
      auVar121 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar121);
      pauVar18[2] = auVar121;
    }
    else {
      auVar42 = auVar94._16_16_;
      auVar150 = auVar105._0_16_;
      auVar162 = auVar105._16_16_;
      if ((uVar16 & 1) != 0) {
        *(float *)*pauVar18 = auVar146._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(*pauVar18 + 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)(*pauVar18 + 0x18) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(pauVar18[1] + 4) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(float *)(pauVar18[1] + 0x10) = auVar146._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(pauVar18[1] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)(pauVar18[2] + 8) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(pauVar18[2] + 0x14) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(float *)(*pauVar18 + 4) = auVar94._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(*pauVar18 + 0x10) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(*pauVar18 + 0x1c) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(pauVar18[1] + 8) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(float *)(pauVar18[1] + 0x14) = auVar94._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)pauVar18[2] = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(pauVar18[2] + 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar18[2] + 0x18) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(float *)(*pauVar18 + 8) = auVar105._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar150,1);
        *(undefined4 *)(*pauVar18 + 0x14) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar150,2);
        *(undefined4 *)pauVar18[1] = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar150,3);
        *(undefined4 *)(pauVar18[1] + 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(float *)(pauVar18[1] + 0x18) = auVar105._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar162,1);
        *(undefined4 *)(pauVar18[2] + 4) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar162,2);
        *(undefined4 *)(pauVar18[2] + 0x10) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar162,3);
        *(undefined4 *)(pauVar18[2] + 0x1c) = uVar2;
      }
    }
    auVar121 = vsubps_avx(local_400,auVar146);
    auVar153 = vsubps_avx(local_3e0,auVar94);
    auVar90 = vsubps_avx(local_3c0,auVar105);
    fVar22 = auVar153._0_4_;
    fVar23 = auVar153._4_4_;
    fVar34 = auVar153._8_4_;
    fVar35 = auVar153._12_4_;
    fVar36 = auVar153._16_4_;
    fVar37 = auVar153._20_4_;
    fVar38 = auVar153._24_4_;
    fVar39 = auVar153._28_4_;
    fVar40 = auVar121._0_4_;
    fVar41 = auVar121._4_4_;
    fVar43 = auVar121._8_4_;
    fVar44 = auVar121._12_4_;
    fVar45 = auVar121._16_4_;
    fVar46 = auVar121._20_4_;
    fVar47 = auVar121._24_4_;
    fVar48 = auVar121._28_4_;
    fVar49 = auVar90._0_4_;
    auVar148._0_4_ = fVar49 * fVar49 + fVar40 * fVar40 + fVar22 * fVar22;
    fVar64 = auVar90._4_4_;
    auVar148._4_4_ = fVar64 * fVar64 + fVar41 * fVar41 + fVar23 * fVar23;
    fVar50 = auVar90._8_4_;
    auVar148._8_4_ = fVar50 * fVar50 + fVar43 * fVar43 + fVar34 * fVar34;
    fVar66 = auVar90._12_4_;
    auVar148._12_4_ = fVar66 * fVar66 + fVar44 * fVar44 + fVar35 * fVar35;
    fVar68 = auVar90._16_4_;
    auVar148._16_4_ = fVar68 * fVar68 + fVar45 * fVar45 + fVar36 * fVar36;
    fVar65 = auVar90._20_4_;
    auVar148._20_4_ = fVar65 * fVar65 + fVar46 * fVar46 + fVar37 * fVar37;
    fVar70 = auVar90._24_4_;
    auVar148._24_4_ = fVar70 * fVar70 + fVar47 * fVar47 + fVar38 * fVar38;
    fVar73 = auVar90._28_4_;
    auVar148._28_4_ = fVar73 * fVar73 + fVar48 * fVar48 + fVar39 * fVar39;
    auVar169._4_4_ = param_14;
    auVar169._0_4_ = param_14;
    auVar169._8_4_ = param_14;
    auVar169._12_4_ = param_14;
    auVar169._16_4_ = param_14;
    auVar169._20_4_ = param_14;
    auVar169._24_4_ = param_14;
    auVar169._28_4_ = param_14;
    auVar121 = vcmpps_avx(auVar169,auVar148,1);
    auVar153 = auVar3 & auVar121;
    if ((((((((SUB321(auVar153 >> 0x1f,0) & 1) != 0 || (SUB321(auVar153 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar153 >> 0x5f,0) & 1) != 0) || SUB321(auVar153 >> 0x7f,0) != '\0') ||
          (SUB321(auVar153 >> 0x9f,0) & 1) != 0) || SUB321(auVar153 >> 0xbf,0) != '\0') ||
        (SUB321(auVar153 >> 0xdf,0) & 1) != 0) || auVar153[0x1f] < '\0') {
      auVar153 = vdivps_avx(auVar169,auVar148);
      auVar153 = vsqrtps_avx(auVar153);
      auVar80._0_4_ = auVar121._0_4_ & auVar3._0_4_;
      auVar80._4_4_ = auVar121._4_4_ & auVar3._4_4_;
      auVar80._8_4_ = auVar121._8_4_ & auVar3._8_4_;
      auVar80._12_4_ = auVar121._12_4_ & auVar3._12_4_;
      auVar80._16_4_ = auVar121._16_4_ & auVar3._16_4_;
      auVar80._20_4_ = auVar121._20_4_ & auVar3._20_4_;
      auVar80._24_4_ = auVar121._24_4_ & auVar3._24_4_;
      auVar80._28_4_ = auVar121._28_4_ & auVar3._28_4_;
      fVar67 = auVar153._0_4_;
      auVar113._0_4_ = fVar67 * fVar40 + auVar146._0_4_;
      fVar40 = auVar153._4_4_;
      auVar113._4_4_ = fVar40 * fVar41 + auVar146._4_4_;
      fVar41 = auVar153._8_4_;
      auVar113._8_4_ = fVar41 * fVar43 + auVar146._8_4_;
      fVar43 = auVar153._12_4_;
      auVar113._12_4_ = fVar43 * fVar44 + auVar146._12_4_;
      fVar44 = auVar153._16_4_;
      auVar113._16_4_ = fVar44 * fVar45 + auVar146._16_4_;
      fVar45 = auVar153._20_4_;
      auVar113._20_4_ = fVar45 * fVar46 + auVar146._20_4_;
      fVar46 = auVar153._24_4_;
      auVar113._24_4_ = fVar46 * fVar47 + auVar146._24_4_;
      fVar47 = auVar153._28_4_;
      auVar113._28_4_ = fVar47 * fVar48 + auVar146._28_4_;
      auVar122._0_4_ = fVar67 * fVar22 + auVar94._0_4_;
      auVar122._4_4_ = fVar40 * fVar23 + auVar94._4_4_;
      auVar122._8_4_ = fVar41 * fVar34 + auVar94._8_4_;
      auVar122._12_4_ = fVar43 * fVar35 + auVar94._12_4_;
      auVar122._16_4_ = fVar44 * fVar36 + auVar94._16_4_;
      auVar122._20_4_ = fVar45 * fVar37 + auVar94._20_4_;
      auVar122._24_4_ = fVar46 * fVar38 + auVar94._24_4_;
      auVar122._28_4_ = fVar47 * fVar39 + auVar94._28_4_;
      auVar136._0_4_ = fVar67 * fVar49 + auVar105._0_4_;
      auVar136._4_4_ = fVar40 * fVar64 + auVar105._4_4_;
      auVar136._8_4_ = fVar41 * fVar50 + auVar105._8_4_;
      auVar136._12_4_ = fVar43 * fVar66 + auVar105._12_4_;
      auVar136._16_4_ = fVar44 * fVar68 + auVar105._16_4_;
      auVar136._20_4_ = fVar45 * fVar65 + auVar105._20_4_;
      auVar136._24_4_ = fVar46 * fVar70 + auVar105._24_4_;
      auVar136._28_4_ = fVar47 * fVar73 + auVar105._28_4_;
      local_400 = vmaskmovps_avx(auVar80,auVar113);
      local_3e0 = vmaskmovps_avx(auVar80,auVar122);
      local_3c0 = vmaskmovps_avx(auVar80,auVar136);
    }
    if (cVar15 == -1) {
      auVar146 = vperm2f128_avx(local_400,local_3e0,0x20);
      auVar3 = vshufpd_avx(local_400,auVar146,2);
      auVar94 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,local_3c0);
      auVar146 = vpermpd_avx2(local_3e0,0xe9);
      auVar146 = vblendps_avx(auVar94,auVar146,7);
      auVar123._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar123._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar94 = vpermps_avx2(auVar123,auVar146);
      auVar3 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                            auVar3);
      auVar3 = vblendps_avx(auVar3,auVar94,0xa4);
      auVar124._8_8_ = local_400._24_8_;
      auVar124._0_8_ = local_400._24_8_;
      auVar124._16_8_ = local_400._24_8_;
      auVar124._24_8_ = local_400._24_8_;
      *pauVar12 = auVar3;
      auVar3 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                            auVar146);
      auVar146 = vshufpd_avx(local_400,local_400,1);
      auVar146 = vblendps_avx(auVar3,auVar146,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar21 * 0xc) = auVar146;
      auVar33._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar33._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar146 = vpermps_avx2(auVar33,local_3e0);
      auVar146 = vblendpd_avx(auVar146,auVar124,1);
      auVar146 = vblendps_avx(auVar146,local_3c0,0xe0);
      auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar146);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar21 * 0xc) = auVar146;
    }
    else {
      auVar24 = local_400._0_16_;
      auVar42 = local_400._16_16_;
      auVar51 = local_3e0._0_16_;
      auVar150 = local_3e0._16_16_;
      auVar72 = local_3c0._0_16_;
      auVar162 = local_3c0._16_16_;
      if ((uVar16 & 1) != 0) {
        *(int *)*pauVar12 = local_400._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(param_2 + 0xc + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(param_2 + 0x18 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(param_2 + 0x24 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + lVar21 * 0xc) = local_400._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)(param_2 + 0x3c + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(param_2 + 0x48 + lVar21 * 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(param_2 + 0x54 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(param_2 + 4 + lVar21 * 0xc) = local_3e0._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(param_2 + 0x10 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)(param_2 + 0x1c + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(param_2 + 0x28 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + lVar21 * 0xc) = local_3e0._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar150,1);
        *(undefined4 *)(param_2 + 0x40 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar150,2);
        *(undefined4 *)(param_2 + 0x4c + lVar21 * 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar150,3);
        *(undefined4 *)(param_2 + 0x58 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(param_2 + 8 + lVar21 * 0xc) = local_3c0._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(param_2 + 0x14 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)(param_2 + 0x20 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(param_2 + 0x2c + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + lVar21 * 0xc) = local_3c0._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar162,1);
        *(undefined4 *)(param_2 + 0x44 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar162,2);
        *(undefined4 *)(param_2 + 0x50 + lVar21 * 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar162,3);
        *(undefined4 *)(param_2 + 0x5c + lVar21 * 0xc) = uVar2;
      }
    }
  }
  return;
}

// PreSubstepInterpolation___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_avx2 @ 140cdddb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PreSubstepInterpolation___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,uint param_8,int param_9)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [32];
  longlong lVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [16];
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
  undefined1 auVar50 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [32];
  undefined1 auVar20 [32];
  undefined1 auVar27 [32];
  undefined1 auVar51 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  
  auVar49 = ___ymm_0000000700000005000000070000000500000003000000010000000700000004;
  auVar41 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
  auVar34 = ___ymm_0000000600000003000000000000000000000005000000020000000000000000;
  auVar52 = ___ymm_0000000000000007000000040000000100000000000000060000000300000000;
  uVar2 = __real_00800000;
  fVar4 = __real_3f800000;
  uVar9 = (ulonglong)param_8;
  uVar11 = param_9 - param_8;
  uVar8 = uVar11 + 7;
  if (-1 < (int)uVar11) {
    uVar8 = uVar11;
  }
  iVar12 = ((uVar8 & 0xfffffff8) - uVar11) + param_9;
  if ((int)param_8 < iVar12) {
    fVar3 = __real_3f800000 - param_7;
    uVar9 = (ulonglong)(int)param_8;
    lVar6 = uVar9 * 0xc;
    lVar16 = param_3 + 0x40;
    lVar17 = param_4 + 0x40;
    lVar14 = param_1 + 0x40;
    lVar15 = param_5 + 0x40;
    lVar10 = param_6 + 0x40;
    lVar13 = param_2 + 0x40;
    do {
      auVar59 = ___ymm_0000000700000004000000010000000000000003000000000000000100000000;
      auVar54 = ___ymm_0000000200000002000000000000000000000001000000000000000100000000;
      auVar48 = *(undefined1 (*) [32])(lVar16 + -0x40 + lVar6);
      auVar55 = *(undefined1 (*) [32])(lVar16 + -0x20 + lVar6);
      auVar5 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                            auVar55);
      auVar44 = vpermps_avx2(auVar52,auVar48);
      auVar5 = vblendps_avx(auVar44,auVar5,0x88);
      auVar44 = vpermps_avx2(auVar49,auVar55);
      auVar53 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar16 + lVar6));
      auVar44 = vblendps_avx(auVar53,auVar44,0x13);
      auVar32 = vperm2f128_avx(auVar5,auVar44,0x31);
      auVar48 = vblendps_avx(auVar55,auVar48,0x24);
      auVar48 = vpermps_avx2(auVar41,auVar48);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar16 + lVar6));
      auVar53 = vblendps_avx(auVar48,auVar55,0xe0);
      auVar48 = *(undefined1 (*) [32])(lVar17 + -0x40 + lVar6);
      auVar55 = *(undefined1 (*) [32])(lVar17 + -0x20 + lVar6);
      auVar23 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar55);
      auVar24 = vpermps_avx2(auVar52,auVar48);
      auVar23 = vblendps_avx(auVar24,auVar23,0x88);
      auVar24 = vpermps_avx2(auVar49,auVar55);
      auVar33 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar17 + lVar6));
      auVar24 = vblendps_avx(auVar33,auVar24,0x13);
      auVar33 = vperm2f128_avx(auVar23,auVar24,0x31);
      auVar48 = vblendps_avx(auVar55,auVar48,0x24);
      auVar48 = vpermps_avx2(auVar41,auVar48);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar17 + lVar6));
      auVar48 = vblendps_avx(auVar48,auVar55,0xe0);
      auVar56._0_4_ = param_7 * auVar5._0_4_ + auVar23._0_4_ * fVar3;
      auVar56._4_4_ = param_7 * auVar5._4_4_ + auVar23._4_4_ * fVar3;
      auVar56._8_4_ = param_7 * auVar5._8_4_ + auVar23._8_4_ * fVar3;
      auVar56._12_4_ = param_7 * auVar5._12_4_ + auVar23._12_4_ * fVar3;
      auVar58._16_4_ = param_7 * auVar44._0_4_ + auVar24._0_4_ * fVar3;
      auVar58._0_16_ = auVar56;
      auVar58._20_4_ = param_7 * auVar44._4_4_ + auVar24._4_4_ * fVar3;
      auVar58._24_4_ = param_7 * auVar44._8_4_ + auVar24._8_4_ * fVar3;
      auVar58._28_4_ = param_7 * auVar44._12_4_ + auVar24._12_4_ * fVar3;
      auVar21._0_4_ = param_7 * auVar32._0_4_ + fVar3 * auVar33._0_4_;
      auVar21._4_4_ = param_7 * auVar32._4_4_ + fVar3 * auVar33._4_4_;
      auVar21._8_4_ = param_7 * auVar32._8_4_ + fVar3 * auVar33._8_4_;
      auVar21._12_4_ = param_7 * auVar32._12_4_ + fVar3 * auVar33._12_4_;
      auVar44._16_4_ = param_7 * auVar32._16_4_ + fVar3 * auVar33._16_4_;
      auVar44._0_16_ = auVar21;
      auVar44._20_4_ = param_7 * auVar32._20_4_ + fVar3 * auVar33._20_4_;
      auVar44._24_4_ = param_7 * auVar32._24_4_ + fVar3 * auVar33._24_4_;
      auVar44._28_4_ = param_7 * auVar32._28_4_ + fVar3 * auVar33._28_4_;
      auVar32._0_4_ = param_7 * auVar53._0_4_ + fVar3 * auVar48._0_4_;
      auVar32._4_4_ = param_7 * auVar53._4_4_ + fVar3 * auVar48._4_4_;
      auVar32._8_4_ = param_7 * auVar53._8_4_ + fVar3 * auVar48._8_4_;
      auVar32._12_4_ = param_7 * auVar53._12_4_ + fVar3 * auVar48._12_4_;
      auVar32._16_4_ = param_7 * auVar53._16_4_ + fVar3 * auVar48._16_4_;
      auVar32._20_4_ = param_7 * auVar53._20_4_ + fVar3 * auVar48._20_4_;
      auVar32._24_4_ = param_7 * auVar53._24_4_ + fVar3 * auVar48._24_4_;
      auVar32._28_4_ = param_7 * auVar53._28_4_ + fVar3 * auVar48._28_4_;
      auVar53._16_16_ = auVar21;
      auVar53._0_16_ = auVar56;
      auVar55 = vshufpd_avx(auVar58,auVar53,2);
      auVar48 = vpermpd_avx2(auVar44,0xe9);
      auVar5 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                            auVar32);
      auVar48 = vblendps_avx(auVar5,auVar48,7);
      auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar55);
      auVar5 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003,
                            auVar48);
      auVar55 = vblendps_avx(auVar55,auVar5,0xa4);
      *(undefined1 (*) [32])(lVar14 + -0x40 + lVar6) = auVar55;
      auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar48);
      auVar48 = vshufpd_avx(auVar58,auVar58,1);
      auVar48 = vblendps_avx(auVar55,auVar48,0x92);
      *(undefined1 (*) [32])(lVar14 + -0x20 + lVar6) = auVar48;
      auVar55 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar44);
      auVar48 = vpermpd_avx2(auVar58,0xff);
      auVar48 = vblendps_avx(auVar55,auVar48,3);
      auVar48 = vblendps_avx(auVar48,auVar32,0xe0);
      auVar48 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar48);
      *(undefined1 (*) [32])(lVar14 + lVar6) = auVar48;
      auVar48 = *(undefined1 (*) [32])(lVar15 + -0x40 + lVar6);
      auVar55 = *(undefined1 (*) [32])(lVar15 + -0x20 + lVar6);
      auVar5 = vpermps_avx2(auVar54,auVar55);
      auVar44 = vpermps_avx2(auVar52,auVar48);
      auVar5 = vblendps_avx(auVar44,auVar5,0x88);
      auVar44 = vpermps_avx2(auVar49,auVar55);
      auVar53 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar15 + lVar6));
      auVar44 = vblendps_avx(auVar53,auVar44,0x13);
      auVar32 = vperm2f128_avx(auVar5,auVar44,0x31);
      auVar48 = vblendps_avx(auVar55,auVar48,0x24);
      auVar48 = vpermps_avx2(auVar41,auVar48);
      auVar55 = vpermps_avx2(auVar59,*(undefined1 (*) [32])(lVar15 + lVar6));
      auVar53 = vblendps_avx(auVar48,auVar55,0xe0);
      auVar48 = *(undefined1 (*) [32])(lVar10 + -0x40 + lVar6);
      auVar55 = *(undefined1 (*) [32])(lVar10 + -0x20 + lVar6);
      auVar23 = vpermps_avx2(auVar54,auVar55);
      auVar24 = vpermps_avx2(auVar52,auVar48);
      auVar23 = vblendps_avx(auVar24,auVar23,0x88);
      auVar24 = vpermps_avx2(auVar49,auVar55);
      auVar33 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar10 + lVar6));
      auVar24 = vblendps_avx(auVar33,auVar24,0x13);
      auVar33 = vperm2f128_avx(auVar23,auVar24,0x31);
      auVar48 = vblendps_avx(auVar55,auVar48,0x24);
      auVar48 = vpermps_avx2(auVar41,auVar48);
      auVar55 = vpermps_avx2(auVar59,*(undefined1 (*) [32])(lVar10 + lVar6));
      auVar48 = vblendps_avx(auVar48,auVar55,0xe0);
      auVar54._0_4_ = param_7 * auVar5._0_4_ + auVar23._0_4_ * fVar3;
      auVar54._4_4_ = param_7 * auVar5._4_4_ + auVar23._4_4_ * fVar3;
      auVar54._8_4_ = param_7 * auVar5._8_4_ + auVar23._8_4_ * fVar3;
      auVar54._12_4_ = param_7 * auVar5._12_4_ + auVar23._12_4_ * fVar3;
      auVar54._16_4_ = param_7 * auVar44._0_4_ + auVar24._0_4_ * fVar3;
      auVar54._20_4_ = param_7 * auVar44._4_4_ + auVar24._4_4_ * fVar3;
      auVar54._24_4_ = param_7 * auVar44._8_4_ + auVar24._8_4_ * fVar3;
      auVar54._28_4_ = param_7 * auVar44._12_4_ + auVar24._12_4_ * fVar3;
      auVar60._0_4_ = param_7 * auVar32._0_4_ + auVar33._0_4_ * fVar3;
      auVar60._4_4_ = param_7 * auVar32._4_4_ + auVar33._4_4_ * fVar3;
      auVar60._8_4_ = param_7 * auVar32._8_4_ + auVar33._8_4_ * fVar3;
      auVar60._12_4_ = param_7 * auVar32._12_4_ + auVar33._12_4_ * fVar3;
      auVar60._16_4_ = param_7 * auVar32._16_4_ + auVar33._16_4_ * fVar3;
      auVar60._20_4_ = param_7 * auVar32._20_4_ + auVar33._20_4_ * fVar3;
      auVar60._24_4_ = param_7 * auVar32._24_4_ + auVar33._24_4_ * fVar3;
      auVar60._28_4_ = param_7 * auVar32._28_4_ + auVar33._28_4_ * fVar3;
      auVar33._0_4_ = param_7 * auVar53._0_4_ + fVar3 * auVar48._0_4_;
      auVar33._4_4_ = param_7 * auVar53._4_4_ + fVar3 * auVar48._4_4_;
      auVar33._8_4_ = param_7 * auVar53._8_4_ + fVar3 * auVar48._8_4_;
      auVar33._12_4_ = param_7 * auVar53._12_4_ + fVar3 * auVar48._12_4_;
      auVar33._16_4_ = param_7 * auVar53._16_4_ + fVar3 * auVar48._16_4_;
      auVar33._20_4_ = param_7 * auVar53._20_4_ + fVar3 * auVar48._20_4_;
      auVar33._24_4_ = param_7 * auVar53._24_4_ + fVar3 * auVar48._24_4_;
      auVar33._28_4_ = param_7 * auVar53._28_4_ + fVar3 * auVar48._28_4_;
      auVar23._0_4_ =
           auVar33._0_4_ * auVar33._0_4_ +
           auVar54._0_4_ * auVar54._0_4_ + auVar60._0_4_ * auVar60._0_4_;
      auVar23._4_4_ =
           auVar33._4_4_ * auVar33._4_4_ +
           auVar54._4_4_ * auVar54._4_4_ + auVar60._4_4_ * auVar60._4_4_;
      auVar23._8_4_ =
           auVar33._8_4_ * auVar33._8_4_ +
           auVar54._8_4_ * auVar54._8_4_ + auVar60._8_4_ * auVar60._8_4_;
      auVar23._12_4_ =
           auVar33._12_4_ * auVar33._12_4_ +
           auVar54._12_4_ * auVar54._12_4_ + auVar60._12_4_ * auVar60._12_4_;
      auVar23._16_4_ =
           auVar33._16_4_ * auVar33._16_4_ +
           auVar54._16_4_ * auVar54._16_4_ + auVar60._16_4_ * auVar60._16_4_;
      auVar23._20_4_ =
           auVar33._20_4_ * auVar33._20_4_ +
           auVar54._20_4_ * auVar54._20_4_ + auVar60._20_4_ * auVar60._20_4_;
      auVar23._24_4_ =
           auVar33._24_4_ * auVar33._24_4_ +
           auVar54._24_4_ * auVar54._24_4_ + auVar60._24_4_ * auVar60._24_4_;
      auVar23._28_4_ =
           auVar33._28_4_ * auVar33._28_4_ +
           auVar54._28_4_ * auVar54._28_4_ + auVar60._28_4_ * auVar60._28_4_;
      auVar48 = vsqrtps_avx(auVar23);
      auVar55 = vdivps_avx(auVar54,auVar48);
      auVar44 = vdivps_avx(auVar60,auVar48);
      auVar53 = vdivps_avx(auVar33,auVar48);
      auVar48._4_4_ = uVar2;
      auVar48._0_4_ = uVar2;
      auVar48._8_4_ = uVar2;
      auVar48._12_4_ = uVar2;
      auVar48._16_4_ = uVar2;
      auVar48._20_4_ = uVar2;
      auVar48._24_4_ = uVar2;
      auVar48._28_4_ = uVar2;
      auVar48 = vcmpps_avx(auVar23,auVar48,2);
      auVar5._4_4_ = fVar4;
      auVar5._0_4_ = fVar4;
      auVar5._8_4_ = fVar4;
      auVar5._12_4_ = fVar4;
      auVar5._16_4_ = fVar4;
      auVar5._20_4_ = fVar4;
      auVar5._24_4_ = fVar4;
      auVar5._28_4_ = fVar4;
      auVar5 = vblendvps_avx(auVar55,auVar5,auVar48);
      auVar57._0_4_ = ~auVar48._0_4_ & auVar44._0_4_;
      auVar57._4_4_ = ~auVar48._4_4_ & auVar44._4_4_;
      auVar57._8_4_ = ~auVar48._8_4_ & auVar44._8_4_;
      auVar57._12_4_ = ~auVar48._12_4_ & auVar44._12_4_;
      auVar59._16_4_ = ~auVar48._16_4_ & auVar44._16_4_;
      auVar59._0_16_ = auVar57;
      auVar59._20_4_ = ~auVar48._20_4_ & auVar44._20_4_;
      auVar59._24_4_ = ~auVar48._24_4_ & auVar44._24_4_;
      auVar59._28_4_ = ~auVar48._28_4_ & auVar44._28_4_;
      auVar24._0_4_ = ~auVar48._0_4_ & auVar53._0_4_;
      auVar24._4_4_ = ~auVar48._4_4_ & auVar53._4_4_;
      auVar24._8_4_ = ~auVar48._8_4_ & auVar53._8_4_;
      auVar24._12_4_ = ~auVar48._12_4_ & auVar53._12_4_;
      auVar24._16_4_ = ~auVar48._16_4_ & auVar53._16_4_;
      auVar24._20_4_ = ~auVar48._20_4_ & auVar53._20_4_;
      auVar24._24_4_ = ~auVar48._24_4_ & auVar53._24_4_;
      auVar24._28_4_ = ~auVar48._28_4_ & auVar53._28_4_;
      auVar55._16_16_ = auVar57;
      auVar55._0_16_ = auVar5._0_16_;
      auVar55 = vshufpd_avx(auVar5,auVar55,2);
      auVar44 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar24);
      auVar48 = vpermpd_avx2(auVar59,0xe9);
      auVar48 = vblendps_avx(auVar44,auVar48,7);
      auVar44 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar48);
      auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar55);
      auVar55 = vblendps_avx(auVar55,auVar44,0xa4);
      *(undefined1 (*) [32])(lVar13 + -0x40 + lVar6) = auVar55;
      auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar48);
      auVar48 = vshufpd_avx(auVar5,auVar5,1);
      auVar48 = vblendps_avx(auVar55,auVar48,0x92);
      *(undefined1 (*) [32])(lVar13 + -0x20 + lVar6) = auVar48;
      auVar55 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar59);
      auVar48 = vpermpd_avx2(auVar5,0xff);
      auVar48 = vblendps_avx(auVar55,auVar48,3);
      auVar48 = vblendps_avx(auVar48,auVar24,0xe0);
      auVar48 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar48);
      *(undefined1 (*) [32])(lVar13 + lVar6) = auVar48;
      uVar9 = uVar9 + 8;
      lVar16 = lVar16 + 0x60;
      lVar17 = lVar17 + 0x60;
      lVar14 = lVar14 + 0x60;
      lVar15 = lVar15 + 0x60;
      lVar10 = lVar10 + 0x60;
      lVar13 = lVar13 + 0x60;
    } while ((longlong)uVar9 < (longlong)iVar12);
  }
  iVar12 = (int)uVar9;
  if (iVar12 < param_9) {
    auVar52._0_4_ = iVar12 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000
    ;
    auVar52._4_4_ = iVar12 + _UNK_150b50ae4;
    auVar52._8_4_ = iVar12 + _UNK_150b50ae8;
    auVar52._12_4_ = iVar12 + _UNK_150b50aec;
    auVar52._16_4_ = iVar12 + _UNK_150b50af0;
    auVar52._20_4_ = iVar12 + _UNK_150b50af4;
    auVar52._24_4_ = iVar12 + _UNK_150b50af8;
    auVar52._28_4_ = iVar12 + _UNK_150b50afc;
    auVar34._4_4_ = param_9;
    auVar34._0_4_ = param_9;
    auVar34._8_4_ = param_9;
    auVar34._12_4_ = param_9;
    auVar34._16_4_ = param_9;
    auVar34._20_4_ = param_9;
    auVar34._24_4_ = param_9;
    auVar34._28_4_ = param_9;
    auVar52 = vpcmpgtd_avx2(auVar34,auVar52);
    lVar16 = (longlong)iVar12;
    pauVar1 = (undefined1 (*) [32])(param_3 + lVar16 * 0xc);
    uVar8 = vmovmskps_avx(auVar52);
    if (uVar8 == 0xff) {
      auVar34 = pauVar1[1];
      auVar41 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar34);
      auVar49 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar41 = vblendps_avx(auVar49,auVar41,0x88);
      auVar49 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar34);
      auVar48 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar49 = vblendps_avx(auVar48,auVar49,0x13);
      auVar40._16_16_ = auVar49._0_16_;
      auVar40._0_16_ = auVar41._0_16_;
      auVar44 = vperm2f128_avx(auVar41,auVar49,0x31);
      auVar34 = vblendps_avx(auVar34,*pauVar1,0x24);
      auVar34 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar34);
      auVar41 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar1[2]);
      auVar48 = vblendps_avx(auVar34,auVar41,0xe0);
      auVar34 = *(undefined1 (*) [32])(param_4 + lVar16 * 0xc);
      auVar41 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar16 * 0xc);
      auVar49 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar16 * 0xc);
      auVar55 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar41);
      auVar5 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar34);
      auVar55 = vblendps_avx(auVar5,auVar55,0x88);
      auVar5 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                            auVar41);
      auVar53 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar49);
      auVar5 = vblendps_avx(auVar53,auVar5,0x13);
      auVar39._16_16_ = auVar5._0_16_;
      auVar39._0_16_ = auVar55._0_16_;
      auVar55 = vperm2f128_avx(auVar55,auVar5,0x31);
      auVar34 = vblendps_avx(auVar41,auVar34,0x24);
      auVar34 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar34);
      auVar41 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar49);
      auVar34 = vblendps_avx(auVar34,auVar41,0xe0);
    }
    else {
      auVar40 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar48 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar39 = vgatherdps(ZEXT832(0),auVar52);
      auVar55 = vgatherdps(ZEXT832(0),auVar52);
      auVar34 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
    }
    fVar4 = __real_3f800000 - param_7;
    auVar50._0_4_ = param_7 * auVar40._0_4_ + fVar4 * auVar39._0_4_;
    auVar50._4_4_ = param_7 * auVar40._4_4_ + fVar4 * auVar39._4_4_;
    auVar50._8_4_ = param_7 * auVar40._8_4_ + fVar4 * auVar39._8_4_;
    auVar50._12_4_ = param_7 * auVar40._12_4_ + fVar4 * auVar39._12_4_;
    auVar51._16_4_ = param_7 * auVar40._16_4_ + fVar4 * auVar39._16_4_;
    auVar51._0_16_ = auVar50;
    auVar51._20_4_ = param_7 * auVar40._20_4_ + fVar4 * auVar39._20_4_;
    auVar51._24_4_ = param_7 * auVar40._24_4_ + fVar4 * auVar39._24_4_;
    auVar51._28_4_ = param_7 * auVar40._28_4_ + fVar4 * auVar39._28_4_;
    auVar38._0_4_ = param_7 * auVar44._0_4_ + auVar55._0_4_ * fVar4;
    auVar38._4_4_ = param_7 * auVar44._4_4_ + auVar55._4_4_ * fVar4;
    auVar38._8_4_ = param_7 * auVar44._8_4_ + auVar55._8_4_ * fVar4;
    auVar38._12_4_ = param_7 * auVar44._12_4_ + auVar55._12_4_ * fVar4;
    auVar49._16_4_ = param_7 * auVar44._16_4_ + auVar55._16_4_ * fVar4;
    auVar49._0_16_ = auVar38;
    auVar49._20_4_ = param_7 * auVar44._20_4_ + auVar55._20_4_ * fVar4;
    auVar49._24_4_ = param_7 * auVar44._24_4_ + auVar55._24_4_ * fVar4;
    auVar49._28_4_ = param_7 * auVar44._28_4_ + auVar55._28_4_ * fVar4;
    auVar31._0_4_ = param_7 * auVar48._0_4_ + fVar4 * auVar34._0_4_;
    auVar31._4_4_ = param_7 * auVar48._4_4_ + fVar4 * auVar34._4_4_;
    auVar31._8_4_ = param_7 * auVar48._8_4_ + fVar4 * auVar34._8_4_;
    auVar31._12_4_ = param_7 * auVar48._12_4_ + fVar4 * auVar34._12_4_;
    auVar41._16_4_ = param_7 * auVar48._16_4_ + fVar4 * auVar34._16_4_;
    auVar41._0_16_ = auVar31;
    auVar41._20_4_ = param_7 * auVar48._20_4_ + fVar4 * auVar34._20_4_;
    auVar41._24_4_ = param_7 * auVar48._24_4_ + fVar4 * auVar34._24_4_;
    auVar41._28_4_ = param_7 * auVar48._28_4_ + fVar4 * auVar34._28_4_;
    pauVar1 = (undefined1 (*) [32])(param_1 + lVar16 * 0xc);
    cVar7 = (char)uVar8;
    auVar21 = auVar51._16_16_;
    if (cVar7 == -1) {
      auVar28._16_16_ = auVar38;
      auVar28._0_16_ = auVar50;
      auVar34 = vshufpd_avx(auVar51,auVar28,2);
      auVar48 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar41);
      auVar52 = vpermpd_avx2(auVar49,0xe9);
      auVar52 = vblendps_avx(auVar48,auVar52,7);
      auVar46._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar46._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar48 = vpermps_avx2(auVar46,auVar52);
      auVar34 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar34);
      auVar34 = vblendps_avx(auVar34,auVar48,0xa4);
      *pauVar1 = auVar34;
      auVar34 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar52);
      auVar52 = vshufpd_avx(auVar51,auVar51,1);
      auVar52 = vblendps_avx(auVar34,auVar52,0x92);
      pauVar1[1] = auVar52;
      auVar29._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar29._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar34 = vpermps_avx2(auVar29,auVar49);
      auVar52 = vpermpd_avx2(auVar51,0xff);
      auVar52 = vblendps_avx(auVar34,auVar52,3);
      auVar52 = vblendps_avx(auVar52,auVar41,0xe0);
      auVar52 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar52);
      pauVar1[2] = auVar52;
      lVar17 = lVar16 * 0xc;
      auVar52 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar17);
      auVar34 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar17);
      auVar41 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar52);
      auVar49 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(param_5 + lVar17));
      auVar41 = vblendps_avx(auVar49,auVar41,0x88);
      auVar49 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar52);
      auVar48 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar34);
      auVar49 = vblendps_avx(auVar48,auVar49,0x13);
      auVar35._16_16_ = auVar49._0_16_;
      auVar35._0_16_ = auVar41._0_16_;
      auVar55 = vperm2f128_avx(auVar41,auVar49,0x31);
      auVar52 = vblendps_avx(auVar52,*(undefined1 (*) [32])(param_5 + lVar17),0x24);
      auVar52 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar52);
      auVar34 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar34);
      auVar41 = vblendps_avx(auVar52,auVar34,0xe0);
      auVar52 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar17);
      auVar34 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar17);
      auVar49 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar52);
      auVar48 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(param_6 + lVar17));
      auVar49 = vblendps_avx(auVar48,auVar49,0x88);
      auVar48 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar52);
      auVar5 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            auVar34);
      auVar48 = vblendps_avx(auVar5,auVar48,0x13);
      auVar45._16_16_ = auVar48._0_16_;
      auVar45._0_16_ = auVar49._0_16_;
      auVar49 = vperm2f128_avx(auVar49,auVar48,0x31);
      auVar52 = vblendps_avx(auVar52,*(undefined1 (*) [32])(param_6 + lVar17),0x24);
      auVar52 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar52);
      auVar34 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar34);
      auVar52 = vblendps_avx(auVar52,auVar34,0xe0);
    }
    else {
      auVar57 = auVar49._16_16_;
      auVar56 = auVar41._16_16_;
      if ((uVar8 & 1) != 0) {
        *(float *)*pauVar1 = auVar50._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar50,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar50,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar50,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x10) = auVar51._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar21,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar21,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar21,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar8 & 1) != 0) {
        *(float *)(*pauVar1 + 4) = auVar38._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar38,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar38,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar38,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x14) = auVar49._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar57,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar57,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar57,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar8 & 1) != 0) {
        *(float *)(*pauVar1 + 8) = auVar31._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar31,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar31,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar31,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x18) = auVar41._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar56,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar56,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar56,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
      auVar35 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar55 = vgatherdps(ZEXT832(0),auVar52);
      auVar41 = vgatherdps(ZEXT832(0),auVar52);
      auVar45 = vgatherdps(ZEXT832(0),auVar52);
      auVar49 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar52 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
    }
    auVar30._0_4_ = param_7 * auVar35._0_4_ + fVar4 * auVar45._0_4_;
    auVar30._4_4_ = param_7 * auVar35._4_4_ + fVar4 * auVar45._4_4_;
    auVar30._8_4_ = param_7 * auVar35._8_4_ + fVar4 * auVar45._8_4_;
    auVar30._12_4_ = param_7 * auVar35._12_4_ + fVar4 * auVar45._12_4_;
    auVar30._16_4_ = param_7 * auVar35._16_4_ + fVar4 * auVar45._16_4_;
    auVar30._20_4_ = param_7 * auVar35._20_4_ + fVar4 * auVar45._20_4_;
    auVar30._24_4_ = param_7 * auVar35._24_4_ + fVar4 * auVar45._24_4_;
    auVar30._28_4_ = param_7 * auVar35._28_4_ + fVar4 * auVar45._28_4_;
    auVar47._0_4_ = param_7 * auVar55._0_4_ + fVar4 * auVar49._0_4_;
    auVar47._4_4_ = param_7 * auVar55._4_4_ + fVar4 * auVar49._4_4_;
    auVar47._8_4_ = param_7 * auVar55._8_4_ + fVar4 * auVar49._8_4_;
    auVar47._12_4_ = param_7 * auVar55._12_4_ + fVar4 * auVar49._12_4_;
    auVar47._16_4_ = param_7 * auVar55._16_4_ + fVar4 * auVar49._16_4_;
    auVar47._20_4_ = param_7 * auVar55._20_4_ + fVar4 * auVar49._20_4_;
    auVar47._24_4_ = param_7 * auVar55._24_4_ + fVar4 * auVar49._24_4_;
    auVar47._28_4_ = param_7 * auVar55._28_4_ + fVar4 * auVar49._28_4_;
    auVar25._0_4_ = param_7 * auVar41._0_4_ + auVar52._0_4_ * fVar4;
    auVar25._4_4_ = param_7 * auVar41._4_4_ + auVar52._4_4_ * fVar4;
    auVar25._8_4_ = param_7 * auVar41._8_4_ + auVar52._8_4_ * fVar4;
    auVar25._12_4_ = param_7 * auVar41._12_4_ + auVar52._12_4_ * fVar4;
    auVar25._16_4_ = param_7 * auVar41._16_4_ + auVar52._16_4_ * fVar4;
    auVar25._20_4_ = param_7 * auVar41._20_4_ + auVar52._20_4_ * fVar4;
    auVar25._24_4_ = param_7 * auVar41._24_4_ + auVar52._24_4_ * fVar4;
    auVar25._28_4_ = param_7 * auVar41._28_4_ + auVar52._28_4_ * fVar4;
    auVar19._0_4_ =
         auVar25._0_4_ * auVar25._0_4_ +
         auVar30._0_4_ * auVar30._0_4_ + auVar47._0_4_ * auVar47._0_4_;
    auVar19._4_4_ =
         auVar25._4_4_ * auVar25._4_4_ +
         auVar30._4_4_ * auVar30._4_4_ + auVar47._4_4_ * auVar47._4_4_;
    auVar19._8_4_ =
         auVar25._8_4_ * auVar25._8_4_ +
         auVar30._8_4_ * auVar30._8_4_ + auVar47._8_4_ * auVar47._8_4_;
    auVar19._12_4_ =
         auVar25._12_4_ * auVar25._12_4_ +
         auVar30._12_4_ * auVar30._12_4_ + auVar47._12_4_ * auVar47._12_4_;
    auVar19._16_4_ =
         auVar25._16_4_ * auVar25._16_4_ +
         auVar30._16_4_ * auVar30._16_4_ + auVar47._16_4_ * auVar47._16_4_;
    auVar19._20_4_ =
         auVar25._20_4_ * auVar25._20_4_ +
         auVar30._20_4_ * auVar30._20_4_ + auVar47._20_4_ * auVar47._20_4_;
    auVar19._24_4_ =
         auVar25._24_4_ * auVar25._24_4_ +
         auVar30._24_4_ * auVar30._24_4_ + auVar47._24_4_ * auVar47._24_4_;
    auVar19._28_4_ =
         auVar25._28_4_ * auVar25._28_4_ +
         auVar30._28_4_ * auVar30._28_4_ + auVar47._28_4_ * auVar47._28_4_;
    auVar34 = vsqrtps_avx(auVar19);
    auVar52 = vdivps_avx(auVar30,auVar34);
    auVar41 = vdivps_avx(auVar47,auVar34);
    auVar42._4_4_ = __real_00800000;
    auVar42._0_4_ = __real_00800000;
    auVar42._8_4_ = __real_00800000;
    auVar42._12_4_ = __real_00800000;
    auVar42._16_4_ = __real_00800000;
    auVar42._20_4_ = __real_00800000;
    auVar42._24_4_ = __real_00800000;
    auVar42._28_4_ = __real_00800000;
    auVar49 = vdivps_avx(auVar25,auVar34);
    auVar34 = vcmpps_avx(auVar19,auVar42,2);
    auVar26._4_4_ = __real_3f800000;
    auVar26._0_4_ = __real_3f800000;
    auVar26._8_4_ = __real_3f800000;
    auVar26._12_4_ = __real_3f800000;
    auVar26._16_4_ = __real_3f800000;
    auVar26._20_4_ = __real_3f800000;
    auVar26._24_4_ = __real_3f800000;
    auVar26._28_4_ = __real_3f800000;
    auVar52 = vblendvps_avx(auVar52,auVar26,auVar34);
    auVar22._0_4_ = ~auVar34._0_4_ & auVar41._0_4_;
    auVar22._4_4_ = ~auVar34._4_4_ & auVar41._4_4_;
    auVar22._8_4_ = ~auVar34._8_4_ & auVar41._8_4_;
    auVar22._12_4_ = ~auVar34._12_4_ & auVar41._12_4_;
    auVar27._16_4_ = ~auVar34._16_4_ & auVar41._16_4_;
    auVar27._0_16_ = auVar22;
    auVar27._20_4_ = ~auVar34._20_4_ & auVar41._20_4_;
    auVar27._24_4_ = ~auVar34._24_4_ & auVar41._24_4_;
    auVar27._28_4_ = ~auVar34._28_4_ & auVar41._28_4_;
    auVar18._0_4_ = ~auVar34._0_4_ & auVar49._0_4_;
    auVar18._4_4_ = ~auVar34._4_4_ & auVar49._4_4_;
    auVar18._8_4_ = ~auVar34._8_4_ & auVar49._8_4_;
    auVar18._12_4_ = ~auVar34._12_4_ & auVar49._12_4_;
    auVar20._16_4_ = ~auVar34._16_4_ & auVar49._16_4_;
    auVar20._0_16_ = auVar18;
    auVar20._20_4_ = ~auVar34._20_4_ & auVar49._20_4_;
    auVar20._24_4_ = ~auVar34._24_4_ & auVar49._24_4_;
    auVar20._28_4_ = ~auVar34._28_4_ & auVar49._28_4_;
    pauVar1 = (undefined1 (*) [32])(param_2 + lVar16 * 0xc);
    auVar21 = auVar52._0_16_;
    auVar56 = auVar52._16_16_;
    if (cVar7 == -1) {
      auVar36._16_16_ = auVar22;
      auVar36._0_16_ = auVar21;
      auVar41 = vshufpd_avx(auVar52,auVar36,2);
      auVar49 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar20);
      auVar34 = vpermpd_avx2(auVar27,0xe9);
      auVar34 = vblendps_avx(auVar49,auVar34,7);
      auVar43._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar43._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar49 = vpermps_avx2(auVar43,auVar34);
      auVar41 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar41);
      auVar41 = vblendps_avx(auVar41,auVar49,0xa4);
      *pauVar1 = auVar41;
      auVar41 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar34);
      auVar34 = vshufpd_avx(auVar52,auVar52,1);
      auVar34 = vblendps_avx(auVar41,auVar34,0x92);
      pauVar1[1] = auVar34;
      auVar37._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar37._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar34 = vpermps_avx2(auVar37,auVar27);
      auVar52 = vpermpd_avx2(auVar52,0xff);
      auVar52 = vblendps_avx(auVar34,auVar52,3);
      auVar52 = vblendps_avx(auVar52,auVar20,0xe0);
      auVar52 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar52);
      pauVar1[2] = auVar52;
    }
    else {
      auVar31 = auVar27._16_16_;
      auVar57 = auVar20._16_16_;
      if ((uVar8 & 1) != 0) {
        *(int *)*pauVar1 = auVar52._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar21,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar21,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar21,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x10) = auVar52._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar56,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar56,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar56,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar8 & 1) != 0) {
        *(uint *)(*pauVar1 + 4) = auVar22._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(uint *)(pauVar1[1] + 0x14) = auVar27._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar31,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar31,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar31,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar8 & 1) != 0) {
        *(uint *)(*pauVar1 + 8) = auVar18._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar18,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar18,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar18,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(uint *)(pauVar1[1] + 0x18) = auVar20._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar57,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar57,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar57,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
    }
  }
  return;
}

// CalculateBounds___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_avx2 @ 140cdec90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateBounds___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_avx2
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5,undefined1 (*param_6) [32])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar13 [32];
  undefined1 in_ZMM0 [64];
  undefined1 auVar15 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
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
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar20 [64];
  
  iVar8 = (int)param_4;
  uVar11 = param_5 - iVar8;
  uVar9 = uVar11 + 7;
  if (-1 < (int)uVar11) {
    uVar9 = uVar11;
  }
  auVar34 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  iVar10 = ((uVar9 & 0xfffffff8) - uVar11) + param_5;
  auVar34 = auVar34 & ~*param_6;
  uVar1 = *param_1;
  auVar18._4_4_ = uVar1;
  auVar18._0_4_ = uVar1;
  auVar18._8_4_ = uVar1;
  auVar18._12_4_ = uVar1;
  auVar18._16_4_ = uVar1;
  auVar18._20_4_ = uVar1;
  auVar18._24_4_ = uVar1;
  auVar18._28_4_ = uVar1;
  auVar20 = ZEXT3264(auVar18);
  uVar1 = param_1[1];
  auVar15._4_4_ = uVar1;
  auVar15._0_4_ = uVar1;
  auVar15._8_4_ = uVar1;
  auVar15._12_4_ = uVar1;
  auVar15._16_4_ = uVar1;
  auVar15._20_4_ = uVar1;
  auVar15._24_4_ = uVar1;
  auVar15._28_4_ = uVar1;
  auVar16 = ZEXT3264(auVar15);
  uVar1 = param_1[2];
  auVar13._4_4_ = uVar1;
  auVar13._0_4_ = uVar1;
  auVar13._8_4_ = uVar1;
  auVar13._12_4_ = uVar1;
  auVar13._16_4_ = uVar1;
  auVar13._20_4_ = uVar1;
  auVar13._24_4_ = uVar1;
  auVar13._28_4_ = uVar1;
  auVar14 = ZEXT3264(auVar13);
  if ((((((((SUB321(auVar34 >> 0x1f,0) & 1) == 0 && (SUB321(auVar34 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar34 >> 0x5f,0) & 1) == 0) && SUB321(auVar34 >> 0x7f,0) == '\0') &&
        (SUB321(auVar34 >> 0x9f,0) & 1) == 0) && SUB321(auVar34 >> 0xbf,0) == '\0') &&
      (SUB321(auVar34 >> 0xdf,0) & 1) == 0) && -1 < auVar34[0x1f]) {
    uVar1 = *param_2;
    auVar34._4_4_ = uVar1;
    auVar34._0_4_ = uVar1;
    auVar34._8_4_ = uVar1;
    auVar34._12_4_ = uVar1;
    auVar34._16_4_ = uVar1;
    auVar34._20_4_ = uVar1;
    auVar34._24_4_ = uVar1;
    auVar34._28_4_ = uVar1;
    uVar1 = param_2[1];
    auVar23._4_4_ = uVar1;
    auVar23._0_4_ = uVar1;
    auVar23._8_4_ = uVar1;
    auVar23._12_4_ = uVar1;
    auVar23._16_4_ = uVar1;
    auVar23._20_4_ = uVar1;
    auVar23._24_4_ = uVar1;
    auVar23._28_4_ = uVar1;
    uVar1 = param_2[2];
    auVar32._4_4_ = uVar1;
    auVar32._0_4_ = uVar1;
    auVar32._8_4_ = uVar1;
    auVar32._12_4_ = uVar1;
    auVar32._16_4_ = uVar1;
    auVar32._20_4_ = uVar1;
    auVar32._24_4_ = uVar1;
    auVar32._28_4_ = uVar1;
    if (iVar8 < iVar10) {
      param_4 = (longlong)iVar8;
      pauVar12 = (undefined1 (*) [32])(param_3 + param_4 * 0xc + 0x40);
      auVar33._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar33._0_16_ = ___xmm_00000007000000040000000100000000;
      do {
        auVar18 = pauVar12[-1];
        auVar15 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                               ,auVar18);
        auVar13 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,pauVar12[-2]);
        auVar15 = vblendps_avx(auVar13,auVar15,0x88);
        auVar13 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                               ,auVar18);
        auVar7 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*pauVar12);
        auVar13 = vblendps_avx(auVar7,auVar13,0x13);
        auVar31._16_16_ = auVar13._0_16_;
        auVar31._0_16_ = auVar15._0_16_;
        auVar13 = vperm2f128_avx(auVar15,auVar13,0x31);
        auVar18 = vblendps_avx(auVar18,pauVar12[-2],0x24);
        auVar18 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar18);
        auVar15 = vpermps_avx2(auVar33,*pauVar12);
        auVar7 = vblendps_avx(auVar18,auVar15,0xe0);
        auVar18 = vminps_avx(auVar20._0_32_,auVar31);
        auVar20 = ZEXT3264(auVar18);
        auVar34 = vmaxps_avx(auVar34,auVar31);
        auVar15 = vminps_avx(auVar16._0_32_,auVar13);
        auVar16 = ZEXT3264(auVar15);
        auVar23 = vmaxps_avx(auVar23,auVar13);
        auVar13 = vminps_avx(auVar14._0_32_,auVar7);
        auVar14 = ZEXT3264(auVar13);
        auVar32 = vmaxps_avx(auVar32,auVar7);
        param_4 = param_4 + 8;
        pauVar12 = pauVar12 + 3;
      } while (param_4 < iVar10);
    }
    iVar8 = (int)param_4;
    if (iVar8 < param_5) {
      auVar7._0_4_ = iVar8 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000
      ;
      auVar7._4_4_ = iVar8 + _UNK_150b50ae4;
      auVar7._8_4_ = iVar8 + _UNK_150b50ae8;
      auVar7._12_4_ = iVar8 + _UNK_150b50aec;
      auVar7._16_4_ = iVar8 + _UNK_150b50af0;
      auVar7._20_4_ = iVar8 + _UNK_150b50af4;
      auVar7._24_4_ = iVar8 + _UNK_150b50af8;
      auVar7._28_4_ = iVar8 + _UNK_150b50afc;
      auVar26._4_4_ = param_5;
      auVar26._0_4_ = param_5;
      auVar26._8_4_ = param_5;
      auVar26._12_4_ = param_5;
      auVar26._16_4_ = param_5;
      auVar26._20_4_ = param_5;
      auVar26._24_4_ = param_5;
      auVar26._28_4_ = param_5;
      auVar7 = vpcmpgtd_avx2(auVar26,auVar7);
      pauVar12 = (undefined1 (*) [32])(param_3 + (longlong)iVar8 * 0xc);
      auVar33 = vpcmpeqd_avx2(auVar26,auVar26);
      auVar33 = auVar33 & ~auVar7;
      if ((((((((SUB321(auVar33 >> 0x1f,0) & 1) == 0 && (SUB321(auVar33 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar33 >> 0x5f,0) & 1) == 0) && SUB321(auVar33 >> 0x7f,0) == '\0') &&
            (SUB321(auVar33 >> 0x9f,0) & 1) == 0) && SUB321(auVar33 >> 0xbf,0) == '\0') &&
          (SUB321(auVar33 >> 0xdf,0) & 1) == 0) && -1 < auVar33[0x1f]) {
        auVar33 = pauVar12[1];
        auVar31 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                               ,auVar33);
        auVar26 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*pauVar12);
        auVar31 = vblendps_avx(auVar26,auVar31,0x88);
        auVar26 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                               ,auVar33);
        auVar27 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,pauVar12[2]);
        auVar26 = vblendps_avx(auVar27,auVar26,0x13);
        auVar27._16_16_ = auVar26._0_16_;
        auVar27._0_16_ = auVar31._0_16_;
        auVar31 = vperm2f128_avx(auVar31,auVar26,0x31);
        auVar33 = vblendps_avx(auVar33,*pauVar12,0x24);
        auVar33 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar33);
        auVar36._16_16_ = ___xmm_00000007000000040000000100000000;
        auVar36._0_16_ = ___xmm_00000007000000040000000100000000;
        auVar26 = vpermps_avx2(auVar36,pauVar12[2]);
        auVar33 = vblendps_avx(auVar33,auVar26,0xe0);
      }
      else {
        auVar27 = vgatherdps(ZEXT832(0) << 0x20,auVar7);
        auVar31 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar7);
        auVar33 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar7);
      }
      auVar18 = vminps_avx(auVar18,auVar27);
      auVar15 = vminps_avx(auVar15,auVar31);
      auVar13 = vminps_avx(auVar13,auVar33);
      auVar18 = vmaskmovps_avx(auVar7,auVar18);
      auVar15 = vmaskmovps_avx(auVar7,auVar15);
      auVar13 = vmaskmovps_avx(auVar7,auVar13);
      auVar34 = vmaxps_avx(auVar34,auVar27);
      auVar23 = vmaxps_avx(auVar23,auVar31);
      auVar32 = vmaxps_avx(auVar32,auVar33);
      auVar34 = vmaskmovps_avx(auVar7,auVar34);
      auVar23 = vmaskmovps_avx(auVar7,auVar23);
      auVar32 = vmaskmovps_avx(auVar7,auVar32);
    }
    auVar17 = vminps_avx(auVar18._16_16_,auVar18._0_16_);
    auVar3 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vminps_avx(auVar3,auVar17);
    auVar3 = vmovshdup_avx(auVar17);
    auVar3 = vminss_avx(auVar17,auVar3);
    auVar17 = vminps_avx(auVar15._16_16_,auVar15._0_16_);
    auVar4 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vminps_avx(auVar4,auVar17);
    auVar4 = vmovshdup_avx(auVar17);
    auVar4 = vminss_avx(auVar17,auVar4);
    auVar17 = vminps_avx(auVar13._16_16_,auVar13._0_16_);
    auVar5 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vminps_avx(auVar5,auVar17);
    auVar5 = vmovshdup_avx(auVar17);
    auVar17 = vminss_avx(auVar17,auVar5);
    *param_1 = auVar3._0_4_;
    param_1[1] = auVar4._0_4_;
    param_1[2] = auVar17._0_4_;
    auVar17 = vmaxps_avx(auVar34._16_16_,auVar34._0_16_);
    auVar3 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vmaxps_avx(auVar3,auVar17);
    auVar3 = vmovshdup_avx(auVar17);
    auVar17 = vmaxss_avx(auVar3,auVar17);
    uVar1 = auVar17._0_4_;
    auVar17 = vmaxps_avx(auVar23._16_16_,auVar23._0_16_);
    auVar3 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vmaxps_avx(auVar3,auVar17);
    auVar3 = vmovshdup_avx(auVar17);
    auVar17 = vmaxss_avx(auVar3,auVar17);
    uVar2 = auVar17._0_4_;
    auVar17 = vmaxps_avx(auVar32._16_16_,auVar32._0_16_);
  }
  else {
    uVar1 = *param_2;
    auVar24._4_4_ = uVar1;
    auVar24._0_4_ = uVar1;
    auVar24._8_4_ = uVar1;
    auVar24._12_4_ = uVar1;
    auVar24._16_4_ = uVar1;
    auVar24._20_4_ = uVar1;
    auVar24._24_4_ = uVar1;
    auVar24._28_4_ = uVar1;
    uVar1 = param_2[1];
    auVar22._4_4_ = uVar1;
    auVar22._0_4_ = uVar1;
    auVar22._8_4_ = uVar1;
    auVar22._12_4_ = uVar1;
    auVar22._16_4_ = uVar1;
    auVar22._20_4_ = uVar1;
    auVar22._24_4_ = uVar1;
    auVar22._28_4_ = uVar1;
    uVar1 = param_2[2];
    auVar21._4_4_ = uVar1;
    auVar21._0_4_ = uVar1;
    auVar21._8_4_ = uVar1;
    auVar21._12_4_ = uVar1;
    auVar21._16_4_ = uVar1;
    auVar21._20_4_ = uVar1;
    auVar21._24_4_ = uVar1;
    auVar21._28_4_ = uVar1;
    if (iVar8 < iVar10) {
      param_4 = (longlong)iVar8;
      pauVar12 = (undefined1 (*) [32])(param_3 + param_4 * 0xc + 0x40);
      auVar37._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar37._0_16_ = ___xmm_00000007000000040000000100000000;
      do {
        auVar18 = pauVar12[-1];
        auVar15 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                               ,auVar18);
        auVar13 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,pauVar12[-2]);
        auVar15 = vblendps_avx(auVar13,auVar15,0x88);
        auVar13 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                               ,auVar18);
        auVar34 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*pauVar12);
        auVar13 = vblendps_avx(auVar34,auVar13,0x13);
        auVar29._16_16_ = auVar13._0_16_;
        auVar29._0_16_ = auVar15._0_16_;
        auVar13 = vperm2f128_avx(auVar15,auVar13,0x31);
        auVar18 = vblendps_avx(auVar18,pauVar12[-2],0x24);
        auVar18 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar18);
        auVar15 = vpermps_avx2(auVar37,*pauVar12);
        auVar34 = vblendps_avx(auVar18,auVar15,0xe0);
        auVar18 = vminps_avx(auVar20._0_32_,auVar29);
        auVar20 = ZEXT3264(auVar18);
        auVar24 = vmaxps_avx(auVar24,auVar29);
        auVar15 = vminps_avx(auVar16._0_32_,auVar13);
        auVar16 = ZEXT3264(auVar15);
        auVar22 = vmaxps_avx(auVar22,auVar13);
        auVar13 = vminps_avx(auVar14._0_32_,auVar34);
        auVar14 = ZEXT3264(auVar13);
        auVar21 = vmaxps_avx(auVar21,auVar34);
        param_4 = param_4 + 8;
        pauVar12 = pauVar12 + 3;
      } while (param_4 < iVar10);
    }
    iVar8 = (int)param_4;
    if (iVar8 < param_5) {
      auVar6._0_4_ = iVar8 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000
      ;
      auVar6._4_4_ = iVar8 + _UNK_150b50ae4;
      auVar6._8_4_ = iVar8 + _UNK_150b50ae8;
      auVar6._12_4_ = iVar8 + _UNK_150b50aec;
      auVar6._16_4_ = iVar8 + _UNK_150b50af0;
      auVar6._20_4_ = iVar8 + _UNK_150b50af4;
      auVar6._24_4_ = iVar8 + _UNK_150b50af8;
      auVar6._28_4_ = iVar8 + _UNK_150b50afc;
      auVar25._4_4_ = param_5;
      auVar25._0_4_ = param_5;
      auVar25._8_4_ = param_5;
      auVar25._12_4_ = param_5;
      auVar25._16_4_ = param_5;
      auVar25._20_4_ = param_5;
      auVar25._24_4_ = param_5;
      auVar25._28_4_ = param_5;
      auVar23 = vpcmpgtd_avx2(auVar25,auVar6);
      pauVar12 = (undefined1 (*) [32])(param_3 + (longlong)iVar8 * 0xc);
      auVar34 = vpcmpeqd_avx2(auVar6,auVar6);
      auVar34 = auVar34 & ~auVar23;
      if ((((((((SUB321(auVar34 >> 0x1f,0) & 1) == 0 && (SUB321(auVar34 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar34 >> 0x5f,0) & 1) == 0) && SUB321(auVar34 >> 0x7f,0) == '\0') &&
            (SUB321(auVar34 >> 0x9f,0) & 1) == 0) && SUB321(auVar34 >> 0xbf,0) == '\0') &&
          (SUB321(auVar34 >> 0xdf,0) & 1) == 0) && -1 < auVar34[0x1f]) {
        auVar34 = pauVar12[1];
        auVar32 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                               ,auVar34);
        auVar33 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*pauVar12);
        auVar32 = vblendps_avx(auVar33,auVar32,0x88);
        auVar33 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                               ,auVar34);
        auVar7 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,pauVar12[2]);
        auVar33 = vblendps_avx(auVar7,auVar33,0x13);
        auVar30._16_16_ = auVar33._0_16_;
        auVar30._0_16_ = auVar32._0_16_;
        auVar32 = vperm2f128_avx(auVar32,auVar33,0x31);
        auVar34 = vblendps_avx(auVar34,*pauVar12,0x24);
        auVar34 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar34);
        auVar35._16_16_ = ___xmm_00000007000000040000000100000000;
        auVar35._0_16_ = ___xmm_00000007000000040000000100000000;
        auVar33 = vpermps_avx2(auVar35,pauVar12[2]);
        auVar34 = vblendps_avx(auVar34,auVar33,0xe0);
      }
      else {
        auVar30 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar23);
        auVar32 = vgatherdps(ZEXT832(0),auVar23);
        auVar34 = vgatherdps(ZEXT832(0),auVar23);
      }
      auVar18 = vminps_avx(auVar18,auVar30);
      auVar15 = vminps_avx(auVar15,auVar32);
      auVar13 = vminps_avx(auVar13,auVar34);
      auVar18 = vmaskmovps_avx(auVar23,auVar18);
      auVar15 = vmaskmovps_avx(auVar23,auVar15);
      auVar13 = vmaskmovps_avx(auVar23,auVar13);
      auVar33 = vmaxps_avx(auVar24,auVar30);
      auVar32 = vmaxps_avx(auVar22,auVar32);
      auVar34 = vmaxps_avx(auVar21,auVar34);
      auVar24 = vmaskmovps_avx(auVar23,auVar33);
      auVar22 = vmaskmovps_avx(auVar23,auVar32);
      auVar21 = vmaskmovps_avx(auVar23,auVar34);
    }
    auVar34 = vpcmpeqd_avx2(*param_6,ZEXT1232(ZEXT812(0)));
    auVar28._4_4_ = __real_7f800000;
    auVar28._0_4_ = __real_7f800000;
    auVar28._8_4_ = __real_7f800000;
    auVar28._12_4_ = __real_7f800000;
    auVar28._16_4_ = __real_7f800000;
    auVar28._20_4_ = __real_7f800000;
    auVar28._24_4_ = __real_7f800000;
    auVar28._28_4_ = __real_7f800000;
    auVar18 = vblendvps_avx(auVar18,auVar28,auVar34);
    auVar17 = vminps_avx(auVar18._16_16_,auVar18._0_16_);
    auVar3 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vminps_avx(auVar3,auVar17);
    auVar3 = vmovshdup_avx(auVar17);
    auVar3 = vminss_avx(auVar17,auVar3);
    auVar18 = vblendvps_avx(auVar15,auVar28,auVar34);
    auVar17 = vminps_avx(auVar18._16_16_,auVar18._0_16_);
    auVar4 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vminps_avx(auVar4,auVar17);
    auVar4 = vmovshdup_avx(auVar17);
    auVar4 = vminss_avx(auVar17,auVar4);
    auVar18 = vblendvps_avx(auVar13,auVar28,auVar34);
    auVar17 = vminps_avx(auVar18._16_16_,auVar18._0_16_);
    auVar5 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vminps_avx(auVar5,auVar17);
    auVar5 = vmovshdup_avx(auVar17);
    *param_1 = auVar3._0_4_;
    param_1[1] = auVar4._0_4_;
    auVar17 = vminss_avx(auVar17,auVar5);
    param_1[2] = auVar17._0_4_;
    auVar19._4_4_ = __real_ff800000;
    auVar19._0_4_ = __real_ff800000;
    auVar19._8_4_ = __real_ff800000;
    auVar19._12_4_ = __real_ff800000;
    auVar19._16_4_ = __real_ff800000;
    auVar19._20_4_ = __real_ff800000;
    auVar19._24_4_ = __real_ff800000;
    auVar19._28_4_ = __real_ff800000;
    auVar18 = vblendvps_avx(auVar24,auVar19,auVar34);
    auVar17 = vmaxps_avx(auVar18._16_16_,auVar18._0_16_);
    auVar3 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vmaxps_avx(auVar3,auVar17);
    auVar3 = vmovshdup_avx(auVar17);
    auVar17 = vmaxss_avx(auVar3,auVar17);
    uVar1 = auVar17._0_4_;
    auVar18 = vblendvps_avx(auVar22,auVar19,auVar34);
    auVar17 = vmaxps_avx(auVar18._16_16_,auVar18._0_16_);
    auVar3 = vshufpd_avx(auVar17,auVar17,1);
    auVar17 = vmaxps_avx(auVar3,auVar17);
    auVar3 = vmovshdup_avx(auVar17);
    auVar17 = vmaxss_avx(auVar3,auVar17);
    uVar2 = auVar17._0_4_;
    auVar18 = vblendvps_avx(auVar21,auVar19,auVar34);
    auVar17 = vmaxps_avx(auVar18._16_16_,auVar18._0_16_);
  }
  auVar3 = vshufpd_avx(auVar17,auVar17,1);
  auVar17 = vmaxps_avx(auVar3,auVar17);
  auVar3 = vmovshdup_avx(auVar17);
  auVar17 = vmaxss_avx(auVar3,auVar17);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = auVar17._0_4_;
  return;
}

// CalculateSquaredRadius___REFunfREFs_5B__c_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_avx2 @ 140cdf4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateSquaredRadius___REFunfREFs_5B__c_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_avx2
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5,undefined1 (*param_6) [32])

{
  undefined4 uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 (*pauVar6) [32];
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
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
  
  uVar1 = *param_1;
  auVar10._4_4_ = uVar1;
  auVar10._0_4_ = uVar1;
  auVar10._8_4_ = uVar1;
  auVar10._12_4_ = uVar1;
  auVar10._16_4_ = uVar1;
  auVar10._20_4_ = uVar1;
  auVar10._24_4_ = uVar1;
  auVar10._28_4_ = uVar1;
  iVar7 = (int)param_4;
  uVar5 = param_5 - iVar7;
  uVar8 = uVar5 + 7;
  if (-1 < (int)uVar5) {
    uVar8 = uVar5;
  }
  iVar9 = ((uVar8 & 0xfffffff8) - uVar5) + param_5;
  if (iVar7 < iVar9) {
    param_4 = (longlong)iVar7;
    pauVar6 = (undefined1 (*) [32])(param_3 + param_4 * 0xc + 0x40);
    auVar16._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar16._0_16_ = ___xmm_00000007000000040000000100000000;
    uVar1 = *param_2;
    auVar21._4_4_ = uVar1;
    auVar21._0_4_ = uVar1;
    auVar21._8_4_ = uVar1;
    auVar21._12_4_ = uVar1;
    auVar21._16_4_ = uVar1;
    auVar21._20_4_ = uVar1;
    auVar21._24_4_ = uVar1;
    auVar21._28_4_ = uVar1;
    uVar1 = param_2[1];
    auVar14._4_4_ = uVar1;
    auVar14._0_4_ = uVar1;
    auVar14._8_4_ = uVar1;
    auVar14._12_4_ = uVar1;
    auVar14._16_4_ = uVar1;
    auVar14._20_4_ = uVar1;
    auVar14._24_4_ = uVar1;
    auVar14._28_4_ = uVar1;
    uVar1 = param_2[2];
    auVar22._4_4_ = uVar1;
    auVar22._0_4_ = uVar1;
    auVar22._8_4_ = uVar1;
    auVar22._12_4_ = uVar1;
    auVar22._16_4_ = uVar1;
    auVar22._20_4_ = uVar1;
    auVar22._24_4_ = uVar1;
    auVar22._28_4_ = uVar1;
    do {
      auVar2 = pauVar6[-1];
      auVar12 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar2);
      auVar23 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,pauVar6[-2]);
      auVar12 = vblendps_avx(auVar23,auVar12,0x88);
      auVar23 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar2);
      auVar24 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*pauVar6);
      auVar23 = vblendps_avx(auVar24,auVar23,0x13);
      auVar24._16_16_ = auVar23._0_16_;
      auVar24._0_16_ = auVar12._0_16_;
      auVar24 = vsubps_avx(auVar24,auVar21);
      auVar12 = vperm2f128_avx(auVar12,auVar23,0x31);
      auVar12 = vsubps_avx(auVar12,auVar14);
      auVar2 = vblendps_avx(auVar2,pauVar6[-2],0x24);
      auVar2 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar2);
      auVar23 = vpermps_avx2(auVar16,*pauVar6);
      auVar2 = vblendps_avx(auVar2,auVar23,0xe0);
      auVar2 = vsubps_avx(auVar2,auVar22);
      auVar23._0_4_ =
           auVar2._0_4_ * auVar2._0_4_ +
           auVar24._0_4_ * auVar24._0_4_ + auVar12._0_4_ * auVar12._0_4_;
      auVar23._4_4_ =
           auVar2._4_4_ * auVar2._4_4_ +
           auVar24._4_4_ * auVar24._4_4_ + auVar12._4_4_ * auVar12._4_4_;
      auVar23._8_4_ =
           auVar2._8_4_ * auVar2._8_4_ +
           auVar24._8_4_ * auVar24._8_4_ + auVar12._8_4_ * auVar12._8_4_;
      auVar23._12_4_ =
           auVar2._12_4_ * auVar2._12_4_ +
           auVar24._12_4_ * auVar24._12_4_ + auVar12._12_4_ * auVar12._12_4_;
      auVar23._16_4_ =
           auVar2._16_4_ * auVar2._16_4_ +
           auVar24._16_4_ * auVar24._16_4_ + auVar12._16_4_ * auVar12._16_4_;
      auVar23._20_4_ =
           auVar2._20_4_ * auVar2._20_4_ +
           auVar24._20_4_ * auVar24._20_4_ + auVar12._20_4_ * auVar12._20_4_;
      auVar23._24_4_ =
           auVar2._24_4_ * auVar2._24_4_ +
           auVar24._24_4_ * auVar24._24_4_ + auVar12._24_4_ * auVar12._24_4_;
      auVar23._28_4_ =
           auVar2._28_4_ * auVar2._28_4_ +
           auVar24._28_4_ * auVar24._28_4_ + auVar12._28_4_ * auVar12._28_4_;
      auVar10 = vmaxps_avx(auVar10,auVar23);
      param_4 = param_4 + 8;
      pauVar6 = pauVar6 + 3;
    } while (param_4 < iVar9);
  }
  iVar7 = (int)param_4;
  if (iVar7 < param_5) {
    auVar2._0_4_ = iVar7 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar2._4_4_ = iVar7 + _UNK_150b50ae4;
    auVar2._8_4_ = iVar7 + _UNK_150b50ae8;
    auVar2._12_4_ = iVar7 + _UNK_150b50aec;
    auVar2._16_4_ = iVar7 + _UNK_150b50af0;
    auVar2._20_4_ = iVar7 + _UNK_150b50af4;
    auVar2._24_4_ = iVar7 + _UNK_150b50af8;
    auVar2._28_4_ = iVar7 + _UNK_150b50afc;
    auVar12._4_4_ = param_5;
    auVar12._0_4_ = param_5;
    auVar12._8_4_ = param_5;
    auVar12._12_4_ = param_5;
    auVar12._16_4_ = param_5;
    auVar12._20_4_ = param_5;
    auVar12._24_4_ = param_5;
    auVar12._28_4_ = param_5;
    auVar21 = vpcmpgtd_avx2(auVar12,auVar2);
    pauVar6 = (undefined1 (*) [32])(param_3 + (longlong)iVar7 * 0xc);
    auVar16 = vpcmpeqd_avx2(auVar12,auVar12);
    auVar16 = auVar16 & ~auVar21;
    if ((((((((SUB321(auVar16 >> 0x1f,0) & 1) == 0 && (SUB321(auVar16 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar16 >> 0x5f,0) & 1) == 0) && SUB321(auVar16 >> 0x7f,0) == '\0') &&
          (SUB321(auVar16 >> 0x9f,0) & 1) == 0) && SUB321(auVar16 >> 0xbf,0) == '\0') &&
        (SUB321(auVar16 >> 0xdf,0) & 1) == 0) && -1 < auVar16[0x1f]) {
      auVar16 = pauVar6[1];
      auVar14 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar16);
      auVar22 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar6);
      auVar14 = vblendps_avx(auVar22,auVar14,0x88);
      auVar22 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar16);
      auVar2 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            pauVar6[2]);
      auVar22 = vblendps_avx(auVar2,auVar22,0x13);
      auVar13._16_16_ = auVar22._0_16_;
      auVar13._0_16_ = auVar14._0_16_;
      auVar14 = vperm2f128_avx(auVar14,auVar22,0x31);
      auVar16 = vblendps_avx(auVar16,*pauVar6,0x24);
      auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar16);
      auVar17._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar17._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar22 = vpermps_avx2(auVar17,pauVar6[2]);
      auVar16 = vblendps_avx(auVar16,auVar22,0xe0);
    }
    else {
      auVar13 = vgatherdps(ZEXT832(0) << 0x20,auVar21);
      auVar14 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar21);
      auVar16 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar21);
    }
    uVar1 = *param_2;
    auVar18._4_4_ = uVar1;
    auVar18._0_4_ = uVar1;
    auVar18._8_4_ = uVar1;
    auVar18._12_4_ = uVar1;
    auVar18._16_4_ = uVar1;
    auVar18._20_4_ = uVar1;
    auVar18._24_4_ = uVar1;
    auVar18._28_4_ = uVar1;
    auVar22 = vsubps_avx(auVar13,auVar18);
    uVar1 = param_2[1];
    auVar19._4_4_ = uVar1;
    auVar19._0_4_ = uVar1;
    auVar19._8_4_ = uVar1;
    auVar19._12_4_ = uVar1;
    auVar19._16_4_ = uVar1;
    auVar19._20_4_ = uVar1;
    auVar19._24_4_ = uVar1;
    auVar19._28_4_ = uVar1;
    auVar14 = vsubps_avx(auVar14,auVar19);
    uVar1 = param_2[2];
    auVar20._4_4_ = uVar1;
    auVar20._0_4_ = uVar1;
    auVar20._8_4_ = uVar1;
    auVar20._12_4_ = uVar1;
    auVar20._16_4_ = uVar1;
    auVar20._20_4_ = uVar1;
    auVar20._24_4_ = uVar1;
    auVar20._28_4_ = uVar1;
    auVar16 = vsubps_avx(auVar16,auVar20);
    auVar15._0_4_ =
         auVar16._0_4_ * auVar16._0_4_ +
         auVar22._0_4_ * auVar22._0_4_ + auVar14._0_4_ * auVar14._0_4_;
    auVar15._4_4_ =
         auVar16._4_4_ * auVar16._4_4_ +
         auVar22._4_4_ * auVar22._4_4_ + auVar14._4_4_ * auVar14._4_4_;
    auVar15._8_4_ =
         auVar16._8_4_ * auVar16._8_4_ +
         auVar22._8_4_ * auVar22._8_4_ + auVar14._8_4_ * auVar14._8_4_;
    auVar15._12_4_ =
         auVar16._12_4_ * auVar16._12_4_ +
         auVar22._12_4_ * auVar22._12_4_ + auVar14._12_4_ * auVar14._12_4_;
    auVar15._16_4_ =
         auVar16._16_4_ * auVar16._16_4_ +
         auVar22._16_4_ * auVar22._16_4_ + auVar14._16_4_ * auVar14._16_4_;
    auVar15._20_4_ =
         auVar16._20_4_ * auVar16._20_4_ +
         auVar22._20_4_ * auVar22._20_4_ + auVar14._20_4_ * auVar14._20_4_;
    auVar15._24_4_ =
         auVar16._24_4_ * auVar16._24_4_ +
         auVar22._24_4_ * auVar22._24_4_ + auVar14._24_4_ * auVar14._24_4_;
    auVar15._28_4_ =
         auVar16._28_4_ * auVar16._28_4_ +
         auVar22._28_4_ * auVar22._28_4_ + auVar14._28_4_ * auVar14._28_4_;
    auVar16 = vmaxps_avx(auVar10,auVar15);
    auVar10 = vblendvps_avx(auVar10,auVar16,auVar21);
  }
  auVar16 = vpcmpeqd_avx2(*param_6,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
  auVar11._4_4_ = __real_ff800000;
  auVar11._0_4_ = __real_ff800000;
  auVar11._8_4_ = __real_ff800000;
  auVar11._12_4_ = __real_ff800000;
  auVar11._16_4_ = __real_ff800000;
  auVar11._20_4_ = __real_ff800000;
  auVar11._24_4_ = __real_ff800000;
  auVar11._28_4_ = __real_ff800000;
  auVar10 = vblendvps_avx(auVar10,auVar11,auVar16);
  auVar3 = vmaxps_avx(auVar10._16_16_,auVar10._0_16_);
  auVar4 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vmaxps_avx(auVar4,auVar3);
  auVar4 = vmovshdup_avx(auVar3);
  auVar3 = vmaxss_avx(auVar4,auVar3);
  *param_1 = auVar3._0_4_;
  return;
}

// ApplyPreSimulationTransforms_avx2 @ 140cdf820

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransforms_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,undefined8 param_9,
               undefined4 *param_10,undefined4 param_11,int param_12,int param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [32];
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [32];
  longlong lVar12;
  longlong lVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 (*pauVar19) [32];
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  float fVar37;
  float fVar41;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  float fVar42;
  float fVar43;
  float fVar50;
  float fVar52;
  float fVar54;
  undefined1 auVar44 [16];
  float fVar51;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  float fVar64;
  float fVar76;
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 in_ZMM2 [64];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [16];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 in_ZMM4 [64];
  float fVar91;
  undefined1 auVar92 [16];
  float fVar104;
  float fVar108;
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  float fVar102;
  float fVar103;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 in_ZMM5 [64];
  float fVar109;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  float fVar120;
  undefined1 auVar121 [16];
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  float fVar133;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  float fVar148;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  undefined1 auVar149 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  float fVar159;
  undefined1 auVar160 [16];
  float fVar165;
  float fVar166;
  float fVar168;
  float fVar170;
  float fVar171;
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  float fVar167;
  float fVar172;
  undefined1 auVar163 [32];
  undefined1 auVar169 [16];
  undefined1 auVar164 [32];
  float fVar173;
  float fVar174;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  float fVar181;
  float fVar182;
  float fVar183;
  float fVar185;
  float fVar187;
  undefined1 auVar175 [32];
  float fVar186;
  float fVar188;
  float fVar189;
  float fVar190;
  undefined1 auVar184 [16];
  float fVar191;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  undefined1 auVar192 [32];
  float fVar200;
  undefined1 auVar193 [32];
  undefined1 auVar201 [32];
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined1 auVar31 [32];
  undefined1 auVar45 [32];
  undefined1 auVar84 [32];
  undefined1 auVar99 [32];
  undefined1 auVar125 [32];
  
  uVar8 = __real_00000030;
  uVar7 = __real_00000006;
  uVar6 = __real_0000000c;
  uVar5 = __real_00000008;
  uVar2 = __real_00000004;
  uVar18 = param_13 - param_12;
  uVar15 = uVar18 + 7;
  if (-1 < (int)uVar18) {
    uVar15 = uVar18;
  }
  iVar9 = ((uVar15 & 0xfffffff8) - uVar18) + param_13;
  if (param_12 < iVar9) {
    lVar20 = (longlong)param_12;
    lVar4 = lVar20 * 0xc;
    lVar10 = param_3 + 0x40;
    pauVar19 = (undefined1 (*) [32])(lVar20 * 0x10 + param_1 + 0x60);
    lVar13 = param_2 + 0x40;
    lVar17 = param_4 + 0x40;
    lVar16 = param_7 + 0x40;
    lVar12 = param_5 + 0x40;
    param_12 = param_12 << 2;
    do {
      auVar110 = *(undefined1 (*) [32])(param_8 + param_12);
      auVar86._4_4_ = uVar7;
      auVar86._0_4_ = uVar7;
      auVar86._8_4_ = uVar7;
      auVar86._12_4_ = uVar7;
      auVar86._16_4_ = uVar7;
      auVar86._20_4_ = uVar7;
      auVar86._24_4_ = uVar7;
      auVar86._28_4_ = uVar7;
      vpmulld_avx2(auVar110,auVar86);
      auVar111 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar157 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar111._4_4_ = uVar8;
      auVar111._0_4_ = uVar8;
      auVar111._8_4_ = uVar8;
      auVar111._12_4_ = uVar8;
      auVar111._16_4_ = uVar8;
      auVar111._20_4_ = uVar8;
      auVar111._24_4_ = uVar8;
      auVar111._28_4_ = uVar8;
      auVar111 = vpmulld_avx2(auVar110,auVar111);
      auVar81._4_4_ = uVar2;
      auVar81._0_4_ = uVar2;
      auVar81._8_4_ = uVar2;
      auVar81._12_4_ = uVar2;
      auVar81._16_4_ = uVar2;
      auVar81._20_4_ = uVar2;
      auVar81._24_4_ = uVar2;
      auVar81._28_4_ = uVar2;
      vpor_avx2(auVar111,auVar81);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar158 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar66._4_4_ = uVar5;
      auVar66._0_4_ = uVar5;
      auVar66._8_4_ = uVar5;
      auVar66._12_4_ = uVar5;
      auVar66._16_4_ = uVar5;
      auVar66._20_4_ = uVar5;
      auVar66._24_4_ = uVar5;
      auVar66._28_4_ = uVar5;
      vpor_avx2(auVar111,auVar66);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar161 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar110._4_4_ = uVar6;
      auVar110._0_4_ = uVar6;
      auVar110._8_4_ = uVar6;
      auVar110._12_4_ = uVar6;
      auVar110._16_4_ = uVar6;
      auVar110._20_4_ = uVar6;
      auVar110._24_4_ = uVar6;
      auVar110._28_4_ = uVar6;
      vpor_avx2(auVar111,auVar110);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar175 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar201 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar77 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar110);
      auVar110 = vpcmpeqd_avx2(auVar77,auVar77);
      auVar23 = vgatherdps(ZEXT432(0) << 0x20,auVar110);
      auVar110 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar24 = vgatherdps(ZEXT832(0) << 0x20,auVar110);
      auVar110 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      fVar51 = auVar24._4_4_;
      fVar53 = auVar24._8_4_;
      fVar55 = auVar24._12_4_;
      auVar25 = vgatherdps(ZEXT832(0) << 0x20,auVar110);
      auVar110 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      fVar64 = auVar25._0_4_;
      fVar70 = auVar25._4_4_;
      fVar71 = auVar25._8_4_;
      fVar72 = auVar25._12_4_;
      auVar26 = vgatherdps(ZEXT832(0) << 0x20,auVar110);
      auVar110 = *(undefined1 (*) [32])(lVar10 + -0x40 + lVar4);
      auVar111 = *(undefined1 (*) [32])(lVar10 + -0x20 + lVar4);
      auVar66 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar111);
      auVar81 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar66 = vblendps_avx(auVar81,auVar66,0x88);
      auVar81 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar111);
      auVar86 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(lVar10 + lVar4));
      auVar81 = vblendps_avx(auVar86,auVar81,0x13);
      auVar86 = vperm2f128_avx(auVar66,auVar81,0x31);
      auVar110 = vblendps_avx(auVar111,auVar110,0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(lVar10 + lVar4));
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      fVar43 = auVar24._0_4_;
      fVar91 = auVar66._0_4_ * fVar43;
      fVar102 = auVar66._4_4_ * fVar51;
      fVar103 = auVar66._8_4_ * fVar53;
      fVar104 = auVar66._12_4_ * fVar55;
      fVar57 = auVar24._16_4_;
      fVar105 = auVar81._0_4_ * fVar57;
      fVar59 = auVar24._20_4_;
      fVar106 = auVar81._4_4_ * fVar59;
      fVar61 = auVar24._24_4_;
      fVar107 = auVar81._8_4_ * fVar61;
      fVar63 = auVar24._28_4_;
      fVar108 = auVar81._12_4_ * fVar63;
      fVar42 = fVar64 * auVar86._0_4_;
      fVar50 = fVar70 * auVar86._4_4_;
      fVar52 = fVar71 * auVar86._8_4_;
      fVar54 = fVar72 * auVar86._12_4_;
      fVar73 = auVar25._16_4_;
      fVar56 = fVar73 * auVar86._16_4_;
      fVar74 = auVar25._20_4_;
      fVar58 = fVar74 * auVar86._20_4_;
      fVar75 = auVar25._24_4_;
      fVar60 = fVar75 * auVar86._24_4_;
      fVar76 = auVar25._28_4_;
      fVar62 = fVar76 * auVar86._28_4_;
      fVar21 = auVar26._0_4_;
      fVar109 = fVar21 * auVar110._0_4_;
      fVar35 = auVar26._4_4_;
      fVar113 = fVar35 * auVar110._4_4_;
      fVar36 = auVar26._8_4_;
      fVar114 = fVar36 * auVar110._8_4_;
      fVar37 = auVar26._12_4_;
      fVar115 = fVar37 * auVar110._12_4_;
      fVar38 = auVar26._16_4_;
      fVar116 = fVar38 * auVar110._16_4_;
      fVar39 = auVar26._20_4_;
      fVar117 = fVar39 * auVar110._20_4_;
      fVar40 = auVar26._24_4_;
      fVar118 = fVar40 * auVar110._24_4_;
      fVar41 = auVar26._28_4_;
      fVar119 = fVar41 * auVar110._28_4_;
      fVar174 = auVar158._0_4_;
      fVar177 = auVar158._4_4_;
      fVar179 = auVar158._8_4_;
      fVar181 = auVar158._12_4_;
      fVar183 = auVar158._16_4_;
      fVar186 = auVar158._20_4_;
      fVar188 = auVar158._24_4_;
      fVar190 = auVar158._28_4_;
      fVar191 = auVar161._0_4_;
      fVar194 = auVar161._4_4_;
      fVar195 = auVar161._8_4_;
      fVar196 = auVar161._12_4_;
      fVar197 = auVar161._16_4_;
      fVar198 = auVar161._20_4_;
      fVar199 = auVar161._24_4_;
      fVar200 = auVar161._28_4_;
      fVar159 = auVar157._0_4_;
      fVar165 = auVar157._4_4_;
      fVar166 = auVar157._8_4_;
      fVar167 = auVar157._12_4_;
      fVar168 = auVar157._16_4_;
      fVar170 = auVar157._20_4_;
      fVar171 = auVar157._24_4_;
      fVar172 = auVar157._28_4_;
      fVar120 = fVar159 * fVar42 - fVar174 * fVar91;
      fVar126 = fVar165 * fVar50 - fVar177 * fVar102;
      fVar127 = fVar166 * fVar52 - fVar179 * fVar103;
      fVar128 = fVar167 * fVar54 - fVar181 * fVar104;
      fVar129 = fVar168 * fVar56 - fVar183 * fVar105;
      fVar130 = fVar170 * fVar58 - fVar186 * fVar106;
      fVar131 = fVar171 * fVar60 - fVar188 * fVar107;
      fVar132 = fVar172 * fVar62 - fVar190 * fVar108;
      fVar133 = fVar174 * fVar109 - fVar191 * fVar42;
      fVar141 = fVar177 * fVar113 - fVar194 * fVar50;
      fVar142 = fVar179 * fVar114 - fVar195 * fVar52;
      fVar143 = fVar181 * fVar115 - fVar196 * fVar54;
      fVar144 = fVar183 * fVar116 - fVar197 * fVar56;
      fVar145 = fVar186 * fVar117 - fVar198 * fVar58;
      fVar146 = fVar188 * fVar118 - fVar199 * fVar60;
      fVar147 = fVar190 * fVar119 - fVar200 * fVar62;
      fVar148 = fVar191 * fVar91 - fVar159 * fVar109;
      fVar150 = fVar194 * fVar102 - fVar165 * fVar113;
      fVar151 = fVar195 * fVar103 - fVar166 * fVar114;
      fVar152 = fVar196 * fVar104 - fVar167 * fVar115;
      fVar153 = fVar197 * fVar105 - fVar168 * fVar116;
      fVar154 = fVar198 * fVar106 - fVar170 * fVar117;
      fVar155 = fVar199 * fVar107 - fVar171 * fVar118;
      fVar156 = fVar200 * fVar108 - fVar172 * fVar119;
      fVar133 = fVar133 + fVar133;
      fVar141 = fVar141 + fVar141;
      fVar142 = fVar142 + fVar142;
      fVar143 = fVar143 + fVar143;
      fVar144 = fVar144 + fVar144;
      fVar145 = fVar145 + fVar145;
      fVar146 = fVar146 + fVar146;
      fVar147 = fVar147 + fVar147;
      fVar148 = fVar148 + fVar148;
      fVar150 = fVar150 + fVar150;
      fVar151 = fVar151 + fVar151;
      fVar152 = fVar152 + fVar152;
      fVar153 = fVar153 + fVar153;
      fVar154 = fVar154 + fVar154;
      fVar155 = fVar155 + fVar155;
      fVar156 = fVar156 + fVar156;
      fVar120 = fVar120 + fVar120;
      fVar126 = fVar126 + fVar126;
      fVar127 = fVar127 + fVar127;
      fVar128 = fVar128 + fVar128;
      fVar129 = fVar129 + fVar129;
      fVar130 = fVar130 + fVar130;
      fVar131 = fVar131 + fVar131;
      fVar132 = fVar132 + fVar132;
      fVar173 = auVar175._0_4_;
      fVar176 = auVar175._4_4_;
      fVar178 = auVar175._8_4_;
      fVar180 = auVar175._12_4_;
      fVar182 = auVar175._16_4_;
      fVar185 = auVar175._20_4_;
      fVar187 = auVar175._24_4_;
      fVar189 = auVar175._28_4_;
      auVar122._0_4_ =
           auVar201._0_4_ + (fVar174 * fVar120 - fVar191 * fVar148) + fVar173 * fVar133 + fVar91;
      auVar122._4_4_ =
           auVar201._4_4_ + (fVar177 * fVar126 - fVar194 * fVar150) + fVar176 * fVar141 + fVar102;
      auVar122._8_4_ =
           auVar201._8_4_ + (fVar179 * fVar127 - fVar195 * fVar151) + fVar178 * fVar142 + fVar103;
      auVar122._12_4_ =
           auVar201._12_4_ + (fVar181 * fVar128 - fVar196 * fVar152) + fVar180 * fVar143 + fVar104;
      auVar122._16_4_ =
           auVar201._16_4_ + (fVar183 * fVar129 - fVar197 * fVar153) + fVar182 * fVar144 + fVar105;
      auVar122._20_4_ =
           auVar201._20_4_ + (fVar186 * fVar130 - fVar198 * fVar154) + fVar185 * fVar145 + fVar106;
      auVar122._24_4_ =
           auVar201._24_4_ + (fVar188 * fVar131 - fVar199 * fVar155) + fVar187 * fVar146 + fVar107;
      auVar122._28_4_ =
           auVar201._28_4_ + (fVar190 * fVar132 - fVar200 * fVar156) + fVar189 * fVar147 + fVar108;
      local_388 = auVar77._0_4_;
      fStack_384 = auVar77._4_4_;
      fStack_380 = auVar77._8_4_;
      fStack_37c = auVar77._12_4_;
      fStack_378 = auVar77._16_4_;
      fStack_374 = auVar77._20_4_;
      fStack_370 = auVar77._24_4_;
      fStack_36c = auVar77._28_4_;
      auVar157._0_4_ =
           fVar173 * fVar148 + fVar42 + (fVar191 * fVar133 - fVar159 * fVar120) + local_388;
      auVar157._4_4_ =
           fVar176 * fVar150 + fVar50 + (fVar194 * fVar141 - fVar165 * fVar126) + fStack_384;
      auVar157._8_4_ =
           fVar178 * fVar151 + fVar52 + (fVar195 * fVar142 - fVar166 * fVar127) + fStack_380;
      auVar157._12_4_ =
           fVar180 * fVar152 + fVar54 + (fVar196 * fVar143 - fVar167 * fVar128) + fStack_37c;
      auVar157._16_4_ =
           fVar182 * fVar153 + fVar56 + (fVar197 * fVar144 - fVar168 * fVar129) + fStack_378;
      auVar157._20_4_ =
           fVar185 * fVar154 + fVar58 + (fVar198 * fVar145 - fVar170 * fVar130) + fStack_374;
      auVar157._24_4_ =
           fVar187 * fVar155 + fVar60 + (fVar199 * fVar146 - fVar171 * fVar131) + fStack_370;
      auVar157._28_4_ =
           fVar189 * fVar156 + fVar62 + (fVar200 * fVar147 - fVar172 * fVar132) + fStack_36c;
      auVar149._0_4_ =
           auVar23._0_4_ + (fVar159 * fVar148 - fVar174 * fVar133) + fVar173 * fVar120 + fVar109;
      auVar149._4_4_ =
           auVar23._4_4_ + (fVar165 * fVar150 - fVar177 * fVar141) + fVar176 * fVar126 + fVar113;
      auVar149._8_4_ =
           auVar23._8_4_ + (fVar166 * fVar151 - fVar179 * fVar142) + fVar178 * fVar127 + fVar114;
      auVar149._12_4_ =
           auVar23._12_4_ + (fVar167 * fVar152 - fVar181 * fVar143) + fVar180 * fVar128 + fVar115;
      auVar149._16_4_ =
           auVar23._16_4_ + (fVar168 * fVar153 - fVar183 * fVar144) + fVar182 * fVar129 + fVar116;
      auVar149._20_4_ =
           auVar23._20_4_ + (fVar170 * fVar154 - fVar186 * fVar145) + fVar185 * fVar130 + fVar117;
      auVar149._24_4_ =
           auVar23._24_4_ + (fVar171 * fVar155 - fVar188 * fVar146) + fVar187 * fVar131 + fVar118;
      auVar149._28_4_ =
           auVar23._28_4_ + (fVar172 * fVar156 - fVar190 * fVar147) + fVar189 * fVar132 + fVar119;
      uVar1 = *param_10;
      auVar161._4_4_ = uVar1;
      auVar161._0_4_ = uVar1;
      auVar161._8_4_ = uVar1;
      auVar161._12_4_ = uVar1;
      auVar161._16_4_ = uVar1;
      auVar161._20_4_ = uVar1;
      auVar161._24_4_ = uVar1;
      auVar161._28_4_ = uVar1;
      auVar66 = vsubps_avx(auVar122,auVar161);
      uVar1 = param_10[1];
      auVar27._4_4_ = uVar1;
      auVar27._0_4_ = uVar1;
      auVar27._8_4_ = uVar1;
      auVar27._12_4_ = uVar1;
      auVar27._16_4_ = uVar1;
      auVar27._20_4_ = uVar1;
      auVar27._24_4_ = uVar1;
      auVar27._28_4_ = uVar1;
      auVar81 = vsubps_avx(auVar157,auVar27);
      uVar1 = param_10[2];
      auVar28._4_4_ = uVar1;
      auVar28._0_4_ = uVar1;
      auVar28._8_4_ = uVar1;
      auVar28._12_4_ = uVar1;
      auVar28._16_4_ = uVar1;
      auVar28._20_4_ = uVar1;
      auVar28._24_4_ = uVar1;
      auVar28._28_4_ = uVar1;
      auVar86 = vsubps_avx(auVar149,auVar28);
      auVar110 = *(undefined1 (*) [32])(param_6 + param_12);
      auVar111 = vunpcklps_avx(auVar66,auVar81);
      auVar24 = vunpcklps_avx(auVar86,auVar110);
      auVar25 = vunpcklpd_avx(auVar111,auVar24);
      auVar111 = vunpckhpd_avx(auVar111,auVar24);
      auVar158._16_16_ = auVar111._0_16_;
      auVar158._0_16_ = auVar25._0_16_;
      pauVar19[-3] = auVar158;
      auVar110 = vunpckhps_avx(auVar86,auVar110);
      auVar24 = vunpckhps_avx(auVar66,auVar81);
      auVar26 = vunpcklpd_avx(auVar24,auVar110);
      auVar110 = vunpckhpd_avx(auVar24,auVar110);
      auVar192._16_16_ = auVar110._0_16_;
      auVar192._0_16_ = auVar26._0_16_;
      pauVar19[-2] = auVar192;
      auVar111 = vperm2f128_avx(auVar25,auVar111,0x31);
      pauVar19[-1] = auVar111;
      auVar110 = vperm2f128_avx(auVar26,auVar110,0x31);
      *pauVar19 = auVar110;
      auVar24._16_16_ = auVar81._0_16_;
      auVar24._0_16_ = auVar66._0_16_;
      auVar111 = vshufpd_avx(auVar66,auVar24,2);
      auVar24 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar86);
      auVar110 = vpermpd_avx2(auVar81,0xe9);
      auVar110 = vblendps_avx(auVar24,auVar110,7);
      auVar24 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar111);
      auVar111 = vblendps_avx(auVar111,auVar24,0xa4);
      *(undefined1 (*) [32])(lVar10 + -0x40 + lVar4) = auVar111;
      auVar111 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar110);
      auVar110 = vshufpd_avx(auVar66,auVar66,1);
      auVar110 = vblendps_avx(auVar111,auVar110,0x92);
      *(undefined1 (*) [32])(lVar10 + -0x20 + lVar4) = auVar110;
      auVar111 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar81);
      auVar110 = vpermpd_avx2(auVar66,0xff);
      auVar110 = vblendps_avx(auVar111,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar86,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      *(undefined1 (*) [32])(lVar10 + lVar4) = auVar110;
      auVar25 = ___ymm_0000000200000002000000000000000000000001000000000000000100000000;
      auVar24 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
      auVar110 = *(undefined1 (*) [32])(lVar13 + -0x40 + lVar4);
      auVar111 = *(undefined1 (*) [32])(lVar13 + -0x20 + lVar4);
      auVar66 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar111);
      auVar81 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar66 = vblendps_avx(auVar81,auVar66,0x88);
      auVar81 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar111);
      auVar86 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(lVar13 + lVar4));
      auVar81 = vblendps_avx(auVar86,auVar81,0x13);
      auVar86 = vperm2f128_avx(auVar66,auVar81,0x31);
      auVar110 = vblendps_avx(auVar111,auVar110,0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(lVar13 + lVar4));
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      fVar148 = auVar66._0_4_ * fVar43;
      fVar150 = auVar66._4_4_ * fVar51;
      fVar151 = auVar66._8_4_ * fVar53;
      fVar152 = auVar66._12_4_ * fVar55;
      fVar153 = auVar81._0_4_ * fVar57;
      fVar154 = auVar81._4_4_ * fVar59;
      fVar155 = auVar81._8_4_ * fVar61;
      fVar156 = auVar81._12_4_ * fVar63;
      fVar91 = fVar64 * auVar86._0_4_;
      fVar102 = fVar70 * auVar86._4_4_;
      fVar103 = fVar71 * auVar86._8_4_;
      fVar104 = fVar72 * auVar86._12_4_;
      fVar105 = fVar73 * auVar86._16_4_;
      fVar106 = fVar74 * auVar86._20_4_;
      fVar107 = fVar75 * auVar86._24_4_;
      fVar108 = fVar76 * auVar86._28_4_;
      fVar42 = fVar21 * auVar110._0_4_;
      fVar50 = fVar35 * auVar110._4_4_;
      fVar52 = fVar36 * auVar110._8_4_;
      fVar54 = fVar37 * auVar110._12_4_;
      fVar56 = fVar38 * auVar110._16_4_;
      fVar58 = fVar39 * auVar110._20_4_;
      fVar60 = fVar40 * auVar110._24_4_;
      fVar62 = fVar41 * auVar110._28_4_;
      fVar109 = fVar159 * fVar91 - fVar174 * fVar148;
      fVar113 = fVar165 * fVar102 - fVar177 * fVar150;
      fVar114 = fVar166 * fVar103 - fVar179 * fVar151;
      fVar115 = fVar167 * fVar104 - fVar181 * fVar152;
      fVar116 = fVar168 * fVar105 - fVar183 * fVar153;
      fVar117 = fVar170 * fVar106 - fVar186 * fVar154;
      fVar118 = fVar171 * fVar107 - fVar188 * fVar155;
      fVar119 = fVar172 * fVar108 - fVar190 * fVar156;
      fVar120 = fVar174 * fVar42 - fVar191 * fVar91;
      fVar126 = fVar177 * fVar50 - fVar194 * fVar102;
      fVar127 = fVar179 * fVar52 - fVar195 * fVar103;
      fVar128 = fVar181 * fVar54 - fVar196 * fVar104;
      fVar129 = fVar183 * fVar56 - fVar197 * fVar105;
      fVar130 = fVar186 * fVar58 - fVar198 * fVar106;
      fVar131 = fVar188 * fVar60 - fVar199 * fVar107;
      fVar132 = fVar190 * fVar62 - fVar200 * fVar108;
      fVar133 = fVar191 * fVar148 - fVar159 * fVar42;
      fVar141 = fVar194 * fVar150 - fVar165 * fVar50;
      fVar142 = fVar195 * fVar151 - fVar166 * fVar52;
      fVar143 = fVar196 * fVar152 - fVar167 * fVar54;
      fVar144 = fVar197 * fVar153 - fVar168 * fVar56;
      fVar145 = fVar198 * fVar154 - fVar170 * fVar58;
      fVar146 = fVar199 * fVar155 - fVar171 * fVar60;
      fVar147 = fVar200 * fVar156 - fVar172 * fVar62;
      fVar120 = fVar120 + fVar120;
      fVar126 = fVar126 + fVar126;
      fVar127 = fVar127 + fVar127;
      fVar128 = fVar128 + fVar128;
      fVar129 = fVar129 + fVar129;
      fVar130 = fVar130 + fVar130;
      fVar131 = fVar131 + fVar131;
      fVar132 = fVar132 + fVar132;
      fVar133 = fVar133 + fVar133;
      fVar141 = fVar141 + fVar141;
      fVar142 = fVar142 + fVar142;
      fVar143 = fVar143 + fVar143;
      fVar144 = fVar144 + fVar144;
      fVar145 = fVar145 + fVar145;
      fVar146 = fVar146 + fVar146;
      fVar147 = fVar147 + fVar147;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      auVar77._0_4_ = (fVar159 * fVar133 - fVar174 * fVar120) + fVar173 * fVar109 + fVar42;
      auVar77._4_4_ = (fVar165 * fVar141 - fVar177 * fVar126) + fVar176 * fVar113 + fVar50;
      auVar77._8_4_ = (fVar166 * fVar142 - fVar179 * fVar127) + fVar178 * fVar114 + fVar52;
      auVar77._12_4_ = (fVar167 * fVar143 - fVar181 * fVar128) + fVar180 * fVar115 + fVar54;
      auVar77._16_4_ = (fVar168 * fVar144 - fVar183 * fVar129) + fVar182 * fVar116 + fVar56;
      auVar77._20_4_ = (fVar170 * fVar145 - fVar186 * fVar130) + fVar185 * fVar117 + fVar58;
      auVar77._24_4_ = (fVar171 * fVar146 - fVar188 * fVar131) + fVar187 * fVar118 + fVar60;
      auVar77._28_4_ = (fVar172 * fVar147 - fVar190 * fVar132) + fVar189 * fVar119 + fVar62;
      auVar83._0_4_ = fVar173 * fVar120 + fVar148 + (fVar174 * fVar109 - fVar191 * fVar133);
      auVar83._4_4_ = fVar176 * fVar126 + fVar150 + (fVar177 * fVar113 - fVar194 * fVar141);
      auVar83._8_4_ = fVar178 * fVar127 + fVar151 + (fVar179 * fVar114 - fVar195 * fVar142);
      auVar83._12_4_ = fVar180 * fVar128 + fVar152 + (fVar181 * fVar115 - fVar196 * fVar143);
      auVar84._16_4_ = fVar182 * fVar129 + fVar153 + (fVar183 * fVar116 - fVar197 * fVar144);
      auVar84._0_16_ = auVar83;
      auVar84._20_4_ = fVar185 * fVar130 + fVar154 + (fVar186 * fVar117 - fVar198 * fVar145);
      auVar84._24_4_ = fVar187 * fVar131 + fVar155 + (fVar188 * fVar118 - fVar199 * fVar146);
      auVar84._28_4_ = fVar189 * fVar132 + fVar156 + (fVar190 * fVar119 - fVar200 * fVar147);
      auVar44._0_4_ = fVar173 * fVar133 + fVar91 + (fVar191 * fVar120 - fVar159 * fVar109);
      auVar44._4_4_ = fVar176 * fVar141 + fVar102 + (fVar194 * fVar126 - fVar165 * fVar113);
      auVar44._8_4_ = fVar178 * fVar142 + fVar103 + (fVar195 * fVar127 - fVar166 * fVar114);
      auVar44._12_4_ = fVar180 * fVar143 + fVar104 + (fVar196 * fVar128 - fVar167 * fVar115);
      auVar45._16_4_ = fVar182 * fVar144 + fVar105 + (fVar197 * fVar129 - fVar168 * fVar116);
      auVar45._0_16_ = auVar44;
      auVar45._20_4_ = fVar185 * fVar145 + fVar106 + (fVar198 * fVar130 - fVar170 * fVar117);
      auVar45._24_4_ = fVar187 * fVar146 + fVar107 + (fVar199 * fVar131 - fVar171 * fVar118);
      auVar45._28_4_ = fVar189 * fVar147 + fVar108 + (fVar200 * fVar132 - fVar172 * fVar119);
      auVar175._16_16_ = auVar44;
      auVar175._0_16_ = auVar83;
      auVar111 = vshufpd_avx(auVar84,auVar175,2);
      auVar66 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar77);
      auVar110 = vpermpd_avx2(auVar45,0xe9);
      auVar110 = vblendps_avx(auVar66,auVar110,7);
      auVar66 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar111);
      auVar111 = vblendps_avx(auVar111,auVar66,0xa4);
      *(undefined1 (*) [32])(lVar13 + -0x40 + lVar4) = auVar111;
      auVar111 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar110);
      auVar110 = vshufpd_avx(auVar84,auVar84,1);
      auVar110 = vblendps_avx(auVar111,auVar110,0x92);
      *(undefined1 (*) [32])(lVar13 + -0x20 + lVar4) = auVar110;
      auVar175 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar111 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar45);
      auVar110 = vpermpd_avx2(auVar84,0xff);
      auVar110 = vblendps_avx(auVar111,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar77,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      *(undefined1 (*) [32])(lVar13 + lVar4) = auVar110;
      auVar158 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar157 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar77 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar110 = *(undefined1 (*) [32])(lVar17 + -0x40 + lVar4);
      auVar111 = *(undefined1 (*) [32])(lVar17 + -0x20 + lVar4);
      auVar66 = vpermps_avx2(auVar25,auVar111);
      auVar81 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar66 = vblendps_avx(auVar81,auVar66,0x88);
      auVar81 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar111);
      auVar86 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(lVar17 + lVar4));
      auVar81 = vblendps_avx(auVar86,auVar81,0x13);
      auVar86 = vperm2f128_avx(auVar66,auVar81,0x31);
      auVar110 = vblendps_avx(auVar111,auVar110,0x24);
      auVar110 = vpermps_avx2(auVar24,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(lVar17 + lVar4));
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      fVar43 = auVar66._0_4_ * fVar43;
      fVar51 = auVar66._4_4_ * fVar51;
      fVar53 = auVar66._8_4_ * fVar53;
      fVar55 = auVar66._12_4_ * fVar55;
      fVar57 = auVar81._0_4_ * fVar57;
      fVar59 = auVar81._4_4_ * fVar59;
      fVar61 = auVar81._8_4_ * fVar61;
      fVar63 = auVar81._12_4_ * fVar63;
      fVar64 = fVar64 * auVar86._0_4_;
      fVar70 = fVar70 * auVar86._4_4_;
      fVar71 = fVar71 * auVar86._8_4_;
      fVar72 = fVar72 * auVar86._12_4_;
      fVar73 = fVar73 * auVar86._16_4_;
      fVar74 = fVar74 * auVar86._20_4_;
      fVar75 = fVar75 * auVar86._24_4_;
      fVar76 = fVar76 * auVar86._28_4_;
      fVar21 = fVar21 * auVar110._0_4_;
      fVar35 = fVar35 * auVar110._4_4_;
      fVar36 = fVar36 * auVar110._8_4_;
      fVar37 = fVar37 * auVar110._12_4_;
      fVar38 = fVar38 * auVar110._16_4_;
      fVar39 = fVar39 * auVar110._20_4_;
      fVar40 = fVar40 * auVar110._24_4_;
      fVar41 = fVar41 * auVar110._28_4_;
      fVar42 = fVar159 * fVar64 - fVar174 * fVar43;
      fVar50 = fVar165 * fVar70 - fVar177 * fVar51;
      fVar52 = fVar166 * fVar71 - fVar179 * fVar53;
      fVar54 = fVar167 * fVar72 - fVar181 * fVar55;
      fVar56 = fVar168 * fVar73 - fVar183 * fVar57;
      fVar58 = fVar170 * fVar74 - fVar186 * fVar59;
      fVar60 = fVar171 * fVar75 - fVar188 * fVar61;
      fVar62 = fVar172 * fVar76 - fVar190 * fVar63;
      fVar91 = fVar174 * fVar21 - fVar191 * fVar64;
      fVar102 = fVar177 * fVar35 - fVar194 * fVar70;
      fVar103 = fVar179 * fVar36 - fVar195 * fVar71;
      fVar104 = fVar181 * fVar37 - fVar196 * fVar72;
      fVar105 = fVar183 * fVar38 - fVar197 * fVar73;
      fVar106 = fVar186 * fVar39 - fVar198 * fVar74;
      fVar107 = fVar188 * fVar40 - fVar199 * fVar75;
      fVar108 = fVar190 * fVar41 - fVar200 * fVar76;
      fVar109 = fVar191 * fVar43 - fVar159 * fVar21;
      fVar113 = fVar194 * fVar51 - fVar165 * fVar35;
      fVar114 = fVar195 * fVar53 - fVar166 * fVar36;
      fVar115 = fVar196 * fVar55 - fVar167 * fVar37;
      fVar116 = fVar197 * fVar57 - fVar168 * fVar38;
      fVar117 = fVar198 * fVar59 - fVar170 * fVar39;
      fVar118 = fVar199 * fVar61 - fVar171 * fVar40;
      fVar119 = fVar200 * fVar63 - fVar172 * fVar41;
      fVar91 = fVar91 + fVar91;
      fVar102 = fVar102 + fVar102;
      fVar103 = fVar103 + fVar103;
      fVar104 = fVar104 + fVar104;
      fVar105 = fVar105 + fVar105;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar108 = fVar108 + fVar108;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar42 = fVar42 + fVar42;
      fVar50 = fVar50 + fVar50;
      fVar52 = fVar52 + fVar52;
      fVar54 = fVar54 + fVar54;
      fVar56 = fVar56 + fVar56;
      fVar58 = fVar58 + fVar58;
      fVar60 = fVar60 + fVar60;
      fVar62 = fVar62 + fVar62;
      auVar46._0_4_ =
           (fVar42 * fVar174 - fVar191 * fVar109) + fVar173 * fVar91 + fVar43 + auVar201._0_4_;
      auVar46._4_4_ =
           (fVar50 * fVar177 - fVar194 * fVar113) + fVar176 * fVar102 + fVar51 + auVar201._4_4_;
      auVar46._8_4_ =
           (fVar52 * fVar179 - fVar195 * fVar114) + fVar178 * fVar103 + fVar53 + auVar201._8_4_;
      auVar46._12_4_ =
           (fVar54 * fVar181 - fVar196 * fVar115) + fVar180 * fVar104 + fVar55 + auVar201._12_4_;
      auVar46._16_4_ =
           (fVar56 * fVar183 - fVar197 * fVar116) + fVar182 * fVar105 + fVar57 + auVar201._16_4_;
      auVar46._20_4_ =
           (fVar58 * fVar186 - fVar198 * fVar117) + fVar185 * fVar106 + fVar59 + auVar201._20_4_;
      auVar46._24_4_ =
           (fVar60 * fVar188 - fVar199 * fVar118) + fVar187 * fVar107 + fVar61 + auVar201._24_4_;
      auVar46._28_4_ =
           (fVar62 * fVar190 - fVar200 * fVar119) + fVar189 * fVar108 + fVar63 + auVar201._28_4_;
      auVar201._0_4_ =
           fVar173 * fVar109 + fVar64 + (fVar91 * fVar191 - fVar159 * fVar42) + local_388;
      auVar201._4_4_ =
           fVar176 * fVar113 + fVar70 + (fVar102 * fVar194 - fVar165 * fVar50) + fStack_384;
      auVar201._8_4_ =
           fVar178 * fVar114 + fVar71 + (fVar103 * fVar195 - fVar166 * fVar52) + fStack_380;
      auVar201._12_4_ =
           fVar180 * fVar115 + fVar72 + (fVar104 * fVar196 - fVar167 * fVar54) + fStack_37c;
      auVar201._16_4_ =
           fVar182 * fVar116 + fVar73 + (fVar105 * fVar197 - fVar168 * fVar56) + fStack_378;
      auVar201._20_4_ =
           fVar185 * fVar117 + fVar74 + (fVar106 * fVar198 - fVar170 * fVar58) + fStack_374;
      auVar201._24_4_ =
           fVar187 * fVar118 + fVar75 + (fVar107 * fVar199 - fVar171 * fVar60) + fStack_370;
      auVar201._28_4_ =
           fVar189 * fVar119 + fVar76 + (fVar108 * fVar200 - fVar172 * fVar62) + fStack_36c;
      auVar25._0_4_ =
           fVar42 * fVar173 + fVar21 + (fVar109 * fVar159 - fVar174 * fVar91) + auVar23._0_4_;
      auVar25._4_4_ =
           fVar50 * fVar176 + fVar35 + (fVar113 * fVar165 - fVar177 * fVar102) + auVar23._4_4_;
      auVar25._8_4_ =
           fVar52 * fVar178 + fVar36 + (fVar114 * fVar166 - fVar179 * fVar103) + auVar23._8_4_;
      auVar25._12_4_ =
           fVar54 * fVar180 + fVar37 + (fVar115 * fVar167 - fVar181 * fVar104) + auVar23._12_4_;
      auVar25._16_4_ =
           fVar56 * fVar182 + fVar38 + (fVar116 * fVar168 - fVar183 * fVar105) + auVar23._16_4_;
      auVar25._20_4_ =
           fVar58 * fVar185 + fVar39 + (fVar117 * fVar170 - fVar186 * fVar106) + auVar23._20_4_;
      auVar25._24_4_ =
           fVar60 * fVar187 + fVar40 + (fVar118 * fVar171 - fVar188 * fVar107) + auVar23._24_4_;
      auVar25._28_4_ =
           fVar62 * fVar189 + fVar41 + (fVar119 * fVar172 - fVar190 * fVar108) + auVar23._28_4_;
      auVar86 = vsubps_avx(auVar46,auVar161);
      auVar24 = vsubps_avx(auVar201,auVar27);
      auVar25 = vsubps_avx(auVar25,auVar28);
      auVar23._16_16_ = auVar24._0_16_;
      auVar23._0_16_ = auVar86._0_16_;
      auVar111 = vshufpd_avx(auVar86,auVar23,2);
      auVar66 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar25);
      auVar110 = vpermpd_avx2(auVar24,0xe9);
      auVar110 = vblendps_avx(auVar66,auVar110,7);
      auVar66 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar111);
      auVar111 = vblendps_avx(auVar111,auVar66,0xa4);
      *(undefined1 (*) [32])(lVar17 + -0x40 + lVar4) = auVar111;
      auVar23 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar111 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar110);
      auVar110 = vshufpd_avx(auVar86,auVar86,1);
      auVar110 = vblendps_avx(auVar111,auVar110,0x92);
      *(undefined1 (*) [32])(lVar17 + -0x20 + lVar4) = auVar110;
      auVar161 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar111 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar24);
      auVar110 = vpermpd_avx2(auVar86,0xff);
      auVar110 = vblendps_avx(auVar111,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar25,0xe0);
      auVar110 = vpermps_avx2(auVar175,auVar110);
      *(undefined1 (*) [32])(lVar17 + lVar4) = auVar110;
      auVar110 = *(undefined1 (*) [32])(lVar16 + -0x40 + lVar4);
      auVar111 = *(undefined1 (*) [32])(lVar16 + -0x20 + lVar4);
      auVar66 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar111);
      auVar81 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar66 = vblendps_avx(auVar81,auVar66,0x88);
      auVar81 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar111);
      auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(lVar16 + lVar4));
      auVar81 = vblendps_avx(auVar26,auVar81,0x13);
      auVar134._16_16_ = auVar81._0_16_;
      auVar134._0_16_ = auVar66._0_16_;
      auVar81 = vperm2f128_avx(auVar66,auVar81,0x31);
      auVar110 = vblendps_avx(auVar111,auVar110,0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(lVar16 + lVar4));
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      auVar111 = vsubps_avx(auVar134,auVar86);
      auVar26._4_4_ = param_11;
      auVar26._0_4_ = param_11;
      auVar26._8_4_ = param_11;
      auVar26._12_4_ = param_11;
      auVar26._16_4_ = param_11;
      auVar26._20_4_ = param_11;
      auVar26._24_4_ = param_11;
      auVar26._28_4_ = param_11;
      auVar66 = vdivps_avx(auVar111,auVar26);
      auVar111 = vsubps_avx(auVar81,auVar24);
      auVar81 = vdivps_avx(auVar111,auVar26);
      auVar110 = vsubps_avx(auVar110,auVar25);
      auVar86 = vdivps_avx(auVar110,auVar26);
      auVar78._16_16_ = auVar81._0_16_;
      auVar78._0_16_ = auVar66._0_16_;
      auVar111 = vshufpd_avx(auVar66,auVar78,2);
      auVar24 = vpermps_avx2(auVar77,auVar86);
      auVar110 = vpermpd_avx2(auVar81,0xe9);
      auVar110 = vblendps_avx(auVar24,auVar110,7);
      auVar24 = vpermps_avx2(auVar157,auVar110);
      in_ZMM5 = ZEXT3264(auVar24);
      auVar111 = vpermps_avx2(auVar158,auVar111);
      auVar111 = vblendps_avx(auVar111,auVar24,0xa4);
      *(undefined1 (*) [32])(lVar12 + -0x40 + lVar4) = auVar111;
      auVar111 = vpermps_avx2(auVar23,auVar110);
      auVar110 = vshufpd_avx(auVar66,auVar66,1);
      in_ZMM4 = ZEXT3264(auVar110);
      auVar110 = vblendps_avx(auVar111,auVar110,0x92);
      *(undefined1 (*) [32])(lVar12 + -0x20 + lVar4) = auVar110;
      auVar111 = vpermps_avx2(auVar161,auVar81);
      in_ZMM2 = ZEXT3264(auVar111);
      auVar110 = vpermpd_avx2(auVar66,0xff);
      auVar110 = vblendps_avx(auVar111,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar86,0xe0);
      auVar110 = vpermps_avx2(auVar175,auVar110);
      *(undefined1 (*) [32])(lVar12 + lVar4) = auVar110;
      lVar20 = lVar20 + 8;
      lVar10 = lVar10 + 0x60;
      pauVar19 = pauVar19 + 4;
      lVar13 = lVar13 + 0x60;
      lVar17 = lVar17 + 0x60;
      lVar16 = lVar16 + 0x60;
      lVar12 = lVar12 + 0x60;
      param_12 = param_12 + 0x20;
    } while (lVar20 < iVar9);
    param_12 = (int)lVar20;
  }
  if (param_12 < param_13) {
    auVar3._0_4_ = param_12 +
                   ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar3._4_4_ = param_12 + _UNK_150b50ae4;
    auVar3._8_4_ = param_12 + _UNK_150b50ae8;
    auVar3._12_4_ = param_12 + _UNK_150b50aec;
    auVar3._16_4_ = param_12 + _UNK_150b50af0;
    auVar3._20_4_ = param_12 + _UNK_150b50af4;
    auVar3._24_4_ = param_12 + _UNK_150b50af8;
    auVar3._28_4_ = param_12 + _UNK_150b50afc;
    auVar47._4_4_ = param_13;
    auVar47._0_4_ = param_13;
    auVar47._8_4_ = param_13;
    auVar47._12_4_ = param_13;
    auVar47._16_4_ = param_13;
    auVar47._20_4_ = param_13;
    auVar47._24_4_ = param_13;
    auVar47._28_4_ = param_13;
    auVar111 = vpcmpgtd_avx2(auVar47,auVar3);
    auVar110 = vmaskmovps_avx(auVar111,*(undefined1 (*) [32])(param_8 + param_12 * 4));
    auVar65._4_4_ = __real_00000006;
    auVar65._0_4_ = __real_00000006;
    auVar65._8_4_ = __real_00000006;
    auVar65._12_4_ = __real_00000006;
    auVar65._16_4_ = __real_00000006;
    auVar65._20_4_ = __real_00000006;
    auVar65._24_4_ = __real_00000006;
    auVar65._28_4_ = __real_00000006;
    vpmulld_avx2(auVar110,auVar65);
    auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar111);
    auVar79._4_4_ = __real_00000030;
    auVar79._0_4_ = __real_00000030;
    auVar79._8_4_ = __real_00000030;
    auVar79._12_4_ = __real_00000030;
    auVar79._16_4_ = __real_00000030;
    auVar79._20_4_ = __real_00000030;
    auVar79._24_4_ = __real_00000030;
    auVar79._28_4_ = __real_00000030;
    auVar110 = vpmulld_avx2(auVar110,auVar79);
    auVar80._4_4_ = __real_00000004;
    auVar80._0_4_ = __real_00000004;
    auVar80._8_4_ = __real_00000004;
    auVar80._12_4_ = __real_00000004;
    auVar80._16_4_ = __real_00000004;
    auVar80._20_4_ = __real_00000004;
    auVar80._24_4_ = __real_00000004;
    auVar80._28_4_ = __real_00000004;
    vpor_avx2(auVar110,auVar80);
    auVar81 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar111);
    auVar85._4_4_ = __real_00000008;
    auVar85._0_4_ = __real_00000008;
    auVar85._8_4_ = __real_00000008;
    auVar85._12_4_ = __real_00000008;
    auVar85._16_4_ = __real_00000008;
    auVar85._20_4_ = __real_00000008;
    auVar85._24_4_ = __real_00000008;
    auVar85._28_4_ = __real_00000008;
    vpor_avx2(auVar110,auVar85);
    auVar86 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar111);
    auVar93._4_4_ = __real_0000000c;
    auVar93._0_4_ = __real_0000000c;
    auVar93._8_4_ = __real_0000000c;
    auVar93._12_4_ = __real_0000000c;
    auVar93._16_4_ = __real_0000000c;
    auVar93._20_4_ = __real_0000000c;
    auVar93._24_4_ = __real_0000000c;
    auVar93._28_4_ = __real_0000000c;
    vpor_avx2(auVar110,auVar93);
    auVar110 = vgatherdps(ZEXT832(0),auVar111);
    auVar24 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    auVar25 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    auVar77 = vgatherdps(ZEXT832(0) << 0x20,auVar111);
    auVar157 = vgatherdps(ZEXT832(0) << 0x20,auVar111);
    auVar158 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    lVar10 = (longlong)param_12;
    pauVar19 = (undefined1 (*) [32])(param_3 + lVar10 * 0xc);
    uVar15 = vmovmskps_avx(auVar111);
    if (uVar15 == 0xff) {
      auVar23 = pauVar19[1];
      auVar161 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                              ,auVar23);
      auVar175 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,*pauVar19);
      auVar161 = vblendps_avx(auVar175,auVar161,0x88);
      auVar175 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar23);
      auVar27 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar19[2]);
      auVar175 = vblendps_avx(auVar27,auVar175,0x13);
      auVar94._16_16_ = auVar175._0_16_;
      auVar94._0_16_ = auVar161._0_16_;
      auVar161 = vperm2f128_avx(auVar161,auVar175,0x31);
      auVar23 = vblendps_avx(auVar23,*pauVar19,0x24);
      auVar23 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar23);
      auVar162._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar162._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar175 = vpermps_avx2(auVar162,pauVar19[2]);
      auVar23 = vblendps_avx(auVar23,auVar175,0xe0);
    }
    else {
      auVar94 = vgatherdps(ZEXT832(0),auVar111);
      auVar161 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar23 = vgatherdps(ZEXT432(0) << 0x20,auVar111);
    }
    pauVar11 = (undefined1 (*) [32])(param_1 + lVar10 * 0x10);
    cVar14 = (char)uVar15;
    local_388 = auVar77._0_4_;
    fStack_384 = auVar77._4_4_;
    fStack_380 = auVar77._8_4_;
    fStack_37c = auVar77._12_4_;
    fStack_378 = auVar77._16_4_;
    fStack_374 = auVar77._20_4_;
    fStack_370 = auVar77._24_4_;
    fStack_36c = auVar77._28_4_;
    fVar159 = auVar94._0_4_ * local_388;
    fVar165 = auVar94._4_4_ * fStack_384;
    fVar166 = auVar94._8_4_ * fStack_380;
    fVar167 = auVar94._12_4_ * fStack_37c;
    fVar168 = auVar94._16_4_ * fStack_378;
    fVar170 = auVar94._20_4_ * fStack_374;
    fVar171 = auVar94._24_4_ * fStack_370;
    fVar172 = auVar94._28_4_ * fStack_36c;
    fVar106 = auVar157._0_4_;
    fVar105 = fVar106 * auVar161._0_4_;
    fVar108 = auVar157._4_4_;
    fVar107 = fVar108 * auVar161._4_4_;
    fVar113 = auVar157._8_4_;
    fVar109 = fVar113 * auVar161._8_4_;
    fVar115 = auVar157._12_4_;
    fVar114 = fVar115 * auVar161._12_4_;
    fVar73 = auVar157._16_4_;
    fVar116 = fVar73 * auVar161._16_4_;
    fVar74 = auVar157._20_4_;
    fVar117 = fVar74 * auVar161._20_4_;
    fVar75 = auVar157._24_4_;
    fVar118 = fVar75 * auVar161._24_4_;
    fVar76 = auVar157._28_4_;
    fVar119 = fVar76 * auVar161._28_4_;
    fVar141 = auVar158._0_4_;
    fVar53 = fVar141 * auVar23._0_4_;
    fVar143 = auVar158._4_4_;
    fVar71 = fVar143 * auVar23._4_4_;
    fVar145 = auVar158._8_4_;
    fVar55 = fVar145 * auVar23._8_4_;
    fVar147 = auVar158._12_4_;
    fVar72 = fVar147 * auVar23._12_4_;
    fVar150 = auVar158._16_4_;
    fVar42 = fVar150 * auVar23._16_4_;
    fVar152 = auVar158._20_4_;
    fVar21 = fVar152 * auVar23._20_4_;
    fVar154 = auVar158._24_4_;
    fVar50 = fVar154 * auVar23._24_4_;
    fVar156 = auVar158._28_4_;
    fVar35 = fVar156 * auVar23._28_4_;
    fVar43 = auVar81._0_4_;
    fVar57 = auVar81._4_4_;
    fVar59 = auVar81._8_4_;
    fVar61 = auVar81._12_4_;
    fVar63 = auVar81._16_4_;
    fVar64 = auVar81._20_4_;
    fVar51 = auVar81._24_4_;
    fVar70 = auVar81._28_4_;
    fVar60 = auVar86._0_4_;
    fVar40 = auVar86._4_4_;
    fVar62 = auVar86._8_4_;
    fVar41 = auVar86._12_4_;
    fVar91 = auVar86._16_4_;
    fVar102 = auVar86._20_4_;
    fVar103 = auVar86._24_4_;
    fVar104 = auVar86._28_4_;
    fVar52 = auVar66._0_4_;
    fVar36 = auVar66._4_4_;
    fVar54 = auVar66._8_4_;
    fVar37 = auVar66._12_4_;
    fVar56 = auVar66._16_4_;
    fVar38 = auVar66._20_4_;
    fVar58 = auVar66._24_4_;
    fVar39 = auVar66._28_4_;
    fVar133 = fVar52 * fVar105 - fVar159 * fVar43;
    fVar142 = fVar36 * fVar107 - fVar165 * fVar57;
    fVar144 = fVar54 * fVar109 - fVar166 * fVar59;
    fVar146 = fVar37 * fVar114 - fVar167 * fVar61;
    fVar148 = fVar56 * fVar116 - fVar168 * fVar63;
    fVar151 = fVar38 * fVar117 - fVar170 * fVar64;
    fVar153 = fVar58 * fVar118 - fVar171 * fVar51;
    fVar155 = fVar39 * fVar119 - fVar172 * fVar70;
    fVar174 = fVar43 * fVar53 - fVar60 * fVar105;
    fVar177 = fVar57 * fVar71 - fVar40 * fVar107;
    fVar179 = fVar59 * fVar55 - fVar62 * fVar109;
    fVar181 = fVar61 * fVar72 - fVar41 * fVar114;
    fVar183 = fVar63 * fVar42 - fVar91 * fVar116;
    fVar186 = fVar64 * fVar21 - fVar102 * fVar117;
    fVar188 = fVar51 * fVar50 - fVar103 * fVar118;
    fVar190 = fVar70 * fVar35 - fVar104 * fVar119;
    fVar191 = fVar60 * fVar159 - fVar52 * fVar53;
    fVar194 = fVar40 * fVar165 - fVar36 * fVar71;
    fVar195 = fVar62 * fVar166 - fVar54 * fVar55;
    fVar196 = fVar41 * fVar167 - fVar37 * fVar72;
    fVar197 = fVar91 * fVar168 - fVar56 * fVar42;
    fVar198 = fVar102 * fVar170 - fVar38 * fVar21;
    fVar199 = fVar103 * fVar171 - fVar58 * fVar50;
    fVar200 = fVar104 * fVar172 - fVar39 * fVar35;
    fVar174 = fVar174 + fVar174;
    fVar177 = fVar177 + fVar177;
    fVar179 = fVar179 + fVar179;
    fVar181 = fVar181 + fVar181;
    fVar183 = fVar183 + fVar183;
    fVar186 = fVar186 + fVar186;
    fVar188 = fVar188 + fVar188;
    fVar190 = fVar190 + fVar190;
    fVar191 = fVar191 + fVar191;
    fVar194 = fVar194 + fVar194;
    fVar195 = fVar195 + fVar195;
    fVar196 = fVar196 + fVar196;
    fVar197 = fVar197 + fVar197;
    fVar198 = fVar198 + fVar198;
    fVar199 = fVar199 + fVar199;
    fVar200 = fVar200 + fVar200;
    fVar133 = fVar133 + fVar133;
    fVar142 = fVar142 + fVar142;
    fVar144 = fVar144 + fVar144;
    fVar146 = fVar146 + fVar146;
    fVar148 = fVar148 + fVar148;
    fVar151 = fVar151 + fVar151;
    fVar153 = fVar153 + fVar153;
    fVar155 = fVar155 + fVar155;
    fVar120 = auVar110._0_4_;
    fVar126 = auVar110._4_4_;
    fVar127 = auVar110._8_4_;
    fVar128 = auVar110._12_4_;
    fVar129 = auVar110._16_4_;
    fVar130 = auVar110._20_4_;
    fVar131 = auVar110._24_4_;
    fVar132 = auVar110._28_4_;
    auVar123._0_4_ =
         auVar24._0_4_ + fVar120 * fVar174 + fVar159 + (fVar43 * fVar133 - fVar191 * fVar60);
    auVar123._4_4_ =
         auVar24._4_4_ + fVar126 * fVar177 + fVar165 + (fVar57 * fVar142 - fVar194 * fVar40);
    auVar123._8_4_ =
         auVar24._8_4_ + fVar127 * fVar179 + fVar166 + (fVar59 * fVar144 - fVar195 * fVar62);
    auVar123._12_4_ =
         auVar24._12_4_ + fVar128 * fVar181 + fVar167 + (fVar61 * fVar146 - fVar196 * fVar41);
    auVar123._16_4_ =
         auVar24._16_4_ + fVar129 * fVar183 + fVar168 + (fVar63 * fVar148 - fVar197 * fVar91);
    auVar123._20_4_ =
         auVar24._20_4_ + fVar130 * fVar186 + fVar170 + (fVar64 * fVar151 - fVar198 * fVar102);
    auVar123._24_4_ =
         auVar24._24_4_ + fVar131 * fVar188 + fVar171 + (fVar51 * fVar153 - fVar199 * fVar103);
    auVar123._28_4_ =
         auVar24._28_4_ + fVar132 * fVar190 + fVar172 + (fVar70 * fVar155 - fVar200 * fVar104);
    auVar95._0_4_ =
         auVar25._0_4_ + fVar120 * fVar191 + fVar105 + (fVar60 * fVar174 - fVar52 * fVar133);
    auVar95._4_4_ =
         auVar25._4_4_ + fVar126 * fVar194 + fVar107 + (fVar40 * fVar177 - fVar36 * fVar142);
    auVar95._8_4_ =
         auVar25._8_4_ + fVar127 * fVar195 + fVar109 + (fVar62 * fVar179 - fVar54 * fVar144);
    auVar95._12_4_ =
         auVar25._12_4_ + fVar128 * fVar196 + fVar114 + (fVar41 * fVar181 - fVar37 * fVar146);
    auVar95._16_4_ =
         auVar25._16_4_ + fVar129 * fVar197 + fVar116 + (fVar91 * fVar183 - fVar56 * fVar148);
    auVar95._20_4_ =
         auVar25._20_4_ + fVar130 * fVar198 + fVar117 + (fVar102 * fVar186 - fVar38 * fVar151);
    auVar95._24_4_ =
         auVar25._24_4_ + fVar131 * fVar199 + fVar118 + (fVar103 * fVar188 - fVar58 * fVar153);
    auVar95._28_4_ =
         auVar25._28_4_ + fVar132 * fVar200 + fVar119 + (fVar104 * fVar190 - fVar39 * fVar155);
    local_368 = auVar26._0_4_;
    fStack_364 = auVar26._4_4_;
    fStack_360 = auVar26._8_4_;
    fStack_35c = auVar26._12_4_;
    fStack_358 = auVar26._16_4_;
    fStack_354 = auVar26._20_4_;
    fStack_350 = auVar26._24_4_;
    fStack_34c = auVar26._28_4_;
    auVar163._0_4_ = (fVar52 * fVar191 - fVar174 * fVar43) + fVar120 * fVar133 + fVar53 + local_368;
    auVar163._4_4_ = (fVar36 * fVar194 - fVar177 * fVar57) + fVar126 * fVar142 + fVar71 + fStack_364
    ;
    auVar163._8_4_ = (fVar54 * fVar195 - fVar179 * fVar59) + fVar127 * fVar144 + fVar55 + fStack_360
    ;
    auVar163._12_4_ =
         (fVar37 * fVar196 - fVar181 * fVar61) + fVar128 * fVar146 + fVar72 + fStack_35c;
    auVar163._16_4_ =
         (fVar56 * fVar197 - fVar183 * fVar63) + fVar129 * fVar148 + fVar42 + fStack_358;
    auVar163._20_4_ =
         (fVar38 * fVar198 - fVar186 * fVar64) + fVar130 * fVar151 + fVar21 + fStack_354;
    auVar163._24_4_ =
         (fVar58 * fVar199 - fVar188 * fVar51) + fVar131 * fVar153 + fVar50 + fStack_350;
    auVar163._28_4_ =
         (fVar39 * fVar200 - fVar190 * fVar70) + fVar132 * fVar155 + fVar35 + fStack_34c;
    uVar2 = *param_10;
    auVar29._4_4_ = uVar2;
    auVar29._0_4_ = uVar2;
    auVar29._8_4_ = uVar2;
    auVar29._12_4_ = uVar2;
    auVar29._16_4_ = uVar2;
    auVar29._20_4_ = uVar2;
    auVar29._24_4_ = uVar2;
    auVar29._28_4_ = uVar2;
    auVar110 = vsubps_avx(auVar123,auVar29);
    uVar2 = param_10[1];
    auVar124._4_4_ = uVar2;
    auVar124._0_4_ = uVar2;
    auVar124._8_4_ = uVar2;
    auVar124._12_4_ = uVar2;
    auVar124._16_4_ = uVar2;
    auVar124._20_4_ = uVar2;
    auVar124._24_4_ = uVar2;
    auVar124._28_4_ = uVar2;
    auVar66 = vsubps_avx(auVar95,auVar124);
    uVar2 = param_10[2];
    auVar96._4_4_ = uVar2;
    auVar96._0_4_ = uVar2;
    auVar96._8_4_ = uVar2;
    auVar96._12_4_ = uVar2;
    auVar96._16_4_ = uVar2;
    auVar96._20_4_ = uVar2;
    auVar96._24_4_ = uVar2;
    auVar96._28_4_ = uVar2;
    auVar81 = vsubps_avx(auVar163,auVar96);
    auVar86 = vmaskmovps_avx(auVar111,*(undefined1 (*) [32])(param_6 + param_12 * 4));
    auVar44 = auVar110._0_16_;
    auVar83 = auVar110._16_16_;
    auVar22 = auVar66._0_16_;
    if (cVar14 == -1) {
      auVar26 = vunpcklps_avx(auVar110,auVar66);
      auVar77 = vunpcklps_avx(auVar81,auVar86);
      auVar157 = vunpcklpd_avx(auVar26,auVar77);
      auVar26 = vunpckhpd_avx(auVar26,auVar77);
      auVar77 = vunpckhps_avx(auVar110,auVar66);
      auVar86 = vunpckhps_avx(auVar81,auVar86);
      auVar135._16_16_ = auVar26._0_16_;
      auVar135._0_16_ = auVar157._0_16_;
      *pauVar11 = auVar135;
      auVar158 = vunpcklpd_avx(auVar77,auVar86);
      auVar86 = vunpckhpd_avx(auVar77,auVar86);
      auVar193._16_16_ = auVar86._0_16_;
      auVar193._0_16_ = auVar158._0_16_;
      pauVar11[1] = auVar193;
      auVar26 = vperm2f128_avx(auVar157,auVar26,0x31);
      pauVar11[2] = auVar26;
      auVar86 = vperm2f128_avx(auVar158,auVar86,0x31);
      pauVar11[3] = auVar86;
      auVar97._16_16_ = auVar22;
      auVar97._0_16_ = auVar44;
      auVar26 = vshufpd_avx(auVar110,auVar97,2);
      auVar77 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar81);
      auVar86 = vpermpd_avx2(auVar66,0xe9);
      auVar86 = vblendps_avx(auVar77,auVar86,7);
      auVar136._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar136._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar77 = vpermps_avx2(auVar136,auVar86);
      auVar26 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar26);
      auVar26 = vblendps_avx(auVar26,auVar77,0xa4);
      *pauVar19 = auVar26;
      auVar26 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar86);
      auVar86 = vshufpd_avx(auVar110,auVar110,1);
      auVar86 = vblendps_avx(auVar26,auVar86,0x92);
      pauVar19[1] = auVar86;
      auVar98._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar98._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar66 = vpermps_avx2(auVar98,auVar66);
      auVar110 = vpermpd_avx2(auVar110,0xff);
      auVar110 = vblendps_avx(auVar66,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar81,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      pauVar19[2] = auVar110;
      auVar110 = *(undefined1 (*) [32])(param_2 + lVar10 * 0xc);
      auVar66 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar10 * 0xc);
      auVar81 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar10 * 0xc);
      auVar86 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar66);
      auVar26 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar110);
      auVar86 = vblendps_avx(auVar26,auVar86,0x88);
      auVar26 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar66);
      auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar81);
      auVar26 = vblendps_avx(auVar77,auVar26,0x13);
      auVar30._16_16_ = auVar26._0_16_;
      auVar30._0_16_ = auVar86._0_16_;
      auVar86 = vperm2f128_avx(auVar86,auVar26,0x31);
      auVar110 = vblendps_avx(auVar66,auVar110,0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar137._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar137._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar66 = vpermps_avx2(auVar137,auVar81);
      auVar110 = vblendps_avx(auVar110,auVar66,0xe0);
    }
    else {
      auVar184 = auVar66._16_16_;
      auVar160 = auVar81._0_16_;
      auVar169 = auVar81._16_16_;
      auVar92 = auVar86._0_16_;
      auVar121 = auVar86._16_16_;
      if ((uVar15 & 1) != 0) {
        *(int *)*pauVar11 = auVar110._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(*pauVar11 + 0x10) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)pauVar11[1] = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(pauVar11[1] + 0x10) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)pauVar11[2] = auVar110._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(pauVar11[2] + 0x10) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)pauVar11[3] = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(pauVar11[3] + 0x10) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar11 + 4) = auVar66._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(*pauVar11 + 0x14) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(pauVar11[1] + 4) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(pauVar11[1] + 0x14) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar11[2] + 4) = auVar66._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar184,1);
        *(undefined4 *)(pauVar11[2] + 0x14) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar184,2);
        *(undefined4 *)(pauVar11[3] + 4) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar184,3);
        *(undefined4 *)(pauVar11[3] + 0x14) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar11 + 8) = auVar81._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)(*pauVar11 + 0x18) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)(pauVar11[1] + 8) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(pauVar11[1] + 0x18) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar11[2] + 8) = auVar81._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar169,1);
        *(undefined4 *)(pauVar11[2] + 0x18) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar169,2);
        *(undefined4 *)(pauVar11[3] + 8) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar169,3);
        *(undefined4 *)(pauVar11[3] + 0x18) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar11 + 0xc) = auVar86._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar92,1);
        *(undefined4 *)(*pauVar11 + 0x1c) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar92,2);
        *(undefined4 *)(pauVar11[1] + 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar92,3);
        *(undefined4 *)(pauVar11[1] + 0x1c) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar11[2] + 0xc) = auVar86._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar121,1);
        *(undefined4 *)(pauVar11[2] + 0x1c) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar121,2);
        *(undefined4 *)(pauVar11[3] + 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar121,3);
        *(undefined4 *)(pauVar11[3] + 0x1c) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)*pauVar19 = auVar110._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(*pauVar19 + 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(pauVar19[1] + 4) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x10) = auVar110._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)(pauVar19[2] + 8) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar19 + 4) = auVar66._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(pauVar19[1] + 8) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x14) = auVar66._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar184,1);
        *(undefined4 *)pauVar19[2] = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar184,2);
        *(undefined4 *)(pauVar19[2] + 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar184,3);
        *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar19 + 8) = auVar81._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)pauVar19[1] = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x18) = auVar81._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar169,1);
        *(undefined4 *)(pauVar19[2] + 4) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar169,2);
        *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar169,3);
        *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
      }
      auVar30 = vgatherdps(ZEXT832(0) << 0x20,auVar111);
      auVar86 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar110 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    }
    pauVar19 = (undefined1 (*) [32])(param_2 + lVar10 * 0xc);
    fVar159 = auVar30._0_4_ * local_388;
    fVar165 = auVar30._4_4_ * fStack_384;
    fVar166 = auVar30._8_4_ * fStack_380;
    fVar167 = auVar30._12_4_ * fStack_37c;
    fVar168 = auVar30._16_4_ * fStack_378;
    fVar170 = auVar30._20_4_ * fStack_374;
    fVar171 = auVar30._24_4_ * fStack_370;
    fVar172 = auVar30._28_4_ * fStack_36c;
    fVar105 = fVar106 * auVar86._0_4_;
    fVar107 = fVar108 * auVar86._4_4_;
    fVar109 = fVar113 * auVar86._8_4_;
    fVar114 = fVar115 * auVar86._12_4_;
    fVar116 = fVar73 * auVar86._16_4_;
    fVar117 = fVar74 * auVar86._20_4_;
    fVar118 = fVar75 * auVar86._24_4_;
    fVar119 = fVar76 * auVar86._28_4_;
    fVar53 = fVar141 * auVar110._0_4_;
    fVar71 = fVar143 * auVar110._4_4_;
    fVar55 = fVar145 * auVar110._8_4_;
    fVar72 = fVar147 * auVar110._12_4_;
    fVar42 = fVar150 * auVar110._16_4_;
    fVar21 = fVar152 * auVar110._20_4_;
    fVar50 = fVar154 * auVar110._24_4_;
    fVar35 = fVar156 * auVar110._28_4_;
    fVar133 = fVar52 * fVar105 - fVar159 * fVar43;
    fVar142 = fVar36 * fVar107 - fVar165 * fVar57;
    fVar144 = fVar54 * fVar109 - fVar166 * fVar59;
    fVar146 = fVar37 * fVar114 - fVar167 * fVar61;
    fVar148 = fVar56 * fVar116 - fVar168 * fVar63;
    fVar151 = fVar38 * fVar117 - fVar170 * fVar64;
    fVar153 = fVar58 * fVar118 - fVar171 * fVar51;
    fVar155 = fVar39 * fVar119 - fVar172 * fVar70;
    fVar174 = fVar43 * fVar53 - fVar60 * fVar105;
    fVar177 = fVar57 * fVar71 - fVar40 * fVar107;
    fVar179 = fVar59 * fVar55 - fVar62 * fVar109;
    fVar181 = fVar61 * fVar72 - fVar41 * fVar114;
    fVar183 = fVar63 * fVar42 - fVar91 * fVar116;
    fVar186 = fVar64 * fVar21 - fVar102 * fVar117;
    fVar188 = fVar51 * fVar50 - fVar103 * fVar118;
    fVar190 = fVar70 * fVar35 - fVar104 * fVar119;
    fVar191 = fVar60 * fVar159 - fVar52 * fVar53;
    fVar194 = fVar40 * fVar165 - fVar36 * fVar71;
    fVar195 = fVar62 * fVar166 - fVar54 * fVar55;
    fVar196 = fVar41 * fVar167 - fVar37 * fVar72;
    fVar197 = fVar91 * fVar168 - fVar56 * fVar42;
    fVar198 = fVar102 * fVar170 - fVar38 * fVar21;
    fVar199 = fVar103 * fVar171 - fVar58 * fVar50;
    fVar200 = fVar104 * fVar172 - fVar39 * fVar35;
    fVar174 = fVar174 + fVar174;
    fVar177 = fVar177 + fVar177;
    fVar179 = fVar179 + fVar179;
    fVar181 = fVar181 + fVar181;
    fVar183 = fVar183 + fVar183;
    fVar186 = fVar186 + fVar186;
    fVar188 = fVar188 + fVar188;
    fVar190 = fVar190 + fVar190;
    fVar191 = fVar191 + fVar191;
    fVar194 = fVar194 + fVar194;
    fVar195 = fVar195 + fVar195;
    fVar196 = fVar196 + fVar196;
    fVar197 = fVar197 + fVar197;
    fVar198 = fVar198 + fVar198;
    fVar199 = fVar199 + fVar199;
    fVar200 = fVar200 + fVar200;
    fVar133 = fVar133 + fVar133;
    fVar142 = fVar142 + fVar142;
    fVar144 = fVar144 + fVar144;
    fVar146 = fVar146 + fVar146;
    fVar148 = fVar148 + fVar148;
    fVar151 = fVar151 + fVar151;
    fVar153 = fVar153 + fVar153;
    fVar155 = fVar155 + fVar155;
    auVar22._0_4_ = (fVar52 * fVar191 - fVar174 * fVar43) + fVar120 * fVar133 + fVar53;
    auVar22._4_4_ = (fVar36 * fVar194 - fVar177 * fVar57) + fVar126 * fVar142 + fVar71;
    auVar22._8_4_ = (fVar54 * fVar195 - fVar179 * fVar59) + fVar127 * fVar144 + fVar55;
    auVar22._12_4_ = (fVar37 * fVar196 - fVar181 * fVar61) + fVar128 * fVar146 + fVar72;
    auVar31._16_4_ = (fVar56 * fVar197 - fVar183 * fVar63) + fVar129 * fVar148 + fVar42;
    auVar31._0_16_ = auVar22;
    auVar31._20_4_ = (fVar38 * fVar198 - fVar186 * fVar64) + fVar130 * fVar151 + fVar21;
    auVar31._24_4_ = (fVar58 * fVar199 - fVar188 * fVar51) + fVar131 * fVar153 + fVar50;
    auVar31._28_4_ = (fVar39 * fVar200 - fVar190 * fVar70) + fVar132 * fVar155 + fVar35;
    auVar121._0_4_ = fVar120 * fVar174 + fVar159 + (fVar43 * fVar133 - fVar191 * fVar60);
    auVar121._4_4_ = fVar126 * fVar177 + fVar165 + (fVar57 * fVar142 - fVar194 * fVar40);
    auVar121._8_4_ = fVar127 * fVar179 + fVar166 + (fVar59 * fVar144 - fVar195 * fVar62);
    auVar121._12_4_ = fVar128 * fVar181 + fVar167 + (fVar61 * fVar146 - fVar196 * fVar41);
    auVar125._16_4_ = fVar129 * fVar183 + fVar168 + (fVar63 * fVar148 - fVar197 * fVar91);
    auVar125._0_16_ = auVar121;
    auVar125._20_4_ = fVar130 * fVar186 + fVar170 + (fVar64 * fVar151 - fVar198 * fVar102);
    auVar125._24_4_ = fVar131 * fVar188 + fVar171 + (fVar51 * fVar153 - fVar199 * fVar103);
    auVar125._28_4_ = fVar132 * fVar190 + fVar172 + (fVar70 * fVar155 - fVar200 * fVar104);
    auVar92._0_4_ = (fVar60 * fVar174 - fVar52 * fVar133) + fVar120 * fVar191 + fVar105;
    auVar92._4_4_ = (fVar40 * fVar177 - fVar36 * fVar142) + fVar126 * fVar194 + fVar107;
    auVar92._8_4_ = (fVar62 * fVar179 - fVar54 * fVar144) + fVar127 * fVar195 + fVar109;
    auVar92._12_4_ = (fVar41 * fVar181 - fVar37 * fVar146) + fVar128 * fVar196 + fVar114;
    auVar99._16_4_ = (fVar91 * fVar183 - fVar56 * fVar148) + fVar129 * fVar197 + fVar116;
    auVar99._0_16_ = auVar92;
    auVar99._20_4_ = (fVar102 * fVar186 - fVar38 * fVar151) + fVar130 * fVar198 + fVar117;
    auVar99._24_4_ = (fVar103 * fVar188 - fVar58 * fVar153) + fVar131 * fVar199 + fVar118;
    auVar99._28_4_ = (fVar104 * fVar190 - fVar39 * fVar155) + fVar132 * fVar200 + fVar119;
    auVar44 = auVar125._16_16_;
    if (cVar14 == -1) {
      auVar138._16_16_ = auVar92;
      auVar138._0_16_ = auVar121;
      auVar66 = vshufpd_avx(auVar125,auVar138,2);
      auVar81 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar31);
      auVar110 = vpermpd_avx2(auVar99,0xe9);
      auVar110 = vblendps_avx(auVar81,auVar110,7);
      auVar164._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar164._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar81 = vpermps_avx2(auVar164,auVar110);
      auVar66 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar66);
      auVar66 = vblendps_avx(auVar66,auVar81,0xa4);
      *pauVar19 = auVar66;
      lVar13 = lVar10 * 0xc;
      auVar66 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar110);
      auVar110 = vshufpd_avx(auVar125,auVar125,1);
      auVar110 = vblendps_avx(auVar66,auVar110,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar13) = auVar110;
      auVar139._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar139._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar66 = vpermps_avx2(auVar139,auVar99);
      auVar110 = vpermpd_avx2(auVar125,0xff);
      auVar110 = vblendps_avx(auVar66,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar31,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar13) = auVar110;
      auVar110 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar13);
      auVar66 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar13);
      auVar81 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar110);
      auVar86 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(param_4 + lVar13));
      auVar81 = vblendps_avx(auVar86,auVar81,0x88);
      auVar86 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar110);
      auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar66);
      auVar86 = vblendps_avx(auVar26,auVar86,0x13);
      auVar32._16_16_ = auVar86._0_16_;
      auVar32._0_16_ = auVar81._0_16_;
      auVar81 = vperm2f128_avx(auVar81,auVar86,0x31);
      auVar110 = vblendps_avx(auVar110,*(undefined1 (*) [32])(param_4 + lVar13),0x24);
      auVar110 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar110);
      auVar140._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar140._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar66 = vpermps_avx2(auVar140,auVar66);
      auVar110 = vblendps_avx(auVar110,auVar66,0xe0);
    }
    else {
      auVar160 = auVar99._16_16_;
      auVar83 = auVar31._16_16_;
      if ((uVar15 & 1) != 0) {
        *(float *)*pauVar19 = auVar121._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar121,1);
        *(undefined4 *)(param_2 + 0xc + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar121,2);
        *(undefined4 *)(param_2 + 0x18 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar121,3);
        *(undefined4 *)(param_2 + 0x24 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(float *)(param_2 + 0x30 + lVar10 * 0xc) = auVar125._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(param_2 + 0x3c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)(param_2 + 0x48 + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(param_2 + 0x54 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(float *)(param_2 + 4 + lVar10 * 0xc) = auVar92._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar92,1);
        *(undefined4 *)(param_2 + 0x10 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar92,2);
        *(undefined4 *)(param_2 + 0x1c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar92,3);
        *(undefined4 *)(param_2 + 0x28 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(float *)(param_2 + 0x34 + lVar10 * 0xc) = auVar99._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)(param_2 + 0x40 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)(param_2 + 0x4c + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(param_2 + 0x58 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(float *)(param_2 + 8 + lVar10 * 0xc) = auVar22._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(param_2 + 0x14 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(param_2 + 0x20 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(param_2 + 0x2c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(float *)(param_2 + 0x38 + lVar10 * 0xc) = auVar31._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(param_2 + 0x44 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)(param_2 + 0x50 + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(param_2 + 0x5c + lVar10 * 0xc) = uVar2;
      }
      auVar32 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar110 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    }
    pauVar19 = (undefined1 (*) [32])(param_4 + lVar10 * 0xc);
    local_388 = auVar32._0_4_ * local_388;
    fStack_384 = auVar32._4_4_ * fStack_384;
    fStack_380 = auVar32._8_4_ * fStack_380;
    fStack_37c = auVar32._12_4_ * fStack_37c;
    fStack_378 = auVar32._16_4_ * fStack_378;
    fStack_374 = auVar32._20_4_ * fStack_374;
    fStack_370 = auVar32._24_4_ * fStack_370;
    fStack_36c = auVar32._28_4_ * fStack_36c;
    fVar106 = fVar106 * auVar81._0_4_;
    fVar108 = fVar108 * auVar81._4_4_;
    fVar113 = fVar113 * auVar81._8_4_;
    fVar115 = fVar115 * auVar81._12_4_;
    fVar73 = fVar73 * auVar81._16_4_;
    fVar74 = fVar74 * auVar81._20_4_;
    fVar75 = fVar75 * auVar81._24_4_;
    fVar76 = fVar76 * auVar81._28_4_;
    fVar141 = fVar141 * auVar110._0_4_;
    fVar143 = fVar143 * auVar110._4_4_;
    fVar145 = fVar145 * auVar110._8_4_;
    fVar147 = fVar147 * auVar110._12_4_;
    fVar150 = fVar150 * auVar110._16_4_;
    fVar152 = fVar152 * auVar110._20_4_;
    fVar154 = fVar154 * auVar110._24_4_;
    fVar156 = fVar156 * auVar110._28_4_;
    fVar53 = fVar52 * fVar106 - fVar43 * local_388;
    fVar71 = fVar36 * fVar108 - fVar57 * fStack_384;
    fVar55 = fVar54 * fVar113 - fVar59 * fStack_380;
    fVar72 = fVar37 * fVar115 - fVar61 * fStack_37c;
    fVar42 = fVar56 * fVar73 - fVar63 * fStack_378;
    fVar21 = fVar38 * fVar74 - fVar64 * fStack_374;
    fVar50 = fVar58 * fVar75 - fVar51 * fStack_370;
    fVar35 = fVar39 * fVar76 - fVar70 * fStack_36c;
    fVar105 = fVar43 * fVar141 - fVar60 * fVar106;
    fVar107 = fVar57 * fVar143 - fVar40 * fVar108;
    fVar109 = fVar59 * fVar145 - fVar62 * fVar113;
    fVar114 = fVar61 * fVar147 - fVar41 * fVar115;
    fVar116 = fVar63 * fVar150 - fVar91 * fVar73;
    fVar117 = fVar64 * fVar152 - fVar102 * fVar74;
    fVar118 = fVar51 * fVar154 - fVar103 * fVar75;
    fVar119 = fVar70 * fVar156 - fVar104 * fVar76;
    fVar133 = fVar60 * local_388 - fVar52 * fVar141;
    fVar142 = fVar40 * fStack_384 - fVar36 * fVar143;
    fVar144 = fVar62 * fStack_380 - fVar54 * fVar145;
    fVar146 = fVar41 * fStack_37c - fVar37 * fVar147;
    fVar148 = fVar91 * fStack_378 - fVar56 * fVar150;
    fVar151 = fVar102 * fStack_374 - fVar38 * fVar152;
    fVar153 = fVar103 * fStack_370 - fVar58 * fVar154;
    fVar155 = fVar104 * fStack_36c - fVar39 * fVar156;
    fVar105 = fVar105 + fVar105;
    fVar107 = fVar107 + fVar107;
    fVar109 = fVar109 + fVar109;
    fVar114 = fVar114 + fVar114;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    fVar118 = fVar118 + fVar118;
    fVar119 = fVar119 + fVar119;
    fVar133 = fVar133 + fVar133;
    fVar142 = fVar142 + fVar142;
    fVar144 = fVar144 + fVar144;
    fVar146 = fVar146 + fVar146;
    fVar148 = fVar148 + fVar148;
    fVar151 = fVar151 + fVar151;
    fVar153 = fVar153 + fVar153;
    fVar155 = fVar155 + fVar155;
    fVar53 = fVar53 + fVar53;
    fVar71 = fVar71 + fVar71;
    fVar55 = fVar55 + fVar55;
    fVar72 = fVar72 + fVar72;
    fVar42 = fVar42 + fVar42;
    fVar21 = fVar21 + fVar21;
    fVar50 = fVar50 + fVar50;
    fVar35 = fVar35 + fVar35;
    auVar33._0_4_ =
         (fVar43 * fVar53 - fVar133 * fVar60) + fVar120 * fVar105 + local_388 + auVar24._0_4_;
    auVar33._4_4_ =
         (fVar57 * fVar71 - fVar142 * fVar40) + fVar126 * fVar107 + fStack_384 + auVar24._4_4_;
    auVar33._8_4_ =
         (fVar59 * fVar55 - fVar144 * fVar62) + fVar127 * fVar109 + fStack_380 + auVar24._8_4_;
    auVar33._12_4_ =
         (fVar61 * fVar72 - fVar146 * fVar41) + fVar128 * fVar114 + fStack_37c + auVar24._12_4_;
    auVar33._16_4_ =
         (fVar63 * fVar42 - fVar148 * fVar91) + fVar129 * fVar116 + fStack_378 + auVar24._16_4_;
    auVar33._20_4_ =
         (fVar64 * fVar21 - fVar151 * fVar102) + fVar130 * fVar117 + fStack_374 + auVar24._20_4_;
    auVar33._24_4_ =
         (fVar51 * fVar50 - fVar153 * fVar103) + fVar131 * fVar118 + fStack_370 + auVar24._24_4_;
    auVar33._28_4_ =
         (fVar70 * fVar35 - fVar155 * fVar104) + fVar132 * fVar119 + fStack_36c + auVar24._28_4_;
    auVar87._0_4_ =
         (fVar60 * fVar105 - fVar53 * fVar52) + fVar120 * fVar133 + fVar106 + auVar25._0_4_;
    auVar87._4_4_ =
         (fVar40 * fVar107 - fVar71 * fVar36) + fVar126 * fVar142 + fVar108 + auVar25._4_4_;
    auVar87._8_4_ =
         (fVar62 * fVar109 - fVar55 * fVar54) + fVar127 * fVar144 + fVar113 + auVar25._8_4_;
    auVar87._12_4_ =
         (fVar41 * fVar114 - fVar72 * fVar37) + fVar128 * fVar146 + fVar115 + auVar25._12_4_;
    auVar87._16_4_ =
         (fVar91 * fVar116 - fVar42 * fVar56) + fVar129 * fVar148 + fVar73 + auVar25._16_4_;
    auVar87._20_4_ =
         (fVar102 * fVar117 - fVar21 * fVar38) + fVar130 * fVar151 + fVar74 + auVar25._20_4_;
    auVar87._24_4_ =
         (fVar103 * fVar118 - fVar50 * fVar58) + fVar131 * fVar153 + fVar75 + auVar25._24_4_;
    auVar87._28_4_ =
         (fVar104 * fVar119 - fVar35 * fVar39) + fVar132 * fVar155 + fVar76 + auVar25._28_4_;
    auVar67._0_4_ = fVar53 * fVar120 + fVar141 + (fVar52 * fVar133 - fVar105 * fVar43) + local_368;
    auVar67._4_4_ = fVar71 * fVar126 + fVar143 + (fVar36 * fVar142 - fVar107 * fVar57) + fStack_364;
    auVar67._8_4_ = fVar55 * fVar127 + fVar145 + (fVar54 * fVar144 - fVar109 * fVar59) + fStack_360;
    auVar67._12_4_ = fVar72 * fVar128 + fVar147 + (fVar37 * fVar146 - fVar114 * fVar61) + fStack_35c
    ;
    auVar67._16_4_ = fVar42 * fVar129 + fVar150 + (fVar56 * fVar148 - fVar116 * fVar63) + fStack_358
    ;
    auVar67._20_4_ = fVar21 * fVar130 + fVar152 + (fVar38 * fVar151 - fVar117 * fVar64) + fStack_354
    ;
    auVar67._24_4_ = fVar50 * fVar131 + fVar154 + (fVar58 * fVar153 - fVar118 * fVar51) + fStack_350
    ;
    auVar67._28_4_ = fVar35 * fVar132 + fVar156 + (fVar39 * fVar155 - fVar119 * fVar70) + fStack_34c
    ;
    uVar2 = *param_10;
    auVar82._4_4_ = uVar2;
    auVar82._0_4_ = uVar2;
    auVar82._8_4_ = uVar2;
    auVar82._12_4_ = uVar2;
    auVar82._16_4_ = uVar2;
    auVar82._20_4_ = uVar2;
    auVar82._24_4_ = uVar2;
    auVar82._28_4_ = uVar2;
    auVar110 = vsubps_avx(auVar33,auVar82);
    uVar2 = param_10[1];
    auVar34._4_4_ = uVar2;
    auVar34._0_4_ = uVar2;
    auVar34._8_4_ = uVar2;
    auVar34._12_4_ = uVar2;
    auVar34._16_4_ = uVar2;
    auVar34._20_4_ = uVar2;
    auVar34._24_4_ = uVar2;
    auVar34._28_4_ = uVar2;
    auVar66 = vsubps_avx(auVar87,auVar34);
    uVar2 = param_10[2];
    auVar88._4_4_ = uVar2;
    auVar88._0_4_ = uVar2;
    auVar88._8_4_ = uVar2;
    auVar88._12_4_ = uVar2;
    auVar88._16_4_ = uVar2;
    auVar88._20_4_ = uVar2;
    auVar88._24_4_ = uVar2;
    auVar88._28_4_ = uVar2;
    auVar81 = vsubps_avx(auVar67,auVar88);
    auVar83 = auVar110._0_16_;
    auVar22 = auVar110._16_16_;
    auVar44 = auVar66._0_16_;
    if (cVar14 == -1) {
      auVar48._16_16_ = auVar44;
      auVar48._0_16_ = auVar83;
      auVar86 = vshufpd_avx(auVar110,auVar48,2);
      auVar24 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar81);
      auVar111 = vpermpd_avx2(auVar66,0xe9);
      auVar111 = vblendps_avx(auVar24,auVar111,7);
      auVar100._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar100._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar24 = vpermps_avx2(auVar100,auVar111);
      auVar86 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar86);
      auVar86 = vblendps_avx(auVar86,auVar24,0xa4);
      *pauVar19 = auVar86;
      lVar13 = lVar10 * 0xc;
      auVar86 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar111);
      auVar111 = vshufpd_avx(auVar110,auVar110,1);
      auVar111 = vblendps_avx(auVar86,auVar111,0x92);
      *(undefined1 (*) [32])(param_4 + 0x20 + lVar13) = auVar111;
      auVar49._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar49._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar86 = vpermps_avx2(auVar49,auVar66);
      auVar111 = vpermpd_avx2(auVar110,0xff);
      auVar111 = vblendps_avx(auVar86,auVar111,3);
      auVar111 = vblendps_avx(auVar111,auVar81,0xe0);
      auVar111 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar111);
      *(undefined1 (*) [32])(param_4 + 0x40 + lVar13) = auVar111;
      auVar111 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar13);
      auVar86 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar13);
      auVar24 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar111);
      auVar25 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(param_7 + lVar13));
      auVar24 = vblendps_avx(auVar25,auVar24,0x88);
      auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar111);
      auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar86);
      auVar25 = vblendps_avx(auVar26,auVar25,0x13);
      auVar89._16_16_ = auVar25._0_16_;
      auVar89._0_16_ = auVar24._0_16_;
      auVar24 = vperm2f128_avx(auVar24,auVar25,0x31);
      auVar111 = vblendps_avx(auVar111,*(undefined1 (*) [32])(param_7 + lVar13),0x24);
      auVar111 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar111);
      auVar112._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar112._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar86 = vpermps_avx2(auVar112,auVar86);
      auVar111 = vblendps_avx(auVar111,auVar86,0xe0);
    }
    else {
      auVar92 = auVar66._16_16_;
      auVar121 = auVar81._0_16_;
      auVar160 = auVar81._16_16_;
      if ((uVar15 & 1) != 0) {
        *(int *)*pauVar19 = auVar110._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(param_4 + 0xc + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)(param_4 + 0x18 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(param_4 + 0x24 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(param_4 + 0x30 + lVar10 * 0xc) = auVar110._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(param_4 + 0x3c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(param_4 + 0x48 + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(param_4 + 0x54 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(param_4 + 4 + lVar10 * 0xc) = auVar66._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(param_4 + 0x10 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)(param_4 + 0x1c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(param_4 + 0x28 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(param_4 + 0x34 + lVar10 * 0xc) = auVar66._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar92,1);
        *(undefined4 *)(param_4 + 0x40 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar92,2);
        *(undefined4 *)(param_4 + 0x4c + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar92,3);
        *(undefined4 *)(param_4 + 0x58 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(param_4 + 8 + lVar10 * 0xc) = auVar81._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar121,1);
        *(undefined4 *)(param_4 + 0x14 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar121,2);
        *(undefined4 *)(param_4 + 0x20 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar121,3);
        *(undefined4 *)(param_4 + 0x2c + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(param_4 + 0x38 + lVar10 * 0xc) = auVar81._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)(param_4 + 0x44 + lVar10 * 0xc) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)(param_4 + 0x50 + lVar10 * 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(param_4 + 0x5c + lVar10 * 0xc) = uVar2;
      }
      auVar89 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar24 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
      auVar111 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar111);
    }
    auVar110 = vsubps_avx(auVar89,auVar110);
    auVar90._4_4_ = param_11;
    auVar90._0_4_ = param_11;
    auVar90._8_4_ = param_11;
    auVar90._12_4_ = param_11;
    auVar90._16_4_ = param_11;
    auVar90._20_4_ = param_11;
    auVar90._24_4_ = param_11;
    auVar90._28_4_ = param_11;
    auVar110 = vdivps_avx(auVar110,auVar90);
    auVar66 = vsubps_avx(auVar24,auVar66);
    auVar66 = vdivps_avx(auVar66,auVar90);
    auVar111 = vsubps_avx(auVar111,auVar81);
    auVar111 = vdivps_avx(auVar111,auVar90);
    pauVar19 = (undefined1 (*) [32])(param_5 + lVar10 * 0xc);
    auVar83 = auVar110._0_16_;
    auVar22 = auVar110._16_16_;
    auVar44 = auVar66._0_16_;
    if (cVar14 == -1) {
      auVar68._16_16_ = auVar44;
      auVar68._0_16_ = auVar83;
      auVar86 = vshufpd_avx(auVar110,auVar68,2);
      auVar24 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar111);
      auVar81 = vpermpd_avx2(auVar66,0xe9);
      auVar81 = vblendps_avx(auVar24,auVar81,7);
      auVar101._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar101._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar24 = vpermps_avx2(auVar101,auVar81);
      auVar86 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar86);
      auVar86 = vblendps_avx(auVar86,auVar24,0xa4);
      *pauVar19 = auVar86;
      auVar86 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar81);
      auVar81 = vshufpd_avx(auVar110,auVar110,1);
      auVar81 = vblendps_avx(auVar86,auVar81,0x92);
      pauVar19[1] = auVar81;
      auVar69._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar69._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar66 = vpermps_avx2(auVar69,auVar66);
      auVar110 = vpermpd_avx2(auVar110,0xff);
      auVar110 = vblendps_avx(auVar66,auVar110,3);
      auVar110 = vblendps_avx(auVar110,auVar111,0xe0);
      auVar110 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar110);
      pauVar19[2] = auVar110;
    }
    else {
      auVar160 = auVar66._16_16_;
      auVar92 = auVar111._0_16_;
      auVar121 = auVar111._16_16_;
      if ((uVar15 & 1) != 0) {
        *(int *)*pauVar19 = auVar110._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(*pauVar19 + 0xc) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)(*pauVar19 + 0x18) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(pauVar19[1] + 4) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x10) = auVar110._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(pauVar19[1] + 0x1c) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(pauVar19[2] + 8) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(pauVar19[2] + 0x14) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar19 + 4) = auVar66._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(*pauVar19 + 0x10) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)(*pauVar19 + 0x1c) = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(pauVar19[1] + 8) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x14) = auVar66._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar160,1);
        *(undefined4 *)pauVar19[2] = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar160,2);
        *(undefined4 *)(pauVar19[2] + 0xc) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar160,3);
        *(undefined4 *)(pauVar19[2] + 0x18) = uVar2;
      }
      if ((uVar15 & 1) != 0) {
        *(int *)(*pauVar19 + 8) = auVar111._0_4_;
      }
      if ((uVar15 & 2) != 0) {
        uVar2 = vextractps_avx(auVar92,1);
        *(undefined4 *)(*pauVar19 + 0x14) = uVar2;
      }
      if ((uVar15 & 4) != 0) {
        uVar2 = vextractps_avx(auVar92,2);
        *(undefined4 *)pauVar19[1] = uVar2;
      }
      if ((uVar15 & 8) != 0) {
        uVar2 = vextractps_avx(auVar92,3);
        *(undefined4 *)(pauVar19[1] + 0xc) = uVar2;
      }
      if ((uVar15 & 0x10) != 0) {
        *(int *)(pauVar19[1] + 0x18) = auVar111._16_4_;
      }
      if ((uVar15 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar121,1);
        *(undefined4 *)(pauVar19[2] + 4) = uVar2;
      }
      if ((uVar15 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar121,2);
        *(undefined4 *)(pauVar19[2] + 0x10) = uVar2;
      }
      if (cVar14 < '\0') {
        uVar2 = vextractps_avx(auVar121,3);
        *(undefined4 *)(pauVar19[2] + 0x1c) = uVar2;
      }
    }
  }
  return;
}

// ApplyPreSimulationTransform_avx2 @ 140ce1a70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransform_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float *param_8,undefined4 *param_9,
               undefined4 param_10,uint param_11)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar29;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  float fVar30;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  float fVar31;
  undefined1 auVar32 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar33 [32];
  float fVar43;
  undefined1 auVar35 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  float fVar52;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar53 [16];
  undefined1 auVar54 [32];
  float fVar64;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  float fVar65;
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar66 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  float fVar74;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  float fVar75;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  float fVar80;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  float fVar91;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 auVar92 [32];
  float fVar100;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar101 [32];
  float fVar109;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  float fVar120;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar121 [32];
  undefined1 auVar126 [16];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar22 [32];
  undefined1 auVar34 [32];
  undefined1 auVar47 [32];
  undefined1 auVar61 [32];
  undefined1 auVar67 [32];
  
  uVar5 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar5 = param_11;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar7 = 0x10;
    uVar6 = 0;
    uVar8 = 0;
    do {
      auVar82 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar7 * 4);
      auVar58 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar7 * 4);
      auVar46 = *(undefined1 (*) [32])(param_3 + lVar7 * 4);
      auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar58);
      auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar82);
      auVar62 = vblendps_avx(auVar112,auVar62,0x88);
      auVar112 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar58);
      auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar46);
      auVar112 = vblendps_avx(auVar77,auVar112,0x13);
      auVar77 = vperm2f128_avx(auVar62,auVar112,0x31);
      auVar82 = vblendps_avx(auVar58,auVar82,0x24);
      auVar82 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar46);
      auVar82 = vblendps_avx(auVar82,auVar58,0xe0);
      fVar43 = param_8[8];
      fVar80 = auVar62._0_4_ * fVar43;
      fVar84 = auVar62._4_4_ * fVar43;
      fVar85 = auVar62._8_4_ * fVar43;
      fVar86 = auVar62._12_4_ * fVar43;
      fVar87 = auVar112._0_4_ * fVar43;
      fVar88 = auVar112._4_4_ * fVar43;
      fVar89 = auVar112._8_4_ * fVar43;
      fVar90 = auVar112._12_4_ * fVar43;
      fVar64 = param_8[9];
      fVar31 = auVar77._0_4_ * fVar64;
      fVar36 = auVar77._4_4_ * fVar64;
      fVar37 = auVar77._8_4_ * fVar64;
      fVar38 = auVar77._12_4_ * fVar64;
      fVar39 = auVar77._16_4_ * fVar64;
      fVar40 = auVar77._20_4_ * fVar64;
      fVar41 = auVar77._24_4_ * fVar64;
      fVar42 = auVar77._28_4_ * fVar64;
      fVar30 = param_8[10];
      fVar91 = auVar82._0_4_ * fVar30;
      fVar93 = auVar82._4_4_ * fVar30;
      fVar94 = auVar82._8_4_ * fVar30;
      fVar95 = auVar82._12_4_ * fVar30;
      fVar96 = auVar82._16_4_ * fVar30;
      fVar97 = auVar82._20_4_ * fVar30;
      fVar98 = auVar82._24_4_ * fVar30;
      fVar99 = auVar82._28_4_ * fVar30;
      fVar75 = param_8[3];
      fVar65 = param_8[1];
      fVar52 = param_8[2];
      fVar74 = *param_8;
      fVar100 = fVar31 * fVar74 - fVar65 * fVar80;
      fVar102 = fVar36 * fVar74 - fVar65 * fVar84;
      fVar103 = fVar37 * fVar74 - fVar65 * fVar85;
      fVar104 = fVar38 * fVar74 - fVar65 * fVar86;
      fVar105 = fVar39 * fVar74 - fVar65 * fVar87;
      fVar106 = fVar40 * fVar74 - fVar65 * fVar88;
      fVar107 = fVar41 * fVar74 - fVar65 * fVar89;
      fVar108 = fVar42 * fVar74 - fVar65 * fVar90;
      fVar109 = fVar91 * fVar65 - fVar31 * fVar52;
      fVar113 = fVar93 * fVar65 - fVar36 * fVar52;
      fVar114 = fVar94 * fVar65 - fVar37 * fVar52;
      fVar115 = fVar95 * fVar65 - fVar38 * fVar52;
      fVar116 = fVar96 * fVar65 - fVar39 * fVar52;
      fVar117 = fVar97 * fVar65 - fVar40 * fVar52;
      fVar118 = fVar98 * fVar65 - fVar41 * fVar52;
      fVar119 = fVar99 * fVar65 - fVar42 * fVar52;
      fVar120 = fVar80 * fVar52 - fVar74 * fVar91;
      fVar122 = fVar84 * fVar52 - fVar74 * fVar93;
      fVar123 = fVar85 * fVar52 - fVar74 * fVar94;
      fVar124 = fVar86 * fVar52 - fVar74 * fVar95;
      fVar125 = fVar87 * fVar52 - fVar74 * fVar96;
      fVar127 = fVar88 * fVar52 - fVar74 * fVar97;
      fVar128 = fVar89 * fVar52 - fVar74 * fVar98;
      fVar129 = fVar90 * fVar52 - fVar74 * fVar99;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar122 = fVar122 + fVar122;
      fVar123 = fVar123 + fVar123;
      fVar124 = fVar124 + fVar124;
      fVar125 = fVar125 + fVar125;
      fVar127 = fVar127 + fVar127;
      fVar128 = fVar128 + fVar128;
      fVar129 = fVar129 + fVar129;
      fVar100 = fVar100 + fVar100;
      fVar102 = fVar102 + fVar102;
      fVar103 = fVar103 + fVar103;
      fVar104 = fVar104 + fVar104;
      fVar105 = fVar105 + fVar105;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar108 = fVar108 + fVar108;
      fVar10 = param_8[4];
      fVar9 = param_8[5];
      fVar29 = param_8[6];
      auVar130._0_4_ = (fVar65 * fVar100 - fVar120 * fVar52) + fVar75 * fVar109 + fVar80 + fVar10;
      auVar130._4_4_ = (fVar65 * fVar102 - fVar122 * fVar52) + fVar75 * fVar113 + fVar84 + fVar10;
      auVar130._8_4_ = (fVar65 * fVar103 - fVar123 * fVar52) + fVar75 * fVar114 + fVar85 + fVar10;
      auVar130._12_4_ = (fVar65 * fVar104 - fVar124 * fVar52) + fVar75 * fVar115 + fVar86 + fVar10;
      auVar130._16_4_ = (fVar65 * fVar105 - fVar125 * fVar52) + fVar75 * fVar116 + fVar87 + fVar10;
      auVar130._20_4_ = (fVar65 * fVar106 - fVar127 * fVar52) + fVar75 * fVar117 + fVar88 + fVar10;
      auVar130._24_4_ = (fVar65 * fVar107 - fVar128 * fVar52) + fVar75 * fVar118 + fVar89 + fVar10;
      auVar130._28_4_ = (fVar65 * fVar108 - fVar129 * fVar52) + fVar75 * fVar119 + fVar90 + fVar10;
      auVar77._0_4_ = fVar9 + (fVar52 * fVar109 - fVar74 * fVar100) + fVar75 * fVar120 + fVar31;
      auVar77._4_4_ = fVar9 + (fVar52 * fVar113 - fVar74 * fVar102) + fVar75 * fVar122 + fVar36;
      auVar77._8_4_ = fVar9 + (fVar52 * fVar114 - fVar74 * fVar103) + fVar75 * fVar123 + fVar37;
      auVar77._12_4_ = fVar9 + (fVar52 * fVar115 - fVar74 * fVar104) + fVar75 * fVar124 + fVar38;
      auVar77._16_4_ = fVar9 + (fVar52 * fVar116 - fVar74 * fVar105) + fVar75 * fVar125 + fVar39;
      auVar77._20_4_ = fVar9 + (fVar52 * fVar117 - fVar74 * fVar106) + fVar75 * fVar127 + fVar40;
      auVar77._24_4_ = fVar9 + (fVar52 * fVar118 - fVar74 * fVar107) + fVar75 * fVar128 + fVar41;
      auVar77._28_4_ = fVar9 + (fVar52 * fVar119 - fVar74 * fVar108) + fVar75 * fVar129 + fVar42;
      auVar132._0_4_ = (fVar74 * fVar120 - fVar65 * fVar109) + fVar75 * fVar100 + fVar91 + fVar29;
      auVar132._4_4_ = (fVar74 * fVar122 - fVar65 * fVar113) + fVar75 * fVar102 + fVar93 + fVar29;
      auVar132._8_4_ = (fVar74 * fVar123 - fVar65 * fVar114) + fVar75 * fVar103 + fVar94 + fVar29;
      auVar132._12_4_ = (fVar74 * fVar124 - fVar65 * fVar115) + fVar75 * fVar104 + fVar95 + fVar29;
      auVar132._16_4_ = (fVar74 * fVar125 - fVar65 * fVar116) + fVar75 * fVar105 + fVar96 + fVar29;
      auVar132._20_4_ = (fVar74 * fVar127 - fVar65 * fVar117) + fVar75 * fVar106 + fVar97 + fVar29;
      auVar132._24_4_ = (fVar74 * fVar128 - fVar65 * fVar118) + fVar75 * fVar107 + fVar98 + fVar29;
      auVar132._28_4_ = (fVar74 * fVar129 - fVar65 * fVar119) + fVar75 * fVar108 + fVar99 + fVar29;
      uVar1 = *param_9;
      auVar12._4_4_ = uVar1;
      auVar12._0_4_ = uVar1;
      auVar12._8_4_ = uVar1;
      auVar12._12_4_ = uVar1;
      auVar12._16_4_ = uVar1;
      auVar12._20_4_ = uVar1;
      auVar12._24_4_ = uVar1;
      auVar12._28_4_ = uVar1;
      auVar46 = vsubps_avx(auVar130,auVar12);
      uVar1 = param_9[1];
      auVar13._4_4_ = uVar1;
      auVar13._0_4_ = uVar1;
      auVar13._8_4_ = uVar1;
      auVar13._12_4_ = uVar1;
      auVar13._16_4_ = uVar1;
      auVar13._20_4_ = uVar1;
      auVar13._24_4_ = uVar1;
      auVar13._28_4_ = uVar1;
      auVar62 = vsubps_avx(auVar77,auVar13);
      uVar1 = param_9[2];
      auVar14._4_4_ = uVar1;
      auVar14._0_4_ = uVar1;
      auVar14._8_4_ = uVar1;
      auVar14._12_4_ = uVar1;
      auVar14._16_4_ = uVar1;
      auVar14._20_4_ = uVar1;
      auVar14._24_4_ = uVar1;
      auVar14._28_4_ = uVar1;
      auVar112 = vsubps_avx(auVar132,auVar14);
      auVar82 = *(undefined1 (*) [32])(param_6 + (uVar8 & 0xffffffff));
      auVar58 = vunpcklps_avx(auVar46,auVar62);
      auVar77 = vunpcklps_avx(auVar112,auVar82);
      auVar55 = vunpcklpd_avx(auVar58,auVar77);
      auVar58 = vunpckhpd_avx(auVar58,auVar77);
      auVar33._16_16_ = auVar58._0_16_;
      auVar33._0_16_ = auVar55._0_16_;
      *(undefined1 (*) [32])(param_1 + uVar8 * 4) = auVar33;
      auVar82 = vunpckhps_avx(auVar112,auVar82);
      auVar77 = vunpckhps_avx(auVar46,auVar62);
      auVar33 = vunpcklpd_avx(auVar77,auVar82);
      auVar82 = vunpckhpd_avx(auVar77,auVar82);
      auVar54._16_16_ = auVar82._0_16_;
      auVar54._0_16_ = auVar33._0_16_;
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar8 * 4) = auVar54;
      auVar58 = vperm2f128_avx(auVar55,auVar58,0x31);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar8 * 4) = auVar58;
      auVar82 = vperm2f128_avx(auVar33,auVar82,0x31);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar8 * 4) = auVar82;
      auVar82._16_16_ = auVar62._0_16_;
      auVar82._0_16_ = auVar46._0_16_;
      auVar58 = vshufpd_avx(auVar46,auVar82,2);
      auVar77 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar112);
      auVar82 = vpermpd_avx2(auVar62,0xe9);
      auVar82 = vblendps_avx(auVar77,auVar82,7);
      auVar77 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar58);
      auVar58 = vblendps_avx(auVar58,auVar77,0xa4);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7 * 4) = auVar58;
      auVar58 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar82);
      auVar82 = vshufpd_avx(auVar46,auVar46,1);
      auVar82 = vblendps_avx(auVar58,auVar82,0x92);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7 * 4) = auVar82;
      auVar58 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar62);
      auVar82 = vpermpd_avx2(auVar46,0xff);
      auVar82 = vblendps_avx(auVar58,auVar82,3);
      auVar82 = vblendps_avx(auVar82,auVar112,0xe0);
      auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar82);
      *(undefined1 (*) [32])(param_3 + lVar7 * 4) = auVar82;
      auVar54 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar33 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
      auVar55 = ___ymm_0000000600000003000000000000000000000005000000020000000000000000;
      auVar82 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7 * 4);
      auVar58 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7 * 4);
      auVar46 = *(undefined1 (*) [32])(param_2 + lVar7 * 4);
      auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar58);
      auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar82);
      auVar62 = vblendps_avx(auVar112,auVar62,0x88);
      auVar112 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar58);
      auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar46);
      auVar112 = vblendps_avx(auVar77,auVar112,0x13);
      auVar77 = vperm2f128_avx(auVar62,auVar112,0x31);
      auVar82 = vblendps_avx(auVar58,auVar82,0x24);
      auVar82 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar46);
      auVar82 = vblendps_avx(auVar82,auVar58,0xe0);
      fVar120 = fVar43 * auVar62._0_4_;
      fVar122 = fVar43 * auVar62._4_4_;
      fVar123 = fVar43 * auVar62._8_4_;
      fVar124 = fVar43 * auVar62._12_4_;
      fVar125 = fVar43 * auVar112._0_4_;
      fVar127 = fVar43 * auVar112._4_4_;
      fVar128 = fVar43 * auVar112._8_4_;
      fVar129 = fVar43 * auVar112._12_4_;
      fVar80 = fVar64 * auVar77._0_4_;
      fVar84 = fVar64 * auVar77._4_4_;
      fVar85 = fVar64 * auVar77._8_4_;
      fVar86 = fVar64 * auVar77._12_4_;
      fVar87 = fVar64 * auVar77._16_4_;
      fVar88 = fVar64 * auVar77._20_4_;
      fVar89 = fVar64 * auVar77._24_4_;
      fVar90 = fVar64 * auVar77._28_4_;
      fVar31 = fVar30 * auVar82._0_4_;
      fVar36 = fVar30 * auVar82._4_4_;
      fVar37 = fVar30 * auVar82._8_4_;
      fVar38 = fVar30 * auVar82._12_4_;
      fVar39 = fVar30 * auVar82._16_4_;
      fVar40 = fVar30 * auVar82._20_4_;
      fVar41 = fVar30 * auVar82._24_4_;
      fVar42 = fVar30 * auVar82._28_4_;
      fVar91 = fVar80 * fVar74 - fVar120 * fVar65;
      fVar93 = fVar84 * fVar74 - fVar122 * fVar65;
      fVar94 = fVar85 * fVar74 - fVar123 * fVar65;
      fVar95 = fVar86 * fVar74 - fVar124 * fVar65;
      fVar96 = fVar87 * fVar74 - fVar125 * fVar65;
      fVar97 = fVar88 * fVar74 - fVar127 * fVar65;
      fVar98 = fVar89 * fVar74 - fVar128 * fVar65;
      fVar99 = fVar90 * fVar74 - fVar129 * fVar65;
      fVar100 = fVar31 * fVar65 - fVar80 * fVar52;
      fVar102 = fVar36 * fVar65 - fVar84 * fVar52;
      fVar103 = fVar37 * fVar65 - fVar85 * fVar52;
      fVar104 = fVar38 * fVar65 - fVar86 * fVar52;
      fVar105 = fVar39 * fVar65 - fVar87 * fVar52;
      fVar106 = fVar40 * fVar65 - fVar88 * fVar52;
      fVar107 = fVar41 * fVar65 - fVar89 * fVar52;
      fVar108 = fVar42 * fVar65 - fVar90 * fVar52;
      fVar109 = fVar120 * fVar52 - fVar74 * fVar31;
      fVar113 = fVar122 * fVar52 - fVar74 * fVar36;
      fVar114 = fVar123 * fVar52 - fVar74 * fVar37;
      fVar115 = fVar124 * fVar52 - fVar74 * fVar38;
      fVar116 = fVar125 * fVar52 - fVar74 * fVar39;
      fVar117 = fVar127 * fVar52 - fVar74 * fVar40;
      fVar118 = fVar128 * fVar52 - fVar74 * fVar41;
      fVar119 = fVar129 * fVar52 - fVar74 * fVar42;
      fVar100 = fVar100 + fVar100;
      fVar102 = fVar102 + fVar102;
      fVar103 = fVar103 + fVar103;
      fVar104 = fVar104 + fVar104;
      fVar105 = fVar105 + fVar105;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar108 = fVar108 + fVar108;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar91 = fVar91 + fVar91;
      fVar93 = fVar93 + fVar93;
      fVar94 = fVar94 + fVar94;
      fVar95 = fVar95 + fVar95;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar98 = fVar98 + fVar98;
      fVar99 = fVar99 + fVar99;
      auVar62._0_4_ = fVar75 * fVar91 + fVar31 + (fVar74 * fVar109 - fVar65 * fVar100);
      auVar62._4_4_ = fVar75 * fVar93 + fVar36 + (fVar74 * fVar113 - fVar65 * fVar102);
      auVar62._8_4_ = fVar75 * fVar94 + fVar37 + (fVar74 * fVar114 - fVar65 * fVar103);
      auVar62._12_4_ = fVar75 * fVar95 + fVar38 + (fVar74 * fVar115 - fVar65 * fVar104);
      auVar62._16_4_ = fVar75 * fVar96 + fVar39 + (fVar74 * fVar116 - fVar65 * fVar105);
      auVar62._20_4_ = fVar75 * fVar97 + fVar40 + (fVar74 * fVar117 - fVar65 * fVar106);
      auVar62._24_4_ = fVar75 * fVar98 + fVar41 + (fVar74 * fVar118 - fVar65 * fVar107);
      auVar62._28_4_ = fVar75 * fVar99 + fVar42 + (fVar74 * fVar119 - fVar65 * fVar108);
      auVar66._0_4_ = fVar75 * fVar100 + fVar120 + (fVar65 * fVar91 - fVar52 * fVar109);
      auVar66._4_4_ = fVar75 * fVar102 + fVar122 + (fVar65 * fVar93 - fVar52 * fVar113);
      auVar66._8_4_ = fVar75 * fVar103 + fVar123 + (fVar65 * fVar94 - fVar52 * fVar114);
      auVar66._12_4_ = fVar75 * fVar104 + fVar124 + (fVar65 * fVar95 - fVar52 * fVar115);
      auVar67._16_4_ = fVar75 * fVar105 + fVar125 + (fVar65 * fVar96 - fVar52 * fVar116);
      auVar67._0_16_ = auVar66;
      auVar67._20_4_ = fVar75 * fVar106 + fVar127 + (fVar65 * fVar97 - fVar52 * fVar117);
      auVar67._24_4_ = fVar75 * fVar107 + fVar128 + (fVar65 * fVar98 - fVar52 * fVar118);
      auVar67._28_4_ = fVar75 * fVar108 + fVar129 + (fVar65 * fVar99 - fVar52 * fVar119);
      auVar32._0_4_ = fVar75 * fVar109 + fVar80 + (fVar52 * fVar100 - fVar74 * fVar91);
      auVar32._4_4_ = fVar75 * fVar113 + fVar84 + (fVar52 * fVar102 - fVar74 * fVar93);
      auVar32._8_4_ = fVar75 * fVar114 + fVar85 + (fVar52 * fVar103 - fVar74 * fVar94);
      auVar32._12_4_ = fVar75 * fVar115 + fVar86 + (fVar52 * fVar104 - fVar74 * fVar95);
      auVar34._16_4_ = fVar75 * fVar116 + fVar87 + (fVar52 * fVar105 - fVar74 * fVar96);
      auVar34._0_16_ = auVar32;
      auVar34._20_4_ = fVar75 * fVar117 + fVar88 + (fVar52 * fVar106 - fVar74 * fVar97);
      auVar34._24_4_ = fVar75 * fVar118 + fVar89 + (fVar52 * fVar107 - fVar74 * fVar98);
      auVar34._28_4_ = fVar75 * fVar119 + fVar90 + (fVar52 * fVar108 - fVar74 * fVar99);
      auVar45._16_16_ = auVar32;
      auVar45._0_16_ = auVar66;
      auVar58 = vshufpd_avx(auVar67,auVar45,2);
      auVar46 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar62);
      auVar82 = vpermpd_avx2(auVar34,0xe9);
      auVar82 = vblendps_avx(auVar46,auVar82,7);
      auVar46 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar58);
      auVar58 = vblendps_avx(auVar58,auVar46,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar7 * 4) = auVar58;
      auVar58 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar82);
      auVar82 = vshufpd_avx(auVar67,auVar67,1);
      auVar82 = vblendps_avx(auVar58,auVar82,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar7 * 4) = auVar82;
      auVar58 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar34);
      auVar82 = vpermpd_avx2(auVar67,0xff);
      auVar82 = vblendps_avx(auVar58,auVar82,3);
      auVar82 = vblendps_avx(auVar82,auVar62,0xe0);
      auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar82);
      *(undefined1 (*) [32])(param_2 + lVar7 * 4) = auVar82;
      auVar45 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar34 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar82 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar7 * 4);
      auVar58 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar7 * 4);
      auVar46 = *(undefined1 (*) [32])(param_4 + lVar7 * 4);
      auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar58);
      auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar82);
      auVar62 = vblendps_avx(auVar112,auVar62,0x88);
      auVar112 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar58);
      auVar77 = vpermps_avx2(auVar55,auVar46);
      auVar112 = vblendps_avx(auVar77,auVar112,0x13);
      auVar77 = vperm2f128_avx(auVar62,auVar112,0x31);
      auVar82 = vblendps_avx(auVar58,auVar82,0x24);
      auVar82 = vpermps_avx2(auVar33,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar46);
      auVar82 = vblendps_avx(auVar82,auVar58,0xe0);
      fVar42 = fVar43 * auVar62._0_4_;
      fVar80 = fVar43 * auVar62._4_4_;
      fVar84 = fVar43 * auVar62._8_4_;
      fVar85 = fVar43 * auVar62._12_4_;
      fVar86 = fVar43 * auVar112._0_4_;
      fVar87 = fVar43 * auVar112._4_4_;
      fVar88 = fVar43 * auVar112._8_4_;
      fVar43 = fVar43 * auVar112._12_4_;
      fVar98 = fVar64 * auVar77._0_4_;
      fVar99 = fVar64 * auVar77._4_4_;
      fVar100 = fVar64 * auVar77._8_4_;
      fVar102 = fVar64 * auVar77._12_4_;
      fVar103 = fVar64 * auVar77._16_4_;
      fVar104 = fVar64 * auVar77._20_4_;
      fVar105 = fVar64 * auVar77._24_4_;
      fVar64 = fVar64 * auVar77._28_4_;
      fVar31 = fVar30 * auVar82._0_4_;
      fVar36 = fVar30 * auVar82._4_4_;
      fVar37 = fVar30 * auVar82._8_4_;
      fVar38 = fVar30 * auVar82._12_4_;
      fVar39 = fVar30 * auVar82._16_4_;
      fVar40 = fVar30 * auVar82._20_4_;
      fVar41 = fVar30 * auVar82._24_4_;
      fVar30 = fVar30 * auVar82._28_4_;
      fVar89 = fVar98 * fVar74 - fVar65 * fVar42;
      fVar90 = fVar99 * fVar74 - fVar65 * fVar80;
      fVar91 = fVar100 * fVar74 - fVar65 * fVar84;
      fVar93 = fVar102 * fVar74 - fVar65 * fVar85;
      fVar94 = fVar103 * fVar74 - fVar65 * fVar86;
      fVar95 = fVar104 * fVar74 - fVar65 * fVar87;
      fVar96 = fVar105 * fVar74 - fVar65 * fVar88;
      fVar97 = fVar64 * fVar74 - fVar65 * fVar43;
      fVar106 = fVar31 * fVar65 - fVar98 * fVar52;
      fVar107 = fVar36 * fVar65 - fVar99 * fVar52;
      fVar108 = fVar37 * fVar65 - fVar100 * fVar52;
      fVar109 = fVar38 * fVar65 - fVar102 * fVar52;
      fVar113 = fVar39 * fVar65 - fVar103 * fVar52;
      fVar114 = fVar40 * fVar65 - fVar104 * fVar52;
      fVar115 = fVar41 * fVar65 - fVar105 * fVar52;
      fVar116 = fVar30 * fVar65 - fVar64 * fVar52;
      fVar117 = fVar42 * fVar52 - fVar74 * fVar31;
      fVar118 = fVar80 * fVar52 - fVar74 * fVar36;
      fVar119 = fVar84 * fVar52 - fVar74 * fVar37;
      fVar120 = fVar85 * fVar52 - fVar74 * fVar38;
      fVar122 = fVar86 * fVar52 - fVar74 * fVar39;
      fVar123 = fVar87 * fVar52 - fVar74 * fVar40;
      fVar124 = fVar88 * fVar52 - fVar74 * fVar41;
      fVar125 = fVar43 * fVar52 - fVar74 * fVar30;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar108 = fVar108 + fVar108;
      fVar109 = fVar109 + fVar109;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar122 = fVar122 + fVar122;
      fVar123 = fVar123 + fVar123;
      fVar124 = fVar124 + fVar124;
      fVar125 = fVar125 + fVar125;
      fVar89 = fVar89 + fVar89;
      fVar90 = fVar90 + fVar90;
      fVar91 = fVar91 + fVar91;
      fVar93 = fVar93 + fVar93;
      fVar94 = fVar94 + fVar94;
      fVar95 = fVar95 + fVar95;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      auVar46._0_4_ = fVar75 * fVar106 + fVar42 + (fVar65 * fVar89 - fVar52 * fVar117) + fVar10;
      auVar46._4_4_ = fVar75 * fVar107 + fVar80 + (fVar65 * fVar90 - fVar52 * fVar118) + fVar10;
      auVar46._8_4_ = fVar75 * fVar108 + fVar84 + (fVar65 * fVar91 - fVar52 * fVar119) + fVar10;
      auVar46._12_4_ = fVar75 * fVar109 + fVar85 + (fVar65 * fVar93 - fVar52 * fVar120) + fVar10;
      auVar46._16_4_ = fVar75 * fVar113 + fVar86 + (fVar65 * fVar94 - fVar52 * fVar122) + fVar10;
      auVar46._20_4_ = fVar75 * fVar114 + fVar87 + (fVar65 * fVar95 - fVar52 * fVar123) + fVar10;
      auVar46._24_4_ = fVar75 * fVar115 + fVar88 + (fVar65 * fVar96 - fVar52 * fVar124) + fVar10;
      auVar46._28_4_ = fVar75 * fVar116 + fVar43 + (fVar65 * fVar97 - fVar52 * fVar125) + fVar10;
      auVar55._0_4_ = fVar75 * fVar117 + fVar98 + (fVar52 * fVar106 - fVar74 * fVar89) + fVar9;
      auVar55._4_4_ = fVar75 * fVar118 + fVar99 + (fVar52 * fVar107 - fVar74 * fVar90) + fVar9;
      auVar55._8_4_ = fVar75 * fVar119 + fVar100 + (fVar52 * fVar108 - fVar74 * fVar91) + fVar9;
      auVar55._12_4_ = fVar75 * fVar120 + fVar102 + (fVar52 * fVar109 - fVar74 * fVar93) + fVar9;
      auVar55._16_4_ = fVar75 * fVar122 + fVar103 + (fVar52 * fVar113 - fVar74 * fVar94) + fVar9;
      auVar55._20_4_ = fVar75 * fVar123 + fVar104 + (fVar52 * fVar114 - fVar74 * fVar95) + fVar9;
      auVar55._24_4_ = fVar75 * fVar124 + fVar105 + (fVar52 * fVar115 - fVar74 * fVar96) + fVar9;
      auVar55._28_4_ = fVar75 * fVar125 + fVar64 + (fVar52 * fVar116 - fVar74 * fVar97) + fVar9;
      auVar58._0_4_ = fVar89 * fVar75 + fVar31 + (fVar74 * fVar117 - fVar65 * fVar106) + fVar29;
      auVar58._4_4_ = fVar90 * fVar75 + fVar36 + (fVar74 * fVar118 - fVar65 * fVar107) + fVar29;
      auVar58._8_4_ = fVar91 * fVar75 + fVar37 + (fVar74 * fVar119 - fVar65 * fVar108) + fVar29;
      auVar58._12_4_ = fVar93 * fVar75 + fVar38 + (fVar74 * fVar120 - fVar65 * fVar109) + fVar29;
      auVar58._16_4_ = fVar94 * fVar75 + fVar39 + (fVar74 * fVar122 - fVar65 * fVar113) + fVar29;
      auVar58._20_4_ = fVar95 * fVar75 + fVar40 + (fVar74 * fVar123 - fVar65 * fVar114) + fVar29;
      auVar58._24_4_ = fVar96 * fVar75 + fVar41 + (fVar74 * fVar124 - fVar65 * fVar115) + fVar29;
      auVar58._28_4_ = fVar97 * fVar75 + fVar30 + (fVar74 * fVar125 - fVar65 * fVar116) + fVar29;
      auVar77 = vsubps_avx(auVar46,auVar12);
      auVar55 = vsubps_avx(auVar55,auVar13);
      auVar33 = vsubps_avx(auVar58,auVar14);
      auVar56._16_16_ = auVar55._0_16_;
      auVar56._0_16_ = auVar77._0_16_;
      auVar58 = vshufpd_avx(auVar77,auVar56,2);
      auVar46 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar33);
      auVar82 = vpermpd_avx2(auVar55,0xe9);
      auVar82 = vblendps_avx(auVar46,auVar82,7);
      auVar46 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar82);
      auVar58 = vpermps_avx2(auVar54,auVar58);
      auVar58 = vblendps_avx(auVar58,auVar46,0xa4);
      *(undefined1 (*) [32])(param_4 + -0x40 + lVar7 * 4) = auVar58;
      auVar13 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar58 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar82);
      auVar82 = vshufpd_avx(auVar77,auVar77,1);
      auVar82 = vblendps_avx(auVar58,auVar82,0x92);
      *(undefined1 (*) [32])(param_4 + -0x20 + lVar7 * 4) = auVar82;
      auVar56 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar14 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar58 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar55);
      auVar82 = vpermpd_avx2(auVar77,0xff);
      auVar82 = vblendps_avx(auVar58,auVar82,3);
      auVar82 = vblendps_avx(auVar82,auVar33,0xe0);
      auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar82);
      *(undefined1 (*) [32])(param_4 + lVar7 * 4) = auVar82;
      auVar82 = *(undefined1 (*) [32])(param_7 + -0x40 + lVar7 * 4);
      auVar58 = *(undefined1 (*) [32])(param_7 + -0x20 + lVar7 * 4);
      auVar46 = *(undefined1 (*) [32])(param_7 + lVar7 * 4);
      auVar62 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar58);
      auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar82);
      auVar62 = vblendps_avx(auVar112,auVar62,0x88);
      auVar112 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar58);
      auVar12 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar46);
      auVar112 = vblendps_avx(auVar12,auVar112,0x13);
      auVar101._16_16_ = auVar112._0_16_;
      auVar101._0_16_ = auVar62._0_16_;
      auVar62 = vperm2f128_avx(auVar62,auVar112,0x31);
      auVar82 = vblendps_avx(auVar58,auVar82,0x24);
      auVar82 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar82);
      auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar46);
      auVar82 = vblendps_avx(auVar82,auVar58,0xe0);
      auVar58 = vsubps_avx(auVar101,auVar77);
      auVar112._4_4_ = param_10;
      auVar112._0_4_ = param_10;
      auVar112._8_4_ = param_10;
      auVar112._12_4_ = param_10;
      auVar112._16_4_ = param_10;
      auVar112._20_4_ = param_10;
      auVar112._24_4_ = param_10;
      auVar112._28_4_ = param_10;
      auVar46 = vdivps_avx(auVar58,auVar112);
      auVar58 = vsubps_avx(auVar62,auVar55);
      auVar62 = vdivps_avx(auVar58,auVar112);
      auVar82 = vsubps_avx(auVar82,auVar33);
      auVar112 = vdivps_avx(auVar82,auVar112);
      auVar57._16_16_ = auVar62._0_16_;
      auVar57._0_16_ = auVar46._0_16_;
      auVar58 = vshufpd_avx(auVar46,auVar57,2);
      auVar77 = vpermps_avx2(auVar34,auVar112);
      auVar82 = vpermpd_avx2(auVar62,0xe9);
      auVar82 = vblendps_avx(auVar77,auVar82,7);
      auVar77 = vpermps_avx2(auVar45,auVar82);
      auVar58 = vpermps_avx2(auVar54,auVar58);
      auVar58 = vblendps_avx(auVar58,auVar77,0xa4);
      *(undefined1 (*) [32])(param_5 + -0x40 + lVar7 * 4) = auVar58;
      auVar58 = vpermps_avx2(auVar13,auVar82);
      auVar82 = vshufpd_avx(auVar46,auVar46,1);
      auVar82 = vblendps_avx(auVar58,auVar82,0x92);
      *(undefined1 (*) [32])(param_5 + -0x20 + lVar7 * 4) = auVar82;
      auVar58 = vpermps_avx2(auVar14,auVar62);
      auVar82 = vpermpd_avx2(auVar46,0xff);
      auVar82 = vblendps_avx(auVar58,auVar82,3);
      auVar82 = vblendps_avx(auVar82,auVar112,0xe0);
      auVar82 = vpermps_avx2(auVar56,auVar82);
      *(undefined1 (*) [32])(param_5 + lVar7 * 4) = auVar82;
      uVar8 = uVar8 + 0x20;
      lVar7 = lVar7 + 0x18;
      uVar6 = uVar6 + 8;
    } while ((int)uVar6 < (int)(uVar5 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar6) {
      return;
    }
  }
  auVar15._4_4_ = uVar6;
  auVar15._0_4_ = uVar6;
  auVar15._8_4_ = uVar6;
  auVar15._12_4_ = uVar6;
  auVar15._16_4_ = uVar6;
  auVar15._20_4_ = uVar6;
  auVar15._24_4_ = uVar6;
  auVar15._28_4_ = uVar6;
  auVar82 = vpor_avx2(auVar15,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar35._4_4_ = param_11;
  auVar35._0_4_ = param_11;
  auVar35._8_4_ = param_11;
  auVar35._12_4_ = param_11;
  auVar35._16_4_ = param_11;
  auVar35._20_4_ = param_11;
  auVar35._24_4_ = param_11;
  auVar35._28_4_ = param_11;
  auVar82 = vpcmpgtd_avx2(auVar35,auVar82);
  uVar8 = (ulonglong)uVar6;
  pauVar3 = (undefined1 (*) [32])(param_3 + uVar8 * 0xc);
  uVar5 = vmovmskps_avx(auVar82);
  if (uVar5 == 0xff) {
    auVar58 = pauVar3[1];
    auVar46 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar58);
    auVar62 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar3);
    auVar46 = vblendps_avx(auVar62,auVar46,0x88);
    auVar62 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar58);
    auVar112 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            pauVar3[2]);
    auVar62 = vblendps_avx(auVar112,auVar62,0x13);
    auVar16._16_16_ = auVar62._0_16_;
    auVar16._0_16_ = auVar46._0_16_;
    auVar46 = vperm2f128_avx(auVar46,auVar62,0x31);
    auVar58 = vblendps_avx(auVar58,*pauVar3,0x24);
    auVar58 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar58);
    auVar68._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar68._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar62 = vpermps_avx2(auVar68,pauVar3[2]);
    auVar58 = vblendps_avx(auVar58,auVar62,0xe0);
  }
  else {
    auVar16 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar82);
    auVar46 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
  }
  pauVar2 = (undefined1 (*) [32])(param_1 + uVar8 * 0x10);
  cVar4 = (char)uVar5;
  fVar43 = param_8[8];
  fVar41 = auVar16._0_4_ * fVar43;
  fVar42 = auVar16._4_4_ * fVar43;
  fVar80 = auVar16._8_4_ * fVar43;
  fVar84 = auVar16._12_4_ * fVar43;
  fVar85 = auVar16._16_4_ * fVar43;
  fVar86 = auVar16._20_4_ * fVar43;
  fVar87 = auVar16._24_4_ * fVar43;
  fVar88 = auVar16._28_4_ * fVar43;
  fVar64 = param_8[9];
  fVar9 = auVar46._0_4_ * fVar64;
  fVar29 = auVar46._4_4_ * fVar64;
  fVar31 = auVar46._8_4_ * fVar64;
  fVar36 = auVar46._12_4_ * fVar64;
  fVar37 = auVar46._16_4_ * fVar64;
  fVar38 = auVar46._20_4_ * fVar64;
  fVar39 = auVar46._24_4_ * fVar64;
  fVar40 = auVar46._28_4_ * fVar64;
  fVar30 = param_8[10];
  fVar89 = fVar30 * auVar58._0_4_;
  fVar90 = fVar30 * auVar58._4_4_;
  fVar91 = fVar30 * auVar58._8_4_;
  fVar93 = fVar30 * auVar58._12_4_;
  fVar94 = fVar30 * auVar58._16_4_;
  fVar95 = fVar30 * auVar58._20_4_;
  fVar96 = fVar30 * auVar58._24_4_;
  fVar97 = fVar30 * auVar58._28_4_;
  fVar75 = param_8[3];
  fVar65 = param_8[1];
  fVar52 = param_8[2];
  fVar74 = *param_8;
  fVar98 = fVar9 * fVar74 - fVar41 * fVar65;
  fVar99 = fVar29 * fVar74 - fVar42 * fVar65;
  fVar100 = fVar31 * fVar74 - fVar80 * fVar65;
  fVar102 = fVar36 * fVar74 - fVar84 * fVar65;
  fVar103 = fVar37 * fVar74 - fVar85 * fVar65;
  fVar104 = fVar38 * fVar74 - fVar86 * fVar65;
  fVar105 = fVar39 * fVar74 - fVar87 * fVar65;
  fVar106 = fVar40 * fVar74 - fVar88 * fVar65;
  fVar107 = fVar89 * fVar65 - fVar9 * fVar52;
  fVar108 = fVar90 * fVar65 - fVar29 * fVar52;
  fVar109 = fVar91 * fVar65 - fVar31 * fVar52;
  fVar113 = fVar93 * fVar65 - fVar36 * fVar52;
  fVar114 = fVar94 * fVar65 - fVar37 * fVar52;
  fVar115 = fVar95 * fVar65 - fVar38 * fVar52;
  fVar116 = fVar96 * fVar65 - fVar39 * fVar52;
  fVar117 = fVar97 * fVar65 - fVar40 * fVar52;
  fVar118 = fVar41 * fVar52 - fVar89 * fVar74;
  fVar119 = fVar42 * fVar52 - fVar90 * fVar74;
  fVar120 = fVar80 * fVar52 - fVar91 * fVar74;
  fVar122 = fVar84 * fVar52 - fVar93 * fVar74;
  fVar123 = fVar85 * fVar52 - fVar94 * fVar74;
  fVar124 = fVar86 * fVar52 - fVar95 * fVar74;
  fVar125 = fVar87 * fVar52 - fVar96 * fVar74;
  fVar127 = fVar88 * fVar52 - fVar97 * fVar74;
  fVar107 = fVar107 + fVar107;
  fVar108 = fVar108 + fVar108;
  fVar109 = fVar109 + fVar109;
  fVar113 = fVar113 + fVar113;
  fVar114 = fVar114 + fVar114;
  fVar115 = fVar115 + fVar115;
  fVar116 = fVar116 + fVar116;
  fVar117 = fVar117 + fVar117;
  fVar118 = fVar118 + fVar118;
  fVar119 = fVar119 + fVar119;
  fVar120 = fVar120 + fVar120;
  fVar122 = fVar122 + fVar122;
  fVar123 = fVar123 + fVar123;
  fVar124 = fVar124 + fVar124;
  fVar125 = fVar125 + fVar125;
  fVar127 = fVar127 + fVar127;
  fVar98 = fVar98 + fVar98;
  fVar99 = fVar99 + fVar99;
  fVar100 = fVar100 + fVar100;
  fVar102 = fVar102 + fVar102;
  fVar103 = fVar103 + fVar103;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar10 = param_8[4];
  auVar110._0_4_ = fVar10 + fVar75 * fVar107 + fVar41 + (fVar65 * fVar98 - fVar118 * fVar52);
  auVar110._4_4_ = fVar10 + fVar75 * fVar108 + fVar42 + (fVar65 * fVar99 - fVar119 * fVar52);
  auVar110._8_4_ = fVar10 + fVar75 * fVar109 + fVar80 + (fVar65 * fVar100 - fVar120 * fVar52);
  auVar110._12_4_ = fVar10 + fVar75 * fVar113 + fVar84 + (fVar65 * fVar102 - fVar122 * fVar52);
  auVar110._16_4_ = fVar10 + fVar75 * fVar114 + fVar85 + (fVar65 * fVar103 - fVar123 * fVar52);
  auVar110._20_4_ = fVar10 + fVar75 * fVar115 + fVar86 + (fVar65 * fVar104 - fVar124 * fVar52);
  auVar110._24_4_ = fVar10 + fVar75 * fVar116 + fVar87 + (fVar65 * fVar105 - fVar125 * fVar52);
  auVar110._28_4_ = fVar10 + fVar75 * fVar117 + fVar88 + (fVar65 * fVar106 - fVar127 * fVar52);
  fVar10 = param_8[5];
  auVar17._0_4_ = fVar10 + (fVar52 * fVar107 - fVar98 * fVar74) + fVar75 * fVar118 + fVar9;
  auVar17._4_4_ = fVar10 + (fVar52 * fVar108 - fVar99 * fVar74) + fVar75 * fVar119 + fVar29;
  auVar17._8_4_ = fVar10 + (fVar52 * fVar109 - fVar100 * fVar74) + fVar75 * fVar120 + fVar31;
  auVar17._12_4_ = fVar10 + (fVar52 * fVar113 - fVar102 * fVar74) + fVar75 * fVar122 + fVar36;
  auVar17._16_4_ = fVar10 + (fVar52 * fVar114 - fVar103 * fVar74) + fVar75 * fVar123 + fVar37;
  auVar17._20_4_ = fVar10 + (fVar52 * fVar115 - fVar104 * fVar74) + fVar75 * fVar124 + fVar38;
  auVar17._24_4_ = fVar10 + (fVar52 * fVar116 - fVar105 * fVar74) + fVar75 * fVar125 + fVar39;
  auVar17._28_4_ = fVar10 + (fVar52 * fVar117 - fVar106 * fVar74) + fVar75 * fVar127 + fVar40;
  fVar10 = param_8[6];
  auVar131._0_4_ = fVar10 + fVar75 * fVar98 + fVar89 + (fVar74 * fVar118 - fVar107 * fVar65);
  auVar131._4_4_ = fVar10 + fVar75 * fVar99 + fVar90 + (fVar74 * fVar119 - fVar108 * fVar65);
  auVar131._8_4_ = fVar10 + fVar75 * fVar100 + fVar91 + (fVar74 * fVar120 - fVar109 * fVar65);
  auVar131._12_4_ = fVar10 + fVar75 * fVar102 + fVar93 + (fVar74 * fVar122 - fVar113 * fVar65);
  auVar131._16_4_ = fVar10 + fVar75 * fVar103 + fVar94 + (fVar74 * fVar123 - fVar114 * fVar65);
  auVar131._20_4_ = fVar10 + fVar75 * fVar104 + fVar95 + (fVar74 * fVar124 - fVar115 * fVar65);
  auVar131._24_4_ = fVar10 + fVar75 * fVar105 + fVar96 + (fVar74 * fVar125 - fVar116 * fVar65);
  auVar131._28_4_ = fVar10 + fVar75 * fVar106 + fVar97 + (fVar74 * fVar127 - fVar117 * fVar65);
  uVar1 = *param_9;
  auVar121._4_4_ = uVar1;
  auVar121._0_4_ = uVar1;
  auVar121._8_4_ = uVar1;
  auVar121._12_4_ = uVar1;
  auVar121._16_4_ = uVar1;
  auVar121._20_4_ = uVar1;
  auVar121._24_4_ = uVar1;
  auVar121._28_4_ = uVar1;
  auVar58 = vsubps_avx(auVar110,auVar121);
  uVar1 = param_9[1];
  auVar111._4_4_ = uVar1;
  auVar111._0_4_ = uVar1;
  auVar111._8_4_ = uVar1;
  auVar111._12_4_ = uVar1;
  auVar111._16_4_ = uVar1;
  auVar111._20_4_ = uVar1;
  auVar111._24_4_ = uVar1;
  auVar111._28_4_ = uVar1;
  auVar46 = vsubps_avx(auVar17,auVar111);
  uVar1 = param_9[2];
  auVar18._4_4_ = uVar1;
  auVar18._0_4_ = uVar1;
  auVar18._8_4_ = uVar1;
  auVar18._12_4_ = uVar1;
  auVar18._16_4_ = uVar1;
  auVar18._20_4_ = uVar1;
  auVar18._24_4_ = uVar1;
  auVar18._28_4_ = uVar1;
  auVar62 = vsubps_avx(auVar131,auVar18);
  auVar112 = vmaskmovps_avx(auVar82,*(undefined1 (*) [32])(param_6 + (int)(uVar6 << 2)));
  auVar66 = auVar58._0_16_;
  auVar11 = auVar58._16_16_;
  auVar32 = auVar46._0_16_;
  if (cVar4 == -1) {
    auVar77 = vunpcklps_avx(auVar58,auVar46);
    auVar55 = vunpcklps_avx(auVar62,auVar112);
    auVar33 = vunpcklpd_avx(auVar77,auVar55);
    auVar77 = vunpckhpd_avx(auVar77,auVar55);
    auVar55 = vunpckhps_avx(auVar58,auVar46);
    auVar112 = vunpckhps_avx(auVar62,auVar112);
    auVar76._16_16_ = auVar77._0_16_;
    auVar76._0_16_ = auVar33._0_16_;
    *pauVar2 = auVar76;
    auVar12 = vunpcklpd_avx(auVar55,auVar112);
    auVar112 = vunpckhpd_avx(auVar55,auVar112);
    auVar69._16_16_ = auVar112._0_16_;
    auVar69._0_16_ = auVar12._0_16_;
    pauVar2[1] = auVar69;
    auVar77 = vperm2f128_avx(auVar33,auVar77,0x31);
    pauVar2[2] = auVar77;
    auVar112 = vperm2f128_avx(auVar12,auVar112,0x31);
    pauVar2[3] = auVar112;
    auVar20._16_16_ = auVar32;
    auVar20._0_16_ = auVar66;
    auVar77 = vshufpd_avx(auVar58,auVar20,2);
    auVar55 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar62);
    auVar112 = vpermpd_avx2(auVar46,0xe9);
    auVar112 = vblendps_avx(auVar55,auVar112,7);
    auVar59._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar59._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar55 = vpermps_avx2(auVar59,auVar112);
    auVar77 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar77);
    auVar77 = vblendps_avx(auVar77,auVar55,0xa4);
    *pauVar3 = auVar77;
    auVar77 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar112);
    auVar112 = vshufpd_avx(auVar58,auVar58,1);
    auVar112 = vblendps_avx(auVar77,auVar112,0x92);
    pauVar3[1] = auVar112;
    auVar21._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar21._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar46 = vpermps_avx2(auVar21,auVar46);
    auVar58 = vpermpd_avx2(auVar58,0xff);
    auVar58 = vblendps_avx(auVar46,auVar58,3);
    auVar58 = vblendps_avx(auVar58,auVar62,0xe0);
    auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar58);
    pauVar3[2] = auVar58;
    auVar58 = *(undefined1 (*) [32])(param_2 + uVar8 * 0xc);
    auVar46 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar8 * 0xc);
    auVar62 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar8 * 0xc);
    auVar112 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar46);
    auVar77 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           auVar58);
    auVar112 = vblendps_avx(auVar77,auVar112,0x88);
    auVar77 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar46);
    auVar55 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar62);
    auVar77 = vblendps_avx(auVar55,auVar77,0x13);
    auVar19._16_16_ = auVar77._0_16_;
    auVar19._0_16_ = auVar112._0_16_;
    auVar112 = vperm2f128_avx(auVar112,auVar77,0x31);
    auVar58 = vblendps_avx(auVar46,auVar58,0x24);
    auVar58 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar58);
    auVar60._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar60._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar46 = vpermps_avx2(auVar60,auVar62);
    auVar58 = vblendps_avx(auVar58,auVar46,0xe0);
    fVar75 = param_8[3];
    fVar43 = param_8[8];
    fVar64 = param_8[9];
    fVar30 = param_8[10];
    fVar74 = *param_8;
    fVar65 = param_8[1];
    fVar52 = param_8[2];
  }
  else {
    auVar126 = auVar46._16_16_;
    auVar44 = auVar62._0_16_;
    auVar53 = auVar62._16_16_;
    auVar133 = auVar112._0_16_;
    auVar134 = auVar112._16_16_;
    if ((uVar5 & 1) != 0) {
      *(int *)*pauVar2 = auVar58._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(*pauVar2 + 0x10) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)pauVar2[1] = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(pauVar2[1] + 0x10) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)pauVar2[2] = auVar58._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(pauVar2[2] + 0x10) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)pauVar2[3] = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(pauVar2[3] + 0x10) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar2 + 4) = auVar46._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(*pauVar2 + 0x14) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(pauVar2[1] + 4) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(pauVar2[1] + 0x14) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar2[2] + 4) = auVar46._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)(pauVar2[2] + 0x14) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(pauVar2[3] + 4) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(pauVar2[3] + 0x14) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar2 + 8) = auVar62._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(*pauVar2 + 0x18) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)(pauVar2[1] + 8) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(pauVar2[1] + 0x18) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar2[2] + 8) = auVar62._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(pauVar2[2] + 0x18) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(pauVar2[3] + 8) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(pauVar2[3] + 0x18) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar2 + 0xc) = auVar112._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar133,1);
      *(undefined4 *)(*pauVar2 + 0x1c) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar133,2);
      *(undefined4 *)(pauVar2[1] + 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar133,3);
      *(undefined4 *)(pauVar2[1] + 0x1c) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar2[2] + 0xc) = auVar112._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar134,1);
      *(undefined4 *)(pauVar2[2] + 0x1c) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar134,2);
      *(undefined4 *)(pauVar2[3] + 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar134,3);
      *(undefined4 *)(pauVar2[3] + 0x1c) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)*pauVar3 = auVar58._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(*pauVar3 + 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)(*pauVar3 + 0x18) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(pauVar3[1] + 4) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x10) = auVar58._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(pauVar3[1] + 0x1c) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)(pauVar3[2] + 8) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(pauVar3[2] + 0x14) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar3 + 4) = auVar46._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(*pauVar3 + 0x10) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(*pauVar3 + 0x1c) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(pauVar3[1] + 8) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x14) = auVar46._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)pauVar3[2] = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(pauVar3[2] + 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(pauVar3[2] + 0x18) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar3 + 8) = auVar62._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(*pauVar3 + 0x14) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)pauVar3[1] = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(pauVar3[1] + 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x18) = auVar62._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(pauVar3[2] + 4) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(pauVar3[2] + 0x10) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(pauVar3[2] + 0x1c) = uVar1;
    }
    auVar19 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
  }
  pauVar3 = (undefined1 (*) [32])(param_2 + uVar8 * 0xc);
  fVar95 = auVar58._0_4_ * fVar30;
  fVar96 = auVar58._4_4_ * fVar30;
  fVar97 = auVar58._8_4_ * fVar30;
  fVar98 = auVar58._12_4_ * fVar30;
  fVar99 = auVar58._16_4_ * fVar30;
  fVar100 = auVar58._20_4_ * fVar30;
  fVar102 = auVar58._24_4_ * fVar30;
  fVar30 = auVar58._28_4_ * fVar30;
  fVar87 = auVar112._0_4_ * fVar64;
  fVar88 = auVar112._4_4_ * fVar64;
  fVar89 = auVar112._8_4_ * fVar64;
  fVar90 = auVar112._12_4_ * fVar64;
  fVar91 = auVar112._16_4_ * fVar64;
  fVar93 = auVar112._20_4_ * fVar64;
  fVar94 = auVar112._24_4_ * fVar64;
  fVar64 = auVar112._28_4_ * fVar64;
  fVar40 = auVar19._0_4_ * fVar43;
  fVar41 = auVar19._4_4_ * fVar43;
  fVar42 = auVar19._8_4_ * fVar43;
  fVar80 = auVar19._12_4_ * fVar43;
  fVar84 = auVar19._16_4_ * fVar43;
  fVar85 = auVar19._20_4_ * fVar43;
  fVar86 = auVar19._24_4_ * fVar43;
  fVar43 = auVar19._28_4_ * fVar43;
  fVar10 = fVar87 * fVar74 - fVar40 * fVar65;
  fVar9 = fVar88 * fVar74 - fVar41 * fVar65;
  fVar29 = fVar89 * fVar74 - fVar42 * fVar65;
  fVar31 = fVar90 * fVar74 - fVar80 * fVar65;
  fVar36 = fVar91 * fVar74 - fVar84 * fVar65;
  fVar37 = fVar93 * fVar74 - fVar85 * fVar65;
  fVar38 = fVar94 * fVar74 - fVar86 * fVar65;
  fVar39 = fVar64 * fVar74 - fVar43 * fVar65;
  fVar103 = fVar95 * fVar65 - fVar87 * fVar52;
  fVar104 = fVar96 * fVar65 - fVar88 * fVar52;
  fVar105 = fVar97 * fVar65 - fVar89 * fVar52;
  fVar106 = fVar98 * fVar65 - fVar90 * fVar52;
  fVar107 = fVar99 * fVar65 - fVar91 * fVar52;
  fVar108 = fVar100 * fVar65 - fVar93 * fVar52;
  fVar109 = fVar102 * fVar65 - fVar94 * fVar52;
  fVar113 = fVar30 * fVar65 - fVar64 * fVar52;
  fVar114 = fVar40 * fVar52 - fVar95 * fVar74;
  fVar115 = fVar41 * fVar52 - fVar96 * fVar74;
  fVar116 = fVar42 * fVar52 - fVar97 * fVar74;
  fVar117 = fVar80 * fVar52 - fVar98 * fVar74;
  fVar118 = fVar84 * fVar52 - fVar99 * fVar74;
  fVar119 = fVar85 * fVar52 - fVar100 * fVar74;
  fVar120 = fVar86 * fVar52 - fVar102 * fVar74;
  fVar122 = fVar43 * fVar52 - fVar30 * fVar74;
  fVar103 = fVar103 + fVar103;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar108 = fVar108 + fVar108;
  fVar109 = fVar109 + fVar109;
  fVar113 = fVar113 + fVar113;
  fVar114 = fVar114 + fVar114;
  fVar115 = fVar115 + fVar115;
  fVar116 = fVar116 + fVar116;
  fVar117 = fVar117 + fVar117;
  fVar118 = fVar118 + fVar118;
  fVar119 = fVar119 + fVar119;
  fVar120 = fVar120 + fVar120;
  fVar122 = fVar122 + fVar122;
  fVar10 = fVar10 + fVar10;
  fVar9 = fVar9 + fVar9;
  fVar29 = fVar29 + fVar29;
  fVar31 = fVar31 + fVar31;
  fVar36 = fVar36 + fVar36;
  fVar37 = fVar37 + fVar37;
  fVar38 = fVar38 + fVar38;
  fVar39 = fVar39 + fVar39;
  auVar11._0_4_ = fVar10 * fVar75 + fVar95 + (fVar74 * fVar114 - fVar103 * fVar65);
  auVar11._4_4_ = fVar9 * fVar75 + fVar96 + (fVar74 * fVar115 - fVar104 * fVar65);
  auVar11._8_4_ = fVar29 * fVar75 + fVar97 + (fVar74 * fVar116 - fVar105 * fVar65);
  auVar11._12_4_ = fVar31 * fVar75 + fVar98 + (fVar74 * fVar117 - fVar106 * fVar65);
  auVar22._16_4_ = fVar36 * fVar75 + fVar99 + (fVar74 * fVar118 - fVar107 * fVar65);
  auVar22._0_16_ = auVar11;
  auVar22._20_4_ = fVar37 * fVar75 + fVar100 + (fVar74 * fVar119 - fVar108 * fVar65);
  auVar22._24_4_ = fVar38 * fVar75 + fVar102 + (fVar74 * fVar120 - fVar109 * fVar65);
  auVar22._28_4_ = fVar39 * fVar75 + fVar30 + (fVar74 * fVar122 - fVar113 * fVar65);
  auVar53._0_4_ = (fVar65 * fVar10 - fVar114 * fVar52) + fVar75 * fVar103 + fVar40;
  auVar53._4_4_ = (fVar65 * fVar9 - fVar115 * fVar52) + fVar75 * fVar104 + fVar41;
  auVar53._8_4_ = (fVar65 * fVar29 - fVar116 * fVar52) + fVar75 * fVar105 + fVar42;
  auVar53._12_4_ = (fVar65 * fVar31 - fVar117 * fVar52) + fVar75 * fVar106 + fVar80;
  auVar61._16_4_ = (fVar65 * fVar36 - fVar118 * fVar52) + fVar75 * fVar107 + fVar84;
  auVar61._0_16_ = auVar53;
  auVar61._20_4_ = (fVar65 * fVar37 - fVar119 * fVar52) + fVar75 * fVar108 + fVar85;
  auVar61._24_4_ = (fVar65 * fVar38 - fVar120 * fVar52) + fVar75 * fVar109 + fVar86;
  auVar61._28_4_ = (fVar65 * fVar39 - fVar122 * fVar52) + fVar75 * fVar113 + fVar43;
  auVar44._0_4_ = (fVar52 * fVar103 - fVar10 * fVar74) + fVar75 * fVar114 + fVar87;
  auVar44._4_4_ = (fVar52 * fVar104 - fVar9 * fVar74) + fVar75 * fVar115 + fVar88;
  auVar44._8_4_ = (fVar52 * fVar105 - fVar29 * fVar74) + fVar75 * fVar116 + fVar89;
  auVar44._12_4_ = (fVar52 * fVar106 - fVar31 * fVar74) + fVar75 * fVar117 + fVar90;
  auVar47._16_4_ = (fVar52 * fVar107 - fVar36 * fVar74) + fVar75 * fVar118 + fVar91;
  auVar47._0_16_ = auVar44;
  auVar47._20_4_ = (fVar52 * fVar108 - fVar37 * fVar74) + fVar75 * fVar119 + fVar93;
  auVar47._24_4_ = (fVar52 * fVar109 - fVar38 * fVar74) + fVar75 * fVar120 + fVar94;
  auVar47._28_4_ = (fVar52 * fVar113 - fVar39 * fVar74) + fVar75 * fVar122 + fVar64;
  auVar32 = auVar61._16_16_;
  if (cVar4 == -1) {
    auVar70._16_16_ = auVar44;
    auVar70._0_16_ = auVar53;
    auVar46 = vshufpd_avx(auVar61,auVar70,2);
    auVar62 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar22);
    auVar58 = vpermpd_avx2(auVar47,0xe9);
    auVar58 = vblendps_avx(auVar62,auVar58,7);
    auVar81._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar81._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar62 = vpermps_avx2(auVar81,auVar58);
    auVar46 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar46);
    auVar46 = vblendps_avx(auVar46,auVar62,0xa4);
    *pauVar3 = auVar46;
    lVar7 = uVar8 * 0xc;
    auVar46 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar58);
    auVar58 = vshufpd_avx(auVar61,auVar61,1);
    auVar58 = vblendps_avx(auVar46,auVar58,0x92);
    *(undefined1 (*) [32])(param_2 + 0x20 + lVar7) = auVar58;
    auVar71._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar71._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar46 = vpermps_avx2(auVar71,auVar47);
    auVar58 = vpermpd_avx2(auVar61,0xff);
    auVar58 = vblendps_avx(auVar46,auVar58,3);
    auVar58 = vblendps_avx(auVar58,auVar22,0xe0);
    auVar58 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar58);
    *(undefined1 (*) [32])(param_2 + 0x40 + lVar7) = auVar58;
    auVar58 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar7);
    auVar46 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar7);
    auVar62 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar58);
    auVar112 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_4 + lVar7));
    auVar62 = vblendps_avx(auVar112,auVar62,0x88);
    auVar112 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar58);
    auVar77 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar46);
    auVar112 = vblendps_avx(auVar77,auVar112,0x13);
    auVar23._16_16_ = auVar112._0_16_;
    auVar23._0_16_ = auVar62._0_16_;
    auVar62 = vperm2f128_avx(auVar62,auVar112,0x31);
    auVar58 = vblendps_avx(auVar58,*(undefined1 (*) [32])(param_4 + lVar7),0x24);
    auVar58 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar58);
    auVar72._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar72._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar46 = vpermps_avx2(auVar72,auVar46);
    auVar58 = vblendps_avx(auVar58,auVar46,0xe0);
  }
  else {
    auVar126 = auVar47._16_16_;
    auVar66 = auVar22._16_16_;
    if ((uVar5 & 1) != 0) {
      *(float *)*pauVar3 = auVar53._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(param_2 + 0xc + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(param_2 + 0x18 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(param_2 + 0x24 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_2 + 0x30 + uVar8 * 0xc) = auVar61._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(param_2 + 0x3c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(param_2 + 0x48 + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(param_2 + 0x54 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(param_2 + 4 + uVar8 * 0xc) = auVar44._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(param_2 + 0x10 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)(param_2 + 0x1c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(param_2 + 0x28 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_2 + 0x34 + uVar8 * 0xc) = auVar47._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)(param_2 + 0x40 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(param_2 + 0x4c + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(param_2 + 0x58 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(param_2 + 8 + uVar8 * 0xc) = auVar11._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(param_2 + 0x14 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)(param_2 + 0x20 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(param_2 + 0x2c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_2 + 0x38 + uVar8 * 0xc) = auVar22._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(param_2 + 0x44 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)(param_2 + 0x50 + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(param_2 + 0x5c + uVar8 * 0xc) = uVar1;
    }
    auVar23 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar62 = vgatherdps(ZEXT832(0),auVar82);
    auVar58 = vgatherdps(ZEXT832(0),auVar82);
  }
  pauVar3 = (undefined1 (*) [32])(param_4 + uVar8 * 0xc);
  fVar43 = param_8[8];
  fVar40 = auVar23._0_4_ * fVar43;
  fVar41 = auVar23._4_4_ * fVar43;
  fVar42 = auVar23._8_4_ * fVar43;
  fVar80 = auVar23._12_4_ * fVar43;
  fVar84 = auVar23._16_4_ * fVar43;
  fVar85 = auVar23._20_4_ * fVar43;
  fVar86 = auVar23._24_4_ * fVar43;
  fVar43 = auVar23._28_4_ * fVar43;
  fVar64 = param_8[9];
  fVar9 = auVar62._0_4_ * fVar64;
  fVar29 = auVar62._4_4_ * fVar64;
  fVar31 = auVar62._8_4_ * fVar64;
  fVar36 = auVar62._12_4_ * fVar64;
  fVar37 = auVar62._16_4_ * fVar64;
  fVar38 = auVar62._20_4_ * fVar64;
  fVar39 = auVar62._24_4_ * fVar64;
  fVar64 = auVar62._28_4_ * fVar64;
  fVar30 = param_8[10];
  fVar87 = auVar58._0_4_ * fVar30;
  fVar88 = auVar58._4_4_ * fVar30;
  fVar89 = auVar58._8_4_ * fVar30;
  fVar90 = auVar58._12_4_ * fVar30;
  fVar91 = auVar58._16_4_ * fVar30;
  fVar93 = auVar58._20_4_ * fVar30;
  fVar94 = auVar58._24_4_ * fVar30;
  fVar30 = auVar58._28_4_ * fVar30;
  fVar75 = param_8[3];
  fVar65 = param_8[1];
  fVar52 = param_8[2];
  fVar74 = *param_8;
  fVar95 = fVar9 * fVar74 - fVar40 * fVar65;
  fVar96 = fVar29 * fVar74 - fVar41 * fVar65;
  fVar97 = fVar31 * fVar74 - fVar42 * fVar65;
  fVar98 = fVar36 * fVar74 - fVar80 * fVar65;
  fVar99 = fVar37 * fVar74 - fVar84 * fVar65;
  fVar100 = fVar38 * fVar74 - fVar85 * fVar65;
  fVar102 = fVar39 * fVar74 - fVar86 * fVar65;
  fVar103 = fVar64 * fVar74 - fVar43 * fVar65;
  fVar104 = fVar87 * fVar65 - fVar9 * fVar52;
  fVar105 = fVar88 * fVar65 - fVar29 * fVar52;
  fVar106 = fVar89 * fVar65 - fVar31 * fVar52;
  fVar107 = fVar90 * fVar65 - fVar36 * fVar52;
  fVar108 = fVar91 * fVar65 - fVar37 * fVar52;
  fVar109 = fVar93 * fVar65 - fVar38 * fVar52;
  fVar113 = fVar94 * fVar65 - fVar39 * fVar52;
  fVar114 = fVar30 * fVar65 - fVar64 * fVar52;
  fVar115 = fVar40 * fVar52 - fVar87 * fVar74;
  fVar116 = fVar41 * fVar52 - fVar88 * fVar74;
  fVar117 = fVar42 * fVar52 - fVar89 * fVar74;
  fVar118 = fVar80 * fVar52 - fVar90 * fVar74;
  fVar119 = fVar84 * fVar52 - fVar91 * fVar74;
  fVar120 = fVar85 * fVar52 - fVar93 * fVar74;
  fVar122 = fVar86 * fVar52 - fVar94 * fVar74;
  fVar123 = fVar43 * fVar52 - fVar30 * fVar74;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar108 = fVar108 + fVar108;
  fVar109 = fVar109 + fVar109;
  fVar113 = fVar113 + fVar113;
  fVar114 = fVar114 + fVar114;
  fVar115 = fVar115 + fVar115;
  fVar116 = fVar116 + fVar116;
  fVar117 = fVar117 + fVar117;
  fVar118 = fVar118 + fVar118;
  fVar119 = fVar119 + fVar119;
  fVar120 = fVar120 + fVar120;
  fVar122 = fVar122 + fVar122;
  fVar123 = fVar123 + fVar123;
  fVar95 = fVar95 + fVar95;
  fVar96 = fVar96 + fVar96;
  fVar97 = fVar97 + fVar97;
  fVar98 = fVar98 + fVar98;
  fVar99 = fVar99 + fVar99;
  fVar100 = fVar100 + fVar100;
  fVar102 = fVar102 + fVar102;
  fVar103 = fVar103 + fVar103;
  fVar10 = param_8[4];
  auVar48._0_4_ = fVar10 + (fVar65 * fVar95 - fVar115 * fVar52) + fVar75 * fVar104 + fVar40;
  auVar48._4_4_ = fVar10 + (fVar65 * fVar96 - fVar116 * fVar52) + fVar75 * fVar105 + fVar41;
  auVar48._8_4_ = fVar10 + (fVar65 * fVar97 - fVar117 * fVar52) + fVar75 * fVar106 + fVar42;
  auVar48._12_4_ = fVar10 + (fVar65 * fVar98 - fVar118 * fVar52) + fVar75 * fVar107 + fVar80;
  auVar48._16_4_ = fVar10 + (fVar65 * fVar99 - fVar119 * fVar52) + fVar75 * fVar108 + fVar84;
  auVar48._20_4_ = fVar10 + (fVar65 * fVar100 - fVar120 * fVar52) + fVar75 * fVar109 + fVar85;
  auVar48._24_4_ = fVar10 + (fVar65 * fVar102 - fVar122 * fVar52) + fVar75 * fVar113 + fVar86;
  auVar48._28_4_ = fVar10 + (fVar65 * fVar103 - fVar123 * fVar52) + fVar75 * fVar114 + fVar43;
  fVar43 = param_8[5];
  auVar24._0_4_ = fVar43 + (fVar52 * fVar104 - fVar95 * fVar74) + fVar75 * fVar115 + fVar9;
  auVar24._4_4_ = fVar43 + (fVar52 * fVar105 - fVar96 * fVar74) + fVar75 * fVar116 + fVar29;
  auVar24._8_4_ = fVar43 + (fVar52 * fVar106 - fVar97 * fVar74) + fVar75 * fVar117 + fVar31;
  auVar24._12_4_ = fVar43 + (fVar52 * fVar107 - fVar98 * fVar74) + fVar75 * fVar118 + fVar36;
  auVar24._16_4_ = fVar43 + (fVar52 * fVar108 - fVar99 * fVar74) + fVar75 * fVar119 + fVar37;
  auVar24._20_4_ = fVar43 + (fVar52 * fVar109 - fVar100 * fVar74) + fVar75 * fVar120 + fVar38;
  auVar24._24_4_ = fVar43 + (fVar52 * fVar113 - fVar102 * fVar74) + fVar75 * fVar122 + fVar39;
  auVar24._28_4_ = fVar43 + (fVar52 * fVar114 - fVar103 * fVar74) + fVar75 * fVar123 + fVar64;
  fVar43 = param_8[6];
  auVar63._0_4_ = fVar43 + fVar95 * fVar75 + fVar87 + (fVar74 * fVar115 - fVar104 * fVar65);
  auVar63._4_4_ = fVar43 + fVar96 * fVar75 + fVar88 + (fVar74 * fVar116 - fVar105 * fVar65);
  auVar63._8_4_ = fVar43 + fVar97 * fVar75 + fVar89 + (fVar74 * fVar117 - fVar106 * fVar65);
  auVar63._12_4_ = fVar43 + fVar98 * fVar75 + fVar90 + (fVar74 * fVar118 - fVar107 * fVar65);
  auVar63._16_4_ = fVar43 + fVar99 * fVar75 + fVar91 + (fVar74 * fVar119 - fVar108 * fVar65);
  auVar63._20_4_ = fVar43 + fVar100 * fVar75 + fVar93 + (fVar74 * fVar120 - fVar109 * fVar65);
  auVar63._24_4_ = fVar43 + fVar102 * fVar75 + fVar94 + (fVar74 * fVar122 - fVar113 * fVar65);
  auVar63._28_4_ = fVar43 + fVar103 * fVar75 + fVar30 + (fVar74 * fVar123 - fVar114 * fVar65);
  uVar1 = *param_9;
  auVar73._4_4_ = uVar1;
  auVar73._0_4_ = uVar1;
  auVar73._8_4_ = uVar1;
  auVar73._12_4_ = uVar1;
  auVar73._16_4_ = uVar1;
  auVar73._20_4_ = uVar1;
  auVar73._24_4_ = uVar1;
  auVar73._28_4_ = uVar1;
  auVar58 = vsubps_avx(auVar48,auVar73);
  uVar1 = param_9[1];
  auVar49._4_4_ = uVar1;
  auVar49._0_4_ = uVar1;
  auVar49._8_4_ = uVar1;
  auVar49._12_4_ = uVar1;
  auVar49._16_4_ = uVar1;
  auVar49._20_4_ = uVar1;
  auVar49._24_4_ = uVar1;
  auVar49._28_4_ = uVar1;
  auVar46 = vsubps_avx(auVar24,auVar49);
  uVar1 = param_9[2];
  auVar25._4_4_ = uVar1;
  auVar25._0_4_ = uVar1;
  auVar25._8_4_ = uVar1;
  auVar25._12_4_ = uVar1;
  auVar25._16_4_ = uVar1;
  auVar25._20_4_ = uVar1;
  auVar25._24_4_ = uVar1;
  auVar25._28_4_ = uVar1;
  auVar62 = vsubps_avx(auVar63,auVar25);
  auVar66 = auVar58._0_16_;
  auVar11 = auVar58._16_16_;
  auVar32 = auVar46._0_16_;
  if (cVar4 == -1) {
    auVar27._16_16_ = auVar32;
    auVar27._0_16_ = auVar66;
    auVar112 = vshufpd_avx(auVar58,auVar27,2);
    auVar77 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar62);
    auVar82 = vpermpd_avx2(auVar46,0xe9);
    auVar82 = vblendps_avx(auVar77,auVar82,7);
    auVar78._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar78._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar77 = vpermps_avx2(auVar78,auVar82);
    auVar112 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                            auVar112);
    auVar112 = vblendps_avx(auVar112,auVar77,0xa4);
    *pauVar3 = auVar112;
    lVar7 = uVar8 * 0xc;
    auVar112 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                            auVar82);
    auVar82 = vshufpd_avx(auVar58,auVar58,1);
    auVar82 = vblendps_avx(auVar112,auVar82,0x92);
    *(undefined1 (*) [32])(param_4 + 0x20 + lVar7) = auVar82;
    auVar28._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar28._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar112 = vpermps_avx2(auVar28,auVar46);
    auVar82 = vpermpd_avx2(auVar58,0xff);
    auVar82 = vblendps_avx(auVar112,auVar82,3);
    auVar82 = vblendps_avx(auVar82,auVar62,0xe0);
    auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar82);
    *(undefined1 (*) [32])(param_4 + 0x40 + lVar7) = auVar82;
    auVar82 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar7);
    auVar112 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar7);
    auVar77 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar82);
    auVar55 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *(undefined1 (*) [32])(param_7 + lVar7));
    auVar77 = vblendps_avx(auVar55,auVar77,0x88);
    auVar55 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar82);
    auVar33 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar112);
    auVar55 = vblendps_avx(auVar33,auVar55,0x13);
    auVar26._16_16_ = auVar55._0_16_;
    auVar26._0_16_ = auVar77._0_16_;
    auVar77 = vperm2f128_avx(auVar77,auVar55,0x31);
    auVar82 = vblendps_avx(auVar82,*(undefined1 (*) [32])(param_7 + lVar7),0x24);
    auVar82 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar82);
    auVar83._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar83._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar112 = vpermps_avx2(auVar83,auVar112);
    auVar82 = vblendps_avx(auVar82,auVar112,0xe0);
  }
  else {
    auVar44 = auVar46._16_16_;
    auVar53 = auVar62._0_16_;
    auVar126 = auVar62._16_16_;
    if ((uVar5 & 1) != 0) {
      *(int *)*pauVar3 = auVar58._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(param_4 + 0xc + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)(param_4 + 0x18 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(param_4 + 0x24 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(param_4 + 0x30 + uVar8 * 0xc) = auVar58._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(param_4 + 0x3c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)(param_4 + 0x48 + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(param_4 + 0x54 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(param_4 + 4 + uVar8 * 0xc) = auVar46._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(param_4 + 0x10 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(param_4 + 0x1c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(param_4 + 0x28 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(param_4 + 0x34 + uVar8 * 0xc) = auVar46._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(param_4 + 0x40 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)(param_4 + 0x4c + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(param_4 + 0x58 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(param_4 + 8 + uVar8 * 0xc) = auVar62._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(param_4 + 0x14 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(param_4 + 0x20 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(param_4 + 0x2c + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(param_4 + 0x38 + uVar8 * 0xc) = auVar62._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)(param_4 + 0x44 + uVar8 * 0xc) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(param_4 + 0x50 + uVar8 * 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(param_4 + 0x5c + uVar8 * 0xc) = uVar1;
    }
    auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar77 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
    auVar82 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar82);
  }
  auVar58 = vsubps_avx(auVar26,auVar58);
  auVar92._4_4_ = param_10;
  auVar92._0_4_ = param_10;
  auVar92._8_4_ = param_10;
  auVar92._12_4_ = param_10;
  auVar92._16_4_ = param_10;
  auVar92._20_4_ = param_10;
  auVar92._24_4_ = param_10;
  auVar92._28_4_ = param_10;
  auVar58 = vdivps_avx(auVar58,auVar92);
  auVar46 = vsubps_avx(auVar77,auVar46);
  auVar46 = vdivps_avx(auVar46,auVar92);
  auVar82 = vsubps_avx(auVar82,auVar62);
  auVar82 = vdivps_avx(auVar82,auVar92);
  pauVar3 = (undefined1 (*) [32])(param_5 + uVar8 * 0xc);
  auVar66 = auVar58._0_16_;
  auVar11 = auVar58._16_16_;
  auVar32 = auVar46._0_16_;
  if (cVar4 == -1) {
    auVar50._16_16_ = auVar32;
    auVar50._0_16_ = auVar66;
    auVar112 = vshufpd_avx(auVar58,auVar50,2);
    auVar77 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar82);
    auVar62 = vpermpd_avx2(auVar46,0xe9);
    auVar62 = vblendps_avx(auVar77,auVar62,7);
    auVar79._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar79._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar77 = vpermps_avx2(auVar79,auVar62);
    auVar112 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                            auVar112);
    auVar112 = vblendps_avx(auVar112,auVar77,0xa4);
    *pauVar3 = auVar112;
    auVar112 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                            auVar62);
    auVar62 = vshufpd_avx(auVar58,auVar58,1);
    auVar62 = vblendps_avx(auVar112,auVar62,0x92);
    pauVar3[1] = auVar62;
    auVar51._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar51._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar46 = vpermps_avx2(auVar51,auVar46);
    auVar58 = vpermpd_avx2(auVar58,0xff);
    auVar58 = vblendps_avx(auVar46,auVar58,3);
    auVar82 = vblendps_avx(auVar58,auVar82,0xe0);
    auVar82 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar82);
    pauVar3[2] = auVar82;
  }
  else {
    auVar126 = auVar46._16_16_;
    auVar44 = auVar82._0_16_;
    auVar53 = auVar82._16_16_;
    if ((uVar5 & 1) != 0) {
      *(int *)*pauVar3 = auVar58._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar66,1);
      *(undefined4 *)(*pauVar3 + 0xc) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar66,2);
      *(undefined4 *)(*pauVar3 + 0x18) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar66,3);
      *(undefined4 *)(pauVar3[1] + 4) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x10) = auVar58._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar11,1);
      *(undefined4 *)(pauVar3[1] + 0x1c) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar11,2);
      *(undefined4 *)(pauVar3[2] + 8) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar11,3);
      *(undefined4 *)(pauVar3[2] + 0x14) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar3 + 4) = auVar46._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar32,1);
      *(undefined4 *)(*pauVar3 + 0x10) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar32,2);
      *(undefined4 *)(*pauVar3 + 0x1c) = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar32,3);
      *(undefined4 *)(pauVar3[1] + 8) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x14) = auVar46._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar126,1);
      *(undefined4 *)pauVar3[2] = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar126,2);
      *(undefined4 *)(pauVar3[2] + 0xc) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar126,3);
      *(undefined4 *)(pauVar3[2] + 0x18) = uVar1;
    }
    if ((uVar5 & 1) != 0) {
      *(int *)(*pauVar3 + 8) = auVar82._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar1 = vextractps_avx(auVar44,1);
      *(undefined4 *)(*pauVar3 + 0x14) = uVar1;
    }
    if ((uVar5 & 4) != 0) {
      uVar1 = vextractps_avx(auVar44,2);
      *(undefined4 *)pauVar3[1] = uVar1;
    }
    if ((uVar5 & 8) != 0) {
      uVar1 = vextractps_avx(auVar44,3);
      *(undefined4 *)(pauVar3[1] + 0xc) = uVar1;
    }
    if ((uVar5 & 0x10) != 0) {
      *(int *)(pauVar3[1] + 0x18) = auVar82._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(pauVar3[2] + 4) = uVar1;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(pauVar3[2] + 0x10) = uVar1;
    }
    if (cVar4 < '\0') {
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(pauVar3[2] + 0x1c) = uVar1;
    }
  }
  return;
}

// ApplyAnimationPreSimulationTransform_avx2 @ 140ce39e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAnimationPreSimulationTransform_avx2
               (longlong param_1,longlong param_2,longlong param_3,float *param_4,
               undefined4 *param_5,undefined4 param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar39 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  float fVar60;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  float fVar70;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
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
  
  auVar53 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar61 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
  uVar9 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar9 = param_7;
  }
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    lVar11 = 0x40;
    uVar12 = 0;
    do {
      auVar54 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar14 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar47 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar11);
      auVar29 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar11);
      auVar30 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar29);
      auVar44 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar47);
      auVar30 = vblendps_avx(auVar44,auVar30,0x88);
      auVar44 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar29);
      auVar57 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_1 + lVar11));
      auVar44 = vblendps_avx(auVar57,auVar44,0x13);
      auVar57 = vperm2f128_avx(auVar30,auVar44,0x31);
      auVar47 = vblendps_avx(auVar29,auVar47,0x24);
      auVar47 = vpermps_avx2(auVar61,auVar47);
      auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_1 + lVar11));
      auVar47 = vblendps_avx(auVar47,auVar29,0xe0);
      fVar95 = param_4[8];
      fVar88 = auVar30._0_4_ * fVar95;
      fVar89 = auVar30._4_4_ * fVar95;
      fVar90 = auVar30._8_4_ * fVar95;
      fVar91 = auVar30._12_4_ * fVar95;
      fVar92 = auVar44._0_4_ * fVar95;
      fVar93 = auVar44._4_4_ * fVar95;
      fVar94 = auVar44._8_4_ * fVar95;
      fVar95 = auVar44._12_4_ * fVar95;
      fVar26 = param_4[9];
      fVar13 = auVar57._0_4_ * fVar26;
      fVar20 = auVar57._4_4_ * fVar26;
      fVar21 = auVar57._8_4_ * fVar26;
      fVar22 = auVar57._12_4_ * fVar26;
      fVar23 = auVar57._16_4_ * fVar26;
      fVar24 = auVar57._20_4_ * fVar26;
      fVar25 = auVar57._24_4_ * fVar26;
      fVar26 = auVar57._28_4_ * fVar26;
      fVar42 = param_4[10];
      fVar27 = auVar47._0_4_ * fVar42;
      fVar35 = auVar47._4_4_ * fVar42;
      fVar36 = auVar47._8_4_ * fVar42;
      fVar37 = auVar47._12_4_ * fVar42;
      fVar38 = auVar47._16_4_ * fVar42;
      fVar40 = auVar47._20_4_ * fVar42;
      fVar41 = auVar47._24_4_ * fVar42;
      fVar42 = auVar47._28_4_ * fVar42;
      fVar2 = param_4[3];
      fVar3 = param_4[1];
      fVar4 = param_4[2];
      fVar5 = *param_4;
      fVar60 = fVar13 * fVar5 - fVar88 * fVar3;
      fVar63 = fVar20 * fVar5 - fVar89 * fVar3;
      fVar64 = fVar21 * fVar5 - fVar90 * fVar3;
      fVar65 = fVar22 * fVar5 - fVar91 * fVar3;
      fVar66 = fVar23 * fVar5 - fVar92 * fVar3;
      fVar67 = fVar24 * fVar5 - fVar93 * fVar3;
      fVar68 = fVar25 * fVar5 - fVar94 * fVar3;
      fVar69 = fVar26 * fVar5 - fVar95 * fVar3;
      fVar70 = fVar27 * fVar3 - fVar4 * fVar13;
      fVar73 = fVar35 * fVar3 - fVar4 * fVar20;
      fVar74 = fVar36 * fVar3 - fVar4 * fVar21;
      fVar75 = fVar37 * fVar3 - fVar4 * fVar22;
      fVar76 = fVar38 * fVar3 - fVar4 * fVar23;
      fVar77 = fVar40 * fVar3 - fVar4 * fVar24;
      fVar78 = fVar41 * fVar3 - fVar4 * fVar25;
      fVar79 = fVar42 * fVar3 - fVar4 * fVar26;
      fVar80 = fVar88 * fVar4 - fVar27 * fVar5;
      fVar81 = fVar89 * fVar4 - fVar35 * fVar5;
      fVar82 = fVar90 * fVar4 - fVar36 * fVar5;
      fVar83 = fVar91 * fVar4 - fVar37 * fVar5;
      fVar84 = fVar92 * fVar4 - fVar38 * fVar5;
      fVar85 = fVar93 * fVar4 - fVar40 * fVar5;
      fVar86 = fVar94 * fVar4 - fVar41 * fVar5;
      fVar87 = fVar95 * fVar4 - fVar42 * fVar5;
      fVar70 = fVar70 + fVar70;
      fVar73 = fVar73 + fVar73;
      fVar74 = fVar74 + fVar74;
      fVar75 = fVar75 + fVar75;
      fVar76 = fVar76 + fVar76;
      fVar77 = fVar77 + fVar77;
      fVar78 = fVar78 + fVar78;
      fVar79 = fVar79 + fVar79;
      fVar80 = fVar80 + fVar80;
      fVar81 = fVar81 + fVar81;
      fVar82 = fVar82 + fVar82;
      fVar83 = fVar83 + fVar83;
      fVar84 = fVar84 + fVar84;
      fVar85 = fVar85 + fVar85;
      fVar86 = fVar86 + fVar86;
      fVar87 = fVar87 + fVar87;
      fVar60 = fVar60 + fVar60;
      fVar63 = fVar63 + fVar63;
      fVar64 = fVar64 + fVar64;
      fVar65 = fVar65 + fVar65;
      fVar66 = fVar66 + fVar66;
      fVar67 = fVar67 + fVar67;
      fVar68 = fVar68 + fVar68;
      fVar69 = fVar69 + fVar69;
      fVar6 = param_4[4];
      auVar44._0_4_ = fVar6 + fVar2 * fVar70 + fVar88 + (fVar3 * fVar60 - fVar4 * fVar80);
      auVar44._4_4_ = fVar6 + fVar2 * fVar73 + fVar89 + (fVar3 * fVar63 - fVar4 * fVar81);
      auVar44._8_4_ = fVar6 + fVar2 * fVar74 + fVar90 + (fVar3 * fVar64 - fVar4 * fVar82);
      auVar44._12_4_ = fVar6 + fVar2 * fVar75 + fVar91 + (fVar3 * fVar65 - fVar4 * fVar83);
      auVar44._16_4_ = fVar6 + fVar2 * fVar76 + fVar92 + (fVar3 * fVar66 - fVar4 * fVar84);
      auVar44._20_4_ = fVar6 + fVar2 * fVar77 + fVar93 + (fVar3 * fVar67 - fVar4 * fVar85);
      auVar44._24_4_ = fVar6 + fVar2 * fVar78 + fVar94 + (fVar3 * fVar68 - fVar4 * fVar86);
      auVar44._28_4_ = fVar6 + fVar2 * fVar79 + fVar95 + (fVar3 * fVar69 - fVar4 * fVar87);
      fVar95 = param_4[5];
      auVar51._0_4_ = fVar95 + fVar2 * fVar80 + fVar13 + (fVar4 * fVar70 - fVar5 * fVar60);
      auVar51._4_4_ = fVar95 + fVar2 * fVar81 + fVar20 + (fVar4 * fVar73 - fVar5 * fVar63);
      auVar51._8_4_ = fVar95 + fVar2 * fVar82 + fVar21 + (fVar4 * fVar74 - fVar5 * fVar64);
      auVar51._12_4_ = fVar95 + fVar2 * fVar83 + fVar22 + (fVar4 * fVar75 - fVar5 * fVar65);
      auVar51._16_4_ = fVar95 + fVar2 * fVar84 + fVar23 + (fVar4 * fVar76 - fVar5 * fVar66);
      auVar51._20_4_ = fVar95 + fVar2 * fVar85 + fVar24 + (fVar4 * fVar77 - fVar5 * fVar67);
      auVar51._24_4_ = fVar95 + fVar2 * fVar86 + fVar25 + (fVar4 * fVar78 - fVar5 * fVar68);
      auVar51._28_4_ = fVar95 + fVar2 * fVar87 + fVar26 + (fVar4 * fVar79 - fVar5 * fVar69);
      fVar95 = param_4[6];
      auVar29._0_4_ = fVar95 + fVar60 * fVar2 + fVar27 + (fVar5 * fVar80 - fVar3 * fVar70);
      auVar29._4_4_ = fVar95 + fVar63 * fVar2 + fVar35 + (fVar5 * fVar81 - fVar3 * fVar73);
      auVar29._8_4_ = fVar95 + fVar64 * fVar2 + fVar36 + (fVar5 * fVar82 - fVar3 * fVar74);
      auVar29._12_4_ = fVar95 + fVar65 * fVar2 + fVar37 + (fVar5 * fVar83 - fVar3 * fVar75);
      auVar29._16_4_ = fVar95 + fVar66 * fVar2 + fVar38 + (fVar5 * fVar84 - fVar3 * fVar76);
      auVar29._20_4_ = fVar95 + fVar67 * fVar2 + fVar40 + (fVar5 * fVar85 - fVar3 * fVar77);
      auVar29._24_4_ = fVar95 + fVar68 * fVar2 + fVar41 + (fVar5 * fVar86 - fVar3 * fVar78);
      auVar29._28_4_ = fVar95 + fVar69 * fVar2 + fVar42 + (fVar5 * fVar87 - fVar3 * fVar79);
      uVar7 = *param_5;
      auVar47._4_4_ = uVar7;
      auVar47._0_4_ = uVar7;
      auVar47._8_4_ = uVar7;
      auVar47._12_4_ = uVar7;
      auVar47._16_4_ = uVar7;
      auVar47._20_4_ = uVar7;
      auVar47._24_4_ = uVar7;
      auVar47._28_4_ = uVar7;
      auVar57 = vsubps_avx(auVar44,auVar47);
      uVar7 = param_5[1];
      auVar45._4_4_ = uVar7;
      auVar45._0_4_ = uVar7;
      auVar45._8_4_ = uVar7;
      auVar45._12_4_ = uVar7;
      auVar45._16_4_ = uVar7;
      auVar45._20_4_ = uVar7;
      auVar45._24_4_ = uVar7;
      auVar45._28_4_ = uVar7;
      auVar45 = vsubps_avx(auVar51,auVar45);
      uVar7 = param_5[2];
      auVar46._4_4_ = uVar7;
      auVar46._0_4_ = uVar7;
      auVar46._8_4_ = uVar7;
      auVar46._12_4_ = uVar7;
      auVar46._16_4_ = uVar7;
      auVar46._20_4_ = uVar7;
      auVar46._24_4_ = uVar7;
      auVar46._28_4_ = uVar7;
      auVar46 = vsubps_avx(auVar29,auVar46);
      auVar30._16_16_ = auVar45._0_16_;
      auVar30._0_16_ = auVar57._0_16_;
      auVar29 = vshufpd_avx(auVar57,auVar30,2);
      auVar30 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar46);
      auVar47 = vpermpd_avx2(auVar45,0xe9);
      auVar47 = vblendps_avx(auVar30,auVar47,7);
      auVar30 = vpermps_avx2(auVar53,auVar47);
      auVar29 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar29);
      auVar29 = vblendps_avx(auVar29,auVar30,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar11) = auVar29;
      auVar15 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar29 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar47);
      auVar47 = vshufpd_avx(auVar57,auVar57,1);
      auVar47 = vblendps_avx(auVar29,auVar47,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar11) = auVar47;
      auVar31 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar16 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar29 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar45);
      auVar47 = vpermpd_avx2(auVar57,0xff);
      auVar47 = vblendps_avx(auVar29,auVar47,3);
      auVar47 = vblendps_avx(auVar47,auVar46,0xe0);
      auVar47 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar47);
      *(undefined1 (*) [32])(param_1 + lVar11) = auVar47;
      auVar47 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar11);
      auVar29 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar11);
      auVar30 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar29);
      auVar44 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar47);
      auVar30 = vblendps_avx(auVar44,auVar30,0x88);
      auVar44 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar29);
      auVar51 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_3 + lVar11));
      auVar44 = vblendps_avx(auVar51,auVar44,0x13);
      auVar71._16_16_ = auVar44._0_16_;
      auVar71._0_16_ = auVar30._0_16_;
      auVar44 = vperm2f128_avx(auVar30,auVar44,0x31);
      auVar47 = vblendps_avx(auVar29,auVar47,0x24);
      auVar47 = vpermps_avx2(auVar61,auVar47);
      auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_3 + lVar11));
      auVar47 = vblendps_avx(auVar47,auVar29,0xe0);
      auVar29 = vsubps_avx(auVar71,auVar57);
      auVar57._4_4_ = param_6;
      auVar57._0_4_ = param_6;
      auVar57._8_4_ = param_6;
      auVar57._12_4_ = param_6;
      auVar57._16_4_ = param_6;
      auVar57._20_4_ = param_6;
      auVar57._24_4_ = param_6;
      auVar57._28_4_ = param_6;
      auVar30 = vdivps_avx(auVar29,auVar57);
      auVar29 = vsubps_avx(auVar44,auVar45);
      auVar44 = vdivps_avx(auVar29,auVar57);
      auVar47 = vsubps_avx(auVar47,auVar46);
      auVar57 = vdivps_avx(auVar47,auVar57);
      auVar52._16_16_ = auVar44._0_16_;
      auVar52._0_16_ = auVar30._0_16_;
      auVar29 = vshufpd_avx(auVar30,auVar52,2);
      auVar45 = vpermps_avx2(auVar14,auVar57);
      auVar47 = vpermpd_avx2(auVar44,0xe9);
      auVar47 = vblendps_avx(auVar45,auVar47,7);
      auVar45 = vpermps_avx2(auVar53,auVar47);
      auVar29 = vpermps_avx2(auVar54,auVar29);
      auVar29 = vblendps_avx(auVar29,auVar45,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar11) = auVar29;
      auVar29 = vpermps_avx2(auVar15,auVar47);
      auVar47 = vshufpd_avx(auVar30,auVar30,1);
      auVar47 = vblendps_avx(auVar29,auVar47,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar11) = auVar47;
      auVar29 = vpermps_avx2(auVar16,auVar44);
      auVar47 = vpermpd_avx2(auVar30,0xff);
      auVar47 = vblendps_avx(auVar29,auVar47,3);
      auVar47 = vblendps_avx(auVar47,auVar57,0xe0);
      auVar47 = vpermps_avx2(auVar31,auVar47);
      *(undefined1 (*) [32])(param_2 + lVar11) = auVar47;
      lVar11 = lVar11 + 0x60;
      uVar12 = uVar12 + 8;
    } while ((int)uVar12 < (int)(uVar9 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar12) {
      return;
    }
  }
  auVar61._4_4_ = uVar12;
  auVar61._0_4_ = uVar12;
  auVar61._8_4_ = uVar12;
  auVar61._12_4_ = uVar12;
  auVar61._16_4_ = uVar12;
  auVar61._20_4_ = uVar12;
  auVar61._24_4_ = uVar12;
  auVar61._28_4_ = uVar12;
  auVar61 = vpor_avx2(auVar61,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar53._4_4_ = param_7;
  auVar53._0_4_ = param_7;
  auVar53._8_4_ = param_7;
  auVar53._12_4_ = param_7;
  auVar53._16_4_ = param_7;
  auVar53._20_4_ = param_7;
  auVar53._24_4_ = param_7;
  auVar53._28_4_ = param_7;
  auVar61 = vpcmpgtd_avx2(auVar53,auVar61);
  uVar10 = (ulonglong)uVar12;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar10 * 0xc);
  uVar9 = vmovmskps_avx(auVar61);
  if (uVar9 == 0xff) {
    auVar53 = pauVar1[1];
    auVar47 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar53);
    auVar29 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar1);
    auVar47 = vblendps_avx(auVar29,auVar47,0x88);
    auVar29 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar53);
    auVar30 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar1[2]);
    auVar29 = vblendps_avx(auVar30,auVar29,0x13);
    auVar14._16_16_ = auVar29._0_16_;
    auVar14._0_16_ = auVar47._0_16_;
    auVar47 = vperm2f128_avx(auVar47,auVar29,0x31);
    auVar53 = vblendps_avx(auVar53,*pauVar1,0x24);
    auVar53 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar53);
    auVar54._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar54._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar29 = vpermps_avx2(auVar54,pauVar1[2]);
    auVar53 = vblendps_avx(auVar53,auVar29,0xe0);
  }
  else {
    auVar14 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar61);
    auVar47 = vgatherdps(ZEXT832(0),auVar61);
    auVar53 = vgatherdps(ZEXT832(0),auVar61);
  }
  cVar8 = (char)uVar9;
  fVar95 = param_4[8];
  fVar27 = auVar14._0_4_ * fVar95;
  fVar35 = auVar14._4_4_ * fVar95;
  fVar36 = auVar14._8_4_ * fVar95;
  fVar37 = auVar14._12_4_ * fVar95;
  fVar38 = auVar14._16_4_ * fVar95;
  fVar40 = auVar14._20_4_ * fVar95;
  fVar41 = auVar14._24_4_ * fVar95;
  fVar95 = auVar14._28_4_ * fVar95;
  fVar26 = param_4[9];
  fVar13 = auVar47._0_4_ * fVar26;
  fVar20 = auVar47._4_4_ * fVar26;
  fVar21 = auVar47._8_4_ * fVar26;
  fVar22 = auVar47._12_4_ * fVar26;
  fVar23 = auVar47._16_4_ * fVar26;
  fVar24 = auVar47._20_4_ * fVar26;
  fVar25 = auVar47._24_4_ * fVar26;
  fVar26 = auVar47._28_4_ * fVar26;
  fVar42 = param_4[10];
  fVar60 = auVar53._0_4_ * fVar42;
  fVar63 = auVar53._4_4_ * fVar42;
  fVar64 = auVar53._8_4_ * fVar42;
  fVar65 = auVar53._12_4_ * fVar42;
  fVar66 = auVar53._16_4_ * fVar42;
  fVar67 = auVar53._20_4_ * fVar42;
  fVar68 = auVar53._24_4_ * fVar42;
  fVar42 = auVar53._28_4_ * fVar42;
  fVar2 = param_4[3];
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = *param_4;
  fVar69 = fVar13 * fVar5 - fVar27 * fVar3;
  fVar70 = fVar20 * fVar5 - fVar35 * fVar3;
  fVar73 = fVar21 * fVar5 - fVar36 * fVar3;
  fVar74 = fVar22 * fVar5 - fVar37 * fVar3;
  fVar75 = fVar23 * fVar5 - fVar38 * fVar3;
  fVar76 = fVar24 * fVar5 - fVar40 * fVar3;
  fVar77 = fVar25 * fVar5 - fVar41 * fVar3;
  fVar78 = fVar26 * fVar5 - fVar95 * fVar3;
  fVar79 = fVar60 * fVar3 - fVar13 * fVar4;
  fVar80 = fVar63 * fVar3 - fVar20 * fVar4;
  fVar81 = fVar64 * fVar3 - fVar21 * fVar4;
  fVar82 = fVar65 * fVar3 - fVar22 * fVar4;
  fVar83 = fVar66 * fVar3 - fVar23 * fVar4;
  fVar84 = fVar67 * fVar3 - fVar24 * fVar4;
  fVar85 = fVar68 * fVar3 - fVar25 * fVar4;
  fVar86 = fVar42 * fVar3 - fVar26 * fVar4;
  fVar87 = fVar27 * fVar4 - fVar60 * fVar5;
  fVar88 = fVar35 * fVar4 - fVar63 * fVar5;
  fVar89 = fVar36 * fVar4 - fVar64 * fVar5;
  fVar90 = fVar37 * fVar4 - fVar65 * fVar5;
  fVar91 = fVar38 * fVar4 - fVar66 * fVar5;
  fVar92 = fVar40 * fVar4 - fVar67 * fVar5;
  fVar93 = fVar41 * fVar4 - fVar68 * fVar5;
  fVar94 = fVar95 * fVar4 - fVar42 * fVar5;
  fVar79 = fVar79 + fVar79;
  fVar80 = fVar80 + fVar80;
  fVar81 = fVar81 + fVar81;
  fVar82 = fVar82 + fVar82;
  fVar83 = fVar83 + fVar83;
  fVar84 = fVar84 + fVar84;
  fVar85 = fVar85 + fVar85;
  fVar86 = fVar86 + fVar86;
  fVar87 = fVar87 + fVar87;
  fVar88 = fVar88 + fVar88;
  fVar89 = fVar89 + fVar89;
  fVar90 = fVar90 + fVar90;
  fVar91 = fVar91 + fVar91;
  fVar92 = fVar92 + fVar92;
  fVar93 = fVar93 + fVar93;
  fVar94 = fVar94 + fVar94;
  fVar69 = fVar69 + fVar69;
  fVar70 = fVar70 + fVar70;
  fVar73 = fVar73 + fVar73;
  fVar74 = fVar74 + fVar74;
  fVar75 = fVar75 + fVar75;
  fVar76 = fVar76 + fVar76;
  fVar77 = fVar77 + fVar77;
  fVar78 = fVar78 + fVar78;
  fVar6 = param_4[4];
  auVar31._0_4_ = fVar6 + (fVar3 * fVar69 - fVar87 * fVar4) + fVar2 * fVar79 + fVar27;
  auVar31._4_4_ = fVar6 + (fVar3 * fVar70 - fVar88 * fVar4) + fVar2 * fVar80 + fVar35;
  auVar31._8_4_ = fVar6 + (fVar3 * fVar73 - fVar89 * fVar4) + fVar2 * fVar81 + fVar36;
  auVar31._12_4_ = fVar6 + (fVar3 * fVar74 - fVar90 * fVar4) + fVar2 * fVar82 + fVar37;
  auVar31._16_4_ = fVar6 + (fVar3 * fVar75 - fVar91 * fVar4) + fVar2 * fVar83 + fVar38;
  auVar31._20_4_ = fVar6 + (fVar3 * fVar76 - fVar92 * fVar4) + fVar2 * fVar84 + fVar40;
  auVar31._24_4_ = fVar6 + (fVar3 * fVar77 - fVar93 * fVar4) + fVar2 * fVar85 + fVar41;
  auVar31._28_4_ = fVar6 + (fVar3 * fVar78 - fVar94 * fVar4) + fVar2 * fVar86 + fVar95;
  fVar95 = param_4[5];
  auVar15._0_4_ = fVar95 + (fVar4 * fVar79 - fVar69 * fVar5) + fVar2 * fVar87 + fVar13;
  auVar15._4_4_ = fVar95 + (fVar4 * fVar80 - fVar70 * fVar5) + fVar2 * fVar88 + fVar20;
  auVar15._8_4_ = fVar95 + (fVar4 * fVar81 - fVar73 * fVar5) + fVar2 * fVar89 + fVar21;
  auVar15._12_4_ = fVar95 + (fVar4 * fVar82 - fVar74 * fVar5) + fVar2 * fVar90 + fVar22;
  auVar15._16_4_ = fVar95 + (fVar4 * fVar83 - fVar75 * fVar5) + fVar2 * fVar91 + fVar23;
  auVar15._20_4_ = fVar95 + (fVar4 * fVar84 - fVar76 * fVar5) + fVar2 * fVar92 + fVar24;
  auVar15._24_4_ = fVar95 + (fVar4 * fVar85 - fVar77 * fVar5) + fVar2 * fVar93 + fVar25;
  auVar15._28_4_ = fVar95 + (fVar4 * fVar86 - fVar78 * fVar5) + fVar2 * fVar94 + fVar26;
  fVar95 = param_4[6];
  auVar48._0_4_ = fVar95 + fVar69 * fVar2 + fVar60 + (fVar5 * fVar87 - fVar79 * fVar3);
  auVar48._4_4_ = fVar95 + fVar70 * fVar2 + fVar63 + (fVar5 * fVar88 - fVar80 * fVar3);
  auVar48._8_4_ = fVar95 + fVar73 * fVar2 + fVar64 + (fVar5 * fVar89 - fVar81 * fVar3);
  auVar48._12_4_ = fVar95 + fVar74 * fVar2 + fVar65 + (fVar5 * fVar90 - fVar82 * fVar3);
  auVar48._16_4_ = fVar95 + fVar75 * fVar2 + fVar66 + (fVar5 * fVar91 - fVar83 * fVar3);
  auVar48._20_4_ = fVar95 + fVar76 * fVar2 + fVar67 + (fVar5 * fVar92 - fVar84 * fVar3);
  auVar48._24_4_ = fVar95 + fVar77 * fVar2 + fVar68 + (fVar5 * fVar93 - fVar85 * fVar3);
  auVar48._28_4_ = fVar95 + fVar78 * fVar2 + fVar42 + (fVar5 * fVar94 - fVar86 * fVar3);
  uVar7 = *param_5;
  auVar55._4_4_ = uVar7;
  auVar55._0_4_ = uVar7;
  auVar55._8_4_ = uVar7;
  auVar55._12_4_ = uVar7;
  auVar55._16_4_ = uVar7;
  auVar55._20_4_ = uVar7;
  auVar55._24_4_ = uVar7;
  auVar55._28_4_ = uVar7;
  auVar53 = vsubps_avx(auVar31,auVar55);
  uVar7 = param_5[1];
  auVar32._4_4_ = uVar7;
  auVar32._0_4_ = uVar7;
  auVar32._8_4_ = uVar7;
  auVar32._12_4_ = uVar7;
  auVar32._16_4_ = uVar7;
  auVar32._20_4_ = uVar7;
  auVar32._24_4_ = uVar7;
  auVar32._28_4_ = uVar7;
  auVar47 = vsubps_avx(auVar15,auVar32);
  uVar7 = param_5[2];
  auVar16._4_4_ = uVar7;
  auVar16._0_4_ = uVar7;
  auVar16._8_4_ = uVar7;
  auVar16._12_4_ = uVar7;
  auVar16._16_4_ = uVar7;
  auVar16._20_4_ = uVar7;
  auVar16._24_4_ = uVar7;
  auVar16._28_4_ = uVar7;
  auVar29 = vsubps_avx(auVar48,auVar16);
  auVar50 = auVar53._0_16_;
  auVar56 = auVar53._16_16_;
  auVar28 = auVar47._0_16_;
  if (cVar8 == -1) {
    auVar18._16_16_ = auVar28;
    auVar18._0_16_ = auVar50;
    auVar30 = vshufpd_avx(auVar53,auVar18,2);
    auVar44 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar29);
    auVar61 = vpermpd_avx2(auVar47,0xe9);
    auVar61 = vblendps_avx(auVar44,auVar61,7);
    auVar58._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar58._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar44 = vpermps_avx2(auVar58,auVar61);
    auVar30 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar30);
    auVar30 = vblendps_avx(auVar30,auVar44,0xa4);
    *pauVar1 = auVar30;
    auVar30 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar61);
    auVar61 = vshufpd_avx(auVar53,auVar53,1);
    auVar61 = vblendps_avx(auVar30,auVar61,0x92);
    pauVar1[1] = auVar61;
    auVar19._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar19._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar30 = vpermps_avx2(auVar19,auVar47);
    auVar61 = vpermpd_avx2(auVar53,0xff);
    auVar61 = vblendps_avx(auVar30,auVar61,3);
    auVar61 = vblendps_avx(auVar61,auVar29,0xe0);
    auVar61 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar61);
    pauVar1[2] = auVar61;
    auVar61 = *(undefined1 (*) [32])(param_3 + uVar10 * 0xc);
    auVar30 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar10 * 0xc);
    auVar44 = *(undefined1 (*) [32])(param_3 + 0x40 + uVar10 * 0xc);
    auVar57 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                           auVar30);
    auVar45 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           auVar61);
    auVar57 = vblendps_avx(auVar45,auVar57,0x88);
    auVar45 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                           auVar30);
    auVar46 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar44);
    auVar45 = vblendps_avx(auVar46,auVar45,0x13);
    auVar17._16_16_ = auVar45._0_16_;
    auVar17._0_16_ = auVar57._0_16_;
    auVar57 = vperm2f128_avx(auVar57,auVar45,0x31);
    auVar61 = vblendps_avx(auVar30,auVar61,0x24);
    auVar61 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar61);
    auVar62._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar62._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar30 = vpermps_avx2(auVar62,auVar44);
    auVar61 = vblendps_avx(auVar61,auVar30,0xe0);
  }
  else {
    auVar39 = auVar47._16_16_;
    auVar43 = auVar29._0_16_;
    auVar49 = auVar29._16_16_;
    if ((uVar9 & 1) != 0) {
      *(int *)*pauVar1 = auVar53._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar50,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar50,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar50,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x10) = auVar53._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar56,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar56,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar56,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar7;
    }
    if ((uVar9 & 1) != 0) {
      *(int *)(*pauVar1 + 4) = auVar47._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar28,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar28,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar28,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x14) = auVar47._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar39,1);
      *(undefined4 *)pauVar1[2] = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar39,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar39,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar7;
    }
    if ((uVar9 & 1) != 0) {
      *(int *)(*pauVar1 + 8) = auVar29._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar43,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar43,2);
      *(undefined4 *)pauVar1[1] = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar43,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x18) = auVar29._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar49,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar49,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar49,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar7;
    }
    auVar17 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar61);
    auVar57 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar61);
    auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar61);
  }
  auVar53 = vsubps_avx(auVar17,auVar53);
  auVar72._4_4_ = param_6;
  auVar72._0_4_ = param_6;
  auVar72._8_4_ = param_6;
  auVar72._12_4_ = param_6;
  auVar72._16_4_ = param_6;
  auVar72._20_4_ = param_6;
  auVar72._24_4_ = param_6;
  auVar72._28_4_ = param_6;
  auVar53 = vdivps_avx(auVar53,auVar72);
  auVar47 = vsubps_avx(auVar57,auVar47);
  auVar47 = vdivps_avx(auVar47,auVar72);
  auVar61 = vsubps_avx(auVar61,auVar29);
  auVar61 = vdivps_avx(auVar61,auVar72);
  pauVar1 = (undefined1 (*) [32])(param_2 + uVar10 * 0xc);
  auVar50 = auVar53._0_16_;
  auVar56 = auVar53._16_16_;
  auVar28 = auVar47._0_16_;
  if (cVar8 == -1) {
    auVar33._16_16_ = auVar28;
    auVar33._0_16_ = auVar50;
    auVar30 = vshufpd_avx(auVar53,auVar33,2);
    auVar44 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar61);
    auVar29 = vpermpd_avx2(auVar47,0xe9);
    auVar29 = vblendps_avx(auVar44,auVar29,7);
    auVar59._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar59._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar44 = vpermps_avx2(auVar59,auVar29);
    auVar30 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar30);
    auVar30 = vblendps_avx(auVar30,auVar44,0xa4);
    *pauVar1 = auVar30;
    auVar30 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar29);
    auVar29 = vshufpd_avx(auVar53,auVar53,1);
    auVar29 = vblendps_avx(auVar30,auVar29,0x92);
    pauVar1[1] = auVar29;
    auVar34._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar34._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar47 = vpermps_avx2(auVar34,auVar47);
    auVar53 = vpermpd_avx2(auVar53,0xff);
    auVar53 = vblendps_avx(auVar47,auVar53,3);
    auVar61 = vblendps_avx(auVar53,auVar61,0xe0);
    auVar61 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar61);
    pauVar1[2] = auVar61;
  }
  else {
    auVar49 = auVar47._16_16_;
    auVar39 = auVar61._0_16_;
    auVar43 = auVar61._16_16_;
    if ((uVar9 & 1) != 0) {
      *(int *)*pauVar1 = auVar53._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar50,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar50,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar50,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x10) = auVar53._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar56,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar56,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar56,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar7;
    }
    if ((uVar9 & 1) != 0) {
      *(int *)(*pauVar1 + 4) = auVar47._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar28,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar28,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar28,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x14) = auVar47._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar49,1);
      *(undefined4 *)pauVar1[2] = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar49,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar49,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar7;
    }
    if ((uVar9 & 1) != 0) {
      *(int *)(*pauVar1 + 8) = auVar61._0_4_;
    }
    if ((uVar9 & 2) != 0) {
      uVar7 = vextractps_avx(auVar39,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar7;
    }
    if ((uVar9 & 4) != 0) {
      uVar7 = vextractps_avx(auVar39,2);
      *(undefined4 *)pauVar1[1] = uVar7;
    }
    if ((uVar9 & 8) != 0) {
      uVar7 = vextractps_avx(auVar39,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar7;
    }
    if ((uVar9 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x18) = auVar61._16_4_;
    }
    if ((uVar9 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar43,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar7;
    }
    if ((uVar9 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar43,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar7;
    }
    if (cVar8 < '\0') {
      uVar7 = vextractps_avx(auVar43,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar7;
    }
  }
  return;
}

// ApplyPreSimulationTransformAndClampVelocity_avx2 @ 140ce46d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformAndClampVelocity_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float *param_8,undefined4 *param_9,
               undefined4 param_10,uint param_11,undefined4 param_12)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  undefined1 auVar3 [32];
  undefined1 (*pauVar4) [32];
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar29;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  float fVar30;
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  float fVar31;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  float fVar41;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  float fVar42;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  float fVar43;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar44 [32];
  float fVar53;
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  float fVar54;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  float fVar71;
  float fVar72;
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
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  float fVar101;
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar102 [16];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar108 [16];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  float fVar109;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  float fVar121;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  float fVar122;
  undefined1 auVar123 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar131 [16];
  undefined1 auVar126 [32];
  float fVar135;
  undefined1 auVar136 [16];
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 auVar137 [32];
  undefined1 auVar142 [16];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  float fVar149;
  float fVar150;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar168 [32];
  float fVar169;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  undefined1 auVar170 [32];
  float fVar177;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  float fVar180;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  float fVar189;
  undefined1 local_300 [32];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  
  uVar6 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar6 = param_11;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar9 = 0;
  }
  else {
    lVar8 = 0x10;
    uVar9 = 0;
    uVar7 = 0;
    auVar18 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
    do {
      auVar74 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar8 * 4);
      auVar55 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar8 * 4);
      auVar17 = *(undefined1 (*) [32])(param_3 + lVar8 * 4);
      auVar38 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar55);
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar74);
      auVar38 = vblendps_avx(auVar73,auVar38,0x88);
      auVar73 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar55);
      auVar168 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar17);
      auVar73 = vblendps_avx(auVar168,auVar73,0x13);
      auVar168 = vperm2f128_avx(auVar38,auVar73,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      fVar30 = param_8[8];
      fVar54 = auVar38._0_4_ * fVar30;
      fVar58 = auVar38._4_4_ * fVar30;
      fVar59 = auVar38._8_4_ * fVar30;
      fVar60 = auVar38._12_4_ * fVar30;
      fVar61 = auVar73._0_4_ * fVar30;
      fVar62 = auVar73._4_4_ * fVar30;
      fVar65 = auVar73._8_4_ * fVar30;
      fVar68 = auVar73._12_4_ * fVar30;
      fVar134 = param_8[9];
      fVar43 = auVar168._0_4_ * fVar134;
      fVar47 = auVar168._4_4_ * fVar134;
      fVar48 = auVar168._8_4_ * fVar134;
      fVar49 = auVar168._12_4_ * fVar134;
      fVar50 = auVar168._16_4_ * fVar134;
      fVar51 = auVar168._20_4_ * fVar134;
      fVar52 = auVar168._24_4_ * fVar134;
      fVar53 = auVar168._28_4_ * fVar134;
      fVar41 = param_8[10];
      fVar71 = auVar74._0_4_ * fVar41;
      fVar87 = auVar74._4_4_ * fVar41;
      fVar89 = auVar74._8_4_ * fVar41;
      fVar91 = auVar74._12_4_ * fVar41;
      fVar93 = auVar74._16_4_ * fVar41;
      fVar95 = auVar74._20_4_ * fVar41;
      fVar97 = auVar74._24_4_ * fVar41;
      fVar99 = auVar74._28_4_ * fVar41;
      fVar101 = param_8[3];
      fVar121 = param_8[1];
      fVar11 = param_8[2];
      fVar31 = *param_8;
      fVar109 = fVar43 * fVar31 - fVar121 * fVar54;
      fVar114 = fVar47 * fVar31 - fVar121 * fVar58;
      fVar115 = fVar48 * fVar31 - fVar121 * fVar59;
      fVar116 = fVar49 * fVar31 - fVar121 * fVar60;
      fVar117 = fVar50 * fVar31 - fVar121 * fVar61;
      fVar118 = fVar51 * fVar31 - fVar121 * fVar62;
      fVar119 = fVar52 * fVar31 - fVar121 * fVar65;
      fVar120 = fVar53 * fVar31 - fVar121 * fVar68;
      fVar135 = fVar71 * fVar121 - fVar43 * fVar11;
      fVar138 = fVar87 * fVar121 - fVar47 * fVar11;
      fVar139 = fVar89 * fVar121 - fVar48 * fVar11;
      fVar140 = fVar91 * fVar121 - fVar49 * fVar11;
      fVar141 = fVar93 * fVar121 - fVar50 * fVar11;
      fVar143 = fVar95 * fVar121 - fVar51 * fVar11;
      fVar144 = fVar97 * fVar121 - fVar52 * fVar11;
      fVar145 = fVar99 * fVar121 - fVar53 * fVar11;
      fVar149 = fVar54 * fVar11 - fVar31 * fVar71;
      fVar154 = fVar58 * fVar11 - fVar31 * fVar87;
      fVar156 = fVar59 * fVar11 - fVar31 * fVar89;
      fVar158 = fVar60 * fVar11 - fVar31 * fVar91;
      fVar160 = fVar61 * fVar11 - fVar31 * fVar93;
      fVar162 = fVar62 * fVar11 - fVar31 * fVar95;
      fVar164 = fVar65 * fVar11 - fVar31 * fVar97;
      fVar166 = fVar68 * fVar11 - fVar31 * fVar99;
      fVar135 = fVar135 + fVar135;
      fVar138 = fVar138 + fVar138;
      fVar139 = fVar139 + fVar139;
      fVar140 = fVar140 + fVar140;
      fVar141 = fVar141 + fVar141;
      fVar143 = fVar143 + fVar143;
      fVar144 = fVar144 + fVar144;
      fVar145 = fVar145 + fVar145;
      fVar149 = fVar149 + fVar149;
      fVar154 = fVar154 + fVar154;
      fVar156 = fVar156 + fVar156;
      fVar158 = fVar158 + fVar158;
      fVar160 = fVar160 + fVar160;
      fVar162 = fVar162 + fVar162;
      fVar164 = fVar164 + fVar164;
      fVar166 = fVar166 + fVar166;
      fVar109 = fVar109 + fVar109;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar42 = param_8[4];
      fVar10 = param_8[5];
      fVar29 = param_8[6];
      auVar112._0_4_ = fVar42 + (fVar121 * fVar109 - fVar149 * fVar11) + fVar101 * fVar135 + fVar54;
      auVar112._4_4_ = fVar42 + (fVar121 * fVar114 - fVar154 * fVar11) + fVar101 * fVar138 + fVar58;
      auVar112._8_4_ = fVar42 + (fVar121 * fVar115 - fVar156 * fVar11) + fVar101 * fVar139 + fVar59;
      auVar112._12_4_ = fVar42 + (fVar121 * fVar116 - fVar158 * fVar11) + fVar101 * fVar140 + fVar60
      ;
      auVar112._16_4_ = fVar42 + (fVar121 * fVar117 - fVar160 * fVar11) + fVar101 * fVar141 + fVar61
      ;
      auVar112._20_4_ = fVar42 + (fVar121 * fVar118 - fVar162 * fVar11) + fVar101 * fVar143 + fVar62
      ;
      auVar112._24_4_ = fVar42 + (fVar121 * fVar119 - fVar164 * fVar11) + fVar101 * fVar144 + fVar65
      ;
      auVar112._28_4_ = fVar42 + (fVar121 * fVar120 - fVar166 * fVar11) + fVar101 * fVar145 + fVar68
      ;
      auVar110._0_4_ = fVar10 + (fVar11 * fVar135 - fVar31 * fVar109) + fVar101 * fVar149 + fVar43;
      auVar110._4_4_ = fVar10 + (fVar11 * fVar138 - fVar31 * fVar114) + fVar101 * fVar154 + fVar47;
      auVar110._8_4_ = fVar10 + (fVar11 * fVar139 - fVar31 * fVar115) + fVar101 * fVar156 + fVar48;
      auVar110._12_4_ = fVar10 + (fVar11 * fVar140 - fVar31 * fVar116) + fVar101 * fVar158 + fVar49;
      auVar110._16_4_ = fVar10 + (fVar11 * fVar141 - fVar31 * fVar117) + fVar101 * fVar160 + fVar50;
      auVar110._20_4_ = fVar10 + (fVar11 * fVar143 - fVar31 * fVar118) + fVar101 * fVar162 + fVar51;
      auVar110._24_4_ = fVar10 + (fVar11 * fVar144 - fVar31 * fVar119) + fVar101 * fVar164 + fVar52;
      auVar110._28_4_ = fVar10 + (fVar11 * fVar145 - fVar31 * fVar120) + fVar101 * fVar166 + fVar53;
      auVar170._0_4_ = fVar29 + (fVar31 * fVar149 - fVar121 * fVar135) + fVar101 * fVar109 + fVar71;
      auVar170._4_4_ = fVar29 + (fVar31 * fVar154 - fVar121 * fVar138) + fVar101 * fVar114 + fVar87;
      auVar170._8_4_ = fVar29 + (fVar31 * fVar156 - fVar121 * fVar139) + fVar101 * fVar115 + fVar89;
      auVar170._12_4_ = fVar29 + (fVar31 * fVar158 - fVar121 * fVar140) + fVar101 * fVar116 + fVar91
      ;
      auVar170._16_4_ = fVar29 + (fVar31 * fVar160 - fVar121 * fVar141) + fVar101 * fVar117 + fVar93
      ;
      auVar170._20_4_ = fVar29 + (fVar31 * fVar162 - fVar121 * fVar143) + fVar101 * fVar118 + fVar95
      ;
      auVar170._24_4_ = fVar29 + (fVar31 * fVar164 - fVar121 * fVar144) + fVar101 * fVar119 + fVar97
      ;
      auVar170._28_4_ = fVar29 + (fVar31 * fVar166 - fVar121 * fVar145) + fVar101 * fVar120 + fVar99
      ;
      uVar2 = *param_9;
      auVar14._4_4_ = uVar2;
      auVar14._0_4_ = uVar2;
      auVar14._8_4_ = uVar2;
      auVar14._12_4_ = uVar2;
      auVar14._16_4_ = uVar2;
      auVar14._20_4_ = uVar2;
      auVar14._24_4_ = uVar2;
      auVar14._28_4_ = uVar2;
      auVar55 = vsubps_avx(auVar112,auVar14);
      uVar2 = param_9[1];
      auVar15._4_4_ = uVar2;
      auVar15._0_4_ = uVar2;
      auVar15._8_4_ = uVar2;
      auVar15._12_4_ = uVar2;
      auVar15._16_4_ = uVar2;
      auVar15._20_4_ = uVar2;
      auVar15._24_4_ = uVar2;
      auVar15._28_4_ = uVar2;
      auVar17 = vsubps_avx(auVar110,auVar15);
      uVar2 = param_9[2];
      auVar16._4_4_ = uVar2;
      auVar16._0_4_ = uVar2;
      auVar16._8_4_ = uVar2;
      auVar16._12_4_ = uVar2;
      auVar16._16_4_ = uVar2;
      auVar16._20_4_ = uVar2;
      auVar16._24_4_ = uVar2;
      auVar16._28_4_ = uVar2;
      auVar38 = vsubps_avx(auVar170,auVar16);
      auVar74 = *(undefined1 (*) [32])(param_6 + (uVar7 & 0xffffffff));
      auVar73 = vunpcklps_avx(auVar55,auVar17);
      auVar168 = vunpcklps_avx(auVar38,auVar74);
      auVar112 = vunpcklpd_avx(auVar73,auVar168);
      auVar73 = vunpckhpd_avx(auVar73,auVar168);
      auVar181._16_16_ = auVar73._0_16_;
      auVar181._0_16_ = auVar112._0_16_;
      *(undefined1 (*) [32])(param_1 + uVar7 * 4) = auVar181;
      auVar74 = vunpckhps_avx(auVar38,auVar74);
      auVar168 = vunpckhps_avx(auVar55,auVar17);
      auVar3 = vunpcklpd_avx(auVar168,auVar74);
      auVar74 = vunpckhpd_avx(auVar168,auVar74);
      auVar182._16_16_ = auVar74._0_16_;
      auVar182._0_16_ = auVar3._0_16_;
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar7 * 4) = auVar182;
      auVar73 = vperm2f128_avx(auVar112,auVar73,0x31);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar7 * 4) = auVar73;
      auVar74 = vperm2f128_avx(auVar3,auVar74,0x31);
      *(undefined1 (*) [32])(param_1 + 0x60 + uVar7 * 4) = auVar74;
      auVar74._16_16_ = auVar17._0_16_;
      auVar74._0_16_ = auVar55._0_16_;
      auVar74 = vshufpd_avx(auVar55,auVar74,2);
      auVar73 = vpermps_avx2(auVar18,auVar38);
      auVar18 = vpermpd_avx2(auVar17,0xe9);
      auVar18 = vblendps_avx(auVar73,auVar18,7);
      auVar73 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar18);
      auVar74 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar74);
      auVar74 = vblendps_avx(auVar74,auVar73,0xa4);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar8 * 4) = auVar74;
      auVar74 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar18);
      auVar18 = vshufpd_avx(auVar55,auVar55,1);
      auVar18 = vblendps_avx(auVar74,auVar18,0x92);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar8 * 4) = auVar18;
      auVar74 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar17);
      auVar18 = vpermpd_avx2(auVar55,0xff);
      auVar18 = vblendps_avx(auVar74,auVar18,3);
      auVar18 = vblendps_avx(auVar18,auVar38,0xe0);
      auVar18 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar18);
      *(undefined1 (*) [32])(param_3 + lVar8 * 4) = auVar18;
      auVar112 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar152 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar110 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar18 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar74 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar8 * 4);
      auVar55 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar8 * 4);
      auVar17 = *(undefined1 (*) [32])(param_2 + lVar8 * 4);
      auVar38 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar55);
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar74);
      auVar38 = vblendps_avx(auVar73,auVar38,0x88);
      auVar73 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar55);
      auVar168 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar17);
      auVar73 = vblendps_avx(auVar168,auVar73,0x13);
      auVar168 = vperm2f128_avx(auVar38,auVar73,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      fVar169 = auVar38._0_4_ * fVar30;
      fVar171 = auVar38._4_4_ * fVar30;
      fVar172 = auVar38._8_4_ * fVar30;
      fVar173 = auVar38._12_4_ * fVar30;
      fVar174 = auVar73._0_4_ * fVar30;
      fVar175 = auVar73._4_4_ * fVar30;
      fVar176 = auVar73._8_4_ * fVar30;
      fVar177 = auVar73._12_4_ * fVar30;
      fVar180 = auVar168._0_4_ * fVar134;
      fVar183 = auVar168._4_4_ * fVar134;
      fVar184 = auVar168._8_4_ * fVar134;
      fVar185 = auVar168._12_4_ * fVar134;
      fVar186 = auVar168._16_4_ * fVar134;
      fVar187 = auVar168._20_4_ * fVar134;
      fVar188 = auVar168._24_4_ * fVar134;
      fVar189 = auVar168._28_4_ * fVar134;
      fVar72 = auVar74._0_4_ * fVar41;
      fVar88 = auVar74._4_4_ * fVar41;
      fVar90 = auVar74._8_4_ * fVar41;
      fVar92 = auVar74._12_4_ * fVar41;
      fVar94 = auVar74._16_4_ * fVar41;
      fVar96 = auVar74._20_4_ * fVar41;
      fVar98 = auVar74._24_4_ * fVar41;
      fVar100 = auVar74._28_4_ * fVar41;
      fVar43 = fVar180 * fVar31 - fVar169 * fVar121;
      fVar48 = fVar183 * fVar31 - fVar171 * fVar121;
      fVar50 = fVar184 * fVar31 - fVar172 * fVar121;
      fVar52 = fVar185 * fVar31 - fVar173 * fVar121;
      fVar54 = fVar186 * fVar31 - fVar174 * fVar121;
      fVar59 = fVar187 * fVar31 - fVar175 * fVar121;
      fVar61 = fVar188 * fVar31 - fVar176 * fVar121;
      fVar65 = fVar189 * fVar31 - fVar177 * fVar121;
      fVar68 = fVar72 * fVar121 - fVar180 * fVar11;
      fVar87 = fVar88 * fVar121 - fVar183 * fVar11;
      fVar91 = fVar90 * fVar121 - fVar184 * fVar11;
      fVar95 = fVar92 * fVar121 - fVar185 * fVar11;
      fVar99 = fVar94 * fVar121 - fVar186 * fVar11;
      fVar114 = fVar96 * fVar121 - fVar187 * fVar11;
      fVar116 = fVar98 * fVar121 - fVar188 * fVar11;
      fVar118 = fVar100 * fVar121 - fVar189 * fVar11;
      fVar144 = fVar169 * fVar11 - fVar31 * fVar72;
      fVar149 = fVar171 * fVar11 - fVar31 * fVar88;
      fVar156 = fVar172 * fVar11 - fVar31 * fVar90;
      fVar160 = fVar173 * fVar11 - fVar31 * fVar92;
      fVar164 = fVar174 * fVar11 - fVar31 * fVar94;
      fVar63 = fVar175 * fVar11 - fVar31 * fVar96;
      fVar66 = fVar176 * fVar11 - fVar31 * fVar98;
      fVar69 = fVar177 * fVar11 - fVar31 * fVar100;
      fVar68 = fVar68 + fVar68;
      fVar87 = fVar87 + fVar87;
      fVar91 = fVar91 + fVar91;
      fVar95 = fVar95 + fVar95;
      fVar99 = fVar99 + fVar99;
      fVar114 = fVar114 + fVar114;
      fVar116 = fVar116 + fVar116;
      fVar118 = fVar118 + fVar118;
      fVar144 = fVar144 + fVar144;
      fVar149 = fVar149 + fVar149;
      fVar156 = fVar156 + fVar156;
      fVar160 = fVar160 + fVar160;
      fVar164 = fVar164 + fVar164;
      fVar63 = fVar63 + fVar63;
      fVar66 = fVar66 + fVar66;
      fVar69 = fVar69 + fVar69;
      fVar43 = fVar43 + fVar43;
      fVar48 = fVar48 + fVar48;
      fVar50 = fVar50 + fVar50;
      fVar52 = fVar52 + fVar52;
      fVar54 = fVar54 + fVar54;
      fVar59 = fVar59 + fVar59;
      fVar61 = fVar61 + fVar61;
      fVar65 = fVar65 + fVar65;
      auVar74 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar8 * 4);
      auVar55 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar8 * 4);
      auVar17 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar55);
      auVar38 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar74);
      auVar38 = vblendps_avx(auVar38,auVar17,0x88);
      auVar17 = *(undefined1 (*) [32])(param_4 + lVar8 * 4);
      auVar73 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar55);
      auVar168 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar17);
      auVar73 = vblendps_avx(auVar168,auVar73,0x13);
      auVar168 = vperm2f128_avx(auVar38,auVar73,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      fVar47 = auVar38._0_4_ * fVar30;
      fVar49 = auVar38._4_4_ * fVar30;
      fVar51 = auVar38._8_4_ * fVar30;
      fVar53 = auVar38._12_4_ * fVar30;
      fVar58 = auVar73._0_4_ * fVar30;
      fVar60 = auVar73._4_4_ * fVar30;
      fVar62 = auVar73._8_4_ * fVar30;
      fVar30 = auVar73._12_4_ * fVar30;
      fVar122 = auVar168._0_4_ * fVar134;
      fVar127 = auVar168._4_4_ * fVar134;
      fVar128 = auVar168._8_4_ * fVar134;
      fVar129 = auVar168._12_4_ * fVar134;
      fVar130 = auVar168._16_4_ * fVar134;
      fVar132 = auVar168._20_4_ * fVar134;
      fVar133 = auVar168._24_4_ * fVar134;
      fVar134 = auVar168._28_4_ * fVar134;
      fVar71 = auVar74._0_4_ * fVar41;
      fVar89 = auVar74._4_4_ * fVar41;
      fVar93 = auVar74._8_4_ * fVar41;
      fVar97 = auVar74._12_4_ * fVar41;
      fVar109 = auVar74._16_4_ * fVar41;
      fVar115 = auVar74._20_4_ * fVar41;
      fVar117 = auVar74._24_4_ * fVar41;
      fVar41 = auVar74._28_4_ * fVar41;
      fVar119 = fVar122 * fVar31 - fVar121 * fVar47;
      fVar120 = fVar127 * fVar31 - fVar121 * fVar49;
      fVar135 = fVar128 * fVar31 - fVar121 * fVar51;
      fVar138 = fVar129 * fVar31 - fVar121 * fVar53;
      fVar139 = fVar130 * fVar31 - fVar121 * fVar58;
      fVar140 = fVar132 * fVar31 - fVar121 * fVar60;
      fVar141 = fVar133 * fVar31 - fVar121 * fVar62;
      fVar143 = fVar134 * fVar31 - fVar121 * fVar30;
      fVar145 = fVar71 * fVar121 - fVar122 * fVar11;
      fVar154 = fVar89 * fVar121 - fVar127 * fVar11;
      fVar158 = fVar93 * fVar121 - fVar128 * fVar11;
      fVar162 = fVar97 * fVar121 - fVar129 * fVar11;
      fVar166 = fVar109 * fVar121 - fVar130 * fVar11;
      fVar64 = fVar115 * fVar121 - fVar132 * fVar11;
      fVar67 = fVar117 * fVar121 - fVar133 * fVar11;
      fVar70 = fVar41 * fVar121 - fVar134 * fVar11;
      fVar150 = fVar47 * fVar11 - fVar31 * fVar71;
      fVar155 = fVar49 * fVar11 - fVar31 * fVar89;
      fVar157 = fVar51 * fVar11 - fVar31 * fVar93;
      fVar159 = fVar53 * fVar11 - fVar31 * fVar97;
      fVar161 = fVar58 * fVar11 - fVar31 * fVar109;
      fVar163 = fVar60 * fVar11 - fVar31 * fVar115;
      fVar165 = fVar62 * fVar11 - fVar31 * fVar117;
      fVar167 = fVar30 * fVar11 - fVar31 * fVar41;
      fVar145 = fVar145 + fVar145;
      fVar154 = fVar154 + fVar154;
      fVar158 = fVar158 + fVar158;
      fVar162 = fVar162 + fVar162;
      fVar166 = fVar166 + fVar166;
      fVar64 = fVar64 + fVar64;
      fVar67 = fVar67 + fVar67;
      fVar70 = fVar70 + fVar70;
      fVar150 = fVar150 + fVar150;
      fVar155 = fVar155 + fVar155;
      fVar157 = fVar157 + fVar157;
      fVar159 = fVar159 + fVar159;
      fVar161 = fVar161 + fVar161;
      fVar163 = fVar163 + fVar163;
      fVar165 = fVar165 + fVar165;
      fVar167 = fVar167 + fVar167;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar135 = fVar135 + fVar135;
      fVar138 = fVar138 + fVar138;
      fVar139 = fVar139 + fVar139;
      fVar140 = fVar140 + fVar140;
      fVar141 = fVar141 + fVar141;
      fVar143 = fVar143 + fVar143;
      auVar168._0_4_ = (fVar31 * fVar144 - fVar121 * fVar68) + fVar101 * fVar43 + fVar72;
      auVar168._4_4_ = (fVar31 * fVar149 - fVar121 * fVar87) + fVar101 * fVar48 + fVar88;
      auVar168._8_4_ = (fVar31 * fVar156 - fVar121 * fVar91) + fVar101 * fVar50 + fVar90;
      auVar168._12_4_ = (fVar31 * fVar160 - fVar121 * fVar95) + fVar101 * fVar52 + fVar92;
      auVar168._16_4_ = (fVar31 * fVar164 - fVar121 * fVar99) + fVar101 * fVar54 + fVar94;
      auVar168._20_4_ = (fVar31 * fVar63 - fVar121 * fVar114) + fVar101 * fVar59 + fVar96;
      auVar168._24_4_ = (fVar31 * fVar66 - fVar121 * fVar116) + fVar101 * fVar61 + fVar98;
      auVar168._28_4_ = (fVar31 * fVar69 - fVar121 * fVar118) + fVar101 * fVar65 + fVar100;
      auVar38._0_4_ = fVar101 * fVar68 + fVar169 + (fVar121 * fVar43 - fVar11 * fVar144);
      auVar38._4_4_ = fVar101 * fVar87 + fVar171 + (fVar121 * fVar48 - fVar11 * fVar149);
      auVar38._8_4_ = fVar101 * fVar91 + fVar172 + (fVar121 * fVar50 - fVar11 * fVar156);
      auVar38._12_4_ = fVar101 * fVar95 + fVar173 + (fVar121 * fVar52 - fVar11 * fVar160);
      auVar38._16_4_ = fVar101 * fVar99 + fVar174 + (fVar121 * fVar54 - fVar11 * fVar164);
      auVar38._20_4_ = fVar101 * fVar114 + fVar175 + (fVar121 * fVar59 - fVar11 * fVar63);
      auVar38._24_4_ = fVar101 * fVar116 + fVar176 + (fVar121 * fVar61 - fVar11 * fVar66);
      auVar38._28_4_ = fVar101 * fVar118 + fVar177 + (fVar121 * fVar65 - fVar11 * fVar69);
      auVar73._0_4_ = fVar101 * fVar144 + fVar180 + (fVar11 * fVar68 - fVar31 * fVar43);
      auVar73._4_4_ = fVar101 * fVar149 + fVar183 + (fVar11 * fVar87 - fVar31 * fVar48);
      auVar73._8_4_ = fVar101 * fVar156 + fVar184 + (fVar11 * fVar91 - fVar31 * fVar50);
      auVar73._12_4_ = fVar101 * fVar160 + fVar185 + (fVar11 * fVar95 - fVar31 * fVar52);
      auVar73._16_4_ = fVar101 * fVar164 + fVar186 + (fVar11 * fVar99 - fVar31 * fVar54);
      auVar73._20_4_ = fVar101 * fVar63 + fVar187 + (fVar11 * fVar114 - fVar31 * fVar59);
      auVar73._24_4_ = fVar101 * fVar66 + fVar188 + (fVar11 * fVar116 - fVar31 * fVar61);
      auVar73._28_4_ = fVar101 * fVar69 + fVar189 + (fVar11 * fVar118 - fVar31 * fVar65);
      auVar17._0_4_ = (fVar121 * fVar119 - fVar150 * fVar11) + fVar101 * fVar145 + fVar47 + fVar42;
      auVar17._4_4_ = (fVar121 * fVar120 - fVar155 * fVar11) + fVar101 * fVar154 + fVar49 + fVar42;
      auVar17._8_4_ = (fVar121 * fVar135 - fVar157 * fVar11) + fVar101 * fVar158 + fVar51 + fVar42;
      auVar17._12_4_ = (fVar121 * fVar138 - fVar159 * fVar11) + fVar101 * fVar162 + fVar53 + fVar42;
      auVar17._16_4_ = (fVar121 * fVar139 - fVar161 * fVar11) + fVar101 * fVar166 + fVar58 + fVar42;
      auVar17._20_4_ = (fVar121 * fVar140 - fVar163 * fVar11) + fVar101 * fVar64 + fVar60 + fVar42;
      auVar17._24_4_ = (fVar121 * fVar141 - fVar165 * fVar11) + fVar101 * fVar67 + fVar62 + fVar42;
      auVar17._28_4_ = (fVar121 * fVar143 - fVar167 * fVar11) + fVar101 * fVar70 + fVar30 + fVar42;
      auVar45._0_4_ = fVar101 * fVar150 + fVar122 + (fVar11 * fVar145 - fVar31 * fVar119) + fVar10;
      auVar45._4_4_ = fVar101 * fVar155 + fVar127 + (fVar11 * fVar154 - fVar31 * fVar120) + fVar10;
      auVar45._8_4_ = fVar101 * fVar157 + fVar128 + (fVar11 * fVar158 - fVar31 * fVar135) + fVar10;
      auVar45._12_4_ = fVar101 * fVar159 + fVar129 + (fVar11 * fVar162 - fVar31 * fVar138) + fVar10;
      auVar45._16_4_ = fVar101 * fVar161 + fVar130 + (fVar11 * fVar166 - fVar31 * fVar139) + fVar10;
      auVar45._20_4_ = fVar101 * fVar163 + fVar132 + (fVar11 * fVar64 - fVar31 * fVar140) + fVar10;
      auVar45._24_4_ = fVar101 * fVar165 + fVar133 + (fVar11 * fVar67 - fVar31 * fVar141) + fVar10;
      auVar45._28_4_ = fVar101 * fVar167 + fVar134 + (fVar11 * fVar70 - fVar31 * fVar143) + fVar10;
      auVar32._0_4_ = fVar119 * fVar101 + fVar71 + (fVar31 * fVar150 - fVar121 * fVar145) + fVar29;
      auVar32._4_4_ = fVar120 * fVar101 + fVar89 + (fVar31 * fVar155 - fVar121 * fVar154) + fVar29;
      auVar32._8_4_ = fVar135 * fVar101 + fVar93 + (fVar31 * fVar157 - fVar121 * fVar158) + fVar29;
      auVar32._12_4_ = fVar138 * fVar101 + fVar97 + (fVar31 * fVar159 - fVar121 * fVar162) + fVar29;
      auVar32._16_4_ = fVar139 * fVar101 + fVar109 + (fVar31 * fVar161 - fVar121 * fVar166) + fVar29
      ;
      auVar32._20_4_ = fVar140 * fVar101 + fVar115 + (fVar31 * fVar163 - fVar121 * fVar64) + fVar29;
      auVar32._24_4_ = fVar141 * fVar101 + fVar117 + (fVar31 * fVar165 - fVar121 * fVar67) + fVar29;
      auVar32._28_4_ = fVar143 * fVar101 + fVar41 + (fVar31 * fVar167 - fVar121 * fVar70) + fVar29;
      auVar14 = vsubps_avx(auVar17,auVar14);
      auVar15 = vsubps_avx(auVar45,auVar15);
      auVar16 = vsubps_avx(auVar32,auVar16);
      auVar33._16_16_ = auVar15._0_16_;
      auVar33._0_16_ = auVar14._0_16_;
      auVar55 = vshufpd_avx(auVar14,auVar33,2);
      auVar17 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar16);
      auVar74 = vpermpd_avx2(auVar15,0xe9);
      auVar74 = vblendps_avx(auVar17,auVar74,7);
      auVar17 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar55);
      auVar55 = vblendps_avx(auVar55,auVar17,0xa4);
      *(undefined1 (*) [32])(param_4 + -0x40 + lVar8 * 4) = auVar55;
      auVar55 = vpermps_avx2(auVar112,auVar74);
      auVar74 = vshufpd_avx(auVar14,auVar14,1);
      auVar74 = vblendps_avx(auVar55,auVar74,0x92);
      *(undefined1 (*) [32])(param_4 + -0x20 + lVar8 * 4) = auVar74;
      auVar33 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar55 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar15);
      auVar74 = vpermpd_avx2(auVar14,0xff);
      auVar74 = vblendps_avx(auVar55,auVar74,3);
      auVar74 = vblendps_avx(auVar74,auVar16,0xe0);
      auVar74 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar74);
      *(undefined1 (*) [32])(param_4 + lVar8 * 4) = auVar74;
      auVar74 = *(undefined1 (*) [32])(param_7 + -0x40 + lVar8 * 4);
      auVar55 = *(undefined1 (*) [32])(param_7 + -0x20 + lVar8 * 4);
      auVar17 = *(undefined1 (*) [32])(param_7 + lVar8 * 4);
      auVar112 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar55);
      auVar3 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar74);
      auVar112 = vblendps_avx(auVar3,auVar112,0x88);
      auVar3 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                            auVar55);
      auVar32 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar17);
      auVar3 = vblendps_avx(auVar32,auVar3,0x13);
      auVar151._16_16_ = auVar3._0_16_;
      auVar151._0_16_ = auVar112._0_16_;
      auVar112 = vperm2f128_avx(auVar112,auVar3,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      auVar55 = vsubps_avx(auVar151,auVar14);
      auVar3._4_4_ = param_10;
      auVar3._0_4_ = param_10;
      auVar3._8_4_ = param_10;
      auVar3._12_4_ = param_10;
      auVar3._16_4_ = param_10;
      auVar3._20_4_ = param_10;
      auVar3._24_4_ = param_10;
      auVar3._28_4_ = param_10;
      auVar17 = vdivps_avx(auVar55,auVar3);
      auVar55 = vsubps_avx(auVar112,auVar15);
      auVar112 = vdivps_avx(auVar55,auVar3);
      auVar74 = vsubps_avx(auVar74,auVar16);
      auVar3 = vdivps_avx(auVar74,auVar3);
      auVar34._16_16_ = auVar112._0_16_;
      auVar34._0_16_ = auVar17._0_16_;
      auVar55 = vshufpd_avx(auVar17,auVar34,2);
      auVar14 = vpermps_avx2(auVar18,auVar3);
      auVar74 = vpermpd_avx2(auVar112,0xe9);
      auVar74 = vblendps_avx(auVar14,auVar74,7);
      auVar14 = vpermps_avx2(auVar110,auVar74);
      auVar55 = vpermps_avx2(auVar152,auVar55);
      auVar55 = vblendps_avx(auVar55,auVar14,0xa4);
      *(undefined1 (*) [32])(param_5 + -0x40 + lVar8 * 4) = auVar55;
      auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar74);
      auVar74 = vshufpd_avx(auVar17,auVar17,1);
      auVar74 = vblendps_avx(auVar55,auVar74,0x92);
      *(undefined1 (*) [32])(param_5 + -0x20 + lVar8 * 4) = auVar74;
      auVar55 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar112);
      auVar74 = vpermpd_avx2(auVar17,0xff);
      auVar74 = vblendps_avx(auVar55,auVar74,3);
      auVar74 = vblendps_avx(auVar74,auVar3,0xe0);
      auVar74 = vpermps_avx2(auVar33,auVar74);
      *(undefined1 (*) [32])(param_5 + lVar8 * 4) = auVar74;
      auVar74 = vsubps_avx(auVar38,auVar17);
      auVar55 = vsubps_avx(auVar73,auVar112);
      auVar14 = vsubps_avx(auVar168,auVar3);
      fVar30 = auVar55._0_4_;
      fVar134 = auVar55._4_4_;
      fVar41 = auVar55._8_4_;
      fVar101 = auVar55._12_4_;
      fVar121 = auVar55._16_4_;
      fVar11 = auVar55._20_4_;
      fVar31 = auVar55._24_4_;
      fVar42 = auVar55._28_4_;
      fVar10 = auVar74._0_4_;
      fVar29 = auVar74._4_4_;
      fVar43 = auVar74._8_4_;
      fVar47 = auVar74._12_4_;
      fVar48 = auVar74._16_4_;
      fVar49 = auVar74._20_4_;
      fVar50 = auVar74._24_4_;
      fVar51 = auVar74._28_4_;
      fVar52 = auVar14._0_4_;
      auVar152._0_4_ = fVar52 * fVar52 + fVar10 * fVar10 + fVar30 * fVar30;
      fVar53 = auVar14._4_4_;
      auVar152._4_4_ = fVar53 * fVar53 + fVar29 * fVar29 + fVar134 * fVar134;
      fVar54 = auVar14._8_4_;
      auVar152._8_4_ = fVar54 * fVar54 + fVar43 * fVar43 + fVar41 * fVar41;
      fVar58 = auVar14._12_4_;
      auVar152._12_4_ = fVar58 * fVar58 + fVar47 * fVar47 + fVar101 * fVar101;
      fVar59 = auVar14._16_4_;
      auVar152._16_4_ = fVar59 * fVar59 + fVar48 * fVar48 + fVar121 * fVar121;
      fVar60 = auVar14._20_4_;
      auVar152._20_4_ = fVar60 * fVar60 + fVar49 * fVar49 + fVar11 * fVar11;
      fVar61 = auVar14._24_4_;
      auVar152._24_4_ = fVar61 * fVar61 + fVar50 * fVar50 + fVar31 * fVar31;
      fVar62 = auVar14._28_4_;
      auVar152._28_4_ = fVar62 * fVar62 + fVar51 * fVar51 + fVar42 * fVar42;
      auVar55._4_4_ = param_12;
      auVar55._0_4_ = param_12;
      auVar55._8_4_ = param_12;
      auVar55._12_4_ = param_12;
      auVar55._16_4_ = param_12;
      auVar55._20_4_ = param_12;
      auVar55._24_4_ = param_12;
      auVar55._28_4_ = param_12;
      auVar74 = vcmpps_avx(auVar55,auVar152,1);
      if ((((((((SUB321(auVar74 >> 0x1f,0) & 1) != 0 || (SUB321(auVar74 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar74 >> 0x5f,0) & 1) != 0) || SUB321(auVar74 >> 0x7f,0) != '\0') ||
            (SUB321(auVar74 >> 0x9f,0) & 1) != 0) || SUB321(auVar74 >> 0xbf,0) != '\0') ||
          (SUB321(auVar74 >> 0xdf,0) & 1) != 0) || auVar74[0x1f] < '\0') {
        auVar55 = vdivps_avx(auVar55,auVar152);
        auVar55 = vsqrtps_avx(auVar55);
        fVar65 = auVar55._0_4_;
        auVar103._0_4_ = fVar65 * fVar10 + auVar17._0_4_;
        fVar10 = auVar55._4_4_;
        auVar103._4_4_ = fVar10 * fVar29 + auVar17._4_4_;
        fVar29 = auVar55._8_4_;
        auVar103._8_4_ = fVar29 * fVar43 + auVar17._8_4_;
        fVar43 = auVar55._12_4_;
        auVar103._12_4_ = fVar43 * fVar47 + auVar17._12_4_;
        fVar47 = auVar55._16_4_;
        auVar103._16_4_ = fVar47 * fVar48 + auVar17._16_4_;
        fVar48 = auVar55._20_4_;
        auVar103._20_4_ = fVar48 * fVar49 + auVar17._20_4_;
        fVar49 = auVar55._24_4_;
        auVar103._24_4_ = fVar49 * fVar50 + auVar17._24_4_;
        fVar50 = auVar55._28_4_;
        auVar103._28_4_ = fVar50 * fVar51 + auVar17._28_4_;
        auVar124._0_4_ = fVar65 * fVar30 + auVar112._0_4_;
        auVar124._4_4_ = fVar10 * fVar134 + auVar112._4_4_;
        auVar124._8_4_ = fVar29 * fVar41 + auVar112._8_4_;
        auVar124._12_4_ = fVar43 * fVar101 + auVar112._12_4_;
        auVar124._16_4_ = fVar47 * fVar121 + auVar112._16_4_;
        auVar124._20_4_ = fVar48 * fVar11 + auVar112._20_4_;
        auVar124._24_4_ = fVar49 * fVar31 + auVar112._24_4_;
        auVar124._28_4_ = fVar50 * fVar42 + auVar112._28_4_;
        auVar137._0_4_ = fVar65 * fVar52 + auVar3._0_4_;
        auVar137._4_4_ = fVar10 * fVar53 + auVar3._4_4_;
        auVar137._8_4_ = fVar29 * fVar54 + auVar3._8_4_;
        auVar137._12_4_ = fVar43 * fVar58 + auVar3._12_4_;
        auVar137._16_4_ = fVar47 * fVar59 + auVar3._16_4_;
        auVar137._20_4_ = fVar48 * fVar60 + auVar3._20_4_;
        auVar137._24_4_ = fVar49 * fVar61 + auVar3._24_4_;
        auVar137._28_4_ = fVar50 * fVar62 + auVar3._28_4_;
        auVar38 = vmaskmovps_avx(auVar74,auVar103);
        auVar73 = vmaskmovps_avx(auVar74,auVar124);
        auVar168 = vmaskmovps_avx(auVar74,auVar137);
      }
      auVar12._16_16_ = auVar73._0_16_;
      auVar12._0_16_ = auVar38._0_16_;
      auVar55 = vshufpd_avx(auVar38,auVar12,2);
      auVar17 = vpermps_avx2(auVar18,auVar168);
      auVar74 = vpermpd_avx2(auVar73,0xe9);
      auVar74 = vblendps_avx(auVar17,auVar74,7);
      auVar44._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar44._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar17 = vpermps_avx2(auVar44,auVar74);
      auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar55);
      auVar55 = vblendps_avx(auVar55,auVar17,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar8 * 4) = auVar55;
      auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar74);
      auVar74 = vshufpd_avx(auVar38,auVar38,1);
      auVar74 = vblendps_avx(auVar55,auVar74,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar8 * 4) = auVar74;
      auVar13._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar13._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar55 = vpermps_avx2(auVar13,auVar73);
      auVar74 = vpermpd_avx2(auVar38,0xff);
      auVar74 = vblendps_avx(auVar55,auVar74,3);
      auVar74 = vblendps_avx(auVar74,auVar168,0xe0);
      auVar74 = vpermps_avx2(auVar33,auVar74);
      *(undefined1 (*) [32])(param_2 + lVar8 * 4) = auVar74;
      uVar7 = uVar7 + 0x20;
      lVar8 = lVar8 + 0x18;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)(uVar6 & 0xfffffff8));
  }
  if ((int)uVar9 < (int)param_11) {
    auVar18._4_4_ = uVar9;
    auVar18._0_4_ = uVar9;
    auVar18._8_4_ = uVar9;
    auVar18._12_4_ = uVar9;
    auVar18._16_4_ = uVar9;
    auVar18._20_4_ = uVar9;
    auVar18._24_4_ = uVar9;
    auVar18._28_4_ = uVar9;
    auVar18 = vpor_avx2(auVar18,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar35._4_4_ = param_11;
    auVar35._0_4_ = param_11;
    auVar35._8_4_ = param_11;
    auVar35._12_4_ = param_11;
    auVar35._16_4_ = param_11;
    auVar35._20_4_ = param_11;
    auVar35._24_4_ = param_11;
    auVar35._28_4_ = param_11;
    auVar18 = vpcmpgtd_avx2(auVar35,auVar18);
    uVar7 = (ulonglong)uVar9;
    pauVar1 = (undefined1 (*) [32])(param_3 + uVar7 * 0xc);
    uVar6 = vmovmskps_avx(auVar18);
    if (uVar6 == 0xff) {
      auVar74 = pauVar1[1];
      auVar55 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar74);
      auVar17 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar55 = vblendps_avx(auVar17,auVar55,0x88);
      auVar17 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar74);
      auVar38 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar17 = vblendps_avx(auVar38,auVar17,0x13);
      auVar19._16_16_ = auVar17._0_16_;
      auVar19._0_16_ = auVar55._0_16_;
      auVar55 = vperm2f128_avx(auVar55,auVar17,0x31);
      auVar74 = vblendps_avx(auVar74,*pauVar1,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar75._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar75._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar17 = vpermps_avx2(auVar75,pauVar1[2]);
      auVar74 = vblendps_avx(auVar74,auVar17,0xe0);
    }
    else {
      auVar19 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
      auVar55 = vgatherdps(ZEXT832(0),auVar18);
      auVar74 = vgatherdps(ZEXT832(0),auVar18);
    }
    pauVar4 = (undefined1 (*) [32])(param_1 + uVar7 * 0x10);
    cVar5 = (char)uVar6;
    fVar31 = param_8[8];
    fVar52 = fVar31 * auVar19._0_4_;
    fVar53 = fVar31 * auVar19._4_4_;
    fVar54 = fVar31 * auVar19._8_4_;
    fVar58 = fVar31 * auVar19._12_4_;
    fVar59 = fVar31 * auVar19._16_4_;
    fVar60 = fVar31 * auVar19._20_4_;
    fVar61 = fVar31 * auVar19._24_4_;
    fVar62 = fVar31 * auVar19._28_4_;
    fVar42 = param_8[9];
    fVar10 = fVar42 * auVar55._0_4_;
    fVar29 = fVar42 * auVar55._4_4_;
    fVar43 = fVar42 * auVar55._8_4_;
    fVar47 = fVar42 * auVar55._12_4_;
    fVar48 = fVar42 * auVar55._16_4_;
    fVar49 = fVar42 * auVar55._20_4_;
    fVar50 = fVar42 * auVar55._24_4_;
    fVar51 = fVar42 * auVar55._28_4_;
    fVar30 = param_8[10];
    fVar65 = auVar74._0_4_ * fVar30;
    fVar68 = auVar74._4_4_ * fVar30;
    fVar71 = auVar74._8_4_ * fVar30;
    fVar87 = auVar74._12_4_ * fVar30;
    fVar89 = auVar74._16_4_ * fVar30;
    fVar91 = auVar74._20_4_ * fVar30;
    fVar93 = auVar74._24_4_ * fVar30;
    fVar95 = auVar74._28_4_ * fVar30;
    fVar134 = param_8[3];
    fVar41 = param_8[1];
    fVar101 = param_8[2];
    fVar121 = *param_8;
    fVar97 = fVar10 * fVar121 - fVar52 * fVar41;
    fVar99 = fVar29 * fVar121 - fVar53 * fVar41;
    fVar109 = fVar43 * fVar121 - fVar54 * fVar41;
    fVar114 = fVar47 * fVar121 - fVar58 * fVar41;
    fVar115 = fVar48 * fVar121 - fVar59 * fVar41;
    fVar116 = fVar49 * fVar121 - fVar60 * fVar41;
    fVar117 = fVar50 * fVar121 - fVar61 * fVar41;
    fVar118 = fVar51 * fVar121 - fVar62 * fVar41;
    fVar119 = fVar65 * fVar41 - fVar10 * fVar101;
    fVar120 = fVar68 * fVar41 - fVar29 * fVar101;
    fVar135 = fVar71 * fVar41 - fVar43 * fVar101;
    fVar138 = fVar87 * fVar41 - fVar47 * fVar101;
    fVar139 = fVar89 * fVar41 - fVar48 * fVar101;
    fVar140 = fVar91 * fVar41 - fVar49 * fVar101;
    fVar141 = fVar93 * fVar41 - fVar50 * fVar101;
    fVar143 = fVar95 * fVar41 - fVar51 * fVar101;
    fVar144 = fVar52 * fVar101 - fVar65 * fVar121;
    fVar145 = fVar53 * fVar101 - fVar68 * fVar121;
    fVar149 = fVar54 * fVar101 - fVar71 * fVar121;
    fVar154 = fVar58 * fVar101 - fVar87 * fVar121;
    fVar156 = fVar59 * fVar101 - fVar89 * fVar121;
    fVar158 = fVar60 * fVar101 - fVar91 * fVar121;
    fVar160 = fVar61 * fVar101 - fVar93 * fVar121;
    fVar162 = fVar62 * fVar101 - fVar95 * fVar121;
    fVar119 = fVar119 + fVar119;
    fVar120 = fVar120 + fVar120;
    fVar135 = fVar135 + fVar135;
    fVar138 = fVar138 + fVar138;
    fVar139 = fVar139 + fVar139;
    fVar140 = fVar140 + fVar140;
    fVar141 = fVar141 + fVar141;
    fVar143 = fVar143 + fVar143;
    fVar144 = fVar144 + fVar144;
    fVar145 = fVar145 + fVar145;
    fVar149 = fVar149 + fVar149;
    fVar154 = fVar154 + fVar154;
    fVar156 = fVar156 + fVar156;
    fVar158 = fVar158 + fVar158;
    fVar160 = fVar160 + fVar160;
    fVar162 = fVar162 + fVar162;
    fVar97 = fVar97 + fVar97;
    fVar99 = fVar99 + fVar99;
    fVar109 = fVar109 + fVar109;
    fVar114 = fVar114 + fVar114;
    fVar115 = fVar115 + fVar115;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    fVar118 = fVar118 + fVar118;
    fVar11 = param_8[4];
    auVar36._0_4_ = fVar11 + (fVar41 * fVar97 - fVar144 * fVar101) + fVar134 * fVar119 + fVar52;
    auVar36._4_4_ = fVar11 + (fVar41 * fVar99 - fVar145 * fVar101) + fVar134 * fVar120 + fVar53;
    auVar36._8_4_ = fVar11 + (fVar41 * fVar109 - fVar149 * fVar101) + fVar134 * fVar135 + fVar54;
    auVar36._12_4_ = fVar11 + (fVar41 * fVar114 - fVar154 * fVar101) + fVar134 * fVar138 + fVar58;
    auVar36._16_4_ = fVar11 + (fVar41 * fVar115 - fVar156 * fVar101) + fVar134 * fVar139 + fVar59;
    auVar36._20_4_ = fVar11 + (fVar41 * fVar116 - fVar158 * fVar101) + fVar134 * fVar140 + fVar60;
    auVar36._24_4_ = fVar11 + (fVar41 * fVar117 - fVar160 * fVar101) + fVar134 * fVar141 + fVar61;
    auVar36._28_4_ = fVar11 + (fVar41 * fVar118 - fVar162 * fVar101) + fVar134 * fVar143 + fVar62;
    fVar11 = param_8[5];
    auVar20._0_4_ = fVar11 + fVar134 * fVar144 + fVar10 + (fVar101 * fVar119 - fVar121 * fVar97);
    auVar20._4_4_ = fVar11 + fVar134 * fVar145 + fVar29 + (fVar101 * fVar120 - fVar121 * fVar99);
    auVar20._8_4_ = fVar11 + fVar134 * fVar149 + fVar43 + (fVar101 * fVar135 - fVar121 * fVar109);
    auVar20._12_4_ = fVar11 + fVar134 * fVar154 + fVar47 + (fVar101 * fVar138 - fVar121 * fVar114);
    auVar20._16_4_ = fVar11 + fVar134 * fVar156 + fVar48 + (fVar101 * fVar139 - fVar121 * fVar115);
    auVar20._20_4_ = fVar11 + fVar134 * fVar158 + fVar49 + (fVar101 * fVar140 - fVar121 * fVar116);
    auVar20._24_4_ = fVar11 + fVar134 * fVar160 + fVar50 + (fVar101 * fVar141 - fVar121 * fVar117);
    auVar20._28_4_ = fVar11 + fVar134 * fVar162 + fVar51 + (fVar101 * fVar143 - fVar121 * fVar118);
    fVar11 = param_8[6];
    auVar104._0_4_ = fVar11 + (fVar121 * fVar144 - fVar119 * fVar41) + fVar134 * fVar97 + fVar65;
    auVar104._4_4_ = fVar11 + (fVar121 * fVar145 - fVar120 * fVar41) + fVar134 * fVar99 + fVar68;
    auVar104._8_4_ = fVar11 + (fVar121 * fVar149 - fVar135 * fVar41) + fVar134 * fVar109 + fVar71;
    auVar104._12_4_ = fVar11 + (fVar121 * fVar154 - fVar138 * fVar41) + fVar134 * fVar114 + fVar87;
    auVar104._16_4_ = fVar11 + (fVar121 * fVar156 - fVar139 * fVar41) + fVar134 * fVar115 + fVar89;
    auVar104._20_4_ = fVar11 + (fVar121 * fVar158 - fVar140 * fVar41) + fVar134 * fVar116 + fVar91;
    auVar104._24_4_ = fVar11 + (fVar121 * fVar160 - fVar141 * fVar41) + fVar134 * fVar117 + fVar93;
    auVar104._28_4_ = fVar11 + (fVar121 * fVar162 - fVar143 * fVar41) + fVar134 * fVar118 + fVar95;
    uVar2 = *param_9;
    auVar125._4_4_ = uVar2;
    auVar125._0_4_ = uVar2;
    auVar125._8_4_ = uVar2;
    auVar125._12_4_ = uVar2;
    auVar125._16_4_ = uVar2;
    auVar125._20_4_ = uVar2;
    auVar125._24_4_ = uVar2;
    auVar125._28_4_ = uVar2;
    auVar74 = vsubps_avx(auVar36,auVar125);
    uVar2 = param_9[1];
    auVar37._4_4_ = uVar2;
    auVar37._0_4_ = uVar2;
    auVar37._8_4_ = uVar2;
    auVar37._12_4_ = uVar2;
    auVar37._16_4_ = uVar2;
    auVar37._20_4_ = uVar2;
    auVar37._24_4_ = uVar2;
    auVar37._28_4_ = uVar2;
    auVar55 = vsubps_avx(auVar20,auVar37);
    uVar2 = param_9[2];
    auVar21._4_4_ = uVar2;
    auVar21._0_4_ = uVar2;
    auVar21._8_4_ = uVar2;
    auVar21._12_4_ = uVar2;
    auVar21._16_4_ = uVar2;
    auVar21._20_4_ = uVar2;
    auVar21._24_4_ = uVar2;
    auVar21._28_4_ = uVar2;
    auVar17 = vsubps_avx(auVar104,auVar21);
    auVar38 = vmaskmovps_avx(auVar18,*(undefined1 (*) [32])(param_6 + (int)(uVar9 << 2)));
    auVar136 = auVar74._0_16_;
    auVar142 = auVar74._16_16_;
    auVar123 = auVar55._0_16_;
    if (cVar5 == -1) {
      auVar73 = vunpcklps_avx(auVar74,auVar55);
      auVar168 = vunpcklps_avx(auVar17,auVar38);
      auVar112 = vunpcklpd_avx(auVar73,auVar168);
      auVar73 = vunpckhpd_avx(auVar73,auVar168);
      auVar168 = vunpckhps_avx(auVar74,auVar55);
      auVar38 = vunpckhps_avx(auVar17,auVar38);
      auVar111._16_16_ = auVar73._0_16_;
      auVar111._0_16_ = auVar112._0_16_;
      *pauVar4 = auVar111;
      auVar3 = vunpcklpd_avx(auVar168,auVar38);
      auVar38 = vunpckhpd_avx(auVar168,auVar38);
      auVar76._16_16_ = auVar38._0_16_;
      auVar76._0_16_ = auVar3._0_16_;
      pauVar4[1] = auVar76;
      auVar73 = vperm2f128_avx(auVar112,auVar73,0x31);
      pauVar4[2] = auVar73;
      auVar38 = vperm2f128_avx(auVar3,auVar38,0x31);
      pauVar4[3] = auVar38;
      auVar23._16_16_ = auVar123;
      auVar23._0_16_ = auVar136;
      auVar73 = vshufpd_avx(auVar74,auVar23,2);
      auVar168 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar17);
      auVar38 = vpermpd_avx2(auVar55,0xe9);
      auVar38 = vblendps_avx(auVar168,auVar38,7);
      auVar56._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar56._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar168 = vpermps_avx2(auVar56,auVar38);
      auVar73 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar73);
      auVar73 = vblendps_avx(auVar73,auVar168,0xa4);
      *pauVar1 = auVar73;
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar38);
      auVar38 = vshufpd_avx(auVar74,auVar74,1);
      auVar38 = vblendps_avx(auVar73,auVar38,0x92);
      pauVar1[1] = auVar38;
      auVar24._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar24._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar55 = vpermps_avx2(auVar24,auVar55);
      auVar74 = vpermpd_avx2(auVar74,0xff);
      auVar74 = vblendps_avx(auVar55,auVar74,3);
      auVar74 = vblendps_avx(auVar74,auVar17,0xe0);
      auVar74 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar74);
      pauVar1[2] = auVar74;
      auVar74 = *(undefined1 (*) [32])(param_2 + uVar7 * 0xc);
      auVar55 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc);
      auVar17 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc);
      auVar38 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar55);
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar74);
      auVar38 = vblendps_avx(auVar73,auVar38,0x88);
      auVar73 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar55);
      auVar168 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar17);
      auVar73 = vblendps_avx(auVar168,auVar73,0x13);
      auVar22._16_16_ = auVar73._0_16_;
      auVar22._0_16_ = auVar38._0_16_;
      auVar38 = vperm2f128_avx(auVar38,auVar73,0x31);
      auVar74 = vblendps_avx(auVar55,auVar74,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar77._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar77._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar55 = vpermps_avx2(auVar77,auVar17);
      auVar74 = vblendps_avx(auVar74,auVar55,0xe0);
      fVar41 = param_8[1];
      fVar134 = param_8[3];
      fVar31 = param_8[8];
      fVar42 = param_8[9];
      fVar30 = param_8[10];
      fVar121 = *param_8;
      fVar101 = param_8[2];
    }
    else {
      auVar131 = auVar55._16_16_;
      auVar102 = auVar17._0_16_;
      auVar108 = auVar17._16_16_;
      auVar178 = auVar38._0_16_;
      auVar179 = auVar38._16_16_;
      if ((uVar6 & 1) != 0) {
        *(int *)*pauVar4 = auVar74._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(*pauVar4 + 0x10) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)pauVar4[1] = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(pauVar4[1] + 0x10) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)pauVar4[2] = auVar74._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(pauVar4[2] + 0x10) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)pauVar4[3] = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(pauVar4[3] + 0x10) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar4 + 4) = auVar55._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(*pauVar4 + 0x14) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(pauVar4[1] + 4) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(pauVar4[1] + 0x14) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 4) = auVar55._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)(pauVar4[2] + 0x14) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(pauVar4[3] + 4) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(pauVar4[3] + 0x14) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar4 + 8) = auVar17._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)(*pauVar4 + 0x18) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)(pauVar4[1] + 8) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(pauVar4[1] + 0x18) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 8) = auVar17._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(pauVar4[2] + 0x18) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)(pauVar4[3] + 8) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(pauVar4[3] + 0x18) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar4 + 0xc) = auVar38._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar178,1);
        *(undefined4 *)(*pauVar4 + 0x1c) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar178,2);
        *(undefined4 *)(pauVar4[1] + 0xc) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar178,3);
        *(undefined4 *)(pauVar4[1] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 0xc) = auVar38._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar179,1);
        *(undefined4 *)(pauVar4[2] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar179,2);
        *(undefined4 *)(pauVar4[3] + 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar179,3);
        *(undefined4 *)(pauVar4[3] + 0x1c) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)*pauVar1 = auVar74._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x10) = auVar74._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar1 + 4) = auVar55._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x14) = auVar55._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar1 + 8) = auVar17._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x18) = auVar17._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
      auVar22 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar74 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
    }
    fVar11 = fVar31 * auVar22._0_4_;
    fVar10 = fVar31 * auVar22._4_4_;
    fVar29 = fVar31 * auVar22._8_4_;
    fVar43 = fVar31 * auVar22._12_4_;
    fVar47 = fVar31 * auVar22._16_4_;
    fVar48 = fVar31 * auVar22._20_4_;
    fVar49 = fVar31 * auVar22._24_4_;
    fVar50 = fVar31 * auVar22._28_4_;
    fVar51 = fVar42 * auVar38._0_4_;
    fVar52 = fVar42 * auVar38._4_4_;
    fVar53 = fVar42 * auVar38._8_4_;
    fVar54 = fVar42 * auVar38._12_4_;
    fVar58 = fVar42 * auVar38._16_4_;
    fVar59 = fVar42 * auVar38._20_4_;
    fVar60 = fVar42 * auVar38._24_4_;
    fVar61 = fVar42 * auVar38._28_4_;
    fVar62 = fVar30 * auVar74._0_4_;
    fVar65 = fVar30 * auVar74._4_4_;
    fVar68 = fVar30 * auVar74._8_4_;
    fVar71 = fVar30 * auVar74._12_4_;
    fVar87 = fVar30 * auVar74._16_4_;
    fVar89 = fVar30 * auVar74._20_4_;
    fVar91 = fVar30 * auVar74._24_4_;
    fVar93 = fVar30 * auVar74._28_4_;
    fVar95 = fVar51 * fVar121 - fVar11 * fVar41;
    fVar97 = fVar52 * fVar121 - fVar10 * fVar41;
    fVar99 = fVar53 * fVar121 - fVar29 * fVar41;
    fVar109 = fVar54 * fVar121 - fVar43 * fVar41;
    fVar114 = fVar58 * fVar121 - fVar47 * fVar41;
    fVar115 = fVar59 * fVar121 - fVar48 * fVar41;
    fVar116 = fVar60 * fVar121 - fVar49 * fVar41;
    fVar117 = fVar61 * fVar121 - fVar50 * fVar41;
    fVar118 = fVar62 * fVar41 - fVar51 * fVar101;
    fVar119 = fVar65 * fVar41 - fVar52 * fVar101;
    fVar120 = fVar68 * fVar41 - fVar53 * fVar101;
    fVar135 = fVar71 * fVar41 - fVar54 * fVar101;
    fVar138 = fVar87 * fVar41 - fVar58 * fVar101;
    fVar139 = fVar89 * fVar41 - fVar59 * fVar101;
    fVar140 = fVar91 * fVar41 - fVar60 * fVar101;
    fVar141 = fVar93 * fVar41 - fVar61 * fVar101;
    fVar143 = fVar11 * fVar101 - fVar62 * fVar121;
    fVar144 = fVar10 * fVar101 - fVar65 * fVar121;
    fVar145 = fVar29 * fVar101 - fVar68 * fVar121;
    fVar149 = fVar43 * fVar101 - fVar71 * fVar121;
    fVar154 = fVar47 * fVar101 - fVar87 * fVar121;
    fVar156 = fVar48 * fVar101 - fVar89 * fVar121;
    fVar158 = fVar49 * fVar101 - fVar91 * fVar121;
    fVar160 = fVar50 * fVar101 - fVar93 * fVar121;
    fVar118 = fVar118 + fVar118;
    fVar119 = fVar119 + fVar119;
    fVar120 = fVar120 + fVar120;
    fVar135 = fVar135 + fVar135;
    fVar138 = fVar138 + fVar138;
    fVar139 = fVar139 + fVar139;
    fVar140 = fVar140 + fVar140;
    fVar141 = fVar141 + fVar141;
    fVar143 = fVar143 + fVar143;
    fVar144 = fVar144 + fVar144;
    fVar145 = fVar145 + fVar145;
    fVar149 = fVar149 + fVar149;
    fVar154 = fVar154 + fVar154;
    fVar156 = fVar156 + fVar156;
    fVar158 = fVar158 + fVar158;
    fVar160 = fVar160 + fVar160;
    fVar95 = fVar95 + fVar95;
    fVar97 = fVar97 + fVar97;
    fVar99 = fVar99 + fVar99;
    fVar109 = fVar109 + fVar109;
    fVar114 = fVar114 + fVar114;
    fVar115 = fVar115 + fVar115;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    local_2c0._0_4_ = fVar95 * fVar134 + fVar62 + (fVar121 * fVar143 - fVar118 * fVar41);
    local_2c0._4_4_ = fVar97 * fVar134 + fVar65 + (fVar121 * fVar144 - fVar119 * fVar41);
    local_2c0._8_4_ = fVar99 * fVar134 + fVar68 + (fVar121 * fVar145 - fVar120 * fVar41);
    local_2c0._12_4_ = fVar109 * fVar134 + fVar71 + (fVar121 * fVar149 - fVar135 * fVar41);
    local_2c0._16_4_ = fVar114 * fVar134 + fVar87 + (fVar121 * fVar154 - fVar138 * fVar41);
    local_2c0._20_4_ = fVar115 * fVar134 + fVar89 + (fVar121 * fVar156 - fVar139 * fVar41);
    local_2c0._24_4_ = fVar116 * fVar134 + fVar91 + (fVar121 * fVar158 - fVar140 * fVar41);
    local_2c0._28_4_ = fVar117 * fVar134 + fVar93 + (fVar121 * fVar160 - fVar141 * fVar41);
    local_300._0_4_ = (fVar41 * fVar95 - fVar143 * fVar101) + fVar134 * fVar118 + fVar11;
    local_300._4_4_ = (fVar41 * fVar97 - fVar144 * fVar101) + fVar134 * fVar119 + fVar10;
    local_300._8_4_ = (fVar41 * fVar99 - fVar145 * fVar101) + fVar134 * fVar120 + fVar29;
    local_300._12_4_ = (fVar41 * fVar109 - fVar149 * fVar101) + fVar134 * fVar135 + fVar43;
    local_300._16_4_ = (fVar41 * fVar114 - fVar154 * fVar101) + fVar134 * fVar138 + fVar47;
    local_300._20_4_ = (fVar41 * fVar115 - fVar156 * fVar101) + fVar134 * fVar139 + fVar48;
    local_300._24_4_ = (fVar41 * fVar116 - fVar158 * fVar101) + fVar134 * fVar140 + fVar49;
    local_300._28_4_ = (fVar41 * fVar117 - fVar160 * fVar101) + fVar134 * fVar141 + fVar50;
    local_2e0._0_4_ = (fVar101 * fVar118 - fVar121 * fVar95) + fVar134 * fVar143 + fVar51;
    local_2e0._4_4_ = (fVar101 * fVar119 - fVar121 * fVar97) + fVar134 * fVar144 + fVar52;
    local_2e0._8_4_ = (fVar101 * fVar120 - fVar121 * fVar99) + fVar134 * fVar145 + fVar53;
    local_2e0._12_4_ = (fVar101 * fVar135 - fVar121 * fVar109) + fVar134 * fVar149 + fVar54;
    local_2e0._16_4_ = (fVar101 * fVar138 - fVar121 * fVar114) + fVar134 * fVar154 + fVar58;
    local_2e0._20_4_ = (fVar101 * fVar139 - fVar121 * fVar115) + fVar134 * fVar156 + fVar59;
    local_2e0._24_4_ = (fVar101 * fVar140 - fVar121 * fVar116) + fVar134 * fVar158 + fVar60;
    local_2e0._28_4_ = (fVar101 * fVar141 - fVar121 * fVar117) + fVar134 * fVar160 + fVar61;
    pauVar4 = (undefined1 (*) [32])(param_2 + uVar7 * 0xc);
    pauVar1 = (undefined1 (*) [32])(param_4 + uVar7 * 0xc);
    if (cVar5 == -1) {
      auVar74 = pauVar1[1];
      auVar55 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar74);
      auVar17 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar55 = vblendps_avx(auVar17,auVar55,0x88);
      auVar17 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar74);
      auVar38 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar17 = vblendps_avx(auVar38,auVar17,0x13);
      auVar25._16_16_ = auVar17._0_16_;
      auVar25._0_16_ = auVar55._0_16_;
      auVar55 = vperm2f128_avx(auVar55,auVar17,0x31);
      auVar74 = vblendps_avx(auVar74,*pauVar1,0x24);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar74);
      auVar78._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar78._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar17 = vpermps_avx2(auVar78,pauVar1[2]);
      auVar74 = vblendps_avx(auVar74,auVar17,0xe0);
      fVar134 = param_8[3];
      fVar41 = param_8[1];
      fVar31 = param_8[8];
      fVar42 = param_8[9];
      fVar30 = param_8[10];
      fVar101 = param_8[2];
      fVar121 = *param_8;
    }
    else {
      auVar25 = vgatherdps(ZEXT432(0) << 0x20,auVar18);
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar74 = vgatherdps(ZEXT832(0),auVar18);
    }
    fVar61 = auVar74._0_4_ * fVar30;
    fVar62 = auVar74._4_4_ * fVar30;
    fVar65 = auVar74._8_4_ * fVar30;
    fVar68 = auVar74._12_4_ * fVar30;
    fVar71 = auVar74._16_4_ * fVar30;
    fVar87 = auVar74._20_4_ * fVar30;
    fVar89 = auVar74._24_4_ * fVar30;
    fVar30 = auVar74._28_4_ * fVar30;
    fVar51 = fVar42 * auVar55._0_4_;
    fVar52 = fVar42 * auVar55._4_4_;
    fVar53 = fVar42 * auVar55._8_4_;
    fVar54 = fVar42 * auVar55._12_4_;
    fVar58 = fVar42 * auVar55._16_4_;
    fVar59 = fVar42 * auVar55._20_4_;
    fVar60 = fVar42 * auVar55._24_4_;
    fVar42 = fVar42 * auVar55._28_4_;
    fVar10 = fVar31 * auVar25._0_4_;
    fVar29 = fVar31 * auVar25._4_4_;
    fVar43 = fVar31 * auVar25._8_4_;
    fVar47 = fVar31 * auVar25._12_4_;
    fVar48 = fVar31 * auVar25._16_4_;
    fVar49 = fVar31 * auVar25._20_4_;
    fVar50 = fVar31 * auVar25._24_4_;
    fVar31 = fVar31 * auVar25._28_4_;
    fVar91 = fVar51 * fVar121 - fVar41 * fVar10;
    fVar93 = fVar52 * fVar121 - fVar41 * fVar29;
    fVar95 = fVar53 * fVar121 - fVar41 * fVar43;
    fVar97 = fVar54 * fVar121 - fVar41 * fVar47;
    fVar99 = fVar58 * fVar121 - fVar41 * fVar48;
    fVar109 = fVar59 * fVar121 - fVar41 * fVar49;
    fVar114 = fVar60 * fVar121 - fVar41 * fVar50;
    fVar115 = fVar42 * fVar121 - fVar41 * fVar31;
    fVar116 = fVar61 * fVar41 - fVar51 * fVar101;
    fVar117 = fVar62 * fVar41 - fVar52 * fVar101;
    fVar118 = fVar65 * fVar41 - fVar53 * fVar101;
    fVar119 = fVar68 * fVar41 - fVar54 * fVar101;
    fVar120 = fVar71 * fVar41 - fVar58 * fVar101;
    fVar135 = fVar87 * fVar41 - fVar59 * fVar101;
    fVar138 = fVar89 * fVar41 - fVar60 * fVar101;
    fVar139 = fVar30 * fVar41 - fVar42 * fVar101;
    fVar140 = fVar10 * fVar101 - fVar61 * fVar121;
    fVar141 = fVar29 * fVar101 - fVar62 * fVar121;
    fVar143 = fVar43 * fVar101 - fVar65 * fVar121;
    fVar144 = fVar47 * fVar101 - fVar68 * fVar121;
    fVar145 = fVar48 * fVar101 - fVar71 * fVar121;
    fVar149 = fVar49 * fVar101 - fVar87 * fVar121;
    fVar154 = fVar50 * fVar101 - fVar89 * fVar121;
    fVar156 = fVar31 * fVar101 - fVar30 * fVar121;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    fVar118 = fVar118 + fVar118;
    fVar119 = fVar119 + fVar119;
    fVar120 = fVar120 + fVar120;
    fVar135 = fVar135 + fVar135;
    fVar138 = fVar138 + fVar138;
    fVar139 = fVar139 + fVar139;
    fVar140 = fVar140 + fVar140;
    fVar141 = fVar141 + fVar141;
    fVar143 = fVar143 + fVar143;
    fVar144 = fVar144 + fVar144;
    fVar145 = fVar145 + fVar145;
    fVar149 = fVar149 + fVar149;
    fVar154 = fVar154 + fVar154;
    fVar156 = fVar156 + fVar156;
    fVar91 = fVar91 + fVar91;
    fVar93 = fVar93 + fVar93;
    fVar95 = fVar95 + fVar95;
    fVar97 = fVar97 + fVar97;
    fVar99 = fVar99 + fVar99;
    fVar109 = fVar109 + fVar109;
    fVar114 = fVar114 + fVar114;
    fVar115 = fVar115 + fVar115;
    fVar11 = param_8[4];
    auVar26._0_4_ = fVar11 + (fVar41 * fVar91 - fVar140 * fVar101) + fVar134 * fVar116 + fVar10;
    auVar26._4_4_ = fVar11 + (fVar41 * fVar93 - fVar141 * fVar101) + fVar134 * fVar117 + fVar29;
    auVar26._8_4_ = fVar11 + (fVar41 * fVar95 - fVar143 * fVar101) + fVar134 * fVar118 + fVar43;
    auVar26._12_4_ = fVar11 + (fVar41 * fVar97 - fVar144 * fVar101) + fVar134 * fVar119 + fVar47;
    auVar26._16_4_ = fVar11 + (fVar41 * fVar99 - fVar145 * fVar101) + fVar134 * fVar120 + fVar48;
    auVar26._20_4_ = fVar11 + (fVar41 * fVar109 - fVar149 * fVar101) + fVar134 * fVar135 + fVar49;
    auVar26._24_4_ = fVar11 + (fVar41 * fVar114 - fVar154 * fVar101) + fVar134 * fVar138 + fVar50;
    auVar26._28_4_ = fVar11 + (fVar41 * fVar115 - fVar156 * fVar101) + fVar134 * fVar139 + fVar31;
    fVar11 = param_8[5];
    auVar39._0_4_ = fVar11 + (fVar101 * fVar116 - fVar91 * fVar121) + fVar134 * fVar140 + fVar51;
    auVar39._4_4_ = fVar11 + (fVar101 * fVar117 - fVar93 * fVar121) + fVar134 * fVar141 + fVar52;
    auVar39._8_4_ = fVar11 + (fVar101 * fVar118 - fVar95 * fVar121) + fVar134 * fVar143 + fVar53;
    auVar39._12_4_ = fVar11 + (fVar101 * fVar119 - fVar97 * fVar121) + fVar134 * fVar144 + fVar54;
    auVar39._16_4_ = fVar11 + (fVar101 * fVar120 - fVar99 * fVar121) + fVar134 * fVar145 + fVar58;
    auVar39._20_4_ = fVar11 + (fVar101 * fVar135 - fVar109 * fVar121) + fVar134 * fVar149 + fVar59;
    auVar39._24_4_ = fVar11 + (fVar101 * fVar138 - fVar114 * fVar121) + fVar134 * fVar154 + fVar60;
    auVar39._28_4_ = fVar11 + (fVar101 * fVar139 - fVar115 * fVar121) + fVar134 * fVar156 + fVar42;
    fVar101 = param_8[6];
    auVar79._0_4_ = fVar101 + fVar91 * fVar134 + fVar61 + (fVar121 * fVar140 - fVar41 * fVar116);
    auVar79._4_4_ = fVar101 + fVar93 * fVar134 + fVar62 + (fVar121 * fVar141 - fVar41 * fVar117);
    auVar79._8_4_ = fVar101 + fVar95 * fVar134 + fVar65 + (fVar121 * fVar143 - fVar41 * fVar118);
    auVar79._12_4_ = fVar101 + fVar97 * fVar134 + fVar68 + (fVar121 * fVar144 - fVar41 * fVar119);
    auVar79._16_4_ = fVar101 + fVar99 * fVar134 + fVar71 + (fVar121 * fVar145 - fVar41 * fVar120);
    auVar79._20_4_ = fVar101 + fVar109 * fVar134 + fVar87 + (fVar121 * fVar149 - fVar41 * fVar135);
    auVar79._24_4_ = fVar101 + fVar114 * fVar134 + fVar89 + (fVar121 * fVar154 - fVar41 * fVar138);
    auVar79._28_4_ = fVar101 + fVar115 * fVar134 + fVar30 + (fVar121 * fVar156 - fVar41 * fVar139);
    uVar2 = *param_9;
    auVar57._4_4_ = uVar2;
    auVar57._0_4_ = uVar2;
    auVar57._8_4_ = uVar2;
    auVar57._12_4_ = uVar2;
    auVar57._16_4_ = uVar2;
    auVar57._20_4_ = uVar2;
    auVar57._24_4_ = uVar2;
    auVar57._28_4_ = uVar2;
    auVar74 = vsubps_avx(auVar26,auVar57);
    uVar2 = param_9[1];
    auVar27._4_4_ = uVar2;
    auVar27._0_4_ = uVar2;
    auVar27._8_4_ = uVar2;
    auVar27._12_4_ = uVar2;
    auVar27._16_4_ = uVar2;
    auVar27._20_4_ = uVar2;
    auVar27._24_4_ = uVar2;
    auVar27._28_4_ = uVar2;
    auVar55 = vsubps_avx(auVar39,auVar27);
    uVar2 = param_9[2];
    auVar40._4_4_ = uVar2;
    auVar40._0_4_ = uVar2;
    auVar40._8_4_ = uVar2;
    auVar40._12_4_ = uVar2;
    auVar40._16_4_ = uVar2;
    auVar40._20_4_ = uVar2;
    auVar40._24_4_ = uVar2;
    auVar40._28_4_ = uVar2;
    auVar17 = vsubps_avx(auVar79,auVar40);
    auVar136 = auVar74._0_16_;
    auVar142 = auVar74._16_16_;
    auVar123 = auVar55._0_16_;
    if (cVar5 == -1) {
      auVar81._16_16_ = auVar123;
      auVar81._0_16_ = auVar136;
      auVar73 = vshufpd_avx(auVar74,auVar81,2);
      auVar168 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar17);
      auVar38 = vpermpd_avx2(auVar55,0xe9);
      auVar38 = vblendps_avx(auVar168,auVar38,7);
      auVar146._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar146._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar168 = vpermps_avx2(auVar146,auVar38);
      auVar73 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar73);
      auVar73 = vblendps_avx(auVar73,auVar168,0xa4);
      *pauVar1 = auVar73;
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar38);
      auVar38 = vshufpd_avx(auVar74,auVar74,1);
      auVar38 = vblendps_avx(auVar73,auVar38,0x92);
      pauVar1[1] = auVar38;
      auVar82._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar82._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar73 = vpermps_avx2(auVar82,auVar55);
      auVar38 = vpermpd_avx2(auVar74,0xff);
      auVar38 = vblendps_avx(auVar73,auVar38,3);
      auVar38 = vblendps_avx(auVar38,auVar17,0xe0);
      auVar38 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar38);
      pauVar1[2] = auVar38;
      auVar38 = *(undefined1 (*) [32])(param_7 + uVar7 * 0xc);
      auVar73 = *(undefined1 (*) [32])(param_7 + 0x20 + uVar7 * 0xc);
      auVar168 = *(undefined1 (*) [32])(param_7 + 0x40 + uVar7 * 0xc);
      auVar112 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                              ,auVar73);
      auVar3 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar38);
      auVar112 = vblendps_avx(auVar3,auVar112,0x88);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar73);
      auVar14 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar168);
      auVar3 = vblendps_avx(auVar14,auVar3,0x13);
      auVar80._16_16_ = auVar3._0_16_;
      auVar80._0_16_ = auVar112._0_16_;
      auVar112 = vperm2f128_avx(auVar112,auVar3,0x31);
      auVar38 = vblendps_avx(auVar73,auVar38,0x24);
      auVar38 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar38);
      auVar153._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar153._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar73 = vpermps_avx2(auVar153,auVar168);
      auVar38 = vblendps_avx(auVar38,auVar73,0xe0);
    }
    else {
      auVar102 = auVar55._16_16_;
      auVar108 = auVar17._0_16_;
      auVar131 = auVar17._16_16_;
      if ((uVar6 & 1) != 0) {
        *(int *)*pauVar1 = auVar74._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x10) = auVar74._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar1 + 4) = auVar55._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x14) = auVar55._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(*pauVar1 + 8) = auVar17._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x18) = auVar17._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
      auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
    }
    auVar74 = vsubps_avx(auVar80,auVar74);
    auVar83._4_4_ = param_10;
    auVar83._0_4_ = param_10;
    auVar83._8_4_ = param_10;
    auVar83._12_4_ = param_10;
    auVar83._16_4_ = param_10;
    auVar83._20_4_ = param_10;
    auVar83._24_4_ = param_10;
    auVar83._28_4_ = param_10;
    auVar74 = vdivps_avx(auVar74,auVar83);
    auVar55 = vsubps_avx(auVar112,auVar55);
    auVar55 = vdivps_avx(auVar55,auVar83);
    auVar17 = vsubps_avx(auVar38,auVar17);
    auVar17 = vdivps_avx(auVar17,auVar83);
    pauVar1 = (undefined1 (*) [32])(param_5 + uVar7 * 0xc);
    auVar136 = auVar74._0_16_;
    auVar142 = auVar74._16_16_;
    auVar123 = auVar55._0_16_;
    if (cVar5 == -1) {
      auVar84._16_16_ = auVar123;
      auVar84._0_16_ = auVar136;
      auVar73 = vshufpd_avx(auVar74,auVar84,2);
      auVar168 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar17);
      auVar38 = vpermpd_avx2(auVar55,0xe9);
      auVar38 = vblendps_avx(auVar168,auVar38,7);
      auVar147._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar147._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar168 = vpermps_avx2(auVar147,auVar38);
      auVar73 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar73);
      auVar73 = vblendps_avx(auVar73,auVar168,0xa4);
      *pauVar1 = auVar73;
      auVar73 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar38);
      auVar38 = vshufpd_avx(auVar74,auVar74,1);
      auVar38 = vblendps_avx(auVar73,auVar38,0x92);
      pauVar1[1] = auVar38;
      auVar85._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar85._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar73 = vpermps_avx2(auVar85,auVar55);
      auVar38 = vpermpd_avx2(auVar74,0xff);
      auVar38 = vblendps_avx(auVar73,auVar38,3);
      auVar38 = vblendps_avx(auVar38,auVar17,0xe0);
      auVar38 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar38);
      pauVar1[2] = auVar38;
    }
    else {
      auVar102 = auVar55._16_16_;
      auVar108 = auVar17._0_16_;
      auVar131 = auVar17._16_16_;
      if ((uVar6 & 1) != 0) {
        *(float *)*pauVar1 = auVar74._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x10) = auVar74._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(float *)(*pauVar1 + 4) = auVar55._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x14) = auVar55._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(float *)(*pauVar1 + 8) = auVar17._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x18) = auVar17._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
    }
    auVar38 = vsubps_avx(local_300,auVar74);
    auVar73 = vsubps_avx(local_2e0,auVar55);
    auVar168 = vsubps_avx(local_2c0,auVar17);
    fVar30 = auVar73._0_4_;
    fVar134 = auVar73._4_4_;
    fVar41 = auVar73._8_4_;
    fVar101 = auVar73._12_4_;
    fVar121 = auVar73._16_4_;
    fVar11 = auVar73._20_4_;
    fVar31 = auVar73._24_4_;
    fVar42 = auVar73._28_4_;
    fVar10 = auVar38._0_4_;
    fVar29 = auVar38._4_4_;
    fVar43 = auVar38._8_4_;
    fVar47 = auVar38._12_4_;
    fVar48 = auVar38._16_4_;
    fVar49 = auVar38._20_4_;
    fVar50 = auVar38._24_4_;
    fVar51 = auVar38._28_4_;
    fVar52 = auVar168._0_4_;
    auVar126._0_4_ = fVar52 * fVar52 + fVar10 * fVar10 + fVar30 * fVar30;
    fVar53 = auVar168._4_4_;
    auVar126._4_4_ = fVar53 * fVar53 + fVar29 * fVar29 + fVar134 * fVar134;
    fVar54 = auVar168._8_4_;
    auVar126._8_4_ = fVar54 * fVar54 + fVar43 * fVar43 + fVar41 * fVar41;
    fVar58 = auVar168._12_4_;
    auVar126._12_4_ = fVar58 * fVar58 + fVar47 * fVar47 + fVar101 * fVar101;
    fVar59 = auVar168._16_4_;
    auVar126._16_4_ = fVar59 * fVar59 + fVar48 * fVar48 + fVar121 * fVar121;
    fVar60 = auVar168._20_4_;
    auVar126._20_4_ = fVar60 * fVar60 + fVar49 * fVar49 + fVar11 * fVar11;
    fVar61 = auVar168._24_4_;
    auVar126._24_4_ = fVar61 * fVar61 + fVar50 * fVar50 + fVar31 * fVar31;
    fVar62 = auVar168._28_4_;
    auVar126._28_4_ = fVar62 * fVar62 + fVar51 * fVar51 + fVar42 * fVar42;
    auVar148._4_4_ = param_12;
    auVar148._0_4_ = param_12;
    auVar148._8_4_ = param_12;
    auVar148._12_4_ = param_12;
    auVar148._16_4_ = param_12;
    auVar148._20_4_ = param_12;
    auVar148._24_4_ = param_12;
    auVar148._28_4_ = param_12;
    auVar38 = vcmpps_avx(auVar148,auVar126,1);
    auVar73 = auVar18 & auVar38;
    if ((((((((SUB321(auVar73 >> 0x1f,0) & 1) != 0 || (SUB321(auVar73 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar73 >> 0x5f,0) & 1) != 0) || SUB321(auVar73 >> 0x7f,0) != '\0') ||
          (SUB321(auVar73 >> 0x9f,0) & 1) != 0) || SUB321(auVar73 >> 0xbf,0) != '\0') ||
        (SUB321(auVar73 >> 0xdf,0) & 1) != 0) || auVar73[0x1f] < '\0') {
      auVar73 = vdivps_avx(auVar148,auVar126);
      auVar73 = vsqrtps_avx(auVar73);
      auVar46._0_4_ = auVar38._0_4_ & auVar18._0_4_;
      auVar46._4_4_ = auVar38._4_4_ & auVar18._4_4_;
      auVar46._8_4_ = auVar38._8_4_ & auVar18._8_4_;
      auVar46._12_4_ = auVar38._12_4_ & auVar18._12_4_;
      auVar46._16_4_ = auVar38._16_4_ & auVar18._16_4_;
      auVar46._20_4_ = auVar38._20_4_ & auVar18._20_4_;
      auVar46._24_4_ = auVar38._24_4_ & auVar18._24_4_;
      auVar46._28_4_ = auVar38._28_4_ & auVar18._28_4_;
      fVar65 = auVar73._0_4_;
      auVar86._0_4_ = fVar65 * fVar10 + auVar74._0_4_;
      fVar10 = auVar73._4_4_;
      auVar86._4_4_ = fVar10 * fVar29 + auVar74._4_4_;
      fVar29 = auVar73._8_4_;
      auVar86._8_4_ = fVar29 * fVar43 + auVar74._8_4_;
      fVar43 = auVar73._12_4_;
      auVar86._12_4_ = fVar43 * fVar47 + auVar74._12_4_;
      fVar47 = auVar73._16_4_;
      auVar86._16_4_ = fVar47 * fVar48 + auVar74._16_4_;
      fVar48 = auVar73._20_4_;
      auVar86._20_4_ = fVar48 * fVar49 + auVar74._20_4_;
      fVar49 = auVar73._24_4_;
      auVar86._24_4_ = fVar49 * fVar50 + auVar74._24_4_;
      fVar50 = auVar73._28_4_;
      auVar86._28_4_ = fVar50 * fVar51 + auVar74._28_4_;
      auVar113._0_4_ = fVar65 * fVar30 + auVar55._0_4_;
      auVar113._4_4_ = fVar10 * fVar134 + auVar55._4_4_;
      auVar113._8_4_ = fVar29 * fVar41 + auVar55._8_4_;
      auVar113._12_4_ = fVar43 * fVar101 + auVar55._12_4_;
      auVar113._16_4_ = fVar47 * fVar121 + auVar55._16_4_;
      auVar113._20_4_ = fVar48 * fVar11 + auVar55._20_4_;
      auVar113._24_4_ = fVar49 * fVar31 + auVar55._24_4_;
      auVar113._28_4_ = fVar50 * fVar42 + auVar55._28_4_;
      auVar105._0_4_ = fVar65 * fVar52 + auVar17._0_4_;
      auVar105._4_4_ = fVar10 * fVar53 + auVar17._4_4_;
      auVar105._8_4_ = fVar29 * fVar54 + auVar17._8_4_;
      auVar105._12_4_ = fVar43 * fVar58 + auVar17._12_4_;
      auVar105._16_4_ = fVar47 * fVar59 + auVar17._16_4_;
      auVar105._20_4_ = fVar48 * fVar60 + auVar17._20_4_;
      auVar105._24_4_ = fVar49 * fVar61 + auVar17._24_4_;
      auVar105._28_4_ = fVar50 * fVar62 + auVar17._28_4_;
      local_300 = vmaskmovps_avx(auVar46,auVar86);
      local_2e0 = vmaskmovps_avx(auVar46,auVar113);
      local_2c0 = vmaskmovps_avx(auVar46,auVar105);
    }
    if (cVar5 == -1) {
      auVar18 = vperm2f128_avx(local_300,local_2e0,0x20);
      auVar74 = vshufpd_avx(local_300,auVar18,2);
      auVar55 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,local_2c0);
      auVar18 = vpermpd_avx2(local_2e0,0xe9);
      auVar18 = vblendps_avx(auVar55,auVar18,7);
      auVar106._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar106._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar55 = vpermps_avx2(auVar106,auVar18);
      auVar74 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar74);
      auVar74 = vblendps_avx(auVar74,auVar55,0xa4);
      auVar107._8_8_ = local_300._24_8_;
      auVar107._0_8_ = local_300._24_8_;
      auVar107._16_8_ = local_300._24_8_;
      auVar107._24_8_ = local_300._24_8_;
      *pauVar4 = auVar74;
      auVar74 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar18);
      auVar18 = vshufpd_avx(local_300,local_300,1);
      auVar18 = vblendps_avx(auVar74,auVar18,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc) = auVar18;
      auVar28._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar28._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar18 = vpermps_avx2(auVar28,local_2e0);
      auVar18 = vblendpd_avx(auVar18,auVar107,1);
      auVar18 = vblendps_avx(auVar18,local_2c0,0xe0);
      auVar18 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar18);
      *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc) = auVar18;
    }
    else {
      auVar123 = local_300._0_16_;
      auVar102 = local_300._16_16_;
      auVar136 = local_2e0._0_16_;
      auVar108 = local_2e0._16_16_;
      auVar142 = local_2c0._0_16_;
      auVar131 = local_2c0._16_16_;
      if ((uVar6 & 1) != 0) {
        *(int *)*pauVar4 = local_300._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar123,1);
        *(undefined4 *)(param_2 + 0xc + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar123,2);
        *(undefined4 *)(param_2 + 0x18 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar123,3);
        *(undefined4 *)(param_2 + 0x24 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + uVar7 * 0xc) = local_300._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar102,1);
        *(undefined4 *)(param_2 + 0x3c + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar102,2);
        *(undefined4 *)(param_2 + 0x48 + uVar7 * 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar102,3);
        *(undefined4 *)(param_2 + 0x54 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(param_2 + 4 + uVar7 * 0xc) = local_2e0._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar136,1);
        *(undefined4 *)(param_2 + 0x10 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar136,2);
        *(undefined4 *)(param_2 + 0x1c + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar136,3);
        *(undefined4 *)(param_2 + 0x28 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + uVar7 * 0xc) = local_2e0._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar108,1);
        *(undefined4 *)(param_2 + 0x40 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar108,2);
        *(undefined4 *)(param_2 + 0x4c + uVar7 * 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar108,3);
        *(undefined4 *)(param_2 + 0x58 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 1) != 0) {
        *(int *)(param_2 + 8 + uVar7 * 0xc) = local_2c0._0_4_;
      }
      if ((uVar6 & 2) != 0) {
        uVar2 = vextractps_avx(auVar142,1);
        *(undefined4 *)(param_2 + 0x14 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 4) != 0) {
        uVar2 = vextractps_avx(auVar142,2);
        *(undefined4 *)(param_2 + 0x20 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 8) != 0) {
        uVar2 = vextractps_avx(auVar142,3);
        *(undefined4 *)(param_2 + 0x2c + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + uVar7 * 0xc) = local_2c0._16_4_;
      }
      if ((uVar6 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar131,1);
        *(undefined4 *)(param_2 + 0x44 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar6 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar131,2);
        *(undefined4 *)(param_2 + 0x50 + uVar7 * 0xc) = uVar2;
      }
      if (cVar5 < '\0') {
        uVar2 = vextractps_avx(auVar131,3);
        *(undefined4 *)(param_2 + 0x5c + uVar7 * 0xc) = uVar2;
      }
    }
  }
  return;
}

// ApplyPreSimulationTransformsAndClampVelocity_avx2 @ 140ce67c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformsAndClampVelocity_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,undefined8 param_9,
               undefined4 *param_10,undefined4 param_11,int param_12,int param_13,
               undefined4 param_14)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [32];
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [32];
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [32];
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar34;
  float fVar36;
  float fVar40;
  float fVar43;
  float fVar45;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar41;
  float fVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar42 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  float fVar64;
  float fVar66;
  float fVar68;
  float fVar70;
  float fVar73;
  float fVar75;
  float fVar77;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  float fVar65;
  float fVar67;
  float fVar69;
  float fVar71;
  float fVar74;
  float fVar76;
  float fVar78;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar72 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  float fVar79;
  float fVar87;
  undefined1 auVar80 [32];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 in_ZMM2 [64];
  float fVar88;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  float fVar102;
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  float fVar103;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  float fVar125;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  undefined1 auVar126 [32];
  float fVar143;
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
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  float fVar149;
  undefined1 auVar150 [16];
  float fVar158;
  float fVar159;
  float fVar161;
  float fVar163;
  float fVar164;
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  float fVar160;
  float fVar165;
  undefined1 auVar155 [32];
  undefined1 auVar162 [16];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  float fVar170;
  float fVar171;
  float fVar175;
  float fVar177;
  float fVar179;
  float fVar181;
  float fVar183;
  float fVar185;
  float fVar187;
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  float fVar176;
  float fVar178;
  float fVar180;
  float fVar182;
  float fVar184;
  float fVar186;
  float fVar188;
  undefined1 auVar174 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar194;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  undefined1 auVar200 [16];
  float fVar203;
  float fVar204;
  float fVar206;
  float fVar208;
  float fVar209;
  undefined1 auVar201 [32];
  float fVar205;
  float fVar210;
  undefined1 auVar202 [32];
  undefined1 auVar207 [16];
  float fVar211;
  float fVar212;
  float fVar215;
  float fVar217;
  float fVar219;
  float fVar221;
  float fVar223;
  float fVar225;
  undefined1 auVar213 [32];
  float fVar216;
  float fVar218;
  float fVar220;
  float fVar222;
  float fVar224;
  float fVar226;
  float fVar227;
  float fVar228;
  undefined1 auVar214 [32];
  float fVar229;
  float fVar231;
  float fVar232;
  float fVar233;
  float fVar234;
  float fVar235;
  float fVar236;
  undefined1 auVar230 [32];
  float fVar237;
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float local_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [32];
  
  iVar9 = __real_00000024;
  uVar8 = __real_00000030;
  uVar7 = __real_00000006;
  uVar6 = __real_0000000c;
  uVar5 = __real_00000008;
  uVar2 = __real_00000004;
  uVar19 = param_13 - param_12;
  uVar16 = uVar19 + 7;
  if (-1 < (int)uVar19) {
    uVar16 = uVar19;
  }
  iVar10 = ((uVar16 & 0xfffffff8) - uVar19) + param_13;
  if (param_12 < iVar10) {
    lVar20 = (longlong)param_12;
    lVar4 = lVar20 * 0xc;
    lVar21 = param_3 + 0x40;
    pauVar18 = (undefined1 (*) [32])(param_1 + lVar20 * 0x10 + 0x60);
    lVar13 = param_2 + 0x40;
    lVar17 = param_4 + 0x40;
    lVar14 = param_7 + 0x40;
    lVar11 = param_5 + 0x40;
    param_12 = param_12 << 2;
    auVar146 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
    do {
      auVar3 = *(undefined1 (*) [32])(param_8 + param_12);
      auVar144._4_4_ = uVar7;
      auVar144._0_4_ = uVar7;
      auVar144._8_4_ = uVar7;
      auVar144._12_4_ = uVar7;
      auVar144._16_4_ = uVar7;
      auVar144._20_4_ = uVar7;
      auVar144._24_4_ = uVar7;
      auVar144._28_4_ = uVar7;
      vpmulld_avx2(auVar3,auVar144);
      auVar94 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar201 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar94);
      auVar94._4_4_ = uVar8;
      auVar94._0_4_ = uVar8;
      auVar94._8_4_ = uVar8;
      auVar94._12_4_ = uVar8;
      auVar94._16_4_ = uVar8;
      auVar94._20_4_ = uVar8;
      auVar94._24_4_ = uVar8;
      auVar94._28_4_ = uVar8;
      auVar94 = vpmulld_avx2(auVar3,auVar94);
      auVar126._4_4_ = uVar2;
      auVar126._0_4_ = uVar2;
      auVar126._8_4_ = uVar2;
      auVar126._12_4_ = uVar2;
      auVar126._16_4_ = uVar2;
      auVar126._20_4_ = uVar2;
      auVar126._24_4_ = uVar2;
      auVar126._28_4_ = uVar2;
      vpor_avx2(auVar94,auVar126);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar213 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar91._4_4_ = uVar5;
      auVar91._0_4_ = uVar5;
      auVar91._8_4_ = uVar5;
      auVar91._12_4_ = uVar5;
      auVar91._16_4_ = uVar5;
      auVar91._20_4_ = uVar5;
      auVar91._24_4_ = uVar5;
      auVar91._28_4_ = uVar5;
      vpor_avx2(auVar94,auVar91);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar151 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar90._4_4_ = uVar6;
      auVar90._0_4_ = uVar6;
      auVar90._8_4_ = uVar6;
      auVar90._12_4_ = uVar6;
      auVar90._16_4_ = uVar6;
      auVar90._20_4_ = uVar6;
      auVar90._24_4_ = uVar6;
      auVar90._28_4_ = uVar6;
      vpor_avx2(auVar94,auVar90);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar189 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar90 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar230 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar166 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3._0_4_ = auVar94._0_4_ + iVar9;
      auVar3._4_4_ = auVar94._4_4_ + iVar9;
      auVar3._8_4_ = auVar94._8_4_ + iVar9;
      auVar3._12_4_ = auVar94._12_4_ + iVar9;
      auVar3._16_4_ = auVar94._16_4_ + iVar9;
      auVar3._20_4_ = auVar94._20_4_ + iVar9;
      auVar3._24_4_ = auVar94._24_4_ + iVar9;
      auVar3._28_4_ = auVar94._28_4_ + iVar9;
      auVar94 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar144 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar94);
      auVar3 = vpcmpeqd_avx2(auVar3,auVar3);
      auVar126 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = *(undefined1 (*) [32])(lVar21 + -0x40 + lVar4);
      auVar94 = *(undefined1 (*) [32])(lVar21 + -0x20 + lVar4);
      auVar105 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar94);
      auVar121 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar3);
      auVar105 = vblendps_avx(auVar121,auVar105,0x88);
      auVar121 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar94);
      auVar153 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(lVar21 + lVar4));
      auVar121 = vblendps_avx(auVar153,auVar121,0x13);
      auVar153 = vperm2f128_avx(auVar105,auVar121,0x31);
      auVar3 = vblendps_avx(auVar94,auVar3,0x24);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar21 + lVar4));
      auVar3 = vblendps_avx(auVar3,auVar94,0xe0);
      fVar125 = auVar166._0_4_;
      fVar49 = fVar125 * auVar105._0_4_;
      fVar137 = auVar166._4_4_;
      fVar64 = fVar137 * auVar105._4_4_;
      fVar138 = auVar166._8_4_;
      fVar66 = fVar138 * auVar105._8_4_;
      fVar139 = auVar166._12_4_;
      fVar68 = fVar139 * auVar105._12_4_;
      fVar140 = auVar166._16_4_;
      fVar70 = fVar140 * auVar121._0_4_;
      fVar141 = auVar166._20_4_;
      fVar73 = fVar141 * auVar121._4_4_;
      fVar142 = auVar166._24_4_;
      fVar75 = fVar142 * auVar121._8_4_;
      fVar143 = auVar166._28_4_;
      fVar77 = fVar143 * auVar121._12_4_;
      fVar23 = auVar144._0_4_;
      fVar22 = fVar23 * auVar153._0_4_;
      fVar35 = auVar144._4_4_;
      fVar34 = fVar35 * auVar153._4_4_;
      fVar37 = auVar144._8_4_;
      fVar36 = fVar37 * auVar153._8_4_;
      fVar39 = auVar144._12_4_;
      fVar38 = fVar39 * auVar153._12_4_;
      fVar41 = auVar144._16_4_;
      fVar40 = fVar41 * auVar153._16_4_;
      fVar44 = auVar144._20_4_;
      fVar43 = fVar44 * auVar153._20_4_;
      fVar46 = auVar144._24_4_;
      fVar45 = fVar46 * auVar153._24_4_;
      fVar48 = auVar144._28_4_;
      fVar47 = fVar48 * auVar153._28_4_;
      fVar50 = auVar126._0_4_;
      fVar79 = fVar50 * auVar3._0_4_;
      fVar65 = auVar126._4_4_;
      fVar81 = fVar65 * auVar3._4_4_;
      fVar67 = auVar126._8_4_;
      fVar82 = fVar67 * auVar3._8_4_;
      fVar69 = auVar126._12_4_;
      fVar83 = fVar69 * auVar3._12_4_;
      fVar71 = auVar126._16_4_;
      fVar84 = fVar71 * auVar3._16_4_;
      fVar74 = auVar126._20_4_;
      fVar85 = fVar74 * auVar3._20_4_;
      fVar76 = auVar126._24_4_;
      fVar86 = fVar76 * auVar3._24_4_;
      fVar78 = auVar126._28_4_;
      fVar87 = fVar78 * auVar3._28_4_;
      fVar211 = auVar213._0_4_;
      fVar215 = auVar213._4_4_;
      fVar217 = auVar213._8_4_;
      fVar219 = auVar213._12_4_;
      fVar221 = auVar213._16_4_;
      fVar223 = auVar213._20_4_;
      fVar225 = auVar213._24_4_;
      fVar227 = auVar213._28_4_;
      fVar149 = auVar151._0_4_;
      fVar158 = auVar151._4_4_;
      fVar159 = auVar151._8_4_;
      fVar160 = auVar151._12_4_;
      fVar161 = auVar151._16_4_;
      fVar163 = auVar151._20_4_;
      fVar164 = auVar151._24_4_;
      fVar165 = auVar151._28_4_;
      fVar199 = auVar201._0_4_;
      fVar203 = auVar201._4_4_;
      fVar204 = auVar201._8_4_;
      fVar205 = auVar201._12_4_;
      fVar206 = auVar201._16_4_;
      fVar208 = auVar201._20_4_;
      fVar209 = auVar201._24_4_;
      fVar210 = auVar201._28_4_;
      fVar88 = fVar199 * fVar22 - fVar211 * fVar49;
      fVar96 = fVar203 * fVar34 - fVar215 * fVar64;
      fVar97 = fVar204 * fVar36 - fVar217 * fVar66;
      fVar98 = fVar205 * fVar38 - fVar219 * fVar68;
      fVar99 = fVar206 * fVar40 - fVar221 * fVar70;
      fVar100 = fVar208 * fVar43 - fVar223 * fVar73;
      fVar101 = fVar209 * fVar45 - fVar225 * fVar75;
      fVar102 = fVar210 * fVar47 - fVar227 * fVar77;
      fVar103 = fVar211 * fVar79 - fVar149 * fVar22;
      fVar114 = fVar215 * fVar81 - fVar158 * fVar34;
      fVar115 = fVar217 * fVar82 - fVar159 * fVar36;
      fVar116 = fVar219 * fVar83 - fVar160 * fVar38;
      fVar117 = fVar221 * fVar84 - fVar161 * fVar40;
      fVar118 = fVar223 * fVar85 - fVar163 * fVar43;
      fVar119 = fVar225 * fVar86 - fVar164 * fVar45;
      fVar120 = fVar227 * fVar87 - fVar165 * fVar47;
      fVar170 = fVar149 * fVar49 - fVar199 * fVar79;
      fVar175 = fVar158 * fVar64 - fVar203 * fVar81;
      fVar177 = fVar159 * fVar66 - fVar204 * fVar82;
      fVar179 = fVar160 * fVar68 - fVar205 * fVar83;
      fVar181 = fVar161 * fVar70 - fVar206 * fVar84;
      fVar183 = fVar163 * fVar73 - fVar208 * fVar85;
      fVar185 = fVar164 * fVar75 - fVar209 * fVar86;
      fVar187 = fVar165 * fVar77 - fVar210 * fVar87;
      fVar103 = fVar103 + fVar103;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar120 = fVar120 + fVar120;
      fVar170 = fVar170 + fVar170;
      fVar175 = fVar175 + fVar175;
      fVar177 = fVar177 + fVar177;
      fVar179 = fVar179 + fVar179;
      fVar181 = fVar181 + fVar181;
      fVar183 = fVar183 + fVar183;
      fVar185 = fVar185 + fVar185;
      fVar187 = fVar187 + fVar187;
      fVar88 = fVar88 + fVar88;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar98 = fVar98 + fVar98;
      fVar99 = fVar99 + fVar99;
      fVar100 = fVar100 + fVar100;
      fVar101 = fVar101 + fVar101;
      fVar102 = fVar102 + fVar102;
      fVar212 = auVar189._0_4_;
      fVar216 = auVar189._4_4_;
      fVar218 = auVar189._8_4_;
      fVar220 = auVar189._12_4_;
      fVar222 = auVar189._16_4_;
      fVar224 = auVar189._20_4_;
      fVar226 = auVar189._24_4_;
      fVar228 = auVar189._28_4_;
      local_480 = auVar90._0_4_;
      fStack_47c = auVar90._4_4_;
      fStack_478 = auVar90._8_4_;
      fStack_474 = auVar90._12_4_;
      fStack_470 = auVar90._16_4_;
      fStack_46c = auVar90._20_4_;
      fStack_468 = auVar90._24_4_;
      fStack_464 = auVar90._28_4_;
      auVar201._0_4_ =
           (fVar211 * fVar88 - fVar149 * fVar170) + fVar212 * fVar103 + fVar49 + local_480;
      auVar201._4_4_ =
           (fVar215 * fVar96 - fVar158 * fVar175) + fVar216 * fVar114 + fVar64 + fStack_47c;
      auVar201._8_4_ =
           (fVar217 * fVar97 - fVar159 * fVar177) + fVar218 * fVar115 + fVar66 + fStack_478;
      auVar201._12_4_ =
           (fVar219 * fVar98 - fVar160 * fVar179) + fVar220 * fVar116 + fVar68 + fStack_474;
      auVar201._16_4_ =
           (fVar221 * fVar99 - fVar161 * fVar181) + fVar222 * fVar117 + fVar70 + fStack_470;
      auVar201._20_4_ =
           (fVar223 * fVar100 - fVar163 * fVar183) + fVar224 * fVar118 + fVar73 + fStack_46c;
      auVar201._24_4_ =
           (fVar225 * fVar101 - fVar164 * fVar185) + fVar226 * fVar119 + fVar75 + fStack_468;
      auVar201._28_4_ =
           (fVar227 * fVar102 - fVar165 * fVar187) + fVar228 * fVar120 + fVar77 + fStack_464;
      local_460 = auVar91._0_4_;
      fStack_45c = auVar91._4_4_;
      fStack_458 = auVar91._8_4_;
      fStack_454 = auVar91._12_4_;
      fStack_450 = auVar91._16_4_;
      fStack_44c = auVar91._20_4_;
      fStack_448 = auVar91._24_4_;
      fStack_444 = auVar91._28_4_;
      auVar92._0_4_ =
           fVar212 * fVar170 + fVar22 + (fVar149 * fVar103 - fVar199 * fVar88) + local_460;
      auVar92._4_4_ =
           fVar216 * fVar175 + fVar34 + (fVar158 * fVar114 - fVar203 * fVar96) + fStack_45c;
      auVar92._8_4_ =
           fVar218 * fVar177 + fVar36 + (fVar159 * fVar115 - fVar204 * fVar97) + fStack_458;
      auVar92._12_4_ =
           fVar220 * fVar179 + fVar38 + (fVar160 * fVar116 - fVar205 * fVar98) + fStack_454;
      auVar92._16_4_ =
           fVar222 * fVar181 + fVar40 + (fVar161 * fVar117 - fVar206 * fVar99) + fStack_450;
      auVar92._20_4_ =
           fVar224 * fVar183 + fVar43 + (fVar163 * fVar118 - fVar208 * fVar100) + fStack_44c;
      auVar92._24_4_ =
           fVar226 * fVar185 + fVar45 + (fVar164 * fVar119 - fVar209 * fVar101) + fStack_448;
      auVar92._28_4_ =
           fVar228 * fVar187 + fVar47 + (fVar165 * fVar120 - fVar210 * fVar102) + fStack_444;
      auVar104._0_4_ =
           auVar230._0_4_ + (fVar199 * fVar170 - fVar211 * fVar103) + fVar212 * fVar88 + fVar79;
      auVar104._4_4_ =
           auVar230._4_4_ + (fVar203 * fVar175 - fVar215 * fVar114) + fVar216 * fVar96 + fVar81;
      auVar104._8_4_ =
           auVar230._8_4_ + (fVar204 * fVar177 - fVar217 * fVar115) + fVar218 * fVar97 + fVar82;
      auVar104._12_4_ =
           auVar230._12_4_ + (fVar205 * fVar179 - fVar219 * fVar116) + fVar220 * fVar98 + fVar83;
      auVar104._16_4_ =
           auVar230._16_4_ + (fVar206 * fVar181 - fVar221 * fVar117) + fVar222 * fVar99 + fVar84;
      auVar104._20_4_ =
           auVar230._20_4_ + (fVar208 * fVar183 - fVar223 * fVar118) + fVar224 * fVar100 + fVar85;
      auVar104._24_4_ =
           auVar230._24_4_ + (fVar209 * fVar185 - fVar225 * fVar119) + fVar226 * fVar101 + fVar86;
      auVar104._28_4_ =
           auVar230._28_4_ + (fVar210 * fVar187 - fVar227 * fVar120) + fVar228 * fVar102 + fVar87;
      uVar1 = *param_10;
      auVar151._4_4_ = uVar1;
      auVar151._0_4_ = uVar1;
      auVar151._8_4_ = uVar1;
      auVar151._12_4_ = uVar1;
      auVar151._16_4_ = uVar1;
      auVar151._20_4_ = uVar1;
      auVar151._24_4_ = uVar1;
      auVar151._28_4_ = uVar1;
      auVar105 = vsubps_avx(auVar201,auVar151);
      uVar1 = param_10[1];
      auVar52._4_4_ = uVar1;
      auVar52._0_4_ = uVar1;
      auVar52._8_4_ = uVar1;
      auVar52._12_4_ = uVar1;
      auVar52._16_4_ = uVar1;
      auVar52._20_4_ = uVar1;
      auVar52._24_4_ = uVar1;
      auVar52._28_4_ = uVar1;
      auVar121 = vsubps_avx(auVar92,auVar52);
      uVar1 = param_10[2];
      auVar53._4_4_ = uVar1;
      auVar53._0_4_ = uVar1;
      auVar53._8_4_ = uVar1;
      auVar53._12_4_ = uVar1;
      auVar53._16_4_ = uVar1;
      auVar53._20_4_ = uVar1;
      auVar53._24_4_ = uVar1;
      auVar53._28_4_ = uVar1;
      auVar153 = vsubps_avx(auVar104,auVar53);
      auVar3 = *(undefined1 (*) [32])(param_6 + param_12);
      auVar94 = vunpcklps_avx(auVar105,auVar121);
      auVar90 = vunpcklps_avx(auVar153,auVar3);
      auVar91 = vunpcklpd_avx(auVar94,auVar90);
      auVar94 = vunpckhpd_avx(auVar94,auVar90);
      auVar172._16_16_ = auVar94._0_16_;
      auVar172._0_16_ = auVar91._0_16_;
      pauVar18[-3] = auVar172;
      auVar3 = vunpckhps_avx(auVar153,auVar3);
      auVar90 = vunpckhps_avx(auVar105,auVar121);
      auVar126 = vunpcklpd_avx(auVar90,auVar3);
      auVar3 = vunpckhpd_avx(auVar90,auVar3);
      auVar173._16_16_ = auVar3._0_16_;
      auVar173._0_16_ = auVar126._0_16_;
      pauVar18[-2] = auVar173;
      auVar94 = vperm2f128_avx(auVar91,auVar94,0x31);
      pauVar18[-1] = auVar94;
      auVar3 = vperm2f128_avx(auVar126,auVar3,0x31);
      *pauVar18 = auVar3;
      auVar54._16_16_ = auVar121._0_16_;
      auVar54._0_16_ = auVar105._0_16_;
      auVar94 = vshufpd_avx(auVar105,auVar54,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar153);
      auVar3 = vpermpd_avx2(auVar121,0xe9);
      auVar3 = vblendps_avx(auVar90,auVar3,7);
      auVar90 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar3);
      auVar146 = vpermps_avx2(auVar146,auVar94);
      auVar146 = vblendps_avx(auVar146,auVar90,0xa4);
      *(undefined1 (*) [32])(lVar21 + -0x40 + lVar4) = auVar146;
      auVar3 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                            auVar3);
      auVar146 = vshufpd_avx(auVar105,auVar105,1);
      auVar146 = vblendps_avx(auVar3,auVar146,0x92);
      *(undefined1 (*) [32])(lVar21 + -0x20 + lVar4) = auVar146;
      auVar3 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001,
                            auVar121);
      auVar146 = vpermpd_avx2(auVar105,0xff);
      auVar146 = vblendps_avx(auVar3,auVar146,3);
      auVar146 = vblendps_avx(auVar146,auVar153,0xe0);
      auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar146);
      *(undefined1 (*) [32])(lVar21 + lVar4) = auVar146;
      auVar146 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar201 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar3 = *(undefined1 (*) [32])(lVar13 + -0x40 + lVar4);
      auVar94 = *(undefined1 (*) [32])(lVar13 + -0x20 + lVar4);
      auVar105 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar94);
      auVar121 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar3);
      auVar105 = vblendps_avx(auVar121,auVar105,0x88);
      auVar121 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar94);
      auVar153 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(lVar13 + lVar4));
      auVar121 = vblendps_avx(auVar153,auVar121,0x13);
      auVar153 = vperm2f128_avx(auVar105,auVar121,0x31);
      auVar3 = vblendps_avx(auVar94,auVar3,0x24);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar13 + lVar4));
      auVar3 = vblendps_avx(auVar3,auVar94,0xe0);
      fVar171 = fVar125 * auVar105._0_4_;
      fVar176 = fVar137 * auVar105._4_4_;
      fVar178 = fVar138 * auVar105._8_4_;
      fVar180 = fVar139 * auVar105._12_4_;
      fVar182 = fVar140 * auVar121._0_4_;
      fVar184 = fVar141 * auVar121._4_4_;
      fVar186 = fVar142 * auVar121._8_4_;
      fVar188 = fVar143 * auVar121._12_4_;
      fVar191 = auVar153._0_4_ * fVar23;
      fVar192 = auVar153._4_4_ * fVar35;
      fVar193 = auVar153._8_4_ * fVar37;
      fVar194 = auVar153._12_4_ * fVar39;
      fVar195 = auVar153._16_4_ * fVar41;
      fVar196 = auVar153._20_4_ * fVar44;
      fVar197 = auVar153._24_4_ * fVar46;
      fVar198 = auVar153._28_4_ * fVar48;
      fVar103 = auVar3._0_4_ * fVar50;
      fVar114 = auVar3._4_4_ * fVar65;
      fVar115 = auVar3._8_4_ * fVar67;
      fVar116 = auVar3._12_4_ * fVar69;
      fVar117 = auVar3._16_4_ * fVar71;
      fVar118 = auVar3._20_4_ * fVar74;
      fVar119 = auVar3._24_4_ * fVar76;
      fVar120 = auVar3._28_4_ * fVar78;
      fVar22 = fVar199 * fVar191 - fVar211 * fVar171;
      fVar34 = fVar203 * fVar192 - fVar215 * fVar176;
      fVar36 = fVar204 * fVar193 - fVar217 * fVar178;
      fVar38 = fVar205 * fVar194 - fVar219 * fVar180;
      fVar40 = fVar206 * fVar195 - fVar221 * fVar182;
      fVar43 = fVar208 * fVar196 - fVar223 * fVar184;
      fVar45 = fVar209 * fVar197 - fVar225 * fVar186;
      fVar47 = fVar210 * fVar198 - fVar227 * fVar188;
      fVar49 = fVar211 * fVar103 - fVar149 * fVar191;
      fVar66 = fVar215 * fVar114 - fVar158 * fVar192;
      fVar70 = fVar217 * fVar115 - fVar159 * fVar193;
      fVar75 = fVar219 * fVar116 - fVar160 * fVar194;
      fVar79 = fVar221 * fVar117 - fVar161 * fVar195;
      fVar82 = fVar223 * fVar118 - fVar163 * fVar196;
      fVar84 = fVar225 * fVar119 - fVar164 * fVar197;
      fVar86 = fVar227 * fVar120 - fVar165 * fVar198;
      fVar64 = fVar149 * fVar171 - fVar199 * fVar103;
      fVar68 = fVar158 * fVar176 - fVar203 * fVar114;
      fVar73 = fVar159 * fVar178 - fVar204 * fVar115;
      fVar77 = fVar160 * fVar180 - fVar205 * fVar116;
      fVar81 = fVar161 * fVar182 - fVar206 * fVar117;
      fVar83 = fVar163 * fVar184 - fVar208 * fVar118;
      fVar85 = fVar164 * fVar186 - fVar209 * fVar119;
      fVar87 = fVar165 * fVar188 - fVar210 * fVar120;
      fVar49 = fVar49 + fVar49;
      fVar66 = fVar66 + fVar66;
      fVar70 = fVar70 + fVar70;
      fVar75 = fVar75 + fVar75;
      fVar79 = fVar79 + fVar79;
      fVar82 = fVar82 + fVar82;
      fVar84 = fVar84 + fVar84;
      fVar86 = fVar86 + fVar86;
      fVar64 = fVar64 + fVar64;
      fVar68 = fVar68 + fVar68;
      fVar73 = fVar73 + fVar73;
      fVar77 = fVar77 + fVar77;
      fVar81 = fVar81 + fVar81;
      fVar83 = fVar83 + fVar83;
      fVar85 = fVar85 + fVar85;
      fVar87 = fVar87 + fVar87;
      fVar22 = fVar22 + fVar22;
      fVar34 = fVar34 + fVar34;
      fVar36 = fVar36 + fVar36;
      fVar38 = fVar38 + fVar38;
      fVar40 = fVar40 + fVar40;
      fVar43 = fVar43 + fVar43;
      fVar45 = fVar45 + fVar45;
      fVar47 = fVar47 + fVar47;
      auVar3 = *(undefined1 (*) [32])(lVar17 + -0x40 + lVar4);
      auVar94 = *(undefined1 (*) [32])(lVar17 + -0x20 + lVar4);
      auVar105 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar94);
      auVar121 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar3);
      auVar105 = vblendps_avx(auVar121,auVar105,0x88);
      auVar121 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar94);
      auVar153 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(lVar17 + lVar4));
      auVar121 = vblendps_avx(auVar153,auVar121,0x13);
      auVar153 = vperm2f128_avx(auVar105,auVar121,0x31);
      auVar3 = vblendps_avx(auVar94,auVar3,0x24);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar17 + lVar4));
      auVar3 = vblendps_avx(auVar3,auVar94,0xe0);
      fVar125 = auVar105._0_4_ * fVar125;
      fVar137 = auVar105._4_4_ * fVar137;
      fVar138 = auVar105._8_4_ * fVar138;
      fVar139 = auVar105._12_4_ * fVar139;
      fVar140 = auVar121._0_4_ * fVar140;
      fVar141 = auVar121._4_4_ * fVar141;
      fVar142 = auVar121._8_4_ * fVar142;
      fVar143 = auVar121._12_4_ * fVar143;
      fVar23 = auVar153._0_4_ * fVar23;
      fVar35 = auVar153._4_4_ * fVar35;
      fVar37 = auVar153._8_4_ * fVar37;
      fVar39 = auVar153._12_4_ * fVar39;
      fVar41 = auVar153._16_4_ * fVar41;
      fVar44 = auVar153._20_4_ * fVar44;
      fVar46 = auVar153._24_4_ * fVar46;
      fVar48 = auVar153._28_4_ * fVar48;
      fVar50 = auVar3._0_4_ * fVar50;
      fVar65 = auVar3._4_4_ * fVar65;
      fVar67 = auVar3._8_4_ * fVar67;
      fVar69 = auVar3._12_4_ * fVar69;
      fVar71 = auVar3._16_4_ * fVar71;
      fVar74 = auVar3._20_4_ * fVar74;
      fVar76 = auVar3._24_4_ * fVar76;
      fVar78 = auVar3._28_4_ * fVar78;
      fVar88 = fVar199 * fVar23 - fVar211 * fVar125;
      fVar96 = fVar203 * fVar35 - fVar215 * fVar137;
      fVar97 = fVar204 * fVar37 - fVar217 * fVar138;
      fVar98 = fVar205 * fVar39 - fVar219 * fVar139;
      fVar99 = fVar206 * fVar41 - fVar221 * fVar140;
      fVar100 = fVar208 * fVar44 - fVar223 * fVar141;
      fVar101 = fVar209 * fVar46 - fVar225 * fVar142;
      fVar102 = fVar210 * fVar48 - fVar227 * fVar143;
      fVar170 = fVar211 * fVar50 - fVar149 * fVar23;
      fVar175 = fVar215 * fVar65 - fVar158 * fVar35;
      fVar177 = fVar217 * fVar67 - fVar159 * fVar37;
      fVar179 = fVar219 * fVar69 - fVar160 * fVar39;
      fVar181 = fVar221 * fVar71 - fVar161 * fVar41;
      fVar183 = fVar223 * fVar74 - fVar163 * fVar44;
      fVar185 = fVar225 * fVar76 - fVar164 * fVar46;
      fVar187 = fVar227 * fVar78 - fVar165 * fVar48;
      fVar229 = fVar149 * fVar125 - fVar199 * fVar50;
      fVar231 = fVar158 * fVar137 - fVar203 * fVar65;
      fVar232 = fVar159 * fVar138 - fVar204 * fVar67;
      fVar233 = fVar160 * fVar139 - fVar205 * fVar69;
      fVar234 = fVar161 * fVar140 - fVar206 * fVar71;
      fVar235 = fVar163 * fVar141 - fVar208 * fVar74;
      fVar236 = fVar164 * fVar142 - fVar209 * fVar76;
      fVar237 = fVar165 * fVar143 - fVar210 * fVar78;
      fVar170 = fVar170 + fVar170;
      fVar175 = fVar175 + fVar175;
      fVar177 = fVar177 + fVar177;
      fVar179 = fVar179 + fVar179;
      fVar181 = fVar181 + fVar181;
      fVar183 = fVar183 + fVar183;
      fVar185 = fVar185 + fVar185;
      fVar187 = fVar187 + fVar187;
      fVar229 = fVar229 + fVar229;
      fVar231 = fVar231 + fVar231;
      fVar232 = fVar232 + fVar232;
      fVar233 = fVar233 + fVar233;
      fVar234 = fVar234 + fVar234;
      fVar235 = fVar235 + fVar235;
      fVar236 = fVar236 + fVar236;
      fVar237 = fVar237 + fVar237;
      fVar88 = fVar88 + fVar88;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar98 = fVar98 + fVar98;
      fVar99 = fVar99 + fVar99;
      fVar100 = fVar100 + fVar100;
      fVar101 = fVar101 + fVar101;
      fVar102 = fVar102 + fVar102;
      auVar153._0_4_ = (fVar199 * fVar64 - fVar211 * fVar49) + fVar212 * fVar22 + fVar103;
      auVar153._4_4_ = (fVar203 * fVar68 - fVar215 * fVar66) + fVar216 * fVar34 + fVar114;
      auVar153._8_4_ = (fVar204 * fVar73 - fVar217 * fVar70) + fVar218 * fVar36 + fVar115;
      auVar153._12_4_ = (fVar205 * fVar77 - fVar219 * fVar75) + fVar220 * fVar38 + fVar116;
      auVar153._16_4_ = (fVar206 * fVar81 - fVar221 * fVar79) + fVar222 * fVar40 + fVar117;
      auVar153._20_4_ = (fVar208 * fVar83 - fVar223 * fVar82) + fVar224 * fVar43 + fVar118;
      auVar153._24_4_ = (fVar209 * fVar85 - fVar225 * fVar84) + fVar226 * fVar45 + fVar119;
      auVar153._28_4_ = (fVar210 * fVar87 - fVar227 * fVar86) + fVar228 * fVar47 + fVar120;
      auVar105._0_4_ = fVar212 * fVar49 + fVar171 + (fVar211 * fVar22 - fVar149 * fVar64);
      auVar105._4_4_ = fVar216 * fVar66 + fVar176 + (fVar215 * fVar34 - fVar158 * fVar68);
      auVar105._8_4_ = fVar218 * fVar70 + fVar178 + (fVar217 * fVar36 - fVar159 * fVar73);
      auVar105._12_4_ = fVar220 * fVar75 + fVar180 + (fVar219 * fVar38 - fVar160 * fVar77);
      auVar105._16_4_ = fVar222 * fVar79 + fVar182 + (fVar221 * fVar40 - fVar161 * fVar81);
      auVar105._20_4_ = fVar224 * fVar82 + fVar184 + (fVar223 * fVar43 - fVar163 * fVar83);
      auVar105._24_4_ = fVar226 * fVar84 + fVar186 + (fVar225 * fVar45 - fVar164 * fVar85);
      auVar105._28_4_ = fVar228 * fVar86 + fVar188 + (fVar227 * fVar47 - fVar165 * fVar87);
      auVar121._0_4_ = fVar212 * fVar64 + fVar191 + (fVar149 * fVar49 - fVar199 * fVar22);
      auVar121._4_4_ = fVar216 * fVar68 + fVar192 + (fVar158 * fVar66 - fVar203 * fVar34);
      auVar121._8_4_ = fVar218 * fVar73 + fVar193 + (fVar159 * fVar70 - fVar204 * fVar36);
      auVar121._12_4_ = fVar220 * fVar77 + fVar194 + (fVar160 * fVar75 - fVar205 * fVar38);
      auVar121._16_4_ = fVar222 * fVar81 + fVar195 + (fVar161 * fVar79 - fVar206 * fVar40);
      auVar121._20_4_ = fVar224 * fVar83 + fVar196 + (fVar163 * fVar82 - fVar208 * fVar43);
      auVar121._24_4_ = fVar226 * fVar85 + fVar197 + (fVar164 * fVar84 - fVar209 * fVar45);
      auVar121._28_4_ = fVar228 * fVar87 + fVar198 + (fVar165 * fVar86 - fVar210 * fVar47);
      auVar93._0_4_ =
           (fVar88 * fVar211 - fVar149 * fVar229) + fVar212 * fVar170 + fVar125 + local_480;
      auVar93._4_4_ =
           (fVar96 * fVar215 - fVar158 * fVar231) + fVar216 * fVar175 + fVar137 + fStack_47c;
      auVar93._8_4_ =
           (fVar97 * fVar217 - fVar159 * fVar232) + fVar218 * fVar177 + fVar138 + fStack_478;
      auVar93._12_4_ =
           (fVar98 * fVar219 - fVar160 * fVar233) + fVar220 * fVar179 + fVar139 + fStack_474;
      auVar93._16_4_ =
           (fVar99 * fVar221 - fVar161 * fVar234) + fVar222 * fVar181 + fVar140 + fStack_470;
      auVar93._20_4_ =
           (fVar100 * fVar223 - fVar163 * fVar235) + fVar224 * fVar183 + fVar141 + fStack_46c;
      auVar93._24_4_ =
           (fVar101 * fVar225 - fVar164 * fVar236) + fVar226 * fVar185 + fVar142 + fStack_468;
      auVar93._28_4_ =
           (fVar102 * fVar227 - fVar165 * fVar237) + fVar228 * fVar187 + fVar143 + fStack_464;
      auVar213._0_4_ =
           (fVar170 * fVar149 - fVar199 * fVar88) + fVar212 * fVar229 + fVar23 + local_460;
      auVar213._4_4_ =
           (fVar175 * fVar158 - fVar203 * fVar96) + fVar216 * fVar231 + fVar35 + fStack_45c;
      auVar213._8_4_ =
           (fVar177 * fVar159 - fVar204 * fVar97) + fVar218 * fVar232 + fVar37 + fStack_458;
      auVar213._12_4_ =
           (fVar179 * fVar160 - fVar205 * fVar98) + fVar220 * fVar233 + fVar39 + fStack_454;
      auVar213._16_4_ =
           (fVar181 * fVar161 - fVar206 * fVar99) + fVar222 * fVar234 + fVar41 + fStack_450;
      auVar213._20_4_ =
           (fVar183 * fVar163 - fVar208 * fVar100) + fVar224 * fVar235 + fVar44 + fStack_44c;
      auVar213._24_4_ =
           (fVar185 * fVar164 - fVar209 * fVar101) + fVar226 * fVar236 + fVar46 + fStack_448;
      auVar213._28_4_ =
           (fVar187 * fVar165 - fVar210 * fVar102) + fVar228 * fVar237 + fVar48 + fStack_444;
      auVar127._0_4_ =
           fVar88 * fVar212 + fVar50 + (fVar229 * fVar199 - fVar211 * fVar170) + auVar230._0_4_;
      auVar127._4_4_ =
           fVar96 * fVar216 + fVar65 + (fVar231 * fVar203 - fVar215 * fVar175) + auVar230._4_4_;
      auVar127._8_4_ =
           fVar97 * fVar218 + fVar67 + (fVar232 * fVar204 - fVar217 * fVar177) + auVar230._8_4_;
      auVar127._12_4_ =
           fVar98 * fVar220 + fVar69 + (fVar233 * fVar205 - fVar219 * fVar179) + auVar230._12_4_;
      auVar127._16_4_ =
           fVar99 * fVar222 + fVar71 + (fVar234 * fVar206 - fVar221 * fVar181) + auVar230._16_4_;
      auVar127._20_4_ =
           fVar100 * fVar224 + fVar74 + (fVar235 * fVar208 - fVar223 * fVar183) + auVar230._20_4_;
      auVar127._24_4_ =
           fVar101 * fVar226 + fVar76 + (fVar236 * fVar209 - fVar225 * fVar185) + auVar230._24_4_;
      auVar127._28_4_ =
           fVar102 * fVar228 + fVar78 + (fVar237 * fVar210 - fVar227 * fVar187) + auVar230._28_4_;
      auVar126 = vsubps_avx(auVar93,auVar151);
      auVar144 = vsubps_avx(auVar213,auVar52);
      auVar151 = vsubps_avx(auVar127,auVar53);
      auVar230._16_16_ = auVar144._0_16_;
      auVar230._0_16_ = auVar126._0_16_;
      auVar94 = vshufpd_avx(auVar126,auVar230,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar151);
      auVar3 = vpermpd_avx2(auVar144,0xe9);
      auVar3 = vblendps_avx(auVar90,auVar3,7);
      auVar90 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar94);
      auVar94 = vblendps_avx(auVar94,auVar90,0xa4);
      *(undefined1 (*) [32])(lVar17 + -0x40 + lVar4) = auVar94;
      auVar213 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar94 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar3);
      auVar3 = vshufpd_avx(auVar126,auVar126,1);
      auVar3 = vblendps_avx(auVar94,auVar3,0x92);
      *(undefined1 (*) [32])(lVar17 + -0x20 + lVar4) = auVar3;
      auVar52 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar94 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar144);
      auVar3 = vpermpd_avx2(auVar126,0xff);
      auVar3 = vblendps_avx(auVar94,auVar3,3);
      auVar3 = vblendps_avx(auVar3,auVar151,0xe0);
      auVar3 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                            auVar3);
      *(undefined1 (*) [32])(lVar17 + lVar4) = auVar3;
      auVar3 = *(undefined1 (*) [32])(lVar14 + -0x40 + lVar4);
      auVar94 = *(undefined1 (*) [32])(lVar14 + -0x20 + lVar4);
      auVar90 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar94);
      auVar91 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar3);
      auVar90 = vblendps_avx(auVar91,auVar90,0x88);
      auVar91 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar94);
      auVar166 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(lVar14 + lVar4));
      auVar91 = vblendps_avx(auVar166,auVar91,0x13);
      auVar190._16_16_ = auVar91._0_16_;
      auVar190._0_16_ = auVar90._0_16_;
      auVar91 = vperm2f128_avx(auVar90,auVar91,0x31);
      auVar3 = vblendps_avx(auVar94,auVar3,0x24);
      auVar3 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar3);
      auVar94 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar14 + lVar4));
      auVar3 = vblendps_avx(auVar3,auVar94,0xe0);
      auVar94 = vsubps_avx(auVar190,auVar126);
      auVar166._4_4_ = param_14;
      auVar166._0_4_ = param_14;
      auVar166._8_4_ = param_14;
      auVar166._12_4_ = param_14;
      auVar166._16_4_ = param_14;
      auVar166._20_4_ = param_14;
      auVar166._24_4_ = param_14;
      auVar166._28_4_ = param_14;
      auVar189._4_4_ = param_11;
      auVar189._0_4_ = param_11;
      auVar189._8_4_ = param_11;
      auVar189._12_4_ = param_11;
      auVar189._16_4_ = param_11;
      auVar189._20_4_ = param_11;
      auVar189._24_4_ = param_11;
      auVar189._28_4_ = param_11;
      auVar90 = vdivps_avx(auVar94,auVar189);
      auVar94 = vsubps_avx(auVar91,auVar144);
      auVar91 = vdivps_avx(auVar94,auVar189);
      auVar3 = vsubps_avx(auVar3,auVar151);
      auVar126 = vdivps_avx(auVar3,auVar189);
      auVar128._16_16_ = auVar91._0_16_;
      auVar128._0_16_ = auVar90._0_16_;
      auVar94 = vshufpd_avx(auVar90,auVar128,2);
      auVar144 = vpermps_avx2(auVar201,auVar126);
      auVar3 = vpermpd_avx2(auVar91,0xe9);
      auVar3 = vblendps_avx(auVar144,auVar3,7);
      auVar144 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                              ,auVar3);
      auVar94 = vpermps_avx2(auVar146,auVar94);
      auVar94 = vblendps_avx(auVar94,auVar144,0xa4);
      *(undefined1 (*) [32])(lVar11 + -0x40 + lVar4) = auVar94;
      auVar94 = vpermps_avx2(auVar213,auVar3);
      auVar3 = vshufpd_avx(auVar90,auVar90,1);
      auVar3 = vblendps_avx(auVar94,auVar3,0x92);
      *(undefined1 (*) [32])(lVar11 + -0x20 + lVar4) = auVar3;
      auVar94 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar91);
      auVar3 = vpermpd_avx2(auVar90,0xff);
      auVar3 = vblendps_avx(auVar94,auVar3,3);
      auVar3 = vblendps_avx(auVar3,auVar126,0xe0);
      auVar3 = vpermps_avx2(auVar52,auVar3);
      *(undefined1 (*) [32])(lVar11 + lVar4) = auVar3;
      auVar3 = vsubps_avx(auVar105,auVar90);
      auVar94 = vsubps_avx(auVar121,auVar91);
      auVar144 = vsubps_avx(auVar153,auVar126);
      fVar22 = auVar94._0_4_;
      fVar23 = auVar94._4_4_;
      fVar34 = auVar94._8_4_;
      fVar35 = auVar94._12_4_;
      fVar36 = auVar94._16_4_;
      fVar37 = auVar94._20_4_;
      fVar38 = auVar94._24_4_;
      fVar39 = auVar94._28_4_;
      fVar40 = auVar3._0_4_;
      fVar41 = auVar3._4_4_;
      fVar43 = auVar3._8_4_;
      fVar44 = auVar3._12_4_;
      fVar45 = auVar3._16_4_;
      fVar46 = auVar3._20_4_;
      fVar47 = auVar3._24_4_;
      fVar48 = auVar3._28_4_;
      fVar49 = auVar144._0_4_;
      auVar174._0_4_ = fVar49 * fVar49 + fVar40 * fVar40 + fVar22 * fVar22;
      fVar64 = auVar144._4_4_;
      auVar174._4_4_ = fVar64 * fVar64 + fVar41 * fVar41 + fVar23 * fVar23;
      fVar50 = auVar144._8_4_;
      auVar174._8_4_ = fVar50 * fVar50 + fVar43 * fVar43 + fVar34 * fVar34;
      fVar66 = auVar144._12_4_;
      auVar174._12_4_ = fVar66 * fVar66 + fVar44 * fVar44 + fVar35 * fVar35;
      fVar68 = auVar144._16_4_;
      auVar174._16_4_ = fVar68 * fVar68 + fVar45 * fVar45 + fVar36 * fVar36;
      fVar65 = auVar144._20_4_;
      auVar174._20_4_ = fVar65 * fVar65 + fVar46 * fVar46 + fVar37 * fVar37;
      fVar70 = auVar144._24_4_;
      auVar174._24_4_ = fVar70 * fVar70 + fVar47 * fVar47 + fVar38 * fVar38;
      fVar73 = auVar144._28_4_;
      auVar174._28_4_ = fVar73 * fVar73 + fVar48 * fVar48 + fVar39 * fVar39;
      auVar3 = vcmpps_avx(auVar166,auVar174,1);
      if ((((((((SUB321(auVar3 >> 0x1f,0) & 1) != 0 || (SUB321(auVar3 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar3 >> 0x5f,0) & 1) != 0) || SUB321(auVar3 >> 0x7f,0) != '\0') ||
            (SUB321(auVar3 >> 0x9f,0) & 1) != 0) || SUB321(auVar3 >> 0xbf,0) != '\0') ||
          (SUB321(auVar3 >> 0xdf,0) & 1) != 0) || auVar3[0x1f] < '\0') {
        auVar94 = vdivps_avx(auVar166,auVar174);
        auVar94 = vsqrtps_avx(auVar94);
        fVar67 = auVar94._0_4_;
        auVar129._0_4_ = fVar67 * fVar40 + auVar90._0_4_;
        fVar40 = auVar94._4_4_;
        auVar129._4_4_ = fVar40 * fVar41 + auVar90._4_4_;
        fVar41 = auVar94._8_4_;
        auVar129._8_4_ = fVar41 * fVar43 + auVar90._8_4_;
        fVar43 = auVar94._12_4_;
        auVar129._12_4_ = fVar43 * fVar44 + auVar90._12_4_;
        fVar44 = auVar94._16_4_;
        auVar129._16_4_ = fVar44 * fVar45 + auVar90._16_4_;
        fVar45 = auVar94._20_4_;
        auVar129._20_4_ = fVar45 * fVar46 + auVar90._20_4_;
        fVar46 = auVar94._24_4_;
        auVar129._24_4_ = fVar46 * fVar47 + auVar90._24_4_;
        fVar47 = auVar94._28_4_;
        auVar129._28_4_ = fVar47 * fVar48 + auVar90._28_4_;
        auVar145._0_4_ = fVar67 * fVar22 + auVar91._0_4_;
        auVar145._4_4_ = fVar40 * fVar23 + auVar91._4_4_;
        auVar145._8_4_ = fVar41 * fVar34 + auVar91._8_4_;
        auVar145._12_4_ = fVar43 * fVar35 + auVar91._12_4_;
        auVar145._16_4_ = fVar44 * fVar36 + auVar91._16_4_;
        auVar145._20_4_ = fVar45 * fVar37 + auVar91._20_4_;
        auVar145._24_4_ = fVar46 * fVar38 + auVar91._24_4_;
        auVar145._28_4_ = fVar47 * fVar39 + auVar91._28_4_;
        auVar152._0_4_ = fVar67 * fVar49 + auVar126._0_4_;
        auVar152._4_4_ = fVar40 * fVar64 + auVar126._4_4_;
        auVar152._8_4_ = fVar41 * fVar50 + auVar126._8_4_;
        auVar152._12_4_ = fVar43 * fVar66 + auVar126._12_4_;
        auVar152._16_4_ = fVar44 * fVar68 + auVar126._16_4_;
        auVar152._20_4_ = fVar45 * fVar65 + auVar126._20_4_;
        auVar152._24_4_ = fVar46 * fVar70 + auVar126._24_4_;
        auVar152._28_4_ = fVar47 * fVar73 + auVar126._28_4_;
        auVar105 = vmaskmovps_avx(auVar3,auVar129);
        auVar121 = vmaskmovps_avx(auVar3,auVar145);
        auVar153 = vmaskmovps_avx(auVar3,auVar152);
      }
      in_ZMM2 = ZEXT3264(auVar153);
      auVar25._16_16_ = auVar121._0_16_;
      auVar25._0_16_ = auVar105._0_16_;
      auVar94 = vshufpd_avx(auVar105,auVar25,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar153);
      auVar3 = vpermpd_avx2(auVar121,0xe9);
      auVar3 = vblendps_avx(auVar90,auVar3,7);
      auVar89._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar89._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar90 = vpermps_avx2(auVar89,auVar3);
      auVar94 = vpermps_avx2(auVar146,auVar94);
      auVar94 = vblendps_avx(auVar94,auVar90,0xa4);
      *(undefined1 (*) [32])(lVar13 + -0x40 + lVar4) = auVar94;
      auVar94 = vpermps_avx2(auVar213,auVar3);
      auVar3 = vshufpd_avx(auVar105,auVar105,1);
      auVar3 = vblendps_avx(auVar94,auVar3,0x92);
      *(undefined1 (*) [32])(lVar13 + -0x20 + lVar4) = auVar3;
      auVar26._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar26._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar94 = vpermps_avx2(auVar26,auVar121);
      auVar3 = vpermpd_avx2(auVar105,0xff);
      auVar3 = vblendps_avx(auVar94,auVar3,3);
      auVar3 = vblendps_avx(auVar3,auVar153,0xe0);
      auVar3 = vpermps_avx2(auVar52,auVar3);
      *(undefined1 (*) [32])(lVar13 + lVar4) = auVar3;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + 0x60;
      pauVar18 = pauVar18 + 4;
      lVar13 = lVar13 + 0x60;
      lVar17 = lVar17 + 0x60;
      lVar14 = lVar14 + 0x60;
      lVar11 = lVar11 + 0x60;
      param_12 = param_12 + 0x20;
    } while (lVar20 < iVar10);
    param_12 = (int)lVar20;
  }
  if (param_12 < param_13) {
    auVar146._0_4_ =
         param_12 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar146._4_4_ = param_12 + _UNK_150b50ae4;
    auVar146._8_4_ = param_12 + _UNK_150b50ae8;
    auVar146._12_4_ = param_12 + _UNK_150b50aec;
    auVar146._16_4_ = param_12 + _UNK_150b50af0;
    auVar146._20_4_ = param_12 + _UNK_150b50af4;
    auVar146._24_4_ = param_12 + _UNK_150b50af8;
    auVar146._28_4_ = param_12 + _UNK_150b50afc;
    auVar55._4_4_ = param_13;
    auVar55._0_4_ = param_13;
    auVar55._8_4_ = param_13;
    auVar55._12_4_ = param_13;
    auVar55._16_4_ = param_13;
    auVar55._20_4_ = param_13;
    auVar55._24_4_ = param_13;
    auVar55._28_4_ = param_13;
    auVar3 = vpcmpgtd_avx2(auVar55,auVar146);
    auVar146 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_8 + param_12 * 4));
    auVar56._4_4_ = __real_00000006;
    auVar56._0_4_ = __real_00000006;
    auVar56._8_4_ = __real_00000006;
    auVar56._12_4_ = __real_00000006;
    auVar56._16_4_ = __real_00000006;
    auVar56._20_4_ = __real_00000006;
    auVar56._24_4_ = __real_00000006;
    auVar56._28_4_ = __real_00000006;
    vpmulld_avx2(auVar146,auVar56);
    auVar94 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar57._4_4_ = __real_00000030;
    auVar57._0_4_ = __real_00000030;
    auVar57._8_4_ = __real_00000030;
    auVar57._12_4_ = __real_00000030;
    auVar57._16_4_ = __real_00000030;
    auVar57._20_4_ = __real_00000030;
    auVar57._24_4_ = __real_00000030;
    auVar57._28_4_ = __real_00000030;
    auVar146 = vpmulld_avx2(auVar146,auVar57);
    auVar58._4_4_ = __real_00000004;
    auVar58._0_4_ = __real_00000004;
    auVar58._8_4_ = __real_00000004;
    auVar58._12_4_ = __real_00000004;
    auVar58._16_4_ = __real_00000004;
    auVar58._20_4_ = __real_00000004;
    auVar58._24_4_ = __real_00000004;
    auVar58._28_4_ = __real_00000004;
    vpor_avx2(auVar146,auVar58);
    auVar105 = vgatherdps(ZEXT832(0),auVar3);
    auVar59._4_4_ = __real_00000008;
    auVar59._0_4_ = __real_00000008;
    auVar59._8_4_ = __real_00000008;
    auVar59._12_4_ = __real_00000008;
    auVar59._16_4_ = __real_00000008;
    auVar59._20_4_ = __real_00000008;
    auVar59._24_4_ = __real_00000008;
    auVar59._28_4_ = __real_00000008;
    vpor_avx2(auVar146,auVar59);
    auVar121 = vgatherdps(ZEXT832(0),auVar3);
    auVar60._4_4_ = __real_0000000c;
    auVar60._0_4_ = __real_0000000c;
    auVar60._8_4_ = __real_0000000c;
    auVar60._12_4_ = __real_0000000c;
    auVar60._16_4_ = __real_0000000c;
    auVar60._20_4_ = __real_0000000c;
    auVar60._24_4_ = __real_0000000c;
    auVar60._28_4_ = __real_0000000c;
    vpor_avx2(auVar146,auVar60);
    auVar146 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar91 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar126 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar153 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar90 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
    auVar144 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    auVar151 = vgatherdps(ZEXT1632(ZEXT816(0)),auVar3);
    lVar21 = (longlong)param_12;
    pauVar18 = (undefined1 (*) [32])(param_3 + lVar21 * 0xc);
    uVar16 = vmovmskps_avx(auVar3);
    if (uVar16 == 0xff) {
      auVar166 = pauVar18[1];
      auVar189 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                              ,auVar166);
      auVar201 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,*pauVar18);
      auVar189 = vblendps_avx(auVar201,auVar189,0x88);
      auVar201 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar166);
      auVar213 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,pauVar18[2]);
      auVar201 = vblendps_avx(auVar213,auVar201,0x13);
      auVar61._16_16_ = auVar201._0_16_;
      auVar61._0_16_ = auVar189._0_16_;
      auVar189 = vperm2f128_avx(auVar189,auVar201,0x31);
      auVar166 = vblendps_avx(auVar166,*pauVar18,0x24);
      auVar166 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar166);
      auVar154._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar154._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar201 = vpermps_avx2(auVar154,pauVar18[2]);
      auVar166 = vblendps_avx(auVar166,auVar201,0xe0);
    }
    else {
      auVar61 = vgatherdps(ZEXT832(0),auVar3);
      auVar189 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar166 = vgatherdps(ZEXT432(0) << 0x20,auVar3);
    }
    pauVar12 = (undefined1 (*) [32])(param_1 + lVar21 * 0x10);
    cVar15 = (char)uVar16;
    local_480 = auVar90._0_4_;
    fStack_47c = auVar90._4_4_;
    fStack_478 = auVar90._8_4_;
    fStack_474 = auVar90._12_4_;
    fStack_470 = auVar90._16_4_;
    fStack_46c = auVar90._20_4_;
    fStack_468 = auVar90._24_4_;
    fStack_464 = auVar90._28_4_;
    fVar149 = auVar61._0_4_ * local_480;
    fVar158 = auVar61._4_4_ * fStack_47c;
    fVar159 = auVar61._8_4_ * fStack_478;
    fVar160 = auVar61._12_4_ * fStack_474;
    fVar161 = auVar61._16_4_ * fStack_470;
    fVar163 = auVar61._20_4_ * fStack_46c;
    fVar164 = auVar61._24_4_ * fStack_468;
    fVar165 = auVar61._28_4_ * fStack_464;
    fVar64 = auVar144._0_4_;
    fVar49 = fVar64 * auVar189._0_4_;
    fVar66 = auVar144._4_4_;
    fVar50 = fVar66 * auVar189._4_4_;
    fVar65 = auVar144._8_4_;
    fVar68 = fVar65 * auVar189._8_4_;
    fVar73 = auVar144._12_4_;
    fVar70 = fVar73 * auVar189._12_4_;
    fVar75 = auVar144._16_4_;
    fVar67 = fVar75 * auVar189._16_4_;
    fVar69 = auVar144._20_4_;
    fVar77 = fVar69 * auVar189._20_4_;
    fVar81 = auVar144._24_4_;
    fVar79 = fVar81 * auVar189._24_4_;
    fVar82 = auVar144._28_4_;
    fVar71 = fVar82 * auVar189._28_4_;
    fVar114 = auVar151._0_4_;
    fVar40 = fVar114 * auVar166._0_4_;
    fVar116 = auVar151._4_4_;
    fVar41 = fVar116 * auVar166._4_4_;
    fVar118 = auVar151._8_4_;
    fVar43 = fVar118 * auVar166._8_4_;
    fVar120 = auVar151._12_4_;
    fVar44 = fVar120 * auVar166._12_4_;
    fVar175 = auVar151._16_4_;
    fVar45 = fVar175 * auVar166._16_4_;
    fVar179 = auVar151._20_4_;
    fVar46 = fVar179 * auVar166._20_4_;
    fVar183 = auVar151._24_4_;
    fVar47 = fVar183 * auVar166._24_4_;
    fVar187 = auVar151._28_4_;
    fVar48 = fVar187 * auVar166._28_4_;
    fVar22 = auVar105._0_4_;
    fVar23 = auVar105._4_4_;
    fVar34 = auVar105._8_4_;
    fVar35 = auVar105._12_4_;
    fVar36 = auVar105._16_4_;
    fVar37 = auVar105._20_4_;
    fVar38 = auVar105._24_4_;
    fVar39 = auVar105._28_4_;
    fVar88 = auVar121._0_4_;
    fVar96 = auVar121._4_4_;
    fVar97 = auVar121._8_4_;
    fVar98 = auVar121._12_4_;
    fVar99 = auVar121._16_4_;
    fVar100 = auVar121._20_4_;
    fVar101 = auVar121._24_4_;
    fVar102 = auVar121._28_4_;
    fVar83 = auVar94._0_4_;
    fVar74 = auVar94._4_4_;
    fVar84 = auVar94._8_4_;
    fVar85 = auVar94._12_4_;
    fVar76 = auVar94._16_4_;
    fVar86 = auVar94._20_4_;
    fVar87 = auVar94._24_4_;
    fVar78 = auVar94._28_4_;
    fVar103 = fVar83 * fVar49 - fVar149 * fVar22;
    fVar115 = fVar74 * fVar50 - fVar158 * fVar23;
    fVar117 = fVar84 * fVar68 - fVar159 * fVar34;
    fVar119 = fVar85 * fVar70 - fVar160 * fVar35;
    fVar170 = fVar76 * fVar67 - fVar161 * fVar36;
    fVar177 = fVar86 * fVar77 - fVar163 * fVar37;
    fVar181 = fVar87 * fVar79 - fVar164 * fVar38;
    fVar185 = fVar78 * fVar71 - fVar165 * fVar39;
    fVar171 = fVar22 * fVar40 - fVar88 * fVar49;
    fVar176 = fVar23 * fVar41 - fVar96 * fVar50;
    fVar178 = fVar34 * fVar43 - fVar97 * fVar68;
    fVar180 = fVar35 * fVar44 - fVar98 * fVar70;
    fVar182 = fVar36 * fVar45 - fVar99 * fVar67;
    fVar184 = fVar37 * fVar46 - fVar100 * fVar77;
    fVar186 = fVar38 * fVar47 - fVar101 * fVar79;
    fVar188 = fVar39 * fVar48 - fVar102 * fVar71;
    fVar212 = fVar88 * fVar149 - fVar83 * fVar40;
    fVar216 = fVar96 * fVar158 - fVar74 * fVar41;
    fVar218 = fVar97 * fVar159 - fVar84 * fVar43;
    fVar220 = fVar98 * fVar160 - fVar85 * fVar44;
    fVar222 = fVar99 * fVar161 - fVar76 * fVar45;
    fVar224 = fVar100 * fVar163 - fVar86 * fVar46;
    fVar226 = fVar101 * fVar164 - fVar87 * fVar47;
    fVar228 = fVar102 * fVar165 - fVar78 * fVar48;
    fVar171 = fVar171 + fVar171;
    fVar176 = fVar176 + fVar176;
    fVar178 = fVar178 + fVar178;
    fVar180 = fVar180 + fVar180;
    fVar182 = fVar182 + fVar182;
    fVar184 = fVar184 + fVar184;
    fVar186 = fVar186 + fVar186;
    fVar188 = fVar188 + fVar188;
    fVar212 = fVar212 + fVar212;
    fVar216 = fVar216 + fVar216;
    fVar218 = fVar218 + fVar218;
    fVar220 = fVar220 + fVar220;
    fVar222 = fVar222 + fVar222;
    fVar224 = fVar224 + fVar224;
    fVar226 = fVar226 + fVar226;
    fVar228 = fVar228 + fVar228;
    fVar103 = fVar103 + fVar103;
    fVar115 = fVar115 + fVar115;
    fVar117 = fVar117 + fVar117;
    fVar119 = fVar119 + fVar119;
    fVar170 = fVar170 + fVar170;
    fVar177 = fVar177 + fVar177;
    fVar181 = fVar181 + fVar181;
    fVar185 = fVar185 + fVar185;
    fVar125 = auVar146._0_4_;
    fVar137 = auVar146._4_4_;
    fVar138 = auVar146._8_4_;
    fVar139 = auVar146._12_4_;
    fVar140 = auVar146._16_4_;
    fVar141 = auVar146._20_4_;
    fVar142 = auVar146._24_4_;
    fVar143 = auVar146._28_4_;
    auVar130._0_4_ =
         auVar91._0_4_ + fVar125 * fVar171 + fVar149 + (fVar22 * fVar103 - fVar212 * fVar88);
    auVar130._4_4_ =
         auVar91._4_4_ + fVar137 * fVar176 + fVar158 + (fVar23 * fVar115 - fVar216 * fVar96);
    auVar130._8_4_ =
         auVar91._8_4_ + fVar138 * fVar178 + fVar159 + (fVar34 * fVar117 - fVar218 * fVar97);
    auVar130._12_4_ =
         auVar91._12_4_ + fVar139 * fVar180 + fVar160 + (fVar35 * fVar119 - fVar220 * fVar98);
    auVar130._16_4_ =
         auVar91._16_4_ + fVar140 * fVar182 + fVar161 + (fVar36 * fVar170 - fVar222 * fVar99);
    auVar130._20_4_ =
         auVar91._20_4_ + fVar141 * fVar184 + fVar163 + (fVar37 * fVar177 - fVar224 * fVar100);
    auVar130._24_4_ =
         auVar91._24_4_ + fVar142 * fVar186 + fVar164 + (fVar38 * fVar181 - fVar226 * fVar101);
    auVar130._28_4_ =
         auVar91._28_4_ + fVar143 * fVar188 + fVar165 + (fVar39 * fVar185 - fVar228 * fVar102);
    auVar155._0_4_ =
         auVar126._0_4_ + fVar125 * fVar212 + fVar49 + (fVar88 * fVar171 - fVar83 * fVar103);
    auVar155._4_4_ =
         auVar126._4_4_ + fVar137 * fVar216 + fVar50 + (fVar96 * fVar176 - fVar74 * fVar115);
    auVar155._8_4_ =
         auVar126._8_4_ + fVar138 * fVar218 + fVar68 + (fVar97 * fVar178 - fVar84 * fVar117);
    auVar155._12_4_ =
         auVar126._12_4_ + fVar139 * fVar220 + fVar70 + (fVar98 * fVar180 - fVar85 * fVar119);
    auVar155._16_4_ =
         auVar126._16_4_ + fVar140 * fVar222 + fVar67 + (fVar99 * fVar182 - fVar76 * fVar170);
    auVar155._20_4_ =
         auVar126._20_4_ + fVar141 * fVar224 + fVar77 + (fVar100 * fVar184 - fVar86 * fVar177);
    auVar155._24_4_ =
         auVar126._24_4_ + fVar142 * fVar226 + fVar79 + (fVar101 * fVar186 - fVar87 * fVar181);
    auVar155._28_4_ =
         auVar126._28_4_ + fVar143 * fVar228 + fVar71 + (fVar102 * fVar188 - fVar78 * fVar185);
    local_460 = auVar153._0_4_;
    fStack_45c = auVar153._4_4_;
    fStack_458 = auVar153._8_4_;
    fStack_454 = auVar153._12_4_;
    fStack_450 = auVar153._16_4_;
    fStack_44c = auVar153._20_4_;
    fStack_448 = auVar153._24_4_;
    fStack_444 = auVar153._28_4_;
    auVar202._0_4_ = (fVar83 * fVar212 - fVar171 * fVar22) + fVar125 * fVar103 + fVar40 + local_460;
    auVar202._4_4_ = (fVar74 * fVar216 - fVar176 * fVar23) + fVar137 * fVar115 + fVar41 + fStack_45c
    ;
    auVar202._8_4_ = (fVar84 * fVar218 - fVar178 * fVar34) + fVar138 * fVar117 + fVar43 + fStack_458
    ;
    auVar202._12_4_ =
         (fVar85 * fVar220 - fVar180 * fVar35) + fVar139 * fVar119 + fVar44 + fStack_454;
    auVar202._16_4_ =
         (fVar76 * fVar222 - fVar182 * fVar36) + fVar140 * fVar170 + fVar45 + fStack_450;
    auVar202._20_4_ =
         (fVar86 * fVar224 - fVar184 * fVar37) + fVar141 * fVar177 + fVar46 + fStack_44c;
    auVar202._24_4_ =
         (fVar87 * fVar226 - fVar186 * fVar38) + fVar142 * fVar181 + fVar47 + fStack_448;
    auVar202._28_4_ =
         (fVar78 * fVar228 - fVar188 * fVar39) + fVar143 * fVar185 + fVar48 + fStack_444;
    uVar2 = *param_10;
    auVar27._4_4_ = uVar2;
    auVar27._0_4_ = uVar2;
    auVar27._8_4_ = uVar2;
    auVar27._12_4_ = uVar2;
    auVar27._16_4_ = uVar2;
    auVar27._20_4_ = uVar2;
    auVar27._24_4_ = uVar2;
    auVar27._28_4_ = uVar2;
    auVar146 = vsubps_avx(auVar130,auVar27);
    uVar2 = param_10[1];
    auVar28._4_4_ = uVar2;
    auVar28._0_4_ = uVar2;
    auVar28._8_4_ = uVar2;
    auVar28._12_4_ = uVar2;
    auVar28._16_4_ = uVar2;
    auVar28._20_4_ = uVar2;
    auVar28._24_4_ = uVar2;
    auVar28._28_4_ = uVar2;
    auVar94 = vsubps_avx(auVar155,auVar28);
    uVar2 = param_10[2];
    auVar131._4_4_ = uVar2;
    auVar131._0_4_ = uVar2;
    auVar131._8_4_ = uVar2;
    auVar131._12_4_ = uVar2;
    auVar131._16_4_ = uVar2;
    auVar131._20_4_ = uVar2;
    auVar131._24_4_ = uVar2;
    auVar131._28_4_ = uVar2;
    auVar105 = vsubps_avx(auVar202,auVar131);
    auVar121 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_6 + param_12 * 4));
    auVar51 = auVar146._0_16_;
    auVar72 = auVar146._16_16_;
    auVar24 = auVar94._0_16_;
    if (cVar15 == -1) {
      auVar153 = vunpcklps_avx(auVar146,auVar94);
      auVar90 = vunpcklps_avx(auVar105,auVar121);
      auVar144 = vunpcklpd_avx(auVar153,auVar90);
      auVar153 = vunpckhpd_avx(auVar153,auVar90);
      auVar90 = vunpckhps_avx(auVar146,auVar94);
      auVar121 = vunpckhps_avx(auVar105,auVar121);
      auVar167._16_16_ = auVar153._0_16_;
      auVar167._0_16_ = auVar144._0_16_;
      *pauVar12 = auVar167;
      auVar151 = vunpcklpd_avx(auVar90,auVar121);
      auVar121 = vunpckhpd_avx(auVar90,auVar121);
      auVar214._16_16_ = auVar121._0_16_;
      auVar214._0_16_ = auVar151._0_16_;
      pauVar12[1] = auVar214;
      auVar153 = vperm2f128_avx(auVar144,auVar153,0x31);
      pauVar12[2] = auVar153;
      auVar121 = vperm2f128_avx(auVar151,auVar121,0x31);
      pauVar12[3] = auVar121;
      auVar132._16_16_ = auVar24;
      auVar132._0_16_ = auVar51;
      auVar153 = vshufpd_avx(auVar146,auVar132,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar105);
      auVar121 = vpermpd_avx2(auVar94,0xe9);
      auVar121 = vblendps_avx(auVar90,auVar121,7);
      auVar168._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar168._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar90 = vpermps_avx2(auVar168,auVar121);
      auVar153 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar153);
      auVar153 = vblendps_avx(auVar153,auVar90,0xa4);
      *pauVar18 = auVar153;
      auVar153 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar121);
      auVar121 = vshufpd_avx(auVar146,auVar146,1);
      auVar121 = vblendps_avx(auVar153,auVar121,0x92);
      pauVar18[1] = auVar121;
      auVar133._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar133._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar94 = vpermps_avx2(auVar133,auVar94);
      auVar146 = vpermpd_avx2(auVar146,0xff);
      auVar146 = vblendps_avx(auVar94,auVar146,3);
      auVar146 = vblendps_avx(auVar146,auVar105,0xe0);
      auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar146);
      pauVar18[2] = auVar146;
      auVar146 = *(undefined1 (*) [32])(param_2 + lVar21 * 0xc);
      auVar94 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar21 * 0xc);
      auVar105 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar21 * 0xc);
      auVar121 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                              ,auVar94);
      auVar153 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar146);
      auVar121 = vblendps_avx(auVar153,auVar121,0x88);
      auVar153 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar94);
      auVar90 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar105);
      auVar153 = vblendps_avx(auVar90,auVar153,0x13);
      auVar29._16_16_ = auVar153._0_16_;
      auVar29._0_16_ = auVar121._0_16_;
      auVar121 = vperm2f128_avx(auVar121,auVar153,0x31);
      auVar146 = vblendps_avx(auVar94,auVar146,0x24);
      auVar146 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar146);
      auVar156._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar156._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar94 = vpermps_avx2(auVar156,auVar105);
      auVar146 = vblendps_avx(auVar146,auVar94,0xe0);
    }
    else {
      auVar42 = auVar94._16_16_;
      auVar200 = auVar105._0_16_;
      auVar207 = auVar105._16_16_;
      auVar150 = auVar121._0_16_;
      auVar162 = auVar121._16_16_;
      if ((uVar16 & 1) != 0) {
        *(int *)*pauVar12 = auVar146._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(*pauVar12 + 0x10) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)pauVar12[1] = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(pauVar12[1] + 0x10) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)pauVar12[2] = auVar146._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(pauVar12[2] + 0x10) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)pauVar12[3] = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(pauVar12[3] + 0x10) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar12 + 4) = auVar94._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(*pauVar12 + 0x14) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(pauVar12[1] + 4) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(pauVar12[1] + 0x14) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar12[2] + 4) = auVar94._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)(pauVar12[2] + 0x14) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(pauVar12[3] + 4) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar12[3] + 0x14) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar12 + 8) = auVar105._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar200,1);
        *(undefined4 *)(*pauVar12 + 0x18) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar200,2);
        *(undefined4 *)(pauVar12[1] + 8) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar200,3);
        *(undefined4 *)(pauVar12[1] + 0x18) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar12[2] + 8) = auVar105._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar207,1);
        *(undefined4 *)(pauVar12[2] + 0x18) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar207,2);
        *(undefined4 *)(pauVar12[3] + 8) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar207,3);
        *(undefined4 *)(pauVar12[3] + 0x18) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar12 + 0xc) = auVar121._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar150,1);
        *(undefined4 *)(*pauVar12 + 0x1c) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar150,2);
        *(undefined4 *)(pauVar12[1] + 0xc) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar150,3);
        *(undefined4 *)(pauVar12[1] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar12[2] + 0xc) = auVar121._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar162,1);
        *(undefined4 *)(pauVar12[2] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar162,2);
        *(undefined4 *)(pauVar12[3] + 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar162,3);
        *(undefined4 *)(pauVar12[3] + 0x1c) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)*pauVar18 = auVar146._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(*pauVar18 + 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)(*pauVar18 + 0x18) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(pauVar18[1] + 4) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x10) = auVar146._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(pauVar18[1] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)(pauVar18[2] + 8) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(pauVar18[2] + 0x14) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar18 + 4) = auVar94._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(*pauVar18 + 0x10) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(*pauVar18 + 0x1c) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(pauVar18[1] + 8) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x14) = auVar94._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)pauVar18[2] = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(pauVar18[2] + 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar18[2] + 0x18) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar18 + 8) = auVar105._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar200,1);
        *(undefined4 *)(*pauVar18 + 0x14) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar200,2);
        *(undefined4 *)pauVar18[1] = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar200,3);
        *(undefined4 *)(pauVar18[1] + 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x18) = auVar105._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar207,1);
        *(undefined4 *)(pauVar18[2] + 4) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar207,2);
        *(undefined4 *)(pauVar18[2] + 0x10) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar207,3);
        *(undefined4 *)(pauVar18[2] + 0x1c) = uVar2;
      }
      auVar29 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar121 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar146 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    }
    pauVar12 = (undefined1 (*) [32])(param_2 + lVar21 * 0xc);
    fVar40 = auVar29._0_4_ * local_480;
    fVar41 = auVar29._4_4_ * fStack_47c;
    fVar43 = auVar29._8_4_ * fStack_478;
    fVar44 = auVar29._12_4_ * fStack_474;
    fVar45 = auVar29._16_4_ * fStack_470;
    fVar46 = auVar29._20_4_ * fStack_46c;
    fVar47 = auVar29._24_4_ * fStack_468;
    fVar48 = auVar29._28_4_ * fStack_464;
    fVar49 = fVar64 * auVar121._0_4_;
    fVar50 = fVar66 * auVar121._4_4_;
    fVar68 = fVar65 * auVar121._8_4_;
    fVar70 = fVar73 * auVar121._12_4_;
    fVar67 = fVar75 * auVar121._16_4_;
    fVar77 = fVar69 * auVar121._20_4_;
    fVar79 = fVar81 * auVar121._24_4_;
    fVar71 = fVar82 * auVar121._28_4_;
    fVar103 = fVar114 * auVar146._0_4_;
    fVar115 = fVar116 * auVar146._4_4_;
    fVar117 = fVar118 * auVar146._8_4_;
    fVar119 = fVar120 * auVar146._12_4_;
    fVar170 = fVar175 * auVar146._16_4_;
    fVar177 = fVar179 * auVar146._20_4_;
    fVar181 = fVar183 * auVar146._24_4_;
    fVar185 = fVar187 * auVar146._28_4_;
    fVar149 = fVar83 * fVar49 - fVar22 * fVar40;
    fVar158 = fVar74 * fVar50 - fVar23 * fVar41;
    fVar159 = fVar84 * fVar68 - fVar34 * fVar43;
    fVar160 = fVar85 * fVar70 - fVar35 * fVar44;
    fVar161 = fVar76 * fVar67 - fVar36 * fVar45;
    fVar163 = fVar86 * fVar77 - fVar37 * fVar46;
    fVar164 = fVar87 * fVar79 - fVar38 * fVar47;
    fVar165 = fVar78 * fVar71 - fVar39 * fVar48;
    fVar171 = fVar22 * fVar103 - fVar88 * fVar49;
    fVar176 = fVar23 * fVar115 - fVar96 * fVar50;
    fVar178 = fVar34 * fVar117 - fVar97 * fVar68;
    fVar180 = fVar35 * fVar119 - fVar98 * fVar70;
    fVar182 = fVar36 * fVar170 - fVar99 * fVar67;
    fVar184 = fVar37 * fVar177 - fVar100 * fVar77;
    fVar186 = fVar38 * fVar181 - fVar101 * fVar79;
    fVar188 = fVar39 * fVar185 - fVar102 * fVar71;
    fVar212 = fVar88 * fVar40 - fVar83 * fVar103;
    fVar216 = fVar96 * fVar41 - fVar74 * fVar115;
    fVar218 = fVar97 * fVar43 - fVar84 * fVar117;
    fVar220 = fVar98 * fVar44 - fVar85 * fVar119;
    fVar222 = fVar99 * fVar45 - fVar76 * fVar170;
    fVar224 = fVar100 * fVar46 - fVar86 * fVar177;
    fVar226 = fVar101 * fVar47 - fVar87 * fVar181;
    fVar228 = fVar102 * fVar48 - fVar78 * fVar185;
    fVar171 = fVar171 + fVar171;
    fVar176 = fVar176 + fVar176;
    fVar178 = fVar178 + fVar178;
    fVar180 = fVar180 + fVar180;
    fVar182 = fVar182 + fVar182;
    fVar184 = fVar184 + fVar184;
    fVar186 = fVar186 + fVar186;
    fVar188 = fVar188 + fVar188;
    fVar212 = fVar212 + fVar212;
    fVar216 = fVar216 + fVar216;
    fVar218 = fVar218 + fVar218;
    fVar220 = fVar220 + fVar220;
    fVar222 = fVar222 + fVar222;
    fVar224 = fVar224 + fVar224;
    fVar226 = fVar226 + fVar226;
    fVar228 = fVar228 + fVar228;
    fVar149 = fVar149 + fVar149;
    fVar158 = fVar158 + fVar158;
    fVar159 = fVar159 + fVar159;
    fVar160 = fVar160 + fVar160;
    fVar161 = fVar161 + fVar161;
    fVar163 = fVar163 + fVar163;
    fVar164 = fVar164 + fVar164;
    fVar165 = fVar165 + fVar165;
    local_3c0._0_4_ = (fVar83 * fVar212 - fVar171 * fVar22) + fVar125 * fVar149 + fVar103;
    local_3c0._4_4_ = (fVar74 * fVar216 - fVar176 * fVar23) + fVar137 * fVar158 + fVar115;
    local_3c0._8_4_ = (fVar84 * fVar218 - fVar178 * fVar34) + fVar138 * fVar159 + fVar117;
    local_3c0._12_4_ = (fVar85 * fVar220 - fVar180 * fVar35) + fVar139 * fVar160 + fVar119;
    local_3c0._16_4_ = (fVar76 * fVar222 - fVar182 * fVar36) + fVar140 * fVar161 + fVar170;
    local_3c0._20_4_ = (fVar86 * fVar224 - fVar184 * fVar37) + fVar141 * fVar163 + fVar177;
    local_3c0._24_4_ = (fVar87 * fVar226 - fVar186 * fVar38) + fVar142 * fVar164 + fVar181;
    local_3c0._28_4_ = (fVar78 * fVar228 - fVar188 * fVar39) + fVar143 * fVar165 + fVar185;
    local_400._0_4_ = (fVar22 * fVar149 - fVar212 * fVar88) + fVar125 * fVar171 + fVar40;
    local_400._4_4_ = (fVar23 * fVar158 - fVar216 * fVar96) + fVar137 * fVar176 + fVar41;
    local_400._8_4_ = (fVar34 * fVar159 - fVar218 * fVar97) + fVar138 * fVar178 + fVar43;
    local_400._12_4_ = (fVar35 * fVar160 - fVar220 * fVar98) + fVar139 * fVar180 + fVar44;
    local_400._16_4_ = (fVar36 * fVar161 - fVar222 * fVar99) + fVar140 * fVar182 + fVar45;
    local_400._20_4_ = (fVar37 * fVar163 - fVar224 * fVar100) + fVar141 * fVar184 + fVar46;
    local_400._24_4_ = (fVar38 * fVar164 - fVar226 * fVar101) + fVar142 * fVar186 + fVar47;
    local_400._28_4_ = (fVar39 * fVar165 - fVar228 * fVar102) + fVar143 * fVar188 + fVar48;
    local_3e0._0_4_ = (fVar88 * fVar171 - fVar149 * fVar83) + fVar125 * fVar212 + fVar49;
    local_3e0._4_4_ = (fVar96 * fVar176 - fVar158 * fVar74) + fVar137 * fVar216 + fVar50;
    local_3e0._8_4_ = (fVar97 * fVar178 - fVar159 * fVar84) + fVar138 * fVar218 + fVar68;
    local_3e0._12_4_ = (fVar98 * fVar180 - fVar160 * fVar85) + fVar139 * fVar220 + fVar70;
    local_3e0._16_4_ = (fVar99 * fVar182 - fVar161 * fVar76) + fVar140 * fVar222 + fVar67;
    local_3e0._20_4_ = (fVar100 * fVar184 - fVar163 * fVar86) + fVar141 * fVar224 + fVar77;
    local_3e0._24_4_ = (fVar101 * fVar186 - fVar164 * fVar87) + fVar142 * fVar226 + fVar79;
    local_3e0._28_4_ = (fVar102 * fVar188 - fVar165 * fVar78) + fVar143 * fVar228 + fVar71;
    pauVar18 = (undefined1 (*) [32])(param_4 + lVar21 * 0xc);
    if (cVar15 == -1) {
      auVar146 = pauVar18[1];
      auVar94 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar146);
      auVar105 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,*pauVar18);
      auVar94 = vblendps_avx(auVar105,auVar94,0x88);
      auVar105 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar146);
      auVar121 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,pauVar18[2]);
      auVar105 = vblendps_avx(auVar121,auVar105,0x13);
      auVar30._16_16_ = auVar105._0_16_;
      auVar30._0_16_ = auVar94._0_16_;
      auVar94 = vperm2f128_avx(auVar94,auVar105,0x31);
      auVar146 = vblendps_avx(auVar146,*pauVar18,0x24);
      auVar146 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar146);
      auVar157._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar157._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar105 = vpermps_avx2(auVar157,pauVar18[2]);
      auVar146 = vblendps_avx(auVar146,auVar105,0xe0);
    }
    else {
      auVar30 = vgatherdps(ZEXT432(0) << 0x20,auVar3);
      auVar94 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar146 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    }
    local_480 = auVar30._0_4_ * local_480;
    fStack_47c = auVar30._4_4_ * fStack_47c;
    fStack_478 = auVar30._8_4_ * fStack_478;
    fStack_474 = auVar30._12_4_ * fStack_474;
    fStack_470 = auVar30._16_4_ * fStack_470;
    fStack_46c = auVar30._20_4_ * fStack_46c;
    fStack_468 = auVar30._24_4_ * fStack_468;
    fStack_464 = auVar30._28_4_ * fStack_464;
    fVar64 = fVar64 * auVar94._0_4_;
    fVar66 = fVar66 * auVar94._4_4_;
    fVar65 = fVar65 * auVar94._8_4_;
    fVar73 = fVar73 * auVar94._12_4_;
    fVar75 = fVar75 * auVar94._16_4_;
    fVar69 = fVar69 * auVar94._20_4_;
    fVar81 = fVar81 * auVar94._24_4_;
    fVar82 = fVar82 * auVar94._28_4_;
    fVar114 = fVar114 * auVar146._0_4_;
    fVar116 = fVar116 * auVar146._4_4_;
    fVar118 = fVar118 * auVar146._8_4_;
    fVar120 = fVar120 * auVar146._12_4_;
    fVar175 = fVar175 * auVar146._16_4_;
    fVar179 = fVar179 * auVar146._20_4_;
    fVar183 = fVar183 * auVar146._24_4_;
    fVar187 = fVar187 * auVar146._28_4_;
    fVar40 = fVar83 * fVar64 - fVar22 * local_480;
    fVar41 = fVar74 * fVar66 - fVar23 * fStack_47c;
    fVar43 = fVar84 * fVar65 - fVar34 * fStack_478;
    fVar44 = fVar85 * fVar73 - fVar35 * fStack_474;
    fVar45 = fVar76 * fVar75 - fVar36 * fStack_470;
    fVar46 = fVar86 * fVar69 - fVar37 * fStack_46c;
    fVar47 = fVar87 * fVar81 - fVar38 * fStack_468;
    fVar48 = fVar78 * fVar82 - fVar39 * fStack_464;
    fVar49 = fVar22 * fVar114 - fVar88 * fVar64;
    fVar50 = fVar23 * fVar116 - fVar96 * fVar66;
    fVar68 = fVar34 * fVar118 - fVar97 * fVar65;
    fVar70 = fVar35 * fVar120 - fVar98 * fVar73;
    fVar67 = fVar36 * fVar175 - fVar99 * fVar75;
    fVar77 = fVar37 * fVar179 - fVar100 * fVar69;
    fVar79 = fVar38 * fVar183 - fVar101 * fVar81;
    fVar71 = fVar39 * fVar187 - fVar102 * fVar82;
    fVar103 = fVar88 * local_480 - fVar83 * fVar114;
    fVar115 = fVar96 * fStack_47c - fVar74 * fVar116;
    fVar117 = fVar97 * fStack_478 - fVar84 * fVar118;
    fVar119 = fVar98 * fStack_474 - fVar85 * fVar120;
    fVar170 = fVar99 * fStack_470 - fVar76 * fVar175;
    fVar177 = fVar100 * fStack_46c - fVar86 * fVar179;
    fVar181 = fVar101 * fStack_468 - fVar87 * fVar183;
    fVar185 = fVar102 * fStack_464 - fVar78 * fVar187;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar50 + fVar50;
    fVar68 = fVar68 + fVar68;
    fVar70 = fVar70 + fVar70;
    fVar67 = fVar67 + fVar67;
    fVar77 = fVar77 + fVar77;
    fVar79 = fVar79 + fVar79;
    fVar71 = fVar71 + fVar71;
    fVar103 = fVar103 + fVar103;
    fVar115 = fVar115 + fVar115;
    fVar117 = fVar117 + fVar117;
    fVar119 = fVar119 + fVar119;
    fVar170 = fVar170 + fVar170;
    fVar177 = fVar177 + fVar177;
    fVar181 = fVar181 + fVar181;
    fVar185 = fVar185 + fVar185;
    fVar40 = fVar40 + fVar40;
    fVar41 = fVar41 + fVar41;
    fVar43 = fVar43 + fVar43;
    fVar44 = fVar44 + fVar44;
    fVar45 = fVar45 + fVar45;
    fVar46 = fVar46 + fVar46;
    fVar47 = fVar47 + fVar47;
    fVar48 = fVar48 + fVar48;
    auVar31._0_4_ =
         (fVar22 * fVar40 - fVar103 * fVar88) + fVar125 * fVar49 + local_480 + auVar91._0_4_;
    auVar31._4_4_ =
         (fVar23 * fVar41 - fVar115 * fVar96) + fVar137 * fVar50 + fStack_47c + auVar91._4_4_;
    auVar31._8_4_ =
         (fVar34 * fVar43 - fVar117 * fVar97) + fVar138 * fVar68 + fStack_478 + auVar91._8_4_;
    auVar31._12_4_ =
         (fVar35 * fVar44 - fVar119 * fVar98) + fVar139 * fVar70 + fStack_474 + auVar91._12_4_;
    auVar31._16_4_ =
         (fVar36 * fVar45 - fVar170 * fVar99) + fVar140 * fVar67 + fStack_470 + auVar91._16_4_;
    auVar31._20_4_ =
         (fVar37 * fVar46 - fVar177 * fVar100) + fVar141 * fVar77 + fStack_46c + auVar91._20_4_;
    auVar31._24_4_ =
         (fVar38 * fVar47 - fVar181 * fVar101) + fVar142 * fVar79 + fStack_468 + auVar91._24_4_;
    auVar31._28_4_ =
         (fVar39 * fVar48 - fVar185 * fVar102) + fVar143 * fVar71 + fStack_464 + auVar91._28_4_;
    auVar62._0_4_ =
         (fVar88 * fVar49 - fVar40 * fVar83) + fVar125 * fVar103 + fVar64 + auVar126._0_4_;
    auVar62._4_4_ =
         (fVar96 * fVar50 - fVar41 * fVar74) + fVar137 * fVar115 + fVar66 + auVar126._4_4_;
    auVar62._8_4_ =
         (fVar97 * fVar68 - fVar43 * fVar84) + fVar138 * fVar117 + fVar65 + auVar126._8_4_;
    auVar62._12_4_ =
         (fVar98 * fVar70 - fVar44 * fVar85) + fVar139 * fVar119 + fVar73 + auVar126._12_4_;
    auVar62._16_4_ =
         (fVar99 * fVar67 - fVar45 * fVar76) + fVar140 * fVar170 + fVar75 + auVar126._16_4_;
    auVar62._20_4_ =
         (fVar100 * fVar77 - fVar46 * fVar86) + fVar141 * fVar177 + fVar69 + auVar126._20_4_;
    auVar62._24_4_ =
         (fVar101 * fVar79 - fVar47 * fVar87) + fVar142 * fVar181 + fVar81 + auVar126._24_4_;
    auVar62._28_4_ =
         (fVar102 * fVar71 - fVar48 * fVar78) + fVar143 * fVar185 + fVar82 + auVar126._28_4_;
    auVar106._0_4_ = fVar40 * fVar125 + fVar114 + (fVar83 * fVar103 - fVar49 * fVar22) + local_460;
    auVar106._4_4_ = fVar41 * fVar137 + fVar116 + (fVar74 * fVar115 - fVar50 * fVar23) + fStack_45c;
    auVar106._8_4_ = fVar43 * fVar138 + fVar118 + (fVar84 * fVar117 - fVar68 * fVar34) + fStack_458;
    auVar106._12_4_ = fVar44 * fVar139 + fVar120 + (fVar85 * fVar119 - fVar70 * fVar35) + fStack_454
    ;
    auVar106._16_4_ = fVar45 * fVar140 + fVar175 + (fVar76 * fVar170 - fVar67 * fVar36) + fStack_450
    ;
    auVar106._20_4_ = fVar46 * fVar141 + fVar179 + (fVar86 * fVar177 - fVar77 * fVar37) + fStack_44c
    ;
    auVar106._24_4_ = fVar47 * fVar142 + fVar183 + (fVar87 * fVar181 - fVar79 * fVar38) + fStack_448
    ;
    auVar106._28_4_ = fVar48 * fVar143 + fVar187 + (fVar78 * fVar185 - fVar71 * fVar39) + fStack_444
    ;
    uVar2 = *param_10;
    auVar95._4_4_ = uVar2;
    auVar95._0_4_ = uVar2;
    auVar95._8_4_ = uVar2;
    auVar95._12_4_ = uVar2;
    auVar95._16_4_ = uVar2;
    auVar95._20_4_ = uVar2;
    auVar95._24_4_ = uVar2;
    auVar95._28_4_ = uVar2;
    auVar146 = vsubps_avx(auVar31,auVar95);
    uVar2 = param_10[1];
    auVar32._4_4_ = uVar2;
    auVar32._0_4_ = uVar2;
    auVar32._8_4_ = uVar2;
    auVar32._12_4_ = uVar2;
    auVar32._16_4_ = uVar2;
    auVar32._20_4_ = uVar2;
    auVar32._24_4_ = uVar2;
    auVar32._28_4_ = uVar2;
    auVar94 = vsubps_avx(auVar62,auVar32);
    uVar2 = param_10[2];
    auVar63._4_4_ = uVar2;
    auVar63._0_4_ = uVar2;
    auVar63._8_4_ = uVar2;
    auVar63._12_4_ = uVar2;
    auVar63._16_4_ = uVar2;
    auVar63._20_4_ = uVar2;
    auVar63._24_4_ = uVar2;
    auVar63._28_4_ = uVar2;
    auVar105 = vsubps_avx(auVar106,auVar63);
    auVar51 = auVar146._0_16_;
    auVar72 = auVar146._16_16_;
    auVar24 = auVar94._0_16_;
    if (cVar15 == -1) {
      auVar108._16_16_ = auVar24;
      auVar108._0_16_ = auVar51;
      auVar153 = vshufpd_avx(auVar146,auVar108,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar105);
      auVar121 = vpermpd_avx2(auVar94,0xe9);
      auVar121 = vblendps_avx(auVar90,auVar121,7);
      auVar134._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar134._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar90 = vpermps_avx2(auVar134,auVar121);
      auVar153 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar153);
      auVar153 = vblendps_avx(auVar153,auVar90,0xa4);
      *pauVar18 = auVar153;
      auVar153 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar121);
      auVar121 = vshufpd_avx(auVar146,auVar146,1);
      auVar121 = vblendps_avx(auVar153,auVar121,0x92);
      pauVar18[1] = auVar121;
      auVar109._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar109._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar153 = vpermps_avx2(auVar109,auVar94);
      auVar121 = vpermpd_avx2(auVar146,0xff);
      auVar121 = vblendps_avx(auVar153,auVar121,3);
      auVar121 = vblendps_avx(auVar121,auVar105,0xe0);
      auVar121 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar121);
      pauVar18[2] = auVar121;
      auVar121 = *(undefined1 (*) [32])(param_7 + lVar21 * 0xc);
      auVar153 = *(undefined1 (*) [32])(param_7 + 0x20 + lVar21 * 0xc);
      auVar90 = *(undefined1 (*) [32])(param_7 + 0x40 + lVar21 * 0xc);
      auVar91 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar153);
      auVar126 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar121);
      auVar91 = vblendps_avx(auVar126,auVar91,0x88);
      auVar126 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                              ,auVar153);
      auVar144 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar90);
      auVar126 = vblendps_avx(auVar144,auVar126,0x13);
      auVar107._16_16_ = auVar126._0_16_;
      auVar107._0_16_ = auVar91._0_16_;
      auVar91 = vperm2f128_avx(auVar91,auVar126,0x31);
      auVar121 = vblendps_avx(auVar153,auVar121,0x24);
      auVar121 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar121);
      auVar147._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar147._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar153 = vpermps_avx2(auVar147,auVar90);
      auVar121 = vblendps_avx(auVar121,auVar153,0xe0);
    }
    else {
      auVar42 = auVar94._16_16_;
      auVar150 = auVar105._0_16_;
      auVar162 = auVar105._16_16_;
      if ((uVar16 & 1) != 0) {
        *(int *)*pauVar18 = auVar146._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(*pauVar18 + 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)(*pauVar18 + 0x18) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(pauVar18[1] + 4) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x10) = auVar146._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(pauVar18[1] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)(pauVar18[2] + 8) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(pauVar18[2] + 0x14) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar18 + 4) = auVar94._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(*pauVar18 + 0x10) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(*pauVar18 + 0x1c) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(pauVar18[1] + 8) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x14) = auVar94._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)pauVar18[2] = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(pauVar18[2] + 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar18[2] + 0x18) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(*pauVar18 + 8) = auVar105._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar150,1);
        *(undefined4 *)(*pauVar18 + 0x14) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar150,2);
        *(undefined4 *)pauVar18[1] = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar150,3);
        *(undefined4 *)(pauVar18[1] + 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(pauVar18[1] + 0x18) = auVar105._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar162,1);
        *(undefined4 *)(pauVar18[2] + 4) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar162,2);
        *(undefined4 *)(pauVar18[2] + 0x10) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar162,3);
        *(undefined4 *)(pauVar18[2] + 0x1c) = uVar2;
      }
      auVar107 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar91 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar121 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
    }
    auVar146 = vsubps_avx(auVar107,auVar146);
    auVar110._4_4_ = param_11;
    auVar110._0_4_ = param_11;
    auVar110._8_4_ = param_11;
    auVar110._12_4_ = param_11;
    auVar110._16_4_ = param_11;
    auVar110._20_4_ = param_11;
    auVar110._24_4_ = param_11;
    auVar110._28_4_ = param_11;
    auVar146 = vdivps_avx(auVar146,auVar110);
    auVar94 = vsubps_avx(auVar91,auVar94);
    auVar94 = vdivps_avx(auVar94,auVar110);
    auVar105 = vsubps_avx(auVar121,auVar105);
    auVar105 = vdivps_avx(auVar105,auVar110);
    pauVar18 = (undefined1 (*) [32])(param_5 + lVar21 * 0xc);
    auVar51 = auVar146._0_16_;
    auVar72 = auVar146._16_16_;
    auVar24 = auVar94._0_16_;
    if (cVar15 == -1) {
      auVar111._16_16_ = auVar24;
      auVar111._0_16_ = auVar51;
      auVar153 = vshufpd_avx(auVar146,auVar111,2);
      auVar90 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar105);
      auVar121 = vpermpd_avx2(auVar94,0xe9);
      auVar121 = vblendps_avx(auVar90,auVar121,7);
      auVar135._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar135._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar90 = vpermps_avx2(auVar135,auVar121);
      auVar153 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar153);
      auVar153 = vblendps_avx(auVar153,auVar90,0xa4);
      *pauVar18 = auVar153;
      auVar153 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar121);
      auVar121 = vshufpd_avx(auVar146,auVar146,1);
      auVar121 = vblendps_avx(auVar153,auVar121,0x92);
      pauVar18[1] = auVar121;
      auVar112._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar112._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar153 = vpermps_avx2(auVar112,auVar94);
      auVar121 = vpermpd_avx2(auVar146,0xff);
      auVar121 = vblendps_avx(auVar153,auVar121,3);
      auVar121 = vblendps_avx(auVar121,auVar105,0xe0);
      auVar121 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar121);
      pauVar18[2] = auVar121;
    }
    else {
      auVar42 = auVar94._16_16_;
      auVar150 = auVar105._0_16_;
      auVar162 = auVar105._16_16_;
      if ((uVar16 & 1) != 0) {
        *(float *)*pauVar18 = auVar146._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(*pauVar18 + 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)(*pauVar18 + 0x18) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(pauVar18[1] + 4) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(float *)(pauVar18[1] + 0x10) = auVar146._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(pauVar18[1] + 0x1c) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)(pauVar18[2] + 8) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(pauVar18[2] + 0x14) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(float *)(*pauVar18 + 4) = auVar94._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(*pauVar18 + 0x10) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(*pauVar18 + 0x1c) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(pauVar18[1] + 8) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(float *)(pauVar18[1] + 0x14) = auVar94._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)pauVar18[2] = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(pauVar18[2] + 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar18[2] + 0x18) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(float *)(*pauVar18 + 8) = auVar105._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar150,1);
        *(undefined4 *)(*pauVar18 + 0x14) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar150,2);
        *(undefined4 *)pauVar18[1] = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar150,3);
        *(undefined4 *)(pauVar18[1] + 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(float *)(pauVar18[1] + 0x18) = auVar105._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar162,1);
        *(undefined4 *)(pauVar18[2] + 4) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar162,2);
        *(undefined4 *)(pauVar18[2] + 0x10) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar162,3);
        *(undefined4 *)(pauVar18[2] + 0x1c) = uVar2;
      }
    }
    auVar121 = vsubps_avx(local_400,auVar146);
    auVar153 = vsubps_avx(local_3e0,auVar94);
    auVar90 = vsubps_avx(local_3c0,auVar105);
    fVar22 = auVar153._0_4_;
    fVar23 = auVar153._4_4_;
    fVar34 = auVar153._8_4_;
    fVar35 = auVar153._12_4_;
    fVar36 = auVar153._16_4_;
    fVar37 = auVar153._20_4_;
    fVar38 = auVar153._24_4_;
    fVar39 = auVar153._28_4_;
    fVar40 = auVar121._0_4_;
    fVar41 = auVar121._4_4_;
    fVar43 = auVar121._8_4_;
    fVar44 = auVar121._12_4_;
    fVar45 = auVar121._16_4_;
    fVar46 = auVar121._20_4_;
    fVar47 = auVar121._24_4_;
    fVar48 = auVar121._28_4_;
    fVar49 = auVar90._0_4_;
    auVar148._0_4_ = fVar49 * fVar49 + fVar40 * fVar40 + fVar22 * fVar22;
    fVar64 = auVar90._4_4_;
    auVar148._4_4_ = fVar64 * fVar64 + fVar41 * fVar41 + fVar23 * fVar23;
    fVar50 = auVar90._8_4_;
    auVar148._8_4_ = fVar50 * fVar50 + fVar43 * fVar43 + fVar34 * fVar34;
    fVar66 = auVar90._12_4_;
    auVar148._12_4_ = fVar66 * fVar66 + fVar44 * fVar44 + fVar35 * fVar35;
    fVar68 = auVar90._16_4_;
    auVar148._16_4_ = fVar68 * fVar68 + fVar45 * fVar45 + fVar36 * fVar36;
    fVar65 = auVar90._20_4_;
    auVar148._20_4_ = fVar65 * fVar65 + fVar46 * fVar46 + fVar37 * fVar37;
    fVar70 = auVar90._24_4_;
    auVar148._24_4_ = fVar70 * fVar70 + fVar47 * fVar47 + fVar38 * fVar38;
    fVar73 = auVar90._28_4_;
    auVar148._28_4_ = fVar73 * fVar73 + fVar48 * fVar48 + fVar39 * fVar39;
    auVar169._4_4_ = param_14;
    auVar169._0_4_ = param_14;
    auVar169._8_4_ = param_14;
    auVar169._12_4_ = param_14;
    auVar169._16_4_ = param_14;
    auVar169._20_4_ = param_14;
    auVar169._24_4_ = param_14;
    auVar169._28_4_ = param_14;
    auVar121 = vcmpps_avx(auVar169,auVar148,1);
    auVar153 = auVar3 & auVar121;
    if ((((((((SUB321(auVar153 >> 0x1f,0) & 1) != 0 || (SUB321(auVar153 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar153 >> 0x5f,0) & 1) != 0) || SUB321(auVar153 >> 0x7f,0) != '\0') ||
          (SUB321(auVar153 >> 0x9f,0) & 1) != 0) || SUB321(auVar153 >> 0xbf,0) != '\0') ||
        (SUB321(auVar153 >> 0xdf,0) & 1) != 0) || auVar153[0x1f] < '\0') {
      auVar153 = vdivps_avx(auVar169,auVar148);
      auVar153 = vsqrtps_avx(auVar153);
      auVar80._0_4_ = auVar121._0_4_ & auVar3._0_4_;
      auVar80._4_4_ = auVar121._4_4_ & auVar3._4_4_;
      auVar80._8_4_ = auVar121._8_4_ & auVar3._8_4_;
      auVar80._12_4_ = auVar121._12_4_ & auVar3._12_4_;
      auVar80._16_4_ = auVar121._16_4_ & auVar3._16_4_;
      auVar80._20_4_ = auVar121._20_4_ & auVar3._20_4_;
      auVar80._24_4_ = auVar121._24_4_ & auVar3._24_4_;
      auVar80._28_4_ = auVar121._28_4_ & auVar3._28_4_;
      fVar67 = auVar153._0_4_;
      auVar113._0_4_ = fVar67 * fVar40 + auVar146._0_4_;
      fVar40 = auVar153._4_4_;
      auVar113._4_4_ = fVar40 * fVar41 + auVar146._4_4_;
      fVar41 = auVar153._8_4_;
      auVar113._8_4_ = fVar41 * fVar43 + auVar146._8_4_;
      fVar43 = auVar153._12_4_;
      auVar113._12_4_ = fVar43 * fVar44 + auVar146._12_4_;
      fVar44 = auVar153._16_4_;
      auVar113._16_4_ = fVar44 * fVar45 + auVar146._16_4_;
      fVar45 = auVar153._20_4_;
      auVar113._20_4_ = fVar45 * fVar46 + auVar146._20_4_;
      fVar46 = auVar153._24_4_;
      auVar113._24_4_ = fVar46 * fVar47 + auVar146._24_4_;
      fVar47 = auVar153._28_4_;
      auVar113._28_4_ = fVar47 * fVar48 + auVar146._28_4_;
      auVar122._0_4_ = fVar67 * fVar22 + auVar94._0_4_;
      auVar122._4_4_ = fVar40 * fVar23 + auVar94._4_4_;
      auVar122._8_4_ = fVar41 * fVar34 + auVar94._8_4_;
      auVar122._12_4_ = fVar43 * fVar35 + auVar94._12_4_;
      auVar122._16_4_ = fVar44 * fVar36 + auVar94._16_4_;
      auVar122._20_4_ = fVar45 * fVar37 + auVar94._20_4_;
      auVar122._24_4_ = fVar46 * fVar38 + auVar94._24_4_;
      auVar122._28_4_ = fVar47 * fVar39 + auVar94._28_4_;
      auVar136._0_4_ = fVar67 * fVar49 + auVar105._0_4_;
      auVar136._4_4_ = fVar40 * fVar64 + auVar105._4_4_;
      auVar136._8_4_ = fVar41 * fVar50 + auVar105._8_4_;
      auVar136._12_4_ = fVar43 * fVar66 + auVar105._12_4_;
      auVar136._16_4_ = fVar44 * fVar68 + auVar105._16_4_;
      auVar136._20_4_ = fVar45 * fVar65 + auVar105._20_4_;
      auVar136._24_4_ = fVar46 * fVar70 + auVar105._24_4_;
      auVar136._28_4_ = fVar47 * fVar73 + auVar105._28_4_;
      local_400 = vmaskmovps_avx(auVar80,auVar113);
      local_3e0 = vmaskmovps_avx(auVar80,auVar122);
      local_3c0 = vmaskmovps_avx(auVar80,auVar136);
    }
    if (cVar15 == -1) {
      auVar146 = vperm2f128_avx(local_400,local_3e0,0x20);
      auVar3 = vshufpd_avx(local_400,auVar146,2);
      auVar94 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,local_3c0);
      auVar146 = vpermpd_avx2(local_3e0,0xe9);
      auVar146 = vblendps_avx(auVar94,auVar146,7);
      auVar123._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar123._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar94 = vpermps_avx2(auVar123,auVar146);
      auVar3 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                            auVar3);
      auVar3 = vblendps_avx(auVar3,auVar94,0xa4);
      auVar124._8_8_ = local_400._24_8_;
      auVar124._0_8_ = local_400._24_8_;
      auVar124._16_8_ = local_400._24_8_;
      auVar124._24_8_ = local_400._24_8_;
      *pauVar12 = auVar3;
      auVar3 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                            auVar146);
      auVar146 = vshufpd_avx(local_400,local_400,1);
      auVar146 = vblendps_avx(auVar3,auVar146,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar21 * 0xc) = auVar146;
      auVar33._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar33._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar146 = vpermps_avx2(auVar33,local_3e0);
      auVar146 = vblendpd_avx(auVar146,auVar124,1);
      auVar146 = vblendps_avx(auVar146,local_3c0,0xe0);
      auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar146);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar21 * 0xc) = auVar146;
    }
    else {
      auVar24 = local_400._0_16_;
      auVar42 = local_400._16_16_;
      auVar51 = local_3e0._0_16_;
      auVar150 = local_3e0._16_16_;
      auVar72 = local_3c0._0_16_;
      auVar162 = local_3c0._16_16_;
      if ((uVar16 & 1) != 0) {
        *(int *)*pauVar12 = local_400._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar24,1);
        *(undefined4 *)(param_2 + 0xc + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar24,2);
        *(undefined4 *)(param_2 + 0x18 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar24,3);
        *(undefined4 *)(param_2 + 0x24 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + lVar21 * 0xc) = local_400._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar42,1);
        *(undefined4 *)(param_2 + 0x3c + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar42,2);
        *(undefined4 *)(param_2 + 0x48 + lVar21 * 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar42,3);
        *(undefined4 *)(param_2 + 0x54 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(param_2 + 4 + lVar21 * 0xc) = local_3e0._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar51,1);
        *(undefined4 *)(param_2 + 0x10 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar51,2);
        *(undefined4 *)(param_2 + 0x1c + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar51,3);
        *(undefined4 *)(param_2 + 0x28 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + lVar21 * 0xc) = local_3e0._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar150,1);
        *(undefined4 *)(param_2 + 0x40 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar150,2);
        *(undefined4 *)(param_2 + 0x4c + lVar21 * 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar150,3);
        *(undefined4 *)(param_2 + 0x58 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 1) != 0) {
        *(int *)(param_2 + 8 + lVar21 * 0xc) = local_3c0._0_4_;
      }
      if ((uVar16 & 2) != 0) {
        uVar2 = vextractps_avx(auVar72,1);
        *(undefined4 *)(param_2 + 0x14 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 4) != 0) {
        uVar2 = vextractps_avx(auVar72,2);
        *(undefined4 *)(param_2 + 0x20 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 8) != 0) {
        uVar2 = vextractps_avx(auVar72,3);
        *(undefined4 *)(param_2 + 0x2c + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + lVar21 * 0xc) = local_3c0._16_4_;
      }
      if ((uVar16 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar162,1);
        *(undefined4 *)(param_2 + 0x44 + lVar21 * 0xc) = uVar2;
      }
      if ((uVar16 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar162,2);
        *(undefined4 *)(param_2 + 0x50 + lVar21 * 0xc) = uVar2;
      }
      if (cVar15 < '\0') {
        uVar2 = vextractps_avx(auVar162,3);
        *(undefined4 *)(param_2 + 0x5c + lVar21 * 0xc) = uVar2;
      }
    }
  }
  return;
}

// PreSubstepInterpolation_avx2 @ 140ce8b70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PreSubstepInterpolation_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,uint param_8,int param_9)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [32];
  longlong lVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [16];
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
  undefined1 auVar50 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar60 [32];
  undefined1 auVar20 [32];
  undefined1 auVar27 [32];
  undefined1 auVar51 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  
  auVar49 = ___ymm_0000000700000005000000070000000500000003000000010000000700000004;
  auVar41 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
  auVar34 = ___ymm_0000000600000003000000000000000000000005000000020000000000000000;
  auVar52 = ___ymm_0000000000000007000000040000000100000000000000060000000300000000;
  uVar2 = __real_00800000;
  fVar4 = __real_3f800000;
  uVar9 = (ulonglong)param_8;
  uVar11 = param_9 - param_8;
  uVar8 = uVar11 + 7;
  if (-1 < (int)uVar11) {
    uVar8 = uVar11;
  }
  iVar12 = ((uVar8 & 0xfffffff8) - uVar11) + param_9;
  if ((int)param_8 < iVar12) {
    fVar3 = __real_3f800000 - param_7;
    uVar9 = (ulonglong)(int)param_8;
    lVar6 = uVar9 * 0xc;
    lVar16 = param_3 + 0x40;
    lVar17 = param_4 + 0x40;
    lVar14 = param_1 + 0x40;
    lVar15 = param_5 + 0x40;
    lVar10 = param_6 + 0x40;
    lVar13 = param_2 + 0x40;
    do {
      auVar59 = ___ymm_0000000700000004000000010000000000000003000000000000000100000000;
      auVar54 = ___ymm_0000000200000002000000000000000000000001000000000000000100000000;
      auVar48 = *(undefined1 (*) [32])(lVar16 + -0x40 + lVar6);
      auVar55 = *(undefined1 (*) [32])(lVar16 + -0x20 + lVar6);
      auVar5 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                            auVar55);
      auVar44 = vpermps_avx2(auVar52,auVar48);
      auVar5 = vblendps_avx(auVar44,auVar5,0x88);
      auVar44 = vpermps_avx2(auVar49,auVar55);
      auVar53 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar16 + lVar6));
      auVar44 = vblendps_avx(auVar53,auVar44,0x13);
      auVar32 = vperm2f128_avx(auVar5,auVar44,0x31);
      auVar48 = vblendps_avx(auVar55,auVar48,0x24);
      auVar48 = vpermps_avx2(auVar41,auVar48);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar16 + lVar6));
      auVar53 = vblendps_avx(auVar48,auVar55,0xe0);
      auVar48 = *(undefined1 (*) [32])(lVar17 + -0x40 + lVar6);
      auVar55 = *(undefined1 (*) [32])(lVar17 + -0x20 + lVar6);
      auVar23 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar55);
      auVar24 = vpermps_avx2(auVar52,auVar48);
      auVar23 = vblendps_avx(auVar24,auVar23,0x88);
      auVar24 = vpermps_avx2(auVar49,auVar55);
      auVar33 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar17 + lVar6));
      auVar24 = vblendps_avx(auVar33,auVar24,0x13);
      auVar33 = vperm2f128_avx(auVar23,auVar24,0x31);
      auVar48 = vblendps_avx(auVar55,auVar48,0x24);
      auVar48 = vpermps_avx2(auVar41,auVar48);
      auVar55 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(lVar17 + lVar6));
      auVar48 = vblendps_avx(auVar48,auVar55,0xe0);
      auVar56._0_4_ = param_7 * auVar5._0_4_ + auVar23._0_4_ * fVar3;
      auVar56._4_4_ = param_7 * auVar5._4_4_ + auVar23._4_4_ * fVar3;
      auVar56._8_4_ = param_7 * auVar5._8_4_ + auVar23._8_4_ * fVar3;
      auVar56._12_4_ = param_7 * auVar5._12_4_ + auVar23._12_4_ * fVar3;
      auVar58._16_4_ = param_7 * auVar44._0_4_ + auVar24._0_4_ * fVar3;
      auVar58._0_16_ = auVar56;
      auVar58._20_4_ = param_7 * auVar44._4_4_ + auVar24._4_4_ * fVar3;
      auVar58._24_4_ = param_7 * auVar44._8_4_ + auVar24._8_4_ * fVar3;
      auVar58._28_4_ = param_7 * auVar44._12_4_ + auVar24._12_4_ * fVar3;
      auVar21._0_4_ = param_7 * auVar32._0_4_ + fVar3 * auVar33._0_4_;
      auVar21._4_4_ = param_7 * auVar32._4_4_ + fVar3 * auVar33._4_4_;
      auVar21._8_4_ = param_7 * auVar32._8_4_ + fVar3 * auVar33._8_4_;
      auVar21._12_4_ = param_7 * auVar32._12_4_ + fVar3 * auVar33._12_4_;
      auVar44._16_4_ = param_7 * auVar32._16_4_ + fVar3 * auVar33._16_4_;
      auVar44._0_16_ = auVar21;
      auVar44._20_4_ = param_7 * auVar32._20_4_ + fVar3 * auVar33._20_4_;
      auVar44._24_4_ = param_7 * auVar32._24_4_ + fVar3 * auVar33._24_4_;
      auVar44._28_4_ = param_7 * auVar32._28_4_ + fVar3 * auVar33._28_4_;
      auVar32._0_4_ = param_7 * auVar53._0_4_ + fVar3 * auVar48._0_4_;
      auVar32._4_4_ = param_7 * auVar53._4_4_ + fVar3 * auVar48._4_4_;
      auVar32._8_4_ = param_7 * auVar53._8_4_ + fVar3 * auVar48._8_4_;
      auVar32._12_4_ = param_7 * auVar53._12_4_ + fVar3 * auVar48._12_4_;
      auVar32._16_4_ = param_7 * auVar53._16_4_ + fVar3 * auVar48._16_4_;
      auVar32._20_4_ = param_7 * auVar53._20_4_ + fVar3 * auVar48._20_4_;
      auVar32._24_4_ = param_7 * auVar53._24_4_ + fVar3 * auVar48._24_4_;
      auVar32._28_4_ = param_7 * auVar53._28_4_ + fVar3 * auVar48._28_4_;
      auVar53._16_16_ = auVar21;
      auVar53._0_16_ = auVar56;
      auVar55 = vshufpd_avx(auVar58,auVar53,2);
      auVar48 = vpermpd_avx2(auVar44,0xe9);
      auVar5 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                            auVar32);
      auVar48 = vblendps_avx(auVar5,auVar48,7);
      auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar55);
      auVar5 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003,
                            auVar48);
      auVar55 = vblendps_avx(auVar55,auVar5,0xa4);
      *(undefined1 (*) [32])(lVar14 + -0x40 + lVar6) = auVar55;
      auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar48);
      auVar48 = vshufpd_avx(auVar58,auVar58,1);
      auVar48 = vblendps_avx(auVar55,auVar48,0x92);
      *(undefined1 (*) [32])(lVar14 + -0x20 + lVar6) = auVar48;
      auVar55 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar44);
      auVar48 = vpermpd_avx2(auVar58,0xff);
      auVar48 = vblendps_avx(auVar55,auVar48,3);
      auVar48 = vblendps_avx(auVar48,auVar32,0xe0);
      auVar48 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar48);
      *(undefined1 (*) [32])(lVar14 + lVar6) = auVar48;
      auVar48 = *(undefined1 (*) [32])(lVar15 + -0x40 + lVar6);
      auVar55 = *(undefined1 (*) [32])(lVar15 + -0x20 + lVar6);
      auVar5 = vpermps_avx2(auVar54,auVar55);
      auVar44 = vpermps_avx2(auVar52,auVar48);
      auVar5 = vblendps_avx(auVar44,auVar5,0x88);
      auVar44 = vpermps_avx2(auVar49,auVar55);
      auVar53 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar15 + lVar6));
      auVar44 = vblendps_avx(auVar53,auVar44,0x13);
      auVar32 = vperm2f128_avx(auVar5,auVar44,0x31);
      auVar48 = vblendps_avx(auVar55,auVar48,0x24);
      auVar48 = vpermps_avx2(auVar41,auVar48);
      auVar55 = vpermps_avx2(auVar59,*(undefined1 (*) [32])(lVar15 + lVar6));
      auVar53 = vblendps_avx(auVar48,auVar55,0xe0);
      auVar48 = *(undefined1 (*) [32])(lVar10 + -0x40 + lVar6);
      auVar55 = *(undefined1 (*) [32])(lVar10 + -0x20 + lVar6);
      auVar23 = vpermps_avx2(auVar54,auVar55);
      auVar24 = vpermps_avx2(auVar52,auVar48);
      auVar23 = vblendps_avx(auVar24,auVar23,0x88);
      auVar24 = vpermps_avx2(auVar49,auVar55);
      auVar33 = vpermps_avx2(auVar34,*(undefined1 (*) [32])(lVar10 + lVar6));
      auVar24 = vblendps_avx(auVar33,auVar24,0x13);
      auVar33 = vperm2f128_avx(auVar23,auVar24,0x31);
      auVar48 = vblendps_avx(auVar55,auVar48,0x24);
      auVar48 = vpermps_avx2(auVar41,auVar48);
      auVar55 = vpermps_avx2(auVar59,*(undefined1 (*) [32])(lVar10 + lVar6));
      auVar48 = vblendps_avx(auVar48,auVar55,0xe0);
      auVar54._0_4_ = param_7 * auVar5._0_4_ + auVar23._0_4_ * fVar3;
      auVar54._4_4_ = param_7 * auVar5._4_4_ + auVar23._4_4_ * fVar3;
      auVar54._8_4_ = param_7 * auVar5._8_4_ + auVar23._8_4_ * fVar3;
      auVar54._12_4_ = param_7 * auVar5._12_4_ + auVar23._12_4_ * fVar3;
      auVar54._16_4_ = param_7 * auVar44._0_4_ + auVar24._0_4_ * fVar3;
      auVar54._20_4_ = param_7 * auVar44._4_4_ + auVar24._4_4_ * fVar3;
      auVar54._24_4_ = param_7 * auVar44._8_4_ + auVar24._8_4_ * fVar3;
      auVar54._28_4_ = param_7 * auVar44._12_4_ + auVar24._12_4_ * fVar3;
      auVar60._0_4_ = param_7 * auVar32._0_4_ + auVar33._0_4_ * fVar3;
      auVar60._4_4_ = param_7 * auVar32._4_4_ + auVar33._4_4_ * fVar3;
      auVar60._8_4_ = param_7 * auVar32._8_4_ + auVar33._8_4_ * fVar3;
      auVar60._12_4_ = param_7 * auVar32._12_4_ + auVar33._12_4_ * fVar3;
      auVar60._16_4_ = param_7 * auVar32._16_4_ + auVar33._16_4_ * fVar3;
      auVar60._20_4_ = param_7 * auVar32._20_4_ + auVar33._20_4_ * fVar3;
      auVar60._24_4_ = param_7 * auVar32._24_4_ + auVar33._24_4_ * fVar3;
      auVar60._28_4_ = param_7 * auVar32._28_4_ + auVar33._28_4_ * fVar3;
      auVar33._0_4_ = param_7 * auVar53._0_4_ + fVar3 * auVar48._0_4_;
      auVar33._4_4_ = param_7 * auVar53._4_4_ + fVar3 * auVar48._4_4_;
      auVar33._8_4_ = param_7 * auVar53._8_4_ + fVar3 * auVar48._8_4_;
      auVar33._12_4_ = param_7 * auVar53._12_4_ + fVar3 * auVar48._12_4_;
      auVar33._16_4_ = param_7 * auVar53._16_4_ + fVar3 * auVar48._16_4_;
      auVar33._20_4_ = param_7 * auVar53._20_4_ + fVar3 * auVar48._20_4_;
      auVar33._24_4_ = param_7 * auVar53._24_4_ + fVar3 * auVar48._24_4_;
      auVar33._28_4_ = param_7 * auVar53._28_4_ + fVar3 * auVar48._28_4_;
      auVar23._0_4_ =
           auVar33._0_4_ * auVar33._0_4_ +
           auVar54._0_4_ * auVar54._0_4_ + auVar60._0_4_ * auVar60._0_4_;
      auVar23._4_4_ =
           auVar33._4_4_ * auVar33._4_4_ +
           auVar54._4_4_ * auVar54._4_4_ + auVar60._4_4_ * auVar60._4_4_;
      auVar23._8_4_ =
           auVar33._8_4_ * auVar33._8_4_ +
           auVar54._8_4_ * auVar54._8_4_ + auVar60._8_4_ * auVar60._8_4_;
      auVar23._12_4_ =
           auVar33._12_4_ * auVar33._12_4_ +
           auVar54._12_4_ * auVar54._12_4_ + auVar60._12_4_ * auVar60._12_4_;
      auVar23._16_4_ =
           auVar33._16_4_ * auVar33._16_4_ +
           auVar54._16_4_ * auVar54._16_4_ + auVar60._16_4_ * auVar60._16_4_;
      auVar23._20_4_ =
           auVar33._20_4_ * auVar33._20_4_ +
           auVar54._20_4_ * auVar54._20_4_ + auVar60._20_4_ * auVar60._20_4_;
      auVar23._24_4_ =
           auVar33._24_4_ * auVar33._24_4_ +
           auVar54._24_4_ * auVar54._24_4_ + auVar60._24_4_ * auVar60._24_4_;
      auVar23._28_4_ =
           auVar33._28_4_ * auVar33._28_4_ +
           auVar54._28_4_ * auVar54._28_4_ + auVar60._28_4_ * auVar60._28_4_;
      auVar48 = vsqrtps_avx(auVar23);
      auVar55 = vdivps_avx(auVar54,auVar48);
      auVar44 = vdivps_avx(auVar60,auVar48);
      auVar53 = vdivps_avx(auVar33,auVar48);
      auVar48._4_4_ = uVar2;
      auVar48._0_4_ = uVar2;
      auVar48._8_4_ = uVar2;
      auVar48._12_4_ = uVar2;
      auVar48._16_4_ = uVar2;
      auVar48._20_4_ = uVar2;
      auVar48._24_4_ = uVar2;
      auVar48._28_4_ = uVar2;
      auVar48 = vcmpps_avx(auVar23,auVar48,2);
      auVar5._4_4_ = fVar4;
      auVar5._0_4_ = fVar4;
      auVar5._8_4_ = fVar4;
      auVar5._12_4_ = fVar4;
      auVar5._16_4_ = fVar4;
      auVar5._20_4_ = fVar4;
      auVar5._24_4_ = fVar4;
      auVar5._28_4_ = fVar4;
      auVar5 = vblendvps_avx(auVar55,auVar5,auVar48);
      auVar57._0_4_ = ~auVar48._0_4_ & auVar44._0_4_;
      auVar57._4_4_ = ~auVar48._4_4_ & auVar44._4_4_;
      auVar57._8_4_ = ~auVar48._8_4_ & auVar44._8_4_;
      auVar57._12_4_ = ~auVar48._12_4_ & auVar44._12_4_;
      auVar59._16_4_ = ~auVar48._16_4_ & auVar44._16_4_;
      auVar59._0_16_ = auVar57;
      auVar59._20_4_ = ~auVar48._20_4_ & auVar44._20_4_;
      auVar59._24_4_ = ~auVar48._24_4_ & auVar44._24_4_;
      auVar59._28_4_ = ~auVar48._28_4_ & auVar44._28_4_;
      auVar24._0_4_ = ~auVar48._0_4_ & auVar53._0_4_;
      auVar24._4_4_ = ~auVar48._4_4_ & auVar53._4_4_;
      auVar24._8_4_ = ~auVar48._8_4_ & auVar53._8_4_;
      auVar24._12_4_ = ~auVar48._12_4_ & auVar53._12_4_;
      auVar24._16_4_ = ~auVar48._16_4_ & auVar53._16_4_;
      auVar24._20_4_ = ~auVar48._20_4_ & auVar53._20_4_;
      auVar24._24_4_ = ~auVar48._24_4_ & auVar53._24_4_;
      auVar24._28_4_ = ~auVar48._28_4_ & auVar53._28_4_;
      auVar55._16_16_ = auVar57;
      auVar55._0_16_ = auVar5._0_16_;
      auVar55 = vshufpd_avx(auVar5,auVar55,2);
      auVar44 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar24);
      auVar48 = vpermpd_avx2(auVar59,0xe9);
      auVar48 = vblendps_avx(auVar44,auVar48,7);
      auVar44 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar48);
      auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar55);
      auVar55 = vblendps_avx(auVar55,auVar44,0xa4);
      *(undefined1 (*) [32])(lVar13 + -0x40 + lVar6) = auVar55;
      auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar48);
      auVar48 = vshufpd_avx(auVar5,auVar5,1);
      auVar48 = vblendps_avx(auVar55,auVar48,0x92);
      *(undefined1 (*) [32])(lVar13 + -0x20 + lVar6) = auVar48;
      auVar55 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar59);
      auVar48 = vpermpd_avx2(auVar5,0xff);
      auVar48 = vblendps_avx(auVar55,auVar48,3);
      auVar48 = vblendps_avx(auVar48,auVar24,0xe0);
      auVar48 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar48);
      *(undefined1 (*) [32])(lVar13 + lVar6) = auVar48;
      uVar9 = uVar9 + 8;
      lVar16 = lVar16 + 0x60;
      lVar17 = lVar17 + 0x60;
      lVar14 = lVar14 + 0x60;
      lVar15 = lVar15 + 0x60;
      lVar10 = lVar10 + 0x60;
      lVar13 = lVar13 + 0x60;
    } while ((longlong)uVar9 < (longlong)iVar12);
  }
  iVar12 = (int)uVar9;
  if (iVar12 < param_9) {
    auVar52._0_4_ = iVar12 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000
    ;
    auVar52._4_4_ = iVar12 + _UNK_150b50ae4;
    auVar52._8_4_ = iVar12 + _UNK_150b50ae8;
    auVar52._12_4_ = iVar12 + _UNK_150b50aec;
    auVar52._16_4_ = iVar12 + _UNK_150b50af0;
    auVar52._20_4_ = iVar12 + _UNK_150b50af4;
    auVar52._24_4_ = iVar12 + _UNK_150b50af8;
    auVar52._28_4_ = iVar12 + _UNK_150b50afc;
    auVar34._4_4_ = param_9;
    auVar34._0_4_ = param_9;
    auVar34._8_4_ = param_9;
    auVar34._12_4_ = param_9;
    auVar34._16_4_ = param_9;
    auVar34._20_4_ = param_9;
    auVar34._24_4_ = param_9;
    auVar34._28_4_ = param_9;
    auVar52 = vpcmpgtd_avx2(auVar34,auVar52);
    lVar16 = (longlong)iVar12;
    pauVar1 = (undefined1 (*) [32])(param_3 + lVar16 * 0xc);
    uVar8 = vmovmskps_avx(auVar52);
    if (uVar8 == 0xff) {
      auVar34 = pauVar1[1];
      auVar41 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar34);
      auVar49 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar41 = vblendps_avx(auVar49,auVar41,0x88);
      auVar49 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar34);
      auVar48 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar1[2]);
      auVar49 = vblendps_avx(auVar48,auVar49,0x13);
      auVar40._16_16_ = auVar49._0_16_;
      auVar40._0_16_ = auVar41._0_16_;
      auVar44 = vperm2f128_avx(auVar41,auVar49,0x31);
      auVar34 = vblendps_avx(auVar34,*pauVar1,0x24);
      auVar34 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar34);
      auVar41 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar1[2]);
      auVar48 = vblendps_avx(auVar34,auVar41,0xe0);
      auVar34 = *(undefined1 (*) [32])(param_4 + lVar16 * 0xc);
      auVar41 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar16 * 0xc);
      auVar49 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar16 * 0xc);
      auVar55 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar41);
      auVar5 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar34);
      auVar55 = vblendps_avx(auVar5,auVar55,0x88);
      auVar5 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                            auVar41);
      auVar53 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar49);
      auVar5 = vblendps_avx(auVar53,auVar5,0x13);
      auVar39._16_16_ = auVar5._0_16_;
      auVar39._0_16_ = auVar55._0_16_;
      auVar55 = vperm2f128_avx(auVar55,auVar5,0x31);
      auVar34 = vblendps_avx(auVar41,auVar34,0x24);
      auVar34 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar34);
      auVar41 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar49);
      auVar34 = vblendps_avx(auVar34,auVar41,0xe0);
    }
    else {
      auVar40 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar48 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar39 = vgatherdps(ZEXT832(0),auVar52);
      auVar55 = vgatherdps(ZEXT832(0),auVar52);
      auVar34 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
    }
    fVar4 = __real_3f800000 - param_7;
    auVar50._0_4_ = param_7 * auVar40._0_4_ + fVar4 * auVar39._0_4_;
    auVar50._4_4_ = param_7 * auVar40._4_4_ + fVar4 * auVar39._4_4_;
    auVar50._8_4_ = param_7 * auVar40._8_4_ + fVar4 * auVar39._8_4_;
    auVar50._12_4_ = param_7 * auVar40._12_4_ + fVar4 * auVar39._12_4_;
    auVar51._16_4_ = param_7 * auVar40._16_4_ + fVar4 * auVar39._16_4_;
    auVar51._0_16_ = auVar50;
    auVar51._20_4_ = param_7 * auVar40._20_4_ + fVar4 * auVar39._20_4_;
    auVar51._24_4_ = param_7 * auVar40._24_4_ + fVar4 * auVar39._24_4_;
    auVar51._28_4_ = param_7 * auVar40._28_4_ + fVar4 * auVar39._28_4_;
    auVar38._0_4_ = param_7 * auVar44._0_4_ + auVar55._0_4_ * fVar4;
    auVar38._4_4_ = param_7 * auVar44._4_4_ + auVar55._4_4_ * fVar4;
    auVar38._8_4_ = param_7 * auVar44._8_4_ + auVar55._8_4_ * fVar4;
    auVar38._12_4_ = param_7 * auVar44._12_4_ + auVar55._12_4_ * fVar4;
    auVar49._16_4_ = param_7 * auVar44._16_4_ + auVar55._16_4_ * fVar4;
    auVar49._0_16_ = auVar38;
    auVar49._20_4_ = param_7 * auVar44._20_4_ + auVar55._20_4_ * fVar4;
    auVar49._24_4_ = param_7 * auVar44._24_4_ + auVar55._24_4_ * fVar4;
    auVar49._28_4_ = param_7 * auVar44._28_4_ + auVar55._28_4_ * fVar4;
    auVar31._0_4_ = param_7 * auVar48._0_4_ + fVar4 * auVar34._0_4_;
    auVar31._4_4_ = param_7 * auVar48._4_4_ + fVar4 * auVar34._4_4_;
    auVar31._8_4_ = param_7 * auVar48._8_4_ + fVar4 * auVar34._8_4_;
    auVar31._12_4_ = param_7 * auVar48._12_4_ + fVar4 * auVar34._12_4_;
    auVar41._16_4_ = param_7 * auVar48._16_4_ + fVar4 * auVar34._16_4_;
    auVar41._0_16_ = auVar31;
    auVar41._20_4_ = param_7 * auVar48._20_4_ + fVar4 * auVar34._20_4_;
    auVar41._24_4_ = param_7 * auVar48._24_4_ + fVar4 * auVar34._24_4_;
    auVar41._28_4_ = param_7 * auVar48._28_4_ + fVar4 * auVar34._28_4_;
    pauVar1 = (undefined1 (*) [32])(param_1 + lVar16 * 0xc);
    cVar7 = (char)uVar8;
    auVar21 = auVar51._16_16_;
    if (cVar7 == -1) {
      auVar28._16_16_ = auVar38;
      auVar28._0_16_ = auVar50;
      auVar34 = vshufpd_avx(auVar51,auVar28,2);
      auVar48 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar41);
      auVar52 = vpermpd_avx2(auVar49,0xe9);
      auVar52 = vblendps_avx(auVar48,auVar52,7);
      auVar46._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar46._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar48 = vpermps_avx2(auVar46,auVar52);
      auVar34 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar34);
      auVar34 = vblendps_avx(auVar34,auVar48,0xa4);
      *pauVar1 = auVar34;
      auVar34 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar52);
      auVar52 = vshufpd_avx(auVar51,auVar51,1);
      auVar52 = vblendps_avx(auVar34,auVar52,0x92);
      pauVar1[1] = auVar52;
      auVar29._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar29._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar34 = vpermps_avx2(auVar29,auVar49);
      auVar52 = vpermpd_avx2(auVar51,0xff);
      auVar52 = vblendps_avx(auVar34,auVar52,3);
      auVar52 = vblendps_avx(auVar52,auVar41,0xe0);
      auVar52 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar52);
      pauVar1[2] = auVar52;
      lVar17 = lVar16 * 0xc;
      auVar52 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar17);
      auVar34 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar17);
      auVar41 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar52);
      auVar49 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(param_5 + lVar17));
      auVar41 = vblendps_avx(auVar49,auVar41,0x88);
      auVar49 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar52);
      auVar48 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar34);
      auVar49 = vblendps_avx(auVar48,auVar49,0x13);
      auVar35._16_16_ = auVar49._0_16_;
      auVar35._0_16_ = auVar41._0_16_;
      auVar55 = vperm2f128_avx(auVar41,auVar49,0x31);
      auVar52 = vblendps_avx(auVar52,*(undefined1 (*) [32])(param_5 + lVar17),0x24);
      auVar52 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar52);
      auVar34 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar34);
      auVar41 = vblendps_avx(auVar52,auVar34,0xe0);
      auVar52 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar17);
      auVar34 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar17);
      auVar49 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar52);
      auVar48 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(param_6 + lVar17));
      auVar49 = vblendps_avx(auVar48,auVar49,0x88);
      auVar48 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar52);
      auVar5 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            auVar34);
      auVar48 = vblendps_avx(auVar5,auVar48,0x13);
      auVar45._16_16_ = auVar48._0_16_;
      auVar45._0_16_ = auVar49._0_16_;
      auVar49 = vperm2f128_avx(auVar49,auVar48,0x31);
      auVar52 = vblendps_avx(auVar52,*(undefined1 (*) [32])(param_6 + lVar17),0x24);
      auVar52 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar52);
      auVar34 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar34);
      auVar52 = vblendps_avx(auVar52,auVar34,0xe0);
    }
    else {
      auVar57 = auVar49._16_16_;
      auVar56 = auVar41._16_16_;
      if ((uVar8 & 1) != 0) {
        *(float *)*pauVar1 = auVar50._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar50,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar50,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar50,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x10) = auVar51._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar21,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar21,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar21,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar8 & 1) != 0) {
        *(float *)(*pauVar1 + 4) = auVar38._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar38,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar38,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar38,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x14) = auVar49._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar57,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar57,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar57,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar8 & 1) != 0) {
        *(float *)(*pauVar1 + 8) = auVar31._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar31,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar31,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar31,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(float *)(pauVar1[1] + 0x18) = auVar41._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar56,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar56,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar56,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
      auVar35 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar55 = vgatherdps(ZEXT832(0),auVar52);
      auVar41 = vgatherdps(ZEXT832(0),auVar52);
      auVar45 = vgatherdps(ZEXT832(0),auVar52);
      auVar49 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
      auVar52 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar52);
    }
    auVar30._0_4_ = param_7 * auVar35._0_4_ + fVar4 * auVar45._0_4_;
    auVar30._4_4_ = param_7 * auVar35._4_4_ + fVar4 * auVar45._4_4_;
    auVar30._8_4_ = param_7 * auVar35._8_4_ + fVar4 * auVar45._8_4_;
    auVar30._12_4_ = param_7 * auVar35._12_4_ + fVar4 * auVar45._12_4_;
    auVar30._16_4_ = param_7 * auVar35._16_4_ + fVar4 * auVar45._16_4_;
    auVar30._20_4_ = param_7 * auVar35._20_4_ + fVar4 * auVar45._20_4_;
    auVar30._24_4_ = param_7 * auVar35._24_4_ + fVar4 * auVar45._24_4_;
    auVar30._28_4_ = param_7 * auVar35._28_4_ + fVar4 * auVar45._28_4_;
    auVar47._0_4_ = param_7 * auVar55._0_4_ + fVar4 * auVar49._0_4_;
    auVar47._4_4_ = param_7 * auVar55._4_4_ + fVar4 * auVar49._4_4_;
    auVar47._8_4_ = param_7 * auVar55._8_4_ + fVar4 * auVar49._8_4_;
    auVar47._12_4_ = param_7 * auVar55._12_4_ + fVar4 * auVar49._12_4_;
    auVar47._16_4_ = param_7 * auVar55._16_4_ + fVar4 * auVar49._16_4_;
    auVar47._20_4_ = param_7 * auVar55._20_4_ + fVar4 * auVar49._20_4_;
    auVar47._24_4_ = param_7 * auVar55._24_4_ + fVar4 * auVar49._24_4_;
    auVar47._28_4_ = param_7 * auVar55._28_4_ + fVar4 * auVar49._28_4_;
    auVar25._0_4_ = param_7 * auVar41._0_4_ + auVar52._0_4_ * fVar4;
    auVar25._4_4_ = param_7 * auVar41._4_4_ + auVar52._4_4_ * fVar4;
    auVar25._8_4_ = param_7 * auVar41._8_4_ + auVar52._8_4_ * fVar4;
    auVar25._12_4_ = param_7 * auVar41._12_4_ + auVar52._12_4_ * fVar4;
    auVar25._16_4_ = param_7 * auVar41._16_4_ + auVar52._16_4_ * fVar4;
    auVar25._20_4_ = param_7 * auVar41._20_4_ + auVar52._20_4_ * fVar4;
    auVar25._24_4_ = param_7 * auVar41._24_4_ + auVar52._24_4_ * fVar4;
    auVar25._28_4_ = param_7 * auVar41._28_4_ + auVar52._28_4_ * fVar4;
    auVar19._0_4_ =
         auVar25._0_4_ * auVar25._0_4_ +
         auVar30._0_4_ * auVar30._0_4_ + auVar47._0_4_ * auVar47._0_4_;
    auVar19._4_4_ =
         auVar25._4_4_ * auVar25._4_4_ +
         auVar30._4_4_ * auVar30._4_4_ + auVar47._4_4_ * auVar47._4_4_;
    auVar19._8_4_ =
         auVar25._8_4_ * auVar25._8_4_ +
         auVar30._8_4_ * auVar30._8_4_ + auVar47._8_4_ * auVar47._8_4_;
    auVar19._12_4_ =
         auVar25._12_4_ * auVar25._12_4_ +
         auVar30._12_4_ * auVar30._12_4_ + auVar47._12_4_ * auVar47._12_4_;
    auVar19._16_4_ =
         auVar25._16_4_ * auVar25._16_4_ +
         auVar30._16_4_ * auVar30._16_4_ + auVar47._16_4_ * auVar47._16_4_;
    auVar19._20_4_ =
         auVar25._20_4_ * auVar25._20_4_ +
         auVar30._20_4_ * auVar30._20_4_ + auVar47._20_4_ * auVar47._20_4_;
    auVar19._24_4_ =
         auVar25._24_4_ * auVar25._24_4_ +
         auVar30._24_4_ * auVar30._24_4_ + auVar47._24_4_ * auVar47._24_4_;
    auVar19._28_4_ =
         auVar25._28_4_ * auVar25._28_4_ +
         auVar30._28_4_ * auVar30._28_4_ + auVar47._28_4_ * auVar47._28_4_;
    auVar34 = vsqrtps_avx(auVar19);
    auVar52 = vdivps_avx(auVar30,auVar34);
    auVar41 = vdivps_avx(auVar47,auVar34);
    auVar42._4_4_ = __real_00800000;
    auVar42._0_4_ = __real_00800000;
    auVar42._8_4_ = __real_00800000;
    auVar42._12_4_ = __real_00800000;
    auVar42._16_4_ = __real_00800000;
    auVar42._20_4_ = __real_00800000;
    auVar42._24_4_ = __real_00800000;
    auVar42._28_4_ = __real_00800000;
    auVar49 = vdivps_avx(auVar25,auVar34);
    auVar34 = vcmpps_avx(auVar19,auVar42,2);
    auVar26._4_4_ = __real_3f800000;
    auVar26._0_4_ = __real_3f800000;
    auVar26._8_4_ = __real_3f800000;
    auVar26._12_4_ = __real_3f800000;
    auVar26._16_4_ = __real_3f800000;
    auVar26._20_4_ = __real_3f800000;
    auVar26._24_4_ = __real_3f800000;
    auVar26._28_4_ = __real_3f800000;
    auVar52 = vblendvps_avx(auVar52,auVar26,auVar34);
    auVar22._0_4_ = ~auVar34._0_4_ & auVar41._0_4_;
    auVar22._4_4_ = ~auVar34._4_4_ & auVar41._4_4_;
    auVar22._8_4_ = ~auVar34._8_4_ & auVar41._8_4_;
    auVar22._12_4_ = ~auVar34._12_4_ & auVar41._12_4_;
    auVar27._16_4_ = ~auVar34._16_4_ & auVar41._16_4_;
    auVar27._0_16_ = auVar22;
    auVar27._20_4_ = ~auVar34._20_4_ & auVar41._20_4_;
    auVar27._24_4_ = ~auVar34._24_4_ & auVar41._24_4_;
    auVar27._28_4_ = ~auVar34._28_4_ & auVar41._28_4_;
    auVar18._0_4_ = ~auVar34._0_4_ & auVar49._0_4_;
    auVar18._4_4_ = ~auVar34._4_4_ & auVar49._4_4_;
    auVar18._8_4_ = ~auVar34._8_4_ & auVar49._8_4_;
    auVar18._12_4_ = ~auVar34._12_4_ & auVar49._12_4_;
    auVar20._16_4_ = ~auVar34._16_4_ & auVar49._16_4_;
    auVar20._0_16_ = auVar18;
    auVar20._20_4_ = ~auVar34._20_4_ & auVar49._20_4_;
    auVar20._24_4_ = ~auVar34._24_4_ & auVar49._24_4_;
    auVar20._28_4_ = ~auVar34._28_4_ & auVar49._28_4_;
    pauVar1 = (undefined1 (*) [32])(param_2 + lVar16 * 0xc);
    auVar21 = auVar52._0_16_;
    auVar56 = auVar52._16_16_;
    if (cVar7 == -1) {
      auVar36._16_16_ = auVar22;
      auVar36._0_16_ = auVar21;
      auVar41 = vshufpd_avx(auVar52,auVar36,2);
      auVar49 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar20);
      auVar34 = vpermpd_avx2(auVar27,0xe9);
      auVar34 = vblendps_avx(auVar49,auVar34,7);
      auVar43._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar43._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar49 = vpermps_avx2(auVar43,auVar34);
      auVar41 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar41);
      auVar41 = vblendps_avx(auVar41,auVar49,0xa4);
      *pauVar1 = auVar41;
      auVar41 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar34);
      auVar34 = vshufpd_avx(auVar52,auVar52,1);
      auVar34 = vblendps_avx(auVar41,auVar34,0x92);
      pauVar1[1] = auVar34;
      auVar37._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar37._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar34 = vpermps_avx2(auVar37,auVar27);
      auVar52 = vpermpd_avx2(auVar52,0xff);
      auVar52 = vblendps_avx(auVar34,auVar52,3);
      auVar52 = vblendps_avx(auVar52,auVar20,0xe0);
      auVar52 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar52);
      pauVar1[2] = auVar52;
    }
    else {
      auVar31 = auVar27._16_16_;
      auVar57 = auVar20._16_16_;
      if ((uVar8 & 1) != 0) {
        *(int *)*pauVar1 = auVar52._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar21,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar21,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar21,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x10) = auVar52._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar56,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar56,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar56,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar8 & 1) != 0) {
        *(uint *)(*pauVar1 + 4) = auVar22._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar22,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar22,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar22,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(uint *)(pauVar1[1] + 0x14) = auVar27._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar31,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar31,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar31,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar8 & 1) != 0) {
        *(uint *)(*pauVar1 + 8) = auVar18._0_4_;
      }
      if ((uVar8 & 2) != 0) {
        uVar2 = vextractps_avx(auVar18,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar8 & 4) != 0) {
        uVar2 = vextractps_avx(auVar18,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar8 & 8) != 0) {
        uVar2 = vextractps_avx(auVar18,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar8 & 0x10) != 0) {
        *(uint *)(pauVar1[1] + 0x18) = auVar20._16_4_;
      }
      if ((uVar8 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar57,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar8 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar57,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar7 < '\0') {
        uVar2 = vextractps_avx(auVar57,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
    }
  }
  return;
}

// CalculateBounds_avx2 @ 140ce9a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateBounds_avx2
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 (*pauVar11) [32];
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
  
  uVar1 = *param_1;
  auVar17._4_4_ = uVar1;
  auVar17._0_4_ = uVar1;
  auVar17._8_4_ = uVar1;
  auVar17._12_4_ = uVar1;
  auVar17._16_4_ = uVar1;
  auVar17._20_4_ = uVar1;
  auVar17._24_4_ = uVar1;
  auVar17._28_4_ = uVar1;
  uVar1 = param_1[1];
  auVar15._4_4_ = uVar1;
  auVar15._0_4_ = uVar1;
  auVar15._8_4_ = uVar1;
  auVar15._12_4_ = uVar1;
  auVar15._16_4_ = uVar1;
  auVar15._20_4_ = uVar1;
  auVar15._24_4_ = uVar1;
  auVar15._28_4_ = uVar1;
  iVar7 = (int)param_4;
  uVar10 = param_5 - iVar7;
  uVar8 = uVar10 + 7;
  if (-1 < (int)uVar10) {
    uVar8 = uVar10;
  }
  uVar1 = param_1[2];
  auVar16._4_4_ = uVar1;
  auVar16._0_4_ = uVar1;
  auVar16._8_4_ = uVar1;
  auVar16._12_4_ = uVar1;
  auVar16._16_4_ = uVar1;
  auVar16._20_4_ = uVar1;
  auVar16._24_4_ = uVar1;
  auVar16._28_4_ = uVar1;
  iVar9 = ((uVar8 & 0xfffffff8) - uVar10) + param_5;
  uVar1 = *param_2;
  auVar14._4_4_ = uVar1;
  auVar14._0_4_ = uVar1;
  auVar14._8_4_ = uVar1;
  auVar14._12_4_ = uVar1;
  auVar14._16_4_ = uVar1;
  auVar14._20_4_ = uVar1;
  auVar14._24_4_ = uVar1;
  auVar14._28_4_ = uVar1;
  uVar1 = param_2[1];
  auVar13._4_4_ = uVar1;
  auVar13._0_4_ = uVar1;
  auVar13._8_4_ = uVar1;
  auVar13._12_4_ = uVar1;
  auVar13._16_4_ = uVar1;
  auVar13._20_4_ = uVar1;
  auVar13._24_4_ = uVar1;
  auVar13._28_4_ = uVar1;
  uVar1 = param_2[2];
  auVar12._4_4_ = uVar1;
  auVar12._0_4_ = uVar1;
  auVar12._8_4_ = uVar1;
  auVar12._12_4_ = uVar1;
  auVar12._16_4_ = uVar1;
  auVar12._20_4_ = uVar1;
  auVar12._24_4_ = uVar1;
  auVar12._28_4_ = uVar1;
  if (iVar7 < iVar9) {
    param_4 = (longlong)iVar7;
    pauVar11 = (undefined1 (*) [32])(param_3 + param_4 * 0xc + 0x40);
    auVar20._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar20._0_16_ = ___xmm_00000007000000040000000100000000;
    do {
      auVar2 = pauVar11[-1];
      auVar19 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar2);
      auVar21 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,pauVar11[-2]);
      auVar19 = vblendps_avx(auVar21,auVar19,0x88);
      auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar2);
      auVar22 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*pauVar11);
      auVar21 = vblendps_avx(auVar22,auVar21,0x13);
      auVar22._16_16_ = auVar21._0_16_;
      auVar22._0_16_ = auVar19._0_16_;
      auVar19 = vperm2f128_avx(auVar19,auVar21,0x31);
      auVar2 = vblendps_avx(auVar2,pauVar11[-2],0x24);
      auVar2 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar2);
      auVar21 = vpermps_avx2(auVar20,*pauVar11);
      auVar2 = vblendps_avx(auVar2,auVar21,0xe0);
      auVar17 = vminps_avx(auVar17,auVar22);
      auVar14 = vmaxps_avx(auVar14,auVar22);
      auVar15 = vminps_avx(auVar15,auVar19);
      auVar13 = vmaxps_avx(auVar13,auVar19);
      auVar16 = vminps_avx(auVar16,auVar2);
      auVar12 = vmaxps_avx(auVar12,auVar2);
      param_4 = param_4 + 8;
      pauVar11 = pauVar11 + 3;
    } while (param_4 < iVar9);
  }
  iVar7 = (int)param_4;
  if (iVar7 < param_5) {
    auVar2._0_4_ = iVar7 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar2._4_4_ = iVar7 + _UNK_150b50ae4;
    auVar2._8_4_ = iVar7 + _UNK_150b50ae8;
    auVar2._12_4_ = iVar7 + _UNK_150b50aec;
    auVar2._16_4_ = iVar7 + _UNK_150b50af0;
    auVar2._20_4_ = iVar7 + _UNK_150b50af4;
    auVar2._24_4_ = iVar7 + _UNK_150b50af8;
    auVar2._28_4_ = iVar7 + _UNK_150b50afc;
    auVar19._4_4_ = param_5;
    auVar19._0_4_ = param_5;
    auVar19._8_4_ = param_5;
    auVar19._12_4_ = param_5;
    auVar19._16_4_ = param_5;
    auVar19._20_4_ = param_5;
    auVar19._24_4_ = param_5;
    auVar19._28_4_ = param_5;
    auVar2 = vpcmpgtd_avx2(auVar19,auVar2);
    pauVar11 = (undefined1 (*) [32])(param_3 + (longlong)iVar7 * 0xc);
    auVar20 = vpcmpeqd_avx2(auVar19,auVar19);
    auVar20 = auVar20 & ~auVar2;
    if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) == 0 && (SUB321(auVar20 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar20 >> 0x5f,0) & 1) == 0) && SUB321(auVar20 >> 0x7f,0) == '\0') &&
          (SUB321(auVar20 >> 0x9f,0) & 1) == 0) && SUB321(auVar20 >> 0xbf,0) == '\0') &&
        (SUB321(auVar20 >> 0xdf,0) & 1) == 0) && -1 < auVar20[0x1f]) {
      auVar20 = pauVar11[1];
      auVar19 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar20);
      auVar21 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar11);
      auVar19 = vblendps_avx(auVar21,auVar19,0x88);
      auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar20);
      auVar22 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar11[2]);
      auVar21 = vblendps_avx(auVar22,auVar21,0x13);
      auVar18._16_16_ = auVar21._0_16_;
      auVar18._0_16_ = auVar19._0_16_;
      auVar19 = vperm2f128_avx(auVar19,auVar21,0x31);
      auVar20 = vblendps_avx(auVar20,*pauVar11,0x24);
      auVar20 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar20);
      auVar21._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar21._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar21 = vpermps_avx2(auVar21,pauVar11[2]);
      auVar20 = vblendps_avx(auVar20,auVar21,0xe0);
    }
    else {
      auVar18 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
      auVar19 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
      auVar20 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
    }
    auVar17 = vminps_avx(auVar17,auVar18);
    auVar15 = vminps_avx(auVar15,auVar19);
    auVar16 = vminps_avx(auVar16,auVar20);
    auVar17 = vmaskmovps_avx(auVar2,auVar17);
    auVar15 = vmaskmovps_avx(auVar2,auVar15);
    auVar16 = vmaskmovps_avx(auVar2,auVar16);
    auVar14 = vmaxps_avx(auVar14,auVar18);
    auVar13 = vmaxps_avx(auVar13,auVar19);
    auVar12 = vmaxps_avx(auVar12,auVar20);
    auVar14 = vmaskmovps_avx(auVar2,auVar14);
    auVar13 = vmaskmovps_avx(auVar2,auVar13);
    auVar12 = vmaskmovps_avx(auVar2,auVar12);
  }
  auVar3 = vminps_avx(auVar17._16_16_,auVar17._0_16_);
  auVar4 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vminps_avx(auVar4,auVar3);
  auVar4 = vmovshdup_avx(auVar3);
  auVar4 = vminss_avx(auVar3,auVar4);
  auVar3 = vminps_avx(auVar15._16_16_,auVar15._0_16_);
  auVar5 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vminps_avx(auVar5,auVar3);
  auVar5 = vmovshdup_avx(auVar3);
  auVar5 = vminss_avx(auVar3,auVar5);
  auVar3 = vminps_avx(auVar16._16_16_,auVar16._0_16_);
  auVar6 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vminps_avx(auVar6,auVar3);
  auVar6 = vmovshdup_avx(auVar3);
  auVar3 = vminss_avx(auVar3,auVar6);
  *param_1 = auVar4._0_4_;
  param_1[1] = auVar5._0_4_;
  param_1[2] = auVar3._0_4_;
  auVar3 = vmaxps_avx(auVar14._16_16_,auVar14._0_16_);
  auVar4 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vmaxps_avx(auVar4,auVar3);
  auVar4 = vmovshdup_avx(auVar3);
  auVar4 = vmaxss_avx(auVar4,auVar3);
  auVar3 = vmaxps_avx(auVar13._16_16_,auVar13._0_16_);
  auVar5 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vmaxps_avx(auVar5,auVar3);
  auVar5 = vmovshdup_avx(auVar3);
  auVar5 = vmaxss_avx(auVar5,auVar3);
  auVar3 = vmaxps_avx(auVar12._16_16_,auVar12._0_16_);
  auVar6 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vmaxps_avx(auVar6,auVar3);
  auVar6 = vmovshdup_avx(auVar3);
  auVar3 = vmaxss_avx(auVar6,auVar3);
  *param_2 = auVar4._0_4_;
  param_2[1] = auVar5._0_4_;
  param_2[2] = auVar3._0_4_;
  return;
}

// CalculateSquaredRadius_avx2 @ 140ce9eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateSquaredRadius_avx2
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
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
  
  uVar1 = *param_1;
  auVar10._4_4_ = uVar1;
  auVar10._0_4_ = uVar1;
  auVar10._8_4_ = uVar1;
  auVar10._12_4_ = uVar1;
  auVar10._16_4_ = uVar1;
  auVar10._20_4_ = uVar1;
  auVar10._24_4_ = uVar1;
  auVar10._28_4_ = uVar1;
  iVar5 = (int)param_4;
  uVar8 = param_5 - iVar5;
  uVar6 = uVar8 + 7;
  if (-1 < (int)uVar8) {
    uVar6 = uVar8;
  }
  iVar7 = ((uVar6 & 0xfffffff8) - uVar8) + param_5;
  if (iVar5 < iVar7) {
    param_4 = (longlong)iVar5;
    pauVar9 = (undefined1 (*) [32])(param_3 + param_4 * 0xc + 0x40);
    auVar15._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar15._0_16_ = ___xmm_00000007000000040000000100000000;
    uVar1 = *param_2;
    auVar20._4_4_ = uVar1;
    auVar20._0_4_ = uVar1;
    auVar20._8_4_ = uVar1;
    auVar20._12_4_ = uVar1;
    auVar20._16_4_ = uVar1;
    auVar20._20_4_ = uVar1;
    auVar20._24_4_ = uVar1;
    auVar20._28_4_ = uVar1;
    uVar1 = param_2[1];
    auVar13._4_4_ = uVar1;
    auVar13._0_4_ = uVar1;
    auVar13._8_4_ = uVar1;
    auVar13._12_4_ = uVar1;
    auVar13._16_4_ = uVar1;
    auVar13._20_4_ = uVar1;
    auVar13._24_4_ = uVar1;
    auVar13._28_4_ = uVar1;
    uVar1 = param_2[2];
    auVar21._4_4_ = uVar1;
    auVar21._0_4_ = uVar1;
    auVar21._8_4_ = uVar1;
    auVar21._12_4_ = uVar1;
    auVar21._16_4_ = uVar1;
    auVar21._20_4_ = uVar1;
    auVar21._24_4_ = uVar1;
    auVar21._28_4_ = uVar1;
    do {
      auVar2 = pauVar9[-1];
      auVar11 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar2);
      auVar22 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,pauVar9[-2]);
      auVar11 = vblendps_avx(auVar22,auVar11,0x88);
      auVar22 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar2);
      auVar23 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*pauVar9);
      auVar22 = vblendps_avx(auVar23,auVar22,0x13);
      auVar23._16_16_ = auVar22._0_16_;
      auVar23._0_16_ = auVar11._0_16_;
      auVar23 = vsubps_avx(auVar23,auVar20);
      auVar11 = vperm2f128_avx(auVar11,auVar22,0x31);
      auVar11 = vsubps_avx(auVar11,auVar13);
      auVar2 = vblendps_avx(auVar2,pauVar9[-2],0x24);
      auVar2 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar2);
      auVar22 = vpermps_avx2(auVar15,*pauVar9);
      auVar2 = vblendps_avx(auVar2,auVar22,0xe0);
      auVar2 = vsubps_avx(auVar2,auVar21);
      auVar22._0_4_ =
           auVar2._0_4_ * auVar2._0_4_ +
           auVar23._0_4_ * auVar23._0_4_ + auVar11._0_4_ * auVar11._0_4_;
      auVar22._4_4_ =
           auVar2._4_4_ * auVar2._4_4_ +
           auVar23._4_4_ * auVar23._4_4_ + auVar11._4_4_ * auVar11._4_4_;
      auVar22._8_4_ =
           auVar2._8_4_ * auVar2._8_4_ +
           auVar23._8_4_ * auVar23._8_4_ + auVar11._8_4_ * auVar11._8_4_;
      auVar22._12_4_ =
           auVar2._12_4_ * auVar2._12_4_ +
           auVar23._12_4_ * auVar23._12_4_ + auVar11._12_4_ * auVar11._12_4_;
      auVar22._16_4_ =
           auVar2._16_4_ * auVar2._16_4_ +
           auVar23._16_4_ * auVar23._16_4_ + auVar11._16_4_ * auVar11._16_4_;
      auVar22._20_4_ =
           auVar2._20_4_ * auVar2._20_4_ +
           auVar23._20_4_ * auVar23._20_4_ + auVar11._20_4_ * auVar11._20_4_;
      auVar22._24_4_ =
           auVar2._24_4_ * auVar2._24_4_ +
           auVar23._24_4_ * auVar23._24_4_ + auVar11._24_4_ * auVar11._24_4_;
      auVar22._28_4_ =
           auVar2._28_4_ * auVar2._28_4_ +
           auVar23._28_4_ * auVar23._28_4_ + auVar11._28_4_ * auVar11._28_4_;
      auVar10 = vmaxps_avx(auVar10,auVar22);
      param_4 = param_4 + 8;
      pauVar9 = pauVar9 + 3;
    } while (param_4 < iVar7);
  }
  iVar5 = (int)param_4;
  if (iVar5 < param_5) {
    auVar2._0_4_ = iVar5 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar2._4_4_ = iVar5 + _UNK_150b50ae4;
    auVar2._8_4_ = iVar5 + _UNK_150b50ae8;
    auVar2._12_4_ = iVar5 + _UNK_150b50aec;
    auVar2._16_4_ = iVar5 + _UNK_150b50af0;
    auVar2._20_4_ = iVar5 + _UNK_150b50af4;
    auVar2._24_4_ = iVar5 + _UNK_150b50af8;
    auVar2._28_4_ = iVar5 + _UNK_150b50afc;
    auVar11._4_4_ = param_5;
    auVar11._0_4_ = param_5;
    auVar11._8_4_ = param_5;
    auVar11._12_4_ = param_5;
    auVar11._16_4_ = param_5;
    auVar11._20_4_ = param_5;
    auVar11._24_4_ = param_5;
    auVar11._28_4_ = param_5;
    auVar20 = vpcmpgtd_avx2(auVar11,auVar2);
    pauVar9 = (undefined1 (*) [32])(param_3 + (longlong)iVar5 * 0xc);
    auVar15 = vpcmpeqd_avx2(auVar11,auVar11);
    auVar15 = auVar15 & ~auVar20;
    if ((((((((SUB321(auVar15 >> 0x1f,0) & 1) == 0 && (SUB321(auVar15 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar15 >> 0x5f,0) & 1) == 0) && SUB321(auVar15 >> 0x7f,0) == '\0') &&
          (SUB321(auVar15 >> 0x9f,0) & 1) == 0) && SUB321(auVar15 >> 0xbf,0) == '\0') &&
        (SUB321(auVar15 >> 0xdf,0) & 1) == 0) && -1 < auVar15[0x1f]) {
      auVar15 = pauVar9[1];
      auVar13 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar15);
      auVar21 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar9);
      auVar13 = vblendps_avx(auVar21,auVar13,0x88);
      auVar21 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar15);
      auVar2 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            pauVar9[2]);
      auVar21 = vblendps_avx(auVar2,auVar21,0x13);
      auVar12._16_16_ = auVar21._0_16_;
      auVar12._0_16_ = auVar13._0_16_;
      auVar13 = vperm2f128_avx(auVar13,auVar21,0x31);
      auVar15 = vblendps_avx(auVar15,*pauVar9,0x24);
      auVar15 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar15);
      auVar16._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar16._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar21 = vpermps_avx2(auVar16,pauVar9[2]);
      auVar15 = vblendps_avx(auVar15,auVar21,0xe0);
    }
    else {
      auVar12 = vgatherdps(ZEXT832(0) << 0x20,auVar20);
      auVar13 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar20);
      auVar15 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar20);
    }
    uVar1 = *param_2;
    auVar17._4_4_ = uVar1;
    auVar17._0_4_ = uVar1;
    auVar17._8_4_ = uVar1;
    auVar17._12_4_ = uVar1;
    auVar17._16_4_ = uVar1;
    auVar17._20_4_ = uVar1;
    auVar17._24_4_ = uVar1;
    auVar17._28_4_ = uVar1;
    auVar21 = vsubps_avx(auVar12,auVar17);
    uVar1 = param_2[1];
    auVar18._4_4_ = uVar1;
    auVar18._0_4_ = uVar1;
    auVar18._8_4_ = uVar1;
    auVar18._12_4_ = uVar1;
    auVar18._16_4_ = uVar1;
    auVar18._20_4_ = uVar1;
    auVar18._24_4_ = uVar1;
    auVar18._28_4_ = uVar1;
    auVar13 = vsubps_avx(auVar13,auVar18);
    uVar1 = param_2[2];
    auVar19._4_4_ = uVar1;
    auVar19._0_4_ = uVar1;
    auVar19._8_4_ = uVar1;
    auVar19._12_4_ = uVar1;
    auVar19._16_4_ = uVar1;
    auVar19._20_4_ = uVar1;
    auVar19._24_4_ = uVar1;
    auVar19._28_4_ = uVar1;
    auVar15 = vsubps_avx(auVar15,auVar19);
    auVar14._0_4_ =
         auVar15._0_4_ * auVar15._0_4_ +
         auVar21._0_4_ * auVar21._0_4_ + auVar13._0_4_ * auVar13._0_4_;
    auVar14._4_4_ =
         auVar15._4_4_ * auVar15._4_4_ +
         auVar21._4_4_ * auVar21._4_4_ + auVar13._4_4_ * auVar13._4_4_;
    auVar14._8_4_ =
         auVar15._8_4_ * auVar15._8_4_ +
         auVar21._8_4_ * auVar21._8_4_ + auVar13._8_4_ * auVar13._8_4_;
    auVar14._12_4_ =
         auVar15._12_4_ * auVar15._12_4_ +
         auVar21._12_4_ * auVar21._12_4_ + auVar13._12_4_ * auVar13._12_4_;
    auVar14._16_4_ =
         auVar15._16_4_ * auVar15._16_4_ +
         auVar21._16_4_ * auVar21._16_4_ + auVar13._16_4_ * auVar13._16_4_;
    auVar14._20_4_ =
         auVar15._20_4_ * auVar15._20_4_ +
         auVar21._20_4_ * auVar21._20_4_ + auVar13._20_4_ * auVar13._20_4_;
    auVar14._24_4_ =
         auVar15._24_4_ * auVar15._24_4_ +
         auVar21._24_4_ * auVar21._24_4_ + auVar13._24_4_ * auVar13._24_4_;
    auVar14._28_4_ =
         auVar15._28_4_ * auVar15._28_4_ +
         auVar21._28_4_ * auVar21._28_4_ + auVar13._28_4_ * auVar13._28_4_;
    auVar15 = vmaxps_avx(auVar10,auVar14);
    auVar10 = vblendvps_avx(auVar10,auVar15,auVar20);
  }
  auVar3 = vmaxps_avx(auVar10._16_16_,auVar10._0_16_);
  auVar4 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vmaxps_avx(auVar4,auVar3);
  auVar4 = vmovshdup_avx(auVar3);
  auVar3 = vmaxss_avx(auVar4,auVar3);
  *param_1 = auVar3._0_4_;
  return;
}


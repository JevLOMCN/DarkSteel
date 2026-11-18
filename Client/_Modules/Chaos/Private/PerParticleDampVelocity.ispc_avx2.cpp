// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// UpdatePositionBasedState___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CuniCuni_avx2 @ 1403716d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdatePositionBasedState___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CuniCuni_avx2
               (float *param_1,float *param_2,undefined4 *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,uint param_8,int param_9,
               undefined1 (*param_10) [32])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  undefined1 (*pauVar28) [32];
  int iVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 (*pauVar32) [32];
  ulonglong uVar33;
  undefined1 auVar34 [16];
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 in_ZMM0 [64];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar53;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [64];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
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
  undefined1 auVar86 [32];
  float fVar87;
  float fVar109;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar107;
  float fVar108;
  undefined1 auVar92 [32];
  undefined1 auVar88 [16];
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
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar112 [16];
  undefined1 auVar121 [32];
  float fVar122;
  undefined1 auVar124 [16];
  float fVar123;
  undefined1 auVar125 [16];
  float fVar142;
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
  float fVar143;
  float fVar144;
  undefined1 auVar141 [64];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  float fVar165;
  float fVar173;
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  float fVar180;
  float fVar184;
  float fVar185;
  undefined1 auVar181 [16];
  float fVar186;
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  float fVar187;
  undefined1 auVar188 [16];
  float fVar198;
  float fVar199;
  float fVar201;
  float fVar202;
  float fVar203;
  undefined1 auVar189 [32];
  float fVar200;
  float fVar204;
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  float fVar205;
  float fVar213;
  float fVar214;
  float fVar215;
  float fVar216;
  float fVar217;
  float fVar218;
  float fVar219;
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  undefined1 auVar209 [32];
  undefined1 auVar210 [32];
  undefined1 auVar211 [32];
  undefined1 auVar212 [32];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar224 [32];
  undefined1 auVar225 [16];
  undefined1 auVar226 [32];
  undefined1 auVar227 [16];
  undefined1 auVar228 [32];
  undefined1 auVar229 [32];
  undefined1 auVar230 [32];
  undefined1 auVar231 [32];
  undefined1 auVar232 [32];
  undefined1 auVar233 [32];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [32];
  undefined1 auVar237 [32];
  undefined1 auVar238 [32];
  undefined1 auVar239 [32];
  float local_880;
  float local_870;
  undefined1 local_840 [32];
  undefined1 local_740 [8];
  float fStack_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float fStack_728;
  float fStack_724;
  undefined1 local_720 [8];
  float fStack_718;
  float fStack_714;
  float fStack_710;
  float fStack_70c;
  float fStack_708;
  float fStack_704;
  undefined1 local_700 [8];
  float fStack_6f8;
  float fStack_6f4;
  float fStack_6f0;
  float fStack_6ec;
  float fStack_6e8;
  float fStack_6e4;
  undefined1 local_6e0 [8];
  float fStack_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float fStack_6c8;
  float fStack_6c4;
  undefined1 local_6c0 [8];
  float fStack_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  undefined1 local_6a0 [8];
  float fStack_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float fStack_688;
  float fStack_684;
  undefined1 local_680 [8];
  float fStack_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float fStack_668;
  float fStack_664;
  undefined1 local_660 [8];
  float fStack_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float fStack_648;
  float fStack_644;
  undefined1 local_640 [8];
  float fStack_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float fStack_628;
  float fStack_624;
  undefined1 local_620 [8];
  float fStack_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float fStack_608;
  float fStack_604;
  undefined1 local_600 [8];
  float fStack_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float fStack_5e8;
  float fStack_5e4;
  undefined1 local_5e0 [8];
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  undefined1 local_5c0 [8];
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  undefined1 local_5a0 [8];
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  undefined1 local_580 [8];
  float fStack_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  undefined1 local_560 [8];
  float fStack_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  undefined1 local_540 [8];
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  undefined1 local_520 [8];
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  undefined1 local_500 [8];
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  undefined1 local_4e0 [8];
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  undefined1 local_4c0 [8];
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  undefined1 local_4a0 [32];
  undefined1 local_480 [8];
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  undefined1 local_460 [8];
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  undefined1 local_440 [8];
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  undefined1 local_420 [32];
  undefined1 local_400 [8];
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  undefined1 local_3e0 [8];
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  undefined1 local_3c0 [8];
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  undefined1 local_3a0 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [8];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined1 local_2e0 [8];
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  undefined1 local_2c0 [8];
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  undefined1 local_2a0 [32];
  undefined1 local_280 [8];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
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
  undefined1 local_1c0 [8];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar65 [32];
  
  auVar59 = *param_10;
  auVar196 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  uVar22 = param_9 - param_8;
  uVar26 = uVar22 + 7;
  if (-1 < (int)uVar22) {
    uVar26 = uVar22;
  }
  iVar27 = ((uVar26 & 0xfffffff8) - uVar22) + param_9;
  auVar196 = auVar196 & ~auVar59;
  if ((((((((SUB321(auVar196 >> 0x1f,0) & 1) == 0 && (SUB321(auVar196 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar196 >> 0x5f,0) & 1) == 0) && SUB321(auVar196 >> 0x7f,0) == '\0') &&
        (SUB321(auVar196 >> 0x9f,0) & 1) == 0) && SUB321(auVar196 >> 0xbf,0) == '\0') &&
      (SUB321(auVar196 >> 0xdf,0) & 1) == 0) && -1 < auVar196[0x1f]) {
    auVar88._0_12_ = ZEXT812(0);
    auVar88._12_4_ = 0;
    auVar141 = ZEXT1664(auVar88);
    auVar59 = ZEXT1632(auVar88);
    _local_540 = ZEXT1632(auVar88);
    _local_5c0 = ZEXT1632(auVar88);
    uVar33 = (ulonglong)param_8;
    _local_5a0 = _local_5c0;
    _local_580 = _local_5c0;
    _local_560 = _local_5c0;
    _local_520 = _local_540;
    if ((int)param_8 < iVar27) {
      uVar33 = (ulonglong)(int)param_8;
      pauVar28 = (undefined1 (*) [32])(param_5 + uVar33 * 0xc);
      pauVar32 = (undefined1 (*) [32])(uVar33 * 0xc + param_4);
      iVar29 = param_8 * 4;
      auVar71 = ZEXT864(0) << 0x20;
      do {
        auVar59 = *(undefined1 (*) [32])(param_7 + iVar29);
        auVar196 = vcmpps_avx(auVar59,auVar71._0_32_,8);
        iVar23 = vmovmskps_avx(auVar196);
        if ((iVar23 != 0xff) && ((char)iVar23 != -1)) {
          auVar59 = vcmpps_avx(auVar59,auVar71._0_32_,0xc);
          auVar88 = vpackssdw_avx(auVar59._0_16_,auVar59._16_16_);
          auVar59 = vpmovsxwd_avx2(auVar88);
          if ((char)iVar23 == '\0') {
            auVar193 = pauVar32[1];
            auVar114 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                    ,auVar193);
            auVar222 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,*pauVar32);
            auVar114 = vblendps_avx(auVar222,auVar114,0x88);
            auVar222 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar193);
            auVar48 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,pauVar32[2]);
            auVar222 = vblendps_avx(auVar48,auVar222,0x13);
            auVar158._16_16_ = auVar222._0_16_;
            auVar158._0_16_ = auVar114._0_16_;
            auVar222 = vperm2f128_avx(auVar114,auVar222,0x31);
            auVar193 = vblendps_avx(auVar193,*pauVar32,0x24);
            auVar193 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar193);
            auVar114 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar32[2]);
            auVar193 = vblendps_avx(auVar193,auVar114,0xe0);
            auVar114 = pauVar28[1];
            auVar48 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                   ,auVar114);
            auVar43 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                   ,*pauVar28);
            auVar48 = vblendps_avx(auVar43,auVar48,0x88);
            auVar43 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                   ,auVar114);
            auVar161 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                    ,pauVar28[2]);
            auVar161 = vblendps_avx(auVar161,auVar43,0x13);
            auVar43._16_16_ = auVar161._0_16_;
            auVar43._0_16_ = auVar48._0_16_;
            auVar48 = vperm2f128_avx(auVar48,auVar161,0x31);
            auVar114 = vblendps_avx(auVar114,*pauVar28,0x24);
            auVar114 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar114);
            auVar71 = ZEXT864(0) << 0x20;
            auVar161 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar28[2]);
            auVar114 = vblendps_avx(auVar114,auVar161,0xe0);
          }
          else {
            auVar158 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar59);
            auVar222 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar59);
            auVar193 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar59);
            auVar43 = vgatherdps(ZEXT832(0),auVar59);
            auVar48 = vgatherdps(ZEXT832(0),auVar59);
            auVar114 = vgatherdps(ZEXT832(0),auVar59);
          }
          auVar161 = vmaskmovps_avx(auVar59,*(undefined1 (*) [32])(param_6 + iVar29));
          fVar122 = auVar161._0_4_;
          auVar93._0_4_ = fVar122 * auVar158._0_4_ + (float)local_560._0_4_;
          fVar53 = auVar161._4_4_;
          auVar93._4_4_ = fVar53 * auVar158._4_4_ + (float)local_560._4_4_;
          fVar87 = auVar161._8_4_;
          auVar93._8_4_ = fVar87 * auVar158._8_4_ + fStack_558;
          fVar142 = auVar161._12_4_;
          auVar93._12_4_ = fVar142 * auVar158._12_4_ + fStack_554;
          fVar143 = auVar161._16_4_;
          auVar93._16_4_ = fVar143 * auVar158._16_4_ + fStack_550;
          fVar144 = auVar161._20_4_;
          auVar93._20_4_ = fVar144 * auVar158._20_4_ + fStack_54c;
          fVar123 = auVar161._24_4_;
          auVar93._24_4_ = fVar123 * auVar158._24_4_ + fStack_548;
          fVar107 = auVar161._28_4_;
          auVar93._28_4_ = fVar107 * auVar158._28_4_ + fStack_544;
          auVar230._0_4_ = fVar122 * auVar222._0_4_ + (float)local_540._0_4_;
          auVar230._4_4_ = fVar53 * auVar222._4_4_ + (float)local_540._4_4_;
          auVar230._8_4_ = fVar87 * auVar222._8_4_ + fStack_538;
          auVar230._12_4_ = fVar142 * auVar222._12_4_ + fStack_534;
          auVar230._16_4_ = fVar143 * auVar222._16_4_ + fStack_530;
          auVar230._20_4_ = fVar144 * auVar222._20_4_ + fStack_52c;
          auVar230._24_4_ = fVar123 * auVar222._24_4_ + fStack_528;
          auVar230._28_4_ = fVar107 * auVar222._28_4_ + fStack_524;
          auVar237._0_4_ = fVar122 * auVar193._0_4_ + (float)local_520._0_4_;
          auVar237._4_4_ = fVar53 * auVar193._4_4_ + (float)local_520._4_4_;
          auVar237._8_4_ = fVar87 * auVar193._8_4_ + fStack_518;
          auVar237._12_4_ = fVar142 * auVar193._12_4_ + fStack_514;
          auVar237._16_4_ = fVar143 * auVar193._16_4_ + fStack_510;
          auVar237._20_4_ = fVar144 * auVar193._20_4_ + fStack_50c;
          auVar237._24_4_ = fVar123 * auVar193._24_4_ + fStack_508;
          auVar237._28_4_ = fVar107 * auVar193._28_4_ + fStack_504;
          _local_560 = vmaskmovps_avx(auVar59,auVar93);
          _local_540 = vmaskmovps_avx(auVar59,auVar230);
          _local_520 = vmaskmovps_avx(auVar59,auVar237);
          auVar193._0_4_ = fVar122 * auVar43._0_4_ + (float)local_5c0._0_4_;
          auVar193._4_4_ = fVar53 * auVar43._4_4_ + (float)local_5c0._4_4_;
          auVar193._8_4_ = fVar87 * auVar43._8_4_ + fStack_5b8;
          auVar193._12_4_ = fVar142 * auVar43._12_4_ + fStack_5b4;
          auVar193._16_4_ = fVar143 * auVar43._16_4_ + fStack_5b0;
          auVar193._20_4_ = fVar144 * auVar43._20_4_ + fStack_5ac;
          auVar193._24_4_ = fVar123 * auVar43._24_4_ + fStack_5a8;
          auVar193._28_4_ = fVar107 * auVar43._28_4_ + fStack_5a4;
          auVar222._0_4_ = fVar122 * auVar48._0_4_ + (float)local_5a0._0_4_;
          auVar222._4_4_ = fVar53 * auVar48._4_4_ + (float)local_5a0._4_4_;
          auVar222._8_4_ = fVar87 * auVar48._8_4_ + fStack_598;
          auVar222._12_4_ = fVar142 * auVar48._12_4_ + fStack_594;
          auVar222._16_4_ = fVar143 * auVar48._16_4_ + fStack_590;
          auVar222._20_4_ = fVar144 * auVar48._20_4_ + fStack_58c;
          auVar222._24_4_ = fVar123 * auVar48._24_4_ + fStack_588;
          auVar222._28_4_ = fVar107 * auVar48._28_4_ + fStack_584;
          auVar48._0_4_ = fVar122 * auVar114._0_4_ + (float)local_580._0_4_;
          auVar48._4_4_ = fVar53 * auVar114._4_4_ + (float)local_580._4_4_;
          auVar48._8_4_ = fVar87 * auVar114._8_4_ + fStack_578;
          auVar48._12_4_ = fVar142 * auVar114._12_4_ + fStack_574;
          auVar48._16_4_ = fVar143 * auVar114._16_4_ + fStack_570;
          auVar48._20_4_ = fVar144 * auVar114._20_4_ + fStack_56c;
          auVar48._24_4_ = fVar123 * auVar114._24_4_ + fStack_568;
          auVar48._28_4_ = fVar107 * auVar114._28_4_ + fStack_564;
          _local_5c0 = vmaskmovps_avx(auVar59,auVar193);
          _local_5a0 = vmaskmovps_avx(auVar59,auVar222);
          _local_580 = vmaskmovps_avx(auVar59,auVar48);
          auVar59._4_4_ = __real_80000000;
          auVar59._0_4_ = __real_80000000;
          auVar59._8_4_ = __real_80000000;
          auVar59._12_4_ = __real_80000000;
          auVar59._16_4_ = __real_80000000;
          auVar59._20_4_ = __real_80000000;
          auVar59._24_4_ = __real_80000000;
          auVar59._28_4_ = __real_80000000;
          auVar59 = vblendvps_avx(auVar161,auVar59,auVar196);
          auVar141 = ZEXT3264(CONCAT428(auVar141._28_4_ + auVar59._28_4_,
                                        CONCAT424(auVar141._24_4_ + auVar59._24_4_,
                                                  CONCAT420(auVar141._20_4_ + auVar59._20_4_,
                                                            CONCAT416(auVar141._16_4_ +
                                                                      auVar59._16_4_,
                                                                      CONCAT412(auVar141._12_4_ +
                                                                                auVar59._12_4_,
                                                                                CONCAT48(auVar141.
                                                  _8_4_ + auVar59._8_4_,
                                                  CONCAT44(auVar141._4_4_ + auVar59._4_4_,
                                                           auVar141._0_4_ + auVar59._0_4_))))))));
        }
        auVar59 = auVar141._0_32_;
        uVar33 = uVar33 + 8;
        pauVar28 = pauVar28 + 3;
        pauVar32 = pauVar32 + 3;
        iVar29 = iVar29 + 0x20;
      } while ((longlong)uVar33 < (longlong)iVar27);
    }
    iVar29 = (int)uVar33;
    auVar196 = auVar59;
    if (iVar29 < param_9) {
      auVar114._0_4_ =
           iVar29 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar114._4_4_ = iVar29 + _UNK_150b50ae4;
      auVar114._8_4_ = iVar29 + _UNK_150b50ae8;
      auVar114._12_4_ = iVar29 + _UNK_150b50aec;
      auVar114._16_4_ = iVar29 + _UNK_150b50af0;
      auVar114._20_4_ = iVar29 + _UNK_150b50af4;
      auVar114._24_4_ = iVar29 + _UNK_150b50af8;
      auVar114._28_4_ = iVar29 + _UNK_150b50afc;
      auVar161._4_4_ = param_9;
      auVar161._0_4_ = param_9;
      auVar161._8_4_ = param_9;
      auVar161._12_4_ = param_9;
      auVar161._16_4_ = param_9;
      auVar161._20_4_ = param_9;
      auVar161._24_4_ = param_9;
      auVar161._28_4_ = param_9;
      auVar222 = vpcmpgtd_avx2(auVar161,auVar114);
      auVar114 = vmaskmovps_avx(auVar222,*(undefined1 (*) [32])(param_7 + iVar29 * 4));
      auVar193 = vcmpps_avx(auVar114,ZEXT1232(ZEXT812(0)),0xc);
      auVar193 = auVar193 & auVar222;
      if ((((((((SUB321(auVar193 >> 0x1f,0) & 1) != 0 || (SUB321(auVar193 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar193 >> 0x5f,0) & 1) != 0) || SUB321(auVar193 >> 0x7f,0) != '\0') ||
            (SUB321(auVar193 >> 0x9f,0) & 1) != 0) || SUB321(auVar193 >> 0xbf,0) != '\0') ||
          (SUB321(auVar193 >> 0xdf,0) & 1) != 0) || auVar193[0x1f] < '\0') {
        auVar193 = vcmpps_avx(auVar114,ZEXT1232(ZEXT812(0)),8);
        auVar55._0_4_ = auVar193._0_4_ & auVar222._0_4_;
        auVar55._4_4_ = auVar193._4_4_ & auVar222._4_4_;
        auVar55._8_4_ = auVar193._8_4_ & auVar222._8_4_;
        auVar55._12_4_ = auVar193._12_4_ & auVar222._12_4_;
        auVar62._16_4_ = auVar193._16_4_ & auVar222._16_4_;
        auVar62._0_16_ = auVar55;
        auVar62._20_4_ = auVar193._20_4_ & auVar222._20_4_;
        auVar62._24_4_ = auVar193._24_4_ & auVar222._24_4_;
        auVar62._28_4_ = auVar193._28_4_ & auVar222._28_4_;
        uVar24 = vmovmskps_avx(auVar62);
        uVar31 = vmovmskps_avx(auVar222);
        if ((char)uVar24 != (char)uVar31) {
          auVar55 = vpackssdw_avx(auVar55,auVar62._16_16_);
          auVar88 = vpackssdw_avx(auVar222._0_16_,auVar222._16_16_);
          auVar55 = auVar55 ^ auVar88;
          lVar25 = (longlong)iVar29;
          pauVar28 = (undefined1 (*) [32])(param_4 + lVar25 * 0xc);
          auVar88 = vpacksswb_avx(auVar55,auVar55);
          auVar196 = vpmovsxwd_avx2(auVar55);
          if ((byte)(SUB161(auVar88 >> 7,0) & 1 | (SUB161(auVar88 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar88 >> 0x17,0) & 1) << 2 | (SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar88 >> 0x27,0) & 1) << 4 | (SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar88 >> 0x37,0) & 1) << 6 | SUB161(auVar88 >> 0x3f,0) << 7) == 0xff)
          {
            auVar193 = pauVar28[1];
            auVar114 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                    ,auVar193);
            auVar222 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,*pauVar28);
            auVar114 = vblendps_avx(auVar222,auVar114,0x88);
            auVar222 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar193);
            auVar48 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,pauVar28[2]);
            auVar222 = vblendps_avx(auVar48,auVar222,0x13);
            auVar63._16_16_ = auVar222._0_16_;
            auVar63._0_16_ = auVar114._0_16_;
            auVar161 = vperm2f128_avx(auVar114,auVar222,0x31);
            auVar193 = vblendps_avx(auVar193,*pauVar28,0x24);
            auVar193 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar193);
            auVar114 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar28[2]);
            auVar48 = vblendps_avx(auVar193,auVar114,0xe0);
            auVar193 = *(undefined1 (*) [32])(param_5 + lVar25 * 0xc);
            auVar114 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar25 * 0xc);
            auVar222 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar25 * 0xc);
            auVar43 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                   ,auVar114);
            auVar158 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,auVar193);
            auVar43 = vblendps_avx(auVar158,auVar43,0x88);
            auVar158 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar114);
            auVar93 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,auVar222);
            auVar158 = vblendps_avx(auVar93,auVar158,0x13);
            auVar148._16_16_ = auVar158._0_16_;
            auVar148._0_16_ = auVar43._0_16_;
            auVar43 = vperm2f128_avx(auVar43,auVar158,0x31);
            auVar193 = vblendps_avx(auVar114,auVar193,0x24);
            auVar193 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar193);
            auVar114 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,auVar222);
            auVar193 = vblendps_avx(auVar193,auVar114,0xe0);
          }
          else {
            auVar63 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar196);
            auVar161 = vgatherdps(ZEXT832(0),auVar196);
            auVar48 = vgatherdps(ZEXT832(0),auVar196);
            auVar148 = vgatherdps(ZEXT832(0),auVar196);
            auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar193 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
          }
          auVar114 = vmaskmovps_avx(auVar196,*(undefined1 (*) [32])(param_6 + iVar29 * 4));
          fVar122 = auVar114._0_4_;
          auVar66._0_4_ = fVar122 * auVar63._0_4_ + (float)local_560._0_4_;
          fVar53 = auVar114._4_4_;
          auVar66._4_4_ = fVar53 * auVar63._4_4_ + (float)local_560._4_4_;
          fVar87 = auVar114._8_4_;
          auVar66._8_4_ = fVar87 * auVar63._8_4_ + fStack_558;
          fVar142 = auVar114._12_4_;
          auVar66._12_4_ = fVar142 * auVar63._12_4_ + fStack_554;
          fVar143 = auVar114._16_4_;
          auVar66._16_4_ = fVar143 * auVar63._16_4_ + fStack_550;
          fVar144 = auVar114._20_4_;
          auVar66._20_4_ = fVar144 * auVar63._20_4_ + fStack_54c;
          fVar123 = auVar114._24_4_;
          auVar66._24_4_ = fVar123 * auVar63._24_4_ + fStack_548;
          fVar107 = auVar114._28_4_;
          auVar66._28_4_ = fVar107 * auVar63._28_4_ + fStack_544;
          auVar82._0_4_ = fVar122 * auVar161._0_4_ + (float)local_540._0_4_;
          auVar82._4_4_ = fVar53 * auVar161._4_4_ + (float)local_540._4_4_;
          auVar82._8_4_ = fVar87 * auVar161._8_4_ + fStack_538;
          auVar82._12_4_ = fVar142 * auVar161._12_4_ + fStack_534;
          auVar82._16_4_ = fVar143 * auVar161._16_4_ + fStack_530;
          auVar82._20_4_ = fVar144 * auVar161._20_4_ + fStack_52c;
          auVar82._24_4_ = fVar123 * auVar161._24_4_ + fStack_528;
          auVar82._28_4_ = fVar107 * auVar161._28_4_ + fStack_524;
          auVar120._0_4_ = fVar122 * auVar48._0_4_ + (float)local_520._0_4_;
          auVar120._4_4_ = fVar53 * auVar48._4_4_ + (float)local_520._4_4_;
          auVar120._8_4_ = fVar87 * auVar48._8_4_ + fStack_518;
          auVar120._12_4_ = fVar142 * auVar48._12_4_ + fStack_514;
          auVar120._16_4_ = fVar143 * auVar48._16_4_ + fStack_510;
          auVar120._20_4_ = fVar144 * auVar48._20_4_ + fStack_50c;
          auVar120._24_4_ = fVar123 * auVar48._24_4_ + fStack_508;
          auVar120._28_4_ = fVar107 * auVar48._28_4_ + fStack_504;
          _local_560 = vmaskmovps_avx(auVar196,auVar66);
          _local_540 = vmaskmovps_avx(auVar196,auVar82);
          _local_520 = vmaskmovps_avx(auVar196,auVar120);
          auVar152._0_4_ = fVar122 * auVar148._0_4_ + (float)local_5c0._0_4_;
          auVar152._4_4_ = fVar53 * auVar148._4_4_ + (float)local_5c0._4_4_;
          auVar152._8_4_ = fVar87 * auVar148._8_4_ + fStack_5b8;
          auVar152._12_4_ = fVar142 * auVar148._12_4_ + fStack_5b4;
          auVar152._16_4_ = fVar143 * auVar148._16_4_ + fStack_5b0;
          auVar152._20_4_ = fVar144 * auVar148._20_4_ + fStack_5ac;
          auVar152._24_4_ = fVar123 * auVar148._24_4_ + fStack_5a8;
          auVar152._28_4_ = fVar107 * auVar148._28_4_ + fStack_5a4;
          auVar163._0_4_ = fVar122 * auVar43._0_4_ + (float)local_5a0._0_4_;
          auVar163._4_4_ = fVar53 * auVar43._4_4_ + (float)local_5a0._4_4_;
          auVar163._8_4_ = fVar87 * auVar43._8_4_ + fStack_598;
          auVar163._12_4_ = fVar142 * auVar43._12_4_ + fStack_594;
          auVar163._16_4_ = fVar143 * auVar43._16_4_ + fStack_590;
          auVar163._20_4_ = fVar144 * auVar43._20_4_ + fStack_58c;
          auVar163._24_4_ = fVar123 * auVar43._24_4_ + fStack_588;
          auVar163._28_4_ = fVar107 * auVar43._28_4_ + fStack_584;
          auVar135._0_4_ = fVar122 * auVar193._0_4_ + (float)local_580._0_4_;
          auVar135._4_4_ = fVar53 * auVar193._4_4_ + (float)local_580._4_4_;
          auVar135._8_4_ = fVar87 * auVar193._8_4_ + fStack_578;
          auVar135._12_4_ = fVar142 * auVar193._12_4_ + fStack_574;
          auVar135._16_4_ = fVar143 * auVar193._16_4_ + fStack_570;
          auVar135._20_4_ = fVar144 * auVar193._20_4_ + fStack_56c;
          auVar135._24_4_ = fVar123 * auVar193._24_4_ + fStack_568;
          auVar135._28_4_ = fVar107 * auVar193._28_4_ + fStack_564;
          _local_5c0 = vmaskmovps_avx(auVar196,auVar152);
          _local_5a0 = vmaskmovps_avx(auVar196,auVar163);
          _local_580 = vmaskmovps_avx(auVar196,auVar135);
          auVar67._4_4_ = __real_80000000;
          auVar67._0_4_ = __real_80000000;
          auVar67._8_4_ = __real_80000000;
          auVar67._12_4_ = __real_80000000;
          auVar67._16_4_ = __real_80000000;
          auVar67._20_4_ = __real_80000000;
          auVar67._24_4_ = __real_80000000;
          auVar67._28_4_ = __real_80000000;
          auVar193 = vblendvps_avx(auVar67,auVar114,auVar196);
          auVar196._0_4_ = auVar59._0_4_ + auVar193._0_4_;
          auVar196._4_4_ = auVar59._4_4_ + auVar193._4_4_;
          auVar196._8_4_ = auVar59._8_4_ + auVar193._8_4_;
          auVar196._12_4_ = auVar59._12_4_ + auVar193._12_4_;
          auVar196._16_4_ = auVar59._16_4_ + auVar193._16_4_;
          auVar196._20_4_ = auVar59._20_4_ + auVar193._20_4_;
          auVar196._24_4_ = auVar59._24_4_ + auVar193._24_4_;
          auVar196._28_4_ = auVar59._28_4_ + auVar193._28_4_;
        }
      }
    }
    auVar59 = vhaddps_avx(_local_560,_local_560);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    fVar122 = auVar59._0_4_ + auVar59._16_4_;
    auVar141 = ZEXT464((uint)fVar122);
    auVar59 = vhaddps_avx(_local_540,_local_540);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    local_880 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(_local_520,_local_520);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    *param_1 = fVar122;
    param_1[1] = local_880;
    local_870 = auVar59._0_4_ + auVar59._16_4_;
    param_1[2] = local_870;
    auVar59 = vhaddps_avx(_local_5c0,_local_5c0);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar193 = vhaddps_avx(_local_5a0,_local_5a0);
    fVar53 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(auVar193,auVar193);
    auVar193 = vhaddps_avx(_local_580,_local_580);
    fVar87 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(auVar193,auVar193);
    fVar142 = auVar59._0_4_ + auVar59._16_4_;
    *param_2 = fVar53;
    param_2[1] = fVar87;
    param_2[2] = fVar142;
    auVar59 = vhaddps_avx(auVar196,auVar196);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    fVar143 = auVar59._0_4_ + auVar59._16_4_;
    if ((fVar143 != 0.0) || (NAN(fVar143))) {
      auVar88 = vinsertps_avx(ZEXT416((uint)fVar122),ZEXT416((uint)local_880),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)local_870),0x20);
      auVar90._4_4_ = fVar143;
      auVar90._0_4_ = fVar143;
      auVar90._8_4_ = fVar143;
      auVar90._12_4_ = fVar143;
      auVar88 = vdivps_avx(auVar88,auVar90);
      auVar141 = ZEXT1664(auVar88);
      auVar55 = vmovshdup_avx(auVar88);
      *param_1 = auVar88._0_4_;
      local_880 = auVar55._0_4_;
      param_1[1] = local_880;
      auVar88 = vshufpd_avx(auVar88,auVar88,1);
      local_870 = auVar88._0_4_;
      param_1[2] = local_870;
      auVar88 = vinsertps_avx(ZEXT416((uint)fVar53),ZEXT416((uint)fVar87),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar142),0x20);
      auVar88 = vdivps_avx(auVar88,auVar90);
      *param_2 = auVar88._0_4_;
      fVar122 = (float)vextractps_avx(auVar88,1);
      param_2[1] = fVar122;
      fVar122 = (float)vextractps_avx(auVar88,2);
      param_2[2] = fVar122;
    }
    uVar24 = auVar141._0_4_;
    auVar112._0_12_ = ZEXT812(0);
    auVar112._12_4_ = 0;
    _local_600 = ZEXT1632(auVar112);
    _local_620 = ZEXT1632(auVar112);
    local_2a0 = ZEXT1632(auVar112);
    auVar59 = ZEXT1632(auVar112);
    auVar98._4_4_ = __real_3f800000;
    auVar98._0_4_ = __real_3f800000;
    auVar98._8_4_ = __real_3f800000;
    auVar98._12_4_ = __real_3f800000;
    auVar98._16_4_ = __real_3f800000;
    auVar98._20_4_ = __real_3f800000;
    auVar98._24_4_ = __real_3f800000;
    auVar98._28_4_ = __real_3f800000;
    _local_5e0 = _local_600;
    _local_300 = _local_620;
    _local_2e0 = _local_620;
    _local_2c0 = _local_620;
    _local_280 = local_2a0;
    _local_260 = local_2a0;
    _local_240 = local_2a0;
    local_220 = local_2a0;
    _local_200 = local_2a0;
    _local_1e0 = local_2a0;
    _local_1c0 = local_2a0;
    local_1a0 = auVar59;
    local_180 = auVar59;
    local_160 = auVar59;
    local_140 = auVar59;
    local_120 = auVar98;
    if ((int)param_8 < iVar27) {
      lVar25 = (longlong)(int)param_8;
      pauVar28 = (undefined1 (*) [32])(param_5 + lVar25 * 0xc);
      pauVar32 = (undefined1 (*) [32])(lVar25 * 0xc + param_4);
      iVar29 = param_8 << 2;
      do {
        auVar196 = *(undefined1 (*) [32])(param_7 + iVar29);
        auVar193 = vcmpps_avx(auVar196,auVar59,8);
        iVar23 = vmovmskps_avx(auVar193);
        if ((iVar23 != 0xff) && ((char)iVar23 != -1)) {
          auVar196 = vcmpps_avx(auVar196,auVar59,0xc);
          auVar88 = vpackssdw_avx(auVar196._0_16_,auVar196._16_16_);
          auVar196 = vpmovsxwd_avx2(auVar88);
          if ((char)iVar23 == '\0') {
            auVar193 = pauVar32[1];
            auVar114 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                    ,auVar193);
            auVar222 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,*pauVar32);
            auVar114 = vblendps_avx(auVar222,auVar114,0x88);
            auVar222 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar193);
            auVar48 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,pauVar32[2]);
            auVar222 = vblendps_avx(auVar48,auVar222,0x13);
            auVar238._16_16_ = auVar222._0_16_;
            auVar238._0_16_ = auVar114._0_16_;
            auVar222 = vperm2f128_avx(auVar114,auVar222,0x31);
            auVar193 = vblendps_avx(auVar193,*pauVar32,0x24);
            auVar193 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar193);
            auVar114 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar32[2]);
            auVar193 = vblendps_avx(auVar193,auVar114,0xe0);
            auVar114 = pauVar28[1];
            auVar48 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                   ,auVar114);
            auVar43 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                   ,*pauVar28);
            auVar48 = vblendps_avx(auVar43,auVar48,0x88);
            auVar43 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                   ,auVar114);
            auVar158 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                    ,pauVar28[2]);
            auVar141 = ZEXT1664(auVar141._0_16_);
            auVar43 = vblendps_avx(auVar158,auVar43,0x13);
            auVar169._16_16_ = auVar43._0_16_;
            auVar169._0_16_ = auVar48._0_16_;
            auVar48 = vperm2f128_avx(auVar48,auVar43,0x31);
            auVar114 = vblendps_avx(auVar114,*pauVar28,0x24);
            auVar114 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar114);
            auVar43 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                   ,pauVar28[2]);
            auVar114 = vblendps_avx(auVar114,auVar43,0xe0);
          }
          else {
            auVar238 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar222 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar196);
            auVar193 = vgatherdps(ZEXT832(0) << 0x20,auVar196);
            auVar169 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar48 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar114 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
          }
          auVar158 = vmaskmovps_avx(auVar196,*(undefined1 (*) [32])(param_6 + iVar29));
          uVar24 = auVar141._0_4_;
          auVar99._4_4_ = uVar24;
          auVar99._0_4_ = uVar24;
          auVar99._8_4_ = uVar24;
          auVar99._12_4_ = uVar24;
          auVar99._16_4_ = uVar24;
          auVar99._20_4_ = uVar24;
          auVar99._24_4_ = uVar24;
          auVar99._28_4_ = uVar24;
          auVar43 = vsubps_avx(auVar238,auVar99);
          auVar100._4_4_ = local_880;
          auVar100._0_4_ = local_880;
          auVar100._8_4_ = local_880;
          auVar100._12_4_ = local_880;
          auVar100._16_4_ = local_880;
          auVar100._20_4_ = local_880;
          auVar100._24_4_ = local_880;
          auVar100._28_4_ = local_880;
          auVar222 = vsubps_avx(auVar222,auVar100);
          auVar101._4_4_ = local_870;
          auVar101._0_4_ = local_870;
          auVar101._8_4_ = local_870;
          auVar101._12_4_ = local_870;
          auVar101._16_4_ = local_870;
          auVar101._20_4_ = local_870;
          auVar101._24_4_ = local_870;
          auVar101._28_4_ = local_870;
          auVar193 = vsubps_avx(auVar193,auVar101);
          fVar122 = auVar158._0_4_;
          fVar165 = auVar169._0_4_ * fVar122;
          fVar143 = auVar158._4_4_;
          fVar173 = auVar169._4_4_ * fVar143;
          fVar1 = auVar158._8_4_;
          fVar174 = auVar169._8_4_ * fVar1;
          fVar180 = auVar158._12_4_;
          fVar175 = auVar169._12_4_ * fVar180;
          fVar3 = auVar158._16_4_;
          fVar176 = auVar169._16_4_ * fVar3;
          fVar7 = auVar158._20_4_;
          fVar177 = auVar169._20_4_ * fVar7;
          fVar11 = auVar158._24_4_;
          fVar178 = auVar169._24_4_ * fVar11;
          fVar15 = auVar158._28_4_;
          fVar179 = auVar169._28_4_ * fVar15;
          fVar187 = auVar48._0_4_ * fVar122;
          fVar198 = auVar48._4_4_ * fVar143;
          fVar199 = auVar48._8_4_ * fVar1;
          fVar200 = auVar48._12_4_ * fVar180;
          fVar201 = auVar48._16_4_ * fVar3;
          fVar202 = auVar48._20_4_ * fVar7;
          fVar203 = auVar48._24_4_ * fVar11;
          fVar204 = auVar48._28_4_ * fVar15;
          fVar205 = auVar114._0_4_ * fVar122;
          fVar213 = auVar114._4_4_ * fVar143;
          fVar214 = auVar114._8_4_ * fVar1;
          fVar215 = auVar114._12_4_ * fVar180;
          fVar216 = auVar114._16_4_ * fVar3;
          fVar217 = auVar114._20_4_ * fVar7;
          fVar218 = auVar114._24_4_ * fVar11;
          fVar219 = auVar114._28_4_ * fVar15;
          fVar53 = auVar222._0_4_;
          fVar144 = auVar222._4_4_;
          fVar2 = auVar222._8_4_;
          fVar184 = auVar222._12_4_;
          fVar4 = auVar222._16_4_;
          fVar8 = auVar222._20_4_;
          fVar12 = auVar222._24_4_;
          fVar16 = auVar222._28_4_;
          fVar87 = auVar193._0_4_;
          fVar123 = auVar193._4_4_;
          fVar108 = auVar193._8_4_;
          fVar185 = auVar193._12_4_;
          fVar5 = auVar193._16_4_;
          fVar9 = auVar193._20_4_;
          fVar13 = auVar193._24_4_;
          fVar17 = auVar193._28_4_;
          fVar142 = auVar43._0_4_;
          fVar107 = auVar43._4_4_;
          fVar109 = auVar43._8_4_;
          fVar186 = auVar43._12_4_;
          fVar6 = auVar43._16_4_;
          fVar10 = auVar43._20_4_;
          fVar14 = auVar43._24_4_;
          fVar18 = auVar43._28_4_;
          auVar153._0_4_ = (fVar53 * fVar205 - fVar187 * fVar87) + (float)local_620._0_4_;
          auVar153._4_4_ = (fVar144 * fVar213 - fVar198 * fVar123) + (float)local_620._4_4_;
          auVar153._8_4_ = (fVar2 * fVar214 - fVar199 * fVar108) + fStack_618;
          auVar153._12_4_ = (fVar184 * fVar215 - fVar200 * fVar185) + fStack_614;
          auVar153._16_4_ = (fVar4 * fVar216 - fVar201 * fVar5) + fStack_610;
          auVar153._20_4_ = (fVar8 * fVar217 - fVar202 * fVar9) + fStack_60c;
          auVar153._24_4_ = (fVar12 * fVar218 - fVar203 * fVar13) + fStack_608;
          auVar153._28_4_ = (fVar16 * fVar219 - fVar204 * fVar17) + fStack_604;
          auVar170._0_4_ = (fVar87 * fVar165 - fVar205 * fVar142) + (float)local_600._0_4_;
          auVar170._4_4_ = (fVar123 * fVar173 - fVar213 * fVar107) + (float)local_600._4_4_;
          auVar170._8_4_ = (fVar108 * fVar174 - fVar214 * fVar109) + fStack_5f8;
          auVar170._12_4_ = (fVar185 * fVar175 - fVar215 * fVar186) + fStack_5f4;
          auVar170._16_4_ = (fVar5 * fVar176 - fVar216 * fVar6) + fStack_5f0;
          auVar170._20_4_ = (fVar9 * fVar177 - fVar217 * fVar10) + fStack_5ec;
          auVar170._24_4_ = (fVar13 * fVar178 - fVar218 * fVar14) + fStack_5e8;
          auVar170._28_4_ = (fVar17 * fVar179 - fVar219 * fVar18) + fStack_5e4;
          auVar182._0_4_ = (fVar142 * fVar187 - fVar165 * fVar53) + (float)local_5e0._0_4_;
          auVar182._4_4_ = (fVar107 * fVar198 - fVar173 * fVar144) + (float)local_5e0._4_4_;
          auVar182._8_4_ = (fVar109 * fVar199 - fVar174 * fVar2) + fStack_5d8;
          auVar182._12_4_ = (fVar186 * fVar200 - fVar175 * fVar184) + fStack_5d4;
          auVar182._16_4_ = (fVar6 * fVar201 - fVar176 * fVar4) + fStack_5d0;
          auVar182._20_4_ = (fVar10 * fVar202 - fVar177 * fVar8) + fStack_5cc;
          auVar182._24_4_ = (fVar14 * fVar203 - fVar178 * fVar12) + fStack_5c8;
          auVar182._28_4_ = (fVar18 * fVar204 - fVar179 * fVar16) + fStack_5c4;
          _local_620 = vmaskmovps_avx(auVar196,auVar153);
          _local_600 = vmaskmovps_avx(auVar196,auVar170);
          _local_5e0 = vmaskmovps_avx(auVar196,auVar182);
          auVar154._0_4_ = fVar87 * 0.0;
          auVar154._4_4_ = fVar123 * 0.0;
          auVar154._8_4_ = fVar108 * 0.0;
          auVar154._12_4_ = fVar185 * 0.0;
          auVar154._16_4_ = fVar5 * 0.0;
          auVar154._20_4_ = fVar9 * 0.0;
          auVar154._24_4_ = fVar13 * 0.0;
          auVar154._28_4_ = fVar17 * 0.0;
          auVar171._0_4_ = fVar53 * 0.0;
          auVar171._4_4_ = fVar144 * 0.0;
          auVar171._8_4_ = fVar2 * 0.0;
          auVar171._12_4_ = fVar184 * 0.0;
          auVar171._16_4_ = fVar4 * 0.0;
          auVar171._20_4_ = fVar8 * 0.0;
          auVar171._24_4_ = fVar12 * 0.0;
          auVar171._28_4_ = fVar16 * 0.0;
          auVar193 = vsubps_avx(auVar154,auVar154);
          auVar102._0_4_ = -(fVar142 * fVar87) + auVar171._0_4_;
          auVar102._4_4_ = -(fVar107 * fVar123) + auVar171._4_4_;
          auVar102._8_4_ = -(fVar109 * fVar108) + auVar171._8_4_;
          auVar102._12_4_ = -(fVar186 * fVar185) + auVar171._12_4_;
          auVar102._16_4_ = -(fVar6 * fVar5) + auVar171._16_4_;
          auVar102._20_4_ = -(fVar10 * fVar9) + auVar171._20_4_;
          auVar102._24_4_ = -(fVar14 * fVar13) + auVar171._24_4_;
          auVar102._28_4_ = -(fVar18 * fVar17) + auVar171._28_4_;
          auVar114 = vsubps_avx(auVar102,auVar171);
          fVar187 = fVar122 * (-(fVar142 * fVar53) + auVar193._0_4_);
          fVar198 = fVar143 * (-(fVar107 * fVar144) + auVar193._4_4_);
          fVar199 = fVar1 * (-(fVar109 * fVar2) + auVar193._8_4_);
          fVar200 = fVar180 * (-(fVar186 * fVar184) + auVar193._12_4_);
          fVar201 = fVar3 * (-(fVar6 * fVar4) + auVar193._16_4_);
          fVar202 = fVar7 * (-(fVar10 * fVar8) + auVar193._20_4_);
          fVar203 = fVar11 * (-(fVar14 * fVar12) + auVar193._24_4_);
          fVar204 = fVar15 * (-(fVar18 * fVar16) + auVar193._28_4_);
          fVar165 = fVar122 * auVar114._0_4_;
          fVar173 = fVar143 * auVar114._4_4_;
          fVar174 = fVar1 * auVar114._8_4_;
          fVar175 = fVar180 * auVar114._12_4_;
          fVar176 = fVar3 * auVar114._16_4_;
          fVar177 = fVar7 * auVar114._20_4_;
          fVar178 = fVar11 * auVar114._24_4_;
          fVar179 = fVar15 * auVar114._28_4_;
          fVar205 = (fVar142 * 0.0 + (-(fVar142 * 0.0) - fVar53 * fVar87)) * fVar122;
          fVar213 = (fVar107 * 0.0 + (-(fVar107 * 0.0) - fVar144 * fVar123)) * fVar143;
          fVar214 = (fVar109 * 0.0 + (-(fVar109 * 0.0) - fVar2 * fVar108)) * fVar1;
          fVar215 = (fVar186 * 0.0 + (-(fVar186 * 0.0) - fVar184 * fVar185)) * fVar180;
          fVar216 = (fVar6 * 0.0 + (-(fVar6 * 0.0) - fVar4 * fVar5)) * fVar3;
          fVar217 = (fVar10 * 0.0 + (-(fVar10 * 0.0) - fVar8 * fVar9)) * fVar7;
          fVar218 = (fVar14 * 0.0 + (-(fVar14 * 0.0) - fVar12 * fVar13)) * fVar11;
          fVar219 = (fVar18 * 0.0 + (-(fVar18 * 0.0) - fVar16 * fVar17)) * fVar15;
          auVar224._0_4_ = fVar122 * (fVar53 * fVar53 + fVar87 * fVar87) + (float)local_300._0_4_;
          auVar224._4_4_ =
               fVar143 * (fVar144 * fVar144 + fVar123 * fVar123) + (float)local_300._4_4_;
          auVar224._8_4_ = fVar1 * (fVar2 * fVar2 + fVar108 * fVar108) + fStack_2f8;
          auVar224._12_4_ = fVar180 * (fVar184 * fVar184 + fVar185 * fVar185) + fStack_2f4;
          auVar224._16_4_ = fVar3 * (fVar4 * fVar4 + fVar5 * fVar5) + fStack_2f0;
          auVar224._20_4_ = fVar7 * (fVar8 * fVar8 + fVar9 * fVar9) + fStack_2ec;
          auVar224._24_4_ = fVar11 * (fVar12 * fVar12 + fVar13 * fVar13) + fStack_2e8;
          auVar224._28_4_ = fVar15 * (fVar16 * fVar16 + fVar17 * fVar17) + fStack_2e4;
          auVar195._0_4_ = fVar187 + (float)local_2e0._0_4_;
          auVar195._4_4_ = fVar198 + (float)local_2e0._4_4_;
          auVar195._8_4_ = fVar199 + fStack_2d8;
          auVar195._12_4_ = fVar200 + fStack_2d4;
          auVar195._16_4_ = fVar201 + fStack_2d0;
          auVar195._20_4_ = fVar202 + fStack_2cc;
          auVar195._24_4_ = fVar203 + fStack_2c8;
          auVar195._28_4_ = fVar204 + fStack_2c4;
          auVar210._0_4_ = fVar165 + (float)local_2c0._0_4_;
          auVar210._4_4_ = fVar173 + (float)local_2c0._4_4_;
          auVar210._8_4_ = fVar174 + fStack_2b8;
          auVar210._12_4_ = fVar175 + fStack_2b4;
          auVar210._16_4_ = fVar176 + fStack_2b0;
          auVar210._20_4_ = fVar177 + fStack_2ac;
          auVar210._24_4_ = fVar178 + fStack_2a8;
          auVar210._28_4_ = fVar179 + fStack_2a4;
          auVar155._0_4_ = fVar187 + (float)local_280._0_4_;
          auVar155._4_4_ = fVar198 + (float)local_280._4_4_;
          auVar155._8_4_ = fVar199 + fStack_278;
          auVar155._12_4_ = fVar200 + fStack_274;
          auVar155._16_4_ = fVar201 + fStack_270;
          auVar155._20_4_ = fVar202 + fStack_26c;
          auVar155._24_4_ = fVar203 + fStack_268;
          auVar155._28_4_ = fVar204 + fStack_264;
          auVar172._0_4_ = fVar122 * (fVar87 * fVar87 + fVar142 * fVar142) + (float)local_260._0_4_;
          auVar172._4_4_ =
               fVar143 * (fVar123 * fVar123 + fVar107 * fVar107) + (float)local_260._4_4_;
          auVar172._8_4_ = fVar1 * (fVar108 * fVar108 + fVar109 * fVar109) + fStack_258;
          auVar172._12_4_ = fVar180 * (fVar185 * fVar185 + fVar186 * fVar186) + fStack_254;
          auVar172._16_4_ = fVar3 * (fVar5 * fVar5 + fVar6 * fVar6) + fStack_250;
          auVar172._20_4_ = fVar7 * (fVar9 * fVar9 + fVar10 * fVar10) + fStack_24c;
          auVar172._24_4_ = fVar11 * (fVar13 * fVar13 + fVar14 * fVar14) + fStack_248;
          auVar172._28_4_ = fVar15 * (fVar17 * fVar17 + fVar18 * fVar18) + fStack_244;
          auVar239._0_4_ = fVar205 + (float)local_240._0_4_;
          auVar239._4_4_ = fVar213 + (float)local_240._4_4_;
          auVar239._8_4_ = fVar214 + fStack_238;
          auVar239._12_4_ = fVar215 + fStack_234;
          auVar239._16_4_ = fVar216 + fStack_230;
          auVar239._20_4_ = fVar217 + fStack_22c;
          auVar239._24_4_ = fVar218 + fStack_228;
          auVar239._28_4_ = fVar219 + fStack_224;
          auVar103._0_4_ = fVar165 + (float)local_200._0_4_;
          auVar103._4_4_ = fVar173 + (float)local_200._4_4_;
          auVar103._8_4_ = fVar174 + fStack_1f8;
          auVar103._12_4_ = fVar175 + fStack_1f4;
          auVar103._16_4_ = fVar176 + fStack_1f0;
          auVar103._20_4_ = fVar177 + fStack_1ec;
          auVar103._24_4_ = fVar178 + fStack_1e8;
          auVar103._28_4_ = fVar179 + fStack_1e4;
          auVar183._0_4_ = fVar205 + (float)local_1e0._0_4_;
          auVar183._4_4_ = fVar213 + (float)local_1e0._4_4_;
          auVar183._8_4_ = fVar214 + fStack_1d8;
          auVar183._12_4_ = fVar215 + fStack_1d4;
          auVar183._16_4_ = fVar216 + fStack_1d0;
          auVar183._20_4_ = fVar217 + fStack_1cc;
          auVar183._24_4_ = fVar218 + fStack_1c8;
          auVar183._28_4_ = fVar219 + fStack_1c4;
          auVar136._0_4_ = fVar122 * (fVar53 * fVar53 + fVar142 * fVar142) + (float)local_1c0._0_4_;
          auVar136._4_4_ =
               fVar143 * (fVar144 * fVar144 + fVar107 * fVar107) + (float)local_1c0._4_4_;
          auVar136._8_4_ = fVar1 * (fVar2 * fVar2 + fVar109 * fVar109) + fStack_1b8;
          auVar136._12_4_ = fVar180 * (fVar184 * fVar184 + fVar186 * fVar186) + fStack_1b4;
          auVar136._16_4_ = fVar3 * (fVar4 * fVar4 + fVar6 * fVar6) + fStack_1b0;
          auVar136._20_4_ = fVar7 * (fVar8 * fVar8 + fVar10 * fVar10) + fStack_1ac;
          auVar136._24_4_ = fVar11 * (fVar12 * fVar12 + fVar14 * fVar14) + fStack_1a8;
          auVar136._28_4_ = fVar15 * (fVar16 * fVar16 + fVar18 * fVar18) + fStack_1a4;
          _local_300 = vmaskmovps_avx(auVar196,auVar224);
          _local_2e0 = vmaskmovps_avx(auVar196,auVar195);
          _local_2c0 = vmaskmovps_avx(auVar196,auVar210);
          local_2a0 = vmaskmovps_avx(auVar196,auVar59);
          _local_280 = vmaskmovps_avx(auVar196,auVar155);
          _local_260 = vmaskmovps_avx(auVar196,auVar172);
          _local_240 = vmaskmovps_avx(auVar196,auVar239);
          local_220 = vmaskmovps_avx(auVar196,auVar59);
          _local_200 = vmaskmovps_avx(auVar196,auVar103);
          _local_1e0 = vmaskmovps_avx(auVar196,auVar183);
          _local_1c0 = vmaskmovps_avx(auVar196,auVar136);
          local_1a0 = vmaskmovps_avx(auVar196,auVar59);
          local_180 = vmaskmovps_avx(auVar196,auVar59);
          local_160 = vmaskmovps_avx(auVar196,auVar59);
          local_140 = vmaskmovps_avx(auVar196,auVar59);
          local_120 = vmaskmovps_avx(auVar196,auVar98);
        }
        uVar24 = auVar141._0_4_;
        lVar25 = lVar25 + 8;
        pauVar28 = pauVar28 + 3;
        pauVar32 = pauVar32 + 3;
        iVar29 = iVar29 + 0x20;
      } while (lVar25 < iVar27);
      param_8 = (uint)lVar25;
    }
    if ((int)param_8 < param_9) {
      auVar21._0_4_ =
           param_8 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar21._4_4_ = param_8 + _UNK_150b50ae4;
      auVar21._8_4_ = param_8 + _UNK_150b50ae8;
      auVar21._12_4_ = param_8 + _UNK_150b50aec;
      auVar21._16_4_ = param_8 + _UNK_150b50af0;
      auVar21._20_4_ = param_8 + _UNK_150b50af4;
      auVar21._24_4_ = param_8 + _UNK_150b50af8;
      auVar21._28_4_ = param_8 + _UNK_150b50afc;
      auVar121._4_4_ = param_9;
      auVar121._0_4_ = param_9;
      auVar121._8_4_ = param_9;
      auVar121._12_4_ = param_9;
      auVar121._16_4_ = param_9;
      auVar121._20_4_ = param_9;
      auVar121._24_4_ = param_9;
      auVar121._28_4_ = param_9;
      auVar193 = vpcmpgtd_avx2(auVar121,auVar21);
      auVar196 = vmaskmovps_avx(auVar193,*(undefined1 (*) [32])(param_7 + (int)(param_8 * 4)));
      auVar35._0_12_ = ZEXT812(0);
      auVar35._12_4_ = 0;
      auVar59 = vcmpps_avx(auVar196,ZEXT1632(auVar35),0xc);
      auVar59 = auVar59 & auVar193;
      if ((((((((SUB321(auVar59 >> 0x1f,0) & 1) != 0 || (SUB321(auVar59 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar59 >> 0x5f,0) & 1) != 0) || SUB321(auVar59 >> 0x7f,0) != '\0') ||
            (SUB321(auVar59 >> 0x9f,0) & 1) != 0) || SUB321(auVar59 >> 0xbf,0) != '\0') ||
          (SUB321(auVar59 >> 0xdf,0) & 1) != 0) || auVar59[0x1f] < '\0') {
        auVar59 = vcmpps_avx(auVar196,ZEXT1632(auVar35),8);
        auVar36._0_4_ = auVar59._0_4_ & auVar193._0_4_;
        auVar36._4_4_ = auVar59._4_4_ & auVar193._4_4_;
        auVar36._8_4_ = auVar59._8_4_ & auVar193._8_4_;
        auVar36._12_4_ = auVar59._12_4_ & auVar193._12_4_;
        auVar137._16_4_ = auVar59._16_4_ & auVar193._16_4_;
        auVar137._0_16_ = auVar36;
        auVar137._20_4_ = auVar59._20_4_ & auVar193._20_4_;
        auVar137._24_4_ = auVar59._24_4_ & auVar193._24_4_;
        auVar137._28_4_ = auVar59._28_4_ & auVar193._28_4_;
        uVar31 = vmovmskps_avx(auVar137);
        uVar30 = vmovmskps_avx(auVar193);
        if ((char)uVar31 != (char)uVar30) {
          auVar55 = vpackssdw_avx(auVar36,auVar137._16_16_);
          auVar88 = vpackssdw_avx(auVar193._0_16_,auVar193._16_16_);
          auVar55 = auVar55 ^ auVar88;
          lVar25 = (longlong)(int)param_8;
          pauVar28 = (undefined1 (*) [32])(param_4 + lVar25 * 0xc);
          auVar88 = vpacksswb_avx(auVar55,auVar55);
          auVar59 = vpmovsxwd_avx2(auVar55);
          if ((byte)(SUB161(auVar88 >> 7,0) & 1 | (SUB161(auVar88 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar88 >> 0x17,0) & 1) << 2 | (SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar88 >> 0x27,0) & 1) << 4 | (SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar88 >> 0x37,0) & 1) << 6 | SUB161(auVar88 >> 0x3f,0) << 7) == 0xff)
          {
            auVar196 = pauVar28[1];
            auVar193 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                    ,auVar196);
            auVar114 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,*pauVar28);
            auVar193 = vblendps_avx(auVar114,auVar193,0x88);
            auVar114 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar196);
            auVar222 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                    ,pauVar28[2]);
            auVar114 = vblendps_avx(auVar222,auVar114,0x13);
            auVar233._16_16_ = auVar114._0_16_;
            auVar233._0_16_ = auVar193._0_16_;
            auVar158 = vperm2f128_avx(auVar193,auVar114,0x31);
            auVar196 = vblendps_avx(auVar196,*pauVar28,0x24);
            auVar196 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar196);
            auVar193 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar28[2]);
            auVar222 = vblendps_avx(auVar196,auVar193,0xe0);
            auVar196 = *(undefined1 (*) [32])(param_5 + lVar25 * 0xc);
            auVar193 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar25 * 0xc);
            auVar114 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar25 * 0xc);
            auVar48 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                   ,auVar193);
            auVar43 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                   ,auVar196);
            auVar48 = vblendps_avx(auVar43,auVar48,0x88);
            auVar43 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                   ,auVar193);
            auVar161 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                    ,auVar114);
            auVar43 = vblendps_avx(auVar161,auVar43,0x13);
            auVar211._16_16_ = auVar43._0_16_;
            auVar211._0_16_ = auVar48._0_16_;
            auVar48 = vperm2f128_avx(auVar48,auVar43,0x31);
            auVar196 = vblendps_avx(auVar193,auVar196,0x24);
            auVar196 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar196);
            auVar193 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,auVar114);
            auVar196 = vblendps_avx(auVar196,auVar193,0xe0);
          }
          else {
            auVar233 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar59);
            auVar158 = vgatherdps(ZEXT1632(auVar35),auVar59);
            auVar222 = vgatherdps(ZEXT832(0),auVar59);
            auVar211 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar59);
            auVar48 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar59);
            auVar196 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar59);
          }
          auVar43 = vmaskmovps_avx(auVar59,*(undefined1 (*) [32])(param_6 + (int)(param_8 * 4)));
          auVar51._4_4_ = uVar24;
          auVar51._0_4_ = uVar24;
          auVar51._8_4_ = uVar24;
          auVar51._12_4_ = uVar24;
          auVar51._16_4_ = uVar24;
          auVar51._20_4_ = uVar24;
          auVar51._24_4_ = uVar24;
          auVar51._28_4_ = uVar24;
          auVar193 = vsubps_avx(auVar233,auVar51);
          auVar68._4_4_ = local_880;
          auVar68._0_4_ = local_880;
          auVar68._8_4_ = local_880;
          auVar68._12_4_ = local_880;
          auVar68._16_4_ = local_880;
          auVar68._20_4_ = local_880;
          auVar68._24_4_ = local_880;
          auVar68._28_4_ = local_880;
          auVar114 = vsubps_avx(auVar158,auVar68);
          auVar83._4_4_ = local_870;
          auVar83._0_4_ = local_870;
          auVar83._8_4_ = local_870;
          auVar83._12_4_ = local_870;
          auVar83._16_4_ = local_870;
          auVar83._20_4_ = local_870;
          auVar83._24_4_ = local_870;
          auVar83._28_4_ = local_870;
          auVar222 = vsubps_avx(auVar222,auVar83);
          fVar122 = auVar43._0_4_;
          fVar165 = auVar211._0_4_ * fVar122;
          fVar143 = auVar43._4_4_;
          fVar173 = auVar211._4_4_ * fVar143;
          fVar1 = auVar43._8_4_;
          fVar174 = auVar211._8_4_ * fVar1;
          fVar180 = auVar43._12_4_;
          fVar175 = auVar211._12_4_ * fVar180;
          fVar3 = auVar43._16_4_;
          fVar176 = auVar211._16_4_ * fVar3;
          fVar7 = auVar43._20_4_;
          fVar177 = auVar211._20_4_ * fVar7;
          fVar11 = auVar43._24_4_;
          fVar178 = auVar211._24_4_ * fVar11;
          fVar15 = auVar43._28_4_;
          fVar179 = auVar211._28_4_ * fVar15;
          fVar187 = auVar48._0_4_ * fVar122;
          fVar198 = auVar48._4_4_ * fVar143;
          fVar199 = auVar48._8_4_ * fVar1;
          fVar200 = auVar48._12_4_ * fVar180;
          fVar201 = auVar48._16_4_ * fVar3;
          fVar202 = auVar48._20_4_ * fVar7;
          fVar203 = auVar48._24_4_ * fVar11;
          fVar204 = auVar48._28_4_ * fVar15;
          fVar205 = auVar196._0_4_ * fVar122;
          fVar213 = auVar196._4_4_ * fVar143;
          fVar214 = auVar196._8_4_ * fVar1;
          fVar215 = auVar196._12_4_ * fVar180;
          fVar216 = auVar196._16_4_ * fVar3;
          fVar217 = auVar196._20_4_ * fVar7;
          fVar218 = auVar196._24_4_ * fVar11;
          fVar219 = auVar196._28_4_ * fVar15;
          fVar53 = auVar114._0_4_;
          fVar144 = auVar114._4_4_;
          fVar2 = auVar114._8_4_;
          fVar184 = auVar114._12_4_;
          fVar4 = auVar114._16_4_;
          fVar8 = auVar114._20_4_;
          fVar12 = auVar114._24_4_;
          fVar16 = auVar114._28_4_;
          fVar87 = auVar222._0_4_;
          fVar123 = auVar222._4_4_;
          fVar108 = auVar222._8_4_;
          fVar185 = auVar222._12_4_;
          fVar5 = auVar222._16_4_;
          fVar9 = auVar222._20_4_;
          fVar13 = auVar222._24_4_;
          fVar17 = auVar222._28_4_;
          fVar142 = auVar193._0_4_;
          fVar107 = auVar193._4_4_;
          fVar109 = auVar193._8_4_;
          fVar186 = auVar193._12_4_;
          fVar6 = auVar193._16_4_;
          fVar10 = auVar193._20_4_;
          fVar14 = auVar193._24_4_;
          fVar18 = auVar193._28_4_;
          auVar104._0_4_ = (fVar53 * fVar205 - fVar187 * fVar87) + (float)local_620._0_4_;
          auVar104._4_4_ = (fVar144 * fVar213 - fVar198 * fVar123) + (float)local_620._4_4_;
          auVar104._8_4_ = (fVar2 * fVar214 - fVar199 * fVar108) + fStack_618;
          auVar104._12_4_ = (fVar184 * fVar215 - fVar200 * fVar185) + fStack_614;
          auVar104._16_4_ = (fVar4 * fVar216 - fVar201 * fVar5) + fStack_610;
          auVar104._20_4_ = (fVar8 * fVar217 - fVar202 * fVar9) + fStack_60c;
          auVar104._24_4_ = (fVar12 * fVar218 - fVar203 * fVar13) + fStack_608;
          auVar104._28_4_ = (fVar16 * fVar219 - fVar204 * fVar17) + fStack_604;
          auVar138._0_4_ = (fVar87 * fVar165 - fVar205 * fVar142) + (float)local_600._0_4_;
          auVar138._4_4_ = (fVar123 * fVar173 - fVar213 * fVar107) + (float)local_600._4_4_;
          auVar138._8_4_ = (fVar108 * fVar174 - fVar214 * fVar109) + fStack_5f8;
          auVar138._12_4_ = (fVar185 * fVar175 - fVar215 * fVar186) + fStack_5f4;
          auVar138._16_4_ = (fVar5 * fVar176 - fVar216 * fVar6) + fStack_5f0;
          auVar138._20_4_ = (fVar9 * fVar177 - fVar217 * fVar10) + fStack_5ec;
          auVar138._24_4_ = (fVar13 * fVar178 - fVar218 * fVar14) + fStack_5e8;
          auVar138._28_4_ = (fVar17 * fVar179 - fVar219 * fVar18) + fStack_5e4;
          auVar156._0_4_ = (fVar142 * fVar187 - fVar165 * fVar53) + (float)local_5e0._0_4_;
          auVar156._4_4_ = (fVar107 * fVar198 - fVar173 * fVar144) + (float)local_5e0._4_4_;
          auVar156._8_4_ = (fVar109 * fVar199 - fVar174 * fVar2) + fStack_5d8;
          auVar156._12_4_ = (fVar186 * fVar200 - fVar175 * fVar184) + fStack_5d4;
          auVar156._16_4_ = (fVar6 * fVar201 - fVar176 * fVar4) + fStack_5d0;
          auVar156._20_4_ = (fVar10 * fVar202 - fVar177 * fVar8) + fStack_5cc;
          auVar156._24_4_ = (fVar14 * fVar203 - fVar178 * fVar12) + fStack_5c8;
          auVar156._28_4_ = (fVar18 * fVar204 - fVar179 * fVar16) + fStack_5c4;
          _local_620 = vmaskmovps_avx(auVar59,auVar104);
          _local_600 = vmaskmovps_avx(auVar59,auVar138);
          _local_5e0 = vmaskmovps_avx(auVar59,auVar156);
          auVar105._0_4_ = fVar87 * 0.0;
          auVar105._4_4_ = fVar123 * 0.0;
          auVar105._8_4_ = fVar108 * 0.0;
          auVar105._12_4_ = fVar185 * 0.0;
          auVar105._16_4_ = fVar5 * 0.0;
          auVar105._20_4_ = fVar9 * 0.0;
          auVar105._24_4_ = fVar13 * 0.0;
          auVar105._28_4_ = fVar17 * 0.0;
          auVar139._0_4_ = fVar53 * 0.0;
          auVar139._4_4_ = fVar144 * 0.0;
          auVar139._8_4_ = fVar2 * 0.0;
          auVar139._12_4_ = fVar184 * 0.0;
          auVar139._16_4_ = fVar4 * 0.0;
          auVar139._20_4_ = fVar8 * 0.0;
          auVar139._24_4_ = fVar12 * 0.0;
          auVar139._28_4_ = fVar16 * 0.0;
          auVar196 = vsubps_avx(auVar105,auVar105);
          auVar84._0_4_ = -(fVar142 * fVar87) + auVar139._0_4_;
          auVar84._4_4_ = -(fVar107 * fVar123) + auVar139._4_4_;
          auVar84._8_4_ = -(fVar109 * fVar108) + auVar139._8_4_;
          auVar84._12_4_ = -(fVar186 * fVar185) + auVar139._12_4_;
          auVar84._16_4_ = -(fVar6 * fVar5) + auVar139._16_4_;
          auVar84._20_4_ = -(fVar10 * fVar9) + auVar139._20_4_;
          auVar84._24_4_ = -(fVar14 * fVar13) + auVar139._24_4_;
          auVar84._28_4_ = -(fVar18 * fVar17) + auVar139._28_4_;
          auVar193 = vsubps_avx(auVar84,auVar139);
          fVar187 = fVar122 * (-(fVar142 * fVar53) + auVar196._0_4_);
          fVar198 = fVar143 * (-(fVar107 * fVar144) + auVar196._4_4_);
          fVar199 = fVar1 * (-(fVar109 * fVar2) + auVar196._8_4_);
          fVar200 = fVar180 * (-(fVar186 * fVar184) + auVar196._12_4_);
          fVar201 = fVar3 * (-(fVar6 * fVar4) + auVar196._16_4_);
          fVar202 = fVar7 * (-(fVar10 * fVar8) + auVar196._20_4_);
          fVar203 = fVar11 * (-(fVar14 * fVar12) + auVar196._24_4_);
          fVar204 = fVar15 * (-(fVar18 * fVar16) + auVar196._28_4_);
          fVar165 = fVar122 * auVar193._0_4_;
          fVar173 = fVar143 * auVar193._4_4_;
          fVar174 = fVar1 * auVar193._8_4_;
          fVar175 = fVar180 * auVar193._12_4_;
          fVar176 = fVar3 * auVar193._16_4_;
          fVar177 = fVar7 * auVar193._20_4_;
          fVar178 = fVar11 * auVar193._24_4_;
          fVar179 = fVar15 * auVar193._28_4_;
          fVar205 = fVar122 * (fVar142 * 0.0 + (-(fVar142 * 0.0) - fVar53 * fVar87));
          fVar213 = fVar143 * (fVar107 * 0.0 + (-(fVar107 * 0.0) - fVar144 * fVar123));
          fVar214 = fVar1 * (fVar109 * 0.0 + (-(fVar109 * 0.0) - fVar2 * fVar108));
          fVar215 = fVar180 * (fVar186 * 0.0 + (-(fVar186 * 0.0) - fVar184 * fVar185));
          fVar216 = fVar3 * (fVar6 * 0.0 + (-(fVar6 * 0.0) - fVar4 * fVar5));
          fVar217 = fVar7 * (fVar10 * 0.0 + (-(fVar10 * 0.0) - fVar8 * fVar9));
          fVar218 = fVar11 * (fVar14 * 0.0 + (-(fVar14 * 0.0) - fVar12 * fVar13));
          fVar219 = fVar15 * (fVar18 * 0.0 + (-(fVar18 * 0.0) - fVar16 * fVar17));
          auVar212._0_4_ = fVar122 * (fVar53 * fVar53 + fVar87 * fVar87) + (float)local_300._0_4_;
          auVar212._4_4_ =
               fVar143 * (fVar144 * fVar144 + fVar123 * fVar123) + (float)local_300._4_4_;
          auVar212._8_4_ = fVar1 * (fVar2 * fVar2 + fVar108 * fVar108) + fStack_2f8;
          auVar212._12_4_ = fVar180 * (fVar184 * fVar184 + fVar185 * fVar185) + fStack_2f4;
          auVar212._16_4_ = fVar3 * (fVar4 * fVar4 + fVar5 * fVar5) + fStack_2f0;
          auVar212._20_4_ = fVar7 * (fVar8 * fVar8 + fVar9 * fVar9) + fStack_2ec;
          auVar212._24_4_ = fVar11 * (fVar12 * fVar12 + fVar13 * fVar13) + fStack_2e8;
          auVar212._28_4_ = fVar15 * (fVar16 * fVar16 + fVar17 * fVar17) + fStack_2e4;
          auVar157._0_4_ = fVar187 + (float)local_2e0._0_4_;
          auVar157._4_4_ = fVar198 + (float)local_2e0._4_4_;
          auVar157._8_4_ = fVar199 + fStack_2d8;
          auVar157._12_4_ = fVar200 + fStack_2d4;
          auVar157._16_4_ = fVar201 + fStack_2d0;
          auVar157._20_4_ = fVar202 + fStack_2cc;
          auVar157._24_4_ = fVar203 + fStack_2c8;
          auVar157._28_4_ = fVar204 + fStack_2c4;
          auVar164._0_4_ = fVar165 + (float)local_2c0._0_4_;
          auVar164._4_4_ = fVar173 + (float)local_2c0._4_4_;
          auVar164._8_4_ = fVar174 + fStack_2b8;
          auVar164._12_4_ = fVar175 + fStack_2b4;
          auVar164._16_4_ = fVar176 + fStack_2b0;
          auVar164._20_4_ = fVar177 + fStack_2ac;
          auVar164._24_4_ = fVar178 + fStack_2a8;
          auVar164._28_4_ = fVar179 + fStack_2a4;
          auVar85._0_4_ = fVar187 + (float)local_280._0_4_;
          auVar85._4_4_ = fVar198 + (float)local_280._4_4_;
          auVar85._8_4_ = fVar199 + fStack_278;
          auVar85._12_4_ = fVar200 + fStack_274;
          auVar85._16_4_ = fVar201 + fStack_270;
          auVar85._20_4_ = fVar202 + fStack_26c;
          auVar85._24_4_ = fVar203 + fStack_268;
          auVar85._28_4_ = fVar204 + fStack_264;
          auVar140._0_4_ = fVar122 * (fVar142 * fVar142 + fVar87 * fVar87) + (float)local_260._0_4_;
          auVar140._4_4_ =
               fVar143 * (fVar107 * fVar107 + fVar123 * fVar123) + (float)local_260._4_4_;
          auVar140._8_4_ = fVar1 * (fVar109 * fVar109 + fVar108 * fVar108) + fStack_258;
          auVar140._12_4_ = fVar180 * (fVar186 * fVar186 + fVar185 * fVar185) + fStack_254;
          auVar140._16_4_ = fVar3 * (fVar6 * fVar6 + fVar5 * fVar5) + fStack_250;
          auVar140._20_4_ = fVar7 * (fVar10 * fVar10 + fVar9 * fVar9) + fStack_24c;
          auVar140._24_4_ = fVar11 * (fVar14 * fVar14 + fVar13 * fVar13) + fStack_248;
          auVar140._28_4_ = fVar15 * (fVar18 * fVar18 + fVar17 * fVar17) + fStack_244;
          auVar197._0_4_ = fVar205 + (float)local_240._0_4_;
          auVar197._4_4_ = fVar213 + (float)local_240._4_4_;
          auVar197._8_4_ = fVar214 + fStack_238;
          auVar197._12_4_ = fVar215 + fStack_234;
          auVar197._16_4_ = fVar216 + fStack_230;
          auVar197._20_4_ = fVar217 + fStack_22c;
          auVar197._24_4_ = fVar218 + fStack_228;
          auVar197._28_4_ = fVar219 + fStack_224;
          auVar69._0_4_ = fVar165 + (float)local_200._0_4_;
          auVar69._4_4_ = fVar173 + (float)local_200._4_4_;
          auVar69._8_4_ = fVar174 + fStack_1f8;
          auVar69._12_4_ = fVar175 + fStack_1f4;
          auVar69._16_4_ = fVar176 + fStack_1f0;
          auVar69._20_4_ = fVar177 + fStack_1ec;
          auVar69._24_4_ = fVar178 + fStack_1e8;
          auVar69._28_4_ = fVar179 + fStack_1e4;
          auVar106._0_4_ = fVar205 + (float)local_1e0._0_4_;
          auVar106._4_4_ = fVar213 + (float)local_1e0._4_4_;
          auVar106._8_4_ = fVar214 + fStack_1d8;
          auVar106._12_4_ = fVar215 + fStack_1d4;
          auVar106._16_4_ = fVar216 + fStack_1d0;
          auVar106._20_4_ = fVar217 + fStack_1cc;
          auVar106._24_4_ = fVar218 + fStack_1c8;
          auVar106._28_4_ = fVar219 + fStack_1c4;
          auVar52._0_4_ = fVar122 * (fVar53 * fVar53 + fVar142 * fVar142) + (float)local_1c0._0_4_;
          auVar52._4_4_ = fVar143 * (fVar144 * fVar144 + fVar107 * fVar107) + (float)local_1c0._4_4_
          ;
          auVar52._8_4_ = fVar1 * (fVar2 * fVar2 + fVar109 * fVar109) + fStack_1b8;
          auVar52._12_4_ = fVar180 * (fVar184 * fVar184 + fVar186 * fVar186) + fStack_1b4;
          auVar52._16_4_ = fVar3 * (fVar4 * fVar4 + fVar6 * fVar6) + fStack_1b0;
          auVar52._20_4_ = fVar7 * (fVar8 * fVar8 + fVar10 * fVar10) + fStack_1ac;
          auVar52._24_4_ = fVar11 * (fVar12 * fVar12 + fVar14 * fVar14) + fStack_1a8;
          auVar52._28_4_ = fVar15 * (fVar16 * fVar16 + fVar18 * fVar18) + fStack_1a4;
          _local_300 = vmaskmovps_avx(auVar59,auVar212);
          _local_2e0 = vmaskmovps_avx(auVar59,auVar157);
          _local_2c0 = vmaskmovps_avx(auVar59,auVar164);
          auVar196 = ZEXT1232(ZEXT812(0));
          local_2a0 = vmaskmovps_avx(auVar59,auVar196);
          _local_280 = vmaskmovps_avx(auVar59,auVar85);
          _local_260 = vmaskmovps_avx(auVar59,auVar140);
          _local_240 = vmaskmovps_avx(auVar59,auVar197);
          local_220 = vmaskmovps_avx(auVar59,auVar196);
          _local_200 = vmaskmovps_avx(auVar59,auVar69);
          _local_1e0 = vmaskmovps_avx(auVar59,auVar106);
          _local_1c0 = vmaskmovps_avx(auVar59,auVar52);
          local_1a0 = vmaskmovps_avx(auVar59,auVar196);
          local_180 = vmaskmovps_avx(auVar59,auVar196);
          local_160 = vmaskmovps_avx(auVar59,auVar196);
          local_140 = vmaskmovps_avx(auVar59,auVar196);
          local_120 = vmaskmovps_avx(auVar59,auVar98);
        }
      }
    }
    auVar59 = vhaddps_avx(_local_300,_local_300);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar196 = vhaddps_avx(_local_2e0,_local_2e0);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar35 = ZEXT416((uint)(auVar59._0_4_ + auVar59._16_4_));
    auVar59 = vhaddps_avx(_local_2c0,_local_2c0);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar34 = ZEXT416((uint)(auVar196._0_4_ + auVar196._16_4_));
    auVar196 = vhaddps_avx(local_2a0,local_2a0);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar193 = vhaddps_avx(_local_280,_local_280);
    fVar122 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(auVar193,auVar193);
    auVar74 = ZEXT416((uint)(auVar196._0_4_ + auVar196._16_4_));
    fVar53 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(_local_260,_local_260);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar196 = vhaddps_avx(_local_240,_local_240);
    auVar36 = ZEXT416((uint)(auVar59._0_4_ + auVar59._16_4_));
    auVar59 = vhaddps_avx(auVar196,auVar196);
    auVar196 = vhaddps_avx(local_220,local_220);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar193 = vhaddps_avx(_local_200,_local_200);
    fVar87 = auVar59._0_4_ + auVar59._16_4_;
    auVar37 = ZEXT416((uint)fVar87);
    auVar59 = vhaddps_avx(auVar193,auVar193);
    fVar142 = auVar196._0_4_ + auVar196._16_4_;
    fVar143 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(_local_1e0,_local_1e0);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar196 = vhaddps_avx(_local_1c0,_local_1c0);
    fVar144 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(auVar196,auVar196);
    auVar196 = vhaddps_avx(local_1a0,local_1a0);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar193 = vhaddps_avx(local_180,local_180);
    fVar123 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(auVar193,auVar193);
    fVar107 = auVar196._0_4_ + auVar196._16_4_;
    fVar1 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(local_160,local_160);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar196 = vhaddps_avx(local_140,local_140);
    fVar2 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(auVar196,auVar196);
    auVar196 = vhaddps_avx(local_120,local_120);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    fVar108 = auVar59._0_4_ + auVar59._16_4_;
    fVar109 = auVar196._0_4_ + auVar196._16_4_;
    auVar88 = vinsertps_avx(auVar34,auVar74,0x10);
    auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar144),0x20);
    auVar54 = ZEXT416((uint)fVar107);
    auVar88 = vinsertps_avx(auVar88,auVar54,0x30);
    auVar58 = ZEXT416((uint)fVar53);
    auVar55 = vinsertps_avx(auVar58,auVar37,0x10);
    auVar55 = vinsertps_avx(auVar55,ZEXT416((uint)fVar1),0x20);
    auVar39 = ZEXT416((uint)fVar108);
    auVar55 = vinsertps_avx(auVar55,auVar39,0x30);
    auVar90 = vinsertps_avx(auVar35,ZEXT416((uint)fVar122),0x10);
    auVar90 = vinsertps_avx(auVar90,ZEXT416((uint)fVar143),0x20);
    auVar56 = ZEXT416((uint)fVar123);
    auVar90 = vinsertps_avx(auVar90,auVar56,0x30);
    auVar112 = vinsertps_avx(auVar36,ZEXT416((uint)fVar142),0x10);
    auVar112 = vinsertps_avx(auVar112,ZEXT416((uint)fVar2),0x20);
    auVar40 = ZEXT416((uint)fVar109);
    auVar112 = vinsertps_avx(auVar112,auVar40,0x30);
    auVar188._0_4_ = auVar90._0_4_ * auVar112._0_4_ - auVar88._0_4_ * auVar55._0_4_;
    auVar188._4_4_ = auVar90._4_4_ * auVar112._4_4_ - auVar88._4_4_ * auVar55._4_4_;
    auVar188._8_4_ = auVar90._8_4_ * auVar112._8_4_ - auVar88._8_4_ * auVar55._8_4_;
    auVar188._12_4_ = auVar90._12_4_ * auVar112._12_4_ - auVar88._12_4_ * auVar55._12_4_;
    auVar88 = vinsertps_avx(ZEXT416((uint)fVar1),ZEXT416((uint)fVar2),0x10);
    auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar143),0x20);
    auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar144),0x30);
    auVar90 = vshufps_avx(ZEXT416((uint)fVar107),ZEXT416((uint)fVar108),0);
    auVar55 = vinsertps_avx(ZEXT416((uint)fVar143),ZEXT416((uint)fVar144),0x10);
    auVar55 = vinsertps_avx(auVar55,ZEXT416((uint)fVar1),0x20);
    auVar55 = vinsertps_avx(auVar55,ZEXT416((uint)fVar2),0x30);
    auVar112 = vshufps_avx(ZEXT416((uint)fVar109),ZEXT416((uint)fVar123),0);
    fVar180 = auVar55._0_4_;
    auVar57._0_4_ = fVar180 * auVar112._0_4_ - auVar88._0_4_ * auVar90._0_4_;
    fVar184 = auVar55._4_4_;
    auVar57._4_4_ = fVar184 * auVar112._4_4_ - auVar88._4_4_ * auVar90._4_4_;
    fVar185 = auVar55._8_4_;
    auVar57._8_4_ = fVar185 * auVar112._8_4_ - auVar88._8_4_ * auVar90._8_4_;
    fVar186 = auVar55._12_4_;
    auVar57._12_4_ = fVar186 * auVar112._12_4_ - auVar88._12_4_ * auVar90._12_4_;
    auVar88 = vinsertps_avx(auVar37,ZEXT416((uint)fVar142),0x10);
    auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar122),0x20);
    auVar88 = vinsertps_avx(auVar88,auVar74,0x30);
    auVar90 = vshufps_avx(auVar34,ZEXT416((uint)fVar53),0);
    auVar55 = vinsertps_avx(ZEXT416((uint)fVar122),auVar74,0x10);
    auVar55 = vinsertps_avx(auVar55,auVar37,0x20);
    auVar55 = vinsertps_avx(auVar55,ZEXT416((uint)fVar142),0x30);
    auVar112 = vshufps_avx(auVar36,auVar35,0);
    fVar123 = auVar55._0_4_;
    auVar225._0_4_ = fVar123 * auVar112._0_4_ - auVar90._0_4_ * auVar88._0_4_;
    fVar107 = auVar55._4_4_;
    auVar225._4_4_ = fVar107 * auVar112._4_4_ - auVar90._4_4_ * auVar88._4_4_;
    fVar108 = auVar55._8_4_;
    auVar225._8_4_ = fVar108 * auVar112._8_4_ - auVar90._8_4_ * auVar88._8_4_;
    fVar109 = auVar55._12_4_;
    auVar225._12_4_ = fVar109 * auVar112._12_4_ - auVar90._12_4_ * auVar88._12_4_;
    auVar88 = vshufps_avx(auVar57,auVar57,0xd8);
    auVar37._0_4_ = auVar225._0_4_ * auVar88._0_4_;
    auVar37._4_4_ = auVar225._4_4_ * auVar88._4_4_;
    auVar37._8_4_ = auVar225._8_4_ * auVar88._8_4_;
    auVar37._12_4_ = auVar225._12_4_ * auVar88._12_4_;
    auVar88 = vshufpd_avx(auVar37,auVar37,1);
    auVar38._0_4_ = auVar37._0_4_ + auVar88._0_4_;
    auVar38._4_4_ = auVar37._4_4_ + auVar88._4_4_;
    auVar38._8_4_ = auVar37._8_4_ + auVar88._8_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar88._12_4_;
    auVar88 = vshufps_avx(auVar188,auVar188,0x55);
    auVar55 = vshufps_avx(auVar188,auVar188,0xaa);
    auVar90 = vshufps_avx(auVar188,auVar188,0xff);
    fVar53 = auVar90._0_4_;
    auVar221._0_4_ = auVar188._0_4_ * fVar53 + auVar88._0_4_ * auVar55._0_4_;
    auVar221._4_4_ = auVar188._0_4_ * auVar90._4_4_ + auVar88._4_4_ * auVar55._4_4_;
    auVar221._8_4_ = auVar188._0_4_ * auVar90._8_4_ + auVar88._8_4_ * auVar55._8_4_;
    auVar221._12_4_ = auVar188._0_4_ * auVar90._12_4_ + auVar88._12_4_ * auVar55._12_4_;
    auVar112 = vshufps_avx(auVar38,auVar38,0x39);
    auVar235._0_4_ = auVar112._0_4_ + auVar38._0_4_;
    auVar235._4_4_ = auVar112._4_4_ + auVar38._4_4_;
    auVar235._8_4_ = auVar112._8_4_ + auVar38._8_4_;
    auVar235._12_4_ = auVar112._12_4_ + auVar38._12_4_;
    auVar112 = vsubps_avx(auVar221,auVar235);
    auVar227 = ZEXT816(0);
    if ((auVar112._0_4_ != 0.0) ||
       (auVar70 = ___ymm_3f800000000000000000000000000000000000003f8000000000000000000000,
       auVar86 = ___ymm_00000000000000003f800000000000000000000000000000000000003f800000,
       NAN(auVar112._0_4_))) {
      auVar37 = vinsertps_avx(auVar56,auVar54,0x10);
      auVar54 = vinsertps_avx(auVar54,auVar56,0x10);
      auVar37 = vinsertps_avx(auVar37,auVar39,0x20);
      auVar37 = vinsertps_avx(auVar37,auVar40,0x30);
      auVar40 = vinsertps_avx(auVar54,auVar40,0x20);
      auVar39 = vinsertps_avx(auVar40,auVar39,0x30);
      auVar56 = vshufps_avx(auVar225,auVar225,0x66);
      auVar221 = vshufps_avx(auVar225,auVar225,0x33);
      auVar40 = vinsertps_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar143),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416((uint)fVar2),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416((uint)fVar1),0x30);
      auVar225 = vshufps_avx(auVar225,auVar225,0xcc);
      auVar54 = vinsertps_avx(auVar35,auVar34,0x10);
      auVar35 = vinsertps_avx(auVar34,auVar35,0x10);
      auVar54 = vinsertps_avx(auVar54,auVar58,0x20);
      auVar54 = vinsertps_avx(auVar54,auVar36,0x30);
      auVar35 = vinsertps_avx(auVar35,auVar36,0x20);
      auVar34 = vshufps_avx(auVar57,auVar57,0x33);
      auVar35 = vinsertps_avx(auVar35,auVar58,0x30);
      auVar58 = vshufps_avx(auVar57,auVar57,0x66);
      auVar36 = vinsertps_avx(auVar74,ZEXT416((uint)fVar122),0x10);
      auVar36 = vinsertps_avx(auVar36,ZEXT416((uint)fVar142),0x20);
      auVar36 = vinsertps_avx(auVar36,ZEXT416((uint)fVar87),0x30);
      auVar57 = vshufps_avx(auVar57,auVar57,0xcc);
      auVar112 = vdivps_avx(___xmm_3f800000bf800000bf8000003f800000,auVar112);
      fVar122 = auVar112._0_4_;
      auVar74._0_4_ =
           (fVar53 * auVar54._0_4_ - (fVar123 * auVar57._0_4_ + auVar58._0_4_ * auVar36._0_4_)) *
           fVar122;
      fVar87 = auVar112._4_4_;
      auVar74._4_4_ =
           (auVar90._4_4_ * auVar54._4_4_ -
           (fVar107 * auVar57._4_4_ + auVar58._4_4_ * auVar36._4_4_)) * fVar87;
      fVar142 = auVar112._8_4_;
      auVar74._8_4_ =
           (auVar90._8_4_ * auVar54._8_4_ -
           (fVar108 * auVar57._8_4_ + auVar58._8_4_ * auVar36._8_4_)) * fVar142;
      fVar143 = auVar112._12_4_;
      auVar74._12_4_ =
           (auVar90._12_4_ * auVar54._12_4_ -
           (fVar109 * auVar57._12_4_ + auVar58._12_4_ * auVar36._12_4_)) * fVar143;
      auVar91._0_4_ =
           (fVar180 * auVar88._0_4_ -
           (auVar37._0_4_ * auVar221._0_4_ - auVar56._0_4_ * auVar39._0_4_)) * fVar122;
      auVar91._4_4_ =
           (fVar184 * auVar88._4_4_ -
           (auVar37._4_4_ * auVar221._4_4_ - auVar56._4_4_ * auVar39._4_4_)) * fVar87;
      auVar91._8_4_ =
           (fVar185 * auVar88._8_4_ -
           (auVar37._8_4_ * auVar221._8_4_ - auVar56._8_4_ * auVar39._8_4_)) * fVar142;
      auVar91._12_4_ =
           (fVar186 * auVar88._12_4_ -
           (auVar37._12_4_ * auVar221._12_4_ - auVar56._12_4_ * auVar39._12_4_)) * fVar143;
      auVar125._0_4_ =
           (fVar123 * auVar55._0_4_ -
           (auVar54._0_4_ * auVar34._0_4_ - auVar58._0_4_ * auVar35._0_4_)) * fVar122;
      auVar125._4_4_ =
           (fVar107 * auVar55._4_4_ -
           (auVar54._4_4_ * auVar34._4_4_ - auVar58._4_4_ * auVar35._4_4_)) * fVar87;
      auVar125._8_4_ =
           (fVar108 * auVar55._8_4_ -
           (auVar54._8_4_ * auVar34._8_4_ - auVar58._8_4_ * auVar35._8_4_)) * fVar142;
      auVar125._12_4_ =
           (fVar109 * auVar55._12_4_ -
           (auVar54._12_4_ * auVar34._12_4_ - auVar58._12_4_ * auVar35._12_4_)) * fVar143;
      auVar39._0_4_ =
           (auVar37._0_4_ * auVar188._0_4_ -
           (fVar180 * auVar225._0_4_ + auVar56._0_4_ * auVar40._0_4_)) * fVar122;
      auVar39._4_4_ =
           (auVar37._4_4_ * auVar188._0_4_ -
           (fVar184 * auVar225._4_4_ + auVar56._4_4_ * auVar40._4_4_)) * fVar87;
      auVar39._8_4_ =
           (auVar37._8_4_ * auVar188._0_4_ -
           (fVar185 * auVar225._8_4_ + auVar56._8_4_ * auVar40._8_4_)) * fVar142;
      auVar39._12_4_ =
           (auVar37._12_4_ * auVar188._0_4_ -
           (fVar186 * auVar225._12_4_ + auVar56._12_4_ * auVar40._12_4_)) * fVar143;
      auVar88 = vshufps_avx(auVar74,auVar91,0x22);
      auVar55 = vshufps_avx(auVar74,auVar91,0x77);
      auVar86._16_16_ = auVar88;
      auVar86._0_16_ = auVar55;
      auVar88 = vshufps_avx(auVar125,auVar39,0x22);
      auVar55 = vshufps_avx(auVar125,auVar39,0x77);
      auVar70._16_16_ = auVar88;
      auVar70._0_16_ = auVar55;
    }
    auVar88 = vmovshdup_avx(auVar188);
    auVar90 = vshufpd_avx(auVar188,auVar188,1);
    auVar55 = vmovshdup_avx(auVar38);
    fVar122 = (auVar188._0_4_ * fVar53 + auVar88._0_4_ * auVar90._0_4_) -
              (auVar38._0_4_ + auVar55._0_4_);
    uVar24 = 0;
    uVar31 = 0;
    if ((~(uint)fVar122 & 0x7f800000) != 0 && __real_322bcc77 <= fVar122) {
      auVar59 = vhaddps_avx(_local_620,_local_620);
      auVar196 = vhaddps_avx(_local_600,_local_600);
      auVar193 = vhaddps_avx(_local_5e0,_local_5e0);
      auVar59 = vhaddps_avx(auVar59,auVar59);
      auVar196 = vhaddps_avx(auVar196,auVar196);
      auVar193 = vhaddps_avx(auVar193,auVar193);
      fVar122 = auVar59._0_4_ + auVar59._16_4_;
      fVar53 = auVar196._0_4_ + auVar196._16_4_;
      fVar87 = auVar193._0_4_ + auVar193._16_4_;
      auVar227._0_4_ =
           auVar86._0_4_ * fVar122 + fVar53 * auVar86._16_4_ +
           auVar70._0_4_ * fVar87 + auVar70._16_4_ * 0.0;
      auVar227._4_4_ =
           auVar86._4_4_ * fVar122 + fVar53 * auVar86._20_4_ +
           auVar70._4_4_ * fVar87 + auVar70._20_4_ * 0.0;
      auVar227._8_4_ =
           auVar86._8_4_ * fVar122 + fVar53 * auVar86._24_4_ +
           auVar70._8_4_ * fVar87 + auVar70._24_4_ * 0.0;
      auVar227._12_4_ =
           auVar86._12_4_ * fVar122 + fVar53 * auVar86._28_4_ +
           auVar70._12_4_ * fVar87 + auVar70._28_4_ * 0.0;
      auVar88 = vmovshdup_avx(auVar227);
      uVar24 = auVar88._0_4_;
      auVar88 = vshufpd_avx(auVar227,auVar227,1);
      uVar31 = auVar88._0_4_;
    }
    *param_3 = auVar227._0_4_;
    param_3[1] = uVar24;
    param_3[2] = uVar31;
  }
  else {
    auVar40._0_12_ = ZEXT812(0);
    auVar40._12_4_ = 0;
    auVar141 = ZEXT1664(auVar40);
    auVar196 = ZEXT1632(auVar40);
    _local_660 = ZEXT1632(auVar40);
    _local_6e0 = ZEXT1632(auVar40);
    uVar33 = (ulonglong)param_8;
    _local_6c0 = _local_6e0;
    _local_6a0 = _local_6e0;
    _local_680 = _local_6e0;
    _local_640 = _local_660;
    if ((int)param_8 < iVar27) {
      uVar33 = (ulonglong)(int)param_8;
      pauVar28 = (undefined1 (*) [32])(param_5 + uVar33 * 0xc);
      pauVar32 = (undefined1 (*) [32])(uVar33 * 0xc + param_4);
      iVar29 = param_8 * 4;
      auVar71 = ZEXT864(0) << 0x20;
      do {
        auVar196 = *(undefined1 (*) [32])(param_7 + iVar29);
        auVar193 = vcmpps_avx(auVar196,auVar71._0_32_,8);
        iVar23 = vmovmskps_avx(auVar193);
        if ((iVar23 != 0xff) && ((char)iVar23 != -1)) {
          auVar196 = vcmpps_avx(auVar196,auVar71._0_32_,0xc);
          auVar88 = vpackssdw_avx(auVar196._0_16_,auVar196._16_16_);
          auVar196 = vpmovsxwd_avx2(auVar88);
          if ((char)iVar23 == '\0') {
            auVar114 = pauVar32[1];
            auVar222 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                    ,auVar114);
            auVar48 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                   ,*pauVar32);
            auVar222 = vblendps_avx(auVar48,auVar222,0x88);
            auVar48 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                   ,auVar114);
            auVar43 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,pauVar32[2]);
            auVar48 = vblendps_avx(auVar43,auVar48,0x13);
            auVar228._16_16_ = auVar48._0_16_;
            auVar228._0_16_ = auVar222._0_16_;
            auVar48 = vperm2f128_avx(auVar222,auVar48,0x31);
            auVar114 = vblendps_avx(auVar114,*pauVar32,0x24);
            auVar114 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar114);
            auVar222 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar32[2]);
            auVar114 = vblendps_avx(auVar114,auVar222,0xe0);
            auVar222 = pauVar28[1];
            auVar43 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                   ,auVar222);
            auVar158 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,*pauVar28);
            auVar43 = vblendps_avx(auVar158,auVar43,0x88);
            auVar158 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar222);
            auVar161 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                    ,pauVar28[2]);
            auVar158 = vblendps_avx(auVar161,auVar158,0x13);
            auVar75._16_16_ = auVar158._0_16_;
            auVar75._0_16_ = auVar43._0_16_;
            auVar43 = vperm2f128_avx(auVar43,auVar158,0x31);
            auVar222 = vblendps_avx(auVar222,*pauVar28,0x24);
            auVar222 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar222);
            auVar71 = ZEXT864(0) << 0x20;
            auVar158 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar28[2]);
            auVar222 = vblendps_avx(auVar222,auVar158,0xe0);
          }
          else {
            auVar228 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar48 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar114 = vgatherdps(ZEXT832(0),auVar196);
            auVar75 = vgatherdps(ZEXT832(0),auVar196);
            auVar43 = vgatherdps(ZEXT832(0),auVar196);
            auVar222 = vgatherdps(ZEXT832(0),auVar196);
          }
          auVar158 = vmaskmovps_avx(auVar196,*(undefined1 (*) [32])(param_6 + iVar29));
          fVar122 = auVar158._0_4_;
          auVar229._0_4_ = fVar122 * auVar228._0_4_ + (float)local_680._0_4_;
          fVar53 = auVar158._4_4_;
          auVar229._4_4_ = fVar53 * auVar228._4_4_ + (float)local_680._4_4_;
          fVar87 = auVar158._8_4_;
          auVar229._8_4_ = fVar87 * auVar228._8_4_ + fStack_678;
          fVar142 = auVar158._12_4_;
          auVar229._12_4_ = fVar142 * auVar228._12_4_ + fStack_674;
          fVar143 = auVar158._16_4_;
          auVar229._16_4_ = fVar143 * auVar228._16_4_ + fStack_670;
          fVar144 = auVar158._20_4_;
          auVar229._20_4_ = fVar144 * auVar228._20_4_ + fStack_66c;
          fVar123 = auVar158._24_4_;
          auVar229._24_4_ = fVar123 * auVar228._24_4_ + fStack_668;
          fVar107 = auVar158._28_4_;
          auVar229._28_4_ = fVar107 * auVar228._28_4_ + fStack_664;
          auVar236._0_4_ = fVar122 * auVar48._0_4_ + (float)local_660._0_4_;
          auVar236._4_4_ = fVar53 * auVar48._4_4_ + (float)local_660._4_4_;
          auVar236._8_4_ = fVar87 * auVar48._8_4_ + fStack_658;
          auVar236._12_4_ = fVar142 * auVar48._12_4_ + fStack_654;
          auVar236._16_4_ = fVar143 * auVar48._16_4_ + fStack_650;
          auVar236._20_4_ = fVar144 * auVar48._20_4_ + fStack_64c;
          auVar236._24_4_ = fVar123 * auVar48._24_4_ + fStack_648;
          auVar236._28_4_ = fVar107 * auVar48._28_4_ + fStack_644;
          auVar41._0_4_ = fVar122 * auVar114._0_4_ + (float)local_640._0_4_;
          auVar41._4_4_ = fVar53 * auVar114._4_4_ + (float)local_640._4_4_;
          auVar41._8_4_ = fVar87 * auVar114._8_4_ + fStack_638;
          auVar41._12_4_ = fVar142 * auVar114._12_4_ + fStack_634;
          auVar41._16_4_ = fVar143 * auVar114._16_4_ + fStack_630;
          auVar41._20_4_ = fVar144 * auVar114._20_4_ + fStack_62c;
          auVar41._24_4_ = fVar123 * auVar114._24_4_ + fStack_628;
          auVar41._28_4_ = fVar107 * auVar114._28_4_ + fStack_624;
          _local_680 = vmaskmovps_avx(auVar196,auVar229);
          _local_660 = vmaskmovps_avx(auVar196,auVar236);
          _local_640 = vmaskmovps_avx(auVar196,auVar41);
          auVar76._0_4_ = fVar122 * auVar75._0_4_ + (float)local_6e0._0_4_;
          auVar76._4_4_ = fVar53 * auVar75._4_4_ + (float)local_6e0._4_4_;
          auVar76._8_4_ = fVar87 * auVar75._8_4_ + fStack_6d8;
          auVar76._12_4_ = fVar142 * auVar75._12_4_ + fStack_6d4;
          auVar76._16_4_ = fVar143 * auVar75._16_4_ + fStack_6d0;
          auVar76._20_4_ = fVar144 * auVar75._20_4_ + fStack_6cc;
          auVar76._24_4_ = fVar123 * auVar75._24_4_ + fStack_6c8;
          auVar76._28_4_ = fVar107 * auVar75._28_4_ + fStack_6c4;
          auVar92._0_4_ = fVar122 * auVar43._0_4_ + (float)local_6c0._0_4_;
          auVar92._4_4_ = fVar53 * auVar43._4_4_ + (float)local_6c0._4_4_;
          auVar92._8_4_ = fVar87 * auVar43._8_4_ + fStack_6b8;
          auVar92._12_4_ = fVar142 * auVar43._12_4_ + fStack_6b4;
          auVar92._16_4_ = fVar143 * auVar43._16_4_ + fStack_6b0;
          auVar92._20_4_ = fVar144 * auVar43._20_4_ + fStack_6ac;
          auVar92._24_4_ = fVar123 * auVar43._24_4_ + fStack_6a8;
          auVar92._28_4_ = fVar107 * auVar43._28_4_ + fStack_6a4;
          auVar113._0_4_ = fVar122 * auVar222._0_4_ + (float)local_6a0._0_4_;
          auVar113._4_4_ = fVar53 * auVar222._4_4_ + (float)local_6a0._4_4_;
          auVar113._8_4_ = fVar87 * auVar222._8_4_ + fStack_698;
          auVar113._12_4_ = fVar142 * auVar222._12_4_ + fStack_694;
          auVar113._16_4_ = fVar143 * auVar222._16_4_ + fStack_690;
          auVar113._20_4_ = fVar144 * auVar222._20_4_ + fStack_68c;
          auVar113._24_4_ = fVar123 * auVar222._24_4_ + fStack_688;
          auVar113._28_4_ = fVar107 * auVar222._28_4_ + fStack_684;
          _local_6e0 = vmaskmovps_avx(auVar196,auVar76);
          _local_6c0 = vmaskmovps_avx(auVar196,auVar92);
          _local_6a0 = vmaskmovps_avx(auVar196,auVar113);
          auVar42._4_4_ = __real_80000000;
          auVar42._0_4_ = __real_80000000;
          auVar42._8_4_ = __real_80000000;
          auVar42._12_4_ = __real_80000000;
          auVar42._16_4_ = __real_80000000;
          auVar42._20_4_ = __real_80000000;
          auVar42._24_4_ = __real_80000000;
          auVar42._28_4_ = __real_80000000;
          auVar196 = vblendvps_avx(auVar158,auVar42,auVar193);
          auVar141 = ZEXT3264(CONCAT428(auVar141._28_4_ + auVar196._28_4_,
                                        CONCAT424(auVar141._24_4_ + auVar196._24_4_,
                                                  CONCAT420(auVar141._20_4_ + auVar196._20_4_,
                                                            CONCAT416(auVar141._16_4_ +
                                                                      auVar196._16_4_,
                                                                      CONCAT412(auVar141._12_4_ +
                                                                                auVar196._12_4_,
                                                                                CONCAT48(auVar141.
                                                  _8_4_ + auVar196._8_4_,
                                                  CONCAT44(auVar141._4_4_ + auVar196._4_4_,
                                                           auVar141._0_4_ + auVar196._0_4_))))))));
        }
        auVar196 = auVar141._0_32_;
        uVar33 = uVar33 + 8;
        pauVar28 = pauVar28 + 3;
        pauVar32 = pauVar32 + 3;
        iVar29 = iVar29 + 0x20;
      } while ((longlong)uVar33 < (longlong)iVar27);
    }
    iVar29 = (int)uVar33;
    auVar126 = auVar196;
    if (iVar29 < param_9) {
      auVar19._0_4_ =
           iVar29 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar19._4_4_ = iVar29 + _UNK_150b50ae4;
      auVar19._8_4_ = iVar29 + _UNK_150b50ae8;
      auVar19._12_4_ = iVar29 + _UNK_150b50aec;
      auVar19._16_4_ = iVar29 + _UNK_150b50af0;
      auVar19._20_4_ = iVar29 + _UNK_150b50af4;
      auVar19._24_4_ = iVar29 + _UNK_150b50af8;
      auVar19._28_4_ = iVar29 + _UNK_150b50afc;
      auVar60._4_4_ = param_9;
      auVar60._0_4_ = param_9;
      auVar60._8_4_ = param_9;
      auVar60._12_4_ = param_9;
      auVar60._16_4_ = param_9;
      auVar60._20_4_ = param_9;
      auVar60._24_4_ = param_9;
      auVar60._28_4_ = param_9;
      auVar222 = vpcmpgtd_avx2(auVar60,auVar19);
      auVar114 = vmaskmovps_avx(auVar222,*(undefined1 (*) [32])(param_7 + iVar29 * 4));
      auVar193 = vcmpps_avx(auVar114,ZEXT1232(ZEXT812(0)),0xc);
      auVar193 = auVar193 & auVar222;
      if ((((((((SUB321(auVar193 >> 0x1f,0) & 1) != 0 || (SUB321(auVar193 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar193 >> 0x5f,0) & 1) != 0) || SUB321(auVar193 >> 0x7f,0) != '\0') ||
            (SUB321(auVar193 >> 0x9f,0) & 1) != 0) || SUB321(auVar193 >> 0xbf,0) != '\0') ||
          (SUB321(auVar193 >> 0xdf,0) & 1) != 0) || auVar193[0x1f] < '\0') {
        auVar193 = vcmpps_avx(auVar114,ZEXT1232(ZEXT812(0)),8);
        auVar54._0_4_ = auVar193._0_4_ & auVar222._0_4_;
        auVar54._4_4_ = auVar193._4_4_ & auVar222._4_4_;
        auVar54._8_4_ = auVar193._8_4_ & auVar222._8_4_;
        auVar54._12_4_ = auVar193._12_4_ & auVar222._12_4_;
        auVar61._16_4_ = auVar193._16_4_ & auVar222._16_4_;
        auVar61._0_16_ = auVar54;
        auVar61._20_4_ = auVar193._20_4_ & auVar222._20_4_;
        auVar61._24_4_ = auVar193._24_4_ & auVar222._24_4_;
        auVar61._28_4_ = auVar193._28_4_ & auVar222._28_4_;
        uVar24 = vmovmskps_avx(auVar61);
        uVar31 = vmovmskps_avx(auVar222);
        if ((char)uVar24 != (char)uVar31) {
          auVar55 = vpackssdw_avx(auVar54,auVar61._16_16_);
          auVar88 = vpackssdw_avx(auVar222._0_16_,auVar222._16_16_);
          auVar55 = auVar55 ^ auVar88;
          lVar25 = (longlong)iVar29;
          pauVar28 = (undefined1 (*) [32])(param_4 + lVar25 * 0xc);
          auVar88 = vpacksswb_avx(auVar55,auVar55);
          auVar193 = vpmovsxwd_avx2(auVar55);
          if ((byte)(SUB161(auVar88 >> 7,0) & 1 | (SUB161(auVar88 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar88 >> 0x17,0) & 1) << 2 | (SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar88 >> 0x27,0) & 1) << 4 | (SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar88 >> 0x37,0) & 1) << 6 | SUB161(auVar88 >> 0x3f,0) << 7) == 0xff)
          {
            auVar114 = pauVar28[1];
            auVar222 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                    ,auVar114);
            auVar48 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                   ,*pauVar28);
            auVar222 = vblendps_avx(auVar48,auVar222,0x88);
            auVar48 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                   ,auVar114);
            auVar43 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,pauVar28[2]);
            auVar48 = vblendps_avx(auVar43,auVar48,0x13);
            auVar77._16_16_ = auVar48._0_16_;
            auVar77._0_16_ = auVar222._0_16_;
            auVar93 = vperm2f128_avx(auVar222,auVar48,0x31);
            auVar114 = vblendps_avx(auVar114,*pauVar28,0x24);
            auVar114 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar114);
            auVar222 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar28[2]);
            auVar43 = vblendps_avx(auVar114,auVar222,0xe0);
            auVar114 = *(undefined1 (*) [32])(param_5 + lVar25 * 0xc);
            auVar222 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar25 * 0xc);
            auVar48 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar25 * 0xc);
            auVar158 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                    ,auVar222);
            auVar161 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,auVar114);
            auVar158 = vblendps_avx(auVar161,auVar158,0x88);
            auVar161 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar222);
            auVar230 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                    ,auVar48);
            auVar161 = vblendps_avx(auVar230,auVar161,0x13);
            auVar147._16_16_ = auVar161._0_16_;
            auVar147._0_16_ = auVar158._0_16_;
            auVar158 = vperm2f128_avx(auVar158,auVar161,0x31);
            auVar114 = vblendps_avx(auVar222,auVar114,0x24);
            auVar114 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar114);
            auVar222 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,auVar48);
            auVar114 = vblendps_avx(auVar114,auVar222,0xe0);
          }
          else {
            auVar77 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar193);
            auVar93 = vgatherdps(ZEXT832(0) << 0x20,auVar193);
            auVar43 = vgatherdps(ZEXT832(0),auVar193);
            auVar147 = vgatherdps(ZEXT832(0),auVar193);
            auVar158 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar193);
            auVar114 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar193);
          }
          auVar222 = vmaskmovps_avx(auVar193,*(undefined1 (*) [32])(param_6 + iVar29 * 4));
          fVar122 = auVar222._0_4_;
          auVar78._0_4_ = fVar122 * auVar77._0_4_ + (float)local_680._0_4_;
          fVar53 = auVar222._4_4_;
          auVar78._4_4_ = fVar53 * auVar77._4_4_ + (float)local_680._4_4_;
          fVar87 = auVar222._8_4_;
          auVar78._8_4_ = fVar87 * auVar77._8_4_ + fStack_678;
          fVar142 = auVar222._12_4_;
          auVar78._12_4_ = fVar142 * auVar77._12_4_ + fStack_674;
          fVar143 = auVar222._16_4_;
          auVar78._16_4_ = fVar143 * auVar77._16_4_ + fStack_670;
          fVar144 = auVar222._20_4_;
          auVar78._20_4_ = fVar144 * auVar77._20_4_ + fStack_66c;
          fVar123 = auVar222._24_4_;
          auVar78._24_4_ = fVar123 * auVar77._24_4_ + fStack_668;
          fVar107 = auVar222._28_4_;
          auVar78._28_4_ = fVar107 * auVar77._28_4_ + fStack_664;
          auVar94._0_4_ = fVar122 * auVar93._0_4_ + (float)local_660._0_4_;
          auVar94._4_4_ = fVar53 * auVar93._4_4_ + (float)local_660._4_4_;
          auVar94._8_4_ = fVar87 * auVar93._8_4_ + fStack_658;
          auVar94._12_4_ = fVar142 * auVar93._12_4_ + fStack_654;
          auVar94._16_4_ = fVar143 * auVar93._16_4_ + fStack_650;
          auVar94._20_4_ = fVar144 * auVar93._20_4_ + fStack_64c;
          auVar94._24_4_ = fVar123 * auVar93._24_4_ + fStack_648;
          auVar94._28_4_ = fVar107 * auVar93._28_4_ + fStack_644;
          auVar44._0_4_ = fVar122 * auVar43._0_4_ + (float)local_640._0_4_;
          auVar44._4_4_ = fVar53 * auVar43._4_4_ + (float)local_640._4_4_;
          auVar44._8_4_ = fVar87 * auVar43._8_4_ + fStack_638;
          auVar44._12_4_ = fVar142 * auVar43._12_4_ + fStack_634;
          auVar44._16_4_ = fVar143 * auVar43._16_4_ + fStack_630;
          auVar44._20_4_ = fVar144 * auVar43._20_4_ + fStack_62c;
          auVar44._24_4_ = fVar123 * auVar43._24_4_ + fStack_628;
          auVar44._28_4_ = fVar107 * auVar43._28_4_ + fStack_624;
          _local_680 = vmaskmovps_avx(auVar193,auVar78);
          _local_660 = vmaskmovps_avx(auVar193,auVar94);
          _local_640 = vmaskmovps_avx(auVar193,auVar44);
          auVar149._0_4_ = fVar122 * auVar147._0_4_ + (float)local_6e0._0_4_;
          auVar149._4_4_ = fVar53 * auVar147._4_4_ + (float)local_6e0._4_4_;
          auVar149._8_4_ = fVar87 * auVar147._8_4_ + fStack_6d8;
          auVar149._12_4_ = fVar142 * auVar147._12_4_ + fStack_6d4;
          auVar149._16_4_ = fVar143 * auVar147._16_4_ + fStack_6d0;
          auVar149._20_4_ = fVar144 * auVar147._20_4_ + fStack_6cc;
          auVar149._24_4_ = fVar123 * auVar147._24_4_ + fStack_6c8;
          auVar149._28_4_ = fVar107 * auVar147._28_4_ + fStack_6c4;
          auVar159._0_4_ = fVar122 * auVar158._0_4_ + (float)local_6c0._0_4_;
          auVar159._4_4_ = fVar53 * auVar158._4_4_ + (float)local_6c0._4_4_;
          auVar159._8_4_ = fVar87 * auVar158._8_4_ + fStack_6b8;
          auVar159._12_4_ = fVar142 * auVar158._12_4_ + fStack_6b4;
          auVar159._16_4_ = fVar143 * auVar158._16_4_ + fStack_6b0;
          auVar159._20_4_ = fVar144 * auVar158._20_4_ + fStack_6ac;
          auVar159._24_4_ = fVar123 * auVar158._24_4_ + fStack_6a8;
          auVar159._28_4_ = fVar107 * auVar158._28_4_ + fStack_6a4;
          auVar115._0_4_ = fVar122 * auVar114._0_4_ + (float)local_6a0._0_4_;
          auVar115._4_4_ = fVar53 * auVar114._4_4_ + (float)local_6a0._4_4_;
          auVar115._8_4_ = fVar87 * auVar114._8_4_ + fStack_698;
          auVar115._12_4_ = fVar142 * auVar114._12_4_ + fStack_694;
          auVar115._16_4_ = fVar143 * auVar114._16_4_ + fStack_690;
          auVar115._20_4_ = fVar144 * auVar114._20_4_ + fStack_68c;
          auVar115._24_4_ = fVar123 * auVar114._24_4_ + fStack_688;
          auVar115._28_4_ = fVar107 * auVar114._28_4_ + fStack_684;
          _local_6e0 = vmaskmovps_avx(auVar193,auVar149);
          _local_6c0 = vmaskmovps_avx(auVar193,auVar159);
          _local_6a0 = vmaskmovps_avx(auVar193,auVar115);
          auVar45._4_4_ = __real_80000000;
          auVar45._0_4_ = __real_80000000;
          auVar45._8_4_ = __real_80000000;
          auVar45._12_4_ = __real_80000000;
          auVar45._16_4_ = __real_80000000;
          auVar45._20_4_ = __real_80000000;
          auVar45._24_4_ = __real_80000000;
          auVar45._28_4_ = __real_80000000;
          auVar193 = vblendvps_avx(auVar45,auVar222,auVar193);
          auVar126._0_4_ = auVar196._0_4_ + auVar193._0_4_;
          auVar126._4_4_ = auVar196._4_4_ + auVar193._4_4_;
          auVar126._8_4_ = auVar196._8_4_ + auVar193._8_4_;
          auVar126._12_4_ = auVar196._12_4_ + auVar193._12_4_;
          auVar126._16_4_ = auVar196._16_4_ + auVar193._16_4_;
          auVar126._20_4_ = auVar196._20_4_ + auVar193._20_4_;
          auVar126._24_4_ = auVar196._24_4_ + auVar193._24_4_;
          auVar126._28_4_ = auVar196._28_4_ + auVar193._28_4_;
        }
      }
    }
    _local_740 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar222 = vpcmpeqd_avx2(_local_740,auVar59);
    auVar196 = vpandn_avx2(auVar222,_local_680);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar193 = vpandn_avx2(auVar222,_local_660);
    auVar193 = vhaddps_avx(auVar193,auVar193);
    auVar193 = vhaddps_avx(auVar193,auVar193);
    auVar114 = vpandn_avx2(auVar222,_local_640);
    auVar114 = vhaddps_avx(auVar114,auVar114);
    fVar122 = auVar196._0_4_ + auVar196._16_4_;
    auVar141 = ZEXT464((uint)fVar122);
    auVar196 = vhaddps_avx(auVar114,auVar114);
    local_880 = auVar193._0_4_ + auVar193._16_4_;
    *param_1 = fVar122;
    param_1[1] = local_880;
    auVar193 = vpandn_avx2(auVar222,_local_6e0);
    auVar193 = vhaddps_avx(auVar193,auVar193);
    local_870 = auVar196._0_4_ + auVar196._16_4_;
    auVar196 = vhaddps_avx(auVar193,auVar193);
    param_1[2] = local_870;
    auVar193 = vpandn_avx2(auVar222,_local_6c0);
    auVar193 = vhaddps_avx(auVar193,auVar193);
    auVar193 = vhaddps_avx(auVar193,auVar193);
    fVar53 = auVar196._16_4_ + auVar196._0_4_;
    auVar196 = vpandn_avx2(auVar222,_local_6a0);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    fVar87 = auVar193._16_4_ + auVar193._0_4_;
    auVar196 = vhaddps_avx(auVar196,auVar196);
    fVar142 = auVar196._0_4_ + auVar196._16_4_;
    *param_2 = fVar53;
    param_2[1] = fVar87;
    param_2[2] = fVar142;
    auVar196 = vpandn_avx2(auVar222,auVar126);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    fVar143 = auVar196._0_4_ + auVar196._16_4_;
    if ((fVar143 != 0.0) || (NAN(fVar143))) {
      auVar88 = vinsertps_avx(ZEXT416((uint)fVar122),ZEXT416((uint)local_880),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)local_870),0x20);
      auVar34._4_4_ = fVar143;
      auVar34._0_4_ = fVar143;
      auVar34._8_4_ = fVar143;
      auVar34._12_4_ = fVar143;
      auVar88 = vdivps_avx(auVar88,auVar34);
      auVar141 = ZEXT1664(auVar88);
      auVar55 = vmovshdup_avx(auVar88);
      *param_1 = auVar88._0_4_;
      local_880 = auVar55._0_4_;
      param_1[1] = local_880;
      auVar88 = vshufpd_avx(auVar88,auVar88,1);
      local_870 = auVar88._0_4_;
      param_1[2] = local_870;
      auVar88 = vinsertps_avx(ZEXT416((uint)fVar53),ZEXT416((uint)fVar87),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar142),0x20);
      auVar88 = vdivps_avx(auVar88,auVar34);
      *param_2 = auVar88._0_4_;
      fVar122 = (float)vextractps_avx(auVar88,1);
      param_2[1] = fVar122;
      fVar122 = (float)vextractps_avx(auVar88,2);
      param_2[2] = fVar122;
    }
    uVar24 = auVar141._0_4_;
    local_840._4_4_ = __real_3f800000;
    local_840._0_4_ = __real_3f800000;
    local_840._8_4_ = __real_3f800000;
    local_840._12_4_ = __real_3f800000;
    local_840._16_4_ = __real_3f800000;
    local_840._20_4_ = __real_3f800000;
    local_840._24_4_ = __real_3f800000;
    local_840._28_4_ = __real_3f800000;
    local_320._4_4_ = __real_3f800000;
    local_320._0_4_ = __real_3f800000;
    local_320._8_4_ = __real_3f800000;
    local_320._12_4_ = __real_3f800000;
    local_320._16_4_ = __real_3f800000;
    local_320._20_4_ = __real_3f800000;
    local_320._24_4_ = __real_3f800000;
    local_320._28_4_ = __real_3f800000;
    _local_720 = _local_740;
    _local_700 = _local_740;
    _local_500 = _local_740;
    _local_4e0 = _local_740;
    _local_4c0 = _local_740;
    local_4a0 = _local_740;
    _local_480 = _local_740;
    _local_460 = _local_740;
    _local_440 = _local_740;
    local_420 = _local_740;
    _local_400 = _local_740;
    _local_3e0 = _local_740;
    _local_3c0 = _local_740;
    local_3a0 = _local_740;
    local_380 = _local_740;
    local_360 = _local_740;
    local_340 = _local_740;
    if ((int)param_8 < iVar27) {
      lVar25 = (longlong)(int)param_8;
      pauVar28 = (undefined1 (*) [32])(param_5 + lVar25 * 0xc);
      pauVar32 = (undefined1 (*) [32])(lVar25 * 0xc + param_4);
      iVar29 = param_8 << 2;
      do {
        auVar196 = *(undefined1 (*) [32])(param_7 + iVar29);
        auVar114 = ZEXT1232(ZEXT812(0));
        auVar193 = vcmpps_avx(auVar196,auVar114,8);
        iVar23 = vmovmskps_avx(auVar193);
        if ((iVar23 != 0xff) && ((char)iVar23 != -1)) {
          auVar196 = vcmpps_avx(auVar196,auVar114,0xc);
          auVar88 = vpackssdw_avx(auVar196._0_16_,auVar196._16_16_);
          auVar196 = vpmovsxwd_avx2(auVar88);
          if ((char)iVar23 == '\0') {
            auVar193 = pauVar32[1];
            auVar222 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                    ,auVar193);
            auVar48 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                   ,*pauVar32);
            auVar222 = vblendps_avx(auVar48,auVar222,0x88);
            auVar48 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                   ,auVar193);
            auVar43 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,pauVar32[2]);
            auVar48 = vblendps_avx(auVar43,auVar48,0x13);
            auVar46._16_16_ = auVar48._0_16_;
            auVar46._0_16_ = auVar222._0_16_;
            auVar48 = vperm2f128_avx(auVar222,auVar48,0x31);
            auVar193 = vblendps_avx(auVar193,*pauVar32,0x24);
            auVar193 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar193);
            auVar222 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar32[2]);
            auVar193 = vblendps_avx(auVar193,auVar222,0xe0);
            auVar222 = pauVar28[1];
            auVar43 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                   ,auVar222);
            auVar158 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,*pauVar28);
            auVar43 = vblendps_avx(auVar158,auVar43,0x88);
            auVar158 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar222);
            auVar161 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                    ,pauVar28[2]);
            auVar141 = ZEXT1664(auVar141._0_16_);
            auVar158 = vblendps_avx(auVar161,auVar158,0x13);
            auVar189._16_16_ = auVar158._0_16_;
            auVar189._0_16_ = auVar43._0_16_;
            auVar43 = vperm2f128_avx(auVar43,auVar158,0x31);
            auVar222 = vblendps_avx(auVar222,*pauVar28,0x24);
            auVar222 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar222);
            auVar158 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar28[2]);
            auVar222 = vblendps_avx(auVar222,auVar158,0xe0);
          }
          else {
            auVar46 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar196);
            auVar48 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar193 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar189 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar222 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
          }
          auVar161 = vmaskmovps_avx(auVar196,*(undefined1 (*) [32])(param_6 + iVar29));
          uVar24 = auVar141._0_4_;
          auVar127._4_4_ = uVar24;
          auVar127._0_4_ = uVar24;
          auVar127._8_4_ = uVar24;
          auVar127._12_4_ = uVar24;
          auVar127._16_4_ = uVar24;
          auVar127._20_4_ = uVar24;
          auVar127._24_4_ = uVar24;
          auVar127._28_4_ = uVar24;
          auVar158 = vsubps_avx(auVar46,auVar127);
          auVar128._4_4_ = local_880;
          auVar128._0_4_ = local_880;
          auVar128._8_4_ = local_880;
          auVar128._12_4_ = local_880;
          auVar128._16_4_ = local_880;
          auVar128._20_4_ = local_880;
          auVar128._24_4_ = local_880;
          auVar128._28_4_ = local_880;
          auVar48 = vsubps_avx(auVar48,auVar128);
          auVar129._4_4_ = local_870;
          auVar129._0_4_ = local_870;
          auVar129._8_4_ = local_870;
          auVar129._12_4_ = local_870;
          auVar129._16_4_ = local_870;
          auVar129._20_4_ = local_870;
          auVar129._24_4_ = local_870;
          auVar129._28_4_ = local_870;
          auVar193 = vsubps_avx(auVar193,auVar129);
          fVar122 = auVar161._0_4_;
          fVar165 = auVar189._0_4_ * fVar122;
          fVar143 = auVar161._4_4_;
          fVar173 = auVar189._4_4_ * fVar143;
          fVar1 = auVar161._8_4_;
          fVar174 = auVar189._8_4_ * fVar1;
          fVar180 = auVar161._12_4_;
          fVar175 = auVar189._12_4_ * fVar180;
          fVar3 = auVar161._16_4_;
          fVar176 = auVar189._16_4_ * fVar3;
          fVar7 = auVar161._20_4_;
          fVar177 = auVar189._20_4_ * fVar7;
          fVar11 = auVar161._24_4_;
          fVar178 = auVar189._24_4_ * fVar11;
          fVar15 = auVar161._28_4_;
          fVar179 = auVar189._28_4_ * fVar15;
          fVar187 = auVar43._0_4_ * fVar122;
          fVar198 = auVar43._4_4_ * fVar143;
          fVar199 = auVar43._8_4_ * fVar1;
          fVar200 = auVar43._12_4_ * fVar180;
          fVar201 = auVar43._16_4_ * fVar3;
          fVar202 = auVar43._20_4_ * fVar7;
          fVar203 = auVar43._24_4_ * fVar11;
          fVar204 = auVar43._28_4_ * fVar15;
          fVar205 = auVar222._0_4_ * fVar122;
          fVar213 = auVar222._4_4_ * fVar143;
          fVar214 = auVar222._8_4_ * fVar1;
          fVar215 = auVar222._12_4_ * fVar180;
          fVar216 = auVar222._16_4_ * fVar3;
          fVar217 = auVar222._20_4_ * fVar7;
          fVar218 = auVar222._24_4_ * fVar11;
          fVar219 = auVar222._28_4_ * fVar15;
          fVar53 = auVar48._0_4_;
          fVar144 = auVar48._4_4_;
          fVar2 = auVar48._8_4_;
          fVar184 = auVar48._12_4_;
          fVar4 = auVar48._16_4_;
          fVar8 = auVar48._20_4_;
          fVar12 = auVar48._24_4_;
          fVar16 = auVar48._28_4_;
          fVar87 = auVar193._0_4_;
          fVar123 = auVar193._4_4_;
          fVar108 = auVar193._8_4_;
          fVar185 = auVar193._12_4_;
          fVar5 = auVar193._16_4_;
          fVar9 = auVar193._20_4_;
          fVar13 = auVar193._24_4_;
          fVar17 = auVar193._28_4_;
          fVar142 = auVar158._0_4_;
          fVar107 = auVar158._4_4_;
          fVar109 = auVar158._8_4_;
          fVar186 = auVar158._12_4_;
          fVar6 = auVar158._16_4_;
          fVar10 = auVar158._20_4_;
          fVar14 = auVar158._24_4_;
          fVar18 = auVar158._28_4_;
          auVar166._0_4_ = (fVar53 * fVar205 - fVar187 * fVar87) + (float)local_740._0_4_;
          auVar166._4_4_ = (fVar144 * fVar213 - fVar198 * fVar123) + (float)local_740._4_4_;
          auVar166._8_4_ = (fVar2 * fVar214 - fVar199 * fVar108) + fStack_738;
          auVar166._12_4_ = (fVar184 * fVar215 - fVar200 * fVar185) + fStack_734;
          auVar166._16_4_ = (fVar4 * fVar216 - fVar201 * fVar5) + fStack_730;
          auVar166._20_4_ = (fVar8 * fVar217 - fVar202 * fVar9) + fStack_72c;
          auVar166._24_4_ = (fVar12 * fVar218 - fVar203 * fVar13) + fStack_728;
          auVar166._28_4_ = (fVar16 * fVar219 - fVar204 * fVar17) + fStack_724;
          auVar190._0_4_ = (fVar87 * fVar165 - fVar205 * fVar142) + (float)local_720._0_4_;
          auVar190._4_4_ = (fVar123 * fVar173 - fVar213 * fVar107) + (float)local_720._4_4_;
          auVar190._8_4_ = (fVar108 * fVar174 - fVar214 * fVar109) + fStack_718;
          auVar190._12_4_ = (fVar185 * fVar175 - fVar215 * fVar186) + fStack_714;
          auVar190._16_4_ = (fVar5 * fVar176 - fVar216 * fVar6) + fStack_710;
          auVar190._20_4_ = (fVar9 * fVar177 - fVar217 * fVar10) + fStack_70c;
          auVar190._24_4_ = (fVar13 * fVar178 - fVar218 * fVar14) + fStack_708;
          auVar190._28_4_ = (fVar17 * fVar179 - fVar219 * fVar18) + fStack_704;
          auVar206._0_4_ = (fVar142 * fVar187 - fVar165 * fVar53) + (float)local_700._0_4_;
          auVar206._4_4_ = (fVar107 * fVar198 - fVar173 * fVar144) + (float)local_700._4_4_;
          auVar206._8_4_ = (fVar109 * fVar199 - fVar174 * fVar2) + fStack_6f8;
          auVar206._12_4_ = (fVar186 * fVar200 - fVar175 * fVar184) + fStack_6f4;
          auVar206._16_4_ = (fVar6 * fVar201 - fVar176 * fVar4) + fStack_6f0;
          auVar206._20_4_ = (fVar10 * fVar202 - fVar177 * fVar8) + fStack_6ec;
          auVar206._24_4_ = (fVar14 * fVar203 - fVar178 * fVar12) + fStack_6e8;
          auVar206._28_4_ = (fVar18 * fVar204 - fVar179 * fVar16) + fStack_6e4;
          _local_740 = vmaskmovps_avx(auVar196,auVar166);
          _local_720 = vmaskmovps_avx(auVar196,auVar190);
          _local_700 = vmaskmovps_avx(auVar196,auVar206);
          auVar167._0_4_ = fVar87 * 0.0;
          auVar167._4_4_ = fVar123 * 0.0;
          auVar167._8_4_ = fVar108 * 0.0;
          auVar167._12_4_ = fVar185 * 0.0;
          auVar167._16_4_ = fVar5 * 0.0;
          auVar167._20_4_ = fVar9 * 0.0;
          auVar167._24_4_ = fVar13 * 0.0;
          auVar167._28_4_ = fVar17 * 0.0;
          auVar191._0_4_ = fVar53 * 0.0;
          auVar191._4_4_ = fVar144 * 0.0;
          auVar191._8_4_ = fVar2 * 0.0;
          auVar191._12_4_ = fVar184 * 0.0;
          auVar191._16_4_ = fVar4 * 0.0;
          auVar191._20_4_ = fVar8 * 0.0;
          auVar191._24_4_ = fVar12 * 0.0;
          auVar191._28_4_ = fVar16 * 0.0;
          auVar193 = vsubps_avx(auVar167,auVar167);
          auVar130._0_4_ = -(fVar142 * fVar87) + auVar191._0_4_;
          auVar130._4_4_ = -(fVar107 * fVar123) + auVar191._4_4_;
          auVar130._8_4_ = -(fVar109 * fVar108) + auVar191._8_4_;
          auVar130._12_4_ = -(fVar186 * fVar185) + auVar191._12_4_;
          auVar130._16_4_ = -(fVar6 * fVar5) + auVar191._16_4_;
          auVar130._20_4_ = -(fVar10 * fVar9) + auVar191._20_4_;
          auVar130._24_4_ = -(fVar14 * fVar13) + auVar191._24_4_;
          auVar130._28_4_ = -(fVar18 * fVar17) + auVar191._28_4_;
          auVar222 = vsubps_avx(auVar130,auVar191);
          fVar187 = fVar122 * (-(fVar142 * fVar53) + auVar193._0_4_);
          fVar198 = fVar143 * (-(fVar107 * fVar144) + auVar193._4_4_);
          fVar199 = fVar1 * (-(fVar109 * fVar2) + auVar193._8_4_);
          fVar200 = fVar180 * (-(fVar186 * fVar184) + auVar193._12_4_);
          fVar201 = fVar3 * (-(fVar6 * fVar4) + auVar193._16_4_);
          fVar202 = fVar7 * (-(fVar10 * fVar8) + auVar193._20_4_);
          fVar203 = fVar11 * (-(fVar14 * fVar12) + auVar193._24_4_);
          fVar204 = fVar15 * (-(fVar18 * fVar16) + auVar193._28_4_);
          fVar165 = fVar122 * auVar222._0_4_;
          fVar173 = fVar143 * auVar222._4_4_;
          fVar174 = fVar1 * auVar222._8_4_;
          fVar175 = fVar180 * auVar222._12_4_;
          fVar176 = fVar3 * auVar222._16_4_;
          fVar177 = fVar7 * auVar222._20_4_;
          fVar178 = fVar11 * auVar222._24_4_;
          fVar179 = fVar15 * auVar222._28_4_;
          fVar205 = fVar122 * (fVar142 * 0.0 + (-(fVar142 * 0.0) - fVar53 * fVar87));
          fVar213 = fVar143 * (fVar107 * 0.0 + (-(fVar107 * 0.0) - fVar144 * fVar123));
          fVar214 = fVar1 * (fVar109 * 0.0 + (-(fVar109 * 0.0) - fVar2 * fVar108));
          fVar215 = fVar180 * (fVar186 * 0.0 + (-(fVar186 * 0.0) - fVar184 * fVar185));
          fVar216 = fVar3 * (fVar6 * 0.0 + (-(fVar6 * 0.0) - fVar4 * fVar5));
          fVar217 = fVar7 * (fVar10 * 0.0 + (-(fVar10 * 0.0) - fVar8 * fVar9));
          fVar218 = fVar11 * (fVar14 * 0.0 + (-(fVar14 * 0.0) - fVar12 * fVar13));
          fVar219 = fVar15 * (fVar18 * 0.0 + (-(fVar18 * 0.0) - fVar16 * fVar17));
          auVar231._0_4_ = fVar122 * (fVar53 * fVar53 + fVar87 * fVar87) + (float)local_500._0_4_;
          auVar231._4_4_ =
               fVar143 * (fVar144 * fVar144 + fVar123 * fVar123) + (float)local_500._4_4_;
          auVar231._8_4_ = fVar1 * (fVar2 * fVar2 + fVar108 * fVar108) + fStack_4f8;
          auVar231._12_4_ = fVar180 * (fVar184 * fVar184 + fVar185 * fVar185) + fStack_4f4;
          auVar231._16_4_ = fVar3 * (fVar4 * fVar4 + fVar5 * fVar5) + fStack_4f0;
          auVar231._20_4_ = fVar7 * (fVar8 * fVar8 + fVar9 * fVar9) + fStack_4ec;
          auVar231._24_4_ = fVar11 * (fVar12 * fVar12 + fVar13 * fVar13) + fStack_4e8;
          auVar231._28_4_ = fVar15 * (fVar16 * fVar16 + fVar17 * fVar17) + fStack_4e4;
          auVar207._0_4_ = fVar187 + (float)local_4e0._0_4_;
          auVar207._4_4_ = fVar198 + (float)local_4e0._4_4_;
          auVar207._8_4_ = fVar199 + fStack_4d8;
          auVar207._12_4_ = fVar200 + fStack_4d4;
          auVar207._16_4_ = fVar201 + fStack_4d0;
          auVar207._20_4_ = fVar202 + fStack_4cc;
          auVar207._24_4_ = fVar203 + fStack_4c8;
          auVar207._28_4_ = fVar204 + fStack_4c4;
          auVar223._0_4_ = fVar165 + (float)local_4c0._0_4_;
          auVar223._4_4_ = fVar173 + (float)local_4c0._4_4_;
          auVar223._8_4_ = fVar174 + fStack_4b8;
          auVar223._12_4_ = fVar175 + fStack_4b4;
          auVar223._16_4_ = fVar176 + fStack_4b0;
          auVar223._20_4_ = fVar177 + fStack_4ac;
          auVar223._24_4_ = fVar178 + fStack_4a8;
          auVar223._28_4_ = fVar179 + fStack_4a4;
          auVar160._0_4_ = fVar187 + (float)local_480._0_4_;
          auVar160._4_4_ = fVar198 + (float)local_480._4_4_;
          auVar160._8_4_ = fVar199 + fStack_478;
          auVar160._12_4_ = fVar200 + fStack_474;
          auVar160._16_4_ = fVar201 + fStack_470;
          auVar160._20_4_ = fVar202 + fStack_46c;
          auVar160._24_4_ = fVar203 + fStack_468;
          auVar160._28_4_ = fVar204 + fStack_464;
          auVar192._0_4_ = fVar122 * (fVar87 * fVar87 + fVar142 * fVar142) + (float)local_460._0_4_;
          auVar192._4_4_ =
               fVar143 * (fVar123 * fVar123 + fVar107 * fVar107) + (float)local_460._4_4_;
          auVar192._8_4_ = fVar1 * (fVar108 * fVar108 + fVar109 * fVar109) + fStack_458;
          auVar192._12_4_ = fVar180 * (fVar185 * fVar185 + fVar186 * fVar186) + fStack_454;
          auVar192._16_4_ = fVar3 * (fVar5 * fVar5 + fVar6 * fVar6) + fStack_450;
          auVar192._20_4_ = fVar7 * (fVar9 * fVar9 + fVar10 * fVar10) + fStack_44c;
          auVar192._24_4_ = fVar11 * (fVar13 * fVar13 + fVar14 * fVar14) + fStack_448;
          auVar192._28_4_ = fVar15 * (fVar17 * fVar17 + fVar18 * fVar18) + fStack_444;
          auVar226._0_4_ = fVar205 + (float)local_440._0_4_;
          auVar226._4_4_ = fVar213 + (float)local_440._4_4_;
          auVar226._8_4_ = fVar214 + fStack_438;
          auVar226._12_4_ = fVar215 + fStack_434;
          auVar226._16_4_ = fVar216 + fStack_430;
          auVar226._20_4_ = fVar217 + fStack_42c;
          auVar226._24_4_ = fVar218 + fStack_428;
          auVar226._28_4_ = fVar219 + fStack_424;
          auVar131._0_4_ = fVar165 + (float)local_400._0_4_;
          auVar131._4_4_ = fVar173 + (float)local_400._4_4_;
          auVar131._8_4_ = fVar174 + fStack_3f8;
          auVar131._12_4_ = fVar175 + fStack_3f4;
          auVar131._16_4_ = fVar176 + fStack_3f0;
          auVar131._20_4_ = fVar177 + fStack_3ec;
          auVar131._24_4_ = fVar178 + fStack_3e8;
          auVar131._28_4_ = fVar179 + fStack_3e4;
          auVar168._0_4_ = fVar205 + (float)local_3e0._0_4_;
          auVar168._4_4_ = fVar213 + (float)local_3e0._4_4_;
          auVar168._8_4_ = fVar214 + fStack_3d8;
          auVar168._12_4_ = fVar215 + fStack_3d4;
          auVar168._16_4_ = fVar216 + fStack_3d0;
          auVar168._20_4_ = fVar217 + fStack_3cc;
          auVar168._24_4_ = fVar218 + fStack_3c8;
          auVar168._28_4_ = fVar219 + fStack_3c4;
          auVar47._0_4_ = fVar122 * (fVar53 * fVar53 + fVar142 * fVar142) + (float)local_3c0._0_4_;
          auVar47._4_4_ = fVar143 * (fVar144 * fVar144 + fVar107 * fVar107) + (float)local_3c0._4_4_
          ;
          auVar47._8_4_ = fVar1 * (fVar2 * fVar2 + fVar109 * fVar109) + fStack_3b8;
          auVar47._12_4_ = fVar180 * (fVar184 * fVar184 + fVar186 * fVar186) + fStack_3b4;
          auVar47._16_4_ = fVar3 * (fVar4 * fVar4 + fVar6 * fVar6) + fStack_3b0;
          auVar47._20_4_ = fVar7 * (fVar8 * fVar8 + fVar10 * fVar10) + fStack_3ac;
          auVar47._24_4_ = fVar11 * (fVar12 * fVar12 + fVar14 * fVar14) + fStack_3a8;
          auVar47._28_4_ = fVar15 * (fVar16 * fVar16 + fVar18 * fVar18) + fStack_3a4;
          _local_500 = vmaskmovps_avx(auVar196,auVar231);
          _local_4e0 = vmaskmovps_avx(auVar196,auVar207);
          _local_4c0 = vmaskmovps_avx(auVar196,auVar223);
          local_4a0 = vmaskmovps_avx(auVar196,auVar114);
          _local_480 = vmaskmovps_avx(auVar196,auVar160);
          _local_460 = vmaskmovps_avx(auVar196,auVar192);
          _local_440 = vmaskmovps_avx(auVar196,auVar226);
          local_420 = vmaskmovps_avx(auVar196,auVar114);
          _local_400 = vmaskmovps_avx(auVar196,auVar131);
          _local_3e0 = vmaskmovps_avx(auVar196,auVar168);
          _local_3c0 = vmaskmovps_avx(auVar196,auVar47);
          local_3a0 = vmaskmovps_avx(auVar196,auVar114);
          local_380 = vmaskmovps_avx(auVar196,auVar114);
          local_360 = vmaskmovps_avx(auVar196,auVar114);
          local_340 = vmaskmovps_avx(auVar196,auVar114);
          local_320 = vmaskmovps_avx(auVar196,local_840);
        }
        uVar24 = auVar141._0_4_;
        lVar25 = lVar25 + 8;
        pauVar28 = pauVar28 + 3;
        pauVar32 = pauVar32 + 3;
        iVar29 = iVar29 + 0x20;
      } while (lVar25 < iVar27);
      param_8 = (uint)lVar25;
    }
    if ((int)param_8 < param_9) {
      auVar20._0_4_ =
           param_8 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar20._4_4_ = param_8 + _UNK_150b50ae4;
      auVar20._8_4_ = param_8 + _UNK_150b50ae8;
      auVar20._12_4_ = param_8 + _UNK_150b50aec;
      auVar20._16_4_ = param_8 + _UNK_150b50af0;
      auVar20._20_4_ = param_8 + _UNK_150b50af4;
      auVar20._24_4_ = param_8 + _UNK_150b50af8;
      auVar20._28_4_ = param_8 + _UNK_150b50afc;
      auVar64._4_4_ = param_9;
      auVar64._0_4_ = param_9;
      auVar64._8_4_ = param_9;
      auVar64._12_4_ = param_9;
      auVar64._16_4_ = param_9;
      auVar64._20_4_ = param_9;
      auVar64._24_4_ = param_9;
      auVar64._28_4_ = param_9;
      auVar114 = vpcmpgtd_avx2(auVar64,auVar20);
      auVar193 = vmaskmovps_avx(auVar114,*(undefined1 (*) [32])(param_7 + (int)(param_8 * 4)));
      auVar196 = vcmpps_avx(auVar193,ZEXT432(0) << 0x20,0xc);
      auVar196 = auVar196 & auVar114;
      if ((((((((SUB321(auVar196 >> 0x1f,0) & 1) != 0 || (SUB321(auVar196 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar196 >> 0x5f,0) & 1) != 0) || SUB321(auVar196 >> 0x7f,0) != '\0') ||
            (SUB321(auVar196 >> 0x9f,0) & 1) != 0) || SUB321(auVar196 >> 0xbf,0) != '\0') ||
          (SUB321(auVar196 >> 0xdf,0) & 1) != 0) || auVar196[0x1f] < '\0') {
        auVar196 = vcmpps_avx(auVar193,ZEXT432(0) << 0x20,8);
        auVar56._0_4_ = auVar196._0_4_ & auVar114._0_4_;
        auVar56._4_4_ = auVar196._4_4_ & auVar114._4_4_;
        auVar56._8_4_ = auVar196._8_4_ & auVar114._8_4_;
        auVar56._12_4_ = auVar196._12_4_ & auVar114._12_4_;
        auVar65._16_4_ = auVar196._16_4_ & auVar114._16_4_;
        auVar65._0_16_ = auVar56;
        auVar65._20_4_ = auVar196._20_4_ & auVar114._20_4_;
        auVar65._24_4_ = auVar196._24_4_ & auVar114._24_4_;
        auVar65._28_4_ = auVar196._28_4_ & auVar114._28_4_;
        uVar31 = vmovmskps_avx(auVar65);
        uVar30 = vmovmskps_avx(auVar114);
        if ((char)uVar31 != (char)uVar30) {
          auVar55 = vpackssdw_avx(auVar56,auVar65._16_16_);
          auVar88 = vpackssdw_avx(auVar114._0_16_,auVar114._16_16_);
          auVar55 = auVar55 ^ auVar88;
          lVar25 = (longlong)(int)param_8;
          pauVar28 = (undefined1 (*) [32])(param_4 + lVar25 * 0xc);
          auVar88 = vpacksswb_avx(auVar55,auVar55);
          auVar196 = vpmovsxwd_avx2(auVar55);
          if ((byte)(SUB161(auVar88 >> 7,0) & 1 | (SUB161(auVar88 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar88 >> 0x17,0) & 1) << 2 | (SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar88 >> 0x27,0) & 1) << 4 | (SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar88 >> 0x37,0) & 1) << 6 | SUB161(auVar88 >> 0x3f,0) << 7) == 0xff)
          {
            auVar193 = pauVar28[1];
            auVar114 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                    ,auVar193);
            auVar222 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,*pauVar28);
            auVar114 = vblendps_avx(auVar222,auVar114,0x88);
            auVar222 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar193);
            auVar48 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,pauVar28[2]);
            auVar222 = vblendps_avx(auVar48,auVar222,0x13);
            auVar232._16_16_ = auVar222._0_16_;
            auVar232._0_16_ = auVar114._0_16_;
            auVar161 = vperm2f128_avx(auVar114,auVar222,0x31);
            auVar193 = vblendps_avx(auVar193,*pauVar28,0x24);
            auVar193 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar193);
            auVar114 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,pauVar28[2]);
            auVar48 = vblendps_avx(auVar193,auVar114,0xe0);
            auVar193 = *(undefined1 (*) [32])(param_5 + lVar25 * 0xc);
            auVar114 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar25 * 0xc);
            auVar222 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar25 * 0xc);
            auVar43 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                   ,auVar114);
            auVar158 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                    ,auVar193);
            auVar43 = vblendps_avx(auVar158,auVar43,0x88);
            auVar158 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                    ,auVar114);
            auVar93 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,auVar222);
            auVar158 = vblendps_avx(auVar93,auVar158,0x13);
            auVar208._16_16_ = auVar158._0_16_;
            auVar208._0_16_ = auVar43._0_16_;
            auVar43 = vperm2f128_avx(auVar43,auVar158,0x31);
            auVar193 = vblendps_avx(auVar114,auVar193,0x24);
            auVar193 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                    ,auVar193);
            auVar114 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                    ,auVar222);
            auVar193 = vblendps_avx(auVar193,auVar114,0xe0);
          }
          else {
            auVar232 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar196);
            auVar161 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar48 = vgatherdps(ZEXT832(0),auVar196);
            auVar208 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
            auVar193 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
          }
          auVar158 = vmaskmovps_avx(auVar196,*(undefined1 (*) [32])(param_6 + (int)(param_8 * 4)));
          auVar79._4_4_ = uVar24;
          auVar79._0_4_ = uVar24;
          auVar79._8_4_ = uVar24;
          auVar79._12_4_ = uVar24;
          auVar79._16_4_ = uVar24;
          auVar79._20_4_ = uVar24;
          auVar79._24_4_ = uVar24;
          auVar79._28_4_ = uVar24;
          auVar114 = vsubps_avx(auVar232,auVar79);
          auVar95._4_4_ = local_880;
          auVar95._0_4_ = local_880;
          auVar95._8_4_ = local_880;
          auVar95._12_4_ = local_880;
          auVar95._16_4_ = local_880;
          auVar95._20_4_ = local_880;
          auVar95._24_4_ = local_880;
          auVar95._28_4_ = local_880;
          auVar222 = vsubps_avx(auVar161,auVar95);
          auVar116._4_4_ = local_870;
          auVar116._0_4_ = local_870;
          auVar116._8_4_ = local_870;
          auVar116._12_4_ = local_870;
          auVar116._16_4_ = local_870;
          auVar116._20_4_ = local_870;
          auVar116._24_4_ = local_870;
          auVar116._28_4_ = local_870;
          auVar48 = vsubps_avx(auVar48,auVar116);
          fVar122 = auVar158._0_4_;
          fVar165 = auVar208._0_4_ * fVar122;
          fVar143 = auVar158._4_4_;
          fVar173 = auVar208._4_4_ * fVar143;
          fVar1 = auVar158._8_4_;
          fVar174 = auVar208._8_4_ * fVar1;
          fVar180 = auVar158._12_4_;
          fVar175 = auVar208._12_4_ * fVar180;
          fVar3 = auVar158._16_4_;
          fVar176 = auVar208._16_4_ * fVar3;
          fVar7 = auVar158._20_4_;
          fVar177 = auVar208._20_4_ * fVar7;
          fVar11 = auVar158._24_4_;
          fVar178 = auVar208._24_4_ * fVar11;
          fVar15 = auVar158._28_4_;
          fVar179 = auVar208._28_4_ * fVar15;
          fVar187 = auVar43._0_4_ * fVar122;
          fVar198 = auVar43._4_4_ * fVar143;
          fVar199 = auVar43._8_4_ * fVar1;
          fVar200 = auVar43._12_4_ * fVar180;
          fVar201 = auVar43._16_4_ * fVar3;
          fVar202 = auVar43._20_4_ * fVar7;
          fVar203 = auVar43._24_4_ * fVar11;
          fVar204 = auVar43._28_4_ * fVar15;
          fVar205 = auVar193._0_4_ * fVar122;
          fVar213 = auVar193._4_4_ * fVar143;
          fVar214 = auVar193._8_4_ * fVar1;
          fVar215 = auVar193._12_4_ * fVar180;
          fVar216 = auVar193._16_4_ * fVar3;
          fVar217 = auVar193._20_4_ * fVar7;
          fVar218 = auVar193._24_4_ * fVar11;
          fVar219 = auVar193._28_4_ * fVar15;
          fVar53 = auVar222._0_4_;
          fVar144 = auVar222._4_4_;
          fVar2 = auVar222._8_4_;
          fVar184 = auVar222._12_4_;
          fVar4 = auVar222._16_4_;
          fVar8 = auVar222._20_4_;
          fVar12 = auVar222._24_4_;
          fVar16 = auVar222._28_4_;
          fVar87 = auVar48._0_4_;
          fVar123 = auVar48._4_4_;
          fVar108 = auVar48._8_4_;
          fVar185 = auVar48._12_4_;
          fVar5 = auVar48._16_4_;
          fVar9 = auVar48._20_4_;
          fVar13 = auVar48._24_4_;
          fVar17 = auVar48._28_4_;
          fVar142 = auVar114._0_4_;
          fVar107 = auVar114._4_4_;
          fVar109 = auVar114._8_4_;
          fVar186 = auVar114._12_4_;
          fVar6 = auVar114._16_4_;
          fVar10 = auVar114._20_4_;
          fVar14 = auVar114._24_4_;
          fVar18 = auVar114._28_4_;
          auVar117._0_4_ = (fVar53 * fVar205 - fVar187 * fVar87) + (float)local_740._0_4_;
          auVar117._4_4_ = (fVar144 * fVar213 - fVar198 * fVar123) + (float)local_740._4_4_;
          auVar117._8_4_ = (fVar2 * fVar214 - fVar199 * fVar108) + fStack_738;
          auVar117._12_4_ = (fVar184 * fVar215 - fVar200 * fVar185) + fStack_734;
          auVar117._16_4_ = (fVar4 * fVar216 - fVar201 * fVar5) + fStack_730;
          auVar117._20_4_ = (fVar8 * fVar217 - fVar202 * fVar9) + fStack_72c;
          auVar117._24_4_ = (fVar12 * fVar218 - fVar203 * fVar13) + fStack_728;
          auVar117._28_4_ = (fVar16 * fVar219 - fVar204 * fVar17) + fStack_724;
          auVar132._0_4_ = (fVar87 * fVar165 - fVar205 * fVar142) + (float)local_720._0_4_;
          auVar132._4_4_ = (fVar123 * fVar173 - fVar213 * fVar107) + (float)local_720._4_4_;
          auVar132._8_4_ = (fVar108 * fVar174 - fVar214 * fVar109) + fStack_718;
          auVar132._12_4_ = (fVar185 * fVar175 - fVar215 * fVar186) + fStack_714;
          auVar132._16_4_ = (fVar5 * fVar176 - fVar216 * fVar6) + fStack_710;
          auVar132._20_4_ = (fVar9 * fVar177 - fVar217 * fVar10) + fStack_70c;
          auVar132._24_4_ = (fVar13 * fVar178 - fVar218 * fVar14) + fStack_708;
          auVar132._28_4_ = (fVar17 * fVar179 - fVar219 * fVar18) + fStack_704;
          auVar150._0_4_ = (fVar142 * fVar187 - fVar165 * fVar53) + (float)local_700._0_4_;
          auVar150._4_4_ = (fVar107 * fVar198 - fVar173 * fVar144) + (float)local_700._4_4_;
          auVar150._8_4_ = (fVar109 * fVar199 - fVar174 * fVar2) + fStack_6f8;
          auVar150._12_4_ = (fVar186 * fVar200 - fVar175 * fVar184) + fStack_6f4;
          auVar150._16_4_ = (fVar6 * fVar201 - fVar176 * fVar4) + fStack_6f0;
          auVar150._20_4_ = (fVar10 * fVar202 - fVar177 * fVar8) + fStack_6ec;
          auVar150._24_4_ = (fVar14 * fVar203 - fVar178 * fVar12) + fStack_6e8;
          auVar150._28_4_ = (fVar18 * fVar204 - fVar179 * fVar16) + fStack_6e4;
          _local_740 = vmaskmovps_avx(auVar196,auVar117);
          _local_720 = vmaskmovps_avx(auVar196,auVar132);
          _local_700 = vmaskmovps_avx(auVar196,auVar150);
          auVar118._0_4_ = fVar87 * 0.0;
          auVar118._4_4_ = fVar123 * 0.0;
          auVar118._8_4_ = fVar108 * 0.0;
          auVar118._12_4_ = fVar185 * 0.0;
          auVar118._16_4_ = fVar5 * 0.0;
          auVar118._20_4_ = fVar9 * 0.0;
          auVar118._24_4_ = fVar13 * 0.0;
          auVar118._28_4_ = fVar17 * 0.0;
          auVar133._0_4_ = fVar53 * 0.0;
          auVar133._4_4_ = fVar144 * 0.0;
          auVar133._8_4_ = fVar2 * 0.0;
          auVar133._12_4_ = fVar184 * 0.0;
          auVar133._16_4_ = fVar4 * 0.0;
          auVar133._20_4_ = fVar8 * 0.0;
          auVar133._24_4_ = fVar12 * 0.0;
          auVar133._28_4_ = fVar16 * 0.0;
          auVar193 = vsubps_avx(auVar118,auVar118);
          auVar49._0_4_ = -(fVar142 * fVar87) + auVar133._0_4_;
          auVar49._4_4_ = -(fVar107 * fVar123) + auVar133._4_4_;
          auVar49._8_4_ = -(fVar109 * fVar108) + auVar133._8_4_;
          auVar49._12_4_ = -(fVar186 * fVar185) + auVar133._12_4_;
          auVar49._16_4_ = -(fVar6 * fVar5) + auVar133._16_4_;
          auVar49._20_4_ = -(fVar10 * fVar9) + auVar133._20_4_;
          auVar49._24_4_ = -(fVar14 * fVar13) + auVar133._24_4_;
          auVar49._28_4_ = -(fVar18 * fVar17) + auVar133._28_4_;
          auVar114 = vsubps_avx(auVar49,auVar133);
          fVar187 = fVar122 * (-(fVar142 * fVar53) + auVar193._0_4_);
          fVar198 = fVar143 * (-(fVar107 * fVar144) + auVar193._4_4_);
          fVar199 = fVar1 * (-(fVar109 * fVar2) + auVar193._8_4_);
          fVar200 = fVar180 * (-(fVar186 * fVar184) + auVar193._12_4_);
          fVar201 = fVar3 * (-(fVar6 * fVar4) + auVar193._16_4_);
          fVar202 = fVar7 * (-(fVar10 * fVar8) + auVar193._20_4_);
          fVar203 = fVar11 * (-(fVar14 * fVar12) + auVar193._24_4_);
          fVar204 = fVar15 * (-(fVar18 * fVar16) + auVar193._28_4_);
          fVar165 = fVar122 * auVar114._0_4_;
          fVar173 = fVar143 * auVar114._4_4_;
          fVar174 = fVar1 * auVar114._8_4_;
          fVar175 = fVar180 * auVar114._12_4_;
          fVar176 = fVar3 * auVar114._16_4_;
          fVar177 = fVar7 * auVar114._20_4_;
          fVar178 = fVar11 * auVar114._24_4_;
          fVar179 = fVar15 * auVar114._28_4_;
          fVar205 = fVar122 * (fVar142 * 0.0 + (-(fVar142 * 0.0) - fVar53 * fVar87));
          fVar213 = fVar143 * (fVar107 * 0.0 + (-(fVar107 * 0.0) - fVar144 * fVar123));
          fVar214 = fVar1 * (fVar109 * 0.0 + (-(fVar109 * 0.0) - fVar2 * fVar108));
          fVar215 = fVar180 * (fVar186 * 0.0 + (-(fVar186 * 0.0) - fVar184 * fVar185));
          fVar216 = fVar3 * (fVar6 * 0.0 + (-(fVar6 * 0.0) - fVar4 * fVar5));
          fVar217 = fVar7 * (fVar10 * 0.0 + (-(fVar10 * 0.0) - fVar8 * fVar9));
          fVar218 = fVar11 * (fVar14 * 0.0 + (-(fVar14 * 0.0) - fVar12 * fVar13));
          fVar219 = fVar15 * (fVar18 * 0.0 + (-(fVar18 * 0.0) - fVar16 * fVar17));
          auVar209._0_4_ = fVar122 * (fVar53 * fVar53 + fVar87 * fVar87) + (float)local_500._0_4_;
          auVar209._4_4_ =
               fVar143 * (fVar144 * fVar144 + fVar123 * fVar123) + (float)local_500._4_4_;
          auVar209._8_4_ = fVar1 * (fVar2 * fVar2 + fVar108 * fVar108) + fStack_4f8;
          auVar209._12_4_ = fVar180 * (fVar184 * fVar184 + fVar185 * fVar185) + fStack_4f4;
          auVar209._16_4_ = fVar3 * (fVar4 * fVar4 + fVar5 * fVar5) + fStack_4f0;
          auVar209._20_4_ = fVar7 * (fVar8 * fVar8 + fVar9 * fVar9) + fStack_4ec;
          auVar209._24_4_ = fVar11 * (fVar12 * fVar12 + fVar13 * fVar13) + fStack_4e8;
          auVar209._28_4_ = fVar15 * (fVar16 * fVar16 + fVar17 * fVar17) + fStack_4e4;
          auVar151._0_4_ = fVar187 + (float)local_4e0._0_4_;
          auVar151._4_4_ = fVar198 + (float)local_4e0._4_4_;
          auVar151._8_4_ = fVar199 + fStack_4d8;
          auVar151._12_4_ = fVar200 + fStack_4d4;
          auVar151._16_4_ = fVar201 + fStack_4d0;
          auVar151._20_4_ = fVar202 + fStack_4cc;
          auVar151._24_4_ = fVar203 + fStack_4c8;
          auVar151._28_4_ = fVar204 + fStack_4c4;
          auVar162._0_4_ = fVar165 + (float)local_4c0._0_4_;
          auVar162._4_4_ = fVar173 + (float)local_4c0._4_4_;
          auVar162._8_4_ = fVar174 + fStack_4b8;
          auVar162._12_4_ = fVar175 + fStack_4b4;
          auVar162._16_4_ = fVar176 + fStack_4b0;
          auVar162._20_4_ = fVar177 + fStack_4ac;
          auVar162._24_4_ = fVar178 + fStack_4a8;
          auVar162._28_4_ = fVar179 + fStack_4a4;
          auVar96._0_4_ = fVar187 + (float)local_480._0_4_;
          auVar96._4_4_ = fVar198 + (float)local_480._4_4_;
          auVar96._8_4_ = fVar199 + fStack_478;
          auVar96._12_4_ = fVar200 + fStack_474;
          auVar96._16_4_ = fVar201 + fStack_470;
          auVar96._20_4_ = fVar202 + fStack_46c;
          auVar96._24_4_ = fVar203 + fStack_468;
          auVar96._28_4_ = fVar204 + fStack_464;
          auVar134._0_4_ = fVar122 * (fVar142 * fVar142 + fVar87 * fVar87) + (float)local_460._0_4_;
          auVar134._4_4_ =
               fVar143 * (fVar107 * fVar107 + fVar123 * fVar123) + (float)local_460._4_4_;
          auVar134._8_4_ = fVar1 * (fVar109 * fVar109 + fVar108 * fVar108) + fStack_458;
          auVar134._12_4_ = fVar180 * (fVar186 * fVar186 + fVar185 * fVar185) + fStack_454;
          auVar134._16_4_ = fVar3 * (fVar6 * fVar6 + fVar5 * fVar5) + fStack_450;
          auVar134._20_4_ = fVar7 * (fVar10 * fVar10 + fVar9 * fVar9) + fStack_44c;
          auVar134._24_4_ = fVar11 * (fVar14 * fVar14 + fVar13 * fVar13) + fStack_448;
          auVar134._28_4_ = fVar15 * (fVar18 * fVar18 + fVar17 * fVar17) + fStack_444;
          auVar194._0_4_ = fVar205 + (float)local_440._0_4_;
          auVar194._4_4_ = fVar213 + (float)local_440._4_4_;
          auVar194._8_4_ = fVar214 + fStack_438;
          auVar194._12_4_ = fVar215 + fStack_434;
          auVar194._16_4_ = fVar216 + fStack_430;
          auVar194._20_4_ = fVar217 + fStack_42c;
          auVar194._24_4_ = fVar218 + fStack_428;
          auVar194._28_4_ = fVar219 + fStack_424;
          auVar50._0_4_ = fVar165 + (float)local_400._0_4_;
          auVar50._4_4_ = fVar173 + (float)local_400._4_4_;
          auVar50._8_4_ = fVar174 + fStack_3f8;
          auVar50._12_4_ = fVar175 + fStack_3f4;
          auVar50._16_4_ = fVar176 + fStack_3f0;
          auVar50._20_4_ = fVar177 + fStack_3ec;
          auVar50._24_4_ = fVar178 + fStack_3e8;
          auVar50._28_4_ = fVar179 + fStack_3e4;
          auVar119._0_4_ = fVar205 + (float)local_3e0._0_4_;
          auVar119._4_4_ = fVar213 + (float)local_3e0._4_4_;
          auVar119._8_4_ = fVar214 + fStack_3d8;
          auVar119._12_4_ = fVar215 + fStack_3d4;
          auVar119._16_4_ = fVar216 + fStack_3d0;
          auVar119._20_4_ = fVar217 + fStack_3cc;
          auVar119._24_4_ = fVar218 + fStack_3c8;
          auVar119._28_4_ = fVar219 + fStack_3c4;
          auVar80._0_4_ = fVar122 * (fVar53 * fVar53 + fVar142 * fVar142) + (float)local_3c0._0_4_;
          auVar80._4_4_ = fVar143 * (fVar144 * fVar144 + fVar107 * fVar107) + (float)local_3c0._4_4_
          ;
          auVar80._8_4_ = fVar1 * (fVar2 * fVar2 + fVar109 * fVar109) + fStack_3b8;
          auVar80._12_4_ = fVar180 * (fVar184 * fVar184 + fVar186 * fVar186) + fStack_3b4;
          auVar80._16_4_ = fVar3 * (fVar4 * fVar4 + fVar6 * fVar6) + fStack_3b0;
          auVar80._20_4_ = fVar7 * (fVar8 * fVar8 + fVar10 * fVar10) + fStack_3ac;
          auVar80._24_4_ = fVar11 * (fVar12 * fVar12 + fVar14 * fVar14) + fStack_3a8;
          auVar80._28_4_ = fVar15 * (fVar16 * fVar16 + fVar18 * fVar18) + fStack_3a4;
          _local_500 = vmaskmovps_avx(auVar196,auVar209);
          _local_4e0 = vmaskmovps_avx(auVar196,auVar151);
          _local_4c0 = vmaskmovps_avx(auVar196,auVar162);
          auVar193 = ZEXT1232(ZEXT812(0));
          local_4a0 = vmaskmovps_avx(auVar196,auVar193);
          _local_480 = vmaskmovps_avx(auVar196,auVar96);
          _local_460 = vmaskmovps_avx(auVar196,auVar134);
          _local_440 = vmaskmovps_avx(auVar196,auVar194);
          local_420 = vmaskmovps_avx(auVar196,auVar193);
          _local_400 = vmaskmovps_avx(auVar196,auVar50);
          _local_3e0 = vmaskmovps_avx(auVar196,auVar119);
          _local_3c0 = vmaskmovps_avx(auVar196,auVar80);
          local_3a0 = vmaskmovps_avx(auVar196,auVar193);
          local_380 = vmaskmovps_avx(auVar196,auVar193);
          local_360 = vmaskmovps_avx(auVar196,auVar193);
          local_340 = vmaskmovps_avx(auVar196,auVar193);
          local_320 = vmaskmovps_avx(auVar196,local_840);
        }
      }
    }
    auVar93 = vpcmpeqd_avx2(ZEXT1232(ZEXT812(0)),auVar59);
    auVar59 = vpandn_avx2(auVar93,_local_500);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar196 = vpandn_avx2(auVar93,_local_4e0);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar193 = vpandn_avx2(auVar93,_local_4c0);
    auVar193 = vhaddps_avx(auVar193,auVar193);
    auVar193 = vhaddps_avx(auVar193,auVar193);
    auVar114 = vpandn_avx2(auVar93,local_4a0);
    auVar114 = vhaddps_avx(auVar114,auVar114);
    auVar114 = vhaddps_avx(auVar114,auVar114);
    auVar222 = vpandn_avx2(auVar93,_local_480);
    auVar222 = vhaddps_avx(auVar222,auVar222);
    auVar222 = vhaddps_avx(auVar222,auVar222);
    auVar48 = vpandn_avx2(auVar93,_local_460);
    auVar48 = vhaddps_avx(auVar48,auVar48);
    auVar48 = vhaddps_avx(auVar48,auVar48);
    auVar43 = vpandn_avx2(auVar93,_local_440);
    auVar43 = vhaddps_avx(auVar43,auVar43);
    auVar43 = vhaddps_avx(auVar43,auVar43);
    auVar158 = vpandn_avx2(auVar93,local_420);
    auVar158 = vhaddps_avx(auVar158,auVar158);
    auVar158 = vhaddps_avx(auVar158,auVar158);
    auVar161 = vpandn_avx2(auVar93,_local_400);
    auVar161 = vhaddps_avx(auVar161,auVar161);
    auVar161 = vhaddps_avx(auVar161,auVar161);
    auVar35 = ZEXT416((uint)(auVar59._16_4_ + auVar59._0_4_));
    auVar59 = vpandn_avx2(auVar93,_local_3e0);
    auVar57 = ZEXT416((uint)(auVar196._0_4_ + auVar196._16_4_));
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    fVar122 = auVar193._0_4_ + auVar193._16_4_;
    auVar36 = ZEXT416((uint)fVar122);
    auVar196 = vpandn_avx2(auVar93,_local_3c0);
    fVar53 = auVar114._0_4_ + auVar114._16_4_;
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    fVar87 = auVar222._0_4_ + auVar222._16_4_;
    auVar193 = vpandn_avx2(auVar93,local_3a0);
    auVar37 = ZEXT416((uint)(auVar48._0_4_ + auVar48._16_4_));
    auVar193 = vhaddps_avx(auVar193,auVar193);
    auVar193 = vhaddps_avx(auVar193,auVar193);
    fVar142 = auVar43._0_4_ + auVar43._16_4_;
    auVar38 = ZEXT416((uint)fVar142);
    auVar114 = vpandn_avx2(auVar93,local_380);
    fVar143 = auVar158._0_4_ + auVar158._16_4_;
    auVar39 = ZEXT416((uint)fVar143);
    auVar114 = vhaddps_avx(auVar114,auVar114);
    auVar114 = vhaddps_avx(auVar114,auVar114);
    fVar144 = auVar161._0_4_ + auVar161._16_4_;
    auVar222 = vpandn_avx2(auVar93,local_360);
    fVar123 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(auVar222,auVar222);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    auVar56 = ZEXT416((uint)(auVar196._0_4_ + auVar196._16_4_));
    auVar196 = vpandn_avx2(auVar93,local_340);
    fVar107 = auVar193._0_4_ + auVar193._16_4_;
    auVar196 = vhaddps_avx(auVar196,auVar196);
    auVar196 = vhaddps_avx(auVar196,auVar196);
    fVar1 = auVar114._0_4_ + auVar114._16_4_;
    auVar193 = vpandn_avx2(auVar93,local_320);
    fVar2 = auVar59._0_4_ + auVar59._16_4_;
    auVar59 = vhaddps_avx(auVar193,auVar193);
    auVar59 = vhaddps_avx(auVar59,auVar59);
    fVar108 = auVar196._0_4_ + auVar196._16_4_;
    fVar109 = auVar59._0_4_ + auVar59._16_4_;
    auVar188 = ZEXT416((uint)fVar53);
    auVar88 = vinsertps_avx(auVar57,auVar188,0x10);
    auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar123),0x20);
    auVar74 = ZEXT416((uint)fVar107);
    auVar88 = vinsertps_avx(auVar88,auVar74,0x30);
    auVar34 = ZEXT416((uint)fVar87);
    auVar55 = vinsertps_avx(auVar34,auVar38,0x10);
    auVar55 = vinsertps_avx(auVar55,ZEXT416((uint)fVar1),0x20);
    auVar54 = ZEXT416((uint)fVar108);
    auVar55 = vinsertps_avx(auVar55,auVar54,0x30);
    auVar90 = vinsertps_avx(auVar35,auVar36,0x10);
    auVar90 = vinsertps_avx(auVar90,ZEXT416((uint)fVar144),0x20);
    auVar90 = vinsertps_avx(auVar90,auVar56,0x30);
    auVar112 = vinsertps_avx(auVar37,auVar39,0x10);
    auVar112 = vinsertps_avx(auVar112,ZEXT416((uint)fVar2),0x20);
    auVar40 = ZEXT416((uint)fVar109);
    auVar112 = vinsertps_avx(auVar112,auVar40,0x30);
    auVar181._0_4_ = auVar90._0_4_ * auVar112._0_4_ - auVar88._0_4_ * auVar55._0_4_;
    auVar181._4_4_ = auVar90._4_4_ * auVar112._4_4_ - auVar88._4_4_ * auVar55._4_4_;
    auVar181._8_4_ = auVar90._8_4_ * auVar112._8_4_ - auVar88._8_4_ * auVar55._8_4_;
    auVar181._12_4_ = auVar90._12_4_ * auVar112._12_4_ - auVar88._12_4_ * auVar55._12_4_;
    auVar88 = vinsertps_avx(ZEXT416((uint)fVar1),ZEXT416((uint)fVar2),0x10);
    auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar144),0x20);
    auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar123),0x30);
    auVar90 = vshufps_avx(ZEXT416((uint)fVar107),ZEXT416((uint)fVar108),0);
    auVar55 = vinsertps_avx(ZEXT416((uint)fVar144),ZEXT416((uint)fVar123),0x10);
    auVar55 = vinsertps_avx(auVar55,ZEXT416((uint)fVar1),0x20);
    auVar55 = vinsertps_avx(auVar55,ZEXT416((uint)fVar2),0x30);
    auVar112 = vshufps_avx(ZEXT416((uint)fVar109),auVar56,0);
    fVar180 = auVar55._0_4_;
    auVar110._0_4_ = fVar180 * auVar112._0_4_ - auVar88._0_4_ * auVar90._0_4_;
    fVar184 = auVar55._4_4_;
    auVar110._4_4_ = fVar184 * auVar112._4_4_ - auVar88._4_4_ * auVar90._4_4_;
    fVar185 = auVar55._8_4_;
    auVar110._8_4_ = fVar185 * auVar112._8_4_ - auVar88._8_4_ * auVar90._8_4_;
    fVar186 = auVar55._12_4_;
    auVar110._12_4_ = fVar186 * auVar112._12_4_ - auVar88._12_4_ * auVar90._12_4_;
    auVar88 = vinsertps_avx(auVar38,auVar39,0x10);
    auVar88 = vinsertps_avx(auVar88,auVar36,0x20);
    auVar88 = vinsertps_avx(auVar88,ZEXT416((uint)fVar53),0x30);
    auVar90 = vshufps_avx(auVar57,ZEXT416((uint)fVar87),0);
    auVar55 = vinsertps_avx(auVar36,auVar188,0x10);
    auVar55 = vinsertps_avx(auVar55,auVar38,0x20);
    auVar55 = vinsertps_avx(auVar55,auVar39,0x30);
    auVar112 = vshufps_avx(auVar37,auVar35,0);
    fVar87 = auVar55._0_4_;
    auVar220._0_4_ = fVar87 * auVar112._0_4_ - auVar90._0_4_ * auVar88._0_4_;
    fVar107 = auVar55._4_4_;
    auVar220._4_4_ = fVar107 * auVar112._4_4_ - auVar90._4_4_ * auVar88._4_4_;
    fVar108 = auVar55._8_4_;
    auVar220._8_4_ = fVar108 * auVar112._8_4_ - auVar90._8_4_ * auVar88._8_4_;
    fVar109 = auVar55._12_4_;
    auVar220._12_4_ = fVar109 * auVar112._12_4_ - auVar90._12_4_ * auVar88._12_4_;
    auVar88 = vshufps_avx(auVar110,auVar110,0xd8);
    auVar58._0_4_ = auVar220._0_4_ * auVar88._0_4_;
    auVar58._4_4_ = auVar220._4_4_ * auVar88._4_4_;
    auVar58._8_4_ = auVar220._8_4_ * auVar88._8_4_;
    auVar58._12_4_ = auVar220._12_4_ * auVar88._12_4_;
    auVar88 = vshufpd_avx(auVar58,auVar58,1);
    auVar111._0_4_ = auVar58._0_4_ + auVar88._0_4_;
    auVar111._4_4_ = auVar58._4_4_ + auVar88._4_4_;
    auVar111._8_4_ = auVar58._8_4_ + auVar88._8_4_;
    auVar111._12_4_ = auVar58._12_4_ + auVar88._12_4_;
    auVar88 = vshufps_avx(auVar181,auVar181,0x55);
    auVar55 = vshufps_avx(auVar181,auVar181,0xaa);
    auVar90 = vshufps_avx(auVar181,auVar181,0xff);
    fVar53 = auVar90._0_4_;
    auVar145._0_4_ = auVar181._0_4_ * fVar53 + auVar55._0_4_ * auVar88._0_4_;
    auVar145._4_4_ = auVar181._0_4_ * auVar90._4_4_ + auVar55._4_4_ * auVar88._4_4_;
    auVar145._8_4_ = auVar181._0_4_ * auVar90._8_4_ + auVar55._8_4_ * auVar88._8_4_;
    auVar145._12_4_ = auVar181._0_4_ * auVar90._12_4_ + auVar55._12_4_ * auVar88._12_4_;
    auVar112 = vshufps_avx(auVar111,auVar111,0x39);
    auVar72._0_4_ = auVar111._0_4_ + auVar112._0_4_;
    auVar72._4_4_ = auVar111._4_4_ + auVar112._4_4_;
    auVar72._8_4_ = auVar111._8_4_ + auVar112._8_4_;
    auVar72._12_4_ = auVar111._12_4_ + auVar112._12_4_;
    auVar112 = vsubps_avx(auVar145,auVar72);
    auVar234 = ZEXT816(0);
    if ((auVar112._0_4_ != 0.0) ||
       (auVar81 = ___ymm_3f800000000000000000000000000000000000003f8000000000000000000000,
       auVar97 = ___ymm_00000000000000003f800000000000000000000000000000000000003f800000,
       NAN(auVar112._0_4_))) {
      auVar36 = vinsertps_avx(auVar56,auVar74,0x10);
      auVar38 = vinsertps_avx(auVar74,auVar56,0x10);
      auVar36 = vinsertps_avx(auVar36,auVar54,0x20);
      auVar36 = vinsertps_avx(auVar36,auVar40,0x30);
      auVar38 = vinsertps_avx(auVar38,auVar40,0x20);
      auVar38 = vinsertps_avx(auVar38,auVar54,0x30);
      auVar54 = vshufps_avx(auVar220,auVar220,0x66);
      auVar74 = vshufps_avx(auVar220,auVar220,0x33);
      auVar39 = vinsertps_avx(ZEXT416((uint)fVar123),ZEXT416((uint)fVar144),0x10);
      auVar39 = vinsertps_avx(auVar39,ZEXT416((uint)fVar2),0x20);
      auVar39 = vinsertps_avx(auVar39,ZEXT416((uint)fVar1),0x30);
      auVar56 = vshufps_avx(auVar220,auVar220,0xcc);
      auVar40 = vinsertps_avx(auVar35,auVar57,0x10);
      auVar35 = vinsertps_avx(auVar57,auVar35,0x10);
      auVar40 = vinsertps_avx(auVar40,auVar34,0x20);
      auVar40 = vinsertps_avx(auVar40,auVar37,0x30);
      auVar35 = vinsertps_avx(auVar35,auVar37,0x20);
      auVar57 = vshufps_avx(auVar110,auVar110,0x33);
      auVar35 = vinsertps_avx(auVar35,auVar34,0x30);
      auVar34 = vshufps_avx(auVar110,auVar110,0x66);
      auVar37 = vinsertps_avx(auVar188,ZEXT416((uint)fVar122),0x10);
      auVar37 = vinsertps_avx(auVar37,ZEXT416((uint)fVar143),0x20);
      auVar37 = vinsertps_avx(auVar37,ZEXT416((uint)fVar142),0x30);
      auVar188 = vshufps_avx(auVar110,auVar110,0xcc);
      auVar112 = vdivps_avx(___xmm_3f800000bf800000bf8000003f800000,auVar112);
      fVar122 = auVar112._0_4_;
      auVar89._0_4_ =
           (fVar53 * auVar40._0_4_ - (fVar87 * auVar188._0_4_ + auVar37._0_4_ * auVar34._0_4_)) *
           fVar122;
      fVar142 = auVar112._4_4_;
      auVar89._4_4_ =
           (auVar90._4_4_ * auVar40._4_4_ -
           (fVar107 * auVar188._4_4_ + auVar37._4_4_ * auVar34._4_4_)) * fVar142;
      fVar143 = auVar112._8_4_;
      auVar89._8_4_ =
           (auVar90._8_4_ * auVar40._8_4_ -
           (fVar108 * auVar188._8_4_ + auVar37._8_4_ * auVar34._8_4_)) * fVar143;
      fVar144 = auVar112._12_4_;
      auVar89._12_4_ =
           (auVar90._12_4_ * auVar40._12_4_ -
           (fVar109 * auVar188._12_4_ + auVar37._12_4_ * auVar34._12_4_)) * fVar144;
      auVar124._0_4_ =
           (fVar180 * auVar88._0_4_ -
           (auVar36._0_4_ * auVar74._0_4_ - auVar54._0_4_ * auVar38._0_4_)) * fVar122;
      auVar124._4_4_ =
           (fVar184 * auVar88._4_4_ -
           (auVar36._4_4_ * auVar74._4_4_ - auVar54._4_4_ * auVar38._4_4_)) * fVar142;
      auVar124._8_4_ =
           (fVar185 * auVar88._8_4_ -
           (auVar36._8_4_ * auVar74._8_4_ - auVar54._8_4_ * auVar38._8_4_)) * fVar143;
      auVar124._12_4_ =
           (fVar186 * auVar88._12_4_ -
           (auVar36._12_4_ * auVar74._12_4_ - auVar54._12_4_ * auVar38._12_4_)) * fVar144;
      auVar146._0_4_ =
           (fVar87 * auVar55._0_4_ - (auVar40._0_4_ * auVar57._0_4_ - auVar35._0_4_ * auVar34._0_4_)
           ) * fVar122;
      auVar146._4_4_ =
           (fVar107 * auVar55._4_4_ -
           (auVar40._4_4_ * auVar57._4_4_ - auVar35._4_4_ * auVar34._4_4_)) * fVar142;
      auVar146._8_4_ =
           (fVar108 * auVar55._8_4_ -
           (auVar40._8_4_ * auVar57._8_4_ - auVar35._8_4_ * auVar34._8_4_)) * fVar143;
      auVar146._12_4_ =
           (fVar109 * auVar55._12_4_ -
           (auVar40._12_4_ * auVar57._12_4_ - auVar35._12_4_ * auVar34._12_4_)) * fVar144;
      auVar73._0_4_ =
           (auVar36._0_4_ * auVar181._0_4_ -
           (fVar180 * auVar56._0_4_ + auVar54._0_4_ * auVar39._0_4_)) * fVar122;
      auVar73._4_4_ =
           (auVar36._4_4_ * auVar181._0_4_ -
           (fVar184 * auVar56._4_4_ + auVar54._4_4_ * auVar39._4_4_)) * fVar142;
      auVar73._8_4_ =
           (auVar36._8_4_ * auVar181._0_4_ -
           (fVar185 * auVar56._8_4_ + auVar54._8_4_ * auVar39._8_4_)) * fVar143;
      auVar73._12_4_ =
           (auVar36._12_4_ * auVar181._0_4_ -
           (fVar186 * auVar56._12_4_ + auVar54._12_4_ * auVar39._12_4_)) * fVar144;
      auVar88 = vshufps_avx(auVar89,auVar124,0x22);
      auVar55 = vshufps_avx(auVar89,auVar124,0x77);
      auVar97._16_16_ = auVar88;
      auVar97._0_16_ = auVar55;
      auVar88 = vshufps_avx(auVar146,auVar73,0x22);
      auVar55 = vshufps_avx(auVar146,auVar73,0x77);
      auVar81._16_16_ = auVar88;
      auVar81._0_16_ = auVar55;
    }
    auVar88 = vmovshdup_avx(auVar181);
    auVar90 = vshufpd_avx(auVar181,auVar181,1);
    auVar55 = vmovshdup_avx(auVar111);
    fVar122 = (auVar181._0_4_ * fVar53 + auVar88._0_4_ * auVar90._0_4_) -
              (auVar111._0_4_ + auVar55._0_4_);
    uVar24 = 0;
    uVar31 = 0;
    if ((~(uint)fVar122 & 0x7f800000) != 0 && __real_322bcc77 <= fVar122) {
      auVar59 = vpandn_avx2(auVar93,_local_740);
      auVar196 = vpandn_avx2(auVar93,_local_720);
      auVar193 = vpandn_avx2(auVar93,_local_700);
      auVar59 = vhaddps_avx(auVar59,auVar59);
      auVar196 = vhaddps_avx(auVar196,auVar196);
      auVar193 = vhaddps_avx(auVar193,auVar193);
      auVar59 = vhaddps_avx(auVar59,auVar59);
      auVar196 = vhaddps_avx(auVar196,auVar196);
      auVar193 = vhaddps_avx(auVar193,auVar193);
      fVar122 = auVar59._0_4_ + auVar59._16_4_;
      fVar53 = auVar196._0_4_ + auVar196._16_4_;
      fVar87 = auVar193._0_4_ + auVar193._16_4_;
      auVar234._0_4_ =
           auVar97._0_4_ * fVar122 + fVar53 * auVar97._16_4_ +
           auVar81._0_4_ * fVar87 + auVar81._16_4_ * 0.0;
      auVar234._4_4_ =
           auVar97._4_4_ * fVar122 + fVar53 * auVar97._20_4_ +
           auVar81._4_4_ * fVar87 + auVar81._20_4_ * 0.0;
      auVar234._8_4_ =
           auVar97._8_4_ * fVar122 + fVar53 * auVar97._24_4_ +
           auVar81._8_4_ * fVar87 + auVar81._24_4_ * 0.0;
      auVar234._12_4_ =
           auVar97._12_4_ * fVar122 + fVar53 * auVar97._28_4_ +
           auVar81._12_4_ * fVar87 + auVar81._28_4_ * 0.0;
      auVar88 = vmovshdup_avx(auVar234);
      uVar24 = auVar88._0_4_;
      auVar88 = vshufpd_avx(auVar234,auVar234,1);
      uVar31 = auVar88._0_4_;
    }
    *param_3 = auVar234._0_4_;
    param_3[1] = uVar24;
    param_3[2] = uVar31;
  }
  return;
}

// UpdatePositionBasedState_avx2 @ 1403741f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdatePositionBasedState_avx2
               (float *param_1,float *param_2,undefined4 *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,uint param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [32];
  int iVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 (*pauVar29) [32];
  ulonglong uVar30;
  uint uVar31;
  int iVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [64];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  float fVar77;
  float fVar78;
  float fVar89;
  float fVar91;
  undefined1 auVar80 [16];
  float fVar87;
  float fVar88;
  float fVar90;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar79 [16];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  float fVar101;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  float fVar115;
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  float fVar116;
  float fVar117;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined1 auVar118 [32];
  float fVar131;
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  float fVar132;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [32];
  undefined1 auVar153 [16];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [16];
  undefined1 auVar161 [32];
  float local_540;
  float local_520;
  undefined1 local_4e0 [8];
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  undefined1 local_4c0 [8];
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  undefined1 local_4a0 [8];
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  undefined1 local_480 [8];
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  undefined1 local_460 [8];
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  undefined1 local_440 [8];
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  undefined1 local_420 [8];
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  undefined1 local_400 [8];
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  undefined1 local_3e0 [8];
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  undefined1 local_300 [8];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined1 local_2e0 [8];
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  undefined1 local_2c0 [8];
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  undefined1 local_2a0 [32];
  undefined1 local_280 [8];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
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
  undefined1 local_1c0 [8];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 auVar46 [32];
  undefined1 auVar76 [64];
  
  uVar21 = param_9 - param_8;
  uVar31 = uVar21 + 7;
  if (-1 < (int)uVar21) {
    uVar31 = uVar21;
  }
  iVar32 = ((uVar31 & 0xfffffff8) - uVar21) + param_9;
  auVar65._0_12_ = ZEXT812(0);
  auVar65._12_4_ = 0;
  auVar76 = ZEXT1664(auVar65);
  auVar45 = ZEXT1632(auVar65);
  _local_400 = ZEXT1632(auVar65);
  _local_480 = ZEXT1632(auVar65);
  uVar30 = (ulonglong)param_8;
  _local_460 = _local_480;
  _local_440 = _local_480;
  _local_420 = _local_480;
  _local_3e0 = _local_400;
  if ((int)param_8 < iVar32) {
    uVar30 = (ulonglong)(int)param_8;
    pauVar25 = (undefined1 (*) [32])(param_5 + uVar30 * 0xc);
    pauVar29 = (undefined1 (*) [32])(uVar30 * 0xc + param_4);
    iVar26 = param_8 * 4;
    auVar41 = ZEXT1264(ZEXT812(0));
    do {
      auVar45 = *(undefined1 (*) [32])(param_7 + iVar26);
      auVar137 = vcmpps_avx(auVar45,auVar41._0_32_,8);
      iVar22 = vmovmskps_avx(auVar137);
      if ((iVar22 != 0xff) && ((char)iVar22 != -1)) {
        auVar45 = vcmpps_avx(auVar45,auVar41._0_32_,0xc);
        auVar65 = vpackssdw_avx(auVar45._0_16_,auVar45._16_16_);
        auVar45 = vpmovsxwd_avx2(auVar65);
        if ((char)iVar22 == '\0') {
          auVar81 = pauVar29[1];
          auVar146 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                  ,auVar81);
          auVar107 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                  ,*pauVar29);
          auVar146 = vblendps_avx(auVar107,auVar146,0x88);
          auVar107 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                  ,auVar81);
          auVar36 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar29[2]);
          auVar107 = vblendps_avx(auVar36,auVar107,0x13);
          auVar98._16_16_ = auVar107._0_16_;
          auVar98._0_16_ = auVar146._0_16_;
          auVar107 = vperm2f128_avx(auVar146,auVar107,0x31);
          auVar81 = vblendps_avx(auVar81,*pauVar29,0x24);
          auVar81 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar81);
          auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                  ,pauVar29[2]);
          auVar81 = vblendps_avx(auVar81,auVar146,0xe0);
          auVar146 = pauVar25[1];
          auVar36 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar146);
          auVar102 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                  ,*pauVar25);
          auVar36 = vblendps_avx(auVar102,auVar36,0x88);
          auVar102 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                  ,auVar146);
          auVar59 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar25[2]);
          auVar59 = vblendps_avx(auVar59,auVar102,0x13);
          auVar102._16_16_ = auVar59._0_16_;
          auVar102._0_16_ = auVar36._0_16_;
          auVar36 = vperm2f128_avx(auVar36,auVar59,0x31);
          auVar146 = vblendps_avx(auVar146,*pauVar25,0x24);
          auVar146 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                  ,auVar146);
          auVar41 = ZEXT864(0) << 0x20;
          auVar59 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar25[2]);
          auVar146 = vblendps_avx(auVar146,auVar59,0xe0);
        }
        else {
          auVar98 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar45);
          auVar107 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar45);
          auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar45);
          auVar102 = vgatherdps(ZEXT832(0),auVar45);
          auVar36 = vgatherdps(ZEXT832(0),auVar45);
          auVar146 = vgatherdps(ZEXT832(0),auVar45);
        }
        auVar59 = vmaskmovps_avx(auVar45,*(undefined1 (*) [32])(param_6 + iVar26));
        fVar77 = auVar59._0_4_;
        auVar154._0_4_ = fVar77 * auVar98._0_4_ + (float)local_420._0_4_;
        fVar64 = auVar59._4_4_;
        auVar154._4_4_ = fVar64 * auVar98._4_4_ + (float)local_420._4_4_;
        fVar88 = auVar59._8_4_;
        auVar154._8_4_ = fVar88 * auVar98._8_4_ + fStack_418;
        fVar90 = auVar59._12_4_;
        auVar154._12_4_ = fVar90 * auVar98._12_4_ + fStack_414;
        fVar92 = auVar59._16_4_;
        auVar154._16_4_ = fVar92 * auVar98._16_4_ + fStack_410;
        fVar93 = auVar59._20_4_;
        auVar154._20_4_ = fVar93 * auVar98._20_4_ + fStack_40c;
        fVar94 = auVar59._24_4_;
        auVar154._24_4_ = fVar94 * auVar98._24_4_ + fStack_408;
        fVar78 = auVar59._28_4_;
        auVar154._28_4_ = fVar78 * auVar98._28_4_ + fStack_404;
        auVar158._0_4_ = fVar77 * auVar107._0_4_ + (float)local_400._0_4_;
        auVar158._4_4_ = fVar64 * auVar107._4_4_ + (float)local_400._4_4_;
        auVar158._8_4_ = fVar88 * auVar107._8_4_ + fStack_3f8;
        auVar158._12_4_ = fVar90 * auVar107._12_4_ + fStack_3f4;
        auVar158._16_4_ = fVar92 * auVar107._16_4_ + fStack_3f0;
        auVar158._20_4_ = fVar93 * auVar107._20_4_ + fStack_3ec;
        auVar158._24_4_ = fVar94 * auVar107._24_4_ + fStack_3e8;
        auVar158._28_4_ = fVar78 * auVar107._28_4_ + fStack_3e4;
        auVar161._0_4_ = fVar77 * auVar81._0_4_ + (float)local_3e0._0_4_;
        auVar161._4_4_ = fVar64 * auVar81._4_4_ + (float)local_3e0._4_4_;
        auVar161._8_4_ = fVar88 * auVar81._8_4_ + fStack_3d8;
        auVar161._12_4_ = fVar90 * auVar81._12_4_ + fStack_3d4;
        auVar161._16_4_ = fVar92 * auVar81._16_4_ + fStack_3d0;
        auVar161._20_4_ = fVar93 * auVar81._20_4_ + fStack_3cc;
        auVar161._24_4_ = fVar94 * auVar81._24_4_ + fStack_3c8;
        auVar161._28_4_ = fVar78 * auVar81._28_4_ + fStack_3c4;
        _local_420 = vmaskmovps_avx(auVar45,auVar154);
        _local_400 = vmaskmovps_avx(auVar45,auVar158);
        _local_3e0 = vmaskmovps_avx(auVar45,auVar161);
        auVar81._0_4_ = fVar77 * auVar102._0_4_ + (float)local_480._0_4_;
        auVar81._4_4_ = fVar64 * auVar102._4_4_ + (float)local_480._4_4_;
        auVar81._8_4_ = fVar88 * auVar102._8_4_ + fStack_478;
        auVar81._12_4_ = fVar90 * auVar102._12_4_ + fStack_474;
        auVar81._16_4_ = fVar92 * auVar102._16_4_ + fStack_470;
        auVar81._20_4_ = fVar93 * auVar102._20_4_ + fStack_46c;
        auVar81._24_4_ = fVar94 * auVar102._24_4_ + fStack_468;
        auVar81._28_4_ = fVar78 * auVar102._28_4_ + fStack_464;
        auVar107._0_4_ = fVar77 * auVar36._0_4_ + (float)local_460._0_4_;
        auVar107._4_4_ = fVar64 * auVar36._4_4_ + (float)local_460._4_4_;
        auVar107._8_4_ = fVar88 * auVar36._8_4_ + fStack_458;
        auVar107._12_4_ = fVar90 * auVar36._12_4_ + fStack_454;
        auVar107._16_4_ = fVar92 * auVar36._16_4_ + fStack_450;
        auVar107._20_4_ = fVar93 * auVar36._20_4_ + fStack_44c;
        auVar107._24_4_ = fVar94 * auVar36._24_4_ + fStack_448;
        auVar107._28_4_ = fVar78 * auVar36._28_4_ + fStack_444;
        auVar36._0_4_ = fVar77 * auVar146._0_4_ + (float)local_440._0_4_;
        auVar36._4_4_ = fVar64 * auVar146._4_4_ + (float)local_440._4_4_;
        auVar36._8_4_ = fVar88 * auVar146._8_4_ + fStack_438;
        auVar36._12_4_ = fVar90 * auVar146._12_4_ + fStack_434;
        auVar36._16_4_ = fVar92 * auVar146._16_4_ + fStack_430;
        auVar36._20_4_ = fVar93 * auVar146._20_4_ + fStack_42c;
        auVar36._24_4_ = fVar94 * auVar146._24_4_ + fStack_428;
        auVar36._28_4_ = fVar78 * auVar146._28_4_ + fStack_424;
        _local_480 = vmaskmovps_avx(auVar45,auVar81);
        _local_460 = vmaskmovps_avx(auVar45,auVar107);
        _local_440 = vmaskmovps_avx(auVar45,auVar36);
        auVar45._4_4_ = __real_80000000;
        auVar45._0_4_ = __real_80000000;
        auVar45._8_4_ = __real_80000000;
        auVar45._12_4_ = __real_80000000;
        auVar45._16_4_ = __real_80000000;
        auVar45._20_4_ = __real_80000000;
        auVar45._24_4_ = __real_80000000;
        auVar45._28_4_ = __real_80000000;
        auVar45 = vblendvps_avx(auVar59,auVar45,auVar137);
        auVar76 = ZEXT3264(CONCAT428(auVar76._28_4_ + auVar45._28_4_,
                                     CONCAT424(auVar76._24_4_ + auVar45._24_4_,
                                               CONCAT420(auVar76._20_4_ + auVar45._20_4_,
                                                         CONCAT416(auVar76._16_4_ + auVar45._16_4_,
                                                                   CONCAT412(auVar76._12_4_ +
                                                                             auVar45._12_4_,
                                                                             CONCAT48(auVar76._8_4_
                                                                                      + auVar45.
                                                  _8_4_,CONCAT44(auVar76._4_4_ + auVar45._4_4_,
                                                                 auVar76._0_4_ + auVar45._0_4_))))))
                                    ));
      }
      auVar45 = auVar76._0_32_;
      uVar30 = uVar30 + 8;
      pauVar25 = pauVar25 + 3;
      pauVar29 = pauVar29 + 3;
      iVar26 = iVar26 + 0x20;
    } while ((longlong)uVar30 < (longlong)iVar32);
  }
  iVar26 = (int)uVar30;
  auVar137 = auVar45;
  if (iVar26 < param_9) {
    auVar146._0_4_ =
         iVar26 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar146._4_4_ = iVar26 + _UNK_150b50ae4;
    auVar146._8_4_ = iVar26 + _UNK_150b50ae8;
    auVar146._12_4_ = iVar26 + _UNK_150b50aec;
    auVar146._16_4_ = iVar26 + _UNK_150b50af0;
    auVar146._20_4_ = iVar26 + _UNK_150b50af4;
    auVar146._24_4_ = iVar26 + _UNK_150b50af8;
    auVar146._28_4_ = iVar26 + _UNK_150b50afc;
    auVar59._4_4_ = param_9;
    auVar59._0_4_ = param_9;
    auVar59._8_4_ = param_9;
    auVar59._12_4_ = param_9;
    auVar59._16_4_ = param_9;
    auVar59._20_4_ = param_9;
    auVar59._24_4_ = param_9;
    auVar59._28_4_ = param_9;
    auVar107 = vpcmpgtd_avx2(auVar59,auVar146);
    auVar146 = vmaskmovps_avx(auVar107,*(undefined1 (*) [32])(param_7 + iVar26 * 4));
    auVar81 = vcmpps_avx(auVar146,ZEXT1232(ZEXT812(0)),0xc);
    auVar81 = auVar81 & auVar107;
    if ((((((((SUB321(auVar81 >> 0x1f,0) & 1) != 0 || (SUB321(auVar81 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar81 >> 0x5f,0) & 1) != 0) || SUB321(auVar81 >> 0x7f,0) != '\0') ||
          (SUB321(auVar81 >> 0x9f,0) & 1) != 0) || SUB321(auVar81 >> 0xbf,0) != '\0') ||
        (SUB321(auVar81 >> 0xdf,0) & 1) != 0) || auVar81[0x1f] < '\0') {
      auVar81 = vcmpps_avx(auVar146,ZEXT1232(ZEXT812(0)),8);
      auVar42._0_4_ = auVar81._0_4_ & auVar107._0_4_;
      auVar42._4_4_ = auVar81._4_4_ & auVar107._4_4_;
      auVar42._8_4_ = auVar81._8_4_ & auVar107._8_4_;
      auVar42._12_4_ = auVar81._12_4_ & auVar107._12_4_;
      auVar46._16_4_ = auVar81._16_4_ & auVar107._16_4_;
      auVar46._0_16_ = auVar42;
      auVar46._20_4_ = auVar81._20_4_ & auVar107._20_4_;
      auVar46._24_4_ = auVar81._24_4_ & auVar107._24_4_;
      auVar46._28_4_ = auVar81._28_4_ & auVar107._28_4_;
      uVar23 = vmovmskps_avx(auVar46);
      uVar28 = vmovmskps_avx(auVar107);
      if ((char)uVar23 != (char)uVar28) {
        auVar42 = vpackssdw_avx(auVar42,auVar46._16_16_);
        auVar65 = vpackssdw_avx(auVar107._0_16_,auVar107._16_16_);
        auVar42 = auVar42 ^ auVar65;
        lVar24 = (longlong)iVar26;
        pauVar25 = (undefined1 (*) [32])(param_4 + lVar24 * 0xc);
        auVar65 = vpacksswb_avx(auVar42,auVar42);
        auVar137 = vpmovsxwd_avx2(auVar42);
        if ((byte)(SUB161(auVar65 >> 7,0) & 1 | (SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                   (SUB161(auVar65 >> 0x17,0) & 1) << 2 | (SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                   (SUB161(auVar65 >> 0x27,0) & 1) << 4 | (SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                   (SUB161(auVar65 >> 0x37,0) & 1) << 6 | SUB161(auVar65 >> 0x3f,0) << 7) == 0xff) {
          auVar81 = pauVar25[1];
          auVar146 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                  ,auVar81);
          auVar107 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                  ,*pauVar25);
          auVar146 = vblendps_avx(auVar107,auVar146,0x88);
          auVar107 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                  ,auVar81);
          auVar36 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar25[2]);
          auVar107 = vblendps_avx(auVar36,auVar107,0x13);
          auVar52._16_16_ = auVar107._0_16_;
          auVar52._0_16_ = auVar146._0_16_;
          auVar59 = vperm2f128_avx(auVar146,auVar107,0x31);
          auVar81 = vblendps_avx(auVar81,*pauVar25,0x24);
          auVar81 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar81);
          auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                  ,pauVar25[2]);
          auVar36 = vblendps_avx(auVar81,auVar146,0xe0);
          auVar81 = *(undefined1 (*) [32])(param_5 + lVar24 * 0xc);
          auVar146 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar24 * 0xc);
          auVar107 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar24 * 0xc);
          auVar102 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                  ,auVar146);
          auVar98 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,auVar81);
          auVar102 = vblendps_avx(auVar98,auVar102,0x88);
          auVar98 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar146);
          auVar154 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                  ,auVar107);
          auVar98 = vblendps_avx(auVar154,auVar98,0x13);
          auVar95._16_16_ = auVar98._0_16_;
          auVar95._0_16_ = auVar102._0_16_;
          auVar102 = vperm2f128_avx(auVar102,auVar98,0x31);
          auVar81 = vblendps_avx(auVar146,auVar81,0x24);
          auVar81 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar81);
          auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                  ,auVar107);
          auVar81 = vblendps_avx(auVar81,auVar146,0xe0);
        }
        else {
          auVar52 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar137);
          auVar59 = vgatherdps(ZEXT832(0) << 0x20,auVar137);
          auVar36 = vgatherdps(ZEXT832(0),auVar137);
          auVar95 = vgatherdps(ZEXT832(0),auVar137);
          auVar102 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar137);
          auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar137);
        }
        auVar146 = vmaskmovps_avx(auVar137,*(undefined1 (*) [32])(param_6 + iVar26 * 4));
        fVar77 = auVar146._0_4_;
        auVar53._0_4_ = fVar77 * auVar52._0_4_ + (float)local_420._0_4_;
        fVar64 = auVar146._4_4_;
        auVar53._4_4_ = fVar64 * auVar52._4_4_ + (float)local_420._4_4_;
        fVar88 = auVar146._8_4_;
        auVar53._8_4_ = fVar88 * auVar52._8_4_ + fStack_418;
        fVar90 = auVar146._12_4_;
        auVar53._12_4_ = fVar90 * auVar52._12_4_ + fStack_414;
        fVar92 = auVar146._16_4_;
        auVar53._16_4_ = fVar92 * auVar52._16_4_ + fStack_410;
        fVar93 = auVar146._20_4_;
        auVar53._20_4_ = fVar93 * auVar52._20_4_ + fStack_40c;
        fVar94 = auVar146._24_4_;
        auVar53._24_4_ = fVar94 * auVar52._24_4_ + fStack_408;
        fVar78 = auVar146._28_4_;
        auVar53._28_4_ = fVar78 * auVar52._28_4_ + fStack_404;
        auVar60._0_4_ = fVar77 * auVar59._0_4_ + (float)local_400._0_4_;
        auVar60._4_4_ = fVar64 * auVar59._4_4_ + (float)local_400._4_4_;
        auVar60._8_4_ = fVar88 * auVar59._8_4_ + fStack_3f8;
        auVar60._12_4_ = fVar90 * auVar59._12_4_ + fStack_3f4;
        auVar60._16_4_ = fVar92 * auVar59._16_4_ + fStack_3f0;
        auVar60._20_4_ = fVar93 * auVar59._20_4_ + fStack_3ec;
        auVar60._24_4_ = fVar94 * auVar59._24_4_ + fStack_3e8;
        auVar60._28_4_ = fVar78 * auVar59._28_4_ + fStack_3e4;
        auVar37._0_4_ = fVar77 * auVar36._0_4_ + (float)local_3e0._0_4_;
        auVar37._4_4_ = fVar64 * auVar36._4_4_ + (float)local_3e0._4_4_;
        auVar37._8_4_ = fVar88 * auVar36._8_4_ + fStack_3d8;
        auVar37._12_4_ = fVar90 * auVar36._12_4_ + fStack_3d4;
        auVar37._16_4_ = fVar92 * auVar36._16_4_ + fStack_3d0;
        auVar37._20_4_ = fVar93 * auVar36._20_4_ + fStack_3cc;
        auVar37._24_4_ = fVar94 * auVar36._24_4_ + fStack_3c8;
        auVar37._28_4_ = fVar78 * auVar36._28_4_ + fStack_3c4;
        _local_420 = vmaskmovps_avx(auVar137,auVar53);
        _local_400 = vmaskmovps_avx(auVar137,auVar60);
        _local_3e0 = vmaskmovps_avx(auVar137,auVar37);
        auVar96._0_4_ = fVar77 * auVar95._0_4_ + (float)local_480._0_4_;
        auVar96._4_4_ = fVar64 * auVar95._4_4_ + (float)local_480._4_4_;
        auVar96._8_4_ = fVar88 * auVar95._8_4_ + fStack_478;
        auVar96._12_4_ = fVar90 * auVar95._12_4_ + fStack_474;
        auVar96._16_4_ = fVar92 * auVar95._16_4_ + fStack_470;
        auVar96._20_4_ = fVar93 * auVar95._20_4_ + fStack_46c;
        auVar96._24_4_ = fVar94 * auVar95._24_4_ + fStack_468;
        auVar96._28_4_ = fVar78 * auVar95._28_4_ + fStack_464;
        auVar103._0_4_ = fVar77 * auVar102._0_4_ + (float)local_460._0_4_;
        auVar103._4_4_ = fVar64 * auVar102._4_4_ + (float)local_460._4_4_;
        auVar103._8_4_ = fVar88 * auVar102._8_4_ + fStack_458;
        auVar103._12_4_ = fVar90 * auVar102._12_4_ + fStack_454;
        auVar103._16_4_ = fVar92 * auVar102._16_4_ + fStack_450;
        auVar103._20_4_ = fVar93 * auVar102._20_4_ + fStack_44c;
        auVar103._24_4_ = fVar94 * auVar102._24_4_ + fStack_448;
        auVar103._28_4_ = fVar78 * auVar102._28_4_ + fStack_444;
        auVar82._0_4_ = fVar77 * auVar81._0_4_ + (float)local_440._0_4_;
        auVar82._4_4_ = fVar64 * auVar81._4_4_ + (float)local_440._4_4_;
        auVar82._8_4_ = fVar88 * auVar81._8_4_ + fStack_438;
        auVar82._12_4_ = fVar90 * auVar81._12_4_ + fStack_434;
        auVar82._16_4_ = fVar92 * auVar81._16_4_ + fStack_430;
        auVar82._20_4_ = fVar93 * auVar81._20_4_ + fStack_42c;
        auVar82._24_4_ = fVar94 * auVar81._24_4_ + fStack_428;
        auVar82._28_4_ = fVar78 * auVar81._28_4_ + fStack_424;
        _local_480 = vmaskmovps_avx(auVar137,auVar96);
        _local_460 = vmaskmovps_avx(auVar137,auVar103);
        _local_440 = vmaskmovps_avx(auVar137,auVar82);
        auVar38._4_4_ = __real_80000000;
        auVar38._0_4_ = __real_80000000;
        auVar38._8_4_ = __real_80000000;
        auVar38._12_4_ = __real_80000000;
        auVar38._16_4_ = __real_80000000;
        auVar38._20_4_ = __real_80000000;
        auVar38._24_4_ = __real_80000000;
        auVar38._28_4_ = __real_80000000;
        auVar81 = vblendvps_avx(auVar38,auVar146,auVar137);
        auVar137._0_4_ = auVar45._0_4_ + auVar81._0_4_;
        auVar137._4_4_ = auVar45._4_4_ + auVar81._4_4_;
        auVar137._8_4_ = auVar45._8_4_ + auVar81._8_4_;
        auVar137._12_4_ = auVar45._12_4_ + auVar81._12_4_;
        auVar137._16_4_ = auVar45._16_4_ + auVar81._16_4_;
        auVar137._20_4_ = auVar45._20_4_ + auVar81._20_4_;
        auVar137._24_4_ = auVar45._24_4_ + auVar81._24_4_;
        auVar137._28_4_ = auVar45._28_4_ + auVar81._28_4_;
      }
    }
  }
  auVar45 = vhaddps_avx(_local_420,_local_420);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  fVar77 = auVar45._0_4_ + auVar45._16_4_;
  auVar76 = ZEXT464((uint)fVar77);
  auVar45 = vhaddps_avx(_local_400,_local_400);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  local_540 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(_local_3e0,_local_3e0);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  *param_1 = fVar77;
  param_1[1] = local_540;
  local_520 = auVar45._0_4_ + auVar45._16_4_;
  param_1[2] = local_520;
  auVar45 = vhaddps_avx(_local_480,_local_480);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  auVar81 = vhaddps_avx(_local_460,_local_460);
  fVar64 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(auVar81,auVar81);
  auVar81 = vhaddps_avx(_local_440,_local_440);
  fVar88 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(auVar81,auVar81);
  fVar90 = auVar45._0_4_ + auVar45._16_4_;
  *param_2 = fVar64;
  param_2[1] = fVar88;
  param_2[2] = fVar90;
  auVar45 = vhaddps_avx(auVar137,auVar137);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  fVar92 = auVar45._0_4_ + auVar45._16_4_;
  if ((fVar92 != 0.0) || (NAN(fVar92))) {
    auVar65 = vinsertps_avx(ZEXT416((uint)fVar77),ZEXT416((uint)local_540),0x10);
    auVar65 = vinsertps_avx(auVar65,ZEXT416((uint)local_520),0x20);
    auVar66._4_4_ = fVar92;
    auVar66._0_4_ = fVar92;
    auVar66._8_4_ = fVar92;
    auVar66._12_4_ = fVar92;
    auVar65 = vdivps_avx(auVar65,auVar66);
    auVar76 = ZEXT1664(auVar65);
    auVar42 = vmovshdup_avx(auVar65);
    *param_1 = auVar65._0_4_;
    local_540 = auVar42._0_4_;
    param_1[1] = local_540;
    auVar65 = vshufpd_avx(auVar65,auVar65,1);
    local_520 = auVar65._0_4_;
    param_1[2] = local_520;
    auVar65 = vinsertps_avx(ZEXT416((uint)fVar64),ZEXT416((uint)fVar88),0x10);
    auVar65 = vinsertps_avx(auVar65,ZEXT416((uint)fVar90),0x20);
    auVar65 = vdivps_avx(auVar65,auVar66);
    *param_2 = auVar65._0_4_;
    fVar77 = (float)vextractps_avx(auVar65,1);
    param_2[1] = fVar77;
    fVar77 = (float)vextractps_avx(auVar65,2);
    param_2[2] = fVar77;
  }
  uVar23 = auVar76._0_4_;
  auVar79._0_12_ = ZEXT812(0);
  auVar79._12_4_ = 0;
  _local_4c0 = ZEXT1632(auVar79);
  _local_4e0 = ZEXT1632(auVar79);
  local_2a0 = ZEXT1632(auVar79);
  auVar45 = ZEXT1632(auVar79);
  local_120._4_4_ = __real_3f800000;
  local_120._0_4_ = __real_3f800000;
  local_120._8_4_ = __real_3f800000;
  local_120._12_4_ = __real_3f800000;
  local_120._16_4_ = __real_3f800000;
  local_120._20_4_ = __real_3f800000;
  local_120._24_4_ = __real_3f800000;
  local_120._28_4_ = __real_3f800000;
  _local_4a0 = _local_4c0;
  _local_300 = _local_4e0;
  _local_2e0 = _local_4e0;
  _local_2c0 = _local_4e0;
  _local_280 = local_2a0;
  _local_260 = local_2a0;
  _local_240 = local_2a0;
  local_220 = local_2a0;
  _local_200 = local_2a0;
  _local_1e0 = local_2a0;
  _local_1c0 = local_2a0;
  local_1a0 = auVar45;
  local_180 = auVar45;
  local_160 = auVar45;
  local_140 = auVar45;
  if ((int)param_8 < iVar32) {
    lVar24 = (longlong)(int)param_8;
    pauVar25 = (undefined1 (*) [32])(param_5 + lVar24 * 0xc);
    pauVar29 = (undefined1 (*) [32])(lVar24 * 0xc + param_4);
    iVar26 = param_8 << 2;
    do {
      auVar137 = *(undefined1 (*) [32])(param_7 + iVar26);
      auVar81 = vcmpps_avx(auVar137,auVar45,8);
      iVar22 = vmovmskps_avx(auVar81);
      if ((iVar22 != 0xff) && ((char)iVar22 != -1)) {
        auVar137 = vcmpps_avx(auVar137,auVar45,0xc);
        auVar65 = vpackssdw_avx(auVar137._0_16_,auVar137._16_16_);
        auVar137 = vpmovsxwd_avx2(auVar65);
        if ((char)iVar22 == '\0') {
          auVar81 = pauVar29[1];
          auVar146 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                  ,auVar81);
          auVar107 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                  ,*pauVar29);
          auVar146 = vblendps_avx(auVar107,auVar146,0x88);
          auVar107 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                  ,auVar81);
          auVar36 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar29[2]);
          auVar107 = vblendps_avx(auVar36,auVar107,0x13);
          auVar39._16_16_ = auVar107._0_16_;
          auVar39._0_16_ = auVar146._0_16_;
          auVar107 = vperm2f128_avx(auVar146,auVar107,0x31);
          auVar81 = vblendps_avx(auVar81,*pauVar29,0x24);
          auVar81 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar81);
          auVar146 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                  ,pauVar29[2]);
          auVar81 = vblendps_avx(auVar81,auVar146,0xe0);
          auVar146 = pauVar25[1];
          auVar36 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar146);
          auVar102 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                  ,*pauVar25);
          auVar36 = vblendps_avx(auVar102,auVar36,0x88);
          auVar102 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                  ,auVar146);
          auVar98 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar25[2]);
          auVar76 = ZEXT1664(auVar76._0_16_);
          auVar102 = vblendps_avx(auVar98,auVar102,0x13);
          auVar118._16_16_ = auVar102._0_16_;
          auVar118._0_16_ = auVar36._0_16_;
          auVar36 = vperm2f128_avx(auVar36,auVar102,0x31);
          auVar146 = vblendps_avx(auVar146,*pauVar25,0x24);
          auVar146 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                  ,auVar146);
          auVar102 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                  ,pauVar25[2]);
          auVar146 = vblendps_avx(auVar146,auVar102,0xe0);
        }
        else {
          auVar39 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar137);
          auVar107 = vgatherdps(ZEXT832(0) << 0x20,auVar137);
          auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar137);
          auVar118 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar137);
          auVar36 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar137);
          auVar146 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar137);
        }
        auVar98 = vmaskmovps_avx(auVar137,*(undefined1 (*) [32])(param_6 + iVar26));
        uVar23 = auVar76._0_4_;
        auVar67._4_4_ = uVar23;
        auVar67._0_4_ = uVar23;
        auVar67._8_4_ = uVar23;
        auVar67._12_4_ = uVar23;
        auVar67._16_4_ = uVar23;
        auVar67._20_4_ = uVar23;
        auVar67._24_4_ = uVar23;
        auVar67._28_4_ = uVar23;
        auVar102 = vsubps_avx(auVar39,auVar67);
        auVar68._4_4_ = local_540;
        auVar68._0_4_ = local_540;
        auVar68._8_4_ = local_540;
        auVar68._12_4_ = local_540;
        auVar68._16_4_ = local_540;
        auVar68._20_4_ = local_540;
        auVar68._24_4_ = local_540;
        auVar68._28_4_ = local_540;
        auVar107 = vsubps_avx(auVar107,auVar68);
        auVar69._4_4_ = local_520;
        auVar69._0_4_ = local_520;
        auVar69._8_4_ = local_520;
        auVar69._12_4_ = local_520;
        auVar69._16_4_ = local_520;
        auVar69._20_4_ = local_520;
        auVar69._24_4_ = local_520;
        auVar69._28_4_ = local_520;
        auVar81 = vsubps_avx(auVar81,auVar69);
        fVar77 = auVar98._0_4_;
        fVar101 = auVar118._0_4_ * fVar77;
        fVar92 = auVar98._4_4_;
        fVar109 = auVar118._4_4_ * fVar92;
        fVar87 = auVar98._8_4_;
        fVar110 = auVar118._8_4_ * fVar87;
        fVar91 = auVar98._12_4_;
        fVar111 = auVar118._12_4_ * fVar91;
        fVar127 = auVar98._16_4_;
        fVar112 = auVar118._16_4_ * fVar127;
        fVar6 = auVar98._20_4_;
        fVar113 = auVar118._20_4_ * fVar6;
        fVar10 = auVar98._24_4_;
        fVar114 = auVar118._24_4_ * fVar10;
        fVar14 = auVar98._28_4_;
        fVar115 = auVar118._28_4_ * fVar14;
        fVar116 = auVar36._0_4_ * fVar77;
        fVar122 = auVar36._4_4_ * fVar92;
        fVar124 = auVar36._8_4_ * fVar87;
        fVar126 = auVar36._12_4_ * fVar91;
        fVar128 = auVar36._16_4_ * fVar127;
        fVar129 = auVar36._20_4_ * fVar6;
        fVar130 = auVar36._24_4_ * fVar10;
        fVar131 = auVar36._28_4_ * fVar14;
        fVar132 = auVar146._0_4_ * fVar77;
        fVar139 = auVar146._4_4_ * fVar92;
        fVar140 = auVar146._8_4_ * fVar87;
        fVar141 = auVar146._12_4_ * fVar91;
        fVar142 = auVar146._16_4_ * fVar127;
        fVar143 = auVar146._20_4_ * fVar6;
        fVar144 = auVar146._24_4_ * fVar10;
        fVar145 = auVar146._28_4_ * fVar14;
        fVar64 = auVar107._0_4_;
        fVar93 = auVar107._4_4_;
        fVar1 = auVar107._8_4_;
        fVar117 = auVar107._12_4_;
        fVar3 = auVar107._16_4_;
        fVar7 = auVar107._20_4_;
        fVar11 = auVar107._24_4_;
        fVar15 = auVar107._28_4_;
        fVar88 = auVar81._0_4_;
        fVar94 = auVar81._4_4_;
        fVar2 = auVar81._8_4_;
        fVar123 = auVar81._12_4_;
        fVar4 = auVar81._16_4_;
        fVar8 = auVar81._20_4_;
        fVar12 = auVar81._24_4_;
        fVar16 = auVar81._28_4_;
        fVar90 = auVar102._0_4_;
        fVar78 = auVar102._4_4_;
        fVar89 = auVar102._8_4_;
        fVar125 = auVar102._12_4_;
        fVar5 = auVar102._16_4_;
        fVar9 = auVar102._20_4_;
        fVar13 = auVar102._24_4_;
        fVar17 = auVar102._28_4_;
        auVar104._0_4_ = (fVar64 * fVar132 - fVar116 * fVar88) + (float)local_4e0._0_4_;
        auVar104._4_4_ = (fVar93 * fVar139 - fVar122 * fVar94) + (float)local_4e0._4_4_;
        auVar104._8_4_ = (fVar1 * fVar140 - fVar124 * fVar2) + fStack_4d8;
        auVar104._12_4_ = (fVar117 * fVar141 - fVar126 * fVar123) + fStack_4d4;
        auVar104._16_4_ = (fVar3 * fVar142 - fVar128 * fVar4) + fStack_4d0;
        auVar104._20_4_ = (fVar7 * fVar143 - fVar129 * fVar8) + fStack_4cc;
        auVar104._24_4_ = (fVar11 * fVar144 - fVar130 * fVar12) + fStack_4c8;
        auVar104._28_4_ = (fVar15 * fVar145 - fVar131 * fVar16) + fStack_4c4;
        auVar119._0_4_ = (fVar88 * fVar101 - fVar132 * fVar90) + (float)local_4c0._0_4_;
        auVar119._4_4_ = (fVar94 * fVar109 - fVar139 * fVar78) + (float)local_4c0._4_4_;
        auVar119._8_4_ = (fVar2 * fVar110 - fVar140 * fVar89) + fStack_4b8;
        auVar119._12_4_ = (fVar123 * fVar111 - fVar141 * fVar125) + fStack_4b4;
        auVar119._16_4_ = (fVar4 * fVar112 - fVar142 * fVar5) + fStack_4b0;
        auVar119._20_4_ = (fVar8 * fVar113 - fVar143 * fVar9) + fStack_4ac;
        auVar119._24_4_ = (fVar12 * fVar114 - fVar144 * fVar13) + fStack_4a8;
        auVar119._28_4_ = (fVar16 * fVar115 - fVar145 * fVar17) + fStack_4a4;
        auVar135._0_4_ = (fVar90 * fVar116 - fVar101 * fVar64) + (float)local_4a0._0_4_;
        auVar135._4_4_ = (fVar78 * fVar122 - fVar109 * fVar93) + (float)local_4a0._4_4_;
        auVar135._8_4_ = (fVar89 * fVar124 - fVar110 * fVar1) + fStack_498;
        auVar135._12_4_ = (fVar125 * fVar126 - fVar111 * fVar117) + fStack_494;
        auVar135._16_4_ = (fVar5 * fVar128 - fVar112 * fVar3) + fStack_490;
        auVar135._20_4_ = (fVar9 * fVar129 - fVar113 * fVar7) + fStack_48c;
        auVar135._24_4_ = (fVar13 * fVar130 - fVar114 * fVar11) + fStack_488;
        auVar135._28_4_ = (fVar17 * fVar131 - fVar115 * fVar15) + fStack_484;
        _local_4e0 = vmaskmovps_avx(auVar137,auVar104);
        _local_4c0 = vmaskmovps_avx(auVar137,auVar119);
        _local_4a0 = vmaskmovps_avx(auVar137,auVar135);
        auVar105._0_4_ = fVar88 * 0.0;
        auVar105._4_4_ = fVar94 * 0.0;
        auVar105._8_4_ = fVar2 * 0.0;
        auVar105._12_4_ = fVar123 * 0.0;
        auVar105._16_4_ = fVar4 * 0.0;
        auVar105._20_4_ = fVar8 * 0.0;
        auVar105._24_4_ = fVar12 * 0.0;
        auVar105._28_4_ = fVar16 * 0.0;
        auVar120._0_4_ = fVar64 * 0.0;
        auVar120._4_4_ = fVar93 * 0.0;
        auVar120._8_4_ = fVar1 * 0.0;
        auVar120._12_4_ = fVar117 * 0.0;
        auVar120._16_4_ = fVar3 * 0.0;
        auVar120._20_4_ = fVar7 * 0.0;
        auVar120._24_4_ = fVar11 * 0.0;
        auVar120._28_4_ = fVar15 * 0.0;
        auVar81 = vsubps_avx(auVar105,auVar105);
        auVar70._0_4_ = -(fVar90 * fVar88) + auVar120._0_4_;
        auVar70._4_4_ = -(fVar78 * fVar94) + auVar120._4_4_;
        auVar70._8_4_ = -(fVar89 * fVar2) + auVar120._8_4_;
        auVar70._12_4_ = -(fVar125 * fVar123) + auVar120._12_4_;
        auVar70._16_4_ = -(fVar5 * fVar4) + auVar120._16_4_;
        auVar70._20_4_ = -(fVar9 * fVar8) + auVar120._20_4_;
        auVar70._24_4_ = -(fVar13 * fVar12) + auVar120._24_4_;
        auVar70._28_4_ = -(fVar17 * fVar16) + auVar120._28_4_;
        auVar146 = vsubps_avx(auVar70,auVar120);
        fVar116 = fVar77 * (-(fVar90 * fVar64) + auVar81._0_4_);
        fVar122 = fVar92 * (-(fVar78 * fVar93) + auVar81._4_4_);
        fVar124 = fVar87 * (-(fVar89 * fVar1) + auVar81._8_4_);
        fVar126 = fVar91 * (-(fVar125 * fVar117) + auVar81._12_4_);
        fVar128 = fVar127 * (-(fVar5 * fVar3) + auVar81._16_4_);
        fVar129 = fVar6 * (-(fVar9 * fVar7) + auVar81._20_4_);
        fVar130 = fVar10 * (-(fVar13 * fVar11) + auVar81._24_4_);
        fVar131 = fVar14 * (-(fVar17 * fVar15) + auVar81._28_4_);
        fVar101 = fVar77 * auVar146._0_4_;
        fVar109 = fVar92 * auVar146._4_4_;
        fVar110 = fVar87 * auVar146._8_4_;
        fVar111 = fVar91 * auVar146._12_4_;
        fVar112 = fVar127 * auVar146._16_4_;
        fVar113 = fVar6 * auVar146._20_4_;
        fVar114 = fVar10 * auVar146._24_4_;
        fVar115 = fVar14 * auVar146._28_4_;
        fVar132 = fVar77 * (fVar90 * 0.0 + (-(fVar90 * 0.0) - fVar64 * fVar88));
        fVar139 = fVar92 * (fVar78 * 0.0 + (-(fVar78 * 0.0) - fVar93 * fVar94));
        fVar140 = fVar87 * (fVar89 * 0.0 + (-(fVar89 * 0.0) - fVar1 * fVar2));
        fVar141 = fVar91 * (fVar125 * 0.0 + (-(fVar125 * 0.0) - fVar117 * fVar123));
        fVar142 = fVar127 * (fVar5 * 0.0 + (-(fVar5 * 0.0) - fVar3 * fVar4));
        fVar143 = fVar6 * (fVar9 * 0.0 + (-(fVar9 * 0.0) - fVar7 * fVar8));
        fVar144 = fVar10 * (fVar13 * 0.0 + (-(fVar13 * 0.0) - fVar11 * fVar12));
        fVar145 = fVar14 * (fVar17 * 0.0 + (-(fVar17 * 0.0) - fVar15 * fVar16));
        auVar155._0_4_ = fVar77 * (fVar64 * fVar64 + fVar88 * fVar88) + (float)local_300._0_4_;
        auVar155._4_4_ = fVar92 * (fVar93 * fVar93 + fVar94 * fVar94) + (float)local_300._4_4_;
        auVar155._8_4_ = fVar87 * (fVar1 * fVar1 + fVar2 * fVar2) + fStack_2f8;
        auVar155._12_4_ = fVar91 * (fVar117 * fVar117 + fVar123 * fVar123) + fStack_2f4;
        auVar155._16_4_ = fVar127 * (fVar3 * fVar3 + fVar4 * fVar4) + fStack_2f0;
        auVar155._20_4_ = fVar6 * (fVar7 * fVar7 + fVar8 * fVar8) + fStack_2ec;
        auVar155._24_4_ = fVar10 * (fVar11 * fVar11 + fVar12 * fVar12) + fStack_2e8;
        auVar155._28_4_ = fVar14 * (fVar15 * fVar15 + fVar16 * fVar16) + fStack_2e4;
        auVar136._0_4_ = fVar116 + (float)local_2e0._0_4_;
        auVar136._4_4_ = fVar122 + (float)local_2e0._4_4_;
        auVar136._8_4_ = fVar124 + fStack_2d8;
        auVar136._12_4_ = fVar126 + fStack_2d4;
        auVar136._16_4_ = fVar128 + fStack_2d0;
        auVar136._20_4_ = fVar129 + fStack_2cc;
        auVar136._24_4_ = fVar130 + fStack_2c8;
        auVar136._28_4_ = fVar131 + fStack_2c4;
        auVar147._0_4_ = fVar101 + (float)local_2c0._0_4_;
        auVar147._4_4_ = fVar109 + (float)local_2c0._4_4_;
        auVar147._8_4_ = fVar110 + fStack_2b8;
        auVar147._12_4_ = fVar111 + fStack_2b4;
        auVar147._16_4_ = fVar112 + fStack_2b0;
        auVar147._20_4_ = fVar113 + fStack_2ac;
        auVar147._24_4_ = fVar114 + fStack_2a8;
        auVar147._28_4_ = fVar115 + fStack_2a4;
        auVar97._0_4_ = fVar116 + (float)local_280._0_4_;
        auVar97._4_4_ = fVar122 + (float)local_280._4_4_;
        auVar97._8_4_ = fVar124 + fStack_278;
        auVar97._12_4_ = fVar126 + fStack_274;
        auVar97._16_4_ = fVar128 + fStack_270;
        auVar97._20_4_ = fVar129 + fStack_26c;
        auVar97._24_4_ = fVar130 + fStack_268;
        auVar97._28_4_ = fVar131 + fStack_264;
        auVar121._0_4_ = fVar77 * (fVar88 * fVar88 + fVar90 * fVar90) + (float)local_260._0_4_;
        auVar121._4_4_ = fVar92 * (fVar94 * fVar94 + fVar78 * fVar78) + (float)local_260._4_4_;
        auVar121._8_4_ = fVar87 * (fVar2 * fVar2 + fVar89 * fVar89) + fStack_258;
        auVar121._12_4_ = fVar91 * (fVar123 * fVar123 + fVar125 * fVar125) + fStack_254;
        auVar121._16_4_ = fVar127 * (fVar4 * fVar4 + fVar5 * fVar5) + fStack_250;
        auVar121._20_4_ = fVar6 * (fVar8 * fVar8 + fVar9 * fVar9) + fStack_24c;
        auVar121._24_4_ = fVar10 * (fVar12 * fVar12 + fVar13 * fVar13) + fStack_248;
        auVar121._28_4_ = fVar14 * (fVar16 * fVar16 + fVar17 * fVar17) + fStack_244;
        auVar152._0_4_ = fVar132 + (float)local_240._0_4_;
        auVar152._4_4_ = fVar139 + (float)local_240._4_4_;
        auVar152._8_4_ = fVar140 + fStack_238;
        auVar152._12_4_ = fVar141 + fStack_234;
        auVar152._16_4_ = fVar142 + fStack_230;
        auVar152._20_4_ = fVar143 + fStack_22c;
        auVar152._24_4_ = fVar144 + fStack_228;
        auVar152._28_4_ = fVar145 + fStack_224;
        auVar71._0_4_ = fVar101 + (float)local_200._0_4_;
        auVar71._4_4_ = fVar109 + (float)local_200._4_4_;
        auVar71._8_4_ = fVar110 + fStack_1f8;
        auVar71._12_4_ = fVar111 + fStack_1f4;
        auVar71._16_4_ = fVar112 + fStack_1f0;
        auVar71._20_4_ = fVar113 + fStack_1ec;
        auVar71._24_4_ = fVar114 + fStack_1e8;
        auVar71._28_4_ = fVar115 + fStack_1e4;
        auVar106._0_4_ = fVar132 + (float)local_1e0._0_4_;
        auVar106._4_4_ = fVar139 + (float)local_1e0._4_4_;
        auVar106._8_4_ = fVar140 + fStack_1d8;
        auVar106._12_4_ = fVar141 + fStack_1d4;
        auVar106._16_4_ = fVar142 + fStack_1d0;
        auVar106._20_4_ = fVar143 + fStack_1cc;
        auVar106._24_4_ = fVar144 + fStack_1c8;
        auVar106._28_4_ = fVar145 + fStack_1c4;
        auVar40._0_4_ = fVar77 * (fVar64 * fVar64 + fVar90 * fVar90) + (float)local_1c0._0_4_;
        auVar40._4_4_ = fVar92 * (fVar93 * fVar93 + fVar78 * fVar78) + (float)local_1c0._4_4_;
        auVar40._8_4_ = fVar87 * (fVar1 * fVar1 + fVar89 * fVar89) + fStack_1b8;
        auVar40._12_4_ = fVar91 * (fVar117 * fVar117 + fVar125 * fVar125) + fStack_1b4;
        auVar40._16_4_ = fVar127 * (fVar3 * fVar3 + fVar5 * fVar5) + fStack_1b0;
        auVar40._20_4_ = fVar6 * (fVar7 * fVar7 + fVar9 * fVar9) + fStack_1ac;
        auVar40._24_4_ = fVar10 * (fVar11 * fVar11 + fVar13 * fVar13) + fStack_1a8;
        auVar40._28_4_ = fVar14 * (fVar15 * fVar15 + fVar17 * fVar17) + fStack_1a4;
        _local_300 = vmaskmovps_avx(auVar137,auVar155);
        _local_2e0 = vmaskmovps_avx(auVar137,auVar136);
        _local_2c0 = vmaskmovps_avx(auVar137,auVar147);
        local_2a0 = vmaskmovps_avx(auVar137,auVar45);
        _local_280 = vmaskmovps_avx(auVar137,auVar97);
        _local_260 = vmaskmovps_avx(auVar137,auVar121);
        _local_240 = vmaskmovps_avx(auVar137,auVar152);
        local_220 = vmaskmovps_avx(auVar137,auVar45);
        _local_200 = vmaskmovps_avx(auVar137,auVar71);
        _local_1e0 = vmaskmovps_avx(auVar137,auVar106);
        _local_1c0 = vmaskmovps_avx(auVar137,auVar40);
        local_1a0 = vmaskmovps_avx(auVar137,auVar45);
        local_180 = vmaskmovps_avx(auVar137,auVar45);
        local_160 = vmaskmovps_avx(auVar137,auVar45);
        local_140 = vmaskmovps_avx(auVar137,auVar45);
        auVar19._4_4_ = __real_3f800000;
        auVar19._0_4_ = __real_3f800000;
        auVar19._8_4_ = __real_3f800000;
        auVar19._12_4_ = __real_3f800000;
        auVar19._16_4_ = __real_3f800000;
        auVar19._20_4_ = __real_3f800000;
        auVar19._24_4_ = __real_3f800000;
        auVar19._28_4_ = __real_3f800000;
        local_120 = vmaskmovps_avx(auVar137,auVar19);
      }
      uVar23 = auVar76._0_4_;
      lVar24 = lVar24 + 8;
      pauVar25 = pauVar25 + 3;
      pauVar29 = pauVar29 + 3;
      iVar26 = iVar26 + 0x20;
    } while (lVar24 < iVar32);
    param_8 = (uint)lVar24;
  }
  if ((int)param_8 < param_9) {
    auVar18._0_4_ =
         param_8 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar18._4_4_ = param_8 + _UNK_150b50ae4;
    auVar18._8_4_ = param_8 + _UNK_150b50ae8;
    auVar18._12_4_ = param_8 + _UNK_150b50aec;
    auVar18._16_4_ = param_8 + _UNK_150b50af0;
    auVar18._20_4_ = param_8 + _UNK_150b50af4;
    auVar18._24_4_ = param_8 + _UNK_150b50af8;
    auVar18._28_4_ = param_8 + _UNK_150b50afc;
    auVar72._4_4_ = param_9;
    auVar72._0_4_ = param_9;
    auVar72._8_4_ = param_9;
    auVar72._12_4_ = param_9;
    auVar72._16_4_ = param_9;
    auVar72._20_4_ = param_9;
    auVar72._24_4_ = param_9;
    auVar72._28_4_ = param_9;
    auVar81 = vpcmpgtd_avx2(auVar72,auVar18);
    auVar137 = vmaskmovps_avx(auVar81,*(undefined1 (*) [32])(param_7 + (int)(param_8 * 4)));
    auVar33._0_12_ = ZEXT812(0);
    auVar33._12_4_ = 0;
    auVar45 = vcmpps_avx(auVar137,ZEXT1632(auVar33),0xc);
    auVar45 = auVar45 & auVar81;
    if ((((((((SUB321(auVar45 >> 0x1f,0) & 1) != 0 || (SUB321(auVar45 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar45 >> 0x5f,0) & 1) != 0) || SUB321(auVar45 >> 0x7f,0) != '\0') ||
          (SUB321(auVar45 >> 0x9f,0) & 1) != 0) || SUB321(auVar45 >> 0xbf,0) != '\0') ||
        (SUB321(auVar45 >> 0xdf,0) & 1) != 0) || auVar45[0x1f] < '\0') {
      auVar45 = vcmpps_avx(auVar137,ZEXT1632(auVar33),8);
      auVar43._0_4_ = auVar45._0_4_ & auVar81._0_4_;
      auVar43._4_4_ = auVar45._4_4_ & auVar81._4_4_;
      auVar43._8_4_ = auVar45._8_4_ & auVar81._8_4_;
      auVar43._12_4_ = auVar45._12_4_ & auVar81._12_4_;
      auVar83._16_4_ = auVar45._16_4_ & auVar81._16_4_;
      auVar83._0_16_ = auVar43;
      auVar83._20_4_ = auVar45._20_4_ & auVar81._20_4_;
      auVar83._24_4_ = auVar45._24_4_ & auVar81._24_4_;
      auVar83._28_4_ = auVar45._28_4_ & auVar81._28_4_;
      uVar28 = vmovmskps_avx(auVar83);
      uVar27 = vmovmskps_avx(auVar81);
      if ((char)uVar28 != (char)uVar27) {
        auVar42 = vpackssdw_avx(auVar43,auVar83._16_16_);
        auVar65 = vpackssdw_avx(auVar81._0_16_,auVar81._16_16_);
        auVar42 = auVar42 ^ auVar65;
        lVar24 = (longlong)(int)param_8;
        pauVar25 = (undefined1 (*) [32])(param_4 + lVar24 * 0xc);
        auVar65 = vpacksswb_avx(auVar42,auVar42);
        auVar45 = vpmovsxwd_avx2(auVar42);
        if ((byte)(SUB161(auVar65 >> 7,0) & 1 | (SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                   (SUB161(auVar65 >> 0x17,0) & 1) << 2 | (SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                   (SUB161(auVar65 >> 0x27,0) & 1) << 4 | (SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                   (SUB161(auVar65 >> 0x37,0) & 1) << 6 | SUB161(auVar65 >> 0x3f,0) << 7) == 0xff) {
          auVar137 = pauVar25[1];
          auVar81 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar137);
          auVar146 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                  ,*pauVar25);
          auVar81 = vblendps_avx(auVar146,auVar81,0x88);
          auVar146 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                  ,auVar137);
          auVar107 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                  ,pauVar25[2]);
          auVar146 = vblendps_avx(auVar107,auVar146,0x13);
          auVar159._16_16_ = auVar146._0_16_;
          auVar159._0_16_ = auVar81._0_16_;
          auVar98 = vperm2f128_avx(auVar81,auVar146,0x31);
          auVar137 = vblendps_avx(auVar137,*pauVar25,0x24);
          auVar137 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                  ,auVar137);
          auVar81 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar25[2]);
          auVar107 = vblendps_avx(auVar137,auVar81,0xe0);
          auVar137 = *(undefined1 (*) [32])(param_5 + lVar24 * 0xc);
          auVar81 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar24 * 0xc);
          auVar146 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar24 * 0xc);
          auVar36 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar81);
          auVar102 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                  ,auVar137);
          auVar36 = vblendps_avx(auVar102,auVar36,0x88);
          auVar102 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                  ,auVar81);
          auVar59 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,auVar146);
          auVar102 = vblendps_avx(auVar59,auVar102,0x13);
          auVar148._16_16_ = auVar102._0_16_;
          auVar148._0_16_ = auVar36._0_16_;
          auVar36 = vperm2f128_avx(auVar36,auVar102,0x31);
          auVar137 = vblendps_avx(auVar81,auVar137,0x24);
          auVar137 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                  ,auVar137);
          auVar81 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,auVar146);
          auVar137 = vblendps_avx(auVar137,auVar81,0xe0);
        }
        else {
          auVar159 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar45);
          auVar98 = vgatherdps(ZEXT1632(auVar33),auVar45);
          auVar107 = vgatherdps(ZEXT832(0),auVar45);
          auVar148 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar45);
          auVar36 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar45);
          auVar137 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar45);
        }
        auVar102 = vmaskmovps_avx(auVar45,*(undefined1 (*) [32])(param_6 + (int)(param_8 * 4)));
        auVar47._4_4_ = uVar23;
        auVar47._0_4_ = uVar23;
        auVar47._8_4_ = uVar23;
        auVar47._12_4_ = uVar23;
        auVar47._16_4_ = uVar23;
        auVar47._20_4_ = uVar23;
        auVar47._24_4_ = uVar23;
        auVar47._28_4_ = uVar23;
        auVar81 = vsubps_avx(auVar159,auVar47);
        auVar54._4_4_ = local_540;
        auVar54._0_4_ = local_540;
        auVar54._8_4_ = local_540;
        auVar54._12_4_ = local_540;
        auVar54._16_4_ = local_540;
        auVar54._20_4_ = local_540;
        auVar54._24_4_ = local_540;
        auVar54._28_4_ = local_540;
        auVar146 = vsubps_avx(auVar98,auVar54);
        auVar61._4_4_ = local_520;
        auVar61._0_4_ = local_520;
        auVar61._8_4_ = local_520;
        auVar61._12_4_ = local_520;
        auVar61._16_4_ = local_520;
        auVar61._20_4_ = local_520;
        auVar61._24_4_ = local_520;
        auVar61._28_4_ = local_520;
        auVar107 = vsubps_avx(auVar107,auVar61);
        fVar77 = auVar102._0_4_;
        fVar101 = auVar148._0_4_ * fVar77;
        fVar92 = auVar102._4_4_;
        fVar109 = auVar148._4_4_ * fVar92;
        fVar87 = auVar102._8_4_;
        fVar110 = auVar148._8_4_ * fVar87;
        fVar91 = auVar102._12_4_;
        fVar111 = auVar148._12_4_ * fVar91;
        fVar127 = auVar102._16_4_;
        fVar112 = auVar148._16_4_ * fVar127;
        fVar6 = auVar102._20_4_;
        fVar113 = auVar148._20_4_ * fVar6;
        fVar10 = auVar102._24_4_;
        fVar114 = auVar148._24_4_ * fVar10;
        fVar14 = auVar102._28_4_;
        fVar115 = auVar148._28_4_ * fVar14;
        fVar116 = auVar36._0_4_ * fVar77;
        fVar122 = auVar36._4_4_ * fVar92;
        fVar124 = auVar36._8_4_ * fVar87;
        fVar126 = auVar36._12_4_ * fVar91;
        fVar128 = auVar36._16_4_ * fVar127;
        fVar129 = auVar36._20_4_ * fVar6;
        fVar130 = auVar36._24_4_ * fVar10;
        fVar131 = auVar36._28_4_ * fVar14;
        fVar132 = auVar137._0_4_ * fVar77;
        fVar139 = auVar137._4_4_ * fVar92;
        fVar140 = auVar137._8_4_ * fVar87;
        fVar141 = auVar137._12_4_ * fVar91;
        fVar142 = auVar137._16_4_ * fVar127;
        fVar143 = auVar137._20_4_ * fVar6;
        fVar144 = auVar137._24_4_ * fVar10;
        fVar145 = auVar137._28_4_ * fVar14;
        fVar64 = auVar146._0_4_;
        fVar93 = auVar146._4_4_;
        fVar1 = auVar146._8_4_;
        fVar117 = auVar146._12_4_;
        fVar3 = auVar146._16_4_;
        fVar7 = auVar146._20_4_;
        fVar11 = auVar146._24_4_;
        fVar15 = auVar146._28_4_;
        fVar88 = auVar107._0_4_;
        fVar94 = auVar107._4_4_;
        fVar2 = auVar107._8_4_;
        fVar123 = auVar107._12_4_;
        fVar4 = auVar107._16_4_;
        fVar8 = auVar107._20_4_;
        fVar12 = auVar107._24_4_;
        fVar16 = auVar107._28_4_;
        fVar90 = auVar81._0_4_;
        fVar78 = auVar81._4_4_;
        fVar89 = auVar81._8_4_;
        fVar125 = auVar81._12_4_;
        fVar5 = auVar81._16_4_;
        fVar9 = auVar81._20_4_;
        fVar13 = auVar81._24_4_;
        fVar17 = auVar81._28_4_;
        auVar73._0_4_ = (fVar64 * fVar132 - fVar116 * fVar88) + (float)local_4e0._0_4_;
        auVar73._4_4_ = (fVar93 * fVar139 - fVar122 * fVar94) + (float)local_4e0._4_4_;
        auVar73._8_4_ = (fVar1 * fVar140 - fVar124 * fVar2) + fStack_4d8;
        auVar73._12_4_ = (fVar117 * fVar141 - fVar126 * fVar123) + fStack_4d4;
        auVar73._16_4_ = (fVar3 * fVar142 - fVar128 * fVar4) + fStack_4d0;
        auVar73._20_4_ = (fVar7 * fVar143 - fVar129 * fVar8) + fStack_4cc;
        auVar73._24_4_ = (fVar11 * fVar144 - fVar130 * fVar12) + fStack_4c8;
        auVar73._28_4_ = (fVar15 * fVar145 - fVar131 * fVar16) + fStack_4c4;
        auVar84._0_4_ = (fVar88 * fVar101 - fVar132 * fVar90) + (float)local_4c0._0_4_;
        auVar84._4_4_ = (fVar94 * fVar109 - fVar139 * fVar78) + (float)local_4c0._4_4_;
        auVar84._8_4_ = (fVar2 * fVar110 - fVar140 * fVar89) + fStack_4b8;
        auVar84._12_4_ = (fVar123 * fVar111 - fVar141 * fVar125) + fStack_4b4;
        auVar84._16_4_ = (fVar4 * fVar112 - fVar142 * fVar5) + fStack_4b0;
        auVar84._20_4_ = (fVar8 * fVar113 - fVar143 * fVar9) + fStack_4ac;
        auVar84._24_4_ = (fVar12 * fVar114 - fVar144 * fVar13) + fStack_4a8;
        auVar84._28_4_ = (fVar16 * fVar115 - fVar145 * fVar17) + fStack_4a4;
        auVar99._0_4_ = (fVar90 * fVar116 - fVar101 * fVar64) + (float)local_4a0._0_4_;
        auVar99._4_4_ = (fVar78 * fVar122 - fVar109 * fVar93) + (float)local_4a0._4_4_;
        auVar99._8_4_ = (fVar89 * fVar124 - fVar110 * fVar1) + fStack_498;
        auVar99._12_4_ = (fVar125 * fVar126 - fVar111 * fVar117) + fStack_494;
        auVar99._16_4_ = (fVar5 * fVar128 - fVar112 * fVar3) + fStack_490;
        auVar99._20_4_ = (fVar9 * fVar129 - fVar113 * fVar7) + fStack_48c;
        auVar99._24_4_ = (fVar13 * fVar130 - fVar114 * fVar11) + fStack_488;
        auVar99._28_4_ = (fVar17 * fVar131 - fVar115 * fVar15) + fStack_484;
        _local_4e0 = vmaskmovps_avx(auVar45,auVar73);
        _local_4c0 = vmaskmovps_avx(auVar45,auVar84);
        _local_4a0 = vmaskmovps_avx(auVar45,auVar99);
        auVar74._0_4_ = fVar88 * 0.0;
        auVar74._4_4_ = fVar94 * 0.0;
        auVar74._8_4_ = fVar2 * 0.0;
        auVar74._12_4_ = fVar123 * 0.0;
        auVar74._16_4_ = fVar4 * 0.0;
        auVar74._20_4_ = fVar8 * 0.0;
        auVar74._24_4_ = fVar12 * 0.0;
        auVar74._28_4_ = fVar16 * 0.0;
        auVar85._0_4_ = fVar64 * 0.0;
        auVar85._4_4_ = fVar93 * 0.0;
        auVar85._8_4_ = fVar1 * 0.0;
        auVar85._12_4_ = fVar117 * 0.0;
        auVar85._16_4_ = fVar3 * 0.0;
        auVar85._20_4_ = fVar7 * 0.0;
        auVar85._24_4_ = fVar11 * 0.0;
        auVar85._28_4_ = fVar15 * 0.0;
        auVar137 = vsubps_avx(auVar74,auVar74);
        auVar62._0_4_ = -(fVar90 * fVar88) + auVar85._0_4_;
        auVar62._4_4_ = -(fVar78 * fVar94) + auVar85._4_4_;
        auVar62._8_4_ = -(fVar89 * fVar2) + auVar85._8_4_;
        auVar62._12_4_ = -(fVar125 * fVar123) + auVar85._12_4_;
        auVar62._16_4_ = -(fVar5 * fVar4) + auVar85._16_4_;
        auVar62._20_4_ = -(fVar9 * fVar8) + auVar85._20_4_;
        auVar62._24_4_ = -(fVar13 * fVar12) + auVar85._24_4_;
        auVar62._28_4_ = -(fVar17 * fVar16) + auVar85._28_4_;
        auVar81 = vsubps_avx(auVar62,auVar85);
        fVar116 = fVar77 * (-(fVar90 * fVar64) + auVar137._0_4_);
        fVar122 = fVar92 * (-(fVar78 * fVar93) + auVar137._4_4_);
        fVar124 = fVar87 * (-(fVar89 * fVar1) + auVar137._8_4_);
        fVar126 = fVar91 * (-(fVar125 * fVar117) + auVar137._12_4_);
        fVar128 = fVar127 * (-(fVar5 * fVar3) + auVar137._16_4_);
        fVar129 = fVar6 * (-(fVar9 * fVar7) + auVar137._20_4_);
        fVar130 = fVar10 * (-(fVar13 * fVar11) + auVar137._24_4_);
        fVar131 = fVar14 * (-(fVar17 * fVar15) + auVar137._28_4_);
        fVar101 = fVar77 * auVar81._0_4_;
        fVar109 = fVar92 * auVar81._4_4_;
        fVar110 = fVar87 * auVar81._8_4_;
        fVar111 = fVar91 * auVar81._12_4_;
        fVar112 = fVar127 * auVar81._16_4_;
        fVar113 = fVar6 * auVar81._20_4_;
        fVar114 = fVar10 * auVar81._24_4_;
        fVar115 = fVar14 * auVar81._28_4_;
        fVar132 = fVar77 * (fVar90 * 0.0 + (-(fVar90 * 0.0) - fVar64 * fVar88));
        fVar139 = fVar92 * (fVar78 * 0.0 + (-(fVar78 * 0.0) - fVar93 * fVar94));
        fVar140 = fVar87 * (fVar89 * 0.0 + (-(fVar89 * 0.0) - fVar1 * fVar2));
        fVar141 = fVar91 * (fVar125 * 0.0 + (-(fVar125 * 0.0) - fVar117 * fVar123));
        fVar142 = fVar127 * (fVar5 * 0.0 + (-(fVar5 * 0.0) - fVar3 * fVar4));
        fVar143 = fVar6 * (fVar9 * 0.0 + (-(fVar9 * 0.0) - fVar7 * fVar8));
        fVar144 = fVar10 * (fVar13 * 0.0 + (-(fVar13 * 0.0) - fVar11 * fVar12));
        fVar145 = fVar14 * (fVar17 * 0.0 + (-(fVar17 * 0.0) - fVar15 * fVar16));
        auVar149._0_4_ = fVar77 * (fVar64 * fVar64 + fVar88 * fVar88) + (float)local_300._0_4_;
        auVar149._4_4_ = fVar92 * (fVar93 * fVar93 + fVar94 * fVar94) + (float)local_300._4_4_;
        auVar149._8_4_ = fVar87 * (fVar1 * fVar1 + fVar2 * fVar2) + fStack_2f8;
        auVar149._12_4_ = fVar91 * (fVar117 * fVar117 + fVar123 * fVar123) + fStack_2f4;
        auVar149._16_4_ = fVar127 * (fVar3 * fVar3 + fVar4 * fVar4) + fStack_2f0;
        auVar149._20_4_ = fVar6 * (fVar7 * fVar7 + fVar8 * fVar8) + fStack_2ec;
        auVar149._24_4_ = fVar10 * (fVar11 * fVar11 + fVar12 * fVar12) + fStack_2e8;
        auVar149._28_4_ = fVar14 * (fVar15 * fVar15 + fVar16 * fVar16) + fStack_2e4;
        auVar100._0_4_ = fVar116 + (float)local_2e0._0_4_;
        auVar100._4_4_ = fVar122 + (float)local_2e0._4_4_;
        auVar100._8_4_ = fVar124 + fStack_2d8;
        auVar100._12_4_ = fVar126 + fStack_2d4;
        auVar100._16_4_ = fVar128 + fStack_2d0;
        auVar100._20_4_ = fVar129 + fStack_2cc;
        auVar100._24_4_ = fVar130 + fStack_2c8;
        auVar100._28_4_ = fVar131 + fStack_2c4;
        auVar108._0_4_ = fVar101 + (float)local_2c0._0_4_;
        auVar108._4_4_ = fVar109 + (float)local_2c0._4_4_;
        auVar108._8_4_ = fVar110 + fStack_2b8;
        auVar108._12_4_ = fVar111 + fStack_2b4;
        auVar108._16_4_ = fVar112 + fStack_2b0;
        auVar108._20_4_ = fVar113 + fStack_2ac;
        auVar108._24_4_ = fVar114 + fStack_2a8;
        auVar108._28_4_ = fVar115 + fStack_2a4;
        auVar63._0_4_ = fVar116 + (float)local_280._0_4_;
        auVar63._4_4_ = fVar122 + (float)local_280._4_4_;
        auVar63._8_4_ = fVar124 + fStack_278;
        auVar63._12_4_ = fVar126 + fStack_274;
        auVar63._16_4_ = fVar128 + fStack_270;
        auVar63._20_4_ = fVar129 + fStack_26c;
        auVar63._24_4_ = fVar130 + fStack_268;
        auVar63._28_4_ = fVar131 + fStack_264;
        auVar86._0_4_ = fVar77 * (fVar90 * fVar90 + fVar88 * fVar88) + (float)local_260._0_4_;
        auVar86._4_4_ = fVar92 * (fVar78 * fVar78 + fVar94 * fVar94) + (float)local_260._4_4_;
        auVar86._8_4_ = fVar87 * (fVar89 * fVar89 + fVar2 * fVar2) + fStack_258;
        auVar86._12_4_ = fVar91 * (fVar125 * fVar125 + fVar123 * fVar123) + fStack_254;
        auVar86._16_4_ = fVar127 * (fVar5 * fVar5 + fVar4 * fVar4) + fStack_250;
        auVar86._20_4_ = fVar6 * (fVar9 * fVar9 + fVar8 * fVar8) + fStack_24c;
        auVar86._24_4_ = fVar10 * (fVar13 * fVar13 + fVar12 * fVar12) + fStack_248;
        auVar86._28_4_ = fVar14 * (fVar17 * fVar17 + fVar16 * fVar16) + fStack_244;
        auVar138._0_4_ = fVar132 + (float)local_240._0_4_;
        auVar138._4_4_ = fVar139 + (float)local_240._4_4_;
        auVar138._8_4_ = fVar140 + fStack_238;
        auVar138._12_4_ = fVar141 + fStack_234;
        auVar138._16_4_ = fVar142 + fStack_230;
        auVar138._20_4_ = fVar143 + fStack_22c;
        auVar138._24_4_ = fVar144 + fStack_228;
        auVar138._28_4_ = fVar145 + fStack_224;
        auVar55._0_4_ = fVar101 + (float)local_200._0_4_;
        auVar55._4_4_ = fVar109 + (float)local_200._4_4_;
        auVar55._8_4_ = fVar110 + fStack_1f8;
        auVar55._12_4_ = fVar111 + fStack_1f4;
        auVar55._16_4_ = fVar112 + fStack_1f0;
        auVar55._20_4_ = fVar113 + fStack_1ec;
        auVar55._24_4_ = fVar114 + fStack_1e8;
        auVar55._28_4_ = fVar115 + fStack_1e4;
        auVar75._0_4_ = fVar132 + (float)local_1e0._0_4_;
        auVar75._4_4_ = fVar139 + (float)local_1e0._4_4_;
        auVar75._8_4_ = fVar140 + fStack_1d8;
        auVar75._12_4_ = fVar141 + fStack_1d4;
        auVar75._16_4_ = fVar142 + fStack_1d0;
        auVar75._20_4_ = fVar143 + fStack_1cc;
        auVar75._24_4_ = fVar144 + fStack_1c8;
        auVar75._28_4_ = fVar145 + fStack_1c4;
        auVar48._0_4_ = fVar77 * (fVar64 * fVar64 + fVar90 * fVar90) + (float)local_1c0._0_4_;
        auVar48._4_4_ = fVar92 * (fVar93 * fVar93 + fVar78 * fVar78) + (float)local_1c0._4_4_;
        auVar48._8_4_ = fVar87 * (fVar1 * fVar1 + fVar89 * fVar89) + fStack_1b8;
        auVar48._12_4_ = fVar91 * (fVar117 * fVar117 + fVar125 * fVar125) + fStack_1b4;
        auVar48._16_4_ = fVar127 * (fVar3 * fVar3 + fVar5 * fVar5) + fStack_1b0;
        auVar48._20_4_ = fVar6 * (fVar7 * fVar7 + fVar9 * fVar9) + fStack_1ac;
        auVar48._24_4_ = fVar10 * (fVar11 * fVar11 + fVar13 * fVar13) + fStack_1a8;
        auVar48._28_4_ = fVar14 * (fVar15 * fVar15 + fVar17 * fVar17) + fStack_1a4;
        _local_300 = vmaskmovps_avx(auVar45,auVar149);
        _local_2e0 = vmaskmovps_avx(auVar45,auVar100);
        _local_2c0 = vmaskmovps_avx(auVar45,auVar108);
        auVar137 = ZEXT1232(ZEXT812(0));
        local_2a0 = vmaskmovps_avx(auVar45,auVar137);
        _local_280 = vmaskmovps_avx(auVar45,auVar63);
        _local_260 = vmaskmovps_avx(auVar45,auVar86);
        _local_240 = vmaskmovps_avx(auVar45,auVar138);
        local_220 = vmaskmovps_avx(auVar45,auVar137);
        _local_200 = vmaskmovps_avx(auVar45,auVar55);
        _local_1e0 = vmaskmovps_avx(auVar45,auVar75);
        _local_1c0 = vmaskmovps_avx(auVar45,auVar48);
        local_1a0 = vmaskmovps_avx(auVar45,auVar137);
        local_180 = vmaskmovps_avx(auVar45,auVar137);
        local_160 = vmaskmovps_avx(auVar45,auVar137);
        local_140 = vmaskmovps_avx(auVar45,auVar137);
        auVar20._4_4_ = __real_3f800000;
        auVar20._0_4_ = __real_3f800000;
        auVar20._8_4_ = __real_3f800000;
        auVar20._12_4_ = __real_3f800000;
        auVar20._16_4_ = __real_3f800000;
        auVar20._20_4_ = __real_3f800000;
        auVar20._24_4_ = __real_3f800000;
        auVar20._28_4_ = __real_3f800000;
        local_120 = vmaskmovps_avx(auVar45,auVar20);
      }
    }
  }
  auVar45 = vhaddps_avx(_local_300,_local_300);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  auVar137 = vhaddps_avx(_local_2e0,_local_2e0);
  auVar137 = vhaddps_avx(auVar137,auVar137);
  auVar33 = ZEXT416((uint)(auVar45._0_4_ + auVar45._16_4_));
  auVar45 = vhaddps_avx(_local_2c0,_local_2c0);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  auVar133 = ZEXT416((uint)(auVar137._0_4_ + auVar137._16_4_));
  auVar137 = vhaddps_avx(local_2a0,local_2a0);
  auVar137 = vhaddps_avx(auVar137,auVar137);
  auVar81 = vhaddps_avx(_local_280,_local_280);
  fVar77 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(auVar81,auVar81);
  auVar58 = ZEXT416((uint)(auVar137._0_4_ + auVar137._16_4_));
  fVar64 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(_local_260,_local_260);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  auVar137 = vhaddps_avx(_local_240,_local_240);
  fVar88 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(auVar137,auVar137);
  auVar137 = vhaddps_avx(local_220,local_220);
  auVar137 = vhaddps_avx(auVar137,auVar137);
  auVar81 = vhaddps_avx(_local_200,_local_200);
  fVar90 = auVar45._0_4_ + auVar45._16_4_;
  auVar34 = ZEXT416((uint)fVar90);
  auVar45 = vhaddps_avx(auVar81,auVar81);
  fVar92 = auVar137._0_4_ + auVar137._16_4_;
  fVar93 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(_local_1e0,_local_1e0);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  auVar137 = vhaddps_avx(_local_1c0,_local_1c0);
  fVar94 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(auVar137,auVar137);
  auVar137 = vhaddps_avx(local_1a0,local_1a0);
  auVar137 = vhaddps_avx(auVar137,auVar137);
  auVar81 = vhaddps_avx(local_180,local_180);
  fVar78 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(auVar81,auVar81);
  fVar87 = auVar137._0_4_ + auVar137._16_4_;
  fVar1 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(local_160,local_160);
  auVar45 = vhaddps_avx(auVar45,auVar45);
  auVar137 = vhaddps_avx(local_140,local_140);
  fVar2 = auVar45._0_4_ + auVar45._16_4_;
  auVar45 = vhaddps_avx(auVar137,auVar137);
  auVar137 = vhaddps_avx(local_120,local_120);
  auVar137 = vhaddps_avx(auVar137,auVar137);
  fVar89 = auVar45._0_4_ + auVar45._16_4_;
  fVar91 = auVar137._0_4_ + auVar137._16_4_;
  auVar65 = vinsertps_avx(auVar133,auVar58,0x10);
  auVar65 = vinsertps_avx(auVar65,ZEXT416((uint)fVar94),0x20);
  auVar44 = ZEXT416((uint)fVar87);
  auVar65 = vinsertps_avx(auVar65,auVar44,0x30);
  auVar156 = ZEXT416((uint)fVar64);
  auVar42 = vinsertps_avx(auVar156,auVar34,0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416((uint)fVar1),0x20);
  auVar43 = ZEXT416((uint)fVar89);
  auVar42 = vinsertps_avx(auVar42,auVar43,0x30);
  auVar66 = vinsertps_avx(auVar33,ZEXT416((uint)fVar77),0x10);
  auVar66 = vinsertps_avx(auVar66,ZEXT416((uint)fVar93),0x20);
  auVar150 = ZEXT416((uint)fVar78);
  auVar66 = vinsertps_avx(auVar66,auVar150,0x30);
  auVar79 = vinsertps_avx(ZEXT416((uint)fVar88),ZEXT416((uint)fVar92),0x10);
  auVar79 = vinsertps_avx(auVar79,ZEXT416((uint)fVar2),0x20);
  auVar50 = ZEXT416((uint)fVar91);
  auVar79 = vinsertps_avx(auVar79,auVar50,0x30);
  auVar134._0_4_ = auVar66._0_4_ * auVar79._0_4_ - auVar65._0_4_ * auVar42._0_4_;
  auVar134._4_4_ = auVar66._4_4_ * auVar79._4_4_ - auVar65._4_4_ * auVar42._4_4_;
  auVar134._8_4_ = auVar66._8_4_ * auVar79._8_4_ - auVar65._8_4_ * auVar42._8_4_;
  auVar134._12_4_ = auVar66._12_4_ * auVar79._12_4_ - auVar65._12_4_ * auVar42._12_4_;
  auVar65 = vinsertps_avx(ZEXT416((uint)fVar1),ZEXT416((uint)fVar2),0x10);
  auVar65 = vinsertps_avx(auVar65,ZEXT416((uint)fVar93),0x20);
  auVar65 = vinsertps_avx(auVar65,ZEXT416((uint)fVar94),0x30);
  auVar66 = vshufps_avx(ZEXT416((uint)fVar87),ZEXT416((uint)fVar89),0);
  auVar42 = vinsertps_avx(ZEXT416((uint)fVar93),ZEXT416((uint)fVar94),0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416((uint)fVar1),0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416((uint)fVar2),0x30);
  auVar79 = vshufps_avx(ZEXT416((uint)fVar91),ZEXT416((uint)fVar78),0);
  fVar117 = auVar42._0_4_;
  auVar57._0_4_ = fVar117 * auVar79._0_4_ - auVar65._0_4_ * auVar66._0_4_;
  fVar123 = auVar42._4_4_;
  auVar57._4_4_ = fVar123 * auVar79._4_4_ - auVar65._4_4_ * auVar66._4_4_;
  fVar125 = auVar42._8_4_;
  auVar57._8_4_ = fVar125 * auVar79._8_4_ - auVar65._8_4_ * auVar66._8_4_;
  fVar127 = auVar42._12_4_;
  auVar57._12_4_ = fVar127 * auVar79._12_4_ - auVar65._12_4_ * auVar66._12_4_;
  auVar65 = vinsertps_avx(auVar34,ZEXT416((uint)fVar92),0x10);
  auVar65 = vinsertps_avx(auVar65,ZEXT416((uint)fVar77),0x20);
  auVar65 = vinsertps_avx(auVar65,auVar58,0x30);
  auVar66 = vshufps_avx(auVar133,ZEXT416((uint)fVar64),0);
  auVar42 = vinsertps_avx(ZEXT416((uint)fVar77),auVar58,0x10);
  auVar42 = vinsertps_avx(auVar42,auVar34,0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416((uint)fVar92),0x30);
  auVar79 = vshufps_avx(ZEXT416((uint)fVar88),auVar33,0);
  fVar78 = auVar42._0_4_;
  auVar153._0_4_ = fVar78 * auVar79._0_4_ - auVar66._0_4_ * auVar65._0_4_;
  fVar87 = auVar42._4_4_;
  auVar153._4_4_ = fVar87 * auVar79._4_4_ - auVar66._4_4_ * auVar65._4_4_;
  fVar89 = auVar42._8_4_;
  auVar153._8_4_ = fVar89 * auVar79._8_4_ - auVar66._8_4_ * auVar65._8_4_;
  fVar91 = auVar42._12_4_;
  auVar153._12_4_ = fVar91 * auVar79._12_4_ - auVar66._12_4_ * auVar65._12_4_;
  auVar65 = vshufps_avx(auVar57,auVar57,0xd8);
  auVar34._0_4_ = auVar153._0_4_ * auVar65._0_4_;
  auVar34._4_4_ = auVar153._4_4_ * auVar65._4_4_;
  auVar34._8_4_ = auVar153._8_4_ * auVar65._8_4_;
  auVar34._12_4_ = auVar153._12_4_ * auVar65._12_4_;
  auVar65 = vshufpd_avx(auVar34,auVar34,1);
  auVar35._0_4_ = auVar34._0_4_ + auVar65._0_4_;
  auVar35._4_4_ = auVar34._4_4_ + auVar65._4_4_;
  auVar35._8_4_ = auVar34._8_4_ + auVar65._8_4_;
  auVar35._12_4_ = auVar34._12_4_ + auVar65._12_4_;
  auVar65 = vshufps_avx(auVar134,auVar134,0x55);
  auVar42 = vshufps_avx(auVar134,auVar134,0xaa);
  auVar66 = vshufps_avx(auVar134,auVar134,0xff);
  fVar64 = auVar66._0_4_;
  auVar151._0_4_ = auVar134._0_4_ * fVar64 + auVar65._0_4_ * auVar42._0_4_;
  auVar151._4_4_ = auVar134._0_4_ * auVar66._4_4_ + auVar65._4_4_ * auVar42._4_4_;
  auVar151._8_4_ = auVar134._0_4_ * auVar66._8_4_ + auVar65._8_4_ * auVar42._8_4_;
  auVar151._12_4_ = auVar134._0_4_ * auVar66._12_4_ + auVar65._12_4_ * auVar42._12_4_;
  auVar79 = vshufps_avx(auVar35,auVar35,0x39);
  auVar160._0_4_ = auVar79._0_4_ + auVar35._0_4_;
  auVar160._4_4_ = auVar79._4_4_ + auVar35._4_4_;
  auVar160._8_4_ = auVar79._8_4_ + auVar35._8_4_;
  auVar160._12_4_ = auVar79._12_4_ + auVar35._12_4_;
  auVar79 = vsubps_avx(auVar151,auVar160);
  auVar157 = ZEXT816(0);
  if ((auVar79._0_4_ != 0.0) ||
     (auVar56 = ___ymm_00000000000000003f800000000000000000000000000000000000003f800000,
     auVar49 = ___ymm_3f800000000000000000000000000000000000003f8000000000000000000000,
     NAN(auVar79._0_4_))) {
    auVar34 = vinsertps_avx(auVar150,auVar44,0x10);
    auVar44 = vinsertps_avx(auVar44,auVar150,0x10);
    auVar34 = vinsertps_avx(auVar34,auVar43,0x20);
    auVar34 = vinsertps_avx(auVar34,auVar50,0x30);
    auVar50 = vinsertps_avx(auVar44,auVar50,0x20);
    auVar43 = vinsertps_avx(auVar50,auVar43,0x30);
    auVar150 = vshufps_avx(auVar153,auVar153,0x66);
    auVar151 = vshufps_avx(auVar153,auVar153,0x33);
    auVar50 = vinsertps_avx(ZEXT416((uint)fVar94),ZEXT416((uint)fVar93),0x10);
    auVar50 = vinsertps_avx(auVar50,ZEXT416((uint)fVar2),0x20);
    auVar50 = vinsertps_avx(auVar50,ZEXT416((uint)fVar1),0x30);
    auVar153 = vshufps_avx(auVar153,auVar153,0xcc);
    auVar44 = vinsertps_avx(auVar33,auVar133,0x10);
    auVar33 = vinsertps_avx(auVar133,auVar33,0x10);
    auVar44 = vinsertps_avx(auVar44,auVar156,0x20);
    auVar44 = vinsertps_avx(auVar44,ZEXT416((uint)fVar88),0x30);
    auVar33 = vinsertps_avx(auVar33,ZEXT416((uint)fVar88),0x20);
    auVar133 = vshufps_avx(auVar57,auVar57,0x33);
    auVar33 = vinsertps_avx(auVar33,auVar156,0x30);
    auVar156 = vshufps_avx(auVar57,auVar57,0x66);
    auVar58 = vinsertps_avx(auVar58,ZEXT416((uint)fVar77),0x10);
    auVar58 = vinsertps_avx(auVar58,ZEXT416((uint)fVar92),0x20);
    auVar58 = vinsertps_avx(auVar58,ZEXT416((uint)fVar90),0x30);
    auVar57 = vshufps_avx(auVar57,auVar57,0xcc);
    auVar79 = vdivps_avx(___xmm_3f800000bf800000bf8000003f800000,auVar79);
    fVar77 = auVar79._0_4_;
    auVar51._0_4_ =
         (fVar64 * auVar44._0_4_ - (fVar78 * auVar57._0_4_ + auVar156._0_4_ * auVar58._0_4_)) *
         fVar77;
    fVar88 = auVar79._4_4_;
    auVar51._4_4_ =
         (auVar66._4_4_ * auVar44._4_4_ - (fVar87 * auVar57._4_4_ + auVar156._4_4_ * auVar58._4_4_))
         * fVar88;
    fVar90 = auVar79._8_4_;
    auVar51._8_4_ =
         (auVar66._8_4_ * auVar44._8_4_ - (fVar89 * auVar57._8_4_ + auVar156._8_4_ * auVar58._8_4_))
         * fVar90;
    fVar92 = auVar79._12_4_;
    auVar51._12_4_ =
         (auVar66._12_4_ * auVar44._12_4_ -
         (fVar91 * auVar57._12_4_ + auVar156._12_4_ * auVar58._12_4_)) * fVar92;
    auVar58._0_4_ =
         (fVar117 * auVar65._0_4_ -
         (auVar34._0_4_ * auVar151._0_4_ - auVar150._0_4_ * auVar43._0_4_)) * fVar77;
    auVar58._4_4_ =
         (fVar123 * auVar65._4_4_ -
         (auVar34._4_4_ * auVar151._4_4_ - auVar150._4_4_ * auVar43._4_4_)) * fVar88;
    auVar58._8_4_ =
         (fVar125 * auVar65._8_4_ -
         (auVar34._8_4_ * auVar151._8_4_ - auVar150._8_4_ * auVar43._8_4_)) * fVar90;
    auVar58._12_4_ =
         (fVar127 * auVar65._12_4_ -
         (auVar34._12_4_ * auVar151._12_4_ - auVar150._12_4_ * auVar43._12_4_)) * fVar92;
    auVar80._0_4_ =
         (fVar78 * auVar42._0_4_ - (auVar44._0_4_ * auVar133._0_4_ - auVar156._0_4_ * auVar33._0_4_)
         ) * fVar77;
    auVar80._4_4_ =
         (fVar87 * auVar42._4_4_ - (auVar44._4_4_ * auVar133._4_4_ - auVar156._4_4_ * auVar33._4_4_)
         ) * fVar88;
    auVar80._8_4_ =
         (fVar89 * auVar42._8_4_ - (auVar44._8_4_ * auVar133._8_4_ - auVar156._8_4_ * auVar33._8_4_)
         ) * fVar90;
    auVar80._12_4_ =
         (fVar91 * auVar42._12_4_ -
         (auVar44._12_4_ * auVar133._12_4_ - auVar156._12_4_ * auVar33._12_4_)) * fVar92;
    auVar44._0_4_ =
         (auVar34._0_4_ * auVar134._0_4_ -
         (fVar117 * auVar153._0_4_ + auVar150._0_4_ * auVar50._0_4_)) * fVar77;
    auVar44._4_4_ =
         (auVar34._4_4_ * auVar134._0_4_ -
         (fVar123 * auVar153._4_4_ + auVar150._4_4_ * auVar50._4_4_)) * fVar88;
    auVar44._8_4_ =
         (auVar34._8_4_ * auVar134._0_4_ -
         (fVar125 * auVar153._8_4_ + auVar150._8_4_ * auVar50._8_4_)) * fVar90;
    auVar44._12_4_ =
         (auVar34._12_4_ * auVar134._0_4_ -
         (fVar127 * auVar153._12_4_ + auVar150._12_4_ * auVar50._12_4_)) * fVar92;
    auVar65 = vshufps_avx(auVar51,auVar58,0x22);
    auVar42 = vshufps_avx(auVar51,auVar58,0x77);
    auVar56._16_16_ = auVar65;
    auVar56._0_16_ = auVar42;
    auVar65 = vshufps_avx(auVar80,auVar44,0x22);
    auVar42 = vshufps_avx(auVar80,auVar44,0x77);
    auVar49._16_16_ = auVar65;
    auVar49._0_16_ = auVar42;
  }
  auVar65 = vmovshdup_avx(auVar134);
  auVar66 = vshufpd_avx(auVar134,auVar134,1);
  auVar42 = vmovshdup_avx(auVar35);
  fVar77 = (auVar134._0_4_ * fVar64 + auVar65._0_4_ * auVar66._0_4_) -
           (auVar35._0_4_ + auVar42._0_4_);
  uVar23 = 0;
  uVar28 = 0;
  if ((~(uint)fVar77 & 0x7f800000) != 0 && __real_322bcc77 <= fVar77) {
    auVar45 = vhaddps_avx(_local_4a0,_local_4a0);
    auVar45 = vhaddps_avx(auVar45,auVar45);
    auVar137 = vhaddps_avx(_local_4c0,_local_4c0);
    auVar137 = vhaddps_avx(auVar137,auVar137);
    fVar77 = auVar45._0_4_ + auVar45._16_4_;
    auVar45 = vhaddps_avx(_local_4e0,_local_4e0);
    auVar45 = vhaddps_avx(auVar45,auVar45);
    fVar64 = auVar137._0_4_ + auVar137._16_4_;
    fVar88 = auVar45._0_4_ + auVar45._16_4_;
    auVar157._0_4_ =
         auVar49._16_4_ * 0.0 + auVar49._0_4_ * fVar77 +
         fVar64 * auVar56._16_4_ + auVar56._0_4_ * fVar88;
    auVar157._4_4_ =
         auVar49._20_4_ * 0.0 + auVar49._4_4_ * fVar77 +
         fVar64 * auVar56._20_4_ + auVar56._4_4_ * fVar88;
    auVar157._8_4_ =
         auVar49._24_4_ * 0.0 + auVar49._8_4_ * fVar77 +
         fVar64 * auVar56._24_4_ + auVar56._8_4_ * fVar88;
    auVar157._12_4_ =
         auVar49._28_4_ * 0.0 + auVar49._12_4_ * fVar77 +
         fVar64 * auVar56._28_4_ + auVar56._12_4_ * fVar88;
    auVar65 = vmovshdup_avx(auVar157);
    uVar23 = auVar65._0_4_;
    auVar65 = vshufpd_avx(auVar157,auVar157,1);
    uVar28 = auVar65._0_4_;
  }
  *param_3 = auVar157._0_4_;
  param_3[1] = uVar23;
  param_3[2] = uVar28;
  return;
}


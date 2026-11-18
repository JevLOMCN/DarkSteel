// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 4

// TransformClothSimulData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_avx2 @ 140d1e460

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformClothSimulData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_avx2
               (longlong param_1,longlong param_2,double *param_3,double param_4,uint param_5,
               undefined1 (*param_6) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [24];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined1 (*pauVar17) [32];
  undefined4 uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [32];
  longlong lVar21;
  undefined1 auVar22 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
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
  undefined1 auVar34 [32];
  undefined1 auVar41 [16];
  double dVar39;
  double dVar62;
  undefined1 auVar42 [32];
  double dVar60;
  undefined1 auVar43 [32];
  double dVar40;
  double dVar61;
  double dVar63;
  double dVar64;
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
  undefined1 auVar68 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar85;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar86;
  double dVar87;
  double dVar88;
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
  undefined1 auVar92 [16];
  double dVar89;
  double dVar107;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar90;
  double dVar91;
  double dVar110;
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  double dVar108;
  double dVar109;
  double dVar111;
  double dVar112;
  double dVar113;
  double dVar114;
  double dVar115;
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  double dVar122;
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar123 [16];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [16];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  double dVar141;
  double dVar142;
  undefined1 auVar143 [32];
  double dVar153;
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  double dVar149;
  double dVar150;
  double dVar152;
  double dVar154;
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  double dVar148;
  double dVar151;
  undefined1 in_ZMM7 [64];
  double dVar155;
  double dVar156;
  double dVar162;
  double dVar163;
  double dVar164;
  double dVar165;
  double dVar166;
  double dVar167;
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  double dVar168;
  double dVar169;
  double dVar170;
  double dVar176;
  double dVar177;
  double dVar178;
  double dVar179;
  double dVar181;
  double dVar182;
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  double dVar180;
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  double dVar183;
  double dVar190;
  double dVar191;
  undefined1 auVar184 [32];
  double dVar192;
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  double dVar193;
  double dVar201;
  undefined1 auVar194 [16];
  double dVar202;
  double dVar203;
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  double dVar204;
  double dVar205;
  double dVar209;
  double dVar212;
  double dVar215;
  undefined1 auVar206 [32];
  double dVar216;
  undefined1 auVar207 [32];
  double dVar210;
  double dVar211;
  double dVar213;
  double dVar214;
  double dVar217;
  undefined1 auVar208 [32];
  double dVar218;
  double dVar219;
  double dVar220;
  double dVar221;
  double dVar222;
  double dVar223;
  double dVar224;
  double dVar225;
  double dVar226;
  double dVar227;
  double dVar228;
  double dVar229;
  double dVar230;
  double dVar231;
  double dVar232;
  double dVar233;
  double dVar234;
  double dVar235;
  double dVar236;
  double dVar237;
  double dVar238;
  double dVar239;
  double dVar240;
  double dVar241;
  double dVar242;
  double dVar243;
  double dVar246;
  undefined1 auVar244 [16];
  double dVar247;
  double dVar248;
  undefined1 local_408 [16];
  uint uStack_3f8;
  uint uStack_3f4;
  uint uStack_3f0;
  uint uStack_3ec;
  double local_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  uint local_328;
  uint uStack_324;
  uint uStack_320;
  uint uStack_31c;
  uint uStack_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  double local_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double local_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double local_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double local_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined1 auVar33 [32];
  undefined1 auVar56 [32];
  undefined1 auVar137 [32];
  undefined1 auVar195 [32];
  undefined1 auVar245 [32];
  
  uVar14 = __real_80000000;
  auVar144 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
  auVar131 = auVar144 & ~*param_6;
  auVar184._0_8_ =
       *param_3 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  auVar184._8_8_ = param_3[1] * _UNK_150b543c8;
  auVar184._16_8_ = param_3[2] * _UNK_150b543d0;
  auVar184._24_8_ = param_3[3] * _UNK_150b543d8;
  dVar216 = param_3[4];
  dVar240 = param_3[5];
  dVar122 = param_3[6];
  auVar5 = *(undefined1 (*) [24])(param_3 + 8);
  auVar42._24_8_ = 0;
  auVar42._0_24_ = auVar5;
  dVar39 = auVar5._0_8_;
  auVar124._0_8_ = (ulonglong)dVar39 & __real_7fffffffffffffff;
  dVar60 = auVar5._8_8_;
  auVar124._8_8_ = (ulonglong)dVar60 & __real_7fffffffffffffff;
  dVar62 = auVar5._16_8_;
  auVar124._16_8_ = (ulonglong)dVar62 & __real_7fffffffffffffff;
  auVar124._24_8_ = 0;
  auVar101._8_8_ = __real_3e45798ee2308c3a;
  auVar101._0_8_ = __real_3e45798ee2308c3a;
  auVar101._16_8_ = __real_3e45798ee2308c3a;
  auVar101._24_8_ = __real_3e45798ee2308c3a;
  auVar196 = vcmppd_avx(auVar124,auVar101,2);
  auVar95 = vpackssdw_avx2(auVar196,auVar144);
  auVar134 = vpermq_avx2(auVar95,0xd8);
  auVar95._8_8_ = __real_46c8a6e32246c99c;
  auVar95._0_8_ = __real_46c8a6e32246c99c;
  auVar95._16_8_ = __real_46c8a6e32246c99c;
  auVar95._24_8_ = __real_46c8a6e32246c99c;
  auVar95 = vcmppd_avx(auVar42,auVar95,2);
  auVar95 = vpackssdw_avx2(auVar95,auVar144);
  auVar4 = vpackssdw_avx(auVar95._0_16_,auVar95._16_16_);
  auVar144._8_8_ = __real_3914c4e977ba1f5c;
  auVar144._0_8_ = __real_3914c4e977ba1f5c;
  auVar144._16_8_ = __real_3914c4e977ba1f5c;
  auVar144._24_8_ = __real_3914c4e977ba1f5c;
  auVar95 = vcmppd_avx(auVar144,auVar42,2);
  auVar144 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar95 = vpackssdw_avx2(auVar95,auVar144);
  auVar123 = vpackssdw_avx(auVar95._0_16_,auVar95._16_16_);
  auVar4 = vpand_avx(auVar123,auVar4);
  auVar4 = vpshufd_avx(auVar4,0xd8);
  dVar65 = SUB648(ZEXT1664((undefined1  [16])0x0),8);
  dVar82 = SUB408(SUB4840((undefined1  [48])0x0,8),0);
  if ((((((((SUB321(auVar131 >> 0x1f,0) & 1) == 0 && (SUB321(auVar131 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar131 >> 0x5f,0) & 1) == 0) && SUB321(auVar131 >> 0x7f,0) == '\0') &&
        (SUB321(auVar131 >> 0x9f,0) & 1) == 0) && SUB321(auVar131 >> 0xbf,0) == '\0') &&
      (SUB321(auVar131 >> 0xdf,0) & 1) == 0) && -1 < auVar131[0x1f]) {
    auVar196 = vcmppd_avx(auVar124,auVar101,6);
    auVar95 = vcmppd_avx(auVar144,auVar101,6);
    auVar196 = vpackssdw_avx2(auVar196,auVar95);
    auVar123 = vpackssdw_avx(auVar196._0_16_,auVar196._16_16_);
    auVar123 = vpshufd_avx(auVar123,0xd8);
    auVar4 = vpand_avx(auVar4,auVar123);
    auVar93 = vpsllw_avx(auVar4,0xf);
    auVar196 = ZEXT1632(auVar93);
    if ((((((((SUB161(auVar93 >> 0xf,0) & 1) == 0 && (SUB161(auVar93 >> 0x1f,0) & 1) == 0) &&
            (SUB161(auVar93 >> 0x2f,0) & 1) == 0) && (SUB161(auVar93 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar93 >> 0x4f,0) & 1) == 0) && (SUB161(auVar93 >> 0x5f,0) & 1) == 0) &&
        (SUB161(auVar93 >> 0x6f,0) & 1) == 0) && -1 < auVar93[0xf]) {
      auVar95 = ZEXT1632((undefined1  [16])0x0);
LAB_140d1ef49:
      auVar127._0_8_ = (ulonglong)dVar39 & __real_7fe0000000000000;
      auVar127._8_8_ = (ulonglong)dVar60 & __real_7fe0000000000000;
      auVar127._16_8_ = (ulonglong)dVar62 & __real_7fe0000000000000;
      auVar127._24_8_ = 0;
      auVar145._8_8_ = __real_7fcfffffffffffff;
      auVar145._0_8_ = __real_7fcfffffffffffff;
      auVar145._16_8_ = __real_7fcfffffffffffff;
      auVar145._24_8_ = __real_7fcfffffffffffff;
      auVar42 = vpsubq_avx2(auVar145,auVar127);
      auVar131 = vpsubq_avx2(auVar145,ZEXT832((ulonglong)dVar65 & __real_7fe0000000000000) << 0x40);
      auVar144 = vpcmpeqd_avx2(auVar145,auVar145);
      auVar74._0_8_ = auVar131._0_8_ * 0.0;
      auVar74._8_8_ = dVar65 * auVar131._8_8_;
      auVar74._16_8_ = auVar131._16_8_ * 0.0;
      auVar74._24_8_ = dVar82 * auVar131._24_8_;
      auVar135._0_8_ = dVar39 * auVar42._0_8_;
      auVar135._8_8_ = dVar60 * auVar42._8_8_;
      auVar135._16_8_ = dVar62 * auVar42._16_8_;
      auVar135._24_8_ = auVar42._24_8_ * 0.0;
      auVar4 = vcvtpd2ps_avx(auVar135);
      auVar123 = vcvtpd2ps_avx(auVar74);
      auVar75._16_16_ = auVar123;
      auVar75._0_16_ = auVar4;
      auVar131 = vrcpps_avx(auVar75);
      auVar123._0_4_ = auVar131._0_4_ * (-(auVar131._0_4_ * auVar4._0_4_) + __real_40000000);
      auVar123._4_4_ = auVar131._4_4_ * (-(auVar131._4_4_ * auVar4._4_4_) + __real_40000000);
      auVar123._8_4_ = auVar131._8_4_ * (-(auVar131._8_4_ * auVar4._8_4_) + __real_40000000);
      auVar123._12_4_ = auVar131._12_4_ * (-(auVar131._12_4_ * auVar4._12_4_) + __real_40000000);
      auVar131 = vcvtps2pd_avx(auVar123);
      dVar65 = auVar42._0_8_ * auVar131._0_8_;
      dVar82 = auVar42._8_8_ * auVar131._8_8_;
      dVar89 = auVar42._16_8_ * auVar131._16_8_;
      dVar107 = auVar42._24_8_ * auVar131._24_8_;
      dVar65 = dVar65 * (-(dVar39 * dVar65) + __real_4000000000000000);
      dVar82 = dVar82 * (-(dVar60 * dVar82) + __real_4000000000000000);
      dVar89 = dVar89 * (-(dVar62 * dVar89) + __real_4000000000000000);
      dVar107 = dVar107 * (-(dVar107 * 0.0) + __real_4000000000000000);
      auVar50._0_8_ = dVar65 * (-(dVar65 * dVar39) + __real_4000000000000000);
      auVar50._8_8_ = dVar82 * (-(dVar82 * dVar60) + __real_4000000000000000);
      auVar50._16_8_ = dVar89 * (-(dVar89 * dVar62) + __real_4000000000000000);
      auVar50._24_8_ = dVar107 * (-(dVar107 * 0.0) + __real_4000000000000000);
      auVar95 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                            auVar95 ^ auVar144);
      auVar196 = vblendvps_avx(auVar196,auVar50,auVar95);
    }
    else {
      auVar1 = vcvtpd2ps_avx(auVar42);
      auVar94 = vcvtpd2ps_avx(auVar144);
      auVar131._16_16_ = auVar94;
      auVar131._0_16_ = auVar1;
      auVar196 = vrcpps_avx(auVar131);
      auVar93 = vpacksswb_avx(auVar93,auVar93);
      auVar94._0_4_ = auVar196._0_4_ * (-(auVar196._0_4_ * auVar1._0_4_) + __real_40000000);
      auVar94._4_4_ = auVar196._4_4_ * (-(auVar196._4_4_ * auVar1._4_4_) + __real_40000000);
      auVar94._8_4_ = auVar196._8_4_ * (-(auVar196._8_4_ * auVar1._8_4_) + __real_40000000);
      auVar94._12_4_ = auVar196._12_4_ * (-(auVar196._12_4_ * auVar1._12_4_) + __real_40000000);
      auVar196 = vcvtps2pd_avx(auVar94);
      dVar89 = (-(dVar39 * auVar196._0_8_) + __real_4000000000000000) * auVar196._0_8_;
      dVar107 = (-(dVar60 * auVar196._8_8_) + __real_4000000000000000) * auVar196._8_8_;
      dVar110 = (-(dVar62 * auVar196._16_8_) + __real_4000000000000000) * auVar196._16_8_;
      dVar113 = (-(auVar196._24_8_ * 0.0) + __real_4000000000000000) * auVar196._24_8_;
      auVar196._0_8_ = dVar89 * (-(dVar39 * dVar89) + __real_4000000000000000);
      auVar196._8_8_ = dVar107 * (-(dVar60 * dVar107) + __real_4000000000000000);
      auVar196._16_8_ = dVar110 * (-(dVar62 * dVar110) + __real_4000000000000000);
      auVar196._24_8_ = dVar113 * (-(dVar113 * 0.0) + __real_4000000000000000);
      auVar123 = vpsllw_avx(auVar123,0xf);
      auVar123 = vpacksswb_avx(auVar123,auVar123);
      if ((byte)(SUB161(auVar123 >> 7,0) & 1 | (SUB161(auVar123 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar123 >> 0x17,0) & 1) << 2 | (SUB161(auVar123 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar123 >> 0x27,0) & 1) << 4 | (SUB161(auVar123 >> 0x2f,0) & 1) << 5 |
                 (SUB161(auVar123 >> 0x37,0) & 1) << 6 | SUB161(auVar123 >> 0x3f,0) << 7) !=
          (byte)(SUB161(auVar93 >> 7,0) & 1 | (SUB161(auVar93 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar93 >> 0x17,0) & 1) << 2 | (SUB161(auVar93 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar93 >> 0x27,0) & 1) << 4 | (SUB161(auVar93 >> 0x2f,0) & 1) << 5 |
                 (SUB161(auVar93 >> 0x37,0) & 1) << 6 | SUB161(auVar93 >> 0x3f,0) << 7)) {
        auVar95 = vpmovzxwd_avx2(auVar4);
        auVar95 = vpslld_avx2(auVar95,0x1f);
        auVar95 = vpsrad_avx2(auVar95,0x1f);
        goto LAB_140d1ef49;
      }
    }
    auVar95 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                          auVar134);
    auVar196 = vblendvps_avx(auVar196,SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
    uVar16 = param_5 + 7;
    if (-1 < (int)param_5) {
      uVar16 = param_5;
    }
    auVar95 = vpermpd_avx2(auVar196,0x55);
    auVar131 = vpermpd_avx2(auVar196,0xaa);
    local_1b8 = auVar131._0_8_;
    dStack_1b0 = auVar131._8_8_;
    dStack_1a8 = auVar131._16_8_;
    dStack_1a0 = auVar131._24_8_;
    local_208 = auVar95._0_8_;
    dStack_200 = auVar95._8_8_;
    dStack_1f8 = auVar95._16_8_;
    dStack_1f0 = auVar95._24_8_;
    dVar39 = auVar196._0_8_;
    if ((int)(uVar16 & 0xfffffff8) < 1) {
      uVar19 = 0;
      if ((int)param_5 < 1) {
        return;
      }
    }
    else {
      auVar196 = vpermpd_avx2(auVar184,0x55);
      auVar95 = vpermpd_avx2(auVar184,0xaa);
      auVar131 = vpermpd_avx2(auVar184,0xff);
      lVar21 = 0x40;
      uVar19 = 0;
      do {
        auVar55 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
        auVar29 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
        auVar145 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
        auVar144 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar21);
        auVar134 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar21);
        auVar42 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar134);
        auVar101 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar144);
        auVar42 = vblendps_avx(auVar101,auVar42,0x88);
        auVar101 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                ,auVar134);
        auVar124 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,*(undefined1 (*) [32])(param_1 + lVar21));
        auVar101 = vblendps_avx(auVar124,auVar101,0x13);
        auVar144 = vblendps_avx(auVar134,auVar144,0x24);
        auVar144 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar144);
        auVar134 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                ,*(undefined1 (*) [32])(param_1 + lVar21));
        auVar124 = vblendps_avx(auVar144,auVar134,0xe0);
        auVar144 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar21);
        auVar134 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar21);
        auVar50 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar134);
        auVar74 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar144);
        auVar50 = vblendps_avx(auVar74,auVar50,0x88);
        auVar74 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar134);
        auVar75 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar21));
        auVar74 = vblendps_avx(auVar75,auVar74,0x13);
        auVar135 = vperm2f128_avx(auVar50,auVar74,0x31);
        auVar144 = vblendps_avx(auVar134,auVar144,0x24);
        auVar144 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar144);
        auVar134 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                ,*(undefined1 (*) [32])(param_2 + lVar21));
        auVar144 = vblendps_avx(auVar144,auVar134,0xe0);
        auVar134 = vcvtps2pd_avx(auVar42._0_16_);
        auVar75 = vcvtps2pd_avx(auVar101._0_16_);
        auVar42 = vcvtps2pd_avx(auVar42._16_16_);
        auVar101 = vcvtps2pd_avx(auVar101._16_16_);
        auVar127 = vcvtps2pd_avx(auVar124._0_16_);
        auVar124 = vcvtps2pd_avx(auVar124._16_16_);
        local_408._4_4_ = auVar50._4_4_ ^ uVar14;
        local_408._0_4_ = auVar50._0_4_ ^ uVar14;
        local_408._8_4_ = auVar50._8_4_ ^ uVar14;
        local_408._12_4_ = auVar50._12_4_ ^ uVar14;
        uStack_3f8 = auVar74._0_4_ ^ uVar14;
        uStack_3f4 = auVar74._4_4_ ^ uVar14;
        uStack_3f0 = auVar74._8_4_ ^ uVar14;
        uStack_3ec = auVar74._12_4_ ^ uVar14;
        dVar66 = param_4 * auVar75._0_8_ - dVar216;
        dVar83 = param_4 * auVar75._8_8_ - dVar216;
        dVar85 = param_4 * auVar75._16_8_ - dVar216;
        dVar87 = param_4 * auVar75._24_8_ - dVar216;
        dVar141 = param_4 * auVar134._0_8_ - dVar216;
        dVar151 = param_4 * auVar134._8_8_ - dVar216;
        dVar155 = param_4 * auVar134._16_8_ - dVar216;
        dVar162 = param_4 * auVar134._24_8_ - dVar216;
        dVar183 = param_4 * auVar101._0_8_ - dVar240;
        dVar190 = param_4 * auVar101._8_8_ - dVar240;
        dVar191 = param_4 * auVar101._16_8_ - dVar240;
        dVar192 = param_4 * auVar101._24_8_ - dVar240;
        dVar178 = param_4 * auVar42._0_8_ - dVar240;
        dVar179 = param_4 * auVar42._8_8_ - dVar240;
        dVar181 = param_4 * auVar42._16_8_ - dVar240;
        dVar182 = param_4 * auVar42._24_8_ - dVar240;
        dVar111 = param_4 * auVar124._0_8_ - dVar122;
        dVar112 = param_4 * auVar124._8_8_ - dVar122;
        dVar114 = param_4 * auVar124._16_8_ - dVar122;
        dVar115 = param_4 * auVar124._24_8_ - dVar122;
        dVar90 = param_4 * auVar127._0_8_ - dVar122;
        dVar91 = param_4 * auVar127._8_8_ - dVar122;
        dVar108 = param_4 * auVar127._16_8_ - dVar122;
        dVar109 = param_4 * auVar127._24_8_ - dVar122;
        local_e8 = auVar196._0_8_;
        dStack_e0 = auVar196._8_8_;
        dStack_d8 = auVar196._16_8_;
        dStack_d0 = auVar196._24_8_;
        local_108 = auVar95._0_8_;
        dStack_100 = auVar95._8_8_;
        dStack_f8 = auVar95._16_8_;
        dStack_f0 = auVar95._24_8_;
        dVar36 = auVar184._0_8_ * dVar183 - local_e8 * dVar66;
        dVar40 = auVar184._0_8_ * dVar190 - dStack_e0 * dVar83;
        dVar201 = auVar184._0_8_ * dVar191 - dStack_d8 * dVar85;
        dVar64 = auVar184._0_8_ * dVar192 - dStack_d0 * dVar87;
        dVar35 = auVar184._0_8_ * dVar178 - local_e8 * dVar141;
        dVar38 = auVar184._0_8_ * dVar179 - dStack_e0 * dVar151;
        dVar61 = auVar184._0_8_ * dVar181 - dStack_d8 * dVar155;
        dVar202 = auVar184._0_8_ * dVar182 - dStack_d0 * dVar162;
        dVar142 = local_e8 * dVar111 - dVar183 * local_108;
        dVar150 = dStack_e0 * dVar112 - dVar190 * dStack_100;
        dVar204 = dStack_d8 * dVar114 - dVar191 * dStack_f8;
        dVar209 = dStack_d0 * dVar115 - dVar192 * dStack_f0;
        dVar164 = local_e8 * dVar90 - dVar178 * local_108;
        dVar166 = dStack_e0 * dVar91 - dVar179 * dStack_100;
        dVar168 = dStack_d8 * dVar108 - dVar181 * dStack_f8;
        dVar176 = dStack_d0 * dVar109 - dVar182 * dStack_f0;
        dVar225 = local_108 * dVar66 - auVar184._0_8_ * dVar111;
        dVar229 = dStack_100 * dVar83 - auVar184._0_8_ * dVar112;
        dVar238 = dStack_f8 * dVar85 - auVar184._0_8_ * dVar114;
        dVar231 = dStack_f0 * dVar87 - auVar184._0_8_ * dVar115;
        dVar212 = local_108 * dVar141 - auVar184._0_8_ * dVar90;
        dVar215 = dStack_100 * dVar151 - auVar184._0_8_ * dVar91;
        dVar218 = dStack_f8 * dVar155 - auVar184._0_8_ * dVar108;
        dVar222 = dStack_f0 * dVar162 - auVar184._0_8_ * dVar109;
        dVar164 = dVar164 + dVar164;
        dVar166 = dVar166 + dVar166;
        dVar168 = dVar168 + dVar168;
        dVar176 = dVar176 + dVar176;
        dVar142 = dVar142 + dVar142;
        dVar150 = dVar150 + dVar150;
        dVar204 = dVar204 + dVar204;
        dVar209 = dVar209 + dVar209;
        dVar212 = dVar212 + dVar212;
        dVar215 = dVar215 + dVar215;
        dVar218 = dVar218 + dVar218;
        dVar222 = dVar222 + dVar222;
        dVar225 = dVar225 + dVar225;
        dVar229 = dVar229 + dVar229;
        dVar238 = dVar238 + dVar238;
        dVar231 = dVar231 + dVar231;
        dVar35 = dVar35 + dVar35;
        dVar38 = dVar38 + dVar38;
        dVar61 = dVar61 + dVar61;
        dVar202 = dVar202 + dVar202;
        dVar36 = dVar36 + dVar36;
        dVar40 = dVar40 + dVar40;
        dVar201 = dVar201 + dVar201;
        dVar64 = dVar64 + dVar64;
        local_128 = auVar131._0_8_;
        dStack_120 = auVar131._8_8_;
        dStack_118 = auVar131._16_8_;
        dStack_110 = auVar131._24_8_;
        auVar134 = vcvtps2pd_avx(local_408._16_16_);
        auVar42 = vcvtps2pd_avx(local_408);
        auVar4._4_4_ = auVar135._4_4_ ^ uVar14;
        auVar4._0_4_ = auVar135._0_4_ ^ uVar14;
        auVar4._8_4_ = auVar135._8_4_ ^ uVar14;
        auVar4._12_4_ = auVar135._12_4_ ^ uVar14;
        auVar10._16_4_ = auVar135._16_4_ ^ uVar14;
        auVar10._0_16_ = auVar4;
        auVar10._20_4_ = auVar135._20_4_ ^ uVar14;
        auVar10._24_4_ = auVar135._24_4_ ^ uVar14;
        auVar10._28_4_ = auVar135._28_4_ ^ uVar14;
        auVar101 = vcvtps2pd_avx(auVar10._16_16_);
        local_328 = auVar144._0_4_;
        uStack_324 = auVar144._4_4_;
        uStack_320 = auVar144._8_4_;
        uStack_31c = auVar144._12_4_;
        uStack_318 = auVar144._16_4_;
        uStack_314 = auVar144._20_4_;
        uStack_310 = auVar144._24_4_;
        uStack_30c = auVar144._28_4_;
        auVar93._0_4_ = uVar14 ^ local_328;
        auVar93._4_4_ = uVar14 ^ uStack_324;
        auVar93._8_4_ = uVar14 ^ uStack_320;
        auVar93._12_4_ = uVar14 ^ uStack_31c;
        auVar159._16_4_ = uVar14 ^ uStack_318;
        auVar159._0_16_ = auVar93;
        auVar159._20_4_ = uVar14 ^ uStack_314;
        auVar159._24_4_ = uVar14 ^ uStack_310;
        auVar159._28_4_ = uVar14 ^ uStack_30c;
        auVar144 = vcvtps2pd_avx(auVar4);
        auVar124 = vcvtps2pd_avx(auVar159._16_16_);
        auVar50 = vcvtps2pd_avx(auVar93);
        local_3e8 = auVar134._0_8_;
        dStack_3e0 = auVar134._8_8_;
        dStack_3d8 = auVar134._16_8_;
        dStack_3d0 = auVar134._24_8_;
        dVar60 = auVar101._0_8_;
        dVar65 = auVar101._8_8_;
        dVar89 = auVar101._16_8_;
        dVar110 = auVar101._24_8_;
        dVar62 = auVar124._0_8_;
        dVar82 = auVar124._8_8_;
        dVar107 = auVar124._16_8_;
        dVar113 = auVar124._24_8_;
        dVar37 = auVar184._0_8_ * dVar60 - local_3e8 * local_e8;
        dVar193 = auVar184._0_8_ * dVar65 - dStack_3e0 * dStack_e0;
        dVar63 = auVar184._0_8_ * dVar89 - dStack_3d8 * dStack_d8;
        dVar203 = auVar184._0_8_ * dVar110 - dStack_3d0 * dStack_d0;
        dVar148 = local_e8 * dVar62 - local_108 * dVar60;
        dVar153 = dStack_e0 * dVar82 - dStack_100 * dVar65;
        dVar156 = dStack_d8 * dVar107 - dStack_f8 * dVar89;
        dVar163 = dStack_d0 * dVar113 - dStack_f0 * dVar110;
        dVar149 = local_108 * local_3e8 - auVar184._0_8_ * dVar62;
        dVar152 = dStack_100 * dStack_3e0 - auVar184._0_8_ * dVar82;
        dVar154 = dStack_f8 * dStack_3d8 - auVar184._0_8_ * dVar107;
        dVar170 = dStack_f0 * dStack_3d0 - auVar184._0_8_ * dVar113;
        dVar148 = dVar148 + dVar148;
        dVar153 = dVar153 + dVar153;
        dVar156 = dVar156 + dVar156;
        dVar163 = dVar163 + dVar163;
        dVar149 = dVar149 + dVar149;
        dVar152 = dVar152 + dVar152;
        dVar154 = dVar154 + dVar154;
        dVar170 = dVar170 + dVar170;
        dVar37 = dVar37 + dVar37;
        dVar193 = dVar193 + dVar193;
        dVar63 = dVar63 + dVar63;
        dVar203 = dVar203 + dVar203;
        local_268 = auVar42._0_8_;
        dStack_260 = auVar42._8_8_;
        dStack_258 = auVar42._16_8_;
        dStack_250 = auVar42._24_8_;
        dVar226 = auVar144._0_8_;
        dVar67 = auVar184._0_8_ * dVar226 - local_e8 * local_268;
        dVar233 = auVar144._8_8_;
        dVar84 = auVar184._0_8_ * dVar233 - dStack_e0 * dStack_260;
        dVar239 = auVar144._16_8_;
        dVar86 = auVar184._0_8_ * dVar239 - dStack_d8 * dStack_258;
        dVar235 = auVar144._24_8_;
        dVar88 = auVar184._0_8_ * dVar235 - dStack_d0 * dStack_250;
        dVar165 = auVar50._0_8_;
        dVar180 = local_e8 * dVar165 - dVar226 * local_108;
        dVar167 = auVar50._8_8_;
        dVar205 = dStack_e0 * dVar167 - dVar233 * dStack_100;
        dVar169 = auVar50._16_8_;
        dVar220 = dStack_d8 * dVar169 - dVar239 * dStack_f8;
        dVar177 = auVar50._24_8_;
        dVar224 = dStack_d0 * dVar177 - dVar235 * dStack_f0;
        dVar228 = local_108 * local_268 - dVar165 * auVar184._0_8_;
        dVar234 = dStack_100 * dStack_260 - dVar167 * auVar184._0_8_;
        dVar230 = dStack_f8 * dStack_258 - dVar169 * auVar184._0_8_;
        dVar236 = dStack_f0 * dStack_250 - dVar177 * auVar184._0_8_;
        dVar180 = dVar180 + dVar180;
        dVar205 = dVar205 + dVar205;
        dVar220 = dVar220 + dVar220;
        dVar224 = dVar224 + dVar224;
        dVar228 = dVar228 + dVar228;
        dVar234 = dVar234 + dVar234;
        dVar230 = dVar230 + dVar230;
        dVar236 = dVar236 + dVar236;
        dVar67 = dVar67 + dVar67;
        dVar84 = dVar84 + dVar84;
        dVar86 = dVar86 + dVar86;
        dVar88 = dVar88 + dVar88;
        auVar134._0_8_ =
             dVar39 * (local_128 * dVar142 + dVar66 + (local_e8 * dVar36 - dVar225 * local_108));
        auVar134._8_8_ =
             dVar39 * (dStack_120 * dVar150 + dVar83 + (dStack_e0 * dVar40 - dVar229 * dStack_100));
        auVar134._16_8_ =
             dVar39 * (dStack_118 * dVar204 + dVar85 + (dStack_d8 * dVar201 - dVar238 * dStack_f8));
        auVar134._24_8_ =
             dVar39 * (dStack_110 * dVar209 + dVar87 + (dStack_d0 * dVar64 - dVar231 * dStack_f0));
        auVar172._0_8_ =
             dVar39 * ((local_e8 * dVar35 - dVar212 * local_108) + local_128 * dVar164 + dVar141);
        auVar172._8_8_ =
             dVar39 * ((dStack_e0 * dVar38 - dVar215 * dStack_100) + dStack_120 * dVar166 + dVar151)
        ;
        auVar172._16_8_ =
             dVar39 * ((dStack_d8 * dVar61 - dVar218 * dStack_f8) + dStack_118 * dVar168 + dVar155);
        auVar172._24_8_ =
             dVar39 * ((dStack_d0 * dVar202 - dVar222 * dStack_f0) + dStack_110 * dVar176 + dVar162)
        ;
        auVar51._0_8_ =
             (local_128 * dVar225 + dVar183 + (local_108 * dVar142 - auVar184._0_8_ * dVar36)) *
             local_208;
        auVar51._8_8_ =
             (dStack_120 * dVar229 + dVar190 + (dStack_100 * dVar150 - auVar184._0_8_ * dVar40)) *
             dStack_200;
        auVar51._16_8_ =
             (dStack_118 * dVar238 + dVar191 + (dStack_f8 * dVar204 - auVar184._0_8_ * dVar201)) *
             dStack_1f8;
        auVar51._24_8_ =
             (dStack_110 * dVar231 + dVar192 + (dStack_f0 * dVar209 - auVar184._0_8_ * dVar64)) *
             dStack_1f0;
        auVar186._0_8_ =
             (local_128 * dVar212 + dVar178 + (local_108 * dVar164 - dVar35 * auVar184._0_8_)) *
             local_208;
        auVar186._8_8_ =
             (dStack_120 * dVar215 + dVar179 + (dStack_100 * dVar166 - dVar38 * auVar184._0_8_)) *
             dStack_200;
        auVar186._16_8_ =
             (dStack_118 * dVar218 + dVar181 + (dStack_f8 * dVar168 - dVar61 * auVar184._0_8_)) *
             dStack_1f8;
        auVar186._24_8_ =
             (dStack_110 * dVar222 + dVar182 + (dStack_f0 * dVar176 - dVar202 * auVar184._0_8_)) *
             dStack_1f0;
        auVar197._0_8_ =
             local_1b8 *
             ((auVar184._0_8_ * dVar225 - dVar142 * local_e8) + local_128 * dVar36 + dVar111);
        auVar197._8_8_ =
             dStack_1b0 *
             ((auVar184._0_8_ * dVar229 - dVar150 * dStack_e0) + dStack_120 * dVar40 + dVar112);
        auVar197._16_8_ =
             dStack_1a8 *
             ((auVar184._0_8_ * dVar238 - dVar204 * dStack_d8) + dStack_118 * dVar201 + dVar114);
        auVar197._24_8_ =
             dStack_1a0 *
             ((auVar184._0_8_ * dVar231 - dVar209 * dStack_d0) + dStack_110 * dVar64 + dVar115);
        auVar206._0_8_ =
             local_1b8 *
             (local_128 * dVar35 + dVar90 + (auVar184._0_8_ * dVar212 - dVar164 * local_e8));
        auVar206._8_8_ =
             dStack_1b0 *
             (dStack_120 * dVar38 + dVar91 + (auVar184._0_8_ * dVar215 - dVar166 * dStack_e0));
        auVar206._16_8_ =
             dStack_1a8 *
             (dStack_118 * dVar61 + dVar108 + (auVar184._0_8_ * dVar218 - dVar168 * dStack_d8));
        auVar206._24_8_ =
             dStack_1a0 *
             (dStack_110 * dVar202 + dVar109 + (auVar184._0_8_ * dVar222 - dVar176 * dStack_d0));
        auVar4 = vcvtpd2ps_avx(auVar172);
        auVar123 = vcvtpd2ps_avx(auVar134);
        auVar93 = vcvtpd2ps_avx(auVar186);
        auVar27._16_16_ = auVar123;
        auVar27._0_16_ = auVar4;
        auVar123 = vcvtpd2ps_avx(auVar51);
        auVar52._16_16_ = auVar123;
        auVar52._0_16_ = auVar93;
        auVar123 = vcvtpd2ps_avx(auVar206);
        auVar1 = vcvtpd2ps_avx(auVar197);
        auVar198._16_16_ = auVar1;
        auVar198._0_16_ = auVar123;
        auVar173._16_16_ = auVar93;
        auVar173._0_16_ = auVar4;
        auVar42 = vshufpd_avx(auVar27,auVar173,2);
        auVar134 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                                ,auVar198);
        auVar144 = vpermpd_avx2(auVar52,0xe9);
        auVar144 = vblendps_avx(auVar134,auVar144,7);
        auVar134 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                                ,auVar144);
        auVar101 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                                ,auVar42);
        auVar134 = vblendps_avx(auVar101,auVar134,0xa4);
        *(undefined1 (*) [32])(param_1 + -0x40 + lVar21) = auVar134;
        auVar124 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
        auVar134 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                                ,auVar144);
        auVar144 = vshufpd_avx(auVar42,auVar42,1);
        auVar144 = vblendps_avx(auVar134,auVar144,0x92);
        *(undefined1 (*) [32])(param_1 + -0x20 + lVar21) = auVar144;
        auVar74 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
        auVar50 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
        auVar134 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                                ,auVar52);
        auVar144 = vpermpd_avx2(auVar27,0xff);
        auVar144 = vblendpd_avx(auVar134,auVar144,1);
        auVar144 = vblendps_avx(auVar144,auVar198,0xe0);
        auVar53._0_8_ =
             dVar39 * (local_128 * dVar148 + local_3e8 + (local_e8 * dVar37 - dVar149 * local_108));
        auVar53._8_8_ =
             dVar39 * (dStack_120 * dVar153 + dStack_3e0 +
                      (dStack_e0 * dVar193 - dVar152 * dStack_100));
        auVar53._16_8_ =
             dVar39 * (dStack_118 * dVar156 + dStack_3d8 +
                      (dStack_d8 * dVar63 - dVar154 * dStack_f8));
        auVar53._24_8_ =
             dVar39 * (dStack_110 * dVar163 + dStack_3d0 +
                      (dStack_d0 * dVar203 - dVar170 * dStack_f0));
        auVar102._0_8_ =
             dVar39 * ((local_e8 * dVar67 - dVar228 * local_108) + local_128 * dVar180 + local_268);
        auVar102._8_8_ =
             dVar39 * ((dStack_e0 * dVar84 - dVar234 * dStack_100) +
                      dStack_120 * dVar205 + dStack_260);
        auVar102._16_8_ =
             dVar39 * ((dStack_d8 * dVar86 - dVar230 * dStack_f8) +
                      dStack_118 * dVar220 + dStack_258);
        auVar102._24_8_ =
             dVar39 * ((dStack_d0 * dVar88 - dVar236 * dStack_f0) +
                      dStack_110 * dVar224 + dStack_250);
        auVar118._0_8_ =
             local_208 *
             (local_128 * dVar149 + dVar60 + (local_108 * dVar148 - auVar184._0_8_ * dVar37));
        auVar118._8_8_ =
             dStack_200 *
             (dStack_120 * dVar152 + dVar65 + (dStack_100 * dVar153 - auVar184._0_8_ * dVar193));
        auVar118._16_8_ =
             dStack_1f8 *
             (dStack_118 * dVar154 + dVar89 + (dStack_f8 * dVar156 - auVar184._0_8_ * dVar63));
        auVar118._24_8_ =
             dStack_1f0 *
             (dStack_110 * dVar170 + dVar110 + (dStack_f0 * dVar163 - auVar184._0_8_ * dVar203));
        auVar76._0_8_ =
             local_208 *
             (local_128 * dVar228 + dVar226 + (local_108 * dVar180 - auVar184._0_8_ * dVar67));
        auVar76._8_8_ =
             dStack_200 *
             (dStack_120 * dVar234 + dVar233 + (dStack_100 * dVar205 - auVar184._0_8_ * dVar84));
        auVar76._16_8_ =
             dStack_1f8 *
             (dStack_118 * dVar230 + dVar239 + (dStack_f8 * dVar220 - auVar184._0_8_ * dVar86));
        auVar76._24_8_ =
             dStack_1f0 *
             (dStack_110 * dVar236 + dVar235 + (dStack_f0 * dVar224 - auVar184._0_8_ * dVar88));
        auVar128._0_8_ =
             local_1b8 *
             (local_128 * dVar37 + dVar62 + (auVar184._0_8_ * dVar149 - dVar148 * local_e8));
        auVar128._8_8_ =
             dStack_1b0 *
             (dStack_120 * dVar193 + dVar82 + (auVar184._0_8_ * dVar152 - dVar153 * dStack_e0));
        auVar128._16_8_ =
             dStack_1a8 *
             (dStack_118 * dVar63 + dVar107 + (auVar184._0_8_ * dVar154 - dVar156 * dStack_d8));
        auVar128._24_8_ =
             dStack_1a0 *
             (dStack_110 * dVar203 + dVar113 + (auVar184._0_8_ * dVar170 - dVar163 * dStack_d0));
        auVar4 = vcvtpd2ps_avx(auVar102);
        auVar136._0_8_ =
             local_1b8 *
             (local_128 * dVar67 + dVar165 + (auVar184._0_8_ * dVar228 - dVar180 * local_e8));
        auVar136._8_8_ =
             dStack_1b0 *
             (dStack_120 * dVar84 + dVar167 + (auVar184._0_8_ * dVar234 - dVar205 * dStack_e0));
        auVar136._16_8_ =
             dStack_1a8 *
             (dStack_118 * dVar86 + dVar169 + (auVar184._0_8_ * dVar230 - dVar220 * dStack_d8));
        auVar136._24_8_ =
             dStack_1a0 *
             (dStack_110 * dVar88 + dVar177 + (auVar184._0_8_ * dVar236 - dVar224 * dStack_d0));
        auVar123 = vcvtpd2ps_avx(auVar53);
        auVar54._16_16_ = auVar123;
        auVar54._0_16_ = auVar4;
        auVar123 = vcvtpd2ps_avx(auVar76);
        auVar93 = vcvtpd2ps_avx(auVar118);
        auVar1 = vcvtpd2ps_avx(auVar136);
        auVar94 = vcvtpd2ps_avx(auVar128);
        auVar119._16_16_ = auVar93;
        auVar119._0_16_ = auVar123;
        auVar144 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                                ,auVar144);
        *(undefined1 (*) [32])(param_1 + lVar21) = auVar144;
        auVar28._16_16_ = auVar94;
        auVar28._0_16_ = auVar1;
        auVar77._16_16_ = auVar123;
        auVar77._0_16_ = auVar4;
        auVar42 = vshufpd_avx(auVar54,auVar77,2);
        auVar134 = vpermps_avx2(auVar145,auVar28);
        auVar144 = vpermpd_avx2(auVar119,0xe9);
        auVar144 = vblendps_avx(auVar134,auVar144,7);
        auVar134 = vpermps_avx2(auVar55,auVar42);
        auVar101 = vpermps_avx2(auVar29,auVar144);
        auVar134 = vblendps_avx(auVar134,auVar101,0xa4);
        *(undefined1 (*) [32])(param_2 + -0x40 + lVar21) = auVar134;
        auVar134 = vpermps_avx2(auVar124,auVar144);
        auVar144 = vshufpd_avx(auVar42,auVar42,1);
        auVar144 = vblendps_avx(auVar134,auVar144,0x92);
        *(undefined1 (*) [32])(param_2 + -0x20 + lVar21) = auVar144;
        auVar134 = vpermps_avx2(auVar50,auVar119);
        auVar144 = vpermpd_avx2(auVar54,0xff);
        auVar144 = vblendpd_avx(auVar134,auVar144,1);
        auVar144 = vblendps_avx(auVar144,auVar28,0xe0);
        auVar144 = vpermps_avx2(auVar74,auVar144);
        *(undefined1 (*) [32])(param_2 + lVar21) = auVar144;
        lVar21 = lVar21 + 0x60;
        uVar19 = uVar19 + 8;
      } while ((int)uVar19 < (int)(uVar16 & 0xfffffff8));
      if ((int)param_5 <= (int)uVar19) {
        return;
      }
    }
    auVar29._4_4_ = uVar19;
    auVar29._0_4_ = uVar19;
    auVar29._8_4_ = uVar19;
    auVar29._12_4_ = uVar19;
    auVar29._16_4_ = uVar19;
    auVar29._20_4_ = uVar19;
    auVar29._24_4_ = uVar19;
    auVar29._28_4_ = uVar19;
    auVar196 = vpor_avx2(auVar29,
                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar55._4_4_ = param_5;
    auVar55._0_4_ = param_5;
    auVar55._8_4_ = param_5;
    auVar55._12_4_ = param_5;
    auVar55._16_4_ = param_5;
    auVar55._20_4_ = param_5;
    auVar55._24_4_ = param_5;
    auVar55._28_4_ = param_5;
    auVar196 = vpcmpgtd_avx2(auVar55,auVar196);
    uVar12 = (ulonglong)uVar19;
    lVar21 = uVar12 * 3;
    pauVar17 = (undefined1 (*) [32])(param_1 + uVar12 * 0xc);
    uVar14 = vmovmskps_avx(auVar196);
    if (uVar14 == 0xff) {
      auVar196 = pauVar17[1];
      auVar95 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar196);
      auVar131 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,*pauVar17);
      auVar95 = vblendps_avx(auVar131,auVar95,0x88);
      auVar131 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar196);
      auVar144 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,pauVar17[2]);
      auVar131 = vblendps_avx(auVar144,auVar131,0x13);
      auVar30._16_16_ = auVar131._0_16_;
      auVar30._0_16_ = auVar95._0_16_;
      auVar101 = vperm2f128_avx(auVar95,auVar131,0x31);
      auVar196 = vblendps_avx(auVar196,*pauVar17,0x24);
      auVar196 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar196);
      auVar95 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar17[2]);
      auVar144 = vblendps_avx(auVar196,auVar95,0xe0);
      auVar196 = *(undefined1 (*) [32])(param_2 + uVar12 * 0xc);
      auVar95 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar12 * 0xc);
      auVar131 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar12 * 0xc);
      auVar134 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar95);
      auVar42 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar196);
      auVar134 = vblendps_avx(auVar42,auVar134,0x88);
      auVar42 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar95);
      auVar124 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar131);
      auVar42 = vblendps_avx(auVar124,auVar42,0x13);
      auVar78._16_16_ = auVar42._0_16_;
      auVar78._0_16_ = auVar134._0_16_;
      auVar134 = vperm2f128_avx(auVar134,auVar42,0x31);
      auVar196 = vblendps_avx(auVar95,auVar196,0x24);
      auVar196 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar196);
      auVar95 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,auVar131);
      auVar196 = vblendps_avx(auVar196,auVar95,0xe0);
    }
    else {
      auVar30 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar196);
      auVar101 = vgatherdps(ZEXT832(0) << 0x40,auVar196);
      auVar144 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
      auVar78 = vgatherdps(ZEXT832(0),auVar196);
      auVar134 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar196);
      auVar196 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar196);
    }
    pauVar20 = (undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar95 = vcvtps2pd_avx(auVar30._0_16_);
    auVar131 = vcvtps2pd_avx(auVar30._16_16_);
    auVar22._0_4_ = auVar78._0_4_ ^ __real_80000000;
    auVar22._4_4_ = auVar78._4_4_ ^ __real_80000000;
    auVar22._8_4_ = auVar78._8_4_ ^ __real_80000000;
    auVar22._12_4_ = auVar78._12_4_ ^ __real_80000000;
    auVar33._16_4_ = auVar78._16_4_ ^ __real_80000000;
    auVar33._0_16_ = auVar22;
    auVar33._20_4_ = auVar78._20_4_ ^ __real_80000000;
    auVar33._24_4_ = auVar78._24_4_ ^ __real_80000000;
    auVar33._28_4_ = auVar78._28_4_ ^ __real_80000000;
    auVar244._0_4_ = auVar134._0_4_ ^ __real_80000000;
    auVar244._4_4_ = auVar134._4_4_ ^ __real_80000000;
    auVar244._8_4_ = auVar134._8_4_ ^ __real_80000000;
    auVar244._12_4_ = auVar134._12_4_ ^ __real_80000000;
    auVar245._16_4_ = auVar134._16_4_ ^ __real_80000000;
    auVar245._0_16_ = auVar244;
    auVar245._20_4_ = auVar134._20_4_ ^ __real_80000000;
    auVar245._24_4_ = auVar134._24_4_ ^ __real_80000000;
    auVar245._28_4_ = auVar134._28_4_ ^ __real_80000000;
    auVar134 = vcvtps2pd_avx(auVar101._0_16_);
    auVar42 = vcvtps2pd_avx(auVar101._16_16_);
    dVar229 = param_4 * auVar131._0_8_ - dVar216;
    dVar234 = param_4 * auVar131._8_8_ - dVar216;
    dVar239 = param_4 * auVar131._16_8_ - dVar216;
    dVar231 = param_4 * auVar131._24_8_ - dVar216;
    dVar247 = param_4 * auVar95._0_8_ - dVar216;
    dVar210 = param_4 * auVar95._8_8_ - dVar216;
    dVar213 = param_4 * auVar95._16_8_ - dVar216;
    dVar216 = param_4 * auVar95._24_8_ - dVar216;
    auVar95 = vcvtps2pd_avx(auVar144._0_16_);
    auVar131 = vcvtps2pd_avx(auVar144._16_16_);
    dVar155 = param_4 * auVar42._0_8_ - dVar240;
    dVar165 = param_4 * auVar42._8_8_ - dVar240;
    dVar176 = param_4 * auVar42._16_8_ - dVar240;
    dVar182 = param_4 * auVar42._24_8_ - dVar240;
    dVar142 = param_4 * auVar134._0_8_ - dVar240;
    dVar152 = param_4 * auVar134._8_8_ - dVar240;
    dVar209 = param_4 * auVar134._16_8_ - dVar240;
    dVar240 = param_4 * auVar134._24_8_ - dVar240;
    dVar205 = param_4 * auVar131._0_8_ - dVar122;
    dVar218 = param_4 * auVar131._8_8_ - dVar122;
    dVar220 = param_4 * auVar131._16_8_ - dVar122;
    dVar222 = param_4 * auVar131._24_8_ - dVar122;
    dVar219 = param_4 * auVar95._0_8_ - dVar122;
    dVar221 = param_4 * auVar95._8_8_ - dVar122;
    dVar223 = param_4 * auVar95._16_8_ - dVar122;
    dVar122 = param_4 * auVar95._24_8_ - dVar122;
    auVar95 = vpermpd_avx2(auVar184,0x55);
    dVar224 = auVar95._0_8_;
    dVar225 = auVar95._8_8_;
    dVar226 = auVar95._16_8_;
    dVar228 = auVar95._24_8_;
    dVar90 = auVar184._0_8_ * dVar155 - dVar224 * dVar229;
    dVar109 = auVar184._0_8_ * dVar165 - dVar225 * dVar234;
    dVar114 = auVar184._0_8_ * dVar176 - dVar226 * dVar239;
    dVar148 = auVar184._0_8_ * dVar182 - dVar228 * dVar231;
    auVar95 = vpermpd_avx2(auVar184,0xaa);
    dVar233 = auVar95._0_8_;
    dVar238 = auVar95._8_8_;
    dVar230 = auVar95._16_8_;
    dVar235 = auVar95._24_8_;
    dVar63 = dVar224 * dVar205 - dVar233 * dVar155;
    dVar203 = dVar225 * dVar218 - dVar238 * dVar165;
    dVar83 = dVar226 * dVar220 - dVar230 * dVar176;
    dVar86 = dVar228 * dVar222 - dVar235 * dVar182;
    dVar156 = dVar233 * dVar229 - auVar184._0_8_ * dVar205;
    dVar166 = dVar238 * dVar234 - auVar184._0_8_ * dVar218;
    dVar177 = dVar230 * dVar239 - auVar184._0_8_ * dVar220;
    dVar183 = dVar235 * dVar231 - auVar184._0_8_ * dVar222;
    dVar63 = dVar63 + dVar63;
    dVar203 = dVar203 + dVar203;
    dVar83 = dVar83 + dVar83;
    dVar86 = dVar86 + dVar86;
    dVar156 = dVar156 + dVar156;
    dVar166 = dVar166 + dVar166;
    dVar177 = dVar177 + dVar177;
    dVar183 = dVar183 + dVar183;
    dVar90 = dVar90 + dVar90;
    dVar109 = dVar109 + dVar109;
    dVar114 = dVar114 + dVar114;
    dVar148 = dVar148 + dVar148;
    auVar95 = vpermpd_avx2(auVar184,0xff);
    dVar236 = auVar95._0_8_;
    dVar241 = auVar95._8_8_;
    dVar243 = auVar95._16_8_;
    dVar246 = auVar95._24_8_;
    auVar95 = vcvtps2pd_avx(auVar33._16_16_);
    auVar131 = vcvtps2pd_avx(auVar22);
    auVar144 = vcvtps2pd_avx(auVar245._16_16_);
    dVar35 = auVar184._0_8_ * dVar142 - dVar224 * dVar247;
    dVar37 = auVar184._0_8_ * dVar152 - dVar225 * dVar210;
    dVar40 = auVar184._0_8_ * dVar209 - dVar226 * dVar213;
    dVar61 = auVar184._0_8_ * dVar240 - dVar228 * dVar216;
    dVar202 = dVar224 * dVar219 - dVar233 * dVar142;
    dVar66 = dVar225 * dVar221 - dVar238 * dVar152;
    dVar84 = dVar226 * dVar223 - dVar230 * dVar209;
    dVar87 = dVar228 * dVar122 - dVar235 * dVar240;
    dVar91 = dVar233 * dVar247 - auVar184._0_8_ * dVar219;
    dVar111 = dVar238 * dVar210 - auVar184._0_8_ * dVar221;
    dVar115 = dVar230 * dVar213 - auVar184._0_8_ * dVar223;
    dVar151 = dVar235 * dVar216 - auVar184._0_8_ * dVar122;
    dVar202 = dVar202 + dVar202;
    dVar66 = dVar66 + dVar66;
    dVar84 = dVar84 + dVar84;
    dVar87 = dVar87 + dVar87;
    dVar91 = dVar91 + dVar91;
    dVar111 = dVar111 + dVar111;
    dVar115 = dVar115 + dVar115;
    dVar151 = dVar151 + dVar151;
    dVar35 = dVar35 + dVar35;
    dVar37 = dVar37 + dVar37;
    dVar40 = dVar40 + dVar40;
    dVar61 = dVar61 + dVar61;
    auVar134 = vcvtps2pd_avx(auVar244);
    auVar1._4_4_ = auVar196._4_4_ ^ __real_80000000;
    auVar1._0_4_ = auVar196._0_4_ ^ __real_80000000;
    auVar1._8_4_ = auVar196._8_4_ ^ __real_80000000;
    auVar1._12_4_ = auVar196._12_4_ ^ __real_80000000;
    auVar11._16_4_ = auVar196._16_4_ ^ __real_80000000;
    auVar11._0_16_ = auVar1;
    auVar11._20_4_ = auVar196._20_4_ ^ __real_80000000;
    auVar11._24_4_ = auVar196._24_4_ ^ __real_80000000;
    auVar11._28_4_ = auVar196._28_4_ ^ __real_80000000;
    auVar196 = vcvtps2pd_avx(auVar11._16_16_);
    auVar42 = vcvtps2pd_avx(auVar1);
    dVar60 = auVar95._0_8_;
    dVar65 = auVar95._8_8_;
    dVar89 = auVar95._16_8_;
    dVar110 = auVar95._24_8_;
    dVar227 = auVar144._0_8_;
    dVar164 = auVar184._0_8_ * dVar227 - dVar224 * dVar60;
    dVar232 = auVar144._8_8_;
    dVar169 = auVar184._0_8_ * dVar232 - dVar225 * dVar65;
    dVar237 = auVar144._16_8_;
    dVar181 = auVar184._0_8_ * dVar237 - dVar226 * dVar89;
    dVar242 = auVar144._24_8_;
    dVar192 = auVar184._0_8_ * dVar242 - dVar228 * dVar110;
    dVar62 = auVar131._0_8_;
    dVar82 = auVar131._8_8_;
    dVar107 = auVar131._16_8_;
    dVar113 = auVar131._24_8_;
    dVar162 = auVar134._0_8_;
    dVar108 = auVar184._0_8_ * dVar162 - dVar224 * dVar62;
    dVar167 = auVar134._8_8_;
    dVar112 = auVar184._0_8_ * dVar167 - dVar225 * dVar82;
    dVar178 = auVar134._16_8_;
    dVar141 = auVar184._0_8_ * dVar178 - dVar226 * dVar107;
    dVar190 = auVar134._24_8_;
    dVar153 = auVar184._0_8_ * dVar190 - dVar228 * dVar113;
    dVar149 = auVar196._0_8_;
    dVar163 = dVar224 * dVar149 - dVar233 * dVar227;
    dVar204 = auVar196._8_8_;
    dVar168 = dVar225 * dVar204 - dVar238 * dVar232;
    dVar170 = auVar196._16_8_;
    dVar179 = dVar226 * dVar170 - dVar230 * dVar237;
    dVar180 = auVar196._24_8_;
    dVar191 = dVar228 * dVar180 - dVar235 * dVar242;
    dVar248 = auVar42._0_8_;
    dVar150 = dVar224 * dVar248 - dVar233 * dVar162;
    dVar211 = auVar42._8_8_;
    dVar154 = dVar225 * dVar211 - dVar238 * dVar167;
    dVar214 = auVar42._16_8_;
    dVar212 = dVar226 * dVar214 - dVar230 * dVar178;
    dVar217 = auVar42._24_8_;
    dVar215 = dVar228 * dVar217 - dVar235 * dVar190;
    dVar64 = dVar233 * dVar60 - auVar184._0_8_ * dVar149;
    dVar67 = dVar238 * dVar65 - auVar184._0_8_ * dVar204;
    dVar85 = dVar230 * dVar89 - auVar184._0_8_ * dVar170;
    dVar88 = dVar235 * dVar110 - auVar184._0_8_ * dVar180;
    dVar36 = dVar233 * dVar62 - auVar184._0_8_ * dVar248;
    dVar38 = dVar238 * dVar82 - auVar184._0_8_ * dVar211;
    dVar193 = dVar230 * dVar107 - auVar184._0_8_ * dVar214;
    dVar201 = dVar235 * dVar113 - auVar184._0_8_ * dVar217;
    dVar150 = dVar150 + dVar150;
    dVar154 = dVar154 + dVar154;
    dVar212 = dVar212 + dVar212;
    dVar215 = dVar215 + dVar215;
    dVar163 = dVar163 + dVar163;
    dVar168 = dVar168 + dVar168;
    dVar179 = dVar179 + dVar179;
    dVar191 = dVar191 + dVar191;
    dVar36 = dVar36 + dVar36;
    dVar38 = dVar38 + dVar38;
    dVar193 = dVar193 + dVar193;
    dVar201 = dVar201 + dVar201;
    dVar64 = dVar64 + dVar64;
    dVar67 = dVar67 + dVar67;
    dVar85 = dVar85 + dVar85;
    dVar88 = dVar88 + dVar88;
    dVar108 = dVar108 + dVar108;
    dVar112 = dVar112 + dVar112;
    dVar141 = dVar141 + dVar141;
    dVar153 = dVar153 + dVar153;
    dVar164 = dVar164 + dVar164;
    dVar169 = dVar169 + dVar169;
    dVar181 = dVar181 + dVar181;
    dVar192 = dVar192 + dVar192;
    auVar175._0_8_ = ((dVar224 * dVar90 - dVar233 * dVar156) + dVar236 * dVar63 + dVar229) * dVar39;
    auVar175._8_8_ =
         ((dVar225 * dVar109 - dVar238 * dVar166) + dVar241 * dVar203 + dVar234) * dVar39;
    auVar175._16_8_ =
         ((dVar226 * dVar114 - dVar230 * dVar177) + dVar243 * dVar83 + dVar239) * dVar39;
    auVar175._24_8_ =
         ((dVar228 * dVar148 - dVar235 * dVar183) + dVar246 * dVar86 + dVar231) * dVar39;
    auVar188._0_8_ = ((dVar224 * dVar35 - dVar233 * dVar91) + dVar236 * dVar202 + dVar247) * dVar39;
    auVar188._8_8_ = ((dVar225 * dVar37 - dVar238 * dVar111) + dVar241 * dVar66 + dVar210) * dVar39;
    auVar188._16_8_ = ((dVar226 * dVar40 - dVar230 * dVar115) + dVar243 * dVar84 + dVar213) * dVar39
    ;
    auVar188._24_8_ = ((dVar228 * dVar61 - dVar235 * dVar151) + dVar246 * dVar87 + dVar216) * dVar39
    ;
    auVar59._0_8_ = dVar39 * (dVar236 * dVar163 + dVar60 + (dVar224 * dVar164 - dVar233 * dVar64));
    auVar59._8_8_ = dVar39 * (dVar241 * dVar168 + dVar65 + (dVar225 * dVar169 - dVar238 * dVar67));
    auVar59._16_8_ = dVar39 * (dVar243 * dVar179 + dVar89 + (dVar226 * dVar181 - dVar230 * dVar85));
    auVar59._24_8_ = dVar39 * (dVar246 * dVar191 + dVar110 + (dVar228 * dVar192 - dVar235 * dVar88))
    ;
    auVar34._0_8_ = dVar39 * (dVar236 * dVar150 + dVar62 + (dVar224 * dVar108 - dVar233 * dVar36));
    auVar34._8_8_ = dVar39 * (dVar241 * dVar154 + dVar82 + (dVar225 * dVar112 - dVar238 * dVar38));
    auVar34._16_8_ =
         dVar39 * (dVar243 * dVar212 + dVar107 + (dVar226 * dVar141 - dVar230 * dVar193));
    auVar34._24_8_ =
         dVar39 * (dVar246 * dVar215 + dVar113 + (dVar228 * dVar153 - dVar235 * dVar201));
    auVar147._0_8_ =
         local_208 * ((dVar233 * dVar63 - auVar184._0_8_ * dVar90) + dVar236 * dVar156 + dVar155);
    auVar147._8_8_ =
         dStack_200 * ((dVar238 * dVar203 - auVar184._0_8_ * dVar109) + dVar241 * dVar166 + dVar165)
    ;
    auVar147._16_8_ =
         dStack_1f8 * ((dVar230 * dVar83 - auVar184._0_8_ * dVar114) + dVar243 * dVar177 + dVar176);
    auVar147._24_8_ =
         dStack_1f0 * ((dVar235 * dVar86 - auVar184._0_8_ * dVar148) + dVar246 * dVar183 + dVar182);
    auVar200._0_8_ =
         local_208 * ((dVar233 * dVar202 - auVar184._0_8_ * dVar35) + dVar236 * dVar91 + dVar142);
    auVar200._8_8_ =
         dStack_200 * ((dVar238 * dVar66 - auVar184._0_8_ * dVar37) + dVar241 * dVar111 + dVar152);
    auVar200._16_8_ =
         dStack_1f8 * ((dVar230 * dVar84 - auVar184._0_8_ * dVar40) + dVar243 * dVar115 + dVar209);
    auVar200._24_8_ =
         dStack_1f0 * ((dVar235 * dVar87 - auVar184._0_8_ * dVar61) + dVar246 * dVar151 + dVar240);
    auVar208._0_8_ =
         local_208 * ((dVar233 * dVar163 - auVar184._0_8_ * dVar164) + dVar236 * dVar64 + dVar227);
    auVar208._8_8_ =
         dStack_200 * ((dVar238 * dVar168 - auVar184._0_8_ * dVar169) + dVar241 * dVar67 + dVar232);
    auVar208._16_8_ =
         dStack_1f8 * ((dVar230 * dVar179 - auVar184._0_8_ * dVar181) + dVar243 * dVar85 + dVar237);
    auVar208._24_8_ =
         dStack_1f0 * ((dVar235 * dVar191 - auVar184._0_8_ * dVar192) + dVar246 * dVar88 + dVar242);
    auVar81._0_8_ =
         local_208 * ((dVar233 * dVar150 - auVar184._0_8_ * dVar108) + dVar236 * dVar36 + dVar162);
    auVar81._8_8_ =
         dStack_200 * ((dVar238 * dVar154 - auVar184._0_8_ * dVar112) + dVar241 * dVar38 + dVar167);
    auVar81._16_8_ =
         dStack_1f8 * ((dVar230 * dVar212 - auVar184._0_8_ * dVar141) + dVar243 * dVar193 + dVar178)
    ;
    auVar81._24_8_ =
         dStack_1f0 * ((dVar235 * dVar215 - auVar184._0_8_ * dVar153) + dVar246 * dVar201 + dVar190)
    ;
    auVar105._0_8_ =
         local_1b8 * ((auVar184._0_8_ * dVar156 - dVar224 * dVar63) + dVar236 * dVar90 + dVar205);
    auVar105._8_8_ =
         dStack_1b0 * ((auVar184._0_8_ * dVar166 - dVar225 * dVar203) + dVar241 * dVar109 + dVar218)
    ;
    auVar105._16_8_ =
         dStack_1a8 * ((auVar184._0_8_ * dVar177 - dVar226 * dVar83) + dVar243 * dVar114 + dVar220);
    auVar105._24_8_ =
         dStack_1a0 * ((auVar184._0_8_ * dVar183 - dVar228 * dVar86) + dVar246 * dVar148 + dVar222);
    auVar161._0_8_ =
         local_1b8 * ((auVar184._0_8_ * dVar91 - dVar224 * dVar202) + dVar236 * dVar35 + dVar219);
    auVar161._8_8_ =
         dStack_1b0 * ((auVar184._0_8_ * dVar111 - dVar225 * dVar66) + dVar241 * dVar37 + dVar221);
    auVar161._16_8_ =
         dStack_1a8 * ((auVar184._0_8_ * dVar115 - dVar226 * dVar84) + dVar243 * dVar40 + dVar223);
    auVar161._24_8_ =
         dStack_1a0 * ((auVar184._0_8_ * dVar151 - dVar228 * dVar87) + dVar246 * dVar61 + dVar122);
    auVar139._0_8_ =
         local_1b8 * (dVar236 * dVar164 + dVar149 + (auVar184._0_8_ * dVar64 - dVar224 * dVar163));
    auVar139._8_8_ =
         dStack_1b0 * (dVar241 * dVar169 + dVar204 + (auVar184._0_8_ * dVar67 - dVar225 * dVar168));
    auVar139._16_8_ =
         dStack_1a8 * (dVar243 * dVar181 + dVar170 + (auVar184._0_8_ * dVar85 - dVar226 * dVar179));
    auVar139._24_8_ =
         dStack_1a0 * (dVar246 * dVar192 + dVar180 + (auVar184._0_8_ * dVar88 - dVar228 * dVar191));
    auVar4 = vcvtpd2ps_avx(auVar188);
    auVar123 = vcvtpd2ps_avx(auVar175);
    auVar189._0_8_ =
         local_1b8 * (dVar108 * dVar236 + dVar248 + (auVar184._0_8_ * dVar36 - dVar224 * dVar150));
    auVar189._8_8_ =
         dStack_1b0 * (dVar112 * dVar241 + dVar211 + (auVar184._0_8_ * dVar38 - dVar225 * dVar154));
    auVar189._16_8_ =
         dStack_1a8 * (dVar141 * dVar243 + dVar214 + (auVar184._0_8_ * dVar193 - dVar226 * dVar212))
    ;
    auVar189._24_8_ =
         dStack_1a0 * (dVar153 * dVar246 + dVar217 + (auVar184._0_8_ * dVar201 - dVar228 * dVar215))
    ;
    auVar129._16_16_ = auVar123;
    auVar129._0_16_ = auVar4;
    auVar93 = vcvtpd2ps_avx(auVar200);
    auVar1 = vcvtpd2ps_avx(auVar147);
    auVar94 = vcvtpd2ps_avx(auVar161);
    auVar121._16_16_ = auVar1;
    auVar121._0_16_ = auVar93;
    auVar22 = vcvtpd2ps_avx(auVar105);
    auVar104._16_16_ = auVar22;
    auVar104._0_16_ = auVar94;
    auVar244 = vcvtpd2ps_avx(auVar34);
    auVar92 = vcvtpd2ps_avx(auVar59);
    auVar68 = vcvtpd2ps_avx(auVar81);
    auVar2 = vcvtpd2ps_avx(auVar208);
    auVar80._16_16_ = auVar92;
    auVar80._0_16_ = auVar244;
    auVar58._16_16_ = auVar2;
    auVar58._0_16_ = auVar68;
    auVar3 = vcvtpd2ps_avx(auVar189);
    auVar194 = vcvtpd2ps_avx(auVar139);
    auVar32._16_16_ = auVar194;
    auVar32._0_16_ = auVar3;
    cVar13 = (char)uVar14;
    if (cVar13 == -1) goto LAB_140d208d3;
    if ((uVar14 & 1) != 0) {
      *(int *)*pauVar17 = auVar4._0_4_;
    }
    if ((uVar14 & 2) != 0) {
      uVar18 = vextractps_avx(auVar4,1);
      *(undefined4 *)(*pauVar17 + 0xc) = uVar18;
    }
    if ((uVar14 & 4) != 0) {
      uVar18 = vextractps_avx(auVar4,2);
      *(undefined4 *)(*pauVar17 + 0x18) = uVar18;
    }
    if ((uVar14 & 8) != 0) {
      uVar18 = vextractps_avx(auVar4,3);
      *(undefined4 *)(pauVar17[1] + 4) = uVar18;
    }
    if ((uVar14 & 0x10) != 0) {
      *(int *)(pauVar17[1] + 0x10) = auVar123._0_4_;
    }
    if ((uVar14 & 0x20) != 0) {
      uVar18 = vextractps_avx(auVar123,1);
      *(undefined4 *)(pauVar17[1] + 0x1c) = uVar18;
    }
    if ((uVar14 & 0x40) != 0) {
      uVar18 = vextractps_avx(auVar123,2);
      *(undefined4 *)(pauVar17[2] + 8) = uVar18;
    }
    if (cVar13 < '\0') {
      uVar18 = vextractps_avx(auVar123,3);
      *(undefined4 *)(pauVar17[2] + 0x14) = uVar18;
    }
    if ((uVar14 & 1) != 0) {
      *(int *)(*pauVar17 + 4) = auVar93._0_4_;
    }
    if ((uVar14 & 2) != 0) {
      uVar18 = vextractps_avx(auVar93,1);
      *(undefined4 *)(*pauVar17 + 0x10) = uVar18;
    }
    if ((uVar14 & 4) != 0) {
      uVar18 = vextractps_avx(auVar93,2);
      *(undefined4 *)(*pauVar17 + 0x1c) = uVar18;
    }
    if ((uVar14 & 8) != 0) {
      uVar18 = vextractps_avx(auVar93,3);
      *(undefined4 *)(pauVar17[1] + 8) = uVar18;
    }
    if ((uVar14 & 0x10) != 0) {
      *(int *)(pauVar17[1] + 0x14) = auVar1._0_4_;
    }
    if ((uVar14 & 0x20) != 0) {
      uVar18 = vextractps_avx(auVar1,1);
      *(undefined4 *)pauVar17[2] = uVar18;
    }
    if ((uVar14 & 0x40) != 0) {
      uVar18 = vextractps_avx(auVar1,2);
      *(undefined4 *)(pauVar17[2] + 0xc) = uVar18;
    }
    if (cVar13 < '\0') {
      uVar18 = vextractps_avx(auVar1,3);
      *(undefined4 *)(pauVar17[2] + 0x18) = uVar18;
    }
    if ((uVar14 & 1) != 0) {
      *(int *)(*pauVar17 + 8) = auVar94._0_4_;
    }
    if ((uVar14 & 2) != 0) {
      uVar18 = vextractps_avx(auVar94,1);
      *(undefined4 *)(*pauVar17 + 0x14) = uVar18;
    }
    if ((uVar14 & 4) != 0) {
      uVar18 = vextractps_avx(auVar94,2);
      *(undefined4 *)pauVar17[1] = uVar18;
    }
    if ((uVar14 & 8) != 0) {
      uVar18 = vextractps_avx(auVar94,3);
      *(undefined4 *)(pauVar17[1] + 0xc) = uVar18;
    }
    if ((uVar14 & 0x10) != 0) {
      *(int *)(pauVar17[1] + 0x18) = auVar22._0_4_;
    }
    if ((uVar14 & 0x20) != 0) {
      uVar18 = vextractps_avx(auVar22,1);
      *(undefined4 *)(pauVar17[2] + 4) = uVar18;
    }
    if ((uVar14 & 0x40) != 0) {
      uVar18 = vextractps_avx(auVar22,2);
      *(undefined4 *)(pauVar17[2] + 0x10) = uVar18;
    }
    if (cVar13 < '\0') {
      uVar18 = vextractps_avx(auVar22,3);
      *(undefined4 *)(pauVar17[2] + 0x1c) = uVar18;
    }
    if ((uVar14 & 1) != 0) {
      *(int *)*pauVar20 = auVar244._0_4_;
    }
    if ((uVar14 & 2) != 0) {
      uVar18 = vextractps_avx(auVar244,1);
      *(undefined4 *)(param_2 + 0xc + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 4) != 0) {
      uVar18 = vextractps_avx(auVar244,2);
      *(undefined4 *)(param_2 + 0x18 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 8) != 0) {
      uVar18 = vextractps_avx(auVar244,3);
      *(undefined4 *)(param_2 + 0x24 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 0x10) != 0) {
      *(int *)(param_2 + 0x30 + uVar12 * 0xc) = auVar92._0_4_;
    }
    if ((uVar14 & 0x20) != 0) {
      uVar18 = vextractps_avx(auVar92,1);
      *(undefined4 *)(param_2 + 0x3c + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 0x40) != 0) {
      uVar18 = vextractps_avx(auVar92,2);
      *(undefined4 *)(param_2 + 0x48 + uVar12 * 0xc) = uVar18;
    }
    if (cVar13 < '\0') {
      uVar18 = vextractps_avx(auVar92,3);
      *(undefined4 *)(param_2 + 0x54 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 1) != 0) {
      *(int *)(param_2 + 4 + uVar12 * 0xc) = auVar68._0_4_;
    }
    if ((uVar14 & 2) != 0) {
      uVar18 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_2 + 0x10 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 4) != 0) {
      uVar18 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_2 + 0x1c + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 8) != 0) {
      uVar18 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_2 + 0x28 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 0x10) != 0) {
      *(int *)(param_2 + 0x34 + uVar12 * 0xc) = auVar2._0_4_;
    }
    if ((uVar14 & 0x20) != 0) {
      uVar18 = vextractps_avx(auVar2,1);
      *(undefined4 *)(param_2 + 0x40 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 0x40) != 0) {
      uVar18 = vextractps_avx(auVar2,2);
      *(undefined4 *)(param_2 + 0x4c + uVar12 * 0xc) = uVar18;
    }
    if (cVar13 < '\0') {
      uVar18 = vextractps_avx(auVar2,3);
      *(undefined4 *)(param_2 + 0x58 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 1) != 0) {
      *(int *)(param_2 + 8 + uVar12 * 0xc) = auVar3._0_4_;
    }
    if ((uVar14 & 2) != 0) {
      uVar18 = vextractps_avx(auVar3,1);
      *(undefined4 *)(param_2 + 0x14 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 4) != 0) {
      uVar18 = vextractps_avx(auVar3,2);
      *(undefined4 *)(param_2 + 0x20 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 8) != 0) {
      uVar18 = vextractps_avx(auVar3,3);
      *(undefined4 *)(param_2 + 0x2c + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 0x10) != 0) {
      *(int *)(param_2 + 0x38 + uVar12 * 0xc) = auVar194._0_4_;
    }
    if ((uVar14 & 0x20) != 0) {
      uVar18 = vextractps_avx(auVar194,1);
      *(undefined4 *)(param_2 + 0x44 + uVar12 * 0xc) = uVar18;
    }
    if ((uVar14 & 0x40) != 0) {
      uVar18 = vextractps_avx(auVar194,2);
      *(undefined4 *)(param_2 + 0x50 + uVar12 * 0xc) = uVar18;
    }
    goto joined_r0x000140d208c5;
  }
  auVar95 = vcmppd_avx(auVar144,auVar101,2);
  auVar196 = vpackssdw_avx2(auVar196,auVar95);
  auVar196 = vpermq_avx2(auVar196,0xd8);
  auVar196 = vblendvps_avx(*param_6,auVar144,auVar196);
  auVar95 = vpmovzxwd_avx2(auVar4);
  auVar95 = vpslld_avx2(auVar95,0x1f);
  auVar96 = vpsrad_avx2(auVar95,0x1f);
  auVar95 = vpand_avx2(auVar96,auVar196);
  iVar15 = vmovmskps_avx(auVar95);
  if (iVar15 == 0) {
    auVar95 = ZEXT832(0) << 0x20;
LAB_140d1e6f4:
    auVar125._0_8_ = (ulonglong)dVar39 & __real_7fe0000000000000;
    auVar125._8_8_ = (ulonglong)dVar60 & __real_7fe0000000000000;
    auVar125._16_8_ = (ulonglong)dVar62 & __real_7fe0000000000000;
    auVar125._24_8_ = 0;
    auVar143._8_8_ = __real_7fcfffffffffffff;
    auVar143._0_8_ = __real_7fcfffffffffffff;
    auVar143._16_8_ = __real_7fcfffffffffffff;
    auVar143._24_8_ = __real_7fcfffffffffffff;
    auVar144 = vpsubq_avx2(auVar143,auVar125);
    auVar196 = vpsubq_avx2(auVar143,ZEXT832((ulonglong)dVar65 & __real_7fe0000000000000) << 0x40);
    auVar131 = vpcmpeqd_avx2(auVar143,auVar143);
    auVar69._0_8_ = auVar196._0_8_ * 0.0;
    auVar69._8_8_ = dVar65 * auVar196._8_8_;
    auVar69._16_8_ = auVar196._16_8_ * 0.0;
    auVar69._24_8_ = dVar82 * auVar196._24_8_;
    auVar132._0_8_ = dVar39 * auVar144._0_8_;
    auVar132._8_8_ = dVar60 * auVar144._8_8_;
    auVar132._16_8_ = dVar62 * auVar144._16_8_;
    auVar132._24_8_ = auVar144._24_8_ * 0.0;
    auVar4 = vcvtpd2ps_avx(auVar132);
    auVar123 = vcvtpd2ps_avx(auVar69);
    auVar70._16_16_ = auVar123;
    auVar70._0_16_ = auVar4;
    auVar196 = vrcpps_avx(auVar70);
    auVar68._0_4_ = auVar196._0_4_ * (-(auVar196._0_4_ * auVar4._0_4_) + __real_40000000);
    auVar68._4_4_ = auVar196._4_4_ * (-(auVar196._4_4_ * auVar4._4_4_) + __real_40000000);
    auVar68._8_4_ = auVar196._8_4_ * (-(auVar196._8_4_ * auVar4._8_4_) + __real_40000000);
    auVar68._12_4_ = auVar196._12_4_ * (-(auVar196._12_4_ * auVar4._12_4_) + __real_40000000);
    auVar196 = vcvtps2pd_avx(auVar68);
    dVar65 = auVar144._0_8_ * auVar196._0_8_;
    dVar82 = auVar144._8_8_ * auVar196._8_8_;
    dVar89 = auVar144._16_8_ * auVar196._16_8_;
    dVar107 = auVar144._24_8_ * auVar196._24_8_;
    dVar65 = dVar65 * (-(dVar39 * dVar65) + __real_4000000000000000);
    dVar82 = dVar82 * (-(dVar60 * dVar82) + __real_4000000000000000);
    dVar89 = dVar89 * (-(dVar62 * dVar89) + __real_4000000000000000);
    dVar107 = dVar107 * (-(dVar107 * 0.0) + __real_4000000000000000);
    auVar43._0_8_ = dVar65 * (-(dVar65 * dVar39) + __real_4000000000000000);
    auVar43._8_8_ = dVar82 * (-(dVar82 * dVar60) + __real_4000000000000000);
    auVar43._16_8_ = dVar89 * (-(dVar89 * dVar62) + __real_4000000000000000);
    auVar43._24_8_ = dVar107 * (-(dVar107 * 0.0) + __real_4000000000000000);
    auVar196 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                           auVar95 ^ auVar131);
    auVar96 = vblendvps_avx(auVar96,auVar43,auVar196);
  }
  else {
    auVar4 = vcvtpd2ps_avx(auVar42);
    auVar123 = vcvtpd2ps_avx(auVar144);
    auVar97._16_16_ = auVar123;
    auVar97._0_16_ = auVar4;
    auVar131 = vrcpps_avx(auVar97);
    auVar92._0_4_ = auVar131._0_4_ * (-(auVar131._0_4_ * auVar4._0_4_) + __real_40000000);
    auVar92._4_4_ = auVar131._4_4_ * (-(auVar131._4_4_ * auVar4._4_4_) + __real_40000000);
    auVar92._8_4_ = auVar131._8_4_ * (-(auVar131._8_4_ * auVar4._8_4_) + __real_40000000);
    auVar92._12_4_ = auVar131._12_4_ * (-(auVar131._12_4_ * auVar4._12_4_) + __real_40000000);
    auVar131 = vcvtps2pd_avx(auVar92);
    dVar89 = (-(dVar39 * auVar131._0_8_) + __real_4000000000000000) * auVar131._0_8_;
    dVar107 = (-(dVar60 * auVar131._8_8_) + __real_4000000000000000) * auVar131._8_8_;
    dVar110 = (-(dVar62 * auVar131._16_8_) + __real_4000000000000000) * auVar131._16_8_;
    dVar113 = (-(auVar131._24_8_ * 0.0) + __real_4000000000000000) * auVar131._24_8_;
    auVar96._0_8_ = dVar89 * (-(dVar39 * dVar89) + __real_4000000000000000);
    auVar96._8_8_ = dVar107 * (-(dVar60 * dVar107) + __real_4000000000000000);
    auVar96._16_8_ = dVar110 * (-(dVar62 * dVar110) + __real_4000000000000000);
    auVar96._24_8_ = dVar113 * (-(dVar113 * 0.0) + __real_4000000000000000);
    uVar18 = vmovmskps_avx(auVar196);
    if ((char)uVar18 != (char)iVar15) goto LAB_140d1e6f4;
  }
  auVar196 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                         auVar134);
  auVar196 = vblendvps_avx(auVar96,SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar196);
  uVar16 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar16 = param_5;
  }
  auVar95 = vpermpd_avx2(auVar184,0x55);
  auVar131 = vpermpd_avx2(auVar184,0xaa);
  auVar144 = vpermpd_avx2(auVar184,0xff);
  auVar134 = vpermpd_avx2(auVar196,0x55);
  auVar42 = vpermpd_avx2(auVar196,0xaa);
  local_2c8 = auVar95._0_8_;
  dStack_2c0 = auVar95._8_8_;
  dStack_2b8 = auVar95._16_8_;
  dStack_2b0 = auVar95._24_8_;
  local_2a8 = auVar131._0_8_;
  dStack_2a0 = auVar131._8_8_;
  dStack_298 = auVar131._16_8_;
  dStack_290 = auVar131._24_8_;
  local_288 = auVar144._0_8_;
  dStack_280 = auVar144._8_8_;
  dStack_278 = auVar144._16_8_;
  dStack_270 = auVar144._24_8_;
  local_228 = auVar134._0_8_;
  dStack_220 = auVar134._8_8_;
  dStack_218 = auVar134._16_8_;
  dStack_210 = auVar134._24_8_;
  local_208 = auVar42._0_8_;
  dStack_200 = auVar42._8_8_;
  dStack_1f8 = auVar42._16_8_;
  dStack_1f0 = auVar42._24_8_;
  dVar39 = auVar196._0_8_;
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar19 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    lVar21 = 0x40;
    uVar19 = 0;
    do {
      auVar135 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar127 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar75 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar196 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar21);
      auVar95 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar21);
      auVar131 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar95);
      auVar144 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar196);
      auVar131 = vblendps_avx(auVar144,auVar131,0x88);
      auVar144 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar95);
      auVar134 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_1 + lVar21));
      auVar144 = vblendps_avx(auVar134,auVar144,0x13);
      auVar196 = vblendps_avx(auVar95,auVar196,0x24);
      auVar196 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar196);
      auVar95 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_1 + lVar21));
      auVar134 = vblendps_avx(auVar196,auVar95,0xe0);
      auVar196 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar21);
      auVar95 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar21);
      auVar42 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar95);
      auVar101 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar196);
      auVar42 = vblendps_avx(auVar101,auVar42,0x88);
      auVar101 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar95);
      auVar124 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_2 + lVar21));
      auVar101 = vblendps_avx(auVar124,auVar101,0x13);
      auVar74 = vperm2f128_avx(auVar42,auVar101,0x31);
      auVar196 = vblendps_avx(auVar95,auVar196,0x24);
      auVar196 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar196);
      auVar95 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_2 + lVar21));
      auVar196 = vblendps_avx(auVar196,auVar95,0xe0);
      auVar95 = vcvtps2pd_avx(auVar131._0_16_);
      auVar124 = vcvtps2pd_avx(auVar144._0_16_);
      auVar131 = vcvtps2pd_avx(auVar131._16_16_);
      auVar144 = vcvtps2pd_avx(auVar144._16_16_);
      auVar50 = vcvtps2pd_avx(auVar134._0_16_);
      auVar134 = vcvtps2pd_avx(auVar134._16_16_);
      dVar204 = param_4 * auVar124._0_8_ - dVar216;
      dVar209 = param_4 * auVar124._8_8_ - dVar216;
      dVar212 = param_4 * auVar124._16_8_ - dVar216;
      dVar215 = param_4 * auVar124._24_8_ - dVar216;
      dVar225 = param_4 * auVar95._0_8_ - dVar216;
      dVar228 = param_4 * auVar95._8_8_ - dVar216;
      dVar233 = param_4 * auVar95._16_8_ - dVar216;
      dVar238 = param_4 * auVar95._24_8_ - dVar216;
      dVar218 = param_4 * auVar144._0_8_ - dVar240;
      dVar220 = param_4 * auVar144._8_8_ - dVar240;
      dVar222 = param_4 * auVar144._16_8_ - dVar240;
      dVar224 = param_4 * auVar144._24_8_ - dVar240;
      dVar90 = param_4 * auVar131._0_8_ - dVar240;
      dVar108 = param_4 * auVar131._8_8_ - dVar240;
      dVar111 = param_4 * auVar131._16_8_ - dVar240;
      dVar114 = param_4 * auVar131._24_8_ - dVar240;
      dVar141 = param_4 * auVar134._0_8_ - dVar122;
      dVar148 = param_4 * auVar134._8_8_ - dVar122;
      dVar151 = param_4 * auVar134._16_8_ - dVar122;
      dVar153 = param_4 * auVar134._24_8_ - dVar122;
      dVar155 = param_4 * auVar50._0_8_ - dVar122;
      dVar162 = param_4 * auVar50._8_8_ - dVar122;
      dVar164 = param_4 * auVar50._16_8_ - dVar122;
      dVar166 = param_4 * auVar50._24_8_ - dVar122;
      dVar183 = auVar184._0_8_ * dVar218 - dVar204 * local_2c8;
      dVar190 = auVar184._0_8_ * dVar220 - dVar209 * dStack_2c0;
      dVar191 = auVar184._0_8_ * dVar222 - dVar212 * dStack_2b8;
      dVar192 = auVar184._0_8_ * dVar224 - dVar215 * dStack_2b0;
      dVar168 = auVar184._0_8_ * dVar90 - dVar225 * local_2c8;
      dVar176 = auVar184._0_8_ * dVar108 - dVar228 * dStack_2c0;
      dVar178 = auVar184._0_8_ * dVar111 - dVar233 * dStack_2b8;
      dVar181 = auVar184._0_8_ * dVar114 - dVar238 * dStack_2b0;
      dVar193 = local_2c8 * dVar141 - dVar218 * local_2a8;
      dVar201 = dStack_2c0 * dVar148 - dVar220 * dStack_2a0;
      dVar202 = dStack_2b8 * dVar151 - dVar222 * dStack_298;
      dVar203 = dStack_2b0 * dVar153 - dVar224 * dStack_290;
      dVar40 = local_2c8 * dVar155 - local_2a8 * dVar90;
      dVar61 = dStack_2c0 * dVar162 - dStack_2a0 * dVar108;
      dVar63 = dStack_2b8 * dVar164 - dStack_298 * dVar111;
      dVar64 = dStack_2b0 * dVar166 - dStack_290 * dVar114;
      dVar66 = local_2a8 * dVar204 - auVar184._0_8_ * dVar141;
      dVar83 = dStack_2a0 * dVar209 - auVar184._0_8_ * dVar148;
      dVar85 = dStack_298 * dVar212 - auVar184._0_8_ * dVar151;
      dVar87 = dStack_290 * dVar215 - auVar184._0_8_ * dVar153;
      dVar89 = local_2a8 * dVar225 - auVar184._0_8_ * dVar155;
      dVar110 = dStack_2a0 * dVar228 - auVar184._0_8_ * dVar162;
      dVar35 = dStack_298 * dVar233 - auVar184._0_8_ * dVar164;
      dVar37 = dStack_290 * dVar238 - auVar184._0_8_ * dVar166;
      dVar40 = dVar40 + dVar40;
      dVar61 = dVar61 + dVar61;
      dVar63 = dVar63 + dVar63;
      dVar64 = dVar64 + dVar64;
      dVar193 = dVar193 + dVar193;
      dVar201 = dVar201 + dVar201;
      dVar202 = dVar202 + dVar202;
      dVar203 = dVar203 + dVar203;
      dVar89 = dVar89 + dVar89;
      dVar110 = dVar110 + dVar110;
      dVar35 = dVar35 + dVar35;
      dVar37 = dVar37 + dVar37;
      dVar66 = dVar66 + dVar66;
      dVar83 = dVar83 + dVar83;
      dVar85 = dVar85 + dVar85;
      dVar87 = dVar87 + dVar87;
      dVar168 = dVar168 + dVar168;
      dVar176 = dVar176 + dVar176;
      dVar178 = dVar178 + dVar178;
      dVar181 = dVar181 + dVar181;
      dVar183 = dVar183 + dVar183;
      dVar190 = dVar190 + dVar190;
      dVar191 = dVar191 + dVar191;
      dVar192 = dVar192 + dVar192;
      auVar3._4_4_ = auVar42._4_4_ ^ uVar14;
      auVar3._0_4_ = auVar42._0_4_ ^ uVar14;
      auVar3._8_4_ = auVar42._8_4_ ^ uVar14;
      auVar3._12_4_ = auVar42._12_4_ ^ uVar14;
      auVar9._16_4_ = auVar101._0_4_ ^ uVar14;
      auVar9._0_16_ = auVar3;
      auVar9._20_4_ = auVar101._4_4_ ^ uVar14;
      auVar9._24_4_ = auVar101._8_4_ ^ uVar14;
      auVar9._28_4_ = auVar101._12_4_ ^ uVar14;
      auVar95 = vcvtps2pd_avx(auVar9._16_16_);
      auVar131 = vcvtps2pd_avx(auVar3);
      auVar2._4_4_ = auVar74._4_4_ ^ uVar14;
      auVar2._0_4_ = auVar74._0_4_ ^ uVar14;
      auVar2._8_4_ = auVar74._8_4_ ^ uVar14;
      auVar2._12_4_ = auVar74._12_4_ ^ uVar14;
      auVar8._16_4_ = auVar74._16_4_ ^ uVar14;
      auVar8._0_16_ = auVar2;
      auVar8._20_4_ = auVar74._20_4_ ^ uVar14;
      auVar8._24_4_ = auVar74._24_4_ ^ uVar14;
      auVar8._28_4_ = auVar74._28_4_ ^ uVar14;
      auVar144 = vcvtps2pd_avx(auVar8._16_16_);
      local_408._0_4_ = auVar196._0_4_;
      local_408._4_4_ = auVar196._4_4_;
      local_408._8_4_ = auVar196._8_4_;
      local_408._12_4_ = auVar196._12_4_;
      uStack_3f8 = auVar196._16_4_;
      uStack_3f4 = auVar196._20_4_;
      uStack_3f0 = auVar196._24_4_;
      uStack_3ec = auVar196._28_4_;
      auVar194._0_4_ = uVar14 ^ local_408._0_4_;
      auVar194._4_4_ = uVar14 ^ local_408._4_4_;
      auVar194._8_4_ = uVar14 ^ local_408._8_4_;
      auVar194._12_4_ = uVar14 ^ local_408._12_4_;
      auVar195._16_4_ = uVar14 ^ uStack_3f8;
      auVar195._0_16_ = auVar194;
      auVar195._20_4_ = uVar14 ^ uStack_3f4;
      auVar195._24_4_ = uVar14 ^ uStack_3f0;
      auVar195._28_4_ = uVar14 ^ uStack_3ec;
      auVar196 = vcvtps2pd_avx(auVar2);
      auVar134 = vcvtps2pd_avx(auVar195._16_16_);
      auVar42 = vcvtps2pd_avx(auVar194);
      local_3c8 = auVar95._0_8_;
      dStack_3c0 = auVar95._8_8_;
      dStack_3b8 = auVar95._16_8_;
      dStack_3b0 = auVar95._24_8_;
      dVar154 = auVar144._0_8_;
      dVar170 = auVar144._8_8_;
      dVar180 = auVar144._16_8_;
      dVar205 = auVar144._24_8_;
      dVar60 = auVar134._0_8_;
      dVar62 = auVar134._8_8_;
      dVar65 = auVar134._16_8_;
      dVar82 = auVar134._24_8_;
      dVar91 = auVar184._0_8_ * dVar154 - local_2c8 * local_3c8;
      dVar109 = auVar184._0_8_ * dVar170 - dStack_2c0 * dStack_3c0;
      dVar112 = auVar184._0_8_ * dVar180 - dStack_2b8 * dStack_3b8;
      dVar115 = auVar184._0_8_ * dVar205 - dStack_2b0 * dStack_3b0;
      dVar156 = local_2c8 * dVar60 - dVar154 * local_2a8;
      dVar163 = dStack_2c0 * dVar62 - dVar170 * dStack_2a0;
      dVar165 = dStack_2b8 * dVar65 - dVar180 * dStack_298;
      dVar167 = dStack_2b0 * dVar82 - dVar205 * dStack_290;
      dVar169 = local_2a8 * local_3c8 - auVar184._0_8_ * dVar60;
      dVar177 = dStack_2a0 * dStack_3c0 - auVar184._0_8_ * dVar62;
      dVar179 = dStack_298 * dStack_3b8 - auVar184._0_8_ * dVar65;
      dVar182 = dStack_290 * dStack_3b0 - auVar184._0_8_ * dVar82;
      dVar156 = dVar156 + dVar156;
      dVar163 = dVar163 + dVar163;
      dVar165 = dVar165 + dVar165;
      dVar167 = dVar167 + dVar167;
      dVar169 = dVar169 + dVar169;
      dVar177 = dVar177 + dVar177;
      dVar179 = dVar179 + dVar179;
      dVar182 = dVar182 + dVar182;
      dVar91 = dVar91 + dVar91;
      dVar109 = dVar109 + dVar109;
      dVar112 = dVar112 + dVar112;
      dVar115 = dVar115 + dVar115;
      local_3e8 = auVar131._0_8_;
      dStack_3e0 = auVar131._8_8_;
      dStack_3d8 = auVar131._16_8_;
      dStack_3d0 = auVar131._24_8_;
      local_1b8 = auVar196._0_8_;
      dStack_1b0 = auVar196._8_8_;
      dStack_1a8 = auVar196._16_8_;
      dStack_1a0 = auVar196._24_8_;
      dVar67 = auVar184._0_8_ * local_1b8 - local_2c8 * local_3e8;
      dVar84 = auVar184._0_8_ * dStack_1b0 - dStack_2c0 * dStack_3e0;
      dVar86 = auVar184._0_8_ * dStack_1a8 - dStack_2b8 * dStack_3d8;
      dVar88 = auVar184._0_8_ * dStack_1a0 - dStack_2b0 * dStack_3d0;
      dVar142 = auVar42._0_8_;
      dVar226 = local_2c8 * dVar142 - local_2a8 * local_1b8;
      dVar149 = auVar42._8_8_;
      dVar229 = dStack_2c0 * dVar149 - dStack_2a0 * dStack_1b0;
      dVar150 = auVar42._16_8_;
      dVar234 = dStack_2b8 * dVar150 - dStack_298 * dStack_1a8;
      dVar152 = auVar42._24_8_;
      dVar239 = dStack_2b0 * dVar152 - dStack_290 * dStack_1a0;
      dVar107 = local_2a8 * local_3e8 - auVar184._0_8_ * dVar142;
      dVar113 = dStack_2a0 * dStack_3e0 - auVar184._0_8_ * dVar149;
      dVar36 = dStack_298 * dStack_3d8 - auVar184._0_8_ * dVar150;
      dVar38 = dStack_290 * dStack_3d0 - auVar184._0_8_ * dVar152;
      dVar226 = dVar226 + dVar226;
      dVar229 = dVar229 + dVar229;
      dVar234 = dVar234 + dVar234;
      dVar239 = dVar239 + dVar239;
      dVar107 = dVar107 + dVar107;
      dVar113 = dVar113 + dVar113;
      dVar36 = dVar36 + dVar36;
      dVar38 = dVar38 + dVar38;
      dVar67 = dVar67 + dVar67;
      dVar84 = dVar84 + dVar84;
      dVar86 = dVar86 + dVar86;
      dVar88 = dVar88 + dVar88;
      auVar23._0_8_ =
           dVar39 * (local_288 * dVar193 + dVar204 + (local_2c8 * dVar183 - dVar66 * local_2a8));
      auVar23._8_8_ =
           dVar39 * (dStack_280 * dVar201 + dVar209 + (dStack_2c0 * dVar190 - dVar83 * dStack_2a0));
      auVar23._16_8_ =
           dVar39 * (dStack_278 * dVar202 + dVar212 + (dStack_2b8 * dVar191 - dVar85 * dStack_298));
      auVar23._24_8_ =
           dVar39 * (dStack_270 * dVar203 + dVar215 + (dStack_2b0 * dVar192 - dVar87 * dStack_290));
      auVar98._0_8_ =
           dVar39 * (local_288 * dVar40 + dVar225 + (local_2c8 * dVar168 - local_2a8 * dVar89));
      auVar98._8_8_ =
           dVar39 * (dStack_280 * dVar61 + dVar228 + (dStack_2c0 * dVar176 - dStack_2a0 * dVar110));
      auVar98._16_8_ =
           dVar39 * (dStack_278 * dVar63 + dVar233 + (dStack_2b8 * dVar178 - dStack_298 * dVar35));
      auVar98._24_8_ =
           dVar39 * (dStack_270 * dVar64 + dVar238 + (dStack_2b0 * dVar181 - dStack_290 * dVar37));
      auVar157._0_8_ =
           (local_288 * dVar66 + dVar218 + (local_2a8 * dVar193 - auVar184._0_8_ * dVar183)) *
           local_228;
      auVar157._8_8_ =
           (dStack_280 * dVar83 + dVar220 + (dStack_2a0 * dVar201 - auVar184._0_8_ * dVar190)) *
           dStack_220;
      auVar157._16_8_ =
           (dStack_278 * dVar85 + dVar222 + (dStack_298 * dVar202 - auVar184._0_8_ * dVar191)) *
           dStack_218;
      auVar157._24_8_ =
           (dStack_270 * dVar87 + dVar224 + (dStack_290 * dVar203 - auVar184._0_8_ * dVar192)) *
           dStack_210;
      auVar44._0_8_ =
           ((local_2a8 * dVar40 - auVar184._0_8_ * dVar168) + local_288 * dVar89 + dVar90) *
           local_228;
      auVar44._8_8_ =
           ((dStack_2a0 * dVar61 - auVar184._0_8_ * dVar176) + dStack_280 * dVar110 + dVar108) *
           dStack_220;
      auVar44._16_8_ =
           ((dStack_298 * dVar63 - auVar184._0_8_ * dVar178) + dStack_278 * dVar35 + dVar111) *
           dStack_218;
      auVar44._24_8_ =
           ((dStack_290 * dVar64 - auVar184._0_8_ * dVar181) + dStack_270 * dVar37 + dVar114) *
           dStack_210;
      auVar171._0_8_ =
           (local_288 * dVar183 + dVar141 + (auVar184._0_8_ * dVar66 - local_2c8 * dVar193)) *
           local_208;
      auVar171._8_8_ =
           (dStack_280 * dVar190 + dVar148 + (auVar184._0_8_ * dVar83 - dStack_2c0 * dVar201)) *
           dStack_200;
      auVar171._16_8_ =
           (dStack_278 * dVar191 + dVar151 + (auVar184._0_8_ * dVar85 - dStack_2b8 * dVar202)) *
           dStack_1f8;
      auVar171._24_8_ =
           (dStack_270 * dVar192 + dVar153 + (auVar184._0_8_ * dVar87 - dStack_2b0 * dVar203)) *
           dStack_1f0;
      auVar185._0_8_ =
           (local_288 * dVar168 + dVar155 + (auVar184._0_8_ * dVar89 - local_2c8 * dVar40)) *
           local_208;
      auVar185._8_8_ =
           (dStack_280 * dVar176 + dVar162 + (auVar184._0_8_ * dVar110 - dStack_2c0 * dVar61)) *
           dStack_200;
      auVar185._16_8_ =
           (dStack_278 * dVar178 + dVar164 + (auVar184._0_8_ * dVar35 - dStack_2b8 * dVar63)) *
           dStack_1f8;
      auVar185._24_8_ =
           (dStack_270 * dVar181 + dVar166 + (auVar184._0_8_ * dVar37 - dStack_2b0 * dVar64)) *
           dStack_1f0;
      auVar4 = vcvtpd2ps_avx(auVar98);
      auVar123 = vcvtpd2ps_avx(auVar23);
      auVar93 = vcvtpd2ps_avx(auVar44);
      auVar45._16_16_ = auVar123;
      auVar45._0_16_ = auVar4;
      auVar123 = vcvtpd2ps_avx(auVar157);
      auVar24._16_16_ = auVar123;
      auVar24._0_16_ = auVar93;
      auVar123 = vcvtpd2ps_avx(auVar185);
      auVar1 = vcvtpd2ps_avx(auVar171);
      auVar158._16_16_ = auVar1;
      auVar158._0_16_ = auVar123;
      auVar99._16_16_ = auVar93;
      auVar99._0_16_ = auVar4;
      auVar131 = vshufpd_avx(auVar45,auVar99,2);
      auVar95 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar158);
      auVar196 = vpermpd_avx2(auVar24,0xe9);
      auVar196 = vblendps_avx(auVar95,auVar196,7);
      auVar95 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar196);
      auVar144 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar131);
      auVar95 = vblendps_avx(auVar144,auVar95,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar21) = auVar95;
      auVar134 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar95 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar196);
      auVar196 = vshufpd_avx(auVar131,auVar131,1);
      auVar196 = vblendps_avx(auVar95,auVar196,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar21) = auVar196;
      auVar101 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar42 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar95 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar24);
      auVar196 = vpermpd_avx2(auVar45,0xff);
      auVar196 = vblendpd_avx(auVar95,auVar196,1);
      auVar196 = vblendps_avx(auVar196,auVar158,0xe0);
      auVar46._0_8_ =
           dVar39 * (local_288 * dVar156 + local_3c8 + (local_2c8 * dVar91 - dVar169 * local_2a8));
      auVar46._8_8_ =
           dVar39 * (dStack_280 * dVar163 + dStack_3c0 +
                    (dStack_2c0 * dVar109 - dVar177 * dStack_2a0));
      auVar46._16_8_ =
           dVar39 * (dStack_278 * dVar165 + dStack_3b8 +
                    (dStack_2b8 * dVar112 - dVar179 * dStack_298));
      auVar46._24_8_ =
           dVar39 * (dStack_270 * dVar167 + dStack_3b0 +
                    (dStack_2b0 * dVar115 - dVar182 * dStack_290));
      auVar100._0_8_ =
           dVar39 * (local_288 * dVar226 + local_3e8 + (local_2c8 * dVar67 - local_2a8 * dVar107));
      auVar100._8_8_ =
           dVar39 * (dStack_280 * dVar229 + dStack_3e0 +
                    (dStack_2c0 * dVar84 - dStack_2a0 * dVar113));
      auVar100._16_8_ =
           dVar39 * (dStack_278 * dVar234 + dStack_3d8 + (dStack_2b8 * dVar86 - dStack_298 * dVar36)
                    );
      auVar100._24_8_ =
           dVar39 * (dStack_270 * dVar239 + dStack_3d0 + (dStack_2b0 * dVar88 - dStack_290 * dVar38)
                    );
      auVar116._0_8_ =
           local_228 *
           (local_288 * dVar169 + dVar154 + (local_2a8 * dVar156 - auVar184._0_8_ * dVar91));
      auVar116._8_8_ =
           dStack_220 *
           (dStack_280 * dVar177 + dVar170 + (dStack_2a0 * dVar163 - auVar184._0_8_ * dVar109));
      auVar116._16_8_ =
           dStack_218 *
           (dStack_278 * dVar179 + dVar180 + (dStack_298 * dVar165 - auVar184._0_8_ * dVar112));
      auVar116._24_8_ =
           dStack_210 *
           (dStack_270 * dVar182 + dVar205 + (dStack_290 * dVar167 - auVar184._0_8_ * dVar115));
      auVar71._0_8_ =
           local_228 *
           (local_288 * dVar107 + local_1b8 + (local_2a8 * dVar226 - auVar184._0_8_ * dVar67));
      auVar71._8_8_ =
           dStack_220 *
           (dStack_280 * dVar113 + dStack_1b0 + (dStack_2a0 * dVar229 - auVar184._0_8_ * dVar84));
      auVar71._16_8_ =
           dStack_218 *
           (dStack_278 * dVar36 + dStack_1a8 + (dStack_298 * dVar234 - auVar184._0_8_ * dVar86));
      auVar71._24_8_ =
           dStack_210 *
           (dStack_270 * dVar38 + dStack_1a0 + (dStack_290 * dVar239 - auVar184._0_8_ * dVar88));
      auVar126._0_8_ =
           local_208 *
           (local_288 * dVar91 + dVar60 + (auVar184._0_8_ * dVar169 - dVar156 * local_2c8));
      auVar126._8_8_ =
           dStack_200 *
           (dStack_280 * dVar109 + dVar62 + (auVar184._0_8_ * dVar177 - dVar163 * dStack_2c0));
      auVar126._16_8_ =
           dStack_1f8 *
           (dStack_278 * dVar112 + dVar65 + (auVar184._0_8_ * dVar179 - dVar165 * dStack_2b8));
      auVar126._24_8_ =
           dStack_1f0 *
           (dStack_270 * dVar115 + dVar82 + (auVar184._0_8_ * dVar182 - dVar167 * dStack_2b0));
      auVar4 = vcvtpd2ps_avx(auVar100);
      auVar133._0_8_ =
           local_208 *
           (local_288 * dVar67 + dVar142 + (auVar184._0_8_ * dVar107 - dVar226 * local_2c8));
      auVar133._8_8_ =
           dStack_200 *
           (dStack_280 * dVar84 + dVar149 + (auVar184._0_8_ * dVar113 - dVar229 * dStack_2c0));
      auVar133._16_8_ =
           dStack_1f8 *
           (dStack_278 * dVar86 + dVar150 + (auVar184._0_8_ * dVar36 - dVar234 * dStack_2b8));
      auVar133._24_8_ =
           dStack_1f0 *
           (dStack_270 * dVar88 + dVar152 + (auVar184._0_8_ * dVar38 - dVar239 * dStack_2b0));
      auVar123 = vcvtpd2ps_avx(auVar46);
      auVar47._16_16_ = auVar123;
      auVar47._0_16_ = auVar4;
      auVar123 = vcvtpd2ps_avx(auVar71);
      auVar93 = vcvtpd2ps_avx(auVar116);
      auVar1 = vcvtpd2ps_avx(auVar133);
      auVar94 = vcvtpd2ps_avx(auVar126);
      auVar117._16_16_ = auVar93;
      auVar117._0_16_ = auVar123;
      auVar196 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar196);
      *(undefined1 (*) [32])(param_1 + lVar21) = auVar196;
      auVar25._16_16_ = auVar94;
      auVar25._0_16_ = auVar1;
      auVar72._16_16_ = auVar123;
      auVar72._0_16_ = auVar4;
      auVar131 = vshufpd_avx(auVar47,auVar72,2);
      auVar95 = vpermps_avx2(auVar75,auVar25);
      auVar196 = vpermpd_avx2(auVar117,0xe9);
      auVar196 = vblendps_avx(auVar95,auVar196,7);
      auVar95 = vpermps_avx2(auVar135,auVar131);
      auVar144 = vpermps_avx2(auVar127,auVar196);
      auVar95 = vblendps_avx(auVar95,auVar144,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar21) = auVar95;
      auVar95 = vpermps_avx2(auVar134,auVar196);
      auVar196 = vshufpd_avx(auVar131,auVar131,1);
      auVar196 = vblendps_avx(auVar95,auVar196,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar21) = auVar196;
      auVar95 = vpermps_avx2(auVar42,auVar117);
      auVar196 = vpermpd_avx2(auVar47,0xff);
      auVar196 = vblendpd_avx(auVar95,auVar196,1);
      auVar196 = vblendps_avx(auVar196,auVar25,0xe0);
      auVar196 = vpermps_avx2(auVar101,auVar196);
      *(undefined1 (*) [32])(param_2 + lVar21) = auVar196;
      lVar21 = lVar21 + 0x60;
      uVar19 = uVar19 + 8;
    } while ((int)uVar19 < (int)(uVar16 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar19) {
      return;
    }
  }
  auVar26._4_4_ = uVar19;
  auVar26._0_4_ = uVar19;
  auVar26._8_4_ = uVar19;
  auVar26._12_4_ = uVar19;
  auVar26._16_4_ = uVar19;
  auVar26._20_4_ = uVar19;
  auVar26._24_4_ = uVar19;
  auVar26._28_4_ = uVar19;
  auVar196 = vpor_avx2(auVar26,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar48._4_4_ = param_5;
  auVar48._0_4_ = param_5;
  auVar48._8_4_ = param_5;
  auVar48._12_4_ = param_5;
  auVar48._16_4_ = param_5;
  auVar48._20_4_ = param_5;
  auVar48._24_4_ = param_5;
  auVar48._28_4_ = param_5;
  auVar196 = vpcmpgtd_avx2(auVar48,auVar196);
  uVar12 = (ulonglong)uVar19;
  lVar21 = uVar12 * 3;
  pauVar17 = (undefined1 (*) [32])(param_1 + uVar12 * 0xc);
  uVar14 = vmovmskps_avx(auVar196);
  if (uVar14 == 0xff) {
    auVar196 = pauVar17[1];
    auVar95 = vpermd_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                          auVar196);
    auVar131 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar17);
    auVar95 = vpblendd_avx2(auVar131,auVar95,0x88);
    auVar131 = vpermd_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar196);
    auVar144 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar17[2]);
    auVar131 = vpblendd_avx2(auVar144,auVar131,0x13);
    auVar49._16_16_ = ZEXT116(0) * auVar95._16_16_ | ZEXT116(1) * auVar131._0_16_;
    auVar49._0_16_ = ZEXT116(0) * auVar131._0_16_ | ZEXT116(1) * auVar95._0_16_;
    auVar101 = vperm2i128_avx2(auVar95,auVar131,0x31);
    auVar196 = vpblendd_avx2(auVar196,*pauVar17,0x24);
    auVar196 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar196);
    auVar95 = vpermd_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                          pauVar17[2]);
    auVar144 = vpblendd_avx2(auVar196,auVar95,0xe0);
    auVar196 = *(undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar95 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar12 * 0xc);
    auVar131 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar12 * 0xc);
    auVar134 = vpermd_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar95);
    auVar42 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                          auVar196);
    auVar134 = vpblendd_avx2(auVar42,auVar134,0x88);
    auVar42 = vpermd_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                          auVar95);
    auVar124 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar131);
    auVar42 = vpblendd_avx2(auVar124,auVar42,0x13);
    auVar73._16_16_ = ZEXT116(0) * auVar134._16_16_ | ZEXT116(1) * auVar42._0_16_;
    auVar73._0_16_ = ZEXT116(0) * auVar42._0_16_ | ZEXT116(1) * auVar134._0_16_;
    auVar134 = vperm2i128_avx2(auVar134,auVar42,0x31);
    auVar196 = vpblendd_avx2(auVar95,auVar196,0x24);
    auVar196 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar196);
    auVar95 = vpermd_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                          auVar131);
    auVar196 = vpblendd_avx2(auVar196,auVar95,0xe0);
  }
  else {
    auVar49 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar196);
    auVar101 = vgatherdps(ZEXT832(0) << 0x40,auVar196);
    auVar144 = vgatherdps(ZEXT832(0) << 0x20,auVar196);
    auVar73 = vgatherdps(ZEXT832(0),auVar196);
    auVar134 = vgatherdps(ZEXT832(0),auVar196);
    auVar196 = vgatherdps(ZEXT1632(ZEXT816(0)),auVar196);
  }
  pauVar20 = (undefined1 (*) [32])(param_2 + uVar12 * 0xc);
  auVar95 = vcvtps2pd_avx(auVar49._0_16_);
  auVar131 = vcvtps2pd_avx(auVar49._16_16_);
  auVar42 = vcvtps2pd_avx(auVar101._0_16_);
  auVar101 = vcvtps2pd_avx(auVar101._16_16_);
  dVar243 = param_4 * auVar131._0_8_ - dVar216;
  dVar246 = param_4 * auVar131._8_8_ - dVar216;
  dVar247 = param_4 * auVar131._16_8_ - dVar216;
  dVar248 = param_4 * auVar131._24_8_ - dVar216;
  dVar205 = param_4 * auVar95._0_8_ - dVar216;
  dVar220 = param_4 * auVar95._8_8_ - dVar216;
  dVar224 = param_4 * auVar95._16_8_ - dVar216;
  dVar216 = param_4 * auVar95._24_8_ - dVar216;
  auVar95 = vcvtps2pd_avx(auVar144._0_16_);
  auVar131 = vcvtps2pd_avx(auVar144._16_16_);
  dVar35 = param_4 * auVar101._0_8_ - dVar240;
  dVar40 = param_4 * auVar101._8_8_ - dVar240;
  dVar63 = param_4 * auVar101._16_8_ - dVar240;
  dVar66 = param_4 * auVar101._24_8_ - dVar240;
  dVar238 = param_4 * auVar42._0_8_ - dVar240;
  dVar230 = param_4 * auVar42._8_8_ - dVar240;
  dVar235 = param_4 * auVar42._16_8_ - dVar240;
  dVar240 = param_4 * auVar42._24_8_ - dVar240;
  dVar192 = param_4 * auVar131._0_8_ - dVar122;
  dVar149 = param_4 * auVar131._8_8_ - dVar122;
  dVar152 = param_4 * auVar131._16_8_ - dVar122;
  dVar154 = param_4 * auVar131._24_8_ - dVar122;
  dVar168 = param_4 * auVar95._0_8_ - dVar122;
  dVar169 = param_4 * auVar95._8_8_ - dVar122;
  dVar176 = param_4 * auVar95._16_8_ - dVar122;
  dVar122 = param_4 * auVar95._24_8_ - dVar122;
  auVar41._0_4_ = auVar73._0_4_ ^ __real_80000000;
  auVar41._4_4_ = auVar73._4_4_ ^ __real_80000000;
  auVar41._8_4_ = auVar73._8_4_ ^ __real_80000000;
  auVar41._12_4_ = auVar73._12_4_ ^ __real_80000000;
  auVar56._16_4_ = auVar73._16_4_ ^ __real_80000000;
  auVar56._0_16_ = auVar41;
  auVar56._20_4_ = auVar73._20_4_ ^ __real_80000000;
  auVar56._24_4_ = auVar73._24_4_ ^ __real_80000000;
  auVar56._28_4_ = auVar73._28_4_ ^ __real_80000000;
  auVar130._0_4_ = auVar134._0_4_ ^ __real_80000000;
  auVar130._4_4_ = auVar134._4_4_ ^ __real_80000000;
  auVar130._8_4_ = auVar134._8_4_ ^ __real_80000000;
  auVar130._12_4_ = auVar134._12_4_ ^ __real_80000000;
  auVar137._16_4_ = auVar134._16_4_ ^ __real_80000000;
  auVar137._0_16_ = auVar130;
  auVar137._20_4_ = auVar134._20_4_ ^ __real_80000000;
  auVar137._24_4_ = auVar134._24_4_ ^ __real_80000000;
  auVar137._28_4_ = auVar134._28_4_ ^ __real_80000000;
  dVar111 = auVar184._0_8_ * dVar35 - local_2c8 * dVar243;
  dVar115 = auVar184._0_8_ * dVar40 - dStack_2c0 * dVar246;
  dVar151 = auVar184._0_8_ * dVar63 - dStack_2b8 * dVar247;
  dVar156 = auVar184._0_8_ * dVar66 - dStack_2b0 * dVar248;
  dVar36 = local_2c8 * dVar192 - local_2a8 * dVar35;
  dVar193 = dStack_2c0 * dVar149 - dStack_2a0 * dVar40;
  dVar202 = dStack_2b8 * dVar152 - dStack_298 * dVar63;
  dVar67 = dStack_2b0 * dVar154 - dStack_290 * dVar66;
  dVar164 = local_2a8 * dVar243 - auVar184._0_8_ * dVar192;
  dVar165 = dStack_2a0 * dVar246 - auVar184._0_8_ * dVar149;
  dVar166 = dStack_298 * dVar247 - auVar184._0_8_ * dVar152;
  dVar167 = dStack_290 * dVar248 - auVar184._0_8_ * dVar154;
  dVar36 = dVar36 + dVar36;
  dVar193 = dVar193 + dVar193;
  dVar202 = dVar202 + dVar202;
  dVar67 = dVar67 + dVar67;
  dVar164 = dVar164 + dVar164;
  dVar165 = dVar165 + dVar165;
  dVar166 = dVar166 + dVar166;
  dVar167 = dVar167 + dVar167;
  dVar111 = dVar111 + dVar111;
  dVar115 = dVar115 + dVar115;
  dVar151 = dVar151 + dVar151;
  dVar156 = dVar156 + dVar156;
  auVar95 = vcvtps2pd_avx(auVar56._16_16_);
  auVar131 = vcvtps2pd_avx(auVar41);
  auVar144 = vcvtps2pd_avx(auVar137._16_16_);
  dVar37 = auVar184._0_8_ * dVar238 - local_2c8 * dVar205;
  dVar61 = auVar184._0_8_ * dVar230 - dStack_2c0 * dVar220;
  dVar64 = auVar184._0_8_ * dVar235 - dStack_2b8 * dVar224;
  dVar83 = auVar184._0_8_ * dVar240 - dStack_2b0 * dVar216;
  dVar85 = local_2c8 * dVar168 - local_2a8 * dVar238;
  dVar87 = dStack_2c0 * dVar169 - dStack_2a0 * dVar230;
  dVar90 = dStack_2b8 * dVar176 - dStack_298 * dVar235;
  dVar108 = dStack_2b0 * dVar122 - dStack_290 * dVar240;
  dVar112 = local_2a8 * dVar205 - auVar184._0_8_ * dVar168;
  dVar141 = dStack_2a0 * dVar220 - auVar184._0_8_ * dVar169;
  dVar153 = dStack_298 * dVar224 - auVar184._0_8_ * dVar176;
  dVar162 = dStack_290 * dVar216 - auVar184._0_8_ * dVar122;
  dVar85 = dVar85 + dVar85;
  dVar87 = dVar87 + dVar87;
  dVar90 = dVar90 + dVar90;
  dVar108 = dVar108 + dVar108;
  dVar112 = dVar112 + dVar112;
  dVar141 = dVar141 + dVar141;
  dVar153 = dVar153 + dVar153;
  dVar162 = dVar162 + dVar162;
  dVar37 = dVar37 + dVar37;
  dVar61 = dVar61 + dVar61;
  dVar64 = dVar64 + dVar64;
  dVar83 = dVar83 + dVar83;
  auVar134 = vcvtps2pd_avx(auVar130);
  auVar7._4_4_ = auVar196._4_4_ ^ __real_80000000;
  auVar7._0_4_ = auVar196._0_4_ ^ __real_80000000;
  auVar7._8_4_ = auVar196._8_4_ ^ __real_80000000;
  auVar7._12_4_ = auVar196._12_4_ ^ __real_80000000;
  auVar6._16_4_ = auVar196._16_4_ ^ __real_80000000;
  auVar6._0_16_ = auVar7;
  auVar6._20_4_ = auVar196._20_4_ ^ __real_80000000;
  auVar6._24_4_ = auVar196._24_4_ ^ __real_80000000;
  auVar6._28_4_ = auVar196._28_4_ ^ __real_80000000;
  auVar196 = vcvtps2pd_avx(auVar6._16_16_);
  auVar42 = vcvtps2pd_avx(auVar7);
  dVar60 = auVar95._0_8_;
  dVar65 = auVar95._8_8_;
  dVar89 = auVar95._16_8_;
  dVar110 = auVar95._24_8_;
  dVar182 = auVar144._0_8_;
  dVar177 = auVar184._0_8_ * dVar182 - local_2c8 * dVar60;
  dVar183 = auVar144._8_8_;
  dVar178 = auVar184._0_8_ * dVar183 - dStack_2c0 * dVar65;
  dVar190 = auVar144._16_8_;
  dVar179 = auVar184._0_8_ * dVar190 - dStack_2b8 * dVar89;
  dVar191 = auVar144._24_8_;
  dVar181 = auVar184._0_8_ * dVar191 - dStack_2b0 * dVar110;
  dVar62 = auVar131._0_8_;
  dVar82 = auVar131._8_8_;
  dVar107 = auVar131._16_8_;
  dVar113 = auVar131._24_8_;
  dVar114 = auVar134._0_8_;
  dVar142 = auVar184._0_8_ * dVar114 - local_2c8 * dVar62;
  dVar148 = auVar134._8_8_;
  dVar150 = auVar184._0_8_ * dVar148 - dStack_2c0 * dVar82;
  dVar155 = auVar134._16_8_;
  dVar204 = auVar184._0_8_ * dVar155 - dStack_2b8 * dVar107;
  dVar163 = auVar134._24_8_;
  dVar209 = auVar184._0_8_ * dVar163 - dStack_2b0 * dVar113;
  dVar218 = auVar196._0_8_;
  dVar239 = local_2c8 * dVar218 - local_2a8 * dVar182;
  dVar222 = auVar196._8_8_;
  dVar231 = dStack_2c0 * dVar222 - dStack_2a0 * dVar183;
  dVar225 = auVar196._16_8_;
  dVar236 = dStack_2b8 * dVar225 - dStack_298 * dVar190;
  dVar226 = auVar196._24_8_;
  dVar241 = dStack_2b0 * dVar226 - dStack_290 * dVar191;
  dVar228 = auVar42._0_8_;
  dVar170 = local_2c8 * dVar228 - local_2a8 * dVar114;
  dVar229 = auVar42._8_8_;
  dVar212 = dStack_2c0 * dVar229 - dStack_2a0 * dVar148;
  dVar233 = auVar42._16_8_;
  dVar180 = dStack_2b8 * dVar233 - dStack_298 * dVar155;
  dVar234 = auVar42._24_8_;
  dVar215 = dStack_2b0 * dVar234 - dStack_290 * dVar163;
  dVar86 = local_2a8 * dVar60 - auVar184._0_8_ * dVar218;
  dVar88 = dStack_2a0 * dVar65 - auVar184._0_8_ * dVar222;
  dVar91 = dStack_298 * dVar89 - auVar184._0_8_ * dVar225;
  dVar109 = dStack_290 * dVar110 - auVar184._0_8_ * dVar226;
  dVar38 = local_2a8 * dVar62 - auVar184._0_8_ * dVar228;
  dVar201 = dStack_2a0 * dVar82 - auVar184._0_8_ * dVar229;
  dVar203 = dStack_298 * dVar107 - auVar184._0_8_ * dVar233;
  dVar84 = dStack_290 * dVar113 - auVar184._0_8_ * dVar234;
  dVar170 = dVar170 + dVar170;
  dVar212 = dVar212 + dVar212;
  dVar180 = dVar180 + dVar180;
  dVar215 = dVar215 + dVar215;
  dVar239 = dVar239 + dVar239;
  dVar231 = dVar231 + dVar231;
  dVar236 = dVar236 + dVar236;
  dVar241 = dVar241 + dVar241;
  dVar38 = dVar38 + dVar38;
  dVar201 = dVar201 + dVar201;
  dVar203 = dVar203 + dVar203;
  dVar84 = dVar84 + dVar84;
  dVar86 = dVar86 + dVar86;
  dVar88 = dVar88 + dVar88;
  dVar91 = dVar91 + dVar91;
  dVar109 = dVar109 + dVar109;
  dVar142 = dVar142 + dVar142;
  dVar150 = dVar150 + dVar150;
  dVar204 = dVar204 + dVar204;
  dVar209 = dVar209 + dVar209;
  dVar177 = dVar177 + dVar177;
  dVar178 = dVar178 + dVar178;
  dVar179 = dVar179 + dVar179;
  dVar181 = dVar181 + dVar181;
  auVar160._0_8_ =
       ((local_2c8 * dVar111 - local_2a8 * dVar164) + local_288 * dVar36 + dVar243) * dVar39;
  auVar160._8_8_ =
       ((dStack_2c0 * dVar115 - dStack_2a0 * dVar165) + dStack_280 * dVar193 + dVar246) * dVar39;
  auVar160._16_8_ =
       ((dStack_2b8 * dVar151 - dStack_298 * dVar166) + dStack_278 * dVar202 + dVar247) * dVar39;
  auVar160._24_8_ =
       ((dStack_2b0 * dVar156 - dStack_290 * dVar167) + dStack_270 * dVar67 + dVar248) * dVar39;
  auVar187._0_8_ =
       ((local_2c8 * dVar37 - local_2a8 * dVar112) + local_288 * dVar85 + dVar205) * dVar39;
  auVar187._8_8_ =
       ((dStack_2c0 * dVar61 - dStack_2a0 * dVar141) + dStack_280 * dVar87 + dVar220) * dVar39;
  auVar187._16_8_ =
       ((dStack_2b8 * dVar64 - dStack_298 * dVar153) + dStack_278 * dVar90 + dVar224) * dVar39;
  auVar187._24_8_ =
       ((dStack_2b0 * dVar83 - dStack_290 * dVar162) + dStack_270 * dVar108 + dVar216) * dVar39;
  auVar207._0_8_ =
       dVar39 * ((local_2c8 * dVar177 - local_2a8 * dVar86) + local_288 * dVar239 + dVar60);
  auVar207._8_8_ =
       dVar39 * ((dStack_2c0 * dVar178 - dStack_2a0 * dVar88) + dStack_280 * dVar231 + dVar65);
  auVar207._16_8_ =
       dVar39 * ((dStack_2b8 * dVar179 - dStack_298 * dVar91) + dStack_278 * dVar236 + dVar89);
  auVar207._24_8_ =
       dVar39 * ((dStack_2b0 * dVar181 - dStack_290 * dVar109) + dStack_270 * dVar241 + dVar110);
  auVar57._0_8_ =
       dVar39 * ((local_2c8 * dVar142 - local_2a8 * dVar38) + local_288 * dVar170 + dVar62);
  auVar57._8_8_ =
       dVar39 * ((dStack_2c0 * dVar150 - dStack_2a0 * dVar201) + dStack_280 * dVar212 + dVar82);
  auVar57._16_8_ =
       dVar39 * ((dStack_2b8 * dVar204 - dStack_298 * dVar203) + dStack_278 * dVar180 + dVar107);
  auVar57._24_8_ =
       dVar39 * ((dStack_2b0 * dVar209 - dStack_290 * dVar84) + dStack_270 * dVar215 + dVar113);
  auVar120._0_8_ =
       local_228 * ((local_2a8 * dVar36 - auVar184._0_8_ * dVar111) + local_288 * dVar164 + dVar35);
  auVar120._8_8_ =
       dStack_220 *
       ((dStack_2a0 * dVar193 - auVar184._0_8_ * dVar115) + dStack_280 * dVar165 + dVar40);
  auVar120._16_8_ =
       dStack_218 *
       ((dStack_298 * dVar202 - auVar184._0_8_ * dVar151) + dStack_278 * dVar166 + dVar63);
  auVar120._24_8_ =
       dStack_210 *
       ((dStack_290 * dVar67 - auVar184._0_8_ * dVar156) + dStack_270 * dVar167 + dVar66);
  auVar138._0_8_ =
       local_228 * ((local_2a8 * dVar85 - auVar184._0_8_ * dVar37) + local_288 * dVar112 + dVar238);
  auVar138._8_8_ =
       dStack_220 *
       ((dStack_2a0 * dVar87 - auVar184._0_8_ * dVar61) + dStack_280 * dVar141 + dVar230);
  auVar138._16_8_ =
       dStack_218 *
       ((dStack_298 * dVar90 - auVar184._0_8_ * dVar64) + dStack_278 * dVar153 + dVar235);
  auVar138._24_8_ =
       dStack_210 *
       ((dStack_290 * dVar108 - auVar184._0_8_ * dVar83) + dStack_270 * dVar162 + dVar240);
  auVar146._0_8_ =
       local_228 * ((local_2a8 * dVar239 - auVar184._0_8_ * dVar177) + local_288 * dVar86 + dVar182)
  ;
  auVar146._8_8_ =
       dStack_220 *
       ((dStack_2a0 * dVar231 - auVar184._0_8_ * dVar178) + dStack_280 * dVar88 + dVar183);
  auVar146._16_8_ =
       dStack_218 *
       ((dStack_298 * dVar236 - auVar184._0_8_ * dVar179) + dStack_278 * dVar91 + dVar190);
  auVar146._24_8_ =
       dStack_210 *
       ((dStack_290 * dVar241 - auVar184._0_8_ * dVar181) + dStack_270 * dVar109 + dVar191);
  auVar79._0_8_ =
       local_228 * (local_288 * dVar38 + dVar114 + (local_2a8 * dVar170 - auVar184._0_8_ * dVar142))
  ;
  auVar79._8_8_ =
       dStack_220 *
       (dStack_280 * dVar201 + dVar148 + (dStack_2a0 * dVar212 - auVar184._0_8_ * dVar150));
  auVar79._16_8_ =
       dStack_218 *
       (dStack_278 * dVar203 + dVar155 + (dStack_298 * dVar180 - auVar184._0_8_ * dVar204));
  auVar79._24_8_ =
       dStack_210 *
       (dStack_270 * dVar84 + dVar163 + (dStack_290 * dVar215 - auVar184._0_8_ * dVar209));
  auVar103._0_8_ =
       local_208 * (local_288 * dVar111 + dVar192 + (auVar184._0_8_ * dVar164 - local_2c8 * dVar36))
  ;
  auVar103._8_8_ =
       dStack_200 *
       (dStack_280 * dVar115 + dVar149 + (auVar184._0_8_ * dVar165 - dStack_2c0 * dVar193));
  auVar103._16_8_ =
       dStack_1f8 *
       (dStack_278 * dVar151 + dVar152 + (auVar184._0_8_ * dVar166 - dStack_2b8 * dVar202));
  auVar103._24_8_ =
       dStack_1f0 *
       (dStack_270 * dVar156 + dVar154 + (auVar184._0_8_ * dVar167 - dStack_2b0 * dVar67));
  auVar174._0_8_ =
       local_208 * ((auVar184._0_8_ * dVar112 - local_2c8 * dVar85) + local_288 * dVar37 + dVar168);
  auVar174._8_8_ =
       dStack_200 *
       ((auVar184._0_8_ * dVar141 - dStack_2c0 * dVar87) + dStack_280 * dVar61 + dVar169);
  auVar174._16_8_ =
       dStack_1f8 *
       ((auVar184._0_8_ * dVar153 - dStack_2b8 * dVar90) + dStack_278 * dVar64 + dVar176);
  auVar174._24_8_ =
       dStack_1f0 *
       ((auVar184._0_8_ * dVar162 - dStack_2b0 * dVar108) + dStack_270 * dVar83 + dVar122);
  auVar31._0_8_ =
       local_208 * (local_288 * dVar177 + dVar218 + (auVar184._0_8_ * dVar86 - local_2c8 * dVar239))
  ;
  auVar31._8_8_ =
       dStack_200 *
       (dStack_280 * dVar178 + dVar222 + (auVar184._0_8_ * dVar88 - dStack_2c0 * dVar231));
  auVar31._16_8_ =
       dStack_1f8 *
       (dStack_278 * dVar179 + dVar225 + (auVar184._0_8_ * dVar91 - dStack_2b8 * dVar236));
  auVar31._24_8_ =
       dStack_1f0 *
       (dStack_270 * dVar181 + dVar226 + (auVar184._0_8_ * dVar109 - dStack_2b0 * dVar241));
  auVar4 = vcvtpd2ps_avx(auVar187);
  auVar123 = vcvtpd2ps_avx(auVar160);
  auVar199._0_8_ =
       local_208 * (dVar142 * local_288 + dVar228 + (auVar184._0_8_ * dVar38 - local_2c8 * dVar170))
  ;
  auVar199._8_8_ =
       dStack_200 *
       (dVar150 * dStack_280 + dVar229 + (auVar184._0_8_ * dVar201 - dStack_2c0 * dVar212));
  auVar199._16_8_ =
       dStack_1f8 *
       (dVar204 * dStack_278 + dVar233 + (auVar184._0_8_ * dVar203 - dStack_2b8 * dVar180));
  auVar199._24_8_ =
       dStack_1f0 *
       (dVar209 * dStack_270 + dVar234 + (auVar184._0_8_ * dVar84 - dStack_2b0 * dVar215));
  auVar129._16_16_ = auVar123;
  auVar129._0_16_ = auVar4;
  auVar93 = vcvtpd2ps_avx(auVar138);
  auVar1 = vcvtpd2ps_avx(auVar120);
  auVar94 = vcvtpd2ps_avx(auVar174);
  auVar121._16_16_ = auVar1;
  auVar121._0_16_ = auVar93;
  auVar22 = vcvtpd2ps_avx(auVar103);
  auVar104._16_16_ = auVar22;
  auVar104._0_16_ = auVar94;
  auVar244 = vcvtpd2ps_avx(auVar57);
  auVar92 = vcvtpd2ps_avx(auVar207);
  auVar68 = vcvtpd2ps_avx(auVar79);
  auVar2 = vcvtpd2ps_avx(auVar146);
  auVar80._16_16_ = auVar92;
  auVar80._0_16_ = auVar244;
  auVar58._16_16_ = auVar2;
  auVar58._0_16_ = auVar68;
  auVar3 = vcvtpd2ps_avx(auVar199);
  auVar194 = vcvtpd2ps_avx(auVar31);
  auVar32._16_16_ = auVar194;
  auVar32._0_16_ = auVar3;
  cVar13 = (char)uVar14;
  if (cVar13 == -1) {
LAB_140d208d3:
    auVar42 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
    auVar134 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
    auVar144 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
    auVar140._16_16_ = auVar121._0_16_;
    auVar140._0_16_ = auVar129._0_16_;
    auVar95 = vshufpd_avx(auVar129,auVar140,2);
    auVar131 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                            auVar104);
    auVar196 = vpermpd_avx2(auVar121,0xe9);
    auVar196 = vblendps_avx(auVar131,auVar196,7);
    auVar131 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003,
                            auVar196);
    auVar95 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar95);
    auVar95 = vblendps_avx(auVar95,auVar131,0xa4);
    *pauVar17 = auVar95;
    auVar101 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
    auVar95 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar196);
    auVar196 = vshufpd_avx(auVar129,auVar129,1);
    auVar196 = vblendps_avx(auVar95,auVar196,0x92);
    pauVar17[1] = auVar196;
    auVar184 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
    auVar124 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
    auVar95 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001,
                           auVar121);
    auVar196 = vpermpd_avx2(auVar129,0xff);
    auVar196 = vblendpd_avx(auVar95,auVar196,1);
    auVar196 = vblendps_avx(auVar196,auVar104,0xe0);
    auVar196 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                            auVar196);
    pauVar17[2] = auVar196;
    auVar106._16_16_ = auVar58._0_16_;
    auVar106._0_16_ = auVar80._0_16_;
    auVar95 = vshufpd_avx(auVar80,auVar106,2);
    auVar131 = vpermps_avx2(auVar144,auVar32);
    auVar196 = vpermpd_avx2(auVar58,0xe9);
    auVar196 = vblendps_avx(auVar131,auVar196,7);
    auVar131 = vpermps_avx2(auVar134,auVar196);
    auVar95 = vpermps_avx2(auVar42,auVar95);
    auVar95 = vblendps_avx(auVar95,auVar131,0xa4);
    *pauVar20 = auVar95;
    auVar95 = vpermps_avx2(auVar101,auVar196);
    auVar196 = vshufpd_avx(auVar80,auVar80,1);
    auVar196 = vblendps_avx(auVar95,auVar196,0x92);
    *(undefined1 (*) [32])(param_2 + 0x20 + lVar21 * 4) = auVar196;
    auVar95 = vpermps_avx2(auVar124,auVar58);
    auVar196 = vpermpd_avx2(auVar80,0xff);
    auVar196 = vblendpd_avx(auVar95,auVar196,1);
    auVar196 = vblendps_avx(auVar196,auVar32,0xe0);
    auVar196 = vpermps_avx2(auVar184,auVar196);
    *(undefined1 (*) [32])(param_2 + 0x40 + lVar21 * 4) = auVar196;
    return;
  }
  if ((uVar14 & 1) != 0) {
    *(int *)*pauVar17 = auVar4._0_4_;
  }
  if ((uVar14 & 2) != 0) {
    uVar18 = vextractps_avx(auVar4,1);
    *(undefined4 *)(*pauVar17 + 0xc) = uVar18;
  }
  if ((uVar14 & 4) != 0) {
    uVar18 = vextractps_avx(auVar4,2);
    *(undefined4 *)(*pauVar17 + 0x18) = uVar18;
  }
  if ((uVar14 & 8) != 0) {
    uVar18 = vextractps_avx(auVar4,3);
    *(undefined4 *)(pauVar17[1] + 4) = uVar18;
  }
  if ((uVar14 & 0x10) != 0) {
    *(int *)(pauVar17[1] + 0x10) = auVar123._0_4_;
  }
  if ((uVar14 & 0x20) != 0) {
    uVar18 = vextractps_avx(auVar123,1);
    *(undefined4 *)(pauVar17[1] + 0x1c) = uVar18;
  }
  if ((uVar14 & 0x40) != 0) {
    uVar18 = vextractps_avx(auVar123,2);
    *(undefined4 *)(pauVar17[2] + 8) = uVar18;
  }
  if (cVar13 < '\0') {
    uVar18 = vextractps_avx(auVar123,3);
    *(undefined4 *)(pauVar17[2] + 0x14) = uVar18;
  }
  if ((uVar14 & 1) != 0) {
    *(int *)(*pauVar17 + 4) = auVar93._0_4_;
  }
  if ((uVar14 & 2) != 0) {
    uVar18 = vextractps_avx(auVar93,1);
    *(undefined4 *)(*pauVar17 + 0x10) = uVar18;
  }
  if ((uVar14 & 4) != 0) {
    uVar18 = vextractps_avx(auVar93,2);
    *(undefined4 *)(*pauVar17 + 0x1c) = uVar18;
  }
  if ((uVar14 & 8) != 0) {
    uVar18 = vextractps_avx(auVar93,3);
    *(undefined4 *)(pauVar17[1] + 8) = uVar18;
  }
  if ((uVar14 & 0x10) != 0) {
    *(int *)(pauVar17[1] + 0x14) = auVar1._0_4_;
  }
  if ((uVar14 & 0x20) != 0) {
    uVar18 = vextractps_avx(auVar1,1);
    *(undefined4 *)pauVar17[2] = uVar18;
  }
  if ((uVar14 & 0x40) != 0) {
    uVar18 = vextractps_avx(auVar1,2);
    *(undefined4 *)(pauVar17[2] + 0xc) = uVar18;
  }
  if (cVar13 < '\0') {
    uVar18 = vextractps_avx(auVar1,3);
    *(undefined4 *)(pauVar17[2] + 0x18) = uVar18;
  }
  if ((uVar14 & 1) != 0) {
    *(int *)(*pauVar17 + 8) = auVar94._0_4_;
  }
  if ((uVar14 & 2) != 0) {
    uVar18 = vextractps_avx(auVar94,1);
    *(undefined4 *)(*pauVar17 + 0x14) = uVar18;
  }
  if ((uVar14 & 4) != 0) {
    uVar18 = vextractps_avx(auVar94,2);
    *(undefined4 *)pauVar17[1] = uVar18;
  }
  if ((uVar14 & 8) != 0) {
    uVar18 = vextractps_avx(auVar94,3);
    *(undefined4 *)(pauVar17[1] + 0xc) = uVar18;
  }
  if ((uVar14 & 0x10) != 0) {
    *(int *)(pauVar17[1] + 0x18) = auVar22._0_4_;
  }
  if ((uVar14 & 0x20) != 0) {
    uVar18 = vextractps_avx(auVar22,1);
    *(undefined4 *)(pauVar17[2] + 4) = uVar18;
  }
  if ((uVar14 & 0x40) != 0) {
    uVar18 = vextractps_avx(auVar22,2);
    *(undefined4 *)(pauVar17[2] + 0x10) = uVar18;
  }
  if (cVar13 < '\0') {
    uVar18 = vextractps_avx(auVar22,3);
    *(undefined4 *)(pauVar17[2] + 0x1c) = uVar18;
  }
  if ((uVar14 & 1) != 0) {
    *(int *)*pauVar20 = auVar244._0_4_;
  }
  if ((uVar14 & 2) != 0) {
    uVar18 = vextractps_avx(auVar244,1);
    *(undefined4 *)(param_2 + 0xc + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 4) != 0) {
    uVar18 = vextractps_avx(auVar244,2);
    *(undefined4 *)(param_2 + 0x18 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 8) != 0) {
    uVar18 = vextractps_avx(auVar244,3);
    *(undefined4 *)(param_2 + 0x24 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 0x10) != 0) {
    *(int *)(param_2 + 0x30 + uVar12 * 0xc) = auVar92._0_4_;
  }
  if ((uVar14 & 0x20) != 0) {
    uVar18 = vextractps_avx(auVar92,1);
    *(undefined4 *)(param_2 + 0x3c + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 0x40) != 0) {
    uVar18 = vextractps_avx(auVar92,2);
    *(undefined4 *)(param_2 + 0x48 + uVar12 * 0xc) = uVar18;
  }
  if (cVar13 < '\0') {
    uVar18 = vextractps_avx(auVar92,3);
    *(undefined4 *)(param_2 + 0x54 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 1) != 0) {
    *(int *)(param_2 + 4 + uVar12 * 0xc) = auVar68._0_4_;
  }
  if ((uVar14 & 2) != 0) {
    uVar18 = vextractps_avx(auVar68,1);
    *(undefined4 *)(param_2 + 0x10 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 4) != 0) {
    uVar18 = vextractps_avx(auVar68,2);
    *(undefined4 *)(param_2 + 0x1c + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 8) != 0) {
    uVar18 = vextractps_avx(auVar68,3);
    *(undefined4 *)(param_2 + 0x28 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 0x10) != 0) {
    *(int *)(param_2 + 0x34 + uVar12 * 0xc) = auVar2._0_4_;
  }
  if ((uVar14 & 0x20) != 0) {
    uVar18 = vextractps_avx(auVar2,1);
    *(undefined4 *)(param_2 + 0x40 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 0x40) != 0) {
    uVar18 = vextractps_avx(auVar2,2);
    *(undefined4 *)(param_2 + 0x4c + uVar12 * 0xc) = uVar18;
  }
  if (cVar13 < '\0') {
    uVar18 = vextractps_avx(auVar2,3);
    *(undefined4 *)(param_2 + 0x58 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 1) != 0) {
    *(int *)(param_2 + 8 + uVar12 * 0xc) = auVar3._0_4_;
  }
  if ((uVar14 & 2) != 0) {
    uVar18 = vextractps_avx(auVar3,1);
    *(undefined4 *)(param_2 + 0x14 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 4) != 0) {
    uVar18 = vextractps_avx(auVar3,2);
    *(undefined4 *)(param_2 + 0x20 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 8) != 0) {
    uVar18 = vextractps_avx(auVar3,3);
    *(undefined4 *)(param_2 + 0x2c + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 0x10) != 0) {
    *(int *)(param_2 + 0x38 + uVar12 * 0xc) = auVar194._0_4_;
  }
  if ((uVar14 & 0x20) != 0) {
    uVar18 = vextractps_avx(auVar194,1);
    *(undefined4 *)(param_2 + 0x44 + uVar12 * 0xc) = uVar18;
  }
  if ((uVar14 & 0x40) != 0) {
    uVar18 = vextractps_avx(auVar194,2);
    *(undefined4 *)(param_2 + 0x50 + uVar12 * 0xc) = uVar18;
  }
joined_r0x000140d208c5:
  if (cVar13 < '\0') {
    uVar18 = vextractps_avx(auVar194,3);
    *(undefined4 *)(param_2 + 0x5c + lVar21 * 4) = uVar18;
  }
  return;
}

// TransformClothSimulDataAndCheckFinite___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_avx2 @ 140d20e00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
TransformClothSimulDataAndCheckFinite___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_avx2
          (longlong param_1,longlong param_2,double *param_3,double param_4,uint param_5,
          undefined1 (*param_6) [32])

{
  undefined1 (*pauVar1) [32];
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [32];
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  longlong lVar15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [24];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar16 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar22 [24];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar23 [24];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar47 [32];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  double dVar75;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
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
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar76;
  double dVar94;
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  double dVar93;
  double dVar95;
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
  undefined1 auVar98 [16];
  double dVar96;
  double dVar97;
  undefined1 auVar99 [16];
  double dVar118;
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  double dVar116;
  double dVar122;
  undefined1 auVar103 [32];
  double dVar117;
  double dVar119;
  double dVar123;
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  double dVar120;
  double dVar121;
  double dVar124;
  double dVar125;
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar129 [24];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  double dVar138;
  double dVar139;
  undefined1 auVar136 [32];
  double dVar140;
  double dVar141;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [32];
  double dVar155;
  undefined1 auVar145 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  double dVar156;
  double dVar157;
  undefined1 auVar160 [32];
  double dVar169;
  double dVar172;
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  double dVar170;
  double dVar173;
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  double dVar171;
  undefined1 in_ZMM6 [64];
  double dVar183;
  undefined1 auVar175 [16];
  double dVar174;
  double dVar184;
  undefined1 auVar176 [32];
  double dVar186;
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  double dVar187;
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  double dVar185;
  undefined1 auVar182 [32];
  double dVar188;
  double dVar189;
  undefined1 auVar190 [16];
  double dVar196;
  double dVar198;
  double dVar200;
  undefined1 auVar191 [32];
  double dVar197;
  double dVar199;
  double dVar201;
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  double dVar202;
  double dVar203;
  undefined1 auVar204 [16];
  double dVar209;
  double dVar211;
  double dVar213;
  undefined1 auVar205 [32];
  double dVar210;
  double dVar212;
  double dVar214;
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  double dVar216;
  undefined1 auVar217 [16];
  double dVar215;
  double dVar235;
  undefined1 auVar218 [32];
  double dVar233;
  double dVar237;
  undefined1 auVar219 [32];
  undefined1 auVar220 [32];
  double dVar234;
  double dVar236;
  double dVar238;
  undefined1 auVar221 [32];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar224 [32];
  undefined1 auVar225 [32];
  undefined1 auVar226 [32];
  double dVar239;
  undefined1 auVar227 [32];
  undefined1 auVar228 [32];
  undefined1 auVar229 [32];
  undefined1 auVar230 [32];
  undefined1 auVar231 [32];
  undefined1 auVar232 [32];
  double dVar240;
  double dVar241;
  double dVar242;
  double dVar252;
  double dVar255;
  undefined1 auVar243 [32];
  undefined1 auVar244 [32];
  undefined1 auVar245 [32];
  double dVar253;
  double dVar256;
  double dVar258;
  double dVar259;
  undefined1 auVar246 [32];
  undefined1 auVar247 [32];
  undefined1 auVar248 [32];
  double dVar254;
  double dVar257;
  double dVar260;
  undefined1 auVar249 [32];
  undefined1 auVar250 [32];
  undefined1 auVar251 [32];
  double dVar261;
  double dVar262;
  undefined1 auVar265 [16];
  double dVar263;
  double dVar264;
  double dVar273;
  undefined1 auVar266 [32];
  double dVar269;
  double dVar270;
  double dVar274;
  double dVar277;
  double dVar278;
  undefined1 auVar267 [32];
  double dVar271;
  double dVar272;
  double dVar275;
  double dVar276;
  double dVar279;
  double dVar280;
  undefined1 auVar268 [32];
  double dVar281;
  double dVar282;
  undefined1 auVar283 [16];
  double dVar287;
  double dVar288;
  double dVar289;
  double dVar290;
  double dVar291;
  undefined1 auVar284 [32];
  undefined1 auVar286 [32];
  double dVar292;
  double dVar293;
  double dVar294;
  double dVar295;
  double dVar296;
  double dVar297;
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  double dVar303;
  double dVar307;
  undefined1 auVar300 [32];
  double dVar304;
  double dVar305;
  double dVar306;
  double dVar308;
  undefined1 in_ZMM15 [64];
  double local_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  undefined1 local_388 [12];
  uint uStack_37c;
  undefined8 uStack_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  double dStack_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double local_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double local_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  undefined1 auVar21 [24];
  undefined1 auVar39 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar28 [32];
  undefined1 auVar32 [32];
  undefined1 auVar38 [32];
  undefined1 auVar42 [32];
  undefined1 auVar55 [32];
  undefined1 auVar107 [32];
  undefined1 auVar128 [24];
  undefined1 auVar135 [32];
  undefined1 auVar137 [32];
  undefined1 auVar146 [32];
  undefined1 auVar285 [32];
  undefined1 auVar301 [32];
  undefined1 auVar302 [32];
  
  uVar9 = __real_80000000;
  auVar19 = in_ZMM15._0_16_;
  auVar103 = *param_6;
  uVar6 = (ulonglong)param_5;
  auVar163 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
  auVar70 = auVar163 & ~auVar103;
  auVar218._0_8_ =
       *param_3 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  auVar218._8_8_ = param_3[1] * _UNK_150b543c8;
  auVar218._16_8_ = param_3[2] * _UNK_150b543d0;
  auVar218._24_8_ = param_3[3] * _UNK_150b543d8;
  dVar201 = param_3[4];
  dVar214 = param_3[5];
  dVar277 = param_3[6];
  auVar22 = *(undefined1 (*) [24])(param_3 + 8);
  auVar151._24_8_ = 0;
  auVar151._0_24_ = auVar22;
  auVar130 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  dVar48 = auVar22._0_8_;
  auVar87._0_8_ = (ulonglong)dVar48 & __real_7fffffffffffffff;
  dVar49 = auVar22._8_8_;
  auVar87._8_8_ = (ulonglong)dVar49 & __real_7fffffffffffffff;
  dVar140 = auVar22._16_8_;
  auVar87._16_8_ = (ulonglong)dVar140 & __real_7fffffffffffffff;
  auVar87._24_8_ = 0;
  auVar149._8_8_ = __real_3e45798ee2308c3a;
  auVar149._0_8_ = __real_3e45798ee2308c3a;
  auVar149._16_8_ = __real_3e45798ee2308c3a;
  auVar149._24_8_ = __real_3e45798ee2308c3a;
  auVar61 = vcmppd_avx(auVar87,auVar149,2);
  auVar100 = vpackssdw_avx2(auVar61,auVar163);
  auVar207 = vpermq_avx2(auVar100,0xd8);
  auVar100._8_8_ = __real_46c8a6e32246c99c;
  auVar100._0_8_ = __real_46c8a6e32246c99c;
  auVar100._16_8_ = __real_46c8a6e32246c99c;
  auVar100._24_8_ = __real_46c8a6e32246c99c;
  auVar100 = vcmppd_avx(auVar151,auVar100,2);
  auVar100 = vpackssdw_avx2(auVar100,auVar163);
  auVar17 = vpackssdw_avx(auVar100._0_16_,auVar100._16_16_);
  auVar163._8_8_ = __real_3914c4e977ba1f5c;
  auVar163._0_8_ = __real_3914c4e977ba1f5c;
  auVar163._16_8_ = __real_3914c4e977ba1f5c;
  auVar163._24_8_ = __real_3914c4e977ba1f5c;
  auVar100 = vcmppd_avx(auVar163,auVar151,2);
  auVar100 = vpackssdw_avx2(auVar100,auVar130);
  auVar78 = auVar100._16_16_;
  auVar142 = vpackssdw_avx(auVar100._0_16_,auVar78);
  auVar17 = vpand_avx(auVar17,auVar142);
  auVar17 = vpshufd_avx(auVar17,0xd8);
  dVar75 = SUB648(ZEXT1664((undefined1  [16])0x0),8);
  dVar155 = SUB408(SUB4840((undefined1  [48])0x0,8),0);
  if ((((((((SUB321(auVar70 >> 0x1f,0) & 1) == 0 && (SUB321(auVar70 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar70 >> 0x5f,0) & 1) == 0) && SUB321(auVar70 >> 0x7f,0) == '\0') &&
        (SUB321(auVar70 >> 0x9f,0) & 1) == 0) && SUB321(auVar70 >> 0xbf,0) == '\0') &&
      (SUB321(auVar70 >> 0xdf,0) & 1) == 0) && -1 < auVar70[0x1f]) {
    auVar103 = vcmppd_avx(auVar87,auVar149,6);
    auVar61 = vcmppd_avx(auVar130,auVar149,6);
    auVar103 = vpackssdw_avx2(auVar103,auVar61);
    auVar142 = vpackssdw_avx(auVar103._0_16_,auVar103._16_16_);
    auVar142 = vpshufd_avx(auVar142,0xd8);
    auVar17 = vpand_avx(auVar17,auVar142);
    auVar78 = vpsllw_avx(auVar17,0xf);
    auVar103 = ZEXT1632(auVar78);
    if ((((((((SUB161(auVar78 >> 0xf,0) & 1) == 0 && (SUB161(auVar78 >> 0x1f,0) & 1) == 0) &&
            (SUB161(auVar78 >> 0x2f,0) & 1) == 0) && (SUB161(auVar78 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar78 >> 0x4f,0) & 1) == 0) && (SUB161(auVar78 >> 0x5f,0) & 1) == 0) &&
        (SUB161(auVar78 >> 0x6f,0) & 1) == 0) && -1 < auVar78[0xf]) {
      auVar130 = ZEXT1632((undefined1  [16])0x0);
LAB_140d21a3d:
      auVar70._0_8_ = (ulonglong)dVar48 & __real_7fe0000000000000;
      auVar70._8_8_ = (ulonglong)dVar49 & __real_7fe0000000000000;
      auVar70._16_8_ = (ulonglong)dVar140 & __real_7fe0000000000000;
      auVar70._24_8_ = 0;
      auVar177._8_8_ = __real_7fcfffffffffffff;
      auVar177._0_8_ = __real_7fcfffffffffffff;
      auVar177._16_8_ = __real_7fcfffffffffffff;
      auVar177._24_8_ = __real_7fcfffffffffffff;
      auVar70 = vpsubq_avx2(auVar177,auVar70);
      auVar61 = vpsubq_avx2(auVar177,ZEXT832((ulonglong)dVar75 & __real_7fe0000000000000) << 0x40);
      auVar100 = vpcmpeqd_avx2(auVar177,auVar177);
      auVar111._0_8_ = auVar61._0_8_ * 0.0;
      auVar111._8_8_ = dVar75 * auVar61._8_8_;
      auVar111._16_8_ = auVar61._16_8_ * 0.0;
      auVar111._24_8_ = dVar155 * auVar61._24_8_;
      auVar164._0_8_ = dVar48 * auVar70._0_8_;
      auVar164._8_8_ = dVar49 * auVar70._8_8_;
      auVar164._16_8_ = dVar140 * auVar70._16_8_;
      auVar164._24_8_ = auVar70._24_8_ * 0.0;
      auVar17 = vcvtpd2ps_avx(auVar164);
      auVar142 = vcvtpd2ps_avx(auVar111);
      auVar60._16_16_ = auVar142;
      auVar60._0_16_ = auVar17;
      auVar61 = vrcpps_avx(auVar60);
      auVar142._0_4_ = auVar61._0_4_ * (-(auVar61._0_4_ * auVar17._0_4_) + __real_40000000);
      auVar142._4_4_ = auVar61._4_4_ * (-(auVar61._4_4_ * auVar17._4_4_) + __real_40000000);
      auVar142._8_4_ = auVar61._8_4_ * (-(auVar61._8_4_ * auVar17._8_4_) + __real_40000000);
      auVar142._12_4_ = auVar61._12_4_ * (-(auVar61._12_4_ * auVar17._12_4_) + __real_40000000);
      auVar61 = vcvtps2pd_avx(auVar142);
      dVar75 = auVar70._0_8_ * auVar61._0_8_;
      dVar155 = auVar70._8_8_ * auVar61._8_8_;
      dVar96 = auVar70._16_8_ * auVar61._16_8_;
      dVar116 = auVar70._24_8_ * auVar61._24_8_;
      dVar75 = dVar75 * (-(dVar48 * dVar75) + __real_4000000000000000);
      dVar155 = dVar155 * (-(dVar49 * dVar155) + __real_4000000000000000);
      dVar96 = dVar96 * (-(dVar140 * dVar96) + __real_4000000000000000);
      dVar116 = dVar116 * (-(dVar116 * 0.0) + __real_4000000000000000);
      auVar61._0_8_ = dVar75 * (-(dVar75 * dVar48) + __real_4000000000000000);
      auVar61._8_8_ = dVar155 * (-(dVar155 * dVar49) + __real_4000000000000000);
      auVar61._16_8_ = dVar96 * (-(dVar96 * dVar140) + __real_4000000000000000);
      auVar61._24_8_ = dVar116 * (-(dVar116 * 0.0) + __real_4000000000000000);
      auVar130 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                             ,auVar130 ^ auVar100);
      auVar103 = vblendvps_avx(auVar103,auVar61,auVar130);
    }
    else {
      auVar99 = vcvtpd2ps_avx(auVar151);
      auVar158 = vcvtpd2ps_avx(auVar130);
      auVar130._16_16_ = auVar158;
      auVar130._0_16_ = auVar99;
      auVar103 = vrcpps_avx(auVar130);
      auVar78 = vpacksswb_avx(auVar78,auVar78);
      auVar158._0_4_ = auVar103._0_4_ * (-(auVar103._0_4_ * auVar99._0_4_) + __real_40000000);
      auVar158._4_4_ = auVar103._4_4_ * (-(auVar103._4_4_ * auVar99._4_4_) + __real_40000000);
      auVar158._8_4_ = auVar103._8_4_ * (-(auVar103._8_4_ * auVar99._8_4_) + __real_40000000);
      auVar158._12_4_ = auVar103._12_4_ * (-(auVar103._12_4_ * auVar99._12_4_) + __real_40000000);
      auVar103 = vcvtps2pd_avx(auVar158);
      dVar96 = (-(dVar48 * auVar103._0_8_) + __real_4000000000000000) * auVar103._0_8_;
      dVar116 = (-(dVar49 * auVar103._8_8_) + __real_4000000000000000) * auVar103._8_8_;
      dVar118 = (-(dVar140 * auVar103._16_8_) + __real_4000000000000000) * auVar103._16_8_;
      dVar122 = (-(auVar103._24_8_ * 0.0) + __real_4000000000000000) * auVar103._24_8_;
      auVar103._0_8_ = dVar96 * (-(dVar48 * dVar96) + __real_4000000000000000);
      auVar103._8_8_ = dVar116 * (-(dVar49 * dVar116) + __real_4000000000000000);
      auVar103._16_8_ = dVar118 * (-(dVar140 * dVar118) + __real_4000000000000000);
      auVar103._24_8_ = dVar122 * (-(dVar122 * 0.0) + __real_4000000000000000);
      auVar142 = vpsllw_avx(auVar142,0xf);
      auVar142 = vpacksswb_avx(auVar142,auVar142);
      if ((byte)(SUB161(auVar142 >> 7,0) & 1 | (SUB161(auVar142 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar142 >> 0x17,0) & 1) << 2 | (SUB161(auVar142 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar142 >> 0x27,0) & 1) << 4 | (SUB161(auVar142 >> 0x2f,0) & 1) << 5 |
                 (SUB161(auVar142 >> 0x37,0) & 1) << 6 | SUB161(auVar142 >> 0x3f,0) << 7) !=
          (byte)(SUB161(auVar78 >> 7,0) & 1 | (SUB161(auVar78 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar78 >> 0x17,0) & 1) << 2 | (SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar78 >> 0x27,0) & 1) << 4 | (SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
                 (SUB161(auVar78 >> 0x37,0) & 1) << 6 | SUB161(auVar78 >> 0x3f,0) << 7)) {
        auVar130 = vpmovzxwd_avx2(auVar17);
        auVar130 = vpslld_avx2(auVar130,0x1f);
        auVar130 = vpsrad_avx2(auVar130,0x1f);
        goto LAB_140d21a3d;
      }
    }
    auVar130 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                           auVar207);
    auVar103 = vblendvps_avx(auVar103,SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar130);
    uVar11 = param_5 + 7;
    if (-1 < (int)param_5) {
      uVar11 = param_5;
    }
    auVar130 = vpermpd_avx2(auVar103,0x55);
    auVar61 = vpermpd_avx2(auVar103,0xaa);
    dStack_180 = auVar130._8_8_;
    dStack_178 = auVar130._16_8_;
    dStack_170 = auVar130._24_8_;
    dStack_3a0 = auVar61._8_8_;
    dStack_398 = auVar61._16_8_;
    dStack_390 = auVar61._24_8_;
    dVar48 = auVar103._0_8_;
    local_188 = auVar130._0_8_;
    local_3a8 = auVar61._0_8_;
    if ((int)(uVar11 & 0xfffffff8) < 1) {
      uVar13 = 0;
      auVar17 = vpcmpeqd_avx(auVar19,auVar19);
    }
    else {
      auVar103 = vpermpd_avx2(auVar218,0x55);
      auVar130 = vpermpd_avx2(auVar218,0xaa);
      auVar61 = vpermpd_avx2(auVar218,0xff);
      auVar17 = vpcmpeqd_avx(auVar19,auVar19);
      lVar15 = 0x40;
      uVar13 = 0;
      do {
        auVar60 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
        auVar111 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
        auVar87 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
        auVar100 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar15);
        auVar70 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar15);
        auVar163 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                ,auVar70);
        auVar207 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar100);
        auVar163 = vblendps_avx(auVar207,auVar163,0x88);
        auVar207 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                ,auVar70);
        auVar151 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,*(undefined1 (*) [32])(param_1 + lVar15));
        auVar207 = vblendps_avx(auVar151,auVar207,0x13);
        auVar100 = vblendps_avx(auVar70,auVar100,0x24);
        auVar100 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar100);
        auVar70 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_1 + lVar15));
        auVar100 = vblendps_avx(auVar100,auVar70,0xe0);
        auVar70 = vcvtps2pd_avx(auVar163._0_16_);
        auVar151 = vcvtps2pd_avx(auVar207._0_16_);
        auVar163 = vcvtps2pd_avx(auVar163._16_16_);
        auVar207 = vcvtps2pd_avx(auVar207._16_16_);
        auVar149 = vcvtps2pd_avx(auVar100._0_16_);
        auVar100 = vcvtps2pd_avx(auVar100._16_16_);
        dVar215 = param_4 * auVar151._0_8_ - dVar201;
        dVar233 = param_4 * auVar151._8_8_ - dVar201;
        dVar235 = param_4 * auVar151._16_8_ - dVar201;
        dVar237 = param_4 * auVar151._24_8_ - dVar201;
        dVar281 = param_4 * auVar70._0_8_ - dVar201;
        dVar287 = param_4 * auVar70._8_8_ - dVar201;
        dVar289 = param_4 * auVar70._16_8_ - dVar201;
        dVar291 = param_4 * auVar70._24_8_ - dVar201;
        dVar76 = param_4 * auVar207._0_8_ - dVar214;
        dVar93 = param_4 * auVar207._8_8_ - dVar214;
        dVar94 = param_4 * auVar207._16_8_ - dVar214;
        dVar95 = param_4 * auVar207._24_8_ - dVar214;
        dVar49 = param_4 * auVar163._0_8_ - dVar214;
        dVar75 = param_4 * auVar163._8_8_ - dVar214;
        dVar96 = param_4 * auVar163._16_8_ - dVar214;
        dVar118 = param_4 * auVar163._24_8_ - dVar214;
        dVar202 = param_4 * auVar100._0_8_ - dVar277;
        dVar209 = param_4 * auVar100._8_8_ - dVar277;
        dVar211 = param_4 * auVar100._16_8_ - dVar277;
        dVar213 = param_4 * auVar100._24_8_ - dVar277;
        dVar156 = param_4 * auVar149._0_8_ - dVar277;
        dVar169 = param_4 * auVar149._8_8_ - dVar277;
        dVar171 = param_4 * auVar149._16_8_ - dVar277;
        dVar172 = param_4 * auVar149._24_8_ - dVar277;
        local_2c8 = auVar103._0_8_;
        dStack_2c0 = auVar103._8_8_;
        dStack_2b8 = auVar103._16_8_;
        dStack_2b0 = auVar103._24_8_;
        local_388._0_8_ = auVar130._0_8_;
        stack0xfffffffffffffc80 = auVar130._8_8_;
        uStack_378 = auVar130._16_8_;
        uStack_370 = auVar130._24_8_;
        dVar188 = auVar218._0_8_ * dVar76 - local_2c8 * dVar215;
        dVar196 = auVar218._0_8_ * dVar93 - dStack_2c0 * dVar233;
        dVar198 = auVar218._0_8_ * dVar94 - dStack_2b8 * dVar235;
        dVar200 = auVar218._0_8_ * dVar95 - dStack_2b0 * dVar237;
        dVar174 = auVar218._0_8_ * dVar49 - dVar281 * local_2c8;
        dVar183 = auVar218._0_8_ * dVar75 - dVar287 * dStack_2c0;
        dVar184 = auVar218._0_8_ * dVar96 - dVar289 * dStack_2b8;
        dVar186 = auVar218._0_8_ * dVar118 - dVar291 * dStack_2b0;
        dVar97 = local_2c8 * dVar202 - (double)local_388._0_8_ * dVar76;
        dVar117 = dStack_2c0 * dVar209 - stack0xfffffffffffffc80 * dVar93;
        dVar119 = dStack_2b8 * dVar211 - uStack_378 * dVar94;
        dVar123 = dStack_2b0 * dVar213 - uStack_370 * dVar95;
        dVar140 = local_2c8 * dVar156 - (double)local_388._0_8_ * dVar49;
        dVar155 = dStack_2c0 * dVar169 - stack0xfffffffffffffc80 * dVar75;
        dVar116 = dStack_2b8 * dVar171 - uStack_378 * dVar96;
        dVar122 = dStack_2b0 * dVar172 - uStack_370 * dVar118;
        dVar292 = (double)local_388._0_8_ * dVar215 - auVar218._0_8_ * dVar202;
        dVar293 = stack0xfffffffffffffc80 * dVar233 - auVar218._0_8_ * dVar209;
        dVar294 = uStack_378 * dVar235 - auVar218._0_8_ * dVar211;
        dVar295 = uStack_370 * dVar237 - auVar218._0_8_ * dVar213;
        dVar296 = (double)local_388._0_8_ * dVar281 - auVar218._0_8_ * dVar156;
        dVar303 = stack0xfffffffffffffc80 * dVar287 - auVar218._0_8_ * dVar169;
        dVar305 = uStack_378 * dVar289 - auVar218._0_8_ * dVar171;
        dVar307 = uStack_370 * dVar291 - auVar218._0_8_ * dVar172;
        dVar140 = dVar140 + dVar140;
        dVar155 = dVar155 + dVar155;
        dVar116 = dVar116 + dVar116;
        dVar122 = dVar122 + dVar122;
        dVar97 = dVar97 + dVar97;
        dVar117 = dVar117 + dVar117;
        dVar119 = dVar119 + dVar119;
        dVar123 = dVar123 + dVar123;
        dVar296 = dVar296 + dVar296;
        dVar303 = dVar303 + dVar303;
        dVar305 = dVar305 + dVar305;
        dVar307 = dVar307 + dVar307;
        dVar292 = dVar292 + dVar292;
        dVar293 = dVar293 + dVar293;
        dVar294 = dVar294 + dVar294;
        dVar295 = dVar295 + dVar295;
        auVar178._0_8_ = dVar174 + dVar174;
        auVar178._8_8_ = dVar183 + dVar183;
        auVar178._16_8_ = dVar184 + dVar184;
        auVar178._24_8_ = dVar186 + dVar186;
        dVar188 = dVar188 + dVar188;
        dVar196 = dVar196 + dVar196;
        dVar198 = dVar198 + dVar198;
        dVar200 = dVar200 + dVar200;
        local_348 = auVar61._0_8_;
        dStack_340 = auVar61._8_8_;
        dStack_338 = auVar61._16_8_;
        dStack_330 = auVar61._24_8_;
        auVar131._0_8_ =
             dVar48 * ((local_2c8 * dVar188 - dVar292 * (double)local_388._0_8_) +
                      local_348 * dVar97 + dVar215);
        auVar131._8_8_ =
             dVar48 * ((dStack_2c0 * dVar196 - dVar293 * stack0xfffffffffffffc80) +
                      dStack_340 * dVar117 + dVar233);
        auVar131._16_8_ =
             dVar48 * ((dStack_2b8 * dVar198 - dVar294 * uStack_378) +
                      dStack_338 * dVar119 + dVar235);
        auVar131._24_8_ =
             dVar48 * ((dStack_2b0 * dVar200 - dVar295 * uStack_370) +
                      dStack_330 * dVar123 + dVar237);
        auVar62._0_8_ =
             (local_348 * dVar140 + dVar281 +
             (local_2c8 * auVar178._0_8_ - dVar296 * (double)local_388._0_8_)) * dVar48;
        auVar62._8_8_ =
             (dStack_340 * dVar155 + dVar287 +
             (dStack_2c0 * auVar178._8_8_ - dVar303 * stack0xfffffffffffffc80)) * dVar48;
        auVar62._16_8_ =
             (dStack_338 * dVar116 + dVar289 + (dStack_2b8 * auVar178._16_8_ - dVar305 * uStack_378)
             ) * dVar48;
        auVar62._24_8_ =
             (dStack_330 * dVar122 + dVar291 + (dStack_2b0 * auVar178._24_8_ - dVar307 * uStack_370)
             ) * dVar48;
        auVar79[1] = DAT_152cac6b2;
        auVar79[0] = DAT_152cac6b2;
        auVar79[2] = DAT_152cac6b2;
        auVar79[3] = DAT_152cac6b2;
        auVar79[4] = DAT_152cac6b2;
        auVar79[5] = DAT_152cac6b2;
        auVar79[6] = DAT_152cac6b2;
        auVar79[7] = DAT_152cac6b2;
        auVar79[8] = DAT_152cac6b2;
        auVar79[9] = DAT_152cac6b2;
        auVar79[10] = DAT_152cac6b2;
        auVar79[0xb] = DAT_152cac6b2;
        auVar79[0xc] = DAT_152cac6b2;
        auVar79[0xd] = DAT_152cac6b2;
        auVar79[0xe] = DAT_152cac6b2;
        auVar79[0xf] = DAT_152cac6b2;
        auVar105._0_8_ =
             local_188 *
             (((double)local_388._0_8_ * dVar97 - auVar218._0_8_ * dVar188) +
             local_348 * dVar292 + dVar76);
        auVar105._8_8_ =
             dStack_180 *
             ((stack0xfffffffffffffc80 * dVar117 - auVar218._0_8_ * dVar196) +
             dStack_340 * dVar293 + dVar93);
        auVar105._16_8_ =
             dStack_178 *
             ((uStack_378 * dVar119 - auVar218._0_8_ * dVar198) + dStack_338 * dVar294 + dVar94);
        auVar105._24_8_ =
             dStack_170 *
             ((uStack_370 * dVar123 - auVar218._0_8_ * dVar200) + dStack_330 * dVar295 + dVar95);
        auVar207._0_8_ =
             local_188 *
             (local_348 * dVar296 + dVar49 +
             ((double)local_388._0_8_ * dVar140 - auVar218._0_8_ * auVar178._0_8_));
        auVar207._8_8_ =
             dStack_180 *
             (dStack_340 * dVar303 + dVar75 +
             (stack0xfffffffffffffc80 * dVar155 - auVar218._0_8_ * auVar178._8_8_));
        auVar207._16_8_ =
             dStack_178 *
             (dStack_338 * dVar305 + dVar96 +
             (uStack_378 * dVar116 - auVar218._0_8_ * auVar178._16_8_));
        auVar207._24_8_ =
             dStack_170 *
             (dStack_330 * dVar307 + dVar118 +
             (uStack_370 * dVar122 - auVar218._0_8_ * auVar178._24_8_));
        auVar142 = vcvtpd2ps_avx(auVar62);
        auVar78 = vcvtpd2ps_avx(auVar131);
        auVar19 = vcvtpd2ps_avx(auVar207);
        auVar99 = vcvtpd2ps_avx(auVar105);
        auVar205._16_16_ = auVar78;
        auVar205._0_16_ = auVar142;
        auVar220._16_16_ = auVar99;
        auVar220._0_16_ = auVar19;
        auVar37._0_8_ =
             local_3a8 *
             (local_348 * dVar188 + dVar202 + (auVar218._0_8_ * dVar292 - local_2c8 * dVar97));
        auVar37._8_8_ =
             dStack_3a0 *
             (dStack_340 * dVar196 + dVar209 + (auVar218._0_8_ * dVar293 - dStack_2c0 * dVar117));
        auVar37._16_8_ =
             dStack_398 *
             (dStack_338 * dVar198 + dVar211 + (auVar218._0_8_ * dVar294 - dStack_2b8 * dVar119));
        auVar37._24_8_ =
             dStack_390 *
             (dStack_330 * dVar200 + dVar213 + (auVar218._0_8_ * dVar295 - dStack_2b0 * dVar123));
        auVar63._0_8_ =
             local_3a8 *
             ((auVar218._0_8_ * dVar296 - local_2c8 * dVar140) +
             local_348 * auVar178._0_8_ + dVar156);
        auVar63._8_8_ =
             dStack_3a0 *
             ((auVar218._0_8_ * dVar303 - dStack_2c0 * dVar155) +
             dStack_340 * auVar178._8_8_ + dVar169);
        auVar63._16_8_ =
             dStack_398 *
             ((auVar218._0_8_ * dVar305 - dStack_2b8 * dVar116) +
             dStack_338 * auVar178._16_8_ + dVar171);
        auVar63._24_8_ =
             dStack_390 *
             ((auVar218._0_8_ * dVar307 - dStack_2b0 * dVar122) +
             dStack_330 * auVar178._24_8_ + dVar172);
        auVar158 = vcvtpd2ps_avx(auVar63);
        auVar299 = vcvtpd2ps_avx(auVar37);
        auVar244._16_16_ = auVar299;
        auVar244._0_16_ = auVar158;
        auVar98 = vpand_avx(auVar17,auVar79);
        if (auVar98._0_8_ != 0) {
          auVar98 = vpmovzxbw_avx(auVar17);
          auVar175._0_8_ = CONCAT44(__real_7f800000,__real_7f800000);
          auVar175._8_4_ = __real_7f800000;
          auVar175._12_4_ = __real_7f800000;
          auVar22._16_4_ = __real_7f800000;
          auVar22._0_16_ = auVar175;
          auVar22._20_4_ = __real_7f800000;
          auVar38._24_4_ = __real_7f800000;
          auVar38._0_24_ = auVar22;
          auVar38._28_4_ = __real_7f800000;
          auVar64._0_8_ = auVar142._0_8_ & auVar175._0_8_;
          uVar7 = auVar175._8_8_;
          auVar64._8_8_ = auVar142._8_8_ & uVar7;
          uVar2 = auVar22._16_8_;
          auVar64._16_8_ = auVar78._0_8_ & uVar2;
          uVar3 = auVar38._24_8_;
          auVar64._24_8_ = auVar78._8_8_ & uVar3;
          auVar100 = vpcmpeqd_avx2(auVar64,auVar38);
          auVar70 = vpcmpeqd_avx2(auVar178,auVar178);
          auVar78 = SUB3216(auVar100 ^ auVar70,0);
          auVar80 = SUB3216(auVar100 ^ auVar70,0x10);
          auVar17 = vpackssdw_avx(auVar78,auVar80);
          auVar17 = vpand_avx(auVar17,auVar98);
          auVar159 = vpsllw_avx(auVar17,0xf);
          if ((((((((SUB161(auVar159 >> 0xf,0) & 1) != 0 || (SUB161(auVar159 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar159 >> 0x2f,0) & 1) != 0) || (SUB161(auVar159 >> 0x3f,0) & 1) != 0
                 ) || (SUB161(auVar159 >> 0x4f,0) & 1) != 0) ||
               (SUB161(auVar159 >> 0x5f,0) & 1) != 0) || (SUB161(auVar159 >> 0x6f,0) & 1) != 0) ||
              auVar159[0xf] < '\0') {
            auVar17 = vpackssdw_avx(auVar78,auVar80);
            auVar132._0_8_ = auVar19._0_8_ & auVar175._0_8_;
            auVar132._8_8_ = auVar19._8_8_ & uVar7;
            auVar132._16_8_ = auVar99._0_8_ & uVar2;
            auVar132._24_8_ = auVar99._8_8_ & uVar3;
            auVar100 = vpcmpeqd_avx2(auVar132,auVar38);
            auVar78 = vpackssdw_avx(SUB3216(auVar100 ^ auVar70,0),SUB3216(auVar100 ^ auVar70,0x10));
            auVar78 = vpand_avx(auVar78,auVar98);
            auVar17 = vpand_avx(auVar78,auVar17);
            auVar78 = vpsllw_avx(auVar17,0xf);
            if ((((((((SUB161(auVar78 >> 0xf,0) & 1) != 0 || (SUB161(auVar78 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar78 >> 0x2f,0) & 1) != 0) || (SUB161(auVar78 >> 0x3f,0) & 1) != 0
                   ) || (SUB161(auVar78 >> 0x4f,0) & 1) != 0) ||
                 (SUB161(auVar78 >> 0x5f,0) & 1) != 0) || (SUB161(auVar78 >> 0x6f,0) & 1) != 0) ||
                auVar78[0xf] < '\0') {
              auVar106._0_8_ = auVar158._0_8_ & auVar175._0_8_;
              auVar106._8_8_ = auVar158._8_8_ & uVar7;
              auVar106._16_8_ = auVar299._0_8_ & uVar2;
              auVar106._24_8_ = auVar299._8_8_ & uVar3;
              auVar100 = vpcmpeqd_avx2(auVar106,auVar38);
              auVar78 = vpackssdw_avx(SUB3216(auVar100 ^ auVar70,0),SUB3216(auVar100 ^ auVar70,0x10)
                                     );
              auVar17 = vpand_avx(auVar78,auVar17);
            }
          }
          auVar17 = vpshufb_avx(auVar17,___xmm_00000000000000000e0c0a0806040200);
          auVar98 = vpand_avx(auVar17,auVar79);
        }
        auVar100 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar15);
        auVar70 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar15);
        auVar163 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                ,auVar70);
        auVar207 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar100);
        auVar163 = vblendps_avx(auVar207,auVar163,0x88);
        auVar207 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                ,auVar70);
        auVar151 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,*(undefined1 (*) [32])(param_2 + lVar15));
        auVar207 = vblendps_avx(auVar151,auVar207,0x13);
        auVar151 = vperm2f128_avx(auVar163,auVar207,0x31);
        auVar100 = vblendps_avx(auVar70,auVar100,0x24);
        auVar100 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar100);
        auVar70 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_2 + lVar15));
        auVar100 = vblendps_avx(auVar100,auVar70,0xe0);
        auVar78._0_4_ = auVar163._0_4_ ^ uVar9;
        auVar78._4_4_ = auVar163._4_4_ ^ uVar9;
        auVar78._8_4_ = auVar163._8_4_ ^ uVar9;
        auVar78._12_4_ = auVar163._12_4_ ^ uVar9;
        auVar65._16_4_ = auVar207._0_4_ ^ uVar9;
        auVar65._0_16_ = auVar78;
        auVar65._20_4_ = auVar207._4_4_ ^ uVar9;
        auVar65._24_4_ = auVar207._8_4_ ^ uVar9;
        auVar65._28_4_ = auVar207._12_4_ ^ uVar9;
        auVar70 = vcvtps2pd_avx(auVar65._16_16_);
        auVar99._0_4_ = auVar151._0_4_ ^ uVar9;
        auVar99._4_4_ = auVar151._4_4_ ^ uVar9;
        auVar99._8_4_ = auVar151._8_4_ ^ uVar9;
        auVar99._12_4_ = auVar151._12_4_ ^ uVar9;
        auVar107._16_4_ = auVar151._16_4_ ^ uVar9;
        auVar107._0_16_ = auVar99;
        auVar107._20_4_ = auVar151._20_4_ ^ uVar9;
        auVar107._24_4_ = auVar151._24_4_ ^ uVar9;
        auVar107._28_4_ = auVar151._28_4_ ^ uVar9;
        auVar163 = vcvtps2pd_avx(auVar78);
        auVar207 = vcvtps2pd_avx(auVar107._16_16_);
        auVar151 = vcvtps2pd_avx(auVar99);
        auVar17._0_4_ = auVar100._0_4_ ^ uVar9;
        auVar17._4_4_ = auVar100._4_4_ ^ uVar9;
        auVar17._8_4_ = auVar100._8_4_ ^ uVar9;
        auVar17._12_4_ = auVar100._12_4_ ^ uVar9;
        auVar39._16_4_ = auVar100._16_4_ ^ uVar9;
        auVar39._0_16_ = auVar17;
        auVar39._20_4_ = auVar100._20_4_ ^ uVar9;
        auVar39._24_4_ = auVar100._24_4_ ^ uVar9;
        auVar39._28_4_ = auVar100._28_4_ ^ uVar9;
        auVar100 = vcvtps2pd_avx(auVar39._16_16_);
        auVar149 = vcvtps2pd_avx(auVar17);
        dVar292 = auVar163._0_8_;
        dVar293 = auVar163._8_8_;
        dVar294 = auVar163._16_8_;
        dVar295 = auVar163._24_8_;
        dVar49 = auVar70._0_8_;
        dVar96 = auVar70._8_8_;
        dVar76 = auVar70._16_8_;
        dVar97 = auVar70._24_8_;
        dVar140 = auVar151._0_8_;
        dVar116 = auVar151._8_8_;
        dVar93 = auVar151._16_8_;
        dVar117 = auVar151._24_8_;
        dVar296 = auVar207._0_8_;
        dVar303 = auVar207._8_8_;
        dVar305 = auVar207._16_8_;
        dVar307 = auVar207._24_8_;
        dVar75 = auVar149._0_8_;
        dVar118 = auVar149._8_8_;
        dVar94 = auVar149._16_8_;
        dVar119 = auVar149._24_8_;
        dVar155 = auVar100._0_8_;
        dVar122 = auVar100._8_8_;
        dVar95 = auVar100._16_8_;
        dVar123 = auVar100._24_8_;
        dVar169 = auVar218._0_8_ * dVar296 - local_2c8 * dVar49;
        dVar172 = auVar218._0_8_ * dVar303 - dStack_2c0 * dVar96;
        dVar183 = auVar218._0_8_ * dVar305 - dStack_2b8 * dVar76;
        dVar186 = auVar218._0_8_ * dVar307 - dStack_2b0 * dVar97;
        dVar156 = auVar218._0_8_ * dVar140 - dVar292 * local_2c8;
        dVar171 = auVar218._0_8_ * dVar116 - dVar293 * dStack_2c0;
        dVar174 = auVar218._0_8_ * dVar93 - dVar294 * dStack_2b8;
        dVar184 = auVar218._0_8_ * dVar117 - dVar295 * dStack_2b0;
        dVar188 = local_2c8 * dVar155 - dVar296 * (double)local_388._0_8_;
        dVar198 = dStack_2c0 * dVar122 - dVar303 * stack0xfffffffffffffc80;
        dVar202 = dStack_2b8 * dVar95 - dVar305 * uStack_378;
        dVar211 = dStack_2b0 * dVar123 - dVar307 * uStack_370;
        dVar215 = local_2c8 * dVar75 - (double)local_388._0_8_ * dVar140;
        dVar233 = dStack_2c0 * dVar118 - stack0xfffffffffffffc80 * dVar116;
        dVar235 = dStack_2b8 * dVar94 - uStack_378 * dVar93;
        dVar237 = dStack_2b0 * dVar119 - uStack_370 * dVar117;
        dVar281 = (double)local_388._0_8_ * dVar49 - auVar218._0_8_ * dVar155;
        dVar287 = stack0xfffffffffffffc80 * dVar96 - auVar218._0_8_ * dVar122;
        dVar289 = uStack_378 * dVar76 - auVar218._0_8_ * dVar95;
        dVar291 = uStack_370 * dVar97 - auVar218._0_8_ * dVar123;
        dVar196 = (double)local_388._0_8_ * dVar292 - auVar218._0_8_ * dVar75;
        dVar200 = stack0xfffffffffffffc80 * dVar293 - auVar218._0_8_ * dVar118;
        dVar209 = uStack_378 * dVar294 - auVar218._0_8_ * dVar94;
        dVar213 = uStack_370 * dVar295 - auVar218._0_8_ * dVar119;
        dVar215 = dVar215 + dVar215;
        dVar233 = dVar233 + dVar233;
        dVar235 = dVar235 + dVar235;
        dVar237 = dVar237 + dVar237;
        auVar179._0_8_ = dVar188 + dVar188;
        auVar179._8_8_ = dVar198 + dVar198;
        auVar179._16_8_ = dVar202 + dVar202;
        auVar179._24_8_ = dVar211 + dVar211;
        dVar196 = dVar196 + dVar196;
        dVar200 = dVar200 + dVar200;
        dVar209 = dVar209 + dVar209;
        dVar213 = dVar213 + dVar213;
        dVar281 = dVar281 + dVar281;
        dVar287 = dVar287 + dVar287;
        dVar289 = dVar289 + dVar289;
        dVar291 = dVar291 + dVar291;
        dVar156 = dVar156 + dVar156;
        dVar171 = dVar171 + dVar171;
        dVar174 = dVar174 + dVar174;
        dVar184 = dVar184 + dVar184;
        dVar169 = dVar169 + dVar169;
        dVar172 = dVar172 + dVar172;
        dVar183 = dVar183 + dVar183;
        dVar186 = dVar186 + dVar186;
        auVar108._0_8_ =
             dVar48 * ((local_2c8 * dVar169 - dVar281 * (double)local_388._0_8_) +
                      local_348 * auVar179._0_8_ + dVar49);
        auVar108._8_8_ =
             dVar48 * ((dStack_2c0 * dVar172 - dVar287 * stack0xfffffffffffffc80) +
                      dStack_340 * auVar179._8_8_ + dVar96);
        auVar108._16_8_ =
             dVar48 * ((dStack_2b8 * dVar183 - dVar289 * uStack_378) +
                      dStack_338 * auVar179._16_8_ + dVar76);
        auVar108._24_8_ =
             dVar48 * ((dStack_2b0 * dVar186 - dVar291 * uStack_370) +
                      dStack_330 * auVar179._24_8_ + dVar97);
        auVar150._0_8_ =
             dVar48 * (local_348 * dVar215 + dVar292 +
                      (local_2c8 * dVar156 - (double)local_388._0_8_ * dVar196));
        auVar150._8_8_ =
             dVar48 * (dStack_340 * dVar233 + dVar293 +
                      (dStack_2c0 * dVar171 - stack0xfffffffffffffc80 * dVar200));
        auVar150._16_8_ =
             dVar48 * (dStack_338 * dVar235 + dVar294 +
                      (dStack_2b8 * dVar174 - uStack_378 * dVar209));
        auVar150._24_8_ =
             dVar48 * (dStack_330 * dVar237 + dVar295 +
                      (dStack_2b0 * dVar184 - uStack_370 * dVar213));
        auVar40._0_8_ =
             local_188 *
             (local_348 * dVar281 + dVar296 +
             ((double)local_388._0_8_ * auVar179._0_8_ - auVar218._0_8_ * dVar169));
        auVar40._8_8_ =
             dStack_180 *
             (dStack_340 * dVar287 + dVar303 +
             (stack0xfffffffffffffc80 * auVar179._8_8_ - auVar218._0_8_ * dVar172));
        auVar40._16_8_ =
             dStack_178 *
             (dStack_338 * dVar289 + dVar305 +
             (uStack_378 * auVar179._16_8_ - auVar218._0_8_ * dVar183));
        auVar40._24_8_ =
             dStack_170 *
             (dStack_330 * dVar291 + dVar307 +
             (uStack_370 * auVar179._24_8_ - auVar218._0_8_ * dVar186));
        auVar66._0_8_ =
             local_188 *
             (local_348 * dVar196 + dVar140 +
             ((double)local_388._0_8_ * dVar215 - auVar218._0_8_ * dVar156));
        auVar66._8_8_ =
             dStack_180 *
             (dStack_340 * dVar200 + dVar116 +
             (stack0xfffffffffffffc80 * dVar233 - auVar218._0_8_ * dVar171));
        auVar66._16_8_ =
             dStack_178 *
             (dStack_338 * dVar209 + dVar93 + (uStack_378 * dVar235 - auVar218._0_8_ * dVar174));
        auVar66._24_8_ =
             dStack_170 *
             (dStack_330 * dVar213 + dVar117 + (uStack_370 * dVar237 - auVar218._0_8_ * dVar184));
        auVar17 = vcvtpd2ps_avx(auVar150);
        auVar78 = vcvtpd2ps_avx(auVar108);
        auVar99 = vcvtpd2ps_avx(auVar66);
        auVar158 = vcvtpd2ps_avx(auVar40);
        auVar245._16_16_ = auVar78;
        auVar245._0_16_ = auVar17;
        auVar266._16_16_ = auVar158;
        auVar266._0_16_ = auVar99;
        auVar41._0_8_ =
             local_3a8 *
             ((auVar218._0_8_ * dVar281 - local_2c8 * auVar179._0_8_) +
             local_348 * dVar169 + dVar155);
        auVar41._8_8_ =
             dStack_3a0 *
             ((auVar218._0_8_ * dVar287 - dStack_2c0 * auVar179._8_8_) +
             dStack_340 * dVar172 + dVar122);
        auVar41._16_8_ =
             dStack_398 *
             ((auVar218._0_8_ * dVar289 - dStack_2b8 * auVar179._16_8_) +
             dStack_338 * dVar183 + dVar95);
        auVar41._24_8_ =
             dStack_390 *
             ((auVar218._0_8_ * dVar291 - dStack_2b0 * auVar179._24_8_) +
             dStack_330 * dVar186 + dVar123);
        auVar67._0_8_ =
             (local_348 * dVar156 + dVar75 + (auVar218._0_8_ * dVar196 - local_2c8 * dVar215)) *
             local_3a8;
        auVar67._8_8_ =
             (dStack_340 * dVar171 + dVar118 + (auVar218._0_8_ * dVar200 - dStack_2c0 * dVar233)) *
             dStack_3a0;
        auVar67._16_8_ =
             (dStack_338 * dVar174 + dVar94 + (auVar218._0_8_ * dVar209 - dStack_2b8 * dVar235)) *
             dStack_398;
        auVar67._24_8_ =
             (dStack_330 * dVar184 + dVar119 + (auVar218._0_8_ * dVar213 - dStack_2b0 * dVar237)) *
             dStack_390;
        auVar299 = vcvtpd2ps_avx(auVar67);
        auVar79 = vcvtpd2ps_avx(auVar41);
        auVar68._16_16_ = auVar79;
        auVar68._0_16_ = auVar299;
        auVar80[1] = DAT_152cac6b2;
        auVar80[0] = DAT_152cac6b2;
        auVar80[2] = DAT_152cac6b2;
        auVar80[3] = DAT_152cac6b2;
        auVar80[4] = DAT_152cac6b2;
        auVar80[5] = DAT_152cac6b2;
        auVar80[6] = DAT_152cac6b2;
        auVar80[7] = DAT_152cac6b2;
        auVar80[8] = DAT_152cac6b2;
        auVar80[9] = DAT_152cac6b2;
        auVar80[10] = DAT_152cac6b2;
        auVar80[0xb] = DAT_152cac6b2;
        auVar80[0xc] = DAT_152cac6b2;
        auVar80[0xd] = DAT_152cac6b2;
        auVar80[0xe] = DAT_152cac6b2;
        auVar80[0xf] = DAT_152cac6b2;
        auVar175 = vpand_avx(auVar98,auVar80);
        if (auVar175._0_8_ != 0) {
          auVar98 = vpmovzxbw_avx(auVar98);
          auVar159._0_8_ = CONCAT44(__real_7f800000,__real_7f800000);
          auVar159._8_4_ = __real_7f800000;
          auVar159._12_4_ = __real_7f800000;
          auVar23._16_4_ = __real_7f800000;
          auVar23._0_16_ = auVar159;
          auVar23._20_4_ = __real_7f800000;
          auVar42._24_4_ = __real_7f800000;
          auVar42._0_24_ = auVar23;
          auVar42._28_4_ = __real_7f800000;
          auVar109._0_8_ = auVar17._0_8_ & auVar159._0_8_;
          uVar7 = auVar159._8_8_;
          auVar109._8_8_ = auVar17._8_8_ & uVar7;
          uVar2 = auVar23._16_8_;
          auVar109._16_8_ = auVar78._0_8_ & uVar2;
          uVar3 = auVar42._24_8_;
          auVar109._24_8_ = auVar78._8_8_ & uVar3;
          auVar100 = vpcmpeqd_avx2(auVar109,auVar42);
          auVar70 = vpcmpeqd_avx2(auVar179,auVar179);
          auVar78 = vpackssdw_avx(SUB3216(auVar100 ^ auVar70,0),SUB3216(auVar100 ^ auVar70,0x10));
          auVar78 = vpand_avx(auVar78,auVar98);
          auVar175 = vpsllw_avx(auVar78,0xf);
          if ((((((((SUB161(auVar175 >> 0xf,0) & 1) != 0 || (SUB161(auVar175 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar175 >> 0x2f,0) & 1) != 0) || (SUB161(auVar175 >> 0x3f,0) & 1) != 0
                 ) || (SUB161(auVar175 >> 0x4f,0) & 1) != 0) ||
               (SUB161(auVar175 >> 0x5f,0) & 1) != 0) || (SUB161(auVar175 >> 0x6f,0) & 1) != 0) ||
              auVar175[0xf] < '\0') {
            auVar110._0_8_ = auVar99._0_8_ & auVar159._0_8_;
            auVar110._8_8_ = auVar99._8_8_ & uVar7;
            auVar110._16_8_ = auVar158._0_8_ & uVar2;
            auVar110._24_8_ = auVar158._8_8_ & uVar3;
            auVar163 = vpcmpeqd_avx2(auVar110,auVar42);
            auVar100 = vpor_avx2(auVar100,auVar163);
            auVar78 = vpackssdw_avx(SUB3216(auVar100 ^ auVar70,0),SUB3216(auVar100 ^ auVar70,0x10));
            auVar78 = vpand_avx(auVar78,auVar98);
            auVar158 = vpsllw_avx(auVar78,0xf);
            if ((((((((SUB161(auVar158 >> 0xf,0) & 1) != 0 || (SUB161(auVar158 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar158 >> 0x2f,0) & 1) != 0) ||
                   (SUB161(auVar158 >> 0x3f,0) & 1) != 0) || (SUB161(auVar158 >> 0x4f,0) & 1) != 0)
                 || (SUB161(auVar158 >> 0x5f,0) & 1) != 0) || (SUB161(auVar158 >> 0x6f,0) & 1) != 0)
                || auVar158[0xf] < '\0') {
              auVar133._0_8_ = auVar299._0_8_ & auVar159._0_8_;
              auVar133._8_8_ = auVar299._8_8_ & uVar7;
              auVar133._16_8_ = auVar79._0_8_ & uVar2;
              auVar133._24_8_ = auVar79._8_8_ & uVar3;
              auVar100 = vpcmpeqd_avx2(auVar133,auVar42);
              auVar158 = vpackssdw_avx(SUB3216(auVar100 ^ auVar70,0),
                                       SUB3216(auVar100 ^ auVar70,0x10));
              auVar78 = vpand_avx(auVar158,auVar78);
            }
          }
          auVar78 = vpshufb_avx(auVar78,___xmm_00000000000000000e0c0a0806040200);
          auVar98 = vpand_avx(auVar78,auVar80);
        }
        auVar35._16_16_ = auVar19;
        auVar35._0_16_ = auVar142;
        auVar70 = vshufpd_avx(auVar205,auVar35,2);
        auVar163 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                                ,auVar244);
        auVar100 = vpermpd_avx2(auVar220,0xe9);
        auVar100 = vblendps_avx(auVar163,auVar100,7);
        auVar163 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                                ,auVar100);
        auVar70 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                               ,auVar70);
        auVar70 = vblendps_avx(auVar70,auVar163,0xa4);
        *(undefined1 (*) [32])(param_1 + -0x40 + lVar15) = auVar70;
        auVar207 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
        auVar70 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                               ,auVar100);
        auVar100 = vshufpd_avx(auVar205,auVar205,1);
        auVar100 = vblendps_avx(auVar70,auVar100,0x92);
        *(undefined1 (*) [32])(param_1 + -0x20 + lVar15) = auVar100;
        auVar149 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
        auVar151 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
        auVar70 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                               ,auVar220);
        auVar100 = vpermpd_avx2(auVar205,0xff);
        auVar100 = vblendpd_avx(auVar70,auVar100,1);
        auVar100 = vblendps_avx(auVar100,auVar244,0xe0);
        auVar100 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                                ,auVar100);
        *(undefined1 (*) [32])(param_1 + lVar15) = auVar100;
        auVar36._16_16_ = auVar99;
        auVar36._0_16_ = auVar17;
        auVar70 = vshufpd_avx(auVar245,auVar36,2);
        auVar163 = vpermps_avx2(auVar87,auVar68);
        auVar100 = vpermpd_avx2(auVar266,0xe9);
        auVar100 = vblendps_avx(auVar163,auVar100,7);
        auVar163 = vpermps_avx2(auVar111,auVar100);
        auVar70 = vpermps_avx2(auVar60,auVar70);
        auVar70 = vblendps_avx(auVar70,auVar163,0xa4);
        *(undefined1 (*) [32])(param_2 + -0x40 + lVar15) = auVar70;
        auVar70 = vpermps_avx2(auVar207,auVar100);
        auVar100 = vshufpd_avx(auVar245,auVar245,1);
        auVar100 = vblendps_avx(auVar70,auVar100,0x92);
        *(undefined1 (*) [32])(param_2 + -0x20 + lVar15) = auVar100;
        auVar70 = vpermps_avx2(auVar151,auVar266);
        auVar100 = vpermpd_avx2(auVar245,0xff);
        auVar100 = vblendpd_avx(auVar70,auVar100,1);
        auVar100 = vblendps_avx(auVar100,auVar68,0xe0);
        auVar100 = vpermps_avx2(auVar149,auVar100);
        *(undefined1 (*) [32])(param_2 + lVar15) = auVar100;
        auVar17 = vpand_avx(auVar98,auVar80);
        lVar15 = lVar15 + 0x60;
        uVar13 = uVar13 + 8;
      } while ((int)uVar13 < (int)(uVar11 & 0xfffffff8));
    }
    auVar61 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
    auVar130 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
    auVar103 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
    if ((int)uVar13 < (int)param_5) {
      auVar43._4_4_ = uVar13;
      auVar43._0_4_ = uVar13;
      auVar43._8_4_ = uVar13;
      auVar43._12_4_ = uVar13;
      auVar43._16_4_ = uVar13;
      auVar43._20_4_ = uVar13;
      auVar43._24_4_ = uVar13;
      auVar43._28_4_ = uVar13;
      auVar100 = vpor_avx2(auVar43,
                           ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
      auVar69._4_4_ = param_5;
      auVar69._0_4_ = param_5;
      auVar69._8_4_ = param_5;
      auVar69._12_4_ = param_5;
      auVar69._16_4_ = param_5;
      auVar69._20_4_ = param_5;
      auVar69._24_4_ = param_5;
      auVar69._28_4_ = param_5;
      auVar100 = vpcmpgtd_avx2(auVar69,auVar100);
      uVar7 = (ulonglong)uVar13;
      uVar6 = uVar7 * 3;
      pauVar1 = (undefined1 (*) [32])(param_1 + uVar7 * 0xc);
      uVar9 = vmovmskps_avx(auVar100);
      if (uVar9 == 0xff) {
        auVar70 = pauVar1[1];
        auVar163 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                ,auVar70);
        auVar207 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,*pauVar1);
        auVar163 = vblendps_avx(auVar207,auVar163,0x88);
        auVar207 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                ,auVar70);
        auVar151 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,pauVar1[2]);
        auVar207 = vblendps_avx(auVar151,auVar207,0x13);
        auVar44._16_16_ = auVar207._0_16_;
        auVar44._0_16_ = auVar163._0_16_;
        auVar111 = vperm2f128_avx(auVar163,auVar207,0x31);
        auVar70 = vblendps_avx(auVar70,*pauVar1,0x24);
        auVar70 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar70);
        auVar163 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                ,pauVar1[2]);
        auVar151 = vblendps_avx(auVar70,auVar163,0xe0);
        auVar70 = *(undefined1 (*) [32])(param_2 + uVar7 * 0xc);
        auVar163 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc);
        auVar207 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc);
        auVar149 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                ,auVar163);
        auVar87 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar70);
        auVar149 = vblendps_avx(auVar87,auVar149,0x88);
        auVar87 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar163);
        auVar60 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar207);
        auVar87 = vblendps_avx(auVar60,auVar87,0x13);
        auVar88._16_16_ = auVar87._0_16_;
        auVar88._0_16_ = auVar149._0_16_;
        auVar149 = vperm2f128_avx(auVar149,auVar87,0x31);
        auVar70 = vblendps_avx(auVar163,auVar70,0x24);
        auVar70 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar70);
        auVar163 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                ,auVar207);
        auVar70 = vblendps_avx(auVar70,auVar163,0xe0);
      }
      else {
        auVar44 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar100);
        auVar111 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar100);
        auVar151 = vgatherdps(ZEXT1632(ZEXT816(0)),auVar100);
        auVar88 = vgatherdps(ZEXT832(0),auVar100);
        auVar149 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar100);
        auVar70 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar100);
      }
      pauVar14 = (undefined1 (*) [32])(param_2 + uVar7 * 0xc);
      auVar163 = vcvtps2pd_avx(auVar44._0_16_);
      auVar207 = vcvtps2pd_avx(auVar44._16_16_);
      auVar19._0_4_ = auVar88._0_4_ ^ __real_80000000;
      auVar19._4_4_ = auVar88._4_4_ ^ __real_80000000;
      auVar19._8_4_ = auVar88._8_4_ ^ __real_80000000;
      auVar19._12_4_ = auVar88._12_4_ ^ __real_80000000;
      auVar46._16_4_ = auVar88._16_4_ ^ __real_80000000;
      auVar46._0_16_ = auVar19;
      auVar46._20_4_ = auVar88._20_4_ ^ __real_80000000;
      auVar46._24_4_ = auVar88._24_4_ ^ __real_80000000;
      auVar46._28_4_ = auVar88._28_4_ ^ __real_80000000;
      auVar299._0_4_ = auVar149._0_4_ ^ __real_80000000;
      auVar299._4_4_ = auVar149._4_4_ ^ __real_80000000;
      auVar299._8_4_ = auVar149._8_4_ ^ __real_80000000;
      auVar299._12_4_ = auVar149._12_4_ ^ __real_80000000;
      auVar302._16_4_ = auVar149._16_4_ ^ __real_80000000;
      auVar302._0_16_ = auVar299;
      auVar302._20_4_ = auVar149._20_4_ ^ __real_80000000;
      auVar302._24_4_ = auVar149._24_4_ ^ __real_80000000;
      auVar302._28_4_ = auVar149._28_4_ ^ __real_80000000;
      local_388._4_4_ = auVar70._4_4_ ^ __real_80000000;
      local_388._0_4_ = auVar70._0_4_ ^ __real_80000000;
      local_388._8_4_ = auVar70._8_4_ ^ __real_80000000;
      uStack_37c = auVar70._12_4_ ^ __real_80000000;
      uStack_378._0_4_ = auVar70._16_4_ ^ __real_80000000;
      uStack_378._4_4_ = auVar70._20_4_ ^ __real_80000000;
      uStack_370._0_4_ = auVar70._24_4_ ^ __real_80000000;
      uStack_370._4_4_ = auVar70._28_4_ ^ __real_80000000;
      auVar70 = vcvtps2pd_avx(auVar111._0_16_);
      auVar149 = vcvtps2pd_avx(auVar111._16_16_);
      dVar263 = param_4 * auVar207._0_8_ - dVar201;
      dVar271 = param_4 * auVar207._8_8_ - dVar201;
      dVar275 = param_4 * auVar207._16_8_ - dVar201;
      dVar279 = param_4 * auVar207._24_8_ - dVar201;
      dVar282 = param_4 * auVar163._0_8_ - dVar201;
      dVar288 = param_4 * auVar163._8_8_ - dVar201;
      dVar290 = param_4 * auVar163._16_8_ - dVar201;
      dVar201 = param_4 * auVar163._24_8_ - dVar201;
      auVar163 = vcvtps2pd_avx(auVar151._0_16_);
      auVar207 = vcvtps2pd_avx(auVar151._16_16_);
      dVar292 = param_4 * auVar149._0_8_ - dVar214;
      dVar295 = param_4 * auVar149._8_8_ - dVar214;
      dVar120 = param_4 * auVar149._16_8_ - dVar214;
      dVar199 = param_4 * auVar149._24_8_ - dVar214;
      dVar203 = param_4 * auVar70._0_8_ - dVar214;
      dVar212 = param_4 * auVar70._8_8_ - dVar214;
      dVar216 = param_4 * auVar70._16_8_ - dVar214;
      dVar214 = param_4 * auVar70._24_8_ - dVar214;
      dVar141 = param_4 * auVar207._0_8_ - dVar277;
      dVar236 = param_4 * auVar207._8_8_ - dVar277;
      dVar238 = param_4 * auVar207._16_8_ - dVar277;
      dVar240 = param_4 * auVar207._24_8_ - dVar277;
      dVar157 = param_4 * auVar163._0_8_ - dVar277;
      dVar252 = param_4 * auVar163._8_8_ - dVar277;
      dVar253 = param_4 * auVar163._16_8_ - dVar277;
      dVar277 = param_4 * auVar163._24_8_ - dVar277;
      auVar70 = vpermpd_avx2(auVar218,0x55);
      dVar273 = auVar70._0_8_;
      dVar274 = auVar70._8_8_;
      dVar278 = auVar70._16_8_;
      dVar239 = auVar70._24_8_;
      dVar188 = auVar218._0_8_ * dVar292 - dVar273 * dVar263;
      dVar202 = auVar218._0_8_ * dVar295 - dVar274 * dVar271;
      dVar281 = auVar218._0_8_ * dVar120 - dVar278 * dVar275;
      dVar296 = auVar218._0_8_ * dVar199 - dVar239 * dVar279;
      auVar70 = vpermpd_avx2(auVar218,0xaa);
      dVar242 = auVar70._0_8_;
      dVar254 = auVar70._8_8_;
      dVar257 = auVar70._16_8_;
      dVar260 = auVar70._24_8_;
      dVar215 = dVar273 * dVar141 - dVar242 * dVar292;
      dVar237 = dVar274 * dVar236 - dVar254 * dVar295;
      dVar171 = dVar278 * dVar238 - dVar257 * dVar120;
      dVar183 = dVar239 * dVar240 - dVar260 * dVar199;
      dVar293 = dVar242 * dVar263 - auVar218._0_8_ * dVar141;
      dVar187 = dVar254 * dVar271 - auVar218._0_8_ * dVar236;
      dVar197 = dVar257 * dVar275 - auVar218._0_8_ * dVar238;
      dVar124 = dVar260 * dVar279 - auVar218._0_8_ * dVar240;
      dVar215 = dVar215 + dVar215;
      dVar237 = dVar237 + dVar237;
      dVar171 = dVar171 + dVar171;
      dVar183 = dVar183 + dVar183;
      dVar293 = dVar293 + dVar293;
      dVar187 = dVar187 + dVar187;
      dVar197 = dVar197 + dVar197;
      dVar124 = dVar124 + dVar124;
      dVar188 = dVar188 + dVar188;
      dVar202 = dVar202 + dVar202;
      dVar281 = dVar281 + dVar281;
      dVar296 = dVar296 + dVar296;
      auVar70 = vpermpd_avx2(auVar218,0xff);
      dVar264 = auVar70._0_8_;
      dVar272 = auVar70._8_8_;
      dVar276 = auVar70._16_8_;
      dVar280 = auVar70._24_8_;
      auVar70 = vcvtps2pd_avx(auVar46._16_16_);
      auVar163 = vcvtps2pd_avx(auVar19);
      auVar207 = vcvtps2pd_avx(auVar302._16_16_);
      dVar76 = auVar218._0_8_ * dVar203 - dVar273 * dVar282;
      dVar94 = auVar218._0_8_ * dVar212 - dVar274 * dVar288;
      dVar97 = auVar218._0_8_ * dVar216 - dVar278 * dVar290;
      dVar119 = auVar218._0_8_ * dVar214 - dVar239 * dVar201;
      dVar233 = dVar273 * dVar157 - dVar242 * dVar203;
      dVar156 = dVar274 * dVar252 - dVar254 * dVar212;
      dVar172 = dVar278 * dVar253 - dVar257 * dVar216;
      dVar184 = dVar239 * dVar277 - dVar260 * dVar214;
      dVar196 = dVar242 * dVar282 - auVar218._0_8_ * dVar157;
      dVar209 = dVar254 * dVar288 - auVar218._0_8_ * dVar252;
      dVar287 = dVar257 * dVar290 - auVar218._0_8_ * dVar253;
      dVar303 = dVar260 * dVar201 - auVar218._0_8_ * dVar277;
      dVar233 = dVar233 + dVar233;
      dVar156 = dVar156 + dVar156;
      dVar172 = dVar172 + dVar172;
      dVar184 = dVar184 + dVar184;
      dVar196 = dVar196 + dVar196;
      dVar209 = dVar209 + dVar209;
      dVar287 = dVar287 + dVar287;
      dVar303 = dVar303 + dVar303;
      dVar76 = dVar76 + dVar76;
      dVar94 = dVar94 + dVar94;
      dVar97 = dVar97 + dVar97;
      dVar119 = dVar119 + dVar119;
      auVar151 = vcvtps2pd_avx(auVar299);
      auVar149 = vcvtps2pd_avx(local_388._16_16_);
      auVar87 = vcvtps2pd_avx(_local_388);
      dVar49 = auVar70._0_8_;
      dVar75 = auVar70._8_8_;
      dVar96 = auVar70._16_8_;
      dVar118 = auVar70._24_8_;
      dVar297 = auVar207._0_8_;
      dVar210 = auVar218._0_8_ * dVar297 - dVar273 * dVar49;
      dVar304 = auVar207._8_8_;
      dVar138 = auVar218._0_8_ * dVar304 - dVar274 * dVar75;
      dVar306 = auVar207._16_8_;
      dVar139 = auVar218._0_8_ * dVar306 - dVar278 * dVar96;
      dVar308 = auVar207._24_8_;
      dVar234 = auVar218._0_8_ * dVar308 - dVar239 * dVar118;
      dVar140 = auVar163._0_8_;
      dVar155 = auVar163._8_8_;
      dVar116 = auVar163._16_8_;
      dVar122 = auVar163._24_8_;
      dVar198 = auVar151._0_8_;
      dVar294 = auVar218._0_8_ * dVar198 - dVar273 * dVar140;
      dVar211 = auVar151._8_8_;
      dVar189 = auVar218._0_8_ * dVar211 - dVar274 * dVar155;
      dVar289 = auVar151._16_8_;
      dVar121 = auVar218._0_8_ * dVar289 - dVar278 * dVar116;
      dVar305 = auVar151._24_8_;
      dVar125 = auVar218._0_8_ * dVar305 - dVar239 * dVar122;
      dVar261 = auVar149._0_8_;
      dVar200 = dVar273 * dVar261 - dVar242 * dVar297;
      dVar262 = auVar149._8_8_;
      dVar213 = dVar274 * dVar262 - dVar254 * dVar304;
      dVar269 = auVar149._16_8_;
      dVar291 = dVar278 * dVar269 - dVar257 * dVar306;
      dVar270 = auVar149._24_8_;
      dVar307 = dVar239 * dVar270 - dVar260 * dVar308;
      dVar256 = auVar87._0_8_;
      dVar241 = dVar273 * dVar256 - dVar242 * dVar198;
      dVar258 = auVar87._8_8_;
      dVar170 = dVar274 * dVar258 - dVar254 * dVar211;
      dVar185 = auVar87._16_8_;
      dVar255 = dVar278 * dVar185 - dVar257 * dVar289;
      dVar259 = auVar87._24_8_;
      dVar173 = dVar239 * dVar259 - dVar260 * dVar305;
      dVar235 = dVar242 * dVar49 - auVar218._0_8_ * dVar261;
      dVar169 = dVar254 * dVar75 - auVar218._0_8_ * dVar262;
      dVar174 = dVar257 * dVar96 - auVar218._0_8_ * dVar269;
      dVar186 = dVar260 * dVar118 - auVar218._0_8_ * dVar270;
      dVar93 = dVar242 * dVar140 - auVar218._0_8_ * dVar256;
      dVar95 = dVar254 * dVar155 - auVar218._0_8_ * dVar258;
      dVar117 = dVar257 * dVar116 - auVar218._0_8_ * dVar185;
      dVar123 = dVar260 * dVar122 - auVar218._0_8_ * dVar259;
      dVar241 = dVar241 + dVar241;
      dVar170 = dVar170 + dVar170;
      dVar255 = dVar255 + dVar255;
      dVar173 = dVar173 + dVar173;
      dVar200 = dVar200 + dVar200;
      dVar213 = dVar213 + dVar213;
      dVar291 = dVar291 + dVar291;
      dVar307 = dVar307 + dVar307;
      dVar93 = dVar93 + dVar93;
      dVar95 = dVar95 + dVar95;
      dVar117 = dVar117 + dVar117;
      dVar123 = dVar123 + dVar123;
      dVar235 = dVar235 + dVar235;
      dVar169 = dVar169 + dVar169;
      dVar174 = dVar174 + dVar174;
      dVar186 = dVar186 + dVar186;
      dVar294 = dVar294 + dVar294;
      dVar189 = dVar189 + dVar189;
      dVar121 = dVar121 + dVar121;
      dVar125 = dVar125 + dVar125;
      dVar210 = dVar210 + dVar210;
      dVar138 = dVar138 + dVar138;
      dVar139 = dVar139 + dVar139;
      dVar234 = dVar234 + dVar234;
      auVar194._0_8_ =
           dVar48 * ((dVar273 * dVar188 - dVar242 * dVar293) + dVar264 * dVar215 + dVar263);
      auVar194._8_8_ =
           dVar48 * ((dVar274 * dVar202 - dVar254 * dVar187) + dVar272 * dVar237 + dVar271);
      auVar194._16_8_ =
           dVar48 * ((dVar278 * dVar281 - dVar257 * dVar197) + dVar276 * dVar171 + dVar275);
      auVar194._24_8_ =
           dVar48 * ((dVar239 * dVar296 - dVar260 * dVar124) + dVar280 * dVar183 + dVar279);
      auVar227._0_8_ =
           dVar48 * ((dVar273 * dVar76 - dVar242 * dVar196) + dVar264 * dVar233 + dVar282);
      auVar227._8_8_ =
           dVar48 * ((dVar274 * dVar94 - dVar254 * dVar209) + dVar272 * dVar156 + dVar288);
      auVar227._16_8_ =
           dVar48 * ((dVar278 * dVar97 - dVar257 * dVar287) + dVar276 * dVar172 + dVar290);
      auVar227._24_8_ =
           dVar48 * ((dVar239 * dVar119 - dVar260 * dVar303) + dVar280 * dVar184 + dVar201);
      auVar91._0_8_ =
           dVar48 * ((dVar273 * dVar210 - dVar242 * dVar235) + dVar264 * dVar200 + dVar49);
      auVar91._8_8_ =
           dVar48 * ((dVar274 * dVar138 - dVar254 * dVar169) + dVar272 * dVar213 + dVar75);
      auVar91._16_8_ =
           dVar48 * ((dVar278 * dVar139 - dVar257 * dVar174) + dVar276 * dVar291 + dVar96);
      auVar91._24_8_ =
           dVar48 * ((dVar239 * dVar234 - dVar260 * dVar186) + dVar280 * dVar307 + dVar118);
      auVar73._0_8_ =
           dVar48 * ((dVar273 * dVar294 - dVar242 * dVar93) + dVar264 * dVar241 + dVar140);
      auVar73._8_8_ =
           dVar48 * ((dVar274 * dVar189 - dVar254 * dVar95) + dVar272 * dVar170 + dVar155);
      auVar73._16_8_ =
           dVar48 * ((dVar278 * dVar121 - dVar257 * dVar117) + dVar276 * dVar255 + dVar116);
      auVar73._24_8_ =
           dVar48 * ((dVar239 * dVar125 - dVar260 * dVar123) + dVar280 * dVar173 + dVar122);
      auVar208._0_8_ =
           local_188 *
           ((dVar242 * dVar215 - auVar218._0_8_ * dVar188) + dVar264 * dVar293 + dVar292);
      auVar208._8_8_ =
           dStack_180 *
           ((dVar254 * dVar237 - auVar218._0_8_ * dVar202) + dVar272 * dVar187 + dVar295);
      auVar208._16_8_ =
           dStack_178 *
           ((dVar257 * dVar171 - auVar218._0_8_ * dVar281) + dVar276 * dVar197 + dVar120);
      auVar208._24_8_ =
           dStack_170 *
           ((dVar260 * dVar183 - auVar218._0_8_ * dVar296) + dVar280 * dVar124 + dVar199);
      auVar154._0_8_ =
           local_188 * ((dVar242 * dVar233 - auVar218._0_8_ * dVar76) + dVar264 * dVar196 + dVar203)
      ;
      auVar154._8_8_ =
           dStack_180 *
           ((dVar254 * dVar156 - auVar218._0_8_ * dVar94) + dVar272 * dVar209 + dVar212);
      auVar154._16_8_ =
           dStack_178 *
           ((dVar257 * dVar172 - auVar218._0_8_ * dVar97) + dVar276 * dVar287 + dVar216);
      auVar154._24_8_ =
           dStack_170 *
           ((dVar260 * dVar184 - auVar218._0_8_ * dVar119) + dVar280 * dVar303 + dVar214);
      auVar136._0_8_ =
           local_188 *
           (dVar264 * dVar235 + dVar297 + (dVar242 * dVar200 - auVar218._0_8_ * dVar210));
      auVar136._8_8_ =
           dStack_180 *
           (dVar272 * dVar169 + dVar304 + (dVar254 * dVar213 - auVar218._0_8_ * dVar138));
      auVar136._16_8_ =
           dStack_178 *
           (dVar276 * dVar174 + dVar306 + (dVar257 * dVar291 - auVar218._0_8_ * dVar139));
      auVar136._24_8_ =
           dStack_170 *
           (dVar280 * dVar186 + dVar308 + (dVar260 * dVar307 - auVar218._0_8_ * dVar234));
      auVar249._0_8_ =
           local_188 * (dVar264 * dVar93 + dVar198 + (dVar242 * dVar241 - auVar218._0_8_ * dVar294))
      ;
      auVar249._8_8_ =
           dStack_180 *
           (dVar272 * dVar95 + dVar211 + (dVar254 * dVar170 - auVar218._0_8_ * dVar189));
      auVar249._16_8_ =
           dStack_178 *
           (dVar276 * dVar117 + dVar289 + (dVar257 * dVar255 - auVar218._0_8_ * dVar121));
      auVar249._24_8_ =
           dStack_170 *
           (dVar280 * dVar123 + dVar305 + (dVar260 * dVar173 - auVar218._0_8_ * dVar125));
      auVar114._0_8_ =
           local_3a8 *
           ((auVar218._0_8_ * dVar293 - dVar273 * dVar215) + dVar264 * dVar188 + dVar141);
      auVar114._8_8_ =
           dStack_3a0 *
           ((auVar218._0_8_ * dVar187 - dVar274 * dVar237) + dVar272 * dVar202 + dVar236);
      auVar114._16_8_ =
           dStack_398 *
           ((auVar218._0_8_ * dVar197 - dVar278 * dVar171) + dVar276 * dVar281 + dVar238);
      auVar114._24_8_ =
           dStack_390 *
           ((auVar218._0_8_ * dVar124 - dVar239 * dVar183) + dVar280 * dVar296 + dVar240);
      auVar166._0_8_ =
           local_3a8 * ((auVar218._0_8_ * dVar196 - dVar273 * dVar233) + dVar264 * dVar76 + dVar157)
      ;
      auVar166._8_8_ =
           dStack_3a0 *
           ((auVar218._0_8_ * dVar209 - dVar274 * dVar156) + dVar272 * dVar94 + dVar252);
      auVar166._16_8_ =
           dStack_398 *
           ((auVar218._0_8_ * dVar287 - dVar278 * dVar172) + dVar276 * dVar97 + dVar253);
      auVar166._24_8_ =
           dStack_390 *
           ((auVar218._0_8_ * dVar303 - dVar239 * dVar184) + dVar280 * dVar119 + dVar277);
      auVar268._0_8_ =
           local_3a8 *
           (dVar264 * dVar210 + dVar261 + (auVar218._0_8_ * dVar235 - dVar273 * dVar200));
      auVar268._8_8_ =
           dStack_3a0 *
           (dVar272 * dVar138 + dVar262 + (auVar218._0_8_ * dVar169 - dVar274 * dVar213));
      auVar268._16_8_ =
           dStack_398 *
           (dVar276 * dVar139 + dVar269 + (auVar218._0_8_ * dVar174 - dVar278 * dVar291));
      auVar268._24_8_ =
           dStack_390 *
           (dVar280 * dVar234 + dVar270 + (auVar218._0_8_ * dVar186 - dVar239 * dVar307));
      auVar142 = vcvtpd2ps_avx(auVar227);
      auVar78 = vcvtpd2ps_avx(auVar194);
      auVar228._0_8_ =
           local_3a8 * (dVar294 * dVar264 + dVar256 + (auVar218._0_8_ * dVar93 - dVar273 * dVar241))
      ;
      auVar228._8_8_ =
           dStack_3a0 *
           (dVar189 * dVar272 + dVar258 + (auVar218._0_8_ * dVar95 - dVar274 * dVar170));
      auVar228._16_8_ =
           dStack_398 *
           (dVar121 * dVar276 + dVar185 + (auVar218._0_8_ * dVar117 - dVar278 * dVar255));
      auVar228._24_8_ =
           dStack_390 *
           (dVar125 * dVar280 + dVar259 + (auVar218._0_8_ * dVar123 - dVar239 * dVar173));
      auVar195._16_16_ = auVar78;
      auVar195._0_16_ = auVar142;
      auVar19 = vcvtpd2ps_avx(auVar154);
      auVar99 = vcvtpd2ps_avx(auVar208);
      auVar158 = vcvtpd2ps_avx(auVar166);
      auVar182._16_16_ = auVar99;
      auVar182._0_16_ = auVar19;
      auVar299 = vcvtpd2ps_avx(auVar114);
      auVar167._16_16_ = auVar299;
      auVar167._0_16_ = auVar158;
      auVar98 = vcvtpd2ps_avx(auVar73);
      auVar79 = vcvtpd2ps_avx(auVar91);
      auVar50 = auVar100._0_16_;
      auVar126 = auVar100._16_16_;
      auVar115._16_16_ = auVar79;
      auVar115._0_16_ = auVar98;
      auVar175 = vcvtpd2ps_avx(auVar249);
      auVar204 = vpackssdw_avx(auVar50,auVar126);
      auVar80 = vcvtpd2ps_avx(auVar136);
      auVar92._16_16_ = auVar80;
      auVar92._0_16_ = auVar175;
      auVar159 = vcvtpd2ps_avx(auVar228);
      auVar77 = vcvtpd2ps_avx(auVar268);
      auVar265 = vpmovzxbw_avx(auVar17);
      auVar204 = vpand_avx(auVar265,auVar204);
      auVar204 = vpand_avx(auVar204,___xmm_00010001000100010001000100010001);
      auVar74._16_16_ = auVar77;
      auVar74._0_16_ = auVar159;
      auVar190 = vpsllw_avx(auVar204,0xf);
      auVar217 = auVar17;
      if ((((((((SUB161(auVar190 >> 0xf,0) & 1) != 0 || (SUB161(auVar190 >> 0x1f,0) & 1) != 0) ||
              (SUB161(auVar190 >> 0x2f,0) & 1) != 0) || (SUB161(auVar190 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar190 >> 0x4f,0) & 1) != 0) || (SUB161(auVar190 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar190 >> 0x6f,0) & 1) != 0) || auVar190[0xf] < '\0') {
        auVar70 = vpmovzxwd_avx2(auVar265);
        auVar70 = vpslld_avx2(auVar70,0x1f);
        auVar70 = vpsrad_avx2(auVar70,0x1f);
        auVar70 = vpand_avx2(auVar100,auVar70);
        auVar190._0_8_ = CONCAT44(__real_7f800000,__real_7f800000);
        auVar190._8_4_ = __real_7f800000;
        auVar190._12_4_ = __real_7f800000;
        auVar129._16_4_ = __real_7f800000;
        auVar129._0_16_ = auVar190;
        auVar129._20_4_ = __real_7f800000;
        auVar137._24_4_ = __real_7f800000;
        auVar137._0_24_ = auVar129;
        auVar137._28_4_ = __real_7f800000;
        auVar229._0_8_ = auVar142._0_8_ & auVar190._0_8_;
        uVar2 = auVar190._8_8_;
        auVar229._8_8_ = auVar142._8_8_ & uVar2;
        uVar3 = auVar129._16_8_;
        auVar229._16_8_ = auVar78._0_8_ & uVar3;
        uVar4 = auVar137._24_8_;
        auVar229._24_8_ = auVar78._8_8_ & uVar4;
        auVar163 = vpcmpeqd_avx2(auVar229,auVar137);
        auVar207 = vpcmpeqd_avx2(auVar229,auVar229);
        auVar217 = vpackssdw_avx(SUB3216(auVar163 ^ auVar207,0),SUB3216(auVar163 ^ auVar207,0x10));
        auVar265 = vpand_avx(auVar217,auVar204);
        auVar265 = vpsllw_avx(auVar265,0xf);
        if ((((((((SUB161(auVar265 >> 0xf,0) & 1) != 0 || (SUB161(auVar265 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar265 >> 0x2f,0) & 1) != 0) || (SUB161(auVar265 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar265 >> 0x4f,0) & 1) != 0) || (SUB161(auVar265 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar265 >> 0x6f,0) & 1) != 0) || auVar265[0xf] < '\0') {
          auVar163 = vblendvps_avx(auVar70,auVar137,auVar163);
          auVar250._0_8_ = auVar19._0_8_ & auVar190._0_8_;
          auVar250._8_8_ = auVar19._8_8_ & uVar2;
          auVar250._16_8_ = auVar99._0_8_ & uVar3;
          auVar250._24_8_ = auVar99._8_8_ & uVar4;
          auVar207 = vpcmpeqd_avx2(auVar250,auVar137);
          auVar163 = vblendvps_avx(auVar163,auVar137,auVar207);
          auVar163 = vpshufb_avx2(auVar163,
                                  ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                 );
          auVar163 = vpermq_avx2(auVar163,0xe8);
          auVar217 = auVar163._0_16_;
          auVar204 = vpand_avx(auVar204,auVar217);
          auVar204 = vpsllw_avx(auVar204,0xf);
          if ((((((((SUB161(auVar204 >> 0xf,0) & 1) != 0 || (SUB161(auVar204 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar204 >> 0x2f,0) & 1) != 0) || (SUB161(auVar204 >> 0x3f,0) & 1) != 0
                 ) || (SUB161(auVar204 >> 0x4f,0) & 1) != 0) ||
               (SUB161(auVar204 >> 0x5f,0) & 1) != 0) || (SUB161(auVar204 >> 0x6f,0) & 1) != 0) ||
              auVar204[0xf] < '\0') {
            auVar163 = vpmovzxwd_avx2(auVar217);
            auVar163 = vpslld_avx2(auVar163,0x1f);
            auVar163 = vpsrad_avx2(auVar163,0x1f);
            auVar163 = vpand_avx2(auVar163,auVar70);
            auVar230._0_8_ = auVar158._0_8_ & auVar190._0_8_;
            auVar230._8_8_ = auVar158._8_8_ & uVar2;
            auVar230._16_8_ = auVar299._0_8_ & uVar3;
            auVar230._24_8_ = auVar299._8_8_ & uVar4;
            auVar207 = vpcmpeqd_avx2(auVar230,auVar137);
            auVar163 = vblendvps_avx(auVar163,auVar137,auVar207);
            auVar163 = vpshufb_avx2(auVar163,
                                    ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                   );
            auVar163 = vpermq_avx2(auVar163,0xe8);
            auVar217 = auVar163._0_16_;
          }
        }
        auVar265 = vpackssdw_avx(auVar50,auVar126);
        auVar217 = vpshufb_avx(auVar217,___xmm_00000000000000000e0c0a0806040200);
        auVar204 = vpackssdw_avx(auVar70._0_16_,auVar70._16_16_);
        auVar217 = vpsllw_avx(auVar217,7);
        auVar217 = vpand_avx(auVar217,___xmm_80808080808080808080808080808080);
        auVar204 = vpacksswb_avx(auVar204,auVar204);
        auVar217 = vpcmpgtb_avx((undefined1  [16])0x0,auVar217);
        auVar217 = vpand_avx(auVar217,auVar204);
        auVar143 = vpmovzxbw_avx(auVar217);
        auVar204 = vpand_avx(auVar143,auVar265);
        auVar204 = vpand_avx(auVar204,___xmm_00010001000100010001000100010001);
        auVar265 = vpsllw_avx(auVar204,0xf);
        if ((((((((SUB161(auVar265 >> 0xf,0) & 1) != 0 || (SUB161(auVar265 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar265 >> 0x2f,0) & 1) != 0) || (SUB161(auVar265 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar265 >> 0x4f,0) & 1) != 0) || (SUB161(auVar265 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar265 >> 0x6f,0) & 1) != 0) || auVar265[0xf] < '\0') {
          auVar70 = vpmovzxwd_avx2(auVar143);
          auVar70 = vpslld_avx2(auVar70,0x1f);
          auVar70 = vpsrad_avx2(auVar70,0x1f);
          auVar100 = vpand_avx2(auVar100,auVar70);
          auVar231._0_8_ = auVar98._0_8_ & auVar190._0_8_;
          auVar231._8_8_ = auVar98._8_8_ & uVar2;
          auVar231._16_8_ = auVar79._0_8_ & uVar3;
          auVar231._24_8_ = auVar79._8_8_ & uVar4;
          auVar70 = vpcmpeqd_avx2(auVar231,auVar137);
          auVar163 = vpcmpeqd_avx2(auVar231,auVar231);
          auVar217 = vpackssdw_avx(SUB3216(auVar70 ^ auVar163,0),SUB3216(auVar70 ^ auVar163,0x10));
          auVar265 = vpand_avx(auVar204,auVar217);
          auVar265 = vpsllw_avx(auVar265,0xf);
          if ((((((((SUB161(auVar265 >> 0xf,0) & 1) != 0 || (SUB161(auVar265 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar265 >> 0x2f,0) & 1) != 0) || (SUB161(auVar265 >> 0x3f,0) & 1) != 0
                 ) || (SUB161(auVar265 >> 0x4f,0) & 1) != 0) ||
               (SUB161(auVar265 >> 0x5f,0) & 1) != 0) || (SUB161(auVar265 >> 0x6f,0) & 1) != 0) ||
              auVar265[0xf] < '\0') {
            auVar70 = vblendvps_avx(auVar100,auVar137,auVar70);
            auVar251._0_8_ = auVar175._0_8_ & auVar190._0_8_;
            auVar251._8_8_ = auVar175._8_8_ & uVar2;
            auVar251._16_8_ = auVar80._0_8_ & uVar3;
            auVar251._24_8_ = auVar80._8_8_ & uVar4;
            auVar163 = vpcmpeqd_avx2(auVar251,auVar137);
            auVar70 = vblendvps_avx(auVar70,auVar137,auVar163);
            auVar70 = vpshufb_avx2(auVar70,
                                   ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                  );
            auVar70 = vpermq_avx2(auVar70,0xe8);
            auVar217 = auVar70._0_16_;
            auVar204 = vpand_avx(auVar204,auVar217);
            auVar204 = vpsllw_avx(auVar204,0xf);
            if ((((((((SUB161(auVar204 >> 0xf,0) & 1) != 0 || (SUB161(auVar204 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar204 >> 0x2f,0) & 1) != 0) ||
                   (SUB161(auVar204 >> 0x3f,0) & 1) != 0) || (SUB161(auVar204 >> 0x4f,0) & 1) != 0)
                 || (SUB161(auVar204 >> 0x5f,0) & 1) != 0) || (SUB161(auVar204 >> 0x6f,0) & 1) != 0)
                || auVar204[0xf] < '\0') {
              auVar70 = vpmovzxwd_avx2(auVar217);
              auVar70 = vpslld_avx2(auVar70,0x1f);
              auVar70 = vpsrad_avx2(auVar70,0x1f);
              auVar70 = vpand_avx2(auVar70,auVar100);
              auVar232._0_8_ = auVar159._0_8_ & auVar190._0_8_;
              auVar232._8_8_ = auVar159._8_8_ & uVar2;
              auVar232._16_8_ = auVar77._0_8_ & uVar3;
              auVar232._24_8_ = auVar77._8_8_ & uVar4;
              auVar163 = vpcmpeqd_avx2(auVar232,auVar137);
              auVar70 = vblendvps_avx(auVar70,auVar137,auVar163);
              auVar70 = vpshufb_avx2(auVar70,
                                     ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                    );
              auVar70 = vpermq_avx2(auVar70,0xe8);
              auVar217 = auVar70._0_16_;
            }
          }
          auVar217 = vpshufb_avx(auVar217,___xmm_00000000000000000e0c0a0806040200);
          auVar204 = vpackssdw_avx(auVar100._0_16_,auVar100._16_16_);
          auVar217 = vpsllw_avx(auVar217,7);
          auVar217 = vpand_avx(auVar217,___xmm_80808080808080808080808080808080);
          auVar204 = vpacksswb_avx(auVar204,auVar204);
          auVar217 = vpcmpgtb_avx((undefined1  [16])0x0,auVar217);
          auVar217 = vpand_avx(auVar217,auVar204);
        }
      }
      auVar204 = vpackssdw_avx(auVar50,auVar126);
      auVar204 = vpacksswb_avx(auVar204,auVar204);
      auVar217 = vpand_avx(auVar217,___xmm_00000000000000000101010101010101);
      cVar8 = (char)uVar9;
      if (cVar8 == -1) {
        auVar47._16_16_ = auVar19;
        auVar47._0_16_ = auVar142;
        auVar100 = vshufpd_avx(auVar195,auVar47,2);
        auVar163 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                                ,auVar167);
        auVar70 = vpermpd_avx2(auVar182,0xe9);
        auVar70 = vpblendd_avx2(auVar163,auVar70,7);
        auVar163 = vpermd_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                               ,auVar70);
        auVar100 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                                ,auVar100);
        auVar100 = vpblendd_avx2(auVar100,auVar163,0xa4);
        *pauVar1 = auVar100;
        auVar163 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
        auVar70 = vpermd_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar70);
        auVar100 = vshufpd_avx(auVar195,auVar195,1);
        auVar100 = vpblendd_avx2(auVar70,auVar100,0x92);
        pauVar1[1] = auVar100;
        auVar151 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
        auVar207 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
        auVar70 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                               ,auVar182);
        auVar100 = vpermpd_avx2(auVar195,0xff);
        auVar100 = vblendpd_avx(auVar70,auVar100,1);
        auVar100 = vblendps_avx(auVar100,auVar167,0xe0);
        auVar100 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                                ,auVar100);
        pauVar1[2] = auVar100;
        auVar168._16_16_ = auVar175;
        auVar168._0_16_ = auVar98;
        auVar100 = vshufpd_avx(auVar115,auVar168,2);
        auVar70 = vpermps_avx2(auVar103,auVar74);
        auVar103 = vpermpd_avx2(auVar92,0xe9);
        auVar103 = vpblendd_avx2(auVar70,auVar103,7);
        auVar130 = vpermd_avx2(auVar130,auVar103);
        auVar61 = vpermps_avx2(auVar61,auVar100);
        auVar130 = vpblendd_avx2(auVar61,auVar130,0xa4);
        *pauVar14 = auVar130;
        auVar130 = vpermd_avx2(auVar163,auVar103);
        auVar103 = vshufpd_avx(auVar115,auVar115,1);
        auVar103 = vpblendd_avx2(auVar130,auVar103,0x92);
        *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc) = auVar103;
        auVar130 = vpermps_avx2(auVar207,auVar92);
        auVar103 = vpermpd_avx2(auVar115,0xff);
        auVar103 = vblendpd_avx(auVar130,auVar103,1);
        auVar103 = vblendps_avx(auVar103,auVar74,0xe0);
        auVar103 = vpermps_avx2(auVar151,auVar103);
        *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc) = auVar103;
      }
      else {
        if ((uVar9 & 1) != 0) {
          *(int *)*pauVar1 = auVar142._0_4_;
        }
        if ((uVar9 & 2) != 0) {
          uVar12 = vextractps_avx(auVar142,1);
          *(undefined4 *)(*pauVar1 + 0xc) = uVar12;
        }
        if ((uVar9 & 4) != 0) {
          uVar12 = vextractps_avx(auVar142,2);
          *(undefined4 *)(*pauVar1 + 0x18) = uVar12;
        }
        if ((uVar9 & 8) != 0) {
          uVar12 = vextractps_avx(auVar142,3);
          *(undefined4 *)(pauVar1[1] + 4) = uVar12;
        }
        if ((uVar9 & 0x10) != 0) {
          *(int *)(pauVar1[1] + 0x10) = auVar78._0_4_;
        }
        if ((uVar9 & 0x20) != 0) {
          uVar12 = vextractps_avx(auVar78,1);
          *(undefined4 *)(pauVar1[1] + 0x1c) = uVar12;
        }
        if ((uVar9 & 0x40) != 0) {
          uVar12 = vextractps_avx(auVar78,2);
          *(undefined4 *)(pauVar1[2] + 8) = uVar12;
        }
        if (cVar8 < '\0') {
          uVar12 = vextractps_avx(auVar78,3);
          *(undefined4 *)(pauVar1[2] + 0x14) = uVar12;
        }
        if ((uVar9 & 1) != 0) {
          *(int *)(*pauVar1 + 4) = auVar19._0_4_;
        }
        if ((uVar9 & 2) != 0) {
          uVar12 = vextractps_avx(auVar19,1);
          *(undefined4 *)(*pauVar1 + 0x10) = uVar12;
        }
        if ((uVar9 & 4) != 0) {
          uVar12 = vextractps_avx(auVar19,2);
          *(undefined4 *)(*pauVar1 + 0x1c) = uVar12;
        }
        if ((uVar9 & 8) != 0) {
          uVar12 = vextractps_avx(auVar19,3);
          *(undefined4 *)(pauVar1[1] + 8) = uVar12;
        }
        if ((uVar9 & 0x10) != 0) {
          *(int *)(pauVar1[1] + 0x14) = auVar99._0_4_;
        }
        if ((uVar9 & 0x20) != 0) {
          uVar12 = vextractps_avx(auVar99,1);
          *(undefined4 *)pauVar1[2] = uVar12;
        }
        if ((uVar9 & 0x40) != 0) {
          uVar12 = vextractps_avx(auVar99,2);
          *(undefined4 *)(pauVar1[2] + 0xc) = uVar12;
        }
        if (cVar8 < '\0') {
          uVar12 = vextractps_avx(auVar99,3);
          *(undefined4 *)(pauVar1[2] + 0x18) = uVar12;
        }
        if ((uVar9 & 1) != 0) {
          *(int *)(*pauVar1 + 8) = auVar158._0_4_;
        }
        if ((uVar9 & 2) != 0) {
          uVar12 = vextractps_avx(auVar158,1);
          *(undefined4 *)(*pauVar1 + 0x14) = uVar12;
        }
        if ((uVar9 & 4) != 0) {
          uVar12 = vextractps_avx(auVar158,2);
          *(undefined4 *)pauVar1[1] = uVar12;
        }
        if ((uVar9 & 8) != 0) {
          uVar12 = vextractps_avx(auVar158,3);
          *(undefined4 *)(pauVar1[1] + 0xc) = uVar12;
        }
        if ((uVar9 & 0x10) != 0) {
          *(int *)(pauVar1[1] + 0x18) = auVar299._0_4_;
        }
        if ((uVar9 & 0x20) != 0) {
          uVar12 = vextractps_avx(auVar299,1);
          *(undefined4 *)(pauVar1[2] + 4) = uVar12;
        }
        if ((uVar9 & 0x40) != 0) {
          uVar12 = vextractps_avx(auVar299,2);
          *(undefined4 *)(pauVar1[2] + 0x10) = uVar12;
        }
        if (cVar8 < '\0') {
          uVar12 = vextractps_avx(auVar299,3);
          *(undefined4 *)(pauVar1[2] + 0x1c) = uVar12;
        }
        if ((uVar9 & 1) != 0) {
          *(int *)*pauVar14 = auVar98._0_4_;
        }
        if ((uVar9 & 2) != 0) {
          uVar12 = vextractps_avx(auVar98,1);
          *(undefined4 *)(param_2 + 0xc + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 4) != 0) {
          uVar12 = vextractps_avx(auVar98,2);
          *(undefined4 *)(param_2 + 0x18 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 8) != 0) {
          uVar12 = vextractps_avx(auVar98,3);
          *(undefined4 *)(param_2 + 0x24 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 0x10) != 0) {
          *(int *)(param_2 + 0x30 + uVar7 * 0xc) = auVar79._0_4_;
        }
        if ((uVar9 & 0x20) != 0) {
          uVar12 = vextractps_avx(auVar79,1);
          *(undefined4 *)(param_2 + 0x3c + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 0x40) != 0) {
          uVar12 = vextractps_avx(auVar79,2);
          *(undefined4 *)(param_2 + 0x48 + uVar7 * 0xc) = uVar12;
        }
        if (cVar8 < '\0') {
          uVar12 = vextractps_avx(auVar79,3);
          *(undefined4 *)(param_2 + 0x54 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 1) != 0) {
          *(int *)(param_2 + 4 + uVar7 * 0xc) = auVar175._0_4_;
        }
        if ((uVar9 & 2) != 0) {
          uVar12 = vextractps_avx(auVar175,1);
          *(undefined4 *)(param_2 + 0x10 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 4) != 0) {
          uVar12 = vextractps_avx(auVar175,2);
          *(undefined4 *)(param_2 + 0x1c + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 8) != 0) {
          uVar12 = vextractps_avx(auVar175,3);
          *(undefined4 *)(param_2 + 0x28 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 0x10) != 0) {
          *(int *)(param_2 + 0x34 + uVar7 * 0xc) = auVar80._0_4_;
        }
        if ((uVar9 & 0x20) != 0) {
          uVar12 = vextractps_avx(auVar80,1);
          *(undefined4 *)(param_2 + 0x40 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 0x40) != 0) {
          uVar12 = vextractps_avx(auVar80,2);
          *(undefined4 *)(param_2 + 0x4c + uVar7 * 0xc) = uVar12;
        }
        if (cVar8 < '\0') {
          uVar12 = vextractps_avx(auVar80,3);
          *(undefined4 *)(param_2 + 0x58 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 1) != 0) {
          *(int *)(param_2 + 8 + uVar7 * 0xc) = auVar159._0_4_;
        }
        if ((uVar9 & 2) != 0) {
          uVar12 = vextractps_avx(auVar159,1);
          *(undefined4 *)(param_2 + 0x14 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 4) != 0) {
          uVar12 = vextractps_avx(auVar159,2);
          *(undefined4 *)(param_2 + 0x20 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 8) != 0) {
          uVar12 = vextractps_avx(auVar159,3);
          *(undefined4 *)(param_2 + 0x2c + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 0x10) != 0) {
          *(int *)(param_2 + 0x38 + uVar7 * 0xc) = auVar77._0_4_;
        }
        if ((uVar9 & 0x20) != 0) {
          uVar12 = vextractps_avx(auVar77,1);
          *(undefined4 *)(param_2 + 0x44 + uVar7 * 0xc) = uVar12;
        }
        if ((uVar9 & 0x40) != 0) {
          uVar12 = vextractps_avx(auVar77,2);
          *(undefined4 *)(param_2 + 0x50 + uVar7 * 0xc) = uVar12;
        }
        if (cVar8 < '\0') {
          uVar12 = vextractps_avx(auVar77,3);
          *(undefined4 *)(param_2 + 0x5c + uVar7 * 0xc) = uVar12;
        }
      }
      auVar17 = vpblendvb_avx(auVar17,auVar217,auVar204);
    }
    auVar17 = vpand_avx(auVar17,___xmm_00000000000000000101010101010101);
    auVar17 = vpcmpeqb_avx(auVar17,ZEXT816(0));
    auVar17 = vpmovzxbw_avx(auVar17);
    goto LAB_140d23ffd;
  }
  auVar100 = vcmppd_avx(auVar130,auVar149,2);
  auVar61 = vpackssdw_avx2(auVar61,auVar100);
  auVar61 = vpermq_avx2(auVar61,0xd8);
  auVar61 = vblendvps_avx(auVar103,auVar130,auVar61);
  auVar100 = vpmovzxwd_avx2(auVar17);
  auVar100 = vpslld_avx2(auVar100,0x1f);
  auVar101 = vpsrad_avx2(auVar100,0x1f);
  auVar100 = vpand_avx2(auVar101,auVar61);
  iVar10 = vmovmskps_avx(auVar100);
  if (iVar10 == 0) {
    auVar100 = ZEXT832(0) << 0x20;
LAB_140d21092:
    auVar144._0_8_ = (ulonglong)dVar48 & __real_7fe0000000000000;
    auVar144._8_8_ = (ulonglong)dVar49 & __real_7fe0000000000000;
    auVar144._16_8_ = (ulonglong)dVar140 & __real_7fe0000000000000;
    auVar144._24_8_ = 0;
    auVar176._8_8_ = __real_7fcfffffffffffff;
    auVar176._0_8_ = __real_7fcfffffffffffff;
    auVar176._16_8_ = __real_7fcfffffffffffff;
    auVar176._24_8_ = __real_7fcfffffffffffff;
    auVar70 = vpsubq_avx2(auVar176,auVar144);
    auVar130 = vpsubq_avx2(auVar176,ZEXT832((ulonglong)dVar75 & __real_7fe0000000000000) << 0x40);
    auVar61 = vpcmpeqd_avx2(auVar176,auVar176);
    auVar81._0_8_ = auVar130._0_8_ * 0.0;
    auVar81._8_8_ = dVar75 * auVar130._8_8_;
    auVar81._16_8_ = auVar130._16_8_ * 0.0;
    auVar81._24_8_ = dVar155 * auVar130._24_8_;
    auVar160._0_8_ = dVar48 * auVar70._0_8_;
    auVar160._8_8_ = dVar49 * auVar70._8_8_;
    auVar160._16_8_ = dVar140 * auVar70._16_8_;
    auVar160._24_8_ = auVar70._24_8_ * 0.0;
    auVar17 = vcvtpd2ps_avx(auVar160);
    auVar142 = vcvtpd2ps_avx(auVar81);
    auVar82._16_16_ = auVar142;
    auVar82._0_16_ = auVar17;
    auVar130 = vrcpps_avx(auVar82);
    auVar77._0_4_ = auVar130._0_4_ * (-(auVar130._0_4_ * auVar17._0_4_) + __real_40000000);
    auVar77._4_4_ = auVar130._4_4_ * (-(auVar130._4_4_ * auVar17._4_4_) + __real_40000000);
    auVar77._8_4_ = auVar130._8_4_ * (-(auVar130._8_4_ * auVar17._8_4_) + __real_40000000);
    auVar77._12_4_ = auVar130._12_4_ * (-(auVar130._12_4_ * auVar17._12_4_) + __real_40000000);
    auVar130 = vcvtps2pd_avx(auVar77);
    dVar75 = auVar70._0_8_ * auVar130._0_8_;
    dVar155 = auVar70._8_8_ * auVar130._8_8_;
    dVar96 = auVar70._16_8_ * auVar130._16_8_;
    dVar116 = auVar70._24_8_ * auVar130._24_8_;
    dVar75 = dVar75 * (-(dVar48 * dVar75) + __real_4000000000000000);
    dVar155 = dVar155 * (-(dVar49 * dVar155) + __real_4000000000000000);
    dVar96 = dVar96 * (-(dVar140 * dVar96) + __real_4000000000000000);
    dVar116 = dVar116 * (-(dVar116 * 0.0) + __real_4000000000000000);
    auVar51._0_8_ = dVar75 * (-(dVar75 * dVar48) + __real_4000000000000000);
    auVar51._8_8_ = dVar155 * (-(dVar155 * dVar49) + __real_4000000000000000);
    auVar51._16_8_ = dVar96 * (-(dVar96 * dVar140) + __real_4000000000000000);
    auVar51._24_8_ = dVar116 * (-(dVar116 * 0.0) + __real_4000000000000000);
    auVar130 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                           auVar100 ^ auVar61);
    auVar101 = vblendvps_avx(auVar101,auVar51,auVar130);
  }
  else {
    auVar17 = vcvtpd2ps_avx(auVar151);
    auVar142 = vcvtpd2ps_avx(auVar130);
    auVar102._16_16_ = auVar142;
    auVar102._0_16_ = auVar17;
    auVar70 = vrcpps_avx(auVar102);
    auVar98._0_4_ = auVar70._0_4_ * (-(auVar70._0_4_ * auVar17._0_4_) + __real_40000000);
    auVar98._4_4_ = auVar70._4_4_ * (-(auVar70._4_4_ * auVar17._4_4_) + __real_40000000);
    auVar98._8_4_ = auVar70._8_4_ * (-(auVar70._8_4_ * auVar17._8_4_) + __real_40000000);
    auVar98._12_4_ = auVar70._12_4_ * (-(auVar70._12_4_ * auVar17._12_4_) + __real_40000000);
    auVar70 = vcvtps2pd_avx(auVar98);
    dVar96 = (-(dVar48 * auVar70._0_8_) + __real_4000000000000000) * auVar70._0_8_;
    dVar116 = (-(dVar49 * auVar70._8_8_) + __real_4000000000000000) * auVar70._8_8_;
    dVar118 = (-(dVar140 * auVar70._16_8_) + __real_4000000000000000) * auVar70._16_8_;
    dVar122 = (-(auVar70._24_8_ * 0.0) + __real_4000000000000000) * auVar70._24_8_;
    auVar101._0_8_ = dVar96 * (-(dVar48 * dVar96) + __real_4000000000000000);
    auVar101._8_8_ = dVar116 * (-(dVar49 * dVar116) + __real_4000000000000000);
    auVar101._16_8_ = dVar118 * (-(dVar140 * dVar118) + __real_4000000000000000);
    auVar101._24_8_ = dVar122 * (-(dVar122 * 0.0) + __real_4000000000000000);
    uVar12 = vmovmskps_avx(auVar61);
    if ((char)uVar12 != (char)iVar10) goto LAB_140d21092;
  }
  auVar61 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                        auVar207);
  auVar61 = vblendvps_avx(auVar101,SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar61);
  uVar11 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar11 = param_5;
  }
  auVar100 = vpermpd_avx2(auVar218,0x55);
  auVar70 = vpermpd_avx2(auVar218,0xaa);
  auVar163 = vpermpd_avx2(auVar218,0xff);
  auVar207 = vpermpd_avx2(auVar61,0x55);
  auVar151 = vpermpd_avx2(auVar61,0xaa);
  dStack_2c0 = auVar100._8_8_;
  dStack_2b8 = auVar100._16_8_;
  dStack_2b0 = auVar100._24_8_;
  dStack_360 = auVar70._8_8_;
  dStack_358 = auVar70._16_8_;
  dStack_350 = auVar70._24_8_;
  dStack_340 = auVar163._8_8_;
  dStack_338 = auVar163._16_8_;
  dStack_330 = auVar163._24_8_;
  dStack_320 = auVar207._8_8_;
  dStack_318 = auVar207._16_8_;
  dStack_310 = auVar207._24_8_;
  dStack_180 = auVar151._8_8_;
  dStack_178 = auVar151._16_8_;
  dStack_170 = auVar151._24_8_;
  dVar48 = auVar61._0_8_;
  local_2c8 = auVar100._0_8_;
  local_368 = auVar70._0_8_;
  local_348 = auVar163._0_8_;
  local_328 = auVar207._0_8_;
  local_188 = auVar151._0_8_;
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar13 = 0;
    auVar17 = vpcmpeqd_avx(auVar78,auVar78);
  }
  else {
    auVar17 = vpcmpeqd_avx(auVar78,auVar78);
    lVar15 = 0x40;
    uVar13 = 0;
    do {
      auVar87 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar149 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar151 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar130 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar15);
      auVar61 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar15);
      auVar100 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar61);
      auVar70 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar130);
      auVar100 = vblendps_avx(auVar70,auVar100,0x88);
      auVar70 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar61);
      auVar163 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_1 + lVar15));
      auVar70 = vblendps_avx(auVar163,auVar70,0x13);
      auVar130 = vblendps_avx(auVar61,auVar130,0x24);
      auVar130 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar130);
      auVar61 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_1 + lVar15));
      auVar130 = vblendps_avx(auVar130,auVar61,0xe0);
      auVar61 = vcvtps2pd_avx(auVar100._0_16_);
      auVar163 = vcvtps2pd_avx(auVar70._0_16_);
      auVar100 = vcvtps2pd_avx(auVar100._16_16_);
      auVar70 = vcvtps2pd_avx(auVar70._16_16_);
      auVar207 = vcvtps2pd_avx(auVar130._0_16_);
      auVar130 = vcvtps2pd_avx(auVar130._16_16_);
      dVar97 = param_4 * auVar163._0_8_ - dVar201;
      dVar117 = param_4 * auVar163._8_8_ - dVar201;
      dVar119 = param_4 * auVar163._16_8_ - dVar201;
      dVar123 = param_4 * auVar163._24_8_ - dVar201;
      dVar292 = param_4 * auVar61._0_8_ - dVar201;
      dVar293 = param_4 * auVar61._8_8_ - dVar201;
      dVar294 = param_4 * auVar61._16_8_ - dVar201;
      dVar295 = param_4 * auVar61._24_8_ - dVar201;
      dVar76 = param_4 * auVar70._0_8_ - dVar214;
      dVar93 = param_4 * auVar70._8_8_ - dVar214;
      dVar94 = param_4 * auVar70._16_8_ - dVar214;
      dVar95 = param_4 * auVar70._24_8_ - dVar214;
      dVar49 = param_4 * auVar100._0_8_ - dVar214;
      dVar75 = param_4 * auVar100._8_8_ - dVar214;
      dVar96 = param_4 * auVar100._16_8_ - dVar214;
      dVar118 = param_4 * auVar100._24_8_ - dVar214;
      dVar174 = param_4 * auVar130._0_8_ - dVar277;
      dVar183 = param_4 * auVar130._8_8_ - dVar277;
      dVar184 = param_4 * auVar130._16_8_ - dVar277;
      dVar186 = param_4 * auVar130._24_8_ - dVar277;
      dVar156 = param_4 * auVar207._0_8_ - dVar277;
      dVar169 = param_4 * auVar207._8_8_ - dVar277;
      dVar171 = param_4 * auVar207._16_8_ - dVar277;
      dVar172 = param_4 * auVar207._24_8_ - dVar277;
      dVar202 = auVar218._0_8_ * dVar76 - local_2c8 * dVar97;
      dVar209 = auVar218._0_8_ * dVar93 - dStack_2c0 * dVar117;
      dVar211 = auVar218._0_8_ * dVar94 - dStack_2b8 * dVar119;
      dVar213 = auVar218._0_8_ * dVar95 - dStack_2b0 * dVar123;
      dVar188 = auVar218._0_8_ * dVar49 - dVar292 * local_2c8;
      dVar196 = auVar218._0_8_ * dVar75 - dVar293 * dStack_2c0;
      dVar198 = auVar218._0_8_ * dVar96 - dVar294 * dStack_2b8;
      dVar200 = auVar218._0_8_ * dVar118 - dVar295 * dStack_2b0;
      dVar215 = local_2c8 * dVar174 - local_368 * dVar76;
      dVar233 = dStack_2c0 * dVar183 - dStack_360 * dVar93;
      dVar235 = dStack_2b8 * dVar184 - dStack_358 * dVar94;
      dVar237 = dStack_2b0 * dVar186 - dStack_350 * dVar95;
      dVar140 = local_2c8 * dVar156 - local_368 * dVar49;
      dVar155 = dStack_2c0 * dVar169 - dStack_360 * dVar75;
      dVar116 = dStack_2b8 * dVar171 - dStack_358 * dVar96;
      dVar122 = dStack_2b0 * dVar172 - dStack_350 * dVar118;
      dVar296 = local_368 * dVar97 - auVar218._0_8_ * dVar174;
      dVar303 = dStack_360 * dVar117 - auVar218._0_8_ * dVar183;
      dVar305 = dStack_358 * dVar119 - auVar218._0_8_ * dVar184;
      dVar307 = dStack_350 * dVar123 - auVar218._0_8_ * dVar186;
      dVar281 = local_368 * dVar292 - auVar218._0_8_ * dVar156;
      dVar287 = dStack_360 * dVar293 - auVar218._0_8_ * dVar169;
      dVar289 = dStack_358 * dVar294 - auVar218._0_8_ * dVar171;
      dVar291 = dStack_350 * dVar295 - auVar218._0_8_ * dVar172;
      dVar140 = dVar140 + dVar140;
      dVar155 = dVar155 + dVar155;
      dVar116 = dVar116 + dVar116;
      dVar122 = dVar122 + dVar122;
      dVar215 = dVar215 + dVar215;
      dVar233 = dVar233 + dVar233;
      dVar235 = dVar235 + dVar235;
      dVar237 = dVar237 + dVar237;
      dVar281 = dVar281 + dVar281;
      dVar287 = dVar287 + dVar287;
      dVar289 = dVar289 + dVar289;
      dVar291 = dVar291 + dVar291;
      dVar296 = dVar296 + dVar296;
      dVar303 = dVar303 + dVar303;
      dVar305 = dVar305 + dVar305;
      dVar307 = dVar307 + dVar307;
      dVar188 = dVar188 + dVar188;
      dVar196 = dVar196 + dVar196;
      dVar198 = dVar198 + dVar198;
      dVar200 = dVar200 + dVar200;
      dVar202 = dVar202 + dVar202;
      dVar209 = dVar209 + dVar209;
      dVar211 = dVar211 + dVar211;
      dVar213 = dVar213 + dVar213;
      auVar204[1] = DAT_152cac6b2;
      auVar204[0] = DAT_152cac6b2;
      auVar204[2] = DAT_152cac6b2;
      auVar204[3] = DAT_152cac6b2;
      auVar204[4] = DAT_152cac6b2;
      auVar204[5] = DAT_152cac6b2;
      auVar204[6] = DAT_152cac6b2;
      auVar204[7] = DAT_152cac6b2;
      auVar204[8] = DAT_152cac6b2;
      auVar204[9] = DAT_152cac6b2;
      auVar204[10] = DAT_152cac6b2;
      auVar204[0xb] = DAT_152cac6b2;
      auVar204[0xc] = DAT_152cac6b2;
      auVar204[0xd] = DAT_152cac6b2;
      auVar204[0xe] = DAT_152cac6b2;
      auVar204[0xf] = DAT_152cac6b2;
      auVar104._0_8_ =
           dVar48 * ((local_2c8 * dVar202 - local_368 * dVar296) + local_348 * dVar215 + dVar97);
      auVar104._8_8_ =
           dVar48 * ((dStack_2c0 * dVar209 - dStack_360 * dVar303) + dStack_340 * dVar233 + dVar117)
      ;
      auVar104._16_8_ =
           dVar48 * ((dStack_2b8 * dVar211 - dStack_358 * dVar305) + dStack_338 * dVar235 + dVar119)
      ;
      auVar104._24_8_ =
           dVar48 * ((dStack_2b0 * dVar213 - dStack_350 * dVar307) + dStack_330 * dVar237 + dVar123)
      ;
      auVar52._0_8_ =
           dVar48 * (local_348 * dVar140 + dVar292 + (local_2c8 * dVar188 - local_368 * dVar281));
      auVar52._8_8_ =
           dVar48 * (dStack_340 * dVar155 + dVar293 + (dStack_2c0 * dVar196 - dStack_360 * dVar287))
      ;
      auVar52._16_8_ =
           dVar48 * (dStack_338 * dVar116 + dVar294 + (dStack_2b8 * dVar198 - dStack_358 * dVar289))
      ;
      auVar52._24_8_ =
           dVar48 * (dStack_330 * dVar122 + dVar295 + (dStack_2b0 * dVar200 - dStack_350 * dVar291))
      ;
      auVar83._0_8_ =
           local_328 *
           ((local_368 * dVar215 - dVar202 * auVar218._0_8_) + local_348 * dVar296 + dVar76);
      auVar83._8_8_ =
           dStack_320 *
           ((dStack_360 * dVar233 - dVar209 * auVar218._0_8_) + dStack_340 * dVar303 + dVar93);
      auVar83._16_8_ =
           dStack_318 *
           ((dStack_358 * dVar235 - dVar211 * auVar218._0_8_) + dStack_338 * dVar305 + dVar94);
      auVar83._24_8_ =
           dStack_310 *
           ((dStack_350 * dVar237 - dVar213 * auVar218._0_8_) + dStack_330 * dVar307 + dVar95);
      auVar26._0_8_ =
           local_328 *
           (local_348 * dVar281 + dVar49 + (local_368 * dVar140 - dVar188 * auVar218._0_8_));
      auVar26._8_8_ =
           dStack_320 *
           (dStack_340 * dVar287 + dVar75 + (dStack_360 * dVar155 - dVar196 * auVar218._0_8_));
      auVar26._16_8_ =
           dStack_318 *
           (dStack_338 * dVar289 + dVar96 + (dStack_358 * dVar116 - dVar198 * auVar218._0_8_));
      auVar26._24_8_ =
           dStack_310 *
           (dStack_330 * dVar291 + dVar118 + (dStack_350 * dVar122 - dVar200 * auVar218._0_8_));
      auVar142 = vcvtpd2ps_avx(auVar52);
      auVar78 = vcvtpd2ps_avx(auVar104);
      auVar19 = vcvtpd2ps_avx(auVar26);
      auVar99 = vcvtpd2ps_avx(auVar83);
      auVar191._16_16_ = auVar78;
      auVar191._0_16_ = auVar142;
      auVar219._16_16_ = auVar99;
      auVar219._0_16_ = auVar19;
      auVar27._0_8_ =
           local_188 *
           ((auVar218._0_8_ * dVar296 - local_2c8 * dVar215) + local_348 * dVar202 + dVar174);
      auVar27._8_8_ =
           dStack_180 *
           ((auVar218._0_8_ * dVar303 - dStack_2c0 * dVar233) + dStack_340 * dVar209 + dVar183);
      auVar27._16_8_ =
           dStack_178 *
           ((auVar218._0_8_ * dVar305 - dStack_2b8 * dVar235) + dStack_338 * dVar211 + dVar184);
      auVar27._24_8_ =
           dStack_170 *
           ((auVar218._0_8_ * dVar307 - dStack_2b0 * dVar237) + dStack_330 * dVar213 + dVar186);
      auVar53._0_8_ =
           local_188 *
           ((auVar218._0_8_ * dVar281 - local_2c8 * dVar140) + local_348 * dVar188 + dVar156);
      auVar53._8_8_ =
           dStack_180 *
           ((auVar218._0_8_ * dVar287 - dStack_2c0 * dVar155) + dStack_340 * dVar196 + dVar169);
      auVar53._16_8_ =
           dStack_178 *
           ((auVar218._0_8_ * dVar289 - dStack_2b8 * dVar116) + dStack_338 * dVar198 + dVar171);
      auVar53._24_8_ =
           dStack_170 *
           ((auVar218._0_8_ * dVar291 - dStack_2b0 * dVar122) + dStack_330 * dVar200 + dVar172);
      auVar158 = vcvtpd2ps_avx(auVar53);
      auVar299 = vcvtpd2ps_avx(auVar27);
      auVar243._16_16_ = auVar299;
      auVar243._0_16_ = auVar158;
      auVar98 = vpand_avx(auVar204,auVar17);
      if (auVar98._0_8_ != 0) {
        auVar98 = vpmovzxbw_avx(auVar17);
        auVar217._0_8_ = CONCAT44(__real_7f800000,__real_7f800000);
        auVar217._8_4_ = __real_7f800000;
        auVar217._12_4_ = __real_7f800000;
        auVar20._16_4_ = __real_7f800000;
        auVar20._0_16_ = auVar217;
        auVar20._20_4_ = __real_7f800000;
        auVar28._24_4_ = __real_7f800000;
        auVar28._0_24_ = auVar20;
        auVar28._28_4_ = __real_7f800000;
        auVar54._0_8_ = auVar142._0_8_ & auVar217._0_8_;
        uVar7 = auVar217._8_8_;
        auVar54._8_8_ = auVar142._8_8_ & uVar7;
        uVar2 = auVar20._16_8_;
        auVar54._16_8_ = auVar78._0_8_ & uVar2;
        uVar3 = auVar28._24_8_;
        auVar54._24_8_ = auVar78._8_8_ & uVar3;
        auVar130 = vpcmpeqd_avx2(auVar54,auVar28);
        auVar61 = vpcmpeqd_avx2(ZEXT1632(auVar78),ZEXT1632(auVar78));
        auVar78 = SUB3216(auVar130 ^ auVar61,0);
        auVar79 = SUB3216(auVar130 ^ auVar61,0x10);
        auVar17 = vpackssdw_avx(auVar78,auVar79);
        auVar17 = vpand_avx(auVar17,auVar98);
        auVar175 = vpsllw_avx(auVar17,0xf);
        if ((((((((SUB161(auVar175 >> 0xf,0) & 1) != 0 || (SUB161(auVar175 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar175 >> 0x2f,0) & 1) != 0) || (SUB161(auVar175 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar175 >> 0x4f,0) & 1) != 0) || (SUB161(auVar175 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar175 >> 0x6f,0) & 1) != 0) || auVar175[0xf] < '\0') {
          auVar17 = vpackssdw_avx(auVar78,auVar79);
          auVar145._0_8_ = auVar19._0_8_ & auVar217._0_8_;
          auVar145._8_8_ = auVar19._8_8_ & uVar7;
          auVar145._16_8_ = auVar99._0_8_ & uVar2;
          auVar145._24_8_ = auVar99._8_8_ & uVar3;
          auVar130 = vpcmpeqd_avx2(auVar145,auVar28);
          auVar78 = vpackssdw_avx(SUB3216(auVar130 ^ auVar61,0),SUB3216(auVar130 ^ auVar61,0x10));
          auVar78 = vpand_avx(auVar78,auVar98);
          auVar17 = vpand_avx(auVar78,auVar17);
          auVar78 = vpsllw_avx(auVar17,0xf);
          if ((((((((SUB161(auVar78 >> 0xf,0) & 1) != 0 || (SUB161(auVar78 >> 0x1f,0) & 1) != 0) ||
                  (SUB161(auVar78 >> 0x2f,0) & 1) != 0) || (SUB161(auVar78 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar78 >> 0x4f,0) & 1) != 0) || (SUB161(auVar78 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar78 >> 0x6f,0) & 1) != 0) || auVar78[0xf] < '\0') {
            auVar84._0_8_ = auVar158._0_8_ & auVar217._0_8_;
            auVar84._8_8_ = auVar158._8_8_ & uVar7;
            auVar84._16_8_ = auVar299._0_8_ & uVar2;
            auVar84._24_8_ = auVar299._8_8_ & uVar3;
            auVar130 = vpcmpeqd_avx2(auVar84,auVar28);
            auVar78 = vpackssdw_avx(SUB3216(auVar130 ^ auVar61,0),SUB3216(auVar130 ^ auVar61,0x10));
            auVar17 = vpand_avx(auVar78,auVar17);
          }
        }
        auVar17 = vpshufb_avx(auVar17,___xmm_00000000000000000e0c0a0806040200);
        auVar98 = vpand_avx(auVar204,auVar17);
      }
      auVar130 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar15);
      auVar61 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar15);
      auVar100 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar61);
      auVar70 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar130);
      auVar100 = vblendps_avx(auVar70,auVar100,0x88);
      auVar70 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar61);
      auVar163 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_2 + lVar15));
      auVar70 = vblendps_avx(auVar163,auVar70,0x13);
      auVar163 = vperm2f128_avx(auVar100,auVar70,0x31);
      auVar130 = vblendps_avx(auVar61,auVar130,0x24);
      auVar130 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar130);
      auVar61 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_2 + lVar15));
      auVar130 = vblendps_avx(auVar130,auVar61,0xe0);
      auVar50._0_4_ = auVar100._0_4_ ^ uVar9;
      auVar50._4_4_ = auVar100._4_4_ ^ uVar9;
      auVar50._8_4_ = auVar100._8_4_ ^ uVar9;
      auVar50._12_4_ = auVar100._12_4_ ^ uVar9;
      auVar55._16_4_ = auVar70._0_4_ ^ uVar9;
      auVar55._0_16_ = auVar50;
      auVar55._20_4_ = auVar70._4_4_ ^ uVar9;
      auVar55._24_4_ = auVar70._8_4_ ^ uVar9;
      auVar55._28_4_ = auVar70._12_4_ ^ uVar9;
      auVar61 = vcvtps2pd_avx(auVar55._16_16_);
      auVar143._0_4_ = auVar163._0_4_ ^ uVar9;
      auVar143._4_4_ = auVar163._4_4_ ^ uVar9;
      auVar143._8_4_ = auVar163._8_4_ ^ uVar9;
      auVar143._12_4_ = auVar163._12_4_ ^ uVar9;
      auVar146._16_4_ = auVar163._16_4_ ^ uVar9;
      auVar146._0_16_ = auVar143;
      auVar146._20_4_ = auVar163._20_4_ ^ uVar9;
      auVar146._24_4_ = auVar163._24_4_ ^ uVar9;
      auVar146._28_4_ = auVar163._28_4_ ^ uVar9;
      auVar100 = vcvtps2pd_avx(auVar50);
      auVar70 = vcvtps2pd_avx(auVar146._16_16_);
      auVar163 = vcvtps2pd_avx(auVar143);
      auVar265._0_4_ = auVar130._0_4_ ^ uVar9;
      auVar265._4_4_ = auVar130._4_4_ ^ uVar9;
      auVar265._8_4_ = auVar130._8_4_ ^ uVar9;
      auVar265._12_4_ = auVar130._12_4_ ^ uVar9;
      auVar29._16_4_ = auVar130._16_4_ ^ uVar9;
      auVar29._0_16_ = auVar265;
      auVar29._20_4_ = auVar130._20_4_ ^ uVar9;
      auVar29._24_4_ = auVar130._24_4_ ^ uVar9;
      auVar29._28_4_ = auVar130._28_4_ ^ uVar9;
      auVar130 = vcvtps2pd_avx(auVar29._16_16_);
      auVar207 = vcvtps2pd_avx(auVar265);
      dVar292 = auVar100._0_8_;
      dVar293 = auVar100._8_8_;
      dVar294 = auVar100._16_8_;
      dVar295 = auVar100._24_8_;
      dVar49 = auVar61._0_8_;
      dVar96 = auVar61._8_8_;
      dVar76 = auVar61._16_8_;
      dVar97 = auVar61._24_8_;
      dVar140 = auVar163._0_8_;
      dVar116 = auVar163._8_8_;
      dVar93 = auVar163._16_8_;
      dVar117 = auVar163._24_8_;
      dVar75 = auVar70._0_8_;
      dVar118 = auVar70._8_8_;
      dVar94 = auVar70._16_8_;
      dVar119 = auVar70._24_8_;
      dVar188 = auVar207._0_8_;
      dVar196 = auVar207._8_8_;
      dVar198 = auVar207._16_8_;
      dVar200 = auVar207._24_8_;
      dVar155 = auVar130._0_8_;
      dVar122 = auVar130._8_8_;
      dVar95 = auVar130._16_8_;
      dVar123 = auVar130._24_8_;
      dVar209 = auVar218._0_8_ * dVar75 - local_2c8 * dVar49;
      dVar213 = auVar218._0_8_ * dVar118 - dStack_2c0 * dVar96;
      dVar287 = auVar218._0_8_ * dVar94 - dStack_2b8 * dVar76;
      dVar291 = auVar218._0_8_ * dVar119 - dStack_2b0 * dVar97;
      dVar202 = auVar218._0_8_ * dVar140 - dVar292 * local_2c8;
      dVar211 = auVar218._0_8_ * dVar116 - dVar293 * dStack_2c0;
      dVar281 = auVar218._0_8_ * dVar93 - dVar294 * dStack_2b8;
      dVar289 = auVar218._0_8_ * dVar117 - dVar295 * dStack_2b0;
      dVar174 = local_2c8 * dVar155 - local_368 * dVar75;
      dVar183 = dStack_2c0 * dVar122 - dStack_360 * dVar118;
      dVar184 = dStack_2b8 * dVar95 - dStack_358 * dVar94;
      dVar186 = dStack_2b0 * dVar123 - dStack_350 * dVar119;
      dVar215 = local_2c8 * dVar188 - local_368 * dVar140;
      dVar233 = dStack_2c0 * dVar196 - dStack_360 * dVar116;
      dVar235 = dStack_2b8 * dVar198 - dStack_358 * dVar93;
      dVar237 = dStack_2b0 * dVar200 - dStack_350 * dVar117;
      dVar296 = local_368 * dVar49 - auVar218._0_8_ * dVar155;
      dVar303 = dStack_360 * dVar96 - auVar218._0_8_ * dVar122;
      dVar305 = dStack_358 * dVar76 - auVar218._0_8_ * dVar95;
      dVar307 = dStack_350 * dVar97 - auVar218._0_8_ * dVar123;
      dVar156 = local_368 * dVar292 - dVar188 * auVar218._0_8_;
      dVar169 = dStack_360 * dVar293 - dVar196 * auVar218._0_8_;
      dVar171 = dStack_358 * dVar294 - dVar198 * auVar218._0_8_;
      dVar172 = dStack_350 * dVar295 - dVar200 * auVar218._0_8_;
      dVar215 = dVar215 + dVar215;
      dVar233 = dVar233 + dVar233;
      dVar235 = dVar235 + dVar235;
      dVar237 = dVar237 + dVar237;
      dVar174 = dVar174 + dVar174;
      dVar183 = dVar183 + dVar183;
      dVar184 = dVar184 + dVar184;
      dVar186 = dVar186 + dVar186;
      dVar156 = dVar156 + dVar156;
      dVar169 = dVar169 + dVar169;
      dVar171 = dVar171 + dVar171;
      dVar172 = dVar172 + dVar172;
      dVar296 = dVar296 + dVar296;
      dVar303 = dVar303 + dVar303;
      dVar305 = dVar305 + dVar305;
      dVar307 = dVar307 + dVar307;
      dVar202 = dVar202 + dVar202;
      dVar211 = dVar211 + dVar211;
      dVar281 = dVar281 + dVar281;
      dVar289 = dVar289 + dVar289;
      dVar209 = dVar209 + dVar209;
      dVar213 = dVar213 + dVar213;
      dVar287 = dVar287 + dVar287;
      dVar291 = dVar291 + dVar291;
      auVar5._8_8_ = dVar48;
      auVar5._0_8_ = dVar48;
      auVar5._16_8_ = dVar48;
      auVar5._24_8_ = dVar48;
      auVar161._0_8_ =
           dVar48 * ((local_2c8 * dVar209 - local_368 * dVar296) + local_348 * dVar174 + dVar49);
      auVar161._8_8_ =
           dVar48 * ((dStack_2c0 * dVar213 - dStack_360 * dVar303) + dStack_340 * dVar183 + dVar96);
      auVar161._16_8_ =
           dVar48 * ((dStack_2b8 * dVar287 - dStack_358 * dVar305) + dStack_338 * dVar184 + dVar76);
      auVar161._24_8_ =
           dVar48 * ((dStack_2b0 * dVar291 - dStack_350 * dVar307) + dStack_330 * dVar186 + dVar97);
      auVar30._0_8_ =
           dVar48 * (local_348 * dVar215 + dVar292 + (local_2c8 * dVar202 - local_368 * dVar156));
      auVar30._8_8_ =
           dVar48 * (dStack_340 * dVar233 + dVar293 + (dStack_2c0 * dVar211 - dStack_360 * dVar169))
      ;
      auVar30._16_8_ =
           dVar48 * (dStack_338 * dVar235 + dVar294 + (dStack_2b8 * dVar281 - dStack_358 * dVar171))
      ;
      auVar30._24_8_ =
           dVar48 * (dStack_330 * dVar237 + dVar295 + (dStack_2b0 * dVar289 - dStack_350 * dVar172))
      ;
      auVar85._0_8_ =
           local_328 *
           (local_348 * dVar296 + dVar75 + (local_368 * dVar174 - dVar209 * auVar218._0_8_));
      auVar85._8_8_ =
           dStack_320 *
           (dStack_340 * dVar303 + dVar118 + (dStack_360 * dVar183 - dVar213 * auVar218._0_8_));
      auVar85._16_8_ =
           dStack_318 *
           (dStack_338 * dVar305 + dVar94 + (dStack_358 * dVar184 - dVar287 * auVar218._0_8_));
      auVar85._24_8_ =
           dStack_310 *
           (dStack_330 * dVar307 + dVar119 + (dStack_350 * dVar186 - dVar291 * auVar218._0_8_));
      auVar56._0_8_ =
           local_328 *
           (local_348 * dVar156 + dVar140 + (local_368 * dVar215 - dVar202 * auVar218._0_8_));
      auVar56._8_8_ =
           dStack_320 *
           (dStack_340 * dVar169 + dVar116 + (dStack_360 * dVar233 - dVar211 * auVar218._0_8_));
      auVar56._16_8_ =
           dStack_318 *
           (dStack_338 * dVar171 + dVar93 + (dStack_358 * dVar235 - dVar281 * auVar218._0_8_));
      auVar56._24_8_ =
           dStack_310 *
           (dStack_330 * dVar172 + dVar117 + (dStack_350 * dVar237 - dVar289 * auVar218._0_8_));
      auVar17 = vcvtpd2ps_avx(auVar30);
      auVar78 = vcvtpd2ps_avx(auVar161);
      auVar99 = vcvtpd2ps_avx(auVar56);
      auVar158 = vcvtpd2ps_avx(auVar85);
      auVar300._16_16_ = auVar78;
      auVar300._0_16_ = auVar17;
      auVar86._16_16_ = auVar158;
      auVar86._0_16_ = auVar99;
      auVar31._0_8_ =
           local_188 *
           ((auVar218._0_8_ * dVar296 - local_2c8 * dVar174) + local_348 * dVar209 + dVar155);
      auVar31._8_8_ =
           dStack_180 *
           ((auVar218._0_8_ * dVar303 - dStack_2c0 * dVar183) + dStack_340 * dVar213 + dVar122);
      auVar31._16_8_ =
           dStack_178 *
           ((auVar218._0_8_ * dVar305 - dStack_2b8 * dVar184) + dStack_338 * dVar287 + dVar95);
      auVar31._24_8_ =
           dStack_170 *
           ((auVar218._0_8_ * dVar307 - dStack_2b0 * dVar186) + dStack_330 * dVar291 + dVar123);
      auVar57._0_8_ =
           (local_348 * dVar202 + dVar188 + (auVar218._0_8_ * dVar156 - local_2c8 * dVar215)) *
           local_188;
      auVar57._8_8_ =
           (dStack_340 * dVar211 + dVar196 + (auVar218._0_8_ * dVar169 - dStack_2c0 * dVar233)) *
           dStack_180;
      auVar57._16_8_ =
           (dStack_338 * dVar281 + dVar198 + (auVar218._0_8_ * dVar171 - dStack_2b8 * dVar235)) *
           dStack_178;
      auVar57._24_8_ =
           (dStack_330 * dVar289 + dVar200 + (auVar218._0_8_ * dVar172 - dStack_2b0 * dVar237)) *
           dStack_170;
      auVar299 = vcvtpd2ps_avx(auVar57);
      auVar79 = vcvtpd2ps_avx(auVar31);
      auVar58._16_16_ = auVar79;
      auVar58._0_16_ = auVar299;
      auVar126[1] = DAT_152cac6b2;
      auVar126[0] = DAT_152cac6b2;
      auVar126[2] = DAT_152cac6b2;
      auVar126[3] = DAT_152cac6b2;
      auVar126[4] = DAT_152cac6b2;
      auVar126[5] = DAT_152cac6b2;
      auVar126[6] = DAT_152cac6b2;
      auVar126[7] = DAT_152cac6b2;
      auVar126[8] = DAT_152cac6b2;
      auVar126[9] = DAT_152cac6b2;
      auVar126[10] = DAT_152cac6b2;
      auVar126[0xb] = DAT_152cac6b2;
      auVar126[0xc] = DAT_152cac6b2;
      auVar126[0xd] = DAT_152cac6b2;
      auVar126[0xe] = DAT_152cac6b2;
      auVar126[0xf] = DAT_152cac6b2;
      auVar175 = vpand_avx(auVar98,auVar126);
      if (auVar175._0_8_ != 0) {
        auVar98 = vpmovzxbw_avx(auVar98);
        auVar16._0_8_ = CONCAT44(__real_7f800000,__real_7f800000);
        auVar16._8_4_ = __real_7f800000;
        auVar16._12_4_ = __real_7f800000;
        auVar21._16_4_ = __real_7f800000;
        auVar21._0_16_ = auVar16;
        auVar21._20_4_ = __real_7f800000;
        auVar32._24_4_ = __real_7f800000;
        auVar32._0_24_ = auVar21;
        auVar32._28_4_ = __real_7f800000;
        auVar147._0_8_ = auVar17._0_8_ & auVar16._0_8_;
        uVar7 = auVar16._8_8_;
        auVar147._8_8_ = auVar17._8_8_ & uVar7;
        uVar2 = auVar21._16_8_;
        auVar147._16_8_ = auVar78._0_8_ & uVar2;
        uVar3 = auVar32._24_8_;
        auVar147._24_8_ = auVar78._8_8_ & uVar3;
        auVar130 = vpcmpeqd_avx2(auVar147,auVar32);
        auVar61 = vpcmpeqd_avx2(auVar5,auVar5);
        auVar78 = vpackssdw_avx(SUB3216(auVar130 ^ auVar61,0),SUB3216(auVar130 ^ auVar61,0x10));
        auVar78 = vpand_avx(auVar78,auVar98);
        auVar175 = vpsllw_avx(auVar78,0xf);
        if ((((((((SUB161(auVar175 >> 0xf,0) & 1) != 0 || (SUB161(auVar175 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar175 >> 0x2f,0) & 1) != 0) || (SUB161(auVar175 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar175 >> 0x4f,0) & 1) != 0) || (SUB161(auVar175 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar175 >> 0x6f,0) & 1) != 0) || auVar175[0xf] < '\0') {
          auVar148._0_8_ = auVar99._0_8_ & auVar16._0_8_;
          auVar148._8_8_ = auVar99._8_8_ & uVar7;
          auVar148._16_8_ = auVar158._0_8_ & uVar2;
          auVar148._24_8_ = auVar158._8_8_ & uVar3;
          auVar100 = vpcmpeqd_avx2(auVar148,auVar32);
          auVar130 = vpor_avx2(auVar130,auVar100);
          auVar78 = vpackssdw_avx(SUB3216(auVar130 ^ auVar61,0),SUB3216(auVar130 ^ auVar61,0x10));
          auVar78 = vpand_avx(auVar78,auVar98);
          auVar158 = vpsllw_avx(auVar78,0xf);
          if ((((((((SUB161(auVar158 >> 0xf,0) & 1) != 0 || (SUB161(auVar158 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar158 >> 0x2f,0) & 1) != 0) || (SUB161(auVar158 >> 0x3f,0) & 1) != 0
                 ) || (SUB161(auVar158 >> 0x4f,0) & 1) != 0) ||
               (SUB161(auVar158 >> 0x5f,0) & 1) != 0) || (SUB161(auVar158 >> 0x6f,0) & 1) != 0) ||
              auVar158[0xf] < '\0') {
            auVar162._0_8_ = auVar299._0_8_ & auVar16._0_8_;
            auVar162._8_8_ = auVar299._8_8_ & uVar7;
            auVar162._16_8_ = auVar79._0_8_ & uVar2;
            auVar162._24_8_ = auVar79._8_8_ & uVar3;
            auVar130 = vpcmpeqd_avx2(auVar162,auVar32);
            auVar158 = vpackssdw_avx(SUB3216(auVar130 ^ auVar61,0),SUB3216(auVar130 ^ auVar61,0x10))
            ;
            auVar78 = vpand_avx(auVar158,auVar78);
          }
        }
        auVar78 = vpshufb_avx(auVar78,___xmm_00000000000000000e0c0a0806040200);
        auVar98 = vpand_avx(auVar78,auVar126);
      }
      auVar24._16_16_ = auVar19;
      auVar24._0_16_ = auVar142;
      auVar61 = vshufpd_avx(auVar191,auVar24,2);
      auVar100 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar243);
      auVar130 = vpermpd_avx2(auVar219,0xe9);
      auVar130 = vblendps_avx(auVar100,auVar130,7);
      auVar100 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                              ,auVar130);
      auVar61 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar61);
      auVar61 = vblendps_avx(auVar61,auVar100,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar15) = auVar61;
      auVar70 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar61 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar130);
      auVar130 = vshufpd_avx(auVar191,auVar191,1);
      auVar130 = vblendps_avx(auVar61,auVar130,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar15) = auVar130;
      auVar207 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar163 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar61 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar219);
      auVar130 = vpermpd_avx2(auVar191,0xff);
      auVar130 = vblendpd_avx(auVar61,auVar130,1);
      auVar130 = vblendps_avx(auVar130,auVar243,0xe0);
      auVar130 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar130);
      *(undefined1 (*) [32])(param_1 + lVar15) = auVar130;
      auVar25._16_16_ = auVar99;
      auVar25._0_16_ = auVar17;
      auVar61 = vshufpd_avx(auVar300,auVar25,2);
      auVar100 = vpermps_avx2(auVar151,auVar58);
      auVar130 = vpermpd_avx2(auVar86,0xe9);
      auVar130 = vblendps_avx(auVar100,auVar130,7);
      auVar100 = vpermps_avx2(auVar149,auVar130);
      auVar61 = vpermps_avx2(auVar87,auVar61);
      auVar61 = vblendps_avx(auVar61,auVar100,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar15) = auVar61;
      auVar61 = vpermps_avx2(auVar70,auVar130);
      auVar130 = vshufpd_avx(auVar300,auVar300,1);
      auVar130 = vblendps_avx(auVar61,auVar130,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar15) = auVar130;
      auVar61 = vpermps_avx2(auVar163,auVar86);
      auVar130 = vpermpd_avx2(auVar300,0xff);
      auVar61 = vblendpd_avx(auVar61,auVar130,1);
      auVar61 = vblendps_avx(auVar61,auVar58,0xe0);
      auVar61 = vpermps_avx2(auVar207,auVar61);
      *(undefined1 (*) [32])(param_2 + lVar15) = auVar61;
      auVar17 = vpand_avx(auVar98,auVar126);
      lVar15 = lVar15 + 0x60;
      uVar13 = uVar13 + 8;
    } while ((int)uVar13 < (int)(uVar11 & 0xfffffff8));
  }
  auVar70 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar100 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar61 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  if ((int)uVar13 < (int)param_5) {
    auVar33._4_4_ = uVar13;
    auVar33._0_4_ = uVar13;
    auVar33._8_4_ = uVar13;
    auVar33._12_4_ = uVar13;
    auVar33._16_4_ = uVar13;
    auVar33._20_4_ = uVar13;
    auVar33._24_4_ = uVar13;
    auVar33._28_4_ = uVar13;
    auVar130 = vpor_avx2(auVar33,
                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar59._4_4_ = param_5;
    auVar59._0_4_ = param_5;
    auVar59._8_4_ = param_5;
    auVar59._12_4_ = param_5;
    auVar59._16_4_ = param_5;
    auVar59._20_4_ = param_5;
    auVar59._24_4_ = param_5;
    auVar59._28_4_ = param_5;
    auVar130 = vpcmpgtd_avx2(auVar59,auVar130);
    uVar7 = (ulonglong)uVar13;
    uVar6 = uVar7 * 3;
    pauVar1 = (undefined1 (*) [32])(param_1 + uVar7 * 0xc);
    uVar9 = vmovmskps_avx(auVar130);
    if (uVar9 == 0xff) {
      auVar163 = pauVar1[1];
      auVar207 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar163);
      auVar151 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,*pauVar1);
      auVar207 = vblendps_avx(auVar151,auVar207,0x88);
      auVar151 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar163);
      auVar149 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,pauVar1[2]);
      auVar151 = vblendps_avx(auVar149,auVar151,0x13);
      auVar34._16_16_ = auVar151._0_16_;
      auVar34._0_16_ = auVar207._0_16_;
      auVar60 = vperm2f128_avx(auVar207,auVar151,0x31);
      auVar163 = vblendps_avx(auVar163,*pauVar1,0x24);
      auVar163 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar163);
      auVar207 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,pauVar1[2]);
      auVar149 = vblendps_avx(auVar163,auVar207,0xe0);
      auVar163 = *(undefined1 (*) [32])(param_2 + uVar7 * 0xc);
      auVar207 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc);
      auVar151 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc);
      auVar87 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar207);
      auVar111 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar163);
      auVar87 = vblendps_avx(auVar111,auVar87,0x88);
      auVar111 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar207);
      auVar164 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar151);
      auVar111 = vblendps_avx(auVar164,auVar111,0x13);
      auVar284._16_16_ = auVar111._0_16_;
      auVar284._0_16_ = auVar87._0_16_;
      auVar87 = vperm2f128_avx(auVar87,auVar111,0x31);
      auVar163 = vblendps_avx(auVar207,auVar163,0x24);
      auVar163 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar163);
      auVar207 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,auVar151);
      auVar163 = vblendps_avx(auVar163,auVar207,0xe0);
    }
    else {
      auVar34 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar130);
      auVar60 = vgatherdps(ZEXT832(0),auVar130);
      auVar149 = vgatherdps(ZEXT832(0) << 0x20,auVar130);
      auVar284 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar130);
      auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar130);
      auVar163 = vgatherdps(ZEXT1632(ZEXT816(0)),auVar130);
    }
    pauVar14 = (undefined1 (*) [32])(param_2 + uVar7 * 0xc);
    auVar207 = vcvtps2pd_avx(auVar34._0_16_);
    auVar151 = vcvtps2pd_avx(auVar34._16_16_);
    auVar111 = vcvtps2pd_avx(auVar60._0_16_);
    auVar60 = vcvtps2pd_avx(auVar60._16_16_);
    dVar303 = param_4 * auVar151._0_8_ - dVar201;
    dVar307 = param_4 * auVar151._8_8_ - dVar201;
    dVar293 = param_4 * auVar151._16_8_ - dVar201;
    dVar295 = param_4 * auVar151._24_8_ - dVar201;
    dVar189 = param_4 * auVar207._0_8_ - dVar201;
    dVar197 = param_4 * auVar207._8_8_ - dVar201;
    dVar199 = param_4 * auVar207._16_8_ - dVar201;
    dVar201 = param_4 * auVar207._24_8_ - dVar201;
    auVar207 = vcvtps2pd_avx(auVar149._0_16_);
    auVar151 = vcvtps2pd_avx(auVar149._16_16_);
    dVar240 = param_4 * auVar60._0_8_ - dVar214;
    dVar252 = param_4 * auVar60._8_8_ - dVar214;
    dVar255 = param_4 * auVar60._16_8_ - dVar214;
    dVar258 = param_4 * auVar60._24_8_ - dVar214;
    dVar203 = param_4 * auVar111._0_8_ - dVar214;
    dVar210 = param_4 * auVar111._8_8_ - dVar214;
    dVar212 = param_4 * auVar111._16_8_ - dVar214;
    dVar214 = param_4 * auVar111._24_8_ - dVar214;
    dVar209 = param_4 * auVar151._0_8_ - dVar277;
    dVar213 = param_4 * auVar151._8_8_ - dVar277;
    dVar287 = param_4 * auVar151._16_8_ - dVar277;
    dVar291 = param_4 * auVar151._24_8_ - dVar277;
    dVar261 = param_4 * auVar207._0_8_ - dVar277;
    dVar269 = param_4 * auVar207._8_8_ - dVar277;
    dVar273 = param_4 * auVar207._16_8_ - dVar277;
    dVar277 = param_4 * auVar207._24_8_ - dVar277;
    auVar18._0_4_ = auVar284._0_4_ ^ __real_80000000;
    auVar18._4_4_ = auVar284._4_4_ ^ __real_80000000;
    auVar18._8_4_ = auVar284._8_4_ ^ __real_80000000;
    auVar18._12_4_ = auVar284._12_4_ ^ __real_80000000;
    auVar45._16_4_ = auVar284._16_4_ ^ __real_80000000;
    auVar45._0_16_ = auVar18;
    auVar45._20_4_ = auVar284._20_4_ ^ __real_80000000;
    auVar45._24_4_ = auVar284._24_4_ ^ __real_80000000;
    auVar45._28_4_ = auVar284._28_4_ ^ __real_80000000;
    auVar283._0_4_ = auVar87._0_4_ ^ __real_80000000;
    auVar283._4_4_ = auVar87._4_4_ ^ __real_80000000;
    auVar283._8_4_ = auVar87._8_4_ ^ __real_80000000;
    auVar283._12_4_ = auVar87._12_4_ ^ __real_80000000;
    auVar285._16_4_ = auVar87._16_4_ ^ __real_80000000;
    auVar285._0_16_ = auVar283;
    auVar285._20_4_ = auVar87._20_4_ ^ __real_80000000;
    auVar285._24_4_ = auVar87._24_4_ ^ __real_80000000;
    auVar285._28_4_ = auVar87._28_4_ ^ __real_80000000;
    auVar298._0_4_ = auVar163._0_4_ ^ __real_80000000;
    auVar298._4_4_ = auVar163._4_4_ ^ __real_80000000;
    auVar298._8_4_ = auVar163._8_4_ ^ __real_80000000;
    auVar298._12_4_ = auVar163._12_4_ ^ __real_80000000;
    auVar301._16_4_ = auVar163._16_4_ ^ __real_80000000;
    auVar301._0_16_ = auVar298;
    auVar301._20_4_ = auVar163._20_4_ ^ __real_80000000;
    auVar301._24_4_ = auVar163._24_4_ ^ __real_80000000;
    auVar301._28_4_ = auVar163._28_4_ ^ __real_80000000;
    dVar183 = auVar218._0_8_ * dVar240 - local_2c8 * dVar303;
    dVar186 = auVar218._0_8_ * dVar252 - dStack_2c0 * dVar307;
    dVar196 = auVar218._0_8_ * dVar255 - dStack_2b8 * dVar293;
    dVar200 = auVar218._0_8_ * dVar258 - dStack_2b0 * dVar295;
    dVar117 = local_2c8 * dVar209 - dVar240 * local_368;
    dVar215 = dStack_2c0 * dVar213 - dVar252 * dStack_360;
    dVar237 = dStack_2b8 * dVar287 - dVar255 * dStack_358;
    dVar171 = dStack_2b0 * dVar291 - dVar258 * dStack_350;
    dVar211 = local_368 * dVar303 - auVar218._0_8_ * dVar209;
    dVar281 = dStack_360 * dVar307 - auVar218._0_8_ * dVar213;
    dVar289 = dStack_358 * dVar293 - auVar218._0_8_ * dVar287;
    dVar296 = dStack_350 * dVar295 - auVar218._0_8_ * dVar291;
    dVar117 = dVar117 + dVar117;
    dVar215 = dVar215 + dVar215;
    dVar237 = dVar237 + dVar237;
    dVar171 = dVar171 + dVar171;
    dVar211 = dVar211 + dVar211;
    dVar281 = dVar281 + dVar281;
    dVar289 = dVar289 + dVar289;
    dVar296 = dVar296 + dVar296;
    dVar183 = dVar183 + dVar183;
    dVar186 = dVar186 + dVar186;
    dVar196 = dVar196 + dVar196;
    dVar200 = dVar200 + dVar200;
    auVar163 = vcvtps2pd_avx(auVar45._16_16_);
    auVar207 = vcvtps2pd_avx(auVar18);
    auVar151 = vcvtps2pd_avx(auVar285._16_16_);
    dVar116 = auVar218._0_8_ * dVar203 - dVar189 * local_2c8;
    dVar122 = auVar218._0_8_ * dVar210 - dVar197 * dStack_2c0;
    dVar93 = auVar218._0_8_ * dVar212 - dVar199 * dStack_2b8;
    dVar95 = auVar218._0_8_ * dVar214 - dVar201 * dStack_2b0;
    dVar119 = local_2c8 * dVar261 - dVar203 * local_368;
    dVar233 = dStack_2c0 * dVar269 - dVar210 * dStack_360;
    dVar156 = dStack_2b8 * dVar273 - dVar212 * dStack_358;
    dVar172 = dStack_2b0 * dVar277 - dVar214 * dStack_350;
    dVar184 = local_368 * dVar189 - dVar261 * auVar218._0_8_;
    dVar188 = dStack_360 * dVar197 - dVar269 * auVar218._0_8_;
    dVar198 = dStack_358 * dVar199 - dVar273 * auVar218._0_8_;
    dVar202 = dStack_350 * dVar201 - dVar277 * auVar218._0_8_;
    dVar119 = dVar119 + dVar119;
    dVar233 = dVar233 + dVar233;
    dVar156 = dVar156 + dVar156;
    dVar172 = dVar172 + dVar172;
    dVar184 = dVar184 + dVar184;
    dVar188 = dVar188 + dVar188;
    dVar198 = dVar198 + dVar198;
    dVar202 = dVar202 + dVar202;
    dVar116 = dVar116 + dVar116;
    dVar122 = dVar122 + dVar122;
    dVar93 = dVar93 + dVar93;
    dVar95 = dVar95 + dVar95;
    auVar149 = vcvtps2pd_avx(auVar283);
    auVar87 = vcvtps2pd_avx(auVar301._16_16_);
    auVar111 = vcvtps2pd_avx(auVar298);
    dVar49 = auVar163._0_8_;
    dVar140 = auVar163._8_8_;
    dVar75 = auVar163._16_8_;
    dVar155 = auVar163._24_8_;
    dVar157 = auVar151._0_8_;
    dVar118 = auVar218._0_8_ * dVar157 - local_2c8 * dVar49;
    dVar170 = auVar151._8_8_;
    dVar76 = auVar218._0_8_ * dVar170 - dStack_2c0 * dVar140;
    dVar173 = auVar151._16_8_;
    dVar94 = auVar218._0_8_ * dVar173 - dStack_2b8 * dVar75;
    dVar185 = auVar151._24_8_;
    dVar97 = auVar218._0_8_ * dVar185 - dStack_2b0 * dVar155;
    dVar138 = auVar207._0_8_;
    dVar139 = auVar207._8_8_;
    dVar141 = auVar207._16_8_;
    dVar96 = auVar207._24_8_;
    dVar120 = auVar149._0_8_;
    dVar216 = auVar218._0_8_ * dVar120 - dVar138 * local_2c8;
    dVar121 = auVar149._8_8_;
    dVar234 = auVar218._0_8_ * dVar121 - dVar139 * dStack_2c0;
    dVar124 = auVar149._16_8_;
    dVar236 = auVar218._0_8_ * dVar124 - dVar141 * dStack_2b8;
    dVar125 = auVar149._24_8_;
    dVar238 = auVar218._0_8_ * dVar125 - dVar96 * dStack_2b0;
    dVar260 = auVar87._0_8_;
    dVar123 = local_2c8 * dVar260 - dVar157 * local_368;
    dVar263 = auVar87._8_8_;
    dVar235 = dStack_2c0 * dVar263 - dVar170 * dStack_360;
    dVar264 = auVar87._16_8_;
    dVar169 = dStack_2b8 * dVar264 - dVar173 * dStack_358;
    dVar271 = auVar87._24_8_;
    dVar174 = dStack_2b0 * dVar271 - dVar185 * dStack_350;
    dVar239 = auVar111._0_8_;
    dVar305 = local_2c8 * dVar239 - dVar120 * local_368;
    dVar242 = auVar111._8_8_;
    dVar292 = dStack_2c0 * dVar242 - dVar121 * dStack_360;
    dVar254 = auVar111._16_8_;
    dVar294 = dStack_2b8 * dVar254 - dVar124 * dStack_358;
    dVar257 = auVar111._24_8_;
    dVar187 = dStack_2b0 * dVar257 - dVar125 * dStack_350;
    dVar241 = local_368 * dVar49 - dVar260 * auVar218._0_8_;
    dVar253 = dStack_360 * dVar140 - dVar263 * auVar218._0_8_;
    dVar256 = dStack_358 * dVar75 - dVar264 * auVar218._0_8_;
    dVar259 = dStack_350 * dVar155 - dVar271 * auVar218._0_8_;
    dVar262 = local_368 * dVar138 - dVar239 * auVar218._0_8_;
    dVar270 = dStack_360 * dVar139 - dVar242 * auVar218._0_8_;
    dVar274 = dStack_358 * dVar141 - dVar254 * auVar218._0_8_;
    dVar278 = dStack_350 * dVar96 - dVar257 * auVar218._0_8_;
    dVar305 = dVar305 + dVar305;
    dVar292 = dVar292 + dVar292;
    dVar294 = dVar294 + dVar294;
    dVar187 = dVar187 + dVar187;
    dVar123 = dVar123 + dVar123;
    dVar235 = dVar235 + dVar235;
    dVar169 = dVar169 + dVar169;
    dVar174 = dVar174 + dVar174;
    dVar262 = dVar262 + dVar262;
    dVar270 = dVar270 + dVar270;
    dVar274 = dVar274 + dVar274;
    dVar278 = dVar278 + dVar278;
    dVar241 = dVar241 + dVar241;
    dVar253 = dVar253 + dVar253;
    dVar256 = dVar256 + dVar256;
    dVar259 = dVar259 + dVar259;
    dVar216 = dVar216 + dVar216;
    dVar234 = dVar234 + dVar234;
    dVar236 = dVar236 + dVar236;
    dVar238 = dVar238 + dVar238;
    dVar118 = dVar118 + dVar118;
    dVar76 = dVar76 + dVar76;
    dVar94 = dVar94 + dVar94;
    dVar97 = dVar97 + dVar97;
    auVar180._0_8_ =
         dVar48 * ((local_2c8 * dVar183 - local_368 * dVar211) + local_348 * dVar117 + dVar303);
    auVar180._8_8_ =
         dVar48 * ((dStack_2c0 * dVar186 - dStack_360 * dVar281) + dStack_340 * dVar215 + dVar307);
    auVar180._16_8_ =
         dVar48 * ((dStack_2b8 * dVar196 - dStack_358 * dVar289) + dStack_338 * dVar237 + dVar293);
    auVar180._24_8_ =
         dVar48 * ((dStack_2b0 * dVar200 - dStack_350 * dVar296) + dStack_330 * dVar171 + dVar295);
    auVar221._0_8_ =
         ((local_2c8 * dVar116 - local_368 * dVar184) + local_348 * dVar119 + dVar189) * dVar48;
    auVar221._8_8_ =
         ((dStack_2c0 * dVar122 - dStack_360 * dVar188) + dStack_340 * dVar233 + dVar197) * dVar48;
    auVar221._16_8_ =
         ((dStack_2b8 * dVar93 - dStack_358 * dVar198) + dStack_338 * dVar156 + dVar199) * dVar48;
    auVar221._24_8_ =
         ((dStack_2b0 * dVar95 - dStack_350 * dVar202) + dStack_330 * dVar172 + dVar201) * dVar48;
    auVar192._0_8_ =
         ((local_2c8 * dVar118 - dVar241 * local_368) + local_348 * dVar123 + dVar49) * dVar48;
    auVar192._8_8_ =
         ((dStack_2c0 * dVar76 - dVar253 * dStack_360) + dStack_340 * dVar235 + dVar140) * dVar48;
    auVar192._16_8_ =
         ((dStack_2b8 * dVar94 - dVar256 * dStack_358) + dStack_338 * dVar169 + dVar75) * dVar48;
    auVar192._24_8_ =
         ((dStack_2b0 * dVar97 - dVar259 * dStack_350) + dStack_330 * dVar174 + dVar155) * dVar48;
    auVar152._0_8_ =
         (local_348 * dVar305 + dVar138 + (local_2c8 * dVar216 - dVar262 * local_368)) * dVar48;
    auVar152._8_8_ =
         (dStack_340 * dVar292 + dVar139 + (dStack_2c0 * dVar234 - dVar270 * dStack_360)) * dVar48;
    auVar152._16_8_ =
         (dStack_338 * dVar294 + dVar141 + (dStack_2b8 * dVar236 - dVar274 * dStack_358)) * dVar48;
    auVar152._24_8_ =
         (dStack_330 * dVar187 + dVar96 + (dStack_2b0 * dVar238 - dVar278 * dStack_350)) * dVar48;
    auVar206._0_8_ =
         local_328 *
         ((local_368 * dVar117 - auVar218._0_8_ * dVar183) + local_348 * dVar211 + dVar240);
    auVar206._8_8_ =
         dStack_320 *
         ((dStack_360 * dVar215 - auVar218._0_8_ * dVar186) + dStack_340 * dVar281 + dVar252);
    auVar206._16_8_ =
         dStack_318 *
         ((dStack_358 * dVar237 - auVar218._0_8_ * dVar196) + dStack_338 * dVar289 + dVar255);
    auVar206._24_8_ =
         dStack_310 *
         ((dStack_350 * dVar171 - auVar218._0_8_ * dVar200) + dStack_330 * dVar296 + dVar258);
    auVar89._0_8_ =
         local_328 *
         ((local_368 * dVar119 - auVar218._0_8_ * dVar116) + local_348 * dVar184 + dVar203);
    auVar89._8_8_ =
         dStack_320 *
         ((dStack_360 * dVar233 - auVar218._0_8_ * dVar122) + dStack_340 * dVar188 + dVar210);
    auVar89._16_8_ =
         dStack_318 *
         ((dStack_358 * dVar156 - auVar218._0_8_ * dVar93) + dStack_338 * dVar198 + dVar212);
    auVar89._24_8_ =
         dStack_310 *
         ((dStack_350 * dVar172 - auVar218._0_8_ * dVar95) + dStack_330 * dVar202 + dVar214);
    auVar71._0_8_ =
         local_328 *
         ((local_368 * dVar123 - auVar218._0_8_ * dVar118) + local_348 * dVar241 + dVar157);
    auVar71._8_8_ =
         dStack_320 *
         ((dStack_360 * dVar235 - auVar218._0_8_ * dVar76) + dStack_340 * dVar253 + dVar170);
    auVar71._16_8_ =
         dStack_318 *
         ((dStack_358 * dVar169 - auVar218._0_8_ * dVar94) + dStack_338 * dVar256 + dVar173);
    auVar71._24_8_ =
         dStack_310 *
         ((dStack_350 * dVar174 - auVar218._0_8_ * dVar97) + dStack_330 * dVar259 + dVar185);
    auVar134._0_8_ =
         local_328 *
         ((local_368 * dVar305 - dVar216 * auVar218._0_8_) + local_348 * dVar262 + dVar120);
    auVar134._8_8_ =
         dStack_320 *
         ((dStack_360 * dVar292 - dVar234 * auVar218._0_8_) + dStack_340 * dVar270 + dVar121);
    auVar134._16_8_ =
         dStack_318 *
         ((dStack_358 * dVar294 - dVar236 * auVar218._0_8_) + dStack_338 * dVar274 + dVar124);
    auVar134._24_8_ =
         dStack_310 *
         ((dStack_350 * dVar187 - dVar238 * auVar218._0_8_) + dStack_330 * dVar278 + dVar125);
    auVar246._0_8_ =
         local_188 *
         (local_348 * dVar183 + dVar209 + (auVar218._0_8_ * dVar211 - local_2c8 * dVar117));
    auVar246._8_8_ =
         dStack_180 *
         (dStack_340 * dVar186 + dVar213 + (auVar218._0_8_ * dVar281 - dStack_2c0 * dVar215));
    auVar246._16_8_ =
         dStack_178 *
         (dStack_338 * dVar196 + dVar287 + (auVar218._0_8_ * dVar289 - dStack_2b8 * dVar237));
    auVar246._24_8_ =
         dStack_170 *
         (dStack_330 * dVar200 + dVar291 + (auVar218._0_8_ * dVar296 - dStack_2b0 * dVar171));
    auVar267._0_8_ =
         local_188 *
         ((auVar218._0_8_ * dVar184 - local_2c8 * dVar119) + local_348 * dVar116 + dVar261);
    auVar267._8_8_ =
         dStack_180 *
         ((auVar218._0_8_ * dVar188 - dStack_2c0 * dVar233) + dStack_340 * dVar122 + dVar269);
    auVar267._16_8_ =
         dStack_178 *
         ((auVar218._0_8_ * dVar198 - dStack_2b8 * dVar156) + dStack_338 * dVar93 + dVar273);
    auVar267._24_8_ =
         dStack_170 *
         ((auVar218._0_8_ * dVar202 - dStack_2b0 * dVar172) + dStack_330 * dVar95 + dVar277);
    auVar286._0_8_ =
         local_188 *
         (local_348 * dVar118 + dVar260 + (auVar218._0_8_ * dVar241 - dVar123 * local_2c8));
    auVar286._8_8_ =
         dStack_180 *
         (dStack_340 * dVar76 + dVar263 + (auVar218._0_8_ * dVar253 - dVar235 * dStack_2c0));
    auVar286._16_8_ =
         dStack_178 *
         (dStack_338 * dVar94 + dVar264 + (auVar218._0_8_ * dVar256 - dVar169 * dStack_2b8));
    auVar286._24_8_ =
         dStack_170 *
         (dStack_330 * dVar97 + dVar271 + (auVar218._0_8_ * dVar259 - dVar174 * dStack_2b0));
    auVar142 = vcvtpd2ps_avx(auVar221);
    auVar78 = vcvtpd2ps_avx(auVar180);
    auVar222._0_8_ =
         local_188 *
         ((auVar218._0_8_ * dVar262 - local_2c8 * dVar305) + dVar216 * local_348 + dVar239);
    auVar222._8_8_ =
         dStack_180 *
         ((auVar218._0_8_ * dVar270 - dStack_2c0 * dVar292) + dVar234 * dStack_340 + dVar242);
    auVar222._16_8_ =
         dStack_178 *
         ((auVar218._0_8_ * dVar274 - dStack_2b8 * dVar294) + dVar236 * dStack_338 + dVar254);
    auVar222._24_8_ =
         dStack_170 *
         ((auVar218._0_8_ * dVar278 - dStack_2b0 * dVar187) + dVar238 * dStack_330 + dVar257);
    auVar165._16_16_ = auVar78;
    auVar165._0_16_ = auVar142;
    auVar19 = vcvtpd2ps_avx(auVar89);
    auVar99 = vcvtpd2ps_avx(auVar206);
    auVar158 = vcvtpd2ps_avx(auVar267);
    auVar181._16_16_ = auVar99;
    auVar181._0_16_ = auVar19;
    auVar299 = vcvtpd2ps_avx(auVar246);
    auVar112._16_16_ = auVar299;
    auVar112._0_16_ = auVar158;
    auVar98 = vcvtpd2ps_avx(auVar152);
    auVar79 = vcvtpd2ps_avx(auVar192);
    auVar50 = auVar130._0_16_;
    auVar126 = auVar130._16_16_;
    auVar153._16_16_ = auVar79;
    auVar153._0_16_ = auVar98;
    auVar175 = vcvtpd2ps_avx(auVar134);
    auVar204 = vpackssdw_avx(auVar50,auVar126);
    auVar80 = vcvtpd2ps_avx(auVar71);
    auVar90._16_16_ = auVar80;
    auVar90._0_16_ = auVar175;
    auVar159 = vcvtpd2ps_avx(auVar222);
    auVar77 = vcvtpd2ps_avx(auVar286);
    auVar265 = vpmovzxbw_avx(auVar17);
    auVar204 = vpand_avx(auVar204,auVar265);
    auVar204 = vpand_avx(auVar204,___xmm_00010001000100010001000100010001);
    auVar72._16_16_ = auVar77;
    auVar72._0_16_ = auVar159;
    auVar190 = vpsllw_avx(auVar204,0xf);
    auVar217 = auVar17;
    if ((((((((SUB161(auVar190 >> 0xf,0) & 1) != 0 || (SUB161(auVar190 >> 0x1f,0) & 1) != 0) ||
            (SUB161(auVar190 >> 0x2f,0) & 1) != 0) || (SUB161(auVar190 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar190 >> 0x4f,0) & 1) != 0) || (SUB161(auVar190 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar190 >> 0x6f,0) & 1) != 0) || auVar190[0xf] < '\0') {
      auVar163 = vpmovzxwd_avx2(auVar265);
      auVar163 = vpslld_avx2(auVar163,0x1f);
      auVar163 = vpsrad_avx2(auVar163,0x1f);
      auVar163 = vpand_avx2(auVar130,auVar163);
      auVar127._0_8_ = CONCAT44(__real_7f800000,__real_7f800000);
      auVar127._8_4_ = __real_7f800000;
      auVar127._12_4_ = __real_7f800000;
      auVar128._16_4_ = __real_7f800000;
      auVar128._0_16_ = auVar127;
      auVar128._20_4_ = __real_7f800000;
      auVar135._24_4_ = __real_7f800000;
      auVar135._0_24_ = auVar128;
      auVar135._28_4_ = __real_7f800000;
      auVar223._0_8_ = auVar142._0_8_ & auVar127._0_8_;
      uVar2 = auVar127._8_8_;
      auVar223._8_8_ = auVar142._8_8_ & uVar2;
      uVar3 = auVar128._16_8_;
      auVar223._16_8_ = auVar78._0_8_ & uVar3;
      uVar4 = auVar135._24_8_;
      auVar223._24_8_ = auVar78._8_8_ & uVar4;
      auVar207 = vpcmpeqd_avx2(auVar223,auVar135);
      auVar151 = vpcmpeqd_avx2(auVar223,auVar223);
      auVar217 = vpackssdw_avx(SUB3216(auVar207 ^ auVar151,0),SUB3216(auVar207 ^ auVar151,0x10));
      auVar265 = vpand_avx(auVar217,auVar204);
      auVar265 = vpsllw_avx(auVar265,0xf);
      if ((((((((SUB161(auVar265 >> 0xf,0) & 1) != 0 || (SUB161(auVar265 >> 0x1f,0) & 1) != 0) ||
              (SUB161(auVar265 >> 0x2f,0) & 1) != 0) || (SUB161(auVar265 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar265 >> 0x4f,0) & 1) != 0) || (SUB161(auVar265 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar265 >> 0x6f,0) & 1) != 0) || auVar265[0xf] < '\0') {
        auVar207 = vblendvps_avx(auVar163,auVar135,auVar207);
        auVar247._0_8_ = auVar19._0_8_ & auVar127._0_8_;
        auVar247._8_8_ = auVar19._8_8_ & uVar2;
        auVar247._16_8_ = auVar99._0_8_ & uVar3;
        auVar247._24_8_ = auVar99._8_8_ & uVar4;
        auVar151 = vpcmpeqd_avx2(auVar247,auVar135);
        auVar207 = vblendvps_avx(auVar207,auVar135,auVar151);
        auVar207 = vpshufb_avx2(auVar207,
                                ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                               );
        auVar207 = vpermq_avx2(auVar207,0xe8);
        auVar217 = auVar207._0_16_;
        auVar204 = vpand_avx(auVar204,auVar217);
        auVar204 = vpsllw_avx(auVar204,0xf);
        if ((((((((SUB161(auVar204 >> 0xf,0) & 1) != 0 || (SUB161(auVar204 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar204 >> 0x2f,0) & 1) != 0) || (SUB161(auVar204 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar204 >> 0x4f,0) & 1) != 0) || (SUB161(auVar204 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar204 >> 0x6f,0) & 1) != 0) || auVar204[0xf] < '\0') {
          auVar207 = vpmovzxwd_avx2(auVar217);
          auVar207 = vpslld_avx2(auVar207,0x1f);
          auVar207 = vpsrad_avx2(auVar207,0x1f);
          auVar207 = vpand_avx2(auVar207,auVar163);
          auVar224._0_8_ = auVar158._0_8_ & auVar127._0_8_;
          auVar224._8_8_ = auVar158._8_8_ & uVar2;
          auVar224._16_8_ = auVar299._0_8_ & uVar3;
          auVar224._24_8_ = auVar299._8_8_ & uVar4;
          auVar151 = vpcmpeqd_avx2(auVar224,auVar135);
          auVar207 = vblendvps_avx(auVar207,auVar135,auVar151);
          auVar207 = vpshufb_avx2(auVar207,
                                  ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                 );
          auVar207 = vpermq_avx2(auVar207,0xe8);
          auVar217 = auVar207._0_16_;
        }
      }
      auVar265 = vpackssdw_avx(auVar50,auVar126);
      auVar217 = vpshufb_avx(auVar217,___xmm_00000000000000000e0c0a0806040200);
      auVar204 = vpackssdw_avx(auVar163._0_16_,auVar163._16_16_);
      auVar217 = vpsllw_avx(auVar217,7);
      auVar217 = vpand_avx(auVar217,___xmm_80808080808080808080808080808080);
      auVar204 = vpacksswb_avx(auVar204,auVar204);
      auVar217 = vpcmpgtb_avx((undefined1  [16])0x0,auVar217);
      auVar217 = vpand_avx(auVar217,auVar204);
      auVar190 = vpmovzxbw_avx(auVar217);
      auVar204 = vpand_avx(auVar190,auVar265);
      auVar204 = vpand_avx(auVar204,___xmm_00010001000100010001000100010001);
      auVar265 = vpsllw_avx(auVar204,0xf);
      if ((((((((SUB161(auVar265 >> 0xf,0) & 1) != 0 || (SUB161(auVar265 >> 0x1f,0) & 1) != 0) ||
              (SUB161(auVar265 >> 0x2f,0) & 1) != 0) || (SUB161(auVar265 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar265 >> 0x4f,0) & 1) != 0) || (SUB161(auVar265 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar265 >> 0x6f,0) & 1) != 0) || auVar265[0xf] < '\0') {
        auVar163 = vpmovzxwd_avx2(auVar190);
        auVar163 = vpslld_avx2(auVar163,0x1f);
        auVar163 = vpsrad_avx2(auVar163,0x1f);
        auVar130 = vpand_avx2(auVar163,auVar130);
        auVar225._0_8_ = auVar98._0_8_ & auVar127._0_8_;
        auVar225._8_8_ = auVar98._8_8_ & uVar2;
        auVar225._16_8_ = auVar79._0_8_ & uVar3;
        auVar225._24_8_ = auVar79._8_8_ & uVar4;
        auVar163 = vpcmpeqd_avx2(auVar225,auVar135);
        auVar207 = vpcmpeqd_avx2(auVar225,auVar225);
        auVar217 = vpackssdw_avx(SUB3216(auVar163 ^ auVar207,0),SUB3216(auVar163 ^ auVar207,0x10));
        auVar265 = vpand_avx(auVar204,auVar217);
        auVar265 = vpsllw_avx(auVar265,0xf);
        if ((((((((SUB161(auVar265 >> 0xf,0) & 1) != 0 || (SUB161(auVar265 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar265 >> 0x2f,0) & 1) != 0) || (SUB161(auVar265 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar265 >> 0x4f,0) & 1) != 0) || (SUB161(auVar265 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar265 >> 0x6f,0) & 1) != 0) || auVar265[0xf] < '\0') {
          auVar163 = vblendvps_avx(auVar130,auVar135,auVar163);
          auVar248._0_8_ = auVar175._0_8_ & auVar127._0_8_;
          auVar248._8_8_ = auVar175._8_8_ & uVar2;
          auVar248._16_8_ = auVar80._0_8_ & uVar3;
          auVar248._24_8_ = auVar80._8_8_ & uVar4;
          auVar207 = vpcmpeqd_avx2(auVar248,auVar135);
          auVar163 = vblendvps_avx(auVar163,auVar135,auVar207);
          auVar163 = vpshufb_avx2(auVar163,
                                  ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                 );
          auVar163 = vpermq_avx2(auVar163,0xe8);
          auVar217 = auVar163._0_16_;
          auVar204 = vpand_avx(auVar204,auVar217);
          auVar204 = vpsllw_avx(auVar204,0xf);
          if ((((((((SUB161(auVar204 >> 0xf,0) & 1) != 0 || (SUB161(auVar204 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar204 >> 0x2f,0) & 1) != 0) || (SUB161(auVar204 >> 0x3f,0) & 1) != 0
                 ) || (SUB161(auVar204 >> 0x4f,0) & 1) != 0) ||
               (SUB161(auVar204 >> 0x5f,0) & 1) != 0) || (SUB161(auVar204 >> 0x6f,0) & 1) != 0) ||
              auVar204[0xf] < '\0') {
            auVar163 = vpmovzxwd_avx2(auVar217);
            auVar163 = vpslld_avx2(auVar163,0x1f);
            auVar163 = vpsrad_avx2(auVar163,0x1f);
            auVar163 = vpand_avx2(auVar163,auVar130);
            auVar226._0_8_ = auVar159._0_8_ & auVar127._0_8_;
            auVar226._8_8_ = auVar159._8_8_ & uVar2;
            auVar226._16_8_ = auVar77._0_8_ & uVar3;
            auVar226._24_8_ = auVar77._8_8_ & uVar4;
            auVar207 = vpcmpeqd_avx2(auVar226,auVar135);
            auVar163 = vblendvps_avx(auVar163,auVar135,auVar207);
            auVar163 = vpshufb_avx2(auVar163,
                                    ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                   );
            auVar163 = vpermq_avx2(auVar163,0xe8);
            auVar217 = auVar163._0_16_;
          }
        }
        auVar217 = vpshufb_avx(auVar217,___xmm_00000000000000000e0c0a0806040200);
        auVar204 = vpackssdw_avx(auVar130._0_16_,auVar130._16_16_);
        auVar217 = vpsllw_avx(auVar217,7);
        auVar217 = vpand_avx(auVar217,___xmm_80808080808080808080808080808080);
        auVar204 = vpacksswb_avx(auVar204,auVar204);
        auVar217 = vpcmpgtb_avx((undefined1  [16])0x0,auVar217);
        auVar217 = vpand_avx(auVar217,auVar204);
      }
    }
    auVar204 = vpackssdw_avx(auVar50,auVar126);
    auVar204 = vpacksswb_avx(auVar204,auVar204);
    auVar217 = vpand_avx(auVar217,___xmm_00000000000000000101010101010101);
    cVar8 = (char)uVar9;
    if (cVar8 == -1) {
      auVar193._16_16_ = auVar19;
      auVar193._0_16_ = auVar142;
      auVar130 = vshufpd_avx(auVar165,auVar193,2);
      auVar207 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar112);
      auVar163 = vpermpd_avx2(auVar181,0xe9);
      auVar163 = vpblendd_avx2(auVar207,auVar163,7);
      auVar207 = vpermd_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar163);
      auVar130 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar130);
      auVar130 = vpblendd_avx2(auVar130,auVar207,0xa4);
      *pauVar1 = auVar130;
      auVar207 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar163 = vpermd_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar163);
      auVar130 = vshufpd_avx(auVar165,auVar165,1);
      auVar130 = vpblendd_avx2(auVar163,auVar130,0x92);
      pauVar1[1] = auVar130;
      auVar149 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar151 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar163 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar181);
      auVar130 = vpermpd_avx2(auVar165,0xff);
      auVar130 = vblendpd_avx(auVar163,auVar130,1);
      auVar130 = vblendps_avx(auVar130,auVar112,0xe0);
      auVar130 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar130);
      pauVar1[2] = auVar130;
      auVar113._16_16_ = auVar175;
      auVar113._0_16_ = auVar98;
      auVar130 = vshufpd_avx(auVar153,auVar113,2);
      auVar163 = vpermps_avx2(auVar61,auVar72);
      auVar61 = vpermpd_avx2(auVar90,0xe9);
      auVar61 = vpblendd_avx2(auVar163,auVar61,7);
      auVar100 = vpermd_avx2(auVar100,auVar61);
      auVar130 = vpermps_avx2(auVar70,auVar130);
      auVar130 = vpblendd_avx2(auVar130,auVar100,0xa4);
      *pauVar14 = auVar130;
      auVar61 = vpermd_avx2(auVar207,auVar61);
      auVar130 = vshufpd_avx(auVar153,auVar153,1);
      auVar130 = vpblendd_avx2(auVar61,auVar130,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc) = auVar130;
      auVar61 = vpermps_avx2(auVar151,auVar90);
      auVar130 = vpermpd_avx2(auVar153,0xff);
      auVar130 = vblendpd_avx(auVar61,auVar130,1);
      auVar61 = vblendps_avx(auVar130,auVar72,0xe0);
      auVar61 = vpermps_avx2(auVar149,auVar61);
      *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc) = auVar61;
    }
    else {
      if ((uVar9 & 1) != 0) {
        *(int *)*pauVar1 = auVar142._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar12 = vextractps_avx(auVar142,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar12;
      }
      if ((uVar9 & 4) != 0) {
        uVar12 = vextractps_avx(auVar142,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar12;
      }
      if ((uVar9 & 8) != 0) {
        uVar12 = vextractps_avx(auVar142,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar12;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x10) = auVar78._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar12 = vextractps_avx(auVar78,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar12;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar12 = vextractps_avx(auVar78,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar12;
      }
      if (cVar8 < '\0') {
        uVar12 = vextractps_avx(auVar78,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar12;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)(*pauVar1 + 4) = auVar19._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar12 = vextractps_avx(auVar19,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar12;
      }
      if ((uVar9 & 4) != 0) {
        uVar12 = vextractps_avx(auVar19,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar12;
      }
      if ((uVar9 & 8) != 0) {
        uVar12 = vextractps_avx(auVar19,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar12;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x14) = auVar99._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar12 = vextractps_avx(auVar99,1);
        *(undefined4 *)pauVar1[2] = uVar12;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar12 = vextractps_avx(auVar99,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar12;
      }
      if (cVar8 < '\0') {
        uVar12 = vextractps_avx(auVar99,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar12;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)(*pauVar1 + 8) = auVar158._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar12 = vextractps_avx(auVar158,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar12;
      }
      if ((uVar9 & 4) != 0) {
        uVar12 = vextractps_avx(auVar158,2);
        *(undefined4 *)pauVar1[1] = uVar12;
      }
      if ((uVar9 & 8) != 0) {
        uVar12 = vextractps_avx(auVar158,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar12;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x18) = auVar299._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar12 = vextractps_avx(auVar299,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar12;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar12 = vextractps_avx(auVar299,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar12;
      }
      if (cVar8 < '\0') {
        uVar12 = vextractps_avx(auVar299,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar12;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)*pauVar14 = auVar98._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar12 = vextractps_avx(auVar98,1);
        *(undefined4 *)(param_2 + 0xc + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 4) != 0) {
        uVar12 = vextractps_avx(auVar98,2);
        *(undefined4 *)(param_2 + 0x18 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 8) != 0) {
        uVar12 = vextractps_avx(auVar98,3);
        *(undefined4 *)(param_2 + 0x24 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + uVar7 * 0xc) = auVar79._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar12 = vextractps_avx(auVar79,1);
        *(undefined4 *)(param_2 + 0x3c + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar12 = vextractps_avx(auVar79,2);
        *(undefined4 *)(param_2 + 0x48 + uVar7 * 0xc) = uVar12;
      }
      if (cVar8 < '\0') {
        uVar12 = vextractps_avx(auVar79,3);
        *(undefined4 *)(param_2 + 0x54 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)(param_2 + 4 + uVar7 * 0xc) = auVar175._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar12 = vextractps_avx(auVar175,1);
        *(undefined4 *)(param_2 + 0x10 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 4) != 0) {
        uVar12 = vextractps_avx(auVar175,2);
        *(undefined4 *)(param_2 + 0x1c + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 8) != 0) {
        uVar12 = vextractps_avx(auVar175,3);
        *(undefined4 *)(param_2 + 0x28 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + uVar7 * 0xc) = auVar80._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar12 = vextractps_avx(auVar80,1);
        *(undefined4 *)(param_2 + 0x40 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar12 = vextractps_avx(auVar80,2);
        *(undefined4 *)(param_2 + 0x4c + uVar7 * 0xc) = uVar12;
      }
      if (cVar8 < '\0') {
        uVar12 = vextractps_avx(auVar80,3);
        *(undefined4 *)(param_2 + 0x58 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)(param_2 + 8 + uVar7 * 0xc) = auVar159._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar12 = vextractps_avx(auVar159,1);
        *(undefined4 *)(param_2 + 0x14 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 4) != 0) {
        uVar12 = vextractps_avx(auVar159,2);
        *(undefined4 *)(param_2 + 0x20 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 8) != 0) {
        uVar12 = vextractps_avx(auVar159,3);
        *(undefined4 *)(param_2 + 0x2c + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + uVar7 * 0xc) = auVar77._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar12 = vextractps_avx(auVar77,1);
        *(undefined4 *)(param_2 + 0x44 + uVar7 * 0xc) = uVar12;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar12 = vextractps_avx(auVar77,2);
        *(undefined4 *)(param_2 + 0x50 + uVar7 * 0xc) = uVar12;
      }
      if (cVar8 < '\0') {
        auVar130 = ZEXT1632(auVar80);
        uVar12 = vextractps_avx(auVar77,3);
        *(undefined4 *)(param_2 + 0x5c + uVar7 * 0xc) = uVar12;
      }
      else {
        auVar130 = ZEXT1632(auVar80);
      }
    }
    auVar17 = vpblendvb_avx(auVar17,auVar217,auVar204);
  }
  auVar142 = vpand_avx(auVar17,___xmm_00000000000000000101010101010101);
  auVar103 = vpcmpeqd_avx2(auVar103,ZEXT1632(ZEXT816(0)));
  auVar130 = vpcmpeqd_avx2(auVar130,auVar130);
  auVar17 = vpackssdw_avx(SUB3216(auVar103 ^ auVar130,0),SUB3216(auVar103 ^ auVar130,0x10));
  auVar142 = vpcmpeqb_avx(auVar142,(undefined1  [16])0x0);
  auVar142 = vpmovsxbw_avx(auVar142);
  auVar17 = vpand_avx(auVar17,auVar142);
LAB_140d23ffd:
  return CONCAT71((int7)(uVar6 >> 8),
                  (___xmm_00010001000100010001000100010001 & auVar17) == (undefined1  [16])0x0);
}

// TransformClothSimulData_avx2 @ 140d24070

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformClothSimulData_avx2
               (longlong param_1,longlong param_2,double *param_3,double param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [24];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  ulonglong uVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined1 (*pauVar24) [32];
  longlong lVar25;
  undefined1 auVar28 [16];
  double dVar26;
  double dVar27;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  double dVar42;
  double dVar50;
  double dVar51;
  undefined1 auVar43 [32];
  double dVar52;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  double dVar53;
  double dVar54;
  double dVar61;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  double dVar60;
  double dVar62;
  undefined1 in_ZMM2 [64];
  double dVar66;
  undefined1 auVar67 [16];
  double dVar74;
  double dVar75;
  double dVar76;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  double dVar77;
  undefined1 auVar78 [16];
  double dVar83;
  double dVar84;
  double dVar85;
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar88 [16];
  double dVar86;
  double dVar87;
  double dVar97;
  undefined1 auVar89 [32];
  double dVar95;
  double dVar96;
  double dVar98;
  double dVar99;
  double dVar100;
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  double dVar101;
  double dVar102;
  double dVar109;
  double dVar111;
  undefined1 auVar103 [32];
  double dVar113;
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  double dVar110;
  double dVar112;
  double dVar114;
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  double dVar117;
  undefined1 auVar115 [32];
  double dVar118;
  undefined1 auVar116 [32];
  double dVar119;
  double dVar120;
  undefined1 auVar121 [16];
  double dVar129;
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  double dVar128;
  double dVar131;
  undefined1 auVar126 [32];
  double dVar130;
  double dVar132;
  undefined1 auVar127 [32];
  double dVar134;
  undefined1 auVar133 [32];
  double dVar135;
  double dVar140;
  double dVar141;
  double dVar142;
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  double dVar143;
  double dVar148;
  undefined1 auVar144 [16];
  double dVar149;
  double dVar150;
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  double dVar151;
  double dVar155;
  double dVar156;
  undefined1 auVar152 [32];
  double dVar157;
  undefined1 auVar153 [32];
  double dVar158;
  undefined1 auVar154 [32];
  double dVar159;
  double dVar160;
  double dVar161;
  double dVar162;
  double dVar163;
  double dVar164;
  double dVar165;
  double dVar166;
  double dVar167;
  double dVar168;
  double dVar169;
  double dVar170;
  double dVar171;
  double dVar172;
  double dVar173;
  double dVar174;
  double dVar175;
  double dVar176;
  double dVar177;
  double dVar178;
  double dVar179;
  double dVar180;
  double dVar181;
  double dVar182;
  double dVar183;
  double local_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  uint local_338;
  uint uStack_334;
  uint uStack_330;
  uint uStack_32c;
  uint uStack_328;
  uint uStack_324;
  uint uStack_320;
  uint uStack_31c;
  double local_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double local_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double local_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  undefined1 auVar33 [32];
  undefined1 auVar68 [32];
  undefined1 auVar145 [32];
  
  uVar20 = __real_80000000;
  auVar152._0_8_ =
       *param_3 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  auVar152._8_8_ = param_3[1] * _UNK_150b543c8;
  auVar152._16_8_ = param_3[2] * _UNK_150b543d0;
  auVar152._24_8_ = param_3[3] * _UNK_150b543d8;
  auVar15 = *(undefined1 (*) [24])(param_3 + 8);
  auVar138._24_8_ = 0;
  auVar138._0_24_ = auVar15;
  dVar118 = auVar15._0_8_;
  auVar57._0_8_ = (double)((ulonglong)dVar118 & __real_7fffffffffffffff);
  dVar132 = auVar15._8_8_;
  auVar57._8_8_ = (double)((ulonglong)dVar132 & __real_7fffffffffffffff);
  dVar158 = auVar15._16_8_;
  auVar57._16_8_ = (double)((ulonglong)dVar158 & __real_7fffffffffffffff);
  auVar57._24_8_ = 0.0;
  auVar146._8_8_ = __real_3e45798ee2308c3a;
  auVar146._0_8_ = __real_3e45798ee2308c3a;
  auVar146._16_8_ = __real_3e45798ee2308c3a;
  auVar146._24_8_ = __real_3e45798ee2308c3a;
  auVar89 = vcmppd_avx(auVar57,auVar146,2);
  auVar14 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
  auVar89 = vpackssdw_avx2(auVar89,auVar14);
  auVar68 = vpermq_avx2(auVar89,0xd8);
  auVar89._8_8_ = __real_46c8a6e32246c99c;
  auVar89._0_8_ = __real_46c8a6e32246c99c;
  auVar89._16_8_ = __real_46c8a6e32246c99c;
  auVar89._24_8_ = __real_46c8a6e32246c99c;
  auVar89 = vcmppd_avx(auVar138,auVar89,2);
  auVar43 = vpackssdw_avx2(auVar89,auVar14);
  auVar103._8_8_ = __real_3914c4e977ba1f5c;
  auVar103._0_8_ = __real_3914c4e977ba1f5c;
  auVar103._16_8_ = __real_3914c4e977ba1f5c;
  auVar103._24_8_ = __real_3914c4e977ba1f5c;
  auVar89 = vcmppd_avx(auVar103,auVar138,2);
  auVar122 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar89 = vpackssdw_avx2(auVar89,auVar122);
  auVar103 = vpand_avx2(auVar43,auVar89);
  auVar103 = vpermq_avx2(auVar103,0xd8);
  auVar103 = vpandn_avx2(auVar68,auVar103);
  iVar22 = vmovmskps_avx(auVar103);
  if (iVar22 == 0) {
    auVar89 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  }
  else {
    auVar57 = vcmppd_avx(auVar57,auVar146,6);
    auVar103 = vpackssdw_avx2(auVar57,auVar122);
    auVar121 = vcvtpd2ps_avx(auVar138);
    auVar88 = vcvtpd2ps_avx(auVar122);
    auVar122._16_16_ = auVar88;
    auVar122._0_16_ = auVar121;
    auVar57 = vrcpps_avx(auVar122);
    auVar88 = vpackssdw_avx(auVar103._0_16_,auVar103._16_16_);
    auVar67 = vpshufd_avx(auVar88,0xd8);
    auVar78._0_4_ = auVar57._0_4_ * (-(auVar57._0_4_ * auVar121._0_4_) + __real_40000000);
    auVar78._4_4_ = auVar57._4_4_ * (-(auVar57._4_4_ * auVar121._4_4_) + __real_40000000);
    auVar78._8_4_ = auVar57._8_4_ * (-(auVar57._8_4_ * auVar121._8_4_) + __real_40000000);
    auVar78._12_4_ = auVar57._12_4_ * (-(auVar57._12_4_ * auVar121._12_4_) + __real_40000000);
    auVar57 = vcvtps2pd_avx(auVar78);
    dVar77 = (-(dVar118 * auVar57._0_8_) + __real_4000000000000000) * auVar57._0_8_;
    dVar83 = (-(dVar132 * auVar57._8_8_) + __real_4000000000000000) * auVar57._8_8_;
    dVar84 = (-(dVar158 * auVar57._16_8_) + __real_4000000000000000) * auVar57._16_8_;
    dVar85 = (-(auVar57._24_8_ * 0.0) + __real_4000000000000000) * auVar57._24_8_;
    auVar57._0_8_ = (-(dVar118 * dVar77) + __real_4000000000000000) * dVar77;
    auVar57._8_8_ = (-(dVar132 * dVar83) + __real_4000000000000000) * dVar83;
    auVar57._16_8_ = (-(dVar158 * dVar84) + __real_4000000000000000) * dVar84;
    auVar57._24_8_ = (-(dVar85 * 0.0) + __real_4000000000000000) * dVar85;
    auVar121 = vpsllw_avx(auVar67,0xf);
    auVar121 = vpacksswb_avx(auVar121,auVar121);
    if ((byte)(SUB161(auVar121 >> 7,0) & 1 | (SUB161(auVar121 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar121 >> 0x17,0) & 1) << 2 | (SUB161(auVar121 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar121 >> 0x27,0) & 1) << 4 | (SUB161(auVar121 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar121 >> 0x37,0) & 1) << 6 | SUB161(auVar121 >> 0x3f,0) << 7) ==
        (byte)iVar22) goto LAB_140d242a8;
    auVar121 = vpackssdw_avx(auVar43._0_16_,auVar43._16_16_);
    auVar67 = vpackssdw_avx(auVar89._0_16_,auVar89._16_16_);
    auVar121 = vpand_avx(auVar121,auVar67);
    auVar121 = vpand_avx(auVar121,auVar88);
    auVar121 = vpshufd_avx(auVar121,0xd8);
    auVar89 = vpmovzxwd_avx2(auVar121);
    auVar89 = vpslld_avx2(auVar89,0x1f);
    auVar89 = vpsrad_avx2(auVar89,0x1f);
  }
  dVar77 = SUB648(ZEXT1664((undefined1  [16])0x0),8);
  auVar70._0_8_ = (ulonglong)dVar118 & __real_7fe0000000000000;
  auVar70._8_8_ = (ulonglong)dVar132 & __real_7fe0000000000000;
  auVar70._16_8_ = (ulonglong)dVar158 & __real_7fe0000000000000;
  auVar70._24_8_ = 0;
  auVar123._8_8_ = __real_7fcfffffffffffff;
  auVar123._0_8_ = __real_7fcfffffffffffff;
  auVar123._16_8_ = __real_7fcfffffffffffff;
  auVar123._24_8_ = __real_7fcfffffffffffff;
  auVar103 = vpsubq_avx2(auVar123,auVar70);
  auVar43 = vpsubq_avx2(auVar123,ZEXT832((ulonglong)dVar77 & __real_7fe0000000000000) << 0x40);
  auVar124._0_8_ = auVar43._0_8_ * 0.0;
  auVar124._8_8_ = dVar77 * auVar43._8_8_;
  auVar124._16_8_ = auVar43._16_8_ * 0.0;
  auVar124._24_8_ = auVar43._24_8_ * 0.0;
  auVar115._0_8_ = dVar118 * auVar103._0_8_;
  auVar115._8_8_ = dVar132 * auVar103._8_8_;
  auVar115._16_8_ = dVar158 * auVar103._16_8_;
  auVar115._24_8_ = auVar103._24_8_ * 0.0;
  auVar121 = vcvtpd2ps_avx(auVar115);
  auVar88 = vcvtpd2ps_avx(auVar124);
  auVar125._16_16_ = auVar88;
  auVar125._0_16_ = auVar121;
  auVar43 = vrcpps_avx(auVar125);
  auVar88._0_4_ = auVar43._0_4_ * (-(auVar43._0_4_ * auVar121._0_4_) + __real_40000000);
  auVar88._4_4_ = auVar43._4_4_ * (-(auVar43._4_4_ * auVar121._4_4_) + __real_40000000);
  auVar88._8_4_ = auVar43._8_4_ * (-(auVar43._8_4_ * auVar121._8_4_) + __real_40000000);
  auVar88._12_4_ = auVar43._12_4_ * (-(auVar43._12_4_ * auVar121._12_4_) + __real_40000000);
  auVar43 = vcvtps2pd_avx(auVar88);
  dVar77 = auVar103._0_8_ * auVar43._0_8_;
  dVar83 = auVar103._8_8_ * auVar43._8_8_;
  dVar84 = auVar103._16_8_ * auVar43._16_8_;
  dVar85 = auVar103._24_8_ * auVar43._24_8_;
  dVar77 = dVar77 * (-(dVar118 * dVar77) + __real_4000000000000000);
  dVar83 = dVar83 * (-(dVar132 * dVar83) + __real_4000000000000000);
  dVar84 = dVar84 * (-(dVar158 * dVar84) + __real_4000000000000000);
  dVar85 = dVar85 * (-(dVar85 * 0.0) + __real_4000000000000000);
  auVar43._0_8_ = dVar77 * (-(dVar77 * dVar118) + __real_4000000000000000);
  auVar43._8_8_ = dVar83 * (-(dVar83 * dVar132) + __real_4000000000000000);
  auVar43._16_8_ = dVar84 * (-(dVar84 * dVar158) + __real_4000000000000000);
  auVar43._24_8_ = dVar85 * (-(dVar85 * 0.0) + __real_4000000000000000);
  auVar89 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                        auVar89 ^ auVar14);
  auVar57 = vblendvps_avx(auVar57,auVar43,auVar89);
LAB_140d242a8:
  dVar118 = param_3[4];
  dVar132 = param_3[5];
  dVar158 = param_3[6];
  auVar89 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                        auVar68);
  auVar57 = vblendvps_avx(auVar57,SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar89);
  uVar21 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar21 = param_5;
  }
  auVar89 = vpermpd_avx2(auVar152,0x55);
  auVar43 = vpermpd_avx2(auVar152,0xaa);
  auVar103 = vpermpd_avx2(auVar152,0xff);
  auVar14 = vpermpd_avx2(auVar57,0x55);
  auVar68 = vpermpd_avx2(auVar57,0xaa);
  local_1a8 = auVar89._0_8_;
  dStack_1a0 = auVar89._8_8_;
  dStack_198 = auVar89._16_8_;
  dStack_190 = auVar89._24_8_;
  dStack_3e0 = auVar43._8_8_;
  dStack_3d8 = auVar43._16_8_;
  dStack_3d0 = auVar43._24_8_;
  local_3e8 = auVar43._0_8_;
  local_188 = auVar103._0_8_;
  dStack_180 = auVar103._8_8_;
  dStack_178 = auVar103._16_8_;
  dStack_170 = auVar103._24_8_;
  local_168 = auVar14._0_8_;
  dStack_160 = auVar14._8_8_;
  dStack_158 = auVar14._16_8_;
  dStack_150 = auVar14._24_8_;
  local_148 = auVar68._0_8_;
  dStack_140 = auVar68._8_8_;
  dStack_138 = auVar68._16_8_;
  dStack_130 = auVar68._24_8_;
  dVar77 = auVar57._0_8_;
  if ((int)(uVar21 & 0xfffffff8) < 1) {
    uVar23 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    lVar25 = 0x40;
    uVar23 = 0;
    do {
      auVar123 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar115 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar57 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar25);
      auVar89 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar25);
      auVar43 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar89);
      auVar103 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar57);
      auVar43 = vblendps_avx(auVar103,auVar43,0x88);
      auVar103 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar89);
      auVar14 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_1 + lVar25));
      auVar103 = vblendps_avx(auVar14,auVar103,0x13);
      auVar57 = vblendps_avx(auVar89,auVar57,0x24);
      auVar57 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar57);
      auVar89 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_1 + lVar25));
      auVar14 = vblendps_avx(auVar57,auVar89,0xe0);
      auVar57 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar25);
      auVar89 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar25);
      auVar68 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar89);
      auVar138 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar57);
      auVar68 = vblendps_avx(auVar138,auVar68,0x88);
      auVar138 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar89);
      auVar146 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_2 + lVar25));
      auVar138 = vblendps_avx(auVar146,auVar138,0x13);
      auVar70 = vperm2f128_avx(auVar68,auVar138,0x31);
      auVar57 = vblendps_avx(auVar89,auVar57,0x24);
      auVar57 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar57);
      auVar89 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_2 + lVar25));
      auVar57 = vblendps_avx(auVar57,auVar89,0xe0);
      auVar89 = vcvtps2pd_avx(auVar43._0_16_);
      auVar146 = vcvtps2pd_avx(auVar103._0_16_);
      auVar43 = vcvtps2pd_avx(auVar43._16_16_);
      auVar103 = vcvtps2pd_avx(auVar103._16_16_);
      auVar122 = vcvtps2pd_avx(auVar14._0_16_);
      auVar14 = vcvtps2pd_avx(auVar14._16_16_);
      auVar67._0_4_ = auVar68._0_4_ ^ uVar20;
      auVar67._4_4_ = auVar68._4_4_ ^ uVar20;
      auVar67._8_4_ = auVar68._8_4_ ^ uVar20;
      auVar67._12_4_ = auVar68._12_4_ ^ uVar20;
      auVar68._16_4_ = auVar138._0_4_ ^ uVar20;
      auVar68._0_16_ = auVar67;
      auVar68._20_4_ = auVar138._4_4_ ^ uVar20;
      auVar68._24_4_ = auVar138._8_4_ ^ uVar20;
      auVar68._28_4_ = auVar138._12_4_ ^ uVar20;
      dVar151 = param_4 * auVar146._0_8_ - dVar118;
      dVar155 = param_4 * auVar146._8_8_ - dVar118;
      dVar156 = param_4 * auVar146._16_8_ - dVar118;
      dVar157 = param_4 * auVar146._24_8_ - dVar118;
      dVar176 = param_4 * auVar89._0_8_ - dVar118;
      dVar178 = param_4 * auVar89._8_8_ - dVar118;
      dVar180 = param_4 * auVar89._16_8_ - dVar118;
      dVar182 = param_4 * auVar89._24_8_ - dVar118;
      dVar159 = param_4 * auVar103._0_8_ - dVar132;
      dVar160 = param_4 * auVar103._8_8_ - dVar132;
      dVar161 = param_4 * auVar103._16_8_ - dVar132;
      dVar162 = param_4 * auVar103._24_8_ - dVar132;
      dVar53 = param_4 * auVar43._0_8_ - dVar132;
      dVar60 = param_4 * auVar43._8_8_ - dVar132;
      dVar62 = param_4 * auVar43._16_8_ - dVar132;
      dVar64 = param_4 * auVar43._24_8_ - dVar132;
      dVar135 = param_4 * auVar14._0_8_ - dVar158;
      dVar140 = param_4 * auVar14._8_8_ - dVar158;
      dVar141 = param_4 * auVar14._16_8_ - dVar158;
      dVar142 = param_4 * auVar14._24_8_ - dVar158;
      dVar42 = param_4 * auVar122._0_8_ - dVar158;
      dVar50 = param_4 * auVar122._8_8_ - dVar158;
      dVar51 = param_4 * auVar122._16_8_ - dVar158;
      dVar52 = param_4 * auVar122._24_8_ - dVar158;
      dVar101 = auVar152._0_8_ * dVar159 - local_1a8 * dVar151;
      dVar109 = auVar152._0_8_ * dVar160 - dStack_1a0 * dVar155;
      dVar111 = auVar152._0_8_ * dVar161 - dStack_198 * dVar156;
      dVar113 = auVar152._0_8_ * dVar162 - dStack_190 * dVar157;
      dVar86 = auVar152._0_8_ * dVar53 - local_1a8 * dVar176;
      dVar95 = auVar152._0_8_ * dVar60 - dStack_1a0 * dVar178;
      dVar97 = auVar152._0_8_ * dVar62 - dStack_198 * dVar180;
      dVar99 = auVar152._0_8_ * dVar64 - dStack_190 * dVar182;
      dVar119 = local_1a8 * dVar135 - local_3e8 * dVar159;
      dVar128 = dStack_1a0 * dVar140 - dStack_3e0 * dVar160;
      dVar129 = dStack_198 * dVar141 - dStack_3d8 * dVar161;
      dVar131 = dStack_190 * dVar142 - dStack_3d0 * dVar162;
      dVar164 = local_1a8 * dVar42 - local_3e8 * dVar53;
      dVar167 = dStack_1a0 * dVar50 - dStack_3e0 * dVar60;
      dVar170 = dStack_198 * dVar51 - dStack_3d8 * dVar62;
      dVar173 = dStack_190 * dVar52 - dStack_3d0 * dVar64;
      dVar26 = dVar151 * local_3e8 - dVar135 * auVar152._0_8_;
      dVar36 = dVar155 * dStack_3e0 - dVar140 * auVar152._0_8_;
      dVar38 = dVar156 * dStack_3d8 - dVar141 * auVar152._0_8_;
      dVar40 = dVar157 * dStack_3d0 - dVar142 * auVar152._0_8_;
      dVar143 = dVar176 * local_3e8 - auVar152._0_8_ * dVar42;
      dVar148 = dVar178 * dStack_3e0 - auVar152._0_8_ * dVar50;
      dVar149 = dVar180 * dStack_3d8 - auVar152._0_8_ * dVar51;
      dVar150 = dVar182 * dStack_3d0 - auVar152._0_8_ * dVar52;
      dVar164 = dVar164 + dVar164;
      dVar167 = dVar167 + dVar167;
      dVar170 = dVar170 + dVar170;
      dVar173 = dVar173 + dVar173;
      dVar119 = dVar119 + dVar119;
      dVar128 = dVar128 + dVar128;
      dVar129 = dVar129 + dVar129;
      dVar131 = dVar131 + dVar131;
      dVar143 = dVar143 + dVar143;
      dVar148 = dVar148 + dVar148;
      dVar149 = dVar149 + dVar149;
      dVar150 = dVar150 + dVar150;
      dVar26 = dVar26 + dVar26;
      dVar36 = dVar36 + dVar36;
      dVar38 = dVar38 + dVar38;
      dVar40 = dVar40 + dVar40;
      dVar86 = dVar86 + dVar86;
      dVar95 = dVar95 + dVar95;
      dVar97 = dVar97 + dVar97;
      dVar99 = dVar99 + dVar99;
      dVar101 = dVar101 + dVar101;
      dVar109 = dVar109 + dVar109;
      dVar111 = dVar111 + dVar111;
      dVar113 = dVar113 + dVar113;
      auVar89 = vcvtps2pd_avx(auVar68._16_16_);
      auVar43 = vcvtps2pd_avx(auVar67);
      auVar121._4_4_ = auVar70._4_4_ ^ uVar20;
      auVar121._0_4_ = auVar70._0_4_ ^ uVar20;
      auVar121._8_4_ = auVar70._8_4_ ^ uVar20;
      auVar121._12_4_ = auVar70._12_4_ ^ uVar20;
      auVar14._16_4_ = auVar70._16_4_ ^ uVar20;
      auVar14._0_16_ = auVar121;
      auVar14._20_4_ = auVar70._20_4_ ^ uVar20;
      auVar14._24_4_ = auVar70._24_4_ ^ uVar20;
      auVar14._28_4_ = auVar70._28_4_ ^ uVar20;
      auVar103 = vcvtps2pd_avx(auVar14._16_16_);
      local_338 = auVar57._0_4_;
      uStack_334 = auVar57._4_4_;
      uStack_330 = auVar57._8_4_;
      uStack_32c = auVar57._12_4_;
      uStack_328 = auVar57._16_4_;
      uStack_324 = auVar57._20_4_;
      uStack_320 = auVar57._24_4_;
      uStack_31c = auVar57._28_4_;
      auVar144._0_4_ = uVar20 ^ local_338;
      auVar144._4_4_ = uVar20 ^ uStack_334;
      auVar144._8_4_ = uVar20 ^ uStack_330;
      auVar144._12_4_ = uVar20 ^ uStack_32c;
      auVar145._16_4_ = uVar20 ^ uStack_328;
      auVar145._0_16_ = auVar144;
      auVar145._20_4_ = uVar20 ^ uStack_324;
      auVar145._24_4_ = uVar20 ^ uStack_320;
      auVar145._28_4_ = uVar20 ^ uStack_31c;
      auVar57 = vcvtps2pd_avx(auVar121);
      auVar14 = vcvtps2pd_avx(auVar145._16_16_);
      auVar68 = vcvtps2pd_avx(auVar144);
      dVar83 = auVar89._0_8_;
      dVar85 = auVar89._8_8_;
      dVar10 = auVar89._16_8_;
      dVar12 = auVar89._24_8_;
      dVar117 = auVar103._0_8_;
      dVar120 = auVar103._8_8_;
      dVar130 = auVar103._16_8_;
      dVar134 = auVar103._24_8_;
      dVar84 = auVar14._0_8_;
      dVar9 = auVar14._8_8_;
      dVar11 = auVar14._16_8_;
      dVar13 = auVar14._24_8_;
      dVar54 = auVar152._0_8_ * dVar117 - local_1a8 * dVar83;
      dVar61 = auVar152._0_8_ * dVar120 - dStack_1a0 * dVar85;
      dVar63 = auVar152._0_8_ * dVar130 - dStack_198 * dVar10;
      dVar65 = auVar152._0_8_ * dVar134 - dStack_190 * dVar12;
      dVar27 = local_1a8 * dVar84 - dVar117 * local_3e8;
      dVar37 = dStack_1a0 * dVar9 - dVar120 * dStack_3e0;
      dVar39 = dStack_198 * dVar11 - dVar130 * dStack_3d8;
      dVar41 = dStack_190 * dVar13 - dVar134 * dStack_3d0;
      dVar87 = dVar83 * local_3e8 - auVar152._0_8_ * dVar84;
      dVar96 = dVar85 * dStack_3e0 - auVar152._0_8_ * dVar9;
      dVar98 = dVar10 * dStack_3d8 - auVar152._0_8_ * dVar11;
      dVar100 = dVar12 * dStack_3d0 - auVar152._0_8_ * dVar13;
      dVar27 = dVar27 + dVar27;
      dVar37 = dVar37 + dVar37;
      dVar39 = dVar39 + dVar39;
      dVar41 = dVar41 + dVar41;
      dVar87 = dVar87 + dVar87;
      dVar96 = dVar96 + dVar96;
      dVar98 = dVar98 + dVar98;
      dVar100 = dVar100 + dVar100;
      dVar54 = dVar54 + dVar54;
      dVar61 = dVar61 + dVar61;
      dVar63 = dVar63 + dVar63;
      dVar65 = dVar65 + dVar65;
      local_228 = auVar43._0_8_;
      dStack_220 = auVar43._8_8_;
      dStack_218 = auVar43._16_8_;
      dStack_210 = auVar43._24_8_;
      local_268 = auVar57._0_8_;
      dStack_260 = auVar57._8_8_;
      dStack_258 = auVar57._16_8_;
      dStack_250 = auVar57._24_8_;
      dVar66 = auVar152._0_8_ * local_268 - local_1a8 * local_228;
      dVar74 = auVar152._0_8_ * dStack_260 - dStack_1a0 * dStack_220;
      dVar75 = auVar152._0_8_ * dStack_258 - dStack_198 * dStack_218;
      dVar76 = auVar152._0_8_ * dStack_250 - dStack_190 * dStack_210;
      dVar102 = auVar68._0_8_;
      dVar165 = local_1a8 * dVar102 - local_268 * local_3e8;
      dVar110 = auVar68._8_8_;
      dVar168 = dStack_1a0 * dVar110 - dStack_260 * dStack_3e0;
      dVar112 = auVar68._16_8_;
      dVar171 = dStack_198 * dVar112 - dStack_258 * dStack_3d8;
      dVar114 = auVar68._24_8_;
      dVar174 = dStack_190 * dVar114 - dStack_250 * dStack_3d0;
      dVar177 = local_228 * local_3e8 - dVar102 * auVar152._0_8_;
      dVar179 = dStack_220 * dStack_3e0 - dVar110 * auVar152._0_8_;
      dVar181 = dStack_218 * dStack_3d8 - dVar112 * auVar152._0_8_;
      dVar183 = dStack_210 * dStack_3d0 - dVar114 * auVar152._0_8_;
      dVar165 = dVar165 + dVar165;
      dVar168 = dVar168 + dVar168;
      dVar171 = dVar171 + dVar171;
      dVar174 = dVar174 + dVar174;
      dVar177 = dVar177 + dVar177;
      dVar179 = dVar179 + dVar179;
      dVar181 = dVar181 + dVar181;
      dVar183 = dVar183 + dVar183;
      dVar66 = dVar66 + dVar66;
      dVar74 = dVar74 + dVar74;
      dVar75 = dVar75 + dVar75;
      dVar76 = dVar76 + dVar76;
      auVar79._0_8_ =
           dVar77 * (local_188 * dVar119 + dVar151 + (local_1a8 * dVar101 - dVar26 * local_3e8));
      auVar79._8_8_ =
           dVar77 * (dStack_180 * dVar128 + dVar155 + (dStack_1a0 * dVar109 - dVar36 * dStack_3e0));
      auVar79._16_8_ =
           dVar77 * (dStack_178 * dVar129 + dVar156 + (dStack_198 * dVar111 - dVar38 * dStack_3d8));
      auVar79._24_8_ =
           dVar77 * (dStack_170 * dVar131 + dVar157 + (dStack_190 * dVar113 - dVar40 * dStack_3d0));
      auVar90._0_8_ =
           dVar77 * (local_188 * dVar164 + dVar176 + (local_1a8 * dVar86 - dVar143 * local_3e8));
      auVar90._8_8_ =
           dVar77 * (dStack_180 * dVar167 + dVar178 + (dStack_1a0 * dVar95 - dVar148 * dStack_3e0));
      auVar90._16_8_ =
           dVar77 * (dStack_178 * dVar170 + dVar180 + (dStack_198 * dVar97 - dVar149 * dStack_3d8));
      auVar90._24_8_ =
           dVar77 * (dStack_170 * dVar173 + dVar182 + (dStack_190 * dVar99 - dVar150 * dStack_3d0));
      auVar104._0_8_ =
           local_168 *
           (local_188 * dVar26 + dVar159 + (dVar119 * local_3e8 - auVar152._0_8_ * dVar101));
      auVar104._8_8_ =
           dStack_160 *
           (dStack_180 * dVar36 + dVar160 + (dVar128 * dStack_3e0 - auVar152._0_8_ * dVar109));
      auVar104._16_8_ =
           dStack_158 *
           (dStack_178 * dVar38 + dVar161 + (dVar129 * dStack_3d8 - auVar152._0_8_ * dVar111));
      auVar104._24_8_ =
           dStack_150 *
           (dStack_170 * dVar40 + dVar162 + (dVar131 * dStack_3d0 - auVar152._0_8_ * dVar113));
      auVar126._0_8_ =
           (local_188 * dVar143 + dVar53 + (dVar164 * local_3e8 - auVar152._0_8_ * dVar86)) *
           local_168;
      auVar126._8_8_ =
           (dStack_180 * dVar148 + dVar60 + (dVar167 * dStack_3e0 - auVar152._0_8_ * dVar95)) *
           dStack_160;
      auVar126._16_8_ =
           (dStack_178 * dVar149 + dVar62 + (dVar170 * dStack_3d8 - auVar152._0_8_ * dVar97)) *
           dStack_158;
      auVar126._24_8_ =
           (dStack_170 * dVar150 + dVar64 + (dVar173 * dStack_3d0 - auVar152._0_8_ * dVar99)) *
           dStack_150;
      auVar136._0_8_ =
           local_148 *
           (local_188 * dVar101 + dVar135 + (auVar152._0_8_ * dVar26 - local_1a8 * dVar119));
      auVar136._8_8_ =
           dStack_140 *
           (dStack_180 * dVar109 + dVar140 + (auVar152._0_8_ * dVar36 - dStack_1a0 * dVar128));
      auVar136._16_8_ =
           dStack_138 *
           (dStack_178 * dVar111 + dVar141 + (auVar152._0_8_ * dVar38 - dStack_198 * dVar129));
      auVar136._24_8_ =
           dStack_130 *
           (dStack_170 * dVar113 + dVar142 + (auVar152._0_8_ * dVar40 - dStack_190 * dVar131));
      auVar153._0_8_ =
           local_148 *
           (local_188 * dVar86 + dVar42 + (auVar152._0_8_ * dVar143 - local_1a8 * dVar164));
      auVar153._8_8_ =
           dStack_140 *
           (dStack_180 * dVar95 + dVar50 + (auVar152._0_8_ * dVar148 - dStack_1a0 * dVar167));
      auVar153._16_8_ =
           dStack_138 *
           (dStack_178 * dVar97 + dVar51 + (auVar152._0_8_ * dVar149 - dStack_198 * dVar170));
      auVar153._24_8_ =
           dStack_130 *
           (dStack_170 * dVar99 + dVar52 + (auVar152._0_8_ * dVar150 - dStack_190 * dVar173));
      auVar121 = vcvtpd2ps_avx(auVar90);
      auVar88 = vcvtpd2ps_avx(auVar79);
      auVar67 = vcvtpd2ps_avx(auVar126);
      auVar80._16_16_ = auVar88;
      auVar80._0_16_ = auVar121;
      auVar88 = vcvtpd2ps_avx(auVar104);
      auVar105._16_16_ = auVar88;
      auVar105._0_16_ = auVar67;
      auVar88 = vcvtpd2ps_avx(auVar153);
      auVar78 = vcvtpd2ps_avx(auVar136);
      auVar137._16_16_ = auVar78;
      auVar137._0_16_ = auVar88;
      auVar91._16_16_ = auVar67;
      auVar91._0_16_ = auVar121;
      auVar43 = vshufpd_avx(auVar80,auVar91,2);
      auVar89 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar137);
      auVar57 = vpermpd_avx2(auVar105,0xe9);
      auVar57 = vblendps_avx(auVar89,auVar57,7);
      auVar89 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar57);
      auVar103 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar43);
      auVar89 = vblendps_avx(auVar103,auVar89,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar25) = auVar89;
      auVar14 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar89 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar57);
      auVar57 = vshufpd_avx(auVar43,auVar43,1);
      auVar57 = vblendps_avx(auVar89,auVar57,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar25) = auVar57;
      auVar138 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar68 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar89 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar105);
      auVar57 = vpermpd_avx2(auVar80,0xff);
      auVar57 = vblendpd_avx(auVar89,auVar57,1);
      auVar57 = vpblendd_avx2(auVar57,auVar137,0xe0);
      auVar92._0_8_ =
           dVar77 * (local_188 * dVar27 + dVar83 + (local_1a8 * dVar54 - dVar87 * local_3e8));
      auVar92._8_8_ =
           dVar77 * (dStack_180 * dVar37 + dVar85 + (dStack_1a0 * dVar61 - dVar96 * dStack_3e0));
      auVar92._16_8_ =
           dVar77 * (dStack_178 * dVar39 + dVar10 + (dStack_198 * dVar63 - dVar98 * dStack_3d8));
      auVar92._24_8_ =
           dVar77 * (dStack_170 * dVar41 + dVar12 + (dStack_190 * dVar65 - dVar100 * dStack_3d0));
      auVar29._0_8_ =
           (local_188 * dVar165 + local_228 + (local_1a8 * dVar66 - dVar177 * local_3e8)) * dVar77;
      auVar29._8_8_ =
           (dStack_180 * dVar168 + dStack_220 + (dStack_1a0 * dVar74 - dVar179 * dStack_3e0)) *
           dVar77;
      auVar29._16_8_ =
           (dStack_178 * dVar171 + dStack_218 + (dStack_198 * dVar75 - dVar181 * dStack_3d8)) *
           dVar77;
      auVar29._24_8_ =
           (dStack_170 * dVar174 + dStack_210 + (dStack_190 * dVar76 - dVar183 * dStack_3d0)) *
           dVar77;
      auVar44._0_8_ =
           local_168 *
           (local_188 * dVar87 + dVar117 + (dVar27 * local_3e8 - auVar152._0_8_ * dVar54));
      auVar44._8_8_ =
           dStack_160 *
           (dStack_180 * dVar96 + dVar120 + (dVar37 * dStack_3e0 - auVar152._0_8_ * dVar61));
      auVar44._16_8_ =
           dStack_158 *
           (dStack_178 * dVar98 + dVar130 + (dVar39 * dStack_3d8 - auVar152._0_8_ * dVar63));
      auVar44._24_8_ =
           dStack_150 *
           (dStack_170 * dVar100 + dVar134 + (dVar41 * dStack_3d0 - auVar152._0_8_ * dVar65));
      auVar69._0_8_ =
           local_168 *
           (local_188 * dVar177 + local_268 + (dVar165 * local_3e8 - auVar152._0_8_ * dVar66));
      auVar69._8_8_ =
           dStack_160 *
           (dStack_180 * dVar179 + dStack_260 + (dVar168 * dStack_3e0 - auVar152._0_8_ * dVar74));
      auVar69._16_8_ =
           dStack_158 *
           (dStack_178 * dVar181 + dStack_258 + (dVar171 * dStack_3d8 - auVar152._0_8_ * dVar75));
      auVar69._24_8_ =
           dStack_150 *
           (dStack_170 * dVar183 + dStack_250 + (dVar174 * dStack_3d0 - auVar152._0_8_ * dVar76));
      auVar55._0_8_ =
           local_148 *
           (local_188 * dVar54 + dVar84 + (auVar152._0_8_ * dVar87 - local_1a8 * dVar27));
      auVar55._8_8_ =
           dStack_140 *
           (dStack_180 * dVar61 + dVar9 + (auVar152._0_8_ * dVar96 - dStack_1a0 * dVar37));
      auVar55._16_8_ =
           dStack_138 *
           (dStack_178 * dVar63 + dVar11 + (auVar152._0_8_ * dVar98 - dStack_198 * dVar39));
      auVar55._24_8_ =
           dStack_130 *
           (dStack_170 * dVar65 + dVar13 + (auVar152._0_8_ * dVar100 - dStack_190 * dVar41));
      auVar121 = vcvtpd2ps_avx(auVar29);
      auVar106._0_8_ =
           local_148 *
           (local_188 * dVar66 + dVar102 + (auVar152._0_8_ * dVar177 - local_1a8 * dVar165));
      auVar106._8_8_ =
           dStack_140 *
           (dStack_180 * dVar74 + dVar110 + (auVar152._0_8_ * dVar179 - dStack_1a0 * dVar168));
      auVar106._16_8_ =
           dStack_138 *
           (dStack_178 * dVar75 + dVar112 + (auVar152._0_8_ * dVar181 - dStack_198 * dVar171));
      auVar106._24_8_ =
           dStack_130 *
           (dStack_170 * dVar76 + dVar114 + (auVar152._0_8_ * dVar183 - dStack_190 * dVar174));
      auVar88 = vcvtpd2ps_avx(auVar92);
      auVar93._16_16_ = auVar88;
      auVar93._0_16_ = auVar121;
      auVar88 = vcvtpd2ps_avx(auVar69);
      auVar67 = vcvtpd2ps_avx(auVar44);
      auVar78 = vcvtpd2ps_avx(auVar106);
      auVar144 = vcvtpd2ps_avx(auVar55);
      auVar45._16_16_ = auVar67;
      auVar45._0_16_ = auVar88;
      auVar57 = vpermd_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                            auVar57);
      *(undefined1 (*) [32])(param_1 + lVar25) = auVar57;
      auVar56._16_16_ = auVar144;
      auVar56._0_16_ = auVar78;
      auVar30._16_16_ = auVar88;
      auVar30._0_16_ = auVar121;
      auVar43 = vshufpd_avx(auVar93,auVar30,2);
      auVar89 = vpermps_avx2(auVar115,auVar56);
      auVar57 = vpermpd_avx2(auVar45,0xe9);
      auVar57 = vblendps_avx(auVar89,auVar57,7);
      auVar89 = vpermps_avx2(auVar123,auVar43);
      auVar103 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                              ,auVar57);
      auVar89 = vblendps_avx(auVar89,auVar103,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar25) = auVar89;
      auVar89 = vpermps_avx2(auVar14,auVar57);
      auVar57 = vshufpd_avx(auVar43,auVar43,1);
      auVar57 = vblendps_avx(auVar89,auVar57,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar25) = auVar57;
      auVar89 = vpermps_avx2(auVar68,auVar45);
      auVar57 = vpermpd_avx2(auVar93,0xff);
      auVar57 = vblendpd_avx(auVar89,auVar57,1);
      auVar57 = vpblendd_avx2(auVar57,auVar56,0xe0);
      auVar57 = vpermd_avx2(auVar138,auVar57);
      *(undefined1 (*) [32])(param_2 + lVar25) = auVar57;
      lVar25 = lVar25 + 0x60;
      uVar23 = uVar23 + 8;
    } while ((int)uVar23 < (int)(uVar21 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar23) {
      return;
    }
  }
  auVar103 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar43 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar89 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  auVar31._4_4_ = uVar23;
  auVar31._0_4_ = uVar23;
  auVar31._8_4_ = uVar23;
  auVar31._12_4_ = uVar23;
  auVar31._16_4_ = uVar23;
  auVar31._20_4_ = uVar23;
  auVar31._24_4_ = uVar23;
  auVar31._28_4_ = uVar23;
  auVar57 = vpor_avx2(auVar31,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar46._4_4_ = param_5;
  auVar46._0_4_ = param_5;
  auVar46._8_4_ = param_5;
  auVar46._12_4_ = param_5;
  auVar46._16_4_ = param_5;
  auVar46._20_4_ = param_5;
  auVar46._24_4_ = param_5;
  auVar46._28_4_ = param_5;
  auVar57 = vpcmpgtd_avx2(auVar46,auVar57);
  uVar18 = (ulonglong)uVar23;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar18 * 0xc);
  uVar20 = vmovmskps_avx(auVar57);
  if (uVar20 == 0xff) {
    auVar57 = pauVar1[1];
    auVar14 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar57);
    auVar68 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar1);
    auVar14 = vblendps_avx(auVar68,auVar14,0x88);
    auVar68 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar57);
    auVar138 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            pauVar1[2]);
    auVar68 = vblendps_avx(auVar138,auVar68,0x13);
    auVar32._16_16_ = auVar68._0_16_;
    auVar32._0_16_ = auVar14._0_16_;
    auVar70 = vperm2f128_avx(auVar14,auVar68,0x31);
    auVar57 = vblendps_avx(auVar57,*pauVar1,0x24);
    auVar57 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar57);
    auVar14 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           pauVar1[2]);
    auVar138 = vblendps_avx(auVar57,auVar14,0xe0);
    auVar57 = *(undefined1 (*) [32])(param_2 + uVar18 * 0xc);
    auVar14 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar18 * 0xc);
    auVar68 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar18 * 0xc);
    auVar146 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                            auVar14);
    auVar122 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar57);
    auVar146 = vblendps_avx(auVar122,auVar146,0x88);
    auVar122 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                            auVar14);
    auVar115 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            auVar68);
    auVar122 = vblendps_avx(auVar115,auVar122,0x13);
    auVar47._16_16_ = auVar122._0_16_;
    auVar47._0_16_ = auVar146._0_16_;
    auVar146 = vperm2f128_avx(auVar146,auVar122,0x31);
    auVar57 = vblendps_avx(auVar14,auVar57,0x24);
    auVar57 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar57);
    auVar14 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           auVar68);
    auVar57 = vblendps_avx(auVar57,auVar14,0xe0);
  }
  else {
    auVar32 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
    auVar70 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar57);
    auVar138 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
    auVar47 = vgatherdps(ZEXT832(0),auVar57);
    auVar146 = vgatherdps(ZEXT1632(ZEXT816(0)),auVar57);
    auVar57 = vgatherdps(ZEXT1632(ZEXT816(0)),auVar57);
  }
  pauVar24 = (undefined1 (*) [32])(param_2 + uVar18 * 0xc);
  auVar14 = vcvtps2pd_avx(auVar32._0_16_);
  auVar68 = vcvtps2pd_avx(auVar32._16_16_);
  auVar122 = vcvtps2pd_avx(auVar70._0_16_);
  auVar70 = vcvtps2pd_avx(auVar70._16_16_);
  dVar129 = param_4 * auVar68._0_8_ - dVar118;
  dVar131 = param_4 * auVar68._8_8_ - dVar118;
  dVar135 = param_4 * auVar68._16_8_ - dVar118;
  dVar141 = param_4 * auVar68._24_8_ - dVar118;
  dVar151 = param_4 * auVar14._0_8_ - dVar118;
  dVar117 = param_4 * auVar14._8_8_ - dVar118;
  dVar155 = param_4 * auVar14._16_8_ - dVar118;
  dVar118 = param_4 * auVar14._24_8_ - dVar118;
  auVar14 = vcvtps2pd_avx(auVar138._0_16_);
  auVar68 = vcvtps2pd_avx(auVar138._16_16_);
  dVar102 = param_4 * auVar70._0_8_ - dVar132;
  dVar110 = param_4 * auVar70._8_8_ - dVar132;
  dVar112 = param_4 * auVar70._16_8_ - dVar132;
  dVar114 = param_4 * auVar70._24_8_ - dVar132;
  dVar120 = param_4 * auVar122._0_8_ - dVar132;
  dVar156 = param_4 * auVar122._8_8_ - dVar132;
  dVar130 = param_4 * auVar122._16_8_ - dVar132;
  dVar132 = param_4 * auVar122._24_8_ - dVar132;
  dVar177 = param_4 * auVar68._0_8_ - dVar158;
  dVar179 = param_4 * auVar68._8_8_ - dVar158;
  dVar181 = param_4 * auVar68._16_8_ - dVar158;
  dVar183 = param_4 * auVar68._24_8_ - dVar158;
  dVar161 = param_4 * auVar14._0_8_ - dVar158;
  dVar165 = param_4 * auVar14._8_8_ - dVar158;
  dVar171 = param_4 * auVar14._16_8_ - dVar158;
  dVar158 = param_4 * auVar14._24_8_ - dVar158;
  auVar28._0_4_ = auVar47._0_4_ ^ __real_80000000;
  auVar28._4_4_ = auVar47._4_4_ ^ __real_80000000;
  auVar28._8_4_ = auVar47._8_4_ ^ __real_80000000;
  auVar28._12_4_ = auVar47._12_4_ ^ __real_80000000;
  auVar33._16_4_ = auVar47._16_4_ ^ __real_80000000;
  auVar33._0_16_ = auVar28;
  auVar33._20_4_ = auVar47._20_4_ ^ __real_80000000;
  auVar33._24_4_ = auVar47._24_4_ ^ __real_80000000;
  auVar33._28_4_ = auVar47._28_4_ ^ __real_80000000;
  dVar86 = auVar152._0_8_ * dVar102 - local_1a8 * dVar129;
  dVar96 = auVar152._0_8_ * dVar110 - dStack_1a0 * dVar131;
  dVar99 = auVar152._0_8_ * dVar112 - dStack_198 * dVar135;
  dVar109 = auVar152._0_8_ * dVar114 - dStack_190 * dVar141;
  dVar167 = local_1a8 * dVar177 - local_3e8 * dVar102;
  dVar170 = dStack_1a0 * dVar179 - dStack_3e0 * dVar110;
  dVar173 = dStack_198 * dVar181 - dStack_3d8 * dVar112;
  dVar74 = dStack_190 * dVar183 - dStack_3d0 * dVar114;
  dVar119 = local_3e8 * dVar129 - auVar152._0_8_ * dVar177;
  dVar143 = dStack_3e0 * dVar131 - auVar152._0_8_ * dVar179;
  dVar128 = dStack_3d8 * dVar135 - auVar152._0_8_ * dVar181;
  dVar148 = dStack_3d0 * dVar141 - auVar152._0_8_ * dVar183;
  dVar167 = dVar167 + dVar167;
  dVar170 = dVar170 + dVar170;
  dVar173 = dVar173 + dVar173;
  dVar74 = dVar74 + dVar74;
  dVar119 = dVar119 + dVar119;
  dVar143 = dVar143 + dVar143;
  dVar128 = dVar128 + dVar128;
  dVar148 = dVar148 + dVar148;
  dVar86 = dVar86 + dVar86;
  dVar96 = dVar96 + dVar96;
  dVar99 = dVar99 + dVar99;
  dVar109 = dVar109 + dVar109;
  auVar14 = vcvtps2pd_avx(auVar33._16_16_);
  auVar68 = vcvtps2pd_avx(auVar28);
  auVar3._4_4_ = auVar146._4_4_ ^ __real_80000000;
  auVar3._0_4_ = auVar146._0_4_ ^ __real_80000000;
  auVar3._8_4_ = auVar146._8_4_ ^ __real_80000000;
  auVar3._12_4_ = auVar146._12_4_ ^ __real_80000000;
  auVar16._16_4_ = auVar146._16_4_ ^ __real_80000000;
  auVar16._0_16_ = auVar3;
  auVar16._20_4_ = auVar146._20_4_ ^ __real_80000000;
  auVar16._24_4_ = auVar146._24_4_ ^ __real_80000000;
  auVar16._28_4_ = auVar146._28_4_ ^ __real_80000000;
  auVar138 = vcvtps2pd_avx(auVar16._16_16_);
  dVar26 = auVar152._0_8_ * dVar120 - local_1a8 * dVar151;
  dVar36 = auVar152._0_8_ * dVar156 - dStack_1a0 * dVar117;
  dVar38 = auVar152._0_8_ * dVar130 - dStack_198 * dVar155;
  dVar40 = auVar152._0_8_ * dVar132 - dStack_190 * dVar118;
  dVar61 = local_1a8 * dVar161 - dVar120 * local_3e8;
  dVar63 = dStack_1a0 * dVar165 - dVar156 * dStack_3e0;
  dVar65 = dStack_198 * dVar171 - dVar130 * dStack_3d8;
  dVar75 = dStack_190 * dVar158 - dVar132 * dStack_3d0;
  dVar87 = local_3e8 * dVar151 - auVar152._0_8_ * dVar161;
  dVar97 = dStack_3e0 * dVar117 - auVar152._0_8_ * dVar165;
  dVar100 = dStack_3d8 * dVar155 - auVar152._0_8_ * dVar171;
  dVar111 = dStack_3d0 * dVar118 - auVar152._0_8_ * dVar158;
  dVar61 = dVar61 + dVar61;
  dVar63 = dVar63 + dVar63;
  dVar65 = dVar65 + dVar65;
  dVar75 = dVar75 + dVar75;
  dVar87 = dVar87 + dVar87;
  dVar97 = dVar97 + dVar97;
  dVar100 = dVar100 + dVar100;
  dVar111 = dVar111 + dVar111;
  dVar26 = dVar26 + dVar26;
  dVar36 = dVar36 + dVar36;
  dVar38 = dVar38 + dVar38;
  dVar40 = dVar40 + dVar40;
  auVar146 = vcvtps2pd_avx(auVar3);
  auVar4._4_4_ = auVar57._4_4_ ^ __real_80000000;
  auVar4._0_4_ = auVar57._0_4_ ^ __real_80000000;
  auVar4._8_4_ = auVar57._8_4_ ^ __real_80000000;
  auVar4._12_4_ = auVar57._12_4_ ^ __real_80000000;
  auVar17._16_4_ = auVar57._16_4_ ^ __real_80000000;
  auVar17._0_16_ = auVar4;
  auVar17._20_4_ = auVar57._20_4_ ^ __real_80000000;
  auVar17._24_4_ = auVar57._24_4_ ^ __real_80000000;
  auVar17._28_4_ = auVar57._28_4_ ^ __real_80000000;
  auVar57 = vcvtps2pd_avx(auVar17._16_16_);
  auVar122 = vcvtps2pd_avx(auVar4);
  dVar83 = auVar14._0_8_;
  dVar85 = auVar14._8_8_;
  dVar10 = auVar14._16_8_;
  dVar12 = auVar14._24_8_;
  dVar42 = auVar138._0_8_;
  dVar157 = auVar152._0_8_ * dVar42 - local_1a8 * dVar83;
  dVar51 = auVar138._8_8_;
  dVar134 = auVar152._0_8_ * dVar51 - dStack_1a0 * dVar85;
  dVar53 = auVar138._16_8_;
  dVar159 = auVar152._0_8_ * dVar53 - dStack_198 * dVar10;
  dVar54 = auVar138._24_8_;
  dVar160 = auVar152._0_8_ * dVar54 - dStack_190 * dVar12;
  dVar84 = auVar68._0_8_;
  dVar9 = auVar68._8_8_;
  dVar11 = auVar68._16_8_;
  dVar13 = auVar68._24_8_;
  dVar95 = auVar146._0_8_;
  dVar62 = auVar152._0_8_ * dVar95 - local_1a8 * dVar84;
  dVar98 = auVar146._8_8_;
  dVar64 = auVar152._0_8_ * dVar98 - dStack_1a0 * dVar9;
  dVar101 = auVar146._16_8_;
  dVar66 = auVar152._0_8_ * dVar101 - dStack_198 * dVar11;
  dVar113 = auVar146._24_8_;
  dVar76 = auVar152._0_8_ * dVar113 - dStack_190 * dVar13;
  dVar178 = auVar57._0_8_;
  dVar166 = local_1a8 * dVar178 - local_3e8 * dVar42;
  dVar180 = auVar57._8_8_;
  dVar169 = dStack_1a0 * dVar180 - dStack_3e0 * dVar51;
  dVar182 = auVar57._16_8_;
  dVar172 = dStack_198 * dVar182 - dStack_3d8 * dVar53;
  dVar163 = auVar57._24_8_;
  dVar175 = dStack_190 * dVar163 - dStack_3d0 * dVar54;
  dVar162 = auVar122._0_8_;
  dVar149 = local_1a8 * dVar162 - local_3e8 * dVar95;
  dVar168 = auVar122._8_8_;
  dVar150 = dStack_1a0 * dVar168 - dStack_3e0 * dVar98;
  dVar174 = auVar122._16_8_;
  dVar140 = dStack_198 * dVar174 - dStack_3d8 * dVar101;
  dVar176 = auVar122._24_8_;
  dVar142 = dStack_190 * dVar176 - dStack_3d0 * dVar113;
  dVar50 = local_3e8 * dVar83 - auVar152._0_8_ * dVar178;
  dVar52 = dStack_3e0 * dVar85 - auVar152._0_8_ * dVar180;
  dVar164 = dStack_3d8 * dVar10 - auVar152._0_8_ * dVar182;
  dVar60 = dStack_3d0 * dVar12 - auVar152._0_8_ * dVar163;
  dVar27 = local_3e8 * dVar84 - auVar152._0_8_ * dVar162;
  dVar37 = dStack_3e0 * dVar9 - auVar152._0_8_ * dVar168;
  dVar39 = dStack_3d8 * dVar11 - auVar152._0_8_ * dVar174;
  dVar41 = dStack_3d0 * dVar13 - auVar152._0_8_ * dVar176;
  dVar149 = dVar149 + dVar149;
  dVar150 = dVar150 + dVar150;
  dVar140 = dVar140 + dVar140;
  dVar142 = dVar142 + dVar142;
  dVar166 = dVar166 + dVar166;
  dVar169 = dVar169 + dVar169;
  dVar172 = dVar172 + dVar172;
  dVar175 = dVar175 + dVar175;
  dVar27 = dVar27 + dVar27;
  dVar37 = dVar37 + dVar37;
  dVar39 = dVar39 + dVar39;
  dVar41 = dVar41 + dVar41;
  dVar50 = dVar50 + dVar50;
  dVar52 = dVar52 + dVar52;
  dVar164 = dVar164 + dVar164;
  dVar60 = dVar60 + dVar60;
  dVar62 = dVar62 + dVar62;
  dVar64 = dVar64 + dVar64;
  dVar66 = dVar66 + dVar66;
  dVar76 = dVar76 + dVar76;
  dVar157 = dVar157 + dVar157;
  dVar134 = dVar134 + dVar134;
  dVar159 = dVar159 + dVar159;
  dVar160 = dVar160 + dVar160;
  auVar127._0_8_ =
       ((local_1a8 * dVar86 - local_3e8 * dVar119) + local_188 * dVar167 + dVar129) * dVar77;
  auVar127._8_8_ =
       ((dStack_1a0 * dVar96 - dStack_3e0 * dVar143) + dStack_180 * dVar170 + dVar131) * dVar77;
  auVar127._16_8_ =
       ((dStack_198 * dVar99 - dStack_3d8 * dVar128) + dStack_178 * dVar173 + dVar135) * dVar77;
  auVar127._24_8_ =
       ((dStack_190 * dVar109 - dStack_3d0 * dVar148) + dStack_170 * dVar74 + dVar141) * dVar77;
  auVar133._0_8_ =
       ((local_1a8 * dVar26 - local_3e8 * dVar87) + local_188 * dVar61 + dVar151) * dVar77;
  auVar133._8_8_ =
       ((dStack_1a0 * dVar36 - dStack_3e0 * dVar97) + dStack_180 * dVar63 + dVar117) * dVar77;
  auVar133._16_8_ =
       ((dStack_198 * dVar38 - dStack_3d8 * dVar100) + dStack_178 * dVar65 + dVar155) * dVar77;
  auVar133._24_8_ =
       ((dStack_190 * dVar40 - dStack_3d0 * dVar111) + dStack_170 * dVar75 + dVar118) * dVar77;
  auVar139._0_8_ =
       dVar77 * ((local_1a8 * dVar157 - local_3e8 * dVar50) + local_188 * dVar166 + dVar83);
  auVar139._8_8_ =
       dVar77 * ((dStack_1a0 * dVar134 - dStack_3e0 * dVar52) + dStack_180 * dVar169 + dVar85);
  auVar139._16_8_ =
       dVar77 * ((dStack_198 * dVar159 - dStack_3d8 * dVar164) + dStack_178 * dVar172 + dVar10);
  auVar139._24_8_ =
       dVar77 * ((dStack_190 * dVar160 - dStack_3d0 * dVar60) + dStack_170 * dVar175 + dVar12);
  auVar48._0_8_ =
       dVar77 * ((local_1a8 * dVar62 - local_3e8 * dVar27) + local_188 * dVar149 + dVar84);
  auVar48._8_8_ =
       dVar77 * ((dStack_1a0 * dVar64 - dStack_3e0 * dVar37) + dStack_180 * dVar150 + dVar9);
  auVar48._16_8_ =
       dVar77 * ((dStack_198 * dVar66 - dStack_3d8 * dVar39) + dStack_178 * dVar140 + dVar11);
  auVar48._24_8_ =
       dVar77 * ((dStack_190 * dVar76 - dStack_3d0 * dVar41) + dStack_170 * dVar142 + dVar13);
  auVar81._0_8_ =
       local_168 * ((local_3e8 * dVar167 - auVar152._0_8_ * dVar86) + local_188 * dVar119 + dVar102)
  ;
  auVar81._8_8_ =
       dStack_160 *
       ((dStack_3e0 * dVar170 - auVar152._0_8_ * dVar96) + dStack_180 * dVar143 + dVar110);
  auVar81._16_8_ =
       dStack_158 *
       ((dStack_3d8 * dVar173 - auVar152._0_8_ * dVar99) + dStack_178 * dVar128 + dVar112);
  auVar81._24_8_ =
       dStack_150 *
       ((dStack_3d0 * dVar74 - auVar152._0_8_ * dVar109) + dStack_170 * dVar148 + dVar114);
  auVar116._0_8_ =
       local_168 * ((local_3e8 * dVar61 - auVar152._0_8_ * dVar26) + local_188 * dVar87 + dVar120);
  auVar116._8_8_ =
       dStack_160 *
       ((dStack_3e0 * dVar63 - auVar152._0_8_ * dVar36) + dStack_180 * dVar97 + dVar156);
  auVar116._16_8_ =
       dStack_158 *
       ((dStack_3d8 * dVar65 - auVar152._0_8_ * dVar38) + dStack_178 * dVar100 + dVar130);
  auVar116._24_8_ =
       dStack_150 *
       ((dStack_3d0 * dVar75 - auVar152._0_8_ * dVar40) + dStack_170 * dVar111 + dVar132);
  auVar154._0_8_ =
       local_168 * ((local_3e8 * dVar166 - auVar152._0_8_ * dVar157) + local_188 * dVar50 + dVar42);
  auVar154._8_8_ =
       dStack_160 *
       ((dStack_3e0 * dVar169 - auVar152._0_8_ * dVar134) + dStack_180 * dVar52 + dVar51);
  auVar154._16_8_ =
       dStack_158 *
       ((dStack_3d8 * dVar172 - auVar152._0_8_ * dVar159) + dStack_178 * dVar164 + dVar53);
  auVar154._24_8_ =
       dStack_150 *
       ((dStack_3d0 * dVar175 - auVar152._0_8_ * dVar160) + dStack_170 * dVar60 + dVar54);
  auVar58._0_8_ =
       local_168 * (local_188 * dVar27 + dVar95 + (local_3e8 * dVar149 - auVar152._0_8_ * dVar62));
  auVar58._8_8_ =
       dStack_160 *
       (dStack_180 * dVar37 + dVar98 + (dStack_3e0 * dVar150 - auVar152._0_8_ * dVar64));
  auVar58._16_8_ =
       dStack_158 *
       (dStack_178 * dVar39 + dVar101 + (dStack_3d8 * dVar140 - auVar152._0_8_ * dVar66));
  auVar58._24_8_ =
       dStack_150 *
       (dStack_170 * dVar41 + dVar113 + (dStack_3d0 * dVar142 - auVar152._0_8_ * dVar76));
  auVar71._0_8_ =
       local_148 * (local_188 * dVar86 + dVar177 + (auVar152._0_8_ * dVar119 - local_1a8 * dVar167))
  ;
  auVar71._8_8_ =
       dStack_140 *
       (dStack_180 * dVar96 + dVar179 + (auVar152._0_8_ * dVar143 - dStack_1a0 * dVar170));
  auVar71._16_8_ =
       dStack_138 *
       (dStack_178 * dVar99 + dVar181 + (auVar152._0_8_ * dVar128 - dStack_198 * dVar173));
  auVar71._24_8_ =
       dStack_130 *
       (dStack_170 * dVar109 + dVar183 + (auVar152._0_8_ * dVar148 - dStack_190 * dVar74));
  auVar147._0_8_ =
       local_148 * ((auVar152._0_8_ * dVar87 - local_1a8 * dVar61) + local_188 * dVar26 + dVar161);
  auVar147._8_8_ =
       dStack_140 *
       ((auVar152._0_8_ * dVar97 - dStack_1a0 * dVar63) + dStack_180 * dVar36 + dVar165);
  auVar147._16_8_ =
       dStack_138 *
       ((auVar152._0_8_ * dVar100 - dStack_198 * dVar65) + dStack_178 * dVar38 + dVar171);
  auVar147._24_8_ =
       dStack_130 *
       ((auVar152._0_8_ * dVar111 - dStack_190 * dVar75) + dStack_170 * dVar40 + dVar158);
  auVar34._0_8_ =
       local_148 * (local_188 * dVar157 + dVar178 + (auVar152._0_8_ * dVar50 - local_1a8 * dVar166))
  ;
  auVar34._8_8_ =
       dStack_140 *
       (dStack_180 * dVar134 + dVar180 + (auVar152._0_8_ * dVar52 - dStack_1a0 * dVar169));
  auVar34._16_8_ =
       dStack_138 *
       (dStack_178 * dVar159 + dVar182 + (auVar152._0_8_ * dVar164 - dStack_198 * dVar172));
  auVar34._24_8_ =
       dStack_130 *
       (dStack_170 * dVar160 + dVar163 + (auVar152._0_8_ * dVar60 - dStack_190 * dVar175));
  auVar121 = vcvtpd2ps_avx(auVar133);
  auVar88 = vcvtpd2ps_avx(auVar127);
  auVar107._0_8_ =
       local_148 * ((auVar152._0_8_ * dVar27 - local_1a8 * dVar149) + dVar62 * local_188 + dVar162);
  auVar107._8_8_ =
       dStack_140 *
       ((auVar152._0_8_ * dVar37 - dStack_1a0 * dVar150) + dVar64 * dStack_180 + dVar168);
  auVar107._16_8_ =
       dStack_138 *
       ((auVar152._0_8_ * dVar39 - dStack_198 * dVar140) + dVar66 * dStack_178 + dVar174);
  auVar107._24_8_ =
       dStack_130 *
       ((auVar152._0_8_ * dVar41 - dStack_190 * dVar142) + dVar76 * dStack_170 + dVar176);
  auVar94._16_16_ = auVar88;
  auVar94._0_16_ = auVar121;
  auVar67 = vcvtpd2ps_avx(auVar116);
  auVar78 = vcvtpd2ps_avx(auVar81);
  auVar144 = vcvtpd2ps_avx(auVar147);
  auVar82._16_16_ = auVar78;
  auVar82._0_16_ = auVar67;
  auVar3 = vcvtpd2ps_avx(auVar71);
  auVar72._16_16_ = auVar3;
  auVar72._0_16_ = auVar144;
  auVar4 = vcvtpd2ps_avx(auVar48);
  auVar28 = vcvtpd2ps_avx(auVar139);
  auVar5 = vcvtpd2ps_avx(auVar58);
  auVar6 = vcvtpd2ps_avx(auVar154);
  auVar59._16_16_ = auVar28;
  auVar59._0_16_ = auVar4;
  auVar49._16_16_ = auVar6;
  auVar49._0_16_ = auVar5;
  auVar7 = vcvtpd2ps_avx(auVar107);
  auVar8 = vcvtpd2ps_avx(auVar34);
  auVar35._16_16_ = auVar8;
  auVar35._0_16_ = auVar7;
  cVar19 = (char)uVar20;
  if (cVar19 == -1) {
    auVar108._16_16_ = auVar67;
    auVar108._0_16_ = auVar121;
    auVar14 = vshufpd_avx(auVar94,auVar108,2);
    auVar68 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar72);
    auVar57 = vpermpd_avx2(auVar82,0xe9);
    auVar57 = vblendps_avx(auVar68,auVar57,7);
    auVar68 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003,
                           auVar57);
    auVar14 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar14);
    auVar14 = vblendps_avx(auVar14,auVar68,0xa4);
    *pauVar1 = auVar14;
    auVar68 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
    auVar14 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar57);
    auVar57 = vshufpd_avx(auVar94,auVar94,1);
    auVar57 = vblendps_avx(auVar14,auVar57,0x92);
    pauVar1[1] = auVar57;
    auVar146 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
    auVar138 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
    auVar14 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001,
                           auVar82);
    auVar57 = vpermpd_avx2(auVar94,0xff);
    auVar57 = vblendpd_avx(auVar14,auVar57,1);
    auVar57 = vblendps_avx(auVar57,auVar72,0xe0);
    auVar57 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar57);
    pauVar1[2] = auVar57;
    auVar73._16_16_ = auVar5;
    auVar73._0_16_ = auVar4;
    auVar14 = vshufpd_avx(auVar59,auVar73,2);
    auVar89 = vpermps_avx2(auVar89,auVar35);
    auVar57 = vpermpd_avx2(auVar49,0xe9);
    auVar57 = vblendps_avx(auVar89,auVar57,7);
    auVar89 = vpermps_avx2(auVar43,auVar57);
    auVar43 = vpermps_avx2(auVar103,auVar14);
    auVar89 = vblendps_avx(auVar43,auVar89,0xa4);
    *pauVar24 = auVar89;
    auVar89 = vpermps_avx2(auVar68,auVar57);
    auVar57 = vshufpd_avx(auVar59,auVar59,1);
    auVar57 = vblendps_avx(auVar89,auVar57,0x92);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar18 * 0xc) = auVar57;
    auVar89 = vpermps_avx2(auVar138,auVar49);
    auVar57 = vpermpd_avx2(auVar59,0xff);
    auVar57 = vblendpd_avx(auVar89,auVar57,1);
    auVar57 = vblendps_avx(auVar57,auVar35,0xe0);
    auVar57 = vpermps_avx2(auVar146,auVar57);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar18 * 0xc) = auVar57;
  }
  else {
    if ((uVar20 & 1) != 0) {
      *(int *)*pauVar1 = auVar121._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar121,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar121,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar121,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x10) = auVar88._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar88,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar88,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar88,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)(*pauVar1 + 4) = auVar67._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar67,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar67,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar67,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x14) = auVar78._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar78,1);
      *(undefined4 *)pauVar1[2] = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar78,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar78,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)(*pauVar1 + 8) = auVar144._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar144,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar144,2);
      *(undefined4 *)pauVar1[1] = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar144,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x18) = auVar3._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar3,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar3,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar3,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)*pauVar24 = auVar4._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar4,1);
      *(undefined4 *)(param_2 + 0xc + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar4,2);
      *(undefined4 *)(param_2 + 0x18 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar4,3);
      *(undefined4 *)(param_2 + 0x24 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(param_2 + 0x30 + uVar18 * 0xc) = auVar28._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar28,1);
      *(undefined4 *)(param_2 + 0x3c + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar28,2);
      *(undefined4 *)(param_2 + 0x48 + uVar18 * 0xc) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar28,3);
      *(undefined4 *)(param_2 + 0x54 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)(param_2 + 4 + uVar18 * 0xc) = auVar5._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar5,1);
      *(undefined4 *)(param_2 + 0x10 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar5,2);
      *(undefined4 *)(param_2 + 0x1c + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar5,3);
      *(undefined4 *)(param_2 + 0x28 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(param_2 + 0x34 + uVar18 * 0xc) = auVar6._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar6,1);
      *(undefined4 *)(param_2 + 0x40 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar6,2);
      *(undefined4 *)(param_2 + 0x4c + uVar18 * 0xc) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar6,3);
      *(undefined4 *)(param_2 + 0x58 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)(param_2 + 8 + uVar18 * 0xc) = auVar7._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar7,1);
      *(undefined4 *)(param_2 + 0x14 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar7,2);
      *(undefined4 *)(param_2 + 0x20 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar7,3);
      *(undefined4 *)(param_2 + 0x2c + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(param_2 + 0x38 + uVar18 * 0xc) = auVar8._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar8,1);
      *(undefined4 *)(param_2 + 0x44 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar8,2);
      *(undefined4 *)(param_2 + 0x50 + uVar18 * 0xc) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar8,3);
      *(undefined4 *)(param_2 + 0x5c + uVar18 * 0xc) = uVar2;
    }
  }
  return;
}

// TransformClothSimulDataAndCheckFinite_avx2 @ 140d25600

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2
TransformClothSimulDataAndCheckFinite_avx2
          (longlong param_1,longlong param_2,double *param_3,double param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 (*pauVar13) [32];
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [24];
  undefined1 auVar18 [24];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar27 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  double dVar42;
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  double dVar43;
  undefined1 auVar45 [16];
  double dVar52;
  double dVar54;
  undefined1 auVar46 [32];
  undefined1 auVar44 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  double dVar53;
  undefined1 in_ZMM2 [64];
  double dVar55;
  undefined1 auVar56 [16];
  double dVar63;
  double dVar64;
  double dVar66;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar65 [16];
  undefined1 auVar59 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar69 [16];
  double dVar68;
  double dVar76;
  double dVar77;
  undefined1 auVar70 [16];
  double dVar67;
  undefined1 auVar71 [24];
  undefined1 auVar72 [32];
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar82;
  double dVar91;
  undefined1 auVar85 [32];
  double dVar90;
  double dVar92;
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar96 [16];
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar104;
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  double dVar101;
  double dVar102;
  double dVar103;
  double dVar105;
  double dVar106;
  double dVar107;
  double dVar108;
  double dVar109;
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  double dVar110;
  double dVar111;
  double dVar112;
  double dVar114;
  double dVar115;
  double dVar116;
  double dVar117;
  double dVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  undefined1 auVar113 [32];
  double dVar123;
  undefined1 auVar125 [16];
  double dVar124;
  undefined1 auVar126 [16];
  double dVar136;
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  double dVar134;
  double dVar138;
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  double dVar135;
  double dVar137;
  double dVar139;
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar140 [16];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  double dVar145;
  double dVar146;
  undefined1 auVar147 [16];
  double dVar154;
  double dVar156;
  double dVar158;
  undefined1 auVar148 [32];
  double dVar155;
  double dVar157;
  double dVar159;
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  double dVar160;
  double dVar166;
  double dVar167;
  undefined1 auVar161 [32];
  double dVar168;
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  double dVar169;
  double dVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  double dVar176;
  double dVar178;
  double dVar180;
  undefined1 auVar173 [32];
  double dVar177;
  double dVar179;
  double dVar181;
  undefined1 auVar175 [32];
  double dVar182;
  double dVar183;
  double dVar185;
  double dVar186;
  double dVar187;
  double dVar188;
  double dVar189;
  double dVar190;
  undefined1 auVar184 [32];
  double dVar191;
  double dVar192;
  double dVar193;
  double dVar197;
  double dVar198;
  undefined1 auVar194 [16];
  double dVar196;
  double dVar199;
  double dVar200;
  double dVar201;
  double dVar203;
  undefined1 auVar195 [32];
  double dVar204;
  double dVar205;
  undefined1 auVar202 [16];
  double dVar206;
  double dVar209;
  double dVar210;
  double dVar211;
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  double local_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined1 auVar23 [32];
  undefined1 auVar28 [32];
  undefined1 auVar22 [32];
  undefined1 auVar26 [32];
  undefined1 auVar60 [32];
  undefined1 auVar75 [32];
  undefined1 auVar174 [32];
  
  uVar9 = __real_80000000;
  auVar161._0_8_ =
       *param_3 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  auVar161._8_8_ = param_3[1] * _UNK_150b543c8;
  auVar161._16_8_ = param_3[2] * _UNK_150b543d0;
  auVar161._24_8_ = param_3[3] * _UNK_150b543d8;
  auVar17 = *(undefined1 (*) [24])(param_3 + 8);
  auVar31._24_8_ = 0;
  auVar31._0_24_ = auVar17;
  dVar107 = auVar17._0_8_;
  auVar72._0_8_ = (double)((ulonglong)dVar107 & __real_7fffffffffffffff);
  dVar120 = auVar17._8_8_;
  auVar72._8_8_ = (double)((ulonglong)dVar120 & __real_7fffffffffffffff);
  dVar190 = auVar17._16_8_;
  auVar72._16_8_ = (double)((ulonglong)dVar190 & __real_7fffffffffffffff);
  auVar72._24_8_ = 0.0;
  auVar148._8_8_ = __real_3e45798ee2308c3a;
  auVar148._0_8_ = __real_3e45798ee2308c3a;
  auVar148._16_8_ = __real_3e45798ee2308c3a;
  auVar148._24_8_ = __real_3e45798ee2308c3a;
  auVar85 = vcmppd_avx(auVar72,auVar148,2);
  auVar162 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
  auVar85 = vpackssdw_avx2(auVar85,auVar162);
  auVar144 = vpermq_avx2(auVar85,0xd8);
  auVar85._8_8_ = __real_46c8a6e32246c99c;
  auVar85._0_8_ = __real_46c8a6e32246c99c;
  auVar85._16_8_ = __real_46c8a6e32246c99c;
  auVar85._24_8_ = __real_46c8a6e32246c99c;
  auVar85 = vcmppd_avx(auVar31,auVar85,2);
  auVar32 = vpackssdw_avx2(auVar85,auVar162);
  auVar97._8_8_ = __real_3914c4e977ba1f5c;
  auVar97._0_8_ = __real_3914c4e977ba1f5c;
  auVar97._16_8_ = __real_3914c4e977ba1f5c;
  auVar97._24_8_ = __real_3914c4e977ba1f5c;
  auVar85 = vcmppd_avx(auVar97,auVar31,2);
  auVar73 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar85 = vpackssdw_avx2(auVar85,auVar73);
  auVar97 = vpand_avx2(auVar32,auVar85);
  auVar97 = vpermq_avx2(auVar97,0xd8);
  auVar97 = vpandn_avx2(auVar144,auVar97);
  iVar11 = vmovmskps_avx(auVar97);
  if (iVar11 == 0) {
    auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  }
  else {
    auVar72 = vcmppd_avx(auVar72,auVar148,6);
    auVar97 = vpackssdw_avx2(auVar72,auVar73);
    auVar125 = vcvtpd2ps_avx(auVar31);
    auVar83 = vcvtpd2ps_avx(auVar73);
    auVar73._16_16_ = auVar83;
    auVar73._0_16_ = auVar125;
    auVar72 = vrcpps_avx(auVar73);
    auVar83 = vpackssdw_avx(auVar97._0_16_,auVar97._16_16_);
    auVar44 = vpshufd_avx(auVar83,0xd8);
    auVar69._0_4_ = auVar72._0_4_ * (-(auVar72._0_4_ * auVar125._0_4_) + __real_40000000);
    auVar69._4_4_ = auVar72._4_4_ * (-(auVar72._4_4_ * auVar125._4_4_) + __real_40000000);
    auVar69._8_4_ = auVar72._8_4_ * (-(auVar72._8_4_ * auVar125._8_4_) + __real_40000000);
    auVar69._12_4_ = auVar72._12_4_ * (-(auVar72._12_4_ * auVar125._12_4_) + __real_40000000);
    auVar72 = vcvtps2pd_avx(auVar69);
    dVar67 = (-(dVar107 * auVar72._0_8_) + __real_4000000000000000) * auVar72._0_8_;
    dVar76 = (-(dVar120 * auVar72._8_8_) + __real_4000000000000000) * auVar72._8_8_;
    dVar78 = (-(dVar190 * auVar72._16_8_) + __real_4000000000000000) * auVar72._16_8_;
    dVar80 = (-(auVar72._24_8_ * 0.0) + __real_4000000000000000) * auVar72._24_8_;
    auVar72._0_8_ = (-(dVar107 * dVar67) + __real_4000000000000000) * dVar67;
    auVar72._8_8_ = (-(dVar120 * dVar76) + __real_4000000000000000) * dVar76;
    auVar72._16_8_ = (-(dVar190 * dVar78) + __real_4000000000000000) * dVar78;
    auVar72._24_8_ = (-(dVar80 * 0.0) + __real_4000000000000000) * dVar80;
    auVar125 = vpsllw_avx(auVar44,0xf);
    auVar125 = vpacksswb_avx(auVar125,auVar125);
    if ((byte)(SUB161(auVar125 >> 7,0) & 1 | (SUB161(auVar125 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar125 >> 0x17,0) & 1) << 2 | (SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar125 >> 0x27,0) & 1) << 4 | (SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar125 >> 0x37,0) & 1) << 6 | SUB161(auVar125 >> 0x3f,0) << 7) ==
        (byte)iVar11) goto LAB_140d25838;
    auVar125 = vpackssdw_avx(auVar32._0_16_,auVar32._16_16_);
    auVar44 = vpackssdw_avx(auVar85._0_16_,auVar85._16_16_);
    auVar125 = vpand_avx(auVar125,auVar44);
    auVar125 = vpand_avx(auVar125,auVar83);
    auVar125 = vpshufd_avx(auVar125,0xd8);
    auVar85 = vpmovzxwd_avx2(auVar125);
    auVar85 = vpslld_avx2(auVar85,0x1f);
    auVar85 = vpsrad_avx2(auVar85,0x1f);
  }
  dVar67 = SUB648(ZEXT1664((undefined1  [16])0x0),8);
  auVar98._0_8_ = (ulonglong)dVar107 & __real_7fe0000000000000;
  auVar98._8_8_ = (ulonglong)dVar120 & __real_7fe0000000000000;
  auVar98._16_8_ = (ulonglong)dVar190 & __real_7fe0000000000000;
  auVar98._24_8_ = 0;
  auVar127._8_8_ = __real_7fcfffffffffffff;
  auVar127._0_8_ = __real_7fcfffffffffffff;
  auVar127._16_8_ = __real_7fcfffffffffffff;
  auVar127._24_8_ = __real_7fcfffffffffffff;
  auVar97 = vpsubq_avx2(auVar127,auVar98);
  auVar32 = vpsubq_avx2(auVar127,ZEXT832((ulonglong)dVar67 & __real_7fe0000000000000) << 0x40);
  auVar128._0_8_ = auVar32._0_8_ * 0.0;
  auVar128._8_8_ = dVar67 * auVar32._8_8_;
  auVar128._16_8_ = auVar32._16_8_ * 0.0;
  auVar128._24_8_ = auVar32._24_8_ * 0.0;
  auVar61._0_8_ = dVar107 * auVar97._0_8_;
  auVar61._8_8_ = dVar120 * auVar97._8_8_;
  auVar61._16_8_ = dVar190 * auVar97._16_8_;
  auVar61._24_8_ = auVar97._24_8_ * 0.0;
  auVar125 = vcvtpd2ps_avx(auVar61);
  auVar83 = vcvtpd2ps_avx(auVar128);
  auVar129._16_16_ = auVar83;
  auVar129._0_16_ = auVar125;
  auVar32 = vrcpps_avx(auVar129);
  auVar83._0_4_ = auVar32._0_4_ * (-(auVar32._0_4_ * auVar125._0_4_) + __real_40000000);
  auVar83._4_4_ = auVar32._4_4_ * (-(auVar32._4_4_ * auVar125._4_4_) + __real_40000000);
  auVar83._8_4_ = auVar32._8_4_ * (-(auVar32._8_4_ * auVar125._8_4_) + __real_40000000);
  auVar83._12_4_ = auVar32._12_4_ * (-(auVar32._12_4_ * auVar125._12_4_) + __real_40000000);
  auVar32 = vcvtps2pd_avx(auVar83);
  dVar67 = auVar97._0_8_ * auVar32._0_8_;
  dVar76 = auVar97._8_8_ * auVar32._8_8_;
  dVar78 = auVar97._16_8_ * auVar32._16_8_;
  dVar80 = auVar97._24_8_ * auVar32._24_8_;
  dVar67 = dVar67 * (-(dVar107 * dVar67) + __real_4000000000000000);
  dVar76 = dVar76 * (-(dVar120 * dVar76) + __real_4000000000000000);
  dVar78 = dVar78 * (-(dVar190 * dVar78) + __real_4000000000000000);
  dVar80 = dVar80 * (-(dVar80 * 0.0) + __real_4000000000000000);
  auVar32._0_8_ = dVar67 * (-(dVar67 * dVar107) + __real_4000000000000000);
  auVar32._8_8_ = dVar76 * (-(dVar76 * dVar120) + __real_4000000000000000);
  auVar32._16_8_ = dVar78 * (-(dVar78 * dVar190) + __real_4000000000000000);
  auVar32._24_8_ = dVar80 * (-(dVar80 * 0.0) + __real_4000000000000000);
  auVar85 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                        auVar85 ^ auVar162);
  auVar72 = vblendvps_avx(auVar72,auVar32,auVar85);
LAB_140d25838:
  dVar107 = param_3[4];
  dVar120 = param_3[5];
  dVar190 = param_3[6];
  auVar85 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                        auVar144);
  auVar72 = vblendvps_avx(auVar72,SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar85);
  uVar10 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar10 = param_5;
  }
  auVar85 = vpermpd_avx2(auVar161,0x55);
  auVar32 = vpermpd_avx2(auVar161,0xaa);
  auVar97 = vpermpd_avx2(auVar161,0xff);
  auVar162 = vpermpd_avx2(auVar72,0x55);
  auVar144 = vpermpd_avx2(auVar72,0xaa);
  auVar125._8_8_ = 0;
  auVar125._0_8_ = dVar107;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = dVar107;
  dStack_2e0 = auVar85._8_8_;
  dStack_2d8 = auVar85._16_8_;
  dStack_2d0 = auVar85._24_8_;
  dStack_2c0 = auVar32._8_8_;
  dStack_2b8 = auVar32._16_8_;
  dStack_2b0 = auVar32._24_8_;
  dStack_2a0 = auVar97._8_8_;
  dStack_298 = auVar97._16_8_;
  dStack_290 = auVar97._24_8_;
  local_108 = auVar162._0_8_;
  dStack_100 = auVar162._8_8_;
  dStack_f8 = auVar162._16_8_;
  dStack_f0 = auVar162._24_8_;
  dStack_e0 = auVar144._8_8_;
  dStack_d8 = auVar144._16_8_;
  dStack_d0 = auVar144._24_8_;
  dVar67 = auVar72._0_8_;
  local_2e8 = auVar85._0_8_;
  local_2c8 = auVar32._0_8_;
  local_2a8 = auVar97._0_8_;
  local_e8 = auVar144._0_8_;
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar12 = 0;
    auVar125 = vpcmpeqd_avx(auVar125,auVar44);
  }
  else {
    auVar125 = vpcmpeqd_avx(auVar44,auVar44);
    lVar14 = 0x40;
    uVar12 = 0;
    do {
      auVar98 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar73 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar148 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar72 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar14);
      auVar85 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar14);
      auVar32 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar85);
      auVar97 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar72);
      auVar32 = vblendps_avx(auVar97,auVar32,0x88);
      auVar97 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar85);
      auVar144 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_1 + lVar14));
      auVar97 = vblendps_avx(auVar144,auVar97,0x13);
      auVar72 = vblendps_avx(auVar85,auVar72,0x24);
      auVar72 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar72);
      auVar85 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_1 + lVar14));
      auVar72 = vblendps_avx(auVar72,auVar85,0xe0);
      auVar85 = vcvtps2pd_avx(auVar32._0_16_);
      auVar144 = vcvtps2pd_avx(auVar97._0_16_);
      auVar32 = vcvtps2pd_avx(auVar32._16_16_);
      auVar97 = vcvtps2pd_avx(auVar97._16_16_);
      auVar31 = vcvtps2pd_avx(auVar72._0_16_);
      auVar72 = vcvtps2pd_avx(auVar72._16_16_);
      dVar160 = param_4 * auVar144._0_8_ - dVar107;
      dVar166 = param_4 * auVar144._8_8_ - dVar107;
      dVar167 = param_4 * auVar144._16_8_ - dVar107;
      dVar168 = param_4 * auVar144._24_8_ - dVar107;
      dVar123 = param_4 * auVar85._0_8_ - dVar107;
      dVar134 = param_4 * auVar85._8_8_ - dVar107;
      dVar136 = param_4 * auVar85._16_8_ - dVar107;
      dVar138 = param_4 * auVar85._24_8_ - dVar107;
      dVar145 = param_4 * auVar97._0_8_ - dVar120;
      dVar154 = param_4 * auVar97._8_8_ - dVar120;
      dVar156 = param_4 * auVar97._16_8_ - dVar120;
      dVar158 = param_4 * auVar97._24_8_ - dVar120;
      dVar191 = param_4 * auVar32._0_8_ - dVar120;
      dVar196 = param_4 * auVar32._8_8_ - dVar120;
      dVar199 = param_4 * auVar32._16_8_ - dVar120;
      dVar203 = param_4 * auVar32._24_8_ - dVar120;
      dVar182 = param_4 * auVar72._0_8_ - dVar190;
      dVar185 = param_4 * auVar72._8_8_ - dVar190;
      dVar187 = param_4 * auVar72._16_8_ - dVar190;
      dVar189 = param_4 * auVar72._24_8_ - dVar190;
      dVar76 = param_4 * auVar31._0_8_ - dVar190;
      dVar78 = param_4 * auVar31._8_8_ - dVar190;
      dVar80 = param_4 * auVar31._16_8_ - dVar190;
      dVar42 = param_4 * auVar31._24_8_ - dVar190;
      dVar68 = auVar161._0_8_ * dVar145 - local_2e8 * dVar160;
      dVar77 = auVar161._0_8_ * dVar154 - dStack_2e0 * dVar166;
      dVar79 = auVar161._0_8_ * dVar156 - dStack_2d8 * dVar167;
      dVar81 = auVar161._0_8_ * dVar158 - dStack_2d0 * dVar168;
      dVar55 = auVar161._0_8_ * dVar191 - local_2e8 * dVar123;
      dVar63 = auVar161._0_8_ * dVar196 - dStack_2e0 * dVar134;
      dVar64 = auVar161._0_8_ * dVar199 - dStack_2d8 * dVar136;
      dVar66 = auVar161._0_8_ * dVar203 - dStack_2d0 * dVar138;
      dVar82 = local_2e8 * dVar182 - dVar145 * local_2c8;
      dVar90 = dStack_2e0 * dVar185 - dVar154 * dStack_2c0;
      dVar91 = dStack_2d8 * dVar187 - dVar156 * dStack_2b8;
      dVar92 = dStack_2d0 * dVar189 - dVar158 * dStack_2b0;
      dVar43 = local_2e8 * dVar76 - dVar191 * local_2c8;
      dVar52 = dStack_2e0 * dVar78 - dVar196 * dStack_2c0;
      dVar53 = dStack_2d8 * dVar80 - dVar199 * dStack_2b8;
      dVar54 = dStack_2d0 * dVar42 - dVar203 * dStack_2b0;
      dVar206 = local_2c8 * dVar160 - dVar182 * auVar161._0_8_;
      dVar209 = dStack_2c0 * dVar166 - dVar185 * auVar161._0_8_;
      dVar210 = dStack_2b8 * dVar167 - dVar187 * auVar161._0_8_;
      dVar211 = dStack_2b0 * dVar168 - dVar189 * auVar161._0_8_;
      dVar169 = local_2c8 * dVar123 - auVar161._0_8_ * dVar76;
      dVar176 = dStack_2c0 * dVar134 - auVar161._0_8_ * dVar78;
      dVar178 = dStack_2b8 * dVar136 - auVar161._0_8_ * dVar80;
      dVar180 = dStack_2b0 * dVar138 - auVar161._0_8_ * dVar42;
      dVar43 = dVar43 + dVar43;
      dVar52 = dVar52 + dVar52;
      dVar53 = dVar53 + dVar53;
      dVar54 = dVar54 + dVar54;
      dVar82 = dVar82 + dVar82;
      dVar90 = dVar90 + dVar90;
      dVar91 = dVar91 + dVar91;
      dVar92 = dVar92 + dVar92;
      dVar169 = dVar169 + dVar169;
      dVar176 = dVar176 + dVar176;
      dVar178 = dVar178 + dVar178;
      dVar180 = dVar180 + dVar180;
      dVar206 = dVar206 + dVar206;
      dVar209 = dVar209 + dVar209;
      dVar210 = dVar210 + dVar210;
      dVar211 = dVar211 + dVar211;
      dVar55 = dVar55 + dVar55;
      dVar63 = dVar63 + dVar63;
      dVar64 = dVar64 + dVar64;
      dVar66 = dVar66 + dVar66;
      dVar68 = dVar68 + dVar68;
      dVar77 = dVar77 + dVar77;
      dVar79 = dVar79 + dVar79;
      dVar81 = dVar81 + dVar81;
      auVar57._0_8_ =
           (local_2a8 * dVar82 + dVar160 + (local_2e8 * dVar68 - dVar206 * local_2c8)) * dVar67;
      auVar57._8_8_ =
           (dStack_2a0 * dVar90 + dVar166 + (dStack_2e0 * dVar77 - dVar209 * dStack_2c0)) * dVar67;
      auVar57._16_8_ =
           (dStack_298 * dVar91 + dVar167 + (dStack_2d8 * dVar79 - dVar210 * dStack_2b8)) * dVar67;
      auVar57._24_8_ =
           (dStack_290 * dVar92 + dVar168 + (dStack_2d0 * dVar81 - dVar211 * dStack_2b0)) * dVar67;
      auVar86._0_8_ =
           dVar67 * (local_2a8 * dVar43 + dVar123 + (local_2e8 * dVar55 - local_2c8 * dVar169));
      auVar86._8_8_ =
           dVar67 * (dStack_2a0 * dVar52 + dVar134 + (dStack_2e0 * dVar63 - dStack_2c0 * dVar176));
      auVar86._16_8_ =
           dVar67 * (dStack_298 * dVar53 + dVar136 + (dStack_2d8 * dVar64 - dStack_2b8 * dVar178));
      auVar86._24_8_ =
           dVar67 * (dStack_290 * dVar54 + dVar138 + (dStack_2d0 * dVar66 - dStack_2b0 * dVar180));
      auVar96[1] = DAT_152cac6b3;
      auVar96[0] = DAT_152cac6b3;
      auVar96[2] = DAT_152cac6b3;
      auVar96[3] = DAT_152cac6b3;
      auVar96[4] = DAT_152cac6b3;
      auVar96[5] = DAT_152cac6b3;
      auVar96[6] = DAT_152cac6b3;
      auVar96[7] = DAT_152cac6b3;
      auVar96[8] = DAT_152cac6b3;
      auVar96[9] = DAT_152cac6b3;
      auVar96[10] = DAT_152cac6b3;
      auVar96[0xb] = DAT_152cac6b3;
      auVar96[0xc] = DAT_152cac6b3;
      auVar96[0xd] = DAT_152cac6b3;
      auVar96[0xe] = DAT_152cac6b3;
      auVar96[0xf] = DAT_152cac6b3;
      auVar46._0_8_ =
           local_108 *
           (local_2a8 * dVar206 + dVar145 + (local_2c8 * dVar82 - dVar68 * auVar161._0_8_));
      auVar46._8_8_ =
           dStack_100 *
           (dStack_2a0 * dVar209 + dVar154 + (dStack_2c0 * dVar90 - dVar77 * auVar161._0_8_));
      auVar46._16_8_ =
           dStack_f8 *
           (dStack_298 * dVar210 + dVar156 + (dStack_2b8 * dVar91 - dVar79 * auVar161._0_8_));
      auVar46._24_8_ =
           dStack_f0 *
           (dStack_290 * dVar211 + dVar158 + (dStack_2b0 * dVar92 - dVar81 * auVar161._0_8_));
      auVar144._0_8_ =
           local_108 *
           (local_2a8 * dVar169 + dVar191 + (local_2c8 * dVar43 - auVar161._0_8_ * dVar55));
      auVar144._8_8_ =
           dStack_100 *
           (dStack_2a0 * dVar176 + dVar196 + (dStack_2c0 * dVar52 - auVar161._0_8_ * dVar63));
      auVar144._16_8_ =
           dStack_f8 *
           (dStack_298 * dVar178 + dVar199 + (dStack_2b8 * dVar53 - auVar161._0_8_ * dVar64));
      auVar144._24_8_ =
           dStack_f0 *
           (dStack_290 * dVar180 + dVar203 + (dStack_2b0 * dVar54 - auVar161._0_8_ * dVar66));
      auVar83 = vcvtpd2ps_avx(auVar86);
      auVar44 = vcvtpd2ps_avx(auVar57);
      auVar69 = vcvtpd2ps_avx(auVar144);
      auVar15 = vcvtpd2ps_avx(auVar46);
      auVar58._16_16_ = auVar44;
      auVar58._0_16_ = auVar83;
      auVar130._16_16_ = auVar15;
      auVar130._0_16_ = auVar69;
      auVar21._0_8_ =
           local_e8 *
           (local_2a8 * dVar68 + dVar182 + (auVar161._0_8_ * dVar206 - local_2e8 * dVar82));
      auVar21._8_8_ =
           dStack_e0 *
           (dStack_2a0 * dVar77 + dVar185 + (auVar161._0_8_ * dVar209 - dStack_2e0 * dVar90));
      auVar21._16_8_ =
           dStack_d8 *
           (dStack_298 * dVar79 + dVar187 + (auVar161._0_8_ * dVar210 - dStack_2d8 * dVar91));
      auVar21._24_8_ =
           dStack_d0 *
           (dStack_290 * dVar81 + dVar189 + (auVar161._0_8_ * dVar211 - dStack_2d0 * dVar92));
      auVar33._0_8_ =
           local_e8 *
           ((auVar161._0_8_ * dVar169 - local_2e8 * dVar43) + local_2a8 * dVar55 + dVar76);
      auVar33._8_8_ =
           dStack_e0 *
           ((auVar161._0_8_ * dVar176 - dStack_2e0 * dVar52) + dStack_2a0 * dVar63 + dVar78);
      auVar33._16_8_ =
           dStack_d8 *
           ((auVar161._0_8_ * dVar178 - dStack_2d8 * dVar53) + dStack_298 * dVar64 + dVar80);
      auVar33._24_8_ =
           dStack_d0 *
           ((auVar161._0_8_ * dVar180 - dStack_2d0 * dVar54) + dStack_290 * dVar66 + dVar42);
      auVar45 = vcvtpd2ps_avx(auVar33);
      auVar56 = vcvtpd2ps_avx(auVar21);
      auVar141._16_16_ = auVar56;
      auVar141._0_16_ = auVar45;
      auVar16 = vpand_avx(auVar125,auVar96);
      if (auVar16._0_8_ != 0) {
        auVar16 = vpmovzxbw_avx(auVar125);
        auVar70._0_8_ = CONCAT44(__real_7f800000,__real_7f800000);
        auVar70._8_4_ = __real_7f800000;
        auVar70._12_4_ = __real_7f800000;
        auVar17._16_4_ = __real_7f800000;
        auVar17._0_16_ = auVar70;
        auVar17._20_4_ = __real_7f800000;
        auVar22._24_4_ = __real_7f800000;
        auVar22._0_24_ = auVar17;
        auVar22._28_4_ = __real_7f800000;
        auVar34._0_8_ = auVar83._0_8_ & auVar70._0_8_;
        uVar7 = auVar70._8_8_;
        auVar34._8_8_ = auVar83._8_8_ & uVar7;
        uVar3 = auVar17._16_8_;
        auVar34._16_8_ = auVar44._0_8_ & uVar3;
        uVar4 = auVar22._24_8_;
        auVar34._24_8_ = auVar44._8_8_ & uVar4;
        auVar72 = vpcmpeqd_avx2(auVar34,auVar22);
        auVar85 = vpcmpeqd_avx2(ZEXT1632(auVar125),ZEXT1632(auVar125));
        auVar44 = SUB3216(auVar72 ^ auVar85,0);
        auVar65 = SUB3216(auVar72 ^ auVar85,0x10);
        auVar125 = vpackssdw_avx(auVar44,auVar65);
        auVar125 = vpand_avx(auVar125,auVar16);
        auVar84 = vpsllw_avx(auVar125,0xf);
        if ((((((((SUB161(auVar84 >> 0xf,0) & 1) != 0 || (SUB161(auVar84 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar84 >> 0x2f,0) & 1) != 0) || (SUB161(auVar84 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar84 >> 0x4f,0) & 1) != 0) || (SUB161(auVar84 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar84 >> 0x6f,0) & 1) != 0) || auVar84[0xf] < '\0') {
          auVar125 = vpackssdw_avx(auVar44,auVar65);
          auVar59._0_8_ = auVar69._0_8_ & auVar70._0_8_;
          auVar59._8_8_ = auVar69._8_8_ & uVar7;
          auVar59._16_8_ = auVar15._0_8_ & uVar3;
          auVar59._24_8_ = auVar15._8_8_ & uVar4;
          auVar72 = vpcmpeqd_avx2(auVar59,auVar22);
          auVar44 = vpackssdw_avx(SUB3216(auVar72 ^ auVar85,0),SUB3216(auVar72 ^ auVar85,0x10));
          auVar44 = vpand_avx(auVar44,auVar16);
          auVar125 = vpand_avx(auVar44,auVar125);
          auVar44 = vpsllw_avx(auVar125,0xf);
          if ((((((((SUB161(auVar44 >> 0xf,0) & 1) != 0 || (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                  (SUB161(auVar44 >> 0x2f,0) & 1) != 0) || (SUB161(auVar44 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar44 >> 0x4f,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar44 >> 0x6f,0) & 1) != 0) || auVar44[0xf] < '\0') {
            auVar47._0_8_ = auVar45._0_8_ & auVar70._0_8_;
            auVar47._8_8_ = auVar45._8_8_ & uVar7;
            auVar47._16_8_ = auVar56._0_8_ & uVar3;
            auVar47._24_8_ = auVar56._8_8_ & uVar4;
            auVar72 = vpcmpeqd_avx2(auVar47,auVar22);
            auVar44 = vpackssdw_avx(SUB3216(auVar72 ^ auVar85,0),SUB3216(auVar72 ^ auVar85,0x10));
            auVar125 = vpand_avx(auVar44,auVar125);
          }
        }
        auVar125 = vpshufb_avx(auVar125,___xmm_00000000000000000e0c0a0806040200);
        auVar16 = vpand_avx(auVar125,auVar96);
      }
      auVar72 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar14);
      auVar85 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar14);
      auVar32 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar85);
      auVar97 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar72);
      auVar32 = vblendps_avx(auVar97,auVar32,0x88);
      auVar97 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar85);
      auVar144 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_2 + lVar14));
      auVar97 = vblendps_avx(auVar144,auVar97,0x13);
      auVar144 = vperm2f128_avx(auVar32,auVar97,0x31);
      auVar72 = vblendps_avx(auVar85,auVar72,0x24);
      auVar72 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar72);
      auVar85 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_2 + lVar14));
      auVar72 = vblendps_avx(auVar72,auVar85,0xe0);
      auVar45._0_4_ = auVar32._0_4_ ^ uVar9;
      auVar45._4_4_ = auVar32._4_4_ ^ uVar9;
      auVar45._8_4_ = auVar32._8_4_ ^ uVar9;
      auVar45._12_4_ = auVar32._12_4_ ^ uVar9;
      auVar48._16_4_ = auVar97._0_4_ ^ uVar9;
      auVar48._0_16_ = auVar45;
      auVar48._20_4_ = auVar97._4_4_ ^ uVar9;
      auVar48._24_4_ = auVar97._8_4_ ^ uVar9;
      auVar48._28_4_ = auVar97._12_4_ ^ uVar9;
      auVar85 = vcvtps2pd_avx(auVar48._16_16_);
      auVar56._0_4_ = auVar144._0_4_ ^ uVar9;
      auVar56._4_4_ = auVar144._4_4_ ^ uVar9;
      auVar56._8_4_ = auVar144._8_4_ ^ uVar9;
      auVar56._12_4_ = auVar144._12_4_ ^ uVar9;
      auVar60._16_4_ = auVar144._16_4_ ^ uVar9;
      auVar60._0_16_ = auVar56;
      auVar60._20_4_ = auVar144._20_4_ ^ uVar9;
      auVar60._24_4_ = auVar144._24_4_ ^ uVar9;
      auVar60._28_4_ = auVar144._28_4_ ^ uVar9;
      auVar32 = vcvtps2pd_avx(auVar45);
      auVar97 = vcvtps2pd_avx(auVar60._16_16_);
      auVar144 = vcvtps2pd_avx(auVar56);
      auVar15._0_4_ = auVar72._0_4_ ^ uVar9;
      auVar15._4_4_ = auVar72._4_4_ ^ uVar9;
      auVar15._8_4_ = auVar72._8_4_ ^ uVar9;
      auVar15._12_4_ = auVar72._12_4_ ^ uVar9;
      auVar23._16_4_ = auVar72._16_4_ ^ uVar9;
      auVar23._0_16_ = auVar15;
      auVar23._20_4_ = auVar72._20_4_ ^ uVar9;
      auVar23._24_4_ = auVar72._24_4_ ^ uVar9;
      auVar23._28_4_ = auVar72._28_4_ ^ uVar9;
      auVar72 = vcvtps2pd_avx(auVar23._16_16_);
      auVar31 = vcvtps2pd_avx(auVar15);
      dVar76 = auVar32._0_8_;
      dVar52 = auVar32._8_8_;
      dVar55 = auVar32._16_8_;
      dVar79 = auVar32._24_8_;
      dVar78 = auVar85._0_8_;
      dVar90 = auVar85._8_8_;
      dVar63 = auVar85._16_8_;
      dVar81 = auVar85._24_8_;
      dVar80 = auVar144._0_8_;
      dVar53 = auVar144._8_8_;
      dVar64 = auVar144._16_8_;
      dVar169 = auVar144._24_8_;
      dVar42 = auVar97._0_8_;
      dVar91 = auVar97._8_8_;
      dVar66 = auVar97._16_8_;
      dVar176 = auVar97._24_8_;
      dVar43 = auVar31._0_8_;
      dVar54 = auVar31._8_8_;
      dVar68 = auVar31._16_8_;
      dVar178 = auVar31._24_8_;
      dVar82 = auVar72._0_8_;
      dVar92 = auVar72._8_8_;
      dVar77 = auVar72._16_8_;
      dVar180 = auVar72._24_8_;
      dVar166 = auVar161._0_8_ * dVar42 - local_2e8 * dVar78;
      dVar168 = auVar161._0_8_ * dVar91 - dStack_2e0 * dVar90;
      dVar185 = auVar161._0_8_ * dVar66 - dStack_2d8 * dVar63;
      dVar189 = auVar161._0_8_ * dVar176 - dStack_2d0 * dVar81;
      dVar160 = auVar161._0_8_ * dVar80 - local_2e8 * dVar76;
      dVar167 = auVar161._0_8_ * dVar53 - dStack_2e0 * dVar52;
      dVar182 = auVar161._0_8_ * dVar64 - dStack_2d8 * dVar55;
      dVar187 = auVar161._0_8_ * dVar169 - dStack_2d0 * dVar79;
      dVar145 = local_2e8 * dVar82 - local_2c8 * dVar42;
      dVar154 = dStack_2e0 * dVar92 - dStack_2c0 * dVar91;
      dVar156 = dStack_2d8 * dVar77 - dStack_2b8 * dVar66;
      dVar158 = dStack_2d0 * dVar180 - dStack_2b0 * dVar176;
      dVar123 = local_2e8 * dVar43 - local_2c8 * dVar80;
      dVar134 = dStack_2e0 * dVar54 - dStack_2c0 * dVar53;
      dVar136 = dStack_2d8 * dVar68 - dStack_2b8 * dVar64;
      dVar138 = dStack_2d0 * dVar178 - dStack_2b0 * dVar169;
      dVar191 = local_2c8 * dVar78 - auVar161._0_8_ * dVar82;
      dVar196 = dStack_2c0 * dVar90 - auVar161._0_8_ * dVar92;
      dVar199 = dStack_2b8 * dVar63 - auVar161._0_8_ * dVar77;
      dVar203 = dStack_2b0 * dVar81 - auVar161._0_8_ * dVar180;
      dVar206 = local_2c8 * dVar76 - auVar161._0_8_ * dVar43;
      dVar209 = dStack_2c0 * dVar52 - auVar161._0_8_ * dVar54;
      dVar210 = dStack_2b8 * dVar55 - auVar161._0_8_ * dVar68;
      dVar211 = dStack_2b0 * dVar79 - auVar161._0_8_ * dVar178;
      dVar123 = dVar123 + dVar123;
      dVar134 = dVar134 + dVar134;
      dVar136 = dVar136 + dVar136;
      dVar138 = dVar138 + dVar138;
      dVar145 = dVar145 + dVar145;
      dVar154 = dVar154 + dVar154;
      dVar156 = dVar156 + dVar156;
      dVar158 = dVar158 + dVar158;
      dVar206 = dVar206 + dVar206;
      dVar209 = dVar209 + dVar209;
      dVar210 = dVar210 + dVar210;
      dVar211 = dVar211 + dVar211;
      dVar191 = dVar191 + dVar191;
      dVar196 = dVar196 + dVar196;
      dVar199 = dVar199 + dVar199;
      dVar203 = dVar203 + dVar203;
      dVar160 = dVar160 + dVar160;
      dVar167 = dVar167 + dVar167;
      dVar182 = dVar182 + dVar182;
      dVar187 = dVar187 + dVar187;
      dVar166 = dVar166 + dVar166;
      dVar168 = dVar168 + dVar168;
      dVar185 = dVar185 + dVar185;
      dVar189 = dVar189 + dVar189;
      auVar35._0_8_ =
           (local_2a8 * dVar145 + dVar78 + (local_2e8 * dVar166 - local_2c8 * dVar191)) * dVar67;
      auVar35._8_8_ =
           (dStack_2a0 * dVar154 + dVar90 + (dStack_2e0 * dVar168 - dStack_2c0 * dVar196)) * dVar67;
      auVar35._16_8_ =
           (dStack_298 * dVar156 + dVar63 + (dStack_2d8 * dVar185 - dStack_2b8 * dVar199)) * dVar67;
      auVar35._24_8_ =
           (dStack_290 * dVar158 + dVar81 + (dStack_2d0 * dVar189 - dStack_2b0 * dVar203)) * dVar67;
      auVar87._0_8_ =
           dVar67 * (local_2a8 * dVar123 + dVar76 + (local_2e8 * dVar160 - local_2c8 * dVar206));
      auVar87._8_8_ =
           dVar67 * (dStack_2a0 * dVar134 + dVar52 + (dStack_2e0 * dVar167 - dStack_2c0 * dVar209));
      auVar87._16_8_ =
           dVar67 * (dStack_298 * dVar136 + dVar55 + (dStack_2d8 * dVar182 - dStack_2b8 * dVar210));
      auVar87._24_8_ =
           dVar67 * (dStack_290 * dVar138 + dVar79 + (dStack_2d0 * dVar187 - dStack_2b0 * dVar211));
      auVar24._0_8_ =
           (local_2a8 * dVar191 + dVar42 + (local_2c8 * dVar145 - auVar161._0_8_ * dVar166)) *
           local_108;
      auVar24._8_8_ =
           (dStack_2a0 * dVar196 + dVar91 + (dStack_2c0 * dVar154 - auVar161._0_8_ * dVar168)) *
           dStack_100;
      auVar24._16_8_ =
           (dStack_298 * dVar199 + dVar66 + (dStack_2b8 * dVar156 - auVar161._0_8_ * dVar185)) *
           dStack_f8;
      auVar24._24_8_ =
           (dStack_290 * dVar203 + dVar176 + (dStack_2b0 * dVar158 - auVar161._0_8_ * dVar189)) *
           dStack_f0;
      auVar49._0_8_ =
           local_108 *
           (local_2a8 * dVar206 + dVar80 + (local_2c8 * dVar123 - dVar160 * auVar161._0_8_));
      auVar49._8_8_ =
           dStack_100 *
           (dStack_2a0 * dVar209 + dVar53 + (dStack_2c0 * dVar134 - dVar167 * auVar161._0_8_));
      auVar49._16_8_ =
           dStack_f8 *
           (dStack_298 * dVar210 + dVar64 + (dStack_2b8 * dVar136 - dVar182 * auVar161._0_8_));
      auVar49._24_8_ =
           dStack_f0 *
           (dStack_290 * dVar211 + dVar169 + (dStack_2b0 * dVar138 - dVar187 * auVar161._0_8_));
      auVar125 = vcvtpd2ps_avx(auVar87);
      auVar44 = vcvtpd2ps_avx(auVar35);
      auVar15 = vcvtpd2ps_avx(auVar49);
      auVar45 = vcvtpd2ps_avx(auVar24);
      auVar195._16_16_ = auVar44;
      auVar195._0_16_ = auVar125;
      auVar207._16_16_ = auVar45;
      auVar207._0_16_ = auVar15;
      auVar25._0_8_ =
           local_e8 *
           (local_2a8 * dVar166 + dVar82 + (auVar161._0_8_ * dVar191 - local_2e8 * dVar145));
      auVar25._8_8_ =
           dStack_e0 *
           (dStack_2a0 * dVar168 + dVar92 + (auVar161._0_8_ * dVar196 - dStack_2e0 * dVar154));
      auVar25._16_8_ =
           dStack_d8 *
           (dStack_298 * dVar185 + dVar77 + (auVar161._0_8_ * dVar199 - dStack_2d8 * dVar156));
      auVar25._24_8_ =
           dStack_d0 *
           (dStack_290 * dVar189 + dVar180 + (auVar161._0_8_ * dVar203 - dStack_2d0 * dVar158));
      auVar36._0_8_ =
           local_e8 *
           (local_2a8 * dVar160 + dVar43 + (auVar161._0_8_ * dVar206 - local_2e8 * dVar123));
      auVar36._8_8_ =
           dStack_e0 *
           (dStack_2a0 * dVar167 + dVar54 + (auVar161._0_8_ * dVar209 - dStack_2e0 * dVar134));
      auVar36._16_8_ =
           dStack_d8 *
           (dStack_298 * dVar182 + dVar68 + (auVar161._0_8_ * dVar210 - dStack_2d8 * dVar136));
      auVar36._24_8_ =
           dStack_d0 *
           (dStack_290 * dVar187 + dVar178 + (auVar161._0_8_ * dVar211 - dStack_2d0 * dVar138));
      auVar56 = vcvtpd2ps_avx(auVar36);
      auVar96 = vcvtpd2ps_avx(auVar25);
      auVar131._16_16_ = auVar96;
      auVar131._0_16_ = auVar56;
      auVar65[1] = DAT_152cac6b3;
      auVar65[0] = DAT_152cac6b3;
      auVar65[2] = DAT_152cac6b3;
      auVar65[3] = DAT_152cac6b3;
      auVar65[4] = DAT_152cac6b3;
      auVar65[5] = DAT_152cac6b3;
      auVar65[6] = DAT_152cac6b3;
      auVar65[7] = DAT_152cac6b3;
      auVar65[8] = DAT_152cac6b3;
      auVar65[9] = DAT_152cac6b3;
      auVar65[10] = DAT_152cac6b3;
      auVar65[0xb] = DAT_152cac6b3;
      auVar65[0xc] = DAT_152cac6b3;
      auVar65[0xd] = DAT_152cac6b3;
      auVar65[0xe] = DAT_152cac6b3;
      auVar65[0xf] = DAT_152cac6b3;
      auVar70 = vpand_avx(auVar16,auVar65);
      if (auVar70._0_8_ != 0) {
        auVar16 = vpmovzxbw_avx(auVar16);
        auVar84._0_8_ = CONCAT44(__real_7f800000,__real_7f800000);
        auVar84._8_4_ = __real_7f800000;
        auVar84._12_4_ = __real_7f800000;
        auVar18._16_4_ = __real_7f800000;
        auVar18._0_16_ = auVar84;
        auVar18._20_4_ = __real_7f800000;
        auVar26._24_4_ = __real_7f800000;
        auVar26._0_24_ = auVar18;
        auVar26._28_4_ = __real_7f800000;
        auVar37._0_8_ = auVar125._0_8_ & auVar84._0_8_;
        uVar7 = auVar84._8_8_;
        auVar37._8_8_ = auVar125._8_8_ & uVar7;
        uVar3 = auVar18._16_8_;
        auVar37._16_8_ = auVar44._0_8_ & uVar3;
        uVar4 = auVar26._24_8_;
        auVar37._24_8_ = auVar44._8_8_ & uVar4;
        auVar72 = vpcmpeqd_avx2(auVar37,auVar26);
        auVar85 = vpcmpeqd_avx2(auVar162,auVar162);
        auVar44 = vpackssdw_avx(SUB3216(auVar72 ^ auVar85,0),SUB3216(auVar72 ^ auVar85,0x10));
        auVar44 = vpand_avx(auVar44,auVar16);
        auVar70 = vpsllw_avx(auVar44,0xf);
        if ((((((((SUB161(auVar70 >> 0xf,0) & 1) != 0 || (SUB161(auVar70 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar70 >> 0x2f,0) & 1) != 0) || (SUB161(auVar70 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar70 >> 0x4f,0) & 1) != 0) || (SUB161(auVar70 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar70 >> 0x6f,0) & 1) != 0) || auVar70[0xf] < '\0') {
          auVar38._0_8_ = auVar15._0_8_ & auVar84._0_8_;
          auVar38._8_8_ = auVar15._8_8_ & uVar7;
          auVar38._16_8_ = auVar45._0_8_ & uVar3;
          auVar38._24_8_ = auVar45._8_8_ & uVar4;
          auVar32 = vpcmpeqd_avx2(auVar38,auVar26);
          auVar72 = vpor_avx2(auVar72,auVar32);
          auVar44 = vpackssdw_avx(SUB3216(auVar72 ^ auVar85,0),SUB3216(auVar72 ^ auVar85,0x10));
          auVar44 = vpand_avx(auVar44,auVar16);
          auVar45 = vpsllw_avx(auVar44,0xf);
          if ((((((((SUB161(auVar45 >> 0xf,0) & 1) != 0 || (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                  (SUB161(auVar45 >> 0x2f,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar45 >> 0x4f,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x6f,0) & 1) != 0) || auVar45[0xf] < '\0') {
            auVar50._0_8_ = auVar56._0_8_ & auVar84._0_8_;
            auVar50._8_8_ = auVar56._8_8_ & uVar7;
            auVar50._16_8_ = auVar96._0_8_ & uVar3;
            auVar50._24_8_ = auVar96._8_8_ & uVar4;
            auVar72 = vpcmpeqd_avx2(auVar50,auVar26);
            auVar45 = vpackssdw_avx(SUB3216(auVar72 ^ auVar85,0),SUB3216(auVar72 ^ auVar85,0x10));
            auVar44 = vpand_avx(auVar45,auVar44);
          }
        }
        auVar44 = vpshufb_avx(auVar44,___xmm_00000000000000000e0c0a0806040200);
        auVar16 = vpand_avx(auVar44,auVar65);
      }
      auVar19._16_16_ = auVar69;
      auVar19._0_16_ = auVar83;
      auVar85 = vshufpd_avx(auVar58,auVar19,2);
      auVar32 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar141);
      auVar72 = vpermpd_avx2(auVar130,0xe9);
      auVar72 = vblendps_avx(auVar32,auVar72,7);
      auVar32 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar72);
      auVar85 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar85);
      auVar85 = vblendps_avx(auVar85,auVar32,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar14) = auVar85;
      auVar97 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar85 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar72);
      auVar72 = vshufpd_avx(auVar58,auVar58,1);
      auVar72 = vblendps_avx(auVar85,auVar72,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar14) = auVar72;
      auVar31 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar144 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar85 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar130);
      auVar72 = vpermpd_avx2(auVar58,0xff);
      auVar72 = vblendpd_avx(auVar85,auVar72,1);
      auVar72 = vblendps_avx(auVar72,auVar141,0xe0);
      auVar72 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar72);
      *(undefined1 (*) [32])(param_1 + lVar14) = auVar72;
      auVar20._16_16_ = auVar15;
      auVar20._0_16_ = auVar125;
      auVar85 = vshufpd_avx(auVar195,auVar20,2);
      auVar32 = vpermps_avx2(auVar148,auVar131);
      auVar72 = vpermpd_avx2(auVar207,0xe9);
      auVar72 = vblendps_avx(auVar32,auVar72,7);
      auVar32 = vpermps_avx2(auVar73,auVar72);
      auVar85 = vpermps_avx2(auVar98,auVar85);
      auVar85 = vblendps_avx(auVar85,auVar32,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar14) = auVar85;
      auVar85 = vpermps_avx2(auVar97,auVar72);
      auVar72 = vshufpd_avx(auVar195,auVar195,1);
      auVar72 = vblendps_avx(auVar85,auVar72,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar14) = auVar72;
      auVar85 = vpermps_avx2(auVar144,auVar207);
      auVar72 = vpermpd_avx2(auVar195,0xff);
      auVar72 = vblendpd_avx(auVar85,auVar72,1);
      auVar72 = vblendps_avx(auVar72,auVar131,0xe0);
      auVar72 = vpermps_avx2(auVar31,auVar72);
      *(undefined1 (*) [32])(param_2 + lVar14) = auVar72;
      auVar125 = vpand_avx(auVar16,auVar65);
      lVar14 = lVar14 + 0x60;
      uVar12 = uVar12 + 8;
    } while ((int)uVar12 < (int)(uVar10 & 0xfffffff8));
  }
  auVar32 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar85 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar72 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  if ((int)uVar12 < (int)param_5) {
    auVar162._4_4_ = uVar12;
    auVar162._0_4_ = uVar12;
    auVar162._8_4_ = uVar12;
    auVar162._12_4_ = uVar12;
    auVar162._16_4_ = uVar12;
    auVar162._20_4_ = uVar12;
    auVar162._24_4_ = uVar12;
    auVar162._28_4_ = uVar12;
    auVar97 = vpor_avx2(auVar162,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar39._4_4_ = param_5;
    auVar39._0_4_ = param_5;
    auVar39._8_4_ = param_5;
    auVar39._12_4_ = param_5;
    auVar39._16_4_ = param_5;
    auVar39._20_4_ = param_5;
    auVar39._24_4_ = param_5;
    auVar39._28_4_ = param_5;
    auVar97 = vpcmpgtd_avx2(auVar39,auVar97);
    uVar7 = (ulonglong)uVar12;
    pauVar1 = (undefined1 (*) [32])(param_1 + uVar7 * 0xc);
    uVar9 = vmovmskps_avx(auVar97);
    if (uVar9 == 0xff) {
      auVar162 = pauVar1[1];
      auVar144 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar162);
      auVar31 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar1);
      auVar144 = vblendps_avx(auVar31,auVar144,0x88);
      auVar31 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar162);
      auVar148 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,pauVar1[2]);
      auVar31 = vblendps_avx(auVar148,auVar31,0x13);
      auVar27._16_16_ = auVar31._0_16_;
      auVar27._0_16_ = auVar144._0_16_;
      auVar61 = vperm2f128_avx(auVar144,auVar31,0x31);
      auVar162 = vblendps_avx(auVar162,*pauVar1,0x24);
      auVar162 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar162);
      auVar144 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,pauVar1[2]);
      auVar148 = vblendps_avx(auVar162,auVar144,0xe0);
      auVar162 = *(undefined1 (*) [32])(param_2 + uVar7 * 0xc);
      auVar144 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc);
      auVar31 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc);
      auVar73 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar144);
      auVar98 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar162);
      auVar73 = vblendps_avx(auVar98,auVar73,0x88);
      auVar98 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar144);
      auVar127 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar31);
      auVar98 = vblendps_avx(auVar127,auVar98,0x13);
      auVar173._16_16_ = auVar98._0_16_;
      auVar173._0_16_ = auVar73._0_16_;
      auVar73 = vperm2f128_avx(auVar73,auVar98,0x31);
      auVar162 = vblendps_avx(auVar144,auVar162,0x24);
      auVar162 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar162);
      auVar144 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,auVar31);
      auVar162 = vblendps_avx(auVar162,auVar144,0xe0);
    }
    else {
      auVar27 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar97);
      auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar97);
      auVar148 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar97);
      auVar173 = vgatherdps(ZEXT1632(ZEXT816(0)),auVar97);
      auVar73 = vgatherdps(ZEXT832(0),auVar97);
      auVar162 = vgatherdps(ZEXT832(0) << 0x40,auVar97);
    }
    pauVar13 = (undefined1 (*) [32])(param_2 + uVar7 * 0xc);
    auVar144 = vcvtps2pd_avx(auVar27._0_16_);
    auVar31 = vcvtps2pd_avx(auVar27._16_16_);
    auVar98 = vcvtps2pd_avx(auVar61._0_16_);
    auVar61 = vcvtps2pd_avx(auVar61._16_16_);
    dVar124 = param_4 * auVar31._0_8_ - dVar107;
    dVar135 = param_4 * auVar31._8_8_ - dVar107;
    dVar137 = param_4 * auVar31._16_8_ - dVar107;
    dVar139 = param_4 * auVar31._24_8_ - dVar107;
    dVar93 = param_4 * auVar144._0_8_ - dVar107;
    dVar101 = param_4 * auVar144._8_8_ - dVar107;
    dVar104 = param_4 * auVar144._16_8_ - dVar107;
    dVar107 = param_4 * auVar144._24_8_ - dVar107;
    auVar144 = vcvtps2pd_avx(auVar148._0_16_);
    auVar31 = vcvtps2pd_avx(auVar148._16_16_);
    dVar182 = param_4 * auVar61._0_8_ - dVar120;
    dVar187 = param_4 * auVar61._8_8_ - dVar120;
    dVar191 = param_4 * auVar61._16_8_ - dVar120;
    dVar199 = param_4 * auVar61._24_8_ - dVar120;
    dVar110 = param_4 * auVar98._0_8_ - dVar120;
    dVar114 = param_4 * auVar98._8_8_ - dVar120;
    dVar117 = param_4 * auVar98._16_8_ - dVar120;
    dVar120 = param_4 * auVar98._24_8_ - dVar120;
    dVar192 = param_4 * auVar31._0_8_ - dVar190;
    dVar197 = param_4 * auVar31._8_8_ - dVar190;
    dVar200 = param_4 * auVar31._16_8_ - dVar190;
    dVar204 = param_4 * auVar31._24_8_ - dVar190;
    dVar183 = param_4 * auVar144._0_8_ - dVar190;
    dVar186 = param_4 * auVar144._8_8_ - dVar190;
    dVar188 = param_4 * auVar144._16_8_ - dVar190;
    dVar190 = param_4 * auVar144._24_8_ - dVar190;
    auVar16._0_4_ = auVar173._0_4_ ^ __real_80000000;
    auVar16._4_4_ = auVar173._4_4_ ^ __real_80000000;
    auVar16._8_4_ = auVar173._8_4_ ^ __real_80000000;
    auVar16._12_4_ = auVar173._12_4_ ^ __real_80000000;
    auVar28._16_4_ = auVar173._16_4_ ^ __real_80000000;
    auVar28._0_16_ = auVar16;
    auVar28._20_4_ = auVar173._20_4_ ^ __real_80000000;
    auVar28._24_4_ = auVar173._24_4_ ^ __real_80000000;
    auVar28._28_4_ = auVar173._28_4_ ^ __real_80000000;
    auVar171._0_4_ = auVar73._0_4_ ^ __real_80000000;
    auVar171._4_4_ = auVar73._4_4_ ^ __real_80000000;
    auVar171._8_4_ = auVar73._8_4_ ^ __real_80000000;
    auVar171._12_4_ = auVar73._12_4_ ^ __real_80000000;
    auVar174._16_4_ = auVar73._16_4_ ^ __real_80000000;
    auVar174._0_16_ = auVar171;
    auVar174._20_4_ = auVar73._20_4_ ^ __real_80000000;
    auVar174._24_4_ = auVar73._24_4_ ^ __real_80000000;
    auVar174._28_4_ = auVar73._28_4_ ^ __real_80000000;
    auVar140._0_4_ = auVar162._0_4_ ^ __real_80000000;
    auVar140._4_4_ = auVar162._4_4_ ^ __real_80000000;
    auVar140._8_4_ = auVar162._8_4_ ^ __real_80000000;
    auVar140._12_4_ = auVar162._12_4_ ^ __real_80000000;
    auVar208._16_4_ = auVar162._16_4_ ^ __real_80000000;
    auVar208._0_16_ = auVar140;
    auVar208._20_4_ = auVar162._20_4_ ^ __real_80000000;
    auVar208._24_4_ = auVar162._24_4_ ^ __real_80000000;
    auVar208._28_4_ = auVar162._28_4_ ^ __real_80000000;
    dVar123 = auVar161._0_8_ * dVar182 - dVar124 * local_2e8;
    dVar138 = auVar161._0_8_ * dVar187 - dVar135 * dStack_2e0;
    dVar156 = auVar161._0_8_ * dVar191 - dVar137 * dStack_2d8;
    dVar166 = auVar161._0_8_ * dVar199 - dVar139 * dStack_2d0;
    dVar53 = local_2e8 * dVar192 - local_2c8 * dVar182;
    dVar55 = dStack_2e0 * dVar197 - dStack_2c0 * dVar187;
    dVar68 = dStack_2d8 * dVar200 - dStack_2b8 * dVar191;
    dVar169 = dStack_2d0 * dVar204 - dStack_2b0 * dVar199;
    dVar185 = local_2c8 * dVar124 - auVar161._0_8_ * dVar192;
    dVar189 = dStack_2c0 * dVar135 - auVar161._0_8_ * dVar197;
    dVar196 = dStack_2b8 * dVar137 - auVar161._0_8_ * dVar200;
    dVar203 = dStack_2b0 * dVar139 - auVar161._0_8_ * dVar204;
    dVar53 = dVar53 + dVar53;
    dVar55 = dVar55 + dVar55;
    dVar68 = dVar68 + dVar68;
    dVar169 = dVar169 + dVar169;
    dVar185 = dVar185 + dVar185;
    dVar189 = dVar189 + dVar189;
    dVar196 = dVar196 + dVar196;
    dVar203 = dVar203 + dVar203;
    dVar123 = dVar123 + dVar123;
    dVar138 = dVar138 + dVar138;
    dVar156 = dVar156 + dVar156;
    dVar166 = dVar166 + dVar166;
    auVar162 = vcvtps2pd_avx(auVar28._16_16_);
    auVar144 = vcvtps2pd_avx(auVar16);
    auVar31 = vcvtps2pd_avx(auVar174._16_16_);
    dVar43 = auVar161._0_8_ * dVar110 - local_2e8 * dVar93;
    dVar82 = auVar161._0_8_ * dVar114 - dStack_2e0 * dVar101;
    dVar52 = auVar161._0_8_ * dVar117 - dStack_2d8 * dVar104;
    dVar90 = auVar161._0_8_ * dVar120 - dStack_2d0 * dVar107;
    dVar91 = local_2e8 * dVar183 - local_2c8 * dVar110;
    dVar63 = dStack_2e0 * dVar186 - dStack_2c0 * dVar114;
    dVar77 = dStack_2d8 * dVar188 - dStack_2b8 * dVar117;
    dVar176 = dStack_2d0 * dVar190 - dStack_2b0 * dVar120;
    dVar134 = local_2c8 * dVar93 - auVar161._0_8_ * dVar183;
    dVar145 = dStack_2c0 * dVar101 - auVar161._0_8_ * dVar186;
    dVar158 = dStack_2b8 * dVar104 - auVar161._0_8_ * dVar188;
    dVar167 = dStack_2b0 * dVar107 - auVar161._0_8_ * dVar190;
    dVar91 = dVar91 + dVar91;
    dVar63 = dVar63 + dVar63;
    dVar77 = dVar77 + dVar77;
    dVar176 = dVar176 + dVar176;
    dVar134 = dVar134 + dVar134;
    dVar145 = dVar145 + dVar145;
    dVar158 = dVar158 + dVar158;
    dVar167 = dVar167 + dVar167;
    dVar43 = dVar43 + dVar43;
    dVar82 = dVar82 + dVar82;
    dVar52 = dVar52 + dVar52;
    dVar90 = dVar90 + dVar90;
    auVar148 = vcvtps2pd_avx(auVar171);
    auVar73 = vcvtps2pd_avx(auVar208._16_16_);
    auVar98 = vcvtps2pd_avx(auVar140);
    dVar76 = auVar162._0_8_;
    dVar78 = auVar162._8_8_;
    dVar80 = auVar162._16_8_;
    dVar42 = auVar162._24_8_;
    dVar193 = auVar31._0_8_;
    dVar92 = auVar161._0_8_ * dVar193 - local_2e8 * dVar76;
    dVar198 = auVar31._8_8_;
    dVar66 = auVar161._0_8_ * dVar198 - dStack_2e0 * dVar78;
    dVar201 = auVar31._16_8_;
    dVar81 = auVar161._0_8_ * dVar201 - dStack_2d8 * dVar80;
    dVar205 = auVar31._24_8_;
    dVar180 = auVar161._0_8_ * dVar205 - dStack_2d0 * dVar42;
    dVar146 = auVar144._0_8_;
    dVar155 = auVar144._8_8_;
    dVar157 = auVar144._16_8_;
    dVar159 = auVar144._24_8_;
    dVar94 = auVar148._0_8_;
    dVar136 = auVar161._0_8_ * dVar94 - dVar146 * local_2e8;
    dVar102 = auVar148._8_8_;
    dVar154 = auVar161._0_8_ * dVar102 - dVar155 * dStack_2e0;
    dVar105 = auVar148._16_8_;
    dVar160 = auVar161._0_8_ * dVar105 - dVar157 * dStack_2d8;
    dVar108 = auVar148._24_8_;
    dVar168 = auVar161._0_8_ * dVar108 - dVar159 * dStack_2d0;
    dVar111 = auVar73._0_8_;
    dVar54 = local_2e8 * dVar111 - local_2c8 * dVar193;
    dVar115 = auVar73._8_8_;
    dVar64 = dStack_2e0 * dVar115 - dStack_2c0 * dVar198;
    dVar118 = auVar73._16_8_;
    dVar79 = dStack_2d8 * dVar118 - dStack_2b8 * dVar201;
    dVar121 = auVar73._24_8_;
    dVar178 = dStack_2d0 * dVar121 - dStack_2b0 * dVar205;
    dVar170 = auVar98._0_8_;
    dVar206 = local_2e8 * dVar170 - local_2c8 * dVar94;
    dVar177 = auVar98._8_8_;
    dVar209 = dStack_2e0 * dVar177 - dStack_2c0 * dVar102;
    dVar179 = auVar98._16_8_;
    dVar210 = dStack_2d8 * dVar179 - dStack_2b8 * dVar105;
    dVar181 = auVar98._24_8_;
    dVar211 = dStack_2d0 * dVar181 - dStack_2b0 * dVar108;
    dVar95 = local_2c8 * dVar76 - auVar161._0_8_ * dVar111;
    dVar103 = dStack_2c0 * dVar78 - auVar161._0_8_ * dVar115;
    dVar106 = dStack_2b8 * dVar80 - auVar161._0_8_ * dVar118;
    dVar109 = dStack_2b0 * dVar42 - auVar161._0_8_ * dVar121;
    dVar112 = local_2c8 * dVar146 - auVar161._0_8_ * dVar170;
    dVar116 = dStack_2c0 * dVar155 - auVar161._0_8_ * dVar177;
    dVar119 = dStack_2b8 * dVar157 - auVar161._0_8_ * dVar179;
    dVar122 = dStack_2b0 * dVar159 - auVar161._0_8_ * dVar181;
    dVar206 = dVar206 + dVar206;
    dVar209 = dVar209 + dVar209;
    dVar210 = dVar210 + dVar210;
    dVar211 = dVar211 + dVar211;
    dVar54 = dVar54 + dVar54;
    dVar64 = dVar64 + dVar64;
    dVar79 = dVar79 + dVar79;
    dVar178 = dVar178 + dVar178;
    dVar112 = dVar112 + dVar112;
    dVar116 = dVar116 + dVar116;
    dVar119 = dVar119 + dVar119;
    dVar122 = dVar122 + dVar122;
    dVar95 = dVar95 + dVar95;
    dVar103 = dVar103 + dVar103;
    dVar106 = dVar106 + dVar106;
    dVar109 = dVar109 + dVar109;
    dVar136 = dVar136 + dVar136;
    dVar154 = dVar154 + dVar154;
    dVar160 = dVar160 + dVar160;
    dVar168 = dVar168 + dVar168;
    dVar92 = dVar92 + dVar92;
    dVar66 = dVar66 + dVar66;
    dVar81 = dVar81 + dVar81;
    dVar180 = dVar180 + dVar180;
    auVar142._0_8_ =
         dVar67 * ((local_2e8 * dVar123 - local_2c8 * dVar185) + local_2a8 * dVar53 + dVar124);
    auVar142._8_8_ =
         dVar67 * ((dStack_2e0 * dVar138 - dStack_2c0 * dVar189) + dStack_2a0 * dVar55 + dVar135);
    auVar142._16_8_ =
         dVar67 * ((dStack_2d8 * dVar156 - dStack_2b8 * dVar196) + dStack_298 * dVar68 + dVar137);
    auVar142._24_8_ =
         dVar67 * ((dStack_2d0 * dVar166 - dStack_2b0 * dVar203) + dStack_290 * dVar169 + dVar139);
    auVar149._0_8_ =
         dVar67 * ((local_2e8 * dVar43 - local_2c8 * dVar134) + local_2a8 * dVar91 + dVar93);
    auVar149._8_8_ =
         dVar67 * ((dStack_2e0 * dVar82 - dStack_2c0 * dVar145) + dStack_2a0 * dVar63 + dVar101);
    auVar149._16_8_ =
         dVar67 * ((dStack_2d8 * dVar52 - dStack_2b8 * dVar158) + dStack_298 * dVar77 + dVar104);
    auVar149._24_8_ =
         dVar67 * ((dStack_2d0 * dVar90 - dStack_2b0 * dVar167) + dStack_290 * dVar176 + dVar107);
    auVar163._0_8_ =
         dVar67 * (local_2a8 * dVar54 + dVar76 + (local_2e8 * dVar92 - local_2c8 * dVar95));
    auVar163._8_8_ =
         dVar67 * (dStack_2a0 * dVar64 + dVar78 + (dStack_2e0 * dVar66 - dStack_2c0 * dVar103));
    auVar163._16_8_ =
         dVar67 * (dStack_298 * dVar79 + dVar80 + (dStack_2d8 * dVar81 - dStack_2b8 * dVar106));
    auVar163._24_8_ =
         dVar67 * (dStack_290 * dVar178 + dVar42 + (dStack_2d0 * dVar180 - dStack_2b0 * dVar109));
    auVar132._0_8_ =
         dVar67 * (local_2a8 * dVar206 + dVar146 + (local_2e8 * dVar136 - local_2c8 * dVar112));
    auVar132._8_8_ =
         dVar67 * (dStack_2a0 * dVar209 + dVar155 + (dStack_2e0 * dVar154 - dStack_2c0 * dVar116));
    auVar132._16_8_ =
         dVar67 * (dStack_298 * dVar210 + dVar157 + (dStack_2d8 * dVar160 - dStack_2b8 * dVar119));
    auVar132._24_8_ =
         dVar67 * (dStack_290 * dVar211 + dVar159 + (dStack_2d0 * dVar168 - dStack_2b0 * dVar122));
    auVar99._0_8_ =
         ((local_2c8 * dVar53 - auVar161._0_8_ * dVar123) + local_2a8 * dVar185 + dVar182) *
         local_108;
    auVar99._8_8_ =
         ((dStack_2c0 * dVar55 - auVar161._0_8_ * dVar138) + dStack_2a0 * dVar189 + dVar187) *
         dStack_100;
    auVar99._16_8_ =
         ((dStack_2b8 * dVar68 - auVar161._0_8_ * dVar156) + dStack_298 * dVar196 + dVar191) *
         dStack_f8;
    auVar99._24_8_ =
         ((dStack_2b0 * dVar169 - auVar161._0_8_ * dVar166) + dStack_290 * dVar203 + dVar199) *
         dStack_f0;
    auVar62._0_8_ =
         local_108 *
         ((local_2c8 * dVar91 - auVar161._0_8_ * dVar43) + local_2a8 * dVar134 + dVar110);
    auVar62._8_8_ =
         dStack_100 *
         ((dStack_2c0 * dVar63 - auVar161._0_8_ * dVar82) + dStack_2a0 * dVar145 + dVar114);
    auVar62._16_8_ =
         dStack_f8 *
         ((dStack_2b8 * dVar77 - auVar161._0_8_ * dVar52) + dStack_298 * dVar158 + dVar117);
    auVar62._24_8_ =
         dStack_f0 *
         ((dStack_2b0 * dVar176 - auVar161._0_8_ * dVar90) + dStack_290 * dVar167 + dVar120);
    auVar40._0_8_ =
         local_108 * ((local_2c8 * dVar54 - auVar161._0_8_ * dVar92) + local_2a8 * dVar95 + dVar193)
    ;
    auVar40._8_8_ =
         dStack_100 *
         ((dStack_2c0 * dVar64 - auVar161._0_8_ * dVar66) + dStack_2a0 * dVar103 + dVar198);
    auVar40._16_8_ =
         dStack_f8 *
         ((dStack_2b8 * dVar79 - auVar161._0_8_ * dVar81) + dStack_298 * dVar106 + dVar201);
    auVar40._24_8_ =
         dStack_f0 *
         ((dStack_2b0 * dVar178 - auVar161._0_8_ * dVar180) + dStack_290 * dVar109 + dVar205);
    auVar175._0_8_ =
         local_108 *
         ((local_2c8 * dVar206 - auVar161._0_8_ * dVar136) + local_2a8 * dVar112 + dVar94);
    auVar175._8_8_ =
         dStack_100 *
         ((dStack_2c0 * dVar209 - auVar161._0_8_ * dVar154) + dStack_2a0 * dVar116 + dVar102);
    auVar175._16_8_ =
         dStack_f8 *
         ((dStack_2b8 * dVar210 - auVar161._0_8_ * dVar160) + dStack_298 * dVar119 + dVar105);
    auVar175._24_8_ =
         dStack_f0 *
         ((dStack_2b0 * dVar211 - auVar161._0_8_ * dVar168) + dStack_290 * dVar122 + dVar108);
    auVar88._0_8_ =
         local_e8 *
         (local_2a8 * dVar123 + dVar192 + (auVar161._0_8_ * dVar185 - local_2e8 * dVar53));
    auVar88._8_8_ =
         dStack_e0 *
         (dStack_2a0 * dVar138 + dVar197 + (auVar161._0_8_ * dVar189 - dStack_2e0 * dVar55));
    auVar88._16_8_ =
         dStack_d8 *
         (dStack_298 * dVar156 + dVar200 + (auVar161._0_8_ * dVar196 - dStack_2d8 * dVar68));
    auVar88._24_8_ =
         dStack_d0 *
         (dStack_290 * dVar166 + dVar204 + (auVar161._0_8_ * dVar203 - dStack_2d0 * dVar169));
    auVar74._0_8_ =
         local_e8 * ((auVar161._0_8_ * dVar134 - local_2e8 * dVar91) + local_2a8 * dVar43 + dVar183)
    ;
    auVar74._8_8_ =
         dStack_e0 *
         ((auVar161._0_8_ * dVar145 - dStack_2e0 * dVar63) + dStack_2a0 * dVar82 + dVar186);
    auVar74._16_8_ =
         dStack_d8 *
         ((auVar161._0_8_ * dVar158 - dStack_2d8 * dVar77) + dStack_298 * dVar52 + dVar188);
    auVar74._24_8_ =
         dStack_d0 *
         ((auVar161._0_8_ * dVar167 - dStack_2d0 * dVar176) + dStack_290 * dVar90 + dVar190);
    auVar184._0_8_ =
         local_e8 * (local_2a8 * dVar92 + dVar111 + (auVar161._0_8_ * dVar95 - dVar54 * local_2e8));
    auVar184._8_8_ =
         dStack_e0 *
         (dStack_2a0 * dVar66 + dVar115 + (auVar161._0_8_ * dVar103 - dVar64 * dStack_2e0));
    auVar184._16_8_ =
         dStack_d8 *
         (dStack_298 * dVar81 + dVar118 + (auVar161._0_8_ * dVar106 - dVar79 * dStack_2d8));
    auVar184._24_8_ =
         dStack_d0 *
         (dStack_290 * dVar180 + dVar121 + (auVar161._0_8_ * dVar109 - dVar178 * dStack_2d0));
    auVar83 = vcvtpd2ps_avx(auVar149);
    auVar44 = vcvtpd2ps_avx(auVar142);
    auVar143._0_8_ =
         local_e8 *
         ((auVar161._0_8_ * dVar112 - local_2e8 * dVar206) + dVar136 * local_2a8 + dVar170);
    auVar143._8_8_ =
         dStack_e0 *
         ((auVar161._0_8_ * dVar116 - dStack_2e0 * dVar209) + dVar154 * dStack_2a0 + dVar177);
    auVar143._16_8_ =
         dStack_d8 *
         ((auVar161._0_8_ * dVar119 - dStack_2d8 * dVar210) + dVar160 * dStack_298 + dVar179);
    auVar143._24_8_ =
         dStack_d0 *
         ((auVar161._0_8_ * dVar122 - dStack_2d0 * dVar211) + dVar168 * dStack_290 + dVar181);
    auVar29._16_16_ = auVar44;
    auVar29._0_16_ = auVar83;
    auVar69 = vcvtpd2ps_avx(auVar62);
    auVar15 = vcvtpd2ps_avx(auVar99);
    auVar45 = vcvtpd2ps_avx(auVar74);
    auVar113._16_16_ = auVar15;
    auVar113._0_16_ = auVar69;
    auVar56 = vcvtpd2ps_avx(auVar88);
    auVar100._16_16_ = auVar56;
    auVar100._0_16_ = auVar45;
    auVar16 = vcvtpd2ps_avx(auVar132);
    auVar96 = vcvtpd2ps_avx(auVar163);
    auVar194 = auVar97._0_16_;
    auVar202 = auVar97._16_16_;
    auVar89._16_16_ = auVar96;
    auVar89._0_16_ = auVar16;
    auVar70 = vcvtpd2ps_avx(auVar175);
    auVar140 = vpackssdw_avx(auVar194,auVar202);
    auVar65 = vcvtpd2ps_avx(auVar40);
    auVar51._16_16_ = auVar65;
    auVar51._0_16_ = auVar70;
    auVar84 = vcvtpd2ps_avx(auVar143);
    auVar171 = vcvtpd2ps_avx(auVar184);
    auVar172 = vpmovzxbw_avx(auVar125);
    auVar140 = vpand_avx(auVar140,auVar172);
    auVar140 = vpand_avx(auVar140,___xmm_00010001000100010001000100010001);
    auVar41._16_16_ = auVar171;
    auVar41._0_16_ = auVar84;
    auVar126 = vpsllw_avx(auVar140,0xf);
    auVar147 = auVar125;
    if ((((((((SUB161(auVar126 >> 0xf,0) & 1) != 0 || (SUB161(auVar126 >> 0x1f,0) & 1) != 0) ||
            (SUB161(auVar126 >> 0x2f,0) & 1) != 0) || (SUB161(auVar126 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar126 >> 0x4f,0) & 1) != 0) || (SUB161(auVar126 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar126 >> 0x6f,0) & 1) != 0) || auVar126[0xf] < '\0') {
      auVar162 = vpmovzxwd_avx2(auVar172);
      auVar162 = vpslld_avx2(auVar162,0x1f);
      auVar162 = vpsrad_avx2(auVar162,0x1f);
      auVar162 = vpand_avx2(auVar97,auVar162);
      auVar126._0_8_ = CONCAT44(__real_7f800000,__real_7f800000);
      auVar126._8_4_ = __real_7f800000;
      auVar126._12_4_ = __real_7f800000;
      auVar71._16_4_ = __real_7f800000;
      auVar71._0_16_ = auVar126;
      auVar71._20_4_ = __real_7f800000;
      auVar75._24_4_ = __real_7f800000;
      auVar75._0_24_ = auVar71;
      auVar75._28_4_ = __real_7f800000;
      auVar150._0_8_ = auVar83._0_8_ & auVar126._0_8_;
      uVar3 = auVar126._8_8_;
      auVar150._8_8_ = auVar83._8_8_ & uVar3;
      uVar4 = auVar71._16_8_;
      auVar150._16_8_ = auVar44._0_8_ & uVar4;
      uVar5 = auVar75._24_8_;
      auVar150._24_8_ = auVar44._8_8_ & uVar5;
      auVar144 = vpcmpeqd_avx2(auVar150,auVar75);
      auVar31 = vpcmpeqd_avx2(auVar150,auVar150);
      auVar147 = vpackssdw_avx(SUB3216(auVar144 ^ auVar31,0),SUB3216(auVar144 ^ auVar31,0x10));
      auVar172 = vpand_avx(auVar147,auVar140);
      auVar172 = vpsllw_avx(auVar172,0xf);
      if ((((((((SUB161(auVar172 >> 0xf,0) & 1) != 0 || (SUB161(auVar172 >> 0x1f,0) & 1) != 0) ||
              (SUB161(auVar172 >> 0x2f,0) & 1) != 0) || (SUB161(auVar172 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar172 >> 0x4f,0) & 1) != 0) || (SUB161(auVar172 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar172 >> 0x6f,0) & 1) != 0) || auVar172[0xf] < '\0') {
        auVar144 = vblendvps_avx(auVar162,auVar75,auVar144);
        auVar164._0_8_ = auVar69._0_8_ & auVar126._0_8_;
        auVar164._8_8_ = auVar69._8_8_ & uVar3;
        auVar164._16_8_ = auVar15._0_8_ & uVar4;
        auVar164._24_8_ = auVar15._8_8_ & uVar5;
        auVar31 = vpcmpeqd_avx2(auVar164,auVar75);
        auVar144 = vblendvps_avx(auVar144,auVar75,auVar31);
        auVar144 = vpshufb_avx2(auVar144,
                                ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                               );
        auVar144 = vpermq_avx2(auVar144,0xe8);
        auVar147 = auVar144._0_16_;
        auVar140 = vpand_avx(auVar140,auVar147);
        auVar140 = vpsllw_avx(auVar140,0xf);
        if ((((((((SUB161(auVar140 >> 0xf,0) & 1) != 0 || (SUB161(auVar140 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar140 >> 0x2f,0) & 1) != 0) || (SUB161(auVar140 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar140 >> 0x4f,0) & 1) != 0) || (SUB161(auVar140 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar140 >> 0x6f,0) & 1) != 0) || auVar140[0xf] < '\0') {
          auVar144 = vpmovzxwd_avx2(auVar147);
          auVar144 = vpslld_avx2(auVar144,0x1f);
          auVar144 = vpsrad_avx2(auVar144,0x1f);
          auVar144 = vpand_avx2(auVar144,auVar162);
          auVar151._0_8_ = auVar45._0_8_ & auVar126._0_8_;
          auVar151._8_8_ = auVar45._8_8_ & uVar3;
          auVar151._16_8_ = auVar56._0_8_ & uVar4;
          auVar151._24_8_ = auVar56._8_8_ & uVar5;
          auVar31 = vpcmpeqd_avx2(auVar151,auVar75);
          auVar144 = vblendvps_avx(auVar144,auVar75,auVar31);
          auVar144 = vpshufb_avx2(auVar144,
                                  ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                 );
          auVar144 = vpermq_avx2(auVar144,0xe8);
          auVar147 = auVar144._0_16_;
        }
      }
      auVar172 = vpackssdw_avx(auVar194,auVar202);
      auVar147 = vpshufb_avx(auVar147,___xmm_00000000000000000e0c0a0806040200);
      auVar140 = vpackssdw_avx(auVar162._0_16_,auVar162._16_16_);
      auVar147 = vpsllw_avx(auVar147,7);
      auVar147 = vpand_avx(auVar147,___xmm_80808080808080808080808080808080);
      auVar140 = vpacksswb_avx(auVar140,auVar140);
      auVar147 = vpcmpgtb_avx((undefined1  [16])0x0,auVar147);
      auVar147 = vpand_avx(auVar147,auVar140);
      auVar6 = vpmovzxbw_avx(auVar147);
      auVar140 = vpand_avx(auVar6,auVar172);
      auVar140 = vpand_avx(auVar140,___xmm_00010001000100010001000100010001);
      auVar172 = vpsllw_avx(auVar140,0xf);
      if ((((((((SUB161(auVar172 >> 0xf,0) & 1) != 0 || (SUB161(auVar172 >> 0x1f,0) & 1) != 0) ||
              (SUB161(auVar172 >> 0x2f,0) & 1) != 0) || (SUB161(auVar172 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar172 >> 0x4f,0) & 1) != 0) || (SUB161(auVar172 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar172 >> 0x6f,0) & 1) != 0) || auVar172[0xf] < '\0') {
        auVar162 = vpmovzxwd_avx2(auVar6);
        auVar162 = vpslld_avx2(auVar162,0x1f);
        auVar162 = vpsrad_avx2(auVar162,0x1f);
        auVar97 = vpand_avx2(auVar162,auVar97);
        auVar152._0_8_ = auVar16._0_8_ & auVar126._0_8_;
        auVar152._8_8_ = auVar16._8_8_ & uVar3;
        auVar152._16_8_ = auVar96._0_8_ & uVar4;
        auVar152._24_8_ = auVar96._8_8_ & uVar5;
        auVar162 = vpcmpeqd_avx2(auVar152,auVar75);
        auVar144 = vpcmpeqd_avx2(auVar152,auVar152);
        auVar147 = vpackssdw_avx(SUB3216(auVar162 ^ auVar144,0),SUB3216(auVar162 ^ auVar144,0x10));
        auVar172 = vpand_avx(auVar140,auVar147);
        auVar172 = vpsllw_avx(auVar172,0xf);
        if ((((((((SUB161(auVar172 >> 0xf,0) & 1) != 0 || (SUB161(auVar172 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar172 >> 0x2f,0) & 1) != 0) || (SUB161(auVar172 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar172 >> 0x4f,0) & 1) != 0) || (SUB161(auVar172 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar172 >> 0x6f,0) & 1) != 0) || auVar172[0xf] < '\0') {
          auVar162 = vblendvps_avx(auVar97,auVar75,auVar162);
          auVar165._0_8_ = auVar70._0_8_ & auVar126._0_8_;
          auVar165._8_8_ = auVar70._8_8_ & uVar3;
          auVar165._16_8_ = auVar65._0_8_ & uVar4;
          auVar165._24_8_ = auVar65._8_8_ & uVar5;
          auVar144 = vpcmpeqd_avx2(auVar165,auVar75);
          auVar162 = vblendvps_avx(auVar162,auVar75,auVar144);
          auVar162 = vpshufb_avx2(auVar162,
                                  ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                 );
          auVar162 = vpermq_avx2(auVar162,0xe8);
          auVar147 = auVar162._0_16_;
          auVar140 = vpand_avx(auVar140,auVar147);
          auVar140 = vpsllw_avx(auVar140,0xf);
          if ((((((((SUB161(auVar140 >> 0xf,0) & 1) != 0 || (SUB161(auVar140 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar140 >> 0x2f,0) & 1) != 0) || (SUB161(auVar140 >> 0x3f,0) & 1) != 0
                 ) || (SUB161(auVar140 >> 0x4f,0) & 1) != 0) ||
               (SUB161(auVar140 >> 0x5f,0) & 1) != 0) || (SUB161(auVar140 >> 0x6f,0) & 1) != 0) ||
              auVar140[0xf] < '\0') {
            auVar162 = vpmovzxwd_avx2(auVar147);
            auVar162 = vpslld_avx2(auVar162,0x1f);
            auVar162 = vpsrad_avx2(auVar162,0x1f);
            auVar162 = vpand_avx2(auVar162,auVar97);
            auVar153._0_8_ = auVar84._0_8_ & auVar126._0_8_;
            auVar153._8_8_ = auVar84._8_8_ & uVar3;
            auVar153._16_8_ = auVar171._0_8_ & uVar4;
            auVar153._24_8_ = auVar171._8_8_ & uVar5;
            auVar144 = vpcmpeqd_avx2(auVar153,auVar75);
            auVar162 = vblendvps_avx(auVar162,auVar75,auVar144);
            auVar162 = vpshufb_avx2(auVar162,
                                    ___ymm_00000000000000001d1c19181514111000000000000000000d0c090805040100
                                   );
            auVar162 = vpermq_avx2(auVar162,0xe8);
            auVar147 = auVar162._0_16_;
          }
        }
        auVar147 = vpshufb_avx(auVar147,___xmm_00000000000000000e0c0a0806040200);
        auVar140 = vpackssdw_avx(auVar97._0_16_,auVar97._16_16_);
        auVar147 = vpsllw_avx(auVar147,7);
        auVar147 = vpand_avx(auVar147,___xmm_80808080808080808080808080808080);
        auVar140 = vpacksswb_avx(auVar140,auVar140);
        auVar147 = vpcmpgtb_avx((undefined1  [16])0x0,auVar147);
        auVar147 = vpand_avx(auVar147,auVar140);
      }
    }
    auVar140 = vpackssdw_avx(auVar194,auVar202);
    auVar140 = vpacksswb_avx(auVar140,auVar140);
    auVar147 = vpand_avx(auVar147,___xmm_00000000000000000101010101010101);
    cVar8 = (char)uVar9;
    if (cVar8 == -1) {
      auVar133._16_16_ = auVar69;
      auVar133._0_16_ = auVar83;
      auVar97 = vshufpd_avx(auVar29,auVar133,2);
      auVar144 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar100);
      auVar162 = vpermpd_avx2(auVar113,0xe9);
      auVar162 = vpblendd_avx2(auVar144,auVar162,7);
      auVar144 = vpermd_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar162);
      auVar97 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar97);
      auVar97 = vpblendd_avx2(auVar97,auVar144,0xa4);
      *pauVar1 = auVar97;
      auVar144 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar162 = vpermd_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar162);
      auVar97 = vshufpd_avx(auVar29,auVar29,1);
      auVar97 = vpblendd_avx2(auVar162,auVar97,0x92);
      pauVar1[1] = auVar97;
      auVar148 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar31 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar162 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar113);
      auVar97 = vpermpd_avx2(auVar29,0xff);
      auVar97 = vblendpd_avx(auVar162,auVar97,1);
      auVar97 = vblendps_avx(auVar97,auVar100,0xe0);
      auVar97 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar97);
      pauVar1[2] = auVar97;
      auVar30._16_16_ = auVar70;
      auVar30._0_16_ = auVar16;
      auVar97 = vshufpd_avx(auVar89,auVar30,2);
      auVar162 = vpermps_avx2(auVar72,auVar41);
      auVar72 = vpermpd_avx2(auVar51,0xe9);
      auVar72 = vpblendd_avx2(auVar162,auVar72,7);
      auVar85 = vpermd_avx2(auVar85,auVar72);
      auVar32 = vpermps_avx2(auVar32,auVar97);
      auVar85 = vpblendd_avx2(auVar32,auVar85,0xa4);
      *pauVar13 = auVar85;
      auVar85 = vpermd_avx2(auVar144,auVar72);
      auVar72 = vshufpd_avx(auVar89,auVar89,1);
      auVar72 = vpblendd_avx2(auVar85,auVar72,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + uVar7 * 0xc) = auVar72;
      auVar85 = vpermps_avx2(auVar31,auVar51);
      auVar72 = vpermpd_avx2(auVar89,0xff);
      auVar72 = vblendpd_avx(auVar85,auVar72,1);
      auVar72 = vblendps_avx(auVar72,auVar41,0xe0);
      auVar72 = vpermps_avx2(auVar148,auVar72);
      *(undefined1 (*) [32])(param_2 + 0x40 + uVar7 * 0xc) = auVar72;
    }
    else {
      if ((uVar9 & 1) != 0) {
        *(int *)*pauVar1 = auVar83._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar2 = vextractps_avx(auVar83,1);
        *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
      }
      if ((uVar9 & 4) != 0) {
        uVar2 = vextractps_avx(auVar83,2);
        *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
      }
      if ((uVar9 & 8) != 0) {
        uVar2 = vextractps_avx(auVar83,3);
        *(undefined4 *)(pauVar1[1] + 4) = uVar2;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x10) = auVar44._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar44,1);
        *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar44,2);
        *(undefined4 *)(pauVar1[2] + 8) = uVar2;
      }
      if (cVar8 < '\0') {
        uVar2 = vextractps_avx(auVar44,3);
        *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)(*pauVar1 + 4) = auVar69._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar2 = vextractps_avx(auVar69,1);
        *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
      }
      if ((uVar9 & 4) != 0) {
        uVar2 = vextractps_avx(auVar69,2);
        *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
      }
      if ((uVar9 & 8) != 0) {
        uVar2 = vextractps_avx(auVar69,3);
        *(undefined4 *)(pauVar1[1] + 8) = uVar2;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x14) = auVar15._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar15,1);
        *(undefined4 *)pauVar1[2] = uVar2;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar15,2);
        *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
      }
      if (cVar8 < '\0') {
        uVar2 = vextractps_avx(auVar15,3);
        *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)(*pauVar1 + 8) = auVar45._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar2 = vextractps_avx(auVar45,1);
        *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
      }
      if ((uVar9 & 4) != 0) {
        uVar2 = vextractps_avx(auVar45,2);
        *(undefined4 *)pauVar1[1] = uVar2;
      }
      if ((uVar9 & 8) != 0) {
        uVar2 = vextractps_avx(auVar45,3);
        *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(pauVar1[1] + 0x18) = auVar56._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar56,1);
        *(undefined4 *)(pauVar1[2] + 4) = uVar2;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar56,2);
        *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
      }
      if (cVar8 < '\0') {
        uVar2 = vextractps_avx(auVar56,3);
        *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)*pauVar13 = auVar16._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar2 = vextractps_avx(auVar16,1);
        *(undefined4 *)(param_2 + 0xc + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 4) != 0) {
        uVar2 = vextractps_avx(auVar16,2);
        *(undefined4 *)(param_2 + 0x18 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 8) != 0) {
        uVar2 = vextractps_avx(auVar16,3);
        *(undefined4 *)(param_2 + 0x24 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + uVar7 * 0xc) = auVar96._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar96,1);
        *(undefined4 *)(param_2 + 0x3c + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar96,2);
        *(undefined4 *)(param_2 + 0x48 + uVar7 * 0xc) = uVar2;
      }
      if (cVar8 < '\0') {
        uVar2 = vextractps_avx(auVar96,3);
        *(undefined4 *)(param_2 + 0x54 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)(param_2 + 4 + uVar7 * 0xc) = auVar70._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar2 = vextractps_avx(auVar70,1);
        *(undefined4 *)(param_2 + 0x10 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 4) != 0) {
        uVar2 = vextractps_avx(auVar70,2);
        *(undefined4 *)(param_2 + 0x1c + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 8) != 0) {
        uVar2 = vextractps_avx(auVar70,3);
        *(undefined4 *)(param_2 + 0x28 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + uVar7 * 0xc) = auVar65._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar65,1);
        *(undefined4 *)(param_2 + 0x40 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar65,2);
        *(undefined4 *)(param_2 + 0x4c + uVar7 * 0xc) = uVar2;
      }
      if (cVar8 < '\0') {
        uVar2 = vextractps_avx(auVar65,3);
        *(undefined4 *)(param_2 + 0x58 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 1) != 0) {
        *(int *)(param_2 + 8 + uVar7 * 0xc) = auVar84._0_4_;
      }
      if ((uVar9 & 2) != 0) {
        uVar2 = vextractps_avx(auVar84,1);
        *(undefined4 *)(param_2 + 0x14 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 4) != 0) {
        uVar2 = vextractps_avx(auVar84,2);
        *(undefined4 *)(param_2 + 0x20 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 8) != 0) {
        uVar2 = vextractps_avx(auVar84,3);
        *(undefined4 *)(param_2 + 0x2c + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + uVar7 * 0xc) = auVar171._0_4_;
      }
      if ((uVar9 & 0x20) != 0) {
        uVar2 = vextractps_avx(auVar171,1);
        *(undefined4 *)(param_2 + 0x44 + uVar7 * 0xc) = uVar2;
      }
      if ((uVar9 & 0x40) != 0) {
        uVar2 = vextractps_avx(auVar171,2);
        *(undefined4 *)(param_2 + 0x50 + uVar7 * 0xc) = uVar2;
      }
      if (cVar8 < '\0') {
        uVar2 = vextractps_avx(auVar171,3);
        *(undefined4 *)(param_2 + 0x5c + uVar7 * 0xc) = uVar2;
      }
    }
    auVar125 = vpblendvb_avx(auVar125,auVar147,auVar140);
  }
  auVar125 = vpsllw_avx(auVar125,7);
  return CONCAT11(SUB161(auVar125 >> 0x47,0) & 1 |
                  (byte)((ushort)((ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9) >> 8) |
                  (byte)((ushort)((ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10) >> 8) |
                  (byte)((ushort)((ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb) >> 8) |
                  (byte)((ushort)((ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc) >> 8) |
                  (byte)((ushort)((ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd) >> 8) |
                  (byte)((ushort)((ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe) >> 8) |
                  (byte)((ushort)((ushort)(byte)(auVar125[0xf] >> 7) << 0xf) >> 8),
                  (byte)(SUB161(auVar125 >> 7,0) & 1 | (SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                         (SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                         (SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                         (SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                         (SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                         (SUB161(auVar125 >> 0x37,0) & 1) << 6 | SUB161(auVar125 >> 0x3f,0) << 7) ==
                  0xff);
}


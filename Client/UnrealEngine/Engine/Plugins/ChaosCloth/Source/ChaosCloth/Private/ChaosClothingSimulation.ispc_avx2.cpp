// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// GetClothingSimulationData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_REFs_5B__c_unFVector_5D_CundCuni_avx2 @ 140cb9500

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetClothingSimulationData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_REFs_5B__c_unFVector_5D_CundCuni_avx2
               (longlong param_1,longlong param_2,double *param_3,double *param_4,double param_5,
               uint param_6,undefined1 (*param_7) [32])

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [24];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  ulonglong uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 (*pauVar19) [32];
  undefined4 uVar20;
  uint uVar21;
  undefined1 (*pauVar22) [32];
  longlong lVar23;
  double dVar24;
  double dVar49;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar33 [16];
  double dVar25;
  double dVar26;
  double dVar50;
  double dVar51;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  double dVar27;
  double dVar28;
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  double dVar52;
  double dVar53;
  double dVar57;
  double dVar58;
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  double dVar62;
  double dVar82;
  double dVar84;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  double dVar63;
  double dVar83;
  double dVar85;
  double dVar86;
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
  undefined1 auVar89 [16];
  double dVar87;
  double dVar88;
  double dVar114;
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  double dVar112;
  undefined1 auVar92 [32];
  double dVar113;
  double dVar115;
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
  double dVar116;
  double dVar117;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  double dVar118;
  undefined1 auVar121 [16];
  double dVar138;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar119;
  double dVar120;
  double dVar139;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  double dVar140;
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
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [16];
  double dVar165;
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
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  double dVar179;
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  undefined1 in_ZMM7 [64];
  double dVar189;
  double dVar190;
  double dVar198;
  double dVar201;
  undefined1 auVar191 [32];
  double dVar199;
  double dVar202;
  double dVar204;
  double dVar205;
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  double dVar200;
  double dVar203;
  double dVar206;
  double dVar207;
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  double dVar208;
  double dVar209;
  double dVar215;
  double dVar217;
  undefined1 auVar210 [32];
  double dVar219;
  undefined1 auVar211 [32];
  double dVar216;
  double dVar218;
  double dVar220;
  undefined1 auVar212 [32];
  undefined1 auVar213 [32];
  undefined1 auVar214 [32];
  double dVar221;
  double dVar222;
  double dVar227;
  double dVar229;
  undefined1 auVar223 [32];
  double dVar228;
  double dVar230;
  double dVar231;
  double dVar232;
  undefined1 auVar224 [32];
  undefined1 auVar225 [32];
  undefined1 auVar226 [32];
  double dVar233;
  double dVar237;
  double dVar238;
  double dVar241;
  undefined1 auVar234 [32];
  undefined1 auVar235 [32];
  double dVar239;
  double dVar240;
  double dVar242;
  double dVar243;
  undefined1 auVar236 [32];
  double dVar244;
  double dVar245;
  double dVar249;
  double dVar251;
  undefined1 auVar246 [32];
  undefined1 auVar247 [32];
  double dVar250;
  double dVar252;
  double dVar253;
  double dVar254;
  undefined1 auVar248 [32];
  double dVar255;
  double dVar256;
  double dVar257;
  double dVar258;
  double dVar259;
  double dVar260;
  double dVar261;
  double dVar262;
  double dVar263;
  double dVar264;
  double dVar265;
  double dVar266;
  double dVar267;
  double dVar270;
  undefined1 auVar268 [16];
  double dVar271;
  double dVar272;
  undefined1 local_418 [16];
  uint uStack_408;
  uint uStack_404;
  uint uStack_400;
  uint uStack_3fc;
  undefined1 local_3f8 [16];
  uint uStack_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  uint uStack_3dc;
  undefined1 local_3d8 [16];
  uint uStack_3c8;
  uint uStack_3c4;
  uint uStack_3c0;
  uint uStack_3bc;
  uint local_398;
  uint uStack_394;
  uint uStack_390;
  uint uStack_38c;
  uint uStack_388;
  uint uStack_384;
  uint uStack_380;
  uint uStack_37c;
  undefined1 local_358 [16];
  double dStack_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  undefined1 local_2f8 [12];
  uint uStack_2ec;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double local_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  undefined1 local_1f8 [16];
  double dStack_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  undefined1 local_1a8 [16];
  double dStack_198;
  double dStack_190;
  double local_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  undefined1 local_128 [16];
  double dStack_118;
  double dStack_110;
  undefined1 auVar34 [32];
  undefined1 auVar44 [32];
  undefined1 auVar47 [32];
  undefined1 auVar269 [32];
  
  uVar16 = __real_80000000;
  auVar69 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
  auVar166 = auVar69 & ~*param_7;
  auVar223._0_8_ =
       *param_3 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  auVar223._8_8_ = param_3[1] * _UNK_150b543c8;
  auVar223._16_8_ = param_3[2] * _UNK_150b543d0;
  auVar223._24_8_ = param_3[3] * _UNK_150b543d8;
  dVar1 = param_3[4];
  local_1f8._8_8_ = param_3[5];
  dVar2 = param_3[6];
  auVar10 = *(undefined1 (*) [24])(param_3 + 8);
  auVar64._24_8_ = 0;
  auVar64._0_24_ = auVar10;
  dVar62 = auVar10._0_8_;
  auVar154._0_8_ = (ulonglong)dVar62 & __real_7fffffffffffffff;
  dVar82 = auVar10._8_8_;
  auVar154._8_8_ = (ulonglong)dVar82 & __real_7fffffffffffffff;
  dVar84 = auVar10._16_8_;
  auVar154._16_8_ = (ulonglong)dVar84 & __real_7fffffffffffffff;
  auVar154._24_8_ = 0;
  auVar39._8_8_ = __real_3e45798ee2308c3a;
  auVar39._0_8_ = __real_3e45798ee2308c3a;
  auVar39._16_8_ = __real_3e45798ee2308c3a;
  auVar39._24_8_ = __real_3e45798ee2308c3a;
  auVar129 = vcmppd_avx(auVar154,auVar39,2);
  auVar124 = vpackssdw_avx2(auVar129,auVar69);
  auVar159 = vpermq_avx2(auVar124,0xd8);
  auVar124._8_8_ = __real_46c8a6e32246c99c;
  auVar124._0_8_ = __real_46c8a6e32246c99c;
  auVar124._16_8_ = __real_46c8a6e32246c99c;
  auVar124._24_8_ = __real_46c8a6e32246c99c;
  auVar124 = vcmppd_avx(auVar64,auVar124,2);
  auVar124 = vpackssdw_avx2(auVar124,auVar69);
  auVar9 = vpackssdw_avx(auVar124._0_16_,auVar124._16_16_);
  auVar69._8_8_ = __real_3914c4e977ba1f5c;
  auVar69._0_8_ = __real_3914c4e977ba1f5c;
  auVar69._16_8_ = __real_3914c4e977ba1f5c;
  auVar69._24_8_ = __real_3914c4e977ba1f5c;
  auVar124 = vcmppd_avx(auVar69,auVar64,2);
  auVar69 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar124 = vpackssdw_avx2(auVar124,auVar69);
  auVar153 = vpackssdw_avx(auVar124._0_16_,auVar124._16_16_);
  auVar9 = vpand_avx(auVar153,auVar9);
  auVar9 = vpshufd_avx(auVar9,0xd8);
  dVar87 = SUB648(ZEXT1664((undefined1  [16])0x0),8);
  dVar112 = SUB408(SUB4840((undefined1  [48])0x0,8),0);
  if ((((((((SUB321(auVar166 >> 0x1f,0) & 1) == 0 && (SUB321(auVar166 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar166 >> 0x5f,0) & 1) == 0) && SUB321(auVar166 >> 0x7f,0) == '\0') &&
        (SUB321(auVar166 >> 0x9f,0) & 1) == 0) && SUB321(auVar166 >> 0xbf,0) == '\0') &&
      (SUB321(auVar166 >> 0xdf,0) & 1) == 0) && -1 < auVar166[0x1f]) {
    auVar129 = vcmppd_avx(auVar154,auVar39,6);
    auVar124 = vcmppd_avx(auVar69,auVar39,6);
    auVar129 = vpackssdw_avx2(auVar129,auVar124);
    auVar153 = vpackssdw_avx(auVar129._0_16_,auVar129._16_16_);
    auVar153 = vpshufd_avx(auVar153,0xd8);
    auVar9 = vpand_avx(auVar9,auVar153);
    auVar122 = vpsllw_avx(auVar9,0xf);
    auVar129 = ZEXT1632(auVar122);
    if ((((((((SUB161(auVar122 >> 0xf,0) & 1) == 0 && (SUB161(auVar122 >> 0x1f,0) & 1) == 0) &&
            (SUB161(auVar122 >> 0x2f,0) & 1) == 0) && (SUB161(auVar122 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar122 >> 0x4f,0) & 1) == 0) && (SUB161(auVar122 >> 0x5f,0) & 1) == 0) &&
        (SUB161(auVar122 >> 0x6f,0) & 1) == 0) && -1 < auVar122[0xf]) {
      auVar124 = ZEXT1632((undefined1  [16])0x0);
LAB_140cb9fe5:
      auVar160._0_8_ = (ulonglong)dVar62 & __real_7fe0000000000000;
      auVar160._8_8_ = (ulonglong)dVar82 & __real_7fe0000000000000;
      auVar160._16_8_ = (ulonglong)dVar84 & __real_7fe0000000000000;
      auVar160._24_8_ = 0;
      auVar181._8_8_ = __real_7fcfffffffffffff;
      auVar181._0_8_ = __real_7fcfffffffffffff;
      auVar181._16_8_ = __real_7fcfffffffffffff;
      auVar181._24_8_ = __real_7fcfffffffffffff;
      auVar64 = vpsubq_avx2(auVar181,auVar160);
      auVar166 = vpsubq_avx2(auVar181,ZEXT832((ulonglong)dVar87 & __real_7fe0000000000000) << 0x40);
      auVar69 = vpcmpeqd_avx2(auVar181,auVar181);
      auVar98._0_8_ = auVar166._0_8_ * 0.0;
      auVar98._8_8_ = dVar87 * auVar166._8_8_;
      auVar98._16_8_ = auVar166._16_8_ * 0.0;
      auVar98._24_8_ = dVar112 * auVar166._24_8_;
      auVar171._0_8_ = dVar62 * auVar64._0_8_;
      auVar171._8_8_ = dVar82 * auVar64._8_8_;
      auVar171._16_8_ = dVar84 * auVar64._16_8_;
      auVar171._24_8_ = auVar64._24_8_ * 0.0;
      auVar9 = vcvtpd2ps_avx(auVar171);
      auVar153 = vcvtpd2ps_avx(auVar98);
      auVar99._16_16_ = auVar153;
      auVar99._0_16_ = auVar9;
      auVar166 = vrcpps_avx(auVar99);
      auVar153._0_4_ = auVar166._0_4_ * (-(auVar166._0_4_ * auVar9._0_4_) + __real_40000000);
      auVar153._4_4_ = auVar166._4_4_ * (-(auVar166._4_4_ * auVar9._4_4_) + __real_40000000);
      auVar153._8_4_ = auVar166._8_4_ * (-(auVar166._8_4_ * auVar9._8_4_) + __real_40000000);
      auVar153._12_4_ = auVar166._12_4_ * (-(auVar166._12_4_ * auVar9._12_4_) + __real_40000000);
      auVar166 = vcvtps2pd_avx(auVar153);
      dVar87 = auVar64._0_8_ * auVar166._0_8_;
      dVar112 = auVar64._8_8_ * auVar166._8_8_;
      dVar118 = auVar64._16_8_ * auVar166._16_8_;
      dVar138 = auVar64._24_8_ * auVar166._24_8_;
      dVar87 = dVar87 * (-(dVar62 * dVar87) + __real_4000000000000000);
      dVar112 = dVar112 * (-(dVar82 * dVar112) + __real_4000000000000000);
      dVar118 = dVar118 * (-(dVar84 * dVar118) + __real_4000000000000000);
      dVar138 = dVar138 * (-(dVar138 * 0.0) + __real_4000000000000000);
      auVar70._0_8_ = dVar87 * (-(dVar87 * dVar62) + __real_4000000000000000);
      auVar70._8_8_ = dVar112 * (-(dVar112 * dVar82) + __real_4000000000000000);
      auVar70._16_8_ = dVar118 * (-(dVar118 * dVar84) + __real_4000000000000000);
      auVar70._24_8_ = dVar138 * (-(dVar138 * 0.0) + __real_4000000000000000);
      auVar124 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                             ,auVar124 ^ auVar69);
      auVar129 = vblendvps_avx(auVar129,auVar70,auVar124);
    }
    else {
      auVar33 = vcvtpd2ps_avx(auVar64);
      auVar123 = vcvtpd2ps_avx(auVar69);
      auVar166._16_16_ = auVar123;
      auVar166._0_16_ = auVar33;
      auVar129 = vrcpps_avx(auVar166);
      auVar122 = vpacksswb_avx(auVar122,auVar122);
      auVar123._0_4_ = auVar129._0_4_ * (-(auVar129._0_4_ * auVar33._0_4_) + __real_40000000);
      auVar123._4_4_ = auVar129._4_4_ * (-(auVar129._4_4_ * auVar33._4_4_) + __real_40000000);
      auVar123._8_4_ = auVar129._8_4_ * (-(auVar129._8_4_ * auVar33._8_4_) + __real_40000000);
      auVar123._12_4_ = auVar129._12_4_ * (-(auVar129._12_4_ * auVar33._12_4_) + __real_40000000);
      auVar129 = vcvtps2pd_avx(auVar123);
      dVar118 = (-(dVar62 * auVar129._0_8_) + __real_4000000000000000) * auVar129._0_8_;
      dVar138 = (-(dVar82 * auVar129._8_8_) + __real_4000000000000000) * auVar129._8_8_;
      dVar139 = (-(dVar84 * auVar129._16_8_) + __real_4000000000000000) * auVar129._16_8_;
      dVar140 = (-(auVar129._24_8_ * 0.0) + __real_4000000000000000) * auVar129._24_8_;
      auVar129._0_8_ = dVar118 * (-(dVar62 * dVar118) + __real_4000000000000000);
      auVar129._8_8_ = dVar138 * (-(dVar82 * dVar138) + __real_4000000000000000);
      auVar129._16_8_ = dVar139 * (-(dVar84 * dVar139) + __real_4000000000000000);
      auVar129._24_8_ = dVar140 * (-(dVar140 * 0.0) + __real_4000000000000000);
      auVar153 = vpsllw_avx(auVar153,0xf);
      auVar153 = vpacksswb_avx(auVar153,auVar153);
      if ((byte)(SUB161(auVar153 >> 7,0) & 1 | (SUB161(auVar153 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar153 >> 0x17,0) & 1) << 2 | (SUB161(auVar153 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar153 >> 0x27,0) & 1) << 4 | (SUB161(auVar153 >> 0x2f,0) & 1) << 5 |
                 (SUB161(auVar153 >> 0x37,0) & 1) << 6 | SUB161(auVar153 >> 0x3f,0) << 7) !=
          (byte)(SUB161(auVar122 >> 7,0) & 1 | (SUB161(auVar122 >> 0xf,0) & 1) << 1 |
                 (SUB161(auVar122 >> 0x17,0) & 1) << 2 | (SUB161(auVar122 >> 0x1f,0) & 1) << 3 |
                 (SUB161(auVar122 >> 0x27,0) & 1) << 4 | (SUB161(auVar122 >> 0x2f,0) & 1) << 5 |
                 (SUB161(auVar122 >> 0x37,0) & 1) << 6 | SUB161(auVar122 >> 0x3f,0) << 7)) {
        auVar124 = vpmovzxwd_avx2(auVar9);
        auVar124 = vpslld_avx2(auVar124,0x1f);
        auVar124 = vpsrad_avx2(auVar124,0x1f);
        goto LAB_140cb9fe5;
      }
    }
    auVar124 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                           auVar159);
    auVar129 = vblendvps_avx(auVar129,SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar124);
    uVar18 = param_6 + 7;
    if (-1 < (int)param_6) {
      uVar18 = param_6;
    }
    auVar124 = vpermpd_avx2(auVar129,0x55);
    auVar166 = vpermpd_avx2(auVar129,0xaa);
    local_258 = auVar124._0_8_;
    dStack_250 = auVar124._8_8_;
    dStack_248 = auVar124._16_8_;
    dStack_240 = auVar124._24_8_;
    local_238 = auVar166._0_8_;
    dStack_230 = auVar166._8_8_;
    dStack_228 = auVar166._16_8_;
    dStack_220 = auVar166._24_8_;
    dVar62 = auVar129._0_8_;
    if ((int)(uVar18 & 0xfffffff8) < 1) {
      uVar21 = 0;
      if ((int)param_6 < 1) {
        return;
      }
    }
    else {
      local_358._8_8_ = dVar1;
      local_358._0_8_ = dVar1;
      dStack_348 = dVar1;
      dStack_340 = dVar1;
      local_1f8._0_8_ = local_1f8._8_8_;
      dStack_1e8 = (double)local_1f8._8_8_;
      dStack_1e0 = (double)local_1f8._8_8_;
      local_1a8._8_8_ = dVar2;
      local_1a8._0_8_ = dVar2;
      dStack_198 = dVar2;
      dStack_190 = dVar2;
      auVar129 = vpermpd_avx2(auVar223,0x55);
      auVar124 = vpermpd_avx2(auVar223,0xaa);
      auVar166 = vpermpd_avx2(auVar223,0xff);
      lVar23 = 0x40;
      uVar21 = 0;
      do {
        auVar73 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
        auVar43 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
        auVar181 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
        auVar69 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar23);
        auVar159 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar23);
        auVar64 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar159);
        auVar39 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar69);
        auVar64 = vblendps_avx(auVar39,auVar64,0x88);
        auVar39 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar159);
        auVar154 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,*(undefined1 (*) [32])(param_1 + lVar23));
        auVar39 = vblendps_avx(auVar154,auVar39,0x13);
        auVar69 = vblendps_avx(auVar159,auVar69,0x24);
        auVar69 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar69);
        auVar159 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                ,*(undefined1 (*) [32])(param_1 + lVar23));
        auVar154 = vblendps_avx(auVar69,auVar159,0xe0);
        auVar69 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar23);
        auVar159 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar23);
        auVar70 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar159);
        auVar98 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar69);
        auVar70 = vblendps_avx(auVar98,auVar70,0x88);
        auVar98 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar159);
        auVar99 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_2 + lVar23));
        auVar98 = vblendps_avx(auVar99,auVar98,0x13);
        auVar171 = vperm2f128_avx(auVar70,auVar98,0x31);
        auVar69 = vblendps_avx(auVar159,auVar69,0x24);
        auVar69 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar69);
        auVar159 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                ,*(undefined1 (*) [32])(param_2 + lVar23));
        auVar69 = vblendps_avx(auVar69,auVar159,0xe0);
        auVar159 = vcvtps2pd_avx(auVar39._0_16_);
        auVar99 = vcvtps2pd_avx(auVar64._0_16_);
        auVar39 = vcvtps2pd_avx(auVar39._16_16_);
        auVar64 = vcvtps2pd_avx(auVar64._16_16_);
        auVar160 = vcvtps2pd_avx(auVar154._16_16_);
        auVar154 = vcvtps2pd_avx(auVar154._0_16_);
        dVar82 = *param_4;
        auVar100._0_8_ = param_5 * auVar99._0_8_ + dVar82;
        auVar100._8_8_ = param_5 * auVar99._8_8_ + dVar82;
        auVar100._16_8_ = param_5 * auVar99._16_8_ + dVar82;
        auVar100._24_8_ = param_5 * auVar99._24_8_ + dVar82;
        auVar40._0_8_ = param_5 * auVar159._0_8_ + dVar82;
        auVar40._8_8_ = param_5 * auVar159._8_8_ + dVar82;
        auVar40._16_8_ = param_5 * auVar159._16_8_ + dVar82;
        auVar40._24_8_ = param_5 * auVar159._24_8_ + dVar82;
        dVar82 = param_4[1];
        auVar146._0_8_ = param_5 * auVar64._0_8_ + dVar82;
        auVar146._8_8_ = param_5 * auVar64._8_8_ + dVar82;
        auVar146._16_8_ = param_5 * auVar64._16_8_ + dVar82;
        auVar146._24_8_ = param_5 * auVar64._24_8_ + dVar82;
        auVar130._0_8_ = param_5 * auVar39._0_8_ + dVar82;
        auVar130._8_8_ = param_5 * auVar39._8_8_ + dVar82;
        auVar130._16_8_ = param_5 * auVar39._16_8_ + dVar82;
        auVar130._24_8_ = param_5 * auVar39._24_8_ + dVar82;
        dVar82 = param_4[2];
        auVar182._0_8_ = param_5 * auVar154._0_8_ + dVar82;
        auVar182._8_8_ = param_5 * auVar154._8_8_ + dVar82;
        auVar182._16_8_ = param_5 * auVar154._16_8_ + dVar82;
        auVar182._24_8_ = param_5 * auVar154._24_8_ + dVar82;
        auVar161._0_8_ = param_5 * auVar160._0_8_ + dVar82;
        auVar161._8_8_ = param_5 * auVar160._8_8_ + dVar82;
        auVar161._16_8_ = param_5 * auVar160._16_8_ + dVar82;
        auVar161._24_8_ = param_5 * auVar160._24_8_ + dVar82;
        local_3f8._4_4_ = auVar70._4_4_ ^ uVar16;
        local_3f8._0_4_ = auVar70._0_4_ ^ uVar16;
        local_3f8._8_4_ = auVar70._8_4_ ^ uVar16;
        local_3f8._12_4_ = auVar70._12_4_ ^ uVar16;
        uStack_3e8 = auVar98._0_4_ ^ uVar16;
        uStack_3e4 = auVar98._4_4_ ^ uVar16;
        uStack_3e0 = auVar98._8_4_ ^ uVar16;
        uStack_3dc = auVar98._12_4_ ^ uVar16;
        auVar159 = vsubpd_avx(auVar40,_local_358);
        auVar64 = vsubpd_avx(auVar100,_local_358);
        auVar39 = vsubpd_avx(auVar130,_local_1f8);
        auVar154 = vsubpd_avx(auVar146,_local_1f8);
        auVar70 = vsubpd_avx(auVar161,_local_1a8);
        auVar98 = vsubpd_avx(auVar182,_local_1a8);
        local_128._0_8_ = auVar129._0_8_;
        local_128._8_8_ = auVar129._8_8_;
        dStack_118 = auVar129._16_8_;
        dStack_110 = auVar129._24_8_;
        dVar116 = auVar64._0_8_;
        dVar119 = auVar64._8_8_;
        dVar189 = auVar64._16_8_;
        dVar198 = auVar64._24_8_;
        dVar208 = auVar159._0_8_;
        dVar215 = auVar159._8_8_;
        dVar217 = auVar159._16_8_;
        dVar219 = auVar159._24_8_;
        local_148 = auVar124._0_8_;
        dStack_140 = auVar124._8_8_;
        dStack_138 = auVar124._16_8_;
        dStack_130 = auVar124._24_8_;
        dVar82 = auVar154._0_8_;
        dVar112 = auVar154._8_8_;
        dVar139 = auVar154._16_8_;
        dVar6 = auVar154._24_8_;
        dVar84 = auVar39._0_8_;
        dVar118 = auVar39._8_8_;
        dVar140 = auVar39._16_8_;
        dVar7 = auVar39._24_8_;
        dVar87 = auVar98._0_8_;
        dVar138 = auVar98._8_8_;
        dVar5 = auVar98._16_8_;
        dVar8 = auVar98._24_8_;
        dVar263 = auVar70._0_8_;
        dVar265 = auVar70._8_8_;
        dVar165 = auVar70._16_8_;
        dVar179 = auVar70._24_8_;
        dVar83 = auVar223._0_8_ * dVar84 - dVar208 * (double)local_128._0_8_;
        dVar88 = auVar223._0_8_ * dVar118 - dVar215 * (double)local_128._8_8_;
        dVar227 = auVar223._0_8_ * dVar140 - dVar217 * dStack_118;
        dVar115 = auVar223._0_8_ * dVar7 - dVar219 * dStack_110;
        dVar63 = auVar223._0_8_ * dVar82 - dVar116 * (double)local_128._0_8_;
        dVar86 = auVar223._0_8_ * dVar112 - dVar119 * (double)local_128._8_8_;
        dVar113 = auVar223._0_8_ * dVar139 - dVar189 * dStack_118;
        dVar229 = auVar223._0_8_ * dVar6 - dVar198 * dStack_110;
        dVar56 = (double)local_128._0_8_ * dVar263 - local_148 * dVar84;
        dVar59 = (double)local_128._8_8_ * dVar265 - dStack_140 * dVar118;
        dVar60 = dStack_118 * dVar165 - dStack_138 * dVar140;
        dVar61 = dStack_110 * dVar179 - dStack_130 * dVar7;
        dVar27 = (double)local_128._0_8_ * dVar87 - local_148 * dVar82;
        dVar30 = (double)local_128._8_8_ * dVar138 - dStack_140 * dVar112;
        dVar57 = dStack_118 * dVar5 - dStack_138 * dVar139;
        dVar25 = dStack_110 * dVar8 - dStack_130 * dVar6;
        dVar267 = local_148 * dVar208 - dVar263 * auVar223._0_8_;
        dVar270 = dStack_140 * dVar215 - dVar265 * auVar223._0_8_;
        dVar271 = dStack_138 * dVar217 - dVar165 * auVar223._0_8_;
        dVar272 = dStack_130 * dVar219 - dVar179 * auVar223._0_8_;
        dVar201 = local_148 * dVar116 - auVar223._0_8_ * dVar87;
        dVar202 = dStack_140 * dVar119 - auVar223._0_8_ * dVar138;
        dVar204 = dStack_138 * dVar189 - auVar223._0_8_ * dVar5;
        dVar205 = dStack_130 * dVar198 - auVar223._0_8_ * dVar8;
        dVar27 = dVar27 + dVar27;
        dVar30 = dVar30 + dVar30;
        dVar57 = dVar57 + dVar57;
        dVar25 = dVar25 + dVar25;
        dVar56 = dVar56 + dVar56;
        dVar59 = dVar59 + dVar59;
        dVar60 = dVar60 + dVar60;
        dVar61 = dVar61 + dVar61;
        dVar201 = dVar201 + dVar201;
        dVar202 = dVar202 + dVar202;
        dVar204 = dVar204 + dVar204;
        dVar205 = dVar205 + dVar205;
        dVar267 = dVar267 + dVar267;
        dVar270 = dVar270 + dVar270;
        dVar271 = dVar271 + dVar271;
        dVar272 = dVar272 + dVar272;
        dVar63 = dVar63 + dVar63;
        dVar86 = dVar86 + dVar86;
        dVar113 = dVar113 + dVar113;
        dVar229 = dVar229 + dVar229;
        dVar83 = dVar83 + dVar83;
        dVar88 = dVar88 + dVar88;
        dVar227 = dVar227 + dVar227;
        dVar115 = dVar115 + dVar115;
        local_168 = auVar166._0_8_;
        dStack_160 = auVar166._8_8_;
        dStack_158 = auVar166._16_8_;
        dStack_150 = auVar166._24_8_;
        auVar159 = vcvtps2pd_avx(local_3f8._16_16_);
        auVar64 = vcvtps2pd_avx(local_3f8);
        auVar9._4_4_ = auVar171._4_4_ ^ uVar16;
        auVar9._0_4_ = auVar171._0_4_ ^ uVar16;
        auVar9._8_4_ = auVar171._8_4_ ^ uVar16;
        auVar9._12_4_ = auVar171._12_4_ ^ uVar16;
        auVar12._16_4_ = auVar171._16_4_ ^ uVar16;
        auVar12._0_16_ = auVar9;
        auVar12._20_4_ = auVar171._20_4_ ^ uVar16;
        auVar12._24_4_ = auVar171._24_4_ ^ uVar16;
        auVar12._28_4_ = auVar171._28_4_ ^ uVar16;
        auVar39 = vcvtps2pd_avx(auVar12._16_16_);
        local_398 = auVar69._0_4_;
        uStack_394 = auVar69._4_4_;
        uStack_390 = auVar69._8_4_;
        uStack_38c = auVar69._12_4_;
        uStack_388 = auVar69._16_4_;
        uStack_384 = auVar69._20_4_;
        uStack_380 = auVar69._24_4_;
        uStack_37c = auVar69._28_4_;
        auVar122._0_4_ = uVar16 ^ local_398;
        auVar122._4_4_ = uVar16 ^ uStack_394;
        auVar122._8_4_ = uVar16 ^ uStack_390;
        auVar122._12_4_ = uVar16 ^ uStack_38c;
        auVar246._16_4_ = uVar16 ^ uStack_388;
        auVar246._0_16_ = auVar122;
        auVar246._20_4_ = uVar16 ^ uStack_384;
        auVar246._24_4_ = uVar16 ^ uStack_380;
        auVar246._28_4_ = uVar16 ^ uStack_37c;
        auVar69 = vcvtps2pd_avx(auVar9);
        auVar154 = vcvtps2pd_avx(auVar246._16_16_);
        auVar70 = vcvtps2pd_avx(auVar122);
        local_2d8 = auVar159._0_8_;
        dStack_2d0 = auVar159._8_8_;
        dStack_2c8 = auVar159._16_8_;
        dStack_2c0 = auVar159._24_8_;
        local_1d8 = auVar39._0_8_;
        dStack_1d0 = auVar39._8_8_;
        dStack_1c8 = auVar39._16_8_;
        dStack_1c0 = auVar39._24_8_;
        dVar259 = auVar154._0_8_;
        dVar222 = auVar154._8_8_;
        dVar261 = auVar154._16_8_;
        dVar228 = auVar154._24_8_;
        dVar85 = auVar223._0_8_ * local_1d8 - local_2d8 * (double)local_128._0_8_;
        dVar221 = auVar223._0_8_ * dStack_1d0 - dStack_2d0 * (double)local_128._8_8_;
        dVar114 = auVar223._0_8_ * dStack_1c8 - dStack_2c8 * dStack_118;
        dVar231 = auVar223._0_8_ * dStack_1c0 - dStack_2c0 * dStack_110;
        dVar28 = (double)local_128._0_8_ * dVar259 - local_148 * local_1d8;
        dVar52 = (double)local_128._8_8_ * dVar222 - dStack_140 * dStack_1d0;
        dVar58 = dStack_118 * dVar261 - dStack_138 * dStack_1c8;
        dVar26 = dStack_110 * dVar228 - dStack_130 * dStack_1c0;
        dVar29 = local_148 * local_2d8 - dVar259 * auVar223._0_8_;
        dVar53 = dStack_140 * dStack_2d0 - dVar222 * auVar223._0_8_;
        dVar24 = dStack_138 * dStack_2c8 - dVar261 * auVar223._0_8_;
        dVar49 = dStack_130 * dStack_2c0 - dVar228 * auVar223._0_8_;
        dVar28 = dVar28 + dVar28;
        dVar52 = dVar52 + dVar52;
        dVar58 = dVar58 + dVar58;
        dVar26 = dVar26 + dVar26;
        dVar29 = dVar29 + dVar29;
        dVar53 = dVar53 + dVar53;
        dVar24 = dVar24 + dVar24;
        dVar49 = dVar49 + dVar49;
        dVar85 = dVar85 + dVar85;
        dVar221 = dVar221 + dVar221;
        dVar114 = dVar114 + dVar114;
        dVar231 = dVar231 + dVar231;
        local_2f8._0_8_ = auVar64._0_8_;
        stack0xfffffffffffffd10 = auVar64._8_8_;
        uStack_2e8 = auVar64._16_8_;
        uStack_2e0 = auVar64._24_8_;
        local_318 = auVar69._0_8_;
        dStack_310 = auVar69._8_8_;
        dStack_308 = auVar69._16_8_;
        dStack_300 = auVar69._24_8_;
        dVar117 = auVar223._0_8_ * local_318 - (double)local_2f8._0_8_ * (double)local_128._0_8_;
        dVar120 = auVar223._0_8_ * dStack_310 - stack0xfffffffffffffd10 * (double)local_128._8_8_;
        dVar190 = auVar223._0_8_ * dStack_308 - uStack_2e8 * dStack_118;
        dVar199 = auVar223._0_8_ * dStack_300 - uStack_2e0 * dStack_110;
        dVar50 = auVar70._0_8_;
        dVar230 = (double)local_128._0_8_ * dVar50 - local_148 * local_318;
        dVar51 = auVar70._8_8_;
        dVar232 = (double)local_128._8_8_ * dVar51 - dStack_140 * dStack_310;
        dVar54 = auVar70._16_8_;
        dVar233 = dStack_118 * dVar54 - dStack_138 * dStack_308;
        dVar55 = auVar70._24_8_;
        dVar237 = dStack_110 * dVar55 - dStack_130 * dStack_300;
        dVar238 = local_148 * (double)local_2f8._0_8_ - auVar223._0_8_ * dVar50;
        dVar241 = dStack_140 * stack0xfffffffffffffd10 - auVar223._0_8_ * dVar51;
        dVar200 = dStack_138 * uStack_2e8 - auVar223._0_8_ * dVar54;
        dVar203 = dStack_130 * uStack_2e0 - auVar223._0_8_ * dVar55;
        dVar230 = dVar230 + dVar230;
        dVar232 = dVar232 + dVar232;
        dVar233 = dVar233 + dVar233;
        dVar237 = dVar237 + dVar237;
        dVar238 = dVar238 + dVar238;
        dVar241 = dVar241 + dVar241;
        dVar200 = dVar200 + dVar200;
        dVar203 = dVar203 + dVar203;
        dVar117 = dVar117 + dVar117;
        dVar120 = dVar120 + dVar120;
        dVar190 = dVar190 + dVar190;
        dVar199 = dVar199 + dVar199;
        auVar159._0_8_ =
             dVar62 * (local_168 * dVar56 + dVar208 +
                      ((double)local_128._0_8_ * dVar83 - local_148 * dVar267));
        auVar159._8_8_ =
             dVar62 * (dStack_160 * dVar59 + dVar215 +
                      ((double)local_128._8_8_ * dVar88 - dStack_140 * dVar270));
        auVar159._16_8_ =
             dVar62 * (dStack_158 * dVar60 + dVar217 + (dStack_118 * dVar227 - dStack_138 * dVar271)
                      );
        auVar159._24_8_ =
             dVar62 * (dStack_150 * dVar61 + dVar219 + (dStack_110 * dVar115 - dStack_130 * dVar272)
                      );
        auVar172._0_8_ =
             dVar62 * (local_168 * dVar27 + dVar116 +
                      ((double)local_128._0_8_ * dVar63 - dVar201 * local_148));
        auVar172._8_8_ =
             dVar62 * (dStack_160 * dVar30 + dVar119 +
                      ((double)local_128._8_8_ * dVar86 - dVar202 * dStack_140));
        auVar172._16_8_ =
             dVar62 * (dStack_158 * dVar57 + dVar189 + (dStack_118 * dVar113 - dVar204 * dStack_138)
                      );
        auVar172._24_8_ =
             dVar62 * (dStack_150 * dVar25 + dVar198 + (dStack_110 * dVar229 - dVar205 * dStack_130)
                      );
        auVar101._0_8_ =
             (local_168 * dVar267 + dVar84 + (local_148 * dVar56 - auVar223._0_8_ * dVar83)) *
             local_258;
        auVar101._8_8_ =
             (dStack_160 * dVar270 + dVar118 + (dStack_140 * dVar59 - auVar223._0_8_ * dVar88)) *
             dStack_250;
        auVar101._16_8_ =
             (dStack_158 * dVar271 + dVar140 + (dStack_138 * dVar60 - auVar223._0_8_ * dVar227)) *
             dStack_248;
        auVar101._24_8_ =
             (dStack_150 * dVar272 + dVar7 + (dStack_130 * dVar61 - auVar223._0_8_ * dVar115)) *
             dStack_240;
        auVar147._0_8_ =
             (local_168 * dVar201 + dVar82 + (local_148 * dVar27 - dVar63 * auVar223._0_8_)) *
             local_258;
        auVar147._8_8_ =
             (dStack_160 * dVar202 + dVar112 + (dStack_140 * dVar30 - dVar86 * auVar223._0_8_)) *
             dStack_250;
        auVar147._16_8_ =
             (dStack_158 * dVar204 + dVar139 + (dStack_138 * dVar57 - dVar113 * auVar223._0_8_)) *
             dStack_248;
        auVar147._24_8_ =
             (dStack_150 * dVar205 + dVar6 + (dStack_130 * dVar25 - dVar229 * auVar223._0_8_)) *
             dStack_240;
        auVar183._0_8_ =
             local_238 *
             (local_168 * dVar83 + dVar263 +
             (auVar223._0_8_ * dVar267 - (double)local_128._0_8_ * dVar56));
        auVar183._8_8_ =
             dStack_230 *
             (dStack_160 * dVar88 + dVar265 +
             (auVar223._0_8_ * dVar270 - (double)local_128._8_8_ * dVar59));
        auVar183._16_8_ =
             dStack_228 *
             (dStack_158 * dVar227 + dVar165 + (auVar223._0_8_ * dVar271 - dStack_118 * dVar60));
        auVar183._24_8_ =
             dStack_220 *
             (dStack_150 * dVar115 + dVar179 + (auVar223._0_8_ * dVar272 - dStack_110 * dVar61));
        auVar193._0_8_ =
             local_238 *
             ((auVar223._0_8_ * dVar201 - (double)local_128._0_8_ * dVar27) +
             local_168 * dVar63 + dVar87);
        auVar193._8_8_ =
             dStack_230 *
             ((auVar223._0_8_ * dVar202 - (double)local_128._8_8_ * dVar30) +
             dStack_160 * dVar86 + dVar138);
        auVar193._16_8_ =
             dStack_228 *
             ((auVar223._0_8_ * dVar204 - dStack_118 * dVar57) + dStack_158 * dVar113 + dVar5);
        auVar193._24_8_ =
             dStack_220 *
             ((auVar223._0_8_ * dVar205 - dStack_110 * dVar25) + dStack_150 * dVar229 + dVar8);
        auVar9 = vcvtpd2ps_avx(auVar172);
        auVar153 = vcvtpd2ps_avx(auVar159);
        auVar122 = vcvtpd2ps_avx(auVar147);
        auVar41._16_16_ = auVar153;
        auVar41._0_16_ = auVar9;
        auVar153 = vcvtpd2ps_avx(auVar101);
        auVar102._16_16_ = auVar153;
        auVar102._0_16_ = auVar122;
        auVar153 = vcvtpd2ps_avx(auVar193);
        auVar33 = vcvtpd2ps_avx(auVar183);
        auVar184._16_16_ = auVar33;
        auVar184._0_16_ = auVar153;
        auVar148._16_16_ = auVar122;
        auVar148._0_16_ = auVar9;
        auVar64 = vshufpd_avx(auVar41,auVar148,2);
        auVar159 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                                ,auVar184);
        auVar69 = vpermpd_avx2(auVar102,0xe9);
        auVar69 = vblendps_avx(auVar159,auVar69,7);
        auVar159 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                                ,auVar69);
        auVar39 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                               ,auVar64);
        auVar159 = vblendps_avx(auVar39,auVar159,0xa4);
        *(undefined1 (*) [32])(param_1 + -0x40 + lVar23) = auVar159;
        auVar154 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
        auVar159 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                                ,auVar69);
        auVar69 = vshufpd_avx(auVar64,auVar64,1);
        auVar69 = vblendps_avx(auVar159,auVar69,0x92);
        *(undefined1 (*) [32])(param_1 + -0x20 + lVar23) = auVar69;
        auVar98 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
        auVar70 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
        auVar159 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                                ,auVar102);
        auVar69 = vpermpd_avx2(auVar41,0xff);
        auVar69 = vblendpd_avx(auVar159,auVar69,1);
        auVar69 = vpblendd_avx2(auVar69,auVar184,0xe0);
        auVar103._0_8_ =
             dVar62 * (local_168 * dVar28 + local_2d8 +
                      ((double)local_128._0_8_ * dVar85 - local_148 * dVar29));
        auVar103._8_8_ =
             dVar62 * (dStack_160 * dVar52 + dStack_2d0 +
                      ((double)local_128._8_8_ * dVar221 - dStack_140 * dVar53));
        auVar103._16_8_ =
             dVar62 * (dStack_158 * dVar58 + dStack_2c8 +
                      (dStack_118 * dVar114 - dStack_138 * dVar24));
        auVar103._24_8_ =
             dVar62 * (dStack_150 * dVar26 + dStack_2c0 +
                      (dStack_110 * dVar231 - dStack_130 * dVar49));
        auVar149._0_8_ =
             dVar62 * (local_168 * dVar230 + (double)local_2f8._0_8_ +
                      ((double)local_128._0_8_ * dVar117 - local_148 * dVar238));
        auVar149._8_8_ =
             dVar62 * (dStack_160 * dVar232 + stack0xfffffffffffffd10 +
                      ((double)local_128._8_8_ * dVar120 - dStack_140 * dVar241));
        auVar149._16_8_ =
             dVar62 * (dStack_158 * dVar233 + uStack_2e8 +
                      (dStack_118 * dVar190 - dStack_138 * dVar200));
        auVar149._24_8_ =
             dVar62 * (dStack_150 * dVar237 + uStack_2e0 +
                      (dStack_110 * dVar199 - dStack_130 * dVar203));
        auVar162._0_8_ =
             local_258 *
             (local_168 * dVar29 + local_1d8 + (local_148 * dVar28 - auVar223._0_8_ * dVar85));
        auVar162._8_8_ =
             dStack_250 *
             (dStack_160 * dVar53 + dStack_1d0 + (dStack_140 * dVar52 - auVar223._0_8_ * dVar221));
        auVar162._16_8_ =
             dStack_248 *
             (dStack_158 * dVar24 + dStack_1c8 + (dStack_138 * dVar58 - auVar223._0_8_ * dVar114));
        auVar162._24_8_ =
             dStack_240 *
             (dStack_150 * dVar49 + dStack_1c0 + (dStack_130 * dVar26 - auVar223._0_8_ * dVar231));
        auVar131._0_8_ =
             local_258 *
             (local_168 * dVar238 + local_318 + (local_148 * dVar230 - dVar117 * auVar223._0_8_));
        auVar131._8_8_ =
             dStack_250 *
             (dStack_160 * dVar241 + dStack_310 + (dStack_140 * dVar232 - dVar120 * auVar223._0_8_))
        ;
        auVar131._16_8_ =
             dStack_248 *
             (dStack_158 * dVar200 + dStack_308 + (dStack_138 * dVar233 - dVar190 * auVar223._0_8_))
        ;
        auVar131._24_8_ =
             dStack_240 *
             (dStack_150 * dVar203 + dStack_300 + (dStack_130 * dVar237 - dVar199 * auVar223._0_8_))
        ;
        auVar173._0_8_ =
             local_238 *
             (local_168 * dVar85 + dVar259 +
             (auVar223._0_8_ * dVar29 - dVar28 * (double)local_128._0_8_));
        auVar173._8_8_ =
             dStack_230 *
             (dStack_160 * dVar221 + dVar222 +
             (auVar223._0_8_ * dVar53 - dVar52 * (double)local_128._8_8_));
        auVar173._16_8_ =
             dStack_228 *
             (dStack_158 * dVar114 + dVar261 + (auVar223._0_8_ * dVar24 - dVar58 * dStack_118));
        auVar173._24_8_ =
             dStack_220 *
             (dStack_150 * dVar231 + dVar228 + (auVar223._0_8_ * dVar49 - dVar26 * dStack_110));
        auVar9 = vcvtpd2ps_avx(auVar149);
        auVar71._0_8_ =
             local_238 *
             ((auVar223._0_8_ * dVar238 - dVar230 * (double)local_128._0_8_) +
             local_168 * dVar117 + dVar50);
        auVar71._8_8_ =
             dStack_230 *
             ((auVar223._0_8_ * dVar241 - dVar232 * (double)local_128._8_8_) +
             dStack_160 * dVar120 + dVar51);
        auVar71._16_8_ =
             dStack_228 *
             ((auVar223._0_8_ * dVar200 - dVar233 * dStack_118) + dStack_158 * dVar190 + dVar54);
        auVar71._24_8_ =
             dStack_220 *
             ((auVar223._0_8_ * dVar203 - dVar237 * dStack_110) + dStack_150 * dVar199 + dVar55);
        auVar153 = vcvtpd2ps_avx(auVar103);
        auVar104._16_16_ = auVar153;
        auVar104._0_16_ = auVar9;
        auVar153 = vcvtpd2ps_avx(auVar131);
        auVar122 = vcvtpd2ps_avx(auVar162);
        auVar33 = vcvtpd2ps_avx(auVar71);
        auVar123 = vcvtpd2ps_avx(auVar173);
        auVar163._16_16_ = auVar122;
        auVar163._0_16_ = auVar153;
        auVar69 = vpermd_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar69);
        *(undefined1 (*) [32])(param_1 + lVar23) = auVar69;
        auVar42._16_16_ = auVar123;
        auVar42._0_16_ = auVar33;
        auVar72._16_16_ = auVar153;
        auVar72._0_16_ = auVar9;
        auVar64 = vshufpd_avx(auVar104,auVar72,2);
        auVar159 = vpermps_avx2(auVar181,auVar42);
        auVar69 = vpermpd_avx2(auVar163,0xe9);
        auVar69 = vblendps_avx(auVar159,auVar69,7);
        auVar159 = vpermps_avx2(auVar73,auVar64);
        auVar39 = vpermps_avx2(auVar43,auVar69);
        auVar159 = vblendps_avx(auVar159,auVar39,0xa4);
        *(undefined1 (*) [32])(param_2 + -0x40 + lVar23) = auVar159;
        auVar159 = vpermps_avx2(auVar154,auVar69);
        auVar69 = vshufpd_avx(auVar64,auVar64,1);
        auVar69 = vblendps_avx(auVar159,auVar69,0x92);
        *(undefined1 (*) [32])(param_2 + -0x20 + lVar23) = auVar69;
        auVar159 = vpermps_avx2(auVar70,auVar163);
        auVar69 = vpermpd_avx2(auVar104,0xff);
        auVar69 = vblendpd_avx(auVar159,auVar69,1);
        auVar69 = vpblendd_avx2(auVar69,auVar42,0xe0);
        auVar69 = vpermd_avx2(auVar98,auVar69);
        *(undefined1 (*) [32])(param_2 + lVar23) = auVar69;
        lVar23 = lVar23 + 0x60;
        uVar21 = uVar21 + 8;
      } while ((int)uVar21 < (int)(uVar18 & 0xfffffff8));
      if ((int)param_6 <= (int)uVar21) {
        return;
      }
    }
    auVar43._4_4_ = uVar21;
    auVar43._0_4_ = uVar21;
    auVar43._8_4_ = uVar21;
    auVar43._12_4_ = uVar21;
    auVar43._16_4_ = uVar21;
    auVar43._20_4_ = uVar21;
    auVar43._24_4_ = uVar21;
    auVar43._28_4_ = uVar21;
    auVar129 = vpor_avx2(auVar43,
                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar73._4_4_ = param_6;
    auVar73._0_4_ = param_6;
    auVar73._8_4_ = param_6;
    auVar73._12_4_ = param_6;
    auVar73._16_4_ = param_6;
    auVar73._20_4_ = param_6;
    auVar73._24_4_ = param_6;
    auVar73._28_4_ = param_6;
    auVar129 = vpcmpgtd_avx2(auVar73,auVar129);
    uVar14 = (ulonglong)uVar21;
    lVar23 = uVar14 * 3;
    pauVar19 = (undefined1 (*) [32])(param_1 + uVar14 * 0xc);
    uVar16 = vmovmskps_avx(auVar129);
    if (uVar16 == 0xff) {
      auVar129 = pauVar19[1];
      auVar124 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar129);
      auVar166 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,*pauVar19);
      auVar124 = vblendps_avx(auVar166,auVar124,0x88);
      auVar166 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar129);
      auVar69 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar19[2]);
      auVar166 = vblendps_avx(auVar69,auVar166,0x13);
      auVar74._16_16_ = auVar166._0_16_;
      auVar74._0_16_ = auVar124._0_16_;
      auVar39 = vperm2f128_avx(auVar124,auVar166,0x31);
      auVar129 = vblendps_avx(auVar129,*pauVar19,0x24);
      auVar129 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar129);
      auVar124 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,pauVar19[2]);
      auVar69 = vblendps_avx(auVar129,auVar124,0xe0);
      auVar129 = *(undefined1 (*) [32])(param_2 + uVar14 * 0xc);
      auVar124 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar14 * 0xc);
      auVar166 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar14 * 0xc);
      auVar159 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar124);
      auVar64 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar129);
      auVar159 = vblendps_avx(auVar64,auVar159,0x88);
      auVar64 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar124);
      auVar154 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,auVar166);
      auVar64 = vblendps_avx(auVar154,auVar64,0x13);
      auVar150._16_16_ = auVar64._0_16_;
      auVar150._0_16_ = auVar159._0_16_;
      auVar159 = vperm2f128_avx(auVar159,auVar64,0x31);
      auVar129 = vblendps_avx(auVar124,auVar129,0x24);
      auVar129 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar129);
      auVar124 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,auVar166);
      auVar129 = vblendps_avx(auVar129,auVar124,0xe0);
    }
    else {
      auVar74 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar129);
      auVar39 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar129);
      auVar69 = vgatherdps(ZEXT832(0),auVar129);
      auVar150 = vgatherdps(ZEXT832(0),auVar129);
      auVar159 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar129);
      auVar129 = vgatherdps(ZEXT832(0) << 0x40,auVar129);
    }
    pauVar22 = (undefined1 (*) [32])(param_2 + uVar14 * 0xc);
    auVar124 = vcvtps2pd_avx(auVar74._16_16_);
    auVar166 = vcvtps2pd_avx(auVar74._0_16_);
    auVar64 = vcvtps2pd_avx(auVar39._16_16_);
    auVar39 = vcvtps2pd_avx(auVar39._0_16_);
    dVar82 = *param_4;
    auVar78._0_8_ = param_5 * auVar166._0_8_ + dVar82;
    auVar78._8_8_ = param_5 * auVar166._8_8_ + dVar82;
    auVar78._16_8_ = param_5 * auVar166._16_8_ + dVar82;
    auVar78._24_8_ = param_5 * auVar166._24_8_ + dVar82;
    auVar176._0_8_ = param_5 * auVar124._0_8_ + dVar82;
    auVar176._8_8_ = param_5 * auVar124._8_8_ + dVar82;
    auVar176._16_8_ = param_5 * auVar124._16_8_ + dVar82;
    auVar176._24_8_ = param_5 * auVar124._24_8_ + dVar82;
    auVar124 = vcvtps2pd_avx(auVar69._16_16_);
    auVar166 = vcvtps2pd_avx(auVar69._0_16_);
    dVar82 = param_4[1];
    auVar110._0_8_ = param_5 * auVar39._0_8_ + dVar82;
    auVar110._8_8_ = param_5 * auVar39._8_8_ + dVar82;
    auVar110._16_8_ = param_5 * auVar39._16_8_ + dVar82;
    auVar110._24_8_ = param_5 * auVar39._24_8_ + dVar82;
    auVar187._0_8_ = param_5 * auVar64._0_8_ + dVar82;
    auVar187._8_8_ = param_5 * auVar64._8_8_ + dVar82;
    auVar187._16_8_ = param_5 * auVar64._16_8_ + dVar82;
    auVar187._24_8_ = param_5 * auVar64._24_8_ + dVar82;
    dVar82 = param_4[2];
    auVar196._0_8_ = param_5 * auVar166._0_8_ + dVar82;
    auVar196._8_8_ = param_5 * auVar166._8_8_ + dVar82;
    auVar196._16_8_ = param_5 * auVar166._16_8_ + dVar82;
    auVar196._24_8_ = param_5 * auVar166._24_8_ + dVar82;
    auVar213._0_8_ = param_5 * auVar124._0_8_ + dVar82;
    auVar213._8_8_ = param_5 * auVar124._8_8_ + dVar82;
    auVar213._16_8_ = param_5 * auVar124._16_8_ + dVar82;
    auVar213._24_8_ = param_5 * auVar124._24_8_ + dVar82;
    auVar33._0_4_ = __real_80000000 ^ auVar150._0_4_;
    auVar33._4_4_ = __real_80000000 ^ auVar150._4_4_;
    auVar33._8_4_ = __real_80000000 ^ auVar150._8_4_;
    auVar33._12_4_ = __real_80000000 ^ auVar150._12_4_;
    auVar47._16_4_ = __real_80000000 ^ auVar150._16_4_;
    auVar47._0_16_ = auVar33;
    auVar47._20_4_ = __real_80000000 ^ auVar150._20_4_;
    auVar47._24_4_ = __real_80000000 ^ auVar150._24_4_;
    auVar47._28_4_ = __real_80000000 ^ auVar150._28_4_;
    auVar268._0_4_ = __real_80000000 ^ auVar159._0_4_;
    auVar268._4_4_ = __real_80000000 ^ auVar159._4_4_;
    auVar268._8_4_ = __real_80000000 ^ auVar159._8_4_;
    auVar268._12_4_ = __real_80000000 ^ auVar159._12_4_;
    auVar269._16_4_ = __real_80000000 ^ auVar159._16_4_;
    auVar269._0_16_ = auVar268;
    auVar269._20_4_ = __real_80000000 ^ auVar159._20_4_;
    auVar269._24_4_ = __real_80000000 ^ auVar159._24_4_;
    auVar269._28_4_ = __real_80000000 ^ auVar159._28_4_;
    local_3f8._4_4_ = __real_80000000 ^ auVar129._4_4_;
    local_3f8._0_4_ = __real_80000000 ^ auVar129._0_4_;
    local_3f8._8_4_ = __real_80000000 ^ auVar129._8_4_;
    local_3f8._12_4_ = __real_80000000 ^ auVar129._12_4_;
    uStack_3e8 = __real_80000000 ^ auVar129._16_4_;
    uStack_3e4 = __real_80000000 ^ auVar129._20_4_;
    uStack_3e0 = __real_80000000 ^ auVar129._24_4_;
    uStack_3dc = __real_80000000 ^ auVar129._28_4_;
    auVar135._8_8_ = dVar1;
    auVar135._0_8_ = dVar1;
    auVar135._16_8_ = dVar1;
    auVar135._24_8_ = dVar1;
    auVar129 = vsubpd_avx(auVar176,auVar135);
    auVar69 = vsubpd_avx(auVar78,auVar135);
    auVar79._8_8_ = local_1f8._8_8_;
    auVar79._0_8_ = local_1f8._8_8_;
    auVar79._16_8_ = local_1f8._8_8_;
    auVar79._24_8_ = local_1f8._8_8_;
    auVar124 = vsubpd_avx(auVar187,auVar79);
    auVar159 = vsubpd_avx(auVar110,auVar79);
    auVar80._8_8_ = dVar2;
    auVar80._0_8_ = dVar2;
    auVar80._16_8_ = dVar2;
    auVar80._24_8_ = dVar2;
    auVar166 = vsubpd_avx(auVar213,auVar80);
    auVar64 = vsubpd_avx(auVar196,auVar80);
    auVar39 = vpermpd_avx2(auVar223,0x55);
    dVar1 = auVar129._0_8_;
    dVar270 = auVar39._0_8_;
    dVar87 = auVar129._8_8_;
    dVar241 = auVar39._8_8_;
    dVar139 = auVar129._16_8_;
    dVar271 = auVar39._16_8_;
    dVar7 = auVar129._24_8_;
    dVar200 = auVar39._24_8_;
    dVar119 = auVar124._0_8_;
    dVar85 = auVar223._0_8_ * dVar119 - dVar270 * dVar1;
    dVar199 = auVar124._8_8_;
    dVar221 = auVar223._0_8_ * dVar199 - dVar241 * dVar87;
    dVar208 = auVar124._16_8_;
    dVar114 = auVar223._0_8_ * dVar208 - dVar271 * dVar139;
    dVar222 = auVar124._24_8_;
    dVar231 = auVar223._0_8_ * dVar222 - dVar200 * dVar7;
    auVar129 = vpermpd_avx2(auVar223,0xaa);
    dVar272 = auVar129._0_8_;
    dVar203 = auVar129._8_8_;
    dVar206 = auVar129._16_8_;
    dVar207 = auVar129._24_8_;
    dVar209 = auVar166._0_8_;
    dVar26 = dVar270 * dVar209 - dVar272 * dVar119;
    dVar218 = auVar166._8_8_;
    dVar51 = dVar241 * dVar218 - dVar203 * dVar199;
    dVar239 = auVar166._16_8_;
    dVar56 = dVar271 * dVar239 - dVar206 * dVar208;
    dVar242 = auVar166._24_8_;
    dVar61 = dVar200 * dVar242 - dVar207 * dVar222;
    dVar120 = dVar272 * dVar1 - auVar223._0_8_ * dVar209;
    dVar201 = dVar203 * dVar87 - auVar223._0_8_ * dVar218;
    dVar215 = dVar206 * dVar139 - auVar223._0_8_ * dVar239;
    dVar261 = dVar207 * dVar7 - auVar223._0_8_ * dVar242;
    dVar26 = dVar26 + dVar26;
    dVar51 = dVar51 + dVar51;
    dVar56 = dVar56 + dVar56;
    dVar61 = dVar61 + dVar61;
    dVar120 = dVar120 + dVar120;
    dVar201 = dVar201 + dVar201;
    dVar215 = dVar215 + dVar215;
    dVar261 = dVar261 + dVar261;
    dVar85 = dVar85 + dVar85;
    dVar221 = dVar221 + dVar221;
    dVar114 = dVar114 + dVar114;
    dVar231 = dVar231 + dVar231;
    auVar129 = vpermpd_avx2(auVar223,0xff);
    dVar216 = auVar129._0_8_;
    dVar220 = auVar129._8_8_;
    dVar240 = auVar129._16_8_;
    dVar243 = auVar129._24_8_;
    auVar129 = vcvtps2pd_avx(auVar47._16_16_);
    auVar124 = vcvtps2pd_avx(auVar33);
    auVar166 = vcvtps2pd_avx(auVar269._16_16_);
    dVar2 = auVar69._0_8_;
    dVar112 = auVar69._8_8_;
    dVar140 = auVar69._16_8_;
    dVar8 = auVar69._24_8_;
    dVar179 = auVar159._0_8_;
    dVar29 = auVar223._0_8_ * dVar179 - dVar270 * dVar2;
    dVar237 = auVar159._8_8_;
    dVar52 = auVar223._0_8_ * dVar237 - dVar241 * dVar112;
    dVar267 = auVar159._16_8_;
    dVar57 = auVar223._0_8_ * dVar267 - dVar271 * dVar140;
    dVar238 = auVar159._24_8_;
    dVar24 = auVar223._0_8_ * dVar238 - dVar200 * dVar8;
    dVar244 = auVar64._0_8_;
    dVar49 = dVar270 * dVar244 - dVar272 * dVar179;
    dVar249 = auVar64._8_8_;
    dVar54 = dVar241 * dVar249 - dVar203 * dVar237;
    dVar251 = auVar64._16_8_;
    dVar59 = dVar271 * dVar251 - dVar206 * dVar267;
    dVar253 = auVar64._24_8_;
    dVar63 = dVar200 * dVar253 - dVar207 * dVar238;
    dVar86 = dVar272 * dVar2 - auVar223._0_8_ * dVar244;
    dVar113 = dVar203 * dVar112 - auVar223._0_8_ * dVar249;
    dVar229 = dVar206 * dVar140 - auVar223._0_8_ * dVar251;
    dVar116 = dVar207 * dVar8 - auVar223._0_8_ * dVar253;
    dVar49 = dVar49 + dVar49;
    dVar54 = dVar54 + dVar54;
    dVar59 = dVar59 + dVar59;
    dVar63 = dVar63 + dVar63;
    dVar86 = dVar86 + dVar86;
    dVar113 = dVar113 + dVar113;
    dVar229 = dVar229 + dVar229;
    dVar116 = dVar116 + dVar116;
    dVar29 = dVar29 + dVar29;
    dVar52 = dVar52 + dVar52;
    dVar57 = dVar57 + dVar57;
    dVar24 = dVar24 + dVar24;
    auVar69 = vcvtps2pd_avx(auVar268);
    auVar159 = vcvtps2pd_avx(local_3f8._16_16_);
    auVar64 = vcvtps2pd_avx(local_3f8);
    dVar82 = auVar129._0_8_;
    dVar118 = auVar129._8_8_;
    dVar5 = auVar129._16_8_;
    dVar27 = auVar129._24_8_;
    dVar260 = auVar166._0_8_;
    dVar198 = auVar223._0_8_ * dVar260 - dVar270 * dVar82;
    dVar262 = auVar166._8_8_;
    dVar205 = auVar223._0_8_ * dVar262 - dVar241 * dVar118;
    dVar264 = auVar166._16_8_;
    dVar259 = auVar223._0_8_ * dVar264 - dVar271 * dVar5;
    dVar266 = auVar166._24_8_;
    dVar230 = auVar223._0_8_ * dVar266 - dVar200 * dVar27;
    dVar84 = auVar124._0_8_;
    dVar138 = auVar124._8_8_;
    dVar6 = auVar124._16_8_;
    dVar28 = auVar124._24_8_;
    dVar189 = auVar69._0_8_;
    dVar88 = auVar223._0_8_ * dVar189 - dVar270 * dVar84;
    dVar202 = auVar69._8_8_;
    dVar227 = auVar223._0_8_ * dVar202 - dVar241 * dVar138;
    dVar217 = auVar69._16_8_;
    dVar115 = auVar223._0_8_ * dVar217 - dVar271 * dVar6;
    dVar228 = auVar69._24_8_;
    dVar117 = auVar223._0_8_ * dVar228 - dVar200 * dVar28;
    dVar255 = auVar159._0_8_;
    dVar190 = dVar270 * dVar255 - dVar272 * dVar260;
    dVar256 = auVar159._8_8_;
    dVar204 = dVar241 * dVar256 - dVar203 * dVar262;
    dVar257 = auVar159._16_8_;
    dVar219 = dVar271 * dVar257 - dVar206 * dVar264;
    dVar258 = auVar159._24_8_;
    dVar263 = dVar200 * dVar258 - dVar207 * dVar266;
    dVar245 = auVar64._0_8_;
    dVar265 = dVar270 * dVar245 - dVar272 * dVar189;
    dVar250 = auVar64._8_8_;
    dVar232 = dVar241 * dVar250 - dVar203 * dVar202;
    dVar252 = auVar64._16_8_;
    dVar165 = dVar271 * dVar252 - dVar206 * dVar217;
    dVar254 = auVar64._24_8_;
    dVar233 = dVar200 * dVar254 - dVar207 * dVar228;
    dVar50 = dVar272 * dVar82 - auVar223._0_8_ * dVar255;
    dVar55 = dVar203 * dVar118 - auVar223._0_8_ * dVar256;
    dVar60 = dVar206 * dVar5 - auVar223._0_8_ * dVar257;
    dVar83 = dVar207 * dVar27 - auVar223._0_8_ * dVar258;
    dVar30 = dVar272 * dVar84 - auVar223._0_8_ * dVar245;
    dVar53 = dVar203 * dVar138 - auVar223._0_8_ * dVar250;
    dVar58 = dVar206 * dVar6 - auVar223._0_8_ * dVar252;
    dVar25 = dVar207 * dVar28 - auVar223._0_8_ * dVar254;
    dVar265 = dVar265 + dVar265;
    dVar232 = dVar232 + dVar232;
    dVar165 = dVar165 + dVar165;
    dVar233 = dVar233 + dVar233;
    dVar190 = dVar190 + dVar190;
    dVar204 = dVar204 + dVar204;
    dVar219 = dVar219 + dVar219;
    dVar263 = dVar263 + dVar263;
    dVar30 = dVar30 + dVar30;
    dVar53 = dVar53 + dVar53;
    dVar58 = dVar58 + dVar58;
    dVar25 = dVar25 + dVar25;
    dVar50 = dVar50 + dVar50;
    dVar55 = dVar55 + dVar55;
    dVar60 = dVar60 + dVar60;
    dVar83 = dVar83 + dVar83;
    dVar88 = dVar88 + dVar88;
    dVar227 = dVar227 + dVar227;
    dVar115 = dVar115 + dVar115;
    dVar117 = dVar117 + dVar117;
    dVar198 = dVar198 + dVar198;
    dVar205 = dVar205 + dVar205;
    dVar259 = dVar259 + dVar259;
    dVar230 = dVar230 + dVar230;
    auVar214._0_8_ = ((dVar270 * dVar85 - dVar272 * dVar120) + dVar216 * dVar26 + dVar1) * dVar62;
    auVar214._8_8_ = ((dVar241 * dVar221 - dVar203 * dVar201) + dVar220 * dVar51 + dVar87) * dVar62;
    auVar214._16_8_ =
         ((dVar271 * dVar114 - dVar206 * dVar215) + dVar240 * dVar56 + dVar139) * dVar62;
    auVar214._24_8_ = ((dVar200 * dVar231 - dVar207 * dVar261) + dVar243 * dVar61 + dVar7) * dVar62;
    auVar225._0_8_ = ((dVar270 * dVar29 - dVar272 * dVar86) + dVar216 * dVar49 + dVar2) * dVar62;
    auVar225._8_8_ = ((dVar241 * dVar52 - dVar203 * dVar113) + dVar220 * dVar54 + dVar112) * dVar62;
    auVar225._16_8_ = ((dVar271 * dVar57 - dVar206 * dVar229) + dVar240 * dVar59 + dVar140) * dVar62
    ;
    auVar225._24_8_ = ((dVar200 * dVar24 - dVar207 * dVar116) + dVar243 * dVar63 + dVar8) * dVar62;
    auVar81._0_8_ = dVar62 * (dVar216 * dVar190 + dVar82 + (dVar270 * dVar198 - dVar272 * dVar50));
    auVar81._8_8_ = dVar62 * (dVar220 * dVar204 + dVar118 + (dVar241 * dVar205 - dVar203 * dVar55));
    auVar81._16_8_ = dVar62 * (dVar240 * dVar219 + dVar5 + (dVar271 * dVar259 - dVar206 * dVar60));
    auVar81._24_8_ = dVar62 * (dVar243 * dVar263 + dVar27 + (dVar200 * dVar230 - dVar207 * dVar83));
    auVar48._0_8_ = dVar62 * (dVar216 * dVar265 + dVar84 + (dVar270 * dVar88 - dVar272 * dVar30));
    auVar48._8_8_ = dVar62 * (dVar220 * dVar232 + dVar138 + (dVar241 * dVar227 - dVar203 * dVar53));
    auVar48._16_8_ = dVar62 * (dVar240 * dVar165 + dVar6 + (dVar271 * dVar115 - dVar206 * dVar58));
    auVar48._24_8_ = dVar62 * (dVar243 * dVar233 + dVar28 + (dVar200 * dVar117 - dVar207 * dVar25));
    auVar188._0_8_ =
         local_258 * ((dVar272 * dVar26 - auVar223._0_8_ * dVar85) + dVar216 * dVar120 + dVar119);
    auVar188._8_8_ =
         dStack_250 * ((dVar203 * dVar51 - auVar223._0_8_ * dVar221) + dVar220 * dVar201 + dVar199);
    auVar188._16_8_ =
         dStack_248 * ((dVar206 * dVar56 - auVar223._0_8_ * dVar114) + dVar240 * dVar215 + dVar208);
    auVar188._24_8_ =
         dStack_240 * ((dVar207 * dVar61 - auVar223._0_8_ * dVar231) + dVar243 * dVar261 + dVar222);
    auVar236._0_8_ =
         local_258 * ((dVar272 * dVar49 - auVar223._0_8_ * dVar29) + dVar216 * dVar86 + dVar179);
    auVar236._8_8_ =
         dStack_250 * ((dVar203 * dVar54 - auVar223._0_8_ * dVar52) + dVar220 * dVar113 + dVar237);
    auVar236._16_8_ =
         dStack_248 * ((dVar206 * dVar59 - auVar223._0_8_ * dVar57) + dVar240 * dVar229 + dVar267);
    auVar236._24_8_ =
         dStack_240 * ((dVar207 * dVar63 - auVar223._0_8_ * dVar24) + dVar243 * dVar116 + dVar238);
    auVar248._0_8_ =
         local_258 * ((dVar272 * dVar190 - auVar223._0_8_ * dVar198) + dVar216 * dVar50 + dVar260);
    auVar248._8_8_ =
         dStack_250 * ((dVar203 * dVar204 - auVar223._0_8_ * dVar205) + dVar220 * dVar55 + dVar262);
    auVar248._16_8_ =
         dStack_248 * ((dVar206 * dVar219 - auVar223._0_8_ * dVar259) + dVar240 * dVar60 + dVar264);
    auVar248._24_8_ =
         dStack_240 * ((dVar207 * dVar263 - auVar223._0_8_ * dVar230) + dVar243 * dVar83 + dVar266);
    auVar111._0_8_ =
         local_258 * ((dVar272 * dVar265 - auVar223._0_8_ * dVar88) + dVar216 * dVar30 + dVar189);
    auVar111._8_8_ =
         dStack_250 * ((dVar203 * dVar232 - auVar223._0_8_ * dVar227) + dVar220 * dVar53 + dVar202);
    auVar111._16_8_ =
         dStack_248 * ((dVar206 * dVar165 - auVar223._0_8_ * dVar115) + dVar240 * dVar58 + dVar217);
    auVar111._24_8_ =
         dStack_240 * ((dVar207 * dVar233 - auVar223._0_8_ * dVar117) + dVar243 * dVar25 + dVar228);
    auVar136._0_8_ =
         local_238 * ((auVar223._0_8_ * dVar120 - dVar270 * dVar26) + dVar216 * dVar85 + dVar209);
    auVar136._8_8_ =
         dStack_230 * ((auVar223._0_8_ * dVar201 - dVar241 * dVar51) + dVar220 * dVar221 + dVar218);
    auVar136._16_8_ =
         dStack_228 * ((auVar223._0_8_ * dVar215 - dVar271 * dVar56) + dVar240 * dVar114 + dVar239);
    auVar136._24_8_ =
         dStack_220 * ((auVar223._0_8_ * dVar261 - dVar200 * dVar61) + dVar243 * dVar231 + dVar242);
    auVar197._0_8_ =
         local_238 * ((auVar223._0_8_ * dVar86 - dVar270 * dVar49) + dVar216 * dVar29 + dVar244);
    auVar197._8_8_ =
         dStack_230 * ((auVar223._0_8_ * dVar113 - dVar241 * dVar54) + dVar220 * dVar52 + dVar249);
    auVar197._16_8_ =
         dStack_228 * ((auVar223._0_8_ * dVar229 - dVar271 * dVar59) + dVar240 * dVar57 + dVar251);
    auVar197._24_8_ =
         dStack_220 * ((auVar223._0_8_ * dVar116 - dVar200 * dVar63) + dVar243 * dVar24 + dVar253);
    auVar177._0_8_ =
         local_238 * (dVar216 * dVar198 + dVar255 + (auVar223._0_8_ * dVar50 - dVar270 * dVar190));
    auVar177._8_8_ =
         dStack_230 * (dVar220 * dVar205 + dVar256 + (auVar223._0_8_ * dVar55 - dVar241 * dVar204));
    auVar177._16_8_ =
         dStack_228 * (dVar240 * dVar259 + dVar257 + (auVar223._0_8_ * dVar60 - dVar271 * dVar219));
    auVar177._24_8_ =
         dStack_220 * (dVar243 * dVar230 + dVar258 + (auVar223._0_8_ * dVar83 - dVar200 * dVar263));
    auVar9 = vcvtpd2ps_avx(auVar225);
    auVar153 = vcvtpd2ps_avx(auVar214);
    auVar226._0_8_ =
         local_238 * (dVar88 * dVar216 + dVar245 + (auVar223._0_8_ * dVar30 - dVar270 * dVar265));
    auVar226._8_8_ =
         dStack_230 * (dVar227 * dVar220 + dVar250 + (auVar223._0_8_ * dVar53 - dVar241 * dVar232));
    auVar226._16_8_ =
         dStack_228 * (dVar115 * dVar240 + dVar252 + (auVar223._0_8_ * dVar58 - dVar271 * dVar165));
    auVar226._24_8_ =
         dStack_220 * (dVar117 * dVar243 + dVar254 + (auVar223._0_8_ * dVar25 - dVar200 * dVar233));
    auVar164._16_16_ = auVar153;
    auVar164._0_16_ = auVar9;
    auVar122 = vcvtpd2ps_avx(auVar236);
    auVar33 = vcvtpd2ps_avx(auVar188);
    auVar123 = vcvtpd2ps_avx(auVar197);
    auVar152._16_16_ = auVar33;
    auVar152._0_16_ = auVar122;
    auVar268 = vcvtpd2ps_avx(auVar136);
    auVar134._16_16_ = auVar268;
    auVar134._0_16_ = auVar123;
    auVar121 = vcvtpd2ps_avx(auVar48);
    auVar89 = vcvtpd2ps_avx(auVar81);
    auVar3 = vcvtpd2ps_avx(auVar111);
    auVar31 = vcvtpd2ps_avx(auVar248);
    auVar109._16_16_ = auVar89;
    auVar109._0_16_ = auVar121;
    auVar77._16_16_ = auVar31;
    auVar77._0_16_ = auVar3;
    auVar32 = vcvtpd2ps_avx(auVar226);
    auVar4 = vcvtpd2ps_avx(auVar177);
    auVar46._16_16_ = auVar4;
    auVar46._0_16_ = auVar32;
    cVar15 = (char)uVar16;
    if (cVar15 == -1) goto LAB_140cbb9eb;
    if ((uVar16 & 1) != 0) {
      *(int *)*pauVar19 = auVar9._0_4_;
    }
    if ((uVar16 & 2) != 0) {
      uVar20 = vextractps_avx(auVar9,1);
      *(undefined4 *)(*pauVar19 + 0xc) = uVar20;
    }
    if ((uVar16 & 4) != 0) {
      uVar20 = vextractps_avx(auVar9,2);
      *(undefined4 *)(*pauVar19 + 0x18) = uVar20;
    }
    if ((uVar16 & 8) != 0) {
      uVar20 = vextractps_avx(auVar9,3);
      *(undefined4 *)(pauVar19[1] + 4) = uVar20;
    }
    if ((uVar16 & 0x10) != 0) {
      *(int *)(pauVar19[1] + 0x10) = auVar153._0_4_;
    }
    if ((uVar16 & 0x20) != 0) {
      uVar20 = vextractps_avx(auVar153,1);
      *(undefined4 *)(pauVar19[1] + 0x1c) = uVar20;
    }
    if ((uVar16 & 0x40) != 0) {
      uVar20 = vextractps_avx(auVar153,2);
      *(undefined4 *)(pauVar19[2] + 8) = uVar20;
    }
    if (cVar15 < '\0') {
      uVar20 = vextractps_avx(auVar153,3);
      *(undefined4 *)(pauVar19[2] + 0x14) = uVar20;
    }
    if ((uVar16 & 1) != 0) {
      *(int *)(*pauVar19 + 4) = auVar122._0_4_;
    }
    if ((uVar16 & 2) != 0) {
      uVar20 = vextractps_avx(auVar122,1);
      *(undefined4 *)(*pauVar19 + 0x10) = uVar20;
    }
    if ((uVar16 & 4) != 0) {
      uVar20 = vextractps_avx(auVar122,2);
      *(undefined4 *)(*pauVar19 + 0x1c) = uVar20;
    }
    if ((uVar16 & 8) != 0) {
      uVar20 = vextractps_avx(auVar122,3);
      *(undefined4 *)(pauVar19[1] + 8) = uVar20;
    }
    if ((uVar16 & 0x10) != 0) {
      *(int *)(pauVar19[1] + 0x14) = auVar33._0_4_;
    }
    if ((uVar16 & 0x20) != 0) {
      uVar20 = vextractps_avx(auVar33,1);
      *(undefined4 *)pauVar19[2] = uVar20;
    }
    if ((uVar16 & 0x40) != 0) {
      uVar20 = vextractps_avx(auVar33,2);
      *(undefined4 *)(pauVar19[2] + 0xc) = uVar20;
    }
    if (cVar15 < '\0') {
      uVar20 = vextractps_avx(auVar33,3);
      *(undefined4 *)(pauVar19[2] + 0x18) = uVar20;
    }
    if ((uVar16 & 1) != 0) {
      *(int *)(*pauVar19 + 8) = auVar123._0_4_;
    }
    if ((uVar16 & 2) != 0) {
      uVar20 = vextractps_avx(auVar123,1);
      *(undefined4 *)(*pauVar19 + 0x14) = uVar20;
    }
    if ((uVar16 & 4) != 0) {
      uVar20 = vextractps_avx(auVar123,2);
      *(undefined4 *)pauVar19[1] = uVar20;
    }
    if ((uVar16 & 8) != 0) {
      uVar20 = vextractps_avx(auVar123,3);
      *(undefined4 *)(pauVar19[1] + 0xc) = uVar20;
    }
    if ((uVar16 & 0x10) != 0) {
      *(int *)(pauVar19[1] + 0x18) = auVar268._0_4_;
    }
    if ((uVar16 & 0x20) != 0) {
      uVar20 = vextractps_avx(auVar268,1);
      *(undefined4 *)(pauVar19[2] + 4) = uVar20;
    }
    if ((uVar16 & 0x40) != 0) {
      uVar20 = vextractps_avx(auVar268,2);
      *(undefined4 *)(pauVar19[2] + 0x10) = uVar20;
    }
    if (cVar15 < '\0') {
      uVar20 = vextractps_avx(auVar268,3);
      *(undefined4 *)(pauVar19[2] + 0x1c) = uVar20;
    }
    if ((uVar16 & 1) != 0) {
      *(int *)*pauVar22 = auVar121._0_4_;
    }
    if ((uVar16 & 2) != 0) {
      uVar20 = vextractps_avx(auVar121,1);
      *(undefined4 *)(param_2 + 0xc + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 4) != 0) {
      uVar20 = vextractps_avx(auVar121,2);
      *(undefined4 *)(param_2 + 0x18 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 8) != 0) {
      uVar20 = vextractps_avx(auVar121,3);
      *(undefined4 *)(param_2 + 0x24 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 0x10) != 0) {
      *(int *)(param_2 + 0x30 + uVar14 * 0xc) = auVar89._0_4_;
    }
    if ((uVar16 & 0x20) != 0) {
      uVar20 = vextractps_avx(auVar89,1);
      *(undefined4 *)(param_2 + 0x3c + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 0x40) != 0) {
      uVar20 = vextractps_avx(auVar89,2);
      *(undefined4 *)(param_2 + 0x48 + uVar14 * 0xc) = uVar20;
    }
    if (cVar15 < '\0') {
      uVar20 = vextractps_avx(auVar89,3);
      *(undefined4 *)(param_2 + 0x54 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 1) != 0) {
      *(int *)(param_2 + 4 + uVar14 * 0xc) = auVar3._0_4_;
    }
    if ((uVar16 & 2) != 0) {
      uVar20 = vextractps_avx(auVar3,1);
      *(undefined4 *)(param_2 + 0x10 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 4) != 0) {
      uVar20 = vextractps_avx(auVar3,2);
      *(undefined4 *)(param_2 + 0x1c + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 8) != 0) {
      uVar20 = vextractps_avx(auVar3,3);
      *(undefined4 *)(param_2 + 0x28 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 0x10) != 0) {
      *(int *)(param_2 + 0x34 + uVar14 * 0xc) = auVar31._0_4_;
    }
    if ((uVar16 & 0x20) != 0) {
      uVar20 = vextractps_avx(auVar31,1);
      *(undefined4 *)(param_2 + 0x40 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 0x40) != 0) {
      uVar20 = vextractps_avx(auVar31,2);
      *(undefined4 *)(param_2 + 0x4c + uVar14 * 0xc) = uVar20;
    }
    if (cVar15 < '\0') {
      uVar20 = vextractps_avx(auVar31,3);
      *(undefined4 *)(param_2 + 0x58 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 1) != 0) {
      *(int *)(param_2 + 8 + uVar14 * 0xc) = auVar32._0_4_;
    }
    if ((uVar16 & 2) != 0) {
      uVar20 = vextractps_avx(auVar32,1);
      *(undefined4 *)(param_2 + 0x14 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 4) != 0) {
      uVar20 = vextractps_avx(auVar32,2);
      *(undefined4 *)(param_2 + 0x20 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 8) != 0) {
      uVar20 = vextractps_avx(auVar32,3);
      *(undefined4 *)(param_2 + 0x2c + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 0x10) != 0) {
      *(int *)(param_2 + 0x38 + uVar14 * 0xc) = auVar4._0_4_;
    }
    if ((uVar16 & 0x20) != 0) {
      uVar20 = vextractps_avx(auVar4,1);
      *(undefined4 *)(param_2 + 0x44 + uVar14 * 0xc) = uVar20;
    }
    if ((uVar16 & 0x40) != 0) {
      uVar20 = vextractps_avx(auVar4,2);
      *(undefined4 *)(param_2 + 0x50 + uVar14 * 0xc) = uVar20;
    }
    goto joined_r0x000140cbb9dd;
  }
  auVar124 = vcmppd_avx(auVar69,auVar39,2);
  auVar129 = vpackssdw_avx2(auVar129,auVar124);
  auVar129 = vpermq_avx2(auVar129,0xd8);
  auVar129 = vblendvps_avx(*param_7,auVar69,auVar129);
  auVar124 = vpmovzxwd_avx2(auVar9);
  auVar124 = vpslld_avx2(auVar124,0x1f);
  auVar125 = vpsrad_avx2(auVar124,0x1f);
  auVar124 = vpand_avx2(auVar125,auVar129);
  iVar17 = vmovmskps_avx(auVar124);
  if (iVar17 == 0) {
    auVar124 = ZEXT832(0) << 0x20;
LAB_140cb9790:
    auVar155._0_8_ = (ulonglong)dVar62 & __real_7fe0000000000000;
    auVar155._8_8_ = (ulonglong)dVar82 & __real_7fe0000000000000;
    auVar155._16_8_ = (ulonglong)dVar84 & __real_7fe0000000000000;
    auVar155._24_8_ = 0;
    auVar180._8_8_ = __real_7fcfffffffffffff;
    auVar180._0_8_ = __real_7fcfffffffffffff;
    auVar180._16_8_ = __real_7fcfffffffffffff;
    auVar180._24_8_ = __real_7fcfffffffffffff;
    auVar69 = vpsubq_avx2(auVar180,auVar155);
    auVar129 = vpsubq_avx2(auVar180,ZEXT832((ulonglong)dVar87 & __real_7fe0000000000000) << 0x40);
    auVar166 = vpcmpeqd_avx2(auVar180,auVar180);
    auVar90._0_8_ = auVar129._0_8_ * 0.0;
    auVar90._8_8_ = dVar87 * auVar129._8_8_;
    auVar90._16_8_ = auVar129._16_8_ * 0.0;
    auVar90._24_8_ = dVar112 * auVar129._24_8_;
    auVar167._0_8_ = dVar62 * auVar69._0_8_;
    auVar167._8_8_ = dVar82 * auVar69._8_8_;
    auVar167._16_8_ = dVar84 * auVar69._16_8_;
    auVar167._24_8_ = auVar69._24_8_ * 0.0;
    auVar9 = vcvtpd2ps_avx(auVar167);
    auVar153 = vcvtpd2ps_avx(auVar90);
    auVar91._16_16_ = auVar153;
    auVar91._0_16_ = auVar9;
    auVar129 = vrcpps_avx(auVar91);
    auVar89._0_4_ = auVar129._0_4_ * (-(auVar129._0_4_ * auVar9._0_4_) + __real_40000000);
    auVar89._4_4_ = auVar129._4_4_ * (-(auVar129._4_4_ * auVar9._4_4_) + __real_40000000);
    auVar89._8_4_ = auVar129._8_4_ * (-(auVar129._8_4_ * auVar9._8_4_) + __real_40000000);
    auVar89._12_4_ = auVar129._12_4_ * (-(auVar129._12_4_ * auVar9._12_4_) + __real_40000000);
    auVar129 = vcvtps2pd_avx(auVar89);
    dVar87 = auVar69._0_8_ * auVar129._0_8_;
    dVar112 = auVar69._8_8_ * auVar129._8_8_;
    dVar118 = auVar69._16_8_ * auVar129._16_8_;
    dVar138 = auVar69._24_8_ * auVar129._24_8_;
    dVar87 = dVar87 * (-(dVar62 * dVar87) + __real_4000000000000000);
    dVar112 = dVar112 * (-(dVar82 * dVar112) + __real_4000000000000000);
    dVar118 = dVar118 * (-(dVar84 * dVar118) + __real_4000000000000000);
    dVar138 = dVar138 * (-(dVar138 * 0.0) + __real_4000000000000000);
    auVar65._0_8_ = dVar87 * (-(dVar87 * dVar62) + __real_4000000000000000);
    auVar65._8_8_ = dVar112 * (-(dVar112 * dVar82) + __real_4000000000000000);
    auVar65._16_8_ = dVar118 * (-(dVar118 * dVar84) + __real_4000000000000000);
    auVar65._24_8_ = dVar138 * (-(dVar138 * 0.0) + __real_4000000000000000);
    auVar129 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                           auVar124 ^ auVar166);
    auVar125 = vblendvps_avx(auVar125,auVar65,auVar129);
  }
  else {
    auVar9 = vcvtpd2ps_avx(auVar64);
    auVar153 = vcvtpd2ps_avx(auVar69);
    auVar126._16_16_ = auVar153;
    auVar126._0_16_ = auVar9;
    auVar166 = vrcpps_avx(auVar126);
    auVar121._0_4_ = auVar166._0_4_ * (-(auVar166._0_4_ * auVar9._0_4_) + __real_40000000);
    auVar121._4_4_ = auVar166._4_4_ * (-(auVar166._4_4_ * auVar9._4_4_) + __real_40000000);
    auVar121._8_4_ = auVar166._8_4_ * (-(auVar166._8_4_ * auVar9._8_4_) + __real_40000000);
    auVar121._12_4_ = auVar166._12_4_ * (-(auVar166._12_4_ * auVar9._12_4_) + __real_40000000);
    auVar166 = vcvtps2pd_avx(auVar121);
    dVar118 = (-(dVar62 * auVar166._0_8_) + __real_4000000000000000) * auVar166._0_8_;
    dVar138 = (-(dVar82 * auVar166._8_8_) + __real_4000000000000000) * auVar166._8_8_;
    dVar139 = (-(dVar84 * auVar166._16_8_) + __real_4000000000000000) * auVar166._16_8_;
    dVar140 = (-(auVar166._24_8_ * 0.0) + __real_4000000000000000) * auVar166._24_8_;
    auVar125._0_8_ = dVar118 * (-(dVar62 * dVar118) + __real_4000000000000000);
    auVar125._8_8_ = dVar138 * (-(dVar82 * dVar138) + __real_4000000000000000);
    auVar125._16_8_ = dVar139 * (-(dVar84 * dVar139) + __real_4000000000000000);
    auVar125._24_8_ = dVar140 * (-(dVar140 * 0.0) + __real_4000000000000000);
    uVar20 = vmovmskps_avx(auVar129);
    if ((char)uVar20 != (char)iVar17) goto LAB_140cb9790;
  }
  auVar129 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                         auVar159);
  auVar129 = vblendvps_avx(auVar125,SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar129);
  uVar18 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar18 = param_6;
  }
  auVar124 = vpermpd_avx2(auVar223,0x55);
  auVar166 = vpermpd_avx2(auVar223,0xaa);
  auVar69 = vpermpd_avx2(auVar223,0xff);
  auVar159 = vpermpd_avx2(auVar129,0x55);
  auVar64 = vpermpd_avx2(auVar129,0xaa);
  local_358._0_8_ = auVar124._0_8_;
  local_358._8_8_ = auVar124._8_8_;
  dStack_348 = auVar124._16_8_;
  dStack_340 = auVar124._24_8_;
  local_338 = auVar166._0_8_;
  dStack_330 = auVar166._8_8_;
  dStack_328 = auVar166._16_8_;
  dStack_320 = auVar166._24_8_;
  local_238 = auVar69._0_8_;
  dStack_230 = auVar69._8_8_;
  dStack_228 = auVar69._16_8_;
  dStack_220 = auVar69._24_8_;
  local_278 = auVar159._0_8_;
  dStack_270 = auVar159._8_8_;
  dStack_268 = auVar159._16_8_;
  dStack_260 = auVar159._24_8_;
  local_258 = auVar64._0_8_;
  dStack_250 = auVar64._8_8_;
  dStack_248 = auVar64._16_8_;
  dStack_240 = auVar64._24_8_;
  dVar62 = auVar129._0_8_;
  if ((int)(uVar18 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    local_1a8._8_8_ = dVar1;
    local_1a8._0_8_ = dVar1;
    dStack_198 = dVar1;
    dStack_190 = dVar1;
    local_128._8_8_ = dVar2;
    local_128._0_8_ = dVar2;
    dStack_118 = dVar2;
    dStack_110 = dVar2;
    lVar23 = 0x40;
    uVar21 = 0;
    do {
      auVar171 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar160 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar99 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar129 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar23);
      auVar124 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar23);
      auVar166 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                              ,auVar124);
      auVar69 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar129);
      auVar166 = vblendps_avx(auVar69,auVar166,0x88);
      auVar69 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar124);
      auVar159 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_1 + lVar23));
      auVar69 = vblendps_avx(auVar159,auVar69,0x13);
      auVar129 = vblendps_avx(auVar124,auVar129,0x24);
      auVar129 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar129);
      auVar124 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(param_1 + lVar23));
      auVar159 = vblendps_avx(auVar129,auVar124,0xe0);
      auVar129 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar23);
      auVar124 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar23);
      auVar64 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar124);
      auVar39 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar129);
      auVar64 = vblendps_avx(auVar39,auVar64,0x88);
      auVar39 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar124);
      auVar154 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_2 + lVar23));
      auVar39 = vblendps_avx(auVar154,auVar39,0x13);
      auVar98 = vperm2f128_avx(auVar64,auVar39,0x31);
      auVar129 = vblendps_avx(auVar124,auVar129,0x24);
      auVar129 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                              ,auVar129);
      auVar124 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(param_2 + lVar23));
      auVar129 = vblendps_avx(auVar129,auVar124,0xe0);
      auVar124 = vcvtps2pd_avx(auVar69._0_16_);
      auVar154 = vcvtps2pd_avx(auVar166._0_16_);
      auVar69 = vcvtps2pd_avx(auVar69._16_16_);
      auVar166 = vcvtps2pd_avx(auVar166._16_16_);
      auVar70 = vcvtps2pd_avx(auVar159._16_16_);
      auVar159 = vcvtps2pd_avx(auVar159._0_16_);
      dVar82 = *param_4;
      auVar127._0_8_ = param_5 * auVar154._0_8_ + dVar82;
      auVar127._8_8_ = param_5 * auVar154._8_8_ + dVar82;
      auVar127._16_8_ = param_5 * auVar154._16_8_ + dVar82;
      auVar127._24_8_ = param_5 * auVar154._24_8_ + dVar82;
      auVar92._0_8_ = param_5 * auVar124._0_8_ + dVar82;
      auVar92._8_8_ = param_5 * auVar124._8_8_ + dVar82;
      auVar92._16_8_ = param_5 * auVar124._16_8_ + dVar82;
      auVar92._24_8_ = param_5 * auVar124._24_8_ + dVar82;
      dVar82 = param_4[1];
      auVar156._0_8_ = param_5 * auVar166._0_8_ + dVar82;
      auVar156._8_8_ = param_5 * auVar166._8_8_ + dVar82;
      auVar156._16_8_ = param_5 * auVar166._16_8_ + dVar82;
      auVar156._24_8_ = param_5 * auVar166._24_8_ + dVar82;
      auVar141._0_8_ = param_5 * auVar69._0_8_ + dVar82;
      auVar141._8_8_ = param_5 * auVar69._8_8_ + dVar82;
      auVar141._16_8_ = param_5 * auVar69._16_8_ + dVar82;
      auVar141._24_8_ = param_5 * auVar69._24_8_ + dVar82;
      dVar82 = param_4[2];
      auVar210._0_8_ = param_5 * auVar159._0_8_ + dVar82;
      auVar210._8_8_ = param_5 * auVar159._8_8_ + dVar82;
      auVar210._16_8_ = param_5 * auVar159._16_8_ + dVar82;
      auVar210._24_8_ = param_5 * auVar159._24_8_ + dVar82;
      auVar191._0_8_ = param_5 * auVar70._0_8_ + dVar82;
      auVar191._8_8_ = param_5 * auVar70._8_8_ + dVar82;
      auVar191._16_8_ = param_5 * auVar70._16_8_ + dVar82;
      auVar191._24_8_ = param_5 * auVar70._24_8_ + dVar82;
      local_3d8._4_4_ = auVar98._4_4_ ^ uVar16;
      local_3d8._0_4_ = auVar98._0_4_ ^ uVar16;
      local_3d8._8_4_ = auVar98._8_4_ ^ uVar16;
      local_3d8._12_4_ = auVar98._12_4_ ^ uVar16;
      uStack_3c8 = auVar98._16_4_ ^ uVar16;
      uStack_3c4 = auVar98._20_4_ ^ uVar16;
      uStack_3c0 = auVar98._24_4_ ^ uVar16;
      uStack_3bc = auVar98._28_4_ ^ uVar16;
      auVar124 = vsubpd_avx(auVar92,_local_1a8);
      auVar166 = vsubpd_avx(auVar127,_local_1a8);
      auVar13._8_8_ = local_1f8._8_8_;
      auVar13._0_8_ = local_1f8._8_8_;
      auVar13._16_8_ = local_1f8._8_8_;
      auVar13._24_8_ = local_1f8._8_8_;
      auVar69 = vsubpd_avx(auVar141,auVar13);
      auVar159 = vsubpd_avx(auVar156,auVar13);
      auVar154 = vsubpd_avx(auVar191,_local_128);
      auVar70 = vsubpd_avx(auVar210,_local_128);
      dVar82 = auVar166._0_8_;
      dVar138 = auVar166._8_8_;
      dVar7 = auVar166._16_8_;
      dVar30 = auVar166._24_8_;
      dVar271 = auVar124._0_8_;
      dVar272 = auVar124._8_8_;
      dVar206 = auVar124._16_8_;
      dVar209 = auVar124._24_8_;
      dVar84 = auVar159._0_8_;
      dVar139 = auVar159._8_8_;
      dVar8 = auVar159._16_8_;
      dVar52 = auVar159._24_8_;
      dVar165 = auVar69._0_8_;
      dVar179 = auVar69._8_8_;
      dVar267 = auVar69._16_8_;
      dVar270 = auVar69._24_8_;
      dVar87 = auVar70._0_8_;
      dVar140 = auVar70._8_8_;
      dVar27 = auVar70._16_8_;
      dVar53 = auVar70._24_8_;
      dVar112 = auVar154._0_8_;
      dVar5 = auVar154._8_8_;
      dVar28 = auVar154._16_8_;
      dVar57 = auVar154._24_8_;
      dVar208 = auVar223._0_8_ * dVar165 - dVar271 * (double)local_358._0_8_;
      dVar215 = auVar223._0_8_ * dVar179 - dVar272 * (double)local_358._8_8_;
      dVar217 = auVar223._0_8_ * dVar267 - dVar206 * dStack_348;
      dVar219 = auVar223._0_8_ * dVar270 - dVar209 * dStack_340;
      dVar189 = auVar223._0_8_ * dVar84 - (double)local_358._0_8_ * dVar82;
      dVar198 = auVar223._0_8_ * dVar139 - (double)local_358._8_8_ * dVar138;
      dVar201 = auVar223._0_8_ * dVar8 - dStack_348 * dVar7;
      dVar204 = auVar223._0_8_ * dVar52 - dStack_340 * dVar30;
      dVar221 = (double)local_358._0_8_ * dVar112 - dVar165 * local_338;
      dVar227 = (double)local_358._8_8_ * dVar5 - dVar179 * dStack_330;
      dVar229 = dStack_348 * dVar28 - dVar267 * dStack_328;
      dVar231 = dStack_340 * dVar57 - dVar270 * dStack_320;
      dVar88 = (double)local_358._0_8_ * dVar87 - local_338 * dVar84;
      dVar113 = (double)local_358._8_8_ * dVar140 - dStack_330 * dVar139;
      dVar114 = dStack_348 * dVar27 - dStack_328 * dVar8;
      dVar115 = dStack_340 * dVar53 - dStack_320 * dVar52;
      dVar24 = local_338 * dVar271 - auVar223._0_8_ * dVar112;
      dVar49 = dStack_330 * dVar272 - auVar223._0_8_ * dVar5;
      dVar54 = dStack_328 * dVar206 - auVar223._0_8_ * dVar28;
      dVar59 = dStack_320 * dVar209 - auVar223._0_8_ * dVar57;
      dVar259 = local_338 * dVar82 - auVar223._0_8_ * dVar87;
      dVar261 = dStack_330 * dVar138 - auVar223._0_8_ * dVar140;
      dVar263 = dStack_328 * dVar7 - auVar223._0_8_ * dVar27;
      dVar265 = dStack_320 * dVar30 - auVar223._0_8_ * dVar53;
      dVar88 = dVar88 + dVar88;
      dVar113 = dVar113 + dVar113;
      dVar114 = dVar114 + dVar114;
      dVar115 = dVar115 + dVar115;
      dVar221 = dVar221 + dVar221;
      dVar227 = dVar227 + dVar227;
      dVar229 = dVar229 + dVar229;
      dVar231 = dVar231 + dVar231;
      dVar259 = dVar259 + dVar259;
      dVar261 = dVar261 + dVar261;
      dVar263 = dVar263 + dVar263;
      dVar265 = dVar265 + dVar265;
      dVar24 = dVar24 + dVar24;
      dVar49 = dVar49 + dVar49;
      dVar54 = dVar54 + dVar54;
      dVar59 = dVar59 + dVar59;
      dVar189 = dVar189 + dVar189;
      dVar198 = dVar198 + dVar198;
      dVar201 = dVar201 + dVar201;
      dVar204 = dVar204 + dVar204;
      dVar208 = dVar208 + dVar208;
      dVar215 = dVar215 + dVar215;
      dVar217 = dVar217 + dVar217;
      dVar219 = dVar219 + dVar219;
      auVar3._4_4_ = auVar64._4_4_ ^ uVar16;
      auVar3._0_4_ = auVar64._0_4_ ^ uVar16;
      auVar3._8_4_ = auVar64._8_4_ ^ uVar16;
      auVar3._12_4_ = auVar64._12_4_ ^ uVar16;
      auVar11._16_4_ = auVar39._0_4_ ^ uVar16;
      auVar11._0_16_ = auVar3;
      auVar11._20_4_ = auVar39._4_4_ ^ uVar16;
      auVar11._24_4_ = auVar39._8_4_ ^ uVar16;
      auVar11._28_4_ = auVar39._12_4_ ^ uVar16;
      auVar124 = vcvtps2pd_avx(auVar11._16_16_);
      auVar166 = vcvtps2pd_avx(auVar3);
      auVar69 = vcvtps2pd_avx(local_3d8._16_16_);
      local_3f8._0_4_ = auVar129._0_4_;
      local_3f8._4_4_ = auVar129._4_4_;
      local_3f8._8_4_ = auVar129._8_4_;
      local_3f8._12_4_ = auVar129._12_4_;
      uStack_3e8 = auVar129._16_4_;
      uStack_3e4 = auVar129._20_4_;
      uStack_3e0 = auVar129._24_4_;
      uStack_3dc = auVar129._28_4_;
      auVar31._0_4_ = uVar16 ^ local_3f8._0_4_;
      auVar31._4_4_ = uVar16 ^ local_3f8._4_4_;
      auVar31._8_4_ = uVar16 ^ local_3f8._8_4_;
      auVar31._12_4_ = uVar16 ^ local_3f8._12_4_;
      auVar34._16_4_ = uVar16 ^ uStack_3e8;
      auVar34._0_16_ = auVar31;
      auVar34._20_4_ = uVar16 ^ uStack_3e4;
      auVar34._24_4_ = uVar16 ^ uStack_3e0;
      auVar34._28_4_ = uVar16 ^ uStack_3dc;
      auVar129 = vcvtps2pd_avx(local_3d8);
      auVar159 = vcvtps2pd_avx(auVar34._16_16_);
      auVar64 = vcvtps2pd_avx(auVar31);
      local_318 = auVar124._0_8_;
      dStack_310 = auVar124._8_8_;
      dStack_308 = auVar124._16_8_;
      dStack_300 = auVar124._24_8_;
      dVar200 = auVar69._0_8_;
      dVar203 = auVar69._8_8_;
      dVar207 = auVar69._16_8_;
      dVar216 = auVar69._24_8_;
      dVar118 = auVar159._0_8_;
      dVar6 = auVar159._8_8_;
      dVar29 = auVar159._16_8_;
      dVar58 = auVar159._24_8_;
      dVar25 = auVar223._0_8_ * dVar200 - local_318 * (double)local_358._0_8_;
      dVar50 = auVar223._0_8_ * dVar203 - dStack_310 * (double)local_358._8_8_;
      dVar55 = auVar223._0_8_ * dVar207 - dStack_308 * dStack_348;
      dVar60 = auVar223._0_8_ * dVar216 - dStack_300 * dStack_340;
      dVar63 = (double)local_358._0_8_ * dVar118 - dVar200 * local_338;
      dVar83 = (double)local_358._8_8_ * dVar6 - dVar203 * dStack_330;
      dVar85 = dStack_348 * dVar29 - dVar207 * dStack_328;
      dVar86 = dStack_340 * dVar58 - dVar216 * dStack_320;
      dVar190 = local_338 * local_318 - auVar223._0_8_ * dVar118;
      dVar199 = dStack_330 * dStack_310 - auVar223._0_8_ * dVar6;
      dVar202 = dStack_328 * dStack_308 - auVar223._0_8_ * dVar29;
      dVar205 = dStack_320 * dStack_300 - auVar223._0_8_ * dVar58;
      dVar63 = dVar63 + dVar63;
      dVar83 = dVar83 + dVar83;
      dVar85 = dVar85 + dVar85;
      dVar86 = dVar86 + dVar86;
      dVar190 = dVar190 + dVar190;
      dVar199 = dVar199 + dVar199;
      dVar202 = dVar202 + dVar202;
      dVar205 = dVar205 + dVar205;
      dVar25 = dVar25 + dVar25;
      dVar50 = dVar50 + dVar50;
      dVar55 = dVar55 + dVar55;
      dVar60 = dVar60 + dVar60;
      local_2f8._0_8_ = auVar166._0_8_;
      stack0xfffffffffffffd10 = auVar166._8_8_;
      uStack_2e8 = auVar166._16_8_;
      uStack_2e0 = auVar166._24_8_;
      local_1d8 = auVar129._0_8_;
      dStack_1d0 = auVar129._8_8_;
      dStack_1c8 = auVar129._16_8_;
      dStack_1c0 = auVar129._24_8_;
      dVar26 = auVar223._0_8_ * local_1d8 - (double)local_358._0_8_ * (double)local_2f8._0_8_;
      dVar51 = auVar223._0_8_ * dStack_1d0 - (double)local_358._8_8_ * stack0xfffffffffffffd10;
      dVar56 = auVar223._0_8_ * dStack_1c8 - dStack_348 * uStack_2e8;
      dVar61 = auVar223._0_8_ * dStack_1c0 - dStack_340 * uStack_2e0;
      dVar116 = auVar64._0_8_;
      dVar222 = (double)local_358._0_8_ * dVar116 - local_338 * local_1d8;
      dVar117 = auVar64._8_8_;
      dVar228 = (double)local_358._8_8_ * dVar117 - dStack_330 * dStack_1d0;
      dVar119 = auVar64._16_8_;
      dVar230 = dStack_348 * dVar119 - dStack_328 * dStack_1c8;
      dVar120 = auVar64._24_8_;
      dVar232 = dStack_340 * dVar120 - dStack_320 * dStack_1c0;
      dVar233 = local_338 * (double)local_2f8._0_8_ - auVar223._0_8_ * dVar116;
      dVar237 = dStack_330 * stack0xfffffffffffffd10 - auVar223._0_8_ * dVar117;
      dVar238 = dStack_328 * uStack_2e8 - auVar223._0_8_ * dVar119;
      dVar241 = dStack_320 * uStack_2e0 - auVar223._0_8_ * dVar120;
      dVar222 = dVar222 + dVar222;
      dVar228 = dVar228 + dVar228;
      dVar230 = dVar230 + dVar230;
      dVar232 = dVar232 + dVar232;
      dVar233 = dVar233 + dVar233;
      dVar237 = dVar237 + dVar237;
      dVar238 = dVar238 + dVar238;
      dVar241 = dVar241 + dVar241;
      dVar26 = dVar26 + dVar26;
      dVar51 = dVar51 + dVar51;
      dVar56 = dVar56 + dVar56;
      dVar61 = dVar61 + dVar61;
      auVar35._0_8_ =
           dVar62 * (local_238 * dVar221 + dVar271 +
                    ((double)local_358._0_8_ * dVar208 - dVar24 * local_338));
      auVar35._8_8_ =
           dVar62 * (dStack_230 * dVar227 + dVar272 +
                    ((double)local_358._8_8_ * dVar215 - dVar49 * dStack_330));
      auVar35._16_8_ =
           dVar62 * (dStack_228 * dVar229 + dVar206 + (dStack_348 * dVar217 - dVar54 * dStack_328));
      auVar35._24_8_ =
           dVar62 * (dStack_220 * dVar231 + dVar209 + (dStack_340 * dVar219 - dVar59 * dStack_320));
      auVar168._0_8_ =
           dVar62 * (local_238 * dVar88 + dVar82 +
                    ((double)local_358._0_8_ * dVar189 - dVar259 * local_338));
      auVar168._8_8_ =
           dVar62 * (dStack_230 * dVar113 + dVar138 +
                    ((double)local_358._8_8_ * dVar198 - dVar261 * dStack_330));
      auVar168._16_8_ =
           dVar62 * (dStack_228 * dVar114 + dVar7 + (dStack_348 * dVar201 - dVar263 * dStack_328));
      auVar168._24_8_ =
           dVar62 * (dStack_220 * dVar115 + dVar30 + (dStack_340 * dVar204 - dVar265 * dStack_320));
      auVar192._0_8_ =
           (local_238 * dVar24 + dVar165 + (local_338 * dVar221 - auVar223._0_8_ * dVar208)) *
           local_278;
      auVar192._8_8_ =
           (dStack_230 * dVar49 + dVar179 + (dStack_330 * dVar227 - auVar223._0_8_ * dVar215)) *
           dStack_270;
      auVar192._16_8_ =
           (dStack_228 * dVar54 + dVar267 + (dStack_328 * dVar229 - auVar223._0_8_ * dVar217)) *
           dStack_268;
      auVar192._24_8_ =
           (dStack_220 * dVar59 + dVar270 + (dStack_320 * dVar231 - auVar223._0_8_ * dVar219)) *
           dStack_260;
      auVar93._0_8_ =
           (local_238 * dVar259 + dVar84 + (local_338 * dVar88 - auVar223._0_8_ * dVar189)) *
           local_278;
      auVar93._8_8_ =
           (dStack_230 * dVar261 + dVar139 + (dStack_330 * dVar113 - auVar223._0_8_ * dVar198)) *
           dStack_270;
      auVar93._16_8_ =
           (dStack_228 * dVar263 + dVar8 + (dStack_328 * dVar114 - auVar223._0_8_ * dVar201)) *
           dStack_268;
      auVar93._24_8_ =
           (dStack_220 * dVar265 + dVar52 + (dStack_320 * dVar115 - auVar223._0_8_ * dVar204)) *
           dStack_260;
      auVar142._0_8_ =
           (local_238 * dVar208 + dVar112 +
           (auVar223._0_8_ * dVar24 - (double)local_358._0_8_ * dVar221)) * local_258;
      auVar142._8_8_ =
           (dStack_230 * dVar215 + dVar5 +
           (auVar223._0_8_ * dVar49 - (double)local_358._8_8_ * dVar227)) * dStack_250;
      auVar142._16_8_ =
           (dStack_228 * dVar217 + dVar28 + (auVar223._0_8_ * dVar54 - dStack_348 * dVar229)) *
           dStack_248;
      auVar142._24_8_ =
           (dStack_220 * dVar219 + dVar57 + (auVar223._0_8_ * dVar59 - dStack_340 * dVar231)) *
           dStack_240;
      auVar211._0_8_ =
           (local_238 * dVar189 + dVar87 +
           (auVar223._0_8_ * dVar259 - (double)local_358._0_8_ * dVar88)) * local_258;
      auVar211._8_8_ =
           (dStack_230 * dVar198 + dVar140 +
           (auVar223._0_8_ * dVar261 - (double)local_358._8_8_ * dVar113)) * dStack_250;
      auVar211._16_8_ =
           (dStack_228 * dVar201 + dVar27 + (auVar223._0_8_ * dVar263 - dStack_348 * dVar114)) *
           dStack_248;
      auVar211._24_8_ =
           (dStack_220 * dVar204 + dVar53 + (auVar223._0_8_ * dVar265 - dStack_340 * dVar115)) *
           dStack_240;
      auVar9 = vcvtpd2ps_avx(auVar168);
      auVar153 = vcvtpd2ps_avx(auVar35);
      auVar122 = vcvtpd2ps_avx(auVar93);
      auVar94._16_16_ = auVar153;
      auVar94._0_16_ = auVar9;
      auVar153 = vcvtpd2ps_avx(auVar192);
      auVar36._16_16_ = auVar153;
      auVar36._0_16_ = auVar122;
      auVar153 = vcvtpd2ps_avx(auVar211);
      auVar33 = vcvtpd2ps_avx(auVar142);
      auVar143._16_16_ = auVar33;
      auVar143._0_16_ = auVar153;
      auVar169._16_16_ = auVar122;
      auVar169._0_16_ = auVar9;
      auVar166 = vshufpd_avx(auVar94,auVar169,2);
      auVar124 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                              ,auVar143);
      auVar129 = vpermpd_avx2(auVar36,0xe9);
      auVar129 = vblendps_avx(auVar124,auVar129,7);
      auVar124 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                              ,auVar129);
      auVar69 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar166);
      auVar124 = vblendps_avx(auVar69,auVar124,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar23) = auVar124;
      auVar159 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar124 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                              ,auVar129);
      auVar129 = vshufpd_avx(auVar166,auVar166,1);
      auVar129 = vblendps_avx(auVar124,auVar129,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar23) = auVar129;
      auVar39 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar64 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar124 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar36);
      auVar129 = vpermpd_avx2(auVar94,0xff);
      auVar129 = vblendpd_avx(auVar124,auVar129,1);
      auVar129 = vblendps_avx(auVar129,auVar143,0xe0);
      auVar95._0_8_ =
           dVar62 * (((double)local_358._0_8_ * dVar25 - dVar190 * local_338) +
                    local_238 * dVar63 + local_318);
      auVar95._8_8_ =
           dVar62 * (((double)local_358._8_8_ * dVar50 - dVar199 * dStack_330) +
                    dStack_230 * dVar83 + dStack_310);
      auVar95._16_8_ =
           dVar62 * ((dStack_348 * dVar55 - dVar202 * dStack_328) + dStack_228 * dVar85 + dStack_308
                    );
      auVar95._24_8_ =
           dVar62 * ((dStack_340 * dVar60 - dVar205 * dStack_320) + dStack_220 * dVar86 + dStack_300
                    );
      auVar144._0_8_ =
           dVar62 * (((double)local_358._0_8_ * dVar26 - dVar233 * local_338) +
                    local_238 * dVar222 + (double)local_2f8._0_8_);
      auVar144._8_8_ =
           dVar62 * (((double)local_358._8_8_ * dVar51 - dVar237 * dStack_330) +
                    dStack_230 * dVar228 + stack0xfffffffffffffd10);
      auVar144._16_8_ =
           dVar62 * ((dStack_348 * dVar56 - dVar238 * dStack_328) +
                    dStack_228 * dVar230 + uStack_2e8);
      auVar144._24_8_ =
           dVar62 * ((dStack_340 * dVar61 - dVar241 * dStack_320) +
                    dStack_220 * dVar232 + uStack_2e0);
      auVar157._0_8_ =
           local_278 *
           (local_238 * dVar190 + dVar200 + (local_338 * dVar63 - auVar223._0_8_ * dVar25));
      auVar157._8_8_ =
           dStack_270 *
           (dStack_230 * dVar199 + dVar203 + (dStack_330 * dVar83 - auVar223._0_8_ * dVar50));
      auVar157._16_8_ =
           dStack_268 *
           (dStack_228 * dVar202 + dVar207 + (dStack_328 * dVar85 - auVar223._0_8_ * dVar55));
      auVar157._24_8_ =
           dStack_260 *
           (dStack_220 * dVar205 + dVar216 + (dStack_320 * dVar86 - auVar223._0_8_ * dVar60));
      auVar128._0_8_ =
           local_278 *
           (local_238 * dVar233 + local_1d8 + (local_338 * dVar222 - auVar223._0_8_ * dVar26));
      auVar128._8_8_ =
           dStack_270 *
           (dStack_230 * dVar237 + dStack_1d0 + (dStack_330 * dVar228 - auVar223._0_8_ * dVar51));
      auVar128._16_8_ =
           dStack_268 *
           (dStack_228 * dVar238 + dStack_1c8 + (dStack_328 * dVar230 - auVar223._0_8_ * dVar56));
      auVar128._24_8_ =
           dStack_260 *
           (dStack_220 * dVar241 + dStack_1c0 + (dStack_320 * dVar232 - auVar223._0_8_ * dVar61));
      auVar170._0_8_ =
           local_258 *
           (local_238 * dVar25 + dVar118 +
           (auVar223._0_8_ * dVar190 - (double)local_358._0_8_ * dVar63));
      auVar170._8_8_ =
           dStack_250 *
           (dStack_230 * dVar50 + dVar6 +
           (auVar223._0_8_ * dVar199 - (double)local_358._8_8_ * dVar83));
      auVar170._16_8_ =
           dStack_248 *
           (dStack_228 * dVar55 + dVar29 + (auVar223._0_8_ * dVar202 - dStack_348 * dVar85));
      auVar170._24_8_ =
           dStack_240 *
           (dStack_220 * dVar60 + dVar58 + (auVar223._0_8_ * dVar205 - dStack_340 * dVar86));
      auVar9 = vcvtpd2ps_avx(auVar144);
      auVar66._0_8_ =
           local_258 *
           ((auVar223._0_8_ * dVar233 - dVar222 * (double)local_358._0_8_) +
           local_238 * dVar26 + dVar116);
      auVar66._8_8_ =
           dStack_250 *
           ((auVar223._0_8_ * dVar237 - dVar228 * (double)local_358._8_8_) +
           dStack_230 * dVar51 + dVar117);
      auVar66._16_8_ =
           dStack_248 *
           ((auVar223._0_8_ * dVar238 - dVar230 * dStack_348) + dStack_228 * dVar56 + dVar119);
      auVar66._24_8_ =
           dStack_240 *
           ((auVar223._0_8_ * dVar241 - dVar232 * dStack_340) + dStack_220 * dVar61 + dVar120);
      auVar153 = vcvtpd2ps_avx(auVar95);
      auVar96._16_16_ = auVar153;
      auVar96._0_16_ = auVar9;
      auVar153 = vcvtpd2ps_avx(auVar128);
      auVar122 = vcvtpd2ps_avx(auVar157);
      auVar33 = vcvtpd2ps_avx(auVar66);
      auVar123 = vcvtpd2ps_avx(auVar170);
      auVar158._16_16_ = auVar122;
      auVar158._0_16_ = auVar153;
      auVar129 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                              ,auVar129);
      *(undefined1 (*) [32])(param_1 + lVar23) = auVar129;
      auVar37._16_16_ = auVar123;
      auVar37._0_16_ = auVar33;
      auVar67._16_16_ = auVar153;
      auVar67._0_16_ = auVar9;
      auVar166 = vshufpd_avx(auVar96,auVar67,2);
      auVar124 = vpermps_avx2(auVar99,auVar37);
      auVar129 = vpermpd_avx2(auVar158,0xe9);
      auVar129 = vblendps_avx(auVar124,auVar129,7);
      auVar124 = vpermps_avx2(auVar171,auVar166);
      auVar69 = vpermps_avx2(auVar160,auVar129);
      auVar124 = vblendps_avx(auVar124,auVar69,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar23) = auVar124;
      auVar124 = vpermps_avx2(auVar159,auVar129);
      auVar129 = vshufpd_avx(auVar166,auVar166,1);
      auVar129 = vblendps_avx(auVar124,auVar129,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar23) = auVar129;
      auVar124 = vpermps_avx2(auVar64,auVar158);
      auVar129 = vpermpd_avx2(auVar96,0xff);
      auVar129 = vblendpd_avx(auVar124,auVar129,1);
      auVar129 = vblendps_avx(auVar129,auVar37,0xe0);
      auVar129 = vpermps_avx2(auVar39,auVar129);
      *(undefined1 (*) [32])(param_2 + lVar23) = auVar129;
      lVar23 = lVar23 + 0x60;
      uVar21 = uVar21 + 8;
    } while ((int)uVar21 < (int)(uVar18 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar21) {
      return;
    }
  }
  auVar38._4_4_ = uVar21;
  auVar38._0_4_ = uVar21;
  auVar38._8_4_ = uVar21;
  auVar38._12_4_ = uVar21;
  auVar38._16_4_ = uVar21;
  auVar38._20_4_ = uVar21;
  auVar38._24_4_ = uVar21;
  auVar38._28_4_ = uVar21;
  auVar129 = vpor_avx2(auVar38,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar68._4_4_ = param_6;
  auVar68._0_4_ = param_6;
  auVar68._8_4_ = param_6;
  auVar68._12_4_ = param_6;
  auVar68._16_4_ = param_6;
  auVar68._20_4_ = param_6;
  auVar68._24_4_ = param_6;
  auVar68._28_4_ = param_6;
  auVar129 = vpcmpgtd_avx2(auVar68,auVar129);
  uVar14 = (ulonglong)uVar21;
  lVar23 = uVar14 * 3;
  pauVar19 = (undefined1 (*) [32])(param_1 + uVar14 * 0xc);
  uVar16 = vmovmskps_avx(auVar129);
  if (uVar16 == 0xff) {
    auVar129 = pauVar19[1];
    auVar124 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                            auVar129);
    auVar166 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *pauVar19);
    auVar124 = vblendps_avx(auVar166,auVar124,0x88);
    auVar166 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                            auVar129);
    auVar69 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar19[2]);
    auVar166 = vblendps_avx(auVar69,auVar166,0x13);
    auVar97._16_16_ = auVar166._0_16_;
    auVar97._0_16_ = auVar124._0_16_;
    auVar39 = vperm2f128_avx(auVar124,auVar166,0x31);
    auVar129 = vblendps_avx(auVar129,*pauVar19,0x24);
    auVar129 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar129);
    auVar124 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                            pauVar19[2]);
    auVar69 = vblendps_avx(auVar129,auVar124,0xe0);
    auVar129 = *(undefined1 (*) [32])(param_2 + uVar14 * 0xc);
    auVar124 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar14 * 0xc);
    auVar166 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar14 * 0xc);
    auVar159 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                            auVar124);
    auVar64 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           auVar129);
    auVar159 = vblendps_avx(auVar64,auVar159,0x88);
    auVar64 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar124);
    auVar154 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            auVar166);
    auVar64 = vblendps_avx(auVar154,auVar64,0x13);
    auVar145._16_16_ = auVar64._0_16_;
    auVar145._0_16_ = auVar159._0_16_;
    auVar159 = vperm2f128_avx(auVar159,auVar64,0x31);
    auVar129 = vblendps_avx(auVar124,auVar129,0x24);
    auVar129 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar129);
    auVar124 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                            auVar166);
    auVar129 = vblendps_avx(auVar129,auVar124,0xe0);
  }
  else {
    auVar97 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar129);
    auVar39 = vgatherdps(ZEXT832(0),auVar129);
    auVar69 = vgatherdps(ZEXT832(0),auVar129);
    auVar145 = vgatherdps(ZEXT832(0),auVar129);
    auVar159 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar129);
    auVar129 = vgatherdps(ZEXT832(0) << 0x40,auVar129);
  }
  pauVar22 = (undefined1 (*) [32])(param_2 + uVar14 * 0xc);
  auVar124 = vcvtps2pd_avx(auVar97._16_16_);
  auVar166 = vcvtps2pd_avx(auVar97._0_16_);
  dVar82 = *param_4;
  auVar105._0_8_ = param_5 * auVar166._0_8_ + dVar82;
  auVar105._8_8_ = param_5 * auVar166._8_8_ + dVar82;
  auVar105._16_8_ = param_5 * auVar166._16_8_ + dVar82;
  auVar105._24_8_ = param_5 * auVar166._24_8_ + dVar82;
  auVar174._0_8_ = param_5 * auVar124._0_8_ + dVar82;
  auVar174._8_8_ = param_5 * auVar124._8_8_ + dVar82;
  auVar174._16_8_ = param_5 * auVar124._16_8_ + dVar82;
  auVar174._24_8_ = param_5 * auVar124._24_8_ + dVar82;
  auVar124 = vcvtps2pd_avx(auVar39._16_16_);
  auVar166 = vcvtps2pd_avx(auVar39._0_16_);
  dVar82 = param_4[1];
  auVar185._0_8_ = param_5 * auVar166._0_8_ + dVar82;
  auVar185._8_8_ = param_5 * auVar166._8_8_ + dVar82;
  auVar185._16_8_ = param_5 * auVar166._16_8_ + dVar82;
  auVar185._24_8_ = param_5 * auVar166._24_8_ + dVar82;
  auVar194._0_8_ = param_5 * auVar124._0_8_ + dVar82;
  auVar194._8_8_ = param_5 * auVar124._8_8_ + dVar82;
  auVar194._16_8_ = param_5 * auVar124._16_8_ + dVar82;
  auVar194._24_8_ = param_5 * auVar124._24_8_ + dVar82;
  auVar124 = vcvtps2pd_avx(auVar69._16_16_);
  auVar166 = vcvtps2pd_avx(auVar69._0_16_);
  dVar82 = param_4[2];
  auVar75._0_8_ = param_5 * auVar166._0_8_ + dVar82;
  auVar75._8_8_ = param_5 * auVar166._8_8_ + dVar82;
  auVar75._16_8_ = param_5 * auVar166._16_8_ + dVar82;
  auVar75._24_8_ = param_5 * auVar166._24_8_ + dVar82;
  auVar224._0_8_ = param_5 * auVar124._0_8_ + dVar82;
  auVar224._8_8_ = param_5 * auVar124._8_8_ + dVar82;
  auVar224._16_8_ = param_5 * auVar124._16_8_ + dVar82;
  auVar224._24_8_ = param_5 * auVar124._24_8_ + dVar82;
  auVar32._0_4_ = __real_80000000 ^ auVar145._0_4_;
  auVar32._4_4_ = __real_80000000 ^ auVar145._4_4_;
  auVar32._8_4_ = __real_80000000 ^ auVar145._8_4_;
  auVar32._12_4_ = __real_80000000 ^ auVar145._12_4_;
  auVar44._16_4_ = __real_80000000 ^ auVar145._16_4_;
  auVar44._0_16_ = auVar32;
  auVar44._20_4_ = __real_80000000 ^ auVar145._20_4_;
  auVar44._24_4_ = __real_80000000 ^ auVar145._24_4_;
  auVar44._28_4_ = __real_80000000 ^ auVar145._28_4_;
  local_2f8._4_4_ = __real_80000000 ^ auVar159._4_4_;
  local_2f8._0_4_ = __real_80000000 ^ auVar159._0_4_;
  local_2f8._8_4_ = __real_80000000 ^ auVar159._8_4_;
  uStack_2ec = __real_80000000 ^ auVar159._12_4_;
  uStack_2e8._0_4_ = __real_80000000 ^ auVar159._16_4_;
  uStack_2e8._4_4_ = __real_80000000 ^ auVar159._20_4_;
  uStack_2e0._0_4_ = __real_80000000 ^ auVar159._24_4_;
  uStack_2e0._4_4_ = __real_80000000 ^ auVar159._28_4_;
  local_418._4_4_ = __real_80000000 ^ auVar129._4_4_;
  local_418._0_4_ = __real_80000000 ^ auVar129._0_4_;
  local_418._8_4_ = __real_80000000 ^ auVar129._8_4_;
  local_418._12_4_ = __real_80000000 ^ auVar129._12_4_;
  uStack_408 = __real_80000000 ^ auVar129._16_4_;
  uStack_404 = __real_80000000 ^ auVar129._20_4_;
  uStack_400 = __real_80000000 ^ auVar129._24_4_;
  uStack_3fc = __real_80000000 ^ auVar129._28_4_;
  auVar132._8_8_ = dVar1;
  auVar132._0_8_ = dVar1;
  auVar132._16_8_ = dVar1;
  auVar132._24_8_ = dVar1;
  auVar129 = vsubpd_avx(auVar174,auVar132);
  auVar69 = vsubpd_avx(auVar105,auVar132);
  auVar106._8_8_ = local_1f8._8_8_;
  auVar106._0_8_ = local_1f8._8_8_;
  auVar106._16_8_ = local_1f8._8_8_;
  auVar106._24_8_ = local_1f8._8_8_;
  auVar124 = vsubpd_avx(auVar194,auVar106);
  auVar159 = vsubpd_avx(auVar185,auVar106);
  auVar107._8_8_ = dVar2;
  auVar107._0_8_ = dVar2;
  auVar107._16_8_ = dVar2;
  auVar107._24_8_ = dVar2;
  auVar166 = vsubpd_avx(auVar224,auVar107);
  auVar64 = vsubpd_avx(auVar75,auVar107);
  dVar1 = auVar129._0_8_;
  dVar87 = auVar129._8_8_;
  dVar139 = auVar129._16_8_;
  dVar7 = auVar129._24_8_;
  dVar119 = auVar124._0_8_;
  dVar113 = auVar223._0_8_ * dVar119 - (double)local_358._0_8_ * dVar1;
  dVar190 = auVar124._8_8_;
  dVar114 = auVar223._0_8_ * dVar190 - (double)local_358._8_8_ * dVar87;
  dVar201 = auVar124._16_8_;
  dVar115 = auVar223._0_8_ * dVar201 - dStack_348 * dVar139;
  dVar205 = auVar124._24_8_;
  dVar116 = auVar223._0_8_ * dVar205 - dStack_340 * dVar7;
  dVar179 = auVar166._0_8_;
  dVar26 = (double)local_358._0_8_ * dVar179 - local_338 * dVar119;
  dVar237 = auVar166._8_8_;
  dVar54 = (double)local_358._8_8_ * dVar237 - dStack_330 * dVar190;
  dVar267 = auVar166._16_8_;
  dVar60 = dStack_348 * dVar267 - dStack_328 * dVar201;
  dVar238 = auVar166._24_8_;
  dVar85 = dStack_340 * dVar238 - dStack_320 * dVar205;
  dVar120 = local_338 * dVar1 - auVar223._0_8_ * dVar179;
  dVar198 = dStack_330 * dVar87 - auVar223._0_8_ * dVar237;
  dVar202 = dStack_328 * dVar139 - auVar223._0_8_ * dVar267;
  dVar208 = dStack_320 * dVar7 - auVar223._0_8_ * dVar238;
  dVar26 = dVar26 + dVar26;
  dVar54 = dVar54 + dVar54;
  dVar60 = dVar60 + dVar60;
  dVar85 = dVar85 + dVar85;
  dVar120 = dVar120 + dVar120;
  dVar198 = dVar198 + dVar198;
  dVar202 = dVar202 + dVar202;
  dVar208 = dVar208 + dVar208;
  dVar113 = dVar113 + dVar113;
  dVar114 = dVar114 + dVar114;
  dVar115 = dVar115 + dVar115;
  dVar116 = dVar116 + dVar116;
  auVar129 = vcvtps2pd_avx(auVar44._16_16_);
  auVar124 = vcvtps2pd_avx(auVar32);
  auVar166 = vcvtps2pd_avx(local_2f8._16_16_);
  dVar2 = auVar69._0_8_;
  dVar112 = auVar69._8_8_;
  dVar140 = auVar69._16_8_;
  dVar8 = auVar69._24_8_;
  dVar261 = auVar159._0_8_;
  dVar29 = auVar223._0_8_ * dVar261 - (double)local_358._0_8_ * dVar2;
  dVar263 = auVar159._8_8_;
  dVar52 = auVar223._0_8_ * dVar263 - (double)local_358._8_8_ * dVar112;
  dVar265 = auVar159._16_8_;
  dVar57 = auVar223._0_8_ * dVar265 - dStack_348 * dVar140;
  dVar165 = auVar159._24_8_;
  dVar24 = auVar223._0_8_ * dVar165 - dStack_340 * dVar8;
  dVar270 = auVar64._0_8_;
  dVar49 = (double)local_358._0_8_ * dVar270 - local_338 * dVar261;
  dVar271 = auVar64._8_8_;
  dVar55 = (double)local_358._8_8_ * dVar271 - dStack_330 * dVar263;
  dVar272 = auVar64._16_8_;
  dVar61 = dStack_348 * dVar272 - dStack_328 * dVar265;
  dVar206 = auVar64._24_8_;
  dVar86 = dStack_340 * dVar206 - dStack_320 * dVar165;
  dVar227 = local_338 * dVar2 - auVar223._0_8_ * dVar270;
  dVar229 = dStack_330 * dVar112 - auVar223._0_8_ * dVar271;
  dVar231 = dStack_328 * dVar140 - auVar223._0_8_ * dVar272;
  dVar117 = dStack_320 * dVar8 - auVar223._0_8_ * dVar206;
  dVar49 = dVar49 + dVar49;
  dVar55 = dVar55 + dVar55;
  dVar61 = dVar61 + dVar61;
  dVar86 = dVar86 + dVar86;
  dVar227 = dVar227 + dVar227;
  dVar229 = dVar229 + dVar229;
  dVar231 = dVar231 + dVar231;
  dVar117 = dVar117 + dVar117;
  dVar29 = dVar29 + dVar29;
  dVar52 = dVar52 + dVar52;
  dVar57 = dVar57 + dVar57;
  dVar24 = dVar24 + dVar24;
  auVar69 = vcvtps2pd_avx(_local_2f8);
  auVar159 = vcvtps2pd_avx(local_418._16_16_);
  auVar64 = vcvtps2pd_avx(local_418);
  dVar82 = auVar129._0_8_;
  dVar118 = auVar129._8_8_;
  dVar5 = auVar129._16_8_;
  dVar27 = auVar129._24_8_;
  dVar239 = auVar166._0_8_;
  dVar50 = auVar223._0_8_ * dVar239 - (double)local_358._0_8_ * dVar82;
  dVar240 = auVar166._8_8_;
  dVar56 = auVar223._0_8_ * dVar240 - (double)local_358._8_8_ * dVar118;
  dVar242 = auVar166._16_8_;
  dVar63 = auVar223._0_8_ * dVar242 - dStack_348 * dVar5;
  dVar243 = auVar166._24_8_;
  dVar88 = auVar223._0_8_ * dVar243 - dStack_340 * dVar27;
  dVar84 = auVar124._0_8_;
  dVar138 = auVar124._8_8_;
  dVar6 = auVar124._16_8_;
  dVar28 = auVar124._24_8_;
  dVar217 = auVar69._0_8_;
  dVar228 = auVar223._0_8_ * dVar217 - (double)local_358._0_8_ * dVar84;
  dVar219 = auVar69._8_8_;
  dVar230 = auVar223._0_8_ * dVar219 - (double)local_358._8_8_ * dVar138;
  dVar259 = auVar69._16_8_;
  dVar232 = auVar223._0_8_ * dVar259 - dStack_348 * dVar6;
  dVar222 = auVar69._24_8_;
  dVar233 = auVar223._0_8_ * dVar222 - dStack_340 * dVar28;
  dVar209 = auVar159._0_8_;
  dVar189 = (double)local_358._0_8_ * dVar209 - dVar239 * local_338;
  dVar216 = auVar159._8_8_;
  dVar199 = (double)local_358._8_8_ * dVar216 - dVar240 * dStack_330;
  dVar218 = auVar159._16_8_;
  dVar204 = dStack_348 * dVar218 - dVar242 * dStack_328;
  dVar220 = auVar159._24_8_;
  dVar215 = dStack_340 * dVar220 - dVar243 * dStack_320;
  dVar244 = auVar64._0_8_;
  dVar241 = (double)local_358._0_8_ * dVar244 - local_338 * dVar217;
  dVar245 = auVar64._8_8_;
  dVar200 = (double)local_358._8_8_ * dVar245 - dStack_330 * dVar219;
  dVar249 = auVar64._16_8_;
  dVar203 = dStack_348 * dVar249 - dStack_328 * dVar259;
  dVar250 = auVar64._24_8_;
  dVar207 = dStack_340 * dVar250 - dStack_320 * dVar222;
  dVar51 = local_338 * dVar82 - auVar223._0_8_ * dVar209;
  dVar59 = dStack_330 * dVar118 - auVar223._0_8_ * dVar216;
  dVar83 = dStack_328 * dVar5 - auVar223._0_8_ * dVar218;
  dVar221 = dStack_320 * dVar27 - auVar223._0_8_ * dVar220;
  dVar30 = local_338 * dVar84 - auVar223._0_8_ * dVar244;
  dVar53 = dStack_330 * dVar138 - auVar223._0_8_ * dVar245;
  dVar58 = dStack_328 * dVar6 - auVar223._0_8_ * dVar249;
  dVar25 = dStack_320 * dVar28 - auVar223._0_8_ * dVar250;
  dVar241 = dVar241 + dVar241;
  dVar200 = dVar200 + dVar200;
  dVar203 = dVar203 + dVar203;
  dVar207 = dVar207 + dVar207;
  dVar189 = dVar189 + dVar189;
  dVar199 = dVar199 + dVar199;
  dVar204 = dVar204 + dVar204;
  dVar215 = dVar215 + dVar215;
  dVar30 = dVar30 + dVar30;
  dVar53 = dVar53 + dVar53;
  dVar58 = dVar58 + dVar58;
  dVar25 = dVar25 + dVar25;
  dVar51 = dVar51 + dVar51;
  dVar59 = dVar59 + dVar59;
  dVar83 = dVar83 + dVar83;
  dVar221 = dVar221 + dVar221;
  dVar228 = dVar228 + dVar228;
  dVar230 = dVar230 + dVar230;
  dVar232 = dVar232 + dVar232;
  dVar233 = dVar233 + dVar233;
  dVar50 = dVar50 + dVar50;
  dVar56 = dVar56 + dVar56;
  dVar63 = dVar63 + dVar63;
  dVar88 = dVar88 + dVar88;
  auVar212._0_8_ =
       (((double)local_358._0_8_ * dVar113 - local_338 * dVar120) + local_238 * dVar26 + dVar1) *
       dVar62;
  auVar212._8_8_ =
       (((double)local_358._8_8_ * dVar114 - dStack_330 * dVar198) + dStack_230 * dVar54 + dVar87) *
       dVar62;
  auVar212._16_8_ =
       ((dStack_348 * dVar115 - dStack_328 * dVar202) + dStack_228 * dVar60 + dVar139) * dVar62;
  auVar212._24_8_ =
       ((dStack_340 * dVar116 - dStack_320 * dVar208) + dStack_220 * dVar85 + dVar7) * dVar62;
  auVar234._0_8_ =
       (((double)local_358._0_8_ * dVar29 - local_338 * dVar227) + local_238 * dVar49 + dVar2) *
       dVar62;
  auVar234._8_8_ =
       (((double)local_358._8_8_ * dVar52 - dStack_330 * dVar229) + dStack_230 * dVar55 + dVar112) *
       dVar62;
  auVar234._16_8_ =
       ((dStack_348 * dVar57 - dStack_328 * dVar231) + dStack_228 * dVar61 + dVar140) * dVar62;
  auVar234._24_8_ =
       ((dStack_340 * dVar24 - dStack_320 * dVar117) + dStack_220 * dVar86 + dVar8) * dVar62;
  auVar247._0_8_ =
       dVar62 * (((double)local_358._0_8_ * dVar50 - dVar51 * local_338) +
                local_238 * dVar189 + dVar82);
  auVar247._8_8_ =
       dVar62 * (((double)local_358._8_8_ * dVar56 - dVar59 * dStack_330) +
                dStack_230 * dVar199 + dVar118);
  auVar247._16_8_ =
       dVar62 * ((dStack_348 * dVar63 - dVar83 * dStack_328) + dStack_228 * dVar204 + dVar5);
  auVar247._24_8_ =
       dVar62 * ((dStack_340 * dVar88 - dVar221 * dStack_320) + dStack_220 * dVar215 + dVar27);
  auVar76._0_8_ =
       dVar62 * (((double)local_358._0_8_ * dVar228 - local_338 * dVar30) +
                local_238 * dVar241 + dVar84);
  auVar76._8_8_ =
       dVar62 * (((double)local_358._8_8_ * dVar230 - dStack_330 * dVar53) +
                dStack_230 * dVar200 + dVar138);
  auVar76._16_8_ =
       dVar62 * ((dStack_348 * dVar232 - dStack_328 * dVar58) + dStack_228 * dVar203 + dVar6);
  auVar76._24_8_ =
       dVar62 * ((dStack_340 * dVar233 - dStack_320 * dVar25) + dStack_220 * dVar207 + dVar28);
  auVar151._0_8_ =
       local_278 * ((local_338 * dVar26 - auVar223._0_8_ * dVar113) + local_238 * dVar120 + dVar119)
  ;
  auVar151._8_8_ =
       dStack_270 *
       ((dStack_330 * dVar54 - auVar223._0_8_ * dVar114) + dStack_230 * dVar198 + dVar190);
  auVar151._16_8_ =
       dStack_268 *
       ((dStack_328 * dVar60 - auVar223._0_8_ * dVar115) + dStack_228 * dVar202 + dVar201);
  auVar151._24_8_ =
       dStack_260 *
       ((dStack_320 * dVar85 - auVar223._0_8_ * dVar116) + dStack_220 * dVar208 + dVar205);
  auVar175._0_8_ =
       local_278 * ((local_338 * dVar49 - auVar223._0_8_ * dVar29) + local_238 * dVar227 + dVar261);
  auVar175._8_8_ =
       dStack_270 *
       ((dStack_330 * dVar55 - auVar223._0_8_ * dVar52) + dStack_230 * dVar229 + dVar263);
  auVar175._16_8_ =
       dStack_268 *
       ((dStack_328 * dVar61 - auVar223._0_8_ * dVar57) + dStack_228 * dVar231 + dVar265);
  auVar175._24_8_ =
       dStack_260 *
       ((dStack_320 * dVar86 - auVar223._0_8_ * dVar24) + dStack_220 * dVar117 + dVar165);
  auVar186._0_8_ =
       local_278 * ((local_338 * dVar189 - auVar223._0_8_ * dVar50) + local_238 * dVar51 + dVar239);
  auVar186._8_8_ =
       dStack_270 *
       ((dStack_330 * dVar199 - auVar223._0_8_ * dVar56) + dStack_230 * dVar59 + dVar240);
  auVar186._16_8_ =
       dStack_268 *
       ((dStack_328 * dVar204 - auVar223._0_8_ * dVar63) + dStack_228 * dVar83 + dVar242);
  auVar186._24_8_ =
       dStack_260 *
       ((dStack_320 * dVar215 - auVar223._0_8_ * dVar88) + dStack_220 * dVar221 + dVar243);
  auVar108._0_8_ =
       local_278 * ((local_338 * dVar241 - auVar223._0_8_ * dVar228) + local_238 * dVar30 + dVar217)
  ;
  auVar108._8_8_ =
       dStack_270 *
       ((dStack_330 * dVar200 - auVar223._0_8_ * dVar230) + dStack_230 * dVar53 + dVar219);
  auVar108._16_8_ =
       dStack_268 *
       ((dStack_328 * dVar203 - auVar223._0_8_ * dVar232) + dStack_228 * dVar58 + dVar259);
  auVar108._24_8_ =
       dStack_260 *
       ((dStack_320 * dVar207 - auVar223._0_8_ * dVar233) + dStack_220 * dVar25 + dVar222);
  auVar133._0_8_ =
       local_258 *
       ((auVar223._0_8_ * dVar120 - (double)local_358._0_8_ * dVar26) +
       local_238 * dVar113 + dVar179);
  auVar133._8_8_ =
       dStack_250 *
       ((auVar223._0_8_ * dVar198 - (double)local_358._8_8_ * dVar54) +
       dStack_230 * dVar114 + dVar237);
  auVar133._16_8_ =
       dStack_248 *
       ((auVar223._0_8_ * dVar202 - dStack_348 * dVar60) + dStack_228 * dVar115 + dVar267);
  auVar133._24_8_ =
       dStack_240 *
       ((auVar223._0_8_ * dVar208 - dStack_340 * dVar85) + dStack_220 * dVar116 + dVar238);
  auVar195._0_8_ =
       local_258 *
       ((auVar223._0_8_ * dVar227 - (double)local_358._0_8_ * dVar49) + local_238 * dVar29 + dVar270
       );
  auVar195._8_8_ =
       dStack_250 *
       ((auVar223._0_8_ * dVar229 - (double)local_358._8_8_ * dVar55) +
       dStack_230 * dVar52 + dVar271);
  auVar195._16_8_ =
       dStack_248 *
       ((auVar223._0_8_ * dVar231 - dStack_348 * dVar61) + dStack_228 * dVar57 + dVar272);
  auVar195._24_8_ =
       dStack_240 *
       ((auVar223._0_8_ * dVar117 - dStack_340 * dVar86) + dStack_220 * dVar24 + dVar206);
  auVar45._0_8_ =
       local_258 *
       (local_238 * dVar50 + dVar209 + (auVar223._0_8_ * dVar51 - (double)local_358._0_8_ * dVar189)
       );
  auVar45._8_8_ =
       dStack_250 *
       (dStack_230 * dVar56 + dVar216 +
       (auVar223._0_8_ * dVar59 - (double)local_358._8_8_ * dVar199));
  auVar45._16_8_ =
       dStack_248 *
       (dStack_228 * dVar63 + dVar218 + (auVar223._0_8_ * dVar83 - dStack_348 * dVar204));
  auVar45._24_8_ =
       dStack_240 *
       (dStack_220 * dVar88 + dVar220 + (auVar223._0_8_ * dVar221 - dStack_340 * dVar215));
  auVar9 = vcvtpd2ps_avx(auVar234);
  auVar153 = vcvtpd2ps_avx(auVar212);
  auVar235._0_8_ =
       local_258 *
       (dVar228 * local_238 + dVar244 +
       (auVar223._0_8_ * dVar30 - (double)local_358._0_8_ * dVar241));
  auVar235._8_8_ =
       dStack_250 *
       (dVar230 * dStack_230 + dVar245 +
       (auVar223._0_8_ * dVar53 - (double)local_358._8_8_ * dVar200));
  auVar235._16_8_ =
       dStack_248 *
       (dVar232 * dStack_228 + dVar249 + (auVar223._0_8_ * dVar58 - dStack_348 * dVar203));
  auVar235._24_8_ =
       dStack_240 *
       (dVar233 * dStack_220 + dVar250 + (auVar223._0_8_ * dVar25 - dStack_340 * dVar207));
  auVar164._16_16_ = auVar153;
  auVar164._0_16_ = auVar9;
  auVar122 = vcvtpd2ps_avx(auVar175);
  auVar33 = vcvtpd2ps_avx(auVar151);
  auVar123 = vcvtpd2ps_avx(auVar195);
  auVar152._16_16_ = auVar33;
  auVar152._0_16_ = auVar122;
  auVar268 = vcvtpd2ps_avx(auVar133);
  auVar134._16_16_ = auVar268;
  auVar134._0_16_ = auVar123;
  auVar121 = vcvtpd2ps_avx(auVar76);
  auVar89 = vcvtpd2ps_avx(auVar247);
  auVar3 = vcvtpd2ps_avx(auVar108);
  auVar31 = vcvtpd2ps_avx(auVar186);
  auVar109._16_16_ = auVar89;
  auVar109._0_16_ = auVar121;
  auVar77._16_16_ = auVar31;
  auVar77._0_16_ = auVar3;
  auVar32 = vcvtpd2ps_avx(auVar235);
  auVar4 = vcvtpd2ps_avx(auVar45);
  auVar46._16_16_ = auVar4;
  auVar46._0_16_ = auVar32;
  cVar15 = (char)uVar16;
  if (cVar15 == -1) {
LAB_140cbb9eb:
    auVar64 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
    auVar159 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
    auVar69 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
    auVar178._16_16_ = auVar152._0_16_;
    auVar178._0_16_ = auVar164._0_16_;
    auVar124 = vshufpd_avx(auVar164,auVar178,2);
    auVar166 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                            auVar134);
    auVar129 = vpermpd_avx2(auVar152,0xe9);
    auVar129 = vblendps_avx(auVar166,auVar129,7);
    auVar166 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003,
                            auVar129);
    auVar124 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                            auVar124);
    auVar124 = vblendps_avx(auVar124,auVar166,0xa4);
    *pauVar19 = auVar124;
    auVar39 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
    auVar124 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                            auVar129);
    auVar129 = vshufpd_avx(auVar164,auVar164,1);
    auVar129 = vblendps_avx(auVar124,auVar129,0x92);
    pauVar19[1] = auVar129;
    auVar223 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
    auVar154 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
    auVar124 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001,
                            auVar152);
    auVar129 = vpermpd_avx2(auVar164,0xff);
    auVar129 = vblendpd_avx(auVar124,auVar129,1);
    auVar129 = vblendps_avx(auVar129,auVar134,0xe0);
    auVar129 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                            auVar129);
    pauVar19[2] = auVar129;
    auVar137._16_16_ = auVar77._0_16_;
    auVar137._0_16_ = auVar109._0_16_;
    auVar124 = vshufpd_avx(auVar109,auVar137,2);
    auVar166 = vpermps_avx2(auVar69,auVar46);
    auVar129 = vpermpd_avx2(auVar77,0xe9);
    auVar129 = vblendps_avx(auVar166,auVar129,7);
    auVar166 = vpermps_avx2(auVar159,auVar129);
    auVar124 = vpermps_avx2(auVar64,auVar124);
    auVar124 = vblendps_avx(auVar124,auVar166,0xa4);
    *pauVar22 = auVar124;
    auVar124 = vpermps_avx2(auVar39,auVar129);
    auVar129 = vshufpd_avx(auVar109,auVar109,1);
    auVar129 = vblendps_avx(auVar124,auVar129,0x92);
    *(undefined1 (*) [32])(param_2 + 0x20 + lVar23 * 4) = auVar129;
    auVar124 = vpermps_avx2(auVar154,auVar77);
    auVar129 = vpermpd_avx2(auVar109,0xff);
    auVar129 = vblendpd_avx(auVar124,auVar129,1);
    auVar129 = vblendps_avx(auVar129,auVar46,0xe0);
    auVar129 = vpermps_avx2(auVar223,auVar129);
    *(undefined1 (*) [32])(param_2 + 0x40 + lVar23 * 4) = auVar129;
    return;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)*pauVar19 = auVar9._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar20 = vextractps_avx(auVar9,1);
    *(undefined4 *)(*pauVar19 + 0xc) = uVar20;
  }
  if ((uVar16 & 4) != 0) {
    uVar20 = vextractps_avx(auVar9,2);
    *(undefined4 *)(*pauVar19 + 0x18) = uVar20;
  }
  if ((uVar16 & 8) != 0) {
    uVar20 = vextractps_avx(auVar9,3);
    *(undefined4 *)(pauVar19[1] + 4) = uVar20;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(pauVar19[1] + 0x10) = auVar153._0_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    uVar20 = vextractps_avx(auVar153,1);
    *(undefined4 *)(pauVar19[1] + 0x1c) = uVar20;
  }
  if ((uVar16 & 0x40) != 0) {
    uVar20 = vextractps_avx(auVar153,2);
    *(undefined4 *)(pauVar19[2] + 8) = uVar20;
  }
  if (cVar15 < '\0') {
    uVar20 = vextractps_avx(auVar153,3);
    *(undefined4 *)(pauVar19[2] + 0x14) = uVar20;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(*pauVar19 + 4) = auVar122._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar20 = vextractps_avx(auVar122,1);
    *(undefined4 *)(*pauVar19 + 0x10) = uVar20;
  }
  if ((uVar16 & 4) != 0) {
    uVar20 = vextractps_avx(auVar122,2);
    *(undefined4 *)(*pauVar19 + 0x1c) = uVar20;
  }
  if ((uVar16 & 8) != 0) {
    uVar20 = vextractps_avx(auVar122,3);
    *(undefined4 *)(pauVar19[1] + 8) = uVar20;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(pauVar19[1] + 0x14) = auVar33._0_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    uVar20 = vextractps_avx(auVar33,1);
    *(undefined4 *)pauVar19[2] = uVar20;
  }
  if ((uVar16 & 0x40) != 0) {
    uVar20 = vextractps_avx(auVar33,2);
    *(undefined4 *)(pauVar19[2] + 0xc) = uVar20;
  }
  if (cVar15 < '\0') {
    uVar20 = vextractps_avx(auVar33,3);
    *(undefined4 *)(pauVar19[2] + 0x18) = uVar20;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(*pauVar19 + 8) = auVar123._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar20 = vextractps_avx(auVar123,1);
    *(undefined4 *)(*pauVar19 + 0x14) = uVar20;
  }
  if ((uVar16 & 4) != 0) {
    uVar20 = vextractps_avx(auVar123,2);
    *(undefined4 *)pauVar19[1] = uVar20;
  }
  if ((uVar16 & 8) != 0) {
    uVar20 = vextractps_avx(auVar123,3);
    *(undefined4 *)(pauVar19[1] + 0xc) = uVar20;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(pauVar19[1] + 0x18) = auVar268._0_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    uVar20 = vextractps_avx(auVar268,1);
    *(undefined4 *)(pauVar19[2] + 4) = uVar20;
  }
  if ((uVar16 & 0x40) != 0) {
    uVar20 = vextractps_avx(auVar268,2);
    *(undefined4 *)(pauVar19[2] + 0x10) = uVar20;
  }
  if (cVar15 < '\0') {
    uVar20 = vextractps_avx(auVar268,3);
    *(undefined4 *)(pauVar19[2] + 0x1c) = uVar20;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)*pauVar22 = auVar121._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar20 = vextractps_avx(auVar121,1);
    *(undefined4 *)(param_2 + 0xc + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 4) != 0) {
    uVar20 = vextractps_avx(auVar121,2);
    *(undefined4 *)(param_2 + 0x18 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 8) != 0) {
    uVar20 = vextractps_avx(auVar121,3);
    *(undefined4 *)(param_2 + 0x24 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_2 + 0x30 + uVar14 * 0xc) = auVar89._0_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    uVar20 = vextractps_avx(auVar89,1);
    *(undefined4 *)(param_2 + 0x3c + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 0x40) != 0) {
    uVar20 = vextractps_avx(auVar89,2);
    *(undefined4 *)(param_2 + 0x48 + uVar14 * 0xc) = uVar20;
  }
  if (cVar15 < '\0') {
    uVar20 = vextractps_avx(auVar89,3);
    *(undefined4 *)(param_2 + 0x54 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_2 + 4 + uVar14 * 0xc) = auVar3._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar20 = vextractps_avx(auVar3,1);
    *(undefined4 *)(param_2 + 0x10 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 4) != 0) {
    uVar20 = vextractps_avx(auVar3,2);
    *(undefined4 *)(param_2 + 0x1c + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 8) != 0) {
    uVar20 = vextractps_avx(auVar3,3);
    *(undefined4 *)(param_2 + 0x28 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_2 + 0x34 + uVar14 * 0xc) = auVar31._0_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    uVar20 = vextractps_avx(auVar31,1);
    *(undefined4 *)(param_2 + 0x40 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 0x40) != 0) {
    uVar20 = vextractps_avx(auVar31,2);
    *(undefined4 *)(param_2 + 0x4c + uVar14 * 0xc) = uVar20;
  }
  if (cVar15 < '\0') {
    uVar20 = vextractps_avx(auVar31,3);
    *(undefined4 *)(param_2 + 0x58 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_2 + 8 + uVar14 * 0xc) = auVar32._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar20 = vextractps_avx(auVar32,1);
    *(undefined4 *)(param_2 + 0x14 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 4) != 0) {
    uVar20 = vextractps_avx(auVar32,2);
    *(undefined4 *)(param_2 + 0x20 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 8) != 0) {
    uVar20 = vextractps_avx(auVar32,3);
    *(undefined4 *)(param_2 + 0x2c + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_2 + 0x38 + uVar14 * 0xc) = auVar4._0_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    uVar20 = vextractps_avx(auVar4,1);
    *(undefined4 *)(param_2 + 0x44 + uVar14 * 0xc) = uVar20;
  }
  if ((uVar16 & 0x40) != 0) {
    uVar20 = vextractps_avx(auVar4,2);
    *(undefined4 *)(param_2 + 0x50 + uVar14 * 0xc) = uVar20;
  }
joined_r0x000140cbb9dd:
  if (cVar15 < '\0') {
    uVar20 = vextractps_avx(auVar4,3);
    *(undefined4 *)(param_2 + 0x5c + lVar23 * 4) = uVar20;
  }
  return;
}

// GetClothingSimulationData_avx2 @ 140cbbf10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetClothingSimulationData_avx2
               (longlong param_1,longlong param_2,double *param_3,double *param_4,double param_5,
               uint param_6)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [24];
  undefined1 auVar17 [32];
  ulonglong uVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined1 (*pauVar24) [32];
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar42;
  double dVar47;
  undefined1 auVar31 [32];
  double dVar52;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar60 [16];
  double dVar57;
  double dVar59;
  double dVar72;
  double dVar74;
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  double dVar58;
  double dVar73;
  double dVar75;
  double dVar76;
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar83 [16];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  double dVar91;
  double dVar92;
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  double dVar93;
  double dVar94;
  double dVar95;
  undefined1 auVar96 [16];
  double dVar104;
  double dVar107;
  double dVar110;
  undefined1 auVar97 [32];
  double dVar105;
  double dVar106;
  double dVar108;
  double dVar109;
  double dVar111;
  double dVar112;
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  double dVar113;
  double dVar114;
  double dVar115;
  double dVar121;
  double dVar123;
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  double dVar122;
  double dVar124;
  double dVar126;
  double dVar127;
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  double dVar125;
  double dVar128;
  undefined1 auVar120 [32];
  double dVar129;
  double dVar139;
  double dVar140;
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  double dVar141;
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar142 [16];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [16];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  double dVar153;
  double dVar154;
  undefined1 auVar152 [32];
  double dVar155;
  double dVar159;
  double dVar160;
  undefined1 auVar156 [32];
  double dVar161;
  undefined1 auVar157 [32];
  double dVar162;
  undefined1 auVar158 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  double dVar166;
  double dVar169;
  double dVar170;
  undefined1 auVar167 [32];
  double dVar171;
  undefined1 auVar168 [32];
  double dVar173;
  double dVar174;
  double dVar175;
  undefined1 auVar172 [32];
  double dVar176;
  double dVar177;
  double dVar180;
  undefined1 auVar178 [16];
  double dVar181;
  double dVar182;
  double dVar183;
  double dVar184;
  double dVar185;
  double dVar186;
  double dVar187;
  double dVar190;
  double dVar191;
  undefined1 auVar188 [16];
  double dVar192;
  double dVar193;
  double dVar194;
  double dVar195;
  double local_3b8;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double dStack_368;
  double dStack_360;
  uint local_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  double local_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  undefined1 local_288 [16];
  double dStack_278;
  double dStack_270;
  undefined1 local_268 [16];
  double dStack_258;
  double dStack_250;
  double local_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double local_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
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
  undefined1 auVar69 [32];
  undefined1 auVar145 [32];
  undefined1 auVar179 [32];
  undefined1 auVar189 [32];
  
  uVar20 = __real_80000000;
  auVar167._0_8_ =
       *param_3 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  auVar167._8_8_ = param_3[1] * _UNK_150b543c8;
  auVar167._16_8_ = param_3[2] * _UNK_150b543d0;
  auVar167._24_8_ = param_3[3] * _UNK_150b543d8;
  auVar16 = *(undefined1 (*) [24])(param_3 + 8);
  auVar135._24_8_ = 0;
  auVar135._0_24_ = auVar16;
  dVar57 = auVar16._0_8_;
  auVar36._0_8_ = (double)((ulonglong)dVar57 & __real_7fffffffffffffff);
  dVar72 = auVar16._8_8_;
  auVar36._8_8_ = (double)((ulonglong)dVar72 & __real_7fffffffffffffff);
  dVar74 = auVar16._16_8_;
  auVar36._16_8_ = (double)((ulonglong)dVar74 & __real_7fffffffffffffff);
  auVar36._24_8_ = 0.0;
  auVar143._8_8_ = __real_3e45798ee2308c3a;
  auVar143._0_8_ = __real_3e45798ee2308c3a;
  auVar143._16_8_ = __real_3e45798ee2308c3a;
  auVar143._24_8_ = __real_3e45798ee2308c3a;
  auVar116 = vcmppd_avx(auVar36,auVar143,2);
  auVar14 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
  auVar116 = vpackssdw_avx2(auVar116,auVar14);
  auVar15 = vpermq_avx2(auVar116,0xd8);
  auVar116._8_8_ = __real_46c8a6e32246c99c;
  auVar116._0_8_ = __real_46c8a6e32246c99c;
  auVar116._16_8_ = __real_46c8a6e32246c99c;
  auVar116._24_8_ = __real_46c8a6e32246c99c;
  auVar116 = vcmppd_avx(auVar135,auVar116,2);
  auVar61 = vpackssdw_avx2(auVar116,auVar14);
  auVar130._8_8_ = __real_3914c4e977ba1f5c;
  auVar130._0_8_ = __real_3914c4e977ba1f5c;
  auVar130._16_8_ = __real_3914c4e977ba1f5c;
  auVar130._24_8_ = __real_3914c4e977ba1f5c;
  auVar116 = vcmppd_avx(auVar130,auVar135,2);
  auVar151 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar116 = vpackssdw_avx2(auVar116,auVar151);
  auVar130 = vpand_avx2(auVar61,auVar116);
  auVar130 = vpermq_avx2(auVar130,0xd8);
  auVar130 = vpandn_avx2(auVar15,auVar130);
  iVar22 = vmovmskps_avx(auVar130);
  if (iVar22 == 0) {
    auVar116 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  }
  else {
    auVar36 = vcmppd_avx(auVar36,auVar143,6);
    auVar130 = vpackssdw_avx2(auVar36,auVar151);
    auVar148 = vcvtpd2ps_avx(auVar135);
    auVar83 = vcvtpd2ps_avx(auVar151);
    auVar151._16_16_ = auVar83;
    auVar151._0_16_ = auVar148;
    auVar36 = vrcpps_avx(auVar151);
    auVar83 = vpackssdw_avx(auVar130._0_16_,auVar130._16_16_);
    auVar13 = vpshufd_avx(auVar83,0xd8);
    auVar96._0_4_ = auVar36._0_4_ * (-(auVar36._0_4_ * auVar148._0_4_) + __real_40000000);
    auVar96._4_4_ = auVar36._4_4_ * (-(auVar36._4_4_ * auVar148._4_4_) + __real_40000000);
    auVar96._8_4_ = auVar36._8_4_ * (-(auVar36._8_4_ * auVar148._8_4_) + __real_40000000);
    auVar96._12_4_ = auVar36._12_4_ * (-(auVar36._12_4_ * auVar148._12_4_) + __real_40000000);
    auVar36 = vcvtps2pd_avx(auVar96);
    dVar93 = (-(dVar57 * auVar36._0_8_) + __real_4000000000000000) * auVar36._0_8_;
    dVar104 = (-(dVar72 * auVar36._8_8_) + __real_4000000000000000) * auVar36._8_8_;
    dVar107 = (-(dVar74 * auVar36._16_8_) + __real_4000000000000000) * auVar36._16_8_;
    dVar110 = (-(auVar36._24_8_ * 0.0) + __real_4000000000000000) * auVar36._24_8_;
    auVar36._0_8_ = (-(dVar57 * dVar93) + __real_4000000000000000) * dVar93;
    auVar36._8_8_ = (-(dVar72 * dVar104) + __real_4000000000000000) * dVar104;
    auVar36._16_8_ = (-(dVar74 * dVar107) + __real_4000000000000000) * dVar107;
    auVar36._24_8_ = (-(dVar110 * 0.0) + __real_4000000000000000) * dVar110;
    auVar148 = vpsllw_avx(auVar13,0xf);
    auVar148 = vpacksswb_avx(auVar148,auVar148);
    if ((byte)(SUB161(auVar148 >> 7,0) & 1 | (SUB161(auVar148 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar148 >> 0x17,0) & 1) << 2 | (SUB161(auVar148 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar148 >> 0x27,0) & 1) << 4 | (SUB161(auVar148 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar148 >> 0x37,0) & 1) << 6 | SUB161(auVar148 >> 0x3f,0) << 7) ==
        (byte)iVar22) goto LAB_140cbc142;
    auVar148 = vpackssdw_avx(auVar61._0_16_,auVar61._16_16_);
    auVar13 = vpackssdw_avx(auVar116._0_16_,auVar116._16_16_);
    auVar148 = vpand_avx(auVar148,auVar13);
    auVar148 = vpand_avx(auVar148,auVar83);
    auVar148 = vpshufd_avx(auVar148,0xd8);
    auVar116 = vpmovzxwd_avx2(auVar148);
    auVar116 = vpslld_avx2(auVar116,0x1f);
    auVar116 = vpsrad_avx2(auVar116,0x1f);
  }
  dVar93 = SUB648(ZEXT1664((undefined1  [16])0x0),8);
  auVar131._0_8_ = (ulonglong)dVar57 & __real_7fe0000000000000;
  auVar131._8_8_ = (ulonglong)dVar72 & __real_7fe0000000000000;
  auVar131._16_8_ = (ulonglong)dVar74 & __real_7fe0000000000000;
  auVar131._24_8_ = 0;
  auVar149._8_8_ = __real_7fcfffffffffffff;
  auVar149._0_8_ = __real_7fcfffffffffffff;
  auVar149._16_8_ = __real_7fcfffffffffffff;
  auVar149._24_8_ = __real_7fcfffffffffffff;
  auVar130 = vpsubq_avx2(auVar149,auVar131);
  auVar61 = vpsubq_avx2(auVar149,ZEXT832((ulonglong)dVar93 & __real_7fe0000000000000) << 0x40);
  auVar79._0_8_ = auVar61._0_8_ * 0.0;
  auVar79._8_8_ = dVar93 * auVar61._8_8_;
  auVar79._16_8_ = auVar61._16_8_ * 0.0;
  auVar79._24_8_ = auVar61._24_8_ * 0.0;
  auVar144._0_8_ = dVar57 * auVar130._0_8_;
  auVar144._8_8_ = dVar72 * auVar130._8_8_;
  auVar144._16_8_ = dVar74 * auVar130._16_8_;
  auVar144._24_8_ = auVar130._24_8_ * 0.0;
  auVar148 = vcvtpd2ps_avx(auVar144);
  auVar83 = vcvtpd2ps_avx(auVar79);
  auVar84._16_16_ = auVar83;
  auVar84._0_16_ = auVar148;
  auVar61 = vrcpps_avx(auVar84);
  auVar83._0_4_ = auVar61._0_4_ * (-(auVar61._0_4_ * auVar148._0_4_) + __real_40000000);
  auVar83._4_4_ = auVar61._4_4_ * (-(auVar61._4_4_ * auVar148._4_4_) + __real_40000000);
  auVar83._8_4_ = auVar61._8_4_ * (-(auVar61._8_4_ * auVar148._8_4_) + __real_40000000);
  auVar83._12_4_ = auVar61._12_4_ * (-(auVar61._12_4_ * auVar148._12_4_) + __real_40000000);
  auVar61 = vcvtps2pd_avx(auVar83);
  dVar93 = auVar130._0_8_ * auVar61._0_8_;
  dVar104 = auVar130._8_8_ * auVar61._8_8_;
  dVar107 = auVar130._16_8_ * auVar61._16_8_;
  dVar110 = auVar130._24_8_ * auVar61._24_8_;
  dVar93 = dVar93 * (-(dVar57 * dVar93) + __real_4000000000000000);
  dVar104 = dVar104 * (-(dVar72 * dVar104) + __real_4000000000000000);
  dVar107 = dVar107 * (-(dVar74 * dVar107) + __real_4000000000000000);
  dVar110 = dVar110 * (-(dVar110 * 0.0) + __real_4000000000000000);
  auVar61._0_8_ = dVar93 * (-(dVar93 * dVar57) + __real_4000000000000000);
  auVar61._8_8_ = dVar104 * (-(dVar104 * dVar72) + __real_4000000000000000);
  auVar61._16_8_ = dVar107 * (-(dVar107 * dVar74) + __real_4000000000000000);
  auVar61._24_8_ = dVar110 * (-(dVar110 * 0.0) + __real_4000000000000000);
  auVar116 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                         auVar116 ^ auVar14);
  auVar36 = vblendvps_avx(auVar36,auVar61,auVar116);
LAB_140cbc142:
  dVar57 = param_3[4];
  local_268._8_8_ = param_3[5];
  local_288._8_8_ = param_3[6];
  auVar116 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000,
                         auVar15);
  auVar36 = vblendvps_avx(auVar36,SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar116);
  uVar21 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar21 = param_6;
  }
  auVar116 = vpermpd_avx2(auVar167,0x55);
  auVar61 = vpermpd_avx2(auVar167,0xaa);
  auVar130 = vpermpd_avx2(auVar167,0xff);
  auVar14 = vpermpd_avx2(auVar36,0x55);
  auVar15 = vpermpd_avx2(auVar36,0xaa);
  local_1c8 = auVar116._0_8_;
  dStack_1c0 = auVar116._8_8_;
  dStack_1b8 = auVar116._16_8_;
  dStack_1b0 = auVar116._24_8_;
  local_1a8 = auVar61._0_8_;
  dStack_1a0 = auVar61._8_8_;
  dStack_198 = auVar61._16_8_;
  dStack_190 = auVar61._24_8_;
  local_3b8 = auVar130._0_8_;
  dStack_3b0 = auVar130._8_8_;
  dStack_3a8 = auVar130._16_8_;
  dStack_3a0 = auVar130._24_8_;
  local_188 = auVar14._0_8_;
  dStack_180 = auVar14._8_8_;
  dStack_178 = auVar14._16_8_;
  dStack_170 = auVar14._24_8_;
  local_168 = auVar15._0_8_;
  dStack_160 = auVar15._8_8_;
  dStack_158 = auVar15._16_8_;
  dStack_150 = auVar15._24_8_;
  dVar72 = auVar36._0_8_;
  if ((int)(uVar21 & 0xfffffff8) < 1) {
    uVar23 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    local_268._0_8_ = local_268._8_8_;
    dStack_258 = (double)local_268._8_8_;
    dStack_250 = (double)local_268._8_8_;
    local_288._0_8_ = local_288._8_8_;
    dStack_278 = (double)local_288._8_8_;
    dStack_270 = (double)local_288._8_8_;
    lVar25 = 0x40;
    uVar23 = 0;
    do {
      auVar144 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar131 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar84 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar36 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar25);
      auVar116 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar25);
      auVar61 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar116);
      auVar130 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar36);
      auVar61 = vblendps_avx(auVar130,auVar61,0x88);
      auVar130 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar116);
      auVar14 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_1 + lVar25));
      auVar130 = vblendps_avx(auVar14,auVar130,0x13);
      auVar36 = vblendps_avx(auVar116,auVar36,0x24);
      auVar36 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar36);
      auVar116 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(param_1 + lVar25));
      auVar14 = vblendps_avx(auVar36,auVar116,0xe0);
      auVar36 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar25);
      auVar116 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar25);
      auVar15 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar116);
      auVar135 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                              ,auVar36);
      auVar15 = vblendps_avx(auVar135,auVar15,0x88);
      auVar135 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                              ,auVar116);
      auVar151 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                              ,*(undefined1 (*) [32])(param_2 + lVar25));
      auVar135 = vblendps_avx(auVar151,auVar135,0x13);
      auVar79 = vperm2f128_avx(auVar15,auVar135,0x31);
      auVar36 = vblendps_avx(auVar116,auVar36,0x24);
      auVar36 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar36);
      auVar116 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                              ,*(undefined1 (*) [32])(param_2 + lVar25));
      auVar36 = vblendps_avx(auVar36,auVar116,0xe0);
      auVar116 = vcvtps2pd_avx(auVar130._0_16_);
      auVar151 = vcvtps2pd_avx(auVar61._0_16_);
      auVar130 = vcvtps2pd_avx(auVar130._16_16_);
      auVar61 = vcvtps2pd_avx(auVar61._16_16_);
      auVar143 = vcvtps2pd_avx(auVar14._16_16_);
      auVar14 = vcvtps2pd_avx(auVar14._0_16_);
      dVar74 = *param_4;
      auVar62._0_8_ = param_5 * auVar151._0_8_ + dVar74;
      auVar62._8_8_ = param_5 * auVar151._8_8_ + dVar74;
      auVar62._16_8_ = param_5 * auVar151._16_8_ + dVar74;
      auVar62._24_8_ = param_5 * auVar151._24_8_ + dVar74;
      auVar31._0_8_ = param_5 * auVar116._0_8_ + dVar74;
      auVar31._8_8_ = param_5 * auVar116._8_8_ + dVar74;
      auVar31._16_8_ = param_5 * auVar116._16_8_ + dVar74;
      auVar31._24_8_ = param_5 * auVar116._24_8_ + dVar74;
      dVar74 = param_4[1];
      auVar97._0_8_ = param_5 * auVar61._0_8_ + dVar74;
      auVar97._8_8_ = param_5 * auVar61._8_8_ + dVar74;
      auVar97._16_8_ = param_5 * auVar61._16_8_ + dVar74;
      auVar97._24_8_ = param_5 * auVar61._24_8_ + dVar74;
      auVar85._0_8_ = param_5 * auVar130._0_8_ + dVar74;
      auVar85._8_8_ = param_5 * auVar130._8_8_ + dVar74;
      auVar85._16_8_ = param_5 * auVar130._16_8_ + dVar74;
      auVar85._24_8_ = param_5 * auVar130._24_8_ + dVar74;
      dVar74 = param_4[2];
      auVar156._0_8_ = param_5 * auVar14._0_8_ + dVar74;
      auVar156._8_8_ = param_5 * auVar14._8_8_ + dVar74;
      auVar156._16_8_ = param_5 * auVar14._16_8_ + dVar74;
      auVar156._24_8_ = param_5 * auVar14._24_8_ + dVar74;
      auVar117._0_8_ = param_5 * auVar143._0_8_ + dVar74;
      auVar117._8_8_ = param_5 * auVar143._8_8_ + dVar74;
      auVar117._16_8_ = param_5 * auVar143._16_8_ + dVar74;
      auVar117._24_8_ = param_5 * auVar143._24_8_ + dVar74;
      auVar17._8_8_ = dVar57;
      auVar17._0_8_ = dVar57;
      auVar17._16_8_ = dVar57;
      auVar17._24_8_ = dVar57;
      auVar116 = vsubpd_avx(auVar31,auVar17);
      auVar61 = vsubpd_avx(auVar62,auVar17);
      auVar130 = vsubpd_avx(auVar85,_local_268);
      auVar14 = vsubpd_avx(auVar97,_local_268);
      auVar151 = vsubpd_avx(auVar117,_local_288);
      auVar143 = vsubpd_avx(auVar156,_local_288);
      dVar125 = auVar61._0_8_;
      dVar128 = auVar61._8_8_;
      dVar153 = auVar61._16_8_;
      dVar154 = auVar61._24_8_;
      dVar74 = auVar116._0_8_;
      dVar9 = auVar116._8_8_;
      dVar30 = auVar116._16_8_;
      dVar50 = auVar116._24_8_;
      dVar93 = auVar14._0_8_;
      dVar10 = auVar14._8_8_;
      dVar43 = auVar14._16_8_;
      dVar51 = auVar14._24_8_;
      dVar104 = auVar130._0_8_;
      dVar11 = auVar130._8_8_;
      dVar44 = auVar130._16_8_;
      dVar53 = auVar130._24_8_;
      dVar107 = auVar143._0_8_;
      dVar12 = auVar143._8_8_;
      dVar45 = auVar143._16_8_;
      dVar54 = auVar143._24_8_;
      dVar110 = auVar151._0_8_;
      dVar27 = auVar151._8_8_;
      dVar46 = auVar151._16_8_;
      dVar55 = auVar151._24_8_;
      dVar113 = auVar167._0_8_ * dVar104 - local_1c8 * dVar74;
      dVar121 = auVar167._0_8_ * dVar11 - dStack_1c0 * dVar9;
      dVar123 = auVar167._0_8_ * dVar44 - dStack_1b8 * dVar30;
      dVar126 = auVar167._0_8_ * dVar53 - dStack_1b0 * dVar50;
      dVar94 = auVar167._0_8_ * dVar93 - dVar125 * local_1c8;
      dVar105 = auVar167._0_8_ * dVar10 - dVar128 * dStack_1c0;
      dVar108 = auVar167._0_8_ * dVar43 - dVar153 * dStack_1b8;
      dVar111 = auVar167._0_8_ * dVar51 - dVar154 * dStack_1b0;
      dVar129 = local_1c8 * dVar110 - local_1a8 * dVar104;
      dVar139 = dStack_1c0 * dVar27 - dStack_1a0 * dVar11;
      dVar140 = dStack_1b8 * dVar46 - dStack_198 * dVar44;
      dVar141 = dStack_1b0 * dVar55 - dStack_190 * dVar53;
      dVar58 = local_1c8 * dVar107 - local_1a8 * dVar93;
      dVar73 = dStack_1c0 * dVar12 - dStack_1a0 * dVar10;
      dVar75 = dStack_1b8 * dVar45 - dStack_198 * dVar43;
      dVar76 = dStack_1b0 * dVar54 - dStack_190 * dVar51;
      dVar186 = local_1a8 * dVar74 - auVar167._0_8_ * dVar110;
      dVar190 = dStack_1a0 * dVar9 - auVar167._0_8_ * dVar27;
      dVar192 = dStack_198 * dVar30 - auVar167._0_8_ * dVar46;
      dVar194 = dStack_190 * dVar50 - auVar167._0_8_ * dVar55;
      dVar176 = local_1a8 * dVar125 - auVar167._0_8_ * dVar107;
      dVar180 = dStack_1a0 * dVar128 - auVar167._0_8_ * dVar12;
      dVar182 = dStack_198 * dVar153 - auVar167._0_8_ * dVar45;
      dVar184 = dStack_190 * dVar154 - auVar167._0_8_ * dVar54;
      dVar58 = dVar58 + dVar58;
      dVar73 = dVar73 + dVar73;
      dVar75 = dVar75 + dVar75;
      dVar76 = dVar76 + dVar76;
      dVar129 = dVar129 + dVar129;
      dVar139 = dVar139 + dVar139;
      dVar140 = dVar140 + dVar140;
      dVar141 = dVar141 + dVar141;
      dVar176 = dVar176 + dVar176;
      dVar180 = dVar180 + dVar180;
      dVar182 = dVar182 + dVar182;
      dVar184 = dVar184 + dVar184;
      dVar186 = dVar186 + dVar186;
      dVar190 = dVar190 + dVar190;
      dVar192 = dVar192 + dVar192;
      dVar194 = dVar194 + dVar194;
      dVar94 = dVar94 + dVar94;
      dVar105 = dVar105 + dVar105;
      dVar108 = dVar108 + dVar108;
      dVar111 = dVar111 + dVar111;
      dVar113 = dVar113 + dVar113;
      dVar121 = dVar121 + dVar121;
      dVar123 = dVar123 + dVar123;
      dVar126 = dVar126 + dVar126;
      auVar13._4_4_ = uVar20 ^ auVar15._4_4_;
      auVar13._0_4_ = uVar20 ^ auVar15._0_4_;
      auVar13._8_4_ = uVar20 ^ auVar15._8_4_;
      auVar13._12_4_ = uVar20 ^ auVar15._12_4_;
      auVar15._16_4_ = uVar20 ^ auVar135._0_4_;
      auVar15._0_16_ = auVar13;
      auVar15._20_4_ = uVar20 ^ auVar135._4_4_;
      auVar15._24_4_ = uVar20 ^ auVar135._8_4_;
      auVar15._28_4_ = uVar20 ^ auVar135._12_4_;
      auVar116 = vcvtps2pd_avx(auVar15._16_16_);
      auVar61 = vcvtps2pd_avx(auVar13);
      auVar148._4_4_ = uVar20 ^ auVar79._4_4_;
      auVar148._0_4_ = uVar20 ^ auVar79._0_4_;
      auVar148._8_4_ = uVar20 ^ auVar79._8_4_;
      auVar148._12_4_ = uVar20 ^ auVar79._12_4_;
      auVar14._16_4_ = uVar20 ^ auVar79._16_4_;
      auVar14._0_16_ = auVar148;
      auVar14._20_4_ = uVar20 ^ auVar79._20_4_;
      auVar14._24_4_ = uVar20 ^ auVar79._24_4_;
      auVar14._28_4_ = uVar20 ^ auVar79._28_4_;
      auVar130 = vcvtps2pd_avx(auVar14._16_16_);
      local_2f8 = auVar36._0_4_;
      uStack_2f4 = auVar36._4_4_;
      uStack_2f0 = auVar36._8_4_;
      uStack_2ec = auVar36._12_4_;
      uStack_2e8 = auVar36._16_4_;
      uStack_2e4 = auVar36._20_4_;
      uStack_2e0 = auVar36._24_4_;
      uStack_2dc = auVar36._28_4_;
      auVar142._0_4_ = uVar20 ^ local_2f8;
      auVar142._4_4_ = uVar20 ^ uStack_2f4;
      auVar142._8_4_ = uVar20 ^ uStack_2f0;
      auVar142._12_4_ = uVar20 ^ uStack_2ec;
      auVar145._16_4_ = uVar20 ^ uStack_2e8;
      auVar145._0_16_ = auVar142;
      auVar145._20_4_ = uVar20 ^ uStack_2e4;
      auVar145._24_4_ = uVar20 ^ uStack_2e0;
      auVar145._28_4_ = uVar20 ^ uStack_2dc;
      auVar36 = vcvtps2pd_avx(auVar148);
      auVar14 = vcvtps2pd_avx(auVar145._16_16_);
      auVar15 = vcvtps2pd_avx(auVar142);
      local_378 = auVar116._0_8_;
      dStack_370 = auVar116._8_8_;
      dStack_368 = auVar116._16_8_;
      dStack_360 = auVar116._24_8_;
      dVar7 = auVar130._0_8_;
      dVar28 = auVar130._8_8_;
      dVar48 = auVar130._16_8_;
      dVar56 = auVar130._24_8_;
      dVar8 = auVar14._0_8_;
      dVar29 = auVar14._8_8_;
      dVar49 = auVar14._16_8_;
      dVar59 = auVar14._24_8_;
      dVar95 = auVar167._0_8_ * dVar7 - local_378 * local_1c8;
      dVar106 = auVar167._0_8_ * dVar28 - dStack_370 * dStack_1c0;
      dVar109 = auVar167._0_8_ * dVar48 - dStack_368 * dStack_1b8;
      dVar112 = auVar167._0_8_ * dVar56 - dStack_360 * dStack_1b0;
      dVar26 = local_1c8 * dVar8 - local_1a8 * dVar7;
      dVar42 = dStack_1c0 * dVar29 - dStack_1a0 * dVar28;
      dVar47 = dStack_1b8 * dVar49 - dStack_198 * dVar48;
      dVar52 = dStack_1b0 * dVar59 - dStack_190 * dVar56;
      dVar114 = local_1a8 * local_378 - auVar167._0_8_ * dVar8;
      dVar122 = dStack_1a0 * dStack_370 - auVar167._0_8_ * dVar29;
      dVar124 = dStack_198 * dStack_368 - auVar167._0_8_ * dVar49;
      dVar127 = dStack_190 * dStack_360 - auVar167._0_8_ * dVar59;
      dVar26 = dVar26 + dVar26;
      dVar42 = dVar42 + dVar42;
      dVar47 = dVar47 + dVar47;
      dVar52 = dVar52 + dVar52;
      dVar114 = dVar114 + dVar114;
      dVar122 = dVar122 + dVar122;
      dVar124 = dVar124 + dVar124;
      dVar127 = dVar127 + dVar127;
      dVar95 = dVar95 + dVar95;
      dVar106 = dVar106 + dVar106;
      dVar109 = dVar109 + dVar109;
      dVar112 = dVar112 + dVar112;
      local_398 = auVar61._0_8_;
      dStack_390 = auVar61._8_8_;
      dStack_388 = auVar61._16_8_;
      dStack_380 = auVar61._24_8_;
      local_208 = auVar36._0_8_;
      dStack_200 = auVar36._8_8_;
      dStack_1f8 = auVar36._16_8_;
      dStack_1f0 = auVar36._24_8_;
      dVar155 = auVar167._0_8_ * local_208 - local_1c8 * local_398;
      dVar159 = auVar167._0_8_ * dStack_200 - dStack_1c0 * dStack_390;
      dVar160 = auVar167._0_8_ * dStack_1f8 - dStack_1b8 * dStack_388;
      dVar161 = auVar167._0_8_ * dStack_1f0 - dStack_1b0 * dStack_380;
      dVar91 = auVar15._0_8_;
      dVar166 = local_1c8 * dVar91 - local_1a8 * local_208;
      dVar92 = auVar15._8_8_;
      dVar169 = dStack_1c0 * dVar92 - dStack_1a0 * dStack_200;
      dVar162 = auVar15._16_8_;
      dVar170 = dStack_1b8 * dVar162 - dStack_198 * dStack_1f8;
      dVar115 = auVar15._24_8_;
      dVar171 = dStack_1b0 * dVar115 - dStack_190 * dStack_1f0;
      dVar187 = local_1a8 * local_398 - auVar167._0_8_ * dVar91;
      dVar191 = dStack_1a0 * dStack_390 - auVar167._0_8_ * dVar92;
      dVar193 = dStack_198 * dStack_388 - auVar167._0_8_ * dVar162;
      dVar195 = dStack_190 * dStack_380 - auVar167._0_8_ * dVar115;
      dVar166 = dVar166 + dVar166;
      dVar169 = dVar169 + dVar169;
      dVar170 = dVar170 + dVar170;
      dVar171 = dVar171 + dVar171;
      dVar187 = dVar187 + dVar187;
      dVar191 = dVar191 + dVar191;
      dVar193 = dVar193 + dVar193;
      dVar195 = dVar195 + dVar195;
      dVar155 = dVar155 + dVar155;
      dVar159 = dVar159 + dVar159;
      dVar160 = dVar160 + dVar160;
      dVar161 = dVar161 + dVar161;
      auVar32._0_8_ =
           dVar72 * (local_3b8 * dVar129 + dVar74 + (local_1c8 * dVar113 - local_1a8 * dVar186));
      auVar32._8_8_ =
           dVar72 * (dStack_3b0 * dVar139 + dVar9 + (dStack_1c0 * dVar121 - dStack_1a0 * dVar190));
      auVar32._16_8_ =
           dVar72 * (dStack_3a8 * dVar140 + dVar30 + (dStack_1b8 * dVar123 - dStack_198 * dVar192));
      auVar32._24_8_ =
           dVar72 * (dStack_3a0 * dVar141 + dVar50 + (dStack_1b0 * dVar126 - dStack_190 * dVar194));
      auVar63._0_8_ =
           dVar72 * (local_3b8 * dVar58 + dVar125 + (local_1c8 * dVar94 - local_1a8 * dVar176));
      auVar63._8_8_ =
           dVar72 * (dStack_3b0 * dVar73 + dVar128 + (dStack_1c0 * dVar105 - dStack_1a0 * dVar180));
      auVar63._16_8_ =
           dVar72 * (dStack_3a8 * dVar75 + dVar153 + (dStack_1b8 * dVar108 - dStack_198 * dVar182));
      auVar63._24_8_ =
           dVar72 * (dStack_3a0 * dVar76 + dVar154 + (dStack_1b0 * dVar111 - dStack_190 * dVar184));
      auVar98._0_8_ =
           local_188 *
           (local_3b8 * dVar186 + dVar104 + (local_1a8 * dVar129 - auVar167._0_8_ * dVar113));
      auVar98._8_8_ =
           dStack_180 *
           (dStack_3b0 * dVar190 + dVar11 + (dStack_1a0 * dVar139 - auVar167._0_8_ * dVar121));
      auVar98._16_8_ =
           dStack_178 *
           (dStack_3a8 * dVar192 + dVar44 + (dStack_198 * dVar140 - auVar167._0_8_ * dVar123));
      auVar98._24_8_ =
           dStack_170 *
           (dStack_3a0 * dVar194 + dVar53 + (dStack_190 * dVar141 - auVar167._0_8_ * dVar126));
      auVar132._0_8_ =
           local_188 *
           (local_3b8 * dVar176 + dVar93 + (local_1a8 * dVar58 - auVar167._0_8_ * dVar94));
      auVar132._8_8_ =
           dStack_180 *
           (dStack_3b0 * dVar180 + dVar10 + (dStack_1a0 * dVar73 - auVar167._0_8_ * dVar105));
      auVar132._16_8_ =
           dStack_178 *
           (dStack_3a8 * dVar182 + dVar43 + (dStack_198 * dVar75 - auVar167._0_8_ * dVar108));
      auVar132._24_8_ =
           dStack_170 *
           (dStack_3a0 * dVar184 + dVar51 + (dStack_190 * dVar76 - auVar167._0_8_ * dVar111));
      auVar150._0_8_ =
           local_168 *
           (local_3b8 * dVar113 + dVar110 + (auVar167._0_8_ * dVar186 - dVar129 * local_1c8));
      auVar150._8_8_ =
           dStack_160 *
           (dStack_3b0 * dVar121 + dVar27 + (auVar167._0_8_ * dVar190 - dVar139 * dStack_1c0));
      auVar150._16_8_ =
           dStack_158 *
           (dStack_3a8 * dVar123 + dVar46 + (auVar167._0_8_ * dVar192 - dVar140 * dStack_1b8));
      auVar150._24_8_ =
           dStack_150 *
           (dStack_3a0 * dVar126 + dVar55 + (auVar167._0_8_ * dVar194 - dVar141 * dStack_1b0));
      auVar163._0_8_ =
           local_168 *
           ((auVar167._0_8_ * dVar176 - local_1c8 * dVar58) + local_3b8 * dVar94 + dVar107);
      auVar163._8_8_ =
           dStack_160 *
           ((auVar167._0_8_ * dVar180 - dStack_1c0 * dVar73) + dStack_3b0 * dVar105 + dVar12);
      auVar163._16_8_ =
           dStack_158 *
           ((auVar167._0_8_ * dVar182 - dStack_1b8 * dVar75) + dStack_3a8 * dVar108 + dVar45);
      auVar163._24_8_ =
           dStack_150 *
           ((auVar167._0_8_ * dVar184 - dStack_1b0 * dVar76) + dStack_3a0 * dVar111 + dVar54);
      auVar148 = vcvtpd2ps_avx(auVar63);
      auVar83 = vcvtpd2ps_avx(auVar32);
      auVar13 = vcvtpd2ps_avx(auVar132);
      auVar64._16_16_ = auVar83;
      auVar64._0_16_ = auVar148;
      auVar83 = vcvtpd2ps_avx(auVar98);
      auVar33._16_16_ = auVar83;
      auVar33._0_16_ = auVar13;
      auVar83 = vcvtpd2ps_avx(auVar163);
      auVar96 = vcvtpd2ps_avx(auVar150);
      auVar99._16_16_ = auVar96;
      auVar99._0_16_ = auVar83;
      auVar133._16_16_ = auVar13;
      auVar133._0_16_ = auVar148;
      auVar36 = vshufpd_avx(auVar64,auVar133,2);
      auVar61 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar99);
      auVar116 = vpermpd_avx2(auVar33,0xe9);
      auVar116 = vpblendd_avx2(auVar61,auVar116,7);
      auVar61 = vpermd_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003,
                            auVar116);
      auVar130 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                              ,auVar36);
      auVar61 = vpblendd_avx2(auVar130,auVar61,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar25) = auVar61;
      auVar14 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar116 = vpermd_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar116);
      auVar36 = vshufpd_avx(auVar36,auVar36,1);
      auVar36 = vpblendd_avx2(auVar116,auVar36,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar25) = auVar36;
      auVar135 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar15 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar116 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                              ,auVar33);
      auVar36 = vpermpd_avx2(auVar64,0xff);
      auVar36 = vblendpd_avx(auVar116,auVar36,1);
      auVar36 = vblendps_avx(auVar36,auVar99,0xe0);
      auVar65._0_8_ =
           dVar72 * (local_3b8 * dVar26 + local_378 + (local_1c8 * dVar95 - local_1a8 * dVar114));
      auVar65._8_8_ =
           dVar72 * (dStack_3b0 * dVar42 + dStack_370 +
                    (dStack_1c0 * dVar106 - dStack_1a0 * dVar122));
      auVar65._16_8_ =
           dVar72 * (dStack_3a8 * dVar47 + dStack_368 +
                    (dStack_1b8 * dVar109 - dStack_198 * dVar124));
      auVar65._24_8_ =
           dVar72 * (dStack_3a0 * dVar52 + dStack_360 +
                    (dStack_1b0 * dVar112 - dStack_190 * dVar127));
      auVar86._0_8_ =
           dVar72 * (local_3b8 * dVar166 + local_398 + (local_1c8 * dVar155 - local_1a8 * dVar187));
      auVar86._8_8_ =
           dVar72 * (dStack_3b0 * dVar169 + dStack_390 +
                    (dStack_1c0 * dVar159 - dStack_1a0 * dVar191));
      auVar86._16_8_ =
           dVar72 * (dStack_3a8 * dVar170 + dStack_388 +
                    (dStack_1b8 * dVar160 - dStack_198 * dVar193));
      auVar86._24_8_ =
           dVar72 * (dStack_3a0 * dVar171 + dStack_380 +
                    (dStack_1b0 * dVar161 - dStack_190 * dVar195));
      auVar100._0_8_ =
           local_188 *
           (local_3b8 * dVar114 + dVar7 + (local_1a8 * dVar26 - auVar167._0_8_ * dVar95));
      auVar100._8_8_ =
           dStack_180 *
           (dStack_3b0 * dVar122 + dVar28 + (dStack_1a0 * dVar42 - auVar167._0_8_ * dVar106));
      auVar100._16_8_ =
           dStack_178 *
           (dStack_3a8 * dVar124 + dVar48 + (dStack_198 * dVar47 - auVar167._0_8_ * dVar109));
      auVar100._24_8_ =
           dStack_170 *
           (dStack_3a0 * dVar127 + dVar56 + (dStack_190 * dVar52 - auVar167._0_8_ * dVar112));
      auVar77._0_8_ =
           local_188 *
           (local_3b8 * dVar187 + local_208 + (local_1a8 * dVar166 - auVar167._0_8_ * dVar155));
      auVar77._8_8_ =
           dStack_180 *
           (dStack_3b0 * dVar191 + dStack_200 + (dStack_1a0 * dVar169 - auVar167._0_8_ * dVar159));
      auVar77._16_8_ =
           dStack_178 *
           (dStack_3a8 * dVar193 + dStack_1f8 + (dStack_198 * dVar170 - auVar167._0_8_ * dVar160));
      auVar77._24_8_ =
           dStack_170 *
           (dStack_3a0 * dVar195 + dStack_1f0 + (dStack_190 * dVar171 - auVar167._0_8_ * dVar161));
      auVar118._0_8_ =
           local_168 *
           (local_3b8 * dVar95 + dVar8 + (auVar167._0_8_ * dVar114 - local_1c8 * dVar26));
      auVar118._8_8_ =
           dStack_160 *
           (dStack_3b0 * dVar106 + dVar29 + (auVar167._0_8_ * dVar122 - dStack_1c0 * dVar42));
      auVar118._16_8_ =
           dStack_158 *
           (dStack_3a8 * dVar109 + dVar49 + (auVar167._0_8_ * dVar124 - dStack_1b8 * dVar47));
      auVar118._24_8_ =
           dStack_150 *
           (dStack_3a0 * dVar112 + dVar59 + (auVar167._0_8_ * dVar127 - dStack_1b0 * dVar52));
      auVar148 = vcvtpd2ps_avx(auVar86);
      auVar134._0_8_ =
           local_168 *
           ((auVar167._0_8_ * dVar187 - dVar166 * local_1c8) + local_3b8 * dVar155 + dVar91);
      auVar134._8_8_ =
           dStack_160 *
           ((auVar167._0_8_ * dVar191 - dVar169 * dStack_1c0) + dStack_3b0 * dVar159 + dVar92);
      auVar134._16_8_ =
           dStack_158 *
           ((auVar167._0_8_ * dVar193 - dVar170 * dStack_1b8) + dStack_3a8 * dVar160 + dVar162);
      auVar134._24_8_ =
           dStack_150 *
           ((auVar167._0_8_ * dVar195 - dVar171 * dStack_1b0) + dStack_3a0 * dVar161 + dVar115);
      auVar83 = vcvtpd2ps_avx(auVar65);
      auVar66._16_16_ = auVar83;
      auVar66._0_16_ = auVar148;
      auVar83 = vcvtpd2ps_avx(auVar77);
      auVar13 = vcvtpd2ps_avx(auVar100);
      auVar96 = vcvtpd2ps_avx(auVar134);
      auVar142 = vcvtpd2ps_avx(auVar118);
      auVar101._16_16_ = auVar13;
      auVar101._0_16_ = auVar83;
      auVar36 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar36);
      *(undefined1 (*) [32])(param_1 + lVar25) = auVar36;
      auVar34._16_16_ = auVar142;
      auVar34._0_16_ = auVar96;
      auVar78._16_16_ = auVar83;
      auVar78._0_16_ = auVar148;
      auVar36 = vshufpd_avx(auVar66,auVar78,2);
      auVar61 = vpermps_avx2(auVar84,auVar34);
      auVar116 = vpermpd_avx2(auVar101,0xe9);
      auVar116 = vpblendd_avx2(auVar61,auVar116,7);
      auVar130 = vpermps_avx2(auVar144,auVar36);
      auVar61 = vpermd_avx2(auVar131,auVar116);
      auVar61 = vpblendd_avx2(auVar130,auVar61,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar25) = auVar61;
      auVar116 = vpermd_avx2(auVar14,auVar116);
      auVar36 = vshufpd_avx(auVar36,auVar36,1);
      auVar36 = vpblendd_avx2(auVar116,auVar36,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar25) = auVar36;
      auVar116 = vpermps_avx2(auVar15,auVar101);
      auVar36 = vpermpd_avx2(auVar66,0xff);
      auVar36 = vblendpd_avx(auVar116,auVar36,1);
      auVar36 = vblendps_avx(auVar36,auVar34,0xe0);
      auVar36 = vpermps_avx2(auVar135,auVar36);
      *(undefined1 (*) [32])(param_2 + lVar25) = auVar36;
      lVar25 = lVar25 + 0x60;
      uVar23 = uVar23 + 8;
    } while ((int)uVar23 < (int)(uVar21 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar23) {
      return;
    }
  }
  auVar130 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar61 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar116 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  auVar35._4_4_ = uVar23;
  auVar35._0_4_ = uVar23;
  auVar35._8_4_ = uVar23;
  auVar35._12_4_ = uVar23;
  auVar35._16_4_ = uVar23;
  auVar35._20_4_ = uVar23;
  auVar35._24_4_ = uVar23;
  auVar35._28_4_ = uVar23;
  auVar36 = vpor_avx2(auVar35,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar67._4_4_ = param_6;
  auVar67._0_4_ = param_6;
  auVar67._8_4_ = param_6;
  auVar67._12_4_ = param_6;
  auVar67._16_4_ = param_6;
  auVar67._20_4_ = param_6;
  auVar67._24_4_ = param_6;
  auVar67._28_4_ = param_6;
  auVar36 = vpcmpgtd_avx2(auVar67,auVar36);
  uVar18 = (ulonglong)uVar23;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar18 * 0xc);
  uVar20 = vmovmskps_avx(auVar36);
  if (uVar20 == 0xff) {
    auVar36 = pauVar1[1];
    auVar14 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar36);
    auVar15 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar1);
    auVar14 = vblendps_avx(auVar15,auVar14,0x88);
    auVar15 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar36);
    auVar135 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            pauVar1[2]);
    auVar15 = vblendps_avx(auVar135,auVar15,0x13);
    auVar146._16_16_ = auVar15._0_16_;
    auVar146._0_16_ = auVar14._0_16_;
    auVar79 = vperm2f128_avx(auVar14,auVar15,0x31);
    auVar36 = vblendps_avx(auVar36,*pauVar1,0x24);
    auVar36 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar36);
    auVar14 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           pauVar1[2]);
    auVar135 = vblendps_avx(auVar36,auVar14,0xe0);
    auVar36 = *(undefined1 (*) [32])(param_2 + uVar18 * 0xc);
    auVar14 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar18 * 0xc);
    auVar15 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar18 * 0xc);
    auVar151 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                            auVar14);
    auVar143 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar36);
    auVar151 = vblendps_avx(auVar143,auVar151,0x88);
    auVar143 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                            auVar14);
    auVar84 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar15);
    auVar143 = vblendps_avx(auVar84,auVar143,0x13);
    auVar68._16_16_ = auVar143._0_16_;
    auVar68._0_16_ = auVar151._0_16_;
    auVar151 = vperm2f128_avx(auVar151,auVar143,0x31);
    auVar36 = vblendps_avx(auVar14,auVar36,0x24);
    auVar36 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar36);
    auVar14 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           auVar15);
    auVar36 = vblendps_avx(auVar36,auVar14,0xe0);
  }
  else {
    auVar146 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar36);
    auVar79 = vgatherdps(ZEXT1632(ZEXT816(0)),auVar36);
    auVar135 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar36);
    auVar68 = vgatherdps(ZEXT832(0),auVar36);
    auVar151 = vgatherdps(ZEXT832(0),auVar36);
    auVar36 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar36);
  }
  pauVar24 = (undefined1 (*) [32])(param_2 + uVar18 * 0xc);
  auVar14 = vcvtps2pd_avx(auVar146._16_16_);
  auVar15 = vcvtps2pd_avx(auVar146._0_16_);
  dVar74 = *param_4;
  auVar102._0_8_ = param_5 * auVar15._0_8_ + dVar74;
  auVar102._8_8_ = param_5 * auVar15._8_8_ + dVar74;
  auVar102._16_8_ = param_5 * auVar15._16_8_ + dVar74;
  auVar102._24_8_ = param_5 * auVar15._24_8_ + dVar74;
  auVar87._0_8_ = param_5 * auVar14._0_8_ + dVar74;
  auVar87._8_8_ = param_5 * auVar14._8_8_ + dVar74;
  auVar87._16_8_ = param_5 * auVar14._16_8_ + dVar74;
  auVar87._24_8_ = param_5 * auVar14._24_8_ + dVar74;
  auVar14 = vcvtps2pd_avx(auVar79._16_16_);
  auVar15 = vcvtps2pd_avx(auVar79._0_16_);
  dVar74 = param_4[1];
  auVar80._0_8_ = param_5 * auVar15._0_8_ + dVar74;
  auVar80._8_8_ = param_5 * auVar15._8_8_ + dVar74;
  auVar80._16_8_ = param_5 * auVar15._16_8_ + dVar74;
  auVar80._24_8_ = param_5 * auVar15._24_8_ + dVar74;
  auVar119._0_8_ = param_5 * auVar14._0_8_ + dVar74;
  auVar119._8_8_ = param_5 * auVar14._8_8_ + dVar74;
  auVar119._16_8_ = param_5 * auVar14._16_8_ + dVar74;
  auVar119._24_8_ = param_5 * auVar14._24_8_ + dVar74;
  auVar14 = vcvtps2pd_avx(auVar135._16_16_);
  auVar15 = vcvtps2pd_avx(auVar135._0_16_);
  dVar74 = param_4[2];
  auVar136._0_8_ = param_5 * auVar15._0_8_ + dVar74;
  auVar136._8_8_ = param_5 * auVar15._8_8_ + dVar74;
  auVar136._16_8_ = param_5 * auVar15._16_8_ + dVar74;
  auVar136._24_8_ = param_5 * auVar15._24_8_ + dVar74;
  auVar157._0_8_ = param_5 * auVar14._0_8_ + dVar74;
  auVar157._8_8_ = param_5 * auVar14._8_8_ + dVar74;
  auVar157._16_8_ = param_5 * auVar14._16_8_ + dVar74;
  auVar157._24_8_ = param_5 * auVar14._24_8_ + dVar74;
  auVar60._0_4_ = auVar68._0_4_ ^ __real_80000000;
  auVar60._4_4_ = auVar68._4_4_ ^ __real_80000000;
  auVar60._8_4_ = auVar68._8_4_ ^ __real_80000000;
  auVar60._12_4_ = auVar68._12_4_ ^ __real_80000000;
  auVar69._16_4_ = auVar68._16_4_ ^ __real_80000000;
  auVar69._0_16_ = auVar60;
  auVar69._20_4_ = auVar68._20_4_ ^ __real_80000000;
  auVar69._24_4_ = auVar68._24_4_ ^ __real_80000000;
  auVar69._28_4_ = auVar68._28_4_ ^ __real_80000000;
  auVar188._0_4_ = auVar151._0_4_ ^ __real_80000000;
  auVar188._4_4_ = auVar151._4_4_ ^ __real_80000000;
  auVar188._8_4_ = auVar151._8_4_ ^ __real_80000000;
  auVar188._12_4_ = auVar151._12_4_ ^ __real_80000000;
  auVar189._16_4_ = auVar151._16_4_ ^ __real_80000000;
  auVar189._0_16_ = auVar188;
  auVar189._20_4_ = auVar151._20_4_ ^ __real_80000000;
  auVar189._24_4_ = auVar151._24_4_ ^ __real_80000000;
  auVar189._28_4_ = auVar151._28_4_ ^ __real_80000000;
  auVar178._0_4_ = auVar36._0_4_ ^ __real_80000000;
  auVar178._4_4_ = auVar36._4_4_ ^ __real_80000000;
  auVar178._8_4_ = auVar36._8_4_ ^ __real_80000000;
  auVar178._12_4_ = auVar36._12_4_ ^ __real_80000000;
  auVar179._16_4_ = auVar36._16_4_ ^ __real_80000000;
  auVar179._0_16_ = auVar178;
  auVar179._20_4_ = auVar36._20_4_ ^ __real_80000000;
  auVar179._24_4_ = auVar36._24_4_ ^ __real_80000000;
  auVar179._28_4_ = auVar36._28_4_ ^ __real_80000000;
  auVar37._8_8_ = dVar57;
  auVar37._0_8_ = dVar57;
  auVar37._16_8_ = dVar57;
  auVar37._24_8_ = dVar57;
  auVar36 = vsubpd_avx(auVar87,auVar37);
  auVar135 = vsubpd_avx(auVar102,auVar37);
  auVar38._8_8_ = local_268._8_8_;
  auVar38._0_8_ = local_268._8_8_;
  auVar38._16_8_ = local_268._8_8_;
  auVar38._24_8_ = local_268._8_8_;
  auVar14 = vsubpd_avx(auVar119,auVar38);
  auVar151 = vsubpd_avx(auVar80,auVar38);
  auVar39._8_8_ = local_288._8_8_;
  auVar39._0_8_ = local_288._8_8_;
  auVar39._16_8_ = local_288._8_8_;
  auVar39._24_8_ = local_288._8_8_;
  auVar15 = vsubpd_avx(auVar157,auVar39);
  auVar143 = vsubpd_avx(auVar136,auVar39);
  dVar57 = auVar36._0_8_;
  dVar104 = auVar36._8_8_;
  dVar7 = auVar36._16_8_;
  dVar10 = auVar36._24_8_;
  dVar115 = auVar14._0_8_;
  dVar76 = auVar167._0_8_ * dVar115 - local_1c8 * dVar57;
  dVar159 = auVar14._8_8_;
  dVar105 = auVar167._0_8_ * dVar159 - dStack_1c0 * dVar104;
  dVar161 = auVar14._16_8_;
  dVar109 = auVar167._0_8_ * dVar161 - dStack_1b8 * dVar7;
  dVar166 = auVar14._24_8_;
  dVar113 = auVar167._0_8_ * dVar166 - dStack_1b0 * dVar10;
  dVar171 = auVar15._0_8_;
  dVar27 = local_1c8 * dVar171 - local_1a8 * dVar115;
  dVar186 = auVar15._8_8_;
  dVar43 = dStack_1c0 * dVar186 - dStack_1a0 * dVar159;
  dVar190 = auVar15._16_8_;
  dVar48 = dStack_1b8 * dVar190 - dStack_198 * dVar161;
  dVar192 = auVar15._24_8_;
  dVar53 = dStack_1b0 * dVar192 - dStack_190 * dVar166;
  dVar122 = local_1a8 * dVar57 - auVar167._0_8_ * dVar171;
  dVar126 = dStack_1a0 * dVar104 - auVar167._0_8_ * dVar186;
  dVar139 = dStack_198 * dVar7 - auVar167._0_8_ * dVar190;
  dVar91 = dStack_190 * dVar10 - auVar167._0_8_ * dVar192;
  dVar27 = dVar27 + dVar27;
  dVar43 = dVar43 + dVar43;
  dVar48 = dVar48 + dVar48;
  dVar53 = dVar53 + dVar53;
  dVar122 = dVar122 + dVar122;
  dVar126 = dVar126 + dVar126;
  dVar139 = dVar139 + dVar139;
  dVar91 = dVar91 + dVar91;
  dVar76 = dVar76 + dVar76;
  dVar105 = dVar105 + dVar105;
  dVar109 = dVar109 + dVar109;
  dVar113 = dVar113 + dVar113;
  auVar36 = vcvtps2pd_avx(auVar69._16_16_);
  auVar14 = vcvtps2pd_avx(auVar60);
  auVar15 = vcvtps2pd_avx(auVar189._16_16_);
  dVar74 = auVar135._0_8_;
  dVar107 = auVar135._8_8_;
  dVar8 = auVar135._16_8_;
  dVar11 = auVar135._24_8_;
  dVar169 = auVar151._0_8_;
  dVar28 = auVar167._0_8_ * dVar169 - local_1c8 * dVar74;
  dVar153 = auVar151._8_8_;
  dVar44 = auVar167._0_8_ * dVar153 - dStack_1c0 * dVar107;
  dVar170 = auVar151._16_8_;
  dVar49 = auVar167._0_8_ * dVar170 - dStack_1b8 * dVar8;
  dVar154 = auVar151._24_8_;
  dVar54 = auVar167._0_8_ * dVar154 - dStack_1b0 * dVar11;
  dVar194 = auVar143._0_8_;
  dVar59 = local_1c8 * dVar194 - dVar169 * local_1a8;
  dVar187 = auVar143._8_8_;
  dVar180 = dStack_1c0 * dVar187 - dVar153 * dStack_1a0;
  dVar191 = auVar143._16_8_;
  dVar47 = dStack_1b8 * dVar191 - dVar170 * dStack_198;
  dVar193 = auVar143._24_8_;
  dVar58 = dStack_1b0 * dVar193 - dVar154 * dStack_190;
  dVar94 = local_1a8 * dVar74 - auVar167._0_8_ * dVar194;
  dVar106 = dStack_1a0 * dVar107 - auVar167._0_8_ * dVar187;
  dVar111 = dStack_198 * dVar8 - auVar167._0_8_ * dVar191;
  dVar114 = dStack_190 * dVar11 - auVar167._0_8_ * dVar193;
  dVar59 = dVar59 + dVar59;
  dVar180 = dVar180 + dVar180;
  dVar47 = dVar47 + dVar47;
  dVar58 = dVar58 + dVar58;
  dVar94 = dVar94 + dVar94;
  dVar106 = dVar106 + dVar106;
  dVar111 = dVar111 + dVar111;
  dVar114 = dVar114 + dVar114;
  dVar28 = dVar28 + dVar28;
  dVar44 = dVar44 + dVar44;
  dVar49 = dVar49 + dVar49;
  dVar54 = dVar54 + dVar54;
  auVar135 = vcvtps2pd_avx(auVar188);
  auVar151 = vcvtps2pd_avx(auVar179._16_16_);
  auVar143 = vcvtps2pd_avx(auVar178);
  dVar93 = auVar36._0_8_;
  dVar110 = auVar36._8_8_;
  dVar9 = auVar36._16_8_;
  dVar12 = auVar36._24_8_;
  local_2d8 = auVar15._0_8_;
  dStack_2d0 = auVar15._8_8_;
  dStack_2c8 = auVar15._16_8_;
  dStack_2c0 = auVar15._24_8_;
  dVar124 = auVar167._0_8_ * local_2d8 - local_1c8 * dVar93;
  dVar129 = auVar167._0_8_ * dStack_2d0 - dStack_1c0 * dVar110;
  dVar141 = auVar167._0_8_ * dStack_2c8 - dStack_1b8 * dVar9;
  dVar162 = auVar167._0_8_ * dStack_2c0 - dStack_1b0 * dVar12;
  dVar195 = auVar14._0_8_;
  dVar173 = auVar14._8_8_;
  dVar174 = auVar14._16_8_;
  dVar175 = auVar14._24_8_;
  dVar176 = auVar135._0_8_;
  dVar95 = auVar167._0_8_ * dVar176 - dVar195 * local_1c8;
  dVar42 = auVar135._8_8_;
  dVar108 = auVar167._0_8_ * dVar42 - dVar173 * dStack_1c0;
  dVar184 = auVar135._16_8_;
  dVar112 = auVar167._0_8_ * dVar184 - dVar174 * dStack_1b8;
  dVar73 = auVar135._24_8_;
  dVar121 = auVar167._0_8_ * dVar73 - dVar175 * dStack_1b0;
  dVar29 = auVar151._0_8_;
  dVar155 = local_1c8 * dVar29 - local_1a8 * local_2d8;
  dVar45 = auVar151._8_8_;
  dVar160 = dStack_1c0 * dVar45 - dStack_1a0 * dStack_2d0;
  dVar50 = auVar151._16_8_;
  dVar125 = dStack_1b8 * dVar50 - dStack_198 * dStack_2c8;
  dVar55 = auVar151._24_8_;
  dVar128 = dStack_1b0 * dVar55 - dStack_190 * dStack_2c0;
  dVar177 = auVar143._0_8_;
  dVar123 = local_1c8 * dVar177 - local_1a8 * dVar176;
  dVar181 = auVar143._8_8_;
  dVar127 = dStack_1c0 * dVar181 - dStack_1a0 * dVar42;
  dVar183 = auVar143._16_8_;
  dVar140 = dStack_1b8 * dVar183 - dStack_198 * dVar184;
  dVar185 = auVar143._24_8_;
  dVar92 = dStack_1b0 * dVar185 - dStack_190 * dVar73;
  dVar26 = local_1a8 * dVar93 - auVar167._0_8_ * dVar29;
  dVar182 = dStack_1a0 * dVar110 - auVar167._0_8_ * dVar45;
  dVar52 = dStack_198 * dVar9 - auVar167._0_8_ * dVar50;
  dVar75 = dStack_190 * dVar12 - auVar167._0_8_ * dVar55;
  dVar30 = local_1a8 * dVar195 - auVar167._0_8_ * dVar177;
  dVar46 = dStack_1a0 * dVar173 - auVar167._0_8_ * dVar181;
  dVar51 = dStack_198 * dVar174 - auVar167._0_8_ * dVar183;
  dVar56 = dStack_190 * dVar175 - auVar167._0_8_ * dVar185;
  dVar123 = dVar123 + dVar123;
  dVar127 = dVar127 + dVar127;
  dVar140 = dVar140 + dVar140;
  dVar92 = dVar92 + dVar92;
  dVar155 = dVar155 + dVar155;
  dVar160 = dVar160 + dVar160;
  dVar125 = dVar125 + dVar125;
  dVar128 = dVar128 + dVar128;
  dVar30 = dVar30 + dVar30;
  dVar46 = dVar46 + dVar46;
  dVar51 = dVar51 + dVar51;
  dVar56 = dVar56 + dVar56;
  dVar26 = dVar26 + dVar26;
  dVar182 = dVar182 + dVar182;
  dVar52 = dVar52 + dVar52;
  dVar75 = dVar75 + dVar75;
  dVar95 = dVar95 + dVar95;
  dVar108 = dVar108 + dVar108;
  dVar112 = dVar112 + dVar112;
  dVar121 = dVar121 + dVar121;
  dVar124 = dVar124 + dVar124;
  dVar129 = dVar129 + dVar129;
  dVar141 = dVar141 + dVar141;
  dVar162 = dVar162 + dVar162;
  auVar158._0_8_ =
       ((local_1c8 * dVar76 - local_1a8 * dVar122) + local_3b8 * dVar27 + dVar57) * dVar72;
  auVar158._8_8_ =
       ((dStack_1c0 * dVar105 - dStack_1a0 * dVar126) + dStack_3b0 * dVar43 + dVar104) * dVar72;
  auVar158._16_8_ =
       ((dStack_1b8 * dVar109 - dStack_198 * dVar139) + dStack_3a8 * dVar48 + dVar7) * dVar72;
  auVar158._24_8_ =
       ((dStack_1b0 * dVar113 - dStack_190 * dVar91) + dStack_3a0 * dVar53 + dVar10) * dVar72;
  auVar164._0_8_ =
       ((local_1c8 * dVar28 - local_1a8 * dVar94) + local_3b8 * dVar59 + dVar74) * dVar72;
  auVar164._8_8_ =
       ((dStack_1c0 * dVar44 - dStack_1a0 * dVar106) + dStack_3b0 * dVar180 + dVar107) * dVar72;
  auVar164._16_8_ =
       ((dStack_1b8 * dVar49 - dStack_198 * dVar111) + dStack_3a8 * dVar47 + dVar8) * dVar72;
  auVar164._24_8_ =
       ((dStack_1b0 * dVar54 - dStack_190 * dVar114) + dStack_3a0 * dVar58 + dVar11) * dVar72;
  auVar70._0_8_ =
       dVar72 * ((local_1c8 * dVar124 - local_1a8 * dVar26) + local_3b8 * dVar155 + dVar93);
  auVar70._8_8_ =
       dVar72 * ((dStack_1c0 * dVar129 - dStack_1a0 * dVar182) + dStack_3b0 * dVar160 + dVar110);
  auVar70._16_8_ =
       dVar72 * ((dStack_1b8 * dVar141 - dStack_198 * dVar52) + dStack_3a8 * dVar125 + dVar9);
  auVar70._24_8_ =
       dVar72 * ((dStack_1b0 * dVar162 - dStack_190 * dVar75) + dStack_3a0 * dVar128 + dVar12);
  auVar40._0_8_ =
       dVar72 * (local_3b8 * dVar123 + dVar195 + (local_1c8 * dVar95 - local_1a8 * dVar30));
  auVar40._8_8_ =
       dVar72 * (dStack_3b0 * dVar127 + dVar173 + (dStack_1c0 * dVar108 - dStack_1a0 * dVar46));
  auVar40._16_8_ =
       dVar72 * (dStack_3a8 * dVar140 + dVar174 + (dStack_1b8 * dVar112 - dStack_198 * dVar51));
  auVar40._24_8_ =
       dVar72 * (dStack_3a0 * dVar92 + dVar175 + (dStack_1b0 * dVar121 - dStack_190 * dVar56));
  auVar147._0_8_ =
       local_188 * ((local_1a8 * dVar27 - auVar167._0_8_ * dVar76) + local_3b8 * dVar122 + dVar115);
  auVar147._8_8_ =
       dStack_180 *
       ((dStack_1a0 * dVar43 - auVar167._0_8_ * dVar105) + dStack_3b0 * dVar126 + dVar159);
  auVar147._16_8_ =
       dStack_178 *
       ((dStack_198 * dVar48 - auVar167._0_8_ * dVar109) + dStack_3a8 * dVar139 + dVar161);
  auVar147._24_8_ =
       dStack_170 *
       ((dStack_190 * dVar53 - auVar167._0_8_ * dVar113) + dStack_3a0 * dVar91 + dVar166);
  auVar168._0_8_ =
       local_188 * ((local_1a8 * dVar59 - auVar167._0_8_ * dVar28) + local_3b8 * dVar94 + dVar169);
  auVar168._8_8_ =
       dStack_180 *
       ((dStack_1a0 * dVar180 - auVar167._0_8_ * dVar44) + dStack_3b0 * dVar106 + dVar153);
  auVar168._16_8_ =
       dStack_178 *
       ((dStack_198 * dVar47 - auVar167._0_8_ * dVar49) + dStack_3a8 * dVar111 + dVar170);
  auVar168._24_8_ =
       dStack_170 *
       ((dStack_190 * dVar58 - auVar167._0_8_ * dVar54) + dStack_3a0 * dVar114 + dVar154);
  auVar172._0_8_ =
       local_188 *
       ((local_1a8 * dVar155 - auVar167._0_8_ * dVar124) + local_3b8 * dVar26 + local_2d8);
  auVar172._8_8_ =
       dStack_180 *
       ((dStack_1a0 * dVar160 - auVar167._0_8_ * dVar129) + dStack_3b0 * dVar182 + dStack_2d0);
  auVar172._16_8_ =
       dStack_178 *
       ((dStack_198 * dVar125 - auVar167._0_8_ * dVar141) + dStack_3a8 * dVar52 + dStack_2c8);
  auVar172._24_8_ =
       dStack_170 *
       ((dStack_190 * dVar128 - auVar167._0_8_ * dVar162) + dStack_3a0 * dVar75 + dStack_2c0);
  auVar81._0_8_ =
       local_188 * (local_3b8 * dVar30 + dVar176 + (local_1a8 * dVar123 - auVar167._0_8_ * dVar95));
  auVar81._8_8_ =
       dStack_180 *
       (dStack_3b0 * dVar46 + dVar42 + (dStack_1a0 * dVar127 - auVar167._0_8_ * dVar108));
  auVar81._16_8_ =
       dStack_178 *
       (dStack_3a8 * dVar51 + dVar184 + (dStack_198 * dVar140 - auVar167._0_8_ * dVar112));
  auVar81._24_8_ =
       dStack_170 *
       (dStack_3a0 * dVar56 + dVar73 + (dStack_190 * dVar92 - auVar167._0_8_ * dVar121));
  auVar88._0_8_ =
       local_168 * ((auVar167._0_8_ * dVar122 - local_1c8 * dVar27) + local_3b8 * dVar76 + dVar171);
  auVar88._8_8_ =
       dStack_160 *
       ((auVar167._0_8_ * dVar126 - dStack_1c0 * dVar43) + dStack_3b0 * dVar105 + dVar186);
  auVar88._16_8_ =
       dStack_158 *
       ((auVar167._0_8_ * dVar139 - dStack_1b8 * dVar48) + dStack_3a8 * dVar109 + dVar190);
  auVar88._24_8_ =
       dStack_150 *
       ((auVar167._0_8_ * dVar91 - dStack_1b0 * dVar53) + dStack_3a0 * dVar113 + dVar192);
  auVar152._0_8_ =
       local_168 * ((auVar167._0_8_ * dVar94 - local_1c8 * dVar59) + local_3b8 * dVar28 + dVar194);
  auVar152._8_8_ =
       dStack_160 *
       ((auVar167._0_8_ * dVar106 - dStack_1c0 * dVar180) + dStack_3b0 * dVar44 + dVar187);
  auVar152._16_8_ =
       dStack_158 *
       ((auVar167._0_8_ * dVar111 - dStack_1b8 * dVar47) + dStack_3a8 * dVar49 + dVar191);
  auVar152._24_8_ =
       dStack_150 *
       ((auVar167._0_8_ * dVar114 - dStack_1b0 * dVar58) + dStack_3a0 * dVar54 + dVar193);
  auVar137._0_8_ =
       local_168 * (local_3b8 * dVar124 + dVar29 + (auVar167._0_8_ * dVar26 - dVar155 * local_1c8));
  auVar137._8_8_ =
       dStack_160 *
       (dStack_3b0 * dVar129 + dVar45 + (auVar167._0_8_ * dVar182 - dVar160 * dStack_1c0));
  auVar137._16_8_ =
       dStack_158 *
       (dStack_3a8 * dVar141 + dVar50 + (auVar167._0_8_ * dVar52 - dVar125 * dStack_1b8));
  auVar137._24_8_ =
       dStack_150 *
       (dStack_3a0 * dVar162 + dVar55 + (auVar167._0_8_ * dVar75 - dVar128 * dStack_1b0));
  auVar148 = vcvtpd2ps_avx(auVar164);
  auVar83 = vcvtpd2ps_avx(auVar158);
  auVar165._0_8_ =
       local_168 * (dVar95 * local_3b8 + dVar177 + (auVar167._0_8_ * dVar30 - dVar123 * local_1c8));
  auVar165._8_8_ =
       dStack_160 *
       (dVar108 * dStack_3b0 + dVar181 + (auVar167._0_8_ * dVar46 - dVar127 * dStack_1c0));
  auVar165._16_8_ =
       dStack_158 *
       (dVar112 * dStack_3a8 + dVar183 + (auVar167._0_8_ * dVar51 - dVar140 * dStack_1b8));
  auVar165._24_8_ =
       dStack_150 *
       (dVar121 * dStack_3a0 + dVar185 + (auVar167._0_8_ * dVar56 - dVar92 * dStack_1b0));
  auVar120._16_16_ = auVar83;
  auVar120._0_16_ = auVar148;
  auVar13 = vcvtpd2ps_avx(auVar168);
  auVar96 = vcvtpd2ps_avx(auVar147);
  auVar142 = vcvtpd2ps_avx(auVar152);
  auVar103._16_16_ = auVar96;
  auVar103._0_16_ = auVar13;
  auVar60 = vcvtpd2ps_avx(auVar88);
  auVar89._16_16_ = auVar60;
  auVar89._0_16_ = auVar142;
  auVar178 = vcvtpd2ps_avx(auVar40);
  auVar188 = vcvtpd2ps_avx(auVar70);
  auVar3 = vcvtpd2ps_avx(auVar81);
  auVar4 = vcvtpd2ps_avx(auVar172);
  auVar82._16_16_ = auVar188;
  auVar82._0_16_ = auVar178;
  auVar71._16_16_ = auVar4;
  auVar71._0_16_ = auVar3;
  auVar5 = vcvtpd2ps_avx(auVar165);
  auVar6 = vcvtpd2ps_avx(auVar137);
  auVar41._16_16_ = auVar6;
  auVar41._0_16_ = auVar5;
  cVar19 = (char)uVar20;
  if (cVar19 == -1) {
    auVar138._16_16_ = auVar13;
    auVar138._0_16_ = auVar148;
    auVar14 = vshufpd_avx(auVar120,auVar138,2);
    auVar15 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar89);
    auVar36 = vpermpd_avx2(auVar103,0xe9);
    auVar36 = vblendps_avx(auVar15,auVar36,7);
    auVar15 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003,
                           auVar36);
    auVar14 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar14);
    auVar14 = vblendps_avx(auVar14,auVar15,0xa4);
    *pauVar1 = auVar14;
    auVar15 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
    auVar14 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar36);
    auVar36 = vshufpd_avx(auVar120,auVar120,1);
    auVar36 = vblendps_avx(auVar14,auVar36,0x92);
    pauVar1[1] = auVar36;
    auVar151 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
    auVar135 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
    auVar14 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001,
                           auVar103);
    auVar36 = vpermpd_avx2(auVar120,0xff);
    auVar36 = vblendpd_avx(auVar14,auVar36,1);
    auVar36 = vblendps_avx(auVar36,auVar89,0xe0);
    auVar36 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar36);
    pauVar1[2] = auVar36;
    auVar90._16_16_ = auVar3;
    auVar90._0_16_ = auVar178;
    auVar14 = vshufpd_avx(auVar82,auVar90,2);
    auVar116 = vpermps_avx2(auVar116,auVar41);
    auVar36 = vpermpd_avx2(auVar71,0xe9);
    auVar36 = vblendps_avx(auVar116,auVar36,7);
    auVar116 = vpermps_avx2(auVar61,auVar36);
    auVar61 = vpermps_avx2(auVar130,auVar14);
    auVar116 = vblendps_avx(auVar61,auVar116,0xa4);
    *pauVar24 = auVar116;
    auVar116 = vpermps_avx2(auVar15,auVar36);
    auVar36 = vshufpd_avx(auVar82,auVar82,1);
    auVar36 = vblendps_avx(auVar116,auVar36,0x92);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar18 * 0xc) = auVar36;
    auVar116 = vpermps_avx2(auVar135,auVar71);
    auVar36 = vpermpd_avx2(auVar82,0xff);
    auVar36 = vblendpd_avx(auVar116,auVar36,1);
    auVar36 = vblendps_avx(auVar36,auVar41,0xe0);
    auVar36 = vpermps_avx2(auVar151,auVar36);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar18 * 0xc) = auVar36;
  }
  else {
    if ((uVar20 & 1) != 0) {
      *(int *)*pauVar1 = auVar148._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar148,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar148,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar148,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x10) = auVar83._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar83,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar83,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar83,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)(*pauVar1 + 4) = auVar13._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar13,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar13,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar13,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x14) = auVar96._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar96,1);
      *(undefined4 *)pauVar1[2] = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar96,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar96,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)(*pauVar1 + 8) = auVar142._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar142,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar142,2);
      *(undefined4 *)pauVar1[1] = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar142,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(pauVar1[1] + 0x18) = auVar60._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar60,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar60,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar60,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)*pauVar24 = auVar178._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar178,1);
      *(undefined4 *)(param_2 + 0xc + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar178,2);
      *(undefined4 *)(param_2 + 0x18 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar178,3);
      *(undefined4 *)(param_2 + 0x24 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(param_2 + 0x30 + uVar18 * 0xc) = auVar188._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar188,1);
      *(undefined4 *)(param_2 + 0x3c + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar188,2);
      *(undefined4 *)(param_2 + 0x48 + uVar18 * 0xc) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar188,3);
      *(undefined4 *)(param_2 + 0x54 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)(param_2 + 4 + uVar18 * 0xc) = auVar3._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar3,1);
      *(undefined4 *)(param_2 + 0x10 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar3,2);
      *(undefined4 *)(param_2 + 0x1c + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar3,3);
      *(undefined4 *)(param_2 + 0x28 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(param_2 + 0x34 + uVar18 * 0xc) = auVar4._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar4,1);
      *(undefined4 *)(param_2 + 0x40 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar4,2);
      *(undefined4 *)(param_2 + 0x4c + uVar18 * 0xc) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar4,3);
      *(undefined4 *)(param_2 + 0x58 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 1) != 0) {
      *(int *)(param_2 + 8 + uVar18 * 0xc) = auVar5._0_4_;
    }
    if ((uVar20 & 2) != 0) {
      uVar2 = vextractps_avx(auVar5,1);
      *(undefined4 *)(param_2 + 0x14 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 4) != 0) {
      uVar2 = vextractps_avx(auVar5,2);
      *(undefined4 *)(param_2 + 0x20 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 8) != 0) {
      uVar2 = vextractps_avx(auVar5,3);
      *(undefined4 *)(param_2 + 0x2c + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x10) != 0) {
      *(int *)(param_2 + 0x38 + uVar18 * 0xc) = auVar6._0_4_;
    }
    if ((uVar20 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar6,1);
      *(undefined4 *)(param_2 + 0x44 + uVar18 * 0xc) = uVar2;
    }
    if ((uVar20 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar6,2);
      *(undefined4 *)(param_2 + 0x50 + uVar18 * 0xc) = uVar2;
    }
    if (cVar19 < '\0') {
      uVar2 = vextractps_avx(auVar6,3);
      *(undefined4 *)(param_2 + 0x5c + uVar18 * 0xc) = uVar2;
    }
  }
  return;
}


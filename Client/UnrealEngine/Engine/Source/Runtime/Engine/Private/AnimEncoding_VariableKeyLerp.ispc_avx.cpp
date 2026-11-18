// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GetVariableKeyLerpPoseRotations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CuniCunfCunTCuniCuni_avx @ 140c27dc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetVariableKeyLerpPoseRotations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CuniCunfCunTCuniCuni_avx
               (longlong param_1,longlong param_2,uint *param_3,uint *param_4,int param_5,
               float param_6,char param_7,uint param_8,uint param_9)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulonglong uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  int iVar38;
  longlong lVar39;
  longlong lVar40;
  uint *puVar41;
  longlong lVar42;
  int iVar43;
  int iVar44;
  longlong lVar45;
  uint uVar46;
  int iVar47;
  longlong lVar48;
  char cVar49;
  longlong lVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [32];
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
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
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
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar73 [16];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  uint uVar98;
  float fVar139;
  uint uVar140;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  uint uVar99;
  float fVar100;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  uint uVar146;
  uint uVar149;
  uint uVar152;
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  uint uVar143;
  uint uVar155;
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  uint uVar141;
  uint uVar144;
  uint uVar147;
  uint uVar150;
  uint uVar153;
  uint uVar156;
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
  undefined1 auVar123 [32];
  float fVar142;
  float fVar145;
  float fVar148;
  float fVar151;
  float fVar154;
  float fVar157;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
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
  uint uVar158;
  uint uVar184;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar159;
  uint uVar180;
  uint uVar182;
  undefined1 auVar160 [16];
  uint uVar186;
  uint uVar189;
  uint uVar191;
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  uint uVar193;
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  float fVar181;
  float fVar183;
  float fVar185;
  float fVar187;
  float fVar190;
  float fVar192;
  float fVar194;
  undefined1 auVar171 [32];
  undefined1 auVar188 [16];
  undefined1 auVar163 [16];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  float fVar195;
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  float fVar204;
  float fVar205;
  float fVar207;
  float fVar209;
  float fVar210;
  undefined1 auVar198 [32];
  undefined1 auVar208 [16];
  float fVar206;
  float fVar211;
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [32];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  undefined1 auVar217 [32];
  undefined1 auVar218 [32];
  undefined1 auVar219 [32];
  undefined1 auVar220 [32];
  undefined1 auVar221 [32];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar225 [32];
  undefined1 auVar226 [32];
  undefined1 auVar227 [32];
  undefined1 auVar228 [32];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar233 [32];
  undefined1 auVar234 [32];
  undefined1 auVar235 [32];
  undefined1 auVar236 [32];
  undefined1 auVar237 [32];
  undefined1 auVar238 [64];
  float fVar239;
  undefined1 auVar240 [16];
  float fVar244;
  float fVar245;
  float fVar246;
  float fVar247;
  float fVar248;
  float fVar249;
  float fVar250;
  undefined1 auVar241 [32];
  undefined1 auVar242 [32];
  undefined1 auVar243 [32];
  undefined1 auVar251 [32];
  undefined1 auVar252 [32];
  undefined1 auVar253 [32];
  undefined1 auVar254 [32];
  undefined1 auVar255 [32];
  undefined1 auVar256 [32];
  undefined1 auVar257 [32];
  undefined1 auVar258 [32];
  undefined1 auVar259 [32];
  undefined1 auVar260 [32];
  undefined1 auVar261 [32];
  undefined1 auVar262 [32];
  undefined1 auVar263 [32];
  undefined1 auVar264 [32];
  undefined1 auVar265 [32];
  undefined1 auVar266 [32];
  undefined1 auVar267 [32];
  undefined1 auVar268 [32];
  float fVar269;
  float fVar283;
  float fVar284;
  float fVar285;
  float fVar286;
  float fVar287;
  float fVar288;
  undefined1 auVar270 [32];
  undefined1 auVar271 [32];
  undefined1 auVar272 [32];
  float fVar289;
  undefined1 auVar273 [32];
  undefined1 auVar274 [32];
  undefined1 auVar275 [32];
  undefined1 auVar276 [32];
  undefined1 auVar277 [32];
  undefined1 auVar278 [32];
  undefined1 auVar279 [32];
  undefined1 auVar280 [32];
  undefined1 auVar281 [32];
  undefined1 auVar290 [32];
  undefined1 auVar291 [32];
  undefined1 auVar292 [32];
  undefined1 auVar293 [32];
  undefined1 auVar294 [32];
  undefined1 auVar295 [32];
  undefined1 auVar296 [32];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [32];
  undefined1 auVar301 [32];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [64];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [32];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  ulonglong local_810;
  undefined1 local_7c0 [32];
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
  uint local_540;
  uint uStack_53c;
  uint uStack_538;
  uint uStack_534;
  uint uStack_530;
  uint uStack_52c;
  uint uStack_528;
  uint uStack_524;
  uint local_520;
  uint uStack_51c;
  uint uStack_518;
  uint uStack_514;
  uint uStack_510;
  uint uStack_50c;
  uint uStack_508;
  uint uStack_504;
  undefined1 local_4e0 [32];
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
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float local_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
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
  undefined1 local_3a0 [8];
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  undefined1 local_380 [8];
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
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
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  ulonglong local_240 [3];
  undefined8 uStack_228;
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 auVar57 [32];
  undefined1 auVar85 [32];
  undefined1 auVar199 [32];
  undefined1 auVar224 [32];
  undefined1 auVar232 [32];
  undefined1 auVar282 [64];
  undefined1 auVar302 [32];
  undefined1 auVar303 [32];
  undefined1 auVar313 [32];
  undefined1 auVar314 [32];
  
  lVar39 = (longlong)(int)param_8;
  uVar28 = *(int *)(&DAT_151c6caa0 + lVar39 * 4) * *(int *)(&DAT_151c6ca80 + lVar39 * 4);
  uVar46 = 0;
  uVar27 = 0x18;
  if (lVar39 != 3) {
    uVar27 = 0;
  }
  uVar32 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar32 = param_9;
  }
  uVar36 = (ulonglong)param_8;
  if (0 < (int)(uVar32 & 0xfffffff8)) {
    auVar105 = vpshufd_avx(ZEXT416(uVar27),0);
    auVar212 = vpblendw_avx(auVar105,(undefined1  [16])0x0,0xcc);
    auVar105 = vpmovzxdq_avx(auVar105);
    auVar21 = vshufps_avx(ZEXT416(uVar28),ZEXT416(uVar28),0);
    auVar101._8_8_ = 0;
    auVar101._0_8_ = (longlong)param_4 + 3;
    auVar101 = vpshufd_avx(auVar101,0x44);
    auVar212 = vpaddq_avx(auVar101,auVar212);
    auVar105 = vpaddq_avx(auVar101,auVar105);
    uVar46 = 0;
    auVar101 = vpshufd_avx(ZEXT416((0.0 < param_6) - 1),0);
    auVar56._16_16_ = auVar101;
    auVar56._0_16_ = auVar101;
    fVar239 = (float)(param_5 + -1) * param_6;
    uVar26 = (int)fVar239;
    if ((int)fVar239 < 1) {
      uVar26 = 0;
    }
    auVar101 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
    if ((int)(param_5 - 2U) < (int)uVar26) {
      uVar26 = param_5 - 2U;
    }
    auVar163 = vpshufd_avx(ZEXT416(uVar26),0);
    auVar188 = vshufps_avx(ZEXT416((uint)fVar239),ZEXT416((uint)fVar239),0);
    auVar64._16_16_ = auVar188;
    auVar64._0_16_ = auVar188;
    auVar306 = ZEXT1664(CONCAT412(__real_00000001,
                                  CONCAT48(__real_00000001,CONCAT44(__real_00000001,__real_00000001)
                                          )));
    do {
      uVar34 = (ulonglong)(uVar46 * 8);
      auVar188 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar34);
      auVar230 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar34);
      auVar231 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar34);
      auVar54 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar34),auVar188,0xdd);
      auVar102 = vshufps_avx(auVar230,auVar231,0xdd);
      auVar102 = vpslld_avx(auVar102,4);
      auVar54 = vpslld_avx(auVar54,4);
      uVar26 = *(uint *)((longlong)param_3 + (longlong)auVar54._0_4_ + 8);
      uVar158 = *(uint *)((longlong)param_3 + (longlong)auVar102._0_4_ + 8);
      uVar29 = *(uint *)((longlong)param_3 + (longlong)auVar54._0_4_ + 0xc);
      auVar160 = ZEXT416(uVar29);
      uVar140 = *(uint *)((longlong)param_3 + (longlong)auVar102._0_4_ + 0xc);
      auVar55 = auVar306._0_16_;
      auVar54 = vpcmpeqd_avx(ZEXT416(uVar140),auVar55);
      auVar102 = vpcmpeqd_avx(auVar55,auVar160);
      auVar54 = vpor_avx(auVar54,auVar102);
      auVar102 = ZEXT416(uVar140);
      puVar41 = param_3;
      if ((((SUB161(auVar54 >> 0x1f,0) & 1) != 0 || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x5f,0) & 1) != 0) || auVar54[0xf] < '\0') {
        auVar162 = vpcmpeqd_avx(auVar102,auVar55);
        auVar297 = vpcmpeqd_avx(auVar160,auVar55);
        auVar251._16_16_ = auVar162;
        auVar251._0_16_ = auVar297;
        uVar180 = auVar297._0_4_;
        uVar182 = auVar162._0_4_;
        lVar39 = (longlong)(int)(uVar180 & uVar26);
        lVar33 = (longlong)(int)(uVar182 & uVar158);
        auVar54 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                 (ulonglong)(uVar182 & _UNK_150b50d50) + lVar33)),
                                ZEXT416(*(uint *)((ulonglong)(auVar162._4_4_ & _UNK_150b50d54) +
                                                 (longlong)param_4)),0x10);
        auVar55 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                 (ulonglong)(uVar182 & _UNK_150b50d70) + lVar33)),
                                ZEXT416(*(uint *)((ulonglong)(auVar162._4_4_ & _UNK_150b50d74) +
                                                 (longlong)param_4)),0x10);
        auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar162._8_4_ & _UNK_150b50d58) +
                                                         (longlong)param_4)),0x20);
        auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar162._8_4_ & _UNK_150b50d78) +
                                                         (longlong)param_4)),0x20);
        auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar162._12_4_ & _UNK_150b50d5c) +
                                                         (longlong)param_4)),0x30);
        auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar162._12_4_ & _UNK_150b50d7c) +
                                                         (longlong)param_4)),0x30);
        auVar162 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                  (ulonglong)
                                                  (uVar180 &
                                                  ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                                  ) + lVar39)),
                                 ZEXT416(*(uint *)((ulonglong)(auVar297._4_4_ & _UNK_150b50d44) +
                                                  (longlong)param_4)),0x10);
        auVar70 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                 (ulonglong)
                                                 (uVar180 &
                                                 ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                                 ) + lVar39)),
                                ZEXT416(*(uint *)((ulonglong)(auVar297._4_4_ & _UNK_150b50d64) +
                                                 (longlong)param_4)),0x10);
        auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar297._8_4_ & _UNK_150b50d48) +
                                                           (longlong)param_4)),0x20);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar297._8_4_ & _UNK_150b50d68) +
                                                         (longlong)param_4)),0x20);
        auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar297._12_4_ & _UNK_150b50d4c) +
                                                           (longlong)param_4)),0x30);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar297._12_4_ & _UNK_150b50d6c) +
                                                         (longlong)param_4)),0x30);
        auVar297 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar33)),ZEXT416(*param_4),
                                 0x10);
        auVar297 = vinsertps_avx(auVar297,ZEXT416(*param_4),0x20);
        auVar297 = vinsertps_avx(auVar297,ZEXT416(*param_4),0x30);
        auVar196 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar39)),ZEXT416(*param_4),
                                 0x10);
        auVar196 = vinsertps_avx(auVar196,ZEXT416(*param_4),0x20);
        auVar196 = vinsertps_avx(auVar196,ZEXT416(*param_4),0x30);
        auVar270._16_16_ = auVar297;
        auVar270._0_16_ = auVar196;
        auVar306 = ZEXT1664(CONCAT412(__real_00000001,
                                      CONCAT48(__real_00000001,
                                               CONCAT44(__real_00000001,__real_00000001))));
        auVar164._16_16_ = auVar54;
        auVar164._0_16_ = auVar162;
        auVar257._16_16_ = auVar55;
        auVar257._0_16_ = auVar70;
        auVar290._0_4_ = auVar196._0_4_ * auVar196._0_4_;
        auVar290._4_4_ = auVar196._4_4_ * auVar196._4_4_;
        auVar290._8_4_ = auVar196._8_4_ * auVar196._8_4_;
        auVar290._12_4_ = auVar196._12_4_ * auVar196._12_4_;
        auVar290._16_4_ = auVar297._0_4_ * auVar297._0_4_;
        auVar290._20_4_ = auVar297._4_4_ * auVar297._4_4_;
        auVar290._24_4_ = auVar297._8_4_ * auVar297._8_4_;
        auVar290._28_4_ = auVar297._12_4_ * auVar297._12_4_;
        auVar214._4_4_ = __real_3f800000;
        auVar214._0_4_ = __real_3f800000;
        auVar214._8_4_ = __real_3f800000;
        auVar214._12_4_ = __real_3f800000;
        auVar214._16_4_ = __real_3f800000;
        auVar214._20_4_ = __real_3f800000;
        auVar214._24_4_ = __real_3f800000;
        auVar214._28_4_ = __real_3f800000;
        auVar214 = vsubps_avx(auVar214,auVar290);
        auVar300._0_4_ = auVar162._0_4_ * auVar162._0_4_;
        auVar300._4_4_ = auVar162._4_4_ * auVar162._4_4_;
        auVar300._8_4_ = auVar162._8_4_ * auVar162._8_4_;
        auVar300._12_4_ = auVar162._12_4_ * auVar162._12_4_;
        auVar300._16_4_ = auVar54._0_4_ * auVar54._0_4_;
        auVar300._20_4_ = auVar54._4_4_ * auVar54._4_4_;
        auVar300._24_4_ = auVar54._8_4_ * auVar54._8_4_;
        auVar300._28_4_ = auVar54._12_4_ * auVar54._12_4_;
        auVar214 = vsubps_avx(auVar214,auVar300);
        auVar301._0_4_ = auVar70._0_4_ * auVar70._0_4_;
        auVar301._4_4_ = auVar70._4_4_ * auVar70._4_4_;
        auVar301._8_4_ = auVar70._8_4_ * auVar70._8_4_;
        auVar301._12_4_ = auVar70._12_4_ * auVar70._12_4_;
        auVar301._16_4_ = auVar55._0_4_ * auVar55._0_4_;
        auVar301._20_4_ = auVar55._4_4_ * auVar55._4_4_;
        auVar301._24_4_ = auVar55._8_4_ * auVar55._8_4_;
        auVar301._28_4_ = auVar55._12_4_ * auVar55._12_4_;
        auVar290 = vsubps_avx(auVar214,auVar301);
        auVar214 = vcmpps_avx(ZEXT432(0) << 0x20,auVar290,1);
        auVar290 = vsqrtps_avx(auVar290);
        auVar291._0_4_ = auVar214._0_4_ & auVar290._0_4_;
        auVar291._4_4_ = auVar214._4_4_ & auVar290._4_4_;
        auVar291._8_4_ = auVar214._8_4_ & auVar290._8_4_;
        auVar291._12_4_ = auVar214._12_4_ & auVar290._12_4_;
        auVar291._16_4_ = auVar214._16_4_ & auVar290._16_4_;
        auVar291._20_4_ = auVar214._20_4_ & auVar290._20_4_;
        auVar291._24_4_ = auVar214._24_4_ & auVar290._24_4_;
        auVar291._28_4_ = auVar214._28_4_ & auVar290._28_4_;
        _local_3e0 = vmaskmovps_avx(auVar251,auVar270);
        _local_3c0 = vmaskmovps_avx(auVar251,auVar164);
        _local_3a0 = vmaskmovps_avx(auVar251,auVar257);
        _local_380 = vmaskmovps_avx(auVar251,auVar291);
        puVar41 = param_4;
      }
      auVar215._16_16_ = auVar231;
      auVar215._0_16_ = auVar188;
      auVar198._16_16_ = auVar230;
      auVar198._0_16_ = *(undefined1 (*) [16])(param_2 + uVar34);
      auVar230 = auVar306._0_16_;
      auVar188 = vpor_avx(auVar160 ^ auVar230,auVar102 ^ auVar230);
      if (auVar188 != (undefined1  [16])0x0) {
        auVar231 = vpcmpeqd_avx(auVar102,auVar230);
        auVar54._4_4_ = __real_00000002;
        auVar54._0_4_ = __real_00000002;
        auVar54._8_4_ = __real_00000002;
        auVar54._12_4_ = __real_00000002;
        auVar188 = vpcmpgtd_avx(auVar54,auVar102);
        auVar54 = vpcmpgtd_avx(auVar54,auVar160);
        auVar74._16_16_ = auVar188;
        auVar74._0_16_ = auVar54;
        auVar74 = auVar74 | auVar56;
        auVar188 = auVar74._0_16_;
        auVar54 = vpcmpeqd_avx(auVar230,auVar160);
        auVar165._16_16_ = auVar231;
        auVar165._0_16_ = auVar54;
        auVar214 = auVar74 & ~auVar165;
        if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 || (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0') ||
              (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0') ||
            (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
          auVar166._0_4_ = ~auVar54._0_4_ & auVar74._0_4_;
          auVar166._4_4_ = ~auVar54._4_4_ & auVar74._4_4_;
          auVar166._8_4_ = ~auVar54._8_4_ & auVar74._8_4_;
          auVar166._12_4_ = ~auVar54._12_4_ & auVar74._12_4_;
          auVar166._16_4_ = ~auVar231._0_4_ & auVar74._16_4_;
          auVar166._20_4_ = ~auVar231._4_4_ & auVar74._20_4_;
          auVar166._24_4_ = ~auVar231._8_4_ & auVar74._24_4_;
          auVar166._28_4_ = ~auVar231._12_4_ & auVar74._28_4_;
          local_7c0 = vblendvps_avx(local_7c0,ZEXT1632(ZEXT816(0)),auVar166);
          local_4e0 = vblendvps_avx(local_4e0,ZEXT1632(ZEXT816(0)),auVar166);
        }
        auVar297 = ZEXT816(0);
        auVar290 = ZEXT1632(auVar297);
        auVar54 = vpmovsxdq_avx(ZEXT416(uVar158));
        auVar55 = vpshufd_avx(ZEXT416(uVar158),0xee);
        auVar55 = vpmovsxdq_avx(auVar55);
        auVar162 = vpmovsxdq_avx(ZEXT416(uVar26));
        auVar70 = vpshufd_avx(ZEXT416(uVar26),0xee);
        auVar70 = vpmovsxdq_avx(auVar70);
        auVar214 = vcmpps_avx(ZEXT1632(auVar297),ZEXT1632(auVar297),0xf);
        uVar158 = auVar74._0_4_ ^ auVar214._0_4_;
        uVar180 = auVar74._4_4_ ^ auVar214._4_4_;
        uVar182 = auVar74._8_4_ ^ auVar214._8_4_;
        uVar184 = auVar74._12_4_ ^ auVar214._12_4_;
        uVar186 = auVar74._16_4_ ^ auVar214._16_4_;
        uVar189 = auVar74._20_4_ ^ auVar214._20_4_;
        uVar191 = auVar74._24_4_ ^ auVar214._24_4_;
        uVar193 = auVar74._28_4_ ^ auVar214._28_4_;
        auVar230 = vpcmpeqd_avx(auVar230,auVar160);
        auVar252._0_4_ = ~auVar230._0_4_ & uVar158;
        auVar252._4_4_ = ~auVar230._4_4_ & uVar180;
        auVar252._8_4_ = ~auVar230._8_4_ & uVar182;
        auVar252._12_4_ = ~auVar230._12_4_ & uVar184;
        auVar252._16_4_ = ~auVar231._0_4_ & uVar186;
        auVar252._20_4_ = ~auVar231._4_4_ & uVar189;
        auVar252._24_4_ = ~auVar231._8_4_ & uVar191;
        auVar252._28_4_ = ~auVar231._12_4_ & uVar193;
        uVar26 = vmovmskps_avx(auVar252);
        auVar214 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        if (uVar26 != 0) {
          auVar297 = vpcmpeqd_avx(auVar188,auVar188);
          auVar230._0_4_ = uVar140 + auVar297._0_4_;
          auVar230._4_4_ = auVar297._4_4_;
          auVar230._8_4_ = auVar297._8_4_;
          auVar230._12_4_ = auVar297._12_4_;
          auVar188._0_4_ = uVar29 + auVar297._0_4_;
          auVar188._4_4_ = auVar297._4_4_;
          auVar188._8_4_ = auVar297._8_4_;
          auVar188._12_4_ = auVar297._12_4_;
          auVar216._16_16_ = auVar230;
          auVar216._0_16_ = auVar188;
          if (__real_3f800000 <= param_6) {
            local_7c0 = vblendvps_avx(local_7c0,auVar216,auVar252);
            local_4e0 = vblendvps_avx(local_4e0,auVar216,auVar252);
          }
          else {
            auVar298 = vpmulld_avx(auVar160,auVar21);
            auVar196 = vpmulld_avx(auVar102,auVar21);
            auVar297 = vpmovsxdq_avx(auVar196);
            auVar196 = vpshufd_avx(auVar196,0xee);
            auVar196 = vpmovsxdq_avx(auVar196);
            auVar208 = vpmovsxdq_avx(auVar298);
            auVar298 = vpshufd_avx(auVar298,0xee);
            auVar298 = vpmovsxdq_avx(auVar298);
            auVar54 = vpaddq_avx(auVar105,auVar54);
            auVar54 = vpaddq_avx(auVar54,auVar297);
            auVar55 = vpaddq_avx(auVar212,auVar55);
            auVar55 = vpaddq_avx(auVar55,auVar196);
            auVar162 = vpaddq_avx(auVar105,auVar162);
            auVar297 = vpaddq_avx(auVar162,auVar208);
            auVar70 = vpaddq_avx(auVar70,auVar212);
            auVar70 = vpaddq_avx(auVar70,auVar298);
            auVar196._0_4_ = auVar54._0_4_ & (uint)__real_fffffffffffffffc;
            auVar196._4_4_ = auVar54._4_4_ & __real_fffffffffffffffc._4_4_;
            auVar196._8_4_ = auVar54._8_4_ & (uint)__real_fffffffffffffffc;
            auVar196._12_4_ = auVar54._12_4_ & __real_fffffffffffffffc._4_4_;
            auVar199._16_4_ = auVar55._0_4_ & (uint)__real_fffffffffffffffc;
            auVar199._0_16_ = auVar196;
            auVar199._20_4_ = auVar55._4_4_ & __real_fffffffffffffffc._4_4_;
            auVar199._24_4_ = auVar55._8_4_ & (uint)__real_fffffffffffffffc;
            auVar199._28_4_ = auVar55._12_4_ & __real_fffffffffffffffc._4_4_;
            auVar298._0_4_ = auVar297._0_4_ & (uint)__real_fffffffffffffffc;
            auVar298._4_4_ = auVar297._4_4_ & __real_fffffffffffffffc._4_4_;
            auVar298._8_4_ = auVar297._8_4_ & (uint)__real_fffffffffffffffc;
            auVar298._12_4_ = auVar297._12_4_ & __real_fffffffffffffffc._4_4_;
            auVar302._16_4_ = auVar70._0_4_ & (uint)__real_fffffffffffffffc;
            auVar302._0_16_ = auVar298;
            auVar302._20_4_ = auVar70._4_4_ & __real_fffffffffffffffc._4_4_;
            auVar302._24_4_ = auVar70._8_4_ & (uint)__real_fffffffffffffffc;
            auVar302._28_4_ = auVar70._12_4_ & __real_fffffffffffffffc._4_4_;
            auVar214 = vcvtdq2ps_avx(auVar216);
            local_2a0 = auVar101._0_4_;
            fStack_29c = auVar101._4_4_;
            fStack_298 = auVar101._8_4_;
            fStack_294 = auVar101._12_4_;
            auVar55._0_4_ = (int)(auVar214._0_4_ * local_2a0);
            auVar55._4_4_ = (int)(auVar214._4_4_ * fStack_29c);
            auVar55._8_4_ = (int)(auVar214._8_4_ * fStack_298);
            auVar55._12_4_ = (int)(auVar214._12_4_ * fStack_294);
            auVar57._16_4_ = (int)(auVar214._16_4_ * local_2a0);
            auVar57._0_16_ = auVar55;
            auVar57._20_4_ = (int)(auVar214._20_4_ * fStack_29c);
            auVar57._24_4_ = (int)(auVar214._24_4_ * fStack_298);
            auVar57._28_4_ = (int)(auVar214._28_4_ * fStack_294);
            auVar54 = vpmaxsd_avx(auVar57._16_16_,ZEXT816(0) << 0x20);
            auVar55 = vpmaxsd_avx(auVar55,ZEXT816(0) << 0x20);
            auVar306 = ZEXT1664(auVar230);
            auVar70 = vpminsd_avx(auVar54,auVar230);
            auVar297 = vpminsd_avx(auVar55,auVar188);
            auVar271._16_16_ = auVar70;
            auVar271._0_16_ = auVar297;
            auVar282 = ZEXT3264(auVar271);
            auVar208 = auVar199._16_16_;
            auVar304 = auVar302._16_16_;
            cVar49 = (char)uVar26;
            if (param_5 < 0x100) {
              auVar71 = vpmovsxdq_avx(auVar297);
              auVar310 = vpshufd_avx(auVar297,0xee);
              auVar310 = vpmovsxdq_avx(auVar310);
              auVar310 = vpaddq_avx(auVar304,auVar310);
              auVar71 = vpaddq_avx(auVar298,auVar71);
              auVar312 = vpcmpeqd_avx(auVar231,auVar231);
              if ((uVar26 & 1) != 0) {
                auVar162 = ZEXT116(*auVar71._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar71 = vpinsrb_avx(auVar162,(uint)*auVar71._8_8_,1);
                auVar162 = vpblendw_avx(auVar71,auVar162,0xe);
              }
              if ((uVar26 & 4) != 0) {
                auVar71 = vpmovzxwd_avx(auVar162);
                auVar71 = vpinsrb_avx(auVar71,(uint)*auVar310._0_8_,2);
                auVar71 = vpinsrb_avx(auVar71,(uint)auVar162[3],3);
                auVar162 = vpblendw_avx(auVar71,auVar162,0xc);
              }
              if ((uVar26 & 8) != 0) {
                auVar71 = vpmovzxwd_avx(auVar162);
                auVar71 = vpinsrb_avx(auVar71,(uint)auVar162[2],2);
                auVar310 = vpinsrb_avx(auVar71,(uint)*auVar310._8_8_,3);
                auVar162 = vpblendw_avx(auVar310,auVar162,0xc);
              }
              auVar71 = vpmovsxdq_avx(auVar70);
              auVar310 = vpshufd_avx(auVar70,0xee);
              auVar310 = vpmovsxdq_avx(auVar310);
              auVar310 = vpaddq_avx(auVar310,auVar208);
              auVar71 = vpaddq_avx(auVar196,auVar71);
              if ((uVar26 & 0x10) != 0) {
                auVar305 = vpshufb_avx(auVar162,___xmm_80800706808005048080030203020100);
                auVar305 = vpinsrb_avx(auVar305,(uint)*auVar71._0_8_,4);
                auVar305 = vpinsrb_avx(auVar305,(uint)auVar162[5],5);
                auVar162 = vpblendw_avx(auVar305,auVar162,8);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar305 = vpshufb_avx(auVar162,___xmm_80800706808005048080030403020100);
                auVar71 = vpinsrb_avx(auVar305,(uint)*auVar71._8_8_,5);
                auVar162 = vpblendw_avx(auVar71,auVar162,8);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar71 = vpshufb_avx(auVar162,___xmm_80800706808005048080050403020100);
                auVar71 = vpinsrb_avx(auVar71,(uint)*auVar310._0_8_,6);
                auVar162 = vpinsrb_avx(auVar71,(uint)auVar162[7],7);
              }
              if (cVar49 < '\0') {
                auVar162 = vpshufb_avx(auVar162,___xmm_80800706808005048006050403020100);
                auVar162 = vpinsrb_avx(auVar162,(uint)*auVar310._8_8_,7);
              }
              auVar71 = vpmovzxbd_avx(auVar162);
              auVar162 = vpshufd_avx(auVar162,0x55);
              auVar305 = vpmovzxbd_avx(auVar162);
              auVar162 = vpcmpgtd_avx(auVar305,auVar163);
              auVar20 = auVar312 ^ auVar162;
              auVar310 = vpcmpgtd_avx(auVar71,auVar163);
              auVar229 = auVar312 ^ auVar310;
              auVar238 = ZEXT1664(auVar229);
              auVar76._16_16_ = auVar20;
              auVar76._0_16_ = auVar229;
              auVar109._16_16_ = auVar162;
              auVar109._0_16_ = auVar310;
              auVar290 = auVar252 & ~auVar109;
              local_540 = auVar229._0_4_;
              uStack_53c = auVar229._4_4_;
              uStack_538 = auVar229._8_4_;
              uStack_534 = auVar229._12_4_;
              uStack_530 = auVar20._0_4_;
              uStack_52c = auVar20._4_4_;
              uStack_528 = auVar20._8_4_;
              uStack_524 = auVar20._12_4_;
              auVar214 = auVar271;
              if ((((((((SUB321(auVar290 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar290 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar290 >> 0x5f,0) & 1) != 0) || SUB321(auVar290 >> 0x7f,0) != '\0')
                    || (SUB321(auVar290 >> 0x9f,0) & 1) != 0) || SUB321(auVar290 >> 0xbf,0) != '\0')
                  || (SUB321(auVar290 >> 0xdf,0) & 1) != 0) || auVar290[0x1f] < '\0') {
                auVar162 = vpcmpgtd_avx(auVar305,auVar163);
                auVar310 = vpcmpgtd_avx(auVar71,auVar163);
                auVar110._16_16_ = auVar162;
                auVar110._0_16_ = auVar310;
                auVar214 = vblendvps_avx(auVar216,auVar271,auVar110);
                auVar54 = vpcmpgtd_avx(auVar230,auVar54);
                auVar55 = vpcmpgtd_avx(auVar188,auVar55);
                uVar29 = auVar55._0_4_ & local_540;
                uVar140 = auVar55._4_4_ & uStack_53c;
                uVar143 = auVar55._8_4_ & uStack_538;
                uVar146 = auVar55._12_4_ & uStack_534;
                uVar149 = auVar54._0_4_ & uStack_530;
                uVar152 = auVar54._4_4_ & uStack_52c;
                uVar155 = auVar54._8_4_ & uStack_528;
                uVar98 = auVar54._12_4_ & uStack_524;
                auVar111._0_4_ = uVar29 & auVar252._0_4_;
                auVar111._4_4_ = uVar140 & auVar252._4_4_;
                auVar111._8_4_ = uVar143 & auVar252._8_4_;
                auVar111._12_4_ = uVar146 & auVar252._12_4_;
                auVar111._16_4_ = uVar149 & auVar252._16_4_;
                auVar111._20_4_ = uVar152 & auVar252._20_4_;
                auVar111._24_4_ = uVar155 & auVar252._24_4_;
                auVar111._28_4_ = uVar98 & auVar252._28_4_;
                iVar43 = vmovmskps_avx(auVar111);
                if (iVar43 != 0) {
                  auVar238 = ZEXT3264(auVar271);
                  do {
                    auVar162 = vpcmpeqd_avx(auVar188,auVar188);
                    auVar310 = vpsubd_avx(auVar238._0_16_,auVar312);
                    auVar55 = vpmovsxdq_avx(auVar310);
                    auVar54 = vpshufd_avx(auVar310,0xee);
                    auVar54 = vpmovsxdq_avx(auVar54);
                    auVar54 = vpaddq_avx(auVar304,auVar54);
                    auVar55 = vpaddq_avx(auVar298,auVar55);
                    uVar31 = vmovmskps_avx(auVar111);
                    if ((uVar31 & 1) != 0) {
                      auVar312 = ZEXT116(*auVar55._0_8_);
                    }
                    if ((uVar31 & 2) != 0) {
                      auVar55 = vpinsrb_avx(auVar312,(uint)*auVar55._8_8_,1);
                      auVar312 = vpblendw_avx(auVar55,auVar312,0xe);
                    }
                    if ((uVar31 & 4) != 0) {
                      auVar55 = vpmovzxwd_avx(auVar312);
                      auVar55 = vpinsrb_avx(auVar55,(uint)*auVar54._0_8_,2);
                      auVar55 = vpinsrb_avx(auVar55,(uint)auVar312[3],3);
                      auVar312 = vpblendw_avx(auVar55,auVar312,0xc);
                    }
                    if ((uVar31 & 8) != 0) {
                      auVar55 = vpmovzxwd_avx(auVar312);
                      auVar55 = vpinsrb_avx(auVar55,(uint)auVar312[2],2);
                      auVar54 = vpinsrb_avx(auVar55,(uint)*auVar54._8_8_,3);
                      auVar312 = vpblendw_avx(auVar54,auVar312,0xc);
                    }
                    auVar162 = vpsubd_avx(auVar238._16_16_,auVar162);
                    auVar55 = vpmovsxdq_avx(auVar162);
                    auVar54 = vpshufd_avx(auVar162,0xee);
                    auVar54 = vpmovsxdq_avx(auVar54);
                    auVar54 = vpaddq_avx(auVar54,auVar208);
                    auVar55 = vpaddq_avx(auVar196,auVar55);
                    if ((uVar31 & 0x10) != 0) {
                      auVar20 = vpshufb_avx(auVar312,___xmm_80800706808005048080030203020100);
                      auVar20 = vpinsrb_avx(auVar20,(uint)*auVar55._0_8_,4);
                      auVar20 = vpinsrb_avx(auVar20,(uint)auVar312[5],5);
                      auVar312 = vpblendw_avx(auVar20,auVar312,8);
                    }
                    if ((uVar31 & 0x20) != 0) {
                      auVar20 = vpshufb_avx(auVar312,___xmm_80800706808005048080030403020100);
                      auVar55 = vpinsrb_avx(auVar20,(uint)*auVar55._8_8_,5);
                      auVar312 = vpblendw_avx(auVar55,auVar312,8);
                    }
                    if ((uVar31 & 0x40) != 0) {
                      auVar55 = vpshufb_avx(auVar312,___xmm_80800706808005048080050403020100);
                      auVar55 = vpinsrb_avx(auVar55,(uint)*auVar54._0_8_,6);
                      auVar312 = vpinsrb_avx(auVar55,(uint)auVar312[7],7);
                    }
                    if ((char)uVar31 < '\0') {
                      auVar55 = vpshufb_avx(auVar312,___xmm_80800706808005048006050403020100);
                      auVar312 = vpinsrb_avx(auVar55,(uint)*auVar54._8_8_,7);
                    }
                    auVar55 = vpmovzxbd_avx(auVar312);
                    auVar54 = vpshufd_avx(auVar312,0x55);
                    auVar54 = vpmovzxbd_avx(auVar54);
                    auVar54 = vpcmpgtd_avx(auVar54,auVar163);
                    auVar55 = vpcmpgtd_avx(auVar55,auVar163);
                    auVar312._0_4_ = uVar29 & auVar55._0_4_;
                    auVar312._4_4_ = uVar140 & auVar55._4_4_;
                    auVar312._8_4_ = uVar143 & auVar55._8_4_;
                    auVar312._12_4_ = uVar146 & auVar55._12_4_;
                    auVar314._16_4_ = uVar149 & auVar54._0_4_;
                    auVar314._0_16_ = auVar312;
                    auVar314._20_4_ = uVar152 & auVar54._4_4_;
                    auVar314._24_4_ = uVar155 & auVar54._8_4_;
                    auVar314._28_4_ = uVar98 & auVar54._12_4_;
                    uVar31 = 0;
                    uVar141 = 0;
                    uVar144 = 0;
                    uVar147 = 0;
                    uVar150 = 0;
                    uVar153 = 0;
                    uVar156 = 0;
                    uVar99 = 0;
                    auVar218._0_4_ = auVar312._0_4_ & auVar252._0_4_;
                    auVar218._4_4_ = auVar312._4_4_ & auVar252._4_4_;
                    auVar218._8_4_ = auVar312._8_4_ & auVar252._8_4_;
                    auVar218._12_4_ = auVar312._12_4_ & auVar252._12_4_;
                    auVar218._16_4_ = auVar314._16_4_ & auVar252._16_4_;
                    auVar218._20_4_ = auVar314._20_4_ & auVar252._20_4_;
                    auVar218._24_4_ = auVar314._24_4_ & auVar252._24_4_;
                    auVar218._28_4_ = auVar314._28_4_ & auVar252._28_4_;
                    uVar30 = vmovmskps_avx(auVar218);
                    if ((char)iVar43 != (char)uVar30) {
                      uVar99 = auVar312._0_4_ ^ uVar29;
                      uVar31 = auVar312._4_4_ ^ uVar140;
                      uVar141 = auVar312._8_4_ ^ uVar143;
                      uVar144 = auVar312._12_4_ ^ uVar146;
                      uVar147 = auVar314._16_4_ ^ uVar149;
                      uVar150 = auVar314._20_4_ ^ uVar152;
                      uVar153 = auVar314._24_4_ ^ uVar155;
                      uVar156 = auVar314._28_4_ ^ uVar98;
                    }
                    auVar214 = vblendvps_avx(auVar214,auVar238._0_32_,auVar314);
                    auVar238 = ZEXT3264(CONCAT1616(auVar162,auVar310));
                    auVar54 = vpcmpgtd_avx(auVar230,auVar162);
                    auVar55 = vpcmpgtd_avx(auVar188,auVar310);
                    uVar29 = auVar55._0_4_ & uVar99;
                    uVar140 = auVar55._4_4_ & uVar31;
                    uVar143 = auVar55._8_4_ & uVar141;
                    uVar146 = auVar55._12_4_ & uVar144;
                    uVar149 = auVar54._0_4_ & uVar147;
                    uVar152 = auVar54._4_4_ & uVar150;
                    uVar155 = auVar54._8_4_ & uVar153;
                    uVar98 = auVar54._12_4_ & uVar156;
                    auVar111._0_4_ = uVar29 & auVar252._0_4_;
                    auVar111._4_4_ = uVar140 & auVar252._4_4_;
                    auVar111._8_4_ = uVar143 & auVar252._8_4_;
                    auVar111._12_4_ = uVar146 & auVar252._12_4_;
                    auVar111._16_4_ = uVar149 & auVar252._16_4_;
                    auVar111._20_4_ = uVar152 & auVar252._20_4_;
                    auVar111._24_4_ = uVar155 & auVar252._24_4_;
                    auVar111._28_4_ = uVar98 & auVar252._28_4_;
                    iVar43 = vmovmskps_avx(auVar111);
                    auVar312 = vpcmpeqd_avx(auVar312,auVar312);
                  } while (iVar43 != 0);
                }
              }
              auVar230 = auVar238._0_16_;
              auVar188 = vpcmpgtd_avx(auVar305,auVar163);
              auVar54 = vpcmpgtd_avx(auVar71,auVar163);
              auVar114._16_16_ = auVar188;
              auVar114._0_16_ = auVar54;
              auVar114 = auVar114 & auVar252;
              if ((((((((SUB321(auVar114 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar114 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar114 >> 0x5f,0) & 1) != 0) || SUB321(auVar114 >> 0x7f,0) != '\0')
                    || (SUB321(auVar114 >> 0x9f,0) & 1) != 0) || SUB321(auVar114 >> 0xbf,0) != '\0')
                  || (SUB321(auVar114 >> 0xdf,0) & 1) != 0) || auVar114[0x1f] < '\0') {
                auVar214 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar214,auVar76);
                auVar162._4_4_ = __real_00000001;
                auVar162._0_4_ = __real_00000001;
                auVar162._8_4_ = __real_00000001;
                auVar162._12_4_ = __real_00000001;
                auVar188 = vpcmpgtd_avx(auVar70,auVar162);
                auVar230 = vpcmpgtd_avx(auVar297,auVar162);
                uVar29 = ~local_540 & auVar230._0_4_;
                uVar140 = ~uStack_53c & auVar230._4_4_;
                uVar143 = ~uStack_538 & auVar230._8_4_;
                uVar146 = ~uStack_534 & auVar230._12_4_;
                uVar149 = ~uStack_530 & auVar188._0_4_;
                uVar152 = ~uStack_52c & auVar188._4_4_;
                uVar155 = ~uStack_528 & auVar188._8_4_;
                uVar98 = ~uStack_524 & auVar188._12_4_;
                auVar115._0_4_ = auVar252._0_4_ & uVar29;
                auVar115._4_4_ = auVar252._4_4_ & uVar140;
                auVar115._8_4_ = auVar252._8_4_ & uVar143;
                auVar115._12_4_ = auVar252._12_4_ & uVar146;
                auVar115._16_4_ = auVar252._16_4_ & uVar149;
                auVar115._20_4_ = auVar252._20_4_ & uVar152;
                auVar115._24_4_ = auVar252._24_4_ & uVar155;
                auVar115._28_4_ = auVar252._28_4_ & uVar98;
                iVar43 = vmovmskps_avx(auVar115);
                while( true ) {
                  auVar230 = auVar238._0_16_;
                  auVar188 = auVar306._0_16_;
                  auVar71 = auVar70;
                  if (iVar43 == 0) break;
                  auVar297._0_4_ = auVar282._0_4_ + auVar312._0_4_;
                  auVar297._4_4_ = auVar282._4_4_ + auVar312._4_4_;
                  auVar297._8_4_ = auVar282._8_4_ + auVar312._8_4_;
                  auVar297._12_4_ = auVar282._12_4_ + auVar312._12_4_;
                  auVar54 = vpmovsxdq_avx(auVar297);
                  auVar230 = vpshufd_avx(auVar297,0xee);
                  auVar230 = vpmovsxdq_avx(auVar230);
                  auVar230 = vpaddq_avx(auVar304,auVar230);
                  auVar54 = vpaddq_avx(auVar298,auVar54);
                  uVar31 = vmovmskps_avx(auVar115);
                  if ((uVar31 & 1) != 0) {
                    auVar188 = ZEXT116(*auVar54._0_8_);
                  }
                  if ((uVar31 & 2) != 0) {
                    auVar54 = vpinsrb_avx(auVar188,(uint)*auVar54._8_8_,1);
                    auVar188 = vpblendw_avx(auVar54,auVar188,0xe);
                  }
                  if ((uVar31 & 4) != 0) {
                    auVar54 = vpmovzxwd_avx(auVar188);
                    auVar54 = vpinsrb_avx(auVar54,(uint)*auVar230._0_8_,2);
                    auVar54 = vpinsrb_avx(auVar54,(uint)auVar188[3],3);
                    auVar188 = vpblendw_avx(auVar54,auVar188,0xc);
                  }
                  if ((uVar31 & 8) != 0) {
                    auVar54 = vpmovzxwd_avx(auVar188);
                    auVar54 = vpinsrb_avx(auVar54,(uint)auVar188[2],2);
                    auVar230 = vpinsrb_avx(auVar54,(uint)*auVar230._8_8_,3);
                    auVar188 = vpblendw_avx(auVar230,auVar188,0xc);
                  }
                  auVar310._0_4_ = auVar282._16_4_ + auVar312._0_4_;
                  auVar310._4_4_ = auVar282._20_4_ + auVar312._4_4_;
                  auVar310._8_4_ = auVar282._24_4_ + auVar312._8_4_;
                  auVar310._12_4_ = auVar282._28_4_ + auVar312._12_4_;
                  auVar54 = vpmovsxdq_avx(auVar310);
                  auVar230 = vpshufd_avx(auVar310,0xee);
                  auVar230 = vpmovsxdq_avx(auVar230);
                  auVar230 = vpaddq_avx(auVar230,auVar208);
                  auVar54 = vpaddq_avx(auVar196,auVar54);
                  if ((uVar31 & 0x10) != 0) {
                    auVar55 = vpshufb_avx(auVar188,___xmm_80800706808005048080030203020100);
                    auVar55 = vpinsrb_avx(auVar55,(uint)*auVar54._0_8_,4);
                    auVar55 = vpinsrb_avx(auVar55,(uint)auVar188[5],5);
                    auVar188 = vpblendw_avx(auVar55,auVar188,8);
                  }
                  if ((uVar31 & 0x20) != 0) {
                    auVar55 = vpshufb_avx(auVar188,___xmm_80800706808005048080030403020100);
                    auVar54 = vpinsrb_avx(auVar55,(uint)*auVar54._8_8_,5);
                    auVar188 = vpblendw_avx(auVar54,auVar188,8);
                  }
                  if ((uVar31 & 0x40) != 0) {
                    auVar54 = vpshufb_avx(auVar188,___xmm_80800706808005048080050403020100);
                    auVar54 = vpinsrb_avx(auVar54,(uint)*auVar230._0_8_,6);
                    auVar188 = vpinsrb_avx(auVar54,(uint)auVar188[7],7);
                  }
                  if ((char)uVar31 < '\0') {
                    auVar188 = vpshufb_avx(auVar188,___xmm_80800706808005048006050403020100);
                    auVar188 = vpinsrb_avx(auVar188,(uint)*auVar230._8_8_,7);
                  }
                  auVar230 = vpmovzxbd_avx(auVar188);
                  auVar188 = vpshufd_avx(auVar188,0x55);
                  auVar188 = vpmovzxbd_avx(auVar188);
                  auVar188 = vpcmpgtd_avx(auVar188,auVar163);
                  auVar230 = vpcmpgtd_avx(auVar230,auVar163);
                  auVar259._0_4_ = ~auVar230._0_4_ & uVar29;
                  auVar259._4_4_ = ~auVar230._4_4_ & uVar140;
                  auVar259._8_4_ = ~auVar230._8_4_ & uVar143;
                  auVar259._12_4_ = ~auVar230._12_4_ & uVar146;
                  auVar259._16_4_ = ~auVar188._0_4_ & uVar149;
                  auVar259._20_4_ = ~auVar188._4_4_ & uVar152;
                  auVar259._24_4_ = ~auVar188._8_4_ & uVar155;
                  auVar259._28_4_ = ~auVar188._12_4_ & uVar98;
                  auVar306 = ZEXT3264(auVar259);
                  uVar31 = 0;
                  uVar141 = 0;
                  uVar144 = 0;
                  uVar147 = 0;
                  uVar150 = 0;
                  uVar153 = 0;
                  uVar156 = 0;
                  uVar99 = 0;
                  auVar221._0_4_ = auVar259._0_4_ & auVar252._0_4_;
                  auVar221._4_4_ = auVar259._4_4_ & auVar252._4_4_;
                  auVar221._8_4_ = auVar259._8_4_ & auVar252._8_4_;
                  auVar221._12_4_ = auVar259._12_4_ & auVar252._12_4_;
                  auVar221._16_4_ = auVar259._16_4_ & auVar252._16_4_;
                  auVar221._20_4_ = auVar259._20_4_ & auVar252._20_4_;
                  auVar221._24_4_ = auVar259._24_4_ & auVar252._24_4_;
                  auVar221._28_4_ = auVar259._28_4_ & auVar252._28_4_;
                  uVar30 = vmovmskps_avx(auVar221);
                  if ((char)iVar43 != (char)uVar30) {
                    uVar99 = auVar259._0_4_ ^ uVar29;
                    uVar31 = auVar259._4_4_ ^ uVar140;
                    uVar141 = auVar259._8_4_ ^ uVar143;
                    uVar144 = auVar259._12_4_ ^ uVar146;
                    uVar147 = auVar259._16_4_ ^ uVar149;
                    uVar150 = auVar259._20_4_ ^ uVar152;
                    uVar153 = auVar259._24_4_ ^ uVar155;
                    uVar156 = auVar259._28_4_ ^ uVar98;
                  }
                  auVar167._16_16_ = auVar310;
                  auVar167._0_16_ = auVar297;
                  auVar214 = vblendvps_avx(auVar214,auVar167,auVar259);
                  auVar70._4_4_ = __real_00000002;
                  auVar70._0_4_ = __real_00000002;
                  auVar70._8_4_ = __real_00000002;
                  auVar70._12_4_ = __real_00000002;
                  auVar188 = vpcmpgtd_avx(auVar282._0_16_,auVar70);
                  auVar230 = vpcmpgtd_avx(auVar282._16_16_,auVar70);
                  auVar238 = ZEXT1664(auVar230);
                  uVar29 = auVar188._0_4_ & uVar99;
                  uVar140 = auVar188._4_4_ & uVar31;
                  uVar143 = auVar188._8_4_ & uVar141;
                  uVar146 = auVar188._12_4_ & uVar144;
                  uVar149 = auVar230._0_4_ & uVar147;
                  uVar152 = auVar230._4_4_ & uVar150;
                  uVar155 = auVar230._8_4_ & uVar153;
                  uVar98 = auVar230._12_4_ & uVar156;
                  auVar115._0_4_ = auVar252._0_4_ & uVar29;
                  auVar115._4_4_ = auVar252._4_4_ & uVar140;
                  auVar115._8_4_ = auVar252._8_4_ & uVar143;
                  auVar115._12_4_ = auVar252._12_4_ & uVar146;
                  auVar115._16_4_ = auVar252._16_4_ & uVar149;
                  auVar115._20_4_ = auVar252._20_4_ & uVar152;
                  auVar115._24_4_ = auVar252._24_4_ & uVar155;
                  auVar115._28_4_ = auVar252._28_4_ & uVar98;
                  iVar43 = vmovmskps_avx(auVar115);
                  auVar282 = ZEXT3264(auVar167);
                }
              }
              local_7c0 = vblendvps_avx(local_7c0,auVar214,auVar252);
              auVar55 = local_7c0._0_16_;
              auVar54 = vpmovsxdq_avx(auVar55);
              auVar188 = vshufpd_avx(auVar55,auVar55,3);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar304,auVar188);
              auVar54 = vpaddq_avx(auVar298,auVar54);
              auVar305._4_4_ = __real_00000001;
              auVar305._0_4_ = __real_00000001;
              auVar305._8_4_ = __real_00000001;
              auVar305._12_4_ = __real_00000001;
              if ((uVar26 & 1) != 0) {
                auVar230 = ZEXT116(*auVar54._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar54 = vpinsrb_avx(auVar230,(uint)*auVar54._8_8_,1);
                auVar230 = vpblendw_avx(auVar54,auVar230,0xe);
              }
              if ((uVar26 & 4) != 0) {
                auVar54 = vpmovzxwd_avx(auVar230);
                auVar54 = vpinsrb_avx(auVar54,(uint)*auVar188._0_8_,2);
                auVar54 = vpinsrb_avx(auVar54,(uint)auVar230[3],3);
                auVar230 = vpblendw_avx(auVar54,auVar230,0xc);
              }
              if ((uVar26 & 8) != 0) {
                auVar54 = vpmovzxwd_avx(auVar230);
                auVar54 = vpinsrb_avx(auVar54,(uint)auVar230[2],2);
                auVar188 = vpinsrb_avx(auVar54,(uint)*auVar188._8_8_,3);
                auVar230 = vpblendw_avx(auVar188,auVar230,0xc);
              }
              auVar162 = local_7c0._16_16_;
              auVar54 = vpmovsxdq_avx(auVar162);
              auVar188 = vshufpd_avx(auVar162,auVar162,3);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar188,auVar208);
              auVar54 = vpaddq_avx(auVar196,auVar54);
              if ((uVar26 & 0x10) != 0) {
                auVar70 = vpshufb_avx(auVar230,___xmm_80800706808005048080030203020100);
                auVar70 = vpinsrb_avx(auVar70,(uint)*auVar54._0_8_,4);
                auVar70 = vpinsrb_avx(auVar70,(uint)auVar230[5],5);
                auVar230 = vpblendw_avx(auVar70,auVar230,8);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar70 = vpshufb_avx(auVar230,___xmm_80800706808005048080030403020100);
                auVar54 = vpinsrb_avx(auVar70,(uint)*auVar54._8_8_,5);
                auVar230 = vpblendw_avx(auVar54,auVar230,8);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar54 = vpshufb_avx(auVar230,___xmm_80800706808005048080050403020100);
                auVar54 = vpinsrb_avx(auVar54,(uint)*auVar188._0_8_,6);
                auVar230 = vpinsrb_avx(auVar54,(uint)auVar230[7],7);
              }
              if (cVar49 < '\0') {
                auVar230 = vpshufb_avx(auVar230,___xmm_80800706808005048006050403020100);
                auVar230 = vpinsrb_avx(auVar230,(uint)*auVar188._8_8_,7);
              }
              auVar188 = vpcmpeqd_avx(auVar160,auVar305);
              auVar119._16_16_ = auVar231;
              auVar119._0_16_ = auVar188;
              auVar188 = vpcmpeqd_avx(auVar71,auVar71);
              auVar54 = vpsubd_avx(auVar162,auVar188);
              auVar188 = vpsubd_avx(auVar55,auVar188);
              auVar169._16_16_ = auVar54;
              auVar169._0_16_ = auVar188;
              local_4e0 = vblendvps_avx(local_4e0,auVar169,auVar252);
              auVar188 = vpcmpgtd_avx(auVar102,local_4e0._16_16_);
              auVar54 = vpcmpgtd_avx(auVar160,local_4e0._0_16_);
              auVar120._16_16_ = auVar188;
              auVar120._0_16_ = auVar54;
              auVar120 = auVar120 | auVar119;
              auVar25._4_4_ = uVar180;
              auVar25._0_4_ = uVar158;
              auVar25._8_4_ = uVar182;
              auVar25._12_4_ = uVar184;
              auVar25._16_4_ = uVar186;
              auVar25._20_4_ = uVar189;
              auVar25._24_4_ = uVar191;
              auVar25._28_4_ = uVar193;
              auVar214 = auVar25 & ~auVar120;
              if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0')
                    || (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0')
                  || (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
                auVar121._0_4_ = ~auVar120._0_4_ & uVar158;
                auVar121._4_4_ = ~auVar120._4_4_ & uVar180;
                auVar121._8_4_ = ~auVar120._8_4_ & uVar182;
                auVar121._12_4_ = ~auVar120._12_4_ & uVar184;
                auVar121._16_4_ = ~auVar120._16_4_ & uVar186;
                auVar121._20_4_ = ~auVar120._20_4_ & uVar189;
                auVar121._24_4_ = ~auVar120._24_4_ & uVar191;
                auVar121._28_4_ = ~auVar120._28_4_ & uVar193;
                local_4e0 = vblendvps_avx(local_4e0,auVar216,auVar121);
              }
              auVar54 = vpmovsxdq_avx(local_4e0._0_16_);
              auVar188 = vpshufd_avx(local_4e0._0_16_,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar304,auVar188);
              auVar54 = vpaddq_avx(auVar298,auVar54);
              if ((uVar26 & 1) == 0) {
                auVar290 = SUB6432(ZEXT464(0),0);
                auVar102 = auVar188;
              }
              else {
                auVar290 = SUB6432(ZEXT464(0),0);
                auVar102 = ZEXT116(*auVar54._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar54 = vpinsrb_avx(auVar102,(uint)*auVar54._8_8_,1);
                auVar102 = vpblendw_avx(auVar54,auVar102,0xe);
              }
              if ((uVar26 & 4) != 0) {
                auVar54 = vpmovzxwd_avx(auVar102);
                auVar54 = vpinsrb_avx(auVar54,(uint)*auVar188._0_8_,2);
                auVar54 = vpinsrb_avx(auVar54,(uint)auVar102[3],3);
                auVar102 = vpblendw_avx(auVar54,auVar102,0xc);
              }
              if ((uVar26 & 8) != 0) {
                auVar54 = vpmovzxwd_avx(auVar102);
                auVar54 = vpinsrb_avx(auVar54,(uint)auVar102[2],2);
                auVar188 = vpinsrb_avx(auVar54,(uint)*auVar188._8_8_,3);
                auVar102 = vpblendw_avx(auVar188,auVar102,0xc);
              }
              auVar54 = vpmovsxdq_avx(local_4e0._16_16_);
              auVar188 = vpshufd_avx(local_4e0._16_16_,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar188,auVar208);
              auVar54 = vpaddq_avx(auVar196,auVar54);
              if ((uVar26 & 0x10) != 0) {
                auVar55 = vpshufb_avx(auVar102,___xmm_80800706808005048080030203020100);
                auVar55 = vpinsrb_avx(auVar55,(uint)*auVar54._0_8_,4);
                auVar55 = vpinsrb_avx(auVar55,(uint)auVar102[5],5);
                auVar102 = vpblendw_avx(auVar55,auVar102,8);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar55 = vpshufb_avx(auVar102,___xmm_80800706808005048080030403020100);
                auVar54 = vpinsrb_avx(auVar55,(uint)*auVar54._8_8_,5);
                auVar102 = vpblendw_avx(auVar54,auVar102,8);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar54 = vpshufb_avx(auVar102,___xmm_80800706808005048080050403020100);
                auVar54 = vpinsrb_avx(auVar54,(uint)*auVar188._0_8_,6);
                auVar102 = vpinsrb_avx(auVar54,(uint)auVar102[7],7);
              }
              if (cVar49 < '\0') {
                auVar54 = vpshufb_avx(auVar102,___xmm_80800706808005048006050403020100);
                auVar102 = vpinsrb_avx(auVar54,(uint)*auVar188._8_8_,7);
              }
              auVar188 = vpmovzxbd_avx(auVar230);
              auVar230 = vpshufd_avx(auVar230,0x55);
              auVar230 = vpmovzxbd_avx(auVar230);
              auVar77._16_16_ = auVar230;
              auVar77._0_16_ = auVar188;
              auVar230 = vpmovzxbd_avx(auVar102);
              auVar54 = vpshufd_avx(auVar102,0x55);
              auVar54 = vpmovzxbd_avx(auVar54);
            }
            else {
              auVar71._4_4_ = auVar297._4_4_ * 2;
              auVar71._0_4_ = auVar297._0_4_ * 2;
              auVar71._8_4_ = auVar297._8_4_ * 2;
              auVar71._12_4_ = auVar297._12_4_ * 2;
              auVar312 = vpmovsxdq_avx(auVar71);
              auVar310 = vpshufd_avx(auVar71,0xee);
              auVar310 = vpmovsxdq_avx(auVar310);
              auVar310 = vpaddq_avx(auVar304,auVar310);
              auVar71 = vpaddq_avx(auVar298,auVar312);
              auVar312 = vpcmpeqd_avx(auVar231,auVar231);
              if ((uVar26 & 1) != 0) {
                auVar162 = ZEXT216(*auVar71._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar71._8_8_,1);
              }
              if ((uVar26 & 4) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar310._0_8_,2);
              }
              if ((uVar26 & 8) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar310._8_8_,3);
              }
              auVar20._4_4_ = auVar70._4_4_ * 2;
              auVar20._0_4_ = auVar70._0_4_ * 2;
              auVar20._8_4_ = auVar70._8_4_ * 2;
              auVar20._12_4_ = auVar70._12_4_ * 2;
              auVar71 = vpmovsxdq_avx(auVar20);
              auVar310 = vpshufd_avx(auVar20,0xee);
              auVar310 = vpmovsxdq_avx(auVar310);
              auVar310 = vpaddq_avx(auVar310,auVar208);
              auVar71 = vpaddq_avx(auVar196,auVar71);
              if ((uVar26 & 0x10) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar71._0_8_,4);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar71._8_8_,5);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar310._0_8_,6);
              }
              if (cVar49 < '\0') {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar310._8_8_,7);
              }
              auVar305 = vpunpckhwd_avx(auVar162,___xmm_00000000000000000000000000000000);
              auVar71 = vpmovzxwd_avx(auVar162);
              auVar162 = vpcmpgtd_avx(auVar305,auVar163);
              auVar229 = auVar312 ^ auVar162;
              auVar310 = vpcmpgtd_avx(auVar71,auVar163);
              auVar20 = auVar312 ^ auVar310;
              auVar75._16_16_ = auVar229;
              auVar75._0_16_ = auVar20;
              auVar106._16_16_ = auVar162;
              auVar106._0_16_ = auVar310;
              auVar214 = auVar252 & ~auVar106;
              local_540 = auVar20._0_4_;
              uStack_53c = auVar20._4_4_;
              uStack_538 = auVar20._8_4_;
              uStack_534 = auVar20._12_4_;
              uStack_530 = auVar229._0_4_;
              uStack_52c = auVar229._4_4_;
              uStack_528 = auVar229._8_4_;
              uStack_524 = auVar229._12_4_;
              if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0')
                    || (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0')
                  || (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
                auVar162 = vpcmpgtd_avx(auVar305,auVar163);
                auVar310 = vpcmpgtd_avx(auVar71,auVar163);
                auVar107._16_16_ = auVar162;
                auVar107._0_16_ = auVar310;
                auVar214 = vblendvps_avx(auVar216,auVar271,auVar107);
                auVar54 = vpcmpgtd_avx(auVar230,auVar54);
                auVar55 = vpcmpgtd_avx(auVar188,auVar55);
                auVar229._0_4_ = auVar55._0_4_ & local_540;
                auVar229._4_4_ = auVar55._4_4_ & uStack_53c;
                auVar229._8_4_ = auVar55._8_4_ & uStack_538;
                auVar229._12_4_ = auVar55._12_4_ & uStack_534;
                auVar232._16_4_ = auVar54._0_4_ & uStack_530;
                auVar232._0_16_ = auVar229;
                auVar232._20_4_ = auVar54._4_4_ & uStack_52c;
                auVar232._24_4_ = auVar54._8_4_ & uStack_528;
                auVar232._28_4_ = auVar54._12_4_ & uStack_524;
                auVar108._0_4_ = auVar252._0_4_ & auVar229._0_4_;
                auVar108._4_4_ = auVar252._4_4_ & auVar229._4_4_;
                auVar108._8_4_ = auVar252._8_4_ & auVar229._8_4_;
                auVar108._12_4_ = auVar252._12_4_ & auVar229._12_4_;
                auVar108._16_4_ = auVar252._16_4_ & auVar232._16_4_;
                auVar108._20_4_ = auVar252._20_4_ & auVar232._20_4_;
                auVar108._24_4_ = auVar252._24_4_ & auVar232._24_4_;
                auVar108._28_4_ = auVar252._28_4_ & auVar232._28_4_;
                iVar43 = vmovmskps_avx(auVar108);
                auVar309 = auVar271;
                while (auVar271 = auVar214, iVar43 != 0) {
                  auVar162 = vpcmpeqd_avx(auVar188,auVar188);
                  auVar312 = vpsubd_avx(auVar309._0_16_,auVar312);
                  auVar2._4_4_ = auVar312._4_4_ * 2;
                  auVar2._0_4_ = auVar312._0_4_ * 2;
                  auVar2._8_4_ = auVar312._8_4_ * 2;
                  auVar2._12_4_ = auVar312._12_4_ * 2;
                  auVar55 = vpmovsxdq_avx(auVar2);
                  auVar54 = vpshufd_avx(auVar2,0xee);
                  auVar54 = vpmovsxdq_avx(auVar54);
                  auVar54 = vpaddq_avx(auVar304,auVar54);
                  auVar55 = vpaddq_avx(auVar298,auVar55);
                  uVar29 = vmovmskps_avx(auVar108);
                  auVar310 = auVar55;
                  if ((uVar29 & 1) != 0) {
                    auVar310 = ZEXT216(*auVar55._0_8_);
                  }
                  if ((uVar29 & 2) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar55._8_8_,1);
                  }
                  if ((uVar29 & 4) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar54._0_8_,2);
                  }
                  if ((uVar29 & 8) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar54._8_8_,3);
                  }
                  auVar162 = vpsubd_avx(auVar309._16_16_,auVar162);
                  auVar3._4_4_ = auVar162._4_4_ * 2;
                  auVar3._0_4_ = auVar162._0_4_ * 2;
                  auVar3._8_4_ = auVar162._8_4_ * 2;
                  auVar3._12_4_ = auVar162._12_4_ * 2;
                  auVar55 = vpmovsxdq_avx(auVar3);
                  auVar54 = vpshufd_avx(auVar3,0xee);
                  auVar54 = vpmovsxdq_avx(auVar54);
                  auVar54 = vpaddq_avx(auVar54,auVar208);
                  auVar55 = vpaddq_avx(auVar196,auVar55);
                  if ((uVar29 & 0x10) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar55._0_8_,4);
                  }
                  if ((uVar29 & 0x20) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar55._8_8_,5);
                  }
                  if ((uVar29 & 0x40) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar54._0_8_,6);
                  }
                  if ((char)uVar29 < '\0') {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar54._8_8_,7);
                  }
                  auVar54 = vpunpckhwd_avx(auVar310,___xmm_00000000000000000000000000000000);
                  auVar55 = vpmovzxwd_avx(auVar310);
                  auVar54 = vpcmpgtd_avx(auVar54,auVar163);
                  auVar55 = vpcmpgtd_avx(auVar55,auVar163);
                  auVar311._0_4_ = auVar55._0_4_ & auVar232._0_4_;
                  auVar311._4_4_ = auVar55._4_4_ & auVar232._4_4_;
                  auVar311._8_4_ = auVar55._8_4_ & auVar232._8_4_;
                  auVar311._12_4_ = auVar55._12_4_ & auVar232._12_4_;
                  auVar313._16_4_ = auVar54._0_4_ & auVar232._16_4_;
                  auVar313._0_16_ = auVar311;
                  auVar313._20_4_ = auVar54._4_4_ & auVar232._20_4_;
                  auVar313._24_4_ = auVar54._8_4_ & auVar232._24_4_;
                  auVar313._28_4_ = auVar54._12_4_ & auVar232._28_4_;
                  uVar29 = 0;
                  uVar140 = 0;
                  uVar143 = 0;
                  uVar146 = 0;
                  uVar149 = 0;
                  uVar152 = 0;
                  uVar155 = 0;
                  uVar98 = 0;
                  auVar217._0_4_ = auVar311._0_4_ & auVar252._0_4_;
                  auVar217._4_4_ = auVar311._4_4_ & auVar252._4_4_;
                  auVar217._8_4_ = auVar311._8_4_ & auVar252._8_4_;
                  auVar217._12_4_ = auVar311._12_4_ & auVar252._12_4_;
                  auVar217._16_4_ = auVar313._16_4_ & auVar252._16_4_;
                  auVar217._20_4_ = auVar313._20_4_ & auVar252._20_4_;
                  auVar217._24_4_ = auVar313._24_4_ & auVar252._24_4_;
                  auVar217._28_4_ = auVar313._28_4_ & auVar252._28_4_;
                  uVar30 = vmovmskps_avx(auVar217);
                  if ((char)iVar43 != (char)uVar30) {
                    uVar98 = auVar311._0_4_ ^ auVar232._0_4_;
                    uVar29 = auVar311._4_4_ ^ auVar232._4_4_;
                    uVar140 = auVar311._8_4_ ^ auVar232._8_4_;
                    uVar143 = auVar311._12_4_ ^ auVar232._12_4_;
                    uVar146 = auVar313._16_4_ ^ auVar232._16_4_;
                    uVar149 = auVar313._20_4_ ^ auVar232._20_4_;
                    uVar152 = auVar313._24_4_ ^ auVar232._24_4_;
                    uVar155 = auVar313._28_4_ ^ auVar232._28_4_;
                  }
                  auVar214 = vblendvps_avx(auVar271,auVar309,auVar313);
                  auVar309._16_16_ = auVar162;
                  auVar309._0_16_ = auVar312;
                  auVar54 = vpcmpgtd_avx(auVar230,auVar162);
                  auVar55 = vpcmpgtd_avx(auVar188,auVar312);
                  auVar229._0_4_ = auVar55._0_4_ & uVar98;
                  auVar229._4_4_ = auVar55._4_4_ & uVar29;
                  auVar229._8_4_ = auVar55._8_4_ & uVar140;
                  auVar229._12_4_ = auVar55._12_4_ & uVar143;
                  auVar232._16_4_ = auVar54._0_4_ & uVar146;
                  auVar232._0_16_ = auVar229;
                  auVar232._20_4_ = auVar54._4_4_ & uVar149;
                  auVar232._24_4_ = auVar54._8_4_ & uVar152;
                  auVar232._28_4_ = auVar54._12_4_ & uVar155;
                  auVar108._0_4_ = auVar252._0_4_ & auVar229._0_4_;
                  auVar108._4_4_ = auVar252._4_4_ & auVar229._4_4_;
                  auVar108._8_4_ = auVar252._8_4_ & auVar229._8_4_;
                  auVar108._12_4_ = auVar252._12_4_ & auVar229._12_4_;
                  auVar108._16_4_ = auVar252._16_4_ & auVar232._16_4_;
                  auVar108._20_4_ = auVar252._20_4_ & auVar232._20_4_;
                  auVar108._24_4_ = auVar252._24_4_ & auVar232._24_4_;
                  auVar108._28_4_ = auVar252._28_4_ & auVar232._28_4_;
                  iVar43 = vmovmskps_avx(auVar108);
                  auVar312 = vpcmpeqd_avx(auVar311,auVar311);
                }
              }
              auVar188 = vpcmpgtd_avx(auVar305,auVar163);
              auVar230 = vpcmpgtd_avx(auVar71,auVar163);
              auVar112._16_16_ = auVar188;
              auVar112._0_16_ = auVar230;
              auVar112 = auVar112 & auVar252;
              if ((((((((SUB321(auVar112 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar112 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar112 >> 0x5f,0) & 1) != 0) || SUB321(auVar112 >> 0x7f,0) != '\0')
                    || (SUB321(auVar112 >> 0x9f,0) & 1) != 0) || SUB321(auVar112 >> 0xbf,0) != '\0')
                  || (SUB321(auVar112 >> 0xdf,0) & 1) != 0) || auVar112[0x1f] < '\0') {
                auVar271 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar271,auVar75);
                auVar161._4_4_ = __real_00000001;
                auVar161._0_4_ = __real_00000001;
                auVar161._8_4_ = __real_00000001;
                auVar161._12_4_ = __real_00000001;
                auVar188 = vpcmpgtd_avx(auVar70,auVar161);
                auVar230 = vpcmpgtd_avx(auVar297,auVar161);
                auVar233._0_4_ = ~local_540 & auVar230._0_4_;
                auVar233._4_4_ = ~uStack_53c & auVar230._4_4_;
                auVar233._8_4_ = ~uStack_538 & auVar230._8_4_;
                auVar233._12_4_ = ~uStack_534 & auVar230._12_4_;
                auVar233._16_4_ = ~uStack_530 & auVar188._0_4_;
                auVar233._20_4_ = ~uStack_52c & auVar188._4_4_;
                auVar233._24_4_ = ~uStack_528 & auVar188._8_4_;
                auVar233._28_4_ = ~uStack_524 & auVar188._12_4_;
                auVar113._0_4_ = auVar252._0_4_ & auVar233._0_4_;
                auVar113._4_4_ = auVar252._4_4_ & auVar233._4_4_;
                auVar113._8_4_ = auVar252._8_4_ & auVar233._8_4_;
                auVar113._12_4_ = auVar252._12_4_ & auVar233._12_4_;
                auVar113._16_4_ = auVar252._16_4_ & auVar233._16_4_;
                auVar113._20_4_ = auVar252._20_4_ & auVar233._20_4_;
                auVar113._24_4_ = auVar252._24_4_ & auVar233._24_4_;
                auVar113._28_4_ = auVar252._28_4_ & auVar233._28_4_;
                iVar43 = vmovmskps_avx(auVar113);
                while( true ) {
                  auVar188 = auVar306._0_16_;
                  auVar229 = auVar233._0_16_;
                  auVar71 = auVar70;
                  if (iVar43 == 0) break;
                  iVar38 = auVar282._0_4_ + auVar312._0_4_;
                  iVar44 = auVar282._4_4_ + auVar312._4_4_;
                  auVar219._4_4_ = iVar44;
                  auVar219._0_4_ = iVar38;
                  iVar47 = auVar282._8_4_ + auVar312._8_4_;
                  auVar219._8_4_ = iVar47;
                  iVar51 = auVar282._12_4_ + auVar312._12_4_;
                  auVar219._12_4_ = iVar51;
                  auVar4._4_4_ = iVar44 * 2;
                  auVar4._0_4_ = iVar38 * 2;
                  auVar4._8_4_ = iVar47 * 2;
                  auVar4._12_4_ = iVar51 * 2;
                  auVar54 = vpmovsxdq_avx(auVar4);
                  auVar230 = vpshufd_avx(auVar4,0xee);
                  auVar230 = vpmovsxdq_avx(auVar230);
                  auVar230 = vpaddq_avx(auVar304,auVar230);
                  auVar54 = vpaddq_avx(auVar298,auVar54);
                  uVar29 = vmovmskps_avx(auVar113);
                  if ((uVar29 & 1) != 0) {
                    auVar188 = ZEXT216(*auVar54._0_8_);
                  }
                  if ((uVar29 & 2) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar54._8_8_,1);
                  }
                  if ((uVar29 & 4) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar230._0_8_,2);
                  }
                  if ((uVar29 & 8) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar230._8_8_,3);
                  }
                  iVar38 = auVar312._0_4_ + auVar282._16_4_;
                  iVar44 = auVar312._4_4_ + auVar282._20_4_;
                  auVar219._20_4_ = iVar44;
                  auVar219._16_4_ = iVar38;
                  iVar47 = auVar312._8_4_ + auVar282._24_4_;
                  auVar219._24_4_ = iVar47;
                  iVar51 = auVar312._12_4_ + auVar282._28_4_;
                  auVar219._28_4_ = iVar51;
                  auVar5._4_4_ = iVar44 * 2;
                  auVar5._0_4_ = iVar38 * 2;
                  auVar5._8_4_ = iVar47 * 2;
                  auVar5._12_4_ = iVar51 * 2;
                  auVar54 = vpmovsxdq_avx(auVar5);
                  auVar230 = vpshufd_avx(auVar5,0xee);
                  auVar230 = vpmovsxdq_avx(auVar230);
                  auVar230 = vpaddq_avx(auVar230,auVar208);
                  auVar54 = vpaddq_avx(auVar196,auVar54);
                  if ((uVar29 & 0x10) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar54._0_8_,4);
                  }
                  if ((uVar29 & 0x20) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar54._8_8_,5);
                  }
                  if ((uVar29 & 0x40) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar230._0_8_,6);
                  }
                  if ((char)uVar29 < '\0') {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar230._8_8_,7);
                  }
                  auVar54 = vpunpckhwd_avx(auVar188,___xmm_00000000000000000000000000000000);
                  auVar230 = vpmovzxwd_avx(auVar188);
                  auVar188 = vpcmpgtd_avx(auVar54,auVar163);
                  auVar230 = vpcmpgtd_avx(auVar230,auVar163);
                  auVar258._0_4_ = ~auVar230._0_4_ & auVar233._0_4_;
                  auVar258._4_4_ = ~auVar230._4_4_ & auVar233._4_4_;
                  auVar258._8_4_ = ~auVar230._8_4_ & auVar233._8_4_;
                  auVar258._12_4_ = ~auVar230._12_4_ & auVar233._12_4_;
                  auVar258._16_4_ = ~auVar188._0_4_ & auVar233._16_4_;
                  auVar258._20_4_ = ~auVar188._4_4_ & auVar233._20_4_;
                  auVar258._24_4_ = ~auVar188._8_4_ & auVar233._24_4_;
                  auVar258._28_4_ = ~auVar188._12_4_ & auVar233._28_4_;
                  auVar306 = ZEXT3264(auVar258);
                  uVar29 = 0;
                  uVar140 = 0;
                  uVar143 = 0;
                  uVar146 = 0;
                  uVar149 = 0;
                  uVar152 = 0;
                  uVar155 = 0;
                  uVar98 = 0;
                  auVar220._0_4_ = auVar258._0_4_ & auVar252._0_4_;
                  auVar220._4_4_ = auVar258._4_4_ & auVar252._4_4_;
                  auVar220._8_4_ = auVar258._8_4_ & auVar252._8_4_;
                  auVar220._12_4_ = auVar258._12_4_ & auVar252._12_4_;
                  auVar220._16_4_ = auVar258._16_4_ & auVar252._16_4_;
                  auVar220._20_4_ = auVar258._20_4_ & auVar252._20_4_;
                  auVar220._24_4_ = auVar258._24_4_ & auVar252._24_4_;
                  auVar220._28_4_ = auVar258._28_4_ & auVar252._28_4_;
                  uVar30 = vmovmskps_avx(auVar220);
                  if ((char)iVar43 != (char)uVar30) {
                    uVar98 = auVar258._0_4_ ^ auVar233._0_4_;
                    uVar29 = auVar258._4_4_ ^ auVar233._4_4_;
                    uVar140 = auVar258._8_4_ ^ auVar233._8_4_;
                    uVar143 = auVar258._12_4_ ^ auVar233._12_4_;
                    uVar146 = auVar258._16_4_ ^ auVar233._16_4_;
                    uVar149 = auVar258._20_4_ ^ auVar233._20_4_;
                    uVar152 = auVar258._24_4_ ^ auVar233._24_4_;
                    uVar155 = auVar258._28_4_ ^ auVar233._28_4_;
                  }
                  auVar271 = vblendvps_avx(auVar271,auVar219,auVar258);
                  auVar70._4_4_ = __real_00000002;
                  auVar70._0_4_ = __real_00000002;
                  auVar70._8_4_ = __real_00000002;
                  auVar70._12_4_ = __real_00000002;
                  auVar188 = vpcmpgtd_avx(auVar282._0_16_,auVar70);
                  auVar230 = vpcmpgtd_avx(auVar282._16_16_,auVar70);
                  auVar233._0_4_ = auVar188._0_4_ & uVar98;
                  auVar233._4_4_ = auVar188._4_4_ & uVar29;
                  auVar233._8_4_ = auVar188._8_4_ & uVar140;
                  auVar233._12_4_ = auVar188._12_4_ & uVar143;
                  auVar233._16_4_ = auVar230._0_4_ & uVar146;
                  auVar233._20_4_ = auVar230._4_4_ & uVar149;
                  auVar233._24_4_ = auVar230._8_4_ & uVar152;
                  auVar233._28_4_ = auVar230._12_4_ & uVar155;
                  auVar113._0_4_ = auVar252._0_4_ & auVar233._0_4_;
                  auVar113._4_4_ = auVar252._4_4_ & auVar233._4_4_;
                  auVar113._8_4_ = auVar252._8_4_ & auVar233._8_4_;
                  auVar113._12_4_ = auVar252._12_4_ & auVar233._12_4_;
                  auVar113._16_4_ = auVar252._16_4_ & auVar233._16_4_;
                  auVar113._20_4_ = auVar252._20_4_ & auVar233._20_4_;
                  auVar113._24_4_ = auVar252._24_4_ & auVar233._24_4_;
                  auVar113._28_4_ = auVar252._28_4_ & auVar233._28_4_;
                  iVar43 = vmovmskps_avx(auVar113);
                  auVar282 = ZEXT3264(auVar219);
                }
              }
              local_7c0 = vblendvps_avx(local_7c0,auVar271,auVar252);
              auVar6._4_4_ = local_7c0._4_4_ * 2;
              auVar6._0_4_ = local_7c0._0_4_ * 2;
              auVar6._8_4_ = local_7c0._8_4_ * 2;
              auVar6._12_4_ = local_7c0._12_4_ * 2;
              auVar230 = vpmovsxdq_avx(auVar6);
              auVar188 = vpshufd_avx(auVar6,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar304,auVar188);
              auVar230 = vpaddq_avx(auVar298,auVar230);
              auVar305._4_4_ = __real_00000001;
              auVar305._0_4_ = __real_00000001;
              auVar305._8_4_ = __real_00000001;
              auVar305._12_4_ = __real_00000001;
              if ((uVar26 & 1) != 0) {
                auVar229 = ZEXT216(*auVar230._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar230._8_8_,1);
              }
              if ((uVar26 & 4) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar188._0_8_,2);
              }
              if ((uVar26 & 8) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar188._8_8_,3);
              }
              auVar7._4_4_ = local_7c0._20_4_ * 2;
              auVar7._0_4_ = local_7c0._16_4_ * 2;
              auVar7._8_4_ = local_7c0._24_4_ * 2;
              auVar7._12_4_ = local_7c0._28_4_ * 2;
              auVar230 = vpmovsxdq_avx(auVar7);
              auVar188 = vpshufd_avx(auVar7,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar188,auVar208);
              auVar230 = vpaddq_avx(auVar196,auVar230);
              if ((uVar26 & 0x10) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar230._0_8_,4);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar230._8_8_,5);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar188._0_8_,6);
              }
              if (cVar49 < '\0') {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar188._8_8_,7);
              }
              auVar188 = vpcmpeqd_avx(auVar160,auVar305);
              auVar116._16_16_ = auVar231;
              auVar116._0_16_ = auVar188;
              auVar188 = vpcmpeqd_avx(auVar71,auVar71);
              auVar230 = vpsubd_avx(local_7c0._16_16_,auVar188);
              auVar188 = vpsubd_avx(local_7c0._0_16_,auVar188);
              auVar168._16_16_ = auVar230;
              auVar168._0_16_ = auVar188;
              local_4e0 = vblendvps_avx(local_4e0,auVar168,auVar252);
              auVar188 = vpcmpgtd_avx(auVar102,local_4e0._16_16_);
              auVar230 = vpcmpgtd_avx(auVar160,local_4e0._0_16_);
              auVar117._16_16_ = auVar188;
              auVar117._0_16_ = auVar230;
              auVar117 = auVar117 | auVar116;
              auVar25._4_4_ = uVar180;
              auVar25._0_4_ = uVar158;
              auVar25._8_4_ = uVar182;
              auVar25._12_4_ = uVar184;
              auVar25._16_4_ = uVar186;
              auVar25._20_4_ = uVar189;
              auVar25._24_4_ = uVar191;
              auVar25._28_4_ = uVar193;
              auVar214 = auVar25 & ~auVar117;
              if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0')
                    || (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0')
                  || (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
                auVar118._0_4_ = ~auVar117._0_4_ & uVar158;
                auVar118._4_4_ = ~auVar117._4_4_ & uVar180;
                auVar118._8_4_ = ~auVar117._8_4_ & uVar182;
                auVar118._12_4_ = ~auVar117._12_4_ & uVar184;
                auVar118._16_4_ = ~auVar117._16_4_ & uVar186;
                auVar118._20_4_ = ~auVar117._20_4_ & uVar189;
                auVar118._24_4_ = ~auVar117._24_4_ & uVar191;
                auVar118._28_4_ = ~auVar117._28_4_ & uVar193;
                local_4e0 = vblendvps_avx(local_4e0,auVar216,auVar118);
              }
              auVar102._4_4_ = local_4e0._4_4_ * 2;
              auVar102._0_4_ = local_4e0._0_4_ * 2;
              auVar102._8_4_ = local_4e0._8_4_ * 2;
              auVar102._12_4_ = local_4e0._12_4_ * 2;
              auVar230 = vpmovsxdq_avx(auVar102);
              auVar188 = vpshufd_avx(auVar102,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar304,auVar188);
              auVar230 = vpaddq_avx(auVar298,auVar230);
              if ((uVar26 & 1) == 0) {
                auVar290 = SUB6432(ZEXT464(0),0);
                auVar102 = auVar188;
              }
              else {
                auVar290 = SUB6432(ZEXT464(0),0);
                auVar102 = ZEXT216(*auVar230._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar230._8_8_,1);
              }
              if ((uVar26 & 4) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar188._0_8_,2);
              }
              if ((uVar26 & 8) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar188._8_8_,3);
              }
              auVar304._4_4_ = local_4e0._20_4_ * 2;
              auVar304._0_4_ = local_4e0._16_4_ * 2;
              auVar304._8_4_ = local_4e0._24_4_ * 2;
              auVar304._12_4_ = local_4e0._28_4_ * 2;
              auVar230 = vpmovsxdq_avx(auVar304);
              auVar188 = vpshufd_avx(auVar304,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar188,auVar208);
              auVar230 = vpaddq_avx(auVar196,auVar230);
              if ((uVar26 & 0x10) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar230._0_8_,4);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar230._8_8_,5);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar188._0_8_,6);
              }
              if (cVar49 < '\0') {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar188._8_8_,7);
              }
              auVar230 = vpunpckhwd_avx(auVar229,(undefined1  [16])0x0);
              auVar188 = vpmovzxwd_avx(auVar229);
              auVar77._16_16_ = auVar230;
              auVar77._0_16_ = auVar188;
              auVar54 = vpunpckhwd_avx(auVar102,(undefined1  [16])0x0);
              auVar230 = vpmovzxwd_avx(auVar102);
            }
            auVar290 = auVar290 << 0x20;
            auVar214 = ZEXT1632((undefined1  [16])0x0);
            auVar306 = ZEXT1664(auVar305);
            if (param_7 != '\x01') {
              auVar230 = vpsubd_avx(auVar230,auVar77._0_16_);
              auVar188 = vpsubd_avx(auVar54,auVar77._16_16_);
              auVar188 = vpmaxsd_avx(auVar188,auVar305);
              auVar230 = vpmaxsd_avx(auVar230,auVar305);
              auVar58._16_16_ = auVar188;
              auVar58._0_16_ = auVar230;
              auVar214 = vcvtdq2ps_avx(auVar77);
              auVar164 = vsubps_avx(auVar64,auVar214);
              auVar188 = auVar164._0_16_;
              auVar214 = vcvtdq2ps_avx(auVar58);
              auVar214 = vdivps_avx(auVar164,auVar214);
            }
            auVar214 = vblendvps_avx(auVar290,auVar214,auVar25);
          }
        }
        auVar230 = vpcmpeqd_avx(auVar306._0_16_,auVar160);
        auVar230 = vpackssdw_avx(auVar230,auVar231);
        auVar188 = vpcmpeqd_avx(auVar188,auVar188);
        auVar230 = auVar230 ^ auVar188;
        auVar188 = vpmovsxwd_avx(auVar230);
        auVar231 = vpunpckhwd_avx(auVar230,auVar230);
        if (param_8 < 6) {
          auVar212 = vpmulld_avx(local_7c0._0_16_,auVar21);
          auVar105 = vpmulld_avx(local_7c0._16_16_,auVar21);
          vpmovsxdq_avx(auVar105);
          auVar105 = vpshufd_avx(auVar105,0xee);
          vpmovsxdq_avx(auVar105);
          vpmovsxdq_avx(auVar212);
          auVar212 = vpshufd_avx(auVar212,0xee);
          auVar212 = vpmovsxdq_avx(auVar212);
                    /* WARNING: Could not recover jumptable at 0x000140c29854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6c800 + *(int *)(&DAT_151c6c800 + uVar36 * 4)))
                    (auVar21._0_8_,&DAT_151c6c800,puVar41,auVar212._0_8_);
          return;
        }
        auVar78._16_16_ = auVar231;
        auVar78._0_16_ = auVar188;
        _local_3e0 = vmaskmovps_avx(auVar78,auVar290);
        _local_3c0 = vmaskmovps_avx(auVar78,auVar290);
        _local_3a0 = vmaskmovps_avx(auVar78,auVar290);
        auVar170._4_4_ = __real_3f800000;
        auVar170._0_4_ = __real_3f800000;
        auVar170._8_4_ = __real_3f800000;
        auVar170._12_4_ = __real_3f800000;
        auVar170._16_4_ = __real_3f800000;
        auVar170._20_4_ = __real_3f800000;
        auVar170._24_4_ = __real_3f800000;
        auVar170._28_4_ = __real_3f800000;
        _local_380 = vmaskmovps_avx(auVar78,auVar170);
        auVar54 = vpcmpeqd_avx(local_7c0._16_16_,local_4e0._16_16_);
        auVar102 = vpcmpeqd_avx(local_7c0._0_16_,local_4e0._0_16_);
        auVar79._16_16_ = auVar231;
        auVar79._0_16_ = auVar188;
        auVar122._16_16_ = auVar54;
        auVar122._0_16_ = auVar102;
        auVar79 = auVar79 & ~auVar122;
        if ((((((((SUB321(auVar79 >> 0x1f,0) & 1) != 0 || (SUB321(auVar79 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar79 >> 0x5f,0) & 1) != 0) || SUB321(auVar79 >> 0x7f,0) != '\0') ||
              (SUB321(auVar79 >> 0x9f,0) & 1) != 0) || SUB321(auVar79 >> 0xbf,0) != '\0') ||
            (SUB321(auVar79 >> 0xdf,0) & 1) != 0) || auVar79[0x1f] < '\0') {
          auVar188 = vpackssdw_avx(auVar102,auVar54);
          auVar188 = vpandn_avx(auVar188,auVar230);
          auVar230 = vpmovsxwd_avx(auVar188);
          auVar188 = vpunpckhwd_avx(auVar188,auVar188);
          if (param_8 < 6) {
            auVar105 = vpmulld_avx(local_4e0._0_16_,auVar21);
            auVar212 = vpmulld_avx(local_4e0._16_16_,auVar21);
            vpmovsxdq_avx(auVar212);
            auVar212 = vpshufd_avx(auVar212,0xee);
            vpmovsxdq_avx(auVar212);
            auVar212 = vpmovsxdq_avx(auVar105);
            auVar105 = vpshufd_avx(auVar105,0xee);
            vpmovsxdq_avx(auVar105);
                    /* WARNING: Could not recover jumptable at 0x000140c2ac17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_151c6c818 + *(int *)(&DAT_151c6c818 + uVar36 * 4)))
                      (CONCAT44(__real_3f800000,__real_3f800000),&DAT_151c6c818,auVar230._0_8_,
                       auVar212._0_8_);
            return;
          }
          auVar123._16_16_ = auVar188;
          auVar123._0_16_ = auVar230;
          auVar164 = vmaskmovps_avx(auVar123,auVar290);
          auVar251 = vmaskmovps_avx(auVar123,auVar290);
          auVar290 = vmaskmovps_avx(auVar123,auVar290);
          auVar59._4_4_ = __real_3f800000;
          auVar59._0_4_ = __real_3f800000;
          auVar59._8_4_ = __real_3f800000;
          auVar59._12_4_ = __real_3f800000;
          auVar59._16_4_ = __real_3f800000;
          auVar59._20_4_ = __real_3f800000;
          auVar59._24_4_ = __real_3f800000;
          auVar59._28_4_ = __real_3f800000;
          auVar257 = vmaskmovps_avx(auVar123,auVar59);
          local_320 = auVar164._0_4_;
          fStack_31c = auVar164._4_4_;
          fStack_318 = auVar164._8_4_;
          fStack_314 = auVar164._12_4_;
          fStack_310 = auVar164._16_4_;
          fStack_30c = auVar164._20_4_;
          fStack_308 = auVar164._24_4_;
          fStack_304 = auVar164._28_4_;
          local_300 = auVar251._0_4_;
          fStack_2fc = auVar251._4_4_;
          fStack_2f8 = auVar251._8_4_;
          fStack_2f4 = auVar251._12_4_;
          fStack_2f0 = auVar251._16_4_;
          fStack_2ec = auVar251._20_4_;
          fStack_2e8 = auVar251._24_4_;
          fStack_2e4 = auVar251._28_4_;
          local_2e0 = auVar290._0_4_;
          fStack_2dc = auVar290._4_4_;
          fStack_2d8 = auVar290._8_4_;
          fStack_2d4 = auVar290._12_4_;
          fStack_2d0 = auVar290._16_4_;
          fStack_2cc = auVar290._20_4_;
          fStack_2c8 = auVar290._24_4_;
          fStack_2c4 = auVar290._28_4_;
          local_2c0 = auVar257._0_4_;
          fStack_2bc = auVar257._4_4_;
          fStack_2b8 = auVar257._8_4_;
          fStack_2b4 = auVar257._12_4_;
          fStack_2b0 = auVar257._16_4_;
          fStack_2ac = auVar257._20_4_;
          fStack_2a8 = auVar257._24_4_;
          fStack_2a4 = auVar257._28_4_;
          auVar272._0_4_ =
               (float)local_3e0._0_4_ * local_320 + local_2e0 * (float)local_3a0._0_4_ +
               (float)local_3c0._0_4_ * local_300 + local_2c0 * (float)local_380._0_4_;
          auVar272._4_4_ =
               (float)local_3e0._4_4_ * fStack_31c + fStack_2dc * (float)local_3a0._4_4_ +
               (float)local_3c0._4_4_ * fStack_2fc + fStack_2bc * (float)local_380._4_4_;
          auVar272._8_4_ =
               fStack_3d8 * fStack_318 + fStack_2d8 * fStack_398 +
               fStack_3b8 * fStack_2f8 + fStack_2b8 * fStack_378;
          auVar272._12_4_ =
               fStack_3d4 * fStack_314 + fStack_2d4 * fStack_394 +
               fStack_3b4 * fStack_2f4 + fStack_2b4 * fStack_374;
          auVar272._16_4_ =
               fStack_3d0 * fStack_310 + fStack_2d0 * fStack_390 +
               fStack_3b0 * fStack_2f0 + fStack_2b0 * fStack_370;
          auVar272._20_4_ =
               fStack_3cc * fStack_30c + fStack_2cc * fStack_38c +
               fStack_3ac * fStack_2ec + fStack_2ac * fStack_36c;
          auVar272._24_4_ =
               fStack_3c8 * fStack_308 + fStack_2c8 * fStack_388 +
               fStack_3a8 * fStack_2e8 + fStack_2a8 * fStack_368;
          auVar272._28_4_ =
               fStack_3c4 * fStack_304 + fStack_2c4 * fStack_384 +
               fStack_3a4 * fStack_2e4 + fStack_2a4 * fStack_364;
          auVar290 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar272,6);
          auVar290 = vcvtdq2ps_avx(auVar290 |
                                   ___ymm_0000000100000001000000010000000100000001000000010000000100000001
                                  );
          fVar239 = auVar214._0_4_;
          fVar244 = auVar214._4_4_;
          fVar245 = auVar214._8_4_;
          fVar246 = auVar214._12_4_;
          fVar247 = auVar214._16_4_;
          fVar248 = auVar214._20_4_;
          fVar249 = auVar214._24_4_;
          fVar250 = auVar214._28_4_;
          auVar214 = vsubps_avx(auVar59,auVar214);
          fVar269 = auVar214._0_4_ * auVar290._0_4_;
          fVar283 = auVar214._4_4_ * auVar290._4_4_;
          fVar284 = auVar214._8_4_ * auVar290._8_4_;
          fVar285 = auVar214._12_4_ * auVar290._12_4_;
          fVar286 = auVar214._16_4_ * auVar290._16_4_;
          fVar287 = auVar214._20_4_ * auVar290._20_4_;
          fVar288 = auVar214._24_4_ * auVar290._24_4_;
          fVar289 = auVar214._28_4_ * auVar290._28_4_;
          fVar100 = fVar239 * local_320 + fVar269 * (float)local_3e0._0_4_;
          fVar139 = fVar244 * fStack_31c + fVar283 * (float)local_3e0._4_4_;
          fVar142 = fVar245 * fStack_318 + fVar284 * fStack_3d8;
          fVar145 = fVar246 * fStack_314 + fVar285 * fStack_3d4;
          fVar148 = fVar247 * fStack_310 + fVar286 * fStack_3d0;
          fVar151 = fVar248 * fStack_30c + fVar287 * fStack_3cc;
          fVar154 = fVar249 * fStack_308 + fVar288 * fStack_3c8;
          fVar157 = fVar250 * fStack_304 + fVar289 * fStack_3c4;
          fVar159 = fVar239 * local_300 + fVar269 * (float)local_3c0._0_4_;
          fVar181 = fVar244 * fStack_2fc + fVar283 * (float)local_3c0._4_4_;
          fVar183 = fVar245 * fStack_2f8 + fVar284 * fStack_3b8;
          fVar185 = fVar246 * fStack_2f4 + fVar285 * fStack_3b4;
          fVar187 = fVar247 * fStack_2f0 + fVar286 * fStack_3b0;
          fVar190 = fVar248 * fStack_2ec + fVar287 * fStack_3ac;
          fVar192 = fVar249 * fStack_2e8 + fVar288 * fStack_3a8;
          fVar194 = fVar250 * fStack_2e4 + fVar289 * fStack_3a4;
          fVar195 = local_2e0 * fVar239 + fVar269 * (float)local_3a0._0_4_;
          fVar204 = fStack_2dc * fVar244 + fVar283 * (float)local_3a0._4_4_;
          fVar205 = fStack_2d8 * fVar245 + fVar284 * fStack_398;
          fVar206 = fStack_2d4 * fVar246 + fVar285 * fStack_394;
          fVar207 = fStack_2d0 * fVar247 + fVar286 * fStack_390;
          fVar209 = fStack_2cc * fVar248 + fVar287 * fStack_38c;
          fVar210 = fStack_2c8 * fVar249 + fVar288 * fStack_388;
          fVar211 = fStack_2c4 * fVar250 + fVar289 * fStack_384;
          fVar269 = local_2c0 * fVar239 + fVar269 * (float)local_380._0_4_;
          fVar283 = fStack_2bc * fVar244 + fVar283 * (float)local_380._4_4_;
          fVar284 = fStack_2b8 * fVar245 + fVar284 * fStack_378;
          fVar285 = fStack_2b4 * fVar246 + fVar285 * fStack_374;
          fVar286 = fStack_2b0 * fVar247 + fVar286 * fStack_370;
          fVar287 = fStack_2ac * fVar248 + fVar287 * fStack_36c;
          fVar288 = fStack_2a8 * fVar249 + fVar288 * fStack_368;
          fVar289 = fStack_2a4 * fVar250 + fVar289 * fStack_364;
          auVar234._0_4_ =
               fVar195 * fVar195 + fVar100 * fVar100 + fVar269 * fVar269 + fVar159 * fVar159;
          auVar234._4_4_ =
               fVar204 * fVar204 + fVar139 * fVar139 + fVar283 * fVar283 + fVar181 * fVar181;
          auVar234._8_4_ =
               fVar205 * fVar205 + fVar142 * fVar142 + fVar284 * fVar284 + fVar183 * fVar183;
          auVar234._12_4_ =
               fVar206 * fVar206 + fVar145 * fVar145 + fVar285 * fVar285 + fVar185 * fVar185;
          auVar234._16_4_ =
               fVar207 * fVar207 + fVar148 * fVar148 + fVar286 * fVar286 + fVar187 * fVar187;
          auVar234._20_4_ =
               fVar209 * fVar209 + fVar151 * fVar151 + fVar287 * fVar287 + fVar190 * fVar190;
          auVar234._24_4_ =
               fVar210 * fVar210 + fVar154 * fVar154 + fVar288 * fVar288 + fVar192 * fVar192;
          auVar234._28_4_ =
               fVar211 * fVar211 + fVar157 * fVar157 + fVar289 * fVar289 + fVar194 * fVar194;
          auVar214 = vrsqrtps_avx(auVar234);
          auVar80._4_4_ = __real_3f000000;
          auVar80._0_4_ = __real_3f000000;
          auVar80._8_4_ = __real_3f000000;
          auVar80._12_4_ = __real_3f000000;
          auVar80._16_4_ = __real_3f000000;
          auVar80._20_4_ = __real_3f000000;
          auVar80._24_4_ = __real_3f000000;
          auVar80._28_4_ = __real_3f000000;
          fVar239 = auVar214._0_4_;
          fVar244 = auVar214._4_4_;
          fVar245 = auVar214._8_4_;
          fVar246 = auVar214._12_4_;
          fVar247 = auVar214._16_4_;
          fVar248 = auVar214._20_4_;
          fVar249 = auVar214._24_4_;
          fVar250 = auVar214._28_4_;
          auVar260._0_4_ = fVar239 * fVar239 * auVar234._0_4_ * __real_3f000000;
          auVar260._4_4_ = fVar244 * fVar244 * auVar234._4_4_ * __real_3f000000;
          auVar260._8_4_ = fVar245 * fVar245 * auVar234._8_4_ * __real_3f000000;
          auVar260._12_4_ = fVar246 * fVar246 * auVar234._12_4_ * __real_3f000000;
          auVar260._16_4_ = fVar247 * fVar247 * auVar234._16_4_ * __real_3f000000;
          auVar260._20_4_ = fVar248 * fVar248 * auVar234._20_4_ * __real_3f000000;
          auVar260._24_4_ = fVar249 * fVar249 * auVar234._24_4_ * __real_3f000000;
          auVar260._28_4_ = fVar250 * fVar250 * auVar234._28_4_ * __real_3f000000;
          auVar214 = vsubps_avx(auVar80,auVar260);
          fVar239 = auVar214._0_4_ * fVar239 + fVar239;
          fVar244 = auVar214._4_4_ * fVar244 + fVar244;
          fVar245 = auVar214._8_4_ * fVar245 + fVar245;
          fVar246 = auVar214._12_4_ * fVar246 + fVar246;
          fVar247 = auVar214._16_4_ * fVar247 + fVar247;
          fVar248 = auVar214._20_4_ * fVar248 + fVar248;
          fVar249 = auVar214._24_4_ * fVar249 + fVar249;
          fVar250 = auVar214._28_4_ * fVar250 + fVar250;
          auVar253._0_4_ = auVar234._0_4_ * __real_3f000000 * fVar239 * fVar239;
          auVar253._4_4_ = auVar234._4_4_ * __real_3f000000 * fVar244 * fVar244;
          auVar253._8_4_ = auVar234._8_4_ * __real_3f000000 * fVar245 * fVar245;
          auVar253._12_4_ = auVar234._12_4_ * __real_3f000000 * fVar246 * fVar246;
          auVar253._16_4_ = auVar234._16_4_ * __real_3f000000 * fVar247 * fVar247;
          auVar253._20_4_ = auVar234._20_4_ * __real_3f000000 * fVar248 * fVar248;
          auVar253._24_4_ = auVar234._24_4_ * __real_3f000000 * fVar249 * fVar249;
          auVar253._28_4_ = auVar234._28_4_ * __real_3f000000 * fVar250 * fVar250;
          auVar214 = vsubps_avx(auVar80,auVar253);
          fVar239 = auVar214._0_4_ * fVar239 + fVar239;
          fVar244 = auVar214._4_4_ * fVar244 + fVar244;
          fVar245 = auVar214._8_4_ * fVar245 + fVar245;
          fVar246 = auVar214._12_4_ * fVar246 + fVar246;
          fVar247 = auVar214._16_4_ * fVar247 + fVar247;
          fVar248 = auVar214._20_4_ * fVar248 + fVar248;
          fVar249 = auVar214._24_4_ * fVar249 + fVar249;
          fVar250 = auVar214._28_4_ * fVar250 + fVar250;
          auVar81._4_4_ = __real_322bcc77;
          auVar81._0_4_ = __real_322bcc77;
          auVar81._8_4_ = __real_322bcc77;
          auVar81._12_4_ = __real_322bcc77;
          auVar81._16_4_ = __real_322bcc77;
          auVar81._20_4_ = __real_322bcc77;
          auVar81._24_4_ = __real_322bcc77;
          auVar81._28_4_ = __real_322bcc77;
          auVar214 = vcmpps_avx(auVar81,auVar234,2);
          uVar26 = auVar214._0_4_;
          auVar124._0_4_ = (uint)(fVar100 * fVar239) & uVar26;
          uVar158 = auVar214._4_4_;
          auVar124._4_4_ = (uint)(fVar139 * fVar244) & uVar158;
          uVar29 = auVar214._8_4_;
          auVar124._8_4_ = (uint)(fVar142 * fVar245) & uVar29;
          uVar140 = auVar214._12_4_;
          auVar124._12_4_ = (uint)(fVar145 * fVar246) & uVar140;
          uVar180 = auVar214._16_4_;
          auVar124._16_4_ = (uint)(fVar148 * fVar247) & uVar180;
          uVar182 = auVar214._20_4_;
          auVar124._20_4_ = (uint)(fVar151 * fVar248) & uVar182;
          uVar184 = auVar214._24_4_;
          auVar124._24_4_ = (uint)(fVar154 * fVar249) & uVar184;
          uVar186 = auVar214._28_4_;
          auVar124._28_4_ = (uint)(fVar157 * fVar250) & uVar186;
          auVar171._0_4_ = (uint)(fVar159 * fVar239) & uVar26;
          auVar171._4_4_ = (uint)(fVar181 * fVar244) & uVar158;
          auVar171._8_4_ = (uint)(fVar183 * fVar245) & uVar29;
          auVar171._12_4_ = (uint)(fVar185 * fVar246) & uVar140;
          auVar171._16_4_ = (uint)(fVar187 * fVar247) & uVar180;
          auVar171._20_4_ = (uint)(fVar190 * fVar248) & uVar182;
          auVar171._24_4_ = (uint)(fVar192 * fVar249) & uVar184;
          auVar171._28_4_ = (uint)(fVar194 * fVar250) & uVar186;
          auVar200._0_4_ = (uint)(fVar195 * fVar239) & uVar26;
          auVar200._4_4_ = (uint)(fVar204 * fVar244) & uVar158;
          auVar200._8_4_ = (uint)(fVar205 * fVar245) & uVar29;
          auVar200._12_4_ = (uint)(fVar206 * fVar246) & uVar140;
          auVar200._16_4_ = (uint)(fVar207 * fVar247) & uVar180;
          auVar200._20_4_ = (uint)(fVar209 * fVar248) & uVar182;
          auVar200._24_4_ = (uint)(fVar210 * fVar249) & uVar184;
          auVar200._28_4_ = (uint)(fVar211 * fVar250) & uVar186;
          auVar222._0_4_ = (uint)(fVar269 * fVar239) & uVar26;
          auVar222._4_4_ = (uint)(fVar283 * fVar244) & uVar158;
          auVar222._8_4_ = (uint)(fVar284 * fVar245) & uVar29;
          auVar222._12_4_ = (uint)(fVar285 * fVar246) & uVar140;
          auVar222._16_4_ = (uint)(fVar286 * fVar247) & uVar180;
          auVar222._20_4_ = (uint)(fVar287 * fVar248) & uVar182;
          auVar222._24_4_ = (uint)(fVar288 * fVar249) & uVar184;
          auVar222._28_4_ = (uint)(fVar289 * fVar250) & uVar186;
          auVar214 = vcmpps_avx(auVar81,auVar234,6);
          auVar235._0_4_ = auVar214._0_4_ & (uint)__real_3f800000;
          auVar235._4_4_ = auVar214._4_4_ & (uint)__real_3f800000;
          auVar235._8_4_ = auVar214._8_4_ & (uint)__real_3f800000;
          auVar235._12_4_ = auVar214._12_4_ & (uint)__real_3f800000;
          auVar235._16_4_ = auVar214._16_4_ & (uint)__real_3f800000;
          auVar235._20_4_ = auVar214._20_4_ & (uint)__real_3f800000;
          auVar235._24_4_ = auVar214._24_4_ & (uint)__real_3f800000;
          auVar235._28_4_ = auVar214._28_4_ & (uint)__real_3f800000;
          auVar60._16_16_ = auVar188;
          auVar60._0_16_ = auVar230;
          _local_3e0 = vmaskmovps_avx(auVar60,auVar124);
          _local_3c0 = vmaskmovps_avx(auVar60,auVar171);
          _local_3a0 = vmaskmovps_avx(auVar60,auVar200);
          _local_380 = vmaskmovps_avx(auVar60,auVar222 | auVar235);
        }
      }
      local_220 = vshufps_avx(auVar198,auVar215,0x88);
      auVar201._16_16_ = _local_380;
      auVar201._0_16_ = local_3a0._0_16_;
      auVar251 = vperm2f128_avx(_local_3a0,_local_380,0x31);
      auVar241._16_16_ = _local_3c0;
      auVar241._0_16_ = local_3e0._0_16_;
      auVar257 = vperm2f128_avx(_local_3e0,_local_3c0,0x31);
      auVar261._16_16_ = local_3a0._0_16_;
      auVar261._0_16_ = _local_380;
      auVar214 = vshufps_avx(auVar261,auVar261,0x14);
      auVar292._8_8_ = local_3a0;
      auVar292._0_8_ = local_3a0;
      auVar292._16_8_ = local_380;
      auVar292._24_8_ = local_380;
      auVar214 = vblendps_avx(auVar292,auVar214,0x48);
      auVar293._16_16_ = local_3e0._0_16_;
      auVar293._0_16_ = _local_3c0;
      auVar290 = vshufps_avx(auVar293,auVar293,0xe1);
      auVar290 = vblendps_avx(auVar241,auVar290,0x12);
      local_180 = vblendps_avx(auVar290,auVar214,0xcc);
      auVar214 = vshufps_avx(auVar261,auVar261,0xb4);
      auVar214 = vblendps_avx(auVar201,auVar214,0x48);
      auVar164 = vshufps_avx(auVar293,auVar293,0xeb);
      auVar290 = vshufpd_avx(auVar241,auVar241,5);
      auVar290 = vblendps_avx(auVar290,auVar164,0x12);
      local_160 = vblendps_avx(auVar290,auVar214,0xcc);
      auVar164 = vperm2f128_avx(_local_380,_local_3a0,0x31);
      auVar214 = vshufps_avx(auVar164,auVar164,0x14);
      auVar223._8_8_ = auVar251._0_8_;
      auVar223._0_8_ = auVar251._0_8_;
      auVar223._16_8_ = auVar251._16_8_;
      auVar223._24_8_ = auVar251._16_8_;
      auVar214 = vblendps_avx(auVar223,auVar214,0x48);
      auVar270 = vperm2f128_avx(_local_3c0,_local_3e0,0x31);
      auVar290 = vshufps_avx(auVar270,auVar270,0xe1);
      auVar290 = vblendps_avx(auVar257,auVar290,0x12);
      local_140 = vblendps_avx(auVar290,auVar214,0xcc);
      auVar214 = vshufps_avx(auVar164,auVar164,0xb4);
      auVar214 = vblendps_avx(auVar251,auVar214,0x48);
      auVar164 = vshufps_avx(auVar270,auVar270,0xeb);
      auVar290 = vshufpd_avx(auVar257,auVar257,5);
      auVar290 = vblendps_avx(auVar290,auVar164,0x12);
      local_120 = vblendps_avx(auVar290,auVar214,0xcc);
      uVar34 = 0xff;
      do {
        uVar26 = 0;
        for (uVar22 = uVar34; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x8000000000000000) {
          uVar26 = uVar26 + 1;
        }
        bVar1 = (byte)uVar26 & 0x3f;
        iVar43 = *(int *)(local_220 + (ulonglong)(uVar26 & 7) * 4);
        auVar214 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar26 << 4)));
        *(undefined1 (*) [16])(param_1 + (longlong)iVar43 * 0x60) = auVar214._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x10 + (longlong)iVar43 * 0x60) = auVar214._16_16_;
        uVar34 = uVar34 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
      } while (uVar34 != 0);
      uVar46 = uVar46 + 8;
    } while ((int)uVar46 < (int)(uVar32 & 0xfffffff8));
  }
  if ((int)param_9 <= (int)uVar46) {
    return;
  }
  auVar212 = vpshufd_avx(ZEXT416(uVar46),0);
  auVar61._16_16_ = auVar212;
  auVar61._0_16_ = auVar212;
  auVar21 = vpshufd_avx(ZEXT416(param_9),0);
  auVar163 = SUB3216(auVar61 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar188 = SUB3216(auVar61 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar101 = vpcmpgtd_avx(auVar21,auVar188);
  auVar105 = vpcmpgtd_avx(auVar21,auVar163);
  auVar62._16_16_ = auVar101;
  auVar62._0_16_ = auVar105;
  auVar230 = vpslld_avx(auVar212,3);
  uVar29 = auVar105._0_4_;
  auVar231._0_4_ = uVar29 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  uVar140 = auVar105._4_4_;
  auVar231._4_4_ = uVar140 & _UNK_150b519c4;
  uVar180 = auVar105._8_4_;
  auVar231._8_4_ = uVar180 & _UNK_150b519c8;
  uVar182 = auVar105._12_4_;
  auVar231._12_4_ = uVar182 & _UNK_150b519cc;
  uVar184 = auVar101._0_4_;
  auVar212 = vpand_avx(auVar101,auVar230);
  lVar39 = auVar212._0_4_ + param_2;
  auVar212 = vpand_avx(auVar105,auVar230);
  uVar46 = *(uint *)(param_2 + auVar212._0_4_);
  vextractps_avx(auVar231,1);
  vextractps_avx(auVar231,2);
  vextractps_avx(auVar231,3);
  auVar231 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)(uVar184 & _UNK_150b519f0) + lVar39)),4);
  auVar212 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)
                                          (uVar29 & 
                                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004
                                          ) + param_2 + auVar212._0_4_)),4);
  auVar212 = vpand_avx(auVar105,auVar212);
  uVar32 = *(uint *)((longlong)param_3 +
                    (ulonglong)
                    (uVar29 & 
                    ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c) +
                    (longlong)auVar212._0_4_);
  auVar230 = ZEXT416(*(uint *)((longlong)param_3 +
                              (ulonglong)
                              (uVar29 & 
                              ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                              ) + (longlong)auVar212._0_4_));
  auVar54 = ZEXT416(uVar32);
  auVar212 = vpand_avx(auVar101,auVar231);
  uVar26 = *(uint *)((longlong)param_3 +
                    (ulonglong)(uVar184 & _UNK_150b50d70) + (longlong)auVar212._0_4_);
  uVar158 = *(uint *)((longlong)param_3 +
                     (ulonglong)(uVar184 & _UNK_150b50d90) + (longlong)auVar212._0_4_);
  auVar160._4_4_ = __real_00000001;
  auVar160._0_4_ = __real_00000001;
  auVar160._8_4_ = __real_00000001;
  auVar160._12_4_ = __real_00000001;
  auVar212 = vpcmpeqd_avx(auVar160,ZEXT416(uVar158));
  auVar105 = vpcmpeqd_avx(auVar54,auVar160);
  auVar82._16_16_ = auVar212;
  auVar82._0_16_ = auVar105;
  auVar62 = auVar62 & auVar82;
  auVar212 = ZEXT416(uVar158);
  if ((((((((SUB321(auVar62 >> 0x1f,0) & 1) != 0 || (SUB321(auVar62 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar62 >> 0x5f,0) & 1) != 0) || SUB321(auVar62 >> 0x7f,0) != '\0') ||
        (SUB321(auVar62 >> 0x9f,0) & 1) != 0) || SUB321(auVar62 >> 0xbf,0) != '\0') ||
      (SUB321(auVar62 >> 0xdf,0) & 1) != 0) || auVar62[0x1f] < '\0') {
    auVar105 = vpcmpeqd_avx(auVar212,auVar160);
    auVar231 = vpcmpeqd_avx(auVar54,auVar160);
    auVar83._0_4_ = auVar231._0_4_ & uVar29;
    auVar83._4_4_ = auVar231._4_4_ & uVar140;
    auVar83._8_4_ = auVar231._8_4_ & uVar180;
    auVar83._12_4_ = auVar231._12_4_ & uVar182;
    auVar83._16_4_ = auVar105._0_4_ & uVar184;
    auVar83._20_4_ = auVar105._4_4_ & auVar101._4_4_;
    auVar83._24_4_ = auVar105._8_4_ & auVar101._8_4_;
    auVar83._28_4_ = auVar105._12_4_ & auVar101._12_4_;
    auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),ZEXT2032(CONCAT416(uVar26,auVar230)),
                            auVar83);
    auVar102 = auVar56._0_16_;
    iVar47 = vextractps_avx(auVar102,0);
    iVar44 = vextractps_avx(auVar102,1);
    auVar105 = auVar56._16_16_;
    iVar43 = vextractps_avx(auVar105,0);
    lVar33 = (longlong)iVar43;
    iVar43 = vextractps_avx(auVar105,1);
    lVar35 = (longlong)iVar43;
    iVar43 = vextractps_avx(auVar105,2);
    lVar42 = (longlong)iVar43;
    iVar38 = vextractps_avx(auVar105,3);
    auVar23._4_4_ = _UNK_150b50d44;
    auVar23._0_4_ = ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
    auVar23._8_4_ = _UNK_150b50d48;
    auVar23._12_4_ = _UNK_150b50d4c;
    auVar23._16_4_ = _UNK_150b50d50;
    auVar23._20_4_ = _UNK_150b50d54;
    auVar23._24_4_ = _UNK_150b50d58;
    auVar23._28_4_ = _UNK_150b50d5c;
    auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar23,auVar83);
    auVar162 = auVar56._0_16_;
    auVar231 = auVar56._16_16_;
    iVar51 = vextractps_avx(auVar231,0);
    iVar43 = vextractps_avx(auVar231,1);
    iVar52 = vextractps_avx(auVar231,2);
    auVar105 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar51 + lVar33)),
                             ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar35)),0x10);
    iVar53 = vextractps_avx(auVar231,3);
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)((longlong)param_4 + iVar52 + lVar42)),0x20);
    auVar24._4_4_ = _UNK_150b50d64;
    auVar24._0_4_ = ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
    auVar24._8_4_ = _UNK_150b50d68;
    auVar24._12_4_ = _UNK_150b50d6c;
    auVar24._16_4_ = _UNK_150b50d70;
    auVar24._20_4_ = _UNK_150b50d74;
    auVar24._24_4_ = _UNK_150b50d78;
    auVar24._28_4_ = _UNK_150b50d7c;
    auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar24,auVar83);
    auVar70 = auVar56._0_16_;
    auVar55 = auVar56._16_16_;
    iVar51 = vextractps_avx(auVar55,0);
    iVar43 = vextractps_avx(auVar55,1);
    auVar231 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar51 + lVar33)),
                             ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar35)),0x10);
    iVar43 = vextractps_avx(auVar55,2);
    lVar48 = (longlong)iVar47;
    auVar231 = vinsertps_avx(auVar231,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar42)),0x20);
    iVar43 = vextractps_avx(auVar102,2);
    lVar40 = (longlong)iVar38;
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)((longlong)param_4 + iVar53 + lVar40)),0x30);
    lVar45 = (longlong)iVar44;
    iVar38 = vextractps_avx(auVar55,3);
    auVar231 = vinsertps_avx(auVar231,ZEXT416(*(uint *)((longlong)param_4 + iVar38 + lVar40)),0x30);
    iVar38 = vextractps_avx(auVar102,3);
    iVar44 = vextractps_avx(auVar162,0);
    iVar47 = vextractps_avx(auVar70,0);
    iVar51 = vextractps_avx(auVar162,1);
    auVar102 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar44 + lVar48)),
                             ZEXT416(*(uint *)((longlong)param_4 + iVar51 + lVar45)),0x10);
    iVar44 = vextractps_avx(auVar70,1);
    lVar37 = (longlong)iVar43;
    auVar55 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar47 + lVar48)),
                            ZEXT416(*(uint *)((longlong)param_4 + iVar44 + lVar45)),0x10);
    iVar43 = vextractps_avx(auVar162,2);
    auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar37)),0x20);
    iVar43 = vextractps_avx(auVar70,2);
    lVar50 = (longlong)iVar38;
    auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar37)),0x20);
    iVar43 = vextractps_avx(auVar162,3);
    auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar50)),0x30);
    iVar43 = vextractps_avx(auVar70,3);
    auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar50)),0x30);
    auVar162 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar33)),
                             ZEXT416(*(uint *)((longlong)param_4 + lVar35)),0x10);
    auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)((longlong)param_4 + lVar42)),0x20);
    auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)((longlong)param_4 + lVar40)),0x30);
    auVar70 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar48)),
                            ZEXT416(*(uint *)((longlong)param_4 + lVar45)),0x10);
    auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)((longlong)param_4 + lVar37)),0x20);
    auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)((longlong)param_4 + lVar50)),0x30);
    auVar254._16_16_ = auVar162;
    auVar254._0_16_ = auVar70;
    auVar125._16_16_ = auVar105;
    auVar125._0_16_ = auVar102;
    auVar242._16_16_ = auVar231;
    auVar242._0_16_ = auVar55;
    auVar262._0_4_ = auVar70._0_4_ * auVar70._0_4_;
    auVar262._4_4_ = auVar70._4_4_ * auVar70._4_4_;
    auVar262._8_4_ = auVar70._8_4_ * auVar70._8_4_;
    auVar262._12_4_ = auVar70._12_4_ * auVar70._12_4_;
    auVar262._16_4_ = auVar162._0_4_ * auVar162._0_4_;
    auVar262._20_4_ = auVar162._4_4_ * auVar162._4_4_;
    auVar262._24_4_ = auVar162._8_4_ * auVar162._8_4_;
    auVar262._28_4_ = auVar162._12_4_ * auVar162._12_4_;
    auVar273._4_4_ = __real_3f800000;
    auVar273._0_4_ = __real_3f800000;
    auVar273._8_4_ = __real_3f800000;
    auVar273._12_4_ = __real_3f800000;
    auVar273._16_4_ = __real_3f800000;
    auVar273._20_4_ = __real_3f800000;
    auVar273._24_4_ = __real_3f800000;
    auVar273._28_4_ = __real_3f800000;
    auVar56 = vsubps_avx(auVar273,auVar262);
    auVar274._0_4_ = auVar102._0_4_ * auVar102._0_4_;
    auVar274._4_4_ = auVar102._4_4_ * auVar102._4_4_;
    auVar274._8_4_ = auVar102._8_4_ * auVar102._8_4_;
    auVar274._12_4_ = auVar102._12_4_ * auVar102._12_4_;
    auVar274._16_4_ = auVar105._0_4_ * auVar105._0_4_;
    auVar274._20_4_ = auVar105._4_4_ * auVar105._4_4_;
    auVar274._24_4_ = auVar105._8_4_ * auVar105._8_4_;
    auVar274._28_4_ = auVar105._12_4_ * auVar105._12_4_;
    auVar56 = vsubps_avx(auVar56,auVar274);
    auVar275._0_4_ = auVar55._0_4_ * auVar55._0_4_;
    auVar275._4_4_ = auVar55._4_4_ * auVar55._4_4_;
    auVar275._8_4_ = auVar55._8_4_ * auVar55._8_4_;
    auVar275._12_4_ = auVar55._12_4_ * auVar55._12_4_;
    auVar275._16_4_ = auVar231._0_4_ * auVar231._0_4_;
    auVar275._20_4_ = auVar231._4_4_ * auVar231._4_4_;
    auVar275._24_4_ = auVar231._8_4_ * auVar231._8_4_;
    auVar275._28_4_ = auVar231._12_4_ * auVar231._12_4_;
    auVar64 = vsubps_avx(auVar56,auVar275);
    auVar56 = vcmpps_avx(ZEXT1632((undefined1  [16])0x0),auVar64,1);
    auVar64 = vsqrtps_avx(auVar64);
    auVar172._0_4_ = auVar64._0_4_ & auVar56._0_4_;
    auVar172._4_4_ = auVar64._4_4_ & auVar56._4_4_;
    auVar172._8_4_ = auVar64._8_4_ & auVar56._8_4_;
    auVar172._12_4_ = auVar64._12_4_ & auVar56._12_4_;
    auVar172._16_4_ = auVar64._16_4_ & auVar56._16_4_;
    auVar172._20_4_ = auVar64._20_4_ & auVar56._20_4_;
    auVar172._24_4_ = auVar64._24_4_ & auVar56._24_4_;
    auVar172._28_4_ = auVar64._28_4_ & auVar56._28_4_;
    _local_5c0 = vmaskmovps_avx(auVar83,auVar254);
    _local_5a0 = vmaskmovps_avx(auVar83,auVar125);
    _local_580 = vmaskmovps_avx(auVar83,auVar242);
    _local_560 = vmaskmovps_avx(auVar83,auVar172);
  }
  auVar105 = vpcmpeqd_avx(auVar212,auVar160);
  auVar231 = vpcmpeqd_avx(auVar54,auVar160);
  auVar84._16_16_ = auVar105;
  auVar84._0_16_ = auVar231;
  auVar188 = vpcmpgtd_avx(auVar21,auVar188);
  auVar102 = vpcmpgtd_avx(auVar21,auVar163);
  auVar126._16_16_ = auVar188;
  auVar126._0_16_ = auVar102;
  auVar126 = auVar126 & ~auVar84;
  if ((((((((SUB321(auVar126 >> 0x1f,0) & 1) == 0 && (SUB321(auVar126 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar126 >> 0x5f,0) & 1) == 0) && SUB321(auVar126 >> 0x7f,0) == '\0') &&
        (SUB321(auVar126 >> 0x9f,0) & 1) == 0) && SUB321(auVar126 >> 0xbf,0) == '\0') &&
      (SUB321(auVar126 >> 0xdf,0) & 1) == 0) && -1 < auVar126[0x1f]) goto LAB_140c30a2e;
  auVar102 = vpmovsxdq_avx(ZEXT416(uVar26));
  auVar162 = vpshufd_avx(ZEXT416(uVar26),0xee);
  auVar55 = vpmovsxdq_avx(auVar230);
  auVar230 = vpshufd_avx(auVar230,0xee);
  auVar162 = vpmovsxdq_avx(auVar162);
  auVar70 = vpmovsxdq_avx(auVar230);
  auVar236._0_4_ = ~auVar231._0_4_ & uVar29;
  auVar236._4_4_ = ~auVar231._4_4_ & uVar140;
  auVar236._8_4_ = ~auVar231._8_4_ & uVar180;
  auVar236._12_4_ = ~auVar231._12_4_ & uVar182;
  auVar236._16_4_ = ~auVar105._0_4_ & uVar184;
  auVar236._20_4_ = ~auVar105._4_4_ & auVar101._4_4_;
  auVar236._24_4_ = ~auVar105._8_4_ & auVar101._8_4_;
  auVar236._28_4_ = ~auVar105._12_4_ & auVar101._12_4_;
  auVar101 = vshufps_avx(ZEXT416(uVar27),ZEXT416(uVar27),0);
  auVar105 = vblendps_avx(auVar101,ZEXT816(0) << 0x20,10);
  auVar231 = vpmovzxdq_avx(auVar101);
  auVar297 = vshufps_avx(ZEXT416(uVar28),ZEXT416(uVar28),0);
  auVar101 = vpcmpgtd_avx(auVar212,auVar160);
  auVar230 = vpcmpgtd_avx(auVar54,auVar160);
  auVar160 = vpshufd_avx(ZEXT416(~((0.0 < param_6) - 1)),0);
  auVar208._0_4_ = auVar230._0_4_ & auVar160._0_4_;
  auVar208._4_4_ = auVar230._4_4_ & auVar160._4_4_;
  auVar208._8_4_ = auVar230._8_4_ & auVar160._8_4_;
  auVar208._12_4_ = auVar230._12_4_ & auVar160._12_4_;
  auVar202._16_4_ = auVar101._0_4_ & auVar160._0_4_;
  auVar202._0_16_ = auVar208;
  auVar202._20_4_ = auVar101._4_4_ & auVar160._4_4_;
  auVar202._24_4_ = auVar101._8_4_ & auVar160._8_4_;
  auVar202._28_4_ = auVar101._12_4_ & auVar160._12_4_;
  auVar63._0_4_ = auVar236._0_4_ & auVar208._0_4_;
  auVar63._4_4_ = auVar236._4_4_ & auVar208._4_4_;
  auVar63._8_4_ = auVar236._8_4_ & auVar208._8_4_;
  auVar63._12_4_ = auVar236._12_4_ & auVar208._12_4_;
  auVar63._16_4_ = auVar236._16_4_ & auVar202._16_4_;
  auVar63._20_4_ = auVar236._20_4_ & auVar202._20_4_;
  auVar63._24_4_ = auVar236._24_4_ & auVar202._24_4_;
  auVar63._28_4_ = auVar236._28_4_ & auVar202._28_4_;
  uVar27 = vmovmskps_avx(auVar63);
  if (uVar27 == 0) {
    auVar212 = (undefined1  [16])0x0;
    auVar64 = ZEXT832(0) << 0x20;
    auVar56 = ZEXT1632((undefined1  [16])0x0);
    auVar105 = (undefined1  [16])0x0;
  }
  else {
    auVar101 = vpcmpeqd_avx(auVar208,auVar208);
    auVar8._0_4_ = uVar158 + auVar101._0_4_;
    auVar8._4_4_ = auVar101._4_4_;
    auVar8._8_4_ = auVar101._8_4_;
    auVar8._12_4_ = auVar101._12_4_;
    auVar9._0_4_ = uVar32 + auVar101._0_4_;
    auVar9._4_4_ = auVar101._4_4_;
    auVar9._8_4_ = auVar101._8_4_;
    auVar9._12_4_ = auVar101._12_4_;
    auVar294._16_16_ = auVar8;
    auVar294._0_16_ = auVar9;
    if (param_6 < __real_3f800000) {
      auVar101 = vpmulld_avx(auVar54,auVar297);
      auVar230 = vpmulld_avx(auVar212,auVar297);
      auVar160 = vpmovsxdq_avx(auVar230);
      auVar230 = vpshufd_avx(auVar230,0xee);
      auVar196 = vpmovsxdq_avx(auVar230);
      auVar208 = vpmovsxdq_avx(auVar101);
      auVar101 = vpshufd_avx(auVar101,0xee);
      auVar298 = vpmovsxdq_avx(auVar101);
      auVar240._8_8_ = 0;
      auVar240._0_8_ = (longlong)param_4 + 3;
      auVar101 = vpshufd_avx(auVar240,0x44);
      auVar105 = vpaddq_avx(auVar101,auVar105);
      auVar101 = vpaddq_avx(auVar101,auVar231);
      auVar230 = vpaddq_avx(auVar102,auVar101);
      auVar230 = vpaddq_avx(auVar230,auVar160);
      auVar231 = vpaddq_avx(auVar162,auVar105);
      auVar231 = vpaddq_avx(auVar231,auVar196);
      auVar101 = vpaddq_avx(auVar55,auVar101);
      auVar101 = vpaddq_avx(auVar101,auVar208);
      auVar105 = vpaddq_avx(auVar105,auVar70);
      auVar105 = vpaddq_avx(auVar105,auVar298);
      auVar213._0_4_ = auVar230._0_4_ & (uint)__real_fffffffffffffffc;
      auVar213._4_4_ = auVar230._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar213._8_4_ = auVar230._8_4_ & (uint)__real_fffffffffffffffc;
      auVar213._12_4_ = auVar230._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar224._16_4_ = auVar231._0_4_ & (uint)__real_fffffffffffffffc;
      auVar224._0_16_ = auVar213;
      auVar224._20_4_ = auVar231._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar224._24_4_ = auVar231._8_4_ & (uint)__real_fffffffffffffffc;
      auVar224._28_4_ = auVar231._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar299._0_4_ = auVar101._0_4_ & (uint)__real_fffffffffffffffc;
      auVar299._4_4_ = auVar101._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar299._8_4_ = auVar101._8_4_ & (uint)__real_fffffffffffffffc;
      auVar299._12_4_ = auVar101._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar303._16_4_ = auVar105._0_4_ & (uint)__real_fffffffffffffffc;
      auVar303._0_16_ = auVar299;
      auVar303._20_4_ = auVar105._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar303._24_4_ = auVar105._8_4_ & (uint)__real_fffffffffffffffc;
      auVar303._28_4_ = auVar105._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar105 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
      auVar56 = vcvtdq2ps_avx(auVar294);
      param_6 = param_6 * (float)(param_5 + -1);
      uVar32 = (uint)param_6;
      uVar28 = 0;
      if (0 < (int)uVar32) {
        uVar28 = uVar32;
      }
      if ((int)(param_5 - 2U) < (int)uVar28) {
        uVar28 = param_5 - 2U;
      }
      auVar72._0_4_ = (int)(auVar105._0_4_ * auVar56._0_4_);
      auVar72._4_4_ = (int)(auVar105._4_4_ * auVar56._4_4_);
      auVar72._8_4_ = (int)(auVar105._8_4_ * auVar56._8_4_);
      auVar72._12_4_ = (int)(auVar105._12_4_ * auVar56._12_4_);
      auVar85._16_4_ = (int)(auVar105._0_4_ * auVar56._16_4_);
      auVar85._0_16_ = auVar72;
      auVar85._20_4_ = (int)(auVar105._4_4_ * auVar56._20_4_);
      auVar85._24_4_ = (int)(auVar105._8_4_ * auVar56._24_4_);
      auVar85._28_4_ = (int)(auVar105._12_4_ * auVar56._28_4_);
      auVar105 = vpmaxsd_avx(auVar85._16_16_,ZEXT816(0) << 0x20);
      auVar101 = vpmaxsd_avx(auVar72,ZEXT816(0) << 0x20);
      auVar230 = vpminsd_avx(auVar105,auVar8);
      auVar231 = vpminsd_avx(auVar101,auVar9);
      auVar174._16_16_ = auVar230;
      auVar174._0_16_ = auVar231;
      auVar306 = ZEXT3264(auVar174);
      auVar102 = auVar224._16_16_;
      auVar160 = auVar303._16_16_;
      cVar49 = (char)uVar27;
      if (param_5 < 0x100) {
        auVar162 = vpmovsxdq_avx(auVar231);
        auVar55 = vpshufd_avx(auVar231,0xee);
        auVar55 = vpmovsxdq_avx(auVar55);
        auVar55 = vpaddq_avx(auVar160,auVar55);
        auVar162 = vpaddq_avx(auVar299,auVar162);
        auVar70 = auVar162;
        if ((uVar27 & 1) != 0) {
          auVar70 = ZEXT116(*auVar162._0_8_);
        }
        auVar196 = vpmovsxdq_avx(auVar230);
        auVar208 = vpshufd_avx(auVar230,0xee);
        if ((uVar27 & 2) != 0) {
          auVar162 = vpinsrb_avx(auVar70,(uint)*auVar162._8_8_,1);
          auVar70 = vpblendw_avx(auVar162,auVar70,0xe);
        }
        auVar208 = vpmovsxdq_avx(auVar208);
        auVar162 = vpaddq_avx(auVar196,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar196 = vpaddq_avx(auVar208,auVar102);
        }
        else {
          auVar196 = vpmovzxwd_avx(auVar70);
          auVar196 = vpinsrb_avx(auVar196,(uint)*auVar55._0_8_,2);
          auVar196 = vpinsrb_avx(auVar196,(uint)auVar70[3],3);
          auVar70 = vpblendw_avx(auVar196,auVar70,0xc);
          auVar196 = vpaddq_avx(auVar208,auVar102);
        }
        if ((uVar27 & 8) != 0) {
          auVar208 = vpmovzxwd_avx(auVar70);
          auVar208 = vpinsrb_avx(auVar208,(uint)auVar70[2],2);
          auVar55 = vpinsrb_avx(auVar208,(uint)*auVar55._8_8_,3);
          auVar70 = vpblendw_avx(auVar55,auVar70,0xc);
        }
        if ((uVar27 & 0x10) != 0) {
          auVar55 = vpshufb_avx(auVar70,___xmm_80800706808005048080030203020100);
          auVar55 = vpinsrb_avx(auVar55,(uint)*auVar162._0_8_,4);
          auVar55 = vpinsrb_avx(auVar55,(uint)auVar70[5],5);
          auVar70 = vpblendw_avx(auVar55,auVar70,8);
        }
        if ((uVar27 & 0x20) != 0) {
          auVar55 = vpshufb_avx(auVar70,___xmm_80800706808005048080030403020100);
          auVar55 = vpinsrb_avx(auVar55,(uint)*auVar162._8_8_,5);
          auVar70 = vpblendw_avx(auVar55,auVar70,8);
        }
        if ((uVar27 & 0x40) != 0) {
          auVar55 = vpshufb_avx(auVar70,___xmm_80800706808005048080050403020100);
          auVar55 = vpinsrb_avx(auVar55,(uint)*auVar196._0_8_,6);
          auVar70 = vpinsrb_avx(auVar55,(uint)auVar70[7],7);
        }
        if (cVar49 < '\0') {
          auVar55 = vpshufb_avx(auVar70,___xmm_80800706808005048006050403020100);
          auVar70 = vpinsrb_avx(auVar55,(uint)*auVar196._8_8_,7);
        }
        auVar208 = vpmovzxbd_avx(auVar70);
        auVar55 = vpshufd_avx(auVar70,0x55);
        auVar298 = vpmovzxbd_avx(auVar55);
        auVar304 = vpshufd_avx(ZEXT416(uVar28),0);
        auVar162 = vpcmpgtd_avx(auVar298,auVar304);
        auVar55 = vpcmpeqd_avx(auVar196,auVar196);
        auVar196 = auVar162 ^ auVar55;
        auVar70 = vpcmpgtd_avx(auVar208,auVar304);
        auVar55 = auVar70 ^ auVar55;
        auVar175._16_16_ = auVar196;
        auVar175._0_16_ = auVar55;
        auVar89._16_16_ = auVar162;
        auVar89._0_16_ = auVar70;
        auVar64 = auVar63 & ~auVar89;
        local_520 = auVar55._0_4_;
        uStack_51c = auVar55._4_4_;
        uStack_518 = auVar55._8_4_;
        uStack_514 = auVar55._12_4_;
        uStack_510 = auVar196._0_4_;
        uStack_50c = auVar196._4_4_;
        uStack_508 = auVar196._8_4_;
        uStack_504 = auVar196._12_4_;
        auVar56 = auVar174;
        if ((((((((SUB321(auVar64 >> 0x1f,0) & 1) != 0 || (SUB321(auVar64 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar64 >> 0x5f,0) & 1) != 0) || SUB321(auVar64 >> 0x7f,0) != '\0') ||
              (SUB321(auVar64 >> 0x9f,0) & 1) != 0) || SUB321(auVar64 >> 0xbf,0) != '\0') ||
            (SUB321(auVar64 >> 0xdf,0) & 1) != 0) || auVar64[0x1f] < '\0') {
          auVar55 = vpcmpgtd_avx(auVar298,auVar304);
          auVar162 = vpcmpgtd_avx(auVar208,auVar304);
          auVar90._16_16_ = auVar55;
          auVar90._0_16_ = auVar162;
          auVar56 = vblendvps_avx(auVar294,auVar174,auVar90);
          auVar105 = vpcmpgtd_avx(auVar8,auVar105);
          auVar101 = vpcmpgtd_avx(auVar9,auVar101);
          uVar28 = auVar101._0_4_ & local_520;
          uVar32 = auVar101._4_4_ & uStack_51c;
          uVar26 = auVar101._8_4_ & uStack_518;
          uVar158 = auVar101._12_4_ & uStack_514;
          uVar29 = auVar105._0_4_ & uStack_510;
          uVar140 = auVar105._4_4_ & uStack_50c;
          uVar180 = auVar105._8_4_ & uStack_508;
          uVar182 = auVar105._12_4_ & uStack_504;
          auVar127._0_4_ = uVar28 & auVar63._0_4_;
          auVar127._4_4_ = uVar32 & auVar63._4_4_;
          auVar127._8_4_ = uVar26 & auVar63._8_4_;
          auVar127._12_4_ = uVar158 & auVar63._12_4_;
          auVar127._16_4_ = uVar29 & auVar63._16_4_;
          auVar127._20_4_ = uVar140 & auVar63._20_4_;
          auVar127._24_4_ = uVar180 & auVar63._24_4_;
          auVar127._28_4_ = uVar182 & auVar63._28_4_;
          iVar43 = vmovmskps_avx(auVar127);
          if (iVar43 != 0) {
            auVar105 = vpcmpeqd_avx(auVar101,auVar101);
            do {
              auVar70 = vpsubd_avx(auVar174._0_16_,auVar105);
              auVar55 = vpmovsxdq_avx(auVar70);
              auVar101 = vpshufd_avx(auVar70,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar160,auVar101);
              auVar55 = vpaddq_avx(auVar299,auVar55);
              uVar186 = vmovmskps_avx(auVar127);
              auVar162 = auVar55;
              if ((uVar186 & 1) != 0) {
                auVar162 = ZEXT116(*auVar55._0_8_);
              }
              if ((uVar186 & 2) != 0) {
                auVar55 = vpinsrb_avx(auVar162,(uint)*auVar55._8_8_,1);
                auVar162 = vpblendw_avx(auVar55,auVar162,0xe);
              }
              if ((uVar186 & 4) != 0) {
                auVar55 = vpmovzxwd_avx(auVar162);
                auVar55 = vpinsrb_avx(auVar55,(uint)*auVar101._0_8_,2);
                auVar55 = vpinsrb_avx(auVar55,(uint)auVar162[3],3);
                auVar162 = vpblendw_avx(auVar55,auVar162,0xc);
              }
              if ((uVar186 & 8) != 0) {
                auVar55 = vpmovzxwd_avx(auVar162);
                auVar55 = vpinsrb_avx(auVar55,(uint)auVar162[2],2);
                auVar101 = vpinsrb_avx(auVar55,(uint)*auVar101._8_8_,3);
                auVar162 = vpblendw_avx(auVar101,auVar162,0xc);
              }
              auVar196 = vpsubd_avx(auVar174._16_16_,auVar105);
              auVar55 = vpmovsxdq_avx(auVar196);
              auVar101 = vpshufd_avx(auVar196,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar101,auVar102);
              auVar55 = vpaddq_avx(auVar55,auVar213);
              if ((uVar186 & 0x10) != 0) {
                auVar310 = vpshufb_avx(auVar162,___xmm_80800706808005048080030203020100);
                auVar310 = vpinsrb_avx(auVar310,(uint)*auVar55._0_8_,4);
                auVar310 = vpinsrb_avx(auVar310,(uint)auVar162[5],5);
                auVar162 = vpblendw_avx(auVar310,auVar162,8);
              }
              if ((uVar186 & 0x20) != 0) {
                auVar310 = vpshufb_avx(auVar162,___xmm_80800706808005048080030403020100);
                auVar55 = vpinsrb_avx(auVar310,(uint)*auVar55._8_8_,5);
                auVar162 = vpblendw_avx(auVar55,auVar162,8);
              }
              if ((uVar186 & 0x40) != 0) {
                auVar55 = vpshufb_avx(auVar162,___xmm_80800706808005048080050403020100);
                auVar55 = vpinsrb_avx(auVar55,(uint)*auVar101._0_8_,6);
                auVar162 = vpinsrb_avx(auVar55,(uint)auVar162[7],7);
              }
              if ((char)uVar186 < '\0') {
                auVar55 = vpshufb_avx(auVar162,___xmm_80800706808005048006050403020100);
                auVar162 = vpinsrb_avx(auVar55,(uint)*auVar101._8_8_,7);
              }
              auVar55 = vpmovzxbd_avx(auVar162);
              auVar101 = vpshufd_avx(auVar162,0x55);
              auVar101 = vpmovzxbd_avx(auVar101);
              auVar101 = vpcmpgtd_avx(auVar101,auVar304);
              auVar55 = vpcmpgtd_avx(auVar55,auVar304);
              auVar277._0_4_ = uVar28 & auVar55._0_4_;
              auVar277._4_4_ = uVar32 & auVar55._4_4_;
              auVar277._8_4_ = uVar26 & auVar55._8_4_;
              auVar277._12_4_ = uVar158 & auVar55._12_4_;
              auVar277._16_4_ = uVar29 & auVar101._0_4_;
              auVar277._20_4_ = uVar140 & auVar101._4_4_;
              auVar277._24_4_ = uVar180 & auVar101._8_4_;
              auVar277._28_4_ = uVar182 & auVar101._12_4_;
              uVar186 = 0;
              uVar189 = 0;
              uVar191 = 0;
              uVar193 = 0;
              uVar143 = 0;
              uVar146 = 0;
              uVar149 = 0;
              uVar152 = 0;
              auVar264._0_4_ = auVar277._0_4_ & auVar63._0_4_;
              auVar264._4_4_ = auVar277._4_4_ & auVar63._4_4_;
              auVar264._8_4_ = auVar277._8_4_ & auVar63._8_4_;
              auVar264._12_4_ = auVar277._12_4_ & auVar63._12_4_;
              auVar264._16_4_ = auVar277._16_4_ & auVar63._16_4_;
              auVar264._20_4_ = auVar277._20_4_ & auVar63._20_4_;
              auVar264._24_4_ = auVar277._24_4_ & auVar63._24_4_;
              auVar264._28_4_ = auVar277._28_4_ & auVar63._28_4_;
              uVar30 = vmovmskps_avx(auVar264);
              if ((char)iVar43 != (char)uVar30) {
                uVar152 = auVar277._0_4_ ^ uVar28;
                uVar186 = auVar277._4_4_ ^ uVar32;
                uVar189 = auVar277._8_4_ ^ uVar26;
                uVar191 = auVar277._12_4_ ^ uVar158;
                uVar193 = auVar277._16_4_ ^ uVar29;
                uVar143 = auVar277._20_4_ ^ uVar140;
                uVar146 = auVar277._24_4_ ^ uVar180;
                uVar149 = auVar277._28_4_ ^ uVar182;
              }
              auVar56 = vblendvps_avx(auVar56,auVar174,auVar277);
              auVar174._16_16_ = auVar196;
              auVar174._0_16_ = auVar70;
              auVar101 = vpcmpgtd_avx(auVar8,auVar196);
              auVar55 = vpcmpgtd_avx(auVar9,auVar70);
              uVar28 = auVar55._0_4_ & uVar152;
              uVar32 = auVar55._4_4_ & uVar186;
              uVar26 = auVar55._8_4_ & uVar189;
              uVar158 = auVar55._12_4_ & uVar191;
              uVar29 = auVar101._0_4_ & uVar193;
              uVar140 = auVar101._4_4_ & uVar143;
              uVar180 = auVar101._8_4_ & uVar146;
              uVar182 = auVar101._12_4_ & uVar149;
              auVar127._0_4_ = uVar28 & auVar63._0_4_;
              auVar127._4_4_ = uVar32 & auVar63._4_4_;
              auVar127._8_4_ = uVar26 & auVar63._8_4_;
              auVar127._12_4_ = uVar158 & auVar63._12_4_;
              auVar127._16_4_ = uVar29 & auVar63._16_4_;
              auVar127._20_4_ = uVar140 & auVar63._20_4_;
              auVar127._24_4_ = uVar180 & auVar63._24_4_;
              auVar127._28_4_ = uVar182 & auVar63._28_4_;
              iVar43 = vmovmskps_avx(auVar127);
            } while (iVar43 != 0);
          }
        }
        auVar105 = vpcmpgtd_avx(auVar298,auVar304);
        auVar101 = vpcmpgtd_avx(auVar208,auVar304);
        auVar92._16_16_ = auVar105;
        auVar92._0_16_ = auVar101;
        auVar92 = auVar92 & auVar63;
        if ((((((((SUB321(auVar92 >> 0x1f,0) & 1) != 0 || (SUB321(auVar92 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar92 >> 0x5f,0) & 1) != 0) || SUB321(auVar92 >> 0x7f,0) != '\0') ||
              (SUB321(auVar92 >> 0x9f,0) & 1) != 0) || SUB321(auVar92 >> 0xbf,0) != '\0') ||
            (SUB321(auVar92 >> 0xdf,0) & 1) != 0) || auVar92[0x1f] < '\0') {
          auVar56 = vblendvps_avx(ZEXT832(0) << 0x20,auVar56,auVar175);
          auVar104._4_4_ = __real_00000001;
          auVar104._0_4_ = __real_00000001;
          auVar104._8_4_ = __real_00000001;
          auVar104._12_4_ = __real_00000001;
          auVar105 = vpcmpgtd_avx(auVar230,auVar104);
          auVar101 = vpcmpgtd_avx(auVar231,auVar104);
          uVar28 = ~local_520 & auVar101._0_4_;
          uVar32 = ~uStack_51c & auVar101._4_4_;
          uVar26 = ~uStack_518 & auVar101._8_4_;
          uVar158 = ~uStack_514 & auVar101._12_4_;
          uVar29 = ~uStack_510 & auVar105._0_4_;
          uVar140 = ~uStack_50c & auVar105._4_4_;
          uVar180 = ~uStack_508 & auVar105._8_4_;
          uVar182 = ~uStack_504 & auVar105._12_4_;
          auVar129._0_4_ = uVar28 & auVar63._0_4_;
          auVar129._4_4_ = uVar32 & auVar63._4_4_;
          auVar129._8_4_ = uVar26 & auVar63._8_4_;
          auVar129._12_4_ = uVar158 & auVar63._12_4_;
          auVar129._16_4_ = uVar29 & auVar63._16_4_;
          auVar129._20_4_ = uVar140 & auVar63._20_4_;
          auVar129._24_4_ = uVar180 & auVar63._24_4_;
          auVar129._28_4_ = uVar182 & auVar63._28_4_;
          iVar43 = vmovmskps_avx(auVar129);
          if (iVar43 != 0) {
            auVar105 = vpcmpeqd_avx(auVar101,auVar101);
            auVar308._4_4_ = __real_00000002;
            auVar308._0_4_ = __real_00000002;
            auVar308._8_4_ = __real_00000002;
            auVar308._12_4_ = __real_00000002;
            do {
              auVar16._0_4_ = auVar306._0_4_ + auVar105._0_4_;
              auVar16._4_4_ = auVar306._4_4_ + auVar105._4_4_;
              auVar16._8_4_ = auVar306._8_4_ + auVar105._8_4_;
              auVar16._12_4_ = auVar306._12_4_ + auVar105._12_4_;
              auVar230 = vpmovsxdq_avx(auVar16);
              auVar101 = vpshufd_avx(auVar16,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar160,auVar101);
              auVar230 = vpaddq_avx(auVar299,auVar230);
              uVar186 = vmovmskps_avx(auVar129);
              auVar231 = auVar230;
              if ((uVar186 & 1) != 0) {
                auVar231 = ZEXT116(*auVar230._0_8_);
              }
              if ((uVar186 & 2) != 0) {
                auVar230 = vpinsrb_avx(auVar231,(uint)*auVar230._8_8_,1);
                auVar231 = vpblendw_avx(auVar230,auVar231,0xe);
              }
              if ((uVar186 & 4) != 0) {
                auVar230 = vpmovzxwd_avx(auVar231);
                auVar230 = vpinsrb_avx(auVar230,(uint)*auVar101._0_8_,2);
                auVar230 = vpinsrb_avx(auVar230,(uint)auVar231[3],3);
                auVar231 = vpblendw_avx(auVar230,auVar231,0xc);
              }
              if ((uVar186 & 8) != 0) {
                auVar230 = vpmovzxwd_avx(auVar231);
                auVar230 = vpinsrb_avx(auVar230,(uint)auVar231[2],2);
                auVar101 = vpinsrb_avx(auVar230,(uint)*auVar101._8_8_,3);
                auVar231 = vpblendw_avx(auVar101,auVar231,0xc);
              }
              auVar17._0_4_ = auVar306._16_4_ + auVar105._0_4_;
              auVar17._4_4_ = auVar306._20_4_ + auVar105._4_4_;
              auVar17._8_4_ = auVar306._24_4_ + auVar105._8_4_;
              auVar17._12_4_ = auVar306._28_4_ + auVar105._12_4_;
              auVar230 = vpmovsxdq_avx(auVar17);
              auVar101 = vpshufd_avx(auVar17,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar101,auVar102);
              auVar230 = vpaddq_avx(auVar230,auVar213);
              if ((uVar186 & 0x10) != 0) {
                auVar55 = vpshufb_avx(auVar231,___xmm_80800706808005048080030203020100);
                auVar55 = vpinsrb_avx(auVar55,(uint)*auVar230._0_8_,4);
                auVar55 = vpinsrb_avx(auVar55,(uint)auVar231[5],5);
                auVar231 = vpblendw_avx(auVar55,auVar231,8);
              }
              if ((uVar186 & 0x20) != 0) {
                auVar55 = vpshufb_avx(auVar231,___xmm_80800706808005048080030403020100);
                auVar230 = vpinsrb_avx(auVar55,(uint)*auVar230._8_8_,5);
                auVar231 = vpblendw_avx(auVar230,auVar231,8);
              }
              if ((uVar186 & 0x40) != 0) {
                auVar230 = vpshufb_avx(auVar231,___xmm_80800706808005048080050403020100);
                auVar230 = vpinsrb_avx(auVar230,(uint)*auVar101._0_8_,6);
                auVar231 = vpinsrb_avx(auVar230,(uint)auVar231[7],7);
              }
              if ((char)uVar186 < '\0') {
                auVar230 = vpshufb_avx(auVar231,___xmm_80800706808005048006050403020100);
                auVar231 = vpinsrb_avx(auVar230,(uint)*auVar101._8_8_,7);
              }
              auVar230 = vpmovzxbd_avx(auVar231);
              auVar101 = vpshufd_avx(auVar231,0x55);
              auVar101 = vpmovzxbd_avx(auVar101);
              auVar101 = vpcmpgtd_avx(auVar101,auVar304);
              auVar230 = vpcmpgtd_avx(auVar230,auVar304);
              auVar279._0_4_ = ~auVar230._0_4_ & uVar28;
              auVar279._4_4_ = ~auVar230._4_4_ & uVar32;
              auVar279._8_4_ = ~auVar230._8_4_ & uVar26;
              auVar279._12_4_ = ~auVar230._12_4_ & uVar158;
              auVar279._16_4_ = ~auVar101._0_4_ & uVar29;
              auVar279._20_4_ = ~auVar101._4_4_ & uVar140;
              auVar279._24_4_ = ~auVar101._8_4_ & uVar180;
              auVar279._28_4_ = ~auVar101._12_4_ & uVar182;
              uVar186 = 0;
              uVar189 = 0;
              uVar191 = 0;
              uVar193 = 0;
              uVar143 = 0;
              uVar146 = 0;
              uVar149 = 0;
              uVar152 = 0;
              auVar266._0_4_ = auVar279._0_4_ & auVar63._0_4_;
              auVar266._4_4_ = auVar279._4_4_ & auVar63._4_4_;
              auVar266._8_4_ = auVar279._8_4_ & auVar63._8_4_;
              auVar266._12_4_ = auVar279._12_4_ & auVar63._12_4_;
              auVar266._16_4_ = auVar279._16_4_ & auVar63._16_4_;
              auVar266._20_4_ = auVar279._20_4_ & auVar63._20_4_;
              auVar266._24_4_ = auVar279._24_4_ & auVar63._24_4_;
              auVar266._28_4_ = auVar279._28_4_ & auVar63._28_4_;
              uVar30 = vmovmskps_avx(auVar266);
              if ((char)iVar43 != (char)uVar30) {
                uVar152 = auVar279._0_4_ ^ uVar28;
                uVar186 = auVar279._4_4_ ^ uVar32;
                uVar189 = auVar279._8_4_ ^ uVar26;
                uVar191 = auVar279._12_4_ ^ uVar158;
                uVar193 = auVar279._16_4_ ^ uVar29;
                uVar143 = auVar279._20_4_ ^ uVar140;
                uVar146 = auVar279._24_4_ ^ uVar180;
                uVar149 = auVar279._28_4_ ^ uVar182;
              }
              auVar177._16_16_ = auVar17;
              auVar177._0_16_ = auVar16;
              auVar56 = vblendvps_avx(auVar56,auVar177,auVar279);
              auVar101 = vpcmpgtd_avx(auVar306._0_16_,auVar308);
              auVar230 = vpcmpgtd_avx(auVar306._16_16_,auVar308);
              uVar28 = auVar101._0_4_ & uVar152;
              uVar32 = auVar101._4_4_ & uVar186;
              uVar26 = auVar101._8_4_ & uVar189;
              uVar158 = auVar101._12_4_ & uVar191;
              uVar29 = auVar230._0_4_ & uVar193;
              uVar140 = auVar230._4_4_ & uVar143;
              uVar180 = auVar230._8_4_ & uVar146;
              uVar182 = auVar230._12_4_ & uVar149;
              auVar129._0_4_ = uVar28 & auVar63._0_4_;
              auVar129._4_4_ = uVar32 & auVar63._4_4_;
              auVar129._8_4_ = uVar26 & auVar63._8_4_;
              auVar129._12_4_ = uVar158 & auVar63._12_4_;
              auVar129._16_4_ = uVar29 & auVar63._16_4_;
              auVar129._20_4_ = uVar140 & auVar63._20_4_;
              auVar129._24_4_ = uVar180 & auVar63._24_4_;
              auVar129._28_4_ = uVar182 & auVar63._28_4_;
              iVar43 = vmovmskps_avx(auVar129);
              auVar306 = ZEXT3264(auVar177);
            } while (iVar43 != 0);
          }
        }
        auVar214 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar56,auVar63);
        auVar231 = auVar214._0_16_;
        auVar101 = vpmovsxdq_avx(auVar231);
        auVar105 = vshufpd_avx(auVar231,auVar231,3);
        auVar105 = vpmovsxdq_avx(auVar105);
        auVar55 = auVar214._16_16_;
        auVar105 = vpaddq_avx(auVar160,auVar105);
        auVar101 = vpaddq_avx(auVar299,auVar101);
        auVar230 = auVar101;
        if ((uVar27 & 1) != 0) {
          auVar230 = ZEXT116(*auVar101._0_8_);
        }
        auVar162 = vpmovsxdq_avx(auVar55);
        auVar70 = vshufpd_avx(auVar55,auVar55,3);
        if ((uVar27 & 2) != 0) {
          auVar101 = vpinsrb_avx(auVar230,(uint)*auVar101._8_8_,1);
          auVar230 = vpblendw_avx(auVar101,auVar230,0xe);
        }
        auVar70 = vpmovsxdq_avx(auVar70);
        auVar101 = vpaddq_avx(auVar162,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar162 = vpaddq_avx(auVar70,auVar102);
          if ((uVar27 & 8) == 0) goto LAB_140c2e2c5;
LAB_140c30f48:
          auVar70 = vpmovzxwd_avx(auVar230);
          auVar70 = vpinsrb_avx(auVar70,(uint)auVar230[2],2);
          auVar105 = vpinsrb_avx(auVar70,(uint)*auVar105._8_8_,3);
          auVar230 = vpblendw_avx(auVar105,auVar230,0xc);
          auVar134._16_16_ = auVar162;
          auVar134._0_16_ = auVar101;
          if ((uVar27 & 0x10) != 0) goto LAB_140c30f7a;
LAB_140c2e2d4:
          if ((uVar27 & 0x20) == 0) goto LAB_140c2e2dd;
LAB_140c30fa9:
          auVar105 = vpshufb_avx(auVar230,___xmm_80800706808005048080030403020100);
          auVar105 = vpinsrb_avx(auVar105,(uint)*auVar134._8_8_,5);
          auVar230 = vpblendw_avx(auVar105,auVar230,8);
          if ((uVar27 & 0x40) != 0) goto LAB_140c30fcd;
LAB_140c2e2e6:
          auVar101 = auVar134._0_16_;
        }
        else {
          auVar162 = vpmovzxwd_avx(auVar230);
          auVar162 = vpinsrb_avx(auVar162,(uint)*auVar105._0_8_,2);
          auVar162 = vpinsrb_avx(auVar162,(uint)auVar230[3],3);
          auVar230 = vpblendw_avx(auVar162,auVar230,0xc);
          auVar162 = vpaddq_avx(auVar70,auVar102);
          if ((uVar27 & 8) != 0) goto LAB_140c30f48;
LAB_140c2e2c5:
          auVar134._16_16_ = auVar162;
          auVar134._0_16_ = auVar101;
          if ((uVar27 & 0x10) == 0) goto LAB_140c2e2d4;
LAB_140c30f7a:
          auVar105 = vpshufb_avx(auVar230,___xmm_80800706808005048080030203020100);
          auVar105 = vpinsrb_avx(auVar105,(uint)*auVar134._0_8_,4);
          auVar105 = vpinsrb_avx(auVar105,(uint)auVar230[5],5);
          auVar230 = vpblendw_avx(auVar105,auVar230,8);
          if ((uVar27 & 0x20) != 0) goto LAB_140c30fa9;
LAB_140c2e2dd:
          if ((uVar27 & 0x40) == 0) goto LAB_140c2e2e6;
LAB_140c30fcd:
          auVar101 = auVar134._0_16_;
          auVar105 = vpshufb_avx(auVar230,___xmm_80800706808005048080050403020100);
          auVar105 = vpinsrb_avx(auVar105,(uint)*auVar134._16_8_,6);
          auVar230 = vpinsrb_avx(auVar105,(uint)auVar230[7],7);
        }
        if (cVar49 < '\0') {
          auVar101 = auVar134._16_16_;
          auVar105 = vpshufb_avx(auVar230,___xmm_80800706808005048006050403020100);
          auVar230 = vpinsrb_avx(auVar105,(uint)*auVar134._24_8_,7);
        }
        auVar105 = vpcmpeqd_avx(auVar101,auVar101);
        auVar101 = vpsubd_avx(auVar55,auVar105);
        auVar105 = vpsubd_avx(auVar231,auVar105);
        auVar135._16_16_ = auVar101;
        auVar135._0_16_ = auVar105;
        auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar135,auVar63);
        auVar212 = vpcmpgtd_avx(auVar212,auVar56._16_16_);
        auVar105 = vpcmpgtd_avx(auVar54,auVar56._0_16_);
        auVar136._16_16_ = auVar212;
        auVar136._0_16_ = auVar105;
        auVar64 = auVar63 & ~auVar136;
        if ((((((((SUB321(auVar64 >> 0x1f,0) & 1) != 0 || (SUB321(auVar64 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar64 >> 0x5f,0) & 1) != 0) || SUB321(auVar64 >> 0x7f,0) != '\0') ||
              (SUB321(auVar64 >> 0x9f,0) & 1) != 0) || SUB321(auVar64 >> 0xbf,0) != '\0') ||
            (SUB321(auVar64 >> 0xdf,0) & 1) != 0) || auVar64[0x1f] < '\0') {
          auVar66._0_4_ = ~auVar105._0_4_ & auVar63._0_4_;
          auVar66._4_4_ = ~auVar105._4_4_ & auVar63._4_4_;
          auVar66._8_4_ = ~auVar105._8_4_ & auVar63._8_4_;
          auVar66._12_4_ = ~auVar105._12_4_ & auVar63._12_4_;
          auVar66._16_4_ = ~auVar212._0_4_ & auVar63._16_4_;
          auVar66._20_4_ = ~auVar212._4_4_ & auVar63._20_4_;
          auVar66._24_4_ = ~auVar212._8_4_ & auVar63._24_4_;
          auVar66._28_4_ = ~auVar212._12_4_ & auVar63._28_4_;
          auVar56 = vblendvps_avx(auVar56,auVar294,auVar66);
        }
        auVar105 = vpmovsxdq_avx(auVar56._0_16_);
        auVar212 = vpshufd_avx(auVar56._0_16_,0xee);
        auVar212 = vpmovsxdq_avx(auVar212);
        auVar212 = vpaddq_avx(auVar160,auVar212);
        auVar105 = vpaddq_avx(auVar299,auVar105);
        auVar101 = auVar105;
        if ((uVar27 & 1) != 0) {
          auVar101 = ZEXT116(*auVar105._0_8_);
        }
        auVar231 = vpmovsxdq_avx(auVar56._16_16_);
        auVar54 = vpshufd_avx(auVar56._16_16_,0xee);
        if ((uVar27 & 2) != 0) {
          auVar105 = vpinsrb_avx(auVar101,(uint)*auVar105._8_8_,1);
          auVar101 = vpblendw_avx(auVar105,auVar101,0xe);
        }
        auVar54 = vpmovsxdq_avx(auVar54);
        auVar105 = vpaddq_avx(auVar231,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar231 = vpaddq_avx(auVar54,auVar102);
          if ((uVar27 & 8) == 0) goto LAB_140c2e3e1;
LAB_140c31061:
          auVar54 = vpmovzxwd_avx(auVar101);
          auVar54 = vpinsrb_avx(auVar54,(uint)auVar101[2],2);
          auVar212 = vpinsrb_avx(auVar54,(uint)*auVar212._8_8_,3);
          auVar101 = vpblendw_avx(auVar212,auVar101,0xc);
          auVar137._16_16_ = auVar231;
          auVar137._0_16_ = auVar105;
          if ((uVar27 & 0x10) != 0) goto LAB_140c31093;
LAB_140c2e3f0:
          if ((uVar27 & 0x20) == 0) goto LAB_140c2e3f9;
LAB_140c310c2:
          auVar212 = vpshufb_avx(auVar101,___xmm_80800706808005048080030403020100);
          auVar212 = vpinsrb_avx(auVar212,(uint)*auVar137._8_8_,5);
          auVar101 = vpblendw_avx(auVar212,auVar101,8);
          auVar212 = vpmovzxbd_avx(auVar230);
          auVar105 = vpshufd_avx(auVar230,0x55);
          if ((uVar27 & 0x40) != 0) goto LAB_140c310f0;
LAB_140c2e40c:
          auVar105 = vpmovzxbd_avx(auVar105);
        }
        else {
          auVar231 = vpmovzxwd_avx(auVar101);
          auVar231 = vpinsrb_avx(auVar231,(uint)*auVar212._0_8_,2);
          auVar231 = vpinsrb_avx(auVar231,(uint)auVar101[3],3);
          auVar101 = vpblendw_avx(auVar231,auVar101,0xc);
          auVar231 = vpaddq_avx(auVar54,auVar102);
          if ((uVar27 & 8) != 0) goto LAB_140c31061;
LAB_140c2e3e1:
          auVar137._16_16_ = auVar231;
          auVar137._0_16_ = auVar105;
          if ((uVar27 & 0x10) == 0) goto LAB_140c2e3f0;
LAB_140c31093:
          auVar212 = vpshufb_avx(auVar101,___xmm_80800706808005048080030203020100);
          auVar212 = vpinsrb_avx(auVar212,(uint)*auVar137._0_8_,4);
          auVar212 = vpinsrb_avx(auVar212,(uint)auVar101[5],5);
          auVar101 = vpblendw_avx(auVar212,auVar101,8);
          if ((uVar27 & 0x20) != 0) goto LAB_140c310c2;
LAB_140c2e3f9:
          auVar212 = vpmovzxbd_avx(auVar230);
          auVar105 = vpshufd_avx(auVar230,0x55);
          if ((uVar27 & 0x40) == 0) goto LAB_140c2e40c;
LAB_140c310f0:
          auVar230 = vpshufb_avx(auVar101,___xmm_80800706808005048080050403020100);
          auVar230 = vpinsrb_avx(auVar230,(uint)*auVar137._16_8_,6);
          auVar101 = vpinsrb_avx(auVar230,(uint)auVar101[7],7);
          auVar105 = vpmovzxbd_avx(auVar105);
        }
        if (cVar49 < '\0') {
          auVar101 = vpshufb_avx(auVar101,___xmm_80800706808005048006050403020100);
          auVar101 = vpinsrb_avx(auVar101,(uint)*auVar137._24_8_,7);
        }
        auVar93._16_16_ = auVar105;
        auVar93._0_16_ = auVar212;
        auVar212 = vpmovzxbd_avx(auVar101);
        auVar105 = vpshufd_avx(auVar101,0x55);
        auVar105 = vpmovzxbd_avx(auVar105);
        auVar64 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      else {
        auVar10._4_4_ = auVar230._4_4_ * 2;
        auVar10._0_4_ = auVar230._0_4_ * 2;
        auVar10._8_4_ = auVar230._8_4_ * 2;
        auVar10._12_4_ = auVar230._12_4_ * 2;
        auVar11._4_4_ = auVar231._4_4_ * 2;
        auVar11._0_4_ = auVar231._0_4_ * 2;
        auVar11._8_4_ = auVar231._8_4_ * 2;
        auVar11._12_4_ = auVar231._12_4_ * 2;
        auVar70 = vpmovsxdq_avx(auVar11);
        auVar162 = vpshufd_avx(auVar11,0xee);
        auVar162 = vpmovsxdq_avx(auVar162);
        auVar162 = vpaddq_avx(auVar160,auVar162);
        auVar70 = vpaddq_avx(auVar299,auVar70);
        auVar196 = auVar162;
        if ((uVar27 & 1) != 0) {
          auVar196 = ZEXT216(*auVar70._0_8_);
        }
        auVar208 = vpmovsxdq_avx(auVar10);
        auVar298 = vpshufd_avx(auVar10,0xee);
        if ((uVar27 & 2) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar70._8_8_,1);
        }
        auVar298 = vpmovsxdq_avx(auVar298);
        auVar70 = vpaddq_avx(auVar208,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar208 = vpaddq_avx(auVar298,auVar102);
        }
        else {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar162._0_8_,2);
          auVar208 = vpaddq_avx(auVar298,auVar102);
        }
        if ((uVar27 & 8) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar162._8_8_,3);
        }
        if ((uVar27 & 0x10) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar70._0_8_,4);
        }
        if ((uVar27 & 0x20) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar70._8_8_,5);
        }
        if ((uVar27 & 0x40) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar208._0_8_,6);
        }
        if (cVar49 < '\0') {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar208._8_8_,7);
        }
        auVar310 = vpunpckhwd_avx(auVar196,(undefined1  [16])0x0);
        auVar298 = vpmovzxwd_avx(auVar196);
        auVar304 = vpshufd_avx(ZEXT416(uVar28),0);
        auVar70 = vpcmpgtd_avx(auVar310,auVar304);
        auVar162 = vpcmpeqd_avx(auVar208,auVar208);
        auVar208 = auVar70 ^ auVar162;
        auVar196 = vpcmpgtd_avx(auVar298,auVar304);
        auVar162 = auVar196 ^ auVar162;
        auVar173._16_16_ = auVar208;
        auVar173._0_16_ = auVar162;
        auVar86._16_16_ = auVar70;
        auVar86._0_16_ = auVar196;
        auVar64 = auVar63 & ~auVar86;
        local_520 = auVar162._0_4_;
        uStack_51c = auVar162._4_4_;
        uStack_518 = auVar162._8_4_;
        uStack_514 = auVar162._12_4_;
        uStack_510 = auVar208._0_4_;
        uStack_50c = auVar208._4_4_;
        uStack_508 = auVar208._8_4_;
        uStack_504 = auVar208._12_4_;
        auVar56 = auVar174;
        if ((((((((SUB321(auVar64 >> 0x1f,0) & 1) != 0 || (SUB321(auVar64 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar64 >> 0x5f,0) & 1) != 0) || SUB321(auVar64 >> 0x7f,0) != '\0') ||
              (SUB321(auVar64 >> 0x9f,0) & 1) != 0) || SUB321(auVar64 >> 0xbf,0) != '\0') ||
            (SUB321(auVar64 >> 0xdf,0) & 1) != 0) || auVar64[0x1f] < '\0') {
          auVar162 = vpcmpgtd_avx(auVar310,auVar304);
          auVar70 = vpcmpgtd_avx(auVar298,auVar304);
          auVar87._16_16_ = auVar162;
          auVar87._0_16_ = auVar70;
          auVar56 = vblendvps_avx(auVar294,auVar174,auVar87);
          auVar105 = vpcmpgtd_avx(auVar8,auVar105);
          auVar101 = vpcmpgtd_avx(auVar9,auVar101);
          uVar28 = auVar101._0_4_ & local_520;
          uVar32 = auVar101._4_4_ & uStack_51c;
          uVar26 = auVar101._8_4_ & uStack_518;
          uVar158 = auVar101._12_4_ & uStack_514;
          uVar29 = auVar105._0_4_ & uStack_510;
          uVar140 = auVar105._4_4_ & uStack_50c;
          uVar180 = auVar105._8_4_ & uStack_508;
          uVar182 = auVar105._12_4_ & uStack_504;
          auVar88._0_4_ = uVar28 & auVar63._0_4_;
          auVar88._4_4_ = uVar32 & auVar63._4_4_;
          auVar88._8_4_ = uVar26 & auVar63._8_4_;
          auVar88._12_4_ = uVar158 & auVar63._12_4_;
          auVar88._16_4_ = uVar29 & auVar63._16_4_;
          auVar88._20_4_ = uVar140 & auVar63._20_4_;
          auVar88._24_4_ = uVar180 & auVar63._24_4_;
          auVar88._28_4_ = uVar182 & auVar63._28_4_;
          iVar43 = vmovmskps_avx(auVar88);
          if (iVar43 != 0) {
            auVar105 = vpcmpeqd_avx(auVar55,auVar55);
            do {
              auVar70 = vpsubd_avx(auVar174._0_16_,auVar105);
              auVar12._4_4_ = auVar70._4_4_ * 2;
              auVar12._0_4_ = auVar70._0_4_ * 2;
              auVar12._8_4_ = auVar70._8_4_ * 2;
              auVar12._12_4_ = auVar70._12_4_ * 2;
              auVar55 = vpmovsxdq_avx(auVar12);
              auVar101 = vpshufd_avx(auVar12,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar160,auVar101);
              auVar55 = vpaddq_avx(auVar299,auVar55);
              uVar186 = vmovmskps_avx(auVar88);
              auVar162 = auVar101;
              if ((uVar186 & 1) != 0) {
                auVar162 = ZEXT216(*auVar55._0_8_);
              }
              if ((uVar186 & 2) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar55._8_8_,1);
              }
              if ((uVar186 & 4) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar101._0_8_,2);
              }
              if ((uVar186 & 8) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar101._8_8_,3);
              }
              auVar196 = vpsubd_avx(auVar174._16_16_,auVar105);
              auVar13._4_4_ = auVar196._4_4_ * 2;
              auVar13._0_4_ = auVar196._0_4_ * 2;
              auVar13._8_4_ = auVar196._8_4_ * 2;
              auVar13._12_4_ = auVar196._12_4_ * 2;
              auVar55 = vpmovsxdq_avx(auVar13);
              auVar101 = vpshufd_avx(auVar13,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar101,auVar102);
              auVar55 = vpaddq_avx(auVar55,auVar213);
              if ((uVar186 & 0x10) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar55._0_8_,4);
              }
              if ((uVar186 & 0x20) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar55._8_8_,5);
              }
              if ((uVar186 & 0x40) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar101._0_8_,6);
              }
              if ((char)uVar186 < '\0') {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar101._8_8_,7);
              }
              auVar101 = vpunpckhwd_avx(auVar162,___xmm_00000000000000000000000000000000);
              auVar55 = vpmovzxwd_avx(auVar162);
              auVar101 = vpcmpgtd_avx(auVar101,auVar304);
              auVar55 = vpcmpgtd_avx(auVar55,auVar304);
              auVar276._0_4_ = uVar28 & auVar55._0_4_;
              auVar276._4_4_ = uVar32 & auVar55._4_4_;
              auVar276._8_4_ = uVar26 & auVar55._8_4_;
              auVar276._12_4_ = uVar158 & auVar55._12_4_;
              auVar276._16_4_ = uVar29 & auVar101._0_4_;
              auVar276._20_4_ = uVar140 & auVar101._4_4_;
              auVar276._24_4_ = uVar180 & auVar101._8_4_;
              auVar276._28_4_ = uVar182 & auVar101._12_4_;
              uVar186 = 0;
              uVar189 = 0;
              uVar191 = 0;
              uVar193 = 0;
              uVar143 = 0;
              uVar146 = 0;
              uVar149 = 0;
              uVar152 = 0;
              auVar263._0_4_ = auVar276._0_4_ & auVar63._0_4_;
              auVar263._4_4_ = auVar276._4_4_ & auVar63._4_4_;
              auVar263._8_4_ = auVar276._8_4_ & auVar63._8_4_;
              auVar263._12_4_ = auVar276._12_4_ & auVar63._12_4_;
              auVar263._16_4_ = auVar276._16_4_ & auVar63._16_4_;
              auVar263._20_4_ = auVar276._20_4_ & auVar63._20_4_;
              auVar263._24_4_ = auVar276._24_4_ & auVar63._24_4_;
              auVar263._28_4_ = auVar276._28_4_ & auVar63._28_4_;
              uVar30 = vmovmskps_avx(auVar263);
              if ((char)iVar43 != (char)uVar30) {
                uVar152 = auVar276._0_4_ ^ uVar28;
                uVar186 = auVar276._4_4_ ^ uVar32;
                uVar189 = auVar276._8_4_ ^ uVar26;
                uVar191 = auVar276._12_4_ ^ uVar158;
                uVar193 = auVar276._16_4_ ^ uVar29;
                uVar143 = auVar276._20_4_ ^ uVar140;
                uVar146 = auVar276._24_4_ ^ uVar180;
                uVar149 = auVar276._28_4_ ^ uVar182;
              }
              auVar56 = vblendvps_avx(auVar56,auVar174,auVar276);
              auVar174._16_16_ = auVar196;
              auVar174._0_16_ = auVar70;
              auVar101 = vpcmpgtd_avx(auVar8,auVar196);
              auVar55 = vpcmpgtd_avx(auVar9,auVar70);
              uVar28 = auVar55._0_4_ & uVar152;
              uVar32 = auVar55._4_4_ & uVar186;
              uVar26 = auVar55._8_4_ & uVar189;
              uVar158 = auVar55._12_4_ & uVar191;
              uVar29 = auVar101._0_4_ & uVar193;
              uVar140 = auVar101._4_4_ & uVar143;
              uVar180 = auVar101._8_4_ & uVar146;
              uVar182 = auVar101._12_4_ & uVar149;
              auVar88._0_4_ = uVar28 & auVar63._0_4_;
              auVar88._4_4_ = uVar32 & auVar63._4_4_;
              auVar88._8_4_ = uVar26 & auVar63._8_4_;
              auVar88._12_4_ = uVar158 & auVar63._12_4_;
              auVar88._16_4_ = uVar29 & auVar63._16_4_;
              auVar88._20_4_ = uVar140 & auVar63._20_4_;
              auVar88._24_4_ = uVar180 & auVar63._24_4_;
              auVar88._28_4_ = uVar182 & auVar63._28_4_;
              iVar43 = vmovmskps_avx(auVar88);
            } while (iVar43 != 0);
          }
        }
        auVar105 = vpcmpgtd_avx(auVar310,auVar304);
        auVar101 = vpcmpgtd_avx(auVar298,auVar304);
        auVar91._16_16_ = auVar105;
        auVar91._0_16_ = auVar101;
        auVar91 = auVar91 & auVar63;
        if ((((((((SUB321(auVar91 >> 0x1f,0) & 1) != 0 || (SUB321(auVar91 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar91 >> 0x5f,0) & 1) != 0) || SUB321(auVar91 >> 0x7f,0) != '\0') ||
              (SUB321(auVar91 >> 0x9f,0) & 1) != 0) || SUB321(auVar91 >> 0xbf,0) != '\0') ||
            (SUB321(auVar91 >> 0xdf,0) & 1) != 0) || auVar91[0x1f] < '\0') {
          auVar56 = vblendvps_avx(ZEXT832(0) << 0x20,auVar56,auVar173);
          auVar103._4_4_ = __real_00000001;
          auVar103._0_4_ = __real_00000001;
          auVar103._8_4_ = __real_00000001;
          auVar103._12_4_ = __real_00000001;
          auVar105 = vpcmpgtd_avx(auVar230,auVar103);
          auVar101 = vpcmpgtd_avx(auVar231,auVar103);
          uVar28 = ~local_520 & auVar101._0_4_;
          uVar32 = ~uStack_51c & auVar101._4_4_;
          uVar26 = ~uStack_518 & auVar101._8_4_;
          uVar158 = ~uStack_514 & auVar101._12_4_;
          uVar29 = ~uStack_510 & auVar105._0_4_;
          uVar140 = ~uStack_50c & auVar105._4_4_;
          uVar180 = ~uStack_508 & auVar105._8_4_;
          uVar182 = ~uStack_504 & auVar105._12_4_;
          auVar128._0_4_ = uVar28 & auVar63._0_4_;
          auVar128._4_4_ = uVar32 & auVar63._4_4_;
          auVar128._8_4_ = uVar26 & auVar63._8_4_;
          auVar128._12_4_ = uVar158 & auVar63._12_4_;
          auVar128._16_4_ = uVar29 & auVar63._16_4_;
          auVar128._20_4_ = uVar140 & auVar63._20_4_;
          auVar128._24_4_ = uVar180 & auVar63._24_4_;
          auVar128._28_4_ = uVar182 & auVar63._28_4_;
          iVar43 = vmovmskps_avx(auVar128);
          if (iVar43 != 0) {
            auVar105 = vpcmpeqd_avx(auVar101,auVar101);
            auVar307._4_4_ = __real_00000002;
            auVar307._0_4_ = __real_00000002;
            auVar307._8_4_ = __real_00000002;
            auVar307._12_4_ = __real_00000002;
            do {
              auVar231 = auVar128._0_16_;
              iVar38 = auVar306._0_4_ + auVar105._0_4_;
              iVar44 = auVar306._4_4_ + auVar105._4_4_;
              auVar176._4_4_ = iVar44;
              auVar176._0_4_ = iVar38;
              iVar47 = auVar306._8_4_ + auVar105._8_4_;
              auVar176._8_4_ = iVar47;
              iVar51 = auVar306._12_4_ + auVar105._12_4_;
              auVar176._12_4_ = iVar51;
              auVar14._4_4_ = iVar44 * 2;
              auVar14._0_4_ = iVar38 * 2;
              auVar14._8_4_ = iVar47 * 2;
              auVar14._12_4_ = iVar51 * 2;
              auVar230 = vpmovsxdq_avx(auVar14);
              auVar101 = vpshufd_avx(auVar14,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar160,auVar101);
              auVar230 = vpaddq_avx(auVar299,auVar230);
              uVar186 = vmovmskps_avx(auVar128);
              if ((uVar186 & 1) != 0) {
                auVar231 = ZEXT216(*auVar230._0_8_);
              }
              if ((uVar186 & 2) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar230._8_8_,1);
              }
              if ((uVar186 & 4) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._0_8_,2);
              }
              if ((uVar186 & 8) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._8_8_,3);
              }
              iVar38 = auVar306._16_4_ + auVar105._0_4_;
              iVar44 = auVar306._20_4_ + auVar105._4_4_;
              auVar176._20_4_ = iVar44;
              auVar176._16_4_ = iVar38;
              iVar47 = auVar306._24_4_ + auVar105._8_4_;
              auVar176._24_4_ = iVar47;
              iVar51 = auVar306._28_4_ + auVar105._12_4_;
              auVar176._28_4_ = iVar51;
              auVar15._4_4_ = iVar44 * 2;
              auVar15._0_4_ = iVar38 * 2;
              auVar15._8_4_ = iVar47 * 2;
              auVar15._12_4_ = iVar51 * 2;
              auVar230 = vpmovsxdq_avx(auVar15);
              auVar101 = vpshufd_avx(auVar15,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar101,auVar102);
              auVar230 = vpaddq_avx(auVar230,auVar213);
              if ((uVar186 & 0x10) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar230._0_8_,4);
              }
              if ((uVar186 & 0x20) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar230._8_8_,5);
              }
              if ((uVar186 & 0x40) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._0_8_,6);
              }
              if ((char)uVar186 < '\0') {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._8_8_,7);
              }
              auVar101 = vpunpckhwd_avx(auVar231,___xmm_00000000000000000000000000000000);
              auVar230 = vpmovzxwd_avx(auVar231);
              auVar101 = vpcmpgtd_avx(auVar101,auVar304);
              auVar230 = vpcmpgtd_avx(auVar230,auVar304);
              auVar278._0_4_ = ~auVar230._0_4_ & uVar28;
              auVar278._4_4_ = ~auVar230._4_4_ & uVar32;
              auVar278._8_4_ = ~auVar230._8_4_ & uVar26;
              auVar278._12_4_ = ~auVar230._12_4_ & uVar158;
              auVar278._16_4_ = ~auVar101._0_4_ & uVar29;
              auVar278._20_4_ = ~auVar101._4_4_ & uVar140;
              auVar278._24_4_ = ~auVar101._8_4_ & uVar180;
              auVar278._28_4_ = ~auVar101._12_4_ & uVar182;
              uVar186 = 0;
              uVar189 = 0;
              uVar191 = 0;
              uVar193 = 0;
              uVar143 = 0;
              uVar146 = 0;
              uVar149 = 0;
              uVar152 = 0;
              auVar265._0_4_ = auVar278._0_4_ & auVar63._0_4_;
              auVar265._4_4_ = auVar278._4_4_ & auVar63._4_4_;
              auVar265._8_4_ = auVar278._8_4_ & auVar63._8_4_;
              auVar265._12_4_ = auVar278._12_4_ & auVar63._12_4_;
              auVar265._16_4_ = auVar278._16_4_ & auVar63._16_4_;
              auVar265._20_4_ = auVar278._20_4_ & auVar63._20_4_;
              auVar265._24_4_ = auVar278._24_4_ & auVar63._24_4_;
              auVar265._28_4_ = auVar278._28_4_ & auVar63._28_4_;
              uVar30 = vmovmskps_avx(auVar265);
              if ((char)iVar43 != (char)uVar30) {
                uVar152 = auVar278._0_4_ ^ uVar28;
                uVar186 = auVar278._4_4_ ^ uVar32;
                uVar189 = auVar278._8_4_ ^ uVar26;
                uVar191 = auVar278._12_4_ ^ uVar158;
                uVar193 = auVar278._16_4_ ^ uVar29;
                uVar143 = auVar278._20_4_ ^ uVar140;
                uVar146 = auVar278._24_4_ ^ uVar180;
                uVar149 = auVar278._28_4_ ^ uVar182;
              }
              auVar56 = vblendvps_avx(auVar56,auVar176,auVar278);
              auVar101 = vpcmpgtd_avx(auVar306._0_16_,auVar307);
              auVar230 = vpcmpgtd_avx(auVar306._16_16_,auVar307);
              uVar28 = auVar101._0_4_ & uVar152;
              uVar32 = auVar101._4_4_ & uVar186;
              uVar26 = auVar101._8_4_ & uVar189;
              uVar158 = auVar101._12_4_ & uVar191;
              uVar29 = auVar230._0_4_ & uVar193;
              uVar140 = auVar230._4_4_ & uVar143;
              uVar180 = auVar230._8_4_ & uVar146;
              uVar182 = auVar230._12_4_ & uVar149;
              auVar128._0_4_ = uVar28 & auVar63._0_4_;
              auVar128._4_4_ = uVar32 & auVar63._4_4_;
              auVar128._8_4_ = uVar26 & auVar63._8_4_;
              auVar128._12_4_ = uVar158 & auVar63._12_4_;
              auVar128._16_4_ = uVar29 & auVar63._16_4_;
              auVar128._20_4_ = uVar140 & auVar63._20_4_;
              auVar128._24_4_ = uVar180 & auVar63._24_4_;
              auVar128._28_4_ = uVar182 & auVar63._28_4_;
              iVar43 = vmovmskps_avx(auVar128);
              auVar306 = ZEXT3264(auVar176);
            } while (iVar43 != 0);
          }
        }
        auVar214 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar56,auVar63);
        auVar105._4_4_ = auVar214._20_4_ * 2;
        auVar105._0_4_ = auVar214._16_4_ * 2;
        auVar105._8_4_ = auVar214._24_4_ * 2;
        auVar105._12_4_ = auVar214._28_4_ * 2;
        auVar18._4_4_ = auVar214._4_4_ * 2;
        auVar18._0_4_ = auVar214._0_4_ * 2;
        auVar18._8_4_ = auVar214._8_4_ * 2;
        auVar18._12_4_ = auVar214._12_4_ * 2;
        auVar230 = vpmovsxdq_avx(auVar18);
        auVar101 = vpshufd_avx(auVar18,0xee);
        auVar101 = vpmovsxdq_avx(auVar101);
        auVar101 = vpaddq_avx(auVar160,auVar101);
        auVar230 = vpaddq_avx(auVar299,auVar230);
        auVar231 = auVar101;
        if ((uVar27 & 1) != 0) {
          auVar231 = ZEXT216(*auVar230._0_8_);
        }
        auVar55 = vpmovsxdq_avx(auVar105);
        auVar105 = vpshufd_avx(auVar105,0xee);
        if ((uVar27 & 2) != 0) {
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar230._8_8_,1);
        }
        auVar230 = vpmovsxdq_avx(auVar105);
        auVar105 = vpaddq_avx(auVar55,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar230 = vpaddq_avx(auVar230,auVar102);
          if ((uVar27 & 8) == 0) goto LAB_140c2e074;
LAB_140c30de6:
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._8_8_,3);
          auVar130._16_16_ = auVar230;
          auVar130._0_16_ = auVar105;
          if ((uVar27 & 0x10) != 0) goto LAB_140c30e07;
LAB_140c2e089:
          if ((uVar27 & 0x20) == 0) goto LAB_140c2e092;
LAB_140c30e1b:
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar130._8_8_,5);
          if ((uVar27 & 0x40) != 0) goto LAB_140c30e30;
LAB_140c2e09b:
          auVar105 = auVar130._0_16_;
        }
        else {
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._0_8_,2);
          auVar230 = vpaddq_avx(auVar230,auVar102);
          if ((uVar27 & 8) != 0) goto LAB_140c30de6;
LAB_140c2e074:
          auVar130._16_16_ = auVar230;
          auVar130._0_16_ = auVar105;
          if ((uVar27 & 0x10) == 0) goto LAB_140c2e089;
LAB_140c30e07:
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar130._0_8_,4);
          if ((uVar27 & 0x20) != 0) goto LAB_140c30e1b;
LAB_140c2e092:
          if ((uVar27 & 0x40) == 0) goto LAB_140c2e09b;
LAB_140c30e30:
          auVar105 = auVar130._0_16_;
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar130._16_8_,6);
        }
        if (cVar49 < '\0') {
          auVar105 = auVar130._16_16_;
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar130._24_8_,7);
        }
        auVar105 = vpcmpeqd_avx(auVar105,auVar105);
        auVar101 = vpsubd_avx(auVar214._16_16_,auVar105);
        auVar105 = vpsubd_avx(auVar214._0_16_,auVar105);
        auVar131._16_16_ = auVar101;
        auVar131._0_16_ = auVar105;
        auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar131,auVar63);
        auVar212 = vpcmpgtd_avx(auVar212,auVar56._16_16_);
        auVar105 = vpcmpgtd_avx(auVar54,auVar56._0_16_);
        auVar132._16_16_ = auVar212;
        auVar132._0_16_ = auVar105;
        auVar64 = auVar63 & ~auVar132;
        if ((((((((SUB321(auVar64 >> 0x1f,0) & 1) != 0 || (SUB321(auVar64 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar64 >> 0x5f,0) & 1) != 0) || SUB321(auVar64 >> 0x7f,0) != '\0') ||
              (SUB321(auVar64 >> 0x9f,0) & 1) != 0) || SUB321(auVar64 >> 0xbf,0) != '\0') ||
            (SUB321(auVar64 >> 0xdf,0) & 1) != 0) || auVar64[0x1f] < '\0') {
          auVar65._0_4_ = ~auVar105._0_4_ & auVar63._0_4_;
          auVar65._4_4_ = ~auVar105._4_4_ & auVar63._4_4_;
          auVar65._8_4_ = ~auVar105._8_4_ & auVar63._8_4_;
          auVar65._12_4_ = ~auVar105._12_4_ & auVar63._12_4_;
          auVar65._16_4_ = ~auVar212._0_4_ & auVar63._16_4_;
          auVar65._20_4_ = ~auVar212._4_4_ & auVar63._20_4_;
          auVar65._24_4_ = ~auVar212._8_4_ & auVar63._24_4_;
          auVar65._28_4_ = ~auVar212._12_4_ & auVar63._28_4_;
          auVar56 = vblendvps_avx(auVar56,auVar294,auVar65);
        }
        auVar212._4_4_ = auVar56._20_4_ * 2;
        auVar212._0_4_ = auVar56._16_4_ * 2;
        auVar212._8_4_ = auVar56._24_4_ * 2;
        auVar212._12_4_ = auVar56._28_4_ * 2;
        auVar19._4_4_ = auVar56._4_4_ * 2;
        auVar19._0_4_ = auVar56._0_4_ * 2;
        auVar19._8_4_ = auVar56._8_4_ * 2;
        auVar19._12_4_ = auVar56._12_4_ * 2;
        auVar101 = vpmovsxdq_avx(auVar19);
        auVar105 = vpshufd_avx(auVar19,0xee);
        auVar105 = vpmovsxdq_avx(auVar105);
        auVar105 = vpaddq_avx(auVar160,auVar105);
        auVar101 = vpaddq_avx(auVar299,auVar101);
        auVar230 = auVar105;
        if ((uVar27 & 1) != 0) {
          auVar230 = ZEXT216(*auVar101._0_8_);
        }
        auVar54 = vpmovsxdq_avx(auVar212);
        auVar212 = vpshufd_avx(auVar212,0xee);
        if ((uVar27 & 2) != 0) {
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar101._8_8_,1);
        }
        auVar101 = vpmovsxdq_avx(auVar212);
        auVar212 = vpaddq_avx(auVar54,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar101 = vpaddq_avx(auVar101,auVar102);
          if ((uVar27 & 8) == 0) goto LAB_140c2e18f;
LAB_140c30e86:
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar105._8_8_,3);
          auVar133._16_16_ = auVar101;
          auVar133._0_16_ = auVar212;
          if ((uVar27 & 0x10) != 0) goto LAB_140c30ea1;
LAB_140c2e19e:
          if ((uVar27 & 0x20) == 0) goto LAB_140c2e1a7;
LAB_140c30eb5:
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar133._8_8_,5);
          auVar212 = vpmovzxwd_avx(auVar231);
          if ((uVar27 & 0x40) != 0) goto LAB_140c30ed3;
LAB_140c2e1b9:
          auVar105 = vpunpckhwd_avx(auVar231,(undefined1  [16])0x0);
        }
        else {
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar105._0_8_,2);
          auVar101 = vpaddq_avx(auVar101,auVar102);
          if ((uVar27 & 8) != 0) goto LAB_140c30e86;
LAB_140c2e18f:
          auVar133._16_16_ = auVar101;
          auVar133._0_16_ = auVar212;
          if ((uVar27 & 0x10) == 0) goto LAB_140c2e19e;
LAB_140c30ea1:
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar133._0_8_,4);
          if ((uVar27 & 0x20) != 0) goto LAB_140c30eb5;
LAB_140c2e1a7:
          auVar212 = vpmovzxwd_avx(auVar231);
          if ((uVar27 & 0x40) == 0) goto LAB_140c2e1b9;
LAB_140c30ed3:
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar133._16_8_,6);
          auVar105 = vpunpckhwd_avx(auVar231,(undefined1  [16])0x0);
        }
        if (cVar49 < '\0') {
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar133._24_8_,7);
        }
        auVar93._16_16_ = auVar105;
        auVar93._0_16_ = auVar212;
        auVar105 = vpunpckhwd_avx(auVar230,(undefined1  [16])0x0);
        auVar212 = vpmovzxwd_avx(auVar230);
        auVar64 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      if (param_7 != '\x01') {
        auVar101 = vpsubd_avx(auVar212,auVar93._0_16_);
        auVar212 = vpsubd_avx(auVar105,auVar93._16_16_);
        auVar197._4_4_ = __real_00000001;
        auVar197._0_4_ = __real_00000001;
        auVar197._8_4_ = __real_00000001;
        auVar197._12_4_ = __real_00000001;
        auVar212 = vpmaxsd_avx(auVar212,auVar197);
        auVar105 = vpmaxsd_avx(auVar101,auVar197);
        auVar67._16_16_ = auVar212;
        auVar67._0_16_ = auVar105;
        auVar212 = vpermilps_avx(ZEXT416((uint)param_6),0);
        auVar178._16_16_ = auVar212;
        auVar178._0_16_ = auVar212;
        auVar64 = vcvtdq2ps_avx(auVar93);
        auVar290 = vsubps_avx(auVar178,auVar64);
        auVar64 = vcvtdq2ps_avx(auVar67);
        auVar64 = vdivps_avx(auVar290,auVar64);
      }
      auVar212 = auVar214._0_16_;
      auVar64 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar64,auVar202);
      auVar105 = auVar214._16_16_;
    }
    else {
      auVar64 = ZEXT832(0) << 0x20;
      auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar294,auVar63);
      auVar212 = auVar56._0_16_;
      auVar105 = auVar56._16_16_;
    }
  }
  if (param_8 < 6) {
    auVar101 = vpmulld_avx(auVar212,auVar297);
    auVar105 = vpmulld_avx(auVar105,auVar297);
    auVar212 = vpmovsxdq_avx(auVar105);
    auVar105 = vpshufd_avx(auVar105,0xee);
    vpmovsxdq_avx(auVar105);
    auVar105 = vpmovsxdq_avx(auVar101);
    auVar101 = vpshufd_avx(auVar101,0xee);
    vpmovsxdq_avx(auVar101);
                    /* WARNING: Could not recover jumptable at 0x000140c2d304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6c830 + *(int *)(&DAT_151c6c830 + uVar36 * 4)))
              (&DAT_151c6c830,&DAT_151c6c830 + *(int *)(&DAT_151c6c830 + uVar36 * 4),auVar105._0_8_,
               auVar212._0_8_);
    return;
  }
  auVar73._0_12_ = ZEXT812(0);
  auVar73._12_4_ = 0;
  _local_5c0 = vmaskmovps_avx(auVar236,ZEXT1632(auVar73));
  _local_5a0 = vmaskmovps_avx(auVar236,ZEXT1632(auVar73));
  _local_580 = vmaskmovps_avx(auVar236,ZEXT1632(auVar73));
  auVar94._4_4_ = __real_3f800000;
  auVar94._0_4_ = __real_3f800000;
  auVar94._8_4_ = __real_3f800000;
  auVar94._12_4_ = __real_3f800000;
  auVar94._16_4_ = __real_3f800000;
  auVar94._20_4_ = __real_3f800000;
  auVar94._24_4_ = __real_3f800000;
  auVar94._28_4_ = __real_3f800000;
  _local_560 = vmaskmovps_avx(auVar236,auVar94);
  auVar105 = vpcmpeqd_avx(auVar105,auVar56._16_16_);
  auVar212 = vpcmpeqd_avx(auVar212,auVar56._0_16_);
  auVar68._16_16_ = auVar105;
  auVar68._0_16_ = auVar212;
  auVar214 = auVar236 & ~auVar68;
  if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 || (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0') ||
        (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0') ||
      (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
    auVar69._0_4_ = ~auVar212._0_4_ & auVar236._0_4_;
    auVar69._4_4_ = ~auVar212._4_4_ & auVar236._4_4_;
    auVar69._8_4_ = ~auVar212._8_4_ & auVar236._8_4_;
    auVar69._12_4_ = ~auVar212._12_4_ & auVar236._12_4_;
    auVar69._16_4_ = ~auVar105._0_4_ & auVar236._16_4_;
    auVar69._20_4_ = ~auVar105._4_4_ & auVar236._20_4_;
    auVar69._24_4_ = ~auVar105._8_4_ & auVar236._24_4_;
    auVar69._28_4_ = ~auVar105._12_4_ & auVar236._28_4_;
    if (param_8 < 6) {
      auVar105 = vpmulld_avx(auVar56._0_16_,auVar297);
      auVar101 = vpmulld_avx(auVar56._16_16_,auVar297);
      auVar212 = vpmovsxdq_avx(auVar101);
      auVar101 = vpshufd_avx(auVar101,0xee);
      vpmovsxdq_avx(auVar101);
      vpmovsxdq_avx(auVar105);
      auVar105 = vpshufd_avx(auVar105,0xee);
      auVar105 = vpmovsxdq_avx(auVar105);
                    /* WARNING: Could not recover jumptable at 0x000140c2f59d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6c848 + *(int *)(&DAT_151c6c848 + uVar36 * 4)))
                (&DAT_151c6c848,&DAT_151c6c848 + *(int *)(&DAT_151c6c848 + uVar36 * 4),
                 auVar105._0_8_,auVar212._0_8_);
      return;
    }
    auVar56 = vmaskmovps_avx(auVar69,ZEXT1632((undefined1  [16])0x0));
    auVar214 = vmaskmovps_avx(auVar69,ZEXT1632((undefined1  [16])0x0));
    auVar290 = vmaskmovps_avx(auVar69,ZEXT1632((undefined1  [16])0x0));
    auVar95._4_4_ = __real_3f800000;
    auVar95._0_4_ = __real_3f800000;
    auVar95._8_4_ = __real_3f800000;
    auVar95._12_4_ = __real_3f800000;
    auVar95._16_4_ = __real_3f800000;
    auVar95._20_4_ = __real_3f800000;
    auVar95._24_4_ = __real_3f800000;
    auVar95._28_4_ = __real_3f800000;
    auVar164 = vmaskmovps_avx(auVar69,auVar95);
    local_480 = auVar56._0_4_;
    fStack_47c = auVar56._4_4_;
    fStack_478 = auVar56._8_4_;
    fStack_474 = auVar56._12_4_;
    fStack_470 = auVar56._16_4_;
    fStack_46c = auVar56._20_4_;
    fStack_468 = auVar56._24_4_;
    fStack_464 = auVar56._28_4_;
    local_460 = auVar214._0_4_;
    fStack_45c = auVar214._4_4_;
    fStack_458 = auVar214._8_4_;
    fStack_454 = auVar214._12_4_;
    fStack_450 = auVar214._16_4_;
    fStack_44c = auVar214._20_4_;
    fStack_448 = auVar214._24_4_;
    fStack_444 = auVar214._28_4_;
    local_440 = auVar290._0_4_;
    fStack_43c = auVar290._4_4_;
    fStack_438 = auVar290._8_4_;
    fStack_434 = auVar290._12_4_;
    fStack_430 = auVar290._16_4_;
    fStack_42c = auVar290._20_4_;
    fStack_428 = auVar290._24_4_;
    fStack_424 = auVar290._28_4_;
    local_420 = auVar164._0_4_;
    fStack_41c = auVar164._4_4_;
    fStack_418 = auVar164._8_4_;
    fStack_414 = auVar164._12_4_;
    fStack_410 = auVar164._16_4_;
    fStack_40c = auVar164._20_4_;
    fStack_408 = auVar164._24_4_;
    fStack_404 = auVar164._28_4_;
    auVar267._0_4_ =
         (float)local_5c0._0_4_ * local_480 + (float)local_580._0_4_ * local_440 +
         (float)local_5a0._0_4_ * local_460 + local_420 * (float)local_560._0_4_;
    auVar267._4_4_ =
         (float)local_5c0._4_4_ * fStack_47c + (float)local_580._4_4_ * fStack_43c +
         (float)local_5a0._4_4_ * fStack_45c + fStack_41c * (float)local_560._4_4_;
    auVar267._8_4_ =
         fStack_5b8 * fStack_478 + fStack_578 * fStack_438 +
         fStack_598 * fStack_458 + fStack_418 * fStack_558;
    auVar267._12_4_ =
         fStack_5b4 * fStack_474 + fStack_574 * fStack_434 +
         fStack_594 * fStack_454 + fStack_414 * fStack_554;
    auVar267._16_4_ =
         fStack_5b0 * fStack_470 + fStack_570 * fStack_430 +
         fStack_590 * fStack_450 + fStack_410 * fStack_550;
    auVar267._20_4_ =
         fStack_5ac * fStack_46c + fStack_56c * fStack_42c +
         fStack_58c * fStack_44c + fStack_40c * fStack_54c;
    auVar267._24_4_ =
         fStack_5a8 * fStack_468 + fStack_568 * fStack_428 +
         fStack_588 * fStack_448 + fStack_408 * fStack_548;
    auVar267._28_4_ =
         fStack_5a4 * fStack_464 + fStack_564 * fStack_424 +
         fStack_584 * fStack_444 + fStack_404 * fStack_544;
    auVar56 = vcmpps_avx(ZEXT432(0) << 0x20,auVar267,6);
    auVar56 = vcvtdq2ps_avx(auVar56 | 
                            ___ymm_0000000100000001000000010000000100000001000000010000000100000001)
    ;
    fVar269 = auVar64._0_4_;
    fVar283 = auVar64._4_4_;
    fVar284 = auVar64._8_4_;
    fVar285 = auVar64._12_4_;
    fVar286 = auVar64._16_4_;
    fVar287 = auVar64._20_4_;
    fVar288 = auVar64._24_4_;
    fVar289 = auVar64._28_4_;
    auVar280._4_4_ = __real_3f800000;
    auVar280._0_4_ = __real_3f800000;
    auVar280._8_4_ = __real_3f800000;
    auVar280._12_4_ = __real_3f800000;
    auVar280._16_4_ = __real_3f800000;
    auVar280._20_4_ = __real_3f800000;
    auVar280._24_4_ = __real_3f800000;
    auVar280._28_4_ = __real_3f800000;
    auVar64 = vsubps_avx(auVar280,auVar64);
    fVar239 = auVar64._0_4_ * auVar56._0_4_;
    fVar244 = auVar64._4_4_ * auVar56._4_4_;
    fVar245 = auVar64._8_4_ * auVar56._8_4_;
    fVar246 = auVar64._12_4_ * auVar56._12_4_;
    fVar247 = auVar64._16_4_ * auVar56._16_4_;
    fVar248 = auVar64._20_4_ * auVar56._20_4_;
    fVar249 = auVar64._24_4_ * auVar56._24_4_;
    fVar250 = auVar64._28_4_ * auVar56._28_4_;
    fVar100 = fVar269 * local_480 + fVar239 * (float)local_5c0._0_4_;
    fVar139 = fVar283 * fStack_47c + fVar244 * (float)local_5c0._4_4_;
    fVar142 = fVar284 * fStack_478 + fVar245 * fStack_5b8;
    fVar145 = fVar285 * fStack_474 + fVar246 * fStack_5b4;
    fVar148 = fVar286 * fStack_470 + fVar247 * fStack_5b0;
    fVar151 = fVar287 * fStack_46c + fVar248 * fStack_5ac;
    fVar154 = fVar288 * fStack_468 + fVar249 * fStack_5a8;
    fVar157 = fVar289 * fStack_464 + fVar250 * fStack_5a4;
    fVar159 = fVar269 * local_460 + fVar239 * (float)local_5a0._0_4_;
    fVar181 = fVar283 * fStack_45c + fVar244 * (float)local_5a0._4_4_;
    fVar183 = fVar284 * fStack_458 + fVar245 * fStack_598;
    fVar185 = fVar285 * fStack_454 + fVar246 * fStack_594;
    fVar187 = fVar286 * fStack_450 + fVar247 * fStack_590;
    fVar190 = fVar287 * fStack_44c + fVar248 * fStack_58c;
    fVar192 = fVar288 * fStack_448 + fVar249 * fStack_588;
    fVar194 = fVar289 * fStack_444 + fVar250 * fStack_584;
    fVar195 = fVar269 * local_440 + fVar239 * (float)local_580._0_4_;
    fVar204 = fVar283 * fStack_43c + fVar244 * (float)local_580._4_4_;
    fVar205 = fVar284 * fStack_438 + fVar245 * fStack_578;
    fVar206 = fVar285 * fStack_434 + fVar246 * fStack_574;
    fVar207 = fVar286 * fStack_430 + fVar247 * fStack_570;
    fVar209 = fVar287 * fStack_42c + fVar248 * fStack_56c;
    fVar210 = fVar288 * fStack_428 + fVar249 * fStack_568;
    fVar211 = fVar289 * fStack_424 + fVar250 * fStack_564;
    fVar269 = fVar269 * local_420 + fVar239 * (float)local_560._0_4_;
    fVar283 = fVar283 * fStack_41c + fVar244 * (float)local_560._4_4_;
    fVar284 = fVar284 * fStack_418 + fVar245 * fStack_558;
    fVar285 = fVar285 * fStack_414 + fVar246 * fStack_554;
    fVar286 = fVar286 * fStack_410 + fVar247 * fStack_550;
    fVar287 = fVar287 * fStack_40c + fVar248 * fStack_54c;
    fVar288 = fVar288 * fStack_408 + fVar249 * fStack_548;
    fVar289 = fVar289 * fStack_404 + fVar250 * fStack_544;
    auVar225._0_4_ = fVar100 * fVar100 + fVar195 * fVar195 + fVar159 * fVar159 + fVar269 * fVar269;
    auVar225._4_4_ = fVar139 * fVar139 + fVar204 * fVar204 + fVar181 * fVar181 + fVar283 * fVar283;
    auVar225._8_4_ = fVar142 * fVar142 + fVar205 * fVar205 + fVar183 * fVar183 + fVar284 * fVar284;
    auVar225._12_4_ = fVar145 * fVar145 + fVar206 * fVar206 + fVar185 * fVar185 + fVar285 * fVar285;
    auVar225._16_4_ = fVar148 * fVar148 + fVar207 * fVar207 + fVar187 * fVar187 + fVar286 * fVar286;
    auVar225._20_4_ = fVar151 * fVar151 + fVar209 * fVar209 + fVar190 * fVar190 + fVar287 * fVar287;
    auVar225._24_4_ = fVar154 * fVar154 + fVar210 * fVar210 + fVar192 * fVar192 + fVar288 * fVar288;
    auVar225._28_4_ = fVar157 * fVar157 + fVar211 * fVar211 + fVar194 * fVar194 + fVar289 * fVar289;
    auVar237._4_4_ = __real_322bcc77;
    auVar237._0_4_ = __real_322bcc77;
    auVar237._8_4_ = __real_322bcc77;
    auVar237._12_4_ = __real_322bcc77;
    auVar237._16_4_ = __real_322bcc77;
    auVar237._20_4_ = __real_322bcc77;
    auVar237._24_4_ = __real_322bcc77;
    auVar237._28_4_ = __real_322bcc77;
    auVar56 = vcmpps_avx(auVar237,auVar225,6);
    auVar64 = vcmpps_avx(auVar237,auVar225,2);
    auVar255._4_4_ = __real_3f000000;
    auVar255._0_4_ = __real_3f000000;
    auVar255._8_4_ = __real_3f000000;
    auVar255._12_4_ = __real_3f000000;
    auVar255._16_4_ = __real_3f000000;
    auVar255._20_4_ = __real_3f000000;
    auVar255._24_4_ = __real_3f000000;
    auVar255._28_4_ = __real_3f000000;
    auVar214 = vrsqrtps_avx(auVar225);
    fVar239 = auVar214._0_4_;
    fVar244 = auVar214._4_4_;
    fVar245 = auVar214._8_4_;
    fVar246 = auVar214._12_4_;
    fVar247 = auVar214._16_4_;
    fVar248 = auVar214._20_4_;
    fVar249 = auVar214._24_4_;
    fVar250 = auVar214._28_4_;
    auVar281._0_4_ = fVar239 * fVar239 * __real_3f000000 * auVar225._0_4_;
    auVar281._4_4_ = fVar244 * fVar244 * __real_3f000000 * auVar225._4_4_;
    auVar281._8_4_ = fVar245 * fVar245 * __real_3f000000 * auVar225._8_4_;
    auVar281._12_4_ = fVar246 * fVar246 * __real_3f000000 * auVar225._12_4_;
    auVar281._16_4_ = fVar247 * fVar247 * __real_3f000000 * auVar225._16_4_;
    auVar281._20_4_ = fVar248 * fVar248 * __real_3f000000 * auVar225._20_4_;
    auVar281._24_4_ = fVar249 * fVar249 * __real_3f000000 * auVar225._24_4_;
    auVar281._28_4_ = fVar250 * fVar250 * __real_3f000000 * auVar225._28_4_;
    auVar214 = vsubps_avx(auVar255,auVar281);
    fVar239 = auVar214._0_4_ * fVar239 + fVar239;
    fVar244 = auVar214._4_4_ * fVar244 + fVar244;
    fVar245 = auVar214._8_4_ * fVar245 + fVar245;
    fVar246 = auVar214._12_4_ * fVar246 + fVar246;
    fVar247 = auVar214._16_4_ * fVar247 + fVar247;
    fVar248 = auVar214._20_4_ * fVar248 + fVar248;
    fVar249 = auVar214._24_4_ * fVar249 + fVar249;
    fVar250 = auVar214._28_4_ * fVar250 + fVar250;
    auVar268._0_4_ = __real_3f000000 * auVar225._0_4_ * fVar239 * fVar239;
    auVar268._4_4_ = __real_3f000000 * auVar225._4_4_ * fVar244 * fVar244;
    auVar268._8_4_ = __real_3f000000 * auVar225._8_4_ * fVar245 * fVar245;
    auVar268._12_4_ = __real_3f000000 * auVar225._12_4_ * fVar246 * fVar246;
    auVar268._16_4_ = __real_3f000000 * auVar225._16_4_ * fVar247 * fVar247;
    auVar268._20_4_ = __real_3f000000 * auVar225._20_4_ * fVar248 * fVar248;
    auVar268._24_4_ = __real_3f000000 * auVar225._24_4_ * fVar249 * fVar249;
    auVar268._28_4_ = __real_3f000000 * auVar225._28_4_ * fVar250 * fVar250;
    auVar214 = vsubps_avx(auVar255,auVar268);
    fVar239 = auVar214._0_4_ * fVar239 + fVar239;
    fVar244 = auVar214._4_4_ * fVar244 + fVar244;
    fVar245 = auVar214._8_4_ * fVar245 + fVar245;
    fVar246 = auVar214._12_4_ * fVar246 + fVar246;
    fVar247 = auVar214._16_4_ * fVar247 + fVar247;
    fVar248 = auVar214._20_4_ * fVar248 + fVar248;
    fVar249 = auVar214._24_4_ * fVar249 + fVar249;
    fVar250 = auVar214._28_4_ * fVar250 + fVar250;
    uVar27 = auVar64._0_4_;
    auVar96._0_4_ = (uint)(fVar100 * fVar239) & uVar27;
    uVar28 = auVar64._4_4_;
    auVar96._4_4_ = (uint)(fVar139 * fVar244) & uVar28;
    uVar32 = auVar64._8_4_;
    auVar96._8_4_ = (uint)(fVar142 * fVar245) & uVar32;
    uVar26 = auVar64._12_4_;
    auVar96._12_4_ = (uint)(fVar145 * fVar246) & uVar26;
    uVar158 = auVar64._16_4_;
    auVar96._16_4_ = (uint)(fVar148 * fVar247) & uVar158;
    uVar29 = auVar64._20_4_;
    auVar96._20_4_ = (uint)(fVar151 * fVar248) & uVar29;
    uVar140 = auVar64._24_4_;
    auVar96._24_4_ = (uint)(fVar154 * fVar249) & uVar140;
    uVar180 = auVar64._28_4_;
    auVar96._28_4_ = (uint)(fVar157 * fVar250) & uVar180;
    auVar138._0_4_ = (uint)(fVar159 * fVar239) & uVar27;
    auVar138._4_4_ = (uint)(fVar181 * fVar244) & uVar28;
    auVar138._8_4_ = (uint)(fVar183 * fVar245) & uVar32;
    auVar138._12_4_ = (uint)(fVar185 * fVar246) & uVar26;
    auVar138._16_4_ = (uint)(fVar187 * fVar247) & uVar158;
    auVar138._20_4_ = (uint)(fVar190 * fVar248) & uVar29;
    auVar138._24_4_ = (uint)(fVar192 * fVar249) & uVar140;
    auVar138._28_4_ = (uint)(fVar194 * fVar250) & uVar180;
    auVar179._0_4_ = (uint)(fVar195 * fVar239) & uVar27;
    auVar179._4_4_ = (uint)(fVar204 * fVar244) & uVar28;
    auVar179._8_4_ = (uint)(fVar205 * fVar245) & uVar32;
    auVar179._12_4_ = (uint)(fVar206 * fVar246) & uVar26;
    auVar179._16_4_ = (uint)(fVar207 * fVar247) & uVar158;
    auVar179._20_4_ = (uint)(fVar209 * fVar248) & uVar29;
    auVar179._24_4_ = (uint)(fVar210 * fVar249) & uVar140;
    auVar179._28_4_ = (uint)(fVar211 * fVar250) & uVar180;
    auVar203._0_4_ = (uint)(fVar269 * fVar239) & uVar27;
    auVar203._4_4_ = (uint)(fVar283 * fVar244) & uVar28;
    auVar203._8_4_ = (uint)(fVar284 * fVar245) & uVar32;
    auVar203._12_4_ = (uint)(fVar285 * fVar246) & uVar26;
    auVar203._16_4_ = (uint)(fVar286 * fVar247) & uVar158;
    auVar203._20_4_ = (uint)(fVar287 * fVar248) & uVar29;
    auVar203._24_4_ = (uint)(fVar288 * fVar249) & uVar140;
    auVar203._28_4_ = (uint)(fVar289 * fVar250) & uVar180;
    auVar226._0_4_ =
         auVar56._0_4_ & ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000;
    auVar226._4_4_ = auVar56._4_4_ & _UNK_150b50ce4;
    auVar226._8_4_ = auVar56._8_4_ & _UNK_150b50ce8;
    auVar226._12_4_ = auVar56._12_4_ & _UNK_150b50cec;
    auVar226._16_4_ = auVar56._16_4_ & _UNK_150b50cf0;
    auVar226._20_4_ = auVar56._20_4_ & _UNK_150b50cf4;
    auVar226._24_4_ = auVar56._24_4_ & _UNK_150b50cf8;
    auVar226._28_4_ = auVar56._28_4_ & _UNK_150b50cfc;
    _local_5c0 = vmaskmovps_avx(auVar69,auVar96);
    _local_5a0 = vmaskmovps_avx(auVar69,auVar138);
    _local_580 = vmaskmovps_avx(auVar69,auVar179);
    _local_560 = vmaskmovps_avx(auVar69,auVar203 | auVar226);
  }
LAB_140c30a2e:
  local_810 = (ulonglong)*(uint *)((ulonglong)(uVar184 & _UNK_150b519d0) + lVar39);
  auVar227._16_16_ = _local_560;
  auVar227._0_16_ = local_580._0_16_;
  auVar290 = vperm2f128_avx(_local_580,_local_560,0x31);
  auVar243._16_16_ = _local_5a0;
  auVar243._0_16_ = local_5c0._0_16_;
  auVar256._16_16_ = local_580._0_16_;
  auVar256._0_16_ = _local_560;
  auVar164 = vperm2f128_avx(_local_5c0,_local_5a0,0x31);
  auVar56 = vshufps_avx(auVar256,auVar256,0x14);
  auVar295._8_8_ = local_580;
  auVar295._0_8_ = local_580;
  auVar295._16_8_ = local_560;
  auVar295._24_8_ = local_560;
  auVar56 = vblendps_avx(auVar295,auVar56,0x48);
  auVar296._16_16_ = local_5c0._0_16_;
  auVar296._0_16_ = _local_5a0;
  auVar64 = vshufps_avx(auVar296,auVar296,0xe1);
  auVar64 = vblendps_avx(auVar243,auVar64,0x12);
  local_200 = vblendps_avx(auVar64,auVar56,0xcc);
  auVar56 = vshufps_avx(auVar256,auVar256,0xb4);
  auVar56 = vblendps_avx(auVar227,auVar56,0x48);
  auVar214 = vshufps_avx(auVar296,auVar296,0xeb);
  auVar64 = vshufpd_avx(auVar243,auVar243,5);
  auVar64 = vblendps_avx(auVar64,auVar214,0x12);
  local_1e0 = vblendps_avx(auVar64,auVar56,0xcc);
  auVar214 = vperm2f128_avx(_local_560,_local_580,0x31);
  auVar56 = vshufps_avx(auVar214,auVar214,0x14);
  auVar228._8_8_ = auVar290._0_8_;
  auVar228._0_8_ = auVar290._0_8_;
  auVar228._16_8_ = auVar290._16_8_;
  auVar228._24_8_ = auVar290._16_8_;
  auVar56 = vblendps_avx(auVar228,auVar56,0x48);
  auVar251 = vperm2f128_avx(_local_5a0,_local_5c0,0x31);
  auVar64 = vshufps_avx(auVar251,auVar251,0xe1);
  auVar64 = vblendps_avx(auVar164,auVar64,0x12);
  local_1c0 = vblendps_avx(auVar64,auVar56,0xcc);
  auVar56 = vshufps_avx(auVar214,auVar214,0xb4);
  auVar56 = vblendps_avx(auVar290,auVar56,0x48);
  auVar214 = vshufps_avx(auVar251,auVar251,0xeb);
  auVar64 = vshufpd_avx(auVar164,auVar164,5);
  auVar64 = vblendps_avx(auVar64,auVar214,0x12);
  local_1a0 = vblendps_avx(auVar64,auVar56,0xcc);
  auVar212 = vpcmpgtd_avx(auVar21,auVar163);
  auVar97._16_16_ = auVar188;
  auVar97._0_16_ = auVar212;
  uVar27 = vmovmskps_avx(auVar97);
  uVar36 = (ulonglong)uVar27;
  do {
    if (uVar36 == 0) {
      uVar27 = 0x40;
    }
    else {
      uVar27 = 0;
      for (uVar34 = uVar36; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
        uVar27 = uVar27 + 1;
      }
    }
    bVar1 = (byte)uVar27 & 0x3f;
    local_240[0] = (ulonglong)uVar46;
    local_240[1] = 0;
    local_240[2] = local_810;
    uStack_228 = 0;
    auVar56 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar27 << 4)));
    lVar39 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar27 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + lVar39) = auVar56._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x10 + lVar39) = auVar56._16_16_;
    uVar36 = uVar36 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
  } while (uVar36 != 0);
  return;
}

// GetVariableKeyLerpPoseTranslations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CuniCunfCunTCuniCuni_avx @ 140c31150

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetVariableKeyLerpPoseTranslations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CuniCunfCunTCuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
               float param_6,char param_7,uint param_8,uint param_9)

{
  int iVar1;
  byte bVar2;
  int iVar17;
  int iVar19;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar18;
  int iVar20;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong uVar26;
  char cVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  undefined4 uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
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
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  uint uVar115;
  float fVar129;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar131;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar133;
  float fVar137;
  float fVar139;
  undefined1 auVar135 [16];
  float fVar141;
  undefined1 auVar136 [16];
  undefined1 auVar124 [32];
  uint uVar130;
  uint uVar132;
  uint uVar134;
  uint uVar138;
  uint uVar140;
  uint uVar142;
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar143 [16];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
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
  undefined1 auVar158 [16];
  undefined1 auVar157 [32];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [16];
  uint uVar179;
  uint uVar180;
  uint uVar181;
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  uint uVar182;
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar183 [16];
  undefined1 auVar184 [32];
  undefined1 auVar186 [32];
  uint uVar187;
  uint uVar190;
  uint uVar191;
  uint uVar192;
  uint uVar193;
  uint uVar195;
  uint uVar196;
  uint uVar197;
  undefined1 auVar188 [32];
  undefined1 auVar194 [16];
  undefined1 auVar189 [32];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [16];
  undefined1 auVar202 [32];
  undefined1 in_ZMM12 [64];
  undefined1 auVar203 [64];
  undefined1 auVar204 [16];
  undefined1 auVar205 [64];
  undefined1 auVar206 [16];
  undefined1 auVar208 [32];
  undefined1 auVar209 [32];
  undefined1 auVar210 [32];
  undefined1 auVar211 [32];
  undefined1 local_7e0 [8];
  float fStack_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float fStack_7c8;
  float fStack_7c4;
  undefined1 local_7a0 [32];
  undefined1 local_720 [32];
  uint local_6c0;
  uint uStack_6bc;
  uint uStack_6b8;
  uint uStack_6b4;
  uint uStack_6b0;
  uint uStack_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  uint local_670;
  undefined1 local_660 [32];
  undefined1 local_5a0 [32];
  undefined1 local_580 [32];
  undefined1 local_560 [256];
  uint local_460;
  uint uStack_45c;
  uint uStack_458;
  uint uStack_454;
  uint uStack_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  uint local_420;
  uint uStack_41c;
  uint uStack_418;
  uint uStack_414;
  ulonglong local_400;
  ulonglong local_3e0;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  ulonglong local_240 [3];
  undefined8 uStack_228;
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_88 [16];
  undefined1 auVar64 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar185 [32];
  undefined1 auVar207 [32];
  
  local_88 = in_ZMM12._0_16_;
  iVar28 = *(int *)(&DAT_151c6cae0 + (longlong)(int)param_8 * 4);
  iVar1 = *(int *)(&DAT_151c6cac0 + (longlong)(int)param_8 * 4);
  uVar31 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar31 = param_9;
  }
  uVar34 = (ulonglong)param_8;
  local_670 = uVar31 & 0xfffffff8;
  if ((int)(uVar31 & 0xfffffff8) < 1) {
    uVar31 = 0;
  }
  else {
    auVar103 = vpshufd_avx(ZEXT416(-(uint)(param_8 == 3)),0);
    auVar40 = vpshufd_avx(ZEXT416((uint)(iVar28 * iVar1)),0);
    uVar31 = 0;
    auVar163 = vpshufd_avx(ZEXT416((0.0 < param_6) - 1),0);
    auVar41._16_16_ = auVar163;
    auVar41._0_16_ = auVar163;
    fVar129 = (float)(param_5 + -1) * param_6;
    auVar163 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
    uVar187 = (int)fVar129;
    if ((int)fVar129 < 1) {
      uVar187 = 0;
    }
    if ((int)(param_5 - 2U) < (int)uVar187) {
      uVar187 = param_5 - 2U;
    }
    auVar23 = vpshufd_avx(ZEXT416(uVar187),0);
    auVar143 = vshufps_avx(ZEXT416((uint)fVar129),ZEXT416((uint)fVar129),0);
    auVar42._16_16_ = auVar143;
    auVar42._0_16_ = auVar143;
    auVar205 = ZEXT1264(ZEXT812(0));
    auVar143 = vpcmpeqd_avx(local_88,local_88);
    do {
      auVar203 = ZEXT1664(auVar143);
      uVar32 = (ulonglong)(uVar31 * 8);
      auVar201 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar32);
      auVar204 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar32);
      auVar136 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar32);
      auVar158 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar32),auVar201,0xdd);
      auVar81 = vshufps_avx(auVar204,auVar136,0xdd);
      auVar80 = vpslld_avx(auVar81,4);
      auVar39 = vpslld_avx(auVar158,4);
      uVar187 = *(uint *)(param_3 + 4 + (longlong)auVar39._0_4_);
      auVar102 = ZEXT416(uVar187);
      uVar30 = *(uint *)(param_3 + 4 + (longlong)auVar80._0_4_);
      auVar116 = ZEXT416(uVar30);
      auVar81._4_4_ = __real_00000002;
      auVar81._0_4_ = __real_00000002;
      auVar81._8_4_ = __real_00000002;
      auVar81._12_4_ = __real_00000002;
      auVar158 = vpcmpgtd_avx(auVar81,auVar116);
      auVar81 = vpcmpgtd_avx(auVar81,auVar102);
      auVar85._16_16_ = auVar158;
      auVar85._0_16_ = auVar81;
      auVar85 = auVar85 | auVar41;
      auVar198 = auVar205._0_32_;
      if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0') ||
            (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
          (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
        local_7a0 = vblendvps_avx(local_7a0,auVar198,auVar85);
        local_720 = vblendvps_avx(local_720,auVar198,auVar85);
      }
      uVar38 = *(uint *)(param_3 + auVar39._0_4_);
      uVar190 = *(uint *)(param_3 + auVar80._0_4_);
      auVar39 = vpmovsxdq_avx(ZEXT416(uVar38));
      auVar158 = vpshufd_avx(ZEXT416(uVar38),0xee);
      auVar80 = vpmovsxdq_avx(auVar158);
      auVar84 = vpmovsxdq_avx(ZEXT416(uVar190));
      auVar194 = vpshufd_avx(ZEXT416(uVar190),0xee);
      auVar82._4_4_ = __real_00000001;
      auVar82._0_4_ = __real_00000001;
      auVar82._8_4_ = __real_00000001;
      auVar82._12_4_ = __real_00000001;
      auVar158 = vpcmpgtd_avx(auVar116,auVar82);
      auVar81 = vpcmpgtd_avx(auVar102,auVar82);
      local_420 = auVar103._0_4_;
      uStack_41c = auVar103._4_4_;
      uStack_418 = auVar103._8_4_;
      uStack_414 = auVar103._12_4_;
      auVar170._0_4_ = auVar81._0_4_ & local_420;
      auVar170._4_4_ = auVar81._4_4_ & uStack_41c;
      auVar170._8_4_ = auVar81._8_4_ & uStack_418;
      auVar170._12_4_ = auVar81._12_4_ & uStack_414;
      auVar170._16_4_ = auVar158._0_4_ & local_420;
      auVar170._20_4_ = auVar158._4_4_ & uStack_41c;
      auVar170._24_4_ = auVar158._8_4_ & uStack_418;
      auVar170._28_4_ = auVar158._12_4_ & uStack_414;
      auVar171 = vblendvps_avx(auVar198,
                               ___ymm_0000001800000018000000180000001800000018000000180000001800000018
                               ,auVar170);
      auVar194 = vpmovsxdq_avx(auVar194);
      auVar81 = auVar171._0_16_;
      auVar158 = vpmovsxdq_avx(auVar81);
      auVar158 = vpaddq_avx(auVar158,auVar39);
      auVar81 = vshufpd_avx(auVar81,auVar81,3);
      auVar81 = vpmovsxdq_avx(auVar81);
      auVar81 = vpaddq_avx(auVar81,auVar80);
      auVar80 = auVar171._16_16_;
      auVar39 = vpmovsxdq_avx(auVar80);
      auVar39 = vpaddq_avx(auVar39,auVar84);
      auVar80 = vshufpd_avx(auVar80,auVar80,3);
      auVar80 = vpmovsxdq_avx(auVar80);
      auVar80 = vpaddq_avx(auVar80,auVar194);
      auVar82 = auVar85._0_16_;
      auVar84 = vpcmpgtd_avx(auVar85._16_16_,auVar143);
      auVar194 = vpcmpgtd_avx(auVar82,auVar143);
      auVar171._16_16_ = auVar84;
      auVar171._0_16_ = auVar194;
      uVar38 = vmovmskps_avx(auVar171);
      auVar171 = SUB6432(ZEXT864(0),0) << 0x20;
      if (uVar38 != 0) {
        auVar194._0_4_ = auVar143._0_4_ + uVar30;
        auVar194._4_4_ = auVar143._4_4_;
        auVar194._8_4_ = auVar143._8_4_;
        auVar194._12_4_ = auVar143._12_4_;
        auVar22._0_4_ = auVar143._0_4_ + uVar187;
        auVar22._4_4_ = auVar143._4_4_;
        auVar22._8_4_ = auVar143._8_4_;
        auVar22._12_4_ = auVar143._12_4_;
        auVar144._16_16_ = auVar194;
        auVar144._0_16_ = auVar22;
        auVar198 = vcmpps_avx(auVar198,auVar198,0xf);
        auVar100._0_4_ = auVar85._0_4_ ^ auVar198._0_4_;
        auVar100._4_4_ = auVar85._4_4_ ^ auVar198._4_4_;
        auVar100._8_4_ = auVar85._8_4_ ^ auVar198._8_4_;
        auVar100._12_4_ = auVar85._12_4_ ^ auVar198._12_4_;
        auVar100._16_4_ = auVar85._16_4_ ^ auVar198._16_4_;
        auVar100._20_4_ = auVar85._20_4_ ^ auVar198._20_4_;
        auVar100._24_4_ = auVar85._24_4_ ^ auVar198._24_4_;
        auVar100._28_4_ = auVar85._28_4_ ^ auVar198._28_4_;
        if (__real_3f800000 <= param_6) {
          local_7a0 = vblendvps_avx(local_7a0,auVar144,auVar100);
          local_720 = vblendvps_avx(local_720,auVar144,auVar100);
        }
        else {
          auVar159 = vpmulld_avx(auVar102,auVar40);
          auVar116 = vpmulld_avx(auVar116,auVar40);
          auVar117 = vpmovsxdq_avx(auVar116);
          auVar116 = vpshufd_avx(auVar116,0xee);
          auVar21 = vpmovsxdq_avx(auVar116);
          auVar135 = vpmovsxdq_avx(auVar159);
          auVar116 = vpshufd_avx(auVar159,0xee);
          auVar116 = vpmovsxdq_avx(auVar116);
          auVar159._8_8_ = 0;
          auVar159._0_8_ = param_4 + 3;
          auVar159 = vpshufd_avx(auVar159,0x44);
          auVar116 = vpaddq_avx(auVar159,auVar116);
          auVar81 = vpaddq_avx(auVar81,auVar116);
          auVar116 = vpaddq_avx(auVar159,auVar135);
          auVar116 = vpaddq_avx(auVar158,auVar116);
          auVar21 = vpaddq_avx(auVar159,auVar21);
          auVar80 = vpaddq_avx(auVar80,auVar21);
          auVar21 = vpaddq_avx(auVar159,auVar117);
          auVar21 = vpaddq_avx(auVar39,auVar21);
          auVar206._0_4_ = auVar21._0_4_ & (uint)__real_fffffffffffffffc;
          auVar206._4_4_ = auVar21._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar206._8_4_ = auVar21._8_4_ & (uint)__real_fffffffffffffffc;
          auVar206._12_4_ = auVar21._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar207._16_4_ = auVar80._0_4_ & (uint)__real_fffffffffffffffc;
          auVar207._0_16_ = auVar206;
          auVar207._20_4_ = auVar80._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar207._24_4_ = auVar80._8_4_ & (uint)__real_fffffffffffffffc;
          auVar207._28_4_ = auVar80._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar117._0_4_ = auVar116._0_4_ & (uint)__real_fffffffffffffffc;
          auVar117._4_4_ = auVar116._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar117._8_4_ = auVar116._8_4_ & (uint)__real_fffffffffffffffc;
          auVar117._12_4_ = auVar116._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar122._16_4_ = auVar81._0_4_ & (uint)__real_fffffffffffffffc;
          auVar122._0_16_ = auVar117;
          auVar122._20_4_ = auVar81._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar122._24_4_ = auVar81._8_4_ & (uint)__real_fffffffffffffffc;
          auVar122._28_4_ = auVar81._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar85 = vcvtdq2ps_avx(auVar144);
          local_260 = auVar163._0_4_;
          fStack_25c = auVar163._4_4_;
          fStack_258 = auVar163._8_4_;
          fStack_254 = auVar163._12_4_;
          auVar80._0_4_ = (int)(auVar85._0_4_ * local_260);
          auVar80._4_4_ = (int)(auVar85._4_4_ * fStack_25c);
          auVar80._8_4_ = (int)(auVar85._8_4_ * fStack_258);
          auVar80._12_4_ = (int)(auVar85._12_4_ * fStack_254);
          auVar43._16_4_ = (int)(auVar85._16_4_ * local_260);
          auVar43._0_16_ = auVar80;
          auVar43._20_4_ = (int)(auVar85._20_4_ * fStack_25c);
          auVar43._24_4_ = (int)(auVar85._24_4_ * fStack_258);
          auVar43._28_4_ = (int)(auVar85._28_4_ * fStack_254);
          auVar81 = vpmaxsd_avx(auVar43._16_16_,(undefined1  [16])0x0);
          auVar80 = vpmaxsd_avx(auVar80,(undefined1  [16])0x0);
          auVar116 = vpminsd_avx(auVar81,auVar194);
          auVar21 = vpminsd_avx(auVar80,auVar22);
          auVar198._16_16_ = auVar116;
          auVar198._0_16_ = auVar21;
          auVar205 = ZEXT3264(auVar198);
          auVar118 = auVar207._16_16_;
          auVar135 = auVar122._16_16_;
          cVar27 = (char)uVar38;
          if (param_5 < 0x100) {
            auVar160 = vpmovsxdq_avx(auVar21);
            auVar162 = vpshufd_avx(auVar21,0xee);
            auVar162 = vpmovsxdq_avx(auVar162);
            auVar162 = vpaddq_avx(auVar135,auVar162);
            auVar160 = vpaddq_avx(auVar117,auVar160);
            if ((uVar38 & 1) != 0) {
              auVar159 = ZEXT116(*auVar160._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar160 = vpinsrb_avx(auVar159,(uint)*auVar160._8_8_,1);
              auVar159 = vpblendw_avx(auVar160,auVar159,0xe);
            }
            if ((uVar38 & 4) != 0) {
              auVar160 = vpmovzxwd_avx(auVar159);
              auVar160 = vpinsrb_avx(auVar160,(uint)*auVar162._0_8_,2);
              auVar160 = vpinsrb_avx(auVar160,(uint)auVar159[3],3);
              auVar159 = vpblendw_avx(auVar160,auVar159,0xc);
            }
            if ((uVar38 & 8) != 0) {
              auVar160 = vpmovzxwd_avx(auVar159);
              auVar160 = vpinsrb_avx(auVar160,(uint)auVar159[2],2);
              auVar162 = vpinsrb_avx(auVar160,(uint)*auVar162._8_8_,3);
              auVar159 = vpblendw_avx(auVar162,auVar159,0xc);
            }
            auVar160 = vpmovsxdq_avx(auVar116);
            auVar162 = vpshufd_avx(auVar116,0xee);
            auVar162 = vpmovsxdq_avx(auVar162);
            auVar162 = vpaddq_avx(auVar162,auVar118);
            auVar160 = vpaddq_avx(auVar206,auVar160);
            if ((uVar38 & 0x10) != 0) {
              auVar24 = vpshufb_avx(auVar159,___xmm_80800706808005048080030203020100);
              auVar24 = vpinsrb_avx(auVar24,(uint)*auVar160._0_8_,4);
              auVar24 = vpinsrb_avx(auVar24,(uint)auVar159[5],5);
              auVar159 = vpblendw_avx(auVar24,auVar159,8);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar24 = vpshufb_avx(auVar159,___xmm_80800706808005048080030403020100);
              auVar160 = vpinsrb_avx(auVar24,(uint)*auVar160._8_8_,5);
              auVar159 = vpblendw_avx(auVar160,auVar159,8);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar160 = vpshufb_avx(auVar159,___xmm_80800706808005048080050403020100);
              auVar160 = vpinsrb_avx(auVar160,(uint)*auVar162._0_8_,6);
              auVar159 = vpinsrb_avx(auVar160,(uint)auVar159[7],7);
            }
            if (cVar27 < '\0') {
              auVar159 = vpshufb_avx(auVar159,___xmm_80800706808005048006050403020100);
              auVar159 = vpinsrb_avx(auVar159,(uint)*auVar162._8_8_,7);
            }
            auVar160 = vpmovzxbd_avx(auVar159);
            auVar159 = vpshufd_avx(auVar159,0x55);
            auVar24 = vpmovzxbd_avx(auVar159);
            auVar159 = vpcmpgtd_avx(auVar24,auVar23);
            auVar25 = auVar143 ^ auVar159;
            auVar162 = vpcmpgtd_avx(auVar160,auVar23);
            auVar83 = auVar143 ^ auVar162;
            auVar165._16_16_ = auVar25;
            auVar165._0_16_ = auVar83;
            auVar47._16_16_ = auVar159;
            auVar47._0_16_ = auVar162;
            auVar85 = auVar100 & ~auVar47;
            local_460 = auVar83._0_4_;
            uStack_45c = auVar83._4_4_;
            uStack_458 = auVar83._8_4_;
            uStack_454 = auVar83._12_4_;
            uStack_450 = auVar25._0_4_;
            uStack_44c = auVar25._4_4_;
            uStack_448 = auVar25._8_4_;
            uStack_444 = auVar25._12_4_;
            if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0')
                  || (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
                (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
              auVar159 = vpcmpgtd_avx(auVar24,auVar23);
              auVar162 = vpcmpgtd_avx(auVar160,auVar23);
              auVar48._16_16_ = auVar159;
              auVar48._0_16_ = auVar162;
              auVar85 = vblendvps_avx(auVar144,auVar198,auVar48);
              auVar81 = vpcmpgtd_avx(auVar194,auVar81);
              auVar80 = vpcmpgtd_avx(auVar22,auVar80);
              uVar187 = auVar80._0_4_ & local_460;
              uVar190 = auVar80._4_4_ & uStack_45c;
              uVar191 = auVar80._8_4_ & uStack_458;
              uVar192 = auVar80._12_4_ & uStack_454;
              uVar193 = auVar81._0_4_ & uStack_450;
              uVar195 = auVar81._4_4_ & uStack_44c;
              uVar196 = auVar81._8_4_ & uStack_448;
              uVar197 = auVar81._12_4_ & uStack_444;
              auVar149._0_4_ = uVar187 & auVar100._0_4_;
              auVar149._4_4_ = uVar190 & auVar100._4_4_;
              auVar149._8_4_ = uVar191 & auVar100._8_4_;
              auVar149._12_4_ = uVar192 & auVar100._12_4_;
              auVar149._16_4_ = uVar193 & auVar100._16_4_;
              auVar149._20_4_ = uVar195 & auVar100._20_4_;
              auVar149._24_4_ = uVar196 & auVar100._24_4_;
              auVar149._28_4_ = uVar197 & auVar100._28_4_;
              iVar29 = vmovmskps_avx(auVar149);
              auVar188 = auVar198;
              while (auVar198 = auVar85, iVar29 != 0) {
                auVar159 = vpsubd_avx(auVar188._0_16_,auVar203._0_16_);
                auVar81 = vpmovsxdq_avx(auVar159);
                auVar143 = vpshufd_avx(auVar159,0xee);
                auVar143 = vpmovsxdq_avx(auVar143);
                auVar143 = vpaddq_avx(auVar135,auVar143);
                auVar81 = vpaddq_avx(auVar117,auVar81);
                uVar35 = vmovmskps_avx(auVar149);
                auVar80 = auVar143;
                if ((uVar35 & 1) != 0) {
                  auVar80 = ZEXT116(*auVar81._0_8_);
                }
                if ((uVar35 & 2) != 0) {
                  auVar81 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,1);
                  auVar80 = vpblendw_avx(auVar81,auVar80,0xe);
                }
                if ((uVar35 & 4) != 0) {
                  auVar81 = vpmovzxwd_avx(auVar80);
                  auVar81 = vpinsrb_avx(auVar81,(uint)*auVar143._0_8_,2);
                  auVar81 = vpinsrb_avx(auVar81,(uint)auVar80[3],3);
                  auVar80 = vpblendw_avx(auVar81,auVar80,0xc);
                }
                if ((uVar35 & 8) != 0) {
                  auVar81 = vpmovzxwd_avx(auVar80);
                  auVar81 = vpinsrb_avx(auVar81,(uint)auVar80[2],2);
                  auVar81 = vpinsrb_avx(auVar81,(uint)*auVar143._8_8_,3);
                  auVar80 = vpblendw_avx(auVar81,auVar80,0xc);
                }
                auVar143 = vpcmpeqd_avx(auVar143,auVar143);
                auVar162 = vpsubd_avx(auVar188._16_16_,auVar143);
                auVar81 = vpmovsxdq_avx(auVar162);
                auVar143 = vpshufd_avx(auVar162,0xee);
                auVar143 = vpmovsxdq_avx(auVar143);
                auVar143 = vpaddq_avx(auVar143,auVar118);
                auVar81 = vpaddq_avx(auVar206,auVar81);
                if ((uVar35 & 0x10) != 0) {
                  auVar25 = vpshufb_avx(auVar80,___xmm_80800706808005048080030203020100);
                  auVar25 = vpinsrb_avx(auVar25,(uint)*auVar81._0_8_,4);
                  auVar25 = vpinsrb_avx(auVar25,(uint)auVar80[5],5);
                  auVar80 = vpblendw_avx(auVar25,auVar80,8);
                }
                if ((uVar35 & 0x20) != 0) {
                  auVar25 = vpshufb_avx(auVar80,___xmm_80800706808005048080030403020100);
                  auVar81 = vpinsrb_avx(auVar25,(uint)*auVar81._8_8_,5);
                  auVar80 = vpblendw_avx(auVar81,auVar80,8);
                }
                if ((uVar35 & 0x40) != 0) {
                  auVar81 = vpshufb_avx(auVar80,___xmm_80800706808005048080050403020100);
                  auVar81 = vpinsrb_avx(auVar81,(uint)*auVar143._0_8_,6);
                  auVar80 = vpinsrb_avx(auVar81,(uint)auVar80[7],7);
                }
                if ((char)uVar35 < '\0') {
                  auVar81 = vpshufb_avx(auVar80,___xmm_80800706808005048006050403020100);
                  auVar80 = vpinsrb_avx(auVar81,(uint)*auVar143._8_8_,7);
                }
                auVar81 = vpmovzxbd_avx(auVar80);
                auVar143 = vpshufd_avx(auVar80,0x55);
                auVar143 = vpmovzxbd_avx(auVar143);
                auVar143 = vpcmpgtd_avx(auVar143,auVar23);
                auVar81 = vpcmpgtd_avx(auVar81,auVar23);
                auVar173._0_4_ = uVar187 & auVar81._0_4_;
                auVar173._4_4_ = uVar190 & auVar81._4_4_;
                auVar173._8_4_ = uVar191 & auVar81._8_4_;
                auVar173._12_4_ = uVar192 & auVar81._12_4_;
                auVar173._16_4_ = uVar193 & auVar143._0_4_;
                auVar173._20_4_ = uVar195 & auVar143._4_4_;
                auVar173._24_4_ = uVar196 & auVar143._8_4_;
                auVar173._28_4_ = uVar197 & auVar143._12_4_;
                auVar150 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar49._0_4_ = auVar173._0_4_ & auVar100._0_4_;
                auVar49._4_4_ = auVar173._4_4_ & auVar100._4_4_;
                auVar49._8_4_ = auVar173._8_4_ & auVar100._8_4_;
                auVar49._12_4_ = auVar173._12_4_ & auVar100._12_4_;
                auVar49._16_4_ = auVar173._16_4_ & auVar100._16_4_;
                auVar49._20_4_ = auVar173._20_4_ & auVar100._20_4_;
                auVar49._24_4_ = auVar173._24_4_ & auVar100._24_4_;
                auVar49._28_4_ = auVar173._28_4_ & auVar100._28_4_;
                uVar36 = vmovmskps_avx(auVar49);
                if ((char)iVar29 != (char)uVar36) {
                  auVar150._0_4_ = uVar187 ^ auVar173._0_4_;
                  auVar150._4_4_ = uVar190 ^ auVar173._4_4_;
                  auVar150._8_4_ = uVar191 ^ auVar173._8_4_;
                  auVar150._12_4_ = uVar192 ^ auVar173._12_4_;
                  auVar150._16_4_ = uVar193 ^ auVar173._16_4_;
                  auVar150._20_4_ = uVar195 ^ auVar173._20_4_;
                  auVar150._24_4_ = uVar196 ^ auVar173._24_4_;
                  auVar150._28_4_ = uVar197 ^ auVar173._28_4_;
                }
                auVar85 = vblendvps_avx(auVar198,auVar188,auVar173);
                auVar188._16_16_ = auVar162;
                auVar188._0_16_ = auVar159;
                auVar143 = vpcmpgtd_avx(auVar194,auVar162);
                auVar81 = vpcmpgtd_avx(auVar22,auVar159);
                uVar187 = auVar81._0_4_ & auVar150._0_4_;
                uVar190 = auVar81._4_4_ & auVar150._4_4_;
                uVar191 = auVar81._8_4_ & auVar150._8_4_;
                uVar192 = auVar81._12_4_ & auVar150._12_4_;
                uVar193 = auVar143._0_4_ & auVar150._16_4_;
                uVar195 = auVar143._4_4_ & auVar150._20_4_;
                uVar196 = auVar143._8_4_ & auVar150._24_4_;
                uVar197 = auVar143._12_4_ & auVar150._28_4_;
                auVar149._0_4_ = uVar187 & auVar100._0_4_;
                auVar149._4_4_ = uVar190 & auVar100._4_4_;
                auVar149._8_4_ = uVar191 & auVar100._8_4_;
                auVar149._12_4_ = uVar192 & auVar100._12_4_;
                auVar149._16_4_ = uVar193 & auVar100._16_4_;
                auVar149._20_4_ = uVar195 & auVar100._20_4_;
                auVar149._24_4_ = uVar196 & auVar100._24_4_;
                auVar149._28_4_ = uVar197 & auVar100._28_4_;
                iVar29 = vmovmskps_avx(auVar149);
                auVar143 = vpcmpeqd_avx(auVar162,auVar162);
                auVar203 = ZEXT1664(auVar143);
              }
            }
            auVar81 = vpcmpgtd_avx(auVar24,auVar23);
            auVar80 = vpcmpgtd_avx(auVar160,auVar23);
            auVar52._16_16_ = auVar81;
            auVar52._0_16_ = auVar80;
            auVar81 = vpcmpgtd_avx(auVar82,auVar143);
            auVar87._16_16_ = auVar84;
            auVar87._0_16_ = auVar81;
            auVar52 = auVar52 & auVar87;
            if ((((((((SUB321(auVar52 >> 0x1f,0) & 1) != 0 || (SUB321(auVar52 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar52 >> 0x5f,0) & 1) != 0) || SUB321(auVar52 >> 0x7f,0) != '\0')
                  || (SUB321(auVar52 >> 0x9f,0) & 1) != 0) || SUB321(auVar52 >> 0xbf,0) != '\0') ||
                (SUB321(auVar52 >> 0xdf,0) & 1) != 0) || auVar52[0x1f] < '\0') {
              auVar198 = vblendvps_avx(ZEXT832(0) << 0x20,auVar198,auVar165);
              auVar84._4_4_ = __real_00000001;
              auVar84._0_4_ = __real_00000001;
              auVar84._8_4_ = __real_00000001;
              auVar84._12_4_ = __real_00000001;
              auVar81 = vpcmpgtd_avx(auVar116,auVar84);
              auVar80 = vpcmpgtd_avx(auVar21,auVar84);
              uVar187 = ~local_460 & auVar80._0_4_;
              uVar190 = ~uStack_45c & auVar80._4_4_;
              uVar191 = ~uStack_458 & auVar80._8_4_;
              uVar192 = ~uStack_454 & auVar80._12_4_;
              uVar193 = ~uStack_450 & auVar81._0_4_;
              uVar195 = ~uStack_44c & auVar81._4_4_;
              uVar196 = ~uStack_448 & auVar81._8_4_;
              uVar197 = ~uStack_444 & auVar81._12_4_;
              auVar154._0_4_ = uVar187 & auVar100._0_4_;
              auVar154._4_4_ = uVar190 & auVar100._4_4_;
              auVar154._8_4_ = uVar191 & auVar100._8_4_;
              auVar154._12_4_ = uVar192 & auVar100._12_4_;
              auVar154._16_4_ = uVar193 & auVar100._16_4_;
              auVar154._20_4_ = uVar195 & auVar100._20_4_;
              auVar154._24_4_ = uVar196 & auVar100._24_4_;
              auVar154._28_4_ = uVar197 & auVar100._28_4_;
              iVar29 = vmovmskps_avx(auVar154);
              while (iVar29 != 0) {
                auVar116._0_4_ = auVar205._0_4_ + auVar143._0_4_;
                auVar116._4_4_ = auVar205._4_4_ + auVar143._4_4_;
                auVar116._8_4_ = auVar205._8_4_ + auVar143._8_4_;
                auVar116._12_4_ = auVar205._12_4_ + auVar143._12_4_;
                auVar80 = vpmovsxdq_avx(auVar116);
                auVar81 = vpshufd_avx(auVar116,0xee);
                auVar81 = vpmovsxdq_avx(auVar81);
                auVar81 = vpaddq_avx(auVar135,auVar81);
                auVar80 = vpaddq_avx(auVar117,auVar80);
                uVar35 = vmovmskps_avx(auVar154);
                auVar84 = auVar81;
                if ((uVar35 & 1) != 0) {
                  auVar84 = ZEXT116(*auVar80._0_8_);
                }
                if ((uVar35 & 2) != 0) {
                  auVar80 = vpinsrb_avx(auVar84,(uint)*auVar80._8_8_,1);
                  auVar84 = vpblendw_avx(auVar80,auVar84,0xe);
                }
                if ((uVar35 & 4) != 0) {
                  auVar80 = vpmovzxwd_avx(auVar84);
                  auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,2);
                  auVar80 = vpinsrb_avx(auVar80,(uint)auVar84[3],3);
                  auVar84 = vpblendw_avx(auVar80,auVar84,0xc);
                }
                if ((uVar35 & 8) != 0) {
                  auVar80 = vpmovzxwd_avx(auVar84);
                  auVar80 = vpinsrb_avx(auVar80,(uint)auVar84[2],2);
                  auVar81 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,3);
                  auVar84 = vpblendw_avx(auVar81,auVar84,0xc);
                }
                auVar21._0_4_ = auVar205._16_4_ + auVar143._0_4_;
                auVar21._4_4_ = auVar205._20_4_ + auVar143._4_4_;
                auVar21._8_4_ = auVar205._24_4_ + auVar143._8_4_;
                auVar21._12_4_ = auVar205._28_4_ + auVar143._12_4_;
                auVar80 = vpmovsxdq_avx(auVar21);
                auVar81 = vpshufd_avx(auVar21,0xee);
                auVar81 = vpmovsxdq_avx(auVar81);
                auVar81 = vpaddq_avx(auVar81,auVar118);
                auVar80 = vpaddq_avx(auVar206,auVar80);
                if ((uVar35 & 0x10) != 0) {
                  auVar194 = vpshufb_avx(auVar84,___xmm_80800706808005048080030203020100);
                  auVar194 = vpinsrb_avx(auVar194,(uint)*auVar80._0_8_,4);
                  auVar194 = vpinsrb_avx(auVar194,(uint)auVar84[5],5);
                  auVar84 = vpblendw_avx(auVar194,auVar84,8);
                }
                if ((uVar35 & 0x20) != 0) {
                  auVar194 = vpshufb_avx(auVar84,___xmm_80800706808005048080030403020100);
                  auVar80 = vpinsrb_avx(auVar194,(uint)*auVar80._8_8_,5);
                  auVar84 = vpblendw_avx(auVar80,auVar84,8);
                }
                if ((uVar35 & 0x40) != 0) {
                  auVar80 = vpshufb_avx(auVar84,___xmm_80800706808005048080050403020100);
                  auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,6);
                  auVar84 = vpinsrb_avx(auVar80,(uint)auVar84[7],7);
                }
                if ((char)uVar35 < '\0') {
                  auVar80 = vpshufb_avx(auVar84,___xmm_80800706808005048006050403020100);
                  auVar84 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,7);
                }
                auVar80 = vpmovzxbd_avx(auVar84);
                auVar81 = vpshufd_avx(auVar84,0x55);
                auVar81 = vpmovzxbd_avx(auVar81);
                auVar81 = vpcmpgtd_avx(auVar81,auVar23);
                auVar80 = vpcmpgtd_avx(auVar80,auVar23);
                auVar175._0_4_ = ~auVar80._0_4_ & uVar187;
                auVar175._4_4_ = ~auVar80._4_4_ & uVar190;
                auVar175._8_4_ = ~auVar80._8_4_ & uVar191;
                auVar175._12_4_ = ~auVar80._12_4_ & uVar192;
                auVar175._16_4_ = ~auVar81._0_4_ & uVar193;
                auVar175._20_4_ = ~auVar81._4_4_ & uVar195;
                auVar175._24_4_ = ~auVar81._8_4_ & uVar196;
                auVar175._28_4_ = ~auVar81._12_4_ & uVar197;
                auVar155 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar54._0_4_ = auVar175._0_4_ & auVar100._0_4_;
                auVar54._4_4_ = auVar175._4_4_ & auVar100._4_4_;
                auVar54._8_4_ = auVar175._8_4_ & auVar100._8_4_;
                auVar54._12_4_ = auVar175._12_4_ & auVar100._12_4_;
                auVar54._16_4_ = auVar175._16_4_ & auVar100._16_4_;
                auVar54._20_4_ = auVar175._20_4_ & auVar100._20_4_;
                auVar54._24_4_ = auVar175._24_4_ & auVar100._24_4_;
                auVar54._28_4_ = auVar175._28_4_ & auVar100._28_4_;
                uVar36 = vmovmskps_avx(auVar54);
                if ((char)iVar29 != (char)uVar36) {
                  auVar155._0_4_ = auVar175._0_4_ ^ uVar187;
                  auVar155._4_4_ = auVar175._4_4_ ^ uVar190;
                  auVar155._8_4_ = auVar175._8_4_ ^ uVar191;
                  auVar155._12_4_ = auVar175._12_4_ ^ uVar192;
                  auVar155._16_4_ = auVar175._16_4_ ^ uVar193;
                  auVar155._20_4_ = auVar175._20_4_ ^ uVar195;
                  auVar155._24_4_ = auVar175._24_4_ ^ uVar196;
                  auVar155._28_4_ = auVar175._28_4_ ^ uVar197;
                }
                auVar53._16_16_ = auVar21;
                auVar53._0_16_ = auVar116;
                auVar198 = vblendvps_avx(auVar198,auVar53,auVar175);
                auVar162._4_4_ = __real_00000002;
                auVar162._0_4_ = __real_00000002;
                auVar162._8_4_ = __real_00000002;
                auVar162._12_4_ = __real_00000002;
                auVar81 = vpcmpgtd_avx(auVar205._0_16_,auVar162);
                auVar80 = vpcmpgtd_avx(auVar205._16_16_,auVar162);
                uVar187 = auVar81._0_4_ & auVar155._0_4_;
                uVar190 = auVar81._4_4_ & auVar155._4_4_;
                uVar191 = auVar81._8_4_ & auVar155._8_4_;
                uVar192 = auVar81._12_4_ & auVar155._12_4_;
                uVar193 = auVar80._0_4_ & auVar155._16_4_;
                uVar195 = auVar80._4_4_ & auVar155._20_4_;
                uVar196 = auVar80._8_4_ & auVar155._24_4_;
                uVar197 = auVar80._12_4_ & auVar155._28_4_;
                auVar154._0_4_ = uVar187 & auVar100._0_4_;
                auVar154._4_4_ = uVar190 & auVar100._4_4_;
                auVar154._8_4_ = uVar191 & auVar100._8_4_;
                auVar154._12_4_ = uVar192 & auVar100._12_4_;
                auVar154._16_4_ = uVar193 & auVar100._16_4_;
                auVar154._20_4_ = uVar195 & auVar100._20_4_;
                auVar154._24_4_ = uVar196 & auVar100._24_4_;
                auVar154._28_4_ = uVar197 & auVar100._28_4_;
                iVar29 = vmovmskps_avx(auVar154);
                auVar205 = ZEXT3264(auVar53);
              }
            }
            local_7a0 = vblendvps_avx(local_7a0,auVar198,auVar100);
            auVar84 = local_7a0._0_16_;
            auVar80 = vpmovsxdq_avx(auVar84);
            auVar81 = vshufpd_avx(auVar84,auVar84,3);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar135,auVar81);
            auVar80 = vpaddq_avx(auVar117,auVar80);
            auVar116 = auVar81;
            if ((uVar38 & 1) != 0) {
              auVar116 = ZEXT116(*auVar80._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar80 = vpinsrb_avx(auVar116,(uint)*auVar80._8_8_,1);
              auVar116 = vpblendw_avx(auVar80,auVar116,0xe);
            }
            if ((uVar38 & 4) != 0) {
              auVar80 = vpmovzxwd_avx(auVar116);
              auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,2);
              auVar80 = vpinsrb_avx(auVar80,(uint)auVar116[3],3);
              auVar116 = vpblendw_avx(auVar80,auVar116,0xc);
            }
            if ((uVar38 & 8) != 0) {
              auVar80 = vpmovzxwd_avx(auVar116);
              auVar80 = vpinsrb_avx(auVar80,(uint)auVar116[2],2);
              auVar81 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,3);
              auVar116 = vpblendw_avx(auVar81,auVar116,0xc);
            }
            auVar194 = local_7a0._16_16_;
            auVar80 = vpmovsxdq_avx(auVar194);
            auVar81 = vshufpd_avx(auVar194,auVar194,3);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar81,auVar118);
            auVar80 = vpaddq_avx(auVar206,auVar80);
            if ((uVar38 & 0x10) != 0) {
              auVar82 = vpshufb_avx(auVar116,___xmm_80800706808005048080030203020100);
              auVar82 = vpinsrb_avx(auVar82,(uint)*auVar80._0_8_,4);
              auVar82 = vpinsrb_avx(auVar82,(uint)auVar116[5],5);
              auVar116 = vpblendw_avx(auVar82,auVar116,8);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar82 = vpshufb_avx(auVar116,___xmm_80800706808005048080030403020100);
              auVar80 = vpinsrb_avx(auVar82,(uint)*auVar80._8_8_,5);
              auVar116 = vpblendw_avx(auVar80,auVar116,8);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar80 = vpshufb_avx(auVar116,___xmm_80800706808005048080050403020100);
              auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,6);
              auVar116 = vpinsrb_avx(auVar80,(uint)auVar116[7],7);
            }
            if (cVar27 < '\0') {
              auVar80 = vpshufb_avx(auVar116,___xmm_80800706808005048006050403020100);
              auVar116 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,7);
            }
            auVar81 = vpsubd_avx(auVar194,auVar143);
            auVar80 = vpsubd_avx(auVar84,auVar143);
            auVar58._16_16_ = auVar81;
            auVar58._0_16_ = auVar80;
            local_720 = vblendvps_avx(local_720,auVar58,auVar100);
            auVar81 = vpcmpgtd_avx(ZEXT416(uVar30),local_720._16_16_);
            auVar80 = vpcmpgtd_avx(auVar102,local_720._0_16_);
            auVar108._16_16_ = auVar81;
            auVar108._0_16_ = auVar80;
            auVar85 = auVar100 & ~auVar108;
            if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0')
                  || (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
                (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
              auVar59._0_4_ = ~auVar80._0_4_ & auVar100._0_4_;
              auVar59._4_4_ = ~auVar80._4_4_ & auVar100._4_4_;
              auVar59._8_4_ = ~auVar80._8_4_ & auVar100._8_4_;
              auVar59._12_4_ = ~auVar80._12_4_ & auVar100._12_4_;
              auVar59._16_4_ = ~auVar81._0_4_ & auVar100._16_4_;
              auVar59._20_4_ = ~auVar81._4_4_ & auVar100._20_4_;
              auVar59._24_4_ = ~auVar81._8_4_ & auVar100._24_4_;
              auVar59._28_4_ = ~auVar81._12_4_ & auVar100._28_4_;
              local_720 = vblendvps_avx(local_720,auVar144,auVar59);
            }
            auVar80 = vpmovsxdq_avx(local_720._0_16_);
            auVar81 = vpshufd_avx(local_720._0_16_,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar135,auVar81);
            auVar80 = vpaddq_avx(auVar117,auVar80);
            auVar102 = auVar81;
            if ((uVar38 & 1) != 0) {
              auVar102 = ZEXT116(*auVar80._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar80 = vpinsrb_avx(auVar102,(uint)*auVar80._8_8_,1);
              auVar102 = vpblendw_avx(auVar80,auVar102,0xe);
            }
            if ((uVar38 & 4) != 0) {
              auVar80 = vpmovzxwd_avx(auVar102);
              auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,2);
              auVar80 = vpinsrb_avx(auVar80,(uint)auVar102[3],3);
              auVar102 = vpblendw_avx(auVar80,auVar102,0xc);
            }
            if ((uVar38 & 8) != 0) {
              auVar80 = vpmovzxwd_avx(auVar102);
              auVar80 = vpinsrb_avx(auVar80,(uint)auVar102[2],2);
              auVar81 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,3);
              auVar102 = vpblendw_avx(auVar81,auVar102,0xc);
            }
            auVar80 = vpmovsxdq_avx(local_720._16_16_);
            auVar81 = vpshufd_avx(local_720._16_16_,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar81,auVar118);
            auVar80 = vpaddq_avx(auVar206,auVar80);
            if ((uVar38 & 0x10) != 0) {
              auVar84 = vpshufb_avx(auVar102,___xmm_80800706808005048080030203020100);
              auVar84 = vpinsrb_avx(auVar84,(uint)*auVar80._0_8_,4);
              auVar84 = vpinsrb_avx(auVar84,(uint)auVar102[5],5);
              auVar102 = vpblendw_avx(auVar84,auVar102,8);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar84 = vpshufb_avx(auVar102,___xmm_80800706808005048080030403020100);
              auVar80 = vpinsrb_avx(auVar84,(uint)*auVar80._8_8_,5);
              auVar102 = vpblendw_avx(auVar80,auVar102,8);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar80 = vpshufb_avx(auVar102,___xmm_80800706808005048080050403020100);
              auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,6);
              auVar102 = vpinsrb_avx(auVar80,(uint)auVar102[7],7);
            }
            if (cVar27 < '\0') {
              auVar80 = vpshufb_avx(auVar102,___xmm_80800706808005048006050403020100);
              auVar102 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,7);
            }
            auVar81 = vpmovzxbd_avx(auVar116);
            auVar80 = vpshufd_avx(auVar116,0x55);
            auVar80 = vpmovzxbd_avx(auVar80);
            auVar57._16_16_ = auVar80;
            auVar57._0_16_ = auVar81;
            auVar81 = vpmovzxbd_avx(auVar102);
            auVar80 = vpshufd_avx(auVar102,0x55);
            auVar80 = vpmovzxbd_avx(auVar80);
            auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          else {
            auVar160._4_4_ = auVar21._4_4_ * 2;
            auVar160._0_4_ = auVar21._0_4_ * 2;
            auVar160._8_4_ = auVar21._8_4_ * 2;
            auVar160._12_4_ = auVar21._12_4_ * 2;
            auVar162 = vpmovsxdq_avx(auVar160);
            auVar159 = vpshufd_avx(auVar160,0xee);
            auVar159 = vpmovsxdq_avx(auVar159);
            auVar159 = vpaddq_avx(auVar135,auVar159);
            auVar162 = vpaddq_avx(auVar117,auVar162);
            auVar160 = auVar162;
            if ((uVar38 & 1) != 0) {
              auVar160 = ZEXT216(*auVar162._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar162._8_8_,1);
            }
            if ((uVar38 & 4) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar159._0_8_,2);
            }
            if ((uVar38 & 8) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar159._8_8_,3);
            }
            auVar24._4_4_ = auVar116._4_4_ * 2;
            auVar24._0_4_ = auVar116._0_4_ * 2;
            auVar24._8_4_ = auVar116._8_4_ * 2;
            auVar24._12_4_ = auVar116._12_4_ * 2;
            auVar162 = vpmovsxdq_avx(auVar24);
            auVar159 = vpshufd_avx(auVar24,0xee);
            auVar159 = vpmovsxdq_avx(auVar159);
            auVar159 = vpaddq_avx(auVar159,auVar118);
            auVar162 = vpaddq_avx(auVar206,auVar162);
            if ((uVar38 & 0x10) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar162._0_8_,4);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar162._8_8_,5);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar159._0_8_,6);
            }
            if (cVar27 < '\0') {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar159._8_8_,7);
            }
            auVar24 = vpunpckhwd_avx(auVar160,___xmm_00000000000000000000000000000000);
            auVar160 = vpmovzxwd_avx(auVar160);
            auVar159 = vpcmpgtd_avx(auVar24,auVar23);
            auVar25 = auVar143 ^ auVar159;
            auVar162 = vpcmpgtd_avx(auVar160,auVar23);
            auVar83 = auVar143 ^ auVar162;
            auVar44._16_16_ = auVar25;
            auVar44._0_16_ = auVar83;
            auVar145._16_16_ = auVar159;
            auVar145._0_16_ = auVar162;
            auVar85 = auVar100 & ~auVar145;
            local_460 = auVar83._0_4_;
            uStack_45c = auVar83._4_4_;
            uStack_458 = auVar83._8_4_;
            uStack_454 = auVar83._12_4_;
            uStack_450 = auVar25._0_4_;
            uStack_44c = auVar25._4_4_;
            uStack_448 = auVar25._8_4_;
            uStack_444 = auVar25._12_4_;
            if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0')
                  || (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
                (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
              auVar159 = vpcmpgtd_avx(auVar24,auVar23);
              auVar162 = vpcmpgtd_avx(auVar160,auVar23);
              auVar146._16_16_ = auVar159;
              auVar146._0_16_ = auVar162;
              auVar85 = vblendvps_avx(auVar144,auVar198,auVar146);
              auVar81 = vpcmpgtd_avx(auVar194,auVar81);
              auVar80 = vpcmpgtd_avx(auVar22,auVar80);
              uVar187 = auVar80._0_4_ & local_460;
              uVar190 = auVar80._4_4_ & uStack_45c;
              uVar191 = auVar80._8_4_ & uStack_458;
              uVar192 = auVar80._12_4_ & uStack_454;
              uVar193 = auVar81._0_4_ & uStack_450;
              uVar195 = auVar81._4_4_ & uStack_44c;
              uVar196 = auVar81._8_4_ & uStack_448;
              uVar197 = auVar81._12_4_ & uStack_444;
              auVar147._0_4_ = uVar187 & auVar100._0_4_;
              auVar147._4_4_ = uVar190 & auVar100._4_4_;
              auVar147._8_4_ = uVar191 & auVar100._8_4_;
              auVar147._12_4_ = uVar192 & auVar100._12_4_;
              auVar147._16_4_ = uVar193 & auVar100._16_4_;
              auVar147._20_4_ = uVar195 & auVar100._20_4_;
              auVar147._24_4_ = uVar196 & auVar100._24_4_;
              auVar147._28_4_ = uVar197 & auVar100._28_4_;
              iVar29 = vmovmskps_avx(auVar147);
              auVar45 = auVar144;
              auVar164 = auVar198;
              while (auVar198 = auVar85, iVar29 != 0) {
                auVar159 = vpsubd_avx(auVar164._0_16_,auVar203._0_16_);
                auVar143._4_4_ = auVar159._4_4_ * 2;
                auVar143._0_4_ = auVar159._0_4_ * 2;
                auVar143._8_4_ = auVar159._8_4_ * 2;
                auVar143._12_4_ = auVar159._12_4_ * 2;
                auVar81 = vpmovsxdq_avx(auVar143);
                auVar143 = vpshufd_avx(auVar143,0xee);
                auVar143 = vpmovsxdq_avx(auVar143);
                auVar143 = vpaddq_avx(auVar135,auVar143);
                auVar81 = vpaddq_avx(auVar81,auVar117);
                uVar35 = vmovmskps_avx(auVar147);
                auVar80 = auVar143;
                if ((uVar35 & 1) != 0) {
                  auVar80 = ZEXT216(*auVar81._0_8_);
                }
                if ((uVar35 & 2) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar81._8_8_,1);
                }
                if ((uVar35 & 4) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar143._0_8_,2);
                }
                if ((uVar35 & 8) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar143._8_8_,3);
                }
                auVar143 = vpcmpeqd_avx(auVar45._0_16_,auVar45._0_16_);
                auVar162 = vpsubd_avx(auVar164._16_16_,auVar143);
                auVar25._4_4_ = auVar162._4_4_ * 2;
                auVar25._0_4_ = auVar162._0_4_ * 2;
                auVar25._8_4_ = auVar162._8_4_ * 2;
                auVar25._12_4_ = auVar162._12_4_ * 2;
                auVar81 = vpmovsxdq_avx(auVar25);
                auVar143 = vpshufd_avx(auVar25,0xee);
                auVar143 = vpmovsxdq_avx(auVar143);
                auVar143 = vpaddq_avx(auVar143,auVar118);
                auVar81 = vpaddq_avx(auVar206,auVar81);
                if ((uVar35 & 0x10) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar81._0_8_,4);
                }
                if ((uVar35 & 0x20) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar81._8_8_,5);
                }
                if ((uVar35 & 0x40) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar143._0_8_,6);
                }
                if ((char)uVar35 < '\0') {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar143._8_8_,7);
                }
                auVar143 = vpunpckhwd_avx(auVar80,___xmm_00000000000000000000000000000000);
                auVar81 = vpmovzxwd_avx(auVar80);
                auVar143 = vpcmpgtd_avx(auVar143,auVar23);
                auVar81 = vpcmpgtd_avx(auVar81,auVar23);
                auVar172._0_4_ = uVar187 & auVar81._0_4_;
                auVar172._4_4_ = uVar190 & auVar81._4_4_;
                auVar172._8_4_ = uVar191 & auVar81._8_4_;
                auVar172._12_4_ = uVar192 & auVar81._12_4_;
                auVar172._16_4_ = uVar193 & auVar143._0_4_;
                auVar172._20_4_ = uVar195 & auVar143._4_4_;
                auVar172._24_4_ = uVar196 & auVar143._8_4_;
                auVar172._28_4_ = uVar197 & auVar143._12_4_;
                auVar148 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar46._0_4_ = auVar172._0_4_ & auVar100._0_4_;
                auVar46._4_4_ = auVar172._4_4_ & auVar100._4_4_;
                auVar46._8_4_ = auVar172._8_4_ & auVar100._8_4_;
                auVar46._12_4_ = auVar172._12_4_ & auVar100._12_4_;
                auVar46._16_4_ = auVar172._16_4_ & auVar100._16_4_;
                auVar46._20_4_ = auVar172._20_4_ & auVar100._20_4_;
                auVar46._24_4_ = auVar172._24_4_ & auVar100._24_4_;
                auVar46._28_4_ = auVar172._28_4_ & auVar100._28_4_;
                uVar36 = vmovmskps_avx(auVar46);
                if ((char)iVar29 != (char)uVar36) {
                  auVar148._0_4_ = uVar187 ^ auVar172._0_4_;
                  auVar148._4_4_ = uVar190 ^ auVar172._4_4_;
                  auVar148._8_4_ = uVar191 ^ auVar172._8_4_;
                  auVar148._12_4_ = uVar192 ^ auVar172._12_4_;
                  auVar148._16_4_ = uVar193 ^ auVar172._16_4_;
                  auVar148._20_4_ = uVar195 ^ auVar172._20_4_;
                  auVar148._24_4_ = uVar196 ^ auVar172._24_4_;
                  auVar148._28_4_ = uVar197 ^ auVar172._28_4_;
                }
                auVar85 = vblendvps_avx(auVar198,auVar164,auVar172);
                auVar164._16_16_ = auVar162;
                auVar164._0_16_ = auVar159;
                auVar143 = vpcmpgtd_avx(auVar194,auVar162);
                auVar81 = vpcmpgtd_avx(auVar22,auVar159);
                auVar45._16_16_ = auVar143;
                auVar45._0_16_ = auVar81;
                uVar187 = auVar81._0_4_ & auVar148._0_4_;
                uVar190 = auVar81._4_4_ & auVar148._4_4_;
                uVar191 = auVar81._8_4_ & auVar148._8_4_;
                uVar192 = auVar81._12_4_ & auVar148._12_4_;
                uVar193 = auVar143._0_4_ & auVar148._16_4_;
                uVar195 = auVar143._4_4_ & auVar148._20_4_;
                uVar196 = auVar143._8_4_ & auVar148._24_4_;
                uVar197 = auVar143._12_4_ & auVar148._28_4_;
                auVar147._0_4_ = uVar187 & auVar100._0_4_;
                auVar147._4_4_ = uVar190 & auVar100._4_4_;
                auVar147._8_4_ = uVar191 & auVar100._8_4_;
                auVar147._12_4_ = uVar192 & auVar100._12_4_;
                auVar147._16_4_ = uVar193 & auVar100._16_4_;
                auVar147._20_4_ = uVar195 & auVar100._20_4_;
                auVar147._24_4_ = uVar196 & auVar100._24_4_;
                auVar147._28_4_ = uVar197 & auVar100._28_4_;
                iVar29 = vmovmskps_avx(auVar147);
                auVar143 = vpcmpeqd_avx(auVar162,auVar162);
                auVar203 = ZEXT1664(auVar143);
              }
            }
            auVar81 = vpcmpgtd_avx(auVar24,auVar23);
            auVar80 = vpcmpgtd_avx(auVar160,auVar23);
            auVar151._16_16_ = auVar81;
            auVar151._0_16_ = auVar80;
            auVar81 = vpcmpgtd_avx(auVar82,auVar143);
            auVar86._16_16_ = auVar84;
            auVar86._0_16_ = auVar81;
            auVar151 = auVar151 & auVar86;
            if ((((((((SUB321(auVar151 >> 0x1f,0) & 1) != 0 || (SUB321(auVar151 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar151 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar151 >> 0x7f,0) != '\0') || (SUB321(auVar151 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar151 >> 0xbf,0) != '\0') || (SUB321(auVar151 >> 0xdf,0) & 1) != 0) ||
                auVar151[0x1f] < '\0') {
              auVar198 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar198,auVar44);
              auVar83._4_4_ = __real_00000001;
              auVar83._0_4_ = __real_00000001;
              auVar83._8_4_ = __real_00000001;
              auVar83._12_4_ = __real_00000001;
              auVar81 = vpcmpgtd_avx(auVar116,auVar83);
              auVar80 = vpcmpgtd_avx(auVar21,auVar83);
              uVar187 = ~local_460 & auVar80._0_4_;
              uVar190 = ~uStack_45c & auVar80._4_4_;
              uVar191 = ~uStack_458 & auVar80._8_4_;
              uVar192 = ~uStack_454 & auVar80._12_4_;
              uVar193 = ~uStack_450 & auVar81._0_4_;
              uVar195 = ~uStack_44c & auVar81._4_4_;
              uVar196 = ~uStack_448 & auVar81._8_4_;
              uVar197 = ~uStack_444 & auVar81._12_4_;
              auVar152._0_4_ = uVar187 & auVar100._0_4_;
              auVar152._4_4_ = uVar190 & auVar100._4_4_;
              auVar152._8_4_ = uVar191 & auVar100._8_4_;
              auVar152._12_4_ = uVar192 & auVar100._12_4_;
              auVar152._16_4_ = uVar193 & auVar100._16_4_;
              auVar152._20_4_ = uVar195 & auVar100._20_4_;
              auVar152._24_4_ = uVar196 & auVar100._24_4_;
              auVar152._28_4_ = uVar197 & auVar100._28_4_;
              iVar29 = vmovmskps_avx(auVar152);
              while (iVar29 != 0) {
                iVar18 = auVar205._0_4_ + auVar143._0_4_;
                iVar20 = auVar205._4_4_ + auVar143._4_4_;
                auVar50._4_4_ = iVar20;
                auVar50._0_4_ = iVar18;
                iVar17 = auVar205._8_4_ + auVar143._8_4_;
                auVar50._8_4_ = iVar17;
                iVar19 = auVar205._12_4_ + auVar143._12_4_;
                auVar50._12_4_ = iVar19;
                auVar3._4_4_ = iVar20 * 2;
                auVar3._0_4_ = iVar18 * 2;
                auVar3._8_4_ = iVar17 * 2;
                auVar3._12_4_ = iVar19 * 2;
                auVar80 = vpmovsxdq_avx(auVar3);
                auVar81 = vpshufd_avx(auVar3,0xee);
                auVar81 = vpmovsxdq_avx(auVar81);
                auVar81 = vpaddq_avx(auVar135,auVar81);
                auVar80 = vpaddq_avx(auVar117,auVar80);
                uVar35 = vmovmskps_avx(auVar152);
                auVar116 = auVar80;
                if ((uVar35 & 1) != 0) {
                  auVar116 = ZEXT216(*auVar80._0_8_);
                }
                if ((uVar35 & 2) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._8_8_,1);
                }
                if ((uVar35 & 4) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._0_8_,2);
                }
                if ((uVar35 & 8) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._8_8_,3);
                }
                iVar18 = auVar205._16_4_ + auVar143._0_4_;
                iVar20 = auVar205._20_4_ + auVar143._4_4_;
                auVar50._20_4_ = iVar20;
                auVar50._16_4_ = iVar18;
                iVar17 = auVar205._24_4_ + auVar143._8_4_;
                auVar50._24_4_ = iVar17;
                iVar19 = auVar205._28_4_ + auVar143._12_4_;
                auVar50._28_4_ = iVar19;
                auVar4._4_4_ = iVar20 * 2;
                auVar4._0_4_ = iVar18 * 2;
                auVar4._8_4_ = iVar17 * 2;
                auVar4._12_4_ = iVar19 * 2;
                auVar80 = vpmovsxdq_avx(auVar4);
                auVar81 = vpshufd_avx(auVar4,0xee);
                auVar81 = vpmovsxdq_avx(auVar81);
                auVar81 = vpaddq_avx(auVar81,auVar118);
                auVar80 = vpaddq_avx(auVar206,auVar80);
                if ((uVar35 & 0x10) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._0_8_,4);
                }
                if ((uVar35 & 0x20) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._8_8_,5);
                }
                if ((uVar35 & 0x40) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._0_8_,6);
                }
                if ((char)uVar35 < '\0') {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._8_8_,7);
                }
                auVar81 = vpunpckhwd_avx(auVar116,___xmm_00000000000000000000000000000000);
                auVar80 = vpmovzxwd_avx(auVar116);
                auVar81 = vpcmpgtd_avx(auVar81,auVar23);
                auVar80 = vpcmpgtd_avx(auVar80,auVar23);
                auVar174._0_4_ = ~auVar80._0_4_ & uVar187;
                auVar174._4_4_ = ~auVar80._4_4_ & uVar190;
                auVar174._8_4_ = ~auVar80._8_4_ & uVar191;
                auVar174._12_4_ = ~auVar80._12_4_ & uVar192;
                auVar174._16_4_ = ~auVar81._0_4_ & uVar193;
                auVar174._20_4_ = ~auVar81._4_4_ & uVar195;
                auVar174._24_4_ = ~auVar81._8_4_ & uVar196;
                auVar174._28_4_ = ~auVar81._12_4_ & uVar197;
                auVar153 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar51._0_4_ = auVar174._0_4_ & auVar100._0_4_;
                auVar51._4_4_ = auVar174._4_4_ & auVar100._4_4_;
                auVar51._8_4_ = auVar174._8_4_ & auVar100._8_4_;
                auVar51._12_4_ = auVar174._12_4_ & auVar100._12_4_;
                auVar51._16_4_ = auVar174._16_4_ & auVar100._16_4_;
                auVar51._20_4_ = auVar174._20_4_ & auVar100._20_4_;
                auVar51._24_4_ = auVar174._24_4_ & auVar100._24_4_;
                auVar51._28_4_ = auVar174._28_4_ & auVar100._28_4_;
                uVar36 = vmovmskps_avx(auVar51);
                if ((char)iVar29 != (char)uVar36) {
                  auVar153._0_4_ = auVar174._0_4_ ^ uVar187;
                  auVar153._4_4_ = auVar174._4_4_ ^ uVar190;
                  auVar153._8_4_ = auVar174._8_4_ ^ uVar191;
                  auVar153._12_4_ = auVar174._12_4_ ^ uVar192;
                  auVar153._16_4_ = auVar174._16_4_ ^ uVar193;
                  auVar153._20_4_ = auVar174._20_4_ ^ uVar195;
                  auVar153._24_4_ = auVar174._24_4_ ^ uVar196;
                  auVar153._28_4_ = auVar174._28_4_ ^ uVar197;
                }
                auVar198 = vblendvps_avx(auVar198,auVar50,auVar174);
                auVar161._4_4_ = __real_00000002;
                auVar161._0_4_ = __real_00000002;
                auVar161._8_4_ = __real_00000002;
                auVar161._12_4_ = __real_00000002;
                auVar81 = vpcmpgtd_avx(auVar205._0_16_,auVar161);
                auVar80 = vpcmpgtd_avx(auVar205._16_16_,auVar161);
                uVar187 = auVar81._0_4_ & auVar153._0_4_;
                uVar190 = auVar81._4_4_ & auVar153._4_4_;
                uVar191 = auVar81._8_4_ & auVar153._8_4_;
                uVar192 = auVar81._12_4_ & auVar153._12_4_;
                uVar193 = auVar80._0_4_ & auVar153._16_4_;
                uVar195 = auVar80._4_4_ & auVar153._20_4_;
                uVar196 = auVar80._8_4_ & auVar153._24_4_;
                uVar197 = auVar80._12_4_ & auVar153._28_4_;
                auVar152._0_4_ = uVar187 & auVar100._0_4_;
                auVar152._4_4_ = uVar190 & auVar100._4_4_;
                auVar152._8_4_ = uVar191 & auVar100._8_4_;
                auVar152._12_4_ = uVar192 & auVar100._12_4_;
                auVar152._16_4_ = uVar193 & auVar100._16_4_;
                auVar152._20_4_ = uVar195 & auVar100._20_4_;
                auVar152._24_4_ = uVar196 & auVar100._24_4_;
                auVar152._28_4_ = uVar197 & auVar100._28_4_;
                iVar29 = vmovmskps_avx(auVar152);
                auVar205 = ZEXT3264(auVar50);
              }
            }
            local_7a0 = vblendvps_avx(local_7a0,auVar198,auVar100);
            auVar5._4_4_ = local_7a0._4_4_ * 2;
            auVar5._0_4_ = local_7a0._0_4_ * 2;
            auVar5._8_4_ = local_7a0._8_4_ * 2;
            auVar5._12_4_ = local_7a0._12_4_ * 2;
            auVar80 = vpmovsxdq_avx(auVar5);
            auVar81 = vpshufd_avx(auVar5,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar135,auVar81);
            auVar80 = vpaddq_avx(auVar117,auVar80);
            auVar116 = auVar80;
            if ((uVar38 & 1) != 0) {
              auVar116 = ZEXT216(*auVar80._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._8_8_,1);
            }
            if ((uVar38 & 4) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._0_8_,2);
            }
            if ((uVar38 & 8) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._8_8_,3);
            }
            auVar6._4_4_ = local_7a0._20_4_ * 2;
            auVar6._0_4_ = local_7a0._16_4_ * 2;
            auVar6._8_4_ = local_7a0._24_4_ * 2;
            auVar6._12_4_ = local_7a0._28_4_ * 2;
            auVar80 = vpmovsxdq_avx(auVar6);
            auVar81 = vpshufd_avx(auVar6,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar81,auVar118);
            auVar80 = vpaddq_avx(auVar206,auVar80);
            if ((uVar38 & 0x10) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._0_8_,4);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._8_8_,5);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._0_8_,6);
            }
            if (cVar27 < '\0') {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._8_8_,7);
            }
            auVar81 = vpsubd_avx(local_7a0._16_16_,auVar143);
            auVar80 = vpsubd_avx(local_7a0._0_16_,auVar143);
            auVar55._16_16_ = auVar81;
            auVar55._0_16_ = auVar80;
            local_720 = vblendvps_avx(local_720,auVar55,auVar100);
            auVar81 = vpcmpgtd_avx(ZEXT416(uVar30),local_720._16_16_);
            auVar80 = vpcmpgtd_avx(auVar102,local_720._0_16_);
            auVar107._16_16_ = auVar81;
            auVar107._0_16_ = auVar80;
            auVar85 = auVar100 & ~auVar107;
            if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0')
                  || (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
                (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
              auVar56._0_4_ = ~auVar80._0_4_ & auVar100._0_4_;
              auVar56._4_4_ = ~auVar80._4_4_ & auVar100._4_4_;
              auVar56._8_4_ = ~auVar80._8_4_ & auVar100._8_4_;
              auVar56._12_4_ = ~auVar80._12_4_ & auVar100._12_4_;
              auVar56._16_4_ = ~auVar81._0_4_ & auVar100._16_4_;
              auVar56._20_4_ = ~auVar81._4_4_ & auVar100._20_4_;
              auVar56._24_4_ = ~auVar81._8_4_ & auVar100._24_4_;
              auVar56._28_4_ = ~auVar81._12_4_ & auVar100._28_4_;
              local_720 = vblendvps_avx(local_720,auVar144,auVar56);
            }
            auVar102._4_4_ = local_720._4_4_ * 2;
            auVar102._0_4_ = local_720._0_4_ * 2;
            auVar102._8_4_ = local_720._8_4_ * 2;
            auVar102._12_4_ = local_720._12_4_ * 2;
            auVar80 = vpmovsxdq_avx(auVar102);
            auVar81 = vpshufd_avx(auVar102,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar135,auVar81);
            auVar80 = vpaddq_avx(auVar117,auVar80);
            auVar102 = auVar80;
            if ((uVar38 & 1) != 0) {
              auVar102 = ZEXT216(*auVar80._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar80._8_8_,1);
            }
            if ((uVar38 & 4) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar81._0_8_,2);
            }
            if ((uVar38 & 8) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar81._8_8_,3);
            }
            auVar135._4_4_ = local_720._20_4_ * 2;
            auVar135._0_4_ = local_720._16_4_ * 2;
            auVar135._8_4_ = local_720._24_4_ * 2;
            auVar135._12_4_ = local_720._28_4_ * 2;
            auVar80 = vpmovsxdq_avx(auVar135);
            auVar81 = vpshufd_avx(auVar135,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar81,auVar118);
            auVar80 = vpaddq_avx(auVar206,auVar80);
            if ((uVar38 & 0x10) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar80._0_8_,4);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar80._8_8_,5);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar81._0_8_,6);
            }
            if (cVar27 < '\0') {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar81._8_8_,7);
            }
            auVar80 = vpunpckhwd_avx(auVar116,(undefined1  [16])0x0);
            auVar81 = vpmovzxwd_avx(auVar116);
            auVar57._16_16_ = auVar80;
            auVar57._0_16_ = auVar81;
            auVar80 = vpunpckhwd_avx(auVar102,(undefined1  [16])0x0);
            auVar81 = vpmovzxwd_avx(auVar102);
            auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          if (param_7 != '\x01') {
            auVar102 = vpsubd_avx(auVar81,auVar57._0_16_);
            auVar81 = vpsubd_avx(auVar80,auVar57._16_16_);
            auVar118._4_4_ = __real_00000001;
            auVar118._0_4_ = __real_00000001;
            auVar118._8_4_ = __real_00000001;
            auVar118._12_4_ = __real_00000001;
            auVar81 = vpmaxsd_avx(auVar81,auVar118);
            auVar80 = vpmaxsd_avx(auVar102,auVar118);
            auVar88._16_16_ = auVar81;
            auVar88._0_16_ = auVar80;
            auVar85 = vcvtdq2ps_avx(auVar57);
            auVar198 = vsubps_avx(auVar42,auVar85);
            auVar85 = vcvtdq2ps_avx(auVar88);
            auVar85 = vdivps_avx(auVar198,auVar85);
          }
          auVar205 = ZEXT864(0);
          auVar171 = vblendvps_avx(auVar205._0_32_,auVar85,auVar100);
        }
      }
      auVar81 = local_7a0._0_16_;
      if (param_8 < 7) {
        auVar103 = vpmulld_avx(auVar81,auVar40);
        auVar40 = vpmulld_avx(local_7a0._16_16_,auVar40);
        vpmovsxdq_avx(auVar40);
        auVar40 = vpshufd_avx(auVar40,0xee);
        vpmovsxdq_avx(auVar40);
        vpmovsxdq_avx(auVar103);
        auVar103 = vpshufd_avx(auVar103,0xee);
        vpmovsxdq_avx(auVar103);
                    /* WARNING: Could not recover jumptable at 0x000140c32bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6c860 + *(int *)(&DAT_151c6c860 + uVar34 * 4)))
                  (&DAT_151c6c860 + *(int *)(&DAT_151c6c860 + uVar34 * 4),&DAT_151c6c860,
                   auVar39._0_8_,auVar158._0_8_);
        return;
      }
      auVar100 = auVar205._0_32_;
      auVar170 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar198 = ZEXT1232(ZEXT812(0));
      auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar176._0_4_ = local_7a0._0_4_ ^ local_720._0_4_;
      auVar176._4_4_ = local_7a0._4_4_ ^ local_720._4_4_;
      auVar176._8_4_ = local_7a0._8_4_ ^ local_720._8_4_;
      auVar176._12_4_ = local_7a0._12_4_ ^ local_720._12_4_;
      auVar176._16_4_ = local_7a0._16_4_ ^ local_720._16_4_;
      auVar176._20_4_ = local_7a0._20_4_ ^ local_720._20_4_;
      auVar176._24_4_ = local_7a0._24_4_ ^ local_720._24_4_;
      auVar176._28_4_ = local_7a0._28_4_ ^ local_720._28_4_;
      if (auVar176 != (undefined1  [32])0x0) {
        auVar39 = local_720._0_16_;
        auVar158 = vpcmpeqd_avx(local_7a0._16_16_,local_720._16_16_);
        if (param_8 < 7) {
          vpcmpeqd_avx(auVar81,auVar39);
          auVar103 = vpmulld_avx(auVar39,auVar40);
          auVar40 = vpmulld_avx(local_720._16_16_,auVar40);
          vpmovsxdq_avx(auVar40);
          auVar40 = vpshufd_avx(auVar40,0xee);
          vpmovsxdq_avx(auVar40);
          vpmovsxdq_avx(auVar103);
          auVar103 = vpshufd_avx(auVar103,0xee);
          vpmovsxdq_avx(auVar103);
                    /* WARNING: Could not recover jumptable at 0x000140c3328a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6c87c + *(int *)(&DAT_151c6c87c + uVar34 * 4)))
                    (&DAT_151c6c87c + *(int *)(&DAT_151c6c87c + uVar34 * 4));
          return;
        }
        auVar80 = vpcmpeqd_avx(auVar81,auVar39);
        auVar60._16_16_ = auVar143 ^ auVar158;
        auVar60._0_16_ = auVar143 ^ auVar80;
        auVar85 = vmaskmovps_avx(auVar60,auVar100);
        auVar198 = vmaskmovps_avx(auVar60,auVar100);
        auVar170 = vmaskmovps_avx(auVar60,auVar100);
        auVar81 = vpcmpeqd_avx(auVar81,auVar39);
        auVar61._16_16_ = auVar143 ^ auVar158;
        auVar61._0_16_ = auVar143 ^ auVar81;
        auVar85 = vsubps_avx(auVar85,auVar100);
        auVar198 = vsubps_avx(auVar198,auVar100);
        auVar170 = vsubps_avx(auVar170,auVar100);
        local_7e0._0_4_ = auVar171._0_4_;
        local_7e0._4_4_ = auVar171._4_4_;
        fStack_7d8 = auVar171._8_4_;
        fStack_7d4 = auVar171._12_4_;
        fStack_7d0 = auVar171._16_4_;
        fStack_7cc = auVar171._20_4_;
        fStack_7c8 = auVar171._24_4_;
        fStack_7c4 = auVar171._28_4_;
        auVar89._0_4_ = (float)local_7e0._0_4_ * auVar85._0_4_ + 0.0;
        auVar89._4_4_ = (float)local_7e0._4_4_ * auVar85._4_4_ + 0.0;
        fVar129 = auVar205._8_4_;
        auVar89._8_4_ = fVar129 + fStack_7d8 * auVar85._8_4_;
        fVar131 = auVar205._12_4_;
        auVar89._12_4_ = fVar131 + fStack_7d4 * auVar85._12_4_;
        fVar133 = auVar205._16_4_;
        auVar89._16_4_ = fVar133 + fStack_7d0 * auVar85._16_4_;
        fVar137 = auVar205._20_4_;
        auVar89._20_4_ = fVar137 + fStack_7cc * auVar85._20_4_;
        fVar139 = auVar205._24_4_;
        auVar89._24_4_ = fVar139 + fStack_7c8 * auVar85._24_4_;
        fVar141 = auVar205._28_4_;
        auVar89._28_4_ = fVar141 + fStack_7c4 * auVar85._28_4_;
        auVar101._0_4_ = (float)local_7e0._0_4_ * auVar198._0_4_ + 0.0;
        auVar101._4_4_ = (float)local_7e0._4_4_ * auVar198._4_4_ + 0.0;
        auVar101._8_4_ = fVar129 + fStack_7d8 * auVar198._8_4_;
        auVar101._12_4_ = fVar131 + fStack_7d4 * auVar198._12_4_;
        auVar101._16_4_ = fVar133 + fStack_7d0 * auVar198._16_4_;
        auVar101._20_4_ = fVar137 + fStack_7cc * auVar198._20_4_;
        auVar101._24_4_ = fVar139 + fStack_7c8 * auVar198._24_4_;
        auVar101._28_4_ = fVar141 + fStack_7c4 * auVar198._28_4_;
        auVar109._0_4_ = (float)local_7e0._0_4_ * auVar170._0_4_ + 0.0;
        auVar109._4_4_ = (float)local_7e0._4_4_ * auVar170._4_4_ + 0.0;
        auVar109._8_4_ = fVar129 + fStack_7d8 * auVar170._8_4_;
        auVar109._12_4_ = fVar131 + fStack_7d4 * auVar170._12_4_;
        auVar109._16_4_ = fVar133 + fStack_7d0 * auVar170._16_4_;
        auVar109._20_4_ = fVar137 + fStack_7cc * auVar170._20_4_;
        auVar109._24_4_ = fVar139 + fStack_7c8 * auVar170._24_4_;
        auVar109._28_4_ = fVar141 + fStack_7c4 * auVar170._28_4_;
        auVar85 = vmaskmovps_avx(auVar61,auVar89);
        auVar198 = vmaskmovps_avx(auVar61,auVar101);
        auVar170 = vmaskmovps_avx(auVar61,auVar109);
      }
      auVar62._16_16_ = auVar136;
      auVar62._0_16_ = auVar201;
      auVar90._16_16_ = auVar204;
      auVar90._0_16_ = *(undefined1 (*) [16])(param_2 + uVar32);
      local_220 = vshufps_avx(auVar90,auVar62,0x88);
      auVar110._16_16_ = auVar198._0_16_;
      auVar110._0_16_ = auVar85._0_16_;
      auVar43 = vperm2f128_avx(auVar85,auVar198,0x31);
      auVar184._16_16_ = auVar85._0_16_;
      auVar184._0_16_ = auVar198._0_16_;
      auVar171 = vshufps_avx(auVar184,auVar184,0xe1);
      auVar171 = vblendps_avx(auVar110,auVar171,0x12);
      auVar122 = vperm2f128_avx(auVar100,auVar170,0x21);
      auVar144 = vshufps_avx(auVar122,auVar122,0x14);
      auVar201._8_8_ = auVar170._0_8_;
      auVar201._0_8_ = auVar170._0_8_;
      auVar144 = vblendps_avx(ZEXT1632(auVar201),auVar144,0x48);
      local_180 = vblendps_avx(auVar171,auVar144,0xcc);
      auVar144 = vshufps_avx(auVar184,auVar184,0xeb);
      auVar171 = vshufpd_avx(auVar110,auVar110,5);
      auVar171 = vblendps_avx(auVar171,auVar144,0x12);
      auVar144 = vshufps_avx(auVar122,auVar122,0xb4);
      auVar144 = vblendps_avx(ZEXT1632(auVar170._0_16_),auVar144,0x48);
      local_160 = vblendps_avx(auVar171,auVar144,0xcc);
      auVar171 = vperm2f128_avx(auVar198,auVar85,0x31);
      auVar85 = vshufps_avx(auVar171,auVar171,0xe1);
      auVar85 = vblendps_avx(auVar43,auVar85,0x12);
      auVar198 = vunpcklps_avx(auVar170,auVar100);
      auVar198 = vblendps_avx(ZEXT1632(CONCAT88(auVar170._16_8_,auVar170._16_8_)),auVar198,0x48);
      local_140 = vblendps_avx(auVar85,auVar198,0xcc);
      auVar198 = vshufps_avx(auVar171,auVar171,0xeb);
      auVar85 = vshufpd_avx(auVar43,auVar43,5);
      auVar85 = vblendps_avx(auVar85,auVar198,0x12);
      auVar198 = vunpckhps_avx(auVar170,auVar100);
      auVar198 = vblendps_avx(ZEXT1632(auVar170._16_16_),auVar198,0x48);
      local_120 = vblendps_avx(auVar85,auVar198,0xcc);
      uVar32 = 0xff;
      do {
        uVar187 = 0;
        for (uVar26 = uVar32; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
          uVar187 = uVar187 + 1;
        }
        bVar2 = (byte)uVar187 & 0x3f;
        iVar29 = *(int *)(local_220 + (ulonglong)(uVar187 & 7) * 4);
        auVar85 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar187 << 4)));
        *(undefined1 (*) [16])(param_1 + 0x20 + (longlong)iVar29 * 0x60) = auVar85._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x30 + (longlong)iVar29 * 0x60) = auVar85._16_16_;
        uVar32 = uVar32 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
      } while (uVar32 != 0);
      uVar31 = uVar31 + 8;
      auVar143 = vpcmpeqd_avx(auVar201,auVar201);
    } while ((int)uVar31 < (int)local_670);
  }
  if ((int)param_9 <= (int)uVar31) {
    return;
  }
  auVar103 = vpshufd_avx(ZEXT416(uVar31),0);
  auVar63._16_16_ = auVar103;
  auVar63._0_16_ = auVar103;
  auVar80 = SUB3216(auVar63 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar81 = vpshufd_avx(ZEXT416(param_9),0);
  auVar102 = SUB3216(auVar63 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar201 = vpcmpgtd_avx(auVar81,auVar102);
  auVar40 = vpcmpgtd_avx(auVar81,auVar80);
  auVar103 = vpslld_avx(auVar103,3);
  auVar23 = vpand_avx(auVar40,auVar103);
  auVar103 = vpand_avx(auVar201,auVar103);
  lVar33 = auVar103._0_4_ + param_2;
  uVar190 = auVar40._0_4_;
  uVar191 = auVar40._4_4_;
  uVar192 = auVar40._8_4_;
  uVar193 = auVar40._12_4_;
  uVar195 = auVar201._0_4_;
  auVar103 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)
                                          (uVar190 &
                                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004
                                          ) + param_2 + auVar23._0_4_)),4);
  auVar103 = vpand_avx(auVar40,auVar103);
  uVar31 = *(uint *)(param_3 + auVar103._0_4_);
  uVar187 = *(uint *)((ulonglong)
                      (uVar190 &
                      ___ymm_0000000400000004000000040000000400000004000000040000000400000004) +
                     param_3 + auVar103._0_4_);
  auVar39 = ZEXT416(uVar187);
  auVar103 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)(uVar195 & _UNK_150b519f0) + lVar33)),4);
  auVar103 = vpand_avx(auVar201,auVar103);
  uVar30 = *(uint *)(param_3 + auVar103._0_4_);
  uVar38 = *(uint *)((ulonglong)(uVar195 & _UNK_150b50d50) + param_3 + auVar103._0_4_);
  auVar103 = vpmovsxdq_avx(ZEXT416(uVar31));
  auVar40 = vpshufd_avx(ZEXT416(uVar31),0xee);
  auVar40 = vpmovsxdq_avx(auVar40);
  auVar163 = vpshufd_avx(ZEXT416(-(uint)(param_8 == 3)),0);
  auVar136._4_4_ = __real_00000001;
  auVar136._0_4_ = __real_00000001;
  auVar136._8_4_ = __real_00000001;
  auVar136._12_4_ = __real_00000001;
  auVar204 = vpcmpgtd_avx(ZEXT416(uVar38),auVar136);
  auVar136 = vpcmpgtd_avx(auVar39,auVar136);
  auVar156._0_4_ = auVar136._0_4_ & auVar163._0_4_;
  auVar156._4_4_ = auVar136._4_4_ & auVar163._4_4_;
  auVar156._8_4_ = auVar136._8_4_ & auVar163._8_4_;
  auVar156._12_4_ = auVar136._12_4_ & auVar163._12_4_;
  auVar156._16_4_ = auVar204._0_4_ & auVar163._0_4_;
  auVar156._20_4_ = auVar204._4_4_ & auVar163._4_4_;
  auVar156._24_4_ = auVar204._8_4_ & auVar163._8_4_;
  auVar156._28_4_ = auVar204._12_4_ & auVar163._12_4_;
  auVar41 = vblendvps_avx(ZEXT1232(ZEXT812(0)),
                          ___ymm_0000001800000018000000180000001800000018000000180000001800000018,
                          auVar156);
  auVar143 = auVar41._0_16_;
  auVar163 = vpmovsxdq_avx(auVar143);
  auVar103 = vpaddq_avx(auVar163,auVar103);
  auVar163 = vshufpd_avx(auVar143,auVar143,3);
  auVar163 = vpmovsxdq_avx(auVar163);
  auVar40 = vpaddq_avx(auVar163,auVar40);
  auVar163._0_4_ = uVar190 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000
  ;
  auVar163._4_4_ = uVar191 & _UNK_150b519c4;
  auVar163._8_4_ = uVar192 & _UNK_150b519c8;
  auVar163._12_4_ = uVar193 & _UNK_150b519cc;
  vextractps_avx(auVar163,1);
  vextractps_avx(auVar163,2);
  vextractps_avx(auVar163,3);
  auVar163 = vpmovsxdq_avx(ZEXT416(uVar30));
  auVar158 = auVar41._16_16_;
  auVar143 = vpmovsxdq_avx(auVar158);
  auVar163 = vpaddq_avx(auVar143,auVar163);
  auVar143 = vpshufd_avx(ZEXT416(uVar30),0xee);
  auVar143 = vpmovsxdq_avx(auVar143);
  auVar158 = vshufpd_avx(auVar158,auVar158,3);
  auVar158 = vpmovsxdq_avx(auVar158);
  auVar143 = vpaddq_avx(auVar158,auVar143);
  auVar158 = vpshufd_avx(ZEXT416(~((0.0 < param_6) - 1)),0);
  local_660._0_4_ = auVar136._0_4_ & auVar158._0_4_;
  local_660._4_4_ = auVar136._4_4_ & auVar158._4_4_;
  local_660._8_4_ = auVar136._8_4_ & auVar158._8_4_;
  local_660._12_4_ = auVar136._12_4_ & auVar158._12_4_;
  local_660._16_4_ = auVar204._0_4_ & auVar158._0_4_;
  local_660._20_4_ = auVar204._4_4_ & auVar158._4_4_;
  local_660._24_4_ = auVar204._8_4_ & auVar158._8_4_;
  local_660._28_4_ = auVar204._12_4_ & auVar158._12_4_;
  uVar31 = *(uint *)(param_2 + auVar23._0_4_);
  auVar23 = vpshufd_avx(ZEXT416((uint)(iVar28 * iVar1)),0);
  auVar157._0_4_ = uVar190 & local_660._0_4_;
  auVar157._4_4_ = uVar191 & local_660._4_4_;
  auVar157._8_4_ = uVar192 & local_660._8_4_;
  auVar157._12_4_ = uVar193 & local_660._12_4_;
  auVar157._16_4_ = uVar195 & local_660._16_4_;
  auVar157._20_4_ = auVar201._4_4_ & local_660._20_4_;
  auVar157._24_4_ = auVar201._8_4_ & local_660._24_4_;
  auVar157._28_4_ = auVar201._12_4_ & local_660._28_4_;
  uVar30 = vmovmskps_avx(auVar157);
  if (uVar30 == 0) {
    auVar41 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar42 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  }
  else {
    auVar136 = vpcmpeqd_avx(ZEXT416(uVar31),ZEXT416(uVar31));
    auVar204._0_4_ = uVar38 + auVar136._0_4_;
    auVar204._4_4_ = auVar136._4_4_;
    auVar204._8_4_ = auVar136._8_4_;
    auVar204._12_4_ = auVar136._12_4_;
    auVar158._0_4_ = uVar187 + auVar136._0_4_;
    auVar158._4_4_ = auVar136._4_4_;
    auVar158._8_4_ = auVar136._8_4_;
    auVar158._12_4_ = auVar136._12_4_;
    auVar189._16_16_ = auVar204;
    auVar189._0_16_ = auVar158;
    if (param_6 < __real_3f800000) {
      auVar136 = vpmulld_avx(auVar39,auVar23);
      auVar84 = vpmulld_avx(ZEXT416(uVar38),auVar23);
      auVar116 = vpmovsxdq_avx(auVar84);
      auVar84 = vpshufd_avx(auVar84,0xee);
      auVar84 = vpmovsxdq_avx(auVar84);
      auVar194 = vpmovsxdq_avx(auVar136);
      auVar136 = vpshufd_avx(auVar136,0xee);
      auVar136 = vpmovsxdq_avx(auVar136);
      auVar119._8_8_ = 0;
      auVar119._0_8_ = param_4 + 3;
      auVar82 = vpshufd_avx(auVar119,0x44);
      auVar136 = vpaddq_avx(auVar82,auVar136);
      auVar40 = vpaddq_avx(auVar40,auVar136);
      auVar136 = vpaddq_avx(auVar82,auVar194);
      auVar103 = vpaddq_avx(auVar103,auVar136);
      auVar136 = vpaddq_avx(auVar82,auVar84);
      auVar143 = vpaddq_avx(auVar136,auVar143);
      auVar136 = vpaddq_avx(auVar82,auVar116);
      auVar163 = vpaddq_avx(auVar136,auVar163);
      auVar120._0_4_ = auVar163._0_4_ & (uint)__real_fffffffffffffffc;
      auVar120._4_4_ = auVar163._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar120._8_4_ = auVar163._8_4_ & (uint)__real_fffffffffffffffc;
      auVar120._12_4_ = auVar163._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar123._16_4_ = auVar143._0_4_ & (uint)__real_fffffffffffffffc;
      auVar123._0_16_ = auVar120;
      auVar123._20_4_ = auVar143._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar123._24_4_ = auVar143._8_4_ & (uint)__real_fffffffffffffffc;
      auVar123._28_4_ = auVar143._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar183._0_4_ = auVar103._0_4_ & (uint)__real_fffffffffffffffc;
      auVar183._4_4_ = auVar103._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar183._8_4_ = auVar103._8_4_ & (uint)__real_fffffffffffffffc;
      auVar183._12_4_ = auVar103._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar185._16_4_ = auVar40._0_4_ & (uint)__real_fffffffffffffffc;
      auVar185._0_16_ = auVar183;
      auVar185._20_4_ = auVar40._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar185._24_4_ = auVar40._8_4_ & (uint)__real_fffffffffffffffc;
      auVar185._28_4_ = auVar40._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar103 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
      auVar41 = vcvtdq2ps_avx(auVar189);
      param_6 = param_6 * (float)(param_5 + -1);
      uVar196 = (uint)param_6;
      uVar187 = 0;
      if (0 < (int)uVar196) {
        uVar187 = uVar196;
      }
      if ((int)(param_5 - 2U) < (int)uVar187) {
        uVar187 = param_5 - 2U;
      }
      auVar40._0_4_ = (int)(auVar103._0_4_ * auVar41._0_4_);
      auVar40._4_4_ = (int)(auVar103._4_4_ * auVar41._4_4_);
      auVar40._8_4_ = (int)(auVar103._8_4_ * auVar41._8_4_);
      auVar40._12_4_ = (int)(auVar103._12_4_ * auVar41._12_4_);
      auVar64._16_4_ = (int)(auVar103._0_4_ * auVar41._16_4_);
      auVar64._0_16_ = auVar40;
      auVar64._20_4_ = (int)(auVar103._4_4_ * auVar41._20_4_);
      auVar64._24_4_ = (int)(auVar103._8_4_ * auVar41._24_4_);
      auVar64._28_4_ = (int)(auVar103._12_4_ * auVar41._28_4_);
      auVar103 = vpmaxsd_avx(auVar64._16_16_,ZEXT416(0) << 0x20);
      auVar40 = vpmaxsd_avx(auVar40,ZEXT416(0) << 0x20);
      auVar163 = vpminsd_avx(auVar103,auVar204);
      auVar143 = vpminsd_avx(auVar40,auVar158);
      auVar91._16_16_ = auVar163;
      auVar91._0_16_ = auVar143;
      auVar205 = ZEXT3264(auVar91);
      auVar136 = auVar123._16_16_;
      auVar116 = auVar185._16_16_;
      cVar27 = (char)uVar30;
      if (param_5 < 0x100) {
        auVar194 = vpmovsxdq_avx(auVar143);
        auVar84 = vpshufd_avx(auVar143,0xee);
        auVar84 = vpmovsxdq_avx(auVar84);
        auVar84 = vpaddq_avx(auVar116,auVar84);
        auVar194 = vpaddq_avx(auVar183,auVar194);
        auVar82 = auVar194;
        if ((uVar30 & 1) != 0) {
          auVar82 = ZEXT116(*auVar194._0_8_);
        }
        auVar22 = vpmovsxdq_avx(auVar163);
        auVar21 = vpshufd_avx(auVar163,0xee);
        if ((uVar30 & 2) != 0) {
          auVar194 = vpinsrb_avx(auVar82,(uint)*auVar194._8_8_,1);
          auVar82 = vpblendw_avx(auVar194,auVar82,0xe);
        }
        auVar21 = vpmovsxdq_avx(auVar21);
        auVar194 = vpaddq_avx(auVar22,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar22 = vpaddq_avx(auVar21,auVar136);
        }
        else {
          auVar22 = vpmovzxwd_avx(auVar82);
          auVar22 = vpinsrb_avx(auVar22,(uint)*auVar84._0_8_,2);
          auVar22 = vpinsrb_avx(auVar22,(uint)auVar82[3],3);
          auVar82 = vpblendw_avx(auVar22,auVar82,0xc);
          auVar22 = vpaddq_avx(auVar21,auVar136);
        }
        if ((uVar30 & 8) != 0) {
          auVar21 = vpmovzxwd_avx(auVar82);
          auVar21 = vpinsrb_avx(auVar21,(uint)auVar82[2],2);
          auVar84 = vpinsrb_avx(auVar21,(uint)*auVar84._8_8_,3);
          auVar82 = vpblendw_avx(auVar84,auVar82,0xc);
        }
        auVar84 = auVar194;
        if ((uVar30 & 0x10) != 0) {
          auVar84 = vpshufb_avx(auVar82,___xmm_80800706808005048080030203020100);
          auVar84 = vpinsrb_avx(auVar84,(uint)*auVar194._0_8_,4);
          auVar84 = vpinsrb_avx(auVar84,(uint)auVar82[5],5);
          auVar82 = vpblendw_avx(auVar84,auVar82,8);
        }
        if ((uVar30 & 0x20) != 0) {
          auVar84 = vpshufb_avx(auVar82,___xmm_80800706808005048080030403020100);
          auVar84 = vpinsrb_avx(auVar84,(uint)*auVar194._8_8_,5);
          auVar82 = vpblendw_avx(auVar84,auVar82,8);
        }
        if ((uVar30 & 0x40) != 0) {
          auVar84 = vpshufb_avx(auVar82,___xmm_80800706808005048080050403020100);
          auVar84 = vpinsrb_avx(auVar84,(uint)*auVar22._0_8_,6);
          auVar82 = vpinsrb_avx(auVar84,(uint)auVar82[7],7);
        }
        if (cVar27 < '\0') {
          auVar194 = vpshufb_avx(auVar82,___xmm_80800706808005048006050403020100);
          auVar82 = vpinsrb_avx(auVar194,(uint)*auVar22._8_8_,7);
        }
        auVar22 = vpmovzxbd_avx(auVar82);
        auVar194 = vpshufd_avx(auVar82,0x55);
        auVar21 = vpmovzxbd_avx(auVar194);
        auVar159 = vpshufd_avx(ZEXT416(uVar187),0);
        auVar194 = vpcmpgtd_avx(auVar21,auVar159);
        auVar84 = vpcmpeqd_avx(auVar84,auVar84);
        auVar117 = auVar194 ^ auVar84;
        auVar82 = vpcmpgtd_avx(auVar22,auVar159);
        auVar84 = auVar82 ^ auVar84;
        auVar125._16_16_ = auVar117;
        auVar125._0_16_ = auVar84;
        auVar71._16_16_ = auVar194;
        auVar71._0_16_ = auVar82;
        auVar42 = auVar157 & ~auVar71;
        local_6c0 = auVar84._0_4_;
        uStack_6bc = auVar84._4_4_;
        uStack_6b8 = auVar84._8_4_;
        uStack_6b4 = auVar84._12_4_;
        uStack_6b0 = auVar117._0_4_;
        uStack_6ac = auVar117._4_4_;
        uStack_6a8 = auVar117._8_4_;
        uStack_6a4 = auVar117._12_4_;
        auVar41 = auVar91;
        if ((((((((SUB321(auVar42 >> 0x1f,0) & 1) != 0 || (SUB321(auVar42 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar42 >> 0x5f,0) & 1) != 0) || SUB321(auVar42 >> 0x7f,0) != '\0') ||
              (SUB321(auVar42 >> 0x9f,0) & 1) != 0) || SUB321(auVar42 >> 0xbf,0) != '\0') ||
            (SUB321(auVar42 >> 0xdf,0) & 1) != 0) || auVar42[0x1f] < '\0') {
          auVar84 = vpcmpgtd_avx(auVar21,auVar159);
          auVar194 = vpcmpgtd_avx(auVar22,auVar159);
          auVar72._16_16_ = auVar84;
          auVar72._0_16_ = auVar194;
          auVar41 = vblendvps_avx(auVar189,auVar91,auVar72);
          auVar103 = vpcmpgtd_avx(auVar204,auVar103);
          auVar40 = vpcmpgtd_avx(auVar158,auVar40);
          uVar187 = auVar40._0_4_ & local_6c0;
          uVar196 = auVar40._4_4_ & uStack_6bc;
          uVar197 = auVar40._8_4_ & uStack_6b8;
          uVar35 = auVar40._12_4_ & uStack_6b4;
          uVar179 = auVar103._0_4_ & uStack_6b0;
          uVar180 = auVar103._4_4_ & uStack_6ac;
          uVar181 = auVar103._8_4_ & uStack_6a8;
          uVar182 = auVar103._12_4_ & uStack_6a4;
          auVar126._0_4_ = uVar187 & auVar157._0_4_;
          auVar126._4_4_ = uVar196 & auVar157._4_4_;
          auVar126._8_4_ = uVar197 & auVar157._8_4_;
          auVar126._12_4_ = uVar35 & auVar157._12_4_;
          auVar126._16_4_ = uVar179 & auVar157._16_4_;
          auVar126._20_4_ = uVar180 & auVar157._20_4_;
          auVar126._24_4_ = uVar181 & auVar157._24_4_;
          auVar126._28_4_ = uVar182 & auVar157._28_4_;
          iVar28 = vmovmskps_avx(auVar126);
          if (iVar28 != 0) {
            auVar103 = vpcmpeqd_avx(auVar40,auVar40);
            do {
              auVar82 = vpsubd_avx(auVar91._0_16_,auVar103);
              auVar84 = vpmovsxdq_avx(auVar82);
              auVar40 = vpshufd_avx(auVar82,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar116,auVar40);
              auVar84 = vpaddq_avx(auVar183,auVar84);
              uVar37 = vmovmskps_avx(auVar126);
              auVar194 = auVar84;
              if ((uVar37 & 1) != 0) {
                auVar194 = ZEXT116(*auVar84._0_8_);
              }
              if ((uVar37 & 2) != 0) {
                auVar84 = vpinsrb_avx(auVar194,(uint)*auVar84._8_8_,1);
                auVar194 = vpblendw_avx(auVar84,auVar194,0xe);
              }
              if ((uVar37 & 4) != 0) {
                auVar84 = vpmovzxwd_avx(auVar194);
                auVar84 = vpinsrb_avx(auVar84,(uint)*auVar40._0_8_,2);
                auVar84 = vpinsrb_avx(auVar84,(uint)auVar194[3],3);
                auVar194 = vpblendw_avx(auVar84,auVar194,0xc);
              }
              if ((uVar37 & 8) != 0) {
                auVar84 = vpmovzxwd_avx(auVar194);
                auVar84 = vpinsrb_avx(auVar84,(uint)auVar194[2],2);
                auVar40 = vpinsrb_avx(auVar84,(uint)*auVar40._8_8_,3);
                auVar194 = vpblendw_avx(auVar40,auVar194,0xc);
              }
              auVar117 = vpsubd_avx(auVar91._16_16_,auVar103);
              auVar84 = vpmovsxdq_avx(auVar117);
              auVar40 = vpshufd_avx(auVar117,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar40,auVar136);
              auVar84 = vpaddq_avx(auVar84,auVar120);
              if ((uVar37 & 0x10) != 0) {
                auVar135 = vpshufb_avx(auVar194,___xmm_80800706808005048080030203020100);
                auVar135 = vpinsrb_avx(auVar135,(uint)*auVar84._0_8_,4);
                auVar135 = vpinsrb_avx(auVar135,(uint)auVar194[5],5);
                auVar194 = vpblendw_avx(auVar135,auVar194,8);
              }
              if ((uVar37 & 0x20) != 0) {
                auVar135 = vpshufb_avx(auVar194,___xmm_80800706808005048080030403020100);
                auVar84 = vpinsrb_avx(auVar135,(uint)*auVar84._8_8_,5);
                auVar194 = vpblendw_avx(auVar84,auVar194,8);
              }
              if ((uVar37 & 0x40) != 0) {
                auVar84 = vpshufb_avx(auVar194,___xmm_80800706808005048080050403020100);
                auVar84 = vpinsrb_avx(auVar84,(uint)*auVar40._0_8_,6);
                auVar194 = vpinsrb_avx(auVar84,(uint)auVar194[7],7);
              }
              if ((char)uVar37 < '\0') {
                auVar84 = vpshufb_avx(auVar194,___xmm_80800706808005048006050403020100);
                auVar194 = vpinsrb_avx(auVar84,(uint)*auVar40._8_8_,7);
              }
              auVar84 = vpmovzxbd_avx(auVar194);
              auVar40 = vpshufd_avx(auVar194,0x55);
              auVar40 = vpmovzxbd_avx(auVar40);
              auVar40 = vpcmpgtd_avx(auVar40,auVar159);
              auVar84 = vpcmpgtd_avx(auVar84,auVar159);
              auVar177._0_4_ = uVar187 & auVar84._0_4_;
              auVar177._4_4_ = uVar196 & auVar84._4_4_;
              auVar177._8_4_ = uVar197 & auVar84._8_4_;
              auVar177._12_4_ = uVar35 & auVar84._12_4_;
              auVar177._16_4_ = uVar179 & auVar40._0_4_;
              auVar177._20_4_ = uVar180 & auVar40._4_4_;
              auVar177._24_4_ = uVar181 & auVar40._8_4_;
              auVar177._28_4_ = uVar182 & auVar40._12_4_;
              uVar37 = 0;
              uVar130 = 0;
              uVar132 = 0;
              uVar134 = 0;
              uVar138 = 0;
              uVar140 = 0;
              uVar142 = 0;
              uVar115 = 0;
              auVar210._0_4_ = auVar177._0_4_ & auVar157._0_4_;
              auVar210._4_4_ = auVar177._4_4_ & auVar157._4_4_;
              auVar210._8_4_ = auVar177._8_4_ & auVar157._8_4_;
              auVar210._12_4_ = auVar177._12_4_ & auVar157._12_4_;
              auVar210._16_4_ = auVar177._16_4_ & auVar157._16_4_;
              auVar210._20_4_ = auVar177._20_4_ & auVar157._20_4_;
              auVar210._24_4_ = auVar177._24_4_ & auVar157._24_4_;
              auVar210._28_4_ = auVar177._28_4_ & auVar157._28_4_;
              uVar36 = vmovmskps_avx(auVar210);
              if ((char)iVar28 != (char)uVar36) {
                uVar115 = uVar187 ^ auVar177._0_4_;
                uVar37 = uVar196 ^ auVar177._4_4_;
                uVar130 = uVar197 ^ auVar177._8_4_;
                uVar132 = uVar35 ^ auVar177._12_4_;
                uVar134 = uVar179 ^ auVar177._16_4_;
                uVar138 = uVar180 ^ auVar177._20_4_;
                uVar140 = uVar181 ^ auVar177._24_4_;
                uVar142 = uVar182 ^ auVar177._28_4_;
              }
              auVar41 = vblendvps_avx(auVar41,auVar91,auVar177);
              auVar91._16_16_ = auVar117;
              auVar91._0_16_ = auVar82;
              auVar40 = vpcmpgtd_avx(auVar204,auVar117);
              auVar84 = vpcmpgtd_avx(auVar158,auVar82);
              uVar187 = auVar84._0_4_ & uVar115;
              uVar196 = auVar84._4_4_ & uVar37;
              uVar197 = auVar84._8_4_ & uVar130;
              uVar35 = auVar84._12_4_ & uVar132;
              uVar179 = auVar40._0_4_ & uVar134;
              uVar180 = auVar40._4_4_ & uVar138;
              uVar181 = auVar40._8_4_ & uVar140;
              uVar182 = auVar40._12_4_ & uVar142;
              auVar126._0_4_ = uVar187 & auVar157._0_4_;
              auVar126._4_4_ = uVar196 & auVar157._4_4_;
              auVar126._8_4_ = uVar197 & auVar157._8_4_;
              auVar126._12_4_ = uVar35 & auVar157._12_4_;
              auVar126._16_4_ = uVar179 & auVar157._16_4_;
              auVar126._20_4_ = uVar180 & auVar157._20_4_;
              auVar126._24_4_ = uVar181 & auVar157._24_4_;
              auVar126._28_4_ = uVar182 & auVar157._28_4_;
              iVar28 = vmovmskps_avx(auVar126);
            } while (iVar28 != 0);
          }
        }
        auVar103 = vpcmpgtd_avx(auVar21,auVar159);
        auVar40 = vpcmpgtd_avx(auVar22,auVar159);
        auVar73._16_16_ = auVar103;
        auVar73._0_16_ = auVar40;
        auVar73 = auVar73 & auVar157;
        if ((((((((SUB321(auVar73 >> 0x1f,0) & 1) != 0 || (SUB321(auVar73 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar73 >> 0x5f,0) & 1) != 0) || SUB321(auVar73 >> 0x7f,0) != '\0') ||
              (SUB321(auVar73 >> 0x9f,0) & 1) != 0) || SUB321(auVar73 >> 0xbf,0) != '\0') ||
            (SUB321(auVar73 >> 0xdf,0) & 1) != 0) || auVar73[0x1f] < '\0') {
          auVar41 = vblendvps_avx(ZEXT832(0) << 0x20,auVar41,auVar125);
          auVar105._4_4_ = __real_00000001;
          auVar105._0_4_ = __real_00000001;
          auVar105._8_4_ = __real_00000001;
          auVar105._12_4_ = __real_00000001;
          auVar103 = vpcmpgtd_avx(auVar163,auVar105);
          auVar40 = vpcmpgtd_avx(auVar143,auVar105);
          uVar187 = ~local_6c0 & auVar40._0_4_;
          uVar196 = ~uStack_6bc & auVar40._4_4_;
          uVar197 = ~uStack_6b8 & auVar40._8_4_;
          uVar35 = ~uStack_6b4 & auVar40._12_4_;
          uVar179 = ~uStack_6b0 & auVar103._0_4_;
          uVar180 = ~uStack_6ac & auVar103._4_4_;
          uVar181 = ~uStack_6a8 & auVar103._8_4_;
          uVar182 = ~uStack_6a4 & auVar103._12_4_;
          auVar127._0_4_ = uVar187 & auVar157._0_4_;
          auVar127._4_4_ = uVar196 & auVar157._4_4_;
          auVar127._8_4_ = uVar197 & auVar157._8_4_;
          auVar127._12_4_ = uVar35 & auVar157._12_4_;
          auVar127._16_4_ = uVar179 & auVar157._16_4_;
          auVar127._20_4_ = uVar180 & auVar157._20_4_;
          auVar127._24_4_ = uVar181 & auVar157._24_4_;
          auVar127._28_4_ = uVar182 & auVar157._28_4_;
          iVar28 = vmovmskps_avx(auVar127);
          if (iVar28 != 0) {
            auVar103 = vpcmpeqd_avx(auVar40,auVar40);
            auVar106._4_4_ = __real_00000002;
            auVar106._0_4_ = __real_00000002;
            auVar106._8_4_ = __real_00000002;
            auVar106._12_4_ = __real_00000002;
            do {
              auVar15._0_4_ = auVar205._0_4_ + auVar103._0_4_;
              auVar15._4_4_ = auVar205._4_4_ + auVar103._4_4_;
              auVar15._8_4_ = auVar205._8_4_ + auVar103._8_4_;
              auVar15._12_4_ = auVar205._12_4_ + auVar103._12_4_;
              auVar163 = vpmovsxdq_avx(auVar15);
              auVar40 = vpshufd_avx(auVar15,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar116,auVar40);
              auVar163 = vpaddq_avx(auVar183,auVar163);
              uVar37 = vmovmskps_avx(auVar127);
              auVar143 = auVar163;
              if ((uVar37 & 1) != 0) {
                auVar143 = ZEXT116(*auVar163._0_8_);
              }
              if ((uVar37 & 2) != 0) {
                auVar163 = vpinsrb_avx(auVar143,(uint)*auVar163._8_8_,1);
                auVar143 = vpblendw_avx(auVar163,auVar143,0xe);
              }
              if ((uVar37 & 4) != 0) {
                auVar163 = vpmovzxwd_avx(auVar143);
                auVar163 = vpinsrb_avx(auVar163,(uint)*auVar40._0_8_,2);
                auVar163 = vpinsrb_avx(auVar163,(uint)auVar143[3],3);
                auVar143 = vpblendw_avx(auVar163,auVar143,0xc);
              }
              if ((uVar37 & 8) != 0) {
                auVar163 = vpmovzxwd_avx(auVar143);
                auVar163 = vpinsrb_avx(auVar163,(uint)auVar143[2],2);
                auVar40 = vpinsrb_avx(auVar163,(uint)*auVar40._8_8_,3);
                auVar143 = vpblendw_avx(auVar40,auVar143,0xc);
              }
              auVar16._0_4_ = auVar205._16_4_ + auVar103._0_4_;
              auVar16._4_4_ = auVar205._20_4_ + auVar103._4_4_;
              auVar16._8_4_ = auVar205._24_4_ + auVar103._8_4_;
              auVar16._12_4_ = auVar205._28_4_ + auVar103._12_4_;
              auVar163 = vpmovsxdq_avx(auVar16);
              auVar40 = vpshufd_avx(auVar16,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar40,auVar136);
              auVar163 = vpaddq_avx(auVar163,auVar120);
              if ((uVar37 & 0x10) != 0) {
                auVar204 = vpshufb_avx(auVar143,___xmm_80800706808005048080030203020100);
                auVar204 = vpinsrb_avx(auVar204,(uint)*auVar163._0_8_,4);
                auVar204 = vpinsrb_avx(auVar204,(uint)auVar143[5],5);
                auVar143 = vpblendw_avx(auVar204,auVar143,8);
              }
              if ((uVar37 & 0x20) != 0) {
                auVar204 = vpshufb_avx(auVar143,___xmm_80800706808005048080030403020100);
                auVar163 = vpinsrb_avx(auVar204,(uint)*auVar163._8_8_,5);
                auVar143 = vpblendw_avx(auVar163,auVar143,8);
              }
              if ((uVar37 & 0x40) != 0) {
                auVar163 = vpshufb_avx(auVar143,___xmm_80800706808005048080050403020100);
                auVar163 = vpinsrb_avx(auVar163,(uint)*auVar40._0_8_,6);
                auVar143 = vpinsrb_avx(auVar163,(uint)auVar143[7],7);
              }
              if ((char)uVar37 < '\0') {
                auVar163 = vpshufb_avx(auVar143,___xmm_80800706808005048006050403020100);
                auVar143 = vpinsrb_avx(auVar163,(uint)*auVar40._8_8_,7);
              }
              auVar163 = vpmovzxbd_avx(auVar143);
              auVar40 = vpshufd_avx(auVar143,0x55);
              auVar40 = vpmovzxbd_avx(auVar40);
              auVar40 = vpcmpgtd_avx(auVar40,auVar159);
              auVar163 = vpcmpgtd_avx(auVar163,auVar159);
              auVar178._0_4_ = ~auVar163._0_4_ & uVar187;
              auVar178._4_4_ = ~auVar163._4_4_ & uVar196;
              auVar178._8_4_ = ~auVar163._8_4_ & uVar197;
              auVar178._12_4_ = ~auVar163._12_4_ & uVar35;
              auVar178._16_4_ = ~auVar40._0_4_ & uVar179;
              auVar178._20_4_ = ~auVar40._4_4_ & uVar180;
              auVar178._24_4_ = ~auVar40._8_4_ & uVar181;
              auVar178._28_4_ = ~auVar40._12_4_ & uVar182;
              uVar37 = 0;
              uVar130 = 0;
              uVar132 = 0;
              uVar134 = 0;
              uVar138 = 0;
              uVar140 = 0;
              uVar142 = 0;
              uVar115 = 0;
              auVar211._0_4_ = auVar178._0_4_ & auVar157._0_4_;
              auVar211._4_4_ = auVar178._4_4_ & auVar157._4_4_;
              auVar211._8_4_ = auVar178._8_4_ & auVar157._8_4_;
              auVar211._12_4_ = auVar178._12_4_ & auVar157._12_4_;
              auVar211._16_4_ = auVar178._16_4_ & auVar157._16_4_;
              auVar211._20_4_ = auVar178._20_4_ & auVar157._20_4_;
              auVar211._24_4_ = auVar178._24_4_ & auVar157._24_4_;
              auVar211._28_4_ = auVar178._28_4_ & auVar157._28_4_;
              uVar36 = vmovmskps_avx(auVar211);
              if ((char)iVar28 != (char)uVar36) {
                uVar115 = uVar187 ^ auVar178._0_4_;
                uVar37 = uVar196 ^ auVar178._4_4_;
                uVar130 = uVar197 ^ auVar178._8_4_;
                uVar132 = uVar35 ^ auVar178._12_4_;
                uVar134 = uVar179 ^ auVar178._16_4_;
                uVar138 = uVar180 ^ auVar178._20_4_;
                uVar140 = uVar181 ^ auVar178._24_4_;
                uVar142 = uVar182 ^ auVar178._28_4_;
              }
              auVar168._16_16_ = auVar16;
              auVar168._0_16_ = auVar15;
              auVar41 = vblendvps_avx(auVar41,auVar168,auVar178);
              auVar40 = vpcmpgtd_avx(auVar205._0_16_,auVar106);
              auVar163 = vpcmpgtd_avx(auVar205._16_16_,auVar106);
              uVar187 = auVar40._0_4_ & uVar115;
              uVar196 = auVar40._4_4_ & uVar37;
              uVar197 = auVar40._8_4_ & uVar130;
              uVar35 = auVar40._12_4_ & uVar132;
              uVar179 = auVar163._0_4_ & uVar134;
              uVar180 = auVar163._4_4_ & uVar138;
              uVar181 = auVar163._8_4_ & uVar140;
              uVar182 = auVar163._12_4_ & uVar142;
              auVar127._0_4_ = uVar187 & auVar157._0_4_;
              auVar127._4_4_ = uVar196 & auVar157._4_4_;
              auVar127._8_4_ = uVar197 & auVar157._8_4_;
              auVar127._12_4_ = uVar35 & auVar157._12_4_;
              auVar127._16_4_ = uVar179 & auVar157._16_4_;
              auVar127._20_4_ = uVar180 & auVar157._20_4_;
              auVar127._24_4_ = uVar181 & auVar157._24_4_;
              auVar127._28_4_ = uVar182 & auVar157._28_4_;
              iVar28 = vmovmskps_avx(auVar127);
              auVar205 = ZEXT3264(auVar168);
            } while (iVar28 != 0);
          }
        }
        auVar41 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar41,auVar157);
        auVar143 = auVar41._0_16_;
        auVar40 = vpmovsxdq_avx(auVar143);
        auVar103 = vshufpd_avx(auVar143,auVar143,3);
        auVar103 = vpmovsxdq_avx(auVar103);
        auVar204 = auVar41._16_16_;
        auVar103 = vpaddq_avx(auVar116,auVar103);
        auVar40 = vpaddq_avx(auVar183,auVar40);
        auVar163 = auVar103;
        if ((uVar30 & 1) != 0) {
          auVar163 = ZEXT116(*auVar40._0_8_);
        }
        auVar158 = vpmovsxdq_avx(auVar204);
        auVar84 = vshufpd_avx(auVar204,auVar204,3);
        if ((uVar30 & 2) != 0) {
          auVar40 = vpinsrb_avx(auVar163,(uint)*auVar40._8_8_,1);
          auVar163 = vpblendw_avx(auVar40,auVar163,0xe);
        }
        auVar84 = vpmovsxdq_avx(auVar84);
        auVar40 = vpaddq_avx(auVar158,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar158 = vpaddq_avx(auVar84,auVar136);
          if ((uVar30 & 8) == 0) goto LAB_140c359f5;
LAB_140c37750:
          auVar84 = vpmovzxwd_avx(auVar163);
          auVar84 = vpinsrb_avx(auVar84,(uint)auVar163[2],2);
          auVar103 = vpinsrb_avx(auVar84,(uint)*auVar103._8_8_,3);
          auVar163 = vpblendw_avx(auVar103,auVar163,0xc);
          auVar95._16_16_ = auVar158;
          auVar95._0_16_ = auVar40;
          if ((uVar30 & 0x10) != 0) goto LAB_140c37783;
LAB_140c35a05:
          if ((uVar30 & 0x20) == 0) goto LAB_140c35a0f;
LAB_140c377b3:
          auVar103 = vpshufb_avx(auVar163,___xmm_80800706808005048080030403020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar95._8_8_,5);
          auVar163 = vpblendw_avx(auVar103,auVar163,8);
          if ((uVar30 & 0x40) != 0) goto LAB_140c377d8;
LAB_140c35a19:
          auVar40 = auVar95._0_16_;
        }
        else {
          auVar158 = vpmovzxwd_avx(auVar163);
          auVar158 = vpinsrb_avx(auVar158,(uint)*auVar103._0_8_,2);
          auVar158 = vpinsrb_avx(auVar158,(uint)auVar163[3],3);
          auVar163 = vpblendw_avx(auVar158,auVar163,0xc);
          auVar158 = vpaddq_avx(auVar84,auVar136);
          if ((uVar30 & 8) != 0) goto LAB_140c37750;
LAB_140c359f5:
          auVar95._16_16_ = auVar158;
          auVar95._0_16_ = auVar40;
          if ((uVar30 & 0x10) == 0) goto LAB_140c35a05;
LAB_140c37783:
          auVar103 = vpshufb_avx(auVar163,___xmm_80800706808005048080030203020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar95._0_8_,4);
          auVar103 = vpinsrb_avx(auVar103,(uint)auVar163[5],5);
          auVar163 = vpblendw_avx(auVar103,auVar163,8);
          if ((uVar30 & 0x20) != 0) goto LAB_140c377b3;
LAB_140c35a0f:
          if ((uVar30 & 0x40) == 0) goto LAB_140c35a19;
LAB_140c377d8:
          auVar40 = auVar95._0_16_;
          auVar103 = vpshufb_avx(auVar163,___xmm_80800706808005048080050403020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar95._16_8_,6);
          auVar163 = vpinsrb_avx(auVar103,(uint)auVar163[7],7);
        }
        if (cVar27 < '\0') {
          auVar40 = vpshufb_avx(auVar163,___xmm_80800706808005048006050403020100);
          auVar163 = vpinsrb_avx(auVar40,(uint)*auVar95._24_8_,7);
        }
        auVar103 = vpcmpeqd_avx(auVar40,auVar40);
        auVar40 = vpsubd_avx(auVar204,auVar103);
        auVar103 = vpsubd_avx(auVar143,auVar103);
        auVar74._16_16_ = auVar40;
        auVar74._0_16_ = auVar103;
        auVar42 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar74,auVar157);
        auVar103 = vpcmpgtd_avx(ZEXT416(uVar38),auVar42._16_16_);
        auVar40 = vpcmpgtd_avx(auVar39,auVar42._0_16_);
        auVar75._16_16_ = auVar103;
        auVar75._0_16_ = auVar40;
        auVar85 = auVar157 & ~auVar75;
        if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0') ||
              (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
            (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
          auVar76._0_4_ = ~auVar40._0_4_ & auVar157._0_4_;
          auVar76._4_4_ = ~auVar40._4_4_ & auVar157._4_4_;
          auVar76._8_4_ = ~auVar40._8_4_ & auVar157._8_4_;
          auVar76._12_4_ = ~auVar40._12_4_ & auVar157._12_4_;
          auVar76._16_4_ = ~auVar103._0_4_ & auVar157._16_4_;
          auVar76._20_4_ = ~auVar103._4_4_ & auVar157._20_4_;
          auVar76._24_4_ = ~auVar103._8_4_ & auVar157._24_4_;
          auVar76._28_4_ = ~auVar103._12_4_ & auVar157._28_4_;
          auVar42 = vblendvps_avx(auVar42,auVar189,auVar76);
        }
        auVar40 = vpmovsxdq_avx(auVar42._0_16_);
        auVar103 = vpshufd_avx(auVar42._0_16_,0xee);
        auVar103 = vpmovsxdq_avx(auVar103);
        auVar103 = vpaddq_avx(auVar116,auVar103);
        auVar40 = vpaddq_avx(auVar183,auVar40);
        auVar143 = auVar40;
        if ((uVar30 & 1) != 0) {
          auVar143 = ZEXT116(*auVar40._0_8_);
        }
        auVar204 = vpmovsxdq_avx(auVar42._16_16_);
        auVar158 = vpshufd_avx(auVar42._16_16_,0xee);
        if ((uVar30 & 2) != 0) {
          auVar40 = vpinsrb_avx(auVar143,(uint)*auVar40._8_8_,1);
          auVar143 = vpblendw_avx(auVar40,auVar143,0xe);
        }
        auVar158 = vpmovsxdq_avx(auVar158);
        auVar40 = vpaddq_avx(auVar204,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar204 = vpaddq_avx(auVar158,auVar136);
          if ((uVar30 & 8) == 0) goto LAB_140c35b03;
LAB_140c37858:
          auVar136 = vpmovzxwd_avx(auVar143);
          auVar136 = vpinsrb_avx(auVar136,(uint)auVar143[2],2);
          auVar103 = vpinsrb_avx(auVar136,(uint)*auVar103._8_8_,3);
          auVar143 = vpblendw_avx(auVar103,auVar143,0xc);
          auVar96._16_16_ = auVar204;
          auVar96._0_16_ = auVar40;
          if ((uVar30 & 0x10) != 0) goto LAB_140c3788b;
LAB_140c35b13:
          if ((uVar30 & 0x20) == 0) goto LAB_140c35b1d;
LAB_140c378bb:
          auVar103 = vpshufb_avx(auVar143,___xmm_80800706808005048080030403020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar96._8_8_,5);
          auVar143 = vpblendw_avx(auVar103,auVar143,8);
          auVar103 = vpmovzxbd_avx(auVar163);
          auVar40 = vpshufd_avx(auVar163,0x55);
          if ((uVar30 & 0x40) != 0) goto LAB_140c378ea;
LAB_140c35b31:
          auVar40 = vpmovzxbd_avx(auVar40);
        }
        else {
          auVar204 = vpmovzxwd_avx(auVar143);
          auVar204 = vpinsrb_avx(auVar204,(uint)*auVar103._0_8_,2);
          auVar204 = vpinsrb_avx(auVar204,(uint)auVar143[3],3);
          auVar143 = vpblendw_avx(auVar204,auVar143,0xc);
          auVar204 = vpaddq_avx(auVar158,auVar136);
          if ((uVar30 & 8) != 0) goto LAB_140c37858;
LAB_140c35b03:
          auVar96._16_16_ = auVar204;
          auVar96._0_16_ = auVar40;
          if ((uVar30 & 0x10) == 0) goto LAB_140c35b13;
LAB_140c3788b:
          auVar103 = vpshufb_avx(auVar143,___xmm_80800706808005048080030203020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar96._0_8_,4);
          auVar103 = vpinsrb_avx(auVar103,(uint)auVar143[5],5);
          auVar143 = vpblendw_avx(auVar103,auVar143,8);
          if ((uVar30 & 0x20) != 0) goto LAB_140c378bb;
LAB_140c35b1d:
          auVar103 = vpmovzxbd_avx(auVar163);
          auVar40 = vpshufd_avx(auVar163,0x55);
          if ((uVar30 & 0x40) == 0) goto LAB_140c35b31;
LAB_140c378ea:
          auVar163 = vpshufb_avx(auVar143,___xmm_80800706808005048080050403020100);
          auVar163 = vpinsrb_avx(auVar163,(uint)*auVar96._16_8_,6);
          auVar143 = vpinsrb_avx(auVar163,(uint)auVar143[7],7);
          auVar40 = vpmovzxbd_avx(auVar40);
        }
        if (cVar27 < '\0') {
          auVar163 = vpshufb_avx(auVar143,___xmm_80800706808005048006050403020100);
          auVar143 = vpinsrb_avx(auVar163,(uint)*auVar96._24_8_,7);
        }
        auVar94._16_16_ = auVar40;
        auVar94._0_16_ = auVar103;
        auVar103 = vpmovzxbd_avx(auVar143);
        auVar40 = vpshufd_avx(auVar143,0x55);
        auVar40 = vpmovzxbd_avx(auVar40);
        auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      else {
        auVar7._4_4_ = auVar163._4_4_ * 2;
        auVar7._0_4_ = auVar163._0_4_ * 2;
        auVar7._8_4_ = auVar163._8_4_ * 2;
        auVar7._12_4_ = auVar163._12_4_ * 2;
        auVar8._4_4_ = auVar143._4_4_ * 2;
        auVar8._0_4_ = auVar143._0_4_ * 2;
        auVar8._8_4_ = auVar143._8_4_ * 2;
        auVar8._12_4_ = auVar143._12_4_ * 2;
        auVar194 = vpmovsxdq_avx(auVar8);
        auVar84 = vpshufd_avx(auVar8,0xee);
        auVar84 = vpmovsxdq_avx(auVar84);
        auVar84 = vpaddq_avx(auVar116,auVar84);
        auVar194 = vpaddq_avx(auVar183,auVar194);
        auVar82 = auVar84;
        if ((uVar30 & 1) != 0) {
          auVar82 = ZEXT216(*auVar194._0_8_);
        }
        auVar22 = vpmovsxdq_avx(auVar7);
        auVar21 = vpshufd_avx(auVar7,0xee);
        if ((uVar30 & 2) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar194._8_8_,1);
        }
        auVar21 = vpmovsxdq_avx(auVar21);
        auVar194 = vpaddq_avx(auVar22,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar22 = vpaddq_avx(auVar21,auVar136);
        }
        else {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar84._0_8_,2);
          auVar22 = vpaddq_avx(auVar21,auVar136);
        }
        if ((uVar30 & 8) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar84._8_8_,3);
        }
        if ((uVar30 & 0x10) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar194._0_8_,4);
        }
        if ((uVar30 & 0x20) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar194._8_8_,5);
        }
        if ((uVar30 & 0x40) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar22._0_8_,6);
        }
        if (cVar27 < '\0') {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar22._8_8_,7);
        }
        auVar117 = vpunpckhwd_avx(auVar82,(undefined1  [16])0x0);
        auVar21 = vpmovzxwd_avx(auVar82);
        auVar159 = vpshufd_avx(ZEXT416(uVar187),0);
        auVar194 = vpcmpgtd_avx(auVar117,auVar159);
        auVar84 = vpcmpeqd_avx(auVar22,auVar22);
        auVar22 = auVar194 ^ auVar84;
        auVar82 = vpcmpgtd_avx(auVar21,auVar159);
        auVar84 = auVar82 ^ auVar84;
        auVar166._16_16_ = auVar22;
        auVar166._0_16_ = auVar84;
        auVar65._16_16_ = auVar194;
        auVar65._0_16_ = auVar82;
        auVar42 = auVar157 & ~auVar65;
        local_6c0 = auVar84._0_4_;
        uStack_6bc = auVar84._4_4_;
        uStack_6b8 = auVar84._8_4_;
        uStack_6b4 = auVar84._12_4_;
        uStack_6b0 = auVar22._0_4_;
        uStack_6ac = auVar22._4_4_;
        uStack_6a8 = auVar22._8_4_;
        uStack_6a4 = auVar22._12_4_;
        auVar41 = auVar91;
        if ((((((((SUB321(auVar42 >> 0x1f,0) & 1) != 0 || (SUB321(auVar42 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar42 >> 0x5f,0) & 1) != 0) || SUB321(auVar42 >> 0x7f,0) != '\0') ||
              (SUB321(auVar42 >> 0x9f,0) & 1) != 0) || SUB321(auVar42 >> 0xbf,0) != '\0') ||
            (SUB321(auVar42 >> 0xdf,0) & 1) != 0) || auVar42[0x1f] < '\0') {
          auVar84 = vpcmpgtd_avx(auVar117,auVar159);
          auVar194 = vpcmpgtd_avx(auVar21,auVar159);
          auVar66._16_16_ = auVar84;
          auVar66._0_16_ = auVar194;
          auVar41 = vblendvps_avx(auVar189,auVar91,auVar66);
          auVar103 = vpcmpgtd_avx(auVar204,auVar103);
          auVar40 = vpcmpgtd_avx(auVar158,auVar40);
          uVar187 = auVar40._0_4_ & local_6c0;
          uVar196 = auVar40._4_4_ & uStack_6bc;
          uVar197 = auVar40._8_4_ & uStack_6b8;
          uVar35 = auVar40._12_4_ & uStack_6b4;
          uVar179 = auVar103._0_4_ & uStack_6b0;
          uVar180 = auVar103._4_4_ & uStack_6ac;
          uVar181 = auVar103._8_4_ & uStack_6a8;
          uVar182 = auVar103._12_4_ & uStack_6a4;
          auVar124._0_4_ = uVar187 & auVar157._0_4_;
          auVar124._4_4_ = uVar196 & auVar157._4_4_;
          auVar124._8_4_ = uVar197 & auVar157._8_4_;
          auVar124._12_4_ = uVar35 & auVar157._12_4_;
          auVar124._16_4_ = uVar179 & auVar157._16_4_;
          auVar124._20_4_ = uVar180 & auVar157._20_4_;
          auVar124._24_4_ = uVar181 & auVar157._24_4_;
          auVar124._28_4_ = uVar182 & auVar157._28_4_;
          iVar28 = vmovmskps_avx(auVar124);
          if (iVar28 != 0) {
            auVar103 = vpcmpeqd_avx(auVar40,auVar40);
            do {
              auVar82 = vpsubd_avx(auVar91._0_16_,auVar103);
              auVar9._4_4_ = auVar82._4_4_ * 2;
              auVar9._0_4_ = auVar82._0_4_ * 2;
              auVar9._8_4_ = auVar82._8_4_ * 2;
              auVar9._12_4_ = auVar82._12_4_ * 2;
              auVar84 = vpmovsxdq_avx(auVar9);
              auVar40 = vpshufd_avx(auVar9,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar116,auVar40);
              auVar84 = vpaddq_avx(auVar183,auVar84);
              uVar37 = vmovmskps_avx(auVar124);
              auVar194 = auVar40;
              if ((uVar37 & 1) != 0) {
                auVar194 = ZEXT216(*auVar84._0_8_);
              }
              if ((uVar37 & 2) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar84._8_8_,1);
              }
              if ((uVar37 & 4) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar40._0_8_,2);
              }
              if ((uVar37 & 8) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar40._8_8_,3);
              }
              auVar22 = vpsubd_avx(auVar91._16_16_,auVar103);
              auVar10._4_4_ = auVar22._4_4_ * 2;
              auVar10._0_4_ = auVar22._0_4_ * 2;
              auVar10._8_4_ = auVar22._8_4_ * 2;
              auVar10._12_4_ = auVar22._12_4_ * 2;
              auVar84 = vpmovsxdq_avx(auVar10);
              auVar40 = vpshufd_avx(auVar10,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar40,auVar136);
              auVar84 = vpaddq_avx(auVar84,auVar120);
              if ((uVar37 & 0x10) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar84._0_8_,4);
              }
              if ((uVar37 & 0x20) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar84._8_8_,5);
              }
              if ((uVar37 & 0x40) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar40._0_8_,6);
              }
              if ((char)uVar37 < '\0') {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar40._8_8_,7);
              }
              auVar40 = vpunpckhwd_avx(auVar194,___xmm_00000000000000000000000000000000);
              auVar84 = vpmovzxwd_avx(auVar194);
              auVar40 = vpcmpgtd_avx(auVar40,auVar159);
              auVar84 = vpcmpgtd_avx(auVar84,auVar159);
              auVar199._0_4_ = auVar84._0_4_ & uVar187;
              auVar199._4_4_ = auVar84._4_4_ & uVar196;
              auVar199._8_4_ = auVar84._8_4_ & uVar197;
              auVar199._12_4_ = auVar84._12_4_ & uVar35;
              auVar199._16_4_ = auVar40._0_4_ & uVar179;
              auVar199._20_4_ = auVar40._4_4_ & uVar180;
              auVar199._24_4_ = auVar40._8_4_ & uVar181;
              auVar199._28_4_ = auVar40._12_4_ & uVar182;
              uVar37 = 0;
              uVar130 = 0;
              uVar132 = 0;
              uVar134 = 0;
              uVar138 = 0;
              uVar140 = 0;
              uVar142 = 0;
              uVar115 = 0;
              auVar208._0_4_ = auVar199._0_4_ & auVar157._0_4_;
              auVar208._4_4_ = auVar199._4_4_ & auVar157._4_4_;
              auVar208._8_4_ = auVar199._8_4_ & auVar157._8_4_;
              auVar208._12_4_ = auVar199._12_4_ & auVar157._12_4_;
              auVar208._16_4_ = auVar199._16_4_ & auVar157._16_4_;
              auVar208._20_4_ = auVar199._20_4_ & auVar157._20_4_;
              auVar208._24_4_ = auVar199._24_4_ & auVar157._24_4_;
              auVar208._28_4_ = auVar199._28_4_ & auVar157._28_4_;
              uVar36 = vmovmskps_avx(auVar208);
              if ((char)iVar28 != (char)uVar36) {
                uVar115 = auVar199._0_4_ ^ uVar187;
                uVar37 = auVar199._4_4_ ^ uVar196;
                uVar130 = auVar199._8_4_ ^ uVar197;
                uVar132 = auVar199._12_4_ ^ uVar35;
                uVar134 = auVar199._16_4_ ^ uVar179;
                uVar138 = auVar199._20_4_ ^ uVar180;
                uVar140 = auVar199._24_4_ ^ uVar181;
                uVar142 = auVar199._28_4_ ^ uVar182;
              }
              auVar41 = vblendvps_avx(auVar41,auVar91,auVar199);
              auVar91._16_16_ = auVar22;
              auVar91._0_16_ = auVar82;
              auVar40 = vpcmpgtd_avx(auVar204,auVar22);
              auVar84 = vpcmpgtd_avx(auVar158,auVar82);
              uVar187 = auVar84._0_4_ & uVar115;
              uVar196 = auVar84._4_4_ & uVar37;
              uVar197 = auVar84._8_4_ & uVar130;
              uVar35 = auVar84._12_4_ & uVar132;
              uVar179 = auVar40._0_4_ & uVar134;
              uVar180 = auVar40._4_4_ & uVar138;
              uVar181 = auVar40._8_4_ & uVar140;
              uVar182 = auVar40._12_4_ & uVar142;
              auVar124._0_4_ = uVar187 & auVar157._0_4_;
              auVar124._4_4_ = uVar196 & auVar157._4_4_;
              auVar124._8_4_ = uVar197 & auVar157._8_4_;
              auVar124._12_4_ = uVar35 & auVar157._12_4_;
              auVar124._16_4_ = uVar179 & auVar157._16_4_;
              auVar124._20_4_ = uVar180 & auVar157._20_4_;
              auVar124._24_4_ = uVar181 & auVar157._24_4_;
              auVar124._28_4_ = uVar182 & auVar157._28_4_;
              iVar28 = vmovmskps_avx(auVar124);
            } while (iVar28 != 0);
          }
        }
        auVar103 = vpcmpgtd_avx(auVar117,auVar159);
        auVar40 = vpcmpgtd_avx(auVar21,auVar159);
        auVar67._16_16_ = auVar103;
        auVar67._0_16_ = auVar40;
        auVar67 = auVar67 & auVar157;
        if ((((((((SUB321(auVar67 >> 0x1f,0) & 1) != 0 || (SUB321(auVar67 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar67 >> 0x5f,0) & 1) != 0) || SUB321(auVar67 >> 0x7f,0) != '\0') ||
              (SUB321(auVar67 >> 0x9f,0) & 1) != 0) || SUB321(auVar67 >> 0xbf,0) != '\0') ||
            (SUB321(auVar67 >> 0xdf,0) & 1) != 0) || auVar67[0x1f] < '\0') {
          auVar41 = vblendvps_avx(ZEXT832(0) << 0x20,auVar41,auVar166);
          auVar104._4_4_ = __real_00000001;
          auVar104._0_4_ = __real_00000001;
          auVar104._8_4_ = __real_00000001;
          auVar104._12_4_ = __real_00000001;
          auVar103 = vpcmpgtd_avx(auVar163,auVar104);
          auVar40 = vpcmpgtd_avx(auVar143,auVar104);
          uVar187 = ~local_6c0 & auVar40._0_4_;
          uVar196 = ~uStack_6bc & auVar40._4_4_;
          uVar197 = ~uStack_6b8 & auVar40._8_4_;
          uVar35 = ~uStack_6b4 & auVar40._12_4_;
          uVar179 = ~uStack_6b0 & auVar103._0_4_;
          uVar180 = ~uStack_6ac & auVar103._4_4_;
          uVar181 = ~uStack_6a8 & auVar103._8_4_;
          uVar182 = ~uStack_6a4 & auVar103._12_4_;
          auVar111._0_4_ = uVar187 & auVar157._0_4_;
          auVar111._4_4_ = uVar196 & auVar157._4_4_;
          auVar111._8_4_ = uVar197 & auVar157._8_4_;
          auVar111._12_4_ = uVar35 & auVar157._12_4_;
          auVar111._16_4_ = uVar179 & auVar157._16_4_;
          auVar111._20_4_ = uVar180 & auVar157._20_4_;
          auVar111._24_4_ = uVar181 & auVar157._24_4_;
          auVar111._28_4_ = uVar182 & auVar157._28_4_;
          iVar28 = vmovmskps_avx(auVar111);
          if (iVar28 != 0) {
            auVar103 = vpcmpeqd_avx(auVar40,auVar40);
            auVar169._4_4_ = __real_00000002;
            auVar169._0_4_ = __real_00000002;
            auVar169._8_4_ = __real_00000002;
            auVar169._12_4_ = __real_00000002;
            do {
              iVar1 = auVar205._0_4_ + auVar103._0_4_;
              iVar29 = auVar205._4_4_ + auVar103._4_4_;
              auVar167._4_4_ = iVar29;
              auVar167._0_4_ = iVar1;
              iVar18 = auVar205._8_4_ + auVar103._8_4_;
              auVar167._8_4_ = iVar18;
              iVar20 = auVar205._12_4_ + auVar103._12_4_;
              auVar167._12_4_ = iVar20;
              auVar11._4_4_ = iVar29 * 2;
              auVar11._0_4_ = iVar1 * 2;
              auVar11._8_4_ = iVar18 * 2;
              auVar11._12_4_ = iVar20 * 2;
              auVar163 = vpmovsxdq_avx(auVar11);
              auVar40 = vpshufd_avx(auVar11,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar116,auVar40);
              auVar163 = vpaddq_avx(auVar183,auVar163);
              uVar37 = vmovmskps_avx(auVar111);
              auVar143 = auVar163;
              if ((uVar37 & 1) != 0) {
                auVar143 = ZEXT216(*auVar163._0_8_);
              }
              if ((uVar37 & 2) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar163._8_8_,1);
              }
              if ((uVar37 & 4) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._0_8_,2);
              }
              if ((uVar37 & 8) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._8_8_,3);
              }
              iVar1 = auVar205._16_4_ + auVar103._0_4_;
              iVar29 = auVar205._20_4_ + auVar103._4_4_;
              auVar167._20_4_ = iVar29;
              auVar167._16_4_ = iVar1;
              iVar18 = auVar205._24_4_ + auVar103._8_4_;
              auVar167._24_4_ = iVar18;
              iVar20 = auVar205._28_4_ + auVar103._12_4_;
              auVar167._28_4_ = iVar20;
              auVar12._4_4_ = iVar29 * 2;
              auVar12._0_4_ = iVar1 * 2;
              auVar12._8_4_ = iVar18 * 2;
              auVar12._12_4_ = iVar20 * 2;
              auVar163 = vpmovsxdq_avx(auVar12);
              auVar40 = vpshufd_avx(auVar12,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar40,auVar136);
              auVar163 = vpaddq_avx(auVar163,auVar120);
              if ((uVar37 & 0x10) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar163._0_8_,4);
              }
              if ((uVar37 & 0x20) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar163._8_8_,5);
              }
              if ((uVar37 & 0x40) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._0_8_,6);
              }
              if ((char)uVar37 < '\0') {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._8_8_,7);
              }
              auVar40 = vpunpckhwd_avx(auVar143,___xmm_00000000000000000000000000000000);
              auVar163 = vpmovzxwd_avx(auVar143);
              auVar40 = vpcmpgtd_avx(auVar40,auVar159);
              auVar163 = vpcmpgtd_avx(auVar163,auVar159);
              auVar200._0_4_ = ~auVar163._0_4_ & uVar187;
              auVar200._4_4_ = ~auVar163._4_4_ & uVar196;
              auVar200._8_4_ = ~auVar163._8_4_ & uVar197;
              auVar200._12_4_ = ~auVar163._12_4_ & uVar35;
              auVar200._16_4_ = ~auVar40._0_4_ & uVar179;
              auVar200._20_4_ = ~auVar40._4_4_ & uVar180;
              auVar200._24_4_ = ~auVar40._8_4_ & uVar181;
              auVar200._28_4_ = ~auVar40._12_4_ & uVar182;
              uVar37 = 0;
              uVar130 = 0;
              uVar132 = 0;
              uVar134 = 0;
              uVar138 = 0;
              uVar140 = 0;
              uVar142 = 0;
              uVar115 = 0;
              auVar209._0_4_ = auVar200._0_4_ & auVar157._0_4_;
              auVar209._4_4_ = auVar200._4_4_ & auVar157._4_4_;
              auVar209._8_4_ = auVar200._8_4_ & auVar157._8_4_;
              auVar209._12_4_ = auVar200._12_4_ & auVar157._12_4_;
              auVar209._16_4_ = auVar200._16_4_ & auVar157._16_4_;
              auVar209._20_4_ = auVar200._20_4_ & auVar157._20_4_;
              auVar209._24_4_ = auVar200._24_4_ & auVar157._24_4_;
              auVar209._28_4_ = auVar200._28_4_ & auVar157._28_4_;
              uVar36 = vmovmskps_avx(auVar209);
              if ((char)iVar28 != (char)uVar36) {
                uVar115 = auVar200._0_4_ ^ uVar187;
                uVar37 = auVar200._4_4_ ^ uVar196;
                uVar130 = auVar200._8_4_ ^ uVar197;
                uVar132 = auVar200._12_4_ ^ uVar35;
                uVar134 = auVar200._16_4_ ^ uVar179;
                uVar138 = auVar200._20_4_ ^ uVar180;
                uVar140 = auVar200._24_4_ ^ uVar181;
                uVar142 = auVar200._28_4_ ^ uVar182;
              }
              auVar41 = vblendvps_avx(auVar41,auVar167,auVar200);
              auVar40 = vpcmpgtd_avx(auVar205._0_16_,auVar169);
              auVar163 = vpcmpgtd_avx(auVar205._16_16_,auVar169);
              uVar187 = auVar40._0_4_ & uVar115;
              uVar196 = auVar40._4_4_ & uVar37;
              uVar197 = auVar40._8_4_ & uVar130;
              uVar35 = auVar40._12_4_ & uVar132;
              uVar179 = auVar163._0_4_ & uVar134;
              uVar180 = auVar163._4_4_ & uVar138;
              uVar181 = auVar163._8_4_ & uVar140;
              uVar182 = auVar163._12_4_ & uVar142;
              auVar111._0_4_ = uVar187 & auVar157._0_4_;
              auVar111._4_4_ = uVar196 & auVar157._4_4_;
              auVar111._8_4_ = uVar197 & auVar157._8_4_;
              auVar111._12_4_ = uVar35 & auVar157._12_4_;
              auVar111._16_4_ = uVar179 & auVar157._16_4_;
              auVar111._20_4_ = uVar180 & auVar157._20_4_;
              auVar111._24_4_ = uVar181 & auVar157._24_4_;
              auVar111._28_4_ = uVar182 & auVar157._28_4_;
              iVar28 = vmovmskps_avx(auVar111);
              auVar205 = ZEXT3264(auVar167);
            } while (iVar28 != 0);
          }
        }
        auVar41 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar41,auVar157);
        auVar103._4_4_ = auVar41._20_4_ * 2;
        auVar103._0_4_ = auVar41._16_4_ * 2;
        auVar103._8_4_ = auVar41._24_4_ * 2;
        auVar103._12_4_ = auVar41._28_4_ * 2;
        auVar13._4_4_ = auVar41._4_4_ * 2;
        auVar13._0_4_ = auVar41._0_4_ * 2;
        auVar13._8_4_ = auVar41._8_4_ * 2;
        auVar13._12_4_ = auVar41._12_4_ * 2;
        auVar163 = vpmovsxdq_avx(auVar13);
        auVar40 = vpshufd_avx(auVar13,0xee);
        auVar40 = vpmovsxdq_avx(auVar40);
        auVar40 = vpaddq_avx(auVar116,auVar40);
        auVar163 = vpaddq_avx(auVar183,auVar163);
        auVar143 = auVar163;
        if ((uVar30 & 1) != 0) {
          auVar143 = ZEXT216(*auVar163._0_8_);
        }
        auVar204 = vpmovsxdq_avx(auVar103);
        auVar103 = vpshufd_avx(auVar103,0xee);
        if ((uVar30 & 2) != 0) {
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar163._8_8_,1);
        }
        auVar163 = vpmovsxdq_avx(auVar103);
        auVar103 = vpaddq_avx(auVar204,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar163 = vpaddq_avx(auVar163,auVar136);
          if ((uVar30 & 8) == 0) goto LAB_140c35095;
LAB_140c375fc:
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._8_8_,3);
          auVar92._16_16_ = auVar163;
          auVar92._0_16_ = auVar103;
          if ((uVar30 & 0x10) != 0) goto LAB_140c37620;
LAB_140c350ae:
          if ((uVar30 & 0x20) == 0) goto LAB_140c350b8;
LAB_140c37634:
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar92._8_8_,5);
          if ((uVar30 & 0x40) != 0) goto LAB_140c37649;
LAB_140c350c2:
          auVar103 = auVar92._0_16_;
        }
        else {
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._0_8_,2);
          auVar163 = vpaddq_avx(auVar163,auVar136);
          if ((uVar30 & 8) != 0) goto LAB_140c375fc;
LAB_140c35095:
          auVar92._16_16_ = auVar163;
          auVar92._0_16_ = auVar103;
          if ((uVar30 & 0x10) == 0) goto LAB_140c350ae;
LAB_140c37620:
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar92._0_8_,4);
          if ((uVar30 & 0x20) != 0) goto LAB_140c37634;
LAB_140c350b8:
          if ((uVar30 & 0x40) == 0) goto LAB_140c350c2;
LAB_140c37649:
          auVar103 = auVar92._0_16_;
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar92._16_8_,6);
        }
        if (cVar27 < '\0') {
          auVar103 = auVar92._16_16_;
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar92._24_8_,7);
        }
        auVar103 = vpcmpeqd_avx(auVar103,auVar103);
        auVar40 = vpsubd_avx(auVar41._16_16_,auVar103);
        auVar103 = vpsubd_avx(auVar41._0_16_,auVar103);
        auVar68._16_16_ = auVar40;
        auVar68._0_16_ = auVar103;
        auVar42 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar68,auVar157);
        auVar103 = vpcmpgtd_avx(ZEXT416(uVar38),auVar42._16_16_);
        auVar40 = vpcmpgtd_avx(auVar39,auVar42._0_16_);
        auVar69._16_16_ = auVar103;
        auVar69._0_16_ = auVar40;
        auVar85 = auVar157 & ~auVar69;
        if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0') ||
              (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
            (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
          auVar70._0_4_ = ~auVar40._0_4_ & auVar157._0_4_;
          auVar70._4_4_ = ~auVar40._4_4_ & auVar157._4_4_;
          auVar70._8_4_ = ~auVar40._8_4_ & auVar157._8_4_;
          auVar70._12_4_ = ~auVar40._12_4_ & auVar157._12_4_;
          auVar70._16_4_ = ~auVar103._0_4_ & auVar157._16_4_;
          auVar70._20_4_ = ~auVar103._4_4_ & auVar157._20_4_;
          auVar70._24_4_ = ~auVar103._8_4_ & auVar157._24_4_;
          auVar70._28_4_ = ~auVar103._12_4_ & auVar157._28_4_;
          auVar42 = vblendvps_avx(auVar42,auVar189,auVar70);
        }
        auVar39._4_4_ = auVar42._20_4_ * 2;
        auVar39._0_4_ = auVar42._16_4_ * 2;
        auVar39._8_4_ = auVar42._24_4_ * 2;
        auVar39._12_4_ = auVar42._28_4_ * 2;
        auVar14._4_4_ = auVar42._4_4_ * 2;
        auVar14._0_4_ = auVar42._0_4_ * 2;
        auVar14._8_4_ = auVar42._8_4_ * 2;
        auVar14._12_4_ = auVar42._12_4_ * 2;
        auVar40 = vpmovsxdq_avx(auVar14);
        auVar103 = vpshufd_avx(auVar14,0xee);
        auVar103 = vpmovsxdq_avx(auVar103);
        auVar103 = vpaddq_avx(auVar116,auVar103);
        auVar40 = vpaddq_avx(auVar183,auVar40);
        auVar163 = auVar103;
        if ((uVar30 & 1) != 0) {
          auVar163 = ZEXT216(*auVar40._0_8_);
        }
        auVar204 = vpmovsxdq_avx(auVar39);
        auVar158 = vpshufd_avx(auVar39,0xee);
        if ((uVar30 & 2) != 0) {
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar40._8_8_,1);
        }
        auVar158 = vpmovsxdq_avx(auVar158);
        auVar40 = vpaddq_avx(auVar204,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar204 = vpaddq_avx(auVar158,auVar136);
          if ((uVar30 & 8) == 0) goto LAB_140c351ad;
LAB_140c37691:
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar103._8_8_,3);
          auVar93._16_16_ = auVar204;
          auVar93._0_16_ = auVar40;
          if ((uVar30 & 0x10) != 0) goto LAB_140c376ac;
LAB_140c351bd:
          if ((uVar30 & 0x20) == 0) goto LAB_140c351c7;
LAB_140c376c0:
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar93._8_8_,5);
          auVar103 = vpmovzxwd_avx(auVar143);
          if ((uVar30 & 0x40) != 0) goto LAB_140c376de;
LAB_140c351da:
          auVar40 = vpunpckhwd_avx(auVar143,(undefined1  [16])0x0);
        }
        else {
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar103._0_8_,2);
          auVar204 = vpaddq_avx(auVar158,auVar136);
          if ((uVar30 & 8) != 0) goto LAB_140c37691;
LAB_140c351ad:
          auVar93._16_16_ = auVar204;
          auVar93._0_16_ = auVar40;
          if ((uVar30 & 0x10) == 0) goto LAB_140c351bd;
LAB_140c376ac:
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar93._0_8_,4);
          if ((uVar30 & 0x20) != 0) goto LAB_140c376c0;
LAB_140c351c7:
          auVar103 = vpmovzxwd_avx(auVar143);
          if ((uVar30 & 0x40) == 0) goto LAB_140c351da;
LAB_140c376de:
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar93._16_8_,6);
          auVar40 = vpunpckhwd_avx(auVar143,(undefined1  [16])0x0);
        }
        if (cVar27 < '\0') {
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar93._24_8_,7);
        }
        auVar94._16_16_ = auVar40;
        auVar94._0_16_ = auVar103;
        auVar40 = vpunpckhwd_avx(auVar163,(undefined1  [16])0x0);
        auVar103 = vpmovzxwd_avx(auVar163);
        auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      auVar198 = ZEXT1632((undefined1  [16])0x0);
      if (param_7 != '\x01') {
        auVar198 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar163 = vpsubd_avx(auVar103,auVar94._0_16_);
        auVar103 = vpsubd_avx(auVar40,auVar94._16_16_);
        auVar121._4_4_ = __real_00000001;
        auVar121._0_4_ = __real_00000001;
        auVar121._8_4_ = __real_00000001;
        auVar121._12_4_ = __real_00000001;
        auVar103 = vpmaxsd_avx(auVar103,auVar121);
        auVar40 = vpmaxsd_avx(auVar163,auVar121);
        auVar77._16_16_ = auVar103;
        auVar77._0_16_ = auVar40;
        auVar103 = vpermilps_avx(ZEXT416((uint)param_6),0);
        auVar112._16_16_ = auVar103;
        auVar112._0_16_ = auVar103;
        auVar85 = vcvtdq2ps_avx(auVar94);
        auVar171 = vsubps_avx(auVar112,auVar85);
        auVar85 = vcvtdq2ps_avx(auVar77);
        auVar85 = vdivps_avx(auVar171,auVar85);
      }
      _local_7e0 = vblendvps_avx(auVar198,auVar85,local_660);
      goto LAB_140c35bd2;
    }
    auVar41 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar189,auVar157);
    auVar42 = auVar41;
  }
  _local_7e0 = ZEXT1632(ZEXT816(0));
LAB_140c35bd2:
  if (param_8 < 7) {
    auVar40 = vpmulld_avx(auVar41._0_16_,auVar23);
    auVar163 = vpmulld_avx(auVar41._16_16_,auVar23);
    auVar103 = vpmovsxdq_avx(auVar163);
    auVar163 = vpshufd_avx(auVar163,0xee);
    vpmovsxdq_avx(auVar163);
    vpmovsxdq_avx(auVar40);
    auVar40 = vpshufd_avx(auVar40,0xee);
    auVar40 = vpmovsxdq_avx(auVar40);
                    /* WARNING: Could not recover jumptable at 0x000140c35c7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6c898 + *(int *)(&DAT_151c6c898 + uVar34 * 4)))
              (auVar40._0_8_,&DAT_151c6c898 + *(int *)(&DAT_151c6c898 + uVar34 * 4),auVar103._0_8_,
               auVar103._0_8_);
    return;
  }
  auVar103 = vpcmpgtd_avx(auVar81,auVar102);
  auVar40 = vpcmpgtd_avx(auVar81,auVar80);
  auVar78._16_16_ = auVar103;
  auVar78._0_16_ = auVar40;
  local_5a0 = vmaskmovps_avx(auVar78,ZEXT1632((undefined1  [16])0x0));
  local_580 = vmaskmovps_avx(auVar78,ZEXT1632((undefined1  [16])0x0));
  local_560._0_32_ = vmaskmovps_avx(auVar78,ZEXT1632((undefined1  [16])0x0));
  auVar103 = vpcmpeqd_avx(auVar41._16_16_,auVar42._16_16_);
  auVar40 = vpcmpeqd_avx(auVar41._0_16_,auVar42._0_16_);
  auVar97._16_16_ = auVar103;
  auVar97._0_16_ = auVar40;
  auVar163 = vpcmpgtd_avx(auVar81,auVar102);
  auVar143 = vpcmpgtd_avx(auVar81,auVar80);
  auVar113._16_16_ = auVar163;
  auVar113._0_16_ = auVar143;
  auVar113 = auVar113 & ~auVar97;
  if ((((((((SUB321(auVar113 >> 0x1f,0) & 1) != 0 || (SUB321(auVar113 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar113 >> 0x5f,0) & 1) != 0) || SUB321(auVar113 >> 0x7f,0) != '\0') ||
        (SUB321(auVar113 >> 0x9f,0) & 1) != 0) || SUB321(auVar113 >> 0xbf,0) != '\0') ||
      (SUB321(auVar113 >> 0xdf,0) & 1) != 0) || auVar113[0x1f] < '\0') {
    auVar98._0_4_ = ~auVar40._0_4_ & uVar190;
    auVar98._4_4_ = ~auVar40._4_4_ & uVar191;
    auVar98._8_4_ = ~auVar40._8_4_ & uVar192;
    auVar98._12_4_ = ~auVar40._12_4_ & uVar193;
    auVar98._16_4_ = ~auVar103._0_4_ & uVar195;
    auVar98._20_4_ = ~auVar103._4_4_ & auVar201._4_4_;
    auVar98._24_4_ = ~auVar103._8_4_ & auVar201._8_4_;
    auVar98._28_4_ = ~auVar103._12_4_ & auVar201._12_4_;
    if (param_8 < 7) {
      auVar40 = vpmulld_avx(auVar42._0_16_,auVar23);
      auVar103 = vpmulld_avx(auVar42._16_16_,auVar23);
      vpmovsxdq_avx(auVar103);
      auVar103 = vpshufd_avx(auVar103,0xee);
      vpmovsxdq_avx(auVar103);
      auVar103 = vpmovsxdq_avx(auVar40);
      auVar40 = vpshufd_avx(auVar40,0xee);
      auVar40 = vpmovsxdq_avx(auVar40);
                    /* WARNING: Could not recover jumptable at 0x000140c3686c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6c8b4 + *(int *)(&DAT_151c6c8b4 + uVar34 * 4)))
                (auVar103._0_8_,&DAT_151c6c8b4 + *(int *)(&DAT_151c6c8b4 + uVar34 * 4),
                 auVar163._0_8_,auVar40._0_8_);
      return;
    }
    auVar41 = vmaskmovps_avx(auVar98,ZEXT1632((undefined1  [16])0x0));
    auVar42 = vmaskmovps_avx(auVar98,ZEXT1632((undefined1  [16])0x0));
    auVar85 = vmaskmovps_avx(auVar98,ZEXT1632((undefined1  [16])0x0));
    auVar41 = vsubps_avx(auVar41,local_5a0);
    auVar42 = vsubps_avx(auVar42,local_580);
    auVar85 = vsubps_avx(auVar85,local_560._0_32_);
    auVar79._0_4_ = local_5a0._0_4_ + (float)local_7e0._0_4_ * auVar41._0_4_;
    auVar79._4_4_ = local_5a0._4_4_ + (float)local_7e0._4_4_ * auVar41._4_4_;
    auVar79._8_4_ = local_5a0._8_4_ + fStack_7d8 * auVar41._8_4_;
    auVar79._12_4_ = local_5a0._12_4_ + fStack_7d4 * auVar41._12_4_;
    auVar79._16_4_ = local_5a0._16_4_ + fStack_7d0 * auVar41._16_4_;
    auVar79._20_4_ = local_5a0._20_4_ + fStack_7cc * auVar41._20_4_;
    auVar79._24_4_ = local_5a0._24_4_ + fStack_7c8 * auVar41._24_4_;
    auVar79._28_4_ = local_5a0._28_4_ + fStack_7c4 * auVar41._28_4_;
    auVar114._0_4_ = local_580._0_4_ + (float)local_7e0._0_4_ * auVar42._0_4_;
    auVar114._4_4_ = local_580._4_4_ + (float)local_7e0._4_4_ * auVar42._4_4_;
    auVar114._8_4_ = local_580._8_4_ + fStack_7d8 * auVar42._8_4_;
    auVar114._12_4_ = local_580._12_4_ + fStack_7d4 * auVar42._12_4_;
    auVar114._16_4_ = local_580._16_4_ + fStack_7d0 * auVar42._16_4_;
    auVar114._20_4_ = local_580._20_4_ + fStack_7cc * auVar42._20_4_;
    auVar114._24_4_ = local_580._24_4_ + fStack_7c8 * auVar42._24_4_;
    auVar114._28_4_ = local_580._28_4_ + fStack_7c4 * auVar42._28_4_;
    auVar128._0_4_ = local_560._0_4_ + (float)local_7e0._0_4_ * auVar85._0_4_;
    auVar128._4_4_ = local_560._4_4_ + (float)local_7e0._4_4_ * auVar85._4_4_;
    auVar128._8_4_ = local_560._8_4_ + fStack_7d8 * auVar85._8_4_;
    auVar128._12_4_ = local_560._12_4_ + fStack_7d4 * auVar85._12_4_;
    auVar128._16_4_ = local_560._16_4_ + fStack_7d0 * auVar85._16_4_;
    auVar128._20_4_ = local_560._20_4_ + fStack_7cc * auVar85._20_4_;
    auVar128._24_4_ = local_560._24_4_ + fStack_7c8 * auVar85._24_4_;
    auVar128._28_4_ = local_560._28_4_ + fStack_7c4 * auVar85._28_4_;
    local_5a0 = vmaskmovps_avx(auVar98,auVar79);
    local_580 = vmaskmovps_avx(auVar98,auVar114);
    local_560._0_32_ = vmaskmovps_avx(auVar98,auVar128);
  }
  local_400 = (ulonglong)uVar31;
  local_3e0 = (ulonglong)*(uint *)((ulonglong)(uVar195 & _UNK_150b519d0) + lVar33);
  auVar186._16_16_ = local_580._0_16_;
  auVar186._0_16_ = local_5a0._0_16_;
  auVar198 = vperm2f128_avx(local_5a0,local_580,0x31);
  auVar171 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar85 = vperm2f128_avx(auVar171,local_560._0_32_,0x21);
  auVar41 = vshufps_avx(auVar85,auVar85,0x14);
  auVar41 = vblendps_avx(ZEXT1632(CONCAT88(local_560._0_8_,local_560._0_8_)),auVar41,0x48);
  auVar202._16_16_ = local_5a0._0_16_;
  auVar202._0_16_ = local_580._0_16_;
  auVar42 = vshufps_avx(auVar202,auVar202,0xe1);
  auVar42 = vblendps_avx(auVar186,auVar42,0x12);
  local_200 = vblendps_avx(auVar42,auVar41,0xcc);
  auVar41 = vshufps_avx(auVar85,auVar85,0xb4);
  auVar41 = vblendps_avx(ZEXT1632(local_560._0_16_),auVar41,0x48);
  auVar85 = vshufps_avx(auVar202,auVar202,0xeb);
  auVar42 = vshufpd_avx(auVar186,auVar186,5);
  auVar42 = vblendps_avx(auVar42,auVar85,0x12);
  local_1e0 = vblendps_avx(auVar42,auVar41,0xcc);
  auVar41 = vunpcklps_avx(local_560._0_32_,auVar171);
  auVar41 = vblendps_avx(ZEXT1632(CONCAT88(local_560._16_8_,local_560._16_8_)),auVar41,0x48);
  auVar85 = vperm2f128_avx(local_580,local_5a0,0x31);
  auVar42 = vshufps_avx(auVar85,auVar85,0xe1);
  auVar42 = vblendps_avx(auVar198,auVar42,0x12);
  local_1c0 = vblendps_avx(auVar42,auVar41,0xcc);
  auVar41 = vunpckhps_avx(local_560._0_32_,auVar171);
  auVar41 = vblendps_avx(ZEXT1632(local_560._16_16_),auVar41,0x48);
  auVar85 = vshufps_avx(auVar85,auVar85,0xeb);
  auVar42 = vshufpd_avx(auVar198,auVar198,5);
  auVar42 = vblendps_avx(auVar42,auVar85,0x12);
  local_1a0 = vblendps_avx(auVar42,auVar41,0xcc);
  auVar103 = vpcmpgtd_avx(auVar81,auVar80);
  auVar99._16_16_ = auVar163;
  auVar99._0_16_ = auVar103;
  uVar31 = vmovmskps_avx(auVar99);
  uVar34 = (ulonglong)uVar31;
  do {
    if (uVar34 == 0) {
      uVar31 = 0x40;
    }
    else {
      uVar31 = 0;
      for (uVar32 = uVar34; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x8000000000000000) {
        uVar31 = uVar31 + 1;
      }
    }
    bVar2 = (byte)uVar31 & 0x3f;
    local_240[0] = local_400;
    local_240[1] = 0;
    local_240[2] = local_3e0;
    uStack_228 = 0;
    auVar41 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar31 << 4)));
    lVar33 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar31 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + 0x20 + lVar33) = auVar41._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x30 + lVar33) = auVar41._16_16_;
    uVar34 = uVar34 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
  } while (uVar34 != 0);
  return;
}

// GetVariableKeyLerpPoseScales___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_Cuniun_3C_CunT_3E_CuniCunfCunTCuniCuni_avx @ 140c37950

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetVariableKeyLerpPoseScales___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_Cuniun_3C_CunT_3E_CuniCunfCunTCuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,longlong param_5,
               int param_6,float param_7,char param_8,uint param_9,uint param_10)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulonglong uVar31;
  char cVar32;
  int iVar33;
  longlong lVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  undefined4 uVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
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
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar88 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar74 [16];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar89 [16];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
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
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  uint uVar114;
  undefined1 auVar118 [16];
  undefined1 auVar115 [16];
  float fVar136;
  float fVar140;
  float fVar143;
  float fVar145;
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  float fVar138;
  float fVar147;
  undefined1 auVar129 [32];
  undefined1 auVar142 [16];
  undefined1 auVar131 [32];
  uint uVar137;
  uint uVar139;
  uint uVar141;
  uint uVar144;
  uint uVar146;
  uint uVar148;
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar149 [32];
  undefined1 auVar151 [16];
  undefined1 auVar150 [32];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [32];
  undefined1 auVar169 [16];
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
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  uint uVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  uint uVar178;
  uint uVar179;
  uint uVar180;
  uint uVar181;
  uint uVar183;
  uint uVar185;
  uint uVar187;
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  uint uVar182;
  uint uVar184;
  uint uVar186;
  uint uVar188;
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [16];
  undefined1 auVar197 [32];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  undefined1 auVar202 [16];
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  undefined1 auVar205 [32];
  undefined1 auVar206 [64];
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  undefined1 auVar209 [32];
  undefined1 auVar210 [16];
  undefined1 auVar211 [32];
  undefined1 auVar212 [32];
  undefined1 auVar213 [32];
  undefined1 auVar214 [32];
  undefined1 local_800 [8];
  float fStack_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float fStack_7e8;
  float fStack_7e4;
  ulonglong local_7b0;
  undefined1 local_7a0 [32];
  int local_750;
  int iStack_74c;
  int iStack_748;
  int iStack_744;
  undefined1 local_740 [32];
  uint local_720;
  uint local_6c0;
  uint uStack_6bc;
  uint uStack_6b8;
  uint uStack_6b4;
  uint uStack_6b0;
  uint uStack_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  undefined1 local_640 [32];
  undefined1 local_5e0 [32];
  undefined1 local_5c0 [32];
  undefined1 local_5a0 [64];
  ulonglong local_560;
  uint local_420;
  uint uStack_41c;
  uint uStack_418;
  uint uStack_414;
  uint uStack_410;
  uint uStack_40c;
  uint uStack_408;
  uint uStack_404;
  uint local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint uStack_2b4;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  ulonglong local_240 [3];
  undefined8 uStack_228;
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 auVar50 [32];
  undefined1 auVar56 [32];
  undefined1 auVar75 [32];
  undefined1 auVar113 [64];
  undefined1 auVar130 [32];
  undefined1 auVar193 [32];
  undefined1 auVar196 [32];
  
  iVar33 = *(int *)(&DAT_151c6cae0 + (longlong)(int)param_9 * 4);
  iVar1 = *(int *)(&DAT_151c6cac0 + (longlong)(int)param_9 * 4);
  uVar37 = param_10 + 7;
  if (-1 < (int)param_10) {
    uVar37 = param_10;
  }
  uVar39 = (ulonglong)param_9;
  local_720 = uVar37 & 0xfffffff8;
  if ((int)(uVar37 & 0xfffffff8) < 1) {
    uVar37 = 0;
  }
  else {
    auVar96 = vpshufd_avx(ZEXT416(param_4),0);
    auVar44 = vpslld_avx(auVar96,2);
    auVar96 = vpshufd_avx(ZEXT416(-(uint)(param_9 == 3)),0);
    auVar46 = vpshufd_avx(ZEXT416((uint)(iVar33 * iVar1)),0);
    uVar37 = 0;
    auVar97 = vpshufd_avx(ZEXT416((0.0 < param_7) - 1),0);
    auVar47._16_16_ = auVar97;
    auVar47._0_16_ = auVar97;
    fVar136 = (float)(param_6 + -1) * param_7;
    auVar97 = vshufps_avx(ZEXT416((uint)param_7),ZEXT416((uint)param_7),0);
    uVar170 = (int)fVar136;
    if ((int)fVar136 < 1) {
      uVar170 = 0;
    }
    if ((int)(param_6 - 2U) < (int)uVar170) {
      uVar170 = param_6 - 2U;
    }
    auVar25 = vpshufd_avx(ZEXT416(uVar170),0);
    auVar30 = vshufps_avx(ZEXT416((uint)fVar136),ZEXT416((uint)fVar136),0);
    auVar48._16_16_ = auVar30;
    auVar48._0_16_ = auVar30;
    auVar206 = ZEXT1264(ZEXT812(0));
    do {
      auVar101 = auVar206._0_32_;
      uVar38 = (ulonglong)(uVar37 * 8);
      auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar38);
      auVar210 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar38);
      auVar142 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar38);
      auVar151 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar38),auVar30,0xdd);
      auVar95 = vshufps_avx(auVar210,auVar142,0xdd);
      auVar74 = vpmulld_avx(auVar95,auVar44);
      auVar189 = vpmulld_avx(auVar151,auVar44);
      uVar170 = *(uint *)(param_3 + 4 + (longlong)auVar189._0_4_);
      auVar72 = ZEXT416(uVar170);
      uVar36 = *(uint *)(param_3 + 4 + (longlong)auVar74._0_4_);
      auVar45 = ZEXT416(uVar36);
      auVar95._4_4_ = __real_00000002;
      auVar95._0_4_ = __real_00000002;
      auVar95._8_4_ = __real_00000002;
      auVar95._12_4_ = __real_00000002;
      auVar151 = vpcmpgtd_avx(auVar95,auVar45);
      auVar95 = vpcmpgtd_avx(auVar95,auVar72);
      auVar209._16_16_ = auVar151;
      auVar209._0_16_ = auVar95;
      auVar209 = auVar209 | auVar47;
      auVar206 = ZEXT3264(auVar209);
      auVar151 = auVar209._0_16_;
      if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar209 >> 0x5f,0) & 1) != 0) || SUB321(auVar209 >> 0x7f,0) != '\0') ||
            (SUB321(auVar209 >> 0x9f,0) & 1) != 0) || SUB321(auVar209 >> 0xbf,0) != '\0') ||
          (SUB321(auVar209 >> 0xdf,0) & 1) != 0) || auVar209[0x1f] < '\0') {
        local_740 = vblendvps_avx(local_740,auVar101,auVar209);
        local_7a0 = vblendvps_avx(local_7a0,auVar101,auVar209);
      }
      uVar43 = *(uint *)(param_3 + auVar189._0_4_);
      uVar178 = *(uint *)(param_3 + auVar74._0_4_);
      auVar189 = vpmovsxdq_avx(ZEXT416(uVar43));
      auVar95 = vpshufd_avx(ZEXT416(uVar43),0xee);
      auVar169 = vpmovsxdq_avx(auVar95);
      auVar73 = vpmovsxdq_avx(ZEXT416(uVar178));
      auVar153 = vpshufd_avx(ZEXT416(uVar178),0xee);
      auVar74._4_4_ = __real_00000001;
      auVar74._0_4_ = __real_00000001;
      auVar74._8_4_ = __real_00000001;
      auVar74._12_4_ = __real_00000001;
      auVar95 = vpcmpgtd_avx(auVar45,auVar74);
      auVar74 = vpcmpgtd_avx(auVar72,auVar74);
      local_2c0 = auVar96._0_4_;
      uStack_2bc = auVar96._4_4_;
      uStack_2b8 = auVar96._8_4_;
      uStack_2b4 = auVar96._12_4_;
      auVar154._0_4_ = auVar74._0_4_ & local_2c0;
      auVar154._4_4_ = auVar74._4_4_ & uStack_2bc;
      auVar154._8_4_ = auVar74._8_4_ & uStack_2b8;
      auVar154._12_4_ = auVar74._12_4_ & uStack_2b4;
      auVar154._16_4_ = auVar95._0_4_ & local_2c0;
      auVar154._20_4_ = auVar95._4_4_ & uStack_2bc;
      auVar154._24_4_ = auVar95._8_4_ & uStack_2b8;
      auVar154._28_4_ = auVar95._12_4_ & uStack_2b4;
      auVar49 = vblendvps_avx(auVar101,
                              ___ymm_0000001800000018000000180000001800000018000000180000001800000018
                              ,auVar154);
      auVar153 = vpmovsxdq_avx(auVar153);
      auVar74 = auVar49._0_16_;
      auVar95 = vpmovsxdq_avx(auVar74);
      auVar95 = vpaddq_avx(auVar95,auVar189);
      auVar74 = vshufpd_avx(auVar74,auVar74,3);
      auVar74 = vpmovsxdq_avx(auVar74);
      auVar74 = vpaddq_avx(auVar74,auVar169);
      auVar169 = auVar49._16_16_;
      auVar202 = vpmovsxdq_avx(auVar169);
      auVar189 = vpaddq_avx(auVar202,auVar73);
      auVar169 = vshufpd_avx(auVar169,auVar169,3);
      auVar169 = vpmovsxdq_avx(auVar169);
      auVar169 = vpaddq_avx(auVar169,auVar153);
      auVar73 = vpcmpeqd_avx(auVar202,auVar202);
      auVar153 = vpcmpgtd_avx(auVar209._16_16_,auVar73);
      auVar202 = vpcmpgtd_avx(auVar151,auVar73);
      auVar49._16_16_ = auVar153;
      auVar49._0_16_ = auVar202;
      uVar43 = vmovmskps_avx(auVar49);
      _local_800 = ZEXT832(0) << 0x20;
      if (uVar43 != 0) {
        auVar202._0_4_ = uVar36 + auVar73._0_4_;
        auVar202._4_4_ = auVar73._4_4_;
        auVar202._8_4_ = auVar73._8_4_;
        auVar202._12_4_ = auVar73._12_4_;
        auVar26._0_4_ = uVar170 + auVar73._0_4_;
        auVar26._4_4_ = auVar73._4_4_;
        auVar26._8_4_ = auVar73._8_4_;
        auVar26._12_4_ = auVar73._12_4_;
        auVar119._16_16_ = auVar202;
        auVar119._0_16_ = auVar26;
        auVar49 = vcmpps_avx(auVar101,auVar101,0xf);
        auVar207._0_4_ = auVar209._0_4_ ^ auVar49._0_4_;
        auVar207._4_4_ = auVar209._4_4_ ^ auVar49._4_4_;
        auVar207._8_4_ = auVar209._8_4_ ^ auVar49._8_4_;
        auVar207._12_4_ = auVar209._12_4_ ^ auVar49._12_4_;
        auVar207._16_4_ = auVar209._16_4_ ^ auVar49._16_4_;
        auVar207._20_4_ = auVar209._20_4_ ^ auVar49._20_4_;
        auVar207._24_4_ = auVar209._24_4_ ^ auVar49._24_4_;
        auVar207._28_4_ = auVar209._28_4_ ^ auVar49._28_4_;
        if (__real_3f800000 <= param_7) {
          local_740 = vblendvps_avx(local_740,auVar119,auVar207);
          local_7a0 = vblendvps_avx(local_7a0,auVar119,auVar207);
        }
        else {
          auVar115 = vpmulld_avx(auVar72,auVar46);
          auVar45 = vpmulld_avx(auVar45,auVar46);
          auVar73 = vpmovsxdq_avx(auVar45);
          auVar45 = vpshufd_avx(auVar45,0xee);
          auVar88 = vpmovsxdq_avx(auVar45);
          auVar195 = vpmovsxdq_avx(auVar115);
          auVar45 = vpshufd_avx(auVar115,0xee);
          auVar45 = vpmovsxdq_avx(auVar45);
          auVar115._8_8_ = 0;
          auVar115._0_8_ = param_5 + 3;
          auVar115 = vpshufd_avx(auVar115,0x44);
          auVar45 = vpaddq_avx(auVar115,auVar45);
          auVar74 = vpaddq_avx(auVar45,auVar74);
          auVar45 = vpaddq_avx(auVar115,auVar195);
          auVar95 = vpaddq_avx(auVar95,auVar45);
          auVar45 = vpaddq_avx(auVar115,auVar88);
          auVar45 = vpaddq_avx(auVar45,auVar169);
          auVar169 = vpaddq_avx(auVar115,auVar73);
          auVar169 = vpaddq_avx(auVar169,auVar189);
          auVar73._0_4_ = auVar169._0_4_ & (uint)__real_fffffffffffffffc;
          auVar73._4_4_ = auVar169._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar73._8_4_ = auVar169._8_4_ & (uint)__real_fffffffffffffffc;
          auVar73._12_4_ = auVar169._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar75._16_4_ = auVar45._0_4_ & (uint)__real_fffffffffffffffc;
          auVar75._0_16_ = auVar73;
          auVar75._20_4_ = auVar45._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar75._24_4_ = auVar45._8_4_ & (uint)__real_fffffffffffffffc;
          auVar75._28_4_ = auVar45._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar195._0_4_ = auVar95._0_4_ & (uint)__real_fffffffffffffffc;
          auVar195._4_4_ = auVar95._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar195._8_4_ = auVar95._8_4_ & (uint)__real_fffffffffffffffc;
          auVar195._12_4_ = auVar95._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar196._16_4_ = auVar74._0_4_ & (uint)__real_fffffffffffffffc;
          auVar196._0_16_ = auVar195;
          auVar196._20_4_ = auVar74._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar196._24_4_ = auVar74._8_4_ & (uint)__real_fffffffffffffffc;
          auVar196._28_4_ = auVar74._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar209 = vcvtdq2ps_avx(auVar119);
          local_260 = auVar97._0_4_;
          fStack_25c = auVar97._4_4_;
          fStack_258 = auVar97._8_4_;
          fStack_254 = auVar97._12_4_;
          auVar45._0_4_ = (int)(auVar209._0_4_ * local_260);
          auVar45._4_4_ = (int)(auVar209._4_4_ * fStack_25c);
          auVar45._8_4_ = (int)(auVar209._8_4_ * fStack_258);
          auVar45._12_4_ = (int)(auVar209._12_4_ * fStack_254);
          auVar50._16_4_ = (int)(auVar209._16_4_ * local_260);
          auVar50._0_16_ = auVar45;
          auVar50._20_4_ = (int)(auVar209._20_4_ * fStack_25c);
          auVar50._24_4_ = (int)(auVar209._24_4_ * fStack_258);
          auVar50._28_4_ = (int)(auVar209._28_4_ * fStack_254);
          auVar95 = vpmaxsd_avx(auVar50._16_16_,(undefined1  [16])0x0);
          auVar74 = vpmaxsd_avx(auVar45,(undefined1  [16])0x0);
          auVar45 = vpminsd_avx(auVar95,auVar202);
          auVar169 = vpminsd_avx(auVar74,auVar26);
          auVar101._16_16_ = auVar45;
          auVar101._0_16_ = auVar169;
          auVar113 = ZEXT3264(auVar101);
          auVar88 = auVar75._16_16_;
          auVar115 = auVar196._16_16_;
          cVar32 = (char)uVar43;
          if (param_6 < 0x100) {
            auVar24 = vpmovsxdq_avx(auVar169);
            auVar172 = vpshufd_avx(auVar169,0xee);
            auVar172 = vpmovsxdq_avx(auVar172);
            auVar172 = vpaddq_avx(auVar115,auVar172);
            auVar24 = vpaddq_avx(auVar195,auVar24);
            auVar152 = vpcmpeqd_avx(auVar46,auVar46);
            auVar89 = auVar24;
            if ((uVar43 & 1) != 0) {
              auVar89 = ZEXT116(*auVar24._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar24 = vpinsrb_avx(auVar89,(uint)*auVar24._8_8_,1);
              auVar89 = vpblendw_avx(auVar24,auVar89,0xe);
            }
            if ((uVar43 & 4) != 0) {
              auVar24 = vpmovzxwd_avx(auVar89);
              auVar24 = vpinsrb_avx(auVar24,(uint)*auVar172._0_8_,2);
              auVar24 = vpinsrb_avx(auVar24,(uint)auVar89[3],3);
              auVar89 = vpblendw_avx(auVar24,auVar89,0xc);
            }
            if ((uVar43 & 8) != 0) {
              auVar24 = vpmovzxwd_avx(auVar89);
              auVar24 = vpinsrb_avx(auVar24,(uint)auVar89[2],2);
              auVar172 = vpinsrb_avx(auVar24,(uint)*auVar172._8_8_,3);
              auVar89 = vpblendw_avx(auVar172,auVar89,0xc);
            }
            auVar24 = vpmovsxdq_avx(auVar45);
            auVar172 = vpshufd_avx(auVar45,0xee);
            auVar172 = vpmovsxdq_avx(auVar172);
            auVar172 = vpaddq_avx(auVar172,auVar88);
            auVar24 = vpaddq_avx(auVar73,auVar24);
            if ((uVar43 & 0x10) != 0) {
              auVar27 = vpshufb_avx(auVar89,___xmm_80800706808005048080030203020100);
              auVar27 = vpinsrb_avx(auVar27,(uint)*auVar24._0_8_,4);
              auVar27 = vpinsrb_avx(auVar27,(uint)auVar89[5],5);
              auVar89 = vpblendw_avx(auVar27,auVar89,8);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar27 = vpshufb_avx(auVar89,___xmm_80800706808005048080030403020100);
              auVar24 = vpinsrb_avx(auVar27,(uint)*auVar24._8_8_,5);
              auVar89 = vpblendw_avx(auVar24,auVar89,8);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar24 = vpshufb_avx(auVar89,___xmm_80800706808005048080050403020100);
              auVar24 = vpinsrb_avx(auVar24,(uint)*auVar172._0_8_,6);
              auVar89 = vpinsrb_avx(auVar24,(uint)auVar89[7],7);
            }
            if (cVar32 < '\0') {
              auVar24 = vpshufb_avx(auVar89,___xmm_80800706808005048006050403020100);
              auVar89 = vpinsrb_avx(auVar24,(uint)*auVar172._8_8_,7);
            }
            auVar27 = vpmovzxbd_avx(auVar89);
            auVar172 = vpshufd_avx(auVar89,0x55);
            auVar89 = vpmovzxbd_avx(auVar172);
            auVar172 = vpcmpgtd_avx(auVar89,auVar25);
            auVar28 = auVar152 ^ auVar172;
            auVar24 = vpcmpgtd_avx(auVar27,auVar25);
            auVar29 = auVar152 ^ auVar24;
            auVar157._16_16_ = auVar28;
            auVar157._0_16_ = auVar29;
            auVar92._16_16_ = auVar172;
            auVar92._0_16_ = auVar24;
            auVar209 = auVar207 & ~auVar92;
            local_420 = auVar29._0_4_;
            uStack_41c = auVar29._4_4_;
            uStack_418 = auVar29._8_4_;
            uStack_414 = auVar29._12_4_;
            uStack_410 = auVar28._0_4_;
            uStack_40c = auVar28._4_4_;
            uStack_408 = auVar28._8_4_;
            uStack_404 = auVar28._12_4_;
            if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar209 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar209 >> 0x7f,0) != '\0') || (SUB321(auVar209 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar209 >> 0xbf,0) != '\0') || (SUB321(auVar209 >> 0xdf,0) & 1) != 0) ||
                auVar209[0x1f] < '\0') {
              auVar172 = vpcmpgtd_avx(auVar89,auVar25);
              auVar24 = vpcmpgtd_avx(auVar27,auVar25);
              auVar93._16_16_ = auVar172;
              auVar93._0_16_ = auVar24;
              auVar209 = vblendvps_avx(auVar119,auVar101,auVar93);
              auVar95 = vpcmpgtd_avx(auVar202,auVar95);
              auVar74 = vpcmpgtd_avx(auVar26,auVar74);
              uVar170 = auVar74._0_4_ & local_420;
              uVar178 = auVar74._4_4_ & uStack_41c;
              uVar179 = auVar74._8_4_ & uStack_418;
              uVar180 = auVar74._12_4_ & uStack_414;
              uVar181 = auVar95._0_4_ & uStack_410;
              uVar183 = auVar95._4_4_ & uStack_40c;
              uVar185 = auVar95._8_4_ & uStack_408;
              uVar187 = auVar95._12_4_ & uStack_404;
              auVar158._0_4_ = auVar207._0_4_ & uVar170;
              auVar158._4_4_ = auVar207._4_4_ & uVar178;
              auVar158._8_4_ = auVar207._8_4_ & uVar179;
              auVar158._12_4_ = auVar207._12_4_ & uVar180;
              auVar158._16_4_ = auVar207._16_4_ & uVar181;
              auVar158._20_4_ = auVar207._20_4_ & uVar183;
              auVar158._24_4_ = auVar207._24_4_ & uVar185;
              auVar158._28_4_ = auVar207._28_4_ & uVar187;
              iVar35 = vmovmskps_avx(auVar158);
              auVar203 = auVar101;
              while (auVar101 = auVar209, iVar35 != 0) {
                auVar24 = vpsubd_avx(auVar203._0_16_,auVar152);
                auVar74 = vpmovsxdq_avx(auVar24);
                auVar95 = vpshufd_avx(auVar24,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar115);
                auVar74 = vpaddq_avx(auVar195,auVar74);
                uVar40 = vmovmskps_avx(auVar158);
                auVar172 = auVar95;
                if ((uVar40 & 1) != 0) {
                  auVar172 = ZEXT116(*auVar74._0_8_);
                }
                if ((uVar40 & 2) != 0) {
                  auVar74 = vpinsrb_avx(auVar172,(uint)*auVar74._8_8_,1);
                  auVar172 = vpblendw_avx(auVar74,auVar172,0xe);
                }
                if ((uVar40 & 4) != 0) {
                  auVar74 = vpmovzxwd_avx(auVar172);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,2);
                  auVar74 = vpinsrb_avx(auVar74,(uint)auVar172[3],3);
                  auVar172 = vpblendw_avx(auVar74,auVar172,0xc);
                }
                if ((uVar40 & 8) != 0) {
                  auVar74 = vpmovzxwd_avx(auVar172);
                  auVar74 = vpinsrb_avx(auVar74,(uint)auVar172[2],2);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,3);
                  auVar172 = vpblendw_avx(auVar74,auVar172,0xc);
                }
                auVar95 = vpcmpeqd_avx(auVar95,auVar95);
                auVar152 = vpsubd_avx(auVar203._16_16_,auVar95);
                auVar74 = vpmovsxdq_avx(auVar152);
                auVar95 = vpshufd_avx(auVar152,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar88);
                auVar74 = vpaddq_avx(auVar73,auVar74);
                if ((uVar40 & 0x10) != 0) {
                  auVar28 = vpshufb_avx(auVar172,___xmm_80800706808005048080030203020100);
                  auVar28 = vpinsrb_avx(auVar28,(uint)*auVar74._0_8_,4);
                  auVar28 = vpinsrb_avx(auVar28,(uint)auVar172[5],5);
                  auVar172 = vpblendw_avx(auVar28,auVar172,8);
                }
                if ((uVar40 & 0x20) != 0) {
                  auVar28 = vpshufb_avx(auVar172,___xmm_80800706808005048080030403020100);
                  auVar74 = vpinsrb_avx(auVar28,(uint)*auVar74._8_8_,5);
                  auVar172 = vpblendw_avx(auVar74,auVar172,8);
                }
                if ((uVar40 & 0x40) != 0) {
                  auVar74 = vpshufb_avx(auVar172,___xmm_80800706808005048080050403020100);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,6);
                  auVar172 = vpinsrb_avx(auVar74,(uint)auVar172[7],7);
                }
                if ((char)uVar40 < '\0') {
                  auVar74 = vpshufb_avx(auVar172,___xmm_80800706808005048006050403020100);
                  auVar172 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,7);
                }
                auVar74 = vpmovzxbd_avx(auVar172);
                auVar95 = vpshufd_avx(auVar172,0x55);
                auVar95 = vpmovzxbd_avx(auVar95);
                auVar95 = vpcmpgtd_avx(auVar95,auVar25);
                auVar74 = vpcmpgtd_avx(auVar74,auVar25);
                auVar199._0_4_ = auVar74._0_4_ & uVar170;
                auVar199._4_4_ = auVar74._4_4_ & uVar178;
                auVar199._8_4_ = auVar74._8_4_ & uVar179;
                auVar199._12_4_ = auVar74._12_4_ & uVar180;
                auVar199._16_4_ = auVar95._0_4_ & uVar181;
                auVar199._20_4_ = auVar95._4_4_ & uVar183;
                auVar199._24_4_ = auVar95._8_4_ & uVar185;
                auVar199._28_4_ = auVar95._12_4_ & uVar187;
                auVar159 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar123._0_4_ = auVar199._0_4_ & auVar207._0_4_;
                auVar123._4_4_ = auVar199._4_4_ & auVar207._4_4_;
                auVar123._8_4_ = auVar199._8_4_ & auVar207._8_4_;
                auVar123._12_4_ = auVar199._12_4_ & auVar207._12_4_;
                auVar123._16_4_ = auVar199._16_4_ & auVar207._16_4_;
                auVar123._20_4_ = auVar199._20_4_ & auVar207._20_4_;
                auVar123._24_4_ = auVar199._24_4_ & auVar207._24_4_;
                auVar123._28_4_ = auVar199._28_4_ & auVar207._28_4_;
                uVar42 = vmovmskps_avx(auVar123);
                if ((char)iVar35 != (char)uVar42) {
                  auVar159._0_4_ = auVar199._0_4_ ^ uVar170;
                  auVar159._4_4_ = auVar199._4_4_ ^ uVar178;
                  auVar159._8_4_ = auVar199._8_4_ ^ uVar179;
                  auVar159._12_4_ = auVar199._12_4_ ^ uVar180;
                  auVar159._16_4_ = auVar199._16_4_ ^ uVar181;
                  auVar159._20_4_ = auVar199._20_4_ ^ uVar183;
                  auVar159._24_4_ = auVar199._24_4_ ^ uVar185;
                  auVar159._28_4_ = auVar199._28_4_ ^ uVar187;
                }
                auVar209 = vblendvps_avx(auVar101,auVar203,auVar199);
                auVar203._16_16_ = auVar152;
                auVar203._0_16_ = auVar24;
                auVar95 = vpcmpgtd_avx(auVar202,auVar152);
                auVar74 = vpcmpgtd_avx(auVar26,auVar24);
                uVar170 = auVar74._0_4_ & auVar159._0_4_;
                uVar178 = auVar74._4_4_ & auVar159._4_4_;
                uVar179 = auVar74._8_4_ & auVar159._8_4_;
                uVar180 = auVar74._12_4_ & auVar159._12_4_;
                uVar181 = auVar95._0_4_ & auVar159._16_4_;
                uVar183 = auVar95._4_4_ & auVar159._20_4_;
                uVar185 = auVar95._8_4_ & auVar159._24_4_;
                uVar187 = auVar95._12_4_ & auVar159._28_4_;
                auVar158._0_4_ = auVar207._0_4_ & uVar170;
                auVar158._4_4_ = auVar207._4_4_ & uVar178;
                auVar158._8_4_ = auVar207._8_4_ & uVar179;
                auVar158._12_4_ = auVar207._12_4_ & uVar180;
                auVar158._16_4_ = auVar207._16_4_ & uVar181;
                auVar158._20_4_ = auVar207._20_4_ & uVar183;
                auVar158._24_4_ = auVar207._24_4_ & uVar185;
                auVar158._28_4_ = auVar207._28_4_ & uVar187;
                iVar35 = vmovmskps_avx(auVar158);
                auVar152 = vpcmpeqd_avx(auVar152,auVar152);
              }
            }
            auVar95 = vpcmpgtd_avx(auVar89,auVar25);
            auVar74 = vpcmpgtd_avx(auVar27,auVar25);
            auVar126._16_16_ = auVar95;
            auVar126._0_16_ = auVar74;
            auVar95 = vpcmpgtd_avx(auVar151,auVar152);
            auVar163._16_16_ = auVar153;
            auVar163._0_16_ = auVar95;
            auVar126 = auVar126 & auVar163;
            if ((((((((SUB321(auVar126 >> 0x1f,0) & 1) != 0 || (SUB321(auVar126 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar126 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar126 >> 0x7f,0) != '\0') || (SUB321(auVar126 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar126 >> 0xbf,0) != '\0') || (SUB321(auVar126 >> 0xdf,0) & 1) != 0) ||
                auVar126[0x1f] < '\0') {
              auVar101 = vblendvps_avx(ZEXT832(0) << 0x20,auVar101,auVar157);
              auVar153._4_4_ = __real_00000001;
              auVar153._0_4_ = __real_00000001;
              auVar153._8_4_ = __real_00000001;
              auVar153._12_4_ = __real_00000001;
              auVar151 = vpcmpgtd_avx(auVar45,auVar153);
              auVar95 = vpcmpgtd_avx(auVar169,auVar153);
              uVar170 = ~local_420 & auVar95._0_4_;
              uVar178 = ~uStack_41c & auVar95._4_4_;
              uVar179 = ~uStack_418 & auVar95._8_4_;
              uVar180 = ~uStack_414 & auVar95._12_4_;
              uVar181 = ~uStack_410 & auVar151._0_4_;
              uVar183 = ~uStack_40c & auVar151._4_4_;
              uVar185 = ~uStack_408 & auVar151._8_4_;
              uVar187 = ~uStack_404 & auVar151._12_4_;
              auVar164._0_4_ = auVar207._0_4_ & uVar170;
              auVar164._4_4_ = auVar207._4_4_ & uVar178;
              auVar164._8_4_ = auVar207._8_4_ & uVar179;
              auVar164._12_4_ = auVar207._12_4_ & uVar180;
              auVar164._16_4_ = auVar207._16_4_ & uVar181;
              auVar164._20_4_ = auVar207._20_4_ & uVar183;
              auVar164._24_4_ = auVar207._24_4_ & uVar185;
              auVar164._28_4_ = auVar207._28_4_ & uVar187;
              iVar35 = vmovmskps_avx(auVar164);
              while (auVar151 = auVar206._0_16_, iVar35 != 0) {
                auVar151._0_4_ = auVar152._0_4_ + auVar113._0_4_;
                auVar151._4_4_ = auVar152._4_4_ + auVar113._4_4_;
                auVar151._8_4_ = auVar152._8_4_ + auVar113._8_4_;
                auVar151._12_4_ = auVar152._12_4_ + auVar113._12_4_;
                auVar74 = vpmovsxdq_avx(auVar151);
                auVar95 = vpshufd_avx(auVar151,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar115);
                auVar74 = vpaddq_avx(auVar195,auVar74);
                uVar40 = vmovmskps_avx(auVar164);
                auVar45 = auVar95;
                if ((uVar40 & 1) != 0) {
                  auVar45 = ZEXT116(*auVar74._0_8_);
                }
                if ((uVar40 & 2) != 0) {
                  auVar74 = vpinsrb_avx(auVar45,(uint)*auVar74._8_8_,1);
                  auVar45 = vpblendw_avx(auVar74,auVar45,0xe);
                }
                if ((uVar40 & 4) != 0) {
                  auVar74 = vpmovzxwd_avx(auVar45);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,2);
                  auVar74 = vpinsrb_avx(auVar74,(uint)auVar45[3],3);
                  auVar45 = vpblendw_avx(auVar74,auVar45,0xc);
                }
                if ((uVar40 & 8) != 0) {
                  auVar74 = vpmovzxwd_avx(auVar45);
                  auVar74 = vpinsrb_avx(auVar74,(uint)auVar45[2],2);
                  auVar95 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,3);
                  auVar45 = vpblendw_avx(auVar95,auVar45,0xc);
                }
                auVar169._0_4_ = auVar113._16_4_ + auVar152._0_4_;
                auVar169._4_4_ = auVar113._20_4_ + auVar152._4_4_;
                auVar169._8_4_ = auVar113._24_4_ + auVar152._8_4_;
                auVar169._12_4_ = auVar113._28_4_ + auVar152._12_4_;
                auVar206 = ZEXT1664(auVar169);
                auVar74 = vpmovsxdq_avx(auVar169);
                auVar95 = vpshufd_avx(auVar169,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar88);
                auVar74 = vpaddq_avx(auVar73,auVar74);
                if ((uVar40 & 0x10) != 0) {
                  auVar153 = vpshufb_avx(auVar45,___xmm_80800706808005048080030203020100);
                  auVar153 = vpinsrb_avx(auVar153,(uint)*auVar74._0_8_,4);
                  auVar153 = vpinsrb_avx(auVar153,(uint)auVar45[5],5);
                  auVar45 = vpblendw_avx(auVar153,auVar45,8);
                }
                if ((uVar40 & 0x20) != 0) {
                  auVar153 = vpshufb_avx(auVar45,___xmm_80800706808005048080030403020100);
                  auVar74 = vpinsrb_avx(auVar153,(uint)*auVar74._8_8_,5);
                  auVar45 = vpblendw_avx(auVar74,auVar45,8);
                }
                if ((uVar40 & 0x40) != 0) {
                  auVar74 = vpshufb_avx(auVar45,___xmm_80800706808005048080050403020100);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,6);
                  auVar45 = vpinsrb_avx(auVar74,(uint)auVar45[7],7);
                }
                if ((char)uVar40 < '\0') {
                  auVar74 = vpshufb_avx(auVar45,___xmm_80800706808005048006050403020100);
                  auVar45 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,7);
                }
                auVar74 = vpmovzxbd_avx(auVar45);
                auVar95 = vpshufd_avx(auVar45,0x55);
                auVar95 = vpmovzxbd_avx(auVar95);
                auVar95 = vpcmpgtd_avx(auVar95,auVar25);
                auVar74 = vpcmpgtd_avx(auVar74,auVar25);
                auVar201._0_4_ = ~auVar74._0_4_ & uVar170;
                auVar201._4_4_ = ~auVar74._4_4_ & uVar178;
                auVar201._8_4_ = ~auVar74._8_4_ & uVar179;
                auVar201._12_4_ = ~auVar74._12_4_ & uVar180;
                auVar201._16_4_ = ~auVar95._0_4_ & uVar181;
                auVar201._20_4_ = ~auVar95._4_4_ & uVar183;
                auVar201._24_4_ = ~auVar95._8_4_ & uVar185;
                auVar201._28_4_ = ~auVar95._12_4_ & uVar187;
                auVar165 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar128._0_4_ = auVar201._0_4_ & auVar207._0_4_;
                auVar128._4_4_ = auVar201._4_4_ & auVar207._4_4_;
                auVar128._8_4_ = auVar201._8_4_ & auVar207._8_4_;
                auVar128._12_4_ = auVar201._12_4_ & auVar207._12_4_;
                auVar128._16_4_ = auVar201._16_4_ & auVar207._16_4_;
                auVar128._20_4_ = auVar201._20_4_ & auVar207._20_4_;
                auVar128._24_4_ = auVar201._24_4_ & auVar207._24_4_;
                auVar128._28_4_ = auVar201._28_4_ & auVar207._28_4_;
                uVar42 = vmovmskps_avx(auVar128);
                if ((char)iVar35 != (char)uVar42) {
                  auVar165._0_4_ = auVar201._0_4_ ^ uVar170;
                  auVar165._4_4_ = auVar201._4_4_ ^ uVar178;
                  auVar165._8_4_ = auVar201._8_4_ ^ uVar179;
                  auVar165._12_4_ = auVar201._12_4_ ^ uVar180;
                  auVar165._16_4_ = auVar201._16_4_ ^ uVar181;
                  auVar165._20_4_ = auVar201._20_4_ ^ uVar183;
                  auVar165._24_4_ = auVar201._24_4_ ^ uVar185;
                  auVar165._28_4_ = auVar201._28_4_ ^ uVar187;
                }
                auVar127._16_16_ = auVar169;
                auVar127._0_16_ = auVar151;
                auVar101 = vblendvps_avx(auVar101,auVar127,auVar201);
                auVar172._4_4_ = __real_00000002;
                auVar172._0_4_ = __real_00000002;
                auVar172._8_4_ = __real_00000002;
                auVar172._12_4_ = __real_00000002;
                auVar151 = vpcmpgtd_avx(auVar113._0_16_,auVar172);
                auVar95 = vpcmpgtd_avx(auVar113._16_16_,auVar172);
                uVar170 = auVar151._0_4_ & auVar165._0_4_;
                uVar178 = auVar151._4_4_ & auVar165._4_4_;
                uVar179 = auVar151._8_4_ & auVar165._8_4_;
                uVar180 = auVar151._12_4_ & auVar165._12_4_;
                uVar181 = auVar95._0_4_ & auVar165._16_4_;
                uVar183 = auVar95._4_4_ & auVar165._20_4_;
                uVar185 = auVar95._8_4_ & auVar165._24_4_;
                uVar187 = auVar95._12_4_ & auVar165._28_4_;
                auVar164._0_4_ = auVar207._0_4_ & uVar170;
                auVar164._4_4_ = auVar207._4_4_ & uVar178;
                auVar164._8_4_ = auVar207._8_4_ & uVar179;
                auVar164._12_4_ = auVar207._12_4_ & uVar180;
                auVar164._16_4_ = auVar207._16_4_ & uVar181;
                auVar164._20_4_ = auVar207._20_4_ & uVar183;
                auVar164._24_4_ = auVar207._24_4_ & uVar185;
                auVar164._28_4_ = auVar207._28_4_ & uVar187;
                iVar35 = vmovmskps_avx(auVar164);
                auVar113 = ZEXT3264(auVar127);
              }
            }
            local_740 = vblendvps_avx(local_740,auVar101,auVar207);
            auVar169 = local_740._0_16_;
            auVar74 = vpmovsxdq_avx(auVar169);
            auVar95 = vshufpd_avx(auVar169,auVar169,3);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar115,auVar95);
            auVar74 = vpaddq_avx(auVar195,auVar74);
            auVar45 = auVar74;
            if ((uVar43 & 1) != 0) {
              auVar45 = ZEXT116(*auVar74._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar74 = vpinsrb_avx(auVar45,(uint)*auVar74._8_8_,1);
              auVar45 = vpblendw_avx(auVar74,auVar45,0xe);
            }
            if ((uVar43 & 4) != 0) {
              auVar74 = vpmovzxwd_avx(auVar45);
              auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,2);
              auVar74 = vpinsrb_avx(auVar74,(uint)auVar45[3],3);
              auVar45 = vpblendw_avx(auVar74,auVar45,0xc);
            }
            if ((uVar43 & 8) != 0) {
              auVar74 = vpmovzxwd_avx(auVar45);
              auVar74 = vpinsrb_avx(auVar74,(uint)auVar45[2],2);
              auVar95 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,3);
              auVar45 = vpblendw_avx(auVar95,auVar45,0xc);
            }
            auVar202 = local_740._16_16_;
            auVar74 = vpmovsxdq_avx(auVar202);
            auVar95 = vshufpd_avx(auVar202,auVar202,3);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar95,auVar88);
            auVar74 = vpaddq_avx(auVar73,auVar74);
            auVar153 = auVar74;
            if ((uVar43 & 0x10) != 0) {
              auVar153 = vpshufb_avx(auVar45,___xmm_80800706808005048080030203020100);
              auVar153 = vpinsrb_avx(auVar153,(uint)*auVar74._0_8_,4);
              auVar153 = vpinsrb_avx(auVar153,(uint)auVar45[5],5);
              auVar45 = vpblendw_avx(auVar153,auVar45,8);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar153 = vpshufb_avx(auVar45,___xmm_80800706808005048080030403020100);
              auVar153 = vpinsrb_avx(auVar153,(uint)*auVar74._8_8_,5);
              auVar45 = vpblendw_avx(auVar153,auVar45,8);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar74 = vpshufb_avx(auVar45,___xmm_80800706808005048080050403020100);
              auVar153 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,6);
              auVar45 = vpinsrb_avx(auVar153,(uint)auVar45[7],7);
            }
            if (cVar32 < '\0') {
              auVar74 = vpshufb_avx(auVar45,___xmm_80800706808005048006050403020100);
              auVar45 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,7);
              auVar153 = auVar95;
            }
            auVar95 = vpcmpeqd_avx(auVar153,auVar153);
            auVar74 = vpsubd_avx(auVar202,auVar95);
            auVar95 = vpsubd_avx(auVar169,auVar95);
            auVar102._16_16_ = auVar74;
            auVar102._0_16_ = auVar95;
            local_7a0 = vblendvps_avx(local_7a0,auVar102,auVar207);
            auVar95 = vpcmpgtd_avx(ZEXT416(uVar36),local_7a0._16_16_);
            auVar74 = vpcmpgtd_avx(auVar72,local_7a0._0_16_);
            auVar103._16_16_ = auVar95;
            auVar103._0_16_ = auVar74;
            auVar209 = auVar207 & ~auVar103;
            if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar209 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar209 >> 0x7f,0) != '\0') || (SUB321(auVar209 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar209 >> 0xbf,0) != '\0') || (SUB321(auVar209 >> 0xdf,0) & 1) != 0) ||
                auVar209[0x1f] < '\0') {
              auVar104._0_4_ = ~auVar74._0_4_ & auVar207._0_4_;
              auVar104._4_4_ = ~auVar74._4_4_ & auVar207._4_4_;
              auVar104._8_4_ = ~auVar74._8_4_ & auVar207._8_4_;
              auVar104._12_4_ = ~auVar74._12_4_ & auVar207._12_4_;
              auVar104._16_4_ = ~auVar95._0_4_ & auVar207._16_4_;
              auVar104._20_4_ = ~auVar95._4_4_ & auVar207._20_4_;
              auVar104._24_4_ = ~auVar95._8_4_ & auVar207._24_4_;
              auVar104._28_4_ = ~auVar95._12_4_ & auVar207._28_4_;
              local_7a0 = vblendvps_avx(local_7a0,auVar119,auVar104);
            }
            auVar74 = vpmovsxdq_avx(local_7a0._0_16_);
            auVar95 = vpshufd_avx(local_7a0._0_16_,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar115,auVar95);
            auVar74 = vpaddq_avx(auVar195,auVar74);
            auVar72 = auVar95;
            if ((uVar43 & 1) != 0) {
              auVar72 = ZEXT116(*auVar74._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar74 = vpinsrb_avx(auVar72,(uint)*auVar74._8_8_,1);
              auVar72 = vpblendw_avx(auVar74,auVar72,0xe);
            }
            if ((uVar43 & 4) != 0) {
              auVar74 = vpmovzxwd_avx(auVar72);
              auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,2);
              auVar74 = vpinsrb_avx(auVar74,(uint)auVar72[3],3);
              auVar72 = vpblendw_avx(auVar74,auVar72,0xc);
            }
            if ((uVar43 & 8) != 0) {
              auVar74 = vpmovzxwd_avx(auVar72);
              auVar74 = vpinsrb_avx(auVar74,(uint)auVar72[2],2);
              auVar95 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,3);
              auVar72 = vpblendw_avx(auVar95,auVar72,0xc);
            }
            auVar74 = vpmovsxdq_avx(local_7a0._16_16_);
            auVar95 = vpshufd_avx(local_7a0._16_16_,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar95,auVar88);
            auVar74 = vpaddq_avx(auVar73,auVar74);
            if ((uVar43 & 0x10) != 0) {
              auVar169 = vpshufb_avx(auVar72,___xmm_80800706808005048080030203020100);
              auVar169 = vpinsrb_avx(auVar169,(uint)*auVar74._0_8_,4);
              auVar169 = vpinsrb_avx(auVar169,(uint)auVar72[5],5);
              auVar72 = vpblendw_avx(auVar169,auVar72,8);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar169 = vpshufb_avx(auVar72,___xmm_80800706808005048080030403020100);
              auVar74 = vpinsrb_avx(auVar169,(uint)*auVar74._8_8_,5);
              auVar72 = vpblendw_avx(auVar74,auVar72,8);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar74 = vpshufb_avx(auVar72,___xmm_80800706808005048080050403020100);
              auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,6);
              auVar72 = vpinsrb_avx(auVar74,(uint)auVar72[7],7);
            }
            if (cVar32 < '\0') {
              auVar74 = vpshufb_avx(auVar72,___xmm_80800706808005048006050403020100);
              auVar72 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,7);
            }
            auVar95 = vpmovzxbd_avx(auVar45);
            auVar74 = vpshufd_avx(auVar45,0x55);
            auVar74 = vpmovzxbd_avx(auVar74);
            auVar76._16_16_ = auVar74;
            auVar76._0_16_ = auVar95;
            auVar95 = vpmovzxbd_avx(auVar72);
            auVar74 = vpshufd_avx(auVar72,0x55);
            auVar74 = vpmovzxbd_avx(auVar74);
            auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          else {
            auVar24._4_4_ = auVar169._4_4_ * 2;
            auVar24._0_4_ = auVar169._0_4_ * 2;
            auVar24._8_4_ = auVar169._8_4_ * 2;
            auVar24._12_4_ = auVar169._12_4_ * 2;
            auVar89 = vpmovsxdq_avx(auVar24);
            auVar172 = vpshufd_avx(auVar24,0xee);
            auVar172 = vpmovsxdq_avx(auVar172);
            auVar172 = vpaddq_avx(auVar115,auVar172);
            auVar24 = vpaddq_avx(auVar195,auVar89);
            auVar89 = vpcmpeqd_avx(auVar46,auVar46);
            auVar152 = auVar172;
            if ((uVar43 & 1) != 0) {
              auVar152 = ZEXT216(*auVar24._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar24._8_8_,1);
            }
            if ((uVar43 & 4) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar172._0_8_,2);
            }
            if ((uVar43 & 8) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar172._8_8_,3);
            }
            local_750 = auVar45._0_4_;
            iStack_74c = auVar45._4_4_;
            iStack_748 = auVar45._8_4_;
            iStack_744 = auVar45._12_4_;
            auVar27._4_4_ = iStack_74c * 2;
            auVar27._0_4_ = local_750 * 2;
            auVar27._8_4_ = iStack_748 * 2;
            auVar27._12_4_ = iStack_744 * 2;
            auVar24 = vpmovsxdq_avx(auVar27);
            auVar172 = vpshufd_avx(auVar27,0xee);
            auVar172 = vpmovsxdq_avx(auVar172);
            auVar172 = vpaddq_avx(auVar172,auVar88);
            auVar24 = vpaddq_avx(auVar73,auVar24);
            if ((uVar43 & 0x10) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar24._0_8_,4);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar24._8_8_,5);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar172._0_8_,6);
            }
            if (cVar32 < '\0') {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar172._8_8_,7);
            }
            auVar27 = vpunpckhwd_avx(auVar152,___xmm_00000000000000000000000000000000);
            auVar152 = vpmovzxwd_avx(auVar152);
            auVar172 = vpcmpgtd_avx(auVar27,auVar25);
            auVar28 = auVar89 ^ auVar172;
            auVar24 = vpcmpgtd_avx(auVar152,auVar25);
            auVar29 = auVar89 ^ auVar24;
            auVar120._16_16_ = auVar28;
            auVar120._0_16_ = auVar29;
            auVar90._16_16_ = auVar172;
            auVar90._0_16_ = auVar24;
            auVar209 = auVar207 & ~auVar90;
            local_420 = auVar29._0_4_;
            uStack_41c = auVar29._4_4_;
            uStack_418 = auVar29._8_4_;
            uStack_414 = auVar29._12_4_;
            uStack_410 = auVar28._0_4_;
            uStack_40c = auVar28._4_4_;
            uStack_408 = auVar28._8_4_;
            uStack_404 = auVar28._12_4_;
            if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar209 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar209 >> 0x7f,0) != '\0') || (SUB321(auVar209 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar209 >> 0xbf,0) != '\0') || (SUB321(auVar209 >> 0xdf,0) & 1) != 0) ||
                auVar209[0x1f] < '\0') {
              auVar172 = vpcmpgtd_avx(auVar27,auVar25);
              auVar24 = vpcmpgtd_avx(auVar152,auVar25);
              auVar91._16_16_ = auVar172;
              auVar91._0_16_ = auVar24;
              auVar209 = vblendvps_avx(auVar119,auVar101,auVar91);
              auVar95 = vpcmpgtd_avx(auVar202,auVar95);
              auVar74 = vpcmpgtd_avx(auVar26,auVar74);
              uVar170 = auVar74._0_4_ & local_420;
              uVar178 = auVar74._4_4_ & uStack_41c;
              uVar179 = auVar74._8_4_ & uStack_418;
              uVar180 = auVar74._12_4_ & uStack_414;
              uVar181 = auVar95._0_4_ & uStack_410;
              uVar183 = auVar95._4_4_ & uStack_40c;
              uVar185 = auVar95._8_4_ & uStack_408;
              uVar187 = auVar95._12_4_ & uStack_404;
              auVar155._0_4_ = auVar207._0_4_ & uVar170;
              auVar155._4_4_ = auVar207._4_4_ & uVar178;
              auVar155._8_4_ = auVar207._8_4_ & uVar179;
              auVar155._12_4_ = auVar207._12_4_ & uVar180;
              auVar155._16_4_ = auVar207._16_4_ & uVar181;
              auVar155._20_4_ = auVar207._20_4_ & uVar183;
              auVar155._24_4_ = auVar207._24_4_ & uVar185;
              auVar155._28_4_ = auVar207._28_4_ & uVar187;
              iVar35 = vmovmskps_avx(auVar155);
              auVar191 = auVar101;
              auVar121 = auVar119;
              while (auVar101 = auVar209, iVar35 != 0) {
                auVar24 = vpsubd_avx(auVar191._0_16_,auVar89);
                auVar89._4_4_ = auVar24._4_4_ * 2;
                auVar89._0_4_ = auVar24._0_4_ * 2;
                auVar89._8_4_ = auVar24._8_4_ * 2;
                auVar89._12_4_ = auVar24._12_4_ * 2;
                auVar74 = vpmovsxdq_avx(auVar89);
                auVar95 = vpshufd_avx(auVar89,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar115);
                auVar74 = vpaddq_avx(auVar195,auVar74);
                uVar40 = vmovmskps_avx(auVar155);
                auVar172 = auVar95;
                if ((uVar40 & 1) != 0) {
                  auVar172 = ZEXT216(*auVar74._0_8_);
                }
                if ((uVar40 & 2) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar74._8_8_,1);
                }
                if ((uVar40 & 4) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar95._0_8_,2);
                }
                if ((uVar40 & 8) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar95._8_8_,3);
                }
                auVar95 = vpcmpeqd_avx(auVar121._0_16_,auVar121._0_16_);
                auVar89 = vpsubd_avx(auVar191._16_16_,auVar95);
                auVar28._4_4_ = auVar89._4_4_ * 2;
                auVar28._0_4_ = auVar89._0_4_ * 2;
                auVar28._8_4_ = auVar89._8_4_ * 2;
                auVar28._12_4_ = auVar89._12_4_ * 2;
                auVar74 = vpmovsxdq_avx(auVar28);
                auVar95 = vpshufd_avx(auVar28,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar88);
                auVar74 = vpaddq_avx(auVar73,auVar74);
                if ((uVar40 & 0x10) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar74._0_8_,4);
                }
                if ((uVar40 & 0x20) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar74._8_8_,5);
                }
                if ((uVar40 & 0x40) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar95._0_8_,6);
                }
                if ((char)uVar40 < '\0') {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar95._8_8_,7);
                }
                auVar95 = vpunpckhwd_avx(auVar172,___xmm_00000000000000000000000000000000);
                auVar74 = vpmovzxwd_avx(auVar172);
                auVar95 = vpcmpgtd_avx(auVar95,auVar25);
                auVar74 = vpcmpgtd_avx(auVar74,auVar25);
                auVar198._0_4_ = auVar74._0_4_ & uVar170;
                auVar198._4_4_ = auVar74._4_4_ & uVar178;
                auVar198._8_4_ = auVar74._8_4_ & uVar179;
                auVar198._12_4_ = auVar74._12_4_ & uVar180;
                auVar198._16_4_ = auVar95._0_4_ & uVar181;
                auVar198._20_4_ = auVar95._4_4_ & uVar183;
                auVar198._24_4_ = auVar95._8_4_ & uVar185;
                auVar198._28_4_ = auVar95._12_4_ & uVar187;
                auVar156 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar122._0_4_ = auVar198._0_4_ & auVar207._0_4_;
                auVar122._4_4_ = auVar198._4_4_ & auVar207._4_4_;
                auVar122._8_4_ = auVar198._8_4_ & auVar207._8_4_;
                auVar122._12_4_ = auVar198._12_4_ & auVar207._12_4_;
                auVar122._16_4_ = auVar198._16_4_ & auVar207._16_4_;
                auVar122._20_4_ = auVar198._20_4_ & auVar207._20_4_;
                auVar122._24_4_ = auVar198._24_4_ & auVar207._24_4_;
                auVar122._28_4_ = auVar198._28_4_ & auVar207._28_4_;
                uVar42 = vmovmskps_avx(auVar122);
                if ((char)iVar35 != (char)uVar42) {
                  auVar156._0_4_ = auVar198._0_4_ ^ uVar170;
                  auVar156._4_4_ = auVar198._4_4_ ^ uVar178;
                  auVar156._8_4_ = auVar198._8_4_ ^ uVar179;
                  auVar156._12_4_ = auVar198._12_4_ ^ uVar180;
                  auVar156._16_4_ = auVar198._16_4_ ^ uVar181;
                  auVar156._20_4_ = auVar198._20_4_ ^ uVar183;
                  auVar156._24_4_ = auVar198._24_4_ ^ uVar185;
                  auVar156._28_4_ = auVar198._28_4_ ^ uVar187;
                }
                auVar209 = vblendvps_avx(auVar101,auVar191,auVar198);
                auVar191._16_16_ = auVar89;
                auVar191._0_16_ = auVar24;
                auVar95 = vpcmpgtd_avx(auVar202,auVar89);
                auVar74 = vpcmpgtd_avx(auVar26,auVar24);
                auVar121._16_16_ = auVar95;
                auVar121._0_16_ = auVar74;
                uVar170 = auVar74._0_4_ & auVar156._0_4_;
                uVar178 = auVar74._4_4_ & auVar156._4_4_;
                uVar179 = auVar74._8_4_ & auVar156._8_4_;
                uVar180 = auVar74._12_4_ & auVar156._12_4_;
                uVar181 = auVar95._0_4_ & auVar156._16_4_;
                uVar183 = auVar95._4_4_ & auVar156._20_4_;
                uVar185 = auVar95._8_4_ & auVar156._24_4_;
                uVar187 = auVar95._12_4_ & auVar156._28_4_;
                auVar155._0_4_ = auVar207._0_4_ & uVar170;
                auVar155._4_4_ = auVar207._4_4_ & uVar178;
                auVar155._8_4_ = auVar207._8_4_ & uVar179;
                auVar155._12_4_ = auVar207._12_4_ & uVar180;
                auVar155._16_4_ = auVar207._16_4_ & uVar181;
                auVar155._20_4_ = auVar207._20_4_ & uVar183;
                auVar155._24_4_ = auVar207._24_4_ & uVar185;
                auVar155._28_4_ = auVar207._28_4_ & uVar187;
                iVar35 = vmovmskps_avx(auVar155);
                auVar89 = vpcmpeqd_avx(auVar89,auVar89);
              }
            }
            auVar95 = vpcmpgtd_avx(auVar27,auVar25);
            auVar74 = vpcmpgtd_avx(auVar152,auVar25);
            auVar160._16_16_ = auVar95;
            auVar160._0_16_ = auVar74;
            auVar95 = vpcmpgtd_avx(auVar151,auVar89);
            auVar174._16_16_ = auVar153;
            auVar174._0_16_ = auVar95;
            auVar160 = auVar160 & auVar174;
            if ((((((((SUB321(auVar160 >> 0x1f,0) & 1) != 0 || (SUB321(auVar160 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar160 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar160 >> 0x7f,0) != '\0') || (SUB321(auVar160 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar160 >> 0xbf,0) != '\0') || (SUB321(auVar160 >> 0xdf,0) & 1) != 0) ||
                auVar160[0x1f] < '\0') {
              auVar101 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar101,auVar120);
              auVar152._4_4_ = __real_00000001;
              auVar152._0_4_ = __real_00000001;
              auVar152._8_4_ = __real_00000001;
              auVar152._12_4_ = __real_00000001;
              auVar151 = vpcmpgtd_avx(auVar45,auVar152);
              auVar95 = vpcmpgtd_avx(auVar169,auVar152);
              uVar170 = ~local_420 & auVar95._0_4_;
              uVar178 = ~uStack_41c & auVar95._4_4_;
              uVar179 = ~uStack_418 & auVar95._8_4_;
              uVar180 = ~uStack_414 & auVar95._12_4_;
              uVar181 = ~uStack_410 & auVar151._0_4_;
              uVar183 = ~uStack_40c & auVar151._4_4_;
              uVar185 = ~uStack_408 & auVar151._8_4_;
              uVar187 = ~uStack_404 & auVar151._12_4_;
              auVar161._0_4_ = auVar207._0_4_ & uVar170;
              auVar161._4_4_ = auVar207._4_4_ & uVar178;
              auVar161._8_4_ = auVar207._8_4_ & uVar179;
              auVar161._12_4_ = auVar207._12_4_ & uVar180;
              auVar161._16_4_ = auVar207._16_4_ & uVar181;
              auVar161._20_4_ = auVar207._20_4_ & uVar183;
              auVar161._24_4_ = auVar207._24_4_ & uVar185;
              auVar161._28_4_ = auVar207._28_4_ & uVar187;
              iVar35 = vmovmskps_avx(auVar161);
              while (auVar151 = auVar206._0_16_, iVar35 != 0) {
                iVar3 = auVar89._0_4_ + auVar113._0_4_;
                iVar21 = auVar89._4_4_ + auVar113._4_4_;
                auVar124._4_4_ = iVar21;
                auVar124._0_4_ = iVar3;
                iVar22 = auVar89._8_4_ + auVar113._8_4_;
                auVar124._8_4_ = iVar22;
                iVar23 = auVar89._12_4_ + auVar113._12_4_;
                auVar124._12_4_ = iVar23;
                auVar29._4_4_ = iVar21 * 2;
                auVar29._0_4_ = iVar3 * 2;
                auVar29._8_4_ = iVar22 * 2;
                auVar29._12_4_ = iVar23 * 2;
                auVar95 = vpmovsxdq_avx(auVar29);
                auVar151 = vpshufd_avx(auVar29,0xee);
                auVar151 = vpmovsxdq_avx(auVar151);
                auVar151 = vpaddq_avx(auVar115,auVar151);
                auVar95 = vpaddq_avx(auVar195,auVar95);
                uVar40 = vmovmskps_avx(auVar161);
                auVar74 = auVar95;
                if ((uVar40 & 1) != 0) {
                  auVar74 = ZEXT216(*auVar95._0_8_);
                }
                if ((uVar40 & 2) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar95._8_8_,1);
                }
                if ((uVar40 & 4) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar151._0_8_,2);
                }
                if ((uVar40 & 8) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar151._8_8_,3);
                }
                auVar4._0_4_ = auVar113._16_4_ + auVar89._0_4_;
                auVar4._4_4_ = auVar113._20_4_ + auVar89._4_4_;
                auVar4._8_4_ = auVar113._24_4_ + auVar89._8_4_;
                auVar4._12_4_ = auVar113._28_4_ + auVar89._12_4_;
                auVar206 = ZEXT1664(auVar4);
                auVar5._4_4_ = auVar4._4_4_ * 2;
                auVar5._0_4_ = auVar4._0_4_ * 2;
                auVar5._8_4_ = auVar4._8_4_ * 2;
                auVar5._12_4_ = auVar4._12_4_ * 2;
                auVar95 = vpmovsxdq_avx(auVar5);
                auVar151 = vpshufd_avx(auVar5,0xee);
                auVar151 = vpmovsxdq_avx(auVar151);
                auVar151 = vpaddq_avx(auVar151,auVar88);
                auVar95 = vpaddq_avx(auVar73,auVar95);
                if ((uVar40 & 0x10) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar95._0_8_,4);
                }
                if ((uVar40 & 0x20) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar95._8_8_,5);
                }
                if ((uVar40 & 0x40) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar151._0_8_,6);
                }
                if ((char)uVar40 < '\0') {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar151._8_8_,7);
                }
                auVar151 = vpunpckhwd_avx(auVar74,___xmm_00000000000000000000000000000000);
                auVar95 = vpmovzxwd_avx(auVar74);
                auVar151 = vpcmpgtd_avx(auVar151,auVar25);
                auVar95 = vpcmpgtd_avx(auVar95,auVar25);
                auVar200._0_4_ = ~auVar95._0_4_ & uVar170;
                auVar200._4_4_ = ~auVar95._4_4_ & uVar178;
                auVar200._8_4_ = ~auVar95._8_4_ & uVar179;
                auVar200._12_4_ = ~auVar95._12_4_ & uVar180;
                auVar200._16_4_ = ~auVar151._0_4_ & uVar181;
                auVar200._20_4_ = ~auVar151._4_4_ & uVar183;
                auVar200._24_4_ = ~auVar151._8_4_ & uVar185;
                auVar200._28_4_ = ~auVar151._12_4_ & uVar187;
                auVar162 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar125._0_4_ = auVar200._0_4_ & auVar207._0_4_;
                auVar125._4_4_ = auVar200._4_4_ & auVar207._4_4_;
                auVar125._8_4_ = auVar200._8_4_ & auVar207._8_4_;
                auVar125._12_4_ = auVar200._12_4_ & auVar207._12_4_;
                auVar125._16_4_ = auVar200._16_4_ & auVar207._16_4_;
                auVar125._20_4_ = auVar200._20_4_ & auVar207._20_4_;
                auVar125._24_4_ = auVar200._24_4_ & auVar207._24_4_;
                auVar125._28_4_ = auVar200._28_4_ & auVar207._28_4_;
                uVar42 = vmovmskps_avx(auVar125);
                if ((char)iVar35 != (char)uVar42) {
                  auVar162._0_4_ = auVar200._0_4_ ^ uVar170;
                  auVar162._4_4_ = auVar200._4_4_ ^ uVar178;
                  auVar162._8_4_ = auVar200._8_4_ ^ uVar179;
                  auVar162._12_4_ = auVar200._12_4_ ^ uVar180;
                  auVar162._16_4_ = auVar200._16_4_ ^ uVar181;
                  auVar162._20_4_ = auVar200._20_4_ ^ uVar183;
                  auVar162._24_4_ = auVar200._24_4_ ^ uVar185;
                  auVar162._28_4_ = auVar200._28_4_ ^ uVar187;
                }
                auVar124._16_16_ = auVar4;
                auVar101 = vblendvps_avx(auVar101,auVar124,auVar200);
                auVar171._4_4_ = __real_00000002;
                auVar171._0_4_ = __real_00000002;
                auVar171._8_4_ = __real_00000002;
                auVar171._12_4_ = __real_00000002;
                auVar151 = vpcmpgtd_avx(auVar113._0_16_,auVar171);
                auVar95 = vpcmpgtd_avx(auVar113._16_16_,auVar171);
                uVar170 = auVar151._0_4_ & auVar162._0_4_;
                uVar178 = auVar151._4_4_ & auVar162._4_4_;
                uVar179 = auVar151._8_4_ & auVar162._8_4_;
                uVar180 = auVar151._12_4_ & auVar162._12_4_;
                uVar181 = auVar95._0_4_ & auVar162._16_4_;
                uVar183 = auVar95._4_4_ & auVar162._20_4_;
                uVar185 = auVar95._8_4_ & auVar162._24_4_;
                uVar187 = auVar95._12_4_ & auVar162._28_4_;
                auVar161._0_4_ = auVar207._0_4_ & uVar170;
                auVar161._4_4_ = auVar207._4_4_ & uVar178;
                auVar161._8_4_ = auVar207._8_4_ & uVar179;
                auVar161._12_4_ = auVar207._12_4_ & uVar180;
                auVar161._16_4_ = auVar207._16_4_ & uVar181;
                auVar161._20_4_ = auVar207._20_4_ & uVar183;
                auVar161._24_4_ = auVar207._24_4_ & uVar185;
                auVar161._28_4_ = auVar207._28_4_ & uVar187;
                iVar35 = vmovmskps_avx(auVar161);
                auVar113 = ZEXT3264(auVar124);
              }
            }
            local_740 = vblendvps_avx(local_740,auVar101,auVar207);
            auVar6._4_4_ = local_740._4_4_ * 2;
            auVar6._0_4_ = local_740._0_4_ * 2;
            auVar6._8_4_ = local_740._8_4_ * 2;
            auVar6._12_4_ = local_740._12_4_ * 2;
            auVar74 = vpmovsxdq_avx(auVar6);
            auVar95 = vpshufd_avx(auVar6,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar115,auVar95);
            auVar74 = vpaddq_avx(auVar195,auVar74);
            auVar45 = auVar95;
            if ((uVar43 & 1) != 0) {
              auVar45 = ZEXT216(*auVar74._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar74._8_8_,1);
            }
            if ((uVar43 & 4) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar95._0_8_,2);
            }
            if ((uVar43 & 8) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar95._8_8_,3);
            }
            auVar7._4_4_ = local_740._20_4_ * 2;
            auVar7._0_4_ = local_740._16_4_ * 2;
            auVar7._8_4_ = local_740._24_4_ * 2;
            auVar7._12_4_ = local_740._28_4_ * 2;
            auVar74 = vpmovsxdq_avx(auVar7);
            auVar95 = vpshufd_avx(auVar7,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar95,auVar88);
            auVar74 = vpaddq_avx(auVar73,auVar74);
            if ((uVar43 & 0x10) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar74._0_8_,4);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar74._8_8_,5);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar95._0_8_,6);
            }
            if (cVar32 < '\0') {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar95._8_8_,7);
            }
            auVar95 = vpcmpeqd_avx(auVar95,auVar95);
            auVar74 = vpsubd_avx(local_740._16_16_,auVar95);
            auVar95 = vpsubd_avx(local_740._0_16_,auVar95);
            auVar105._16_16_ = auVar74;
            auVar105._0_16_ = auVar95;
            local_7a0 = vblendvps_avx(local_7a0,auVar105,auVar207);
            auVar95 = vpcmpgtd_avx(ZEXT416(uVar36),local_7a0._16_16_);
            auVar74 = vpcmpgtd_avx(auVar72,local_7a0._0_16_);
            auVar106._16_16_ = auVar95;
            auVar106._0_16_ = auVar74;
            auVar209 = auVar207 & ~auVar106;
            if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar209 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar209 >> 0x7f,0) != '\0') || (SUB321(auVar209 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar209 >> 0xbf,0) != '\0') || (SUB321(auVar209 >> 0xdf,0) & 1) != 0) ||
                auVar209[0x1f] < '\0') {
              auVar107._0_4_ = ~auVar74._0_4_ & auVar207._0_4_;
              auVar107._4_4_ = ~auVar74._4_4_ & auVar207._4_4_;
              auVar107._8_4_ = ~auVar74._8_4_ & auVar207._8_4_;
              auVar107._12_4_ = ~auVar74._12_4_ & auVar207._12_4_;
              auVar107._16_4_ = ~auVar95._0_4_ & auVar207._16_4_;
              auVar107._20_4_ = ~auVar95._4_4_ & auVar207._20_4_;
              auVar107._24_4_ = ~auVar95._8_4_ & auVar207._24_4_;
              auVar107._28_4_ = ~auVar95._12_4_ & auVar207._28_4_;
              local_7a0 = vblendvps_avx(local_7a0,auVar119,auVar107);
            }
            auVar72._4_4_ = local_7a0._4_4_ * 2;
            auVar72._0_4_ = local_7a0._0_4_ * 2;
            auVar72._8_4_ = local_7a0._8_4_ * 2;
            auVar72._12_4_ = local_7a0._12_4_ * 2;
            auVar74 = vpmovsxdq_avx(auVar72);
            auVar95 = vpshufd_avx(auVar72,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar115,auVar95);
            auVar74 = vpaddq_avx(auVar195,auVar74);
            auVar72 = auVar95;
            if ((uVar43 & 1) != 0) {
              auVar72 = ZEXT216(*auVar74._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar74._8_8_,1);
            }
            if ((uVar43 & 4) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar95._0_8_,2);
            }
            if ((uVar43 & 8) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar95._8_8_,3);
            }
            auVar8._4_4_ = local_7a0._20_4_ * 2;
            auVar8._0_4_ = local_7a0._16_4_ * 2;
            auVar8._8_4_ = local_7a0._24_4_ * 2;
            auVar8._12_4_ = local_7a0._28_4_ * 2;
            auVar74 = vpmovsxdq_avx(auVar8);
            auVar95 = vpshufd_avx(auVar8,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar95,auVar88);
            auVar74 = vpaddq_avx(auVar73,auVar74);
            if ((uVar43 & 0x10) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar74._0_8_,4);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar74._8_8_,5);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar95._0_8_,6);
            }
            if (cVar32 < '\0') {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar95._8_8_,7);
            }
            auVar74 = vpunpckhwd_avx(auVar45,(undefined1  [16])0x0);
            auVar95 = vpmovzxwd_avx(auVar45);
            auVar76._16_16_ = auVar74;
            auVar76._0_16_ = auVar95;
            auVar74 = vpunpckhwd_avx(auVar72,(undefined1  [16])0x0);
            auVar95 = vpmovzxwd_avx(auVar72);
            auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          if (param_8 != '\x01') {
            auVar72 = vpsubd_avx(auVar95,auVar76._0_16_);
            auVar95 = vpsubd_avx(auVar74,auVar76._16_16_);
            auVar88._4_4_ = __real_00000001;
            auVar88._0_4_ = __real_00000001;
            auVar88._8_4_ = __real_00000001;
            auVar88._12_4_ = __real_00000001;
            auVar95 = vpmaxsd_avx(auVar95,auVar88);
            auVar74 = vpmaxsd_avx(auVar72,auVar88);
            auVar51._16_16_ = auVar95;
            auVar51._0_16_ = auVar74;
            auVar209 = vcvtdq2ps_avx(auVar76);
            auVar101 = vsubps_avx(auVar48,auVar209);
            auVar209 = vcvtdq2ps_avx(auVar51);
            auVar209 = vdivps_avx(auVar101,auVar209);
          }
          auVar101 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          _local_800 = vblendvps_avx(auVar101,auVar209,auVar207);
        }
      }
      auVar95 = local_740._0_16_;
      if (param_9 < 7) {
        auVar97 = vpmulld_avx(auVar95,auVar46);
        auVar46 = vpmulld_avx(local_740._16_16_,auVar46);
        auVar96 = vpmovsxdq_avx(auVar46);
        auVar46 = vpshufd_avx(auVar46,0xee);
        vpmovsxdq_avx(auVar46);
        vpmovsxdq_avx(auVar97);
        auVar46 = vpshufd_avx(auVar97,0xee);
        vpmovsxdq_avx(auVar46);
                    /* WARNING: Could not recover jumptable at 0x000140c394f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6c8d0 + *(int *)(&DAT_151c6c8d0 + uVar39 * 4)))
                  (&DAT_151c6c8d0 + *(int *)(&DAT_151c6c8d0 + uVar39 * 4),&DAT_151c6c8d0,
                   auVar189._0_8_,auVar96._0_8_);
        return;
      }
      auVar154 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar49 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar175._0_4_ = local_740._0_4_ ^ local_7a0._0_4_;
      auVar175._4_4_ = local_740._4_4_ ^ local_7a0._4_4_;
      auVar175._8_4_ = local_740._8_4_ ^ local_7a0._8_4_;
      auVar175._12_4_ = local_740._12_4_ ^ local_7a0._12_4_;
      auVar175._16_4_ = local_740._16_4_ ^ local_7a0._16_4_;
      auVar175._20_4_ = local_740._20_4_ ^ local_7a0._20_4_;
      auVar175._24_4_ = local_740._24_4_ ^ local_7a0._24_4_;
      auVar175._28_4_ = local_740._28_4_ ^ local_7a0._28_4_;
      if (auVar175 != (undefined1  [32])0x0) {
        auVar189 = local_7a0._0_16_;
        auVar74 = vpcmpeqd_avx(local_740._16_16_,local_7a0._16_16_);
        auVar151 = vpcmpeqd_avx(auVar151,auVar151);
        if (param_9 < 7) {
          vpcmpeqd_avx(auVar189,auVar95);
          auVar96 = vpmulld_avx(auVar189,auVar46);
          auVar46 = vpmulld_avx(local_7a0._16_16_,auVar46);
          vpmovsxdq_avx(auVar46);
          auVar46 = vpshufd_avx(auVar46,0xee);
          vpmovsxdq_avx(auVar46);
          vpmovsxdq_avx(auVar96);
          auVar96 = vpshufd_avx(auVar96,0xee);
          vpmovsxdq_avx(auVar96);
                    /* WARNING: Could not recover jumptable at 0x000140c39be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6c8ec + *(int *)(&DAT_151c6c8ec + uVar39 * 4)))
                    (&DAT_151c6c8ec + *(int *)(&DAT_151c6c8ec + uVar39 * 4));
          return;
        }
        auVar72 = vpcmpeqd_avx(auVar189,auVar95);
        auVar52._16_16_ = auVar151 ^ auVar74;
        auVar52._0_16_ = auVar151 ^ auVar72;
        auVar209 = vmaskmovps_avx(auVar52,auVar101);
        auVar49 = vmaskmovps_avx(auVar52,auVar101);
        auVar154 = vmaskmovps_avx(auVar52,auVar101);
        auVar95 = vpcmpeqd_avx(auVar189,auVar95);
        auVar53._16_16_ = auVar151 ^ auVar74;
        auVar53._0_16_ = auVar151 ^ auVar95;
        auVar209 = vsubps_avx(auVar209,auVar101);
        auVar49 = vsubps_avx(auVar49,auVar101);
        auVar154 = vsubps_avx(auVar154,auVar101);
        auVar77._0_4_ = (float)local_800._0_4_ * auVar209._0_4_ + 0.0;
        auVar77._4_4_ = (float)local_800._4_4_ * auVar209._4_4_ + 0.0;
        fVar136 = auVar101._8_4_;
        auVar77._8_4_ = fVar136 + fStack_7f8 * auVar209._8_4_;
        fVar138 = auVar101._12_4_;
        auVar77._12_4_ = fVar138 + fStack_7f4 * auVar209._12_4_;
        fVar140 = auVar101._16_4_;
        auVar77._16_4_ = fVar140 + fStack_7f0 * auVar209._16_4_;
        fVar143 = auVar101._20_4_;
        auVar77._20_4_ = fVar143 + fStack_7ec * auVar209._20_4_;
        fVar145 = auVar101._24_4_;
        auVar77._24_4_ = fVar145 + fStack_7e8 * auVar209._24_4_;
        fVar147 = auVar101._28_4_;
        auVar77._28_4_ = fVar147 + fStack_7e4 * auVar209._28_4_;
        auVar94._0_4_ = (float)local_800._0_4_ * auVar49._0_4_ + 0.0;
        auVar94._4_4_ = (float)local_800._4_4_ * auVar49._4_4_ + 0.0;
        auVar94._8_4_ = fVar136 + fStack_7f8 * auVar49._8_4_;
        auVar94._12_4_ = fVar138 + fStack_7f4 * auVar49._12_4_;
        auVar94._16_4_ = fVar140 + fStack_7f0 * auVar49._16_4_;
        auVar94._20_4_ = fVar143 + fStack_7ec * auVar49._20_4_;
        auVar94._24_4_ = fVar145 + fStack_7e8 * auVar49._24_4_;
        auVar94._28_4_ = fVar147 + fStack_7e4 * auVar49._28_4_;
        auVar108._0_4_ = (float)local_800._0_4_ * auVar154._0_4_ + 0.0;
        auVar108._4_4_ = (float)local_800._4_4_ * auVar154._4_4_ + 0.0;
        auVar108._8_4_ = fVar136 + fStack_7f8 * auVar154._8_4_;
        auVar108._12_4_ = fVar138 + fStack_7f4 * auVar154._12_4_;
        auVar108._16_4_ = fVar140 + fStack_7f0 * auVar154._16_4_;
        auVar108._20_4_ = fVar143 + fStack_7ec * auVar154._20_4_;
        auVar108._24_4_ = fVar145 + fStack_7e8 * auVar154._24_4_;
        auVar108._28_4_ = fVar147 + fStack_7e4 * auVar154._28_4_;
        auVar209 = vmaskmovps_avx(auVar53,auVar77);
        auVar49 = vmaskmovps_avx(auVar53,auVar94);
        auVar154 = vmaskmovps_avx(auVar53,auVar108);
      }
      auVar54._16_16_ = auVar142;
      auVar54._0_16_ = auVar30;
      auVar78._16_16_ = auVar210;
      auVar78._0_16_ = *(undefined1 (*) [16])(param_2 + uVar38);
      local_220 = vshufps_avx(auVar78,auVar54,0x88);
      auVar129._16_16_ = auVar49._0_16_;
      auVar129._0_16_ = auVar209._0_16_;
      auVar207 = vperm2f128_avx(auVar209,auVar49,0x31);
      auVar192._16_16_ = auVar209._0_16_;
      auVar192._0_16_ = auVar49._0_16_;
      auVar119 = vshufps_avx(auVar192,auVar192,0xe1);
      auVar119 = vblendps_avx(auVar129,auVar119,0x12);
      auVar50 = vperm2f128_avx(auVar101,auVar154,0x21);
      auVar101 = vshufps_avx(auVar50,auVar50,0x14);
      auVar101 = vblendps_avx(ZEXT1632(CONCAT88(auVar154._0_8_,auVar154._0_8_)),auVar101,0x48);
      local_180 = vblendps_avx(auVar119,auVar101,0xcc);
      auVar206 = ZEXT864(0) << 0x20;
      auVar119 = vshufps_avx(auVar192,auVar192,0xeb);
      auVar101 = vshufpd_avx(auVar129,auVar129,5);
      auVar101 = vblendps_avx(auVar101,auVar119,0x12);
      auVar119 = vshufps_avx(auVar50,auVar50,0xb4);
      auVar119 = vblendps_avx(ZEXT1632(auVar154._0_16_),auVar119,0x48);
      local_160 = vblendps_avx(auVar101,auVar119,0xcc);
      auVar49 = vperm2f128_avx(auVar49,auVar209,0x31);
      auVar209 = vshufps_avx(auVar49,auVar49,0xe1);
      auVar209 = vblendps_avx(auVar207,auVar209,0x12);
      auVar101 = vunpcklps_avx(auVar154,ZEXT832(0) << 0x20);
      auVar101 = vblendps_avx(ZEXT1632(CONCAT88(auVar154._16_8_,auVar154._16_8_)),auVar101,0x48);
      local_140 = vblendps_avx(auVar209,auVar101,0xcc);
      auVar101 = vshufps_avx(auVar49,auVar49,0xeb);
      auVar209 = vshufpd_avx(auVar207,auVar207,5);
      auVar209 = vblendps_avx(auVar209,auVar101,0x12);
      auVar101 = vunpckhps_avx(auVar154,ZEXT832(0) << 0x20);
      auVar101 = vblendps_avx(ZEXT1632(auVar154._16_16_),auVar101,0x48);
      local_120 = vblendps_avx(auVar209,auVar101,0xcc);
      uVar38 = 0xff;
      do {
        uVar170 = 0;
        for (uVar31 = uVar38; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x8000000000000000) {
          uVar170 = uVar170 + 1;
        }
        bVar2 = (byte)uVar170 & 0x3f;
        iVar35 = *(int *)(local_220 + (ulonglong)(uVar170 & 7) * 4);
        auVar209 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar170 << 4)));
        *(undefined1 (*) [16])(param_1 + 0x40 + (longlong)iVar35 * 0x60) = auVar209._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x50 + (longlong)iVar35 * 0x60) = auVar209._16_16_;
        uVar38 = uVar38 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
      } while (uVar38 != 0);
      uVar37 = uVar37 + 8;
    } while ((int)uVar37 < (int)local_720);
  }
  if ((int)param_10 <= (int)uVar37) {
    return;
  }
  auVar96 = vpshufd_avx(ZEXT416(uVar37),0);
  auVar55._16_16_ = auVar96;
  auVar55._0_16_ = auVar96;
  auVar189 = SUB3216(auVar55 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar95 = vpshufd_avx(ZEXT416(param_10),0);
  auVar72 = SUB3216(auVar55 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar30 = vpcmpgtd_avx(auVar95,auVar72);
  auVar46 = vpcmpgtd_avx(auVar95,auVar189);
  auVar96 = vpslld_avx(auVar96,3);
  auVar25 = vpand_avx(auVar46,auVar96);
  auVar96 = vpand_avx(auVar30,auVar96);
  lVar34 = auVar96._0_4_ + param_2;
  uVar178 = auVar46._0_4_;
  auVar97._0_4_ = uVar178 & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
  uVar179 = auVar46._4_4_;
  auVar97._4_4_ = uVar179 & _UNK_150b519e4;
  uVar180 = auVar46._8_4_;
  auVar97._8_4_ = uVar180 & _UNK_150b519e8;
  uVar181 = auVar46._12_4_;
  auVar97._12_4_ = uVar181 & _UNK_150b519ec;
  uVar183 = auVar30._0_4_;
  vextractps_avx(auVar97,1);
  auVar96 = vpshufd_avx(ZEXT416(param_4),0);
  auVar44 = vpslld_avx(auVar96,2);
  auVar96 = vpmulld_avx(ZEXT416(*(uint *)((ulonglong)auVar97._0_4_ + param_2 + auVar25._0_4_)),
                        auVar44);
  auVar96 = vpand_avx(auVar46,auVar96);
  uVar37 = *(uint *)(param_3 + auVar96._0_4_);
  uVar170 = *(uint *)((ulonglong)
                      (uVar178 &
                      ___ymm_0000000400000004000000040000000400000004000000040000000400000004) +
                     param_3 + auVar96._0_4_);
  auVar74 = ZEXT416(uVar170);
  auVar96 = vpmulld_avx(ZEXT416(*(uint *)((ulonglong)(uVar183 & _UNK_150b519f0) + lVar34)),auVar44);
  auVar96 = vpand_avx(auVar30,auVar96);
  uVar36 = *(uint *)(param_3 + auVar96._0_4_);
  uVar43 = *(uint *)((ulonglong)(uVar183 & _UNK_150b50d50) + param_3 + auVar96._0_4_);
  auVar96 = vpmovsxdq_avx(ZEXT416(uVar37));
  auVar46 = vpshufd_avx(ZEXT416(uVar37),0xee);
  auVar46 = vpmovsxdq_avx(auVar46);
  auVar97 = vpshufd_avx(ZEXT416(-(uint)(param_9 == 3)),0);
  auVar142._4_4_ = __real_00000001;
  auVar142._0_4_ = __real_00000001;
  auVar142._8_4_ = __real_00000001;
  auVar142._12_4_ = __real_00000001;
  auVar210 = vpcmpgtd_avx(ZEXT416(uVar43),auVar142);
  auVar142 = vpcmpgtd_avx(auVar74,auVar142);
  auVar149._0_4_ = auVar142._0_4_ & auVar97._0_4_;
  auVar149._4_4_ = auVar142._4_4_ & auVar97._4_4_;
  auVar149._8_4_ = auVar142._8_4_ & auVar97._8_4_;
  auVar149._12_4_ = auVar142._12_4_ & auVar97._12_4_;
  auVar149._16_4_ = auVar210._0_4_ & auVar97._0_4_;
  auVar149._20_4_ = auVar210._4_4_ & auVar97._4_4_;
  auVar149._24_4_ = auVar210._8_4_ & auVar97._8_4_;
  auVar149._28_4_ = auVar210._12_4_ & auVar97._12_4_;
  auVar47 = vblendvps_avx(ZEXT1232(ZEXT812(0)),
                          ___ymm_0000001800000018000000180000001800000018000000180000001800000018,
                          auVar149);
  auVar44 = auVar47._0_16_;
  auVar97 = vpmovsxdq_avx(auVar44);
  auVar96 = vpaddq_avx(auVar97,auVar96);
  auVar97 = vshufpd_avx(auVar44,auVar44,3);
  auVar97 = vpmovsxdq_avx(auVar97);
  auVar46 = vpaddq_avx(auVar97,auVar46);
  auVar44._0_4_ = uVar178 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  auVar44._4_4_ = uVar179 & _UNK_150b519c4;
  auVar44._8_4_ = uVar180 & _UNK_150b519c8;
  auVar44._12_4_ = uVar181 & _UNK_150b519cc;
  vextractps_avx(auVar44,1);
  vextractps_avx(auVar44,2);
  vextractps_avx(auVar44,3);
  auVar97 = vpmovsxdq_avx(ZEXT416(uVar36));
  auVar151 = auVar47._16_16_;
  auVar44 = vpmovsxdq_avx(auVar151);
  auVar97 = vpaddq_avx(auVar44,auVar97);
  auVar44 = vpshufd_avx(ZEXT416(uVar36),0xee);
  auVar44 = vpmovsxdq_avx(auVar44);
  auVar151 = vshufpd_avx(auVar151,auVar151,3);
  auVar151 = vpmovsxdq_avx(auVar151);
  auVar44 = vpaddq_avx(auVar151,auVar44);
  auVar151 = vpshufd_avx(ZEXT416(~((0.0 < param_7) - 1)),0);
  local_640._0_4_ = auVar142._0_4_ & auVar151._0_4_;
  local_640._4_4_ = auVar142._4_4_ & auVar151._4_4_;
  local_640._8_4_ = auVar142._8_4_ & auVar151._8_4_;
  local_640._12_4_ = auVar142._12_4_ & auVar151._12_4_;
  local_640._16_4_ = auVar210._0_4_ & auVar151._0_4_;
  local_640._20_4_ = auVar210._4_4_ & auVar151._4_4_;
  local_640._24_4_ = auVar210._8_4_ & auVar151._8_4_;
  local_640._28_4_ = auVar210._12_4_ & auVar151._12_4_;
  uVar37 = *(uint *)(param_2 + auVar25._0_4_);
  auVar25 = vpshufd_avx(ZEXT416((uint)(iVar33 * iVar1)),0);
  auVar150._0_4_ = uVar178 & local_640._0_4_;
  auVar150._4_4_ = uVar179 & local_640._4_4_;
  auVar150._8_4_ = uVar180 & local_640._8_4_;
  auVar150._12_4_ = uVar181 & local_640._12_4_;
  auVar150._16_4_ = uVar183 & local_640._16_4_;
  auVar150._20_4_ = auVar30._4_4_ & local_640._20_4_;
  auVar150._24_4_ = auVar30._8_4_ & local_640._24_4_;
  auVar150._28_4_ = auVar30._12_4_ & local_640._28_4_;
  uVar36 = vmovmskps_avx(auVar150);
  if (uVar36 == 0) {
    auVar47 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar48 = ZEXT1232(ZEXT812(0));
  }
  else {
    auVar142 = vpcmpeqd_avx(ZEXT416(uVar37),ZEXT416(uVar37));
    auVar210._0_4_ = uVar43 + auVar142._0_4_;
    auVar210._4_4_ = auVar142._4_4_;
    auVar210._8_4_ = auVar142._8_4_;
    auVar210._12_4_ = auVar142._12_4_;
    auVar9._0_4_ = uVar170 + auVar142._0_4_;
    auVar9._4_4_ = auVar142._4_4_;
    auVar9._8_4_ = auVar142._8_4_;
    auVar9._12_4_ = auVar142._12_4_;
    auVar197._16_16_ = auVar210;
    auVar197._0_16_ = auVar9;
    if (param_7 < __real_3f800000) {
      auVar142 = vpmulld_avx(auVar74,auVar25);
      auVar45 = vpmulld_avx(ZEXT416(uVar43),auVar25);
      auVar151 = vpmovsxdq_avx(auVar45);
      auVar45 = vpshufd_avx(auVar45,0xee);
      auVar45 = vpmovsxdq_avx(auVar45);
      auVar169 = vpmovsxdq_avx(auVar142);
      auVar142 = vpshufd_avx(auVar142,0xee);
      auVar142 = vpmovsxdq_avx(auVar142);
      auVar116._8_8_ = 0;
      auVar116._0_8_ = param_5 + 3;
      auVar73 = vpshufd_avx(auVar116,0x44);
      auVar142 = vpaddq_avx(auVar73,auVar142);
      auVar46 = vpaddq_avx(auVar142,auVar46);
      auVar142 = vpaddq_avx(auVar73,auVar169);
      auVar96 = vpaddq_avx(auVar96,auVar142);
      auVar142 = vpaddq_avx(auVar73,auVar45);
      auVar44 = vpaddq_avx(auVar142,auVar44);
      auVar142 = vpaddq_avx(auVar73,auVar151);
      auVar97 = vpaddq_avx(auVar142,auVar97);
      auVar117._0_4_ = auVar97._0_4_ & (uint)__real_fffffffffffffffc;
      auVar117._4_4_ = auVar97._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar117._8_4_ = auVar97._8_4_ & (uint)__real_fffffffffffffffc;
      auVar117._12_4_ = auVar97._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar130._16_4_ = auVar44._0_4_ & (uint)__real_fffffffffffffffc;
      auVar130._0_16_ = auVar117;
      auVar130._20_4_ = auVar44._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar130._24_4_ = auVar44._8_4_ & (uint)__real_fffffffffffffffc;
      auVar130._28_4_ = auVar44._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar190._0_4_ = auVar96._0_4_ & (uint)__real_fffffffffffffffc;
      auVar190._4_4_ = auVar96._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar190._8_4_ = auVar96._8_4_ & (uint)__real_fffffffffffffffc;
      auVar190._12_4_ = auVar96._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar193._16_4_ = auVar46._0_4_ & (uint)__real_fffffffffffffffc;
      auVar193._0_16_ = auVar190;
      auVar193._20_4_ = auVar46._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar193._24_4_ = auVar46._8_4_ & (uint)__real_fffffffffffffffc;
      auVar193._28_4_ = auVar46._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar96 = vshufps_avx(ZEXT416((uint)param_7),ZEXT416((uint)param_7),0);
      auVar47 = vcvtdq2ps_avx(auVar197);
      param_7 = param_7 * (float)(param_6 + -1);
      uVar185 = (uint)param_7;
      uVar170 = 0;
      if (0 < (int)uVar185) {
        uVar170 = uVar185;
      }
      if ((int)(param_6 - 2U) < (int)uVar170) {
        uVar170 = param_6 - 2U;
      }
      auVar46._0_4_ = (int)(auVar96._0_4_ * auVar47._0_4_);
      auVar46._4_4_ = (int)(auVar96._4_4_ * auVar47._4_4_);
      auVar46._8_4_ = (int)(auVar96._8_4_ * auVar47._8_4_);
      auVar46._12_4_ = (int)(auVar96._12_4_ * auVar47._12_4_);
      auVar56._16_4_ = (int)(auVar96._0_4_ * auVar47._16_4_);
      auVar56._0_16_ = auVar46;
      auVar56._20_4_ = (int)(auVar96._4_4_ * auVar47._20_4_);
      auVar56._24_4_ = (int)(auVar96._8_4_ * auVar47._24_4_);
      auVar56._28_4_ = (int)(auVar96._12_4_ * auVar47._28_4_);
      auVar96 = vpmaxsd_avx(auVar56._16_16_,ZEXT416(0) << 0x20);
      auVar46 = vpmaxsd_avx(auVar46,ZEXT416(0) << 0x20);
      auVar97 = vpminsd_avx(auVar96,auVar210);
      auVar44 = vpminsd_avx(auVar46,auVar9);
      auVar79._16_16_ = auVar97;
      auVar79._0_16_ = auVar44;
      auVar206 = ZEXT3264(auVar79);
      auVar142 = auVar130._16_16_;
      auVar151 = auVar193._16_16_;
      cVar32 = (char)uVar36;
      if (param_6 < 0x100) {
        auVar169 = vpmovsxdq_avx(auVar44);
        auVar45 = vpshufd_avx(auVar44,0xee);
        auVar45 = vpmovsxdq_avx(auVar45);
        auVar45 = vpaddq_avx(auVar151,auVar45);
        auVar169 = vpaddq_avx(auVar190,auVar169);
        auVar73 = auVar169;
        if ((uVar36 & 1) != 0) {
          auVar73 = ZEXT116(*auVar169._0_8_);
        }
        auVar153 = vpmovsxdq_avx(auVar97);
        auVar202 = vpshufd_avx(auVar97,0xee);
        if ((uVar36 & 2) != 0) {
          auVar169 = vpinsrb_avx(auVar73,(uint)*auVar169._8_8_,1);
          auVar73 = vpblendw_avx(auVar169,auVar73,0xe);
        }
        auVar202 = vpmovsxdq_avx(auVar202);
        auVar169 = vpaddq_avx(auVar153,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar153 = vpaddq_avx(auVar202,auVar142);
        }
        else {
          auVar153 = vpmovzxwd_avx(auVar73);
          auVar153 = vpinsrb_avx(auVar153,(uint)*auVar45._0_8_,2);
          auVar153 = vpinsrb_avx(auVar153,(uint)auVar73[3],3);
          auVar73 = vpblendw_avx(auVar153,auVar73,0xc);
          auVar153 = vpaddq_avx(auVar202,auVar142);
        }
        if ((uVar36 & 8) != 0) {
          auVar202 = vpmovzxwd_avx(auVar73);
          auVar202 = vpinsrb_avx(auVar202,(uint)auVar73[2],2);
          auVar45 = vpinsrb_avx(auVar202,(uint)*auVar45._8_8_,3);
          auVar73 = vpblendw_avx(auVar45,auVar73,0xc);
        }
        auVar45 = auVar169;
        if ((uVar36 & 0x10) != 0) {
          auVar45 = vpshufb_avx(auVar73,___xmm_80800706808005048080030203020100);
          auVar45 = vpinsrb_avx(auVar45,(uint)*auVar169._0_8_,4);
          auVar45 = vpinsrb_avx(auVar45,(uint)auVar73[5],5);
          auVar73 = vpblendw_avx(auVar45,auVar73,8);
        }
        if ((uVar36 & 0x20) != 0) {
          auVar45 = vpshufb_avx(auVar73,___xmm_80800706808005048080030403020100);
          auVar45 = vpinsrb_avx(auVar45,(uint)*auVar169._8_8_,5);
          auVar73 = vpblendw_avx(auVar45,auVar73,8);
        }
        if ((uVar36 & 0x40) != 0) {
          auVar45 = vpshufb_avx(auVar73,___xmm_80800706808005048080050403020100);
          auVar45 = vpinsrb_avx(auVar45,(uint)*auVar153._0_8_,6);
          auVar73 = vpinsrb_avx(auVar45,(uint)auVar73[7],7);
        }
        if (cVar32 < '\0') {
          auVar169 = vpshufb_avx(auVar73,___xmm_80800706808005048006050403020100);
          auVar73 = vpinsrb_avx(auVar169,(uint)*auVar153._8_8_,7);
        }
        auVar153 = vpmovzxbd_avx(auVar73);
        auVar169 = vpshufd_avx(auVar73,0x55);
        auVar202 = vpmovzxbd_avx(auVar169);
        auVar26 = vpshufd_avx(ZEXT416(uVar170),0);
        auVar169 = vpcmpgtd_avx(auVar202,auVar26);
        auVar45 = vpcmpeqd_avx(auVar45,auVar45);
        auVar88 = auVar169 ^ auVar45;
        auVar73 = vpcmpgtd_avx(auVar153,auVar26);
        auVar45 = auVar73 ^ auVar45;
        auVar132._16_16_ = auVar88;
        auVar132._0_16_ = auVar45;
        auVar63._16_16_ = auVar169;
        auVar63._0_16_ = auVar73;
        auVar48 = auVar150 & ~auVar63;
        local_6c0 = auVar45._0_4_;
        uStack_6bc = auVar45._4_4_;
        uStack_6b8 = auVar45._8_4_;
        uStack_6b4 = auVar45._12_4_;
        uStack_6b0 = auVar88._0_4_;
        uStack_6ac = auVar88._4_4_;
        uStack_6a8 = auVar88._8_4_;
        uStack_6a4 = auVar88._12_4_;
        auVar47 = auVar79;
        if ((((((((SUB321(auVar48 >> 0x1f,0) & 1) != 0 || (SUB321(auVar48 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar48 >> 0x5f,0) & 1) != 0) || SUB321(auVar48 >> 0x7f,0) != '\0') ||
              (SUB321(auVar48 >> 0x9f,0) & 1) != 0) || SUB321(auVar48 >> 0xbf,0) != '\0') ||
            (SUB321(auVar48 >> 0xdf,0) & 1) != 0) || auVar48[0x1f] < '\0') {
          auVar45 = vpcmpgtd_avx(auVar202,auVar26);
          auVar169 = vpcmpgtd_avx(auVar153,auVar26);
          auVar64._16_16_ = auVar45;
          auVar64._0_16_ = auVar169;
          auVar47 = vblendvps_avx(auVar197,auVar79,auVar64);
          auVar96 = vpcmpgtd_avx(auVar210,auVar96);
          auVar46 = vpcmpgtd_avx(auVar9,auVar46);
          uVar170 = auVar46._0_4_ & local_6c0;
          uVar185 = auVar46._4_4_ & uStack_6bc;
          uVar187 = auVar46._8_4_ & uStack_6b8;
          uVar40 = auVar46._12_4_ & uStack_6b4;
          uVar182 = auVar96._0_4_ & uStack_6b0;
          uVar184 = auVar96._4_4_ & uStack_6ac;
          uVar186 = auVar96._8_4_ & uStack_6a8;
          uVar188 = auVar96._12_4_ & uStack_6a4;
          auVar133._0_4_ = uVar170 & auVar150._0_4_;
          auVar133._4_4_ = uVar185 & auVar150._4_4_;
          auVar133._8_4_ = uVar187 & auVar150._8_4_;
          auVar133._12_4_ = uVar40 & auVar150._12_4_;
          auVar133._16_4_ = uVar182 & auVar150._16_4_;
          auVar133._20_4_ = uVar184 & auVar150._20_4_;
          auVar133._24_4_ = uVar186 & auVar150._24_4_;
          auVar133._28_4_ = uVar188 & auVar150._28_4_;
          iVar33 = vmovmskps_avx(auVar133);
          if (iVar33 != 0) {
            auVar96 = vpcmpeqd_avx(auVar46,auVar46);
            do {
              auVar73 = vpsubd_avx(auVar79._0_16_,auVar96);
              auVar45 = vpmovsxdq_avx(auVar73);
              auVar46 = vpshufd_avx(auVar73,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar151,auVar46);
              auVar45 = vpaddq_avx(auVar190,auVar45);
              uVar41 = vmovmskps_avx(auVar133);
              auVar169 = auVar45;
              if ((uVar41 & 1) != 0) {
                auVar169 = ZEXT116(*auVar45._0_8_);
              }
              if ((uVar41 & 2) != 0) {
                auVar45 = vpinsrb_avx(auVar169,(uint)*auVar45._8_8_,1);
                auVar169 = vpblendw_avx(auVar45,auVar169,0xe);
              }
              if ((uVar41 & 4) != 0) {
                auVar45 = vpmovzxwd_avx(auVar169);
                auVar45 = vpinsrb_avx(auVar45,(uint)*auVar46._0_8_,2);
                auVar45 = vpinsrb_avx(auVar45,(uint)auVar169[3],3);
                auVar169 = vpblendw_avx(auVar45,auVar169,0xc);
              }
              if ((uVar41 & 8) != 0) {
                auVar45 = vpmovzxwd_avx(auVar169);
                auVar45 = vpinsrb_avx(auVar45,(uint)auVar169[2],2);
                auVar46 = vpinsrb_avx(auVar45,(uint)*auVar46._8_8_,3);
                auVar169 = vpblendw_avx(auVar46,auVar169,0xc);
              }
              auVar88 = vpsubd_avx(auVar79._16_16_,auVar96);
              auVar45 = vpmovsxdq_avx(auVar88);
              auVar46 = vpshufd_avx(auVar88,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar46,auVar142);
              auVar45 = vpaddq_avx(auVar45,auVar117);
              if ((uVar41 & 0x10) != 0) {
                auVar195 = vpshufb_avx(auVar169,___xmm_80800706808005048080030203020100);
                auVar195 = vpinsrb_avx(auVar195,(uint)*auVar45._0_8_,4);
                auVar195 = vpinsrb_avx(auVar195,(uint)auVar169[5],5);
                auVar169 = vpblendw_avx(auVar195,auVar169,8);
              }
              if ((uVar41 & 0x20) != 0) {
                auVar195 = vpshufb_avx(auVar169,___xmm_80800706808005048080030403020100);
                auVar45 = vpinsrb_avx(auVar195,(uint)*auVar45._8_8_,5);
                auVar169 = vpblendw_avx(auVar45,auVar169,8);
              }
              if ((uVar41 & 0x40) != 0) {
                auVar45 = vpshufb_avx(auVar169,___xmm_80800706808005048080050403020100);
                auVar45 = vpinsrb_avx(auVar45,(uint)*auVar46._0_8_,6);
                auVar169 = vpinsrb_avx(auVar45,(uint)auVar169[7],7);
              }
              if ((char)uVar41 < '\0') {
                auVar45 = vpshufb_avx(auVar169,___xmm_80800706808005048006050403020100);
                auVar169 = vpinsrb_avx(auVar45,(uint)*auVar46._8_8_,7);
              }
              auVar45 = vpmovzxbd_avx(auVar169);
              auVar46 = vpshufd_avx(auVar169,0x55);
              auVar46 = vpmovzxbd_avx(auVar46);
              auVar46 = vpcmpgtd_avx(auVar46,auVar26);
              auVar45 = vpcmpgtd_avx(auVar45,auVar26);
              auVar176._0_4_ = uVar170 & auVar45._0_4_;
              auVar176._4_4_ = uVar185 & auVar45._4_4_;
              auVar176._8_4_ = uVar187 & auVar45._8_4_;
              auVar176._12_4_ = uVar40 & auVar45._12_4_;
              auVar176._16_4_ = uVar182 & auVar46._0_4_;
              auVar176._20_4_ = uVar184 & auVar46._4_4_;
              auVar176._24_4_ = uVar186 & auVar46._8_4_;
              auVar176._28_4_ = uVar188 & auVar46._12_4_;
              uVar41 = 0;
              uVar137 = 0;
              uVar139 = 0;
              uVar141 = 0;
              uVar144 = 0;
              uVar146 = 0;
              uVar148 = 0;
              uVar114 = 0;
              auVar213._0_4_ = auVar176._0_4_ & auVar150._0_4_;
              auVar213._4_4_ = auVar176._4_4_ & auVar150._4_4_;
              auVar213._8_4_ = auVar176._8_4_ & auVar150._8_4_;
              auVar213._12_4_ = auVar176._12_4_ & auVar150._12_4_;
              auVar213._16_4_ = auVar176._16_4_ & auVar150._16_4_;
              auVar213._20_4_ = auVar176._20_4_ & auVar150._20_4_;
              auVar213._24_4_ = auVar176._24_4_ & auVar150._24_4_;
              auVar213._28_4_ = auVar176._28_4_ & auVar150._28_4_;
              uVar42 = vmovmskps_avx(auVar213);
              if ((char)iVar33 != (char)uVar42) {
                uVar114 = uVar170 ^ auVar176._0_4_;
                uVar41 = uVar185 ^ auVar176._4_4_;
                uVar137 = uVar187 ^ auVar176._8_4_;
                uVar139 = uVar40 ^ auVar176._12_4_;
                uVar141 = uVar182 ^ auVar176._16_4_;
                uVar144 = uVar184 ^ auVar176._20_4_;
                uVar146 = uVar186 ^ auVar176._24_4_;
                uVar148 = uVar188 ^ auVar176._28_4_;
              }
              auVar47 = vblendvps_avx(auVar47,auVar79,auVar176);
              auVar79._16_16_ = auVar88;
              auVar79._0_16_ = auVar73;
              auVar46 = vpcmpgtd_avx(auVar210,auVar88);
              auVar45 = vpcmpgtd_avx(auVar9,auVar73);
              uVar170 = auVar45._0_4_ & uVar114;
              uVar185 = auVar45._4_4_ & uVar41;
              uVar187 = auVar45._8_4_ & uVar137;
              uVar40 = auVar45._12_4_ & uVar139;
              uVar182 = auVar46._0_4_ & uVar141;
              uVar184 = auVar46._4_4_ & uVar144;
              uVar186 = auVar46._8_4_ & uVar146;
              uVar188 = auVar46._12_4_ & uVar148;
              auVar133._0_4_ = uVar170 & auVar150._0_4_;
              auVar133._4_4_ = uVar185 & auVar150._4_4_;
              auVar133._8_4_ = uVar187 & auVar150._8_4_;
              auVar133._12_4_ = uVar40 & auVar150._12_4_;
              auVar133._16_4_ = uVar182 & auVar150._16_4_;
              auVar133._20_4_ = uVar184 & auVar150._20_4_;
              auVar133._24_4_ = uVar186 & auVar150._24_4_;
              auVar133._28_4_ = uVar188 & auVar150._28_4_;
              iVar33 = vmovmskps_avx(auVar133);
            } while (iVar33 != 0);
          }
        }
        auVar96 = vpcmpgtd_avx(auVar202,auVar26);
        auVar46 = vpcmpgtd_avx(auVar153,auVar26);
        auVar65._16_16_ = auVar96;
        auVar65._0_16_ = auVar46;
        auVar65 = auVar65 & auVar150;
        if ((((((((SUB321(auVar65 >> 0x1f,0) & 1) != 0 || (SUB321(auVar65 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar65 >> 0x5f,0) & 1) != 0) || SUB321(auVar65 >> 0x7f,0) != '\0') ||
              (SUB321(auVar65 >> 0x9f,0) & 1) != 0) || SUB321(auVar65 >> 0xbf,0) != '\0') ||
            (SUB321(auVar65 >> 0xdf,0) & 1) != 0) || auVar65[0x1f] < '\0') {
          auVar47 = vblendvps_avx(ZEXT832(0) << 0x20,auVar47,auVar132);
          auVar99._4_4_ = __real_00000001;
          auVar99._0_4_ = __real_00000001;
          auVar99._8_4_ = __real_00000001;
          auVar99._12_4_ = __real_00000001;
          auVar96 = vpcmpgtd_avx(auVar97,auVar99);
          auVar46 = vpcmpgtd_avx(auVar44,auVar99);
          uVar170 = ~local_6c0 & auVar46._0_4_;
          uVar185 = ~uStack_6bc & auVar46._4_4_;
          uVar187 = ~uStack_6b8 & auVar46._8_4_;
          uVar40 = ~uStack_6b4 & auVar46._12_4_;
          uVar182 = ~uStack_6b0 & auVar96._0_4_;
          uVar184 = ~uStack_6ac & auVar96._4_4_;
          uVar186 = ~uStack_6a8 & auVar96._8_4_;
          uVar188 = ~uStack_6a4 & auVar96._12_4_;
          auVar134._0_4_ = uVar170 & auVar150._0_4_;
          auVar134._4_4_ = uVar185 & auVar150._4_4_;
          auVar134._8_4_ = uVar187 & auVar150._8_4_;
          auVar134._12_4_ = uVar40 & auVar150._12_4_;
          auVar134._16_4_ = uVar182 & auVar150._16_4_;
          auVar134._20_4_ = uVar184 & auVar150._20_4_;
          auVar134._24_4_ = uVar186 & auVar150._24_4_;
          auVar134._28_4_ = uVar188 & auVar150._28_4_;
          iVar33 = vmovmskps_avx(auVar134);
          if (iVar33 != 0) {
            auVar96 = vpcmpeqd_avx(auVar46,auVar46);
            auVar100._4_4_ = __real_00000002;
            auVar100._0_4_ = __real_00000002;
            auVar100._8_4_ = __real_00000002;
            auVar100._12_4_ = __real_00000002;
            do {
              auVar19._0_4_ = auVar206._0_4_ + auVar96._0_4_;
              auVar19._4_4_ = auVar206._4_4_ + auVar96._4_4_;
              auVar19._8_4_ = auVar206._8_4_ + auVar96._8_4_;
              auVar19._12_4_ = auVar206._12_4_ + auVar96._12_4_;
              auVar97 = vpmovsxdq_avx(auVar19);
              auVar46 = vpshufd_avx(auVar19,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar151,auVar46);
              auVar97 = vpaddq_avx(auVar190,auVar97);
              uVar41 = vmovmskps_avx(auVar134);
              auVar44 = auVar97;
              if ((uVar41 & 1) != 0) {
                auVar44 = ZEXT116(*auVar97._0_8_);
              }
              if ((uVar41 & 2) != 0) {
                auVar97 = vpinsrb_avx(auVar44,(uint)*auVar97._8_8_,1);
                auVar44 = vpblendw_avx(auVar97,auVar44,0xe);
              }
              if ((uVar41 & 4) != 0) {
                auVar97 = vpmovzxwd_avx(auVar44);
                auVar97 = vpinsrb_avx(auVar97,(uint)*auVar46._0_8_,2);
                auVar97 = vpinsrb_avx(auVar97,(uint)auVar44[3],3);
                auVar44 = vpblendw_avx(auVar97,auVar44,0xc);
              }
              if ((uVar41 & 8) != 0) {
                auVar97 = vpmovzxwd_avx(auVar44);
                auVar97 = vpinsrb_avx(auVar97,(uint)auVar44[2],2);
                auVar46 = vpinsrb_avx(auVar97,(uint)*auVar46._8_8_,3);
                auVar44 = vpblendw_avx(auVar46,auVar44,0xc);
              }
              auVar20._0_4_ = auVar206._16_4_ + auVar96._0_4_;
              auVar20._4_4_ = auVar206._20_4_ + auVar96._4_4_;
              auVar20._8_4_ = auVar206._24_4_ + auVar96._8_4_;
              auVar20._12_4_ = auVar206._28_4_ + auVar96._12_4_;
              auVar97 = vpmovsxdq_avx(auVar20);
              auVar46 = vpshufd_avx(auVar20,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar46,auVar142);
              auVar97 = vpaddq_avx(auVar97,auVar117);
              if ((uVar41 & 0x10) != 0) {
                auVar210 = vpshufb_avx(auVar44,___xmm_80800706808005048080030203020100);
                auVar210 = vpinsrb_avx(auVar210,(uint)*auVar97._0_8_,4);
                auVar210 = vpinsrb_avx(auVar210,(uint)auVar44[5],5);
                auVar44 = vpblendw_avx(auVar210,auVar44,8);
              }
              if ((uVar41 & 0x20) != 0) {
                auVar210 = vpshufb_avx(auVar44,___xmm_80800706808005048080030403020100);
                auVar97 = vpinsrb_avx(auVar210,(uint)*auVar97._8_8_,5);
                auVar44 = vpblendw_avx(auVar97,auVar44,8);
              }
              if ((uVar41 & 0x40) != 0) {
                auVar97 = vpshufb_avx(auVar44,___xmm_80800706808005048080050403020100);
                auVar97 = vpinsrb_avx(auVar97,(uint)*auVar46._0_8_,6);
                auVar44 = vpinsrb_avx(auVar97,(uint)auVar44[7],7);
              }
              if ((char)uVar41 < '\0') {
                auVar97 = vpshufb_avx(auVar44,___xmm_80800706808005048006050403020100);
                auVar44 = vpinsrb_avx(auVar97,(uint)*auVar46._8_8_,7);
              }
              auVar97 = vpmovzxbd_avx(auVar44);
              auVar46 = vpshufd_avx(auVar44,0x55);
              auVar46 = vpmovzxbd_avx(auVar46);
              auVar46 = vpcmpgtd_avx(auVar46,auVar26);
              auVar97 = vpcmpgtd_avx(auVar97,auVar26);
              auVar177._0_4_ = ~auVar97._0_4_ & uVar170;
              auVar177._4_4_ = ~auVar97._4_4_ & uVar185;
              auVar177._8_4_ = ~auVar97._8_4_ & uVar187;
              auVar177._12_4_ = ~auVar97._12_4_ & uVar40;
              auVar177._16_4_ = ~auVar46._0_4_ & uVar182;
              auVar177._20_4_ = ~auVar46._4_4_ & uVar184;
              auVar177._24_4_ = ~auVar46._8_4_ & uVar186;
              auVar177._28_4_ = ~auVar46._12_4_ & uVar188;
              uVar41 = 0;
              uVar137 = 0;
              uVar139 = 0;
              uVar141 = 0;
              uVar144 = 0;
              uVar146 = 0;
              uVar148 = 0;
              uVar114 = 0;
              auVar214._0_4_ = auVar177._0_4_ & auVar150._0_4_;
              auVar214._4_4_ = auVar177._4_4_ & auVar150._4_4_;
              auVar214._8_4_ = auVar177._8_4_ & auVar150._8_4_;
              auVar214._12_4_ = auVar177._12_4_ & auVar150._12_4_;
              auVar214._16_4_ = auVar177._16_4_ & auVar150._16_4_;
              auVar214._20_4_ = auVar177._20_4_ & auVar150._20_4_;
              auVar214._24_4_ = auVar177._24_4_ & auVar150._24_4_;
              auVar214._28_4_ = auVar177._28_4_ & auVar150._28_4_;
              uVar42 = vmovmskps_avx(auVar214);
              if ((char)iVar33 != (char)uVar42) {
                uVar114 = uVar170 ^ auVar177._0_4_;
                uVar41 = uVar185 ^ auVar177._4_4_;
                uVar137 = uVar187 ^ auVar177._8_4_;
                uVar139 = uVar40 ^ auVar177._12_4_;
                uVar141 = uVar182 ^ auVar177._16_4_;
                uVar144 = uVar184 ^ auVar177._20_4_;
                uVar146 = uVar186 ^ auVar177._24_4_;
                uVar148 = uVar188 ^ auVar177._28_4_;
              }
              auVar168._16_16_ = auVar20;
              auVar168._0_16_ = auVar19;
              auVar47 = vblendvps_avx(auVar47,auVar168,auVar177);
              auVar46 = vpcmpgtd_avx(auVar206._0_16_,auVar100);
              auVar97 = vpcmpgtd_avx(auVar206._16_16_,auVar100);
              uVar170 = auVar46._0_4_ & uVar114;
              uVar185 = auVar46._4_4_ & uVar41;
              uVar187 = auVar46._8_4_ & uVar137;
              uVar40 = auVar46._12_4_ & uVar139;
              uVar182 = auVar97._0_4_ & uVar141;
              uVar184 = auVar97._4_4_ & uVar144;
              uVar186 = auVar97._8_4_ & uVar146;
              uVar188 = auVar97._12_4_ & uVar148;
              auVar134._0_4_ = uVar170 & auVar150._0_4_;
              auVar134._4_4_ = uVar185 & auVar150._4_4_;
              auVar134._8_4_ = uVar187 & auVar150._8_4_;
              auVar134._12_4_ = uVar40 & auVar150._12_4_;
              auVar134._16_4_ = uVar182 & auVar150._16_4_;
              auVar134._20_4_ = uVar184 & auVar150._20_4_;
              auVar134._24_4_ = uVar186 & auVar150._24_4_;
              auVar134._28_4_ = uVar188 & auVar150._28_4_;
              iVar33 = vmovmskps_avx(auVar134);
              auVar206 = ZEXT3264(auVar168);
            } while (iVar33 != 0);
          }
        }
        auVar47 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar47,auVar150);
        auVar44 = auVar47._0_16_;
        auVar46 = vpmovsxdq_avx(auVar44);
        auVar96 = vshufpd_avx(auVar44,auVar44,3);
        auVar96 = vpmovsxdq_avx(auVar96);
        auVar210 = auVar47._16_16_;
        auVar96 = vpaddq_avx(auVar151,auVar96);
        auVar46 = vpaddq_avx(auVar190,auVar46);
        auVar97 = auVar96;
        if ((uVar36 & 1) != 0) {
          auVar97 = ZEXT116(*auVar46._0_8_);
        }
        auVar45 = vpmovsxdq_avx(auVar210);
        auVar169 = vshufpd_avx(auVar210,auVar210,3);
        if ((uVar36 & 2) != 0) {
          auVar46 = vpinsrb_avx(auVar97,(uint)*auVar46._8_8_,1);
          auVar97 = vpblendw_avx(auVar46,auVar97,0xe);
        }
        auVar169 = vpmovsxdq_avx(auVar169);
        auVar46 = vpaddq_avx(auVar45,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar45 = vpaddq_avx(auVar169,auVar142);
          if ((uVar36 & 8) == 0) goto LAB_140c3c2b5;
LAB_140c3e0ae:
          auVar169 = vpmovzxwd_avx(auVar97);
          auVar169 = vpinsrb_avx(auVar169,(uint)auVar97[2],2);
          auVar96 = vpinsrb_avx(auVar169,(uint)*auVar96._8_8_,3);
          auVar97 = vpblendw_avx(auVar96,auVar97,0xc);
          auVar83._16_16_ = auVar45;
          auVar83._0_16_ = auVar46;
          if ((uVar36 & 0x10) != 0) goto LAB_140c3e0e1;
LAB_140c3c2c5:
          if ((uVar36 & 0x20) == 0) goto LAB_140c3c2cf;
LAB_140c3e111:
          auVar96 = vpshufb_avx(auVar97,___xmm_80800706808005048080030403020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar83._8_8_,5);
          auVar97 = vpblendw_avx(auVar96,auVar97,8);
          if ((uVar36 & 0x40) != 0) goto LAB_140c3e136;
LAB_140c3c2d9:
          auVar46 = auVar83._0_16_;
        }
        else {
          auVar45 = vpmovzxwd_avx(auVar97);
          auVar45 = vpinsrb_avx(auVar45,(uint)*auVar96._0_8_,2);
          auVar45 = vpinsrb_avx(auVar45,(uint)auVar97[3],3);
          auVar97 = vpblendw_avx(auVar45,auVar97,0xc);
          auVar45 = vpaddq_avx(auVar169,auVar142);
          if ((uVar36 & 8) != 0) goto LAB_140c3e0ae;
LAB_140c3c2b5:
          auVar83._16_16_ = auVar45;
          auVar83._0_16_ = auVar46;
          if ((uVar36 & 0x10) == 0) goto LAB_140c3c2c5;
LAB_140c3e0e1:
          auVar96 = vpshufb_avx(auVar97,___xmm_80800706808005048080030203020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar83._0_8_,4);
          auVar96 = vpinsrb_avx(auVar96,(uint)auVar97[5],5);
          auVar97 = vpblendw_avx(auVar96,auVar97,8);
          if ((uVar36 & 0x20) != 0) goto LAB_140c3e111;
LAB_140c3c2cf:
          if ((uVar36 & 0x40) == 0) goto LAB_140c3c2d9;
LAB_140c3e136:
          auVar46 = auVar83._0_16_;
          auVar96 = vpshufb_avx(auVar97,___xmm_80800706808005048080050403020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar83._16_8_,6);
          auVar97 = vpinsrb_avx(auVar96,(uint)auVar97[7],7);
        }
        if (cVar32 < '\0') {
          auVar46 = vpshufb_avx(auVar97,___xmm_80800706808005048006050403020100);
          auVar97 = vpinsrb_avx(auVar46,(uint)*auVar83._24_8_,7);
        }
        auVar96 = vpcmpeqd_avx(auVar46,auVar46);
        auVar46 = vpsubd_avx(auVar210,auVar96);
        auVar96 = vpsubd_avx(auVar44,auVar96);
        auVar66._16_16_ = auVar46;
        auVar66._0_16_ = auVar96;
        auVar48 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar66,auVar150);
        auVar96 = vpcmpgtd_avx(ZEXT416(uVar43),auVar48._16_16_);
        auVar46 = vpcmpgtd_avx(auVar74,auVar48._0_16_);
        auVar67._16_16_ = auVar96;
        auVar67._0_16_ = auVar46;
        auVar209 = auVar150 & ~auVar67;
        if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar209 >> 0x5f,0) & 1) != 0) || SUB321(auVar209 >> 0x7f,0) != '\0') ||
              (SUB321(auVar209 >> 0x9f,0) & 1) != 0) || SUB321(auVar209 >> 0xbf,0) != '\0') ||
            (SUB321(auVar209 >> 0xdf,0) & 1) != 0) || auVar209[0x1f] < '\0') {
          auVar68._0_4_ = ~auVar46._0_4_ & auVar150._0_4_;
          auVar68._4_4_ = ~auVar46._4_4_ & auVar150._4_4_;
          auVar68._8_4_ = ~auVar46._8_4_ & auVar150._8_4_;
          auVar68._12_4_ = ~auVar46._12_4_ & auVar150._12_4_;
          auVar68._16_4_ = ~auVar96._0_4_ & auVar150._16_4_;
          auVar68._20_4_ = ~auVar96._4_4_ & auVar150._20_4_;
          auVar68._24_4_ = ~auVar96._8_4_ & auVar150._24_4_;
          auVar68._28_4_ = ~auVar96._12_4_ & auVar150._28_4_;
          auVar48 = vblendvps_avx(auVar48,auVar197,auVar68);
        }
        auVar46 = vpmovsxdq_avx(auVar48._0_16_);
        auVar96 = vpshufd_avx(auVar48._0_16_,0xee);
        auVar96 = vpmovsxdq_avx(auVar96);
        auVar96 = vpaddq_avx(auVar151,auVar96);
        auVar46 = vpaddq_avx(auVar190,auVar46);
        auVar44 = auVar46;
        if ((uVar36 & 1) != 0) {
          auVar44 = ZEXT116(*auVar46._0_8_);
        }
        auVar210 = vpmovsxdq_avx(auVar48._16_16_);
        auVar151 = vpshufd_avx(auVar48._16_16_,0xee);
        if ((uVar36 & 2) != 0) {
          auVar46 = vpinsrb_avx(auVar44,(uint)*auVar46._8_8_,1);
          auVar44 = vpblendw_avx(auVar46,auVar44,0xe);
        }
        auVar151 = vpmovsxdq_avx(auVar151);
        auVar46 = vpaddq_avx(auVar210,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar210 = vpaddq_avx(auVar151,auVar142);
          if ((uVar36 & 8) == 0) goto LAB_140c3c3c3;
LAB_140c3e1b6:
          auVar142 = vpmovzxwd_avx(auVar44);
          auVar142 = vpinsrb_avx(auVar142,(uint)auVar44[2],2);
          auVar96 = vpinsrb_avx(auVar142,(uint)*auVar96._8_8_,3);
          auVar44 = vpblendw_avx(auVar96,auVar44,0xc);
          auVar84._16_16_ = auVar210;
          auVar84._0_16_ = auVar46;
          if ((uVar36 & 0x10) != 0) goto LAB_140c3e1e9;
LAB_140c3c3d3:
          if ((uVar36 & 0x20) == 0) goto LAB_140c3c3dd;
LAB_140c3e219:
          auVar96 = vpshufb_avx(auVar44,___xmm_80800706808005048080030403020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar84._8_8_,5);
          auVar44 = vpblendw_avx(auVar96,auVar44,8);
          auVar96 = vpmovzxbd_avx(auVar97);
          auVar46 = vpshufd_avx(auVar97,0x55);
        }
        else {
          auVar210 = vpmovzxwd_avx(auVar44);
          auVar210 = vpinsrb_avx(auVar210,(uint)*auVar96._0_8_,2);
          auVar210 = vpinsrb_avx(auVar210,(uint)auVar44[3],3);
          auVar44 = vpblendw_avx(auVar210,auVar44,0xc);
          auVar210 = vpaddq_avx(auVar151,auVar142);
          if ((uVar36 & 8) != 0) goto LAB_140c3e1b6;
LAB_140c3c3c3:
          auVar84._16_16_ = auVar210;
          auVar84._0_16_ = auVar46;
          if ((uVar36 & 0x10) == 0) goto LAB_140c3c3d3;
LAB_140c3e1e9:
          auVar96 = vpshufb_avx(auVar44,___xmm_80800706808005048080030203020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar84._0_8_,4);
          auVar96 = vpinsrb_avx(auVar96,(uint)auVar44[5],5);
          auVar44 = vpblendw_avx(auVar96,auVar44,8);
          if ((uVar36 & 0x20) != 0) goto LAB_140c3e219;
LAB_140c3c3dd:
          auVar96 = vpmovzxbd_avx(auVar97);
          auVar46 = vpshufd_avx(auVar97,0x55);
        }
        if ((uVar36 & 0x40) != 0) {
          auVar97 = vpshufb_avx(auVar44,___xmm_80800706808005048080050403020100);
          auVar97 = vpinsrb_avx(auVar97,(uint)*auVar84._16_8_,6);
          auVar44 = vpinsrb_avx(auVar97,(uint)auVar44[7],7);
        }
        auVar46 = vpmovzxbd_avx(auVar46);
        if (cVar32 < '\0') {
          auVar97 = vpshufb_avx(auVar44,___xmm_80800706808005048006050403020100);
          auVar44 = vpinsrb_avx(auVar97,(uint)*auVar84._24_8_,7);
        }
        auVar82._16_16_ = auVar46;
        auVar82._0_16_ = auVar96;
        auVar96 = vpmovzxbd_avx(auVar44);
        auVar46 = vpshufd_avx(auVar44,0x55);
        auVar46 = vpmovzxbd_avx(auVar46);
        auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      else {
        auVar10._4_4_ = auVar97._4_4_ * 2;
        auVar10._0_4_ = auVar97._0_4_ * 2;
        auVar10._8_4_ = auVar97._8_4_ * 2;
        auVar10._12_4_ = auVar97._12_4_ * 2;
        auVar11._4_4_ = auVar44._4_4_ * 2;
        auVar11._0_4_ = auVar44._0_4_ * 2;
        auVar11._8_4_ = auVar44._8_4_ * 2;
        auVar11._12_4_ = auVar44._12_4_ * 2;
        auVar169 = vpmovsxdq_avx(auVar11);
        auVar45 = vpshufd_avx(auVar11,0xee);
        auVar45 = vpmovsxdq_avx(auVar45);
        auVar45 = vpaddq_avx(auVar151,auVar45);
        auVar169 = vpaddq_avx(auVar190,auVar169);
        auVar73 = auVar45;
        if ((uVar36 & 1) != 0) {
          auVar73 = ZEXT216(*auVar169._0_8_);
        }
        auVar153 = vpmovsxdq_avx(auVar10);
        auVar202 = vpshufd_avx(auVar10,0xee);
        if ((uVar36 & 2) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar169._8_8_,1);
        }
        auVar202 = vpmovsxdq_avx(auVar202);
        auVar169 = vpaddq_avx(auVar153,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar153 = vpaddq_avx(auVar202,auVar142);
        }
        else {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar45._0_8_,2);
          auVar153 = vpaddq_avx(auVar202,auVar142);
        }
        if ((uVar36 & 8) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar45._8_8_,3);
        }
        if ((uVar36 & 0x10) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar169._0_8_,4);
        }
        if ((uVar36 & 0x20) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar169._8_8_,5);
        }
        if ((uVar36 & 0x40) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar153._0_8_,6);
        }
        if (cVar32 < '\0') {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar153._8_8_,7);
        }
        auVar88 = vpunpckhwd_avx(auVar73,(undefined1  [16])0x0);
        auVar202 = vpmovzxwd_avx(auVar73);
        auVar26 = vpshufd_avx(ZEXT416(uVar170),0);
        auVar169 = vpcmpgtd_avx(auVar88,auVar26);
        auVar45 = vpcmpeqd_avx(auVar153,auVar153);
        auVar153 = auVar169 ^ auVar45;
        auVar73 = vpcmpgtd_avx(auVar202,auVar26);
        auVar45 = auVar73 ^ auVar45;
        auVar166._16_16_ = auVar153;
        auVar166._0_16_ = auVar45;
        auVar57._16_16_ = auVar169;
        auVar57._0_16_ = auVar73;
        auVar48 = auVar150 & ~auVar57;
        local_6c0 = auVar45._0_4_;
        uStack_6bc = auVar45._4_4_;
        uStack_6b8 = auVar45._8_4_;
        uStack_6b4 = auVar45._12_4_;
        uStack_6b0 = auVar153._0_4_;
        uStack_6ac = auVar153._4_4_;
        uStack_6a8 = auVar153._8_4_;
        uStack_6a4 = auVar153._12_4_;
        auVar47 = auVar79;
        if ((((((((SUB321(auVar48 >> 0x1f,0) & 1) != 0 || (SUB321(auVar48 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar48 >> 0x5f,0) & 1) != 0) || SUB321(auVar48 >> 0x7f,0) != '\0') ||
              (SUB321(auVar48 >> 0x9f,0) & 1) != 0) || SUB321(auVar48 >> 0xbf,0) != '\0') ||
            (SUB321(auVar48 >> 0xdf,0) & 1) != 0) || auVar48[0x1f] < '\0') {
          auVar45 = vpcmpgtd_avx(auVar88,auVar26);
          auVar169 = vpcmpgtd_avx(auVar202,auVar26);
          auVar58._16_16_ = auVar45;
          auVar58._0_16_ = auVar169;
          auVar47 = vblendvps_avx(auVar197,auVar79,auVar58);
          auVar96 = vpcmpgtd_avx(auVar210,auVar96);
          auVar46 = vpcmpgtd_avx(auVar9,auVar46);
          uVar170 = auVar46._0_4_ & local_6c0;
          uVar185 = auVar46._4_4_ & uStack_6bc;
          uVar187 = auVar46._8_4_ & uStack_6b8;
          uVar40 = auVar46._12_4_ & uStack_6b4;
          uVar182 = auVar96._0_4_ & uStack_6b0;
          uVar184 = auVar96._4_4_ & uStack_6ac;
          uVar186 = auVar96._8_4_ & uStack_6a8;
          uVar188 = auVar96._12_4_ & uStack_6a4;
          auVar131._0_4_ = uVar170 & auVar150._0_4_;
          auVar131._4_4_ = uVar185 & auVar150._4_4_;
          auVar131._8_4_ = uVar187 & auVar150._8_4_;
          auVar131._12_4_ = uVar40 & auVar150._12_4_;
          auVar131._16_4_ = uVar182 & auVar150._16_4_;
          auVar131._20_4_ = uVar184 & auVar150._20_4_;
          auVar131._24_4_ = uVar186 & auVar150._24_4_;
          auVar131._28_4_ = uVar188 & auVar150._28_4_;
          iVar33 = vmovmskps_avx(auVar131);
          if (iVar33 != 0) {
            auVar96 = vpcmpeqd_avx(auVar46,auVar46);
            do {
              auVar73 = vpsubd_avx(auVar79._0_16_,auVar96);
              auVar12._4_4_ = auVar73._4_4_ * 2;
              auVar12._0_4_ = auVar73._0_4_ * 2;
              auVar12._8_4_ = auVar73._8_4_ * 2;
              auVar12._12_4_ = auVar73._12_4_ * 2;
              auVar45 = vpmovsxdq_avx(auVar12);
              auVar46 = vpshufd_avx(auVar12,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar151,auVar46);
              auVar45 = vpaddq_avx(auVar190,auVar45);
              uVar41 = vmovmskps_avx(auVar131);
              auVar169 = auVar46;
              if ((uVar41 & 1) != 0) {
                auVar169 = ZEXT216(*auVar45._0_8_);
              }
              if ((uVar41 & 2) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar45._8_8_,1);
              }
              if ((uVar41 & 4) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar46._0_8_,2);
              }
              if ((uVar41 & 8) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar46._8_8_,3);
              }
              auVar153 = vpsubd_avx(auVar79._16_16_,auVar96);
              auVar13._4_4_ = auVar153._4_4_ * 2;
              auVar13._0_4_ = auVar153._0_4_ * 2;
              auVar13._8_4_ = auVar153._8_4_ * 2;
              auVar13._12_4_ = auVar153._12_4_ * 2;
              auVar45 = vpmovsxdq_avx(auVar13);
              auVar46 = vpshufd_avx(auVar13,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar46,auVar142);
              auVar45 = vpaddq_avx(auVar45,auVar117);
              if ((uVar41 & 0x10) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar45._0_8_,4);
              }
              if ((uVar41 & 0x20) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar45._8_8_,5);
              }
              if ((uVar41 & 0x40) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar46._0_8_,6);
              }
              if ((char)uVar41 < '\0') {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar46._8_8_,7);
              }
              auVar46 = vpunpckhwd_avx(auVar169,___xmm_00000000000000000000000000000000);
              auVar45 = vpmovzxwd_avx(auVar169);
              auVar46 = vpcmpgtd_avx(auVar46,auVar26);
              auVar45 = vpcmpgtd_avx(auVar45,auVar26);
              auVar204._0_4_ = auVar45._0_4_ & uVar170;
              auVar204._4_4_ = auVar45._4_4_ & uVar185;
              auVar204._8_4_ = auVar45._8_4_ & uVar187;
              auVar204._12_4_ = auVar45._12_4_ & uVar40;
              auVar204._16_4_ = auVar46._0_4_ & uVar182;
              auVar204._20_4_ = auVar46._4_4_ & uVar184;
              auVar204._24_4_ = auVar46._8_4_ & uVar186;
              auVar204._28_4_ = auVar46._12_4_ & uVar188;
              uVar41 = 0;
              uVar137 = 0;
              uVar139 = 0;
              uVar141 = 0;
              uVar144 = 0;
              uVar146 = 0;
              uVar148 = 0;
              uVar114 = 0;
              auVar211._0_4_ = auVar204._0_4_ & auVar150._0_4_;
              auVar211._4_4_ = auVar204._4_4_ & auVar150._4_4_;
              auVar211._8_4_ = auVar204._8_4_ & auVar150._8_4_;
              auVar211._12_4_ = auVar204._12_4_ & auVar150._12_4_;
              auVar211._16_4_ = auVar204._16_4_ & auVar150._16_4_;
              auVar211._20_4_ = auVar204._20_4_ & auVar150._20_4_;
              auVar211._24_4_ = auVar204._24_4_ & auVar150._24_4_;
              auVar211._28_4_ = auVar204._28_4_ & auVar150._28_4_;
              uVar42 = vmovmskps_avx(auVar211);
              if ((char)iVar33 != (char)uVar42) {
                uVar114 = auVar204._0_4_ ^ uVar170;
                uVar41 = auVar204._4_4_ ^ uVar185;
                uVar137 = auVar204._8_4_ ^ uVar187;
                uVar139 = auVar204._12_4_ ^ uVar40;
                uVar141 = auVar204._16_4_ ^ uVar182;
                uVar144 = auVar204._20_4_ ^ uVar184;
                uVar146 = auVar204._24_4_ ^ uVar186;
                uVar148 = auVar204._28_4_ ^ uVar188;
              }
              auVar47 = vblendvps_avx(auVar47,auVar79,auVar204);
              auVar79._16_16_ = auVar153;
              auVar79._0_16_ = auVar73;
              auVar46 = vpcmpgtd_avx(auVar210,auVar153);
              auVar45 = vpcmpgtd_avx(auVar9,auVar73);
              uVar170 = auVar45._0_4_ & uVar114;
              uVar185 = auVar45._4_4_ & uVar41;
              uVar187 = auVar45._8_4_ & uVar137;
              uVar40 = auVar45._12_4_ & uVar139;
              uVar182 = auVar46._0_4_ & uVar141;
              uVar184 = auVar46._4_4_ & uVar144;
              uVar186 = auVar46._8_4_ & uVar146;
              uVar188 = auVar46._12_4_ & uVar148;
              auVar131._0_4_ = uVar170 & auVar150._0_4_;
              auVar131._4_4_ = uVar185 & auVar150._4_4_;
              auVar131._8_4_ = uVar187 & auVar150._8_4_;
              auVar131._12_4_ = uVar40 & auVar150._12_4_;
              auVar131._16_4_ = uVar182 & auVar150._16_4_;
              auVar131._20_4_ = uVar184 & auVar150._20_4_;
              auVar131._24_4_ = uVar186 & auVar150._24_4_;
              auVar131._28_4_ = uVar188 & auVar150._28_4_;
              iVar33 = vmovmskps_avx(auVar131);
            } while (iVar33 != 0);
          }
        }
        auVar96 = vpcmpgtd_avx(auVar88,auVar26);
        auVar46 = vpcmpgtd_avx(auVar202,auVar26);
        auVar59._16_16_ = auVar96;
        auVar59._0_16_ = auVar46;
        auVar59 = auVar59 & auVar150;
        if ((((((((SUB321(auVar59 >> 0x1f,0) & 1) != 0 || (SUB321(auVar59 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar59 >> 0x5f,0) & 1) != 0) || SUB321(auVar59 >> 0x7f,0) != '\0') ||
              (SUB321(auVar59 >> 0x9f,0) & 1) != 0) || SUB321(auVar59 >> 0xbf,0) != '\0') ||
            (SUB321(auVar59 >> 0xdf,0) & 1) != 0) || auVar59[0x1f] < '\0') {
          auVar47 = vblendvps_avx(ZEXT832(0) << 0x20,auVar47,auVar166);
          auVar98._4_4_ = __real_00000001;
          auVar98._0_4_ = __real_00000001;
          auVar98._8_4_ = __real_00000001;
          auVar98._12_4_ = __real_00000001;
          auVar96 = vpcmpgtd_avx(auVar97,auVar98);
          auVar46 = vpcmpgtd_avx(auVar44,auVar98);
          uVar170 = ~local_6c0 & auVar46._0_4_;
          uVar185 = ~uStack_6bc & auVar46._4_4_;
          uVar187 = ~uStack_6b8 & auVar46._8_4_;
          uVar40 = ~uStack_6b4 & auVar46._12_4_;
          uVar182 = ~uStack_6b0 & auVar96._0_4_;
          uVar184 = ~uStack_6ac & auVar96._4_4_;
          uVar186 = ~uStack_6a8 & auVar96._8_4_;
          uVar188 = ~uStack_6a4 & auVar96._12_4_;
          auVar109._0_4_ = uVar170 & auVar150._0_4_;
          auVar109._4_4_ = uVar185 & auVar150._4_4_;
          auVar109._8_4_ = uVar187 & auVar150._8_4_;
          auVar109._12_4_ = uVar40 & auVar150._12_4_;
          auVar109._16_4_ = uVar182 & auVar150._16_4_;
          auVar109._20_4_ = uVar184 & auVar150._20_4_;
          auVar109._24_4_ = uVar186 & auVar150._24_4_;
          auVar109._28_4_ = uVar188 & auVar150._28_4_;
          iVar33 = vmovmskps_avx(auVar109);
          if (iVar33 != 0) {
            auVar96 = vpcmpeqd_avx(auVar46,auVar46);
            auVar173._4_4_ = __real_00000002;
            auVar173._0_4_ = __real_00000002;
            auVar173._8_4_ = __real_00000002;
            auVar173._12_4_ = __real_00000002;
            do {
              iVar1 = auVar206._0_4_ + auVar96._0_4_;
              iVar35 = auVar206._4_4_ + auVar96._4_4_;
              auVar167._4_4_ = iVar35;
              auVar167._0_4_ = iVar1;
              iVar3 = auVar206._8_4_ + auVar96._8_4_;
              auVar167._8_4_ = iVar3;
              iVar21 = auVar206._12_4_ + auVar96._12_4_;
              auVar167._12_4_ = iVar21;
              auVar14._4_4_ = iVar35 * 2;
              auVar14._0_4_ = iVar1 * 2;
              auVar14._8_4_ = iVar3 * 2;
              auVar14._12_4_ = iVar21 * 2;
              auVar97 = vpmovsxdq_avx(auVar14);
              auVar46 = vpshufd_avx(auVar14,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar151,auVar46);
              auVar97 = vpaddq_avx(auVar190,auVar97);
              uVar41 = vmovmskps_avx(auVar109);
              auVar44 = auVar97;
              if ((uVar41 & 1) != 0) {
                auVar44 = ZEXT216(*auVar97._0_8_);
              }
              if ((uVar41 & 2) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar97._8_8_,1);
              }
              if ((uVar41 & 4) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._0_8_,2);
              }
              if ((uVar41 & 8) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._8_8_,3);
              }
              iVar1 = auVar206._16_4_ + auVar96._0_4_;
              iVar35 = auVar206._20_4_ + auVar96._4_4_;
              auVar167._20_4_ = iVar35;
              auVar167._16_4_ = iVar1;
              iVar3 = auVar206._24_4_ + auVar96._8_4_;
              auVar167._24_4_ = iVar3;
              iVar21 = auVar206._28_4_ + auVar96._12_4_;
              auVar167._28_4_ = iVar21;
              auVar15._4_4_ = iVar35 * 2;
              auVar15._0_4_ = iVar1 * 2;
              auVar15._8_4_ = iVar3 * 2;
              auVar15._12_4_ = iVar21 * 2;
              auVar97 = vpmovsxdq_avx(auVar15);
              auVar46 = vpshufd_avx(auVar15,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar46,auVar142);
              auVar97 = vpaddq_avx(auVar97,auVar117);
              if ((uVar41 & 0x10) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar97._0_8_,4);
              }
              if ((uVar41 & 0x20) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar97._8_8_,5);
              }
              if ((uVar41 & 0x40) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._0_8_,6);
              }
              if ((char)uVar41 < '\0') {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._8_8_,7);
              }
              auVar46 = vpunpckhwd_avx(auVar44,___xmm_00000000000000000000000000000000);
              auVar97 = vpmovzxwd_avx(auVar44);
              auVar46 = vpcmpgtd_avx(auVar46,auVar26);
              auVar97 = vpcmpgtd_avx(auVar97,auVar26);
              auVar205._0_4_ = ~auVar97._0_4_ & uVar170;
              auVar205._4_4_ = ~auVar97._4_4_ & uVar185;
              auVar205._8_4_ = ~auVar97._8_4_ & uVar187;
              auVar205._12_4_ = ~auVar97._12_4_ & uVar40;
              auVar205._16_4_ = ~auVar46._0_4_ & uVar182;
              auVar205._20_4_ = ~auVar46._4_4_ & uVar184;
              auVar205._24_4_ = ~auVar46._8_4_ & uVar186;
              auVar205._28_4_ = ~auVar46._12_4_ & uVar188;
              uVar41 = 0;
              uVar137 = 0;
              uVar139 = 0;
              uVar141 = 0;
              uVar144 = 0;
              uVar146 = 0;
              uVar148 = 0;
              uVar114 = 0;
              auVar212._0_4_ = auVar205._0_4_ & auVar150._0_4_;
              auVar212._4_4_ = auVar205._4_4_ & auVar150._4_4_;
              auVar212._8_4_ = auVar205._8_4_ & auVar150._8_4_;
              auVar212._12_4_ = auVar205._12_4_ & auVar150._12_4_;
              auVar212._16_4_ = auVar205._16_4_ & auVar150._16_4_;
              auVar212._20_4_ = auVar205._20_4_ & auVar150._20_4_;
              auVar212._24_4_ = auVar205._24_4_ & auVar150._24_4_;
              auVar212._28_4_ = auVar205._28_4_ & auVar150._28_4_;
              uVar42 = vmovmskps_avx(auVar212);
              if ((char)iVar33 != (char)uVar42) {
                uVar114 = auVar205._0_4_ ^ uVar170;
                uVar41 = auVar205._4_4_ ^ uVar185;
                uVar137 = auVar205._8_4_ ^ uVar187;
                uVar139 = auVar205._12_4_ ^ uVar40;
                uVar141 = auVar205._16_4_ ^ uVar182;
                uVar144 = auVar205._20_4_ ^ uVar184;
                uVar146 = auVar205._24_4_ ^ uVar186;
                uVar148 = auVar205._28_4_ ^ uVar188;
              }
              auVar47 = vblendvps_avx(auVar47,auVar167,auVar205);
              auVar46 = vpcmpgtd_avx(auVar206._0_16_,auVar173);
              auVar97 = vpcmpgtd_avx(auVar206._16_16_,auVar173);
              uVar170 = auVar46._0_4_ & uVar114;
              uVar185 = auVar46._4_4_ & uVar41;
              uVar187 = auVar46._8_4_ & uVar137;
              uVar40 = auVar46._12_4_ & uVar139;
              uVar182 = auVar97._0_4_ & uVar141;
              uVar184 = auVar97._4_4_ & uVar144;
              uVar186 = auVar97._8_4_ & uVar146;
              uVar188 = auVar97._12_4_ & uVar148;
              auVar109._0_4_ = uVar170 & auVar150._0_4_;
              auVar109._4_4_ = uVar185 & auVar150._4_4_;
              auVar109._8_4_ = uVar187 & auVar150._8_4_;
              auVar109._12_4_ = uVar40 & auVar150._12_4_;
              auVar109._16_4_ = uVar182 & auVar150._16_4_;
              auVar109._20_4_ = uVar184 & auVar150._20_4_;
              auVar109._24_4_ = uVar186 & auVar150._24_4_;
              auVar109._28_4_ = uVar188 & auVar150._28_4_;
              iVar33 = vmovmskps_avx(auVar109);
              auVar206 = ZEXT3264(auVar167);
            } while (iVar33 != 0);
          }
        }
        auVar47 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar47,auVar150);
        auVar96._4_4_ = auVar47._20_4_ * 2;
        auVar96._0_4_ = auVar47._16_4_ * 2;
        auVar96._8_4_ = auVar47._24_4_ * 2;
        auVar96._12_4_ = auVar47._28_4_ * 2;
        auVar16._4_4_ = auVar47._4_4_ * 2;
        auVar16._0_4_ = auVar47._0_4_ * 2;
        auVar16._8_4_ = auVar47._8_4_ * 2;
        auVar16._12_4_ = auVar47._12_4_ * 2;
        auVar97 = vpmovsxdq_avx(auVar16);
        auVar46 = vpshufd_avx(auVar16,0xee);
        auVar46 = vpmovsxdq_avx(auVar46);
        auVar46 = vpaddq_avx(auVar151,auVar46);
        auVar97 = vpaddq_avx(auVar190,auVar97);
        auVar44 = auVar97;
        if ((uVar36 & 1) != 0) {
          auVar44 = ZEXT216(*auVar97._0_8_);
        }
        auVar210 = vpmovsxdq_avx(auVar96);
        auVar96 = vpshufd_avx(auVar96,0xee);
        if ((uVar36 & 2) != 0) {
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar97._8_8_,1);
        }
        auVar97 = vpmovsxdq_avx(auVar96);
        auVar96 = vpaddq_avx(auVar210,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar97 = vpaddq_avx(auVar97,auVar142);
          if ((uVar36 & 8) == 0) goto LAB_140c3b925;
LAB_140c3df8c:
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._8_8_,3);
          auVar80._16_16_ = auVar97;
          auVar80._0_16_ = auVar96;
          if ((uVar36 & 0x10) != 0) goto LAB_140c3dfb0;
LAB_140c3b93e:
          if ((uVar36 & 0x20) == 0) goto LAB_140c3b948;
LAB_140c3dfc4:
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar80._8_8_,5);
          if ((uVar36 & 0x40) != 0) goto LAB_140c3dfd9;
LAB_140c3b952:
          auVar96 = auVar80._0_16_;
        }
        else {
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._0_8_,2);
          auVar97 = vpaddq_avx(auVar97,auVar142);
          if ((uVar36 & 8) != 0) goto LAB_140c3df8c;
LAB_140c3b925:
          auVar80._16_16_ = auVar97;
          auVar80._0_16_ = auVar96;
          if ((uVar36 & 0x10) == 0) goto LAB_140c3b93e;
LAB_140c3dfb0:
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar80._0_8_,4);
          if ((uVar36 & 0x20) != 0) goto LAB_140c3dfc4;
LAB_140c3b948:
          if ((uVar36 & 0x40) == 0) goto LAB_140c3b952;
LAB_140c3dfd9:
          auVar96 = auVar80._0_16_;
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar80._16_8_,6);
        }
        if (cVar32 < '\0') {
          auVar96 = auVar80._16_16_;
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar80._24_8_,7);
        }
        auVar96 = vpcmpeqd_avx(auVar96,auVar96);
        auVar46 = vpsubd_avx(auVar47._16_16_,auVar96);
        auVar96 = vpsubd_avx(auVar47._0_16_,auVar96);
        auVar60._16_16_ = auVar46;
        auVar60._0_16_ = auVar96;
        auVar48 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar60,auVar150);
        auVar96 = vpcmpgtd_avx(ZEXT416(uVar43),auVar48._16_16_);
        auVar46 = vpcmpgtd_avx(auVar74,auVar48._0_16_);
        auVar61._16_16_ = auVar96;
        auVar61._0_16_ = auVar46;
        auVar209 = auVar150 & ~auVar61;
        if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar209 >> 0x5f,0) & 1) != 0) || SUB321(auVar209 >> 0x7f,0) != '\0') ||
              (SUB321(auVar209 >> 0x9f,0) & 1) != 0) || SUB321(auVar209 >> 0xbf,0) != '\0') ||
            (SUB321(auVar209 >> 0xdf,0) & 1) != 0) || auVar209[0x1f] < '\0') {
          auVar62._0_4_ = ~auVar46._0_4_ & auVar150._0_4_;
          auVar62._4_4_ = ~auVar46._4_4_ & auVar150._4_4_;
          auVar62._8_4_ = ~auVar46._8_4_ & auVar150._8_4_;
          auVar62._12_4_ = ~auVar46._12_4_ & auVar150._12_4_;
          auVar62._16_4_ = ~auVar96._0_4_ & auVar150._16_4_;
          auVar62._20_4_ = ~auVar96._4_4_ & auVar150._20_4_;
          auVar62._24_4_ = ~auVar96._8_4_ & auVar150._24_4_;
          auVar62._28_4_ = ~auVar96._12_4_ & auVar150._28_4_;
          auVar48 = vblendvps_avx(auVar48,auVar197,auVar62);
        }
        auVar17._4_4_ = auVar48._20_4_ * 2;
        auVar17._0_4_ = auVar48._16_4_ * 2;
        auVar17._8_4_ = auVar48._24_4_ * 2;
        auVar17._12_4_ = auVar48._28_4_ * 2;
        auVar18._4_4_ = auVar48._4_4_ * 2;
        auVar18._0_4_ = auVar48._0_4_ * 2;
        auVar18._8_4_ = auVar48._8_4_ * 2;
        auVar18._12_4_ = auVar48._12_4_ * 2;
        auVar46 = vpmovsxdq_avx(auVar18);
        auVar96 = vpshufd_avx(auVar18,0xee);
        auVar96 = vpmovsxdq_avx(auVar96);
        auVar96 = vpaddq_avx(auVar151,auVar96);
        auVar46 = vpaddq_avx(auVar190,auVar46);
        auVar97 = auVar96;
        if ((uVar36 & 1) != 0) {
          auVar97 = ZEXT216(*auVar46._0_8_);
        }
        auVar210 = vpmovsxdq_avx(auVar17);
        auVar151 = vpshufd_avx(auVar17,0xee);
        if ((uVar36 & 2) != 0) {
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar46._8_8_,1);
        }
        auVar151 = vpmovsxdq_avx(auVar151);
        auVar46 = vpaddq_avx(auVar210,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar210 = vpaddq_avx(auVar151,auVar142);
          if ((uVar36 & 8) == 0) goto LAB_140c3ba3d;
LAB_140c3e021:
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar96._8_8_,3);
          auVar81._16_16_ = auVar210;
          auVar81._0_16_ = auVar46;
          if ((uVar36 & 0x10) != 0) goto LAB_140c3e03c;
LAB_140c3ba4d:
          if ((uVar36 & 0x20) == 0) goto LAB_140c3ba57;
LAB_140c3e050:
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar81._8_8_,5);
          auVar96 = vpmovzxwd_avx(auVar44);
        }
        else {
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar96._0_8_,2);
          auVar210 = vpaddq_avx(auVar151,auVar142);
          if ((uVar36 & 8) != 0) goto LAB_140c3e021;
LAB_140c3ba3d:
          auVar81._16_16_ = auVar210;
          auVar81._0_16_ = auVar46;
          if ((uVar36 & 0x10) == 0) goto LAB_140c3ba4d;
LAB_140c3e03c:
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar81._0_8_,4);
          if ((uVar36 & 0x20) != 0) goto LAB_140c3e050;
LAB_140c3ba57:
          auVar96 = vpmovzxwd_avx(auVar44);
        }
        if ((uVar36 & 0x40) != 0) {
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar81._16_8_,6);
        }
        auVar46 = vpunpckhwd_avx(auVar44,(undefined1  [16])0x0);
        if (cVar32 < '\0') {
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar81._24_8_,7);
        }
        auVar82._16_16_ = auVar46;
        auVar82._0_16_ = auVar96;
        auVar46 = vpunpckhwd_avx(auVar97,(undefined1  [16])0x0);
        auVar96 = vpmovzxwd_avx(auVar97);
        auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      auVar101 = ZEXT1632((undefined1  [16])0x0);
      if (param_8 != '\x01') {
        auVar101 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar97 = vpsubd_avx(auVar96,auVar82._0_16_);
        auVar96 = vpsubd_avx(auVar46,auVar82._16_16_);
        auVar118._4_4_ = __real_00000001;
        auVar118._0_4_ = __real_00000001;
        auVar118._8_4_ = __real_00000001;
        auVar118._12_4_ = __real_00000001;
        auVar96 = vpmaxsd_avx(auVar96,auVar118);
        auVar46 = vpmaxsd_avx(auVar97,auVar118);
        auVar69._16_16_ = auVar96;
        auVar69._0_16_ = auVar46;
        auVar96 = vpermilps_avx(ZEXT416((uint)param_7),0);
        auVar110._16_16_ = auVar96;
        auVar110._0_16_ = auVar96;
        auVar209 = vcvtdq2ps_avx(auVar82);
        auVar49 = vsubps_avx(auVar110,auVar209);
        auVar209 = vcvtdq2ps_avx(auVar69);
        auVar209 = vdivps_avx(auVar49,auVar209);
      }
      _local_800 = vblendvps_avx(auVar101,auVar209,local_640);
      goto LAB_140c3c4d7;
    }
    auVar47 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar197,auVar150);
    auVar48 = auVar47;
  }
  _local_800 = ZEXT1632(ZEXT816(0));
LAB_140c3c4d7:
  if (param_9 < 7) {
    auVar46 = vpmulld_avx(auVar47._0_16_,auVar25);
    auVar97 = vpmulld_avx(auVar47._16_16_,auVar25);
    auVar96 = vpmovsxdq_avx(auVar97);
    auVar97 = vpshufd_avx(auVar97,0xee);
    vpmovsxdq_avx(auVar97);
    vpmovsxdq_avx(auVar46);
    auVar46 = vpshufd_avx(auVar46,0xee);
    auVar46 = vpmovsxdq_avx(auVar46);
                    /* WARNING: Could not recover jumptable at 0x000140c3c57f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6c908 + *(int *)(&DAT_151c6c908 + uVar39 * 4)))
              (auVar46._0_8_,&DAT_151c6c908 + *(int *)(&DAT_151c6c908 + uVar39 * 4),auVar96._0_8_,
               auVar96._0_8_);
    return;
  }
  auVar96 = vpcmpgtd_avx(auVar95,auVar72);
  auVar46 = vpcmpgtd_avx(auVar95,auVar189);
  auVar70._16_16_ = auVar96;
  auVar70._0_16_ = auVar46;
  local_5e0 = vmaskmovps_avx(auVar70,ZEXT1632((undefined1  [16])0x0));
  local_5c0 = vmaskmovps_avx(auVar70,ZEXT1632((undefined1  [16])0x0));
  local_5a0._0_32_ = vmaskmovps_avx(auVar70,ZEXT1632((undefined1  [16])0x0));
  auVar96 = vpcmpeqd_avx(auVar47._16_16_,auVar48._16_16_);
  auVar46 = vpcmpeqd_avx(auVar47._0_16_,auVar48._0_16_);
  auVar85._16_16_ = auVar96;
  auVar85._0_16_ = auVar46;
  auVar97 = vpcmpgtd_avx(auVar95,auVar72);
  auVar44 = vpcmpgtd_avx(auVar95,auVar189);
  auVar111._16_16_ = auVar97;
  auVar111._0_16_ = auVar44;
  auVar111 = auVar111 & ~auVar85;
  if ((((((((SUB321(auVar111 >> 0x1f,0) & 1) != 0 || (SUB321(auVar111 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar111 >> 0x5f,0) & 1) != 0) || SUB321(auVar111 >> 0x7f,0) != '\0') ||
        (SUB321(auVar111 >> 0x9f,0) & 1) != 0) || SUB321(auVar111 >> 0xbf,0) != '\0') ||
      (SUB321(auVar111 >> 0xdf,0) & 1) != 0) || auVar111[0x1f] < '\0') {
    auVar86._0_4_ = ~auVar46._0_4_ & uVar178;
    auVar86._4_4_ = ~auVar46._4_4_ & uVar179;
    auVar86._8_4_ = ~auVar46._8_4_ & uVar180;
    auVar86._12_4_ = ~auVar46._12_4_ & uVar181;
    auVar86._16_4_ = ~auVar96._0_4_ & uVar183;
    auVar86._20_4_ = ~auVar96._4_4_ & auVar30._4_4_;
    auVar86._24_4_ = ~auVar96._8_4_ & auVar30._8_4_;
    auVar86._28_4_ = ~auVar96._12_4_ & auVar30._12_4_;
    if (param_9 < 7) {
      auVar46 = vpmulld_avx(auVar48._0_16_,auVar25);
      auVar96 = vpmulld_avx(auVar48._16_16_,auVar25);
      vpmovsxdq_avx(auVar96);
      auVar96 = vpshufd_avx(auVar96,0xee);
      vpmovsxdq_avx(auVar96);
      auVar96 = vpmovsxdq_avx(auVar46);
      auVar46 = vpshufd_avx(auVar46,0xee);
      auVar46 = vpmovsxdq_avx(auVar46);
                    /* WARNING: Could not recover jumptable at 0x000140c3d1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6c924 + *(int *)(&DAT_151c6c924 + uVar39 * 4)))
                (auVar96._0_8_,&DAT_151c6c924 + *(int *)(&DAT_151c6c924 + uVar39 * 4),param_5,
                 auVar46._0_8_);
      return;
    }
    auVar47 = vmaskmovps_avx(auVar86,ZEXT1632((undefined1  [16])0x0));
    auVar48 = vmaskmovps_avx(auVar86,ZEXT1632((undefined1  [16])0x0));
    auVar209 = vmaskmovps_avx(auVar86,ZEXT1632((undefined1  [16])0x0));
    auVar47 = vsubps_avx(auVar47,local_5e0);
    auVar48 = vsubps_avx(auVar48,local_5c0);
    auVar209 = vsubps_avx(auVar209,local_5a0._0_32_);
    auVar71._0_4_ = local_5e0._0_4_ + (float)local_800._0_4_ * auVar47._0_4_;
    auVar71._4_4_ = local_5e0._4_4_ + (float)local_800._4_4_ * auVar47._4_4_;
    auVar71._8_4_ = local_5e0._8_4_ + fStack_7f8 * auVar47._8_4_;
    auVar71._12_4_ = local_5e0._12_4_ + fStack_7f4 * auVar47._12_4_;
    auVar71._16_4_ = local_5e0._16_4_ + fStack_7f0 * auVar47._16_4_;
    auVar71._20_4_ = local_5e0._20_4_ + fStack_7ec * auVar47._20_4_;
    auVar71._24_4_ = local_5e0._24_4_ + fStack_7e8 * auVar47._24_4_;
    auVar71._28_4_ = local_5e0._28_4_ + fStack_7e4 * auVar47._28_4_;
    auVar112._0_4_ = local_5c0._0_4_ + (float)local_800._0_4_ * auVar48._0_4_;
    auVar112._4_4_ = local_5c0._4_4_ + (float)local_800._4_4_ * auVar48._4_4_;
    auVar112._8_4_ = local_5c0._8_4_ + fStack_7f8 * auVar48._8_4_;
    auVar112._12_4_ = local_5c0._12_4_ + fStack_7f4 * auVar48._12_4_;
    auVar112._16_4_ = local_5c0._16_4_ + fStack_7f0 * auVar48._16_4_;
    auVar112._20_4_ = local_5c0._20_4_ + fStack_7ec * auVar48._20_4_;
    auVar112._24_4_ = local_5c0._24_4_ + fStack_7e8 * auVar48._24_4_;
    auVar112._28_4_ = local_5c0._28_4_ + fStack_7e4 * auVar48._28_4_;
    auVar135._0_4_ = local_5a0._0_4_ + (float)local_800._0_4_ * auVar209._0_4_;
    auVar135._4_4_ = local_5a0._4_4_ + (float)local_800._4_4_ * auVar209._4_4_;
    auVar135._8_4_ = local_5a0._8_4_ + fStack_7f8 * auVar209._8_4_;
    auVar135._12_4_ = local_5a0._12_4_ + fStack_7f4 * auVar209._12_4_;
    auVar135._16_4_ = local_5a0._16_4_ + fStack_7f0 * auVar209._16_4_;
    auVar135._20_4_ = local_5a0._20_4_ + fStack_7ec * auVar209._20_4_;
    auVar135._24_4_ = local_5a0._24_4_ + fStack_7e8 * auVar209._24_4_;
    auVar135._28_4_ = local_5a0._28_4_ + fStack_7e4 * auVar209._28_4_;
    local_5e0 = vmaskmovps_avx(auVar86,auVar71);
    local_5c0 = vmaskmovps_avx(auVar86,auVar112);
    local_5a0._0_32_ = vmaskmovps_avx(auVar86,auVar135);
  }
  local_560 = (ulonglong)uVar37;
  local_7b0 = (ulonglong)*(uint *)((ulonglong)(uVar183 & _UNK_150b519d0) + lVar34);
  auVar194._16_16_ = local_5c0._0_16_;
  auVar194._0_16_ = local_5e0._0_16_;
  auVar101 = vperm2f128_avx(local_5e0,local_5c0,0x31);
  auVar49 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar209 = vperm2f128_avx(auVar49,local_5a0._0_32_,0x21);
  auVar47 = vshufps_avx(auVar209,auVar209,0x14);
  auVar47 = vblendps_avx(ZEXT1632(CONCAT88(local_5a0._0_8_,local_5a0._0_8_)),auVar47,0x48);
  auVar208._16_16_ = local_5e0._0_16_;
  auVar208._0_16_ = local_5c0._0_16_;
  auVar48 = vshufps_avx(auVar208,auVar208,0xe1);
  auVar48 = vblendps_avx(auVar194,auVar48,0x12);
  local_200 = vblendps_avx(auVar48,auVar47,0xcc);
  auVar47 = vshufps_avx(auVar209,auVar209,0xb4);
  auVar47 = vblendps_avx(ZEXT1632(local_5a0._0_16_),auVar47,0x48);
  auVar209 = vshufps_avx(auVar208,auVar208,0xeb);
  auVar48 = vshufpd_avx(auVar194,auVar194,5);
  auVar48 = vblendps_avx(auVar48,auVar209,0x12);
  local_1e0 = vblendps_avx(auVar48,auVar47,0xcc);
  auVar47 = vunpcklps_avx(local_5a0._0_32_,auVar49);
  auVar47 = vblendps_avx(ZEXT1632(CONCAT88(local_5a0._16_8_,local_5a0._16_8_)),auVar47,0x48);
  auVar209 = vperm2f128_avx(local_5c0,local_5e0,0x31);
  auVar48 = vshufps_avx(auVar209,auVar209,0xe1);
  auVar48 = vblendps_avx(auVar101,auVar48,0x12);
  local_1c0 = vblendps_avx(auVar48,auVar47,0xcc);
  auVar47 = vunpckhps_avx(local_5a0._0_32_,auVar49);
  auVar47 = vblendps_avx(ZEXT1632(local_5a0._16_16_),auVar47,0x48);
  auVar209 = vshufps_avx(auVar209,auVar209,0xeb);
  auVar48 = vshufpd_avx(auVar101,auVar101,5);
  auVar48 = vblendps_avx(auVar48,auVar209,0x12);
  local_1a0 = vblendps_avx(auVar48,auVar47,0xcc);
  auVar96 = vpcmpgtd_avx(auVar95,auVar189);
  auVar87._16_16_ = auVar97;
  auVar87._0_16_ = auVar96;
  uVar37 = vmovmskps_avx(auVar87);
  uVar39 = (ulonglong)uVar37;
  do {
    if (uVar39 == 0) {
      uVar37 = 0x40;
    }
    else {
      uVar37 = 0;
      for (uVar38 = uVar39; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x8000000000000000) {
        uVar37 = uVar37 + 1;
      }
    }
    bVar2 = (byte)uVar37 & 0x3f;
    local_240[0] = local_560;
    local_240[1] = 0;
    local_240[2] = local_7b0;
    uStack_228 = 0;
    auVar47 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar37 << 4)));
    lVar34 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar37 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + 0x40 + lVar34) = auVar47._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x50 + lVar34) = auVar47._16_16_;
    uVar39 = uVar39 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
  } while (uVar39 != 0);
  return;
}

// GetVariableKeyLerpPoseRotations_avx @ 140c3e250

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetVariableKeyLerpPoseRotations_avx
               (longlong param_1,longlong param_2,uint *param_3,uint *param_4,int param_5,
               float param_6,char param_7,uint param_8,uint param_9)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulonglong uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  int iVar38;
  longlong lVar39;
  longlong lVar40;
  uint *puVar41;
  longlong lVar42;
  int iVar43;
  int iVar44;
  longlong lVar45;
  uint uVar46;
  int iVar47;
  longlong lVar48;
  char cVar49;
  longlong lVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [32];
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
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
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
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar73 [16];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  uint uVar98;
  float fVar139;
  uint uVar140;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  uint uVar99;
  float fVar100;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  uint uVar146;
  uint uVar149;
  uint uVar152;
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  uint uVar143;
  uint uVar155;
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  uint uVar141;
  uint uVar144;
  uint uVar147;
  uint uVar150;
  uint uVar153;
  uint uVar156;
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
  undefined1 auVar123 [32];
  float fVar142;
  float fVar145;
  float fVar148;
  float fVar151;
  float fVar154;
  float fVar157;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
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
  uint uVar158;
  uint uVar184;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar159;
  uint uVar180;
  uint uVar182;
  undefined1 auVar160 [16];
  uint uVar186;
  uint uVar189;
  uint uVar191;
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  uint uVar193;
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  float fVar181;
  float fVar183;
  float fVar185;
  float fVar187;
  float fVar190;
  float fVar192;
  float fVar194;
  undefined1 auVar171 [32];
  undefined1 auVar188 [16];
  undefined1 auVar163 [16];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  float fVar195;
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  float fVar204;
  float fVar205;
  float fVar207;
  float fVar209;
  float fVar210;
  undefined1 auVar198 [32];
  undefined1 auVar208 [16];
  float fVar206;
  float fVar211;
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [32];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  undefined1 auVar217 [32];
  undefined1 auVar218 [32];
  undefined1 auVar219 [32];
  undefined1 auVar220 [32];
  undefined1 auVar221 [32];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar225 [32];
  undefined1 auVar226 [32];
  undefined1 auVar227 [32];
  undefined1 auVar228 [32];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar233 [32];
  undefined1 auVar234 [32];
  undefined1 auVar235 [32];
  undefined1 auVar236 [32];
  undefined1 auVar237 [32];
  undefined1 auVar238 [64];
  float fVar239;
  undefined1 auVar240 [16];
  float fVar244;
  float fVar245;
  float fVar246;
  float fVar247;
  float fVar248;
  float fVar249;
  float fVar250;
  undefined1 auVar241 [32];
  undefined1 auVar242 [32];
  undefined1 auVar243 [32];
  undefined1 auVar251 [32];
  undefined1 auVar252 [32];
  undefined1 auVar253 [32];
  undefined1 auVar254 [32];
  undefined1 auVar255 [32];
  undefined1 auVar256 [32];
  undefined1 auVar257 [32];
  undefined1 auVar258 [32];
  undefined1 auVar259 [32];
  undefined1 auVar260 [32];
  undefined1 auVar261 [32];
  undefined1 auVar262 [32];
  undefined1 auVar263 [32];
  undefined1 auVar264 [32];
  undefined1 auVar265 [32];
  undefined1 auVar266 [32];
  undefined1 auVar267 [32];
  undefined1 auVar268 [32];
  float fVar269;
  float fVar283;
  float fVar284;
  float fVar285;
  float fVar286;
  float fVar287;
  float fVar288;
  undefined1 auVar270 [32];
  undefined1 auVar271 [32];
  undefined1 auVar272 [32];
  float fVar289;
  undefined1 auVar273 [32];
  undefined1 auVar274 [32];
  undefined1 auVar275 [32];
  undefined1 auVar276 [32];
  undefined1 auVar277 [32];
  undefined1 auVar278 [32];
  undefined1 auVar279 [32];
  undefined1 auVar280 [32];
  undefined1 auVar281 [32];
  undefined1 auVar290 [32];
  undefined1 auVar291 [32];
  undefined1 auVar292 [32];
  undefined1 auVar293 [32];
  undefined1 auVar294 [32];
  undefined1 auVar295 [32];
  undefined1 auVar296 [32];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [32];
  undefined1 auVar301 [32];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [64];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [32];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  ulonglong local_810;
  undefined1 local_7c0 [32];
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
  uint local_540;
  uint uStack_53c;
  uint uStack_538;
  uint uStack_534;
  uint uStack_530;
  uint uStack_52c;
  uint uStack_528;
  uint uStack_524;
  uint local_520;
  uint uStack_51c;
  uint uStack_518;
  uint uStack_514;
  uint uStack_510;
  uint uStack_50c;
  uint uStack_508;
  uint uStack_504;
  undefined1 local_4e0 [32];
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
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float local_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
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
  undefined1 local_3a0 [8];
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  undefined1 local_380 [8];
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
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
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  ulonglong local_240 [3];
  undefined8 uStack_228;
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 auVar57 [32];
  undefined1 auVar85 [32];
  undefined1 auVar199 [32];
  undefined1 auVar224 [32];
  undefined1 auVar232 [32];
  undefined1 auVar282 [64];
  undefined1 auVar302 [32];
  undefined1 auVar303 [32];
  undefined1 auVar313 [32];
  undefined1 auVar314 [32];
  
  lVar39 = (longlong)(int)param_8;
  uVar28 = *(int *)(&DAT_151c6caa0 + lVar39 * 4) * *(int *)(&DAT_151c6ca80 + lVar39 * 4);
  uVar46 = 0;
  uVar27 = 0x18;
  if (lVar39 != 3) {
    uVar27 = 0;
  }
  uVar32 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar32 = param_9;
  }
  uVar36 = (ulonglong)param_8;
  if (0 < (int)(uVar32 & 0xfffffff8)) {
    auVar105 = vpshufd_avx(ZEXT416(uVar27),0);
    auVar212 = vpblendw_avx(auVar105,(undefined1  [16])0x0,0xcc);
    auVar105 = vpmovzxdq_avx(auVar105);
    auVar21 = vshufps_avx(ZEXT416(uVar28),ZEXT416(uVar28),0);
    auVar101._8_8_ = 0;
    auVar101._0_8_ = (longlong)param_4 + 3;
    auVar101 = vpshufd_avx(auVar101,0x44);
    auVar212 = vpaddq_avx(auVar101,auVar212);
    auVar105 = vpaddq_avx(auVar101,auVar105);
    uVar46 = 0;
    auVar101 = vpshufd_avx(ZEXT416((0.0 < param_6) - 1),0);
    auVar56._16_16_ = auVar101;
    auVar56._0_16_ = auVar101;
    fVar239 = (float)(param_5 + -1) * param_6;
    uVar26 = (int)fVar239;
    if ((int)fVar239 < 1) {
      uVar26 = 0;
    }
    auVar101 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
    if ((int)(param_5 - 2U) < (int)uVar26) {
      uVar26 = param_5 - 2U;
    }
    auVar163 = vpshufd_avx(ZEXT416(uVar26),0);
    auVar188 = vshufps_avx(ZEXT416((uint)fVar239),ZEXT416((uint)fVar239),0);
    auVar64._16_16_ = auVar188;
    auVar64._0_16_ = auVar188;
    auVar306 = ZEXT1664(CONCAT412(__real_00000001,
                                  CONCAT48(__real_00000001,CONCAT44(__real_00000001,__real_00000001)
                                          )));
    do {
      uVar34 = (ulonglong)(uVar46 * 8);
      auVar188 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar34);
      auVar230 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar34);
      auVar231 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar34);
      auVar54 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar34),auVar188,0xdd);
      auVar102 = vshufps_avx(auVar230,auVar231,0xdd);
      auVar102 = vpslld_avx(auVar102,4);
      auVar54 = vpslld_avx(auVar54,4);
      uVar26 = *(uint *)((longlong)param_3 + (longlong)auVar54._0_4_ + 8);
      uVar158 = *(uint *)((longlong)param_3 + (longlong)auVar102._0_4_ + 8);
      uVar29 = *(uint *)((longlong)param_3 + (longlong)auVar54._0_4_ + 0xc);
      auVar160 = ZEXT416(uVar29);
      uVar140 = *(uint *)((longlong)param_3 + (longlong)auVar102._0_4_ + 0xc);
      auVar55 = auVar306._0_16_;
      auVar54 = vpcmpeqd_avx(ZEXT416(uVar140),auVar55);
      auVar102 = vpcmpeqd_avx(auVar55,auVar160);
      auVar54 = vpor_avx(auVar54,auVar102);
      auVar102 = ZEXT416(uVar140);
      puVar41 = param_3;
      if ((((SUB161(auVar54 >> 0x1f,0) & 1) != 0 || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x5f,0) & 1) != 0) || auVar54[0xf] < '\0') {
        auVar162 = vpcmpeqd_avx(auVar102,auVar55);
        auVar297 = vpcmpeqd_avx(auVar160,auVar55);
        auVar251._16_16_ = auVar162;
        auVar251._0_16_ = auVar297;
        uVar180 = auVar297._0_4_;
        uVar182 = auVar162._0_4_;
        lVar39 = (longlong)(int)(uVar180 & uVar26);
        lVar33 = (longlong)(int)(uVar182 & uVar158);
        auVar54 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                 (ulonglong)(uVar182 & _UNK_150b50d50) + lVar33)),
                                ZEXT416(*(uint *)((ulonglong)(auVar162._4_4_ & _UNK_150b50d54) +
                                                 (longlong)param_4)),0x10);
        auVar55 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                 (ulonglong)(uVar182 & _UNK_150b50d70) + lVar33)),
                                ZEXT416(*(uint *)((ulonglong)(auVar162._4_4_ & _UNK_150b50d74) +
                                                 (longlong)param_4)),0x10);
        auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar162._8_4_ & _UNK_150b50d58) +
                                                         (longlong)param_4)),0x20);
        auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar162._8_4_ & _UNK_150b50d78) +
                                                         (longlong)param_4)),0x20);
        auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar162._12_4_ & _UNK_150b50d5c) +
                                                         (longlong)param_4)),0x30);
        auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar162._12_4_ & _UNK_150b50d7c) +
                                                         (longlong)param_4)),0x30);
        auVar162 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                  (ulonglong)
                                                  (uVar180 &
                                                  ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                                  ) + lVar39)),
                                 ZEXT416(*(uint *)((ulonglong)(auVar297._4_4_ & _UNK_150b50d44) +
                                                  (longlong)param_4)),0x10);
        auVar70 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                 (ulonglong)
                                                 (uVar180 &
                                                 ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                                 ) + lVar39)),
                                ZEXT416(*(uint *)((ulonglong)(auVar297._4_4_ & _UNK_150b50d64) +
                                                 (longlong)param_4)),0x10);
        auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar297._8_4_ & _UNK_150b50d48) +
                                                           (longlong)param_4)),0x20);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar297._8_4_ & _UNK_150b50d68) +
                                                         (longlong)param_4)),0x20);
        auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar297._12_4_ & _UNK_150b50d4c) +
                                                           (longlong)param_4)),0x30);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar297._12_4_ & _UNK_150b50d6c) +
                                                         (longlong)param_4)),0x30);
        auVar297 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar33)),ZEXT416(*param_4),
                                 0x10);
        auVar297 = vinsertps_avx(auVar297,ZEXT416(*param_4),0x20);
        auVar297 = vinsertps_avx(auVar297,ZEXT416(*param_4),0x30);
        auVar196 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar39)),ZEXT416(*param_4),
                                 0x10);
        auVar196 = vinsertps_avx(auVar196,ZEXT416(*param_4),0x20);
        auVar196 = vinsertps_avx(auVar196,ZEXT416(*param_4),0x30);
        auVar270._16_16_ = auVar297;
        auVar270._0_16_ = auVar196;
        auVar306 = ZEXT1664(CONCAT412(__real_00000001,
                                      CONCAT48(__real_00000001,
                                               CONCAT44(__real_00000001,__real_00000001))));
        auVar164._16_16_ = auVar54;
        auVar164._0_16_ = auVar162;
        auVar257._16_16_ = auVar55;
        auVar257._0_16_ = auVar70;
        auVar290._0_4_ = auVar196._0_4_ * auVar196._0_4_;
        auVar290._4_4_ = auVar196._4_4_ * auVar196._4_4_;
        auVar290._8_4_ = auVar196._8_4_ * auVar196._8_4_;
        auVar290._12_4_ = auVar196._12_4_ * auVar196._12_4_;
        auVar290._16_4_ = auVar297._0_4_ * auVar297._0_4_;
        auVar290._20_4_ = auVar297._4_4_ * auVar297._4_4_;
        auVar290._24_4_ = auVar297._8_4_ * auVar297._8_4_;
        auVar290._28_4_ = auVar297._12_4_ * auVar297._12_4_;
        auVar214._4_4_ = __real_3f800000;
        auVar214._0_4_ = __real_3f800000;
        auVar214._8_4_ = __real_3f800000;
        auVar214._12_4_ = __real_3f800000;
        auVar214._16_4_ = __real_3f800000;
        auVar214._20_4_ = __real_3f800000;
        auVar214._24_4_ = __real_3f800000;
        auVar214._28_4_ = __real_3f800000;
        auVar214 = vsubps_avx(auVar214,auVar290);
        auVar300._0_4_ = auVar162._0_4_ * auVar162._0_4_;
        auVar300._4_4_ = auVar162._4_4_ * auVar162._4_4_;
        auVar300._8_4_ = auVar162._8_4_ * auVar162._8_4_;
        auVar300._12_4_ = auVar162._12_4_ * auVar162._12_4_;
        auVar300._16_4_ = auVar54._0_4_ * auVar54._0_4_;
        auVar300._20_4_ = auVar54._4_4_ * auVar54._4_4_;
        auVar300._24_4_ = auVar54._8_4_ * auVar54._8_4_;
        auVar300._28_4_ = auVar54._12_4_ * auVar54._12_4_;
        auVar214 = vsubps_avx(auVar214,auVar300);
        auVar301._0_4_ = auVar70._0_4_ * auVar70._0_4_;
        auVar301._4_4_ = auVar70._4_4_ * auVar70._4_4_;
        auVar301._8_4_ = auVar70._8_4_ * auVar70._8_4_;
        auVar301._12_4_ = auVar70._12_4_ * auVar70._12_4_;
        auVar301._16_4_ = auVar55._0_4_ * auVar55._0_4_;
        auVar301._20_4_ = auVar55._4_4_ * auVar55._4_4_;
        auVar301._24_4_ = auVar55._8_4_ * auVar55._8_4_;
        auVar301._28_4_ = auVar55._12_4_ * auVar55._12_4_;
        auVar290 = vsubps_avx(auVar214,auVar301);
        auVar214 = vcmpps_avx(ZEXT432(0) << 0x20,auVar290,1);
        auVar290 = vsqrtps_avx(auVar290);
        auVar291._0_4_ = auVar214._0_4_ & auVar290._0_4_;
        auVar291._4_4_ = auVar214._4_4_ & auVar290._4_4_;
        auVar291._8_4_ = auVar214._8_4_ & auVar290._8_4_;
        auVar291._12_4_ = auVar214._12_4_ & auVar290._12_4_;
        auVar291._16_4_ = auVar214._16_4_ & auVar290._16_4_;
        auVar291._20_4_ = auVar214._20_4_ & auVar290._20_4_;
        auVar291._24_4_ = auVar214._24_4_ & auVar290._24_4_;
        auVar291._28_4_ = auVar214._28_4_ & auVar290._28_4_;
        _local_3e0 = vmaskmovps_avx(auVar251,auVar270);
        _local_3c0 = vmaskmovps_avx(auVar251,auVar164);
        _local_3a0 = vmaskmovps_avx(auVar251,auVar257);
        _local_380 = vmaskmovps_avx(auVar251,auVar291);
        puVar41 = param_4;
      }
      auVar215._16_16_ = auVar231;
      auVar215._0_16_ = auVar188;
      auVar198._16_16_ = auVar230;
      auVar198._0_16_ = *(undefined1 (*) [16])(param_2 + uVar34);
      auVar230 = auVar306._0_16_;
      auVar188 = vpor_avx(auVar160 ^ auVar230,auVar102 ^ auVar230);
      if (auVar188 != (undefined1  [16])0x0) {
        auVar231 = vpcmpeqd_avx(auVar102,auVar230);
        auVar54._4_4_ = __real_00000002;
        auVar54._0_4_ = __real_00000002;
        auVar54._8_4_ = __real_00000002;
        auVar54._12_4_ = __real_00000002;
        auVar188 = vpcmpgtd_avx(auVar54,auVar102);
        auVar54 = vpcmpgtd_avx(auVar54,auVar160);
        auVar74._16_16_ = auVar188;
        auVar74._0_16_ = auVar54;
        auVar74 = auVar74 | auVar56;
        auVar188 = auVar74._0_16_;
        auVar54 = vpcmpeqd_avx(auVar230,auVar160);
        auVar165._16_16_ = auVar231;
        auVar165._0_16_ = auVar54;
        auVar214 = auVar74 & ~auVar165;
        if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 || (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0') ||
              (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0') ||
            (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
          auVar166._0_4_ = ~auVar54._0_4_ & auVar74._0_4_;
          auVar166._4_4_ = ~auVar54._4_4_ & auVar74._4_4_;
          auVar166._8_4_ = ~auVar54._8_4_ & auVar74._8_4_;
          auVar166._12_4_ = ~auVar54._12_4_ & auVar74._12_4_;
          auVar166._16_4_ = ~auVar231._0_4_ & auVar74._16_4_;
          auVar166._20_4_ = ~auVar231._4_4_ & auVar74._20_4_;
          auVar166._24_4_ = ~auVar231._8_4_ & auVar74._24_4_;
          auVar166._28_4_ = ~auVar231._12_4_ & auVar74._28_4_;
          local_7c0 = vblendvps_avx(local_7c0,ZEXT1632(ZEXT816(0)),auVar166);
          local_4e0 = vblendvps_avx(local_4e0,ZEXT1632(ZEXT816(0)),auVar166);
        }
        auVar297 = ZEXT816(0);
        auVar290 = ZEXT1632(auVar297);
        auVar54 = vpmovsxdq_avx(ZEXT416(uVar158));
        auVar55 = vpshufd_avx(ZEXT416(uVar158),0xee);
        auVar55 = vpmovsxdq_avx(auVar55);
        auVar162 = vpmovsxdq_avx(ZEXT416(uVar26));
        auVar70 = vpshufd_avx(ZEXT416(uVar26),0xee);
        auVar70 = vpmovsxdq_avx(auVar70);
        auVar214 = vcmpps_avx(ZEXT1632(auVar297),ZEXT1632(auVar297),0xf);
        uVar158 = auVar74._0_4_ ^ auVar214._0_4_;
        uVar180 = auVar74._4_4_ ^ auVar214._4_4_;
        uVar182 = auVar74._8_4_ ^ auVar214._8_4_;
        uVar184 = auVar74._12_4_ ^ auVar214._12_4_;
        uVar186 = auVar74._16_4_ ^ auVar214._16_4_;
        uVar189 = auVar74._20_4_ ^ auVar214._20_4_;
        uVar191 = auVar74._24_4_ ^ auVar214._24_4_;
        uVar193 = auVar74._28_4_ ^ auVar214._28_4_;
        auVar230 = vpcmpeqd_avx(auVar230,auVar160);
        auVar252._0_4_ = ~auVar230._0_4_ & uVar158;
        auVar252._4_4_ = ~auVar230._4_4_ & uVar180;
        auVar252._8_4_ = ~auVar230._8_4_ & uVar182;
        auVar252._12_4_ = ~auVar230._12_4_ & uVar184;
        auVar252._16_4_ = ~auVar231._0_4_ & uVar186;
        auVar252._20_4_ = ~auVar231._4_4_ & uVar189;
        auVar252._24_4_ = ~auVar231._8_4_ & uVar191;
        auVar252._28_4_ = ~auVar231._12_4_ & uVar193;
        uVar26 = vmovmskps_avx(auVar252);
        auVar214 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        if (uVar26 != 0) {
          auVar297 = vpcmpeqd_avx(auVar188,auVar188);
          auVar230._0_4_ = uVar140 + auVar297._0_4_;
          auVar230._4_4_ = auVar297._4_4_;
          auVar230._8_4_ = auVar297._8_4_;
          auVar230._12_4_ = auVar297._12_4_;
          auVar188._0_4_ = uVar29 + auVar297._0_4_;
          auVar188._4_4_ = auVar297._4_4_;
          auVar188._8_4_ = auVar297._8_4_;
          auVar188._12_4_ = auVar297._12_4_;
          auVar216._16_16_ = auVar230;
          auVar216._0_16_ = auVar188;
          if (__real_3f800000 <= param_6) {
            local_7c0 = vblendvps_avx(local_7c0,auVar216,auVar252);
            local_4e0 = vblendvps_avx(local_4e0,auVar216,auVar252);
          }
          else {
            auVar298 = vpmulld_avx(auVar160,auVar21);
            auVar196 = vpmulld_avx(auVar102,auVar21);
            auVar297 = vpmovsxdq_avx(auVar196);
            auVar196 = vpshufd_avx(auVar196,0xee);
            auVar196 = vpmovsxdq_avx(auVar196);
            auVar208 = vpmovsxdq_avx(auVar298);
            auVar298 = vpshufd_avx(auVar298,0xee);
            auVar298 = vpmovsxdq_avx(auVar298);
            auVar54 = vpaddq_avx(auVar105,auVar54);
            auVar54 = vpaddq_avx(auVar54,auVar297);
            auVar55 = vpaddq_avx(auVar212,auVar55);
            auVar55 = vpaddq_avx(auVar55,auVar196);
            auVar162 = vpaddq_avx(auVar105,auVar162);
            auVar297 = vpaddq_avx(auVar162,auVar208);
            auVar70 = vpaddq_avx(auVar70,auVar212);
            auVar70 = vpaddq_avx(auVar70,auVar298);
            auVar196._0_4_ = auVar54._0_4_ & (uint)__real_fffffffffffffffc;
            auVar196._4_4_ = auVar54._4_4_ & __real_fffffffffffffffc._4_4_;
            auVar196._8_4_ = auVar54._8_4_ & (uint)__real_fffffffffffffffc;
            auVar196._12_4_ = auVar54._12_4_ & __real_fffffffffffffffc._4_4_;
            auVar199._16_4_ = auVar55._0_4_ & (uint)__real_fffffffffffffffc;
            auVar199._0_16_ = auVar196;
            auVar199._20_4_ = auVar55._4_4_ & __real_fffffffffffffffc._4_4_;
            auVar199._24_4_ = auVar55._8_4_ & (uint)__real_fffffffffffffffc;
            auVar199._28_4_ = auVar55._12_4_ & __real_fffffffffffffffc._4_4_;
            auVar298._0_4_ = auVar297._0_4_ & (uint)__real_fffffffffffffffc;
            auVar298._4_4_ = auVar297._4_4_ & __real_fffffffffffffffc._4_4_;
            auVar298._8_4_ = auVar297._8_4_ & (uint)__real_fffffffffffffffc;
            auVar298._12_4_ = auVar297._12_4_ & __real_fffffffffffffffc._4_4_;
            auVar302._16_4_ = auVar70._0_4_ & (uint)__real_fffffffffffffffc;
            auVar302._0_16_ = auVar298;
            auVar302._20_4_ = auVar70._4_4_ & __real_fffffffffffffffc._4_4_;
            auVar302._24_4_ = auVar70._8_4_ & (uint)__real_fffffffffffffffc;
            auVar302._28_4_ = auVar70._12_4_ & __real_fffffffffffffffc._4_4_;
            auVar214 = vcvtdq2ps_avx(auVar216);
            local_2a0 = auVar101._0_4_;
            fStack_29c = auVar101._4_4_;
            fStack_298 = auVar101._8_4_;
            fStack_294 = auVar101._12_4_;
            auVar55._0_4_ = (int)(auVar214._0_4_ * local_2a0);
            auVar55._4_4_ = (int)(auVar214._4_4_ * fStack_29c);
            auVar55._8_4_ = (int)(auVar214._8_4_ * fStack_298);
            auVar55._12_4_ = (int)(auVar214._12_4_ * fStack_294);
            auVar57._16_4_ = (int)(auVar214._16_4_ * local_2a0);
            auVar57._0_16_ = auVar55;
            auVar57._20_4_ = (int)(auVar214._20_4_ * fStack_29c);
            auVar57._24_4_ = (int)(auVar214._24_4_ * fStack_298);
            auVar57._28_4_ = (int)(auVar214._28_4_ * fStack_294);
            auVar54 = vpmaxsd_avx(auVar57._16_16_,ZEXT816(0) << 0x20);
            auVar55 = vpmaxsd_avx(auVar55,ZEXT816(0) << 0x20);
            auVar306 = ZEXT1664(auVar230);
            auVar70 = vpminsd_avx(auVar54,auVar230);
            auVar297 = vpminsd_avx(auVar55,auVar188);
            auVar271._16_16_ = auVar70;
            auVar271._0_16_ = auVar297;
            auVar282 = ZEXT3264(auVar271);
            auVar208 = auVar199._16_16_;
            auVar304 = auVar302._16_16_;
            cVar49 = (char)uVar26;
            if (param_5 < 0x100) {
              auVar71 = vpmovsxdq_avx(auVar297);
              auVar310 = vpshufd_avx(auVar297,0xee);
              auVar310 = vpmovsxdq_avx(auVar310);
              auVar310 = vpaddq_avx(auVar304,auVar310);
              auVar71 = vpaddq_avx(auVar298,auVar71);
              auVar312 = vpcmpeqd_avx(auVar231,auVar231);
              if ((uVar26 & 1) != 0) {
                auVar162 = ZEXT116(*auVar71._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar71 = vpinsrb_avx(auVar162,(uint)*auVar71._8_8_,1);
                auVar162 = vpblendw_avx(auVar71,auVar162,0xe);
              }
              if ((uVar26 & 4) != 0) {
                auVar71 = vpmovzxwd_avx(auVar162);
                auVar71 = vpinsrb_avx(auVar71,(uint)*auVar310._0_8_,2);
                auVar71 = vpinsrb_avx(auVar71,(uint)auVar162[3],3);
                auVar162 = vpblendw_avx(auVar71,auVar162,0xc);
              }
              if ((uVar26 & 8) != 0) {
                auVar71 = vpmovzxwd_avx(auVar162);
                auVar71 = vpinsrb_avx(auVar71,(uint)auVar162[2],2);
                auVar310 = vpinsrb_avx(auVar71,(uint)*auVar310._8_8_,3);
                auVar162 = vpblendw_avx(auVar310,auVar162,0xc);
              }
              auVar71 = vpmovsxdq_avx(auVar70);
              auVar310 = vpshufd_avx(auVar70,0xee);
              auVar310 = vpmovsxdq_avx(auVar310);
              auVar310 = vpaddq_avx(auVar310,auVar208);
              auVar71 = vpaddq_avx(auVar196,auVar71);
              if ((uVar26 & 0x10) != 0) {
                auVar305 = vpshufb_avx(auVar162,___xmm_80800706808005048080030203020100);
                auVar305 = vpinsrb_avx(auVar305,(uint)*auVar71._0_8_,4);
                auVar305 = vpinsrb_avx(auVar305,(uint)auVar162[5],5);
                auVar162 = vpblendw_avx(auVar305,auVar162,8);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar305 = vpshufb_avx(auVar162,___xmm_80800706808005048080030403020100);
                auVar71 = vpinsrb_avx(auVar305,(uint)*auVar71._8_8_,5);
                auVar162 = vpblendw_avx(auVar71,auVar162,8);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar71 = vpshufb_avx(auVar162,___xmm_80800706808005048080050403020100);
                auVar71 = vpinsrb_avx(auVar71,(uint)*auVar310._0_8_,6);
                auVar162 = vpinsrb_avx(auVar71,(uint)auVar162[7],7);
              }
              if (cVar49 < '\0') {
                auVar162 = vpshufb_avx(auVar162,___xmm_80800706808005048006050403020100);
                auVar162 = vpinsrb_avx(auVar162,(uint)*auVar310._8_8_,7);
              }
              auVar71 = vpmovzxbd_avx(auVar162);
              auVar162 = vpshufd_avx(auVar162,0x55);
              auVar305 = vpmovzxbd_avx(auVar162);
              auVar162 = vpcmpgtd_avx(auVar305,auVar163);
              auVar20 = auVar312 ^ auVar162;
              auVar310 = vpcmpgtd_avx(auVar71,auVar163);
              auVar229 = auVar312 ^ auVar310;
              auVar238 = ZEXT1664(auVar229);
              auVar76._16_16_ = auVar20;
              auVar76._0_16_ = auVar229;
              auVar109._16_16_ = auVar162;
              auVar109._0_16_ = auVar310;
              auVar290 = auVar252 & ~auVar109;
              local_540 = auVar229._0_4_;
              uStack_53c = auVar229._4_4_;
              uStack_538 = auVar229._8_4_;
              uStack_534 = auVar229._12_4_;
              uStack_530 = auVar20._0_4_;
              uStack_52c = auVar20._4_4_;
              uStack_528 = auVar20._8_4_;
              uStack_524 = auVar20._12_4_;
              auVar214 = auVar271;
              if ((((((((SUB321(auVar290 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar290 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar290 >> 0x5f,0) & 1) != 0) || SUB321(auVar290 >> 0x7f,0) != '\0')
                    || (SUB321(auVar290 >> 0x9f,0) & 1) != 0) || SUB321(auVar290 >> 0xbf,0) != '\0')
                  || (SUB321(auVar290 >> 0xdf,0) & 1) != 0) || auVar290[0x1f] < '\0') {
                auVar162 = vpcmpgtd_avx(auVar305,auVar163);
                auVar310 = vpcmpgtd_avx(auVar71,auVar163);
                auVar110._16_16_ = auVar162;
                auVar110._0_16_ = auVar310;
                auVar214 = vblendvps_avx(auVar216,auVar271,auVar110);
                auVar54 = vpcmpgtd_avx(auVar230,auVar54);
                auVar55 = vpcmpgtd_avx(auVar188,auVar55);
                uVar29 = auVar55._0_4_ & local_540;
                uVar140 = auVar55._4_4_ & uStack_53c;
                uVar143 = auVar55._8_4_ & uStack_538;
                uVar146 = auVar55._12_4_ & uStack_534;
                uVar149 = auVar54._0_4_ & uStack_530;
                uVar152 = auVar54._4_4_ & uStack_52c;
                uVar155 = auVar54._8_4_ & uStack_528;
                uVar98 = auVar54._12_4_ & uStack_524;
                auVar111._0_4_ = uVar29 & auVar252._0_4_;
                auVar111._4_4_ = uVar140 & auVar252._4_4_;
                auVar111._8_4_ = uVar143 & auVar252._8_4_;
                auVar111._12_4_ = uVar146 & auVar252._12_4_;
                auVar111._16_4_ = uVar149 & auVar252._16_4_;
                auVar111._20_4_ = uVar152 & auVar252._20_4_;
                auVar111._24_4_ = uVar155 & auVar252._24_4_;
                auVar111._28_4_ = uVar98 & auVar252._28_4_;
                iVar43 = vmovmskps_avx(auVar111);
                if (iVar43 != 0) {
                  auVar238 = ZEXT3264(auVar271);
                  do {
                    auVar162 = vpcmpeqd_avx(auVar188,auVar188);
                    auVar310 = vpsubd_avx(auVar238._0_16_,auVar312);
                    auVar55 = vpmovsxdq_avx(auVar310);
                    auVar54 = vpshufd_avx(auVar310,0xee);
                    auVar54 = vpmovsxdq_avx(auVar54);
                    auVar54 = vpaddq_avx(auVar304,auVar54);
                    auVar55 = vpaddq_avx(auVar298,auVar55);
                    uVar31 = vmovmskps_avx(auVar111);
                    if ((uVar31 & 1) != 0) {
                      auVar312 = ZEXT116(*auVar55._0_8_);
                    }
                    if ((uVar31 & 2) != 0) {
                      auVar55 = vpinsrb_avx(auVar312,(uint)*auVar55._8_8_,1);
                      auVar312 = vpblendw_avx(auVar55,auVar312,0xe);
                    }
                    if ((uVar31 & 4) != 0) {
                      auVar55 = vpmovzxwd_avx(auVar312);
                      auVar55 = vpinsrb_avx(auVar55,(uint)*auVar54._0_8_,2);
                      auVar55 = vpinsrb_avx(auVar55,(uint)auVar312[3],3);
                      auVar312 = vpblendw_avx(auVar55,auVar312,0xc);
                    }
                    if ((uVar31 & 8) != 0) {
                      auVar55 = vpmovzxwd_avx(auVar312);
                      auVar55 = vpinsrb_avx(auVar55,(uint)auVar312[2],2);
                      auVar54 = vpinsrb_avx(auVar55,(uint)*auVar54._8_8_,3);
                      auVar312 = vpblendw_avx(auVar54,auVar312,0xc);
                    }
                    auVar162 = vpsubd_avx(auVar238._16_16_,auVar162);
                    auVar55 = vpmovsxdq_avx(auVar162);
                    auVar54 = vpshufd_avx(auVar162,0xee);
                    auVar54 = vpmovsxdq_avx(auVar54);
                    auVar54 = vpaddq_avx(auVar54,auVar208);
                    auVar55 = vpaddq_avx(auVar196,auVar55);
                    if ((uVar31 & 0x10) != 0) {
                      auVar20 = vpshufb_avx(auVar312,___xmm_80800706808005048080030203020100);
                      auVar20 = vpinsrb_avx(auVar20,(uint)*auVar55._0_8_,4);
                      auVar20 = vpinsrb_avx(auVar20,(uint)auVar312[5],5);
                      auVar312 = vpblendw_avx(auVar20,auVar312,8);
                    }
                    if ((uVar31 & 0x20) != 0) {
                      auVar20 = vpshufb_avx(auVar312,___xmm_80800706808005048080030403020100);
                      auVar55 = vpinsrb_avx(auVar20,(uint)*auVar55._8_8_,5);
                      auVar312 = vpblendw_avx(auVar55,auVar312,8);
                    }
                    if ((uVar31 & 0x40) != 0) {
                      auVar55 = vpshufb_avx(auVar312,___xmm_80800706808005048080050403020100);
                      auVar55 = vpinsrb_avx(auVar55,(uint)*auVar54._0_8_,6);
                      auVar312 = vpinsrb_avx(auVar55,(uint)auVar312[7],7);
                    }
                    if ((char)uVar31 < '\0') {
                      auVar55 = vpshufb_avx(auVar312,___xmm_80800706808005048006050403020100);
                      auVar312 = vpinsrb_avx(auVar55,(uint)*auVar54._8_8_,7);
                    }
                    auVar55 = vpmovzxbd_avx(auVar312);
                    auVar54 = vpshufd_avx(auVar312,0x55);
                    auVar54 = vpmovzxbd_avx(auVar54);
                    auVar54 = vpcmpgtd_avx(auVar54,auVar163);
                    auVar55 = vpcmpgtd_avx(auVar55,auVar163);
                    auVar312._0_4_ = uVar29 & auVar55._0_4_;
                    auVar312._4_4_ = uVar140 & auVar55._4_4_;
                    auVar312._8_4_ = uVar143 & auVar55._8_4_;
                    auVar312._12_4_ = uVar146 & auVar55._12_4_;
                    auVar314._16_4_ = uVar149 & auVar54._0_4_;
                    auVar314._0_16_ = auVar312;
                    auVar314._20_4_ = uVar152 & auVar54._4_4_;
                    auVar314._24_4_ = uVar155 & auVar54._8_4_;
                    auVar314._28_4_ = uVar98 & auVar54._12_4_;
                    uVar31 = 0;
                    uVar141 = 0;
                    uVar144 = 0;
                    uVar147 = 0;
                    uVar150 = 0;
                    uVar153 = 0;
                    uVar156 = 0;
                    uVar99 = 0;
                    auVar218._0_4_ = auVar312._0_4_ & auVar252._0_4_;
                    auVar218._4_4_ = auVar312._4_4_ & auVar252._4_4_;
                    auVar218._8_4_ = auVar312._8_4_ & auVar252._8_4_;
                    auVar218._12_4_ = auVar312._12_4_ & auVar252._12_4_;
                    auVar218._16_4_ = auVar314._16_4_ & auVar252._16_4_;
                    auVar218._20_4_ = auVar314._20_4_ & auVar252._20_4_;
                    auVar218._24_4_ = auVar314._24_4_ & auVar252._24_4_;
                    auVar218._28_4_ = auVar314._28_4_ & auVar252._28_4_;
                    uVar30 = vmovmskps_avx(auVar218);
                    if ((char)iVar43 != (char)uVar30) {
                      uVar99 = auVar312._0_4_ ^ uVar29;
                      uVar31 = auVar312._4_4_ ^ uVar140;
                      uVar141 = auVar312._8_4_ ^ uVar143;
                      uVar144 = auVar312._12_4_ ^ uVar146;
                      uVar147 = auVar314._16_4_ ^ uVar149;
                      uVar150 = auVar314._20_4_ ^ uVar152;
                      uVar153 = auVar314._24_4_ ^ uVar155;
                      uVar156 = auVar314._28_4_ ^ uVar98;
                    }
                    auVar214 = vblendvps_avx(auVar214,auVar238._0_32_,auVar314);
                    auVar238 = ZEXT3264(CONCAT1616(auVar162,auVar310));
                    auVar54 = vpcmpgtd_avx(auVar230,auVar162);
                    auVar55 = vpcmpgtd_avx(auVar188,auVar310);
                    uVar29 = auVar55._0_4_ & uVar99;
                    uVar140 = auVar55._4_4_ & uVar31;
                    uVar143 = auVar55._8_4_ & uVar141;
                    uVar146 = auVar55._12_4_ & uVar144;
                    uVar149 = auVar54._0_4_ & uVar147;
                    uVar152 = auVar54._4_4_ & uVar150;
                    uVar155 = auVar54._8_4_ & uVar153;
                    uVar98 = auVar54._12_4_ & uVar156;
                    auVar111._0_4_ = uVar29 & auVar252._0_4_;
                    auVar111._4_4_ = uVar140 & auVar252._4_4_;
                    auVar111._8_4_ = uVar143 & auVar252._8_4_;
                    auVar111._12_4_ = uVar146 & auVar252._12_4_;
                    auVar111._16_4_ = uVar149 & auVar252._16_4_;
                    auVar111._20_4_ = uVar152 & auVar252._20_4_;
                    auVar111._24_4_ = uVar155 & auVar252._24_4_;
                    auVar111._28_4_ = uVar98 & auVar252._28_4_;
                    iVar43 = vmovmskps_avx(auVar111);
                    auVar312 = vpcmpeqd_avx(auVar312,auVar312);
                  } while (iVar43 != 0);
                }
              }
              auVar230 = auVar238._0_16_;
              auVar188 = vpcmpgtd_avx(auVar305,auVar163);
              auVar54 = vpcmpgtd_avx(auVar71,auVar163);
              auVar114._16_16_ = auVar188;
              auVar114._0_16_ = auVar54;
              auVar114 = auVar114 & auVar252;
              if ((((((((SUB321(auVar114 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar114 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar114 >> 0x5f,0) & 1) != 0) || SUB321(auVar114 >> 0x7f,0) != '\0')
                    || (SUB321(auVar114 >> 0x9f,0) & 1) != 0) || SUB321(auVar114 >> 0xbf,0) != '\0')
                  || (SUB321(auVar114 >> 0xdf,0) & 1) != 0) || auVar114[0x1f] < '\0') {
                auVar214 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar214,auVar76);
                auVar162._4_4_ = __real_00000001;
                auVar162._0_4_ = __real_00000001;
                auVar162._8_4_ = __real_00000001;
                auVar162._12_4_ = __real_00000001;
                auVar188 = vpcmpgtd_avx(auVar70,auVar162);
                auVar230 = vpcmpgtd_avx(auVar297,auVar162);
                uVar29 = ~local_540 & auVar230._0_4_;
                uVar140 = ~uStack_53c & auVar230._4_4_;
                uVar143 = ~uStack_538 & auVar230._8_4_;
                uVar146 = ~uStack_534 & auVar230._12_4_;
                uVar149 = ~uStack_530 & auVar188._0_4_;
                uVar152 = ~uStack_52c & auVar188._4_4_;
                uVar155 = ~uStack_528 & auVar188._8_4_;
                uVar98 = ~uStack_524 & auVar188._12_4_;
                auVar115._0_4_ = auVar252._0_4_ & uVar29;
                auVar115._4_4_ = auVar252._4_4_ & uVar140;
                auVar115._8_4_ = auVar252._8_4_ & uVar143;
                auVar115._12_4_ = auVar252._12_4_ & uVar146;
                auVar115._16_4_ = auVar252._16_4_ & uVar149;
                auVar115._20_4_ = auVar252._20_4_ & uVar152;
                auVar115._24_4_ = auVar252._24_4_ & uVar155;
                auVar115._28_4_ = auVar252._28_4_ & uVar98;
                iVar43 = vmovmskps_avx(auVar115);
                while( true ) {
                  auVar230 = auVar238._0_16_;
                  auVar188 = auVar306._0_16_;
                  auVar71 = auVar70;
                  if (iVar43 == 0) break;
                  auVar297._0_4_ = auVar282._0_4_ + auVar312._0_4_;
                  auVar297._4_4_ = auVar282._4_4_ + auVar312._4_4_;
                  auVar297._8_4_ = auVar282._8_4_ + auVar312._8_4_;
                  auVar297._12_4_ = auVar282._12_4_ + auVar312._12_4_;
                  auVar54 = vpmovsxdq_avx(auVar297);
                  auVar230 = vpshufd_avx(auVar297,0xee);
                  auVar230 = vpmovsxdq_avx(auVar230);
                  auVar230 = vpaddq_avx(auVar304,auVar230);
                  auVar54 = vpaddq_avx(auVar298,auVar54);
                  uVar31 = vmovmskps_avx(auVar115);
                  if ((uVar31 & 1) != 0) {
                    auVar188 = ZEXT116(*auVar54._0_8_);
                  }
                  if ((uVar31 & 2) != 0) {
                    auVar54 = vpinsrb_avx(auVar188,(uint)*auVar54._8_8_,1);
                    auVar188 = vpblendw_avx(auVar54,auVar188,0xe);
                  }
                  if ((uVar31 & 4) != 0) {
                    auVar54 = vpmovzxwd_avx(auVar188);
                    auVar54 = vpinsrb_avx(auVar54,(uint)*auVar230._0_8_,2);
                    auVar54 = vpinsrb_avx(auVar54,(uint)auVar188[3],3);
                    auVar188 = vpblendw_avx(auVar54,auVar188,0xc);
                  }
                  if ((uVar31 & 8) != 0) {
                    auVar54 = vpmovzxwd_avx(auVar188);
                    auVar54 = vpinsrb_avx(auVar54,(uint)auVar188[2],2);
                    auVar230 = vpinsrb_avx(auVar54,(uint)*auVar230._8_8_,3);
                    auVar188 = vpblendw_avx(auVar230,auVar188,0xc);
                  }
                  auVar310._0_4_ = auVar282._16_4_ + auVar312._0_4_;
                  auVar310._4_4_ = auVar282._20_4_ + auVar312._4_4_;
                  auVar310._8_4_ = auVar282._24_4_ + auVar312._8_4_;
                  auVar310._12_4_ = auVar282._28_4_ + auVar312._12_4_;
                  auVar54 = vpmovsxdq_avx(auVar310);
                  auVar230 = vpshufd_avx(auVar310,0xee);
                  auVar230 = vpmovsxdq_avx(auVar230);
                  auVar230 = vpaddq_avx(auVar230,auVar208);
                  auVar54 = vpaddq_avx(auVar196,auVar54);
                  if ((uVar31 & 0x10) != 0) {
                    auVar55 = vpshufb_avx(auVar188,___xmm_80800706808005048080030203020100);
                    auVar55 = vpinsrb_avx(auVar55,(uint)*auVar54._0_8_,4);
                    auVar55 = vpinsrb_avx(auVar55,(uint)auVar188[5],5);
                    auVar188 = vpblendw_avx(auVar55,auVar188,8);
                  }
                  if ((uVar31 & 0x20) != 0) {
                    auVar55 = vpshufb_avx(auVar188,___xmm_80800706808005048080030403020100);
                    auVar54 = vpinsrb_avx(auVar55,(uint)*auVar54._8_8_,5);
                    auVar188 = vpblendw_avx(auVar54,auVar188,8);
                  }
                  if ((uVar31 & 0x40) != 0) {
                    auVar54 = vpshufb_avx(auVar188,___xmm_80800706808005048080050403020100);
                    auVar54 = vpinsrb_avx(auVar54,(uint)*auVar230._0_8_,6);
                    auVar188 = vpinsrb_avx(auVar54,(uint)auVar188[7],7);
                  }
                  if ((char)uVar31 < '\0') {
                    auVar188 = vpshufb_avx(auVar188,___xmm_80800706808005048006050403020100);
                    auVar188 = vpinsrb_avx(auVar188,(uint)*auVar230._8_8_,7);
                  }
                  auVar230 = vpmovzxbd_avx(auVar188);
                  auVar188 = vpshufd_avx(auVar188,0x55);
                  auVar188 = vpmovzxbd_avx(auVar188);
                  auVar188 = vpcmpgtd_avx(auVar188,auVar163);
                  auVar230 = vpcmpgtd_avx(auVar230,auVar163);
                  auVar259._0_4_ = ~auVar230._0_4_ & uVar29;
                  auVar259._4_4_ = ~auVar230._4_4_ & uVar140;
                  auVar259._8_4_ = ~auVar230._8_4_ & uVar143;
                  auVar259._12_4_ = ~auVar230._12_4_ & uVar146;
                  auVar259._16_4_ = ~auVar188._0_4_ & uVar149;
                  auVar259._20_4_ = ~auVar188._4_4_ & uVar152;
                  auVar259._24_4_ = ~auVar188._8_4_ & uVar155;
                  auVar259._28_4_ = ~auVar188._12_4_ & uVar98;
                  auVar306 = ZEXT3264(auVar259);
                  uVar31 = 0;
                  uVar141 = 0;
                  uVar144 = 0;
                  uVar147 = 0;
                  uVar150 = 0;
                  uVar153 = 0;
                  uVar156 = 0;
                  uVar99 = 0;
                  auVar221._0_4_ = auVar259._0_4_ & auVar252._0_4_;
                  auVar221._4_4_ = auVar259._4_4_ & auVar252._4_4_;
                  auVar221._8_4_ = auVar259._8_4_ & auVar252._8_4_;
                  auVar221._12_4_ = auVar259._12_4_ & auVar252._12_4_;
                  auVar221._16_4_ = auVar259._16_4_ & auVar252._16_4_;
                  auVar221._20_4_ = auVar259._20_4_ & auVar252._20_4_;
                  auVar221._24_4_ = auVar259._24_4_ & auVar252._24_4_;
                  auVar221._28_4_ = auVar259._28_4_ & auVar252._28_4_;
                  uVar30 = vmovmskps_avx(auVar221);
                  if ((char)iVar43 != (char)uVar30) {
                    uVar99 = auVar259._0_4_ ^ uVar29;
                    uVar31 = auVar259._4_4_ ^ uVar140;
                    uVar141 = auVar259._8_4_ ^ uVar143;
                    uVar144 = auVar259._12_4_ ^ uVar146;
                    uVar147 = auVar259._16_4_ ^ uVar149;
                    uVar150 = auVar259._20_4_ ^ uVar152;
                    uVar153 = auVar259._24_4_ ^ uVar155;
                    uVar156 = auVar259._28_4_ ^ uVar98;
                  }
                  auVar167._16_16_ = auVar310;
                  auVar167._0_16_ = auVar297;
                  auVar214 = vblendvps_avx(auVar214,auVar167,auVar259);
                  auVar70._4_4_ = __real_00000002;
                  auVar70._0_4_ = __real_00000002;
                  auVar70._8_4_ = __real_00000002;
                  auVar70._12_4_ = __real_00000002;
                  auVar188 = vpcmpgtd_avx(auVar282._0_16_,auVar70);
                  auVar230 = vpcmpgtd_avx(auVar282._16_16_,auVar70);
                  auVar238 = ZEXT1664(auVar230);
                  uVar29 = auVar188._0_4_ & uVar99;
                  uVar140 = auVar188._4_4_ & uVar31;
                  uVar143 = auVar188._8_4_ & uVar141;
                  uVar146 = auVar188._12_4_ & uVar144;
                  uVar149 = auVar230._0_4_ & uVar147;
                  uVar152 = auVar230._4_4_ & uVar150;
                  uVar155 = auVar230._8_4_ & uVar153;
                  uVar98 = auVar230._12_4_ & uVar156;
                  auVar115._0_4_ = auVar252._0_4_ & uVar29;
                  auVar115._4_4_ = auVar252._4_4_ & uVar140;
                  auVar115._8_4_ = auVar252._8_4_ & uVar143;
                  auVar115._12_4_ = auVar252._12_4_ & uVar146;
                  auVar115._16_4_ = auVar252._16_4_ & uVar149;
                  auVar115._20_4_ = auVar252._20_4_ & uVar152;
                  auVar115._24_4_ = auVar252._24_4_ & uVar155;
                  auVar115._28_4_ = auVar252._28_4_ & uVar98;
                  iVar43 = vmovmskps_avx(auVar115);
                  auVar282 = ZEXT3264(auVar167);
                }
              }
              local_7c0 = vblendvps_avx(local_7c0,auVar214,auVar252);
              auVar55 = local_7c0._0_16_;
              auVar54 = vpmovsxdq_avx(auVar55);
              auVar188 = vshufpd_avx(auVar55,auVar55,3);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar304,auVar188);
              auVar54 = vpaddq_avx(auVar298,auVar54);
              auVar305._4_4_ = __real_00000001;
              auVar305._0_4_ = __real_00000001;
              auVar305._8_4_ = __real_00000001;
              auVar305._12_4_ = __real_00000001;
              if ((uVar26 & 1) != 0) {
                auVar230 = ZEXT116(*auVar54._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar54 = vpinsrb_avx(auVar230,(uint)*auVar54._8_8_,1);
                auVar230 = vpblendw_avx(auVar54,auVar230,0xe);
              }
              if ((uVar26 & 4) != 0) {
                auVar54 = vpmovzxwd_avx(auVar230);
                auVar54 = vpinsrb_avx(auVar54,(uint)*auVar188._0_8_,2);
                auVar54 = vpinsrb_avx(auVar54,(uint)auVar230[3],3);
                auVar230 = vpblendw_avx(auVar54,auVar230,0xc);
              }
              if ((uVar26 & 8) != 0) {
                auVar54 = vpmovzxwd_avx(auVar230);
                auVar54 = vpinsrb_avx(auVar54,(uint)auVar230[2],2);
                auVar188 = vpinsrb_avx(auVar54,(uint)*auVar188._8_8_,3);
                auVar230 = vpblendw_avx(auVar188,auVar230,0xc);
              }
              auVar162 = local_7c0._16_16_;
              auVar54 = vpmovsxdq_avx(auVar162);
              auVar188 = vshufpd_avx(auVar162,auVar162,3);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar188,auVar208);
              auVar54 = vpaddq_avx(auVar196,auVar54);
              if ((uVar26 & 0x10) != 0) {
                auVar70 = vpshufb_avx(auVar230,___xmm_80800706808005048080030203020100);
                auVar70 = vpinsrb_avx(auVar70,(uint)*auVar54._0_8_,4);
                auVar70 = vpinsrb_avx(auVar70,(uint)auVar230[5],5);
                auVar230 = vpblendw_avx(auVar70,auVar230,8);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar70 = vpshufb_avx(auVar230,___xmm_80800706808005048080030403020100);
                auVar54 = vpinsrb_avx(auVar70,(uint)*auVar54._8_8_,5);
                auVar230 = vpblendw_avx(auVar54,auVar230,8);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar54 = vpshufb_avx(auVar230,___xmm_80800706808005048080050403020100);
                auVar54 = vpinsrb_avx(auVar54,(uint)*auVar188._0_8_,6);
                auVar230 = vpinsrb_avx(auVar54,(uint)auVar230[7],7);
              }
              if (cVar49 < '\0') {
                auVar230 = vpshufb_avx(auVar230,___xmm_80800706808005048006050403020100);
                auVar230 = vpinsrb_avx(auVar230,(uint)*auVar188._8_8_,7);
              }
              auVar188 = vpcmpeqd_avx(auVar160,auVar305);
              auVar119._16_16_ = auVar231;
              auVar119._0_16_ = auVar188;
              auVar188 = vpcmpeqd_avx(auVar71,auVar71);
              auVar54 = vpsubd_avx(auVar162,auVar188);
              auVar188 = vpsubd_avx(auVar55,auVar188);
              auVar169._16_16_ = auVar54;
              auVar169._0_16_ = auVar188;
              local_4e0 = vblendvps_avx(local_4e0,auVar169,auVar252);
              auVar188 = vpcmpgtd_avx(auVar102,local_4e0._16_16_);
              auVar54 = vpcmpgtd_avx(auVar160,local_4e0._0_16_);
              auVar120._16_16_ = auVar188;
              auVar120._0_16_ = auVar54;
              auVar120 = auVar120 | auVar119;
              auVar25._4_4_ = uVar180;
              auVar25._0_4_ = uVar158;
              auVar25._8_4_ = uVar182;
              auVar25._12_4_ = uVar184;
              auVar25._16_4_ = uVar186;
              auVar25._20_4_ = uVar189;
              auVar25._24_4_ = uVar191;
              auVar25._28_4_ = uVar193;
              auVar214 = auVar25 & ~auVar120;
              if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0')
                    || (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0')
                  || (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
                auVar121._0_4_ = ~auVar120._0_4_ & uVar158;
                auVar121._4_4_ = ~auVar120._4_4_ & uVar180;
                auVar121._8_4_ = ~auVar120._8_4_ & uVar182;
                auVar121._12_4_ = ~auVar120._12_4_ & uVar184;
                auVar121._16_4_ = ~auVar120._16_4_ & uVar186;
                auVar121._20_4_ = ~auVar120._20_4_ & uVar189;
                auVar121._24_4_ = ~auVar120._24_4_ & uVar191;
                auVar121._28_4_ = ~auVar120._28_4_ & uVar193;
                local_4e0 = vblendvps_avx(local_4e0,auVar216,auVar121);
              }
              auVar54 = vpmovsxdq_avx(local_4e0._0_16_);
              auVar188 = vpshufd_avx(local_4e0._0_16_,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar304,auVar188);
              auVar54 = vpaddq_avx(auVar298,auVar54);
              if ((uVar26 & 1) == 0) {
                auVar290 = SUB6432(ZEXT464(0),0);
                auVar102 = auVar188;
              }
              else {
                auVar290 = SUB6432(ZEXT464(0),0);
                auVar102 = ZEXT116(*auVar54._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar54 = vpinsrb_avx(auVar102,(uint)*auVar54._8_8_,1);
                auVar102 = vpblendw_avx(auVar54,auVar102,0xe);
              }
              if ((uVar26 & 4) != 0) {
                auVar54 = vpmovzxwd_avx(auVar102);
                auVar54 = vpinsrb_avx(auVar54,(uint)*auVar188._0_8_,2);
                auVar54 = vpinsrb_avx(auVar54,(uint)auVar102[3],3);
                auVar102 = vpblendw_avx(auVar54,auVar102,0xc);
              }
              if ((uVar26 & 8) != 0) {
                auVar54 = vpmovzxwd_avx(auVar102);
                auVar54 = vpinsrb_avx(auVar54,(uint)auVar102[2],2);
                auVar188 = vpinsrb_avx(auVar54,(uint)*auVar188._8_8_,3);
                auVar102 = vpblendw_avx(auVar188,auVar102,0xc);
              }
              auVar54 = vpmovsxdq_avx(local_4e0._16_16_);
              auVar188 = vpshufd_avx(local_4e0._16_16_,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar188,auVar208);
              auVar54 = vpaddq_avx(auVar196,auVar54);
              if ((uVar26 & 0x10) != 0) {
                auVar55 = vpshufb_avx(auVar102,___xmm_80800706808005048080030203020100);
                auVar55 = vpinsrb_avx(auVar55,(uint)*auVar54._0_8_,4);
                auVar55 = vpinsrb_avx(auVar55,(uint)auVar102[5],5);
                auVar102 = vpblendw_avx(auVar55,auVar102,8);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar55 = vpshufb_avx(auVar102,___xmm_80800706808005048080030403020100);
                auVar54 = vpinsrb_avx(auVar55,(uint)*auVar54._8_8_,5);
                auVar102 = vpblendw_avx(auVar54,auVar102,8);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar54 = vpshufb_avx(auVar102,___xmm_80800706808005048080050403020100);
                auVar54 = vpinsrb_avx(auVar54,(uint)*auVar188._0_8_,6);
                auVar102 = vpinsrb_avx(auVar54,(uint)auVar102[7],7);
              }
              if (cVar49 < '\0') {
                auVar54 = vpshufb_avx(auVar102,___xmm_80800706808005048006050403020100);
                auVar102 = vpinsrb_avx(auVar54,(uint)*auVar188._8_8_,7);
              }
              auVar188 = vpmovzxbd_avx(auVar230);
              auVar230 = vpshufd_avx(auVar230,0x55);
              auVar230 = vpmovzxbd_avx(auVar230);
              auVar77._16_16_ = auVar230;
              auVar77._0_16_ = auVar188;
              auVar230 = vpmovzxbd_avx(auVar102);
              auVar54 = vpshufd_avx(auVar102,0x55);
              auVar54 = vpmovzxbd_avx(auVar54);
            }
            else {
              auVar71._4_4_ = auVar297._4_4_ * 2;
              auVar71._0_4_ = auVar297._0_4_ * 2;
              auVar71._8_4_ = auVar297._8_4_ * 2;
              auVar71._12_4_ = auVar297._12_4_ * 2;
              auVar312 = vpmovsxdq_avx(auVar71);
              auVar310 = vpshufd_avx(auVar71,0xee);
              auVar310 = vpmovsxdq_avx(auVar310);
              auVar310 = vpaddq_avx(auVar304,auVar310);
              auVar71 = vpaddq_avx(auVar298,auVar312);
              auVar312 = vpcmpeqd_avx(auVar231,auVar231);
              if ((uVar26 & 1) != 0) {
                auVar162 = ZEXT216(*auVar71._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar71._8_8_,1);
              }
              if ((uVar26 & 4) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar310._0_8_,2);
              }
              if ((uVar26 & 8) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar310._8_8_,3);
              }
              auVar20._4_4_ = auVar70._4_4_ * 2;
              auVar20._0_4_ = auVar70._0_4_ * 2;
              auVar20._8_4_ = auVar70._8_4_ * 2;
              auVar20._12_4_ = auVar70._12_4_ * 2;
              auVar71 = vpmovsxdq_avx(auVar20);
              auVar310 = vpshufd_avx(auVar20,0xee);
              auVar310 = vpmovsxdq_avx(auVar310);
              auVar310 = vpaddq_avx(auVar310,auVar208);
              auVar71 = vpaddq_avx(auVar196,auVar71);
              if ((uVar26 & 0x10) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar71._0_8_,4);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar71._8_8_,5);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar310._0_8_,6);
              }
              if (cVar49 < '\0') {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar310._8_8_,7);
              }
              auVar305 = vpunpckhwd_avx(auVar162,___xmm_00000000000000000000000000000000);
              auVar71 = vpmovzxwd_avx(auVar162);
              auVar162 = vpcmpgtd_avx(auVar305,auVar163);
              auVar229 = auVar312 ^ auVar162;
              auVar310 = vpcmpgtd_avx(auVar71,auVar163);
              auVar20 = auVar312 ^ auVar310;
              auVar75._16_16_ = auVar229;
              auVar75._0_16_ = auVar20;
              auVar106._16_16_ = auVar162;
              auVar106._0_16_ = auVar310;
              auVar214 = auVar252 & ~auVar106;
              local_540 = auVar20._0_4_;
              uStack_53c = auVar20._4_4_;
              uStack_538 = auVar20._8_4_;
              uStack_534 = auVar20._12_4_;
              uStack_530 = auVar229._0_4_;
              uStack_52c = auVar229._4_4_;
              uStack_528 = auVar229._8_4_;
              uStack_524 = auVar229._12_4_;
              if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0')
                    || (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0')
                  || (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
                auVar162 = vpcmpgtd_avx(auVar305,auVar163);
                auVar310 = vpcmpgtd_avx(auVar71,auVar163);
                auVar107._16_16_ = auVar162;
                auVar107._0_16_ = auVar310;
                auVar214 = vblendvps_avx(auVar216,auVar271,auVar107);
                auVar54 = vpcmpgtd_avx(auVar230,auVar54);
                auVar55 = vpcmpgtd_avx(auVar188,auVar55);
                auVar229._0_4_ = auVar55._0_4_ & local_540;
                auVar229._4_4_ = auVar55._4_4_ & uStack_53c;
                auVar229._8_4_ = auVar55._8_4_ & uStack_538;
                auVar229._12_4_ = auVar55._12_4_ & uStack_534;
                auVar232._16_4_ = auVar54._0_4_ & uStack_530;
                auVar232._0_16_ = auVar229;
                auVar232._20_4_ = auVar54._4_4_ & uStack_52c;
                auVar232._24_4_ = auVar54._8_4_ & uStack_528;
                auVar232._28_4_ = auVar54._12_4_ & uStack_524;
                auVar108._0_4_ = auVar252._0_4_ & auVar229._0_4_;
                auVar108._4_4_ = auVar252._4_4_ & auVar229._4_4_;
                auVar108._8_4_ = auVar252._8_4_ & auVar229._8_4_;
                auVar108._12_4_ = auVar252._12_4_ & auVar229._12_4_;
                auVar108._16_4_ = auVar252._16_4_ & auVar232._16_4_;
                auVar108._20_4_ = auVar252._20_4_ & auVar232._20_4_;
                auVar108._24_4_ = auVar252._24_4_ & auVar232._24_4_;
                auVar108._28_4_ = auVar252._28_4_ & auVar232._28_4_;
                iVar43 = vmovmskps_avx(auVar108);
                auVar309 = auVar271;
                while (auVar271 = auVar214, iVar43 != 0) {
                  auVar162 = vpcmpeqd_avx(auVar188,auVar188);
                  auVar312 = vpsubd_avx(auVar309._0_16_,auVar312);
                  auVar2._4_4_ = auVar312._4_4_ * 2;
                  auVar2._0_4_ = auVar312._0_4_ * 2;
                  auVar2._8_4_ = auVar312._8_4_ * 2;
                  auVar2._12_4_ = auVar312._12_4_ * 2;
                  auVar55 = vpmovsxdq_avx(auVar2);
                  auVar54 = vpshufd_avx(auVar2,0xee);
                  auVar54 = vpmovsxdq_avx(auVar54);
                  auVar54 = vpaddq_avx(auVar304,auVar54);
                  auVar55 = vpaddq_avx(auVar298,auVar55);
                  uVar29 = vmovmskps_avx(auVar108);
                  auVar310 = auVar55;
                  if ((uVar29 & 1) != 0) {
                    auVar310 = ZEXT216(*auVar55._0_8_);
                  }
                  if ((uVar29 & 2) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar55._8_8_,1);
                  }
                  if ((uVar29 & 4) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar54._0_8_,2);
                  }
                  if ((uVar29 & 8) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar54._8_8_,3);
                  }
                  auVar162 = vpsubd_avx(auVar309._16_16_,auVar162);
                  auVar3._4_4_ = auVar162._4_4_ * 2;
                  auVar3._0_4_ = auVar162._0_4_ * 2;
                  auVar3._8_4_ = auVar162._8_4_ * 2;
                  auVar3._12_4_ = auVar162._12_4_ * 2;
                  auVar55 = vpmovsxdq_avx(auVar3);
                  auVar54 = vpshufd_avx(auVar3,0xee);
                  auVar54 = vpmovsxdq_avx(auVar54);
                  auVar54 = vpaddq_avx(auVar54,auVar208);
                  auVar55 = vpaddq_avx(auVar196,auVar55);
                  if ((uVar29 & 0x10) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar55._0_8_,4);
                  }
                  if ((uVar29 & 0x20) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar55._8_8_,5);
                  }
                  if ((uVar29 & 0x40) != 0) {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar54._0_8_,6);
                  }
                  if ((char)uVar29 < '\0') {
                    auVar310 = vpinsrw_avx(auVar310,(uint)*auVar54._8_8_,7);
                  }
                  auVar54 = vpunpckhwd_avx(auVar310,___xmm_00000000000000000000000000000000);
                  auVar55 = vpmovzxwd_avx(auVar310);
                  auVar54 = vpcmpgtd_avx(auVar54,auVar163);
                  auVar55 = vpcmpgtd_avx(auVar55,auVar163);
                  auVar311._0_4_ = auVar55._0_4_ & auVar232._0_4_;
                  auVar311._4_4_ = auVar55._4_4_ & auVar232._4_4_;
                  auVar311._8_4_ = auVar55._8_4_ & auVar232._8_4_;
                  auVar311._12_4_ = auVar55._12_4_ & auVar232._12_4_;
                  auVar313._16_4_ = auVar54._0_4_ & auVar232._16_4_;
                  auVar313._0_16_ = auVar311;
                  auVar313._20_4_ = auVar54._4_4_ & auVar232._20_4_;
                  auVar313._24_4_ = auVar54._8_4_ & auVar232._24_4_;
                  auVar313._28_4_ = auVar54._12_4_ & auVar232._28_4_;
                  uVar29 = 0;
                  uVar140 = 0;
                  uVar143 = 0;
                  uVar146 = 0;
                  uVar149 = 0;
                  uVar152 = 0;
                  uVar155 = 0;
                  uVar98 = 0;
                  auVar217._0_4_ = auVar311._0_4_ & auVar252._0_4_;
                  auVar217._4_4_ = auVar311._4_4_ & auVar252._4_4_;
                  auVar217._8_4_ = auVar311._8_4_ & auVar252._8_4_;
                  auVar217._12_4_ = auVar311._12_4_ & auVar252._12_4_;
                  auVar217._16_4_ = auVar313._16_4_ & auVar252._16_4_;
                  auVar217._20_4_ = auVar313._20_4_ & auVar252._20_4_;
                  auVar217._24_4_ = auVar313._24_4_ & auVar252._24_4_;
                  auVar217._28_4_ = auVar313._28_4_ & auVar252._28_4_;
                  uVar30 = vmovmskps_avx(auVar217);
                  if ((char)iVar43 != (char)uVar30) {
                    uVar98 = auVar311._0_4_ ^ auVar232._0_4_;
                    uVar29 = auVar311._4_4_ ^ auVar232._4_4_;
                    uVar140 = auVar311._8_4_ ^ auVar232._8_4_;
                    uVar143 = auVar311._12_4_ ^ auVar232._12_4_;
                    uVar146 = auVar313._16_4_ ^ auVar232._16_4_;
                    uVar149 = auVar313._20_4_ ^ auVar232._20_4_;
                    uVar152 = auVar313._24_4_ ^ auVar232._24_4_;
                    uVar155 = auVar313._28_4_ ^ auVar232._28_4_;
                  }
                  auVar214 = vblendvps_avx(auVar271,auVar309,auVar313);
                  auVar309._16_16_ = auVar162;
                  auVar309._0_16_ = auVar312;
                  auVar54 = vpcmpgtd_avx(auVar230,auVar162);
                  auVar55 = vpcmpgtd_avx(auVar188,auVar312);
                  auVar229._0_4_ = auVar55._0_4_ & uVar98;
                  auVar229._4_4_ = auVar55._4_4_ & uVar29;
                  auVar229._8_4_ = auVar55._8_4_ & uVar140;
                  auVar229._12_4_ = auVar55._12_4_ & uVar143;
                  auVar232._16_4_ = auVar54._0_4_ & uVar146;
                  auVar232._0_16_ = auVar229;
                  auVar232._20_4_ = auVar54._4_4_ & uVar149;
                  auVar232._24_4_ = auVar54._8_4_ & uVar152;
                  auVar232._28_4_ = auVar54._12_4_ & uVar155;
                  auVar108._0_4_ = auVar252._0_4_ & auVar229._0_4_;
                  auVar108._4_4_ = auVar252._4_4_ & auVar229._4_4_;
                  auVar108._8_4_ = auVar252._8_4_ & auVar229._8_4_;
                  auVar108._12_4_ = auVar252._12_4_ & auVar229._12_4_;
                  auVar108._16_4_ = auVar252._16_4_ & auVar232._16_4_;
                  auVar108._20_4_ = auVar252._20_4_ & auVar232._20_4_;
                  auVar108._24_4_ = auVar252._24_4_ & auVar232._24_4_;
                  auVar108._28_4_ = auVar252._28_4_ & auVar232._28_4_;
                  iVar43 = vmovmskps_avx(auVar108);
                  auVar312 = vpcmpeqd_avx(auVar311,auVar311);
                }
              }
              auVar188 = vpcmpgtd_avx(auVar305,auVar163);
              auVar230 = vpcmpgtd_avx(auVar71,auVar163);
              auVar112._16_16_ = auVar188;
              auVar112._0_16_ = auVar230;
              auVar112 = auVar112 & auVar252;
              if ((((((((SUB321(auVar112 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar112 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar112 >> 0x5f,0) & 1) != 0) || SUB321(auVar112 >> 0x7f,0) != '\0')
                    || (SUB321(auVar112 >> 0x9f,0) & 1) != 0) || SUB321(auVar112 >> 0xbf,0) != '\0')
                  || (SUB321(auVar112 >> 0xdf,0) & 1) != 0) || auVar112[0x1f] < '\0') {
                auVar271 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar271,auVar75);
                auVar161._4_4_ = __real_00000001;
                auVar161._0_4_ = __real_00000001;
                auVar161._8_4_ = __real_00000001;
                auVar161._12_4_ = __real_00000001;
                auVar188 = vpcmpgtd_avx(auVar70,auVar161);
                auVar230 = vpcmpgtd_avx(auVar297,auVar161);
                auVar233._0_4_ = ~local_540 & auVar230._0_4_;
                auVar233._4_4_ = ~uStack_53c & auVar230._4_4_;
                auVar233._8_4_ = ~uStack_538 & auVar230._8_4_;
                auVar233._12_4_ = ~uStack_534 & auVar230._12_4_;
                auVar233._16_4_ = ~uStack_530 & auVar188._0_4_;
                auVar233._20_4_ = ~uStack_52c & auVar188._4_4_;
                auVar233._24_4_ = ~uStack_528 & auVar188._8_4_;
                auVar233._28_4_ = ~uStack_524 & auVar188._12_4_;
                auVar113._0_4_ = auVar252._0_4_ & auVar233._0_4_;
                auVar113._4_4_ = auVar252._4_4_ & auVar233._4_4_;
                auVar113._8_4_ = auVar252._8_4_ & auVar233._8_4_;
                auVar113._12_4_ = auVar252._12_4_ & auVar233._12_4_;
                auVar113._16_4_ = auVar252._16_4_ & auVar233._16_4_;
                auVar113._20_4_ = auVar252._20_4_ & auVar233._20_4_;
                auVar113._24_4_ = auVar252._24_4_ & auVar233._24_4_;
                auVar113._28_4_ = auVar252._28_4_ & auVar233._28_4_;
                iVar43 = vmovmskps_avx(auVar113);
                while( true ) {
                  auVar188 = auVar306._0_16_;
                  auVar229 = auVar233._0_16_;
                  auVar71 = auVar70;
                  if (iVar43 == 0) break;
                  iVar38 = auVar282._0_4_ + auVar312._0_4_;
                  iVar44 = auVar282._4_4_ + auVar312._4_4_;
                  auVar219._4_4_ = iVar44;
                  auVar219._0_4_ = iVar38;
                  iVar47 = auVar282._8_4_ + auVar312._8_4_;
                  auVar219._8_4_ = iVar47;
                  iVar51 = auVar282._12_4_ + auVar312._12_4_;
                  auVar219._12_4_ = iVar51;
                  auVar4._4_4_ = iVar44 * 2;
                  auVar4._0_4_ = iVar38 * 2;
                  auVar4._8_4_ = iVar47 * 2;
                  auVar4._12_4_ = iVar51 * 2;
                  auVar54 = vpmovsxdq_avx(auVar4);
                  auVar230 = vpshufd_avx(auVar4,0xee);
                  auVar230 = vpmovsxdq_avx(auVar230);
                  auVar230 = vpaddq_avx(auVar304,auVar230);
                  auVar54 = vpaddq_avx(auVar298,auVar54);
                  uVar29 = vmovmskps_avx(auVar113);
                  if ((uVar29 & 1) != 0) {
                    auVar188 = ZEXT216(*auVar54._0_8_);
                  }
                  if ((uVar29 & 2) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar54._8_8_,1);
                  }
                  if ((uVar29 & 4) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar230._0_8_,2);
                  }
                  if ((uVar29 & 8) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar230._8_8_,3);
                  }
                  iVar38 = auVar312._0_4_ + auVar282._16_4_;
                  iVar44 = auVar312._4_4_ + auVar282._20_4_;
                  auVar219._20_4_ = iVar44;
                  auVar219._16_4_ = iVar38;
                  iVar47 = auVar312._8_4_ + auVar282._24_4_;
                  auVar219._24_4_ = iVar47;
                  iVar51 = auVar312._12_4_ + auVar282._28_4_;
                  auVar219._28_4_ = iVar51;
                  auVar5._4_4_ = iVar44 * 2;
                  auVar5._0_4_ = iVar38 * 2;
                  auVar5._8_4_ = iVar47 * 2;
                  auVar5._12_4_ = iVar51 * 2;
                  auVar54 = vpmovsxdq_avx(auVar5);
                  auVar230 = vpshufd_avx(auVar5,0xee);
                  auVar230 = vpmovsxdq_avx(auVar230);
                  auVar230 = vpaddq_avx(auVar230,auVar208);
                  auVar54 = vpaddq_avx(auVar196,auVar54);
                  if ((uVar29 & 0x10) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar54._0_8_,4);
                  }
                  if ((uVar29 & 0x20) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar54._8_8_,5);
                  }
                  if ((uVar29 & 0x40) != 0) {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar230._0_8_,6);
                  }
                  if ((char)uVar29 < '\0') {
                    auVar188 = vpinsrw_avx(auVar188,(uint)*auVar230._8_8_,7);
                  }
                  auVar54 = vpunpckhwd_avx(auVar188,___xmm_00000000000000000000000000000000);
                  auVar230 = vpmovzxwd_avx(auVar188);
                  auVar188 = vpcmpgtd_avx(auVar54,auVar163);
                  auVar230 = vpcmpgtd_avx(auVar230,auVar163);
                  auVar258._0_4_ = ~auVar230._0_4_ & auVar233._0_4_;
                  auVar258._4_4_ = ~auVar230._4_4_ & auVar233._4_4_;
                  auVar258._8_4_ = ~auVar230._8_4_ & auVar233._8_4_;
                  auVar258._12_4_ = ~auVar230._12_4_ & auVar233._12_4_;
                  auVar258._16_4_ = ~auVar188._0_4_ & auVar233._16_4_;
                  auVar258._20_4_ = ~auVar188._4_4_ & auVar233._20_4_;
                  auVar258._24_4_ = ~auVar188._8_4_ & auVar233._24_4_;
                  auVar258._28_4_ = ~auVar188._12_4_ & auVar233._28_4_;
                  auVar306 = ZEXT3264(auVar258);
                  uVar29 = 0;
                  uVar140 = 0;
                  uVar143 = 0;
                  uVar146 = 0;
                  uVar149 = 0;
                  uVar152 = 0;
                  uVar155 = 0;
                  uVar98 = 0;
                  auVar220._0_4_ = auVar258._0_4_ & auVar252._0_4_;
                  auVar220._4_4_ = auVar258._4_4_ & auVar252._4_4_;
                  auVar220._8_4_ = auVar258._8_4_ & auVar252._8_4_;
                  auVar220._12_4_ = auVar258._12_4_ & auVar252._12_4_;
                  auVar220._16_4_ = auVar258._16_4_ & auVar252._16_4_;
                  auVar220._20_4_ = auVar258._20_4_ & auVar252._20_4_;
                  auVar220._24_4_ = auVar258._24_4_ & auVar252._24_4_;
                  auVar220._28_4_ = auVar258._28_4_ & auVar252._28_4_;
                  uVar30 = vmovmskps_avx(auVar220);
                  if ((char)iVar43 != (char)uVar30) {
                    uVar98 = auVar258._0_4_ ^ auVar233._0_4_;
                    uVar29 = auVar258._4_4_ ^ auVar233._4_4_;
                    uVar140 = auVar258._8_4_ ^ auVar233._8_4_;
                    uVar143 = auVar258._12_4_ ^ auVar233._12_4_;
                    uVar146 = auVar258._16_4_ ^ auVar233._16_4_;
                    uVar149 = auVar258._20_4_ ^ auVar233._20_4_;
                    uVar152 = auVar258._24_4_ ^ auVar233._24_4_;
                    uVar155 = auVar258._28_4_ ^ auVar233._28_4_;
                  }
                  auVar271 = vblendvps_avx(auVar271,auVar219,auVar258);
                  auVar70._4_4_ = __real_00000002;
                  auVar70._0_4_ = __real_00000002;
                  auVar70._8_4_ = __real_00000002;
                  auVar70._12_4_ = __real_00000002;
                  auVar188 = vpcmpgtd_avx(auVar282._0_16_,auVar70);
                  auVar230 = vpcmpgtd_avx(auVar282._16_16_,auVar70);
                  auVar233._0_4_ = auVar188._0_4_ & uVar98;
                  auVar233._4_4_ = auVar188._4_4_ & uVar29;
                  auVar233._8_4_ = auVar188._8_4_ & uVar140;
                  auVar233._12_4_ = auVar188._12_4_ & uVar143;
                  auVar233._16_4_ = auVar230._0_4_ & uVar146;
                  auVar233._20_4_ = auVar230._4_4_ & uVar149;
                  auVar233._24_4_ = auVar230._8_4_ & uVar152;
                  auVar233._28_4_ = auVar230._12_4_ & uVar155;
                  auVar113._0_4_ = auVar252._0_4_ & auVar233._0_4_;
                  auVar113._4_4_ = auVar252._4_4_ & auVar233._4_4_;
                  auVar113._8_4_ = auVar252._8_4_ & auVar233._8_4_;
                  auVar113._12_4_ = auVar252._12_4_ & auVar233._12_4_;
                  auVar113._16_4_ = auVar252._16_4_ & auVar233._16_4_;
                  auVar113._20_4_ = auVar252._20_4_ & auVar233._20_4_;
                  auVar113._24_4_ = auVar252._24_4_ & auVar233._24_4_;
                  auVar113._28_4_ = auVar252._28_4_ & auVar233._28_4_;
                  iVar43 = vmovmskps_avx(auVar113);
                  auVar282 = ZEXT3264(auVar219);
                }
              }
              local_7c0 = vblendvps_avx(local_7c0,auVar271,auVar252);
              auVar6._4_4_ = local_7c0._4_4_ * 2;
              auVar6._0_4_ = local_7c0._0_4_ * 2;
              auVar6._8_4_ = local_7c0._8_4_ * 2;
              auVar6._12_4_ = local_7c0._12_4_ * 2;
              auVar230 = vpmovsxdq_avx(auVar6);
              auVar188 = vpshufd_avx(auVar6,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar304,auVar188);
              auVar230 = vpaddq_avx(auVar298,auVar230);
              auVar305._4_4_ = __real_00000001;
              auVar305._0_4_ = __real_00000001;
              auVar305._8_4_ = __real_00000001;
              auVar305._12_4_ = __real_00000001;
              if ((uVar26 & 1) != 0) {
                auVar229 = ZEXT216(*auVar230._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar230._8_8_,1);
              }
              if ((uVar26 & 4) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar188._0_8_,2);
              }
              if ((uVar26 & 8) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar188._8_8_,3);
              }
              auVar7._4_4_ = local_7c0._20_4_ * 2;
              auVar7._0_4_ = local_7c0._16_4_ * 2;
              auVar7._8_4_ = local_7c0._24_4_ * 2;
              auVar7._12_4_ = local_7c0._28_4_ * 2;
              auVar230 = vpmovsxdq_avx(auVar7);
              auVar188 = vpshufd_avx(auVar7,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar188,auVar208);
              auVar230 = vpaddq_avx(auVar196,auVar230);
              if ((uVar26 & 0x10) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar230._0_8_,4);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar230._8_8_,5);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar188._0_8_,6);
              }
              if (cVar49 < '\0') {
                auVar229 = vpinsrw_avx(auVar229,(uint)*auVar188._8_8_,7);
              }
              auVar188 = vpcmpeqd_avx(auVar160,auVar305);
              auVar116._16_16_ = auVar231;
              auVar116._0_16_ = auVar188;
              auVar188 = vpcmpeqd_avx(auVar71,auVar71);
              auVar230 = vpsubd_avx(local_7c0._16_16_,auVar188);
              auVar188 = vpsubd_avx(local_7c0._0_16_,auVar188);
              auVar168._16_16_ = auVar230;
              auVar168._0_16_ = auVar188;
              local_4e0 = vblendvps_avx(local_4e0,auVar168,auVar252);
              auVar188 = vpcmpgtd_avx(auVar102,local_4e0._16_16_);
              auVar230 = vpcmpgtd_avx(auVar160,local_4e0._0_16_);
              auVar117._16_16_ = auVar188;
              auVar117._0_16_ = auVar230;
              auVar117 = auVar117 | auVar116;
              auVar25._4_4_ = uVar180;
              auVar25._0_4_ = uVar158;
              auVar25._8_4_ = uVar182;
              auVar25._12_4_ = uVar184;
              auVar25._16_4_ = uVar186;
              auVar25._20_4_ = uVar189;
              auVar25._24_4_ = uVar191;
              auVar25._28_4_ = uVar193;
              auVar214 = auVar25 & ~auVar117;
              if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 ||
                       (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
                      (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0')
                    || (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0')
                  || (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
                auVar118._0_4_ = ~auVar117._0_4_ & uVar158;
                auVar118._4_4_ = ~auVar117._4_4_ & uVar180;
                auVar118._8_4_ = ~auVar117._8_4_ & uVar182;
                auVar118._12_4_ = ~auVar117._12_4_ & uVar184;
                auVar118._16_4_ = ~auVar117._16_4_ & uVar186;
                auVar118._20_4_ = ~auVar117._20_4_ & uVar189;
                auVar118._24_4_ = ~auVar117._24_4_ & uVar191;
                auVar118._28_4_ = ~auVar117._28_4_ & uVar193;
                local_4e0 = vblendvps_avx(local_4e0,auVar216,auVar118);
              }
              auVar102._4_4_ = local_4e0._4_4_ * 2;
              auVar102._0_4_ = local_4e0._0_4_ * 2;
              auVar102._8_4_ = local_4e0._8_4_ * 2;
              auVar102._12_4_ = local_4e0._12_4_ * 2;
              auVar230 = vpmovsxdq_avx(auVar102);
              auVar188 = vpshufd_avx(auVar102,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar304,auVar188);
              auVar230 = vpaddq_avx(auVar298,auVar230);
              if ((uVar26 & 1) == 0) {
                auVar290 = SUB6432(ZEXT464(0),0);
                auVar102 = auVar188;
              }
              else {
                auVar290 = SUB6432(ZEXT464(0),0);
                auVar102 = ZEXT216(*auVar230._0_8_);
              }
              if ((uVar26 & 2) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar230._8_8_,1);
              }
              if ((uVar26 & 4) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar188._0_8_,2);
              }
              if ((uVar26 & 8) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar188._8_8_,3);
              }
              auVar304._4_4_ = local_4e0._20_4_ * 2;
              auVar304._0_4_ = local_4e0._16_4_ * 2;
              auVar304._8_4_ = local_4e0._24_4_ * 2;
              auVar304._12_4_ = local_4e0._28_4_ * 2;
              auVar230 = vpmovsxdq_avx(auVar304);
              auVar188 = vpshufd_avx(auVar304,0xee);
              auVar188 = vpmovsxdq_avx(auVar188);
              auVar188 = vpaddq_avx(auVar188,auVar208);
              auVar230 = vpaddq_avx(auVar196,auVar230);
              if ((uVar26 & 0x10) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar230._0_8_,4);
              }
              if ((uVar26 & 0x20) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar230._8_8_,5);
              }
              if ((uVar26 & 0x40) != 0) {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar188._0_8_,6);
              }
              if (cVar49 < '\0') {
                auVar102 = vpinsrw_avx(auVar102,(uint)*auVar188._8_8_,7);
              }
              auVar230 = vpunpckhwd_avx(auVar229,(undefined1  [16])0x0);
              auVar188 = vpmovzxwd_avx(auVar229);
              auVar77._16_16_ = auVar230;
              auVar77._0_16_ = auVar188;
              auVar54 = vpunpckhwd_avx(auVar102,(undefined1  [16])0x0);
              auVar230 = vpmovzxwd_avx(auVar102);
            }
            auVar290 = auVar290 << 0x20;
            auVar214 = ZEXT1632((undefined1  [16])0x0);
            auVar306 = ZEXT1664(auVar305);
            if (param_7 != '\x01') {
              auVar230 = vpsubd_avx(auVar230,auVar77._0_16_);
              auVar188 = vpsubd_avx(auVar54,auVar77._16_16_);
              auVar188 = vpmaxsd_avx(auVar188,auVar305);
              auVar230 = vpmaxsd_avx(auVar230,auVar305);
              auVar58._16_16_ = auVar188;
              auVar58._0_16_ = auVar230;
              auVar214 = vcvtdq2ps_avx(auVar77);
              auVar164 = vsubps_avx(auVar64,auVar214);
              auVar188 = auVar164._0_16_;
              auVar214 = vcvtdq2ps_avx(auVar58);
              auVar214 = vdivps_avx(auVar164,auVar214);
            }
            auVar214 = vblendvps_avx(auVar290,auVar214,auVar25);
          }
        }
        auVar230 = vpcmpeqd_avx(auVar306._0_16_,auVar160);
        auVar230 = vpackssdw_avx(auVar230,auVar231);
        auVar188 = vpcmpeqd_avx(auVar188,auVar188);
        auVar230 = auVar230 ^ auVar188;
        auVar188 = vpmovsxwd_avx(auVar230);
        auVar231 = vpunpckhwd_avx(auVar230,auVar230);
        if (param_8 < 6) {
          auVar212 = vpmulld_avx(local_7c0._0_16_,auVar21);
          auVar105 = vpmulld_avx(local_7c0._16_16_,auVar21);
          vpmovsxdq_avx(auVar105);
          auVar105 = vpshufd_avx(auVar105,0xee);
          vpmovsxdq_avx(auVar105);
          vpmovsxdq_avx(auVar212);
          auVar212 = vpshufd_avx(auVar212,0xee);
          auVar212 = vpmovsxdq_avx(auVar212);
                    /* WARNING: Could not recover jumptable at 0x000140c3fce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6c940 + *(int *)(&DAT_151c6c940 + uVar36 * 4)))
                    (auVar21._0_8_,&DAT_151c6c940,puVar41,auVar212._0_8_);
          return;
        }
        auVar78._16_16_ = auVar231;
        auVar78._0_16_ = auVar188;
        _local_3e0 = vmaskmovps_avx(auVar78,auVar290);
        _local_3c0 = vmaskmovps_avx(auVar78,auVar290);
        _local_3a0 = vmaskmovps_avx(auVar78,auVar290);
        auVar170._4_4_ = __real_3f800000;
        auVar170._0_4_ = __real_3f800000;
        auVar170._8_4_ = __real_3f800000;
        auVar170._12_4_ = __real_3f800000;
        auVar170._16_4_ = __real_3f800000;
        auVar170._20_4_ = __real_3f800000;
        auVar170._24_4_ = __real_3f800000;
        auVar170._28_4_ = __real_3f800000;
        _local_380 = vmaskmovps_avx(auVar78,auVar170);
        auVar54 = vpcmpeqd_avx(local_7c0._16_16_,local_4e0._16_16_);
        auVar102 = vpcmpeqd_avx(local_7c0._0_16_,local_4e0._0_16_);
        auVar79._16_16_ = auVar231;
        auVar79._0_16_ = auVar188;
        auVar122._16_16_ = auVar54;
        auVar122._0_16_ = auVar102;
        auVar79 = auVar79 & ~auVar122;
        if ((((((((SUB321(auVar79 >> 0x1f,0) & 1) != 0 || (SUB321(auVar79 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar79 >> 0x5f,0) & 1) != 0) || SUB321(auVar79 >> 0x7f,0) != '\0') ||
              (SUB321(auVar79 >> 0x9f,0) & 1) != 0) || SUB321(auVar79 >> 0xbf,0) != '\0') ||
            (SUB321(auVar79 >> 0xdf,0) & 1) != 0) || auVar79[0x1f] < '\0') {
          auVar188 = vpackssdw_avx(auVar102,auVar54);
          auVar188 = vpandn_avx(auVar188,auVar230);
          auVar230 = vpmovsxwd_avx(auVar188);
          auVar188 = vpunpckhwd_avx(auVar188,auVar188);
          if (param_8 < 6) {
            auVar105 = vpmulld_avx(local_4e0._0_16_,auVar21);
            auVar212 = vpmulld_avx(local_4e0._16_16_,auVar21);
            vpmovsxdq_avx(auVar212);
            auVar212 = vpshufd_avx(auVar212,0xee);
            vpmovsxdq_avx(auVar212);
            auVar212 = vpmovsxdq_avx(auVar105);
            auVar105 = vpshufd_avx(auVar105,0xee);
            vpmovsxdq_avx(auVar105);
                    /* WARNING: Could not recover jumptable at 0x000140c410a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_151c6c958 + *(int *)(&DAT_151c6c958 + uVar36 * 4)))
                      (CONCAT44(__real_3f800000,__real_3f800000),&DAT_151c6c958,auVar230._0_8_,
                       auVar212._0_8_);
            return;
          }
          auVar123._16_16_ = auVar188;
          auVar123._0_16_ = auVar230;
          auVar164 = vmaskmovps_avx(auVar123,auVar290);
          auVar251 = vmaskmovps_avx(auVar123,auVar290);
          auVar290 = vmaskmovps_avx(auVar123,auVar290);
          auVar59._4_4_ = __real_3f800000;
          auVar59._0_4_ = __real_3f800000;
          auVar59._8_4_ = __real_3f800000;
          auVar59._12_4_ = __real_3f800000;
          auVar59._16_4_ = __real_3f800000;
          auVar59._20_4_ = __real_3f800000;
          auVar59._24_4_ = __real_3f800000;
          auVar59._28_4_ = __real_3f800000;
          auVar257 = vmaskmovps_avx(auVar123,auVar59);
          local_320 = auVar164._0_4_;
          fStack_31c = auVar164._4_4_;
          fStack_318 = auVar164._8_4_;
          fStack_314 = auVar164._12_4_;
          fStack_310 = auVar164._16_4_;
          fStack_30c = auVar164._20_4_;
          fStack_308 = auVar164._24_4_;
          fStack_304 = auVar164._28_4_;
          local_300 = auVar251._0_4_;
          fStack_2fc = auVar251._4_4_;
          fStack_2f8 = auVar251._8_4_;
          fStack_2f4 = auVar251._12_4_;
          fStack_2f0 = auVar251._16_4_;
          fStack_2ec = auVar251._20_4_;
          fStack_2e8 = auVar251._24_4_;
          fStack_2e4 = auVar251._28_4_;
          local_2e0 = auVar290._0_4_;
          fStack_2dc = auVar290._4_4_;
          fStack_2d8 = auVar290._8_4_;
          fStack_2d4 = auVar290._12_4_;
          fStack_2d0 = auVar290._16_4_;
          fStack_2cc = auVar290._20_4_;
          fStack_2c8 = auVar290._24_4_;
          fStack_2c4 = auVar290._28_4_;
          local_2c0 = auVar257._0_4_;
          fStack_2bc = auVar257._4_4_;
          fStack_2b8 = auVar257._8_4_;
          fStack_2b4 = auVar257._12_4_;
          fStack_2b0 = auVar257._16_4_;
          fStack_2ac = auVar257._20_4_;
          fStack_2a8 = auVar257._24_4_;
          fStack_2a4 = auVar257._28_4_;
          auVar272._0_4_ =
               (float)local_3e0._0_4_ * local_320 + local_2e0 * (float)local_3a0._0_4_ +
               (float)local_3c0._0_4_ * local_300 + local_2c0 * (float)local_380._0_4_;
          auVar272._4_4_ =
               (float)local_3e0._4_4_ * fStack_31c + fStack_2dc * (float)local_3a0._4_4_ +
               (float)local_3c0._4_4_ * fStack_2fc + fStack_2bc * (float)local_380._4_4_;
          auVar272._8_4_ =
               fStack_3d8 * fStack_318 + fStack_2d8 * fStack_398 +
               fStack_3b8 * fStack_2f8 + fStack_2b8 * fStack_378;
          auVar272._12_4_ =
               fStack_3d4 * fStack_314 + fStack_2d4 * fStack_394 +
               fStack_3b4 * fStack_2f4 + fStack_2b4 * fStack_374;
          auVar272._16_4_ =
               fStack_3d0 * fStack_310 + fStack_2d0 * fStack_390 +
               fStack_3b0 * fStack_2f0 + fStack_2b0 * fStack_370;
          auVar272._20_4_ =
               fStack_3cc * fStack_30c + fStack_2cc * fStack_38c +
               fStack_3ac * fStack_2ec + fStack_2ac * fStack_36c;
          auVar272._24_4_ =
               fStack_3c8 * fStack_308 + fStack_2c8 * fStack_388 +
               fStack_3a8 * fStack_2e8 + fStack_2a8 * fStack_368;
          auVar272._28_4_ =
               fStack_3c4 * fStack_304 + fStack_2c4 * fStack_384 +
               fStack_3a4 * fStack_2e4 + fStack_2a4 * fStack_364;
          auVar290 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar272,6);
          auVar290 = vcvtdq2ps_avx(auVar290 |
                                   ___ymm_0000000100000001000000010000000100000001000000010000000100000001
                                  );
          fVar239 = auVar214._0_4_;
          fVar244 = auVar214._4_4_;
          fVar245 = auVar214._8_4_;
          fVar246 = auVar214._12_4_;
          fVar247 = auVar214._16_4_;
          fVar248 = auVar214._20_4_;
          fVar249 = auVar214._24_4_;
          fVar250 = auVar214._28_4_;
          auVar214 = vsubps_avx(auVar59,auVar214);
          fVar269 = auVar214._0_4_ * auVar290._0_4_;
          fVar283 = auVar214._4_4_ * auVar290._4_4_;
          fVar284 = auVar214._8_4_ * auVar290._8_4_;
          fVar285 = auVar214._12_4_ * auVar290._12_4_;
          fVar286 = auVar214._16_4_ * auVar290._16_4_;
          fVar287 = auVar214._20_4_ * auVar290._20_4_;
          fVar288 = auVar214._24_4_ * auVar290._24_4_;
          fVar289 = auVar214._28_4_ * auVar290._28_4_;
          fVar100 = fVar239 * local_320 + fVar269 * (float)local_3e0._0_4_;
          fVar139 = fVar244 * fStack_31c + fVar283 * (float)local_3e0._4_4_;
          fVar142 = fVar245 * fStack_318 + fVar284 * fStack_3d8;
          fVar145 = fVar246 * fStack_314 + fVar285 * fStack_3d4;
          fVar148 = fVar247 * fStack_310 + fVar286 * fStack_3d0;
          fVar151 = fVar248 * fStack_30c + fVar287 * fStack_3cc;
          fVar154 = fVar249 * fStack_308 + fVar288 * fStack_3c8;
          fVar157 = fVar250 * fStack_304 + fVar289 * fStack_3c4;
          fVar159 = fVar239 * local_300 + fVar269 * (float)local_3c0._0_4_;
          fVar181 = fVar244 * fStack_2fc + fVar283 * (float)local_3c0._4_4_;
          fVar183 = fVar245 * fStack_2f8 + fVar284 * fStack_3b8;
          fVar185 = fVar246 * fStack_2f4 + fVar285 * fStack_3b4;
          fVar187 = fVar247 * fStack_2f0 + fVar286 * fStack_3b0;
          fVar190 = fVar248 * fStack_2ec + fVar287 * fStack_3ac;
          fVar192 = fVar249 * fStack_2e8 + fVar288 * fStack_3a8;
          fVar194 = fVar250 * fStack_2e4 + fVar289 * fStack_3a4;
          fVar195 = local_2e0 * fVar239 + fVar269 * (float)local_3a0._0_4_;
          fVar204 = fStack_2dc * fVar244 + fVar283 * (float)local_3a0._4_4_;
          fVar205 = fStack_2d8 * fVar245 + fVar284 * fStack_398;
          fVar206 = fStack_2d4 * fVar246 + fVar285 * fStack_394;
          fVar207 = fStack_2d0 * fVar247 + fVar286 * fStack_390;
          fVar209 = fStack_2cc * fVar248 + fVar287 * fStack_38c;
          fVar210 = fStack_2c8 * fVar249 + fVar288 * fStack_388;
          fVar211 = fStack_2c4 * fVar250 + fVar289 * fStack_384;
          fVar269 = local_2c0 * fVar239 + fVar269 * (float)local_380._0_4_;
          fVar283 = fStack_2bc * fVar244 + fVar283 * (float)local_380._4_4_;
          fVar284 = fStack_2b8 * fVar245 + fVar284 * fStack_378;
          fVar285 = fStack_2b4 * fVar246 + fVar285 * fStack_374;
          fVar286 = fStack_2b0 * fVar247 + fVar286 * fStack_370;
          fVar287 = fStack_2ac * fVar248 + fVar287 * fStack_36c;
          fVar288 = fStack_2a8 * fVar249 + fVar288 * fStack_368;
          fVar289 = fStack_2a4 * fVar250 + fVar289 * fStack_364;
          auVar234._0_4_ =
               fVar195 * fVar195 + fVar100 * fVar100 + fVar269 * fVar269 + fVar159 * fVar159;
          auVar234._4_4_ =
               fVar204 * fVar204 + fVar139 * fVar139 + fVar283 * fVar283 + fVar181 * fVar181;
          auVar234._8_4_ =
               fVar205 * fVar205 + fVar142 * fVar142 + fVar284 * fVar284 + fVar183 * fVar183;
          auVar234._12_4_ =
               fVar206 * fVar206 + fVar145 * fVar145 + fVar285 * fVar285 + fVar185 * fVar185;
          auVar234._16_4_ =
               fVar207 * fVar207 + fVar148 * fVar148 + fVar286 * fVar286 + fVar187 * fVar187;
          auVar234._20_4_ =
               fVar209 * fVar209 + fVar151 * fVar151 + fVar287 * fVar287 + fVar190 * fVar190;
          auVar234._24_4_ =
               fVar210 * fVar210 + fVar154 * fVar154 + fVar288 * fVar288 + fVar192 * fVar192;
          auVar234._28_4_ =
               fVar211 * fVar211 + fVar157 * fVar157 + fVar289 * fVar289 + fVar194 * fVar194;
          auVar214 = vrsqrtps_avx(auVar234);
          auVar80._4_4_ = __real_3f000000;
          auVar80._0_4_ = __real_3f000000;
          auVar80._8_4_ = __real_3f000000;
          auVar80._12_4_ = __real_3f000000;
          auVar80._16_4_ = __real_3f000000;
          auVar80._20_4_ = __real_3f000000;
          auVar80._24_4_ = __real_3f000000;
          auVar80._28_4_ = __real_3f000000;
          fVar239 = auVar214._0_4_;
          fVar244 = auVar214._4_4_;
          fVar245 = auVar214._8_4_;
          fVar246 = auVar214._12_4_;
          fVar247 = auVar214._16_4_;
          fVar248 = auVar214._20_4_;
          fVar249 = auVar214._24_4_;
          fVar250 = auVar214._28_4_;
          auVar260._0_4_ = fVar239 * fVar239 * auVar234._0_4_ * __real_3f000000;
          auVar260._4_4_ = fVar244 * fVar244 * auVar234._4_4_ * __real_3f000000;
          auVar260._8_4_ = fVar245 * fVar245 * auVar234._8_4_ * __real_3f000000;
          auVar260._12_4_ = fVar246 * fVar246 * auVar234._12_4_ * __real_3f000000;
          auVar260._16_4_ = fVar247 * fVar247 * auVar234._16_4_ * __real_3f000000;
          auVar260._20_4_ = fVar248 * fVar248 * auVar234._20_4_ * __real_3f000000;
          auVar260._24_4_ = fVar249 * fVar249 * auVar234._24_4_ * __real_3f000000;
          auVar260._28_4_ = fVar250 * fVar250 * auVar234._28_4_ * __real_3f000000;
          auVar214 = vsubps_avx(auVar80,auVar260);
          fVar239 = auVar214._0_4_ * fVar239 + fVar239;
          fVar244 = auVar214._4_4_ * fVar244 + fVar244;
          fVar245 = auVar214._8_4_ * fVar245 + fVar245;
          fVar246 = auVar214._12_4_ * fVar246 + fVar246;
          fVar247 = auVar214._16_4_ * fVar247 + fVar247;
          fVar248 = auVar214._20_4_ * fVar248 + fVar248;
          fVar249 = auVar214._24_4_ * fVar249 + fVar249;
          fVar250 = auVar214._28_4_ * fVar250 + fVar250;
          auVar253._0_4_ = auVar234._0_4_ * __real_3f000000 * fVar239 * fVar239;
          auVar253._4_4_ = auVar234._4_4_ * __real_3f000000 * fVar244 * fVar244;
          auVar253._8_4_ = auVar234._8_4_ * __real_3f000000 * fVar245 * fVar245;
          auVar253._12_4_ = auVar234._12_4_ * __real_3f000000 * fVar246 * fVar246;
          auVar253._16_4_ = auVar234._16_4_ * __real_3f000000 * fVar247 * fVar247;
          auVar253._20_4_ = auVar234._20_4_ * __real_3f000000 * fVar248 * fVar248;
          auVar253._24_4_ = auVar234._24_4_ * __real_3f000000 * fVar249 * fVar249;
          auVar253._28_4_ = auVar234._28_4_ * __real_3f000000 * fVar250 * fVar250;
          auVar214 = vsubps_avx(auVar80,auVar253);
          fVar239 = auVar214._0_4_ * fVar239 + fVar239;
          fVar244 = auVar214._4_4_ * fVar244 + fVar244;
          fVar245 = auVar214._8_4_ * fVar245 + fVar245;
          fVar246 = auVar214._12_4_ * fVar246 + fVar246;
          fVar247 = auVar214._16_4_ * fVar247 + fVar247;
          fVar248 = auVar214._20_4_ * fVar248 + fVar248;
          fVar249 = auVar214._24_4_ * fVar249 + fVar249;
          fVar250 = auVar214._28_4_ * fVar250 + fVar250;
          auVar81._4_4_ = __real_322bcc77;
          auVar81._0_4_ = __real_322bcc77;
          auVar81._8_4_ = __real_322bcc77;
          auVar81._12_4_ = __real_322bcc77;
          auVar81._16_4_ = __real_322bcc77;
          auVar81._20_4_ = __real_322bcc77;
          auVar81._24_4_ = __real_322bcc77;
          auVar81._28_4_ = __real_322bcc77;
          auVar214 = vcmpps_avx(auVar81,auVar234,2);
          uVar26 = auVar214._0_4_;
          auVar124._0_4_ = (uint)(fVar100 * fVar239) & uVar26;
          uVar158 = auVar214._4_4_;
          auVar124._4_4_ = (uint)(fVar139 * fVar244) & uVar158;
          uVar29 = auVar214._8_4_;
          auVar124._8_4_ = (uint)(fVar142 * fVar245) & uVar29;
          uVar140 = auVar214._12_4_;
          auVar124._12_4_ = (uint)(fVar145 * fVar246) & uVar140;
          uVar180 = auVar214._16_4_;
          auVar124._16_4_ = (uint)(fVar148 * fVar247) & uVar180;
          uVar182 = auVar214._20_4_;
          auVar124._20_4_ = (uint)(fVar151 * fVar248) & uVar182;
          uVar184 = auVar214._24_4_;
          auVar124._24_4_ = (uint)(fVar154 * fVar249) & uVar184;
          uVar186 = auVar214._28_4_;
          auVar124._28_4_ = (uint)(fVar157 * fVar250) & uVar186;
          auVar171._0_4_ = (uint)(fVar159 * fVar239) & uVar26;
          auVar171._4_4_ = (uint)(fVar181 * fVar244) & uVar158;
          auVar171._8_4_ = (uint)(fVar183 * fVar245) & uVar29;
          auVar171._12_4_ = (uint)(fVar185 * fVar246) & uVar140;
          auVar171._16_4_ = (uint)(fVar187 * fVar247) & uVar180;
          auVar171._20_4_ = (uint)(fVar190 * fVar248) & uVar182;
          auVar171._24_4_ = (uint)(fVar192 * fVar249) & uVar184;
          auVar171._28_4_ = (uint)(fVar194 * fVar250) & uVar186;
          auVar200._0_4_ = (uint)(fVar195 * fVar239) & uVar26;
          auVar200._4_4_ = (uint)(fVar204 * fVar244) & uVar158;
          auVar200._8_4_ = (uint)(fVar205 * fVar245) & uVar29;
          auVar200._12_4_ = (uint)(fVar206 * fVar246) & uVar140;
          auVar200._16_4_ = (uint)(fVar207 * fVar247) & uVar180;
          auVar200._20_4_ = (uint)(fVar209 * fVar248) & uVar182;
          auVar200._24_4_ = (uint)(fVar210 * fVar249) & uVar184;
          auVar200._28_4_ = (uint)(fVar211 * fVar250) & uVar186;
          auVar222._0_4_ = (uint)(fVar269 * fVar239) & uVar26;
          auVar222._4_4_ = (uint)(fVar283 * fVar244) & uVar158;
          auVar222._8_4_ = (uint)(fVar284 * fVar245) & uVar29;
          auVar222._12_4_ = (uint)(fVar285 * fVar246) & uVar140;
          auVar222._16_4_ = (uint)(fVar286 * fVar247) & uVar180;
          auVar222._20_4_ = (uint)(fVar287 * fVar248) & uVar182;
          auVar222._24_4_ = (uint)(fVar288 * fVar249) & uVar184;
          auVar222._28_4_ = (uint)(fVar289 * fVar250) & uVar186;
          auVar214 = vcmpps_avx(auVar81,auVar234,6);
          auVar235._0_4_ = auVar214._0_4_ & (uint)__real_3f800000;
          auVar235._4_4_ = auVar214._4_4_ & (uint)__real_3f800000;
          auVar235._8_4_ = auVar214._8_4_ & (uint)__real_3f800000;
          auVar235._12_4_ = auVar214._12_4_ & (uint)__real_3f800000;
          auVar235._16_4_ = auVar214._16_4_ & (uint)__real_3f800000;
          auVar235._20_4_ = auVar214._20_4_ & (uint)__real_3f800000;
          auVar235._24_4_ = auVar214._24_4_ & (uint)__real_3f800000;
          auVar235._28_4_ = auVar214._28_4_ & (uint)__real_3f800000;
          auVar60._16_16_ = auVar188;
          auVar60._0_16_ = auVar230;
          _local_3e0 = vmaskmovps_avx(auVar60,auVar124);
          _local_3c0 = vmaskmovps_avx(auVar60,auVar171);
          _local_3a0 = vmaskmovps_avx(auVar60,auVar200);
          _local_380 = vmaskmovps_avx(auVar60,auVar222 | auVar235);
        }
      }
      local_220 = vshufps_avx(auVar198,auVar215,0x88);
      auVar201._16_16_ = _local_380;
      auVar201._0_16_ = local_3a0._0_16_;
      auVar251 = vperm2f128_avx(_local_3a0,_local_380,0x31);
      auVar241._16_16_ = _local_3c0;
      auVar241._0_16_ = local_3e0._0_16_;
      auVar257 = vperm2f128_avx(_local_3e0,_local_3c0,0x31);
      auVar261._16_16_ = local_3a0._0_16_;
      auVar261._0_16_ = _local_380;
      auVar214 = vshufps_avx(auVar261,auVar261,0x14);
      auVar292._8_8_ = local_3a0;
      auVar292._0_8_ = local_3a0;
      auVar292._16_8_ = local_380;
      auVar292._24_8_ = local_380;
      auVar214 = vblendps_avx(auVar292,auVar214,0x48);
      auVar293._16_16_ = local_3e0._0_16_;
      auVar293._0_16_ = _local_3c0;
      auVar290 = vshufps_avx(auVar293,auVar293,0xe1);
      auVar290 = vblendps_avx(auVar241,auVar290,0x12);
      local_180 = vblendps_avx(auVar290,auVar214,0xcc);
      auVar214 = vshufps_avx(auVar261,auVar261,0xb4);
      auVar214 = vblendps_avx(auVar201,auVar214,0x48);
      auVar164 = vshufps_avx(auVar293,auVar293,0xeb);
      auVar290 = vshufpd_avx(auVar241,auVar241,5);
      auVar290 = vblendps_avx(auVar290,auVar164,0x12);
      local_160 = vblendps_avx(auVar290,auVar214,0xcc);
      auVar164 = vperm2f128_avx(_local_380,_local_3a0,0x31);
      auVar214 = vshufps_avx(auVar164,auVar164,0x14);
      auVar223._8_8_ = auVar251._0_8_;
      auVar223._0_8_ = auVar251._0_8_;
      auVar223._16_8_ = auVar251._16_8_;
      auVar223._24_8_ = auVar251._16_8_;
      auVar214 = vblendps_avx(auVar223,auVar214,0x48);
      auVar270 = vperm2f128_avx(_local_3c0,_local_3e0,0x31);
      auVar290 = vshufps_avx(auVar270,auVar270,0xe1);
      auVar290 = vblendps_avx(auVar257,auVar290,0x12);
      local_140 = vblendps_avx(auVar290,auVar214,0xcc);
      auVar214 = vshufps_avx(auVar164,auVar164,0xb4);
      auVar214 = vblendps_avx(auVar251,auVar214,0x48);
      auVar164 = vshufps_avx(auVar270,auVar270,0xeb);
      auVar290 = vshufpd_avx(auVar257,auVar257,5);
      auVar290 = vblendps_avx(auVar290,auVar164,0x12);
      local_120 = vblendps_avx(auVar290,auVar214,0xcc);
      uVar34 = 0xff;
      do {
        uVar26 = 0;
        for (uVar22 = uVar34; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x8000000000000000) {
          uVar26 = uVar26 + 1;
        }
        bVar1 = (byte)uVar26 & 0x3f;
        iVar43 = *(int *)(local_220 + (ulonglong)(uVar26 & 7) * 4);
        auVar214 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar26 << 4)));
        *(undefined1 (*) [16])(param_1 + (longlong)iVar43 * 0x60) = auVar214._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x10 + (longlong)iVar43 * 0x60) = auVar214._16_16_;
        uVar34 = uVar34 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
      } while (uVar34 != 0);
      uVar46 = uVar46 + 8;
    } while ((int)uVar46 < (int)(uVar32 & 0xfffffff8));
  }
  if ((int)param_9 <= (int)uVar46) {
    return;
  }
  auVar212 = vpshufd_avx(ZEXT416(uVar46),0);
  auVar61._16_16_ = auVar212;
  auVar61._0_16_ = auVar212;
  auVar21 = vpshufd_avx(ZEXT416(param_9),0);
  auVar163 = SUB3216(auVar61 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar188 = SUB3216(auVar61 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar101 = vpcmpgtd_avx(auVar21,auVar188);
  auVar105 = vpcmpgtd_avx(auVar21,auVar163);
  auVar62._16_16_ = auVar101;
  auVar62._0_16_ = auVar105;
  auVar230 = vpslld_avx(auVar212,3);
  uVar29 = auVar105._0_4_;
  auVar231._0_4_ = uVar29 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  uVar140 = auVar105._4_4_;
  auVar231._4_4_ = uVar140 & _UNK_150b519c4;
  uVar180 = auVar105._8_4_;
  auVar231._8_4_ = uVar180 & _UNK_150b519c8;
  uVar182 = auVar105._12_4_;
  auVar231._12_4_ = uVar182 & _UNK_150b519cc;
  uVar184 = auVar101._0_4_;
  auVar212 = vpand_avx(auVar101,auVar230);
  lVar39 = auVar212._0_4_ + param_2;
  auVar212 = vpand_avx(auVar105,auVar230);
  uVar46 = *(uint *)(param_2 + auVar212._0_4_);
  vextractps_avx(auVar231,1);
  vextractps_avx(auVar231,2);
  vextractps_avx(auVar231,3);
  auVar231 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)(uVar184 & _UNK_150b519f0) + lVar39)),4);
  auVar212 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)
                                          (uVar29 & 
                                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004
                                          ) + param_2 + auVar212._0_4_)),4);
  auVar212 = vpand_avx(auVar105,auVar212);
  uVar32 = *(uint *)((longlong)param_3 +
                    (ulonglong)
                    (uVar29 & 
                    ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c) +
                    (longlong)auVar212._0_4_);
  auVar230 = ZEXT416(*(uint *)((longlong)param_3 +
                              (ulonglong)
                              (uVar29 & 
                              ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                              ) + (longlong)auVar212._0_4_));
  auVar54 = ZEXT416(uVar32);
  auVar212 = vpand_avx(auVar101,auVar231);
  uVar26 = *(uint *)((longlong)param_3 +
                    (ulonglong)(uVar184 & _UNK_150b50d70) + (longlong)auVar212._0_4_);
  uVar158 = *(uint *)((longlong)param_3 +
                     (ulonglong)(uVar184 & _UNK_150b50d90) + (longlong)auVar212._0_4_);
  auVar160._4_4_ = __real_00000001;
  auVar160._0_4_ = __real_00000001;
  auVar160._8_4_ = __real_00000001;
  auVar160._12_4_ = __real_00000001;
  auVar212 = vpcmpeqd_avx(auVar160,ZEXT416(uVar158));
  auVar105 = vpcmpeqd_avx(auVar54,auVar160);
  auVar82._16_16_ = auVar212;
  auVar82._0_16_ = auVar105;
  auVar62 = auVar62 & auVar82;
  auVar212 = ZEXT416(uVar158);
  if ((((((((SUB321(auVar62 >> 0x1f,0) & 1) != 0 || (SUB321(auVar62 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar62 >> 0x5f,0) & 1) != 0) || SUB321(auVar62 >> 0x7f,0) != '\0') ||
        (SUB321(auVar62 >> 0x9f,0) & 1) != 0) || SUB321(auVar62 >> 0xbf,0) != '\0') ||
      (SUB321(auVar62 >> 0xdf,0) & 1) != 0) || auVar62[0x1f] < '\0') {
    auVar105 = vpcmpeqd_avx(auVar212,auVar160);
    auVar231 = vpcmpeqd_avx(auVar54,auVar160);
    auVar83._0_4_ = auVar231._0_4_ & uVar29;
    auVar83._4_4_ = auVar231._4_4_ & uVar140;
    auVar83._8_4_ = auVar231._8_4_ & uVar180;
    auVar83._12_4_ = auVar231._12_4_ & uVar182;
    auVar83._16_4_ = auVar105._0_4_ & uVar184;
    auVar83._20_4_ = auVar105._4_4_ & auVar101._4_4_;
    auVar83._24_4_ = auVar105._8_4_ & auVar101._8_4_;
    auVar83._28_4_ = auVar105._12_4_ & auVar101._12_4_;
    auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),ZEXT2032(CONCAT416(uVar26,auVar230)),
                            auVar83);
    auVar102 = auVar56._0_16_;
    iVar47 = vextractps_avx(auVar102,0);
    iVar44 = vextractps_avx(auVar102,1);
    auVar105 = auVar56._16_16_;
    iVar43 = vextractps_avx(auVar105,0);
    lVar33 = (longlong)iVar43;
    iVar43 = vextractps_avx(auVar105,1);
    lVar35 = (longlong)iVar43;
    iVar43 = vextractps_avx(auVar105,2);
    lVar42 = (longlong)iVar43;
    iVar38 = vextractps_avx(auVar105,3);
    auVar23._4_4_ = _UNK_150b50d44;
    auVar23._0_4_ = ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
    auVar23._8_4_ = _UNK_150b50d48;
    auVar23._12_4_ = _UNK_150b50d4c;
    auVar23._16_4_ = _UNK_150b50d50;
    auVar23._20_4_ = _UNK_150b50d54;
    auVar23._24_4_ = _UNK_150b50d58;
    auVar23._28_4_ = _UNK_150b50d5c;
    auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar23,auVar83);
    auVar162 = auVar56._0_16_;
    auVar231 = auVar56._16_16_;
    iVar51 = vextractps_avx(auVar231,0);
    iVar43 = vextractps_avx(auVar231,1);
    iVar52 = vextractps_avx(auVar231,2);
    auVar105 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar51 + lVar33)),
                             ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar35)),0x10);
    iVar53 = vextractps_avx(auVar231,3);
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)((longlong)param_4 + iVar52 + lVar42)),0x20);
    auVar24._4_4_ = _UNK_150b50d64;
    auVar24._0_4_ = ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
    auVar24._8_4_ = _UNK_150b50d68;
    auVar24._12_4_ = _UNK_150b50d6c;
    auVar24._16_4_ = _UNK_150b50d70;
    auVar24._20_4_ = _UNK_150b50d74;
    auVar24._24_4_ = _UNK_150b50d78;
    auVar24._28_4_ = _UNK_150b50d7c;
    auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar24,auVar83);
    auVar70 = auVar56._0_16_;
    auVar55 = auVar56._16_16_;
    iVar51 = vextractps_avx(auVar55,0);
    iVar43 = vextractps_avx(auVar55,1);
    auVar231 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar51 + lVar33)),
                             ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar35)),0x10);
    iVar43 = vextractps_avx(auVar55,2);
    lVar48 = (longlong)iVar47;
    auVar231 = vinsertps_avx(auVar231,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar42)),0x20);
    iVar43 = vextractps_avx(auVar102,2);
    lVar40 = (longlong)iVar38;
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)((longlong)param_4 + iVar53 + lVar40)),0x30);
    lVar45 = (longlong)iVar44;
    iVar38 = vextractps_avx(auVar55,3);
    auVar231 = vinsertps_avx(auVar231,ZEXT416(*(uint *)((longlong)param_4 + iVar38 + lVar40)),0x30);
    iVar38 = vextractps_avx(auVar102,3);
    iVar44 = vextractps_avx(auVar162,0);
    iVar47 = vextractps_avx(auVar70,0);
    iVar51 = vextractps_avx(auVar162,1);
    auVar102 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar44 + lVar48)),
                             ZEXT416(*(uint *)((longlong)param_4 + iVar51 + lVar45)),0x10);
    iVar44 = vextractps_avx(auVar70,1);
    lVar37 = (longlong)iVar43;
    auVar55 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar47 + lVar48)),
                            ZEXT416(*(uint *)((longlong)param_4 + iVar44 + lVar45)),0x10);
    iVar43 = vextractps_avx(auVar162,2);
    auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar37)),0x20);
    iVar43 = vextractps_avx(auVar70,2);
    lVar50 = (longlong)iVar38;
    auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar37)),0x20);
    iVar43 = vextractps_avx(auVar162,3);
    auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar50)),0x30);
    iVar43 = vextractps_avx(auVar70,3);
    auVar55 = vinsertps_avx(auVar55,ZEXT416(*(uint *)((longlong)param_4 + iVar43 + lVar50)),0x30);
    auVar162 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar33)),
                             ZEXT416(*(uint *)((longlong)param_4 + lVar35)),0x10);
    auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)((longlong)param_4 + lVar42)),0x20);
    auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)((longlong)param_4 + lVar40)),0x30);
    auVar70 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar48)),
                            ZEXT416(*(uint *)((longlong)param_4 + lVar45)),0x10);
    auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)((longlong)param_4 + lVar37)),0x20);
    auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)((longlong)param_4 + lVar50)),0x30);
    auVar254._16_16_ = auVar162;
    auVar254._0_16_ = auVar70;
    auVar125._16_16_ = auVar105;
    auVar125._0_16_ = auVar102;
    auVar242._16_16_ = auVar231;
    auVar242._0_16_ = auVar55;
    auVar262._0_4_ = auVar70._0_4_ * auVar70._0_4_;
    auVar262._4_4_ = auVar70._4_4_ * auVar70._4_4_;
    auVar262._8_4_ = auVar70._8_4_ * auVar70._8_4_;
    auVar262._12_4_ = auVar70._12_4_ * auVar70._12_4_;
    auVar262._16_4_ = auVar162._0_4_ * auVar162._0_4_;
    auVar262._20_4_ = auVar162._4_4_ * auVar162._4_4_;
    auVar262._24_4_ = auVar162._8_4_ * auVar162._8_4_;
    auVar262._28_4_ = auVar162._12_4_ * auVar162._12_4_;
    auVar273._4_4_ = __real_3f800000;
    auVar273._0_4_ = __real_3f800000;
    auVar273._8_4_ = __real_3f800000;
    auVar273._12_4_ = __real_3f800000;
    auVar273._16_4_ = __real_3f800000;
    auVar273._20_4_ = __real_3f800000;
    auVar273._24_4_ = __real_3f800000;
    auVar273._28_4_ = __real_3f800000;
    auVar56 = vsubps_avx(auVar273,auVar262);
    auVar274._0_4_ = auVar102._0_4_ * auVar102._0_4_;
    auVar274._4_4_ = auVar102._4_4_ * auVar102._4_4_;
    auVar274._8_4_ = auVar102._8_4_ * auVar102._8_4_;
    auVar274._12_4_ = auVar102._12_4_ * auVar102._12_4_;
    auVar274._16_4_ = auVar105._0_4_ * auVar105._0_4_;
    auVar274._20_4_ = auVar105._4_4_ * auVar105._4_4_;
    auVar274._24_4_ = auVar105._8_4_ * auVar105._8_4_;
    auVar274._28_4_ = auVar105._12_4_ * auVar105._12_4_;
    auVar56 = vsubps_avx(auVar56,auVar274);
    auVar275._0_4_ = auVar55._0_4_ * auVar55._0_4_;
    auVar275._4_4_ = auVar55._4_4_ * auVar55._4_4_;
    auVar275._8_4_ = auVar55._8_4_ * auVar55._8_4_;
    auVar275._12_4_ = auVar55._12_4_ * auVar55._12_4_;
    auVar275._16_4_ = auVar231._0_4_ * auVar231._0_4_;
    auVar275._20_4_ = auVar231._4_4_ * auVar231._4_4_;
    auVar275._24_4_ = auVar231._8_4_ * auVar231._8_4_;
    auVar275._28_4_ = auVar231._12_4_ * auVar231._12_4_;
    auVar64 = vsubps_avx(auVar56,auVar275);
    auVar56 = vcmpps_avx(ZEXT1632((undefined1  [16])0x0),auVar64,1);
    auVar64 = vsqrtps_avx(auVar64);
    auVar172._0_4_ = auVar64._0_4_ & auVar56._0_4_;
    auVar172._4_4_ = auVar64._4_4_ & auVar56._4_4_;
    auVar172._8_4_ = auVar64._8_4_ & auVar56._8_4_;
    auVar172._12_4_ = auVar64._12_4_ & auVar56._12_4_;
    auVar172._16_4_ = auVar64._16_4_ & auVar56._16_4_;
    auVar172._20_4_ = auVar64._20_4_ & auVar56._20_4_;
    auVar172._24_4_ = auVar64._24_4_ & auVar56._24_4_;
    auVar172._28_4_ = auVar64._28_4_ & auVar56._28_4_;
    _local_5c0 = vmaskmovps_avx(auVar83,auVar254);
    _local_5a0 = vmaskmovps_avx(auVar83,auVar125);
    _local_580 = vmaskmovps_avx(auVar83,auVar242);
    _local_560 = vmaskmovps_avx(auVar83,auVar172);
  }
  auVar105 = vpcmpeqd_avx(auVar212,auVar160);
  auVar231 = vpcmpeqd_avx(auVar54,auVar160);
  auVar84._16_16_ = auVar105;
  auVar84._0_16_ = auVar231;
  auVar188 = vpcmpgtd_avx(auVar21,auVar188);
  auVar102 = vpcmpgtd_avx(auVar21,auVar163);
  auVar126._16_16_ = auVar188;
  auVar126._0_16_ = auVar102;
  auVar126 = auVar126 & ~auVar84;
  if ((((((((SUB321(auVar126 >> 0x1f,0) & 1) == 0 && (SUB321(auVar126 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar126 >> 0x5f,0) & 1) == 0) && SUB321(auVar126 >> 0x7f,0) == '\0') &&
        (SUB321(auVar126 >> 0x9f,0) & 1) == 0) && SUB321(auVar126 >> 0xbf,0) == '\0') &&
      (SUB321(auVar126 >> 0xdf,0) & 1) == 0) && -1 < auVar126[0x1f]) goto LAB_140c46ebe;
  auVar102 = vpmovsxdq_avx(ZEXT416(uVar26));
  auVar162 = vpshufd_avx(ZEXT416(uVar26),0xee);
  auVar55 = vpmovsxdq_avx(auVar230);
  auVar230 = vpshufd_avx(auVar230,0xee);
  auVar162 = vpmovsxdq_avx(auVar162);
  auVar70 = vpmovsxdq_avx(auVar230);
  auVar236._0_4_ = ~auVar231._0_4_ & uVar29;
  auVar236._4_4_ = ~auVar231._4_4_ & uVar140;
  auVar236._8_4_ = ~auVar231._8_4_ & uVar180;
  auVar236._12_4_ = ~auVar231._12_4_ & uVar182;
  auVar236._16_4_ = ~auVar105._0_4_ & uVar184;
  auVar236._20_4_ = ~auVar105._4_4_ & auVar101._4_4_;
  auVar236._24_4_ = ~auVar105._8_4_ & auVar101._8_4_;
  auVar236._28_4_ = ~auVar105._12_4_ & auVar101._12_4_;
  auVar101 = vshufps_avx(ZEXT416(uVar27),ZEXT416(uVar27),0);
  auVar105 = vblendps_avx(auVar101,ZEXT816(0) << 0x20,10);
  auVar231 = vpmovzxdq_avx(auVar101);
  auVar297 = vshufps_avx(ZEXT416(uVar28),ZEXT416(uVar28),0);
  auVar101 = vpcmpgtd_avx(auVar212,auVar160);
  auVar230 = vpcmpgtd_avx(auVar54,auVar160);
  auVar160 = vpshufd_avx(ZEXT416(~((0.0 < param_6) - 1)),0);
  auVar208._0_4_ = auVar230._0_4_ & auVar160._0_4_;
  auVar208._4_4_ = auVar230._4_4_ & auVar160._4_4_;
  auVar208._8_4_ = auVar230._8_4_ & auVar160._8_4_;
  auVar208._12_4_ = auVar230._12_4_ & auVar160._12_4_;
  auVar202._16_4_ = auVar101._0_4_ & auVar160._0_4_;
  auVar202._0_16_ = auVar208;
  auVar202._20_4_ = auVar101._4_4_ & auVar160._4_4_;
  auVar202._24_4_ = auVar101._8_4_ & auVar160._8_4_;
  auVar202._28_4_ = auVar101._12_4_ & auVar160._12_4_;
  auVar63._0_4_ = auVar236._0_4_ & auVar208._0_4_;
  auVar63._4_4_ = auVar236._4_4_ & auVar208._4_4_;
  auVar63._8_4_ = auVar236._8_4_ & auVar208._8_4_;
  auVar63._12_4_ = auVar236._12_4_ & auVar208._12_4_;
  auVar63._16_4_ = auVar236._16_4_ & auVar202._16_4_;
  auVar63._20_4_ = auVar236._20_4_ & auVar202._20_4_;
  auVar63._24_4_ = auVar236._24_4_ & auVar202._24_4_;
  auVar63._28_4_ = auVar236._28_4_ & auVar202._28_4_;
  uVar27 = vmovmskps_avx(auVar63);
  if (uVar27 == 0) {
    auVar212 = (undefined1  [16])0x0;
    auVar64 = ZEXT832(0) << 0x20;
    auVar56 = ZEXT1632((undefined1  [16])0x0);
    auVar105 = (undefined1  [16])0x0;
  }
  else {
    auVar101 = vpcmpeqd_avx(auVar208,auVar208);
    auVar8._0_4_ = uVar158 + auVar101._0_4_;
    auVar8._4_4_ = auVar101._4_4_;
    auVar8._8_4_ = auVar101._8_4_;
    auVar8._12_4_ = auVar101._12_4_;
    auVar9._0_4_ = uVar32 + auVar101._0_4_;
    auVar9._4_4_ = auVar101._4_4_;
    auVar9._8_4_ = auVar101._8_4_;
    auVar9._12_4_ = auVar101._12_4_;
    auVar294._16_16_ = auVar8;
    auVar294._0_16_ = auVar9;
    if (param_6 < __real_3f800000) {
      auVar101 = vpmulld_avx(auVar54,auVar297);
      auVar230 = vpmulld_avx(auVar212,auVar297);
      auVar160 = vpmovsxdq_avx(auVar230);
      auVar230 = vpshufd_avx(auVar230,0xee);
      auVar196 = vpmovsxdq_avx(auVar230);
      auVar208 = vpmovsxdq_avx(auVar101);
      auVar101 = vpshufd_avx(auVar101,0xee);
      auVar298 = vpmovsxdq_avx(auVar101);
      auVar240._8_8_ = 0;
      auVar240._0_8_ = (longlong)param_4 + 3;
      auVar101 = vpshufd_avx(auVar240,0x44);
      auVar105 = vpaddq_avx(auVar101,auVar105);
      auVar101 = vpaddq_avx(auVar101,auVar231);
      auVar230 = vpaddq_avx(auVar102,auVar101);
      auVar230 = vpaddq_avx(auVar230,auVar160);
      auVar231 = vpaddq_avx(auVar162,auVar105);
      auVar231 = vpaddq_avx(auVar231,auVar196);
      auVar101 = vpaddq_avx(auVar55,auVar101);
      auVar101 = vpaddq_avx(auVar101,auVar208);
      auVar105 = vpaddq_avx(auVar105,auVar70);
      auVar105 = vpaddq_avx(auVar105,auVar298);
      auVar213._0_4_ = auVar230._0_4_ & (uint)__real_fffffffffffffffc;
      auVar213._4_4_ = auVar230._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar213._8_4_ = auVar230._8_4_ & (uint)__real_fffffffffffffffc;
      auVar213._12_4_ = auVar230._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar224._16_4_ = auVar231._0_4_ & (uint)__real_fffffffffffffffc;
      auVar224._0_16_ = auVar213;
      auVar224._20_4_ = auVar231._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar224._24_4_ = auVar231._8_4_ & (uint)__real_fffffffffffffffc;
      auVar224._28_4_ = auVar231._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar299._0_4_ = auVar101._0_4_ & (uint)__real_fffffffffffffffc;
      auVar299._4_4_ = auVar101._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar299._8_4_ = auVar101._8_4_ & (uint)__real_fffffffffffffffc;
      auVar299._12_4_ = auVar101._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar303._16_4_ = auVar105._0_4_ & (uint)__real_fffffffffffffffc;
      auVar303._0_16_ = auVar299;
      auVar303._20_4_ = auVar105._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar303._24_4_ = auVar105._8_4_ & (uint)__real_fffffffffffffffc;
      auVar303._28_4_ = auVar105._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar105 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
      auVar56 = vcvtdq2ps_avx(auVar294);
      param_6 = param_6 * (float)(param_5 + -1);
      uVar32 = (uint)param_6;
      uVar28 = 0;
      if (0 < (int)uVar32) {
        uVar28 = uVar32;
      }
      if ((int)(param_5 - 2U) < (int)uVar28) {
        uVar28 = param_5 - 2U;
      }
      auVar72._0_4_ = (int)(auVar105._0_4_ * auVar56._0_4_);
      auVar72._4_4_ = (int)(auVar105._4_4_ * auVar56._4_4_);
      auVar72._8_4_ = (int)(auVar105._8_4_ * auVar56._8_4_);
      auVar72._12_4_ = (int)(auVar105._12_4_ * auVar56._12_4_);
      auVar85._16_4_ = (int)(auVar105._0_4_ * auVar56._16_4_);
      auVar85._0_16_ = auVar72;
      auVar85._20_4_ = (int)(auVar105._4_4_ * auVar56._20_4_);
      auVar85._24_4_ = (int)(auVar105._8_4_ * auVar56._24_4_);
      auVar85._28_4_ = (int)(auVar105._12_4_ * auVar56._28_4_);
      auVar105 = vpmaxsd_avx(auVar85._16_16_,ZEXT816(0) << 0x20);
      auVar101 = vpmaxsd_avx(auVar72,ZEXT816(0) << 0x20);
      auVar230 = vpminsd_avx(auVar105,auVar8);
      auVar231 = vpminsd_avx(auVar101,auVar9);
      auVar174._16_16_ = auVar230;
      auVar174._0_16_ = auVar231;
      auVar306 = ZEXT3264(auVar174);
      auVar102 = auVar224._16_16_;
      auVar160 = auVar303._16_16_;
      cVar49 = (char)uVar27;
      if (param_5 < 0x100) {
        auVar162 = vpmovsxdq_avx(auVar231);
        auVar55 = vpshufd_avx(auVar231,0xee);
        auVar55 = vpmovsxdq_avx(auVar55);
        auVar55 = vpaddq_avx(auVar160,auVar55);
        auVar162 = vpaddq_avx(auVar299,auVar162);
        auVar70 = auVar162;
        if ((uVar27 & 1) != 0) {
          auVar70 = ZEXT116(*auVar162._0_8_);
        }
        auVar196 = vpmovsxdq_avx(auVar230);
        auVar208 = vpshufd_avx(auVar230,0xee);
        if ((uVar27 & 2) != 0) {
          auVar162 = vpinsrb_avx(auVar70,(uint)*auVar162._8_8_,1);
          auVar70 = vpblendw_avx(auVar162,auVar70,0xe);
        }
        auVar208 = vpmovsxdq_avx(auVar208);
        auVar162 = vpaddq_avx(auVar196,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar196 = vpaddq_avx(auVar208,auVar102);
        }
        else {
          auVar196 = vpmovzxwd_avx(auVar70);
          auVar196 = vpinsrb_avx(auVar196,(uint)*auVar55._0_8_,2);
          auVar196 = vpinsrb_avx(auVar196,(uint)auVar70[3],3);
          auVar70 = vpblendw_avx(auVar196,auVar70,0xc);
          auVar196 = vpaddq_avx(auVar208,auVar102);
        }
        if ((uVar27 & 8) != 0) {
          auVar208 = vpmovzxwd_avx(auVar70);
          auVar208 = vpinsrb_avx(auVar208,(uint)auVar70[2],2);
          auVar55 = vpinsrb_avx(auVar208,(uint)*auVar55._8_8_,3);
          auVar70 = vpblendw_avx(auVar55,auVar70,0xc);
        }
        if ((uVar27 & 0x10) != 0) {
          auVar55 = vpshufb_avx(auVar70,___xmm_80800706808005048080030203020100);
          auVar55 = vpinsrb_avx(auVar55,(uint)*auVar162._0_8_,4);
          auVar55 = vpinsrb_avx(auVar55,(uint)auVar70[5],5);
          auVar70 = vpblendw_avx(auVar55,auVar70,8);
        }
        if ((uVar27 & 0x20) != 0) {
          auVar55 = vpshufb_avx(auVar70,___xmm_80800706808005048080030403020100);
          auVar55 = vpinsrb_avx(auVar55,(uint)*auVar162._8_8_,5);
          auVar70 = vpblendw_avx(auVar55,auVar70,8);
        }
        if ((uVar27 & 0x40) != 0) {
          auVar55 = vpshufb_avx(auVar70,___xmm_80800706808005048080050403020100);
          auVar55 = vpinsrb_avx(auVar55,(uint)*auVar196._0_8_,6);
          auVar70 = vpinsrb_avx(auVar55,(uint)auVar70[7],7);
        }
        if (cVar49 < '\0') {
          auVar55 = vpshufb_avx(auVar70,___xmm_80800706808005048006050403020100);
          auVar70 = vpinsrb_avx(auVar55,(uint)*auVar196._8_8_,7);
        }
        auVar208 = vpmovzxbd_avx(auVar70);
        auVar55 = vpshufd_avx(auVar70,0x55);
        auVar298 = vpmovzxbd_avx(auVar55);
        auVar304 = vpshufd_avx(ZEXT416(uVar28),0);
        auVar162 = vpcmpgtd_avx(auVar298,auVar304);
        auVar55 = vpcmpeqd_avx(auVar196,auVar196);
        auVar196 = auVar162 ^ auVar55;
        auVar70 = vpcmpgtd_avx(auVar208,auVar304);
        auVar55 = auVar70 ^ auVar55;
        auVar175._16_16_ = auVar196;
        auVar175._0_16_ = auVar55;
        auVar89._16_16_ = auVar162;
        auVar89._0_16_ = auVar70;
        auVar64 = auVar63 & ~auVar89;
        local_520 = auVar55._0_4_;
        uStack_51c = auVar55._4_4_;
        uStack_518 = auVar55._8_4_;
        uStack_514 = auVar55._12_4_;
        uStack_510 = auVar196._0_4_;
        uStack_50c = auVar196._4_4_;
        uStack_508 = auVar196._8_4_;
        uStack_504 = auVar196._12_4_;
        auVar56 = auVar174;
        if ((((((((SUB321(auVar64 >> 0x1f,0) & 1) != 0 || (SUB321(auVar64 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar64 >> 0x5f,0) & 1) != 0) || SUB321(auVar64 >> 0x7f,0) != '\0') ||
              (SUB321(auVar64 >> 0x9f,0) & 1) != 0) || SUB321(auVar64 >> 0xbf,0) != '\0') ||
            (SUB321(auVar64 >> 0xdf,0) & 1) != 0) || auVar64[0x1f] < '\0') {
          auVar55 = vpcmpgtd_avx(auVar298,auVar304);
          auVar162 = vpcmpgtd_avx(auVar208,auVar304);
          auVar90._16_16_ = auVar55;
          auVar90._0_16_ = auVar162;
          auVar56 = vblendvps_avx(auVar294,auVar174,auVar90);
          auVar105 = vpcmpgtd_avx(auVar8,auVar105);
          auVar101 = vpcmpgtd_avx(auVar9,auVar101);
          uVar28 = auVar101._0_4_ & local_520;
          uVar32 = auVar101._4_4_ & uStack_51c;
          uVar26 = auVar101._8_4_ & uStack_518;
          uVar158 = auVar101._12_4_ & uStack_514;
          uVar29 = auVar105._0_4_ & uStack_510;
          uVar140 = auVar105._4_4_ & uStack_50c;
          uVar180 = auVar105._8_4_ & uStack_508;
          uVar182 = auVar105._12_4_ & uStack_504;
          auVar127._0_4_ = uVar28 & auVar63._0_4_;
          auVar127._4_4_ = uVar32 & auVar63._4_4_;
          auVar127._8_4_ = uVar26 & auVar63._8_4_;
          auVar127._12_4_ = uVar158 & auVar63._12_4_;
          auVar127._16_4_ = uVar29 & auVar63._16_4_;
          auVar127._20_4_ = uVar140 & auVar63._20_4_;
          auVar127._24_4_ = uVar180 & auVar63._24_4_;
          auVar127._28_4_ = uVar182 & auVar63._28_4_;
          iVar43 = vmovmskps_avx(auVar127);
          if (iVar43 != 0) {
            auVar105 = vpcmpeqd_avx(auVar101,auVar101);
            do {
              auVar70 = vpsubd_avx(auVar174._0_16_,auVar105);
              auVar55 = vpmovsxdq_avx(auVar70);
              auVar101 = vpshufd_avx(auVar70,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar160,auVar101);
              auVar55 = vpaddq_avx(auVar299,auVar55);
              uVar186 = vmovmskps_avx(auVar127);
              auVar162 = auVar55;
              if ((uVar186 & 1) != 0) {
                auVar162 = ZEXT116(*auVar55._0_8_);
              }
              if ((uVar186 & 2) != 0) {
                auVar55 = vpinsrb_avx(auVar162,(uint)*auVar55._8_8_,1);
                auVar162 = vpblendw_avx(auVar55,auVar162,0xe);
              }
              if ((uVar186 & 4) != 0) {
                auVar55 = vpmovzxwd_avx(auVar162);
                auVar55 = vpinsrb_avx(auVar55,(uint)*auVar101._0_8_,2);
                auVar55 = vpinsrb_avx(auVar55,(uint)auVar162[3],3);
                auVar162 = vpblendw_avx(auVar55,auVar162,0xc);
              }
              if ((uVar186 & 8) != 0) {
                auVar55 = vpmovzxwd_avx(auVar162);
                auVar55 = vpinsrb_avx(auVar55,(uint)auVar162[2],2);
                auVar101 = vpinsrb_avx(auVar55,(uint)*auVar101._8_8_,3);
                auVar162 = vpblendw_avx(auVar101,auVar162,0xc);
              }
              auVar196 = vpsubd_avx(auVar174._16_16_,auVar105);
              auVar55 = vpmovsxdq_avx(auVar196);
              auVar101 = vpshufd_avx(auVar196,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar101,auVar102);
              auVar55 = vpaddq_avx(auVar55,auVar213);
              if ((uVar186 & 0x10) != 0) {
                auVar310 = vpshufb_avx(auVar162,___xmm_80800706808005048080030203020100);
                auVar310 = vpinsrb_avx(auVar310,(uint)*auVar55._0_8_,4);
                auVar310 = vpinsrb_avx(auVar310,(uint)auVar162[5],5);
                auVar162 = vpblendw_avx(auVar310,auVar162,8);
              }
              if ((uVar186 & 0x20) != 0) {
                auVar310 = vpshufb_avx(auVar162,___xmm_80800706808005048080030403020100);
                auVar55 = vpinsrb_avx(auVar310,(uint)*auVar55._8_8_,5);
                auVar162 = vpblendw_avx(auVar55,auVar162,8);
              }
              if ((uVar186 & 0x40) != 0) {
                auVar55 = vpshufb_avx(auVar162,___xmm_80800706808005048080050403020100);
                auVar55 = vpinsrb_avx(auVar55,(uint)*auVar101._0_8_,6);
                auVar162 = vpinsrb_avx(auVar55,(uint)auVar162[7],7);
              }
              if ((char)uVar186 < '\0') {
                auVar55 = vpshufb_avx(auVar162,___xmm_80800706808005048006050403020100);
                auVar162 = vpinsrb_avx(auVar55,(uint)*auVar101._8_8_,7);
              }
              auVar55 = vpmovzxbd_avx(auVar162);
              auVar101 = vpshufd_avx(auVar162,0x55);
              auVar101 = vpmovzxbd_avx(auVar101);
              auVar101 = vpcmpgtd_avx(auVar101,auVar304);
              auVar55 = vpcmpgtd_avx(auVar55,auVar304);
              auVar277._0_4_ = uVar28 & auVar55._0_4_;
              auVar277._4_4_ = uVar32 & auVar55._4_4_;
              auVar277._8_4_ = uVar26 & auVar55._8_4_;
              auVar277._12_4_ = uVar158 & auVar55._12_4_;
              auVar277._16_4_ = uVar29 & auVar101._0_4_;
              auVar277._20_4_ = uVar140 & auVar101._4_4_;
              auVar277._24_4_ = uVar180 & auVar101._8_4_;
              auVar277._28_4_ = uVar182 & auVar101._12_4_;
              uVar186 = 0;
              uVar189 = 0;
              uVar191 = 0;
              uVar193 = 0;
              uVar143 = 0;
              uVar146 = 0;
              uVar149 = 0;
              uVar152 = 0;
              auVar264._0_4_ = auVar277._0_4_ & auVar63._0_4_;
              auVar264._4_4_ = auVar277._4_4_ & auVar63._4_4_;
              auVar264._8_4_ = auVar277._8_4_ & auVar63._8_4_;
              auVar264._12_4_ = auVar277._12_4_ & auVar63._12_4_;
              auVar264._16_4_ = auVar277._16_4_ & auVar63._16_4_;
              auVar264._20_4_ = auVar277._20_4_ & auVar63._20_4_;
              auVar264._24_4_ = auVar277._24_4_ & auVar63._24_4_;
              auVar264._28_4_ = auVar277._28_4_ & auVar63._28_4_;
              uVar30 = vmovmskps_avx(auVar264);
              if ((char)iVar43 != (char)uVar30) {
                uVar152 = auVar277._0_4_ ^ uVar28;
                uVar186 = auVar277._4_4_ ^ uVar32;
                uVar189 = auVar277._8_4_ ^ uVar26;
                uVar191 = auVar277._12_4_ ^ uVar158;
                uVar193 = auVar277._16_4_ ^ uVar29;
                uVar143 = auVar277._20_4_ ^ uVar140;
                uVar146 = auVar277._24_4_ ^ uVar180;
                uVar149 = auVar277._28_4_ ^ uVar182;
              }
              auVar56 = vblendvps_avx(auVar56,auVar174,auVar277);
              auVar174._16_16_ = auVar196;
              auVar174._0_16_ = auVar70;
              auVar101 = vpcmpgtd_avx(auVar8,auVar196);
              auVar55 = vpcmpgtd_avx(auVar9,auVar70);
              uVar28 = auVar55._0_4_ & uVar152;
              uVar32 = auVar55._4_4_ & uVar186;
              uVar26 = auVar55._8_4_ & uVar189;
              uVar158 = auVar55._12_4_ & uVar191;
              uVar29 = auVar101._0_4_ & uVar193;
              uVar140 = auVar101._4_4_ & uVar143;
              uVar180 = auVar101._8_4_ & uVar146;
              uVar182 = auVar101._12_4_ & uVar149;
              auVar127._0_4_ = uVar28 & auVar63._0_4_;
              auVar127._4_4_ = uVar32 & auVar63._4_4_;
              auVar127._8_4_ = uVar26 & auVar63._8_4_;
              auVar127._12_4_ = uVar158 & auVar63._12_4_;
              auVar127._16_4_ = uVar29 & auVar63._16_4_;
              auVar127._20_4_ = uVar140 & auVar63._20_4_;
              auVar127._24_4_ = uVar180 & auVar63._24_4_;
              auVar127._28_4_ = uVar182 & auVar63._28_4_;
              iVar43 = vmovmskps_avx(auVar127);
            } while (iVar43 != 0);
          }
        }
        auVar105 = vpcmpgtd_avx(auVar298,auVar304);
        auVar101 = vpcmpgtd_avx(auVar208,auVar304);
        auVar92._16_16_ = auVar105;
        auVar92._0_16_ = auVar101;
        auVar92 = auVar92 & auVar63;
        if ((((((((SUB321(auVar92 >> 0x1f,0) & 1) != 0 || (SUB321(auVar92 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar92 >> 0x5f,0) & 1) != 0) || SUB321(auVar92 >> 0x7f,0) != '\0') ||
              (SUB321(auVar92 >> 0x9f,0) & 1) != 0) || SUB321(auVar92 >> 0xbf,0) != '\0') ||
            (SUB321(auVar92 >> 0xdf,0) & 1) != 0) || auVar92[0x1f] < '\0') {
          auVar56 = vblendvps_avx(ZEXT832(0) << 0x20,auVar56,auVar175);
          auVar104._4_4_ = __real_00000001;
          auVar104._0_4_ = __real_00000001;
          auVar104._8_4_ = __real_00000001;
          auVar104._12_4_ = __real_00000001;
          auVar105 = vpcmpgtd_avx(auVar230,auVar104);
          auVar101 = vpcmpgtd_avx(auVar231,auVar104);
          uVar28 = ~local_520 & auVar101._0_4_;
          uVar32 = ~uStack_51c & auVar101._4_4_;
          uVar26 = ~uStack_518 & auVar101._8_4_;
          uVar158 = ~uStack_514 & auVar101._12_4_;
          uVar29 = ~uStack_510 & auVar105._0_4_;
          uVar140 = ~uStack_50c & auVar105._4_4_;
          uVar180 = ~uStack_508 & auVar105._8_4_;
          uVar182 = ~uStack_504 & auVar105._12_4_;
          auVar129._0_4_ = uVar28 & auVar63._0_4_;
          auVar129._4_4_ = uVar32 & auVar63._4_4_;
          auVar129._8_4_ = uVar26 & auVar63._8_4_;
          auVar129._12_4_ = uVar158 & auVar63._12_4_;
          auVar129._16_4_ = uVar29 & auVar63._16_4_;
          auVar129._20_4_ = uVar140 & auVar63._20_4_;
          auVar129._24_4_ = uVar180 & auVar63._24_4_;
          auVar129._28_4_ = uVar182 & auVar63._28_4_;
          iVar43 = vmovmskps_avx(auVar129);
          if (iVar43 != 0) {
            auVar105 = vpcmpeqd_avx(auVar101,auVar101);
            auVar308._4_4_ = __real_00000002;
            auVar308._0_4_ = __real_00000002;
            auVar308._8_4_ = __real_00000002;
            auVar308._12_4_ = __real_00000002;
            do {
              auVar16._0_4_ = auVar306._0_4_ + auVar105._0_4_;
              auVar16._4_4_ = auVar306._4_4_ + auVar105._4_4_;
              auVar16._8_4_ = auVar306._8_4_ + auVar105._8_4_;
              auVar16._12_4_ = auVar306._12_4_ + auVar105._12_4_;
              auVar230 = vpmovsxdq_avx(auVar16);
              auVar101 = vpshufd_avx(auVar16,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar160,auVar101);
              auVar230 = vpaddq_avx(auVar299,auVar230);
              uVar186 = vmovmskps_avx(auVar129);
              auVar231 = auVar230;
              if ((uVar186 & 1) != 0) {
                auVar231 = ZEXT116(*auVar230._0_8_);
              }
              if ((uVar186 & 2) != 0) {
                auVar230 = vpinsrb_avx(auVar231,(uint)*auVar230._8_8_,1);
                auVar231 = vpblendw_avx(auVar230,auVar231,0xe);
              }
              if ((uVar186 & 4) != 0) {
                auVar230 = vpmovzxwd_avx(auVar231);
                auVar230 = vpinsrb_avx(auVar230,(uint)*auVar101._0_8_,2);
                auVar230 = vpinsrb_avx(auVar230,(uint)auVar231[3],3);
                auVar231 = vpblendw_avx(auVar230,auVar231,0xc);
              }
              if ((uVar186 & 8) != 0) {
                auVar230 = vpmovzxwd_avx(auVar231);
                auVar230 = vpinsrb_avx(auVar230,(uint)auVar231[2],2);
                auVar101 = vpinsrb_avx(auVar230,(uint)*auVar101._8_8_,3);
                auVar231 = vpblendw_avx(auVar101,auVar231,0xc);
              }
              auVar17._0_4_ = auVar306._16_4_ + auVar105._0_4_;
              auVar17._4_4_ = auVar306._20_4_ + auVar105._4_4_;
              auVar17._8_4_ = auVar306._24_4_ + auVar105._8_4_;
              auVar17._12_4_ = auVar306._28_4_ + auVar105._12_4_;
              auVar230 = vpmovsxdq_avx(auVar17);
              auVar101 = vpshufd_avx(auVar17,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar101,auVar102);
              auVar230 = vpaddq_avx(auVar230,auVar213);
              if ((uVar186 & 0x10) != 0) {
                auVar55 = vpshufb_avx(auVar231,___xmm_80800706808005048080030203020100);
                auVar55 = vpinsrb_avx(auVar55,(uint)*auVar230._0_8_,4);
                auVar55 = vpinsrb_avx(auVar55,(uint)auVar231[5],5);
                auVar231 = vpblendw_avx(auVar55,auVar231,8);
              }
              if ((uVar186 & 0x20) != 0) {
                auVar55 = vpshufb_avx(auVar231,___xmm_80800706808005048080030403020100);
                auVar230 = vpinsrb_avx(auVar55,(uint)*auVar230._8_8_,5);
                auVar231 = vpblendw_avx(auVar230,auVar231,8);
              }
              if ((uVar186 & 0x40) != 0) {
                auVar230 = vpshufb_avx(auVar231,___xmm_80800706808005048080050403020100);
                auVar230 = vpinsrb_avx(auVar230,(uint)*auVar101._0_8_,6);
                auVar231 = vpinsrb_avx(auVar230,(uint)auVar231[7],7);
              }
              if ((char)uVar186 < '\0') {
                auVar230 = vpshufb_avx(auVar231,___xmm_80800706808005048006050403020100);
                auVar231 = vpinsrb_avx(auVar230,(uint)*auVar101._8_8_,7);
              }
              auVar230 = vpmovzxbd_avx(auVar231);
              auVar101 = vpshufd_avx(auVar231,0x55);
              auVar101 = vpmovzxbd_avx(auVar101);
              auVar101 = vpcmpgtd_avx(auVar101,auVar304);
              auVar230 = vpcmpgtd_avx(auVar230,auVar304);
              auVar279._0_4_ = ~auVar230._0_4_ & uVar28;
              auVar279._4_4_ = ~auVar230._4_4_ & uVar32;
              auVar279._8_4_ = ~auVar230._8_4_ & uVar26;
              auVar279._12_4_ = ~auVar230._12_4_ & uVar158;
              auVar279._16_4_ = ~auVar101._0_4_ & uVar29;
              auVar279._20_4_ = ~auVar101._4_4_ & uVar140;
              auVar279._24_4_ = ~auVar101._8_4_ & uVar180;
              auVar279._28_4_ = ~auVar101._12_4_ & uVar182;
              uVar186 = 0;
              uVar189 = 0;
              uVar191 = 0;
              uVar193 = 0;
              uVar143 = 0;
              uVar146 = 0;
              uVar149 = 0;
              uVar152 = 0;
              auVar266._0_4_ = auVar279._0_4_ & auVar63._0_4_;
              auVar266._4_4_ = auVar279._4_4_ & auVar63._4_4_;
              auVar266._8_4_ = auVar279._8_4_ & auVar63._8_4_;
              auVar266._12_4_ = auVar279._12_4_ & auVar63._12_4_;
              auVar266._16_4_ = auVar279._16_4_ & auVar63._16_4_;
              auVar266._20_4_ = auVar279._20_4_ & auVar63._20_4_;
              auVar266._24_4_ = auVar279._24_4_ & auVar63._24_4_;
              auVar266._28_4_ = auVar279._28_4_ & auVar63._28_4_;
              uVar30 = vmovmskps_avx(auVar266);
              if ((char)iVar43 != (char)uVar30) {
                uVar152 = auVar279._0_4_ ^ uVar28;
                uVar186 = auVar279._4_4_ ^ uVar32;
                uVar189 = auVar279._8_4_ ^ uVar26;
                uVar191 = auVar279._12_4_ ^ uVar158;
                uVar193 = auVar279._16_4_ ^ uVar29;
                uVar143 = auVar279._20_4_ ^ uVar140;
                uVar146 = auVar279._24_4_ ^ uVar180;
                uVar149 = auVar279._28_4_ ^ uVar182;
              }
              auVar177._16_16_ = auVar17;
              auVar177._0_16_ = auVar16;
              auVar56 = vblendvps_avx(auVar56,auVar177,auVar279);
              auVar101 = vpcmpgtd_avx(auVar306._0_16_,auVar308);
              auVar230 = vpcmpgtd_avx(auVar306._16_16_,auVar308);
              uVar28 = auVar101._0_4_ & uVar152;
              uVar32 = auVar101._4_4_ & uVar186;
              uVar26 = auVar101._8_4_ & uVar189;
              uVar158 = auVar101._12_4_ & uVar191;
              uVar29 = auVar230._0_4_ & uVar193;
              uVar140 = auVar230._4_4_ & uVar143;
              uVar180 = auVar230._8_4_ & uVar146;
              uVar182 = auVar230._12_4_ & uVar149;
              auVar129._0_4_ = uVar28 & auVar63._0_4_;
              auVar129._4_4_ = uVar32 & auVar63._4_4_;
              auVar129._8_4_ = uVar26 & auVar63._8_4_;
              auVar129._12_4_ = uVar158 & auVar63._12_4_;
              auVar129._16_4_ = uVar29 & auVar63._16_4_;
              auVar129._20_4_ = uVar140 & auVar63._20_4_;
              auVar129._24_4_ = uVar180 & auVar63._24_4_;
              auVar129._28_4_ = uVar182 & auVar63._28_4_;
              iVar43 = vmovmskps_avx(auVar129);
              auVar306 = ZEXT3264(auVar177);
            } while (iVar43 != 0);
          }
        }
        auVar214 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar56,auVar63);
        auVar231 = auVar214._0_16_;
        auVar101 = vpmovsxdq_avx(auVar231);
        auVar105 = vshufpd_avx(auVar231,auVar231,3);
        auVar105 = vpmovsxdq_avx(auVar105);
        auVar55 = auVar214._16_16_;
        auVar105 = vpaddq_avx(auVar160,auVar105);
        auVar101 = vpaddq_avx(auVar299,auVar101);
        auVar230 = auVar101;
        if ((uVar27 & 1) != 0) {
          auVar230 = ZEXT116(*auVar101._0_8_);
        }
        auVar162 = vpmovsxdq_avx(auVar55);
        auVar70 = vshufpd_avx(auVar55,auVar55,3);
        if ((uVar27 & 2) != 0) {
          auVar101 = vpinsrb_avx(auVar230,(uint)*auVar101._8_8_,1);
          auVar230 = vpblendw_avx(auVar101,auVar230,0xe);
        }
        auVar70 = vpmovsxdq_avx(auVar70);
        auVar101 = vpaddq_avx(auVar162,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar162 = vpaddq_avx(auVar70,auVar102);
          if ((uVar27 & 8) == 0) goto LAB_140c44755;
LAB_140c473d8:
          auVar70 = vpmovzxwd_avx(auVar230);
          auVar70 = vpinsrb_avx(auVar70,(uint)auVar230[2],2);
          auVar105 = vpinsrb_avx(auVar70,(uint)*auVar105._8_8_,3);
          auVar230 = vpblendw_avx(auVar105,auVar230,0xc);
          auVar134._16_16_ = auVar162;
          auVar134._0_16_ = auVar101;
          if ((uVar27 & 0x10) != 0) goto LAB_140c4740a;
LAB_140c44764:
          if ((uVar27 & 0x20) == 0) goto LAB_140c4476d;
LAB_140c47439:
          auVar105 = vpshufb_avx(auVar230,___xmm_80800706808005048080030403020100);
          auVar105 = vpinsrb_avx(auVar105,(uint)*auVar134._8_8_,5);
          auVar230 = vpblendw_avx(auVar105,auVar230,8);
          if ((uVar27 & 0x40) != 0) goto LAB_140c4745d;
LAB_140c44776:
          auVar101 = auVar134._0_16_;
        }
        else {
          auVar162 = vpmovzxwd_avx(auVar230);
          auVar162 = vpinsrb_avx(auVar162,(uint)*auVar105._0_8_,2);
          auVar162 = vpinsrb_avx(auVar162,(uint)auVar230[3],3);
          auVar230 = vpblendw_avx(auVar162,auVar230,0xc);
          auVar162 = vpaddq_avx(auVar70,auVar102);
          if ((uVar27 & 8) != 0) goto LAB_140c473d8;
LAB_140c44755:
          auVar134._16_16_ = auVar162;
          auVar134._0_16_ = auVar101;
          if ((uVar27 & 0x10) == 0) goto LAB_140c44764;
LAB_140c4740a:
          auVar105 = vpshufb_avx(auVar230,___xmm_80800706808005048080030203020100);
          auVar105 = vpinsrb_avx(auVar105,(uint)*auVar134._0_8_,4);
          auVar105 = vpinsrb_avx(auVar105,(uint)auVar230[5],5);
          auVar230 = vpblendw_avx(auVar105,auVar230,8);
          if ((uVar27 & 0x20) != 0) goto LAB_140c47439;
LAB_140c4476d:
          if ((uVar27 & 0x40) == 0) goto LAB_140c44776;
LAB_140c4745d:
          auVar101 = auVar134._0_16_;
          auVar105 = vpshufb_avx(auVar230,___xmm_80800706808005048080050403020100);
          auVar105 = vpinsrb_avx(auVar105,(uint)*auVar134._16_8_,6);
          auVar230 = vpinsrb_avx(auVar105,(uint)auVar230[7],7);
        }
        if (cVar49 < '\0') {
          auVar101 = auVar134._16_16_;
          auVar105 = vpshufb_avx(auVar230,___xmm_80800706808005048006050403020100);
          auVar230 = vpinsrb_avx(auVar105,(uint)*auVar134._24_8_,7);
        }
        auVar105 = vpcmpeqd_avx(auVar101,auVar101);
        auVar101 = vpsubd_avx(auVar55,auVar105);
        auVar105 = vpsubd_avx(auVar231,auVar105);
        auVar135._16_16_ = auVar101;
        auVar135._0_16_ = auVar105;
        auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar135,auVar63);
        auVar212 = vpcmpgtd_avx(auVar212,auVar56._16_16_);
        auVar105 = vpcmpgtd_avx(auVar54,auVar56._0_16_);
        auVar136._16_16_ = auVar212;
        auVar136._0_16_ = auVar105;
        auVar64 = auVar63 & ~auVar136;
        if ((((((((SUB321(auVar64 >> 0x1f,0) & 1) != 0 || (SUB321(auVar64 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar64 >> 0x5f,0) & 1) != 0) || SUB321(auVar64 >> 0x7f,0) != '\0') ||
              (SUB321(auVar64 >> 0x9f,0) & 1) != 0) || SUB321(auVar64 >> 0xbf,0) != '\0') ||
            (SUB321(auVar64 >> 0xdf,0) & 1) != 0) || auVar64[0x1f] < '\0') {
          auVar66._0_4_ = ~auVar105._0_4_ & auVar63._0_4_;
          auVar66._4_4_ = ~auVar105._4_4_ & auVar63._4_4_;
          auVar66._8_4_ = ~auVar105._8_4_ & auVar63._8_4_;
          auVar66._12_4_ = ~auVar105._12_4_ & auVar63._12_4_;
          auVar66._16_4_ = ~auVar212._0_4_ & auVar63._16_4_;
          auVar66._20_4_ = ~auVar212._4_4_ & auVar63._20_4_;
          auVar66._24_4_ = ~auVar212._8_4_ & auVar63._24_4_;
          auVar66._28_4_ = ~auVar212._12_4_ & auVar63._28_4_;
          auVar56 = vblendvps_avx(auVar56,auVar294,auVar66);
        }
        auVar105 = vpmovsxdq_avx(auVar56._0_16_);
        auVar212 = vpshufd_avx(auVar56._0_16_,0xee);
        auVar212 = vpmovsxdq_avx(auVar212);
        auVar212 = vpaddq_avx(auVar160,auVar212);
        auVar105 = vpaddq_avx(auVar299,auVar105);
        auVar101 = auVar105;
        if ((uVar27 & 1) != 0) {
          auVar101 = ZEXT116(*auVar105._0_8_);
        }
        auVar231 = vpmovsxdq_avx(auVar56._16_16_);
        auVar54 = vpshufd_avx(auVar56._16_16_,0xee);
        if ((uVar27 & 2) != 0) {
          auVar105 = vpinsrb_avx(auVar101,(uint)*auVar105._8_8_,1);
          auVar101 = vpblendw_avx(auVar105,auVar101,0xe);
        }
        auVar54 = vpmovsxdq_avx(auVar54);
        auVar105 = vpaddq_avx(auVar231,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar231 = vpaddq_avx(auVar54,auVar102);
          if ((uVar27 & 8) == 0) goto LAB_140c44871;
LAB_140c474f1:
          auVar54 = vpmovzxwd_avx(auVar101);
          auVar54 = vpinsrb_avx(auVar54,(uint)auVar101[2],2);
          auVar212 = vpinsrb_avx(auVar54,(uint)*auVar212._8_8_,3);
          auVar101 = vpblendw_avx(auVar212,auVar101,0xc);
          auVar137._16_16_ = auVar231;
          auVar137._0_16_ = auVar105;
          if ((uVar27 & 0x10) != 0) goto LAB_140c47523;
LAB_140c44880:
          if ((uVar27 & 0x20) == 0) goto LAB_140c44889;
LAB_140c47552:
          auVar212 = vpshufb_avx(auVar101,___xmm_80800706808005048080030403020100);
          auVar212 = vpinsrb_avx(auVar212,(uint)*auVar137._8_8_,5);
          auVar101 = vpblendw_avx(auVar212,auVar101,8);
          auVar212 = vpmovzxbd_avx(auVar230);
          auVar105 = vpshufd_avx(auVar230,0x55);
          if ((uVar27 & 0x40) != 0) goto LAB_140c47580;
LAB_140c4489c:
          auVar105 = vpmovzxbd_avx(auVar105);
        }
        else {
          auVar231 = vpmovzxwd_avx(auVar101);
          auVar231 = vpinsrb_avx(auVar231,(uint)*auVar212._0_8_,2);
          auVar231 = vpinsrb_avx(auVar231,(uint)auVar101[3],3);
          auVar101 = vpblendw_avx(auVar231,auVar101,0xc);
          auVar231 = vpaddq_avx(auVar54,auVar102);
          if ((uVar27 & 8) != 0) goto LAB_140c474f1;
LAB_140c44871:
          auVar137._16_16_ = auVar231;
          auVar137._0_16_ = auVar105;
          if ((uVar27 & 0x10) == 0) goto LAB_140c44880;
LAB_140c47523:
          auVar212 = vpshufb_avx(auVar101,___xmm_80800706808005048080030203020100);
          auVar212 = vpinsrb_avx(auVar212,(uint)*auVar137._0_8_,4);
          auVar212 = vpinsrb_avx(auVar212,(uint)auVar101[5],5);
          auVar101 = vpblendw_avx(auVar212,auVar101,8);
          if ((uVar27 & 0x20) != 0) goto LAB_140c47552;
LAB_140c44889:
          auVar212 = vpmovzxbd_avx(auVar230);
          auVar105 = vpshufd_avx(auVar230,0x55);
          if ((uVar27 & 0x40) == 0) goto LAB_140c4489c;
LAB_140c47580:
          auVar230 = vpshufb_avx(auVar101,___xmm_80800706808005048080050403020100);
          auVar230 = vpinsrb_avx(auVar230,(uint)*auVar137._16_8_,6);
          auVar101 = vpinsrb_avx(auVar230,(uint)auVar101[7],7);
          auVar105 = vpmovzxbd_avx(auVar105);
        }
        if (cVar49 < '\0') {
          auVar101 = vpshufb_avx(auVar101,___xmm_80800706808005048006050403020100);
          auVar101 = vpinsrb_avx(auVar101,(uint)*auVar137._24_8_,7);
        }
        auVar93._16_16_ = auVar105;
        auVar93._0_16_ = auVar212;
        auVar212 = vpmovzxbd_avx(auVar101);
        auVar105 = vpshufd_avx(auVar101,0x55);
        auVar105 = vpmovzxbd_avx(auVar105);
        auVar64 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      else {
        auVar10._4_4_ = auVar230._4_4_ * 2;
        auVar10._0_4_ = auVar230._0_4_ * 2;
        auVar10._8_4_ = auVar230._8_4_ * 2;
        auVar10._12_4_ = auVar230._12_4_ * 2;
        auVar11._4_4_ = auVar231._4_4_ * 2;
        auVar11._0_4_ = auVar231._0_4_ * 2;
        auVar11._8_4_ = auVar231._8_4_ * 2;
        auVar11._12_4_ = auVar231._12_4_ * 2;
        auVar70 = vpmovsxdq_avx(auVar11);
        auVar162 = vpshufd_avx(auVar11,0xee);
        auVar162 = vpmovsxdq_avx(auVar162);
        auVar162 = vpaddq_avx(auVar160,auVar162);
        auVar70 = vpaddq_avx(auVar299,auVar70);
        auVar196 = auVar162;
        if ((uVar27 & 1) != 0) {
          auVar196 = ZEXT216(*auVar70._0_8_);
        }
        auVar208 = vpmovsxdq_avx(auVar10);
        auVar298 = vpshufd_avx(auVar10,0xee);
        if ((uVar27 & 2) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar70._8_8_,1);
        }
        auVar298 = vpmovsxdq_avx(auVar298);
        auVar70 = vpaddq_avx(auVar208,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar208 = vpaddq_avx(auVar298,auVar102);
        }
        else {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar162._0_8_,2);
          auVar208 = vpaddq_avx(auVar298,auVar102);
        }
        if ((uVar27 & 8) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar162._8_8_,3);
        }
        if ((uVar27 & 0x10) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar70._0_8_,4);
        }
        if ((uVar27 & 0x20) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar70._8_8_,5);
        }
        if ((uVar27 & 0x40) != 0) {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar208._0_8_,6);
        }
        if (cVar49 < '\0') {
          auVar196 = vpinsrw_avx(auVar196,(uint)*auVar208._8_8_,7);
        }
        auVar310 = vpunpckhwd_avx(auVar196,(undefined1  [16])0x0);
        auVar298 = vpmovzxwd_avx(auVar196);
        auVar304 = vpshufd_avx(ZEXT416(uVar28),0);
        auVar70 = vpcmpgtd_avx(auVar310,auVar304);
        auVar162 = vpcmpeqd_avx(auVar208,auVar208);
        auVar208 = auVar70 ^ auVar162;
        auVar196 = vpcmpgtd_avx(auVar298,auVar304);
        auVar162 = auVar196 ^ auVar162;
        auVar173._16_16_ = auVar208;
        auVar173._0_16_ = auVar162;
        auVar86._16_16_ = auVar70;
        auVar86._0_16_ = auVar196;
        auVar64 = auVar63 & ~auVar86;
        local_520 = auVar162._0_4_;
        uStack_51c = auVar162._4_4_;
        uStack_518 = auVar162._8_4_;
        uStack_514 = auVar162._12_4_;
        uStack_510 = auVar208._0_4_;
        uStack_50c = auVar208._4_4_;
        uStack_508 = auVar208._8_4_;
        uStack_504 = auVar208._12_4_;
        auVar56 = auVar174;
        if ((((((((SUB321(auVar64 >> 0x1f,0) & 1) != 0 || (SUB321(auVar64 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar64 >> 0x5f,0) & 1) != 0) || SUB321(auVar64 >> 0x7f,0) != '\0') ||
              (SUB321(auVar64 >> 0x9f,0) & 1) != 0) || SUB321(auVar64 >> 0xbf,0) != '\0') ||
            (SUB321(auVar64 >> 0xdf,0) & 1) != 0) || auVar64[0x1f] < '\0') {
          auVar162 = vpcmpgtd_avx(auVar310,auVar304);
          auVar70 = vpcmpgtd_avx(auVar298,auVar304);
          auVar87._16_16_ = auVar162;
          auVar87._0_16_ = auVar70;
          auVar56 = vblendvps_avx(auVar294,auVar174,auVar87);
          auVar105 = vpcmpgtd_avx(auVar8,auVar105);
          auVar101 = vpcmpgtd_avx(auVar9,auVar101);
          uVar28 = auVar101._0_4_ & local_520;
          uVar32 = auVar101._4_4_ & uStack_51c;
          uVar26 = auVar101._8_4_ & uStack_518;
          uVar158 = auVar101._12_4_ & uStack_514;
          uVar29 = auVar105._0_4_ & uStack_510;
          uVar140 = auVar105._4_4_ & uStack_50c;
          uVar180 = auVar105._8_4_ & uStack_508;
          uVar182 = auVar105._12_4_ & uStack_504;
          auVar88._0_4_ = uVar28 & auVar63._0_4_;
          auVar88._4_4_ = uVar32 & auVar63._4_4_;
          auVar88._8_4_ = uVar26 & auVar63._8_4_;
          auVar88._12_4_ = uVar158 & auVar63._12_4_;
          auVar88._16_4_ = uVar29 & auVar63._16_4_;
          auVar88._20_4_ = uVar140 & auVar63._20_4_;
          auVar88._24_4_ = uVar180 & auVar63._24_4_;
          auVar88._28_4_ = uVar182 & auVar63._28_4_;
          iVar43 = vmovmskps_avx(auVar88);
          if (iVar43 != 0) {
            auVar105 = vpcmpeqd_avx(auVar55,auVar55);
            do {
              auVar70 = vpsubd_avx(auVar174._0_16_,auVar105);
              auVar12._4_4_ = auVar70._4_4_ * 2;
              auVar12._0_4_ = auVar70._0_4_ * 2;
              auVar12._8_4_ = auVar70._8_4_ * 2;
              auVar12._12_4_ = auVar70._12_4_ * 2;
              auVar55 = vpmovsxdq_avx(auVar12);
              auVar101 = vpshufd_avx(auVar12,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar160,auVar101);
              auVar55 = vpaddq_avx(auVar299,auVar55);
              uVar186 = vmovmskps_avx(auVar88);
              auVar162 = auVar101;
              if ((uVar186 & 1) != 0) {
                auVar162 = ZEXT216(*auVar55._0_8_);
              }
              if ((uVar186 & 2) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar55._8_8_,1);
              }
              if ((uVar186 & 4) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar101._0_8_,2);
              }
              if ((uVar186 & 8) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar101._8_8_,3);
              }
              auVar196 = vpsubd_avx(auVar174._16_16_,auVar105);
              auVar13._4_4_ = auVar196._4_4_ * 2;
              auVar13._0_4_ = auVar196._0_4_ * 2;
              auVar13._8_4_ = auVar196._8_4_ * 2;
              auVar13._12_4_ = auVar196._12_4_ * 2;
              auVar55 = vpmovsxdq_avx(auVar13);
              auVar101 = vpshufd_avx(auVar13,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar101,auVar102);
              auVar55 = vpaddq_avx(auVar55,auVar213);
              if ((uVar186 & 0x10) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar55._0_8_,4);
              }
              if ((uVar186 & 0x20) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar55._8_8_,5);
              }
              if ((uVar186 & 0x40) != 0) {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar101._0_8_,6);
              }
              if ((char)uVar186 < '\0') {
                auVar162 = vpinsrw_avx(auVar162,(uint)*auVar101._8_8_,7);
              }
              auVar101 = vpunpckhwd_avx(auVar162,___xmm_00000000000000000000000000000000);
              auVar55 = vpmovzxwd_avx(auVar162);
              auVar101 = vpcmpgtd_avx(auVar101,auVar304);
              auVar55 = vpcmpgtd_avx(auVar55,auVar304);
              auVar276._0_4_ = uVar28 & auVar55._0_4_;
              auVar276._4_4_ = uVar32 & auVar55._4_4_;
              auVar276._8_4_ = uVar26 & auVar55._8_4_;
              auVar276._12_4_ = uVar158 & auVar55._12_4_;
              auVar276._16_4_ = uVar29 & auVar101._0_4_;
              auVar276._20_4_ = uVar140 & auVar101._4_4_;
              auVar276._24_4_ = uVar180 & auVar101._8_4_;
              auVar276._28_4_ = uVar182 & auVar101._12_4_;
              uVar186 = 0;
              uVar189 = 0;
              uVar191 = 0;
              uVar193 = 0;
              uVar143 = 0;
              uVar146 = 0;
              uVar149 = 0;
              uVar152 = 0;
              auVar263._0_4_ = auVar276._0_4_ & auVar63._0_4_;
              auVar263._4_4_ = auVar276._4_4_ & auVar63._4_4_;
              auVar263._8_4_ = auVar276._8_4_ & auVar63._8_4_;
              auVar263._12_4_ = auVar276._12_4_ & auVar63._12_4_;
              auVar263._16_4_ = auVar276._16_4_ & auVar63._16_4_;
              auVar263._20_4_ = auVar276._20_4_ & auVar63._20_4_;
              auVar263._24_4_ = auVar276._24_4_ & auVar63._24_4_;
              auVar263._28_4_ = auVar276._28_4_ & auVar63._28_4_;
              uVar30 = vmovmskps_avx(auVar263);
              if ((char)iVar43 != (char)uVar30) {
                uVar152 = auVar276._0_4_ ^ uVar28;
                uVar186 = auVar276._4_4_ ^ uVar32;
                uVar189 = auVar276._8_4_ ^ uVar26;
                uVar191 = auVar276._12_4_ ^ uVar158;
                uVar193 = auVar276._16_4_ ^ uVar29;
                uVar143 = auVar276._20_4_ ^ uVar140;
                uVar146 = auVar276._24_4_ ^ uVar180;
                uVar149 = auVar276._28_4_ ^ uVar182;
              }
              auVar56 = vblendvps_avx(auVar56,auVar174,auVar276);
              auVar174._16_16_ = auVar196;
              auVar174._0_16_ = auVar70;
              auVar101 = vpcmpgtd_avx(auVar8,auVar196);
              auVar55 = vpcmpgtd_avx(auVar9,auVar70);
              uVar28 = auVar55._0_4_ & uVar152;
              uVar32 = auVar55._4_4_ & uVar186;
              uVar26 = auVar55._8_4_ & uVar189;
              uVar158 = auVar55._12_4_ & uVar191;
              uVar29 = auVar101._0_4_ & uVar193;
              uVar140 = auVar101._4_4_ & uVar143;
              uVar180 = auVar101._8_4_ & uVar146;
              uVar182 = auVar101._12_4_ & uVar149;
              auVar88._0_4_ = uVar28 & auVar63._0_4_;
              auVar88._4_4_ = uVar32 & auVar63._4_4_;
              auVar88._8_4_ = uVar26 & auVar63._8_4_;
              auVar88._12_4_ = uVar158 & auVar63._12_4_;
              auVar88._16_4_ = uVar29 & auVar63._16_4_;
              auVar88._20_4_ = uVar140 & auVar63._20_4_;
              auVar88._24_4_ = uVar180 & auVar63._24_4_;
              auVar88._28_4_ = uVar182 & auVar63._28_4_;
              iVar43 = vmovmskps_avx(auVar88);
            } while (iVar43 != 0);
          }
        }
        auVar105 = vpcmpgtd_avx(auVar310,auVar304);
        auVar101 = vpcmpgtd_avx(auVar298,auVar304);
        auVar91._16_16_ = auVar105;
        auVar91._0_16_ = auVar101;
        auVar91 = auVar91 & auVar63;
        if ((((((((SUB321(auVar91 >> 0x1f,0) & 1) != 0 || (SUB321(auVar91 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar91 >> 0x5f,0) & 1) != 0) || SUB321(auVar91 >> 0x7f,0) != '\0') ||
              (SUB321(auVar91 >> 0x9f,0) & 1) != 0) || SUB321(auVar91 >> 0xbf,0) != '\0') ||
            (SUB321(auVar91 >> 0xdf,0) & 1) != 0) || auVar91[0x1f] < '\0') {
          auVar56 = vblendvps_avx(ZEXT832(0) << 0x20,auVar56,auVar173);
          auVar103._4_4_ = __real_00000001;
          auVar103._0_4_ = __real_00000001;
          auVar103._8_4_ = __real_00000001;
          auVar103._12_4_ = __real_00000001;
          auVar105 = vpcmpgtd_avx(auVar230,auVar103);
          auVar101 = vpcmpgtd_avx(auVar231,auVar103);
          uVar28 = ~local_520 & auVar101._0_4_;
          uVar32 = ~uStack_51c & auVar101._4_4_;
          uVar26 = ~uStack_518 & auVar101._8_4_;
          uVar158 = ~uStack_514 & auVar101._12_4_;
          uVar29 = ~uStack_510 & auVar105._0_4_;
          uVar140 = ~uStack_50c & auVar105._4_4_;
          uVar180 = ~uStack_508 & auVar105._8_4_;
          uVar182 = ~uStack_504 & auVar105._12_4_;
          auVar128._0_4_ = uVar28 & auVar63._0_4_;
          auVar128._4_4_ = uVar32 & auVar63._4_4_;
          auVar128._8_4_ = uVar26 & auVar63._8_4_;
          auVar128._12_4_ = uVar158 & auVar63._12_4_;
          auVar128._16_4_ = uVar29 & auVar63._16_4_;
          auVar128._20_4_ = uVar140 & auVar63._20_4_;
          auVar128._24_4_ = uVar180 & auVar63._24_4_;
          auVar128._28_4_ = uVar182 & auVar63._28_4_;
          iVar43 = vmovmskps_avx(auVar128);
          if (iVar43 != 0) {
            auVar105 = vpcmpeqd_avx(auVar101,auVar101);
            auVar307._4_4_ = __real_00000002;
            auVar307._0_4_ = __real_00000002;
            auVar307._8_4_ = __real_00000002;
            auVar307._12_4_ = __real_00000002;
            do {
              auVar231 = auVar128._0_16_;
              iVar38 = auVar306._0_4_ + auVar105._0_4_;
              iVar44 = auVar306._4_4_ + auVar105._4_4_;
              auVar176._4_4_ = iVar44;
              auVar176._0_4_ = iVar38;
              iVar47 = auVar306._8_4_ + auVar105._8_4_;
              auVar176._8_4_ = iVar47;
              iVar51 = auVar306._12_4_ + auVar105._12_4_;
              auVar176._12_4_ = iVar51;
              auVar14._4_4_ = iVar44 * 2;
              auVar14._0_4_ = iVar38 * 2;
              auVar14._8_4_ = iVar47 * 2;
              auVar14._12_4_ = iVar51 * 2;
              auVar230 = vpmovsxdq_avx(auVar14);
              auVar101 = vpshufd_avx(auVar14,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar160,auVar101);
              auVar230 = vpaddq_avx(auVar299,auVar230);
              uVar186 = vmovmskps_avx(auVar128);
              if ((uVar186 & 1) != 0) {
                auVar231 = ZEXT216(*auVar230._0_8_);
              }
              if ((uVar186 & 2) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar230._8_8_,1);
              }
              if ((uVar186 & 4) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._0_8_,2);
              }
              if ((uVar186 & 8) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._8_8_,3);
              }
              iVar38 = auVar306._16_4_ + auVar105._0_4_;
              iVar44 = auVar306._20_4_ + auVar105._4_4_;
              auVar176._20_4_ = iVar44;
              auVar176._16_4_ = iVar38;
              iVar47 = auVar306._24_4_ + auVar105._8_4_;
              auVar176._24_4_ = iVar47;
              iVar51 = auVar306._28_4_ + auVar105._12_4_;
              auVar176._28_4_ = iVar51;
              auVar15._4_4_ = iVar44 * 2;
              auVar15._0_4_ = iVar38 * 2;
              auVar15._8_4_ = iVar47 * 2;
              auVar15._12_4_ = iVar51 * 2;
              auVar230 = vpmovsxdq_avx(auVar15);
              auVar101 = vpshufd_avx(auVar15,0xee);
              auVar101 = vpmovsxdq_avx(auVar101);
              auVar101 = vpaddq_avx(auVar101,auVar102);
              auVar230 = vpaddq_avx(auVar230,auVar213);
              if ((uVar186 & 0x10) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar230._0_8_,4);
              }
              if ((uVar186 & 0x20) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar230._8_8_,5);
              }
              if ((uVar186 & 0x40) != 0) {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._0_8_,6);
              }
              if ((char)uVar186 < '\0') {
                auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._8_8_,7);
              }
              auVar101 = vpunpckhwd_avx(auVar231,___xmm_00000000000000000000000000000000);
              auVar230 = vpmovzxwd_avx(auVar231);
              auVar101 = vpcmpgtd_avx(auVar101,auVar304);
              auVar230 = vpcmpgtd_avx(auVar230,auVar304);
              auVar278._0_4_ = ~auVar230._0_4_ & uVar28;
              auVar278._4_4_ = ~auVar230._4_4_ & uVar32;
              auVar278._8_4_ = ~auVar230._8_4_ & uVar26;
              auVar278._12_4_ = ~auVar230._12_4_ & uVar158;
              auVar278._16_4_ = ~auVar101._0_4_ & uVar29;
              auVar278._20_4_ = ~auVar101._4_4_ & uVar140;
              auVar278._24_4_ = ~auVar101._8_4_ & uVar180;
              auVar278._28_4_ = ~auVar101._12_4_ & uVar182;
              uVar186 = 0;
              uVar189 = 0;
              uVar191 = 0;
              uVar193 = 0;
              uVar143 = 0;
              uVar146 = 0;
              uVar149 = 0;
              uVar152 = 0;
              auVar265._0_4_ = auVar278._0_4_ & auVar63._0_4_;
              auVar265._4_4_ = auVar278._4_4_ & auVar63._4_4_;
              auVar265._8_4_ = auVar278._8_4_ & auVar63._8_4_;
              auVar265._12_4_ = auVar278._12_4_ & auVar63._12_4_;
              auVar265._16_4_ = auVar278._16_4_ & auVar63._16_4_;
              auVar265._20_4_ = auVar278._20_4_ & auVar63._20_4_;
              auVar265._24_4_ = auVar278._24_4_ & auVar63._24_4_;
              auVar265._28_4_ = auVar278._28_4_ & auVar63._28_4_;
              uVar30 = vmovmskps_avx(auVar265);
              if ((char)iVar43 != (char)uVar30) {
                uVar152 = auVar278._0_4_ ^ uVar28;
                uVar186 = auVar278._4_4_ ^ uVar32;
                uVar189 = auVar278._8_4_ ^ uVar26;
                uVar191 = auVar278._12_4_ ^ uVar158;
                uVar193 = auVar278._16_4_ ^ uVar29;
                uVar143 = auVar278._20_4_ ^ uVar140;
                uVar146 = auVar278._24_4_ ^ uVar180;
                uVar149 = auVar278._28_4_ ^ uVar182;
              }
              auVar56 = vblendvps_avx(auVar56,auVar176,auVar278);
              auVar101 = vpcmpgtd_avx(auVar306._0_16_,auVar307);
              auVar230 = vpcmpgtd_avx(auVar306._16_16_,auVar307);
              uVar28 = auVar101._0_4_ & uVar152;
              uVar32 = auVar101._4_4_ & uVar186;
              uVar26 = auVar101._8_4_ & uVar189;
              uVar158 = auVar101._12_4_ & uVar191;
              uVar29 = auVar230._0_4_ & uVar193;
              uVar140 = auVar230._4_4_ & uVar143;
              uVar180 = auVar230._8_4_ & uVar146;
              uVar182 = auVar230._12_4_ & uVar149;
              auVar128._0_4_ = uVar28 & auVar63._0_4_;
              auVar128._4_4_ = uVar32 & auVar63._4_4_;
              auVar128._8_4_ = uVar26 & auVar63._8_4_;
              auVar128._12_4_ = uVar158 & auVar63._12_4_;
              auVar128._16_4_ = uVar29 & auVar63._16_4_;
              auVar128._20_4_ = uVar140 & auVar63._20_4_;
              auVar128._24_4_ = uVar180 & auVar63._24_4_;
              auVar128._28_4_ = uVar182 & auVar63._28_4_;
              iVar43 = vmovmskps_avx(auVar128);
              auVar306 = ZEXT3264(auVar176);
            } while (iVar43 != 0);
          }
        }
        auVar214 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar56,auVar63);
        auVar105._4_4_ = auVar214._20_4_ * 2;
        auVar105._0_4_ = auVar214._16_4_ * 2;
        auVar105._8_4_ = auVar214._24_4_ * 2;
        auVar105._12_4_ = auVar214._28_4_ * 2;
        auVar18._4_4_ = auVar214._4_4_ * 2;
        auVar18._0_4_ = auVar214._0_4_ * 2;
        auVar18._8_4_ = auVar214._8_4_ * 2;
        auVar18._12_4_ = auVar214._12_4_ * 2;
        auVar230 = vpmovsxdq_avx(auVar18);
        auVar101 = vpshufd_avx(auVar18,0xee);
        auVar101 = vpmovsxdq_avx(auVar101);
        auVar101 = vpaddq_avx(auVar160,auVar101);
        auVar230 = vpaddq_avx(auVar299,auVar230);
        auVar231 = auVar101;
        if ((uVar27 & 1) != 0) {
          auVar231 = ZEXT216(*auVar230._0_8_);
        }
        auVar55 = vpmovsxdq_avx(auVar105);
        auVar105 = vpshufd_avx(auVar105,0xee);
        if ((uVar27 & 2) != 0) {
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar230._8_8_,1);
        }
        auVar230 = vpmovsxdq_avx(auVar105);
        auVar105 = vpaddq_avx(auVar55,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar230 = vpaddq_avx(auVar230,auVar102);
          if ((uVar27 & 8) == 0) goto LAB_140c44504;
LAB_140c47276:
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._8_8_,3);
          auVar130._16_16_ = auVar230;
          auVar130._0_16_ = auVar105;
          if ((uVar27 & 0x10) != 0) goto LAB_140c47297;
LAB_140c44519:
          if ((uVar27 & 0x20) == 0) goto LAB_140c44522;
LAB_140c472ab:
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar130._8_8_,5);
          if ((uVar27 & 0x40) != 0) goto LAB_140c472c0;
LAB_140c4452b:
          auVar105 = auVar130._0_16_;
        }
        else {
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar101._0_8_,2);
          auVar230 = vpaddq_avx(auVar230,auVar102);
          if ((uVar27 & 8) != 0) goto LAB_140c47276;
LAB_140c44504:
          auVar130._16_16_ = auVar230;
          auVar130._0_16_ = auVar105;
          if ((uVar27 & 0x10) == 0) goto LAB_140c44519;
LAB_140c47297:
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar130._0_8_,4);
          if ((uVar27 & 0x20) != 0) goto LAB_140c472ab;
LAB_140c44522:
          if ((uVar27 & 0x40) == 0) goto LAB_140c4452b;
LAB_140c472c0:
          auVar105 = auVar130._0_16_;
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar130._16_8_,6);
        }
        if (cVar49 < '\0') {
          auVar105 = auVar130._16_16_;
          auVar231 = vpinsrw_avx(auVar231,(uint)*auVar130._24_8_,7);
        }
        auVar105 = vpcmpeqd_avx(auVar105,auVar105);
        auVar101 = vpsubd_avx(auVar214._16_16_,auVar105);
        auVar105 = vpsubd_avx(auVar214._0_16_,auVar105);
        auVar131._16_16_ = auVar101;
        auVar131._0_16_ = auVar105;
        auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar131,auVar63);
        auVar212 = vpcmpgtd_avx(auVar212,auVar56._16_16_);
        auVar105 = vpcmpgtd_avx(auVar54,auVar56._0_16_);
        auVar132._16_16_ = auVar212;
        auVar132._0_16_ = auVar105;
        auVar64 = auVar63 & ~auVar132;
        if ((((((((SUB321(auVar64 >> 0x1f,0) & 1) != 0 || (SUB321(auVar64 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar64 >> 0x5f,0) & 1) != 0) || SUB321(auVar64 >> 0x7f,0) != '\0') ||
              (SUB321(auVar64 >> 0x9f,0) & 1) != 0) || SUB321(auVar64 >> 0xbf,0) != '\0') ||
            (SUB321(auVar64 >> 0xdf,0) & 1) != 0) || auVar64[0x1f] < '\0') {
          auVar65._0_4_ = ~auVar105._0_4_ & auVar63._0_4_;
          auVar65._4_4_ = ~auVar105._4_4_ & auVar63._4_4_;
          auVar65._8_4_ = ~auVar105._8_4_ & auVar63._8_4_;
          auVar65._12_4_ = ~auVar105._12_4_ & auVar63._12_4_;
          auVar65._16_4_ = ~auVar212._0_4_ & auVar63._16_4_;
          auVar65._20_4_ = ~auVar212._4_4_ & auVar63._20_4_;
          auVar65._24_4_ = ~auVar212._8_4_ & auVar63._24_4_;
          auVar65._28_4_ = ~auVar212._12_4_ & auVar63._28_4_;
          auVar56 = vblendvps_avx(auVar56,auVar294,auVar65);
        }
        auVar212._4_4_ = auVar56._20_4_ * 2;
        auVar212._0_4_ = auVar56._16_4_ * 2;
        auVar212._8_4_ = auVar56._24_4_ * 2;
        auVar212._12_4_ = auVar56._28_4_ * 2;
        auVar19._4_4_ = auVar56._4_4_ * 2;
        auVar19._0_4_ = auVar56._0_4_ * 2;
        auVar19._8_4_ = auVar56._8_4_ * 2;
        auVar19._12_4_ = auVar56._12_4_ * 2;
        auVar101 = vpmovsxdq_avx(auVar19);
        auVar105 = vpshufd_avx(auVar19,0xee);
        auVar105 = vpmovsxdq_avx(auVar105);
        auVar105 = vpaddq_avx(auVar160,auVar105);
        auVar101 = vpaddq_avx(auVar299,auVar101);
        auVar230 = auVar105;
        if ((uVar27 & 1) != 0) {
          auVar230 = ZEXT216(*auVar101._0_8_);
        }
        auVar54 = vpmovsxdq_avx(auVar212);
        auVar212 = vpshufd_avx(auVar212,0xee);
        if ((uVar27 & 2) != 0) {
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar101._8_8_,1);
        }
        auVar101 = vpmovsxdq_avx(auVar212);
        auVar212 = vpaddq_avx(auVar54,auVar213);
        if ((uVar27 & 4) == 0) {
          auVar101 = vpaddq_avx(auVar101,auVar102);
          if ((uVar27 & 8) == 0) goto LAB_140c4461f;
LAB_140c47316:
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar105._8_8_,3);
          auVar133._16_16_ = auVar101;
          auVar133._0_16_ = auVar212;
          if ((uVar27 & 0x10) != 0) goto LAB_140c47331;
LAB_140c4462e:
          if ((uVar27 & 0x20) == 0) goto LAB_140c44637;
LAB_140c47345:
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar133._8_8_,5);
          auVar212 = vpmovzxwd_avx(auVar231);
          if ((uVar27 & 0x40) != 0) goto LAB_140c47363;
LAB_140c44649:
          auVar105 = vpunpckhwd_avx(auVar231,(undefined1  [16])0x0);
        }
        else {
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar105._0_8_,2);
          auVar101 = vpaddq_avx(auVar101,auVar102);
          if ((uVar27 & 8) != 0) goto LAB_140c47316;
LAB_140c4461f:
          auVar133._16_16_ = auVar101;
          auVar133._0_16_ = auVar212;
          if ((uVar27 & 0x10) == 0) goto LAB_140c4462e;
LAB_140c47331:
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar133._0_8_,4);
          if ((uVar27 & 0x20) != 0) goto LAB_140c47345;
LAB_140c44637:
          auVar212 = vpmovzxwd_avx(auVar231);
          if ((uVar27 & 0x40) == 0) goto LAB_140c44649;
LAB_140c47363:
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar133._16_8_,6);
          auVar105 = vpunpckhwd_avx(auVar231,(undefined1  [16])0x0);
        }
        if (cVar49 < '\0') {
          auVar230 = vpinsrw_avx(auVar230,(uint)*auVar133._24_8_,7);
        }
        auVar93._16_16_ = auVar105;
        auVar93._0_16_ = auVar212;
        auVar105 = vpunpckhwd_avx(auVar230,(undefined1  [16])0x0);
        auVar212 = vpmovzxwd_avx(auVar230);
        auVar64 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      if (param_7 != '\x01') {
        auVar101 = vpsubd_avx(auVar212,auVar93._0_16_);
        auVar212 = vpsubd_avx(auVar105,auVar93._16_16_);
        auVar197._4_4_ = __real_00000001;
        auVar197._0_4_ = __real_00000001;
        auVar197._8_4_ = __real_00000001;
        auVar197._12_4_ = __real_00000001;
        auVar212 = vpmaxsd_avx(auVar212,auVar197);
        auVar105 = vpmaxsd_avx(auVar101,auVar197);
        auVar67._16_16_ = auVar212;
        auVar67._0_16_ = auVar105;
        auVar212 = vpermilps_avx(ZEXT416((uint)param_6),0);
        auVar178._16_16_ = auVar212;
        auVar178._0_16_ = auVar212;
        auVar64 = vcvtdq2ps_avx(auVar93);
        auVar290 = vsubps_avx(auVar178,auVar64);
        auVar64 = vcvtdq2ps_avx(auVar67);
        auVar64 = vdivps_avx(auVar290,auVar64);
      }
      auVar212 = auVar214._0_16_;
      auVar64 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar64,auVar202);
      auVar105 = auVar214._16_16_;
    }
    else {
      auVar64 = ZEXT832(0) << 0x20;
      auVar56 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar294,auVar63);
      auVar212 = auVar56._0_16_;
      auVar105 = auVar56._16_16_;
    }
  }
  if (param_8 < 6) {
    auVar101 = vpmulld_avx(auVar212,auVar297);
    auVar105 = vpmulld_avx(auVar105,auVar297);
    auVar212 = vpmovsxdq_avx(auVar105);
    auVar105 = vpshufd_avx(auVar105,0xee);
    vpmovsxdq_avx(auVar105);
    auVar105 = vpmovsxdq_avx(auVar101);
    auVar101 = vpshufd_avx(auVar101,0xee);
    vpmovsxdq_avx(auVar101);
                    /* WARNING: Could not recover jumptable at 0x000140c43794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6c970 + *(int *)(&DAT_151c6c970 + uVar36 * 4)))
              (&DAT_151c6c970,&DAT_151c6c970 + *(int *)(&DAT_151c6c970 + uVar36 * 4),auVar105._0_8_,
               auVar212._0_8_);
    return;
  }
  auVar73._0_12_ = ZEXT812(0);
  auVar73._12_4_ = 0;
  _local_5c0 = vmaskmovps_avx(auVar236,ZEXT1632(auVar73));
  _local_5a0 = vmaskmovps_avx(auVar236,ZEXT1632(auVar73));
  _local_580 = vmaskmovps_avx(auVar236,ZEXT1632(auVar73));
  auVar94._4_4_ = __real_3f800000;
  auVar94._0_4_ = __real_3f800000;
  auVar94._8_4_ = __real_3f800000;
  auVar94._12_4_ = __real_3f800000;
  auVar94._16_4_ = __real_3f800000;
  auVar94._20_4_ = __real_3f800000;
  auVar94._24_4_ = __real_3f800000;
  auVar94._28_4_ = __real_3f800000;
  _local_560 = vmaskmovps_avx(auVar236,auVar94);
  auVar105 = vpcmpeqd_avx(auVar105,auVar56._16_16_);
  auVar212 = vpcmpeqd_avx(auVar212,auVar56._0_16_);
  auVar68._16_16_ = auVar105;
  auVar68._0_16_ = auVar212;
  auVar214 = auVar236 & ~auVar68;
  if ((((((((SUB321(auVar214 >> 0x1f,0) & 1) != 0 || (SUB321(auVar214 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar214 >> 0x5f,0) & 1) != 0) || SUB321(auVar214 >> 0x7f,0) != '\0') ||
        (SUB321(auVar214 >> 0x9f,0) & 1) != 0) || SUB321(auVar214 >> 0xbf,0) != '\0') ||
      (SUB321(auVar214 >> 0xdf,0) & 1) != 0) || auVar214[0x1f] < '\0') {
    auVar69._0_4_ = ~auVar212._0_4_ & auVar236._0_4_;
    auVar69._4_4_ = ~auVar212._4_4_ & auVar236._4_4_;
    auVar69._8_4_ = ~auVar212._8_4_ & auVar236._8_4_;
    auVar69._12_4_ = ~auVar212._12_4_ & auVar236._12_4_;
    auVar69._16_4_ = ~auVar105._0_4_ & auVar236._16_4_;
    auVar69._20_4_ = ~auVar105._4_4_ & auVar236._20_4_;
    auVar69._24_4_ = ~auVar105._8_4_ & auVar236._24_4_;
    auVar69._28_4_ = ~auVar105._12_4_ & auVar236._28_4_;
    if (param_8 < 6) {
      auVar105 = vpmulld_avx(auVar56._0_16_,auVar297);
      auVar101 = vpmulld_avx(auVar56._16_16_,auVar297);
      auVar212 = vpmovsxdq_avx(auVar101);
      auVar101 = vpshufd_avx(auVar101,0xee);
      vpmovsxdq_avx(auVar101);
      vpmovsxdq_avx(auVar105);
      auVar105 = vpshufd_avx(auVar105,0xee);
      auVar105 = vpmovsxdq_avx(auVar105);
                    /* WARNING: Could not recover jumptable at 0x000140c45a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6c988 + *(int *)(&DAT_151c6c988 + uVar36 * 4)))
                (&DAT_151c6c988,&DAT_151c6c988 + *(int *)(&DAT_151c6c988 + uVar36 * 4),
                 auVar105._0_8_,auVar212._0_8_);
      return;
    }
    auVar56 = vmaskmovps_avx(auVar69,ZEXT1632((undefined1  [16])0x0));
    auVar214 = vmaskmovps_avx(auVar69,ZEXT1632((undefined1  [16])0x0));
    auVar290 = vmaskmovps_avx(auVar69,ZEXT1632((undefined1  [16])0x0));
    auVar95._4_4_ = __real_3f800000;
    auVar95._0_4_ = __real_3f800000;
    auVar95._8_4_ = __real_3f800000;
    auVar95._12_4_ = __real_3f800000;
    auVar95._16_4_ = __real_3f800000;
    auVar95._20_4_ = __real_3f800000;
    auVar95._24_4_ = __real_3f800000;
    auVar95._28_4_ = __real_3f800000;
    auVar164 = vmaskmovps_avx(auVar69,auVar95);
    local_480 = auVar56._0_4_;
    fStack_47c = auVar56._4_4_;
    fStack_478 = auVar56._8_4_;
    fStack_474 = auVar56._12_4_;
    fStack_470 = auVar56._16_4_;
    fStack_46c = auVar56._20_4_;
    fStack_468 = auVar56._24_4_;
    fStack_464 = auVar56._28_4_;
    local_460 = auVar214._0_4_;
    fStack_45c = auVar214._4_4_;
    fStack_458 = auVar214._8_4_;
    fStack_454 = auVar214._12_4_;
    fStack_450 = auVar214._16_4_;
    fStack_44c = auVar214._20_4_;
    fStack_448 = auVar214._24_4_;
    fStack_444 = auVar214._28_4_;
    local_440 = auVar290._0_4_;
    fStack_43c = auVar290._4_4_;
    fStack_438 = auVar290._8_4_;
    fStack_434 = auVar290._12_4_;
    fStack_430 = auVar290._16_4_;
    fStack_42c = auVar290._20_4_;
    fStack_428 = auVar290._24_4_;
    fStack_424 = auVar290._28_4_;
    local_420 = auVar164._0_4_;
    fStack_41c = auVar164._4_4_;
    fStack_418 = auVar164._8_4_;
    fStack_414 = auVar164._12_4_;
    fStack_410 = auVar164._16_4_;
    fStack_40c = auVar164._20_4_;
    fStack_408 = auVar164._24_4_;
    fStack_404 = auVar164._28_4_;
    auVar267._0_4_ =
         (float)local_5c0._0_4_ * local_480 + (float)local_580._0_4_ * local_440 +
         (float)local_5a0._0_4_ * local_460 + local_420 * (float)local_560._0_4_;
    auVar267._4_4_ =
         (float)local_5c0._4_4_ * fStack_47c + (float)local_580._4_4_ * fStack_43c +
         (float)local_5a0._4_4_ * fStack_45c + fStack_41c * (float)local_560._4_4_;
    auVar267._8_4_ =
         fStack_5b8 * fStack_478 + fStack_578 * fStack_438 +
         fStack_598 * fStack_458 + fStack_418 * fStack_558;
    auVar267._12_4_ =
         fStack_5b4 * fStack_474 + fStack_574 * fStack_434 +
         fStack_594 * fStack_454 + fStack_414 * fStack_554;
    auVar267._16_4_ =
         fStack_5b0 * fStack_470 + fStack_570 * fStack_430 +
         fStack_590 * fStack_450 + fStack_410 * fStack_550;
    auVar267._20_4_ =
         fStack_5ac * fStack_46c + fStack_56c * fStack_42c +
         fStack_58c * fStack_44c + fStack_40c * fStack_54c;
    auVar267._24_4_ =
         fStack_5a8 * fStack_468 + fStack_568 * fStack_428 +
         fStack_588 * fStack_448 + fStack_408 * fStack_548;
    auVar267._28_4_ =
         fStack_5a4 * fStack_464 + fStack_564 * fStack_424 +
         fStack_584 * fStack_444 + fStack_404 * fStack_544;
    auVar56 = vcmpps_avx(ZEXT432(0) << 0x20,auVar267,6);
    auVar56 = vcvtdq2ps_avx(auVar56 | 
                            ___ymm_0000000100000001000000010000000100000001000000010000000100000001)
    ;
    fVar269 = auVar64._0_4_;
    fVar283 = auVar64._4_4_;
    fVar284 = auVar64._8_4_;
    fVar285 = auVar64._12_4_;
    fVar286 = auVar64._16_4_;
    fVar287 = auVar64._20_4_;
    fVar288 = auVar64._24_4_;
    fVar289 = auVar64._28_4_;
    auVar280._4_4_ = __real_3f800000;
    auVar280._0_4_ = __real_3f800000;
    auVar280._8_4_ = __real_3f800000;
    auVar280._12_4_ = __real_3f800000;
    auVar280._16_4_ = __real_3f800000;
    auVar280._20_4_ = __real_3f800000;
    auVar280._24_4_ = __real_3f800000;
    auVar280._28_4_ = __real_3f800000;
    auVar64 = vsubps_avx(auVar280,auVar64);
    fVar239 = auVar64._0_4_ * auVar56._0_4_;
    fVar244 = auVar64._4_4_ * auVar56._4_4_;
    fVar245 = auVar64._8_4_ * auVar56._8_4_;
    fVar246 = auVar64._12_4_ * auVar56._12_4_;
    fVar247 = auVar64._16_4_ * auVar56._16_4_;
    fVar248 = auVar64._20_4_ * auVar56._20_4_;
    fVar249 = auVar64._24_4_ * auVar56._24_4_;
    fVar250 = auVar64._28_4_ * auVar56._28_4_;
    fVar100 = fVar269 * local_480 + fVar239 * (float)local_5c0._0_4_;
    fVar139 = fVar283 * fStack_47c + fVar244 * (float)local_5c0._4_4_;
    fVar142 = fVar284 * fStack_478 + fVar245 * fStack_5b8;
    fVar145 = fVar285 * fStack_474 + fVar246 * fStack_5b4;
    fVar148 = fVar286 * fStack_470 + fVar247 * fStack_5b0;
    fVar151 = fVar287 * fStack_46c + fVar248 * fStack_5ac;
    fVar154 = fVar288 * fStack_468 + fVar249 * fStack_5a8;
    fVar157 = fVar289 * fStack_464 + fVar250 * fStack_5a4;
    fVar159 = fVar269 * local_460 + fVar239 * (float)local_5a0._0_4_;
    fVar181 = fVar283 * fStack_45c + fVar244 * (float)local_5a0._4_4_;
    fVar183 = fVar284 * fStack_458 + fVar245 * fStack_598;
    fVar185 = fVar285 * fStack_454 + fVar246 * fStack_594;
    fVar187 = fVar286 * fStack_450 + fVar247 * fStack_590;
    fVar190 = fVar287 * fStack_44c + fVar248 * fStack_58c;
    fVar192 = fVar288 * fStack_448 + fVar249 * fStack_588;
    fVar194 = fVar289 * fStack_444 + fVar250 * fStack_584;
    fVar195 = fVar269 * local_440 + fVar239 * (float)local_580._0_4_;
    fVar204 = fVar283 * fStack_43c + fVar244 * (float)local_580._4_4_;
    fVar205 = fVar284 * fStack_438 + fVar245 * fStack_578;
    fVar206 = fVar285 * fStack_434 + fVar246 * fStack_574;
    fVar207 = fVar286 * fStack_430 + fVar247 * fStack_570;
    fVar209 = fVar287 * fStack_42c + fVar248 * fStack_56c;
    fVar210 = fVar288 * fStack_428 + fVar249 * fStack_568;
    fVar211 = fVar289 * fStack_424 + fVar250 * fStack_564;
    fVar269 = fVar269 * local_420 + fVar239 * (float)local_560._0_4_;
    fVar283 = fVar283 * fStack_41c + fVar244 * (float)local_560._4_4_;
    fVar284 = fVar284 * fStack_418 + fVar245 * fStack_558;
    fVar285 = fVar285 * fStack_414 + fVar246 * fStack_554;
    fVar286 = fVar286 * fStack_410 + fVar247 * fStack_550;
    fVar287 = fVar287 * fStack_40c + fVar248 * fStack_54c;
    fVar288 = fVar288 * fStack_408 + fVar249 * fStack_548;
    fVar289 = fVar289 * fStack_404 + fVar250 * fStack_544;
    auVar225._0_4_ = fVar100 * fVar100 + fVar195 * fVar195 + fVar159 * fVar159 + fVar269 * fVar269;
    auVar225._4_4_ = fVar139 * fVar139 + fVar204 * fVar204 + fVar181 * fVar181 + fVar283 * fVar283;
    auVar225._8_4_ = fVar142 * fVar142 + fVar205 * fVar205 + fVar183 * fVar183 + fVar284 * fVar284;
    auVar225._12_4_ = fVar145 * fVar145 + fVar206 * fVar206 + fVar185 * fVar185 + fVar285 * fVar285;
    auVar225._16_4_ = fVar148 * fVar148 + fVar207 * fVar207 + fVar187 * fVar187 + fVar286 * fVar286;
    auVar225._20_4_ = fVar151 * fVar151 + fVar209 * fVar209 + fVar190 * fVar190 + fVar287 * fVar287;
    auVar225._24_4_ = fVar154 * fVar154 + fVar210 * fVar210 + fVar192 * fVar192 + fVar288 * fVar288;
    auVar225._28_4_ = fVar157 * fVar157 + fVar211 * fVar211 + fVar194 * fVar194 + fVar289 * fVar289;
    auVar237._4_4_ = __real_322bcc77;
    auVar237._0_4_ = __real_322bcc77;
    auVar237._8_4_ = __real_322bcc77;
    auVar237._12_4_ = __real_322bcc77;
    auVar237._16_4_ = __real_322bcc77;
    auVar237._20_4_ = __real_322bcc77;
    auVar237._24_4_ = __real_322bcc77;
    auVar237._28_4_ = __real_322bcc77;
    auVar56 = vcmpps_avx(auVar237,auVar225,6);
    auVar64 = vcmpps_avx(auVar237,auVar225,2);
    auVar255._4_4_ = __real_3f000000;
    auVar255._0_4_ = __real_3f000000;
    auVar255._8_4_ = __real_3f000000;
    auVar255._12_4_ = __real_3f000000;
    auVar255._16_4_ = __real_3f000000;
    auVar255._20_4_ = __real_3f000000;
    auVar255._24_4_ = __real_3f000000;
    auVar255._28_4_ = __real_3f000000;
    auVar214 = vrsqrtps_avx(auVar225);
    fVar239 = auVar214._0_4_;
    fVar244 = auVar214._4_4_;
    fVar245 = auVar214._8_4_;
    fVar246 = auVar214._12_4_;
    fVar247 = auVar214._16_4_;
    fVar248 = auVar214._20_4_;
    fVar249 = auVar214._24_4_;
    fVar250 = auVar214._28_4_;
    auVar281._0_4_ = fVar239 * fVar239 * __real_3f000000 * auVar225._0_4_;
    auVar281._4_4_ = fVar244 * fVar244 * __real_3f000000 * auVar225._4_4_;
    auVar281._8_4_ = fVar245 * fVar245 * __real_3f000000 * auVar225._8_4_;
    auVar281._12_4_ = fVar246 * fVar246 * __real_3f000000 * auVar225._12_4_;
    auVar281._16_4_ = fVar247 * fVar247 * __real_3f000000 * auVar225._16_4_;
    auVar281._20_4_ = fVar248 * fVar248 * __real_3f000000 * auVar225._20_4_;
    auVar281._24_4_ = fVar249 * fVar249 * __real_3f000000 * auVar225._24_4_;
    auVar281._28_4_ = fVar250 * fVar250 * __real_3f000000 * auVar225._28_4_;
    auVar214 = vsubps_avx(auVar255,auVar281);
    fVar239 = auVar214._0_4_ * fVar239 + fVar239;
    fVar244 = auVar214._4_4_ * fVar244 + fVar244;
    fVar245 = auVar214._8_4_ * fVar245 + fVar245;
    fVar246 = auVar214._12_4_ * fVar246 + fVar246;
    fVar247 = auVar214._16_4_ * fVar247 + fVar247;
    fVar248 = auVar214._20_4_ * fVar248 + fVar248;
    fVar249 = auVar214._24_4_ * fVar249 + fVar249;
    fVar250 = auVar214._28_4_ * fVar250 + fVar250;
    auVar268._0_4_ = __real_3f000000 * auVar225._0_4_ * fVar239 * fVar239;
    auVar268._4_4_ = __real_3f000000 * auVar225._4_4_ * fVar244 * fVar244;
    auVar268._8_4_ = __real_3f000000 * auVar225._8_4_ * fVar245 * fVar245;
    auVar268._12_4_ = __real_3f000000 * auVar225._12_4_ * fVar246 * fVar246;
    auVar268._16_4_ = __real_3f000000 * auVar225._16_4_ * fVar247 * fVar247;
    auVar268._20_4_ = __real_3f000000 * auVar225._20_4_ * fVar248 * fVar248;
    auVar268._24_4_ = __real_3f000000 * auVar225._24_4_ * fVar249 * fVar249;
    auVar268._28_4_ = __real_3f000000 * auVar225._28_4_ * fVar250 * fVar250;
    auVar214 = vsubps_avx(auVar255,auVar268);
    fVar239 = auVar214._0_4_ * fVar239 + fVar239;
    fVar244 = auVar214._4_4_ * fVar244 + fVar244;
    fVar245 = auVar214._8_4_ * fVar245 + fVar245;
    fVar246 = auVar214._12_4_ * fVar246 + fVar246;
    fVar247 = auVar214._16_4_ * fVar247 + fVar247;
    fVar248 = auVar214._20_4_ * fVar248 + fVar248;
    fVar249 = auVar214._24_4_ * fVar249 + fVar249;
    fVar250 = auVar214._28_4_ * fVar250 + fVar250;
    uVar27 = auVar64._0_4_;
    auVar96._0_4_ = (uint)(fVar100 * fVar239) & uVar27;
    uVar28 = auVar64._4_4_;
    auVar96._4_4_ = (uint)(fVar139 * fVar244) & uVar28;
    uVar32 = auVar64._8_4_;
    auVar96._8_4_ = (uint)(fVar142 * fVar245) & uVar32;
    uVar26 = auVar64._12_4_;
    auVar96._12_4_ = (uint)(fVar145 * fVar246) & uVar26;
    uVar158 = auVar64._16_4_;
    auVar96._16_4_ = (uint)(fVar148 * fVar247) & uVar158;
    uVar29 = auVar64._20_4_;
    auVar96._20_4_ = (uint)(fVar151 * fVar248) & uVar29;
    uVar140 = auVar64._24_4_;
    auVar96._24_4_ = (uint)(fVar154 * fVar249) & uVar140;
    uVar180 = auVar64._28_4_;
    auVar96._28_4_ = (uint)(fVar157 * fVar250) & uVar180;
    auVar138._0_4_ = (uint)(fVar159 * fVar239) & uVar27;
    auVar138._4_4_ = (uint)(fVar181 * fVar244) & uVar28;
    auVar138._8_4_ = (uint)(fVar183 * fVar245) & uVar32;
    auVar138._12_4_ = (uint)(fVar185 * fVar246) & uVar26;
    auVar138._16_4_ = (uint)(fVar187 * fVar247) & uVar158;
    auVar138._20_4_ = (uint)(fVar190 * fVar248) & uVar29;
    auVar138._24_4_ = (uint)(fVar192 * fVar249) & uVar140;
    auVar138._28_4_ = (uint)(fVar194 * fVar250) & uVar180;
    auVar179._0_4_ = (uint)(fVar195 * fVar239) & uVar27;
    auVar179._4_4_ = (uint)(fVar204 * fVar244) & uVar28;
    auVar179._8_4_ = (uint)(fVar205 * fVar245) & uVar32;
    auVar179._12_4_ = (uint)(fVar206 * fVar246) & uVar26;
    auVar179._16_4_ = (uint)(fVar207 * fVar247) & uVar158;
    auVar179._20_4_ = (uint)(fVar209 * fVar248) & uVar29;
    auVar179._24_4_ = (uint)(fVar210 * fVar249) & uVar140;
    auVar179._28_4_ = (uint)(fVar211 * fVar250) & uVar180;
    auVar203._0_4_ = (uint)(fVar269 * fVar239) & uVar27;
    auVar203._4_4_ = (uint)(fVar283 * fVar244) & uVar28;
    auVar203._8_4_ = (uint)(fVar284 * fVar245) & uVar32;
    auVar203._12_4_ = (uint)(fVar285 * fVar246) & uVar26;
    auVar203._16_4_ = (uint)(fVar286 * fVar247) & uVar158;
    auVar203._20_4_ = (uint)(fVar287 * fVar248) & uVar29;
    auVar203._24_4_ = (uint)(fVar288 * fVar249) & uVar140;
    auVar203._28_4_ = (uint)(fVar289 * fVar250) & uVar180;
    auVar226._0_4_ =
         auVar56._0_4_ & ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000;
    auVar226._4_4_ = auVar56._4_4_ & _UNK_150b50ce4;
    auVar226._8_4_ = auVar56._8_4_ & _UNK_150b50ce8;
    auVar226._12_4_ = auVar56._12_4_ & _UNK_150b50cec;
    auVar226._16_4_ = auVar56._16_4_ & _UNK_150b50cf0;
    auVar226._20_4_ = auVar56._20_4_ & _UNK_150b50cf4;
    auVar226._24_4_ = auVar56._24_4_ & _UNK_150b50cf8;
    auVar226._28_4_ = auVar56._28_4_ & _UNK_150b50cfc;
    _local_5c0 = vmaskmovps_avx(auVar69,auVar96);
    _local_5a0 = vmaskmovps_avx(auVar69,auVar138);
    _local_580 = vmaskmovps_avx(auVar69,auVar179);
    _local_560 = vmaskmovps_avx(auVar69,auVar203 | auVar226);
  }
LAB_140c46ebe:
  local_810 = (ulonglong)*(uint *)((ulonglong)(uVar184 & _UNK_150b519d0) + lVar39);
  auVar227._16_16_ = _local_560;
  auVar227._0_16_ = local_580._0_16_;
  auVar290 = vperm2f128_avx(_local_580,_local_560,0x31);
  auVar243._16_16_ = _local_5a0;
  auVar243._0_16_ = local_5c0._0_16_;
  auVar256._16_16_ = local_580._0_16_;
  auVar256._0_16_ = _local_560;
  auVar164 = vperm2f128_avx(_local_5c0,_local_5a0,0x31);
  auVar56 = vshufps_avx(auVar256,auVar256,0x14);
  auVar295._8_8_ = local_580;
  auVar295._0_8_ = local_580;
  auVar295._16_8_ = local_560;
  auVar295._24_8_ = local_560;
  auVar56 = vblendps_avx(auVar295,auVar56,0x48);
  auVar296._16_16_ = local_5c0._0_16_;
  auVar296._0_16_ = _local_5a0;
  auVar64 = vshufps_avx(auVar296,auVar296,0xe1);
  auVar64 = vblendps_avx(auVar243,auVar64,0x12);
  local_200 = vblendps_avx(auVar64,auVar56,0xcc);
  auVar56 = vshufps_avx(auVar256,auVar256,0xb4);
  auVar56 = vblendps_avx(auVar227,auVar56,0x48);
  auVar214 = vshufps_avx(auVar296,auVar296,0xeb);
  auVar64 = vshufpd_avx(auVar243,auVar243,5);
  auVar64 = vblendps_avx(auVar64,auVar214,0x12);
  local_1e0 = vblendps_avx(auVar64,auVar56,0xcc);
  auVar214 = vperm2f128_avx(_local_560,_local_580,0x31);
  auVar56 = vshufps_avx(auVar214,auVar214,0x14);
  auVar228._8_8_ = auVar290._0_8_;
  auVar228._0_8_ = auVar290._0_8_;
  auVar228._16_8_ = auVar290._16_8_;
  auVar228._24_8_ = auVar290._16_8_;
  auVar56 = vblendps_avx(auVar228,auVar56,0x48);
  auVar251 = vperm2f128_avx(_local_5a0,_local_5c0,0x31);
  auVar64 = vshufps_avx(auVar251,auVar251,0xe1);
  auVar64 = vblendps_avx(auVar164,auVar64,0x12);
  local_1c0 = vblendps_avx(auVar64,auVar56,0xcc);
  auVar56 = vshufps_avx(auVar214,auVar214,0xb4);
  auVar56 = vblendps_avx(auVar290,auVar56,0x48);
  auVar214 = vshufps_avx(auVar251,auVar251,0xeb);
  auVar64 = vshufpd_avx(auVar164,auVar164,5);
  auVar64 = vblendps_avx(auVar64,auVar214,0x12);
  local_1a0 = vblendps_avx(auVar64,auVar56,0xcc);
  auVar212 = vpcmpgtd_avx(auVar21,auVar163);
  auVar97._16_16_ = auVar188;
  auVar97._0_16_ = auVar212;
  uVar27 = vmovmskps_avx(auVar97);
  uVar36 = (ulonglong)uVar27;
  do {
    if (uVar36 == 0) {
      uVar27 = 0x40;
    }
    else {
      uVar27 = 0;
      for (uVar34 = uVar36; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
        uVar27 = uVar27 + 1;
      }
    }
    bVar1 = (byte)uVar27 & 0x3f;
    local_240[0] = (ulonglong)uVar46;
    local_240[1] = 0;
    local_240[2] = local_810;
    uStack_228 = 0;
    auVar56 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar27 << 4)));
    lVar39 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar27 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + lVar39) = auVar56._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x10 + lVar39) = auVar56._16_16_;
    uVar36 = uVar36 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
  } while (uVar36 != 0);
  return;
}

// GetVariableKeyLerpPoseTranslations_avx @ 140c475e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetVariableKeyLerpPoseTranslations_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
               float param_6,char param_7,uint param_8,uint param_9)

{
  int iVar1;
  byte bVar2;
  int iVar17;
  int iVar19;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar18;
  int iVar20;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong uVar26;
  char cVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  undefined4 uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
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
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  uint uVar115;
  float fVar129;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar131;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar133;
  float fVar137;
  float fVar139;
  undefined1 auVar135 [16];
  float fVar141;
  undefined1 auVar136 [16];
  undefined1 auVar124 [32];
  uint uVar130;
  uint uVar132;
  uint uVar134;
  uint uVar138;
  uint uVar140;
  uint uVar142;
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar143 [16];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
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
  undefined1 auVar158 [16];
  undefined1 auVar157 [32];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [16];
  uint uVar179;
  uint uVar180;
  uint uVar181;
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  uint uVar182;
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar183 [16];
  undefined1 auVar184 [32];
  undefined1 auVar186 [32];
  uint uVar187;
  uint uVar190;
  uint uVar191;
  uint uVar192;
  uint uVar193;
  uint uVar195;
  uint uVar196;
  uint uVar197;
  undefined1 auVar188 [32];
  undefined1 auVar194 [16];
  undefined1 auVar189 [32];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [16];
  undefined1 auVar202 [32];
  undefined1 in_ZMM12 [64];
  undefined1 auVar203 [64];
  undefined1 auVar204 [16];
  undefined1 auVar205 [64];
  undefined1 auVar206 [16];
  undefined1 auVar208 [32];
  undefined1 auVar209 [32];
  undefined1 auVar210 [32];
  undefined1 auVar211 [32];
  undefined1 local_7e0 [8];
  float fStack_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float fStack_7c8;
  float fStack_7c4;
  undefined1 local_7a0 [32];
  undefined1 local_720 [32];
  uint local_6c0;
  uint uStack_6bc;
  uint uStack_6b8;
  uint uStack_6b4;
  uint uStack_6b0;
  uint uStack_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  uint local_670;
  undefined1 local_660 [32];
  undefined1 local_5a0 [32];
  undefined1 local_580 [32];
  undefined1 local_560 [256];
  uint local_460;
  uint uStack_45c;
  uint uStack_458;
  uint uStack_454;
  uint uStack_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  uint local_420;
  uint uStack_41c;
  uint uStack_418;
  uint uStack_414;
  ulonglong local_400;
  ulonglong local_3e0;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  ulonglong local_240 [3];
  undefined8 uStack_228;
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_88 [16];
  undefined1 auVar64 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar185 [32];
  undefined1 auVar207 [32];
  
  local_88 = in_ZMM12._0_16_;
  iVar28 = *(int *)(&DAT_151c6cae0 + (longlong)(int)param_8 * 4);
  iVar1 = *(int *)(&DAT_151c6cac0 + (longlong)(int)param_8 * 4);
  uVar31 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar31 = param_9;
  }
  uVar34 = (ulonglong)param_8;
  local_670 = uVar31 & 0xfffffff8;
  if ((int)(uVar31 & 0xfffffff8) < 1) {
    uVar31 = 0;
  }
  else {
    auVar103 = vpshufd_avx(ZEXT416(-(uint)(param_8 == 3)),0);
    auVar40 = vpshufd_avx(ZEXT416((uint)(iVar28 * iVar1)),0);
    uVar31 = 0;
    auVar163 = vpshufd_avx(ZEXT416((0.0 < param_6) - 1),0);
    auVar41._16_16_ = auVar163;
    auVar41._0_16_ = auVar163;
    fVar129 = (float)(param_5 + -1) * param_6;
    auVar163 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
    uVar187 = (int)fVar129;
    if ((int)fVar129 < 1) {
      uVar187 = 0;
    }
    if ((int)(param_5 - 2U) < (int)uVar187) {
      uVar187 = param_5 - 2U;
    }
    auVar23 = vpshufd_avx(ZEXT416(uVar187),0);
    auVar143 = vshufps_avx(ZEXT416((uint)fVar129),ZEXT416((uint)fVar129),0);
    auVar42._16_16_ = auVar143;
    auVar42._0_16_ = auVar143;
    auVar205 = ZEXT1264(ZEXT812(0));
    auVar143 = vpcmpeqd_avx(local_88,local_88);
    do {
      auVar203 = ZEXT1664(auVar143);
      uVar32 = (ulonglong)(uVar31 * 8);
      auVar201 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar32);
      auVar204 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar32);
      auVar136 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar32);
      auVar158 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar32),auVar201,0xdd);
      auVar81 = vshufps_avx(auVar204,auVar136,0xdd);
      auVar80 = vpslld_avx(auVar81,4);
      auVar39 = vpslld_avx(auVar158,4);
      uVar187 = *(uint *)(param_3 + 4 + (longlong)auVar39._0_4_);
      auVar102 = ZEXT416(uVar187);
      uVar30 = *(uint *)(param_3 + 4 + (longlong)auVar80._0_4_);
      auVar116 = ZEXT416(uVar30);
      auVar81._4_4_ = __real_00000002;
      auVar81._0_4_ = __real_00000002;
      auVar81._8_4_ = __real_00000002;
      auVar81._12_4_ = __real_00000002;
      auVar158 = vpcmpgtd_avx(auVar81,auVar116);
      auVar81 = vpcmpgtd_avx(auVar81,auVar102);
      auVar85._16_16_ = auVar158;
      auVar85._0_16_ = auVar81;
      auVar85 = auVar85 | auVar41;
      auVar198 = auVar205._0_32_;
      if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0') ||
            (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
          (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
        local_7a0 = vblendvps_avx(local_7a0,auVar198,auVar85);
        local_720 = vblendvps_avx(local_720,auVar198,auVar85);
      }
      uVar38 = *(uint *)(param_3 + auVar39._0_4_);
      uVar190 = *(uint *)(param_3 + auVar80._0_4_);
      auVar39 = vpmovsxdq_avx(ZEXT416(uVar38));
      auVar158 = vpshufd_avx(ZEXT416(uVar38),0xee);
      auVar80 = vpmovsxdq_avx(auVar158);
      auVar84 = vpmovsxdq_avx(ZEXT416(uVar190));
      auVar194 = vpshufd_avx(ZEXT416(uVar190),0xee);
      auVar82._4_4_ = __real_00000001;
      auVar82._0_4_ = __real_00000001;
      auVar82._8_4_ = __real_00000001;
      auVar82._12_4_ = __real_00000001;
      auVar158 = vpcmpgtd_avx(auVar116,auVar82);
      auVar81 = vpcmpgtd_avx(auVar102,auVar82);
      local_420 = auVar103._0_4_;
      uStack_41c = auVar103._4_4_;
      uStack_418 = auVar103._8_4_;
      uStack_414 = auVar103._12_4_;
      auVar170._0_4_ = auVar81._0_4_ & local_420;
      auVar170._4_4_ = auVar81._4_4_ & uStack_41c;
      auVar170._8_4_ = auVar81._8_4_ & uStack_418;
      auVar170._12_4_ = auVar81._12_4_ & uStack_414;
      auVar170._16_4_ = auVar158._0_4_ & local_420;
      auVar170._20_4_ = auVar158._4_4_ & uStack_41c;
      auVar170._24_4_ = auVar158._8_4_ & uStack_418;
      auVar170._28_4_ = auVar158._12_4_ & uStack_414;
      auVar171 = vblendvps_avx(auVar198,
                               ___ymm_0000001800000018000000180000001800000018000000180000001800000018
                               ,auVar170);
      auVar194 = vpmovsxdq_avx(auVar194);
      auVar81 = auVar171._0_16_;
      auVar158 = vpmovsxdq_avx(auVar81);
      auVar158 = vpaddq_avx(auVar158,auVar39);
      auVar81 = vshufpd_avx(auVar81,auVar81,3);
      auVar81 = vpmovsxdq_avx(auVar81);
      auVar81 = vpaddq_avx(auVar81,auVar80);
      auVar80 = auVar171._16_16_;
      auVar39 = vpmovsxdq_avx(auVar80);
      auVar39 = vpaddq_avx(auVar39,auVar84);
      auVar80 = vshufpd_avx(auVar80,auVar80,3);
      auVar80 = vpmovsxdq_avx(auVar80);
      auVar80 = vpaddq_avx(auVar80,auVar194);
      auVar82 = auVar85._0_16_;
      auVar84 = vpcmpgtd_avx(auVar85._16_16_,auVar143);
      auVar194 = vpcmpgtd_avx(auVar82,auVar143);
      auVar171._16_16_ = auVar84;
      auVar171._0_16_ = auVar194;
      uVar38 = vmovmskps_avx(auVar171);
      auVar171 = SUB6432(ZEXT864(0),0) << 0x20;
      if (uVar38 != 0) {
        auVar194._0_4_ = auVar143._0_4_ + uVar30;
        auVar194._4_4_ = auVar143._4_4_;
        auVar194._8_4_ = auVar143._8_4_;
        auVar194._12_4_ = auVar143._12_4_;
        auVar22._0_4_ = auVar143._0_4_ + uVar187;
        auVar22._4_4_ = auVar143._4_4_;
        auVar22._8_4_ = auVar143._8_4_;
        auVar22._12_4_ = auVar143._12_4_;
        auVar144._16_16_ = auVar194;
        auVar144._0_16_ = auVar22;
        auVar198 = vcmpps_avx(auVar198,auVar198,0xf);
        auVar100._0_4_ = auVar85._0_4_ ^ auVar198._0_4_;
        auVar100._4_4_ = auVar85._4_4_ ^ auVar198._4_4_;
        auVar100._8_4_ = auVar85._8_4_ ^ auVar198._8_4_;
        auVar100._12_4_ = auVar85._12_4_ ^ auVar198._12_4_;
        auVar100._16_4_ = auVar85._16_4_ ^ auVar198._16_4_;
        auVar100._20_4_ = auVar85._20_4_ ^ auVar198._20_4_;
        auVar100._24_4_ = auVar85._24_4_ ^ auVar198._24_4_;
        auVar100._28_4_ = auVar85._28_4_ ^ auVar198._28_4_;
        if (__real_3f800000 <= param_6) {
          local_7a0 = vblendvps_avx(local_7a0,auVar144,auVar100);
          local_720 = vblendvps_avx(local_720,auVar144,auVar100);
        }
        else {
          auVar159 = vpmulld_avx(auVar102,auVar40);
          auVar116 = vpmulld_avx(auVar116,auVar40);
          auVar117 = vpmovsxdq_avx(auVar116);
          auVar116 = vpshufd_avx(auVar116,0xee);
          auVar21 = vpmovsxdq_avx(auVar116);
          auVar135 = vpmovsxdq_avx(auVar159);
          auVar116 = vpshufd_avx(auVar159,0xee);
          auVar116 = vpmovsxdq_avx(auVar116);
          auVar159._8_8_ = 0;
          auVar159._0_8_ = param_4 + 3;
          auVar159 = vpshufd_avx(auVar159,0x44);
          auVar116 = vpaddq_avx(auVar159,auVar116);
          auVar81 = vpaddq_avx(auVar81,auVar116);
          auVar116 = vpaddq_avx(auVar159,auVar135);
          auVar116 = vpaddq_avx(auVar158,auVar116);
          auVar21 = vpaddq_avx(auVar159,auVar21);
          auVar80 = vpaddq_avx(auVar80,auVar21);
          auVar21 = vpaddq_avx(auVar159,auVar117);
          auVar21 = vpaddq_avx(auVar39,auVar21);
          auVar206._0_4_ = auVar21._0_4_ & (uint)__real_fffffffffffffffc;
          auVar206._4_4_ = auVar21._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar206._8_4_ = auVar21._8_4_ & (uint)__real_fffffffffffffffc;
          auVar206._12_4_ = auVar21._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar207._16_4_ = auVar80._0_4_ & (uint)__real_fffffffffffffffc;
          auVar207._0_16_ = auVar206;
          auVar207._20_4_ = auVar80._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar207._24_4_ = auVar80._8_4_ & (uint)__real_fffffffffffffffc;
          auVar207._28_4_ = auVar80._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar117._0_4_ = auVar116._0_4_ & (uint)__real_fffffffffffffffc;
          auVar117._4_4_ = auVar116._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar117._8_4_ = auVar116._8_4_ & (uint)__real_fffffffffffffffc;
          auVar117._12_4_ = auVar116._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar122._16_4_ = auVar81._0_4_ & (uint)__real_fffffffffffffffc;
          auVar122._0_16_ = auVar117;
          auVar122._20_4_ = auVar81._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar122._24_4_ = auVar81._8_4_ & (uint)__real_fffffffffffffffc;
          auVar122._28_4_ = auVar81._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar85 = vcvtdq2ps_avx(auVar144);
          local_260 = auVar163._0_4_;
          fStack_25c = auVar163._4_4_;
          fStack_258 = auVar163._8_4_;
          fStack_254 = auVar163._12_4_;
          auVar80._0_4_ = (int)(auVar85._0_4_ * local_260);
          auVar80._4_4_ = (int)(auVar85._4_4_ * fStack_25c);
          auVar80._8_4_ = (int)(auVar85._8_4_ * fStack_258);
          auVar80._12_4_ = (int)(auVar85._12_4_ * fStack_254);
          auVar43._16_4_ = (int)(auVar85._16_4_ * local_260);
          auVar43._0_16_ = auVar80;
          auVar43._20_4_ = (int)(auVar85._20_4_ * fStack_25c);
          auVar43._24_4_ = (int)(auVar85._24_4_ * fStack_258);
          auVar43._28_4_ = (int)(auVar85._28_4_ * fStack_254);
          auVar81 = vpmaxsd_avx(auVar43._16_16_,(undefined1  [16])0x0);
          auVar80 = vpmaxsd_avx(auVar80,(undefined1  [16])0x0);
          auVar116 = vpminsd_avx(auVar81,auVar194);
          auVar21 = vpminsd_avx(auVar80,auVar22);
          auVar198._16_16_ = auVar116;
          auVar198._0_16_ = auVar21;
          auVar205 = ZEXT3264(auVar198);
          auVar118 = auVar207._16_16_;
          auVar135 = auVar122._16_16_;
          cVar27 = (char)uVar38;
          if (param_5 < 0x100) {
            auVar160 = vpmovsxdq_avx(auVar21);
            auVar162 = vpshufd_avx(auVar21,0xee);
            auVar162 = vpmovsxdq_avx(auVar162);
            auVar162 = vpaddq_avx(auVar135,auVar162);
            auVar160 = vpaddq_avx(auVar117,auVar160);
            if ((uVar38 & 1) != 0) {
              auVar159 = ZEXT116(*auVar160._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar160 = vpinsrb_avx(auVar159,(uint)*auVar160._8_8_,1);
              auVar159 = vpblendw_avx(auVar160,auVar159,0xe);
            }
            if ((uVar38 & 4) != 0) {
              auVar160 = vpmovzxwd_avx(auVar159);
              auVar160 = vpinsrb_avx(auVar160,(uint)*auVar162._0_8_,2);
              auVar160 = vpinsrb_avx(auVar160,(uint)auVar159[3],3);
              auVar159 = vpblendw_avx(auVar160,auVar159,0xc);
            }
            if ((uVar38 & 8) != 0) {
              auVar160 = vpmovzxwd_avx(auVar159);
              auVar160 = vpinsrb_avx(auVar160,(uint)auVar159[2],2);
              auVar162 = vpinsrb_avx(auVar160,(uint)*auVar162._8_8_,3);
              auVar159 = vpblendw_avx(auVar162,auVar159,0xc);
            }
            auVar160 = vpmovsxdq_avx(auVar116);
            auVar162 = vpshufd_avx(auVar116,0xee);
            auVar162 = vpmovsxdq_avx(auVar162);
            auVar162 = vpaddq_avx(auVar162,auVar118);
            auVar160 = vpaddq_avx(auVar206,auVar160);
            if ((uVar38 & 0x10) != 0) {
              auVar24 = vpshufb_avx(auVar159,___xmm_80800706808005048080030203020100);
              auVar24 = vpinsrb_avx(auVar24,(uint)*auVar160._0_8_,4);
              auVar24 = vpinsrb_avx(auVar24,(uint)auVar159[5],5);
              auVar159 = vpblendw_avx(auVar24,auVar159,8);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar24 = vpshufb_avx(auVar159,___xmm_80800706808005048080030403020100);
              auVar160 = vpinsrb_avx(auVar24,(uint)*auVar160._8_8_,5);
              auVar159 = vpblendw_avx(auVar160,auVar159,8);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar160 = vpshufb_avx(auVar159,___xmm_80800706808005048080050403020100);
              auVar160 = vpinsrb_avx(auVar160,(uint)*auVar162._0_8_,6);
              auVar159 = vpinsrb_avx(auVar160,(uint)auVar159[7],7);
            }
            if (cVar27 < '\0') {
              auVar159 = vpshufb_avx(auVar159,___xmm_80800706808005048006050403020100);
              auVar159 = vpinsrb_avx(auVar159,(uint)*auVar162._8_8_,7);
            }
            auVar160 = vpmovzxbd_avx(auVar159);
            auVar159 = vpshufd_avx(auVar159,0x55);
            auVar24 = vpmovzxbd_avx(auVar159);
            auVar159 = vpcmpgtd_avx(auVar24,auVar23);
            auVar25 = auVar143 ^ auVar159;
            auVar162 = vpcmpgtd_avx(auVar160,auVar23);
            auVar83 = auVar143 ^ auVar162;
            auVar165._16_16_ = auVar25;
            auVar165._0_16_ = auVar83;
            auVar47._16_16_ = auVar159;
            auVar47._0_16_ = auVar162;
            auVar85 = auVar100 & ~auVar47;
            local_460 = auVar83._0_4_;
            uStack_45c = auVar83._4_4_;
            uStack_458 = auVar83._8_4_;
            uStack_454 = auVar83._12_4_;
            uStack_450 = auVar25._0_4_;
            uStack_44c = auVar25._4_4_;
            uStack_448 = auVar25._8_4_;
            uStack_444 = auVar25._12_4_;
            if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0')
                  || (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
                (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
              auVar159 = vpcmpgtd_avx(auVar24,auVar23);
              auVar162 = vpcmpgtd_avx(auVar160,auVar23);
              auVar48._16_16_ = auVar159;
              auVar48._0_16_ = auVar162;
              auVar85 = vblendvps_avx(auVar144,auVar198,auVar48);
              auVar81 = vpcmpgtd_avx(auVar194,auVar81);
              auVar80 = vpcmpgtd_avx(auVar22,auVar80);
              uVar187 = auVar80._0_4_ & local_460;
              uVar190 = auVar80._4_4_ & uStack_45c;
              uVar191 = auVar80._8_4_ & uStack_458;
              uVar192 = auVar80._12_4_ & uStack_454;
              uVar193 = auVar81._0_4_ & uStack_450;
              uVar195 = auVar81._4_4_ & uStack_44c;
              uVar196 = auVar81._8_4_ & uStack_448;
              uVar197 = auVar81._12_4_ & uStack_444;
              auVar149._0_4_ = uVar187 & auVar100._0_4_;
              auVar149._4_4_ = uVar190 & auVar100._4_4_;
              auVar149._8_4_ = uVar191 & auVar100._8_4_;
              auVar149._12_4_ = uVar192 & auVar100._12_4_;
              auVar149._16_4_ = uVar193 & auVar100._16_4_;
              auVar149._20_4_ = uVar195 & auVar100._20_4_;
              auVar149._24_4_ = uVar196 & auVar100._24_4_;
              auVar149._28_4_ = uVar197 & auVar100._28_4_;
              iVar29 = vmovmskps_avx(auVar149);
              auVar188 = auVar198;
              while (auVar198 = auVar85, iVar29 != 0) {
                auVar159 = vpsubd_avx(auVar188._0_16_,auVar203._0_16_);
                auVar81 = vpmovsxdq_avx(auVar159);
                auVar143 = vpshufd_avx(auVar159,0xee);
                auVar143 = vpmovsxdq_avx(auVar143);
                auVar143 = vpaddq_avx(auVar135,auVar143);
                auVar81 = vpaddq_avx(auVar117,auVar81);
                uVar35 = vmovmskps_avx(auVar149);
                auVar80 = auVar143;
                if ((uVar35 & 1) != 0) {
                  auVar80 = ZEXT116(*auVar81._0_8_);
                }
                if ((uVar35 & 2) != 0) {
                  auVar81 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,1);
                  auVar80 = vpblendw_avx(auVar81,auVar80,0xe);
                }
                if ((uVar35 & 4) != 0) {
                  auVar81 = vpmovzxwd_avx(auVar80);
                  auVar81 = vpinsrb_avx(auVar81,(uint)*auVar143._0_8_,2);
                  auVar81 = vpinsrb_avx(auVar81,(uint)auVar80[3],3);
                  auVar80 = vpblendw_avx(auVar81,auVar80,0xc);
                }
                if ((uVar35 & 8) != 0) {
                  auVar81 = vpmovzxwd_avx(auVar80);
                  auVar81 = vpinsrb_avx(auVar81,(uint)auVar80[2],2);
                  auVar81 = vpinsrb_avx(auVar81,(uint)*auVar143._8_8_,3);
                  auVar80 = vpblendw_avx(auVar81,auVar80,0xc);
                }
                auVar143 = vpcmpeqd_avx(auVar143,auVar143);
                auVar162 = vpsubd_avx(auVar188._16_16_,auVar143);
                auVar81 = vpmovsxdq_avx(auVar162);
                auVar143 = vpshufd_avx(auVar162,0xee);
                auVar143 = vpmovsxdq_avx(auVar143);
                auVar143 = vpaddq_avx(auVar143,auVar118);
                auVar81 = vpaddq_avx(auVar206,auVar81);
                if ((uVar35 & 0x10) != 0) {
                  auVar25 = vpshufb_avx(auVar80,___xmm_80800706808005048080030203020100);
                  auVar25 = vpinsrb_avx(auVar25,(uint)*auVar81._0_8_,4);
                  auVar25 = vpinsrb_avx(auVar25,(uint)auVar80[5],5);
                  auVar80 = vpblendw_avx(auVar25,auVar80,8);
                }
                if ((uVar35 & 0x20) != 0) {
                  auVar25 = vpshufb_avx(auVar80,___xmm_80800706808005048080030403020100);
                  auVar81 = vpinsrb_avx(auVar25,(uint)*auVar81._8_8_,5);
                  auVar80 = vpblendw_avx(auVar81,auVar80,8);
                }
                if ((uVar35 & 0x40) != 0) {
                  auVar81 = vpshufb_avx(auVar80,___xmm_80800706808005048080050403020100);
                  auVar81 = vpinsrb_avx(auVar81,(uint)*auVar143._0_8_,6);
                  auVar80 = vpinsrb_avx(auVar81,(uint)auVar80[7],7);
                }
                if ((char)uVar35 < '\0') {
                  auVar81 = vpshufb_avx(auVar80,___xmm_80800706808005048006050403020100);
                  auVar80 = vpinsrb_avx(auVar81,(uint)*auVar143._8_8_,7);
                }
                auVar81 = vpmovzxbd_avx(auVar80);
                auVar143 = vpshufd_avx(auVar80,0x55);
                auVar143 = vpmovzxbd_avx(auVar143);
                auVar143 = vpcmpgtd_avx(auVar143,auVar23);
                auVar81 = vpcmpgtd_avx(auVar81,auVar23);
                auVar173._0_4_ = uVar187 & auVar81._0_4_;
                auVar173._4_4_ = uVar190 & auVar81._4_4_;
                auVar173._8_4_ = uVar191 & auVar81._8_4_;
                auVar173._12_4_ = uVar192 & auVar81._12_4_;
                auVar173._16_4_ = uVar193 & auVar143._0_4_;
                auVar173._20_4_ = uVar195 & auVar143._4_4_;
                auVar173._24_4_ = uVar196 & auVar143._8_4_;
                auVar173._28_4_ = uVar197 & auVar143._12_4_;
                auVar150 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar49._0_4_ = auVar173._0_4_ & auVar100._0_4_;
                auVar49._4_4_ = auVar173._4_4_ & auVar100._4_4_;
                auVar49._8_4_ = auVar173._8_4_ & auVar100._8_4_;
                auVar49._12_4_ = auVar173._12_4_ & auVar100._12_4_;
                auVar49._16_4_ = auVar173._16_4_ & auVar100._16_4_;
                auVar49._20_4_ = auVar173._20_4_ & auVar100._20_4_;
                auVar49._24_4_ = auVar173._24_4_ & auVar100._24_4_;
                auVar49._28_4_ = auVar173._28_4_ & auVar100._28_4_;
                uVar36 = vmovmskps_avx(auVar49);
                if ((char)iVar29 != (char)uVar36) {
                  auVar150._0_4_ = uVar187 ^ auVar173._0_4_;
                  auVar150._4_4_ = uVar190 ^ auVar173._4_4_;
                  auVar150._8_4_ = uVar191 ^ auVar173._8_4_;
                  auVar150._12_4_ = uVar192 ^ auVar173._12_4_;
                  auVar150._16_4_ = uVar193 ^ auVar173._16_4_;
                  auVar150._20_4_ = uVar195 ^ auVar173._20_4_;
                  auVar150._24_4_ = uVar196 ^ auVar173._24_4_;
                  auVar150._28_4_ = uVar197 ^ auVar173._28_4_;
                }
                auVar85 = vblendvps_avx(auVar198,auVar188,auVar173);
                auVar188._16_16_ = auVar162;
                auVar188._0_16_ = auVar159;
                auVar143 = vpcmpgtd_avx(auVar194,auVar162);
                auVar81 = vpcmpgtd_avx(auVar22,auVar159);
                uVar187 = auVar81._0_4_ & auVar150._0_4_;
                uVar190 = auVar81._4_4_ & auVar150._4_4_;
                uVar191 = auVar81._8_4_ & auVar150._8_4_;
                uVar192 = auVar81._12_4_ & auVar150._12_4_;
                uVar193 = auVar143._0_4_ & auVar150._16_4_;
                uVar195 = auVar143._4_4_ & auVar150._20_4_;
                uVar196 = auVar143._8_4_ & auVar150._24_4_;
                uVar197 = auVar143._12_4_ & auVar150._28_4_;
                auVar149._0_4_ = uVar187 & auVar100._0_4_;
                auVar149._4_4_ = uVar190 & auVar100._4_4_;
                auVar149._8_4_ = uVar191 & auVar100._8_4_;
                auVar149._12_4_ = uVar192 & auVar100._12_4_;
                auVar149._16_4_ = uVar193 & auVar100._16_4_;
                auVar149._20_4_ = uVar195 & auVar100._20_4_;
                auVar149._24_4_ = uVar196 & auVar100._24_4_;
                auVar149._28_4_ = uVar197 & auVar100._28_4_;
                iVar29 = vmovmskps_avx(auVar149);
                auVar143 = vpcmpeqd_avx(auVar162,auVar162);
                auVar203 = ZEXT1664(auVar143);
              }
            }
            auVar81 = vpcmpgtd_avx(auVar24,auVar23);
            auVar80 = vpcmpgtd_avx(auVar160,auVar23);
            auVar52._16_16_ = auVar81;
            auVar52._0_16_ = auVar80;
            auVar81 = vpcmpgtd_avx(auVar82,auVar143);
            auVar87._16_16_ = auVar84;
            auVar87._0_16_ = auVar81;
            auVar52 = auVar52 & auVar87;
            if ((((((((SUB321(auVar52 >> 0x1f,0) & 1) != 0 || (SUB321(auVar52 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar52 >> 0x5f,0) & 1) != 0) || SUB321(auVar52 >> 0x7f,0) != '\0')
                  || (SUB321(auVar52 >> 0x9f,0) & 1) != 0) || SUB321(auVar52 >> 0xbf,0) != '\0') ||
                (SUB321(auVar52 >> 0xdf,0) & 1) != 0) || auVar52[0x1f] < '\0') {
              auVar198 = vblendvps_avx(ZEXT832(0) << 0x20,auVar198,auVar165);
              auVar84._4_4_ = __real_00000001;
              auVar84._0_4_ = __real_00000001;
              auVar84._8_4_ = __real_00000001;
              auVar84._12_4_ = __real_00000001;
              auVar81 = vpcmpgtd_avx(auVar116,auVar84);
              auVar80 = vpcmpgtd_avx(auVar21,auVar84);
              uVar187 = ~local_460 & auVar80._0_4_;
              uVar190 = ~uStack_45c & auVar80._4_4_;
              uVar191 = ~uStack_458 & auVar80._8_4_;
              uVar192 = ~uStack_454 & auVar80._12_4_;
              uVar193 = ~uStack_450 & auVar81._0_4_;
              uVar195 = ~uStack_44c & auVar81._4_4_;
              uVar196 = ~uStack_448 & auVar81._8_4_;
              uVar197 = ~uStack_444 & auVar81._12_4_;
              auVar154._0_4_ = uVar187 & auVar100._0_4_;
              auVar154._4_4_ = uVar190 & auVar100._4_4_;
              auVar154._8_4_ = uVar191 & auVar100._8_4_;
              auVar154._12_4_ = uVar192 & auVar100._12_4_;
              auVar154._16_4_ = uVar193 & auVar100._16_4_;
              auVar154._20_4_ = uVar195 & auVar100._20_4_;
              auVar154._24_4_ = uVar196 & auVar100._24_4_;
              auVar154._28_4_ = uVar197 & auVar100._28_4_;
              iVar29 = vmovmskps_avx(auVar154);
              while (iVar29 != 0) {
                auVar116._0_4_ = auVar205._0_4_ + auVar143._0_4_;
                auVar116._4_4_ = auVar205._4_4_ + auVar143._4_4_;
                auVar116._8_4_ = auVar205._8_4_ + auVar143._8_4_;
                auVar116._12_4_ = auVar205._12_4_ + auVar143._12_4_;
                auVar80 = vpmovsxdq_avx(auVar116);
                auVar81 = vpshufd_avx(auVar116,0xee);
                auVar81 = vpmovsxdq_avx(auVar81);
                auVar81 = vpaddq_avx(auVar135,auVar81);
                auVar80 = vpaddq_avx(auVar117,auVar80);
                uVar35 = vmovmskps_avx(auVar154);
                auVar84 = auVar81;
                if ((uVar35 & 1) != 0) {
                  auVar84 = ZEXT116(*auVar80._0_8_);
                }
                if ((uVar35 & 2) != 0) {
                  auVar80 = vpinsrb_avx(auVar84,(uint)*auVar80._8_8_,1);
                  auVar84 = vpblendw_avx(auVar80,auVar84,0xe);
                }
                if ((uVar35 & 4) != 0) {
                  auVar80 = vpmovzxwd_avx(auVar84);
                  auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,2);
                  auVar80 = vpinsrb_avx(auVar80,(uint)auVar84[3],3);
                  auVar84 = vpblendw_avx(auVar80,auVar84,0xc);
                }
                if ((uVar35 & 8) != 0) {
                  auVar80 = vpmovzxwd_avx(auVar84);
                  auVar80 = vpinsrb_avx(auVar80,(uint)auVar84[2],2);
                  auVar81 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,3);
                  auVar84 = vpblendw_avx(auVar81,auVar84,0xc);
                }
                auVar21._0_4_ = auVar205._16_4_ + auVar143._0_4_;
                auVar21._4_4_ = auVar205._20_4_ + auVar143._4_4_;
                auVar21._8_4_ = auVar205._24_4_ + auVar143._8_4_;
                auVar21._12_4_ = auVar205._28_4_ + auVar143._12_4_;
                auVar80 = vpmovsxdq_avx(auVar21);
                auVar81 = vpshufd_avx(auVar21,0xee);
                auVar81 = vpmovsxdq_avx(auVar81);
                auVar81 = vpaddq_avx(auVar81,auVar118);
                auVar80 = vpaddq_avx(auVar206,auVar80);
                if ((uVar35 & 0x10) != 0) {
                  auVar194 = vpshufb_avx(auVar84,___xmm_80800706808005048080030203020100);
                  auVar194 = vpinsrb_avx(auVar194,(uint)*auVar80._0_8_,4);
                  auVar194 = vpinsrb_avx(auVar194,(uint)auVar84[5],5);
                  auVar84 = vpblendw_avx(auVar194,auVar84,8);
                }
                if ((uVar35 & 0x20) != 0) {
                  auVar194 = vpshufb_avx(auVar84,___xmm_80800706808005048080030403020100);
                  auVar80 = vpinsrb_avx(auVar194,(uint)*auVar80._8_8_,5);
                  auVar84 = vpblendw_avx(auVar80,auVar84,8);
                }
                if ((uVar35 & 0x40) != 0) {
                  auVar80 = vpshufb_avx(auVar84,___xmm_80800706808005048080050403020100);
                  auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,6);
                  auVar84 = vpinsrb_avx(auVar80,(uint)auVar84[7],7);
                }
                if ((char)uVar35 < '\0') {
                  auVar80 = vpshufb_avx(auVar84,___xmm_80800706808005048006050403020100);
                  auVar84 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,7);
                }
                auVar80 = vpmovzxbd_avx(auVar84);
                auVar81 = vpshufd_avx(auVar84,0x55);
                auVar81 = vpmovzxbd_avx(auVar81);
                auVar81 = vpcmpgtd_avx(auVar81,auVar23);
                auVar80 = vpcmpgtd_avx(auVar80,auVar23);
                auVar175._0_4_ = ~auVar80._0_4_ & uVar187;
                auVar175._4_4_ = ~auVar80._4_4_ & uVar190;
                auVar175._8_4_ = ~auVar80._8_4_ & uVar191;
                auVar175._12_4_ = ~auVar80._12_4_ & uVar192;
                auVar175._16_4_ = ~auVar81._0_4_ & uVar193;
                auVar175._20_4_ = ~auVar81._4_4_ & uVar195;
                auVar175._24_4_ = ~auVar81._8_4_ & uVar196;
                auVar175._28_4_ = ~auVar81._12_4_ & uVar197;
                auVar155 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar54._0_4_ = auVar175._0_4_ & auVar100._0_4_;
                auVar54._4_4_ = auVar175._4_4_ & auVar100._4_4_;
                auVar54._8_4_ = auVar175._8_4_ & auVar100._8_4_;
                auVar54._12_4_ = auVar175._12_4_ & auVar100._12_4_;
                auVar54._16_4_ = auVar175._16_4_ & auVar100._16_4_;
                auVar54._20_4_ = auVar175._20_4_ & auVar100._20_4_;
                auVar54._24_4_ = auVar175._24_4_ & auVar100._24_4_;
                auVar54._28_4_ = auVar175._28_4_ & auVar100._28_4_;
                uVar36 = vmovmskps_avx(auVar54);
                if ((char)iVar29 != (char)uVar36) {
                  auVar155._0_4_ = auVar175._0_4_ ^ uVar187;
                  auVar155._4_4_ = auVar175._4_4_ ^ uVar190;
                  auVar155._8_4_ = auVar175._8_4_ ^ uVar191;
                  auVar155._12_4_ = auVar175._12_4_ ^ uVar192;
                  auVar155._16_4_ = auVar175._16_4_ ^ uVar193;
                  auVar155._20_4_ = auVar175._20_4_ ^ uVar195;
                  auVar155._24_4_ = auVar175._24_4_ ^ uVar196;
                  auVar155._28_4_ = auVar175._28_4_ ^ uVar197;
                }
                auVar53._16_16_ = auVar21;
                auVar53._0_16_ = auVar116;
                auVar198 = vblendvps_avx(auVar198,auVar53,auVar175);
                auVar162._4_4_ = __real_00000002;
                auVar162._0_4_ = __real_00000002;
                auVar162._8_4_ = __real_00000002;
                auVar162._12_4_ = __real_00000002;
                auVar81 = vpcmpgtd_avx(auVar205._0_16_,auVar162);
                auVar80 = vpcmpgtd_avx(auVar205._16_16_,auVar162);
                uVar187 = auVar81._0_4_ & auVar155._0_4_;
                uVar190 = auVar81._4_4_ & auVar155._4_4_;
                uVar191 = auVar81._8_4_ & auVar155._8_4_;
                uVar192 = auVar81._12_4_ & auVar155._12_4_;
                uVar193 = auVar80._0_4_ & auVar155._16_4_;
                uVar195 = auVar80._4_4_ & auVar155._20_4_;
                uVar196 = auVar80._8_4_ & auVar155._24_4_;
                uVar197 = auVar80._12_4_ & auVar155._28_4_;
                auVar154._0_4_ = uVar187 & auVar100._0_4_;
                auVar154._4_4_ = uVar190 & auVar100._4_4_;
                auVar154._8_4_ = uVar191 & auVar100._8_4_;
                auVar154._12_4_ = uVar192 & auVar100._12_4_;
                auVar154._16_4_ = uVar193 & auVar100._16_4_;
                auVar154._20_4_ = uVar195 & auVar100._20_4_;
                auVar154._24_4_ = uVar196 & auVar100._24_4_;
                auVar154._28_4_ = uVar197 & auVar100._28_4_;
                iVar29 = vmovmskps_avx(auVar154);
                auVar205 = ZEXT3264(auVar53);
              }
            }
            local_7a0 = vblendvps_avx(local_7a0,auVar198,auVar100);
            auVar84 = local_7a0._0_16_;
            auVar80 = vpmovsxdq_avx(auVar84);
            auVar81 = vshufpd_avx(auVar84,auVar84,3);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar135,auVar81);
            auVar80 = vpaddq_avx(auVar117,auVar80);
            auVar116 = auVar81;
            if ((uVar38 & 1) != 0) {
              auVar116 = ZEXT116(*auVar80._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar80 = vpinsrb_avx(auVar116,(uint)*auVar80._8_8_,1);
              auVar116 = vpblendw_avx(auVar80,auVar116,0xe);
            }
            if ((uVar38 & 4) != 0) {
              auVar80 = vpmovzxwd_avx(auVar116);
              auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,2);
              auVar80 = vpinsrb_avx(auVar80,(uint)auVar116[3],3);
              auVar116 = vpblendw_avx(auVar80,auVar116,0xc);
            }
            if ((uVar38 & 8) != 0) {
              auVar80 = vpmovzxwd_avx(auVar116);
              auVar80 = vpinsrb_avx(auVar80,(uint)auVar116[2],2);
              auVar81 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,3);
              auVar116 = vpblendw_avx(auVar81,auVar116,0xc);
            }
            auVar194 = local_7a0._16_16_;
            auVar80 = vpmovsxdq_avx(auVar194);
            auVar81 = vshufpd_avx(auVar194,auVar194,3);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar81,auVar118);
            auVar80 = vpaddq_avx(auVar206,auVar80);
            if ((uVar38 & 0x10) != 0) {
              auVar82 = vpshufb_avx(auVar116,___xmm_80800706808005048080030203020100);
              auVar82 = vpinsrb_avx(auVar82,(uint)*auVar80._0_8_,4);
              auVar82 = vpinsrb_avx(auVar82,(uint)auVar116[5],5);
              auVar116 = vpblendw_avx(auVar82,auVar116,8);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar82 = vpshufb_avx(auVar116,___xmm_80800706808005048080030403020100);
              auVar80 = vpinsrb_avx(auVar82,(uint)*auVar80._8_8_,5);
              auVar116 = vpblendw_avx(auVar80,auVar116,8);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar80 = vpshufb_avx(auVar116,___xmm_80800706808005048080050403020100);
              auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,6);
              auVar116 = vpinsrb_avx(auVar80,(uint)auVar116[7],7);
            }
            if (cVar27 < '\0') {
              auVar80 = vpshufb_avx(auVar116,___xmm_80800706808005048006050403020100);
              auVar116 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,7);
            }
            auVar81 = vpsubd_avx(auVar194,auVar143);
            auVar80 = vpsubd_avx(auVar84,auVar143);
            auVar58._16_16_ = auVar81;
            auVar58._0_16_ = auVar80;
            local_720 = vblendvps_avx(local_720,auVar58,auVar100);
            auVar81 = vpcmpgtd_avx(ZEXT416(uVar30),local_720._16_16_);
            auVar80 = vpcmpgtd_avx(auVar102,local_720._0_16_);
            auVar108._16_16_ = auVar81;
            auVar108._0_16_ = auVar80;
            auVar85 = auVar100 & ~auVar108;
            if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0')
                  || (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
                (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
              auVar59._0_4_ = ~auVar80._0_4_ & auVar100._0_4_;
              auVar59._4_4_ = ~auVar80._4_4_ & auVar100._4_4_;
              auVar59._8_4_ = ~auVar80._8_4_ & auVar100._8_4_;
              auVar59._12_4_ = ~auVar80._12_4_ & auVar100._12_4_;
              auVar59._16_4_ = ~auVar81._0_4_ & auVar100._16_4_;
              auVar59._20_4_ = ~auVar81._4_4_ & auVar100._20_4_;
              auVar59._24_4_ = ~auVar81._8_4_ & auVar100._24_4_;
              auVar59._28_4_ = ~auVar81._12_4_ & auVar100._28_4_;
              local_720 = vblendvps_avx(local_720,auVar144,auVar59);
            }
            auVar80 = vpmovsxdq_avx(local_720._0_16_);
            auVar81 = vpshufd_avx(local_720._0_16_,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar135,auVar81);
            auVar80 = vpaddq_avx(auVar117,auVar80);
            auVar102 = auVar81;
            if ((uVar38 & 1) != 0) {
              auVar102 = ZEXT116(*auVar80._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar80 = vpinsrb_avx(auVar102,(uint)*auVar80._8_8_,1);
              auVar102 = vpblendw_avx(auVar80,auVar102,0xe);
            }
            if ((uVar38 & 4) != 0) {
              auVar80 = vpmovzxwd_avx(auVar102);
              auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,2);
              auVar80 = vpinsrb_avx(auVar80,(uint)auVar102[3],3);
              auVar102 = vpblendw_avx(auVar80,auVar102,0xc);
            }
            if ((uVar38 & 8) != 0) {
              auVar80 = vpmovzxwd_avx(auVar102);
              auVar80 = vpinsrb_avx(auVar80,(uint)auVar102[2],2);
              auVar81 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,3);
              auVar102 = vpblendw_avx(auVar81,auVar102,0xc);
            }
            auVar80 = vpmovsxdq_avx(local_720._16_16_);
            auVar81 = vpshufd_avx(local_720._16_16_,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar81,auVar118);
            auVar80 = vpaddq_avx(auVar206,auVar80);
            if ((uVar38 & 0x10) != 0) {
              auVar84 = vpshufb_avx(auVar102,___xmm_80800706808005048080030203020100);
              auVar84 = vpinsrb_avx(auVar84,(uint)*auVar80._0_8_,4);
              auVar84 = vpinsrb_avx(auVar84,(uint)auVar102[5],5);
              auVar102 = vpblendw_avx(auVar84,auVar102,8);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar84 = vpshufb_avx(auVar102,___xmm_80800706808005048080030403020100);
              auVar80 = vpinsrb_avx(auVar84,(uint)*auVar80._8_8_,5);
              auVar102 = vpblendw_avx(auVar80,auVar102,8);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar80 = vpshufb_avx(auVar102,___xmm_80800706808005048080050403020100);
              auVar80 = vpinsrb_avx(auVar80,(uint)*auVar81._0_8_,6);
              auVar102 = vpinsrb_avx(auVar80,(uint)auVar102[7],7);
            }
            if (cVar27 < '\0') {
              auVar80 = vpshufb_avx(auVar102,___xmm_80800706808005048006050403020100);
              auVar102 = vpinsrb_avx(auVar80,(uint)*auVar81._8_8_,7);
            }
            auVar81 = vpmovzxbd_avx(auVar116);
            auVar80 = vpshufd_avx(auVar116,0x55);
            auVar80 = vpmovzxbd_avx(auVar80);
            auVar57._16_16_ = auVar80;
            auVar57._0_16_ = auVar81;
            auVar81 = vpmovzxbd_avx(auVar102);
            auVar80 = vpshufd_avx(auVar102,0x55);
            auVar80 = vpmovzxbd_avx(auVar80);
            auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          else {
            auVar160._4_4_ = auVar21._4_4_ * 2;
            auVar160._0_4_ = auVar21._0_4_ * 2;
            auVar160._8_4_ = auVar21._8_4_ * 2;
            auVar160._12_4_ = auVar21._12_4_ * 2;
            auVar162 = vpmovsxdq_avx(auVar160);
            auVar159 = vpshufd_avx(auVar160,0xee);
            auVar159 = vpmovsxdq_avx(auVar159);
            auVar159 = vpaddq_avx(auVar135,auVar159);
            auVar162 = vpaddq_avx(auVar117,auVar162);
            auVar160 = auVar162;
            if ((uVar38 & 1) != 0) {
              auVar160 = ZEXT216(*auVar162._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar162._8_8_,1);
            }
            if ((uVar38 & 4) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar159._0_8_,2);
            }
            if ((uVar38 & 8) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar159._8_8_,3);
            }
            auVar24._4_4_ = auVar116._4_4_ * 2;
            auVar24._0_4_ = auVar116._0_4_ * 2;
            auVar24._8_4_ = auVar116._8_4_ * 2;
            auVar24._12_4_ = auVar116._12_4_ * 2;
            auVar162 = vpmovsxdq_avx(auVar24);
            auVar159 = vpshufd_avx(auVar24,0xee);
            auVar159 = vpmovsxdq_avx(auVar159);
            auVar159 = vpaddq_avx(auVar159,auVar118);
            auVar162 = vpaddq_avx(auVar206,auVar162);
            if ((uVar38 & 0x10) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar162._0_8_,4);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar162._8_8_,5);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar159._0_8_,6);
            }
            if (cVar27 < '\0') {
              auVar160 = vpinsrw_avx(auVar160,(uint)*auVar159._8_8_,7);
            }
            auVar24 = vpunpckhwd_avx(auVar160,___xmm_00000000000000000000000000000000);
            auVar160 = vpmovzxwd_avx(auVar160);
            auVar159 = vpcmpgtd_avx(auVar24,auVar23);
            auVar25 = auVar143 ^ auVar159;
            auVar162 = vpcmpgtd_avx(auVar160,auVar23);
            auVar83 = auVar143 ^ auVar162;
            auVar44._16_16_ = auVar25;
            auVar44._0_16_ = auVar83;
            auVar145._16_16_ = auVar159;
            auVar145._0_16_ = auVar162;
            auVar85 = auVar100 & ~auVar145;
            local_460 = auVar83._0_4_;
            uStack_45c = auVar83._4_4_;
            uStack_458 = auVar83._8_4_;
            uStack_454 = auVar83._12_4_;
            uStack_450 = auVar25._0_4_;
            uStack_44c = auVar25._4_4_;
            uStack_448 = auVar25._8_4_;
            uStack_444 = auVar25._12_4_;
            if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0')
                  || (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
                (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
              auVar159 = vpcmpgtd_avx(auVar24,auVar23);
              auVar162 = vpcmpgtd_avx(auVar160,auVar23);
              auVar146._16_16_ = auVar159;
              auVar146._0_16_ = auVar162;
              auVar85 = vblendvps_avx(auVar144,auVar198,auVar146);
              auVar81 = vpcmpgtd_avx(auVar194,auVar81);
              auVar80 = vpcmpgtd_avx(auVar22,auVar80);
              uVar187 = auVar80._0_4_ & local_460;
              uVar190 = auVar80._4_4_ & uStack_45c;
              uVar191 = auVar80._8_4_ & uStack_458;
              uVar192 = auVar80._12_4_ & uStack_454;
              uVar193 = auVar81._0_4_ & uStack_450;
              uVar195 = auVar81._4_4_ & uStack_44c;
              uVar196 = auVar81._8_4_ & uStack_448;
              uVar197 = auVar81._12_4_ & uStack_444;
              auVar147._0_4_ = uVar187 & auVar100._0_4_;
              auVar147._4_4_ = uVar190 & auVar100._4_4_;
              auVar147._8_4_ = uVar191 & auVar100._8_4_;
              auVar147._12_4_ = uVar192 & auVar100._12_4_;
              auVar147._16_4_ = uVar193 & auVar100._16_4_;
              auVar147._20_4_ = uVar195 & auVar100._20_4_;
              auVar147._24_4_ = uVar196 & auVar100._24_4_;
              auVar147._28_4_ = uVar197 & auVar100._28_4_;
              iVar29 = vmovmskps_avx(auVar147);
              auVar45 = auVar144;
              auVar164 = auVar198;
              while (auVar198 = auVar85, iVar29 != 0) {
                auVar159 = vpsubd_avx(auVar164._0_16_,auVar203._0_16_);
                auVar143._4_4_ = auVar159._4_4_ * 2;
                auVar143._0_4_ = auVar159._0_4_ * 2;
                auVar143._8_4_ = auVar159._8_4_ * 2;
                auVar143._12_4_ = auVar159._12_4_ * 2;
                auVar81 = vpmovsxdq_avx(auVar143);
                auVar143 = vpshufd_avx(auVar143,0xee);
                auVar143 = vpmovsxdq_avx(auVar143);
                auVar143 = vpaddq_avx(auVar135,auVar143);
                auVar81 = vpaddq_avx(auVar81,auVar117);
                uVar35 = vmovmskps_avx(auVar147);
                auVar80 = auVar143;
                if ((uVar35 & 1) != 0) {
                  auVar80 = ZEXT216(*auVar81._0_8_);
                }
                if ((uVar35 & 2) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar81._8_8_,1);
                }
                if ((uVar35 & 4) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar143._0_8_,2);
                }
                if ((uVar35 & 8) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar143._8_8_,3);
                }
                auVar143 = vpcmpeqd_avx(auVar45._0_16_,auVar45._0_16_);
                auVar162 = vpsubd_avx(auVar164._16_16_,auVar143);
                auVar25._4_4_ = auVar162._4_4_ * 2;
                auVar25._0_4_ = auVar162._0_4_ * 2;
                auVar25._8_4_ = auVar162._8_4_ * 2;
                auVar25._12_4_ = auVar162._12_4_ * 2;
                auVar81 = vpmovsxdq_avx(auVar25);
                auVar143 = vpshufd_avx(auVar25,0xee);
                auVar143 = vpmovsxdq_avx(auVar143);
                auVar143 = vpaddq_avx(auVar143,auVar118);
                auVar81 = vpaddq_avx(auVar206,auVar81);
                if ((uVar35 & 0x10) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar81._0_8_,4);
                }
                if ((uVar35 & 0x20) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar81._8_8_,5);
                }
                if ((uVar35 & 0x40) != 0) {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar143._0_8_,6);
                }
                if ((char)uVar35 < '\0') {
                  auVar80 = vpinsrw_avx(auVar80,(uint)*auVar143._8_8_,7);
                }
                auVar143 = vpunpckhwd_avx(auVar80,___xmm_00000000000000000000000000000000);
                auVar81 = vpmovzxwd_avx(auVar80);
                auVar143 = vpcmpgtd_avx(auVar143,auVar23);
                auVar81 = vpcmpgtd_avx(auVar81,auVar23);
                auVar172._0_4_ = uVar187 & auVar81._0_4_;
                auVar172._4_4_ = uVar190 & auVar81._4_4_;
                auVar172._8_4_ = uVar191 & auVar81._8_4_;
                auVar172._12_4_ = uVar192 & auVar81._12_4_;
                auVar172._16_4_ = uVar193 & auVar143._0_4_;
                auVar172._20_4_ = uVar195 & auVar143._4_4_;
                auVar172._24_4_ = uVar196 & auVar143._8_4_;
                auVar172._28_4_ = uVar197 & auVar143._12_4_;
                auVar148 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar46._0_4_ = auVar172._0_4_ & auVar100._0_4_;
                auVar46._4_4_ = auVar172._4_4_ & auVar100._4_4_;
                auVar46._8_4_ = auVar172._8_4_ & auVar100._8_4_;
                auVar46._12_4_ = auVar172._12_4_ & auVar100._12_4_;
                auVar46._16_4_ = auVar172._16_4_ & auVar100._16_4_;
                auVar46._20_4_ = auVar172._20_4_ & auVar100._20_4_;
                auVar46._24_4_ = auVar172._24_4_ & auVar100._24_4_;
                auVar46._28_4_ = auVar172._28_4_ & auVar100._28_4_;
                uVar36 = vmovmskps_avx(auVar46);
                if ((char)iVar29 != (char)uVar36) {
                  auVar148._0_4_ = uVar187 ^ auVar172._0_4_;
                  auVar148._4_4_ = uVar190 ^ auVar172._4_4_;
                  auVar148._8_4_ = uVar191 ^ auVar172._8_4_;
                  auVar148._12_4_ = uVar192 ^ auVar172._12_4_;
                  auVar148._16_4_ = uVar193 ^ auVar172._16_4_;
                  auVar148._20_4_ = uVar195 ^ auVar172._20_4_;
                  auVar148._24_4_ = uVar196 ^ auVar172._24_4_;
                  auVar148._28_4_ = uVar197 ^ auVar172._28_4_;
                }
                auVar85 = vblendvps_avx(auVar198,auVar164,auVar172);
                auVar164._16_16_ = auVar162;
                auVar164._0_16_ = auVar159;
                auVar143 = vpcmpgtd_avx(auVar194,auVar162);
                auVar81 = vpcmpgtd_avx(auVar22,auVar159);
                auVar45._16_16_ = auVar143;
                auVar45._0_16_ = auVar81;
                uVar187 = auVar81._0_4_ & auVar148._0_4_;
                uVar190 = auVar81._4_4_ & auVar148._4_4_;
                uVar191 = auVar81._8_4_ & auVar148._8_4_;
                uVar192 = auVar81._12_4_ & auVar148._12_4_;
                uVar193 = auVar143._0_4_ & auVar148._16_4_;
                uVar195 = auVar143._4_4_ & auVar148._20_4_;
                uVar196 = auVar143._8_4_ & auVar148._24_4_;
                uVar197 = auVar143._12_4_ & auVar148._28_4_;
                auVar147._0_4_ = uVar187 & auVar100._0_4_;
                auVar147._4_4_ = uVar190 & auVar100._4_4_;
                auVar147._8_4_ = uVar191 & auVar100._8_4_;
                auVar147._12_4_ = uVar192 & auVar100._12_4_;
                auVar147._16_4_ = uVar193 & auVar100._16_4_;
                auVar147._20_4_ = uVar195 & auVar100._20_4_;
                auVar147._24_4_ = uVar196 & auVar100._24_4_;
                auVar147._28_4_ = uVar197 & auVar100._28_4_;
                iVar29 = vmovmskps_avx(auVar147);
                auVar143 = vpcmpeqd_avx(auVar162,auVar162);
                auVar203 = ZEXT1664(auVar143);
              }
            }
            auVar81 = vpcmpgtd_avx(auVar24,auVar23);
            auVar80 = vpcmpgtd_avx(auVar160,auVar23);
            auVar151._16_16_ = auVar81;
            auVar151._0_16_ = auVar80;
            auVar81 = vpcmpgtd_avx(auVar82,auVar143);
            auVar86._16_16_ = auVar84;
            auVar86._0_16_ = auVar81;
            auVar151 = auVar151 & auVar86;
            if ((((((((SUB321(auVar151 >> 0x1f,0) & 1) != 0 || (SUB321(auVar151 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar151 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar151 >> 0x7f,0) != '\0') || (SUB321(auVar151 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar151 >> 0xbf,0) != '\0') || (SUB321(auVar151 >> 0xdf,0) & 1) != 0) ||
                auVar151[0x1f] < '\0') {
              auVar198 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar198,auVar44);
              auVar83._4_4_ = __real_00000001;
              auVar83._0_4_ = __real_00000001;
              auVar83._8_4_ = __real_00000001;
              auVar83._12_4_ = __real_00000001;
              auVar81 = vpcmpgtd_avx(auVar116,auVar83);
              auVar80 = vpcmpgtd_avx(auVar21,auVar83);
              uVar187 = ~local_460 & auVar80._0_4_;
              uVar190 = ~uStack_45c & auVar80._4_4_;
              uVar191 = ~uStack_458 & auVar80._8_4_;
              uVar192 = ~uStack_454 & auVar80._12_4_;
              uVar193 = ~uStack_450 & auVar81._0_4_;
              uVar195 = ~uStack_44c & auVar81._4_4_;
              uVar196 = ~uStack_448 & auVar81._8_4_;
              uVar197 = ~uStack_444 & auVar81._12_4_;
              auVar152._0_4_ = uVar187 & auVar100._0_4_;
              auVar152._4_4_ = uVar190 & auVar100._4_4_;
              auVar152._8_4_ = uVar191 & auVar100._8_4_;
              auVar152._12_4_ = uVar192 & auVar100._12_4_;
              auVar152._16_4_ = uVar193 & auVar100._16_4_;
              auVar152._20_4_ = uVar195 & auVar100._20_4_;
              auVar152._24_4_ = uVar196 & auVar100._24_4_;
              auVar152._28_4_ = uVar197 & auVar100._28_4_;
              iVar29 = vmovmskps_avx(auVar152);
              while (iVar29 != 0) {
                iVar18 = auVar205._0_4_ + auVar143._0_4_;
                iVar20 = auVar205._4_4_ + auVar143._4_4_;
                auVar50._4_4_ = iVar20;
                auVar50._0_4_ = iVar18;
                iVar17 = auVar205._8_4_ + auVar143._8_4_;
                auVar50._8_4_ = iVar17;
                iVar19 = auVar205._12_4_ + auVar143._12_4_;
                auVar50._12_4_ = iVar19;
                auVar3._4_4_ = iVar20 * 2;
                auVar3._0_4_ = iVar18 * 2;
                auVar3._8_4_ = iVar17 * 2;
                auVar3._12_4_ = iVar19 * 2;
                auVar80 = vpmovsxdq_avx(auVar3);
                auVar81 = vpshufd_avx(auVar3,0xee);
                auVar81 = vpmovsxdq_avx(auVar81);
                auVar81 = vpaddq_avx(auVar135,auVar81);
                auVar80 = vpaddq_avx(auVar117,auVar80);
                uVar35 = vmovmskps_avx(auVar152);
                auVar116 = auVar80;
                if ((uVar35 & 1) != 0) {
                  auVar116 = ZEXT216(*auVar80._0_8_);
                }
                if ((uVar35 & 2) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._8_8_,1);
                }
                if ((uVar35 & 4) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._0_8_,2);
                }
                if ((uVar35 & 8) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._8_8_,3);
                }
                iVar18 = auVar205._16_4_ + auVar143._0_4_;
                iVar20 = auVar205._20_4_ + auVar143._4_4_;
                auVar50._20_4_ = iVar20;
                auVar50._16_4_ = iVar18;
                iVar17 = auVar205._24_4_ + auVar143._8_4_;
                auVar50._24_4_ = iVar17;
                iVar19 = auVar205._28_4_ + auVar143._12_4_;
                auVar50._28_4_ = iVar19;
                auVar4._4_4_ = iVar20 * 2;
                auVar4._0_4_ = iVar18 * 2;
                auVar4._8_4_ = iVar17 * 2;
                auVar4._12_4_ = iVar19 * 2;
                auVar80 = vpmovsxdq_avx(auVar4);
                auVar81 = vpshufd_avx(auVar4,0xee);
                auVar81 = vpmovsxdq_avx(auVar81);
                auVar81 = vpaddq_avx(auVar81,auVar118);
                auVar80 = vpaddq_avx(auVar206,auVar80);
                if ((uVar35 & 0x10) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._0_8_,4);
                }
                if ((uVar35 & 0x20) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._8_8_,5);
                }
                if ((uVar35 & 0x40) != 0) {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._0_8_,6);
                }
                if ((char)uVar35 < '\0') {
                  auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._8_8_,7);
                }
                auVar81 = vpunpckhwd_avx(auVar116,___xmm_00000000000000000000000000000000);
                auVar80 = vpmovzxwd_avx(auVar116);
                auVar81 = vpcmpgtd_avx(auVar81,auVar23);
                auVar80 = vpcmpgtd_avx(auVar80,auVar23);
                auVar174._0_4_ = ~auVar80._0_4_ & uVar187;
                auVar174._4_4_ = ~auVar80._4_4_ & uVar190;
                auVar174._8_4_ = ~auVar80._8_4_ & uVar191;
                auVar174._12_4_ = ~auVar80._12_4_ & uVar192;
                auVar174._16_4_ = ~auVar81._0_4_ & uVar193;
                auVar174._20_4_ = ~auVar81._4_4_ & uVar195;
                auVar174._24_4_ = ~auVar81._8_4_ & uVar196;
                auVar174._28_4_ = ~auVar81._12_4_ & uVar197;
                auVar153 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar51._0_4_ = auVar174._0_4_ & auVar100._0_4_;
                auVar51._4_4_ = auVar174._4_4_ & auVar100._4_4_;
                auVar51._8_4_ = auVar174._8_4_ & auVar100._8_4_;
                auVar51._12_4_ = auVar174._12_4_ & auVar100._12_4_;
                auVar51._16_4_ = auVar174._16_4_ & auVar100._16_4_;
                auVar51._20_4_ = auVar174._20_4_ & auVar100._20_4_;
                auVar51._24_4_ = auVar174._24_4_ & auVar100._24_4_;
                auVar51._28_4_ = auVar174._28_4_ & auVar100._28_4_;
                uVar36 = vmovmskps_avx(auVar51);
                if ((char)iVar29 != (char)uVar36) {
                  auVar153._0_4_ = auVar174._0_4_ ^ uVar187;
                  auVar153._4_4_ = auVar174._4_4_ ^ uVar190;
                  auVar153._8_4_ = auVar174._8_4_ ^ uVar191;
                  auVar153._12_4_ = auVar174._12_4_ ^ uVar192;
                  auVar153._16_4_ = auVar174._16_4_ ^ uVar193;
                  auVar153._20_4_ = auVar174._20_4_ ^ uVar195;
                  auVar153._24_4_ = auVar174._24_4_ ^ uVar196;
                  auVar153._28_4_ = auVar174._28_4_ ^ uVar197;
                }
                auVar198 = vblendvps_avx(auVar198,auVar50,auVar174);
                auVar161._4_4_ = __real_00000002;
                auVar161._0_4_ = __real_00000002;
                auVar161._8_4_ = __real_00000002;
                auVar161._12_4_ = __real_00000002;
                auVar81 = vpcmpgtd_avx(auVar205._0_16_,auVar161);
                auVar80 = vpcmpgtd_avx(auVar205._16_16_,auVar161);
                uVar187 = auVar81._0_4_ & auVar153._0_4_;
                uVar190 = auVar81._4_4_ & auVar153._4_4_;
                uVar191 = auVar81._8_4_ & auVar153._8_4_;
                uVar192 = auVar81._12_4_ & auVar153._12_4_;
                uVar193 = auVar80._0_4_ & auVar153._16_4_;
                uVar195 = auVar80._4_4_ & auVar153._20_4_;
                uVar196 = auVar80._8_4_ & auVar153._24_4_;
                uVar197 = auVar80._12_4_ & auVar153._28_4_;
                auVar152._0_4_ = uVar187 & auVar100._0_4_;
                auVar152._4_4_ = uVar190 & auVar100._4_4_;
                auVar152._8_4_ = uVar191 & auVar100._8_4_;
                auVar152._12_4_ = uVar192 & auVar100._12_4_;
                auVar152._16_4_ = uVar193 & auVar100._16_4_;
                auVar152._20_4_ = uVar195 & auVar100._20_4_;
                auVar152._24_4_ = uVar196 & auVar100._24_4_;
                auVar152._28_4_ = uVar197 & auVar100._28_4_;
                iVar29 = vmovmskps_avx(auVar152);
                auVar205 = ZEXT3264(auVar50);
              }
            }
            local_7a0 = vblendvps_avx(local_7a0,auVar198,auVar100);
            auVar5._4_4_ = local_7a0._4_4_ * 2;
            auVar5._0_4_ = local_7a0._0_4_ * 2;
            auVar5._8_4_ = local_7a0._8_4_ * 2;
            auVar5._12_4_ = local_7a0._12_4_ * 2;
            auVar80 = vpmovsxdq_avx(auVar5);
            auVar81 = vpshufd_avx(auVar5,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar135,auVar81);
            auVar80 = vpaddq_avx(auVar117,auVar80);
            auVar116 = auVar80;
            if ((uVar38 & 1) != 0) {
              auVar116 = ZEXT216(*auVar80._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._8_8_,1);
            }
            if ((uVar38 & 4) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._0_8_,2);
            }
            if ((uVar38 & 8) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._8_8_,3);
            }
            auVar6._4_4_ = local_7a0._20_4_ * 2;
            auVar6._0_4_ = local_7a0._16_4_ * 2;
            auVar6._8_4_ = local_7a0._24_4_ * 2;
            auVar6._12_4_ = local_7a0._28_4_ * 2;
            auVar80 = vpmovsxdq_avx(auVar6);
            auVar81 = vpshufd_avx(auVar6,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar81,auVar118);
            auVar80 = vpaddq_avx(auVar206,auVar80);
            if ((uVar38 & 0x10) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._0_8_,4);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar80._8_8_,5);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._0_8_,6);
            }
            if (cVar27 < '\0') {
              auVar116 = vpinsrw_avx(auVar116,(uint)*auVar81._8_8_,7);
            }
            auVar81 = vpsubd_avx(local_7a0._16_16_,auVar143);
            auVar80 = vpsubd_avx(local_7a0._0_16_,auVar143);
            auVar55._16_16_ = auVar81;
            auVar55._0_16_ = auVar80;
            local_720 = vblendvps_avx(local_720,auVar55,auVar100);
            auVar81 = vpcmpgtd_avx(ZEXT416(uVar30),local_720._16_16_);
            auVar80 = vpcmpgtd_avx(auVar102,local_720._0_16_);
            auVar107._16_16_ = auVar81;
            auVar107._0_16_ = auVar80;
            auVar85 = auVar100 & ~auVar107;
            if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0)
                    || (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0')
                  || (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
                (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
              auVar56._0_4_ = ~auVar80._0_4_ & auVar100._0_4_;
              auVar56._4_4_ = ~auVar80._4_4_ & auVar100._4_4_;
              auVar56._8_4_ = ~auVar80._8_4_ & auVar100._8_4_;
              auVar56._12_4_ = ~auVar80._12_4_ & auVar100._12_4_;
              auVar56._16_4_ = ~auVar81._0_4_ & auVar100._16_4_;
              auVar56._20_4_ = ~auVar81._4_4_ & auVar100._20_4_;
              auVar56._24_4_ = ~auVar81._8_4_ & auVar100._24_4_;
              auVar56._28_4_ = ~auVar81._12_4_ & auVar100._28_4_;
              local_720 = vblendvps_avx(local_720,auVar144,auVar56);
            }
            auVar102._4_4_ = local_720._4_4_ * 2;
            auVar102._0_4_ = local_720._0_4_ * 2;
            auVar102._8_4_ = local_720._8_4_ * 2;
            auVar102._12_4_ = local_720._12_4_ * 2;
            auVar80 = vpmovsxdq_avx(auVar102);
            auVar81 = vpshufd_avx(auVar102,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar135,auVar81);
            auVar80 = vpaddq_avx(auVar117,auVar80);
            auVar102 = auVar80;
            if ((uVar38 & 1) != 0) {
              auVar102 = ZEXT216(*auVar80._0_8_);
            }
            if ((uVar38 & 2) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar80._8_8_,1);
            }
            if ((uVar38 & 4) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar81._0_8_,2);
            }
            if ((uVar38 & 8) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar81._8_8_,3);
            }
            auVar135._4_4_ = local_720._20_4_ * 2;
            auVar135._0_4_ = local_720._16_4_ * 2;
            auVar135._8_4_ = local_720._24_4_ * 2;
            auVar135._12_4_ = local_720._28_4_ * 2;
            auVar80 = vpmovsxdq_avx(auVar135);
            auVar81 = vpshufd_avx(auVar135,0xee);
            auVar81 = vpmovsxdq_avx(auVar81);
            auVar81 = vpaddq_avx(auVar81,auVar118);
            auVar80 = vpaddq_avx(auVar206,auVar80);
            if ((uVar38 & 0x10) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar80._0_8_,4);
            }
            if ((uVar38 & 0x20) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar80._8_8_,5);
            }
            if ((uVar38 & 0x40) != 0) {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar81._0_8_,6);
            }
            if (cVar27 < '\0') {
              auVar102 = vpinsrw_avx(auVar102,(uint)*auVar81._8_8_,7);
            }
            auVar80 = vpunpckhwd_avx(auVar116,(undefined1  [16])0x0);
            auVar81 = vpmovzxwd_avx(auVar116);
            auVar57._16_16_ = auVar80;
            auVar57._0_16_ = auVar81;
            auVar80 = vpunpckhwd_avx(auVar102,(undefined1  [16])0x0);
            auVar81 = vpmovzxwd_avx(auVar102);
            auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          if (param_7 != '\x01') {
            auVar102 = vpsubd_avx(auVar81,auVar57._0_16_);
            auVar81 = vpsubd_avx(auVar80,auVar57._16_16_);
            auVar118._4_4_ = __real_00000001;
            auVar118._0_4_ = __real_00000001;
            auVar118._8_4_ = __real_00000001;
            auVar118._12_4_ = __real_00000001;
            auVar81 = vpmaxsd_avx(auVar81,auVar118);
            auVar80 = vpmaxsd_avx(auVar102,auVar118);
            auVar88._16_16_ = auVar81;
            auVar88._0_16_ = auVar80;
            auVar85 = vcvtdq2ps_avx(auVar57);
            auVar198 = vsubps_avx(auVar42,auVar85);
            auVar85 = vcvtdq2ps_avx(auVar88);
            auVar85 = vdivps_avx(auVar198,auVar85);
          }
          auVar205 = ZEXT864(0);
          auVar171 = vblendvps_avx(auVar205._0_32_,auVar85,auVar100);
        }
      }
      auVar81 = local_7a0._0_16_;
      if (param_8 < 7) {
        auVar103 = vpmulld_avx(auVar81,auVar40);
        auVar40 = vpmulld_avx(local_7a0._16_16_,auVar40);
        vpmovsxdq_avx(auVar40);
        auVar40 = vpshufd_avx(auVar40,0xee);
        vpmovsxdq_avx(auVar40);
        vpmovsxdq_avx(auVar103);
        auVar103 = vpshufd_avx(auVar103,0xee);
        vpmovsxdq_avx(auVar103);
                    /* WARNING: Could not recover jumptable at 0x000140c4903d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6c9a0 + *(int *)(&DAT_151c6c9a0 + uVar34 * 4)))
                  (&DAT_151c6c9a0 + *(int *)(&DAT_151c6c9a0 + uVar34 * 4),&DAT_151c6c9a0,
                   auVar39._0_8_,auVar158._0_8_);
        return;
      }
      auVar100 = auVar205._0_32_;
      auVar170 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar198 = ZEXT1232(ZEXT812(0));
      auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar176._0_4_ = local_7a0._0_4_ ^ local_720._0_4_;
      auVar176._4_4_ = local_7a0._4_4_ ^ local_720._4_4_;
      auVar176._8_4_ = local_7a0._8_4_ ^ local_720._8_4_;
      auVar176._12_4_ = local_7a0._12_4_ ^ local_720._12_4_;
      auVar176._16_4_ = local_7a0._16_4_ ^ local_720._16_4_;
      auVar176._20_4_ = local_7a0._20_4_ ^ local_720._20_4_;
      auVar176._24_4_ = local_7a0._24_4_ ^ local_720._24_4_;
      auVar176._28_4_ = local_7a0._28_4_ ^ local_720._28_4_;
      if (auVar176 != (undefined1  [32])0x0) {
        auVar39 = local_720._0_16_;
        auVar158 = vpcmpeqd_avx(local_7a0._16_16_,local_720._16_16_);
        if (param_8 < 7) {
          vpcmpeqd_avx(auVar81,auVar39);
          auVar103 = vpmulld_avx(auVar39,auVar40);
          auVar40 = vpmulld_avx(local_720._16_16_,auVar40);
          vpmovsxdq_avx(auVar40);
          auVar40 = vpshufd_avx(auVar40,0xee);
          vpmovsxdq_avx(auVar40);
          vpmovsxdq_avx(auVar103);
          auVar103 = vpshufd_avx(auVar103,0xee);
          vpmovsxdq_avx(auVar103);
                    /* WARNING: Could not recover jumptable at 0x000140c4971a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6c9bc + *(int *)(&DAT_151c6c9bc + uVar34 * 4)))
                    (&DAT_151c6c9bc + *(int *)(&DAT_151c6c9bc + uVar34 * 4));
          return;
        }
        auVar80 = vpcmpeqd_avx(auVar81,auVar39);
        auVar60._16_16_ = auVar143 ^ auVar158;
        auVar60._0_16_ = auVar143 ^ auVar80;
        auVar85 = vmaskmovps_avx(auVar60,auVar100);
        auVar198 = vmaskmovps_avx(auVar60,auVar100);
        auVar170 = vmaskmovps_avx(auVar60,auVar100);
        auVar81 = vpcmpeqd_avx(auVar81,auVar39);
        auVar61._16_16_ = auVar143 ^ auVar158;
        auVar61._0_16_ = auVar143 ^ auVar81;
        auVar85 = vsubps_avx(auVar85,auVar100);
        auVar198 = vsubps_avx(auVar198,auVar100);
        auVar170 = vsubps_avx(auVar170,auVar100);
        local_7e0._0_4_ = auVar171._0_4_;
        local_7e0._4_4_ = auVar171._4_4_;
        fStack_7d8 = auVar171._8_4_;
        fStack_7d4 = auVar171._12_4_;
        fStack_7d0 = auVar171._16_4_;
        fStack_7cc = auVar171._20_4_;
        fStack_7c8 = auVar171._24_4_;
        fStack_7c4 = auVar171._28_4_;
        auVar89._0_4_ = (float)local_7e0._0_4_ * auVar85._0_4_ + 0.0;
        auVar89._4_4_ = (float)local_7e0._4_4_ * auVar85._4_4_ + 0.0;
        fVar129 = auVar205._8_4_;
        auVar89._8_4_ = fVar129 + fStack_7d8 * auVar85._8_4_;
        fVar131 = auVar205._12_4_;
        auVar89._12_4_ = fVar131 + fStack_7d4 * auVar85._12_4_;
        fVar133 = auVar205._16_4_;
        auVar89._16_4_ = fVar133 + fStack_7d0 * auVar85._16_4_;
        fVar137 = auVar205._20_4_;
        auVar89._20_4_ = fVar137 + fStack_7cc * auVar85._20_4_;
        fVar139 = auVar205._24_4_;
        auVar89._24_4_ = fVar139 + fStack_7c8 * auVar85._24_4_;
        fVar141 = auVar205._28_4_;
        auVar89._28_4_ = fVar141 + fStack_7c4 * auVar85._28_4_;
        auVar101._0_4_ = (float)local_7e0._0_4_ * auVar198._0_4_ + 0.0;
        auVar101._4_4_ = (float)local_7e0._4_4_ * auVar198._4_4_ + 0.0;
        auVar101._8_4_ = fVar129 + fStack_7d8 * auVar198._8_4_;
        auVar101._12_4_ = fVar131 + fStack_7d4 * auVar198._12_4_;
        auVar101._16_4_ = fVar133 + fStack_7d0 * auVar198._16_4_;
        auVar101._20_4_ = fVar137 + fStack_7cc * auVar198._20_4_;
        auVar101._24_4_ = fVar139 + fStack_7c8 * auVar198._24_4_;
        auVar101._28_4_ = fVar141 + fStack_7c4 * auVar198._28_4_;
        auVar109._0_4_ = (float)local_7e0._0_4_ * auVar170._0_4_ + 0.0;
        auVar109._4_4_ = (float)local_7e0._4_4_ * auVar170._4_4_ + 0.0;
        auVar109._8_4_ = fVar129 + fStack_7d8 * auVar170._8_4_;
        auVar109._12_4_ = fVar131 + fStack_7d4 * auVar170._12_4_;
        auVar109._16_4_ = fVar133 + fStack_7d0 * auVar170._16_4_;
        auVar109._20_4_ = fVar137 + fStack_7cc * auVar170._20_4_;
        auVar109._24_4_ = fVar139 + fStack_7c8 * auVar170._24_4_;
        auVar109._28_4_ = fVar141 + fStack_7c4 * auVar170._28_4_;
        auVar85 = vmaskmovps_avx(auVar61,auVar89);
        auVar198 = vmaskmovps_avx(auVar61,auVar101);
        auVar170 = vmaskmovps_avx(auVar61,auVar109);
      }
      auVar62._16_16_ = auVar136;
      auVar62._0_16_ = auVar201;
      auVar90._16_16_ = auVar204;
      auVar90._0_16_ = *(undefined1 (*) [16])(param_2 + uVar32);
      local_220 = vshufps_avx(auVar90,auVar62,0x88);
      auVar110._16_16_ = auVar198._0_16_;
      auVar110._0_16_ = auVar85._0_16_;
      auVar43 = vperm2f128_avx(auVar85,auVar198,0x31);
      auVar184._16_16_ = auVar85._0_16_;
      auVar184._0_16_ = auVar198._0_16_;
      auVar171 = vshufps_avx(auVar184,auVar184,0xe1);
      auVar171 = vblendps_avx(auVar110,auVar171,0x12);
      auVar122 = vperm2f128_avx(auVar100,auVar170,0x21);
      auVar144 = vshufps_avx(auVar122,auVar122,0x14);
      auVar201._8_8_ = auVar170._0_8_;
      auVar201._0_8_ = auVar170._0_8_;
      auVar144 = vblendps_avx(ZEXT1632(auVar201),auVar144,0x48);
      local_180 = vblendps_avx(auVar171,auVar144,0xcc);
      auVar144 = vshufps_avx(auVar184,auVar184,0xeb);
      auVar171 = vshufpd_avx(auVar110,auVar110,5);
      auVar171 = vblendps_avx(auVar171,auVar144,0x12);
      auVar144 = vshufps_avx(auVar122,auVar122,0xb4);
      auVar144 = vblendps_avx(ZEXT1632(auVar170._0_16_),auVar144,0x48);
      local_160 = vblendps_avx(auVar171,auVar144,0xcc);
      auVar171 = vperm2f128_avx(auVar198,auVar85,0x31);
      auVar85 = vshufps_avx(auVar171,auVar171,0xe1);
      auVar85 = vblendps_avx(auVar43,auVar85,0x12);
      auVar198 = vunpcklps_avx(auVar170,auVar100);
      auVar198 = vblendps_avx(ZEXT1632(CONCAT88(auVar170._16_8_,auVar170._16_8_)),auVar198,0x48);
      local_140 = vblendps_avx(auVar85,auVar198,0xcc);
      auVar198 = vshufps_avx(auVar171,auVar171,0xeb);
      auVar85 = vshufpd_avx(auVar43,auVar43,5);
      auVar85 = vblendps_avx(auVar85,auVar198,0x12);
      auVar198 = vunpckhps_avx(auVar170,auVar100);
      auVar198 = vblendps_avx(ZEXT1632(auVar170._16_16_),auVar198,0x48);
      local_120 = vblendps_avx(auVar85,auVar198,0xcc);
      uVar32 = 0xff;
      do {
        uVar187 = 0;
        for (uVar26 = uVar32; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x8000000000000000) {
          uVar187 = uVar187 + 1;
        }
        bVar2 = (byte)uVar187 & 0x3f;
        iVar29 = *(int *)(local_220 + (ulonglong)(uVar187 & 7) * 4);
        auVar85 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar187 << 4)));
        *(undefined1 (*) [16])(param_1 + 0x20 + (longlong)iVar29 * 0x60) = auVar85._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x30 + (longlong)iVar29 * 0x60) = auVar85._16_16_;
        uVar32 = uVar32 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
      } while (uVar32 != 0);
      uVar31 = uVar31 + 8;
      auVar143 = vpcmpeqd_avx(auVar201,auVar201);
    } while ((int)uVar31 < (int)local_670);
  }
  if ((int)param_9 <= (int)uVar31) {
    return;
  }
  auVar103 = vpshufd_avx(ZEXT416(uVar31),0);
  auVar63._16_16_ = auVar103;
  auVar63._0_16_ = auVar103;
  auVar80 = SUB3216(auVar63 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar81 = vpshufd_avx(ZEXT416(param_9),0);
  auVar102 = SUB3216(auVar63 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar201 = vpcmpgtd_avx(auVar81,auVar102);
  auVar40 = vpcmpgtd_avx(auVar81,auVar80);
  auVar103 = vpslld_avx(auVar103,3);
  auVar23 = vpand_avx(auVar40,auVar103);
  auVar103 = vpand_avx(auVar201,auVar103);
  lVar33 = auVar103._0_4_ + param_2;
  uVar190 = auVar40._0_4_;
  uVar191 = auVar40._4_4_;
  uVar192 = auVar40._8_4_;
  uVar193 = auVar40._12_4_;
  uVar195 = auVar201._0_4_;
  auVar103 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)
                                          (uVar190 &
                                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004
                                          ) + param_2 + auVar23._0_4_)),4);
  auVar103 = vpand_avx(auVar40,auVar103);
  uVar31 = *(uint *)(param_3 + auVar103._0_4_);
  uVar187 = *(uint *)((ulonglong)
                      (uVar190 &
                      ___ymm_0000000400000004000000040000000400000004000000040000000400000004) +
                     param_3 + auVar103._0_4_);
  auVar39 = ZEXT416(uVar187);
  auVar103 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)(uVar195 & _UNK_150b519f0) + lVar33)),4);
  auVar103 = vpand_avx(auVar201,auVar103);
  uVar30 = *(uint *)(param_3 + auVar103._0_4_);
  uVar38 = *(uint *)((ulonglong)(uVar195 & _UNK_150b50d50) + param_3 + auVar103._0_4_);
  auVar103 = vpmovsxdq_avx(ZEXT416(uVar31));
  auVar40 = vpshufd_avx(ZEXT416(uVar31),0xee);
  auVar40 = vpmovsxdq_avx(auVar40);
  auVar163 = vpshufd_avx(ZEXT416(-(uint)(param_8 == 3)),0);
  auVar136._4_4_ = __real_00000001;
  auVar136._0_4_ = __real_00000001;
  auVar136._8_4_ = __real_00000001;
  auVar136._12_4_ = __real_00000001;
  auVar204 = vpcmpgtd_avx(ZEXT416(uVar38),auVar136);
  auVar136 = vpcmpgtd_avx(auVar39,auVar136);
  auVar156._0_4_ = auVar136._0_4_ & auVar163._0_4_;
  auVar156._4_4_ = auVar136._4_4_ & auVar163._4_4_;
  auVar156._8_4_ = auVar136._8_4_ & auVar163._8_4_;
  auVar156._12_4_ = auVar136._12_4_ & auVar163._12_4_;
  auVar156._16_4_ = auVar204._0_4_ & auVar163._0_4_;
  auVar156._20_4_ = auVar204._4_4_ & auVar163._4_4_;
  auVar156._24_4_ = auVar204._8_4_ & auVar163._8_4_;
  auVar156._28_4_ = auVar204._12_4_ & auVar163._12_4_;
  auVar41 = vblendvps_avx(ZEXT1232(ZEXT812(0)),
                          ___ymm_0000001800000018000000180000001800000018000000180000001800000018,
                          auVar156);
  auVar143 = auVar41._0_16_;
  auVar163 = vpmovsxdq_avx(auVar143);
  auVar103 = vpaddq_avx(auVar163,auVar103);
  auVar163 = vshufpd_avx(auVar143,auVar143,3);
  auVar163 = vpmovsxdq_avx(auVar163);
  auVar40 = vpaddq_avx(auVar163,auVar40);
  auVar163._0_4_ = uVar190 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000
  ;
  auVar163._4_4_ = uVar191 & _UNK_150b519c4;
  auVar163._8_4_ = uVar192 & _UNK_150b519c8;
  auVar163._12_4_ = uVar193 & _UNK_150b519cc;
  vextractps_avx(auVar163,1);
  vextractps_avx(auVar163,2);
  vextractps_avx(auVar163,3);
  auVar163 = vpmovsxdq_avx(ZEXT416(uVar30));
  auVar158 = auVar41._16_16_;
  auVar143 = vpmovsxdq_avx(auVar158);
  auVar163 = vpaddq_avx(auVar143,auVar163);
  auVar143 = vpshufd_avx(ZEXT416(uVar30),0xee);
  auVar143 = vpmovsxdq_avx(auVar143);
  auVar158 = vshufpd_avx(auVar158,auVar158,3);
  auVar158 = vpmovsxdq_avx(auVar158);
  auVar143 = vpaddq_avx(auVar158,auVar143);
  auVar158 = vpshufd_avx(ZEXT416(~((0.0 < param_6) - 1)),0);
  local_660._0_4_ = auVar136._0_4_ & auVar158._0_4_;
  local_660._4_4_ = auVar136._4_4_ & auVar158._4_4_;
  local_660._8_4_ = auVar136._8_4_ & auVar158._8_4_;
  local_660._12_4_ = auVar136._12_4_ & auVar158._12_4_;
  local_660._16_4_ = auVar204._0_4_ & auVar158._0_4_;
  local_660._20_4_ = auVar204._4_4_ & auVar158._4_4_;
  local_660._24_4_ = auVar204._8_4_ & auVar158._8_4_;
  local_660._28_4_ = auVar204._12_4_ & auVar158._12_4_;
  uVar31 = *(uint *)(param_2 + auVar23._0_4_);
  auVar23 = vpshufd_avx(ZEXT416((uint)(iVar28 * iVar1)),0);
  auVar157._0_4_ = uVar190 & local_660._0_4_;
  auVar157._4_4_ = uVar191 & local_660._4_4_;
  auVar157._8_4_ = uVar192 & local_660._8_4_;
  auVar157._12_4_ = uVar193 & local_660._12_4_;
  auVar157._16_4_ = uVar195 & local_660._16_4_;
  auVar157._20_4_ = auVar201._4_4_ & local_660._20_4_;
  auVar157._24_4_ = auVar201._8_4_ & local_660._24_4_;
  auVar157._28_4_ = auVar201._12_4_ & local_660._28_4_;
  uVar30 = vmovmskps_avx(auVar157);
  if (uVar30 == 0) {
    auVar41 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar42 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  }
  else {
    auVar136 = vpcmpeqd_avx(ZEXT416(uVar31),ZEXT416(uVar31));
    auVar204._0_4_ = uVar38 + auVar136._0_4_;
    auVar204._4_4_ = auVar136._4_4_;
    auVar204._8_4_ = auVar136._8_4_;
    auVar204._12_4_ = auVar136._12_4_;
    auVar158._0_4_ = uVar187 + auVar136._0_4_;
    auVar158._4_4_ = auVar136._4_4_;
    auVar158._8_4_ = auVar136._8_4_;
    auVar158._12_4_ = auVar136._12_4_;
    auVar189._16_16_ = auVar204;
    auVar189._0_16_ = auVar158;
    if (param_6 < __real_3f800000) {
      auVar136 = vpmulld_avx(auVar39,auVar23);
      auVar84 = vpmulld_avx(ZEXT416(uVar38),auVar23);
      auVar116 = vpmovsxdq_avx(auVar84);
      auVar84 = vpshufd_avx(auVar84,0xee);
      auVar84 = vpmovsxdq_avx(auVar84);
      auVar194 = vpmovsxdq_avx(auVar136);
      auVar136 = vpshufd_avx(auVar136,0xee);
      auVar136 = vpmovsxdq_avx(auVar136);
      auVar119._8_8_ = 0;
      auVar119._0_8_ = param_4 + 3;
      auVar82 = vpshufd_avx(auVar119,0x44);
      auVar136 = vpaddq_avx(auVar82,auVar136);
      auVar40 = vpaddq_avx(auVar40,auVar136);
      auVar136 = vpaddq_avx(auVar82,auVar194);
      auVar103 = vpaddq_avx(auVar103,auVar136);
      auVar136 = vpaddq_avx(auVar82,auVar84);
      auVar143 = vpaddq_avx(auVar136,auVar143);
      auVar136 = vpaddq_avx(auVar82,auVar116);
      auVar163 = vpaddq_avx(auVar136,auVar163);
      auVar120._0_4_ = auVar163._0_4_ & (uint)__real_fffffffffffffffc;
      auVar120._4_4_ = auVar163._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar120._8_4_ = auVar163._8_4_ & (uint)__real_fffffffffffffffc;
      auVar120._12_4_ = auVar163._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar123._16_4_ = auVar143._0_4_ & (uint)__real_fffffffffffffffc;
      auVar123._0_16_ = auVar120;
      auVar123._20_4_ = auVar143._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar123._24_4_ = auVar143._8_4_ & (uint)__real_fffffffffffffffc;
      auVar123._28_4_ = auVar143._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar183._0_4_ = auVar103._0_4_ & (uint)__real_fffffffffffffffc;
      auVar183._4_4_ = auVar103._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar183._8_4_ = auVar103._8_4_ & (uint)__real_fffffffffffffffc;
      auVar183._12_4_ = auVar103._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar185._16_4_ = auVar40._0_4_ & (uint)__real_fffffffffffffffc;
      auVar185._0_16_ = auVar183;
      auVar185._20_4_ = auVar40._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar185._24_4_ = auVar40._8_4_ & (uint)__real_fffffffffffffffc;
      auVar185._28_4_ = auVar40._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar103 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
      auVar41 = vcvtdq2ps_avx(auVar189);
      param_6 = param_6 * (float)(param_5 + -1);
      uVar196 = (uint)param_6;
      uVar187 = 0;
      if (0 < (int)uVar196) {
        uVar187 = uVar196;
      }
      if ((int)(param_5 - 2U) < (int)uVar187) {
        uVar187 = param_5 - 2U;
      }
      auVar40._0_4_ = (int)(auVar103._0_4_ * auVar41._0_4_);
      auVar40._4_4_ = (int)(auVar103._4_4_ * auVar41._4_4_);
      auVar40._8_4_ = (int)(auVar103._8_4_ * auVar41._8_4_);
      auVar40._12_4_ = (int)(auVar103._12_4_ * auVar41._12_4_);
      auVar64._16_4_ = (int)(auVar103._0_4_ * auVar41._16_4_);
      auVar64._0_16_ = auVar40;
      auVar64._20_4_ = (int)(auVar103._4_4_ * auVar41._20_4_);
      auVar64._24_4_ = (int)(auVar103._8_4_ * auVar41._24_4_);
      auVar64._28_4_ = (int)(auVar103._12_4_ * auVar41._28_4_);
      auVar103 = vpmaxsd_avx(auVar64._16_16_,ZEXT416(0) << 0x20);
      auVar40 = vpmaxsd_avx(auVar40,ZEXT416(0) << 0x20);
      auVar163 = vpminsd_avx(auVar103,auVar204);
      auVar143 = vpminsd_avx(auVar40,auVar158);
      auVar91._16_16_ = auVar163;
      auVar91._0_16_ = auVar143;
      auVar205 = ZEXT3264(auVar91);
      auVar136 = auVar123._16_16_;
      auVar116 = auVar185._16_16_;
      cVar27 = (char)uVar30;
      if (param_5 < 0x100) {
        auVar194 = vpmovsxdq_avx(auVar143);
        auVar84 = vpshufd_avx(auVar143,0xee);
        auVar84 = vpmovsxdq_avx(auVar84);
        auVar84 = vpaddq_avx(auVar116,auVar84);
        auVar194 = vpaddq_avx(auVar183,auVar194);
        auVar82 = auVar194;
        if ((uVar30 & 1) != 0) {
          auVar82 = ZEXT116(*auVar194._0_8_);
        }
        auVar22 = vpmovsxdq_avx(auVar163);
        auVar21 = vpshufd_avx(auVar163,0xee);
        if ((uVar30 & 2) != 0) {
          auVar194 = vpinsrb_avx(auVar82,(uint)*auVar194._8_8_,1);
          auVar82 = vpblendw_avx(auVar194,auVar82,0xe);
        }
        auVar21 = vpmovsxdq_avx(auVar21);
        auVar194 = vpaddq_avx(auVar22,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar22 = vpaddq_avx(auVar21,auVar136);
        }
        else {
          auVar22 = vpmovzxwd_avx(auVar82);
          auVar22 = vpinsrb_avx(auVar22,(uint)*auVar84._0_8_,2);
          auVar22 = vpinsrb_avx(auVar22,(uint)auVar82[3],3);
          auVar82 = vpblendw_avx(auVar22,auVar82,0xc);
          auVar22 = vpaddq_avx(auVar21,auVar136);
        }
        if ((uVar30 & 8) != 0) {
          auVar21 = vpmovzxwd_avx(auVar82);
          auVar21 = vpinsrb_avx(auVar21,(uint)auVar82[2],2);
          auVar84 = vpinsrb_avx(auVar21,(uint)*auVar84._8_8_,3);
          auVar82 = vpblendw_avx(auVar84,auVar82,0xc);
        }
        auVar84 = auVar194;
        if ((uVar30 & 0x10) != 0) {
          auVar84 = vpshufb_avx(auVar82,___xmm_80800706808005048080030203020100);
          auVar84 = vpinsrb_avx(auVar84,(uint)*auVar194._0_8_,4);
          auVar84 = vpinsrb_avx(auVar84,(uint)auVar82[5],5);
          auVar82 = vpblendw_avx(auVar84,auVar82,8);
        }
        if ((uVar30 & 0x20) != 0) {
          auVar84 = vpshufb_avx(auVar82,___xmm_80800706808005048080030403020100);
          auVar84 = vpinsrb_avx(auVar84,(uint)*auVar194._8_8_,5);
          auVar82 = vpblendw_avx(auVar84,auVar82,8);
        }
        if ((uVar30 & 0x40) != 0) {
          auVar84 = vpshufb_avx(auVar82,___xmm_80800706808005048080050403020100);
          auVar84 = vpinsrb_avx(auVar84,(uint)*auVar22._0_8_,6);
          auVar82 = vpinsrb_avx(auVar84,(uint)auVar82[7],7);
        }
        if (cVar27 < '\0') {
          auVar194 = vpshufb_avx(auVar82,___xmm_80800706808005048006050403020100);
          auVar82 = vpinsrb_avx(auVar194,(uint)*auVar22._8_8_,7);
        }
        auVar22 = vpmovzxbd_avx(auVar82);
        auVar194 = vpshufd_avx(auVar82,0x55);
        auVar21 = vpmovzxbd_avx(auVar194);
        auVar159 = vpshufd_avx(ZEXT416(uVar187),0);
        auVar194 = vpcmpgtd_avx(auVar21,auVar159);
        auVar84 = vpcmpeqd_avx(auVar84,auVar84);
        auVar117 = auVar194 ^ auVar84;
        auVar82 = vpcmpgtd_avx(auVar22,auVar159);
        auVar84 = auVar82 ^ auVar84;
        auVar125._16_16_ = auVar117;
        auVar125._0_16_ = auVar84;
        auVar71._16_16_ = auVar194;
        auVar71._0_16_ = auVar82;
        auVar42 = auVar157 & ~auVar71;
        local_6c0 = auVar84._0_4_;
        uStack_6bc = auVar84._4_4_;
        uStack_6b8 = auVar84._8_4_;
        uStack_6b4 = auVar84._12_4_;
        uStack_6b0 = auVar117._0_4_;
        uStack_6ac = auVar117._4_4_;
        uStack_6a8 = auVar117._8_4_;
        uStack_6a4 = auVar117._12_4_;
        auVar41 = auVar91;
        if ((((((((SUB321(auVar42 >> 0x1f,0) & 1) != 0 || (SUB321(auVar42 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar42 >> 0x5f,0) & 1) != 0) || SUB321(auVar42 >> 0x7f,0) != '\0') ||
              (SUB321(auVar42 >> 0x9f,0) & 1) != 0) || SUB321(auVar42 >> 0xbf,0) != '\0') ||
            (SUB321(auVar42 >> 0xdf,0) & 1) != 0) || auVar42[0x1f] < '\0') {
          auVar84 = vpcmpgtd_avx(auVar21,auVar159);
          auVar194 = vpcmpgtd_avx(auVar22,auVar159);
          auVar72._16_16_ = auVar84;
          auVar72._0_16_ = auVar194;
          auVar41 = vblendvps_avx(auVar189,auVar91,auVar72);
          auVar103 = vpcmpgtd_avx(auVar204,auVar103);
          auVar40 = vpcmpgtd_avx(auVar158,auVar40);
          uVar187 = auVar40._0_4_ & local_6c0;
          uVar196 = auVar40._4_4_ & uStack_6bc;
          uVar197 = auVar40._8_4_ & uStack_6b8;
          uVar35 = auVar40._12_4_ & uStack_6b4;
          uVar179 = auVar103._0_4_ & uStack_6b0;
          uVar180 = auVar103._4_4_ & uStack_6ac;
          uVar181 = auVar103._8_4_ & uStack_6a8;
          uVar182 = auVar103._12_4_ & uStack_6a4;
          auVar126._0_4_ = uVar187 & auVar157._0_4_;
          auVar126._4_4_ = uVar196 & auVar157._4_4_;
          auVar126._8_4_ = uVar197 & auVar157._8_4_;
          auVar126._12_4_ = uVar35 & auVar157._12_4_;
          auVar126._16_4_ = uVar179 & auVar157._16_4_;
          auVar126._20_4_ = uVar180 & auVar157._20_4_;
          auVar126._24_4_ = uVar181 & auVar157._24_4_;
          auVar126._28_4_ = uVar182 & auVar157._28_4_;
          iVar28 = vmovmskps_avx(auVar126);
          if (iVar28 != 0) {
            auVar103 = vpcmpeqd_avx(auVar40,auVar40);
            do {
              auVar82 = vpsubd_avx(auVar91._0_16_,auVar103);
              auVar84 = vpmovsxdq_avx(auVar82);
              auVar40 = vpshufd_avx(auVar82,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar116,auVar40);
              auVar84 = vpaddq_avx(auVar183,auVar84);
              uVar37 = vmovmskps_avx(auVar126);
              auVar194 = auVar84;
              if ((uVar37 & 1) != 0) {
                auVar194 = ZEXT116(*auVar84._0_8_);
              }
              if ((uVar37 & 2) != 0) {
                auVar84 = vpinsrb_avx(auVar194,(uint)*auVar84._8_8_,1);
                auVar194 = vpblendw_avx(auVar84,auVar194,0xe);
              }
              if ((uVar37 & 4) != 0) {
                auVar84 = vpmovzxwd_avx(auVar194);
                auVar84 = vpinsrb_avx(auVar84,(uint)*auVar40._0_8_,2);
                auVar84 = vpinsrb_avx(auVar84,(uint)auVar194[3],3);
                auVar194 = vpblendw_avx(auVar84,auVar194,0xc);
              }
              if ((uVar37 & 8) != 0) {
                auVar84 = vpmovzxwd_avx(auVar194);
                auVar84 = vpinsrb_avx(auVar84,(uint)auVar194[2],2);
                auVar40 = vpinsrb_avx(auVar84,(uint)*auVar40._8_8_,3);
                auVar194 = vpblendw_avx(auVar40,auVar194,0xc);
              }
              auVar117 = vpsubd_avx(auVar91._16_16_,auVar103);
              auVar84 = vpmovsxdq_avx(auVar117);
              auVar40 = vpshufd_avx(auVar117,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar40,auVar136);
              auVar84 = vpaddq_avx(auVar84,auVar120);
              if ((uVar37 & 0x10) != 0) {
                auVar135 = vpshufb_avx(auVar194,___xmm_80800706808005048080030203020100);
                auVar135 = vpinsrb_avx(auVar135,(uint)*auVar84._0_8_,4);
                auVar135 = vpinsrb_avx(auVar135,(uint)auVar194[5],5);
                auVar194 = vpblendw_avx(auVar135,auVar194,8);
              }
              if ((uVar37 & 0x20) != 0) {
                auVar135 = vpshufb_avx(auVar194,___xmm_80800706808005048080030403020100);
                auVar84 = vpinsrb_avx(auVar135,(uint)*auVar84._8_8_,5);
                auVar194 = vpblendw_avx(auVar84,auVar194,8);
              }
              if ((uVar37 & 0x40) != 0) {
                auVar84 = vpshufb_avx(auVar194,___xmm_80800706808005048080050403020100);
                auVar84 = vpinsrb_avx(auVar84,(uint)*auVar40._0_8_,6);
                auVar194 = vpinsrb_avx(auVar84,(uint)auVar194[7],7);
              }
              if ((char)uVar37 < '\0') {
                auVar84 = vpshufb_avx(auVar194,___xmm_80800706808005048006050403020100);
                auVar194 = vpinsrb_avx(auVar84,(uint)*auVar40._8_8_,7);
              }
              auVar84 = vpmovzxbd_avx(auVar194);
              auVar40 = vpshufd_avx(auVar194,0x55);
              auVar40 = vpmovzxbd_avx(auVar40);
              auVar40 = vpcmpgtd_avx(auVar40,auVar159);
              auVar84 = vpcmpgtd_avx(auVar84,auVar159);
              auVar177._0_4_ = uVar187 & auVar84._0_4_;
              auVar177._4_4_ = uVar196 & auVar84._4_4_;
              auVar177._8_4_ = uVar197 & auVar84._8_4_;
              auVar177._12_4_ = uVar35 & auVar84._12_4_;
              auVar177._16_4_ = uVar179 & auVar40._0_4_;
              auVar177._20_4_ = uVar180 & auVar40._4_4_;
              auVar177._24_4_ = uVar181 & auVar40._8_4_;
              auVar177._28_4_ = uVar182 & auVar40._12_4_;
              uVar37 = 0;
              uVar130 = 0;
              uVar132 = 0;
              uVar134 = 0;
              uVar138 = 0;
              uVar140 = 0;
              uVar142 = 0;
              uVar115 = 0;
              auVar210._0_4_ = auVar177._0_4_ & auVar157._0_4_;
              auVar210._4_4_ = auVar177._4_4_ & auVar157._4_4_;
              auVar210._8_4_ = auVar177._8_4_ & auVar157._8_4_;
              auVar210._12_4_ = auVar177._12_4_ & auVar157._12_4_;
              auVar210._16_4_ = auVar177._16_4_ & auVar157._16_4_;
              auVar210._20_4_ = auVar177._20_4_ & auVar157._20_4_;
              auVar210._24_4_ = auVar177._24_4_ & auVar157._24_4_;
              auVar210._28_4_ = auVar177._28_4_ & auVar157._28_4_;
              uVar36 = vmovmskps_avx(auVar210);
              if ((char)iVar28 != (char)uVar36) {
                uVar115 = uVar187 ^ auVar177._0_4_;
                uVar37 = uVar196 ^ auVar177._4_4_;
                uVar130 = uVar197 ^ auVar177._8_4_;
                uVar132 = uVar35 ^ auVar177._12_4_;
                uVar134 = uVar179 ^ auVar177._16_4_;
                uVar138 = uVar180 ^ auVar177._20_4_;
                uVar140 = uVar181 ^ auVar177._24_4_;
                uVar142 = uVar182 ^ auVar177._28_4_;
              }
              auVar41 = vblendvps_avx(auVar41,auVar91,auVar177);
              auVar91._16_16_ = auVar117;
              auVar91._0_16_ = auVar82;
              auVar40 = vpcmpgtd_avx(auVar204,auVar117);
              auVar84 = vpcmpgtd_avx(auVar158,auVar82);
              uVar187 = auVar84._0_4_ & uVar115;
              uVar196 = auVar84._4_4_ & uVar37;
              uVar197 = auVar84._8_4_ & uVar130;
              uVar35 = auVar84._12_4_ & uVar132;
              uVar179 = auVar40._0_4_ & uVar134;
              uVar180 = auVar40._4_4_ & uVar138;
              uVar181 = auVar40._8_4_ & uVar140;
              uVar182 = auVar40._12_4_ & uVar142;
              auVar126._0_4_ = uVar187 & auVar157._0_4_;
              auVar126._4_4_ = uVar196 & auVar157._4_4_;
              auVar126._8_4_ = uVar197 & auVar157._8_4_;
              auVar126._12_4_ = uVar35 & auVar157._12_4_;
              auVar126._16_4_ = uVar179 & auVar157._16_4_;
              auVar126._20_4_ = uVar180 & auVar157._20_4_;
              auVar126._24_4_ = uVar181 & auVar157._24_4_;
              auVar126._28_4_ = uVar182 & auVar157._28_4_;
              iVar28 = vmovmskps_avx(auVar126);
            } while (iVar28 != 0);
          }
        }
        auVar103 = vpcmpgtd_avx(auVar21,auVar159);
        auVar40 = vpcmpgtd_avx(auVar22,auVar159);
        auVar73._16_16_ = auVar103;
        auVar73._0_16_ = auVar40;
        auVar73 = auVar73 & auVar157;
        if ((((((((SUB321(auVar73 >> 0x1f,0) & 1) != 0 || (SUB321(auVar73 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar73 >> 0x5f,0) & 1) != 0) || SUB321(auVar73 >> 0x7f,0) != '\0') ||
              (SUB321(auVar73 >> 0x9f,0) & 1) != 0) || SUB321(auVar73 >> 0xbf,0) != '\0') ||
            (SUB321(auVar73 >> 0xdf,0) & 1) != 0) || auVar73[0x1f] < '\0') {
          auVar41 = vblendvps_avx(ZEXT832(0) << 0x20,auVar41,auVar125);
          auVar105._4_4_ = __real_00000001;
          auVar105._0_4_ = __real_00000001;
          auVar105._8_4_ = __real_00000001;
          auVar105._12_4_ = __real_00000001;
          auVar103 = vpcmpgtd_avx(auVar163,auVar105);
          auVar40 = vpcmpgtd_avx(auVar143,auVar105);
          uVar187 = ~local_6c0 & auVar40._0_4_;
          uVar196 = ~uStack_6bc & auVar40._4_4_;
          uVar197 = ~uStack_6b8 & auVar40._8_4_;
          uVar35 = ~uStack_6b4 & auVar40._12_4_;
          uVar179 = ~uStack_6b0 & auVar103._0_4_;
          uVar180 = ~uStack_6ac & auVar103._4_4_;
          uVar181 = ~uStack_6a8 & auVar103._8_4_;
          uVar182 = ~uStack_6a4 & auVar103._12_4_;
          auVar127._0_4_ = uVar187 & auVar157._0_4_;
          auVar127._4_4_ = uVar196 & auVar157._4_4_;
          auVar127._8_4_ = uVar197 & auVar157._8_4_;
          auVar127._12_4_ = uVar35 & auVar157._12_4_;
          auVar127._16_4_ = uVar179 & auVar157._16_4_;
          auVar127._20_4_ = uVar180 & auVar157._20_4_;
          auVar127._24_4_ = uVar181 & auVar157._24_4_;
          auVar127._28_4_ = uVar182 & auVar157._28_4_;
          iVar28 = vmovmskps_avx(auVar127);
          if (iVar28 != 0) {
            auVar103 = vpcmpeqd_avx(auVar40,auVar40);
            auVar106._4_4_ = __real_00000002;
            auVar106._0_4_ = __real_00000002;
            auVar106._8_4_ = __real_00000002;
            auVar106._12_4_ = __real_00000002;
            do {
              auVar15._0_4_ = auVar205._0_4_ + auVar103._0_4_;
              auVar15._4_4_ = auVar205._4_4_ + auVar103._4_4_;
              auVar15._8_4_ = auVar205._8_4_ + auVar103._8_4_;
              auVar15._12_4_ = auVar205._12_4_ + auVar103._12_4_;
              auVar163 = vpmovsxdq_avx(auVar15);
              auVar40 = vpshufd_avx(auVar15,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar116,auVar40);
              auVar163 = vpaddq_avx(auVar183,auVar163);
              uVar37 = vmovmskps_avx(auVar127);
              auVar143 = auVar163;
              if ((uVar37 & 1) != 0) {
                auVar143 = ZEXT116(*auVar163._0_8_);
              }
              if ((uVar37 & 2) != 0) {
                auVar163 = vpinsrb_avx(auVar143,(uint)*auVar163._8_8_,1);
                auVar143 = vpblendw_avx(auVar163,auVar143,0xe);
              }
              if ((uVar37 & 4) != 0) {
                auVar163 = vpmovzxwd_avx(auVar143);
                auVar163 = vpinsrb_avx(auVar163,(uint)*auVar40._0_8_,2);
                auVar163 = vpinsrb_avx(auVar163,(uint)auVar143[3],3);
                auVar143 = vpblendw_avx(auVar163,auVar143,0xc);
              }
              if ((uVar37 & 8) != 0) {
                auVar163 = vpmovzxwd_avx(auVar143);
                auVar163 = vpinsrb_avx(auVar163,(uint)auVar143[2],2);
                auVar40 = vpinsrb_avx(auVar163,(uint)*auVar40._8_8_,3);
                auVar143 = vpblendw_avx(auVar40,auVar143,0xc);
              }
              auVar16._0_4_ = auVar205._16_4_ + auVar103._0_4_;
              auVar16._4_4_ = auVar205._20_4_ + auVar103._4_4_;
              auVar16._8_4_ = auVar205._24_4_ + auVar103._8_4_;
              auVar16._12_4_ = auVar205._28_4_ + auVar103._12_4_;
              auVar163 = vpmovsxdq_avx(auVar16);
              auVar40 = vpshufd_avx(auVar16,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar40,auVar136);
              auVar163 = vpaddq_avx(auVar163,auVar120);
              if ((uVar37 & 0x10) != 0) {
                auVar204 = vpshufb_avx(auVar143,___xmm_80800706808005048080030203020100);
                auVar204 = vpinsrb_avx(auVar204,(uint)*auVar163._0_8_,4);
                auVar204 = vpinsrb_avx(auVar204,(uint)auVar143[5],5);
                auVar143 = vpblendw_avx(auVar204,auVar143,8);
              }
              if ((uVar37 & 0x20) != 0) {
                auVar204 = vpshufb_avx(auVar143,___xmm_80800706808005048080030403020100);
                auVar163 = vpinsrb_avx(auVar204,(uint)*auVar163._8_8_,5);
                auVar143 = vpblendw_avx(auVar163,auVar143,8);
              }
              if ((uVar37 & 0x40) != 0) {
                auVar163 = vpshufb_avx(auVar143,___xmm_80800706808005048080050403020100);
                auVar163 = vpinsrb_avx(auVar163,(uint)*auVar40._0_8_,6);
                auVar143 = vpinsrb_avx(auVar163,(uint)auVar143[7],7);
              }
              if ((char)uVar37 < '\0') {
                auVar163 = vpshufb_avx(auVar143,___xmm_80800706808005048006050403020100);
                auVar143 = vpinsrb_avx(auVar163,(uint)*auVar40._8_8_,7);
              }
              auVar163 = vpmovzxbd_avx(auVar143);
              auVar40 = vpshufd_avx(auVar143,0x55);
              auVar40 = vpmovzxbd_avx(auVar40);
              auVar40 = vpcmpgtd_avx(auVar40,auVar159);
              auVar163 = vpcmpgtd_avx(auVar163,auVar159);
              auVar178._0_4_ = ~auVar163._0_4_ & uVar187;
              auVar178._4_4_ = ~auVar163._4_4_ & uVar196;
              auVar178._8_4_ = ~auVar163._8_4_ & uVar197;
              auVar178._12_4_ = ~auVar163._12_4_ & uVar35;
              auVar178._16_4_ = ~auVar40._0_4_ & uVar179;
              auVar178._20_4_ = ~auVar40._4_4_ & uVar180;
              auVar178._24_4_ = ~auVar40._8_4_ & uVar181;
              auVar178._28_4_ = ~auVar40._12_4_ & uVar182;
              uVar37 = 0;
              uVar130 = 0;
              uVar132 = 0;
              uVar134 = 0;
              uVar138 = 0;
              uVar140 = 0;
              uVar142 = 0;
              uVar115 = 0;
              auVar211._0_4_ = auVar178._0_4_ & auVar157._0_4_;
              auVar211._4_4_ = auVar178._4_4_ & auVar157._4_4_;
              auVar211._8_4_ = auVar178._8_4_ & auVar157._8_4_;
              auVar211._12_4_ = auVar178._12_4_ & auVar157._12_4_;
              auVar211._16_4_ = auVar178._16_4_ & auVar157._16_4_;
              auVar211._20_4_ = auVar178._20_4_ & auVar157._20_4_;
              auVar211._24_4_ = auVar178._24_4_ & auVar157._24_4_;
              auVar211._28_4_ = auVar178._28_4_ & auVar157._28_4_;
              uVar36 = vmovmskps_avx(auVar211);
              if ((char)iVar28 != (char)uVar36) {
                uVar115 = uVar187 ^ auVar178._0_4_;
                uVar37 = uVar196 ^ auVar178._4_4_;
                uVar130 = uVar197 ^ auVar178._8_4_;
                uVar132 = uVar35 ^ auVar178._12_4_;
                uVar134 = uVar179 ^ auVar178._16_4_;
                uVar138 = uVar180 ^ auVar178._20_4_;
                uVar140 = uVar181 ^ auVar178._24_4_;
                uVar142 = uVar182 ^ auVar178._28_4_;
              }
              auVar168._16_16_ = auVar16;
              auVar168._0_16_ = auVar15;
              auVar41 = vblendvps_avx(auVar41,auVar168,auVar178);
              auVar40 = vpcmpgtd_avx(auVar205._0_16_,auVar106);
              auVar163 = vpcmpgtd_avx(auVar205._16_16_,auVar106);
              uVar187 = auVar40._0_4_ & uVar115;
              uVar196 = auVar40._4_4_ & uVar37;
              uVar197 = auVar40._8_4_ & uVar130;
              uVar35 = auVar40._12_4_ & uVar132;
              uVar179 = auVar163._0_4_ & uVar134;
              uVar180 = auVar163._4_4_ & uVar138;
              uVar181 = auVar163._8_4_ & uVar140;
              uVar182 = auVar163._12_4_ & uVar142;
              auVar127._0_4_ = uVar187 & auVar157._0_4_;
              auVar127._4_4_ = uVar196 & auVar157._4_4_;
              auVar127._8_4_ = uVar197 & auVar157._8_4_;
              auVar127._12_4_ = uVar35 & auVar157._12_4_;
              auVar127._16_4_ = uVar179 & auVar157._16_4_;
              auVar127._20_4_ = uVar180 & auVar157._20_4_;
              auVar127._24_4_ = uVar181 & auVar157._24_4_;
              auVar127._28_4_ = uVar182 & auVar157._28_4_;
              iVar28 = vmovmskps_avx(auVar127);
              auVar205 = ZEXT3264(auVar168);
            } while (iVar28 != 0);
          }
        }
        auVar41 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar41,auVar157);
        auVar143 = auVar41._0_16_;
        auVar40 = vpmovsxdq_avx(auVar143);
        auVar103 = vshufpd_avx(auVar143,auVar143,3);
        auVar103 = vpmovsxdq_avx(auVar103);
        auVar204 = auVar41._16_16_;
        auVar103 = vpaddq_avx(auVar116,auVar103);
        auVar40 = vpaddq_avx(auVar183,auVar40);
        auVar163 = auVar103;
        if ((uVar30 & 1) != 0) {
          auVar163 = ZEXT116(*auVar40._0_8_);
        }
        auVar158 = vpmovsxdq_avx(auVar204);
        auVar84 = vshufpd_avx(auVar204,auVar204,3);
        if ((uVar30 & 2) != 0) {
          auVar40 = vpinsrb_avx(auVar163,(uint)*auVar40._8_8_,1);
          auVar163 = vpblendw_avx(auVar40,auVar163,0xe);
        }
        auVar84 = vpmovsxdq_avx(auVar84);
        auVar40 = vpaddq_avx(auVar158,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar158 = vpaddq_avx(auVar84,auVar136);
          if ((uVar30 & 8) == 0) goto LAB_140c4be85;
LAB_140c4dbe0:
          auVar84 = vpmovzxwd_avx(auVar163);
          auVar84 = vpinsrb_avx(auVar84,(uint)auVar163[2],2);
          auVar103 = vpinsrb_avx(auVar84,(uint)*auVar103._8_8_,3);
          auVar163 = vpblendw_avx(auVar103,auVar163,0xc);
          auVar95._16_16_ = auVar158;
          auVar95._0_16_ = auVar40;
          if ((uVar30 & 0x10) != 0) goto LAB_140c4dc13;
LAB_140c4be95:
          if ((uVar30 & 0x20) == 0) goto LAB_140c4be9f;
LAB_140c4dc43:
          auVar103 = vpshufb_avx(auVar163,___xmm_80800706808005048080030403020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar95._8_8_,5);
          auVar163 = vpblendw_avx(auVar103,auVar163,8);
          if ((uVar30 & 0x40) != 0) goto LAB_140c4dc68;
LAB_140c4bea9:
          auVar40 = auVar95._0_16_;
        }
        else {
          auVar158 = vpmovzxwd_avx(auVar163);
          auVar158 = vpinsrb_avx(auVar158,(uint)*auVar103._0_8_,2);
          auVar158 = vpinsrb_avx(auVar158,(uint)auVar163[3],3);
          auVar163 = vpblendw_avx(auVar158,auVar163,0xc);
          auVar158 = vpaddq_avx(auVar84,auVar136);
          if ((uVar30 & 8) != 0) goto LAB_140c4dbe0;
LAB_140c4be85:
          auVar95._16_16_ = auVar158;
          auVar95._0_16_ = auVar40;
          if ((uVar30 & 0x10) == 0) goto LAB_140c4be95;
LAB_140c4dc13:
          auVar103 = vpshufb_avx(auVar163,___xmm_80800706808005048080030203020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar95._0_8_,4);
          auVar103 = vpinsrb_avx(auVar103,(uint)auVar163[5],5);
          auVar163 = vpblendw_avx(auVar103,auVar163,8);
          if ((uVar30 & 0x20) != 0) goto LAB_140c4dc43;
LAB_140c4be9f:
          if ((uVar30 & 0x40) == 0) goto LAB_140c4bea9;
LAB_140c4dc68:
          auVar40 = auVar95._0_16_;
          auVar103 = vpshufb_avx(auVar163,___xmm_80800706808005048080050403020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar95._16_8_,6);
          auVar163 = vpinsrb_avx(auVar103,(uint)auVar163[7],7);
        }
        if (cVar27 < '\0') {
          auVar40 = vpshufb_avx(auVar163,___xmm_80800706808005048006050403020100);
          auVar163 = vpinsrb_avx(auVar40,(uint)*auVar95._24_8_,7);
        }
        auVar103 = vpcmpeqd_avx(auVar40,auVar40);
        auVar40 = vpsubd_avx(auVar204,auVar103);
        auVar103 = vpsubd_avx(auVar143,auVar103);
        auVar74._16_16_ = auVar40;
        auVar74._0_16_ = auVar103;
        auVar42 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar74,auVar157);
        auVar103 = vpcmpgtd_avx(ZEXT416(uVar38),auVar42._16_16_);
        auVar40 = vpcmpgtd_avx(auVar39,auVar42._0_16_);
        auVar75._16_16_ = auVar103;
        auVar75._0_16_ = auVar40;
        auVar85 = auVar157 & ~auVar75;
        if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0') ||
              (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
            (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
          auVar76._0_4_ = ~auVar40._0_4_ & auVar157._0_4_;
          auVar76._4_4_ = ~auVar40._4_4_ & auVar157._4_4_;
          auVar76._8_4_ = ~auVar40._8_4_ & auVar157._8_4_;
          auVar76._12_4_ = ~auVar40._12_4_ & auVar157._12_4_;
          auVar76._16_4_ = ~auVar103._0_4_ & auVar157._16_4_;
          auVar76._20_4_ = ~auVar103._4_4_ & auVar157._20_4_;
          auVar76._24_4_ = ~auVar103._8_4_ & auVar157._24_4_;
          auVar76._28_4_ = ~auVar103._12_4_ & auVar157._28_4_;
          auVar42 = vblendvps_avx(auVar42,auVar189,auVar76);
        }
        auVar40 = vpmovsxdq_avx(auVar42._0_16_);
        auVar103 = vpshufd_avx(auVar42._0_16_,0xee);
        auVar103 = vpmovsxdq_avx(auVar103);
        auVar103 = vpaddq_avx(auVar116,auVar103);
        auVar40 = vpaddq_avx(auVar183,auVar40);
        auVar143 = auVar40;
        if ((uVar30 & 1) != 0) {
          auVar143 = ZEXT116(*auVar40._0_8_);
        }
        auVar204 = vpmovsxdq_avx(auVar42._16_16_);
        auVar158 = vpshufd_avx(auVar42._16_16_,0xee);
        if ((uVar30 & 2) != 0) {
          auVar40 = vpinsrb_avx(auVar143,(uint)*auVar40._8_8_,1);
          auVar143 = vpblendw_avx(auVar40,auVar143,0xe);
        }
        auVar158 = vpmovsxdq_avx(auVar158);
        auVar40 = vpaddq_avx(auVar204,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar204 = vpaddq_avx(auVar158,auVar136);
          if ((uVar30 & 8) == 0) goto LAB_140c4bf93;
LAB_140c4dce8:
          auVar136 = vpmovzxwd_avx(auVar143);
          auVar136 = vpinsrb_avx(auVar136,(uint)auVar143[2],2);
          auVar103 = vpinsrb_avx(auVar136,(uint)*auVar103._8_8_,3);
          auVar143 = vpblendw_avx(auVar103,auVar143,0xc);
          auVar96._16_16_ = auVar204;
          auVar96._0_16_ = auVar40;
          if ((uVar30 & 0x10) != 0) goto LAB_140c4dd1b;
LAB_140c4bfa3:
          if ((uVar30 & 0x20) == 0) goto LAB_140c4bfad;
LAB_140c4dd4b:
          auVar103 = vpshufb_avx(auVar143,___xmm_80800706808005048080030403020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar96._8_8_,5);
          auVar143 = vpblendw_avx(auVar103,auVar143,8);
          auVar103 = vpmovzxbd_avx(auVar163);
          auVar40 = vpshufd_avx(auVar163,0x55);
          if ((uVar30 & 0x40) != 0) goto LAB_140c4dd7a;
LAB_140c4bfc1:
          auVar40 = vpmovzxbd_avx(auVar40);
        }
        else {
          auVar204 = vpmovzxwd_avx(auVar143);
          auVar204 = vpinsrb_avx(auVar204,(uint)*auVar103._0_8_,2);
          auVar204 = vpinsrb_avx(auVar204,(uint)auVar143[3],3);
          auVar143 = vpblendw_avx(auVar204,auVar143,0xc);
          auVar204 = vpaddq_avx(auVar158,auVar136);
          if ((uVar30 & 8) != 0) goto LAB_140c4dce8;
LAB_140c4bf93:
          auVar96._16_16_ = auVar204;
          auVar96._0_16_ = auVar40;
          if ((uVar30 & 0x10) == 0) goto LAB_140c4bfa3;
LAB_140c4dd1b:
          auVar103 = vpshufb_avx(auVar143,___xmm_80800706808005048080030203020100);
          auVar103 = vpinsrb_avx(auVar103,(uint)*auVar96._0_8_,4);
          auVar103 = vpinsrb_avx(auVar103,(uint)auVar143[5],5);
          auVar143 = vpblendw_avx(auVar103,auVar143,8);
          if ((uVar30 & 0x20) != 0) goto LAB_140c4dd4b;
LAB_140c4bfad:
          auVar103 = vpmovzxbd_avx(auVar163);
          auVar40 = vpshufd_avx(auVar163,0x55);
          if ((uVar30 & 0x40) == 0) goto LAB_140c4bfc1;
LAB_140c4dd7a:
          auVar163 = vpshufb_avx(auVar143,___xmm_80800706808005048080050403020100);
          auVar163 = vpinsrb_avx(auVar163,(uint)*auVar96._16_8_,6);
          auVar143 = vpinsrb_avx(auVar163,(uint)auVar143[7],7);
          auVar40 = vpmovzxbd_avx(auVar40);
        }
        if (cVar27 < '\0') {
          auVar163 = vpshufb_avx(auVar143,___xmm_80800706808005048006050403020100);
          auVar143 = vpinsrb_avx(auVar163,(uint)*auVar96._24_8_,7);
        }
        auVar94._16_16_ = auVar40;
        auVar94._0_16_ = auVar103;
        auVar103 = vpmovzxbd_avx(auVar143);
        auVar40 = vpshufd_avx(auVar143,0x55);
        auVar40 = vpmovzxbd_avx(auVar40);
        auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      else {
        auVar7._4_4_ = auVar163._4_4_ * 2;
        auVar7._0_4_ = auVar163._0_4_ * 2;
        auVar7._8_4_ = auVar163._8_4_ * 2;
        auVar7._12_4_ = auVar163._12_4_ * 2;
        auVar8._4_4_ = auVar143._4_4_ * 2;
        auVar8._0_4_ = auVar143._0_4_ * 2;
        auVar8._8_4_ = auVar143._8_4_ * 2;
        auVar8._12_4_ = auVar143._12_4_ * 2;
        auVar194 = vpmovsxdq_avx(auVar8);
        auVar84 = vpshufd_avx(auVar8,0xee);
        auVar84 = vpmovsxdq_avx(auVar84);
        auVar84 = vpaddq_avx(auVar116,auVar84);
        auVar194 = vpaddq_avx(auVar183,auVar194);
        auVar82 = auVar84;
        if ((uVar30 & 1) != 0) {
          auVar82 = ZEXT216(*auVar194._0_8_);
        }
        auVar22 = vpmovsxdq_avx(auVar7);
        auVar21 = vpshufd_avx(auVar7,0xee);
        if ((uVar30 & 2) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar194._8_8_,1);
        }
        auVar21 = vpmovsxdq_avx(auVar21);
        auVar194 = vpaddq_avx(auVar22,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar22 = vpaddq_avx(auVar21,auVar136);
        }
        else {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar84._0_8_,2);
          auVar22 = vpaddq_avx(auVar21,auVar136);
        }
        if ((uVar30 & 8) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar84._8_8_,3);
        }
        if ((uVar30 & 0x10) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar194._0_8_,4);
        }
        if ((uVar30 & 0x20) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar194._8_8_,5);
        }
        if ((uVar30 & 0x40) != 0) {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar22._0_8_,6);
        }
        if (cVar27 < '\0') {
          auVar82 = vpinsrw_avx(auVar82,(uint)*auVar22._8_8_,7);
        }
        auVar117 = vpunpckhwd_avx(auVar82,(undefined1  [16])0x0);
        auVar21 = vpmovzxwd_avx(auVar82);
        auVar159 = vpshufd_avx(ZEXT416(uVar187),0);
        auVar194 = vpcmpgtd_avx(auVar117,auVar159);
        auVar84 = vpcmpeqd_avx(auVar22,auVar22);
        auVar22 = auVar194 ^ auVar84;
        auVar82 = vpcmpgtd_avx(auVar21,auVar159);
        auVar84 = auVar82 ^ auVar84;
        auVar166._16_16_ = auVar22;
        auVar166._0_16_ = auVar84;
        auVar65._16_16_ = auVar194;
        auVar65._0_16_ = auVar82;
        auVar42 = auVar157 & ~auVar65;
        local_6c0 = auVar84._0_4_;
        uStack_6bc = auVar84._4_4_;
        uStack_6b8 = auVar84._8_4_;
        uStack_6b4 = auVar84._12_4_;
        uStack_6b0 = auVar22._0_4_;
        uStack_6ac = auVar22._4_4_;
        uStack_6a8 = auVar22._8_4_;
        uStack_6a4 = auVar22._12_4_;
        auVar41 = auVar91;
        if ((((((((SUB321(auVar42 >> 0x1f,0) & 1) != 0 || (SUB321(auVar42 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar42 >> 0x5f,0) & 1) != 0) || SUB321(auVar42 >> 0x7f,0) != '\0') ||
              (SUB321(auVar42 >> 0x9f,0) & 1) != 0) || SUB321(auVar42 >> 0xbf,0) != '\0') ||
            (SUB321(auVar42 >> 0xdf,0) & 1) != 0) || auVar42[0x1f] < '\0') {
          auVar84 = vpcmpgtd_avx(auVar117,auVar159);
          auVar194 = vpcmpgtd_avx(auVar21,auVar159);
          auVar66._16_16_ = auVar84;
          auVar66._0_16_ = auVar194;
          auVar41 = vblendvps_avx(auVar189,auVar91,auVar66);
          auVar103 = vpcmpgtd_avx(auVar204,auVar103);
          auVar40 = vpcmpgtd_avx(auVar158,auVar40);
          uVar187 = auVar40._0_4_ & local_6c0;
          uVar196 = auVar40._4_4_ & uStack_6bc;
          uVar197 = auVar40._8_4_ & uStack_6b8;
          uVar35 = auVar40._12_4_ & uStack_6b4;
          uVar179 = auVar103._0_4_ & uStack_6b0;
          uVar180 = auVar103._4_4_ & uStack_6ac;
          uVar181 = auVar103._8_4_ & uStack_6a8;
          uVar182 = auVar103._12_4_ & uStack_6a4;
          auVar124._0_4_ = uVar187 & auVar157._0_4_;
          auVar124._4_4_ = uVar196 & auVar157._4_4_;
          auVar124._8_4_ = uVar197 & auVar157._8_4_;
          auVar124._12_4_ = uVar35 & auVar157._12_4_;
          auVar124._16_4_ = uVar179 & auVar157._16_4_;
          auVar124._20_4_ = uVar180 & auVar157._20_4_;
          auVar124._24_4_ = uVar181 & auVar157._24_4_;
          auVar124._28_4_ = uVar182 & auVar157._28_4_;
          iVar28 = vmovmskps_avx(auVar124);
          if (iVar28 != 0) {
            auVar103 = vpcmpeqd_avx(auVar40,auVar40);
            do {
              auVar82 = vpsubd_avx(auVar91._0_16_,auVar103);
              auVar9._4_4_ = auVar82._4_4_ * 2;
              auVar9._0_4_ = auVar82._0_4_ * 2;
              auVar9._8_4_ = auVar82._8_4_ * 2;
              auVar9._12_4_ = auVar82._12_4_ * 2;
              auVar84 = vpmovsxdq_avx(auVar9);
              auVar40 = vpshufd_avx(auVar9,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar116,auVar40);
              auVar84 = vpaddq_avx(auVar183,auVar84);
              uVar37 = vmovmskps_avx(auVar124);
              auVar194 = auVar40;
              if ((uVar37 & 1) != 0) {
                auVar194 = ZEXT216(*auVar84._0_8_);
              }
              if ((uVar37 & 2) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar84._8_8_,1);
              }
              if ((uVar37 & 4) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar40._0_8_,2);
              }
              if ((uVar37 & 8) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar40._8_8_,3);
              }
              auVar22 = vpsubd_avx(auVar91._16_16_,auVar103);
              auVar10._4_4_ = auVar22._4_4_ * 2;
              auVar10._0_4_ = auVar22._0_4_ * 2;
              auVar10._8_4_ = auVar22._8_4_ * 2;
              auVar10._12_4_ = auVar22._12_4_ * 2;
              auVar84 = vpmovsxdq_avx(auVar10);
              auVar40 = vpshufd_avx(auVar10,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar40,auVar136);
              auVar84 = vpaddq_avx(auVar84,auVar120);
              if ((uVar37 & 0x10) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar84._0_8_,4);
              }
              if ((uVar37 & 0x20) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar84._8_8_,5);
              }
              if ((uVar37 & 0x40) != 0) {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar40._0_8_,6);
              }
              if ((char)uVar37 < '\0') {
                auVar194 = vpinsrw_avx(auVar194,(uint)*auVar40._8_8_,7);
              }
              auVar40 = vpunpckhwd_avx(auVar194,___xmm_00000000000000000000000000000000);
              auVar84 = vpmovzxwd_avx(auVar194);
              auVar40 = vpcmpgtd_avx(auVar40,auVar159);
              auVar84 = vpcmpgtd_avx(auVar84,auVar159);
              auVar199._0_4_ = auVar84._0_4_ & uVar187;
              auVar199._4_4_ = auVar84._4_4_ & uVar196;
              auVar199._8_4_ = auVar84._8_4_ & uVar197;
              auVar199._12_4_ = auVar84._12_4_ & uVar35;
              auVar199._16_4_ = auVar40._0_4_ & uVar179;
              auVar199._20_4_ = auVar40._4_4_ & uVar180;
              auVar199._24_4_ = auVar40._8_4_ & uVar181;
              auVar199._28_4_ = auVar40._12_4_ & uVar182;
              uVar37 = 0;
              uVar130 = 0;
              uVar132 = 0;
              uVar134 = 0;
              uVar138 = 0;
              uVar140 = 0;
              uVar142 = 0;
              uVar115 = 0;
              auVar208._0_4_ = auVar199._0_4_ & auVar157._0_4_;
              auVar208._4_4_ = auVar199._4_4_ & auVar157._4_4_;
              auVar208._8_4_ = auVar199._8_4_ & auVar157._8_4_;
              auVar208._12_4_ = auVar199._12_4_ & auVar157._12_4_;
              auVar208._16_4_ = auVar199._16_4_ & auVar157._16_4_;
              auVar208._20_4_ = auVar199._20_4_ & auVar157._20_4_;
              auVar208._24_4_ = auVar199._24_4_ & auVar157._24_4_;
              auVar208._28_4_ = auVar199._28_4_ & auVar157._28_4_;
              uVar36 = vmovmskps_avx(auVar208);
              if ((char)iVar28 != (char)uVar36) {
                uVar115 = auVar199._0_4_ ^ uVar187;
                uVar37 = auVar199._4_4_ ^ uVar196;
                uVar130 = auVar199._8_4_ ^ uVar197;
                uVar132 = auVar199._12_4_ ^ uVar35;
                uVar134 = auVar199._16_4_ ^ uVar179;
                uVar138 = auVar199._20_4_ ^ uVar180;
                uVar140 = auVar199._24_4_ ^ uVar181;
                uVar142 = auVar199._28_4_ ^ uVar182;
              }
              auVar41 = vblendvps_avx(auVar41,auVar91,auVar199);
              auVar91._16_16_ = auVar22;
              auVar91._0_16_ = auVar82;
              auVar40 = vpcmpgtd_avx(auVar204,auVar22);
              auVar84 = vpcmpgtd_avx(auVar158,auVar82);
              uVar187 = auVar84._0_4_ & uVar115;
              uVar196 = auVar84._4_4_ & uVar37;
              uVar197 = auVar84._8_4_ & uVar130;
              uVar35 = auVar84._12_4_ & uVar132;
              uVar179 = auVar40._0_4_ & uVar134;
              uVar180 = auVar40._4_4_ & uVar138;
              uVar181 = auVar40._8_4_ & uVar140;
              uVar182 = auVar40._12_4_ & uVar142;
              auVar124._0_4_ = uVar187 & auVar157._0_4_;
              auVar124._4_4_ = uVar196 & auVar157._4_4_;
              auVar124._8_4_ = uVar197 & auVar157._8_4_;
              auVar124._12_4_ = uVar35 & auVar157._12_4_;
              auVar124._16_4_ = uVar179 & auVar157._16_4_;
              auVar124._20_4_ = uVar180 & auVar157._20_4_;
              auVar124._24_4_ = uVar181 & auVar157._24_4_;
              auVar124._28_4_ = uVar182 & auVar157._28_4_;
              iVar28 = vmovmskps_avx(auVar124);
            } while (iVar28 != 0);
          }
        }
        auVar103 = vpcmpgtd_avx(auVar117,auVar159);
        auVar40 = vpcmpgtd_avx(auVar21,auVar159);
        auVar67._16_16_ = auVar103;
        auVar67._0_16_ = auVar40;
        auVar67 = auVar67 & auVar157;
        if ((((((((SUB321(auVar67 >> 0x1f,0) & 1) != 0 || (SUB321(auVar67 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar67 >> 0x5f,0) & 1) != 0) || SUB321(auVar67 >> 0x7f,0) != '\0') ||
              (SUB321(auVar67 >> 0x9f,0) & 1) != 0) || SUB321(auVar67 >> 0xbf,0) != '\0') ||
            (SUB321(auVar67 >> 0xdf,0) & 1) != 0) || auVar67[0x1f] < '\0') {
          auVar41 = vblendvps_avx(ZEXT832(0) << 0x20,auVar41,auVar166);
          auVar104._4_4_ = __real_00000001;
          auVar104._0_4_ = __real_00000001;
          auVar104._8_4_ = __real_00000001;
          auVar104._12_4_ = __real_00000001;
          auVar103 = vpcmpgtd_avx(auVar163,auVar104);
          auVar40 = vpcmpgtd_avx(auVar143,auVar104);
          uVar187 = ~local_6c0 & auVar40._0_4_;
          uVar196 = ~uStack_6bc & auVar40._4_4_;
          uVar197 = ~uStack_6b8 & auVar40._8_4_;
          uVar35 = ~uStack_6b4 & auVar40._12_4_;
          uVar179 = ~uStack_6b0 & auVar103._0_4_;
          uVar180 = ~uStack_6ac & auVar103._4_4_;
          uVar181 = ~uStack_6a8 & auVar103._8_4_;
          uVar182 = ~uStack_6a4 & auVar103._12_4_;
          auVar111._0_4_ = uVar187 & auVar157._0_4_;
          auVar111._4_4_ = uVar196 & auVar157._4_4_;
          auVar111._8_4_ = uVar197 & auVar157._8_4_;
          auVar111._12_4_ = uVar35 & auVar157._12_4_;
          auVar111._16_4_ = uVar179 & auVar157._16_4_;
          auVar111._20_4_ = uVar180 & auVar157._20_4_;
          auVar111._24_4_ = uVar181 & auVar157._24_4_;
          auVar111._28_4_ = uVar182 & auVar157._28_4_;
          iVar28 = vmovmskps_avx(auVar111);
          if (iVar28 != 0) {
            auVar103 = vpcmpeqd_avx(auVar40,auVar40);
            auVar169._4_4_ = __real_00000002;
            auVar169._0_4_ = __real_00000002;
            auVar169._8_4_ = __real_00000002;
            auVar169._12_4_ = __real_00000002;
            do {
              iVar1 = auVar205._0_4_ + auVar103._0_4_;
              iVar29 = auVar205._4_4_ + auVar103._4_4_;
              auVar167._4_4_ = iVar29;
              auVar167._0_4_ = iVar1;
              iVar18 = auVar205._8_4_ + auVar103._8_4_;
              auVar167._8_4_ = iVar18;
              iVar20 = auVar205._12_4_ + auVar103._12_4_;
              auVar167._12_4_ = iVar20;
              auVar11._4_4_ = iVar29 * 2;
              auVar11._0_4_ = iVar1 * 2;
              auVar11._8_4_ = iVar18 * 2;
              auVar11._12_4_ = iVar20 * 2;
              auVar163 = vpmovsxdq_avx(auVar11);
              auVar40 = vpshufd_avx(auVar11,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar116,auVar40);
              auVar163 = vpaddq_avx(auVar183,auVar163);
              uVar37 = vmovmskps_avx(auVar111);
              auVar143 = auVar163;
              if ((uVar37 & 1) != 0) {
                auVar143 = ZEXT216(*auVar163._0_8_);
              }
              if ((uVar37 & 2) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar163._8_8_,1);
              }
              if ((uVar37 & 4) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._0_8_,2);
              }
              if ((uVar37 & 8) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._8_8_,3);
              }
              iVar1 = auVar205._16_4_ + auVar103._0_4_;
              iVar29 = auVar205._20_4_ + auVar103._4_4_;
              auVar167._20_4_ = iVar29;
              auVar167._16_4_ = iVar1;
              iVar18 = auVar205._24_4_ + auVar103._8_4_;
              auVar167._24_4_ = iVar18;
              iVar20 = auVar205._28_4_ + auVar103._12_4_;
              auVar167._28_4_ = iVar20;
              auVar12._4_4_ = iVar29 * 2;
              auVar12._0_4_ = iVar1 * 2;
              auVar12._8_4_ = iVar18 * 2;
              auVar12._12_4_ = iVar20 * 2;
              auVar163 = vpmovsxdq_avx(auVar12);
              auVar40 = vpshufd_avx(auVar12,0xee);
              auVar40 = vpmovsxdq_avx(auVar40);
              auVar40 = vpaddq_avx(auVar40,auVar136);
              auVar163 = vpaddq_avx(auVar163,auVar120);
              if ((uVar37 & 0x10) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar163._0_8_,4);
              }
              if ((uVar37 & 0x20) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar163._8_8_,5);
              }
              if ((uVar37 & 0x40) != 0) {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._0_8_,6);
              }
              if ((char)uVar37 < '\0') {
                auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._8_8_,7);
              }
              auVar40 = vpunpckhwd_avx(auVar143,___xmm_00000000000000000000000000000000);
              auVar163 = vpmovzxwd_avx(auVar143);
              auVar40 = vpcmpgtd_avx(auVar40,auVar159);
              auVar163 = vpcmpgtd_avx(auVar163,auVar159);
              auVar200._0_4_ = ~auVar163._0_4_ & uVar187;
              auVar200._4_4_ = ~auVar163._4_4_ & uVar196;
              auVar200._8_4_ = ~auVar163._8_4_ & uVar197;
              auVar200._12_4_ = ~auVar163._12_4_ & uVar35;
              auVar200._16_4_ = ~auVar40._0_4_ & uVar179;
              auVar200._20_4_ = ~auVar40._4_4_ & uVar180;
              auVar200._24_4_ = ~auVar40._8_4_ & uVar181;
              auVar200._28_4_ = ~auVar40._12_4_ & uVar182;
              uVar37 = 0;
              uVar130 = 0;
              uVar132 = 0;
              uVar134 = 0;
              uVar138 = 0;
              uVar140 = 0;
              uVar142 = 0;
              uVar115 = 0;
              auVar209._0_4_ = auVar200._0_4_ & auVar157._0_4_;
              auVar209._4_4_ = auVar200._4_4_ & auVar157._4_4_;
              auVar209._8_4_ = auVar200._8_4_ & auVar157._8_4_;
              auVar209._12_4_ = auVar200._12_4_ & auVar157._12_4_;
              auVar209._16_4_ = auVar200._16_4_ & auVar157._16_4_;
              auVar209._20_4_ = auVar200._20_4_ & auVar157._20_4_;
              auVar209._24_4_ = auVar200._24_4_ & auVar157._24_4_;
              auVar209._28_4_ = auVar200._28_4_ & auVar157._28_4_;
              uVar36 = vmovmskps_avx(auVar209);
              if ((char)iVar28 != (char)uVar36) {
                uVar115 = auVar200._0_4_ ^ uVar187;
                uVar37 = auVar200._4_4_ ^ uVar196;
                uVar130 = auVar200._8_4_ ^ uVar197;
                uVar132 = auVar200._12_4_ ^ uVar35;
                uVar134 = auVar200._16_4_ ^ uVar179;
                uVar138 = auVar200._20_4_ ^ uVar180;
                uVar140 = auVar200._24_4_ ^ uVar181;
                uVar142 = auVar200._28_4_ ^ uVar182;
              }
              auVar41 = vblendvps_avx(auVar41,auVar167,auVar200);
              auVar40 = vpcmpgtd_avx(auVar205._0_16_,auVar169);
              auVar163 = vpcmpgtd_avx(auVar205._16_16_,auVar169);
              uVar187 = auVar40._0_4_ & uVar115;
              uVar196 = auVar40._4_4_ & uVar37;
              uVar197 = auVar40._8_4_ & uVar130;
              uVar35 = auVar40._12_4_ & uVar132;
              uVar179 = auVar163._0_4_ & uVar134;
              uVar180 = auVar163._4_4_ & uVar138;
              uVar181 = auVar163._8_4_ & uVar140;
              uVar182 = auVar163._12_4_ & uVar142;
              auVar111._0_4_ = uVar187 & auVar157._0_4_;
              auVar111._4_4_ = uVar196 & auVar157._4_4_;
              auVar111._8_4_ = uVar197 & auVar157._8_4_;
              auVar111._12_4_ = uVar35 & auVar157._12_4_;
              auVar111._16_4_ = uVar179 & auVar157._16_4_;
              auVar111._20_4_ = uVar180 & auVar157._20_4_;
              auVar111._24_4_ = uVar181 & auVar157._24_4_;
              auVar111._28_4_ = uVar182 & auVar157._28_4_;
              iVar28 = vmovmskps_avx(auVar111);
              auVar205 = ZEXT3264(auVar167);
            } while (iVar28 != 0);
          }
        }
        auVar41 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar41,auVar157);
        auVar103._4_4_ = auVar41._20_4_ * 2;
        auVar103._0_4_ = auVar41._16_4_ * 2;
        auVar103._8_4_ = auVar41._24_4_ * 2;
        auVar103._12_4_ = auVar41._28_4_ * 2;
        auVar13._4_4_ = auVar41._4_4_ * 2;
        auVar13._0_4_ = auVar41._0_4_ * 2;
        auVar13._8_4_ = auVar41._8_4_ * 2;
        auVar13._12_4_ = auVar41._12_4_ * 2;
        auVar163 = vpmovsxdq_avx(auVar13);
        auVar40 = vpshufd_avx(auVar13,0xee);
        auVar40 = vpmovsxdq_avx(auVar40);
        auVar40 = vpaddq_avx(auVar116,auVar40);
        auVar163 = vpaddq_avx(auVar183,auVar163);
        auVar143 = auVar163;
        if ((uVar30 & 1) != 0) {
          auVar143 = ZEXT216(*auVar163._0_8_);
        }
        auVar204 = vpmovsxdq_avx(auVar103);
        auVar103 = vpshufd_avx(auVar103,0xee);
        if ((uVar30 & 2) != 0) {
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar163._8_8_,1);
        }
        auVar163 = vpmovsxdq_avx(auVar103);
        auVar103 = vpaddq_avx(auVar204,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar163 = vpaddq_avx(auVar163,auVar136);
          if ((uVar30 & 8) == 0) goto LAB_140c4b525;
LAB_140c4da8c:
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._8_8_,3);
          auVar92._16_16_ = auVar163;
          auVar92._0_16_ = auVar103;
          if ((uVar30 & 0x10) != 0) goto LAB_140c4dab0;
LAB_140c4b53e:
          if ((uVar30 & 0x20) == 0) goto LAB_140c4b548;
LAB_140c4dac4:
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar92._8_8_,5);
          if ((uVar30 & 0x40) != 0) goto LAB_140c4dad9;
LAB_140c4b552:
          auVar103 = auVar92._0_16_;
        }
        else {
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar40._0_8_,2);
          auVar163 = vpaddq_avx(auVar163,auVar136);
          if ((uVar30 & 8) != 0) goto LAB_140c4da8c;
LAB_140c4b525:
          auVar92._16_16_ = auVar163;
          auVar92._0_16_ = auVar103;
          if ((uVar30 & 0x10) == 0) goto LAB_140c4b53e;
LAB_140c4dab0:
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar92._0_8_,4);
          if ((uVar30 & 0x20) != 0) goto LAB_140c4dac4;
LAB_140c4b548:
          if ((uVar30 & 0x40) == 0) goto LAB_140c4b552;
LAB_140c4dad9:
          auVar103 = auVar92._0_16_;
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar92._16_8_,6);
        }
        if (cVar27 < '\0') {
          auVar103 = auVar92._16_16_;
          auVar143 = vpinsrw_avx(auVar143,(uint)*auVar92._24_8_,7);
        }
        auVar103 = vpcmpeqd_avx(auVar103,auVar103);
        auVar40 = vpsubd_avx(auVar41._16_16_,auVar103);
        auVar103 = vpsubd_avx(auVar41._0_16_,auVar103);
        auVar68._16_16_ = auVar40;
        auVar68._0_16_ = auVar103;
        auVar42 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar68,auVar157);
        auVar103 = vpcmpgtd_avx(ZEXT416(uVar38),auVar42._16_16_);
        auVar40 = vpcmpgtd_avx(auVar39,auVar42._0_16_);
        auVar69._16_16_ = auVar103;
        auVar69._0_16_ = auVar40;
        auVar85 = auVar157 & ~auVar69;
        if ((((((((SUB321(auVar85 >> 0x1f,0) & 1) != 0 || (SUB321(auVar85 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar85 >> 0x5f,0) & 1) != 0) || SUB321(auVar85 >> 0x7f,0) != '\0') ||
              (SUB321(auVar85 >> 0x9f,0) & 1) != 0) || SUB321(auVar85 >> 0xbf,0) != '\0') ||
            (SUB321(auVar85 >> 0xdf,0) & 1) != 0) || auVar85[0x1f] < '\0') {
          auVar70._0_4_ = ~auVar40._0_4_ & auVar157._0_4_;
          auVar70._4_4_ = ~auVar40._4_4_ & auVar157._4_4_;
          auVar70._8_4_ = ~auVar40._8_4_ & auVar157._8_4_;
          auVar70._12_4_ = ~auVar40._12_4_ & auVar157._12_4_;
          auVar70._16_4_ = ~auVar103._0_4_ & auVar157._16_4_;
          auVar70._20_4_ = ~auVar103._4_4_ & auVar157._20_4_;
          auVar70._24_4_ = ~auVar103._8_4_ & auVar157._24_4_;
          auVar70._28_4_ = ~auVar103._12_4_ & auVar157._28_4_;
          auVar42 = vblendvps_avx(auVar42,auVar189,auVar70);
        }
        auVar39._4_4_ = auVar42._20_4_ * 2;
        auVar39._0_4_ = auVar42._16_4_ * 2;
        auVar39._8_4_ = auVar42._24_4_ * 2;
        auVar39._12_4_ = auVar42._28_4_ * 2;
        auVar14._4_4_ = auVar42._4_4_ * 2;
        auVar14._0_4_ = auVar42._0_4_ * 2;
        auVar14._8_4_ = auVar42._8_4_ * 2;
        auVar14._12_4_ = auVar42._12_4_ * 2;
        auVar40 = vpmovsxdq_avx(auVar14);
        auVar103 = vpshufd_avx(auVar14,0xee);
        auVar103 = vpmovsxdq_avx(auVar103);
        auVar103 = vpaddq_avx(auVar116,auVar103);
        auVar40 = vpaddq_avx(auVar183,auVar40);
        auVar163 = auVar103;
        if ((uVar30 & 1) != 0) {
          auVar163 = ZEXT216(*auVar40._0_8_);
        }
        auVar204 = vpmovsxdq_avx(auVar39);
        auVar158 = vpshufd_avx(auVar39,0xee);
        if ((uVar30 & 2) != 0) {
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar40._8_8_,1);
        }
        auVar158 = vpmovsxdq_avx(auVar158);
        auVar40 = vpaddq_avx(auVar204,auVar120);
        if ((uVar30 & 4) == 0) {
          auVar204 = vpaddq_avx(auVar158,auVar136);
          if ((uVar30 & 8) == 0) goto LAB_140c4b63d;
LAB_140c4db21:
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar103._8_8_,3);
          auVar93._16_16_ = auVar204;
          auVar93._0_16_ = auVar40;
          if ((uVar30 & 0x10) != 0) goto LAB_140c4db3c;
LAB_140c4b64d:
          if ((uVar30 & 0x20) == 0) goto LAB_140c4b657;
LAB_140c4db50:
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar93._8_8_,5);
          auVar103 = vpmovzxwd_avx(auVar143);
          if ((uVar30 & 0x40) != 0) goto LAB_140c4db6e;
LAB_140c4b66a:
          auVar40 = vpunpckhwd_avx(auVar143,(undefined1  [16])0x0);
        }
        else {
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar103._0_8_,2);
          auVar204 = vpaddq_avx(auVar158,auVar136);
          if ((uVar30 & 8) != 0) goto LAB_140c4db21;
LAB_140c4b63d:
          auVar93._16_16_ = auVar204;
          auVar93._0_16_ = auVar40;
          if ((uVar30 & 0x10) == 0) goto LAB_140c4b64d;
LAB_140c4db3c:
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar93._0_8_,4);
          if ((uVar30 & 0x20) != 0) goto LAB_140c4db50;
LAB_140c4b657:
          auVar103 = vpmovzxwd_avx(auVar143);
          if ((uVar30 & 0x40) == 0) goto LAB_140c4b66a;
LAB_140c4db6e:
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar93._16_8_,6);
          auVar40 = vpunpckhwd_avx(auVar143,(undefined1  [16])0x0);
        }
        if (cVar27 < '\0') {
          auVar163 = vpinsrw_avx(auVar163,(uint)*auVar93._24_8_,7);
        }
        auVar94._16_16_ = auVar40;
        auVar94._0_16_ = auVar103;
        auVar40 = vpunpckhwd_avx(auVar163,(undefined1  [16])0x0);
        auVar103 = vpmovzxwd_avx(auVar163);
        auVar85 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      auVar198 = ZEXT1632((undefined1  [16])0x0);
      if (param_7 != '\x01') {
        auVar198 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar163 = vpsubd_avx(auVar103,auVar94._0_16_);
        auVar103 = vpsubd_avx(auVar40,auVar94._16_16_);
        auVar121._4_4_ = __real_00000001;
        auVar121._0_4_ = __real_00000001;
        auVar121._8_4_ = __real_00000001;
        auVar121._12_4_ = __real_00000001;
        auVar103 = vpmaxsd_avx(auVar103,auVar121);
        auVar40 = vpmaxsd_avx(auVar163,auVar121);
        auVar77._16_16_ = auVar103;
        auVar77._0_16_ = auVar40;
        auVar103 = vpermilps_avx(ZEXT416((uint)param_6),0);
        auVar112._16_16_ = auVar103;
        auVar112._0_16_ = auVar103;
        auVar85 = vcvtdq2ps_avx(auVar94);
        auVar171 = vsubps_avx(auVar112,auVar85);
        auVar85 = vcvtdq2ps_avx(auVar77);
        auVar85 = vdivps_avx(auVar171,auVar85);
      }
      _local_7e0 = vblendvps_avx(auVar198,auVar85,local_660);
      goto LAB_140c4c062;
    }
    auVar41 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar189,auVar157);
    auVar42 = auVar41;
  }
  _local_7e0 = ZEXT1632(ZEXT816(0));
LAB_140c4c062:
  if (param_8 < 7) {
    auVar40 = vpmulld_avx(auVar41._0_16_,auVar23);
    auVar163 = vpmulld_avx(auVar41._16_16_,auVar23);
    auVar103 = vpmovsxdq_avx(auVar163);
    auVar163 = vpshufd_avx(auVar163,0xee);
    vpmovsxdq_avx(auVar163);
    vpmovsxdq_avx(auVar40);
    auVar40 = vpshufd_avx(auVar40,0xee);
    auVar40 = vpmovsxdq_avx(auVar40);
                    /* WARNING: Could not recover jumptable at 0x000140c4c10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6c9d8 + *(int *)(&DAT_151c6c9d8 + uVar34 * 4)))
              (auVar40._0_8_,&DAT_151c6c9d8 + *(int *)(&DAT_151c6c9d8 + uVar34 * 4),auVar103._0_8_,
               auVar103._0_8_);
    return;
  }
  auVar103 = vpcmpgtd_avx(auVar81,auVar102);
  auVar40 = vpcmpgtd_avx(auVar81,auVar80);
  auVar78._16_16_ = auVar103;
  auVar78._0_16_ = auVar40;
  local_5a0 = vmaskmovps_avx(auVar78,ZEXT1632((undefined1  [16])0x0));
  local_580 = vmaskmovps_avx(auVar78,ZEXT1632((undefined1  [16])0x0));
  local_560._0_32_ = vmaskmovps_avx(auVar78,ZEXT1632((undefined1  [16])0x0));
  auVar103 = vpcmpeqd_avx(auVar41._16_16_,auVar42._16_16_);
  auVar40 = vpcmpeqd_avx(auVar41._0_16_,auVar42._0_16_);
  auVar97._16_16_ = auVar103;
  auVar97._0_16_ = auVar40;
  auVar163 = vpcmpgtd_avx(auVar81,auVar102);
  auVar143 = vpcmpgtd_avx(auVar81,auVar80);
  auVar113._16_16_ = auVar163;
  auVar113._0_16_ = auVar143;
  auVar113 = auVar113 & ~auVar97;
  if ((((((((SUB321(auVar113 >> 0x1f,0) & 1) != 0 || (SUB321(auVar113 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar113 >> 0x5f,0) & 1) != 0) || SUB321(auVar113 >> 0x7f,0) != '\0') ||
        (SUB321(auVar113 >> 0x9f,0) & 1) != 0) || SUB321(auVar113 >> 0xbf,0) != '\0') ||
      (SUB321(auVar113 >> 0xdf,0) & 1) != 0) || auVar113[0x1f] < '\0') {
    auVar98._0_4_ = ~auVar40._0_4_ & uVar190;
    auVar98._4_4_ = ~auVar40._4_4_ & uVar191;
    auVar98._8_4_ = ~auVar40._8_4_ & uVar192;
    auVar98._12_4_ = ~auVar40._12_4_ & uVar193;
    auVar98._16_4_ = ~auVar103._0_4_ & uVar195;
    auVar98._20_4_ = ~auVar103._4_4_ & auVar201._4_4_;
    auVar98._24_4_ = ~auVar103._8_4_ & auVar201._8_4_;
    auVar98._28_4_ = ~auVar103._12_4_ & auVar201._12_4_;
    if (param_8 < 7) {
      auVar40 = vpmulld_avx(auVar42._0_16_,auVar23);
      auVar103 = vpmulld_avx(auVar42._16_16_,auVar23);
      vpmovsxdq_avx(auVar103);
      auVar103 = vpshufd_avx(auVar103,0xee);
      vpmovsxdq_avx(auVar103);
      auVar103 = vpmovsxdq_avx(auVar40);
      auVar40 = vpshufd_avx(auVar40,0xee);
      auVar40 = vpmovsxdq_avx(auVar40);
                    /* WARNING: Could not recover jumptable at 0x000140c4ccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6c9f4 + *(int *)(&DAT_151c6c9f4 + uVar34 * 4)))
                (auVar103._0_8_,&DAT_151c6c9f4 + *(int *)(&DAT_151c6c9f4 + uVar34 * 4),
                 auVar163._0_8_,auVar40._0_8_);
      return;
    }
    auVar41 = vmaskmovps_avx(auVar98,ZEXT1632((undefined1  [16])0x0));
    auVar42 = vmaskmovps_avx(auVar98,ZEXT1632((undefined1  [16])0x0));
    auVar85 = vmaskmovps_avx(auVar98,ZEXT1632((undefined1  [16])0x0));
    auVar41 = vsubps_avx(auVar41,local_5a0);
    auVar42 = vsubps_avx(auVar42,local_580);
    auVar85 = vsubps_avx(auVar85,local_560._0_32_);
    auVar79._0_4_ = local_5a0._0_4_ + (float)local_7e0._0_4_ * auVar41._0_4_;
    auVar79._4_4_ = local_5a0._4_4_ + (float)local_7e0._4_4_ * auVar41._4_4_;
    auVar79._8_4_ = local_5a0._8_4_ + fStack_7d8 * auVar41._8_4_;
    auVar79._12_4_ = local_5a0._12_4_ + fStack_7d4 * auVar41._12_4_;
    auVar79._16_4_ = local_5a0._16_4_ + fStack_7d0 * auVar41._16_4_;
    auVar79._20_4_ = local_5a0._20_4_ + fStack_7cc * auVar41._20_4_;
    auVar79._24_4_ = local_5a0._24_4_ + fStack_7c8 * auVar41._24_4_;
    auVar79._28_4_ = local_5a0._28_4_ + fStack_7c4 * auVar41._28_4_;
    auVar114._0_4_ = local_580._0_4_ + (float)local_7e0._0_4_ * auVar42._0_4_;
    auVar114._4_4_ = local_580._4_4_ + (float)local_7e0._4_4_ * auVar42._4_4_;
    auVar114._8_4_ = local_580._8_4_ + fStack_7d8 * auVar42._8_4_;
    auVar114._12_4_ = local_580._12_4_ + fStack_7d4 * auVar42._12_4_;
    auVar114._16_4_ = local_580._16_4_ + fStack_7d0 * auVar42._16_4_;
    auVar114._20_4_ = local_580._20_4_ + fStack_7cc * auVar42._20_4_;
    auVar114._24_4_ = local_580._24_4_ + fStack_7c8 * auVar42._24_4_;
    auVar114._28_4_ = local_580._28_4_ + fStack_7c4 * auVar42._28_4_;
    auVar128._0_4_ = local_560._0_4_ + (float)local_7e0._0_4_ * auVar85._0_4_;
    auVar128._4_4_ = local_560._4_4_ + (float)local_7e0._4_4_ * auVar85._4_4_;
    auVar128._8_4_ = local_560._8_4_ + fStack_7d8 * auVar85._8_4_;
    auVar128._12_4_ = local_560._12_4_ + fStack_7d4 * auVar85._12_4_;
    auVar128._16_4_ = local_560._16_4_ + fStack_7d0 * auVar85._16_4_;
    auVar128._20_4_ = local_560._20_4_ + fStack_7cc * auVar85._20_4_;
    auVar128._24_4_ = local_560._24_4_ + fStack_7c8 * auVar85._24_4_;
    auVar128._28_4_ = local_560._28_4_ + fStack_7c4 * auVar85._28_4_;
    local_5a0 = vmaskmovps_avx(auVar98,auVar79);
    local_580 = vmaskmovps_avx(auVar98,auVar114);
    local_560._0_32_ = vmaskmovps_avx(auVar98,auVar128);
  }
  local_400 = (ulonglong)uVar31;
  local_3e0 = (ulonglong)*(uint *)((ulonglong)(uVar195 & _UNK_150b519d0) + lVar33);
  auVar186._16_16_ = local_580._0_16_;
  auVar186._0_16_ = local_5a0._0_16_;
  auVar198 = vperm2f128_avx(local_5a0,local_580,0x31);
  auVar171 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar85 = vperm2f128_avx(auVar171,local_560._0_32_,0x21);
  auVar41 = vshufps_avx(auVar85,auVar85,0x14);
  auVar41 = vblendps_avx(ZEXT1632(CONCAT88(local_560._0_8_,local_560._0_8_)),auVar41,0x48);
  auVar202._16_16_ = local_5a0._0_16_;
  auVar202._0_16_ = local_580._0_16_;
  auVar42 = vshufps_avx(auVar202,auVar202,0xe1);
  auVar42 = vblendps_avx(auVar186,auVar42,0x12);
  local_200 = vblendps_avx(auVar42,auVar41,0xcc);
  auVar41 = vshufps_avx(auVar85,auVar85,0xb4);
  auVar41 = vblendps_avx(ZEXT1632(local_560._0_16_),auVar41,0x48);
  auVar85 = vshufps_avx(auVar202,auVar202,0xeb);
  auVar42 = vshufpd_avx(auVar186,auVar186,5);
  auVar42 = vblendps_avx(auVar42,auVar85,0x12);
  local_1e0 = vblendps_avx(auVar42,auVar41,0xcc);
  auVar41 = vunpcklps_avx(local_560._0_32_,auVar171);
  auVar41 = vblendps_avx(ZEXT1632(CONCAT88(local_560._16_8_,local_560._16_8_)),auVar41,0x48);
  auVar85 = vperm2f128_avx(local_580,local_5a0,0x31);
  auVar42 = vshufps_avx(auVar85,auVar85,0xe1);
  auVar42 = vblendps_avx(auVar198,auVar42,0x12);
  local_1c0 = vblendps_avx(auVar42,auVar41,0xcc);
  auVar41 = vunpckhps_avx(local_560._0_32_,auVar171);
  auVar41 = vblendps_avx(ZEXT1632(local_560._16_16_),auVar41,0x48);
  auVar85 = vshufps_avx(auVar85,auVar85,0xeb);
  auVar42 = vshufpd_avx(auVar198,auVar198,5);
  auVar42 = vblendps_avx(auVar42,auVar85,0x12);
  local_1a0 = vblendps_avx(auVar42,auVar41,0xcc);
  auVar103 = vpcmpgtd_avx(auVar81,auVar80);
  auVar99._16_16_ = auVar163;
  auVar99._0_16_ = auVar103;
  uVar31 = vmovmskps_avx(auVar99);
  uVar34 = (ulonglong)uVar31;
  do {
    if (uVar34 == 0) {
      uVar31 = 0x40;
    }
    else {
      uVar31 = 0;
      for (uVar32 = uVar34; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x8000000000000000) {
        uVar31 = uVar31 + 1;
      }
    }
    bVar2 = (byte)uVar31 & 0x3f;
    local_240[0] = local_400;
    local_240[1] = 0;
    local_240[2] = local_3e0;
    uStack_228 = 0;
    auVar41 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar31 << 4)));
    lVar33 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar31 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + 0x20 + lVar33) = auVar41._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x30 + lVar33) = auVar41._16_16_;
    uVar34 = uVar34 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
  } while (uVar34 != 0);
  return;
}

// GetVariableKeyLerpPoseScales_avx @ 140c4dde0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetVariableKeyLerpPoseScales_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,longlong param_5,
               int param_6,float param_7,char param_8,uint param_9,uint param_10)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulonglong uVar31;
  char cVar32;
  int iVar33;
  longlong lVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  uint uVar40;
  uint uVar41;
  undefined4 uVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
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
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar88 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar74 [16];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar89 [16];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
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
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  uint uVar114;
  undefined1 auVar118 [16];
  undefined1 auVar115 [16];
  float fVar136;
  float fVar140;
  float fVar143;
  float fVar145;
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  float fVar138;
  float fVar147;
  undefined1 auVar129 [32];
  undefined1 auVar142 [16];
  undefined1 auVar131 [32];
  uint uVar137;
  uint uVar139;
  uint uVar141;
  uint uVar144;
  uint uVar146;
  uint uVar148;
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar149 [32];
  undefined1 auVar151 [16];
  undefined1 auVar150 [32];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [32];
  undefined1 auVar169 [16];
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
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  uint uVar170;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  uint uVar178;
  uint uVar179;
  uint uVar180;
  uint uVar181;
  uint uVar183;
  uint uVar185;
  uint uVar187;
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  uint uVar182;
  uint uVar184;
  uint uVar186;
  uint uVar188;
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [16];
  undefined1 auVar197 [32];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  undefined1 auVar202 [16];
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  undefined1 auVar205 [32];
  undefined1 auVar206 [64];
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  undefined1 auVar209 [32];
  undefined1 auVar210 [16];
  undefined1 auVar211 [32];
  undefined1 auVar212 [32];
  undefined1 auVar213 [32];
  undefined1 auVar214 [32];
  undefined1 local_800 [8];
  float fStack_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float fStack_7e8;
  float fStack_7e4;
  ulonglong local_7b0;
  undefined1 local_7a0 [32];
  int local_750;
  int iStack_74c;
  int iStack_748;
  int iStack_744;
  undefined1 local_740 [32];
  uint local_720;
  uint local_6c0;
  uint uStack_6bc;
  uint uStack_6b8;
  uint uStack_6b4;
  uint uStack_6b0;
  uint uStack_6ac;
  uint uStack_6a8;
  uint uStack_6a4;
  undefined1 local_640 [32];
  undefined1 local_5e0 [32];
  undefined1 local_5c0 [32];
  undefined1 local_5a0 [64];
  ulonglong local_560;
  uint local_420;
  uint uStack_41c;
  uint uStack_418;
  uint uStack_414;
  uint uStack_410;
  uint uStack_40c;
  uint uStack_408;
  uint uStack_404;
  uint local_2c0;
  uint uStack_2bc;
  uint uStack_2b8;
  uint uStack_2b4;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  ulonglong local_240 [3];
  undefined8 uStack_228;
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 auVar50 [32];
  undefined1 auVar56 [32];
  undefined1 auVar75 [32];
  undefined1 auVar113 [64];
  undefined1 auVar130 [32];
  undefined1 auVar193 [32];
  undefined1 auVar196 [32];
  
  iVar33 = *(int *)(&DAT_151c6cae0 + (longlong)(int)param_9 * 4);
  iVar1 = *(int *)(&DAT_151c6cac0 + (longlong)(int)param_9 * 4);
  uVar37 = param_10 + 7;
  if (-1 < (int)param_10) {
    uVar37 = param_10;
  }
  uVar39 = (ulonglong)param_9;
  local_720 = uVar37 & 0xfffffff8;
  if ((int)(uVar37 & 0xfffffff8) < 1) {
    uVar37 = 0;
  }
  else {
    auVar96 = vpshufd_avx(ZEXT416(param_4),0);
    auVar44 = vpslld_avx(auVar96,2);
    auVar96 = vpshufd_avx(ZEXT416(-(uint)(param_9 == 3)),0);
    auVar46 = vpshufd_avx(ZEXT416((uint)(iVar33 * iVar1)),0);
    uVar37 = 0;
    auVar97 = vpshufd_avx(ZEXT416((0.0 < param_7) - 1),0);
    auVar47._16_16_ = auVar97;
    auVar47._0_16_ = auVar97;
    fVar136 = (float)(param_6 + -1) * param_7;
    auVar97 = vshufps_avx(ZEXT416((uint)param_7),ZEXT416((uint)param_7),0);
    uVar170 = (int)fVar136;
    if ((int)fVar136 < 1) {
      uVar170 = 0;
    }
    if ((int)(param_6 - 2U) < (int)uVar170) {
      uVar170 = param_6 - 2U;
    }
    auVar25 = vpshufd_avx(ZEXT416(uVar170),0);
    auVar30 = vshufps_avx(ZEXT416((uint)fVar136),ZEXT416((uint)fVar136),0);
    auVar48._16_16_ = auVar30;
    auVar48._0_16_ = auVar30;
    auVar206 = ZEXT1264(ZEXT812(0));
    do {
      auVar101 = auVar206._0_32_;
      uVar38 = (ulonglong)(uVar37 * 8);
      auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar38);
      auVar210 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar38);
      auVar142 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar38);
      auVar151 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar38),auVar30,0xdd);
      auVar95 = vshufps_avx(auVar210,auVar142,0xdd);
      auVar74 = vpmulld_avx(auVar95,auVar44);
      auVar189 = vpmulld_avx(auVar151,auVar44);
      uVar170 = *(uint *)(param_3 + 4 + (longlong)auVar189._0_4_);
      auVar72 = ZEXT416(uVar170);
      uVar36 = *(uint *)(param_3 + 4 + (longlong)auVar74._0_4_);
      auVar45 = ZEXT416(uVar36);
      auVar95._4_4_ = __real_00000002;
      auVar95._0_4_ = __real_00000002;
      auVar95._8_4_ = __real_00000002;
      auVar95._12_4_ = __real_00000002;
      auVar151 = vpcmpgtd_avx(auVar95,auVar45);
      auVar95 = vpcmpgtd_avx(auVar95,auVar72);
      auVar209._16_16_ = auVar151;
      auVar209._0_16_ = auVar95;
      auVar209 = auVar209 | auVar47;
      auVar206 = ZEXT3264(auVar209);
      auVar151 = auVar209._0_16_;
      if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar209 >> 0x5f,0) & 1) != 0) || SUB321(auVar209 >> 0x7f,0) != '\0') ||
            (SUB321(auVar209 >> 0x9f,0) & 1) != 0) || SUB321(auVar209 >> 0xbf,0) != '\0') ||
          (SUB321(auVar209 >> 0xdf,0) & 1) != 0) || auVar209[0x1f] < '\0') {
        local_740 = vblendvps_avx(local_740,auVar101,auVar209);
        local_7a0 = vblendvps_avx(local_7a0,auVar101,auVar209);
      }
      uVar43 = *(uint *)(param_3 + auVar189._0_4_);
      uVar178 = *(uint *)(param_3 + auVar74._0_4_);
      auVar189 = vpmovsxdq_avx(ZEXT416(uVar43));
      auVar95 = vpshufd_avx(ZEXT416(uVar43),0xee);
      auVar169 = vpmovsxdq_avx(auVar95);
      auVar73 = vpmovsxdq_avx(ZEXT416(uVar178));
      auVar153 = vpshufd_avx(ZEXT416(uVar178),0xee);
      auVar74._4_4_ = __real_00000001;
      auVar74._0_4_ = __real_00000001;
      auVar74._8_4_ = __real_00000001;
      auVar74._12_4_ = __real_00000001;
      auVar95 = vpcmpgtd_avx(auVar45,auVar74);
      auVar74 = vpcmpgtd_avx(auVar72,auVar74);
      local_2c0 = auVar96._0_4_;
      uStack_2bc = auVar96._4_4_;
      uStack_2b8 = auVar96._8_4_;
      uStack_2b4 = auVar96._12_4_;
      auVar154._0_4_ = auVar74._0_4_ & local_2c0;
      auVar154._4_4_ = auVar74._4_4_ & uStack_2bc;
      auVar154._8_4_ = auVar74._8_4_ & uStack_2b8;
      auVar154._12_4_ = auVar74._12_4_ & uStack_2b4;
      auVar154._16_4_ = auVar95._0_4_ & local_2c0;
      auVar154._20_4_ = auVar95._4_4_ & uStack_2bc;
      auVar154._24_4_ = auVar95._8_4_ & uStack_2b8;
      auVar154._28_4_ = auVar95._12_4_ & uStack_2b4;
      auVar49 = vblendvps_avx(auVar101,
                              ___ymm_0000001800000018000000180000001800000018000000180000001800000018
                              ,auVar154);
      auVar153 = vpmovsxdq_avx(auVar153);
      auVar74 = auVar49._0_16_;
      auVar95 = vpmovsxdq_avx(auVar74);
      auVar95 = vpaddq_avx(auVar95,auVar189);
      auVar74 = vshufpd_avx(auVar74,auVar74,3);
      auVar74 = vpmovsxdq_avx(auVar74);
      auVar74 = vpaddq_avx(auVar74,auVar169);
      auVar169 = auVar49._16_16_;
      auVar202 = vpmovsxdq_avx(auVar169);
      auVar189 = vpaddq_avx(auVar202,auVar73);
      auVar169 = vshufpd_avx(auVar169,auVar169,3);
      auVar169 = vpmovsxdq_avx(auVar169);
      auVar169 = vpaddq_avx(auVar169,auVar153);
      auVar73 = vpcmpeqd_avx(auVar202,auVar202);
      auVar153 = vpcmpgtd_avx(auVar209._16_16_,auVar73);
      auVar202 = vpcmpgtd_avx(auVar151,auVar73);
      auVar49._16_16_ = auVar153;
      auVar49._0_16_ = auVar202;
      uVar43 = vmovmskps_avx(auVar49);
      _local_800 = ZEXT832(0) << 0x20;
      if (uVar43 != 0) {
        auVar202._0_4_ = uVar36 + auVar73._0_4_;
        auVar202._4_4_ = auVar73._4_4_;
        auVar202._8_4_ = auVar73._8_4_;
        auVar202._12_4_ = auVar73._12_4_;
        auVar26._0_4_ = uVar170 + auVar73._0_4_;
        auVar26._4_4_ = auVar73._4_4_;
        auVar26._8_4_ = auVar73._8_4_;
        auVar26._12_4_ = auVar73._12_4_;
        auVar119._16_16_ = auVar202;
        auVar119._0_16_ = auVar26;
        auVar49 = vcmpps_avx(auVar101,auVar101,0xf);
        auVar207._0_4_ = auVar209._0_4_ ^ auVar49._0_4_;
        auVar207._4_4_ = auVar209._4_4_ ^ auVar49._4_4_;
        auVar207._8_4_ = auVar209._8_4_ ^ auVar49._8_4_;
        auVar207._12_4_ = auVar209._12_4_ ^ auVar49._12_4_;
        auVar207._16_4_ = auVar209._16_4_ ^ auVar49._16_4_;
        auVar207._20_4_ = auVar209._20_4_ ^ auVar49._20_4_;
        auVar207._24_4_ = auVar209._24_4_ ^ auVar49._24_4_;
        auVar207._28_4_ = auVar209._28_4_ ^ auVar49._28_4_;
        if (__real_3f800000 <= param_7) {
          local_740 = vblendvps_avx(local_740,auVar119,auVar207);
          local_7a0 = vblendvps_avx(local_7a0,auVar119,auVar207);
        }
        else {
          auVar115 = vpmulld_avx(auVar72,auVar46);
          auVar45 = vpmulld_avx(auVar45,auVar46);
          auVar73 = vpmovsxdq_avx(auVar45);
          auVar45 = vpshufd_avx(auVar45,0xee);
          auVar88 = vpmovsxdq_avx(auVar45);
          auVar195 = vpmovsxdq_avx(auVar115);
          auVar45 = vpshufd_avx(auVar115,0xee);
          auVar45 = vpmovsxdq_avx(auVar45);
          auVar115._8_8_ = 0;
          auVar115._0_8_ = param_5 + 3;
          auVar115 = vpshufd_avx(auVar115,0x44);
          auVar45 = vpaddq_avx(auVar115,auVar45);
          auVar74 = vpaddq_avx(auVar45,auVar74);
          auVar45 = vpaddq_avx(auVar115,auVar195);
          auVar95 = vpaddq_avx(auVar95,auVar45);
          auVar45 = vpaddq_avx(auVar115,auVar88);
          auVar45 = vpaddq_avx(auVar45,auVar169);
          auVar169 = vpaddq_avx(auVar115,auVar73);
          auVar169 = vpaddq_avx(auVar169,auVar189);
          auVar73._0_4_ = auVar169._0_4_ & (uint)__real_fffffffffffffffc;
          auVar73._4_4_ = auVar169._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar73._8_4_ = auVar169._8_4_ & (uint)__real_fffffffffffffffc;
          auVar73._12_4_ = auVar169._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar75._16_4_ = auVar45._0_4_ & (uint)__real_fffffffffffffffc;
          auVar75._0_16_ = auVar73;
          auVar75._20_4_ = auVar45._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar75._24_4_ = auVar45._8_4_ & (uint)__real_fffffffffffffffc;
          auVar75._28_4_ = auVar45._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar195._0_4_ = auVar95._0_4_ & (uint)__real_fffffffffffffffc;
          auVar195._4_4_ = auVar95._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar195._8_4_ = auVar95._8_4_ & (uint)__real_fffffffffffffffc;
          auVar195._12_4_ = auVar95._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar196._16_4_ = auVar74._0_4_ & (uint)__real_fffffffffffffffc;
          auVar196._0_16_ = auVar195;
          auVar196._20_4_ = auVar74._4_4_ & __real_fffffffffffffffc._4_4_;
          auVar196._24_4_ = auVar74._8_4_ & (uint)__real_fffffffffffffffc;
          auVar196._28_4_ = auVar74._12_4_ & __real_fffffffffffffffc._4_4_;
          auVar209 = vcvtdq2ps_avx(auVar119);
          local_260 = auVar97._0_4_;
          fStack_25c = auVar97._4_4_;
          fStack_258 = auVar97._8_4_;
          fStack_254 = auVar97._12_4_;
          auVar45._0_4_ = (int)(auVar209._0_4_ * local_260);
          auVar45._4_4_ = (int)(auVar209._4_4_ * fStack_25c);
          auVar45._8_4_ = (int)(auVar209._8_4_ * fStack_258);
          auVar45._12_4_ = (int)(auVar209._12_4_ * fStack_254);
          auVar50._16_4_ = (int)(auVar209._16_4_ * local_260);
          auVar50._0_16_ = auVar45;
          auVar50._20_4_ = (int)(auVar209._20_4_ * fStack_25c);
          auVar50._24_4_ = (int)(auVar209._24_4_ * fStack_258);
          auVar50._28_4_ = (int)(auVar209._28_4_ * fStack_254);
          auVar95 = vpmaxsd_avx(auVar50._16_16_,(undefined1  [16])0x0);
          auVar74 = vpmaxsd_avx(auVar45,(undefined1  [16])0x0);
          auVar45 = vpminsd_avx(auVar95,auVar202);
          auVar169 = vpminsd_avx(auVar74,auVar26);
          auVar101._16_16_ = auVar45;
          auVar101._0_16_ = auVar169;
          auVar113 = ZEXT3264(auVar101);
          auVar88 = auVar75._16_16_;
          auVar115 = auVar196._16_16_;
          cVar32 = (char)uVar43;
          if (param_6 < 0x100) {
            auVar24 = vpmovsxdq_avx(auVar169);
            auVar172 = vpshufd_avx(auVar169,0xee);
            auVar172 = vpmovsxdq_avx(auVar172);
            auVar172 = vpaddq_avx(auVar115,auVar172);
            auVar24 = vpaddq_avx(auVar195,auVar24);
            auVar152 = vpcmpeqd_avx(auVar46,auVar46);
            auVar89 = auVar24;
            if ((uVar43 & 1) != 0) {
              auVar89 = ZEXT116(*auVar24._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar24 = vpinsrb_avx(auVar89,(uint)*auVar24._8_8_,1);
              auVar89 = vpblendw_avx(auVar24,auVar89,0xe);
            }
            if ((uVar43 & 4) != 0) {
              auVar24 = vpmovzxwd_avx(auVar89);
              auVar24 = vpinsrb_avx(auVar24,(uint)*auVar172._0_8_,2);
              auVar24 = vpinsrb_avx(auVar24,(uint)auVar89[3],3);
              auVar89 = vpblendw_avx(auVar24,auVar89,0xc);
            }
            if ((uVar43 & 8) != 0) {
              auVar24 = vpmovzxwd_avx(auVar89);
              auVar24 = vpinsrb_avx(auVar24,(uint)auVar89[2],2);
              auVar172 = vpinsrb_avx(auVar24,(uint)*auVar172._8_8_,3);
              auVar89 = vpblendw_avx(auVar172,auVar89,0xc);
            }
            auVar24 = vpmovsxdq_avx(auVar45);
            auVar172 = vpshufd_avx(auVar45,0xee);
            auVar172 = vpmovsxdq_avx(auVar172);
            auVar172 = vpaddq_avx(auVar172,auVar88);
            auVar24 = vpaddq_avx(auVar73,auVar24);
            if ((uVar43 & 0x10) != 0) {
              auVar27 = vpshufb_avx(auVar89,___xmm_80800706808005048080030203020100);
              auVar27 = vpinsrb_avx(auVar27,(uint)*auVar24._0_8_,4);
              auVar27 = vpinsrb_avx(auVar27,(uint)auVar89[5],5);
              auVar89 = vpblendw_avx(auVar27,auVar89,8);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar27 = vpshufb_avx(auVar89,___xmm_80800706808005048080030403020100);
              auVar24 = vpinsrb_avx(auVar27,(uint)*auVar24._8_8_,5);
              auVar89 = vpblendw_avx(auVar24,auVar89,8);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar24 = vpshufb_avx(auVar89,___xmm_80800706808005048080050403020100);
              auVar24 = vpinsrb_avx(auVar24,(uint)*auVar172._0_8_,6);
              auVar89 = vpinsrb_avx(auVar24,(uint)auVar89[7],7);
            }
            if (cVar32 < '\0') {
              auVar24 = vpshufb_avx(auVar89,___xmm_80800706808005048006050403020100);
              auVar89 = vpinsrb_avx(auVar24,(uint)*auVar172._8_8_,7);
            }
            auVar27 = vpmovzxbd_avx(auVar89);
            auVar172 = vpshufd_avx(auVar89,0x55);
            auVar89 = vpmovzxbd_avx(auVar172);
            auVar172 = vpcmpgtd_avx(auVar89,auVar25);
            auVar28 = auVar152 ^ auVar172;
            auVar24 = vpcmpgtd_avx(auVar27,auVar25);
            auVar29 = auVar152 ^ auVar24;
            auVar157._16_16_ = auVar28;
            auVar157._0_16_ = auVar29;
            auVar92._16_16_ = auVar172;
            auVar92._0_16_ = auVar24;
            auVar209 = auVar207 & ~auVar92;
            local_420 = auVar29._0_4_;
            uStack_41c = auVar29._4_4_;
            uStack_418 = auVar29._8_4_;
            uStack_414 = auVar29._12_4_;
            uStack_410 = auVar28._0_4_;
            uStack_40c = auVar28._4_4_;
            uStack_408 = auVar28._8_4_;
            uStack_404 = auVar28._12_4_;
            if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar209 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar209 >> 0x7f,0) != '\0') || (SUB321(auVar209 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar209 >> 0xbf,0) != '\0') || (SUB321(auVar209 >> 0xdf,0) & 1) != 0) ||
                auVar209[0x1f] < '\0') {
              auVar172 = vpcmpgtd_avx(auVar89,auVar25);
              auVar24 = vpcmpgtd_avx(auVar27,auVar25);
              auVar93._16_16_ = auVar172;
              auVar93._0_16_ = auVar24;
              auVar209 = vblendvps_avx(auVar119,auVar101,auVar93);
              auVar95 = vpcmpgtd_avx(auVar202,auVar95);
              auVar74 = vpcmpgtd_avx(auVar26,auVar74);
              uVar170 = auVar74._0_4_ & local_420;
              uVar178 = auVar74._4_4_ & uStack_41c;
              uVar179 = auVar74._8_4_ & uStack_418;
              uVar180 = auVar74._12_4_ & uStack_414;
              uVar181 = auVar95._0_4_ & uStack_410;
              uVar183 = auVar95._4_4_ & uStack_40c;
              uVar185 = auVar95._8_4_ & uStack_408;
              uVar187 = auVar95._12_4_ & uStack_404;
              auVar158._0_4_ = auVar207._0_4_ & uVar170;
              auVar158._4_4_ = auVar207._4_4_ & uVar178;
              auVar158._8_4_ = auVar207._8_4_ & uVar179;
              auVar158._12_4_ = auVar207._12_4_ & uVar180;
              auVar158._16_4_ = auVar207._16_4_ & uVar181;
              auVar158._20_4_ = auVar207._20_4_ & uVar183;
              auVar158._24_4_ = auVar207._24_4_ & uVar185;
              auVar158._28_4_ = auVar207._28_4_ & uVar187;
              iVar35 = vmovmskps_avx(auVar158);
              auVar203 = auVar101;
              while (auVar101 = auVar209, iVar35 != 0) {
                auVar24 = vpsubd_avx(auVar203._0_16_,auVar152);
                auVar74 = vpmovsxdq_avx(auVar24);
                auVar95 = vpshufd_avx(auVar24,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar115);
                auVar74 = vpaddq_avx(auVar195,auVar74);
                uVar40 = vmovmskps_avx(auVar158);
                auVar172 = auVar95;
                if ((uVar40 & 1) != 0) {
                  auVar172 = ZEXT116(*auVar74._0_8_);
                }
                if ((uVar40 & 2) != 0) {
                  auVar74 = vpinsrb_avx(auVar172,(uint)*auVar74._8_8_,1);
                  auVar172 = vpblendw_avx(auVar74,auVar172,0xe);
                }
                if ((uVar40 & 4) != 0) {
                  auVar74 = vpmovzxwd_avx(auVar172);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,2);
                  auVar74 = vpinsrb_avx(auVar74,(uint)auVar172[3],3);
                  auVar172 = vpblendw_avx(auVar74,auVar172,0xc);
                }
                if ((uVar40 & 8) != 0) {
                  auVar74 = vpmovzxwd_avx(auVar172);
                  auVar74 = vpinsrb_avx(auVar74,(uint)auVar172[2],2);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,3);
                  auVar172 = vpblendw_avx(auVar74,auVar172,0xc);
                }
                auVar95 = vpcmpeqd_avx(auVar95,auVar95);
                auVar152 = vpsubd_avx(auVar203._16_16_,auVar95);
                auVar74 = vpmovsxdq_avx(auVar152);
                auVar95 = vpshufd_avx(auVar152,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar88);
                auVar74 = vpaddq_avx(auVar73,auVar74);
                if ((uVar40 & 0x10) != 0) {
                  auVar28 = vpshufb_avx(auVar172,___xmm_80800706808005048080030203020100);
                  auVar28 = vpinsrb_avx(auVar28,(uint)*auVar74._0_8_,4);
                  auVar28 = vpinsrb_avx(auVar28,(uint)auVar172[5],5);
                  auVar172 = vpblendw_avx(auVar28,auVar172,8);
                }
                if ((uVar40 & 0x20) != 0) {
                  auVar28 = vpshufb_avx(auVar172,___xmm_80800706808005048080030403020100);
                  auVar74 = vpinsrb_avx(auVar28,(uint)*auVar74._8_8_,5);
                  auVar172 = vpblendw_avx(auVar74,auVar172,8);
                }
                if ((uVar40 & 0x40) != 0) {
                  auVar74 = vpshufb_avx(auVar172,___xmm_80800706808005048080050403020100);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,6);
                  auVar172 = vpinsrb_avx(auVar74,(uint)auVar172[7],7);
                }
                if ((char)uVar40 < '\0') {
                  auVar74 = vpshufb_avx(auVar172,___xmm_80800706808005048006050403020100);
                  auVar172 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,7);
                }
                auVar74 = vpmovzxbd_avx(auVar172);
                auVar95 = vpshufd_avx(auVar172,0x55);
                auVar95 = vpmovzxbd_avx(auVar95);
                auVar95 = vpcmpgtd_avx(auVar95,auVar25);
                auVar74 = vpcmpgtd_avx(auVar74,auVar25);
                auVar199._0_4_ = auVar74._0_4_ & uVar170;
                auVar199._4_4_ = auVar74._4_4_ & uVar178;
                auVar199._8_4_ = auVar74._8_4_ & uVar179;
                auVar199._12_4_ = auVar74._12_4_ & uVar180;
                auVar199._16_4_ = auVar95._0_4_ & uVar181;
                auVar199._20_4_ = auVar95._4_4_ & uVar183;
                auVar199._24_4_ = auVar95._8_4_ & uVar185;
                auVar199._28_4_ = auVar95._12_4_ & uVar187;
                auVar159 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar123._0_4_ = auVar199._0_4_ & auVar207._0_4_;
                auVar123._4_4_ = auVar199._4_4_ & auVar207._4_4_;
                auVar123._8_4_ = auVar199._8_4_ & auVar207._8_4_;
                auVar123._12_4_ = auVar199._12_4_ & auVar207._12_4_;
                auVar123._16_4_ = auVar199._16_4_ & auVar207._16_4_;
                auVar123._20_4_ = auVar199._20_4_ & auVar207._20_4_;
                auVar123._24_4_ = auVar199._24_4_ & auVar207._24_4_;
                auVar123._28_4_ = auVar199._28_4_ & auVar207._28_4_;
                uVar42 = vmovmskps_avx(auVar123);
                if ((char)iVar35 != (char)uVar42) {
                  auVar159._0_4_ = auVar199._0_4_ ^ uVar170;
                  auVar159._4_4_ = auVar199._4_4_ ^ uVar178;
                  auVar159._8_4_ = auVar199._8_4_ ^ uVar179;
                  auVar159._12_4_ = auVar199._12_4_ ^ uVar180;
                  auVar159._16_4_ = auVar199._16_4_ ^ uVar181;
                  auVar159._20_4_ = auVar199._20_4_ ^ uVar183;
                  auVar159._24_4_ = auVar199._24_4_ ^ uVar185;
                  auVar159._28_4_ = auVar199._28_4_ ^ uVar187;
                }
                auVar209 = vblendvps_avx(auVar101,auVar203,auVar199);
                auVar203._16_16_ = auVar152;
                auVar203._0_16_ = auVar24;
                auVar95 = vpcmpgtd_avx(auVar202,auVar152);
                auVar74 = vpcmpgtd_avx(auVar26,auVar24);
                uVar170 = auVar74._0_4_ & auVar159._0_4_;
                uVar178 = auVar74._4_4_ & auVar159._4_4_;
                uVar179 = auVar74._8_4_ & auVar159._8_4_;
                uVar180 = auVar74._12_4_ & auVar159._12_4_;
                uVar181 = auVar95._0_4_ & auVar159._16_4_;
                uVar183 = auVar95._4_4_ & auVar159._20_4_;
                uVar185 = auVar95._8_4_ & auVar159._24_4_;
                uVar187 = auVar95._12_4_ & auVar159._28_4_;
                auVar158._0_4_ = auVar207._0_4_ & uVar170;
                auVar158._4_4_ = auVar207._4_4_ & uVar178;
                auVar158._8_4_ = auVar207._8_4_ & uVar179;
                auVar158._12_4_ = auVar207._12_4_ & uVar180;
                auVar158._16_4_ = auVar207._16_4_ & uVar181;
                auVar158._20_4_ = auVar207._20_4_ & uVar183;
                auVar158._24_4_ = auVar207._24_4_ & uVar185;
                auVar158._28_4_ = auVar207._28_4_ & uVar187;
                iVar35 = vmovmskps_avx(auVar158);
                auVar152 = vpcmpeqd_avx(auVar152,auVar152);
              }
            }
            auVar95 = vpcmpgtd_avx(auVar89,auVar25);
            auVar74 = vpcmpgtd_avx(auVar27,auVar25);
            auVar126._16_16_ = auVar95;
            auVar126._0_16_ = auVar74;
            auVar95 = vpcmpgtd_avx(auVar151,auVar152);
            auVar163._16_16_ = auVar153;
            auVar163._0_16_ = auVar95;
            auVar126 = auVar126 & auVar163;
            if ((((((((SUB321(auVar126 >> 0x1f,0) & 1) != 0 || (SUB321(auVar126 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar126 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar126 >> 0x7f,0) != '\0') || (SUB321(auVar126 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar126 >> 0xbf,0) != '\0') || (SUB321(auVar126 >> 0xdf,0) & 1) != 0) ||
                auVar126[0x1f] < '\0') {
              auVar101 = vblendvps_avx(ZEXT832(0) << 0x20,auVar101,auVar157);
              auVar153._4_4_ = __real_00000001;
              auVar153._0_4_ = __real_00000001;
              auVar153._8_4_ = __real_00000001;
              auVar153._12_4_ = __real_00000001;
              auVar151 = vpcmpgtd_avx(auVar45,auVar153);
              auVar95 = vpcmpgtd_avx(auVar169,auVar153);
              uVar170 = ~local_420 & auVar95._0_4_;
              uVar178 = ~uStack_41c & auVar95._4_4_;
              uVar179 = ~uStack_418 & auVar95._8_4_;
              uVar180 = ~uStack_414 & auVar95._12_4_;
              uVar181 = ~uStack_410 & auVar151._0_4_;
              uVar183 = ~uStack_40c & auVar151._4_4_;
              uVar185 = ~uStack_408 & auVar151._8_4_;
              uVar187 = ~uStack_404 & auVar151._12_4_;
              auVar164._0_4_ = auVar207._0_4_ & uVar170;
              auVar164._4_4_ = auVar207._4_4_ & uVar178;
              auVar164._8_4_ = auVar207._8_4_ & uVar179;
              auVar164._12_4_ = auVar207._12_4_ & uVar180;
              auVar164._16_4_ = auVar207._16_4_ & uVar181;
              auVar164._20_4_ = auVar207._20_4_ & uVar183;
              auVar164._24_4_ = auVar207._24_4_ & uVar185;
              auVar164._28_4_ = auVar207._28_4_ & uVar187;
              iVar35 = vmovmskps_avx(auVar164);
              while (auVar151 = auVar206._0_16_, iVar35 != 0) {
                auVar151._0_4_ = auVar152._0_4_ + auVar113._0_4_;
                auVar151._4_4_ = auVar152._4_4_ + auVar113._4_4_;
                auVar151._8_4_ = auVar152._8_4_ + auVar113._8_4_;
                auVar151._12_4_ = auVar152._12_4_ + auVar113._12_4_;
                auVar74 = vpmovsxdq_avx(auVar151);
                auVar95 = vpshufd_avx(auVar151,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar115);
                auVar74 = vpaddq_avx(auVar195,auVar74);
                uVar40 = vmovmskps_avx(auVar164);
                auVar45 = auVar95;
                if ((uVar40 & 1) != 0) {
                  auVar45 = ZEXT116(*auVar74._0_8_);
                }
                if ((uVar40 & 2) != 0) {
                  auVar74 = vpinsrb_avx(auVar45,(uint)*auVar74._8_8_,1);
                  auVar45 = vpblendw_avx(auVar74,auVar45,0xe);
                }
                if ((uVar40 & 4) != 0) {
                  auVar74 = vpmovzxwd_avx(auVar45);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,2);
                  auVar74 = vpinsrb_avx(auVar74,(uint)auVar45[3],3);
                  auVar45 = vpblendw_avx(auVar74,auVar45,0xc);
                }
                if ((uVar40 & 8) != 0) {
                  auVar74 = vpmovzxwd_avx(auVar45);
                  auVar74 = vpinsrb_avx(auVar74,(uint)auVar45[2],2);
                  auVar95 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,3);
                  auVar45 = vpblendw_avx(auVar95,auVar45,0xc);
                }
                auVar169._0_4_ = auVar113._16_4_ + auVar152._0_4_;
                auVar169._4_4_ = auVar113._20_4_ + auVar152._4_4_;
                auVar169._8_4_ = auVar113._24_4_ + auVar152._8_4_;
                auVar169._12_4_ = auVar113._28_4_ + auVar152._12_4_;
                auVar206 = ZEXT1664(auVar169);
                auVar74 = vpmovsxdq_avx(auVar169);
                auVar95 = vpshufd_avx(auVar169,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar88);
                auVar74 = vpaddq_avx(auVar73,auVar74);
                if ((uVar40 & 0x10) != 0) {
                  auVar153 = vpshufb_avx(auVar45,___xmm_80800706808005048080030203020100);
                  auVar153 = vpinsrb_avx(auVar153,(uint)*auVar74._0_8_,4);
                  auVar153 = vpinsrb_avx(auVar153,(uint)auVar45[5],5);
                  auVar45 = vpblendw_avx(auVar153,auVar45,8);
                }
                if ((uVar40 & 0x20) != 0) {
                  auVar153 = vpshufb_avx(auVar45,___xmm_80800706808005048080030403020100);
                  auVar74 = vpinsrb_avx(auVar153,(uint)*auVar74._8_8_,5);
                  auVar45 = vpblendw_avx(auVar74,auVar45,8);
                }
                if ((uVar40 & 0x40) != 0) {
                  auVar74 = vpshufb_avx(auVar45,___xmm_80800706808005048080050403020100);
                  auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,6);
                  auVar45 = vpinsrb_avx(auVar74,(uint)auVar45[7],7);
                }
                if ((char)uVar40 < '\0') {
                  auVar74 = vpshufb_avx(auVar45,___xmm_80800706808005048006050403020100);
                  auVar45 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,7);
                }
                auVar74 = vpmovzxbd_avx(auVar45);
                auVar95 = vpshufd_avx(auVar45,0x55);
                auVar95 = vpmovzxbd_avx(auVar95);
                auVar95 = vpcmpgtd_avx(auVar95,auVar25);
                auVar74 = vpcmpgtd_avx(auVar74,auVar25);
                auVar201._0_4_ = ~auVar74._0_4_ & uVar170;
                auVar201._4_4_ = ~auVar74._4_4_ & uVar178;
                auVar201._8_4_ = ~auVar74._8_4_ & uVar179;
                auVar201._12_4_ = ~auVar74._12_4_ & uVar180;
                auVar201._16_4_ = ~auVar95._0_4_ & uVar181;
                auVar201._20_4_ = ~auVar95._4_4_ & uVar183;
                auVar201._24_4_ = ~auVar95._8_4_ & uVar185;
                auVar201._28_4_ = ~auVar95._12_4_ & uVar187;
                auVar165 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar128._0_4_ = auVar201._0_4_ & auVar207._0_4_;
                auVar128._4_4_ = auVar201._4_4_ & auVar207._4_4_;
                auVar128._8_4_ = auVar201._8_4_ & auVar207._8_4_;
                auVar128._12_4_ = auVar201._12_4_ & auVar207._12_4_;
                auVar128._16_4_ = auVar201._16_4_ & auVar207._16_4_;
                auVar128._20_4_ = auVar201._20_4_ & auVar207._20_4_;
                auVar128._24_4_ = auVar201._24_4_ & auVar207._24_4_;
                auVar128._28_4_ = auVar201._28_4_ & auVar207._28_4_;
                uVar42 = vmovmskps_avx(auVar128);
                if ((char)iVar35 != (char)uVar42) {
                  auVar165._0_4_ = auVar201._0_4_ ^ uVar170;
                  auVar165._4_4_ = auVar201._4_4_ ^ uVar178;
                  auVar165._8_4_ = auVar201._8_4_ ^ uVar179;
                  auVar165._12_4_ = auVar201._12_4_ ^ uVar180;
                  auVar165._16_4_ = auVar201._16_4_ ^ uVar181;
                  auVar165._20_4_ = auVar201._20_4_ ^ uVar183;
                  auVar165._24_4_ = auVar201._24_4_ ^ uVar185;
                  auVar165._28_4_ = auVar201._28_4_ ^ uVar187;
                }
                auVar127._16_16_ = auVar169;
                auVar127._0_16_ = auVar151;
                auVar101 = vblendvps_avx(auVar101,auVar127,auVar201);
                auVar172._4_4_ = __real_00000002;
                auVar172._0_4_ = __real_00000002;
                auVar172._8_4_ = __real_00000002;
                auVar172._12_4_ = __real_00000002;
                auVar151 = vpcmpgtd_avx(auVar113._0_16_,auVar172);
                auVar95 = vpcmpgtd_avx(auVar113._16_16_,auVar172);
                uVar170 = auVar151._0_4_ & auVar165._0_4_;
                uVar178 = auVar151._4_4_ & auVar165._4_4_;
                uVar179 = auVar151._8_4_ & auVar165._8_4_;
                uVar180 = auVar151._12_4_ & auVar165._12_4_;
                uVar181 = auVar95._0_4_ & auVar165._16_4_;
                uVar183 = auVar95._4_4_ & auVar165._20_4_;
                uVar185 = auVar95._8_4_ & auVar165._24_4_;
                uVar187 = auVar95._12_4_ & auVar165._28_4_;
                auVar164._0_4_ = auVar207._0_4_ & uVar170;
                auVar164._4_4_ = auVar207._4_4_ & uVar178;
                auVar164._8_4_ = auVar207._8_4_ & uVar179;
                auVar164._12_4_ = auVar207._12_4_ & uVar180;
                auVar164._16_4_ = auVar207._16_4_ & uVar181;
                auVar164._20_4_ = auVar207._20_4_ & uVar183;
                auVar164._24_4_ = auVar207._24_4_ & uVar185;
                auVar164._28_4_ = auVar207._28_4_ & uVar187;
                iVar35 = vmovmskps_avx(auVar164);
                auVar113 = ZEXT3264(auVar127);
              }
            }
            local_740 = vblendvps_avx(local_740,auVar101,auVar207);
            auVar169 = local_740._0_16_;
            auVar74 = vpmovsxdq_avx(auVar169);
            auVar95 = vshufpd_avx(auVar169,auVar169,3);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar115,auVar95);
            auVar74 = vpaddq_avx(auVar195,auVar74);
            auVar45 = auVar74;
            if ((uVar43 & 1) != 0) {
              auVar45 = ZEXT116(*auVar74._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar74 = vpinsrb_avx(auVar45,(uint)*auVar74._8_8_,1);
              auVar45 = vpblendw_avx(auVar74,auVar45,0xe);
            }
            if ((uVar43 & 4) != 0) {
              auVar74 = vpmovzxwd_avx(auVar45);
              auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,2);
              auVar74 = vpinsrb_avx(auVar74,(uint)auVar45[3],3);
              auVar45 = vpblendw_avx(auVar74,auVar45,0xc);
            }
            if ((uVar43 & 8) != 0) {
              auVar74 = vpmovzxwd_avx(auVar45);
              auVar74 = vpinsrb_avx(auVar74,(uint)auVar45[2],2);
              auVar95 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,3);
              auVar45 = vpblendw_avx(auVar95,auVar45,0xc);
            }
            auVar202 = local_740._16_16_;
            auVar74 = vpmovsxdq_avx(auVar202);
            auVar95 = vshufpd_avx(auVar202,auVar202,3);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar95,auVar88);
            auVar74 = vpaddq_avx(auVar73,auVar74);
            auVar153 = auVar74;
            if ((uVar43 & 0x10) != 0) {
              auVar153 = vpshufb_avx(auVar45,___xmm_80800706808005048080030203020100);
              auVar153 = vpinsrb_avx(auVar153,(uint)*auVar74._0_8_,4);
              auVar153 = vpinsrb_avx(auVar153,(uint)auVar45[5],5);
              auVar45 = vpblendw_avx(auVar153,auVar45,8);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar153 = vpshufb_avx(auVar45,___xmm_80800706808005048080030403020100);
              auVar153 = vpinsrb_avx(auVar153,(uint)*auVar74._8_8_,5);
              auVar45 = vpblendw_avx(auVar153,auVar45,8);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar74 = vpshufb_avx(auVar45,___xmm_80800706808005048080050403020100);
              auVar153 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,6);
              auVar45 = vpinsrb_avx(auVar153,(uint)auVar45[7],7);
            }
            if (cVar32 < '\0') {
              auVar74 = vpshufb_avx(auVar45,___xmm_80800706808005048006050403020100);
              auVar45 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,7);
              auVar153 = auVar95;
            }
            auVar95 = vpcmpeqd_avx(auVar153,auVar153);
            auVar74 = vpsubd_avx(auVar202,auVar95);
            auVar95 = vpsubd_avx(auVar169,auVar95);
            auVar102._16_16_ = auVar74;
            auVar102._0_16_ = auVar95;
            local_7a0 = vblendvps_avx(local_7a0,auVar102,auVar207);
            auVar95 = vpcmpgtd_avx(ZEXT416(uVar36),local_7a0._16_16_);
            auVar74 = vpcmpgtd_avx(auVar72,local_7a0._0_16_);
            auVar103._16_16_ = auVar95;
            auVar103._0_16_ = auVar74;
            auVar209 = auVar207 & ~auVar103;
            if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar209 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar209 >> 0x7f,0) != '\0') || (SUB321(auVar209 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar209 >> 0xbf,0) != '\0') || (SUB321(auVar209 >> 0xdf,0) & 1) != 0) ||
                auVar209[0x1f] < '\0') {
              auVar104._0_4_ = ~auVar74._0_4_ & auVar207._0_4_;
              auVar104._4_4_ = ~auVar74._4_4_ & auVar207._4_4_;
              auVar104._8_4_ = ~auVar74._8_4_ & auVar207._8_4_;
              auVar104._12_4_ = ~auVar74._12_4_ & auVar207._12_4_;
              auVar104._16_4_ = ~auVar95._0_4_ & auVar207._16_4_;
              auVar104._20_4_ = ~auVar95._4_4_ & auVar207._20_4_;
              auVar104._24_4_ = ~auVar95._8_4_ & auVar207._24_4_;
              auVar104._28_4_ = ~auVar95._12_4_ & auVar207._28_4_;
              local_7a0 = vblendvps_avx(local_7a0,auVar119,auVar104);
            }
            auVar74 = vpmovsxdq_avx(local_7a0._0_16_);
            auVar95 = vpshufd_avx(local_7a0._0_16_,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar115,auVar95);
            auVar74 = vpaddq_avx(auVar195,auVar74);
            auVar72 = auVar95;
            if ((uVar43 & 1) != 0) {
              auVar72 = ZEXT116(*auVar74._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar74 = vpinsrb_avx(auVar72,(uint)*auVar74._8_8_,1);
              auVar72 = vpblendw_avx(auVar74,auVar72,0xe);
            }
            if ((uVar43 & 4) != 0) {
              auVar74 = vpmovzxwd_avx(auVar72);
              auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,2);
              auVar74 = vpinsrb_avx(auVar74,(uint)auVar72[3],3);
              auVar72 = vpblendw_avx(auVar74,auVar72,0xc);
            }
            if ((uVar43 & 8) != 0) {
              auVar74 = vpmovzxwd_avx(auVar72);
              auVar74 = vpinsrb_avx(auVar74,(uint)auVar72[2],2);
              auVar95 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,3);
              auVar72 = vpblendw_avx(auVar95,auVar72,0xc);
            }
            auVar74 = vpmovsxdq_avx(local_7a0._16_16_);
            auVar95 = vpshufd_avx(local_7a0._16_16_,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar95,auVar88);
            auVar74 = vpaddq_avx(auVar73,auVar74);
            if ((uVar43 & 0x10) != 0) {
              auVar169 = vpshufb_avx(auVar72,___xmm_80800706808005048080030203020100);
              auVar169 = vpinsrb_avx(auVar169,(uint)*auVar74._0_8_,4);
              auVar169 = vpinsrb_avx(auVar169,(uint)auVar72[5],5);
              auVar72 = vpblendw_avx(auVar169,auVar72,8);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar169 = vpshufb_avx(auVar72,___xmm_80800706808005048080030403020100);
              auVar74 = vpinsrb_avx(auVar169,(uint)*auVar74._8_8_,5);
              auVar72 = vpblendw_avx(auVar74,auVar72,8);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar74 = vpshufb_avx(auVar72,___xmm_80800706808005048080050403020100);
              auVar74 = vpinsrb_avx(auVar74,(uint)*auVar95._0_8_,6);
              auVar72 = vpinsrb_avx(auVar74,(uint)auVar72[7],7);
            }
            if (cVar32 < '\0') {
              auVar74 = vpshufb_avx(auVar72,___xmm_80800706808005048006050403020100);
              auVar72 = vpinsrb_avx(auVar74,(uint)*auVar95._8_8_,7);
            }
            auVar95 = vpmovzxbd_avx(auVar45);
            auVar74 = vpshufd_avx(auVar45,0x55);
            auVar74 = vpmovzxbd_avx(auVar74);
            auVar76._16_16_ = auVar74;
            auVar76._0_16_ = auVar95;
            auVar95 = vpmovzxbd_avx(auVar72);
            auVar74 = vpshufd_avx(auVar72,0x55);
            auVar74 = vpmovzxbd_avx(auVar74);
            auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          else {
            auVar24._4_4_ = auVar169._4_4_ * 2;
            auVar24._0_4_ = auVar169._0_4_ * 2;
            auVar24._8_4_ = auVar169._8_4_ * 2;
            auVar24._12_4_ = auVar169._12_4_ * 2;
            auVar89 = vpmovsxdq_avx(auVar24);
            auVar172 = vpshufd_avx(auVar24,0xee);
            auVar172 = vpmovsxdq_avx(auVar172);
            auVar172 = vpaddq_avx(auVar115,auVar172);
            auVar24 = vpaddq_avx(auVar195,auVar89);
            auVar89 = vpcmpeqd_avx(auVar46,auVar46);
            auVar152 = auVar172;
            if ((uVar43 & 1) != 0) {
              auVar152 = ZEXT216(*auVar24._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar24._8_8_,1);
            }
            if ((uVar43 & 4) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar172._0_8_,2);
            }
            if ((uVar43 & 8) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar172._8_8_,3);
            }
            local_750 = auVar45._0_4_;
            iStack_74c = auVar45._4_4_;
            iStack_748 = auVar45._8_4_;
            iStack_744 = auVar45._12_4_;
            auVar27._4_4_ = iStack_74c * 2;
            auVar27._0_4_ = local_750 * 2;
            auVar27._8_4_ = iStack_748 * 2;
            auVar27._12_4_ = iStack_744 * 2;
            auVar24 = vpmovsxdq_avx(auVar27);
            auVar172 = vpshufd_avx(auVar27,0xee);
            auVar172 = vpmovsxdq_avx(auVar172);
            auVar172 = vpaddq_avx(auVar172,auVar88);
            auVar24 = vpaddq_avx(auVar73,auVar24);
            if ((uVar43 & 0x10) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar24._0_8_,4);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar24._8_8_,5);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar172._0_8_,6);
            }
            if (cVar32 < '\0') {
              auVar152 = vpinsrw_avx(auVar152,(uint)*auVar172._8_8_,7);
            }
            auVar27 = vpunpckhwd_avx(auVar152,___xmm_00000000000000000000000000000000);
            auVar152 = vpmovzxwd_avx(auVar152);
            auVar172 = vpcmpgtd_avx(auVar27,auVar25);
            auVar28 = auVar89 ^ auVar172;
            auVar24 = vpcmpgtd_avx(auVar152,auVar25);
            auVar29 = auVar89 ^ auVar24;
            auVar120._16_16_ = auVar28;
            auVar120._0_16_ = auVar29;
            auVar90._16_16_ = auVar172;
            auVar90._0_16_ = auVar24;
            auVar209 = auVar207 & ~auVar90;
            local_420 = auVar29._0_4_;
            uStack_41c = auVar29._4_4_;
            uStack_418 = auVar29._8_4_;
            uStack_414 = auVar29._12_4_;
            uStack_410 = auVar28._0_4_;
            uStack_40c = auVar28._4_4_;
            uStack_408 = auVar28._8_4_;
            uStack_404 = auVar28._12_4_;
            if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar209 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar209 >> 0x7f,0) != '\0') || (SUB321(auVar209 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar209 >> 0xbf,0) != '\0') || (SUB321(auVar209 >> 0xdf,0) & 1) != 0) ||
                auVar209[0x1f] < '\0') {
              auVar172 = vpcmpgtd_avx(auVar27,auVar25);
              auVar24 = vpcmpgtd_avx(auVar152,auVar25);
              auVar91._16_16_ = auVar172;
              auVar91._0_16_ = auVar24;
              auVar209 = vblendvps_avx(auVar119,auVar101,auVar91);
              auVar95 = vpcmpgtd_avx(auVar202,auVar95);
              auVar74 = vpcmpgtd_avx(auVar26,auVar74);
              uVar170 = auVar74._0_4_ & local_420;
              uVar178 = auVar74._4_4_ & uStack_41c;
              uVar179 = auVar74._8_4_ & uStack_418;
              uVar180 = auVar74._12_4_ & uStack_414;
              uVar181 = auVar95._0_4_ & uStack_410;
              uVar183 = auVar95._4_4_ & uStack_40c;
              uVar185 = auVar95._8_4_ & uStack_408;
              uVar187 = auVar95._12_4_ & uStack_404;
              auVar155._0_4_ = auVar207._0_4_ & uVar170;
              auVar155._4_4_ = auVar207._4_4_ & uVar178;
              auVar155._8_4_ = auVar207._8_4_ & uVar179;
              auVar155._12_4_ = auVar207._12_4_ & uVar180;
              auVar155._16_4_ = auVar207._16_4_ & uVar181;
              auVar155._20_4_ = auVar207._20_4_ & uVar183;
              auVar155._24_4_ = auVar207._24_4_ & uVar185;
              auVar155._28_4_ = auVar207._28_4_ & uVar187;
              iVar35 = vmovmskps_avx(auVar155);
              auVar191 = auVar101;
              auVar121 = auVar119;
              while (auVar101 = auVar209, iVar35 != 0) {
                auVar24 = vpsubd_avx(auVar191._0_16_,auVar89);
                auVar89._4_4_ = auVar24._4_4_ * 2;
                auVar89._0_4_ = auVar24._0_4_ * 2;
                auVar89._8_4_ = auVar24._8_4_ * 2;
                auVar89._12_4_ = auVar24._12_4_ * 2;
                auVar74 = vpmovsxdq_avx(auVar89);
                auVar95 = vpshufd_avx(auVar89,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar115);
                auVar74 = vpaddq_avx(auVar195,auVar74);
                uVar40 = vmovmskps_avx(auVar155);
                auVar172 = auVar95;
                if ((uVar40 & 1) != 0) {
                  auVar172 = ZEXT216(*auVar74._0_8_);
                }
                if ((uVar40 & 2) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar74._8_8_,1);
                }
                if ((uVar40 & 4) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar95._0_8_,2);
                }
                if ((uVar40 & 8) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar95._8_8_,3);
                }
                auVar95 = vpcmpeqd_avx(auVar121._0_16_,auVar121._0_16_);
                auVar89 = vpsubd_avx(auVar191._16_16_,auVar95);
                auVar28._4_4_ = auVar89._4_4_ * 2;
                auVar28._0_4_ = auVar89._0_4_ * 2;
                auVar28._8_4_ = auVar89._8_4_ * 2;
                auVar28._12_4_ = auVar89._12_4_ * 2;
                auVar74 = vpmovsxdq_avx(auVar28);
                auVar95 = vpshufd_avx(auVar28,0xee);
                auVar95 = vpmovsxdq_avx(auVar95);
                auVar95 = vpaddq_avx(auVar95,auVar88);
                auVar74 = vpaddq_avx(auVar73,auVar74);
                if ((uVar40 & 0x10) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar74._0_8_,4);
                }
                if ((uVar40 & 0x20) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar74._8_8_,5);
                }
                if ((uVar40 & 0x40) != 0) {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar95._0_8_,6);
                }
                if ((char)uVar40 < '\0') {
                  auVar172 = vpinsrw_avx(auVar172,(uint)*auVar95._8_8_,7);
                }
                auVar95 = vpunpckhwd_avx(auVar172,___xmm_00000000000000000000000000000000);
                auVar74 = vpmovzxwd_avx(auVar172);
                auVar95 = vpcmpgtd_avx(auVar95,auVar25);
                auVar74 = vpcmpgtd_avx(auVar74,auVar25);
                auVar198._0_4_ = auVar74._0_4_ & uVar170;
                auVar198._4_4_ = auVar74._4_4_ & uVar178;
                auVar198._8_4_ = auVar74._8_4_ & uVar179;
                auVar198._12_4_ = auVar74._12_4_ & uVar180;
                auVar198._16_4_ = auVar95._0_4_ & uVar181;
                auVar198._20_4_ = auVar95._4_4_ & uVar183;
                auVar198._24_4_ = auVar95._8_4_ & uVar185;
                auVar198._28_4_ = auVar95._12_4_ & uVar187;
                auVar156 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar122._0_4_ = auVar198._0_4_ & auVar207._0_4_;
                auVar122._4_4_ = auVar198._4_4_ & auVar207._4_4_;
                auVar122._8_4_ = auVar198._8_4_ & auVar207._8_4_;
                auVar122._12_4_ = auVar198._12_4_ & auVar207._12_4_;
                auVar122._16_4_ = auVar198._16_4_ & auVar207._16_4_;
                auVar122._20_4_ = auVar198._20_4_ & auVar207._20_4_;
                auVar122._24_4_ = auVar198._24_4_ & auVar207._24_4_;
                auVar122._28_4_ = auVar198._28_4_ & auVar207._28_4_;
                uVar42 = vmovmskps_avx(auVar122);
                if ((char)iVar35 != (char)uVar42) {
                  auVar156._0_4_ = auVar198._0_4_ ^ uVar170;
                  auVar156._4_4_ = auVar198._4_4_ ^ uVar178;
                  auVar156._8_4_ = auVar198._8_4_ ^ uVar179;
                  auVar156._12_4_ = auVar198._12_4_ ^ uVar180;
                  auVar156._16_4_ = auVar198._16_4_ ^ uVar181;
                  auVar156._20_4_ = auVar198._20_4_ ^ uVar183;
                  auVar156._24_4_ = auVar198._24_4_ ^ uVar185;
                  auVar156._28_4_ = auVar198._28_4_ ^ uVar187;
                }
                auVar209 = vblendvps_avx(auVar101,auVar191,auVar198);
                auVar191._16_16_ = auVar89;
                auVar191._0_16_ = auVar24;
                auVar95 = vpcmpgtd_avx(auVar202,auVar89);
                auVar74 = vpcmpgtd_avx(auVar26,auVar24);
                auVar121._16_16_ = auVar95;
                auVar121._0_16_ = auVar74;
                uVar170 = auVar74._0_4_ & auVar156._0_4_;
                uVar178 = auVar74._4_4_ & auVar156._4_4_;
                uVar179 = auVar74._8_4_ & auVar156._8_4_;
                uVar180 = auVar74._12_4_ & auVar156._12_4_;
                uVar181 = auVar95._0_4_ & auVar156._16_4_;
                uVar183 = auVar95._4_4_ & auVar156._20_4_;
                uVar185 = auVar95._8_4_ & auVar156._24_4_;
                uVar187 = auVar95._12_4_ & auVar156._28_4_;
                auVar155._0_4_ = auVar207._0_4_ & uVar170;
                auVar155._4_4_ = auVar207._4_4_ & uVar178;
                auVar155._8_4_ = auVar207._8_4_ & uVar179;
                auVar155._12_4_ = auVar207._12_4_ & uVar180;
                auVar155._16_4_ = auVar207._16_4_ & uVar181;
                auVar155._20_4_ = auVar207._20_4_ & uVar183;
                auVar155._24_4_ = auVar207._24_4_ & uVar185;
                auVar155._28_4_ = auVar207._28_4_ & uVar187;
                iVar35 = vmovmskps_avx(auVar155);
                auVar89 = vpcmpeqd_avx(auVar89,auVar89);
              }
            }
            auVar95 = vpcmpgtd_avx(auVar27,auVar25);
            auVar74 = vpcmpgtd_avx(auVar152,auVar25);
            auVar160._16_16_ = auVar95;
            auVar160._0_16_ = auVar74;
            auVar95 = vpcmpgtd_avx(auVar151,auVar89);
            auVar174._16_16_ = auVar153;
            auVar174._0_16_ = auVar95;
            auVar160 = auVar160 & auVar174;
            if ((((((((SUB321(auVar160 >> 0x1f,0) & 1) != 0 || (SUB321(auVar160 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar160 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar160 >> 0x7f,0) != '\0') || (SUB321(auVar160 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar160 >> 0xbf,0) != '\0') || (SUB321(auVar160 >> 0xdf,0) & 1) != 0) ||
                auVar160[0x1f] < '\0') {
              auVar101 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar101,auVar120);
              auVar152._4_4_ = __real_00000001;
              auVar152._0_4_ = __real_00000001;
              auVar152._8_4_ = __real_00000001;
              auVar152._12_4_ = __real_00000001;
              auVar151 = vpcmpgtd_avx(auVar45,auVar152);
              auVar95 = vpcmpgtd_avx(auVar169,auVar152);
              uVar170 = ~local_420 & auVar95._0_4_;
              uVar178 = ~uStack_41c & auVar95._4_4_;
              uVar179 = ~uStack_418 & auVar95._8_4_;
              uVar180 = ~uStack_414 & auVar95._12_4_;
              uVar181 = ~uStack_410 & auVar151._0_4_;
              uVar183 = ~uStack_40c & auVar151._4_4_;
              uVar185 = ~uStack_408 & auVar151._8_4_;
              uVar187 = ~uStack_404 & auVar151._12_4_;
              auVar161._0_4_ = auVar207._0_4_ & uVar170;
              auVar161._4_4_ = auVar207._4_4_ & uVar178;
              auVar161._8_4_ = auVar207._8_4_ & uVar179;
              auVar161._12_4_ = auVar207._12_4_ & uVar180;
              auVar161._16_4_ = auVar207._16_4_ & uVar181;
              auVar161._20_4_ = auVar207._20_4_ & uVar183;
              auVar161._24_4_ = auVar207._24_4_ & uVar185;
              auVar161._28_4_ = auVar207._28_4_ & uVar187;
              iVar35 = vmovmskps_avx(auVar161);
              while (auVar151 = auVar206._0_16_, iVar35 != 0) {
                iVar3 = auVar89._0_4_ + auVar113._0_4_;
                iVar21 = auVar89._4_4_ + auVar113._4_4_;
                auVar124._4_4_ = iVar21;
                auVar124._0_4_ = iVar3;
                iVar22 = auVar89._8_4_ + auVar113._8_4_;
                auVar124._8_4_ = iVar22;
                iVar23 = auVar89._12_4_ + auVar113._12_4_;
                auVar124._12_4_ = iVar23;
                auVar29._4_4_ = iVar21 * 2;
                auVar29._0_4_ = iVar3 * 2;
                auVar29._8_4_ = iVar22 * 2;
                auVar29._12_4_ = iVar23 * 2;
                auVar95 = vpmovsxdq_avx(auVar29);
                auVar151 = vpshufd_avx(auVar29,0xee);
                auVar151 = vpmovsxdq_avx(auVar151);
                auVar151 = vpaddq_avx(auVar115,auVar151);
                auVar95 = vpaddq_avx(auVar195,auVar95);
                uVar40 = vmovmskps_avx(auVar161);
                auVar74 = auVar95;
                if ((uVar40 & 1) != 0) {
                  auVar74 = ZEXT216(*auVar95._0_8_);
                }
                if ((uVar40 & 2) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar95._8_8_,1);
                }
                if ((uVar40 & 4) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar151._0_8_,2);
                }
                if ((uVar40 & 8) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar151._8_8_,3);
                }
                auVar4._0_4_ = auVar113._16_4_ + auVar89._0_4_;
                auVar4._4_4_ = auVar113._20_4_ + auVar89._4_4_;
                auVar4._8_4_ = auVar113._24_4_ + auVar89._8_4_;
                auVar4._12_4_ = auVar113._28_4_ + auVar89._12_4_;
                auVar206 = ZEXT1664(auVar4);
                auVar5._4_4_ = auVar4._4_4_ * 2;
                auVar5._0_4_ = auVar4._0_4_ * 2;
                auVar5._8_4_ = auVar4._8_4_ * 2;
                auVar5._12_4_ = auVar4._12_4_ * 2;
                auVar95 = vpmovsxdq_avx(auVar5);
                auVar151 = vpshufd_avx(auVar5,0xee);
                auVar151 = vpmovsxdq_avx(auVar151);
                auVar151 = vpaddq_avx(auVar151,auVar88);
                auVar95 = vpaddq_avx(auVar73,auVar95);
                if ((uVar40 & 0x10) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar95._0_8_,4);
                }
                if ((uVar40 & 0x20) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar95._8_8_,5);
                }
                if ((uVar40 & 0x40) != 0) {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar151._0_8_,6);
                }
                if ((char)uVar40 < '\0') {
                  auVar74 = vpinsrw_avx(auVar74,(uint)*auVar151._8_8_,7);
                }
                auVar151 = vpunpckhwd_avx(auVar74,___xmm_00000000000000000000000000000000);
                auVar95 = vpmovzxwd_avx(auVar74);
                auVar151 = vpcmpgtd_avx(auVar151,auVar25);
                auVar95 = vpcmpgtd_avx(auVar95,auVar25);
                auVar200._0_4_ = ~auVar95._0_4_ & uVar170;
                auVar200._4_4_ = ~auVar95._4_4_ & uVar178;
                auVar200._8_4_ = ~auVar95._8_4_ & uVar179;
                auVar200._12_4_ = ~auVar95._12_4_ & uVar180;
                auVar200._16_4_ = ~auVar151._0_4_ & uVar181;
                auVar200._20_4_ = ~auVar151._4_4_ & uVar183;
                auVar200._24_4_ = ~auVar151._8_4_ & uVar185;
                auVar200._28_4_ = ~auVar151._12_4_ & uVar187;
                auVar162 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar125._0_4_ = auVar200._0_4_ & auVar207._0_4_;
                auVar125._4_4_ = auVar200._4_4_ & auVar207._4_4_;
                auVar125._8_4_ = auVar200._8_4_ & auVar207._8_4_;
                auVar125._12_4_ = auVar200._12_4_ & auVar207._12_4_;
                auVar125._16_4_ = auVar200._16_4_ & auVar207._16_4_;
                auVar125._20_4_ = auVar200._20_4_ & auVar207._20_4_;
                auVar125._24_4_ = auVar200._24_4_ & auVar207._24_4_;
                auVar125._28_4_ = auVar200._28_4_ & auVar207._28_4_;
                uVar42 = vmovmskps_avx(auVar125);
                if ((char)iVar35 != (char)uVar42) {
                  auVar162._0_4_ = auVar200._0_4_ ^ uVar170;
                  auVar162._4_4_ = auVar200._4_4_ ^ uVar178;
                  auVar162._8_4_ = auVar200._8_4_ ^ uVar179;
                  auVar162._12_4_ = auVar200._12_4_ ^ uVar180;
                  auVar162._16_4_ = auVar200._16_4_ ^ uVar181;
                  auVar162._20_4_ = auVar200._20_4_ ^ uVar183;
                  auVar162._24_4_ = auVar200._24_4_ ^ uVar185;
                  auVar162._28_4_ = auVar200._28_4_ ^ uVar187;
                }
                auVar124._16_16_ = auVar4;
                auVar101 = vblendvps_avx(auVar101,auVar124,auVar200);
                auVar171._4_4_ = __real_00000002;
                auVar171._0_4_ = __real_00000002;
                auVar171._8_4_ = __real_00000002;
                auVar171._12_4_ = __real_00000002;
                auVar151 = vpcmpgtd_avx(auVar113._0_16_,auVar171);
                auVar95 = vpcmpgtd_avx(auVar113._16_16_,auVar171);
                uVar170 = auVar151._0_4_ & auVar162._0_4_;
                uVar178 = auVar151._4_4_ & auVar162._4_4_;
                uVar179 = auVar151._8_4_ & auVar162._8_4_;
                uVar180 = auVar151._12_4_ & auVar162._12_4_;
                uVar181 = auVar95._0_4_ & auVar162._16_4_;
                uVar183 = auVar95._4_4_ & auVar162._20_4_;
                uVar185 = auVar95._8_4_ & auVar162._24_4_;
                uVar187 = auVar95._12_4_ & auVar162._28_4_;
                auVar161._0_4_ = auVar207._0_4_ & uVar170;
                auVar161._4_4_ = auVar207._4_4_ & uVar178;
                auVar161._8_4_ = auVar207._8_4_ & uVar179;
                auVar161._12_4_ = auVar207._12_4_ & uVar180;
                auVar161._16_4_ = auVar207._16_4_ & uVar181;
                auVar161._20_4_ = auVar207._20_4_ & uVar183;
                auVar161._24_4_ = auVar207._24_4_ & uVar185;
                auVar161._28_4_ = auVar207._28_4_ & uVar187;
                iVar35 = vmovmskps_avx(auVar161);
                auVar113 = ZEXT3264(auVar124);
              }
            }
            local_740 = vblendvps_avx(local_740,auVar101,auVar207);
            auVar6._4_4_ = local_740._4_4_ * 2;
            auVar6._0_4_ = local_740._0_4_ * 2;
            auVar6._8_4_ = local_740._8_4_ * 2;
            auVar6._12_4_ = local_740._12_4_ * 2;
            auVar74 = vpmovsxdq_avx(auVar6);
            auVar95 = vpshufd_avx(auVar6,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar115,auVar95);
            auVar74 = vpaddq_avx(auVar195,auVar74);
            auVar45 = auVar95;
            if ((uVar43 & 1) != 0) {
              auVar45 = ZEXT216(*auVar74._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar74._8_8_,1);
            }
            if ((uVar43 & 4) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar95._0_8_,2);
            }
            if ((uVar43 & 8) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar95._8_8_,3);
            }
            auVar7._4_4_ = local_740._20_4_ * 2;
            auVar7._0_4_ = local_740._16_4_ * 2;
            auVar7._8_4_ = local_740._24_4_ * 2;
            auVar7._12_4_ = local_740._28_4_ * 2;
            auVar74 = vpmovsxdq_avx(auVar7);
            auVar95 = vpshufd_avx(auVar7,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar95,auVar88);
            auVar74 = vpaddq_avx(auVar73,auVar74);
            if ((uVar43 & 0x10) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar74._0_8_,4);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar74._8_8_,5);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar95._0_8_,6);
            }
            if (cVar32 < '\0') {
              auVar45 = vpinsrw_avx(auVar45,(uint)*auVar95._8_8_,7);
            }
            auVar95 = vpcmpeqd_avx(auVar95,auVar95);
            auVar74 = vpsubd_avx(local_740._16_16_,auVar95);
            auVar95 = vpsubd_avx(local_740._0_16_,auVar95);
            auVar105._16_16_ = auVar74;
            auVar105._0_16_ = auVar95;
            local_7a0 = vblendvps_avx(local_7a0,auVar105,auVar207);
            auVar95 = vpcmpgtd_avx(ZEXT416(uVar36),local_7a0._16_16_);
            auVar74 = vpcmpgtd_avx(auVar72,local_7a0._0_16_);
            auVar106._16_16_ = auVar95;
            auVar106._0_16_ = auVar74;
            auVar209 = auVar207 & ~auVar106;
            if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0
                     ) || (SUB321(auVar209 >> 0x5f,0) & 1) != 0) ||
                   SUB321(auVar209 >> 0x7f,0) != '\0') || (SUB321(auVar209 >> 0x9f,0) & 1) != 0) ||
                 SUB321(auVar209 >> 0xbf,0) != '\0') || (SUB321(auVar209 >> 0xdf,0) & 1) != 0) ||
                auVar209[0x1f] < '\0') {
              auVar107._0_4_ = ~auVar74._0_4_ & auVar207._0_4_;
              auVar107._4_4_ = ~auVar74._4_4_ & auVar207._4_4_;
              auVar107._8_4_ = ~auVar74._8_4_ & auVar207._8_4_;
              auVar107._12_4_ = ~auVar74._12_4_ & auVar207._12_4_;
              auVar107._16_4_ = ~auVar95._0_4_ & auVar207._16_4_;
              auVar107._20_4_ = ~auVar95._4_4_ & auVar207._20_4_;
              auVar107._24_4_ = ~auVar95._8_4_ & auVar207._24_4_;
              auVar107._28_4_ = ~auVar95._12_4_ & auVar207._28_4_;
              local_7a0 = vblendvps_avx(local_7a0,auVar119,auVar107);
            }
            auVar72._4_4_ = local_7a0._4_4_ * 2;
            auVar72._0_4_ = local_7a0._0_4_ * 2;
            auVar72._8_4_ = local_7a0._8_4_ * 2;
            auVar72._12_4_ = local_7a0._12_4_ * 2;
            auVar74 = vpmovsxdq_avx(auVar72);
            auVar95 = vpshufd_avx(auVar72,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar115,auVar95);
            auVar74 = vpaddq_avx(auVar195,auVar74);
            auVar72 = auVar95;
            if ((uVar43 & 1) != 0) {
              auVar72 = ZEXT216(*auVar74._0_8_);
            }
            if ((uVar43 & 2) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar74._8_8_,1);
            }
            if ((uVar43 & 4) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar95._0_8_,2);
            }
            if ((uVar43 & 8) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar95._8_8_,3);
            }
            auVar8._4_4_ = local_7a0._20_4_ * 2;
            auVar8._0_4_ = local_7a0._16_4_ * 2;
            auVar8._8_4_ = local_7a0._24_4_ * 2;
            auVar8._12_4_ = local_7a0._28_4_ * 2;
            auVar74 = vpmovsxdq_avx(auVar8);
            auVar95 = vpshufd_avx(auVar8,0xee);
            auVar95 = vpmovsxdq_avx(auVar95);
            auVar95 = vpaddq_avx(auVar95,auVar88);
            auVar74 = vpaddq_avx(auVar73,auVar74);
            if ((uVar43 & 0x10) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar74._0_8_,4);
            }
            if ((uVar43 & 0x20) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar74._8_8_,5);
            }
            if ((uVar43 & 0x40) != 0) {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar95._0_8_,6);
            }
            if (cVar32 < '\0') {
              auVar72 = vpinsrw_avx(auVar72,(uint)*auVar95._8_8_,7);
            }
            auVar74 = vpunpckhwd_avx(auVar45,(undefined1  [16])0x0);
            auVar95 = vpmovzxwd_avx(auVar45);
            auVar76._16_16_ = auVar74;
            auVar76._0_16_ = auVar95;
            auVar74 = vpunpckhwd_avx(auVar72,(undefined1  [16])0x0);
            auVar95 = vpmovzxwd_avx(auVar72);
            auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          if (param_8 != '\x01') {
            auVar72 = vpsubd_avx(auVar95,auVar76._0_16_);
            auVar95 = vpsubd_avx(auVar74,auVar76._16_16_);
            auVar88._4_4_ = __real_00000001;
            auVar88._0_4_ = __real_00000001;
            auVar88._8_4_ = __real_00000001;
            auVar88._12_4_ = __real_00000001;
            auVar95 = vpmaxsd_avx(auVar95,auVar88);
            auVar74 = vpmaxsd_avx(auVar72,auVar88);
            auVar51._16_16_ = auVar95;
            auVar51._0_16_ = auVar74;
            auVar209 = vcvtdq2ps_avx(auVar76);
            auVar101 = vsubps_avx(auVar48,auVar209);
            auVar209 = vcvtdq2ps_avx(auVar51);
            auVar209 = vdivps_avx(auVar101,auVar209);
          }
          auVar101 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          _local_800 = vblendvps_avx(auVar101,auVar209,auVar207);
        }
      }
      auVar95 = local_740._0_16_;
      if (param_9 < 7) {
        auVar97 = vpmulld_avx(auVar95,auVar46);
        auVar46 = vpmulld_avx(local_740._16_16_,auVar46);
        auVar96 = vpmovsxdq_avx(auVar46);
        auVar46 = vpshufd_avx(auVar46,0xee);
        vpmovsxdq_avx(auVar46);
        vpmovsxdq_avx(auVar97);
        auVar46 = vpshufd_avx(auVar97,0xee);
        vpmovsxdq_avx(auVar46);
                    /* WARNING: Could not recover jumptable at 0x000140c4f981. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6ca10 + *(int *)(&DAT_151c6ca10 + uVar39 * 4)))
                  (&DAT_151c6ca10 + *(int *)(&DAT_151c6ca10 + uVar39 * 4),&DAT_151c6ca10,
                   auVar189._0_8_,auVar96._0_8_);
        return;
      }
      auVar154 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar49 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar175._0_4_ = local_740._0_4_ ^ local_7a0._0_4_;
      auVar175._4_4_ = local_740._4_4_ ^ local_7a0._4_4_;
      auVar175._8_4_ = local_740._8_4_ ^ local_7a0._8_4_;
      auVar175._12_4_ = local_740._12_4_ ^ local_7a0._12_4_;
      auVar175._16_4_ = local_740._16_4_ ^ local_7a0._16_4_;
      auVar175._20_4_ = local_740._20_4_ ^ local_7a0._20_4_;
      auVar175._24_4_ = local_740._24_4_ ^ local_7a0._24_4_;
      auVar175._28_4_ = local_740._28_4_ ^ local_7a0._28_4_;
      if (auVar175 != (undefined1  [32])0x0) {
        auVar189 = local_7a0._0_16_;
        auVar74 = vpcmpeqd_avx(local_740._16_16_,local_7a0._16_16_);
        auVar151 = vpcmpeqd_avx(auVar151,auVar151);
        if (param_9 < 7) {
          vpcmpeqd_avx(auVar189,auVar95);
          auVar96 = vpmulld_avx(auVar189,auVar46);
          auVar46 = vpmulld_avx(local_7a0._16_16_,auVar46);
          vpmovsxdq_avx(auVar46);
          auVar46 = vpshufd_avx(auVar46,0xee);
          vpmovsxdq_avx(auVar46);
          vpmovsxdq_avx(auVar96);
          auVar96 = vpshufd_avx(auVar96,0xee);
          vpmovsxdq_avx(auVar96);
                    /* WARNING: Could not recover jumptable at 0x000140c50078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6ca2c + *(int *)(&DAT_151c6ca2c + uVar39 * 4)))
                    (&DAT_151c6ca2c + *(int *)(&DAT_151c6ca2c + uVar39 * 4));
          return;
        }
        auVar72 = vpcmpeqd_avx(auVar189,auVar95);
        auVar52._16_16_ = auVar151 ^ auVar74;
        auVar52._0_16_ = auVar151 ^ auVar72;
        auVar209 = vmaskmovps_avx(auVar52,auVar101);
        auVar49 = vmaskmovps_avx(auVar52,auVar101);
        auVar154 = vmaskmovps_avx(auVar52,auVar101);
        auVar95 = vpcmpeqd_avx(auVar189,auVar95);
        auVar53._16_16_ = auVar151 ^ auVar74;
        auVar53._0_16_ = auVar151 ^ auVar95;
        auVar209 = vsubps_avx(auVar209,auVar101);
        auVar49 = vsubps_avx(auVar49,auVar101);
        auVar154 = vsubps_avx(auVar154,auVar101);
        auVar77._0_4_ = (float)local_800._0_4_ * auVar209._0_4_ + 0.0;
        auVar77._4_4_ = (float)local_800._4_4_ * auVar209._4_4_ + 0.0;
        fVar136 = auVar101._8_4_;
        auVar77._8_4_ = fVar136 + fStack_7f8 * auVar209._8_4_;
        fVar138 = auVar101._12_4_;
        auVar77._12_4_ = fVar138 + fStack_7f4 * auVar209._12_4_;
        fVar140 = auVar101._16_4_;
        auVar77._16_4_ = fVar140 + fStack_7f0 * auVar209._16_4_;
        fVar143 = auVar101._20_4_;
        auVar77._20_4_ = fVar143 + fStack_7ec * auVar209._20_4_;
        fVar145 = auVar101._24_4_;
        auVar77._24_4_ = fVar145 + fStack_7e8 * auVar209._24_4_;
        fVar147 = auVar101._28_4_;
        auVar77._28_4_ = fVar147 + fStack_7e4 * auVar209._28_4_;
        auVar94._0_4_ = (float)local_800._0_4_ * auVar49._0_4_ + 0.0;
        auVar94._4_4_ = (float)local_800._4_4_ * auVar49._4_4_ + 0.0;
        auVar94._8_4_ = fVar136 + fStack_7f8 * auVar49._8_4_;
        auVar94._12_4_ = fVar138 + fStack_7f4 * auVar49._12_4_;
        auVar94._16_4_ = fVar140 + fStack_7f0 * auVar49._16_4_;
        auVar94._20_4_ = fVar143 + fStack_7ec * auVar49._20_4_;
        auVar94._24_4_ = fVar145 + fStack_7e8 * auVar49._24_4_;
        auVar94._28_4_ = fVar147 + fStack_7e4 * auVar49._28_4_;
        auVar108._0_4_ = (float)local_800._0_4_ * auVar154._0_4_ + 0.0;
        auVar108._4_4_ = (float)local_800._4_4_ * auVar154._4_4_ + 0.0;
        auVar108._8_4_ = fVar136 + fStack_7f8 * auVar154._8_4_;
        auVar108._12_4_ = fVar138 + fStack_7f4 * auVar154._12_4_;
        auVar108._16_4_ = fVar140 + fStack_7f0 * auVar154._16_4_;
        auVar108._20_4_ = fVar143 + fStack_7ec * auVar154._20_4_;
        auVar108._24_4_ = fVar145 + fStack_7e8 * auVar154._24_4_;
        auVar108._28_4_ = fVar147 + fStack_7e4 * auVar154._28_4_;
        auVar209 = vmaskmovps_avx(auVar53,auVar77);
        auVar49 = vmaskmovps_avx(auVar53,auVar94);
        auVar154 = vmaskmovps_avx(auVar53,auVar108);
      }
      auVar54._16_16_ = auVar142;
      auVar54._0_16_ = auVar30;
      auVar78._16_16_ = auVar210;
      auVar78._0_16_ = *(undefined1 (*) [16])(param_2 + uVar38);
      local_220 = vshufps_avx(auVar78,auVar54,0x88);
      auVar129._16_16_ = auVar49._0_16_;
      auVar129._0_16_ = auVar209._0_16_;
      auVar207 = vperm2f128_avx(auVar209,auVar49,0x31);
      auVar192._16_16_ = auVar209._0_16_;
      auVar192._0_16_ = auVar49._0_16_;
      auVar119 = vshufps_avx(auVar192,auVar192,0xe1);
      auVar119 = vblendps_avx(auVar129,auVar119,0x12);
      auVar50 = vperm2f128_avx(auVar101,auVar154,0x21);
      auVar101 = vshufps_avx(auVar50,auVar50,0x14);
      auVar101 = vblendps_avx(ZEXT1632(CONCAT88(auVar154._0_8_,auVar154._0_8_)),auVar101,0x48);
      local_180 = vblendps_avx(auVar119,auVar101,0xcc);
      auVar206 = ZEXT864(0) << 0x20;
      auVar119 = vshufps_avx(auVar192,auVar192,0xeb);
      auVar101 = vshufpd_avx(auVar129,auVar129,5);
      auVar101 = vblendps_avx(auVar101,auVar119,0x12);
      auVar119 = vshufps_avx(auVar50,auVar50,0xb4);
      auVar119 = vblendps_avx(ZEXT1632(auVar154._0_16_),auVar119,0x48);
      local_160 = vblendps_avx(auVar101,auVar119,0xcc);
      auVar49 = vperm2f128_avx(auVar49,auVar209,0x31);
      auVar209 = vshufps_avx(auVar49,auVar49,0xe1);
      auVar209 = vblendps_avx(auVar207,auVar209,0x12);
      auVar101 = vunpcklps_avx(auVar154,ZEXT832(0) << 0x20);
      auVar101 = vblendps_avx(ZEXT1632(CONCAT88(auVar154._16_8_,auVar154._16_8_)),auVar101,0x48);
      local_140 = vblendps_avx(auVar209,auVar101,0xcc);
      auVar101 = vshufps_avx(auVar49,auVar49,0xeb);
      auVar209 = vshufpd_avx(auVar207,auVar207,5);
      auVar209 = vblendps_avx(auVar209,auVar101,0x12);
      auVar101 = vunpckhps_avx(auVar154,ZEXT832(0) << 0x20);
      auVar101 = vblendps_avx(ZEXT1632(auVar154._16_16_),auVar101,0x48);
      local_120 = vblendps_avx(auVar209,auVar101,0xcc);
      uVar38 = 0xff;
      do {
        uVar170 = 0;
        for (uVar31 = uVar38; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x8000000000000000) {
          uVar170 = uVar170 + 1;
        }
        bVar2 = (byte)uVar170 & 0x3f;
        iVar35 = *(int *)(local_220 + (ulonglong)(uVar170 & 7) * 4);
        auVar209 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar170 << 4)));
        *(undefined1 (*) [16])(param_1 + 0x40 + (longlong)iVar35 * 0x60) = auVar209._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x50 + (longlong)iVar35 * 0x60) = auVar209._16_16_;
        uVar38 = uVar38 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
      } while (uVar38 != 0);
      uVar37 = uVar37 + 8;
    } while ((int)uVar37 < (int)local_720);
  }
  if ((int)param_10 <= (int)uVar37) {
    return;
  }
  auVar96 = vpshufd_avx(ZEXT416(uVar37),0);
  auVar55._16_16_ = auVar96;
  auVar55._0_16_ = auVar96;
  auVar189 = SUB3216(auVar55 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar95 = vpshufd_avx(ZEXT416(param_10),0);
  auVar72 = SUB3216(auVar55 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar30 = vpcmpgtd_avx(auVar95,auVar72);
  auVar46 = vpcmpgtd_avx(auVar95,auVar189);
  auVar96 = vpslld_avx(auVar96,3);
  auVar25 = vpand_avx(auVar46,auVar96);
  auVar96 = vpand_avx(auVar30,auVar96);
  lVar34 = auVar96._0_4_ + param_2;
  uVar178 = auVar46._0_4_;
  auVar97._0_4_ = uVar178 & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
  uVar179 = auVar46._4_4_;
  auVar97._4_4_ = uVar179 & _UNK_150b519e4;
  uVar180 = auVar46._8_4_;
  auVar97._8_4_ = uVar180 & _UNK_150b519e8;
  uVar181 = auVar46._12_4_;
  auVar97._12_4_ = uVar181 & _UNK_150b519ec;
  uVar183 = auVar30._0_4_;
  vextractps_avx(auVar97,1);
  auVar96 = vpshufd_avx(ZEXT416(param_4),0);
  auVar44 = vpslld_avx(auVar96,2);
  auVar96 = vpmulld_avx(ZEXT416(*(uint *)((ulonglong)auVar97._0_4_ + param_2 + auVar25._0_4_)),
                        auVar44);
  auVar96 = vpand_avx(auVar46,auVar96);
  uVar37 = *(uint *)(param_3 + auVar96._0_4_);
  uVar170 = *(uint *)((ulonglong)
                      (uVar178 &
                      ___ymm_0000000400000004000000040000000400000004000000040000000400000004) +
                     param_3 + auVar96._0_4_);
  auVar74 = ZEXT416(uVar170);
  auVar96 = vpmulld_avx(ZEXT416(*(uint *)((ulonglong)(uVar183 & _UNK_150b519f0) + lVar34)),auVar44);
  auVar96 = vpand_avx(auVar30,auVar96);
  uVar36 = *(uint *)(param_3 + auVar96._0_4_);
  uVar43 = *(uint *)((ulonglong)(uVar183 & _UNK_150b50d50) + param_3 + auVar96._0_4_);
  auVar96 = vpmovsxdq_avx(ZEXT416(uVar37));
  auVar46 = vpshufd_avx(ZEXT416(uVar37),0xee);
  auVar46 = vpmovsxdq_avx(auVar46);
  auVar97 = vpshufd_avx(ZEXT416(-(uint)(param_9 == 3)),0);
  auVar142._4_4_ = __real_00000001;
  auVar142._0_4_ = __real_00000001;
  auVar142._8_4_ = __real_00000001;
  auVar142._12_4_ = __real_00000001;
  auVar210 = vpcmpgtd_avx(ZEXT416(uVar43),auVar142);
  auVar142 = vpcmpgtd_avx(auVar74,auVar142);
  auVar149._0_4_ = auVar142._0_4_ & auVar97._0_4_;
  auVar149._4_4_ = auVar142._4_4_ & auVar97._4_4_;
  auVar149._8_4_ = auVar142._8_4_ & auVar97._8_4_;
  auVar149._12_4_ = auVar142._12_4_ & auVar97._12_4_;
  auVar149._16_4_ = auVar210._0_4_ & auVar97._0_4_;
  auVar149._20_4_ = auVar210._4_4_ & auVar97._4_4_;
  auVar149._24_4_ = auVar210._8_4_ & auVar97._8_4_;
  auVar149._28_4_ = auVar210._12_4_ & auVar97._12_4_;
  auVar47 = vblendvps_avx(ZEXT1232(ZEXT812(0)),
                          ___ymm_0000001800000018000000180000001800000018000000180000001800000018,
                          auVar149);
  auVar44 = auVar47._0_16_;
  auVar97 = vpmovsxdq_avx(auVar44);
  auVar96 = vpaddq_avx(auVar97,auVar96);
  auVar97 = vshufpd_avx(auVar44,auVar44,3);
  auVar97 = vpmovsxdq_avx(auVar97);
  auVar46 = vpaddq_avx(auVar97,auVar46);
  auVar44._0_4_ = uVar178 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  auVar44._4_4_ = uVar179 & _UNK_150b519c4;
  auVar44._8_4_ = uVar180 & _UNK_150b519c8;
  auVar44._12_4_ = uVar181 & _UNK_150b519cc;
  vextractps_avx(auVar44,1);
  vextractps_avx(auVar44,2);
  vextractps_avx(auVar44,3);
  auVar97 = vpmovsxdq_avx(ZEXT416(uVar36));
  auVar151 = auVar47._16_16_;
  auVar44 = vpmovsxdq_avx(auVar151);
  auVar97 = vpaddq_avx(auVar44,auVar97);
  auVar44 = vpshufd_avx(ZEXT416(uVar36),0xee);
  auVar44 = vpmovsxdq_avx(auVar44);
  auVar151 = vshufpd_avx(auVar151,auVar151,3);
  auVar151 = vpmovsxdq_avx(auVar151);
  auVar44 = vpaddq_avx(auVar151,auVar44);
  auVar151 = vpshufd_avx(ZEXT416(~((0.0 < param_7) - 1)),0);
  local_640._0_4_ = auVar142._0_4_ & auVar151._0_4_;
  local_640._4_4_ = auVar142._4_4_ & auVar151._4_4_;
  local_640._8_4_ = auVar142._8_4_ & auVar151._8_4_;
  local_640._12_4_ = auVar142._12_4_ & auVar151._12_4_;
  local_640._16_4_ = auVar210._0_4_ & auVar151._0_4_;
  local_640._20_4_ = auVar210._4_4_ & auVar151._4_4_;
  local_640._24_4_ = auVar210._8_4_ & auVar151._8_4_;
  local_640._28_4_ = auVar210._12_4_ & auVar151._12_4_;
  uVar37 = *(uint *)(param_2 + auVar25._0_4_);
  auVar25 = vpshufd_avx(ZEXT416((uint)(iVar33 * iVar1)),0);
  auVar150._0_4_ = uVar178 & local_640._0_4_;
  auVar150._4_4_ = uVar179 & local_640._4_4_;
  auVar150._8_4_ = uVar180 & local_640._8_4_;
  auVar150._12_4_ = uVar181 & local_640._12_4_;
  auVar150._16_4_ = uVar183 & local_640._16_4_;
  auVar150._20_4_ = auVar30._4_4_ & local_640._20_4_;
  auVar150._24_4_ = auVar30._8_4_ & local_640._24_4_;
  auVar150._28_4_ = auVar30._12_4_ & local_640._28_4_;
  uVar36 = vmovmskps_avx(auVar150);
  if (uVar36 == 0) {
    auVar47 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar48 = ZEXT1232(ZEXT812(0));
  }
  else {
    auVar142 = vpcmpeqd_avx(ZEXT416(uVar37),ZEXT416(uVar37));
    auVar210._0_4_ = uVar43 + auVar142._0_4_;
    auVar210._4_4_ = auVar142._4_4_;
    auVar210._8_4_ = auVar142._8_4_;
    auVar210._12_4_ = auVar142._12_4_;
    auVar9._0_4_ = uVar170 + auVar142._0_4_;
    auVar9._4_4_ = auVar142._4_4_;
    auVar9._8_4_ = auVar142._8_4_;
    auVar9._12_4_ = auVar142._12_4_;
    auVar197._16_16_ = auVar210;
    auVar197._0_16_ = auVar9;
    if (param_7 < __real_3f800000) {
      auVar142 = vpmulld_avx(auVar74,auVar25);
      auVar45 = vpmulld_avx(ZEXT416(uVar43),auVar25);
      auVar151 = vpmovsxdq_avx(auVar45);
      auVar45 = vpshufd_avx(auVar45,0xee);
      auVar45 = vpmovsxdq_avx(auVar45);
      auVar169 = vpmovsxdq_avx(auVar142);
      auVar142 = vpshufd_avx(auVar142,0xee);
      auVar142 = vpmovsxdq_avx(auVar142);
      auVar116._8_8_ = 0;
      auVar116._0_8_ = param_5 + 3;
      auVar73 = vpshufd_avx(auVar116,0x44);
      auVar142 = vpaddq_avx(auVar73,auVar142);
      auVar46 = vpaddq_avx(auVar142,auVar46);
      auVar142 = vpaddq_avx(auVar73,auVar169);
      auVar96 = vpaddq_avx(auVar96,auVar142);
      auVar142 = vpaddq_avx(auVar73,auVar45);
      auVar44 = vpaddq_avx(auVar142,auVar44);
      auVar142 = vpaddq_avx(auVar73,auVar151);
      auVar97 = vpaddq_avx(auVar142,auVar97);
      auVar117._0_4_ = auVar97._0_4_ & (uint)__real_fffffffffffffffc;
      auVar117._4_4_ = auVar97._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar117._8_4_ = auVar97._8_4_ & (uint)__real_fffffffffffffffc;
      auVar117._12_4_ = auVar97._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar130._16_4_ = auVar44._0_4_ & (uint)__real_fffffffffffffffc;
      auVar130._0_16_ = auVar117;
      auVar130._20_4_ = auVar44._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar130._24_4_ = auVar44._8_4_ & (uint)__real_fffffffffffffffc;
      auVar130._28_4_ = auVar44._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar190._0_4_ = auVar96._0_4_ & (uint)__real_fffffffffffffffc;
      auVar190._4_4_ = auVar96._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar190._8_4_ = auVar96._8_4_ & (uint)__real_fffffffffffffffc;
      auVar190._12_4_ = auVar96._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar193._16_4_ = auVar46._0_4_ & (uint)__real_fffffffffffffffc;
      auVar193._0_16_ = auVar190;
      auVar193._20_4_ = auVar46._4_4_ & __real_fffffffffffffffc._4_4_;
      auVar193._24_4_ = auVar46._8_4_ & (uint)__real_fffffffffffffffc;
      auVar193._28_4_ = auVar46._12_4_ & __real_fffffffffffffffc._4_4_;
      auVar96 = vshufps_avx(ZEXT416((uint)param_7),ZEXT416((uint)param_7),0);
      auVar47 = vcvtdq2ps_avx(auVar197);
      param_7 = param_7 * (float)(param_6 + -1);
      uVar185 = (uint)param_7;
      uVar170 = 0;
      if (0 < (int)uVar185) {
        uVar170 = uVar185;
      }
      if ((int)(param_6 - 2U) < (int)uVar170) {
        uVar170 = param_6 - 2U;
      }
      auVar46._0_4_ = (int)(auVar96._0_4_ * auVar47._0_4_);
      auVar46._4_4_ = (int)(auVar96._4_4_ * auVar47._4_4_);
      auVar46._8_4_ = (int)(auVar96._8_4_ * auVar47._8_4_);
      auVar46._12_4_ = (int)(auVar96._12_4_ * auVar47._12_4_);
      auVar56._16_4_ = (int)(auVar96._0_4_ * auVar47._16_4_);
      auVar56._0_16_ = auVar46;
      auVar56._20_4_ = (int)(auVar96._4_4_ * auVar47._20_4_);
      auVar56._24_4_ = (int)(auVar96._8_4_ * auVar47._24_4_);
      auVar56._28_4_ = (int)(auVar96._12_4_ * auVar47._28_4_);
      auVar96 = vpmaxsd_avx(auVar56._16_16_,ZEXT416(0) << 0x20);
      auVar46 = vpmaxsd_avx(auVar46,ZEXT416(0) << 0x20);
      auVar97 = vpminsd_avx(auVar96,auVar210);
      auVar44 = vpminsd_avx(auVar46,auVar9);
      auVar79._16_16_ = auVar97;
      auVar79._0_16_ = auVar44;
      auVar206 = ZEXT3264(auVar79);
      auVar142 = auVar130._16_16_;
      auVar151 = auVar193._16_16_;
      cVar32 = (char)uVar36;
      if (param_6 < 0x100) {
        auVar169 = vpmovsxdq_avx(auVar44);
        auVar45 = vpshufd_avx(auVar44,0xee);
        auVar45 = vpmovsxdq_avx(auVar45);
        auVar45 = vpaddq_avx(auVar151,auVar45);
        auVar169 = vpaddq_avx(auVar190,auVar169);
        auVar73 = auVar169;
        if ((uVar36 & 1) != 0) {
          auVar73 = ZEXT116(*auVar169._0_8_);
        }
        auVar153 = vpmovsxdq_avx(auVar97);
        auVar202 = vpshufd_avx(auVar97,0xee);
        if ((uVar36 & 2) != 0) {
          auVar169 = vpinsrb_avx(auVar73,(uint)*auVar169._8_8_,1);
          auVar73 = vpblendw_avx(auVar169,auVar73,0xe);
        }
        auVar202 = vpmovsxdq_avx(auVar202);
        auVar169 = vpaddq_avx(auVar153,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar153 = vpaddq_avx(auVar202,auVar142);
        }
        else {
          auVar153 = vpmovzxwd_avx(auVar73);
          auVar153 = vpinsrb_avx(auVar153,(uint)*auVar45._0_8_,2);
          auVar153 = vpinsrb_avx(auVar153,(uint)auVar73[3],3);
          auVar73 = vpblendw_avx(auVar153,auVar73,0xc);
          auVar153 = vpaddq_avx(auVar202,auVar142);
        }
        if ((uVar36 & 8) != 0) {
          auVar202 = vpmovzxwd_avx(auVar73);
          auVar202 = vpinsrb_avx(auVar202,(uint)auVar73[2],2);
          auVar45 = vpinsrb_avx(auVar202,(uint)*auVar45._8_8_,3);
          auVar73 = vpblendw_avx(auVar45,auVar73,0xc);
        }
        auVar45 = auVar169;
        if ((uVar36 & 0x10) != 0) {
          auVar45 = vpshufb_avx(auVar73,___xmm_80800706808005048080030203020100);
          auVar45 = vpinsrb_avx(auVar45,(uint)*auVar169._0_8_,4);
          auVar45 = vpinsrb_avx(auVar45,(uint)auVar73[5],5);
          auVar73 = vpblendw_avx(auVar45,auVar73,8);
        }
        if ((uVar36 & 0x20) != 0) {
          auVar45 = vpshufb_avx(auVar73,___xmm_80800706808005048080030403020100);
          auVar45 = vpinsrb_avx(auVar45,(uint)*auVar169._8_8_,5);
          auVar73 = vpblendw_avx(auVar45,auVar73,8);
        }
        if ((uVar36 & 0x40) != 0) {
          auVar45 = vpshufb_avx(auVar73,___xmm_80800706808005048080050403020100);
          auVar45 = vpinsrb_avx(auVar45,(uint)*auVar153._0_8_,6);
          auVar73 = vpinsrb_avx(auVar45,(uint)auVar73[7],7);
        }
        if (cVar32 < '\0') {
          auVar169 = vpshufb_avx(auVar73,___xmm_80800706808005048006050403020100);
          auVar73 = vpinsrb_avx(auVar169,(uint)*auVar153._8_8_,7);
        }
        auVar153 = vpmovzxbd_avx(auVar73);
        auVar169 = vpshufd_avx(auVar73,0x55);
        auVar202 = vpmovzxbd_avx(auVar169);
        auVar26 = vpshufd_avx(ZEXT416(uVar170),0);
        auVar169 = vpcmpgtd_avx(auVar202,auVar26);
        auVar45 = vpcmpeqd_avx(auVar45,auVar45);
        auVar88 = auVar169 ^ auVar45;
        auVar73 = vpcmpgtd_avx(auVar153,auVar26);
        auVar45 = auVar73 ^ auVar45;
        auVar132._16_16_ = auVar88;
        auVar132._0_16_ = auVar45;
        auVar63._16_16_ = auVar169;
        auVar63._0_16_ = auVar73;
        auVar48 = auVar150 & ~auVar63;
        local_6c0 = auVar45._0_4_;
        uStack_6bc = auVar45._4_4_;
        uStack_6b8 = auVar45._8_4_;
        uStack_6b4 = auVar45._12_4_;
        uStack_6b0 = auVar88._0_4_;
        uStack_6ac = auVar88._4_4_;
        uStack_6a8 = auVar88._8_4_;
        uStack_6a4 = auVar88._12_4_;
        auVar47 = auVar79;
        if ((((((((SUB321(auVar48 >> 0x1f,0) & 1) != 0 || (SUB321(auVar48 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar48 >> 0x5f,0) & 1) != 0) || SUB321(auVar48 >> 0x7f,0) != '\0') ||
              (SUB321(auVar48 >> 0x9f,0) & 1) != 0) || SUB321(auVar48 >> 0xbf,0) != '\0') ||
            (SUB321(auVar48 >> 0xdf,0) & 1) != 0) || auVar48[0x1f] < '\0') {
          auVar45 = vpcmpgtd_avx(auVar202,auVar26);
          auVar169 = vpcmpgtd_avx(auVar153,auVar26);
          auVar64._16_16_ = auVar45;
          auVar64._0_16_ = auVar169;
          auVar47 = vblendvps_avx(auVar197,auVar79,auVar64);
          auVar96 = vpcmpgtd_avx(auVar210,auVar96);
          auVar46 = vpcmpgtd_avx(auVar9,auVar46);
          uVar170 = auVar46._0_4_ & local_6c0;
          uVar185 = auVar46._4_4_ & uStack_6bc;
          uVar187 = auVar46._8_4_ & uStack_6b8;
          uVar40 = auVar46._12_4_ & uStack_6b4;
          uVar182 = auVar96._0_4_ & uStack_6b0;
          uVar184 = auVar96._4_4_ & uStack_6ac;
          uVar186 = auVar96._8_4_ & uStack_6a8;
          uVar188 = auVar96._12_4_ & uStack_6a4;
          auVar133._0_4_ = uVar170 & auVar150._0_4_;
          auVar133._4_4_ = uVar185 & auVar150._4_4_;
          auVar133._8_4_ = uVar187 & auVar150._8_4_;
          auVar133._12_4_ = uVar40 & auVar150._12_4_;
          auVar133._16_4_ = uVar182 & auVar150._16_4_;
          auVar133._20_4_ = uVar184 & auVar150._20_4_;
          auVar133._24_4_ = uVar186 & auVar150._24_4_;
          auVar133._28_4_ = uVar188 & auVar150._28_4_;
          iVar33 = vmovmskps_avx(auVar133);
          if (iVar33 != 0) {
            auVar96 = vpcmpeqd_avx(auVar46,auVar46);
            do {
              auVar73 = vpsubd_avx(auVar79._0_16_,auVar96);
              auVar45 = vpmovsxdq_avx(auVar73);
              auVar46 = vpshufd_avx(auVar73,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar151,auVar46);
              auVar45 = vpaddq_avx(auVar190,auVar45);
              uVar41 = vmovmskps_avx(auVar133);
              auVar169 = auVar45;
              if ((uVar41 & 1) != 0) {
                auVar169 = ZEXT116(*auVar45._0_8_);
              }
              if ((uVar41 & 2) != 0) {
                auVar45 = vpinsrb_avx(auVar169,(uint)*auVar45._8_8_,1);
                auVar169 = vpblendw_avx(auVar45,auVar169,0xe);
              }
              if ((uVar41 & 4) != 0) {
                auVar45 = vpmovzxwd_avx(auVar169);
                auVar45 = vpinsrb_avx(auVar45,(uint)*auVar46._0_8_,2);
                auVar45 = vpinsrb_avx(auVar45,(uint)auVar169[3],3);
                auVar169 = vpblendw_avx(auVar45,auVar169,0xc);
              }
              if ((uVar41 & 8) != 0) {
                auVar45 = vpmovzxwd_avx(auVar169);
                auVar45 = vpinsrb_avx(auVar45,(uint)auVar169[2],2);
                auVar46 = vpinsrb_avx(auVar45,(uint)*auVar46._8_8_,3);
                auVar169 = vpblendw_avx(auVar46,auVar169,0xc);
              }
              auVar88 = vpsubd_avx(auVar79._16_16_,auVar96);
              auVar45 = vpmovsxdq_avx(auVar88);
              auVar46 = vpshufd_avx(auVar88,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar46,auVar142);
              auVar45 = vpaddq_avx(auVar45,auVar117);
              if ((uVar41 & 0x10) != 0) {
                auVar195 = vpshufb_avx(auVar169,___xmm_80800706808005048080030203020100);
                auVar195 = vpinsrb_avx(auVar195,(uint)*auVar45._0_8_,4);
                auVar195 = vpinsrb_avx(auVar195,(uint)auVar169[5],5);
                auVar169 = vpblendw_avx(auVar195,auVar169,8);
              }
              if ((uVar41 & 0x20) != 0) {
                auVar195 = vpshufb_avx(auVar169,___xmm_80800706808005048080030403020100);
                auVar45 = vpinsrb_avx(auVar195,(uint)*auVar45._8_8_,5);
                auVar169 = vpblendw_avx(auVar45,auVar169,8);
              }
              if ((uVar41 & 0x40) != 0) {
                auVar45 = vpshufb_avx(auVar169,___xmm_80800706808005048080050403020100);
                auVar45 = vpinsrb_avx(auVar45,(uint)*auVar46._0_8_,6);
                auVar169 = vpinsrb_avx(auVar45,(uint)auVar169[7],7);
              }
              if ((char)uVar41 < '\0') {
                auVar45 = vpshufb_avx(auVar169,___xmm_80800706808005048006050403020100);
                auVar169 = vpinsrb_avx(auVar45,(uint)*auVar46._8_8_,7);
              }
              auVar45 = vpmovzxbd_avx(auVar169);
              auVar46 = vpshufd_avx(auVar169,0x55);
              auVar46 = vpmovzxbd_avx(auVar46);
              auVar46 = vpcmpgtd_avx(auVar46,auVar26);
              auVar45 = vpcmpgtd_avx(auVar45,auVar26);
              auVar176._0_4_ = uVar170 & auVar45._0_4_;
              auVar176._4_4_ = uVar185 & auVar45._4_4_;
              auVar176._8_4_ = uVar187 & auVar45._8_4_;
              auVar176._12_4_ = uVar40 & auVar45._12_4_;
              auVar176._16_4_ = uVar182 & auVar46._0_4_;
              auVar176._20_4_ = uVar184 & auVar46._4_4_;
              auVar176._24_4_ = uVar186 & auVar46._8_4_;
              auVar176._28_4_ = uVar188 & auVar46._12_4_;
              uVar41 = 0;
              uVar137 = 0;
              uVar139 = 0;
              uVar141 = 0;
              uVar144 = 0;
              uVar146 = 0;
              uVar148 = 0;
              uVar114 = 0;
              auVar213._0_4_ = auVar176._0_4_ & auVar150._0_4_;
              auVar213._4_4_ = auVar176._4_4_ & auVar150._4_4_;
              auVar213._8_4_ = auVar176._8_4_ & auVar150._8_4_;
              auVar213._12_4_ = auVar176._12_4_ & auVar150._12_4_;
              auVar213._16_4_ = auVar176._16_4_ & auVar150._16_4_;
              auVar213._20_4_ = auVar176._20_4_ & auVar150._20_4_;
              auVar213._24_4_ = auVar176._24_4_ & auVar150._24_4_;
              auVar213._28_4_ = auVar176._28_4_ & auVar150._28_4_;
              uVar42 = vmovmskps_avx(auVar213);
              if ((char)iVar33 != (char)uVar42) {
                uVar114 = uVar170 ^ auVar176._0_4_;
                uVar41 = uVar185 ^ auVar176._4_4_;
                uVar137 = uVar187 ^ auVar176._8_4_;
                uVar139 = uVar40 ^ auVar176._12_4_;
                uVar141 = uVar182 ^ auVar176._16_4_;
                uVar144 = uVar184 ^ auVar176._20_4_;
                uVar146 = uVar186 ^ auVar176._24_4_;
                uVar148 = uVar188 ^ auVar176._28_4_;
              }
              auVar47 = vblendvps_avx(auVar47,auVar79,auVar176);
              auVar79._16_16_ = auVar88;
              auVar79._0_16_ = auVar73;
              auVar46 = vpcmpgtd_avx(auVar210,auVar88);
              auVar45 = vpcmpgtd_avx(auVar9,auVar73);
              uVar170 = auVar45._0_4_ & uVar114;
              uVar185 = auVar45._4_4_ & uVar41;
              uVar187 = auVar45._8_4_ & uVar137;
              uVar40 = auVar45._12_4_ & uVar139;
              uVar182 = auVar46._0_4_ & uVar141;
              uVar184 = auVar46._4_4_ & uVar144;
              uVar186 = auVar46._8_4_ & uVar146;
              uVar188 = auVar46._12_4_ & uVar148;
              auVar133._0_4_ = uVar170 & auVar150._0_4_;
              auVar133._4_4_ = uVar185 & auVar150._4_4_;
              auVar133._8_4_ = uVar187 & auVar150._8_4_;
              auVar133._12_4_ = uVar40 & auVar150._12_4_;
              auVar133._16_4_ = uVar182 & auVar150._16_4_;
              auVar133._20_4_ = uVar184 & auVar150._20_4_;
              auVar133._24_4_ = uVar186 & auVar150._24_4_;
              auVar133._28_4_ = uVar188 & auVar150._28_4_;
              iVar33 = vmovmskps_avx(auVar133);
            } while (iVar33 != 0);
          }
        }
        auVar96 = vpcmpgtd_avx(auVar202,auVar26);
        auVar46 = vpcmpgtd_avx(auVar153,auVar26);
        auVar65._16_16_ = auVar96;
        auVar65._0_16_ = auVar46;
        auVar65 = auVar65 & auVar150;
        if ((((((((SUB321(auVar65 >> 0x1f,0) & 1) != 0 || (SUB321(auVar65 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar65 >> 0x5f,0) & 1) != 0) || SUB321(auVar65 >> 0x7f,0) != '\0') ||
              (SUB321(auVar65 >> 0x9f,0) & 1) != 0) || SUB321(auVar65 >> 0xbf,0) != '\0') ||
            (SUB321(auVar65 >> 0xdf,0) & 1) != 0) || auVar65[0x1f] < '\0') {
          auVar47 = vblendvps_avx(ZEXT832(0) << 0x20,auVar47,auVar132);
          auVar99._4_4_ = __real_00000001;
          auVar99._0_4_ = __real_00000001;
          auVar99._8_4_ = __real_00000001;
          auVar99._12_4_ = __real_00000001;
          auVar96 = vpcmpgtd_avx(auVar97,auVar99);
          auVar46 = vpcmpgtd_avx(auVar44,auVar99);
          uVar170 = ~local_6c0 & auVar46._0_4_;
          uVar185 = ~uStack_6bc & auVar46._4_4_;
          uVar187 = ~uStack_6b8 & auVar46._8_4_;
          uVar40 = ~uStack_6b4 & auVar46._12_4_;
          uVar182 = ~uStack_6b0 & auVar96._0_4_;
          uVar184 = ~uStack_6ac & auVar96._4_4_;
          uVar186 = ~uStack_6a8 & auVar96._8_4_;
          uVar188 = ~uStack_6a4 & auVar96._12_4_;
          auVar134._0_4_ = uVar170 & auVar150._0_4_;
          auVar134._4_4_ = uVar185 & auVar150._4_4_;
          auVar134._8_4_ = uVar187 & auVar150._8_4_;
          auVar134._12_4_ = uVar40 & auVar150._12_4_;
          auVar134._16_4_ = uVar182 & auVar150._16_4_;
          auVar134._20_4_ = uVar184 & auVar150._20_4_;
          auVar134._24_4_ = uVar186 & auVar150._24_4_;
          auVar134._28_4_ = uVar188 & auVar150._28_4_;
          iVar33 = vmovmskps_avx(auVar134);
          if (iVar33 != 0) {
            auVar96 = vpcmpeqd_avx(auVar46,auVar46);
            auVar100._4_4_ = __real_00000002;
            auVar100._0_4_ = __real_00000002;
            auVar100._8_4_ = __real_00000002;
            auVar100._12_4_ = __real_00000002;
            do {
              auVar19._0_4_ = auVar206._0_4_ + auVar96._0_4_;
              auVar19._4_4_ = auVar206._4_4_ + auVar96._4_4_;
              auVar19._8_4_ = auVar206._8_4_ + auVar96._8_4_;
              auVar19._12_4_ = auVar206._12_4_ + auVar96._12_4_;
              auVar97 = vpmovsxdq_avx(auVar19);
              auVar46 = vpshufd_avx(auVar19,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar151,auVar46);
              auVar97 = vpaddq_avx(auVar190,auVar97);
              uVar41 = vmovmskps_avx(auVar134);
              auVar44 = auVar97;
              if ((uVar41 & 1) != 0) {
                auVar44 = ZEXT116(*auVar97._0_8_);
              }
              if ((uVar41 & 2) != 0) {
                auVar97 = vpinsrb_avx(auVar44,(uint)*auVar97._8_8_,1);
                auVar44 = vpblendw_avx(auVar97,auVar44,0xe);
              }
              if ((uVar41 & 4) != 0) {
                auVar97 = vpmovzxwd_avx(auVar44);
                auVar97 = vpinsrb_avx(auVar97,(uint)*auVar46._0_8_,2);
                auVar97 = vpinsrb_avx(auVar97,(uint)auVar44[3],3);
                auVar44 = vpblendw_avx(auVar97,auVar44,0xc);
              }
              if ((uVar41 & 8) != 0) {
                auVar97 = vpmovzxwd_avx(auVar44);
                auVar97 = vpinsrb_avx(auVar97,(uint)auVar44[2],2);
                auVar46 = vpinsrb_avx(auVar97,(uint)*auVar46._8_8_,3);
                auVar44 = vpblendw_avx(auVar46,auVar44,0xc);
              }
              auVar20._0_4_ = auVar206._16_4_ + auVar96._0_4_;
              auVar20._4_4_ = auVar206._20_4_ + auVar96._4_4_;
              auVar20._8_4_ = auVar206._24_4_ + auVar96._8_4_;
              auVar20._12_4_ = auVar206._28_4_ + auVar96._12_4_;
              auVar97 = vpmovsxdq_avx(auVar20);
              auVar46 = vpshufd_avx(auVar20,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar46,auVar142);
              auVar97 = vpaddq_avx(auVar97,auVar117);
              if ((uVar41 & 0x10) != 0) {
                auVar210 = vpshufb_avx(auVar44,___xmm_80800706808005048080030203020100);
                auVar210 = vpinsrb_avx(auVar210,(uint)*auVar97._0_8_,4);
                auVar210 = vpinsrb_avx(auVar210,(uint)auVar44[5],5);
                auVar44 = vpblendw_avx(auVar210,auVar44,8);
              }
              if ((uVar41 & 0x20) != 0) {
                auVar210 = vpshufb_avx(auVar44,___xmm_80800706808005048080030403020100);
                auVar97 = vpinsrb_avx(auVar210,(uint)*auVar97._8_8_,5);
                auVar44 = vpblendw_avx(auVar97,auVar44,8);
              }
              if ((uVar41 & 0x40) != 0) {
                auVar97 = vpshufb_avx(auVar44,___xmm_80800706808005048080050403020100);
                auVar97 = vpinsrb_avx(auVar97,(uint)*auVar46._0_8_,6);
                auVar44 = vpinsrb_avx(auVar97,(uint)auVar44[7],7);
              }
              if ((char)uVar41 < '\0') {
                auVar97 = vpshufb_avx(auVar44,___xmm_80800706808005048006050403020100);
                auVar44 = vpinsrb_avx(auVar97,(uint)*auVar46._8_8_,7);
              }
              auVar97 = vpmovzxbd_avx(auVar44);
              auVar46 = vpshufd_avx(auVar44,0x55);
              auVar46 = vpmovzxbd_avx(auVar46);
              auVar46 = vpcmpgtd_avx(auVar46,auVar26);
              auVar97 = vpcmpgtd_avx(auVar97,auVar26);
              auVar177._0_4_ = ~auVar97._0_4_ & uVar170;
              auVar177._4_4_ = ~auVar97._4_4_ & uVar185;
              auVar177._8_4_ = ~auVar97._8_4_ & uVar187;
              auVar177._12_4_ = ~auVar97._12_4_ & uVar40;
              auVar177._16_4_ = ~auVar46._0_4_ & uVar182;
              auVar177._20_4_ = ~auVar46._4_4_ & uVar184;
              auVar177._24_4_ = ~auVar46._8_4_ & uVar186;
              auVar177._28_4_ = ~auVar46._12_4_ & uVar188;
              uVar41 = 0;
              uVar137 = 0;
              uVar139 = 0;
              uVar141 = 0;
              uVar144 = 0;
              uVar146 = 0;
              uVar148 = 0;
              uVar114 = 0;
              auVar214._0_4_ = auVar177._0_4_ & auVar150._0_4_;
              auVar214._4_4_ = auVar177._4_4_ & auVar150._4_4_;
              auVar214._8_4_ = auVar177._8_4_ & auVar150._8_4_;
              auVar214._12_4_ = auVar177._12_4_ & auVar150._12_4_;
              auVar214._16_4_ = auVar177._16_4_ & auVar150._16_4_;
              auVar214._20_4_ = auVar177._20_4_ & auVar150._20_4_;
              auVar214._24_4_ = auVar177._24_4_ & auVar150._24_4_;
              auVar214._28_4_ = auVar177._28_4_ & auVar150._28_4_;
              uVar42 = vmovmskps_avx(auVar214);
              if ((char)iVar33 != (char)uVar42) {
                uVar114 = uVar170 ^ auVar177._0_4_;
                uVar41 = uVar185 ^ auVar177._4_4_;
                uVar137 = uVar187 ^ auVar177._8_4_;
                uVar139 = uVar40 ^ auVar177._12_4_;
                uVar141 = uVar182 ^ auVar177._16_4_;
                uVar144 = uVar184 ^ auVar177._20_4_;
                uVar146 = uVar186 ^ auVar177._24_4_;
                uVar148 = uVar188 ^ auVar177._28_4_;
              }
              auVar168._16_16_ = auVar20;
              auVar168._0_16_ = auVar19;
              auVar47 = vblendvps_avx(auVar47,auVar168,auVar177);
              auVar46 = vpcmpgtd_avx(auVar206._0_16_,auVar100);
              auVar97 = vpcmpgtd_avx(auVar206._16_16_,auVar100);
              uVar170 = auVar46._0_4_ & uVar114;
              uVar185 = auVar46._4_4_ & uVar41;
              uVar187 = auVar46._8_4_ & uVar137;
              uVar40 = auVar46._12_4_ & uVar139;
              uVar182 = auVar97._0_4_ & uVar141;
              uVar184 = auVar97._4_4_ & uVar144;
              uVar186 = auVar97._8_4_ & uVar146;
              uVar188 = auVar97._12_4_ & uVar148;
              auVar134._0_4_ = uVar170 & auVar150._0_4_;
              auVar134._4_4_ = uVar185 & auVar150._4_4_;
              auVar134._8_4_ = uVar187 & auVar150._8_4_;
              auVar134._12_4_ = uVar40 & auVar150._12_4_;
              auVar134._16_4_ = uVar182 & auVar150._16_4_;
              auVar134._20_4_ = uVar184 & auVar150._20_4_;
              auVar134._24_4_ = uVar186 & auVar150._24_4_;
              auVar134._28_4_ = uVar188 & auVar150._28_4_;
              iVar33 = vmovmskps_avx(auVar134);
              auVar206 = ZEXT3264(auVar168);
            } while (iVar33 != 0);
          }
        }
        auVar47 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar47,auVar150);
        auVar44 = auVar47._0_16_;
        auVar46 = vpmovsxdq_avx(auVar44);
        auVar96 = vshufpd_avx(auVar44,auVar44,3);
        auVar96 = vpmovsxdq_avx(auVar96);
        auVar210 = auVar47._16_16_;
        auVar96 = vpaddq_avx(auVar151,auVar96);
        auVar46 = vpaddq_avx(auVar190,auVar46);
        auVar97 = auVar96;
        if ((uVar36 & 1) != 0) {
          auVar97 = ZEXT116(*auVar46._0_8_);
        }
        auVar45 = vpmovsxdq_avx(auVar210);
        auVar169 = vshufpd_avx(auVar210,auVar210,3);
        if ((uVar36 & 2) != 0) {
          auVar46 = vpinsrb_avx(auVar97,(uint)*auVar46._8_8_,1);
          auVar97 = vpblendw_avx(auVar46,auVar97,0xe);
        }
        auVar169 = vpmovsxdq_avx(auVar169);
        auVar46 = vpaddq_avx(auVar45,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar45 = vpaddq_avx(auVar169,auVar142);
          if ((uVar36 & 8) == 0) goto LAB_140c52745;
LAB_140c5453e:
          auVar169 = vpmovzxwd_avx(auVar97);
          auVar169 = vpinsrb_avx(auVar169,(uint)auVar97[2],2);
          auVar96 = vpinsrb_avx(auVar169,(uint)*auVar96._8_8_,3);
          auVar97 = vpblendw_avx(auVar96,auVar97,0xc);
          auVar83._16_16_ = auVar45;
          auVar83._0_16_ = auVar46;
          if ((uVar36 & 0x10) != 0) goto LAB_140c54571;
LAB_140c52755:
          if ((uVar36 & 0x20) == 0) goto LAB_140c5275f;
LAB_140c545a1:
          auVar96 = vpshufb_avx(auVar97,___xmm_80800706808005048080030403020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar83._8_8_,5);
          auVar97 = vpblendw_avx(auVar96,auVar97,8);
          if ((uVar36 & 0x40) != 0) goto LAB_140c545c6;
LAB_140c52769:
          auVar46 = auVar83._0_16_;
        }
        else {
          auVar45 = vpmovzxwd_avx(auVar97);
          auVar45 = vpinsrb_avx(auVar45,(uint)*auVar96._0_8_,2);
          auVar45 = vpinsrb_avx(auVar45,(uint)auVar97[3],3);
          auVar97 = vpblendw_avx(auVar45,auVar97,0xc);
          auVar45 = vpaddq_avx(auVar169,auVar142);
          if ((uVar36 & 8) != 0) goto LAB_140c5453e;
LAB_140c52745:
          auVar83._16_16_ = auVar45;
          auVar83._0_16_ = auVar46;
          if ((uVar36 & 0x10) == 0) goto LAB_140c52755;
LAB_140c54571:
          auVar96 = vpshufb_avx(auVar97,___xmm_80800706808005048080030203020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar83._0_8_,4);
          auVar96 = vpinsrb_avx(auVar96,(uint)auVar97[5],5);
          auVar97 = vpblendw_avx(auVar96,auVar97,8);
          if ((uVar36 & 0x20) != 0) goto LAB_140c545a1;
LAB_140c5275f:
          if ((uVar36 & 0x40) == 0) goto LAB_140c52769;
LAB_140c545c6:
          auVar46 = auVar83._0_16_;
          auVar96 = vpshufb_avx(auVar97,___xmm_80800706808005048080050403020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar83._16_8_,6);
          auVar97 = vpinsrb_avx(auVar96,(uint)auVar97[7],7);
        }
        if (cVar32 < '\0') {
          auVar46 = vpshufb_avx(auVar97,___xmm_80800706808005048006050403020100);
          auVar97 = vpinsrb_avx(auVar46,(uint)*auVar83._24_8_,7);
        }
        auVar96 = vpcmpeqd_avx(auVar46,auVar46);
        auVar46 = vpsubd_avx(auVar210,auVar96);
        auVar96 = vpsubd_avx(auVar44,auVar96);
        auVar66._16_16_ = auVar46;
        auVar66._0_16_ = auVar96;
        auVar48 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar66,auVar150);
        auVar96 = vpcmpgtd_avx(ZEXT416(uVar43),auVar48._16_16_);
        auVar46 = vpcmpgtd_avx(auVar74,auVar48._0_16_);
        auVar67._16_16_ = auVar96;
        auVar67._0_16_ = auVar46;
        auVar209 = auVar150 & ~auVar67;
        if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar209 >> 0x5f,0) & 1) != 0) || SUB321(auVar209 >> 0x7f,0) != '\0') ||
              (SUB321(auVar209 >> 0x9f,0) & 1) != 0) || SUB321(auVar209 >> 0xbf,0) != '\0') ||
            (SUB321(auVar209 >> 0xdf,0) & 1) != 0) || auVar209[0x1f] < '\0') {
          auVar68._0_4_ = ~auVar46._0_4_ & auVar150._0_4_;
          auVar68._4_4_ = ~auVar46._4_4_ & auVar150._4_4_;
          auVar68._8_4_ = ~auVar46._8_4_ & auVar150._8_4_;
          auVar68._12_4_ = ~auVar46._12_4_ & auVar150._12_4_;
          auVar68._16_4_ = ~auVar96._0_4_ & auVar150._16_4_;
          auVar68._20_4_ = ~auVar96._4_4_ & auVar150._20_4_;
          auVar68._24_4_ = ~auVar96._8_4_ & auVar150._24_4_;
          auVar68._28_4_ = ~auVar96._12_4_ & auVar150._28_4_;
          auVar48 = vblendvps_avx(auVar48,auVar197,auVar68);
        }
        auVar46 = vpmovsxdq_avx(auVar48._0_16_);
        auVar96 = vpshufd_avx(auVar48._0_16_,0xee);
        auVar96 = vpmovsxdq_avx(auVar96);
        auVar96 = vpaddq_avx(auVar151,auVar96);
        auVar46 = vpaddq_avx(auVar190,auVar46);
        auVar44 = auVar46;
        if ((uVar36 & 1) != 0) {
          auVar44 = ZEXT116(*auVar46._0_8_);
        }
        auVar210 = vpmovsxdq_avx(auVar48._16_16_);
        auVar151 = vpshufd_avx(auVar48._16_16_,0xee);
        if ((uVar36 & 2) != 0) {
          auVar46 = vpinsrb_avx(auVar44,(uint)*auVar46._8_8_,1);
          auVar44 = vpblendw_avx(auVar46,auVar44,0xe);
        }
        auVar151 = vpmovsxdq_avx(auVar151);
        auVar46 = vpaddq_avx(auVar210,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar210 = vpaddq_avx(auVar151,auVar142);
          if ((uVar36 & 8) == 0) goto LAB_140c52853;
LAB_140c54646:
          auVar142 = vpmovzxwd_avx(auVar44);
          auVar142 = vpinsrb_avx(auVar142,(uint)auVar44[2],2);
          auVar96 = vpinsrb_avx(auVar142,(uint)*auVar96._8_8_,3);
          auVar44 = vpblendw_avx(auVar96,auVar44,0xc);
          auVar84._16_16_ = auVar210;
          auVar84._0_16_ = auVar46;
          if ((uVar36 & 0x10) != 0) goto LAB_140c54679;
LAB_140c52863:
          if ((uVar36 & 0x20) == 0) goto LAB_140c5286d;
LAB_140c546a9:
          auVar96 = vpshufb_avx(auVar44,___xmm_80800706808005048080030403020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar84._8_8_,5);
          auVar44 = vpblendw_avx(auVar96,auVar44,8);
          auVar96 = vpmovzxbd_avx(auVar97);
          auVar46 = vpshufd_avx(auVar97,0x55);
        }
        else {
          auVar210 = vpmovzxwd_avx(auVar44);
          auVar210 = vpinsrb_avx(auVar210,(uint)*auVar96._0_8_,2);
          auVar210 = vpinsrb_avx(auVar210,(uint)auVar44[3],3);
          auVar44 = vpblendw_avx(auVar210,auVar44,0xc);
          auVar210 = vpaddq_avx(auVar151,auVar142);
          if ((uVar36 & 8) != 0) goto LAB_140c54646;
LAB_140c52853:
          auVar84._16_16_ = auVar210;
          auVar84._0_16_ = auVar46;
          if ((uVar36 & 0x10) == 0) goto LAB_140c52863;
LAB_140c54679:
          auVar96 = vpshufb_avx(auVar44,___xmm_80800706808005048080030203020100);
          auVar96 = vpinsrb_avx(auVar96,(uint)*auVar84._0_8_,4);
          auVar96 = vpinsrb_avx(auVar96,(uint)auVar44[5],5);
          auVar44 = vpblendw_avx(auVar96,auVar44,8);
          if ((uVar36 & 0x20) != 0) goto LAB_140c546a9;
LAB_140c5286d:
          auVar96 = vpmovzxbd_avx(auVar97);
          auVar46 = vpshufd_avx(auVar97,0x55);
        }
        if ((uVar36 & 0x40) != 0) {
          auVar97 = vpshufb_avx(auVar44,___xmm_80800706808005048080050403020100);
          auVar97 = vpinsrb_avx(auVar97,(uint)*auVar84._16_8_,6);
          auVar44 = vpinsrb_avx(auVar97,(uint)auVar44[7],7);
        }
        auVar46 = vpmovzxbd_avx(auVar46);
        if (cVar32 < '\0') {
          auVar97 = vpshufb_avx(auVar44,___xmm_80800706808005048006050403020100);
          auVar44 = vpinsrb_avx(auVar97,(uint)*auVar84._24_8_,7);
        }
        auVar82._16_16_ = auVar46;
        auVar82._0_16_ = auVar96;
        auVar96 = vpmovzxbd_avx(auVar44);
        auVar46 = vpshufd_avx(auVar44,0x55);
        auVar46 = vpmovzxbd_avx(auVar46);
        auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      else {
        auVar10._4_4_ = auVar97._4_4_ * 2;
        auVar10._0_4_ = auVar97._0_4_ * 2;
        auVar10._8_4_ = auVar97._8_4_ * 2;
        auVar10._12_4_ = auVar97._12_4_ * 2;
        auVar11._4_4_ = auVar44._4_4_ * 2;
        auVar11._0_4_ = auVar44._0_4_ * 2;
        auVar11._8_4_ = auVar44._8_4_ * 2;
        auVar11._12_4_ = auVar44._12_4_ * 2;
        auVar169 = vpmovsxdq_avx(auVar11);
        auVar45 = vpshufd_avx(auVar11,0xee);
        auVar45 = vpmovsxdq_avx(auVar45);
        auVar45 = vpaddq_avx(auVar151,auVar45);
        auVar169 = vpaddq_avx(auVar190,auVar169);
        auVar73 = auVar45;
        if ((uVar36 & 1) != 0) {
          auVar73 = ZEXT216(*auVar169._0_8_);
        }
        auVar153 = vpmovsxdq_avx(auVar10);
        auVar202 = vpshufd_avx(auVar10,0xee);
        if ((uVar36 & 2) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar169._8_8_,1);
        }
        auVar202 = vpmovsxdq_avx(auVar202);
        auVar169 = vpaddq_avx(auVar153,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar153 = vpaddq_avx(auVar202,auVar142);
        }
        else {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar45._0_8_,2);
          auVar153 = vpaddq_avx(auVar202,auVar142);
        }
        if ((uVar36 & 8) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar45._8_8_,3);
        }
        if ((uVar36 & 0x10) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar169._0_8_,4);
        }
        if ((uVar36 & 0x20) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar169._8_8_,5);
        }
        if ((uVar36 & 0x40) != 0) {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar153._0_8_,6);
        }
        if (cVar32 < '\0') {
          auVar73 = vpinsrw_avx(auVar73,(uint)*auVar153._8_8_,7);
        }
        auVar88 = vpunpckhwd_avx(auVar73,(undefined1  [16])0x0);
        auVar202 = vpmovzxwd_avx(auVar73);
        auVar26 = vpshufd_avx(ZEXT416(uVar170),0);
        auVar169 = vpcmpgtd_avx(auVar88,auVar26);
        auVar45 = vpcmpeqd_avx(auVar153,auVar153);
        auVar153 = auVar169 ^ auVar45;
        auVar73 = vpcmpgtd_avx(auVar202,auVar26);
        auVar45 = auVar73 ^ auVar45;
        auVar166._16_16_ = auVar153;
        auVar166._0_16_ = auVar45;
        auVar57._16_16_ = auVar169;
        auVar57._0_16_ = auVar73;
        auVar48 = auVar150 & ~auVar57;
        local_6c0 = auVar45._0_4_;
        uStack_6bc = auVar45._4_4_;
        uStack_6b8 = auVar45._8_4_;
        uStack_6b4 = auVar45._12_4_;
        uStack_6b0 = auVar153._0_4_;
        uStack_6ac = auVar153._4_4_;
        uStack_6a8 = auVar153._8_4_;
        uStack_6a4 = auVar153._12_4_;
        auVar47 = auVar79;
        if ((((((((SUB321(auVar48 >> 0x1f,0) & 1) != 0 || (SUB321(auVar48 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar48 >> 0x5f,0) & 1) != 0) || SUB321(auVar48 >> 0x7f,0) != '\0') ||
              (SUB321(auVar48 >> 0x9f,0) & 1) != 0) || SUB321(auVar48 >> 0xbf,0) != '\0') ||
            (SUB321(auVar48 >> 0xdf,0) & 1) != 0) || auVar48[0x1f] < '\0') {
          auVar45 = vpcmpgtd_avx(auVar88,auVar26);
          auVar169 = vpcmpgtd_avx(auVar202,auVar26);
          auVar58._16_16_ = auVar45;
          auVar58._0_16_ = auVar169;
          auVar47 = vblendvps_avx(auVar197,auVar79,auVar58);
          auVar96 = vpcmpgtd_avx(auVar210,auVar96);
          auVar46 = vpcmpgtd_avx(auVar9,auVar46);
          uVar170 = auVar46._0_4_ & local_6c0;
          uVar185 = auVar46._4_4_ & uStack_6bc;
          uVar187 = auVar46._8_4_ & uStack_6b8;
          uVar40 = auVar46._12_4_ & uStack_6b4;
          uVar182 = auVar96._0_4_ & uStack_6b0;
          uVar184 = auVar96._4_4_ & uStack_6ac;
          uVar186 = auVar96._8_4_ & uStack_6a8;
          uVar188 = auVar96._12_4_ & uStack_6a4;
          auVar131._0_4_ = uVar170 & auVar150._0_4_;
          auVar131._4_4_ = uVar185 & auVar150._4_4_;
          auVar131._8_4_ = uVar187 & auVar150._8_4_;
          auVar131._12_4_ = uVar40 & auVar150._12_4_;
          auVar131._16_4_ = uVar182 & auVar150._16_4_;
          auVar131._20_4_ = uVar184 & auVar150._20_4_;
          auVar131._24_4_ = uVar186 & auVar150._24_4_;
          auVar131._28_4_ = uVar188 & auVar150._28_4_;
          iVar33 = vmovmskps_avx(auVar131);
          if (iVar33 != 0) {
            auVar96 = vpcmpeqd_avx(auVar46,auVar46);
            do {
              auVar73 = vpsubd_avx(auVar79._0_16_,auVar96);
              auVar12._4_4_ = auVar73._4_4_ * 2;
              auVar12._0_4_ = auVar73._0_4_ * 2;
              auVar12._8_4_ = auVar73._8_4_ * 2;
              auVar12._12_4_ = auVar73._12_4_ * 2;
              auVar45 = vpmovsxdq_avx(auVar12);
              auVar46 = vpshufd_avx(auVar12,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar151,auVar46);
              auVar45 = vpaddq_avx(auVar190,auVar45);
              uVar41 = vmovmskps_avx(auVar131);
              auVar169 = auVar46;
              if ((uVar41 & 1) != 0) {
                auVar169 = ZEXT216(*auVar45._0_8_);
              }
              if ((uVar41 & 2) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar45._8_8_,1);
              }
              if ((uVar41 & 4) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar46._0_8_,2);
              }
              if ((uVar41 & 8) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar46._8_8_,3);
              }
              auVar153 = vpsubd_avx(auVar79._16_16_,auVar96);
              auVar13._4_4_ = auVar153._4_4_ * 2;
              auVar13._0_4_ = auVar153._0_4_ * 2;
              auVar13._8_4_ = auVar153._8_4_ * 2;
              auVar13._12_4_ = auVar153._12_4_ * 2;
              auVar45 = vpmovsxdq_avx(auVar13);
              auVar46 = vpshufd_avx(auVar13,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar46,auVar142);
              auVar45 = vpaddq_avx(auVar45,auVar117);
              if ((uVar41 & 0x10) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar45._0_8_,4);
              }
              if ((uVar41 & 0x20) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar45._8_8_,5);
              }
              if ((uVar41 & 0x40) != 0) {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar46._0_8_,6);
              }
              if ((char)uVar41 < '\0') {
                auVar169 = vpinsrw_avx(auVar169,(uint)*auVar46._8_8_,7);
              }
              auVar46 = vpunpckhwd_avx(auVar169,___xmm_00000000000000000000000000000000);
              auVar45 = vpmovzxwd_avx(auVar169);
              auVar46 = vpcmpgtd_avx(auVar46,auVar26);
              auVar45 = vpcmpgtd_avx(auVar45,auVar26);
              auVar204._0_4_ = auVar45._0_4_ & uVar170;
              auVar204._4_4_ = auVar45._4_4_ & uVar185;
              auVar204._8_4_ = auVar45._8_4_ & uVar187;
              auVar204._12_4_ = auVar45._12_4_ & uVar40;
              auVar204._16_4_ = auVar46._0_4_ & uVar182;
              auVar204._20_4_ = auVar46._4_4_ & uVar184;
              auVar204._24_4_ = auVar46._8_4_ & uVar186;
              auVar204._28_4_ = auVar46._12_4_ & uVar188;
              uVar41 = 0;
              uVar137 = 0;
              uVar139 = 0;
              uVar141 = 0;
              uVar144 = 0;
              uVar146 = 0;
              uVar148 = 0;
              uVar114 = 0;
              auVar211._0_4_ = auVar204._0_4_ & auVar150._0_4_;
              auVar211._4_4_ = auVar204._4_4_ & auVar150._4_4_;
              auVar211._8_4_ = auVar204._8_4_ & auVar150._8_4_;
              auVar211._12_4_ = auVar204._12_4_ & auVar150._12_4_;
              auVar211._16_4_ = auVar204._16_4_ & auVar150._16_4_;
              auVar211._20_4_ = auVar204._20_4_ & auVar150._20_4_;
              auVar211._24_4_ = auVar204._24_4_ & auVar150._24_4_;
              auVar211._28_4_ = auVar204._28_4_ & auVar150._28_4_;
              uVar42 = vmovmskps_avx(auVar211);
              if ((char)iVar33 != (char)uVar42) {
                uVar114 = auVar204._0_4_ ^ uVar170;
                uVar41 = auVar204._4_4_ ^ uVar185;
                uVar137 = auVar204._8_4_ ^ uVar187;
                uVar139 = auVar204._12_4_ ^ uVar40;
                uVar141 = auVar204._16_4_ ^ uVar182;
                uVar144 = auVar204._20_4_ ^ uVar184;
                uVar146 = auVar204._24_4_ ^ uVar186;
                uVar148 = auVar204._28_4_ ^ uVar188;
              }
              auVar47 = vblendvps_avx(auVar47,auVar79,auVar204);
              auVar79._16_16_ = auVar153;
              auVar79._0_16_ = auVar73;
              auVar46 = vpcmpgtd_avx(auVar210,auVar153);
              auVar45 = vpcmpgtd_avx(auVar9,auVar73);
              uVar170 = auVar45._0_4_ & uVar114;
              uVar185 = auVar45._4_4_ & uVar41;
              uVar187 = auVar45._8_4_ & uVar137;
              uVar40 = auVar45._12_4_ & uVar139;
              uVar182 = auVar46._0_4_ & uVar141;
              uVar184 = auVar46._4_4_ & uVar144;
              uVar186 = auVar46._8_4_ & uVar146;
              uVar188 = auVar46._12_4_ & uVar148;
              auVar131._0_4_ = uVar170 & auVar150._0_4_;
              auVar131._4_4_ = uVar185 & auVar150._4_4_;
              auVar131._8_4_ = uVar187 & auVar150._8_4_;
              auVar131._12_4_ = uVar40 & auVar150._12_4_;
              auVar131._16_4_ = uVar182 & auVar150._16_4_;
              auVar131._20_4_ = uVar184 & auVar150._20_4_;
              auVar131._24_4_ = uVar186 & auVar150._24_4_;
              auVar131._28_4_ = uVar188 & auVar150._28_4_;
              iVar33 = vmovmskps_avx(auVar131);
            } while (iVar33 != 0);
          }
        }
        auVar96 = vpcmpgtd_avx(auVar88,auVar26);
        auVar46 = vpcmpgtd_avx(auVar202,auVar26);
        auVar59._16_16_ = auVar96;
        auVar59._0_16_ = auVar46;
        auVar59 = auVar59 & auVar150;
        if ((((((((SUB321(auVar59 >> 0x1f,0) & 1) != 0 || (SUB321(auVar59 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar59 >> 0x5f,0) & 1) != 0) || SUB321(auVar59 >> 0x7f,0) != '\0') ||
              (SUB321(auVar59 >> 0x9f,0) & 1) != 0) || SUB321(auVar59 >> 0xbf,0) != '\0') ||
            (SUB321(auVar59 >> 0xdf,0) & 1) != 0) || auVar59[0x1f] < '\0') {
          auVar47 = vblendvps_avx(ZEXT832(0) << 0x20,auVar47,auVar166);
          auVar98._4_4_ = __real_00000001;
          auVar98._0_4_ = __real_00000001;
          auVar98._8_4_ = __real_00000001;
          auVar98._12_4_ = __real_00000001;
          auVar96 = vpcmpgtd_avx(auVar97,auVar98);
          auVar46 = vpcmpgtd_avx(auVar44,auVar98);
          uVar170 = ~local_6c0 & auVar46._0_4_;
          uVar185 = ~uStack_6bc & auVar46._4_4_;
          uVar187 = ~uStack_6b8 & auVar46._8_4_;
          uVar40 = ~uStack_6b4 & auVar46._12_4_;
          uVar182 = ~uStack_6b0 & auVar96._0_4_;
          uVar184 = ~uStack_6ac & auVar96._4_4_;
          uVar186 = ~uStack_6a8 & auVar96._8_4_;
          uVar188 = ~uStack_6a4 & auVar96._12_4_;
          auVar109._0_4_ = uVar170 & auVar150._0_4_;
          auVar109._4_4_ = uVar185 & auVar150._4_4_;
          auVar109._8_4_ = uVar187 & auVar150._8_4_;
          auVar109._12_4_ = uVar40 & auVar150._12_4_;
          auVar109._16_4_ = uVar182 & auVar150._16_4_;
          auVar109._20_4_ = uVar184 & auVar150._20_4_;
          auVar109._24_4_ = uVar186 & auVar150._24_4_;
          auVar109._28_4_ = uVar188 & auVar150._28_4_;
          iVar33 = vmovmskps_avx(auVar109);
          if (iVar33 != 0) {
            auVar96 = vpcmpeqd_avx(auVar46,auVar46);
            auVar173._4_4_ = __real_00000002;
            auVar173._0_4_ = __real_00000002;
            auVar173._8_4_ = __real_00000002;
            auVar173._12_4_ = __real_00000002;
            do {
              iVar1 = auVar206._0_4_ + auVar96._0_4_;
              iVar35 = auVar206._4_4_ + auVar96._4_4_;
              auVar167._4_4_ = iVar35;
              auVar167._0_4_ = iVar1;
              iVar3 = auVar206._8_4_ + auVar96._8_4_;
              auVar167._8_4_ = iVar3;
              iVar21 = auVar206._12_4_ + auVar96._12_4_;
              auVar167._12_4_ = iVar21;
              auVar14._4_4_ = iVar35 * 2;
              auVar14._0_4_ = iVar1 * 2;
              auVar14._8_4_ = iVar3 * 2;
              auVar14._12_4_ = iVar21 * 2;
              auVar97 = vpmovsxdq_avx(auVar14);
              auVar46 = vpshufd_avx(auVar14,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar151,auVar46);
              auVar97 = vpaddq_avx(auVar190,auVar97);
              uVar41 = vmovmskps_avx(auVar109);
              auVar44 = auVar97;
              if ((uVar41 & 1) != 0) {
                auVar44 = ZEXT216(*auVar97._0_8_);
              }
              if ((uVar41 & 2) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar97._8_8_,1);
              }
              if ((uVar41 & 4) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._0_8_,2);
              }
              if ((uVar41 & 8) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._8_8_,3);
              }
              iVar1 = auVar206._16_4_ + auVar96._0_4_;
              iVar35 = auVar206._20_4_ + auVar96._4_4_;
              auVar167._20_4_ = iVar35;
              auVar167._16_4_ = iVar1;
              iVar3 = auVar206._24_4_ + auVar96._8_4_;
              auVar167._24_4_ = iVar3;
              iVar21 = auVar206._28_4_ + auVar96._12_4_;
              auVar167._28_4_ = iVar21;
              auVar15._4_4_ = iVar35 * 2;
              auVar15._0_4_ = iVar1 * 2;
              auVar15._8_4_ = iVar3 * 2;
              auVar15._12_4_ = iVar21 * 2;
              auVar97 = vpmovsxdq_avx(auVar15);
              auVar46 = vpshufd_avx(auVar15,0xee);
              auVar46 = vpmovsxdq_avx(auVar46);
              auVar46 = vpaddq_avx(auVar46,auVar142);
              auVar97 = vpaddq_avx(auVar97,auVar117);
              if ((uVar41 & 0x10) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar97._0_8_,4);
              }
              if ((uVar41 & 0x20) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar97._8_8_,5);
              }
              if ((uVar41 & 0x40) != 0) {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._0_8_,6);
              }
              if ((char)uVar41 < '\0') {
                auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._8_8_,7);
              }
              auVar46 = vpunpckhwd_avx(auVar44,___xmm_00000000000000000000000000000000);
              auVar97 = vpmovzxwd_avx(auVar44);
              auVar46 = vpcmpgtd_avx(auVar46,auVar26);
              auVar97 = vpcmpgtd_avx(auVar97,auVar26);
              auVar205._0_4_ = ~auVar97._0_4_ & uVar170;
              auVar205._4_4_ = ~auVar97._4_4_ & uVar185;
              auVar205._8_4_ = ~auVar97._8_4_ & uVar187;
              auVar205._12_4_ = ~auVar97._12_4_ & uVar40;
              auVar205._16_4_ = ~auVar46._0_4_ & uVar182;
              auVar205._20_4_ = ~auVar46._4_4_ & uVar184;
              auVar205._24_4_ = ~auVar46._8_4_ & uVar186;
              auVar205._28_4_ = ~auVar46._12_4_ & uVar188;
              uVar41 = 0;
              uVar137 = 0;
              uVar139 = 0;
              uVar141 = 0;
              uVar144 = 0;
              uVar146 = 0;
              uVar148 = 0;
              uVar114 = 0;
              auVar212._0_4_ = auVar205._0_4_ & auVar150._0_4_;
              auVar212._4_4_ = auVar205._4_4_ & auVar150._4_4_;
              auVar212._8_4_ = auVar205._8_4_ & auVar150._8_4_;
              auVar212._12_4_ = auVar205._12_4_ & auVar150._12_4_;
              auVar212._16_4_ = auVar205._16_4_ & auVar150._16_4_;
              auVar212._20_4_ = auVar205._20_4_ & auVar150._20_4_;
              auVar212._24_4_ = auVar205._24_4_ & auVar150._24_4_;
              auVar212._28_4_ = auVar205._28_4_ & auVar150._28_4_;
              uVar42 = vmovmskps_avx(auVar212);
              if ((char)iVar33 != (char)uVar42) {
                uVar114 = auVar205._0_4_ ^ uVar170;
                uVar41 = auVar205._4_4_ ^ uVar185;
                uVar137 = auVar205._8_4_ ^ uVar187;
                uVar139 = auVar205._12_4_ ^ uVar40;
                uVar141 = auVar205._16_4_ ^ uVar182;
                uVar144 = auVar205._20_4_ ^ uVar184;
                uVar146 = auVar205._24_4_ ^ uVar186;
                uVar148 = auVar205._28_4_ ^ uVar188;
              }
              auVar47 = vblendvps_avx(auVar47,auVar167,auVar205);
              auVar46 = vpcmpgtd_avx(auVar206._0_16_,auVar173);
              auVar97 = vpcmpgtd_avx(auVar206._16_16_,auVar173);
              uVar170 = auVar46._0_4_ & uVar114;
              uVar185 = auVar46._4_4_ & uVar41;
              uVar187 = auVar46._8_4_ & uVar137;
              uVar40 = auVar46._12_4_ & uVar139;
              uVar182 = auVar97._0_4_ & uVar141;
              uVar184 = auVar97._4_4_ & uVar144;
              uVar186 = auVar97._8_4_ & uVar146;
              uVar188 = auVar97._12_4_ & uVar148;
              auVar109._0_4_ = uVar170 & auVar150._0_4_;
              auVar109._4_4_ = uVar185 & auVar150._4_4_;
              auVar109._8_4_ = uVar187 & auVar150._8_4_;
              auVar109._12_4_ = uVar40 & auVar150._12_4_;
              auVar109._16_4_ = uVar182 & auVar150._16_4_;
              auVar109._20_4_ = uVar184 & auVar150._20_4_;
              auVar109._24_4_ = uVar186 & auVar150._24_4_;
              auVar109._28_4_ = uVar188 & auVar150._28_4_;
              iVar33 = vmovmskps_avx(auVar109);
              auVar206 = ZEXT3264(auVar167);
            } while (iVar33 != 0);
          }
        }
        auVar47 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar47,auVar150);
        auVar96._4_4_ = auVar47._20_4_ * 2;
        auVar96._0_4_ = auVar47._16_4_ * 2;
        auVar96._8_4_ = auVar47._24_4_ * 2;
        auVar96._12_4_ = auVar47._28_4_ * 2;
        auVar16._4_4_ = auVar47._4_4_ * 2;
        auVar16._0_4_ = auVar47._0_4_ * 2;
        auVar16._8_4_ = auVar47._8_4_ * 2;
        auVar16._12_4_ = auVar47._12_4_ * 2;
        auVar97 = vpmovsxdq_avx(auVar16);
        auVar46 = vpshufd_avx(auVar16,0xee);
        auVar46 = vpmovsxdq_avx(auVar46);
        auVar46 = vpaddq_avx(auVar151,auVar46);
        auVar97 = vpaddq_avx(auVar190,auVar97);
        auVar44 = auVar97;
        if ((uVar36 & 1) != 0) {
          auVar44 = ZEXT216(*auVar97._0_8_);
        }
        auVar210 = vpmovsxdq_avx(auVar96);
        auVar96 = vpshufd_avx(auVar96,0xee);
        if ((uVar36 & 2) != 0) {
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar97._8_8_,1);
        }
        auVar97 = vpmovsxdq_avx(auVar96);
        auVar96 = vpaddq_avx(auVar210,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar97 = vpaddq_avx(auVar97,auVar142);
          if ((uVar36 & 8) == 0) goto LAB_140c51db5;
LAB_140c5441c:
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._8_8_,3);
          auVar80._16_16_ = auVar97;
          auVar80._0_16_ = auVar96;
          if ((uVar36 & 0x10) != 0) goto LAB_140c54440;
LAB_140c51dce:
          if ((uVar36 & 0x20) == 0) goto LAB_140c51dd8;
LAB_140c54454:
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar80._8_8_,5);
          if ((uVar36 & 0x40) != 0) goto LAB_140c54469;
LAB_140c51de2:
          auVar96 = auVar80._0_16_;
        }
        else {
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar46._0_8_,2);
          auVar97 = vpaddq_avx(auVar97,auVar142);
          if ((uVar36 & 8) != 0) goto LAB_140c5441c;
LAB_140c51db5:
          auVar80._16_16_ = auVar97;
          auVar80._0_16_ = auVar96;
          if ((uVar36 & 0x10) == 0) goto LAB_140c51dce;
LAB_140c54440:
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar80._0_8_,4);
          if ((uVar36 & 0x20) != 0) goto LAB_140c54454;
LAB_140c51dd8:
          if ((uVar36 & 0x40) == 0) goto LAB_140c51de2;
LAB_140c54469:
          auVar96 = auVar80._0_16_;
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar80._16_8_,6);
        }
        if (cVar32 < '\0') {
          auVar96 = auVar80._16_16_;
          auVar44 = vpinsrw_avx(auVar44,(uint)*auVar80._24_8_,7);
        }
        auVar96 = vpcmpeqd_avx(auVar96,auVar96);
        auVar46 = vpsubd_avx(auVar47._16_16_,auVar96);
        auVar96 = vpsubd_avx(auVar47._0_16_,auVar96);
        auVar60._16_16_ = auVar46;
        auVar60._0_16_ = auVar96;
        auVar48 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar60,auVar150);
        auVar96 = vpcmpgtd_avx(ZEXT416(uVar43),auVar48._16_16_);
        auVar46 = vpcmpgtd_avx(auVar74,auVar48._0_16_);
        auVar61._16_16_ = auVar96;
        auVar61._0_16_ = auVar46;
        auVar209 = auVar150 & ~auVar61;
        if ((((((((SUB321(auVar209 >> 0x1f,0) & 1) != 0 || (SUB321(auVar209 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar209 >> 0x5f,0) & 1) != 0) || SUB321(auVar209 >> 0x7f,0) != '\0') ||
              (SUB321(auVar209 >> 0x9f,0) & 1) != 0) || SUB321(auVar209 >> 0xbf,0) != '\0') ||
            (SUB321(auVar209 >> 0xdf,0) & 1) != 0) || auVar209[0x1f] < '\0') {
          auVar62._0_4_ = ~auVar46._0_4_ & auVar150._0_4_;
          auVar62._4_4_ = ~auVar46._4_4_ & auVar150._4_4_;
          auVar62._8_4_ = ~auVar46._8_4_ & auVar150._8_4_;
          auVar62._12_4_ = ~auVar46._12_4_ & auVar150._12_4_;
          auVar62._16_4_ = ~auVar96._0_4_ & auVar150._16_4_;
          auVar62._20_4_ = ~auVar96._4_4_ & auVar150._20_4_;
          auVar62._24_4_ = ~auVar96._8_4_ & auVar150._24_4_;
          auVar62._28_4_ = ~auVar96._12_4_ & auVar150._28_4_;
          auVar48 = vblendvps_avx(auVar48,auVar197,auVar62);
        }
        auVar17._4_4_ = auVar48._20_4_ * 2;
        auVar17._0_4_ = auVar48._16_4_ * 2;
        auVar17._8_4_ = auVar48._24_4_ * 2;
        auVar17._12_4_ = auVar48._28_4_ * 2;
        auVar18._4_4_ = auVar48._4_4_ * 2;
        auVar18._0_4_ = auVar48._0_4_ * 2;
        auVar18._8_4_ = auVar48._8_4_ * 2;
        auVar18._12_4_ = auVar48._12_4_ * 2;
        auVar46 = vpmovsxdq_avx(auVar18);
        auVar96 = vpshufd_avx(auVar18,0xee);
        auVar96 = vpmovsxdq_avx(auVar96);
        auVar96 = vpaddq_avx(auVar151,auVar96);
        auVar46 = vpaddq_avx(auVar190,auVar46);
        auVar97 = auVar96;
        if ((uVar36 & 1) != 0) {
          auVar97 = ZEXT216(*auVar46._0_8_);
        }
        auVar210 = vpmovsxdq_avx(auVar17);
        auVar151 = vpshufd_avx(auVar17,0xee);
        if ((uVar36 & 2) != 0) {
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar46._8_8_,1);
        }
        auVar151 = vpmovsxdq_avx(auVar151);
        auVar46 = vpaddq_avx(auVar210,auVar117);
        if ((uVar36 & 4) == 0) {
          auVar210 = vpaddq_avx(auVar151,auVar142);
          if ((uVar36 & 8) == 0) goto LAB_140c51ecd;
LAB_140c544b1:
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar96._8_8_,3);
          auVar81._16_16_ = auVar210;
          auVar81._0_16_ = auVar46;
          if ((uVar36 & 0x10) != 0) goto LAB_140c544cc;
LAB_140c51edd:
          if ((uVar36 & 0x20) == 0) goto LAB_140c51ee7;
LAB_140c544e0:
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar81._8_8_,5);
          auVar96 = vpmovzxwd_avx(auVar44);
        }
        else {
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar96._0_8_,2);
          auVar210 = vpaddq_avx(auVar151,auVar142);
          if ((uVar36 & 8) != 0) goto LAB_140c544b1;
LAB_140c51ecd:
          auVar81._16_16_ = auVar210;
          auVar81._0_16_ = auVar46;
          if ((uVar36 & 0x10) == 0) goto LAB_140c51edd;
LAB_140c544cc:
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar81._0_8_,4);
          if ((uVar36 & 0x20) != 0) goto LAB_140c544e0;
LAB_140c51ee7:
          auVar96 = vpmovzxwd_avx(auVar44);
        }
        if ((uVar36 & 0x40) != 0) {
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar81._16_8_,6);
        }
        auVar46 = vpunpckhwd_avx(auVar44,(undefined1  [16])0x0);
        if (cVar32 < '\0') {
          auVar97 = vpinsrw_avx(auVar97,(uint)*auVar81._24_8_,7);
        }
        auVar82._16_16_ = auVar46;
        auVar82._0_16_ = auVar96;
        auVar46 = vpunpckhwd_avx(auVar97,(undefined1  [16])0x0);
        auVar96 = vpmovzxwd_avx(auVar97);
        auVar209 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      auVar101 = ZEXT1632((undefined1  [16])0x0);
      if (param_8 != '\x01') {
        auVar101 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar97 = vpsubd_avx(auVar96,auVar82._0_16_);
        auVar96 = vpsubd_avx(auVar46,auVar82._16_16_);
        auVar118._4_4_ = __real_00000001;
        auVar118._0_4_ = __real_00000001;
        auVar118._8_4_ = __real_00000001;
        auVar118._12_4_ = __real_00000001;
        auVar96 = vpmaxsd_avx(auVar96,auVar118);
        auVar46 = vpmaxsd_avx(auVar97,auVar118);
        auVar69._16_16_ = auVar96;
        auVar69._0_16_ = auVar46;
        auVar96 = vpermilps_avx(ZEXT416((uint)param_7),0);
        auVar110._16_16_ = auVar96;
        auVar110._0_16_ = auVar96;
        auVar209 = vcvtdq2ps_avx(auVar82);
        auVar49 = vsubps_avx(auVar110,auVar209);
        auVar209 = vcvtdq2ps_avx(auVar69);
        auVar209 = vdivps_avx(auVar49,auVar209);
      }
      _local_800 = vblendvps_avx(auVar101,auVar209,local_640);
      goto LAB_140c52967;
    }
    auVar47 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar197,auVar150);
    auVar48 = auVar47;
  }
  _local_800 = ZEXT1632(ZEXT816(0));
LAB_140c52967:
  if (param_9 < 7) {
    auVar46 = vpmulld_avx(auVar47._0_16_,auVar25);
    auVar97 = vpmulld_avx(auVar47._16_16_,auVar25);
    auVar96 = vpmovsxdq_avx(auVar97);
    auVar97 = vpshufd_avx(auVar97,0xee);
    vpmovsxdq_avx(auVar97);
    vpmovsxdq_avx(auVar46);
    auVar46 = vpshufd_avx(auVar46,0xee);
    auVar46 = vpmovsxdq_avx(auVar46);
                    /* WARNING: Could not recover jumptable at 0x000140c52a0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6ca48 + *(int *)(&DAT_151c6ca48 + uVar39 * 4)))
              (auVar46._0_8_,&DAT_151c6ca48 + *(int *)(&DAT_151c6ca48 + uVar39 * 4),auVar96._0_8_,
               auVar96._0_8_);
    return;
  }
  auVar96 = vpcmpgtd_avx(auVar95,auVar72);
  auVar46 = vpcmpgtd_avx(auVar95,auVar189);
  auVar70._16_16_ = auVar96;
  auVar70._0_16_ = auVar46;
  local_5e0 = vmaskmovps_avx(auVar70,ZEXT1632((undefined1  [16])0x0));
  local_5c0 = vmaskmovps_avx(auVar70,ZEXT1632((undefined1  [16])0x0));
  local_5a0._0_32_ = vmaskmovps_avx(auVar70,ZEXT1632((undefined1  [16])0x0));
  auVar96 = vpcmpeqd_avx(auVar47._16_16_,auVar48._16_16_);
  auVar46 = vpcmpeqd_avx(auVar47._0_16_,auVar48._0_16_);
  auVar85._16_16_ = auVar96;
  auVar85._0_16_ = auVar46;
  auVar97 = vpcmpgtd_avx(auVar95,auVar72);
  auVar44 = vpcmpgtd_avx(auVar95,auVar189);
  auVar111._16_16_ = auVar97;
  auVar111._0_16_ = auVar44;
  auVar111 = auVar111 & ~auVar85;
  if ((((((((SUB321(auVar111 >> 0x1f,0) & 1) != 0 || (SUB321(auVar111 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar111 >> 0x5f,0) & 1) != 0) || SUB321(auVar111 >> 0x7f,0) != '\0') ||
        (SUB321(auVar111 >> 0x9f,0) & 1) != 0) || SUB321(auVar111 >> 0xbf,0) != '\0') ||
      (SUB321(auVar111 >> 0xdf,0) & 1) != 0) || auVar111[0x1f] < '\0') {
    auVar86._0_4_ = ~auVar46._0_4_ & uVar178;
    auVar86._4_4_ = ~auVar46._4_4_ & uVar179;
    auVar86._8_4_ = ~auVar46._8_4_ & uVar180;
    auVar86._12_4_ = ~auVar46._12_4_ & uVar181;
    auVar86._16_4_ = ~auVar96._0_4_ & uVar183;
    auVar86._20_4_ = ~auVar96._4_4_ & auVar30._4_4_;
    auVar86._24_4_ = ~auVar96._8_4_ & auVar30._8_4_;
    auVar86._28_4_ = ~auVar96._12_4_ & auVar30._12_4_;
    if (param_9 < 7) {
      auVar46 = vpmulld_avx(auVar48._0_16_,auVar25);
      auVar96 = vpmulld_avx(auVar48._16_16_,auVar25);
      vpmovsxdq_avx(auVar96);
      auVar96 = vpshufd_avx(auVar96,0xee);
      vpmovsxdq_avx(auVar96);
      auVar96 = vpmovsxdq_avx(auVar46);
      auVar46 = vpshufd_avx(auVar46,0xee);
      auVar46 = vpmovsxdq_avx(auVar46);
                    /* WARNING: Could not recover jumptable at 0x000140c53686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6ca64 + *(int *)(&DAT_151c6ca64 + uVar39 * 4)))
                (auVar96._0_8_,&DAT_151c6ca64 + *(int *)(&DAT_151c6ca64 + uVar39 * 4),param_5,
                 auVar46._0_8_);
      return;
    }
    auVar47 = vmaskmovps_avx(auVar86,ZEXT1632((undefined1  [16])0x0));
    auVar48 = vmaskmovps_avx(auVar86,ZEXT1632((undefined1  [16])0x0));
    auVar209 = vmaskmovps_avx(auVar86,ZEXT1632((undefined1  [16])0x0));
    auVar47 = vsubps_avx(auVar47,local_5e0);
    auVar48 = vsubps_avx(auVar48,local_5c0);
    auVar209 = vsubps_avx(auVar209,local_5a0._0_32_);
    auVar71._0_4_ = local_5e0._0_4_ + (float)local_800._0_4_ * auVar47._0_4_;
    auVar71._4_4_ = local_5e0._4_4_ + (float)local_800._4_4_ * auVar47._4_4_;
    auVar71._8_4_ = local_5e0._8_4_ + fStack_7f8 * auVar47._8_4_;
    auVar71._12_4_ = local_5e0._12_4_ + fStack_7f4 * auVar47._12_4_;
    auVar71._16_4_ = local_5e0._16_4_ + fStack_7f0 * auVar47._16_4_;
    auVar71._20_4_ = local_5e0._20_4_ + fStack_7ec * auVar47._20_4_;
    auVar71._24_4_ = local_5e0._24_4_ + fStack_7e8 * auVar47._24_4_;
    auVar71._28_4_ = local_5e0._28_4_ + fStack_7e4 * auVar47._28_4_;
    auVar112._0_4_ = local_5c0._0_4_ + (float)local_800._0_4_ * auVar48._0_4_;
    auVar112._4_4_ = local_5c0._4_4_ + (float)local_800._4_4_ * auVar48._4_4_;
    auVar112._8_4_ = local_5c0._8_4_ + fStack_7f8 * auVar48._8_4_;
    auVar112._12_4_ = local_5c0._12_4_ + fStack_7f4 * auVar48._12_4_;
    auVar112._16_4_ = local_5c0._16_4_ + fStack_7f0 * auVar48._16_4_;
    auVar112._20_4_ = local_5c0._20_4_ + fStack_7ec * auVar48._20_4_;
    auVar112._24_4_ = local_5c0._24_4_ + fStack_7e8 * auVar48._24_4_;
    auVar112._28_4_ = local_5c0._28_4_ + fStack_7e4 * auVar48._28_4_;
    auVar135._0_4_ = local_5a0._0_4_ + (float)local_800._0_4_ * auVar209._0_4_;
    auVar135._4_4_ = local_5a0._4_4_ + (float)local_800._4_4_ * auVar209._4_4_;
    auVar135._8_4_ = local_5a0._8_4_ + fStack_7f8 * auVar209._8_4_;
    auVar135._12_4_ = local_5a0._12_4_ + fStack_7f4 * auVar209._12_4_;
    auVar135._16_4_ = local_5a0._16_4_ + fStack_7f0 * auVar209._16_4_;
    auVar135._20_4_ = local_5a0._20_4_ + fStack_7ec * auVar209._20_4_;
    auVar135._24_4_ = local_5a0._24_4_ + fStack_7e8 * auVar209._24_4_;
    auVar135._28_4_ = local_5a0._28_4_ + fStack_7e4 * auVar209._28_4_;
    local_5e0 = vmaskmovps_avx(auVar86,auVar71);
    local_5c0 = vmaskmovps_avx(auVar86,auVar112);
    local_5a0._0_32_ = vmaskmovps_avx(auVar86,auVar135);
  }
  local_560 = (ulonglong)uVar37;
  local_7b0 = (ulonglong)*(uint *)((ulonglong)(uVar183 & _UNK_150b519d0) + lVar34);
  auVar194._16_16_ = local_5c0._0_16_;
  auVar194._0_16_ = local_5e0._0_16_;
  auVar101 = vperm2f128_avx(local_5e0,local_5c0,0x31);
  auVar49 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar209 = vperm2f128_avx(auVar49,local_5a0._0_32_,0x21);
  auVar47 = vshufps_avx(auVar209,auVar209,0x14);
  auVar47 = vblendps_avx(ZEXT1632(CONCAT88(local_5a0._0_8_,local_5a0._0_8_)),auVar47,0x48);
  auVar208._16_16_ = local_5e0._0_16_;
  auVar208._0_16_ = local_5c0._0_16_;
  auVar48 = vshufps_avx(auVar208,auVar208,0xe1);
  auVar48 = vblendps_avx(auVar194,auVar48,0x12);
  local_200 = vblendps_avx(auVar48,auVar47,0xcc);
  auVar47 = vshufps_avx(auVar209,auVar209,0xb4);
  auVar47 = vblendps_avx(ZEXT1632(local_5a0._0_16_),auVar47,0x48);
  auVar209 = vshufps_avx(auVar208,auVar208,0xeb);
  auVar48 = vshufpd_avx(auVar194,auVar194,5);
  auVar48 = vblendps_avx(auVar48,auVar209,0x12);
  local_1e0 = vblendps_avx(auVar48,auVar47,0xcc);
  auVar47 = vunpcklps_avx(local_5a0._0_32_,auVar49);
  auVar47 = vblendps_avx(ZEXT1632(CONCAT88(local_5a0._16_8_,local_5a0._16_8_)),auVar47,0x48);
  auVar209 = vperm2f128_avx(local_5c0,local_5e0,0x31);
  auVar48 = vshufps_avx(auVar209,auVar209,0xe1);
  auVar48 = vblendps_avx(auVar101,auVar48,0x12);
  local_1c0 = vblendps_avx(auVar48,auVar47,0xcc);
  auVar47 = vunpckhps_avx(local_5a0._0_32_,auVar49);
  auVar47 = vblendps_avx(ZEXT1632(local_5a0._16_16_),auVar47,0x48);
  auVar209 = vshufps_avx(auVar209,auVar209,0xeb);
  auVar48 = vshufpd_avx(auVar101,auVar101,5);
  auVar48 = vblendps_avx(auVar48,auVar209,0x12);
  local_1a0 = vblendps_avx(auVar48,auVar47,0xcc);
  auVar96 = vpcmpgtd_avx(auVar95,auVar189);
  auVar87._16_16_ = auVar97;
  auVar87._0_16_ = auVar96;
  uVar37 = vmovmskps_avx(auVar87);
  uVar39 = (ulonglong)uVar37;
  do {
    if (uVar39 == 0) {
      uVar37 = 0x40;
    }
    else {
      uVar37 = 0;
      for (uVar38 = uVar39; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x8000000000000000) {
        uVar37 = uVar37 + 1;
      }
    }
    bVar2 = (byte)uVar37 & 0x3f;
    local_240[0] = local_560;
    local_240[1] = 0;
    local_240[2] = local_7b0;
    uStack_228 = 0;
    auVar47 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar37 << 4)));
    lVar34 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar37 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + 0x40 + lVar34) = auVar47._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x50 + lVar34) = auVar47._16_16_;
    uVar39 = uVar39 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
  } while (uVar39 != 0);
  return;
}


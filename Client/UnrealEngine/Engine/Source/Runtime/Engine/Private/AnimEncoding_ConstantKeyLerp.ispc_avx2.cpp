// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GetConstantKeyLerpPoseRotations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_avx2 @ 140ad8f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseRotations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_avx2
               (longlong param_1)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  float fVar17;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  float fVar31;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar42;
  float fVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar34 [32];
  float fVar44;
  float fVar48;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar49;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar50 [32];
  float fVar60;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 in_ZMM5 [64];
  float fVar63;
  float fVar74;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 in_ZMM6 [64];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  uint uVar80;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  uint uVar91;
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar95 [64];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  float fVar98;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar99 [32];
  float fVar109;
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 in_ZMM13 [64];
  undefined1 auVar112 [16];
  undefined1 auVar113 [32];
  undefined1 in_ZMM15 [64];
  float in_stack_00000030;
  char in_stack_00000038;
  uint in_stack_00000040;
  uint in_stack_00000048;
  undefined1 local_5a0 [32];
  undefined1 local_580 [32];
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
  undefined1 local_460 [32];
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
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  undefined1 local_3c0 [32];
  undefined1 local_380 [8];
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  undefined1 local_360 [8];
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  undefined1 local_340 [8];
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined1 local_320 [8];
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
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
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_e8 [16];
  undefined1 local_a8 [16];
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  
  auVar35 = ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  auVar110 = in_ZMM10._0_32_;
  local_58 = in_ZMM15._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_e8 = in_ZMM6._0_16_;
  lVar13 = (longlong)(int)in_stack_00000040;
  iVar12 = *(int *)(&DAT_151c6b700 + lVar13 * 4) * *(int *)(&DAT_151c6b6e0 + lVar13 * 4);
  iVar14 = 0;
  uVar6 = 0x18;
  if (lVar13 != 3) {
    uVar6 = 0;
  }
  uVar8 = in_stack_00000048 + 7;
  if (-1 < (int)in_stack_00000048) {
    uVar8 = in_stack_00000048;
  }
  uVar9 = (ulonglong)in_stack_00000040;
  if (0 < (int)(uVar8 & 0xfffffff8)) {
    auVar15._4_4_ = uVar6;
    auVar15._0_4_ = uVar6;
    auVar15._8_4_ = uVar6;
    auVar15._12_4_ = uVar6;
    vpmovzxdq_avx2(auVar15);
    auVar38._4_4_ = __real_00000008;
    auVar38._0_4_ = __real_00000008;
    auVar38._8_4_ = __real_00000008;
    auVar38._12_4_ = __real_00000008;
    auVar38._16_4_ = __real_00000008;
    auVar38._20_4_ = __real_00000008;
    auVar38._24_4_ = __real_00000008;
    auVar38._28_4_ = __real_00000008;
    auVar110 = vpcmpeqd_avx2(auVar110,auVar110);
    auVar95 = ZEXT3264(auVar110);
    auVar112._0_12_ = ZEXT812(0);
    auVar112._12_4_ = 0;
    local_5a0._4_4_ = __real_0000000c;
    local_5a0._0_4_ = __real_0000000c;
    local_5a0._8_4_ = __real_0000000c;
    local_5a0._12_4_ = __real_0000000c;
    local_5a0._16_4_ = __real_0000000c;
    local_5a0._20_4_ = __real_0000000c;
    local_5a0._24_4_ = __real_0000000c;
    local_5a0._28_4_ = __real_0000000c;
    local_3c0._4_4_ = __real_00000001;
    local_3c0._0_4_ = __real_00000001;
    local_3c0._8_4_ = __real_00000001;
    local_3c0._12_4_ = __real_00000001;
    local_3c0._16_4_ = __real_00000001;
    local_3c0._20_4_ = __real_00000001;
    local_3c0._24_4_ = __real_00000001;
    local_3c0._28_4_ = __real_00000001;
    do {
      auVar110 = in_ZMM13._0_32_;
      auVar18._4_4_ = iVar14;
      auVar18._0_4_ = iVar14;
      auVar18._8_4_ = iVar14;
      auVar18._12_4_ = iVar14;
      auVar18._16_4_ = iVar14;
      auVar18._20_4_ = iVar14;
      auVar18._24_4_ = iVar14;
      auVar18._28_4_ = iVar14;
      auVar19 = vpslld_avx2(auVar18,3);
      auVar18 = vpor_avx2(auVar19,auVar35);
      vpmovzxdq_avx2(auVar18._16_16_);
      auVar18 = vpmovzxdq_avx2(auVar18._0_16_);
      auVar15 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
      auVar33 = vpgatherqd((undefined1  [16])0x0,auVar15);
      auVar15 = vpcmpeqd_avx(auVar18._0_16_,auVar18._0_16_);
      auVar2 = vpgatherqd((undefined1  [16])0x0,auVar15);
      auVar18 = vpor_avx2(auVar19,
                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004);
      vpmovzxdq_avx2(auVar18._16_16_);
      vpmovzxdq_avx2(auVar18._0_16_);
      auVar15 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
      auVar3 = vpgatherqd((undefined1  [16])0x0,auVar15);
      auVar15 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
      auVar15 = vpgatherqd((undefined1  [16])0x0,auVar15);
      auVar19._16_16_ = ZEXT116(1) * auVar15;
      auVar19._0_16_ = ZEXT116(0) * auVar15 | ZEXT116(1) * auVar3;
      auVar20 = vpslld_avx2(auVar19,4);
      auVar19 = vpor_avx2(auVar38,auVar20);
      auVar18 = vpcmpeqd_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                              SUB6432(ZEXT1664((undefined1  [16])0x0),0));
      auVar50 = vpgatherdd(ZEXT1632((undefined1  [16])0x0),auVar18);
      vpor_avx2(auVar20,local_5a0);
      auVar18 = vpcmpeqd_avx2(auVar19,auVar19);
      auVar19 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
      auVar18 = vpcmpeqd_avx2(auVar19,local_3c0);
      auVar20 = ZEXT1632(auVar112);
      if ((((((((SUB321(auVar18 >> 0x1f,0) & 1) != 0 || (SUB321(auVar18 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar18 >> 0x5f,0) & 1) != 0) || SUB321(auVar18 >> 0x7f,0) != '\0') ||
            (SUB321(auVar18 >> 0x9f,0) & 1) != 0) || SUB321(auVar18 >> 0xbf,0) != '\0') ||
          (SUB321(auVar18 >> 0xdf,0) & 1) != 0) || auVar18[0x1f] < '\0') {
        auVar34 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
        auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
        auVar92 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
        auVar100._0_4_ =
             -(auVar92._0_4_ * auVar92._0_4_) +
             -(auVar81._0_4_ * auVar81._0_4_) + -(auVar34._0_4_ * auVar34._0_4_) + __real_3f800000;
        auVar100._4_4_ =
             -(auVar92._4_4_ * auVar92._4_4_) +
             -(auVar81._4_4_ * auVar81._4_4_) + -(auVar34._4_4_ * auVar34._4_4_) + __real_3f800000;
        auVar100._8_4_ =
             -(auVar92._8_4_ * auVar92._8_4_) +
             -(auVar81._8_4_ * auVar81._8_4_) + -(auVar34._8_4_ * auVar34._8_4_) + __real_3f800000;
        auVar100._12_4_ =
             -(auVar92._12_4_ * auVar92._12_4_) +
             -(auVar81._12_4_ * auVar81._12_4_) +
             -(auVar34._12_4_ * auVar34._12_4_) + __real_3f800000;
        auVar100._16_4_ =
             -(auVar92._16_4_ * auVar92._16_4_) +
             -(auVar81._16_4_ * auVar81._16_4_) +
             -(auVar34._16_4_ * auVar34._16_4_) + __real_3f800000;
        auVar100._20_4_ =
             -(auVar92._20_4_ * auVar92._20_4_) +
             -(auVar81._20_4_ * auVar81._20_4_) +
             -(auVar34._20_4_ * auVar34._20_4_) + __real_3f800000;
        auVar100._24_4_ =
             -(auVar92._24_4_ * auVar92._24_4_) +
             -(auVar81._24_4_ * auVar81._24_4_) +
             -(auVar34._24_4_ * auVar34._24_4_) + __real_3f800000;
        auVar100._28_4_ =
             -(auVar92._28_4_ * auVar92._28_4_) +
             -(auVar81._28_4_ * auVar81._28_4_) +
             -(auVar34._28_4_ * auVar34._28_4_) + __real_3f800000;
        auVar96 = vcmpps_avx(auVar20,auVar100,1);
        auVar100 = vsqrtps_avx(auVar100);
        auVar21._0_4_ = auVar96._0_4_ & auVar100._0_4_;
        auVar21._4_4_ = auVar96._4_4_ & auVar100._4_4_;
        auVar21._8_4_ = auVar96._8_4_ & auVar100._8_4_;
        auVar21._12_4_ = auVar96._12_4_ & auVar100._12_4_;
        auVar21._16_4_ = auVar96._16_4_ & auVar100._16_4_;
        auVar21._20_4_ = auVar96._20_4_ & auVar100._20_4_;
        auVar21._24_4_ = auVar96._24_4_ & auVar100._24_4_;
        auVar21._28_4_ = auVar96._28_4_ & auVar100._28_4_;
        _local_380 = vmaskmovps_avx(auVar18,auVar34);
        _local_360 = vmaskmovps_avx(auVar18,auVar81);
        _local_340 = vmaskmovps_avx(auVar18,auVar92);
        _local_320 = vmaskmovps_avx(auVar18,auVar21);
      }
      uVar7 = vmovmskps_avx(auVar18);
      bVar5 = (byte)uVar7 ^ 0xff;
      if (bVar5 != 0) {
        auVar96._4_4_ = __real_00000002;
        auVar96._0_4_ = __real_00000002;
        auVar96._8_4_ = __real_00000002;
        auVar96._12_4_ = __real_00000002;
        auVar96._16_4_ = __real_00000002;
        auVar96._20_4_ = __real_00000002;
        auVar96._24_4_ = __real_00000002;
        auVar96._28_4_ = __real_00000002;
        auVar96 = vpcmpgtd_avx2(auVar96,auVar19);
        auVar96 = auVar18 ^ auVar96;
        iVar10 = vmovmskps_avx(auVar96);
        auVar100 = auVar95._0_32_;
        if (iVar10 == 0) {
          auVar96 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
LAB_140ad928d:
          auVar96 = auVar100 ^ auVar96;
          if (in_stack_00000030 <= 0.0) {
            auVar21 = vpandn_avx2(auVar18,auVar96);
            auVar19 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
            local_580 = vblendvps_avx(local_580,auVar19,auVar21);
            auVar110 = vblendvps_avx(auVar110,auVar19,auVar21);
          }
          else {
            auVar34._0_4_ = auVar95._0_4_ + auVar19._0_4_;
            auVar34._4_4_ = auVar95._4_4_ + auVar19._4_4_;
            auVar34._8_4_ = auVar95._8_4_ + auVar19._8_4_;
            auVar34._12_4_ = auVar95._12_4_ + auVar19._12_4_;
            auVar34._16_4_ = auVar95._16_4_ + auVar19._16_4_;
            auVar34._20_4_ = auVar95._20_4_ + auVar19._20_4_;
            auVar34._24_4_ = auVar95._24_4_ + auVar19._24_4_;
            auVar34._28_4_ = auVar95._28_4_ + auVar19._28_4_;
            if (__real_3f800000 <= in_stack_00000030) {
              auVar19 = vpandn_avx2(auVar18,auVar96);
              local_580 = vblendvps_avx(local_580,auVar34,auVar19);
              auVar110 = vblendvps_avx(auVar110,auVar34,auVar19);
              auVar19 = SUB6432(ZEXT864(0),0) << 0x20;
            }
            else {
              auVar19 = vcvtdq2ps_avx(auVar34);
              auVar81._0_4_ = auVar19._0_4_ * in_stack_00000030;
              auVar81._4_4_ = auVar19._4_4_ * in_stack_00000030;
              auVar81._8_4_ = auVar19._8_4_ * in_stack_00000030;
              auVar81._12_4_ = auVar19._12_4_ * in_stack_00000030;
              auVar81._16_4_ = auVar19._16_4_ * in_stack_00000030;
              auVar81._20_4_ = auVar19._20_4_ * in_stack_00000030;
              auVar81._24_4_ = auVar19._24_4_ * in_stack_00000030;
              auVar81._28_4_ = auVar19._28_4_ * in_stack_00000030;
              auVar21 = vroundps_avx(auVar81,9);
              auVar19 = SUB6432(ZEXT864(0),0) << 0x20;
              if (in_stack_00000038 != '\x01') {
                auVar19 = vsubps_avx(auVar81,auVar21);
              }
              auVar81 = vpandn_avx2(auVar18,auVar96);
              auVar92._0_4_ = (int)auVar21._0_4_;
              auVar92._4_4_ = (int)auVar21._4_4_;
              auVar92._8_4_ = (int)auVar21._8_4_;
              auVar92._12_4_ = (int)auVar21._12_4_;
              auVar92._16_4_ = (int)auVar21._16_4_;
              auVar92._20_4_ = (int)auVar21._20_4_;
              auVar92._24_4_ = (int)auVar21._24_4_;
              auVar92._28_4_ = (int)auVar21._28_4_;
              auVar21 = vpminsd_avx2(auVar92,auVar34);
              local_580 = vblendvps_avx(local_580,auVar21,auVar81);
              auVar21 = vpsubd_avx2(local_580,auVar100);
              auVar21 = vpminsd_avx2(auVar21,auVar34);
              auVar110 = vblendvps_avx(auVar110,auVar21,auVar81);
            }
          }
          local_460 = vblendvps_avx(local_460,auVar19,auVar96);
        }
        else {
          auVar15 = vpackssdw_avx(auVar96._0_16_,auVar96._16_16_);
          auVar96 = vpmovsxwd_avx2(auVar15);
          local_580 = vpandn_avx2(auVar96,local_580);
          auVar110 = vpandn_avx2(auVar96,auVar110);
          auVar21 = vpcmpgtd_avx2(auVar19,local_3c0);
          local_460 = vpand_avx2(auVar21,local_460);
          if (bVar5 != (byte)iVar10) goto LAB_140ad928d;
        }
        vpmovsxdq_avx2(auVar50._16_16_);
        vpmovsxdq_avx2(auVar50._0_16_);
        auVar18 = auVar18 ^ auVar100;
        if (in_stack_00000040 < 6) {
          auVar110._4_4_ = iVar12;
          auVar110._0_4_ = iVar12;
          auVar110._8_4_ = iVar12;
          auVar110._12_4_ = iVar12;
          auVar110._16_4_ = iVar12;
          auVar110._20_4_ = iVar12;
          auVar110._24_4_ = iVar12;
          auVar110._28_4_ = iVar12;
          auVar110 = vpmulld_avx2(local_580,auVar110);
          vpmovsxdq_avx2(auVar110._16_16_);
          vpmovsxdq_avx2(auVar110._0_16_);
                    /* WARNING: Could not recover jumptable at 0x000140ad93b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6b460 + *(int *)(&DAT_151c6b460 + uVar9 * 4)))
                    (&DAT_151c6b460 + *(int *)(&DAT_151c6b460 + uVar9 * 4),auVar110._0_8_,
                     auVar110._16_8_);
          return;
        }
        _local_380 = vmaskmovps_avx(auVar18,auVar20);
        auVar96 = ZEXT1632(auVar112);
        _local_360 = vmaskmovps_avx(auVar18,auVar96);
        _local_340 = vmaskmovps_avx(auVar18,auVar96);
        auVar50._4_4_ = __real_3f800000;
        auVar50._0_4_ = __real_3f800000;
        auVar50._8_4_ = __real_3f800000;
        auVar50._12_4_ = __real_3f800000;
        auVar50._16_4_ = __real_3f800000;
        auVar50._20_4_ = __real_3f800000;
        auVar50._24_4_ = __real_3f800000;
        auVar50._28_4_ = __real_3f800000;
        _local_320 = vmaskmovps_avx(auVar18,auVar50);
        auVar15 = vpackssdw_avx(auVar18._0_16_,auVar18._16_16_);
        in_ZMM13 = ZEXT3264(auVar110);
        auVar19 = vpcmpeqd_avx2(local_580,auVar110);
        auVar18 = vpmovsxwd_avx2(auVar15);
        auVar18 = auVar18 & ~auVar19;
        if ((((((((SUB321(auVar18 >> 0x1f,0) & 1) != 0 || (SUB321(auVar18 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar18 >> 0x5f,0) & 1) != 0) || SUB321(auVar18 >> 0x7f,0) != '\0') ||
              (SUB321(auVar18 >> 0x9f,0) & 1) != 0) || SUB321(auVar18 >> 0xbf,0) != '\0') ||
            (SUB321(auVar18 >> 0xdf,0) & 1) != 0) || auVar18[0x1f] < '\0') {
          auVar3 = vpackssdw_avx(SUB3216(auVar100 ^ auVar19,0),SUB3216(auVar100 ^ auVar19,0x10));
          auVar15 = vpand_avx(auVar15,auVar3);
          auVar18 = vpmovsxwd_avx2(auVar15);
          if (in_stack_00000040 < 6) {
            auVar35._4_4_ = iVar12;
            auVar35._0_4_ = iVar12;
            auVar35._8_4_ = iVar12;
            auVar35._12_4_ = iVar12;
            auVar35._16_4_ = iVar12;
            auVar35._20_4_ = iVar12;
            auVar35._24_4_ = iVar12;
            auVar35._28_4_ = iVar12;
            auVar110 = vpmulld_avx2(auVar110,auVar35);
            vpmovsxdq_avx2(auVar110._16_16_);
            vpmovsxdq_avx2(auVar110._0_16_);
                    /* WARNING: Could not recover jumptable at 0x000140ad9cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_151c6b478 + *(int *)(&DAT_151c6b478 + uVar9 * 4)))
                      (&DAT_151c6b478 + *(int *)(&DAT_151c6b478 + uVar9 * 4),auVar110._0_8_,
                       auVar110._16_8_);
            return;
          }
          auVar19 = vmaskmovps_avx(auVar18,auVar96);
          auVar50 = vmaskmovps_avx(auVar18,auVar96);
          auVar96 = vmaskmovps_avx(auVar18,auVar20);
          auVar23._4_4_ = __real_3f800000;
          auVar23._0_4_ = __real_3f800000;
          auVar23._8_4_ = __real_3f800000;
          auVar23._12_4_ = __real_3f800000;
          auVar23._16_4_ = __real_3f800000;
          auVar23._20_4_ = __real_3f800000;
          auVar23._24_4_ = __real_3f800000;
          auVar23._28_4_ = __real_3f800000;
          auVar100 = vmaskmovps_avx(auVar18,auVar23);
          local_2e0 = auVar19._0_4_;
          fStack_2dc = auVar19._4_4_;
          fStack_2d8 = auVar19._8_4_;
          fStack_2d4 = auVar19._12_4_;
          fStack_2d0 = auVar19._16_4_;
          fStack_2cc = auVar19._20_4_;
          fStack_2c8 = auVar19._24_4_;
          fStack_2c4 = auVar19._28_4_;
          local_2c0 = auVar50._0_4_;
          fStack_2bc = auVar50._4_4_;
          fStack_2b8 = auVar50._8_4_;
          fStack_2b4 = auVar50._12_4_;
          fStack_2b0 = auVar50._16_4_;
          fStack_2ac = auVar50._20_4_;
          fStack_2a8 = auVar50._24_4_;
          fStack_2a4 = auVar50._28_4_;
          local_2a0 = auVar96._0_4_;
          fStack_29c = auVar96._4_4_;
          fStack_298 = auVar96._8_4_;
          fStack_294 = auVar96._12_4_;
          fStack_290 = auVar96._16_4_;
          fStack_28c = auVar96._20_4_;
          fStack_288 = auVar96._24_4_;
          fStack_284 = auVar96._28_4_;
          local_280 = auVar100._0_4_;
          fStack_27c = auVar100._4_4_;
          fStack_278 = auVar100._8_4_;
          fStack_274 = auVar100._12_4_;
          fStack_270 = auVar100._16_4_;
          fStack_26c = auVar100._20_4_;
          fStack_268 = auVar100._24_4_;
          fStack_264 = auVar100._28_4_;
          auVar99._0_4_ =
               (float)local_380._0_4_ * local_2e0 + local_2a0 * (float)local_340._0_4_ +
               (float)local_360._0_4_ * local_2c0 + local_280 * (float)local_320._0_4_;
          auVar99._4_4_ =
               (float)local_380._4_4_ * fStack_2dc + fStack_29c * (float)local_340._4_4_ +
               (float)local_360._4_4_ * fStack_2bc + fStack_27c * (float)local_320._4_4_;
          auVar99._8_4_ =
               fStack_378 * fStack_2d8 + fStack_298 * fStack_338 +
               fStack_358 * fStack_2b8 + fStack_278 * fStack_318;
          auVar99._12_4_ =
               fStack_374 * fStack_2d4 + fStack_294 * fStack_334 +
               fStack_354 * fStack_2b4 + fStack_274 * fStack_314;
          auVar99._16_4_ =
               fStack_370 * fStack_2d0 + fStack_290 * fStack_330 +
               fStack_350 * fStack_2b0 + fStack_270 * fStack_310;
          auVar99._20_4_ =
               fStack_36c * fStack_2cc + fStack_28c * fStack_32c +
               fStack_34c * fStack_2ac + fStack_26c * fStack_30c;
          auVar99._24_4_ =
               fStack_368 * fStack_2c8 + fStack_288 * fStack_328 +
               fStack_348 * fStack_2a8 + fStack_268 * fStack_308;
          auVar99._28_4_ =
               fStack_364 * fStack_2c4 + fStack_284 * fStack_324 +
               fStack_344 * fStack_2a4 + fStack_264 * fStack_304;
          auVar19 = vcmpps_avx(auVar20,auVar99,6);
          auVar19 = vcvtdq2ps_avx(auVar19 | local_3c0);
          auVar111._4_4_ = __real_3f800000;
          auVar111._0_4_ = __real_3f800000;
          auVar111._8_4_ = __real_3f800000;
          auVar111._12_4_ = __real_3f800000;
          auVar111._16_4_ = __real_3f800000;
          auVar111._20_4_ = __real_3f800000;
          auVar111._24_4_ = __real_3f800000;
          auVar111._28_4_ = __real_3f800000;
          auVar20 = vsubps_avx(auVar111,local_460);
          fVar98 = auVar20._0_4_ * auVar19._0_4_;
          fVar103 = auVar20._4_4_ * auVar19._4_4_;
          fVar104 = auVar20._8_4_ * auVar19._8_4_;
          fVar105 = auVar20._12_4_ * auVar19._12_4_;
          fVar106 = auVar20._16_4_ * auVar19._16_4_;
          fVar107 = auVar20._20_4_ * auVar19._20_4_;
          fVar108 = auVar20._24_4_ * auVar19._24_4_;
          fVar109 = auVar20._28_4_ * auVar19._28_4_;
          fVar63 = local_460._0_4_;
          fVar17 = fVar63 * local_2e0 + fVar98 * (float)local_380._0_4_;
          fVar68 = local_460._4_4_;
          fVar25 = fVar68 * fStack_2dc + fVar103 * (float)local_380._4_4_;
          fVar69 = local_460._8_4_;
          fVar26 = fVar69 * fStack_2d8 + fVar104 * fStack_378;
          fVar70 = local_460._12_4_;
          fVar27 = fVar70 * fStack_2d4 + fVar105 * fStack_374;
          fVar71 = local_460._16_4_;
          fVar28 = fVar71 * fStack_2d0 + fVar106 * fStack_370;
          fVar72 = local_460._20_4_;
          fVar29 = fVar72 * fStack_2cc + fVar107 * fStack_36c;
          fVar73 = local_460._24_4_;
          fVar30 = fVar73 * fStack_2c8 + fVar108 * fStack_368;
          fVar74 = local_460._28_4_;
          fVar31 = fVar74 * fStack_2c4 + fVar109 * fStack_364;
          fVar32 = fVar63 * local_2c0 + fVar98 * (float)local_360._0_4_;
          fVar42 = fVar68 * fStack_2bc + fVar103 * (float)local_360._4_4_;
          fVar43 = fVar69 * fStack_2b8 + fVar104 * fStack_358;
          fVar44 = fVar70 * fStack_2b4 + fVar105 * fStack_354;
          fVar45 = fVar71 * fStack_2b0 + fVar106 * fStack_350;
          fVar46 = fVar72 * fStack_2ac + fVar107 * fStack_34c;
          fVar47 = fVar73 * fStack_2a8 + fVar108 * fStack_348;
          fVar48 = fVar74 * fStack_2a4 + fVar109 * fStack_344;
          fVar49 = fVar63 * local_2a0 + fVar98 * (float)local_340._0_4_;
          fVar54 = fVar68 * fStack_29c + fVar103 * (float)local_340._4_4_;
          fVar55 = fVar69 * fStack_298 + fVar104 * fStack_338;
          fVar56 = fVar70 * fStack_294 + fVar105 * fStack_334;
          fVar57 = fVar71 * fStack_290 + fVar106 * fStack_330;
          fVar58 = fVar72 * fStack_28c + fVar107 * fStack_32c;
          fVar59 = fVar73 * fStack_288 + fVar108 * fStack_328;
          fVar60 = fVar74 * fStack_284 + fVar109 * fStack_324;
          fVar63 = fVar63 * local_280 + fVar98 * (float)local_320._0_4_;
          fVar68 = fVar68 * fStack_27c + fVar103 * (float)local_320._4_4_;
          fVar69 = fVar69 * fStack_278 + fVar104 * fStack_318;
          fVar70 = fVar70 * fStack_274 + fVar105 * fStack_314;
          fVar71 = fVar71 * fStack_270 + fVar106 * fStack_310;
          fVar72 = fVar72 * fStack_26c + fVar107 * fStack_30c;
          fVar73 = fVar73 * fStack_268 + fVar108 * fStack_308;
          fVar74 = fVar74 * fStack_264 + fVar109 * fStack_304;
          auVar75._0_4_ = fVar32 * fVar32 + fVar63 * fVar63 + fVar17 * fVar17 + fVar49 * fVar49;
          auVar75._4_4_ = fVar42 * fVar42 + fVar68 * fVar68 + fVar25 * fVar25 + fVar54 * fVar54;
          auVar75._8_4_ = fVar43 * fVar43 + fVar69 * fVar69 + fVar26 * fVar26 + fVar55 * fVar55;
          auVar75._12_4_ = fVar44 * fVar44 + fVar70 * fVar70 + fVar27 * fVar27 + fVar56 * fVar56;
          auVar75._16_4_ = fVar45 * fVar45 + fVar71 * fVar71 + fVar28 * fVar28 + fVar57 * fVar57;
          auVar75._20_4_ = fVar46 * fVar46 + fVar72 * fVar72 + fVar29 * fVar29 + fVar58 * fVar58;
          auVar75._24_4_ = fVar47 * fVar47 + fVar73 * fVar73 + fVar30 * fVar30 + fVar59 * fVar59;
          auVar75._28_4_ = fVar48 * fVar48 + fVar74 * fVar74 + fVar31 * fVar31 + fVar60 * fVar60;
          auVar82._4_4_ = __real_322bcc77;
          auVar82._0_4_ = __real_322bcc77;
          auVar82._8_4_ = __real_322bcc77;
          auVar82._12_4_ = __real_322bcc77;
          auVar82._16_4_ = __real_322bcc77;
          auVar82._20_4_ = __real_322bcc77;
          auVar82._24_4_ = __real_322bcc77;
          auVar82._28_4_ = __real_322bcc77;
          auVar19 = vcmpps_avx(auVar82,auVar75,6);
          auVar20 = vcmpps_avx(auVar82,auVar75,2);
          auVar93._4_4_ = __real_3f000000;
          auVar93._0_4_ = __real_3f000000;
          auVar93._8_4_ = __real_3f000000;
          auVar93._12_4_ = __real_3f000000;
          auVar93._16_4_ = __real_3f000000;
          auVar93._20_4_ = __real_3f000000;
          auVar93._24_4_ = __real_3f000000;
          auVar93._28_4_ = __real_3f000000;
          auVar50 = vrsqrtps_avx(auVar75);
          fVar98 = auVar50._0_4_;
          fVar103 = auVar50._4_4_;
          fVar104 = auVar50._8_4_;
          fVar105 = auVar50._12_4_;
          fVar106 = auVar50._16_4_;
          fVar107 = auVar50._20_4_;
          fVar108 = auVar50._24_4_;
          fVar109 = auVar50._28_4_;
          fVar98 = (-(__real_3f000000 * auVar75._0_4_ * fVar98 * fVar98) + __real_3f000000) * fVar98
                   + fVar98;
          fVar103 = (-(__real_3f000000 * auVar75._4_4_ * fVar103 * fVar103) + __real_3f000000) *
                    fVar103 + fVar103;
          fVar104 = (-(__real_3f000000 * auVar75._8_4_ * fVar104 * fVar104) + __real_3f000000) *
                    fVar104 + fVar104;
          fVar105 = (-(__real_3f000000 * auVar75._12_4_ * fVar105 * fVar105) + __real_3f000000) *
                    fVar105 + fVar105;
          fVar106 = (-(__real_3f000000 * auVar75._16_4_ * fVar106 * fVar106) + __real_3f000000) *
                    fVar106 + fVar106;
          fVar107 = (-(__real_3f000000 * auVar75._20_4_ * fVar107 * fVar107) + __real_3f000000) *
                    fVar107 + fVar107;
          fVar108 = (-(__real_3f000000 * auVar75._24_4_ * fVar108 * fVar108) + __real_3f000000) *
                    fVar108 + fVar108;
          fVar109 = (-(__real_3f000000 * auVar75._28_4_ * fVar109 * fVar109) + __real_3f000000) *
                    fVar109 + fVar109;
          fVar98 = (-(__real_3f000000 * auVar75._0_4_ * fVar98 * fVar98) + __real_3f000000) * fVar98
                   + fVar98;
          fVar103 = (-(__real_3f000000 * auVar75._4_4_ * fVar103 * fVar103) + __real_3f000000) *
                    fVar103 + fVar103;
          fVar104 = (-(__real_3f000000 * auVar75._8_4_ * fVar104 * fVar104) + __real_3f000000) *
                    fVar104 + fVar104;
          fVar105 = (-(__real_3f000000 * auVar75._12_4_ * fVar105 * fVar105) + __real_3f000000) *
                    fVar105 + fVar105;
          fVar106 = (-(__real_3f000000 * auVar75._16_4_ * fVar106 * fVar106) + __real_3f000000) *
                    fVar106 + fVar106;
          fVar107 = (-(__real_3f000000 * auVar75._20_4_ * fVar107 * fVar107) + __real_3f000000) *
                    fVar107 + fVar107;
          fVar108 = (-(__real_3f000000 * auVar75._24_4_ * fVar108 * fVar108) + __real_3f000000) *
                    fVar108 + fVar108;
          fVar109 = (-(__real_3f000000 * auVar75._28_4_ * fVar109 * fVar109) + __real_3f000000) *
                    fVar109 + fVar109;
          uVar80 = auVar20._0_4_;
          auVar22._0_4_ = uVar80 & (uint)(fVar17 * fVar98);
          uVar85 = auVar20._4_4_;
          auVar22._4_4_ = uVar85 & (uint)(fVar25 * fVar103);
          uVar86 = auVar20._8_4_;
          auVar22._8_4_ = uVar86 & (uint)(fVar26 * fVar104);
          uVar87 = auVar20._12_4_;
          auVar22._12_4_ = uVar87 & (uint)(fVar27 * fVar105);
          uVar88 = auVar20._16_4_;
          auVar22._16_4_ = uVar88 & (uint)(fVar28 * fVar106);
          uVar89 = auVar20._20_4_;
          auVar22._20_4_ = uVar89 & (uint)(fVar29 * fVar107);
          uVar90 = auVar20._24_4_;
          auVar22._24_4_ = uVar90 & (uint)(fVar30 * fVar108);
          uVar91 = auVar20._28_4_;
          auVar22._28_4_ = uVar91 & (uint)(fVar31 * fVar109);
          auVar20._0_4_ = uVar80 & (uint)(fVar32 * fVar98);
          auVar20._4_4_ = uVar85 & (uint)(fVar42 * fVar103);
          auVar20._8_4_ = uVar86 & (uint)(fVar43 * fVar104);
          auVar20._12_4_ = uVar87 & (uint)(fVar44 * fVar105);
          auVar20._16_4_ = uVar88 & (uint)(fVar45 * fVar106);
          auVar20._20_4_ = uVar89 & (uint)(fVar46 * fVar107);
          auVar20._24_4_ = uVar90 & (uint)(fVar47 * fVar108);
          auVar20._28_4_ = uVar91 & (uint)(fVar48 * fVar109);
          auVar51._0_4_ = uVar80 & (uint)(fVar49 * fVar98);
          auVar51._4_4_ = uVar85 & (uint)(fVar54 * fVar103);
          auVar51._8_4_ = uVar86 & (uint)(fVar55 * fVar104);
          auVar51._12_4_ = uVar87 & (uint)(fVar56 * fVar105);
          auVar51._16_4_ = uVar88 & (uint)(fVar57 * fVar106);
          auVar51._20_4_ = uVar89 & (uint)(fVar58 * fVar107);
          auVar51._24_4_ = uVar90 & (uint)(fVar59 * fVar108);
          auVar51._28_4_ = uVar91 & (uint)(fVar60 * fVar109);
          auVar76._0_4_ = auVar19._0_4_ & (uint)__real_3f800000;
          auVar76._4_4_ = auVar19._4_4_ & (uint)__real_3f800000;
          auVar76._8_4_ = auVar19._8_4_ & (uint)__real_3f800000;
          auVar76._12_4_ = auVar19._12_4_ & (uint)__real_3f800000;
          auVar76._16_4_ = auVar19._16_4_ & (uint)__real_3f800000;
          auVar76._20_4_ = auVar19._20_4_ & (uint)__real_3f800000;
          auVar76._24_4_ = auVar19._24_4_ & (uint)__real_3f800000;
          auVar76._28_4_ = auVar19._28_4_ & (uint)__real_3f800000;
          auVar64._0_4_ = uVar80 & (uint)(fVar63 * fVar98);
          auVar64._4_4_ = uVar85 & (uint)(fVar68 * fVar103);
          auVar64._8_4_ = uVar86 & (uint)(fVar69 * fVar104);
          auVar64._12_4_ = uVar87 & (uint)(fVar70 * fVar105);
          auVar64._16_4_ = uVar88 & (uint)(fVar71 * fVar106);
          auVar64._20_4_ = uVar89 & (uint)(fVar72 * fVar107);
          auVar64._24_4_ = uVar90 & (uint)(fVar73 * fVar108);
          auVar64._28_4_ = uVar91 & (uint)(fVar74 * fVar109);
          _local_380 = vmaskmovps_avx(auVar18,auVar22);
          _local_360 = vmaskmovps_avx(auVar18,auVar20);
          _local_340 = vmaskmovps_avx(auVar18,auVar51);
          _local_320 = vmaskmovps_avx(auVar18,auVar64 | auVar76);
          auVar18 = vpcmpeqd_avx2(auVar93,auVar93);
          auVar95 = ZEXT3264(auVar18);
          in_ZMM13 = ZEXT3264(auVar110);
        }
      }
      auVar110 = auVar95._0_32_;
      local_220._16_16_ = ZEXT116(1) * auVar2;
      local_220._0_16_ = ZEXT116(0) * auVar2 | ZEXT116(1) * auVar33;
      auVar18 = vperm2i128_avx2(_local_340,_local_320,0x20);
      auVar19 = vperm2i128_avx2(_local_340,_local_320,0x31);
      auVar20 = vperm2i128_avx2(_local_380,_local_360,0x20);
      auVar50 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                            auVar18);
      auVar96 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                            auVar20);
      local_180 = vpblendd_avx2(auVar96,auVar50,0xcc);
      auVar18 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                            auVar18);
      in_ZMM6 = ZEXT3264(auVar18);
      auVar20 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                            auVar20);
      local_160 = vpblendd_avx2(auVar20,auVar18,0xcc);
      auVar18 = vperm2i128_avx2(_local_380,_local_360,0x31);
      auVar20 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                            auVar19);
      auVar50 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                            auVar18);
      in_ZMM5 = ZEXT3264(auVar50);
      local_140 = vpblendd_avx2(auVar50,auVar20,0xcc);
      auVar19 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                            auVar19);
      auVar18 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                            auVar18);
      local_120 = vpblendd_avx2(auVar18,auVar19,0xcc);
      uVar11 = 0xff;
      do {
        uVar80 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
          uVar80 = uVar80 + 1;
        }
        bVar5 = (byte)uVar80 & 0x3f;
        auVar18 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar80 << 4)));
        *(undefined1 (*) [32])
         (param_1 + (longlong)*(int *)(local_220 + (ulonglong)(uVar80 & 7) * 4) * 0x60) = auVar18;
        uVar11 = uVar11 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
      } while (uVar11 != 0);
      iVar14 = iVar14 + 8;
    } while (iVar14 < (int)(uVar8 & 0xfffffff8));
  }
  if (iVar14 < (int)in_stack_00000048) {
    auVar16._4_4_ = iVar14;
    auVar16._0_4_ = iVar14;
    auVar16._8_4_ = iVar14;
    auVar16._12_4_ = iVar14;
    auVar16._16_4_ = iVar14;
    auVar16._20_4_ = iVar14;
    auVar16._24_4_ = iVar14;
    auVar16._28_4_ = iVar14;
    auVar35 = vpor_avx2(auVar16,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar24._4_4_ = in_stack_00000048;
    auVar24._0_4_ = in_stack_00000048;
    auVar24._8_4_ = in_stack_00000048;
    auVar24._12_4_ = in_stack_00000048;
    auVar24._16_4_ = in_stack_00000048;
    auVar24._20_4_ = in_stack_00000048;
    auVar24._24_4_ = in_stack_00000048;
    auVar24._28_4_ = in_stack_00000048;
    auVar18 = vpcmpgtd_avx2(auVar24,auVar35);
    auVar35 = vpslld_avx2(auVar35,3);
    local_240 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
    auVar113._4_4_ = __real_00000004;
    auVar113._0_4_ = __real_00000004;
    auVar113._8_4_ = __real_00000004;
    auVar113._12_4_ = __real_00000004;
    auVar113._16_4_ = __real_00000004;
    auVar113._20_4_ = __real_00000004;
    auVar113._24_4_ = __real_00000004;
    auVar113._28_4_ = __real_00000004;
    vpor_avx2(auVar113,auVar35);
    auVar35 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
    auVar35 = vpslld_avx2(auVar35,4);
    auVar65._4_4_ = __real_00000008;
    auVar65._0_4_ = __real_00000008;
    auVar65._8_4_ = __real_00000008;
    auVar65._12_4_ = __real_00000008;
    auVar65._16_4_ = __real_00000008;
    auVar65._20_4_ = __real_00000008;
    auVar65._24_4_ = __real_00000008;
    auVar65._28_4_ = __real_00000008;
    vpor_avx2(auVar35,auVar65);
    auVar20 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
    auVar52._4_4_ = __real_0000000c;
    auVar52._0_4_ = __real_0000000c;
    auVar52._8_4_ = __real_0000000c;
    auVar52._12_4_ = __real_0000000c;
    auVar52._16_4_ = __real_0000000c;
    auVar52._20_4_ = __real_0000000c;
    auVar52._24_4_ = __real_0000000c;
    auVar52._28_4_ = __real_0000000c;
    vpor_avx2(auVar35,auVar52);
    auVar19 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
    auVar36._4_4_ = __real_00000001;
    auVar36._0_4_ = __real_00000001;
    auVar36._8_4_ = __real_00000001;
    auVar36._12_4_ = __real_00000001;
    auVar36._16_4_ = __real_00000001;
    auVar36._20_4_ = __real_00000001;
    auVar36._24_4_ = __real_00000001;
    auVar36._28_4_ = __real_00000001;
    auVar38 = vpcmpeqd_avx2(auVar19,auVar36);
    auVar35 = auVar18 & auVar38;
    if ((((((((SUB321(auVar35 >> 0x1f,0) & 1) != 0 || (SUB321(auVar35 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar35 >> 0x5f,0) & 1) != 0) || SUB321(auVar35 >> 0x7f,0) != '\0') ||
          (SUB321(auVar35 >> 0x9f,0) & 1) != 0) || SUB321(auVar35 >> 0xbf,0) != '\0') ||
        (SUB321(auVar35 >> 0xdf,0) & 1) != 0) || auVar35[0x1f] < '\0') {
      auVar83._0_4_ = auVar38._0_4_ & auVar18._0_4_;
      auVar83._4_4_ = auVar38._4_4_ & auVar18._4_4_;
      auVar83._8_4_ = auVar38._8_4_ & auVar18._8_4_;
      auVar83._12_4_ = auVar38._12_4_ & auVar18._12_4_;
      auVar83._16_4_ = auVar38._16_4_ & auVar18._16_4_;
      auVar83._20_4_ = auVar38._20_4_ & auVar18._20_4_;
      auVar83._24_4_ = auVar38._24_4_ & auVar18._24_4_;
      auVar83._28_4_ = auVar38._28_4_ & auVar18._28_4_;
      auVar50 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
      auVar96 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      auVar100 = vgatherdps(ZEXT832(0),auVar83);
      auVar94._0_4_ =
           -(auVar100._0_4_ * auVar100._0_4_) +
           -(auVar96._0_4_ * auVar96._0_4_) + -(auVar50._0_4_ * auVar50._0_4_) + __real_3f800000;
      auVar94._4_4_ =
           -(auVar100._4_4_ * auVar100._4_4_) +
           -(auVar96._4_4_ * auVar96._4_4_) + -(auVar50._4_4_ * auVar50._4_4_) + __real_3f800000;
      auVar94._8_4_ =
           -(auVar100._8_4_ * auVar100._8_4_) +
           -(auVar96._8_4_ * auVar96._8_4_) + -(auVar50._8_4_ * auVar50._8_4_) + __real_3f800000;
      auVar94._12_4_ =
           -(auVar100._12_4_ * auVar100._12_4_) +
           -(auVar96._12_4_ * auVar96._12_4_) + -(auVar50._12_4_ * auVar50._12_4_) + __real_3f800000
      ;
      auVar94._16_4_ =
           -(auVar100._16_4_ * auVar100._16_4_) +
           -(auVar96._16_4_ * auVar96._16_4_) + -(auVar50._16_4_ * auVar50._16_4_) + __real_3f800000
      ;
      auVar94._20_4_ =
           -(auVar100._20_4_ * auVar100._20_4_) +
           -(auVar96._20_4_ * auVar96._20_4_) + -(auVar50._20_4_ * auVar50._20_4_) + __real_3f800000
      ;
      auVar94._24_4_ =
           -(auVar100._24_4_ * auVar100._24_4_) +
           -(auVar96._24_4_ * auVar96._24_4_) + -(auVar50._24_4_ * auVar50._24_4_) + __real_3f800000
      ;
      auVar94._28_4_ =
           -(auVar100._28_4_ * auVar100._28_4_) +
           -(auVar96._28_4_ * auVar96._28_4_) + -(auVar50._28_4_ * auVar50._28_4_) + __real_3f800000
      ;
      auVar35 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar94,1);
      auVar110 = vsqrtps_avx(auVar94);
      auVar77._0_4_ = auVar110._0_4_ & auVar35._0_4_;
      auVar77._4_4_ = auVar110._4_4_ & auVar35._4_4_;
      auVar77._8_4_ = auVar110._8_4_ & auVar35._8_4_;
      auVar77._12_4_ = auVar110._12_4_ & auVar35._12_4_;
      auVar77._16_4_ = auVar110._16_4_ & auVar35._16_4_;
      auVar77._20_4_ = auVar110._20_4_ & auVar35._20_4_;
      auVar77._24_4_ = auVar110._24_4_ & auVar35._24_4_;
      auVar77._28_4_ = auVar110._28_4_ & auVar35._28_4_;
      _local_560 = vmaskmovps_avx(auVar83,auVar50);
      _local_540 = vmaskmovps_avx(auVar83,auVar96);
      _local_520 = vmaskmovps_avx(auVar83,auVar100);
      _local_500 = vmaskmovps_avx(auVar83,auVar77);
    }
    auVar84._0_4_ = ~auVar38._0_4_ & auVar18._0_4_;
    auVar84._4_4_ = ~auVar38._4_4_ & auVar18._4_4_;
    auVar84._8_4_ = ~auVar38._8_4_ & auVar18._8_4_;
    auVar84._12_4_ = ~auVar38._12_4_ & auVar18._12_4_;
    auVar84._16_4_ = ~auVar38._16_4_ & auVar18._16_4_;
    auVar84._20_4_ = ~auVar38._20_4_ & auVar18._20_4_;
    auVar84._24_4_ = ~auVar38._24_4_ & auVar18._24_4_;
    auVar84._28_4_ = ~auVar38._28_4_ & auVar18._28_4_;
    iVar14 = vmovmskps_avx(auVar84);
    if (iVar14 != 0) {
      auVar35 = vpcmpgtd_avx2(auVar19,auVar36);
      auVar38 = vpandn_avx2(auVar35,auVar84);
      auVar35 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      iVar10 = vmovmskps_avx(auVar38);
      auVar50 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      if ((iVar10 == 0) || (auVar50 = auVar38, (char)iVar14 != (char)iVar10)) {
        auVar96 = vpcmpeqd_avx2(auVar110,auVar110);
        auVar50 = auVar96 ^ auVar50;
        auVar110 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar38 = ZEXT1632((undefined1  [16])0x0);
        if (0.0 < in_stack_00000030) {
          auVar1._0_4_ = auVar96._0_4_ + auVar19._0_4_;
          auVar1._4_4_ = auVar96._4_4_ + auVar19._4_4_;
          auVar1._8_4_ = auVar96._8_4_ + auVar19._8_4_;
          auVar1._12_4_ = auVar96._12_4_ + auVar19._12_4_;
          auVar1._16_4_ = auVar96._16_4_ + auVar19._16_4_;
          auVar1._20_4_ = auVar96._20_4_ + auVar19._20_4_;
          auVar1._24_4_ = auVar96._24_4_ + auVar19._24_4_;
          auVar1._28_4_ = auVar96._28_4_ + auVar19._28_4_;
          if (__real_3f800000 <= in_stack_00000030) {
            auVar110 = vpand_avx2(auVar84,auVar50);
            auVar110 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar1,auVar110);
            auVar35 = auVar110;
          }
          else {
            auVar110 = vcvtdq2ps_avx(auVar1);
            auVar101._0_4_ = auVar110._0_4_ * in_stack_00000030;
            auVar101._4_4_ = auVar110._4_4_ * in_stack_00000030;
            auVar101._8_4_ = auVar110._8_4_ * in_stack_00000030;
            auVar101._12_4_ = auVar110._12_4_ * in_stack_00000030;
            auVar101._16_4_ = auVar110._16_4_ * in_stack_00000030;
            auVar101._20_4_ = auVar110._20_4_ * in_stack_00000030;
            auVar101._24_4_ = auVar110._24_4_ * in_stack_00000030;
            auVar101._28_4_ = auVar110._28_4_ * in_stack_00000030;
            auVar96 = vpand_avx2(auVar84,auVar50);
            auVar19 = vroundps_avx(auVar101,9);
            auVar78._0_4_ = (int)auVar19._0_4_;
            auVar78._4_4_ = (int)auVar19._4_4_;
            auVar78._8_4_ = (int)auVar19._8_4_;
            auVar78._12_4_ = (int)auVar19._12_4_;
            auVar78._16_4_ = (int)auVar19._16_4_;
            auVar78._20_4_ = (int)auVar19._20_4_;
            auVar78._24_4_ = (int)auVar19._24_4_;
            auVar78._28_4_ = (int)auVar19._28_4_;
            auVar110 = vpminsd_avx2(auVar78,auVar1);
            auVar110 = vblendvps_avx(auVar35,auVar110,auVar96);
            auVar38 = ZEXT832(0) << 0x20;
            if (in_stack_00000038 != '\x01') {
              auVar38 = vsubps_avx(auVar101,auVar19);
            }
            auVar19 = vpcmpeqd_avx2(auVar101,auVar101);
            auVar19 = vpsubd_avx2(auVar110,auVar19);
            auVar19 = vpminsd_avx2(auVar19,auVar1);
            auVar35 = vblendvps_avx(auVar35,auVar19,auVar96);
          }
        }
        local_580 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar38,auVar50);
      }
      else {
        local_580 = ZEXT832(0) << 0x20;
        auVar110 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      vpmovsxdq_avx2(auVar20._16_16_);
      vpmovsxdq_avx2(auVar20._0_16_);
      auVar33._4_4_ = uVar6;
      auVar33._0_4_ = uVar6;
      auVar33._8_4_ = uVar6;
      auVar33._12_4_ = uVar6;
      vpmovzxdq_avx2(auVar33);
      auVar37._4_4_ = iVar12;
      auVar37._0_4_ = iVar12;
      auVar37._8_4_ = iVar12;
      auVar37._12_4_ = iVar12;
      auVar37._16_4_ = iVar12;
      auVar37._20_4_ = iVar12;
      auVar37._24_4_ = iVar12;
      auVar37._28_4_ = iVar12;
      if (in_stack_00000040 < 6) {
        auVar35 = vpmulld_avx2(auVar110,auVar37);
        vpmovsxdq_avx2(auVar35._16_16_);
        auVar110 = vpmovsxdq_avx2(auVar35._0_16_);
                    /* WARNING: Could not recover jumptable at 0x000140adaa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6b490 + *(int *)(&DAT_151c6b490 + uVar9 * 4)))
                  (&DAT_151c6b490,&DAT_151c6b490 + *(int *)(&DAT_151c6b490 + uVar9 * 4),
                   auVar110._0_8_,auVar35._16_8_);
        return;
      }
      auVar38 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      _local_560 = vmaskmovps_avx(auVar84,auVar38);
      _local_540 = vmaskmovps_avx(auVar84,auVar38);
      _local_520 = vmaskmovps_avx(auVar84,auVar38);
      auVar39._4_4_ = __real_3f800000;
      auVar39._0_4_ = __real_3f800000;
      auVar39._8_4_ = __real_3f800000;
      auVar39._12_4_ = __real_3f800000;
      auVar39._16_4_ = __real_3f800000;
      auVar39._20_4_ = __real_3f800000;
      auVar39._24_4_ = __real_3f800000;
      auVar39._28_4_ = __real_3f800000;
      _local_500 = vmaskmovps_avx(auVar84,auVar39);
      auVar38 = vpcmpeqd_avx2(auVar110,auVar35);
      auVar110 = auVar84 & ~auVar38;
      if ((((((((SUB321(auVar110 >> 0x1f,0) & 1) != 0 || (SUB321(auVar110 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar110 >> 0x5f,0) & 1) != 0) || SUB321(auVar110 >> 0x7f,0) != '\0') ||
            (SUB321(auVar110 >> 0x9f,0) & 1) != 0) || SUB321(auVar110 >> 0xbf,0) != '\0') ||
          (SUB321(auVar110 >> 0xdf,0) & 1) != 0) || auVar110[0x1f] < '\0') {
        auVar110 = vpandn_avx2(auVar38,auVar84);
        if (in_stack_00000040 < 6) {
          auVar35 = vpmulld_avx2(auVar35,auVar37);
          vpmovsxdq_avx2(auVar35._16_16_);
          auVar110 = vpmovsxdq_avx2(auVar35._0_16_);
                    /* WARNING: Could not recover jumptable at 0x000140adb303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6b4a8 + *(int *)(&DAT_151c6b4a8 + uVar9 * 4)))
                    (&DAT_151c6b4a8,&DAT_151c6b4a8 + *(int *)(&DAT_151c6b4a8 + uVar9 * 4),
                     auVar110._0_8_,auVar35._16_8_);
          return;
        }
        auVar35 = vmaskmovps_avx(auVar110,ZEXT832(0) << 0x20);
        auVar38 = vmaskmovps_avx(auVar110,ZEXT832(0) << 0x20);
        auVar19 = vmaskmovps_avx(auVar110,ZEXT832(0) << 0x20);
        auVar40._4_4_ = __real_3f800000;
        auVar40._0_4_ = __real_3f800000;
        auVar40._8_4_ = __real_3f800000;
        auVar40._12_4_ = __real_3f800000;
        auVar40._16_4_ = __real_3f800000;
        auVar40._20_4_ = __real_3f800000;
        auVar40._24_4_ = __real_3f800000;
        auVar40._28_4_ = __real_3f800000;
        auVar20 = vmaskmovps_avx(auVar110,auVar40);
        local_440 = auVar35._0_4_;
        fStack_43c = auVar35._4_4_;
        fStack_438 = auVar35._8_4_;
        fStack_434 = auVar35._12_4_;
        fStack_430 = auVar35._16_4_;
        fStack_42c = auVar35._20_4_;
        fStack_428 = auVar35._24_4_;
        fStack_424 = auVar35._28_4_;
        local_420 = auVar38._0_4_;
        fStack_41c = auVar38._4_4_;
        fStack_418 = auVar38._8_4_;
        fStack_414 = auVar38._12_4_;
        fStack_410 = auVar38._16_4_;
        fStack_40c = auVar38._20_4_;
        fStack_408 = auVar38._24_4_;
        fStack_404 = auVar38._28_4_;
        local_400 = auVar19._0_4_;
        fStack_3fc = auVar19._4_4_;
        fStack_3f8 = auVar19._8_4_;
        fStack_3f4 = auVar19._12_4_;
        fStack_3f0 = auVar19._16_4_;
        fStack_3ec = auVar19._20_4_;
        fStack_3e8 = auVar19._24_4_;
        fStack_3e4 = auVar19._28_4_;
        local_3e0 = auVar20._0_4_;
        fStack_3dc = auVar20._4_4_;
        fStack_3d8 = auVar20._8_4_;
        fStack_3d4 = auVar20._12_4_;
        fStack_3d0 = auVar20._16_4_;
        fStack_3cc = auVar20._20_4_;
        fStack_3c8 = auVar20._24_4_;
        fStack_3c4 = auVar20._28_4_;
        auVar97._0_4_ =
             (float)local_560._0_4_ * local_440 + local_400 * (float)local_520._0_4_ +
             (float)local_540._0_4_ * local_420 + local_3e0 * (float)local_500._0_4_;
        auVar97._4_4_ =
             (float)local_560._4_4_ * fStack_43c + fStack_3fc * (float)local_520._4_4_ +
             (float)local_540._4_4_ * fStack_41c + fStack_3dc * (float)local_500._4_4_;
        auVar97._8_4_ =
             fStack_558 * fStack_438 + fStack_3f8 * fStack_518 +
             fStack_538 * fStack_418 + fStack_3d8 * fStack_4f8;
        auVar97._12_4_ =
             fStack_554 * fStack_434 + fStack_3f4 * fStack_514 +
             fStack_534 * fStack_414 + fStack_3d4 * fStack_4f4;
        auVar97._16_4_ =
             fStack_550 * fStack_430 + fStack_3f0 * fStack_510 +
             fStack_530 * fStack_410 + fStack_3d0 * fStack_4f0;
        auVar97._20_4_ =
             fStack_54c * fStack_42c + fStack_3ec * fStack_50c +
             fStack_52c * fStack_40c + fStack_3cc * fStack_4ec;
        auVar97._24_4_ =
             fStack_548 * fStack_428 + fStack_3e8 * fStack_508 +
             fStack_528 * fStack_408 + fStack_3c8 * fStack_4e8;
        auVar97._28_4_ =
             fStack_544 * fStack_424 + fStack_3e4 * fStack_504 +
             fStack_524 * fStack_404 + fStack_3c4 * fStack_4e4;
        auVar35 = vcmpps_avx(ZEXT432(0) << 0x20,auVar97,6);
        auVar35 = vcvtdq2ps_avx(auVar35 | auVar36);
        auVar102._4_4_ = __real_3f800000;
        auVar102._0_4_ = __real_3f800000;
        auVar102._8_4_ = __real_3f800000;
        auVar102._12_4_ = __real_3f800000;
        auVar102._16_4_ = __real_3f800000;
        auVar102._20_4_ = __real_3f800000;
        auVar102._24_4_ = __real_3f800000;
        auVar102._28_4_ = __real_3f800000;
        auVar38 = vsubps_avx(auVar102,local_580);
        fVar98 = auVar38._0_4_ * auVar35._0_4_;
        fVar103 = auVar38._4_4_ * auVar35._4_4_;
        fVar104 = auVar38._8_4_ * auVar35._8_4_;
        fVar105 = auVar38._12_4_ * auVar35._12_4_;
        fVar106 = auVar38._16_4_ * auVar35._16_4_;
        fVar107 = auVar38._20_4_ * auVar35._20_4_;
        fVar108 = auVar38._24_4_ * auVar35._24_4_;
        fVar109 = auVar38._28_4_ * auVar35._28_4_;
        fVar63 = local_580._0_4_;
        fVar17 = fVar63 * local_440 + fVar98 * (float)local_560._0_4_;
        fVar68 = local_580._4_4_;
        fVar25 = fVar68 * fStack_43c + fVar103 * (float)local_560._4_4_;
        fVar69 = local_580._8_4_;
        fVar26 = fVar69 * fStack_438 + fVar104 * fStack_558;
        fVar70 = local_580._12_4_;
        fVar27 = fVar70 * fStack_434 + fVar105 * fStack_554;
        fVar71 = local_580._16_4_;
        fVar28 = fVar71 * fStack_430 + fVar106 * fStack_550;
        fVar72 = local_580._20_4_;
        fVar29 = fVar72 * fStack_42c + fVar107 * fStack_54c;
        fVar73 = local_580._24_4_;
        fVar30 = fVar73 * fStack_428 + fVar108 * fStack_548;
        fVar74 = local_580._28_4_;
        fVar31 = fVar74 * fStack_424 + fVar109 * fStack_544;
        fVar32 = fVar63 * local_420 + fVar98 * (float)local_540._0_4_;
        fVar42 = fVar68 * fStack_41c + fVar103 * (float)local_540._4_4_;
        fVar43 = fVar69 * fStack_418 + fVar104 * fStack_538;
        fVar44 = fVar70 * fStack_414 + fVar105 * fStack_534;
        fVar45 = fVar71 * fStack_410 + fVar106 * fStack_530;
        fVar46 = fVar72 * fStack_40c + fVar107 * fStack_52c;
        fVar47 = fVar73 * fStack_408 + fVar108 * fStack_528;
        fVar48 = fVar74 * fStack_404 + fVar109 * fStack_524;
        fVar49 = fVar63 * local_400 + fVar98 * (float)local_520._0_4_;
        fVar54 = fVar68 * fStack_3fc + fVar103 * (float)local_520._4_4_;
        fVar55 = fVar69 * fStack_3f8 + fVar104 * fStack_518;
        fVar56 = fVar70 * fStack_3f4 + fVar105 * fStack_514;
        fVar57 = fVar71 * fStack_3f0 + fVar106 * fStack_510;
        fVar58 = fVar72 * fStack_3ec + fVar107 * fStack_50c;
        fVar59 = fVar73 * fStack_3e8 + fVar108 * fStack_508;
        fVar60 = fVar74 * fStack_3e4 + fVar109 * fStack_504;
        fVar63 = fVar63 * local_3e0 + fVar98 * (float)local_500._0_4_;
        fVar68 = fVar68 * fStack_3dc + fVar103 * (float)local_500._4_4_;
        fVar69 = fVar69 * fStack_3d8 + fVar104 * fStack_4f8;
        fVar70 = fVar70 * fStack_3d4 + fVar105 * fStack_4f4;
        fVar71 = fVar71 * fStack_3d0 + fVar106 * fStack_4f0;
        fVar72 = fVar72 * fStack_3cc + fVar107 * fStack_4ec;
        fVar73 = fVar73 * fStack_3c8 + fVar108 * fStack_4e8;
        fVar74 = fVar74 * fStack_3c4 + fVar109 * fStack_4e4;
        auVar66._0_4_ = fVar17 * fVar17 + fVar49 * fVar49 + fVar32 * fVar32 + fVar63 * fVar63;
        auVar66._4_4_ = fVar25 * fVar25 + fVar54 * fVar54 + fVar42 * fVar42 + fVar68 * fVar68;
        auVar66._8_4_ = fVar26 * fVar26 + fVar55 * fVar55 + fVar43 * fVar43 + fVar69 * fVar69;
        auVar66._12_4_ = fVar27 * fVar27 + fVar56 * fVar56 + fVar44 * fVar44 + fVar70 * fVar70;
        auVar66._16_4_ = fVar28 * fVar28 + fVar57 * fVar57 + fVar45 * fVar45 + fVar71 * fVar71;
        auVar66._20_4_ = fVar29 * fVar29 + fVar58 * fVar58 + fVar46 * fVar46 + fVar72 * fVar72;
        auVar66._24_4_ = fVar30 * fVar30 + fVar59 * fVar59 + fVar47 * fVar47 + fVar73 * fVar73;
        auVar66._28_4_ = fVar31 * fVar31 + fVar60 * fVar60 + fVar48 * fVar48 + fVar74 * fVar74;
        auVar79._4_4_ = __real_322bcc77;
        auVar79._0_4_ = __real_322bcc77;
        auVar79._8_4_ = __real_322bcc77;
        auVar79._12_4_ = __real_322bcc77;
        auVar79._16_4_ = __real_322bcc77;
        auVar79._20_4_ = __real_322bcc77;
        auVar79._24_4_ = __real_322bcc77;
        auVar79._28_4_ = __real_322bcc77;
        auVar35 = vcmpps_avx(auVar79,auVar66,6);
        auVar38 = vcmpps_avx(auVar79,auVar66,2);
        auVar19 = vrsqrtps_avx(auVar66);
        fVar98 = auVar19._0_4_;
        fVar103 = auVar19._4_4_;
        fVar104 = auVar19._8_4_;
        fVar105 = auVar19._12_4_;
        fVar106 = auVar19._16_4_;
        fVar107 = auVar19._20_4_;
        fVar108 = auVar19._24_4_;
        fVar109 = auVar19._28_4_;
        fVar98 = (-(__real_3f000000 * auVar66._0_4_ * fVar98 * fVar98) + __real_3f000000) * fVar98 +
                 fVar98;
        fVar103 = (-(__real_3f000000 * auVar66._4_4_ * fVar103 * fVar103) + __real_3f000000) *
                  fVar103 + fVar103;
        fVar104 = (-(__real_3f000000 * auVar66._8_4_ * fVar104 * fVar104) + __real_3f000000) *
                  fVar104 + fVar104;
        fVar105 = (-(__real_3f000000 * auVar66._12_4_ * fVar105 * fVar105) + __real_3f000000) *
                  fVar105 + fVar105;
        fVar106 = (-(__real_3f000000 * auVar66._16_4_ * fVar106 * fVar106) + __real_3f000000) *
                  fVar106 + fVar106;
        fVar107 = (-(__real_3f000000 * auVar66._20_4_ * fVar107 * fVar107) + __real_3f000000) *
                  fVar107 + fVar107;
        fVar108 = (-(__real_3f000000 * auVar66._24_4_ * fVar108 * fVar108) + __real_3f000000) *
                  fVar108 + fVar108;
        fVar109 = (-(__real_3f000000 * auVar66._28_4_ * fVar109 * fVar109) + __real_3f000000) *
                  fVar109 + fVar109;
        fVar98 = (-(__real_3f000000 * auVar66._0_4_ * fVar98 * fVar98) + __real_3f000000) * fVar98 +
                 fVar98;
        fVar103 = (-(__real_3f000000 * auVar66._4_4_ * fVar103 * fVar103) + __real_3f000000) *
                  fVar103 + fVar103;
        fVar104 = (-(__real_3f000000 * auVar66._8_4_ * fVar104 * fVar104) + __real_3f000000) *
                  fVar104 + fVar104;
        fVar105 = (-(__real_3f000000 * auVar66._12_4_ * fVar105 * fVar105) + __real_3f000000) *
                  fVar105 + fVar105;
        fVar106 = (-(__real_3f000000 * auVar66._16_4_ * fVar106 * fVar106) + __real_3f000000) *
                  fVar106 + fVar106;
        fVar107 = (-(__real_3f000000 * auVar66._20_4_ * fVar107 * fVar107) + __real_3f000000) *
                  fVar107 + fVar107;
        fVar108 = (-(__real_3f000000 * auVar66._24_4_ * fVar108 * fVar108) + __real_3f000000) *
                  fVar108 + fVar108;
        fVar109 = (-(__real_3f000000 * auVar66._28_4_ * fVar109 * fVar109) + __real_3f000000) *
                  fVar109 + fVar109;
        uVar8 = auVar38._0_4_;
        auVar41._0_4_ = (uint)(fVar17 * fVar98) & uVar8;
        uVar80 = auVar38._4_4_;
        auVar41._4_4_ = (uint)(fVar25 * fVar103) & uVar80;
        uVar85 = auVar38._8_4_;
        auVar41._8_4_ = (uint)(fVar26 * fVar104) & uVar85;
        uVar86 = auVar38._12_4_;
        auVar41._12_4_ = (uint)(fVar27 * fVar105) & uVar86;
        uVar87 = auVar38._16_4_;
        auVar41._16_4_ = (uint)(fVar28 * fVar106) & uVar87;
        uVar88 = auVar38._20_4_;
        auVar41._20_4_ = (uint)(fVar29 * fVar107) & uVar88;
        uVar89 = auVar38._24_4_;
        auVar41._24_4_ = (uint)(fVar30 * fVar108) & uVar89;
        uVar90 = auVar38._28_4_;
        auVar41._28_4_ = (uint)(fVar31 * fVar109) & uVar90;
        auVar53._0_4_ = (uint)(fVar32 * fVar98) & uVar8;
        auVar53._4_4_ = (uint)(fVar42 * fVar103) & uVar80;
        auVar53._8_4_ = (uint)(fVar43 * fVar104) & uVar85;
        auVar53._12_4_ = (uint)(fVar44 * fVar105) & uVar86;
        auVar53._16_4_ = (uint)(fVar45 * fVar106) & uVar87;
        auVar53._20_4_ = (uint)(fVar46 * fVar107) & uVar88;
        auVar53._24_4_ = (uint)(fVar47 * fVar108) & uVar89;
        auVar53._28_4_ = (uint)(fVar48 * fVar109) & uVar90;
        auVar61._0_4_ = (uint)(fVar49 * fVar98) & uVar8;
        auVar61._4_4_ = (uint)(fVar54 * fVar103) & uVar80;
        auVar61._8_4_ = (uint)(fVar55 * fVar104) & uVar85;
        auVar61._12_4_ = (uint)(fVar56 * fVar105) & uVar86;
        auVar61._16_4_ = (uint)(fVar57 * fVar106) & uVar87;
        auVar61._20_4_ = (uint)(fVar58 * fVar107) & uVar88;
        auVar61._24_4_ = (uint)(fVar59 * fVar108) & uVar89;
        auVar61._28_4_ = (uint)(fVar60 * fVar109) & uVar90;
        auVar67._0_4_ = auVar35._0_4_ & (uint)__real_3f800000;
        auVar67._4_4_ = auVar35._4_4_ & (uint)__real_3f800000;
        auVar67._8_4_ = auVar35._8_4_ & (uint)__real_3f800000;
        auVar67._12_4_ = auVar35._12_4_ & (uint)__real_3f800000;
        auVar67._16_4_ = auVar35._16_4_ & (uint)__real_3f800000;
        auVar67._20_4_ = auVar35._20_4_ & (uint)__real_3f800000;
        auVar67._24_4_ = auVar35._24_4_ & (uint)__real_3f800000;
        auVar67._28_4_ = auVar35._28_4_ & (uint)__real_3f800000;
        auVar62._0_4_ = (uint)(fVar63 * fVar98) & uVar8;
        auVar62._4_4_ = (uint)(fVar68 * fVar103) & uVar80;
        auVar62._8_4_ = (uint)(fVar69 * fVar104) & uVar85;
        auVar62._12_4_ = (uint)(fVar70 * fVar105) & uVar86;
        auVar62._16_4_ = (uint)(fVar71 * fVar106) & uVar87;
        auVar62._20_4_ = (uint)(fVar72 * fVar107) & uVar88;
        auVar62._24_4_ = (uint)(fVar73 * fVar108) & uVar89;
        auVar62._28_4_ = (uint)(fVar74 * fVar109) & uVar90;
        _local_560 = vmaskmovps_avx(auVar110,auVar41);
        _local_540 = vmaskmovps_avx(auVar110,auVar53);
        _local_520 = vmaskmovps_avx(auVar110,auVar61);
        _local_500 = vmaskmovps_avx(auVar110,auVar62 | auVar67);
      }
    }
    auVar110 = vperm2i128_avx2(_local_520,_local_500,0x20);
    auVar35 = vperm2i128_avx2(_local_560,_local_540,0x20);
    auVar38 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                          auVar110);
    auVar19 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                          auVar35);
    local_200 = vpblendd_avx2(auVar19,auVar38,0xcc);
    auVar38 = vperm2i128_avx2(_local_520,_local_500,0x31);
    auVar110 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                           auVar110);
    auVar35 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                          auVar35);
    local_1e0 = vpblendd_avx2(auVar35,auVar110,0xcc);
    auVar110 = vperm2i128_avx2(_local_560,_local_540,0x31);
    auVar35 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                          auVar38);
    auVar19 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                          auVar110);
    local_1c0 = vpblendd_avx2(auVar19,auVar35,0xcc);
    auVar35 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                          auVar38);
    auVar110 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                           auVar110);
    local_1a0 = vpblendd_avx2(auVar110,auVar35,0xcc);
    uVar8 = vmovmskps_avx(auVar18);
    uVar9 = (ulonglong)uVar8;
    do {
      uVar8 = 0;
      for (uVar11 = uVar9; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
        uVar8 = uVar8 + 1;
      }
      bVar5 = (byte)uVar8 & 0x3f;
      auVar110 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar8 << 4)));
      *(undefined1 (*) [32])
       (param_1 + (longlong)*(int *)(local_240 + (ulonglong)(uVar8 & 7) * 4) * 0x60) = auVar110;
      uVar9 = uVar9 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
    } while (uVar9 != 0);
  }
  return;
}

// GetConstantKeyLerpPoseTranslations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_avx2 @ 140adbe60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseTranslations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_avx2
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,float param_6,char param_7,uint param_8,uint param_9)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 auVar5 [32];
  int iVar42;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
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
  ulonglong uVar43;
  undefined4 uVar44;
  int iVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  int iVar49;
  ulonglong uVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined4 uVar55;
  int iVar56;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  int iVar84;
  int iVar85;
  int iVar86;
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 in_ZMM7 [64];
  undefined1 auVar105 [64];
  int iVar106;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  undefined1 auVar107 [32];
  int iVar117;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  uint uVar123;
  uint uVar132;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  uint uVar126;
  uint uVar127;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  undefined1 in_ZMM11 [64];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
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
  float fVar152;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  float fVar163;
  undefined1 local_540 [32];
  undefined1 local_500 [32];
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [160];
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [8];
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
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
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_d8 [16];
  undefined1 local_98 [16];
  
  uVar44 = __real_00000001;
  uVar55 = __real_00000018;
  iVar47 = __real_00000004;
  auVar74 = in_ZMM11._0_32_;
  local_98 = in_ZMM11._0_16_;
  local_d8 = in_ZMM7._0_16_;
  iVar54 = *(int *)(&DAT_151c6b740 + (longlong)(int)param_8 * 4) *
           *(int *)(&DAT_151c6b720 + (longlong)(int)param_8 * 4);
  uVar48 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar48 = param_9;
  }
  if ((int)(uVar48 & 0xfffffff8) < 1) {
    iVar45 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    iVar45 = -(uint)(param_8 == 3);
    auVar139._4_4_ = iVar45;
    auVar139._0_4_ = iVar45;
    auVar139._8_4_ = iVar45;
    auVar139._12_4_ = iVar45;
    auVar139._16_4_ = iVar45;
    auVar139._20_4_ = iVar45;
    auVar139._24_4_ = iVar45;
    auVar139._28_4_ = iVar45;
    auVar145._4_4_ = iVar54;
    auVar145._0_4_ = iVar54;
    auVar145._8_4_ = iVar54;
    auVar145._12_4_ = iVar54;
    auVar145._16_4_ = iVar54;
    auVar145._20_4_ = iVar54;
    auVar145._24_4_ = iVar54;
    auVar145._28_4_ = iVar54;
    iVar45 = 0;
    auVar100._4_4_ = __real_00000004;
    auVar100._0_4_ = __real_00000004;
    auVar100._8_4_ = __real_00000004;
    auVar100._12_4_ = __real_00000004;
    auVar100._16_4_ = __real_00000004;
    auVar100._20_4_ = __real_00000004;
    auVar100._24_4_ = __real_00000004;
    auVar100._28_4_ = __real_00000004;
    auVar74 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
    auVar105 = ZEXT3264(auVar74);
    do {
      auVar74 = ___ymm_0000000700000003000000000000000000000006000000020000000000000000;
      auVar66 = in_ZMM5._0_32_;
      auVar70._4_4_ = iVar45;
      auVar70._0_4_ = iVar45;
      auVar70._8_4_ = iVar45;
      auVar70._12_4_ = iVar45;
      auVar70._16_4_ = iVar45;
      auVar70._20_4_ = iVar45;
      auVar70._24_4_ = iVar45;
      auVar70._28_4_ = iVar45;
      auVar57 = vpslld_avx2(auVar70,3);
      auVar102 = vpor_avx2(auVar57,
                           ___ymm_0000003800000030000000280000002000000018000000100000000800000000);
      auVar57 = vpor_avx2(auVar57,
                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004);
      vpmovzxdq_avx2(auVar57._16_16_);
      auVar57 = vpmovzxdq_avx2(auVar57._0_16_);
      auVar63 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      auVar64 = vpgatherqd((undefined1  [16])0x0,auVar63);
      auVar63 = vpcmpeqd_avx(auVar57._0_16_,auVar57._0_16_);
      auVar63 = vpgatherqd((undefined1  [16])0x0,auVar63);
      auVar70 = vpmovzxdq_avx2(auVar102._16_16_);
      auVar107._16_16_ = ZEXT116(1) * auVar63;
      auVar107._0_16_ = ZEXT116(0) * auVar63 | ZEXT116(1) * auVar64;
      auVar57 = vpslld_avx2(auVar107,4);
      auVar57 = vpor_avx2(auVar100,auVar57);
      auVar64 = auVar57._0_16_;
      auVar57 = vpcmpeqd_avx2(ZEXT1632(auVar63),ZEXT1632(auVar63));
      auVar107 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
      vpmovzxdq_avx2(auVar102._0_16_);
      auVar57._4_4_ = uVar44;
      auVar57._0_4_ = uVar44;
      auVar57._8_4_ = uVar44;
      auVar57._12_4_ = uVar44;
      auVar57._16_4_ = uVar44;
      auVar57._20_4_ = uVar44;
      auVar57._24_4_ = uVar44;
      auVar57._28_4_ = uVar44;
      auVar57 = vpcmpgtd_avx2(auVar107,auVar57);
      uVar46 = vmovmskps_avx(auVar57);
      if ((uVar46 ^ 0xff) == 0) {
        auVar102 = SUB6432(ZEXT1664((undefined1  [16])0x0),0) ^ auVar105._0_32_;
        if (0.0 < param_6) goto LAB_140adc08f;
LAB_140adc117:
        auVar80 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar107 = vblendvps_avx(auVar66,auVar80,auVar102);
        in_ZMM5 = ZEXT3264(auVar107);
        local_540 = vblendvps_avx(local_540,auVar80,auVar102);
LAB_140adc145:
        auVar64 = auVar80._0_16_;
        auVar80 = vblendvps_avx(_local_3c0,auVar80,auVar102);
      }
      else {
        uVar123 = auVar57._0_4_;
        auVar66._0_4_ = uVar123 & in_ZMM5._0_4_;
        uVar126 = auVar57._4_4_;
        auVar66._4_4_ = uVar126 & in_ZMM5._4_4_;
        uVar127 = auVar57._8_4_;
        auVar66._8_4_ = uVar127 & in_ZMM5._8_4_;
        uVar128 = auVar57._12_4_;
        auVar66._12_4_ = uVar128 & in_ZMM5._12_4_;
        uVar129 = auVar57._16_4_;
        auVar66._16_4_ = uVar129 & in_ZMM5._16_4_;
        uVar130 = auVar57._20_4_;
        auVar66._20_4_ = uVar130 & in_ZMM5._20_4_;
        uVar131 = auVar57._24_4_;
        auVar66._24_4_ = uVar131 & in_ZMM5._24_4_;
        uVar132 = auVar57._28_4_;
        auVar66._28_4_ = uVar132 & in_ZMM5._28_4_;
        in_ZMM5 = ZEXT3264(auVar66);
        local_540._0_4_ = uVar123 & local_540._0_4_;
        local_540._4_4_ = uVar126 & local_540._4_4_;
        local_540._8_4_ = uVar127 & local_540._8_4_;
        local_540._12_4_ = uVar128 & local_540._12_4_;
        local_540._16_4_ = uVar129 & local_540._16_4_;
        local_540._20_4_ = uVar130 & local_540._20_4_;
        local_540._24_4_ = uVar131 & local_540._24_4_;
        local_540._28_4_ = uVar132 & local_540._28_4_;
        auVar80._0_4_ = uVar123 & local_3c0._0_4_;
        auVar80._4_4_ = uVar126 & local_3c0._4_4_;
        auVar80._8_4_ = uVar127 & local_3c0._8_4_;
        auVar80._12_4_ = uVar128 & local_3c0._12_4_;
        auVar80._16_4_ = uVar129 & local_3c0._16_4_;
        auVar80._20_4_ = uVar130 & local_3c0._20_4_;
        auVar80._24_4_ = uVar131 & local_3c0._24_4_;
        auVar80._28_4_ = uVar132 & local_3c0._28_4_;
        if ((char)(uVar46 ^ 0xff) != -1) {
          auVar102._4_4_ = __real_00000002;
          auVar102._0_4_ = __real_00000002;
          auVar102._8_4_ = __real_00000002;
          auVar102._12_4_ = __real_00000002;
          auVar102._16_4_ = __real_00000002;
          auVar102._20_4_ = __real_00000002;
          auVar102._24_4_ = __real_00000002;
          auVar102._28_4_ = __real_00000002;
          auVar102 = vpcmpgtd_avx2(auVar102,auVar107);
          auVar102 = auVar102 ^ auVar105._0_32_;
          _local_3c0 = auVar80;
          if (param_6 <= 0.0) goto LAB_140adc117;
LAB_140adc08f:
          auVar88._0_4_ = auVar107._0_4_ + auVar105._0_4_;
          auVar88._4_4_ = auVar107._4_4_ + auVar105._4_4_;
          auVar88._8_4_ = auVar107._8_4_ + auVar105._8_4_;
          auVar88._12_4_ = auVar107._12_4_ + auVar105._12_4_;
          auVar88._16_4_ = auVar107._16_4_ + auVar105._16_4_;
          auVar88._20_4_ = auVar107._20_4_ + auVar105._20_4_;
          auVar88._24_4_ = auVar107._24_4_ + auVar105._24_4_;
          auVar88._28_4_ = auVar107._28_4_ + auVar105._28_4_;
          if (__real_3f800000 <= param_6) {
            auVar107 = vblendvps_avx(auVar66,auVar88,auVar102);
            in_ZMM5 = ZEXT3264(auVar107);
            local_540 = vblendvps_avx(local_540,auVar88,auVar102);
            auVar80 = ZEXT832(0) << 0x20;
          }
          else {
            auVar107 = vcvtdq2ps_avx(auVar88);
            auVar99._0_4_ = auVar107._0_4_ * param_6;
            auVar99._4_4_ = auVar107._4_4_ * param_6;
            auVar99._8_4_ = auVar107._8_4_ * param_6;
            auVar99._12_4_ = auVar107._12_4_ * param_6;
            auVar99._16_4_ = auVar107._16_4_ * param_6;
            auVar99._20_4_ = auVar107._20_4_ * param_6;
            auVar99._24_4_ = auVar107._24_4_ * param_6;
            auVar99._28_4_ = auVar107._28_4_ * param_6;
            auVar107 = vroundps_avx(auVar99,9);
            auVar80 = ZEXT832(0) << 0x20;
            if (param_7 != '\x01') {
              auVar80 = vsubps_avx(auVar99,auVar107);
            }
            auVar118._0_4_ = (int)auVar107._0_4_;
            auVar118._4_4_ = (int)auVar107._4_4_;
            auVar118._8_4_ = (int)auVar107._8_4_;
            auVar118._12_4_ = (int)auVar107._12_4_;
            auVar118._16_4_ = (int)auVar107._16_4_;
            auVar118._20_4_ = (int)auVar107._20_4_;
            auVar118._24_4_ = (int)auVar107._24_4_;
            auVar118._28_4_ = (int)auVar107._28_4_;
            auVar99 = vpminsd_avx2(auVar118,auVar88);
            auVar107 = vblendvps_avx(auVar66,auVar99,auVar102);
            in_ZMM5 = ZEXT3264(auVar107);
            auVar66 = vpcmpeqd_avx2(auVar99,auVar99);
            auVar107 = vpsubd_avx2(auVar107,auVar66);
            auVar66 = vpminsd_avx2(auVar107,auVar88);
            auVar107 = vpcmpeqd_avx2(auVar107,auVar107);
            auVar105 = ZEXT3264(auVar107);
            local_540 = vblendvps_avx(local_540,auVar66,auVar102);
          }
          goto LAB_140adc145;
        }
      }
      auVar63 = vpcmpeqd_avx(auVar64,auVar64);
      auVar64 = vpgatherqd((undefined1  [16])0x0,auVar63);
      auVar63 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
      auVar63 = vpgatherqd((undefined1  [16])0x0,auVar63);
      auVar70 = vpcmpeqd_avx2(auVar70,auVar70);
      auVar107 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
      auVar57 = vpand_avx2(auVar57,auVar139);
      auVar125._4_4_ = uVar55;
      auVar125._0_4_ = uVar55;
      auVar125._8_4_ = uVar55;
      auVar125._12_4_ = uVar55;
      auVar125._16_4_ = uVar55;
      auVar125._20_4_ = uVar55;
      auVar125._24_4_ = uVar55;
      auVar125._28_4_ = uVar55;
      auVar70 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar57 = vblendvps_avx(auVar70,auVar125,auVar57);
      auVar102 = in_ZMM5._0_32_;
      iVar49 = auVar57._0_4_;
      iVar51 = auVar57._4_4_;
      iVar52 = auVar57._8_4_;
      iVar53 = auVar57._12_4_;
      iVar56 = auVar57._16_4_;
      iVar84 = auVar57._20_4_;
      iVar85 = auVar57._24_4_;
      iVar86 = auVar57._28_4_;
      iVar106 = auVar107._0_4_;
      iVar111 = auVar107._4_4_;
      iVar112 = auVar107._8_4_;
      iVar113 = auVar107._12_4_;
      iVar114 = auVar107._16_4_;
      iVar115 = auVar107._20_4_;
      iVar116 = auVar107._24_4_;
      iVar117 = auVar107._28_4_;
      if (param_8 < 7) {
        auVar57 = vpmulld_avx2(auVar102,auVar145);
        switch(param_8) {
        case 0:
        case 1:
          auVar5._0_4_ = iVar106 + iVar49;
          auVar5._4_4_ = iVar111 + iVar51;
          auVar5._8_4_ = iVar112 + iVar52;
          auVar5._12_4_ = iVar113 + iVar53;
          auVar5._16_4_ = iVar114 + iVar56;
          auVar5._20_4_ = iVar115 + iVar84;
          auVar5._24_4_ = iVar116 + iVar85;
          auVar5._28_4_ = iVar117 + iVar86;
          auVar57 = vpcmpeqd_avx2(auVar5,auVar5);
          auVar153 = vgatherdps(ZEXT832(0),auVar57);
          auVar57 = vpcmpeqd_avx2(auVar105._0_32_,auVar105._0_32_);
          auVar58 = vgatherdps(ZEXT832(0),auVar57);
          auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar87._4_4_ = __real_00000008;
          auVar87._0_4_ = __real_00000008;
          auVar87._8_4_ = __real_00000008;
          auVar87._12_4_ = __real_00000008;
          auVar87._16_4_ = __real_00000008;
          auVar87._20_4_ = __real_00000008;
          auVar87._24_4_ = __real_00000008;
          auVar87._28_4_ = __real_00000008;
          auVar70 = vpcmpeqd_avx2(auVar87,auVar87);
          auVar124 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
          break;
        case 2:
          iVar4 = auVar57._0_4_ + iVar106 + iVar49;
          iVar36 = auVar57._4_4_ + iVar111 + iVar51;
          iVar37 = auVar57._8_4_ + iVar112 + iVar52;
          iVar38 = auVar57._12_4_ + iVar113 + iVar53;
          iVar39 = auVar57._16_4_ + iVar114 + iVar56;
          iVar40 = auVar57._20_4_ + iVar115 + iVar84;
          iVar41 = auVar57._24_4_ + iVar116 + iVar85;
          iVar42 = auVar57._28_4_ + iVar117 + iVar86;
          auVar65 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + iVar4)),
                                (uint)*(ushort *)(param_4 + iVar36),1);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar37),2);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar38),3);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar39),4);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar40),5);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar41),6);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar42),7);
          auVar2 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + (iVar4 + __real_00000002))),
                               (uint)*(ushort *)(param_4 + (iVar36 + __real_00000002)),1);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar37 + __real_00000002)),2);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar38 + __real_00000002)),3);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar39 + __real_00000002)),4);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar40 + __real_00000002)),5);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar41 + __real_00000002)),6);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar42 + __real_00000002)),7);
          auVar3 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + (iVar4 + iVar47))),
                               (uint)*(ushort *)(param_4 + (iVar36 + iVar47)),1);
          auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar37 + iVar47)),2);
          auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar38 + iVar47)),3);
          auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar39 + iVar47)),4);
          auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar40 + iVar47)),5);
          auVar57 = vpmovzxwd_avx2(auVar65);
          auVar133._0_4_ = auVar57._0_4_ + __real_ffff8001;
          auVar133._4_4_ = auVar57._4_4_ + __real_ffff8001;
          auVar133._8_4_ = auVar57._8_4_ + __real_ffff8001;
          auVar133._12_4_ = auVar57._12_4_ + __real_ffff8001;
          auVar133._16_4_ = auVar57._16_4_ + __real_ffff8001;
          auVar133._20_4_ = auVar57._20_4_ + __real_ffff8001;
          auVar133._24_4_ = auVar57._24_4_ + __real_ffff8001;
          auVar133._28_4_ = auVar57._28_4_ + __real_ffff8001;
          auVar57 = vcvtdq2ps_avx(auVar133);
          auVar98._4_4_ = __real_46fffe00;
          auVar98._0_4_ = __real_46fffe00;
          auVar98._8_4_ = __real_46fffe00;
          auVar98._12_4_ = __real_46fffe00;
          auVar98._16_4_ = __real_46fffe00;
          auVar98._20_4_ = __real_46fffe00;
          auVar98._24_4_ = __real_46fffe00;
          auVar98._28_4_ = __real_46fffe00;
          auVar70 = vdivps_avx(auVar57,auVar98);
          auVar65 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar41 + iVar47)),6);
          auVar57 = vpmovzxwd_avx2(auVar2);
          auVar6._0_4_ = auVar57._0_4_ + __real_ffff8001;
          auVar6._4_4_ = auVar57._4_4_ + __real_ffff8001;
          auVar6._8_4_ = auVar57._8_4_ + __real_ffff8001;
          auVar6._12_4_ = auVar57._12_4_ + __real_ffff8001;
          auVar6._16_4_ = auVar57._16_4_ + __real_ffff8001;
          auVar6._20_4_ = auVar57._20_4_ + __real_ffff8001;
          auVar6._24_4_ = auVar57._24_4_ + __real_ffff8001;
          auVar6._28_4_ = auVar57._28_4_ + __real_ffff8001;
          auVar57 = vcvtdq2ps_avx(auVar6);
          auVar107 = vdivps_avx(auVar57,auVar98);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + (iVar42 + iVar47)),7);
          auVar57 = vpmovzxwd_avx2(auVar65);
          auVar7._0_4_ = auVar57._0_4_ + __real_ffff8001;
          auVar7._4_4_ = auVar57._4_4_ + __real_ffff8001;
          auVar7._8_4_ = auVar57._8_4_ + __real_ffff8001;
          auVar7._12_4_ = auVar57._12_4_ + __real_ffff8001;
          auVar7._16_4_ = auVar57._16_4_ + __real_ffff8001;
          auVar7._20_4_ = auVar57._20_4_ + __real_ffff8001;
          auVar7._24_4_ = auVar57._24_4_ + __real_ffff8001;
          auVar7._28_4_ = auVar57._28_4_ + __real_ffff8001;
          auVar57 = vcvtdq2ps_avx(auVar7);
          auVar66 = vdivps_avx(auVar57,auVar98);
          auVar57 = vpcmpeqd_avx2(auVar98,auVar98);
          auVar153._0_4_ = auVar70._0_4_ * __real_43000000;
          auVar153._4_4_ = auVar70._4_4_ * __real_43000000;
          auVar153._8_4_ = auVar70._8_4_ * __real_43000000;
          auVar153._12_4_ = auVar70._12_4_ * __real_43000000;
          auVar153._16_4_ = auVar70._16_4_ * __real_43000000;
          auVar153._20_4_ = auVar70._20_4_ * __real_43000000;
          auVar153._24_4_ = auVar70._24_4_ * __real_43000000;
          auVar153._28_4_ = auVar70._28_4_ * __real_43000000;
          auVar58._0_4_ = auVar107._0_4_ * __real_43000000;
          auVar58._4_4_ = auVar107._4_4_ * __real_43000000;
          auVar58._8_4_ = auVar107._8_4_ * __real_43000000;
          auVar58._12_4_ = auVar107._12_4_ * __real_43000000;
          auVar58._16_4_ = auVar107._16_4_ * __real_43000000;
          auVar58._20_4_ = auVar107._20_4_ * __real_43000000;
          auVar58._24_4_ = auVar107._24_4_ * __real_43000000;
          auVar58._28_4_ = auVar107._28_4_ * __real_43000000;
          auVar124._0_4_ = auVar66._0_4_ * __real_43000000;
          auVar124._4_4_ = auVar66._4_4_ * __real_43000000;
          auVar124._8_4_ = auVar66._8_4_ * __real_43000000;
          auVar124._12_4_ = auVar66._12_4_ * __real_43000000;
          auVar124._16_4_ = auVar66._16_4_ * __real_43000000;
          auVar124._20_4_ = auVar66._20_4_ * __real_43000000;
          auVar124._24_4_ = auVar66._24_4_ * __real_43000000;
          auVar124._28_4_ = auVar66._28_4_ * __real_43000000;
          break;
        case 3:
          auVar57 = vpcmpeqd_avx2(auVar70,auVar70);
          auVar107 = vgatherdps(ZEXT832(0) << 0x20,auVar57);
          auVar57 = vpcmpeqd_avx2(local_540,local_540);
          auVar118 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar57);
          auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar133 = vgatherdps(ZEXT432(0) << 0x20,auVar57);
          auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar99 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
          auVar57 = vpcmpeqd_avx2(auVar139,auVar139);
          auVar88 = vgatherdps(ZEXT832(0),auVar57);
          auVar57 = vpcmpeqd_avx2(auVar145,auVar145);
          auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
          auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar57 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
          auVar125 = vpsrld_avx2(auVar57,0x15);
          auVar70 = vpsrld_avx2(auVar57,10);
          auVar154._4_4_ = __real_000007ff;
          auVar154._0_4_ = __real_000007ff;
          auVar154._8_4_ = __real_000007ff;
          auVar154._12_4_ = __real_000007ff;
          auVar154._16_4_ = __real_000007ff;
          auVar154._20_4_ = __real_000007ff;
          auVar154._24_4_ = __real_000007ff;
          auVar154._28_4_ = __real_000007ff;
          auVar70 = vpand_avx2(auVar70,auVar154);
          auVar155._4_4_ = __real_000003ff;
          auVar155._0_4_ = __real_000003ff;
          auVar155._8_4_ = __real_000003ff;
          auVar155._12_4_ = __real_000003ff;
          auVar155._16_4_ = __real_000003ff;
          auVar155._20_4_ = __real_000003ff;
          auVar155._24_4_ = __real_000003ff;
          auVar155._28_4_ = __real_000003ff;
          auVar57 = vpand_avx2(auVar57,auVar155);
          auVar119._0_4_ = auVar57._0_4_ + __real_fffffe01;
          auVar119._4_4_ = auVar57._4_4_ + __real_fffffe01;
          auVar119._8_4_ = auVar57._8_4_ + __real_fffffe01;
          auVar119._12_4_ = auVar57._12_4_ + __real_fffffe01;
          auVar119._16_4_ = auVar57._16_4_ + __real_fffffe01;
          auVar119._20_4_ = auVar57._20_4_ + __real_fffffe01;
          auVar119._24_4_ = auVar57._24_4_ + __real_fffffe01;
          auVar119._28_4_ = auVar57._28_4_ + __real_fffffe01;
          auVar57 = vcvtdq2ps_avx(auVar119);
          auVar156._4_4_ = __real_43ff8000;
          auVar156._0_4_ = __real_43ff8000;
          auVar156._8_4_ = __real_43ff8000;
          auVar156._12_4_ = __real_43ff8000;
          auVar156._16_4_ = __real_43ff8000;
          auVar156._20_4_ = __real_43ff8000;
          auVar156._24_4_ = __real_43ff8000;
          auVar156._28_4_ = __real_43ff8000;
          auVar57 = vdivps_avx(auVar57,auVar156);
          auVar153._0_4_ = auVar99._0_4_ * auVar57._0_4_ + auVar107._0_4_;
          auVar153._4_4_ = auVar99._4_4_ * auVar57._4_4_ + auVar107._4_4_;
          auVar153._8_4_ = auVar99._8_4_ * auVar57._8_4_ + auVar107._8_4_;
          auVar153._12_4_ = auVar99._12_4_ * auVar57._12_4_ + auVar107._12_4_;
          auVar153._16_4_ = auVar99._16_4_ * auVar57._16_4_ + auVar107._16_4_;
          auVar153._20_4_ = auVar99._20_4_ * auVar57._20_4_ + auVar107._20_4_;
          auVar153._24_4_ = auVar99._24_4_ * auVar57._24_4_ + auVar107._24_4_;
          auVar153._28_4_ = auVar99._28_4_ * auVar57._28_4_ + auVar107._28_4_;
          auVar141._0_4_ = auVar70._0_4_ + __real_fffffc01;
          auVar141._4_4_ = auVar70._4_4_ + __real_fffffc01;
          auVar141._8_4_ = auVar70._8_4_ + __real_fffffc01;
          auVar141._12_4_ = auVar70._12_4_ + __real_fffffc01;
          auVar141._16_4_ = auVar70._16_4_ + __real_fffffc01;
          auVar141._20_4_ = auVar70._20_4_ + __real_fffffc01;
          auVar141._24_4_ = auVar70._24_4_ + __real_fffffc01;
          auVar141._28_4_ = auVar70._28_4_ + __real_fffffc01;
          auVar57 = vcvtdq2ps_avx(auVar141);
          auVar140._4_4_ = __real_447fc000;
          auVar140._0_4_ = __real_447fc000;
          auVar140._8_4_ = __real_447fc000;
          auVar140._12_4_ = __real_447fc000;
          auVar140._16_4_ = __real_447fc000;
          auVar140._20_4_ = __real_447fc000;
          auVar140._24_4_ = __real_447fc000;
          auVar140._28_4_ = __real_447fc000;
          auVar70 = vdivps_avx(auVar57,auVar140);
          auVar8._0_4_ = auVar125._0_4_ + __real_fffffc01;
          auVar8._4_4_ = auVar125._4_4_ + __real_fffffc01;
          auVar8._8_4_ = auVar125._8_4_ + __real_fffffc01;
          auVar8._12_4_ = auVar125._12_4_ + __real_fffffc01;
          auVar8._16_4_ = auVar125._16_4_ + __real_fffffc01;
          auVar8._20_4_ = auVar125._20_4_ + __real_fffffc01;
          auVar8._24_4_ = auVar125._24_4_ + __real_fffffc01;
          auVar8._28_4_ = auVar125._28_4_ + __real_fffffc01;
          auVar57 = vcvtdq2ps_avx(auVar8);
          auVar107 = vdivps_avx(auVar57,auVar140);
          auVar57 = vpcmpeqd_avx2(auVar57,auVar57);
          auVar58._0_4_ = auVar88._0_4_ * auVar70._0_4_ + auVar118._0_4_;
          auVar58._4_4_ = auVar88._4_4_ * auVar70._4_4_ + auVar118._4_4_;
          auVar58._8_4_ = auVar88._8_4_ * auVar70._8_4_ + auVar118._8_4_;
          auVar58._12_4_ = auVar88._12_4_ * auVar70._12_4_ + auVar118._12_4_;
          auVar58._16_4_ = auVar88._16_4_ * auVar70._16_4_ + auVar118._16_4_;
          auVar58._20_4_ = auVar88._20_4_ * auVar70._20_4_ + auVar118._20_4_;
          auVar58._24_4_ = auVar88._24_4_ * auVar70._24_4_ + auVar118._24_4_;
          auVar58._28_4_ = auVar88._28_4_ * auVar70._28_4_ + auVar118._28_4_;
          auVar124._0_4_ = auVar66._0_4_ * auVar107._0_4_ + auVar133._0_4_;
          auVar124._4_4_ = auVar66._4_4_ * auVar107._4_4_ + auVar133._4_4_;
          auVar124._8_4_ = auVar66._8_4_ * auVar107._8_4_ + auVar133._8_4_;
          auVar124._12_4_ = auVar66._12_4_ * auVar107._12_4_ + auVar133._12_4_;
          auVar124._16_4_ = auVar66._16_4_ * auVar107._16_4_ + auVar133._16_4_;
          auVar124._20_4_ = auVar66._20_4_ * auVar107._20_4_ + auVar133._20_4_;
          auVar124._24_4_ = auVar66._24_4_ * auVar107._24_4_ + auVar133._24_4_;
          auVar124._28_4_ = auVar66._28_4_ * auVar107._28_4_ + auVar133._28_4_;
          break;
        default:
          goto switchD_140adc1b2_caseD_4;
        }
        auVar105 = ZEXT3264(auVar57);
        auVar107 = auVar124;
        auVar70 = auVar58;
        auVar66 = auVar153;
        auVar88 = auVar58;
        auVar57 = auVar153;
      }
      else {
switchD_140adc1b2_caseD_4:
        auVar58 = ZEXT832(0) << 0x20;
        auVar153 = ZEXT832(0) << 0x20;
        auVar124 = auVar58;
        auVar107 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar70 = ZEXT832(0) << 0x20;
        auVar66 = ZEXT832(0);
        auVar88 = ZEXT832(0) << 0x20;
        auVar57 = SUB6432(ZEXT864(0),0);
      }
      if (auVar102 != local_540) {
        auVar57 = vpcmpeqd_avx2(auVar102,local_540);
        auVar102 = auVar57 ^ auVar105._0_32_;
        if (param_8 < 7) {
          auVar70 = vpmulld_avx2(local_540,auVar145);
          switch(param_8) {
          case 0:
          case 1:
            auVar57 = vgatherdps(ZEXT832(0) << 0x20,auVar102);
            auVar99 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar70 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            local_380 = vmaskmovps_avx(auVar102,auVar57);
            local_360 = vmaskmovps_avx(auVar102,auVar99);
            auVar57 = vpcmpeqd_avx2(auVar99,auVar99);
            auVar105 = ZEXT3264(auVar57);
            local_340 = vmaskmovps_avx(auVar102,auVar70);
            break;
          case 2:
            auVar9._0_4_ = iVar106 + auVar70._0_4_ + iVar49;
            auVar9._4_4_ = iVar111 + auVar70._4_4_ + iVar51;
            auVar9._8_4_ = iVar112 + auVar70._8_4_ + iVar52;
            auVar9._12_4_ = iVar113 + auVar70._12_4_ + iVar53;
            auVar9._16_4_ = iVar114 + auVar70._16_4_ + iVar56;
            auVar9._20_4_ = iVar115 + auVar70._20_4_ + iVar84;
            auVar9._24_4_ = iVar116 + auVar70._24_4_ + iVar85;
            auVar9._28_4_ = iVar117 + auVar70._28_4_ + iVar86;
            auVar70 = vpandn_avx2(auVar57,auVar9);
            auVar65 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar70._0_4_)),
                                  (uint)*(ushort *)(param_4 + auVar70._4_4_),1);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._8_4_),2);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._12_4_),3);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._16_4_),4);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._20_4_),5);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._24_4_),6);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._28_4_),7);
            auVar10._0_4_ = auVar9._0_4_ + __real_00000002;
            auVar10._4_4_ = auVar9._4_4_ + __real_00000002;
            auVar10._8_4_ = auVar9._8_4_ + __real_00000002;
            auVar10._12_4_ = auVar9._12_4_ + __real_00000002;
            auVar10._16_4_ = auVar9._16_4_ + __real_00000002;
            auVar10._20_4_ = auVar9._20_4_ + __real_00000002;
            auVar10._24_4_ = auVar9._24_4_ + __real_00000002;
            auVar10._28_4_ = auVar9._28_4_ + __real_00000002;
            auVar70 = vpandn_avx2(auVar57,auVar10);
            auVar2 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar70._0_4_)),
                                 (uint)*(ushort *)(param_4 + auVar70._4_4_),1);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._8_4_),2);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._12_4_),3);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._16_4_),4);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._20_4_),5);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._24_4_),6);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._28_4_),7);
            auVar11._0_4_ = auVar9._0_4_ + iVar47;
            auVar11._4_4_ = auVar9._4_4_ + iVar47;
            auVar11._8_4_ = auVar9._8_4_ + iVar47;
            auVar11._12_4_ = auVar9._12_4_ + iVar47;
            auVar11._16_4_ = auVar9._16_4_ + iVar47;
            auVar11._20_4_ = auVar9._20_4_ + iVar47;
            auVar11._24_4_ = auVar9._24_4_ + iVar47;
            auVar11._28_4_ = auVar9._28_4_ + iVar47;
            auVar66 = vpandn_avx2(auVar57,auVar11);
            auVar3 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar66._0_4_)),
                                 (uint)*(ushort *)(param_4 + auVar66._4_4_),1);
            auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._8_4_),2);
            auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._12_4_),3);
            auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._16_4_),4);
            auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._20_4_),5);
            auVar57 = vpmovzxwd_avx2(auVar65);
            auVar12._0_4_ = auVar57._0_4_ + __real_ffff8001;
            auVar12._4_4_ = auVar57._4_4_ + __real_ffff8001;
            auVar12._8_4_ = auVar57._8_4_ + __real_ffff8001;
            auVar12._12_4_ = auVar57._12_4_ + __real_ffff8001;
            auVar12._16_4_ = auVar57._16_4_ + __real_ffff8001;
            auVar12._20_4_ = auVar57._20_4_ + __real_ffff8001;
            auVar12._24_4_ = auVar57._24_4_ + __real_ffff8001;
            auVar12._28_4_ = auVar57._28_4_ + __real_ffff8001;
            auVar57 = vcvtdq2ps_avx(auVar12);
            auVar89._4_4_ = __real_46fffe00;
            auVar89._0_4_ = __real_46fffe00;
            auVar89._8_4_ = __real_46fffe00;
            auVar89._12_4_ = __real_46fffe00;
            auVar89._16_4_ = __real_46fffe00;
            auVar89._20_4_ = __real_46fffe00;
            auVar89._24_4_ = __real_46fffe00;
            auVar89._28_4_ = __real_46fffe00;
            auVar70 = vdivps_avx(auVar57,auVar89);
            auVar65 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._24_4_),6);
            auVar57 = vpmovzxwd_avx2(auVar2);
            auVar13._0_4_ = auVar57._0_4_ + __real_ffff8001;
            auVar13._4_4_ = auVar57._4_4_ + __real_ffff8001;
            auVar13._8_4_ = auVar57._8_4_ + __real_ffff8001;
            auVar13._12_4_ = auVar57._12_4_ + __real_ffff8001;
            auVar13._16_4_ = auVar57._16_4_ + __real_ffff8001;
            auVar13._20_4_ = auVar57._20_4_ + __real_ffff8001;
            auVar13._24_4_ = auVar57._24_4_ + __real_ffff8001;
            auVar13._28_4_ = auVar57._28_4_ + __real_ffff8001;
            auVar57 = vcvtdq2ps_avx(auVar13);
            auVar107 = vdivps_avx(auVar57,auVar89);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar66._28_4_),7);
            auVar57 = vpmovzxwd_avx2(auVar65);
            auVar14._0_4_ = auVar57._0_4_ + __real_ffff8001;
            auVar14._4_4_ = auVar57._4_4_ + __real_ffff8001;
            auVar14._8_4_ = auVar57._8_4_ + __real_ffff8001;
            auVar14._12_4_ = auVar57._12_4_ + __real_ffff8001;
            auVar14._16_4_ = auVar57._16_4_ + __real_ffff8001;
            auVar14._20_4_ = auVar57._20_4_ + __real_ffff8001;
            auVar14._24_4_ = auVar57._24_4_ + __real_ffff8001;
            auVar14._28_4_ = auVar57._28_4_ + __real_ffff8001;
            auVar57 = vcvtdq2ps_avx(auVar14);
            auVar57 = vdivps_avx(auVar57,auVar89);
            auVar59._0_4_ = auVar70._0_4_ * __real_43000000;
            auVar59._4_4_ = auVar70._4_4_ * __real_43000000;
            auVar59._8_4_ = auVar70._8_4_ * __real_43000000;
            auVar59._12_4_ = auVar70._12_4_ * __real_43000000;
            auVar59._16_4_ = auVar70._16_4_ * __real_43000000;
            auVar59._20_4_ = auVar70._20_4_ * __real_43000000;
            auVar59._24_4_ = auVar70._24_4_ * __real_43000000;
            auVar59._28_4_ = auVar70._28_4_ * __real_43000000;
            auVar90._0_4_ = auVar107._0_4_ * __real_43000000;
            auVar90._4_4_ = auVar107._4_4_ * __real_43000000;
            auVar90._8_4_ = auVar107._8_4_ * __real_43000000;
            auVar90._12_4_ = auVar107._12_4_ * __real_43000000;
            auVar90._16_4_ = auVar107._16_4_ * __real_43000000;
            auVar90._20_4_ = auVar107._20_4_ * __real_43000000;
            auVar90._24_4_ = auVar107._24_4_ * __real_43000000;
            auVar90._28_4_ = auVar107._28_4_ * __real_43000000;
            auVar70 = vpcmpeqd_avx2(auVar107,auVar107);
            auVar105 = ZEXT3264(auVar70);
            auVar68._0_4_ = auVar57._0_4_ * __real_43000000;
            auVar68._4_4_ = auVar57._4_4_ * __real_43000000;
            auVar68._8_4_ = auVar57._8_4_ * __real_43000000;
            auVar68._12_4_ = auVar57._12_4_ * __real_43000000;
            auVar68._16_4_ = auVar57._16_4_ * __real_43000000;
            auVar68._20_4_ = auVar57._20_4_ * __real_43000000;
            auVar68._24_4_ = auVar57._24_4_ * __real_43000000;
            auVar68._28_4_ = auVar57._28_4_ * __real_43000000;
            local_380 = vmaskmovps_avx(auVar102,auVar59);
            local_360 = vmaskmovps_avx(auVar102,auVar90);
            local_340 = vmaskmovps_avx(auVar102,auVar68);
            auVar66 = auVar153;
            auVar88 = auVar58;
            auVar107 = auVar124;
            break;
          case 3:
            auVar125 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar153 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar119 = vgatherdps(ZEXT832(0) << 0x20,auVar102);
            auVar58 = vgatherdps(ZEXT832(0),auVar102);
            auVar99 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar141 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar57 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar118 = vpsrld_avx2(auVar57,0x15);
            auVar124 = vpsrld_avx2(auVar57,10);
            auVar134._4_4_ = __real_000007ff;
            auVar134._0_4_ = __real_000007ff;
            auVar134._8_4_ = __real_000007ff;
            auVar134._12_4_ = __real_000007ff;
            auVar134._16_4_ = __real_000007ff;
            auVar134._20_4_ = __real_000007ff;
            auVar134._24_4_ = __real_000007ff;
            auVar134._28_4_ = __real_000007ff;
            auVar146._4_4_ = __real_000003ff;
            auVar146._0_4_ = __real_000003ff;
            auVar146._8_4_ = __real_000003ff;
            auVar146._12_4_ = __real_000003ff;
            auVar146._16_4_ = __real_000003ff;
            auVar146._20_4_ = __real_000003ff;
            auVar146._24_4_ = __real_000003ff;
            auVar146._28_4_ = __real_000003ff;
            auVar57 = vpand_avx2(auVar146,auVar57);
            auVar15._0_4_ = __real_fffffe01 + auVar57._0_4_;
            auVar15._4_4_ = __real_fffffe01 + auVar57._4_4_;
            auVar15._8_4_ = __real_fffffe01 + auVar57._8_4_;
            auVar15._12_4_ = __real_fffffe01 + auVar57._12_4_;
            auVar15._16_4_ = __real_fffffe01 + auVar57._16_4_;
            auVar15._20_4_ = __real_fffffe01 + auVar57._20_4_;
            auVar15._24_4_ = __real_fffffe01 + auVar57._24_4_;
            auVar15._28_4_ = __real_fffffe01 + auVar57._28_4_;
            auVar57 = vcvtdq2ps_avx(auVar15);
            auVar147._4_4_ = __real_43ff8000;
            auVar147._0_4_ = __real_43ff8000;
            auVar147._8_4_ = __real_43ff8000;
            auVar147._12_4_ = __real_43ff8000;
            auVar147._16_4_ = __real_43ff8000;
            auVar147._20_4_ = __real_43ff8000;
            auVar147._24_4_ = __real_43ff8000;
            auVar147._28_4_ = __real_43ff8000;
            auVar70 = vdivps_avx(auVar57,auVar147);
            auVar57 = vpand_avx2(auVar124,auVar134);
            auVar16._0_4_ = auVar57._0_4_ + __real_fffffc01;
            auVar16._4_4_ = auVar57._4_4_ + __real_fffffc01;
            auVar16._8_4_ = auVar57._8_4_ + __real_fffffc01;
            auVar16._12_4_ = auVar57._12_4_ + __real_fffffc01;
            auVar16._16_4_ = auVar57._16_4_ + __real_fffffc01;
            auVar16._20_4_ = auVar57._20_4_ + __real_fffffc01;
            auVar16._24_4_ = auVar57._24_4_ + __real_fffffc01;
            auVar16._28_4_ = auVar57._28_4_ + __real_fffffc01;
            auVar57 = vcvtdq2ps_avx(auVar16);
            auVar148._4_4_ = __real_447fc000;
            auVar148._0_4_ = __real_447fc000;
            auVar148._8_4_ = __real_447fc000;
            auVar148._12_4_ = __real_447fc000;
            auVar148._16_4_ = __real_447fc000;
            auVar148._20_4_ = __real_447fc000;
            auVar148._24_4_ = __real_447fc000;
            auVar148._28_4_ = __real_447fc000;
            auVar57 = vdivps_avx(auVar57,auVar148);
            local_2c0 = auVar125._0_4_;
            auVar91._0_4_ = auVar58._0_4_ * auVar70._0_4_ + local_2c0;
            fStack_2bc = auVar125._4_4_;
            auVar91._4_4_ = auVar58._4_4_ * auVar70._4_4_ + fStack_2bc;
            fStack_2b8 = auVar125._8_4_;
            auVar91._8_4_ = auVar58._8_4_ * auVar70._8_4_ + fStack_2b8;
            fStack_2b4 = auVar125._12_4_;
            auVar91._12_4_ = auVar58._12_4_ * auVar70._12_4_ + fStack_2b4;
            fStack_2b0 = auVar125._16_4_;
            auVar91._16_4_ = auVar58._16_4_ * auVar70._16_4_ + fStack_2b0;
            fStack_2ac = auVar125._20_4_;
            auVar91._20_4_ = auVar58._20_4_ * auVar70._20_4_ + fStack_2ac;
            fStack_2a8 = auVar125._24_4_;
            auVar91._24_4_ = auVar58._24_4_ * auVar70._24_4_ + fStack_2a8;
            fStack_2a4 = auVar125._28_4_;
            auVar91._28_4_ = auVar58._28_4_ * auVar70._28_4_ + fStack_2a4;
            auVar70 = vpcmpeqd_avx2(auVar58,auVar58);
            auVar105 = ZEXT3264(auVar70);
            local_2e0 = auVar153._0_4_;
            auVar108._0_4_ = auVar99._0_4_ * auVar57._0_4_ + local_2e0;
            fStack_2dc = auVar153._4_4_;
            auVar108._4_4_ = auVar99._4_4_ * auVar57._4_4_ + fStack_2dc;
            fStack_2d8 = auVar153._8_4_;
            auVar108._8_4_ = auVar99._8_4_ * auVar57._8_4_ + fStack_2d8;
            fStack_2d4 = auVar153._12_4_;
            auVar108._12_4_ = auVar99._12_4_ * auVar57._12_4_ + fStack_2d4;
            fStack_2d0 = auVar153._16_4_;
            auVar108._16_4_ = auVar99._16_4_ * auVar57._16_4_ + fStack_2d0;
            fStack_2cc = auVar153._20_4_;
            auVar108._20_4_ = auVar99._20_4_ * auVar57._20_4_ + fStack_2cc;
            fStack_2c8 = auVar153._24_4_;
            auVar108._24_4_ = auVar99._24_4_ * auVar57._24_4_ + fStack_2c8;
            fStack_2c4 = auVar153._28_4_;
            auVar108._28_4_ = auVar99._28_4_ * auVar57._28_4_ + fStack_2c4;
            auVar17._0_4_ = __real_fffffc01 + auVar118._0_4_;
            auVar17._4_4_ = __real_fffffc01 + auVar118._4_4_;
            auVar17._8_4_ = __real_fffffc01 + auVar118._8_4_;
            auVar17._12_4_ = __real_fffffc01 + auVar118._12_4_;
            auVar17._16_4_ = __real_fffffc01 + auVar118._16_4_;
            auVar17._20_4_ = __real_fffffc01 + auVar118._20_4_;
            auVar17._24_4_ = __real_fffffc01 + auVar118._24_4_;
            auVar17._28_4_ = __real_fffffc01 + auVar118._28_4_;
            auVar57 = vcvtdq2ps_avx(auVar17);
            auVar57 = vdivps_avx(auVar57,auVar148);
            auVar67._0_4_ = auVar141._0_4_ * auVar57._0_4_ + auVar119._0_4_;
            auVar67._4_4_ = auVar141._4_4_ * auVar57._4_4_ + auVar119._4_4_;
            auVar67._8_4_ = auVar141._8_4_ * auVar57._8_4_ + auVar119._8_4_;
            auVar67._12_4_ = auVar141._12_4_ * auVar57._12_4_ + auVar119._12_4_;
            auVar67._16_4_ = auVar141._16_4_ * auVar57._16_4_ + auVar119._16_4_;
            auVar67._20_4_ = auVar141._20_4_ * auVar57._20_4_ + auVar119._20_4_;
            auVar67._24_4_ = auVar141._24_4_ * auVar57._24_4_ + auVar119._24_4_;
            auVar67._28_4_ = auVar141._28_4_ * auVar57._28_4_ + auVar119._28_4_;
            local_380 = vmaskmovps_avx(auVar102,auVar91);
            local_360 = vmaskmovps_avx(auVar102,auVar108);
            goto LAB_140adca76;
          default:
            goto switchD_140adc614_caseD_4;
          }
        }
        else {
switchD_140adc614_caseD_4:
          auVar67 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          local_380 = vmaskmovps_avx(auVar102,auVar67);
          local_360 = vmaskmovps_avx(auVar102,auVar67);
LAB_140adca76:
          local_340 = vmaskmovps_avx(auVar102,auVar67);
        }
        auVar57 = vsubps_avx(local_380,auVar66);
        auVar70 = vsubps_avx(local_360,auVar88);
        auVar99 = vsubps_avx(local_340,auVar107);
        local_3c0._0_4_ = auVar80._0_4_;
        local_3c0._4_4_ = auVar80._4_4_;
        fStack_3b8 = auVar80._8_4_;
        fStack_3b4 = auVar80._12_4_;
        fStack_3b0 = auVar80._16_4_;
        fStack_3ac = auVar80._20_4_;
        fStack_3a8 = auVar80._24_4_;
        fStack_3a4 = auVar80._28_4_;
        auVar69._0_4_ = (float)local_3c0._0_4_ * auVar57._0_4_ + auVar66._0_4_;
        auVar69._4_4_ = (float)local_3c0._4_4_ * auVar57._4_4_ + auVar66._4_4_;
        auVar69._8_4_ = fStack_3b8 * auVar57._8_4_ + auVar66._8_4_;
        auVar69._12_4_ = fStack_3b4 * auVar57._12_4_ + auVar66._12_4_;
        auVar69._16_4_ = fStack_3b0 * auVar57._16_4_ + auVar66._16_4_;
        auVar69._20_4_ = fStack_3ac * auVar57._20_4_ + auVar66._20_4_;
        auVar69._24_4_ = fStack_3a8 * auVar57._24_4_ + auVar66._24_4_;
        auVar69._28_4_ = fStack_3a4 * auVar57._28_4_ + auVar66._28_4_;
        auVar77._0_4_ = (float)local_3c0._0_4_ * auVar70._0_4_ + auVar88._0_4_;
        auVar77._4_4_ = (float)local_3c0._4_4_ * auVar70._4_4_ + auVar88._4_4_;
        auVar77._8_4_ = fStack_3b8 * auVar70._8_4_ + auVar88._8_4_;
        auVar77._12_4_ = fStack_3b4 * auVar70._12_4_ + auVar88._12_4_;
        auVar77._16_4_ = fStack_3b0 * auVar70._16_4_ + auVar88._16_4_;
        auVar77._20_4_ = fStack_3ac * auVar70._20_4_ + auVar88._20_4_;
        auVar77._24_4_ = fStack_3a8 * auVar70._24_4_ + auVar88._24_4_;
        auVar77._28_4_ = fStack_3a4 * auVar70._28_4_ + auVar88._28_4_;
        auVar92._0_4_ = (float)local_3c0._0_4_ * auVar99._0_4_ + auVar107._0_4_;
        auVar92._4_4_ = (float)local_3c0._4_4_ * auVar99._4_4_ + auVar107._4_4_;
        auVar92._8_4_ = fStack_3b8 * auVar99._8_4_ + auVar107._8_4_;
        auVar92._12_4_ = fStack_3b4 * auVar99._12_4_ + auVar107._12_4_;
        auVar92._16_4_ = fStack_3b0 * auVar99._16_4_ + auVar107._16_4_;
        auVar92._20_4_ = fStack_3ac * auVar99._20_4_ + auVar107._20_4_;
        auVar92._24_4_ = fStack_3a8 * auVar99._24_4_ + auVar107._24_4_;
        auVar92._28_4_ = fStack_3a4 * auVar99._28_4_ + auVar107._28_4_;
        auVar57 = vmaskmovps_avx(auVar102,auVar69);
        auVar70 = vmaskmovps_avx(auVar102,auVar77);
        auVar107 = vmaskmovps_avx(auVar102,auVar92);
      }
      local_220._16_16_ = ZEXT116(1) * auVar63;
      local_220._0_16_ = ZEXT116(0) * auVar63 | ZEXT116(1) * auVar64;
      auVar78._16_16_ = auVar70._0_16_;
      auVar78._0_16_ = auVar57._0_16_;
      auVar102 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000
                              ,auVar78);
      auVar66 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000
                             ,ZEXT1632(auVar107._0_16_));
      local_180 = vblendps_avx(auVar102,auVar66,0xcc);
      in_ZMM4 = ZEXT3264(___ymm_0000000000000000000000070000000300000000000000000000000600000002);
      auVar102 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002
                              ,auVar78);
      auVar66 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000
                             ,ZEXT1632(auVar107._0_16_));
      local_160 = vblendps_avx(auVar102,auVar66,0xcc);
      auVar57 = vperm2f128_avx(auVar57,auVar70,0x31);
      auVar70 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000
                             ,auVar57);
      auVar102 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000
                              ,ZEXT1632(auVar107._16_16_));
      local_140 = vblendps_avx(auVar70,auVar102,0xcc);
      auVar57 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002
                             ,auVar57);
      auVar70 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000
                             ,ZEXT1632(auVar107._16_16_));
      local_120 = vblendps_avx(auVar57,auVar70,0xcc);
      uVar50 = 0xff;
      do {
        uVar46 = 0;
        for (uVar43 = uVar50; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
          uVar46 = uVar46 + 1;
        }
        bVar1 = (byte)uVar46 & 0x3f;
        auVar57 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar46 << 4)));
        *(undefined1 (*) [32])
         (param_1 + 0x20 + (longlong)*(int *)(local_220 + (ulonglong)(uVar46 & 7) * 4) * 0x60) =
             auVar57;
        uVar50 = uVar50 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
      } while (uVar50 != 0);
      iVar45 = iVar45 + 8;
      _local_3c0 = auVar80;
    } while (iVar45 < (int)(uVar48 & 0xfffffff8));
    if ((int)param_9 <= iVar45) {
      return;
    }
  }
  auVar60._4_4_ = iVar45;
  auVar60._0_4_ = iVar45;
  auVar60._8_4_ = iVar45;
  auVar60._12_4_ = iVar45;
  auVar60._16_4_ = iVar45;
  auVar60._20_4_ = iVar45;
  auVar60._24_4_ = iVar45;
  auVar60._28_4_ = iVar45;
  auVar100 = vpor_avx2(auVar60,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar61._4_4_ = param_9;
  auVar61._0_4_ = param_9;
  auVar61._8_4_ = param_9;
  auVar61._12_4_ = param_9;
  auVar61._16_4_ = param_9;
  auVar61._20_4_ = param_9;
  auVar61._24_4_ = param_9;
  auVar61._28_4_ = param_9;
  auVar145 = vpcmpgtd_avx2(auVar61,auVar100);
  auVar100 = vpslld_avx2(auVar100,3);
  auVar149._4_4_ = __real_00000004;
  auVar149._0_4_ = __real_00000004;
  auVar149._8_4_ = __real_00000004;
  auVar149._12_4_ = __real_00000004;
  auVar149._16_4_ = __real_00000004;
  auVar149._20_4_ = __real_00000004;
  auVar149._24_4_ = __real_00000004;
  auVar149._28_4_ = __real_00000004;
  vpor_avx2(auVar149,auVar100);
  auVar100 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar145);
  auVar100 = vpslld_avx2(auVar100,4);
  vpor_avx2(auVar100,auVar149);
  auVar70 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
  auVar62._4_4_ = __real_00000001;
  auVar62._0_4_ = __real_00000001;
  auVar62._8_4_ = __real_00000001;
  auVar62._12_4_ = __real_00000001;
  auVar62._16_4_ = __real_00000001;
  auVar62._20_4_ = __real_00000001;
  auVar62._24_4_ = __real_00000001;
  auVar62._28_4_ = __real_00000001;
  auVar57 = vpcmpgtd_avx2(auVar70,auVar62);
  auVar139 = vpandn_avx2(auVar57,auVar145);
  iVar47 = vmovmskps_avx(auVar139);
  auVar100 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (iVar47 == 0) {
LAB_140adccb6:
    auVar102 = vpcmpeqd_avx2(auVar74,auVar74);
    auVar107 = auVar102 ^ auVar100;
    auVar100 = ZEXT1632((undefined1  [16])0x0);
    auVar139 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    if (0.0 < param_6) {
      auVar74._0_4_ = auVar102._0_4_ + auVar70._0_4_;
      auVar74._4_4_ = auVar102._4_4_ + auVar70._4_4_;
      auVar74._8_4_ = auVar102._8_4_ + auVar70._8_4_;
      auVar74._12_4_ = auVar102._12_4_ + auVar70._12_4_;
      auVar74._16_4_ = auVar102._16_4_ + auVar70._16_4_;
      auVar74._20_4_ = auVar102._20_4_ + auVar70._20_4_;
      auVar74._24_4_ = auVar102._24_4_ + auVar70._24_4_;
      auVar74._28_4_ = auVar102._28_4_ + auVar70._28_4_;
      if (__real_3f800000 <= param_6) {
        auVar100 = vpand_avx2(auVar107,auVar145);
        auVar100 = vblendvps_avx(auVar139,auVar74,auVar100);
        auVar74 = auVar100;
      }
      else {
        auVar100 = vcvtdq2ps_avx(auVar74);
        auVar135._0_4_ = param_6 * auVar100._0_4_;
        auVar135._4_4_ = param_6 * auVar100._4_4_;
        auVar135._8_4_ = param_6 * auVar100._8_4_;
        auVar135._12_4_ = param_6 * auVar100._12_4_;
        auVar135._16_4_ = param_6 * auVar100._16_4_;
        auVar135._20_4_ = param_6 * auVar100._20_4_;
        auVar135._24_4_ = param_6 * auVar100._24_4_;
        auVar135._28_4_ = param_6 * auVar100._28_4_;
        auVar102 = vpand_avx2(auVar107,auVar145);
        auVar70 = vroundps_avx(auVar135,9);
        auVar94._0_4_ = (int)auVar70._0_4_;
        auVar94._4_4_ = (int)auVar70._4_4_;
        auVar94._8_4_ = (int)auVar70._8_4_;
        auVar94._12_4_ = (int)auVar70._12_4_;
        auVar94._16_4_ = (int)auVar70._16_4_;
        auVar94._20_4_ = (int)auVar70._20_4_;
        auVar94._24_4_ = (int)auVar70._24_4_;
        auVar94._28_4_ = (int)auVar70._28_4_;
        auVar100 = vpminsd_avx2(auVar94,auVar74);
        auVar100 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar100,auVar102);
        if (param_7 != '\x01') {
          auVar139 = vsubps_avx(auVar135,auVar70);
        }
        auVar70 = vpcmpeqd_avx2(auVar135,auVar135);
        auVar70 = vpsubd_avx2(auVar100,auVar70);
        auVar74 = vpminsd_avx2(auVar70,auVar74);
        auVar74 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74,auVar102);
      }
    }
    auVar139 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar139,auVar107);
  }
  else {
    uVar55 = vmovmskps_avx(auVar145);
    if ((char)uVar55 != (char)iVar47) {
      auVar63 = vpackssdw_avx(auVar139._0_16_,auVar139._16_16_);
      auVar100 = vpmovsxwd_avx2(auVar63);
      goto LAB_140adccb6;
    }
    auVar139 = ZEXT1232(ZEXT812(0));
    auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  }
  local_240 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
  auVar70 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar145);
  iVar47 = -(uint)(param_8 == 3);
  auVar101._4_4_ = iVar47;
  auVar101._0_4_ = iVar47;
  auVar101._8_4_ = iVar47;
  auVar101._12_4_ = iVar47;
  auVar101._16_4_ = iVar47;
  auVar101._20_4_ = iVar47;
  auVar101._24_4_ = iVar47;
  auVar101._28_4_ = iVar47;
  auVar57 = vpand_avx2(auVar57,auVar101);
  auVar109._4_4_ = __real_00000018;
  auVar109._0_4_ = __real_00000018;
  auVar109._8_4_ = __real_00000018;
  auVar109._12_4_ = __real_00000018;
  auVar109._16_4_ = __real_00000018;
  auVar109._20_4_ = __real_00000018;
  auVar109._24_4_ = __real_00000018;
  auVar109._28_4_ = __real_00000018;
  auVar102 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar57 = vblendvps_avx(auVar102,auVar109,auVar57);
  auVar110._4_4_ = iVar54;
  auVar110._0_4_ = iVar54;
  auVar110._8_4_ = iVar54;
  auVar110._12_4_ = iVar54;
  auVar110._16_4_ = iVar54;
  auVar110._20_4_ = iVar54;
  auVar110._24_4_ = iVar54;
  auVar110._28_4_ = iVar54;
  if (param_8 < 7) {
    auVar107 = vpmulld_avx2(auVar100,auVar110);
    switch(param_8) {
    default:
      auVar107 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar102 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      local_500 = vmaskmovps_avx(auVar145,auVar107);
      local_4e0 = vmaskmovps_avx(auVar145,auVar66);
      local_4c0._0_32_ = vmaskmovps_avx(auVar145,auVar102);
      auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
      auVar100 = auVar145 & ~auVar102;
      if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
            (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
          (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140add6f0;
      break;
    case 2:
      auVar18._0_4_ = auVar107._0_4_ + auVar70._0_4_ + auVar57._0_4_;
      auVar18._4_4_ = auVar107._4_4_ + auVar70._4_4_ + auVar57._4_4_;
      auVar18._8_4_ = auVar107._8_4_ + auVar70._8_4_ + auVar57._8_4_;
      auVar18._12_4_ = auVar107._12_4_ + auVar70._12_4_ + auVar57._12_4_;
      auVar18._16_4_ = auVar107._16_4_ + auVar70._16_4_ + auVar57._16_4_;
      auVar18._20_4_ = auVar107._20_4_ + auVar70._20_4_ + auVar57._20_4_;
      auVar18._24_4_ = auVar107._24_4_ + auVar70._24_4_ + auVar57._24_4_;
      auVar18._28_4_ = auVar107._28_4_ + auVar70._28_4_ + auVar57._28_4_;
      auVar102 = vpand_avx2(auVar18,auVar145);
      auVar63 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar102._0_4_)),
                            (uint)*(ushort *)(param_4 + auVar102._4_4_),1);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._8_4_),2);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._12_4_),3);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._16_4_),4);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._20_4_),5);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._24_4_),6);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._28_4_),7);
      auVar19._0_4_ = auVar18._0_4_ + __real_00000002;
      auVar19._4_4_ = auVar18._4_4_ + __real_00000002;
      auVar19._8_4_ = auVar18._8_4_ + __real_00000002;
      auVar19._12_4_ = auVar18._12_4_ + __real_00000002;
      auVar19._16_4_ = auVar18._16_4_ + __real_00000002;
      auVar19._20_4_ = auVar18._20_4_ + __real_00000002;
      auVar19._24_4_ = auVar18._24_4_ + __real_00000002;
      auVar19._28_4_ = auVar18._28_4_ + __real_00000002;
      auVar102 = vpand_avx2(auVar145,auVar19);
      auVar64 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar102._0_4_)),
                            (uint)*(ushort *)(param_4 + auVar102._4_4_),1);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._8_4_),2);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._12_4_),3);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._16_4_),4);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._20_4_),5);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._24_4_),6);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._28_4_),7);
      auVar20._0_4_ = auVar18._0_4_ + __real_00000004;
      auVar20._4_4_ = auVar18._4_4_ + __real_00000004;
      auVar20._8_4_ = auVar18._8_4_ + __real_00000004;
      auVar20._12_4_ = auVar18._12_4_ + __real_00000004;
      auVar20._16_4_ = auVar18._16_4_ + __real_00000004;
      auVar20._20_4_ = auVar18._20_4_ + __real_00000004;
      auVar20._24_4_ = auVar18._24_4_ + __real_00000004;
      auVar20._28_4_ = auVar18._28_4_ + __real_00000004;
      auVar80 = vpand_avx2(auVar145,auVar20);
      auVar65 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar80._0_4_)),
                            (uint)*(ushort *)(param_4 + auVar80._4_4_),1);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._8_4_),2);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._12_4_),3);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._16_4_),4);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._20_4_),5);
      auVar102 = vpmovzxwd_avx2(auVar63);
      auVar21._0_4_ = auVar102._0_4_ + __real_ffff8001;
      auVar21._4_4_ = auVar102._4_4_ + __real_ffff8001;
      auVar21._8_4_ = auVar102._8_4_ + __real_ffff8001;
      auVar21._12_4_ = auVar102._12_4_ + __real_ffff8001;
      auVar21._16_4_ = auVar102._16_4_ + __real_ffff8001;
      auVar21._20_4_ = auVar102._20_4_ + __real_ffff8001;
      auVar21._24_4_ = auVar102._24_4_ + __real_ffff8001;
      auVar21._28_4_ = auVar102._28_4_ + __real_ffff8001;
      auVar102 = vcvtdq2ps_avx(auVar21);
      auVar120._4_4_ = __real_46fffe00;
      auVar120._0_4_ = __real_46fffe00;
      auVar120._8_4_ = __real_46fffe00;
      auVar120._12_4_ = __real_46fffe00;
      auVar120._16_4_ = __real_46fffe00;
      auVar120._20_4_ = __real_46fffe00;
      auVar120._24_4_ = __real_46fffe00;
      auVar120._28_4_ = __real_46fffe00;
      auVar107 = vdivps_avx(auVar102,auVar120);
      auVar63 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._24_4_),6);
      auVar102 = vpmovzxwd_avx2(auVar64);
      auVar22._0_4_ = auVar102._0_4_ + __real_ffff8001;
      auVar22._4_4_ = auVar102._4_4_ + __real_ffff8001;
      auVar22._8_4_ = auVar102._8_4_ + __real_ffff8001;
      auVar22._12_4_ = auVar102._12_4_ + __real_ffff8001;
      auVar22._16_4_ = auVar102._16_4_ + __real_ffff8001;
      auVar22._20_4_ = auVar102._20_4_ + __real_ffff8001;
      auVar22._24_4_ = auVar102._24_4_ + __real_ffff8001;
      auVar22._28_4_ = auVar102._28_4_ + __real_ffff8001;
      auVar102 = vcvtdq2ps_avx(auVar22);
      auVar66 = vdivps_avx(auVar102,auVar120);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar80._28_4_),7);
      auVar102 = vpmovzxwd_avx2(auVar63);
      auVar23._0_4_ = auVar102._0_4_ + __real_ffff8001;
      auVar23._4_4_ = auVar102._4_4_ + __real_ffff8001;
      auVar23._8_4_ = auVar102._8_4_ + __real_ffff8001;
      auVar23._12_4_ = auVar102._12_4_ + __real_ffff8001;
      auVar23._16_4_ = auVar102._16_4_ + __real_ffff8001;
      auVar23._20_4_ = auVar102._20_4_ + __real_ffff8001;
      auVar23._24_4_ = auVar102._24_4_ + __real_ffff8001;
      auVar23._28_4_ = auVar102._28_4_ + __real_ffff8001;
      auVar102 = vcvtdq2ps_avx(auVar23);
      auVar102 = vdivps_avx(auVar102,auVar120);
      auVar79._0_4_ = auVar107._0_4_ * __real_43000000;
      auVar79._4_4_ = auVar107._4_4_ * __real_43000000;
      auVar79._8_4_ = auVar107._8_4_ * __real_43000000;
      auVar79._12_4_ = auVar107._12_4_ * __real_43000000;
      auVar79._16_4_ = auVar107._16_4_ * __real_43000000;
      auVar79._20_4_ = auVar107._20_4_ * __real_43000000;
      auVar79._24_4_ = auVar107._24_4_ * __real_43000000;
      auVar79._28_4_ = auVar107._28_4_ * __real_43000000;
      auVar121._0_4_ = auVar66._0_4_ * __real_43000000;
      auVar121._4_4_ = auVar66._4_4_ * __real_43000000;
      auVar121._8_4_ = auVar66._8_4_ * __real_43000000;
      auVar121._12_4_ = auVar66._12_4_ * __real_43000000;
      auVar121._16_4_ = auVar66._16_4_ * __real_43000000;
      auVar121._20_4_ = auVar66._20_4_ * __real_43000000;
      auVar121._24_4_ = auVar66._24_4_ * __real_43000000;
      auVar121._28_4_ = auVar66._28_4_ * __real_43000000;
      auVar71._0_4_ = auVar102._0_4_ * __real_43000000;
      auVar71._4_4_ = auVar102._4_4_ * __real_43000000;
      auVar71._8_4_ = auVar102._8_4_ * __real_43000000;
      auVar71._12_4_ = auVar102._12_4_ * __real_43000000;
      auVar71._16_4_ = auVar102._16_4_ * __real_43000000;
      auVar71._20_4_ = auVar102._20_4_ * __real_43000000;
      auVar71._24_4_ = auVar102._24_4_ * __real_43000000;
      auVar71._28_4_ = auVar102._28_4_ * __real_43000000;
      local_500 = vmaskmovps_avx(auVar145,auVar79);
      local_4e0 = vmaskmovps_avx(auVar145,auVar121);
      local_4c0._0_32_ = vmaskmovps_avx(auVar145,auVar71);
      auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
      auVar100 = auVar145 & ~auVar102;
      if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
            (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
          (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140add6f0;
      break;
    case 3:
      auVar118 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar88 = vgatherdps(ZEXT832(0),auVar145);
      auVar99 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar145);
      auVar125 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar80 = vgatherdps(ZEXT832(0) << 0x20,auVar145);
      auVar66 = vpgatherdd(ZEXT832(0),auVar145);
      auVar102 = vpsrld_avx2(auVar66,10);
      auVar136._4_4_ = __real_000007ff;
      auVar136._0_4_ = __real_000007ff;
      auVar136._8_4_ = __real_000007ff;
      auVar136._12_4_ = __real_000007ff;
      auVar136._16_4_ = __real_000007ff;
      auVar136._20_4_ = __real_000007ff;
      auVar136._24_4_ = __real_000007ff;
      auVar136._28_4_ = __real_000007ff;
      auVar107 = vpand_avx2(auVar136,auVar102);
      auVar137._4_4_ = __real_000003ff;
      auVar137._0_4_ = __real_000003ff;
      auVar137._8_4_ = __real_000003ff;
      auVar137._12_4_ = __real_000003ff;
      auVar137._16_4_ = __real_000003ff;
      auVar137._20_4_ = __real_000003ff;
      auVar137._24_4_ = __real_000003ff;
      auVar137._28_4_ = __real_000003ff;
      auVar102 = vpand_avx2(auVar137,auVar66);
      auVar24._0_4_ = auVar102._0_4_ + __real_fffffe01;
      auVar24._4_4_ = auVar102._4_4_ + __real_fffffe01;
      auVar24._8_4_ = auVar102._8_4_ + __real_fffffe01;
      auVar24._12_4_ = auVar102._12_4_ + __real_fffffe01;
      auVar24._16_4_ = auVar102._16_4_ + __real_fffffe01;
      auVar24._20_4_ = auVar102._20_4_ + __real_fffffe01;
      auVar24._24_4_ = auVar102._24_4_ + __real_fffffe01;
      auVar24._28_4_ = auVar102._28_4_ + __real_fffffe01;
      auVar102 = vcvtdq2ps_avx(auVar24);
      auVar150._4_4_ = __real_43ff8000;
      auVar150._0_4_ = __real_43ff8000;
      auVar150._8_4_ = __real_43ff8000;
      auVar150._12_4_ = __real_43ff8000;
      auVar150._16_4_ = __real_43ff8000;
      auVar150._20_4_ = __real_43ff8000;
      auVar150._24_4_ = __real_43ff8000;
      auVar150._28_4_ = __real_43ff8000;
      auVar102 = vdivps_avx(auVar102,auVar150);
      auVar138._0_4_ = auVar58._0_4_ * auVar102._0_4_ + auVar118._0_4_;
      auVar138._4_4_ = auVar58._4_4_ * auVar102._4_4_ + auVar118._4_4_;
      auVar138._8_4_ = auVar58._8_4_ * auVar102._8_4_ + auVar118._8_4_;
      auVar138._12_4_ = auVar58._12_4_ * auVar102._12_4_ + auVar118._12_4_;
      auVar138._16_4_ = auVar58._16_4_ * auVar102._16_4_ + auVar118._16_4_;
      auVar138._20_4_ = auVar58._20_4_ * auVar102._20_4_ + auVar118._20_4_;
      auVar138._24_4_ = auVar58._24_4_ * auVar102._24_4_ + auVar118._24_4_;
      auVar138._28_4_ = auVar58._28_4_ * auVar102._28_4_ + auVar118._28_4_;
      auVar25._0_4_ = __real_fffffc01 + auVar107._0_4_;
      auVar25._4_4_ = __real_fffffc01 + auVar107._4_4_;
      auVar25._8_4_ = __real_fffffc01 + auVar107._8_4_;
      auVar25._12_4_ = __real_fffffc01 + auVar107._12_4_;
      auVar25._16_4_ = __real_fffffc01 + auVar107._16_4_;
      auVar25._20_4_ = __real_fffffc01 + auVar107._20_4_;
      auVar25._24_4_ = __real_fffffc01 + auVar107._24_4_;
      auVar25._28_4_ = __real_fffffc01 + auVar107._28_4_;
      auVar102 = vcvtdq2ps_avx(auVar25);
      auVar151._4_4_ = __real_447fc000;
      auVar151._0_4_ = __real_447fc000;
      auVar151._8_4_ = __real_447fc000;
      auVar151._12_4_ = __real_447fc000;
      auVar151._16_4_ = __real_447fc000;
      auVar151._20_4_ = __real_447fc000;
      auVar151._24_4_ = __real_447fc000;
      auVar151._28_4_ = __real_447fc000;
      auVar102 = vdivps_avx(auVar102,auVar151);
      auVar107 = vpsrld_avx2(auVar66,0x15);
      auVar103._0_4_ = auVar125._0_4_ * auVar102._0_4_ + auVar88._0_4_;
      auVar103._4_4_ = auVar125._4_4_ * auVar102._4_4_ + auVar88._4_4_;
      auVar103._8_4_ = auVar125._8_4_ * auVar102._8_4_ + auVar88._8_4_;
      auVar103._12_4_ = auVar125._12_4_ * auVar102._12_4_ + auVar88._12_4_;
      auVar103._16_4_ = auVar125._16_4_ * auVar102._16_4_ + auVar88._16_4_;
      auVar103._20_4_ = auVar125._20_4_ * auVar102._20_4_ + auVar88._20_4_;
      auVar103._24_4_ = auVar125._24_4_ * auVar102._24_4_ + auVar88._24_4_;
      auVar103._28_4_ = auVar125._28_4_ * auVar102._28_4_ + auVar88._28_4_;
      auVar26._0_4_ = __real_fffffc01 + auVar107._0_4_;
      auVar26._4_4_ = __real_fffffc01 + auVar107._4_4_;
      auVar26._8_4_ = __real_fffffc01 + auVar107._8_4_;
      auVar26._12_4_ = __real_fffffc01 + auVar107._12_4_;
      auVar26._16_4_ = __real_fffffc01 + auVar107._16_4_;
      auVar26._20_4_ = __real_fffffc01 + auVar107._20_4_;
      auVar26._24_4_ = __real_fffffc01 + auVar107._24_4_;
      auVar26._28_4_ = __real_fffffc01 + auVar107._28_4_;
      auVar102 = vcvtdq2ps_avx(auVar26);
      auVar102 = vdivps_avx(auVar102,auVar151);
      auVar72._0_4_ = auVar80._0_4_ * auVar102._0_4_ + auVar99._0_4_;
      auVar72._4_4_ = auVar80._4_4_ * auVar102._4_4_ + auVar99._4_4_;
      auVar72._8_4_ = auVar80._8_4_ * auVar102._8_4_ + auVar99._8_4_;
      auVar72._12_4_ = auVar80._12_4_ * auVar102._12_4_ + auVar99._12_4_;
      auVar72._16_4_ = auVar80._16_4_ * auVar102._16_4_ + auVar99._16_4_;
      auVar72._20_4_ = auVar80._20_4_ * auVar102._20_4_ + auVar99._20_4_;
      auVar72._24_4_ = auVar80._24_4_ * auVar102._24_4_ + auVar99._24_4_;
      auVar72._28_4_ = auVar80._28_4_ * auVar102._28_4_ + auVar99._28_4_;
      local_500 = vmaskmovps_avx(auVar145,auVar138);
      local_4e0 = vmaskmovps_avx(auVar145,auVar103);
      local_4c0._0_32_ = vmaskmovps_avx(auVar145,auVar72);
      auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
      auVar100 = auVar145 & ~auVar102;
      if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
            (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
          (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140add6f0;
      break;
    case 4:
    case 5:
      goto switchD_140adcdb9_caseD_4;
    case 6:
      auVar63._0_12_ = ZEXT812(0);
      auVar63._12_4_ = 0;
      local_500 = vmaskmovps_avx(auVar145,ZEXT1632(auVar63));
      local_4e0 = vmaskmovps_avx(auVar145,ZEXT1632(auVar63));
      local_4c0._0_32_ = vmaskmovps_avx(auVar145,ZEXT1632(auVar63));
      auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
      auVar100 = auVar145 & ~auVar102;
      if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
            (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
          (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140add6f0;
    }
  }
  else {
switchD_140adcdb9_caseD_4:
    local_500 = vmaskmovps_avx(auVar145,auVar102);
    local_4e0 = vmaskmovps_avx(auVar145,auVar102);
    local_4c0._0_32_ = vmaskmovps_avx(auVar145,auVar102);
    auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
    auVar100 = auVar145 & ~auVar102;
    if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
          (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
        (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140add6f0;
  }
  auVar95._0_4_ = ~auVar102._0_4_ & auVar145._0_4_;
  auVar95._4_4_ = ~auVar102._4_4_ & auVar145._4_4_;
  auVar95._8_4_ = ~auVar102._8_4_ & auVar145._8_4_;
  auVar95._12_4_ = ~auVar102._12_4_ & auVar145._12_4_;
  auVar95._16_4_ = ~auVar102._16_4_ & auVar145._16_4_;
  auVar95._20_4_ = ~auVar102._20_4_ & auVar145._20_4_;
  auVar95._24_4_ = ~auVar102._24_4_ & auVar145._24_4_;
  auVar95._28_4_ = ~auVar102._28_4_ & auVar145._28_4_;
  if (param_8 < 7) {
    auVar74 = vpmulld_avx2(auVar74,auVar110);
    switch(param_8) {
    case 0:
    case 1:
      auVar74 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar100 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar81 = vgatherdps(ZEXT832(0),auVar95);
      local_420 = vmaskmovps_avx(auVar95,auVar74);
      local_400 = vmaskmovps_avx(auVar95,auVar100);
      break;
    case 2:
      auVar27._0_4_ = auVar74._0_4_ + auVar70._0_4_ + auVar57._0_4_;
      auVar27._4_4_ = auVar74._4_4_ + auVar70._4_4_ + auVar57._4_4_;
      auVar27._8_4_ = auVar74._8_4_ + auVar70._8_4_ + auVar57._8_4_;
      auVar27._12_4_ = auVar74._12_4_ + auVar70._12_4_ + auVar57._12_4_;
      auVar27._16_4_ = auVar74._16_4_ + auVar70._16_4_ + auVar57._16_4_;
      auVar27._20_4_ = auVar74._20_4_ + auVar70._20_4_ + auVar57._20_4_;
      auVar27._24_4_ = auVar74._24_4_ + auVar70._24_4_ + auVar57._24_4_;
      auVar27._28_4_ = auVar74._28_4_ + auVar70._28_4_ + auVar57._28_4_;
      auVar100 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar74 = vblendvps_avx(auVar100,auVar27,auVar95);
      auVar63 = auVar74._0_16_;
      iVar47 = vextractps_avx(auVar63,0);
      iVar54 = vextractps_avx(auVar63,1);
      iVar52 = vextractps_avx(auVar63,2);
      iVar53 = vextractps_avx(auVar63,3);
      auVar63 = auVar74._16_16_;
      iVar56 = vextractps_avx(auVar63,0);
      iVar49 = vextractps_avx(auVar63,1);
      iVar51 = vextractps_avx(auVar63,2);
      iVar45 = vextractps_avx(auVar63,3);
      auVar63 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + iVar47)),
                            (uint)*(ushort *)(param_4 + iVar54),1);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar52),2);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar53),3);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar56),4);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar49),5);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar51),6);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar45),7);
      auVar28._0_4_ = auVar27._0_4_ + __real_00000002;
      auVar28._4_4_ = auVar27._4_4_ + __real_00000002;
      auVar28._8_4_ = auVar27._8_4_ + __real_00000002;
      auVar28._12_4_ = auVar27._12_4_ + __real_00000002;
      auVar28._16_4_ = auVar27._16_4_ + __real_00000002;
      auVar28._20_4_ = auVar27._20_4_ + __real_00000002;
      auVar28._24_4_ = auVar27._24_4_ + __real_00000002;
      auVar28._28_4_ = auVar27._28_4_ + __real_00000002;
      auVar74 = vblendvps_avx(auVar100,auVar28,auVar95);
      auVar64 = auVar74._0_16_;
      iVar47 = vextractps_avx(auVar64,0);
      iVar54 = vextractps_avx(auVar64,1);
      iVar52 = vextractps_avx(auVar64,2);
      iVar53 = vextractps_avx(auVar64,3);
      auVar64 = auVar74._16_16_;
      iVar56 = vextractps_avx(auVar64,0);
      iVar49 = vextractps_avx(auVar64,1);
      iVar51 = vextractps_avx(auVar64,2);
      iVar45 = vextractps_avx(auVar64,3);
      auVar64 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + iVar47)),
                            (uint)*(ushort *)(param_4 + iVar54),1);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar52),2);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar53),3);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar56),4);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar49),5);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar51),6);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar45),7);
      auVar29._0_4_ = __real_00000004 + auVar27._0_4_;
      auVar29._4_4_ = __real_00000004 + auVar27._4_4_;
      auVar29._8_4_ = __real_00000004 + auVar27._8_4_;
      auVar29._12_4_ = __real_00000004 + auVar27._12_4_;
      auVar29._16_4_ = __real_00000004 + auVar27._16_4_;
      auVar29._20_4_ = __real_00000004 + auVar27._20_4_;
      auVar29._24_4_ = __real_00000004 + auVar27._24_4_;
      auVar29._28_4_ = __real_00000004 + auVar27._28_4_;
      auVar74 = vblendvps_avx(auVar100,auVar29,auVar95);
      auVar65 = auVar74._0_16_;
      iVar47 = vextractps_avx(auVar65,0);
      iVar54 = vextractps_avx(auVar65,1);
      iVar52 = vextractps_avx(auVar65,2);
      iVar53 = vextractps_avx(auVar65,3);
      auVar65 = auVar74._16_16_;
      iVar56 = vextractps_avx(auVar65,0);
      iVar49 = vextractps_avx(auVar65,1);
      iVar51 = vextractps_avx(auVar65,2);
      iVar45 = vextractps_avx(auVar65,3);
      auVar65 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + iVar47)),
                            (uint)*(ushort *)(param_4 + iVar54),1);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar52),2);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar53),3);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar56),4);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar49),5);
      auVar74 = vpmovzxwd_avx2(auVar63);
      auVar30._0_4_ = auVar74._0_4_ + __real_ffff8001;
      auVar30._4_4_ = auVar74._4_4_ + __real_ffff8001;
      auVar30._8_4_ = auVar74._8_4_ + __real_ffff8001;
      auVar30._12_4_ = auVar74._12_4_ + __real_ffff8001;
      auVar30._16_4_ = auVar74._16_4_ + __real_ffff8001;
      auVar30._20_4_ = auVar74._20_4_ + __real_ffff8001;
      auVar30._24_4_ = auVar74._24_4_ + __real_ffff8001;
      auVar30._28_4_ = auVar74._28_4_ + __real_ffff8001;
      auVar74 = vcvtdq2ps_avx(auVar30);
      auVar96._4_4_ = __real_46fffe00;
      auVar96._0_4_ = __real_46fffe00;
      auVar96._8_4_ = __real_46fffe00;
      auVar96._12_4_ = __real_46fffe00;
      auVar96._16_4_ = __real_46fffe00;
      auVar96._20_4_ = __real_46fffe00;
      auVar96._24_4_ = __real_46fffe00;
      auVar96._28_4_ = __real_46fffe00;
      auVar100 = vdivps_avx(auVar74,auVar96);
      auVar63 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar51),6);
      auVar74 = vpmovzxwd_avx2(auVar64);
      auVar31._0_4_ = auVar74._0_4_ + __real_ffff8001;
      auVar31._4_4_ = auVar74._4_4_ + __real_ffff8001;
      auVar31._8_4_ = auVar74._8_4_ + __real_ffff8001;
      auVar31._12_4_ = auVar74._12_4_ + __real_ffff8001;
      auVar31._16_4_ = auVar74._16_4_ + __real_ffff8001;
      auVar31._20_4_ = auVar74._20_4_ + __real_ffff8001;
      auVar31._24_4_ = auVar74._24_4_ + __real_ffff8001;
      auVar31._28_4_ = auVar74._28_4_ + __real_ffff8001;
      auVar74 = vcvtdq2ps_avx(auVar31);
      auVar57 = vdivps_avx(auVar74,auVar96);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar45),7);
      auVar74 = vpmovzxwd_avx2(auVar63);
      auVar32._0_4_ = auVar74._0_4_ + __real_ffff8001;
      auVar32._4_4_ = auVar74._4_4_ + __real_ffff8001;
      auVar32._8_4_ = auVar74._8_4_ + __real_ffff8001;
      auVar32._12_4_ = auVar74._12_4_ + __real_ffff8001;
      auVar32._16_4_ = auVar74._16_4_ + __real_ffff8001;
      auVar32._20_4_ = auVar74._20_4_ + __real_ffff8001;
      auVar32._24_4_ = auVar74._24_4_ + __real_ffff8001;
      auVar32._28_4_ = auVar74._28_4_ + __real_ffff8001;
      auVar74 = vcvtdq2ps_avx(auVar32);
      auVar74 = vdivps_avx(auVar74,auVar96);
      auVar82._0_4_ = auVar100._0_4_ * __real_43000000;
      auVar82._4_4_ = auVar100._4_4_ * __real_43000000;
      auVar82._8_4_ = auVar100._8_4_ * __real_43000000;
      auVar82._12_4_ = auVar100._12_4_ * __real_43000000;
      auVar82._16_4_ = auVar100._16_4_ * __real_43000000;
      auVar82._20_4_ = auVar100._20_4_ * __real_43000000;
      auVar82._24_4_ = auVar100._24_4_ * __real_43000000;
      auVar82._28_4_ = auVar100._28_4_ * __real_43000000;
      auVar97._0_4_ = auVar57._0_4_ * __real_43000000;
      auVar97._4_4_ = auVar57._4_4_ * __real_43000000;
      auVar97._8_4_ = auVar57._8_4_ * __real_43000000;
      auVar97._12_4_ = auVar57._12_4_ * __real_43000000;
      auVar97._16_4_ = auVar57._16_4_ * __real_43000000;
      auVar97._20_4_ = auVar57._20_4_ * __real_43000000;
      auVar97._24_4_ = auVar57._24_4_ * __real_43000000;
      auVar97._28_4_ = auVar57._28_4_ * __real_43000000;
      auVar73._0_4_ = auVar74._0_4_ * __real_43000000;
      auVar73._4_4_ = auVar74._4_4_ * __real_43000000;
      auVar73._8_4_ = auVar74._8_4_ * __real_43000000;
      auVar73._12_4_ = auVar74._12_4_ * __real_43000000;
      auVar73._16_4_ = auVar74._16_4_ * __real_43000000;
      auVar73._20_4_ = auVar74._20_4_ * __real_43000000;
      auVar73._24_4_ = auVar74._24_4_ * __real_43000000;
      auVar73._28_4_ = auVar74._28_4_ * __real_43000000;
      local_420 = vmaskmovps_avx(auVar95,auVar82);
      local_400 = vmaskmovps_avx(auVar95,auVar97);
      goto LAB_140add531;
    case 3:
      auVar102 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar57 = vgatherdps(ZEXT832(0),auVar95);
      auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar95);
      auVar88 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar99 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar95);
      auVar74 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar70 = vpsrld_avx2(auVar74,0x15);
      auVar107 = vpsrld_avx2(auVar74,10);
      auVar122._4_4_ = __real_000007ff;
      auVar122._0_4_ = __real_000007ff;
      auVar122._8_4_ = __real_000007ff;
      auVar122._12_4_ = __real_000007ff;
      auVar122._16_4_ = __real_000007ff;
      auVar122._20_4_ = __real_000007ff;
      auVar122._24_4_ = __real_000007ff;
      auVar122._28_4_ = __real_000007ff;
      auVar142._4_4_ = __real_000003ff;
      auVar142._0_4_ = __real_000003ff;
      auVar142._8_4_ = __real_000003ff;
      auVar142._12_4_ = __real_000003ff;
      auVar142._16_4_ = __real_000003ff;
      auVar142._20_4_ = __real_000003ff;
      auVar142._24_4_ = __real_000003ff;
      auVar142._28_4_ = __real_000003ff;
      auVar74 = vpand_avx2(auVar142,auVar74);
      auVar33._0_4_ = __real_fffffe01 + auVar74._0_4_;
      auVar33._4_4_ = __real_fffffe01 + auVar74._4_4_;
      auVar33._8_4_ = __real_fffffe01 + auVar74._8_4_;
      auVar33._12_4_ = __real_fffffe01 + auVar74._12_4_;
      auVar33._16_4_ = __real_fffffe01 + auVar74._16_4_;
      auVar33._20_4_ = __real_fffffe01 + auVar74._20_4_;
      auVar33._24_4_ = __real_fffffe01 + auVar74._24_4_;
      auVar33._28_4_ = __real_fffffe01 + auVar74._28_4_;
      auVar74 = vcvtdq2ps_avx(auVar33);
      auVar143._4_4_ = __real_43ff8000;
      auVar143._0_4_ = __real_43ff8000;
      auVar143._8_4_ = __real_43ff8000;
      auVar143._12_4_ = __real_43ff8000;
      auVar143._16_4_ = __real_43ff8000;
      auVar143._20_4_ = __real_43ff8000;
      auVar143._24_4_ = __real_43ff8000;
      auVar143._28_4_ = __real_43ff8000;
      auVar100 = vdivps_avx(auVar74,auVar143);
      auVar74 = vpand_avx2(auVar122,auVar107);
      auVar34._0_4_ = __real_fffffc01 + auVar74._0_4_;
      auVar34._4_4_ = __real_fffffc01 + auVar74._4_4_;
      auVar34._8_4_ = __real_fffffc01 + auVar74._8_4_;
      auVar34._12_4_ = __real_fffffc01 + auVar74._12_4_;
      auVar34._16_4_ = __real_fffffc01 + auVar74._16_4_;
      auVar34._20_4_ = __real_fffffc01 + auVar74._20_4_;
      auVar34._24_4_ = __real_fffffc01 + auVar74._24_4_;
      auVar34._28_4_ = __real_fffffc01 + auVar74._28_4_;
      auVar74 = vcvtdq2ps_avx(auVar34);
      auVar144._4_4_ = __real_447fc000;
      auVar144._0_4_ = __real_447fc000;
      auVar144._8_4_ = __real_447fc000;
      auVar144._12_4_ = __real_447fc000;
      auVar144._16_4_ = __real_447fc000;
      auVar144._20_4_ = __real_447fc000;
      auVar144._24_4_ = __real_447fc000;
      auVar144._28_4_ = __real_447fc000;
      auVar74 = vdivps_avx(auVar74,auVar144);
      auVar75._0_4_ = auVar80._0_4_ * auVar100._0_4_ + auVar102._0_4_;
      auVar75._4_4_ = auVar80._4_4_ * auVar100._4_4_ + auVar102._4_4_;
      auVar75._8_4_ = auVar80._8_4_ * auVar100._8_4_ + auVar102._8_4_;
      auVar75._12_4_ = auVar80._12_4_ * auVar100._12_4_ + auVar102._12_4_;
      auVar75._16_4_ = auVar80._16_4_ * auVar100._16_4_ + auVar102._16_4_;
      auVar75._20_4_ = auVar80._20_4_ * auVar100._20_4_ + auVar102._20_4_;
      auVar75._24_4_ = auVar80._24_4_ * auVar100._24_4_ + auVar102._24_4_;
      auVar75._28_4_ = auVar80._28_4_ * auVar100._28_4_ + auVar102._28_4_;
      auVar104._0_4_ = auVar88._0_4_ * auVar74._0_4_ + auVar57._0_4_;
      auVar104._4_4_ = auVar88._4_4_ * auVar74._4_4_ + auVar57._4_4_;
      auVar104._8_4_ = auVar88._8_4_ * auVar74._8_4_ + auVar57._8_4_;
      auVar104._12_4_ = auVar88._12_4_ * auVar74._12_4_ + auVar57._12_4_;
      auVar104._16_4_ = auVar88._16_4_ * auVar74._16_4_ + auVar57._16_4_;
      auVar104._20_4_ = auVar88._20_4_ * auVar74._20_4_ + auVar57._20_4_;
      auVar104._24_4_ = auVar88._24_4_ * auVar74._24_4_ + auVar57._24_4_;
      auVar104._28_4_ = auVar88._28_4_ * auVar74._28_4_ + auVar57._28_4_;
      auVar35._0_4_ = __real_fffffc01 + auVar70._0_4_;
      auVar35._4_4_ = __real_fffffc01 + auVar70._4_4_;
      auVar35._8_4_ = __real_fffffc01 + auVar70._8_4_;
      auVar35._12_4_ = __real_fffffc01 + auVar70._12_4_;
      auVar35._16_4_ = __real_fffffc01 + auVar70._16_4_;
      auVar35._20_4_ = __real_fffffc01 + auVar70._20_4_;
      auVar35._24_4_ = __real_fffffc01 + auVar70._24_4_;
      auVar35._28_4_ = __real_fffffc01 + auVar70._28_4_;
      auVar74 = vcvtdq2ps_avx(auVar35);
      auVar74 = vdivps_avx(auVar74,auVar144);
      auVar81._0_4_ = auVar99._0_4_ * auVar74._0_4_ + auVar66._0_4_;
      auVar81._4_4_ = auVar99._4_4_ * auVar74._4_4_ + auVar66._4_4_;
      auVar81._8_4_ = auVar99._8_4_ * auVar74._8_4_ + auVar66._8_4_;
      auVar81._12_4_ = auVar99._12_4_ * auVar74._12_4_ + auVar66._12_4_;
      auVar81._16_4_ = auVar99._16_4_ * auVar74._16_4_ + auVar66._16_4_;
      auVar81._20_4_ = auVar99._20_4_ * auVar74._20_4_ + auVar66._20_4_;
      auVar81._24_4_ = auVar99._24_4_ * auVar74._24_4_ + auVar66._24_4_;
      auVar81._28_4_ = auVar99._28_4_ * auVar74._28_4_ + auVar66._28_4_;
      local_420 = vmaskmovps_avx(auVar95,auVar75);
      local_400 = vmaskmovps_avx(auVar95,auVar104);
      break;
    default:
      goto switchD_140add280_caseD_4;
    }
    local_3e0 = vmaskmovps_avx(auVar95,auVar81);
  }
  else {
switchD_140add280_caseD_4:
    auVar64._0_12_ = ZEXT812(0);
    auVar64._12_4_ = 0;
    auVar73 = ZEXT1632(auVar64);
    local_420 = vmaskmovps_avx(auVar95,ZEXT1632(auVar64));
    local_400 = vmaskmovps_avx(auVar95,ZEXT1632(auVar64));
LAB_140add531:
    local_3e0 = vmaskmovps_avx(auVar95,auVar73);
  }
  auVar74 = vsubps_avx(local_420,local_500);
  auVar100 = vsubps_avx(local_400,local_4e0);
  auVar57 = vsubps_avx(local_3e0,local_4c0._0_32_);
  fVar152 = auVar139._0_4_;
  auVar76._0_4_ = fVar152 * auVar74._0_4_ + local_500._0_4_;
  fVar157 = auVar139._4_4_;
  auVar76._4_4_ = fVar157 * auVar74._4_4_ + local_500._4_4_;
  fVar158 = auVar139._8_4_;
  auVar76._8_4_ = fVar158 * auVar74._8_4_ + local_500._8_4_;
  fVar159 = auVar139._12_4_;
  auVar76._12_4_ = fVar159 * auVar74._12_4_ + local_500._12_4_;
  fVar160 = auVar139._16_4_;
  auVar76._16_4_ = fVar160 * auVar74._16_4_ + local_500._16_4_;
  fVar161 = auVar139._20_4_;
  auVar76._20_4_ = fVar161 * auVar74._20_4_ + local_500._20_4_;
  fVar162 = auVar139._24_4_;
  auVar76._24_4_ = fVar162 * auVar74._24_4_ + local_500._24_4_;
  fVar163 = auVar139._28_4_;
  auVar76._28_4_ = fVar163 * auVar74._28_4_ + local_500._28_4_;
  auVar83._0_4_ = fVar152 * auVar100._0_4_ + local_4e0._0_4_;
  auVar83._4_4_ = fVar157 * auVar100._4_4_ + local_4e0._4_4_;
  auVar83._8_4_ = fVar158 * auVar100._8_4_ + local_4e0._8_4_;
  auVar83._12_4_ = fVar159 * auVar100._12_4_ + local_4e0._12_4_;
  auVar83._16_4_ = fVar160 * auVar100._16_4_ + local_4e0._16_4_;
  auVar83._20_4_ = fVar161 * auVar100._20_4_ + local_4e0._20_4_;
  auVar83._24_4_ = fVar162 * auVar100._24_4_ + local_4e0._24_4_;
  auVar83._28_4_ = fVar163 * auVar100._28_4_ + local_4e0._28_4_;
  auVar93._0_4_ = fVar152 * auVar57._0_4_ + local_4c0._0_4_;
  auVar93._4_4_ = fVar157 * auVar57._4_4_ + local_4c0._4_4_;
  auVar93._8_4_ = fVar158 * auVar57._8_4_ + local_4c0._8_4_;
  auVar93._12_4_ = fVar159 * auVar57._12_4_ + local_4c0._12_4_;
  auVar93._16_4_ = fVar160 * auVar57._16_4_ + local_4c0._16_4_;
  auVar93._20_4_ = fVar161 * auVar57._20_4_ + local_4c0._20_4_;
  auVar93._24_4_ = fVar162 * auVar57._24_4_ + local_4c0._24_4_;
  auVar93._28_4_ = fVar163 * auVar57._28_4_ + local_4c0._28_4_;
  local_500 = vmaskmovps_avx(auVar95,auVar76);
  local_4e0 = vmaskmovps_avx(auVar95,auVar83);
  local_4c0._0_32_ = vmaskmovps_avx(auVar95,auVar93);
LAB_140add6f0:
  auVar74 = vperm2f128_avx(local_500,local_4e0,0x20);
  auVar100 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                          ZEXT1632(local_4c0._0_16_));
  auVar139 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                          auVar74);
  local_200 = vblendps_avx(auVar139,auVar100,0xcc);
  auVar100 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                          ZEXT1632(local_4c0._0_16_));
  auVar74 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                         auVar74);
  local_1e0 = vblendps_avx(auVar74,auVar100,0xcc);
  auVar74 = vperm2f128_avx(local_500,local_4e0,0x31);
  auVar100 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                          ZEXT1632(local_4c0._16_16_));
  auVar139 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                          auVar74);
  local_1c0 = vblendps_avx(auVar139,auVar100,0xcc);
  auVar100 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                          ZEXT1632(local_4c0._16_16_));
  auVar74 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                         auVar74);
  local_1a0 = vblendps_avx(auVar74,auVar100,0xcc);
  uVar48 = vmovmskps_avx(auVar145);
  uVar50 = (ulonglong)uVar48;
  do {
    uVar48 = 0;
    for (uVar43 = uVar50; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
      uVar48 = uVar48 + 1;
    }
    bVar1 = (byte)uVar48 & 0x3f;
    auVar74 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar48 << 4)));
    *(undefined1 (*) [32])
     (param_1 + 0x20 + (longlong)*(int *)(local_240 + (ulonglong)(uVar48 & 7) * 4) * 0x60) = auVar74
    ;
    uVar50 = uVar50 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
  } while (uVar50 != 0);
  return;
}

// GetConstantKeyLerpPoseScales___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_Cuniun_3C_CunT_3E_CunfCunfCunTCuniCuni_avx2 @ 140add860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseScales___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_Cuniun_3C_CunT_3E_CunfCunfCunTCuniCuni_avx2
               (longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,longlong param_5
               ,undefined8 param_6,float param_7,char param_8,uint param_9,uint param_10)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar37;
  int iVar38;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
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
  ulonglong uVar39;
  undefined4 uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  ulonglong uVar47;
  int iVar48;
  int iVar49;
  undefined4 uVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  undefined4 uVar54;
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
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
  undefined1 in_ZMM4 [64];
  uint uVar100;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 in_ZMM7 [64];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 in_ZMM8 [64];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 in_ZMM11 [64];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  float fVar131;
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  undefined1 in_ZMM13 [64];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 in_ZMM15 [64];
  undefined1 auVar150 [64];
  undefined1 local_540 [32];
  undefined1 local_520 [32];
  undefined1 local_500 [160];
  float local_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  undefined1 local_440 [32];
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
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
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_98 [16];
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  
  uVar40 = __real_00000001;
  uVar50 = __real_00000018;
  iVar43 = __real_00000004;
  auVar81 = in_ZMM11._0_32_;
  local_58 = in_ZMM15._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_3e0._4_4_ =
       *(int *)(&DAT_151c6b740 + (longlong)(int)param_9 * 4) *
       *(int *)(&DAT_151c6b720 + (longlong)(int)param_9 * 4);
  uVar44 = param_10 + 7;
  if (-1 < (int)param_10) {
    uVar44 = param_10;
  }
  if ((int)(uVar44 & 0xfffffff8) < 1) {
    iVar53 = 0;
    if ((int)param_10 < 1) {
      return;
    }
  }
  else {
    auVar55 = vpslld_avx(ZEXT416(param_4),2);
    uVar54 = auVar55._0_4_;
    auVar142._4_4_ = uVar54;
    auVar142._0_4_ = uVar54;
    auVar142._8_4_ = uVar54;
    auVar142._12_4_ = uVar54;
    auVar142._16_4_ = uVar54;
    auVar142._20_4_ = uVar54;
    auVar142._24_4_ = uVar54;
    auVar142._28_4_ = uVar54;
    uVar41 = -(uint)(param_9 == 3);
    local_3e0._0_4_ = local_3e0._4_4_;
    local_3e0._8_4_ = local_3e0._4_4_;
    local_3e0._12_4_ = local_3e0._4_4_;
    local_3e0._16_4_ = local_3e0._4_4_;
    local_3e0._20_4_ = local_3e0._4_4_;
    local_3e0._24_4_ = local_3e0._4_4_;
    local_3e0._28_4_ = local_3e0._4_4_;
    iVar53 = 0;
    auVar115._4_4_ = __real_00000004;
    auVar115._0_4_ = __real_00000004;
    auVar115._8_4_ = __real_00000004;
    auVar115._12_4_ = __real_00000004;
    auVar115._16_4_ = __real_00000004;
    auVar115._20_4_ = __real_00000004;
    auVar115._24_4_ = __real_00000004;
    auVar115._28_4_ = __real_00000004;
    auVar81 = vpcmpeqd_avx2(in_ZMM15._0_32_,in_ZMM15._0_32_);
    auVar150 = ZEXT3264(auVar81);
    do {
      auVar74 = in_ZMM6._0_32_;
      auVar81 = in_ZMM11._0_32_;
      auVar93 = in_ZMM7._0_32_;
      auVar112 = in_ZMM8._0_32_;
      auVar97._4_4_ = iVar53;
      auVar97._0_4_ = iVar53;
      auVar97._8_4_ = iVar53;
      auVar97._12_4_ = iVar53;
      auVar97._16_4_ = iVar53;
      auVar97._20_4_ = iVar53;
      auVar97._24_4_ = iVar53;
      auVar97._28_4_ = iVar53;
      auVar70 = vpslld_avx2(auVar97,3);
      auVar77 = vpor_avx2(auVar70,
                          ___ymm_0000003800000030000000280000002000000018000000100000000800000000);
      auVar97 = vpmovzxdq_avx2(auVar77._16_16_);
      auVar70 = vpor_avx2(auVar70,
                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004);
      vpmovzxdq_avx2(auVar70._16_16_);
      auVar70 = vpmovzxdq_avx2(auVar70._0_16_);
      auVar55 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      auVar57 = vpgatherqd((undefined1  [16])0x0,auVar55);
      auVar55 = vpcmpeqd_avx(auVar70._0_16_,auVar70._0_16_);
      auVar55 = vpgatherqd((undefined1  [16])0x0,auVar55);
      auVar90._16_16_ = ZEXT116(1) * auVar55;
      auVar90._0_16_ = ZEXT116(0) * auVar55 | ZEXT116(1) * auVar57;
      vpmulld_avx2(auVar90,auVar142);
      auVar70 = vpcmpeqd_avx2(ZEXT1632(auVar57),ZEXT1632(auVar57));
      auVar90 = vpgatherdd(ZEXT1632((undefined1  [16])0x0),auVar70);
      auVar77 = vpmovzxdq_avx2(auVar77._0_16_);
      auVar70._4_4_ = uVar40;
      auVar70._0_4_ = uVar40;
      auVar70._8_4_ = uVar40;
      auVar70._12_4_ = uVar40;
      auVar70._16_4_ = uVar40;
      auVar70._20_4_ = uVar40;
      auVar70._24_4_ = uVar40;
      auVar70._28_4_ = uVar40;
      auVar70 = vpcmpgtd_avx2(auVar90,auVar70);
      uVar42 = vmovmskps_avx(auVar70);
      uVar100 = auVar70._0_4_;
      uVar105 = auVar70._4_4_;
      uVar106 = auVar70._8_4_;
      uVar107 = auVar70._12_4_;
      uVar108 = auVar70._16_4_;
      uVar109 = auVar70._20_4_;
      uVar110 = auVar70._24_4_;
      uVar111 = auVar70._28_4_;
      auVar70 = auVar150._0_32_;
      auVar55 = auVar90._0_16_;
      if ((uVar42 ^ 0xff) == 0) {
        auVar123 = auVar70 ^ SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        if (0.0 < param_7) goto LAB_140addaa2;
LAB_140addb13:
        auVar74 = ZEXT1232(ZEXT812(0));
        auVar91 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar90 = vblendvps_avx(auVar112,auVar91,auVar123);
        in_ZMM8 = ZEXT3264(auVar90);
        auVar90 = vblendvps_avx(auVar93,auVar91,auVar123);
        in_ZMM7 = ZEXT3264(auVar90);
LAB_140addb35:
        auVar55 = auVar91._0_16_;
        auVar81 = vblendvps_avx(auVar81,auVar91,auVar123);
      }
      else {
        auVar112._0_4_ = in_ZMM8._0_4_ & uVar100;
        auVar112._4_4_ = in_ZMM8._4_4_ & uVar105;
        auVar112._8_4_ = in_ZMM8._8_4_ & uVar106;
        auVar112._12_4_ = in_ZMM8._12_4_ & uVar107;
        auVar112._16_4_ = in_ZMM8._16_4_ & uVar108;
        auVar112._20_4_ = in_ZMM8._20_4_ & uVar109;
        auVar112._24_4_ = in_ZMM8._24_4_ & uVar110;
        auVar112._28_4_ = in_ZMM8._28_4_ & uVar111;
        in_ZMM8 = ZEXT3264(auVar112);
        auVar93._0_4_ = uVar100 & in_ZMM7._0_4_;
        auVar93._4_4_ = uVar105 & in_ZMM7._4_4_;
        auVar93._8_4_ = uVar106 & in_ZMM7._8_4_;
        auVar93._12_4_ = uVar107 & in_ZMM7._12_4_;
        auVar93._16_4_ = uVar108 & in_ZMM7._16_4_;
        auVar93._20_4_ = uVar109 & in_ZMM7._20_4_;
        auVar93._24_4_ = uVar110 & in_ZMM7._24_4_;
        auVar93._28_4_ = uVar111 & in_ZMM7._28_4_;
        in_ZMM7 = ZEXT3264(auVar93);
        auVar81._0_4_ = in_ZMM11._0_4_ & uVar100;
        auVar81._4_4_ = in_ZMM11._4_4_ & uVar105;
        auVar81._8_4_ = in_ZMM11._8_4_ & uVar106;
        auVar81._12_4_ = in_ZMM11._12_4_ & uVar107;
        auVar81._16_4_ = in_ZMM11._16_4_ & uVar108;
        auVar81._20_4_ = in_ZMM11._20_4_ & uVar109;
        auVar81._24_4_ = in_ZMM11._24_4_ & uVar110;
        auVar81._28_4_ = in_ZMM11._28_4_ & uVar111;
        if ((char)(uVar42 ^ 0xff) != -1) {
          auVar123._4_4_ = __real_00000002;
          auVar123._0_4_ = __real_00000002;
          auVar123._8_4_ = __real_00000002;
          auVar123._12_4_ = __real_00000002;
          auVar123._16_4_ = __real_00000002;
          auVar123._20_4_ = __real_00000002;
          auVar123._24_4_ = __real_00000002;
          auVar123._28_4_ = __real_00000002;
          auVar123 = vpcmpgtd_avx2(auVar123,auVar90);
          auVar123 = auVar70 ^ auVar123;
          if (param_7 <= 0.0) goto LAB_140addb13;
LAB_140addaa2:
          auVar74._0_4_ = auVar150._0_4_ + auVar90._0_4_;
          auVar74._4_4_ = auVar150._4_4_ + auVar90._4_4_;
          auVar74._8_4_ = auVar150._8_4_ + auVar90._8_4_;
          auVar74._12_4_ = auVar150._12_4_ + auVar90._12_4_;
          auVar74._16_4_ = auVar150._16_4_ + auVar90._16_4_;
          auVar74._20_4_ = auVar150._20_4_ + auVar90._20_4_;
          auVar74._24_4_ = auVar150._24_4_ + auVar90._24_4_;
          auVar74._28_4_ = auVar150._28_4_ + auVar90._28_4_;
          if (__real_3f800000 <= param_7) {
            auVar90 = vblendvps_avx(auVar112,auVar74,auVar123);
            in_ZMM8 = ZEXT3264(auVar90);
            auVar90 = vblendvps_avx(auVar93,auVar74,auVar123);
            in_ZMM7 = ZEXT3264(auVar90);
            auVar91 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          else {
            auVar90 = vcvtdq2ps_avx(auVar74);
            auVar128._0_4_ = auVar90._0_4_ * param_7;
            auVar128._4_4_ = auVar90._4_4_ * param_7;
            auVar128._8_4_ = auVar90._8_4_ * param_7;
            auVar128._12_4_ = auVar90._12_4_ * param_7;
            auVar128._16_4_ = auVar90._16_4_ * param_7;
            auVar128._20_4_ = auVar90._20_4_ * param_7;
            auVar128._24_4_ = auVar90._24_4_ * param_7;
            auVar128._28_4_ = auVar90._28_4_ * param_7;
            auVar90 = vroundps_avx(auVar128,9);
            auVar91 = SUB6432(ZEXT864(0),0) << 0x20;
            if (param_8 != '\x01') {
              auVar91 = vsubps_avx(auVar128,auVar90);
            }
            auVar133._0_4_ = (int)auVar90._0_4_;
            auVar133._4_4_ = (int)auVar90._4_4_;
            auVar133._8_4_ = (int)auVar90._8_4_;
            auVar133._12_4_ = (int)auVar90._12_4_;
            auVar133._16_4_ = (int)auVar90._16_4_;
            auVar133._20_4_ = (int)auVar90._20_4_;
            auVar133._24_4_ = (int)auVar90._24_4_;
            auVar133._28_4_ = (int)auVar90._28_4_;
            auVar90 = vpminsd_avx2(auVar133,auVar74);
            auVar90 = vblendvps_avx(auVar112,auVar90,auVar123);
            in_ZMM8 = ZEXT3264(auVar90);
            auVar90 = vpsubd_avx2(auVar90,auVar70);
            auVar74 = vpminsd_avx2(auVar90,auVar74);
            auVar90 = vblendvps_avx(auVar93,auVar74,auVar123);
            in_ZMM7 = ZEXT3264(auVar90);
          }
          goto LAB_140addb35;
        }
      }
      auVar55 = vpcmpeqd_avx(auVar55,auVar55);
      auVar57 = vpgatherqd((undefined1  [16])0x0,auVar55);
      auVar55 = vpcmpeqd_avx(auVar77._0_16_,auVar77._0_16_);
      auVar58._0_12_ = ZEXT812(0);
      auVar58._12_4_ = 0;
      auVar55 = vpgatherqd(auVar58,auVar55);
      auVar97 = vpcmpeqd_avx2(auVar97,auVar97);
      auVar90 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar97);
      auVar91._0_4_ = uVar100 & uVar41;
      auVar91._4_4_ = uVar105 & uVar41;
      auVar91._8_4_ = uVar106 & uVar41;
      auVar91._12_4_ = uVar107 & uVar41;
      auVar91._16_4_ = uVar108 & uVar41;
      auVar91._20_4_ = uVar109 & uVar41;
      auVar91._24_4_ = uVar110 & uVar41;
      auVar91._28_4_ = uVar111 & uVar41;
      auVar77._4_4_ = uVar50;
      auVar77._0_4_ = uVar50;
      auVar77._8_4_ = uVar50;
      auVar77._12_4_ = uVar50;
      auVar77._16_4_ = uVar50;
      auVar77._20_4_ = uVar50;
      auVar77._24_4_ = uVar50;
      auVar77._28_4_ = uVar50;
      auVar97 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar77,auVar91);
      if (param_9 < 7) {
        auVar77 = vpmulld_avx2(in_ZMM8._0_32_,local_3e0);
        switch(param_9) {
        case 0:
        case 1:
          auVar70 = vpcmpeqd_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                                  SUB6432(ZEXT1664((undefined1  [16])0x0),0));
          auVar73 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
          auVar74 = vpcmpeqd_avx2(auVar74,auVar74);
          auVar132 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar92._4_4_ = __real_00000008;
          auVar92._0_4_ = __real_00000008;
          auVar92._8_4_ = __real_00000008;
          auVar92._12_4_ = __real_00000008;
          auVar92._16_4_ = __real_00000008;
          auVar92._20_4_ = __real_00000008;
          auVar92._24_4_ = __real_00000008;
          auVar92._28_4_ = __real_00000008;
          auVar74 = vpcmpeqd_avx2(auVar92,auVar92);
          auVar149 = vgatherdps(ZEXT832(0) << 0x20,auVar74);
          break;
        case 2:
          iVar45 = auVar90._0_4_ + auVar97._0_4_ + auVar77._0_4_;
          iVar46 = auVar90._4_4_ + auVar97._4_4_ + auVar77._4_4_;
          iVar48 = auVar90._8_4_ + auVar97._8_4_ + auVar77._8_4_;
          iVar49 = auVar90._12_4_ + auVar97._12_4_ + auVar77._12_4_;
          iVar51 = auVar90._16_4_ + auVar97._16_4_ + auVar77._16_4_;
          iVar52 = auVar90._20_4_ + auVar97._20_4_ + auVar77._20_4_;
          iVar37 = auVar90._24_4_ + auVar97._24_4_ + auVar77._24_4_;
          iVar38 = auVar90._28_4_ + auVar97._28_4_ + auVar77._28_4_;
          auVar58 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + iVar45)),
                                (uint)*(ushort *)(param_5 + iVar46),1);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar48),2);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar49),3);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar51),4);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar52),5);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar37),6);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar38),7);
          auVar56 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + (iVar45 + __real_00000002))),
                                (uint)*(ushort *)(param_5 + (iVar46 + __real_00000002)),1);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar48 + __real_00000002)),2);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar49 + __real_00000002)),3);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar51 + __real_00000002)),4);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar52 + __real_00000002)),5);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar37 + __real_00000002)),6);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar38 + __real_00000002)),7);
          auVar2 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + (iVar43 + iVar45))),
                               (uint)*(ushort *)(param_5 + (iVar43 + iVar46)),1);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar48)),2);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar49)),3);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar51)),4);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar52)),5);
          auVar74 = vpmovzxwd_avx2(auVar58);
          auVar3._0_4_ = auVar74._0_4_ + __real_ffff8001;
          auVar3._4_4_ = auVar74._4_4_ + __real_ffff8001;
          auVar3._8_4_ = auVar74._8_4_ + __real_ffff8001;
          auVar3._12_4_ = auVar74._12_4_ + __real_ffff8001;
          auVar3._16_4_ = auVar74._16_4_ + __real_ffff8001;
          auVar3._20_4_ = auVar74._20_4_ + __real_ffff8001;
          auVar3._24_4_ = auVar74._24_4_ + __real_ffff8001;
          auVar3._28_4_ = auVar74._28_4_ + __real_ffff8001;
          auVar74 = vcvtdq2ps_avx(auVar3);
          auVar122._4_4_ = __real_46fffe00;
          auVar122._0_4_ = __real_46fffe00;
          auVar122._8_4_ = __real_46fffe00;
          auVar122._12_4_ = __real_46fffe00;
          auVar122._16_4_ = __real_46fffe00;
          auVar122._20_4_ = __real_46fffe00;
          auVar122._24_4_ = __real_46fffe00;
          auVar122._28_4_ = __real_46fffe00;
          auVar70 = vdivps_avx(auVar74,auVar122);
          auVar58 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar37)),6);
          auVar74 = vpmovzxwd_avx2(auVar56);
          auVar4._0_4_ = auVar74._0_4_ + __real_ffff8001;
          auVar4._4_4_ = auVar74._4_4_ + __real_ffff8001;
          auVar4._8_4_ = auVar74._8_4_ + __real_ffff8001;
          auVar4._12_4_ = auVar74._12_4_ + __real_ffff8001;
          auVar4._16_4_ = auVar74._16_4_ + __real_ffff8001;
          auVar4._20_4_ = auVar74._20_4_ + __real_ffff8001;
          auVar4._24_4_ = auVar74._24_4_ + __real_ffff8001;
          auVar4._28_4_ = auVar74._28_4_ + __real_ffff8001;
          auVar74 = vcvtdq2ps_avx(auVar4);
          auVar77 = vdivps_avx(auVar74,auVar122);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + (iVar43 + iVar38)),7);
          auVar74 = vpmovzxwd_avx2(auVar58);
          auVar5._0_4_ = auVar74._0_4_ + __real_ffff8001;
          auVar5._4_4_ = auVar74._4_4_ + __real_ffff8001;
          auVar5._8_4_ = auVar74._8_4_ + __real_ffff8001;
          auVar5._12_4_ = auVar74._12_4_ + __real_ffff8001;
          auVar5._16_4_ = auVar74._16_4_ + __real_ffff8001;
          auVar5._20_4_ = auVar74._20_4_ + __real_ffff8001;
          auVar5._24_4_ = auVar74._24_4_ + __real_ffff8001;
          auVar5._28_4_ = auVar74._28_4_ + __real_ffff8001;
          auVar74 = vcvtdq2ps_avx(auVar5);
          auVar74 = vdivps_avx(auVar74,auVar122);
          auVar73._0_4_ = __real_43000000 * auVar70._0_4_;
          auVar73._4_4_ = __real_43000000 * auVar70._4_4_;
          auVar73._8_4_ = __real_43000000 * auVar70._8_4_;
          auVar73._12_4_ = __real_43000000 * auVar70._12_4_;
          auVar73._16_4_ = __real_43000000 * auVar70._16_4_;
          auVar73._20_4_ = __real_43000000 * auVar70._20_4_;
          auVar73._24_4_ = __real_43000000 * auVar70._24_4_;
          auVar73._28_4_ = __real_43000000 * auVar70._28_4_;
          auVar132._0_4_ = __real_43000000 * auVar77._0_4_;
          auVar132._4_4_ = __real_43000000 * auVar77._4_4_;
          auVar132._8_4_ = __real_43000000 * auVar77._8_4_;
          auVar132._12_4_ = __real_43000000 * auVar77._12_4_;
          auVar132._16_4_ = __real_43000000 * auVar77._16_4_;
          auVar132._20_4_ = __real_43000000 * auVar77._20_4_;
          auVar132._24_4_ = __real_43000000 * auVar77._24_4_;
          auVar132._28_4_ = __real_43000000 * auVar77._28_4_;
          auVar149._0_4_ = __real_43000000 * auVar74._0_4_;
          auVar149._4_4_ = __real_43000000 * auVar74._4_4_;
          auVar149._8_4_ = __real_43000000 * auVar74._8_4_;
          auVar149._12_4_ = __real_43000000 * auVar74._12_4_;
          auVar149._16_4_ = __real_43000000 * auVar74._16_4_;
          auVar149._20_4_ = __real_43000000 * auVar74._20_4_;
          auVar149._24_4_ = __real_43000000 * auVar74._24_4_;
          auVar149._28_4_ = __real_43000000 * auVar74._28_4_;
          break;
        case 3:
          auVar77 = vpcmpeqd_avx2(auVar91,auVar91);
          auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar77);
          auVar74 = vpcmpeqd_avx2(auVar74,auVar74);
          auVar77 = vgatherdps(ZEXT832(0),auVar74);
          auVar74 = vpcmpeqd_avx2(auVar115,auVar115);
          auVar93 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar74 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar128 = vgatherdps(ZEXT432(0) << 0x20,auVar74);
          auVar74 = vpcmpeqd_avx2(in_ZMM13._0_32_,in_ZMM13._0_32_);
          auVar112 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar74 = vpcmpeqd_avx2(auVar70,auVar70);
          auVar123 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar74 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar133 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar149 = vpsrld_avx2(auVar133,0x15);
          auVar74 = vpsrld_avx2(auVar133,10);
          auVar143._4_4_ = __real_000007ff;
          auVar143._0_4_ = __real_000007ff;
          auVar143._8_4_ = __real_000007ff;
          auVar143._12_4_ = __real_000007ff;
          auVar143._16_4_ = __real_000007ff;
          auVar143._20_4_ = __real_000007ff;
          auVar143._24_4_ = __real_000007ff;
          auVar143._28_4_ = __real_000007ff;
          auVar70 = vpand_avx2(auVar143,auVar74);
          auVar75._4_4_ = __real_000003ff;
          auVar75._0_4_ = __real_000003ff;
          auVar75._8_4_ = __real_000003ff;
          auVar75._12_4_ = __real_000003ff;
          auVar75._16_4_ = __real_000003ff;
          auVar75._20_4_ = __real_000003ff;
          auVar75._24_4_ = __real_000003ff;
          auVar75._28_4_ = __real_000003ff;
          auVar74 = vpand_avx2(auVar133,auVar75);
          auVar6._0_4_ = __real_fffffe01 + auVar74._0_4_;
          auVar6._4_4_ = __real_fffffe01 + auVar74._4_4_;
          auVar6._8_4_ = __real_fffffe01 + auVar74._8_4_;
          auVar6._12_4_ = __real_fffffe01 + auVar74._12_4_;
          auVar6._16_4_ = __real_fffffe01 + auVar74._16_4_;
          auVar6._20_4_ = __real_fffffe01 + auVar74._20_4_;
          auVar6._24_4_ = __real_fffffe01 + auVar74._24_4_;
          auVar6._28_4_ = __real_fffffe01 + auVar74._28_4_;
          auVar74 = vcvtdq2ps_avx(auVar6);
          auVar134._4_4_ = __real_43ff8000;
          auVar134._0_4_ = __real_43ff8000;
          auVar134._8_4_ = __real_43ff8000;
          auVar134._12_4_ = __real_43ff8000;
          auVar134._16_4_ = __real_43ff8000;
          auVar134._20_4_ = __real_43ff8000;
          auVar134._24_4_ = __real_43ff8000;
          auVar134._28_4_ = __real_43ff8000;
          auVar74 = vdivps_avx(auVar74,auVar134);
          auVar73._0_4_ = auVar128._0_4_ * auVar74._0_4_ + auVar91._0_4_;
          auVar73._4_4_ = auVar128._4_4_ * auVar74._4_4_ + auVar91._4_4_;
          auVar73._8_4_ = auVar128._8_4_ * auVar74._8_4_ + auVar91._8_4_;
          auVar73._12_4_ = auVar128._12_4_ * auVar74._12_4_ + auVar91._12_4_;
          auVar73._16_4_ = auVar128._16_4_ * auVar74._16_4_ + auVar91._16_4_;
          auVar73._20_4_ = auVar128._20_4_ * auVar74._20_4_ + auVar91._20_4_;
          auVar73._24_4_ = auVar128._24_4_ * auVar74._24_4_ + auVar91._24_4_;
          auVar73._28_4_ = auVar128._28_4_ * auVar74._28_4_ + auVar91._28_4_;
          auVar7._0_4_ = auVar70._0_4_ + __real_fffffc01;
          auVar7._4_4_ = auVar70._4_4_ + __real_fffffc01;
          auVar7._8_4_ = auVar70._8_4_ + __real_fffffc01;
          auVar7._12_4_ = auVar70._12_4_ + __real_fffffc01;
          auVar7._16_4_ = auVar70._16_4_ + __real_fffffc01;
          auVar7._20_4_ = auVar70._20_4_ + __real_fffffc01;
          auVar7._24_4_ = auVar70._24_4_ + __real_fffffc01;
          auVar7._28_4_ = auVar70._28_4_ + __real_fffffc01;
          auVar74 = vcvtdq2ps_avx(auVar7);
          auVar144._4_4_ = __real_447fc000;
          auVar144._0_4_ = __real_447fc000;
          auVar144._8_4_ = __real_447fc000;
          auVar144._12_4_ = __real_447fc000;
          auVar144._16_4_ = __real_447fc000;
          auVar144._20_4_ = __real_447fc000;
          auVar144._24_4_ = __real_447fc000;
          auVar144._28_4_ = __real_447fc000;
          auVar70 = vdivps_avx(auVar74,auVar144);
          auVar8._0_4_ = auVar149._0_4_ + __real_fffffc01;
          auVar8._4_4_ = auVar149._4_4_ + __real_fffffc01;
          auVar8._8_4_ = auVar149._8_4_ + __real_fffffc01;
          auVar8._12_4_ = auVar149._12_4_ + __real_fffffc01;
          auVar8._16_4_ = auVar149._16_4_ + __real_fffffc01;
          auVar8._20_4_ = auVar149._20_4_ + __real_fffffc01;
          auVar8._24_4_ = auVar149._24_4_ + __real_fffffc01;
          auVar8._28_4_ = auVar149._28_4_ + __real_fffffc01;
          auVar74 = vpcmpeqd_avx2(auVar149,auVar149);
          auVar150 = ZEXT3264(auVar74);
          auVar74 = vcvtdq2ps_avx(auVar8);
          auVar74 = vdivps_avx(auVar74,auVar144);
          auVar132._0_4_ = auVar112._0_4_ * auVar70._0_4_ + auVar77._0_4_;
          auVar132._4_4_ = auVar112._4_4_ * auVar70._4_4_ + auVar77._4_4_;
          auVar132._8_4_ = auVar112._8_4_ * auVar70._8_4_ + auVar77._8_4_;
          auVar132._12_4_ = auVar112._12_4_ * auVar70._12_4_ + auVar77._12_4_;
          auVar132._16_4_ = auVar112._16_4_ * auVar70._16_4_ + auVar77._16_4_;
          auVar132._20_4_ = auVar112._20_4_ * auVar70._20_4_ + auVar77._20_4_;
          auVar132._24_4_ = auVar112._24_4_ * auVar70._24_4_ + auVar77._24_4_;
          auVar132._28_4_ = auVar112._28_4_ * auVar70._28_4_ + auVar77._28_4_;
          auVar149._0_4_ = auVar123._0_4_ * auVar74._0_4_ + auVar93._0_4_;
          auVar149._4_4_ = auVar123._4_4_ * auVar74._4_4_ + auVar93._4_4_;
          auVar149._8_4_ = auVar123._8_4_ * auVar74._8_4_ + auVar93._8_4_;
          auVar149._12_4_ = auVar123._12_4_ * auVar74._12_4_ + auVar93._12_4_;
          auVar149._16_4_ = auVar123._16_4_ * auVar74._16_4_ + auVar93._16_4_;
          auVar149._20_4_ = auVar123._20_4_ * auVar74._20_4_ + auVar93._20_4_;
          auVar149._24_4_ = auVar123._24_4_ * auVar74._24_4_ + auVar93._24_4_;
          auVar149._28_4_ = auVar123._28_4_ * auVar74._28_4_ + auVar93._28_4_;
          break;
        default:
          goto switchD_140addba5_caseD_4;
        }
        in_ZMM13 = ZEXT3264(auVar132);
        auVar59._0_4_ = in_ZMM8._0_4_ ^ in_ZMM7._0_4_;
        auVar59._4_4_ = in_ZMM8._4_4_ ^ in_ZMM7._4_4_;
        auVar59._8_4_ = in_ZMM8._8_4_ ^ in_ZMM7._8_4_;
        auVar59._12_4_ = in_ZMM8._12_4_ ^ in_ZMM7._12_4_;
        auVar59._16_4_ = in_ZMM8._16_4_ ^ in_ZMM7._16_4_;
        auVar59._20_4_ = in_ZMM8._20_4_ ^ in_ZMM7._20_4_;
        auVar59._24_4_ = in_ZMM8._24_4_ ^ in_ZMM7._24_4_;
        auVar59._28_4_ = in_ZMM8._28_4_ ^ in_ZMM7._28_4_;
        auVar70 = auVar149;
        auVar74 = auVar73;
        auVar77 = auVar132;
        auVar93 = auVar149;
      }
      else {
switchD_140addba5_caseD_4:
        auVar149 = ZEXT1232(ZEXT412(0)) << 0x20;
        auVar73 = ZEXT1232(ZEXT412(0)) << 0x20;
        in_ZMM13 = ZEXT1664((undefined1  [16])0x0);
        auVar59._0_4_ = in_ZMM8._0_4_ ^ in_ZMM7._0_4_;
        auVar59._4_4_ = in_ZMM8._4_4_ ^ in_ZMM7._4_4_;
        auVar59._8_4_ = in_ZMM8._8_4_ ^ in_ZMM7._8_4_;
        auVar59._12_4_ = in_ZMM8._12_4_ ^ in_ZMM7._12_4_;
        auVar59._16_4_ = in_ZMM8._16_4_ ^ in_ZMM7._16_4_;
        auVar59._20_4_ = in_ZMM8._20_4_ ^ in_ZMM7._20_4_;
        auVar59._24_4_ = in_ZMM8._24_4_ ^ in_ZMM7._24_4_;
        auVar59._28_4_ = in_ZMM8._28_4_ ^ in_ZMM7._28_4_;
        auVar132 = auVar149;
        auVar70 = ZEXT832(0) << 0x20;
        auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar77 = in_ZMM13._0_32_;
        auVar93 = ZEXT832(0) << 0x20;
      }
      if (auVar59 != (undefined1  [32])0x0) {
        auVar70 = vpcmpeqd_avx2(in_ZMM8._0_32_,in_ZMM7._0_32_);
        auVar112 = vpcmpeqd_avx2(auVar59,auVar59);
        auVar112 = auVar70 ^ auVar112;
        if (param_9 < 7) {
          auVar123 = vpmulld_avx2(in_ZMM7._0_32_,local_3e0);
          switch(param_9) {
          case 0:
          case 1:
            auVar70 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar90 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar97 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            local_380 = vmaskmovps_avx(auVar112,auVar70);
            local_360 = vmaskmovps_avx(auVar112,auVar90);
            local_340 = vmaskmovps_avx(auVar112,auVar97);
            break;
          case 2:
            auVar9._0_4_ = auVar123._0_4_ + auVar90._0_4_ + auVar97._0_4_;
            auVar9._4_4_ = auVar123._4_4_ + auVar90._4_4_ + auVar97._4_4_;
            auVar9._8_4_ = auVar123._8_4_ + auVar90._8_4_ + auVar97._8_4_;
            auVar9._12_4_ = auVar123._12_4_ + auVar90._12_4_ + auVar97._12_4_;
            auVar9._16_4_ = auVar123._16_4_ + auVar90._16_4_ + auVar97._16_4_;
            auVar9._20_4_ = auVar123._20_4_ + auVar90._20_4_ + auVar97._20_4_;
            auVar9._24_4_ = auVar123._24_4_ + auVar90._24_4_ + auVar97._24_4_;
            auVar9._28_4_ = auVar123._28_4_ + auVar90._28_4_ + auVar97._28_4_;
            auVar74 = vpandn_avx2(auVar70,auVar9);
            auVar58 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar74._0_4_)),
                                  (uint)*(ushort *)(param_5 + auVar74._4_4_),1);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._8_4_),2);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._12_4_),3);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._16_4_),4);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._20_4_),5);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._24_4_),6);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._28_4_),7);
            auVar10._0_4_ = auVar9._0_4_ + __real_00000002;
            auVar10._4_4_ = auVar9._4_4_ + __real_00000002;
            auVar10._8_4_ = auVar9._8_4_ + __real_00000002;
            auVar10._12_4_ = auVar9._12_4_ + __real_00000002;
            auVar10._16_4_ = auVar9._16_4_ + __real_00000002;
            auVar10._20_4_ = auVar9._20_4_ + __real_00000002;
            auVar10._24_4_ = auVar9._24_4_ + __real_00000002;
            auVar10._28_4_ = auVar9._28_4_ + __real_00000002;
            auVar74 = vpandn_avx2(auVar70,auVar10);
            auVar56 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar74._0_4_)),
                                  (uint)*(ushort *)(param_5 + auVar74._4_4_),1);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._8_4_),2);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._12_4_),3);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._16_4_),4);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._20_4_),5);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._24_4_),6);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._28_4_),7);
            auVar11._0_4_ = iVar43 + auVar9._0_4_;
            auVar11._4_4_ = iVar43 + auVar9._4_4_;
            auVar11._8_4_ = iVar43 + auVar9._8_4_;
            auVar11._12_4_ = iVar43 + auVar9._12_4_;
            auVar11._16_4_ = iVar43 + auVar9._16_4_;
            auVar11._20_4_ = iVar43 + auVar9._20_4_;
            auVar11._24_4_ = iVar43 + auVar9._24_4_;
            auVar11._28_4_ = iVar43 + auVar9._28_4_;
            auVar77 = vpandn_avx2(auVar70,auVar11);
            auVar2 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar77._0_4_)),
                                 (uint)*(ushort *)(param_5 + auVar77._4_4_),1);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._8_4_),2);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._12_4_),3);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._16_4_),4);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._20_4_),5);
            auVar74 = vpmovzxwd_avx2(auVar58);
            auVar12._0_4_ = auVar74._0_4_ + __real_ffff8001;
            auVar12._4_4_ = auVar74._4_4_ + __real_ffff8001;
            auVar12._8_4_ = auVar74._8_4_ + __real_ffff8001;
            auVar12._12_4_ = auVar74._12_4_ + __real_ffff8001;
            auVar12._16_4_ = auVar74._16_4_ + __real_ffff8001;
            auVar12._20_4_ = auVar74._20_4_ + __real_ffff8001;
            auVar12._24_4_ = auVar74._24_4_ + __real_ffff8001;
            auVar12._28_4_ = auVar74._28_4_ + __real_ffff8001;
            auVar74 = vcvtdq2ps_avx(auVar12);
            auVar94._4_4_ = __real_46fffe00;
            auVar94._0_4_ = __real_46fffe00;
            auVar94._8_4_ = __real_46fffe00;
            auVar94._12_4_ = __real_46fffe00;
            auVar94._16_4_ = __real_46fffe00;
            auVar94._20_4_ = __real_46fffe00;
            auVar94._24_4_ = __real_46fffe00;
            auVar94._28_4_ = __real_46fffe00;
            auVar70 = vdivps_avx(auVar74,auVar94);
            auVar58 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._24_4_),6);
            auVar74 = vpmovzxwd_avx2(auVar56);
            auVar13._0_4_ = auVar74._0_4_ + __real_ffff8001;
            auVar13._4_4_ = auVar74._4_4_ + __real_ffff8001;
            auVar13._8_4_ = auVar74._8_4_ + __real_ffff8001;
            auVar13._12_4_ = auVar74._12_4_ + __real_ffff8001;
            auVar13._16_4_ = auVar74._16_4_ + __real_ffff8001;
            auVar13._20_4_ = auVar74._20_4_ + __real_ffff8001;
            auVar13._24_4_ = auVar74._24_4_ + __real_ffff8001;
            auVar13._28_4_ = auVar74._28_4_ + __real_ffff8001;
            auVar74 = vcvtdq2ps_avx(auVar13);
            auVar97 = vdivps_avx(auVar74,auVar94);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar77._28_4_),7);
            auVar74 = vpmovzxwd_avx2(auVar58);
            auVar14._0_4_ = auVar74._0_4_ + __real_ffff8001;
            auVar14._4_4_ = auVar74._4_4_ + __real_ffff8001;
            auVar14._8_4_ = auVar74._8_4_ + __real_ffff8001;
            auVar14._12_4_ = auVar74._12_4_ + __real_ffff8001;
            auVar14._16_4_ = auVar74._16_4_ + __real_ffff8001;
            auVar14._20_4_ = auVar74._20_4_ + __real_ffff8001;
            auVar14._24_4_ = auVar74._24_4_ + __real_ffff8001;
            auVar14._28_4_ = auVar74._28_4_ + __real_ffff8001;
            auVar74 = vcvtdq2ps_avx(auVar14);
            auVar74 = vdivps_avx(auVar74,auVar94);
            auVar76._0_4_ = auVar70._0_4_ * __real_43000000;
            auVar76._4_4_ = auVar70._4_4_ * __real_43000000;
            auVar76._8_4_ = auVar70._8_4_ * __real_43000000;
            auVar76._12_4_ = auVar70._12_4_ * __real_43000000;
            auVar76._16_4_ = auVar70._16_4_ * __real_43000000;
            auVar76._20_4_ = auVar70._20_4_ * __real_43000000;
            auVar76._24_4_ = auVar70._24_4_ * __real_43000000;
            auVar76._28_4_ = auVar70._28_4_ * __real_43000000;
            auVar95._0_4_ = auVar97._0_4_ * __real_43000000;
            auVar95._4_4_ = auVar97._4_4_ * __real_43000000;
            auVar95._8_4_ = auVar97._8_4_ * __real_43000000;
            auVar95._12_4_ = auVar97._12_4_ * __real_43000000;
            auVar95._16_4_ = auVar97._16_4_ * __real_43000000;
            auVar95._20_4_ = auVar97._20_4_ * __real_43000000;
            auVar95._24_4_ = auVar97._24_4_ * __real_43000000;
            auVar95._28_4_ = auVar97._28_4_ * __real_43000000;
            auVar61._0_4_ = auVar74._0_4_ * __real_43000000;
            auVar61._4_4_ = auVar74._4_4_ * __real_43000000;
            auVar61._8_4_ = auVar74._8_4_ * __real_43000000;
            auVar61._12_4_ = auVar74._12_4_ * __real_43000000;
            auVar61._16_4_ = auVar74._16_4_ * __real_43000000;
            auVar61._20_4_ = auVar74._20_4_ * __real_43000000;
            auVar61._24_4_ = auVar74._24_4_ * __real_43000000;
            auVar61._28_4_ = auVar74._28_4_ * __real_43000000;
            local_380 = vmaskmovps_avx(auVar112,auVar76);
            local_360 = vmaskmovps_avx(auVar112,auVar95);
            local_340 = vmaskmovps_avx(auVar112,auVar61);
            auVar74 = auVar73;
            auVar77 = auVar132;
            auVar93 = auVar149;
            break;
          case 3:
            auVar90 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar123 = vgatherdps(ZEXT832(0) << 0x20,auVar112);
            auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar112);
            auVar132 = vgatherdps(ZEXT832(0),auVar112);
            auVar133 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar73 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar70 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar128 = vpsrld_avx2(auVar70,0x15);
            auVar149 = vpsrld_avx2(auVar70,10);
            auVar113._4_4_ = __real_000007ff;
            auVar113._0_4_ = __real_000007ff;
            auVar113._8_4_ = __real_000007ff;
            auVar113._12_4_ = __real_000007ff;
            auVar113._16_4_ = __real_000007ff;
            auVar113._20_4_ = __real_000007ff;
            auVar113._24_4_ = __real_000007ff;
            auVar113._28_4_ = __real_000007ff;
            auVar145._4_4_ = __real_000003ff;
            auVar145._0_4_ = __real_000003ff;
            auVar145._8_4_ = __real_000003ff;
            auVar145._12_4_ = __real_000003ff;
            auVar145._16_4_ = __real_000003ff;
            auVar145._20_4_ = __real_000003ff;
            auVar145._24_4_ = __real_000003ff;
            auVar145._28_4_ = __real_000003ff;
            auVar70 = vpand_avx2(auVar145,auVar70);
            auVar15._0_4_ = __real_fffffe01 + auVar70._0_4_;
            auVar15._4_4_ = __real_fffffe01 + auVar70._4_4_;
            auVar15._8_4_ = __real_fffffe01 + auVar70._8_4_;
            auVar15._12_4_ = __real_fffffe01 + auVar70._12_4_;
            auVar15._16_4_ = __real_fffffe01 + auVar70._16_4_;
            auVar15._20_4_ = __real_fffffe01 + auVar70._20_4_;
            auVar15._24_4_ = __real_fffffe01 + auVar70._24_4_;
            auVar15._28_4_ = __real_fffffe01 + auVar70._28_4_;
            auVar70 = vcvtdq2ps_avx(auVar15);
            auVar146._4_4_ = __real_43ff8000;
            auVar146._0_4_ = __real_43ff8000;
            auVar146._8_4_ = __real_43ff8000;
            auVar146._12_4_ = __real_43ff8000;
            auVar146._16_4_ = __real_43ff8000;
            auVar146._20_4_ = __real_43ff8000;
            auVar146._24_4_ = __real_43ff8000;
            auVar146._28_4_ = __real_43ff8000;
            auVar97 = vdivps_avx(auVar70,auVar146);
            auVar70 = vpand_avx2(auVar149,auVar113);
            auVar16._0_4_ = auVar70._0_4_ + __real_fffffc01;
            auVar16._4_4_ = auVar70._4_4_ + __real_fffffc01;
            auVar16._8_4_ = auVar70._8_4_ + __real_fffffc01;
            auVar16._12_4_ = auVar70._12_4_ + __real_fffffc01;
            auVar16._16_4_ = auVar70._16_4_ + __real_fffffc01;
            auVar16._20_4_ = auVar70._20_4_ + __real_fffffc01;
            auVar16._24_4_ = auVar70._24_4_ + __real_fffffc01;
            auVar16._28_4_ = auVar70._28_4_ + __real_fffffc01;
            auVar70 = vcvtdq2ps_avx(auVar16);
            auVar147._4_4_ = __real_447fc000;
            auVar147._0_4_ = __real_447fc000;
            auVar147._8_4_ = __real_447fc000;
            auVar147._12_4_ = __real_447fc000;
            auVar147._16_4_ = __real_447fc000;
            auVar147._20_4_ = __real_447fc000;
            auVar147._24_4_ = __real_447fc000;
            auVar147._28_4_ = __real_447fc000;
            auVar70 = vdivps_avx(auVar70,auVar147);
            local_2c0 = auVar90._0_4_;
            auVar83._0_4_ = auVar132._0_4_ * auVar97._0_4_ + local_2c0;
            fStack_2bc = auVar90._4_4_;
            auVar83._4_4_ = auVar132._4_4_ * auVar97._4_4_ + fStack_2bc;
            fStack_2b8 = auVar90._8_4_;
            auVar83._8_4_ = auVar132._8_4_ * auVar97._8_4_ + fStack_2b8;
            fStack_2b4 = auVar90._12_4_;
            auVar83._12_4_ = auVar132._12_4_ * auVar97._12_4_ + fStack_2b4;
            fStack_2b0 = auVar90._16_4_;
            auVar83._16_4_ = auVar132._16_4_ * auVar97._16_4_ + fStack_2b0;
            fStack_2ac = auVar90._20_4_;
            auVar83._20_4_ = auVar132._20_4_ * auVar97._20_4_ + fStack_2ac;
            fStack_2a8 = auVar90._24_4_;
            auVar83._24_4_ = auVar132._24_4_ * auVar97._24_4_ + fStack_2a8;
            fStack_2a4 = auVar90._28_4_;
            auVar83._28_4_ = auVar132._28_4_ * auVar97._28_4_ + fStack_2a4;
            local_2e0 = auVar123._0_4_;
            auVar101._0_4_ = auVar133._0_4_ * auVar70._0_4_ + local_2e0;
            fStack_2dc = auVar123._4_4_;
            auVar101._4_4_ = auVar133._4_4_ * auVar70._4_4_ + fStack_2dc;
            fStack_2d8 = auVar123._8_4_;
            auVar101._8_4_ = auVar133._8_4_ * auVar70._8_4_ + fStack_2d8;
            fStack_2d4 = auVar123._12_4_;
            auVar101._12_4_ = auVar133._12_4_ * auVar70._12_4_ + fStack_2d4;
            fStack_2d0 = auVar123._16_4_;
            auVar101._16_4_ = auVar133._16_4_ * auVar70._16_4_ + fStack_2d0;
            fStack_2cc = auVar123._20_4_;
            auVar101._20_4_ = auVar133._20_4_ * auVar70._20_4_ + fStack_2cc;
            fStack_2c8 = auVar123._24_4_;
            auVar101._24_4_ = auVar133._24_4_ * auVar70._24_4_ + fStack_2c8;
            fStack_2c4 = auVar123._28_4_;
            auVar101._28_4_ = auVar133._28_4_ * auVar70._28_4_ + fStack_2c4;
            auVar17._0_4_ = auVar128._0_4_ + __real_fffffc01;
            auVar17._4_4_ = auVar128._4_4_ + __real_fffffc01;
            auVar17._8_4_ = auVar128._8_4_ + __real_fffffc01;
            auVar17._12_4_ = auVar128._12_4_ + __real_fffffc01;
            auVar17._16_4_ = auVar128._16_4_ + __real_fffffc01;
            auVar17._20_4_ = auVar128._20_4_ + __real_fffffc01;
            auVar17._24_4_ = auVar128._24_4_ + __real_fffffc01;
            auVar17._28_4_ = auVar128._28_4_ + __real_fffffc01;
            auVar70 = vcvtdq2ps_avx(auVar17);
            auVar70 = vdivps_avx(auVar70,auVar147);
            local_300 = auVar91._0_4_;
            auVar60._0_4_ = auVar73._0_4_ * auVar70._0_4_ + local_300;
            fStack_2fc = auVar91._4_4_;
            auVar60._4_4_ = auVar73._4_4_ * auVar70._4_4_ + fStack_2fc;
            fStack_2f8 = auVar91._8_4_;
            auVar60._8_4_ = auVar73._8_4_ * auVar70._8_4_ + fStack_2f8;
            fStack_2f4 = auVar91._12_4_;
            auVar60._12_4_ = auVar73._12_4_ * auVar70._12_4_ + fStack_2f4;
            fStack_2f0 = auVar91._16_4_;
            auVar60._16_4_ = auVar73._16_4_ * auVar70._16_4_ + fStack_2f0;
            fStack_2ec = auVar91._20_4_;
            auVar60._20_4_ = auVar73._20_4_ * auVar70._20_4_ + fStack_2ec;
            fStack_2e8 = auVar91._24_4_;
            auVar60._24_4_ = auVar73._24_4_ * auVar70._24_4_ + fStack_2e8;
            fStack_2e4 = auVar91._28_4_;
            auVar60._28_4_ = auVar73._28_4_ * auVar70._28_4_ + fStack_2e4;
            local_380 = vmaskmovps_avx(auVar112,auVar83);
            local_360 = vmaskmovps_avx(auVar112,auVar101);
            goto LAB_140ade46d;
          default:
            goto switchD_140ade008_caseD_4;
          }
        }
        else {
switchD_140ade008_caseD_4:
          auVar60 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          local_380 = vmaskmovps_avx(auVar112,auVar60);
          local_360 = vmaskmovps_avx(auVar112,auVar60);
LAB_140ade46d:
          local_340 = vmaskmovps_avx(auVar112,auVar60);
        }
        auVar70 = vsubps_avx(local_380,auVar74);
        auVar97 = vsubps_avx(local_360,auVar77);
        auVar90 = vsubps_avx(local_340,auVar93);
        local_460 = auVar81._0_4_;
        fStack_45c = auVar81._4_4_;
        fStack_458 = auVar81._8_4_;
        fStack_454 = auVar81._12_4_;
        fStack_450 = auVar81._16_4_;
        fStack_44c = auVar81._20_4_;
        fStack_448 = auVar81._24_4_;
        fStack_444 = auVar81._28_4_;
        auVar62._0_4_ = local_460 * auVar70._0_4_ + auVar74._0_4_;
        auVar62._4_4_ = fStack_45c * auVar70._4_4_ + auVar74._4_4_;
        auVar62._8_4_ = fStack_458 * auVar70._8_4_ + auVar74._8_4_;
        auVar62._12_4_ = fStack_454 * auVar70._12_4_ + auVar74._12_4_;
        auVar62._16_4_ = fStack_450 * auVar70._16_4_ + auVar74._16_4_;
        auVar62._20_4_ = fStack_44c * auVar70._20_4_ + auVar74._20_4_;
        auVar62._24_4_ = fStack_448 * auVar70._24_4_ + auVar74._24_4_;
        auVar62._28_4_ = fStack_444 * auVar70._28_4_ + auVar74._28_4_;
        auVar84._0_4_ = local_460 * auVar97._0_4_ + auVar77._0_4_;
        auVar84._4_4_ = fStack_45c * auVar97._4_4_ + auVar77._4_4_;
        auVar84._8_4_ = fStack_458 * auVar97._8_4_ + auVar77._8_4_;
        auVar84._12_4_ = fStack_454 * auVar97._12_4_ + auVar77._12_4_;
        auVar84._16_4_ = fStack_450 * auVar97._16_4_ + auVar77._16_4_;
        auVar84._20_4_ = fStack_44c * auVar97._20_4_ + auVar77._20_4_;
        auVar84._24_4_ = fStack_448 * auVar97._24_4_ + auVar77._24_4_;
        auVar84._28_4_ = fStack_444 * auVar97._28_4_ + auVar77._28_4_;
        auVar96._0_4_ = local_460 * auVar90._0_4_ + auVar93._0_4_;
        auVar96._4_4_ = fStack_45c * auVar90._4_4_ + auVar93._4_4_;
        auVar96._8_4_ = fStack_458 * auVar90._8_4_ + auVar93._8_4_;
        auVar96._12_4_ = fStack_454 * auVar90._12_4_ + auVar93._12_4_;
        auVar96._16_4_ = fStack_450 * auVar90._16_4_ + auVar93._16_4_;
        auVar96._20_4_ = fStack_44c * auVar90._20_4_ + auVar93._20_4_;
        auVar96._24_4_ = fStack_448 * auVar90._24_4_ + auVar93._24_4_;
        auVar96._28_4_ = fStack_444 * auVar90._28_4_ + auVar93._28_4_;
        auVar74 = vmaskmovps_avx(auVar112,auVar62);
        auVar97 = vmaskmovps_avx(auVar112,auVar84);
        auVar70 = vmaskmovps_avx(auVar112,auVar96);
        in_ZMM13 = ZEXT3264(auVar97);
        auVar97 = vpcmpeqd_avx2(auVar112,auVar112);
        auVar150 = ZEXT3264(auVar97);
      }
      local_220._16_16_ = ZEXT116(1) * auVar55;
      local_220._0_16_ = ZEXT116(0) * auVar55 | ZEXT116(1) * auVar57;
      auVar85._16_16_ = in_ZMM13._0_16_;
      auVar85._0_16_ = auVar74._0_16_;
      in_ZMM6 = ZEXT3264(___ymm_0000000000000000000000050000000100000000000000000000000400000000);
      auVar97 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000
                             ,auVar85);
      auVar77 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000
                             ,ZEXT1632(auVar70._0_16_));
      local_180 = vblendps_avx(auVar97,auVar77,0xcc);
      in_ZMM4 = ZEXT3264(___ymm_0000000000000000000000070000000300000000000000000000000600000002);
      auVar97 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002
                             ,auVar85);
      auVar77 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000
                             ,ZEXT1632(auVar70._0_16_));
      local_160 = vblendps_avx(auVar97,auVar77,0xcc);
      auVar74 = vperm2f128_avx(auVar74,in_ZMM13._0_32_,0x31);
      auVar97 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000
                             ,auVar74);
      auVar77 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000
                             ,ZEXT1632(auVar70._16_16_));
      local_140 = vblendps_avx(auVar97,auVar77,0xcc);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002
                             ,auVar74);
      auVar70 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000
                             ,ZEXT1632(auVar70._16_16_));
      local_120 = vblendps_avx(auVar74,auVar70,0xcc);
      uVar47 = 0xff;
      do {
        uVar42 = 0;
        for (uVar39 = uVar47; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        bVar1 = (byte)uVar42 & 0x3f;
        auVar74 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar42 << 4)));
        *(undefined1 (*) [32])
         (param_1 + 0x40 + (longlong)*(int *)(local_220 + (ulonglong)(uVar42 & 7) * 4) * 0x60) =
             auVar74;
        uVar47 = uVar47 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
      } while (uVar47 != 0);
      iVar53 = iVar53 + 8;
      in_ZMM11 = ZEXT3264(auVar81);
    } while (iVar53 < (int)(uVar44 & 0xfffffff8));
    if ((int)param_10 <= iVar53) {
      return;
    }
  }
  auVar63._4_4_ = iVar53;
  auVar63._0_4_ = iVar53;
  auVar63._8_4_ = iVar53;
  auVar63._12_4_ = iVar53;
  auVar63._16_4_ = iVar53;
  auVar63._20_4_ = iVar53;
  auVar63._24_4_ = iVar53;
  auVar63._28_4_ = iVar53;
  auVar115 = vpor_avx2(auVar63,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar71._4_4_ = param_10;
  auVar71._0_4_ = param_10;
  auVar71._8_4_ = param_10;
  auVar71._12_4_ = param_10;
  auVar71._16_4_ = param_10;
  auVar71._20_4_ = param_10;
  auVar71._24_4_ = param_10;
  auVar71._28_4_ = param_10;
  auVar74 = vpcmpgtd_avx2(auVar71,auVar115);
  auVar115 = vpslld_avx2(auVar115,3);
  auVar148._4_4_ = __real_00000004;
  auVar148._0_4_ = __real_00000004;
  auVar148._8_4_ = __real_00000004;
  auVar148._12_4_ = __real_00000004;
  auVar148._16_4_ = __real_00000004;
  auVar148._20_4_ = __real_00000004;
  auVar148._24_4_ = __real_00000004;
  auVar148._28_4_ = __real_00000004;
  vpor_avx2(auVar148,auVar115);
  auVar115 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
  auVar55 = vpslld_avx(ZEXT416(param_4),2);
  auVar64._0_4_ = auVar55._0_4_;
  auVar64._4_4_ = auVar64._0_4_;
  auVar64._8_4_ = auVar64._0_4_;
  auVar64._12_4_ = auVar64._0_4_;
  auVar64._16_4_ = auVar64._0_4_;
  auVar64._20_4_ = auVar64._0_4_;
  auVar64._24_4_ = auVar64._0_4_;
  auVar64._28_4_ = auVar64._0_4_;
  vpmulld_avx2(auVar115,auVar64);
  auVar77 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
  auVar65._4_4_ = __real_00000001;
  auVar65._0_4_ = __real_00000001;
  auVar65._8_4_ = __real_00000001;
  auVar65._12_4_ = __real_00000001;
  auVar65._16_4_ = __real_00000001;
  auVar65._20_4_ = __real_00000001;
  auVar65._24_4_ = __real_00000001;
  auVar65._28_4_ = __real_00000001;
  auVar70 = vpcmpgtd_avx2(auVar77,auVar65);
  auVar142 = vpandn_avx2(auVar70,auVar74);
  iVar43 = vmovmskps_avx(auVar142);
  auVar55._0_12_ = ZEXT812(0);
  auVar55._12_4_ = 0;
  auVar97 = ZEXT1632(auVar55);
  auVar115 = ZEXT1632(auVar55);
  uVar44 = auVar74._0_4_;
  uVar41 = auVar74._4_4_;
  uVar42 = auVar74._8_4_;
  uVar100 = auVar74._12_4_;
  uVar105 = auVar74._16_4_;
  uVar106 = auVar74._20_4_;
  uVar107 = auVar74._24_4_;
  uVar108 = auVar74._28_4_;
  if (iVar43 == 0) {
LAB_140ade6c4:
    auVar90 = vpcmpeqd_avx2(auVar81,auVar81);
    auVar72._0_4_ = auVar90._0_4_ ^ auVar97._0_4_;
    auVar72._4_4_ = auVar90._4_4_ ^ auVar97._4_4_;
    auVar72._8_4_ = auVar90._8_4_ ^ auVar97._8_4_;
    auVar72._12_4_ = auVar90._12_4_ ^ auVar97._12_4_;
    auVar72._16_4_ = auVar90._16_4_ ^ auVar97._16_4_;
    auVar72._20_4_ = auVar90._20_4_ ^ auVar97._20_4_;
    auVar72._24_4_ = auVar90._24_4_ ^ auVar97._24_4_;
    auVar72._28_4_ = auVar90._28_4_ ^ auVar97._28_4_;
    auVar115 = ZEXT432(0) << 0x20;
    auVar57._0_12_ = ZEXT812(0);
    auVar57._12_4_ = 0;
    auVar142 = ZEXT1632(auVar57);
    auVar81 = SUB6432(ZEXT864(0),0);
    if (0.0 < param_7) {
      auVar18._0_4_ = auVar90._0_4_ + auVar77._0_4_;
      auVar18._4_4_ = auVar90._4_4_ + auVar77._4_4_;
      auVar18._8_4_ = auVar90._8_4_ + auVar77._8_4_;
      auVar18._12_4_ = auVar90._12_4_ + auVar77._12_4_;
      auVar18._16_4_ = auVar90._16_4_ + auVar77._16_4_;
      auVar18._20_4_ = auVar90._20_4_ + auVar77._20_4_;
      auVar18._24_4_ = auVar90._24_4_ + auVar77._24_4_;
      auVar18._28_4_ = auVar90._28_4_ + auVar77._28_4_;
      if (__real_3f800000 <= param_7) {
        auVar103._0_4_ = uVar44 & auVar72._0_4_;
        auVar103._4_4_ = uVar41 & auVar72._4_4_;
        auVar103._8_4_ = uVar42 & auVar72._8_4_;
        auVar103._12_4_ = uVar100 & auVar72._12_4_;
        auVar103._16_4_ = uVar105 & auVar72._16_4_;
        auVar103._20_4_ = uVar106 & auVar72._20_4_;
        auVar103._24_4_ = uVar107 & auVar72._24_4_;
        auVar103._28_4_ = uVar108 & auVar72._28_4_;
        auVar115 = vblendvps_avx(ZEXT1632(auVar57),auVar18,auVar103);
        auVar81 = auVar115;
      }
      else {
        auVar81 = vcvtdq2ps_avx(auVar18);
        auVar129._0_4_ = param_7 * auVar81._0_4_;
        auVar129._4_4_ = param_7 * auVar81._4_4_;
        auVar129._8_4_ = param_7 * auVar81._8_4_;
        auVar129._12_4_ = param_7 * auVar81._12_4_;
        auVar129._16_4_ = param_7 * auVar81._16_4_;
        auVar129._20_4_ = param_7 * auVar81._20_4_;
        auVar129._24_4_ = param_7 * auVar81._24_4_;
        auVar129._28_4_ = param_7 * auVar81._28_4_;
        auVar114._0_4_ = uVar44 & auVar72._0_4_;
        auVar114._4_4_ = uVar41 & auVar72._4_4_;
        auVar114._8_4_ = uVar42 & auVar72._8_4_;
        auVar114._12_4_ = uVar100 & auVar72._12_4_;
        auVar114._16_4_ = uVar105 & auVar72._16_4_;
        auVar114._20_4_ = uVar106 & auVar72._20_4_;
        auVar114._24_4_ = uVar107 & auVar72._24_4_;
        auVar114._28_4_ = uVar108 & auVar72._28_4_;
        auVar81 = vroundps_avx(auVar129,9);
        auVar102._0_4_ = (int)auVar81._0_4_;
        auVar102._4_4_ = (int)auVar81._4_4_;
        auVar102._8_4_ = (int)auVar81._8_4_;
        auVar102._12_4_ = (int)auVar81._12_4_;
        auVar102._16_4_ = (int)auVar81._16_4_;
        auVar102._20_4_ = (int)auVar81._20_4_;
        auVar102._24_4_ = (int)auVar81._24_4_;
        auVar102._28_4_ = (int)auVar81._28_4_;
        auVar115 = vpminsd_avx2(auVar102,auVar18);
        auVar115 = vblendvps_avx(ZEXT832(0) << 0x20,auVar115,auVar114);
        auVar142 = ZEXT1632(auVar57);
        if (param_8 != '\x01') {
          auVar142 = vsubps_avx(auVar129,auVar81);
        }
        auVar81 = vpcmpeqd_avx2(auVar129,auVar129);
        auVar81 = vpsubd_avx2(auVar115,auVar81);
        auVar81 = vpminsd_avx2(auVar81,auVar18);
        auVar81 = vblendvps_avx(ZEXT832(0) << 0x20,auVar81,auVar114);
      }
    }
    auVar142 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar142,auVar72);
  }
  else {
    uVar50 = vmovmskps_avx(auVar74);
    if ((char)uVar50 != (char)iVar43) {
      auVar55 = vpackssdw_avx(auVar142._0_16_,auVar142._16_16_);
      auVar97 = vpmovsxwd_avx2(auVar55);
      goto LAB_140ade6c4;
    }
    auVar142 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar81 = SUB6432(ZEXT864(0),0);
  }
  local_240 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar74);
  auVar97 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar74);
  iVar43 = -(uint)(param_9 == 3);
  auVar116._4_4_ = iVar43;
  auVar116._0_4_ = iVar43;
  auVar116._8_4_ = iVar43;
  auVar116._12_4_ = iVar43;
  auVar116._16_4_ = iVar43;
  auVar116._20_4_ = iVar43;
  auVar116._24_4_ = iVar43;
  auVar116._28_4_ = iVar43;
  auVar70 = vpand_avx2(auVar70,auVar116);
  auVar120._4_4_ = __real_00000018;
  auVar120._0_4_ = __real_00000018;
  auVar120._8_4_ = __real_00000018;
  auVar120._12_4_ = __real_00000018;
  auVar120._16_4_ = __real_00000018;
  auVar120._20_4_ = __real_00000018;
  auVar120._24_4_ = __real_00000018;
  auVar120._28_4_ = __real_00000018;
  auVar77 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar70 = vblendvps_avx(auVar77,auVar120,auVar70);
  auVar121._4_4_ = local_3e0._4_4_;
  auVar121._0_4_ = local_3e0._4_4_;
  auVar121._8_4_ = local_3e0._4_4_;
  auVar121._12_4_ = local_3e0._4_4_;
  auVar121._16_4_ = local_3e0._4_4_;
  auVar121._20_4_ = local_3e0._4_4_;
  auVar121._24_4_ = local_3e0._4_4_;
  auVar121._28_4_ = local_3e0._4_4_;
  if (param_9 < 7) {
    auVar90 = vpmulld_avx2(auVar115,auVar121);
    switch(param_9) {
    default:
      auVar90 = vgatherdps(ZEXT832(0),auVar74);
      auVar93 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar74);
      auVar77 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
      local_540 = vmaskmovps_avx(auVar74,auVar90);
      local_520 = vmaskmovps_avx(auVar74,auVar93);
      local_500._0_32_ = vmaskmovps_avx(auVar74,auVar77);
      auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
      auVar115 = auVar74 & ~auVar77;
      if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
            (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
          (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140adf0d4;
      break;
    case 2:
      auVar19._0_4_ = auVar90._0_4_ + auVar97._0_4_ + auVar70._0_4_;
      auVar19._4_4_ = auVar90._4_4_ + auVar97._4_4_ + auVar70._4_4_;
      auVar19._8_4_ = auVar90._8_4_ + auVar97._8_4_ + auVar70._8_4_;
      auVar19._12_4_ = auVar90._12_4_ + auVar97._12_4_ + auVar70._12_4_;
      auVar19._16_4_ = auVar90._16_4_ + auVar97._16_4_ + auVar70._16_4_;
      auVar19._20_4_ = auVar90._20_4_ + auVar97._20_4_ + auVar70._20_4_;
      auVar19._24_4_ = auVar90._24_4_ + auVar97._24_4_ + auVar70._24_4_;
      auVar19._28_4_ = auVar90._28_4_ + auVar97._28_4_ + auVar70._28_4_;
      auVar77 = vpand_avx2(auVar74,auVar19);
      auVar55 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar77._0_4_)),
                            (uint)*(ushort *)(param_5 + auVar77._4_4_),1);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._8_4_),2);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._12_4_),3);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._16_4_),4);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._20_4_),5);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._24_4_),6);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._28_4_),7);
      auVar20._0_4_ = auVar19._0_4_ + __real_00000002;
      auVar20._4_4_ = auVar19._4_4_ + __real_00000002;
      auVar20._8_4_ = auVar19._8_4_ + __real_00000002;
      auVar20._12_4_ = auVar19._12_4_ + __real_00000002;
      auVar20._16_4_ = auVar19._16_4_ + __real_00000002;
      auVar20._20_4_ = auVar19._20_4_ + __real_00000002;
      auVar20._24_4_ = auVar19._24_4_ + __real_00000002;
      auVar20._28_4_ = auVar19._28_4_ + __real_00000002;
      auVar77 = vpand_avx2(auVar74,auVar20);
      auVar57 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar77._0_4_)),
                            (uint)*(ushort *)(param_5 + auVar77._4_4_),1);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._8_4_),2);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._12_4_),3);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._16_4_),4);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._20_4_),5);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._24_4_),6);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._28_4_),7);
      auVar21._0_4_ = auVar19._0_4_ + __real_00000004;
      auVar21._4_4_ = auVar19._4_4_ + __real_00000004;
      auVar21._8_4_ = auVar19._8_4_ + __real_00000004;
      auVar21._12_4_ = auVar19._12_4_ + __real_00000004;
      auVar21._16_4_ = auVar19._16_4_ + __real_00000004;
      auVar21._20_4_ = auVar19._20_4_ + __real_00000004;
      auVar21._24_4_ = auVar19._24_4_ + __real_00000004;
      auVar21._28_4_ = auVar19._28_4_ + __real_00000004;
      auVar112 = vpand_avx2(auVar74,auVar21);
      auVar58 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar112._0_4_)),
                            (uint)*(ushort *)(param_5 + auVar112._4_4_),1);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._8_4_),2);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._12_4_),3);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._16_4_),4);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._20_4_),5);
      auVar77 = vpmovzxwd_avx2(auVar55);
      auVar22._0_4_ = auVar77._0_4_ + __real_ffff8001;
      auVar22._4_4_ = auVar77._4_4_ + __real_ffff8001;
      auVar22._8_4_ = auVar77._8_4_ + __real_ffff8001;
      auVar22._12_4_ = auVar77._12_4_ + __real_ffff8001;
      auVar22._16_4_ = auVar77._16_4_ + __real_ffff8001;
      auVar22._20_4_ = auVar77._20_4_ + __real_ffff8001;
      auVar22._24_4_ = auVar77._24_4_ + __real_ffff8001;
      auVar22._28_4_ = auVar77._28_4_ + __real_ffff8001;
      auVar77 = vcvtdq2ps_avx(auVar22);
      auVar117._4_4_ = __real_46fffe00;
      auVar117._0_4_ = __real_46fffe00;
      auVar117._8_4_ = __real_46fffe00;
      auVar117._12_4_ = __real_46fffe00;
      auVar117._16_4_ = __real_46fffe00;
      auVar117._20_4_ = __real_46fffe00;
      auVar117._24_4_ = __real_46fffe00;
      auVar117._28_4_ = __real_46fffe00;
      auVar90 = vdivps_avx(auVar77,auVar117);
      auVar55 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._24_4_),6);
      auVar77 = vpmovzxwd_avx2(auVar57);
      auVar23._0_4_ = auVar77._0_4_ + __real_ffff8001;
      auVar23._4_4_ = auVar77._4_4_ + __real_ffff8001;
      auVar23._8_4_ = auVar77._8_4_ + __real_ffff8001;
      auVar23._12_4_ = auVar77._12_4_ + __real_ffff8001;
      auVar23._16_4_ = auVar77._16_4_ + __real_ffff8001;
      auVar23._20_4_ = auVar77._20_4_ + __real_ffff8001;
      auVar23._24_4_ = auVar77._24_4_ + __real_ffff8001;
      auVar23._28_4_ = auVar77._28_4_ + __real_ffff8001;
      auVar77 = vcvtdq2ps_avx(auVar23);
      auVar93 = vdivps_avx(auVar77,auVar117);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar112._28_4_),7);
      auVar77 = vpmovzxwd_avx2(auVar55);
      auVar24._0_4_ = auVar77._0_4_ + __real_ffff8001;
      auVar24._4_4_ = auVar77._4_4_ + __real_ffff8001;
      auVar24._8_4_ = auVar77._8_4_ + __real_ffff8001;
      auVar24._12_4_ = auVar77._12_4_ + __real_ffff8001;
      auVar24._16_4_ = auVar77._16_4_ + __real_ffff8001;
      auVar24._20_4_ = auVar77._20_4_ + __real_ffff8001;
      auVar24._24_4_ = auVar77._24_4_ + __real_ffff8001;
      auVar24._28_4_ = auVar77._28_4_ + __real_ffff8001;
      auVar77 = vcvtdq2ps_avx(auVar24);
      auVar77 = vdivps_avx(auVar77,auVar117);
      auVar78._0_4_ = auVar90._0_4_ * __real_43000000;
      auVar78._4_4_ = auVar90._4_4_ * __real_43000000;
      auVar78._8_4_ = auVar90._8_4_ * __real_43000000;
      auVar78._12_4_ = auVar90._12_4_ * __real_43000000;
      auVar78._16_4_ = auVar90._16_4_ * __real_43000000;
      auVar78._20_4_ = auVar90._20_4_ * __real_43000000;
      auVar78._24_4_ = auVar90._24_4_ * __real_43000000;
      auVar78._28_4_ = auVar90._28_4_ * __real_43000000;
      auVar118._0_4_ = auVar93._0_4_ * __real_43000000;
      auVar118._4_4_ = auVar93._4_4_ * __real_43000000;
      auVar118._8_4_ = auVar93._8_4_ * __real_43000000;
      auVar118._12_4_ = auVar93._12_4_ * __real_43000000;
      auVar118._16_4_ = auVar93._16_4_ * __real_43000000;
      auVar118._20_4_ = auVar93._20_4_ * __real_43000000;
      auVar118._24_4_ = auVar93._24_4_ * __real_43000000;
      auVar118._28_4_ = auVar93._28_4_ * __real_43000000;
      auVar66._0_4_ = auVar77._0_4_ * __real_43000000;
      auVar66._4_4_ = auVar77._4_4_ * __real_43000000;
      auVar66._8_4_ = auVar77._8_4_ * __real_43000000;
      auVar66._12_4_ = auVar77._12_4_ * __real_43000000;
      auVar66._16_4_ = auVar77._16_4_ * __real_43000000;
      auVar66._20_4_ = auVar77._20_4_ * __real_43000000;
      auVar66._24_4_ = auVar77._24_4_ * __real_43000000;
      auVar66._28_4_ = auVar77._28_4_ * __real_43000000;
      local_540 = vmaskmovps_avx(auVar74,auVar78);
      local_520 = vmaskmovps_avx(auVar74,auVar118);
      local_500._0_32_ = vmaskmovps_avx(auVar74,auVar66);
      auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
      auVar115 = auVar74 & ~auVar77;
      if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
            (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
          (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140adf0d4;
      break;
    case 3:
      auVar128 = vgatherdps(ZEXT832(0),auVar74);
      auVar123 = vgatherdps(ZEXT832(0),auVar74);
      auVar91 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
      auVar112 = vgatherdps(ZEXT832(0) << 0x20,auVar74);
      auVar133 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
      auVar149 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
      auVar93 = vpgatherdd(ZEXT832(0),auVar74);
      auVar77 = vpsrld_avx2(auVar93,10);
      auVar86._4_4_ = __real_000007ff;
      auVar86._0_4_ = __real_000007ff;
      auVar86._8_4_ = __real_000007ff;
      auVar86._12_4_ = __real_000007ff;
      auVar86._16_4_ = __real_000007ff;
      auVar86._20_4_ = __real_000007ff;
      auVar86._24_4_ = __real_000007ff;
      auVar86._28_4_ = __real_000007ff;
      auVar90 = vpand_avx2(auVar77,auVar86);
      auVar87._4_4_ = __real_000003ff;
      auVar87._0_4_ = __real_000003ff;
      auVar87._8_4_ = __real_000003ff;
      auVar87._12_4_ = __real_000003ff;
      auVar87._16_4_ = __real_000003ff;
      auVar87._20_4_ = __real_000003ff;
      auVar87._24_4_ = __real_000003ff;
      auVar87._28_4_ = __real_000003ff;
      auVar77 = vpand_avx2(auVar93,auVar87);
      auVar25._0_4_ = __real_fffffe01 + auVar77._0_4_;
      auVar25._4_4_ = __real_fffffe01 + auVar77._4_4_;
      auVar25._8_4_ = __real_fffffe01 + auVar77._8_4_;
      auVar25._12_4_ = __real_fffffe01 + auVar77._12_4_;
      auVar25._16_4_ = __real_fffffe01 + auVar77._16_4_;
      auVar25._20_4_ = __real_fffffe01 + auVar77._20_4_;
      auVar25._24_4_ = __real_fffffe01 + auVar77._24_4_;
      auVar25._28_4_ = __real_fffffe01 + auVar77._28_4_;
      auVar77 = vcvtdq2ps_avx(auVar25);
      auVar130._4_4_ = __real_43ff8000;
      auVar130._0_4_ = __real_43ff8000;
      auVar130._8_4_ = __real_43ff8000;
      auVar130._12_4_ = __real_43ff8000;
      auVar130._16_4_ = __real_43ff8000;
      auVar130._20_4_ = __real_43ff8000;
      auVar130._24_4_ = __real_43ff8000;
      auVar130._28_4_ = __real_43ff8000;
      auVar77 = vdivps_avx(auVar77,auVar130);
      auVar88._0_4_ = auVar112._0_4_ * auVar77._0_4_ + auVar128._0_4_;
      auVar88._4_4_ = auVar112._4_4_ * auVar77._4_4_ + auVar128._4_4_;
      auVar88._8_4_ = auVar112._8_4_ * auVar77._8_4_ + auVar128._8_4_;
      auVar88._12_4_ = auVar112._12_4_ * auVar77._12_4_ + auVar128._12_4_;
      auVar88._16_4_ = auVar112._16_4_ * auVar77._16_4_ + auVar128._16_4_;
      auVar88._20_4_ = auVar112._20_4_ * auVar77._20_4_ + auVar128._20_4_;
      auVar88._24_4_ = auVar112._24_4_ * auVar77._24_4_ + auVar128._24_4_;
      auVar88._28_4_ = auVar112._28_4_ * auVar77._28_4_ + auVar128._28_4_;
      auVar26._0_4_ = auVar90._0_4_ + __real_fffffc01;
      auVar26._4_4_ = auVar90._4_4_ + __real_fffffc01;
      auVar26._8_4_ = auVar90._8_4_ + __real_fffffc01;
      auVar26._12_4_ = auVar90._12_4_ + __real_fffffc01;
      auVar26._16_4_ = auVar90._16_4_ + __real_fffffc01;
      auVar26._20_4_ = auVar90._20_4_ + __real_fffffc01;
      auVar26._24_4_ = auVar90._24_4_ + __real_fffffc01;
      auVar26._28_4_ = auVar90._28_4_ + __real_fffffc01;
      auVar77 = vcvtdq2ps_avx(auVar26);
      auVar127._4_4_ = __real_447fc000;
      auVar127._0_4_ = __real_447fc000;
      auVar127._8_4_ = __real_447fc000;
      auVar127._12_4_ = __real_447fc000;
      auVar127._16_4_ = __real_447fc000;
      auVar127._20_4_ = __real_447fc000;
      auVar127._24_4_ = __real_447fc000;
      auVar127._28_4_ = __real_447fc000;
      auVar77 = vdivps_avx(auVar77,auVar127);
      auVar90 = vpsrld_avx2(auVar93,0x15);
      auVar79._0_4_ = auVar133._0_4_ * auVar77._0_4_ + auVar123._0_4_;
      auVar79._4_4_ = auVar133._4_4_ * auVar77._4_4_ + auVar123._4_4_;
      auVar79._8_4_ = auVar133._8_4_ * auVar77._8_4_ + auVar123._8_4_;
      auVar79._12_4_ = auVar133._12_4_ * auVar77._12_4_ + auVar123._12_4_;
      auVar79._16_4_ = auVar133._16_4_ * auVar77._16_4_ + auVar123._16_4_;
      auVar79._20_4_ = auVar133._20_4_ * auVar77._20_4_ + auVar123._20_4_;
      auVar79._24_4_ = auVar133._24_4_ * auVar77._24_4_ + auVar123._24_4_;
      auVar79._28_4_ = auVar133._28_4_ * auVar77._28_4_ + auVar123._28_4_;
      auVar27._0_4_ = auVar90._0_4_ + __real_fffffc01;
      auVar27._4_4_ = auVar90._4_4_ + __real_fffffc01;
      auVar27._8_4_ = auVar90._8_4_ + __real_fffffc01;
      auVar27._12_4_ = auVar90._12_4_ + __real_fffffc01;
      auVar27._16_4_ = auVar90._16_4_ + __real_fffffc01;
      auVar27._20_4_ = auVar90._20_4_ + __real_fffffc01;
      auVar27._24_4_ = auVar90._24_4_ + __real_fffffc01;
      auVar27._28_4_ = auVar90._28_4_ + __real_fffffc01;
      auVar77 = vcvtdq2ps_avx(auVar27);
      auVar77 = vdivps_avx(auVar77,auVar127);
      auVar67._0_4_ = auVar149._0_4_ * auVar77._0_4_ + auVar91._0_4_;
      auVar67._4_4_ = auVar149._4_4_ * auVar77._4_4_ + auVar91._4_4_;
      auVar67._8_4_ = auVar149._8_4_ * auVar77._8_4_ + auVar91._8_4_;
      auVar67._12_4_ = auVar149._12_4_ * auVar77._12_4_ + auVar91._12_4_;
      auVar67._16_4_ = auVar149._16_4_ * auVar77._16_4_ + auVar91._16_4_;
      auVar67._20_4_ = auVar149._20_4_ * auVar77._20_4_ + auVar91._20_4_;
      auVar67._24_4_ = auVar149._24_4_ * auVar77._24_4_ + auVar91._24_4_;
      auVar67._28_4_ = auVar149._28_4_ * auVar77._28_4_ + auVar91._28_4_;
      local_540 = vmaskmovps_avx(auVar74,auVar88);
      local_520 = vmaskmovps_avx(auVar74,auVar79);
      local_500._0_32_ = vmaskmovps_avx(auVar74,auVar67);
      auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
      auVar115 = auVar74 & ~auVar77;
      if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
            (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
          (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140adf0d4;
      break;
    case 4:
    case 5:
      goto switchD_140ade7c8_caseD_4;
    case 6:
      auVar77 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      local_540 = vmaskmovps_avx(auVar74,auVar77);
      local_520 = vmaskmovps_avx(auVar74,auVar77);
      local_500._0_32_ = vmaskmovps_avx(auVar74,auVar77);
      auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
      auVar115 = auVar74 & ~auVar77;
      if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
            (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
          (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140adf0d4;
    }
  }
  else {
switchD_140ade7c8_caseD_4:
    local_540 = vmaskmovps_avx(auVar74,auVar77);
    local_520 = vmaskmovps_avx(auVar74,auVar77);
    local_500._0_32_ = vmaskmovps_avx(auVar74,auVar77);
    auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
    auVar115 = auVar74 & ~auVar77;
    if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
          (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
        (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140adf0d4;
  }
  auVar104._0_4_ = ~auVar77._0_4_ & uVar44;
  auVar104._4_4_ = ~auVar77._4_4_ & uVar41;
  auVar104._8_4_ = ~auVar77._8_4_ & uVar42;
  auVar104._12_4_ = ~auVar77._12_4_ & uVar100;
  auVar104._16_4_ = ~auVar77._16_4_ & uVar105;
  auVar104._20_4_ = ~auVar77._20_4_ & uVar106;
  auVar104._24_4_ = ~auVar77._24_4_ & uVar107;
  auVar104._28_4_ = ~auVar77._28_4_ & uVar108;
  if (param_9 < 7) {
    auVar81 = vpmulld_avx2(auVar81,auVar121);
    switch(param_9) {
    case 0:
    case 1:
      auVar115 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar104);
      auVar70 = vgatherdps(ZEXT832(0),auVar104);
      auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar104);
      local_440 = vmaskmovps_avx(auVar104,auVar115);
      local_420 = vmaskmovps_avx(auVar104,auVar70);
      local_400 = vmaskmovps_avx(auVar104,auVar81);
      goto LAB_140adf077;
    case 2:
      auVar28._0_4_ = auVar81._0_4_ + auVar97._0_4_ + auVar70._0_4_;
      auVar28._4_4_ = auVar81._4_4_ + auVar97._4_4_ + auVar70._4_4_;
      auVar28._8_4_ = auVar81._8_4_ + auVar97._8_4_ + auVar70._8_4_;
      auVar28._12_4_ = auVar81._12_4_ + auVar97._12_4_ + auVar70._12_4_;
      auVar28._16_4_ = auVar81._16_4_ + auVar97._16_4_ + auVar70._16_4_;
      auVar28._20_4_ = auVar81._20_4_ + auVar97._20_4_ + auVar70._20_4_;
      auVar28._24_4_ = auVar81._24_4_ + auVar97._24_4_ + auVar70._24_4_;
      auVar28._28_4_ = auVar81._28_4_ + auVar97._28_4_ + auVar70._28_4_;
      auVar58 = ZEXT816(0);
      auVar81 = vblendvps_avx(ZEXT1632(auVar58),auVar28,auVar104);
      auVar55 = auVar81._0_16_;
      iVar43 = vextractps_avx(auVar55,0);
      iVar53 = vextractps_avx(auVar55,1);
      iVar49 = vextractps_avx(auVar55,2);
      iVar51 = vextractps_avx(auVar55,3);
      auVar55 = auVar81._16_16_;
      iVar52 = vextractps_avx(auVar55,0);
      iVar46 = vextractps_avx(auVar55,1);
      iVar48 = vextractps_avx(auVar55,2);
      iVar45 = vextractps_avx(auVar55,3);
      auVar55 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + iVar43)),
                            (uint)*(ushort *)(param_5 + iVar53),1);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar49),2);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar51),3);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar52),4);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar46),5);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar48),6);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar45),7);
      auVar29._0_4_ = auVar28._0_4_ + __real_00000002;
      auVar29._4_4_ = auVar28._4_4_ + __real_00000002;
      auVar29._8_4_ = auVar28._8_4_ + __real_00000002;
      auVar29._12_4_ = auVar28._12_4_ + __real_00000002;
      auVar29._16_4_ = auVar28._16_4_ + __real_00000002;
      auVar29._20_4_ = auVar28._20_4_ + __real_00000002;
      auVar29._24_4_ = auVar28._24_4_ + __real_00000002;
      auVar29._28_4_ = auVar28._28_4_ + __real_00000002;
      auVar81 = vblendvps_avx(ZEXT1632(auVar58),auVar29,auVar104);
      auVar57 = auVar81._0_16_;
      iVar43 = vextractps_avx(auVar57,0);
      iVar53 = vextractps_avx(auVar57,1);
      iVar49 = vextractps_avx(auVar57,2);
      iVar51 = vextractps_avx(auVar57,3);
      auVar57 = auVar81._16_16_;
      iVar52 = vextractps_avx(auVar57,0);
      iVar46 = vextractps_avx(auVar57,1);
      iVar48 = vextractps_avx(auVar57,2);
      iVar45 = vextractps_avx(auVar57,3);
      auVar57 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + iVar43)),
                            (uint)*(ushort *)(param_5 + iVar53),1);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar49),2);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar51),3);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar52),4);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar46),5);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar48),6);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar45),7);
      auVar30._0_4_ = __real_00000004 + auVar28._0_4_;
      auVar30._4_4_ = __real_00000004 + auVar28._4_4_;
      auVar30._8_4_ = __real_00000004 + auVar28._8_4_;
      auVar30._12_4_ = __real_00000004 + auVar28._12_4_;
      auVar30._16_4_ = __real_00000004 + auVar28._16_4_;
      auVar30._20_4_ = __real_00000004 + auVar28._20_4_;
      auVar30._24_4_ = __real_00000004 + auVar28._24_4_;
      auVar30._28_4_ = __real_00000004 + auVar28._28_4_;
      auVar81 = vblendvps_avx(ZEXT1632(auVar58),auVar30,auVar104);
      auVar58 = auVar81._0_16_;
      iVar43 = vextractps_avx(auVar58,0);
      iVar53 = vextractps_avx(auVar58,1);
      iVar49 = vextractps_avx(auVar58,2);
      iVar51 = vextractps_avx(auVar58,3);
      auVar58 = auVar81._16_16_;
      iVar52 = vextractps_avx(auVar58,0);
      iVar46 = vextractps_avx(auVar58,1);
      iVar48 = vextractps_avx(auVar58,2);
      iVar45 = vextractps_avx(auVar58,3);
      auVar58 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + iVar43)),
                            (uint)*(ushort *)(param_5 + iVar53),1);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar49),2);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar51),3);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar52),4);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar46),5);
      auVar81 = vpmovzxwd_avx2(auVar55);
      auVar31._0_4_ = auVar81._0_4_ + __real_ffff8001;
      auVar31._4_4_ = auVar81._4_4_ + __real_ffff8001;
      auVar31._8_4_ = auVar81._8_4_ + __real_ffff8001;
      auVar31._12_4_ = auVar81._12_4_ + __real_ffff8001;
      auVar31._16_4_ = auVar81._16_4_ + __real_ffff8001;
      auVar31._20_4_ = auVar81._20_4_ + __real_ffff8001;
      auVar31._24_4_ = auVar81._24_4_ + __real_ffff8001;
      auVar31._28_4_ = auVar81._28_4_ + __real_ffff8001;
      auVar81 = vcvtdq2ps_avx(auVar31);
      auVar98._4_4_ = __real_46fffe00;
      auVar98._0_4_ = __real_46fffe00;
      auVar98._8_4_ = __real_46fffe00;
      auVar98._12_4_ = __real_46fffe00;
      auVar98._16_4_ = __real_46fffe00;
      auVar98._20_4_ = __real_46fffe00;
      auVar98._24_4_ = __real_46fffe00;
      auVar98._28_4_ = __real_46fffe00;
      auVar115 = vdivps_avx(auVar81,auVar98);
      auVar55 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar48),6);
      auVar81 = vpmovzxwd_avx2(auVar57);
      auVar32._0_4_ = auVar81._0_4_ + __real_ffff8001;
      auVar32._4_4_ = auVar81._4_4_ + __real_ffff8001;
      auVar32._8_4_ = auVar81._8_4_ + __real_ffff8001;
      auVar32._12_4_ = auVar81._12_4_ + __real_ffff8001;
      auVar32._16_4_ = auVar81._16_4_ + __real_ffff8001;
      auVar32._20_4_ = auVar81._20_4_ + __real_ffff8001;
      auVar32._24_4_ = auVar81._24_4_ + __real_ffff8001;
      auVar32._28_4_ = auVar81._28_4_ + __real_ffff8001;
      auVar81 = vcvtdq2ps_avx(auVar32);
      auVar70 = vdivps_avx(auVar81,auVar98);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar45),7);
      auVar81 = vpmovzxwd_avx2(auVar55);
      auVar33._0_4_ = auVar81._0_4_ + __real_ffff8001;
      auVar33._4_4_ = auVar81._4_4_ + __real_ffff8001;
      auVar33._8_4_ = auVar81._8_4_ + __real_ffff8001;
      auVar33._12_4_ = auVar81._12_4_ + __real_ffff8001;
      auVar33._16_4_ = auVar81._16_4_ + __real_ffff8001;
      auVar33._20_4_ = auVar81._20_4_ + __real_ffff8001;
      auVar33._24_4_ = auVar81._24_4_ + __real_ffff8001;
      auVar33._28_4_ = auVar81._28_4_ + __real_ffff8001;
      auVar81 = vcvtdq2ps_avx(auVar33);
      auVar81 = vdivps_avx(auVar81,auVar98);
      auVar80._0_4_ = auVar115._0_4_ * __real_43000000;
      auVar80._4_4_ = auVar115._4_4_ * __real_43000000;
      auVar80._8_4_ = auVar115._8_4_ * __real_43000000;
      auVar80._12_4_ = auVar115._12_4_ * __real_43000000;
      auVar80._16_4_ = auVar115._16_4_ * __real_43000000;
      auVar80._20_4_ = auVar115._20_4_ * __real_43000000;
      auVar80._24_4_ = auVar115._24_4_ * __real_43000000;
      auVar80._28_4_ = auVar115._28_4_ * __real_43000000;
      auVar99._0_4_ = auVar70._0_4_ * __real_43000000;
      auVar99._4_4_ = auVar70._4_4_ * __real_43000000;
      auVar99._8_4_ = auVar70._8_4_ * __real_43000000;
      auVar99._12_4_ = auVar70._12_4_ * __real_43000000;
      auVar99._16_4_ = auVar70._16_4_ * __real_43000000;
      auVar99._20_4_ = auVar70._20_4_ * __real_43000000;
      auVar99._24_4_ = auVar70._24_4_ * __real_43000000;
      auVar99._28_4_ = auVar70._28_4_ * __real_43000000;
      auVar68._0_4_ = auVar81._0_4_ * __real_43000000;
      auVar68._4_4_ = auVar81._4_4_ * __real_43000000;
      auVar68._8_4_ = auVar81._8_4_ * __real_43000000;
      auVar68._12_4_ = auVar81._12_4_ * __real_43000000;
      auVar68._16_4_ = auVar81._16_4_ * __real_43000000;
      auVar68._20_4_ = auVar81._20_4_ * __real_43000000;
      auVar68._24_4_ = auVar81._24_4_ * __real_43000000;
      auVar68._28_4_ = auVar81._28_4_ * __real_43000000;
      break;
    case 3:
      auVar90 = vgatherdps(ZEXT832(0),auVar104);
      auVar70 = vgatherdps(ZEXT832(0),auVar104);
      auVar93 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar104);
      auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar104);
      auVar123 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar104);
      auVar91 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar104);
      auVar81 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar104);
      auVar97 = vpsrld_avx2(auVar81,0x15);
      auVar77 = vpsrld_avx2(auVar81,10);
      auVar119._4_4_ = __real_000007ff;
      auVar119._0_4_ = __real_000007ff;
      auVar119._8_4_ = __real_000007ff;
      auVar119._12_4_ = __real_000007ff;
      auVar119._16_4_ = __real_000007ff;
      auVar119._20_4_ = __real_000007ff;
      auVar119._24_4_ = __real_000007ff;
      auVar119._28_4_ = __real_000007ff;
      auVar124._4_4_ = __real_000003ff;
      auVar124._0_4_ = __real_000003ff;
      auVar124._8_4_ = __real_000003ff;
      auVar124._12_4_ = __real_000003ff;
      auVar124._16_4_ = __real_000003ff;
      auVar124._20_4_ = __real_000003ff;
      auVar124._24_4_ = __real_000003ff;
      auVar124._28_4_ = __real_000003ff;
      auVar81 = vpand_avx2(auVar124,auVar81);
      auVar34._0_4_ = __real_fffffe01 + auVar81._0_4_;
      auVar34._4_4_ = __real_fffffe01 + auVar81._4_4_;
      auVar34._8_4_ = __real_fffffe01 + auVar81._8_4_;
      auVar34._12_4_ = __real_fffffe01 + auVar81._12_4_;
      auVar34._16_4_ = __real_fffffe01 + auVar81._16_4_;
      auVar34._20_4_ = __real_fffffe01 + auVar81._20_4_;
      auVar34._24_4_ = __real_fffffe01 + auVar81._24_4_;
      auVar34._28_4_ = __real_fffffe01 + auVar81._28_4_;
      auVar81 = vcvtdq2ps_avx(auVar34);
      auVar125._4_4_ = __real_43ff8000;
      auVar125._0_4_ = __real_43ff8000;
      auVar125._8_4_ = __real_43ff8000;
      auVar125._12_4_ = __real_43ff8000;
      auVar125._16_4_ = __real_43ff8000;
      auVar125._20_4_ = __real_43ff8000;
      auVar125._24_4_ = __real_43ff8000;
      auVar125._28_4_ = __real_43ff8000;
      auVar115 = vdivps_avx(auVar81,auVar125);
      auVar81 = vpand_avx2(auVar77,auVar119);
      auVar35._0_4_ = auVar81._0_4_ + __real_fffffc01;
      auVar35._4_4_ = auVar81._4_4_ + __real_fffffc01;
      auVar35._8_4_ = auVar81._8_4_ + __real_fffffc01;
      auVar35._12_4_ = auVar81._12_4_ + __real_fffffc01;
      auVar35._16_4_ = auVar81._16_4_ + __real_fffffc01;
      auVar35._20_4_ = auVar81._20_4_ + __real_fffffc01;
      auVar35._24_4_ = auVar81._24_4_ + __real_fffffc01;
      auVar35._28_4_ = auVar81._28_4_ + __real_fffffc01;
      auVar81 = vcvtdq2ps_avx(auVar35);
      auVar126._4_4_ = __real_447fc000;
      auVar126._0_4_ = __real_447fc000;
      auVar126._8_4_ = __real_447fc000;
      auVar126._12_4_ = __real_447fc000;
      auVar126._16_4_ = __real_447fc000;
      auVar126._20_4_ = __real_447fc000;
      auVar126._24_4_ = __real_447fc000;
      auVar126._28_4_ = __real_447fc000;
      auVar81 = vdivps_avx(auVar81,auVar126);
      auVar80._0_4_ = auVar112._0_4_ * auVar115._0_4_ + auVar90._0_4_;
      auVar80._4_4_ = auVar112._4_4_ * auVar115._4_4_ + auVar90._4_4_;
      auVar80._8_4_ = auVar112._8_4_ * auVar115._8_4_ + auVar90._8_4_;
      auVar80._12_4_ = auVar112._12_4_ * auVar115._12_4_ + auVar90._12_4_;
      auVar80._16_4_ = auVar112._16_4_ * auVar115._16_4_ + auVar90._16_4_;
      auVar80._20_4_ = auVar112._20_4_ * auVar115._20_4_ + auVar90._20_4_;
      auVar80._24_4_ = auVar112._24_4_ * auVar115._24_4_ + auVar90._24_4_;
      auVar80._28_4_ = auVar112._28_4_ * auVar115._28_4_ + auVar90._28_4_;
      auVar99._0_4_ = auVar123._0_4_ * auVar81._0_4_ + auVar70._0_4_;
      auVar99._4_4_ = auVar123._4_4_ * auVar81._4_4_ + auVar70._4_4_;
      auVar99._8_4_ = auVar123._8_4_ * auVar81._8_4_ + auVar70._8_4_;
      auVar99._12_4_ = auVar123._12_4_ * auVar81._12_4_ + auVar70._12_4_;
      auVar99._16_4_ = auVar123._16_4_ * auVar81._16_4_ + auVar70._16_4_;
      auVar99._20_4_ = auVar123._20_4_ * auVar81._20_4_ + auVar70._20_4_;
      auVar99._24_4_ = auVar123._24_4_ * auVar81._24_4_ + auVar70._24_4_;
      auVar99._28_4_ = auVar123._28_4_ * auVar81._28_4_ + auVar70._28_4_;
      auVar36._0_4_ = auVar97._0_4_ + __real_fffffc01;
      auVar36._4_4_ = auVar97._4_4_ + __real_fffffc01;
      auVar36._8_4_ = auVar97._8_4_ + __real_fffffc01;
      auVar36._12_4_ = auVar97._12_4_ + __real_fffffc01;
      auVar36._16_4_ = auVar97._16_4_ + __real_fffffc01;
      auVar36._20_4_ = auVar97._20_4_ + __real_fffffc01;
      auVar36._24_4_ = auVar97._24_4_ + __real_fffffc01;
      auVar36._28_4_ = auVar97._28_4_ + __real_fffffc01;
      auVar81 = vcvtdq2ps_avx(auVar36);
      auVar81 = vdivps_avx(auVar81,auVar126);
      auVar68._0_4_ = auVar91._0_4_ * auVar81._0_4_ + auVar93._0_4_;
      auVar68._4_4_ = auVar91._4_4_ * auVar81._4_4_ + auVar93._4_4_;
      auVar68._8_4_ = auVar91._8_4_ * auVar81._8_4_ + auVar93._8_4_;
      auVar68._12_4_ = auVar91._12_4_ * auVar81._12_4_ + auVar93._12_4_;
      auVar68._16_4_ = auVar91._16_4_ * auVar81._16_4_ + auVar93._16_4_;
      auVar68._20_4_ = auVar91._20_4_ * auVar81._20_4_ + auVar93._20_4_;
      auVar68._24_4_ = auVar91._24_4_ * auVar81._24_4_ + auVar93._24_4_;
      auVar68._28_4_ = auVar91._28_4_ * auVar81._28_4_ + auVar93._28_4_;
      break;
    default:
      goto switchD_140adec86_caseD_4;
    }
    local_440 = vmaskmovps_avx(auVar104,auVar80);
    local_420 = vmaskmovps_avx(auVar104,auVar99);
  }
  else {
switchD_140adec86_caseD_4:
    auVar56._0_12_ = ZEXT812(0);
    auVar56._12_4_ = 0;
    auVar68 = ZEXT1632(auVar56);
    local_440 = vmaskmovps_avx(auVar104,ZEXT1632(auVar56));
    local_420 = vmaskmovps_avx(auVar104,ZEXT1632(auVar56));
  }
  local_400 = vmaskmovps_avx(auVar104,auVar68);
LAB_140adf077:
  auVar81 = vsubps_avx(local_440,local_540);
  auVar115 = vsubps_avx(local_420,local_520);
  auVar70 = vsubps_avx(local_400,local_500._0_32_);
  fVar131 = auVar142._0_4_;
  auVar69._0_4_ = fVar131 * auVar81._0_4_ + local_540._0_4_;
  fVar135 = auVar142._4_4_;
  auVar69._4_4_ = fVar135 * auVar81._4_4_ + local_540._4_4_;
  fVar136 = auVar142._8_4_;
  auVar69._8_4_ = fVar136 * auVar81._8_4_ + local_540._8_4_;
  fVar137 = auVar142._12_4_;
  auVar69._12_4_ = fVar137 * auVar81._12_4_ + local_540._12_4_;
  fVar138 = auVar142._16_4_;
  auVar69._16_4_ = fVar138 * auVar81._16_4_ + local_540._16_4_;
  fVar139 = auVar142._20_4_;
  auVar69._20_4_ = fVar139 * auVar81._20_4_ + local_540._20_4_;
  fVar140 = auVar142._24_4_;
  auVar69._24_4_ = fVar140 * auVar81._24_4_ + local_540._24_4_;
  fVar141 = auVar142._28_4_;
  auVar69._28_4_ = fVar141 * auVar81._28_4_ + local_540._28_4_;
  auVar82._0_4_ = fVar131 * auVar115._0_4_ + local_520._0_4_;
  auVar82._4_4_ = fVar135 * auVar115._4_4_ + local_520._4_4_;
  auVar82._8_4_ = fVar136 * auVar115._8_4_ + local_520._8_4_;
  auVar82._12_4_ = fVar137 * auVar115._12_4_ + local_520._12_4_;
  auVar82._16_4_ = fVar138 * auVar115._16_4_ + local_520._16_4_;
  auVar82._20_4_ = fVar139 * auVar115._20_4_ + local_520._20_4_;
  auVar82._24_4_ = fVar140 * auVar115._24_4_ + local_520._24_4_;
  auVar82._28_4_ = fVar141 * auVar115._28_4_ + local_520._28_4_;
  auVar89._0_4_ = fVar131 * auVar70._0_4_ + local_500._0_4_;
  auVar89._4_4_ = fVar135 * auVar70._4_4_ + local_500._4_4_;
  auVar89._8_4_ = fVar136 * auVar70._8_4_ + local_500._8_4_;
  auVar89._12_4_ = fVar137 * auVar70._12_4_ + local_500._12_4_;
  auVar89._16_4_ = fVar138 * auVar70._16_4_ + local_500._16_4_;
  auVar89._20_4_ = fVar139 * auVar70._20_4_ + local_500._20_4_;
  auVar89._24_4_ = fVar140 * auVar70._24_4_ + local_500._24_4_;
  auVar89._28_4_ = fVar141 * auVar70._28_4_ + local_500._28_4_;
  local_540 = vmaskmovps_avx(auVar104,auVar69);
  local_520 = vmaskmovps_avx(auVar104,auVar82);
  local_500._0_32_ = vmaskmovps_avx(auVar104,auVar89);
LAB_140adf0d4:
  auVar81 = vperm2i128_avx2(local_540,local_520,0x20);
  auVar115 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                         ZEXT1632(local_500._0_16_));
  auVar142 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                         auVar81);
  local_200 = vpblendd_avx2(auVar142,auVar115,0xcc);
  auVar115 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                         ZEXT1632(local_500._0_16_));
  auVar81 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                        auVar81);
  local_1e0 = vpblendd_avx2(auVar81,auVar115,0xcc);
  auVar81 = vperm2i128_avx2(local_540,local_520,0x31);
  auVar115 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                         ZEXT1632(local_500._16_16_));
  auVar142 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                         auVar81);
  local_1c0 = vpblendd_avx2(auVar142,auVar115,0xcc);
  auVar115 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                         ZEXT1632(local_500._16_16_));
  auVar81 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                        auVar81);
  local_1a0 = vpblendd_avx2(auVar81,auVar115,0xcc);
  uVar44 = vmovmskps_avx(auVar74);
  uVar47 = (ulonglong)uVar44;
  do {
    uVar44 = 0;
    for (uVar39 = uVar47; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x8000000000000000) {
      uVar44 = uVar44 + 1;
    }
    bVar1 = (byte)uVar44 & 0x3f;
    auVar81 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar44 << 4)));
    *(undefined1 (*) [32])
     (param_1 + 0x40 + (longlong)*(int *)(local_240 + (ulonglong)(uVar44 & 7) * 4) * 0x60) = auVar81
    ;
    uVar47 = uVar47 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
  } while (uVar47 != 0);
  return;
}

// GetConstantKeyLerpPoseRotations_avx2 @ 140adf240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseRotations_avx2(longlong param_1)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  float fVar17;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  float fVar31;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar42;
  float fVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar34 [32];
  float fVar44;
  float fVar48;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar49;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar50 [32];
  float fVar60;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 in_ZMM5 [64];
  float fVar63;
  float fVar74;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 in_ZMM6 [64];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  uint uVar80;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  uint uVar91;
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar95 [64];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  float fVar98;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar99 [32];
  float fVar109;
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 in_ZMM13 [64];
  undefined1 auVar112 [16];
  undefined1 auVar113 [32];
  undefined1 in_ZMM15 [64];
  float in_stack_00000030;
  char in_stack_00000038;
  uint in_stack_00000040;
  uint in_stack_00000048;
  undefined1 local_5a0 [32];
  undefined1 local_580 [32];
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
  undefined1 local_460 [32];
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
  float local_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  undefined1 local_3c0 [32];
  undefined1 local_380 [8];
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  undefined1 local_360 [8];
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  undefined1 local_340 [8];
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined1 local_320 [8];
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
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
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_e8 [16];
  undefined1 local_a8 [16];
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  
  auVar35 = ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  auVar110 = in_ZMM10._0_32_;
  local_58 = in_ZMM15._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_e8 = in_ZMM6._0_16_;
  lVar13 = (longlong)(int)in_stack_00000040;
  iVar12 = *(int *)(&DAT_151c6b700 + lVar13 * 4) * *(int *)(&DAT_151c6b6e0 + lVar13 * 4);
  iVar14 = 0;
  uVar6 = 0x18;
  if (lVar13 != 3) {
    uVar6 = 0;
  }
  uVar8 = in_stack_00000048 + 7;
  if (-1 < (int)in_stack_00000048) {
    uVar8 = in_stack_00000048;
  }
  uVar9 = (ulonglong)in_stack_00000040;
  if (0 < (int)(uVar8 & 0xfffffff8)) {
    auVar15._4_4_ = uVar6;
    auVar15._0_4_ = uVar6;
    auVar15._8_4_ = uVar6;
    auVar15._12_4_ = uVar6;
    vpmovzxdq_avx2(auVar15);
    auVar38._4_4_ = __real_00000008;
    auVar38._0_4_ = __real_00000008;
    auVar38._8_4_ = __real_00000008;
    auVar38._12_4_ = __real_00000008;
    auVar38._16_4_ = __real_00000008;
    auVar38._20_4_ = __real_00000008;
    auVar38._24_4_ = __real_00000008;
    auVar38._28_4_ = __real_00000008;
    auVar110 = vpcmpeqd_avx2(auVar110,auVar110);
    auVar95 = ZEXT3264(auVar110);
    auVar112._0_12_ = ZEXT812(0);
    auVar112._12_4_ = 0;
    local_5a0._4_4_ = __real_0000000c;
    local_5a0._0_4_ = __real_0000000c;
    local_5a0._8_4_ = __real_0000000c;
    local_5a0._12_4_ = __real_0000000c;
    local_5a0._16_4_ = __real_0000000c;
    local_5a0._20_4_ = __real_0000000c;
    local_5a0._24_4_ = __real_0000000c;
    local_5a0._28_4_ = __real_0000000c;
    local_3c0._4_4_ = __real_00000001;
    local_3c0._0_4_ = __real_00000001;
    local_3c0._8_4_ = __real_00000001;
    local_3c0._12_4_ = __real_00000001;
    local_3c0._16_4_ = __real_00000001;
    local_3c0._20_4_ = __real_00000001;
    local_3c0._24_4_ = __real_00000001;
    local_3c0._28_4_ = __real_00000001;
    do {
      auVar110 = in_ZMM13._0_32_;
      auVar18._4_4_ = iVar14;
      auVar18._0_4_ = iVar14;
      auVar18._8_4_ = iVar14;
      auVar18._12_4_ = iVar14;
      auVar18._16_4_ = iVar14;
      auVar18._20_4_ = iVar14;
      auVar18._24_4_ = iVar14;
      auVar18._28_4_ = iVar14;
      auVar19 = vpslld_avx2(auVar18,3);
      auVar18 = vpor_avx2(auVar19,auVar35);
      vpmovzxdq_avx2(auVar18._16_16_);
      auVar18 = vpmovzxdq_avx2(auVar18._0_16_);
      auVar15 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
      auVar33 = vpgatherqd((undefined1  [16])0x0,auVar15);
      auVar15 = vpcmpeqd_avx(auVar18._0_16_,auVar18._0_16_);
      auVar2 = vpgatherqd((undefined1  [16])0x0,auVar15);
      auVar18 = vpor_avx2(auVar19,
                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004);
      vpmovzxdq_avx2(auVar18._16_16_);
      vpmovzxdq_avx2(auVar18._0_16_);
      auVar15 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
      auVar3 = vpgatherqd((undefined1  [16])0x0,auVar15);
      auVar15 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
      auVar15 = vpgatherqd((undefined1  [16])0x0,auVar15);
      auVar19._16_16_ = ZEXT116(1) * auVar15;
      auVar19._0_16_ = ZEXT116(0) * auVar15 | ZEXT116(1) * auVar3;
      auVar20 = vpslld_avx2(auVar19,4);
      auVar19 = vpor_avx2(auVar38,auVar20);
      auVar18 = vpcmpeqd_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                              SUB6432(ZEXT1664((undefined1  [16])0x0),0));
      auVar50 = vpgatherdd(ZEXT1632((undefined1  [16])0x0),auVar18);
      vpor_avx2(auVar20,local_5a0);
      auVar18 = vpcmpeqd_avx2(auVar19,auVar19);
      auVar19 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
      auVar18 = vpcmpeqd_avx2(auVar19,local_3c0);
      auVar20 = ZEXT1632(auVar112);
      if ((((((((SUB321(auVar18 >> 0x1f,0) & 1) != 0 || (SUB321(auVar18 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar18 >> 0x5f,0) & 1) != 0) || SUB321(auVar18 >> 0x7f,0) != '\0') ||
            (SUB321(auVar18 >> 0x9f,0) & 1) != 0) || SUB321(auVar18 >> 0xbf,0) != '\0') ||
          (SUB321(auVar18 >> 0xdf,0) & 1) != 0) || auVar18[0x1f] < '\0') {
        auVar34 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
        auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
        auVar92 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
        auVar100._0_4_ =
             -(auVar92._0_4_ * auVar92._0_4_) +
             -(auVar81._0_4_ * auVar81._0_4_) + -(auVar34._0_4_ * auVar34._0_4_) + __real_3f800000;
        auVar100._4_4_ =
             -(auVar92._4_4_ * auVar92._4_4_) +
             -(auVar81._4_4_ * auVar81._4_4_) + -(auVar34._4_4_ * auVar34._4_4_) + __real_3f800000;
        auVar100._8_4_ =
             -(auVar92._8_4_ * auVar92._8_4_) +
             -(auVar81._8_4_ * auVar81._8_4_) + -(auVar34._8_4_ * auVar34._8_4_) + __real_3f800000;
        auVar100._12_4_ =
             -(auVar92._12_4_ * auVar92._12_4_) +
             -(auVar81._12_4_ * auVar81._12_4_) +
             -(auVar34._12_4_ * auVar34._12_4_) + __real_3f800000;
        auVar100._16_4_ =
             -(auVar92._16_4_ * auVar92._16_4_) +
             -(auVar81._16_4_ * auVar81._16_4_) +
             -(auVar34._16_4_ * auVar34._16_4_) + __real_3f800000;
        auVar100._20_4_ =
             -(auVar92._20_4_ * auVar92._20_4_) +
             -(auVar81._20_4_ * auVar81._20_4_) +
             -(auVar34._20_4_ * auVar34._20_4_) + __real_3f800000;
        auVar100._24_4_ =
             -(auVar92._24_4_ * auVar92._24_4_) +
             -(auVar81._24_4_ * auVar81._24_4_) +
             -(auVar34._24_4_ * auVar34._24_4_) + __real_3f800000;
        auVar100._28_4_ =
             -(auVar92._28_4_ * auVar92._28_4_) +
             -(auVar81._28_4_ * auVar81._28_4_) +
             -(auVar34._28_4_ * auVar34._28_4_) + __real_3f800000;
        auVar96 = vcmpps_avx(auVar20,auVar100,1);
        auVar100 = vsqrtps_avx(auVar100);
        auVar21._0_4_ = auVar96._0_4_ & auVar100._0_4_;
        auVar21._4_4_ = auVar96._4_4_ & auVar100._4_4_;
        auVar21._8_4_ = auVar96._8_4_ & auVar100._8_4_;
        auVar21._12_4_ = auVar96._12_4_ & auVar100._12_4_;
        auVar21._16_4_ = auVar96._16_4_ & auVar100._16_4_;
        auVar21._20_4_ = auVar96._20_4_ & auVar100._20_4_;
        auVar21._24_4_ = auVar96._24_4_ & auVar100._24_4_;
        auVar21._28_4_ = auVar96._28_4_ & auVar100._28_4_;
        _local_380 = vmaskmovps_avx(auVar18,auVar34);
        _local_360 = vmaskmovps_avx(auVar18,auVar81);
        _local_340 = vmaskmovps_avx(auVar18,auVar92);
        _local_320 = vmaskmovps_avx(auVar18,auVar21);
      }
      uVar7 = vmovmskps_avx(auVar18);
      bVar5 = (byte)uVar7 ^ 0xff;
      if (bVar5 != 0) {
        auVar96._4_4_ = __real_00000002;
        auVar96._0_4_ = __real_00000002;
        auVar96._8_4_ = __real_00000002;
        auVar96._12_4_ = __real_00000002;
        auVar96._16_4_ = __real_00000002;
        auVar96._20_4_ = __real_00000002;
        auVar96._24_4_ = __real_00000002;
        auVar96._28_4_ = __real_00000002;
        auVar96 = vpcmpgtd_avx2(auVar96,auVar19);
        auVar96 = auVar18 ^ auVar96;
        iVar10 = vmovmskps_avx(auVar96);
        auVar100 = auVar95._0_32_;
        if (iVar10 == 0) {
          auVar96 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
LAB_140adf57d:
          auVar96 = auVar100 ^ auVar96;
          if (in_stack_00000030 <= 0.0) {
            auVar21 = vpandn_avx2(auVar18,auVar96);
            auVar19 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
            local_580 = vblendvps_avx(local_580,auVar19,auVar21);
            auVar110 = vblendvps_avx(auVar110,auVar19,auVar21);
          }
          else {
            auVar34._0_4_ = auVar95._0_4_ + auVar19._0_4_;
            auVar34._4_4_ = auVar95._4_4_ + auVar19._4_4_;
            auVar34._8_4_ = auVar95._8_4_ + auVar19._8_4_;
            auVar34._12_4_ = auVar95._12_4_ + auVar19._12_4_;
            auVar34._16_4_ = auVar95._16_4_ + auVar19._16_4_;
            auVar34._20_4_ = auVar95._20_4_ + auVar19._20_4_;
            auVar34._24_4_ = auVar95._24_4_ + auVar19._24_4_;
            auVar34._28_4_ = auVar95._28_4_ + auVar19._28_4_;
            if (__real_3f800000 <= in_stack_00000030) {
              auVar19 = vpandn_avx2(auVar18,auVar96);
              local_580 = vblendvps_avx(local_580,auVar34,auVar19);
              auVar110 = vblendvps_avx(auVar110,auVar34,auVar19);
              auVar19 = SUB6432(ZEXT864(0),0) << 0x20;
            }
            else {
              auVar19 = vcvtdq2ps_avx(auVar34);
              auVar81._0_4_ = auVar19._0_4_ * in_stack_00000030;
              auVar81._4_4_ = auVar19._4_4_ * in_stack_00000030;
              auVar81._8_4_ = auVar19._8_4_ * in_stack_00000030;
              auVar81._12_4_ = auVar19._12_4_ * in_stack_00000030;
              auVar81._16_4_ = auVar19._16_4_ * in_stack_00000030;
              auVar81._20_4_ = auVar19._20_4_ * in_stack_00000030;
              auVar81._24_4_ = auVar19._24_4_ * in_stack_00000030;
              auVar81._28_4_ = auVar19._28_4_ * in_stack_00000030;
              auVar21 = vroundps_avx(auVar81,9);
              auVar19 = SUB6432(ZEXT864(0),0) << 0x20;
              if (in_stack_00000038 != '\x01') {
                auVar19 = vsubps_avx(auVar81,auVar21);
              }
              auVar81 = vpandn_avx2(auVar18,auVar96);
              auVar92._0_4_ = (int)auVar21._0_4_;
              auVar92._4_4_ = (int)auVar21._4_4_;
              auVar92._8_4_ = (int)auVar21._8_4_;
              auVar92._12_4_ = (int)auVar21._12_4_;
              auVar92._16_4_ = (int)auVar21._16_4_;
              auVar92._20_4_ = (int)auVar21._20_4_;
              auVar92._24_4_ = (int)auVar21._24_4_;
              auVar92._28_4_ = (int)auVar21._28_4_;
              auVar21 = vpminsd_avx2(auVar92,auVar34);
              local_580 = vblendvps_avx(local_580,auVar21,auVar81);
              auVar21 = vpsubd_avx2(local_580,auVar100);
              auVar21 = vpminsd_avx2(auVar21,auVar34);
              auVar110 = vblendvps_avx(auVar110,auVar21,auVar81);
            }
          }
          local_460 = vblendvps_avx(local_460,auVar19,auVar96);
        }
        else {
          auVar15 = vpackssdw_avx(auVar96._0_16_,auVar96._16_16_);
          auVar96 = vpmovsxwd_avx2(auVar15);
          local_580 = vpandn_avx2(auVar96,local_580);
          auVar110 = vpandn_avx2(auVar96,auVar110);
          auVar21 = vpcmpgtd_avx2(auVar19,local_3c0);
          local_460 = vpand_avx2(auVar21,local_460);
          if (bVar5 != (byte)iVar10) goto LAB_140adf57d;
        }
        vpmovsxdq_avx2(auVar50._16_16_);
        vpmovsxdq_avx2(auVar50._0_16_);
        auVar18 = auVar18 ^ auVar100;
        if (in_stack_00000040 < 6) {
          auVar110._4_4_ = iVar12;
          auVar110._0_4_ = iVar12;
          auVar110._8_4_ = iVar12;
          auVar110._12_4_ = iVar12;
          auVar110._16_4_ = iVar12;
          auVar110._20_4_ = iVar12;
          auVar110._24_4_ = iVar12;
          auVar110._28_4_ = iVar12;
          auVar110 = vpmulld_avx2(local_580,auVar110);
          vpmovsxdq_avx2(auVar110._16_16_);
          vpmovsxdq_avx2(auVar110._0_16_);
                    /* WARNING: Could not recover jumptable at 0x000140adf6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6b5a0 + *(int *)(&DAT_151c6b5a0 + uVar9 * 4)))
                    (&DAT_151c6b5a0 + *(int *)(&DAT_151c6b5a0 + uVar9 * 4),auVar110._0_8_,
                     auVar110._16_8_);
          return;
        }
        _local_380 = vmaskmovps_avx(auVar18,auVar20);
        auVar96 = ZEXT1632(auVar112);
        _local_360 = vmaskmovps_avx(auVar18,auVar96);
        _local_340 = vmaskmovps_avx(auVar18,auVar96);
        auVar50._4_4_ = __real_3f800000;
        auVar50._0_4_ = __real_3f800000;
        auVar50._8_4_ = __real_3f800000;
        auVar50._12_4_ = __real_3f800000;
        auVar50._16_4_ = __real_3f800000;
        auVar50._20_4_ = __real_3f800000;
        auVar50._24_4_ = __real_3f800000;
        auVar50._28_4_ = __real_3f800000;
        _local_320 = vmaskmovps_avx(auVar18,auVar50);
        auVar15 = vpackssdw_avx(auVar18._0_16_,auVar18._16_16_);
        in_ZMM13 = ZEXT3264(auVar110);
        auVar19 = vpcmpeqd_avx2(local_580,auVar110);
        auVar18 = vpmovsxwd_avx2(auVar15);
        auVar18 = auVar18 & ~auVar19;
        if ((((((((SUB321(auVar18 >> 0x1f,0) & 1) != 0 || (SUB321(auVar18 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar18 >> 0x5f,0) & 1) != 0) || SUB321(auVar18 >> 0x7f,0) != '\0') ||
              (SUB321(auVar18 >> 0x9f,0) & 1) != 0) || SUB321(auVar18 >> 0xbf,0) != '\0') ||
            (SUB321(auVar18 >> 0xdf,0) & 1) != 0) || auVar18[0x1f] < '\0') {
          auVar3 = vpackssdw_avx(SUB3216(auVar100 ^ auVar19,0),SUB3216(auVar100 ^ auVar19,0x10));
          auVar15 = vpand_avx(auVar15,auVar3);
          auVar18 = vpmovsxwd_avx2(auVar15);
          if (in_stack_00000040 < 6) {
            auVar35._4_4_ = iVar12;
            auVar35._0_4_ = iVar12;
            auVar35._8_4_ = iVar12;
            auVar35._12_4_ = iVar12;
            auVar35._16_4_ = iVar12;
            auVar35._20_4_ = iVar12;
            auVar35._24_4_ = iVar12;
            auVar35._28_4_ = iVar12;
            auVar110 = vpmulld_avx2(auVar110,auVar35);
            vpmovsxdq_avx2(auVar110._16_16_);
            vpmovsxdq_avx2(auVar110._0_16_);
                    /* WARNING: Could not recover jumptable at 0x000140adffb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_151c6b5b8 + *(int *)(&DAT_151c6b5b8 + uVar9 * 4)))
                      (&DAT_151c6b5b8 + *(int *)(&DAT_151c6b5b8 + uVar9 * 4),auVar110._0_8_,
                       auVar110._16_8_);
            return;
          }
          auVar19 = vmaskmovps_avx(auVar18,auVar96);
          auVar50 = vmaskmovps_avx(auVar18,auVar96);
          auVar96 = vmaskmovps_avx(auVar18,auVar20);
          auVar23._4_4_ = __real_3f800000;
          auVar23._0_4_ = __real_3f800000;
          auVar23._8_4_ = __real_3f800000;
          auVar23._12_4_ = __real_3f800000;
          auVar23._16_4_ = __real_3f800000;
          auVar23._20_4_ = __real_3f800000;
          auVar23._24_4_ = __real_3f800000;
          auVar23._28_4_ = __real_3f800000;
          auVar100 = vmaskmovps_avx(auVar18,auVar23);
          local_2e0 = auVar19._0_4_;
          fStack_2dc = auVar19._4_4_;
          fStack_2d8 = auVar19._8_4_;
          fStack_2d4 = auVar19._12_4_;
          fStack_2d0 = auVar19._16_4_;
          fStack_2cc = auVar19._20_4_;
          fStack_2c8 = auVar19._24_4_;
          fStack_2c4 = auVar19._28_4_;
          local_2c0 = auVar50._0_4_;
          fStack_2bc = auVar50._4_4_;
          fStack_2b8 = auVar50._8_4_;
          fStack_2b4 = auVar50._12_4_;
          fStack_2b0 = auVar50._16_4_;
          fStack_2ac = auVar50._20_4_;
          fStack_2a8 = auVar50._24_4_;
          fStack_2a4 = auVar50._28_4_;
          local_2a0 = auVar96._0_4_;
          fStack_29c = auVar96._4_4_;
          fStack_298 = auVar96._8_4_;
          fStack_294 = auVar96._12_4_;
          fStack_290 = auVar96._16_4_;
          fStack_28c = auVar96._20_4_;
          fStack_288 = auVar96._24_4_;
          fStack_284 = auVar96._28_4_;
          local_280 = auVar100._0_4_;
          fStack_27c = auVar100._4_4_;
          fStack_278 = auVar100._8_4_;
          fStack_274 = auVar100._12_4_;
          fStack_270 = auVar100._16_4_;
          fStack_26c = auVar100._20_4_;
          fStack_268 = auVar100._24_4_;
          fStack_264 = auVar100._28_4_;
          auVar99._0_4_ =
               (float)local_380._0_4_ * local_2e0 + local_2a0 * (float)local_340._0_4_ +
               (float)local_360._0_4_ * local_2c0 + local_280 * (float)local_320._0_4_;
          auVar99._4_4_ =
               (float)local_380._4_4_ * fStack_2dc + fStack_29c * (float)local_340._4_4_ +
               (float)local_360._4_4_ * fStack_2bc + fStack_27c * (float)local_320._4_4_;
          auVar99._8_4_ =
               fStack_378 * fStack_2d8 + fStack_298 * fStack_338 +
               fStack_358 * fStack_2b8 + fStack_278 * fStack_318;
          auVar99._12_4_ =
               fStack_374 * fStack_2d4 + fStack_294 * fStack_334 +
               fStack_354 * fStack_2b4 + fStack_274 * fStack_314;
          auVar99._16_4_ =
               fStack_370 * fStack_2d0 + fStack_290 * fStack_330 +
               fStack_350 * fStack_2b0 + fStack_270 * fStack_310;
          auVar99._20_4_ =
               fStack_36c * fStack_2cc + fStack_28c * fStack_32c +
               fStack_34c * fStack_2ac + fStack_26c * fStack_30c;
          auVar99._24_4_ =
               fStack_368 * fStack_2c8 + fStack_288 * fStack_328 +
               fStack_348 * fStack_2a8 + fStack_268 * fStack_308;
          auVar99._28_4_ =
               fStack_364 * fStack_2c4 + fStack_284 * fStack_324 +
               fStack_344 * fStack_2a4 + fStack_264 * fStack_304;
          auVar19 = vcmpps_avx(auVar20,auVar99,6);
          auVar19 = vcvtdq2ps_avx(auVar19 | local_3c0);
          auVar111._4_4_ = __real_3f800000;
          auVar111._0_4_ = __real_3f800000;
          auVar111._8_4_ = __real_3f800000;
          auVar111._12_4_ = __real_3f800000;
          auVar111._16_4_ = __real_3f800000;
          auVar111._20_4_ = __real_3f800000;
          auVar111._24_4_ = __real_3f800000;
          auVar111._28_4_ = __real_3f800000;
          auVar20 = vsubps_avx(auVar111,local_460);
          fVar98 = auVar20._0_4_ * auVar19._0_4_;
          fVar103 = auVar20._4_4_ * auVar19._4_4_;
          fVar104 = auVar20._8_4_ * auVar19._8_4_;
          fVar105 = auVar20._12_4_ * auVar19._12_4_;
          fVar106 = auVar20._16_4_ * auVar19._16_4_;
          fVar107 = auVar20._20_4_ * auVar19._20_4_;
          fVar108 = auVar20._24_4_ * auVar19._24_4_;
          fVar109 = auVar20._28_4_ * auVar19._28_4_;
          fVar63 = local_460._0_4_;
          fVar17 = fVar63 * local_2e0 + fVar98 * (float)local_380._0_4_;
          fVar68 = local_460._4_4_;
          fVar25 = fVar68 * fStack_2dc + fVar103 * (float)local_380._4_4_;
          fVar69 = local_460._8_4_;
          fVar26 = fVar69 * fStack_2d8 + fVar104 * fStack_378;
          fVar70 = local_460._12_4_;
          fVar27 = fVar70 * fStack_2d4 + fVar105 * fStack_374;
          fVar71 = local_460._16_4_;
          fVar28 = fVar71 * fStack_2d0 + fVar106 * fStack_370;
          fVar72 = local_460._20_4_;
          fVar29 = fVar72 * fStack_2cc + fVar107 * fStack_36c;
          fVar73 = local_460._24_4_;
          fVar30 = fVar73 * fStack_2c8 + fVar108 * fStack_368;
          fVar74 = local_460._28_4_;
          fVar31 = fVar74 * fStack_2c4 + fVar109 * fStack_364;
          fVar32 = fVar63 * local_2c0 + fVar98 * (float)local_360._0_4_;
          fVar42 = fVar68 * fStack_2bc + fVar103 * (float)local_360._4_4_;
          fVar43 = fVar69 * fStack_2b8 + fVar104 * fStack_358;
          fVar44 = fVar70 * fStack_2b4 + fVar105 * fStack_354;
          fVar45 = fVar71 * fStack_2b0 + fVar106 * fStack_350;
          fVar46 = fVar72 * fStack_2ac + fVar107 * fStack_34c;
          fVar47 = fVar73 * fStack_2a8 + fVar108 * fStack_348;
          fVar48 = fVar74 * fStack_2a4 + fVar109 * fStack_344;
          fVar49 = fVar63 * local_2a0 + fVar98 * (float)local_340._0_4_;
          fVar54 = fVar68 * fStack_29c + fVar103 * (float)local_340._4_4_;
          fVar55 = fVar69 * fStack_298 + fVar104 * fStack_338;
          fVar56 = fVar70 * fStack_294 + fVar105 * fStack_334;
          fVar57 = fVar71 * fStack_290 + fVar106 * fStack_330;
          fVar58 = fVar72 * fStack_28c + fVar107 * fStack_32c;
          fVar59 = fVar73 * fStack_288 + fVar108 * fStack_328;
          fVar60 = fVar74 * fStack_284 + fVar109 * fStack_324;
          fVar63 = fVar63 * local_280 + fVar98 * (float)local_320._0_4_;
          fVar68 = fVar68 * fStack_27c + fVar103 * (float)local_320._4_4_;
          fVar69 = fVar69 * fStack_278 + fVar104 * fStack_318;
          fVar70 = fVar70 * fStack_274 + fVar105 * fStack_314;
          fVar71 = fVar71 * fStack_270 + fVar106 * fStack_310;
          fVar72 = fVar72 * fStack_26c + fVar107 * fStack_30c;
          fVar73 = fVar73 * fStack_268 + fVar108 * fStack_308;
          fVar74 = fVar74 * fStack_264 + fVar109 * fStack_304;
          auVar75._0_4_ = fVar32 * fVar32 + fVar63 * fVar63 + fVar17 * fVar17 + fVar49 * fVar49;
          auVar75._4_4_ = fVar42 * fVar42 + fVar68 * fVar68 + fVar25 * fVar25 + fVar54 * fVar54;
          auVar75._8_4_ = fVar43 * fVar43 + fVar69 * fVar69 + fVar26 * fVar26 + fVar55 * fVar55;
          auVar75._12_4_ = fVar44 * fVar44 + fVar70 * fVar70 + fVar27 * fVar27 + fVar56 * fVar56;
          auVar75._16_4_ = fVar45 * fVar45 + fVar71 * fVar71 + fVar28 * fVar28 + fVar57 * fVar57;
          auVar75._20_4_ = fVar46 * fVar46 + fVar72 * fVar72 + fVar29 * fVar29 + fVar58 * fVar58;
          auVar75._24_4_ = fVar47 * fVar47 + fVar73 * fVar73 + fVar30 * fVar30 + fVar59 * fVar59;
          auVar75._28_4_ = fVar48 * fVar48 + fVar74 * fVar74 + fVar31 * fVar31 + fVar60 * fVar60;
          auVar82._4_4_ = __real_322bcc77;
          auVar82._0_4_ = __real_322bcc77;
          auVar82._8_4_ = __real_322bcc77;
          auVar82._12_4_ = __real_322bcc77;
          auVar82._16_4_ = __real_322bcc77;
          auVar82._20_4_ = __real_322bcc77;
          auVar82._24_4_ = __real_322bcc77;
          auVar82._28_4_ = __real_322bcc77;
          auVar19 = vcmpps_avx(auVar82,auVar75,6);
          auVar20 = vcmpps_avx(auVar82,auVar75,2);
          auVar93._4_4_ = __real_3f000000;
          auVar93._0_4_ = __real_3f000000;
          auVar93._8_4_ = __real_3f000000;
          auVar93._12_4_ = __real_3f000000;
          auVar93._16_4_ = __real_3f000000;
          auVar93._20_4_ = __real_3f000000;
          auVar93._24_4_ = __real_3f000000;
          auVar93._28_4_ = __real_3f000000;
          auVar50 = vrsqrtps_avx(auVar75);
          fVar98 = auVar50._0_4_;
          fVar103 = auVar50._4_4_;
          fVar104 = auVar50._8_4_;
          fVar105 = auVar50._12_4_;
          fVar106 = auVar50._16_4_;
          fVar107 = auVar50._20_4_;
          fVar108 = auVar50._24_4_;
          fVar109 = auVar50._28_4_;
          fVar98 = (-(__real_3f000000 * auVar75._0_4_ * fVar98 * fVar98) + __real_3f000000) * fVar98
                   + fVar98;
          fVar103 = (-(__real_3f000000 * auVar75._4_4_ * fVar103 * fVar103) + __real_3f000000) *
                    fVar103 + fVar103;
          fVar104 = (-(__real_3f000000 * auVar75._8_4_ * fVar104 * fVar104) + __real_3f000000) *
                    fVar104 + fVar104;
          fVar105 = (-(__real_3f000000 * auVar75._12_4_ * fVar105 * fVar105) + __real_3f000000) *
                    fVar105 + fVar105;
          fVar106 = (-(__real_3f000000 * auVar75._16_4_ * fVar106 * fVar106) + __real_3f000000) *
                    fVar106 + fVar106;
          fVar107 = (-(__real_3f000000 * auVar75._20_4_ * fVar107 * fVar107) + __real_3f000000) *
                    fVar107 + fVar107;
          fVar108 = (-(__real_3f000000 * auVar75._24_4_ * fVar108 * fVar108) + __real_3f000000) *
                    fVar108 + fVar108;
          fVar109 = (-(__real_3f000000 * auVar75._28_4_ * fVar109 * fVar109) + __real_3f000000) *
                    fVar109 + fVar109;
          fVar98 = (-(__real_3f000000 * auVar75._0_4_ * fVar98 * fVar98) + __real_3f000000) * fVar98
                   + fVar98;
          fVar103 = (-(__real_3f000000 * auVar75._4_4_ * fVar103 * fVar103) + __real_3f000000) *
                    fVar103 + fVar103;
          fVar104 = (-(__real_3f000000 * auVar75._8_4_ * fVar104 * fVar104) + __real_3f000000) *
                    fVar104 + fVar104;
          fVar105 = (-(__real_3f000000 * auVar75._12_4_ * fVar105 * fVar105) + __real_3f000000) *
                    fVar105 + fVar105;
          fVar106 = (-(__real_3f000000 * auVar75._16_4_ * fVar106 * fVar106) + __real_3f000000) *
                    fVar106 + fVar106;
          fVar107 = (-(__real_3f000000 * auVar75._20_4_ * fVar107 * fVar107) + __real_3f000000) *
                    fVar107 + fVar107;
          fVar108 = (-(__real_3f000000 * auVar75._24_4_ * fVar108 * fVar108) + __real_3f000000) *
                    fVar108 + fVar108;
          fVar109 = (-(__real_3f000000 * auVar75._28_4_ * fVar109 * fVar109) + __real_3f000000) *
                    fVar109 + fVar109;
          uVar80 = auVar20._0_4_;
          auVar22._0_4_ = uVar80 & (uint)(fVar17 * fVar98);
          uVar85 = auVar20._4_4_;
          auVar22._4_4_ = uVar85 & (uint)(fVar25 * fVar103);
          uVar86 = auVar20._8_4_;
          auVar22._8_4_ = uVar86 & (uint)(fVar26 * fVar104);
          uVar87 = auVar20._12_4_;
          auVar22._12_4_ = uVar87 & (uint)(fVar27 * fVar105);
          uVar88 = auVar20._16_4_;
          auVar22._16_4_ = uVar88 & (uint)(fVar28 * fVar106);
          uVar89 = auVar20._20_4_;
          auVar22._20_4_ = uVar89 & (uint)(fVar29 * fVar107);
          uVar90 = auVar20._24_4_;
          auVar22._24_4_ = uVar90 & (uint)(fVar30 * fVar108);
          uVar91 = auVar20._28_4_;
          auVar22._28_4_ = uVar91 & (uint)(fVar31 * fVar109);
          auVar20._0_4_ = uVar80 & (uint)(fVar32 * fVar98);
          auVar20._4_4_ = uVar85 & (uint)(fVar42 * fVar103);
          auVar20._8_4_ = uVar86 & (uint)(fVar43 * fVar104);
          auVar20._12_4_ = uVar87 & (uint)(fVar44 * fVar105);
          auVar20._16_4_ = uVar88 & (uint)(fVar45 * fVar106);
          auVar20._20_4_ = uVar89 & (uint)(fVar46 * fVar107);
          auVar20._24_4_ = uVar90 & (uint)(fVar47 * fVar108);
          auVar20._28_4_ = uVar91 & (uint)(fVar48 * fVar109);
          auVar51._0_4_ = uVar80 & (uint)(fVar49 * fVar98);
          auVar51._4_4_ = uVar85 & (uint)(fVar54 * fVar103);
          auVar51._8_4_ = uVar86 & (uint)(fVar55 * fVar104);
          auVar51._12_4_ = uVar87 & (uint)(fVar56 * fVar105);
          auVar51._16_4_ = uVar88 & (uint)(fVar57 * fVar106);
          auVar51._20_4_ = uVar89 & (uint)(fVar58 * fVar107);
          auVar51._24_4_ = uVar90 & (uint)(fVar59 * fVar108);
          auVar51._28_4_ = uVar91 & (uint)(fVar60 * fVar109);
          auVar76._0_4_ = auVar19._0_4_ & (uint)__real_3f800000;
          auVar76._4_4_ = auVar19._4_4_ & (uint)__real_3f800000;
          auVar76._8_4_ = auVar19._8_4_ & (uint)__real_3f800000;
          auVar76._12_4_ = auVar19._12_4_ & (uint)__real_3f800000;
          auVar76._16_4_ = auVar19._16_4_ & (uint)__real_3f800000;
          auVar76._20_4_ = auVar19._20_4_ & (uint)__real_3f800000;
          auVar76._24_4_ = auVar19._24_4_ & (uint)__real_3f800000;
          auVar76._28_4_ = auVar19._28_4_ & (uint)__real_3f800000;
          auVar64._0_4_ = uVar80 & (uint)(fVar63 * fVar98);
          auVar64._4_4_ = uVar85 & (uint)(fVar68 * fVar103);
          auVar64._8_4_ = uVar86 & (uint)(fVar69 * fVar104);
          auVar64._12_4_ = uVar87 & (uint)(fVar70 * fVar105);
          auVar64._16_4_ = uVar88 & (uint)(fVar71 * fVar106);
          auVar64._20_4_ = uVar89 & (uint)(fVar72 * fVar107);
          auVar64._24_4_ = uVar90 & (uint)(fVar73 * fVar108);
          auVar64._28_4_ = uVar91 & (uint)(fVar74 * fVar109);
          _local_380 = vmaskmovps_avx(auVar18,auVar22);
          _local_360 = vmaskmovps_avx(auVar18,auVar20);
          _local_340 = vmaskmovps_avx(auVar18,auVar51);
          _local_320 = vmaskmovps_avx(auVar18,auVar64 | auVar76);
          auVar18 = vpcmpeqd_avx2(auVar93,auVar93);
          auVar95 = ZEXT3264(auVar18);
          in_ZMM13 = ZEXT3264(auVar110);
        }
      }
      auVar110 = auVar95._0_32_;
      local_220._16_16_ = ZEXT116(1) * auVar2;
      local_220._0_16_ = ZEXT116(0) * auVar2 | ZEXT116(1) * auVar33;
      auVar18 = vperm2i128_avx2(_local_340,_local_320,0x20);
      auVar19 = vperm2i128_avx2(_local_340,_local_320,0x31);
      auVar20 = vperm2i128_avx2(_local_380,_local_360,0x20);
      auVar50 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                            auVar18);
      auVar96 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                            auVar20);
      local_180 = vpblendd_avx2(auVar96,auVar50,0xcc);
      auVar18 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                            auVar18);
      in_ZMM6 = ZEXT3264(auVar18);
      auVar20 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                            auVar20);
      local_160 = vpblendd_avx2(auVar20,auVar18,0xcc);
      auVar18 = vperm2i128_avx2(_local_380,_local_360,0x31);
      auVar20 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                            auVar19);
      auVar50 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                            auVar18);
      in_ZMM5 = ZEXT3264(auVar50);
      local_140 = vpblendd_avx2(auVar50,auVar20,0xcc);
      auVar19 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                            auVar19);
      auVar18 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                            auVar18);
      local_120 = vpblendd_avx2(auVar18,auVar19,0xcc);
      uVar11 = 0xff;
      do {
        uVar80 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
          uVar80 = uVar80 + 1;
        }
        bVar5 = (byte)uVar80 & 0x3f;
        auVar18 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar80 << 4)));
        *(undefined1 (*) [32])
         (param_1 + (longlong)*(int *)(local_220 + (ulonglong)(uVar80 & 7) * 4) * 0x60) = auVar18;
        uVar11 = uVar11 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
      } while (uVar11 != 0);
      iVar14 = iVar14 + 8;
    } while (iVar14 < (int)(uVar8 & 0xfffffff8));
  }
  if (iVar14 < (int)in_stack_00000048) {
    auVar16._4_4_ = iVar14;
    auVar16._0_4_ = iVar14;
    auVar16._8_4_ = iVar14;
    auVar16._12_4_ = iVar14;
    auVar16._16_4_ = iVar14;
    auVar16._20_4_ = iVar14;
    auVar16._24_4_ = iVar14;
    auVar16._28_4_ = iVar14;
    auVar35 = vpor_avx2(auVar16,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar24._4_4_ = in_stack_00000048;
    auVar24._0_4_ = in_stack_00000048;
    auVar24._8_4_ = in_stack_00000048;
    auVar24._12_4_ = in_stack_00000048;
    auVar24._16_4_ = in_stack_00000048;
    auVar24._20_4_ = in_stack_00000048;
    auVar24._24_4_ = in_stack_00000048;
    auVar24._28_4_ = in_stack_00000048;
    auVar18 = vpcmpgtd_avx2(auVar24,auVar35);
    auVar35 = vpslld_avx2(auVar35,3);
    local_240 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
    auVar113._4_4_ = __real_00000004;
    auVar113._0_4_ = __real_00000004;
    auVar113._8_4_ = __real_00000004;
    auVar113._12_4_ = __real_00000004;
    auVar113._16_4_ = __real_00000004;
    auVar113._20_4_ = __real_00000004;
    auVar113._24_4_ = __real_00000004;
    auVar113._28_4_ = __real_00000004;
    vpor_avx2(auVar113,auVar35);
    auVar35 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
    auVar35 = vpslld_avx2(auVar35,4);
    auVar65._4_4_ = __real_00000008;
    auVar65._0_4_ = __real_00000008;
    auVar65._8_4_ = __real_00000008;
    auVar65._12_4_ = __real_00000008;
    auVar65._16_4_ = __real_00000008;
    auVar65._20_4_ = __real_00000008;
    auVar65._24_4_ = __real_00000008;
    auVar65._28_4_ = __real_00000008;
    vpor_avx2(auVar35,auVar65);
    auVar20 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
    auVar52._4_4_ = __real_0000000c;
    auVar52._0_4_ = __real_0000000c;
    auVar52._8_4_ = __real_0000000c;
    auVar52._12_4_ = __real_0000000c;
    auVar52._16_4_ = __real_0000000c;
    auVar52._20_4_ = __real_0000000c;
    auVar52._24_4_ = __real_0000000c;
    auVar52._28_4_ = __real_0000000c;
    vpor_avx2(auVar35,auVar52);
    auVar19 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar18);
    auVar36._4_4_ = __real_00000001;
    auVar36._0_4_ = __real_00000001;
    auVar36._8_4_ = __real_00000001;
    auVar36._12_4_ = __real_00000001;
    auVar36._16_4_ = __real_00000001;
    auVar36._20_4_ = __real_00000001;
    auVar36._24_4_ = __real_00000001;
    auVar36._28_4_ = __real_00000001;
    auVar38 = vpcmpeqd_avx2(auVar19,auVar36);
    auVar35 = auVar18 & auVar38;
    if ((((((((SUB321(auVar35 >> 0x1f,0) & 1) != 0 || (SUB321(auVar35 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar35 >> 0x5f,0) & 1) != 0) || SUB321(auVar35 >> 0x7f,0) != '\0') ||
          (SUB321(auVar35 >> 0x9f,0) & 1) != 0) || SUB321(auVar35 >> 0xbf,0) != '\0') ||
        (SUB321(auVar35 >> 0xdf,0) & 1) != 0) || auVar35[0x1f] < '\0') {
      auVar83._0_4_ = auVar38._0_4_ & auVar18._0_4_;
      auVar83._4_4_ = auVar38._4_4_ & auVar18._4_4_;
      auVar83._8_4_ = auVar38._8_4_ & auVar18._8_4_;
      auVar83._12_4_ = auVar38._12_4_ & auVar18._12_4_;
      auVar83._16_4_ = auVar38._16_4_ & auVar18._16_4_;
      auVar83._20_4_ = auVar38._20_4_ & auVar18._20_4_;
      auVar83._24_4_ = auVar38._24_4_ & auVar18._24_4_;
      auVar83._28_4_ = auVar38._28_4_ & auVar18._28_4_;
      auVar50 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
      auVar96 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      auVar100 = vgatherdps(ZEXT832(0),auVar83);
      auVar94._0_4_ =
           -(auVar100._0_4_ * auVar100._0_4_) +
           -(auVar96._0_4_ * auVar96._0_4_) + -(auVar50._0_4_ * auVar50._0_4_) + __real_3f800000;
      auVar94._4_4_ =
           -(auVar100._4_4_ * auVar100._4_4_) +
           -(auVar96._4_4_ * auVar96._4_4_) + -(auVar50._4_4_ * auVar50._4_4_) + __real_3f800000;
      auVar94._8_4_ =
           -(auVar100._8_4_ * auVar100._8_4_) +
           -(auVar96._8_4_ * auVar96._8_4_) + -(auVar50._8_4_ * auVar50._8_4_) + __real_3f800000;
      auVar94._12_4_ =
           -(auVar100._12_4_ * auVar100._12_4_) +
           -(auVar96._12_4_ * auVar96._12_4_) + -(auVar50._12_4_ * auVar50._12_4_) + __real_3f800000
      ;
      auVar94._16_4_ =
           -(auVar100._16_4_ * auVar100._16_4_) +
           -(auVar96._16_4_ * auVar96._16_4_) + -(auVar50._16_4_ * auVar50._16_4_) + __real_3f800000
      ;
      auVar94._20_4_ =
           -(auVar100._20_4_ * auVar100._20_4_) +
           -(auVar96._20_4_ * auVar96._20_4_) + -(auVar50._20_4_ * auVar50._20_4_) + __real_3f800000
      ;
      auVar94._24_4_ =
           -(auVar100._24_4_ * auVar100._24_4_) +
           -(auVar96._24_4_ * auVar96._24_4_) + -(auVar50._24_4_ * auVar50._24_4_) + __real_3f800000
      ;
      auVar94._28_4_ =
           -(auVar100._28_4_ * auVar100._28_4_) +
           -(auVar96._28_4_ * auVar96._28_4_) + -(auVar50._28_4_ * auVar50._28_4_) + __real_3f800000
      ;
      auVar35 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar94,1);
      auVar110 = vsqrtps_avx(auVar94);
      auVar77._0_4_ = auVar110._0_4_ & auVar35._0_4_;
      auVar77._4_4_ = auVar110._4_4_ & auVar35._4_4_;
      auVar77._8_4_ = auVar110._8_4_ & auVar35._8_4_;
      auVar77._12_4_ = auVar110._12_4_ & auVar35._12_4_;
      auVar77._16_4_ = auVar110._16_4_ & auVar35._16_4_;
      auVar77._20_4_ = auVar110._20_4_ & auVar35._20_4_;
      auVar77._24_4_ = auVar110._24_4_ & auVar35._24_4_;
      auVar77._28_4_ = auVar110._28_4_ & auVar35._28_4_;
      _local_560 = vmaskmovps_avx(auVar83,auVar50);
      _local_540 = vmaskmovps_avx(auVar83,auVar96);
      _local_520 = vmaskmovps_avx(auVar83,auVar100);
      _local_500 = vmaskmovps_avx(auVar83,auVar77);
    }
    auVar84._0_4_ = ~auVar38._0_4_ & auVar18._0_4_;
    auVar84._4_4_ = ~auVar38._4_4_ & auVar18._4_4_;
    auVar84._8_4_ = ~auVar38._8_4_ & auVar18._8_4_;
    auVar84._12_4_ = ~auVar38._12_4_ & auVar18._12_4_;
    auVar84._16_4_ = ~auVar38._16_4_ & auVar18._16_4_;
    auVar84._20_4_ = ~auVar38._20_4_ & auVar18._20_4_;
    auVar84._24_4_ = ~auVar38._24_4_ & auVar18._24_4_;
    auVar84._28_4_ = ~auVar38._28_4_ & auVar18._28_4_;
    iVar14 = vmovmskps_avx(auVar84);
    if (iVar14 != 0) {
      auVar35 = vpcmpgtd_avx2(auVar19,auVar36);
      auVar38 = vpandn_avx2(auVar35,auVar84);
      auVar35 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      iVar10 = vmovmskps_avx(auVar38);
      auVar50 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      if ((iVar10 == 0) || (auVar50 = auVar38, (char)iVar14 != (char)iVar10)) {
        auVar96 = vpcmpeqd_avx2(auVar110,auVar110);
        auVar50 = auVar96 ^ auVar50;
        auVar110 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar38 = ZEXT1632((undefined1  [16])0x0);
        if (0.0 < in_stack_00000030) {
          auVar1._0_4_ = auVar96._0_4_ + auVar19._0_4_;
          auVar1._4_4_ = auVar96._4_4_ + auVar19._4_4_;
          auVar1._8_4_ = auVar96._8_4_ + auVar19._8_4_;
          auVar1._12_4_ = auVar96._12_4_ + auVar19._12_4_;
          auVar1._16_4_ = auVar96._16_4_ + auVar19._16_4_;
          auVar1._20_4_ = auVar96._20_4_ + auVar19._20_4_;
          auVar1._24_4_ = auVar96._24_4_ + auVar19._24_4_;
          auVar1._28_4_ = auVar96._28_4_ + auVar19._28_4_;
          if (__real_3f800000 <= in_stack_00000030) {
            auVar110 = vpand_avx2(auVar84,auVar50);
            auVar110 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar1,auVar110);
            auVar35 = auVar110;
          }
          else {
            auVar110 = vcvtdq2ps_avx(auVar1);
            auVar101._0_4_ = auVar110._0_4_ * in_stack_00000030;
            auVar101._4_4_ = auVar110._4_4_ * in_stack_00000030;
            auVar101._8_4_ = auVar110._8_4_ * in_stack_00000030;
            auVar101._12_4_ = auVar110._12_4_ * in_stack_00000030;
            auVar101._16_4_ = auVar110._16_4_ * in_stack_00000030;
            auVar101._20_4_ = auVar110._20_4_ * in_stack_00000030;
            auVar101._24_4_ = auVar110._24_4_ * in_stack_00000030;
            auVar101._28_4_ = auVar110._28_4_ * in_stack_00000030;
            auVar96 = vpand_avx2(auVar84,auVar50);
            auVar19 = vroundps_avx(auVar101,9);
            auVar78._0_4_ = (int)auVar19._0_4_;
            auVar78._4_4_ = (int)auVar19._4_4_;
            auVar78._8_4_ = (int)auVar19._8_4_;
            auVar78._12_4_ = (int)auVar19._12_4_;
            auVar78._16_4_ = (int)auVar19._16_4_;
            auVar78._20_4_ = (int)auVar19._20_4_;
            auVar78._24_4_ = (int)auVar19._24_4_;
            auVar78._28_4_ = (int)auVar19._28_4_;
            auVar110 = vpminsd_avx2(auVar78,auVar1);
            auVar110 = vblendvps_avx(auVar35,auVar110,auVar96);
            auVar38 = ZEXT832(0) << 0x20;
            if (in_stack_00000038 != '\x01') {
              auVar38 = vsubps_avx(auVar101,auVar19);
            }
            auVar19 = vpcmpeqd_avx2(auVar101,auVar101);
            auVar19 = vpsubd_avx2(auVar110,auVar19);
            auVar19 = vpminsd_avx2(auVar19,auVar1);
            auVar35 = vblendvps_avx(auVar35,auVar19,auVar96);
          }
        }
        local_580 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar38,auVar50);
      }
      else {
        local_580 = ZEXT832(0) << 0x20;
        auVar110 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      vpmovsxdq_avx2(auVar20._16_16_);
      vpmovsxdq_avx2(auVar20._0_16_);
      auVar33._4_4_ = uVar6;
      auVar33._0_4_ = uVar6;
      auVar33._8_4_ = uVar6;
      auVar33._12_4_ = uVar6;
      vpmovzxdq_avx2(auVar33);
      auVar37._4_4_ = iVar12;
      auVar37._0_4_ = iVar12;
      auVar37._8_4_ = iVar12;
      auVar37._12_4_ = iVar12;
      auVar37._16_4_ = iVar12;
      auVar37._20_4_ = iVar12;
      auVar37._24_4_ = iVar12;
      auVar37._28_4_ = iVar12;
      if (in_stack_00000040 < 6) {
        auVar35 = vpmulld_avx2(auVar110,auVar37);
        vpmovsxdq_avx2(auVar35._16_16_);
        auVar110 = vpmovsxdq_avx2(auVar35._0_16_);
                    /* WARNING: Could not recover jumptable at 0x000140ae0d16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6b5d0 + *(int *)(&DAT_151c6b5d0 + uVar9 * 4)))
                  (&DAT_151c6b5d0,&DAT_151c6b5d0 + *(int *)(&DAT_151c6b5d0 + uVar9 * 4),
                   auVar110._0_8_,auVar35._16_8_);
        return;
      }
      auVar38 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      _local_560 = vmaskmovps_avx(auVar84,auVar38);
      _local_540 = vmaskmovps_avx(auVar84,auVar38);
      _local_520 = vmaskmovps_avx(auVar84,auVar38);
      auVar39._4_4_ = __real_3f800000;
      auVar39._0_4_ = __real_3f800000;
      auVar39._8_4_ = __real_3f800000;
      auVar39._12_4_ = __real_3f800000;
      auVar39._16_4_ = __real_3f800000;
      auVar39._20_4_ = __real_3f800000;
      auVar39._24_4_ = __real_3f800000;
      auVar39._28_4_ = __real_3f800000;
      _local_500 = vmaskmovps_avx(auVar84,auVar39);
      auVar38 = vpcmpeqd_avx2(auVar110,auVar35);
      auVar110 = auVar84 & ~auVar38;
      if ((((((((SUB321(auVar110 >> 0x1f,0) & 1) != 0 || (SUB321(auVar110 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar110 >> 0x5f,0) & 1) != 0) || SUB321(auVar110 >> 0x7f,0) != '\0') ||
            (SUB321(auVar110 >> 0x9f,0) & 1) != 0) || SUB321(auVar110 >> 0xbf,0) != '\0') ||
          (SUB321(auVar110 >> 0xdf,0) & 1) != 0) || auVar110[0x1f] < '\0') {
        auVar110 = vpandn_avx2(auVar38,auVar84);
        if (in_stack_00000040 < 6) {
          auVar35 = vpmulld_avx2(auVar35,auVar37);
          vpmovsxdq_avx2(auVar35._16_16_);
          auVar110 = vpmovsxdq_avx2(auVar35._0_16_);
                    /* WARNING: Could not recover jumptable at 0x000140ae15f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6b5e8 + *(int *)(&DAT_151c6b5e8 + uVar9 * 4)))
                    (&DAT_151c6b5e8,&DAT_151c6b5e8 + *(int *)(&DAT_151c6b5e8 + uVar9 * 4),
                     auVar110._0_8_,auVar35._16_8_);
          return;
        }
        auVar35 = vmaskmovps_avx(auVar110,ZEXT832(0) << 0x20);
        auVar38 = vmaskmovps_avx(auVar110,ZEXT832(0) << 0x20);
        auVar19 = vmaskmovps_avx(auVar110,ZEXT832(0) << 0x20);
        auVar40._4_4_ = __real_3f800000;
        auVar40._0_4_ = __real_3f800000;
        auVar40._8_4_ = __real_3f800000;
        auVar40._12_4_ = __real_3f800000;
        auVar40._16_4_ = __real_3f800000;
        auVar40._20_4_ = __real_3f800000;
        auVar40._24_4_ = __real_3f800000;
        auVar40._28_4_ = __real_3f800000;
        auVar20 = vmaskmovps_avx(auVar110,auVar40);
        local_440 = auVar35._0_4_;
        fStack_43c = auVar35._4_4_;
        fStack_438 = auVar35._8_4_;
        fStack_434 = auVar35._12_4_;
        fStack_430 = auVar35._16_4_;
        fStack_42c = auVar35._20_4_;
        fStack_428 = auVar35._24_4_;
        fStack_424 = auVar35._28_4_;
        local_420 = auVar38._0_4_;
        fStack_41c = auVar38._4_4_;
        fStack_418 = auVar38._8_4_;
        fStack_414 = auVar38._12_4_;
        fStack_410 = auVar38._16_4_;
        fStack_40c = auVar38._20_4_;
        fStack_408 = auVar38._24_4_;
        fStack_404 = auVar38._28_4_;
        local_400 = auVar19._0_4_;
        fStack_3fc = auVar19._4_4_;
        fStack_3f8 = auVar19._8_4_;
        fStack_3f4 = auVar19._12_4_;
        fStack_3f0 = auVar19._16_4_;
        fStack_3ec = auVar19._20_4_;
        fStack_3e8 = auVar19._24_4_;
        fStack_3e4 = auVar19._28_4_;
        local_3e0 = auVar20._0_4_;
        fStack_3dc = auVar20._4_4_;
        fStack_3d8 = auVar20._8_4_;
        fStack_3d4 = auVar20._12_4_;
        fStack_3d0 = auVar20._16_4_;
        fStack_3cc = auVar20._20_4_;
        fStack_3c8 = auVar20._24_4_;
        fStack_3c4 = auVar20._28_4_;
        auVar97._0_4_ =
             (float)local_560._0_4_ * local_440 + local_400 * (float)local_520._0_4_ +
             (float)local_540._0_4_ * local_420 + local_3e0 * (float)local_500._0_4_;
        auVar97._4_4_ =
             (float)local_560._4_4_ * fStack_43c + fStack_3fc * (float)local_520._4_4_ +
             (float)local_540._4_4_ * fStack_41c + fStack_3dc * (float)local_500._4_4_;
        auVar97._8_4_ =
             fStack_558 * fStack_438 + fStack_3f8 * fStack_518 +
             fStack_538 * fStack_418 + fStack_3d8 * fStack_4f8;
        auVar97._12_4_ =
             fStack_554 * fStack_434 + fStack_3f4 * fStack_514 +
             fStack_534 * fStack_414 + fStack_3d4 * fStack_4f4;
        auVar97._16_4_ =
             fStack_550 * fStack_430 + fStack_3f0 * fStack_510 +
             fStack_530 * fStack_410 + fStack_3d0 * fStack_4f0;
        auVar97._20_4_ =
             fStack_54c * fStack_42c + fStack_3ec * fStack_50c +
             fStack_52c * fStack_40c + fStack_3cc * fStack_4ec;
        auVar97._24_4_ =
             fStack_548 * fStack_428 + fStack_3e8 * fStack_508 +
             fStack_528 * fStack_408 + fStack_3c8 * fStack_4e8;
        auVar97._28_4_ =
             fStack_544 * fStack_424 + fStack_3e4 * fStack_504 +
             fStack_524 * fStack_404 + fStack_3c4 * fStack_4e4;
        auVar35 = vcmpps_avx(ZEXT432(0) << 0x20,auVar97,6);
        auVar35 = vcvtdq2ps_avx(auVar35 | auVar36);
        auVar102._4_4_ = __real_3f800000;
        auVar102._0_4_ = __real_3f800000;
        auVar102._8_4_ = __real_3f800000;
        auVar102._12_4_ = __real_3f800000;
        auVar102._16_4_ = __real_3f800000;
        auVar102._20_4_ = __real_3f800000;
        auVar102._24_4_ = __real_3f800000;
        auVar102._28_4_ = __real_3f800000;
        auVar38 = vsubps_avx(auVar102,local_580);
        fVar98 = auVar38._0_4_ * auVar35._0_4_;
        fVar103 = auVar38._4_4_ * auVar35._4_4_;
        fVar104 = auVar38._8_4_ * auVar35._8_4_;
        fVar105 = auVar38._12_4_ * auVar35._12_4_;
        fVar106 = auVar38._16_4_ * auVar35._16_4_;
        fVar107 = auVar38._20_4_ * auVar35._20_4_;
        fVar108 = auVar38._24_4_ * auVar35._24_4_;
        fVar109 = auVar38._28_4_ * auVar35._28_4_;
        fVar63 = local_580._0_4_;
        fVar17 = fVar63 * local_440 + fVar98 * (float)local_560._0_4_;
        fVar68 = local_580._4_4_;
        fVar25 = fVar68 * fStack_43c + fVar103 * (float)local_560._4_4_;
        fVar69 = local_580._8_4_;
        fVar26 = fVar69 * fStack_438 + fVar104 * fStack_558;
        fVar70 = local_580._12_4_;
        fVar27 = fVar70 * fStack_434 + fVar105 * fStack_554;
        fVar71 = local_580._16_4_;
        fVar28 = fVar71 * fStack_430 + fVar106 * fStack_550;
        fVar72 = local_580._20_4_;
        fVar29 = fVar72 * fStack_42c + fVar107 * fStack_54c;
        fVar73 = local_580._24_4_;
        fVar30 = fVar73 * fStack_428 + fVar108 * fStack_548;
        fVar74 = local_580._28_4_;
        fVar31 = fVar74 * fStack_424 + fVar109 * fStack_544;
        fVar32 = fVar63 * local_420 + fVar98 * (float)local_540._0_4_;
        fVar42 = fVar68 * fStack_41c + fVar103 * (float)local_540._4_4_;
        fVar43 = fVar69 * fStack_418 + fVar104 * fStack_538;
        fVar44 = fVar70 * fStack_414 + fVar105 * fStack_534;
        fVar45 = fVar71 * fStack_410 + fVar106 * fStack_530;
        fVar46 = fVar72 * fStack_40c + fVar107 * fStack_52c;
        fVar47 = fVar73 * fStack_408 + fVar108 * fStack_528;
        fVar48 = fVar74 * fStack_404 + fVar109 * fStack_524;
        fVar49 = fVar63 * local_400 + fVar98 * (float)local_520._0_4_;
        fVar54 = fVar68 * fStack_3fc + fVar103 * (float)local_520._4_4_;
        fVar55 = fVar69 * fStack_3f8 + fVar104 * fStack_518;
        fVar56 = fVar70 * fStack_3f4 + fVar105 * fStack_514;
        fVar57 = fVar71 * fStack_3f0 + fVar106 * fStack_510;
        fVar58 = fVar72 * fStack_3ec + fVar107 * fStack_50c;
        fVar59 = fVar73 * fStack_3e8 + fVar108 * fStack_508;
        fVar60 = fVar74 * fStack_3e4 + fVar109 * fStack_504;
        fVar63 = fVar63 * local_3e0 + fVar98 * (float)local_500._0_4_;
        fVar68 = fVar68 * fStack_3dc + fVar103 * (float)local_500._4_4_;
        fVar69 = fVar69 * fStack_3d8 + fVar104 * fStack_4f8;
        fVar70 = fVar70 * fStack_3d4 + fVar105 * fStack_4f4;
        fVar71 = fVar71 * fStack_3d0 + fVar106 * fStack_4f0;
        fVar72 = fVar72 * fStack_3cc + fVar107 * fStack_4ec;
        fVar73 = fVar73 * fStack_3c8 + fVar108 * fStack_4e8;
        fVar74 = fVar74 * fStack_3c4 + fVar109 * fStack_4e4;
        auVar66._0_4_ = fVar17 * fVar17 + fVar49 * fVar49 + fVar32 * fVar32 + fVar63 * fVar63;
        auVar66._4_4_ = fVar25 * fVar25 + fVar54 * fVar54 + fVar42 * fVar42 + fVar68 * fVar68;
        auVar66._8_4_ = fVar26 * fVar26 + fVar55 * fVar55 + fVar43 * fVar43 + fVar69 * fVar69;
        auVar66._12_4_ = fVar27 * fVar27 + fVar56 * fVar56 + fVar44 * fVar44 + fVar70 * fVar70;
        auVar66._16_4_ = fVar28 * fVar28 + fVar57 * fVar57 + fVar45 * fVar45 + fVar71 * fVar71;
        auVar66._20_4_ = fVar29 * fVar29 + fVar58 * fVar58 + fVar46 * fVar46 + fVar72 * fVar72;
        auVar66._24_4_ = fVar30 * fVar30 + fVar59 * fVar59 + fVar47 * fVar47 + fVar73 * fVar73;
        auVar66._28_4_ = fVar31 * fVar31 + fVar60 * fVar60 + fVar48 * fVar48 + fVar74 * fVar74;
        auVar79._4_4_ = __real_322bcc77;
        auVar79._0_4_ = __real_322bcc77;
        auVar79._8_4_ = __real_322bcc77;
        auVar79._12_4_ = __real_322bcc77;
        auVar79._16_4_ = __real_322bcc77;
        auVar79._20_4_ = __real_322bcc77;
        auVar79._24_4_ = __real_322bcc77;
        auVar79._28_4_ = __real_322bcc77;
        auVar35 = vcmpps_avx(auVar79,auVar66,6);
        auVar38 = vcmpps_avx(auVar79,auVar66,2);
        auVar19 = vrsqrtps_avx(auVar66);
        fVar98 = auVar19._0_4_;
        fVar103 = auVar19._4_4_;
        fVar104 = auVar19._8_4_;
        fVar105 = auVar19._12_4_;
        fVar106 = auVar19._16_4_;
        fVar107 = auVar19._20_4_;
        fVar108 = auVar19._24_4_;
        fVar109 = auVar19._28_4_;
        fVar98 = (-(__real_3f000000 * auVar66._0_4_ * fVar98 * fVar98) + __real_3f000000) * fVar98 +
                 fVar98;
        fVar103 = (-(__real_3f000000 * auVar66._4_4_ * fVar103 * fVar103) + __real_3f000000) *
                  fVar103 + fVar103;
        fVar104 = (-(__real_3f000000 * auVar66._8_4_ * fVar104 * fVar104) + __real_3f000000) *
                  fVar104 + fVar104;
        fVar105 = (-(__real_3f000000 * auVar66._12_4_ * fVar105 * fVar105) + __real_3f000000) *
                  fVar105 + fVar105;
        fVar106 = (-(__real_3f000000 * auVar66._16_4_ * fVar106 * fVar106) + __real_3f000000) *
                  fVar106 + fVar106;
        fVar107 = (-(__real_3f000000 * auVar66._20_4_ * fVar107 * fVar107) + __real_3f000000) *
                  fVar107 + fVar107;
        fVar108 = (-(__real_3f000000 * auVar66._24_4_ * fVar108 * fVar108) + __real_3f000000) *
                  fVar108 + fVar108;
        fVar109 = (-(__real_3f000000 * auVar66._28_4_ * fVar109 * fVar109) + __real_3f000000) *
                  fVar109 + fVar109;
        fVar98 = (-(__real_3f000000 * auVar66._0_4_ * fVar98 * fVar98) + __real_3f000000) * fVar98 +
                 fVar98;
        fVar103 = (-(__real_3f000000 * auVar66._4_4_ * fVar103 * fVar103) + __real_3f000000) *
                  fVar103 + fVar103;
        fVar104 = (-(__real_3f000000 * auVar66._8_4_ * fVar104 * fVar104) + __real_3f000000) *
                  fVar104 + fVar104;
        fVar105 = (-(__real_3f000000 * auVar66._12_4_ * fVar105 * fVar105) + __real_3f000000) *
                  fVar105 + fVar105;
        fVar106 = (-(__real_3f000000 * auVar66._16_4_ * fVar106 * fVar106) + __real_3f000000) *
                  fVar106 + fVar106;
        fVar107 = (-(__real_3f000000 * auVar66._20_4_ * fVar107 * fVar107) + __real_3f000000) *
                  fVar107 + fVar107;
        fVar108 = (-(__real_3f000000 * auVar66._24_4_ * fVar108 * fVar108) + __real_3f000000) *
                  fVar108 + fVar108;
        fVar109 = (-(__real_3f000000 * auVar66._28_4_ * fVar109 * fVar109) + __real_3f000000) *
                  fVar109 + fVar109;
        uVar8 = auVar38._0_4_;
        auVar41._0_4_ = (uint)(fVar17 * fVar98) & uVar8;
        uVar80 = auVar38._4_4_;
        auVar41._4_4_ = (uint)(fVar25 * fVar103) & uVar80;
        uVar85 = auVar38._8_4_;
        auVar41._8_4_ = (uint)(fVar26 * fVar104) & uVar85;
        uVar86 = auVar38._12_4_;
        auVar41._12_4_ = (uint)(fVar27 * fVar105) & uVar86;
        uVar87 = auVar38._16_4_;
        auVar41._16_4_ = (uint)(fVar28 * fVar106) & uVar87;
        uVar88 = auVar38._20_4_;
        auVar41._20_4_ = (uint)(fVar29 * fVar107) & uVar88;
        uVar89 = auVar38._24_4_;
        auVar41._24_4_ = (uint)(fVar30 * fVar108) & uVar89;
        uVar90 = auVar38._28_4_;
        auVar41._28_4_ = (uint)(fVar31 * fVar109) & uVar90;
        auVar53._0_4_ = (uint)(fVar32 * fVar98) & uVar8;
        auVar53._4_4_ = (uint)(fVar42 * fVar103) & uVar80;
        auVar53._8_4_ = (uint)(fVar43 * fVar104) & uVar85;
        auVar53._12_4_ = (uint)(fVar44 * fVar105) & uVar86;
        auVar53._16_4_ = (uint)(fVar45 * fVar106) & uVar87;
        auVar53._20_4_ = (uint)(fVar46 * fVar107) & uVar88;
        auVar53._24_4_ = (uint)(fVar47 * fVar108) & uVar89;
        auVar53._28_4_ = (uint)(fVar48 * fVar109) & uVar90;
        auVar61._0_4_ = (uint)(fVar49 * fVar98) & uVar8;
        auVar61._4_4_ = (uint)(fVar54 * fVar103) & uVar80;
        auVar61._8_4_ = (uint)(fVar55 * fVar104) & uVar85;
        auVar61._12_4_ = (uint)(fVar56 * fVar105) & uVar86;
        auVar61._16_4_ = (uint)(fVar57 * fVar106) & uVar87;
        auVar61._20_4_ = (uint)(fVar58 * fVar107) & uVar88;
        auVar61._24_4_ = (uint)(fVar59 * fVar108) & uVar89;
        auVar61._28_4_ = (uint)(fVar60 * fVar109) & uVar90;
        auVar67._0_4_ = auVar35._0_4_ & (uint)__real_3f800000;
        auVar67._4_4_ = auVar35._4_4_ & (uint)__real_3f800000;
        auVar67._8_4_ = auVar35._8_4_ & (uint)__real_3f800000;
        auVar67._12_4_ = auVar35._12_4_ & (uint)__real_3f800000;
        auVar67._16_4_ = auVar35._16_4_ & (uint)__real_3f800000;
        auVar67._20_4_ = auVar35._20_4_ & (uint)__real_3f800000;
        auVar67._24_4_ = auVar35._24_4_ & (uint)__real_3f800000;
        auVar67._28_4_ = auVar35._28_4_ & (uint)__real_3f800000;
        auVar62._0_4_ = (uint)(fVar63 * fVar98) & uVar8;
        auVar62._4_4_ = (uint)(fVar68 * fVar103) & uVar80;
        auVar62._8_4_ = (uint)(fVar69 * fVar104) & uVar85;
        auVar62._12_4_ = (uint)(fVar70 * fVar105) & uVar86;
        auVar62._16_4_ = (uint)(fVar71 * fVar106) & uVar87;
        auVar62._20_4_ = (uint)(fVar72 * fVar107) & uVar88;
        auVar62._24_4_ = (uint)(fVar73 * fVar108) & uVar89;
        auVar62._28_4_ = (uint)(fVar74 * fVar109) & uVar90;
        _local_560 = vmaskmovps_avx(auVar110,auVar41);
        _local_540 = vmaskmovps_avx(auVar110,auVar53);
        _local_520 = vmaskmovps_avx(auVar110,auVar61);
        _local_500 = vmaskmovps_avx(auVar110,auVar62 | auVar67);
      }
    }
    auVar110 = vperm2i128_avx2(_local_520,_local_500,0x20);
    auVar35 = vperm2i128_avx2(_local_560,_local_540,0x20);
    auVar38 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                          auVar110);
    auVar19 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                          auVar35);
    local_200 = vpblendd_avx2(auVar19,auVar38,0xcc);
    auVar38 = vperm2i128_avx2(_local_520,_local_500,0x31);
    auVar110 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                           auVar110);
    auVar35 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                          auVar35);
    local_1e0 = vpblendd_avx2(auVar35,auVar110,0xcc);
    auVar110 = vperm2i128_avx2(_local_560,_local_540,0x31);
    auVar35 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                          auVar38);
    auVar19 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                          auVar110);
    local_1c0 = vpblendd_avx2(auVar19,auVar35,0xcc);
    auVar35 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                          auVar38);
    auVar110 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                           auVar110);
    local_1a0 = vpblendd_avx2(auVar110,auVar35,0xcc);
    uVar8 = vmovmskps_avx(auVar18);
    uVar9 = (ulonglong)uVar8;
    do {
      uVar8 = 0;
      for (uVar11 = uVar9; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x8000000000000000) {
        uVar8 = uVar8 + 1;
      }
      bVar5 = (byte)uVar8 & 0x3f;
      auVar110 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar8 << 4)));
      *(undefined1 (*) [32])
       (param_1 + (longlong)*(int *)(local_240 + (ulonglong)(uVar8 & 7) * 4) * 0x60) = auVar110;
      uVar9 = uVar9 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
    } while (uVar9 != 0);
  }
  return;
}

// GetConstantKeyLerpPoseTranslations_avx2 @ 140ae2150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseTranslations_avx2
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,float param_6,char param_7,uint param_8,uint param_9)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 auVar5 [32];
  int iVar42;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
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
  ulonglong uVar43;
  undefined4 uVar44;
  int iVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  int iVar49;
  ulonglong uVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined4 uVar55;
  int iVar56;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  int iVar84;
  int iVar85;
  int iVar86;
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 in_ZMM7 [64];
  undefined1 auVar105 [64];
  int iVar106;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  undefined1 auVar107 [32];
  int iVar117;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  uint uVar123;
  uint uVar132;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  uint uVar126;
  uint uVar127;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  undefined1 in_ZMM11 [64];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
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
  float fVar152;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  float fVar163;
  undefined1 local_540 [32];
  undefined1 local_500 [32];
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [160];
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [8];
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
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
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_d8 [16];
  undefined1 local_98 [16];
  
  uVar44 = __real_00000001;
  uVar55 = __real_00000018;
  iVar47 = __real_00000004;
  auVar74 = in_ZMM11._0_32_;
  local_98 = in_ZMM11._0_16_;
  local_d8 = in_ZMM7._0_16_;
  iVar54 = *(int *)(&DAT_151c6b740 + (longlong)(int)param_8 * 4) *
           *(int *)(&DAT_151c6b720 + (longlong)(int)param_8 * 4);
  uVar48 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar48 = param_9;
  }
  if ((int)(uVar48 & 0xfffffff8) < 1) {
    iVar45 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    iVar45 = -(uint)(param_8 == 3);
    auVar139._4_4_ = iVar45;
    auVar139._0_4_ = iVar45;
    auVar139._8_4_ = iVar45;
    auVar139._12_4_ = iVar45;
    auVar139._16_4_ = iVar45;
    auVar139._20_4_ = iVar45;
    auVar139._24_4_ = iVar45;
    auVar139._28_4_ = iVar45;
    auVar145._4_4_ = iVar54;
    auVar145._0_4_ = iVar54;
    auVar145._8_4_ = iVar54;
    auVar145._12_4_ = iVar54;
    auVar145._16_4_ = iVar54;
    auVar145._20_4_ = iVar54;
    auVar145._24_4_ = iVar54;
    auVar145._28_4_ = iVar54;
    iVar45 = 0;
    auVar100._4_4_ = __real_00000004;
    auVar100._0_4_ = __real_00000004;
    auVar100._8_4_ = __real_00000004;
    auVar100._12_4_ = __real_00000004;
    auVar100._16_4_ = __real_00000004;
    auVar100._20_4_ = __real_00000004;
    auVar100._24_4_ = __real_00000004;
    auVar100._28_4_ = __real_00000004;
    auVar74 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
    auVar105 = ZEXT3264(auVar74);
    do {
      auVar74 = ___ymm_0000000700000003000000000000000000000006000000020000000000000000;
      auVar66 = in_ZMM5._0_32_;
      auVar70._4_4_ = iVar45;
      auVar70._0_4_ = iVar45;
      auVar70._8_4_ = iVar45;
      auVar70._12_4_ = iVar45;
      auVar70._16_4_ = iVar45;
      auVar70._20_4_ = iVar45;
      auVar70._24_4_ = iVar45;
      auVar70._28_4_ = iVar45;
      auVar57 = vpslld_avx2(auVar70,3);
      auVar102 = vpor_avx2(auVar57,
                           ___ymm_0000003800000030000000280000002000000018000000100000000800000000);
      auVar57 = vpor_avx2(auVar57,
                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004);
      vpmovzxdq_avx2(auVar57._16_16_);
      auVar57 = vpmovzxdq_avx2(auVar57._0_16_);
      auVar63 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      auVar64 = vpgatherqd((undefined1  [16])0x0,auVar63);
      auVar63 = vpcmpeqd_avx(auVar57._0_16_,auVar57._0_16_);
      auVar63 = vpgatherqd((undefined1  [16])0x0,auVar63);
      auVar70 = vpmovzxdq_avx2(auVar102._16_16_);
      auVar107._16_16_ = ZEXT116(1) * auVar63;
      auVar107._0_16_ = ZEXT116(0) * auVar63 | ZEXT116(1) * auVar64;
      auVar57 = vpslld_avx2(auVar107,4);
      auVar57 = vpor_avx2(auVar100,auVar57);
      auVar64 = auVar57._0_16_;
      auVar57 = vpcmpeqd_avx2(ZEXT1632(auVar63),ZEXT1632(auVar63));
      auVar107 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
      vpmovzxdq_avx2(auVar102._0_16_);
      auVar57._4_4_ = uVar44;
      auVar57._0_4_ = uVar44;
      auVar57._8_4_ = uVar44;
      auVar57._12_4_ = uVar44;
      auVar57._16_4_ = uVar44;
      auVar57._20_4_ = uVar44;
      auVar57._24_4_ = uVar44;
      auVar57._28_4_ = uVar44;
      auVar57 = vpcmpgtd_avx2(auVar107,auVar57);
      uVar46 = vmovmskps_avx(auVar57);
      if ((uVar46 ^ 0xff) == 0) {
        auVar102 = SUB6432(ZEXT1664((undefined1  [16])0x0),0) ^ auVar105._0_32_;
        if (0.0 < param_6) goto LAB_140ae237f;
LAB_140ae2407:
        auVar80 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar107 = vblendvps_avx(auVar66,auVar80,auVar102);
        in_ZMM5 = ZEXT3264(auVar107);
        local_540 = vblendvps_avx(local_540,auVar80,auVar102);
LAB_140ae2435:
        auVar64 = auVar80._0_16_;
        auVar80 = vblendvps_avx(_local_3c0,auVar80,auVar102);
      }
      else {
        uVar123 = auVar57._0_4_;
        auVar66._0_4_ = uVar123 & in_ZMM5._0_4_;
        uVar126 = auVar57._4_4_;
        auVar66._4_4_ = uVar126 & in_ZMM5._4_4_;
        uVar127 = auVar57._8_4_;
        auVar66._8_4_ = uVar127 & in_ZMM5._8_4_;
        uVar128 = auVar57._12_4_;
        auVar66._12_4_ = uVar128 & in_ZMM5._12_4_;
        uVar129 = auVar57._16_4_;
        auVar66._16_4_ = uVar129 & in_ZMM5._16_4_;
        uVar130 = auVar57._20_4_;
        auVar66._20_4_ = uVar130 & in_ZMM5._20_4_;
        uVar131 = auVar57._24_4_;
        auVar66._24_4_ = uVar131 & in_ZMM5._24_4_;
        uVar132 = auVar57._28_4_;
        auVar66._28_4_ = uVar132 & in_ZMM5._28_4_;
        in_ZMM5 = ZEXT3264(auVar66);
        local_540._0_4_ = uVar123 & local_540._0_4_;
        local_540._4_4_ = uVar126 & local_540._4_4_;
        local_540._8_4_ = uVar127 & local_540._8_4_;
        local_540._12_4_ = uVar128 & local_540._12_4_;
        local_540._16_4_ = uVar129 & local_540._16_4_;
        local_540._20_4_ = uVar130 & local_540._20_4_;
        local_540._24_4_ = uVar131 & local_540._24_4_;
        local_540._28_4_ = uVar132 & local_540._28_4_;
        auVar80._0_4_ = uVar123 & local_3c0._0_4_;
        auVar80._4_4_ = uVar126 & local_3c0._4_4_;
        auVar80._8_4_ = uVar127 & local_3c0._8_4_;
        auVar80._12_4_ = uVar128 & local_3c0._12_4_;
        auVar80._16_4_ = uVar129 & local_3c0._16_4_;
        auVar80._20_4_ = uVar130 & local_3c0._20_4_;
        auVar80._24_4_ = uVar131 & local_3c0._24_4_;
        auVar80._28_4_ = uVar132 & local_3c0._28_4_;
        if ((char)(uVar46 ^ 0xff) != -1) {
          auVar102._4_4_ = __real_00000002;
          auVar102._0_4_ = __real_00000002;
          auVar102._8_4_ = __real_00000002;
          auVar102._12_4_ = __real_00000002;
          auVar102._16_4_ = __real_00000002;
          auVar102._20_4_ = __real_00000002;
          auVar102._24_4_ = __real_00000002;
          auVar102._28_4_ = __real_00000002;
          auVar102 = vpcmpgtd_avx2(auVar102,auVar107);
          auVar102 = auVar102 ^ auVar105._0_32_;
          _local_3c0 = auVar80;
          if (param_6 <= 0.0) goto LAB_140ae2407;
LAB_140ae237f:
          auVar88._0_4_ = auVar107._0_4_ + auVar105._0_4_;
          auVar88._4_4_ = auVar107._4_4_ + auVar105._4_4_;
          auVar88._8_4_ = auVar107._8_4_ + auVar105._8_4_;
          auVar88._12_4_ = auVar107._12_4_ + auVar105._12_4_;
          auVar88._16_4_ = auVar107._16_4_ + auVar105._16_4_;
          auVar88._20_4_ = auVar107._20_4_ + auVar105._20_4_;
          auVar88._24_4_ = auVar107._24_4_ + auVar105._24_4_;
          auVar88._28_4_ = auVar107._28_4_ + auVar105._28_4_;
          if (__real_3f800000 <= param_6) {
            auVar107 = vblendvps_avx(auVar66,auVar88,auVar102);
            in_ZMM5 = ZEXT3264(auVar107);
            local_540 = vblendvps_avx(local_540,auVar88,auVar102);
            auVar80 = ZEXT832(0) << 0x20;
          }
          else {
            auVar107 = vcvtdq2ps_avx(auVar88);
            auVar99._0_4_ = auVar107._0_4_ * param_6;
            auVar99._4_4_ = auVar107._4_4_ * param_6;
            auVar99._8_4_ = auVar107._8_4_ * param_6;
            auVar99._12_4_ = auVar107._12_4_ * param_6;
            auVar99._16_4_ = auVar107._16_4_ * param_6;
            auVar99._20_4_ = auVar107._20_4_ * param_6;
            auVar99._24_4_ = auVar107._24_4_ * param_6;
            auVar99._28_4_ = auVar107._28_4_ * param_6;
            auVar107 = vroundps_avx(auVar99,9);
            auVar80 = ZEXT832(0) << 0x20;
            if (param_7 != '\x01') {
              auVar80 = vsubps_avx(auVar99,auVar107);
            }
            auVar118._0_4_ = (int)auVar107._0_4_;
            auVar118._4_4_ = (int)auVar107._4_4_;
            auVar118._8_4_ = (int)auVar107._8_4_;
            auVar118._12_4_ = (int)auVar107._12_4_;
            auVar118._16_4_ = (int)auVar107._16_4_;
            auVar118._20_4_ = (int)auVar107._20_4_;
            auVar118._24_4_ = (int)auVar107._24_4_;
            auVar118._28_4_ = (int)auVar107._28_4_;
            auVar99 = vpminsd_avx2(auVar118,auVar88);
            auVar107 = vblendvps_avx(auVar66,auVar99,auVar102);
            in_ZMM5 = ZEXT3264(auVar107);
            auVar66 = vpcmpeqd_avx2(auVar99,auVar99);
            auVar107 = vpsubd_avx2(auVar107,auVar66);
            auVar66 = vpminsd_avx2(auVar107,auVar88);
            auVar107 = vpcmpeqd_avx2(auVar107,auVar107);
            auVar105 = ZEXT3264(auVar107);
            local_540 = vblendvps_avx(local_540,auVar66,auVar102);
          }
          goto LAB_140ae2435;
        }
      }
      auVar63 = vpcmpeqd_avx(auVar64,auVar64);
      auVar64 = vpgatherqd((undefined1  [16])0x0,auVar63);
      auVar63 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
      auVar63 = vpgatherqd((undefined1  [16])0x0,auVar63);
      auVar70 = vpcmpeqd_avx2(auVar70,auVar70);
      auVar107 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
      auVar57 = vpand_avx2(auVar57,auVar139);
      auVar125._4_4_ = uVar55;
      auVar125._0_4_ = uVar55;
      auVar125._8_4_ = uVar55;
      auVar125._12_4_ = uVar55;
      auVar125._16_4_ = uVar55;
      auVar125._20_4_ = uVar55;
      auVar125._24_4_ = uVar55;
      auVar125._28_4_ = uVar55;
      auVar70 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar57 = vblendvps_avx(auVar70,auVar125,auVar57);
      auVar102 = in_ZMM5._0_32_;
      iVar49 = auVar57._0_4_;
      iVar51 = auVar57._4_4_;
      iVar52 = auVar57._8_4_;
      iVar53 = auVar57._12_4_;
      iVar56 = auVar57._16_4_;
      iVar84 = auVar57._20_4_;
      iVar85 = auVar57._24_4_;
      iVar86 = auVar57._28_4_;
      iVar106 = auVar107._0_4_;
      iVar111 = auVar107._4_4_;
      iVar112 = auVar107._8_4_;
      iVar113 = auVar107._12_4_;
      iVar114 = auVar107._16_4_;
      iVar115 = auVar107._20_4_;
      iVar116 = auVar107._24_4_;
      iVar117 = auVar107._28_4_;
      if (param_8 < 7) {
        auVar57 = vpmulld_avx2(auVar102,auVar145);
        switch(param_8) {
        case 0:
        case 1:
          auVar5._0_4_ = iVar106 + iVar49;
          auVar5._4_4_ = iVar111 + iVar51;
          auVar5._8_4_ = iVar112 + iVar52;
          auVar5._12_4_ = iVar113 + iVar53;
          auVar5._16_4_ = iVar114 + iVar56;
          auVar5._20_4_ = iVar115 + iVar84;
          auVar5._24_4_ = iVar116 + iVar85;
          auVar5._28_4_ = iVar117 + iVar86;
          auVar57 = vpcmpeqd_avx2(auVar5,auVar5);
          auVar153 = vgatherdps(ZEXT832(0),auVar57);
          auVar57 = vpcmpeqd_avx2(auVar105._0_32_,auVar105._0_32_);
          auVar58 = vgatherdps(ZEXT832(0),auVar57);
          auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar87._4_4_ = __real_00000008;
          auVar87._0_4_ = __real_00000008;
          auVar87._8_4_ = __real_00000008;
          auVar87._12_4_ = __real_00000008;
          auVar87._16_4_ = __real_00000008;
          auVar87._20_4_ = __real_00000008;
          auVar87._24_4_ = __real_00000008;
          auVar87._28_4_ = __real_00000008;
          auVar70 = vpcmpeqd_avx2(auVar87,auVar87);
          auVar124 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
          break;
        case 2:
          iVar4 = auVar57._0_4_ + iVar106 + iVar49;
          iVar36 = auVar57._4_4_ + iVar111 + iVar51;
          iVar37 = auVar57._8_4_ + iVar112 + iVar52;
          iVar38 = auVar57._12_4_ + iVar113 + iVar53;
          iVar39 = auVar57._16_4_ + iVar114 + iVar56;
          iVar40 = auVar57._20_4_ + iVar115 + iVar84;
          iVar41 = auVar57._24_4_ + iVar116 + iVar85;
          iVar42 = auVar57._28_4_ + iVar117 + iVar86;
          auVar65 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + iVar4)),
                                (uint)*(ushort *)(param_4 + iVar36),1);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar37),2);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar38),3);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar39),4);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar40),5);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar41),6);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar42),7);
          auVar2 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + (iVar4 + __real_00000002))),
                               (uint)*(ushort *)(param_4 + (iVar36 + __real_00000002)),1);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar37 + __real_00000002)),2);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar38 + __real_00000002)),3);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar39 + __real_00000002)),4);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar40 + __real_00000002)),5);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar41 + __real_00000002)),6);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + (iVar42 + __real_00000002)),7);
          auVar3 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + (iVar4 + iVar47))),
                               (uint)*(ushort *)(param_4 + (iVar36 + iVar47)),1);
          auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar37 + iVar47)),2);
          auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar38 + iVar47)),3);
          auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar39 + iVar47)),4);
          auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar40 + iVar47)),5);
          auVar57 = vpmovzxwd_avx2(auVar65);
          auVar133._0_4_ = auVar57._0_4_ + __real_ffff8001;
          auVar133._4_4_ = auVar57._4_4_ + __real_ffff8001;
          auVar133._8_4_ = auVar57._8_4_ + __real_ffff8001;
          auVar133._12_4_ = auVar57._12_4_ + __real_ffff8001;
          auVar133._16_4_ = auVar57._16_4_ + __real_ffff8001;
          auVar133._20_4_ = auVar57._20_4_ + __real_ffff8001;
          auVar133._24_4_ = auVar57._24_4_ + __real_ffff8001;
          auVar133._28_4_ = auVar57._28_4_ + __real_ffff8001;
          auVar57 = vcvtdq2ps_avx(auVar133);
          auVar98._4_4_ = __real_46fffe00;
          auVar98._0_4_ = __real_46fffe00;
          auVar98._8_4_ = __real_46fffe00;
          auVar98._12_4_ = __real_46fffe00;
          auVar98._16_4_ = __real_46fffe00;
          auVar98._20_4_ = __real_46fffe00;
          auVar98._24_4_ = __real_46fffe00;
          auVar98._28_4_ = __real_46fffe00;
          auVar70 = vdivps_avx(auVar57,auVar98);
          auVar65 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + (iVar41 + iVar47)),6);
          auVar57 = vpmovzxwd_avx2(auVar2);
          auVar6._0_4_ = auVar57._0_4_ + __real_ffff8001;
          auVar6._4_4_ = auVar57._4_4_ + __real_ffff8001;
          auVar6._8_4_ = auVar57._8_4_ + __real_ffff8001;
          auVar6._12_4_ = auVar57._12_4_ + __real_ffff8001;
          auVar6._16_4_ = auVar57._16_4_ + __real_ffff8001;
          auVar6._20_4_ = auVar57._20_4_ + __real_ffff8001;
          auVar6._24_4_ = auVar57._24_4_ + __real_ffff8001;
          auVar6._28_4_ = auVar57._28_4_ + __real_ffff8001;
          auVar57 = vcvtdq2ps_avx(auVar6);
          auVar107 = vdivps_avx(auVar57,auVar98);
          auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + (iVar42 + iVar47)),7);
          auVar57 = vpmovzxwd_avx2(auVar65);
          auVar7._0_4_ = auVar57._0_4_ + __real_ffff8001;
          auVar7._4_4_ = auVar57._4_4_ + __real_ffff8001;
          auVar7._8_4_ = auVar57._8_4_ + __real_ffff8001;
          auVar7._12_4_ = auVar57._12_4_ + __real_ffff8001;
          auVar7._16_4_ = auVar57._16_4_ + __real_ffff8001;
          auVar7._20_4_ = auVar57._20_4_ + __real_ffff8001;
          auVar7._24_4_ = auVar57._24_4_ + __real_ffff8001;
          auVar7._28_4_ = auVar57._28_4_ + __real_ffff8001;
          auVar57 = vcvtdq2ps_avx(auVar7);
          auVar66 = vdivps_avx(auVar57,auVar98);
          auVar57 = vpcmpeqd_avx2(auVar98,auVar98);
          auVar153._0_4_ = auVar70._0_4_ * __real_43000000;
          auVar153._4_4_ = auVar70._4_4_ * __real_43000000;
          auVar153._8_4_ = auVar70._8_4_ * __real_43000000;
          auVar153._12_4_ = auVar70._12_4_ * __real_43000000;
          auVar153._16_4_ = auVar70._16_4_ * __real_43000000;
          auVar153._20_4_ = auVar70._20_4_ * __real_43000000;
          auVar153._24_4_ = auVar70._24_4_ * __real_43000000;
          auVar153._28_4_ = auVar70._28_4_ * __real_43000000;
          auVar58._0_4_ = auVar107._0_4_ * __real_43000000;
          auVar58._4_4_ = auVar107._4_4_ * __real_43000000;
          auVar58._8_4_ = auVar107._8_4_ * __real_43000000;
          auVar58._12_4_ = auVar107._12_4_ * __real_43000000;
          auVar58._16_4_ = auVar107._16_4_ * __real_43000000;
          auVar58._20_4_ = auVar107._20_4_ * __real_43000000;
          auVar58._24_4_ = auVar107._24_4_ * __real_43000000;
          auVar58._28_4_ = auVar107._28_4_ * __real_43000000;
          auVar124._0_4_ = auVar66._0_4_ * __real_43000000;
          auVar124._4_4_ = auVar66._4_4_ * __real_43000000;
          auVar124._8_4_ = auVar66._8_4_ * __real_43000000;
          auVar124._12_4_ = auVar66._12_4_ * __real_43000000;
          auVar124._16_4_ = auVar66._16_4_ * __real_43000000;
          auVar124._20_4_ = auVar66._20_4_ * __real_43000000;
          auVar124._24_4_ = auVar66._24_4_ * __real_43000000;
          auVar124._28_4_ = auVar66._28_4_ * __real_43000000;
          break;
        case 3:
          auVar57 = vpcmpeqd_avx2(auVar70,auVar70);
          auVar107 = vgatherdps(ZEXT832(0) << 0x20,auVar57);
          auVar57 = vpcmpeqd_avx2(local_540,local_540);
          auVar118 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar57);
          auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar133 = vgatherdps(ZEXT432(0) << 0x20,auVar57);
          auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar99 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
          auVar57 = vpcmpeqd_avx2(auVar139,auVar139);
          auVar88 = vgatherdps(ZEXT832(0),auVar57);
          auVar57 = vpcmpeqd_avx2(auVar145,auVar145);
          auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
          auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar57 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar57);
          auVar125 = vpsrld_avx2(auVar57,0x15);
          auVar70 = vpsrld_avx2(auVar57,10);
          auVar154._4_4_ = __real_000007ff;
          auVar154._0_4_ = __real_000007ff;
          auVar154._8_4_ = __real_000007ff;
          auVar154._12_4_ = __real_000007ff;
          auVar154._16_4_ = __real_000007ff;
          auVar154._20_4_ = __real_000007ff;
          auVar154._24_4_ = __real_000007ff;
          auVar154._28_4_ = __real_000007ff;
          auVar70 = vpand_avx2(auVar70,auVar154);
          auVar155._4_4_ = __real_000003ff;
          auVar155._0_4_ = __real_000003ff;
          auVar155._8_4_ = __real_000003ff;
          auVar155._12_4_ = __real_000003ff;
          auVar155._16_4_ = __real_000003ff;
          auVar155._20_4_ = __real_000003ff;
          auVar155._24_4_ = __real_000003ff;
          auVar155._28_4_ = __real_000003ff;
          auVar57 = vpand_avx2(auVar57,auVar155);
          auVar119._0_4_ = auVar57._0_4_ + __real_fffffe01;
          auVar119._4_4_ = auVar57._4_4_ + __real_fffffe01;
          auVar119._8_4_ = auVar57._8_4_ + __real_fffffe01;
          auVar119._12_4_ = auVar57._12_4_ + __real_fffffe01;
          auVar119._16_4_ = auVar57._16_4_ + __real_fffffe01;
          auVar119._20_4_ = auVar57._20_4_ + __real_fffffe01;
          auVar119._24_4_ = auVar57._24_4_ + __real_fffffe01;
          auVar119._28_4_ = auVar57._28_4_ + __real_fffffe01;
          auVar57 = vcvtdq2ps_avx(auVar119);
          auVar156._4_4_ = __real_43ff8000;
          auVar156._0_4_ = __real_43ff8000;
          auVar156._8_4_ = __real_43ff8000;
          auVar156._12_4_ = __real_43ff8000;
          auVar156._16_4_ = __real_43ff8000;
          auVar156._20_4_ = __real_43ff8000;
          auVar156._24_4_ = __real_43ff8000;
          auVar156._28_4_ = __real_43ff8000;
          auVar57 = vdivps_avx(auVar57,auVar156);
          auVar153._0_4_ = auVar99._0_4_ * auVar57._0_4_ + auVar107._0_4_;
          auVar153._4_4_ = auVar99._4_4_ * auVar57._4_4_ + auVar107._4_4_;
          auVar153._8_4_ = auVar99._8_4_ * auVar57._8_4_ + auVar107._8_4_;
          auVar153._12_4_ = auVar99._12_4_ * auVar57._12_4_ + auVar107._12_4_;
          auVar153._16_4_ = auVar99._16_4_ * auVar57._16_4_ + auVar107._16_4_;
          auVar153._20_4_ = auVar99._20_4_ * auVar57._20_4_ + auVar107._20_4_;
          auVar153._24_4_ = auVar99._24_4_ * auVar57._24_4_ + auVar107._24_4_;
          auVar153._28_4_ = auVar99._28_4_ * auVar57._28_4_ + auVar107._28_4_;
          auVar141._0_4_ = auVar70._0_4_ + __real_fffffc01;
          auVar141._4_4_ = auVar70._4_4_ + __real_fffffc01;
          auVar141._8_4_ = auVar70._8_4_ + __real_fffffc01;
          auVar141._12_4_ = auVar70._12_4_ + __real_fffffc01;
          auVar141._16_4_ = auVar70._16_4_ + __real_fffffc01;
          auVar141._20_4_ = auVar70._20_4_ + __real_fffffc01;
          auVar141._24_4_ = auVar70._24_4_ + __real_fffffc01;
          auVar141._28_4_ = auVar70._28_4_ + __real_fffffc01;
          auVar57 = vcvtdq2ps_avx(auVar141);
          auVar140._4_4_ = __real_447fc000;
          auVar140._0_4_ = __real_447fc000;
          auVar140._8_4_ = __real_447fc000;
          auVar140._12_4_ = __real_447fc000;
          auVar140._16_4_ = __real_447fc000;
          auVar140._20_4_ = __real_447fc000;
          auVar140._24_4_ = __real_447fc000;
          auVar140._28_4_ = __real_447fc000;
          auVar70 = vdivps_avx(auVar57,auVar140);
          auVar8._0_4_ = auVar125._0_4_ + __real_fffffc01;
          auVar8._4_4_ = auVar125._4_4_ + __real_fffffc01;
          auVar8._8_4_ = auVar125._8_4_ + __real_fffffc01;
          auVar8._12_4_ = auVar125._12_4_ + __real_fffffc01;
          auVar8._16_4_ = auVar125._16_4_ + __real_fffffc01;
          auVar8._20_4_ = auVar125._20_4_ + __real_fffffc01;
          auVar8._24_4_ = auVar125._24_4_ + __real_fffffc01;
          auVar8._28_4_ = auVar125._28_4_ + __real_fffffc01;
          auVar57 = vcvtdq2ps_avx(auVar8);
          auVar107 = vdivps_avx(auVar57,auVar140);
          auVar57 = vpcmpeqd_avx2(auVar57,auVar57);
          auVar58._0_4_ = auVar88._0_4_ * auVar70._0_4_ + auVar118._0_4_;
          auVar58._4_4_ = auVar88._4_4_ * auVar70._4_4_ + auVar118._4_4_;
          auVar58._8_4_ = auVar88._8_4_ * auVar70._8_4_ + auVar118._8_4_;
          auVar58._12_4_ = auVar88._12_4_ * auVar70._12_4_ + auVar118._12_4_;
          auVar58._16_4_ = auVar88._16_4_ * auVar70._16_4_ + auVar118._16_4_;
          auVar58._20_4_ = auVar88._20_4_ * auVar70._20_4_ + auVar118._20_4_;
          auVar58._24_4_ = auVar88._24_4_ * auVar70._24_4_ + auVar118._24_4_;
          auVar58._28_4_ = auVar88._28_4_ * auVar70._28_4_ + auVar118._28_4_;
          auVar124._0_4_ = auVar66._0_4_ * auVar107._0_4_ + auVar133._0_4_;
          auVar124._4_4_ = auVar66._4_4_ * auVar107._4_4_ + auVar133._4_4_;
          auVar124._8_4_ = auVar66._8_4_ * auVar107._8_4_ + auVar133._8_4_;
          auVar124._12_4_ = auVar66._12_4_ * auVar107._12_4_ + auVar133._12_4_;
          auVar124._16_4_ = auVar66._16_4_ * auVar107._16_4_ + auVar133._16_4_;
          auVar124._20_4_ = auVar66._20_4_ * auVar107._20_4_ + auVar133._20_4_;
          auVar124._24_4_ = auVar66._24_4_ * auVar107._24_4_ + auVar133._24_4_;
          auVar124._28_4_ = auVar66._28_4_ * auVar107._28_4_ + auVar133._28_4_;
          break;
        default:
          goto switchD_140ae24a2_caseD_4;
        }
        auVar105 = ZEXT3264(auVar57);
        auVar107 = auVar124;
        auVar70 = auVar58;
        auVar66 = auVar153;
        auVar88 = auVar58;
        auVar57 = auVar153;
      }
      else {
switchD_140ae24a2_caseD_4:
        auVar58 = ZEXT832(0) << 0x20;
        auVar153 = ZEXT832(0) << 0x20;
        auVar124 = auVar58;
        auVar107 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar70 = ZEXT832(0) << 0x20;
        auVar66 = ZEXT832(0);
        auVar88 = ZEXT832(0) << 0x20;
        auVar57 = SUB6432(ZEXT864(0),0);
      }
      if (auVar102 != local_540) {
        auVar57 = vpcmpeqd_avx2(auVar102,local_540);
        auVar102 = auVar57 ^ auVar105._0_32_;
        if (param_8 < 7) {
          auVar70 = vpmulld_avx2(local_540,auVar145);
          switch(param_8) {
          case 0:
          case 1:
            auVar57 = vgatherdps(ZEXT832(0) << 0x20,auVar102);
            auVar99 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar70 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            local_380 = vmaskmovps_avx(auVar102,auVar57);
            local_360 = vmaskmovps_avx(auVar102,auVar99);
            auVar57 = vpcmpeqd_avx2(auVar99,auVar99);
            auVar105 = ZEXT3264(auVar57);
            local_340 = vmaskmovps_avx(auVar102,auVar70);
            break;
          case 2:
            auVar9._0_4_ = iVar106 + auVar70._0_4_ + iVar49;
            auVar9._4_4_ = iVar111 + auVar70._4_4_ + iVar51;
            auVar9._8_4_ = iVar112 + auVar70._8_4_ + iVar52;
            auVar9._12_4_ = iVar113 + auVar70._12_4_ + iVar53;
            auVar9._16_4_ = iVar114 + auVar70._16_4_ + iVar56;
            auVar9._20_4_ = iVar115 + auVar70._20_4_ + iVar84;
            auVar9._24_4_ = iVar116 + auVar70._24_4_ + iVar85;
            auVar9._28_4_ = iVar117 + auVar70._28_4_ + iVar86;
            auVar70 = vpandn_avx2(auVar57,auVar9);
            auVar65 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar70._0_4_)),
                                  (uint)*(ushort *)(param_4 + auVar70._4_4_),1);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._8_4_),2);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._12_4_),3);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._16_4_),4);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._20_4_),5);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._24_4_),6);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar70._28_4_),7);
            auVar10._0_4_ = auVar9._0_4_ + __real_00000002;
            auVar10._4_4_ = auVar9._4_4_ + __real_00000002;
            auVar10._8_4_ = auVar9._8_4_ + __real_00000002;
            auVar10._12_4_ = auVar9._12_4_ + __real_00000002;
            auVar10._16_4_ = auVar9._16_4_ + __real_00000002;
            auVar10._20_4_ = auVar9._20_4_ + __real_00000002;
            auVar10._24_4_ = auVar9._24_4_ + __real_00000002;
            auVar10._28_4_ = auVar9._28_4_ + __real_00000002;
            auVar70 = vpandn_avx2(auVar57,auVar10);
            auVar2 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar70._0_4_)),
                                 (uint)*(ushort *)(param_4 + auVar70._4_4_),1);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._8_4_),2);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._12_4_),3);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._16_4_),4);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._20_4_),5);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._24_4_),6);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_4 + auVar70._28_4_),7);
            auVar11._0_4_ = auVar9._0_4_ + iVar47;
            auVar11._4_4_ = auVar9._4_4_ + iVar47;
            auVar11._8_4_ = auVar9._8_4_ + iVar47;
            auVar11._12_4_ = auVar9._12_4_ + iVar47;
            auVar11._16_4_ = auVar9._16_4_ + iVar47;
            auVar11._20_4_ = auVar9._20_4_ + iVar47;
            auVar11._24_4_ = auVar9._24_4_ + iVar47;
            auVar11._28_4_ = auVar9._28_4_ + iVar47;
            auVar66 = vpandn_avx2(auVar57,auVar11);
            auVar3 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar66._0_4_)),
                                 (uint)*(ushort *)(param_4 + auVar66._4_4_),1);
            auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._8_4_),2);
            auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._12_4_),3);
            auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._16_4_),4);
            auVar3 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._20_4_),5);
            auVar57 = vpmovzxwd_avx2(auVar65);
            auVar12._0_4_ = auVar57._0_4_ + __real_ffff8001;
            auVar12._4_4_ = auVar57._4_4_ + __real_ffff8001;
            auVar12._8_4_ = auVar57._8_4_ + __real_ffff8001;
            auVar12._12_4_ = auVar57._12_4_ + __real_ffff8001;
            auVar12._16_4_ = auVar57._16_4_ + __real_ffff8001;
            auVar12._20_4_ = auVar57._20_4_ + __real_ffff8001;
            auVar12._24_4_ = auVar57._24_4_ + __real_ffff8001;
            auVar12._28_4_ = auVar57._28_4_ + __real_ffff8001;
            auVar57 = vcvtdq2ps_avx(auVar12);
            auVar89._4_4_ = __real_46fffe00;
            auVar89._0_4_ = __real_46fffe00;
            auVar89._8_4_ = __real_46fffe00;
            auVar89._12_4_ = __real_46fffe00;
            auVar89._16_4_ = __real_46fffe00;
            auVar89._20_4_ = __real_46fffe00;
            auVar89._24_4_ = __real_46fffe00;
            auVar89._28_4_ = __real_46fffe00;
            auVar70 = vdivps_avx(auVar57,auVar89);
            auVar65 = vpinsrw_avx(auVar3,(uint)*(ushort *)(param_4 + auVar66._24_4_),6);
            auVar57 = vpmovzxwd_avx2(auVar2);
            auVar13._0_4_ = auVar57._0_4_ + __real_ffff8001;
            auVar13._4_4_ = auVar57._4_4_ + __real_ffff8001;
            auVar13._8_4_ = auVar57._8_4_ + __real_ffff8001;
            auVar13._12_4_ = auVar57._12_4_ + __real_ffff8001;
            auVar13._16_4_ = auVar57._16_4_ + __real_ffff8001;
            auVar13._20_4_ = auVar57._20_4_ + __real_ffff8001;
            auVar13._24_4_ = auVar57._24_4_ + __real_ffff8001;
            auVar13._28_4_ = auVar57._28_4_ + __real_ffff8001;
            auVar57 = vcvtdq2ps_avx(auVar13);
            auVar107 = vdivps_avx(auVar57,auVar89);
            auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar66._28_4_),7);
            auVar57 = vpmovzxwd_avx2(auVar65);
            auVar14._0_4_ = auVar57._0_4_ + __real_ffff8001;
            auVar14._4_4_ = auVar57._4_4_ + __real_ffff8001;
            auVar14._8_4_ = auVar57._8_4_ + __real_ffff8001;
            auVar14._12_4_ = auVar57._12_4_ + __real_ffff8001;
            auVar14._16_4_ = auVar57._16_4_ + __real_ffff8001;
            auVar14._20_4_ = auVar57._20_4_ + __real_ffff8001;
            auVar14._24_4_ = auVar57._24_4_ + __real_ffff8001;
            auVar14._28_4_ = auVar57._28_4_ + __real_ffff8001;
            auVar57 = vcvtdq2ps_avx(auVar14);
            auVar57 = vdivps_avx(auVar57,auVar89);
            auVar59._0_4_ = auVar70._0_4_ * __real_43000000;
            auVar59._4_4_ = auVar70._4_4_ * __real_43000000;
            auVar59._8_4_ = auVar70._8_4_ * __real_43000000;
            auVar59._12_4_ = auVar70._12_4_ * __real_43000000;
            auVar59._16_4_ = auVar70._16_4_ * __real_43000000;
            auVar59._20_4_ = auVar70._20_4_ * __real_43000000;
            auVar59._24_4_ = auVar70._24_4_ * __real_43000000;
            auVar59._28_4_ = auVar70._28_4_ * __real_43000000;
            auVar90._0_4_ = auVar107._0_4_ * __real_43000000;
            auVar90._4_4_ = auVar107._4_4_ * __real_43000000;
            auVar90._8_4_ = auVar107._8_4_ * __real_43000000;
            auVar90._12_4_ = auVar107._12_4_ * __real_43000000;
            auVar90._16_4_ = auVar107._16_4_ * __real_43000000;
            auVar90._20_4_ = auVar107._20_4_ * __real_43000000;
            auVar90._24_4_ = auVar107._24_4_ * __real_43000000;
            auVar90._28_4_ = auVar107._28_4_ * __real_43000000;
            auVar70 = vpcmpeqd_avx2(auVar107,auVar107);
            auVar105 = ZEXT3264(auVar70);
            auVar68._0_4_ = auVar57._0_4_ * __real_43000000;
            auVar68._4_4_ = auVar57._4_4_ * __real_43000000;
            auVar68._8_4_ = auVar57._8_4_ * __real_43000000;
            auVar68._12_4_ = auVar57._12_4_ * __real_43000000;
            auVar68._16_4_ = auVar57._16_4_ * __real_43000000;
            auVar68._20_4_ = auVar57._20_4_ * __real_43000000;
            auVar68._24_4_ = auVar57._24_4_ * __real_43000000;
            auVar68._28_4_ = auVar57._28_4_ * __real_43000000;
            local_380 = vmaskmovps_avx(auVar102,auVar59);
            local_360 = vmaskmovps_avx(auVar102,auVar90);
            local_340 = vmaskmovps_avx(auVar102,auVar68);
            auVar66 = auVar153;
            auVar88 = auVar58;
            auVar107 = auVar124;
            break;
          case 3:
            auVar125 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar153 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar119 = vgatherdps(ZEXT832(0) << 0x20,auVar102);
            auVar58 = vgatherdps(ZEXT832(0),auVar102);
            auVar99 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar141 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar57 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar102);
            auVar118 = vpsrld_avx2(auVar57,0x15);
            auVar124 = vpsrld_avx2(auVar57,10);
            auVar134._4_4_ = __real_000007ff;
            auVar134._0_4_ = __real_000007ff;
            auVar134._8_4_ = __real_000007ff;
            auVar134._12_4_ = __real_000007ff;
            auVar134._16_4_ = __real_000007ff;
            auVar134._20_4_ = __real_000007ff;
            auVar134._24_4_ = __real_000007ff;
            auVar134._28_4_ = __real_000007ff;
            auVar146._4_4_ = __real_000003ff;
            auVar146._0_4_ = __real_000003ff;
            auVar146._8_4_ = __real_000003ff;
            auVar146._12_4_ = __real_000003ff;
            auVar146._16_4_ = __real_000003ff;
            auVar146._20_4_ = __real_000003ff;
            auVar146._24_4_ = __real_000003ff;
            auVar146._28_4_ = __real_000003ff;
            auVar57 = vpand_avx2(auVar146,auVar57);
            auVar15._0_4_ = __real_fffffe01 + auVar57._0_4_;
            auVar15._4_4_ = __real_fffffe01 + auVar57._4_4_;
            auVar15._8_4_ = __real_fffffe01 + auVar57._8_4_;
            auVar15._12_4_ = __real_fffffe01 + auVar57._12_4_;
            auVar15._16_4_ = __real_fffffe01 + auVar57._16_4_;
            auVar15._20_4_ = __real_fffffe01 + auVar57._20_4_;
            auVar15._24_4_ = __real_fffffe01 + auVar57._24_4_;
            auVar15._28_4_ = __real_fffffe01 + auVar57._28_4_;
            auVar57 = vcvtdq2ps_avx(auVar15);
            auVar147._4_4_ = __real_43ff8000;
            auVar147._0_4_ = __real_43ff8000;
            auVar147._8_4_ = __real_43ff8000;
            auVar147._12_4_ = __real_43ff8000;
            auVar147._16_4_ = __real_43ff8000;
            auVar147._20_4_ = __real_43ff8000;
            auVar147._24_4_ = __real_43ff8000;
            auVar147._28_4_ = __real_43ff8000;
            auVar70 = vdivps_avx(auVar57,auVar147);
            auVar57 = vpand_avx2(auVar124,auVar134);
            auVar16._0_4_ = auVar57._0_4_ + __real_fffffc01;
            auVar16._4_4_ = auVar57._4_4_ + __real_fffffc01;
            auVar16._8_4_ = auVar57._8_4_ + __real_fffffc01;
            auVar16._12_4_ = auVar57._12_4_ + __real_fffffc01;
            auVar16._16_4_ = auVar57._16_4_ + __real_fffffc01;
            auVar16._20_4_ = auVar57._20_4_ + __real_fffffc01;
            auVar16._24_4_ = auVar57._24_4_ + __real_fffffc01;
            auVar16._28_4_ = auVar57._28_4_ + __real_fffffc01;
            auVar57 = vcvtdq2ps_avx(auVar16);
            auVar148._4_4_ = __real_447fc000;
            auVar148._0_4_ = __real_447fc000;
            auVar148._8_4_ = __real_447fc000;
            auVar148._12_4_ = __real_447fc000;
            auVar148._16_4_ = __real_447fc000;
            auVar148._20_4_ = __real_447fc000;
            auVar148._24_4_ = __real_447fc000;
            auVar148._28_4_ = __real_447fc000;
            auVar57 = vdivps_avx(auVar57,auVar148);
            local_2c0 = auVar125._0_4_;
            auVar91._0_4_ = auVar58._0_4_ * auVar70._0_4_ + local_2c0;
            fStack_2bc = auVar125._4_4_;
            auVar91._4_4_ = auVar58._4_4_ * auVar70._4_4_ + fStack_2bc;
            fStack_2b8 = auVar125._8_4_;
            auVar91._8_4_ = auVar58._8_4_ * auVar70._8_4_ + fStack_2b8;
            fStack_2b4 = auVar125._12_4_;
            auVar91._12_4_ = auVar58._12_4_ * auVar70._12_4_ + fStack_2b4;
            fStack_2b0 = auVar125._16_4_;
            auVar91._16_4_ = auVar58._16_4_ * auVar70._16_4_ + fStack_2b0;
            fStack_2ac = auVar125._20_4_;
            auVar91._20_4_ = auVar58._20_4_ * auVar70._20_4_ + fStack_2ac;
            fStack_2a8 = auVar125._24_4_;
            auVar91._24_4_ = auVar58._24_4_ * auVar70._24_4_ + fStack_2a8;
            fStack_2a4 = auVar125._28_4_;
            auVar91._28_4_ = auVar58._28_4_ * auVar70._28_4_ + fStack_2a4;
            auVar70 = vpcmpeqd_avx2(auVar58,auVar58);
            auVar105 = ZEXT3264(auVar70);
            local_2e0 = auVar153._0_4_;
            auVar108._0_4_ = auVar99._0_4_ * auVar57._0_4_ + local_2e0;
            fStack_2dc = auVar153._4_4_;
            auVar108._4_4_ = auVar99._4_4_ * auVar57._4_4_ + fStack_2dc;
            fStack_2d8 = auVar153._8_4_;
            auVar108._8_4_ = auVar99._8_4_ * auVar57._8_4_ + fStack_2d8;
            fStack_2d4 = auVar153._12_4_;
            auVar108._12_4_ = auVar99._12_4_ * auVar57._12_4_ + fStack_2d4;
            fStack_2d0 = auVar153._16_4_;
            auVar108._16_4_ = auVar99._16_4_ * auVar57._16_4_ + fStack_2d0;
            fStack_2cc = auVar153._20_4_;
            auVar108._20_4_ = auVar99._20_4_ * auVar57._20_4_ + fStack_2cc;
            fStack_2c8 = auVar153._24_4_;
            auVar108._24_4_ = auVar99._24_4_ * auVar57._24_4_ + fStack_2c8;
            fStack_2c4 = auVar153._28_4_;
            auVar108._28_4_ = auVar99._28_4_ * auVar57._28_4_ + fStack_2c4;
            auVar17._0_4_ = __real_fffffc01 + auVar118._0_4_;
            auVar17._4_4_ = __real_fffffc01 + auVar118._4_4_;
            auVar17._8_4_ = __real_fffffc01 + auVar118._8_4_;
            auVar17._12_4_ = __real_fffffc01 + auVar118._12_4_;
            auVar17._16_4_ = __real_fffffc01 + auVar118._16_4_;
            auVar17._20_4_ = __real_fffffc01 + auVar118._20_4_;
            auVar17._24_4_ = __real_fffffc01 + auVar118._24_4_;
            auVar17._28_4_ = __real_fffffc01 + auVar118._28_4_;
            auVar57 = vcvtdq2ps_avx(auVar17);
            auVar57 = vdivps_avx(auVar57,auVar148);
            auVar67._0_4_ = auVar141._0_4_ * auVar57._0_4_ + auVar119._0_4_;
            auVar67._4_4_ = auVar141._4_4_ * auVar57._4_4_ + auVar119._4_4_;
            auVar67._8_4_ = auVar141._8_4_ * auVar57._8_4_ + auVar119._8_4_;
            auVar67._12_4_ = auVar141._12_4_ * auVar57._12_4_ + auVar119._12_4_;
            auVar67._16_4_ = auVar141._16_4_ * auVar57._16_4_ + auVar119._16_4_;
            auVar67._20_4_ = auVar141._20_4_ * auVar57._20_4_ + auVar119._20_4_;
            auVar67._24_4_ = auVar141._24_4_ * auVar57._24_4_ + auVar119._24_4_;
            auVar67._28_4_ = auVar141._28_4_ * auVar57._28_4_ + auVar119._28_4_;
            local_380 = vmaskmovps_avx(auVar102,auVar91);
            local_360 = vmaskmovps_avx(auVar102,auVar108);
            goto LAB_140ae2d66;
          default:
            goto switchD_140ae2904_caseD_4;
          }
        }
        else {
switchD_140ae2904_caseD_4:
          auVar67 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          local_380 = vmaskmovps_avx(auVar102,auVar67);
          local_360 = vmaskmovps_avx(auVar102,auVar67);
LAB_140ae2d66:
          local_340 = vmaskmovps_avx(auVar102,auVar67);
        }
        auVar57 = vsubps_avx(local_380,auVar66);
        auVar70 = vsubps_avx(local_360,auVar88);
        auVar99 = vsubps_avx(local_340,auVar107);
        local_3c0._0_4_ = auVar80._0_4_;
        local_3c0._4_4_ = auVar80._4_4_;
        fStack_3b8 = auVar80._8_4_;
        fStack_3b4 = auVar80._12_4_;
        fStack_3b0 = auVar80._16_4_;
        fStack_3ac = auVar80._20_4_;
        fStack_3a8 = auVar80._24_4_;
        fStack_3a4 = auVar80._28_4_;
        auVar69._0_4_ = (float)local_3c0._0_4_ * auVar57._0_4_ + auVar66._0_4_;
        auVar69._4_4_ = (float)local_3c0._4_4_ * auVar57._4_4_ + auVar66._4_4_;
        auVar69._8_4_ = fStack_3b8 * auVar57._8_4_ + auVar66._8_4_;
        auVar69._12_4_ = fStack_3b4 * auVar57._12_4_ + auVar66._12_4_;
        auVar69._16_4_ = fStack_3b0 * auVar57._16_4_ + auVar66._16_4_;
        auVar69._20_4_ = fStack_3ac * auVar57._20_4_ + auVar66._20_4_;
        auVar69._24_4_ = fStack_3a8 * auVar57._24_4_ + auVar66._24_4_;
        auVar69._28_4_ = fStack_3a4 * auVar57._28_4_ + auVar66._28_4_;
        auVar77._0_4_ = (float)local_3c0._0_4_ * auVar70._0_4_ + auVar88._0_4_;
        auVar77._4_4_ = (float)local_3c0._4_4_ * auVar70._4_4_ + auVar88._4_4_;
        auVar77._8_4_ = fStack_3b8 * auVar70._8_4_ + auVar88._8_4_;
        auVar77._12_4_ = fStack_3b4 * auVar70._12_4_ + auVar88._12_4_;
        auVar77._16_4_ = fStack_3b0 * auVar70._16_4_ + auVar88._16_4_;
        auVar77._20_4_ = fStack_3ac * auVar70._20_4_ + auVar88._20_4_;
        auVar77._24_4_ = fStack_3a8 * auVar70._24_4_ + auVar88._24_4_;
        auVar77._28_4_ = fStack_3a4 * auVar70._28_4_ + auVar88._28_4_;
        auVar92._0_4_ = (float)local_3c0._0_4_ * auVar99._0_4_ + auVar107._0_4_;
        auVar92._4_4_ = (float)local_3c0._4_4_ * auVar99._4_4_ + auVar107._4_4_;
        auVar92._8_4_ = fStack_3b8 * auVar99._8_4_ + auVar107._8_4_;
        auVar92._12_4_ = fStack_3b4 * auVar99._12_4_ + auVar107._12_4_;
        auVar92._16_4_ = fStack_3b0 * auVar99._16_4_ + auVar107._16_4_;
        auVar92._20_4_ = fStack_3ac * auVar99._20_4_ + auVar107._20_4_;
        auVar92._24_4_ = fStack_3a8 * auVar99._24_4_ + auVar107._24_4_;
        auVar92._28_4_ = fStack_3a4 * auVar99._28_4_ + auVar107._28_4_;
        auVar57 = vmaskmovps_avx(auVar102,auVar69);
        auVar70 = vmaskmovps_avx(auVar102,auVar77);
        auVar107 = vmaskmovps_avx(auVar102,auVar92);
      }
      local_220._16_16_ = ZEXT116(1) * auVar63;
      local_220._0_16_ = ZEXT116(0) * auVar63 | ZEXT116(1) * auVar64;
      auVar78._16_16_ = auVar70._0_16_;
      auVar78._0_16_ = auVar57._0_16_;
      auVar102 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000
                              ,auVar78);
      auVar66 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000
                             ,ZEXT1632(auVar107._0_16_));
      local_180 = vblendps_avx(auVar102,auVar66,0xcc);
      in_ZMM4 = ZEXT3264(___ymm_0000000000000000000000070000000300000000000000000000000600000002);
      auVar102 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002
                              ,auVar78);
      auVar66 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000
                             ,ZEXT1632(auVar107._0_16_));
      local_160 = vblendps_avx(auVar102,auVar66,0xcc);
      auVar57 = vperm2f128_avx(auVar57,auVar70,0x31);
      auVar70 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000
                             ,auVar57);
      auVar102 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000
                              ,ZEXT1632(auVar107._16_16_));
      local_140 = vblendps_avx(auVar70,auVar102,0xcc);
      auVar57 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002
                             ,auVar57);
      auVar70 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000
                             ,ZEXT1632(auVar107._16_16_));
      local_120 = vblendps_avx(auVar57,auVar70,0xcc);
      uVar50 = 0xff;
      do {
        uVar46 = 0;
        for (uVar43 = uVar50; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
          uVar46 = uVar46 + 1;
        }
        bVar1 = (byte)uVar46 & 0x3f;
        auVar57 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar46 << 4)));
        *(undefined1 (*) [32])
         (param_1 + 0x20 + (longlong)*(int *)(local_220 + (ulonglong)(uVar46 & 7) * 4) * 0x60) =
             auVar57;
        uVar50 = uVar50 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
      } while (uVar50 != 0);
      iVar45 = iVar45 + 8;
      _local_3c0 = auVar80;
    } while (iVar45 < (int)(uVar48 & 0xfffffff8));
    if ((int)param_9 <= iVar45) {
      return;
    }
  }
  auVar60._4_4_ = iVar45;
  auVar60._0_4_ = iVar45;
  auVar60._8_4_ = iVar45;
  auVar60._12_4_ = iVar45;
  auVar60._16_4_ = iVar45;
  auVar60._20_4_ = iVar45;
  auVar60._24_4_ = iVar45;
  auVar60._28_4_ = iVar45;
  auVar100 = vpor_avx2(auVar60,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar61._4_4_ = param_9;
  auVar61._0_4_ = param_9;
  auVar61._8_4_ = param_9;
  auVar61._12_4_ = param_9;
  auVar61._16_4_ = param_9;
  auVar61._20_4_ = param_9;
  auVar61._24_4_ = param_9;
  auVar61._28_4_ = param_9;
  auVar145 = vpcmpgtd_avx2(auVar61,auVar100);
  auVar100 = vpslld_avx2(auVar100,3);
  auVar149._4_4_ = __real_00000004;
  auVar149._0_4_ = __real_00000004;
  auVar149._8_4_ = __real_00000004;
  auVar149._12_4_ = __real_00000004;
  auVar149._16_4_ = __real_00000004;
  auVar149._20_4_ = __real_00000004;
  auVar149._24_4_ = __real_00000004;
  auVar149._28_4_ = __real_00000004;
  vpor_avx2(auVar149,auVar100);
  auVar100 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar145);
  auVar100 = vpslld_avx2(auVar100,4);
  vpor_avx2(auVar100,auVar149);
  auVar70 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
  auVar62._4_4_ = __real_00000001;
  auVar62._0_4_ = __real_00000001;
  auVar62._8_4_ = __real_00000001;
  auVar62._12_4_ = __real_00000001;
  auVar62._16_4_ = __real_00000001;
  auVar62._20_4_ = __real_00000001;
  auVar62._24_4_ = __real_00000001;
  auVar62._28_4_ = __real_00000001;
  auVar57 = vpcmpgtd_avx2(auVar70,auVar62);
  auVar139 = vpandn_avx2(auVar57,auVar145);
  iVar47 = vmovmskps_avx(auVar139);
  auVar100 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (iVar47 == 0) {
LAB_140ae2fa6:
    auVar102 = vpcmpeqd_avx2(auVar74,auVar74);
    auVar107 = auVar102 ^ auVar100;
    auVar100 = ZEXT1632((undefined1  [16])0x0);
    auVar139 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    if (0.0 < param_6) {
      auVar74._0_4_ = auVar102._0_4_ + auVar70._0_4_;
      auVar74._4_4_ = auVar102._4_4_ + auVar70._4_4_;
      auVar74._8_4_ = auVar102._8_4_ + auVar70._8_4_;
      auVar74._12_4_ = auVar102._12_4_ + auVar70._12_4_;
      auVar74._16_4_ = auVar102._16_4_ + auVar70._16_4_;
      auVar74._20_4_ = auVar102._20_4_ + auVar70._20_4_;
      auVar74._24_4_ = auVar102._24_4_ + auVar70._24_4_;
      auVar74._28_4_ = auVar102._28_4_ + auVar70._28_4_;
      if (__real_3f800000 <= param_6) {
        auVar100 = vpand_avx2(auVar107,auVar145);
        auVar100 = vblendvps_avx(auVar139,auVar74,auVar100);
        auVar74 = auVar100;
      }
      else {
        auVar100 = vcvtdq2ps_avx(auVar74);
        auVar135._0_4_ = param_6 * auVar100._0_4_;
        auVar135._4_4_ = param_6 * auVar100._4_4_;
        auVar135._8_4_ = param_6 * auVar100._8_4_;
        auVar135._12_4_ = param_6 * auVar100._12_4_;
        auVar135._16_4_ = param_6 * auVar100._16_4_;
        auVar135._20_4_ = param_6 * auVar100._20_4_;
        auVar135._24_4_ = param_6 * auVar100._24_4_;
        auVar135._28_4_ = param_6 * auVar100._28_4_;
        auVar102 = vpand_avx2(auVar107,auVar145);
        auVar70 = vroundps_avx(auVar135,9);
        auVar94._0_4_ = (int)auVar70._0_4_;
        auVar94._4_4_ = (int)auVar70._4_4_;
        auVar94._8_4_ = (int)auVar70._8_4_;
        auVar94._12_4_ = (int)auVar70._12_4_;
        auVar94._16_4_ = (int)auVar70._16_4_;
        auVar94._20_4_ = (int)auVar70._20_4_;
        auVar94._24_4_ = (int)auVar70._24_4_;
        auVar94._28_4_ = (int)auVar70._28_4_;
        auVar100 = vpminsd_avx2(auVar94,auVar74);
        auVar100 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar100,auVar102);
        if (param_7 != '\x01') {
          auVar139 = vsubps_avx(auVar135,auVar70);
        }
        auVar70 = vpcmpeqd_avx2(auVar135,auVar135);
        auVar70 = vpsubd_avx2(auVar100,auVar70);
        auVar74 = vpminsd_avx2(auVar70,auVar74);
        auVar74 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74,auVar102);
      }
    }
    auVar139 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar139,auVar107);
  }
  else {
    uVar55 = vmovmskps_avx(auVar145);
    if ((char)uVar55 != (char)iVar47) {
      auVar63 = vpackssdw_avx(auVar139._0_16_,auVar139._16_16_);
      auVar100 = vpmovsxwd_avx2(auVar63);
      goto LAB_140ae2fa6;
    }
    auVar139 = ZEXT1232(ZEXT812(0));
    auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  }
  local_240 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
  auVar70 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar145);
  iVar47 = -(uint)(param_8 == 3);
  auVar101._4_4_ = iVar47;
  auVar101._0_4_ = iVar47;
  auVar101._8_4_ = iVar47;
  auVar101._12_4_ = iVar47;
  auVar101._16_4_ = iVar47;
  auVar101._20_4_ = iVar47;
  auVar101._24_4_ = iVar47;
  auVar101._28_4_ = iVar47;
  auVar57 = vpand_avx2(auVar57,auVar101);
  auVar109._4_4_ = __real_00000018;
  auVar109._0_4_ = __real_00000018;
  auVar109._8_4_ = __real_00000018;
  auVar109._12_4_ = __real_00000018;
  auVar109._16_4_ = __real_00000018;
  auVar109._20_4_ = __real_00000018;
  auVar109._24_4_ = __real_00000018;
  auVar109._28_4_ = __real_00000018;
  auVar102 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar57 = vblendvps_avx(auVar102,auVar109,auVar57);
  auVar110._4_4_ = iVar54;
  auVar110._0_4_ = iVar54;
  auVar110._8_4_ = iVar54;
  auVar110._12_4_ = iVar54;
  auVar110._16_4_ = iVar54;
  auVar110._20_4_ = iVar54;
  auVar110._24_4_ = iVar54;
  auVar110._28_4_ = iVar54;
  if (param_8 < 7) {
    auVar107 = vpmulld_avx2(auVar100,auVar110);
    switch(param_8) {
    default:
      auVar107 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar102 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      local_500 = vmaskmovps_avx(auVar145,auVar107);
      local_4e0 = vmaskmovps_avx(auVar145,auVar66);
      local_4c0._0_32_ = vmaskmovps_avx(auVar145,auVar102);
      auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
      auVar100 = auVar145 & ~auVar102;
      if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
            (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
          (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140ae39e0;
      break;
    case 2:
      auVar18._0_4_ = auVar107._0_4_ + auVar70._0_4_ + auVar57._0_4_;
      auVar18._4_4_ = auVar107._4_4_ + auVar70._4_4_ + auVar57._4_4_;
      auVar18._8_4_ = auVar107._8_4_ + auVar70._8_4_ + auVar57._8_4_;
      auVar18._12_4_ = auVar107._12_4_ + auVar70._12_4_ + auVar57._12_4_;
      auVar18._16_4_ = auVar107._16_4_ + auVar70._16_4_ + auVar57._16_4_;
      auVar18._20_4_ = auVar107._20_4_ + auVar70._20_4_ + auVar57._20_4_;
      auVar18._24_4_ = auVar107._24_4_ + auVar70._24_4_ + auVar57._24_4_;
      auVar18._28_4_ = auVar107._28_4_ + auVar70._28_4_ + auVar57._28_4_;
      auVar102 = vpand_avx2(auVar18,auVar145);
      auVar63 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar102._0_4_)),
                            (uint)*(ushort *)(param_4 + auVar102._4_4_),1);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._8_4_),2);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._12_4_),3);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._16_4_),4);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._20_4_),5);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._24_4_),6);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar102._28_4_),7);
      auVar19._0_4_ = auVar18._0_4_ + __real_00000002;
      auVar19._4_4_ = auVar18._4_4_ + __real_00000002;
      auVar19._8_4_ = auVar18._8_4_ + __real_00000002;
      auVar19._12_4_ = auVar18._12_4_ + __real_00000002;
      auVar19._16_4_ = auVar18._16_4_ + __real_00000002;
      auVar19._20_4_ = auVar18._20_4_ + __real_00000002;
      auVar19._24_4_ = auVar18._24_4_ + __real_00000002;
      auVar19._28_4_ = auVar18._28_4_ + __real_00000002;
      auVar102 = vpand_avx2(auVar145,auVar19);
      auVar64 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar102._0_4_)),
                            (uint)*(ushort *)(param_4 + auVar102._4_4_),1);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._8_4_),2);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._12_4_),3);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._16_4_),4);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._20_4_),5);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._24_4_),6);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + auVar102._28_4_),7);
      auVar20._0_4_ = auVar18._0_4_ + __real_00000004;
      auVar20._4_4_ = auVar18._4_4_ + __real_00000004;
      auVar20._8_4_ = auVar18._8_4_ + __real_00000004;
      auVar20._12_4_ = auVar18._12_4_ + __real_00000004;
      auVar20._16_4_ = auVar18._16_4_ + __real_00000004;
      auVar20._20_4_ = auVar18._20_4_ + __real_00000004;
      auVar20._24_4_ = auVar18._24_4_ + __real_00000004;
      auVar20._28_4_ = auVar18._28_4_ + __real_00000004;
      auVar80 = vpand_avx2(auVar145,auVar20);
      auVar65 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + auVar80._0_4_)),
                            (uint)*(ushort *)(param_4 + auVar80._4_4_),1);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._8_4_),2);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._12_4_),3);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._16_4_),4);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._20_4_),5);
      auVar102 = vpmovzxwd_avx2(auVar63);
      auVar21._0_4_ = auVar102._0_4_ + __real_ffff8001;
      auVar21._4_4_ = auVar102._4_4_ + __real_ffff8001;
      auVar21._8_4_ = auVar102._8_4_ + __real_ffff8001;
      auVar21._12_4_ = auVar102._12_4_ + __real_ffff8001;
      auVar21._16_4_ = auVar102._16_4_ + __real_ffff8001;
      auVar21._20_4_ = auVar102._20_4_ + __real_ffff8001;
      auVar21._24_4_ = auVar102._24_4_ + __real_ffff8001;
      auVar21._28_4_ = auVar102._28_4_ + __real_ffff8001;
      auVar102 = vcvtdq2ps_avx(auVar21);
      auVar120._4_4_ = __real_46fffe00;
      auVar120._0_4_ = __real_46fffe00;
      auVar120._8_4_ = __real_46fffe00;
      auVar120._12_4_ = __real_46fffe00;
      auVar120._16_4_ = __real_46fffe00;
      auVar120._20_4_ = __real_46fffe00;
      auVar120._24_4_ = __real_46fffe00;
      auVar120._28_4_ = __real_46fffe00;
      auVar107 = vdivps_avx(auVar102,auVar120);
      auVar63 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + auVar80._24_4_),6);
      auVar102 = vpmovzxwd_avx2(auVar64);
      auVar22._0_4_ = auVar102._0_4_ + __real_ffff8001;
      auVar22._4_4_ = auVar102._4_4_ + __real_ffff8001;
      auVar22._8_4_ = auVar102._8_4_ + __real_ffff8001;
      auVar22._12_4_ = auVar102._12_4_ + __real_ffff8001;
      auVar22._16_4_ = auVar102._16_4_ + __real_ffff8001;
      auVar22._20_4_ = auVar102._20_4_ + __real_ffff8001;
      auVar22._24_4_ = auVar102._24_4_ + __real_ffff8001;
      auVar22._28_4_ = auVar102._28_4_ + __real_ffff8001;
      auVar102 = vcvtdq2ps_avx(auVar22);
      auVar66 = vdivps_avx(auVar102,auVar120);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + auVar80._28_4_),7);
      auVar102 = vpmovzxwd_avx2(auVar63);
      auVar23._0_4_ = auVar102._0_4_ + __real_ffff8001;
      auVar23._4_4_ = auVar102._4_4_ + __real_ffff8001;
      auVar23._8_4_ = auVar102._8_4_ + __real_ffff8001;
      auVar23._12_4_ = auVar102._12_4_ + __real_ffff8001;
      auVar23._16_4_ = auVar102._16_4_ + __real_ffff8001;
      auVar23._20_4_ = auVar102._20_4_ + __real_ffff8001;
      auVar23._24_4_ = auVar102._24_4_ + __real_ffff8001;
      auVar23._28_4_ = auVar102._28_4_ + __real_ffff8001;
      auVar102 = vcvtdq2ps_avx(auVar23);
      auVar102 = vdivps_avx(auVar102,auVar120);
      auVar79._0_4_ = auVar107._0_4_ * __real_43000000;
      auVar79._4_4_ = auVar107._4_4_ * __real_43000000;
      auVar79._8_4_ = auVar107._8_4_ * __real_43000000;
      auVar79._12_4_ = auVar107._12_4_ * __real_43000000;
      auVar79._16_4_ = auVar107._16_4_ * __real_43000000;
      auVar79._20_4_ = auVar107._20_4_ * __real_43000000;
      auVar79._24_4_ = auVar107._24_4_ * __real_43000000;
      auVar79._28_4_ = auVar107._28_4_ * __real_43000000;
      auVar121._0_4_ = auVar66._0_4_ * __real_43000000;
      auVar121._4_4_ = auVar66._4_4_ * __real_43000000;
      auVar121._8_4_ = auVar66._8_4_ * __real_43000000;
      auVar121._12_4_ = auVar66._12_4_ * __real_43000000;
      auVar121._16_4_ = auVar66._16_4_ * __real_43000000;
      auVar121._20_4_ = auVar66._20_4_ * __real_43000000;
      auVar121._24_4_ = auVar66._24_4_ * __real_43000000;
      auVar121._28_4_ = auVar66._28_4_ * __real_43000000;
      auVar71._0_4_ = auVar102._0_4_ * __real_43000000;
      auVar71._4_4_ = auVar102._4_4_ * __real_43000000;
      auVar71._8_4_ = auVar102._8_4_ * __real_43000000;
      auVar71._12_4_ = auVar102._12_4_ * __real_43000000;
      auVar71._16_4_ = auVar102._16_4_ * __real_43000000;
      auVar71._20_4_ = auVar102._20_4_ * __real_43000000;
      auVar71._24_4_ = auVar102._24_4_ * __real_43000000;
      auVar71._28_4_ = auVar102._28_4_ * __real_43000000;
      local_500 = vmaskmovps_avx(auVar145,auVar79);
      local_4e0 = vmaskmovps_avx(auVar145,auVar121);
      local_4c0._0_32_ = vmaskmovps_avx(auVar145,auVar71);
      auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
      auVar100 = auVar145 & ~auVar102;
      if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
            (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
          (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140ae39e0;
      break;
    case 3:
      auVar118 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar88 = vgatherdps(ZEXT832(0),auVar145);
      auVar99 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar145);
      auVar125 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar145);
      auVar80 = vgatherdps(ZEXT832(0) << 0x20,auVar145);
      auVar66 = vpgatherdd(ZEXT832(0),auVar145);
      auVar102 = vpsrld_avx2(auVar66,10);
      auVar136._4_4_ = __real_000007ff;
      auVar136._0_4_ = __real_000007ff;
      auVar136._8_4_ = __real_000007ff;
      auVar136._12_4_ = __real_000007ff;
      auVar136._16_4_ = __real_000007ff;
      auVar136._20_4_ = __real_000007ff;
      auVar136._24_4_ = __real_000007ff;
      auVar136._28_4_ = __real_000007ff;
      auVar107 = vpand_avx2(auVar136,auVar102);
      auVar137._4_4_ = __real_000003ff;
      auVar137._0_4_ = __real_000003ff;
      auVar137._8_4_ = __real_000003ff;
      auVar137._12_4_ = __real_000003ff;
      auVar137._16_4_ = __real_000003ff;
      auVar137._20_4_ = __real_000003ff;
      auVar137._24_4_ = __real_000003ff;
      auVar137._28_4_ = __real_000003ff;
      auVar102 = vpand_avx2(auVar137,auVar66);
      auVar24._0_4_ = auVar102._0_4_ + __real_fffffe01;
      auVar24._4_4_ = auVar102._4_4_ + __real_fffffe01;
      auVar24._8_4_ = auVar102._8_4_ + __real_fffffe01;
      auVar24._12_4_ = auVar102._12_4_ + __real_fffffe01;
      auVar24._16_4_ = auVar102._16_4_ + __real_fffffe01;
      auVar24._20_4_ = auVar102._20_4_ + __real_fffffe01;
      auVar24._24_4_ = auVar102._24_4_ + __real_fffffe01;
      auVar24._28_4_ = auVar102._28_4_ + __real_fffffe01;
      auVar102 = vcvtdq2ps_avx(auVar24);
      auVar150._4_4_ = __real_43ff8000;
      auVar150._0_4_ = __real_43ff8000;
      auVar150._8_4_ = __real_43ff8000;
      auVar150._12_4_ = __real_43ff8000;
      auVar150._16_4_ = __real_43ff8000;
      auVar150._20_4_ = __real_43ff8000;
      auVar150._24_4_ = __real_43ff8000;
      auVar150._28_4_ = __real_43ff8000;
      auVar102 = vdivps_avx(auVar102,auVar150);
      auVar138._0_4_ = auVar58._0_4_ * auVar102._0_4_ + auVar118._0_4_;
      auVar138._4_4_ = auVar58._4_4_ * auVar102._4_4_ + auVar118._4_4_;
      auVar138._8_4_ = auVar58._8_4_ * auVar102._8_4_ + auVar118._8_4_;
      auVar138._12_4_ = auVar58._12_4_ * auVar102._12_4_ + auVar118._12_4_;
      auVar138._16_4_ = auVar58._16_4_ * auVar102._16_4_ + auVar118._16_4_;
      auVar138._20_4_ = auVar58._20_4_ * auVar102._20_4_ + auVar118._20_4_;
      auVar138._24_4_ = auVar58._24_4_ * auVar102._24_4_ + auVar118._24_4_;
      auVar138._28_4_ = auVar58._28_4_ * auVar102._28_4_ + auVar118._28_4_;
      auVar25._0_4_ = __real_fffffc01 + auVar107._0_4_;
      auVar25._4_4_ = __real_fffffc01 + auVar107._4_4_;
      auVar25._8_4_ = __real_fffffc01 + auVar107._8_4_;
      auVar25._12_4_ = __real_fffffc01 + auVar107._12_4_;
      auVar25._16_4_ = __real_fffffc01 + auVar107._16_4_;
      auVar25._20_4_ = __real_fffffc01 + auVar107._20_4_;
      auVar25._24_4_ = __real_fffffc01 + auVar107._24_4_;
      auVar25._28_4_ = __real_fffffc01 + auVar107._28_4_;
      auVar102 = vcvtdq2ps_avx(auVar25);
      auVar151._4_4_ = __real_447fc000;
      auVar151._0_4_ = __real_447fc000;
      auVar151._8_4_ = __real_447fc000;
      auVar151._12_4_ = __real_447fc000;
      auVar151._16_4_ = __real_447fc000;
      auVar151._20_4_ = __real_447fc000;
      auVar151._24_4_ = __real_447fc000;
      auVar151._28_4_ = __real_447fc000;
      auVar102 = vdivps_avx(auVar102,auVar151);
      auVar107 = vpsrld_avx2(auVar66,0x15);
      auVar103._0_4_ = auVar125._0_4_ * auVar102._0_4_ + auVar88._0_4_;
      auVar103._4_4_ = auVar125._4_4_ * auVar102._4_4_ + auVar88._4_4_;
      auVar103._8_4_ = auVar125._8_4_ * auVar102._8_4_ + auVar88._8_4_;
      auVar103._12_4_ = auVar125._12_4_ * auVar102._12_4_ + auVar88._12_4_;
      auVar103._16_4_ = auVar125._16_4_ * auVar102._16_4_ + auVar88._16_4_;
      auVar103._20_4_ = auVar125._20_4_ * auVar102._20_4_ + auVar88._20_4_;
      auVar103._24_4_ = auVar125._24_4_ * auVar102._24_4_ + auVar88._24_4_;
      auVar103._28_4_ = auVar125._28_4_ * auVar102._28_4_ + auVar88._28_4_;
      auVar26._0_4_ = __real_fffffc01 + auVar107._0_4_;
      auVar26._4_4_ = __real_fffffc01 + auVar107._4_4_;
      auVar26._8_4_ = __real_fffffc01 + auVar107._8_4_;
      auVar26._12_4_ = __real_fffffc01 + auVar107._12_4_;
      auVar26._16_4_ = __real_fffffc01 + auVar107._16_4_;
      auVar26._20_4_ = __real_fffffc01 + auVar107._20_4_;
      auVar26._24_4_ = __real_fffffc01 + auVar107._24_4_;
      auVar26._28_4_ = __real_fffffc01 + auVar107._28_4_;
      auVar102 = vcvtdq2ps_avx(auVar26);
      auVar102 = vdivps_avx(auVar102,auVar151);
      auVar72._0_4_ = auVar80._0_4_ * auVar102._0_4_ + auVar99._0_4_;
      auVar72._4_4_ = auVar80._4_4_ * auVar102._4_4_ + auVar99._4_4_;
      auVar72._8_4_ = auVar80._8_4_ * auVar102._8_4_ + auVar99._8_4_;
      auVar72._12_4_ = auVar80._12_4_ * auVar102._12_4_ + auVar99._12_4_;
      auVar72._16_4_ = auVar80._16_4_ * auVar102._16_4_ + auVar99._16_4_;
      auVar72._20_4_ = auVar80._20_4_ * auVar102._20_4_ + auVar99._20_4_;
      auVar72._24_4_ = auVar80._24_4_ * auVar102._24_4_ + auVar99._24_4_;
      auVar72._28_4_ = auVar80._28_4_ * auVar102._28_4_ + auVar99._28_4_;
      local_500 = vmaskmovps_avx(auVar145,auVar138);
      local_4e0 = vmaskmovps_avx(auVar145,auVar103);
      local_4c0._0_32_ = vmaskmovps_avx(auVar145,auVar72);
      auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
      auVar100 = auVar145 & ~auVar102;
      if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
            (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
          (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140ae39e0;
      break;
    case 4:
    case 5:
      goto switchD_140ae30a9_caseD_4;
    case 6:
      auVar63._0_12_ = ZEXT812(0);
      auVar63._12_4_ = 0;
      local_500 = vmaskmovps_avx(auVar145,ZEXT1632(auVar63));
      local_4e0 = vmaskmovps_avx(auVar145,ZEXT1632(auVar63));
      local_4c0._0_32_ = vmaskmovps_avx(auVar145,ZEXT1632(auVar63));
      auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
      auVar100 = auVar145 & ~auVar102;
      if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
            (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
          (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140ae39e0;
    }
  }
  else {
switchD_140ae30a9_caseD_4:
    local_500 = vmaskmovps_avx(auVar145,auVar102);
    local_4e0 = vmaskmovps_avx(auVar145,auVar102);
    local_4c0._0_32_ = vmaskmovps_avx(auVar145,auVar102);
    auVar102 = vpcmpeqd_avx2(auVar100,auVar74);
    auVar100 = auVar145 & ~auVar102;
    if ((((((((SUB321(auVar100 >> 0x1f,0) & 1) == 0 && (SUB321(auVar100 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar100 >> 0x5f,0) & 1) == 0) && SUB321(auVar100 >> 0x7f,0) == '\0') &&
          (SUB321(auVar100 >> 0x9f,0) & 1) == 0) && SUB321(auVar100 >> 0xbf,0) == '\0') &&
        (SUB321(auVar100 >> 0xdf,0) & 1) == 0) && -1 < auVar100[0x1f]) goto LAB_140ae39e0;
  }
  auVar95._0_4_ = ~auVar102._0_4_ & auVar145._0_4_;
  auVar95._4_4_ = ~auVar102._4_4_ & auVar145._4_4_;
  auVar95._8_4_ = ~auVar102._8_4_ & auVar145._8_4_;
  auVar95._12_4_ = ~auVar102._12_4_ & auVar145._12_4_;
  auVar95._16_4_ = ~auVar102._16_4_ & auVar145._16_4_;
  auVar95._20_4_ = ~auVar102._20_4_ & auVar145._20_4_;
  auVar95._24_4_ = ~auVar102._24_4_ & auVar145._24_4_;
  auVar95._28_4_ = ~auVar102._28_4_ & auVar145._28_4_;
  if (param_8 < 7) {
    auVar74 = vpmulld_avx2(auVar74,auVar110);
    switch(param_8) {
    case 0:
    case 1:
      auVar74 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar100 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar81 = vgatherdps(ZEXT832(0),auVar95);
      local_420 = vmaskmovps_avx(auVar95,auVar74);
      local_400 = vmaskmovps_avx(auVar95,auVar100);
      break;
    case 2:
      auVar27._0_4_ = auVar74._0_4_ + auVar70._0_4_ + auVar57._0_4_;
      auVar27._4_4_ = auVar74._4_4_ + auVar70._4_4_ + auVar57._4_4_;
      auVar27._8_4_ = auVar74._8_4_ + auVar70._8_4_ + auVar57._8_4_;
      auVar27._12_4_ = auVar74._12_4_ + auVar70._12_4_ + auVar57._12_4_;
      auVar27._16_4_ = auVar74._16_4_ + auVar70._16_4_ + auVar57._16_4_;
      auVar27._20_4_ = auVar74._20_4_ + auVar70._20_4_ + auVar57._20_4_;
      auVar27._24_4_ = auVar74._24_4_ + auVar70._24_4_ + auVar57._24_4_;
      auVar27._28_4_ = auVar74._28_4_ + auVar70._28_4_ + auVar57._28_4_;
      auVar100 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar74 = vblendvps_avx(auVar100,auVar27,auVar95);
      auVar63 = auVar74._0_16_;
      iVar47 = vextractps_avx(auVar63,0);
      iVar54 = vextractps_avx(auVar63,1);
      iVar52 = vextractps_avx(auVar63,2);
      iVar53 = vextractps_avx(auVar63,3);
      auVar63 = auVar74._16_16_;
      iVar56 = vextractps_avx(auVar63,0);
      iVar49 = vextractps_avx(auVar63,1);
      iVar51 = vextractps_avx(auVar63,2);
      iVar45 = vextractps_avx(auVar63,3);
      auVar63 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + iVar47)),
                            (uint)*(ushort *)(param_4 + iVar54),1);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar52),2);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar53),3);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar56),4);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar49),5);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar51),6);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar45),7);
      auVar28._0_4_ = auVar27._0_4_ + __real_00000002;
      auVar28._4_4_ = auVar27._4_4_ + __real_00000002;
      auVar28._8_4_ = auVar27._8_4_ + __real_00000002;
      auVar28._12_4_ = auVar27._12_4_ + __real_00000002;
      auVar28._16_4_ = auVar27._16_4_ + __real_00000002;
      auVar28._20_4_ = auVar27._20_4_ + __real_00000002;
      auVar28._24_4_ = auVar27._24_4_ + __real_00000002;
      auVar28._28_4_ = auVar27._28_4_ + __real_00000002;
      auVar74 = vblendvps_avx(auVar100,auVar28,auVar95);
      auVar64 = auVar74._0_16_;
      iVar47 = vextractps_avx(auVar64,0);
      iVar54 = vextractps_avx(auVar64,1);
      iVar52 = vextractps_avx(auVar64,2);
      iVar53 = vextractps_avx(auVar64,3);
      auVar64 = auVar74._16_16_;
      iVar56 = vextractps_avx(auVar64,0);
      iVar49 = vextractps_avx(auVar64,1);
      iVar51 = vextractps_avx(auVar64,2);
      iVar45 = vextractps_avx(auVar64,3);
      auVar64 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + iVar47)),
                            (uint)*(ushort *)(param_4 + iVar54),1);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar52),2);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar53),3);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar56),4);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar49),5);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar51),6);
      auVar64 = vpinsrw_avx(auVar64,(uint)*(ushort *)(param_4 + iVar45),7);
      auVar29._0_4_ = __real_00000004 + auVar27._0_4_;
      auVar29._4_4_ = __real_00000004 + auVar27._4_4_;
      auVar29._8_4_ = __real_00000004 + auVar27._8_4_;
      auVar29._12_4_ = __real_00000004 + auVar27._12_4_;
      auVar29._16_4_ = __real_00000004 + auVar27._16_4_;
      auVar29._20_4_ = __real_00000004 + auVar27._20_4_;
      auVar29._24_4_ = __real_00000004 + auVar27._24_4_;
      auVar29._28_4_ = __real_00000004 + auVar27._28_4_;
      auVar74 = vblendvps_avx(auVar100,auVar29,auVar95);
      auVar65 = auVar74._0_16_;
      iVar47 = vextractps_avx(auVar65,0);
      iVar54 = vextractps_avx(auVar65,1);
      iVar52 = vextractps_avx(auVar65,2);
      iVar53 = vextractps_avx(auVar65,3);
      auVar65 = auVar74._16_16_;
      iVar56 = vextractps_avx(auVar65,0);
      iVar49 = vextractps_avx(auVar65,1);
      iVar51 = vextractps_avx(auVar65,2);
      iVar45 = vextractps_avx(auVar65,3);
      auVar65 = vpinsrw_avx(ZEXT216(*(ushort *)(param_4 + iVar47)),
                            (uint)*(ushort *)(param_4 + iVar54),1);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar52),2);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar53),3);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar56),4);
      auVar65 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar49),5);
      auVar74 = vpmovzxwd_avx2(auVar63);
      auVar30._0_4_ = auVar74._0_4_ + __real_ffff8001;
      auVar30._4_4_ = auVar74._4_4_ + __real_ffff8001;
      auVar30._8_4_ = auVar74._8_4_ + __real_ffff8001;
      auVar30._12_4_ = auVar74._12_4_ + __real_ffff8001;
      auVar30._16_4_ = auVar74._16_4_ + __real_ffff8001;
      auVar30._20_4_ = auVar74._20_4_ + __real_ffff8001;
      auVar30._24_4_ = auVar74._24_4_ + __real_ffff8001;
      auVar30._28_4_ = auVar74._28_4_ + __real_ffff8001;
      auVar74 = vcvtdq2ps_avx(auVar30);
      auVar96._4_4_ = __real_46fffe00;
      auVar96._0_4_ = __real_46fffe00;
      auVar96._8_4_ = __real_46fffe00;
      auVar96._12_4_ = __real_46fffe00;
      auVar96._16_4_ = __real_46fffe00;
      auVar96._20_4_ = __real_46fffe00;
      auVar96._24_4_ = __real_46fffe00;
      auVar96._28_4_ = __real_46fffe00;
      auVar100 = vdivps_avx(auVar74,auVar96);
      auVar63 = vpinsrw_avx(auVar65,(uint)*(ushort *)(param_4 + iVar51),6);
      auVar74 = vpmovzxwd_avx2(auVar64);
      auVar31._0_4_ = auVar74._0_4_ + __real_ffff8001;
      auVar31._4_4_ = auVar74._4_4_ + __real_ffff8001;
      auVar31._8_4_ = auVar74._8_4_ + __real_ffff8001;
      auVar31._12_4_ = auVar74._12_4_ + __real_ffff8001;
      auVar31._16_4_ = auVar74._16_4_ + __real_ffff8001;
      auVar31._20_4_ = auVar74._20_4_ + __real_ffff8001;
      auVar31._24_4_ = auVar74._24_4_ + __real_ffff8001;
      auVar31._28_4_ = auVar74._28_4_ + __real_ffff8001;
      auVar74 = vcvtdq2ps_avx(auVar31);
      auVar57 = vdivps_avx(auVar74,auVar96);
      auVar63 = vpinsrw_avx(auVar63,(uint)*(ushort *)(param_4 + iVar45),7);
      auVar74 = vpmovzxwd_avx2(auVar63);
      auVar32._0_4_ = auVar74._0_4_ + __real_ffff8001;
      auVar32._4_4_ = auVar74._4_4_ + __real_ffff8001;
      auVar32._8_4_ = auVar74._8_4_ + __real_ffff8001;
      auVar32._12_4_ = auVar74._12_4_ + __real_ffff8001;
      auVar32._16_4_ = auVar74._16_4_ + __real_ffff8001;
      auVar32._20_4_ = auVar74._20_4_ + __real_ffff8001;
      auVar32._24_4_ = auVar74._24_4_ + __real_ffff8001;
      auVar32._28_4_ = auVar74._28_4_ + __real_ffff8001;
      auVar74 = vcvtdq2ps_avx(auVar32);
      auVar74 = vdivps_avx(auVar74,auVar96);
      auVar82._0_4_ = auVar100._0_4_ * __real_43000000;
      auVar82._4_4_ = auVar100._4_4_ * __real_43000000;
      auVar82._8_4_ = auVar100._8_4_ * __real_43000000;
      auVar82._12_4_ = auVar100._12_4_ * __real_43000000;
      auVar82._16_4_ = auVar100._16_4_ * __real_43000000;
      auVar82._20_4_ = auVar100._20_4_ * __real_43000000;
      auVar82._24_4_ = auVar100._24_4_ * __real_43000000;
      auVar82._28_4_ = auVar100._28_4_ * __real_43000000;
      auVar97._0_4_ = auVar57._0_4_ * __real_43000000;
      auVar97._4_4_ = auVar57._4_4_ * __real_43000000;
      auVar97._8_4_ = auVar57._8_4_ * __real_43000000;
      auVar97._12_4_ = auVar57._12_4_ * __real_43000000;
      auVar97._16_4_ = auVar57._16_4_ * __real_43000000;
      auVar97._20_4_ = auVar57._20_4_ * __real_43000000;
      auVar97._24_4_ = auVar57._24_4_ * __real_43000000;
      auVar97._28_4_ = auVar57._28_4_ * __real_43000000;
      auVar73._0_4_ = auVar74._0_4_ * __real_43000000;
      auVar73._4_4_ = auVar74._4_4_ * __real_43000000;
      auVar73._8_4_ = auVar74._8_4_ * __real_43000000;
      auVar73._12_4_ = auVar74._12_4_ * __real_43000000;
      auVar73._16_4_ = auVar74._16_4_ * __real_43000000;
      auVar73._20_4_ = auVar74._20_4_ * __real_43000000;
      auVar73._24_4_ = auVar74._24_4_ * __real_43000000;
      auVar73._28_4_ = auVar74._28_4_ * __real_43000000;
      local_420 = vmaskmovps_avx(auVar95,auVar82);
      local_400 = vmaskmovps_avx(auVar95,auVar97);
      goto LAB_140ae3821;
    case 3:
      auVar102 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar57 = vgatherdps(ZEXT832(0),auVar95);
      auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar95);
      auVar88 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar99 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar95);
      auVar74 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar95);
      auVar70 = vpsrld_avx2(auVar74,0x15);
      auVar107 = vpsrld_avx2(auVar74,10);
      auVar122._4_4_ = __real_000007ff;
      auVar122._0_4_ = __real_000007ff;
      auVar122._8_4_ = __real_000007ff;
      auVar122._12_4_ = __real_000007ff;
      auVar122._16_4_ = __real_000007ff;
      auVar122._20_4_ = __real_000007ff;
      auVar122._24_4_ = __real_000007ff;
      auVar122._28_4_ = __real_000007ff;
      auVar142._4_4_ = __real_000003ff;
      auVar142._0_4_ = __real_000003ff;
      auVar142._8_4_ = __real_000003ff;
      auVar142._12_4_ = __real_000003ff;
      auVar142._16_4_ = __real_000003ff;
      auVar142._20_4_ = __real_000003ff;
      auVar142._24_4_ = __real_000003ff;
      auVar142._28_4_ = __real_000003ff;
      auVar74 = vpand_avx2(auVar142,auVar74);
      auVar33._0_4_ = __real_fffffe01 + auVar74._0_4_;
      auVar33._4_4_ = __real_fffffe01 + auVar74._4_4_;
      auVar33._8_4_ = __real_fffffe01 + auVar74._8_4_;
      auVar33._12_4_ = __real_fffffe01 + auVar74._12_4_;
      auVar33._16_4_ = __real_fffffe01 + auVar74._16_4_;
      auVar33._20_4_ = __real_fffffe01 + auVar74._20_4_;
      auVar33._24_4_ = __real_fffffe01 + auVar74._24_4_;
      auVar33._28_4_ = __real_fffffe01 + auVar74._28_4_;
      auVar74 = vcvtdq2ps_avx(auVar33);
      auVar143._4_4_ = __real_43ff8000;
      auVar143._0_4_ = __real_43ff8000;
      auVar143._8_4_ = __real_43ff8000;
      auVar143._12_4_ = __real_43ff8000;
      auVar143._16_4_ = __real_43ff8000;
      auVar143._20_4_ = __real_43ff8000;
      auVar143._24_4_ = __real_43ff8000;
      auVar143._28_4_ = __real_43ff8000;
      auVar100 = vdivps_avx(auVar74,auVar143);
      auVar74 = vpand_avx2(auVar122,auVar107);
      auVar34._0_4_ = __real_fffffc01 + auVar74._0_4_;
      auVar34._4_4_ = __real_fffffc01 + auVar74._4_4_;
      auVar34._8_4_ = __real_fffffc01 + auVar74._8_4_;
      auVar34._12_4_ = __real_fffffc01 + auVar74._12_4_;
      auVar34._16_4_ = __real_fffffc01 + auVar74._16_4_;
      auVar34._20_4_ = __real_fffffc01 + auVar74._20_4_;
      auVar34._24_4_ = __real_fffffc01 + auVar74._24_4_;
      auVar34._28_4_ = __real_fffffc01 + auVar74._28_4_;
      auVar74 = vcvtdq2ps_avx(auVar34);
      auVar144._4_4_ = __real_447fc000;
      auVar144._0_4_ = __real_447fc000;
      auVar144._8_4_ = __real_447fc000;
      auVar144._12_4_ = __real_447fc000;
      auVar144._16_4_ = __real_447fc000;
      auVar144._20_4_ = __real_447fc000;
      auVar144._24_4_ = __real_447fc000;
      auVar144._28_4_ = __real_447fc000;
      auVar74 = vdivps_avx(auVar74,auVar144);
      auVar75._0_4_ = auVar80._0_4_ * auVar100._0_4_ + auVar102._0_4_;
      auVar75._4_4_ = auVar80._4_4_ * auVar100._4_4_ + auVar102._4_4_;
      auVar75._8_4_ = auVar80._8_4_ * auVar100._8_4_ + auVar102._8_4_;
      auVar75._12_4_ = auVar80._12_4_ * auVar100._12_4_ + auVar102._12_4_;
      auVar75._16_4_ = auVar80._16_4_ * auVar100._16_4_ + auVar102._16_4_;
      auVar75._20_4_ = auVar80._20_4_ * auVar100._20_4_ + auVar102._20_4_;
      auVar75._24_4_ = auVar80._24_4_ * auVar100._24_4_ + auVar102._24_4_;
      auVar75._28_4_ = auVar80._28_4_ * auVar100._28_4_ + auVar102._28_4_;
      auVar104._0_4_ = auVar88._0_4_ * auVar74._0_4_ + auVar57._0_4_;
      auVar104._4_4_ = auVar88._4_4_ * auVar74._4_4_ + auVar57._4_4_;
      auVar104._8_4_ = auVar88._8_4_ * auVar74._8_4_ + auVar57._8_4_;
      auVar104._12_4_ = auVar88._12_4_ * auVar74._12_4_ + auVar57._12_4_;
      auVar104._16_4_ = auVar88._16_4_ * auVar74._16_4_ + auVar57._16_4_;
      auVar104._20_4_ = auVar88._20_4_ * auVar74._20_4_ + auVar57._20_4_;
      auVar104._24_4_ = auVar88._24_4_ * auVar74._24_4_ + auVar57._24_4_;
      auVar104._28_4_ = auVar88._28_4_ * auVar74._28_4_ + auVar57._28_4_;
      auVar35._0_4_ = __real_fffffc01 + auVar70._0_4_;
      auVar35._4_4_ = __real_fffffc01 + auVar70._4_4_;
      auVar35._8_4_ = __real_fffffc01 + auVar70._8_4_;
      auVar35._12_4_ = __real_fffffc01 + auVar70._12_4_;
      auVar35._16_4_ = __real_fffffc01 + auVar70._16_4_;
      auVar35._20_4_ = __real_fffffc01 + auVar70._20_4_;
      auVar35._24_4_ = __real_fffffc01 + auVar70._24_4_;
      auVar35._28_4_ = __real_fffffc01 + auVar70._28_4_;
      auVar74 = vcvtdq2ps_avx(auVar35);
      auVar74 = vdivps_avx(auVar74,auVar144);
      auVar81._0_4_ = auVar99._0_4_ * auVar74._0_4_ + auVar66._0_4_;
      auVar81._4_4_ = auVar99._4_4_ * auVar74._4_4_ + auVar66._4_4_;
      auVar81._8_4_ = auVar99._8_4_ * auVar74._8_4_ + auVar66._8_4_;
      auVar81._12_4_ = auVar99._12_4_ * auVar74._12_4_ + auVar66._12_4_;
      auVar81._16_4_ = auVar99._16_4_ * auVar74._16_4_ + auVar66._16_4_;
      auVar81._20_4_ = auVar99._20_4_ * auVar74._20_4_ + auVar66._20_4_;
      auVar81._24_4_ = auVar99._24_4_ * auVar74._24_4_ + auVar66._24_4_;
      auVar81._28_4_ = auVar99._28_4_ * auVar74._28_4_ + auVar66._28_4_;
      local_420 = vmaskmovps_avx(auVar95,auVar75);
      local_400 = vmaskmovps_avx(auVar95,auVar104);
      break;
    default:
      goto switchD_140ae3570_caseD_4;
    }
    local_3e0 = vmaskmovps_avx(auVar95,auVar81);
  }
  else {
switchD_140ae3570_caseD_4:
    auVar64._0_12_ = ZEXT812(0);
    auVar64._12_4_ = 0;
    auVar73 = ZEXT1632(auVar64);
    local_420 = vmaskmovps_avx(auVar95,ZEXT1632(auVar64));
    local_400 = vmaskmovps_avx(auVar95,ZEXT1632(auVar64));
LAB_140ae3821:
    local_3e0 = vmaskmovps_avx(auVar95,auVar73);
  }
  auVar74 = vsubps_avx(local_420,local_500);
  auVar100 = vsubps_avx(local_400,local_4e0);
  auVar57 = vsubps_avx(local_3e0,local_4c0._0_32_);
  fVar152 = auVar139._0_4_;
  auVar76._0_4_ = fVar152 * auVar74._0_4_ + local_500._0_4_;
  fVar157 = auVar139._4_4_;
  auVar76._4_4_ = fVar157 * auVar74._4_4_ + local_500._4_4_;
  fVar158 = auVar139._8_4_;
  auVar76._8_4_ = fVar158 * auVar74._8_4_ + local_500._8_4_;
  fVar159 = auVar139._12_4_;
  auVar76._12_4_ = fVar159 * auVar74._12_4_ + local_500._12_4_;
  fVar160 = auVar139._16_4_;
  auVar76._16_4_ = fVar160 * auVar74._16_4_ + local_500._16_4_;
  fVar161 = auVar139._20_4_;
  auVar76._20_4_ = fVar161 * auVar74._20_4_ + local_500._20_4_;
  fVar162 = auVar139._24_4_;
  auVar76._24_4_ = fVar162 * auVar74._24_4_ + local_500._24_4_;
  fVar163 = auVar139._28_4_;
  auVar76._28_4_ = fVar163 * auVar74._28_4_ + local_500._28_4_;
  auVar83._0_4_ = fVar152 * auVar100._0_4_ + local_4e0._0_4_;
  auVar83._4_4_ = fVar157 * auVar100._4_4_ + local_4e0._4_4_;
  auVar83._8_4_ = fVar158 * auVar100._8_4_ + local_4e0._8_4_;
  auVar83._12_4_ = fVar159 * auVar100._12_4_ + local_4e0._12_4_;
  auVar83._16_4_ = fVar160 * auVar100._16_4_ + local_4e0._16_4_;
  auVar83._20_4_ = fVar161 * auVar100._20_4_ + local_4e0._20_4_;
  auVar83._24_4_ = fVar162 * auVar100._24_4_ + local_4e0._24_4_;
  auVar83._28_4_ = fVar163 * auVar100._28_4_ + local_4e0._28_4_;
  auVar93._0_4_ = fVar152 * auVar57._0_4_ + local_4c0._0_4_;
  auVar93._4_4_ = fVar157 * auVar57._4_4_ + local_4c0._4_4_;
  auVar93._8_4_ = fVar158 * auVar57._8_4_ + local_4c0._8_4_;
  auVar93._12_4_ = fVar159 * auVar57._12_4_ + local_4c0._12_4_;
  auVar93._16_4_ = fVar160 * auVar57._16_4_ + local_4c0._16_4_;
  auVar93._20_4_ = fVar161 * auVar57._20_4_ + local_4c0._20_4_;
  auVar93._24_4_ = fVar162 * auVar57._24_4_ + local_4c0._24_4_;
  auVar93._28_4_ = fVar163 * auVar57._28_4_ + local_4c0._28_4_;
  local_500 = vmaskmovps_avx(auVar95,auVar76);
  local_4e0 = vmaskmovps_avx(auVar95,auVar83);
  local_4c0._0_32_ = vmaskmovps_avx(auVar95,auVar93);
LAB_140ae39e0:
  auVar74 = vperm2f128_avx(local_500,local_4e0,0x20);
  auVar100 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                          ZEXT1632(local_4c0._0_16_));
  auVar139 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                          auVar74);
  local_200 = vblendps_avx(auVar139,auVar100,0xcc);
  auVar100 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                          ZEXT1632(local_4c0._0_16_));
  auVar74 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                         auVar74);
  local_1e0 = vblendps_avx(auVar74,auVar100,0xcc);
  auVar74 = vperm2f128_avx(local_500,local_4e0,0x31);
  auVar100 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                          ZEXT1632(local_4c0._16_16_));
  auVar139 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                          auVar74);
  local_1c0 = vblendps_avx(auVar139,auVar100,0xcc);
  auVar100 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                          ZEXT1632(local_4c0._16_16_));
  auVar74 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                         auVar74);
  local_1a0 = vblendps_avx(auVar74,auVar100,0xcc);
  uVar48 = vmovmskps_avx(auVar145);
  uVar50 = (ulonglong)uVar48;
  do {
    uVar48 = 0;
    for (uVar43 = uVar50; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x8000000000000000) {
      uVar48 = uVar48 + 1;
    }
    bVar1 = (byte)uVar48 & 0x3f;
    auVar74 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar48 << 4)));
    *(undefined1 (*) [32])
     (param_1 + 0x20 + (longlong)*(int *)(local_240 + (ulonglong)(uVar48 & 7) * 4) * 0x60) = auVar74
    ;
    uVar50 = uVar50 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
  } while (uVar50 != 0);
  return;
}

// GetConstantKeyLerpPoseScales_avx2 @ 140ae3b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseScales_avx2
               (longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,longlong param_5
               ,undefined8 param_6,float param_7,char param_8,uint param_9,uint param_10)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar37;
  int iVar38;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
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
  ulonglong uVar39;
  undefined4 uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  ulonglong uVar47;
  int iVar48;
  int iVar49;
  undefined4 uVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  undefined4 uVar54;
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
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
  undefined1 in_ZMM4 [64];
  uint uVar100;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 in_ZMM7 [64];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 in_ZMM8 [64];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 in_ZMM11 [64];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  float fVar131;
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  undefined1 in_ZMM13 [64];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 in_ZMM15 [64];
  undefined1 auVar150 [64];
  undefined1 local_540 [32];
  undefined1 local_520 [32];
  undefined1 local_500 [160];
  float local_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  undefined1 local_440 [32];
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
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
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_98 [16];
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  
  uVar40 = __real_00000001;
  uVar50 = __real_00000018;
  iVar43 = __real_00000004;
  auVar81 = in_ZMM11._0_32_;
  local_58 = in_ZMM15._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_c8 = in_ZMM8._0_16_;
  local_d8 = in_ZMM7._0_16_;
  local_e8 = in_ZMM6._0_16_;
  local_3e0._4_4_ =
       *(int *)(&DAT_151c6b740 + (longlong)(int)param_9 * 4) *
       *(int *)(&DAT_151c6b720 + (longlong)(int)param_9 * 4);
  uVar44 = param_10 + 7;
  if (-1 < (int)param_10) {
    uVar44 = param_10;
  }
  if ((int)(uVar44 & 0xfffffff8) < 1) {
    iVar53 = 0;
    if ((int)param_10 < 1) {
      return;
    }
  }
  else {
    auVar55 = vpslld_avx(ZEXT416(param_4),2);
    uVar54 = auVar55._0_4_;
    auVar142._4_4_ = uVar54;
    auVar142._0_4_ = uVar54;
    auVar142._8_4_ = uVar54;
    auVar142._12_4_ = uVar54;
    auVar142._16_4_ = uVar54;
    auVar142._20_4_ = uVar54;
    auVar142._24_4_ = uVar54;
    auVar142._28_4_ = uVar54;
    uVar41 = -(uint)(param_9 == 3);
    local_3e0._0_4_ = local_3e0._4_4_;
    local_3e0._8_4_ = local_3e0._4_4_;
    local_3e0._12_4_ = local_3e0._4_4_;
    local_3e0._16_4_ = local_3e0._4_4_;
    local_3e0._20_4_ = local_3e0._4_4_;
    local_3e0._24_4_ = local_3e0._4_4_;
    local_3e0._28_4_ = local_3e0._4_4_;
    iVar53 = 0;
    auVar115._4_4_ = __real_00000004;
    auVar115._0_4_ = __real_00000004;
    auVar115._8_4_ = __real_00000004;
    auVar115._12_4_ = __real_00000004;
    auVar115._16_4_ = __real_00000004;
    auVar115._20_4_ = __real_00000004;
    auVar115._24_4_ = __real_00000004;
    auVar115._28_4_ = __real_00000004;
    auVar81 = vpcmpeqd_avx2(in_ZMM15._0_32_,in_ZMM15._0_32_);
    auVar150 = ZEXT3264(auVar81);
    do {
      auVar74 = in_ZMM6._0_32_;
      auVar81 = in_ZMM11._0_32_;
      auVar93 = in_ZMM7._0_32_;
      auVar112 = in_ZMM8._0_32_;
      auVar97._4_4_ = iVar53;
      auVar97._0_4_ = iVar53;
      auVar97._8_4_ = iVar53;
      auVar97._12_4_ = iVar53;
      auVar97._16_4_ = iVar53;
      auVar97._20_4_ = iVar53;
      auVar97._24_4_ = iVar53;
      auVar97._28_4_ = iVar53;
      auVar70 = vpslld_avx2(auVar97,3);
      auVar77 = vpor_avx2(auVar70,
                          ___ymm_0000003800000030000000280000002000000018000000100000000800000000);
      auVar97 = vpmovzxdq_avx2(auVar77._16_16_);
      auVar70 = vpor_avx2(auVar70,
                          ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004);
      vpmovzxdq_avx2(auVar70._16_16_);
      auVar70 = vpmovzxdq_avx2(auVar70._0_16_);
      auVar55 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
      auVar57 = vpgatherqd((undefined1  [16])0x0,auVar55);
      auVar55 = vpcmpeqd_avx(auVar70._0_16_,auVar70._0_16_);
      auVar55 = vpgatherqd((undefined1  [16])0x0,auVar55);
      auVar90._16_16_ = ZEXT116(1) * auVar55;
      auVar90._0_16_ = ZEXT116(0) * auVar55 | ZEXT116(1) * auVar57;
      vpmulld_avx2(auVar90,auVar142);
      auVar70 = vpcmpeqd_avx2(ZEXT1632(auVar57),ZEXT1632(auVar57));
      auVar90 = vpgatherdd(ZEXT1632((undefined1  [16])0x0),auVar70);
      auVar77 = vpmovzxdq_avx2(auVar77._0_16_);
      auVar70._4_4_ = uVar40;
      auVar70._0_4_ = uVar40;
      auVar70._8_4_ = uVar40;
      auVar70._12_4_ = uVar40;
      auVar70._16_4_ = uVar40;
      auVar70._20_4_ = uVar40;
      auVar70._24_4_ = uVar40;
      auVar70._28_4_ = uVar40;
      auVar70 = vpcmpgtd_avx2(auVar90,auVar70);
      uVar42 = vmovmskps_avx(auVar70);
      uVar100 = auVar70._0_4_;
      uVar105 = auVar70._4_4_;
      uVar106 = auVar70._8_4_;
      uVar107 = auVar70._12_4_;
      uVar108 = auVar70._16_4_;
      uVar109 = auVar70._20_4_;
      uVar110 = auVar70._24_4_;
      uVar111 = auVar70._28_4_;
      auVar70 = auVar150._0_32_;
      auVar55 = auVar90._0_16_;
      if ((uVar42 ^ 0xff) == 0) {
        auVar123 = auVar70 ^ SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        if (0.0 < param_7) goto LAB_140ae3d92;
LAB_140ae3e03:
        auVar74 = ZEXT1232(ZEXT812(0));
        auVar91 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar90 = vblendvps_avx(auVar112,auVar91,auVar123);
        in_ZMM8 = ZEXT3264(auVar90);
        auVar90 = vblendvps_avx(auVar93,auVar91,auVar123);
        in_ZMM7 = ZEXT3264(auVar90);
LAB_140ae3e25:
        auVar55 = auVar91._0_16_;
        auVar81 = vblendvps_avx(auVar81,auVar91,auVar123);
      }
      else {
        auVar112._0_4_ = in_ZMM8._0_4_ & uVar100;
        auVar112._4_4_ = in_ZMM8._4_4_ & uVar105;
        auVar112._8_4_ = in_ZMM8._8_4_ & uVar106;
        auVar112._12_4_ = in_ZMM8._12_4_ & uVar107;
        auVar112._16_4_ = in_ZMM8._16_4_ & uVar108;
        auVar112._20_4_ = in_ZMM8._20_4_ & uVar109;
        auVar112._24_4_ = in_ZMM8._24_4_ & uVar110;
        auVar112._28_4_ = in_ZMM8._28_4_ & uVar111;
        in_ZMM8 = ZEXT3264(auVar112);
        auVar93._0_4_ = uVar100 & in_ZMM7._0_4_;
        auVar93._4_4_ = uVar105 & in_ZMM7._4_4_;
        auVar93._8_4_ = uVar106 & in_ZMM7._8_4_;
        auVar93._12_4_ = uVar107 & in_ZMM7._12_4_;
        auVar93._16_4_ = uVar108 & in_ZMM7._16_4_;
        auVar93._20_4_ = uVar109 & in_ZMM7._20_4_;
        auVar93._24_4_ = uVar110 & in_ZMM7._24_4_;
        auVar93._28_4_ = uVar111 & in_ZMM7._28_4_;
        in_ZMM7 = ZEXT3264(auVar93);
        auVar81._0_4_ = in_ZMM11._0_4_ & uVar100;
        auVar81._4_4_ = in_ZMM11._4_4_ & uVar105;
        auVar81._8_4_ = in_ZMM11._8_4_ & uVar106;
        auVar81._12_4_ = in_ZMM11._12_4_ & uVar107;
        auVar81._16_4_ = in_ZMM11._16_4_ & uVar108;
        auVar81._20_4_ = in_ZMM11._20_4_ & uVar109;
        auVar81._24_4_ = in_ZMM11._24_4_ & uVar110;
        auVar81._28_4_ = in_ZMM11._28_4_ & uVar111;
        if ((char)(uVar42 ^ 0xff) != -1) {
          auVar123._4_4_ = __real_00000002;
          auVar123._0_4_ = __real_00000002;
          auVar123._8_4_ = __real_00000002;
          auVar123._12_4_ = __real_00000002;
          auVar123._16_4_ = __real_00000002;
          auVar123._20_4_ = __real_00000002;
          auVar123._24_4_ = __real_00000002;
          auVar123._28_4_ = __real_00000002;
          auVar123 = vpcmpgtd_avx2(auVar123,auVar90);
          auVar123 = auVar70 ^ auVar123;
          if (param_7 <= 0.0) goto LAB_140ae3e03;
LAB_140ae3d92:
          auVar74._0_4_ = auVar150._0_4_ + auVar90._0_4_;
          auVar74._4_4_ = auVar150._4_4_ + auVar90._4_4_;
          auVar74._8_4_ = auVar150._8_4_ + auVar90._8_4_;
          auVar74._12_4_ = auVar150._12_4_ + auVar90._12_4_;
          auVar74._16_4_ = auVar150._16_4_ + auVar90._16_4_;
          auVar74._20_4_ = auVar150._20_4_ + auVar90._20_4_;
          auVar74._24_4_ = auVar150._24_4_ + auVar90._24_4_;
          auVar74._28_4_ = auVar150._28_4_ + auVar90._28_4_;
          if (__real_3f800000 <= param_7) {
            auVar90 = vblendvps_avx(auVar112,auVar74,auVar123);
            in_ZMM8 = ZEXT3264(auVar90);
            auVar90 = vblendvps_avx(auVar93,auVar74,auVar123);
            in_ZMM7 = ZEXT3264(auVar90);
            auVar91 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          else {
            auVar90 = vcvtdq2ps_avx(auVar74);
            auVar128._0_4_ = auVar90._0_4_ * param_7;
            auVar128._4_4_ = auVar90._4_4_ * param_7;
            auVar128._8_4_ = auVar90._8_4_ * param_7;
            auVar128._12_4_ = auVar90._12_4_ * param_7;
            auVar128._16_4_ = auVar90._16_4_ * param_7;
            auVar128._20_4_ = auVar90._20_4_ * param_7;
            auVar128._24_4_ = auVar90._24_4_ * param_7;
            auVar128._28_4_ = auVar90._28_4_ * param_7;
            auVar90 = vroundps_avx(auVar128,9);
            auVar91 = SUB6432(ZEXT864(0),0) << 0x20;
            if (param_8 != '\x01') {
              auVar91 = vsubps_avx(auVar128,auVar90);
            }
            auVar133._0_4_ = (int)auVar90._0_4_;
            auVar133._4_4_ = (int)auVar90._4_4_;
            auVar133._8_4_ = (int)auVar90._8_4_;
            auVar133._12_4_ = (int)auVar90._12_4_;
            auVar133._16_4_ = (int)auVar90._16_4_;
            auVar133._20_4_ = (int)auVar90._20_4_;
            auVar133._24_4_ = (int)auVar90._24_4_;
            auVar133._28_4_ = (int)auVar90._28_4_;
            auVar90 = vpminsd_avx2(auVar133,auVar74);
            auVar90 = vblendvps_avx(auVar112,auVar90,auVar123);
            in_ZMM8 = ZEXT3264(auVar90);
            auVar90 = vpsubd_avx2(auVar90,auVar70);
            auVar74 = vpminsd_avx2(auVar90,auVar74);
            auVar90 = vblendvps_avx(auVar93,auVar74,auVar123);
            in_ZMM7 = ZEXT3264(auVar90);
          }
          goto LAB_140ae3e25;
        }
      }
      auVar55 = vpcmpeqd_avx(auVar55,auVar55);
      auVar57 = vpgatherqd((undefined1  [16])0x0,auVar55);
      auVar55 = vpcmpeqd_avx(auVar77._0_16_,auVar77._0_16_);
      auVar58._0_12_ = ZEXT812(0);
      auVar58._12_4_ = 0;
      auVar55 = vpgatherqd(auVar58,auVar55);
      auVar97 = vpcmpeqd_avx2(auVar97,auVar97);
      auVar90 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar97);
      auVar91._0_4_ = uVar100 & uVar41;
      auVar91._4_4_ = uVar105 & uVar41;
      auVar91._8_4_ = uVar106 & uVar41;
      auVar91._12_4_ = uVar107 & uVar41;
      auVar91._16_4_ = uVar108 & uVar41;
      auVar91._20_4_ = uVar109 & uVar41;
      auVar91._24_4_ = uVar110 & uVar41;
      auVar91._28_4_ = uVar111 & uVar41;
      auVar77._4_4_ = uVar50;
      auVar77._0_4_ = uVar50;
      auVar77._8_4_ = uVar50;
      auVar77._12_4_ = uVar50;
      auVar77._16_4_ = uVar50;
      auVar77._20_4_ = uVar50;
      auVar77._24_4_ = uVar50;
      auVar77._28_4_ = uVar50;
      auVar97 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar77,auVar91);
      if (param_9 < 7) {
        auVar77 = vpmulld_avx2(in_ZMM8._0_32_,local_3e0);
        switch(param_9) {
        case 0:
        case 1:
          auVar70 = vpcmpeqd_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                                  SUB6432(ZEXT1664((undefined1  [16])0x0),0));
          auVar73 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
          auVar74 = vpcmpeqd_avx2(auVar74,auVar74);
          auVar132 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar92._4_4_ = __real_00000008;
          auVar92._0_4_ = __real_00000008;
          auVar92._8_4_ = __real_00000008;
          auVar92._12_4_ = __real_00000008;
          auVar92._16_4_ = __real_00000008;
          auVar92._20_4_ = __real_00000008;
          auVar92._24_4_ = __real_00000008;
          auVar92._28_4_ = __real_00000008;
          auVar74 = vpcmpeqd_avx2(auVar92,auVar92);
          auVar149 = vgatherdps(ZEXT832(0) << 0x20,auVar74);
          break;
        case 2:
          iVar45 = auVar90._0_4_ + auVar97._0_4_ + auVar77._0_4_;
          iVar46 = auVar90._4_4_ + auVar97._4_4_ + auVar77._4_4_;
          iVar48 = auVar90._8_4_ + auVar97._8_4_ + auVar77._8_4_;
          iVar49 = auVar90._12_4_ + auVar97._12_4_ + auVar77._12_4_;
          iVar51 = auVar90._16_4_ + auVar97._16_4_ + auVar77._16_4_;
          iVar52 = auVar90._20_4_ + auVar97._20_4_ + auVar77._20_4_;
          iVar37 = auVar90._24_4_ + auVar97._24_4_ + auVar77._24_4_;
          iVar38 = auVar90._28_4_ + auVar97._28_4_ + auVar77._28_4_;
          auVar58 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + iVar45)),
                                (uint)*(ushort *)(param_5 + iVar46),1);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar48),2);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar49),3);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar51),4);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar52),5);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar37),6);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar38),7);
          auVar56 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + (iVar45 + __real_00000002))),
                                (uint)*(ushort *)(param_5 + (iVar46 + __real_00000002)),1);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar48 + __real_00000002)),2);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar49 + __real_00000002)),3);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar51 + __real_00000002)),4);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar52 + __real_00000002)),5);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar37 + __real_00000002)),6);
          auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + (iVar38 + __real_00000002)),7);
          auVar2 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + (iVar43 + iVar45))),
                               (uint)*(ushort *)(param_5 + (iVar43 + iVar46)),1);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar48)),2);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar49)),3);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar51)),4);
          auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar52)),5);
          auVar74 = vpmovzxwd_avx2(auVar58);
          auVar3._0_4_ = auVar74._0_4_ + __real_ffff8001;
          auVar3._4_4_ = auVar74._4_4_ + __real_ffff8001;
          auVar3._8_4_ = auVar74._8_4_ + __real_ffff8001;
          auVar3._12_4_ = auVar74._12_4_ + __real_ffff8001;
          auVar3._16_4_ = auVar74._16_4_ + __real_ffff8001;
          auVar3._20_4_ = auVar74._20_4_ + __real_ffff8001;
          auVar3._24_4_ = auVar74._24_4_ + __real_ffff8001;
          auVar3._28_4_ = auVar74._28_4_ + __real_ffff8001;
          auVar74 = vcvtdq2ps_avx(auVar3);
          auVar122._4_4_ = __real_46fffe00;
          auVar122._0_4_ = __real_46fffe00;
          auVar122._8_4_ = __real_46fffe00;
          auVar122._12_4_ = __real_46fffe00;
          auVar122._16_4_ = __real_46fffe00;
          auVar122._20_4_ = __real_46fffe00;
          auVar122._24_4_ = __real_46fffe00;
          auVar122._28_4_ = __real_46fffe00;
          auVar70 = vdivps_avx(auVar74,auVar122);
          auVar58 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + (iVar43 + iVar37)),6);
          auVar74 = vpmovzxwd_avx2(auVar56);
          auVar4._0_4_ = auVar74._0_4_ + __real_ffff8001;
          auVar4._4_4_ = auVar74._4_4_ + __real_ffff8001;
          auVar4._8_4_ = auVar74._8_4_ + __real_ffff8001;
          auVar4._12_4_ = auVar74._12_4_ + __real_ffff8001;
          auVar4._16_4_ = auVar74._16_4_ + __real_ffff8001;
          auVar4._20_4_ = auVar74._20_4_ + __real_ffff8001;
          auVar4._24_4_ = auVar74._24_4_ + __real_ffff8001;
          auVar4._28_4_ = auVar74._28_4_ + __real_ffff8001;
          auVar74 = vcvtdq2ps_avx(auVar4);
          auVar77 = vdivps_avx(auVar74,auVar122);
          auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + (iVar43 + iVar38)),7);
          auVar74 = vpmovzxwd_avx2(auVar58);
          auVar5._0_4_ = auVar74._0_4_ + __real_ffff8001;
          auVar5._4_4_ = auVar74._4_4_ + __real_ffff8001;
          auVar5._8_4_ = auVar74._8_4_ + __real_ffff8001;
          auVar5._12_4_ = auVar74._12_4_ + __real_ffff8001;
          auVar5._16_4_ = auVar74._16_4_ + __real_ffff8001;
          auVar5._20_4_ = auVar74._20_4_ + __real_ffff8001;
          auVar5._24_4_ = auVar74._24_4_ + __real_ffff8001;
          auVar5._28_4_ = auVar74._28_4_ + __real_ffff8001;
          auVar74 = vcvtdq2ps_avx(auVar5);
          auVar74 = vdivps_avx(auVar74,auVar122);
          auVar73._0_4_ = __real_43000000 * auVar70._0_4_;
          auVar73._4_4_ = __real_43000000 * auVar70._4_4_;
          auVar73._8_4_ = __real_43000000 * auVar70._8_4_;
          auVar73._12_4_ = __real_43000000 * auVar70._12_4_;
          auVar73._16_4_ = __real_43000000 * auVar70._16_4_;
          auVar73._20_4_ = __real_43000000 * auVar70._20_4_;
          auVar73._24_4_ = __real_43000000 * auVar70._24_4_;
          auVar73._28_4_ = __real_43000000 * auVar70._28_4_;
          auVar132._0_4_ = __real_43000000 * auVar77._0_4_;
          auVar132._4_4_ = __real_43000000 * auVar77._4_4_;
          auVar132._8_4_ = __real_43000000 * auVar77._8_4_;
          auVar132._12_4_ = __real_43000000 * auVar77._12_4_;
          auVar132._16_4_ = __real_43000000 * auVar77._16_4_;
          auVar132._20_4_ = __real_43000000 * auVar77._20_4_;
          auVar132._24_4_ = __real_43000000 * auVar77._24_4_;
          auVar132._28_4_ = __real_43000000 * auVar77._28_4_;
          auVar149._0_4_ = __real_43000000 * auVar74._0_4_;
          auVar149._4_4_ = __real_43000000 * auVar74._4_4_;
          auVar149._8_4_ = __real_43000000 * auVar74._8_4_;
          auVar149._12_4_ = __real_43000000 * auVar74._12_4_;
          auVar149._16_4_ = __real_43000000 * auVar74._16_4_;
          auVar149._20_4_ = __real_43000000 * auVar74._20_4_;
          auVar149._24_4_ = __real_43000000 * auVar74._24_4_;
          auVar149._28_4_ = __real_43000000 * auVar74._28_4_;
          break;
        case 3:
          auVar77 = vpcmpeqd_avx2(auVar91,auVar91);
          auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar77);
          auVar74 = vpcmpeqd_avx2(auVar74,auVar74);
          auVar77 = vgatherdps(ZEXT832(0),auVar74);
          auVar74 = vpcmpeqd_avx2(auVar115,auVar115);
          auVar93 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar74 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar128 = vgatherdps(ZEXT432(0) << 0x20,auVar74);
          auVar74 = vpcmpeqd_avx2(in_ZMM13._0_32_,in_ZMM13._0_32_);
          auVar112 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar74 = vpcmpeqd_avx2(auVar70,auVar70);
          auVar123 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar74 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
          auVar133 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
          auVar149 = vpsrld_avx2(auVar133,0x15);
          auVar74 = vpsrld_avx2(auVar133,10);
          auVar143._4_4_ = __real_000007ff;
          auVar143._0_4_ = __real_000007ff;
          auVar143._8_4_ = __real_000007ff;
          auVar143._12_4_ = __real_000007ff;
          auVar143._16_4_ = __real_000007ff;
          auVar143._20_4_ = __real_000007ff;
          auVar143._24_4_ = __real_000007ff;
          auVar143._28_4_ = __real_000007ff;
          auVar70 = vpand_avx2(auVar143,auVar74);
          auVar75._4_4_ = __real_000003ff;
          auVar75._0_4_ = __real_000003ff;
          auVar75._8_4_ = __real_000003ff;
          auVar75._12_4_ = __real_000003ff;
          auVar75._16_4_ = __real_000003ff;
          auVar75._20_4_ = __real_000003ff;
          auVar75._24_4_ = __real_000003ff;
          auVar75._28_4_ = __real_000003ff;
          auVar74 = vpand_avx2(auVar133,auVar75);
          auVar6._0_4_ = __real_fffffe01 + auVar74._0_4_;
          auVar6._4_4_ = __real_fffffe01 + auVar74._4_4_;
          auVar6._8_4_ = __real_fffffe01 + auVar74._8_4_;
          auVar6._12_4_ = __real_fffffe01 + auVar74._12_4_;
          auVar6._16_4_ = __real_fffffe01 + auVar74._16_4_;
          auVar6._20_4_ = __real_fffffe01 + auVar74._20_4_;
          auVar6._24_4_ = __real_fffffe01 + auVar74._24_4_;
          auVar6._28_4_ = __real_fffffe01 + auVar74._28_4_;
          auVar74 = vcvtdq2ps_avx(auVar6);
          auVar134._4_4_ = __real_43ff8000;
          auVar134._0_4_ = __real_43ff8000;
          auVar134._8_4_ = __real_43ff8000;
          auVar134._12_4_ = __real_43ff8000;
          auVar134._16_4_ = __real_43ff8000;
          auVar134._20_4_ = __real_43ff8000;
          auVar134._24_4_ = __real_43ff8000;
          auVar134._28_4_ = __real_43ff8000;
          auVar74 = vdivps_avx(auVar74,auVar134);
          auVar73._0_4_ = auVar128._0_4_ * auVar74._0_4_ + auVar91._0_4_;
          auVar73._4_4_ = auVar128._4_4_ * auVar74._4_4_ + auVar91._4_4_;
          auVar73._8_4_ = auVar128._8_4_ * auVar74._8_4_ + auVar91._8_4_;
          auVar73._12_4_ = auVar128._12_4_ * auVar74._12_4_ + auVar91._12_4_;
          auVar73._16_4_ = auVar128._16_4_ * auVar74._16_4_ + auVar91._16_4_;
          auVar73._20_4_ = auVar128._20_4_ * auVar74._20_4_ + auVar91._20_4_;
          auVar73._24_4_ = auVar128._24_4_ * auVar74._24_4_ + auVar91._24_4_;
          auVar73._28_4_ = auVar128._28_4_ * auVar74._28_4_ + auVar91._28_4_;
          auVar7._0_4_ = auVar70._0_4_ + __real_fffffc01;
          auVar7._4_4_ = auVar70._4_4_ + __real_fffffc01;
          auVar7._8_4_ = auVar70._8_4_ + __real_fffffc01;
          auVar7._12_4_ = auVar70._12_4_ + __real_fffffc01;
          auVar7._16_4_ = auVar70._16_4_ + __real_fffffc01;
          auVar7._20_4_ = auVar70._20_4_ + __real_fffffc01;
          auVar7._24_4_ = auVar70._24_4_ + __real_fffffc01;
          auVar7._28_4_ = auVar70._28_4_ + __real_fffffc01;
          auVar74 = vcvtdq2ps_avx(auVar7);
          auVar144._4_4_ = __real_447fc000;
          auVar144._0_4_ = __real_447fc000;
          auVar144._8_4_ = __real_447fc000;
          auVar144._12_4_ = __real_447fc000;
          auVar144._16_4_ = __real_447fc000;
          auVar144._20_4_ = __real_447fc000;
          auVar144._24_4_ = __real_447fc000;
          auVar144._28_4_ = __real_447fc000;
          auVar70 = vdivps_avx(auVar74,auVar144);
          auVar8._0_4_ = auVar149._0_4_ + __real_fffffc01;
          auVar8._4_4_ = auVar149._4_4_ + __real_fffffc01;
          auVar8._8_4_ = auVar149._8_4_ + __real_fffffc01;
          auVar8._12_4_ = auVar149._12_4_ + __real_fffffc01;
          auVar8._16_4_ = auVar149._16_4_ + __real_fffffc01;
          auVar8._20_4_ = auVar149._20_4_ + __real_fffffc01;
          auVar8._24_4_ = auVar149._24_4_ + __real_fffffc01;
          auVar8._28_4_ = auVar149._28_4_ + __real_fffffc01;
          auVar74 = vpcmpeqd_avx2(auVar149,auVar149);
          auVar150 = ZEXT3264(auVar74);
          auVar74 = vcvtdq2ps_avx(auVar8);
          auVar74 = vdivps_avx(auVar74,auVar144);
          auVar132._0_4_ = auVar112._0_4_ * auVar70._0_4_ + auVar77._0_4_;
          auVar132._4_4_ = auVar112._4_4_ * auVar70._4_4_ + auVar77._4_4_;
          auVar132._8_4_ = auVar112._8_4_ * auVar70._8_4_ + auVar77._8_4_;
          auVar132._12_4_ = auVar112._12_4_ * auVar70._12_4_ + auVar77._12_4_;
          auVar132._16_4_ = auVar112._16_4_ * auVar70._16_4_ + auVar77._16_4_;
          auVar132._20_4_ = auVar112._20_4_ * auVar70._20_4_ + auVar77._20_4_;
          auVar132._24_4_ = auVar112._24_4_ * auVar70._24_4_ + auVar77._24_4_;
          auVar132._28_4_ = auVar112._28_4_ * auVar70._28_4_ + auVar77._28_4_;
          auVar149._0_4_ = auVar123._0_4_ * auVar74._0_4_ + auVar93._0_4_;
          auVar149._4_4_ = auVar123._4_4_ * auVar74._4_4_ + auVar93._4_4_;
          auVar149._8_4_ = auVar123._8_4_ * auVar74._8_4_ + auVar93._8_4_;
          auVar149._12_4_ = auVar123._12_4_ * auVar74._12_4_ + auVar93._12_4_;
          auVar149._16_4_ = auVar123._16_4_ * auVar74._16_4_ + auVar93._16_4_;
          auVar149._20_4_ = auVar123._20_4_ * auVar74._20_4_ + auVar93._20_4_;
          auVar149._24_4_ = auVar123._24_4_ * auVar74._24_4_ + auVar93._24_4_;
          auVar149._28_4_ = auVar123._28_4_ * auVar74._28_4_ + auVar93._28_4_;
          break;
        default:
          goto switchD_140ae3e95_caseD_4;
        }
        in_ZMM13 = ZEXT3264(auVar132);
        auVar59._0_4_ = in_ZMM8._0_4_ ^ in_ZMM7._0_4_;
        auVar59._4_4_ = in_ZMM8._4_4_ ^ in_ZMM7._4_4_;
        auVar59._8_4_ = in_ZMM8._8_4_ ^ in_ZMM7._8_4_;
        auVar59._12_4_ = in_ZMM8._12_4_ ^ in_ZMM7._12_4_;
        auVar59._16_4_ = in_ZMM8._16_4_ ^ in_ZMM7._16_4_;
        auVar59._20_4_ = in_ZMM8._20_4_ ^ in_ZMM7._20_4_;
        auVar59._24_4_ = in_ZMM8._24_4_ ^ in_ZMM7._24_4_;
        auVar59._28_4_ = in_ZMM8._28_4_ ^ in_ZMM7._28_4_;
        auVar70 = auVar149;
        auVar74 = auVar73;
        auVar77 = auVar132;
        auVar93 = auVar149;
      }
      else {
switchD_140ae3e95_caseD_4:
        auVar149 = ZEXT1232(ZEXT412(0)) << 0x20;
        auVar73 = ZEXT1232(ZEXT412(0)) << 0x20;
        in_ZMM13 = ZEXT1664((undefined1  [16])0x0);
        auVar59._0_4_ = in_ZMM8._0_4_ ^ in_ZMM7._0_4_;
        auVar59._4_4_ = in_ZMM8._4_4_ ^ in_ZMM7._4_4_;
        auVar59._8_4_ = in_ZMM8._8_4_ ^ in_ZMM7._8_4_;
        auVar59._12_4_ = in_ZMM8._12_4_ ^ in_ZMM7._12_4_;
        auVar59._16_4_ = in_ZMM8._16_4_ ^ in_ZMM7._16_4_;
        auVar59._20_4_ = in_ZMM8._20_4_ ^ in_ZMM7._20_4_;
        auVar59._24_4_ = in_ZMM8._24_4_ ^ in_ZMM7._24_4_;
        auVar59._28_4_ = in_ZMM8._28_4_ ^ in_ZMM7._28_4_;
        auVar132 = auVar149;
        auVar70 = ZEXT832(0) << 0x20;
        auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar77 = in_ZMM13._0_32_;
        auVar93 = ZEXT832(0) << 0x20;
      }
      if (auVar59 != (undefined1  [32])0x0) {
        auVar70 = vpcmpeqd_avx2(in_ZMM8._0_32_,in_ZMM7._0_32_);
        auVar112 = vpcmpeqd_avx2(auVar59,auVar59);
        auVar112 = auVar70 ^ auVar112;
        if (param_9 < 7) {
          auVar123 = vpmulld_avx2(in_ZMM7._0_32_,local_3e0);
          switch(param_9) {
          case 0:
          case 1:
            auVar70 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar90 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar97 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            local_380 = vmaskmovps_avx(auVar112,auVar70);
            local_360 = vmaskmovps_avx(auVar112,auVar90);
            local_340 = vmaskmovps_avx(auVar112,auVar97);
            break;
          case 2:
            auVar9._0_4_ = auVar123._0_4_ + auVar90._0_4_ + auVar97._0_4_;
            auVar9._4_4_ = auVar123._4_4_ + auVar90._4_4_ + auVar97._4_4_;
            auVar9._8_4_ = auVar123._8_4_ + auVar90._8_4_ + auVar97._8_4_;
            auVar9._12_4_ = auVar123._12_4_ + auVar90._12_4_ + auVar97._12_4_;
            auVar9._16_4_ = auVar123._16_4_ + auVar90._16_4_ + auVar97._16_4_;
            auVar9._20_4_ = auVar123._20_4_ + auVar90._20_4_ + auVar97._20_4_;
            auVar9._24_4_ = auVar123._24_4_ + auVar90._24_4_ + auVar97._24_4_;
            auVar9._28_4_ = auVar123._28_4_ + auVar90._28_4_ + auVar97._28_4_;
            auVar74 = vpandn_avx2(auVar70,auVar9);
            auVar58 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar74._0_4_)),
                                  (uint)*(ushort *)(param_5 + auVar74._4_4_),1);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._8_4_),2);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._12_4_),3);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._16_4_),4);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._20_4_),5);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._24_4_),6);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar74._28_4_),7);
            auVar10._0_4_ = auVar9._0_4_ + __real_00000002;
            auVar10._4_4_ = auVar9._4_4_ + __real_00000002;
            auVar10._8_4_ = auVar9._8_4_ + __real_00000002;
            auVar10._12_4_ = auVar9._12_4_ + __real_00000002;
            auVar10._16_4_ = auVar9._16_4_ + __real_00000002;
            auVar10._20_4_ = auVar9._20_4_ + __real_00000002;
            auVar10._24_4_ = auVar9._24_4_ + __real_00000002;
            auVar10._28_4_ = auVar9._28_4_ + __real_00000002;
            auVar74 = vpandn_avx2(auVar70,auVar10);
            auVar56 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar74._0_4_)),
                                  (uint)*(ushort *)(param_5 + auVar74._4_4_),1);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._8_4_),2);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._12_4_),3);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._16_4_),4);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._20_4_),5);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._24_4_),6);
            auVar56 = vpinsrw_avx(auVar56,(uint)*(ushort *)(param_5 + auVar74._28_4_),7);
            auVar11._0_4_ = iVar43 + auVar9._0_4_;
            auVar11._4_4_ = iVar43 + auVar9._4_4_;
            auVar11._8_4_ = iVar43 + auVar9._8_4_;
            auVar11._12_4_ = iVar43 + auVar9._12_4_;
            auVar11._16_4_ = iVar43 + auVar9._16_4_;
            auVar11._20_4_ = iVar43 + auVar9._20_4_;
            auVar11._24_4_ = iVar43 + auVar9._24_4_;
            auVar11._28_4_ = iVar43 + auVar9._28_4_;
            auVar77 = vpandn_avx2(auVar70,auVar11);
            auVar2 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar77._0_4_)),
                                 (uint)*(ushort *)(param_5 + auVar77._4_4_),1);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._8_4_),2);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._12_4_),3);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._16_4_),4);
            auVar2 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._20_4_),5);
            auVar74 = vpmovzxwd_avx2(auVar58);
            auVar12._0_4_ = auVar74._0_4_ + __real_ffff8001;
            auVar12._4_4_ = auVar74._4_4_ + __real_ffff8001;
            auVar12._8_4_ = auVar74._8_4_ + __real_ffff8001;
            auVar12._12_4_ = auVar74._12_4_ + __real_ffff8001;
            auVar12._16_4_ = auVar74._16_4_ + __real_ffff8001;
            auVar12._20_4_ = auVar74._20_4_ + __real_ffff8001;
            auVar12._24_4_ = auVar74._24_4_ + __real_ffff8001;
            auVar12._28_4_ = auVar74._28_4_ + __real_ffff8001;
            auVar74 = vcvtdq2ps_avx(auVar12);
            auVar94._4_4_ = __real_46fffe00;
            auVar94._0_4_ = __real_46fffe00;
            auVar94._8_4_ = __real_46fffe00;
            auVar94._12_4_ = __real_46fffe00;
            auVar94._16_4_ = __real_46fffe00;
            auVar94._20_4_ = __real_46fffe00;
            auVar94._24_4_ = __real_46fffe00;
            auVar94._28_4_ = __real_46fffe00;
            auVar70 = vdivps_avx(auVar74,auVar94);
            auVar58 = vpinsrw_avx(auVar2,(uint)*(ushort *)(param_5 + auVar77._24_4_),6);
            auVar74 = vpmovzxwd_avx2(auVar56);
            auVar13._0_4_ = auVar74._0_4_ + __real_ffff8001;
            auVar13._4_4_ = auVar74._4_4_ + __real_ffff8001;
            auVar13._8_4_ = auVar74._8_4_ + __real_ffff8001;
            auVar13._12_4_ = auVar74._12_4_ + __real_ffff8001;
            auVar13._16_4_ = auVar74._16_4_ + __real_ffff8001;
            auVar13._20_4_ = auVar74._20_4_ + __real_ffff8001;
            auVar13._24_4_ = auVar74._24_4_ + __real_ffff8001;
            auVar13._28_4_ = auVar74._28_4_ + __real_ffff8001;
            auVar74 = vcvtdq2ps_avx(auVar13);
            auVar97 = vdivps_avx(auVar74,auVar94);
            auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar77._28_4_),7);
            auVar74 = vpmovzxwd_avx2(auVar58);
            auVar14._0_4_ = auVar74._0_4_ + __real_ffff8001;
            auVar14._4_4_ = auVar74._4_4_ + __real_ffff8001;
            auVar14._8_4_ = auVar74._8_4_ + __real_ffff8001;
            auVar14._12_4_ = auVar74._12_4_ + __real_ffff8001;
            auVar14._16_4_ = auVar74._16_4_ + __real_ffff8001;
            auVar14._20_4_ = auVar74._20_4_ + __real_ffff8001;
            auVar14._24_4_ = auVar74._24_4_ + __real_ffff8001;
            auVar14._28_4_ = auVar74._28_4_ + __real_ffff8001;
            auVar74 = vcvtdq2ps_avx(auVar14);
            auVar74 = vdivps_avx(auVar74,auVar94);
            auVar76._0_4_ = auVar70._0_4_ * __real_43000000;
            auVar76._4_4_ = auVar70._4_4_ * __real_43000000;
            auVar76._8_4_ = auVar70._8_4_ * __real_43000000;
            auVar76._12_4_ = auVar70._12_4_ * __real_43000000;
            auVar76._16_4_ = auVar70._16_4_ * __real_43000000;
            auVar76._20_4_ = auVar70._20_4_ * __real_43000000;
            auVar76._24_4_ = auVar70._24_4_ * __real_43000000;
            auVar76._28_4_ = auVar70._28_4_ * __real_43000000;
            auVar95._0_4_ = auVar97._0_4_ * __real_43000000;
            auVar95._4_4_ = auVar97._4_4_ * __real_43000000;
            auVar95._8_4_ = auVar97._8_4_ * __real_43000000;
            auVar95._12_4_ = auVar97._12_4_ * __real_43000000;
            auVar95._16_4_ = auVar97._16_4_ * __real_43000000;
            auVar95._20_4_ = auVar97._20_4_ * __real_43000000;
            auVar95._24_4_ = auVar97._24_4_ * __real_43000000;
            auVar95._28_4_ = auVar97._28_4_ * __real_43000000;
            auVar61._0_4_ = auVar74._0_4_ * __real_43000000;
            auVar61._4_4_ = auVar74._4_4_ * __real_43000000;
            auVar61._8_4_ = auVar74._8_4_ * __real_43000000;
            auVar61._12_4_ = auVar74._12_4_ * __real_43000000;
            auVar61._16_4_ = auVar74._16_4_ * __real_43000000;
            auVar61._20_4_ = auVar74._20_4_ * __real_43000000;
            auVar61._24_4_ = auVar74._24_4_ * __real_43000000;
            auVar61._28_4_ = auVar74._28_4_ * __real_43000000;
            local_380 = vmaskmovps_avx(auVar112,auVar76);
            local_360 = vmaskmovps_avx(auVar112,auVar95);
            local_340 = vmaskmovps_avx(auVar112,auVar61);
            auVar74 = auVar73;
            auVar77 = auVar132;
            auVar93 = auVar149;
            break;
          case 3:
            auVar90 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar123 = vgatherdps(ZEXT832(0) << 0x20,auVar112);
            auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar112);
            auVar132 = vgatherdps(ZEXT832(0),auVar112);
            auVar133 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar73 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar70 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar112);
            auVar128 = vpsrld_avx2(auVar70,0x15);
            auVar149 = vpsrld_avx2(auVar70,10);
            auVar113._4_4_ = __real_000007ff;
            auVar113._0_4_ = __real_000007ff;
            auVar113._8_4_ = __real_000007ff;
            auVar113._12_4_ = __real_000007ff;
            auVar113._16_4_ = __real_000007ff;
            auVar113._20_4_ = __real_000007ff;
            auVar113._24_4_ = __real_000007ff;
            auVar113._28_4_ = __real_000007ff;
            auVar145._4_4_ = __real_000003ff;
            auVar145._0_4_ = __real_000003ff;
            auVar145._8_4_ = __real_000003ff;
            auVar145._12_4_ = __real_000003ff;
            auVar145._16_4_ = __real_000003ff;
            auVar145._20_4_ = __real_000003ff;
            auVar145._24_4_ = __real_000003ff;
            auVar145._28_4_ = __real_000003ff;
            auVar70 = vpand_avx2(auVar145,auVar70);
            auVar15._0_4_ = __real_fffffe01 + auVar70._0_4_;
            auVar15._4_4_ = __real_fffffe01 + auVar70._4_4_;
            auVar15._8_4_ = __real_fffffe01 + auVar70._8_4_;
            auVar15._12_4_ = __real_fffffe01 + auVar70._12_4_;
            auVar15._16_4_ = __real_fffffe01 + auVar70._16_4_;
            auVar15._20_4_ = __real_fffffe01 + auVar70._20_4_;
            auVar15._24_4_ = __real_fffffe01 + auVar70._24_4_;
            auVar15._28_4_ = __real_fffffe01 + auVar70._28_4_;
            auVar70 = vcvtdq2ps_avx(auVar15);
            auVar146._4_4_ = __real_43ff8000;
            auVar146._0_4_ = __real_43ff8000;
            auVar146._8_4_ = __real_43ff8000;
            auVar146._12_4_ = __real_43ff8000;
            auVar146._16_4_ = __real_43ff8000;
            auVar146._20_4_ = __real_43ff8000;
            auVar146._24_4_ = __real_43ff8000;
            auVar146._28_4_ = __real_43ff8000;
            auVar97 = vdivps_avx(auVar70,auVar146);
            auVar70 = vpand_avx2(auVar149,auVar113);
            auVar16._0_4_ = auVar70._0_4_ + __real_fffffc01;
            auVar16._4_4_ = auVar70._4_4_ + __real_fffffc01;
            auVar16._8_4_ = auVar70._8_4_ + __real_fffffc01;
            auVar16._12_4_ = auVar70._12_4_ + __real_fffffc01;
            auVar16._16_4_ = auVar70._16_4_ + __real_fffffc01;
            auVar16._20_4_ = auVar70._20_4_ + __real_fffffc01;
            auVar16._24_4_ = auVar70._24_4_ + __real_fffffc01;
            auVar16._28_4_ = auVar70._28_4_ + __real_fffffc01;
            auVar70 = vcvtdq2ps_avx(auVar16);
            auVar147._4_4_ = __real_447fc000;
            auVar147._0_4_ = __real_447fc000;
            auVar147._8_4_ = __real_447fc000;
            auVar147._12_4_ = __real_447fc000;
            auVar147._16_4_ = __real_447fc000;
            auVar147._20_4_ = __real_447fc000;
            auVar147._24_4_ = __real_447fc000;
            auVar147._28_4_ = __real_447fc000;
            auVar70 = vdivps_avx(auVar70,auVar147);
            local_2c0 = auVar90._0_4_;
            auVar83._0_4_ = auVar132._0_4_ * auVar97._0_4_ + local_2c0;
            fStack_2bc = auVar90._4_4_;
            auVar83._4_4_ = auVar132._4_4_ * auVar97._4_4_ + fStack_2bc;
            fStack_2b8 = auVar90._8_4_;
            auVar83._8_4_ = auVar132._8_4_ * auVar97._8_4_ + fStack_2b8;
            fStack_2b4 = auVar90._12_4_;
            auVar83._12_4_ = auVar132._12_4_ * auVar97._12_4_ + fStack_2b4;
            fStack_2b0 = auVar90._16_4_;
            auVar83._16_4_ = auVar132._16_4_ * auVar97._16_4_ + fStack_2b0;
            fStack_2ac = auVar90._20_4_;
            auVar83._20_4_ = auVar132._20_4_ * auVar97._20_4_ + fStack_2ac;
            fStack_2a8 = auVar90._24_4_;
            auVar83._24_4_ = auVar132._24_4_ * auVar97._24_4_ + fStack_2a8;
            fStack_2a4 = auVar90._28_4_;
            auVar83._28_4_ = auVar132._28_4_ * auVar97._28_4_ + fStack_2a4;
            local_2e0 = auVar123._0_4_;
            auVar101._0_4_ = auVar133._0_4_ * auVar70._0_4_ + local_2e0;
            fStack_2dc = auVar123._4_4_;
            auVar101._4_4_ = auVar133._4_4_ * auVar70._4_4_ + fStack_2dc;
            fStack_2d8 = auVar123._8_4_;
            auVar101._8_4_ = auVar133._8_4_ * auVar70._8_4_ + fStack_2d8;
            fStack_2d4 = auVar123._12_4_;
            auVar101._12_4_ = auVar133._12_4_ * auVar70._12_4_ + fStack_2d4;
            fStack_2d0 = auVar123._16_4_;
            auVar101._16_4_ = auVar133._16_4_ * auVar70._16_4_ + fStack_2d0;
            fStack_2cc = auVar123._20_4_;
            auVar101._20_4_ = auVar133._20_4_ * auVar70._20_4_ + fStack_2cc;
            fStack_2c8 = auVar123._24_4_;
            auVar101._24_4_ = auVar133._24_4_ * auVar70._24_4_ + fStack_2c8;
            fStack_2c4 = auVar123._28_4_;
            auVar101._28_4_ = auVar133._28_4_ * auVar70._28_4_ + fStack_2c4;
            auVar17._0_4_ = auVar128._0_4_ + __real_fffffc01;
            auVar17._4_4_ = auVar128._4_4_ + __real_fffffc01;
            auVar17._8_4_ = auVar128._8_4_ + __real_fffffc01;
            auVar17._12_4_ = auVar128._12_4_ + __real_fffffc01;
            auVar17._16_4_ = auVar128._16_4_ + __real_fffffc01;
            auVar17._20_4_ = auVar128._20_4_ + __real_fffffc01;
            auVar17._24_4_ = auVar128._24_4_ + __real_fffffc01;
            auVar17._28_4_ = auVar128._28_4_ + __real_fffffc01;
            auVar70 = vcvtdq2ps_avx(auVar17);
            auVar70 = vdivps_avx(auVar70,auVar147);
            local_300 = auVar91._0_4_;
            auVar60._0_4_ = auVar73._0_4_ * auVar70._0_4_ + local_300;
            fStack_2fc = auVar91._4_4_;
            auVar60._4_4_ = auVar73._4_4_ * auVar70._4_4_ + fStack_2fc;
            fStack_2f8 = auVar91._8_4_;
            auVar60._8_4_ = auVar73._8_4_ * auVar70._8_4_ + fStack_2f8;
            fStack_2f4 = auVar91._12_4_;
            auVar60._12_4_ = auVar73._12_4_ * auVar70._12_4_ + fStack_2f4;
            fStack_2f0 = auVar91._16_4_;
            auVar60._16_4_ = auVar73._16_4_ * auVar70._16_4_ + fStack_2f0;
            fStack_2ec = auVar91._20_4_;
            auVar60._20_4_ = auVar73._20_4_ * auVar70._20_4_ + fStack_2ec;
            fStack_2e8 = auVar91._24_4_;
            auVar60._24_4_ = auVar73._24_4_ * auVar70._24_4_ + fStack_2e8;
            fStack_2e4 = auVar91._28_4_;
            auVar60._28_4_ = auVar73._28_4_ * auVar70._28_4_ + fStack_2e4;
            local_380 = vmaskmovps_avx(auVar112,auVar83);
            local_360 = vmaskmovps_avx(auVar112,auVar101);
            goto LAB_140ae475d;
          default:
            goto switchD_140ae42f8_caseD_4;
          }
        }
        else {
switchD_140ae42f8_caseD_4:
          auVar60 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          local_380 = vmaskmovps_avx(auVar112,auVar60);
          local_360 = vmaskmovps_avx(auVar112,auVar60);
LAB_140ae475d:
          local_340 = vmaskmovps_avx(auVar112,auVar60);
        }
        auVar70 = vsubps_avx(local_380,auVar74);
        auVar97 = vsubps_avx(local_360,auVar77);
        auVar90 = vsubps_avx(local_340,auVar93);
        local_460 = auVar81._0_4_;
        fStack_45c = auVar81._4_4_;
        fStack_458 = auVar81._8_4_;
        fStack_454 = auVar81._12_4_;
        fStack_450 = auVar81._16_4_;
        fStack_44c = auVar81._20_4_;
        fStack_448 = auVar81._24_4_;
        fStack_444 = auVar81._28_4_;
        auVar62._0_4_ = local_460 * auVar70._0_4_ + auVar74._0_4_;
        auVar62._4_4_ = fStack_45c * auVar70._4_4_ + auVar74._4_4_;
        auVar62._8_4_ = fStack_458 * auVar70._8_4_ + auVar74._8_4_;
        auVar62._12_4_ = fStack_454 * auVar70._12_4_ + auVar74._12_4_;
        auVar62._16_4_ = fStack_450 * auVar70._16_4_ + auVar74._16_4_;
        auVar62._20_4_ = fStack_44c * auVar70._20_4_ + auVar74._20_4_;
        auVar62._24_4_ = fStack_448 * auVar70._24_4_ + auVar74._24_4_;
        auVar62._28_4_ = fStack_444 * auVar70._28_4_ + auVar74._28_4_;
        auVar84._0_4_ = local_460 * auVar97._0_4_ + auVar77._0_4_;
        auVar84._4_4_ = fStack_45c * auVar97._4_4_ + auVar77._4_4_;
        auVar84._8_4_ = fStack_458 * auVar97._8_4_ + auVar77._8_4_;
        auVar84._12_4_ = fStack_454 * auVar97._12_4_ + auVar77._12_4_;
        auVar84._16_4_ = fStack_450 * auVar97._16_4_ + auVar77._16_4_;
        auVar84._20_4_ = fStack_44c * auVar97._20_4_ + auVar77._20_4_;
        auVar84._24_4_ = fStack_448 * auVar97._24_4_ + auVar77._24_4_;
        auVar84._28_4_ = fStack_444 * auVar97._28_4_ + auVar77._28_4_;
        auVar96._0_4_ = local_460 * auVar90._0_4_ + auVar93._0_4_;
        auVar96._4_4_ = fStack_45c * auVar90._4_4_ + auVar93._4_4_;
        auVar96._8_4_ = fStack_458 * auVar90._8_4_ + auVar93._8_4_;
        auVar96._12_4_ = fStack_454 * auVar90._12_4_ + auVar93._12_4_;
        auVar96._16_4_ = fStack_450 * auVar90._16_4_ + auVar93._16_4_;
        auVar96._20_4_ = fStack_44c * auVar90._20_4_ + auVar93._20_4_;
        auVar96._24_4_ = fStack_448 * auVar90._24_4_ + auVar93._24_4_;
        auVar96._28_4_ = fStack_444 * auVar90._28_4_ + auVar93._28_4_;
        auVar74 = vmaskmovps_avx(auVar112,auVar62);
        auVar97 = vmaskmovps_avx(auVar112,auVar84);
        auVar70 = vmaskmovps_avx(auVar112,auVar96);
        in_ZMM13 = ZEXT3264(auVar97);
        auVar97 = vpcmpeqd_avx2(auVar112,auVar112);
        auVar150 = ZEXT3264(auVar97);
      }
      local_220._16_16_ = ZEXT116(1) * auVar55;
      local_220._0_16_ = ZEXT116(0) * auVar55 | ZEXT116(1) * auVar57;
      auVar85._16_16_ = in_ZMM13._0_16_;
      auVar85._0_16_ = auVar74._0_16_;
      in_ZMM6 = ZEXT3264(___ymm_0000000000000000000000050000000100000000000000000000000400000000);
      auVar97 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000
                             ,auVar85);
      auVar77 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000
                             ,ZEXT1632(auVar70._0_16_));
      local_180 = vblendps_avx(auVar97,auVar77,0xcc);
      in_ZMM4 = ZEXT3264(___ymm_0000000000000000000000070000000300000000000000000000000600000002);
      auVar97 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002
                             ,auVar85);
      auVar77 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000
                             ,ZEXT1632(auVar70._0_16_));
      local_160 = vblendps_avx(auVar97,auVar77,0xcc);
      auVar74 = vperm2f128_avx(auVar74,in_ZMM13._0_32_,0x31);
      auVar97 = vpermps_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000
                             ,auVar74);
      auVar77 = vpermps_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000
                             ,ZEXT1632(auVar70._16_16_));
      local_140 = vblendps_avx(auVar97,auVar77,0xcc);
      auVar74 = vpermps_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002
                             ,auVar74);
      auVar70 = vpermps_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000
                             ,ZEXT1632(auVar70._16_16_));
      local_120 = vblendps_avx(auVar74,auVar70,0xcc);
      uVar47 = 0xff;
      do {
        uVar42 = 0;
        for (uVar39 = uVar47; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x8000000000000000) {
          uVar42 = uVar42 + 1;
        }
        bVar1 = (byte)uVar42 & 0x3f;
        auVar74 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar42 << 4)));
        *(undefined1 (*) [32])
         (param_1 + 0x40 + (longlong)*(int *)(local_220 + (ulonglong)(uVar42 & 7) * 4) * 0x60) =
             auVar74;
        uVar47 = uVar47 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
      } while (uVar47 != 0);
      iVar53 = iVar53 + 8;
      in_ZMM11 = ZEXT3264(auVar81);
    } while (iVar53 < (int)(uVar44 & 0xfffffff8));
    if ((int)param_10 <= iVar53) {
      return;
    }
  }
  auVar63._4_4_ = iVar53;
  auVar63._0_4_ = iVar53;
  auVar63._8_4_ = iVar53;
  auVar63._12_4_ = iVar53;
  auVar63._16_4_ = iVar53;
  auVar63._20_4_ = iVar53;
  auVar63._24_4_ = iVar53;
  auVar63._28_4_ = iVar53;
  auVar115 = vpor_avx2(auVar63,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar71._4_4_ = param_10;
  auVar71._0_4_ = param_10;
  auVar71._8_4_ = param_10;
  auVar71._12_4_ = param_10;
  auVar71._16_4_ = param_10;
  auVar71._20_4_ = param_10;
  auVar71._24_4_ = param_10;
  auVar71._28_4_ = param_10;
  auVar74 = vpcmpgtd_avx2(auVar71,auVar115);
  auVar115 = vpslld_avx2(auVar115,3);
  auVar148._4_4_ = __real_00000004;
  auVar148._0_4_ = __real_00000004;
  auVar148._8_4_ = __real_00000004;
  auVar148._12_4_ = __real_00000004;
  auVar148._16_4_ = __real_00000004;
  auVar148._20_4_ = __real_00000004;
  auVar148._24_4_ = __real_00000004;
  auVar148._28_4_ = __real_00000004;
  vpor_avx2(auVar148,auVar115);
  auVar115 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
  auVar55 = vpslld_avx(ZEXT416(param_4),2);
  auVar64._0_4_ = auVar55._0_4_;
  auVar64._4_4_ = auVar64._0_4_;
  auVar64._8_4_ = auVar64._0_4_;
  auVar64._12_4_ = auVar64._0_4_;
  auVar64._16_4_ = auVar64._0_4_;
  auVar64._20_4_ = auVar64._0_4_;
  auVar64._24_4_ = auVar64._0_4_;
  auVar64._28_4_ = auVar64._0_4_;
  vpmulld_avx2(auVar115,auVar64);
  auVar77 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
  auVar65._4_4_ = __real_00000001;
  auVar65._0_4_ = __real_00000001;
  auVar65._8_4_ = __real_00000001;
  auVar65._12_4_ = __real_00000001;
  auVar65._16_4_ = __real_00000001;
  auVar65._20_4_ = __real_00000001;
  auVar65._24_4_ = __real_00000001;
  auVar65._28_4_ = __real_00000001;
  auVar70 = vpcmpgtd_avx2(auVar77,auVar65);
  auVar142 = vpandn_avx2(auVar70,auVar74);
  iVar43 = vmovmskps_avx(auVar142);
  auVar55._0_12_ = ZEXT812(0);
  auVar55._12_4_ = 0;
  auVar97 = ZEXT1632(auVar55);
  auVar115 = ZEXT1632(auVar55);
  uVar44 = auVar74._0_4_;
  uVar41 = auVar74._4_4_;
  uVar42 = auVar74._8_4_;
  uVar100 = auVar74._12_4_;
  uVar105 = auVar74._16_4_;
  uVar106 = auVar74._20_4_;
  uVar107 = auVar74._24_4_;
  uVar108 = auVar74._28_4_;
  if (iVar43 == 0) {
LAB_140ae49b4:
    auVar90 = vpcmpeqd_avx2(auVar81,auVar81);
    auVar72._0_4_ = auVar90._0_4_ ^ auVar97._0_4_;
    auVar72._4_4_ = auVar90._4_4_ ^ auVar97._4_4_;
    auVar72._8_4_ = auVar90._8_4_ ^ auVar97._8_4_;
    auVar72._12_4_ = auVar90._12_4_ ^ auVar97._12_4_;
    auVar72._16_4_ = auVar90._16_4_ ^ auVar97._16_4_;
    auVar72._20_4_ = auVar90._20_4_ ^ auVar97._20_4_;
    auVar72._24_4_ = auVar90._24_4_ ^ auVar97._24_4_;
    auVar72._28_4_ = auVar90._28_4_ ^ auVar97._28_4_;
    auVar115 = ZEXT432(0) << 0x20;
    auVar57._0_12_ = ZEXT812(0);
    auVar57._12_4_ = 0;
    auVar142 = ZEXT1632(auVar57);
    auVar81 = SUB6432(ZEXT864(0),0);
    if (0.0 < param_7) {
      auVar18._0_4_ = auVar90._0_4_ + auVar77._0_4_;
      auVar18._4_4_ = auVar90._4_4_ + auVar77._4_4_;
      auVar18._8_4_ = auVar90._8_4_ + auVar77._8_4_;
      auVar18._12_4_ = auVar90._12_4_ + auVar77._12_4_;
      auVar18._16_4_ = auVar90._16_4_ + auVar77._16_4_;
      auVar18._20_4_ = auVar90._20_4_ + auVar77._20_4_;
      auVar18._24_4_ = auVar90._24_4_ + auVar77._24_4_;
      auVar18._28_4_ = auVar90._28_4_ + auVar77._28_4_;
      if (__real_3f800000 <= param_7) {
        auVar103._0_4_ = uVar44 & auVar72._0_4_;
        auVar103._4_4_ = uVar41 & auVar72._4_4_;
        auVar103._8_4_ = uVar42 & auVar72._8_4_;
        auVar103._12_4_ = uVar100 & auVar72._12_4_;
        auVar103._16_4_ = uVar105 & auVar72._16_4_;
        auVar103._20_4_ = uVar106 & auVar72._20_4_;
        auVar103._24_4_ = uVar107 & auVar72._24_4_;
        auVar103._28_4_ = uVar108 & auVar72._28_4_;
        auVar115 = vblendvps_avx(ZEXT1632(auVar57),auVar18,auVar103);
        auVar81 = auVar115;
      }
      else {
        auVar81 = vcvtdq2ps_avx(auVar18);
        auVar129._0_4_ = param_7 * auVar81._0_4_;
        auVar129._4_4_ = param_7 * auVar81._4_4_;
        auVar129._8_4_ = param_7 * auVar81._8_4_;
        auVar129._12_4_ = param_7 * auVar81._12_4_;
        auVar129._16_4_ = param_7 * auVar81._16_4_;
        auVar129._20_4_ = param_7 * auVar81._20_4_;
        auVar129._24_4_ = param_7 * auVar81._24_4_;
        auVar129._28_4_ = param_7 * auVar81._28_4_;
        auVar114._0_4_ = uVar44 & auVar72._0_4_;
        auVar114._4_4_ = uVar41 & auVar72._4_4_;
        auVar114._8_4_ = uVar42 & auVar72._8_4_;
        auVar114._12_4_ = uVar100 & auVar72._12_4_;
        auVar114._16_4_ = uVar105 & auVar72._16_4_;
        auVar114._20_4_ = uVar106 & auVar72._20_4_;
        auVar114._24_4_ = uVar107 & auVar72._24_4_;
        auVar114._28_4_ = uVar108 & auVar72._28_4_;
        auVar81 = vroundps_avx(auVar129,9);
        auVar102._0_4_ = (int)auVar81._0_4_;
        auVar102._4_4_ = (int)auVar81._4_4_;
        auVar102._8_4_ = (int)auVar81._8_4_;
        auVar102._12_4_ = (int)auVar81._12_4_;
        auVar102._16_4_ = (int)auVar81._16_4_;
        auVar102._20_4_ = (int)auVar81._20_4_;
        auVar102._24_4_ = (int)auVar81._24_4_;
        auVar102._28_4_ = (int)auVar81._28_4_;
        auVar115 = vpminsd_avx2(auVar102,auVar18);
        auVar115 = vblendvps_avx(ZEXT832(0) << 0x20,auVar115,auVar114);
        auVar142 = ZEXT1632(auVar57);
        if (param_8 != '\x01') {
          auVar142 = vsubps_avx(auVar129,auVar81);
        }
        auVar81 = vpcmpeqd_avx2(auVar129,auVar129);
        auVar81 = vpsubd_avx2(auVar115,auVar81);
        auVar81 = vpminsd_avx2(auVar81,auVar18);
        auVar81 = vblendvps_avx(ZEXT832(0) << 0x20,auVar81,auVar114);
      }
    }
    auVar142 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar142,auVar72);
  }
  else {
    uVar50 = vmovmskps_avx(auVar74);
    if ((char)uVar50 != (char)iVar43) {
      auVar55 = vpackssdw_avx(auVar142._0_16_,auVar142._16_16_);
      auVar97 = vpmovsxwd_avx2(auVar55);
      goto LAB_140ae49b4;
    }
    auVar142 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
    auVar81 = SUB6432(ZEXT864(0),0);
  }
  local_240 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar74);
  auVar97 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar74);
  iVar43 = -(uint)(param_9 == 3);
  auVar116._4_4_ = iVar43;
  auVar116._0_4_ = iVar43;
  auVar116._8_4_ = iVar43;
  auVar116._12_4_ = iVar43;
  auVar116._16_4_ = iVar43;
  auVar116._20_4_ = iVar43;
  auVar116._24_4_ = iVar43;
  auVar116._28_4_ = iVar43;
  auVar70 = vpand_avx2(auVar70,auVar116);
  auVar120._4_4_ = __real_00000018;
  auVar120._0_4_ = __real_00000018;
  auVar120._8_4_ = __real_00000018;
  auVar120._12_4_ = __real_00000018;
  auVar120._16_4_ = __real_00000018;
  auVar120._20_4_ = __real_00000018;
  auVar120._24_4_ = __real_00000018;
  auVar120._28_4_ = __real_00000018;
  auVar77 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar70 = vblendvps_avx(auVar77,auVar120,auVar70);
  auVar121._4_4_ = local_3e0._4_4_;
  auVar121._0_4_ = local_3e0._4_4_;
  auVar121._8_4_ = local_3e0._4_4_;
  auVar121._12_4_ = local_3e0._4_4_;
  auVar121._16_4_ = local_3e0._4_4_;
  auVar121._20_4_ = local_3e0._4_4_;
  auVar121._24_4_ = local_3e0._4_4_;
  auVar121._28_4_ = local_3e0._4_4_;
  if (param_9 < 7) {
    auVar90 = vpmulld_avx2(auVar115,auVar121);
    switch(param_9) {
    default:
      auVar90 = vgatherdps(ZEXT832(0),auVar74);
      auVar93 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar74);
      auVar77 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
      local_540 = vmaskmovps_avx(auVar74,auVar90);
      local_520 = vmaskmovps_avx(auVar74,auVar93);
      local_500._0_32_ = vmaskmovps_avx(auVar74,auVar77);
      auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
      auVar115 = auVar74 & ~auVar77;
      if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
            (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
          (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140ae53c4;
      break;
    case 2:
      auVar19._0_4_ = auVar90._0_4_ + auVar97._0_4_ + auVar70._0_4_;
      auVar19._4_4_ = auVar90._4_4_ + auVar97._4_4_ + auVar70._4_4_;
      auVar19._8_4_ = auVar90._8_4_ + auVar97._8_4_ + auVar70._8_4_;
      auVar19._12_4_ = auVar90._12_4_ + auVar97._12_4_ + auVar70._12_4_;
      auVar19._16_4_ = auVar90._16_4_ + auVar97._16_4_ + auVar70._16_4_;
      auVar19._20_4_ = auVar90._20_4_ + auVar97._20_4_ + auVar70._20_4_;
      auVar19._24_4_ = auVar90._24_4_ + auVar97._24_4_ + auVar70._24_4_;
      auVar19._28_4_ = auVar90._28_4_ + auVar97._28_4_ + auVar70._28_4_;
      auVar77 = vpand_avx2(auVar74,auVar19);
      auVar55 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar77._0_4_)),
                            (uint)*(ushort *)(param_5 + auVar77._4_4_),1);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._8_4_),2);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._12_4_),3);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._16_4_),4);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._20_4_),5);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._24_4_),6);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar77._28_4_),7);
      auVar20._0_4_ = auVar19._0_4_ + __real_00000002;
      auVar20._4_4_ = auVar19._4_4_ + __real_00000002;
      auVar20._8_4_ = auVar19._8_4_ + __real_00000002;
      auVar20._12_4_ = auVar19._12_4_ + __real_00000002;
      auVar20._16_4_ = auVar19._16_4_ + __real_00000002;
      auVar20._20_4_ = auVar19._20_4_ + __real_00000002;
      auVar20._24_4_ = auVar19._24_4_ + __real_00000002;
      auVar20._28_4_ = auVar19._28_4_ + __real_00000002;
      auVar77 = vpand_avx2(auVar74,auVar20);
      auVar57 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar77._0_4_)),
                            (uint)*(ushort *)(param_5 + auVar77._4_4_),1);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._8_4_),2);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._12_4_),3);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._16_4_),4);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._20_4_),5);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._24_4_),6);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + auVar77._28_4_),7);
      auVar21._0_4_ = auVar19._0_4_ + __real_00000004;
      auVar21._4_4_ = auVar19._4_4_ + __real_00000004;
      auVar21._8_4_ = auVar19._8_4_ + __real_00000004;
      auVar21._12_4_ = auVar19._12_4_ + __real_00000004;
      auVar21._16_4_ = auVar19._16_4_ + __real_00000004;
      auVar21._20_4_ = auVar19._20_4_ + __real_00000004;
      auVar21._24_4_ = auVar19._24_4_ + __real_00000004;
      auVar21._28_4_ = auVar19._28_4_ + __real_00000004;
      auVar112 = vpand_avx2(auVar74,auVar21);
      auVar58 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + auVar112._0_4_)),
                            (uint)*(ushort *)(param_5 + auVar112._4_4_),1);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._8_4_),2);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._12_4_),3);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._16_4_),4);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._20_4_),5);
      auVar77 = vpmovzxwd_avx2(auVar55);
      auVar22._0_4_ = auVar77._0_4_ + __real_ffff8001;
      auVar22._4_4_ = auVar77._4_4_ + __real_ffff8001;
      auVar22._8_4_ = auVar77._8_4_ + __real_ffff8001;
      auVar22._12_4_ = auVar77._12_4_ + __real_ffff8001;
      auVar22._16_4_ = auVar77._16_4_ + __real_ffff8001;
      auVar22._20_4_ = auVar77._20_4_ + __real_ffff8001;
      auVar22._24_4_ = auVar77._24_4_ + __real_ffff8001;
      auVar22._28_4_ = auVar77._28_4_ + __real_ffff8001;
      auVar77 = vcvtdq2ps_avx(auVar22);
      auVar117._4_4_ = __real_46fffe00;
      auVar117._0_4_ = __real_46fffe00;
      auVar117._8_4_ = __real_46fffe00;
      auVar117._12_4_ = __real_46fffe00;
      auVar117._16_4_ = __real_46fffe00;
      auVar117._20_4_ = __real_46fffe00;
      auVar117._24_4_ = __real_46fffe00;
      auVar117._28_4_ = __real_46fffe00;
      auVar90 = vdivps_avx(auVar77,auVar117);
      auVar55 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + auVar112._24_4_),6);
      auVar77 = vpmovzxwd_avx2(auVar57);
      auVar23._0_4_ = auVar77._0_4_ + __real_ffff8001;
      auVar23._4_4_ = auVar77._4_4_ + __real_ffff8001;
      auVar23._8_4_ = auVar77._8_4_ + __real_ffff8001;
      auVar23._12_4_ = auVar77._12_4_ + __real_ffff8001;
      auVar23._16_4_ = auVar77._16_4_ + __real_ffff8001;
      auVar23._20_4_ = auVar77._20_4_ + __real_ffff8001;
      auVar23._24_4_ = auVar77._24_4_ + __real_ffff8001;
      auVar23._28_4_ = auVar77._28_4_ + __real_ffff8001;
      auVar77 = vcvtdq2ps_avx(auVar23);
      auVar93 = vdivps_avx(auVar77,auVar117);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + auVar112._28_4_),7);
      auVar77 = vpmovzxwd_avx2(auVar55);
      auVar24._0_4_ = auVar77._0_4_ + __real_ffff8001;
      auVar24._4_4_ = auVar77._4_4_ + __real_ffff8001;
      auVar24._8_4_ = auVar77._8_4_ + __real_ffff8001;
      auVar24._12_4_ = auVar77._12_4_ + __real_ffff8001;
      auVar24._16_4_ = auVar77._16_4_ + __real_ffff8001;
      auVar24._20_4_ = auVar77._20_4_ + __real_ffff8001;
      auVar24._24_4_ = auVar77._24_4_ + __real_ffff8001;
      auVar24._28_4_ = auVar77._28_4_ + __real_ffff8001;
      auVar77 = vcvtdq2ps_avx(auVar24);
      auVar77 = vdivps_avx(auVar77,auVar117);
      auVar78._0_4_ = auVar90._0_4_ * __real_43000000;
      auVar78._4_4_ = auVar90._4_4_ * __real_43000000;
      auVar78._8_4_ = auVar90._8_4_ * __real_43000000;
      auVar78._12_4_ = auVar90._12_4_ * __real_43000000;
      auVar78._16_4_ = auVar90._16_4_ * __real_43000000;
      auVar78._20_4_ = auVar90._20_4_ * __real_43000000;
      auVar78._24_4_ = auVar90._24_4_ * __real_43000000;
      auVar78._28_4_ = auVar90._28_4_ * __real_43000000;
      auVar118._0_4_ = auVar93._0_4_ * __real_43000000;
      auVar118._4_4_ = auVar93._4_4_ * __real_43000000;
      auVar118._8_4_ = auVar93._8_4_ * __real_43000000;
      auVar118._12_4_ = auVar93._12_4_ * __real_43000000;
      auVar118._16_4_ = auVar93._16_4_ * __real_43000000;
      auVar118._20_4_ = auVar93._20_4_ * __real_43000000;
      auVar118._24_4_ = auVar93._24_4_ * __real_43000000;
      auVar118._28_4_ = auVar93._28_4_ * __real_43000000;
      auVar66._0_4_ = auVar77._0_4_ * __real_43000000;
      auVar66._4_4_ = auVar77._4_4_ * __real_43000000;
      auVar66._8_4_ = auVar77._8_4_ * __real_43000000;
      auVar66._12_4_ = auVar77._12_4_ * __real_43000000;
      auVar66._16_4_ = auVar77._16_4_ * __real_43000000;
      auVar66._20_4_ = auVar77._20_4_ * __real_43000000;
      auVar66._24_4_ = auVar77._24_4_ * __real_43000000;
      auVar66._28_4_ = auVar77._28_4_ * __real_43000000;
      local_540 = vmaskmovps_avx(auVar74,auVar78);
      local_520 = vmaskmovps_avx(auVar74,auVar118);
      local_500._0_32_ = vmaskmovps_avx(auVar74,auVar66);
      auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
      auVar115 = auVar74 & ~auVar77;
      if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
            (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
          (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140ae53c4;
      break;
    case 3:
      auVar128 = vgatherdps(ZEXT832(0),auVar74);
      auVar123 = vgatherdps(ZEXT832(0),auVar74);
      auVar91 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
      auVar112 = vgatherdps(ZEXT832(0) << 0x20,auVar74);
      auVar133 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
      auVar149 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar74);
      auVar93 = vpgatherdd(ZEXT832(0),auVar74);
      auVar77 = vpsrld_avx2(auVar93,10);
      auVar86._4_4_ = __real_000007ff;
      auVar86._0_4_ = __real_000007ff;
      auVar86._8_4_ = __real_000007ff;
      auVar86._12_4_ = __real_000007ff;
      auVar86._16_4_ = __real_000007ff;
      auVar86._20_4_ = __real_000007ff;
      auVar86._24_4_ = __real_000007ff;
      auVar86._28_4_ = __real_000007ff;
      auVar90 = vpand_avx2(auVar77,auVar86);
      auVar87._4_4_ = __real_000003ff;
      auVar87._0_4_ = __real_000003ff;
      auVar87._8_4_ = __real_000003ff;
      auVar87._12_4_ = __real_000003ff;
      auVar87._16_4_ = __real_000003ff;
      auVar87._20_4_ = __real_000003ff;
      auVar87._24_4_ = __real_000003ff;
      auVar87._28_4_ = __real_000003ff;
      auVar77 = vpand_avx2(auVar93,auVar87);
      auVar25._0_4_ = __real_fffffe01 + auVar77._0_4_;
      auVar25._4_4_ = __real_fffffe01 + auVar77._4_4_;
      auVar25._8_4_ = __real_fffffe01 + auVar77._8_4_;
      auVar25._12_4_ = __real_fffffe01 + auVar77._12_4_;
      auVar25._16_4_ = __real_fffffe01 + auVar77._16_4_;
      auVar25._20_4_ = __real_fffffe01 + auVar77._20_4_;
      auVar25._24_4_ = __real_fffffe01 + auVar77._24_4_;
      auVar25._28_4_ = __real_fffffe01 + auVar77._28_4_;
      auVar77 = vcvtdq2ps_avx(auVar25);
      auVar130._4_4_ = __real_43ff8000;
      auVar130._0_4_ = __real_43ff8000;
      auVar130._8_4_ = __real_43ff8000;
      auVar130._12_4_ = __real_43ff8000;
      auVar130._16_4_ = __real_43ff8000;
      auVar130._20_4_ = __real_43ff8000;
      auVar130._24_4_ = __real_43ff8000;
      auVar130._28_4_ = __real_43ff8000;
      auVar77 = vdivps_avx(auVar77,auVar130);
      auVar88._0_4_ = auVar112._0_4_ * auVar77._0_4_ + auVar128._0_4_;
      auVar88._4_4_ = auVar112._4_4_ * auVar77._4_4_ + auVar128._4_4_;
      auVar88._8_4_ = auVar112._8_4_ * auVar77._8_4_ + auVar128._8_4_;
      auVar88._12_4_ = auVar112._12_4_ * auVar77._12_4_ + auVar128._12_4_;
      auVar88._16_4_ = auVar112._16_4_ * auVar77._16_4_ + auVar128._16_4_;
      auVar88._20_4_ = auVar112._20_4_ * auVar77._20_4_ + auVar128._20_4_;
      auVar88._24_4_ = auVar112._24_4_ * auVar77._24_4_ + auVar128._24_4_;
      auVar88._28_4_ = auVar112._28_4_ * auVar77._28_4_ + auVar128._28_4_;
      auVar26._0_4_ = auVar90._0_4_ + __real_fffffc01;
      auVar26._4_4_ = auVar90._4_4_ + __real_fffffc01;
      auVar26._8_4_ = auVar90._8_4_ + __real_fffffc01;
      auVar26._12_4_ = auVar90._12_4_ + __real_fffffc01;
      auVar26._16_4_ = auVar90._16_4_ + __real_fffffc01;
      auVar26._20_4_ = auVar90._20_4_ + __real_fffffc01;
      auVar26._24_4_ = auVar90._24_4_ + __real_fffffc01;
      auVar26._28_4_ = auVar90._28_4_ + __real_fffffc01;
      auVar77 = vcvtdq2ps_avx(auVar26);
      auVar127._4_4_ = __real_447fc000;
      auVar127._0_4_ = __real_447fc000;
      auVar127._8_4_ = __real_447fc000;
      auVar127._12_4_ = __real_447fc000;
      auVar127._16_4_ = __real_447fc000;
      auVar127._20_4_ = __real_447fc000;
      auVar127._24_4_ = __real_447fc000;
      auVar127._28_4_ = __real_447fc000;
      auVar77 = vdivps_avx(auVar77,auVar127);
      auVar90 = vpsrld_avx2(auVar93,0x15);
      auVar79._0_4_ = auVar133._0_4_ * auVar77._0_4_ + auVar123._0_4_;
      auVar79._4_4_ = auVar133._4_4_ * auVar77._4_4_ + auVar123._4_4_;
      auVar79._8_4_ = auVar133._8_4_ * auVar77._8_4_ + auVar123._8_4_;
      auVar79._12_4_ = auVar133._12_4_ * auVar77._12_4_ + auVar123._12_4_;
      auVar79._16_4_ = auVar133._16_4_ * auVar77._16_4_ + auVar123._16_4_;
      auVar79._20_4_ = auVar133._20_4_ * auVar77._20_4_ + auVar123._20_4_;
      auVar79._24_4_ = auVar133._24_4_ * auVar77._24_4_ + auVar123._24_4_;
      auVar79._28_4_ = auVar133._28_4_ * auVar77._28_4_ + auVar123._28_4_;
      auVar27._0_4_ = auVar90._0_4_ + __real_fffffc01;
      auVar27._4_4_ = auVar90._4_4_ + __real_fffffc01;
      auVar27._8_4_ = auVar90._8_4_ + __real_fffffc01;
      auVar27._12_4_ = auVar90._12_4_ + __real_fffffc01;
      auVar27._16_4_ = auVar90._16_4_ + __real_fffffc01;
      auVar27._20_4_ = auVar90._20_4_ + __real_fffffc01;
      auVar27._24_4_ = auVar90._24_4_ + __real_fffffc01;
      auVar27._28_4_ = auVar90._28_4_ + __real_fffffc01;
      auVar77 = vcvtdq2ps_avx(auVar27);
      auVar77 = vdivps_avx(auVar77,auVar127);
      auVar67._0_4_ = auVar149._0_4_ * auVar77._0_4_ + auVar91._0_4_;
      auVar67._4_4_ = auVar149._4_4_ * auVar77._4_4_ + auVar91._4_4_;
      auVar67._8_4_ = auVar149._8_4_ * auVar77._8_4_ + auVar91._8_4_;
      auVar67._12_4_ = auVar149._12_4_ * auVar77._12_4_ + auVar91._12_4_;
      auVar67._16_4_ = auVar149._16_4_ * auVar77._16_4_ + auVar91._16_4_;
      auVar67._20_4_ = auVar149._20_4_ * auVar77._20_4_ + auVar91._20_4_;
      auVar67._24_4_ = auVar149._24_4_ * auVar77._24_4_ + auVar91._24_4_;
      auVar67._28_4_ = auVar149._28_4_ * auVar77._28_4_ + auVar91._28_4_;
      local_540 = vmaskmovps_avx(auVar74,auVar88);
      local_520 = vmaskmovps_avx(auVar74,auVar79);
      local_500._0_32_ = vmaskmovps_avx(auVar74,auVar67);
      auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
      auVar115 = auVar74 & ~auVar77;
      if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
            (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
          (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140ae53c4;
      break;
    case 4:
    case 5:
      goto switchD_140ae4ab8_caseD_4;
    case 6:
      auVar77 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      local_540 = vmaskmovps_avx(auVar74,auVar77);
      local_520 = vmaskmovps_avx(auVar74,auVar77);
      local_500._0_32_ = vmaskmovps_avx(auVar74,auVar77);
      auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
      auVar115 = auVar74 & ~auVar77;
      if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
            (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
          (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140ae53c4;
    }
  }
  else {
switchD_140ae4ab8_caseD_4:
    local_540 = vmaskmovps_avx(auVar74,auVar77);
    local_520 = vmaskmovps_avx(auVar74,auVar77);
    local_500._0_32_ = vmaskmovps_avx(auVar74,auVar77);
    auVar77 = vpcmpeqd_avx2(auVar115,auVar81);
    auVar115 = auVar74 & ~auVar77;
    if ((((((((SUB321(auVar115 >> 0x1f,0) & 1) == 0 && (SUB321(auVar115 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar115 >> 0x5f,0) & 1) == 0) && SUB321(auVar115 >> 0x7f,0) == '\0') &&
          (SUB321(auVar115 >> 0x9f,0) & 1) == 0) && SUB321(auVar115 >> 0xbf,0) == '\0') &&
        (SUB321(auVar115 >> 0xdf,0) & 1) == 0) && -1 < auVar115[0x1f]) goto LAB_140ae53c4;
  }
  auVar104._0_4_ = ~auVar77._0_4_ & uVar44;
  auVar104._4_4_ = ~auVar77._4_4_ & uVar41;
  auVar104._8_4_ = ~auVar77._8_4_ & uVar42;
  auVar104._12_4_ = ~auVar77._12_4_ & uVar100;
  auVar104._16_4_ = ~auVar77._16_4_ & uVar105;
  auVar104._20_4_ = ~auVar77._20_4_ & uVar106;
  auVar104._24_4_ = ~auVar77._24_4_ & uVar107;
  auVar104._28_4_ = ~auVar77._28_4_ & uVar108;
  if (param_9 < 7) {
    auVar81 = vpmulld_avx2(auVar81,auVar121);
    switch(param_9) {
    case 0:
    case 1:
      auVar115 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar104);
      auVar70 = vgatherdps(ZEXT832(0),auVar104);
      auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar104);
      local_440 = vmaskmovps_avx(auVar104,auVar115);
      local_420 = vmaskmovps_avx(auVar104,auVar70);
      local_400 = vmaskmovps_avx(auVar104,auVar81);
      goto LAB_140ae5367;
    case 2:
      auVar28._0_4_ = auVar81._0_4_ + auVar97._0_4_ + auVar70._0_4_;
      auVar28._4_4_ = auVar81._4_4_ + auVar97._4_4_ + auVar70._4_4_;
      auVar28._8_4_ = auVar81._8_4_ + auVar97._8_4_ + auVar70._8_4_;
      auVar28._12_4_ = auVar81._12_4_ + auVar97._12_4_ + auVar70._12_4_;
      auVar28._16_4_ = auVar81._16_4_ + auVar97._16_4_ + auVar70._16_4_;
      auVar28._20_4_ = auVar81._20_4_ + auVar97._20_4_ + auVar70._20_4_;
      auVar28._24_4_ = auVar81._24_4_ + auVar97._24_4_ + auVar70._24_4_;
      auVar28._28_4_ = auVar81._28_4_ + auVar97._28_4_ + auVar70._28_4_;
      auVar58 = ZEXT816(0);
      auVar81 = vblendvps_avx(ZEXT1632(auVar58),auVar28,auVar104);
      auVar55 = auVar81._0_16_;
      iVar43 = vextractps_avx(auVar55,0);
      iVar53 = vextractps_avx(auVar55,1);
      iVar49 = vextractps_avx(auVar55,2);
      iVar51 = vextractps_avx(auVar55,3);
      auVar55 = auVar81._16_16_;
      iVar52 = vextractps_avx(auVar55,0);
      iVar46 = vextractps_avx(auVar55,1);
      iVar48 = vextractps_avx(auVar55,2);
      iVar45 = vextractps_avx(auVar55,3);
      auVar55 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + iVar43)),
                            (uint)*(ushort *)(param_5 + iVar53),1);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar49),2);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar51),3);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar52),4);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar46),5);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar48),6);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar45),7);
      auVar29._0_4_ = auVar28._0_4_ + __real_00000002;
      auVar29._4_4_ = auVar28._4_4_ + __real_00000002;
      auVar29._8_4_ = auVar28._8_4_ + __real_00000002;
      auVar29._12_4_ = auVar28._12_4_ + __real_00000002;
      auVar29._16_4_ = auVar28._16_4_ + __real_00000002;
      auVar29._20_4_ = auVar28._20_4_ + __real_00000002;
      auVar29._24_4_ = auVar28._24_4_ + __real_00000002;
      auVar29._28_4_ = auVar28._28_4_ + __real_00000002;
      auVar81 = vblendvps_avx(ZEXT1632(auVar58),auVar29,auVar104);
      auVar57 = auVar81._0_16_;
      iVar43 = vextractps_avx(auVar57,0);
      iVar53 = vextractps_avx(auVar57,1);
      iVar49 = vextractps_avx(auVar57,2);
      iVar51 = vextractps_avx(auVar57,3);
      auVar57 = auVar81._16_16_;
      iVar52 = vextractps_avx(auVar57,0);
      iVar46 = vextractps_avx(auVar57,1);
      iVar48 = vextractps_avx(auVar57,2);
      iVar45 = vextractps_avx(auVar57,3);
      auVar57 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + iVar43)),
                            (uint)*(ushort *)(param_5 + iVar53),1);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar49),2);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar51),3);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar52),4);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar46),5);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar48),6);
      auVar57 = vpinsrw_avx(auVar57,(uint)*(ushort *)(param_5 + iVar45),7);
      auVar30._0_4_ = __real_00000004 + auVar28._0_4_;
      auVar30._4_4_ = __real_00000004 + auVar28._4_4_;
      auVar30._8_4_ = __real_00000004 + auVar28._8_4_;
      auVar30._12_4_ = __real_00000004 + auVar28._12_4_;
      auVar30._16_4_ = __real_00000004 + auVar28._16_4_;
      auVar30._20_4_ = __real_00000004 + auVar28._20_4_;
      auVar30._24_4_ = __real_00000004 + auVar28._24_4_;
      auVar30._28_4_ = __real_00000004 + auVar28._28_4_;
      auVar81 = vblendvps_avx(ZEXT1632(auVar58),auVar30,auVar104);
      auVar58 = auVar81._0_16_;
      iVar43 = vextractps_avx(auVar58,0);
      iVar53 = vextractps_avx(auVar58,1);
      iVar49 = vextractps_avx(auVar58,2);
      iVar51 = vextractps_avx(auVar58,3);
      auVar58 = auVar81._16_16_;
      iVar52 = vextractps_avx(auVar58,0);
      iVar46 = vextractps_avx(auVar58,1);
      iVar48 = vextractps_avx(auVar58,2);
      iVar45 = vextractps_avx(auVar58,3);
      auVar58 = vpinsrw_avx(ZEXT216(*(ushort *)(param_5 + iVar43)),
                            (uint)*(ushort *)(param_5 + iVar53),1);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar49),2);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar51),3);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar52),4);
      auVar58 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar46),5);
      auVar81 = vpmovzxwd_avx2(auVar55);
      auVar31._0_4_ = auVar81._0_4_ + __real_ffff8001;
      auVar31._4_4_ = auVar81._4_4_ + __real_ffff8001;
      auVar31._8_4_ = auVar81._8_4_ + __real_ffff8001;
      auVar31._12_4_ = auVar81._12_4_ + __real_ffff8001;
      auVar31._16_4_ = auVar81._16_4_ + __real_ffff8001;
      auVar31._20_4_ = auVar81._20_4_ + __real_ffff8001;
      auVar31._24_4_ = auVar81._24_4_ + __real_ffff8001;
      auVar31._28_4_ = auVar81._28_4_ + __real_ffff8001;
      auVar81 = vcvtdq2ps_avx(auVar31);
      auVar98._4_4_ = __real_46fffe00;
      auVar98._0_4_ = __real_46fffe00;
      auVar98._8_4_ = __real_46fffe00;
      auVar98._12_4_ = __real_46fffe00;
      auVar98._16_4_ = __real_46fffe00;
      auVar98._20_4_ = __real_46fffe00;
      auVar98._24_4_ = __real_46fffe00;
      auVar98._28_4_ = __real_46fffe00;
      auVar115 = vdivps_avx(auVar81,auVar98);
      auVar55 = vpinsrw_avx(auVar58,(uint)*(ushort *)(param_5 + iVar48),6);
      auVar81 = vpmovzxwd_avx2(auVar57);
      auVar32._0_4_ = auVar81._0_4_ + __real_ffff8001;
      auVar32._4_4_ = auVar81._4_4_ + __real_ffff8001;
      auVar32._8_4_ = auVar81._8_4_ + __real_ffff8001;
      auVar32._12_4_ = auVar81._12_4_ + __real_ffff8001;
      auVar32._16_4_ = auVar81._16_4_ + __real_ffff8001;
      auVar32._20_4_ = auVar81._20_4_ + __real_ffff8001;
      auVar32._24_4_ = auVar81._24_4_ + __real_ffff8001;
      auVar32._28_4_ = auVar81._28_4_ + __real_ffff8001;
      auVar81 = vcvtdq2ps_avx(auVar32);
      auVar70 = vdivps_avx(auVar81,auVar98);
      auVar55 = vpinsrw_avx(auVar55,(uint)*(ushort *)(param_5 + iVar45),7);
      auVar81 = vpmovzxwd_avx2(auVar55);
      auVar33._0_4_ = auVar81._0_4_ + __real_ffff8001;
      auVar33._4_4_ = auVar81._4_4_ + __real_ffff8001;
      auVar33._8_4_ = auVar81._8_4_ + __real_ffff8001;
      auVar33._12_4_ = auVar81._12_4_ + __real_ffff8001;
      auVar33._16_4_ = auVar81._16_4_ + __real_ffff8001;
      auVar33._20_4_ = auVar81._20_4_ + __real_ffff8001;
      auVar33._24_4_ = auVar81._24_4_ + __real_ffff8001;
      auVar33._28_4_ = auVar81._28_4_ + __real_ffff8001;
      auVar81 = vcvtdq2ps_avx(auVar33);
      auVar81 = vdivps_avx(auVar81,auVar98);
      auVar80._0_4_ = auVar115._0_4_ * __real_43000000;
      auVar80._4_4_ = auVar115._4_4_ * __real_43000000;
      auVar80._8_4_ = auVar115._8_4_ * __real_43000000;
      auVar80._12_4_ = auVar115._12_4_ * __real_43000000;
      auVar80._16_4_ = auVar115._16_4_ * __real_43000000;
      auVar80._20_4_ = auVar115._20_4_ * __real_43000000;
      auVar80._24_4_ = auVar115._24_4_ * __real_43000000;
      auVar80._28_4_ = auVar115._28_4_ * __real_43000000;
      auVar99._0_4_ = auVar70._0_4_ * __real_43000000;
      auVar99._4_4_ = auVar70._4_4_ * __real_43000000;
      auVar99._8_4_ = auVar70._8_4_ * __real_43000000;
      auVar99._12_4_ = auVar70._12_4_ * __real_43000000;
      auVar99._16_4_ = auVar70._16_4_ * __real_43000000;
      auVar99._20_4_ = auVar70._20_4_ * __real_43000000;
      auVar99._24_4_ = auVar70._24_4_ * __real_43000000;
      auVar99._28_4_ = auVar70._28_4_ * __real_43000000;
      auVar68._0_4_ = auVar81._0_4_ * __real_43000000;
      auVar68._4_4_ = auVar81._4_4_ * __real_43000000;
      auVar68._8_4_ = auVar81._8_4_ * __real_43000000;
      auVar68._12_4_ = auVar81._12_4_ * __real_43000000;
      auVar68._16_4_ = auVar81._16_4_ * __real_43000000;
      auVar68._20_4_ = auVar81._20_4_ * __real_43000000;
      auVar68._24_4_ = auVar81._24_4_ * __real_43000000;
      auVar68._28_4_ = auVar81._28_4_ * __real_43000000;
      break;
    case 3:
      auVar90 = vgatherdps(ZEXT832(0),auVar104);
      auVar70 = vgatherdps(ZEXT832(0),auVar104);
      auVar93 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar104);
      auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar104);
      auVar123 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar104);
      auVar91 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar104);
      auVar81 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar104);
      auVar97 = vpsrld_avx2(auVar81,0x15);
      auVar77 = vpsrld_avx2(auVar81,10);
      auVar119._4_4_ = __real_000007ff;
      auVar119._0_4_ = __real_000007ff;
      auVar119._8_4_ = __real_000007ff;
      auVar119._12_4_ = __real_000007ff;
      auVar119._16_4_ = __real_000007ff;
      auVar119._20_4_ = __real_000007ff;
      auVar119._24_4_ = __real_000007ff;
      auVar119._28_4_ = __real_000007ff;
      auVar124._4_4_ = __real_000003ff;
      auVar124._0_4_ = __real_000003ff;
      auVar124._8_4_ = __real_000003ff;
      auVar124._12_4_ = __real_000003ff;
      auVar124._16_4_ = __real_000003ff;
      auVar124._20_4_ = __real_000003ff;
      auVar124._24_4_ = __real_000003ff;
      auVar124._28_4_ = __real_000003ff;
      auVar81 = vpand_avx2(auVar124,auVar81);
      auVar34._0_4_ = __real_fffffe01 + auVar81._0_4_;
      auVar34._4_4_ = __real_fffffe01 + auVar81._4_4_;
      auVar34._8_4_ = __real_fffffe01 + auVar81._8_4_;
      auVar34._12_4_ = __real_fffffe01 + auVar81._12_4_;
      auVar34._16_4_ = __real_fffffe01 + auVar81._16_4_;
      auVar34._20_4_ = __real_fffffe01 + auVar81._20_4_;
      auVar34._24_4_ = __real_fffffe01 + auVar81._24_4_;
      auVar34._28_4_ = __real_fffffe01 + auVar81._28_4_;
      auVar81 = vcvtdq2ps_avx(auVar34);
      auVar125._4_4_ = __real_43ff8000;
      auVar125._0_4_ = __real_43ff8000;
      auVar125._8_4_ = __real_43ff8000;
      auVar125._12_4_ = __real_43ff8000;
      auVar125._16_4_ = __real_43ff8000;
      auVar125._20_4_ = __real_43ff8000;
      auVar125._24_4_ = __real_43ff8000;
      auVar125._28_4_ = __real_43ff8000;
      auVar115 = vdivps_avx(auVar81,auVar125);
      auVar81 = vpand_avx2(auVar77,auVar119);
      auVar35._0_4_ = auVar81._0_4_ + __real_fffffc01;
      auVar35._4_4_ = auVar81._4_4_ + __real_fffffc01;
      auVar35._8_4_ = auVar81._8_4_ + __real_fffffc01;
      auVar35._12_4_ = auVar81._12_4_ + __real_fffffc01;
      auVar35._16_4_ = auVar81._16_4_ + __real_fffffc01;
      auVar35._20_4_ = auVar81._20_4_ + __real_fffffc01;
      auVar35._24_4_ = auVar81._24_4_ + __real_fffffc01;
      auVar35._28_4_ = auVar81._28_4_ + __real_fffffc01;
      auVar81 = vcvtdq2ps_avx(auVar35);
      auVar126._4_4_ = __real_447fc000;
      auVar126._0_4_ = __real_447fc000;
      auVar126._8_4_ = __real_447fc000;
      auVar126._12_4_ = __real_447fc000;
      auVar126._16_4_ = __real_447fc000;
      auVar126._20_4_ = __real_447fc000;
      auVar126._24_4_ = __real_447fc000;
      auVar126._28_4_ = __real_447fc000;
      auVar81 = vdivps_avx(auVar81,auVar126);
      auVar80._0_4_ = auVar112._0_4_ * auVar115._0_4_ + auVar90._0_4_;
      auVar80._4_4_ = auVar112._4_4_ * auVar115._4_4_ + auVar90._4_4_;
      auVar80._8_4_ = auVar112._8_4_ * auVar115._8_4_ + auVar90._8_4_;
      auVar80._12_4_ = auVar112._12_4_ * auVar115._12_4_ + auVar90._12_4_;
      auVar80._16_4_ = auVar112._16_4_ * auVar115._16_4_ + auVar90._16_4_;
      auVar80._20_4_ = auVar112._20_4_ * auVar115._20_4_ + auVar90._20_4_;
      auVar80._24_4_ = auVar112._24_4_ * auVar115._24_4_ + auVar90._24_4_;
      auVar80._28_4_ = auVar112._28_4_ * auVar115._28_4_ + auVar90._28_4_;
      auVar99._0_4_ = auVar123._0_4_ * auVar81._0_4_ + auVar70._0_4_;
      auVar99._4_4_ = auVar123._4_4_ * auVar81._4_4_ + auVar70._4_4_;
      auVar99._8_4_ = auVar123._8_4_ * auVar81._8_4_ + auVar70._8_4_;
      auVar99._12_4_ = auVar123._12_4_ * auVar81._12_4_ + auVar70._12_4_;
      auVar99._16_4_ = auVar123._16_4_ * auVar81._16_4_ + auVar70._16_4_;
      auVar99._20_4_ = auVar123._20_4_ * auVar81._20_4_ + auVar70._20_4_;
      auVar99._24_4_ = auVar123._24_4_ * auVar81._24_4_ + auVar70._24_4_;
      auVar99._28_4_ = auVar123._28_4_ * auVar81._28_4_ + auVar70._28_4_;
      auVar36._0_4_ = auVar97._0_4_ + __real_fffffc01;
      auVar36._4_4_ = auVar97._4_4_ + __real_fffffc01;
      auVar36._8_4_ = auVar97._8_4_ + __real_fffffc01;
      auVar36._12_4_ = auVar97._12_4_ + __real_fffffc01;
      auVar36._16_4_ = auVar97._16_4_ + __real_fffffc01;
      auVar36._20_4_ = auVar97._20_4_ + __real_fffffc01;
      auVar36._24_4_ = auVar97._24_4_ + __real_fffffc01;
      auVar36._28_4_ = auVar97._28_4_ + __real_fffffc01;
      auVar81 = vcvtdq2ps_avx(auVar36);
      auVar81 = vdivps_avx(auVar81,auVar126);
      auVar68._0_4_ = auVar91._0_4_ * auVar81._0_4_ + auVar93._0_4_;
      auVar68._4_4_ = auVar91._4_4_ * auVar81._4_4_ + auVar93._4_4_;
      auVar68._8_4_ = auVar91._8_4_ * auVar81._8_4_ + auVar93._8_4_;
      auVar68._12_4_ = auVar91._12_4_ * auVar81._12_4_ + auVar93._12_4_;
      auVar68._16_4_ = auVar91._16_4_ * auVar81._16_4_ + auVar93._16_4_;
      auVar68._20_4_ = auVar91._20_4_ * auVar81._20_4_ + auVar93._20_4_;
      auVar68._24_4_ = auVar91._24_4_ * auVar81._24_4_ + auVar93._24_4_;
      auVar68._28_4_ = auVar91._28_4_ * auVar81._28_4_ + auVar93._28_4_;
      break;
    default:
      goto switchD_140ae4f76_caseD_4;
    }
    local_440 = vmaskmovps_avx(auVar104,auVar80);
    local_420 = vmaskmovps_avx(auVar104,auVar99);
  }
  else {
switchD_140ae4f76_caseD_4:
    auVar56._0_12_ = ZEXT812(0);
    auVar56._12_4_ = 0;
    auVar68 = ZEXT1632(auVar56);
    local_440 = vmaskmovps_avx(auVar104,ZEXT1632(auVar56));
    local_420 = vmaskmovps_avx(auVar104,ZEXT1632(auVar56));
  }
  local_400 = vmaskmovps_avx(auVar104,auVar68);
LAB_140ae5367:
  auVar81 = vsubps_avx(local_440,local_540);
  auVar115 = vsubps_avx(local_420,local_520);
  auVar70 = vsubps_avx(local_400,local_500._0_32_);
  fVar131 = auVar142._0_4_;
  auVar69._0_4_ = fVar131 * auVar81._0_4_ + local_540._0_4_;
  fVar135 = auVar142._4_4_;
  auVar69._4_4_ = fVar135 * auVar81._4_4_ + local_540._4_4_;
  fVar136 = auVar142._8_4_;
  auVar69._8_4_ = fVar136 * auVar81._8_4_ + local_540._8_4_;
  fVar137 = auVar142._12_4_;
  auVar69._12_4_ = fVar137 * auVar81._12_4_ + local_540._12_4_;
  fVar138 = auVar142._16_4_;
  auVar69._16_4_ = fVar138 * auVar81._16_4_ + local_540._16_4_;
  fVar139 = auVar142._20_4_;
  auVar69._20_4_ = fVar139 * auVar81._20_4_ + local_540._20_4_;
  fVar140 = auVar142._24_4_;
  auVar69._24_4_ = fVar140 * auVar81._24_4_ + local_540._24_4_;
  fVar141 = auVar142._28_4_;
  auVar69._28_4_ = fVar141 * auVar81._28_4_ + local_540._28_4_;
  auVar82._0_4_ = fVar131 * auVar115._0_4_ + local_520._0_4_;
  auVar82._4_4_ = fVar135 * auVar115._4_4_ + local_520._4_4_;
  auVar82._8_4_ = fVar136 * auVar115._8_4_ + local_520._8_4_;
  auVar82._12_4_ = fVar137 * auVar115._12_4_ + local_520._12_4_;
  auVar82._16_4_ = fVar138 * auVar115._16_4_ + local_520._16_4_;
  auVar82._20_4_ = fVar139 * auVar115._20_4_ + local_520._20_4_;
  auVar82._24_4_ = fVar140 * auVar115._24_4_ + local_520._24_4_;
  auVar82._28_4_ = fVar141 * auVar115._28_4_ + local_520._28_4_;
  auVar89._0_4_ = fVar131 * auVar70._0_4_ + local_500._0_4_;
  auVar89._4_4_ = fVar135 * auVar70._4_4_ + local_500._4_4_;
  auVar89._8_4_ = fVar136 * auVar70._8_4_ + local_500._8_4_;
  auVar89._12_4_ = fVar137 * auVar70._12_4_ + local_500._12_4_;
  auVar89._16_4_ = fVar138 * auVar70._16_4_ + local_500._16_4_;
  auVar89._20_4_ = fVar139 * auVar70._20_4_ + local_500._20_4_;
  auVar89._24_4_ = fVar140 * auVar70._24_4_ + local_500._24_4_;
  auVar89._28_4_ = fVar141 * auVar70._28_4_ + local_500._28_4_;
  local_540 = vmaskmovps_avx(auVar104,auVar69);
  local_520 = vmaskmovps_avx(auVar104,auVar82);
  local_500._0_32_ = vmaskmovps_avx(auVar104,auVar89);
LAB_140ae53c4:
  auVar81 = vperm2i128_avx2(local_540,local_520,0x20);
  auVar115 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                         ZEXT1632(local_500._0_16_));
  auVar142 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                         auVar81);
  local_200 = vpblendd_avx2(auVar142,auVar115,0xcc);
  auVar115 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                         ZEXT1632(local_500._0_16_));
  auVar81 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                        auVar81);
  local_1e0 = vpblendd_avx2(auVar81,auVar115,0xcc);
  auVar81 = vperm2i128_avx2(local_540,local_520,0x31);
  auVar115 = vpermd_avx2(___ymm_0000000500000001000000000000000000000004000000000000000000000000,
                         ZEXT1632(local_500._16_16_));
  auVar142 = vpermd_avx2(___ymm_0000000000000000000000050000000100000000000000000000000400000000,
                         auVar81);
  local_1c0 = vpblendd_avx2(auVar142,auVar115,0xcc);
  auVar115 = vpermd_avx2(___ymm_0000000700000003000000000000000000000006000000020000000000000000,
                         ZEXT1632(local_500._16_16_));
  auVar81 = vpermd_avx2(___ymm_0000000000000000000000070000000300000000000000000000000600000002,
                        auVar81);
  local_1a0 = vpblendd_avx2(auVar81,auVar115,0xcc);
  uVar44 = vmovmskps_avx(auVar74);
  uVar47 = (ulonglong)uVar44;
  do {
    uVar44 = 0;
    for (uVar39 = uVar47; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x8000000000000000) {
      uVar44 = uVar44 + 1;
    }
    bVar1 = (byte)uVar44 & 0x3f;
    auVar81 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar44 << 4)));
    *(undefined1 (*) [32])
     (param_1 + 0x40 + (longlong)*(int *)(local_240 + (ulonglong)(uVar44 & 7) * 4) * 0x60) = auVar81
    ;
    uVar47 = uVar47 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
  } while (uVar47 != 0);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GetConstantKeyLerpPoseRotations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_avx @ 140ae5540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseRotations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint *param_4,undefined8 param_5,
               float param_6,char param_7,uint param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  float fVar48;
  float fVar49;
  undefined1 auVar33 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar50;
  float fVar54;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar55;
  float fVar71;
  float fVar72;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  uint uVar78;
  float fVar79;
  float fVar85;
  float fVar86;
  uint uVar88;
  float fVar91;
  float fVar92;
  undefined1 auVar80 [32];
  float fVar87;
  float fVar89;
  float fVar93;
  undefined1 auVar81 [32];
  undefined1 auVar90 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
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
  float fVar107;
  uint uVar108;
  float fVar118;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar124;
  float fVar125;
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  float fVar126;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  uint uVar119;
  uint uVar123;
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar127 [16];
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
  undefined1 auVar141 [32];
  uint uVar146;
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar147 [16];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  float fVar162;
  undefined1 auVar153 [16];
  float fVar152;
  float fVar160;
  float fVar161;
  float fVar163;
  float fVar164;
  float fVar165;
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  float fVar166;
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar167 [16];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [16];
  undefined1 auVar180 [32];
  undefined1 auVar179 [16];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [64];
  undefined1 auVar185 [16];
  undefined1 in_ZMM14 [64];
  undefined1 local_6a0 [32];
  undefined1 local_640 [32];
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
  undefined1 local_4c0 [32];
  float local_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
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
  ulonglong local_420;
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
  undefined1 local_3a0 [8];
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
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
  undefined1 local_68 [16];
  undefined1 auVar66 [32];
  undefined1 auVar173 [32];
  
  local_68 = in_ZMM14._0_16_;
  lVar20 = (longlong)(int)param_8;
  iVar1 = *(int *)(&DAT_151c6bb90 + lVar20 * 4);
  iVar2 = *(int *)(&DAT_151c6bb70 + lVar20 * 4);
  uVar13 = 0x18;
  if (lVar20 != 3) {
    uVar13 = 0;
  }
  uVar10 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar10 = param_9;
  }
  uVar17 = (ulonglong)param_8;
  uVar15 = 0;
  if (0 < (int)(uVar10 & 0xfffffff8)) {
    auVar90 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
    auVar5 = vpshufd_avx(ZEXT416(uVar13),0);
    vpblendw_avx(auVar5,(undefined1  [16])0x0,0xcc);
    vpmovzxdq_avx(auVar5);
    auVar5 = vpshufd_avx(ZEXT416((uint)(iVar1 * iVar2)),0);
    uVar15 = 0;
    auVar184 = ZEXT1664(CONCAT412(__real_00000001,
                                  CONCAT48(__real_00000001,CONCAT44(__real_00000001,__real_00000001)
                                          )));
    do {
      uVar14 = (ulonglong)(uint)((int)uVar15 * 8);
      auVar57 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar14);
      auVar58 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar14);
      auVar179 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar14);
      auVar33 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar14),auVar57,0xdd);
      auVar56 = vshufps_avx(auVar58,auVar179,0xdd);
      auVar56 = vpslld_avx(auVar56,4);
      auVar33 = vpslld_avx(auVar33,4);
      uVar3 = *(uint *)(param_3 + 8 + (longlong)auVar33._0_4_);
      uVar4 = *(uint *)(param_3 + 8 + (longlong)auVar56._0_4_);
      uVar108 = *(uint *)(param_3 + 0xc + (longlong)auVar33._0_4_);
      auVar127 = ZEXT416(uVar108);
      uVar119 = *(uint *)(param_3 + 0xc + (longlong)auVar56._0_4_);
      auVar178 = auVar184._0_16_;
      auVar33 = vpcmpeqd_avx(auVar178,ZEXT416(uVar119));
      auVar56 = vpcmpeqd_avx(auVar178,auVar127);
      auVar33 = vpor_avx(auVar56,auVar33);
      auVar56 = ZEXT416(uVar119);
      if ((((SUB161(auVar33 >> 0x1f,0) & 1) != 0 || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || auVar33[0xf] < '\0') {
        auVar147 = vpcmpeqd_avx(auVar178,auVar56);
        auVar153 = vpcmpeqd_avx(auVar127,auVar178);
        auVar80._16_16_ = auVar147;
        auVar80._0_16_ = auVar153;
        uVar78 = auVar153._0_4_;
        uVar88 = auVar147._0_4_;
        lVar20 = (longlong)(int)(uVar78 & uVar3);
        lVar24 = (longlong)(int)(uVar88 & uVar4);
        auVar33 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                 (ulonglong)(uVar88 & _UNK_150b50d50) + lVar24)),
                                ZEXT416(*(uint *)((ulonglong)(auVar147._4_4_ & _UNK_150b50d54) +
                                                 (longlong)param_4)),0x10);
        auVar178 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                  (ulonglong)(uVar88 & _UNK_150b50d70) + lVar24)),
                                 ZEXT416(*(uint *)((ulonglong)(auVar147._4_4_ & _UNK_150b50d74) +
                                                  (longlong)param_4)),0x10);
        auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar147._8_4_ & _UNK_150b50d58) +
                                                         (longlong)param_4)),0x20);
        auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar147._8_4_ & _UNK_150b50d78) +
                                                           (longlong)param_4)),0x20);
        auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar147._12_4_ & _UNK_150b50d5c) +
                                                         (longlong)param_4)),0x30);
        auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar147._12_4_ & _UNK_150b50d7c) +
                                                           (longlong)param_4)),0x30);
        auVar147 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                  (ulonglong)
                                                  (uVar78 & 
                                                  ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                                  ) + lVar20)),
                                 ZEXT416(*(uint *)((ulonglong)(auVar153._4_4_ & _UNK_150b50d44) +
                                                  (longlong)param_4)),0x10);
        auVar185 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                  (ulonglong)
                                                  (uVar78 & 
                                                  ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                                  ) + lVar20)),
                                 ZEXT416(*(uint *)((ulonglong)(auVar153._4_4_ & _UNK_150b50d64) +
                                                  (longlong)param_4)),0x10);
        auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar153._8_4_ & _UNK_150b50d48) +
                                                           (longlong)param_4)),0x20);
        auVar185 = vinsertps_avx(auVar185,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar153._8_4_ & _UNK_150b50d68) +
                                                           (longlong)param_4)),0x20);
        auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar153._12_4_ & _UNK_150b50d4c) +
                                                           (longlong)param_4)),0x30);
        auVar185 = vinsertps_avx(auVar185,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar153._12_4_ & _UNK_150b50d6c) +
                                                           (longlong)param_4)),0x30);
        auVar153 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar24)),ZEXT416(*param_4),
                                 0x10);
        auVar153 = vinsertps_avx(auVar153,ZEXT416(*param_4),0x20);
        auVar153 = vinsertps_avx(auVar153,ZEXT416(*param_4),0x30);
        auVar60 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar20)),ZEXT416(*param_4),
                                0x10);
        auVar60 = vinsertps_avx(auVar60,ZEXT416(*param_4),0x20);
        auVar60 = vinsertps_avx(auVar60,ZEXT416(*param_4),0x30);
        in_ZMM14 = ZEXT1664(auVar60);
        auVar180._16_16_ = auVar153;
        auVar180._0_16_ = auVar60;
        auVar34._16_16_ = auVar33;
        auVar34._0_16_ = auVar147;
        auVar109._16_16_ = auVar178;
        auVar109._0_16_ = auVar185;
        auVar154._0_4_ = auVar60._0_4_ * auVar60._0_4_;
        auVar154._4_4_ = auVar60._4_4_ * auVar60._4_4_;
        auVar154._8_4_ = auVar60._8_4_ * auVar60._8_4_;
        auVar154._12_4_ = auVar60._12_4_ * auVar60._12_4_;
        auVar154._16_4_ = auVar153._0_4_ * auVar153._0_4_;
        auVar154._20_4_ = auVar153._4_4_ * auVar153._4_4_;
        auVar154._24_4_ = auVar153._8_4_ * auVar153._8_4_;
        auVar154._28_4_ = auVar153._12_4_ * auVar153._12_4_;
        auVar97._4_4_ = __real_3f800000;
        auVar97._0_4_ = __real_3f800000;
        auVar97._8_4_ = __real_3f800000;
        auVar97._12_4_ = __real_3f800000;
        auVar97._16_4_ = __real_3f800000;
        auVar97._20_4_ = __real_3f800000;
        auVar97._24_4_ = __real_3f800000;
        auVar97._28_4_ = __real_3f800000;
        auVar154 = vsubps_avx(auVar97,auVar154);
        auVar168._0_4_ = auVar147._0_4_ * auVar147._0_4_;
        auVar168._4_4_ = auVar147._4_4_ * auVar147._4_4_;
        auVar168._8_4_ = auVar147._8_4_ * auVar147._8_4_;
        auVar168._12_4_ = auVar147._12_4_ * auVar147._12_4_;
        auVar168._16_4_ = auVar33._0_4_ * auVar33._0_4_;
        auVar168._20_4_ = auVar33._4_4_ * auVar33._4_4_;
        auVar168._24_4_ = auVar33._8_4_ * auVar33._8_4_;
        auVar168._28_4_ = auVar33._12_4_ * auVar33._12_4_;
        auVar154 = vsubps_avx(auVar154,auVar168);
        auVar169._0_4_ = auVar185._0_4_ * auVar185._0_4_;
        auVar169._4_4_ = auVar185._4_4_ * auVar185._4_4_;
        auVar169._8_4_ = auVar185._8_4_ * auVar185._8_4_;
        auVar169._12_4_ = auVar185._12_4_ * auVar185._12_4_;
        auVar169._16_4_ = auVar178._0_4_ * auVar178._0_4_;
        auVar169._20_4_ = auVar178._4_4_ * auVar178._4_4_;
        auVar169._24_4_ = auVar178._8_4_ * auVar178._8_4_;
        auVar169._28_4_ = auVar178._12_4_ * auVar178._12_4_;
        auVar97 = vsubps_avx(auVar154,auVar169);
        auVar154 = vcmpps_avx(ZEXT432(0) << 0x20,auVar97,1);
        auVar97 = vsqrtps_avx(auVar97);
        auVar155._0_4_ = auVar154._0_4_ & auVar97._0_4_;
        auVar155._4_4_ = auVar154._4_4_ & auVar97._4_4_;
        auVar155._8_4_ = auVar154._8_4_ & auVar97._8_4_;
        auVar155._12_4_ = auVar154._12_4_ & auVar97._12_4_;
        auVar155._16_4_ = auVar154._16_4_ & auVar97._16_4_;
        auVar155._20_4_ = auVar154._20_4_ & auVar97._20_4_;
        auVar155._24_4_ = auVar154._24_4_ & auVar97._24_4_;
        auVar155._28_4_ = auVar154._28_4_ & auVar97._28_4_;
        _local_400 = vmaskmovps_avx(auVar80,auVar180);
        auVar184 = ZEXT1664(CONCAT412(__real_00000001,
                                      CONCAT48(__real_00000001,
                                               CONCAT44(__real_00000001,__real_00000001))));
        _local_3e0 = vmaskmovps_avx(auVar80,auVar34);
        _local_3c0 = vmaskmovps_avx(auVar80,auVar109);
        _local_3a0 = vmaskmovps_avx(auVar80,auVar155);
      }
      auVar110._16_16_ = auVar179;
      auVar110._0_16_ = auVar57;
      auVar128._16_16_ = auVar58;
      auVar128._0_16_ = *(undefined1 (*) [16])(param_2 + uVar14);
      auVar179 = auVar184._0_16_;
      auVar57 = vpcmpeqd_avx(auVar179,auVar56);
      auVar58 = vpcmpeqd_avx(auVar127,auVar179);
      auVar35._16_16_ = auVar57;
      auVar35._0_16_ = auVar58;
      uVar11 = vmovmskps_avx(auVar35);
      bVar9 = (byte)uVar11 ^ 0xff;
      if (bVar9 != 0) {
        auVar33._4_4_ = __real_00000002;
        auVar33._0_4_ = __real_00000002;
        auVar33._8_4_ = __real_00000002;
        auVar33._12_4_ = __real_00000002;
        auVar178 = vpcmpgtd_avx(auVar33,auVar56);
        auVar147 = vpcmpgtd_avx(auVar33,auVar127);
        auVar33 = vpcmpeqd_avx(auVar127,auVar179);
        auVar134._0_4_ = auVar33._0_4_ ^ auVar147._0_4_;
        auVar134._4_4_ = auVar33._4_4_ ^ auVar147._4_4_;
        auVar134._8_4_ = auVar33._8_4_ ^ auVar147._8_4_;
        auVar134._12_4_ = auVar33._12_4_ ^ auVar147._12_4_;
        uVar78 = auVar57._0_4_;
        auVar134._16_4_ = uVar78 ^ auVar178._0_4_;
        uVar88 = auVar57._4_4_;
        auVar134._20_4_ = uVar88 ^ auVar178._4_4_;
        uVar123 = auVar57._8_4_;
        auVar134._24_4_ = uVar123 ^ auVar178._8_4_;
        uVar146 = auVar57._12_4_;
        auVar134._28_4_ = uVar146 ^ auVar178._12_4_;
        iVar12 = vmovmskps_avx(auVar134);
        if (iVar12 == 0) {
          auVar36 = ZEXT1632((undefined1  [16])0x0);
LAB_140ae5adb:
          auVar154 = ZEXT832(0) << 0x20;
          auVar97 = vcmpps_avx(ZEXT832(0) << 0x20,ZEXT832(0) << 0x20,0xf);
          auVar111._0_4_ = auVar36._0_4_ ^ auVar97._0_4_;
          auVar111._4_4_ = auVar36._4_4_ ^ auVar97._4_4_;
          auVar111._8_4_ = auVar36._8_4_ ^ auVar97._8_4_;
          auVar111._12_4_ = auVar36._12_4_ ^ auVar97._12_4_;
          auVar111._16_4_ = auVar36._16_4_ ^ auVar97._16_4_;
          auVar111._20_4_ = auVar36._20_4_ ^ auVar97._20_4_;
          auVar111._24_4_ = auVar36._24_4_ ^ auVar97._24_4_;
          auVar111._28_4_ = auVar36._28_4_ ^ auVar97._28_4_;
          if (param_6 <= 0.0) {
            auVar179 = vpcmpeqd_avx(auVar127,auVar179);
            auVar39._0_4_ = ~auVar179._0_4_ & auVar111._0_4_;
            auVar39._4_4_ = ~auVar179._4_4_ & auVar111._4_4_;
            auVar39._8_4_ = ~auVar179._8_4_ & auVar111._8_4_;
            auVar39._12_4_ = ~auVar179._12_4_ & auVar111._12_4_;
            auVar39._16_4_ = ~uVar78 & auVar111._16_4_;
            auVar39._20_4_ = ~uVar88 & auVar111._20_4_;
            auVar39._24_4_ = ~uVar123 & auVar111._24_4_;
            auVar39._28_4_ = ~uVar146 & auVar111._28_4_;
            auVar97 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
            local_6a0 = vblendvps_avx(local_6a0,auVar97,auVar39);
            local_640 = vblendvps_avx(local_640,auVar97,auVar39);
          }
          else {
            auVar33 = vpcmpeqd_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6));
            auVar56._0_4_ = uVar119 + auVar33._0_4_;
            auVar56._4_4_ = auVar33._4_4_;
            auVar56._8_4_ = auVar33._8_4_;
            auVar56._12_4_ = auVar33._12_4_;
            auVar178._0_4_ = uVar108 + auVar33._0_4_;
            auVar178._4_4_ = auVar33._4_4_;
            auVar178._8_4_ = auVar33._8_4_;
            auVar178._12_4_ = auVar33._12_4_;
            auVar37._16_16_ = auVar56;
            auVar37._0_16_ = auVar178;
            if (__real_3f800000 <= param_6) {
              auVar179 = vpcmpeqd_avx(auVar127,auVar179);
              auVar98._0_4_ = ~auVar179._0_4_ & auVar111._0_4_;
              auVar98._4_4_ = ~auVar179._4_4_ & auVar111._4_4_;
              auVar98._8_4_ = ~auVar179._8_4_ & auVar111._8_4_;
              auVar98._12_4_ = ~auVar179._12_4_ & auVar111._12_4_;
              auVar98._16_4_ = ~uVar78 & auVar111._16_4_;
              auVar98._20_4_ = ~uVar88 & auVar111._20_4_;
              auVar98._24_4_ = ~uVar123 & auVar111._24_4_;
              auVar98._28_4_ = ~uVar146 & auVar111._28_4_;
              local_6a0 = vblendvps_avx(local_6a0,auVar37,auVar98);
              local_640 = vblendvps_avx(local_640,auVar37,auVar98);
              auVar97 = ZEXT432(0) << 0x20;
            }
            else {
              auVar154 = vcvtdq2ps_avx(auVar37);
              local_260 = auVar90._0_4_;
              fStack_25c = auVar90._4_4_;
              fStack_258 = auVar90._8_4_;
              fStack_254 = auVar90._12_4_;
              auVar135._0_4_ = auVar154._0_4_ * local_260;
              auVar135._4_4_ = auVar154._4_4_ * fStack_25c;
              auVar135._8_4_ = auVar154._8_4_ * fStack_258;
              auVar135._12_4_ = auVar154._12_4_ * fStack_254;
              auVar135._16_4_ = auVar154._16_4_ * local_260;
              auVar135._20_4_ = auVar154._20_4_ * fStack_25c;
              auVar135._24_4_ = auVar154._24_4_ * fStack_258;
              auVar135._28_4_ = auVar154._28_4_ * fStack_254;
              auVar154 = vroundps_avx(auVar135,9);
              auVar97 = SUB6432(ZEXT864(0),0) << 0x20;
              if (param_7 != '\x01') {
                auVar97 = vsubps_avx(auVar135,auVar154);
              }
              auVar179 = vpcmpeqd_avx(auVar127,auVar179);
              auVar136._0_4_ = ~auVar179._0_4_ & auVar111._0_4_;
              auVar136._4_4_ = ~auVar179._4_4_ & auVar111._4_4_;
              auVar136._8_4_ = ~auVar179._8_4_ & auVar111._8_4_;
              auVar136._12_4_ = ~auVar179._12_4_ & auVar111._12_4_;
              auVar136._16_4_ = ~uVar78 & auVar111._16_4_;
              auVar136._20_4_ = ~uVar88 & auVar111._20_4_;
              auVar136._24_4_ = ~uVar123 & auVar111._24_4_;
              auVar136._28_4_ = ~uVar146 & auVar111._28_4_;
              auVar127._0_4_ = (int)auVar154._0_4_;
              auVar127._4_4_ = (int)auVar154._4_4_;
              auVar127._8_4_ = (int)auVar154._8_4_;
              auVar127._12_4_ = (int)auVar154._12_4_;
              auVar129._16_4_ = (int)auVar154._16_4_;
              auVar129._0_16_ = auVar127;
              auVar129._20_4_ = (int)auVar154._20_4_;
              auVar129._24_4_ = (int)auVar154._24_4_;
              auVar129._28_4_ = (int)auVar154._28_4_;
              auVar179 = vpminsd_avx(auVar129._16_16_,auVar56);
              auVar33 = vpminsd_avx(auVar127,auVar178);
              auVar130._16_16_ = auVar179;
              auVar130._0_16_ = auVar33;
              local_6a0 = vblendvps_avx(local_6a0,auVar130,auVar136);
              auVar179 = vpcmpeqd_avx(in_ZMM14._0_16_,in_ZMM14._0_16_);
              auVar33 = vpsubd_avx(local_6a0._0_16_,auVar179);
              auVar179 = vpsubd_avx(local_6a0._16_16_,auVar179);
              auVar179 = vpminsd_avx(auVar179,auVar56);
              auVar33 = vpminsd_avx(auVar33,auVar178);
              auVar38._16_16_ = auVar179;
              auVar38._0_16_ = auVar33;
              local_640 = vblendvps_avx(local_640,auVar38,auVar136);
              auVar154 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
            }
          }
          local_4c0 = vblendvps_avx(local_4c0,auVar97,auVar111);
        }
        else {
          auVar33 = vpackssdw_avx(auVar33 ^ auVar147,auVar57 ^ auVar178);
          auVar178 = vpmovsxwd_avx(auVar33);
          auVar33 = vpunpckhwd_avx(auVar33,auVar33);
          auVar36._16_16_ = auVar33;
          auVar36._0_16_ = auVar178;
          local_6a0._0_4_ = ~auVar178._0_4_ & local_6a0._0_4_;
          local_6a0._4_4_ = ~auVar178._4_4_ & local_6a0._4_4_;
          local_6a0._8_4_ = ~auVar178._8_4_ & local_6a0._8_4_;
          local_6a0._12_4_ = ~auVar178._12_4_ & local_6a0._12_4_;
          local_6a0._16_4_ = ~auVar33._0_4_ & local_6a0._16_4_;
          local_6a0._20_4_ = ~auVar33._4_4_ & local_6a0._20_4_;
          local_6a0._24_4_ = ~auVar33._8_4_ & local_6a0._24_4_;
          local_6a0._28_4_ = ~auVar33._12_4_ & local_6a0._28_4_;
          local_640._0_4_ = ~auVar178._0_4_ & local_640._0_4_;
          local_640._4_4_ = ~auVar178._4_4_ & local_640._4_4_;
          local_640._8_4_ = ~auVar178._8_4_ & local_640._8_4_;
          local_640._12_4_ = ~auVar178._12_4_ & local_640._12_4_;
          local_640._16_4_ = ~auVar33._0_4_ & local_640._16_4_;
          local_640._20_4_ = ~auVar33._4_4_ & local_640._20_4_;
          local_640._24_4_ = ~auVar33._8_4_ & local_640._24_4_;
          local_640._28_4_ = ~auVar33._12_4_ & local_640._28_4_;
          auVar33 = vpcmpgtd_avx(auVar56,auVar179);
          auVar56 = vpcmpgtd_avx(auVar127,auVar179);
          local_4c0._4_4_ = auVar56._4_4_ & local_4c0._4_4_;
          local_4c0._0_4_ = auVar56._0_4_ & local_4c0._0_4_;
          local_4c0._8_4_ = auVar56._8_4_ & local_4c0._8_4_;
          local_4c0._12_4_ = auVar56._12_4_ & local_4c0._12_4_;
          local_4c0._16_4_ = auVar33._0_4_ & local_4c0._16_4_;
          local_4c0._20_4_ = auVar33._4_4_ & local_4c0._20_4_;
          local_4c0._24_4_ = auVar33._8_4_ & local_4c0._24_4_;
          local_4c0._28_4_ = auVar33._12_4_ & local_4c0._28_4_;
          auVar154 = ZEXT832(0) << 0x20;
          if (bVar9 != (byte)iVar12) goto LAB_140ae5adb;
        }
        vpmovsxdq_avx(ZEXT416(uVar4));
        auVar179 = vpshufd_avx(ZEXT416(uVar4),0xee);
        vpmovsxdq_avx(auVar179);
        vpmovsxdq_avx(ZEXT416(uVar3));
        auVar179 = vpshufd_avx(ZEXT416(uVar3),0xee);
        auVar33 = vpmovsxdq_avx(auVar179);
        auVar179 = vpackssdw_avx(auVar58,auVar57);
        auVar33 = vpcmpeqd_avx(auVar33,auVar33);
        auVar179 = auVar179 ^ auVar33;
        auVar56 = vpmovsxwd_avx(auVar179);
        auVar127 = vpunpckhwd_avx(auVar179,auVar179);
        if (param_8 < 6) {
          auVar90 = vpmulld_avx(local_6a0._0_16_,auVar5);
          auVar5 = vpmulld_avx(local_6a0._16_16_,auVar5);
          vpmovsxdq_avx(auVar5);
          auVar5 = vpshufd_avx(auVar5,0xee);
          vpmovsxdq_avx(auVar5);
          auVar5 = vpmovsxdq_avx(auVar90);
          auVar90 = vpshufd_avx(auVar90,0xee);
          vpmovsxdq_avx(auVar90);
                    /* WARNING: Could not recover jumptable at 0x000140ae5d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6b8f0 + *(int *)(&DAT_151c6b8f0 + uVar17 * 4)))
                    (&DAT_151c6b8f0 + *(int *)(&DAT_151c6b8f0 + uVar17 * 4),
                     auVar58._0_8_ ^ auVar33._0_8_,auVar57._0_8_,auVar5._0_8_);
          return;
        }
        auVar40._16_16_ = auVar127;
        auVar40._0_16_ = auVar56;
        _local_400 = vmaskmovps_avx(auVar40,auVar154);
        _local_3e0 = vmaskmovps_avx(auVar40,auVar154);
        _local_3c0 = vmaskmovps_avx(auVar40,auVar154);
        auVar176._4_4_ = __real_3f800000;
        auVar176._0_4_ = __real_3f800000;
        auVar176._8_4_ = __real_3f800000;
        auVar176._12_4_ = __real_3f800000;
        auVar176._16_4_ = __real_3f800000;
        auVar176._20_4_ = __real_3f800000;
        auVar176._24_4_ = __real_3f800000;
        auVar176._28_4_ = __real_3f800000;
        _local_3a0 = vmaskmovps_avx(auVar40,auVar176);
        in_ZMM14 = ZEXT3264(local_640);
        auVar57 = vpcmpeqd_avx(local_6a0._16_16_,local_640._16_16_);
        auVar58 = vpcmpeqd_avx(local_6a0._0_16_,local_640._0_16_);
        auVar94._16_16_ = auVar127;
        auVar94._0_16_ = auVar56;
        auVar99._16_16_ = auVar57;
        auVar99._0_16_ = auVar58;
        auVar94 = auVar94 & ~auVar99;
        if ((((((((SUB321(auVar94 >> 0x1f,0) & 1) != 0 || (SUB321(auVar94 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar94 >> 0x5f,0) & 1) != 0) || SUB321(auVar94 >> 0x7f,0) != '\0') ||
              (SUB321(auVar94 >> 0x9f,0) & 1) != 0) || SUB321(auVar94 >> 0xbf,0) != '\0') ||
            (SUB321(auVar94 >> 0xdf,0) & 1) != 0) || auVar94[0x1f] < '\0') {
          auVar57 = vpackssdw_avx(auVar58,auVar57);
          auVar57 = vpandn_avx(auVar57,auVar179);
          auVar58 = vpmovsxwd_avx(auVar57);
          auVar57 = vpunpckhwd_avx(auVar57,auVar57);
          if (param_8 < 6) {
            auVar90 = vpmulld_avx(local_640._0_16_,auVar5);
            auVar5 = vpmulld_avx(local_640._16_16_,auVar5);
            vpmovsxdq_avx(auVar5);
            auVar5 = vpshufd_avx(auVar5,0xee);
            vpmovsxdq_avx(auVar5);
            auVar5 = vpmovsxdq_avx(auVar90);
            auVar90 = vpshufd_avx(auVar90,0xee);
            auVar90 = vpmovsxdq_avx(auVar90);
                    /* WARNING: Could not recover jumptable at 0x000140ae71b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_151c6b908 + *(int *)(&DAT_151c6b908 + uVar17 * 4)))
                      (&DAT_151c6b908 + *(int *)(&DAT_151c6b908 + uVar17 * 4),auVar58._0_8_,
                       auVar90._0_8_,auVar5._0_8_);
            return;
          }
          auVar41._16_16_ = auVar57;
          auVar41._0_16_ = auVar58;
          auVar97 = vmaskmovps_avx(auVar41,auVar154);
          auVar34 = vmaskmovps_avx(auVar41,auVar154);
          auVar80 = vmaskmovps_avx(auVar41,auVar154);
          auVar109 = vmaskmovps_avx(auVar41,auVar176);
          local_2e0 = auVar97._0_4_;
          fStack_2dc = auVar97._4_4_;
          fStack_2d8 = auVar97._8_4_;
          fStack_2d4 = auVar97._12_4_;
          fStack_2d0 = auVar97._16_4_;
          fStack_2cc = auVar97._20_4_;
          fStack_2c8 = auVar97._24_4_;
          fStack_2c4 = auVar97._28_4_;
          local_2c0 = auVar34._0_4_;
          fStack_2bc = auVar34._4_4_;
          fStack_2b8 = auVar34._8_4_;
          fStack_2b4 = auVar34._12_4_;
          fStack_2b0 = auVar34._16_4_;
          fStack_2ac = auVar34._20_4_;
          fStack_2a8 = auVar34._24_4_;
          fStack_2a4 = auVar34._28_4_;
          local_2a0 = auVar80._0_4_;
          fStack_29c = auVar80._4_4_;
          fStack_298 = auVar80._8_4_;
          fStack_294 = auVar80._12_4_;
          fStack_290 = auVar80._16_4_;
          fStack_28c = auVar80._20_4_;
          fStack_288 = auVar80._24_4_;
          fStack_284 = auVar80._28_4_;
          local_280 = auVar109._0_4_;
          fStack_27c = auVar109._4_4_;
          fStack_278 = auVar109._8_4_;
          fStack_274 = auVar109._12_4_;
          fStack_270 = auVar109._16_4_;
          fStack_26c = auVar109._20_4_;
          fStack_268 = auVar109._24_4_;
          fStack_264 = auVar109._28_4_;
          auVar156._0_4_ =
               (float)local_400._0_4_ * local_2e0 + (float)local_3c0._0_4_ * local_2a0 +
               (float)local_3e0._0_4_ * local_2c0 + local_280 * (float)local_3a0._0_4_;
          auVar156._4_4_ =
               (float)local_400._4_4_ * fStack_2dc + (float)local_3c0._4_4_ * fStack_29c +
               (float)local_3e0._4_4_ * fStack_2bc + fStack_27c * (float)local_3a0._4_4_;
          auVar156._8_4_ =
               fStack_3f8 * fStack_2d8 + fStack_3b8 * fStack_298 +
               fStack_3d8 * fStack_2b8 + fStack_278 * fStack_398;
          auVar156._12_4_ =
               fStack_3f4 * fStack_2d4 + fStack_3b4 * fStack_294 +
               fStack_3d4 * fStack_2b4 + fStack_274 * fStack_394;
          auVar156._16_4_ =
               fStack_3f0 * fStack_2d0 + fStack_3b0 * fStack_290 +
               fStack_3d0 * fStack_2b0 + fStack_270 * fStack_390;
          auVar156._20_4_ =
               fStack_3ec * fStack_2cc + fStack_3ac * fStack_28c +
               fStack_3cc * fStack_2ac + fStack_26c * fStack_38c;
          auVar156._24_4_ =
               fStack_3e8 * fStack_2c8 + fStack_3a8 * fStack_288 +
               fStack_3c8 * fStack_2a8 + fStack_268 * fStack_388;
          auVar156._28_4_ =
               fStack_3e4 * fStack_2c4 + fStack_3a4 * fStack_284 +
               fStack_3c4 * fStack_2a4 + fStack_264 * fStack_384;
          auVar154 = vcmpps_avx(auVar154,auVar156,6);
          auVar154 = vcvtdq2ps_avx(auVar154 |
                                   ___ymm_0000000100000001000000010000000100000001000000010000000100000001
                                  );
          auVar97 = vsubps_avx(auVar176,local_4c0);
          fVar152 = auVar97._0_4_ * auVar154._0_4_;
          fVar160 = auVar97._4_4_ * auVar154._4_4_;
          fVar161 = auVar97._8_4_ * auVar154._8_4_;
          fVar162 = auVar97._12_4_ * auVar154._12_4_;
          fVar163 = auVar97._16_4_ * auVar154._16_4_;
          fVar164 = auVar97._20_4_ * auVar154._20_4_;
          fVar165 = auVar97._24_4_ * auVar154._24_4_;
          fVar166 = auVar97._28_4_ * auVar154._28_4_;
          fVar107 = local_4c0._0_4_;
          fVar118 = local_4c0._4_4_;
          fVar120 = local_4c0._8_4_;
          fVar121 = local_4c0._12_4_;
          fVar122 = local_4c0._16_4_;
          fVar124 = local_4c0._20_4_;
          fVar125 = local_4c0._24_4_;
          fVar126 = local_4c0._28_4_;
          fVar32 = fVar107 * local_2e0 + fVar152 * (float)local_400._0_4_;
          fVar48 = fVar118 * fStack_2dc + fVar160 * (float)local_400._4_4_;
          fVar49 = fVar120 * fStack_2d8 + fVar161 * fStack_3f8;
          fVar50 = fVar121 * fStack_2d4 + fVar162 * fStack_3f4;
          fVar51 = fVar122 * fStack_2d0 + fVar163 * fStack_3f0;
          fVar52 = fVar124 * fStack_2cc + fVar164 * fStack_3ec;
          fVar53 = fVar125 * fStack_2c8 + fVar165 * fStack_3e8;
          fVar54 = fVar126 * fStack_2c4 + fVar166 * fStack_3e4;
          fVar55 = fVar107 * local_2c0 + fVar152 * (float)local_3e0._0_4_;
          fVar71 = fVar118 * fStack_2bc + fVar160 * (float)local_3e0._4_4_;
          fVar72 = fVar120 * fStack_2b8 + fVar161 * fStack_3d8;
          fVar73 = fVar121 * fStack_2b4 + fVar162 * fStack_3d4;
          fVar74 = fVar122 * fStack_2b0 + fVar163 * fStack_3d0;
          fVar75 = fVar124 * fStack_2ac + fVar164 * fStack_3cc;
          fVar76 = fVar125 * fStack_2a8 + fVar165 * fStack_3c8;
          fVar77 = fVar126 * fStack_2a4 + fVar166 * fStack_3c4;
          fVar79 = fVar107 * local_2a0 + fVar152 * (float)local_3c0._0_4_;
          fVar85 = fVar118 * fStack_29c + fVar160 * (float)local_3c0._4_4_;
          fVar86 = fVar120 * fStack_298 + fVar161 * fStack_3b8;
          fVar87 = fVar121 * fStack_294 + fVar162 * fStack_3b4;
          fVar89 = fVar122 * fStack_290 + fVar163 * fStack_3b0;
          fVar91 = fVar124 * fStack_28c + fVar164 * fStack_3ac;
          fVar92 = fVar125 * fStack_288 + fVar165 * fStack_3a8;
          fVar93 = fVar126 * fStack_284 + fVar166 * fStack_3a4;
          fVar152 = fVar107 * local_280 + fVar152 * (float)local_3a0._0_4_;
          fVar160 = fVar118 * fStack_27c + fVar160 * (float)local_3a0._4_4_;
          fVar161 = fVar120 * fStack_278 + fVar161 * fStack_398;
          fVar162 = fVar121 * fStack_274 + fVar162 * fStack_394;
          fVar163 = fVar122 * fStack_270 + fVar163 * fStack_390;
          fVar164 = fVar124 * fStack_26c + fVar164 * fStack_38c;
          fVar165 = fVar125 * fStack_268 + fVar165 * fStack_388;
          fVar166 = fVar126 * fStack_264 + fVar166 * fStack_384;
          auVar100._0_4_ = fVar32 * fVar32 + fVar79 * fVar79 + fVar55 * fVar55 + fVar152 * fVar152;
          auVar100._4_4_ = fVar48 * fVar48 + fVar85 * fVar85 + fVar71 * fVar71 + fVar160 * fVar160;
          auVar100._8_4_ = fVar49 * fVar49 + fVar86 * fVar86 + fVar72 * fVar72 + fVar161 * fVar161;
          auVar100._12_4_ = fVar50 * fVar50 + fVar87 * fVar87 + fVar73 * fVar73 + fVar162 * fVar162;
          auVar100._16_4_ = fVar51 * fVar51 + fVar89 * fVar89 + fVar74 * fVar74 + fVar163 * fVar163;
          auVar100._20_4_ = fVar52 * fVar52 + fVar91 * fVar91 + fVar75 * fVar75 + fVar164 * fVar164;
          auVar100._24_4_ = fVar53 * fVar53 + fVar92 * fVar92 + fVar76 * fVar76 + fVar165 * fVar165;
          auVar100._28_4_ = fVar54 * fVar54 + fVar93 * fVar93 + fVar77 * fVar77 + fVar166 * fVar166;
          auVar154 = vrsqrtps_avx(auVar100);
          auVar142._4_4_ = __real_3f000000;
          auVar142._0_4_ = __real_3f000000;
          auVar142._8_4_ = __real_3f000000;
          auVar142._12_4_ = __real_3f000000;
          auVar142._16_4_ = __real_3f000000;
          auVar142._20_4_ = __real_3f000000;
          auVar142._24_4_ = __real_3f000000;
          auVar142._28_4_ = __real_3f000000;
          fVar107 = auVar154._0_4_;
          fVar118 = auVar154._4_4_;
          fVar120 = auVar154._8_4_;
          fVar121 = auVar154._12_4_;
          fVar122 = auVar154._16_4_;
          fVar124 = auVar154._20_4_;
          fVar125 = auVar154._24_4_;
          fVar126 = auVar154._28_4_;
          auVar148._0_4_ = fVar107 * fVar107 * __real_3f000000 * auVar100._0_4_;
          auVar148._4_4_ = fVar118 * fVar118 * __real_3f000000 * auVar100._4_4_;
          auVar148._8_4_ = fVar120 * fVar120 * __real_3f000000 * auVar100._8_4_;
          auVar148._12_4_ = fVar121 * fVar121 * __real_3f000000 * auVar100._12_4_;
          auVar148._16_4_ = fVar122 * fVar122 * __real_3f000000 * auVar100._16_4_;
          auVar148._20_4_ = fVar124 * fVar124 * __real_3f000000 * auVar100._20_4_;
          auVar148._24_4_ = fVar125 * fVar125 * __real_3f000000 * auVar100._24_4_;
          auVar148._28_4_ = fVar126 * fVar126 * __real_3f000000 * auVar100._28_4_;
          auVar154 = vsubps_avx(auVar142,auVar148);
          fVar107 = auVar154._0_4_ * fVar107 + fVar107;
          fVar118 = auVar154._4_4_ * fVar118 + fVar118;
          fVar120 = auVar154._8_4_ * fVar120 + fVar120;
          fVar121 = auVar154._12_4_ * fVar121 + fVar121;
          fVar122 = auVar154._16_4_ * fVar122 + fVar122;
          fVar124 = auVar154._20_4_ * fVar124 + fVar124;
          fVar125 = auVar154._24_4_ * fVar125 + fVar125;
          fVar126 = auVar154._28_4_ * fVar126 + fVar126;
          auVar131._0_4_ = fVar107 * fVar107 * __real_3f000000 * auVar100._0_4_;
          auVar131._4_4_ = fVar118 * fVar118 * __real_3f000000 * auVar100._4_4_;
          auVar131._8_4_ = fVar120 * fVar120 * __real_3f000000 * auVar100._8_4_;
          auVar131._12_4_ = fVar121 * fVar121 * __real_3f000000 * auVar100._12_4_;
          auVar131._16_4_ = fVar122 * fVar122 * __real_3f000000 * auVar100._16_4_;
          auVar131._20_4_ = fVar124 * fVar124 * __real_3f000000 * auVar100._20_4_;
          auVar131._24_4_ = fVar125 * fVar125 * __real_3f000000 * auVar100._24_4_;
          auVar131._28_4_ = fVar126 * fVar126 * __real_3f000000 * auVar100._28_4_;
          auVar154 = vsubps_avx(auVar142,auVar131);
          fVar107 = fVar107 + fVar107 * auVar154._0_4_;
          fVar118 = fVar118 + fVar118 * auVar154._4_4_;
          fVar120 = fVar120 + fVar120 * auVar154._8_4_;
          fVar121 = fVar121 + fVar121 * auVar154._12_4_;
          fVar122 = fVar122 + fVar122 * auVar154._16_4_;
          fVar124 = fVar124 + fVar124 * auVar154._20_4_;
          fVar125 = fVar125 + fVar125 * auVar154._24_4_;
          fVar126 = fVar126 + fVar126 * auVar154._28_4_;
          auVar132._4_4_ = __real_322bcc77;
          auVar132._0_4_ = __real_322bcc77;
          auVar132._8_4_ = __real_322bcc77;
          auVar132._12_4_ = __real_322bcc77;
          auVar132._16_4_ = __real_322bcc77;
          auVar132._20_4_ = __real_322bcc77;
          auVar132._24_4_ = __real_322bcc77;
          auVar132._28_4_ = __real_322bcc77;
          auVar154 = vcmpps_avx(auVar132,auVar100,2);
          uVar3 = auVar154._0_4_;
          auVar42._0_4_ = (uint)(fVar32 * fVar107) & uVar3;
          uVar4 = auVar154._4_4_;
          auVar42._4_4_ = (uint)(fVar48 * fVar118) & uVar4;
          uVar108 = auVar154._8_4_;
          auVar42._8_4_ = (uint)(fVar49 * fVar120) & uVar108;
          uVar119 = auVar154._12_4_;
          auVar42._12_4_ = (uint)(fVar50 * fVar121) & uVar119;
          uVar78 = auVar154._16_4_;
          auVar42._16_4_ = (uint)(fVar51 * fVar122) & uVar78;
          uVar88 = auVar154._20_4_;
          auVar42._20_4_ = (uint)(fVar52 * fVar124) & uVar88;
          uVar123 = auVar154._24_4_;
          auVar42._24_4_ = (uint)(fVar53 * fVar125) & uVar123;
          uVar146 = auVar154._28_4_;
          auVar42._28_4_ = (uint)(fVar54 * fVar126) & uVar146;
          auVar62._0_4_ = (uint)(fVar55 * fVar107) & uVar3;
          auVar62._4_4_ = (uint)(fVar71 * fVar118) & uVar4;
          auVar62._8_4_ = (uint)(fVar72 * fVar120) & uVar108;
          auVar62._12_4_ = (uint)(fVar73 * fVar121) & uVar119;
          auVar62._16_4_ = (uint)(fVar74 * fVar122) & uVar78;
          auVar62._20_4_ = (uint)(fVar75 * fVar124) & uVar88;
          auVar62._24_4_ = (uint)(fVar76 * fVar125) & uVar123;
          auVar62._28_4_ = (uint)(fVar77 * fVar126) & uVar146;
          auVar81._0_4_ = (uint)(fVar79 * fVar107) & uVar3;
          auVar81._4_4_ = (uint)(fVar85 * fVar118) & uVar4;
          auVar81._8_4_ = (uint)(fVar86 * fVar120) & uVar108;
          auVar81._12_4_ = (uint)(fVar87 * fVar121) & uVar119;
          auVar81._16_4_ = (uint)(fVar89 * fVar122) & uVar78;
          auVar81._20_4_ = (uint)(fVar91 * fVar124) & uVar88;
          auVar81._24_4_ = (uint)(fVar92 * fVar125) & uVar123;
          auVar81._28_4_ = (uint)(fVar93 * fVar126) & uVar146;
          auVar95._0_4_ = (uint)(fVar152 * fVar107) & uVar3;
          auVar95._4_4_ = (uint)(fVar160 * fVar118) & uVar4;
          auVar95._8_4_ = (uint)(fVar161 * fVar120) & uVar108;
          auVar95._12_4_ = (uint)(fVar162 * fVar121) & uVar119;
          auVar95._16_4_ = (uint)(fVar163 * fVar122) & uVar78;
          auVar95._20_4_ = (uint)(fVar164 * fVar124) & uVar88;
          auVar95._24_4_ = (uint)(fVar165 * fVar125) & uVar123;
          auVar95._28_4_ = (uint)(fVar166 * fVar126) & uVar146;
          auVar154 = vcmpps_avx(auVar132,auVar100,6);
          auVar101._0_4_ = auVar154._0_4_ & (uint)__real_3f800000;
          auVar101._4_4_ = auVar154._4_4_ & (uint)__real_3f800000;
          auVar101._8_4_ = auVar154._8_4_ & (uint)__real_3f800000;
          auVar101._12_4_ = auVar154._12_4_ & (uint)__real_3f800000;
          auVar101._16_4_ = auVar154._16_4_ & (uint)__real_3f800000;
          auVar101._20_4_ = auVar154._20_4_ & (uint)__real_3f800000;
          auVar101._24_4_ = auVar154._24_4_ & (uint)__real_3f800000;
          auVar101._28_4_ = auVar154._28_4_ & (uint)__real_3f800000;
          auVar102._16_16_ = auVar57;
          auVar102._0_16_ = auVar58;
          _local_400 = vmaskmovps_avx(auVar102,auVar42);
          _local_3e0 = vmaskmovps_avx(auVar102,auVar62);
          _local_3c0 = vmaskmovps_avx(auVar102,auVar81);
          _local_3a0 = vmaskmovps_avx(auVar102,auVar95 | auVar101);
        }
      }
      local_220 = vshufps_avx(auVar128,auVar110,0x88);
      auVar103._16_16_ = _local_3a0;
      auVar103._0_16_ = local_3c0._0_16_;
      auVar80 = vperm2f128_avx(_local_3c0,_local_3a0,0x31);
      auVar137._16_16_ = _local_3e0;
      auVar137._0_16_ = local_400._0_16_;
      auVar109 = vperm2f128_avx(_local_400,_local_3e0,0x31);
      auVar149._16_16_ = local_3c0._0_16_;
      auVar149._0_16_ = _local_3a0;
      auVar154 = vshufps_avx(auVar149,auVar149,0x14);
      auVar170._8_8_ = local_3c0;
      auVar170._0_8_ = local_3c0;
      auVar170._16_8_ = local_3a0;
      auVar170._24_8_ = local_3a0;
      auVar154 = vblendps_avx(auVar170,auVar154,0x48);
      auVar171._16_16_ = local_400._0_16_;
      auVar171._0_16_ = _local_3e0;
      auVar97 = vshufps_avx(auVar171,auVar171,0xe1);
      auVar97 = vblendps_avx(auVar137,auVar97,0x12);
      local_180 = vblendps_avx(auVar97,auVar154,0xcc);
      auVar154 = vshufps_avx(auVar149,auVar149,0xb4);
      auVar154 = vblendps_avx(auVar103,auVar154,0x48);
      auVar34 = vshufps_avx(auVar171,auVar171,0xeb);
      auVar97 = vshufpd_avx(auVar137,auVar137,5);
      auVar97 = vblendps_avx(auVar97,auVar34,0x12);
      local_160 = vblendps_avx(auVar97,auVar154,0xcc);
      auVar34 = vperm2f128_avx(_local_3a0,_local_3c0,0x31);
      auVar154 = vshufps_avx(auVar34,auVar34,0x14);
      auVar112._8_8_ = auVar80._0_8_;
      auVar112._0_8_ = auVar80._0_8_;
      auVar112._16_8_ = auVar80._16_8_;
      auVar112._24_8_ = auVar80._16_8_;
      auVar154 = vblendps_avx(auVar112,auVar154,0x48);
      auVar155 = vperm2f128_avx(_local_3e0,_local_400,0x31);
      auVar97 = vshufps_avx(auVar155,auVar155,0xe1);
      auVar97 = vblendps_avx(auVar109,auVar97,0x12);
      local_140 = vblendps_avx(auVar97,auVar154,0xcc);
      auVar154 = vshufps_avx(auVar34,auVar34,0xb4);
      auVar154 = vblendps_avx(auVar80,auVar154,0x48);
      auVar34 = vshufps_avx(auVar155,auVar155,0xeb);
      auVar97 = vshufpd_avx(auVar109,auVar109,5);
      auVar97 = vblendps_avx(auVar97,auVar34,0x12);
      local_120 = vblendps_avx(auVar97,auVar154,0xcc);
      uVar14 = 0xff;
      do {
        uVar3 = 0;
        for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
          uVar3 = uVar3 + 1;
        }
        bVar9 = (byte)uVar3 & 0x3f;
        iVar12 = *(int *)(local_220 + (ulonglong)(uVar3 & 7) * 4);
        auVar154 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar3 << 4)));
        *(undefined1 (*) [16])(param_1 + (longlong)iVar12 * 0x60) = auVar154._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x10 + (longlong)iVar12 * 0x60) = auVar154._16_16_;
        uVar14 = uVar14 & (-2L << bVar9 | 0xfffffffffffffffeU >> 0x40 - bVar9);
      } while (uVar14 != 0);
      uVar15 = uVar15 + 8;
    } while (uVar15 < (uVar10 & 0xfffffff8));
  }
  if ((int)(uint)uVar15 < (int)param_9) {
    auVar5 = vpshufd_avx(ZEXT416((uint)uVar15),0);
    auVar43._16_16_ = auVar5;
    auVar43._0_16_ = auVar5;
    auVar179 = vpshufd_avx(ZEXT416(param_9),0);
    auVar178 = SUB3216(auVar43 | 
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
    auVar185 = SUB3216(auVar43 | 
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10)
    ;
    auVar58 = vpcmpgtd_avx(auVar179,auVar185);
    auVar90 = vpcmpgtd_avx(auVar179,auVar178);
    auVar113._16_16_ = auVar58;
    auVar113._0_16_ = auVar90;
    auVar33 = vpslld_avx(auVar5,3);
    uVar108 = auVar90._0_4_;
    auVar57._0_4_ =
         uVar108 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    uVar119 = auVar90._4_4_;
    auVar57._4_4_ = uVar119 & _UNK_150b519c4;
    uVar78 = auVar90._8_4_;
    auVar57._8_4_ = uVar78 & _UNK_150b519c8;
    uVar88 = auVar90._12_4_;
    auVar57._12_4_ = uVar88 & _UNK_150b519cc;
    uVar123 = auVar58._0_4_;
    auVar5 = vpand_avx(auVar58,auVar33);
    lVar20 = auVar5._0_4_ + param_2;
    auVar5 = vpand_avx(auVar90,auVar33);
    vextractps_avx(auVar57,1);
    vextractps_avx(auVar57,2);
    vextractps_avx(auVar57,3);
    auVar127 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)(uVar123 & _UNK_150b519f0) + lVar20)),4);
    auVar57 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)
                                           (uVar108 &
                                           ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004
                                           ) + param_2 + auVar5._0_4_)),4);
    auVar90 = vpand_avx(auVar90,auVar57);
    lVar24 = auVar90._0_4_ + param_3;
    uVar10 = *(uint *)((ulonglong)
                       (uVar108 &
                       ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c) +
                      lVar24);
    auVar56 = ZEXT416(*(uint *)((ulonglong)
                                (uVar108 &
                                ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                ) + lVar24));
    auVar33 = ZEXT416(uVar10);
    auVar90 = vpand_avx(auVar58,auVar127);
    param_3 = auVar90._0_4_ + param_3;
    uVar3 = *(uint *)((ulonglong)(uVar123 & _UNK_150b50d70) + param_3);
    uVar4 = *(uint *)((ulonglong)(uVar123 & _UNK_150b50d90) + param_3);
    auVar147._4_4_ = __real_00000001;
    auVar147._0_4_ = __real_00000001;
    auVar147._8_4_ = __real_00000001;
    auVar147._12_4_ = __real_00000001;
    auVar90 = vpcmpeqd_avx(auVar147,ZEXT416(uVar4));
    auVar57 = vpcmpeqd_avx(auVar147,auVar33);
    auVar63._16_16_ = auVar90;
    auVar63._0_16_ = auVar57;
    auVar113 = auVar113 & auVar63;
    auVar90 = ZEXT416(uVar4);
    if ((((((((SUB321(auVar113 >> 0x1f,0) & 1) != 0 || (SUB321(auVar113 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar113 >> 0x5f,0) & 1) != 0) || SUB321(auVar113 >> 0x7f,0) != '\0') ||
          (SUB321(auVar113 >> 0x9f,0) & 1) != 0) || SUB321(auVar113 >> 0xbf,0) != '\0') ||
        (SUB321(auVar113 >> 0xdf,0) & 1) != 0) || auVar113[0x1f] < '\0') {
      auVar57 = vpcmpeqd_avx(auVar147,auVar90);
      auVar127 = vpcmpeqd_avx(auVar147,auVar33);
      auVar104._0_4_ = auVar127._0_4_ & uVar108;
      auVar104._4_4_ = auVar127._4_4_ & uVar119;
      auVar104._8_4_ = auVar127._8_4_ & uVar78;
      auVar104._12_4_ = auVar127._12_4_ & uVar88;
      auVar104._16_4_ = auVar57._0_4_ & uVar123;
      auVar104._20_4_ = auVar57._4_4_ & auVar58._4_4_;
      auVar104._24_4_ = auVar57._8_4_ & auVar58._8_4_;
      auVar104._28_4_ = auVar57._12_4_ & auVar58._12_4_;
      auVar154 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),ZEXT2032(CONCAT416(uVar3,auVar56)),
                               auVar104);
      auVar153 = auVar154._0_16_;
      iVar26 = vextractps_avx(auVar153,0);
      iVar23 = vextractps_avx(auVar153,1);
      auVar57 = auVar154._16_16_;
      iVar12 = vextractps_avx(auVar57,0);
      lVar24 = (longlong)iVar12;
      iVar12 = vextractps_avx(auVar57,1);
      lVar16 = (longlong)iVar12;
      iVar12 = vextractps_avx(auVar57,2);
      lVar22 = (longlong)iVar12;
      iVar19 = vextractps_avx(auVar57,3);
      auVar7._4_4_ = _UNK_150b50d44;
      auVar7._0_4_ = ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
      auVar7._8_4_ = _UNK_150b50d48;
      auVar7._12_4_ = _UNK_150b50d4c;
      auVar7._16_4_ = _UNK_150b50d50;
      auVar7._20_4_ = _UNK_150b50d54;
      auVar7._24_4_ = _UNK_150b50d58;
      auVar7._28_4_ = _UNK_150b50d5c;
      auVar154 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar7,auVar104);
      auVar59 = auVar154._0_16_;
      auVar127 = auVar154._16_16_;
      iVar29 = vextractps_avx(auVar127,0);
      iVar12 = vextractps_avx(auVar127,1);
      iVar30 = vextractps_avx(auVar127,2);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar29 + lVar24)),
                              ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar16)),0x10);
      iVar31 = vextractps_avx(auVar127,3);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)((longlong)param_4 + iVar30 + lVar22)),0x20);
      auVar8._4_4_ = _UNK_150b50d64;
      auVar8._0_4_ = ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
      auVar8._8_4_ = _UNK_150b50d68;
      auVar8._12_4_ = _UNK_150b50d6c;
      auVar8._16_4_ = _UNK_150b50d70;
      auVar8._20_4_ = _UNK_150b50d74;
      auVar8._24_4_ = _UNK_150b50d78;
      auVar8._28_4_ = _UNK_150b50d7c;
      auVar154 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar8,auVar104);
      auVar167 = auVar154._0_16_;
      auVar60 = auVar154._16_16_;
      iVar29 = vextractps_avx(auVar60,0);
      iVar12 = vextractps_avx(auVar60,1);
      auVar127 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar29 + lVar24)),
                               ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar16)),0x10);
      iVar12 = vextractps_avx(auVar60,2);
      lVar27 = (longlong)iVar26;
      auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar22)),0x20
                              );
      iVar12 = vextractps_avx(auVar153,2);
      lVar21 = (longlong)iVar19;
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)((longlong)param_4 + iVar31 + lVar21)),0x30);
      lVar25 = (longlong)iVar23;
      iVar19 = vextractps_avx(auVar60,3);
      auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)((longlong)param_4 + iVar19 + lVar21)),0x30
                              );
      iVar19 = vextractps_avx(auVar153,3);
      iVar23 = vextractps_avx(auVar59,0);
      iVar26 = vextractps_avx(auVar167,0);
      iVar29 = vextractps_avx(auVar59,1);
      auVar153 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar23 + lVar27)),
                               ZEXT416(*(uint *)((longlong)param_4 + iVar29 + lVar25)),0x10);
      iVar23 = vextractps_avx(auVar167,1);
      lVar18 = (longlong)iVar12;
      auVar60 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar26 + lVar27)),
                              ZEXT416(*(uint *)((longlong)param_4 + iVar23 + lVar25)),0x10);
      iVar12 = vextractps_avx(auVar59,2);
      auVar153 = vinsertps_avx(auVar153,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar18)),0x20
                              );
      iVar12 = vextractps_avx(auVar167,2);
      lVar28 = (longlong)iVar19;
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar18)),0x20);
      iVar12 = vextractps_avx(auVar59,3);
      auVar153 = vinsertps_avx(auVar153,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar28)),0x30
                              );
      iVar12 = vextractps_avx(auVar167,3);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar28)),0x30);
      auVar59 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar24)),
                              ZEXT416(*(uint *)((longlong)param_4 + lVar16)),0x10);
      auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)((longlong)param_4 + lVar22)),0x20);
      auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)((longlong)param_4 + lVar21)),0x30);
      auVar167 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar27)),
                               ZEXT416(*(uint *)((longlong)param_4 + lVar25)),0x10);
      auVar167 = vinsertps_avx(auVar167,ZEXT416(*(uint *)((longlong)param_4 + lVar18)),0x20);
      auVar167 = vinsertps_avx(auVar167,ZEXT416(*(uint *)((longlong)param_4 + lVar28)),0x30);
      auVar172._16_16_ = auVar59;
      auVar172._0_16_ = auVar167;
      auVar64._16_16_ = auVar57;
      auVar64._0_16_ = auVar153;
      auVar157._16_16_ = auVar127;
      auVar157._0_16_ = auVar60;
      auVar177._0_4_ = auVar167._0_4_ * auVar167._0_4_;
      auVar177._4_4_ = auVar167._4_4_ * auVar167._4_4_;
      auVar177._8_4_ = auVar167._8_4_ * auVar167._8_4_;
      auVar177._12_4_ = auVar167._12_4_ * auVar167._12_4_;
      auVar177._16_4_ = auVar59._0_4_ * auVar59._0_4_;
      auVar177._20_4_ = auVar59._4_4_ * auVar59._4_4_;
      auVar177._24_4_ = auVar59._8_4_ * auVar59._8_4_;
      auVar177._28_4_ = auVar59._12_4_ * auVar59._12_4_;
      auVar181._4_4_ = __real_3f800000;
      auVar181._0_4_ = __real_3f800000;
      auVar181._8_4_ = __real_3f800000;
      auVar181._12_4_ = __real_3f800000;
      auVar181._16_4_ = __real_3f800000;
      auVar181._20_4_ = __real_3f800000;
      auVar181._24_4_ = __real_3f800000;
      auVar181._28_4_ = __real_3f800000;
      auVar154 = vsubps_avx(auVar181,auVar177);
      auVar182._0_4_ = auVar153._0_4_ * auVar153._0_4_;
      auVar182._4_4_ = auVar153._4_4_ * auVar153._4_4_;
      auVar182._8_4_ = auVar153._8_4_ * auVar153._8_4_;
      auVar182._12_4_ = auVar153._12_4_ * auVar153._12_4_;
      auVar182._16_4_ = auVar57._0_4_ * auVar57._0_4_;
      auVar182._20_4_ = auVar57._4_4_ * auVar57._4_4_;
      auVar182._24_4_ = auVar57._8_4_ * auVar57._8_4_;
      auVar182._28_4_ = auVar57._12_4_ * auVar57._12_4_;
      auVar154 = vsubps_avx(auVar154,auVar182);
      auVar183._0_4_ = auVar60._0_4_ * auVar60._0_4_;
      auVar183._4_4_ = auVar60._4_4_ * auVar60._4_4_;
      auVar183._8_4_ = auVar60._8_4_ * auVar60._8_4_;
      auVar183._12_4_ = auVar60._12_4_ * auVar60._12_4_;
      auVar183._16_4_ = auVar127._0_4_ * auVar127._0_4_;
      auVar183._20_4_ = auVar127._4_4_ * auVar127._4_4_;
      auVar183._24_4_ = auVar127._8_4_ * auVar127._8_4_;
      auVar183._28_4_ = auVar127._12_4_ * auVar127._12_4_;
      auVar97 = vsubps_avx(auVar154,auVar183);
      auVar154 = vcmpps_avx(ZEXT1632((undefined1  [16])0x0),auVar97,1);
      auVar97 = vsqrtps_avx(auVar97);
      auVar133._0_4_ = auVar97._0_4_ & auVar154._0_4_;
      auVar133._4_4_ = auVar97._4_4_ & auVar154._4_4_;
      auVar133._8_4_ = auVar97._8_4_ & auVar154._8_4_;
      auVar133._12_4_ = auVar97._12_4_ & auVar154._12_4_;
      auVar133._16_4_ = auVar97._16_4_ & auVar154._16_4_;
      auVar133._20_4_ = auVar97._20_4_ & auVar154._20_4_;
      auVar133._24_4_ = auVar97._24_4_ & auVar154._24_4_;
      auVar133._28_4_ = auVar97._28_4_ & auVar154._28_4_;
      _local_620 = vmaskmovps_avx(auVar104,auVar172);
      _local_600 = vmaskmovps_avx(auVar104,auVar64);
      _local_5e0 = vmaskmovps_avx(auVar104,auVar157);
      _local_5c0 = vmaskmovps_avx(auVar104,auVar133);
    }
    auVar57 = vpcmpeqd_avx(auVar147,auVar90);
    auVar127 = vpcmpeqd_avx(auVar147,auVar33);
    auVar147 = vpcmpgtd_avx(auVar179,auVar185);
    auVar185 = vpcmpgtd_avx(auVar179,auVar178);
    auVar44._0_4_ = ~auVar127._0_4_ & auVar185._0_4_;
    auVar44._4_4_ = ~auVar127._4_4_ & auVar185._4_4_;
    auVar44._8_4_ = ~auVar127._8_4_ & auVar185._8_4_;
    auVar44._12_4_ = ~auVar127._12_4_ & auVar185._12_4_;
    auVar44._16_4_ = ~auVar57._0_4_ & auVar147._0_4_;
    auVar44._20_4_ = ~auVar57._4_4_ & auVar147._4_4_;
    auVar44._24_4_ = ~auVar57._8_4_ & auVar147._8_4_;
    auVar44._28_4_ = ~auVar57._12_4_ & auVar147._12_4_;
    iVar12 = vmovmskps_avx(auVar44);
    if (iVar12 != 0) {
      vpmovsxdq_avx(ZEXT416(uVar3));
      auVar185 = vpshufd_avx(ZEXT416(uVar3),0xee);
      vpmovsxdq_avx(auVar56);
      auVar56 = vpshufd_avx(auVar56,0xee);
      vpmovsxdq_avx(auVar185);
      vpmovsxdq_avx(auVar56);
      auVar158._0_4_ = ~auVar127._0_4_ & uVar108;
      auVar158._4_4_ = ~auVar127._4_4_ & uVar119;
      auVar158._8_4_ = ~auVar127._8_4_ & uVar78;
      auVar158._12_4_ = ~auVar127._12_4_ & uVar88;
      auVar158._16_4_ = ~auVar57._0_4_ & uVar123;
      auVar158._20_4_ = ~auVar57._4_4_ & auVar58._4_4_;
      auVar158._24_4_ = ~auVar57._8_4_ & auVar58._8_4_;
      auVar158._28_4_ = ~auVar57._12_4_ & auVar58._12_4_;
      auVar58._4_4_ = __real_00000002;
      auVar58._0_4_ = __real_00000002;
      auVar58._8_4_ = __real_00000002;
      auVar58._12_4_ = __real_00000002;
      auVar90 = vpcmpgtd_avx(auVar58,auVar90);
      auVar57 = vpcmpgtd_avx(auVar58,auVar33);
      auVar65._0_4_ = auVar158._0_4_ & auVar57._0_4_;
      auVar65._4_4_ = auVar158._4_4_ & auVar57._4_4_;
      auVar65._8_4_ = auVar158._8_4_ & auVar57._8_4_;
      auVar65._12_4_ = auVar158._12_4_ & auVar57._12_4_;
      auVar65._16_4_ = auVar158._16_4_ & auVar90._0_4_;
      auVar65._20_4_ = auVar158._20_4_ & auVar90._4_4_;
      auVar65._24_4_ = auVar158._24_4_ & auVar90._8_4_;
      auVar65._28_4_ = auVar158._28_4_ & auVar90._12_4_;
      auVar154 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      iVar19 = vmovmskps_avx(auVar65);
      auVar97 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      if ((iVar19 == 0) || (auVar97 = auVar65, (char)iVar12 != (char)iVar19)) {
        auVar34 = vcmpps_avx(auVar154,auVar154,0xf);
        auVar114._0_4_ = auVar97._0_4_ ^ auVar34._0_4_;
        auVar114._4_4_ = auVar97._4_4_ ^ auVar34._4_4_;
        auVar114._8_4_ = auVar97._8_4_ ^ auVar34._8_4_;
        auVar114._12_4_ = auVar97._12_4_ ^ auVar34._12_4_;
        auVar114._16_4_ = auVar97._16_4_ ^ auVar34._16_4_;
        auVar114._20_4_ = auVar97._20_4_ ^ auVar34._20_4_;
        auVar114._24_4_ = auVar97._24_4_ ^ auVar34._24_4_;
        auVar114._28_4_ = auVar97._28_4_ ^ auVar34._28_4_;
        auVar97 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar90._12_4_ = 0;
        auVar90._0_12_ = ZEXT812(0);
        auVar34 = ZEXT1232(ZEXT812(0)) << 0x20;
        if (0.0 < param_6) {
          auVar90 = vpcmpeqd_avx(auVar90 << 0x20,auVar90 << 0x20);
          auVar185._0_4_ = uVar4 + auVar90._0_4_;
          auVar185._4_4_ = auVar90._4_4_;
          auVar185._8_4_ = auVar90._8_4_;
          auVar185._12_4_ = auVar90._12_4_;
          auVar153._0_4_ = uVar10 + auVar90._0_4_;
          auVar153._4_4_ = auVar90._4_4_;
          auVar153._8_4_ = auVar90._8_4_;
          auVar153._12_4_ = auVar90._12_4_;
          auVar82._16_16_ = auVar185;
          auVar82._0_16_ = auVar153;
          if (__real_3f800000 <= param_6) {
            auVar139._0_4_ = auVar158._0_4_ & auVar114._0_4_;
            auVar139._4_4_ = auVar158._4_4_ & auVar114._4_4_;
            auVar139._8_4_ = auVar158._8_4_ & auVar114._8_4_;
            auVar139._12_4_ = auVar158._12_4_ & auVar114._12_4_;
            auVar139._16_4_ = auVar158._16_4_ & auVar114._16_4_;
            auVar139._20_4_ = auVar158._20_4_ & auVar114._20_4_;
            auVar139._24_4_ = auVar158._24_4_ & auVar114._24_4_;
            auVar139._28_4_ = auVar158._28_4_ & auVar114._28_4_;
            auVar60._0_12_ = ZEXT812(0);
            auVar60._12_4_ = 0;
            auVar34 = ZEXT1632(auVar60);
            auVar97 = vblendvps_avx(ZEXT1632(auVar60),auVar82,auVar139);
            auVar154 = auVar97;
          }
          else {
            auVar90 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
            auVar154 = vcvtdq2ps_avx(auVar82);
            auVar167._0_4_ = auVar90._0_4_ * auVar154._0_4_;
            auVar167._4_4_ = auVar90._4_4_ * auVar154._4_4_;
            auVar167._8_4_ = auVar90._8_4_ * auVar154._8_4_;
            auVar167._12_4_ = auVar90._12_4_ * auVar154._12_4_;
            auVar173._16_4_ = auVar90._0_4_ * auVar154._16_4_;
            auVar173._0_16_ = auVar167;
            auVar173._20_4_ = auVar90._4_4_ * auVar154._20_4_;
            auVar173._24_4_ = auVar90._8_4_ * auVar154._24_4_;
            auVar173._28_4_ = auVar90._12_4_ * auVar154._28_4_;
            auVar138._0_4_ = auVar158._0_4_ & auVar114._0_4_;
            auVar138._4_4_ = auVar158._4_4_ & auVar114._4_4_;
            auVar138._8_4_ = auVar158._8_4_ & auVar114._8_4_;
            auVar138._12_4_ = auVar158._12_4_ & auVar114._12_4_;
            auVar138._16_4_ = auVar158._16_4_ & auVar114._16_4_;
            auVar138._20_4_ = auVar158._20_4_ & auVar114._20_4_;
            auVar138._24_4_ = auVar158._24_4_ & auVar114._24_4_;
            auVar138._28_4_ = auVar158._28_4_ & auVar114._28_4_;
            auVar154 = vroundps_avx(auVar173,9);
            auVar59._0_4_ = (int)auVar154._0_4_;
            auVar59._4_4_ = (int)auVar154._4_4_;
            auVar59._8_4_ = (int)auVar154._8_4_;
            auVar59._12_4_ = (int)auVar154._12_4_;
            auVar66._16_4_ = (int)auVar154._16_4_;
            auVar66._0_16_ = auVar59;
            auVar66._20_4_ = (int)auVar154._20_4_;
            auVar66._24_4_ = (int)auVar154._24_4_;
            auVar66._28_4_ = (int)auVar154._28_4_;
            auVar90 = vpminsd_avx(auVar66._16_16_,auVar185);
            auVar57 = vpminsd_avx(auVar59,auVar153);
            auVar67._16_16_ = auVar90;
            auVar67._0_16_ = auVar57;
            auVar97 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar67,auVar138);
            auVar34 = ZEXT832(0) << 0x20;
            if (param_7 != '\x01') {
              auVar34 = vsubps_avx(auVar173,auVar154);
            }
            auVar90 = vpcmpeqd_avx(auVar167,auVar167);
            auVar57 = vpsubd_avx(auVar97._0_16_,auVar90);
            auVar90 = vpsubd_avx(auVar97._16_16_,auVar90);
            auVar90 = vpminsd_avx(auVar90,auVar185);
            auVar57 = vpminsd_avx(auVar57,auVar153);
            auVar83._16_16_ = auVar90;
            auVar83._0_16_ = auVar57;
            auVar154 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar83,auVar138);
          }
        }
        local_6a0 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar34,auVar114);
      }
      else {
        local_6a0 = ZEXT432(0) << 0x20;
        auVar97 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      auVar90 = vshufps_avx(ZEXT416(uVar13),ZEXT416(uVar13),0);
      auVar61._0_12_ = ZEXT812(0);
      auVar61._12_4_ = 0;
      vblendps_avx(auVar90,auVar61,10);
      vpmovzxdq_avx(auVar90);
      auVar90 = vpshufd_avx(ZEXT416((uint)(iVar1 * iVar2)),0);
      if (param_8 < 6) {
        auVar57 = vpmulld_avx(auVar97._0_16_,auVar90);
        auVar90 = vpmulld_avx(auVar97._16_16_,auVar90);
        auVar5 = vpmovsxdq_avx(auVar90);
        auVar90 = vpshufd_avx(auVar90,0xee);
        vpmovsxdq_avx(auVar90);
        auVar90 = vpmovsxdq_avx(auVar57);
        auVar57 = vpshufd_avx(auVar57,0xee);
        vpmovsxdq_avx(auVar57);
                    /* WARNING: Could not recover jumptable at 0x000140ae9057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6b920 + *(int *)(&DAT_151c6b920 + uVar17 * 4)))
                  (&DAT_151c6b920,&DAT_151c6b920 + *(int *)(&DAT_151c6b920 + uVar17 * 4),
                   auVar90._0_8_,auVar5._0_8_);
        return;
      }
      _local_620 = vmaskmovps_avx(auVar158,ZEXT1632((undefined1  [16])0x0));
      _local_600 = vmaskmovps_avx(auVar158,ZEXT1632((undefined1  [16])0x0));
      _local_5e0 = vmaskmovps_avx(auVar158,ZEXT1632((undefined1  [16])0x0));
      auVar45._4_4_ = __real_3f800000;
      auVar45._0_4_ = __real_3f800000;
      auVar45._8_4_ = __real_3f800000;
      auVar45._12_4_ = __real_3f800000;
      auVar45._16_4_ = __real_3f800000;
      auVar45._20_4_ = __real_3f800000;
      auVar45._24_4_ = __real_3f800000;
      auVar45._28_4_ = __real_3f800000;
      _local_5c0 = vmaskmovps_avx(auVar158,auVar45);
      auVar57 = vpcmpeqd_avx(auVar97._16_16_,auVar154._16_16_);
      auVar58 = vpcmpeqd_avx(auVar97._0_16_,auVar154._0_16_);
      auVar68._16_16_ = auVar57;
      auVar68._0_16_ = auVar58;
      auVar97 = auVar158 & ~auVar68;
      if ((((((((SUB321(auVar97 >> 0x1f,0) & 1) != 0 || (SUB321(auVar97 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar97 >> 0x5f,0) & 1) != 0) || SUB321(auVar97 >> 0x7f,0) != '\0') ||
            (SUB321(auVar97 >> 0x9f,0) & 1) != 0) || SUB321(auVar97 >> 0xbf,0) != '\0') ||
          (SUB321(auVar97 >> 0xdf,0) & 1) != 0) || auVar97[0x1f] < '\0') {
        auVar159._0_4_ = ~auVar58._0_4_ & auVar158._0_4_;
        auVar159._4_4_ = ~auVar58._4_4_ & auVar158._4_4_;
        auVar159._8_4_ = ~auVar58._8_4_ & auVar158._8_4_;
        auVar159._12_4_ = ~auVar58._12_4_ & auVar158._12_4_;
        auVar159._16_4_ = ~auVar57._0_4_ & auVar158._16_4_;
        auVar159._20_4_ = ~auVar57._4_4_ & auVar158._20_4_;
        auVar159._24_4_ = ~auVar57._8_4_ & auVar158._24_4_;
        auVar159._28_4_ = ~auVar57._12_4_ & auVar158._28_4_;
        if (param_8 < 6) {
          auVar57 = vpmulld_avx(auVar90,auVar154._0_16_);
          auVar5 = vpmulld_avx(auVar90,auVar154._16_16_);
          vpmovsxdq_avx(auVar5);
          auVar5 = vpshufd_avx(auVar5,0xee);
          vpmovsxdq_avx(auVar5);
          auVar5 = vpmovsxdq_avx(auVar57);
          auVar90 = vpshufd_avx(auVar57,0xee);
          vpmovsxdq_avx(auVar90);
                    /* WARNING: Could not recover jumptable at 0x000140aea3ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6b938 + *(int *)(&DAT_151c6b938 + uVar17 * 4)))
                    (&DAT_151c6b938,&DAT_151c6b938 + *(int *)(&DAT_151c6b938 + uVar17 * 4),
                     auVar5._0_8_);
          return;
        }
        auVar154 = vmaskmovps_avx(auVar159,ZEXT1632((undefined1  [16])0x0));
        auVar97 = vmaskmovps_avx(auVar159,ZEXT1632((undefined1  [16])0x0));
        auVar34 = vmaskmovps_avx(auVar159,ZEXT1632((undefined1  [16])0x0));
        auVar46._4_4_ = __real_3f800000;
        auVar46._0_4_ = __real_3f800000;
        auVar46._8_4_ = __real_3f800000;
        auVar46._12_4_ = __real_3f800000;
        auVar46._16_4_ = __real_3f800000;
        auVar46._20_4_ = __real_3f800000;
        auVar46._24_4_ = __real_3f800000;
        auVar46._28_4_ = __real_3f800000;
        auVar80 = vmaskmovps_avx(auVar159,auVar46);
        local_4a0 = auVar154._0_4_;
        fStack_49c = auVar154._4_4_;
        fStack_498 = auVar154._8_4_;
        fStack_494 = auVar154._12_4_;
        fStack_490 = auVar154._16_4_;
        fStack_48c = auVar154._20_4_;
        fStack_488 = auVar154._24_4_;
        fStack_484 = auVar154._28_4_;
        local_480 = auVar97._0_4_;
        fStack_47c = auVar97._4_4_;
        fStack_478 = auVar97._8_4_;
        fStack_474 = auVar97._12_4_;
        fStack_470 = auVar97._16_4_;
        fStack_46c = auVar97._20_4_;
        fStack_468 = auVar97._24_4_;
        fStack_464 = auVar97._28_4_;
        local_460 = auVar34._0_4_;
        fStack_45c = auVar34._4_4_;
        fStack_458 = auVar34._8_4_;
        fStack_454 = auVar34._12_4_;
        fStack_450 = auVar34._16_4_;
        fStack_44c = auVar34._20_4_;
        fStack_448 = auVar34._24_4_;
        fStack_444 = auVar34._28_4_;
        local_440 = auVar80._0_4_;
        fStack_43c = auVar80._4_4_;
        fStack_438 = auVar80._8_4_;
        fStack_434 = auVar80._12_4_;
        fStack_430 = auVar80._16_4_;
        fStack_42c = auVar80._20_4_;
        fStack_428 = auVar80._24_4_;
        fStack_424 = auVar80._28_4_;
        auVar143._0_4_ =
             (float)local_620._0_4_ * local_4a0 + (float)local_5e0._0_4_ * local_460 +
             (float)local_600._0_4_ * local_480 + (float)local_5c0._0_4_ * local_440;
        auVar143._4_4_ =
             (float)local_620._4_4_ * fStack_49c + (float)local_5e0._4_4_ * fStack_45c +
             (float)local_600._4_4_ * fStack_47c + (float)local_5c0._4_4_ * fStack_43c;
        auVar143._8_4_ =
             fStack_618 * fStack_498 + fStack_5d8 * fStack_458 +
             fStack_5f8 * fStack_478 + fStack_5b8 * fStack_438;
        auVar143._12_4_ =
             fStack_614 * fStack_494 + fStack_5d4 * fStack_454 +
             fStack_5f4 * fStack_474 + fStack_5b4 * fStack_434;
        auVar143._16_4_ =
             fStack_610 * fStack_490 + fStack_5d0 * fStack_450 +
             fStack_5f0 * fStack_470 + fStack_5b0 * fStack_430;
        auVar143._20_4_ =
             fStack_60c * fStack_48c + fStack_5cc * fStack_44c +
             fStack_5ec * fStack_46c + fStack_5ac * fStack_42c;
        auVar143._24_4_ =
             fStack_608 * fStack_488 + fStack_5c8 * fStack_448 +
             fStack_5e8 * fStack_468 + fStack_5a8 * fStack_428;
        auVar143._28_4_ =
             fStack_604 * fStack_484 + fStack_5c4 * fStack_444 +
             fStack_5e4 * fStack_464 + fStack_5a4 * fStack_424;
        auVar154 = vcmpps_avx(ZEXT432(0) << 0x20,auVar143,6);
        auVar154 = vcvtdq2ps_avx(auVar154 |
                                 ___ymm_0000000100000001000000010000000100000001000000010000000100000001
                                );
        fVar152 = local_6a0._0_4_;
        fVar160 = local_6a0._4_4_;
        fVar161 = local_6a0._8_4_;
        fVar162 = local_6a0._12_4_;
        fVar163 = local_6a0._16_4_;
        fVar164 = local_6a0._20_4_;
        fVar165 = local_6a0._24_4_;
        fVar166 = local_6a0._28_4_;
        auVar150._4_4_ = __real_3f800000;
        auVar150._0_4_ = __real_3f800000;
        auVar150._8_4_ = __real_3f800000;
        auVar150._12_4_ = __real_3f800000;
        auVar150._16_4_ = __real_3f800000;
        auVar150._20_4_ = __real_3f800000;
        auVar150._24_4_ = __real_3f800000;
        auVar150._28_4_ = __real_3f800000;
        auVar97 = vsubps_avx(auVar150,local_6a0);
        fVar107 = auVar97._0_4_ * auVar154._0_4_;
        fVar118 = auVar97._4_4_ * auVar154._4_4_;
        fVar120 = auVar97._8_4_ * auVar154._8_4_;
        fVar121 = auVar97._12_4_ * auVar154._12_4_;
        fVar122 = auVar97._16_4_ * auVar154._16_4_;
        fVar124 = auVar97._20_4_ * auVar154._20_4_;
        fVar125 = auVar97._24_4_ * auVar154._24_4_;
        fVar126 = auVar97._28_4_ * auVar154._28_4_;
        fVar32 = fVar152 * local_4a0 + fVar107 * (float)local_620._0_4_;
        fVar48 = fVar160 * fStack_49c + fVar118 * (float)local_620._4_4_;
        fVar49 = fVar161 * fStack_498 + fVar120 * fStack_618;
        fVar50 = fVar162 * fStack_494 + fVar121 * fStack_614;
        fVar51 = fVar163 * fStack_490 + fVar122 * fStack_610;
        fVar52 = fVar164 * fStack_48c + fVar124 * fStack_60c;
        fVar53 = fVar165 * fStack_488 + fVar125 * fStack_608;
        fVar54 = fVar166 * fStack_484 + fVar126 * fStack_604;
        fVar55 = fVar152 * local_480 + fVar107 * (float)local_600._0_4_;
        fVar71 = fVar160 * fStack_47c + fVar118 * (float)local_600._4_4_;
        fVar72 = fVar161 * fStack_478 + fVar120 * fStack_5f8;
        fVar73 = fVar162 * fStack_474 + fVar121 * fStack_5f4;
        fVar74 = fVar163 * fStack_470 + fVar122 * fStack_5f0;
        fVar75 = fVar164 * fStack_46c + fVar124 * fStack_5ec;
        fVar76 = fVar165 * fStack_468 + fVar125 * fStack_5e8;
        fVar77 = fVar166 * fStack_464 + fVar126 * fStack_5e4;
        fVar79 = fVar152 * local_460 + fVar107 * (float)local_5e0._0_4_;
        fVar85 = fVar160 * fStack_45c + fVar118 * (float)local_5e0._4_4_;
        fVar86 = fVar161 * fStack_458 + fVar120 * fStack_5d8;
        fVar87 = fVar162 * fStack_454 + fVar121 * fStack_5d4;
        fVar89 = fVar163 * fStack_450 + fVar122 * fStack_5d0;
        fVar91 = fVar164 * fStack_44c + fVar124 * fStack_5cc;
        fVar92 = fVar165 * fStack_448 + fVar125 * fStack_5c8;
        fVar93 = fVar166 * fStack_444 + fVar126 * fStack_5c4;
        fVar152 = fVar152 * local_440 + fVar107 * (float)local_5c0._0_4_;
        fVar160 = fVar160 * fStack_43c + fVar118 * (float)local_5c0._4_4_;
        fVar161 = fVar161 * fStack_438 + fVar120 * fStack_5b8;
        fVar162 = fVar162 * fStack_434 + fVar121 * fStack_5b4;
        fVar163 = fVar163 * fStack_430 + fVar122 * fStack_5b0;
        fVar164 = fVar164 * fStack_42c + fVar124 * fStack_5ac;
        fVar165 = fVar165 * fStack_428 + fVar125 * fStack_5a8;
        fVar166 = fVar166 * fStack_424 + fVar126 * fStack_5a4;
        auVar105._0_4_ = fVar32 * fVar32 + fVar79 * fVar79 + fVar55 * fVar55 + fVar152 * fVar152;
        auVar105._4_4_ = fVar48 * fVar48 + fVar85 * fVar85 + fVar71 * fVar71 + fVar160 * fVar160;
        auVar105._8_4_ = fVar49 * fVar49 + fVar86 * fVar86 + fVar72 * fVar72 + fVar161 * fVar161;
        auVar105._12_4_ = fVar50 * fVar50 + fVar87 * fVar87 + fVar73 * fVar73 + fVar162 * fVar162;
        auVar105._16_4_ = fVar51 * fVar51 + fVar89 * fVar89 + fVar74 * fVar74 + fVar163 * fVar163;
        auVar105._20_4_ = fVar52 * fVar52 + fVar91 * fVar91 + fVar75 * fVar75 + fVar164 * fVar164;
        auVar105._24_4_ = fVar53 * fVar53 + fVar92 * fVar92 + fVar76 * fVar76 + fVar165 * fVar165;
        auVar105._28_4_ = fVar54 * fVar54 + fVar93 * fVar93 + fVar77 * fVar77 + fVar166 * fVar166;
        auVar115._4_4_ = __real_322bcc77;
        auVar115._0_4_ = __real_322bcc77;
        auVar115._8_4_ = __real_322bcc77;
        auVar115._12_4_ = __real_322bcc77;
        auVar115._16_4_ = __real_322bcc77;
        auVar115._20_4_ = __real_322bcc77;
        auVar115._24_4_ = __real_322bcc77;
        auVar115._28_4_ = __real_322bcc77;
        auVar154 = vcmpps_avx(auVar115,auVar105,6);
        auVar97 = vcmpps_avx(auVar115,auVar105,2);
        auVar140._4_4_ = __real_3f000000;
        auVar140._0_4_ = __real_3f000000;
        auVar140._8_4_ = __real_3f000000;
        auVar140._12_4_ = __real_3f000000;
        auVar140._16_4_ = __real_3f000000;
        auVar140._20_4_ = __real_3f000000;
        auVar140._24_4_ = __real_3f000000;
        auVar140._28_4_ = __real_3f000000;
        auVar34 = vrsqrtps_avx(auVar105);
        fVar107 = auVar34._0_4_;
        fVar118 = auVar34._4_4_;
        fVar120 = auVar34._8_4_;
        fVar121 = auVar34._12_4_;
        fVar122 = auVar34._16_4_;
        fVar124 = auVar34._20_4_;
        fVar125 = auVar34._24_4_;
        fVar126 = auVar34._28_4_;
        auVar151._0_4_ = fVar107 * fVar107 * auVar105._0_4_ * __real_3f000000;
        auVar151._4_4_ = fVar118 * fVar118 * auVar105._4_4_ * __real_3f000000;
        auVar151._8_4_ = fVar120 * fVar120 * auVar105._8_4_ * __real_3f000000;
        auVar151._12_4_ = fVar121 * fVar121 * auVar105._12_4_ * __real_3f000000;
        auVar151._16_4_ = fVar122 * fVar122 * auVar105._16_4_ * __real_3f000000;
        auVar151._20_4_ = fVar124 * fVar124 * auVar105._20_4_ * __real_3f000000;
        auVar151._24_4_ = fVar125 * fVar125 * auVar105._24_4_ * __real_3f000000;
        auVar151._28_4_ = fVar126 * fVar126 * auVar105._28_4_ * __real_3f000000;
        auVar34 = vsubps_avx(auVar140,auVar151);
        fVar107 = auVar34._0_4_ * fVar107 + fVar107;
        fVar118 = auVar34._4_4_ * fVar118 + fVar118;
        fVar120 = auVar34._8_4_ * fVar120 + fVar120;
        fVar121 = auVar34._12_4_ * fVar121 + fVar121;
        fVar122 = auVar34._16_4_ * fVar122 + fVar122;
        fVar124 = auVar34._20_4_ * fVar124 + fVar124;
        fVar125 = auVar34._24_4_ * fVar125 + fVar125;
        fVar126 = auVar34._28_4_ * fVar126 + fVar126;
        auVar144._0_4_ = auVar105._0_4_ * __real_3f000000 * fVar107 * fVar107;
        auVar144._4_4_ = auVar105._4_4_ * __real_3f000000 * fVar118 * fVar118;
        auVar144._8_4_ = auVar105._8_4_ * __real_3f000000 * fVar120 * fVar120;
        auVar144._12_4_ = auVar105._12_4_ * __real_3f000000 * fVar121 * fVar121;
        auVar144._16_4_ = auVar105._16_4_ * __real_3f000000 * fVar122 * fVar122;
        auVar144._20_4_ = auVar105._20_4_ * __real_3f000000 * fVar124 * fVar124;
        auVar144._24_4_ = auVar105._24_4_ * __real_3f000000 * fVar125 * fVar125;
        auVar144._28_4_ = auVar105._28_4_ * __real_3f000000 * fVar126 * fVar126;
        auVar34 = vsubps_avx(auVar140,auVar144);
        fVar107 = fVar107 + fVar107 * auVar34._0_4_;
        fVar118 = fVar118 + fVar118 * auVar34._4_4_;
        fVar120 = fVar120 + fVar120 * auVar34._8_4_;
        fVar121 = fVar121 + fVar121 * auVar34._12_4_;
        fVar122 = fVar122 + fVar122 * auVar34._16_4_;
        fVar124 = fVar124 + fVar124 * auVar34._20_4_;
        fVar125 = fVar125 + fVar125 * auVar34._24_4_;
        fVar126 = fVar126 + fVar126 * auVar34._28_4_;
        uVar13 = auVar97._0_4_;
        auVar47._0_4_ = (uint)(fVar32 * fVar107) & uVar13;
        uVar10 = auVar97._4_4_;
        auVar47._4_4_ = (uint)(fVar48 * fVar118) & uVar10;
        uVar3 = auVar97._8_4_;
        auVar47._8_4_ = (uint)(fVar49 * fVar120) & uVar3;
        uVar4 = auVar97._12_4_;
        auVar47._12_4_ = (uint)(fVar50 * fVar121) & uVar4;
        uVar108 = auVar97._16_4_;
        auVar47._16_4_ = (uint)(fVar51 * fVar122) & uVar108;
        uVar119 = auVar97._20_4_;
        auVar47._20_4_ = (uint)(fVar52 * fVar124) & uVar119;
        uVar78 = auVar97._24_4_;
        auVar47._24_4_ = (uint)(fVar53 * fVar125) & uVar78;
        uVar88 = auVar97._28_4_;
        auVar47._28_4_ = (uint)(fVar54 * fVar126) & uVar88;
        auVar69._0_4_ = (uint)(fVar55 * fVar107) & uVar13;
        auVar69._4_4_ = (uint)(fVar71 * fVar118) & uVar10;
        auVar69._8_4_ = (uint)(fVar72 * fVar120) & uVar3;
        auVar69._12_4_ = (uint)(fVar73 * fVar121) & uVar4;
        auVar69._16_4_ = (uint)(fVar74 * fVar122) & uVar108;
        auVar69._20_4_ = (uint)(fVar75 * fVar124) & uVar119;
        auVar69._24_4_ = (uint)(fVar76 * fVar125) & uVar78;
        auVar69._28_4_ = (uint)(fVar77 * fVar126) & uVar88;
        auVar84._0_4_ = (uint)(fVar79 * fVar107) & uVar13;
        auVar84._4_4_ = (uint)(fVar85 * fVar118) & uVar10;
        auVar84._8_4_ = (uint)(fVar86 * fVar120) & uVar3;
        auVar84._12_4_ = (uint)(fVar87 * fVar121) & uVar4;
        auVar84._16_4_ = (uint)(fVar89 * fVar122) & uVar108;
        auVar84._20_4_ = (uint)(fVar91 * fVar124) & uVar119;
        auVar84._24_4_ = (uint)(fVar92 * fVar125) & uVar78;
        auVar84._28_4_ = (uint)(fVar93 * fVar126) & uVar88;
        auVar96._0_4_ = (uint)(fVar152 * fVar107) & uVar13;
        auVar96._4_4_ = (uint)(fVar160 * fVar118) & uVar10;
        auVar96._8_4_ = (uint)(fVar161 * fVar120) & uVar3;
        auVar96._12_4_ = (uint)(fVar162 * fVar121) & uVar4;
        auVar96._16_4_ = (uint)(fVar163 * fVar122) & uVar108;
        auVar96._20_4_ = (uint)(fVar164 * fVar124) & uVar119;
        auVar96._24_4_ = (uint)(fVar165 * fVar125) & uVar78;
        auVar96._28_4_ = (uint)(fVar166 * fVar126) & uVar88;
        auVar106._0_4_ =
             auVar154._0_4_ &
             ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000;
        auVar106._4_4_ = auVar154._4_4_ & _UNK_150b50ce4;
        auVar106._8_4_ = auVar154._8_4_ & _UNK_150b50ce8;
        auVar106._12_4_ = auVar154._12_4_ & _UNK_150b50cec;
        auVar106._16_4_ = auVar154._16_4_ & _UNK_150b50cf0;
        auVar106._20_4_ = auVar154._20_4_ & _UNK_150b50cf4;
        auVar106._24_4_ = auVar154._24_4_ & _UNK_150b50cf8;
        auVar106._28_4_ = auVar154._28_4_ & _UNK_150b50cfc;
        _local_620 = vmaskmovps_avx(auVar159,auVar47);
        _local_600 = vmaskmovps_avx(auVar159,auVar69);
        _local_5e0 = vmaskmovps_avx(auVar159,auVar84);
        _local_5c0 = vmaskmovps_avx(auVar159,auVar96 | auVar106);
      }
    }
    local_640._4_4_ = 0;
    local_640._0_4_ = *(uint *)(param_2 + auVar5._0_4_);
    local_420 = (ulonglong)*(uint *)((ulonglong)(uVar123 & _UNK_150b519d0) + lVar20);
    auVar116._16_16_ = _local_5c0;
    auVar116._0_16_ = local_5e0._0_16_;
    auVar80 = vperm2f128_avx(_local_5e0,_local_5c0,0x31);
    auVar141._16_16_ = _local_600;
    auVar141._0_16_ = local_620._0_16_;
    auVar145._16_16_ = local_5e0._0_16_;
    auVar145._0_16_ = _local_5c0;
    auVar109 = vperm2f128_avx(_local_620,_local_600,0x31);
    auVar154 = vshufps_avx(auVar145,auVar145,0x14);
    auVar174._8_8_ = local_5e0;
    auVar174._0_8_ = local_5e0;
    auVar174._16_8_ = local_5c0;
    auVar174._24_8_ = local_5c0;
    auVar154 = vblendps_avx(auVar174,auVar154,0x48);
    auVar175._16_16_ = local_620._0_16_;
    auVar175._0_16_ = _local_600;
    auVar97 = vshufps_avx(auVar175,auVar175,0xe1);
    auVar97 = vblendps_avx(auVar141,auVar97,0x12);
    local_200 = vblendps_avx(auVar97,auVar154,0xcc);
    auVar154 = vshufps_avx(auVar145,auVar145,0xb4);
    auVar154 = vblendps_avx(auVar116,auVar154,0x48);
    auVar34 = vshufps_avx(auVar175,auVar175,0xeb);
    auVar97 = vshufpd_avx(auVar141,auVar141,5);
    auVar97 = vblendps_avx(auVar97,auVar34,0x12);
    local_1e0 = vblendps_avx(auVar97,auVar154,0xcc);
    auVar34 = vperm2f128_avx(_local_5c0,_local_5e0,0x31);
    auVar154 = vshufps_avx(auVar34,auVar34,0x14);
    auVar117._8_8_ = auVar80._0_8_;
    auVar117._0_8_ = auVar80._0_8_;
    auVar117._16_8_ = auVar80._16_8_;
    auVar117._24_8_ = auVar80._16_8_;
    auVar154 = vblendps_avx(auVar117,auVar154,0x48);
    auVar155 = vperm2f128_avx(_local_600,_local_620,0x31);
    auVar97 = vshufps_avx(auVar155,auVar155,0xe1);
    auVar97 = vblendps_avx(auVar109,auVar97,0x12);
    local_1c0 = vblendps_avx(auVar97,auVar154,0xcc);
    auVar154 = vshufps_avx(auVar34,auVar34,0xb4);
    auVar154 = vblendps_avx(auVar80,auVar154,0x48);
    auVar34 = vshufps_avx(auVar155,auVar155,0xeb);
    auVar97 = vshufpd_avx(auVar109,auVar109,5);
    auVar97 = vblendps_avx(auVar97,auVar34,0x12);
    local_1a0 = vblendps_avx(auVar97,auVar154,0xcc);
    auVar5 = vpcmpgtd_avx(auVar179,auVar178);
    auVar70._16_16_ = auVar147;
    auVar70._0_16_ = auVar5;
    uVar13 = vmovmskps_avx(auVar70);
    uVar17 = (ulonglong)uVar13;
    do {
      if (uVar17 == 0) {
        uVar13 = 0x40;
      }
      else {
        uVar13 = 0;
        for (uVar15 = uVar17; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
          uVar13 = uVar13 + 1;
        }
      }
      bVar9 = (byte)uVar13 & 0x3f;
      local_240[0] = local_640._0_8_;
      local_240[1] = 0;
      local_240[2] = local_420;
      uStack_228 = 0;
      auVar154 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar13 << 4)));
      lVar20 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar13 & 7) * 4) * 0x60;
      *(undefined1 (*) [16])(param_1 + lVar20) = auVar154._0_16_;
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar20) = auVar154._16_16_;
      uVar17 = uVar17 & (-2L << bVar9 | 0xfffffffffffffffeU >> 0x40 - bVar9);
    } while (uVar17 != 0);
  }
  return;
}

// GetConstantKeyLerpPoseTranslations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_avx @ 140aebb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseTranslations___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_un_3C_CunT_3E_CunfCunfCunTCuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5,float param_6,char param_7,uint param_8,uint param_9)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [24];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar30 [16];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar45 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  uint uVar58;
  uint uVar64;
  uint uVar65;
  undefined1 auVar59 [16];
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar71 [16];
  undefined1 auVar72 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  uint uVar83;
  uint uVar84;
  undefined1 local_6a0 [32];
  undefined1 local_660 [32];
  undefined1 local_620 [8];
  float fStack_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float fStack_608;
  float fStack_604;
  ulonglong local_5f0;
  undefined1 local_5e0 [8];
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  ulonglong local_5a0;
  uint local_500;
  uint uStack_4fc;
  uint uStack_4f8;
  uint uStack_4f4;
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [96];
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [32];
  undefined1 local_3a0 [32];
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
  undefined1 auVar73 [32];
  undefined1 auVar78 [32];
  
  iVar2 = *(int *)(&DAT_151c6bbd0 + (longlong)(int)param_8 * 4);
  iVar3 = *(int *)(&DAT_151c6bbb0 + (longlong)(int)param_8 * 4);
  uVar12 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar12 = param_9;
  }
  uVar15 = (ulonglong)param_8;
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    auVar19 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
    auVar45 = vpshufd_avx(ZEXT416(-(uint)(param_8 == 3)),0);
    auVar18 = vpshufd_avx(ZEXT416((uint)(iVar2 * iVar3)),0);
    uVar10 = 0;
    auVar28._4_4_ = __real_00000002;
    auVar28._0_4_ = __real_00000002;
    auVar28._8_4_ = __real_00000002;
    auVar28._12_4_ = __real_00000002;
    do {
      uVar13 = (ulonglong)(uint)((int)uVar10 * 8);
      auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar13);
      auVar1 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar13);
      auVar50 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar13);
      auVar46 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar13),auVar30,0xdd);
      auVar17 = vshufps_avx(auVar1,auVar50,0xdd);
      auVar17 = vpslld_avx(auVar17,4);
      auVar46 = vpslld_avx(auVar46,4);
      uVar4 = *(uint *)(param_3 + auVar46._0_4_);
      uVar83 = *(uint *)(param_3 + 4 + (longlong)auVar46._0_4_);
      auVar59 = ZEXT416(uVar83);
      uVar84 = *(uint *)(param_3 + 4 + (longlong)auVar17._0_4_);
      auVar46 = ZEXT416(*(uint *)(param_3 + auVar17._0_4_));
      auVar75 = vpmovsxdq_avx(auVar46);
      auVar46 = vpshufd_avx(auVar46,0xee);
      vpmovsxdq_avx(auVar46);
      vpmovsxdq_avx(ZEXT416(uVar4));
      auVar46 = vpshufd_avx(ZEXT416(uVar4),0xee);
      vpmovsxdq_avx(auVar46);
      auVar46 = vpcmpgtd_avx(auVar28,ZEXT416(uVar84));
      auVar17 = vpcmpgtd_avx(auVar28,auVar59);
      auVar72._16_16_ = auVar46;
      auVar72._0_16_ = auVar17;
      iVar11 = vmovmskps_avx(auVar72);
      if (iVar11 == 0) {
        auVar60 = SUB6432(ZEXT864(0),0) << 0x20;
LAB_140aebe3a:
        auVar46._12_4_ = 0;
        auVar46._0_12_ = ZEXT412(0);
        auVar72 = ZEXT1232(ZEXT412(0)) << 0x20;
        auVar72 = vcmpps_avx(auVar72,auVar72,0xf);
        auVar32._0_4_ = auVar72._0_4_ ^ auVar60._0_4_;
        auVar32._4_4_ = auVar72._4_4_ ^ auVar60._4_4_;
        auVar32._8_4_ = auVar72._8_4_ ^ auVar60._8_4_;
        auVar32._12_4_ = auVar72._12_4_ ^ auVar60._12_4_;
        auVar32._16_4_ = auVar72._16_4_ ^ auVar60._16_4_;
        auVar32._20_4_ = auVar72._20_4_ ^ auVar60._20_4_;
        auVar32._24_4_ = auVar72._24_4_ ^ auVar60._24_4_;
        auVar32._28_4_ = auVar72._28_4_ ^ auVar60._28_4_;
        if (param_6 <= 0.0) {
          auVar72 = SUB6432(ZEXT864(0),0) << 0x20;
          auVar74 = vblendvps_avx(local_660,ZEXT832(0) << 0x20,auVar32);
          local_6a0 = vblendvps_avx(local_6a0,ZEXT832(0) << 0x20,auVar32);
        }
        else {
          auVar28 = vpcmpeqd_avx(auVar46 << 0x20,auVar46 << 0x20);
          auVar17._0_4_ = uVar84 + auVar28._0_4_;
          auVar17._4_4_ = auVar28._4_4_;
          auVar17._8_4_ = auVar28._8_4_;
          auVar17._12_4_ = auVar28._12_4_;
          auVar6._0_4_ = uVar83 + auVar28._0_4_;
          auVar6._4_4_ = auVar28._4_4_;
          auVar6._8_4_ = auVar28._8_4_;
          auVar6._12_4_ = auVar28._12_4_;
          auVar57._16_16_ = auVar17;
          auVar57._0_16_ = auVar6;
          if (__real_3f800000 <= param_6) {
            auVar74 = vblendvps_avx(local_660,auVar57,auVar32);
            local_6a0 = vblendvps_avx(local_6a0,auVar57,auVar32);
            auVar72 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          else {
            auVar72 = vcvtdq2ps_avx(auVar57);
            local_440 = auVar19._0_4_;
            fStack_43c = auVar19._4_4_;
            fStack_438 = auVar19._8_4_;
            fStack_434 = auVar19._12_4_;
            auVar82._0_4_ = auVar72._0_4_ * local_440;
            auVar82._4_4_ = auVar72._4_4_ * fStack_43c;
            auVar82._8_4_ = auVar72._8_4_ * fStack_438;
            auVar82._12_4_ = auVar72._12_4_ * fStack_434;
            auVar82._16_4_ = auVar72._16_4_ * local_440;
            auVar82._20_4_ = auVar72._20_4_ * fStack_43c;
            auVar82._24_4_ = auVar72._24_4_ * fStack_438;
            auVar82._28_4_ = auVar72._28_4_ * fStack_434;
            auVar60 = vroundps_avx(auVar82,9);
            auVar72 = SUB6432(ZEXT864(0),0) << 0x20;
            if (param_7 != '\x01') {
              auVar72 = vsubps_avx(auVar82,auVar60);
            }
            auVar77._0_4_ = (int)auVar60._0_4_;
            auVar77._4_4_ = (int)auVar60._4_4_;
            auVar77._8_4_ = (int)auVar60._8_4_;
            auVar77._12_4_ = (int)auVar60._12_4_;
            auVar78._16_4_ = (int)auVar60._16_4_;
            auVar78._0_16_ = auVar77;
            auVar78._20_4_ = (int)auVar60._20_4_;
            auVar78._24_4_ = (int)auVar60._24_4_;
            auVar78._28_4_ = (int)auVar60._28_4_;
            auVar46 = vpminsd_avx(auVar78._16_16_,auVar17);
            auVar77 = vpminsd_avx(auVar77,auVar6);
            auVar79._16_16_ = auVar46;
            auVar79._0_16_ = auVar77;
            auVar74 = vblendvps_avx(local_660,auVar79,auVar32);
            auVar46 = vpsubd_avx(auVar74._0_16_,auVar28);
            auVar28 = vpsubd_avx(auVar74._16_16_,auVar28);
            auVar28 = vpminsd_avx(auVar28,auVar17);
            auVar46 = vpminsd_avx(auVar46,auVar6);
            auVar76._16_16_ = auVar28;
            auVar76._0_16_ = auVar46;
            local_6a0 = vblendvps_avx(local_6a0,auVar76,auVar32);
          }
        }
        _local_620 = vblendvps_avx(_local_620,auVar72,auVar32);
      }
      else {
        auVar46 = vpcmpgtd_avx(auVar28,ZEXT416(uVar84));
        auVar28 = vpcmpgtd_avx(auVar28,auVar59);
        auVar60._16_16_ = auVar46;
        auVar60._0_16_ = auVar28;
        uVar58 = auVar28._0_4_;
        auVar74._0_4_ = ~uVar58 & local_660._0_4_;
        uVar64 = auVar28._4_4_;
        auVar74._4_4_ = ~uVar64 & local_660._4_4_;
        uVar65 = auVar28._8_4_;
        auVar74._8_4_ = ~uVar65 & local_660._8_4_;
        uVar66 = auVar28._12_4_;
        auVar74._12_4_ = ~uVar66 & local_660._12_4_;
        uVar67 = auVar46._0_4_;
        auVar74._16_4_ = ~uVar67 & local_660._16_4_;
        uVar68 = auVar46._4_4_;
        auVar74._20_4_ = ~uVar68 & local_660._20_4_;
        uVar69 = auVar46._8_4_;
        auVar74._24_4_ = ~uVar69 & local_660._24_4_;
        uVar70 = auVar46._12_4_;
        auVar74._28_4_ = ~uVar70 & local_660._28_4_;
        local_6a0._0_4_ = ~uVar58 & local_6a0._0_4_;
        local_6a0._4_4_ = ~uVar64 & local_6a0._4_4_;
        local_6a0._8_4_ = ~uVar65 & local_6a0._8_4_;
        local_6a0._12_4_ = ~uVar66 & local_6a0._12_4_;
        local_6a0._16_4_ = ~uVar67 & local_6a0._16_4_;
        local_6a0._20_4_ = ~uVar68 & local_6a0._20_4_;
        local_6a0._24_4_ = ~uVar69 & local_6a0._24_4_;
        local_6a0._28_4_ = ~uVar70 & local_6a0._28_4_;
        local_620._4_4_ = ~uVar64 & local_620._4_4_;
        local_620._0_4_ = ~uVar58 & local_620._0_4_;
        fStack_618 = (float)(~uVar65 & (uint)fStack_618);
        fStack_614 = (float)(~uVar66 & (uint)fStack_614);
        fStack_610 = (float)(~uVar67 & (uint)fStack_610);
        fStack_60c = (float)(~uVar68 & (uint)fStack_60c);
        fStack_608 = (float)(~uVar69 & (uint)fStack_608);
        fStack_604 = (float)(~uVar70 & (uint)fStack_604);
        local_660 = auVar74;
        if ((char)iVar11 != -1) goto LAB_140aebe3a;
      }
      auVar29._4_4_ = __real_00000001;
      auVar29._0_4_ = __real_00000001;
      auVar29._8_4_ = __real_00000001;
      auVar29._12_4_ = __real_00000001;
      auVar28 = vpcmpgtd_avx(ZEXT416(uVar84),auVar29);
      auVar46 = vpcmpgtd_avx(auVar59,auVar29);
      local_500 = auVar45._0_4_;
      uStack_4fc = auVar45._4_4_;
      uStack_4f8 = auVar45._8_4_;
      uStack_4f4 = auVar45._12_4_;
      auVar21._0_4_ = auVar46._0_4_ & local_500;
      auVar21._4_4_ = auVar46._4_4_ & uStack_4fc;
      auVar21._8_4_ = auVar46._8_4_ & uStack_4f8;
      auVar21._12_4_ = auVar46._12_4_ & uStack_4f4;
      auVar21._16_4_ = auVar28._0_4_ & local_500;
      auVar21._20_4_ = auVar28._4_4_ & uStack_4fc;
      auVar21._24_4_ = auVar28._8_4_ & uStack_4f8;
      auVar21._28_4_ = auVar28._12_4_ & uStack_4f4;
      auVar72 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                              ___ymm_0000001800000018000000180000001800000018000000180000001800000018
                              ,auVar21);
      auVar17 = auVar72._0_16_;
      auVar46 = auVar72._16_16_;
      auVar28 = vpmovsxdq_avx(auVar46);
      auVar46 = vshufpd_avx(auVar46,auVar46,3);
      vpmovsxdq_avx(auVar46);
      vpmovsxdq_avx(auVar17);
      auVar46 = vshufpd_avx(auVar17,auVar17,3);
      vpmovsxdq_avx(auVar46);
      auVar46 = auVar74._0_16_;
      if (param_8 < 7) {
        auVar45 = vpmulld_avx(auVar46,auVar18);
        auVar18 = vpmulld_avx(auVar74._16_16_,auVar18);
        vpmovsxdq_avx(auVar18);
        auVar18 = vpshufd_avx(auVar18,0xee);
        vpmovsxdq_avx(auVar18);
        vpmovsxdq_avx(auVar45);
        auVar45 = vpshufd_avx(auVar45,0xee);
        vpmovsxdq_avx(auVar45);
                    /* WARNING: Could not recover jumptable at 0x000140aec015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6b950 + *(int *)(&DAT_151c6b950 + uVar15 * 4)))
                  ((longlong)(int)uVar4,&DAT_151c6b950 + *(int *)(&DAT_151c6b950 + uVar15 * 4),
                   auVar75._0_8_);
        return;
      }
      local_3a0 = ZEXT1632(ZEXT816(0));
      local_3c0 = ZEXT1632(ZEXT816(0));
      local_3e0 = ZEXT1632(ZEXT816(0));
      auVar32 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar60 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar72 = ZEXT1632((undefined1  [16])0x0);
      auVar22._0_4_ = auVar74._0_4_ ^ local_6a0._0_4_;
      auVar22._4_4_ = auVar74._4_4_ ^ local_6a0._4_4_;
      auVar22._8_4_ = auVar74._8_4_ ^ local_6a0._8_4_;
      auVar22._12_4_ = auVar74._12_4_ ^ local_6a0._12_4_;
      auVar22._16_4_ = auVar74._16_4_ ^ local_6a0._16_4_;
      auVar22._20_4_ = auVar74._20_4_ ^ local_6a0._20_4_;
      auVar22._24_4_ = auVar74._24_4_ ^ local_6a0._24_4_;
      auVar22._28_4_ = auVar74._28_4_ ^ local_6a0._28_4_;
      if (auVar22 != (undefined1  [32])0x0) {
        auVar75 = local_6a0._0_16_;
        auVar17 = vpcmpeqd_avx(local_6a0._16_16_,auVar74._16_16_);
        auVar28 = vpcmpeqd_avx(auVar28,auVar28);
        if (param_8 < 7) {
          vpcmpeqd_avx(auVar46,auVar75);
          auVar19 = vpmulld_avx(auVar75,auVar18);
          auVar45 = vpmulld_avx(local_6a0._16_16_,auVar18);
          vpmovsxdq_avx(auVar45);
          auVar45 = vpshufd_avx(auVar45,0xee);
          vpmovsxdq_avx(auVar45);
          auVar45 = vpmovsxdq_avx(auVar19);
          auVar18 = vpshufd_avx(auVar19,0xee);
          auVar18 = vpmovsxdq_avx(auVar18);
                    /* WARNING: Could not recover jumptable at 0x000140aec787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6b96c + *(int *)(&DAT_151c6b96c + uVar15 * 4)))
                    (auVar18._0_8_,auVar45._0_8_);
          return;
        }
        auVar59 = vpcmpeqd_avx(auVar46,auVar75);
        auVar23._16_16_ = auVar17 ^ auVar28;
        auVar23._0_16_ = auVar59 ^ auVar28;
        auVar32 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar72 = vmaskmovps_avx(auVar23,auVar32);
        auVar60 = vmaskmovps_avx(auVar23,auVar32);
        auVar32 = vmaskmovps_avx(auVar23,auVar32);
        auVar46 = vpcmpeqd_avx(auVar46,auVar75);
        auVar24._16_16_ = auVar17 ^ auVar28;
        auVar24._0_16_ = auVar46 ^ auVar28;
        auVar72 = vsubps_avx(auVar72,local_3e0);
        auVar60 = vsubps_avx(auVar60,local_3c0);
        auVar32 = vsubps_avx(auVar32,local_3a0);
        auVar33._0_4_ = (float)local_620._0_4_ * auVar72._0_4_ + 0.0;
        auVar33._4_4_ = (float)local_620._4_4_ * auVar72._4_4_ + 0.0;
        auVar33._8_4_ = fStack_618 * auVar72._8_4_ + 0.0;
        auVar33._12_4_ = fStack_614 * auVar72._12_4_ + 0.0;
        auVar33._16_4_ = fStack_610 * auVar72._16_4_ + 0.0;
        auVar33._20_4_ = fStack_60c * auVar72._20_4_ + 0.0;
        auVar33._24_4_ = fStack_608 * auVar72._24_4_ + 0.0;
        auVar33._28_4_ = fStack_604 * auVar72._28_4_ + 0.0;
        auVar47._0_4_ = (float)local_620._0_4_ * auVar60._0_4_ + 0.0;
        auVar47._4_4_ = (float)local_620._4_4_ * auVar60._4_4_ + 0.0;
        auVar47._8_4_ = fStack_618 * auVar60._8_4_ + 0.0;
        auVar47._12_4_ = fStack_614 * auVar60._12_4_ + 0.0;
        auVar47._16_4_ = fStack_610 * auVar60._16_4_ + 0.0;
        auVar47._20_4_ = fStack_60c * auVar60._20_4_ + 0.0;
        auVar47._24_4_ = fStack_608 * auVar60._24_4_ + 0.0;
        auVar47._28_4_ = fStack_604 * auVar60._28_4_ + 0.0;
        auVar51._0_4_ = (float)local_620._0_4_ * auVar32._0_4_ + 0.0;
        auVar51._4_4_ = (float)local_620._4_4_ * auVar32._4_4_ + 0.0;
        auVar51._8_4_ = fStack_618 * auVar32._8_4_ + 0.0;
        auVar51._12_4_ = fStack_614 * auVar32._12_4_ + 0.0;
        auVar51._16_4_ = fStack_610 * auVar32._16_4_ + 0.0;
        auVar51._20_4_ = fStack_60c * auVar32._20_4_ + 0.0;
        auVar51._24_4_ = fStack_608 * auVar32._24_4_ + 0.0;
        auVar51._28_4_ = fStack_604 * auVar32._28_4_ + 0.0;
        auVar72 = vmaskmovps_avx(auVar24,auVar33);
        auVar60 = vmaskmovps_avx(auVar24,auVar47);
        auVar32 = vmaskmovps_avx(auVar24,auVar51);
      }
      auVar25._16_16_ = auVar50;
      auVar25._0_16_ = auVar30;
      auVar34._16_16_ = auVar1;
      auVar34._0_16_ = *(undefined1 (*) [16])(param_2 + uVar13);
      local_220 = vshufps_avx(auVar34,auVar25,0x88);
      auVar52._16_16_ = auVar60._0_16_;
      auVar52._0_16_ = auVar72._0_16_;
      auVar76 = vperm2f128_avx(auVar72,auVar60,0x31);
      auVar55._16_16_ = auVar72._0_16_;
      auVar55._0_16_ = auVar60._0_16_;
      auVar57 = vshufps_avx(auVar55,auVar55,0xe1);
      auVar57 = vblendps_avx(auVar52,auVar57,0x12);
      auVar78 = vperm2f128_avx(ZEXT832(0) << 0x20,auVar32,0x21);
      auVar82 = vshufps_avx(auVar78,auVar78,0x14);
      auVar82 = vblendps_avx(ZEXT1632(CONCAT88(auVar32._0_8_,auVar32._0_8_)),auVar82,0x48);
      local_180 = vblendps_avx(auVar57,auVar82,0xcc);
      auVar82 = vshufps_avx(auVar55,auVar55,0xeb);
      auVar57 = vshufpd_avx(auVar52,auVar52,5);
      auVar57 = vblendps_avx(auVar57,auVar82,0x12);
      auVar82 = vshufps_avx(auVar78,auVar78,0xb4);
      auVar82 = vblendps_avx(ZEXT1632(auVar32._0_16_),auVar82,0x48);
      local_160 = vblendps_avx(auVar57,auVar82,0xcc);
      auVar57 = vperm2f128_avx(auVar60,auVar72,0x31);
      auVar72 = vshufps_avx(auVar57,auVar57,0xe1);
      auVar72 = vblendps_avx(auVar76,auVar72,0x12);
      auVar60 = vunpcklps_avx(auVar32,ZEXT832(0) << 0x20);
      auVar60 = vblendps_avx(ZEXT1632(CONCAT88(auVar32._16_8_,auVar32._16_8_)),auVar60,0x48);
      local_140 = vblendps_avx(auVar72,auVar60,0xcc);
      auVar60 = vshufps_avx(auVar57,auVar57,0xeb);
      auVar72 = vshufpd_avx(auVar76,auVar76,5);
      auVar72 = vblendps_avx(auVar72,auVar60,0x12);
      auVar60 = vunpckhps_avx(auVar32,ZEXT832(0) << 0x20);
      auVar60 = vblendps_avx(ZEXT1632(auVar32._16_16_),auVar60,0x48);
      local_120 = vblendps_avx(auVar72,auVar60,0xcc);
      uVar13 = 0xff;
      do {
        uVar4 = 0;
        for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
          uVar4 = uVar4 + 1;
        }
        bVar5 = (byte)uVar4 & 0x3f;
        iVar11 = *(int *)(local_220 + (ulonglong)(uVar4 & 7) * 4);
        auVar72 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar4 << 4)));
        *(undefined1 (*) [16])(param_1 + 0x20 + (longlong)iVar11 * 0x60) = auVar72._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x30 + (longlong)iVar11 * 0x60) = auVar72._16_16_;
        uVar13 = uVar13 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
      } while (uVar13 != 0);
      uVar10 = uVar10 + 8;
      auVar28._4_4_ = __real_00000002;
      auVar28._0_4_ = __real_00000002;
      auVar28._8_4_ = __real_00000002;
      auVar28._12_4_ = __real_00000002;
      local_660 = auVar74;
    } while (uVar10 < (uVar12 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar10) {
      return;
    }
  }
  auVar45 = vpshufd_avx(ZEXT416((uint)uVar10),0);
  auVar35._16_16_ = auVar45;
  auVar35._0_16_ = auVar45;
  auVar75 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar1 = vpshufd_avx(ZEXT416(param_9),0);
  auVar59 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar28 = vpcmpgtd_avx(auVar1,auVar59);
  auVar30 = vpcmpgtd_avx(auVar1,auVar75);
  auVar18 = vpslld_avx(auVar45,3);
  auVar45 = vpand_avx(auVar30,auVar18);
  uVar83 = auVar30._0_4_;
  auVar50._0_4_ = uVar83 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  uVar84 = auVar30._4_4_;
  auVar50._4_4_ = uVar84 & _UNK_150b519c4;
  uVar58 = auVar30._8_4_;
  auVar50._8_4_ = uVar58 & _UNK_150b519c8;
  uVar64 = auVar30._12_4_;
  auVar50._12_4_ = uVar64 & _UNK_150b519cc;
  uVar65 = auVar28._0_4_;
  uVar66 = auVar28._4_4_;
  uVar67 = auVar28._8_4_;
  uVar68 = auVar28._12_4_;
  vextractps_avx(auVar50,1);
  vextractps_avx(auVar50,2);
  vextractps_avx(auVar50,3);
  auVar18 = vpand_avx(auVar28,auVar18);
  lVar14 = auVar18._0_4_ + param_2;
  auVar18._0_4_ = uVar83 & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
  auVar18._4_4_ = uVar84 & _UNK_150b519e4;
  auVar18._8_4_ = uVar58 & _UNK_150b519e8;
  auVar18._12_4_ = uVar64 & _UNK_150b519ec;
  vextractps_avx(auVar18,1);
  vextractps_avx(auVar18,2);
  vextractps_avx(auVar18,3);
  auVar19 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b519f0) + lVar14)),4);
  auVar18 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)auVar18._0_4_ + param_2 + auVar45._0_4_)),4);
  auVar18 = vpand_avx(auVar30,auVar18);
  auVar19 = vpand_avx(auVar28,auVar19);
  auVar46 = ZEXT416(*(uint *)(param_3 + auVar18._0_4_));
  auVar17 = ZEXT416(*(uint *)(param_3 + auVar19._0_4_));
  auVar20._0_4_ = uVar83 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
  auVar20._4_4_ = uVar84 & _UNK_150b50d44;
  auVar20._8_4_ = uVar58 & _UNK_150b50d48;
  auVar20._12_4_ = uVar64 & _UNK_150b50d4c;
  auVar20._16_4_ = uVar65 & _UNK_150b50d50;
  auVar20._20_4_ = uVar66 & _UNK_150b50d54;
  uVar12 = *(uint *)((ulonglong)auVar20._0_4_ + param_3 + auVar18._0_4_);
  uVar4 = *(uint *)((auVar20._16_8_ & 0xffffffff) + param_3 + auVar19._0_4_);
  auVar18 = vpshufd_avx(auVar17,0xee);
  vpmovsxdq_avx(auVar18);
  auVar19._4_4_ = __real_00000002;
  auVar19._0_4_ = __real_00000002;
  auVar19._8_4_ = __real_00000002;
  auVar19._12_4_ = __real_00000002;
  auVar18 = vpcmpgtd_avx(auVar19,ZEXT416(uVar4));
  auVar19 = vpcmpgtd_avx(auVar19,ZEXT416(uVar12));
  auVar26._0_4_ = uVar83 & auVar19._0_4_;
  auVar26._4_4_ = uVar84 & auVar19._4_4_;
  auVar26._8_4_ = uVar58 & auVar19._8_4_;
  auVar26._12_4_ = uVar64 & auVar19._12_4_;
  auVar26._16_4_ = uVar65 & auVar18._0_4_;
  auVar26._20_4_ = uVar66 & auVar18._4_4_;
  auVar26._24_4_ = uVar67 & auVar18._8_4_;
  auVar26._28_4_ = uVar68 & auVar18._12_4_;
  iVar11 = vmovmskps_avx(auVar26);
  auVar50 = vpshufd_avx(auVar46,0xee);
  vpmovsxdq_avx(auVar50);
  vpmovsxdq_avx(auVar17);
  vpmovsxdq_avx(auVar46);
  auVar37 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (iVar11 != 0) {
    auVar50 = vpcmpgtd_avx(auVar1,auVar59);
    auVar46 = vpcmpgtd_avx(auVar1,auVar75);
    auVar36._16_16_ = auVar50;
    auVar36._0_16_ = auVar46;
    uVar16 = vmovmskps_avx(auVar36);
    if ((char)uVar16 == (char)iVar11) {
      _local_5e0 = ZEXT832(0) << 0x20;
      auVar72 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar60 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      goto LAB_140aedafa;
    }
    auVar18 = vpand_avx(auVar18,auVar28);
    auVar19 = vpand_avx(auVar19,auVar30);
    auVar18 = vpackssdw_avx(auVar19,auVar18);
    auVar19 = vpmovsxwd_avx(auVar18);
    auVar18 = vpunpckhwd_avx(auVar18,auVar18);
    auVar37._16_16_ = auVar18;
    auVar37._0_16_ = auVar19;
  }
  auVar72 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar60 = vcmpps_avx(auVar72,auVar72,0xf);
  auVar54._0_4_ = auVar37._0_4_ ^ auVar60._0_4_;
  auVar54._4_4_ = auVar37._4_4_ ^ auVar60._4_4_;
  auVar54._8_4_ = auVar37._8_4_ ^ auVar60._8_4_;
  auVar54._12_4_ = auVar37._12_4_ ^ auVar60._12_4_;
  auVar54._16_4_ = auVar37._16_4_ ^ auVar60._16_4_;
  auVar54._20_4_ = auVar37._20_4_ ^ auVar60._20_4_;
  auVar54._24_4_ = auVar37._24_4_ ^ auVar60._24_4_;
  auVar54._28_4_ = auVar37._28_4_ ^ auVar60._28_4_;
  auVar30._0_12_ = ZEXT812(0);
  auVar30._12_4_ = 0;
  auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar60 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (0.0 < param_6) {
    auVar18 = vpcmpeqd_avx(auVar30,auVar30);
    auVar7._0_4_ = uVar4 + auVar18._0_4_;
    auVar7._4_4_ = auVar18._4_4_;
    auVar7._8_4_ = auVar18._8_4_;
    auVar7._12_4_ = auVar18._12_4_;
    auVar8._0_4_ = uVar12 + auVar18._0_4_;
    auVar8._4_4_ = auVar18._4_4_;
    auVar8._8_4_ = auVar18._8_4_;
    auVar8._12_4_ = auVar18._12_4_;
    auVar80._16_16_ = auVar7;
    auVar80._0_16_ = auVar8;
    if (__real_3f800000 <= param_6) {
      auVar39._0_4_ = auVar54._0_4_ & uVar83;
      auVar39._4_4_ = auVar54._4_4_ & uVar84;
      auVar39._8_4_ = auVar54._8_4_ & uVar58;
      auVar39._12_4_ = auVar54._12_4_ & uVar64;
      auVar39._16_4_ = auVar54._16_4_ & uVar65;
      auVar39._20_4_ = auVar54._20_4_ & uVar66;
      auVar39._24_4_ = auVar54._24_4_ & uVar67;
      auVar39._28_4_ = auVar54._28_4_ & uVar68;
      auVar72 = vblendvps_avx(auVar74,auVar80,auVar39);
      auVar60 = auVar72;
    }
    else {
      auVar18 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
      auVar72 = vcvtdq2ps_avx(auVar80);
      auVar61._0_4_ = auVar18._0_4_ * auVar72._0_4_;
      auVar61._4_4_ = auVar18._4_4_ * auVar72._4_4_;
      auVar61._8_4_ = auVar18._8_4_ * auVar72._8_4_;
      auVar61._12_4_ = auVar18._12_4_ * auVar72._12_4_;
      auVar61._16_4_ = auVar18._0_4_ * auVar72._16_4_;
      auVar61._20_4_ = auVar18._4_4_ * auVar72._20_4_;
      auVar61._24_4_ = auVar18._8_4_ * auVar72._24_4_;
      auVar61._28_4_ = auVar18._12_4_ * auVar72._28_4_;
      auVar56._0_4_ = auVar54._0_4_ & uVar83;
      auVar56._4_4_ = auVar54._4_4_ & uVar84;
      auVar56._8_4_ = auVar54._8_4_ & uVar58;
      auVar56._12_4_ = auVar54._12_4_ & uVar64;
      auVar56._16_4_ = auVar54._16_4_ & uVar65;
      auVar56._20_4_ = auVar54._20_4_ & uVar66;
      auVar56._24_4_ = auVar54._24_4_ & uVar67;
      auVar56._28_4_ = auVar54._28_4_ & uVar68;
      auVar60 = vroundps_avx(auVar61,9);
      auVar71._0_4_ = (int)auVar60._0_4_;
      auVar71._4_4_ = (int)auVar60._4_4_;
      auVar71._8_4_ = (int)auVar60._8_4_;
      auVar71._12_4_ = (int)auVar60._12_4_;
      auVar73._16_4_ = (int)auVar60._16_4_;
      auVar73._0_16_ = auVar71;
      auVar73._20_4_ = (int)auVar60._20_4_;
      auVar73._24_4_ = (int)auVar60._24_4_;
      auVar73._28_4_ = (int)auVar60._28_4_;
      auVar18 = vpminsd_avx(auVar73._16_16_,auVar7);
      auVar19 = vpminsd_avx(auVar71,auVar8);
      auVar53._16_16_ = auVar18;
      auVar53._0_16_ = auVar19;
      auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar72 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar53,auVar56);
      if (param_7 != '\x01') {
        auVar74 = vsubps_avx(auVar61,auVar60);
      }
      auVar18 = vpcmpeqd_avx(auVar60._0_16_,auVar60._0_16_);
      auVar19 = vpsubd_avx(auVar72._0_16_,auVar18);
      auVar18 = vpsubd_avx(auVar72._16_16_,auVar18);
      auVar18 = vpminsd_avx(auVar18,auVar7);
      auVar19 = vpminsd_avx(auVar19,auVar8);
      auVar38._16_16_ = auVar18;
      auVar38._0_16_ = auVar19;
      auVar60 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar38,auVar56);
    }
  }
  _local_5e0 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar74,auVar54);
LAB_140aedafa:
  local_5f0 = (ulonglong)*(uint *)((ulonglong)(uVar65 & _UNK_150b519d0) + lVar14);
  local_5a0 = (ulonglong)*(uint *)(param_2 + auVar45._0_4_);
  auVar19 = vpshufd_avx(ZEXT416(-(uint)(param_8 == 3)),0);
  auVar31._4_4_ = __real_00000001;
  auVar31._0_4_ = __real_00000001;
  auVar31._8_4_ = __real_00000001;
  auVar31._12_4_ = __real_00000001;
  auVar45 = vpcmpgtd_avx(ZEXT416(uVar4),auVar31);
  auVar18 = vpcmpgtd_avx(ZEXT416(uVar12),auVar31);
  auVar40._0_4_ = auVar18._0_4_ & auVar19._0_4_;
  auVar40._4_4_ = auVar18._4_4_ & auVar19._4_4_;
  auVar40._8_4_ = auVar18._8_4_ & auVar19._8_4_;
  auVar40._12_4_ = auVar18._12_4_ & auVar19._12_4_;
  auVar40._16_4_ = auVar45._0_4_ & auVar19._0_4_;
  auVar40._20_4_ = auVar45._4_4_ & auVar19._4_4_;
  auVar40._24_4_ = auVar45._8_4_ & auVar19._8_4_;
  auVar40._28_4_ = auVar45._12_4_ & auVar19._12_4_;
  auVar74 = vblendvps_avx(ZEXT832(0) << 0x20,
                          ___ymm_0000001800000018000000180000001800000018000000180000001800000018,
                          auVar40);
  auVar18 = auVar74._0_16_;
  auVar45 = auVar74._16_16_;
  vpmovsxdq_avx(auVar45);
  auVar45 = vshufpd_avx(auVar45,auVar45,3);
  vpmovsxdq_avx(auVar45);
  vpmovsxdq_avx(auVar18);
  auVar45 = vshufpd_avx(auVar18,auVar18,3);
  vpmovsxdq_avx(auVar45);
  auVar45 = vpshufd_avx(ZEXT416((uint)(iVar2 * iVar3)),0);
  if (param_8 < 7) {
    auVar18 = vpmulld_avx(auVar72._0_16_,auVar45);
    auVar45 = vpmulld_avx(auVar72._16_16_,auVar45);
    vpmovsxdq_avx(auVar45);
    auVar45 = vpshufd_avx(auVar45,0xee);
    vpmovsxdq_avx(auVar45);
    auVar45 = vpmovsxdq_avx(auVar18);
    auVar18 = vpshufd_avx(auVar18,0xee);
    vpmovsxdq_avx(auVar18);
                    /* WARNING: Could not recover jumptable at 0x000140aedc4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6b988 + *(int *)(&DAT_151c6b988 + uVar15 * 4)))
              (&DAT_151c6b988,auVar20._16_8_ >> 0x20,
               &DAT_151c6b988 + *(int *)(&DAT_151c6b988 + uVar15 * 4),auVar45._0_8_);
    return;
  }
  auVar18 = vpcmpgtd_avx(auVar1,auVar59);
  auVar19 = vpcmpgtd_avx(auVar1,auVar75);
  auVar41._16_16_ = auVar18;
  auVar41._0_16_ = auVar19;
  local_4e0 = vmaskmovps_avx(auVar41,ZEXT832(0) << 0x20);
  local_4c0 = vmaskmovps_avx(auVar41,ZEXT832(0) << 0x20);
  local_4a0._0_32_ = vmaskmovps_avx(auVar41,ZEXT832(0) << 0x20);
  auVar18 = vpcmpeqd_avx(auVar72._16_16_,auVar60._16_16_);
  auVar19 = vpcmpeqd_avx(auVar60._0_16_,auVar72._0_16_);
  auVar42._16_16_ = auVar18;
  auVar42._0_16_ = auVar19;
  auVar28 = vpcmpgtd_avx(auVar1,auVar59);
  auVar30 = vpcmpgtd_avx(auVar1,auVar75);
  auVar48._16_16_ = auVar28;
  auVar48._0_16_ = auVar30;
  auVar48 = auVar48 & ~auVar42;
  if ((((((((SUB321(auVar48 >> 0x1f,0) & 1) != 0 || (SUB321(auVar48 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar48 >> 0x5f,0) & 1) != 0) || SUB321(auVar48 >> 0x7f,0) != '\0') ||
        (SUB321(auVar48 >> 0x9f,0) & 1) != 0) || SUB321(auVar48 >> 0xbf,0) != '\0') ||
      (SUB321(auVar48 >> 0xdf,0) & 1) != 0) || auVar48[0x1f] < '\0') {
    auVar62._0_4_ = ~auVar19._0_4_ & uVar83;
    auVar62._4_4_ = ~auVar19._4_4_ & uVar84;
    auVar62._8_4_ = ~auVar19._8_4_ & uVar58;
    auVar62._12_4_ = ~auVar19._12_4_ & uVar64;
    auVar62._16_4_ = ~auVar18._0_4_ & uVar65;
    auVar62._20_4_ = ~auVar18._4_4_ & uVar66;
    auVar62._24_4_ = ~auVar18._8_4_ & uVar67;
    auVar62._28_4_ = ~auVar18._12_4_ & uVar68;
    if (param_8 < 7) {
      auVar18 = vpmulld_avx(auVar60._0_16_,auVar45);
      auVar45 = vpmulld_avx(auVar60._16_16_,auVar45);
      vpmovsxdq_avx(auVar45);
      auVar45 = vpshufd_avx(auVar45,0xee);
      vpmovsxdq_avx(auVar45);
      auVar45 = vpmovsxdq_avx(auVar18);
      auVar18 = vpshufd_avx(auVar18,0xee);
      vpmovsxdq_avx(auVar18);
                    /* WARNING: Could not recover jumptable at 0x000140aee8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6b9a4 + *(int *)(&DAT_151c6b9a4 + uVar15 * 4)))
                (auVar45._0_8_,&DAT_151c6b9a4 + *(int *)(&DAT_151c6b9a4 + uVar15 * 4));
      return;
    }
    auVar72 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar60 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar74 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar72 = vsubps_avx(auVar72,local_4e0);
    auVar60 = vsubps_avx(auVar60,local_4c0);
    auVar74 = vsubps_avx(auVar74,local_4a0._0_32_);
    auVar27._0_4_ = local_4e0._0_4_ + (float)local_5e0._0_4_ * auVar72._0_4_;
    auVar27._4_4_ = local_4e0._4_4_ + (float)local_5e0._4_4_ * auVar72._4_4_;
    auVar27._8_4_ = local_4e0._8_4_ + fStack_5d8 * auVar72._8_4_;
    auVar27._12_4_ = local_4e0._12_4_ + fStack_5d4 * auVar72._12_4_;
    auVar27._16_4_ = local_4e0._16_4_ + fStack_5d0 * auVar72._16_4_;
    auVar27._20_4_ = local_4e0._20_4_ + fStack_5cc * auVar72._20_4_;
    auVar27._24_4_ = local_4e0._24_4_ + fStack_5c8 * auVar72._24_4_;
    auVar27._28_4_ = local_4e0._28_4_ + fStack_5c4 * auVar72._28_4_;
    auVar43._0_4_ = local_4c0._0_4_ + (float)local_5e0._0_4_ * auVar60._0_4_;
    auVar43._4_4_ = local_4c0._4_4_ + (float)local_5e0._4_4_ * auVar60._4_4_;
    auVar43._8_4_ = local_4c0._8_4_ + fStack_5d8 * auVar60._8_4_;
    auVar43._12_4_ = local_4c0._12_4_ + fStack_5d4 * auVar60._12_4_;
    auVar43._16_4_ = local_4c0._16_4_ + fStack_5d0 * auVar60._16_4_;
    auVar43._20_4_ = local_4c0._20_4_ + fStack_5cc * auVar60._20_4_;
    auVar43._24_4_ = local_4c0._24_4_ + fStack_5c8 * auVar60._24_4_;
    auVar43._28_4_ = local_4c0._28_4_ + fStack_5c4 * auVar60._28_4_;
    auVar49._0_4_ = local_4a0._0_4_ + (float)local_5e0._0_4_ * auVar74._0_4_;
    auVar49._4_4_ = local_4a0._4_4_ + (float)local_5e0._4_4_ * auVar74._4_4_;
    auVar49._8_4_ = local_4a0._8_4_ + fStack_5d8 * auVar74._8_4_;
    auVar49._12_4_ = local_4a0._12_4_ + fStack_5d4 * auVar74._12_4_;
    auVar49._16_4_ = local_4a0._16_4_ + fStack_5d0 * auVar74._16_4_;
    auVar49._20_4_ = local_4a0._20_4_ + fStack_5cc * auVar74._20_4_;
    auVar49._24_4_ = local_4a0._24_4_ + fStack_5c8 * auVar74._24_4_;
    auVar49._28_4_ = local_4a0._28_4_ + fStack_5c4 * auVar74._28_4_;
    local_4e0 = vmaskmovps_avx(auVar62,auVar27);
    local_4c0 = vmaskmovps_avx(auVar62,auVar43);
    local_4a0._0_32_ = vmaskmovps_avx(auVar62,auVar49);
  }
  auVar63._16_16_ = local_4c0._0_16_;
  auVar63._0_16_ = local_4e0._0_16_;
  auVar32 = vperm2f128_avx(local_4e0,local_4c0,0x31);
  auVar57 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar74 = vperm2f128_avx(auVar57,local_4a0._0_32_,0x21);
  auVar72 = vshufps_avx(auVar74,auVar74,0x14);
  auVar72 = vblendps_avx(ZEXT1632(CONCAT88(local_4a0._0_8_,local_4a0._0_8_)),auVar72,0x48);
  auVar81._16_16_ = local_4e0._0_16_;
  auVar81._0_16_ = local_4c0._0_16_;
  auVar60 = vshufps_avx(auVar81,auVar81,0xe1);
  auVar60 = vblendps_avx(auVar63,auVar60,0x12);
  local_200 = vblendps_avx(auVar60,auVar72,0xcc);
  auVar72 = vshufps_avx(auVar74,auVar74,0xb4);
  auVar72 = vblendps_avx(ZEXT1632(local_4a0._0_16_),auVar72,0x48);
  auVar74 = vshufps_avx(auVar81,auVar81,0xeb);
  auVar60 = vshufpd_avx(auVar63,auVar63,5);
  auVar60 = vblendps_avx(auVar60,auVar74,0x12);
  local_1e0 = vblendps_avx(auVar60,auVar72,0xcc);
  auVar72 = vunpcklps_avx(local_4a0._0_32_,auVar57);
  auVar72 = vblendps_avx(ZEXT1632(CONCAT88(local_4a0._16_8_,local_4a0._16_8_)),auVar72,0x48);
  auVar74 = vperm2f128_avx(local_4c0,local_4e0,0x31);
  auVar60 = vshufps_avx(auVar74,auVar74,0xe1);
  auVar60 = vblendps_avx(auVar32,auVar60,0x12);
  local_1c0 = vblendps_avx(auVar60,auVar72,0xcc);
  auVar72 = vunpckhps_avx(local_4a0._0_32_,auVar57);
  auVar72 = vblendps_avx(ZEXT1632(local_4a0._16_16_),auVar72,0x48);
  auVar74 = vshufps_avx(auVar74,auVar74,0xeb);
  auVar60 = vshufpd_avx(auVar32,auVar32,5);
  auVar60 = vblendps_avx(auVar60,auVar74,0x12);
  local_1a0 = vblendps_avx(auVar60,auVar72,0xcc);
  auVar45 = vpcmpgtd_avx(auVar1,auVar75);
  auVar44._16_16_ = auVar28;
  auVar44._0_16_ = auVar45;
  uVar12 = vmovmskps_avx(auVar44);
  uVar15 = (ulonglong)uVar12;
  do {
    if (uVar15 == 0) {
      uVar12 = 0x40;
    }
    else {
      uVar12 = 0;
      for (uVar10 = uVar15; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
        uVar12 = uVar12 + 1;
      }
    }
    bVar5 = (byte)uVar12 & 0x3f;
    local_240[0] = local_5a0;
    local_240[1] = 0;
    local_240[2] = local_5f0;
    uStack_228 = 0;
    auVar72 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar12 << 4)));
    lVar14 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar12 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + 0x20 + lVar14) = auVar72._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x30 + lVar14) = auVar72._16_16_;
    uVar15 = uVar15 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
  } while (uVar15 != 0);
  return;
}

// GetConstantKeyLerpPoseScales___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_Cuniun_3C_CunT_3E_CunfCunfCunTCuniCuni_avx @ 140aef760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseScales___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unBoneTrackPair_5D__3E_un_3C_Cuni_3E_Cuniun_3C_CunT_3E_CunfCunfCunTCuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,undefined8 param_5,
               undefined8 param_6,float param_7,char param_8,uint param_9,uint param_10)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar25 [16];
  undefined1 auVar27 [32];
  undefined1 auVar24 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar26 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar46 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  uint uVar47;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  undefined1 auVar48 [32];
  uint uVar59;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar60 [32];
  float fVar68;
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar69 [16];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [16];
  undefined1 auVar79 [32];
  undefined1 auVar81 [32];
  uint uVar82;
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [64];
  undefined1 in_ZMM14 [64];
  undefined1 in_ZMM15 [64];
  ulonglong local_6e0;
  undefined1 local_6c0 [32];
  undefined1 local_620 [8];
  float fStack_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float fStack_608;
  float fStack_604;
  ulonglong local_540;
  undefined1 local_500 [32];
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [64];
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  uint local_460;
  uint uStack_45c;
  uint uStack_458;
  uint uStack_454;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
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
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 auVar80 [32];
  
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  iVar2 = *(int *)(&DAT_151c6bbd0 + (longlong)(int)param_9 * 4);
  iVar3 = *(int *)(&DAT_151c6bbb0 + (longlong)(int)param_9 * 4);
  uVar9 = param_10 + 7;
  if (-1 < (int)param_10) {
    uVar9 = param_10;
  }
  uVar11 = (ulonglong)param_9;
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_10 < 1) {
      return;
    }
  }
  else {
    auVar75 = vpshufd_avx(ZEXT416(param_4),0);
    auVar15 = vpslld_avx(auVar75,2);
    auVar6 = vshufps_avx(ZEXT416((uint)param_7),ZEXT416((uint)param_7),0);
    auVar17 = vpshufd_avx(ZEXT416(-(uint)(param_9 == 3)),0);
    auVar26 = vpshufd_avx(ZEXT416((uint)(iVar2 * iVar3)),0);
    uVar12 = 0;
    auVar75._4_4_ = __real_00000002;
    auVar75._0_4_ = __real_00000002;
    auVar75._8_4_ = __real_00000002;
    auVar75._12_4_ = __real_00000002;
    auVar87 = ZEXT1264(ZEXT812(0));
    do {
      auVar77 = auVar87._0_32_;
      uVar10 = (ulonglong)(uint)((int)uVar12 * 8);
      auVar1 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar10);
      auVar18 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar10);
      auVar40 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar10);
      auVar16 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar10),auVar1,0xdd);
      auVar46 = vshufps_avx(auVar18,auVar40,0xdd);
      auVar46 = vpmulld_avx(auVar46,auVar15);
      auVar16 = vpmulld_avx(auVar16,auVar15);
      uVar4 = *(uint *)(param_3 + 4 + (longlong)auVar16._0_4_);
      auVar24 = ZEXT416(uVar4);
      uVar82 = *(uint *)(param_3 + 4 + (longlong)auVar46._0_4_);
      auVar16 = ZEXT416(*(uint *)(param_3 + auVar16._0_4_));
      auVar46 = ZEXT416(*(uint *)(param_3 + auVar46._0_4_));
      vpmovsxdq_avx(auVar46);
      auVar46 = vpshufd_avx(auVar46,0xee);
      vpmovsxdq_avx(auVar46);
      auVar41 = vpmovsxdq_avx(auVar16);
      auVar46 = vpshufd_avx(auVar16,0xee);
      vpmovsxdq_avx(auVar46);
      auVar46 = vpcmpgtd_avx(auVar75,ZEXT416(uVar82));
      auVar16 = vpcmpgtd_avx(auVar75,auVar24);
      auVar48._16_16_ = auVar46;
      auVar48._0_16_ = auVar16;
      iVar8 = vmovmskps_avx(auVar48);
      auVar83 = in_ZMM15._0_32_;
      if (iVar8 == 0) {
        auVar49 = SUB6432(ZEXT864(0),0) << 0x20;
LAB_140aefaa4:
        auVar48 = vcmpps_avx(auVar77,auVar77,0xf);
        auVar50._0_4_ = auVar49._0_4_ ^ auVar48._0_4_;
        auVar50._4_4_ = auVar49._4_4_ ^ auVar48._4_4_;
        auVar50._8_4_ = auVar49._8_4_ ^ auVar48._8_4_;
        auVar50._12_4_ = auVar49._12_4_ ^ auVar48._12_4_;
        auVar50._16_4_ = auVar49._16_4_ ^ auVar48._16_4_;
        auVar50._20_4_ = auVar49._20_4_ ^ auVar48._20_4_;
        auVar50._24_4_ = auVar49._24_4_ ^ auVar48._24_4_;
        auVar50._28_4_ = auVar49._28_4_ ^ auVar48._28_4_;
        if (param_7 <= 0.0) {
          auVar48 = ZEXT832(0) << 0x20;
          auVar83 = vblendvps_avx(auVar83,ZEXT832(0) << 0x20,auVar50);
          auVar79 = vblendvps_avx(local_6c0,ZEXT832(0) << 0x20,auVar50);
        }
        else {
          auVar16 = vpcmpeqd_avx(auVar75,auVar75);
          auVar46._0_4_ = uVar82 + auVar16._0_4_;
          auVar46._4_4_ = auVar16._4_4_;
          auVar46._8_4_ = auVar16._8_4_;
          auVar46._12_4_ = auVar16._12_4_;
          auVar75._0_4_ = auVar16._0_4_ + uVar4;
          auVar75._4_4_ = auVar16._4_4_;
          auVar75._8_4_ = auVar16._8_4_;
          auVar75._12_4_ = auVar16._12_4_;
          auVar76._16_16_ = auVar46;
          auVar76._0_16_ = auVar75;
          if (__real_3f800000 <= param_7) {
            auVar83 = vblendvps_avx(auVar83,auVar76,auVar50);
            auVar79 = vblendvps_avx(local_6c0,auVar76,auVar50);
            auVar48 = ZEXT1632((undefined1  [16])0x0);
          }
          else {
            auVar48 = vcvtdq2ps_avx(auVar76);
            local_480 = auVar6._0_4_;
            fStack_47c = auVar6._4_4_;
            fStack_478 = auVar6._8_4_;
            fStack_474 = auVar6._12_4_;
            auVar86._0_4_ = auVar48._0_4_ * local_480;
            auVar86._4_4_ = auVar48._4_4_ * fStack_47c;
            auVar86._8_4_ = auVar48._8_4_ * fStack_478;
            auVar86._12_4_ = auVar48._12_4_ * fStack_474;
            auVar86._16_4_ = auVar48._16_4_ * local_480;
            auVar86._20_4_ = auVar48._20_4_ * fStack_47c;
            auVar86._24_4_ = auVar48._24_4_ * fStack_478;
            auVar86._28_4_ = auVar48._28_4_ * fStack_474;
            auVar77 = vroundps_avx(auVar86,9);
            auVar48 = ZEXT832(0) << 0x20;
            if (param_8 != '\x01') {
              auVar48 = vsubps_avx(auVar86,auVar77);
            }
            auVar78._0_4_ = (int)auVar77._0_4_;
            auVar78._4_4_ = (int)auVar77._4_4_;
            auVar78._8_4_ = (int)auVar77._8_4_;
            auVar78._12_4_ = (int)auVar77._12_4_;
            auVar80._16_4_ = (int)auVar77._16_4_;
            auVar80._0_16_ = auVar78;
            auVar80._20_4_ = (int)auVar77._20_4_;
            auVar80._24_4_ = (int)auVar77._24_4_;
            auVar80._28_4_ = (int)auVar77._28_4_;
            auVar16 = vpminsd_avx(auVar80._16_16_,auVar46);
            auVar78 = vpminsd_avx(auVar78,auVar75);
            auVar81._16_16_ = auVar16;
            auVar81._0_16_ = auVar78;
            auVar83 = vblendvps_avx(auVar83,auVar81,auVar50);
            auVar16 = vpcmpeqd_avx(in_ZMM15._0_16_,in_ZMM15._0_16_);
            auVar78 = vpsubd_avx(auVar83._0_16_,auVar16);
            auVar16 = vpsubd_avx(auVar83._16_16_,auVar16);
            auVar46 = vpminsd_avx(auVar16,auVar46);
            auVar75 = vpminsd_avx(auVar78,auVar75);
            auVar77._16_16_ = auVar46;
            auVar77._0_16_ = auVar75;
            auVar79 = vblendvps_avx(local_6c0,auVar77,auVar50);
            auVar77 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
        }
        _local_620 = vblendvps_avx(_local_620,auVar48,auVar50);
      }
      else {
        auVar46 = vpcmpgtd_avx(auVar75,ZEXT416(uVar82));
        auVar16 = vpcmpgtd_avx(auVar75,auVar24);
        auVar49._16_16_ = auVar46;
        auVar49._0_16_ = auVar16;
        uVar47 = auVar16._0_4_;
        auVar83._0_4_ = ~uVar47 & in_ZMM15._0_4_;
        uVar53 = auVar16._4_4_;
        auVar83._4_4_ = ~uVar53 & in_ZMM15._4_4_;
        uVar54 = auVar16._8_4_;
        auVar83._8_4_ = ~uVar54 & in_ZMM15._8_4_;
        uVar55 = auVar16._12_4_;
        auVar83._12_4_ = ~uVar55 & in_ZMM15._12_4_;
        uVar56 = auVar46._0_4_;
        auVar83._16_4_ = ~uVar56 & in_ZMM15._16_4_;
        uVar57 = auVar46._4_4_;
        auVar83._20_4_ = ~uVar57 & in_ZMM15._20_4_;
        uVar58 = auVar46._8_4_;
        auVar83._24_4_ = ~uVar58 & in_ZMM15._24_4_;
        uVar59 = auVar46._12_4_;
        auVar83._28_4_ = ~uVar59 & in_ZMM15._28_4_;
        auVar79._0_4_ = ~uVar47 & local_6c0._0_4_;
        auVar79._4_4_ = ~uVar53 & local_6c0._4_4_;
        auVar79._8_4_ = ~uVar54 & local_6c0._8_4_;
        auVar79._12_4_ = ~uVar55 & local_6c0._12_4_;
        auVar79._16_4_ = ~uVar56 & local_6c0._16_4_;
        auVar79._20_4_ = ~uVar57 & local_6c0._20_4_;
        auVar79._24_4_ = ~uVar58 & local_6c0._24_4_;
        auVar79._28_4_ = ~uVar59 & local_6c0._28_4_;
        local_620._4_4_ = ~uVar53 & local_620._4_4_;
        local_620._0_4_ = ~uVar47 & local_620._0_4_;
        fStack_618 = (float)(~uVar54 & (uint)fStack_618);
        fStack_614 = (float)(~uVar55 & (uint)fStack_614);
        fStack_610 = (float)(~uVar56 & (uint)fStack_610);
        fStack_60c = (float)(~uVar57 & (uint)fStack_60c);
        fStack_608 = (float)(~uVar58 & (uint)fStack_608);
        fStack_604 = (float)(~uVar59 & (uint)fStack_604);
        local_6c0 = auVar79;
        if ((char)iVar8 != -1) goto LAB_140aefaa4;
      }
      auVar16._4_4_ = __real_00000001;
      auVar16._0_4_ = __real_00000001;
      auVar16._8_4_ = __real_00000001;
      auVar16._12_4_ = __real_00000001;
      auVar46 = vpcmpgtd_avx(ZEXT416(uVar82),auVar16);
      auVar16 = vpcmpgtd_avx(auVar24,auVar16);
      local_460 = auVar17._0_4_;
      uStack_45c = auVar17._4_4_;
      uStack_458 = auVar17._8_4_;
      uStack_454 = auVar17._12_4_;
      auVar27._0_4_ = auVar16._0_4_ & local_460;
      auVar27._4_4_ = auVar16._4_4_ & uStack_45c;
      auVar27._8_4_ = auVar16._8_4_ & uStack_458;
      auVar27._12_4_ = auVar16._12_4_ & uStack_454;
      auVar27._16_4_ = auVar46._0_4_ & local_460;
      auVar27._20_4_ = auVar46._4_4_ & uStack_45c;
      auVar27._24_4_ = auVar46._8_4_ & uStack_458;
      auVar27._28_4_ = auVar46._12_4_ & uStack_454;
      auVar48 = vblendvps_avx(auVar77,
                              ___ymm_0000001800000018000000180000001800000018000000180000001800000018
                              ,auVar27);
      auVar24 = auVar48._0_16_;
      auVar16 = auVar48._16_16_;
      auVar46 = vpmovsxdq_avx(auVar16);
      auVar16 = vshufpd_avx(auVar16,auVar16,3);
      vpmovsxdq_avx(auVar16);
      vpmovsxdq_avx(auVar24);
      auVar16 = vshufpd_avx(auVar24,auVar24,3);
      vpmovsxdq_avx(auVar16);
      auVar16 = auVar83._0_16_;
      if (param_9 < 7) {
        auVar17 = vpmulld_avx(auVar16,auVar26);
        auVar75 = vpmulld_avx(auVar83._16_16_,auVar26);
        vpmovsxdq_avx(auVar75);
        auVar75 = vpshufd_avx(auVar75,0xee);
        vpmovsxdq_avx(auVar75);
        auVar75 = vpmovsxdq_avx(auVar17);
        auVar17 = vpshufd_avx(auVar17,0xee);
        vpmovsxdq_avx(auVar17);
                    /* WARNING: Could not recover jumptable at 0x000140aefc82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6b9c0 + *(int *)(&DAT_151c6b9c0 + uVar11 * 4)))
                  (auVar46._0_8_,&DAT_151c6b9c0 + *(int *)(&DAT_151c6b9c0 + uVar11 * 4),
                   auVar75._0_8_,auVar41._0_8_);
        return;
      }
      auVar50 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar49 = ZEXT1632((undefined1  [16])0x0);
      auVar48 = ZEXT1632((undefined1  [16])0x0);
      auVar60._0_4_ = auVar83._0_4_ ^ auVar79._0_4_;
      auVar60._4_4_ = auVar83._4_4_ ^ auVar79._4_4_;
      auVar60._8_4_ = auVar83._8_4_ ^ auVar79._8_4_;
      auVar60._12_4_ = auVar83._12_4_ ^ auVar79._12_4_;
      auVar60._16_4_ = auVar83._16_4_ ^ auVar79._16_4_;
      auVar60._20_4_ = auVar83._20_4_ ^ auVar79._20_4_;
      auVar60._24_4_ = auVar83._24_4_ ^ auVar79._24_4_;
      auVar60._28_4_ = auVar83._28_4_ ^ auVar79._28_4_;
      auVar75 = vpcmpeqd_avx(auVar75,auVar75);
      in_ZMM15 = ZEXT3264(auVar83);
      if (auVar60 != (undefined1  [32])0x0) {
        auVar41 = auVar79._0_16_;
        auVar46 = vpcmpeqd_avx(auVar83._16_16_,auVar79._16_16_);
        if (param_9 < 7) {
          vpcmpeqd_avx(auVar16,auVar41);
          auVar17 = vpmulld_avx(auVar41,auVar26);
          auVar75 = vpmulld_avx(auVar79._16_16_,auVar26);
          vpmovsxdq_avx(auVar75);
          auVar75 = vpshufd_avx(auVar75,0xee);
          vpmovsxdq_avx(auVar75);
          auVar75 = vpmovsxdq_avx(auVar17);
          auVar17 = vpshufd_avx(auVar17,0xee);
          vpmovsxdq_avx(auVar17);
                    /* WARNING: Could not recover jumptable at 0x000140af03fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6b9dc + *(int *)(&DAT_151c6b9dc + uVar11 * 4)))
                    (&DAT_151c6b9dc + *(int *)(&DAT_151c6b9dc + uVar11 * 4),&DAT_151c6b9dc,
                     auVar75._0_8_);
          return;
        }
        auVar24 = vpcmpeqd_avx(auVar16,auVar41);
        auVar19._16_16_ = auVar75 ^ auVar46;
        auVar19._0_16_ = auVar75 ^ auVar24;
        auVar83 = vmaskmovps_avx(auVar19,auVar77);
        auVar48 = vmaskmovps_avx(auVar19,auVar77);
        auVar49 = vmaskmovps_avx(auVar19,auVar77);
        auVar16 = vpcmpeqd_avx(auVar16,auVar41);
        auVar20._16_16_ = auVar75 ^ auVar46;
        auVar20._0_16_ = auVar75 ^ auVar16;
        auVar83 = vsubps_avx(auVar83,auVar77);
        auVar48 = vsubps_avx(auVar48,auVar77);
        auVar49 = vsubps_avx(auVar49,auVar77);
        auVar28._0_4_ = (float)local_620._0_4_ * auVar83._0_4_ + 0.0;
        auVar28._4_4_ = (float)local_620._4_4_ * auVar83._4_4_ + 0.0;
        fVar63 = auVar77._8_4_;
        auVar28._8_4_ = fVar63 + fStack_618 * auVar83._8_4_;
        fVar64 = auVar77._12_4_;
        auVar28._12_4_ = fVar64 + fStack_614 * auVar83._12_4_;
        fVar65 = auVar77._16_4_;
        auVar28._16_4_ = fVar65 + fStack_610 * auVar83._16_4_;
        fVar66 = auVar77._20_4_;
        auVar28._20_4_ = fVar66 + fStack_60c * auVar83._20_4_;
        fVar67 = auVar77._24_4_;
        auVar28._24_4_ = fVar67 + fStack_608 * auVar83._24_4_;
        fVar68 = auVar77._28_4_;
        auVar28._28_4_ = fVar68 + fStack_604 * auVar83._28_4_;
        auVar42._0_4_ = (float)local_620._0_4_ * auVar48._0_4_ + 0.0;
        auVar42._4_4_ = (float)local_620._4_4_ * auVar48._4_4_ + 0.0;
        auVar42._8_4_ = fVar63 + fStack_618 * auVar48._8_4_;
        auVar42._12_4_ = fVar64 + fStack_614 * auVar48._12_4_;
        auVar42._16_4_ = fVar65 + fStack_610 * auVar48._16_4_;
        auVar42._20_4_ = fVar66 + fStack_60c * auVar48._20_4_;
        auVar42._24_4_ = fVar67 + fStack_608 * auVar48._24_4_;
        auVar42._28_4_ = fVar68 + fStack_604 * auVar48._28_4_;
        auVar51._0_4_ = (float)local_620._0_4_ * auVar49._0_4_ + 0.0;
        auVar51._4_4_ = (float)local_620._4_4_ * auVar49._4_4_ + 0.0;
        auVar51._8_4_ = fVar63 + fStack_618 * auVar49._8_4_;
        auVar51._12_4_ = fVar64 + fStack_614 * auVar49._12_4_;
        auVar51._16_4_ = fVar65 + fStack_610 * auVar49._16_4_;
        auVar51._20_4_ = fVar66 + fStack_60c * auVar49._20_4_;
        auVar51._24_4_ = fVar67 + fStack_608 * auVar49._24_4_;
        auVar51._28_4_ = fVar68 + fStack_604 * auVar49._28_4_;
        auVar48 = vmaskmovps_avx(auVar20,auVar28);
        auVar49 = vmaskmovps_avx(auVar20,auVar42);
        auVar50 = vmaskmovps_avx(auVar20,auVar51);
      }
      auVar21._16_16_ = auVar40;
      auVar21._0_16_ = auVar1;
      auVar29._16_16_ = auVar18;
      auVar29._0_16_ = *(undefined1 (*) [16])(param_2 + uVar10);
      local_220 = vshufps_avx(auVar29,auVar21,0x88);
      auVar70._16_16_ = auVar49._0_16_;
      auVar70._0_16_ = auVar48._0_16_;
      auVar76 = vperm2f128_avx(auVar48,auVar49,0x31);
      auVar73._16_16_ = auVar48._0_16_;
      auVar73._0_16_ = auVar49._0_16_;
      auVar83 = vshufps_avx(auVar73,auVar73,0xe1);
      auVar83 = vblendps_avx(auVar70,auVar83,0x12);
      auVar86 = vperm2f128_avx(auVar77,auVar50,0x21);
      auVar77 = vshufps_avx(auVar86,auVar86,0x14);
      auVar77 = vblendps_avx(ZEXT1632(CONCAT88(auVar50._0_8_,auVar50._0_8_)),auVar77,0x48);
      auVar87 = ZEXT864(0) << 0x20;
      local_180 = vblendps_avx(auVar83,auVar77,0xcc);
      auVar77 = vshufps_avx(auVar73,auVar73,0xeb);
      auVar83 = vshufpd_avx(auVar70,auVar70,5);
      auVar83 = vblendps_avx(auVar83,auVar77,0x12);
      auVar77 = vshufps_avx(auVar86,auVar86,0xb4);
      auVar77 = vblendps_avx(ZEXT1632(auVar50._0_16_),auVar77,0x48);
      local_160 = vblendps_avx(auVar83,auVar77,0xcc);
      auVar77 = vperm2f128_avx(auVar49,auVar48,0x31);
      auVar83 = vshufps_avx(auVar77,auVar77,0xe1);
      auVar83 = vblendps_avx(auVar76,auVar83,0x12);
      auVar48 = vunpcklps_avx(auVar50,ZEXT832(0) << 0x20);
      auVar48 = vblendps_avx(ZEXT1632(CONCAT88(auVar50._16_8_,auVar50._16_8_)),auVar48,0x48);
      local_140 = vblendps_avx(auVar83,auVar48,0xcc);
      auVar48 = vshufps_avx(auVar77,auVar77,0xeb);
      auVar83 = vshufpd_avx(auVar76,auVar76,5);
      auVar83 = vblendps_avx(auVar83,auVar48,0x12);
      auVar48 = vunpckhps_avx(auVar50,ZEXT832(0) << 0x20);
      auVar48 = vblendps_avx(ZEXT1632(auVar50._16_16_),auVar48,0x48);
      local_120 = vblendps_avx(auVar83,auVar48,0xcc);
      uVar10 = 0xff;
      do {
        uVar4 = 0;
        for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
          uVar4 = uVar4 + 1;
        }
        bVar5 = (byte)uVar4 & 0x3f;
        iVar8 = *(int *)(local_220 + (ulonglong)(uVar4 & 7) * 4);
        auVar83 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar4 << 4)));
        *(undefined1 (*) [16])(param_1 + 0x40 + (longlong)iVar8 * 0x60) = auVar83._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x50 + (longlong)iVar8 * 0x60) = auVar83._16_16_;
        uVar10 = uVar10 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
      } while (uVar10 != 0);
      uVar12 = uVar12 + 8;
      auVar75._4_4_ = __real_00000002;
      auVar75._0_4_ = __real_00000002;
      auVar75._8_4_ = __real_00000002;
      auVar75._12_4_ = __real_00000002;
      local_6c0 = auVar79;
    } while (uVar12 < (uVar9 & 0xfffffff8));
    if ((int)param_10 <= (int)uVar12) {
      return;
    }
  }
  auVar75 = vpshufd_avx(ZEXT416((uint)uVar12),0);
  auVar30._16_16_ = auVar75;
  auVar30._0_16_ = auVar75;
  auVar1 = vpshufd_avx(ZEXT416(param_10),0);
  auVar40 = SUB3216(auVar30 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar46 = SUB3216(auVar30 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar6 = vpcmpgtd_avx(auVar1,auVar46);
  auVar15 = vpcmpgtd_avx(auVar1,auVar40);
  auVar17 = vpslld_avx(auVar75,3);
  auVar75 = vpand_avx(auVar15,auVar17);
  uVar82 = auVar15._0_4_;
  auVar26._0_4_ = uVar82 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  uVar47 = auVar15._4_4_;
  auVar26._4_4_ = uVar47 & _UNK_150b519c4;
  uVar53 = auVar15._8_4_;
  auVar26._8_4_ = uVar53 & _UNK_150b519c8;
  uVar54 = auVar15._12_4_;
  auVar26._12_4_ = uVar54 & _UNK_150b519cc;
  uVar55 = auVar6._0_4_;
  uVar56 = auVar6._4_4_;
  uVar57 = auVar6._8_4_;
  uVar58 = auVar6._12_4_;
  vextractps_avx(auVar26,1);
  vextractps_avx(auVar26,2);
  vextractps_avx(auVar26,3);
  auVar17 = vpand_avx(auVar6,auVar17);
  lVar13 = auVar17._0_4_ + param_2;
  auVar18._0_4_ = uVar82 & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
  auVar18._4_4_ = uVar47 & _UNK_150b519e4;
  auVar18._8_4_ = uVar53 & _UNK_150b519e8;
  auVar18._12_4_ = uVar54 & _UNK_150b519ec;
  vextractps_avx(auVar18,1);
  vextractps_avx(auVar18,2);
  vextractps_avx(auVar18,3);
  auVar17 = vpshufd_avx(ZEXT416(param_4),0);
  auVar17 = vpslld_avx(auVar17,2);
  auVar26 = vpmulld_avx(ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b519f0) + lVar13)),auVar17);
  auVar17 = vpmulld_avx(ZEXT416(*(uint *)((ulonglong)auVar18._0_4_ + param_2 + auVar75._0_4_)),
                        auVar17);
  auVar17 = vpand_avx(auVar15,auVar17);
  auVar26 = vpand_avx(auVar6,auVar26);
  auVar16 = ZEXT416(*(uint *)(param_3 + auVar17._0_4_));
  auVar24 = ZEXT416(*(uint *)(param_3 + auVar26._0_4_));
  uVar9 = *(uint *)((ulonglong)
                    (uVar82 & 
                    ___ymm_0000000400000004000000040000000400000004000000040000000400000004) +
                   param_3 + auVar17._0_4_);
  uVar4 = *(uint *)((ulonglong)(uVar55 & _UNK_150b50d50) + param_3 + auVar26._0_4_);
  local_6c0 = ZEXT1632(ZEXT816(0));
  auVar17 = vpshufd_avx(auVar24,0xee);
  vpmovsxdq_avx(auVar17);
  auVar41._4_4_ = __real_00000002;
  auVar41._0_4_ = __real_00000002;
  auVar41._8_4_ = __real_00000002;
  auVar41._12_4_ = __real_00000002;
  auVar17 = vpcmpgtd_avx(auVar41,ZEXT416(uVar4));
  auVar26 = vpcmpgtd_avx(auVar41,ZEXT416(uVar9));
  auVar22._0_4_ = uVar82 & auVar26._0_4_;
  auVar22._4_4_ = uVar47 & auVar26._4_4_;
  auVar22._8_4_ = uVar53 & auVar26._8_4_;
  auVar22._12_4_ = uVar54 & auVar26._12_4_;
  auVar22._16_4_ = uVar55 & auVar17._0_4_;
  auVar22._20_4_ = uVar56 & auVar17._4_4_;
  auVar22._24_4_ = uVar57 & auVar17._8_4_;
  auVar22._28_4_ = uVar58 & auVar17._12_4_;
  iVar8 = vmovmskps_avx(auVar22);
  auVar18 = vpshufd_avx(auVar16,0xee);
  vpmovsxdq_avx(auVar18);
  vpmovsxdq_avx(auVar24);
  vpmovsxdq_avx(auVar16);
  auVar32 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (iVar8 != 0) {
    auVar18 = vpcmpgtd_avx(auVar1,auVar46);
    auVar16 = vpcmpgtd_avx(auVar1,auVar40);
    auVar31._16_16_ = auVar18;
    auVar31._0_16_ = auVar16;
    uVar14 = vmovmskps_avx(auVar31);
    if ((char)uVar14 == (char)iVar8) {
      auVar48 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      local_6c0 = ZEXT832(0) << 0x20;
      auVar83 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      goto LAB_140af17a7;
    }
    auVar17 = vpand_avx(auVar17,auVar6);
    auVar26 = vpand_avx(auVar26,auVar15);
    auVar17 = vpackssdw_avx(auVar26,auVar17);
    auVar26 = vpmovsxwd_avx(auVar17);
    auVar17 = vpunpckhwd_avx(auVar17,auVar17);
    auVar32._16_16_ = auVar17;
    auVar32._0_16_ = auVar26;
  }
  auVar83 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                       SUB6432(ZEXT1664((undefined1  [16])0x0),0),0xf);
  auVar52._0_4_ = auVar32._0_4_ ^ auVar83._0_4_;
  auVar52._4_4_ = auVar32._4_4_ ^ auVar83._4_4_;
  auVar52._8_4_ = auVar32._8_4_ ^ auVar83._8_4_;
  auVar52._12_4_ = auVar32._12_4_ ^ auVar83._12_4_;
  auVar52._16_4_ = auVar32._16_4_ ^ auVar83._16_4_;
  auVar52._20_4_ = auVar32._20_4_ ^ auVar83._20_4_;
  auVar52._24_4_ = auVar32._24_4_ ^ auVar83._24_4_;
  auVar52._28_4_ = auVar32._28_4_ ^ auVar83._28_4_;
  auVar17._0_12_ = ZEXT812(0);
  auVar17._12_4_ = 0;
  auVar83 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar48 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (0.0 < param_7) {
    auVar17 = vpcmpeqd_avx(auVar17,auVar17);
    auVar6._0_4_ = uVar4 + auVar17._0_4_;
    auVar6._4_4_ = auVar17._4_4_;
    auVar6._8_4_ = auVar17._8_4_;
    auVar6._12_4_ = auVar17._12_4_;
    auVar15._0_4_ = uVar9 + auVar17._0_4_;
    auVar15._4_4_ = auVar17._4_4_;
    auVar15._8_4_ = auVar17._8_4_;
    auVar15._12_4_ = auVar17._12_4_;
    auVar71._16_16_ = auVar6;
    auVar71._0_16_ = auVar15;
    if (__real_3f800000 <= param_7) {
      auVar34._0_4_ = auVar52._0_4_ & uVar82;
      auVar34._4_4_ = auVar52._4_4_ & uVar47;
      auVar34._8_4_ = auVar52._8_4_ & uVar53;
      auVar34._12_4_ = auVar52._12_4_ & uVar54;
      auVar34._16_4_ = auVar52._16_4_ & uVar55;
      auVar34._20_4_ = auVar52._20_4_ & uVar56;
      auVar34._24_4_ = auVar52._24_4_ & uVar57;
      auVar34._28_4_ = auVar52._28_4_ & uVar58;
      auVar83 = vblendvps_avx(auVar48,auVar71,auVar34);
      local_6c0 = auVar83;
    }
    else {
      auVar17 = vshufps_avx(ZEXT416((uint)param_7),ZEXT416((uint)param_7),0);
      auVar83 = vcvtdq2ps_avx(auVar71);
      auVar61._0_4_ = auVar17._0_4_ * auVar83._0_4_;
      auVar61._4_4_ = auVar17._4_4_ * auVar83._4_4_;
      auVar61._8_4_ = auVar17._8_4_ * auVar83._8_4_;
      auVar61._12_4_ = auVar17._12_4_ * auVar83._12_4_;
      auVar61._16_4_ = auVar17._0_4_ * auVar83._16_4_;
      auVar61._20_4_ = auVar17._4_4_ * auVar83._20_4_;
      auVar61._24_4_ = auVar17._8_4_ * auVar83._24_4_;
      auVar61._28_4_ = auVar17._12_4_ * auVar83._28_4_;
      auVar84._0_4_ = auVar52._0_4_ & uVar82;
      auVar84._4_4_ = auVar52._4_4_ & uVar47;
      auVar84._8_4_ = auVar52._8_4_ & uVar53;
      auVar84._12_4_ = auVar52._12_4_ & uVar54;
      auVar84._16_4_ = auVar52._16_4_ & uVar55;
      auVar84._20_4_ = auVar52._20_4_ & uVar56;
      auVar84._24_4_ = auVar52._24_4_ & uVar57;
      auVar84._28_4_ = auVar52._28_4_ & uVar58;
      auVar83 = vroundps_avx(auVar61,9);
      auVar24._0_4_ = (int)auVar83._0_4_;
      auVar24._4_4_ = (int)auVar83._4_4_;
      auVar24._8_4_ = (int)auVar83._8_4_;
      auVar24._12_4_ = (int)auVar83._12_4_;
      auVar74._16_4_ = (int)auVar83._16_4_;
      auVar74._0_16_ = auVar24;
      auVar74._20_4_ = (int)auVar83._20_4_;
      auVar74._24_4_ = (int)auVar83._24_4_;
      auVar74._28_4_ = (int)auVar83._28_4_;
      auVar17 = vpminsd_avx(auVar74._16_16_,auVar6);
      auVar26 = vpminsd_avx(auVar24,auVar15);
      auVar43._16_16_ = auVar17;
      auVar43._0_16_ = auVar26;
      auVar48 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      local_6c0 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar43,auVar84);
      if (param_8 != '\x01') {
        auVar48 = vsubps_avx(auVar61,auVar83);
      }
      auVar17 = vpcmpeqd_avx(auVar83._0_16_,auVar83._0_16_);
      auVar26 = vpsubd_avx(local_6c0._0_16_,auVar17);
      auVar17 = vpsubd_avx(local_6c0._16_16_,auVar17);
      auVar17 = vpminsd_avx(auVar17,auVar6);
      auVar26 = vpminsd_avx(auVar26,auVar15);
      auVar33._16_16_ = auVar17;
      auVar33._0_16_ = auVar26;
      auVar83 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar33,auVar84);
    }
  }
  auVar48 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar48,auVar52);
LAB_140af17a7:
  local_6e0 = (ulonglong)*(uint *)((ulonglong)(uVar55 & _UNK_150b519d0) + lVar13);
  local_540 = (ulonglong)*(uint *)(param_2 + auVar75._0_4_);
  auVar26 = vpshufd_avx(ZEXT416(-(uint)(param_9 == 3)),0);
  auVar25._4_4_ = __real_00000001;
  auVar25._0_4_ = __real_00000001;
  auVar25._8_4_ = __real_00000001;
  auVar25._12_4_ = __real_00000001;
  auVar75 = vpcmpgtd_avx(ZEXT416(uVar4),auVar25);
  auVar17 = vpcmpgtd_avx(ZEXT416(uVar9),auVar25);
  auVar35._0_4_ = auVar17._0_4_ & auVar26._0_4_;
  auVar35._4_4_ = auVar17._4_4_ & auVar26._4_4_;
  auVar35._8_4_ = auVar17._8_4_ & auVar26._8_4_;
  auVar35._12_4_ = auVar17._12_4_ & auVar26._12_4_;
  auVar35._16_4_ = auVar75._0_4_ & auVar26._0_4_;
  auVar35._20_4_ = auVar75._4_4_ & auVar26._4_4_;
  auVar35._24_4_ = auVar75._8_4_ & auVar26._8_4_;
  auVar35._28_4_ = auVar75._12_4_ & auVar26._12_4_;
  auVar77 = vblendvps_avx(ZEXT832(0) << 0x20,
                          ___ymm_0000001800000018000000180000001800000018000000180000001800000018,
                          auVar35);
  auVar26 = auVar77._0_16_;
  auVar17 = auVar77._16_16_;
  auVar75 = vpmovsxdq_avx(auVar17);
  auVar17 = vshufpd_avx(auVar17,auVar17,3);
  vpmovsxdq_avx(auVar17);
  vpmovsxdq_avx(auVar26);
  auVar17 = vshufpd_avx(auVar26,auVar26,3);
  vpmovsxdq_avx(auVar17);
  auVar17 = vpshufd_avx(ZEXT416((uint)(iVar2 * iVar3)),0);
  if (param_9 < 7) {
    auVar26 = vpmulld_avx(local_6c0._0_16_,auVar17);
    auVar17 = vpmulld_avx(local_6c0._16_16_,auVar17);
    auVar75 = vpmovsxdq_avx(auVar17);
    auVar17 = vpshufd_avx(auVar17,0xee);
    vpmovsxdq_avx(auVar17);
    auVar17 = vpmovsxdq_avx(auVar26);
    auVar26 = vpshufd_avx(auVar26,0xee);
    vpmovsxdq_avx(auVar26);
                    /* WARNING: Could not recover jumptable at 0x000140af1909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6b9f8 + *(int *)(&DAT_151c6b9f8 + uVar11 * 4)))
              (uVar56 & _UNK_150b50d54,uVar57 & _UNK_150b50d58,auVar17._0_8_,auVar75._0_8_);
    return;
  }
  auVar26 = vpcmpgtd_avx(auVar1,auVar46);
  auVar6 = vpcmpgtd_avx(auVar1,auVar40);
  auVar36._16_16_ = auVar26;
  auVar36._0_16_ = auVar6;
  local_500 = vmaskmovps_avx(auVar36,ZEXT832(0) << 0x20);
  local_4e0 = vmaskmovps_avx(auVar36,ZEXT832(0) << 0x20);
  local_4c0._0_32_ = vmaskmovps_avx(auVar36,ZEXT832(0) << 0x20);
  auVar26 = vpcmpeqd_avx(auVar83._16_16_,local_6c0._16_16_);
  auVar6 = vpcmpeqd_avx(auVar83._0_16_,local_6c0._0_16_);
  auVar37._16_16_ = auVar26;
  auVar37._0_16_ = auVar6;
  auVar15 = vpcmpgtd_avx(auVar1,auVar46);
  auVar18 = vpcmpgtd_avx(auVar1,auVar40);
  auVar44._16_16_ = auVar15;
  auVar44._0_16_ = auVar18;
  auVar44 = auVar44 & ~auVar37;
  if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) != 0 || (SUB321(auVar44 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar44 >> 0x5f,0) & 1) != 0) || SUB321(auVar44 >> 0x7f,0) != '\0') ||
        (SUB321(auVar44 >> 0x9f,0) & 1) != 0) || SUB321(auVar44 >> 0xbf,0) != '\0') ||
      (SUB321(auVar44 >> 0xdf,0) & 1) != 0) || auVar44[0x1f] < '\0') {
    auVar62._0_4_ = ~auVar6._0_4_ & uVar82;
    auVar62._4_4_ = ~auVar6._4_4_ & uVar47;
    auVar62._8_4_ = ~auVar6._8_4_ & uVar53;
    auVar62._12_4_ = ~auVar6._12_4_ & uVar54;
    auVar62._16_4_ = ~auVar26._0_4_ & uVar55;
    auVar62._20_4_ = ~auVar26._4_4_ & uVar56;
    auVar62._24_4_ = ~auVar26._8_4_ & uVar57;
    auVar62._28_4_ = ~auVar26._12_4_ & uVar58;
    if (param_9 < 7) {
      auVar26 = vpmulld_avx(auVar83._0_16_,auVar17);
      auVar17 = vpmulld_avx(auVar83._16_16_,auVar17);
      vpmovsxdq_avx(auVar17);
      auVar17 = vpshufd_avx(auVar17,0xee);
      vpmovsxdq_avx(auVar17);
      auVar17 = vpmovsxdq_avx(auVar26);
      auVar26 = vpshufd_avx(auVar26,0xee);
      vpmovsxdq_avx(auVar26);
                    /* WARNING: Could not recover jumptable at 0x000140af25ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6ba14 + *(int *)(&DAT_151c6ba14 + uVar11 * 4)))
                (auVar17._0_8_,&DAT_151c6ba14 + *(int *)(&DAT_151c6ba14 + uVar11 * 4),
                 -(uint)(param_9 == 3),auVar75._0_8_);
      return;
    }
    auVar83 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar77 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar49 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar83 = vsubps_avx(auVar83,local_500);
    auVar77 = vsubps_avx(auVar77,local_4e0);
    auVar49 = vsubps_avx(auVar49,local_4c0._0_32_);
    local_280 = auVar48._0_4_;
    fStack_27c = auVar48._4_4_;
    fStack_278 = auVar48._8_4_;
    fStack_274 = auVar48._12_4_;
    fStack_270 = auVar48._16_4_;
    fStack_26c = auVar48._20_4_;
    fStack_268 = auVar48._24_4_;
    fStack_264 = auVar48._28_4_;
    auVar23._0_4_ = local_500._0_4_ + local_280 * auVar83._0_4_;
    auVar23._4_4_ = local_500._4_4_ + fStack_27c * auVar83._4_4_;
    auVar23._8_4_ = local_500._8_4_ + fStack_278 * auVar83._8_4_;
    auVar23._12_4_ = local_500._12_4_ + fStack_274 * auVar83._12_4_;
    auVar23._16_4_ = local_500._16_4_ + fStack_270 * auVar83._16_4_;
    auVar23._20_4_ = local_500._20_4_ + fStack_26c * auVar83._20_4_;
    auVar23._24_4_ = local_500._24_4_ + fStack_268 * auVar83._24_4_;
    auVar23._28_4_ = local_500._28_4_ + fStack_264 * auVar83._28_4_;
    auVar38._0_4_ = local_4e0._0_4_ + local_280 * auVar77._0_4_;
    auVar38._4_4_ = local_4e0._4_4_ + fStack_27c * auVar77._4_4_;
    auVar38._8_4_ = local_4e0._8_4_ + fStack_278 * auVar77._8_4_;
    auVar38._12_4_ = local_4e0._12_4_ + fStack_274 * auVar77._12_4_;
    auVar38._16_4_ = local_4e0._16_4_ + fStack_270 * auVar77._16_4_;
    auVar38._20_4_ = local_4e0._20_4_ + fStack_26c * auVar77._20_4_;
    auVar38._24_4_ = local_4e0._24_4_ + fStack_268 * auVar77._24_4_;
    auVar38._28_4_ = local_4e0._28_4_ + fStack_264 * auVar77._28_4_;
    auVar45._0_4_ = local_4c0._0_4_ + local_280 * auVar49._0_4_;
    auVar45._4_4_ = local_4c0._4_4_ + fStack_27c * auVar49._4_4_;
    auVar45._8_4_ = local_4c0._8_4_ + fStack_278 * auVar49._8_4_;
    auVar45._12_4_ = local_4c0._12_4_ + fStack_274 * auVar49._12_4_;
    auVar45._16_4_ = local_4c0._16_4_ + fStack_270 * auVar49._16_4_;
    auVar45._20_4_ = local_4c0._20_4_ + fStack_26c * auVar49._20_4_;
    auVar45._24_4_ = local_4c0._24_4_ + fStack_268 * auVar49._24_4_;
    auVar45._28_4_ = local_4c0._28_4_ + fStack_264 * auVar49._28_4_;
    local_500 = vmaskmovps_avx(auVar62,auVar23);
    local_4e0 = vmaskmovps_avx(auVar62,auVar38);
    local_4c0._0_32_ = vmaskmovps_avx(auVar62,auVar45);
  }
  auVar69._0_12_ = ZEXT812(0);
  auVar69._12_4_ = 0;
  auVar72._16_16_ = local_4e0._0_16_;
  auVar72._0_16_ = local_500._0_16_;
  auVar49 = vperm2f128_avx(local_500,local_4e0,0x31);
  auVar77 = vperm2f128_avx(ZEXT1632(auVar69),local_4c0._0_32_,0x21);
  auVar83 = vshufps_avx(auVar77,auVar77,0x14);
  auVar83 = vblendps_avx(ZEXT1632(CONCAT88(local_4c0._0_8_,local_4c0._0_8_)),auVar83,0x48);
  auVar85._16_16_ = local_500._0_16_;
  auVar85._0_16_ = local_4e0._0_16_;
  auVar48 = vshufps_avx(auVar85,auVar85,0xe1);
  auVar48 = vblendps_avx(auVar72,auVar48,0x12);
  local_200 = vblendps_avx(auVar48,auVar83,0xcc);
  auVar83 = vshufps_avx(auVar77,auVar77,0xb4);
  auVar83 = vblendps_avx(ZEXT1632(local_4c0._0_16_),auVar83,0x48);
  auVar77 = vshufps_avx(auVar85,auVar85,0xeb);
  auVar48 = vshufpd_avx(auVar72,auVar72,5);
  auVar48 = vblendps_avx(auVar48,auVar77,0x12);
  local_1e0 = vblendps_avx(auVar48,auVar83,0xcc);
  auVar83 = vunpcklps_avx(local_4c0._0_32_,ZEXT1632(auVar69));
  auVar83 = vblendps_avx(ZEXT1632(CONCAT88(local_4c0._16_8_,local_4c0._16_8_)),auVar83,0x48);
  auVar77 = vperm2f128_avx(local_4e0,local_500,0x31);
  auVar48 = vshufps_avx(auVar77,auVar77,0xe1);
  auVar48 = vblendps_avx(auVar49,auVar48,0x12);
  local_1c0 = vblendps_avx(auVar48,auVar83,0xcc);
  auVar83 = vunpckhps_avx(local_4c0._0_32_,ZEXT1632(auVar69));
  auVar83 = vblendps_avx(ZEXT1632(local_4c0._16_16_),auVar83,0x48);
  auVar77 = vshufps_avx(auVar77,auVar77,0xeb);
  auVar48 = vshufpd_avx(auVar49,auVar49,5);
  auVar48 = vblendps_avx(auVar48,auVar77,0x12);
  local_1a0 = vblendps_avx(auVar48,auVar83,0xcc);
  auVar75 = vpcmpgtd_avx(auVar1,auVar40);
  auVar39._16_16_ = auVar15;
  auVar39._0_16_ = auVar75;
  uVar9 = vmovmskps_avx(auVar39);
  uVar11 = (ulonglong)uVar9;
  do {
    if (uVar11 == 0) {
      uVar9 = 0x40;
    }
    else {
      uVar9 = 0;
      for (uVar12 = uVar11; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
        uVar9 = uVar9 + 1;
      }
    }
    bVar5 = (byte)uVar9 & 0x3f;
    local_240[0] = local_540;
    local_240[1] = 0;
    local_240[2] = local_6e0;
    uStack_228 = 0;
    auVar83 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar9 << 4)));
    lVar13 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar9 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + 0x40 + lVar13) = auVar83._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x50 + lVar13) = auVar83._16_16_;
    uVar11 = uVar11 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
  } while (uVar11 != 0);
  return;
}

// GetConstantKeyLerpPoseRotations_avx @ 140af34b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseRotations_avx
               (longlong param_1,longlong param_2,longlong param_3,uint *param_4,undefined8 param_5,
               float param_6,char param_7,uint param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  float fVar48;
  float fVar49;
  undefined1 auVar33 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar50;
  float fVar54;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar55;
  float fVar71;
  float fVar72;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  uint uVar78;
  float fVar79;
  float fVar85;
  float fVar86;
  uint uVar88;
  float fVar91;
  float fVar92;
  undefined1 auVar80 [32];
  float fVar87;
  float fVar89;
  float fVar93;
  undefined1 auVar81 [32];
  undefined1 auVar90 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
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
  float fVar107;
  uint uVar108;
  float fVar118;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar124;
  float fVar125;
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  float fVar126;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  uint uVar119;
  uint uVar123;
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar127 [16];
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
  undefined1 auVar141 [32];
  uint uVar146;
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar147 [16];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  float fVar162;
  undefined1 auVar153 [16];
  float fVar152;
  float fVar160;
  float fVar161;
  float fVar163;
  float fVar164;
  float fVar165;
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  float fVar166;
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar167 [16];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [16];
  undefined1 auVar180 [32];
  undefined1 auVar179 [16];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [64];
  undefined1 auVar185 [16];
  undefined1 in_ZMM14 [64];
  undefined1 local_6a0 [32];
  undefined1 local_640 [32];
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
  undefined1 local_4c0 [32];
  float local_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
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
  ulonglong local_420;
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
  undefined1 local_3a0 [8];
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
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
  undefined1 local_68 [16];
  undefined1 auVar66 [32];
  undefined1 auVar173 [32];
  
  local_68 = in_ZMM14._0_16_;
  lVar20 = (longlong)(int)param_8;
  iVar1 = *(int *)(&DAT_151c6bb90 + lVar20 * 4);
  iVar2 = *(int *)(&DAT_151c6bb70 + lVar20 * 4);
  uVar13 = 0x18;
  if (lVar20 != 3) {
    uVar13 = 0;
  }
  uVar10 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar10 = param_9;
  }
  uVar17 = (ulonglong)param_8;
  uVar15 = 0;
  if (0 < (int)(uVar10 & 0xfffffff8)) {
    auVar90 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
    auVar5 = vpshufd_avx(ZEXT416(uVar13),0);
    vpblendw_avx(auVar5,(undefined1  [16])0x0,0xcc);
    vpmovzxdq_avx(auVar5);
    auVar5 = vpshufd_avx(ZEXT416((uint)(iVar1 * iVar2)),0);
    uVar15 = 0;
    auVar184 = ZEXT1664(CONCAT412(__real_00000001,
                                  CONCAT48(__real_00000001,CONCAT44(__real_00000001,__real_00000001)
                                          )));
    do {
      uVar14 = (ulonglong)(uint)((int)uVar15 * 8);
      auVar57 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar14);
      auVar58 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar14);
      auVar179 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar14);
      auVar33 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar14),auVar57,0xdd);
      auVar56 = vshufps_avx(auVar58,auVar179,0xdd);
      auVar56 = vpslld_avx(auVar56,4);
      auVar33 = vpslld_avx(auVar33,4);
      uVar3 = *(uint *)(param_3 + 8 + (longlong)auVar33._0_4_);
      uVar4 = *(uint *)(param_3 + 8 + (longlong)auVar56._0_4_);
      uVar108 = *(uint *)(param_3 + 0xc + (longlong)auVar33._0_4_);
      auVar127 = ZEXT416(uVar108);
      uVar119 = *(uint *)(param_3 + 0xc + (longlong)auVar56._0_4_);
      auVar178 = auVar184._0_16_;
      auVar33 = vpcmpeqd_avx(auVar178,ZEXT416(uVar119));
      auVar56 = vpcmpeqd_avx(auVar178,auVar127);
      auVar33 = vpor_avx(auVar56,auVar33);
      auVar56 = ZEXT416(uVar119);
      if ((((SUB161(auVar33 >> 0x1f,0) & 1) != 0 || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x5f,0) & 1) != 0) || auVar33[0xf] < '\0') {
        auVar147 = vpcmpeqd_avx(auVar178,auVar56);
        auVar153 = vpcmpeqd_avx(auVar127,auVar178);
        auVar80._16_16_ = auVar147;
        auVar80._0_16_ = auVar153;
        uVar78 = auVar153._0_4_;
        uVar88 = auVar147._0_4_;
        lVar20 = (longlong)(int)(uVar78 & uVar3);
        lVar24 = (longlong)(int)(uVar88 & uVar4);
        auVar33 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                 (ulonglong)(uVar88 & _UNK_150b50d50) + lVar24)),
                                ZEXT416(*(uint *)((ulonglong)(auVar147._4_4_ & _UNK_150b50d54) +
                                                 (longlong)param_4)),0x10);
        auVar178 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                  (ulonglong)(uVar88 & _UNK_150b50d70) + lVar24)),
                                 ZEXT416(*(uint *)((ulonglong)(auVar147._4_4_ & _UNK_150b50d74) +
                                                  (longlong)param_4)),0x10);
        auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar147._8_4_ & _UNK_150b50d58) +
                                                         (longlong)param_4)),0x20);
        auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar147._8_4_ & _UNK_150b50d78) +
                                                           (longlong)param_4)),0x20);
        auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)((ulonglong)
                                                          (auVar147._12_4_ & _UNK_150b50d5c) +
                                                         (longlong)param_4)),0x30);
        auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar147._12_4_ & _UNK_150b50d7c) +
                                                           (longlong)param_4)),0x30);
        auVar147 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                  (ulonglong)
                                                  (uVar78 & 
                                                  ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                                  ) + lVar20)),
                                 ZEXT416(*(uint *)((ulonglong)(auVar153._4_4_ & _UNK_150b50d44) +
                                                  (longlong)param_4)),0x10);
        auVar185 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 +
                                                  (ulonglong)
                                                  (uVar78 & 
                                                  ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                                  ) + lVar20)),
                                 ZEXT416(*(uint *)((ulonglong)(auVar153._4_4_ & _UNK_150b50d64) +
                                                  (longlong)param_4)),0x10);
        auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar153._8_4_ & _UNK_150b50d48) +
                                                           (longlong)param_4)),0x20);
        auVar185 = vinsertps_avx(auVar185,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar153._8_4_ & _UNK_150b50d68) +
                                                           (longlong)param_4)),0x20);
        auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar153._12_4_ & _UNK_150b50d4c) +
                                                           (longlong)param_4)),0x30);
        auVar185 = vinsertps_avx(auVar185,ZEXT416(*(uint *)((ulonglong)
                                                            (auVar153._12_4_ & _UNK_150b50d6c) +
                                                           (longlong)param_4)),0x30);
        auVar153 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar24)),ZEXT416(*param_4),
                                 0x10);
        auVar153 = vinsertps_avx(auVar153,ZEXT416(*param_4),0x20);
        auVar153 = vinsertps_avx(auVar153,ZEXT416(*param_4),0x30);
        auVar60 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar20)),ZEXT416(*param_4),
                                0x10);
        auVar60 = vinsertps_avx(auVar60,ZEXT416(*param_4),0x20);
        auVar60 = vinsertps_avx(auVar60,ZEXT416(*param_4),0x30);
        in_ZMM14 = ZEXT1664(auVar60);
        auVar180._16_16_ = auVar153;
        auVar180._0_16_ = auVar60;
        auVar34._16_16_ = auVar33;
        auVar34._0_16_ = auVar147;
        auVar109._16_16_ = auVar178;
        auVar109._0_16_ = auVar185;
        auVar154._0_4_ = auVar60._0_4_ * auVar60._0_4_;
        auVar154._4_4_ = auVar60._4_4_ * auVar60._4_4_;
        auVar154._8_4_ = auVar60._8_4_ * auVar60._8_4_;
        auVar154._12_4_ = auVar60._12_4_ * auVar60._12_4_;
        auVar154._16_4_ = auVar153._0_4_ * auVar153._0_4_;
        auVar154._20_4_ = auVar153._4_4_ * auVar153._4_4_;
        auVar154._24_4_ = auVar153._8_4_ * auVar153._8_4_;
        auVar154._28_4_ = auVar153._12_4_ * auVar153._12_4_;
        auVar97._4_4_ = __real_3f800000;
        auVar97._0_4_ = __real_3f800000;
        auVar97._8_4_ = __real_3f800000;
        auVar97._12_4_ = __real_3f800000;
        auVar97._16_4_ = __real_3f800000;
        auVar97._20_4_ = __real_3f800000;
        auVar97._24_4_ = __real_3f800000;
        auVar97._28_4_ = __real_3f800000;
        auVar154 = vsubps_avx(auVar97,auVar154);
        auVar168._0_4_ = auVar147._0_4_ * auVar147._0_4_;
        auVar168._4_4_ = auVar147._4_4_ * auVar147._4_4_;
        auVar168._8_4_ = auVar147._8_4_ * auVar147._8_4_;
        auVar168._12_4_ = auVar147._12_4_ * auVar147._12_4_;
        auVar168._16_4_ = auVar33._0_4_ * auVar33._0_4_;
        auVar168._20_4_ = auVar33._4_4_ * auVar33._4_4_;
        auVar168._24_4_ = auVar33._8_4_ * auVar33._8_4_;
        auVar168._28_4_ = auVar33._12_4_ * auVar33._12_4_;
        auVar154 = vsubps_avx(auVar154,auVar168);
        auVar169._0_4_ = auVar185._0_4_ * auVar185._0_4_;
        auVar169._4_4_ = auVar185._4_4_ * auVar185._4_4_;
        auVar169._8_4_ = auVar185._8_4_ * auVar185._8_4_;
        auVar169._12_4_ = auVar185._12_4_ * auVar185._12_4_;
        auVar169._16_4_ = auVar178._0_4_ * auVar178._0_4_;
        auVar169._20_4_ = auVar178._4_4_ * auVar178._4_4_;
        auVar169._24_4_ = auVar178._8_4_ * auVar178._8_4_;
        auVar169._28_4_ = auVar178._12_4_ * auVar178._12_4_;
        auVar97 = vsubps_avx(auVar154,auVar169);
        auVar154 = vcmpps_avx(ZEXT432(0) << 0x20,auVar97,1);
        auVar97 = vsqrtps_avx(auVar97);
        auVar155._0_4_ = auVar154._0_4_ & auVar97._0_4_;
        auVar155._4_4_ = auVar154._4_4_ & auVar97._4_4_;
        auVar155._8_4_ = auVar154._8_4_ & auVar97._8_4_;
        auVar155._12_4_ = auVar154._12_4_ & auVar97._12_4_;
        auVar155._16_4_ = auVar154._16_4_ & auVar97._16_4_;
        auVar155._20_4_ = auVar154._20_4_ & auVar97._20_4_;
        auVar155._24_4_ = auVar154._24_4_ & auVar97._24_4_;
        auVar155._28_4_ = auVar154._28_4_ & auVar97._28_4_;
        _local_400 = vmaskmovps_avx(auVar80,auVar180);
        auVar184 = ZEXT1664(CONCAT412(__real_00000001,
                                      CONCAT48(__real_00000001,
                                               CONCAT44(__real_00000001,__real_00000001))));
        _local_3e0 = vmaskmovps_avx(auVar80,auVar34);
        _local_3c0 = vmaskmovps_avx(auVar80,auVar109);
        _local_3a0 = vmaskmovps_avx(auVar80,auVar155);
      }
      auVar110._16_16_ = auVar179;
      auVar110._0_16_ = auVar57;
      auVar128._16_16_ = auVar58;
      auVar128._0_16_ = *(undefined1 (*) [16])(param_2 + uVar14);
      auVar179 = auVar184._0_16_;
      auVar57 = vpcmpeqd_avx(auVar179,auVar56);
      auVar58 = vpcmpeqd_avx(auVar127,auVar179);
      auVar35._16_16_ = auVar57;
      auVar35._0_16_ = auVar58;
      uVar11 = vmovmskps_avx(auVar35);
      bVar9 = (byte)uVar11 ^ 0xff;
      if (bVar9 != 0) {
        auVar33._4_4_ = __real_00000002;
        auVar33._0_4_ = __real_00000002;
        auVar33._8_4_ = __real_00000002;
        auVar33._12_4_ = __real_00000002;
        auVar178 = vpcmpgtd_avx(auVar33,auVar56);
        auVar147 = vpcmpgtd_avx(auVar33,auVar127);
        auVar33 = vpcmpeqd_avx(auVar127,auVar179);
        auVar134._0_4_ = auVar33._0_4_ ^ auVar147._0_4_;
        auVar134._4_4_ = auVar33._4_4_ ^ auVar147._4_4_;
        auVar134._8_4_ = auVar33._8_4_ ^ auVar147._8_4_;
        auVar134._12_4_ = auVar33._12_4_ ^ auVar147._12_4_;
        uVar78 = auVar57._0_4_;
        auVar134._16_4_ = uVar78 ^ auVar178._0_4_;
        uVar88 = auVar57._4_4_;
        auVar134._20_4_ = uVar88 ^ auVar178._4_4_;
        uVar123 = auVar57._8_4_;
        auVar134._24_4_ = uVar123 ^ auVar178._8_4_;
        uVar146 = auVar57._12_4_;
        auVar134._28_4_ = uVar146 ^ auVar178._12_4_;
        iVar12 = vmovmskps_avx(auVar134);
        if (iVar12 == 0) {
          auVar36 = ZEXT1632((undefined1  [16])0x0);
LAB_140af3a4b:
          auVar154 = ZEXT832(0) << 0x20;
          auVar97 = vcmpps_avx(ZEXT832(0) << 0x20,ZEXT832(0) << 0x20,0xf);
          auVar111._0_4_ = auVar36._0_4_ ^ auVar97._0_4_;
          auVar111._4_4_ = auVar36._4_4_ ^ auVar97._4_4_;
          auVar111._8_4_ = auVar36._8_4_ ^ auVar97._8_4_;
          auVar111._12_4_ = auVar36._12_4_ ^ auVar97._12_4_;
          auVar111._16_4_ = auVar36._16_4_ ^ auVar97._16_4_;
          auVar111._20_4_ = auVar36._20_4_ ^ auVar97._20_4_;
          auVar111._24_4_ = auVar36._24_4_ ^ auVar97._24_4_;
          auVar111._28_4_ = auVar36._28_4_ ^ auVar97._28_4_;
          if (param_6 <= 0.0) {
            auVar179 = vpcmpeqd_avx(auVar127,auVar179);
            auVar39._0_4_ = ~auVar179._0_4_ & auVar111._0_4_;
            auVar39._4_4_ = ~auVar179._4_4_ & auVar111._4_4_;
            auVar39._8_4_ = ~auVar179._8_4_ & auVar111._8_4_;
            auVar39._12_4_ = ~auVar179._12_4_ & auVar111._12_4_;
            auVar39._16_4_ = ~uVar78 & auVar111._16_4_;
            auVar39._20_4_ = ~uVar88 & auVar111._20_4_;
            auVar39._24_4_ = ~uVar123 & auVar111._24_4_;
            auVar39._28_4_ = ~uVar146 & auVar111._28_4_;
            auVar97 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
            local_6a0 = vblendvps_avx(local_6a0,auVar97,auVar39);
            local_640 = vblendvps_avx(local_640,auVar97,auVar39);
          }
          else {
            auVar33 = vpcmpeqd_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6));
            auVar56._0_4_ = uVar119 + auVar33._0_4_;
            auVar56._4_4_ = auVar33._4_4_;
            auVar56._8_4_ = auVar33._8_4_;
            auVar56._12_4_ = auVar33._12_4_;
            auVar178._0_4_ = uVar108 + auVar33._0_4_;
            auVar178._4_4_ = auVar33._4_4_;
            auVar178._8_4_ = auVar33._8_4_;
            auVar178._12_4_ = auVar33._12_4_;
            auVar37._16_16_ = auVar56;
            auVar37._0_16_ = auVar178;
            if (__real_3f800000 <= param_6) {
              auVar179 = vpcmpeqd_avx(auVar127,auVar179);
              auVar98._0_4_ = ~auVar179._0_4_ & auVar111._0_4_;
              auVar98._4_4_ = ~auVar179._4_4_ & auVar111._4_4_;
              auVar98._8_4_ = ~auVar179._8_4_ & auVar111._8_4_;
              auVar98._12_4_ = ~auVar179._12_4_ & auVar111._12_4_;
              auVar98._16_4_ = ~uVar78 & auVar111._16_4_;
              auVar98._20_4_ = ~uVar88 & auVar111._20_4_;
              auVar98._24_4_ = ~uVar123 & auVar111._24_4_;
              auVar98._28_4_ = ~uVar146 & auVar111._28_4_;
              local_6a0 = vblendvps_avx(local_6a0,auVar37,auVar98);
              local_640 = vblendvps_avx(local_640,auVar37,auVar98);
              auVar97 = ZEXT432(0) << 0x20;
            }
            else {
              auVar154 = vcvtdq2ps_avx(auVar37);
              local_260 = auVar90._0_4_;
              fStack_25c = auVar90._4_4_;
              fStack_258 = auVar90._8_4_;
              fStack_254 = auVar90._12_4_;
              auVar135._0_4_ = auVar154._0_4_ * local_260;
              auVar135._4_4_ = auVar154._4_4_ * fStack_25c;
              auVar135._8_4_ = auVar154._8_4_ * fStack_258;
              auVar135._12_4_ = auVar154._12_4_ * fStack_254;
              auVar135._16_4_ = auVar154._16_4_ * local_260;
              auVar135._20_4_ = auVar154._20_4_ * fStack_25c;
              auVar135._24_4_ = auVar154._24_4_ * fStack_258;
              auVar135._28_4_ = auVar154._28_4_ * fStack_254;
              auVar154 = vroundps_avx(auVar135,9);
              auVar97 = SUB6432(ZEXT864(0),0) << 0x20;
              if (param_7 != '\x01') {
                auVar97 = vsubps_avx(auVar135,auVar154);
              }
              auVar179 = vpcmpeqd_avx(auVar127,auVar179);
              auVar136._0_4_ = ~auVar179._0_4_ & auVar111._0_4_;
              auVar136._4_4_ = ~auVar179._4_4_ & auVar111._4_4_;
              auVar136._8_4_ = ~auVar179._8_4_ & auVar111._8_4_;
              auVar136._12_4_ = ~auVar179._12_4_ & auVar111._12_4_;
              auVar136._16_4_ = ~uVar78 & auVar111._16_4_;
              auVar136._20_4_ = ~uVar88 & auVar111._20_4_;
              auVar136._24_4_ = ~uVar123 & auVar111._24_4_;
              auVar136._28_4_ = ~uVar146 & auVar111._28_4_;
              auVar127._0_4_ = (int)auVar154._0_4_;
              auVar127._4_4_ = (int)auVar154._4_4_;
              auVar127._8_4_ = (int)auVar154._8_4_;
              auVar127._12_4_ = (int)auVar154._12_4_;
              auVar129._16_4_ = (int)auVar154._16_4_;
              auVar129._0_16_ = auVar127;
              auVar129._20_4_ = (int)auVar154._20_4_;
              auVar129._24_4_ = (int)auVar154._24_4_;
              auVar129._28_4_ = (int)auVar154._28_4_;
              auVar179 = vpminsd_avx(auVar129._16_16_,auVar56);
              auVar33 = vpminsd_avx(auVar127,auVar178);
              auVar130._16_16_ = auVar179;
              auVar130._0_16_ = auVar33;
              local_6a0 = vblendvps_avx(local_6a0,auVar130,auVar136);
              auVar179 = vpcmpeqd_avx(in_ZMM14._0_16_,in_ZMM14._0_16_);
              auVar33 = vpsubd_avx(local_6a0._0_16_,auVar179);
              auVar179 = vpsubd_avx(local_6a0._16_16_,auVar179);
              auVar179 = vpminsd_avx(auVar179,auVar56);
              auVar33 = vpminsd_avx(auVar33,auVar178);
              auVar38._16_16_ = auVar179;
              auVar38._0_16_ = auVar33;
              local_640 = vblendvps_avx(local_640,auVar38,auVar136);
              auVar154 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
            }
          }
          local_4c0 = vblendvps_avx(local_4c0,auVar97,auVar111);
        }
        else {
          auVar33 = vpackssdw_avx(auVar33 ^ auVar147,auVar57 ^ auVar178);
          auVar178 = vpmovsxwd_avx(auVar33);
          auVar33 = vpunpckhwd_avx(auVar33,auVar33);
          auVar36._16_16_ = auVar33;
          auVar36._0_16_ = auVar178;
          local_6a0._0_4_ = ~auVar178._0_4_ & local_6a0._0_4_;
          local_6a0._4_4_ = ~auVar178._4_4_ & local_6a0._4_4_;
          local_6a0._8_4_ = ~auVar178._8_4_ & local_6a0._8_4_;
          local_6a0._12_4_ = ~auVar178._12_4_ & local_6a0._12_4_;
          local_6a0._16_4_ = ~auVar33._0_4_ & local_6a0._16_4_;
          local_6a0._20_4_ = ~auVar33._4_4_ & local_6a0._20_4_;
          local_6a0._24_4_ = ~auVar33._8_4_ & local_6a0._24_4_;
          local_6a0._28_4_ = ~auVar33._12_4_ & local_6a0._28_4_;
          local_640._0_4_ = ~auVar178._0_4_ & local_640._0_4_;
          local_640._4_4_ = ~auVar178._4_4_ & local_640._4_4_;
          local_640._8_4_ = ~auVar178._8_4_ & local_640._8_4_;
          local_640._12_4_ = ~auVar178._12_4_ & local_640._12_4_;
          local_640._16_4_ = ~auVar33._0_4_ & local_640._16_4_;
          local_640._20_4_ = ~auVar33._4_4_ & local_640._20_4_;
          local_640._24_4_ = ~auVar33._8_4_ & local_640._24_4_;
          local_640._28_4_ = ~auVar33._12_4_ & local_640._28_4_;
          auVar33 = vpcmpgtd_avx(auVar56,auVar179);
          auVar56 = vpcmpgtd_avx(auVar127,auVar179);
          local_4c0._4_4_ = auVar56._4_4_ & local_4c0._4_4_;
          local_4c0._0_4_ = auVar56._0_4_ & local_4c0._0_4_;
          local_4c0._8_4_ = auVar56._8_4_ & local_4c0._8_4_;
          local_4c0._12_4_ = auVar56._12_4_ & local_4c0._12_4_;
          local_4c0._16_4_ = auVar33._0_4_ & local_4c0._16_4_;
          local_4c0._20_4_ = auVar33._4_4_ & local_4c0._20_4_;
          local_4c0._24_4_ = auVar33._8_4_ & local_4c0._24_4_;
          local_4c0._28_4_ = auVar33._12_4_ & local_4c0._28_4_;
          auVar154 = ZEXT832(0) << 0x20;
          if (bVar9 != (byte)iVar12) goto LAB_140af3a4b;
        }
        vpmovsxdq_avx(ZEXT416(uVar4));
        auVar179 = vpshufd_avx(ZEXT416(uVar4),0xee);
        vpmovsxdq_avx(auVar179);
        vpmovsxdq_avx(ZEXT416(uVar3));
        auVar179 = vpshufd_avx(ZEXT416(uVar3),0xee);
        auVar33 = vpmovsxdq_avx(auVar179);
        auVar179 = vpackssdw_avx(auVar58,auVar57);
        auVar33 = vpcmpeqd_avx(auVar33,auVar33);
        auVar179 = auVar179 ^ auVar33;
        auVar56 = vpmovsxwd_avx(auVar179);
        auVar127 = vpunpckhwd_avx(auVar179,auVar179);
        if (param_8 < 6) {
          auVar90 = vpmulld_avx(local_6a0._0_16_,auVar5);
          auVar5 = vpmulld_avx(local_6a0._16_16_,auVar5);
          vpmovsxdq_avx(auVar5);
          auVar5 = vpshufd_avx(auVar5,0xee);
          vpmovsxdq_avx(auVar5);
          auVar5 = vpmovsxdq_avx(auVar90);
          auVar90 = vpshufd_avx(auVar90,0xee);
          vpmovsxdq_avx(auVar90);
                    /* WARNING: Could not recover jumptable at 0x000140af3c83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6ba30 + *(int *)(&DAT_151c6ba30 + uVar17 * 4)))
                    (&DAT_151c6ba30 + *(int *)(&DAT_151c6ba30 + uVar17 * 4),
                     auVar58._0_8_ ^ auVar33._0_8_,auVar57._0_8_,auVar5._0_8_);
          return;
        }
        auVar40._16_16_ = auVar127;
        auVar40._0_16_ = auVar56;
        _local_400 = vmaskmovps_avx(auVar40,auVar154);
        _local_3e0 = vmaskmovps_avx(auVar40,auVar154);
        _local_3c0 = vmaskmovps_avx(auVar40,auVar154);
        auVar176._4_4_ = __real_3f800000;
        auVar176._0_4_ = __real_3f800000;
        auVar176._8_4_ = __real_3f800000;
        auVar176._12_4_ = __real_3f800000;
        auVar176._16_4_ = __real_3f800000;
        auVar176._20_4_ = __real_3f800000;
        auVar176._24_4_ = __real_3f800000;
        auVar176._28_4_ = __real_3f800000;
        _local_3a0 = vmaskmovps_avx(auVar40,auVar176);
        in_ZMM14 = ZEXT3264(local_640);
        auVar57 = vpcmpeqd_avx(local_6a0._16_16_,local_640._16_16_);
        auVar58 = vpcmpeqd_avx(local_6a0._0_16_,local_640._0_16_);
        auVar94._16_16_ = auVar127;
        auVar94._0_16_ = auVar56;
        auVar99._16_16_ = auVar57;
        auVar99._0_16_ = auVar58;
        auVar94 = auVar94 & ~auVar99;
        if ((((((((SUB321(auVar94 >> 0x1f,0) & 1) != 0 || (SUB321(auVar94 >> 0x3f,0) & 1) != 0) ||
                (SUB321(auVar94 >> 0x5f,0) & 1) != 0) || SUB321(auVar94 >> 0x7f,0) != '\0') ||
              (SUB321(auVar94 >> 0x9f,0) & 1) != 0) || SUB321(auVar94 >> 0xbf,0) != '\0') ||
            (SUB321(auVar94 >> 0xdf,0) & 1) != 0) || auVar94[0x1f] < '\0') {
          auVar57 = vpackssdw_avx(auVar58,auVar57);
          auVar57 = vpandn_avx(auVar57,auVar179);
          auVar58 = vpmovsxwd_avx(auVar57);
          auVar57 = vpunpckhwd_avx(auVar57,auVar57);
          if (param_8 < 6) {
            auVar90 = vpmulld_avx(local_640._0_16_,auVar5);
            auVar5 = vpmulld_avx(local_640._16_16_,auVar5);
            vpmovsxdq_avx(auVar5);
            auVar5 = vpshufd_avx(auVar5,0xee);
            vpmovsxdq_avx(auVar5);
            auVar5 = vpmovsxdq_avx(auVar90);
            auVar90 = vpshufd_avx(auVar90,0xee);
            auVar90 = vpmovsxdq_avx(auVar90);
                    /* WARNING: Could not recover jumptable at 0x000140af5128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_151c6ba48 + *(int *)(&DAT_151c6ba48 + uVar17 * 4)))
                      (&DAT_151c6ba48 + *(int *)(&DAT_151c6ba48 + uVar17 * 4),auVar58._0_8_,
                       auVar90._0_8_,auVar5._0_8_);
            return;
          }
          auVar41._16_16_ = auVar57;
          auVar41._0_16_ = auVar58;
          auVar97 = vmaskmovps_avx(auVar41,auVar154);
          auVar34 = vmaskmovps_avx(auVar41,auVar154);
          auVar80 = vmaskmovps_avx(auVar41,auVar154);
          auVar109 = vmaskmovps_avx(auVar41,auVar176);
          local_2e0 = auVar97._0_4_;
          fStack_2dc = auVar97._4_4_;
          fStack_2d8 = auVar97._8_4_;
          fStack_2d4 = auVar97._12_4_;
          fStack_2d0 = auVar97._16_4_;
          fStack_2cc = auVar97._20_4_;
          fStack_2c8 = auVar97._24_4_;
          fStack_2c4 = auVar97._28_4_;
          local_2c0 = auVar34._0_4_;
          fStack_2bc = auVar34._4_4_;
          fStack_2b8 = auVar34._8_4_;
          fStack_2b4 = auVar34._12_4_;
          fStack_2b0 = auVar34._16_4_;
          fStack_2ac = auVar34._20_4_;
          fStack_2a8 = auVar34._24_4_;
          fStack_2a4 = auVar34._28_4_;
          local_2a0 = auVar80._0_4_;
          fStack_29c = auVar80._4_4_;
          fStack_298 = auVar80._8_4_;
          fStack_294 = auVar80._12_4_;
          fStack_290 = auVar80._16_4_;
          fStack_28c = auVar80._20_4_;
          fStack_288 = auVar80._24_4_;
          fStack_284 = auVar80._28_4_;
          local_280 = auVar109._0_4_;
          fStack_27c = auVar109._4_4_;
          fStack_278 = auVar109._8_4_;
          fStack_274 = auVar109._12_4_;
          fStack_270 = auVar109._16_4_;
          fStack_26c = auVar109._20_4_;
          fStack_268 = auVar109._24_4_;
          fStack_264 = auVar109._28_4_;
          auVar156._0_4_ =
               (float)local_400._0_4_ * local_2e0 + (float)local_3c0._0_4_ * local_2a0 +
               (float)local_3e0._0_4_ * local_2c0 + local_280 * (float)local_3a0._0_4_;
          auVar156._4_4_ =
               (float)local_400._4_4_ * fStack_2dc + (float)local_3c0._4_4_ * fStack_29c +
               (float)local_3e0._4_4_ * fStack_2bc + fStack_27c * (float)local_3a0._4_4_;
          auVar156._8_4_ =
               fStack_3f8 * fStack_2d8 + fStack_3b8 * fStack_298 +
               fStack_3d8 * fStack_2b8 + fStack_278 * fStack_398;
          auVar156._12_4_ =
               fStack_3f4 * fStack_2d4 + fStack_3b4 * fStack_294 +
               fStack_3d4 * fStack_2b4 + fStack_274 * fStack_394;
          auVar156._16_4_ =
               fStack_3f0 * fStack_2d0 + fStack_3b0 * fStack_290 +
               fStack_3d0 * fStack_2b0 + fStack_270 * fStack_390;
          auVar156._20_4_ =
               fStack_3ec * fStack_2cc + fStack_3ac * fStack_28c +
               fStack_3cc * fStack_2ac + fStack_26c * fStack_38c;
          auVar156._24_4_ =
               fStack_3e8 * fStack_2c8 + fStack_3a8 * fStack_288 +
               fStack_3c8 * fStack_2a8 + fStack_268 * fStack_388;
          auVar156._28_4_ =
               fStack_3e4 * fStack_2c4 + fStack_3a4 * fStack_284 +
               fStack_3c4 * fStack_2a4 + fStack_264 * fStack_384;
          auVar154 = vcmpps_avx(auVar154,auVar156,6);
          auVar154 = vcvtdq2ps_avx(auVar154 |
                                   ___ymm_0000000100000001000000010000000100000001000000010000000100000001
                                  );
          auVar97 = vsubps_avx(auVar176,local_4c0);
          fVar152 = auVar97._0_4_ * auVar154._0_4_;
          fVar160 = auVar97._4_4_ * auVar154._4_4_;
          fVar161 = auVar97._8_4_ * auVar154._8_4_;
          fVar162 = auVar97._12_4_ * auVar154._12_4_;
          fVar163 = auVar97._16_4_ * auVar154._16_4_;
          fVar164 = auVar97._20_4_ * auVar154._20_4_;
          fVar165 = auVar97._24_4_ * auVar154._24_4_;
          fVar166 = auVar97._28_4_ * auVar154._28_4_;
          fVar107 = local_4c0._0_4_;
          fVar118 = local_4c0._4_4_;
          fVar120 = local_4c0._8_4_;
          fVar121 = local_4c0._12_4_;
          fVar122 = local_4c0._16_4_;
          fVar124 = local_4c0._20_4_;
          fVar125 = local_4c0._24_4_;
          fVar126 = local_4c0._28_4_;
          fVar32 = fVar107 * local_2e0 + fVar152 * (float)local_400._0_4_;
          fVar48 = fVar118 * fStack_2dc + fVar160 * (float)local_400._4_4_;
          fVar49 = fVar120 * fStack_2d8 + fVar161 * fStack_3f8;
          fVar50 = fVar121 * fStack_2d4 + fVar162 * fStack_3f4;
          fVar51 = fVar122 * fStack_2d0 + fVar163 * fStack_3f0;
          fVar52 = fVar124 * fStack_2cc + fVar164 * fStack_3ec;
          fVar53 = fVar125 * fStack_2c8 + fVar165 * fStack_3e8;
          fVar54 = fVar126 * fStack_2c4 + fVar166 * fStack_3e4;
          fVar55 = fVar107 * local_2c0 + fVar152 * (float)local_3e0._0_4_;
          fVar71 = fVar118 * fStack_2bc + fVar160 * (float)local_3e0._4_4_;
          fVar72 = fVar120 * fStack_2b8 + fVar161 * fStack_3d8;
          fVar73 = fVar121 * fStack_2b4 + fVar162 * fStack_3d4;
          fVar74 = fVar122 * fStack_2b0 + fVar163 * fStack_3d0;
          fVar75 = fVar124 * fStack_2ac + fVar164 * fStack_3cc;
          fVar76 = fVar125 * fStack_2a8 + fVar165 * fStack_3c8;
          fVar77 = fVar126 * fStack_2a4 + fVar166 * fStack_3c4;
          fVar79 = fVar107 * local_2a0 + fVar152 * (float)local_3c0._0_4_;
          fVar85 = fVar118 * fStack_29c + fVar160 * (float)local_3c0._4_4_;
          fVar86 = fVar120 * fStack_298 + fVar161 * fStack_3b8;
          fVar87 = fVar121 * fStack_294 + fVar162 * fStack_3b4;
          fVar89 = fVar122 * fStack_290 + fVar163 * fStack_3b0;
          fVar91 = fVar124 * fStack_28c + fVar164 * fStack_3ac;
          fVar92 = fVar125 * fStack_288 + fVar165 * fStack_3a8;
          fVar93 = fVar126 * fStack_284 + fVar166 * fStack_3a4;
          fVar152 = fVar107 * local_280 + fVar152 * (float)local_3a0._0_4_;
          fVar160 = fVar118 * fStack_27c + fVar160 * (float)local_3a0._4_4_;
          fVar161 = fVar120 * fStack_278 + fVar161 * fStack_398;
          fVar162 = fVar121 * fStack_274 + fVar162 * fStack_394;
          fVar163 = fVar122 * fStack_270 + fVar163 * fStack_390;
          fVar164 = fVar124 * fStack_26c + fVar164 * fStack_38c;
          fVar165 = fVar125 * fStack_268 + fVar165 * fStack_388;
          fVar166 = fVar126 * fStack_264 + fVar166 * fStack_384;
          auVar100._0_4_ = fVar32 * fVar32 + fVar79 * fVar79 + fVar55 * fVar55 + fVar152 * fVar152;
          auVar100._4_4_ = fVar48 * fVar48 + fVar85 * fVar85 + fVar71 * fVar71 + fVar160 * fVar160;
          auVar100._8_4_ = fVar49 * fVar49 + fVar86 * fVar86 + fVar72 * fVar72 + fVar161 * fVar161;
          auVar100._12_4_ = fVar50 * fVar50 + fVar87 * fVar87 + fVar73 * fVar73 + fVar162 * fVar162;
          auVar100._16_4_ = fVar51 * fVar51 + fVar89 * fVar89 + fVar74 * fVar74 + fVar163 * fVar163;
          auVar100._20_4_ = fVar52 * fVar52 + fVar91 * fVar91 + fVar75 * fVar75 + fVar164 * fVar164;
          auVar100._24_4_ = fVar53 * fVar53 + fVar92 * fVar92 + fVar76 * fVar76 + fVar165 * fVar165;
          auVar100._28_4_ = fVar54 * fVar54 + fVar93 * fVar93 + fVar77 * fVar77 + fVar166 * fVar166;
          auVar154 = vrsqrtps_avx(auVar100);
          auVar142._4_4_ = __real_3f000000;
          auVar142._0_4_ = __real_3f000000;
          auVar142._8_4_ = __real_3f000000;
          auVar142._12_4_ = __real_3f000000;
          auVar142._16_4_ = __real_3f000000;
          auVar142._20_4_ = __real_3f000000;
          auVar142._24_4_ = __real_3f000000;
          auVar142._28_4_ = __real_3f000000;
          fVar107 = auVar154._0_4_;
          fVar118 = auVar154._4_4_;
          fVar120 = auVar154._8_4_;
          fVar121 = auVar154._12_4_;
          fVar122 = auVar154._16_4_;
          fVar124 = auVar154._20_4_;
          fVar125 = auVar154._24_4_;
          fVar126 = auVar154._28_4_;
          auVar148._0_4_ = fVar107 * fVar107 * __real_3f000000 * auVar100._0_4_;
          auVar148._4_4_ = fVar118 * fVar118 * __real_3f000000 * auVar100._4_4_;
          auVar148._8_4_ = fVar120 * fVar120 * __real_3f000000 * auVar100._8_4_;
          auVar148._12_4_ = fVar121 * fVar121 * __real_3f000000 * auVar100._12_4_;
          auVar148._16_4_ = fVar122 * fVar122 * __real_3f000000 * auVar100._16_4_;
          auVar148._20_4_ = fVar124 * fVar124 * __real_3f000000 * auVar100._20_4_;
          auVar148._24_4_ = fVar125 * fVar125 * __real_3f000000 * auVar100._24_4_;
          auVar148._28_4_ = fVar126 * fVar126 * __real_3f000000 * auVar100._28_4_;
          auVar154 = vsubps_avx(auVar142,auVar148);
          fVar107 = auVar154._0_4_ * fVar107 + fVar107;
          fVar118 = auVar154._4_4_ * fVar118 + fVar118;
          fVar120 = auVar154._8_4_ * fVar120 + fVar120;
          fVar121 = auVar154._12_4_ * fVar121 + fVar121;
          fVar122 = auVar154._16_4_ * fVar122 + fVar122;
          fVar124 = auVar154._20_4_ * fVar124 + fVar124;
          fVar125 = auVar154._24_4_ * fVar125 + fVar125;
          fVar126 = auVar154._28_4_ * fVar126 + fVar126;
          auVar131._0_4_ = fVar107 * fVar107 * __real_3f000000 * auVar100._0_4_;
          auVar131._4_4_ = fVar118 * fVar118 * __real_3f000000 * auVar100._4_4_;
          auVar131._8_4_ = fVar120 * fVar120 * __real_3f000000 * auVar100._8_4_;
          auVar131._12_4_ = fVar121 * fVar121 * __real_3f000000 * auVar100._12_4_;
          auVar131._16_4_ = fVar122 * fVar122 * __real_3f000000 * auVar100._16_4_;
          auVar131._20_4_ = fVar124 * fVar124 * __real_3f000000 * auVar100._20_4_;
          auVar131._24_4_ = fVar125 * fVar125 * __real_3f000000 * auVar100._24_4_;
          auVar131._28_4_ = fVar126 * fVar126 * __real_3f000000 * auVar100._28_4_;
          auVar154 = vsubps_avx(auVar142,auVar131);
          fVar107 = fVar107 + fVar107 * auVar154._0_4_;
          fVar118 = fVar118 + fVar118 * auVar154._4_4_;
          fVar120 = fVar120 + fVar120 * auVar154._8_4_;
          fVar121 = fVar121 + fVar121 * auVar154._12_4_;
          fVar122 = fVar122 + fVar122 * auVar154._16_4_;
          fVar124 = fVar124 + fVar124 * auVar154._20_4_;
          fVar125 = fVar125 + fVar125 * auVar154._24_4_;
          fVar126 = fVar126 + fVar126 * auVar154._28_4_;
          auVar132._4_4_ = __real_322bcc77;
          auVar132._0_4_ = __real_322bcc77;
          auVar132._8_4_ = __real_322bcc77;
          auVar132._12_4_ = __real_322bcc77;
          auVar132._16_4_ = __real_322bcc77;
          auVar132._20_4_ = __real_322bcc77;
          auVar132._24_4_ = __real_322bcc77;
          auVar132._28_4_ = __real_322bcc77;
          auVar154 = vcmpps_avx(auVar132,auVar100,2);
          uVar3 = auVar154._0_4_;
          auVar42._0_4_ = (uint)(fVar32 * fVar107) & uVar3;
          uVar4 = auVar154._4_4_;
          auVar42._4_4_ = (uint)(fVar48 * fVar118) & uVar4;
          uVar108 = auVar154._8_4_;
          auVar42._8_4_ = (uint)(fVar49 * fVar120) & uVar108;
          uVar119 = auVar154._12_4_;
          auVar42._12_4_ = (uint)(fVar50 * fVar121) & uVar119;
          uVar78 = auVar154._16_4_;
          auVar42._16_4_ = (uint)(fVar51 * fVar122) & uVar78;
          uVar88 = auVar154._20_4_;
          auVar42._20_4_ = (uint)(fVar52 * fVar124) & uVar88;
          uVar123 = auVar154._24_4_;
          auVar42._24_4_ = (uint)(fVar53 * fVar125) & uVar123;
          uVar146 = auVar154._28_4_;
          auVar42._28_4_ = (uint)(fVar54 * fVar126) & uVar146;
          auVar62._0_4_ = (uint)(fVar55 * fVar107) & uVar3;
          auVar62._4_4_ = (uint)(fVar71 * fVar118) & uVar4;
          auVar62._8_4_ = (uint)(fVar72 * fVar120) & uVar108;
          auVar62._12_4_ = (uint)(fVar73 * fVar121) & uVar119;
          auVar62._16_4_ = (uint)(fVar74 * fVar122) & uVar78;
          auVar62._20_4_ = (uint)(fVar75 * fVar124) & uVar88;
          auVar62._24_4_ = (uint)(fVar76 * fVar125) & uVar123;
          auVar62._28_4_ = (uint)(fVar77 * fVar126) & uVar146;
          auVar81._0_4_ = (uint)(fVar79 * fVar107) & uVar3;
          auVar81._4_4_ = (uint)(fVar85 * fVar118) & uVar4;
          auVar81._8_4_ = (uint)(fVar86 * fVar120) & uVar108;
          auVar81._12_4_ = (uint)(fVar87 * fVar121) & uVar119;
          auVar81._16_4_ = (uint)(fVar89 * fVar122) & uVar78;
          auVar81._20_4_ = (uint)(fVar91 * fVar124) & uVar88;
          auVar81._24_4_ = (uint)(fVar92 * fVar125) & uVar123;
          auVar81._28_4_ = (uint)(fVar93 * fVar126) & uVar146;
          auVar95._0_4_ = (uint)(fVar152 * fVar107) & uVar3;
          auVar95._4_4_ = (uint)(fVar160 * fVar118) & uVar4;
          auVar95._8_4_ = (uint)(fVar161 * fVar120) & uVar108;
          auVar95._12_4_ = (uint)(fVar162 * fVar121) & uVar119;
          auVar95._16_4_ = (uint)(fVar163 * fVar122) & uVar78;
          auVar95._20_4_ = (uint)(fVar164 * fVar124) & uVar88;
          auVar95._24_4_ = (uint)(fVar165 * fVar125) & uVar123;
          auVar95._28_4_ = (uint)(fVar166 * fVar126) & uVar146;
          auVar154 = vcmpps_avx(auVar132,auVar100,6);
          auVar101._0_4_ = auVar154._0_4_ & (uint)__real_3f800000;
          auVar101._4_4_ = auVar154._4_4_ & (uint)__real_3f800000;
          auVar101._8_4_ = auVar154._8_4_ & (uint)__real_3f800000;
          auVar101._12_4_ = auVar154._12_4_ & (uint)__real_3f800000;
          auVar101._16_4_ = auVar154._16_4_ & (uint)__real_3f800000;
          auVar101._20_4_ = auVar154._20_4_ & (uint)__real_3f800000;
          auVar101._24_4_ = auVar154._24_4_ & (uint)__real_3f800000;
          auVar101._28_4_ = auVar154._28_4_ & (uint)__real_3f800000;
          auVar102._16_16_ = auVar57;
          auVar102._0_16_ = auVar58;
          _local_400 = vmaskmovps_avx(auVar102,auVar42);
          _local_3e0 = vmaskmovps_avx(auVar102,auVar62);
          _local_3c0 = vmaskmovps_avx(auVar102,auVar81);
          _local_3a0 = vmaskmovps_avx(auVar102,auVar95 | auVar101);
        }
      }
      local_220 = vshufps_avx(auVar128,auVar110,0x88);
      auVar103._16_16_ = _local_3a0;
      auVar103._0_16_ = local_3c0._0_16_;
      auVar80 = vperm2f128_avx(_local_3c0,_local_3a0,0x31);
      auVar137._16_16_ = _local_3e0;
      auVar137._0_16_ = local_400._0_16_;
      auVar109 = vperm2f128_avx(_local_400,_local_3e0,0x31);
      auVar149._16_16_ = local_3c0._0_16_;
      auVar149._0_16_ = _local_3a0;
      auVar154 = vshufps_avx(auVar149,auVar149,0x14);
      auVar170._8_8_ = local_3c0;
      auVar170._0_8_ = local_3c0;
      auVar170._16_8_ = local_3a0;
      auVar170._24_8_ = local_3a0;
      auVar154 = vblendps_avx(auVar170,auVar154,0x48);
      auVar171._16_16_ = local_400._0_16_;
      auVar171._0_16_ = _local_3e0;
      auVar97 = vshufps_avx(auVar171,auVar171,0xe1);
      auVar97 = vblendps_avx(auVar137,auVar97,0x12);
      local_180 = vblendps_avx(auVar97,auVar154,0xcc);
      auVar154 = vshufps_avx(auVar149,auVar149,0xb4);
      auVar154 = vblendps_avx(auVar103,auVar154,0x48);
      auVar34 = vshufps_avx(auVar171,auVar171,0xeb);
      auVar97 = vshufpd_avx(auVar137,auVar137,5);
      auVar97 = vblendps_avx(auVar97,auVar34,0x12);
      local_160 = vblendps_avx(auVar97,auVar154,0xcc);
      auVar34 = vperm2f128_avx(_local_3a0,_local_3c0,0x31);
      auVar154 = vshufps_avx(auVar34,auVar34,0x14);
      auVar112._8_8_ = auVar80._0_8_;
      auVar112._0_8_ = auVar80._0_8_;
      auVar112._16_8_ = auVar80._16_8_;
      auVar112._24_8_ = auVar80._16_8_;
      auVar154 = vblendps_avx(auVar112,auVar154,0x48);
      auVar155 = vperm2f128_avx(_local_3e0,_local_400,0x31);
      auVar97 = vshufps_avx(auVar155,auVar155,0xe1);
      auVar97 = vblendps_avx(auVar109,auVar97,0x12);
      local_140 = vblendps_avx(auVar97,auVar154,0xcc);
      auVar154 = vshufps_avx(auVar34,auVar34,0xb4);
      auVar154 = vblendps_avx(auVar80,auVar154,0x48);
      auVar34 = vshufps_avx(auVar155,auVar155,0xeb);
      auVar97 = vshufpd_avx(auVar109,auVar109,5);
      auVar97 = vblendps_avx(auVar97,auVar34,0x12);
      local_120 = vblendps_avx(auVar97,auVar154,0xcc);
      uVar14 = 0xff;
      do {
        uVar3 = 0;
        for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
          uVar3 = uVar3 + 1;
        }
        bVar9 = (byte)uVar3 & 0x3f;
        iVar12 = *(int *)(local_220 + (ulonglong)(uVar3 & 7) * 4);
        auVar154 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar3 << 4)));
        *(undefined1 (*) [16])(param_1 + (longlong)iVar12 * 0x60) = auVar154._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x10 + (longlong)iVar12 * 0x60) = auVar154._16_16_;
        uVar14 = uVar14 & (-2L << bVar9 | 0xfffffffffffffffeU >> 0x40 - bVar9);
      } while (uVar14 != 0);
      uVar15 = uVar15 + 8;
    } while (uVar15 < (uVar10 & 0xfffffff8));
  }
  if ((int)(uint)uVar15 < (int)param_9) {
    auVar5 = vpshufd_avx(ZEXT416((uint)uVar15),0);
    auVar43._16_16_ = auVar5;
    auVar43._0_16_ = auVar5;
    auVar179 = vpshufd_avx(ZEXT416(param_9),0);
    auVar178 = SUB3216(auVar43 | 
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
    auVar185 = SUB3216(auVar43 | 
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10)
    ;
    auVar58 = vpcmpgtd_avx(auVar179,auVar185);
    auVar90 = vpcmpgtd_avx(auVar179,auVar178);
    auVar113._16_16_ = auVar58;
    auVar113._0_16_ = auVar90;
    auVar33 = vpslld_avx(auVar5,3);
    uVar108 = auVar90._0_4_;
    auVar57._0_4_ =
         uVar108 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    uVar119 = auVar90._4_4_;
    auVar57._4_4_ = uVar119 & _UNK_150b519c4;
    uVar78 = auVar90._8_4_;
    auVar57._8_4_ = uVar78 & _UNK_150b519c8;
    uVar88 = auVar90._12_4_;
    auVar57._12_4_ = uVar88 & _UNK_150b519cc;
    uVar123 = auVar58._0_4_;
    auVar5 = vpand_avx(auVar58,auVar33);
    lVar20 = auVar5._0_4_ + param_2;
    auVar5 = vpand_avx(auVar90,auVar33);
    vextractps_avx(auVar57,1);
    vextractps_avx(auVar57,2);
    vextractps_avx(auVar57,3);
    auVar127 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)(uVar123 & _UNK_150b519f0) + lVar20)),4);
    auVar57 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)
                                           (uVar108 &
                                           ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004
                                           ) + param_2 + auVar5._0_4_)),4);
    auVar90 = vpand_avx(auVar90,auVar57);
    lVar24 = auVar90._0_4_ + param_3;
    uVar10 = *(uint *)((ulonglong)
                       (uVar108 &
                       ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c) +
                      lVar24);
    auVar56 = ZEXT416(*(uint *)((ulonglong)
                                (uVar108 &
                                ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                ) + lVar24));
    auVar33 = ZEXT416(uVar10);
    auVar90 = vpand_avx(auVar58,auVar127);
    param_3 = auVar90._0_4_ + param_3;
    uVar3 = *(uint *)((ulonglong)(uVar123 & _UNK_150b50d70) + param_3);
    uVar4 = *(uint *)((ulonglong)(uVar123 & _UNK_150b50d90) + param_3);
    auVar147._4_4_ = __real_00000001;
    auVar147._0_4_ = __real_00000001;
    auVar147._8_4_ = __real_00000001;
    auVar147._12_4_ = __real_00000001;
    auVar90 = vpcmpeqd_avx(auVar147,ZEXT416(uVar4));
    auVar57 = vpcmpeqd_avx(auVar147,auVar33);
    auVar63._16_16_ = auVar90;
    auVar63._0_16_ = auVar57;
    auVar113 = auVar113 & auVar63;
    auVar90 = ZEXT416(uVar4);
    if ((((((((SUB321(auVar113 >> 0x1f,0) & 1) != 0 || (SUB321(auVar113 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar113 >> 0x5f,0) & 1) != 0) || SUB321(auVar113 >> 0x7f,0) != '\0') ||
          (SUB321(auVar113 >> 0x9f,0) & 1) != 0) || SUB321(auVar113 >> 0xbf,0) != '\0') ||
        (SUB321(auVar113 >> 0xdf,0) & 1) != 0) || auVar113[0x1f] < '\0') {
      auVar57 = vpcmpeqd_avx(auVar147,auVar90);
      auVar127 = vpcmpeqd_avx(auVar147,auVar33);
      auVar104._0_4_ = auVar127._0_4_ & uVar108;
      auVar104._4_4_ = auVar127._4_4_ & uVar119;
      auVar104._8_4_ = auVar127._8_4_ & uVar78;
      auVar104._12_4_ = auVar127._12_4_ & uVar88;
      auVar104._16_4_ = auVar57._0_4_ & uVar123;
      auVar104._20_4_ = auVar57._4_4_ & auVar58._4_4_;
      auVar104._24_4_ = auVar57._8_4_ & auVar58._8_4_;
      auVar104._28_4_ = auVar57._12_4_ & auVar58._12_4_;
      auVar154 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),ZEXT2032(CONCAT416(uVar3,auVar56)),
                               auVar104);
      auVar153 = auVar154._0_16_;
      iVar26 = vextractps_avx(auVar153,0);
      iVar23 = vextractps_avx(auVar153,1);
      auVar57 = auVar154._16_16_;
      iVar12 = vextractps_avx(auVar57,0);
      lVar24 = (longlong)iVar12;
      iVar12 = vextractps_avx(auVar57,1);
      lVar16 = (longlong)iVar12;
      iVar12 = vextractps_avx(auVar57,2);
      lVar22 = (longlong)iVar12;
      iVar19 = vextractps_avx(auVar57,3);
      auVar7._4_4_ = _UNK_150b50d44;
      auVar7._0_4_ = ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
      auVar7._8_4_ = _UNK_150b50d48;
      auVar7._12_4_ = _UNK_150b50d4c;
      auVar7._16_4_ = _UNK_150b50d50;
      auVar7._20_4_ = _UNK_150b50d54;
      auVar7._24_4_ = _UNK_150b50d58;
      auVar7._28_4_ = _UNK_150b50d5c;
      auVar154 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar7,auVar104);
      auVar59 = auVar154._0_16_;
      auVar127 = auVar154._16_16_;
      iVar29 = vextractps_avx(auVar127,0);
      iVar12 = vextractps_avx(auVar127,1);
      iVar30 = vextractps_avx(auVar127,2);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar29 + lVar24)),
                              ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar16)),0x10);
      iVar31 = vextractps_avx(auVar127,3);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)((longlong)param_4 + iVar30 + lVar22)),0x20);
      auVar8._4_4_ = _UNK_150b50d64;
      auVar8._0_4_ = ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
      auVar8._8_4_ = _UNK_150b50d68;
      auVar8._12_4_ = _UNK_150b50d6c;
      auVar8._16_4_ = _UNK_150b50d70;
      auVar8._20_4_ = _UNK_150b50d74;
      auVar8._24_4_ = _UNK_150b50d78;
      auVar8._28_4_ = _UNK_150b50d7c;
      auVar154 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar8,auVar104);
      auVar167 = auVar154._0_16_;
      auVar60 = auVar154._16_16_;
      iVar29 = vextractps_avx(auVar60,0);
      iVar12 = vextractps_avx(auVar60,1);
      auVar127 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar29 + lVar24)),
                               ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar16)),0x10);
      iVar12 = vextractps_avx(auVar60,2);
      lVar27 = (longlong)iVar26;
      auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar22)),0x20
                              );
      iVar12 = vextractps_avx(auVar153,2);
      lVar21 = (longlong)iVar19;
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)((longlong)param_4 + iVar31 + lVar21)),0x30);
      lVar25 = (longlong)iVar23;
      iVar19 = vextractps_avx(auVar60,3);
      auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)((longlong)param_4 + iVar19 + lVar21)),0x30
                              );
      iVar19 = vextractps_avx(auVar153,3);
      iVar23 = vextractps_avx(auVar59,0);
      iVar26 = vextractps_avx(auVar167,0);
      iVar29 = vextractps_avx(auVar59,1);
      auVar153 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar23 + lVar27)),
                               ZEXT416(*(uint *)((longlong)param_4 + iVar29 + lVar25)),0x10);
      iVar23 = vextractps_avx(auVar167,1);
      lVar18 = (longlong)iVar12;
      auVar60 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + iVar26 + lVar27)),
                              ZEXT416(*(uint *)((longlong)param_4 + iVar23 + lVar25)),0x10);
      iVar12 = vextractps_avx(auVar59,2);
      auVar153 = vinsertps_avx(auVar153,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar18)),0x20
                              );
      iVar12 = vextractps_avx(auVar167,2);
      lVar28 = (longlong)iVar19;
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar18)),0x20);
      iVar12 = vextractps_avx(auVar59,3);
      auVar153 = vinsertps_avx(auVar153,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar28)),0x30
                              );
      iVar12 = vextractps_avx(auVar167,3);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)((longlong)param_4 + iVar12 + lVar28)),0x30);
      auVar59 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar24)),
                              ZEXT416(*(uint *)((longlong)param_4 + lVar16)),0x10);
      auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)((longlong)param_4 + lVar22)),0x20);
      auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)((longlong)param_4 + lVar21)),0x30);
      auVar167 = vinsertps_avx(ZEXT416(*(uint *)((longlong)param_4 + lVar27)),
                               ZEXT416(*(uint *)((longlong)param_4 + lVar25)),0x10);
      auVar167 = vinsertps_avx(auVar167,ZEXT416(*(uint *)((longlong)param_4 + lVar18)),0x20);
      auVar167 = vinsertps_avx(auVar167,ZEXT416(*(uint *)((longlong)param_4 + lVar28)),0x30);
      auVar172._16_16_ = auVar59;
      auVar172._0_16_ = auVar167;
      auVar64._16_16_ = auVar57;
      auVar64._0_16_ = auVar153;
      auVar157._16_16_ = auVar127;
      auVar157._0_16_ = auVar60;
      auVar177._0_4_ = auVar167._0_4_ * auVar167._0_4_;
      auVar177._4_4_ = auVar167._4_4_ * auVar167._4_4_;
      auVar177._8_4_ = auVar167._8_4_ * auVar167._8_4_;
      auVar177._12_4_ = auVar167._12_4_ * auVar167._12_4_;
      auVar177._16_4_ = auVar59._0_4_ * auVar59._0_4_;
      auVar177._20_4_ = auVar59._4_4_ * auVar59._4_4_;
      auVar177._24_4_ = auVar59._8_4_ * auVar59._8_4_;
      auVar177._28_4_ = auVar59._12_4_ * auVar59._12_4_;
      auVar181._4_4_ = __real_3f800000;
      auVar181._0_4_ = __real_3f800000;
      auVar181._8_4_ = __real_3f800000;
      auVar181._12_4_ = __real_3f800000;
      auVar181._16_4_ = __real_3f800000;
      auVar181._20_4_ = __real_3f800000;
      auVar181._24_4_ = __real_3f800000;
      auVar181._28_4_ = __real_3f800000;
      auVar154 = vsubps_avx(auVar181,auVar177);
      auVar182._0_4_ = auVar153._0_4_ * auVar153._0_4_;
      auVar182._4_4_ = auVar153._4_4_ * auVar153._4_4_;
      auVar182._8_4_ = auVar153._8_4_ * auVar153._8_4_;
      auVar182._12_4_ = auVar153._12_4_ * auVar153._12_4_;
      auVar182._16_4_ = auVar57._0_4_ * auVar57._0_4_;
      auVar182._20_4_ = auVar57._4_4_ * auVar57._4_4_;
      auVar182._24_4_ = auVar57._8_4_ * auVar57._8_4_;
      auVar182._28_4_ = auVar57._12_4_ * auVar57._12_4_;
      auVar154 = vsubps_avx(auVar154,auVar182);
      auVar183._0_4_ = auVar60._0_4_ * auVar60._0_4_;
      auVar183._4_4_ = auVar60._4_4_ * auVar60._4_4_;
      auVar183._8_4_ = auVar60._8_4_ * auVar60._8_4_;
      auVar183._12_4_ = auVar60._12_4_ * auVar60._12_4_;
      auVar183._16_4_ = auVar127._0_4_ * auVar127._0_4_;
      auVar183._20_4_ = auVar127._4_4_ * auVar127._4_4_;
      auVar183._24_4_ = auVar127._8_4_ * auVar127._8_4_;
      auVar183._28_4_ = auVar127._12_4_ * auVar127._12_4_;
      auVar97 = vsubps_avx(auVar154,auVar183);
      auVar154 = vcmpps_avx(ZEXT1632((undefined1  [16])0x0),auVar97,1);
      auVar97 = vsqrtps_avx(auVar97);
      auVar133._0_4_ = auVar97._0_4_ & auVar154._0_4_;
      auVar133._4_4_ = auVar97._4_4_ & auVar154._4_4_;
      auVar133._8_4_ = auVar97._8_4_ & auVar154._8_4_;
      auVar133._12_4_ = auVar97._12_4_ & auVar154._12_4_;
      auVar133._16_4_ = auVar97._16_4_ & auVar154._16_4_;
      auVar133._20_4_ = auVar97._20_4_ & auVar154._20_4_;
      auVar133._24_4_ = auVar97._24_4_ & auVar154._24_4_;
      auVar133._28_4_ = auVar97._28_4_ & auVar154._28_4_;
      _local_620 = vmaskmovps_avx(auVar104,auVar172);
      _local_600 = vmaskmovps_avx(auVar104,auVar64);
      _local_5e0 = vmaskmovps_avx(auVar104,auVar157);
      _local_5c0 = vmaskmovps_avx(auVar104,auVar133);
    }
    auVar57 = vpcmpeqd_avx(auVar147,auVar90);
    auVar127 = vpcmpeqd_avx(auVar147,auVar33);
    auVar147 = vpcmpgtd_avx(auVar179,auVar185);
    auVar185 = vpcmpgtd_avx(auVar179,auVar178);
    auVar44._0_4_ = ~auVar127._0_4_ & auVar185._0_4_;
    auVar44._4_4_ = ~auVar127._4_4_ & auVar185._4_4_;
    auVar44._8_4_ = ~auVar127._8_4_ & auVar185._8_4_;
    auVar44._12_4_ = ~auVar127._12_4_ & auVar185._12_4_;
    auVar44._16_4_ = ~auVar57._0_4_ & auVar147._0_4_;
    auVar44._20_4_ = ~auVar57._4_4_ & auVar147._4_4_;
    auVar44._24_4_ = ~auVar57._8_4_ & auVar147._8_4_;
    auVar44._28_4_ = ~auVar57._12_4_ & auVar147._12_4_;
    iVar12 = vmovmskps_avx(auVar44);
    if (iVar12 != 0) {
      vpmovsxdq_avx(ZEXT416(uVar3));
      auVar185 = vpshufd_avx(ZEXT416(uVar3),0xee);
      vpmovsxdq_avx(auVar56);
      auVar56 = vpshufd_avx(auVar56,0xee);
      vpmovsxdq_avx(auVar185);
      vpmovsxdq_avx(auVar56);
      auVar158._0_4_ = ~auVar127._0_4_ & uVar108;
      auVar158._4_4_ = ~auVar127._4_4_ & uVar119;
      auVar158._8_4_ = ~auVar127._8_4_ & uVar78;
      auVar158._12_4_ = ~auVar127._12_4_ & uVar88;
      auVar158._16_4_ = ~auVar57._0_4_ & uVar123;
      auVar158._20_4_ = ~auVar57._4_4_ & auVar58._4_4_;
      auVar158._24_4_ = ~auVar57._8_4_ & auVar58._8_4_;
      auVar158._28_4_ = ~auVar57._12_4_ & auVar58._12_4_;
      auVar58._4_4_ = __real_00000002;
      auVar58._0_4_ = __real_00000002;
      auVar58._8_4_ = __real_00000002;
      auVar58._12_4_ = __real_00000002;
      auVar90 = vpcmpgtd_avx(auVar58,auVar90);
      auVar57 = vpcmpgtd_avx(auVar58,auVar33);
      auVar65._0_4_ = auVar158._0_4_ & auVar57._0_4_;
      auVar65._4_4_ = auVar158._4_4_ & auVar57._4_4_;
      auVar65._8_4_ = auVar158._8_4_ & auVar57._8_4_;
      auVar65._12_4_ = auVar158._12_4_ & auVar57._12_4_;
      auVar65._16_4_ = auVar158._16_4_ & auVar90._0_4_;
      auVar65._20_4_ = auVar158._20_4_ & auVar90._4_4_;
      auVar65._24_4_ = auVar158._24_4_ & auVar90._8_4_;
      auVar65._28_4_ = auVar158._28_4_ & auVar90._12_4_;
      auVar154 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      iVar19 = vmovmskps_avx(auVar65);
      auVar97 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      if ((iVar19 == 0) || (auVar97 = auVar65, (char)iVar12 != (char)iVar19)) {
        auVar34 = vcmpps_avx(auVar154,auVar154,0xf);
        auVar114._0_4_ = auVar97._0_4_ ^ auVar34._0_4_;
        auVar114._4_4_ = auVar97._4_4_ ^ auVar34._4_4_;
        auVar114._8_4_ = auVar97._8_4_ ^ auVar34._8_4_;
        auVar114._12_4_ = auVar97._12_4_ ^ auVar34._12_4_;
        auVar114._16_4_ = auVar97._16_4_ ^ auVar34._16_4_;
        auVar114._20_4_ = auVar97._20_4_ ^ auVar34._20_4_;
        auVar114._24_4_ = auVar97._24_4_ ^ auVar34._24_4_;
        auVar114._28_4_ = auVar97._28_4_ ^ auVar34._28_4_;
        auVar97 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar90._12_4_ = 0;
        auVar90._0_12_ = ZEXT812(0);
        auVar34 = ZEXT1232(ZEXT812(0)) << 0x20;
        if (0.0 < param_6) {
          auVar90 = vpcmpeqd_avx(auVar90 << 0x20,auVar90 << 0x20);
          auVar185._0_4_ = uVar4 + auVar90._0_4_;
          auVar185._4_4_ = auVar90._4_4_;
          auVar185._8_4_ = auVar90._8_4_;
          auVar185._12_4_ = auVar90._12_4_;
          auVar153._0_4_ = uVar10 + auVar90._0_4_;
          auVar153._4_4_ = auVar90._4_4_;
          auVar153._8_4_ = auVar90._8_4_;
          auVar153._12_4_ = auVar90._12_4_;
          auVar82._16_16_ = auVar185;
          auVar82._0_16_ = auVar153;
          if (__real_3f800000 <= param_6) {
            auVar139._0_4_ = auVar158._0_4_ & auVar114._0_4_;
            auVar139._4_4_ = auVar158._4_4_ & auVar114._4_4_;
            auVar139._8_4_ = auVar158._8_4_ & auVar114._8_4_;
            auVar139._12_4_ = auVar158._12_4_ & auVar114._12_4_;
            auVar139._16_4_ = auVar158._16_4_ & auVar114._16_4_;
            auVar139._20_4_ = auVar158._20_4_ & auVar114._20_4_;
            auVar139._24_4_ = auVar158._24_4_ & auVar114._24_4_;
            auVar139._28_4_ = auVar158._28_4_ & auVar114._28_4_;
            auVar60._0_12_ = ZEXT812(0);
            auVar60._12_4_ = 0;
            auVar34 = ZEXT1632(auVar60);
            auVar97 = vblendvps_avx(ZEXT1632(auVar60),auVar82,auVar139);
            auVar154 = auVar97;
          }
          else {
            auVar90 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
            auVar154 = vcvtdq2ps_avx(auVar82);
            auVar167._0_4_ = auVar90._0_4_ * auVar154._0_4_;
            auVar167._4_4_ = auVar90._4_4_ * auVar154._4_4_;
            auVar167._8_4_ = auVar90._8_4_ * auVar154._8_4_;
            auVar167._12_4_ = auVar90._12_4_ * auVar154._12_4_;
            auVar173._16_4_ = auVar90._0_4_ * auVar154._16_4_;
            auVar173._0_16_ = auVar167;
            auVar173._20_4_ = auVar90._4_4_ * auVar154._20_4_;
            auVar173._24_4_ = auVar90._8_4_ * auVar154._24_4_;
            auVar173._28_4_ = auVar90._12_4_ * auVar154._28_4_;
            auVar138._0_4_ = auVar158._0_4_ & auVar114._0_4_;
            auVar138._4_4_ = auVar158._4_4_ & auVar114._4_4_;
            auVar138._8_4_ = auVar158._8_4_ & auVar114._8_4_;
            auVar138._12_4_ = auVar158._12_4_ & auVar114._12_4_;
            auVar138._16_4_ = auVar158._16_4_ & auVar114._16_4_;
            auVar138._20_4_ = auVar158._20_4_ & auVar114._20_4_;
            auVar138._24_4_ = auVar158._24_4_ & auVar114._24_4_;
            auVar138._28_4_ = auVar158._28_4_ & auVar114._28_4_;
            auVar154 = vroundps_avx(auVar173,9);
            auVar59._0_4_ = (int)auVar154._0_4_;
            auVar59._4_4_ = (int)auVar154._4_4_;
            auVar59._8_4_ = (int)auVar154._8_4_;
            auVar59._12_4_ = (int)auVar154._12_4_;
            auVar66._16_4_ = (int)auVar154._16_4_;
            auVar66._0_16_ = auVar59;
            auVar66._20_4_ = (int)auVar154._20_4_;
            auVar66._24_4_ = (int)auVar154._24_4_;
            auVar66._28_4_ = (int)auVar154._28_4_;
            auVar90 = vpminsd_avx(auVar66._16_16_,auVar185);
            auVar57 = vpminsd_avx(auVar59,auVar153);
            auVar67._16_16_ = auVar90;
            auVar67._0_16_ = auVar57;
            auVar97 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar67,auVar138);
            auVar34 = ZEXT832(0) << 0x20;
            if (param_7 != '\x01') {
              auVar34 = vsubps_avx(auVar173,auVar154);
            }
            auVar90 = vpcmpeqd_avx(auVar167,auVar167);
            auVar57 = vpsubd_avx(auVar97._0_16_,auVar90);
            auVar90 = vpsubd_avx(auVar97._16_16_,auVar90);
            auVar90 = vpminsd_avx(auVar90,auVar185);
            auVar57 = vpminsd_avx(auVar57,auVar153);
            auVar83._16_16_ = auVar90;
            auVar83._0_16_ = auVar57;
            auVar154 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar83,auVar138);
          }
        }
        local_6a0 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar34,auVar114);
      }
      else {
        local_6a0 = ZEXT432(0) << 0x20;
        auVar97 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      }
      auVar90 = vshufps_avx(ZEXT416(uVar13),ZEXT416(uVar13),0);
      auVar61._0_12_ = ZEXT812(0);
      auVar61._12_4_ = 0;
      vblendps_avx(auVar90,auVar61,10);
      vpmovzxdq_avx(auVar90);
      auVar90 = vpshufd_avx(ZEXT416((uint)(iVar1 * iVar2)),0);
      if (param_8 < 6) {
        auVar57 = vpmulld_avx(auVar97._0_16_,auVar90);
        auVar90 = vpmulld_avx(auVar97._16_16_,auVar90);
        auVar5 = vpmovsxdq_avx(auVar90);
        auVar90 = vpshufd_avx(auVar90,0xee);
        vpmovsxdq_avx(auVar90);
        auVar90 = vpmovsxdq_avx(auVar57);
        auVar57 = vpshufd_avx(auVar57,0xee);
        vpmovsxdq_avx(auVar57);
                    /* WARNING: Could not recover jumptable at 0x000140af6fc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6ba60 + *(int *)(&DAT_151c6ba60 + uVar17 * 4)))
                  (&DAT_151c6ba60,&DAT_151c6ba60 + *(int *)(&DAT_151c6ba60 + uVar17 * 4),
                   auVar90._0_8_,auVar5._0_8_);
        return;
      }
      _local_620 = vmaskmovps_avx(auVar158,ZEXT1632((undefined1  [16])0x0));
      _local_600 = vmaskmovps_avx(auVar158,ZEXT1632((undefined1  [16])0x0));
      _local_5e0 = vmaskmovps_avx(auVar158,ZEXT1632((undefined1  [16])0x0));
      auVar45._4_4_ = __real_3f800000;
      auVar45._0_4_ = __real_3f800000;
      auVar45._8_4_ = __real_3f800000;
      auVar45._12_4_ = __real_3f800000;
      auVar45._16_4_ = __real_3f800000;
      auVar45._20_4_ = __real_3f800000;
      auVar45._24_4_ = __real_3f800000;
      auVar45._28_4_ = __real_3f800000;
      _local_5c0 = vmaskmovps_avx(auVar158,auVar45);
      auVar57 = vpcmpeqd_avx(auVar97._16_16_,auVar154._16_16_);
      auVar58 = vpcmpeqd_avx(auVar97._0_16_,auVar154._0_16_);
      auVar68._16_16_ = auVar57;
      auVar68._0_16_ = auVar58;
      auVar97 = auVar158 & ~auVar68;
      if ((((((((SUB321(auVar97 >> 0x1f,0) & 1) != 0 || (SUB321(auVar97 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar97 >> 0x5f,0) & 1) != 0) || SUB321(auVar97 >> 0x7f,0) != '\0') ||
            (SUB321(auVar97 >> 0x9f,0) & 1) != 0) || SUB321(auVar97 >> 0xbf,0) != '\0') ||
          (SUB321(auVar97 >> 0xdf,0) & 1) != 0) || auVar97[0x1f] < '\0') {
        auVar159._0_4_ = ~auVar58._0_4_ & auVar158._0_4_;
        auVar159._4_4_ = ~auVar58._4_4_ & auVar158._4_4_;
        auVar159._8_4_ = ~auVar58._8_4_ & auVar158._8_4_;
        auVar159._12_4_ = ~auVar58._12_4_ & auVar158._12_4_;
        auVar159._16_4_ = ~auVar57._0_4_ & auVar158._16_4_;
        auVar159._20_4_ = ~auVar57._4_4_ & auVar158._20_4_;
        auVar159._24_4_ = ~auVar57._8_4_ & auVar158._24_4_;
        auVar159._28_4_ = ~auVar57._12_4_ & auVar158._28_4_;
        if (param_8 < 6) {
          auVar57 = vpmulld_avx(auVar90,auVar154._0_16_);
          auVar5 = vpmulld_avx(auVar90,auVar154._16_16_);
          vpmovsxdq_avx(auVar5);
          auVar5 = vpshufd_avx(auVar5,0xee);
          vpmovsxdq_avx(auVar5);
          auVar5 = vpmovsxdq_avx(auVar57);
          auVar90 = vpshufd_avx(auVar57,0xee);
          vpmovsxdq_avx(auVar90);
                    /* WARNING: Could not recover jumptable at 0x000140af835e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6ba78 + *(int *)(&DAT_151c6ba78 + uVar17 * 4)))
                    (&DAT_151c6ba78,&DAT_151c6ba78 + *(int *)(&DAT_151c6ba78 + uVar17 * 4),
                     auVar5._0_8_);
          return;
        }
        auVar154 = vmaskmovps_avx(auVar159,ZEXT1632((undefined1  [16])0x0));
        auVar97 = vmaskmovps_avx(auVar159,ZEXT1632((undefined1  [16])0x0));
        auVar34 = vmaskmovps_avx(auVar159,ZEXT1632((undefined1  [16])0x0));
        auVar46._4_4_ = __real_3f800000;
        auVar46._0_4_ = __real_3f800000;
        auVar46._8_4_ = __real_3f800000;
        auVar46._12_4_ = __real_3f800000;
        auVar46._16_4_ = __real_3f800000;
        auVar46._20_4_ = __real_3f800000;
        auVar46._24_4_ = __real_3f800000;
        auVar46._28_4_ = __real_3f800000;
        auVar80 = vmaskmovps_avx(auVar159,auVar46);
        local_4a0 = auVar154._0_4_;
        fStack_49c = auVar154._4_4_;
        fStack_498 = auVar154._8_4_;
        fStack_494 = auVar154._12_4_;
        fStack_490 = auVar154._16_4_;
        fStack_48c = auVar154._20_4_;
        fStack_488 = auVar154._24_4_;
        fStack_484 = auVar154._28_4_;
        local_480 = auVar97._0_4_;
        fStack_47c = auVar97._4_4_;
        fStack_478 = auVar97._8_4_;
        fStack_474 = auVar97._12_4_;
        fStack_470 = auVar97._16_4_;
        fStack_46c = auVar97._20_4_;
        fStack_468 = auVar97._24_4_;
        fStack_464 = auVar97._28_4_;
        local_460 = auVar34._0_4_;
        fStack_45c = auVar34._4_4_;
        fStack_458 = auVar34._8_4_;
        fStack_454 = auVar34._12_4_;
        fStack_450 = auVar34._16_4_;
        fStack_44c = auVar34._20_4_;
        fStack_448 = auVar34._24_4_;
        fStack_444 = auVar34._28_4_;
        local_440 = auVar80._0_4_;
        fStack_43c = auVar80._4_4_;
        fStack_438 = auVar80._8_4_;
        fStack_434 = auVar80._12_4_;
        fStack_430 = auVar80._16_4_;
        fStack_42c = auVar80._20_4_;
        fStack_428 = auVar80._24_4_;
        fStack_424 = auVar80._28_4_;
        auVar143._0_4_ =
             (float)local_620._0_4_ * local_4a0 + (float)local_5e0._0_4_ * local_460 +
             (float)local_600._0_4_ * local_480 + (float)local_5c0._0_4_ * local_440;
        auVar143._4_4_ =
             (float)local_620._4_4_ * fStack_49c + (float)local_5e0._4_4_ * fStack_45c +
             (float)local_600._4_4_ * fStack_47c + (float)local_5c0._4_4_ * fStack_43c;
        auVar143._8_4_ =
             fStack_618 * fStack_498 + fStack_5d8 * fStack_458 +
             fStack_5f8 * fStack_478 + fStack_5b8 * fStack_438;
        auVar143._12_4_ =
             fStack_614 * fStack_494 + fStack_5d4 * fStack_454 +
             fStack_5f4 * fStack_474 + fStack_5b4 * fStack_434;
        auVar143._16_4_ =
             fStack_610 * fStack_490 + fStack_5d0 * fStack_450 +
             fStack_5f0 * fStack_470 + fStack_5b0 * fStack_430;
        auVar143._20_4_ =
             fStack_60c * fStack_48c + fStack_5cc * fStack_44c +
             fStack_5ec * fStack_46c + fStack_5ac * fStack_42c;
        auVar143._24_4_ =
             fStack_608 * fStack_488 + fStack_5c8 * fStack_448 +
             fStack_5e8 * fStack_468 + fStack_5a8 * fStack_428;
        auVar143._28_4_ =
             fStack_604 * fStack_484 + fStack_5c4 * fStack_444 +
             fStack_5e4 * fStack_464 + fStack_5a4 * fStack_424;
        auVar154 = vcmpps_avx(ZEXT432(0) << 0x20,auVar143,6);
        auVar154 = vcvtdq2ps_avx(auVar154 |
                                 ___ymm_0000000100000001000000010000000100000001000000010000000100000001
                                );
        fVar152 = local_6a0._0_4_;
        fVar160 = local_6a0._4_4_;
        fVar161 = local_6a0._8_4_;
        fVar162 = local_6a0._12_4_;
        fVar163 = local_6a0._16_4_;
        fVar164 = local_6a0._20_4_;
        fVar165 = local_6a0._24_4_;
        fVar166 = local_6a0._28_4_;
        auVar150._4_4_ = __real_3f800000;
        auVar150._0_4_ = __real_3f800000;
        auVar150._8_4_ = __real_3f800000;
        auVar150._12_4_ = __real_3f800000;
        auVar150._16_4_ = __real_3f800000;
        auVar150._20_4_ = __real_3f800000;
        auVar150._24_4_ = __real_3f800000;
        auVar150._28_4_ = __real_3f800000;
        auVar97 = vsubps_avx(auVar150,local_6a0);
        fVar107 = auVar97._0_4_ * auVar154._0_4_;
        fVar118 = auVar97._4_4_ * auVar154._4_4_;
        fVar120 = auVar97._8_4_ * auVar154._8_4_;
        fVar121 = auVar97._12_4_ * auVar154._12_4_;
        fVar122 = auVar97._16_4_ * auVar154._16_4_;
        fVar124 = auVar97._20_4_ * auVar154._20_4_;
        fVar125 = auVar97._24_4_ * auVar154._24_4_;
        fVar126 = auVar97._28_4_ * auVar154._28_4_;
        fVar32 = fVar152 * local_4a0 + fVar107 * (float)local_620._0_4_;
        fVar48 = fVar160 * fStack_49c + fVar118 * (float)local_620._4_4_;
        fVar49 = fVar161 * fStack_498 + fVar120 * fStack_618;
        fVar50 = fVar162 * fStack_494 + fVar121 * fStack_614;
        fVar51 = fVar163 * fStack_490 + fVar122 * fStack_610;
        fVar52 = fVar164 * fStack_48c + fVar124 * fStack_60c;
        fVar53 = fVar165 * fStack_488 + fVar125 * fStack_608;
        fVar54 = fVar166 * fStack_484 + fVar126 * fStack_604;
        fVar55 = fVar152 * local_480 + fVar107 * (float)local_600._0_4_;
        fVar71 = fVar160 * fStack_47c + fVar118 * (float)local_600._4_4_;
        fVar72 = fVar161 * fStack_478 + fVar120 * fStack_5f8;
        fVar73 = fVar162 * fStack_474 + fVar121 * fStack_5f4;
        fVar74 = fVar163 * fStack_470 + fVar122 * fStack_5f0;
        fVar75 = fVar164 * fStack_46c + fVar124 * fStack_5ec;
        fVar76 = fVar165 * fStack_468 + fVar125 * fStack_5e8;
        fVar77 = fVar166 * fStack_464 + fVar126 * fStack_5e4;
        fVar79 = fVar152 * local_460 + fVar107 * (float)local_5e0._0_4_;
        fVar85 = fVar160 * fStack_45c + fVar118 * (float)local_5e0._4_4_;
        fVar86 = fVar161 * fStack_458 + fVar120 * fStack_5d8;
        fVar87 = fVar162 * fStack_454 + fVar121 * fStack_5d4;
        fVar89 = fVar163 * fStack_450 + fVar122 * fStack_5d0;
        fVar91 = fVar164 * fStack_44c + fVar124 * fStack_5cc;
        fVar92 = fVar165 * fStack_448 + fVar125 * fStack_5c8;
        fVar93 = fVar166 * fStack_444 + fVar126 * fStack_5c4;
        fVar152 = fVar152 * local_440 + fVar107 * (float)local_5c0._0_4_;
        fVar160 = fVar160 * fStack_43c + fVar118 * (float)local_5c0._4_4_;
        fVar161 = fVar161 * fStack_438 + fVar120 * fStack_5b8;
        fVar162 = fVar162 * fStack_434 + fVar121 * fStack_5b4;
        fVar163 = fVar163 * fStack_430 + fVar122 * fStack_5b0;
        fVar164 = fVar164 * fStack_42c + fVar124 * fStack_5ac;
        fVar165 = fVar165 * fStack_428 + fVar125 * fStack_5a8;
        fVar166 = fVar166 * fStack_424 + fVar126 * fStack_5a4;
        auVar105._0_4_ = fVar32 * fVar32 + fVar79 * fVar79 + fVar55 * fVar55 + fVar152 * fVar152;
        auVar105._4_4_ = fVar48 * fVar48 + fVar85 * fVar85 + fVar71 * fVar71 + fVar160 * fVar160;
        auVar105._8_4_ = fVar49 * fVar49 + fVar86 * fVar86 + fVar72 * fVar72 + fVar161 * fVar161;
        auVar105._12_4_ = fVar50 * fVar50 + fVar87 * fVar87 + fVar73 * fVar73 + fVar162 * fVar162;
        auVar105._16_4_ = fVar51 * fVar51 + fVar89 * fVar89 + fVar74 * fVar74 + fVar163 * fVar163;
        auVar105._20_4_ = fVar52 * fVar52 + fVar91 * fVar91 + fVar75 * fVar75 + fVar164 * fVar164;
        auVar105._24_4_ = fVar53 * fVar53 + fVar92 * fVar92 + fVar76 * fVar76 + fVar165 * fVar165;
        auVar105._28_4_ = fVar54 * fVar54 + fVar93 * fVar93 + fVar77 * fVar77 + fVar166 * fVar166;
        auVar115._4_4_ = __real_322bcc77;
        auVar115._0_4_ = __real_322bcc77;
        auVar115._8_4_ = __real_322bcc77;
        auVar115._12_4_ = __real_322bcc77;
        auVar115._16_4_ = __real_322bcc77;
        auVar115._20_4_ = __real_322bcc77;
        auVar115._24_4_ = __real_322bcc77;
        auVar115._28_4_ = __real_322bcc77;
        auVar154 = vcmpps_avx(auVar115,auVar105,6);
        auVar97 = vcmpps_avx(auVar115,auVar105,2);
        auVar140._4_4_ = __real_3f000000;
        auVar140._0_4_ = __real_3f000000;
        auVar140._8_4_ = __real_3f000000;
        auVar140._12_4_ = __real_3f000000;
        auVar140._16_4_ = __real_3f000000;
        auVar140._20_4_ = __real_3f000000;
        auVar140._24_4_ = __real_3f000000;
        auVar140._28_4_ = __real_3f000000;
        auVar34 = vrsqrtps_avx(auVar105);
        fVar107 = auVar34._0_4_;
        fVar118 = auVar34._4_4_;
        fVar120 = auVar34._8_4_;
        fVar121 = auVar34._12_4_;
        fVar122 = auVar34._16_4_;
        fVar124 = auVar34._20_4_;
        fVar125 = auVar34._24_4_;
        fVar126 = auVar34._28_4_;
        auVar151._0_4_ = fVar107 * fVar107 * auVar105._0_4_ * __real_3f000000;
        auVar151._4_4_ = fVar118 * fVar118 * auVar105._4_4_ * __real_3f000000;
        auVar151._8_4_ = fVar120 * fVar120 * auVar105._8_4_ * __real_3f000000;
        auVar151._12_4_ = fVar121 * fVar121 * auVar105._12_4_ * __real_3f000000;
        auVar151._16_4_ = fVar122 * fVar122 * auVar105._16_4_ * __real_3f000000;
        auVar151._20_4_ = fVar124 * fVar124 * auVar105._20_4_ * __real_3f000000;
        auVar151._24_4_ = fVar125 * fVar125 * auVar105._24_4_ * __real_3f000000;
        auVar151._28_4_ = fVar126 * fVar126 * auVar105._28_4_ * __real_3f000000;
        auVar34 = vsubps_avx(auVar140,auVar151);
        fVar107 = auVar34._0_4_ * fVar107 + fVar107;
        fVar118 = auVar34._4_4_ * fVar118 + fVar118;
        fVar120 = auVar34._8_4_ * fVar120 + fVar120;
        fVar121 = auVar34._12_4_ * fVar121 + fVar121;
        fVar122 = auVar34._16_4_ * fVar122 + fVar122;
        fVar124 = auVar34._20_4_ * fVar124 + fVar124;
        fVar125 = auVar34._24_4_ * fVar125 + fVar125;
        fVar126 = auVar34._28_4_ * fVar126 + fVar126;
        auVar144._0_4_ = auVar105._0_4_ * __real_3f000000 * fVar107 * fVar107;
        auVar144._4_4_ = auVar105._4_4_ * __real_3f000000 * fVar118 * fVar118;
        auVar144._8_4_ = auVar105._8_4_ * __real_3f000000 * fVar120 * fVar120;
        auVar144._12_4_ = auVar105._12_4_ * __real_3f000000 * fVar121 * fVar121;
        auVar144._16_4_ = auVar105._16_4_ * __real_3f000000 * fVar122 * fVar122;
        auVar144._20_4_ = auVar105._20_4_ * __real_3f000000 * fVar124 * fVar124;
        auVar144._24_4_ = auVar105._24_4_ * __real_3f000000 * fVar125 * fVar125;
        auVar144._28_4_ = auVar105._28_4_ * __real_3f000000 * fVar126 * fVar126;
        auVar34 = vsubps_avx(auVar140,auVar144);
        fVar107 = fVar107 + fVar107 * auVar34._0_4_;
        fVar118 = fVar118 + fVar118 * auVar34._4_4_;
        fVar120 = fVar120 + fVar120 * auVar34._8_4_;
        fVar121 = fVar121 + fVar121 * auVar34._12_4_;
        fVar122 = fVar122 + fVar122 * auVar34._16_4_;
        fVar124 = fVar124 + fVar124 * auVar34._20_4_;
        fVar125 = fVar125 + fVar125 * auVar34._24_4_;
        fVar126 = fVar126 + fVar126 * auVar34._28_4_;
        uVar13 = auVar97._0_4_;
        auVar47._0_4_ = (uint)(fVar32 * fVar107) & uVar13;
        uVar10 = auVar97._4_4_;
        auVar47._4_4_ = (uint)(fVar48 * fVar118) & uVar10;
        uVar3 = auVar97._8_4_;
        auVar47._8_4_ = (uint)(fVar49 * fVar120) & uVar3;
        uVar4 = auVar97._12_4_;
        auVar47._12_4_ = (uint)(fVar50 * fVar121) & uVar4;
        uVar108 = auVar97._16_4_;
        auVar47._16_4_ = (uint)(fVar51 * fVar122) & uVar108;
        uVar119 = auVar97._20_4_;
        auVar47._20_4_ = (uint)(fVar52 * fVar124) & uVar119;
        uVar78 = auVar97._24_4_;
        auVar47._24_4_ = (uint)(fVar53 * fVar125) & uVar78;
        uVar88 = auVar97._28_4_;
        auVar47._28_4_ = (uint)(fVar54 * fVar126) & uVar88;
        auVar69._0_4_ = (uint)(fVar55 * fVar107) & uVar13;
        auVar69._4_4_ = (uint)(fVar71 * fVar118) & uVar10;
        auVar69._8_4_ = (uint)(fVar72 * fVar120) & uVar3;
        auVar69._12_4_ = (uint)(fVar73 * fVar121) & uVar4;
        auVar69._16_4_ = (uint)(fVar74 * fVar122) & uVar108;
        auVar69._20_4_ = (uint)(fVar75 * fVar124) & uVar119;
        auVar69._24_4_ = (uint)(fVar76 * fVar125) & uVar78;
        auVar69._28_4_ = (uint)(fVar77 * fVar126) & uVar88;
        auVar84._0_4_ = (uint)(fVar79 * fVar107) & uVar13;
        auVar84._4_4_ = (uint)(fVar85 * fVar118) & uVar10;
        auVar84._8_4_ = (uint)(fVar86 * fVar120) & uVar3;
        auVar84._12_4_ = (uint)(fVar87 * fVar121) & uVar4;
        auVar84._16_4_ = (uint)(fVar89 * fVar122) & uVar108;
        auVar84._20_4_ = (uint)(fVar91 * fVar124) & uVar119;
        auVar84._24_4_ = (uint)(fVar92 * fVar125) & uVar78;
        auVar84._28_4_ = (uint)(fVar93 * fVar126) & uVar88;
        auVar96._0_4_ = (uint)(fVar152 * fVar107) & uVar13;
        auVar96._4_4_ = (uint)(fVar160 * fVar118) & uVar10;
        auVar96._8_4_ = (uint)(fVar161 * fVar120) & uVar3;
        auVar96._12_4_ = (uint)(fVar162 * fVar121) & uVar4;
        auVar96._16_4_ = (uint)(fVar163 * fVar122) & uVar108;
        auVar96._20_4_ = (uint)(fVar164 * fVar124) & uVar119;
        auVar96._24_4_ = (uint)(fVar165 * fVar125) & uVar78;
        auVar96._28_4_ = (uint)(fVar166 * fVar126) & uVar88;
        auVar106._0_4_ =
             auVar154._0_4_ &
             ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000;
        auVar106._4_4_ = auVar154._4_4_ & _UNK_150b50ce4;
        auVar106._8_4_ = auVar154._8_4_ & _UNK_150b50ce8;
        auVar106._12_4_ = auVar154._12_4_ & _UNK_150b50cec;
        auVar106._16_4_ = auVar154._16_4_ & _UNK_150b50cf0;
        auVar106._20_4_ = auVar154._20_4_ & _UNK_150b50cf4;
        auVar106._24_4_ = auVar154._24_4_ & _UNK_150b50cf8;
        auVar106._28_4_ = auVar154._28_4_ & _UNK_150b50cfc;
        _local_620 = vmaskmovps_avx(auVar159,auVar47);
        _local_600 = vmaskmovps_avx(auVar159,auVar69);
        _local_5e0 = vmaskmovps_avx(auVar159,auVar84);
        _local_5c0 = vmaskmovps_avx(auVar159,auVar96 | auVar106);
      }
    }
    local_640._4_4_ = 0;
    local_640._0_4_ = *(uint *)(param_2 + auVar5._0_4_);
    local_420 = (ulonglong)*(uint *)((ulonglong)(uVar123 & _UNK_150b519d0) + lVar20);
    auVar116._16_16_ = _local_5c0;
    auVar116._0_16_ = local_5e0._0_16_;
    auVar80 = vperm2f128_avx(_local_5e0,_local_5c0,0x31);
    auVar141._16_16_ = _local_600;
    auVar141._0_16_ = local_620._0_16_;
    auVar145._16_16_ = local_5e0._0_16_;
    auVar145._0_16_ = _local_5c0;
    auVar109 = vperm2f128_avx(_local_620,_local_600,0x31);
    auVar154 = vshufps_avx(auVar145,auVar145,0x14);
    auVar174._8_8_ = local_5e0;
    auVar174._0_8_ = local_5e0;
    auVar174._16_8_ = local_5c0;
    auVar174._24_8_ = local_5c0;
    auVar154 = vblendps_avx(auVar174,auVar154,0x48);
    auVar175._16_16_ = local_620._0_16_;
    auVar175._0_16_ = _local_600;
    auVar97 = vshufps_avx(auVar175,auVar175,0xe1);
    auVar97 = vblendps_avx(auVar141,auVar97,0x12);
    local_200 = vblendps_avx(auVar97,auVar154,0xcc);
    auVar154 = vshufps_avx(auVar145,auVar145,0xb4);
    auVar154 = vblendps_avx(auVar116,auVar154,0x48);
    auVar34 = vshufps_avx(auVar175,auVar175,0xeb);
    auVar97 = vshufpd_avx(auVar141,auVar141,5);
    auVar97 = vblendps_avx(auVar97,auVar34,0x12);
    local_1e0 = vblendps_avx(auVar97,auVar154,0xcc);
    auVar34 = vperm2f128_avx(_local_5c0,_local_5e0,0x31);
    auVar154 = vshufps_avx(auVar34,auVar34,0x14);
    auVar117._8_8_ = auVar80._0_8_;
    auVar117._0_8_ = auVar80._0_8_;
    auVar117._16_8_ = auVar80._16_8_;
    auVar117._24_8_ = auVar80._16_8_;
    auVar154 = vblendps_avx(auVar117,auVar154,0x48);
    auVar155 = vperm2f128_avx(_local_600,_local_620,0x31);
    auVar97 = vshufps_avx(auVar155,auVar155,0xe1);
    auVar97 = vblendps_avx(auVar109,auVar97,0x12);
    local_1c0 = vblendps_avx(auVar97,auVar154,0xcc);
    auVar154 = vshufps_avx(auVar34,auVar34,0xb4);
    auVar154 = vblendps_avx(auVar80,auVar154,0x48);
    auVar34 = vshufps_avx(auVar155,auVar155,0xeb);
    auVar97 = vshufpd_avx(auVar109,auVar109,5);
    auVar97 = vblendps_avx(auVar97,auVar34,0x12);
    local_1a0 = vblendps_avx(auVar97,auVar154,0xcc);
    auVar5 = vpcmpgtd_avx(auVar179,auVar178);
    auVar70._16_16_ = auVar147;
    auVar70._0_16_ = auVar5;
    uVar13 = vmovmskps_avx(auVar70);
    uVar17 = (ulonglong)uVar13;
    do {
      if (uVar17 == 0) {
        uVar13 = 0x40;
      }
      else {
        uVar13 = 0;
        for (uVar15 = uVar17; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
          uVar13 = uVar13 + 1;
        }
      }
      bVar9 = (byte)uVar13 & 0x3f;
      local_240[0] = local_640._0_8_;
      local_240[1] = 0;
      local_240[2] = local_420;
      uStack_228 = 0;
      auVar154 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar13 << 4)));
      lVar20 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar13 & 7) * 4) * 0x60;
      *(undefined1 (*) [16])(param_1 + lVar20) = auVar154._0_16_;
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar20) = auVar154._16_16_;
      uVar17 = uVar17 & (-2L << bVar9 | 0xfffffffffffffffeU >> 0x40 - bVar9);
    } while (uVar17 != 0);
  }
  return;
}

// GetConstantKeyLerpPoseTranslations_avx @ 140af9a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseTranslations_avx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5,float param_6,char param_7,uint param_8,uint param_9)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [24];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar30 [16];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar45 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  uint uVar58;
  uint uVar64;
  uint uVar65;
  undefined1 auVar59 [16];
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar71 [16];
  undefined1 auVar72 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  uint uVar83;
  uint uVar84;
  undefined1 local_6a0 [32];
  undefined1 local_660 [32];
  undefined1 local_620 [8];
  float fStack_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float fStack_608;
  float fStack_604;
  ulonglong local_5f0;
  undefined1 local_5e0 [8];
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  ulonglong local_5a0;
  uint local_500;
  uint uStack_4fc;
  uint uStack_4f8;
  uint uStack_4f4;
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [96];
  float local_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [32];
  undefined1 local_3a0 [32];
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
  undefined1 auVar73 [32];
  undefined1 auVar78 [32];
  
  iVar2 = *(int *)(&DAT_151c6bbd0 + (longlong)(int)param_8 * 4);
  iVar3 = *(int *)(&DAT_151c6bbb0 + (longlong)(int)param_8 * 4);
  uVar12 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar12 = param_9;
  }
  uVar15 = (ulonglong)param_8;
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    auVar19 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
    auVar45 = vpshufd_avx(ZEXT416(-(uint)(param_8 == 3)),0);
    auVar18 = vpshufd_avx(ZEXT416((uint)(iVar2 * iVar3)),0);
    uVar10 = 0;
    auVar28._4_4_ = __real_00000002;
    auVar28._0_4_ = __real_00000002;
    auVar28._8_4_ = __real_00000002;
    auVar28._12_4_ = __real_00000002;
    do {
      uVar13 = (ulonglong)(uint)((int)uVar10 * 8);
      auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar13);
      auVar1 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar13);
      auVar50 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar13);
      auVar46 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar13),auVar30,0xdd);
      auVar17 = vshufps_avx(auVar1,auVar50,0xdd);
      auVar17 = vpslld_avx(auVar17,4);
      auVar46 = vpslld_avx(auVar46,4);
      uVar4 = *(uint *)(param_3 + auVar46._0_4_);
      uVar83 = *(uint *)(param_3 + 4 + (longlong)auVar46._0_4_);
      auVar59 = ZEXT416(uVar83);
      uVar84 = *(uint *)(param_3 + 4 + (longlong)auVar17._0_4_);
      auVar46 = ZEXT416(*(uint *)(param_3 + auVar17._0_4_));
      auVar75 = vpmovsxdq_avx(auVar46);
      auVar46 = vpshufd_avx(auVar46,0xee);
      vpmovsxdq_avx(auVar46);
      vpmovsxdq_avx(ZEXT416(uVar4));
      auVar46 = vpshufd_avx(ZEXT416(uVar4),0xee);
      vpmovsxdq_avx(auVar46);
      auVar46 = vpcmpgtd_avx(auVar28,ZEXT416(uVar84));
      auVar17 = vpcmpgtd_avx(auVar28,auVar59);
      auVar72._16_16_ = auVar46;
      auVar72._0_16_ = auVar17;
      iVar11 = vmovmskps_avx(auVar72);
      if (iVar11 == 0) {
        auVar60 = SUB6432(ZEXT864(0),0) << 0x20;
LAB_140af9daa:
        auVar46._12_4_ = 0;
        auVar46._0_12_ = ZEXT412(0);
        auVar72 = ZEXT1232(ZEXT412(0)) << 0x20;
        auVar72 = vcmpps_avx(auVar72,auVar72,0xf);
        auVar32._0_4_ = auVar72._0_4_ ^ auVar60._0_4_;
        auVar32._4_4_ = auVar72._4_4_ ^ auVar60._4_4_;
        auVar32._8_4_ = auVar72._8_4_ ^ auVar60._8_4_;
        auVar32._12_4_ = auVar72._12_4_ ^ auVar60._12_4_;
        auVar32._16_4_ = auVar72._16_4_ ^ auVar60._16_4_;
        auVar32._20_4_ = auVar72._20_4_ ^ auVar60._20_4_;
        auVar32._24_4_ = auVar72._24_4_ ^ auVar60._24_4_;
        auVar32._28_4_ = auVar72._28_4_ ^ auVar60._28_4_;
        if (param_6 <= 0.0) {
          auVar72 = SUB6432(ZEXT864(0),0) << 0x20;
          auVar74 = vblendvps_avx(local_660,ZEXT832(0) << 0x20,auVar32);
          local_6a0 = vblendvps_avx(local_6a0,ZEXT832(0) << 0x20,auVar32);
        }
        else {
          auVar28 = vpcmpeqd_avx(auVar46 << 0x20,auVar46 << 0x20);
          auVar17._0_4_ = uVar84 + auVar28._0_4_;
          auVar17._4_4_ = auVar28._4_4_;
          auVar17._8_4_ = auVar28._8_4_;
          auVar17._12_4_ = auVar28._12_4_;
          auVar6._0_4_ = uVar83 + auVar28._0_4_;
          auVar6._4_4_ = auVar28._4_4_;
          auVar6._8_4_ = auVar28._8_4_;
          auVar6._12_4_ = auVar28._12_4_;
          auVar57._16_16_ = auVar17;
          auVar57._0_16_ = auVar6;
          if (__real_3f800000 <= param_6) {
            auVar74 = vblendvps_avx(local_660,auVar57,auVar32);
            local_6a0 = vblendvps_avx(local_6a0,auVar57,auVar32);
            auVar72 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
          else {
            auVar72 = vcvtdq2ps_avx(auVar57);
            local_440 = auVar19._0_4_;
            fStack_43c = auVar19._4_4_;
            fStack_438 = auVar19._8_4_;
            fStack_434 = auVar19._12_4_;
            auVar82._0_4_ = auVar72._0_4_ * local_440;
            auVar82._4_4_ = auVar72._4_4_ * fStack_43c;
            auVar82._8_4_ = auVar72._8_4_ * fStack_438;
            auVar82._12_4_ = auVar72._12_4_ * fStack_434;
            auVar82._16_4_ = auVar72._16_4_ * local_440;
            auVar82._20_4_ = auVar72._20_4_ * fStack_43c;
            auVar82._24_4_ = auVar72._24_4_ * fStack_438;
            auVar82._28_4_ = auVar72._28_4_ * fStack_434;
            auVar60 = vroundps_avx(auVar82,9);
            auVar72 = SUB6432(ZEXT864(0),0) << 0x20;
            if (param_7 != '\x01') {
              auVar72 = vsubps_avx(auVar82,auVar60);
            }
            auVar77._0_4_ = (int)auVar60._0_4_;
            auVar77._4_4_ = (int)auVar60._4_4_;
            auVar77._8_4_ = (int)auVar60._8_4_;
            auVar77._12_4_ = (int)auVar60._12_4_;
            auVar78._16_4_ = (int)auVar60._16_4_;
            auVar78._0_16_ = auVar77;
            auVar78._20_4_ = (int)auVar60._20_4_;
            auVar78._24_4_ = (int)auVar60._24_4_;
            auVar78._28_4_ = (int)auVar60._28_4_;
            auVar46 = vpminsd_avx(auVar78._16_16_,auVar17);
            auVar77 = vpminsd_avx(auVar77,auVar6);
            auVar79._16_16_ = auVar46;
            auVar79._0_16_ = auVar77;
            auVar74 = vblendvps_avx(local_660,auVar79,auVar32);
            auVar46 = vpsubd_avx(auVar74._0_16_,auVar28);
            auVar28 = vpsubd_avx(auVar74._16_16_,auVar28);
            auVar28 = vpminsd_avx(auVar28,auVar17);
            auVar46 = vpminsd_avx(auVar46,auVar6);
            auVar76._16_16_ = auVar28;
            auVar76._0_16_ = auVar46;
            local_6a0 = vblendvps_avx(local_6a0,auVar76,auVar32);
          }
        }
        _local_620 = vblendvps_avx(_local_620,auVar72,auVar32);
      }
      else {
        auVar46 = vpcmpgtd_avx(auVar28,ZEXT416(uVar84));
        auVar28 = vpcmpgtd_avx(auVar28,auVar59);
        auVar60._16_16_ = auVar46;
        auVar60._0_16_ = auVar28;
        uVar58 = auVar28._0_4_;
        auVar74._0_4_ = ~uVar58 & local_660._0_4_;
        uVar64 = auVar28._4_4_;
        auVar74._4_4_ = ~uVar64 & local_660._4_4_;
        uVar65 = auVar28._8_4_;
        auVar74._8_4_ = ~uVar65 & local_660._8_4_;
        uVar66 = auVar28._12_4_;
        auVar74._12_4_ = ~uVar66 & local_660._12_4_;
        uVar67 = auVar46._0_4_;
        auVar74._16_4_ = ~uVar67 & local_660._16_4_;
        uVar68 = auVar46._4_4_;
        auVar74._20_4_ = ~uVar68 & local_660._20_4_;
        uVar69 = auVar46._8_4_;
        auVar74._24_4_ = ~uVar69 & local_660._24_4_;
        uVar70 = auVar46._12_4_;
        auVar74._28_4_ = ~uVar70 & local_660._28_4_;
        local_6a0._0_4_ = ~uVar58 & local_6a0._0_4_;
        local_6a0._4_4_ = ~uVar64 & local_6a0._4_4_;
        local_6a0._8_4_ = ~uVar65 & local_6a0._8_4_;
        local_6a0._12_4_ = ~uVar66 & local_6a0._12_4_;
        local_6a0._16_4_ = ~uVar67 & local_6a0._16_4_;
        local_6a0._20_4_ = ~uVar68 & local_6a0._20_4_;
        local_6a0._24_4_ = ~uVar69 & local_6a0._24_4_;
        local_6a0._28_4_ = ~uVar70 & local_6a0._28_4_;
        local_620._4_4_ = ~uVar64 & local_620._4_4_;
        local_620._0_4_ = ~uVar58 & local_620._0_4_;
        fStack_618 = (float)(~uVar65 & (uint)fStack_618);
        fStack_614 = (float)(~uVar66 & (uint)fStack_614);
        fStack_610 = (float)(~uVar67 & (uint)fStack_610);
        fStack_60c = (float)(~uVar68 & (uint)fStack_60c);
        fStack_608 = (float)(~uVar69 & (uint)fStack_608);
        fStack_604 = (float)(~uVar70 & (uint)fStack_604);
        local_660 = auVar74;
        if ((char)iVar11 != -1) goto LAB_140af9daa;
      }
      auVar29._4_4_ = __real_00000001;
      auVar29._0_4_ = __real_00000001;
      auVar29._8_4_ = __real_00000001;
      auVar29._12_4_ = __real_00000001;
      auVar28 = vpcmpgtd_avx(ZEXT416(uVar84),auVar29);
      auVar46 = vpcmpgtd_avx(auVar59,auVar29);
      local_500 = auVar45._0_4_;
      uStack_4fc = auVar45._4_4_;
      uStack_4f8 = auVar45._8_4_;
      uStack_4f4 = auVar45._12_4_;
      auVar21._0_4_ = auVar46._0_4_ & local_500;
      auVar21._4_4_ = auVar46._4_4_ & uStack_4fc;
      auVar21._8_4_ = auVar46._8_4_ & uStack_4f8;
      auVar21._12_4_ = auVar46._12_4_ & uStack_4f4;
      auVar21._16_4_ = auVar28._0_4_ & local_500;
      auVar21._20_4_ = auVar28._4_4_ & uStack_4fc;
      auVar21._24_4_ = auVar28._8_4_ & uStack_4f8;
      auVar21._28_4_ = auVar28._12_4_ & uStack_4f4;
      auVar72 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                              ___ymm_0000001800000018000000180000001800000018000000180000001800000018
                              ,auVar21);
      auVar17 = auVar72._0_16_;
      auVar46 = auVar72._16_16_;
      auVar28 = vpmovsxdq_avx(auVar46);
      auVar46 = vshufpd_avx(auVar46,auVar46,3);
      vpmovsxdq_avx(auVar46);
      vpmovsxdq_avx(auVar17);
      auVar46 = vshufpd_avx(auVar17,auVar17,3);
      vpmovsxdq_avx(auVar46);
      auVar46 = auVar74._0_16_;
      if (param_8 < 7) {
        auVar45 = vpmulld_avx(auVar46,auVar18);
        auVar18 = vpmulld_avx(auVar74._16_16_,auVar18);
        vpmovsxdq_avx(auVar18);
        auVar18 = vpshufd_avx(auVar18,0xee);
        vpmovsxdq_avx(auVar18);
        vpmovsxdq_avx(auVar45);
        auVar45 = vpshufd_avx(auVar45,0xee);
        vpmovsxdq_avx(auVar45);
                    /* WARNING: Could not recover jumptable at 0x000140af9f85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6ba90 + *(int *)(&DAT_151c6ba90 + uVar15 * 4)))
                  ((longlong)(int)uVar4,&DAT_151c6ba90 + *(int *)(&DAT_151c6ba90 + uVar15 * 4),
                   auVar75._0_8_);
        return;
      }
      local_3a0 = ZEXT1632(ZEXT816(0));
      local_3c0 = ZEXT1632(ZEXT816(0));
      local_3e0 = ZEXT1632(ZEXT816(0));
      auVar32 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar60 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar72 = ZEXT1632((undefined1  [16])0x0);
      auVar22._0_4_ = auVar74._0_4_ ^ local_6a0._0_4_;
      auVar22._4_4_ = auVar74._4_4_ ^ local_6a0._4_4_;
      auVar22._8_4_ = auVar74._8_4_ ^ local_6a0._8_4_;
      auVar22._12_4_ = auVar74._12_4_ ^ local_6a0._12_4_;
      auVar22._16_4_ = auVar74._16_4_ ^ local_6a0._16_4_;
      auVar22._20_4_ = auVar74._20_4_ ^ local_6a0._20_4_;
      auVar22._24_4_ = auVar74._24_4_ ^ local_6a0._24_4_;
      auVar22._28_4_ = auVar74._28_4_ ^ local_6a0._28_4_;
      if (auVar22 != (undefined1  [32])0x0) {
        auVar75 = local_6a0._0_16_;
        auVar17 = vpcmpeqd_avx(local_6a0._16_16_,auVar74._16_16_);
        auVar28 = vpcmpeqd_avx(auVar28,auVar28);
        if (param_8 < 7) {
          vpcmpeqd_avx(auVar46,auVar75);
          auVar19 = vpmulld_avx(auVar75,auVar18);
          auVar45 = vpmulld_avx(local_6a0._16_16_,auVar18);
          vpmovsxdq_avx(auVar45);
          auVar45 = vpshufd_avx(auVar45,0xee);
          vpmovsxdq_avx(auVar45);
          auVar45 = vpmovsxdq_avx(auVar19);
          auVar18 = vpshufd_avx(auVar19,0xee);
          auVar18 = vpmovsxdq_avx(auVar18);
                    /* WARNING: Could not recover jumptable at 0x000140afa6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6baac + *(int *)(&DAT_151c6baac + uVar15 * 4)))
                    (auVar18._0_8_,auVar45._0_8_);
          return;
        }
        auVar59 = vpcmpeqd_avx(auVar46,auVar75);
        auVar23._16_16_ = auVar17 ^ auVar28;
        auVar23._0_16_ = auVar59 ^ auVar28;
        auVar32 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
        auVar72 = vmaskmovps_avx(auVar23,auVar32);
        auVar60 = vmaskmovps_avx(auVar23,auVar32);
        auVar32 = vmaskmovps_avx(auVar23,auVar32);
        auVar46 = vpcmpeqd_avx(auVar46,auVar75);
        auVar24._16_16_ = auVar17 ^ auVar28;
        auVar24._0_16_ = auVar46 ^ auVar28;
        auVar72 = vsubps_avx(auVar72,local_3e0);
        auVar60 = vsubps_avx(auVar60,local_3c0);
        auVar32 = vsubps_avx(auVar32,local_3a0);
        auVar33._0_4_ = (float)local_620._0_4_ * auVar72._0_4_ + 0.0;
        auVar33._4_4_ = (float)local_620._4_4_ * auVar72._4_4_ + 0.0;
        auVar33._8_4_ = fStack_618 * auVar72._8_4_ + 0.0;
        auVar33._12_4_ = fStack_614 * auVar72._12_4_ + 0.0;
        auVar33._16_4_ = fStack_610 * auVar72._16_4_ + 0.0;
        auVar33._20_4_ = fStack_60c * auVar72._20_4_ + 0.0;
        auVar33._24_4_ = fStack_608 * auVar72._24_4_ + 0.0;
        auVar33._28_4_ = fStack_604 * auVar72._28_4_ + 0.0;
        auVar47._0_4_ = (float)local_620._0_4_ * auVar60._0_4_ + 0.0;
        auVar47._4_4_ = (float)local_620._4_4_ * auVar60._4_4_ + 0.0;
        auVar47._8_4_ = fStack_618 * auVar60._8_4_ + 0.0;
        auVar47._12_4_ = fStack_614 * auVar60._12_4_ + 0.0;
        auVar47._16_4_ = fStack_610 * auVar60._16_4_ + 0.0;
        auVar47._20_4_ = fStack_60c * auVar60._20_4_ + 0.0;
        auVar47._24_4_ = fStack_608 * auVar60._24_4_ + 0.0;
        auVar47._28_4_ = fStack_604 * auVar60._28_4_ + 0.0;
        auVar51._0_4_ = (float)local_620._0_4_ * auVar32._0_4_ + 0.0;
        auVar51._4_4_ = (float)local_620._4_4_ * auVar32._4_4_ + 0.0;
        auVar51._8_4_ = fStack_618 * auVar32._8_4_ + 0.0;
        auVar51._12_4_ = fStack_614 * auVar32._12_4_ + 0.0;
        auVar51._16_4_ = fStack_610 * auVar32._16_4_ + 0.0;
        auVar51._20_4_ = fStack_60c * auVar32._20_4_ + 0.0;
        auVar51._24_4_ = fStack_608 * auVar32._24_4_ + 0.0;
        auVar51._28_4_ = fStack_604 * auVar32._28_4_ + 0.0;
        auVar72 = vmaskmovps_avx(auVar24,auVar33);
        auVar60 = vmaskmovps_avx(auVar24,auVar47);
        auVar32 = vmaskmovps_avx(auVar24,auVar51);
      }
      auVar25._16_16_ = auVar50;
      auVar25._0_16_ = auVar30;
      auVar34._16_16_ = auVar1;
      auVar34._0_16_ = *(undefined1 (*) [16])(param_2 + uVar13);
      local_220 = vshufps_avx(auVar34,auVar25,0x88);
      auVar52._16_16_ = auVar60._0_16_;
      auVar52._0_16_ = auVar72._0_16_;
      auVar76 = vperm2f128_avx(auVar72,auVar60,0x31);
      auVar55._16_16_ = auVar72._0_16_;
      auVar55._0_16_ = auVar60._0_16_;
      auVar57 = vshufps_avx(auVar55,auVar55,0xe1);
      auVar57 = vblendps_avx(auVar52,auVar57,0x12);
      auVar78 = vperm2f128_avx(ZEXT832(0) << 0x20,auVar32,0x21);
      auVar82 = vshufps_avx(auVar78,auVar78,0x14);
      auVar82 = vblendps_avx(ZEXT1632(CONCAT88(auVar32._0_8_,auVar32._0_8_)),auVar82,0x48);
      local_180 = vblendps_avx(auVar57,auVar82,0xcc);
      auVar82 = vshufps_avx(auVar55,auVar55,0xeb);
      auVar57 = vshufpd_avx(auVar52,auVar52,5);
      auVar57 = vblendps_avx(auVar57,auVar82,0x12);
      auVar82 = vshufps_avx(auVar78,auVar78,0xb4);
      auVar82 = vblendps_avx(ZEXT1632(auVar32._0_16_),auVar82,0x48);
      local_160 = vblendps_avx(auVar57,auVar82,0xcc);
      auVar57 = vperm2f128_avx(auVar60,auVar72,0x31);
      auVar72 = vshufps_avx(auVar57,auVar57,0xe1);
      auVar72 = vblendps_avx(auVar76,auVar72,0x12);
      auVar60 = vunpcklps_avx(auVar32,ZEXT832(0) << 0x20);
      auVar60 = vblendps_avx(ZEXT1632(CONCAT88(auVar32._16_8_,auVar32._16_8_)),auVar60,0x48);
      local_140 = vblendps_avx(auVar72,auVar60,0xcc);
      auVar60 = vshufps_avx(auVar57,auVar57,0xeb);
      auVar72 = vshufpd_avx(auVar76,auVar76,5);
      auVar72 = vblendps_avx(auVar72,auVar60,0x12);
      auVar60 = vunpckhps_avx(auVar32,ZEXT832(0) << 0x20);
      auVar60 = vblendps_avx(ZEXT1632(auVar32._16_16_),auVar60,0x48);
      local_120 = vblendps_avx(auVar72,auVar60,0xcc);
      uVar13 = 0xff;
      do {
        uVar4 = 0;
        for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
          uVar4 = uVar4 + 1;
        }
        bVar5 = (byte)uVar4 & 0x3f;
        iVar11 = *(int *)(local_220 + (ulonglong)(uVar4 & 7) * 4);
        auVar72 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar4 << 4)));
        *(undefined1 (*) [16])(param_1 + 0x20 + (longlong)iVar11 * 0x60) = auVar72._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x30 + (longlong)iVar11 * 0x60) = auVar72._16_16_;
        uVar13 = uVar13 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
      } while (uVar13 != 0);
      uVar10 = uVar10 + 8;
      auVar28._4_4_ = __real_00000002;
      auVar28._0_4_ = __real_00000002;
      auVar28._8_4_ = __real_00000002;
      auVar28._12_4_ = __real_00000002;
      local_660 = auVar74;
    } while (uVar10 < (uVar12 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar10) {
      return;
    }
  }
  auVar45 = vpshufd_avx(ZEXT416((uint)uVar10),0);
  auVar35._16_16_ = auVar45;
  auVar35._0_16_ = auVar45;
  auVar75 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar1 = vpshufd_avx(ZEXT416(param_9),0);
  auVar59 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar28 = vpcmpgtd_avx(auVar1,auVar59);
  auVar30 = vpcmpgtd_avx(auVar1,auVar75);
  auVar18 = vpslld_avx(auVar45,3);
  auVar45 = vpand_avx(auVar30,auVar18);
  uVar83 = auVar30._0_4_;
  auVar50._0_4_ = uVar83 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  uVar84 = auVar30._4_4_;
  auVar50._4_4_ = uVar84 & _UNK_150b519c4;
  uVar58 = auVar30._8_4_;
  auVar50._8_4_ = uVar58 & _UNK_150b519c8;
  uVar64 = auVar30._12_4_;
  auVar50._12_4_ = uVar64 & _UNK_150b519cc;
  uVar65 = auVar28._0_4_;
  uVar66 = auVar28._4_4_;
  uVar67 = auVar28._8_4_;
  uVar68 = auVar28._12_4_;
  vextractps_avx(auVar50,1);
  vextractps_avx(auVar50,2);
  vextractps_avx(auVar50,3);
  auVar18 = vpand_avx(auVar28,auVar18);
  lVar14 = auVar18._0_4_ + param_2;
  auVar18._0_4_ = uVar83 & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
  auVar18._4_4_ = uVar84 & _UNK_150b519e4;
  auVar18._8_4_ = uVar58 & _UNK_150b519e8;
  auVar18._12_4_ = uVar64 & _UNK_150b519ec;
  vextractps_avx(auVar18,1);
  vextractps_avx(auVar18,2);
  vextractps_avx(auVar18,3);
  auVar19 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b519f0) + lVar14)),4);
  auVar18 = vpslld_avx(ZEXT416(*(uint *)((ulonglong)auVar18._0_4_ + param_2 + auVar45._0_4_)),4);
  auVar18 = vpand_avx(auVar30,auVar18);
  auVar19 = vpand_avx(auVar28,auVar19);
  auVar46 = ZEXT416(*(uint *)(param_3 + auVar18._0_4_));
  auVar17 = ZEXT416(*(uint *)(param_3 + auVar19._0_4_));
  auVar20._0_4_ = uVar83 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
  auVar20._4_4_ = uVar84 & _UNK_150b50d44;
  auVar20._8_4_ = uVar58 & _UNK_150b50d48;
  auVar20._12_4_ = uVar64 & _UNK_150b50d4c;
  auVar20._16_4_ = uVar65 & _UNK_150b50d50;
  auVar20._20_4_ = uVar66 & _UNK_150b50d54;
  uVar12 = *(uint *)((ulonglong)auVar20._0_4_ + param_3 + auVar18._0_4_);
  uVar4 = *(uint *)((auVar20._16_8_ & 0xffffffff) + param_3 + auVar19._0_4_);
  auVar18 = vpshufd_avx(auVar17,0xee);
  vpmovsxdq_avx(auVar18);
  auVar19._4_4_ = __real_00000002;
  auVar19._0_4_ = __real_00000002;
  auVar19._8_4_ = __real_00000002;
  auVar19._12_4_ = __real_00000002;
  auVar18 = vpcmpgtd_avx(auVar19,ZEXT416(uVar4));
  auVar19 = vpcmpgtd_avx(auVar19,ZEXT416(uVar12));
  auVar26._0_4_ = uVar83 & auVar19._0_4_;
  auVar26._4_4_ = uVar84 & auVar19._4_4_;
  auVar26._8_4_ = uVar58 & auVar19._8_4_;
  auVar26._12_4_ = uVar64 & auVar19._12_4_;
  auVar26._16_4_ = uVar65 & auVar18._0_4_;
  auVar26._20_4_ = uVar66 & auVar18._4_4_;
  auVar26._24_4_ = uVar67 & auVar18._8_4_;
  auVar26._28_4_ = uVar68 & auVar18._12_4_;
  iVar11 = vmovmskps_avx(auVar26);
  auVar50 = vpshufd_avx(auVar46,0xee);
  vpmovsxdq_avx(auVar50);
  vpmovsxdq_avx(auVar17);
  vpmovsxdq_avx(auVar46);
  auVar37 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (iVar11 != 0) {
    auVar50 = vpcmpgtd_avx(auVar1,auVar59);
    auVar46 = vpcmpgtd_avx(auVar1,auVar75);
    auVar36._16_16_ = auVar50;
    auVar36._0_16_ = auVar46;
    uVar16 = vmovmskps_avx(auVar36);
    if ((char)uVar16 == (char)iVar11) {
      _local_5e0 = ZEXT832(0) << 0x20;
      auVar72 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar60 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      goto LAB_140afba6a;
    }
    auVar18 = vpand_avx(auVar18,auVar28);
    auVar19 = vpand_avx(auVar19,auVar30);
    auVar18 = vpackssdw_avx(auVar19,auVar18);
    auVar19 = vpmovsxwd_avx(auVar18);
    auVar18 = vpunpckhwd_avx(auVar18,auVar18);
    auVar37._16_16_ = auVar18;
    auVar37._0_16_ = auVar19;
  }
  auVar72 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar60 = vcmpps_avx(auVar72,auVar72,0xf);
  auVar54._0_4_ = auVar37._0_4_ ^ auVar60._0_4_;
  auVar54._4_4_ = auVar37._4_4_ ^ auVar60._4_4_;
  auVar54._8_4_ = auVar37._8_4_ ^ auVar60._8_4_;
  auVar54._12_4_ = auVar37._12_4_ ^ auVar60._12_4_;
  auVar54._16_4_ = auVar37._16_4_ ^ auVar60._16_4_;
  auVar54._20_4_ = auVar37._20_4_ ^ auVar60._20_4_;
  auVar54._24_4_ = auVar37._24_4_ ^ auVar60._24_4_;
  auVar54._28_4_ = auVar37._28_4_ ^ auVar60._28_4_;
  auVar30._0_12_ = ZEXT812(0);
  auVar30._12_4_ = 0;
  auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar60 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (0.0 < param_6) {
    auVar18 = vpcmpeqd_avx(auVar30,auVar30);
    auVar7._0_4_ = uVar4 + auVar18._0_4_;
    auVar7._4_4_ = auVar18._4_4_;
    auVar7._8_4_ = auVar18._8_4_;
    auVar7._12_4_ = auVar18._12_4_;
    auVar8._0_4_ = uVar12 + auVar18._0_4_;
    auVar8._4_4_ = auVar18._4_4_;
    auVar8._8_4_ = auVar18._8_4_;
    auVar8._12_4_ = auVar18._12_4_;
    auVar80._16_16_ = auVar7;
    auVar80._0_16_ = auVar8;
    if (__real_3f800000 <= param_6) {
      auVar39._0_4_ = auVar54._0_4_ & uVar83;
      auVar39._4_4_ = auVar54._4_4_ & uVar84;
      auVar39._8_4_ = auVar54._8_4_ & uVar58;
      auVar39._12_4_ = auVar54._12_4_ & uVar64;
      auVar39._16_4_ = auVar54._16_4_ & uVar65;
      auVar39._20_4_ = auVar54._20_4_ & uVar66;
      auVar39._24_4_ = auVar54._24_4_ & uVar67;
      auVar39._28_4_ = auVar54._28_4_ & uVar68;
      auVar72 = vblendvps_avx(auVar74,auVar80,auVar39);
      auVar60 = auVar72;
    }
    else {
      auVar18 = vshufps_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_6),0);
      auVar72 = vcvtdq2ps_avx(auVar80);
      auVar61._0_4_ = auVar18._0_4_ * auVar72._0_4_;
      auVar61._4_4_ = auVar18._4_4_ * auVar72._4_4_;
      auVar61._8_4_ = auVar18._8_4_ * auVar72._8_4_;
      auVar61._12_4_ = auVar18._12_4_ * auVar72._12_4_;
      auVar61._16_4_ = auVar18._0_4_ * auVar72._16_4_;
      auVar61._20_4_ = auVar18._4_4_ * auVar72._20_4_;
      auVar61._24_4_ = auVar18._8_4_ * auVar72._24_4_;
      auVar61._28_4_ = auVar18._12_4_ * auVar72._28_4_;
      auVar56._0_4_ = auVar54._0_4_ & uVar83;
      auVar56._4_4_ = auVar54._4_4_ & uVar84;
      auVar56._8_4_ = auVar54._8_4_ & uVar58;
      auVar56._12_4_ = auVar54._12_4_ & uVar64;
      auVar56._16_4_ = auVar54._16_4_ & uVar65;
      auVar56._20_4_ = auVar54._20_4_ & uVar66;
      auVar56._24_4_ = auVar54._24_4_ & uVar67;
      auVar56._28_4_ = auVar54._28_4_ & uVar68;
      auVar60 = vroundps_avx(auVar61,9);
      auVar71._0_4_ = (int)auVar60._0_4_;
      auVar71._4_4_ = (int)auVar60._4_4_;
      auVar71._8_4_ = (int)auVar60._8_4_;
      auVar71._12_4_ = (int)auVar60._12_4_;
      auVar73._16_4_ = (int)auVar60._16_4_;
      auVar73._0_16_ = auVar71;
      auVar73._20_4_ = (int)auVar60._20_4_;
      auVar73._24_4_ = (int)auVar60._24_4_;
      auVar73._28_4_ = (int)auVar60._28_4_;
      auVar18 = vpminsd_avx(auVar73._16_16_,auVar7);
      auVar19 = vpminsd_avx(auVar71,auVar8);
      auVar53._16_16_ = auVar18;
      auVar53._0_16_ = auVar19;
      auVar74 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar72 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar53,auVar56);
      if (param_7 != '\x01') {
        auVar74 = vsubps_avx(auVar61,auVar60);
      }
      auVar18 = vpcmpeqd_avx(auVar60._0_16_,auVar60._0_16_);
      auVar19 = vpsubd_avx(auVar72._0_16_,auVar18);
      auVar18 = vpsubd_avx(auVar72._16_16_,auVar18);
      auVar18 = vpminsd_avx(auVar18,auVar7);
      auVar19 = vpminsd_avx(auVar19,auVar8);
      auVar38._16_16_ = auVar18;
      auVar38._0_16_ = auVar19;
      auVar60 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar38,auVar56);
    }
  }
  _local_5e0 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar74,auVar54);
LAB_140afba6a:
  local_5f0 = (ulonglong)*(uint *)((ulonglong)(uVar65 & _UNK_150b519d0) + lVar14);
  local_5a0 = (ulonglong)*(uint *)(param_2 + auVar45._0_4_);
  auVar19 = vpshufd_avx(ZEXT416(-(uint)(param_8 == 3)),0);
  auVar31._4_4_ = __real_00000001;
  auVar31._0_4_ = __real_00000001;
  auVar31._8_4_ = __real_00000001;
  auVar31._12_4_ = __real_00000001;
  auVar45 = vpcmpgtd_avx(ZEXT416(uVar4),auVar31);
  auVar18 = vpcmpgtd_avx(ZEXT416(uVar12),auVar31);
  auVar40._0_4_ = auVar18._0_4_ & auVar19._0_4_;
  auVar40._4_4_ = auVar18._4_4_ & auVar19._4_4_;
  auVar40._8_4_ = auVar18._8_4_ & auVar19._8_4_;
  auVar40._12_4_ = auVar18._12_4_ & auVar19._12_4_;
  auVar40._16_4_ = auVar45._0_4_ & auVar19._0_4_;
  auVar40._20_4_ = auVar45._4_4_ & auVar19._4_4_;
  auVar40._24_4_ = auVar45._8_4_ & auVar19._8_4_;
  auVar40._28_4_ = auVar45._12_4_ & auVar19._12_4_;
  auVar74 = vblendvps_avx(ZEXT832(0) << 0x20,
                          ___ymm_0000001800000018000000180000001800000018000000180000001800000018,
                          auVar40);
  auVar18 = auVar74._0_16_;
  auVar45 = auVar74._16_16_;
  vpmovsxdq_avx(auVar45);
  auVar45 = vshufpd_avx(auVar45,auVar45,3);
  vpmovsxdq_avx(auVar45);
  vpmovsxdq_avx(auVar18);
  auVar45 = vshufpd_avx(auVar18,auVar18,3);
  vpmovsxdq_avx(auVar45);
  auVar45 = vpshufd_avx(ZEXT416((uint)(iVar2 * iVar3)),0);
  if (param_8 < 7) {
    auVar18 = vpmulld_avx(auVar72._0_16_,auVar45);
    auVar45 = vpmulld_avx(auVar72._16_16_,auVar45);
    vpmovsxdq_avx(auVar45);
    auVar45 = vpshufd_avx(auVar45,0xee);
    vpmovsxdq_avx(auVar45);
    auVar45 = vpmovsxdq_avx(auVar18);
    auVar18 = vpshufd_avx(auVar18,0xee);
    vpmovsxdq_avx(auVar18);
                    /* WARNING: Could not recover jumptable at 0x000140afbbbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6bac8 + *(int *)(&DAT_151c6bac8 + uVar15 * 4)))
              (&DAT_151c6bac8,auVar20._16_8_ >> 0x20,
               &DAT_151c6bac8 + *(int *)(&DAT_151c6bac8 + uVar15 * 4),auVar45._0_8_);
    return;
  }
  auVar18 = vpcmpgtd_avx(auVar1,auVar59);
  auVar19 = vpcmpgtd_avx(auVar1,auVar75);
  auVar41._16_16_ = auVar18;
  auVar41._0_16_ = auVar19;
  local_4e0 = vmaskmovps_avx(auVar41,ZEXT832(0) << 0x20);
  local_4c0 = vmaskmovps_avx(auVar41,ZEXT832(0) << 0x20);
  local_4a0._0_32_ = vmaskmovps_avx(auVar41,ZEXT832(0) << 0x20);
  auVar18 = vpcmpeqd_avx(auVar72._16_16_,auVar60._16_16_);
  auVar19 = vpcmpeqd_avx(auVar60._0_16_,auVar72._0_16_);
  auVar42._16_16_ = auVar18;
  auVar42._0_16_ = auVar19;
  auVar28 = vpcmpgtd_avx(auVar1,auVar59);
  auVar30 = vpcmpgtd_avx(auVar1,auVar75);
  auVar48._16_16_ = auVar28;
  auVar48._0_16_ = auVar30;
  auVar48 = auVar48 & ~auVar42;
  if ((((((((SUB321(auVar48 >> 0x1f,0) & 1) != 0 || (SUB321(auVar48 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar48 >> 0x5f,0) & 1) != 0) || SUB321(auVar48 >> 0x7f,0) != '\0') ||
        (SUB321(auVar48 >> 0x9f,0) & 1) != 0) || SUB321(auVar48 >> 0xbf,0) != '\0') ||
      (SUB321(auVar48 >> 0xdf,0) & 1) != 0) || auVar48[0x1f] < '\0') {
    auVar62._0_4_ = ~auVar19._0_4_ & uVar83;
    auVar62._4_4_ = ~auVar19._4_4_ & uVar84;
    auVar62._8_4_ = ~auVar19._8_4_ & uVar58;
    auVar62._12_4_ = ~auVar19._12_4_ & uVar64;
    auVar62._16_4_ = ~auVar18._0_4_ & uVar65;
    auVar62._20_4_ = ~auVar18._4_4_ & uVar66;
    auVar62._24_4_ = ~auVar18._8_4_ & uVar67;
    auVar62._28_4_ = ~auVar18._12_4_ & uVar68;
    if (param_8 < 7) {
      auVar18 = vpmulld_avx(auVar60._0_16_,auVar45);
      auVar45 = vpmulld_avx(auVar60._16_16_,auVar45);
      vpmovsxdq_avx(auVar45);
      auVar45 = vpshufd_avx(auVar45,0xee);
      vpmovsxdq_avx(auVar45);
      auVar45 = vpmovsxdq_avx(auVar18);
      auVar18 = vpshufd_avx(auVar18,0xee);
      vpmovsxdq_avx(auVar18);
                    /* WARNING: Could not recover jumptable at 0x000140afc846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6bae4 + *(int *)(&DAT_151c6bae4 + uVar15 * 4)))
                (auVar45._0_8_,&DAT_151c6bae4 + *(int *)(&DAT_151c6bae4 + uVar15 * 4));
      return;
    }
    auVar72 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar60 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar74 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar72 = vsubps_avx(auVar72,local_4e0);
    auVar60 = vsubps_avx(auVar60,local_4c0);
    auVar74 = vsubps_avx(auVar74,local_4a0._0_32_);
    auVar27._0_4_ = local_4e0._0_4_ + (float)local_5e0._0_4_ * auVar72._0_4_;
    auVar27._4_4_ = local_4e0._4_4_ + (float)local_5e0._4_4_ * auVar72._4_4_;
    auVar27._8_4_ = local_4e0._8_4_ + fStack_5d8 * auVar72._8_4_;
    auVar27._12_4_ = local_4e0._12_4_ + fStack_5d4 * auVar72._12_4_;
    auVar27._16_4_ = local_4e0._16_4_ + fStack_5d0 * auVar72._16_4_;
    auVar27._20_4_ = local_4e0._20_4_ + fStack_5cc * auVar72._20_4_;
    auVar27._24_4_ = local_4e0._24_4_ + fStack_5c8 * auVar72._24_4_;
    auVar27._28_4_ = local_4e0._28_4_ + fStack_5c4 * auVar72._28_4_;
    auVar43._0_4_ = local_4c0._0_4_ + (float)local_5e0._0_4_ * auVar60._0_4_;
    auVar43._4_4_ = local_4c0._4_4_ + (float)local_5e0._4_4_ * auVar60._4_4_;
    auVar43._8_4_ = local_4c0._8_4_ + fStack_5d8 * auVar60._8_4_;
    auVar43._12_4_ = local_4c0._12_4_ + fStack_5d4 * auVar60._12_4_;
    auVar43._16_4_ = local_4c0._16_4_ + fStack_5d0 * auVar60._16_4_;
    auVar43._20_4_ = local_4c0._20_4_ + fStack_5cc * auVar60._20_4_;
    auVar43._24_4_ = local_4c0._24_4_ + fStack_5c8 * auVar60._24_4_;
    auVar43._28_4_ = local_4c0._28_4_ + fStack_5c4 * auVar60._28_4_;
    auVar49._0_4_ = local_4a0._0_4_ + (float)local_5e0._0_4_ * auVar74._0_4_;
    auVar49._4_4_ = local_4a0._4_4_ + (float)local_5e0._4_4_ * auVar74._4_4_;
    auVar49._8_4_ = local_4a0._8_4_ + fStack_5d8 * auVar74._8_4_;
    auVar49._12_4_ = local_4a0._12_4_ + fStack_5d4 * auVar74._12_4_;
    auVar49._16_4_ = local_4a0._16_4_ + fStack_5d0 * auVar74._16_4_;
    auVar49._20_4_ = local_4a0._20_4_ + fStack_5cc * auVar74._20_4_;
    auVar49._24_4_ = local_4a0._24_4_ + fStack_5c8 * auVar74._24_4_;
    auVar49._28_4_ = local_4a0._28_4_ + fStack_5c4 * auVar74._28_4_;
    local_4e0 = vmaskmovps_avx(auVar62,auVar27);
    local_4c0 = vmaskmovps_avx(auVar62,auVar43);
    local_4a0._0_32_ = vmaskmovps_avx(auVar62,auVar49);
  }
  auVar63._16_16_ = local_4c0._0_16_;
  auVar63._0_16_ = local_4e0._0_16_;
  auVar32 = vperm2f128_avx(local_4e0,local_4c0,0x31);
  auVar57 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar74 = vperm2f128_avx(auVar57,local_4a0._0_32_,0x21);
  auVar72 = vshufps_avx(auVar74,auVar74,0x14);
  auVar72 = vblendps_avx(ZEXT1632(CONCAT88(local_4a0._0_8_,local_4a0._0_8_)),auVar72,0x48);
  auVar81._16_16_ = local_4e0._0_16_;
  auVar81._0_16_ = local_4c0._0_16_;
  auVar60 = vshufps_avx(auVar81,auVar81,0xe1);
  auVar60 = vblendps_avx(auVar63,auVar60,0x12);
  local_200 = vblendps_avx(auVar60,auVar72,0xcc);
  auVar72 = vshufps_avx(auVar74,auVar74,0xb4);
  auVar72 = vblendps_avx(ZEXT1632(local_4a0._0_16_),auVar72,0x48);
  auVar74 = vshufps_avx(auVar81,auVar81,0xeb);
  auVar60 = vshufpd_avx(auVar63,auVar63,5);
  auVar60 = vblendps_avx(auVar60,auVar74,0x12);
  local_1e0 = vblendps_avx(auVar60,auVar72,0xcc);
  auVar72 = vunpcklps_avx(local_4a0._0_32_,auVar57);
  auVar72 = vblendps_avx(ZEXT1632(CONCAT88(local_4a0._16_8_,local_4a0._16_8_)),auVar72,0x48);
  auVar74 = vperm2f128_avx(local_4c0,local_4e0,0x31);
  auVar60 = vshufps_avx(auVar74,auVar74,0xe1);
  auVar60 = vblendps_avx(auVar32,auVar60,0x12);
  local_1c0 = vblendps_avx(auVar60,auVar72,0xcc);
  auVar72 = vunpckhps_avx(local_4a0._0_32_,auVar57);
  auVar72 = vblendps_avx(ZEXT1632(local_4a0._16_16_),auVar72,0x48);
  auVar74 = vshufps_avx(auVar74,auVar74,0xeb);
  auVar60 = vshufpd_avx(auVar32,auVar32,5);
  auVar60 = vblendps_avx(auVar60,auVar74,0x12);
  local_1a0 = vblendps_avx(auVar60,auVar72,0xcc);
  auVar45 = vpcmpgtd_avx(auVar1,auVar75);
  auVar44._16_16_ = auVar28;
  auVar44._0_16_ = auVar45;
  uVar12 = vmovmskps_avx(auVar44);
  uVar15 = (ulonglong)uVar12;
  do {
    if (uVar15 == 0) {
      uVar12 = 0x40;
    }
    else {
      uVar12 = 0;
      for (uVar10 = uVar15; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
        uVar12 = uVar12 + 1;
      }
    }
    bVar5 = (byte)uVar12 & 0x3f;
    local_240[0] = local_5a0;
    local_240[1] = 0;
    local_240[2] = local_5f0;
    uStack_228 = 0;
    auVar72 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar12 << 4)));
    lVar14 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar12 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + 0x20 + lVar14) = auVar72._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x30 + lVar14) = auVar72._16_16_;
    uVar15 = uVar15 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
  } while (uVar15 != 0);
  return;
}

// GetConstantKeyLerpPoseScales_avx @ 140afd6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetConstantKeyLerpPoseScales_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,undefined8 param_5,
               undefined8 param_6,float param_7,char param_8,uint param_9,uint param_10)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar25 [16];
  undefined1 auVar27 [32];
  undefined1 auVar24 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar26 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar46 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  uint uVar47;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  undefined1 auVar48 [32];
  uint uVar59;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar60 [32];
  float fVar68;
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar69 [16];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [16];
  undefined1 auVar79 [32];
  undefined1 auVar81 [32];
  uint uVar82;
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [64];
  undefined1 in_ZMM14 [64];
  undefined1 in_ZMM15 [64];
  ulonglong local_6e0;
  undefined1 local_6c0 [32];
  undefined1 local_620 [8];
  float fStack_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float fStack_608;
  float fStack_604;
  ulonglong local_540;
  undefined1 local_500 [32];
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [64];
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  uint local_460;
  uint uStack_45c;
  uint uStack_458;
  uint uStack_454;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
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
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 auVar80 [32];
  
  local_58 = in_ZMM15._0_16_;
  local_68 = in_ZMM14._0_16_;
  iVar2 = *(int *)(&DAT_151c6bbd0 + (longlong)(int)param_9 * 4);
  iVar3 = *(int *)(&DAT_151c6bbb0 + (longlong)(int)param_9 * 4);
  uVar9 = param_10 + 7;
  if (-1 < (int)param_10) {
    uVar9 = param_10;
  }
  uVar11 = (ulonglong)param_9;
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_10 < 1) {
      return;
    }
  }
  else {
    auVar75 = vpshufd_avx(ZEXT416(param_4),0);
    auVar15 = vpslld_avx(auVar75,2);
    auVar6 = vshufps_avx(ZEXT416((uint)param_7),ZEXT416((uint)param_7),0);
    auVar17 = vpshufd_avx(ZEXT416(-(uint)(param_9 == 3)),0);
    auVar26 = vpshufd_avx(ZEXT416((uint)(iVar2 * iVar3)),0);
    uVar12 = 0;
    auVar75._4_4_ = __real_00000002;
    auVar75._0_4_ = __real_00000002;
    auVar75._8_4_ = __real_00000002;
    auVar75._12_4_ = __real_00000002;
    auVar87 = ZEXT1264(ZEXT812(0));
    do {
      auVar77 = auVar87._0_32_;
      uVar10 = (ulonglong)(uint)((int)uVar12 * 8);
      auVar1 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar10);
      auVar18 = *(undefined1 (*) [16])(param_2 + 0x20 + uVar10);
      auVar40 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar10);
      auVar16 = vshufps_avx(*(undefined1 (*) [16])(param_2 + uVar10),auVar1,0xdd);
      auVar46 = vshufps_avx(auVar18,auVar40,0xdd);
      auVar46 = vpmulld_avx(auVar46,auVar15);
      auVar16 = vpmulld_avx(auVar16,auVar15);
      uVar4 = *(uint *)(param_3 + 4 + (longlong)auVar16._0_4_);
      auVar24 = ZEXT416(uVar4);
      uVar82 = *(uint *)(param_3 + 4 + (longlong)auVar46._0_4_);
      auVar16 = ZEXT416(*(uint *)(param_3 + auVar16._0_4_));
      auVar46 = ZEXT416(*(uint *)(param_3 + auVar46._0_4_));
      vpmovsxdq_avx(auVar46);
      auVar46 = vpshufd_avx(auVar46,0xee);
      vpmovsxdq_avx(auVar46);
      auVar41 = vpmovsxdq_avx(auVar16);
      auVar46 = vpshufd_avx(auVar16,0xee);
      vpmovsxdq_avx(auVar46);
      auVar46 = vpcmpgtd_avx(auVar75,ZEXT416(uVar82));
      auVar16 = vpcmpgtd_avx(auVar75,auVar24);
      auVar48._16_16_ = auVar46;
      auVar48._0_16_ = auVar16;
      iVar8 = vmovmskps_avx(auVar48);
      auVar83 = in_ZMM15._0_32_;
      if (iVar8 == 0) {
        auVar49 = SUB6432(ZEXT864(0),0) << 0x20;
LAB_140afda14:
        auVar48 = vcmpps_avx(auVar77,auVar77,0xf);
        auVar50._0_4_ = auVar49._0_4_ ^ auVar48._0_4_;
        auVar50._4_4_ = auVar49._4_4_ ^ auVar48._4_4_;
        auVar50._8_4_ = auVar49._8_4_ ^ auVar48._8_4_;
        auVar50._12_4_ = auVar49._12_4_ ^ auVar48._12_4_;
        auVar50._16_4_ = auVar49._16_4_ ^ auVar48._16_4_;
        auVar50._20_4_ = auVar49._20_4_ ^ auVar48._20_4_;
        auVar50._24_4_ = auVar49._24_4_ ^ auVar48._24_4_;
        auVar50._28_4_ = auVar49._28_4_ ^ auVar48._28_4_;
        if (param_7 <= 0.0) {
          auVar48 = ZEXT832(0) << 0x20;
          auVar83 = vblendvps_avx(auVar83,ZEXT832(0) << 0x20,auVar50);
          auVar79 = vblendvps_avx(local_6c0,ZEXT832(0) << 0x20,auVar50);
        }
        else {
          auVar16 = vpcmpeqd_avx(auVar75,auVar75);
          auVar46._0_4_ = uVar82 + auVar16._0_4_;
          auVar46._4_4_ = auVar16._4_4_;
          auVar46._8_4_ = auVar16._8_4_;
          auVar46._12_4_ = auVar16._12_4_;
          auVar75._0_4_ = auVar16._0_4_ + uVar4;
          auVar75._4_4_ = auVar16._4_4_;
          auVar75._8_4_ = auVar16._8_4_;
          auVar75._12_4_ = auVar16._12_4_;
          auVar76._16_16_ = auVar46;
          auVar76._0_16_ = auVar75;
          if (__real_3f800000 <= param_7) {
            auVar83 = vblendvps_avx(auVar83,auVar76,auVar50);
            auVar79 = vblendvps_avx(local_6c0,auVar76,auVar50);
            auVar48 = ZEXT1632((undefined1  [16])0x0);
          }
          else {
            auVar48 = vcvtdq2ps_avx(auVar76);
            local_480 = auVar6._0_4_;
            fStack_47c = auVar6._4_4_;
            fStack_478 = auVar6._8_4_;
            fStack_474 = auVar6._12_4_;
            auVar86._0_4_ = auVar48._0_4_ * local_480;
            auVar86._4_4_ = auVar48._4_4_ * fStack_47c;
            auVar86._8_4_ = auVar48._8_4_ * fStack_478;
            auVar86._12_4_ = auVar48._12_4_ * fStack_474;
            auVar86._16_4_ = auVar48._16_4_ * local_480;
            auVar86._20_4_ = auVar48._20_4_ * fStack_47c;
            auVar86._24_4_ = auVar48._24_4_ * fStack_478;
            auVar86._28_4_ = auVar48._28_4_ * fStack_474;
            auVar77 = vroundps_avx(auVar86,9);
            auVar48 = ZEXT832(0) << 0x20;
            if (param_8 != '\x01') {
              auVar48 = vsubps_avx(auVar86,auVar77);
            }
            auVar78._0_4_ = (int)auVar77._0_4_;
            auVar78._4_4_ = (int)auVar77._4_4_;
            auVar78._8_4_ = (int)auVar77._8_4_;
            auVar78._12_4_ = (int)auVar77._12_4_;
            auVar80._16_4_ = (int)auVar77._16_4_;
            auVar80._0_16_ = auVar78;
            auVar80._20_4_ = (int)auVar77._20_4_;
            auVar80._24_4_ = (int)auVar77._24_4_;
            auVar80._28_4_ = (int)auVar77._28_4_;
            auVar16 = vpminsd_avx(auVar80._16_16_,auVar46);
            auVar78 = vpminsd_avx(auVar78,auVar75);
            auVar81._16_16_ = auVar16;
            auVar81._0_16_ = auVar78;
            auVar83 = vblendvps_avx(auVar83,auVar81,auVar50);
            auVar16 = vpcmpeqd_avx(in_ZMM15._0_16_,in_ZMM15._0_16_);
            auVar78 = vpsubd_avx(auVar83._0_16_,auVar16);
            auVar16 = vpsubd_avx(auVar83._16_16_,auVar16);
            auVar46 = vpminsd_avx(auVar16,auVar46);
            auVar75 = vpminsd_avx(auVar78,auVar75);
            auVar77._16_16_ = auVar46;
            auVar77._0_16_ = auVar75;
            auVar79 = vblendvps_avx(local_6c0,auVar77,auVar50);
            auVar77 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          }
        }
        _local_620 = vblendvps_avx(_local_620,auVar48,auVar50);
      }
      else {
        auVar46 = vpcmpgtd_avx(auVar75,ZEXT416(uVar82));
        auVar16 = vpcmpgtd_avx(auVar75,auVar24);
        auVar49._16_16_ = auVar46;
        auVar49._0_16_ = auVar16;
        uVar47 = auVar16._0_4_;
        auVar83._0_4_ = ~uVar47 & in_ZMM15._0_4_;
        uVar53 = auVar16._4_4_;
        auVar83._4_4_ = ~uVar53 & in_ZMM15._4_4_;
        uVar54 = auVar16._8_4_;
        auVar83._8_4_ = ~uVar54 & in_ZMM15._8_4_;
        uVar55 = auVar16._12_4_;
        auVar83._12_4_ = ~uVar55 & in_ZMM15._12_4_;
        uVar56 = auVar46._0_4_;
        auVar83._16_4_ = ~uVar56 & in_ZMM15._16_4_;
        uVar57 = auVar46._4_4_;
        auVar83._20_4_ = ~uVar57 & in_ZMM15._20_4_;
        uVar58 = auVar46._8_4_;
        auVar83._24_4_ = ~uVar58 & in_ZMM15._24_4_;
        uVar59 = auVar46._12_4_;
        auVar83._28_4_ = ~uVar59 & in_ZMM15._28_4_;
        auVar79._0_4_ = ~uVar47 & local_6c0._0_4_;
        auVar79._4_4_ = ~uVar53 & local_6c0._4_4_;
        auVar79._8_4_ = ~uVar54 & local_6c0._8_4_;
        auVar79._12_4_ = ~uVar55 & local_6c0._12_4_;
        auVar79._16_4_ = ~uVar56 & local_6c0._16_4_;
        auVar79._20_4_ = ~uVar57 & local_6c0._20_4_;
        auVar79._24_4_ = ~uVar58 & local_6c0._24_4_;
        auVar79._28_4_ = ~uVar59 & local_6c0._28_4_;
        local_620._4_4_ = ~uVar53 & local_620._4_4_;
        local_620._0_4_ = ~uVar47 & local_620._0_4_;
        fStack_618 = (float)(~uVar54 & (uint)fStack_618);
        fStack_614 = (float)(~uVar55 & (uint)fStack_614);
        fStack_610 = (float)(~uVar56 & (uint)fStack_610);
        fStack_60c = (float)(~uVar57 & (uint)fStack_60c);
        fStack_608 = (float)(~uVar58 & (uint)fStack_608);
        fStack_604 = (float)(~uVar59 & (uint)fStack_604);
        local_6c0 = auVar79;
        if ((char)iVar8 != -1) goto LAB_140afda14;
      }
      auVar16._4_4_ = __real_00000001;
      auVar16._0_4_ = __real_00000001;
      auVar16._8_4_ = __real_00000001;
      auVar16._12_4_ = __real_00000001;
      auVar46 = vpcmpgtd_avx(ZEXT416(uVar82),auVar16);
      auVar16 = vpcmpgtd_avx(auVar24,auVar16);
      local_460 = auVar17._0_4_;
      uStack_45c = auVar17._4_4_;
      uStack_458 = auVar17._8_4_;
      uStack_454 = auVar17._12_4_;
      auVar27._0_4_ = auVar16._0_4_ & local_460;
      auVar27._4_4_ = auVar16._4_4_ & uStack_45c;
      auVar27._8_4_ = auVar16._8_4_ & uStack_458;
      auVar27._12_4_ = auVar16._12_4_ & uStack_454;
      auVar27._16_4_ = auVar46._0_4_ & local_460;
      auVar27._20_4_ = auVar46._4_4_ & uStack_45c;
      auVar27._24_4_ = auVar46._8_4_ & uStack_458;
      auVar27._28_4_ = auVar46._12_4_ & uStack_454;
      auVar48 = vblendvps_avx(auVar77,
                              ___ymm_0000001800000018000000180000001800000018000000180000001800000018
                              ,auVar27);
      auVar24 = auVar48._0_16_;
      auVar16 = auVar48._16_16_;
      auVar46 = vpmovsxdq_avx(auVar16);
      auVar16 = vshufpd_avx(auVar16,auVar16,3);
      vpmovsxdq_avx(auVar16);
      vpmovsxdq_avx(auVar24);
      auVar16 = vshufpd_avx(auVar24,auVar24,3);
      vpmovsxdq_avx(auVar16);
      auVar16 = auVar83._0_16_;
      if (param_9 < 7) {
        auVar17 = vpmulld_avx(auVar16,auVar26);
        auVar75 = vpmulld_avx(auVar83._16_16_,auVar26);
        vpmovsxdq_avx(auVar75);
        auVar75 = vpshufd_avx(auVar75,0xee);
        vpmovsxdq_avx(auVar75);
        auVar75 = vpmovsxdq_avx(auVar17);
        auVar17 = vpshufd_avx(auVar17,0xee);
        vpmovsxdq_avx(auVar17);
                    /* WARNING: Could not recover jumptable at 0x000140afdbf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_151c6bb00 + *(int *)(&DAT_151c6bb00 + uVar11 * 4)))
                  (auVar46._0_8_,&DAT_151c6bb00 + *(int *)(&DAT_151c6bb00 + uVar11 * 4),
                   auVar75._0_8_,auVar41._0_8_);
        return;
      }
      auVar50 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar49 = ZEXT1632((undefined1  [16])0x0);
      auVar48 = ZEXT1632((undefined1  [16])0x0);
      auVar60._0_4_ = auVar83._0_4_ ^ auVar79._0_4_;
      auVar60._4_4_ = auVar83._4_4_ ^ auVar79._4_4_;
      auVar60._8_4_ = auVar83._8_4_ ^ auVar79._8_4_;
      auVar60._12_4_ = auVar83._12_4_ ^ auVar79._12_4_;
      auVar60._16_4_ = auVar83._16_4_ ^ auVar79._16_4_;
      auVar60._20_4_ = auVar83._20_4_ ^ auVar79._20_4_;
      auVar60._24_4_ = auVar83._24_4_ ^ auVar79._24_4_;
      auVar60._28_4_ = auVar83._28_4_ ^ auVar79._28_4_;
      auVar75 = vpcmpeqd_avx(auVar75,auVar75);
      in_ZMM15 = ZEXT3264(auVar83);
      if (auVar60 != (undefined1  [32])0x0) {
        auVar41 = auVar79._0_16_;
        auVar46 = vpcmpeqd_avx(auVar83._16_16_,auVar79._16_16_);
        if (param_9 < 7) {
          vpcmpeqd_avx(auVar16,auVar41);
          auVar17 = vpmulld_avx(auVar41,auVar26);
          auVar75 = vpmulld_avx(auVar79._16_16_,auVar26);
          vpmovsxdq_avx(auVar75);
          auVar75 = vpshufd_avx(auVar75,0xee);
          vpmovsxdq_avx(auVar75);
          auVar75 = vpmovsxdq_avx(auVar17);
          auVar17 = vpshufd_avx(auVar17,0xee);
          vpmovsxdq_avx(auVar17);
                    /* WARNING: Could not recover jumptable at 0x000140afe36b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_151c6bb1c + *(int *)(&DAT_151c6bb1c + uVar11 * 4)))
                    (&DAT_151c6bb1c + *(int *)(&DAT_151c6bb1c + uVar11 * 4),&DAT_151c6bb1c,
                     auVar75._0_8_);
          return;
        }
        auVar24 = vpcmpeqd_avx(auVar16,auVar41);
        auVar19._16_16_ = auVar75 ^ auVar46;
        auVar19._0_16_ = auVar75 ^ auVar24;
        auVar83 = vmaskmovps_avx(auVar19,auVar77);
        auVar48 = vmaskmovps_avx(auVar19,auVar77);
        auVar49 = vmaskmovps_avx(auVar19,auVar77);
        auVar16 = vpcmpeqd_avx(auVar16,auVar41);
        auVar20._16_16_ = auVar75 ^ auVar46;
        auVar20._0_16_ = auVar75 ^ auVar16;
        auVar83 = vsubps_avx(auVar83,auVar77);
        auVar48 = vsubps_avx(auVar48,auVar77);
        auVar49 = vsubps_avx(auVar49,auVar77);
        auVar28._0_4_ = (float)local_620._0_4_ * auVar83._0_4_ + 0.0;
        auVar28._4_4_ = (float)local_620._4_4_ * auVar83._4_4_ + 0.0;
        fVar63 = auVar77._8_4_;
        auVar28._8_4_ = fVar63 + fStack_618 * auVar83._8_4_;
        fVar64 = auVar77._12_4_;
        auVar28._12_4_ = fVar64 + fStack_614 * auVar83._12_4_;
        fVar65 = auVar77._16_4_;
        auVar28._16_4_ = fVar65 + fStack_610 * auVar83._16_4_;
        fVar66 = auVar77._20_4_;
        auVar28._20_4_ = fVar66 + fStack_60c * auVar83._20_4_;
        fVar67 = auVar77._24_4_;
        auVar28._24_4_ = fVar67 + fStack_608 * auVar83._24_4_;
        fVar68 = auVar77._28_4_;
        auVar28._28_4_ = fVar68 + fStack_604 * auVar83._28_4_;
        auVar42._0_4_ = (float)local_620._0_4_ * auVar48._0_4_ + 0.0;
        auVar42._4_4_ = (float)local_620._4_4_ * auVar48._4_4_ + 0.0;
        auVar42._8_4_ = fVar63 + fStack_618 * auVar48._8_4_;
        auVar42._12_4_ = fVar64 + fStack_614 * auVar48._12_4_;
        auVar42._16_4_ = fVar65 + fStack_610 * auVar48._16_4_;
        auVar42._20_4_ = fVar66 + fStack_60c * auVar48._20_4_;
        auVar42._24_4_ = fVar67 + fStack_608 * auVar48._24_4_;
        auVar42._28_4_ = fVar68 + fStack_604 * auVar48._28_4_;
        auVar51._0_4_ = (float)local_620._0_4_ * auVar49._0_4_ + 0.0;
        auVar51._4_4_ = (float)local_620._4_4_ * auVar49._4_4_ + 0.0;
        auVar51._8_4_ = fVar63 + fStack_618 * auVar49._8_4_;
        auVar51._12_4_ = fVar64 + fStack_614 * auVar49._12_4_;
        auVar51._16_4_ = fVar65 + fStack_610 * auVar49._16_4_;
        auVar51._20_4_ = fVar66 + fStack_60c * auVar49._20_4_;
        auVar51._24_4_ = fVar67 + fStack_608 * auVar49._24_4_;
        auVar51._28_4_ = fVar68 + fStack_604 * auVar49._28_4_;
        auVar48 = vmaskmovps_avx(auVar20,auVar28);
        auVar49 = vmaskmovps_avx(auVar20,auVar42);
        auVar50 = vmaskmovps_avx(auVar20,auVar51);
      }
      auVar21._16_16_ = auVar40;
      auVar21._0_16_ = auVar1;
      auVar29._16_16_ = auVar18;
      auVar29._0_16_ = *(undefined1 (*) [16])(param_2 + uVar10);
      local_220 = vshufps_avx(auVar29,auVar21,0x88);
      auVar70._16_16_ = auVar49._0_16_;
      auVar70._0_16_ = auVar48._0_16_;
      auVar76 = vperm2f128_avx(auVar48,auVar49,0x31);
      auVar73._16_16_ = auVar48._0_16_;
      auVar73._0_16_ = auVar49._0_16_;
      auVar83 = vshufps_avx(auVar73,auVar73,0xe1);
      auVar83 = vblendps_avx(auVar70,auVar83,0x12);
      auVar86 = vperm2f128_avx(auVar77,auVar50,0x21);
      auVar77 = vshufps_avx(auVar86,auVar86,0x14);
      auVar77 = vblendps_avx(ZEXT1632(CONCAT88(auVar50._0_8_,auVar50._0_8_)),auVar77,0x48);
      auVar87 = ZEXT864(0) << 0x20;
      local_180 = vblendps_avx(auVar83,auVar77,0xcc);
      auVar77 = vshufps_avx(auVar73,auVar73,0xeb);
      auVar83 = vshufpd_avx(auVar70,auVar70,5);
      auVar83 = vblendps_avx(auVar83,auVar77,0x12);
      auVar77 = vshufps_avx(auVar86,auVar86,0xb4);
      auVar77 = vblendps_avx(ZEXT1632(auVar50._0_16_),auVar77,0x48);
      local_160 = vblendps_avx(auVar83,auVar77,0xcc);
      auVar77 = vperm2f128_avx(auVar49,auVar48,0x31);
      auVar83 = vshufps_avx(auVar77,auVar77,0xe1);
      auVar83 = vblendps_avx(auVar76,auVar83,0x12);
      auVar48 = vunpcklps_avx(auVar50,ZEXT832(0) << 0x20);
      auVar48 = vblendps_avx(ZEXT1632(CONCAT88(auVar50._16_8_,auVar50._16_8_)),auVar48,0x48);
      local_140 = vblendps_avx(auVar83,auVar48,0xcc);
      auVar48 = vshufps_avx(auVar77,auVar77,0xeb);
      auVar83 = vshufpd_avx(auVar76,auVar76,5);
      auVar83 = vblendps_avx(auVar83,auVar48,0x12);
      auVar48 = vunpckhps_avx(auVar50,ZEXT832(0) << 0x20);
      auVar48 = vblendps_avx(ZEXT1632(auVar50._16_16_),auVar48,0x48);
      local_120 = vblendps_avx(auVar83,auVar48,0xcc);
      uVar10 = 0xff;
      do {
        uVar4 = 0;
        for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
          uVar4 = uVar4 + 1;
        }
        bVar5 = (byte)uVar4 & 0x3f;
        iVar8 = *(int *)(local_220 + (ulonglong)(uVar4 & 7) * 4);
        auVar83 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_180 + (uVar4 << 4)));
        *(undefined1 (*) [16])(param_1 + 0x40 + (longlong)iVar8 * 0x60) = auVar83._0_16_;
        *(undefined1 (*) [16])(param_1 + 0x50 + (longlong)iVar8 * 0x60) = auVar83._16_16_;
        uVar10 = uVar10 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
      } while (uVar10 != 0);
      uVar12 = uVar12 + 8;
      auVar75._4_4_ = __real_00000002;
      auVar75._0_4_ = __real_00000002;
      auVar75._8_4_ = __real_00000002;
      auVar75._12_4_ = __real_00000002;
      local_6c0 = auVar79;
    } while (uVar12 < (uVar9 & 0xfffffff8));
    if ((int)param_10 <= (int)uVar12) {
      return;
    }
  }
  auVar75 = vpshufd_avx(ZEXT416((uint)uVar12),0);
  auVar30._16_16_ = auVar75;
  auVar30._0_16_ = auVar75;
  auVar1 = vpshufd_avx(ZEXT416(param_10),0);
  auVar40 = SUB3216(auVar30 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar46 = SUB3216(auVar30 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar6 = vpcmpgtd_avx(auVar1,auVar46);
  auVar15 = vpcmpgtd_avx(auVar1,auVar40);
  auVar17 = vpslld_avx(auVar75,3);
  auVar75 = vpand_avx(auVar15,auVar17);
  uVar82 = auVar15._0_4_;
  auVar26._0_4_ = uVar82 & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
  uVar47 = auVar15._4_4_;
  auVar26._4_4_ = uVar47 & _UNK_150b519c4;
  uVar53 = auVar15._8_4_;
  auVar26._8_4_ = uVar53 & _UNK_150b519c8;
  uVar54 = auVar15._12_4_;
  auVar26._12_4_ = uVar54 & _UNK_150b519cc;
  uVar55 = auVar6._0_4_;
  uVar56 = auVar6._4_4_;
  uVar57 = auVar6._8_4_;
  uVar58 = auVar6._12_4_;
  vextractps_avx(auVar26,1);
  vextractps_avx(auVar26,2);
  vextractps_avx(auVar26,3);
  auVar17 = vpand_avx(auVar6,auVar17);
  lVar13 = auVar17._0_4_ + param_2;
  auVar18._0_4_ = uVar82 & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
  auVar18._4_4_ = uVar47 & _UNK_150b519e4;
  auVar18._8_4_ = uVar53 & _UNK_150b519e8;
  auVar18._12_4_ = uVar54 & _UNK_150b519ec;
  vextractps_avx(auVar18,1);
  vextractps_avx(auVar18,2);
  vextractps_avx(auVar18,3);
  auVar17 = vpshufd_avx(ZEXT416(param_4),0);
  auVar17 = vpslld_avx(auVar17,2);
  auVar26 = vpmulld_avx(ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b519f0) + lVar13)),auVar17);
  auVar17 = vpmulld_avx(ZEXT416(*(uint *)((ulonglong)auVar18._0_4_ + param_2 + auVar75._0_4_)),
                        auVar17);
  auVar17 = vpand_avx(auVar15,auVar17);
  auVar26 = vpand_avx(auVar6,auVar26);
  auVar16 = ZEXT416(*(uint *)(param_3 + auVar17._0_4_));
  auVar24 = ZEXT416(*(uint *)(param_3 + auVar26._0_4_));
  uVar9 = *(uint *)((ulonglong)
                    (uVar82 & 
                    ___ymm_0000000400000004000000040000000400000004000000040000000400000004) +
                   param_3 + auVar17._0_4_);
  uVar4 = *(uint *)((ulonglong)(uVar55 & _UNK_150b50d50) + param_3 + auVar26._0_4_);
  local_6c0 = ZEXT1632(ZEXT816(0));
  auVar17 = vpshufd_avx(auVar24,0xee);
  vpmovsxdq_avx(auVar17);
  auVar41._4_4_ = __real_00000002;
  auVar41._0_4_ = __real_00000002;
  auVar41._8_4_ = __real_00000002;
  auVar41._12_4_ = __real_00000002;
  auVar17 = vpcmpgtd_avx(auVar41,ZEXT416(uVar4));
  auVar26 = vpcmpgtd_avx(auVar41,ZEXT416(uVar9));
  auVar22._0_4_ = uVar82 & auVar26._0_4_;
  auVar22._4_4_ = uVar47 & auVar26._4_4_;
  auVar22._8_4_ = uVar53 & auVar26._8_4_;
  auVar22._12_4_ = uVar54 & auVar26._12_4_;
  auVar22._16_4_ = uVar55 & auVar17._0_4_;
  auVar22._20_4_ = uVar56 & auVar17._4_4_;
  auVar22._24_4_ = uVar57 & auVar17._8_4_;
  auVar22._28_4_ = uVar58 & auVar17._12_4_;
  iVar8 = vmovmskps_avx(auVar22);
  auVar18 = vpshufd_avx(auVar16,0xee);
  vpmovsxdq_avx(auVar18);
  vpmovsxdq_avx(auVar24);
  vpmovsxdq_avx(auVar16);
  auVar32 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (iVar8 != 0) {
    auVar18 = vpcmpgtd_avx(auVar1,auVar46);
    auVar16 = vpcmpgtd_avx(auVar1,auVar40);
    auVar31._16_16_ = auVar18;
    auVar31._0_16_ = auVar16;
    uVar14 = vmovmskps_avx(auVar31);
    if ((char)uVar14 == (char)iVar8) {
      auVar48 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      local_6c0 = ZEXT832(0) << 0x20;
      auVar83 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      goto LAB_140aff717;
    }
    auVar17 = vpand_avx(auVar17,auVar6);
    auVar26 = vpand_avx(auVar26,auVar15);
    auVar17 = vpackssdw_avx(auVar26,auVar17);
    auVar26 = vpmovsxwd_avx(auVar17);
    auVar17 = vpunpckhwd_avx(auVar17,auVar17);
    auVar32._16_16_ = auVar17;
    auVar32._0_16_ = auVar26;
  }
  auVar83 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),
                       SUB6432(ZEXT1664((undefined1  [16])0x0),0),0xf);
  auVar52._0_4_ = auVar32._0_4_ ^ auVar83._0_4_;
  auVar52._4_4_ = auVar32._4_4_ ^ auVar83._4_4_;
  auVar52._8_4_ = auVar32._8_4_ ^ auVar83._8_4_;
  auVar52._12_4_ = auVar32._12_4_ ^ auVar83._12_4_;
  auVar52._16_4_ = auVar32._16_4_ ^ auVar83._16_4_;
  auVar52._20_4_ = auVar32._20_4_ ^ auVar83._20_4_;
  auVar52._24_4_ = auVar32._24_4_ ^ auVar83._24_4_;
  auVar52._28_4_ = auVar32._28_4_ ^ auVar83._28_4_;
  auVar17._0_12_ = ZEXT812(0);
  auVar17._12_4_ = 0;
  auVar83 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar48 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  if (0.0 < param_7) {
    auVar17 = vpcmpeqd_avx(auVar17,auVar17);
    auVar6._0_4_ = uVar4 + auVar17._0_4_;
    auVar6._4_4_ = auVar17._4_4_;
    auVar6._8_4_ = auVar17._8_4_;
    auVar6._12_4_ = auVar17._12_4_;
    auVar15._0_4_ = uVar9 + auVar17._0_4_;
    auVar15._4_4_ = auVar17._4_4_;
    auVar15._8_4_ = auVar17._8_4_;
    auVar15._12_4_ = auVar17._12_4_;
    auVar71._16_16_ = auVar6;
    auVar71._0_16_ = auVar15;
    if (__real_3f800000 <= param_7) {
      auVar34._0_4_ = auVar52._0_4_ & uVar82;
      auVar34._4_4_ = auVar52._4_4_ & uVar47;
      auVar34._8_4_ = auVar52._8_4_ & uVar53;
      auVar34._12_4_ = auVar52._12_4_ & uVar54;
      auVar34._16_4_ = auVar52._16_4_ & uVar55;
      auVar34._20_4_ = auVar52._20_4_ & uVar56;
      auVar34._24_4_ = auVar52._24_4_ & uVar57;
      auVar34._28_4_ = auVar52._28_4_ & uVar58;
      auVar83 = vblendvps_avx(auVar48,auVar71,auVar34);
      local_6c0 = auVar83;
    }
    else {
      auVar17 = vshufps_avx(ZEXT416((uint)param_7),ZEXT416((uint)param_7),0);
      auVar83 = vcvtdq2ps_avx(auVar71);
      auVar61._0_4_ = auVar17._0_4_ * auVar83._0_4_;
      auVar61._4_4_ = auVar17._4_4_ * auVar83._4_4_;
      auVar61._8_4_ = auVar17._8_4_ * auVar83._8_4_;
      auVar61._12_4_ = auVar17._12_4_ * auVar83._12_4_;
      auVar61._16_4_ = auVar17._0_4_ * auVar83._16_4_;
      auVar61._20_4_ = auVar17._4_4_ * auVar83._20_4_;
      auVar61._24_4_ = auVar17._8_4_ * auVar83._24_4_;
      auVar61._28_4_ = auVar17._12_4_ * auVar83._28_4_;
      auVar84._0_4_ = auVar52._0_4_ & uVar82;
      auVar84._4_4_ = auVar52._4_4_ & uVar47;
      auVar84._8_4_ = auVar52._8_4_ & uVar53;
      auVar84._12_4_ = auVar52._12_4_ & uVar54;
      auVar84._16_4_ = auVar52._16_4_ & uVar55;
      auVar84._20_4_ = auVar52._20_4_ & uVar56;
      auVar84._24_4_ = auVar52._24_4_ & uVar57;
      auVar84._28_4_ = auVar52._28_4_ & uVar58;
      auVar83 = vroundps_avx(auVar61,9);
      auVar24._0_4_ = (int)auVar83._0_4_;
      auVar24._4_4_ = (int)auVar83._4_4_;
      auVar24._8_4_ = (int)auVar83._8_4_;
      auVar24._12_4_ = (int)auVar83._12_4_;
      auVar74._16_4_ = (int)auVar83._16_4_;
      auVar74._0_16_ = auVar24;
      auVar74._20_4_ = (int)auVar83._20_4_;
      auVar74._24_4_ = (int)auVar83._24_4_;
      auVar74._28_4_ = (int)auVar83._28_4_;
      auVar17 = vpminsd_avx(auVar74._16_16_,auVar6);
      auVar26 = vpminsd_avx(auVar24,auVar15);
      auVar43._16_16_ = auVar17;
      auVar43._0_16_ = auVar26;
      auVar48 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      local_6c0 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar43,auVar84);
      if (param_8 != '\x01') {
        auVar48 = vsubps_avx(auVar61,auVar83);
      }
      auVar17 = vpcmpeqd_avx(auVar83._0_16_,auVar83._0_16_);
      auVar26 = vpsubd_avx(local_6c0._0_16_,auVar17);
      auVar17 = vpsubd_avx(local_6c0._16_16_,auVar17);
      auVar17 = vpminsd_avx(auVar17,auVar6);
      auVar26 = vpminsd_avx(auVar26,auVar15);
      auVar33._16_16_ = auVar17;
      auVar33._0_16_ = auVar26;
      auVar83 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar33,auVar84);
    }
  }
  auVar48 = vblendvps_avx(ZEXT1232(ZEXT812(0)),auVar48,auVar52);
LAB_140aff717:
  local_6e0 = (ulonglong)*(uint *)((ulonglong)(uVar55 & _UNK_150b519d0) + lVar13);
  local_540 = (ulonglong)*(uint *)(param_2 + auVar75._0_4_);
  auVar26 = vpshufd_avx(ZEXT416(-(uint)(param_9 == 3)),0);
  auVar25._4_4_ = __real_00000001;
  auVar25._0_4_ = __real_00000001;
  auVar25._8_4_ = __real_00000001;
  auVar25._12_4_ = __real_00000001;
  auVar75 = vpcmpgtd_avx(ZEXT416(uVar4),auVar25);
  auVar17 = vpcmpgtd_avx(ZEXT416(uVar9),auVar25);
  auVar35._0_4_ = auVar17._0_4_ & auVar26._0_4_;
  auVar35._4_4_ = auVar17._4_4_ & auVar26._4_4_;
  auVar35._8_4_ = auVar17._8_4_ & auVar26._8_4_;
  auVar35._12_4_ = auVar17._12_4_ & auVar26._12_4_;
  auVar35._16_4_ = auVar75._0_4_ & auVar26._0_4_;
  auVar35._20_4_ = auVar75._4_4_ & auVar26._4_4_;
  auVar35._24_4_ = auVar75._8_4_ & auVar26._8_4_;
  auVar35._28_4_ = auVar75._12_4_ & auVar26._12_4_;
  auVar77 = vblendvps_avx(ZEXT832(0) << 0x20,
                          ___ymm_0000001800000018000000180000001800000018000000180000001800000018,
                          auVar35);
  auVar26 = auVar77._0_16_;
  auVar17 = auVar77._16_16_;
  auVar75 = vpmovsxdq_avx(auVar17);
  auVar17 = vshufpd_avx(auVar17,auVar17,3);
  vpmovsxdq_avx(auVar17);
  vpmovsxdq_avx(auVar26);
  auVar17 = vshufpd_avx(auVar26,auVar26,3);
  vpmovsxdq_avx(auVar17);
  auVar17 = vpshufd_avx(ZEXT416((uint)(iVar2 * iVar3)),0);
  if (param_9 < 7) {
    auVar26 = vpmulld_avx(local_6c0._0_16_,auVar17);
    auVar17 = vpmulld_avx(local_6c0._16_16_,auVar17);
    auVar75 = vpmovsxdq_avx(auVar17);
    auVar17 = vpshufd_avx(auVar17,0xee);
    vpmovsxdq_avx(auVar17);
    auVar17 = vpmovsxdq_avx(auVar26);
    auVar26 = vpshufd_avx(auVar26,0xee);
    vpmovsxdq_avx(auVar26);
                    /* WARNING: Could not recover jumptable at 0x000140aff879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_151c6bb38 + *(int *)(&DAT_151c6bb38 + uVar11 * 4)))
              (uVar56 & _UNK_150b50d54,uVar57 & _UNK_150b50d58,auVar17._0_8_,auVar75._0_8_);
    return;
  }
  auVar26 = vpcmpgtd_avx(auVar1,auVar46);
  auVar6 = vpcmpgtd_avx(auVar1,auVar40);
  auVar36._16_16_ = auVar26;
  auVar36._0_16_ = auVar6;
  local_500 = vmaskmovps_avx(auVar36,ZEXT832(0) << 0x20);
  local_4e0 = vmaskmovps_avx(auVar36,ZEXT832(0) << 0x20);
  local_4c0._0_32_ = vmaskmovps_avx(auVar36,ZEXT832(0) << 0x20);
  auVar26 = vpcmpeqd_avx(auVar83._16_16_,local_6c0._16_16_);
  auVar6 = vpcmpeqd_avx(auVar83._0_16_,local_6c0._0_16_);
  auVar37._16_16_ = auVar26;
  auVar37._0_16_ = auVar6;
  auVar15 = vpcmpgtd_avx(auVar1,auVar46);
  auVar18 = vpcmpgtd_avx(auVar1,auVar40);
  auVar44._16_16_ = auVar15;
  auVar44._0_16_ = auVar18;
  auVar44 = auVar44 & ~auVar37;
  if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) != 0 || (SUB321(auVar44 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar44 >> 0x5f,0) & 1) != 0) || SUB321(auVar44 >> 0x7f,0) != '\0') ||
        (SUB321(auVar44 >> 0x9f,0) & 1) != 0) || SUB321(auVar44 >> 0xbf,0) != '\0') ||
      (SUB321(auVar44 >> 0xdf,0) & 1) != 0) || auVar44[0x1f] < '\0') {
    auVar62._0_4_ = ~auVar6._0_4_ & uVar82;
    auVar62._4_4_ = ~auVar6._4_4_ & uVar47;
    auVar62._8_4_ = ~auVar6._8_4_ & uVar53;
    auVar62._12_4_ = ~auVar6._12_4_ & uVar54;
    auVar62._16_4_ = ~auVar26._0_4_ & uVar55;
    auVar62._20_4_ = ~auVar26._4_4_ & uVar56;
    auVar62._24_4_ = ~auVar26._8_4_ & uVar57;
    auVar62._28_4_ = ~auVar26._12_4_ & uVar58;
    if (param_9 < 7) {
      auVar26 = vpmulld_avx(auVar83._0_16_,auVar17);
      auVar17 = vpmulld_avx(auVar83._16_16_,auVar17);
      vpmovsxdq_avx(auVar17);
      auVar17 = vpshufd_avx(auVar17,0xee);
      vpmovsxdq_avx(auVar17);
      auVar17 = vpmovsxdq_avx(auVar26);
      auVar26 = vpshufd_avx(auVar26,0xee);
      vpmovsxdq_avx(auVar26);
                    /* WARNING: Could not recover jumptable at 0x000140b0056f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_151c6bb54 + *(int *)(&DAT_151c6bb54 + uVar11 * 4)))
                (auVar17._0_8_,&DAT_151c6bb54 + *(int *)(&DAT_151c6bb54 + uVar11 * 4),
                 -(uint)(param_9 == 3),auVar75._0_8_);
      return;
    }
    auVar83 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar77 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar49 = vmaskmovps_avx(auVar62,ZEXT1632((undefined1  [16])0x0));
    auVar83 = vsubps_avx(auVar83,local_500);
    auVar77 = vsubps_avx(auVar77,local_4e0);
    auVar49 = vsubps_avx(auVar49,local_4c0._0_32_);
    local_280 = auVar48._0_4_;
    fStack_27c = auVar48._4_4_;
    fStack_278 = auVar48._8_4_;
    fStack_274 = auVar48._12_4_;
    fStack_270 = auVar48._16_4_;
    fStack_26c = auVar48._20_4_;
    fStack_268 = auVar48._24_4_;
    fStack_264 = auVar48._28_4_;
    auVar23._0_4_ = local_500._0_4_ + local_280 * auVar83._0_4_;
    auVar23._4_4_ = local_500._4_4_ + fStack_27c * auVar83._4_4_;
    auVar23._8_4_ = local_500._8_4_ + fStack_278 * auVar83._8_4_;
    auVar23._12_4_ = local_500._12_4_ + fStack_274 * auVar83._12_4_;
    auVar23._16_4_ = local_500._16_4_ + fStack_270 * auVar83._16_4_;
    auVar23._20_4_ = local_500._20_4_ + fStack_26c * auVar83._20_4_;
    auVar23._24_4_ = local_500._24_4_ + fStack_268 * auVar83._24_4_;
    auVar23._28_4_ = local_500._28_4_ + fStack_264 * auVar83._28_4_;
    auVar38._0_4_ = local_4e0._0_4_ + local_280 * auVar77._0_4_;
    auVar38._4_4_ = local_4e0._4_4_ + fStack_27c * auVar77._4_4_;
    auVar38._8_4_ = local_4e0._8_4_ + fStack_278 * auVar77._8_4_;
    auVar38._12_4_ = local_4e0._12_4_ + fStack_274 * auVar77._12_4_;
    auVar38._16_4_ = local_4e0._16_4_ + fStack_270 * auVar77._16_4_;
    auVar38._20_4_ = local_4e0._20_4_ + fStack_26c * auVar77._20_4_;
    auVar38._24_4_ = local_4e0._24_4_ + fStack_268 * auVar77._24_4_;
    auVar38._28_4_ = local_4e0._28_4_ + fStack_264 * auVar77._28_4_;
    auVar45._0_4_ = local_4c0._0_4_ + local_280 * auVar49._0_4_;
    auVar45._4_4_ = local_4c0._4_4_ + fStack_27c * auVar49._4_4_;
    auVar45._8_4_ = local_4c0._8_4_ + fStack_278 * auVar49._8_4_;
    auVar45._12_4_ = local_4c0._12_4_ + fStack_274 * auVar49._12_4_;
    auVar45._16_4_ = local_4c0._16_4_ + fStack_270 * auVar49._16_4_;
    auVar45._20_4_ = local_4c0._20_4_ + fStack_26c * auVar49._20_4_;
    auVar45._24_4_ = local_4c0._24_4_ + fStack_268 * auVar49._24_4_;
    auVar45._28_4_ = local_4c0._28_4_ + fStack_264 * auVar49._28_4_;
    local_500 = vmaskmovps_avx(auVar62,auVar23);
    local_4e0 = vmaskmovps_avx(auVar62,auVar38);
    local_4c0._0_32_ = vmaskmovps_avx(auVar62,auVar45);
  }
  auVar69._0_12_ = ZEXT812(0);
  auVar69._12_4_ = 0;
  auVar72._16_16_ = local_4e0._0_16_;
  auVar72._0_16_ = local_500._0_16_;
  auVar49 = vperm2f128_avx(local_500,local_4e0,0x31);
  auVar77 = vperm2f128_avx(ZEXT1632(auVar69),local_4c0._0_32_,0x21);
  auVar83 = vshufps_avx(auVar77,auVar77,0x14);
  auVar83 = vblendps_avx(ZEXT1632(CONCAT88(local_4c0._0_8_,local_4c0._0_8_)),auVar83,0x48);
  auVar85._16_16_ = local_500._0_16_;
  auVar85._0_16_ = local_4e0._0_16_;
  auVar48 = vshufps_avx(auVar85,auVar85,0xe1);
  auVar48 = vblendps_avx(auVar72,auVar48,0x12);
  local_200 = vblendps_avx(auVar48,auVar83,0xcc);
  auVar83 = vshufps_avx(auVar77,auVar77,0xb4);
  auVar83 = vblendps_avx(ZEXT1632(local_4c0._0_16_),auVar83,0x48);
  auVar77 = vshufps_avx(auVar85,auVar85,0xeb);
  auVar48 = vshufpd_avx(auVar72,auVar72,5);
  auVar48 = vblendps_avx(auVar48,auVar77,0x12);
  local_1e0 = vblendps_avx(auVar48,auVar83,0xcc);
  auVar83 = vunpcklps_avx(local_4c0._0_32_,ZEXT1632(auVar69));
  auVar83 = vblendps_avx(ZEXT1632(CONCAT88(local_4c0._16_8_,local_4c0._16_8_)),auVar83,0x48);
  auVar77 = vperm2f128_avx(local_4e0,local_500,0x31);
  auVar48 = vshufps_avx(auVar77,auVar77,0xe1);
  auVar48 = vblendps_avx(auVar49,auVar48,0x12);
  local_1c0 = vblendps_avx(auVar48,auVar83,0xcc);
  auVar83 = vunpckhps_avx(local_4c0._0_32_,ZEXT1632(auVar69));
  auVar83 = vblendps_avx(ZEXT1632(local_4c0._16_16_),auVar83,0x48);
  auVar77 = vshufps_avx(auVar77,auVar77,0xeb);
  auVar48 = vshufpd_avx(auVar49,auVar49,5);
  auVar48 = vblendps_avx(auVar48,auVar77,0x12);
  local_1a0 = vblendps_avx(auVar48,auVar83,0xcc);
  auVar75 = vpcmpgtd_avx(auVar1,auVar40);
  auVar39._16_16_ = auVar15;
  auVar39._0_16_ = auVar75;
  uVar9 = vmovmskps_avx(auVar39);
  uVar11 = (ulonglong)uVar9;
  do {
    if (uVar11 == 0) {
      uVar9 = 0x40;
    }
    else {
      uVar9 = 0;
      for (uVar12 = uVar11; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x8000000000000000) {
        uVar9 = uVar9 + 1;
      }
    }
    bVar5 = (byte)uVar9 & 0x3f;
    local_240[0] = local_540;
    local_240[1] = 0;
    local_240[2] = local_6e0;
    uStack_228 = 0;
    auVar83 = vcvtps2pd_avx(*(undefined1 (*) [16])(local_200 + (uVar9 << 4)));
    lVar13 = (longlong)*(int *)((longlong)local_240 + (ulonglong)(uVar9 & 7) * 4) * 0x60;
    *(undefined1 (*) [16])(param_1 + 0x40 + lVar13) = auVar83._0_16_;
    *(undefined1 (*) [16])(param_1 + 0x50 + lVar13) = auVar83._16_16_;
    uVar11 = uVar11 & (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5);
  } while (uVar11 != 0);
  return;
}


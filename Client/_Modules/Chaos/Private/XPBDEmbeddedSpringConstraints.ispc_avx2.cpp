// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ApplyXPBDEmbeddedSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_avx2 @ 14088dc30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               byte param_6,float *param_7,longlong param_8,byte param_9,float *param_10,
               longlong param_11,uint param_12)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  uint uVar15;
  ulonglong uVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined1 auVar34 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  uint uVar35;
  int iVar36;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined1 auVar37 [32];
  uint uVar46;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  float fVar54;
  undefined1 auVar50 [32];
  float fVar58;
  undefined1 auVar51 [32];
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 in_ZMM2 [64];
  float fVar59;
  float fVar66;
  float fVar67;
  undefined1 auVar60 [16];
  float fVar68;
  undefined1 auVar61 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar73 [32];
  float fVar74;
  float fVar82;
  undefined1 auVar75 [32];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 in_ZMM5 [64];
  int iVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 in_ZMM7 [64];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  float fVar93;
  float fVar94;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  float fVar111;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [16];
  undefined1 auVar115 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  float fVar120;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined1 auVar121 [32];
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
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  int iVar23;
  undefined1 auVar86 [32];
  undefined1 auVar116 [32];
  
  fVar4 = __real_3f800000;
  uVar6 = __real_38d1b717;
  uVar15 = param_12 + 7;
  if (-1 < (int)param_12) {
    uVar15 = param_12;
  }
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    uVar30 = 0;
    do {
      uVar16 = uVar30 & 0xffffffff;
      fVar47 = *param_7;
      auVar113._4_4_ = fVar47;
      auVar113._0_4_ = fVar47;
      auVar113._8_4_ = fVar47;
      auVar113._12_4_ = fVar47;
      auVar113._16_4_ = fVar47;
      auVar113._20_4_ = fVar47;
      auVar113._24_4_ = fVar47;
      auVar113._28_4_ = fVar47;
      if ((param_6 & 1) != 0) {
        fVar3 = param_7[1];
        pfVar1 = (float *)(param_8 + uVar16);
        auVar113._0_4_ = fVar3 * *pfVar1 + fVar47;
        auVar113._4_4_ = fVar3 * pfVar1[1] + fVar47;
        auVar113._8_4_ = fVar3 * pfVar1[2] + fVar47;
        auVar113._12_4_ = fVar3 * pfVar1[3] + fVar47;
        auVar113._16_4_ = fVar3 * pfVar1[4] + fVar47;
        auVar113._20_4_ = fVar3 * pfVar1[5] + fVar47;
        auVar113._24_4_ = fVar3 * pfVar1[6] + fVar47;
        auVar113._28_4_ = fVar3 * pfVar1[7] + fVar47;
      }
      auVar33 = *(undefined1 (*) [32])(param_2 + uVar30 * 2);
      auVar89 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar30 * 2);
      auVar75 = vshufps_avx(auVar33,auVar89,0x88);
      auVar75 = vpermpd_avx2(auVar75,0xd8);
      auVar32 = vpslld_avx2(auVar75,4);
      auVar75 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar75);
      auVar75 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar62 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar75);
      auVar75 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
      auVar49 = vgatherdps(ZEXT832(0) << 0x20,auVar75);
      auVar75 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar121 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar75);
      auVar33 = vshufps_avx(auVar33,auVar89,0xdd);
      auVar33 = vpermpd_avx2(auVar33,0xd8);
      auVar115 = vpslld_avx2(auVar33,4);
      auVar33 = vpcmpeqd_avx2(auVar33,auVar33);
      auVar75 = vgatherdps(ZEXT832(0) << 0x20,auVar33);
      auVar33 = vpcmpeqd_avx2(auVar89,auVar89);
      auVar117 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar33);
      auVar33 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar89 = vgatherdps(ZEXT832(0),auVar33);
      auVar33 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar33);
      fVar47 = *param_10;
      auVar33._4_4_ = fVar47;
      auVar33._0_4_ = fVar47;
      auVar33._8_4_ = fVar47;
      auVar33._12_4_ = fVar47;
      auVar33._16_4_ = fVar47;
      auVar33._20_4_ = fVar47;
      auVar33._24_4_ = fVar47;
      auVar33._28_4_ = fVar47;
      if ((param_9 & 1) != 0) {
        fVar3 = param_10[1];
        pfVar1 = (float *)(param_11 + uVar16);
        auVar33._0_4_ = fVar3 * *pfVar1 + fVar47;
        auVar33._4_4_ = fVar3 * pfVar1[1] + fVar47;
        auVar33._8_4_ = fVar3 * pfVar1[2] + fVar47;
        auVar33._12_4_ = fVar3 * pfVar1[3] + fVar47;
        auVar33._16_4_ = fVar3 * pfVar1[4] + fVar47;
        auVar33._20_4_ = fVar3 * pfVar1[5] + fVar47;
        auVar33._24_4_ = fVar3 * pfVar1[6] + fVar47;
        auVar33._28_4_ = fVar3 * pfVar1[7] + fVar47;
      }
      auVar86 = vsubps_avx(auVar87,auVar75);
      auVar14 = vsubps_avx(auVar62,auVar117);
      auVar112 = vsubps_avx(auVar49,auVar89);
      auVar37._0_4_ =
           auVar112._0_4_ * auVar112._0_4_ +
           auVar86._0_4_ * auVar86._0_4_ + auVar14._0_4_ * auVar14._0_4_;
      auVar37._4_4_ =
           auVar112._4_4_ * auVar112._4_4_ +
           auVar86._4_4_ * auVar86._4_4_ + auVar14._4_4_ * auVar14._4_4_;
      auVar37._8_4_ =
           auVar112._8_4_ * auVar112._8_4_ +
           auVar86._8_4_ * auVar86._8_4_ + auVar14._8_4_ * auVar14._8_4_;
      auVar37._12_4_ =
           auVar112._12_4_ * auVar112._12_4_ +
           auVar86._12_4_ * auVar86._12_4_ + auVar14._12_4_ * auVar14._12_4_;
      auVar37._16_4_ =
           auVar112._16_4_ * auVar112._16_4_ +
           auVar86._16_4_ * auVar86._16_4_ + auVar14._16_4_ * auVar14._16_4_;
      auVar37._20_4_ =
           auVar112._20_4_ * auVar112._20_4_ +
           auVar86._20_4_ * auVar86._20_4_ + auVar14._20_4_ * auVar14._20_4_;
      auVar37._24_4_ =
           auVar112._24_4_ * auVar112._24_4_ +
           auVar86._24_4_ * auVar86._24_4_ + auVar14._24_4_ * auVar14._24_4_;
      auVar37._28_4_ =
           auVar112._28_4_ * auVar112._28_4_ +
           auVar86._28_4_ * auVar86._28_4_ + auVar14._28_4_ * auVar14._28_4_;
      auVar119 = vsqrtps_avx(auVar37);
      auVar13._4_4_ = uVar6;
      auVar13._0_4_ = uVar6;
      auVar13._8_4_ = uVar6;
      auVar13._12_4_ = uVar6;
      auVar13._16_4_ = uVar6;
      auVar13._20_4_ = uVar6;
      auVar13._24_4_ = uVar6;
      auVar13._28_4_ = uVar6;
      auVar13 = vcmpps_avx(auVar37,auVar13,1);
      uVar35 = auVar13._0_4_;
      auVar88._0_4_ = ~uVar35 & auVar119._0_4_;
      uVar40 = auVar13._4_4_;
      auVar88._4_4_ = ~uVar40 & auVar119._4_4_;
      uVar41 = auVar13._8_4_;
      auVar88._8_4_ = ~uVar41 & auVar119._8_4_;
      uVar42 = auVar13._12_4_;
      auVar88._12_4_ = ~uVar42 & auVar119._12_4_;
      uVar43 = auVar13._16_4_;
      auVar88._16_4_ = ~uVar43 & auVar119._16_4_;
      uVar44 = auVar13._20_4_;
      auVar88._20_4_ = ~uVar44 & auVar119._20_4_;
      uVar45 = auVar13._24_4_;
      auVar88._24_4_ = ~uVar45 & auVar119._24_4_;
      uVar46 = auVar13._28_4_;
      auVar88._28_4_ = ~uVar46 & auVar119._28_4_;
      auVar88 = vsubps_avx(auVar88,*(undefined1 (*) [32])(param_3 + uVar16));
      auVar37 = vcmpps_avx(ZEXT432(0) << 0x20,auVar88,2);
      auVar113 = vblendvps_avx(auVar33,auVar113,auVar37);
      auVar33 = vdivps_avx(auVar86,auVar119);
      in_ZMM7 = ZEXT3264(auVar33);
      auVar37 = vdivps_avx(auVar14,auVar119);
      auVar119 = vdivps_avx(auVar112,auVar119);
      fVar93 = param_5 * param_5 * auVar113._0_4_;
      fVar97 = param_5 * param_5 * auVar113._4_4_;
      fVar99 = param_5 * param_5 * auVar113._8_4_;
      fVar101 = param_5 * param_5 * auVar113._12_4_;
      fVar103 = param_5 * param_5 * auVar113._16_4_;
      fVar105 = param_5 * param_5 * auVar113._20_4_;
      fVar107 = param_5 * param_5 * auVar113._24_4_;
      fVar109 = param_5 * param_5 * auVar113._28_4_;
      pfVar1 = (float *)(param_4 + uVar16);
      fVar55 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar56 = pfVar1[2];
      fVar11 = pfVar1[3];
      fVar57 = pfVar1[4];
      fVar12 = pfVar1[5];
      fVar58 = pfVar1[6];
      fVar111 = pfVar1[7];
      auVar118._0_4_ = -(fVar93 * auVar88._0_4_) - fVar55;
      auVar118._4_4_ = -(fVar97 * auVar88._4_4_) - fVar10;
      auVar118._8_4_ = -(fVar99 * auVar88._8_4_) - fVar56;
      auVar118._12_4_ = -(fVar101 * auVar88._12_4_) - fVar11;
      auVar118._16_4_ = -(fVar103 * auVar88._16_4_) - fVar57;
      auVar118._20_4_ = -(fVar105 * auVar88._20_4_) - fVar12;
      auVar118._24_4_ = -(fVar107 * auVar88._24_4_) - fVar58;
      auVar118._28_4_ = -(fVar109 * auVar88._28_4_) - fVar111;
      fVar47 = auVar91._0_4_;
      fVar120 = auVar121._0_4_;
      fVar3 = auVar91._4_4_;
      fVar122 = auVar121._4_4_;
      fVar52 = auVar91._8_4_;
      fVar123 = auVar121._8_4_;
      fVar7 = auVar91._12_4_;
      fVar124 = auVar121._12_4_;
      fVar53 = auVar91._16_4_;
      fVar125 = auVar121._16_4_;
      fVar8 = auVar91._20_4_;
      fVar126 = auVar121._20_4_;
      fVar54 = auVar91._24_4_;
      fVar127 = auVar121._24_4_;
      fVar9 = auVar91._28_4_;
      fVar128 = auVar121._28_4_;
      auVar14._4_4_ = fVar4;
      auVar14._0_4_ = fVar4;
      auVar14._8_4_ = fVar4;
      auVar14._12_4_ = fVar4;
      auVar14._16_4_ = fVar4;
      auVar14._20_4_ = fVar4;
      auVar14._24_4_ = fVar4;
      auVar14._28_4_ = fVar4;
      auVar112._0_4_ = fVar93 * (fVar120 + fVar47) + fVar4;
      auVar112._4_4_ = fVar97 * (fVar122 + fVar3) + fVar4;
      auVar112._8_4_ = fVar99 * (fVar123 + fVar52) + fVar4;
      auVar112._12_4_ = fVar101 * (fVar124 + fVar7) + fVar4;
      auVar112._16_4_ = fVar103 * (fVar125 + fVar53) + fVar4;
      auVar112._20_4_ = fVar105 * (fVar126 + fVar8) + fVar4;
      auVar112._24_4_ = fVar107 * (fVar127 + fVar54) + fVar4;
      auVar112._28_4_ = fVar109 * (fVar128 + fVar9) + fVar4;
      auVar86 = vdivps_avx(auVar118,auVar112);
      auVar113 = vblendvps_avx(auVar33,auVar14,auVar13);
      fVar94 = auVar86._0_4_;
      fVar93 = fVar94 * auVar113._0_4_;
      fVar98 = auVar86._4_4_;
      fVar97 = fVar98 * auVar113._4_4_;
      fVar100 = auVar86._8_4_;
      fVar99 = fVar100 * auVar113._8_4_;
      fVar102 = auVar86._12_4_;
      fVar101 = fVar102 * auVar113._12_4_;
      fVar104 = auVar86._16_4_;
      fVar103 = fVar104 * auVar113._16_4_;
      fVar106 = auVar86._20_4_;
      fVar105 = fVar106 * auVar113._20_4_;
      fVar108 = auVar86._24_4_;
      fVar107 = fVar108 * auVar113._24_4_;
      fVar110 = auVar86._28_4_;
      fVar109 = fVar110 * auVar113._28_4_;
      auVar84._0_4_ = fVar120 * fVar93 + auVar87._0_4_;
      auVar84._4_4_ = fVar122 * fVar97 + auVar87._4_4_;
      auVar84._8_4_ = fVar123 * fVar99 + auVar87._8_4_;
      auVar84._12_4_ = fVar124 * fVar101 + auVar87._12_4_;
      auVar86._16_4_ = fVar125 * fVar103 + auVar87._16_4_;
      auVar86._0_16_ = auVar84;
      auVar86._20_4_ = fVar126 * fVar105 + auVar87._20_4_;
      auVar86._24_4_ = fVar127 * fVar107 + auVar87._24_4_;
      auVar86._28_4_ = fVar128 * fVar109 + auVar87._28_4_;
      lVar28 = (longlong)auVar32._0_4_;
      *(float *)(param_1 + lVar28) = auVar84._0_4_;
      lVar21 = (longlong)auVar32._4_4_;
      uVar5 = vextractps_avx(auVar84,1);
      *(undefined4 *)(param_1 + lVar21) = uVar5;
      lVar19 = (longlong)auVar32._8_4_;
      uVar5 = vextractps_avx(auVar84,2);
      *(undefined4 *)(param_1 + lVar19) = uVar5;
      lVar27 = (longlong)auVar32._12_4_;
      uVar5 = vextractps_avx(auVar84,3);
      *(undefined4 *)(param_1 + lVar27) = uVar5;
      lVar31 = (longlong)auVar32._16_4_;
      auVar34 = auVar86._16_16_;
      *(float *)(param_1 + lVar31) = auVar86._16_4_;
      lVar20 = (longlong)auVar32._20_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + lVar20) = uVar5;
      lVar29 = (longlong)auVar32._24_4_;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + lVar29) = uVar5;
      lVar26 = (longlong)auVar32._28_4_;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + lVar26) = uVar5;
      fVar74 = (float)(~uVar35 & auVar37._0_4_);
      fVar76 = (float)(~uVar40 & auVar37._4_4_);
      fVar77 = (float)(~uVar41 & auVar37._8_4_);
      fVar78 = (float)(~uVar42 & auVar37._12_4_);
      fVar79 = (float)(~uVar43 & auVar37._16_4_);
      fVar80 = (float)(~uVar44 & auVar37._20_4_);
      fVar81 = (float)(~uVar45 & auVar37._24_4_);
      fVar82 = (float)(~uVar46 & auVar37._28_4_);
      in_ZMM5 = ZEXT3264(CONCAT428(fVar82,CONCAT424(fVar81,CONCAT420(fVar80,CONCAT416(fVar79,
                                                  CONCAT412(fVar78,CONCAT48(fVar77,CONCAT44(fVar76,
                                                  fVar74))))))));
      fVar74 = fVar94 * fVar74;
      fVar76 = fVar98 * fVar76;
      fVar77 = fVar100 * fVar77;
      fVar78 = fVar102 * fVar78;
      fVar79 = fVar104 * fVar79;
      fVar80 = fVar106 * fVar80;
      fVar81 = fVar108 * fVar81;
      fVar82 = fVar110 * fVar82;
      auVar60._0_4_ = fVar120 * fVar74 + auVar62._0_4_;
      auVar60._4_4_ = fVar122 * fVar76 + auVar62._4_4_;
      auVar60._8_4_ = fVar123 * fVar77 + auVar62._8_4_;
      auVar60._12_4_ = fVar124 * fVar78 + auVar62._12_4_;
      auVar87._16_4_ = fVar125 * fVar79 + auVar62._16_4_;
      auVar87._0_16_ = auVar60;
      auVar87._20_4_ = fVar126 * fVar80 + auVar62._20_4_;
      auVar87._24_4_ = fVar127 * fVar81 + auVar62._24_4_;
      auVar87._28_4_ = fVar128 * fVar82 + auVar62._28_4_;
      *(float *)(param_1 + 4 + lVar28) = auVar60._0_4_;
      uVar5 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar5;
      uVar5 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar5;
      uVar5 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar5;
      auVar34 = auVar87._16_16_;
      *(float *)(param_1 + 4 + lVar31) = auVar87._16_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar5;
      fVar59 = fVar94 * (float)(~uVar35 & auVar119._0_4_);
      fVar66 = fVar98 * (float)(~uVar40 & auVar119._4_4_);
      fVar67 = fVar100 * (float)(~uVar41 & auVar119._8_4_);
      fVar68 = fVar102 * (float)(~uVar42 & auVar119._12_4_);
      fVar69 = fVar104 * (float)(~uVar43 & auVar119._16_4_);
      fVar70 = fVar106 * (float)(~uVar44 & auVar119._20_4_);
      fVar71 = fVar108 * (float)(~uVar45 & auVar119._24_4_);
      fVar72 = fVar110 * (float)(~uVar46 & auVar119._28_4_);
      auVar48._0_4_ = fVar120 * fVar59 + auVar49._0_4_;
      auVar48._4_4_ = fVar122 * fVar66 + auVar49._4_4_;
      auVar48._8_4_ = fVar123 * fVar67 + auVar49._8_4_;
      auVar48._12_4_ = fVar124 * fVar68 + auVar49._12_4_;
      auVar62._16_4_ = fVar125 * fVar69 + auVar49._16_4_;
      auVar62._0_16_ = auVar48;
      auVar62._20_4_ = fVar126 * fVar70 + auVar49._20_4_;
      auVar62._24_4_ = fVar127 * fVar71 + auVar49._24_4_;
      auVar62._28_4_ = fVar128 * fVar72 + auVar49._28_4_;
      in_ZMM2 = ZEXT3264(auVar62);
      *(float *)(param_1 + 8 + lVar28) = auVar48._0_4_;
      uVar5 = vextractps_avx(auVar48,1);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar5;
      uVar5 = vextractps_avx(auVar48,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar5;
      uVar5 = vextractps_avx(auVar48,3);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar5;
      auVar34 = auVar62._16_16_;
      *(float *)(param_1 + 8 + lVar31) = auVar62._16_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar5;
      *(float *)(param_1 + 0xc + lVar28) = fVar120;
      auVar34 = auVar121._0_16_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar5;
      auVar34 = auVar121._16_16_;
      *(float *)(param_1 + 0xc + lVar31) = fVar125;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar5;
      local_360 = auVar75._0_4_;
      auVar34._0_4_ = -(fVar47 * fVar93) + local_360;
      fStack_35c = auVar75._4_4_;
      auVar34._4_4_ = -(fVar3 * fVar97) + fStack_35c;
      fStack_358 = auVar75._8_4_;
      auVar34._8_4_ = -(fVar52 * fVar99) + fStack_358;
      fStack_354 = auVar75._12_4_;
      auVar34._12_4_ = -(fVar7 * fVar101) + fStack_354;
      fStack_350 = auVar75._16_4_;
      auVar32._16_4_ = -(fVar53 * fVar103) + fStack_350;
      auVar32._0_16_ = auVar34;
      fStack_34c = auVar75._20_4_;
      auVar32._20_4_ = -(fVar8 * fVar105) + fStack_34c;
      fStack_348 = auVar75._24_4_;
      auVar32._24_4_ = -(fVar54 * fVar107) + fStack_348;
      fStack_344 = auVar75._28_4_;
      auVar32._28_4_ = -(fVar9 * fVar109) + fStack_344;
      lVar28 = (longlong)auVar115._0_4_;
      *(float *)(param_1 + lVar28) = auVar34._0_4_;
      lVar27 = (longlong)auVar115._4_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + lVar27) = uVar5;
      lVar20 = (longlong)auVar115._8_4_;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + lVar20) = uVar5;
      lVar19 = (longlong)auVar115._12_4_;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + lVar19) = uVar5;
      lVar21 = (longlong)auVar115._16_4_;
      auVar34 = auVar32._16_16_;
      *(float *)(param_1 + lVar21) = auVar32._16_4_;
      lVar26 = (longlong)auVar115._20_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + lVar26) = uVar5;
      lVar31 = (longlong)auVar115._24_4_;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + lVar31) = uVar5;
      lVar29 = (longlong)auVar115._28_4_;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + lVar29) = uVar5;
      local_320 = auVar117._0_4_;
      auVar85._0_4_ = -(fVar47 * fVar74) + local_320;
      fStack_31c = auVar117._4_4_;
      auVar85._4_4_ = -(fVar3 * fVar76) + fStack_31c;
      fStack_318 = auVar117._8_4_;
      auVar85._8_4_ = -(fVar52 * fVar77) + fStack_318;
      fStack_314 = auVar117._12_4_;
      auVar85._12_4_ = -(fVar7 * fVar78) + fStack_314;
      fStack_310 = auVar117._16_4_;
      auVar49._16_4_ = -(fVar53 * fVar79) + fStack_310;
      auVar49._0_16_ = auVar85;
      fStack_30c = auVar117._20_4_;
      auVar49._20_4_ = -(fVar8 * fVar80) + fStack_30c;
      fStack_308 = auVar117._24_4_;
      auVar49._24_4_ = -(fVar54 * fVar81) + fStack_308;
      fStack_304 = auVar117._28_4_;
      auVar49._28_4_ = -(fVar9 * fVar82) + fStack_304;
      *(float *)(param_1 + 4 + lVar28) = auVar85._0_4_;
      uVar5 = vextractps_avx(auVar85,1);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar5;
      uVar5 = vextractps_avx(auVar85,2);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar85,3);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar5;
      auVar34 = auVar49._16_16_;
      *(float *)(param_1 + 4 + lVar21) = auVar49._16_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar5;
      local_340 = auVar89._0_4_;
      auVar61._0_4_ = -(fVar47 * fVar59) + local_340;
      fStack_33c = auVar89._4_4_;
      auVar61._4_4_ = -(fVar3 * fVar66) + fStack_33c;
      fStack_338 = auVar89._8_4_;
      auVar61._8_4_ = -(fVar52 * fVar67) + fStack_338;
      fStack_334 = auVar89._12_4_;
      auVar61._12_4_ = -(fVar7 * fVar68) + fStack_334;
      fStack_330 = auVar89._16_4_;
      auVar75._16_4_ = -(fVar53 * fVar69) + fStack_330;
      auVar75._0_16_ = auVar61;
      fStack_32c = auVar89._20_4_;
      auVar75._20_4_ = -(fVar8 * fVar70) + fStack_32c;
      fStack_328 = auVar89._24_4_;
      auVar75._24_4_ = -(fVar54 * fVar71) + fStack_328;
      fStack_324 = auVar89._28_4_;
      auVar75._28_4_ = -(fVar9 * fVar72) + fStack_324;
      *(float *)(param_1 + 8 + lVar28) = auVar61._0_4_;
      uVar5 = vextractps_avx(auVar61,1);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar5;
      uVar5 = vextractps_avx(auVar61,2);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar61,3);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar5;
      auVar34 = auVar75._16_16_;
      *(float *)(param_1 + 8 + lVar21) = auVar75._16_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar5;
      pfVar1 = (float *)(param_4 + uVar16);
      *pfVar1 = fVar55 + fVar94;
      pfVar1[1] = fVar10 + fVar98;
      pfVar1[2] = fVar56 + fVar100;
      pfVar1[3] = fVar11 + fVar102;
      pfVar1[4] = fVar57 + fVar104;
      pfVar1[5] = fVar12 + fVar106;
      pfVar1[6] = fVar58 + fVar108;
      pfVar1[7] = fVar111 + fVar110;
      *(float *)(param_1 + 0xc + lVar28) = fVar47;
      auVar34 = auVar91._0_16_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar5;
      auVar34 = auVar91._16_16_;
      *(float *)(param_1 + 0xc + lVar21) = fVar53;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar5;
      uVar30 = uVar30 + 0x20;
      uVar18 = uVar18 + 8;
    } while ((int)uVar18 < (int)(uVar15 & 0xfffffff8));
  }
  if ((int)param_12 <= (int)uVar18) {
    return;
  }
  auVar89._4_4_ = uVar18;
  auVar89._0_4_ = uVar18;
  auVar89._8_4_ = uVar18;
  auVar89._12_4_ = uVar18;
  auVar89._16_4_ = uVar18;
  auVar89._20_4_ = uVar18;
  auVar89._24_4_ = uVar18;
  auVar89._28_4_ = uVar18;
  auVar113 = vpor_avx2(auVar89,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar91._4_4_ = param_12;
  auVar91._0_4_ = param_12;
  auVar91._8_4_ = param_12;
  auVar91._12_4_ = param_12;
  auVar91._16_4_ = param_12;
  auVar91._20_4_ = param_12;
  auVar91._24_4_ = param_12;
  auVar91._28_4_ = param_12;
  auVar113 = vpcmpgtd_avx2(auVar91,auVar113);
  pauVar2 = (undefined1 (*) [32])(param_2 + (ulonglong)uVar18 * 8);
  uVar15 = vmovmskps_avx(auVar113);
  if (uVar15 == 0xff) {
    auVar33 = *pauVar2;
    auVar89 = pauVar2[1];
    auVar75 = vshufps_avx(auVar33,auVar89,0x88);
    auVar75 = vpermpd_avx2(auVar75,0xd8);
    auVar33 = vshufps_avx(auVar33,auVar89,0xdd);
    auVar33 = vpermpd_avx2(auVar33,0xd8);
  }
  else {
    auVar75 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar113);
    auVar33 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar113);
  }
  auVar117 = vpslld_avx2(auVar75,4);
  auVar89 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar113);
  auVar75 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar113);
  auVar32 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar113);
  auVar121 = vgatherdps(ZEXT832(0),auVar113);
  auVar87 = vpslld_avx2(auVar33,4);
  auVar49 = vgatherdps(ZEXT832(0),auVar113);
  auVar115 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar113);
  auVar62 = vgatherdps(ZEXT832(0),auVar113);
  auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar113);
  auVar33 = vmaskmovps_avx(auVar113,auVar89);
  auVar89 = vmaskmovps_avx(auVar113,auVar75);
  auVar75 = vmaskmovps_avx(auVar113,auVar32);
  auVar32 = vmaskmovps_avx(auVar113,auVar49);
  auVar49 = vmaskmovps_avx(auVar113,auVar115);
  auVar62 = vmaskmovps_avx(auVar113,auVar62);
  lVar19 = (longlong)(int)(uVar18 << 2);
  fVar4 = *param_7;
  auVar115._4_4_ = fVar4;
  auVar115._0_4_ = fVar4;
  auVar115._8_4_ = fVar4;
  auVar115._12_4_ = fVar4;
  auVar115._16_4_ = fVar4;
  auVar115._20_4_ = fVar4;
  auVar115._24_4_ = fVar4;
  auVar115._28_4_ = fVar4;
  if ((param_6 & 1) != 0) {
    auVar13 = vmaskmovps_avx(auVar113,*(undefined1 (*) [32])(param_8 + lVar19));
    fVar47 = param_7[1];
    auVar115._0_4_ = auVar13._0_4_ * fVar47 + fVar4;
    auVar115._4_4_ = auVar13._4_4_ * fVar47 + fVar4;
    auVar115._8_4_ = auVar13._8_4_ * fVar47 + fVar4;
    auVar115._12_4_ = auVar13._12_4_ * fVar47 + fVar4;
    auVar115._16_4_ = auVar13._16_4_ * fVar47 + fVar4;
    auVar115._20_4_ = auVar13._20_4_ * fVar47 + fVar4;
    auVar115._24_4_ = auVar13._24_4_ * fVar47 + fVar4;
    auVar115._28_4_ = auVar13._28_4_ * fVar47 + fVar4;
  }
  auVar13 = vmaskmovps_avx(auVar113,*(undefined1 (*) [32])(param_3 + lVar19));
  auVar37 = vmaskmovps_avx(auVar113,*(undefined1 (*) [32])(param_4 + lVar19));
  fVar4 = *param_10;
  auVar119._4_4_ = fVar4;
  auVar119._0_4_ = fVar4;
  auVar119._8_4_ = fVar4;
  auVar119._12_4_ = fVar4;
  auVar119._16_4_ = fVar4;
  auVar119._20_4_ = fVar4;
  auVar119._24_4_ = fVar4;
  auVar119._28_4_ = fVar4;
  if ((param_9 & 1) != 0) {
    auVar86 = vmaskmovps_avx(auVar113,*(undefined1 (*) [32])(param_11 + lVar19));
    fVar47 = param_10[1];
    auVar119._0_4_ = auVar86._0_4_ * fVar47 + fVar4;
    auVar119._4_4_ = auVar86._4_4_ * fVar47 + fVar4;
    auVar119._8_4_ = auVar86._8_4_ * fVar47 + fVar4;
    auVar119._12_4_ = auVar86._12_4_ * fVar47 + fVar4;
    auVar119._16_4_ = auVar86._16_4_ * fVar47 + fVar4;
    auVar119._20_4_ = auVar86._20_4_ * fVar47 + fVar4;
    auVar119._24_4_ = auVar86._24_4_ * fVar47 + fVar4;
    auVar119._28_4_ = auVar86._28_4_ * fVar47 + fVar4;
  }
  auVar86 = vsubps_avx(auVar33,auVar32);
  auVar112 = vsubps_avx(auVar89,auVar49);
  auVar118 = vsubps_avx(auVar75,auVar62);
  auVar95._0_4_ =
       auVar118._0_4_ * auVar118._0_4_ +
       auVar86._0_4_ * auVar86._0_4_ + auVar112._0_4_ * auVar112._0_4_;
  auVar95._4_4_ =
       auVar118._4_4_ * auVar118._4_4_ +
       auVar86._4_4_ * auVar86._4_4_ + auVar112._4_4_ * auVar112._4_4_;
  auVar95._8_4_ =
       auVar118._8_4_ * auVar118._8_4_ +
       auVar86._8_4_ * auVar86._8_4_ + auVar112._8_4_ * auVar112._8_4_;
  auVar95._12_4_ =
       auVar118._12_4_ * auVar118._12_4_ +
       auVar86._12_4_ * auVar86._12_4_ + auVar112._12_4_ * auVar112._12_4_;
  auVar95._16_4_ =
       auVar118._16_4_ * auVar118._16_4_ +
       auVar86._16_4_ * auVar86._16_4_ + auVar112._16_4_ * auVar112._16_4_;
  auVar95._20_4_ =
       auVar118._20_4_ * auVar118._20_4_ +
       auVar86._20_4_ * auVar86._20_4_ + auVar112._20_4_ * auVar112._20_4_;
  auVar95._24_4_ =
       auVar118._24_4_ * auVar118._24_4_ +
       auVar86._24_4_ * auVar86._24_4_ + auVar112._24_4_ * auVar112._24_4_;
  auVar95._28_4_ =
       auVar118._28_4_ * auVar118._28_4_ +
       auVar86._28_4_ * auVar86._28_4_ + auVar112._28_4_ * auVar112._28_4_;
  auVar88 = vsqrtps_avx(auVar95);
  auVar86 = vdivps_avx(auVar86,auVar88);
  auVar90._4_4_ = __real_38d1b717;
  auVar90._0_4_ = __real_38d1b717;
  auVar90._8_4_ = __real_38d1b717;
  auVar90._12_4_ = __real_38d1b717;
  auVar90._16_4_ = __real_38d1b717;
  auVar90._20_4_ = __real_38d1b717;
  auVar90._24_4_ = __real_38d1b717;
  auVar90._28_4_ = __real_38d1b717;
  auVar14 = vcmpps_avx(auVar95,auVar90,1);
  auVar96._4_4_ = __real_3f800000;
  auVar96._0_4_ = __real_3f800000;
  auVar96._8_4_ = __real_3f800000;
  auVar96._12_4_ = __real_3f800000;
  auVar96._16_4_ = __real_3f800000;
  auVar96._20_4_ = __real_3f800000;
  auVar96._24_4_ = __real_3f800000;
  auVar96._28_4_ = __real_3f800000;
  auVar86 = vblendvps_avx(auVar86,auVar96,auVar14);
  auVar86 = vmaskmovps_avx(auVar113,auVar86);
  auVar112 = vdivps_avx(auVar112,auVar88);
  uVar18 = auVar14._0_4_;
  auVar63._0_4_ = ~uVar18 & auVar112._0_4_;
  uVar35 = auVar14._4_4_;
  auVar63._4_4_ = ~uVar35 & auVar112._4_4_;
  uVar40 = auVar14._8_4_;
  auVar63._8_4_ = ~uVar40 & auVar112._8_4_;
  uVar41 = auVar14._12_4_;
  auVar63._12_4_ = ~uVar41 & auVar112._12_4_;
  uVar42 = auVar14._16_4_;
  auVar63._16_4_ = ~uVar42 & auVar112._16_4_;
  uVar43 = auVar14._20_4_;
  auVar63._20_4_ = ~uVar43 & auVar112._20_4_;
  uVar44 = auVar14._24_4_;
  auVar63._24_4_ = ~uVar44 & auVar112._24_4_;
  uVar45 = auVar14._28_4_;
  auVar63._28_4_ = ~uVar45 & auVar112._28_4_;
  auVar14 = vmaskmovps_avx(auVar113,auVar63);
  auVar112 = vdivps_avx(auVar118,auVar88);
  auVar64._0_4_ = ~uVar18 & auVar112._0_4_;
  auVar64._4_4_ = ~uVar35 & auVar112._4_4_;
  auVar64._8_4_ = ~uVar40 & auVar112._8_4_;
  auVar64._12_4_ = ~uVar41 & auVar112._12_4_;
  auVar64._16_4_ = ~uVar42 & auVar112._16_4_;
  auVar64._20_4_ = ~uVar43 & auVar112._20_4_;
  auVar64._24_4_ = ~uVar44 & auVar112._24_4_;
  auVar64._28_4_ = ~uVar45 & auVar112._28_4_;
  auVar112 = vmaskmovps_avx(auVar113,auVar64);
  auVar38._0_4_ = ~uVar18 & auVar88._0_4_;
  auVar38._4_4_ = ~uVar35 & auVar88._4_4_;
  auVar38._8_4_ = ~uVar40 & auVar88._8_4_;
  auVar38._12_4_ = ~uVar41 & auVar88._12_4_;
  auVar38._16_4_ = ~uVar42 & auVar88._16_4_;
  auVar38._20_4_ = ~uVar43 & auVar88._20_4_;
  auVar38._24_4_ = ~uVar44 & auVar88._24_4_;
  auVar38._28_4_ = ~uVar45 & auVar88._28_4_;
  auVar88 = vsubps_avx(auVar38,auVar13);
  auVar13 = vcmpps_avx(ZEXT432(0) << 0x20,auVar88,2);
  auVar115 = vblendvps_avx(auVar119,auVar115,auVar13);
  fVar47 = param_5 * param_5 * auVar115._0_4_;
  fVar52 = param_5 * param_5 * auVar115._4_4_;
  fVar53 = param_5 * param_5 * auVar115._8_4_;
  fVar54 = param_5 * param_5 * auVar115._12_4_;
  fVar55 = param_5 * param_5 * auVar115._16_4_;
  fVar56 = param_5 * param_5 * auVar115._20_4_;
  fVar57 = param_5 * param_5 * auVar115._24_4_;
  param_5 = param_5 * param_5 * auVar115._28_4_;
  fVar4 = auVar121._0_4_;
  fVar111 = auVar91._0_4_;
  fVar3 = auVar121._4_4_;
  fVar93 = auVar91._4_4_;
  fVar7 = auVar121._8_4_;
  fVar97 = auVar91._8_4_;
  fVar8 = auVar121._12_4_;
  fVar99 = auVar91._12_4_;
  fVar9 = auVar121._16_4_;
  fVar101 = auVar91._16_4_;
  fVar10 = auVar121._20_4_;
  fVar103 = auVar91._20_4_;
  fVar11 = auVar121._24_4_;
  fVar105 = auVar91._24_4_;
  fVar12 = auVar121._28_4_;
  fVar107 = auVar91._28_4_;
  auVar65._0_4_ = fVar47 * (fVar111 + fVar4) + __real_3f800000;
  auVar65._4_4_ = fVar52 * (fVar93 + fVar3) + __real_3f800000;
  auVar65._8_4_ = fVar53 * (fVar97 + fVar7) + __real_3f800000;
  auVar65._12_4_ = fVar54 * (fVar99 + fVar8) + __real_3f800000;
  auVar65._16_4_ = fVar55 * (fVar101 + fVar9) + __real_3f800000;
  auVar65._20_4_ = fVar56 * (fVar103 + fVar10) + __real_3f800000;
  auVar65._24_4_ = fVar57 * (fVar105 + fVar11) + __real_3f800000;
  auVar65._28_4_ = param_5 * (fVar107 + fVar12) + __real_3f800000;
  auVar39._0_4_ = -(fVar47 * auVar88._0_4_) - auVar37._0_4_;
  auVar39._4_4_ = -(fVar52 * auVar88._4_4_) - auVar37._4_4_;
  auVar39._8_4_ = -(fVar53 * auVar88._8_4_) - auVar37._8_4_;
  auVar39._12_4_ = -(fVar54 * auVar88._12_4_) - auVar37._12_4_;
  auVar39._16_4_ = -(fVar55 * auVar88._16_4_) - auVar37._16_4_;
  auVar39._20_4_ = -(fVar56 * auVar88._20_4_) - auVar37._20_4_;
  auVar39._24_4_ = -(fVar57 * auVar88._24_4_) - auVar37._24_4_;
  auVar39._28_4_ = -(param_5 * auVar88._28_4_) - auVar37._28_4_;
  auVar115 = vdivps_avx(auVar39,auVar65);
  fVar47 = auVar115._0_4_;
  auVar50._0_4_ = auVar37._0_4_ + fVar47;
  fVar52 = auVar115._4_4_;
  auVar50._4_4_ = auVar37._4_4_ + fVar52;
  fVar53 = auVar115._8_4_;
  auVar50._8_4_ = auVar37._8_4_ + fVar53;
  fVar54 = auVar115._12_4_;
  auVar50._12_4_ = auVar37._12_4_ + fVar54;
  fVar55 = auVar115._16_4_;
  auVar50._16_4_ = auVar37._16_4_ + fVar55;
  fVar56 = auVar115._20_4_;
  auVar50._20_4_ = auVar37._20_4_ + fVar56;
  fVar57 = auVar115._24_4_;
  auVar50._24_4_ = auVar37._24_4_ + fVar57;
  fVar58 = auVar115._28_4_;
  auVar50._28_4_ = auVar37._28_4_ + fVar58;
  auVar113 = vmaskmovps_avx(auVar113,auVar50);
  *(undefined1 (*) [32])(param_4 + lVar19) = auVar113;
  local_2e0 = auVar86._0_4_;
  fStack_2dc = auVar86._4_4_;
  fStack_2d8 = auVar86._8_4_;
  fStack_2d4 = auVar86._12_4_;
  fStack_2d0 = auVar86._16_4_;
  fStack_2cc = auVar86._20_4_;
  fStack_2c8 = auVar86._24_4_;
  fStack_2c4 = auVar86._28_4_;
  local_2e0 = fVar47 * local_2e0;
  fStack_2dc = fVar52 * fStack_2dc;
  fStack_2d8 = fVar53 * fStack_2d8;
  fStack_2d4 = fVar54 * fStack_2d4;
  fStack_2d0 = fVar55 * fStack_2d0;
  fStack_2cc = fVar56 * fStack_2cc;
  fStack_2c8 = fVar57 * fStack_2c8;
  fStack_2c4 = fVar58 * fStack_2c4;
  local_2c0 = auVar14._0_4_;
  fStack_2bc = auVar14._4_4_;
  fStack_2b8 = auVar14._8_4_;
  fStack_2b4 = auVar14._12_4_;
  fStack_2b0 = auVar14._16_4_;
  fStack_2ac = auVar14._20_4_;
  fStack_2a8 = auVar14._24_4_;
  fStack_2a4 = auVar14._28_4_;
  local_2c0 = fVar47 * local_2c0;
  fStack_2bc = fVar52 * fStack_2bc;
  fStack_2b8 = fVar53 * fStack_2b8;
  fStack_2b4 = fVar54 * fStack_2b4;
  fStack_2b0 = fVar55 * fStack_2b0;
  fStack_2ac = fVar56 * fStack_2ac;
  fStack_2a8 = fVar57 * fStack_2a8;
  fStack_2a4 = fVar58 * fStack_2a4;
  local_2a0 = auVar112._0_4_;
  fStack_29c = auVar112._4_4_;
  fStack_298 = auVar112._8_4_;
  fStack_294 = auVar112._12_4_;
  fStack_290 = auVar112._16_4_;
  fStack_28c = auVar112._20_4_;
  fStack_288 = auVar112._24_4_;
  fStack_284 = auVar112._28_4_;
  fVar47 = fVar47 * local_2a0;
  fVar52 = fVar52 * fStack_29c;
  fVar53 = fVar53 * fStack_298;
  fVar54 = fVar54 * fStack_294;
  fVar55 = fVar55 * fStack_290;
  fVar56 = fVar56 * fStack_28c;
  fVar57 = fVar57 * fStack_288;
  fVar58 = fVar58 * fStack_284;
  auVar114._0_4_ = fVar4 * local_2e0 + auVar33._0_4_;
  auVar114._4_4_ = fVar3 * fStack_2dc + auVar33._4_4_;
  auVar114._8_4_ = fVar7 * fStack_2d8 + auVar33._8_4_;
  auVar114._12_4_ = fVar8 * fStack_2d4 + auVar33._12_4_;
  auVar116._16_4_ = fVar9 * fStack_2d0 + auVar33._16_4_;
  auVar116._0_16_ = auVar114;
  auVar116._20_4_ = fVar10 * fStack_2cc + auVar33._20_4_;
  auVar116._24_4_ = fVar11 * fStack_2c8 + auVar33._24_4_;
  auVar116._28_4_ = fVar12 * fStack_2c4 + auVar33._28_4_;
  cVar17 = (char)uVar15;
  iVar83 = auVar117._0_4_;
  auVar34 = auVar117._16_16_;
  auVar61 = auVar91._0_16_;
  auVar84 = auVar91._16_16_;
  auVar48 = auVar121._0_16_;
  auVar60 = auVar121._16_16_;
  auVar85 = auVar116._16_16_;
  iVar25 = auVar117._4_4_;
  iVar22 = auVar117._8_4_;
  iVar23 = auVar117._12_4_;
  local_320 = auVar87._0_4_;
  fStack_31c = auVar87._4_4_;
  fStack_318 = auVar87._8_4_;
  fStack_314 = auVar87._12_4_;
  fStack_310 = auVar87._16_4_;
  fStack_30c = auVar87._20_4_;
  fStack_308 = auVar87._24_4_;
  fStack_304 = auVar87._28_4_;
  local_360 = auVar75._0_4_;
  fStack_35c = auVar75._4_4_;
  fStack_358 = auVar75._8_4_;
  fStack_354 = auVar75._12_4_;
  fStack_350 = auVar75._16_4_;
  fStack_34c = auVar75._20_4_;
  fStack_348 = auVar75._24_4_;
  fStack_344 = auVar75._28_4_;
  local_340 = auVar32._0_4_;
  fStack_33c = auVar32._4_4_;
  fStack_338 = auVar32._8_4_;
  fStack_334 = auVar32._12_4_;
  fStack_330 = auVar32._16_4_;
  fStack_32c = auVar32._20_4_;
  fStack_328 = auVar32._24_4_;
  fStack_324 = auVar32._28_4_;
  local_300 = auVar49._0_4_;
  fStack_2fc = auVar49._4_4_;
  fStack_2f8 = auVar49._8_4_;
  fStack_2f4 = auVar49._12_4_;
  fStack_2f0 = auVar49._16_4_;
  fStack_2ec = auVar49._20_4_;
  fStack_2e8 = auVar49._24_4_;
  fStack_2e4 = auVar49._28_4_;
  local_380 = auVar62._0_4_;
  fStack_37c = auVar62._4_4_;
  fStack_378 = auVar62._8_4_;
  fStack_374 = auVar62._12_4_;
  fStack_370 = auVar62._16_4_;
  fStack_36c = auVar62._20_4_;
  fStack_368 = auVar62._24_4_;
  fStack_364 = auVar62._28_4_;
  iVar36 = auVar117._16_4_;
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + iVar83) = auVar114._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar114,1);
    *(undefined4 *)(param_1 + iVar25) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar114,2);
    *(undefined4 *)(param_1 + iVar22) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar114,3);
    *(undefined4 *)(param_1 + iVar23) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + iVar36) = auVar116._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar34,1);
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + iVar24) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar34,2);
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + iVar24) = uVar6;
  }
  if (cVar17 < '\0') {
    iVar24 = vextractps_avx(auVar34,3);
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + iVar24) = uVar6;
    auVar117._0_4_ = fVar4 * local_2c0 + auVar89._0_4_;
    auVar117._4_4_ = fVar3 * fStack_2bc + auVar89._4_4_;
    auVar117._8_4_ = fVar7 * fStack_2b8 + auVar89._8_4_;
    auVar117._12_4_ = fVar8 * fStack_2b4 + auVar89._12_4_;
    auVar117._16_4_ = fVar9 * fStack_2b0 + auVar89._16_4_;
    auVar117._20_4_ = fVar10 * fStack_2ac + auVar89._20_4_;
    auVar117._24_4_ = fVar11 * fStack_2a8 + auVar89._24_4_;
    auVar117._28_4_ = fVar12 * fStack_2a4 + auVar89._28_4_;
  }
  else {
    auVar117._0_4_ = fVar4 * local_2c0 + auVar89._0_4_;
    auVar117._4_4_ = fVar3 * fStack_2bc + auVar89._4_4_;
    auVar117._8_4_ = fVar7 * fStack_2b8 + auVar89._8_4_;
    auVar117._12_4_ = fVar8 * fStack_2b4 + auVar89._12_4_;
    auVar117._16_4_ = fVar9 * fStack_2b0 + auVar89._16_4_;
    auVar117._20_4_ = fVar10 * fStack_2ac + auVar89._20_4_;
    auVar117._24_4_ = fVar11 * fStack_2a8 + auVar89._24_4_;
    auVar117._28_4_ = fVar12 * fStack_2a4 + auVar89._28_4_;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar83) = auVar117._0_4_;
  }
  auVar85 = auVar117._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar36) = auVar117._16_4_;
  }
  auVar85 = auVar117._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar34,1);
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar34,2);
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar6;
  }
  if (cVar17 < '\0') {
    iVar24 = vextractps_avx(auVar34,3);
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar6;
    auVar121._0_4_ = fVar4 * fVar47 + local_360;
    auVar121._4_4_ = fVar3 * fVar52 + fStack_35c;
    auVar121._8_4_ = fVar7 * fVar53 + fStack_358;
    auVar121._12_4_ = fVar8 * fVar54 + fStack_354;
    auVar121._16_4_ = fVar9 * fVar55 + fStack_350;
    auVar121._20_4_ = fVar10 * fVar56 + fStack_34c;
    auVar121._24_4_ = fVar11 * fVar57 + fStack_348;
    auVar121._28_4_ = fVar12 * fVar58 + fStack_344;
  }
  else {
    auVar121._0_4_ = fVar4 * fVar47 + local_360;
    auVar121._4_4_ = fVar3 * fVar52 + fStack_35c;
    auVar121._8_4_ = fVar7 * fVar53 + fStack_358;
    auVar121._12_4_ = fVar8 * fVar54 + fStack_354;
    auVar121._16_4_ = fVar9 * fVar55 + fStack_350;
    auVar121._20_4_ = fVar10 * fVar56 + fStack_34c;
    auVar121._24_4_ = fVar11 * fVar57 + fStack_348;
    auVar121._28_4_ = fVar12 * fVar58 + fStack_344;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar83) = auVar121._0_4_;
  }
  auVar85 = auVar121._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar36) = auVar121._16_4_;
  }
  auVar85 = auVar121._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar34,1);
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar34,2);
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar6;
  }
  if (cVar17 < '\0') {
    iVar24 = vextractps_avx(auVar34,3);
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar6;
  }
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar83) = fVar4;
  }
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar48,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar48,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar48,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar36) = fVar9;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar25 = vextractps_avx(auVar34,1);
    uVar6 = vextractps_avx(auVar60,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar25 = vextractps_avx(auVar34,2);
    uVar6 = vextractps_avx(auVar60,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar6;
  }
  if (cVar17 < '\0') {
    iVar25 = vextractps_avx(auVar34,3);
    uVar6 = vextractps_avx(auVar60,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar6;
    auVar92._0_4_ = -(fVar111 * local_2e0) + local_340;
    auVar92._4_4_ = -(fVar93 * fStack_2dc) + fStack_33c;
    auVar92._8_4_ = -(fVar97 * fStack_2d8) + fStack_338;
    auVar92._12_4_ = -(fVar99 * fStack_2d4) + fStack_334;
    auVar92._16_4_ = -(fVar101 * fStack_2d0) + fStack_330;
    auVar92._20_4_ = -(fVar103 * fStack_2cc) + fStack_32c;
    auVar92._24_4_ = -(fVar105 * fStack_2c8) + fStack_328;
    auVar92._28_4_ = -(fVar107 * fStack_2c4) + fStack_324;
  }
  else {
    auVar92._0_4_ = -(fVar111 * local_2e0) + local_340;
    auVar92._4_4_ = -(fVar93 * fStack_2dc) + fStack_33c;
    auVar92._8_4_ = -(fVar97 * fStack_2d8) + fStack_338;
    auVar92._12_4_ = -(fVar99 * fStack_2d4) + fStack_334;
    auVar92._16_4_ = -(fVar101 * fStack_2d0) + fStack_330;
    auVar92._20_4_ = -(fVar103 * fStack_2cc) + fStack_32c;
    auVar92._24_4_ = -(fVar105 * fStack_2c8) + fStack_328;
    auVar92._28_4_ = -(fVar107 * fStack_2c4) + fStack_324;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + (int)local_320) = auVar92._0_4_;
  }
  auVar34 = auVar92._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + (int)fStack_31c) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + (int)fStack_318) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + (int)fStack_314) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_310) = auVar92._16_4_;
  }
  auVar34 = auVar92._16_16_;
  if ((uVar15 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + (int)fStack_30c) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + (int)fStack_308) = uVar6;
  }
  if (cVar17 < '\0') {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + (int)fStack_304) = uVar6;
    auVar73._0_4_ = -(fVar111 * local_2c0) + local_300;
    auVar73._4_4_ = -(fVar93 * fStack_2bc) + fStack_2fc;
    auVar73._8_4_ = -(fVar97 * fStack_2b8) + fStack_2f8;
    auVar73._12_4_ = -(fVar99 * fStack_2b4) + fStack_2f4;
    auVar73._16_4_ = -(fVar101 * fStack_2b0) + fStack_2f0;
    auVar73._20_4_ = -(fVar103 * fStack_2ac) + fStack_2ec;
    auVar73._24_4_ = -(fVar105 * fStack_2a8) + fStack_2e8;
    auVar73._28_4_ = -(fVar107 * fStack_2a4) + fStack_2e4;
  }
  else {
    auVar73._0_4_ = -(fVar111 * local_2c0) + local_300;
    auVar73._4_4_ = -(fVar93 * fStack_2bc) + fStack_2fc;
    auVar73._8_4_ = -(fVar97 * fStack_2b8) + fStack_2f8;
    auVar73._12_4_ = -(fVar99 * fStack_2b4) + fStack_2f4;
    auVar73._16_4_ = -(fVar101 * fStack_2b0) + fStack_2f0;
    auVar73._20_4_ = -(fVar103 * fStack_2ac) + fStack_2ec;
    auVar73._24_4_ = -(fVar105 * fStack_2a8) + fStack_2e8;
    auVar73._28_4_ = -(fVar107 * fStack_2a4) + fStack_2e4;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_320) = auVar73._0_4_;
  }
  auVar34 = auVar73._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_31c) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_318) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_314) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_310) = auVar73._16_4_;
  }
  auVar34 = auVar73._16_16_;
  if ((uVar15 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_30c) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_308) = uVar6;
  }
  if (cVar17 < '\0') {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_304) = uVar6;
    auVar51._0_4_ = -(fVar111 * fVar47) + local_380;
    auVar51._4_4_ = -(fVar93 * fVar52) + fStack_37c;
    auVar51._8_4_ = -(fVar97 * fVar53) + fStack_378;
    auVar51._12_4_ = -(fVar99 * fVar54) + fStack_374;
    auVar51._16_4_ = -(fVar101 * fVar55) + fStack_370;
    auVar51._20_4_ = -(fVar103 * fVar56) + fStack_36c;
    auVar51._24_4_ = -(fVar105 * fVar57) + fStack_368;
    auVar51._28_4_ = -(fVar107 * fVar58) + fStack_364;
  }
  else {
    auVar51._0_4_ = -(fVar111 * fVar47) + local_380;
    auVar51._4_4_ = -(fVar93 * fVar52) + fStack_37c;
    auVar51._8_4_ = -(fVar97 * fVar53) + fStack_378;
    auVar51._12_4_ = -(fVar99 * fVar54) + fStack_374;
    auVar51._16_4_ = -(fVar101 * fVar55) + fStack_370;
    auVar51._20_4_ = -(fVar103 * fVar56) + fStack_36c;
    auVar51._24_4_ = -(fVar105 * fVar57) + fStack_368;
    auVar51._28_4_ = -(fVar107 * fVar58) + fStack_364;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_320) = auVar51._0_4_;
  }
  auVar34 = auVar51._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_31c) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_318) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_314) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_310) = auVar51._16_4_;
  }
  auVar34 = auVar51._16_16_;
  if ((uVar15 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_30c) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_308) = uVar6;
  }
  if (cVar17 < '\0') {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_304) = uVar6;
  }
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_320) = fVar111;
  }
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_31c) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_318) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_314) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_310) = fVar101;
  }
  if ((uVar15 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_30c) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_308) = uVar6;
  }
  if (cVar17 < '\0') {
    uVar6 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_304) = uVar6;
  }
  return;
}

// ApplyXPBDEmbeddedSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_avx2 @ 14088f060

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,byte param_7,float *param_8,longlong param_9,
               byte param_10,float *param_11,longlong param_12,byte param_13,float *param_14,
               longlong param_15,uint param_16)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar13;
  int iVar14;
  longlong lVar15;
  char cVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar37 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  float fVar41;
  int iVar42;
  float fVar52;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 in_ZMM4 [64];
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  float fVar62;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar63 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
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
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [32];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  undefined1 auVar127 [16];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
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
  float local_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float local_4a0;
  float fStack_49c;
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
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  int local_3a0;
  int iStack_39c;
  int iStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  int iStack_370;
  int iStack_36c;
  int iStack_368;
  int iStack_364;
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
  int iVar12;
  undefined1 auVar103 [32];
  
  uVar10 = __real_0000000c;
  iVar14 = __real_00000008;
  uVar9 = __real_00000004;
  fVar80 = __real_3f800000;
  uVar8 = __real_38d1b717;
  uVar4 = __real_322bcc77;
  uVar18 = param_16 + 7;
  if (-1 < (int)param_16) {
    uVar18 = param_16;
  }
  if ((int)(uVar18 & 0xfffffff8) < 1) {
    uVar22 = 0;
  }
  else {
    uVar22 = 0;
    uVar25 = 0;
    do {
      uVar20 = uVar25 & 0xffffffff;
      fStack_4e4 = *param_8;
      local_500._0_4_ = fStack_4e4;
      local_500._4_4_ = fStack_4e4;
      fStack_4f8 = fStack_4e4;
      fStack_4f4 = fStack_4e4;
      fStack_4f0 = fStack_4e4;
      fStack_4ec = fStack_4e4;
      fStack_4e8 = fStack_4e4;
      if ((param_7 & 1) != 0) {
        fVar125 = param_8[1];
        pfVar1 = (float *)(param_9 + uVar20);
        local_500._0_4_ = fVar125 * *pfVar1 + fStack_4e4;
        local_500._4_4_ = fVar125 * pfVar1[1] + fStack_4e4;
        fStack_4f8 = fVar125 * pfVar1[2] + fStack_4e4;
        fStack_4f4 = fVar125 * pfVar1[3] + fStack_4e4;
        fStack_4f0 = fVar125 * pfVar1[4] + fStack_4e4;
        fStack_4ec = fVar125 * pfVar1[5] + fStack_4e4;
        fStack_4e8 = fVar125 * pfVar1[6] + fStack_4e4;
        fStack_4e4 = fVar125 * pfVar1[7] + fStack_4e4;
      }
      fStack_4c4 = *param_11;
      local_4e0._0_4_ = fStack_4c4;
      local_4e0._4_4_ = fStack_4c4;
      fStack_4d8 = fStack_4c4;
      fStack_4d4 = fStack_4c4;
      fStack_4d0 = fStack_4c4;
      fStack_4cc = fStack_4c4;
      fStack_4c8 = fStack_4c4;
      if ((param_10 & 1) != 0) {
        fVar125 = param_11[1];
        pfVar1 = (float *)(param_12 + uVar20);
        local_4e0._0_4_ = fVar125 * *pfVar1 + fStack_4c4;
        local_4e0._4_4_ = fVar125 * pfVar1[1] + fStack_4c4;
        fStack_4d8 = fVar125 * pfVar1[2] + fStack_4c4;
        fStack_4d4 = fVar125 * pfVar1[3] + fStack_4c4;
        fStack_4d0 = fVar125 * pfVar1[4] + fStack_4c4;
        fStack_4cc = fVar125 * pfVar1[5] + fStack_4c4;
        fStack_4c8 = fVar125 * pfVar1[6] + fStack_4c4;
        fStack_4c4 = fVar125 * pfVar1[7] + fStack_4c4;
      }
      auVar40 = *(undefined1 (*) [32])(param_3 + uVar25 * 2);
      auVar32 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar25 * 2);
      auVar29 = vshufps_avx(auVar40,auVar32,0x88);
      auVar31 = vpermpd_avx2(auVar29,0xd8);
      auVar64 = vpslld_avx2(auVar31,4);
      auVar44._4_4_ = uVar9;
      auVar44._0_4_ = uVar9;
      auVar44._8_4_ = uVar9;
      auVar44._12_4_ = uVar9;
      auVar44._16_4_ = uVar9;
      auVar44._20_4_ = uVar9;
      auVar44._24_4_ = uVar9;
      auVar44._28_4_ = uVar9;
      vpor_avx2(auVar64,auVar44);
      auVar29 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar102 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar29);
      auVar43._4_4_ = iVar14;
      auVar43._0_4_ = iVar14;
      auVar43._8_4_ = iVar14;
      auVar43._12_4_ = iVar14;
      auVar43._16_4_ = iVar14;
      auVar43._20_4_ = iVar14;
      auVar43._24_4_ = iVar14;
      auVar43._28_4_ = iVar14;
      vpor_avx2(auVar64,auVar43);
      auVar29 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar128 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar29);
      auVar83._4_4_ = uVar10;
      auVar83._0_4_ = uVar10;
      auVar83._8_4_ = uVar10;
      auVar83._12_4_ = uVar10;
      auVar83._16_4_ = uVar10;
      auVar83._20_4_ = uVar10;
      auVar83._24_4_ = uVar10;
      auVar83._28_4_ = uVar10;
      auVar30 = vpor_avx2(auVar83,auVar64);
      auVar29 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar29);
      auVar40 = vshufps_avx(auVar40,auVar32,0xdd);
      auVar32 = vpermpd_avx2(auVar40,0xd8);
      auVar94 = vpslld_avx2(auVar32,4);
      vpor_avx2(auVar94,auVar44);
      auVar40 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar92 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
      vpor_avx2(auVar94,auVar43);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar88 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      vpor_avx2(auVar94,auVar83);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar43 = vgatherdps(ZEXT832(0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar44 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      vpmulld_avx2(auVar31,auVar83);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar45 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar30 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar32 = vpmulld_avx2(auVar32,auVar83);
      auVar40 = vpcmpeqd_avx2(auVar45,auVar45);
      auVar31 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar40._0_4_ = auVar32._0_4_ + iVar14;
      auVar40._4_4_ = auVar32._4_4_ + iVar14;
      auVar40._8_4_ = auVar32._8_4_ + iVar14;
      auVar40._12_4_ = auVar32._12_4_ + iVar14;
      auVar40._16_4_ = auVar32._16_4_ + iVar14;
      auVar40._20_4_ = auVar32._20_4_ + iVar14;
      auVar40._24_4_ = auVar32._24_4_ + iVar14;
      auVar40._28_4_ = auVar32._28_4_ + iVar14;
      auVar32 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar32 = vgatherdps(ZEXT832(0) << 0x20,auVar32);
      auVar40 = vpcmpeqd_avx2(auVar40,auVar40);
      auVar83 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar40 = vgatherdps(ZEXT832(0),auVar40);
      fVar125 = *param_14;
      fVar105 = fVar125;
      fVar107 = fVar125;
      fVar110 = fVar125;
      fVar113 = fVar125;
      fVar116 = fVar125;
      fVar119 = fVar125;
      fVar122 = fVar125;
      if ((param_13 & 1) != 0) {
        fVar108 = param_14[1];
        pfVar1 = (float *)(param_15 + uVar20);
        fVar105 = fVar108 * *pfVar1 + fVar125;
        fVar107 = fVar108 * pfVar1[1] + fVar125;
        fVar110 = fVar108 * pfVar1[2] + fVar125;
        fVar113 = fVar108 * pfVar1[3] + fVar125;
        fVar116 = fVar108 * pfVar1[4] + fVar125;
        fVar119 = fVar108 * pfVar1[5] + fVar125;
        fVar122 = fVar108 * pfVar1[6] + fVar125;
        fVar125 = fVar108 * pfVar1[7] + fVar125;
      }
      auVar86 = vsubps_avx(auVar83,auVar40);
      auVar6 = vsubps_avx(auVar102,auVar92);
      auVar7 = vsubps_avx(auVar128,auVar88);
      auVar97._0_4_ =
           auVar7._0_4_ * auVar7._0_4_ + auVar86._0_4_ * auVar86._0_4_ + auVar6._0_4_ * auVar6._0_4_
      ;
      auVar97._4_4_ =
           auVar7._4_4_ * auVar7._4_4_ + auVar86._4_4_ * auVar86._4_4_ + auVar6._4_4_ * auVar6._4_4_
      ;
      auVar97._8_4_ =
           auVar7._8_4_ * auVar7._8_4_ + auVar86._8_4_ * auVar86._8_4_ + auVar6._8_4_ * auVar6._8_4_
      ;
      auVar97._12_4_ =
           auVar7._12_4_ * auVar7._12_4_ +
           auVar86._12_4_ * auVar86._12_4_ + auVar6._12_4_ * auVar6._12_4_;
      auVar97._16_4_ =
           auVar7._16_4_ * auVar7._16_4_ +
           auVar86._16_4_ * auVar86._16_4_ + auVar6._16_4_ * auVar6._16_4_;
      auVar97._20_4_ =
           auVar7._20_4_ * auVar7._20_4_ +
           auVar86._20_4_ * auVar86._20_4_ + auVar6._20_4_ * auVar6._20_4_;
      auVar97._24_4_ =
           auVar7._24_4_ * auVar7._24_4_ +
           auVar86._24_4_ * auVar86._24_4_ + auVar6._24_4_ * auVar6._24_4_;
      auVar97._28_4_ =
           auVar7._28_4_ * auVar7._28_4_ +
           auVar86._28_4_ * auVar86._28_4_ + auVar6._28_4_ * auVar6._28_4_;
      auVar33 = vsqrtps_avx(auVar97);
      auVar95._4_4_ = uVar8;
      auVar95._0_4_ = uVar8;
      auVar95._8_4_ = uVar8;
      auVar95._12_4_ = uVar8;
      auVar95._16_4_ = uVar8;
      auVar95._20_4_ = uVar8;
      auVar95._24_4_ = uVar8;
      auVar95._28_4_ = uVar8;
      auVar129 = vcmpps_avx(auVar97,auVar95,1);
      auVar95 = *(undefined1 (*) [32])(param_4 + uVar20);
      uVar53 = auVar129._0_4_;
      auVar85._0_4_ = ~uVar53 & auVar33._0_4_;
      uVar54 = auVar129._4_4_;
      auVar85._4_4_ = ~uVar54 & auVar33._4_4_;
      uVar55 = auVar129._8_4_;
      auVar85._8_4_ = ~uVar55 & auVar33._8_4_;
      uVar56 = auVar129._12_4_;
      auVar85._12_4_ = ~uVar56 & auVar33._12_4_;
      uVar57 = auVar129._16_4_;
      auVar85._16_4_ = ~uVar57 & auVar33._16_4_;
      uVar58 = auVar129._20_4_;
      auVar85._20_4_ = ~uVar58 & auVar33._20_4_;
      uVar59 = auVar129._24_4_;
      auVar85._24_4_ = ~uVar59 & auVar33._24_4_;
      uVar60 = auVar129._28_4_;
      auVar85._28_4_ = ~uVar60 & auVar33._28_4_;
      auVar97 = vsubps_avx(auVar85,auVar95);
      auVar97 = vcmpps_avx(ZEXT832(0) << 0x20,auVar97,2);
      auVar97 = vblendvps_avx(_local_4e0,_local_500,auVar97);
      auVar86 = vdivps_avx(auVar86,auVar33);
      auVar6 = vdivps_avx(auVar6,auVar33);
      auVar33 = vdivps_avx(auVar7,auVar33);
      auVar7._4_4_ = fVar80;
      auVar7._0_4_ = fVar80;
      auVar7._8_4_ = fVar80;
      auVar7._12_4_ = fVar80;
      auVar7._16_4_ = fVar80;
      auVar7._20_4_ = fVar80;
      auVar7._24_4_ = fVar80;
      auVar7._28_4_ = fVar80;
      auVar129 = vblendvps_avx(auVar86,auVar7,auVar129);
      fVar41 = (float)(~uVar53 & auVar6._0_4_);
      fVar46 = (float)(~uVar54 & auVar6._4_4_);
      fVar47 = (float)(~uVar55 & auVar6._8_4_);
      fVar48 = (float)(~uVar56 & auVar6._12_4_);
      fVar49 = (float)(~uVar57 & auVar6._16_4_);
      fVar50 = (float)(~uVar58 & auVar6._20_4_);
      fVar51 = (float)(~uVar59 & auVar6._24_4_);
      fVar52 = (float)(~uVar60 & auVar6._28_4_);
      fVar61 = (float)(~uVar53 & auVar33._0_4_);
      fVar66 = (float)(~uVar54 & auVar33._4_4_);
      fVar68 = (float)(~uVar55 & auVar33._8_4_);
      fVar70 = (float)(~uVar56 & auVar33._12_4_);
      fVar72 = (float)(~uVar57 & auVar33._16_4_);
      fVar74 = (float)(~uVar58 & auVar33._20_4_);
      fVar76 = (float)(~uVar59 & auVar33._24_4_);
      fVar78 = (float)(~uVar60 & auVar33._28_4_);
      auVar86 = vdivps_avx(auVar7,auVar95);
      auVar6._4_4_ = uVar4;
      auVar6._0_4_ = uVar4;
      auVar6._8_4_ = uVar4;
      auVar6._12_4_ = uVar4;
      auVar6._16_4_ = uVar4;
      auVar6._20_4_ = uVar4;
      auVar6._24_4_ = uVar4;
      auVar6._28_4_ = uVar4;
      auVar95 = vcmpps_avx(auVar95,auVar6,1);
      auVar95 = vblendvps_avx(auVar86,auVar7,auVar95);
      fVar108 = auVar43._0_4_;
      fVar104 = auVar87._0_4_;
      auVar86._0_4_ = fVar104 + fVar108;
      fVar111 = auVar43._4_4_;
      fVar106 = auVar87._4_4_;
      auVar86._4_4_ = fVar106 + fVar111;
      fVar114 = auVar43._8_4_;
      fVar109 = auVar87._8_4_;
      auVar86._8_4_ = fVar109 + fVar114;
      fVar117 = auVar43._12_4_;
      fVar112 = auVar87._12_4_;
      auVar86._12_4_ = fVar112 + fVar117;
      fVar120 = auVar43._16_4_;
      fVar115 = auVar87._16_4_;
      auVar86._16_4_ = fVar115 + fVar120;
      fVar123 = auVar43._20_4_;
      fVar118 = auVar87._20_4_;
      auVar86._20_4_ = fVar118 + fVar123;
      fVar126 = auVar43._24_4_;
      fVar121 = auVar87._24_4_;
      auVar86._24_4_ = fVar121 + fVar126;
      fVar5 = auVar43._28_4_;
      fVar124 = auVar87._28_4_;
      auVar86._28_4_ = fVar124 + fVar5;
      auVar97 = vdivps_avx(auVar97,auVar86);
      auVar97 = vsqrtps_avx(auVar97);
      auVar44 = vsubps_avx(auVar83,auVar44);
      auVar44 = vsubps_avx(auVar44,auVar40);
      local_4a0 = auVar30._0_4_;
      fStack_49c = auVar30._4_4_;
      fStack_498 = auVar30._8_4_;
      fStack_494 = auVar30._12_4_;
      fStack_490 = auVar30._16_4_;
      fStack_48c = auVar30._20_4_;
      fStack_488 = auVar30._24_4_;
      fStack_484 = auVar30._28_4_;
      auVar30 = vsubps_avx(auVar102,auVar45);
      auVar30 = vsubps_avx(auVar30,auVar92);
      local_1e0 = auVar31._0_4_;
      fStack_1dc = auVar31._4_4_;
      fStack_1d8 = auVar31._8_4_;
      fStack_1d4 = auVar31._12_4_;
      fStack_1d0 = auVar31._16_4_;
      fStack_1cc = auVar31._20_4_;
      fStack_1c8 = auVar31._24_4_;
      fStack_1c4 = auVar31._28_4_;
      auVar29 = vsubps_avx(auVar128,auVar29);
      auVar29 = vsubps_avx(auVar29,auVar88);
      local_200 = auVar32._0_4_;
      fStack_1fc = auVar32._4_4_;
      fStack_1f8 = auVar32._8_4_;
      fStack_1f4 = auVar32._12_4_;
      fStack_1f0 = auVar32._16_4_;
      fStack_1ec = auVar32._20_4_;
      fStack_1e8 = auVar32._24_4_;
      fStack_1e4 = auVar32._28_4_;
      fVar105 = auVar95._0_4_ * auVar97._0_4_ * (fVar105 + fVar105) * param_6;
      fVar107 = auVar95._4_4_ * auVar97._4_4_ * (fVar107 + fVar107) * param_6;
      fVar110 = auVar95._8_4_ * auVar97._8_4_ * (fVar110 + fVar110) * param_6;
      fVar113 = auVar95._12_4_ * auVar97._12_4_ * (fVar113 + fVar113) * param_6;
      fVar116 = auVar95._16_4_ * auVar97._16_4_ * (fVar116 + fVar116) * param_6;
      fVar119 = auVar95._20_4_ * auVar97._20_4_ * (fVar119 + fVar119) * param_6;
      fVar122 = auVar95._24_4_ * auVar97._24_4_ * (fVar122 + fVar122) * param_6;
      fVar125 = auVar95._28_4_ * auVar97._28_4_ * (fVar125 + fVar125) * param_6;
      auVar32 = *(undefined1 (*) [32])(param_5 + uVar20);
      in_ZMM4 = ZEXT3264(auVar32);
      auVar31._0_4_ =
           -(fVar105 *
            (fVar61 * (auVar29._0_4_ + local_200) +
            auVar129._0_4_ * (auVar44._0_4_ + local_4a0) + fVar41 * (auVar30._0_4_ + local_1e0))) -
           auVar32._0_4_;
      auVar31._4_4_ =
           -(fVar107 *
            (fVar66 * (auVar29._4_4_ + fStack_1fc) +
            auVar129._4_4_ * (auVar44._4_4_ + fStack_49c) + fVar46 * (auVar30._4_4_ + fStack_1dc)))
           - auVar32._4_4_;
      auVar31._8_4_ =
           -(fVar110 *
            (fVar68 * (auVar29._8_4_ + fStack_1f8) +
            auVar129._8_4_ * (auVar44._8_4_ + fStack_498) + fVar47 * (auVar30._8_4_ + fStack_1d8)))
           - auVar32._8_4_;
      auVar31._12_4_ =
           -(fVar113 *
            (fVar70 * (auVar29._12_4_ + fStack_1f4) +
            auVar129._12_4_ * (auVar44._12_4_ + fStack_494) + fVar48 * (auVar30._12_4_ + fStack_1d4)
            )) - auVar32._12_4_;
      auVar31._16_4_ =
           -(fVar116 *
            (fVar72 * (auVar29._16_4_ + fStack_1f0) +
            auVar129._16_4_ * (auVar44._16_4_ + fStack_490) + fVar49 * (auVar30._16_4_ + fStack_1d0)
            )) - auVar32._16_4_;
      auVar31._20_4_ =
           -(fVar119 *
            (fVar74 * (auVar29._20_4_ + fStack_1ec) +
            auVar129._20_4_ * (auVar44._20_4_ + fStack_48c) + fVar50 * (auVar30._20_4_ + fStack_1cc)
            )) - auVar32._20_4_;
      auVar31._24_4_ =
           -(fVar122 *
            (fVar76 * (auVar29._24_4_ + fStack_1e8) +
            auVar129._24_4_ * (auVar44._24_4_ + fStack_488) + fVar51 * (auVar30._24_4_ + fStack_1c8)
            )) - auVar32._24_4_;
      auVar31._28_4_ =
           -(fVar125 *
            (fVar78 * (auVar29._28_4_ + fStack_1e4) +
            auVar129._28_4_ * (auVar44._28_4_ + fStack_484) + fVar52 * (auVar30._28_4_ + fStack_1c4)
            )) - auVar32._28_4_;
      auVar29._0_4_ = auVar86._0_4_ * fVar105 + fVar80;
      auVar29._4_4_ = auVar86._4_4_ * fVar107 + fVar80;
      auVar29._8_4_ = auVar86._8_4_ * fVar110 + fVar80;
      auVar29._12_4_ = auVar86._12_4_ * fVar113 + fVar80;
      auVar29._16_4_ = auVar86._16_4_ * fVar116 + fVar80;
      auVar29._20_4_ = auVar86._20_4_ * fVar119 + fVar80;
      auVar29._24_4_ = auVar86._24_4_ * fVar122 + fVar80;
      auVar29._28_4_ = auVar86._28_4_ * fVar125 + fVar80;
      auVar29 = vdivps_avx(auVar31,auVar29);
      local_3e0 = auVar64._0_4_;
      fStack_3dc = auVar64._4_4_;
      fStack_3d8 = auVar64._8_4_;
      fStack_3d4 = auVar64._12_4_;
      fStack_3d0 = auVar64._16_4_;
      fStack_3cc = auVar64._20_4_;
      fStack_3c8 = auVar64._24_4_;
      fStack_3c4 = auVar64._28_4_;
      fVar125 = auVar29._0_4_;
      fVar62 = auVar129._0_4_ * fVar125;
      fVar105 = auVar29._4_4_;
      fVar67 = auVar129._4_4_ * fVar105;
      fVar107 = auVar29._8_4_;
      fVar69 = auVar129._8_4_ * fVar107;
      fVar110 = auVar29._12_4_;
      fVar71 = auVar129._12_4_ * fVar110;
      fVar113 = auVar29._16_4_;
      fVar73 = auVar129._16_4_ * fVar113;
      fVar116 = auVar29._20_4_;
      fVar75 = auVar129._20_4_ * fVar116;
      fVar119 = auVar29._24_4_;
      fVar77 = auVar129._24_4_ * fVar119;
      fVar122 = auVar29._28_4_;
      fVar79 = auVar129._28_4_ * fVar122;
      auVar81._0_4_ = fVar104 * fVar62 + auVar83._0_4_;
      auVar81._4_4_ = fVar106 * fVar67 + auVar83._4_4_;
      auVar81._8_4_ = fVar109 * fVar69 + auVar83._8_4_;
      auVar81._12_4_ = fVar112 * fVar71 + auVar83._12_4_;
      auVar64._16_4_ = fVar115 * fVar73 + auVar83._16_4_;
      auVar64._0_16_ = auVar81;
      auVar64._20_4_ = fVar118 * fVar75 + auVar83._20_4_;
      auVar64._24_4_ = fVar121 * fVar77 + auVar83._24_4_;
      auVar64._28_4_ = fVar124 * fVar79 + auVar83._28_4_;
      lVar27 = (longlong)(int)local_3e0;
      *(float *)(param_1 + lVar27) = auVar81._0_4_;
      lVar15 = (longlong)(int)fStack_3dc;
      uVar3 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + lVar15) = uVar3;
      lVar23 = (longlong)(int)fStack_3d8;
      uVar3 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + lVar23) = uVar3;
      lVar24 = (longlong)(int)fStack_3d4;
      uVar3 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + lVar24) = uVar3;
      lVar17 = (longlong)(int)fStack_3d0;
      auVar37 = auVar64._16_16_;
      *(float *)(param_1 + lVar17) = auVar64._16_4_;
      lVar26 = (longlong)(int)fStack_3cc;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + lVar26) = uVar3;
      lVar19 = (longlong)(int)fStack_3c8;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + lVar19) = uVar3;
      lVar21 = (longlong)(int)fStack_3c4;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + lVar21) = uVar3;
      fVar41 = fVar41 * fVar125;
      fVar46 = fVar46 * fVar105;
      fVar47 = fVar47 * fVar107;
      fVar48 = fVar48 * fVar110;
      fVar49 = fVar49 * fVar113;
      fVar50 = fVar50 * fVar116;
      fVar51 = fVar51 * fVar119;
      fVar52 = fVar52 * fVar122;
      auVar100._0_4_ = fVar104 * fVar41 + auVar102._0_4_;
      auVar100._4_4_ = fVar106 * fVar46 + auVar102._4_4_;
      auVar100._8_4_ = fVar109 * fVar47 + auVar102._8_4_;
      auVar100._12_4_ = fVar112 * fVar48 + auVar102._12_4_;
      auVar129._16_4_ = fVar115 * fVar49 + auVar102._16_4_;
      auVar129._0_16_ = auVar100;
      auVar129._20_4_ = fVar118 * fVar50 + auVar102._20_4_;
      auVar129._24_4_ = fVar121 * fVar51 + auVar102._24_4_;
      auVar129._28_4_ = fVar124 * fVar52 + auVar102._28_4_;
      *(float *)(param_1 + 4 + lVar27) = auVar100._0_4_;
      uVar3 = vextractps_avx(auVar100,1);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar100,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar100,3);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar3;
      auVar37 = auVar129._16_16_;
      *(float *)(param_1 + 4 + lVar17) = auVar129._16_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar3;
      fVar61 = fVar61 * fVar125;
      fVar66 = fVar66 * fVar105;
      fVar68 = fVar68 * fVar107;
      fVar70 = fVar70 * fVar110;
      fVar72 = fVar72 * fVar113;
      fVar74 = fVar74 * fVar116;
      fVar76 = fVar76 * fVar119;
      fVar78 = fVar78 * fVar122;
      auVar127._0_4_ = fVar104 * fVar61 + auVar128._0_4_;
      auVar127._4_4_ = fVar106 * fVar66 + auVar128._4_4_;
      auVar127._8_4_ = fVar109 * fVar68 + auVar128._8_4_;
      auVar127._12_4_ = fVar112 * fVar70 + auVar128._12_4_;
      auVar102._16_4_ = fVar115 * fVar72 + auVar128._16_4_;
      auVar102._0_16_ = auVar127;
      auVar102._20_4_ = fVar118 * fVar74 + auVar128._20_4_;
      auVar102._24_4_ = fVar121 * fVar76 + auVar128._24_4_;
      auVar102._28_4_ = fVar124 * fVar78 + auVar128._28_4_;
      *(float *)(param_1 + 8 + lVar27) = auVar127._0_4_;
      uVar3 = vextractps_avx(auVar127,1);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar127,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar127,3);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar3;
      auVar37 = auVar102._16_16_;
      *(float *)(param_1 + 8 + lVar17) = auVar102._16_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar3;
      *(float *)(param_1 + 0xc + lVar27) = fVar104;
      auVar37 = auVar87._0_16_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar3;
      auVar37 = auVar87._16_16_;
      *(float *)(param_1 + 0xc + lVar17) = fVar115;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar3;
      local_3c0 = auVar40._0_4_;
      auVar63._0_4_ = -(fVar108 * fVar62) + local_3c0;
      fStack_3bc = auVar40._4_4_;
      auVar63._4_4_ = -(fVar111 * fVar67) + fStack_3bc;
      fStack_3b8 = auVar40._8_4_;
      auVar63._8_4_ = -(fVar114 * fVar69) + fStack_3b8;
      fStack_3b4 = auVar40._12_4_;
      auVar63._12_4_ = -(fVar117 * fVar71) + fStack_3b4;
      fStack_3b0 = auVar40._16_4_;
      auVar45._16_4_ = -(fVar120 * fVar73) + fStack_3b0;
      auVar45._0_16_ = auVar63;
      fStack_3ac = auVar40._20_4_;
      auVar45._20_4_ = -(fVar123 * fVar75) + fStack_3ac;
      fStack_3a8 = auVar40._24_4_;
      auVar45._24_4_ = -(fVar126 * fVar77) + fStack_3a8;
      fStack_3a4 = auVar40._28_4_;
      auVar45._28_4_ = -(fVar5 * fVar79) + fStack_3a4;
      local_3a0 = auVar94._0_4_;
      iStack_39c = auVar94._4_4_;
      iStack_398 = auVar94._8_4_;
      iStack_394 = auVar94._12_4_;
      iStack_390 = auVar94._16_4_;
      iStack_38c = auVar94._20_4_;
      iStack_388 = auVar94._24_4_;
      iStack_384 = auVar94._28_4_;
      lVar27 = (longlong)local_3a0;
      *(float *)(param_1 + lVar27) = auVar63._0_4_;
      lVar15 = (longlong)iStack_39c;
      uVar3 = vextractps_avx(auVar63,1);
      *(undefined4 *)(param_1 + lVar15) = uVar3;
      lVar23 = (longlong)iStack_398;
      uVar3 = vextractps_avx(auVar63,2);
      *(undefined4 *)(param_1 + lVar23) = uVar3;
      lVar24 = (longlong)iStack_394;
      uVar3 = vextractps_avx(auVar63,3);
      *(undefined4 *)(param_1 + lVar24) = uVar3;
      lVar17 = (longlong)iStack_390;
      auVar37 = auVar45._16_16_;
      *(float *)(param_1 + lVar17) = auVar45._16_4_;
      lVar26 = (longlong)iStack_38c;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + lVar26) = uVar3;
      lVar19 = (longlong)iStack_388;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + lVar19) = uVar3;
      lVar21 = (longlong)iStack_384;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + lVar21) = uVar3;
      auVar82._0_4_ = -(fVar108 * fVar41) + auVar92._0_4_;
      auVar82._4_4_ = -(fVar111 * fVar46) + auVar92._4_4_;
      auVar82._8_4_ = -(fVar114 * fVar47) + auVar92._8_4_;
      auVar82._12_4_ = -(fVar117 * fVar48) + auVar92._12_4_;
      auVar87._16_4_ = -(fVar120 * fVar49) + auVar92._16_4_;
      auVar87._0_16_ = auVar82;
      auVar87._20_4_ = -(fVar123 * fVar50) + auVar92._20_4_;
      auVar87._24_4_ = -(fVar126 * fVar51) + auVar92._24_4_;
      auVar87._28_4_ = -(fVar5 * fVar52) + auVar92._28_4_;
      *(float *)(param_1 + 4 + lVar27) = auVar82._0_4_;
      uVar3 = vextractps_avx(auVar82,1);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar82,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar82,3);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar3;
      auVar37 = auVar87._16_16_;
      *(float *)(param_1 + 4 + lVar17) = auVar87._16_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar3;
      local_4c0 = auVar88._0_4_;
      auVar37._0_4_ = -(fVar108 * fVar61) + local_4c0;
      fStack_4bc = auVar88._4_4_;
      auVar37._4_4_ = -(fVar111 * fVar66) + fStack_4bc;
      fStack_4b8 = auVar88._8_4_;
      auVar37._8_4_ = -(fVar114 * fVar68) + fStack_4b8;
      fStack_4b4 = auVar88._12_4_;
      auVar37._12_4_ = -(fVar117 * fVar70) + fStack_4b4;
      fStack_4b0 = auVar88._16_4_;
      auVar30._16_4_ = -(fVar120 * fVar72) + fStack_4b0;
      auVar30._0_16_ = auVar37;
      fStack_4ac = auVar88._20_4_;
      auVar30._20_4_ = -(fVar123 * fVar74) + fStack_4ac;
      fStack_4a8 = auVar88._24_4_;
      auVar30._24_4_ = -(fVar126 * fVar76) + fStack_4a8;
      fStack_4a4 = auVar88._28_4_;
      auVar30._28_4_ = -(fVar5 * fVar78) + fStack_4a4;
      *(float *)(param_1 + 8 + lVar27) = auVar37._0_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar3;
      auVar37 = auVar30._16_16_;
      *(float *)(param_1 + 8 + lVar17) = auVar30._16_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar3;
      pfVar1 = (float *)(param_5 + uVar20);
      *pfVar1 = auVar32._0_4_ + fVar125;
      pfVar1[1] = auVar32._4_4_ + fVar105;
      pfVar1[2] = auVar32._8_4_ + fVar107;
      pfVar1[3] = auVar32._12_4_ + fVar110;
      pfVar1[4] = auVar32._16_4_ + fVar113;
      pfVar1[5] = auVar32._20_4_ + fVar116;
      pfVar1[6] = auVar32._24_4_ + fVar119;
      pfVar1[7] = auVar32._28_4_ + fVar122;
      *(float *)(param_1 + 0xc + lVar27) = fVar108;
      auVar37 = auVar43._0_16_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar3;
      auVar37 = auVar43._16_16_;
      *(float *)(param_1 + 0xc + lVar17) = fVar120;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar3;
      uVar25 = uVar25 + 0x20;
      uVar22 = uVar22 + 8;
    } while ((int)uVar22 < (int)(uVar18 & 0xfffffff8));
  }
  if ((int)param_16 <= (int)uVar22) {
    return;
  }
  auVar32._4_4_ = uVar22;
  auVar32._0_4_ = uVar22;
  auVar32._8_4_ = uVar22;
  auVar32._12_4_ = uVar22;
  auVar32._16_4_ = uVar22;
  auVar32._20_4_ = uVar22;
  auVar32._24_4_ = uVar22;
  auVar32._28_4_ = uVar22;
  auVar40 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar88._4_4_ = param_16;
  auVar88._0_4_ = param_16;
  auVar88._8_4_ = param_16;
  auVar88._12_4_ = param_16;
  auVar88._16_4_ = param_16;
  auVar88._20_4_ = param_16;
  auVar88._24_4_ = param_16;
  auVar88._28_4_ = param_16;
  auVar40 = vpcmpgtd_avx2(auVar88,auVar40);
  pauVar2 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar22 * 8);
  uVar18 = vmovmskps_avx(auVar40);
  if (uVar18 == 0xff) {
    auVar32 = *pauVar2;
    auVar29 = pauVar2[1];
    auVar30 = vshufps_avx(auVar32,auVar29,0x88);
    auVar30 = vpermpd_avx2(auVar30,0xd8);
    auVar32 = vshufps_avx(auVar32,auVar29,0xdd);
    auVar32 = vpermpd_avx2(auVar32,0xd8);
  }
  else {
    auVar30 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
    auVar32 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar40);
  }
  auVar64 = vpslld_avx2(auVar30,4);
  auVar92._4_4_ = __real_00000004;
  auVar92._0_4_ = __real_00000004;
  auVar92._8_4_ = __real_00000004;
  auVar92._12_4_ = __real_00000004;
  auVar92._16_4_ = __real_00000004;
  auVar92._20_4_ = __real_00000004;
  auVar92._24_4_ = __real_00000004;
  auVar92._28_4_ = __real_00000004;
  auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
  auVar31 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar94._4_4_ = __real_00000008;
  auVar94._0_4_ = __real_00000008;
  auVar94._8_4_ = __real_00000008;
  auVar94._12_4_ = __real_00000008;
  auVar94._16_4_ = __real_00000008;
  auVar94._20_4_ = __real_00000008;
  auVar94._24_4_ = __real_00000008;
  auVar94._28_4_ = __real_00000008;
  auVar83 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar128._4_4_ = __real_0000000c;
  auVar128._0_4_ = __real_0000000c;
  auVar128._8_4_ = __real_0000000c;
  auVar128._12_4_ = __real_0000000c;
  auVar128._16_4_ = __real_0000000c;
  auVar128._20_4_ = __real_0000000c;
  auVar128._24_4_ = __real_0000000c;
  auVar128._28_4_ = __real_0000000c;
  auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar88 = vpslld_avx2(auVar32,4);
  vpor_avx2(auVar88,auVar92);
  auVar44 = vgatherdps(ZEXT832(0),auVar40);
  vpor_avx2(auVar88,auVar94);
  auVar45 = vgatherdps(ZEXT832(0),auVar40);
  vpor_avx2(auVar88,auVar128);
  auVar92 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar43 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar29 = vmaskmovps_avx(auVar40,auVar29);
  auVar31 = vmaskmovps_avx(auVar40,auVar31);
  auVar83 = vmaskmovps_avx(auVar40,auVar83);
  auVar43 = vmaskmovps_avx(auVar40,auVar43);
  auVar44 = vmaskmovps_avx(auVar40,auVar44);
  auVar45 = vmaskmovps_avx(auVar40,auVar45);
  vpmulld_avx2(auVar30,auVar128);
  vpmulld_avx2(auVar32,auVar128);
  lVar15 = (longlong)(int)(uVar22 << 2);
  fStack_4e4 = *param_8;
  local_500._0_4_ = fStack_4e4;
  local_500._4_4_ = fStack_4e4;
  fStack_4f8 = fStack_4e4;
  fStack_4f4 = fStack_4e4;
  fStack_4f0 = fStack_4e4;
  fStack_4ec = fStack_4e4;
  fStack_4e8 = fStack_4e4;
  if ((param_7 & 1) != 0) {
    auVar32 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_9 + lVar15));
    fVar80 = param_8[1];
    local_500._0_4_ = auVar32._0_4_ * fVar80 + fStack_4e4;
    local_500._4_4_ = auVar32._4_4_ * fVar80 + fStack_4e4;
    fStack_4f8 = auVar32._8_4_ * fVar80 + fStack_4e4;
    fStack_4f4 = auVar32._12_4_ * fVar80 + fStack_4e4;
    fStack_4f0 = auVar32._16_4_ * fVar80 + fStack_4e4;
    fStack_4ec = auVar32._20_4_ * fVar80 + fStack_4e4;
    fStack_4e8 = auVar32._24_4_ * fVar80 + fStack_4e4;
    fStack_4e4 = auVar32._28_4_ * fVar80 + fStack_4e4;
  }
  fStack_464 = *param_11;
  local_480._0_4_ = fStack_464;
  local_480._4_4_ = fStack_464;
  fStack_478 = fStack_464;
  fStack_474 = fStack_464;
  fStack_470 = fStack_464;
  fStack_46c = fStack_464;
  fStack_468 = fStack_464;
  if ((param_10 & 1) != 0) {
    auVar32 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_12 + lVar15));
    fVar80 = param_11[1];
    local_480._0_4_ = auVar32._0_4_ * fVar80 + fStack_464;
    local_480._4_4_ = auVar32._4_4_ * fVar80 + fStack_464;
    fStack_478 = auVar32._8_4_ * fVar80 + fStack_464;
    fStack_474 = auVar32._12_4_ * fVar80 + fStack_464;
    fStack_470 = auVar32._16_4_ * fVar80 + fStack_464;
    fStack_46c = auVar32._20_4_ * fVar80 + fStack_464;
    fStack_468 = auVar32._24_4_ * fVar80 + fStack_464;
    fStack_464 = auVar32._28_4_ * fVar80 + fStack_464;
  }
  auVar95 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
  auVar94 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar102 = vgatherdps(ZEXT832(0),auVar40);
  auVar129 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar128 = vgatherdps(ZEXT432(0) << 0x20,auVar40);
  auVar97 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar32 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_4 + lVar15));
  auVar30 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_5 + lVar15));
  fVar80 = *param_14;
  fVar125 = fVar80;
  fVar105 = fVar80;
  fVar107 = fVar80;
  fVar110 = fVar80;
  fVar113 = fVar80;
  fVar116 = fVar80;
  fVar119 = fVar80;
  if ((param_13 & 1) != 0) {
    auVar86 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_15 + lVar15));
    fVar122 = param_14[1];
    fVar125 = auVar86._0_4_ * fVar122 + fVar80;
    fVar105 = auVar86._4_4_ * fVar122 + fVar80;
    fVar107 = auVar86._8_4_ * fVar122 + fVar80;
    fVar110 = auVar86._12_4_ * fVar122 + fVar80;
    fVar113 = auVar86._16_4_ * fVar122 + fVar80;
    fVar116 = auVar86._20_4_ * fVar122 + fVar80;
    fVar119 = auVar86._24_4_ * fVar122 + fVar80;
    fVar80 = auVar86._28_4_ * fVar122 + fVar80;
  }
  auVar33 = vsubps_avx(auVar29,auVar43);
  auVar34 = vsubps_avx(auVar31,auVar44);
  auVar36 = vsubps_avx(auVar83,auVar45);
  auVar98._0_4_ =
       auVar36._0_4_ * auVar36._0_4_ + auVar33._0_4_ * auVar33._0_4_ + auVar34._0_4_ * auVar34._0_4_
  ;
  auVar98._4_4_ =
       auVar36._4_4_ * auVar36._4_4_ + auVar33._4_4_ * auVar33._4_4_ + auVar34._4_4_ * auVar34._4_4_
  ;
  auVar98._8_4_ =
       auVar36._8_4_ * auVar36._8_4_ + auVar33._8_4_ * auVar33._8_4_ + auVar34._8_4_ * auVar34._8_4_
  ;
  auVar98._12_4_ =
       auVar36._12_4_ * auVar36._12_4_ +
       auVar33._12_4_ * auVar33._12_4_ + auVar34._12_4_ * auVar34._12_4_;
  auVar98._16_4_ =
       auVar36._16_4_ * auVar36._16_4_ +
       auVar33._16_4_ * auVar33._16_4_ + auVar34._16_4_ * auVar34._16_4_;
  auVar98._20_4_ =
       auVar36._20_4_ * auVar36._20_4_ +
       auVar33._20_4_ * auVar33._20_4_ + auVar34._20_4_ * auVar34._20_4_;
  auVar98._24_4_ =
       auVar36._24_4_ * auVar36._24_4_ +
       auVar33._24_4_ * auVar33._24_4_ + auVar34._24_4_ * auVar34._24_4_;
  auVar98._28_4_ =
       auVar36._28_4_ * auVar36._28_4_ +
       auVar33._28_4_ * auVar33._28_4_ + auVar34._28_4_ * auVar34._28_4_;
  auVar35._4_4_ = __real_38d1b717;
  auVar35._0_4_ = __real_38d1b717;
  auVar35._8_4_ = __real_38d1b717;
  auVar35._12_4_ = __real_38d1b717;
  auVar35._16_4_ = __real_38d1b717;
  auVar35._20_4_ = __real_38d1b717;
  auVar35._24_4_ = __real_38d1b717;
  auVar35._28_4_ = __real_38d1b717;
  auVar86 = vcmpps_avx(auVar98,auVar35,1);
  auVar85 = vsqrtps_avx(auVar98);
  uVar22 = auVar86._0_4_;
  auVar99._0_4_ = ~uVar22 & auVar85._0_4_;
  uVar53 = auVar86._4_4_;
  auVar99._4_4_ = ~uVar53 & auVar85._4_4_;
  uVar54 = auVar86._8_4_;
  auVar99._8_4_ = ~uVar54 & auVar85._8_4_;
  uVar55 = auVar86._12_4_;
  auVar99._12_4_ = ~uVar55 & auVar85._12_4_;
  uVar56 = auVar86._16_4_;
  auVar99._16_4_ = ~uVar56 & auVar85._16_4_;
  uVar57 = auVar86._20_4_;
  auVar99._20_4_ = ~uVar57 & auVar85._20_4_;
  uVar58 = auVar86._24_4_;
  auVar99._24_4_ = ~uVar58 & auVar85._24_4_;
  uVar59 = auVar86._28_4_;
  auVar99._28_4_ = ~uVar59 & auVar85._28_4_;
  auVar6 = vsubps_avx(auVar99,auVar32);
  auVar6 = vcmpps_avx(ZEXT832(0) << 0x20,auVar6,2);
  auVar7 = vblendvps_avx(_local_480,_local_500,auVar6);
  auVar6 = vdivps_avx(auVar33,auVar85);
  auVar33 = vdivps_avx(auVar34,auVar85);
  auVar85 = vdivps_avx(auVar36,auVar85);
  auVar36._4_4_ = __real_3f800000;
  auVar36._0_4_ = __real_3f800000;
  auVar36._8_4_ = __real_3f800000;
  auVar36._12_4_ = __real_3f800000;
  auVar36._16_4_ = __real_3f800000;
  auVar36._20_4_ = __real_3f800000;
  auVar36._24_4_ = __real_3f800000;
  auVar36._28_4_ = __real_3f800000;
  auVar86 = vblendvps_avx(auVar6,auVar36,auVar86);
  auVar89._0_4_ = ~uVar22 & auVar33._0_4_;
  auVar89._4_4_ = ~uVar53 & auVar33._4_4_;
  auVar89._8_4_ = ~uVar54 & auVar33._8_4_;
  auVar89._12_4_ = ~uVar55 & auVar33._12_4_;
  auVar89._16_4_ = ~uVar56 & auVar33._16_4_;
  auVar89._20_4_ = ~uVar57 & auVar33._20_4_;
  auVar89._24_4_ = ~uVar58 & auVar33._24_4_;
  auVar89._28_4_ = ~uVar59 & auVar33._28_4_;
  auVar93._0_4_ = ~uVar22 & auVar85._0_4_;
  auVar93._4_4_ = ~uVar53 & auVar85._4_4_;
  auVar93._8_4_ = ~uVar54 & auVar85._8_4_;
  auVar93._12_4_ = ~uVar55 & auVar85._12_4_;
  auVar93._16_4_ = ~uVar56 & auVar85._16_4_;
  auVar93._20_4_ = ~uVar57 & auVar85._20_4_;
  auVar93._24_4_ = ~uVar58 & auVar85._24_4_;
  auVar93._28_4_ = ~uVar59 & auVar85._28_4_;
  auVar86 = vmaskmovps_avx(auVar40,auVar86);
  auVar6 = vmaskmovps_avx(auVar40,auVar89);
  auVar33 = vmaskmovps_avx(auVar40,auVar93);
  auVar38._4_4_ = __real_322bcc77;
  auVar38._0_4_ = __real_322bcc77;
  auVar38._8_4_ = __real_322bcc77;
  auVar38._12_4_ = __real_322bcc77;
  auVar38._16_4_ = __real_322bcc77;
  auVar38._20_4_ = __real_322bcc77;
  auVar38._24_4_ = __real_322bcc77;
  auVar38._28_4_ = __real_322bcc77;
  auVar85 = vdivps_avx(auVar36,auVar32);
  auVar32 = vcmpps_avx(auVar32,auVar38,1);
  auVar32 = vblendvps_avx(auVar85,auVar36,auVar32);
  local_4c0 = auVar92._0_4_;
  fStack_4bc = auVar92._4_4_;
  fStack_4b8 = auVar92._8_4_;
  fStack_4b4 = auVar92._12_4_;
  fStack_4b0 = auVar92._16_4_;
  fStack_4ac = auVar92._20_4_;
  fStack_4a8 = auVar92._24_4_;
  fStack_4a4 = auVar92._28_4_;
  fVar122 = auVar87._0_4_;
  auVar90._0_4_ = fVar122 + local_4c0;
  fVar108 = auVar87._4_4_;
  auVar90._4_4_ = fVar108 + fStack_4bc;
  fVar111 = auVar87._8_4_;
  auVar90._8_4_ = fVar111 + fStack_4b8;
  fVar114 = auVar87._12_4_;
  auVar90._12_4_ = fVar114 + fStack_4b4;
  fVar117 = auVar87._16_4_;
  auVar90._16_4_ = fVar117 + fStack_4b0;
  fVar120 = auVar87._20_4_;
  auVar90._20_4_ = fVar120 + fStack_4ac;
  fVar123 = auVar87._24_4_;
  auVar90._24_4_ = fVar123 + fStack_4a8;
  fVar126 = auVar87._28_4_;
  auVar90._28_4_ = fVar126 + fStack_4a4;
  auVar7 = vdivps_avx(auVar7,auVar90);
  auVar7 = vsqrtps_avx(auVar7);
  fVar125 = param_6 * auVar32._0_4_ * (fVar125 + fVar125) * auVar7._0_4_;
  fVar105 = param_6 * auVar32._4_4_ * (fVar105 + fVar105) * auVar7._4_4_;
  fVar107 = param_6 * auVar32._8_4_ * (fVar107 + fVar107) * auVar7._8_4_;
  fVar110 = param_6 * auVar32._12_4_ * (fVar110 + fVar110) * auVar7._12_4_;
  fVar113 = param_6 * auVar32._16_4_ * (fVar113 + fVar113) * auVar7._16_4_;
  fVar116 = param_6 * auVar32._20_4_ * (fVar116 + fVar116) * auVar7._20_4_;
  fVar119 = param_6 * auVar32._24_4_ * (fVar119 + fVar119) * auVar7._24_4_;
  param_6 = param_6 * auVar32._28_4_ * (fVar80 + fVar80) * auVar7._28_4_;
  auVar32 = vsubps_avx(auVar29,auVar95);
  auVar32 = vsubps_avx(auVar32,auVar43);
  auVar94 = vsubps_avx(auVar31,auVar94);
  auVar102 = vsubps_avx(auVar83,auVar102);
  auVar94 = vsubps_avx(auVar94,auVar44);
  local_440 = auVar128._0_4_;
  fStack_43c = auVar128._4_4_;
  fStack_438 = auVar128._8_4_;
  fStack_434 = auVar128._12_4_;
  fStack_430 = auVar128._16_4_;
  fStack_42c = auVar128._20_4_;
  fStack_428 = auVar128._24_4_;
  fStack_424 = auVar128._28_4_;
  auVar102 = vsubps_avx(auVar102,auVar45);
  local_3c0 = auVar97._0_4_;
  fStack_3bc = auVar97._4_4_;
  fStack_3b8 = auVar97._8_4_;
  fStack_3b4 = auVar97._12_4_;
  fStack_3b0 = auVar97._16_4_;
  fStack_3ac = auVar97._20_4_;
  fStack_3a8 = auVar97._24_4_;
  fStack_3a4 = auVar97._28_4_;
  local_360 = auVar86._0_4_;
  fStack_35c = auVar86._4_4_;
  fStack_358 = auVar86._8_4_;
  fStack_354 = auVar86._12_4_;
  fStack_350 = auVar86._16_4_;
  fStack_34c = auVar86._20_4_;
  fStack_348 = auVar86._24_4_;
  fStack_344 = auVar86._28_4_;
  local_340 = auVar6._0_4_;
  fStack_33c = auVar6._4_4_;
  fStack_338 = auVar6._8_4_;
  fStack_334 = auVar6._12_4_;
  fStack_330 = auVar6._16_4_;
  fStack_32c = auVar6._20_4_;
  fStack_328 = auVar6._24_4_;
  fStack_324 = auVar6._28_4_;
  local_320 = auVar33._0_4_;
  fStack_31c = auVar33._4_4_;
  fStack_318 = auVar33._8_4_;
  fStack_314 = auVar33._12_4_;
  fStack_310 = auVar33._16_4_;
  fStack_30c = auVar33._20_4_;
  fStack_308 = auVar33._24_4_;
  fStack_304 = auVar33._28_4_;
  local_3e0 = auVar30._0_4_;
  fStack_3dc = auVar30._4_4_;
  fStack_3d8 = auVar30._8_4_;
  fStack_3d4 = auVar30._12_4_;
  fStack_3d0 = auVar30._16_4_;
  fStack_3cc = auVar30._20_4_;
  fStack_3c8 = auVar30._24_4_;
  fStack_3c4 = auVar30._28_4_;
  auVar65._0_4_ =
       -(fVar125 *
        (local_320 * (auVar102._0_4_ + local_3c0) +
        local_360 * (auVar129._0_4_ + auVar32._0_4_) + (auVar94._0_4_ + local_440) * local_340)) -
       local_3e0;
  auVar65._4_4_ =
       -(fVar105 *
        (fStack_31c * (auVar102._4_4_ + fStack_3bc) +
        fStack_35c * (auVar129._4_4_ + auVar32._4_4_) + (auVar94._4_4_ + fStack_43c) * fStack_33c))
       - fStack_3dc;
  auVar65._8_4_ =
       -(fVar107 *
        (fStack_318 * (auVar102._8_4_ + fStack_3b8) +
        fStack_358 * (auVar129._8_4_ + auVar32._8_4_) + (auVar94._8_4_ + fStack_438) * fStack_338))
       - fStack_3d8;
  auVar65._12_4_ =
       -(fVar110 *
        (fStack_314 * (auVar102._12_4_ + fStack_3b4) +
        fStack_354 * (auVar129._12_4_ + auVar32._12_4_) + (auVar94._12_4_ + fStack_434) * fStack_334
        )) - fStack_3d4;
  auVar65._16_4_ =
       -(fVar113 *
        (fStack_310 * (auVar102._16_4_ + fStack_3b0) +
        fStack_350 * (auVar129._16_4_ + auVar32._16_4_) + (auVar94._16_4_ + fStack_430) * fStack_330
        )) - fStack_3d0;
  auVar65._20_4_ =
       -(fVar116 *
        (fStack_30c * (auVar102._20_4_ + fStack_3ac) +
        fStack_34c * (auVar129._20_4_ + auVar32._20_4_) + (auVar94._20_4_ + fStack_42c) * fStack_32c
        )) - fStack_3cc;
  auVar65._24_4_ =
       -(fVar119 *
        (fStack_308 * (auVar102._24_4_ + fStack_3a8) +
        fStack_348 * (auVar129._24_4_ + auVar32._24_4_) + (auVar94._24_4_ + fStack_428) * fStack_328
        )) - fStack_3c8;
  auVar65._28_4_ =
       -(param_6 *
        (fStack_304 * (auVar102._28_4_ + fStack_3a4) +
        fStack_344 * (auVar129._28_4_ + auVar32._28_4_) + (auVar94._28_4_ + fStack_424) * fStack_324
        )) - fStack_3c4;
  auVar33._0_4_ = auVar90._0_4_ * fVar125 + __real_3f800000;
  auVar33._4_4_ = auVar90._4_4_ * fVar105 + __real_3f800000;
  auVar33._8_4_ = auVar90._8_4_ * fVar107 + __real_3f800000;
  auVar33._12_4_ = auVar90._12_4_ * fVar110 + __real_3f800000;
  auVar33._16_4_ = auVar90._16_4_ * fVar113 + __real_3f800000;
  auVar33._20_4_ = auVar90._20_4_ * fVar116 + __real_3f800000;
  auVar33._24_4_ = auVar90._24_4_ * fVar119 + __real_3f800000;
  auVar33._28_4_ = auVar90._28_4_ * param_6 + __real_3f800000;
  auVar32 = vdivps_avx(auVar65,auVar33);
  fVar80 = auVar32._0_4_;
  auVar34._0_4_ = fVar80 + local_3e0;
  fVar125 = auVar32._4_4_;
  auVar34._4_4_ = fVar125 + fStack_3dc;
  fVar105 = auVar32._8_4_;
  auVar34._8_4_ = fVar105 + fStack_3d8;
  fVar107 = auVar32._12_4_;
  auVar34._12_4_ = fVar107 + fStack_3d4;
  fVar110 = auVar32._16_4_;
  auVar34._16_4_ = fVar110 + fStack_3d0;
  fVar113 = auVar32._20_4_;
  auVar34._20_4_ = fVar113 + fStack_3cc;
  fVar116 = auVar32._24_4_;
  auVar34._24_4_ = fVar116 + fStack_3c8;
  fVar119 = auVar32._28_4_;
  auVar34._28_4_ = fVar119 + fStack_3c4;
  auVar40 = vmaskmovps_avx(auVar40,auVar34);
  *(undefined1 (*) [32])(param_5 + lVar15) = auVar40;
  local_360 = fVar80 * local_360;
  fStack_35c = fVar125 * fStack_35c;
  fStack_358 = fVar105 * fStack_358;
  fStack_354 = fVar107 * fStack_354;
  fStack_350 = fVar110 * fStack_350;
  fStack_34c = fVar113 * fStack_34c;
  fStack_348 = fVar116 * fStack_348;
  fStack_344 = fVar119 * fStack_344;
  auVar101._0_4_ = fVar122 * local_360 + auVar29._0_4_;
  auVar101._4_4_ = fVar108 * fStack_35c + auVar29._4_4_;
  auVar101._8_4_ = fVar111 * fStack_358 + auVar29._8_4_;
  auVar101._12_4_ = fVar114 * fStack_354 + auVar29._12_4_;
  auVar103._16_4_ = fVar117 * fStack_350 + auVar29._16_4_;
  auVar103._0_16_ = auVar101;
  auVar103._20_4_ = fVar120 * fStack_34c + auVar29._20_4_;
  auVar103._24_4_ = fVar123 * fStack_348 + auVar29._24_4_;
  auVar103._28_4_ = fVar126 * fStack_344 + auVar29._28_4_;
  cVar16 = (char)uVar18;
  iVar42 = auVar64._0_4_;
  auVar100 = auVar64._16_16_;
  auVar63 = auVar87._0_16_;
  auVar82 = auVar87._16_16_;
  auVar127 = auVar103._16_16_;
  iVar14 = auVar64._4_4_;
  iVar11 = auVar64._8_4_;
  iVar12 = auVar64._12_4_;
  local_380 = auVar88._0_4_;
  iStack_37c = auVar88._4_4_;
  iStack_378 = auVar88._8_4_;
  iStack_374 = auVar88._12_4_;
  iStack_370 = auVar88._16_4_;
  iStack_36c = auVar88._20_4_;
  iStack_368 = auVar88._24_4_;
  iStack_364 = auVar88._28_4_;
  local_500._0_4_ = auVar43._0_4_;
  local_500._4_4_ = auVar43._4_4_;
  fStack_4f8 = auVar43._8_4_;
  fStack_4f4 = auVar43._12_4_;
  fStack_4f0 = auVar43._16_4_;
  fStack_4ec = auVar43._20_4_;
  fStack_4e8 = auVar43._24_4_;
  fStack_4e4 = auVar43._28_4_;
  local_460 = auVar44._0_4_;
  fStack_45c = auVar44._4_4_;
  fStack_458 = auVar44._8_4_;
  fStack_454 = auVar44._12_4_;
  fStack_450 = auVar44._16_4_;
  fStack_44c = auVar44._20_4_;
  fStack_448 = auVar44._24_4_;
  fStack_444 = auVar44._28_4_;
  local_4e0._0_4_ = auVar45._0_4_;
  local_4e0._4_4_ = auVar45._4_4_;
  fStack_4d8 = auVar45._8_4_;
  fStack_4d4 = auVar45._12_4_;
  fStack_4d0 = auVar45._16_4_;
  fStack_4cc = auVar45._20_4_;
  fStack_4c8 = auVar45._24_4_;
  fStack_4c4 = auVar45._28_4_;
  iVar28 = auVar64._16_4_;
  auVar37 = auVar92._0_16_;
  auVar81 = auVar92._16_16_;
  if ((uVar18 & 1) != 0) {
    *(float *)(param_1 + iVar42) = auVar101._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar101,1);
    *(undefined4 *)(param_1 + iVar14) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar101,2);
    *(undefined4 *)(param_1 + iVar11) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar101,3);
    *(undefined4 *)(param_1 + iVar12) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(float *)(param_1 + iVar28) = auVar103._16_4_;
  }
  if ((uVar18 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar100,1);
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + iVar13) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar100,2);
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + iVar13) = uVar4;
  }
  if (cVar16 < '\0') {
    iVar13 = vextractps_avx(auVar100,3);
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + iVar13) = uVar4;
    auVar130._0_4_ = fVar122 * fVar80 * local_340 + auVar31._0_4_;
    auVar130._4_4_ = fVar108 * fVar125 * fStack_33c + auVar31._4_4_;
    auVar130._8_4_ = fVar111 * fVar105 * fStack_338 + auVar31._8_4_;
    auVar130._12_4_ = fVar114 * fVar107 * fStack_334 + auVar31._12_4_;
    auVar130._16_4_ = fVar117 * fVar110 * fStack_330 + auVar31._16_4_;
    auVar130._20_4_ = fVar120 * fVar113 * fStack_32c + auVar31._20_4_;
    auVar130._24_4_ = fVar123 * fVar116 * fStack_328 + auVar31._24_4_;
    auVar130._28_4_ = fVar126 * fVar119 * fStack_324 + auVar31._28_4_;
  }
  else {
    auVar130._0_4_ = fVar122 * fVar80 * local_340 + auVar31._0_4_;
    auVar130._4_4_ = fVar108 * fVar125 * fStack_33c + auVar31._4_4_;
    auVar130._8_4_ = fVar111 * fVar105 * fStack_338 + auVar31._8_4_;
    auVar130._12_4_ = fVar114 * fVar107 * fStack_334 + auVar31._12_4_;
    auVar130._16_4_ = fVar117 * fVar110 * fStack_330 + auVar31._16_4_;
    auVar130._20_4_ = fVar120 * fVar113 * fStack_32c + auVar31._20_4_;
    auVar130._24_4_ = fVar123 * fVar116 * fStack_328 + auVar31._24_4_;
    auVar130._28_4_ = fVar126 * fVar119 * fStack_324 + auVar31._28_4_;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar42) = auVar130._0_4_;
  }
  auVar127 = auVar130._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar28) = auVar130._16_4_;
  }
  auVar127 = auVar130._16_16_;
  if ((uVar18 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar100,1);
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar100,2);
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar4;
  }
  if (cVar16 < '\0') {
    iVar13 = vextractps_avx(auVar100,3);
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar4;
    auVar96._0_4_ = fVar122 * local_320 * fVar80 + auVar83._0_4_;
    auVar96._4_4_ = fVar108 * fStack_31c * fVar125 + auVar83._4_4_;
    auVar96._8_4_ = fVar111 * fStack_318 * fVar105 + auVar83._8_4_;
    auVar96._12_4_ = fVar114 * fStack_314 * fVar107 + auVar83._12_4_;
    auVar96._16_4_ = fVar117 * fStack_310 * fVar110 + auVar83._16_4_;
    auVar96._20_4_ = fVar120 * fStack_30c * fVar113 + auVar83._20_4_;
    auVar96._24_4_ = fVar123 * fStack_308 * fVar116 + auVar83._24_4_;
    auVar96._28_4_ = fVar126 * fStack_304 * fVar119 + auVar83._28_4_;
  }
  else {
    auVar96._0_4_ = fVar122 * local_320 * fVar80 + auVar83._0_4_;
    auVar96._4_4_ = fVar108 * fStack_31c * fVar125 + auVar83._4_4_;
    auVar96._8_4_ = fVar111 * fStack_318 * fVar105 + auVar83._8_4_;
    auVar96._12_4_ = fVar114 * fStack_314 * fVar107 + auVar83._12_4_;
    auVar96._16_4_ = fVar117 * fStack_310 * fVar110 + auVar83._16_4_;
    auVar96._20_4_ = fVar120 * fStack_30c * fVar113 + auVar83._20_4_;
    auVar96._24_4_ = fVar123 * fStack_308 * fVar116 + auVar83._24_4_;
    auVar96._28_4_ = fVar126 * fStack_304 * fVar119 + auVar83._28_4_;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar42) = auVar96._0_4_;
  }
  auVar127 = auVar96._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar28) = auVar96._16_4_;
  }
  auVar127 = auVar96._16_16_;
  if ((uVar18 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar100,1);
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar100,2);
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar4;
  }
  if (cVar16 < '\0') {
    iVar13 = vextractps_avx(auVar100,3);
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar4;
  }
  if ((uVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar42) = fVar122;
  }
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar12) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar28) = fVar117;
  }
  if ((uVar18 & 0x20) != 0) {
    iVar14 = vextractps_avx(auVar100,1);
    uVar4 = vextractps_avx(auVar82,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar14 = vextractps_avx(auVar100,2);
    uVar4 = vextractps_avx(auVar82,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar4;
  }
  if (cVar16 < '\0') {
    iVar14 = vextractps_avx(auVar100,3);
    uVar4 = vextractps_avx(auVar82,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar4;
    auVar91._0_4_ = -(local_4c0 * local_360) + (float)local_500._0_4_;
    auVar91._4_4_ = -(fStack_4bc * fStack_35c) + (float)local_500._4_4_;
    auVar91._8_4_ = -(fStack_4b8 * fStack_358) + fStack_4f8;
    auVar91._12_4_ = -(fStack_4b4 * fStack_354) + fStack_4f4;
    auVar91._16_4_ = -(fStack_4b0 * fStack_350) + fStack_4f0;
    auVar91._20_4_ = -(fStack_4ac * fStack_34c) + fStack_4ec;
    auVar91._24_4_ = -(fStack_4a8 * fStack_348) + fStack_4e8;
    auVar91._28_4_ = -(fStack_4a4 * fStack_344) + fStack_4e4;
  }
  else {
    auVar91._0_4_ = -(local_4c0 * local_360) + (float)local_500._0_4_;
    auVar91._4_4_ = -(fStack_4bc * fStack_35c) + (float)local_500._4_4_;
    auVar91._8_4_ = -(fStack_4b8 * fStack_358) + fStack_4f8;
    auVar91._12_4_ = -(fStack_4b4 * fStack_354) + fStack_4f4;
    auVar91._16_4_ = -(fStack_4b0 * fStack_350) + fStack_4f0;
    auVar91._20_4_ = -(fStack_4ac * fStack_34c) + fStack_4ec;
    auVar91._24_4_ = -(fStack_4a8 * fStack_348) + fStack_4e8;
    auVar91._28_4_ = -(fStack_4a4 * fStack_344) + fStack_4e4;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + local_380) = auVar91._0_4_;
  }
  auVar63 = auVar91._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + iStack_37c) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + iStack_378) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + iStack_374) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + iStack_370) = auVar91._16_4_;
  }
  auVar63 = auVar91._16_16_;
  if ((uVar18 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + iStack_36c) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + iStack_368) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + iStack_364) = uVar4;
    auVar39._0_4_ = -(local_4c0 * fVar80 * local_340) + local_460;
    auVar39._4_4_ = -(fStack_4bc * fVar125 * fStack_33c) + fStack_45c;
    auVar39._8_4_ = -(fStack_4b8 * fVar105 * fStack_338) + fStack_458;
    auVar39._12_4_ = -(fStack_4b4 * fVar107 * fStack_334) + fStack_454;
    auVar39._16_4_ = -(fStack_4b0 * fVar110 * fStack_330) + fStack_450;
    auVar39._20_4_ = -(fStack_4ac * fVar113 * fStack_32c) + fStack_44c;
    auVar39._24_4_ = -(fStack_4a8 * fVar116 * fStack_328) + fStack_448;
    auVar39._28_4_ = -(fStack_4a4 * fVar119 * fStack_324) + fStack_444;
  }
  else {
    auVar39._0_4_ = -(local_4c0 * fVar80 * local_340) + local_460;
    auVar39._4_4_ = -(fStack_4bc * fVar125 * fStack_33c) + fStack_45c;
    auVar39._8_4_ = -(fStack_4b8 * fVar105 * fStack_338) + fStack_458;
    auVar39._12_4_ = -(fStack_4b4 * fVar107 * fStack_334) + fStack_454;
    auVar39._16_4_ = -(fStack_4b0 * fVar110 * fStack_330) + fStack_450;
    auVar39._20_4_ = -(fStack_4ac * fVar113 * fStack_32c) + fStack_44c;
    auVar39._24_4_ = -(fStack_4a8 * fVar116 * fStack_328) + fStack_448;
    auVar39._28_4_ = -(fStack_4a4 * fVar119 * fStack_324) + fStack_444;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_380) = auVar39._0_4_;
  }
  auVar63 = auVar39._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_378) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_374) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_370) = auVar39._16_4_;
  }
  auVar63 = auVar39._16_16_;
  if ((uVar18 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_36c) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_368) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_364) = uVar4;
    auVar84._0_4_ = -(local_4c0 * local_320 * fVar80) + (float)local_4e0._0_4_;
    auVar84._4_4_ = -(fStack_4bc * fStack_31c * fVar125) + (float)local_4e0._4_4_;
    auVar84._8_4_ = -(fStack_4b8 * fStack_318 * fVar105) + fStack_4d8;
    auVar84._12_4_ = -(fStack_4b4 * fStack_314 * fVar107) + fStack_4d4;
    auVar84._16_4_ = -(fStack_4b0 * fStack_310 * fVar110) + fStack_4d0;
    auVar84._20_4_ = -(fStack_4ac * fStack_30c * fVar113) + fStack_4cc;
    auVar84._24_4_ = -(fStack_4a8 * fStack_308 * fVar116) + fStack_4c8;
    auVar84._28_4_ = -(fStack_4a4 * fStack_304 * fVar119) + fStack_4c4;
  }
  else {
    auVar84._0_4_ = -(local_4c0 * local_320 * fVar80) + (float)local_4e0._0_4_;
    auVar84._4_4_ = -(fStack_4bc * fStack_31c * fVar125) + (float)local_4e0._4_4_;
    auVar84._8_4_ = -(fStack_4b8 * fStack_318 * fVar105) + fStack_4d8;
    auVar84._12_4_ = -(fStack_4b4 * fStack_314 * fVar107) + fStack_4d4;
    auVar84._16_4_ = -(fStack_4b0 * fStack_310 * fVar110) + fStack_4d0;
    auVar84._20_4_ = -(fStack_4ac * fStack_30c * fVar113) + fStack_4cc;
    auVar84._24_4_ = -(fStack_4a8 * fStack_308 * fVar116) + fStack_4c8;
    auVar84._28_4_ = -(fStack_4a4 * fStack_304 * fVar119) + fStack_4c4;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_380) = auVar84._0_4_;
  }
  auVar63 = auVar84._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_378) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_374) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_370) = auVar84._16_4_;
  }
  auVar63 = auVar84._16_16_;
  if ((uVar18 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_36c) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_368) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_364) = uVar4;
  }
  if ((uVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_380) = local_4c0;
  }
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar37,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar37,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_378) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar37,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_374) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_370) = fStack_4b0;
  }
  if ((uVar18 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar81,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_36c) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar81,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_368) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar81,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_364) = uVar4;
  }
  return;
}

// ApplyXPBDEmbeddedVertexFaceSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_avx2 @ 140890800

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedVertexFaceSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,float *param_8,longlong param_9,byte param_10,
               float *param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  char cVar24;
  undefined1 (*pauVar25) [32];
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  float fVar37;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar58 [16];
  float fVar38;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  float fVar64;
  float fVar68;
  float fVar69;
  undefined1 auVar65 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar66 [32];
  float fVar70;
  float fVar74;
  undefined1 auVar67 [32];
  float fVar75;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  float fVar103;
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [16];
  undefined1 auVar107 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  float fVar110;
  float fVar111;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar112 [32];
  float fVar125;
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  float fVar126;
  undefined1 auVar127 [16];
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  float fVar138;
  float fVar146;
  undefined1 auVar139 [32];
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 in_ZMM10 [64];
  uint uVar147;
  uint uVar150;
  uint uVar151;
  uint uVar152;
  uint uVar153;
  uint uVar154;
  uint uVar155;
  undefined1 auVar148 [32];
  uint uVar156;
  undefined1 auVar149 [32];
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
  float fVar167;
  float fVar172;
  float fVar173;
  undefined1 auVar168 [16];
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 local_6c0 [8];
  float fStack_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  float local_6a0;
  float fStack_69c;
  float fStack_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float fStack_688;
  float fStack_684;
  undefined1 local_660 [8];
  float fStack_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float fStack_648;
  float fStack_644;
  int local_640;
  int iStack_63c;
  int iStack_638;
  int iStack_634;
  int iStack_630;
  int iStack_62c;
  int iStack_628;
  int iStack_624;
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
  float local_5c0;
  float fStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  float local_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  float local_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  int local_540;
  int iStack_53c;
  int iStack_538;
  int iStack_534;
  int iStack_530;
  int iStack_52c;
  int iStack_528;
  int iStack_524;
  int local_520;
  int iStack_51c;
  int iStack_518;
  int iStack_514;
  int iStack_510;
  int iStack_50c;
  int iStack_508;
  int iStack_504;
  int local_500;
  int iStack_4fc;
  int iStack_4f8;
  int iStack_4f4;
  int iStack_4f0;
  int iStack_4ec;
  int iStack_4e8;
  int iStack_4e4;
  int local_4a0;
  int iStack_49c;
  int iStack_498;
  int iStack_494;
  int iStack_490;
  int iStack_48c;
  int iStack_488;
  int iStack_484;
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
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  int local_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
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
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined1 auVar130 [32];
  undefined1 auVar169 [32];
  
  uVar22 = __real_0000000c;
  uVar5 = __real_00000008;
  uVar21 = __real_00000004;
  fVar38 = __real_3f800000;
  uVar6 = __real_38d1b717;
  uVar23 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar23 = param_13;
  }
  if ((int)(uVar23 & 0xfffffff8) < 1) {
    uVar32 = 0;
  }
  else {
    uVar32 = 0;
    uVar30 = 0;
    do {
      uVar27 = uVar30 & 0xffffffff;
      fStack_5e4 = *param_8;
      local_600._0_4_ = fStack_5e4;
      local_600._4_4_ = fStack_5e4;
      fStack_5f8 = fStack_5e4;
      fStack_5f4 = fStack_5e4;
      fStack_5f0 = fStack_5e4;
      fStack_5ec = fStack_5e4;
      fStack_5e8 = fStack_5e4;
      if ((param_7 & 1) != 0) {
        fVar2 = param_8[1];
        pfVar1 = (float *)(param_9 + uVar27);
        local_600._0_4_ = fVar2 * *pfVar1 + fStack_5e4;
        local_600._4_4_ = fVar2 * pfVar1[1] + fStack_5e4;
        fStack_5f8 = fVar2 * pfVar1[2] + fStack_5e4;
        fStack_5f4 = fVar2 * pfVar1[3] + fStack_5e4;
        fStack_5f0 = fVar2 * pfVar1[4] + fStack_5e4;
        fStack_5ec = fVar2 * pfVar1[5] + fStack_5e4;
        fStack_5e8 = fVar2 * pfVar1[6] + fStack_5e4;
        fStack_5e4 = fVar2 * pfVar1[7] + fStack_5e4;
      }
      auVar83 = *(undefined1 (*) [32])(param_2 + uVar30 * 4);
      auVar108 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar30 * 4);
      auVar76 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar30 * 4);
      auVar77 = *(undefined1 (*) [32])(param_2 + 0x60 + uVar30 * 4);
      auVar159 = vperm2i128_avx2(auVar83,auVar76,0x20);
      auVar104 = vperm2i128_avx2(auVar83,auVar76,0x31);
      auVar107 = vperm2i128_avx2(auVar108,auVar77,0x20);
      auVar77 = vperm2i128_avx2(auVar108,auVar77,0x31);
      auVar108 = vpunpckldq_avx2(auVar159,auVar104);
      auVar76 = vpunpckldq_avx2(auVar107,auVar77);
      auVar83 = vpunpcklqdq_avx2(auVar108,auVar76);
      auVar128 = vpslld_avx2(auVar83,4);
      auVar157._4_4_ = uVar21;
      auVar157._0_4_ = uVar21;
      auVar157._8_4_ = uVar21;
      auVar157._12_4_ = uVar21;
      auVar157._16_4_ = uVar21;
      auVar157._20_4_ = uVar21;
      auVar157._24_4_ = uVar21;
      auVar157._28_4_ = uVar21;
      vpor_avx2(auVar128,auVar157);
      auVar83 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
      auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
      auVar93._4_4_ = uVar5;
      auVar93._0_4_ = uVar5;
      auVar93._8_4_ = uVar5;
      auVar93._12_4_ = uVar5;
      auVar93._16_4_ = uVar5;
      auVar93._20_4_ = uVar5;
      auVar93._24_4_ = uVar5;
      auVar93._28_4_ = uVar5;
      vpor_avx2(auVar128,auVar93);
      auVar83 = vpcmpeqd_avx2(auVar112,auVar112);
      auVar89 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar139._4_4_ = uVar22;
      auVar139._0_4_ = uVar22;
      auVar139._8_4_ = uVar22;
      auVar139._12_4_ = uVar22;
      auVar139._16_4_ = uVar22;
      auVar139._20_4_ = uVar22;
      auVar139._24_4_ = uVar22;
      auVar139._28_4_ = uVar22;
      vpor_avx2(auVar128,auVar139);
      auVar83 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
      auVar90 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar83 = vpunpckhqdq_avx2(auVar108,auVar76);
      auVar170 = vpslld_avx2(auVar83,4);
      vpor_avx2(auVar170,auVar157);
      auVar83 = vpcmpeqd_avx2(auVar76,auVar76);
      auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      vpor_avx2(auVar170,auVar93);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar92 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar108 = vpunpckhdq_avx2(auVar159,auVar104);
      vpor_avx2(auVar170,auVar139);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      auVar76 = vpunpckhdq_avx2(auVar107,auVar77);
      auVar83 = vpunpcklqdq_avx2(auVar108,auVar76);
      auVar129 = vpslld_avx2(auVar83,4);
      vpor_avx2(auVar129,auVar157);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar45 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      vpor_avx2(auVar129,auVar93);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar46 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      vpor_avx2(auVar129,auVar139);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar47 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar83 = vpunpckhqdq_avx2(auVar108,auVar76);
      auVar48 = vpslld_avx2(auVar83,4);
      vpor_avx2(auVar157,auVar48);
      auVar83 = vpcmpeqd_avx2(auVar108,auVar108);
      auVar165 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
      vpor_avx2(auVar93,auVar48);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar157 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      vpor_avx2(auVar139,auVar48);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar93 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar83 = *(undefined1 (*) [32])(param_3 + uVar30 * 4);
      auVar108 = *(undefined1 (*) [32])(param_3 + 0x40 + uVar30 * 4);
      auVar104 = vperm2i128_avx2(auVar83,auVar108,0x20);
      auVar76 = vperm2i128_avx2(auVar83,auVar108,0x31);
      auVar83 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar30 * 4);
      auVar108 = *(undefined1 (*) [32])(param_3 + 0x60 + uVar30 * 4);
      auVar107 = vperm2i128_avx2(auVar83,auVar108,0x20);
      auVar139 = vperm2i128_avx2(auVar83,auVar108,0x31);
      auVar159 = vpunpckldq_avx2(auVar104,auVar76);
      auVar108 = vpunpckhdq_avx2(auVar104,auVar76);
      auVar83 = vpunpckldq_avx2(auVar107,auVar139);
      auVar77 = vpunpckhqdq_avx2(auVar159,auVar83);
      auVar76 = vpunpckhdq_avx2(auVar107,auVar139);
      auVar83 = vpcmpeqd_avx2(auVar104,auVar104);
      auVar107 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar83 = vpcmpeqd_avx2(auVar159,auVar159);
      auVar139 = vgatherdps(ZEXT832(0),auVar83);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar162 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar104 = vgatherdps(ZEXT832(0),auVar83);
      auVar159 = vpunpcklqdq_avx2(auVar108,auVar76);
      auVar83 = vpunpckhqdq_avx2(auVar108,auVar76);
      fVar111 = auVar159._0_4_;
      fVar119 = auVar159._4_4_;
      fVar120 = auVar159._8_4_;
      fVar121 = auVar159._12_4_;
      fVar122 = auVar159._16_4_;
      fVar123 = auVar159._20_4_;
      fVar124 = auVar159._24_4_;
      fVar125 = auVar159._28_4_;
      fVar64 = auVar77._0_4_;
      fVar68 = auVar77._4_4_;
      fVar69 = auVar77._8_4_;
      fVar70 = auVar77._12_4_;
      fVar71 = auVar77._16_4_;
      fVar72 = auVar77._20_4_;
      fVar73 = auVar77._24_4_;
      fVar74 = auVar77._28_4_;
      local_6c0._0_4_ = auVar45._0_4_;
      local_6c0._4_4_ = auVar45._4_4_;
      fStack_6b8 = auVar45._8_4_;
      fStack_6b4 = auVar45._12_4_;
      fStack_6b0 = auVar45._16_4_;
      fStack_6ac = auVar45._20_4_;
      fStack_6a8 = auVar45._24_4_;
      fStack_6a4 = auVar45._28_4_;
      local_580 = auVar91._0_4_;
      fStack_57c = auVar91._4_4_;
      fStack_578 = auVar91._8_4_;
      fStack_574 = auVar91._12_4_;
      fStack_570 = auVar91._16_4_;
      fStack_56c = auVar91._20_4_;
      fStack_568 = auVar91._24_4_;
      fStack_564 = auVar91._28_4_;
      local_6a0 = auVar46._0_4_;
      fStack_69c = auVar46._4_4_;
      fStack_698 = auVar46._8_4_;
      fStack_694 = auVar46._12_4_;
      fStack_690 = auVar46._16_4_;
      fStack_68c = auVar46._20_4_;
      fStack_688 = auVar46._24_4_;
      fStack_684 = auVar46._28_4_;
      local_620._0_4_ = auVar92._0_4_;
      local_620._4_4_ = auVar92._4_4_;
      fStack_618 = auVar92._8_4_;
      fStack_614 = auVar92._12_4_;
      fStack_610 = auVar92._16_4_;
      fStack_60c = auVar92._20_4_;
      fStack_608 = auVar92._24_4_;
      fStack_604 = auVar92._28_4_;
      fVar75 = auVar83._0_4_;
      auVar76._0_4_ =
           -(fVar75 * auVar104._0_4_) + (-(auVar139._0_4_ * fVar64) - fVar111 * auVar162._0_4_);
      fVar79 = auVar83._4_4_;
      auVar76._4_4_ =
           -(fVar79 * auVar104._4_4_) + (-(auVar139._4_4_ * fVar68) - fVar119 * auVar162._4_4_);
      fVar80 = auVar83._8_4_;
      auVar76._8_4_ =
           -(fVar80 * auVar104._8_4_) + (-(auVar139._8_4_ * fVar69) - fVar120 * auVar162._8_4_);
      fVar81 = auVar83._12_4_;
      auVar76._12_4_ =
           -(fVar81 * auVar104._12_4_) + (-(auVar139._12_4_ * fVar70) - fVar121 * auVar162._12_4_);
      fVar82 = auVar83._16_4_;
      auVar76._16_4_ =
           -(fVar82 * auVar104._16_4_) + (-(auVar139._16_4_ * fVar71) - fVar122 * auVar162._16_4_);
      fVar51 = auVar83._20_4_;
      auVar76._20_4_ =
           -(fVar51 * auVar104._20_4_) + (-(auVar139._20_4_ * fVar72) - fVar123 * auVar162._20_4_);
      fVar53 = auVar83._24_4_;
      auVar76._24_4_ =
           -(fVar53 * auVar104._24_4_) + (-(auVar139._24_4_ * fVar73) - fVar124 * auVar162._24_4_);
      fVar55 = auVar83._28_4_;
      auVar76._28_4_ =
           -(fVar55 * auVar104._28_4_) + (-(auVar139._28_4_ * fVar74) - fVar125 * auVar162._28_4_);
      auVar108._0_4_ =
           -(fVar75 * auVar165._0_4_) + (-(fVar64 * local_580) - fVar111 * (float)local_6c0._0_4_);
      auVar108._4_4_ =
           -(fVar79 * auVar165._4_4_) + (-(fVar68 * fStack_57c) - fVar119 * (float)local_6c0._4_4_);
      auVar108._8_4_ = -(fVar80 * auVar165._8_4_) + (-(fVar69 * fStack_578) - fVar120 * fStack_6b8);
      auVar108._12_4_ =
           -(fVar81 * auVar165._12_4_) + (-(fVar70 * fStack_574) - fVar121 * fStack_6b4);
      auVar108._16_4_ =
           -(fVar82 * auVar165._16_4_) + (-(fVar71 * fStack_570) - fVar122 * fStack_6b0);
      auVar108._20_4_ =
           -(fVar51 * auVar165._20_4_) + (-(fVar72 * fStack_56c) - fVar123 * fStack_6ac);
      auVar108._24_4_ =
           -(fVar53 * auVar165._24_4_) + (-(fVar73 * fStack_568) - fVar124 * fStack_6a8);
      auVar108._28_4_ =
           -(fVar55 * auVar165._28_4_) + (-(fVar74 * fStack_564) - fVar125 * fStack_6a4);
      auVar83._0_4_ =
           -(fVar75 * auVar157._0_4_) + (-(fVar64 * (float)local_620._0_4_) - fVar111 * local_6a0);
      auVar83._4_4_ =
           -(fVar79 * auVar157._4_4_) + (-(fVar68 * (float)local_620._4_4_) - fVar119 * fStack_69c);
      auVar83._8_4_ = -(fVar80 * auVar157._8_4_) + (-(fVar69 * fStack_618) - fVar120 * fStack_698);
      auVar83._12_4_ = -(fVar81 * auVar157._12_4_) + (-(fVar70 * fStack_614) - fVar121 * fStack_694)
      ;
      auVar83._16_4_ = -(fVar82 * auVar157._16_4_) + (-(fVar71 * fStack_610) - fVar122 * fStack_690)
      ;
      auVar83._20_4_ = -(fVar51 * auVar157._20_4_) + (-(fVar72 * fStack_60c) - fVar123 * fStack_68c)
      ;
      auVar83._24_4_ = -(fVar53 * auVar157._24_4_) + (-(fVar73 * fStack_608) - fVar124 * fStack_688)
      ;
      auVar83._28_4_ = -(fVar55 * auVar157._28_4_) + (-(fVar74 * fStack_604) - fVar125 * fStack_684)
      ;
      local_5c0 = auVar47._0_4_;
      fStack_5bc = auVar47._4_4_;
      fStack_5b8 = auVar47._8_4_;
      fStack_5b4 = auVar47._12_4_;
      fStack_5b0 = auVar47._16_4_;
      fStack_5ac = auVar47._20_4_;
      fStack_5a8 = auVar47._24_4_;
      fStack_5a4 = auVar47._28_4_;
      local_5a0 = auVar66._0_4_;
      fStack_59c = auVar66._4_4_;
      fStack_598 = auVar66._8_4_;
      fStack_594 = auVar66._12_4_;
      fStack_590 = auVar66._16_4_;
      fStack_58c = auVar66._20_4_;
      fStack_588 = auVar66._24_4_;
      fStack_584 = auVar66._28_4_;
      fVar57 = auVar93._0_4_;
      fVar60 = auVar93._4_4_;
      fVar62 = auVar93._8_4_;
      fVar110 = auVar93._12_4_;
      fVar100 = auVar93._16_4_;
      fVar101 = auVar93._20_4_;
      fVar102 = auVar93._24_4_;
      fVar103 = auVar93._28_4_;
      fVar2 = *param_11;
      auVar77._4_4_ = fVar2;
      auVar77._0_4_ = fVar2;
      auVar77._8_4_ = fVar2;
      auVar77._12_4_ = fVar2;
      auVar77._16_4_ = fVar2;
      auVar77._20_4_ = fVar2;
      auVar77._24_4_ = fVar2;
      auVar77._28_4_ = fVar2;
      if ((param_10 & 1) != 0) {
        fVar3 = param_11[1];
        pfVar1 = (float *)(param_12 + uVar27);
        auVar77._0_4_ = fVar3 * *pfVar1 + fVar2;
        auVar77._4_4_ = fVar3 * pfVar1[1] + fVar2;
        auVar77._8_4_ = fVar3 * pfVar1[2] + fVar2;
        auVar77._12_4_ = fVar3 * pfVar1[3] + fVar2;
        auVar77._16_4_ = fVar3 * pfVar1[4] + fVar2;
        auVar77._20_4_ = fVar3 * pfVar1[5] + fVar2;
        auVar77._24_4_ = fVar3 * pfVar1[6] + fVar2;
        auVar77._28_4_ = fVar3 * pfVar1[7] + fVar2;
      }
      auVar76 = vsubps_avx(auVar107,auVar76);
      auVar45 = vsubps_avx(auVar112,auVar108);
      auVar46 = vsubps_avx(auVar89,auVar83);
      auVar148._0_4_ =
           auVar46._0_4_ * auVar46._0_4_ +
           auVar76._0_4_ * auVar76._0_4_ + auVar45._0_4_ * auVar45._0_4_;
      auVar148._4_4_ =
           auVar46._4_4_ * auVar46._4_4_ +
           auVar76._4_4_ * auVar76._4_4_ + auVar45._4_4_ * auVar45._4_4_;
      auVar148._8_4_ =
           auVar46._8_4_ * auVar46._8_4_ +
           auVar76._8_4_ * auVar76._8_4_ + auVar45._8_4_ * auVar45._8_4_;
      auVar148._12_4_ =
           auVar46._12_4_ * auVar46._12_4_ +
           auVar76._12_4_ * auVar76._12_4_ + auVar45._12_4_ * auVar45._12_4_;
      auVar148._16_4_ =
           auVar46._16_4_ * auVar46._16_4_ +
           auVar76._16_4_ * auVar76._16_4_ + auVar45._16_4_ * auVar45._16_4_;
      auVar148._20_4_ =
           auVar46._20_4_ * auVar46._20_4_ +
           auVar76._20_4_ * auVar76._20_4_ + auVar45._20_4_ * auVar45._20_4_;
      auVar148._24_4_ =
           auVar46._24_4_ * auVar46._24_4_ +
           auVar76._24_4_ * auVar76._24_4_ + auVar45._24_4_ * auVar45._24_4_;
      auVar148._28_4_ =
           auVar46._28_4_ * auVar46._28_4_ +
           auVar76._28_4_ * auVar76._28_4_ + auVar45._28_4_ * auVar45._28_4_;
      auVar159 = vsqrtps_avx(auVar148);
      auVar91._4_4_ = uVar6;
      auVar91._0_4_ = uVar6;
      auVar91._8_4_ = uVar6;
      auVar91._12_4_ = uVar6;
      auVar91._16_4_ = uVar6;
      auVar91._20_4_ = uVar6;
      auVar91._24_4_ = uVar6;
      auVar91._28_4_ = uVar6;
      auVar108 = vcmpps_avx(auVar148,auVar91,1);
      uVar147 = auVar108._0_4_;
      auVar160._0_4_ = ~uVar147 & auVar159._0_4_;
      uVar150 = auVar108._4_4_;
      auVar160._4_4_ = ~uVar150 & auVar159._4_4_;
      uVar151 = auVar108._8_4_;
      auVar160._8_4_ = ~uVar151 & auVar159._8_4_;
      uVar152 = auVar108._12_4_;
      auVar160._12_4_ = ~uVar152 & auVar159._12_4_;
      uVar153 = auVar108._16_4_;
      auVar160._16_4_ = ~uVar153 & auVar159._16_4_;
      uVar154 = auVar108._20_4_;
      auVar160._20_4_ = ~uVar154 & auVar159._20_4_;
      uVar155 = auVar108._24_4_;
      auVar160._24_4_ = ~uVar155 & auVar159._24_4_;
      uVar156 = auVar108._28_4_;
      auVar160._28_4_ = ~uVar156 & auVar159._28_4_;
      auVar91 = vsubps_avx(auVar160,*(undefined1 (*) [32])(param_4 + uVar27));
      auVar83 = vcmpps_avx(ZEXT832(0) << 0x20,auVar91,2);
      auVar83 = vblendvps_avx(auVar77,_local_600,auVar83);
      auVar76 = vdivps_avx(auVar76,auVar159);
      auVar77 = vdivps_avx(auVar45,auVar159);
      auVar159 = vdivps_avx(auVar46,auVar159);
      fVar37 = param_6 * param_6 * auVar83._0_4_;
      fVar50 = param_6 * param_6 * auVar83._4_4_;
      fVar52 = param_6 * param_6 * auVar83._8_4_;
      fVar54 = param_6 * param_6 * auVar83._12_4_;
      fVar56 = param_6 * param_6 * auVar83._16_4_;
      fVar59 = param_6 * param_6 * auVar83._20_4_;
      fVar61 = param_6 * param_6 * auVar83._24_4_;
      fVar63 = param_6 * param_6 * auVar83._28_4_;
      fVar2 = auVar90._0_4_;
      fVar3 = auVar90._4_4_;
      fVar7 = auVar90._8_4_;
      fVar8 = auVar90._12_4_;
      fVar9 = auVar90._16_4_;
      fVar10 = auVar90._20_4_;
      fVar11 = auVar90._24_4_;
      fVar12 = auVar90._28_4_;
      pfVar1 = (float *)(param_5 + uVar27);
      fVar13 = *pfVar1;
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      auVar161._0_4_ = -(fVar37 * auVar91._0_4_) - fVar13;
      auVar161._4_4_ = -(fVar50 * auVar91._4_4_) - fVar14;
      auVar161._8_4_ = -(fVar52 * auVar91._8_4_) - fVar15;
      auVar161._12_4_ = -(fVar54 * auVar91._12_4_) - fVar16;
      auVar161._16_4_ = -(fVar56 * auVar91._16_4_) - fVar17;
      auVar161._20_4_ = -(fVar59 * auVar91._20_4_) - fVar18;
      auVar161._24_4_ = -(fVar61 * auVar91._24_4_) - fVar19;
      auVar161._28_4_ = -(fVar63 * auVar91._28_4_) - fVar20;
      auVar46._4_4_ = fVar38;
      auVar46._0_4_ = fVar38;
      auVar46._8_4_ = fVar38;
      auVar46._12_4_ = fVar38;
      auVar46._16_4_ = fVar38;
      auVar46._20_4_ = fVar38;
      auVar46._24_4_ = fVar38;
      auVar46._28_4_ = fVar38;
      auVar92._0_4_ =
           fVar37 * (-(fVar75 * fVar57) + (-(fVar64 * local_5a0) - fVar111 * local_5c0) + fVar2) +
           fVar38;
      auVar92._4_4_ =
           fVar50 * (-(fVar79 * fVar60) + (-(fVar68 * fStack_59c) - fVar119 * fStack_5bc) + fVar3) +
           fVar38;
      auVar92._8_4_ =
           fVar52 * (-(fVar80 * fVar62) + (-(fVar69 * fStack_598) - fVar120 * fStack_5b8) + fVar7) +
           fVar38;
      auVar92._12_4_ =
           fVar54 * (-(fVar81 * fVar110) + (-(fVar70 * fStack_594) - fVar121 * fStack_5b4) + fVar8)
           + fVar38;
      auVar92._16_4_ =
           fVar56 * (-(fVar82 * fVar100) + (-(fVar71 * fStack_590) - fVar122 * fStack_5b0) + fVar9)
           + fVar38;
      auVar92._20_4_ =
           fVar59 * (-(fVar51 * fVar101) + (-(fVar72 * fStack_58c) - fVar123 * fStack_5ac) + fVar10)
           + fVar38;
      auVar92._24_4_ =
           fVar61 * (-(fVar53 * fVar102) + (-(fVar73 * fStack_588) - fVar124 * fStack_5a8) + fVar11)
           + fVar38;
      auVar92._28_4_ =
           fVar63 * (-(fVar55 * fVar103) + (-(fVar74 * fStack_584) - fVar125 * fStack_5a4) + fVar12)
           + fVar38;
      auVar45 = vdivps_avx(auVar161,auVar92);
      local_640 = auVar128._0_4_;
      iStack_63c = auVar128._4_4_;
      iStack_638 = auVar128._8_4_;
      iStack_634 = auVar128._12_4_;
      iStack_630 = auVar128._16_4_;
      iStack_62c = auVar128._20_4_;
      iStack_628 = auVar128._24_4_;
      iStack_624 = auVar128._28_4_;
      auVar83 = vblendvps_avx(auVar76,auVar46,auVar108);
      fVar37 = auVar45._0_4_;
      fVar126 = auVar83._0_4_ * fVar37;
      fVar50 = auVar45._4_4_;
      fVar131 = auVar83._4_4_ * fVar50;
      fVar52 = auVar45._8_4_;
      fVar132 = auVar83._8_4_ * fVar52;
      fVar54 = auVar45._12_4_;
      fVar133 = auVar83._12_4_ * fVar54;
      fVar56 = auVar45._16_4_;
      fVar134 = auVar83._16_4_ * fVar56;
      fVar59 = auVar45._20_4_;
      fVar135 = auVar83._20_4_ * fVar59;
      fVar61 = auVar45._24_4_;
      fVar136 = auVar83._24_4_ * fVar61;
      fVar63 = auVar45._28_4_;
      fVar137 = auVar83._28_4_ * fVar63;
      auVar106._0_4_ = fVar2 * fVar126 + auVar107._0_4_;
      auVar106._4_4_ = fVar3 * fVar131 + auVar107._4_4_;
      auVar106._8_4_ = fVar7 * fVar132 + auVar107._8_4_;
      auVar106._12_4_ = fVar8 * fVar133 + auVar107._12_4_;
      auVar128._16_4_ = fVar9 * fVar134 + auVar107._16_4_;
      auVar128._0_16_ = auVar106;
      auVar128._20_4_ = fVar10 * fVar135 + auVar107._20_4_;
      auVar128._24_4_ = fVar11 * fVar136 + auVar107._24_4_;
      auVar128._28_4_ = fVar12 * fVar137 + auVar107._28_4_;
      in_ZMM6 = ZEXT3264(auVar128);
      lVar35 = (longlong)local_640;
      *(float *)(param_1 + lVar35) = auVar106._0_4_;
      lVar26 = (longlong)iStack_63c;
      uVar4 = vextractps_avx(auVar106,1);
      *(undefined4 *)(param_1 + lVar26) = uVar4;
      lVar36 = (longlong)iStack_638;
      uVar4 = vextractps_avx(auVar106,2);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar28 = (longlong)iStack_634;
      uVar4 = vextractps_avx(auVar106,3);
      *(undefined4 *)(param_1 + lVar28) = uVar4;
      lVar33 = (longlong)iStack_630;
      auVar58 = auVar128._16_16_;
      *(float *)(param_1 + lVar33) = auVar128._16_4_;
      lVar34 = (longlong)iStack_62c;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      lVar29 = (longlong)iStack_628;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar31 = (longlong)iStack_624;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + lVar31) = uVar4;
      fVar138 = (float)(~uVar147 & auVar77._0_4_) * fVar37;
      fVar140 = (float)(~uVar150 & auVar77._4_4_) * fVar50;
      fVar141 = (float)(~uVar151 & auVar77._8_4_) * fVar52;
      fVar142 = (float)(~uVar152 & auVar77._12_4_) * fVar54;
      fVar143 = (float)(~uVar153 & auVar77._16_4_) * fVar56;
      fVar144 = (float)(~uVar154 & auVar77._20_4_) * fVar59;
      fVar145 = (float)(~uVar155 & auVar77._24_4_) * fVar61;
      fVar146 = (float)(~uVar156 & auVar77._28_4_) * fVar63;
      in_ZMM10 = ZEXT3264(CONCAT428(fVar146,CONCAT424(fVar145,CONCAT420(fVar144,CONCAT416(fVar143,
                                                  CONCAT412(fVar142,CONCAT48(fVar141,CONCAT44(
                                                  fVar140,fVar138))))))));
      auVar168._0_4_ = fVar2 * fVar138 + auVar112._0_4_;
      auVar168._4_4_ = fVar3 * fVar140 + auVar112._4_4_;
      auVar168._8_4_ = fVar7 * fVar141 + auVar112._8_4_;
      auVar168._12_4_ = fVar8 * fVar142 + auVar112._12_4_;
      auVar169._16_4_ = fVar9 * fVar143 + auVar112._16_4_;
      auVar169._0_16_ = auVar168;
      auVar169._20_4_ = fVar10 * fVar144 + auVar112._20_4_;
      auVar169._24_4_ = fVar11 * fVar145 + auVar112._24_4_;
      auVar169._28_4_ = fVar12 * fVar146 + auVar112._28_4_;
      *(float *)(param_1 + 4 + lVar35) = auVar168._0_4_;
      uVar4 = vextractps_avx(auVar168,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar168,2);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar168,3);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar4;
      auVar58 = auVar169._16_16_;
      *(float *)(param_1 + 4 + lVar33) = auVar169._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      local_600._0_4_ = auVar159._0_4_;
      local_600._4_4_ = auVar159._4_4_;
      fStack_5f8 = auVar159._8_4_;
      fStack_5f4 = auVar159._12_4_;
      fStack_5f0 = auVar159._16_4_;
      fStack_5ec = auVar159._20_4_;
      fStack_5e8 = auVar159._24_4_;
      fStack_5e4 = auVar159._28_4_;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
      fVar167 = (float)(~uVar147 & local_600._0_4_) * fVar37;
      fVar172 = (float)(~uVar150 & local_600._4_4_) * fVar50;
      fVar173 = (float)(~uVar151 & (uint)fStack_5f8) * fVar52;
      fVar174 = (float)(~uVar152 & (uint)fStack_5f4) * fVar54;
      fVar175 = (float)(~uVar153 & (uint)fStack_5f0) * fVar56;
      fVar176 = (float)(~uVar154 & (uint)fStack_5ec) * fVar59;
      fVar177 = (float)(~uVar155 & (uint)fStack_5e8) * fVar61;
      fVar178 = (float)(~uVar156 & (uint)fStack_5e4) * fVar63;
      auVar87._0_4_ = fVar2 * fVar167 + auVar89._0_4_;
      auVar87._4_4_ = fVar3 * fVar172 + auVar89._4_4_;
      auVar87._8_4_ = fVar7 * fVar173 + auVar89._8_4_;
      auVar87._12_4_ = fVar8 * fVar174 + auVar89._12_4_;
      auVar112._16_4_ = fVar9 * fVar175 + auVar89._16_4_;
      auVar112._0_16_ = auVar87;
      auVar112._20_4_ = fVar10 * fVar176 + auVar89._20_4_;
      auVar112._24_4_ = fVar11 * fVar177 + auVar89._24_4_;
      auVar112._28_4_ = fVar12 * fVar178 + auVar89._28_4_;
      *(float *)(param_1 + 8 + lVar35) = auVar87._0_4_;
      uVar4 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar4;
      auVar58 = auVar112._16_16_;
      *(float *)(param_1 + 8 + lVar33) = auVar112._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
      *(float *)(param_1 + 0xc + lVar35) = fVar2;
      auVar58 = auVar90._0_16_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar4;
      auVar58 = auVar90._16_16_;
      *(float *)(param_1 + 0xc + lVar33) = fVar9;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar4;
      auVar88._0_4_ = fVar64 * fVar126 * local_5a0 + auVar139._0_4_;
      auVar88._4_4_ = fVar68 * fVar131 * fStack_59c + auVar139._4_4_;
      auVar88._8_4_ = fVar69 * fVar132 * fStack_598 + auVar139._8_4_;
      auVar88._12_4_ = fVar70 * fVar133 * fStack_594 + auVar139._12_4_;
      auVar90._16_4_ = fVar71 * fVar134 * fStack_590 + auVar139._16_4_;
      auVar90._0_16_ = auVar88;
      auVar90._20_4_ = fVar72 * fVar135 * fStack_58c + auVar139._20_4_;
      auVar90._24_4_ = fVar73 * fVar136 * fStack_588 + auVar139._24_4_;
      auVar90._28_4_ = fVar74 * fVar137 * fStack_584 + auVar139._28_4_;
      local_240 = auVar170._0_4_;
      iStack_23c = auVar170._4_4_;
      iStack_238 = auVar170._8_4_;
      iStack_234 = auVar170._12_4_;
      iStack_230 = auVar170._16_4_;
      iStack_22c = auVar170._20_4_;
      iStack_228 = auVar170._24_4_;
      iStack_224 = auVar170._28_4_;
      lVar33 = (longlong)local_240;
      *(float *)(param_1 + lVar33) = auVar88._0_4_;
      lVar28 = (longlong)iStack_23c;
      uVar4 = vextractps_avx(auVar88,1);
      *(undefined4 *)(param_1 + lVar28) = uVar4;
      lVar26 = (longlong)iStack_238;
      uVar4 = vextractps_avx(auVar88,2);
      *(undefined4 *)(param_1 + lVar26) = uVar4;
      lVar29 = (longlong)iStack_234;
      uVar4 = vextractps_avx(auVar88,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar35 = (longlong)iStack_230;
      auVar58 = auVar90._16_16_;
      *(float *)(param_1 + lVar35) = auVar90._16_4_;
      lVar31 = (longlong)iStack_22c;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + lVar31) = uVar4;
      lVar36 = (longlong)iStack_228;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar34 = (longlong)iStack_224;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      auVar58._0_4_ = fVar64 * fVar138 * local_5a0 + local_580;
      auVar58._4_4_ = fVar68 * fVar140 * fStack_59c + fStack_57c;
      auVar58._8_4_ = fVar69 * fVar141 * fStack_598 + fStack_578;
      auVar58._12_4_ = fVar70 * fVar142 * fStack_594 + fStack_574;
      auVar159._16_4_ = fVar71 * fVar143 * fStack_590 + fStack_570;
      auVar159._0_16_ = auVar58;
      auVar159._20_4_ = fVar72 * fVar144 * fStack_58c + fStack_56c;
      auVar159._24_4_ = fVar73 * fVar145 * fStack_588 + fStack_568;
      auVar159._28_4_ = fVar74 * fVar146 * fStack_584 + fStack_564;
      *(float *)(param_1 + 4 + lVar33) = auVar58._0_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      auVar58 = auVar159._16_16_;
      *(float *)(param_1 + 4 + lVar35) = auVar159._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      auVar39._0_4_ = fVar64 * fVar167 * local_5a0 + (float)local_620._0_4_;
      auVar39._4_4_ = fVar68 * fVar172 * fStack_59c + (float)local_620._4_4_;
      auVar39._8_4_ = fVar69 * fVar173 * fStack_598 + fStack_618;
      auVar39._12_4_ = fVar70 * fVar174 * fStack_594 + fStack_614;
      auVar107._16_4_ = fVar71 * fVar175 * fStack_590 + fStack_610;
      auVar107._0_16_ = auVar39;
      auVar107._20_4_ = fVar72 * fVar176 * fStack_58c + fStack_60c;
      auVar107._24_4_ = fVar73 * fVar177 * fStack_588 + fStack_608;
      auVar107._28_4_ = fVar74 * fVar178 * fStack_584 + fStack_604;
      *(float *)(param_1 + 8 + lVar33) = auVar39._0_4_;
      uVar4 = vextractps_avx(auVar39,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar39,2);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar39,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      auVar58 = auVar107._16_16_;
      *(float *)(param_1 + 8 + lVar35) = auVar107._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      *(float *)(param_1 + 0xc + lVar33) = local_5a0;
      auVar58 = auVar66._0_16_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      auVar58 = auVar66._16_16_;
      *(float *)(param_1 + 0xc + lVar35) = fStack_590;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      auVar65._0_4_ = fVar111 * fVar126 * local_5c0 + auVar162._0_4_;
      auVar65._4_4_ = fVar119 * fVar131 * fStack_5bc + auVar162._4_4_;
      auVar65._8_4_ = fVar120 * fVar132 * fStack_5b8 + auVar162._8_4_;
      auVar65._12_4_ = fVar121 * fVar133 * fStack_5b4 + auVar162._12_4_;
      auVar89._16_4_ = fVar122 * fVar134 * fStack_5b0 + auVar162._16_4_;
      auVar89._0_16_ = auVar65;
      auVar89._20_4_ = fVar123 * fVar135 * fStack_5ac + auVar162._20_4_;
      auVar89._24_4_ = fVar124 * fVar136 * fStack_5a8 + auVar162._24_4_;
      auVar89._28_4_ = fVar125 * fVar137 * fStack_5a4 + auVar162._28_4_;
      local_540 = auVar129._0_4_;
      iStack_53c = auVar129._4_4_;
      iStack_538 = auVar129._8_4_;
      iStack_534 = auVar129._12_4_;
      iStack_530 = auVar129._16_4_;
      iStack_52c = auVar129._20_4_;
      iStack_528 = auVar129._24_4_;
      iStack_524 = auVar129._28_4_;
      lVar33 = (longlong)local_540;
      *(float *)(param_1 + lVar33) = auVar65._0_4_;
      lVar28 = (longlong)iStack_53c;
      uVar4 = vextractps_avx(auVar65,1);
      *(undefined4 *)(param_1 + lVar28) = uVar4;
      lVar26 = (longlong)iStack_538;
      uVar4 = vextractps_avx(auVar65,2);
      *(undefined4 *)(param_1 + lVar26) = uVar4;
      lVar29 = (longlong)iStack_534;
      uVar4 = vextractps_avx(auVar65,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar35 = (longlong)iStack_530;
      auVar58 = auVar89._16_16_;
      *(float *)(param_1 + lVar35) = auVar89._16_4_;
      lVar31 = (longlong)iStack_52c;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + lVar31) = uVar4;
      lVar36 = (longlong)iStack_528;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar34 = (longlong)iStack_524;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      auVar40._0_4_ = fVar111 * fVar138 * local_5c0 + (float)local_6c0._0_4_;
      auVar40._4_4_ = fVar119 * fVar140 * fStack_5bc + (float)local_6c0._4_4_;
      auVar40._8_4_ = fVar120 * fVar141 * fStack_5b8 + fStack_6b8;
      auVar40._12_4_ = fVar121 * fVar142 * fStack_5b4 + fStack_6b4;
      auVar45._16_4_ = fVar122 * fVar143 * fStack_5b0 + fStack_6b0;
      auVar45._0_16_ = auVar40;
      auVar45._20_4_ = fVar123 * fVar144 * fStack_5ac + fStack_6ac;
      auVar45._24_4_ = fVar124 * fVar145 * fStack_5a8 + fStack_6a8;
      auVar45._28_4_ = fVar125 * fVar146 * fStack_5a4 + fStack_6a4;
      *(float *)(param_1 + 4 + lVar33) = auVar40._0_4_;
      uVar4 = vextractps_avx(auVar40,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar40,2);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar40,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      auVar58 = auVar45._16_16_;
      *(float *)(param_1 + 4 + lVar35) = auVar45._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      auVar41._0_4_ = fVar111 * fVar167 * local_5c0 + local_6a0;
      auVar41._4_4_ = fVar119 * fVar172 * fStack_5bc + fStack_69c;
      auVar41._8_4_ = fVar120 * fVar173 * fStack_5b8 + fStack_698;
      auVar41._12_4_ = fVar121 * fVar174 * fStack_5b4 + fStack_694;
      auVar66._16_4_ = fVar122 * fVar175 * fStack_5b0 + fStack_690;
      auVar66._0_16_ = auVar41;
      auVar66._20_4_ = fVar123 * fVar176 * fStack_5ac + fStack_68c;
      auVar66._24_4_ = fVar124 * fVar177 * fStack_5a8 + fStack_688;
      auVar66._28_4_ = fVar125 * fVar178 * fStack_5a4 + fStack_684;
      *(float *)(param_1 + 8 + lVar33) = auVar41._0_4_;
      uVar4 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      auVar58 = auVar66._16_16_;
      *(float *)(param_1 + 8 + lVar35) = auVar66._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      *(float *)(param_1 + 0xc + lVar33) = local_5c0;
      auVar58 = auVar47._0_16_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      auVar58 = auVar47._16_16_;
      *(float *)(param_1 + 0xc + lVar35) = fStack_5b0;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      auVar42._0_4_ = fVar75 * fVar126 * fVar57 + auVar104._0_4_;
      auVar42._4_4_ = fVar79 * fVar131 * fVar60 + auVar104._4_4_;
      auVar42._8_4_ = fVar80 * fVar132 * fVar62 + auVar104._8_4_;
      auVar42._12_4_ = fVar81 * fVar133 * fVar110 + auVar104._12_4_;
      auVar47._16_4_ = fVar82 * fVar134 * fVar100 + auVar104._16_4_;
      auVar47._0_16_ = auVar42;
      auVar47._20_4_ = fVar51 * fVar135 * fVar101 + auVar104._20_4_;
      auVar47._24_4_ = fVar53 * fVar136 * fVar102 + auVar104._24_4_;
      auVar47._28_4_ = fVar55 * fVar137 * fVar103 + auVar104._28_4_;
      local_500 = auVar48._0_4_;
      iStack_4fc = auVar48._4_4_;
      iStack_4f8 = auVar48._8_4_;
      iStack_4f4 = auVar48._12_4_;
      iStack_4f0 = auVar48._16_4_;
      iStack_4ec = auVar48._20_4_;
      iStack_4e8 = auVar48._24_4_;
      iStack_4e4 = auVar48._28_4_;
      lVar35 = (longlong)local_500;
      *(float *)(param_1 + lVar35) = auVar42._0_4_;
      lVar26 = (longlong)iStack_4fc;
      uVar4 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + lVar26) = uVar4;
      lVar33 = (longlong)iStack_4f8;
      uVar4 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + lVar33) = uVar4;
      lVar28 = (longlong)iStack_4f4;
      uVar4 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + lVar28) = uVar4;
      lVar36 = (longlong)iStack_4f0;
      auVar58 = auVar47._16_16_;
      *(float *)(param_1 + lVar36) = auVar47._16_4_;
      lVar34 = (longlong)iStack_4ec;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      lVar29 = (longlong)iStack_4e8;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar31 = (longlong)iStack_4e4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + lVar31) = uVar4;
      auVar43._0_4_ = fVar75 * fVar138 * fVar57 + auVar165._0_4_;
      auVar43._4_4_ = fVar79 * fVar140 * fVar60 + auVar165._4_4_;
      auVar43._8_4_ = fVar80 * fVar141 * fVar62 + auVar165._8_4_;
      auVar43._12_4_ = fVar81 * fVar142 * fVar110 + auVar165._12_4_;
      auVar104._16_4_ = fVar82 * fVar143 * fVar100 + auVar165._16_4_;
      auVar104._0_16_ = auVar43;
      auVar104._20_4_ = fVar51 * fVar144 * fVar101 + auVar165._20_4_;
      auVar104._24_4_ = fVar53 * fVar145 * fVar102 + auVar165._24_4_;
      auVar104._28_4_ = fVar55 * fVar146 * fVar103 + auVar165._28_4_;
      *(float *)(param_1 + 4 + lVar35) = auVar43._0_4_;
      uVar4 = vextractps_avx(auVar43,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar43,2);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar43,3);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar4;
      auVar58 = auVar104._16_16_;
      *(float *)(param_1 + 4 + lVar36) = auVar104._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
      auVar44._0_4_ = fVar75 * fVar167 * fVar57 + auVar157._0_4_;
      auVar44._4_4_ = fVar79 * fVar172 * fVar60 + auVar157._4_4_;
      auVar44._8_4_ = fVar80 * fVar173 * fVar62 + auVar157._8_4_;
      auVar44._12_4_ = fVar81 * fVar174 * fVar110 + auVar157._12_4_;
      auVar48._16_4_ = fVar82 * fVar175 * fVar100 + auVar157._16_4_;
      auVar48._0_16_ = auVar44;
      auVar48._20_4_ = fVar51 * fVar176 * fVar101 + auVar157._20_4_;
      auVar48._24_4_ = fVar53 * fVar177 * fVar102 + auVar157._24_4_;
      auVar48._28_4_ = fVar55 * fVar178 * fVar103 + auVar157._28_4_;
      *(float *)(param_1 + 8 + lVar35) = auVar44._0_4_;
      uVar4 = vextractps_avx(auVar44,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar44,2);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar44,3);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar4;
      auVar58 = auVar48._16_16_;
      *(float *)(param_1 + 8 + lVar36) = auVar48._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
      pfVar1 = (float *)(param_5 + uVar27);
      *pfVar1 = fVar13 + fVar37;
      pfVar1[1] = fVar14 + fVar50;
      pfVar1[2] = fVar15 + fVar52;
      pfVar1[3] = fVar16 + fVar54;
      pfVar1[4] = fVar17 + fVar56;
      pfVar1[5] = fVar18 + fVar59;
      pfVar1[6] = fVar19 + fVar61;
      pfVar1[7] = fVar20 + fVar63;
      *(float *)(param_1 + 0xc + lVar35) = fVar57;
      auVar58 = auVar93._0_16_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar4;
      auVar58 = auVar93._16_16_;
      *(float *)(param_1 + 0xc + lVar36) = fVar100;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar4;
      uVar30 = uVar30 + 0x20;
      uVar32 = uVar32 + 8;
    } while ((int)uVar32 < (int)(uVar23 & 0xfffffff8));
  }
  if ((int)param_13 <= (int)uVar32) {
    return;
  }
  auVar129._4_4_ = uVar32;
  auVar129._0_4_ = uVar32;
  auVar129._8_4_ = uVar32;
  auVar129._12_4_ = uVar32;
  auVar129._16_4_ = uVar32;
  auVar129._20_4_ = uVar32;
  auVar129._24_4_ = uVar32;
  auVar129._28_4_ = uVar32;
  auVar83 = vpor_avx2(auVar129,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar162._4_4_ = param_13;
  auVar162._0_4_ = param_13;
  auVar162._8_4_ = param_13;
  auVar162._12_4_ = param_13;
  auVar162._16_4_ = param_13;
  auVar162._20_4_ = param_13;
  auVar162._24_4_ = param_13;
  auVar162._28_4_ = param_13;
  auVar83 = vpcmpgtd_avx2(auVar162,auVar83);
  lVar26 = (ulonglong)uVar32 * 0x10;
  pauVar25 = (undefined1 (*) [32])(param_2 + lVar26);
  uVar23 = vmovmskps_avx(auVar83);
  if (uVar23 == 0xff) {
    auVar108 = vperm2i128_avx2(*pauVar25,pauVar25[2],0x20);
    auVar76 = vperm2i128_avx2(*pauVar25,pauVar25[2],0x31);
    auVar104 = vperm2i128_avx2(pauVar25[1],pauVar25[3],0x20);
    auVar107 = vperm2i128_avx2(pauVar25[1],pauVar25[3],0x31);
    auVar77 = vpunpckldq_avx2(auVar108,auVar76);
    auVar108 = vpunpckhdq_avx2(auVar108,auVar76);
    auVar159 = vpunpckldq_avx2(auVar104,auVar107);
    auVar76 = vpunpckhdq_avx2(auVar104,auVar107);
    auVar45 = vpunpcklqdq_avx2(auVar77,auVar159);
    auVar93 = vpunpckhqdq_avx2(auVar77,auVar159);
    auVar46 = vpunpcklqdq_avx2(auVar108,auVar76);
    auVar157 = vpunpckhqdq_avx2(auVar108,auVar76);
    auVar108 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar26);
    auVar76 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar26);
    auVar77 = *(undefined1 (*) [32])(param_3 + 0x60 + lVar26);
    auVar159 = vperm2f128_avx(*(undefined1 (*) [32])(param_3 + lVar26),auVar76,0x20);
    auVar104 = vperm2f128_avx(*(undefined1 (*) [32])(param_3 + lVar26),auVar76,0x31);
    auVar107 = vperm2f128_avx(auVar108,auVar77,0x20);
    auVar139 = vperm2f128_avx(auVar108,auVar77,0x31);
    auVar76 = vunpcklps_avx(auVar159,auVar104);
    auVar108 = vunpckhps_avx(auVar159,auVar104);
    auVar77 = vunpcklps_avx(auVar107,auVar139);
    _local_620 = vunpckhpd_avx(auVar76,auVar77);
    auVar76 = vunpckhps_avx(auVar107,auVar139);
    _local_660 = vunpcklpd_avx(auVar108,auVar76);
    _local_6c0 = vunpckhpd_avx(auVar108,auVar76);
  }
  else {
    auVar45 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar83);
    auVar93 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar83);
    auVar46 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
    auVar157 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
    _local_620 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
    _local_660 = vgatherdps(ZEXT832(0),auVar83);
    _local_6c0 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
  }
  auVar90 = vpslld_avx2(auVar45,4);
  auVar165._4_4_ = __real_00000004;
  auVar165._0_4_ = __real_00000004;
  auVar165._8_4_ = __real_00000004;
  auVar165._12_4_ = __real_00000004;
  auVar165._16_4_ = __real_00000004;
  auVar165._20_4_ = __real_00000004;
  auVar165._24_4_ = __real_00000004;
  auVar165._28_4_ = __real_00000004;
  vpor_avx2(auVar90,auVar165);
  auVar76 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
  auVar170._4_4_ = __real_00000008;
  auVar170._0_4_ = __real_00000008;
  auVar170._8_4_ = __real_00000008;
  auVar170._12_4_ = __real_00000008;
  auVar170._16_4_ = __real_00000008;
  auVar170._20_4_ = __real_00000008;
  auVar170._24_4_ = __real_00000008;
  auVar170._28_4_ = __real_00000008;
  vpor_avx2(auVar90,auVar170);
  auVar77 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  auVar158._4_4_ = __real_0000000c;
  auVar158._0_4_ = __real_0000000c;
  auVar158._8_4_ = __real_0000000c;
  auVar158._12_4_ = __real_0000000c;
  auVar158._16_4_ = __real_0000000c;
  auVar158._20_4_ = __real_0000000c;
  auVar158._24_4_ = __real_0000000c;
  auVar158._28_4_ = __real_0000000c;
  vpor_avx2(auVar90,auVar158);
  auVar48 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  auVar92 = vpslld_avx2(auVar93,4);
  vpor_avx2(auVar92,auVar165);
  auVar104 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  vpor_avx2(auVar92,auVar170);
  auVar107 = vgatherdps(ZEXT832(0),auVar83);
  vpor_avx2(auVar92,auVar158);
  auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  auVar128 = vpslld_avx2(auVar46,4);
  vpor_avx2(auVar128,auVar165);
  auVar93 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  vpor_avx2(auVar128,auVar170);
  auVar129 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  vpor_avx2(auVar128,auVar158);
  auVar91 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
  auVar89 = vpslld_avx2(auVar157,4);
  vpor_avx2(auVar89,auVar165);
  auVar46 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  vpor_avx2(auVar170,auVar89);
  auVar47 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  vpor_avx2(auVar158,auVar89);
  auVar112 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  auVar108 = vgatherdps(ZEXT832(0),auVar83);
  auVar159 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  auVar139 = vgatherdps(ZEXT832(0),auVar83);
  auVar45 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
  auVar108 = vmaskmovps_avx(auVar83,auVar108);
  auVar76 = vmaskmovps_avx(auVar83,auVar76);
  auVar77 = vmaskmovps_avx(auVar83,auVar77);
  auVar159 = vmaskmovps_avx(auVar83,auVar159);
  auVar104 = vmaskmovps_avx(auVar83,auVar104);
  auVar107 = vmaskmovps_avx(auVar83,auVar107);
  auVar139 = vmaskmovps_avx(auVar83,auVar139);
  auVar93 = vmaskmovps_avx(auVar83,auVar93);
  auVar157 = vmaskmovps_avx(auVar83,auVar129);
  auVar45 = vmaskmovps_avx(auVar83,auVar45);
  auVar46 = vmaskmovps_avx(auVar83,auVar46);
  auVar47 = vmaskmovps_avx(auVar83,auVar47);
  local_1c0 = auVar159._0_4_;
  fStack_1bc = auVar159._4_4_;
  fStack_1b8 = auVar159._8_4_;
  fStack_1b4 = auVar159._12_4_;
  fStack_1b0 = auVar159._16_4_;
  fStack_1ac = auVar159._20_4_;
  fStack_1a8 = auVar159._24_4_;
  fStack_1a4 = auVar159._28_4_;
  local_1a0 = auVar104._0_4_;
  fStack_19c = auVar104._4_4_;
  fStack_198 = auVar104._8_4_;
  fStack_194 = auVar104._12_4_;
  fStack_190 = auVar104._16_4_;
  fStack_18c = auVar104._20_4_;
  fStack_188 = auVar104._24_4_;
  fStack_184 = auVar104._28_4_;
  local_180 = auVar107._0_4_;
  fStack_17c = auVar107._4_4_;
  fStack_178 = auVar107._8_4_;
  fStack_174 = auVar107._12_4_;
  fStack_170 = auVar107._16_4_;
  fStack_16c = auVar107._20_4_;
  fStack_168 = auVar107._24_4_;
  fStack_164 = auVar107._28_4_;
  local_220 = auVar139._0_4_;
  fStack_21c = auVar139._4_4_;
  fStack_218 = auVar139._8_4_;
  fStack_214 = auVar139._12_4_;
  fStack_210 = auVar139._16_4_;
  fStack_20c = auVar139._20_4_;
  fStack_208 = auVar139._24_4_;
  fStack_204 = auVar139._28_4_;
  local_200 = auVar93._0_4_;
  fStack_1fc = auVar93._4_4_;
  fStack_1f8 = auVar93._8_4_;
  fStack_1f4 = auVar93._12_4_;
  fStack_1f0 = auVar93._16_4_;
  fStack_1ec = auVar93._20_4_;
  fStack_1e8 = auVar93._24_4_;
  fStack_1e4 = auVar93._28_4_;
  local_1e0 = auVar157._0_4_;
  fStack_1dc = auVar157._4_4_;
  fStack_1d8 = auVar157._8_4_;
  fStack_1d4 = auVar157._12_4_;
  fStack_1d0 = auVar157._16_4_;
  fStack_1cc = auVar157._20_4_;
  fStack_1c8 = auVar157._24_4_;
  fStack_1c4 = auVar157._28_4_;
  uVar6 = local_660._0_4_;
  uVar21 = local_660._4_4_;
  fVar74 = fStack_658;
  fVar75 = fStack_654;
  fVar79 = fStack_650;
  fVar80 = fStack_64c;
  fVar81 = fStack_648;
  fVar82 = fStack_644;
  fVar2 = auVar91._0_4_;
  fVar64 = auVar91._4_4_;
  fVar68 = auVar91._8_4_;
  fVar69 = auVar91._12_4_;
  fVar70 = auVar91._16_4_;
  fVar71 = auVar91._20_4_;
  fVar72 = auVar91._24_4_;
  fVar73 = auVar91._28_4_;
  local_5c0 = auVar66._0_4_;
  fStack_5bc = auVar66._4_4_;
  fStack_5b8 = auVar66._8_4_;
  fStack_5b4 = auVar66._12_4_;
  fStack_5b0 = auVar66._16_4_;
  fStack_5ac = auVar66._20_4_;
  fStack_5a8 = auVar66._24_4_;
  fStack_5a4 = auVar66._28_4_;
  lVar26 = (longlong)(int)(uVar32 << 2);
  fVar38 = *param_8;
  auVar171._4_4_ = fVar38;
  auVar171._0_4_ = fVar38;
  auVar171._8_4_ = fVar38;
  auVar171._12_4_ = fVar38;
  auVar171._16_4_ = fVar38;
  auVar171._20_4_ = fVar38;
  auVar171._24_4_ = fVar38;
  auVar171._28_4_ = fVar38;
  if ((param_7 & 1) != 0) {
    auVar159 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_9 + lVar26));
    fVar51 = param_8[1];
    auVar171._0_4_ = auVar159._0_4_ * fVar51 + fVar38;
    auVar171._4_4_ = auVar159._4_4_ * fVar51 + fVar38;
    auVar171._8_4_ = auVar159._8_4_ * fVar51 + fVar38;
    auVar171._12_4_ = auVar159._12_4_ * fVar51 + fVar38;
    auVar171._16_4_ = auVar159._16_4_ * fVar51 + fVar38;
    auVar171._20_4_ = auVar159._20_4_ * fVar51 + fVar38;
    auVar171._24_4_ = auVar159._24_4_ * fVar51 + fVar38;
    auVar171._28_4_ = auVar159._28_4_ * fVar51 + fVar38;
  }
  local_460 = auVar45._0_4_;
  auVar109._0_4_ =
       -((float)local_6c0._0_4_ * local_460) +
       (-(local_1c0 * (float)local_620._0_4_) - (float)local_660._0_4_ * local_220);
  fStack_45c = auVar45._4_4_;
  auVar109._4_4_ =
       -((float)local_6c0._4_4_ * fStack_45c) +
       (-(fStack_1bc * (float)local_620._4_4_) - (float)local_660._4_4_ * fStack_21c);
  fStack_458 = auVar45._8_4_;
  auVar109._8_4_ =
       -(fStack_6b8 * fStack_458) + (-(fStack_1b8 * fStack_618) - fStack_658 * fStack_218);
  fStack_454 = auVar45._12_4_;
  auVar109._12_4_ =
       -(fStack_6b4 * fStack_454) + (-(fStack_1b4 * fStack_614) - fStack_654 * fStack_214);
  fStack_450 = auVar45._16_4_;
  auVar109._16_4_ =
       -(fStack_6b0 * fStack_450) + (-(fStack_1b0 * fStack_610) - fStack_650 * fStack_210);
  fStack_44c = auVar45._20_4_;
  auVar109._20_4_ =
       -(fStack_6ac * fStack_44c) + (-(fStack_1ac * fStack_60c) - fStack_64c * fStack_20c);
  fStack_448 = auVar45._24_4_;
  auVar109._24_4_ =
       -(fStack_6a8 * fStack_448) + (-(fStack_1a8 * fStack_608) - fStack_648 * fStack_208);
  fStack_444 = auVar45._28_4_;
  auVar109._28_4_ =
       -(fStack_6a4 * fStack_444) + (-(fStack_1a4 * fStack_604) - fStack_644 * fStack_204);
  local_440 = auVar46._0_4_;
  auVar105._0_4_ =
       -((float)local_6c0._0_4_ * local_440) +
       (-(local_1a0 * (float)local_620._0_4_) - (float)local_660._0_4_ * local_200);
  fStack_43c = auVar46._4_4_;
  auVar105._4_4_ =
       -((float)local_6c0._4_4_ * fStack_43c) +
       (-(fStack_19c * (float)local_620._4_4_) - (float)local_660._4_4_ * fStack_1fc);
  fStack_438 = auVar46._8_4_;
  auVar105._8_4_ =
       -(fStack_6b8 * fStack_438) + (-(fStack_198 * fStack_618) - fStack_658 * fStack_1f8);
  fStack_434 = auVar46._12_4_;
  auVar105._12_4_ =
       -(fStack_6b4 * fStack_434) + (-(fStack_194 * fStack_614) - fStack_654 * fStack_1f4);
  fStack_430 = auVar46._16_4_;
  auVar105._16_4_ =
       -(fStack_6b0 * fStack_430) + (-(fStack_190 * fStack_610) - fStack_650 * fStack_1f0);
  fStack_42c = auVar46._20_4_;
  auVar105._20_4_ =
       -(fStack_6ac * fStack_42c) + (-(fStack_18c * fStack_60c) - fStack_64c * fStack_1ec);
  fStack_428 = auVar46._24_4_;
  auVar105._24_4_ =
       -(fStack_6a8 * fStack_428) + (-(fStack_188 * fStack_608) - fStack_648 * fStack_1e8);
  fStack_424 = auVar46._28_4_;
  auVar105._28_4_ =
       -(fStack_6a4 * fStack_424) + (-(fStack_184 * fStack_604) - fStack_644 * fStack_1e4);
  local_420 = auVar47._0_4_;
  auVar166._0_4_ =
       -((float)local_6c0._0_4_ * local_420) +
       (-(local_180 * (float)local_620._0_4_) - (float)local_660._0_4_ * local_1e0);
  fStack_41c = auVar47._4_4_;
  auVar166._4_4_ =
       -((float)local_6c0._4_4_ * fStack_41c) +
       (-(fStack_17c * (float)local_620._4_4_) - (float)local_660._4_4_ * fStack_1dc);
  fStack_418 = auVar47._8_4_;
  auVar166._8_4_ =
       -(fStack_6b8 * fStack_418) + (-(fStack_178 * fStack_618) - fStack_658 * fStack_1d8);
  fStack_414 = auVar47._12_4_;
  auVar166._12_4_ =
       -(fStack_6b4 * fStack_414) + (-(fStack_174 * fStack_614) - fStack_654 * fStack_1d4);
  fStack_410 = auVar47._16_4_;
  auVar166._16_4_ =
       -(fStack_6b0 * fStack_410) + (-(fStack_170 * fStack_610) - fStack_650 * fStack_1d0);
  fStack_40c = auVar47._20_4_;
  auVar166._20_4_ =
       -(fStack_6ac * fStack_40c) + (-(fStack_16c * fStack_60c) - fStack_64c * fStack_1cc);
  fStack_408 = auVar47._24_4_;
  auVar166._24_4_ =
       -(fStack_6a8 * fStack_408) + (-(fStack_168 * fStack_608) - fStack_648 * fStack_1c8);
  fStack_404 = auVar47._28_4_;
  auVar166._28_4_ =
       -(fStack_6a4 * fStack_404) + (-(fStack_164 * fStack_604) - fStack_644 * fStack_1c4);
  auVar159 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_4 + lVar26));
  auVar104 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_5 + lVar26));
  local_6a0 = auVar112._0_4_;
  fStack_69c = auVar112._4_4_;
  fStack_698 = auVar112._8_4_;
  fStack_694 = auVar112._12_4_;
  fStack_690 = auVar112._16_4_;
  fStack_68c = auVar112._20_4_;
  fStack_688 = auVar112._24_4_;
  fStack_684 = auVar112._28_4_;
  fVar38 = *param_11;
  auVar49._4_4_ = fVar38;
  auVar49._0_4_ = fVar38;
  auVar49._8_4_ = fVar38;
  auVar49._12_4_ = fVar38;
  auVar49._16_4_ = fVar38;
  auVar49._20_4_ = fVar38;
  auVar49._24_4_ = fVar38;
  auVar49._28_4_ = fVar38;
  if ((param_10 & 1) != 0) {
    auVar107 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_12 + lVar26));
    fVar51 = param_11[1];
    auVar49._0_4_ = auVar107._0_4_ * fVar51 + fVar38;
    auVar49._4_4_ = auVar107._4_4_ * fVar51 + fVar38;
    auVar49._8_4_ = auVar107._8_4_ * fVar51 + fVar38;
    auVar49._12_4_ = auVar107._12_4_ * fVar51 + fVar38;
    auVar49._16_4_ = auVar107._16_4_ * fVar51 + fVar38;
    auVar49._20_4_ = auVar107._20_4_ * fVar51 + fVar38;
    auVar49._24_4_ = auVar107._24_4_ * fVar51 + fVar38;
    auVar49._28_4_ = auVar107._28_4_ * fVar51 + fVar38;
  }
  auVar107 = vsubps_avx(auVar108,auVar109);
  auVar93 = vsubps_avx(auVar76,auVar105);
  auVar45 = vsubps_avx(auVar77,auVar166);
  auVar163._0_4_ =
       auVar45._0_4_ * auVar45._0_4_ +
       auVar107._0_4_ * auVar107._0_4_ + auVar93._0_4_ * auVar93._0_4_;
  auVar163._4_4_ =
       auVar45._4_4_ * auVar45._4_4_ +
       auVar107._4_4_ * auVar107._4_4_ + auVar93._4_4_ * auVar93._4_4_;
  auVar163._8_4_ =
       auVar45._8_4_ * auVar45._8_4_ +
       auVar107._8_4_ * auVar107._8_4_ + auVar93._8_4_ * auVar93._8_4_;
  auVar163._12_4_ =
       auVar45._12_4_ * auVar45._12_4_ +
       auVar107._12_4_ * auVar107._12_4_ + auVar93._12_4_ * auVar93._12_4_;
  auVar163._16_4_ =
       auVar45._16_4_ * auVar45._16_4_ +
       auVar107._16_4_ * auVar107._16_4_ + auVar93._16_4_ * auVar93._16_4_;
  auVar163._20_4_ =
       auVar45._20_4_ * auVar45._20_4_ +
       auVar107._20_4_ * auVar107._20_4_ + auVar93._20_4_ * auVar93._20_4_;
  auVar163._24_4_ =
       auVar45._24_4_ * auVar45._24_4_ +
       auVar107._24_4_ * auVar107._24_4_ + auVar93._24_4_ * auVar93._24_4_;
  auVar163._28_4_ =
       auVar45._28_4_ * auVar45._28_4_ +
       auVar107._28_4_ * auVar107._28_4_ + auVar93._28_4_ * auVar93._28_4_;
  auVar157 = vsqrtps_avx(auVar163);
  auVar149._4_4_ = __real_38d1b717;
  auVar149._0_4_ = __real_38d1b717;
  auVar149._8_4_ = __real_38d1b717;
  auVar149._12_4_ = __real_38d1b717;
  auVar149._16_4_ = __real_38d1b717;
  auVar149._20_4_ = __real_38d1b717;
  auVar149._24_4_ = __real_38d1b717;
  auVar149._28_4_ = __real_38d1b717;
  auVar107 = vdivps_avx(auVar107,auVar157);
  auVar139 = vcmpps_avx(auVar163,auVar149,1);
  auVar164._4_4_ = __real_3f800000;
  auVar164._0_4_ = __real_3f800000;
  auVar164._8_4_ = __real_3f800000;
  auVar164._12_4_ = __real_3f800000;
  auVar164._16_4_ = __real_3f800000;
  auVar164._20_4_ = __real_3f800000;
  auVar164._24_4_ = __real_3f800000;
  auVar164._28_4_ = __real_3f800000;
  auVar107 = vblendvps_avx(auVar107,auVar164,auVar139);
  auVar107 = vmaskmovps_avx(auVar83,auVar107);
  auVar93 = vdivps_avx(auVar93,auVar157);
  uVar32 = auVar139._0_4_;
  auVar94._0_4_ = ~uVar32 & auVar93._0_4_;
  uVar147 = auVar139._4_4_;
  auVar94._4_4_ = ~uVar147 & auVar93._4_4_;
  uVar150 = auVar139._8_4_;
  auVar94._8_4_ = ~uVar150 & auVar93._8_4_;
  uVar151 = auVar139._12_4_;
  auVar94._12_4_ = ~uVar151 & auVar93._12_4_;
  uVar152 = auVar139._16_4_;
  auVar94._16_4_ = ~uVar152 & auVar93._16_4_;
  uVar153 = auVar139._20_4_;
  auVar94._20_4_ = ~uVar153 & auVar93._20_4_;
  uVar154 = auVar139._24_4_;
  auVar94._24_4_ = ~uVar154 & auVar93._24_4_;
  uVar155 = auVar139._28_4_;
  auVar94._28_4_ = ~uVar155 & auVar93._28_4_;
  auVar139 = vmaskmovps_avx(auVar83,auVar94);
  auVar93 = vdivps_avx(auVar45,auVar157);
  auVar95._0_4_ = ~uVar32 & auVar93._0_4_;
  auVar95._4_4_ = ~uVar147 & auVar93._4_4_;
  auVar95._8_4_ = ~uVar150 & auVar93._8_4_;
  auVar95._12_4_ = ~uVar151 & auVar93._12_4_;
  auVar95._16_4_ = ~uVar152 & auVar93._16_4_;
  auVar95._20_4_ = ~uVar153 & auVar93._20_4_;
  auVar95._24_4_ = ~uVar154 & auVar93._24_4_;
  auVar95._28_4_ = ~uVar155 & auVar93._28_4_;
  auVar93 = vmaskmovps_avx(auVar83,auVar95);
  auVar96._0_4_ = ~uVar32 & auVar157._0_4_;
  auVar96._4_4_ = ~uVar147 & auVar157._4_4_;
  auVar96._8_4_ = ~uVar150 & auVar157._8_4_;
  auVar96._12_4_ = ~uVar151 & auVar157._12_4_;
  auVar96._16_4_ = ~uVar152 & auVar157._16_4_;
  auVar96._20_4_ = ~uVar153 & auVar157._20_4_;
  auVar96._24_4_ = ~uVar154 & auVar157._24_4_;
  auVar96._28_4_ = ~uVar155 & auVar157._28_4_;
  auVar157 = vsubps_avx(auVar96,auVar159);
  auVar159 = vcmpps_avx(ZEXT832(0) << 0x20,auVar157,2);
  auVar159 = vblendvps_avx(auVar49,auVar171,auVar159);
  fVar38 = param_6 * param_6 * auVar159._0_4_;
  fVar51 = param_6 * param_6 * auVar159._4_4_;
  fVar53 = param_6 * param_6 * auVar159._8_4_;
  fVar55 = param_6 * param_6 * auVar159._12_4_;
  fVar57 = param_6 * param_6 * auVar159._16_4_;
  fVar60 = param_6 * param_6 * auVar159._20_4_;
  fVar62 = param_6 * param_6 * auVar159._24_4_;
  param_6 = param_6 * param_6 * auVar159._28_4_;
  fVar100 = auVar48._0_4_;
  fVar101 = auVar48._4_4_;
  fVar102 = auVar48._8_4_;
  fVar103 = auVar48._12_4_;
  fVar111 = auVar48._16_4_;
  fVar119 = auVar48._20_4_;
  fVar120 = auVar48._24_4_;
  fVar121 = auVar48._28_4_;
  auVar78._0_4_ =
       fVar38 * (fVar100 +
                -((float)local_6c0._0_4_ * local_6a0) +
                (-((float)local_620._0_4_ * local_5c0) - (float)local_660._0_4_ * fVar2)) +
       __real_3f800000;
  auVar78._4_4_ =
       fVar51 * (fVar101 +
                -((float)local_6c0._4_4_ * fStack_69c) +
                (-((float)local_620._4_4_ * fStack_5bc) - (float)local_660._4_4_ * fVar64)) +
       __real_3f800000;
  auVar78._8_4_ =
       fVar53 * (fVar102 +
                -(fStack_6b8 * fStack_698) + (-(fStack_618 * fStack_5b8) - fStack_658 * fVar68)) +
       __real_3f800000;
  auVar78._12_4_ =
       fVar55 * (fVar103 +
                -(fStack_6b4 * fStack_694) + (-(fStack_614 * fStack_5b4) - fStack_654 * fVar69)) +
       __real_3f800000;
  auVar78._16_4_ =
       fVar57 * (fVar111 +
                -(fStack_6b0 * fStack_690) + (-(fStack_610 * fStack_5b0) - fStack_650 * fVar70)) +
       __real_3f800000;
  auVar78._20_4_ =
       fVar60 * (fVar119 +
                -(fStack_6ac * fStack_68c) + (-(fStack_60c * fStack_5ac) - fStack_64c * fVar71)) +
       __real_3f800000;
  auVar78._24_4_ =
       fVar62 * (fVar120 +
                -(fStack_6a8 * fStack_688) + (-(fStack_608 * fStack_5a8) - fStack_648 * fVar72)) +
       __real_3f800000;
  auVar78._28_4_ =
       param_6 * (fVar121 +
                 -(fStack_6a4 * fStack_684) + (-(fStack_604 * fStack_5a4) - fStack_644 * fVar73)) +
       __real_3f800000;
  auVar97._0_4_ = -(fVar38 * auVar157._0_4_) - auVar104._0_4_;
  auVar97._4_4_ = -(fVar51 * auVar157._4_4_) - auVar104._4_4_;
  auVar97._8_4_ = -(fVar53 * auVar157._8_4_) - auVar104._8_4_;
  auVar97._12_4_ = -(fVar55 * auVar157._12_4_) - auVar104._12_4_;
  auVar97._16_4_ = -(fVar57 * auVar157._16_4_) - auVar104._16_4_;
  auVar97._20_4_ = -(fVar60 * auVar157._20_4_) - auVar104._20_4_;
  auVar97._24_4_ = -(fVar62 * auVar157._24_4_) - auVar104._24_4_;
  auVar97._28_4_ = -(param_6 * auVar157._28_4_) - auVar104._28_4_;
  auVar159 = vdivps_avx(auVar97,auVar78);
  fVar38 = auVar159._0_4_;
  auVar67._0_4_ = auVar104._0_4_ + fVar38;
  fVar51 = auVar159._4_4_;
  auVar67._4_4_ = auVar104._4_4_ + fVar51;
  fVar53 = auVar159._8_4_;
  auVar67._8_4_ = auVar104._8_4_ + fVar53;
  fVar55 = auVar159._12_4_;
  auVar67._12_4_ = auVar104._12_4_ + fVar55;
  fVar57 = auVar159._16_4_;
  auVar67._16_4_ = auVar104._16_4_ + fVar57;
  fVar60 = auVar159._20_4_;
  auVar67._20_4_ = auVar104._20_4_ + fVar60;
  fVar62 = auVar159._24_4_;
  auVar67._24_4_ = auVar104._24_4_ + fVar62;
  fVar110 = auVar159._28_4_;
  auVar67._28_4_ = auVar104._28_4_ + fVar110;
  auVar83 = vmaskmovps_avx(auVar83,auVar67);
  *(undefined1 (*) [32])(param_5 + lVar26) = auVar83;
  local_400 = auVar107._0_4_;
  fStack_3fc = auVar107._4_4_;
  fStack_3f8 = auVar107._8_4_;
  fStack_3f4 = auVar107._12_4_;
  fStack_3f0 = auVar107._16_4_;
  fStack_3ec = auVar107._20_4_;
  fStack_3e8 = auVar107._24_4_;
  fStack_3e4 = auVar107._28_4_;
  local_400 = fVar38 * local_400;
  fStack_3fc = fVar51 * fStack_3fc;
  fStack_3f8 = fVar53 * fStack_3f8;
  fStack_3f4 = fVar55 * fStack_3f4;
  fStack_3f0 = fVar57 * fStack_3f0;
  fStack_3ec = fVar60 * fStack_3ec;
  fStack_3e8 = fVar62 * fStack_3e8;
  fStack_3e4 = fVar110 * fStack_3e4;
  local_3e0 = auVar139._0_4_;
  fStack_3dc = auVar139._4_4_;
  fStack_3d8 = auVar139._8_4_;
  fStack_3d4 = auVar139._12_4_;
  fStack_3d0 = auVar139._16_4_;
  fStack_3cc = auVar139._20_4_;
  fStack_3c8 = auVar139._24_4_;
  fStack_3c4 = auVar139._28_4_;
  local_3e0 = fVar38 * local_3e0;
  fStack_3dc = fVar51 * fStack_3dc;
  fStack_3d8 = fVar53 * fStack_3d8;
  fStack_3d4 = fVar55 * fStack_3d4;
  fStack_3d0 = fVar57 * fStack_3d0;
  fStack_3cc = fVar60 * fStack_3cc;
  fStack_3c8 = fVar62 * fStack_3c8;
  fStack_3c4 = fVar110 * fStack_3c4;
  local_3c0 = auVar93._0_4_;
  fStack_3bc = auVar93._4_4_;
  fStack_3b8 = auVar93._8_4_;
  fStack_3b4 = auVar93._12_4_;
  fStack_3b0 = auVar93._16_4_;
  fStack_3ac = auVar93._20_4_;
  fStack_3a8 = auVar93._24_4_;
  fStack_3a4 = auVar93._28_4_;
  fVar38 = fVar38 * local_3c0;
  fVar51 = fVar51 * fStack_3bc;
  fVar53 = fVar53 * fStack_3b8;
  fVar55 = fVar55 * fStack_3b4;
  fVar57 = fVar57 * fStack_3b0;
  fVar60 = fVar60 * fStack_3ac;
  fVar62 = fVar62 * fStack_3a8;
  fVar110 = fVar110 * fStack_3a4;
  auVar127._0_4_ = fVar100 * local_400 + auVar108._0_4_;
  auVar127._4_4_ = fVar101 * fStack_3fc + auVar108._4_4_;
  auVar127._8_4_ = fVar102 * fStack_3f8 + auVar108._8_4_;
  auVar127._12_4_ = fVar103 * fStack_3f4 + auVar108._12_4_;
  auVar130._16_4_ = fVar111 * fStack_3f0 + auVar108._16_4_;
  auVar130._0_16_ = auVar127;
  auVar130._20_4_ = fVar119 * fStack_3ec + auVar108._20_4_;
  auVar130._24_4_ = fVar120 * fStack_3e8 + auVar108._24_4_;
  auVar130._28_4_ = fVar121 * fStack_3e4 + auVar108._28_4_;
  cVar24 = (char)uVar23;
  local_520 = auVar90._0_4_;
  iStack_51c = auVar90._4_4_;
  iStack_518 = auVar90._8_4_;
  iStack_514 = auVar90._12_4_;
  iStack_510 = auVar90._16_4_;
  iStack_50c = auVar90._20_4_;
  iStack_508 = auVar90._24_4_;
  iStack_504 = auVar90._28_4_;
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + local_520) = auVar127._0_4_;
  }
  local_5a0 = auVar128._0_4_;
  fStack_59c = auVar128._4_4_;
  fStack_598 = auVar128._8_4_;
  fStack_594 = auVar128._12_4_;
  fStack_590 = auVar128._16_4_;
  fStack_58c = auVar128._20_4_;
  fStack_588 = auVar128._24_4_;
  fStack_584 = auVar128._28_4_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + iStack_51c) = uVar5;
  }
  local_580 = auVar89._0_4_;
  fStack_57c = auVar89._4_4_;
  fStack_578 = auVar89._8_4_;
  fStack_574 = auVar89._12_4_;
  fStack_570 = auVar89._16_4_;
  fStack_56c = auVar89._20_4_;
  fStack_568 = auVar89._24_4_;
  fStack_564 = auVar89._28_4_;
  local_4a0 = auVar92._0_4_;
  iStack_49c = auVar92._4_4_;
  iStack_498 = auVar92._8_4_;
  iStack_494 = auVar92._12_4_;
  iStack_490 = auVar92._16_4_;
  iStack_48c = auVar92._20_4_;
  iStack_488 = auVar92._24_4_;
  iStack_484 = auVar92._28_4_;
  auVar65 = auVar48._0_16_;
  auVar87 = auVar48._16_16_;
  auVar42 = auVar130._16_16_;
  auVar43 = auVar66._0_16_;
  auVar44 = auVar66._16_16_;
  local_660._0_4_ = auVar77._0_4_;
  local_660._4_4_ = auVar77._4_4_;
  fStack_658 = auVar77._8_4_;
  fStack_654 = auVar77._12_4_;
  fStack_650 = auVar77._16_4_;
  fStack_64c = auVar77._20_4_;
  fStack_648 = auVar77._24_4_;
  fStack_644 = auVar77._28_4_;
  auVar40 = auVar91._0_16_;
  auVar41 = auVar91._16_16_;
  auVar58 = auVar112._0_16_;
  auVar39 = auVar112._16_16_;
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + iStack_518) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + iStack_514) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + iStack_510) = auVar130._16_4_;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iStack_50c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iStack_508) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iStack_504) = uVar5;
    auVar113._0_4_ = fVar100 * local_3e0 + auVar76._0_4_;
    auVar113._4_4_ = fVar101 * fStack_3dc + auVar76._4_4_;
    auVar113._8_4_ = fVar102 * fStack_3d8 + auVar76._8_4_;
    auVar113._12_4_ = fVar103 * fStack_3d4 + auVar76._12_4_;
    auVar113._16_4_ = fVar111 * fStack_3d0 + auVar76._16_4_;
    auVar113._20_4_ = fVar119 * fStack_3cc + auVar76._20_4_;
    auVar113._24_4_ = fVar120 * fStack_3c8 + auVar76._24_4_;
    auVar113._28_4_ = fVar121 * fStack_3c4 + auVar76._28_4_;
  }
  else {
    auVar113._0_4_ = fVar100 * local_3e0 + auVar76._0_4_;
    auVar113._4_4_ = fVar101 * fStack_3dc + auVar76._4_4_;
    auVar113._8_4_ = fVar102 * fStack_3d8 + auVar76._8_4_;
    auVar113._12_4_ = fVar103 * fStack_3d4 + auVar76._12_4_;
    auVar113._16_4_ = fVar111 * fStack_3d0 + auVar76._16_4_;
    auVar113._20_4_ = fVar119 * fStack_3cc + auVar76._20_4_;
    auVar113._24_4_ = fVar120 * fStack_3c8 + auVar76._24_4_;
    auVar113._28_4_ = fVar121 * fStack_3c4 + auVar76._28_4_;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_520) = auVar113._0_4_;
  }
  auVar42 = auVar113._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_51c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_518) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_514) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_510) = auVar113._16_4_;
  }
  auVar42 = auVar113._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_50c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_508) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_504) = uVar5;
    auVar114._0_4_ = fVar100 * fVar38 + (float)local_660._0_4_;
    auVar114._4_4_ = fVar101 * fVar51 + (float)local_660._4_4_;
    auVar114._8_4_ = fVar102 * fVar53 + fStack_658;
    auVar114._12_4_ = fVar103 * fVar55 + fStack_654;
    auVar114._16_4_ = fVar111 * fVar57 + fStack_650;
    auVar114._20_4_ = fVar119 * fVar60 + fStack_64c;
    auVar114._24_4_ = fVar120 * fVar62 + fStack_648;
    auVar114._28_4_ = fVar121 * fVar110 + fStack_644;
  }
  else {
    auVar114._0_4_ = fVar100 * fVar38 + (float)local_660._0_4_;
    auVar114._4_4_ = fVar101 * fVar51 + (float)local_660._4_4_;
    auVar114._8_4_ = fVar102 * fVar53 + fStack_658;
    auVar114._12_4_ = fVar103 * fVar55 + fStack_654;
    auVar114._16_4_ = fVar111 * fVar57 + fStack_650;
    auVar114._20_4_ = fVar119 * fVar60 + fStack_64c;
    auVar114._24_4_ = fVar120 * fVar62 + fStack_648;
    auVar114._28_4_ = fVar121 * fVar110 + fStack_644;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_520) = auVar114._0_4_;
  }
  auVar42 = auVar114._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_51c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_518) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_514) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_510) = auVar114._16_4_;
  }
  auVar42 = auVar114._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_50c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_508) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_504) = uVar5;
  }
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_520) = fVar100;
  }
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_51c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_518) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_514) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_510) = fVar111;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar87,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_50c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar87,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_508) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar87,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_504) = uVar5;
    auVar115._0_4_ = (float)local_620._0_4_ * local_5c0 * local_400 + local_1c0;
    auVar115._4_4_ = (float)local_620._4_4_ * fStack_5bc * fStack_3fc + fStack_1bc;
    auVar115._8_4_ = fStack_618 * fStack_5b8 * fStack_3f8 + fStack_1b8;
    auVar115._12_4_ = fStack_614 * fStack_5b4 * fStack_3f4 + fStack_1b4;
    auVar115._16_4_ = fStack_610 * fStack_5b0 * fStack_3f0 + fStack_1b0;
    auVar115._20_4_ = fStack_60c * fStack_5ac * fStack_3ec + fStack_1ac;
    auVar115._24_4_ = fStack_608 * fStack_5a8 * fStack_3e8 + fStack_1a8;
    auVar115._28_4_ = fStack_604 * fStack_5a4 * fStack_3e4 + fStack_1a4;
  }
  else {
    auVar115._0_4_ = (float)local_620._0_4_ * local_5c0 * local_400 + local_1c0;
    auVar115._4_4_ = (float)local_620._4_4_ * fStack_5bc * fStack_3fc + fStack_1bc;
    auVar115._8_4_ = fStack_618 * fStack_5b8 * fStack_3f8 + fStack_1b8;
    auVar115._12_4_ = fStack_614 * fStack_5b4 * fStack_3f4 + fStack_1b4;
    auVar115._16_4_ = fStack_610 * fStack_5b0 * fStack_3f0 + fStack_1b0;
    auVar115._20_4_ = fStack_60c * fStack_5ac * fStack_3ec + fStack_1ac;
    auVar115._24_4_ = fStack_608 * fStack_5a8 * fStack_3e8 + fStack_1a8;
    auVar115._28_4_ = fStack_604 * fStack_5a4 * fStack_3e4 + fStack_1a4;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + local_4a0) = auVar115._0_4_;
  }
  auVar42 = auVar115._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iStack_49c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iStack_498) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iStack_494) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + iStack_490) = auVar115._16_4_;
  }
  auVar42 = auVar115._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iStack_48c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iStack_488) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iStack_484) = uVar5;
    auVar84._0_4_ = (float)local_620._0_4_ * local_5c0 * local_3e0 + local_1a0;
    auVar84._4_4_ = (float)local_620._4_4_ * fStack_5bc * fStack_3dc + fStack_19c;
    auVar84._8_4_ = fStack_618 * fStack_5b8 * fStack_3d8 + fStack_198;
    auVar84._12_4_ = fStack_614 * fStack_5b4 * fStack_3d4 + fStack_194;
    auVar84._16_4_ = fStack_610 * fStack_5b0 * fStack_3d0 + fStack_190;
    auVar84._20_4_ = fStack_60c * fStack_5ac * fStack_3cc + fStack_18c;
    auVar84._24_4_ = fStack_608 * fStack_5a8 * fStack_3c8 + fStack_188;
    auVar84._28_4_ = fStack_604 * fStack_5a4 * fStack_3c4 + fStack_184;
  }
  else {
    auVar84._0_4_ = (float)local_620._0_4_ * local_5c0 * local_3e0 + local_1a0;
    auVar84._4_4_ = (float)local_620._4_4_ * fStack_5bc * fStack_3dc + fStack_19c;
    auVar84._8_4_ = fStack_618 * fStack_5b8 * fStack_3d8 + fStack_198;
    auVar84._12_4_ = fStack_614 * fStack_5b4 * fStack_3d4 + fStack_194;
    auVar84._16_4_ = fStack_610 * fStack_5b0 * fStack_3d0 + fStack_190;
    auVar84._20_4_ = fStack_60c * fStack_5ac * fStack_3cc + fStack_18c;
    auVar84._24_4_ = fStack_608 * fStack_5a8 * fStack_3c8 + fStack_188;
    auVar84._28_4_ = fStack_604 * fStack_5a4 * fStack_3c4 + fStack_184;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_4a0) = auVar84._0_4_;
  }
  auVar42 = auVar84._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_49c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_498) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_494) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_490) = auVar84._16_4_;
  }
  auVar42 = auVar84._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_48c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_488) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_484) = uVar5;
    auVar116._0_4_ = (float)local_620._0_4_ * local_5c0 * fVar38 + local_180;
    auVar116._4_4_ = (float)local_620._4_4_ * fStack_5bc * fVar51 + fStack_17c;
    auVar116._8_4_ = fStack_618 * fStack_5b8 * fVar53 + fStack_178;
    auVar116._12_4_ = fStack_614 * fStack_5b4 * fVar55 + fStack_174;
    auVar116._16_4_ = fStack_610 * fStack_5b0 * fVar57 + fStack_170;
    auVar116._20_4_ = fStack_60c * fStack_5ac * fVar60 + fStack_16c;
    auVar116._24_4_ = fStack_608 * fStack_5a8 * fVar62 + fStack_168;
    auVar116._28_4_ = fStack_604 * fStack_5a4 * fVar110 + fStack_164;
  }
  else {
    auVar116._0_4_ = (float)local_620._0_4_ * local_5c0 * fVar38 + local_180;
    auVar116._4_4_ = (float)local_620._4_4_ * fStack_5bc * fVar51 + fStack_17c;
    auVar116._8_4_ = fStack_618 * fStack_5b8 * fVar53 + fStack_178;
    auVar116._12_4_ = fStack_614 * fStack_5b4 * fVar55 + fStack_174;
    auVar116._16_4_ = fStack_610 * fStack_5b0 * fVar57 + fStack_170;
    auVar116._20_4_ = fStack_60c * fStack_5ac * fVar60 + fStack_16c;
    auVar116._24_4_ = fStack_608 * fStack_5a8 * fVar62 + fStack_168;
    auVar116._28_4_ = fStack_604 * fStack_5a4 * fVar110 + fStack_164;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_4a0) = auVar116._0_4_;
  }
  auVar42 = auVar116._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_49c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_498) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_494) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_490) = auVar116._16_4_;
  }
  auVar42 = auVar116._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_48c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_488) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_484) = uVar5;
  }
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_4a0) = local_5c0;
  }
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar43,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_49c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar43,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_498) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar43,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_494) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_490) = fStack_5b0;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar44,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_48c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar44,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_488) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar44,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_484) = uVar5;
    auVar117._0_4_ = (float)uVar6 * fVar2 * local_400 + local_220;
    auVar117._4_4_ = (float)uVar21 * fVar64 * fStack_3fc + fStack_21c;
    auVar117._8_4_ = fVar74 * fVar68 * fStack_3f8 + fStack_218;
    auVar117._12_4_ = fVar75 * fVar69 * fStack_3f4 + fStack_214;
    auVar117._16_4_ = fVar79 * fVar70 * fStack_3f0 + fStack_210;
    auVar117._20_4_ = fVar80 * fVar71 * fStack_3ec + fStack_20c;
    auVar117._24_4_ = fVar81 * fVar72 * fStack_3e8 + fStack_208;
    auVar117._28_4_ = fVar82 * fVar73 * fStack_3e4 + fStack_204;
  }
  else {
    auVar117._0_4_ = (float)uVar6 * fVar2 * local_400 + local_220;
    auVar117._4_4_ = (float)uVar21 * fVar64 * fStack_3fc + fStack_21c;
    auVar117._8_4_ = fVar74 * fVar68 * fStack_3f8 + fStack_218;
    auVar117._12_4_ = fVar75 * fVar69 * fStack_3f4 + fStack_214;
    auVar117._16_4_ = fVar79 * fVar70 * fStack_3f0 + fStack_210;
    auVar117._20_4_ = fVar80 * fVar71 * fStack_3ec + fStack_20c;
    auVar117._24_4_ = fVar81 * fVar72 * fStack_3e8 + fStack_208;
    auVar117._28_4_ = fVar82 * fVar73 * fStack_3e4 + fStack_204;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + (int)local_5a0) = auVar117._0_4_;
  }
  auVar42 = auVar117._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + (int)fStack_59c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + (int)fStack_598) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + (int)fStack_594) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_590) = auVar117._16_4_;
  }
  auVar42 = auVar117._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + (int)fStack_58c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + (int)fStack_588) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + (int)fStack_584) = uVar5;
    auVar85._0_4_ = (float)uVar6 * fVar2 * local_3e0 + local_200;
    auVar85._4_4_ = (float)uVar21 * fVar64 * fStack_3dc + fStack_1fc;
    auVar85._8_4_ = fVar74 * fVar68 * fStack_3d8 + fStack_1f8;
    auVar85._12_4_ = fVar75 * fVar69 * fStack_3d4 + fStack_1f4;
    auVar85._16_4_ = fVar79 * fVar70 * fStack_3d0 + fStack_1f0;
    auVar85._20_4_ = fVar80 * fVar71 * fStack_3cc + fStack_1ec;
    auVar85._24_4_ = fVar81 * fVar72 * fStack_3c8 + fStack_1e8;
    auVar85._28_4_ = fVar82 * fVar73 * fStack_3c4 + fStack_1e4;
  }
  else {
    auVar85._0_4_ = (float)uVar6 * fVar2 * local_3e0 + local_200;
    auVar85._4_4_ = (float)uVar21 * fVar64 * fStack_3dc + fStack_1fc;
    auVar85._8_4_ = fVar74 * fVar68 * fStack_3d8 + fStack_1f8;
    auVar85._12_4_ = fVar75 * fVar69 * fStack_3d4 + fStack_1f4;
    auVar85._16_4_ = fVar79 * fVar70 * fStack_3d0 + fStack_1f0;
    auVar85._20_4_ = fVar80 * fVar71 * fStack_3cc + fStack_1ec;
    auVar85._24_4_ = fVar81 * fVar72 * fStack_3c8 + fStack_1e8;
    auVar85._28_4_ = fVar82 * fVar73 * fStack_3c4 + fStack_1e4;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_5a0) = auVar85._0_4_;
  }
  auVar42 = auVar85._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_59c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_598) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_594) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_590) = auVar85._16_4_;
  }
  auVar42 = auVar85._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_58c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_588) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_584) = uVar5;
    auVar118._0_4_ = (float)uVar6 * fVar2 * fVar38 + local_1e0;
    auVar118._4_4_ = (float)uVar21 * fVar64 * fVar51 + fStack_1dc;
    auVar118._8_4_ = fVar74 * fVar68 * fVar53 + fStack_1d8;
    auVar118._12_4_ = fVar75 * fVar69 * fVar55 + fStack_1d4;
    auVar118._16_4_ = fVar79 * fVar70 * fVar57 + fStack_1d0;
    auVar118._20_4_ = fVar80 * fVar71 * fVar60 + fStack_1cc;
    auVar118._24_4_ = fVar81 * fVar72 * fVar62 + fStack_1c8;
    auVar118._28_4_ = fVar82 * fVar73 * fVar110 + fStack_1c4;
  }
  else {
    auVar118._0_4_ = (float)uVar6 * fVar2 * fVar38 + local_1e0;
    auVar118._4_4_ = (float)uVar21 * fVar64 * fVar51 + fStack_1dc;
    auVar118._8_4_ = fVar74 * fVar68 * fVar53 + fStack_1d8;
    auVar118._12_4_ = fVar75 * fVar69 * fVar55 + fStack_1d4;
    auVar118._16_4_ = fVar79 * fVar70 * fVar57 + fStack_1d0;
    auVar118._20_4_ = fVar80 * fVar71 * fVar60 + fStack_1cc;
    auVar118._24_4_ = fVar81 * fVar72 * fVar62 + fStack_1c8;
    auVar118._28_4_ = fVar82 * fVar73 * fVar110 + fStack_1c4;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_5a0) = auVar118._0_4_;
  }
  auVar42 = auVar118._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_59c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_598) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_594) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_590) = auVar118._16_4_;
  }
  auVar42 = auVar118._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_58c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_588) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_584) = uVar6;
  }
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_5a0) = fVar2;
  }
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_59c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_598) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_594) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_590) = fVar70;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar41,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_58c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar41,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_588) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar41,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_584) = uVar6;
    auVar98._0_4_ = (float)local_6c0._0_4_ * local_6a0 * local_400 + local_460;
    auVar98._4_4_ = (float)local_6c0._4_4_ * fStack_69c * fStack_3fc + fStack_45c;
    auVar98._8_4_ = fStack_6b8 * fStack_698 * fStack_3f8 + fStack_458;
    auVar98._12_4_ = fStack_6b4 * fStack_694 * fStack_3f4 + fStack_454;
    auVar98._16_4_ = fStack_6b0 * fStack_690 * fStack_3f0 + fStack_450;
    auVar98._20_4_ = fStack_6ac * fStack_68c * fStack_3ec + fStack_44c;
    auVar98._24_4_ = fStack_6a8 * fStack_688 * fStack_3e8 + fStack_448;
    auVar98._28_4_ = fStack_6a4 * fStack_684 * fStack_3e4 + fStack_444;
  }
  else {
    auVar98._0_4_ = (float)local_6c0._0_4_ * local_6a0 * local_400 + local_460;
    auVar98._4_4_ = (float)local_6c0._4_4_ * fStack_69c * fStack_3fc + fStack_45c;
    auVar98._8_4_ = fStack_6b8 * fStack_698 * fStack_3f8 + fStack_458;
    auVar98._12_4_ = fStack_6b4 * fStack_694 * fStack_3f4 + fStack_454;
    auVar98._16_4_ = fStack_6b0 * fStack_690 * fStack_3f0 + fStack_450;
    auVar98._20_4_ = fStack_6ac * fStack_68c * fStack_3ec + fStack_44c;
    auVar98._24_4_ = fStack_6a8 * fStack_688 * fStack_3e8 + fStack_448;
    auVar98._28_4_ = fStack_6a4 * fStack_684 * fStack_3e4 + fStack_444;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + (int)local_580) = auVar98._0_4_;
  }
  auVar40 = auVar98._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + (int)fStack_57c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + (int)fStack_578) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + (int)fStack_574) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_570) = auVar98._16_4_;
  }
  auVar40 = auVar98._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + (int)fStack_56c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + (int)fStack_568) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + (int)fStack_564) = uVar6;
    auVar86._0_4_ = (float)local_6c0._0_4_ * local_3e0 * local_6a0 + local_440;
    auVar86._4_4_ = (float)local_6c0._4_4_ * fStack_3dc * fStack_69c + fStack_43c;
    auVar86._8_4_ = fStack_6b8 * fStack_3d8 * fStack_698 + fStack_438;
    auVar86._12_4_ = fStack_6b4 * fStack_3d4 * fStack_694 + fStack_434;
    auVar86._16_4_ = fStack_6b0 * fStack_3d0 * fStack_690 + fStack_430;
    auVar86._20_4_ = fStack_6ac * fStack_3cc * fStack_68c + fStack_42c;
    auVar86._24_4_ = fStack_6a8 * fStack_3c8 * fStack_688 + fStack_428;
    auVar86._28_4_ = fStack_6a4 * fStack_3c4 * fStack_684 + fStack_424;
  }
  else {
    auVar86._0_4_ = (float)local_6c0._0_4_ * local_3e0 * local_6a0 + local_440;
    auVar86._4_4_ = (float)local_6c0._4_4_ * fStack_3dc * fStack_69c + fStack_43c;
    auVar86._8_4_ = fStack_6b8 * fStack_3d8 * fStack_698 + fStack_438;
    auVar86._12_4_ = fStack_6b4 * fStack_3d4 * fStack_694 + fStack_434;
    auVar86._16_4_ = fStack_6b0 * fStack_3d0 * fStack_690 + fStack_430;
    auVar86._20_4_ = fStack_6ac * fStack_3cc * fStack_68c + fStack_42c;
    auVar86._24_4_ = fStack_6a8 * fStack_3c8 * fStack_688 + fStack_428;
    auVar86._28_4_ = fStack_6a4 * fStack_3c4 * fStack_684 + fStack_424;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_580) = auVar86._0_4_;
  }
  auVar40 = auVar86._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_57c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_578) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_574) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_570) = auVar86._16_4_;
  }
  auVar40 = auVar86._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_56c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_568) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_564) = uVar6;
    auVar99._0_4_ = (float)local_6c0._0_4_ * local_6a0 * fVar38 + local_420;
    auVar99._4_4_ = (float)local_6c0._4_4_ * fStack_69c * fVar51 + fStack_41c;
    auVar99._8_4_ = fStack_6b8 * fStack_698 * fVar53 + fStack_418;
    auVar99._12_4_ = fStack_6b4 * fStack_694 * fVar55 + fStack_414;
    auVar99._16_4_ = fStack_6b0 * fStack_690 * fVar57 + fStack_410;
    auVar99._20_4_ = fStack_6ac * fStack_68c * fVar60 + fStack_40c;
    auVar99._24_4_ = fStack_6a8 * fStack_688 * fVar62 + fStack_408;
    auVar99._28_4_ = fStack_6a4 * fStack_684 * fVar110 + fStack_404;
  }
  else {
    auVar99._0_4_ = (float)local_6c0._0_4_ * local_6a0 * fVar38 + local_420;
    auVar99._4_4_ = (float)local_6c0._4_4_ * fStack_69c * fVar51 + fStack_41c;
    auVar99._8_4_ = fStack_6b8 * fStack_698 * fVar53 + fStack_418;
    auVar99._12_4_ = fStack_6b4 * fStack_694 * fVar55 + fStack_414;
    auVar99._16_4_ = fStack_6b0 * fStack_690 * fVar57 + fStack_410;
    auVar99._20_4_ = fStack_6ac * fStack_68c * fVar60 + fStack_40c;
    auVar99._24_4_ = fStack_6a8 * fStack_688 * fVar62 + fStack_408;
    auVar99._28_4_ = fStack_6a4 * fStack_684 * fVar110 + fStack_404;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_580) = auVar99._0_4_;
  }
  auVar40 = auVar99._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_57c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_578) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_574) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_570) = auVar99._16_4_;
  }
  auVar40 = auVar99._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_56c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_568) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_564) = uVar6;
  }
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_580) = local_6a0;
  }
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar58,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_57c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar58,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_578) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar58,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_574) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_570) = fStack_690;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_56c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_568) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_564) = uVar6;
  }
  return;
}

// ApplyXPBDEmbeddedSpringConstraints_avx2 @ 14089e600

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedSpringConstraints_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               byte param_6,float *param_7,longlong param_8,byte param_9,float *param_10,
               longlong param_11,uint param_12)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  uint uVar15;
  ulonglong uVar16;
  char cVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined1 auVar34 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  uint uVar35;
  int iVar36;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  undefined1 auVar37 [32];
  uint uVar46;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  float fVar54;
  undefined1 auVar50 [32];
  float fVar58;
  undefined1 auVar51 [32];
  float fVar52;
  float fVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 in_ZMM2 [64];
  float fVar59;
  float fVar66;
  float fVar67;
  undefined1 auVar60 [16];
  float fVar68;
  undefined1 auVar61 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar73 [32];
  float fVar74;
  float fVar82;
  undefined1 auVar75 [32];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 in_ZMM5 [64];
  int iVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 in_ZMM7 [64];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  float fVar93;
  float fVar94;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  float fVar111;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [16];
  undefined1 auVar115 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  float fVar120;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined1 auVar121 [32];
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
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  int iVar23;
  undefined1 auVar86 [32];
  undefined1 auVar116 [32];
  
  fVar4 = __real_3f800000;
  uVar6 = __real_38d1b717;
  uVar15 = param_12 + 7;
  if (-1 < (int)param_12) {
    uVar15 = param_12;
  }
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    uVar30 = 0;
    do {
      uVar16 = uVar30 & 0xffffffff;
      fVar47 = *param_7;
      auVar113._4_4_ = fVar47;
      auVar113._0_4_ = fVar47;
      auVar113._8_4_ = fVar47;
      auVar113._12_4_ = fVar47;
      auVar113._16_4_ = fVar47;
      auVar113._20_4_ = fVar47;
      auVar113._24_4_ = fVar47;
      auVar113._28_4_ = fVar47;
      if ((param_6 & 1) != 0) {
        fVar3 = param_7[1];
        pfVar1 = (float *)(param_8 + uVar16);
        auVar113._0_4_ = fVar3 * *pfVar1 + fVar47;
        auVar113._4_4_ = fVar3 * pfVar1[1] + fVar47;
        auVar113._8_4_ = fVar3 * pfVar1[2] + fVar47;
        auVar113._12_4_ = fVar3 * pfVar1[3] + fVar47;
        auVar113._16_4_ = fVar3 * pfVar1[4] + fVar47;
        auVar113._20_4_ = fVar3 * pfVar1[5] + fVar47;
        auVar113._24_4_ = fVar3 * pfVar1[6] + fVar47;
        auVar113._28_4_ = fVar3 * pfVar1[7] + fVar47;
      }
      auVar33 = *(undefined1 (*) [32])(param_2 + uVar30 * 2);
      auVar89 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar30 * 2);
      auVar75 = vshufps_avx(auVar33,auVar89,0x88);
      auVar75 = vpermpd_avx2(auVar75,0xd8);
      auVar32 = vpslld_avx2(auVar75,4);
      auVar75 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar75);
      auVar75 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar62 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar75);
      auVar75 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
      auVar49 = vgatherdps(ZEXT832(0) << 0x20,auVar75);
      auVar75 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar121 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar75);
      auVar33 = vshufps_avx(auVar33,auVar89,0xdd);
      auVar33 = vpermpd_avx2(auVar33,0xd8);
      auVar115 = vpslld_avx2(auVar33,4);
      auVar33 = vpcmpeqd_avx2(auVar33,auVar33);
      auVar75 = vgatherdps(ZEXT832(0) << 0x20,auVar33);
      auVar33 = vpcmpeqd_avx2(auVar89,auVar89);
      auVar117 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar33);
      auVar33 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar89 = vgatherdps(ZEXT832(0),auVar33);
      auVar33 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar33);
      fVar47 = *param_10;
      auVar33._4_4_ = fVar47;
      auVar33._0_4_ = fVar47;
      auVar33._8_4_ = fVar47;
      auVar33._12_4_ = fVar47;
      auVar33._16_4_ = fVar47;
      auVar33._20_4_ = fVar47;
      auVar33._24_4_ = fVar47;
      auVar33._28_4_ = fVar47;
      if ((param_9 & 1) != 0) {
        fVar3 = param_10[1];
        pfVar1 = (float *)(param_11 + uVar16);
        auVar33._0_4_ = fVar3 * *pfVar1 + fVar47;
        auVar33._4_4_ = fVar3 * pfVar1[1] + fVar47;
        auVar33._8_4_ = fVar3 * pfVar1[2] + fVar47;
        auVar33._12_4_ = fVar3 * pfVar1[3] + fVar47;
        auVar33._16_4_ = fVar3 * pfVar1[4] + fVar47;
        auVar33._20_4_ = fVar3 * pfVar1[5] + fVar47;
        auVar33._24_4_ = fVar3 * pfVar1[6] + fVar47;
        auVar33._28_4_ = fVar3 * pfVar1[7] + fVar47;
      }
      auVar86 = vsubps_avx(auVar87,auVar75);
      auVar14 = vsubps_avx(auVar62,auVar117);
      auVar112 = vsubps_avx(auVar49,auVar89);
      auVar37._0_4_ =
           auVar112._0_4_ * auVar112._0_4_ +
           auVar86._0_4_ * auVar86._0_4_ + auVar14._0_4_ * auVar14._0_4_;
      auVar37._4_4_ =
           auVar112._4_4_ * auVar112._4_4_ +
           auVar86._4_4_ * auVar86._4_4_ + auVar14._4_4_ * auVar14._4_4_;
      auVar37._8_4_ =
           auVar112._8_4_ * auVar112._8_4_ +
           auVar86._8_4_ * auVar86._8_4_ + auVar14._8_4_ * auVar14._8_4_;
      auVar37._12_4_ =
           auVar112._12_4_ * auVar112._12_4_ +
           auVar86._12_4_ * auVar86._12_4_ + auVar14._12_4_ * auVar14._12_4_;
      auVar37._16_4_ =
           auVar112._16_4_ * auVar112._16_4_ +
           auVar86._16_4_ * auVar86._16_4_ + auVar14._16_4_ * auVar14._16_4_;
      auVar37._20_4_ =
           auVar112._20_4_ * auVar112._20_4_ +
           auVar86._20_4_ * auVar86._20_4_ + auVar14._20_4_ * auVar14._20_4_;
      auVar37._24_4_ =
           auVar112._24_4_ * auVar112._24_4_ +
           auVar86._24_4_ * auVar86._24_4_ + auVar14._24_4_ * auVar14._24_4_;
      auVar37._28_4_ =
           auVar112._28_4_ * auVar112._28_4_ +
           auVar86._28_4_ * auVar86._28_4_ + auVar14._28_4_ * auVar14._28_4_;
      auVar119 = vsqrtps_avx(auVar37);
      auVar13._4_4_ = uVar6;
      auVar13._0_4_ = uVar6;
      auVar13._8_4_ = uVar6;
      auVar13._12_4_ = uVar6;
      auVar13._16_4_ = uVar6;
      auVar13._20_4_ = uVar6;
      auVar13._24_4_ = uVar6;
      auVar13._28_4_ = uVar6;
      auVar13 = vcmpps_avx(auVar37,auVar13,1);
      uVar35 = auVar13._0_4_;
      auVar88._0_4_ = ~uVar35 & auVar119._0_4_;
      uVar40 = auVar13._4_4_;
      auVar88._4_4_ = ~uVar40 & auVar119._4_4_;
      uVar41 = auVar13._8_4_;
      auVar88._8_4_ = ~uVar41 & auVar119._8_4_;
      uVar42 = auVar13._12_4_;
      auVar88._12_4_ = ~uVar42 & auVar119._12_4_;
      uVar43 = auVar13._16_4_;
      auVar88._16_4_ = ~uVar43 & auVar119._16_4_;
      uVar44 = auVar13._20_4_;
      auVar88._20_4_ = ~uVar44 & auVar119._20_4_;
      uVar45 = auVar13._24_4_;
      auVar88._24_4_ = ~uVar45 & auVar119._24_4_;
      uVar46 = auVar13._28_4_;
      auVar88._28_4_ = ~uVar46 & auVar119._28_4_;
      auVar88 = vsubps_avx(auVar88,*(undefined1 (*) [32])(param_3 + uVar16));
      auVar37 = vcmpps_avx(ZEXT432(0) << 0x20,auVar88,2);
      auVar113 = vblendvps_avx(auVar33,auVar113,auVar37);
      auVar33 = vdivps_avx(auVar86,auVar119);
      in_ZMM7 = ZEXT3264(auVar33);
      auVar37 = vdivps_avx(auVar14,auVar119);
      auVar119 = vdivps_avx(auVar112,auVar119);
      fVar93 = param_5 * param_5 * auVar113._0_4_;
      fVar97 = param_5 * param_5 * auVar113._4_4_;
      fVar99 = param_5 * param_5 * auVar113._8_4_;
      fVar101 = param_5 * param_5 * auVar113._12_4_;
      fVar103 = param_5 * param_5 * auVar113._16_4_;
      fVar105 = param_5 * param_5 * auVar113._20_4_;
      fVar107 = param_5 * param_5 * auVar113._24_4_;
      fVar109 = param_5 * param_5 * auVar113._28_4_;
      pfVar1 = (float *)(param_4 + uVar16);
      fVar55 = *pfVar1;
      fVar10 = pfVar1[1];
      fVar56 = pfVar1[2];
      fVar11 = pfVar1[3];
      fVar57 = pfVar1[4];
      fVar12 = pfVar1[5];
      fVar58 = pfVar1[6];
      fVar111 = pfVar1[7];
      auVar118._0_4_ = -(fVar93 * auVar88._0_4_) - fVar55;
      auVar118._4_4_ = -(fVar97 * auVar88._4_4_) - fVar10;
      auVar118._8_4_ = -(fVar99 * auVar88._8_4_) - fVar56;
      auVar118._12_4_ = -(fVar101 * auVar88._12_4_) - fVar11;
      auVar118._16_4_ = -(fVar103 * auVar88._16_4_) - fVar57;
      auVar118._20_4_ = -(fVar105 * auVar88._20_4_) - fVar12;
      auVar118._24_4_ = -(fVar107 * auVar88._24_4_) - fVar58;
      auVar118._28_4_ = -(fVar109 * auVar88._28_4_) - fVar111;
      fVar47 = auVar91._0_4_;
      fVar120 = auVar121._0_4_;
      fVar3 = auVar91._4_4_;
      fVar122 = auVar121._4_4_;
      fVar52 = auVar91._8_4_;
      fVar123 = auVar121._8_4_;
      fVar7 = auVar91._12_4_;
      fVar124 = auVar121._12_4_;
      fVar53 = auVar91._16_4_;
      fVar125 = auVar121._16_4_;
      fVar8 = auVar91._20_4_;
      fVar126 = auVar121._20_4_;
      fVar54 = auVar91._24_4_;
      fVar127 = auVar121._24_4_;
      fVar9 = auVar91._28_4_;
      fVar128 = auVar121._28_4_;
      auVar14._4_4_ = fVar4;
      auVar14._0_4_ = fVar4;
      auVar14._8_4_ = fVar4;
      auVar14._12_4_ = fVar4;
      auVar14._16_4_ = fVar4;
      auVar14._20_4_ = fVar4;
      auVar14._24_4_ = fVar4;
      auVar14._28_4_ = fVar4;
      auVar112._0_4_ = fVar93 * (fVar120 + fVar47) + fVar4;
      auVar112._4_4_ = fVar97 * (fVar122 + fVar3) + fVar4;
      auVar112._8_4_ = fVar99 * (fVar123 + fVar52) + fVar4;
      auVar112._12_4_ = fVar101 * (fVar124 + fVar7) + fVar4;
      auVar112._16_4_ = fVar103 * (fVar125 + fVar53) + fVar4;
      auVar112._20_4_ = fVar105 * (fVar126 + fVar8) + fVar4;
      auVar112._24_4_ = fVar107 * (fVar127 + fVar54) + fVar4;
      auVar112._28_4_ = fVar109 * (fVar128 + fVar9) + fVar4;
      auVar86 = vdivps_avx(auVar118,auVar112);
      auVar113 = vblendvps_avx(auVar33,auVar14,auVar13);
      fVar94 = auVar86._0_4_;
      fVar93 = fVar94 * auVar113._0_4_;
      fVar98 = auVar86._4_4_;
      fVar97 = fVar98 * auVar113._4_4_;
      fVar100 = auVar86._8_4_;
      fVar99 = fVar100 * auVar113._8_4_;
      fVar102 = auVar86._12_4_;
      fVar101 = fVar102 * auVar113._12_4_;
      fVar104 = auVar86._16_4_;
      fVar103 = fVar104 * auVar113._16_4_;
      fVar106 = auVar86._20_4_;
      fVar105 = fVar106 * auVar113._20_4_;
      fVar108 = auVar86._24_4_;
      fVar107 = fVar108 * auVar113._24_4_;
      fVar110 = auVar86._28_4_;
      fVar109 = fVar110 * auVar113._28_4_;
      auVar84._0_4_ = fVar120 * fVar93 + auVar87._0_4_;
      auVar84._4_4_ = fVar122 * fVar97 + auVar87._4_4_;
      auVar84._8_4_ = fVar123 * fVar99 + auVar87._8_4_;
      auVar84._12_4_ = fVar124 * fVar101 + auVar87._12_4_;
      auVar86._16_4_ = fVar125 * fVar103 + auVar87._16_4_;
      auVar86._0_16_ = auVar84;
      auVar86._20_4_ = fVar126 * fVar105 + auVar87._20_4_;
      auVar86._24_4_ = fVar127 * fVar107 + auVar87._24_4_;
      auVar86._28_4_ = fVar128 * fVar109 + auVar87._28_4_;
      lVar28 = (longlong)auVar32._0_4_;
      *(float *)(param_1 + lVar28) = auVar84._0_4_;
      lVar21 = (longlong)auVar32._4_4_;
      uVar5 = vextractps_avx(auVar84,1);
      *(undefined4 *)(param_1 + lVar21) = uVar5;
      lVar19 = (longlong)auVar32._8_4_;
      uVar5 = vextractps_avx(auVar84,2);
      *(undefined4 *)(param_1 + lVar19) = uVar5;
      lVar27 = (longlong)auVar32._12_4_;
      uVar5 = vextractps_avx(auVar84,3);
      *(undefined4 *)(param_1 + lVar27) = uVar5;
      lVar31 = (longlong)auVar32._16_4_;
      auVar34 = auVar86._16_16_;
      *(float *)(param_1 + lVar31) = auVar86._16_4_;
      lVar20 = (longlong)auVar32._20_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + lVar20) = uVar5;
      lVar29 = (longlong)auVar32._24_4_;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + lVar29) = uVar5;
      lVar26 = (longlong)auVar32._28_4_;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + lVar26) = uVar5;
      fVar74 = (float)(~uVar35 & auVar37._0_4_);
      fVar76 = (float)(~uVar40 & auVar37._4_4_);
      fVar77 = (float)(~uVar41 & auVar37._8_4_);
      fVar78 = (float)(~uVar42 & auVar37._12_4_);
      fVar79 = (float)(~uVar43 & auVar37._16_4_);
      fVar80 = (float)(~uVar44 & auVar37._20_4_);
      fVar81 = (float)(~uVar45 & auVar37._24_4_);
      fVar82 = (float)(~uVar46 & auVar37._28_4_);
      in_ZMM5 = ZEXT3264(CONCAT428(fVar82,CONCAT424(fVar81,CONCAT420(fVar80,CONCAT416(fVar79,
                                                  CONCAT412(fVar78,CONCAT48(fVar77,CONCAT44(fVar76,
                                                  fVar74))))))));
      fVar74 = fVar94 * fVar74;
      fVar76 = fVar98 * fVar76;
      fVar77 = fVar100 * fVar77;
      fVar78 = fVar102 * fVar78;
      fVar79 = fVar104 * fVar79;
      fVar80 = fVar106 * fVar80;
      fVar81 = fVar108 * fVar81;
      fVar82 = fVar110 * fVar82;
      auVar60._0_4_ = fVar120 * fVar74 + auVar62._0_4_;
      auVar60._4_4_ = fVar122 * fVar76 + auVar62._4_4_;
      auVar60._8_4_ = fVar123 * fVar77 + auVar62._8_4_;
      auVar60._12_4_ = fVar124 * fVar78 + auVar62._12_4_;
      auVar87._16_4_ = fVar125 * fVar79 + auVar62._16_4_;
      auVar87._0_16_ = auVar60;
      auVar87._20_4_ = fVar126 * fVar80 + auVar62._20_4_;
      auVar87._24_4_ = fVar127 * fVar81 + auVar62._24_4_;
      auVar87._28_4_ = fVar128 * fVar82 + auVar62._28_4_;
      *(float *)(param_1 + 4 + lVar28) = auVar60._0_4_;
      uVar5 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar5;
      uVar5 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar5;
      uVar5 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar5;
      auVar34 = auVar87._16_16_;
      *(float *)(param_1 + 4 + lVar31) = auVar87._16_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar5;
      fVar59 = fVar94 * (float)(~uVar35 & auVar119._0_4_);
      fVar66 = fVar98 * (float)(~uVar40 & auVar119._4_4_);
      fVar67 = fVar100 * (float)(~uVar41 & auVar119._8_4_);
      fVar68 = fVar102 * (float)(~uVar42 & auVar119._12_4_);
      fVar69 = fVar104 * (float)(~uVar43 & auVar119._16_4_);
      fVar70 = fVar106 * (float)(~uVar44 & auVar119._20_4_);
      fVar71 = fVar108 * (float)(~uVar45 & auVar119._24_4_);
      fVar72 = fVar110 * (float)(~uVar46 & auVar119._28_4_);
      auVar48._0_4_ = fVar120 * fVar59 + auVar49._0_4_;
      auVar48._4_4_ = fVar122 * fVar66 + auVar49._4_4_;
      auVar48._8_4_ = fVar123 * fVar67 + auVar49._8_4_;
      auVar48._12_4_ = fVar124 * fVar68 + auVar49._12_4_;
      auVar62._16_4_ = fVar125 * fVar69 + auVar49._16_4_;
      auVar62._0_16_ = auVar48;
      auVar62._20_4_ = fVar126 * fVar70 + auVar49._20_4_;
      auVar62._24_4_ = fVar127 * fVar71 + auVar49._24_4_;
      auVar62._28_4_ = fVar128 * fVar72 + auVar49._28_4_;
      in_ZMM2 = ZEXT3264(auVar62);
      *(float *)(param_1 + 8 + lVar28) = auVar48._0_4_;
      uVar5 = vextractps_avx(auVar48,1);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar5;
      uVar5 = vextractps_avx(auVar48,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar5;
      uVar5 = vextractps_avx(auVar48,3);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar5;
      auVar34 = auVar62._16_16_;
      *(float *)(param_1 + 8 + lVar31) = auVar62._16_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar5;
      *(float *)(param_1 + 0xc + lVar28) = fVar120;
      auVar34 = auVar121._0_16_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar5;
      auVar34 = auVar121._16_16_;
      *(float *)(param_1 + 0xc + lVar31) = fVar125;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar5;
      local_360 = auVar75._0_4_;
      auVar34._0_4_ = -(fVar47 * fVar93) + local_360;
      fStack_35c = auVar75._4_4_;
      auVar34._4_4_ = -(fVar3 * fVar97) + fStack_35c;
      fStack_358 = auVar75._8_4_;
      auVar34._8_4_ = -(fVar52 * fVar99) + fStack_358;
      fStack_354 = auVar75._12_4_;
      auVar34._12_4_ = -(fVar7 * fVar101) + fStack_354;
      fStack_350 = auVar75._16_4_;
      auVar32._16_4_ = -(fVar53 * fVar103) + fStack_350;
      auVar32._0_16_ = auVar34;
      fStack_34c = auVar75._20_4_;
      auVar32._20_4_ = -(fVar8 * fVar105) + fStack_34c;
      fStack_348 = auVar75._24_4_;
      auVar32._24_4_ = -(fVar54 * fVar107) + fStack_348;
      fStack_344 = auVar75._28_4_;
      auVar32._28_4_ = -(fVar9 * fVar109) + fStack_344;
      lVar28 = (longlong)auVar115._0_4_;
      *(float *)(param_1 + lVar28) = auVar34._0_4_;
      lVar27 = (longlong)auVar115._4_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + lVar27) = uVar5;
      lVar20 = (longlong)auVar115._8_4_;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + lVar20) = uVar5;
      lVar19 = (longlong)auVar115._12_4_;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + lVar19) = uVar5;
      lVar21 = (longlong)auVar115._16_4_;
      auVar34 = auVar32._16_16_;
      *(float *)(param_1 + lVar21) = auVar32._16_4_;
      lVar26 = (longlong)auVar115._20_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + lVar26) = uVar5;
      lVar31 = (longlong)auVar115._24_4_;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + lVar31) = uVar5;
      lVar29 = (longlong)auVar115._28_4_;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + lVar29) = uVar5;
      local_320 = auVar117._0_4_;
      auVar85._0_4_ = -(fVar47 * fVar74) + local_320;
      fStack_31c = auVar117._4_4_;
      auVar85._4_4_ = -(fVar3 * fVar76) + fStack_31c;
      fStack_318 = auVar117._8_4_;
      auVar85._8_4_ = -(fVar52 * fVar77) + fStack_318;
      fStack_314 = auVar117._12_4_;
      auVar85._12_4_ = -(fVar7 * fVar78) + fStack_314;
      fStack_310 = auVar117._16_4_;
      auVar49._16_4_ = -(fVar53 * fVar79) + fStack_310;
      auVar49._0_16_ = auVar85;
      fStack_30c = auVar117._20_4_;
      auVar49._20_4_ = -(fVar8 * fVar80) + fStack_30c;
      fStack_308 = auVar117._24_4_;
      auVar49._24_4_ = -(fVar54 * fVar81) + fStack_308;
      fStack_304 = auVar117._28_4_;
      auVar49._28_4_ = -(fVar9 * fVar82) + fStack_304;
      *(float *)(param_1 + 4 + lVar28) = auVar85._0_4_;
      uVar5 = vextractps_avx(auVar85,1);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar5;
      uVar5 = vextractps_avx(auVar85,2);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar85,3);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar5;
      auVar34 = auVar49._16_16_;
      *(float *)(param_1 + 4 + lVar21) = auVar49._16_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar5;
      local_340 = auVar89._0_4_;
      auVar61._0_4_ = -(fVar47 * fVar59) + local_340;
      fStack_33c = auVar89._4_4_;
      auVar61._4_4_ = -(fVar3 * fVar66) + fStack_33c;
      fStack_338 = auVar89._8_4_;
      auVar61._8_4_ = -(fVar52 * fVar67) + fStack_338;
      fStack_334 = auVar89._12_4_;
      auVar61._12_4_ = -(fVar7 * fVar68) + fStack_334;
      fStack_330 = auVar89._16_4_;
      auVar75._16_4_ = -(fVar53 * fVar69) + fStack_330;
      auVar75._0_16_ = auVar61;
      fStack_32c = auVar89._20_4_;
      auVar75._20_4_ = -(fVar8 * fVar70) + fStack_32c;
      fStack_328 = auVar89._24_4_;
      auVar75._24_4_ = -(fVar54 * fVar71) + fStack_328;
      fStack_324 = auVar89._28_4_;
      auVar75._28_4_ = -(fVar9 * fVar72) + fStack_324;
      *(float *)(param_1 + 8 + lVar28) = auVar61._0_4_;
      uVar5 = vextractps_avx(auVar61,1);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar5;
      uVar5 = vextractps_avx(auVar61,2);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar61,3);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar5;
      auVar34 = auVar75._16_16_;
      *(float *)(param_1 + 8 + lVar21) = auVar75._16_4_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar5;
      pfVar1 = (float *)(param_4 + uVar16);
      *pfVar1 = fVar55 + fVar94;
      pfVar1[1] = fVar10 + fVar98;
      pfVar1[2] = fVar56 + fVar100;
      pfVar1[3] = fVar11 + fVar102;
      pfVar1[4] = fVar57 + fVar104;
      pfVar1[5] = fVar12 + fVar106;
      pfVar1[6] = fVar58 + fVar108;
      pfVar1[7] = fVar111 + fVar110;
      *(float *)(param_1 + 0xc + lVar28) = fVar47;
      auVar34 = auVar91._0_16_;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar5;
      auVar34 = auVar91._16_16_;
      *(float *)(param_1 + 0xc + lVar21) = fVar53;
      uVar5 = vextractps_avx(auVar34,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar5;
      uVar5 = vextractps_avx(auVar34,2);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar5;
      uVar5 = vextractps_avx(auVar34,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar5;
      uVar30 = uVar30 + 0x20;
      uVar18 = uVar18 + 8;
    } while ((int)uVar18 < (int)(uVar15 & 0xfffffff8));
  }
  if ((int)param_12 <= (int)uVar18) {
    return;
  }
  auVar89._4_4_ = uVar18;
  auVar89._0_4_ = uVar18;
  auVar89._8_4_ = uVar18;
  auVar89._12_4_ = uVar18;
  auVar89._16_4_ = uVar18;
  auVar89._20_4_ = uVar18;
  auVar89._24_4_ = uVar18;
  auVar89._28_4_ = uVar18;
  auVar113 = vpor_avx2(auVar89,
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar91._4_4_ = param_12;
  auVar91._0_4_ = param_12;
  auVar91._8_4_ = param_12;
  auVar91._12_4_ = param_12;
  auVar91._16_4_ = param_12;
  auVar91._20_4_ = param_12;
  auVar91._24_4_ = param_12;
  auVar91._28_4_ = param_12;
  auVar113 = vpcmpgtd_avx2(auVar91,auVar113);
  pauVar2 = (undefined1 (*) [32])(param_2 + (ulonglong)uVar18 * 8);
  uVar15 = vmovmskps_avx(auVar113);
  if (uVar15 == 0xff) {
    auVar33 = *pauVar2;
    auVar89 = pauVar2[1];
    auVar75 = vshufps_avx(auVar33,auVar89,0x88);
    auVar75 = vpermpd_avx2(auVar75,0xd8);
    auVar33 = vshufps_avx(auVar33,auVar89,0xdd);
    auVar33 = vpermpd_avx2(auVar33,0xd8);
  }
  else {
    auVar75 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar113);
    auVar33 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar113);
  }
  auVar117 = vpslld_avx2(auVar75,4);
  auVar89 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar113);
  auVar75 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar113);
  auVar32 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar113);
  auVar121 = vgatherdps(ZEXT832(0),auVar113);
  auVar87 = vpslld_avx2(auVar33,4);
  auVar49 = vgatherdps(ZEXT832(0),auVar113);
  auVar115 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar113);
  auVar62 = vgatherdps(ZEXT832(0),auVar113);
  auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar113);
  auVar33 = vmaskmovps_avx(auVar113,auVar89);
  auVar89 = vmaskmovps_avx(auVar113,auVar75);
  auVar75 = vmaskmovps_avx(auVar113,auVar32);
  auVar32 = vmaskmovps_avx(auVar113,auVar49);
  auVar49 = vmaskmovps_avx(auVar113,auVar115);
  auVar62 = vmaskmovps_avx(auVar113,auVar62);
  lVar19 = (longlong)(int)(uVar18 << 2);
  fVar4 = *param_7;
  auVar115._4_4_ = fVar4;
  auVar115._0_4_ = fVar4;
  auVar115._8_4_ = fVar4;
  auVar115._12_4_ = fVar4;
  auVar115._16_4_ = fVar4;
  auVar115._20_4_ = fVar4;
  auVar115._24_4_ = fVar4;
  auVar115._28_4_ = fVar4;
  if ((param_6 & 1) != 0) {
    auVar13 = vmaskmovps_avx(auVar113,*(undefined1 (*) [32])(param_8 + lVar19));
    fVar47 = param_7[1];
    auVar115._0_4_ = auVar13._0_4_ * fVar47 + fVar4;
    auVar115._4_4_ = auVar13._4_4_ * fVar47 + fVar4;
    auVar115._8_4_ = auVar13._8_4_ * fVar47 + fVar4;
    auVar115._12_4_ = auVar13._12_4_ * fVar47 + fVar4;
    auVar115._16_4_ = auVar13._16_4_ * fVar47 + fVar4;
    auVar115._20_4_ = auVar13._20_4_ * fVar47 + fVar4;
    auVar115._24_4_ = auVar13._24_4_ * fVar47 + fVar4;
    auVar115._28_4_ = auVar13._28_4_ * fVar47 + fVar4;
  }
  auVar13 = vmaskmovps_avx(auVar113,*(undefined1 (*) [32])(param_3 + lVar19));
  auVar37 = vmaskmovps_avx(auVar113,*(undefined1 (*) [32])(param_4 + lVar19));
  fVar4 = *param_10;
  auVar119._4_4_ = fVar4;
  auVar119._0_4_ = fVar4;
  auVar119._8_4_ = fVar4;
  auVar119._12_4_ = fVar4;
  auVar119._16_4_ = fVar4;
  auVar119._20_4_ = fVar4;
  auVar119._24_4_ = fVar4;
  auVar119._28_4_ = fVar4;
  if ((param_9 & 1) != 0) {
    auVar86 = vmaskmovps_avx(auVar113,*(undefined1 (*) [32])(param_11 + lVar19));
    fVar47 = param_10[1];
    auVar119._0_4_ = auVar86._0_4_ * fVar47 + fVar4;
    auVar119._4_4_ = auVar86._4_4_ * fVar47 + fVar4;
    auVar119._8_4_ = auVar86._8_4_ * fVar47 + fVar4;
    auVar119._12_4_ = auVar86._12_4_ * fVar47 + fVar4;
    auVar119._16_4_ = auVar86._16_4_ * fVar47 + fVar4;
    auVar119._20_4_ = auVar86._20_4_ * fVar47 + fVar4;
    auVar119._24_4_ = auVar86._24_4_ * fVar47 + fVar4;
    auVar119._28_4_ = auVar86._28_4_ * fVar47 + fVar4;
  }
  auVar86 = vsubps_avx(auVar33,auVar32);
  auVar112 = vsubps_avx(auVar89,auVar49);
  auVar118 = vsubps_avx(auVar75,auVar62);
  auVar95._0_4_ =
       auVar118._0_4_ * auVar118._0_4_ +
       auVar86._0_4_ * auVar86._0_4_ + auVar112._0_4_ * auVar112._0_4_;
  auVar95._4_4_ =
       auVar118._4_4_ * auVar118._4_4_ +
       auVar86._4_4_ * auVar86._4_4_ + auVar112._4_4_ * auVar112._4_4_;
  auVar95._8_4_ =
       auVar118._8_4_ * auVar118._8_4_ +
       auVar86._8_4_ * auVar86._8_4_ + auVar112._8_4_ * auVar112._8_4_;
  auVar95._12_4_ =
       auVar118._12_4_ * auVar118._12_4_ +
       auVar86._12_4_ * auVar86._12_4_ + auVar112._12_4_ * auVar112._12_4_;
  auVar95._16_4_ =
       auVar118._16_4_ * auVar118._16_4_ +
       auVar86._16_4_ * auVar86._16_4_ + auVar112._16_4_ * auVar112._16_4_;
  auVar95._20_4_ =
       auVar118._20_4_ * auVar118._20_4_ +
       auVar86._20_4_ * auVar86._20_4_ + auVar112._20_4_ * auVar112._20_4_;
  auVar95._24_4_ =
       auVar118._24_4_ * auVar118._24_4_ +
       auVar86._24_4_ * auVar86._24_4_ + auVar112._24_4_ * auVar112._24_4_;
  auVar95._28_4_ =
       auVar118._28_4_ * auVar118._28_4_ +
       auVar86._28_4_ * auVar86._28_4_ + auVar112._28_4_ * auVar112._28_4_;
  auVar88 = vsqrtps_avx(auVar95);
  auVar86 = vdivps_avx(auVar86,auVar88);
  auVar90._4_4_ = __real_38d1b717;
  auVar90._0_4_ = __real_38d1b717;
  auVar90._8_4_ = __real_38d1b717;
  auVar90._12_4_ = __real_38d1b717;
  auVar90._16_4_ = __real_38d1b717;
  auVar90._20_4_ = __real_38d1b717;
  auVar90._24_4_ = __real_38d1b717;
  auVar90._28_4_ = __real_38d1b717;
  auVar14 = vcmpps_avx(auVar95,auVar90,1);
  auVar96._4_4_ = __real_3f800000;
  auVar96._0_4_ = __real_3f800000;
  auVar96._8_4_ = __real_3f800000;
  auVar96._12_4_ = __real_3f800000;
  auVar96._16_4_ = __real_3f800000;
  auVar96._20_4_ = __real_3f800000;
  auVar96._24_4_ = __real_3f800000;
  auVar96._28_4_ = __real_3f800000;
  auVar86 = vblendvps_avx(auVar86,auVar96,auVar14);
  auVar86 = vmaskmovps_avx(auVar113,auVar86);
  auVar112 = vdivps_avx(auVar112,auVar88);
  uVar18 = auVar14._0_4_;
  auVar63._0_4_ = ~uVar18 & auVar112._0_4_;
  uVar35 = auVar14._4_4_;
  auVar63._4_4_ = ~uVar35 & auVar112._4_4_;
  uVar40 = auVar14._8_4_;
  auVar63._8_4_ = ~uVar40 & auVar112._8_4_;
  uVar41 = auVar14._12_4_;
  auVar63._12_4_ = ~uVar41 & auVar112._12_4_;
  uVar42 = auVar14._16_4_;
  auVar63._16_4_ = ~uVar42 & auVar112._16_4_;
  uVar43 = auVar14._20_4_;
  auVar63._20_4_ = ~uVar43 & auVar112._20_4_;
  uVar44 = auVar14._24_4_;
  auVar63._24_4_ = ~uVar44 & auVar112._24_4_;
  uVar45 = auVar14._28_4_;
  auVar63._28_4_ = ~uVar45 & auVar112._28_4_;
  auVar14 = vmaskmovps_avx(auVar113,auVar63);
  auVar112 = vdivps_avx(auVar118,auVar88);
  auVar64._0_4_ = ~uVar18 & auVar112._0_4_;
  auVar64._4_4_ = ~uVar35 & auVar112._4_4_;
  auVar64._8_4_ = ~uVar40 & auVar112._8_4_;
  auVar64._12_4_ = ~uVar41 & auVar112._12_4_;
  auVar64._16_4_ = ~uVar42 & auVar112._16_4_;
  auVar64._20_4_ = ~uVar43 & auVar112._20_4_;
  auVar64._24_4_ = ~uVar44 & auVar112._24_4_;
  auVar64._28_4_ = ~uVar45 & auVar112._28_4_;
  auVar112 = vmaskmovps_avx(auVar113,auVar64);
  auVar38._0_4_ = ~uVar18 & auVar88._0_4_;
  auVar38._4_4_ = ~uVar35 & auVar88._4_4_;
  auVar38._8_4_ = ~uVar40 & auVar88._8_4_;
  auVar38._12_4_ = ~uVar41 & auVar88._12_4_;
  auVar38._16_4_ = ~uVar42 & auVar88._16_4_;
  auVar38._20_4_ = ~uVar43 & auVar88._20_4_;
  auVar38._24_4_ = ~uVar44 & auVar88._24_4_;
  auVar38._28_4_ = ~uVar45 & auVar88._28_4_;
  auVar88 = vsubps_avx(auVar38,auVar13);
  auVar13 = vcmpps_avx(ZEXT432(0) << 0x20,auVar88,2);
  auVar115 = vblendvps_avx(auVar119,auVar115,auVar13);
  fVar47 = param_5 * param_5 * auVar115._0_4_;
  fVar52 = param_5 * param_5 * auVar115._4_4_;
  fVar53 = param_5 * param_5 * auVar115._8_4_;
  fVar54 = param_5 * param_5 * auVar115._12_4_;
  fVar55 = param_5 * param_5 * auVar115._16_4_;
  fVar56 = param_5 * param_5 * auVar115._20_4_;
  fVar57 = param_5 * param_5 * auVar115._24_4_;
  param_5 = param_5 * param_5 * auVar115._28_4_;
  fVar4 = auVar121._0_4_;
  fVar111 = auVar91._0_4_;
  fVar3 = auVar121._4_4_;
  fVar93 = auVar91._4_4_;
  fVar7 = auVar121._8_4_;
  fVar97 = auVar91._8_4_;
  fVar8 = auVar121._12_4_;
  fVar99 = auVar91._12_4_;
  fVar9 = auVar121._16_4_;
  fVar101 = auVar91._16_4_;
  fVar10 = auVar121._20_4_;
  fVar103 = auVar91._20_4_;
  fVar11 = auVar121._24_4_;
  fVar105 = auVar91._24_4_;
  fVar12 = auVar121._28_4_;
  fVar107 = auVar91._28_4_;
  auVar65._0_4_ = fVar47 * (fVar111 + fVar4) + __real_3f800000;
  auVar65._4_4_ = fVar52 * (fVar93 + fVar3) + __real_3f800000;
  auVar65._8_4_ = fVar53 * (fVar97 + fVar7) + __real_3f800000;
  auVar65._12_4_ = fVar54 * (fVar99 + fVar8) + __real_3f800000;
  auVar65._16_4_ = fVar55 * (fVar101 + fVar9) + __real_3f800000;
  auVar65._20_4_ = fVar56 * (fVar103 + fVar10) + __real_3f800000;
  auVar65._24_4_ = fVar57 * (fVar105 + fVar11) + __real_3f800000;
  auVar65._28_4_ = param_5 * (fVar107 + fVar12) + __real_3f800000;
  auVar39._0_4_ = -(fVar47 * auVar88._0_4_) - auVar37._0_4_;
  auVar39._4_4_ = -(fVar52 * auVar88._4_4_) - auVar37._4_4_;
  auVar39._8_4_ = -(fVar53 * auVar88._8_4_) - auVar37._8_4_;
  auVar39._12_4_ = -(fVar54 * auVar88._12_4_) - auVar37._12_4_;
  auVar39._16_4_ = -(fVar55 * auVar88._16_4_) - auVar37._16_4_;
  auVar39._20_4_ = -(fVar56 * auVar88._20_4_) - auVar37._20_4_;
  auVar39._24_4_ = -(fVar57 * auVar88._24_4_) - auVar37._24_4_;
  auVar39._28_4_ = -(param_5 * auVar88._28_4_) - auVar37._28_4_;
  auVar115 = vdivps_avx(auVar39,auVar65);
  fVar47 = auVar115._0_4_;
  auVar50._0_4_ = auVar37._0_4_ + fVar47;
  fVar52 = auVar115._4_4_;
  auVar50._4_4_ = auVar37._4_4_ + fVar52;
  fVar53 = auVar115._8_4_;
  auVar50._8_4_ = auVar37._8_4_ + fVar53;
  fVar54 = auVar115._12_4_;
  auVar50._12_4_ = auVar37._12_4_ + fVar54;
  fVar55 = auVar115._16_4_;
  auVar50._16_4_ = auVar37._16_4_ + fVar55;
  fVar56 = auVar115._20_4_;
  auVar50._20_4_ = auVar37._20_4_ + fVar56;
  fVar57 = auVar115._24_4_;
  auVar50._24_4_ = auVar37._24_4_ + fVar57;
  fVar58 = auVar115._28_4_;
  auVar50._28_4_ = auVar37._28_4_ + fVar58;
  auVar113 = vmaskmovps_avx(auVar113,auVar50);
  *(undefined1 (*) [32])(param_4 + lVar19) = auVar113;
  local_2e0 = auVar86._0_4_;
  fStack_2dc = auVar86._4_4_;
  fStack_2d8 = auVar86._8_4_;
  fStack_2d4 = auVar86._12_4_;
  fStack_2d0 = auVar86._16_4_;
  fStack_2cc = auVar86._20_4_;
  fStack_2c8 = auVar86._24_4_;
  fStack_2c4 = auVar86._28_4_;
  local_2e0 = fVar47 * local_2e0;
  fStack_2dc = fVar52 * fStack_2dc;
  fStack_2d8 = fVar53 * fStack_2d8;
  fStack_2d4 = fVar54 * fStack_2d4;
  fStack_2d0 = fVar55 * fStack_2d0;
  fStack_2cc = fVar56 * fStack_2cc;
  fStack_2c8 = fVar57 * fStack_2c8;
  fStack_2c4 = fVar58 * fStack_2c4;
  local_2c0 = auVar14._0_4_;
  fStack_2bc = auVar14._4_4_;
  fStack_2b8 = auVar14._8_4_;
  fStack_2b4 = auVar14._12_4_;
  fStack_2b0 = auVar14._16_4_;
  fStack_2ac = auVar14._20_4_;
  fStack_2a8 = auVar14._24_4_;
  fStack_2a4 = auVar14._28_4_;
  local_2c0 = fVar47 * local_2c0;
  fStack_2bc = fVar52 * fStack_2bc;
  fStack_2b8 = fVar53 * fStack_2b8;
  fStack_2b4 = fVar54 * fStack_2b4;
  fStack_2b0 = fVar55 * fStack_2b0;
  fStack_2ac = fVar56 * fStack_2ac;
  fStack_2a8 = fVar57 * fStack_2a8;
  fStack_2a4 = fVar58 * fStack_2a4;
  local_2a0 = auVar112._0_4_;
  fStack_29c = auVar112._4_4_;
  fStack_298 = auVar112._8_4_;
  fStack_294 = auVar112._12_4_;
  fStack_290 = auVar112._16_4_;
  fStack_28c = auVar112._20_4_;
  fStack_288 = auVar112._24_4_;
  fStack_284 = auVar112._28_4_;
  fVar47 = fVar47 * local_2a0;
  fVar52 = fVar52 * fStack_29c;
  fVar53 = fVar53 * fStack_298;
  fVar54 = fVar54 * fStack_294;
  fVar55 = fVar55 * fStack_290;
  fVar56 = fVar56 * fStack_28c;
  fVar57 = fVar57 * fStack_288;
  fVar58 = fVar58 * fStack_284;
  auVar114._0_4_ = fVar4 * local_2e0 + auVar33._0_4_;
  auVar114._4_4_ = fVar3 * fStack_2dc + auVar33._4_4_;
  auVar114._8_4_ = fVar7 * fStack_2d8 + auVar33._8_4_;
  auVar114._12_4_ = fVar8 * fStack_2d4 + auVar33._12_4_;
  auVar116._16_4_ = fVar9 * fStack_2d0 + auVar33._16_4_;
  auVar116._0_16_ = auVar114;
  auVar116._20_4_ = fVar10 * fStack_2cc + auVar33._20_4_;
  auVar116._24_4_ = fVar11 * fStack_2c8 + auVar33._24_4_;
  auVar116._28_4_ = fVar12 * fStack_2c4 + auVar33._28_4_;
  cVar17 = (char)uVar15;
  iVar83 = auVar117._0_4_;
  auVar34 = auVar117._16_16_;
  auVar61 = auVar91._0_16_;
  auVar84 = auVar91._16_16_;
  auVar48 = auVar121._0_16_;
  auVar60 = auVar121._16_16_;
  auVar85 = auVar116._16_16_;
  iVar25 = auVar117._4_4_;
  iVar22 = auVar117._8_4_;
  iVar23 = auVar117._12_4_;
  local_320 = auVar87._0_4_;
  fStack_31c = auVar87._4_4_;
  fStack_318 = auVar87._8_4_;
  fStack_314 = auVar87._12_4_;
  fStack_310 = auVar87._16_4_;
  fStack_30c = auVar87._20_4_;
  fStack_308 = auVar87._24_4_;
  fStack_304 = auVar87._28_4_;
  local_360 = auVar75._0_4_;
  fStack_35c = auVar75._4_4_;
  fStack_358 = auVar75._8_4_;
  fStack_354 = auVar75._12_4_;
  fStack_350 = auVar75._16_4_;
  fStack_34c = auVar75._20_4_;
  fStack_348 = auVar75._24_4_;
  fStack_344 = auVar75._28_4_;
  local_340 = auVar32._0_4_;
  fStack_33c = auVar32._4_4_;
  fStack_338 = auVar32._8_4_;
  fStack_334 = auVar32._12_4_;
  fStack_330 = auVar32._16_4_;
  fStack_32c = auVar32._20_4_;
  fStack_328 = auVar32._24_4_;
  fStack_324 = auVar32._28_4_;
  local_300 = auVar49._0_4_;
  fStack_2fc = auVar49._4_4_;
  fStack_2f8 = auVar49._8_4_;
  fStack_2f4 = auVar49._12_4_;
  fStack_2f0 = auVar49._16_4_;
  fStack_2ec = auVar49._20_4_;
  fStack_2e8 = auVar49._24_4_;
  fStack_2e4 = auVar49._28_4_;
  local_380 = auVar62._0_4_;
  fStack_37c = auVar62._4_4_;
  fStack_378 = auVar62._8_4_;
  fStack_374 = auVar62._12_4_;
  fStack_370 = auVar62._16_4_;
  fStack_36c = auVar62._20_4_;
  fStack_368 = auVar62._24_4_;
  fStack_364 = auVar62._28_4_;
  iVar36 = auVar117._16_4_;
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + iVar83) = auVar114._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar114,1);
    *(undefined4 *)(param_1 + iVar25) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar114,2);
    *(undefined4 *)(param_1 + iVar22) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar114,3);
    *(undefined4 *)(param_1 + iVar23) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + iVar36) = auVar116._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar34,1);
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + iVar24) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar34,2);
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + iVar24) = uVar6;
  }
  if (cVar17 < '\0') {
    iVar24 = vextractps_avx(auVar34,3);
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + iVar24) = uVar6;
    auVar117._0_4_ = fVar4 * local_2c0 + auVar89._0_4_;
    auVar117._4_4_ = fVar3 * fStack_2bc + auVar89._4_4_;
    auVar117._8_4_ = fVar7 * fStack_2b8 + auVar89._8_4_;
    auVar117._12_4_ = fVar8 * fStack_2b4 + auVar89._12_4_;
    auVar117._16_4_ = fVar9 * fStack_2b0 + auVar89._16_4_;
    auVar117._20_4_ = fVar10 * fStack_2ac + auVar89._20_4_;
    auVar117._24_4_ = fVar11 * fStack_2a8 + auVar89._24_4_;
    auVar117._28_4_ = fVar12 * fStack_2a4 + auVar89._28_4_;
  }
  else {
    auVar117._0_4_ = fVar4 * local_2c0 + auVar89._0_4_;
    auVar117._4_4_ = fVar3 * fStack_2bc + auVar89._4_4_;
    auVar117._8_4_ = fVar7 * fStack_2b8 + auVar89._8_4_;
    auVar117._12_4_ = fVar8 * fStack_2b4 + auVar89._12_4_;
    auVar117._16_4_ = fVar9 * fStack_2b0 + auVar89._16_4_;
    auVar117._20_4_ = fVar10 * fStack_2ac + auVar89._20_4_;
    auVar117._24_4_ = fVar11 * fStack_2a8 + auVar89._24_4_;
    auVar117._28_4_ = fVar12 * fStack_2a4 + auVar89._28_4_;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar83) = auVar117._0_4_;
  }
  auVar85 = auVar117._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar36) = auVar117._16_4_;
  }
  auVar85 = auVar117._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar34,1);
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar34,2);
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar6;
  }
  if (cVar17 < '\0') {
    iVar24 = vextractps_avx(auVar34,3);
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar6;
    auVar121._0_4_ = fVar4 * fVar47 + local_360;
    auVar121._4_4_ = fVar3 * fVar52 + fStack_35c;
    auVar121._8_4_ = fVar7 * fVar53 + fStack_358;
    auVar121._12_4_ = fVar8 * fVar54 + fStack_354;
    auVar121._16_4_ = fVar9 * fVar55 + fStack_350;
    auVar121._20_4_ = fVar10 * fVar56 + fStack_34c;
    auVar121._24_4_ = fVar11 * fVar57 + fStack_348;
    auVar121._28_4_ = fVar12 * fVar58 + fStack_344;
  }
  else {
    auVar121._0_4_ = fVar4 * fVar47 + local_360;
    auVar121._4_4_ = fVar3 * fVar52 + fStack_35c;
    auVar121._8_4_ = fVar7 * fVar53 + fStack_358;
    auVar121._12_4_ = fVar8 * fVar54 + fStack_354;
    auVar121._16_4_ = fVar9 * fVar55 + fStack_350;
    auVar121._20_4_ = fVar10 * fVar56 + fStack_34c;
    auVar121._24_4_ = fVar11 * fVar57 + fStack_348;
    auVar121._28_4_ = fVar12 * fVar58 + fStack_344;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar83) = auVar121._0_4_;
  }
  auVar85 = auVar121._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar36) = auVar121._16_4_;
  }
  auVar85 = auVar121._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar34,1);
    uVar6 = vextractps_avx(auVar85,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar34,2);
    uVar6 = vextractps_avx(auVar85,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar6;
  }
  if (cVar17 < '\0') {
    iVar24 = vextractps_avx(auVar34,3);
    uVar6 = vextractps_avx(auVar85,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar6;
  }
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar83) = fVar4;
  }
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar48,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar48,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar48,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar36) = fVar9;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar25 = vextractps_avx(auVar34,1);
    uVar6 = vextractps_avx(auVar60,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar25 = vextractps_avx(auVar34,2);
    uVar6 = vextractps_avx(auVar60,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar6;
  }
  if (cVar17 < '\0') {
    iVar25 = vextractps_avx(auVar34,3);
    uVar6 = vextractps_avx(auVar60,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar6;
    auVar92._0_4_ = -(fVar111 * local_2e0) + local_340;
    auVar92._4_4_ = -(fVar93 * fStack_2dc) + fStack_33c;
    auVar92._8_4_ = -(fVar97 * fStack_2d8) + fStack_338;
    auVar92._12_4_ = -(fVar99 * fStack_2d4) + fStack_334;
    auVar92._16_4_ = -(fVar101 * fStack_2d0) + fStack_330;
    auVar92._20_4_ = -(fVar103 * fStack_2cc) + fStack_32c;
    auVar92._24_4_ = -(fVar105 * fStack_2c8) + fStack_328;
    auVar92._28_4_ = -(fVar107 * fStack_2c4) + fStack_324;
  }
  else {
    auVar92._0_4_ = -(fVar111 * local_2e0) + local_340;
    auVar92._4_4_ = -(fVar93 * fStack_2dc) + fStack_33c;
    auVar92._8_4_ = -(fVar97 * fStack_2d8) + fStack_338;
    auVar92._12_4_ = -(fVar99 * fStack_2d4) + fStack_334;
    auVar92._16_4_ = -(fVar101 * fStack_2d0) + fStack_330;
    auVar92._20_4_ = -(fVar103 * fStack_2cc) + fStack_32c;
    auVar92._24_4_ = -(fVar105 * fStack_2c8) + fStack_328;
    auVar92._28_4_ = -(fVar107 * fStack_2c4) + fStack_324;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + (int)local_320) = auVar92._0_4_;
  }
  auVar34 = auVar92._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + (int)fStack_31c) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + (int)fStack_318) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + (int)fStack_314) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_310) = auVar92._16_4_;
  }
  auVar34 = auVar92._16_16_;
  if ((uVar15 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + (int)fStack_30c) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + (int)fStack_308) = uVar6;
  }
  if (cVar17 < '\0') {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + (int)fStack_304) = uVar6;
    auVar73._0_4_ = -(fVar111 * local_2c0) + local_300;
    auVar73._4_4_ = -(fVar93 * fStack_2bc) + fStack_2fc;
    auVar73._8_4_ = -(fVar97 * fStack_2b8) + fStack_2f8;
    auVar73._12_4_ = -(fVar99 * fStack_2b4) + fStack_2f4;
    auVar73._16_4_ = -(fVar101 * fStack_2b0) + fStack_2f0;
    auVar73._20_4_ = -(fVar103 * fStack_2ac) + fStack_2ec;
    auVar73._24_4_ = -(fVar105 * fStack_2a8) + fStack_2e8;
    auVar73._28_4_ = -(fVar107 * fStack_2a4) + fStack_2e4;
  }
  else {
    auVar73._0_4_ = -(fVar111 * local_2c0) + local_300;
    auVar73._4_4_ = -(fVar93 * fStack_2bc) + fStack_2fc;
    auVar73._8_4_ = -(fVar97 * fStack_2b8) + fStack_2f8;
    auVar73._12_4_ = -(fVar99 * fStack_2b4) + fStack_2f4;
    auVar73._16_4_ = -(fVar101 * fStack_2b0) + fStack_2f0;
    auVar73._20_4_ = -(fVar103 * fStack_2ac) + fStack_2ec;
    auVar73._24_4_ = -(fVar105 * fStack_2a8) + fStack_2e8;
    auVar73._28_4_ = -(fVar107 * fStack_2a4) + fStack_2e4;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_320) = auVar73._0_4_;
  }
  auVar34 = auVar73._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_31c) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_318) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_314) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_310) = auVar73._16_4_;
  }
  auVar34 = auVar73._16_16_;
  if ((uVar15 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_30c) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_308) = uVar6;
  }
  if (cVar17 < '\0') {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_304) = uVar6;
    auVar51._0_4_ = -(fVar111 * fVar47) + local_380;
    auVar51._4_4_ = -(fVar93 * fVar52) + fStack_37c;
    auVar51._8_4_ = -(fVar97 * fVar53) + fStack_378;
    auVar51._12_4_ = -(fVar99 * fVar54) + fStack_374;
    auVar51._16_4_ = -(fVar101 * fVar55) + fStack_370;
    auVar51._20_4_ = -(fVar103 * fVar56) + fStack_36c;
    auVar51._24_4_ = -(fVar105 * fVar57) + fStack_368;
    auVar51._28_4_ = -(fVar107 * fVar58) + fStack_364;
  }
  else {
    auVar51._0_4_ = -(fVar111 * fVar47) + local_380;
    auVar51._4_4_ = -(fVar93 * fVar52) + fStack_37c;
    auVar51._8_4_ = -(fVar97 * fVar53) + fStack_378;
    auVar51._12_4_ = -(fVar99 * fVar54) + fStack_374;
    auVar51._16_4_ = -(fVar101 * fVar55) + fStack_370;
    auVar51._20_4_ = -(fVar103 * fVar56) + fStack_36c;
    auVar51._24_4_ = -(fVar105 * fVar57) + fStack_368;
    auVar51._28_4_ = -(fVar107 * fVar58) + fStack_364;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_320) = auVar51._0_4_;
  }
  auVar34 = auVar51._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_31c) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_318) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_314) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_310) = auVar51._16_4_;
  }
  auVar34 = auVar51._16_16_;
  if ((uVar15 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar34,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_30c) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar34,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_308) = uVar6;
  }
  if (cVar17 < '\0') {
    uVar6 = vextractps_avx(auVar34,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_304) = uVar6;
  }
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_320) = fVar111;
  }
  if ((uVar15 & 2) != 0) {
    uVar6 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_31c) = uVar6;
  }
  if ((uVar15 & 4) != 0) {
    uVar6 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_318) = uVar6;
  }
  if ((uVar15 & 8) != 0) {
    uVar6 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_314) = uVar6;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_310) = fVar101;
  }
  if ((uVar15 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_30c) = uVar6;
  }
  if ((uVar15 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_308) = uVar6;
  }
  if (cVar17 < '\0') {
    uVar6 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_304) = uVar6;
  }
  return;
}

// ApplyXPBDEmbeddedSpringDampingConstraints_avx2 @ 14089fa30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedSpringDampingConstraints_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,byte param_7,float *param_8,longlong param_9,
               byte param_10,float *param_11,longlong param_12,byte param_13,float *param_14,
               longlong param_15,uint param_16)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar13;
  int iVar14;
  longlong lVar15;
  char cVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar37 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  float fVar41;
  int iVar42;
  float fVar52;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 in_ZMM4 [64];
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  float fVar62;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar63 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
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
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [32];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  undefined1 auVar127 [16];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
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
  float local_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float local_4a0;
  float fStack_49c;
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
  float local_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  int local_3a0;
  int iStack_39c;
  int iStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  int iStack_370;
  int iStack_36c;
  int iStack_368;
  int iStack_364;
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
  int iVar12;
  undefined1 auVar103 [32];
  
  uVar10 = __real_0000000c;
  iVar14 = __real_00000008;
  uVar9 = __real_00000004;
  fVar80 = __real_3f800000;
  uVar8 = __real_38d1b717;
  uVar4 = __real_322bcc77;
  uVar18 = param_16 + 7;
  if (-1 < (int)param_16) {
    uVar18 = param_16;
  }
  if ((int)(uVar18 & 0xfffffff8) < 1) {
    uVar22 = 0;
  }
  else {
    uVar22 = 0;
    uVar25 = 0;
    do {
      uVar20 = uVar25 & 0xffffffff;
      fStack_4e4 = *param_8;
      local_500._0_4_ = fStack_4e4;
      local_500._4_4_ = fStack_4e4;
      fStack_4f8 = fStack_4e4;
      fStack_4f4 = fStack_4e4;
      fStack_4f0 = fStack_4e4;
      fStack_4ec = fStack_4e4;
      fStack_4e8 = fStack_4e4;
      if ((param_7 & 1) != 0) {
        fVar125 = param_8[1];
        pfVar1 = (float *)(param_9 + uVar20);
        local_500._0_4_ = fVar125 * *pfVar1 + fStack_4e4;
        local_500._4_4_ = fVar125 * pfVar1[1] + fStack_4e4;
        fStack_4f8 = fVar125 * pfVar1[2] + fStack_4e4;
        fStack_4f4 = fVar125 * pfVar1[3] + fStack_4e4;
        fStack_4f0 = fVar125 * pfVar1[4] + fStack_4e4;
        fStack_4ec = fVar125 * pfVar1[5] + fStack_4e4;
        fStack_4e8 = fVar125 * pfVar1[6] + fStack_4e4;
        fStack_4e4 = fVar125 * pfVar1[7] + fStack_4e4;
      }
      fStack_4c4 = *param_11;
      local_4e0._0_4_ = fStack_4c4;
      local_4e0._4_4_ = fStack_4c4;
      fStack_4d8 = fStack_4c4;
      fStack_4d4 = fStack_4c4;
      fStack_4d0 = fStack_4c4;
      fStack_4cc = fStack_4c4;
      fStack_4c8 = fStack_4c4;
      if ((param_10 & 1) != 0) {
        fVar125 = param_11[1];
        pfVar1 = (float *)(param_12 + uVar20);
        local_4e0._0_4_ = fVar125 * *pfVar1 + fStack_4c4;
        local_4e0._4_4_ = fVar125 * pfVar1[1] + fStack_4c4;
        fStack_4d8 = fVar125 * pfVar1[2] + fStack_4c4;
        fStack_4d4 = fVar125 * pfVar1[3] + fStack_4c4;
        fStack_4d0 = fVar125 * pfVar1[4] + fStack_4c4;
        fStack_4cc = fVar125 * pfVar1[5] + fStack_4c4;
        fStack_4c8 = fVar125 * pfVar1[6] + fStack_4c4;
        fStack_4c4 = fVar125 * pfVar1[7] + fStack_4c4;
      }
      auVar40 = *(undefined1 (*) [32])(param_3 + uVar25 * 2);
      auVar32 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar25 * 2);
      auVar29 = vshufps_avx(auVar40,auVar32,0x88);
      auVar31 = vpermpd_avx2(auVar29,0xd8);
      auVar64 = vpslld_avx2(auVar31,4);
      auVar44._4_4_ = uVar9;
      auVar44._0_4_ = uVar9;
      auVar44._8_4_ = uVar9;
      auVar44._12_4_ = uVar9;
      auVar44._16_4_ = uVar9;
      auVar44._20_4_ = uVar9;
      auVar44._24_4_ = uVar9;
      auVar44._28_4_ = uVar9;
      vpor_avx2(auVar64,auVar44);
      auVar29 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar102 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar29);
      auVar43._4_4_ = iVar14;
      auVar43._0_4_ = iVar14;
      auVar43._8_4_ = iVar14;
      auVar43._12_4_ = iVar14;
      auVar43._16_4_ = iVar14;
      auVar43._20_4_ = iVar14;
      auVar43._24_4_ = iVar14;
      auVar43._28_4_ = iVar14;
      vpor_avx2(auVar64,auVar43);
      auVar29 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar128 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar29);
      auVar83._4_4_ = uVar10;
      auVar83._0_4_ = uVar10;
      auVar83._8_4_ = uVar10;
      auVar83._12_4_ = uVar10;
      auVar83._16_4_ = uVar10;
      auVar83._20_4_ = uVar10;
      auVar83._24_4_ = uVar10;
      auVar83._28_4_ = uVar10;
      auVar30 = vpor_avx2(auVar83,auVar64);
      auVar29 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar29);
      auVar40 = vshufps_avx(auVar40,auVar32,0xdd);
      auVar32 = vpermpd_avx2(auVar40,0xd8);
      auVar94 = vpslld_avx2(auVar32,4);
      vpor_avx2(auVar94,auVar44);
      auVar40 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar92 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
      vpor_avx2(auVar94,auVar43);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar88 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      vpor_avx2(auVar94,auVar83);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar43 = vgatherdps(ZEXT832(0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar44 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      vpmulld_avx2(auVar31,auVar83);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar45 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar30 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar32 = vpmulld_avx2(auVar32,auVar83);
      auVar40 = vpcmpeqd_avx2(auVar45,auVar45);
      auVar31 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar40._0_4_ = auVar32._0_4_ + iVar14;
      auVar40._4_4_ = auVar32._4_4_ + iVar14;
      auVar40._8_4_ = auVar32._8_4_ + iVar14;
      auVar40._12_4_ = auVar32._12_4_ + iVar14;
      auVar40._16_4_ = auVar32._16_4_ + iVar14;
      auVar40._20_4_ = auVar32._20_4_ + iVar14;
      auVar40._24_4_ = auVar32._24_4_ + iVar14;
      auVar40._28_4_ = auVar32._28_4_ + iVar14;
      auVar32 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar32 = vgatherdps(ZEXT832(0) << 0x20,auVar32);
      auVar40 = vpcmpeqd_avx2(auVar40,auVar40);
      auVar83 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar40 = vgatherdps(ZEXT832(0),auVar40);
      fVar125 = *param_14;
      fVar105 = fVar125;
      fVar107 = fVar125;
      fVar110 = fVar125;
      fVar113 = fVar125;
      fVar116 = fVar125;
      fVar119 = fVar125;
      fVar122 = fVar125;
      if ((param_13 & 1) != 0) {
        fVar108 = param_14[1];
        pfVar1 = (float *)(param_15 + uVar20);
        fVar105 = fVar108 * *pfVar1 + fVar125;
        fVar107 = fVar108 * pfVar1[1] + fVar125;
        fVar110 = fVar108 * pfVar1[2] + fVar125;
        fVar113 = fVar108 * pfVar1[3] + fVar125;
        fVar116 = fVar108 * pfVar1[4] + fVar125;
        fVar119 = fVar108 * pfVar1[5] + fVar125;
        fVar122 = fVar108 * pfVar1[6] + fVar125;
        fVar125 = fVar108 * pfVar1[7] + fVar125;
      }
      auVar86 = vsubps_avx(auVar83,auVar40);
      auVar6 = vsubps_avx(auVar102,auVar92);
      auVar7 = vsubps_avx(auVar128,auVar88);
      auVar97._0_4_ =
           auVar7._0_4_ * auVar7._0_4_ + auVar86._0_4_ * auVar86._0_4_ + auVar6._0_4_ * auVar6._0_4_
      ;
      auVar97._4_4_ =
           auVar7._4_4_ * auVar7._4_4_ + auVar86._4_4_ * auVar86._4_4_ + auVar6._4_4_ * auVar6._4_4_
      ;
      auVar97._8_4_ =
           auVar7._8_4_ * auVar7._8_4_ + auVar86._8_4_ * auVar86._8_4_ + auVar6._8_4_ * auVar6._8_4_
      ;
      auVar97._12_4_ =
           auVar7._12_4_ * auVar7._12_4_ +
           auVar86._12_4_ * auVar86._12_4_ + auVar6._12_4_ * auVar6._12_4_;
      auVar97._16_4_ =
           auVar7._16_4_ * auVar7._16_4_ +
           auVar86._16_4_ * auVar86._16_4_ + auVar6._16_4_ * auVar6._16_4_;
      auVar97._20_4_ =
           auVar7._20_4_ * auVar7._20_4_ +
           auVar86._20_4_ * auVar86._20_4_ + auVar6._20_4_ * auVar6._20_4_;
      auVar97._24_4_ =
           auVar7._24_4_ * auVar7._24_4_ +
           auVar86._24_4_ * auVar86._24_4_ + auVar6._24_4_ * auVar6._24_4_;
      auVar97._28_4_ =
           auVar7._28_4_ * auVar7._28_4_ +
           auVar86._28_4_ * auVar86._28_4_ + auVar6._28_4_ * auVar6._28_4_;
      auVar33 = vsqrtps_avx(auVar97);
      auVar95._4_4_ = uVar8;
      auVar95._0_4_ = uVar8;
      auVar95._8_4_ = uVar8;
      auVar95._12_4_ = uVar8;
      auVar95._16_4_ = uVar8;
      auVar95._20_4_ = uVar8;
      auVar95._24_4_ = uVar8;
      auVar95._28_4_ = uVar8;
      auVar129 = vcmpps_avx(auVar97,auVar95,1);
      auVar95 = *(undefined1 (*) [32])(param_4 + uVar20);
      uVar53 = auVar129._0_4_;
      auVar85._0_4_ = ~uVar53 & auVar33._0_4_;
      uVar54 = auVar129._4_4_;
      auVar85._4_4_ = ~uVar54 & auVar33._4_4_;
      uVar55 = auVar129._8_4_;
      auVar85._8_4_ = ~uVar55 & auVar33._8_4_;
      uVar56 = auVar129._12_4_;
      auVar85._12_4_ = ~uVar56 & auVar33._12_4_;
      uVar57 = auVar129._16_4_;
      auVar85._16_4_ = ~uVar57 & auVar33._16_4_;
      uVar58 = auVar129._20_4_;
      auVar85._20_4_ = ~uVar58 & auVar33._20_4_;
      uVar59 = auVar129._24_4_;
      auVar85._24_4_ = ~uVar59 & auVar33._24_4_;
      uVar60 = auVar129._28_4_;
      auVar85._28_4_ = ~uVar60 & auVar33._28_4_;
      auVar97 = vsubps_avx(auVar85,auVar95);
      auVar97 = vcmpps_avx(ZEXT832(0) << 0x20,auVar97,2);
      auVar97 = vblendvps_avx(_local_4e0,_local_500,auVar97);
      auVar86 = vdivps_avx(auVar86,auVar33);
      auVar6 = vdivps_avx(auVar6,auVar33);
      auVar33 = vdivps_avx(auVar7,auVar33);
      auVar7._4_4_ = fVar80;
      auVar7._0_4_ = fVar80;
      auVar7._8_4_ = fVar80;
      auVar7._12_4_ = fVar80;
      auVar7._16_4_ = fVar80;
      auVar7._20_4_ = fVar80;
      auVar7._24_4_ = fVar80;
      auVar7._28_4_ = fVar80;
      auVar129 = vblendvps_avx(auVar86,auVar7,auVar129);
      fVar41 = (float)(~uVar53 & auVar6._0_4_);
      fVar46 = (float)(~uVar54 & auVar6._4_4_);
      fVar47 = (float)(~uVar55 & auVar6._8_4_);
      fVar48 = (float)(~uVar56 & auVar6._12_4_);
      fVar49 = (float)(~uVar57 & auVar6._16_4_);
      fVar50 = (float)(~uVar58 & auVar6._20_4_);
      fVar51 = (float)(~uVar59 & auVar6._24_4_);
      fVar52 = (float)(~uVar60 & auVar6._28_4_);
      fVar61 = (float)(~uVar53 & auVar33._0_4_);
      fVar66 = (float)(~uVar54 & auVar33._4_4_);
      fVar68 = (float)(~uVar55 & auVar33._8_4_);
      fVar70 = (float)(~uVar56 & auVar33._12_4_);
      fVar72 = (float)(~uVar57 & auVar33._16_4_);
      fVar74 = (float)(~uVar58 & auVar33._20_4_);
      fVar76 = (float)(~uVar59 & auVar33._24_4_);
      fVar78 = (float)(~uVar60 & auVar33._28_4_);
      auVar86 = vdivps_avx(auVar7,auVar95);
      auVar6._4_4_ = uVar4;
      auVar6._0_4_ = uVar4;
      auVar6._8_4_ = uVar4;
      auVar6._12_4_ = uVar4;
      auVar6._16_4_ = uVar4;
      auVar6._20_4_ = uVar4;
      auVar6._24_4_ = uVar4;
      auVar6._28_4_ = uVar4;
      auVar95 = vcmpps_avx(auVar95,auVar6,1);
      auVar95 = vblendvps_avx(auVar86,auVar7,auVar95);
      fVar108 = auVar43._0_4_;
      fVar104 = auVar87._0_4_;
      auVar86._0_4_ = fVar104 + fVar108;
      fVar111 = auVar43._4_4_;
      fVar106 = auVar87._4_4_;
      auVar86._4_4_ = fVar106 + fVar111;
      fVar114 = auVar43._8_4_;
      fVar109 = auVar87._8_4_;
      auVar86._8_4_ = fVar109 + fVar114;
      fVar117 = auVar43._12_4_;
      fVar112 = auVar87._12_4_;
      auVar86._12_4_ = fVar112 + fVar117;
      fVar120 = auVar43._16_4_;
      fVar115 = auVar87._16_4_;
      auVar86._16_4_ = fVar115 + fVar120;
      fVar123 = auVar43._20_4_;
      fVar118 = auVar87._20_4_;
      auVar86._20_4_ = fVar118 + fVar123;
      fVar126 = auVar43._24_4_;
      fVar121 = auVar87._24_4_;
      auVar86._24_4_ = fVar121 + fVar126;
      fVar5 = auVar43._28_4_;
      fVar124 = auVar87._28_4_;
      auVar86._28_4_ = fVar124 + fVar5;
      auVar97 = vdivps_avx(auVar97,auVar86);
      auVar97 = vsqrtps_avx(auVar97);
      auVar44 = vsubps_avx(auVar83,auVar44);
      auVar44 = vsubps_avx(auVar44,auVar40);
      local_4a0 = auVar30._0_4_;
      fStack_49c = auVar30._4_4_;
      fStack_498 = auVar30._8_4_;
      fStack_494 = auVar30._12_4_;
      fStack_490 = auVar30._16_4_;
      fStack_48c = auVar30._20_4_;
      fStack_488 = auVar30._24_4_;
      fStack_484 = auVar30._28_4_;
      auVar30 = vsubps_avx(auVar102,auVar45);
      auVar30 = vsubps_avx(auVar30,auVar92);
      local_1e0 = auVar31._0_4_;
      fStack_1dc = auVar31._4_4_;
      fStack_1d8 = auVar31._8_4_;
      fStack_1d4 = auVar31._12_4_;
      fStack_1d0 = auVar31._16_4_;
      fStack_1cc = auVar31._20_4_;
      fStack_1c8 = auVar31._24_4_;
      fStack_1c4 = auVar31._28_4_;
      auVar29 = vsubps_avx(auVar128,auVar29);
      auVar29 = vsubps_avx(auVar29,auVar88);
      local_200 = auVar32._0_4_;
      fStack_1fc = auVar32._4_4_;
      fStack_1f8 = auVar32._8_4_;
      fStack_1f4 = auVar32._12_4_;
      fStack_1f0 = auVar32._16_4_;
      fStack_1ec = auVar32._20_4_;
      fStack_1e8 = auVar32._24_4_;
      fStack_1e4 = auVar32._28_4_;
      fVar105 = auVar95._0_4_ * auVar97._0_4_ * (fVar105 + fVar105) * param_6;
      fVar107 = auVar95._4_4_ * auVar97._4_4_ * (fVar107 + fVar107) * param_6;
      fVar110 = auVar95._8_4_ * auVar97._8_4_ * (fVar110 + fVar110) * param_6;
      fVar113 = auVar95._12_4_ * auVar97._12_4_ * (fVar113 + fVar113) * param_6;
      fVar116 = auVar95._16_4_ * auVar97._16_4_ * (fVar116 + fVar116) * param_6;
      fVar119 = auVar95._20_4_ * auVar97._20_4_ * (fVar119 + fVar119) * param_6;
      fVar122 = auVar95._24_4_ * auVar97._24_4_ * (fVar122 + fVar122) * param_6;
      fVar125 = auVar95._28_4_ * auVar97._28_4_ * (fVar125 + fVar125) * param_6;
      auVar32 = *(undefined1 (*) [32])(param_5 + uVar20);
      in_ZMM4 = ZEXT3264(auVar32);
      auVar31._0_4_ =
           -(fVar105 *
            (fVar61 * (auVar29._0_4_ + local_200) +
            auVar129._0_4_ * (auVar44._0_4_ + local_4a0) + fVar41 * (auVar30._0_4_ + local_1e0))) -
           auVar32._0_4_;
      auVar31._4_4_ =
           -(fVar107 *
            (fVar66 * (auVar29._4_4_ + fStack_1fc) +
            auVar129._4_4_ * (auVar44._4_4_ + fStack_49c) + fVar46 * (auVar30._4_4_ + fStack_1dc)))
           - auVar32._4_4_;
      auVar31._8_4_ =
           -(fVar110 *
            (fVar68 * (auVar29._8_4_ + fStack_1f8) +
            auVar129._8_4_ * (auVar44._8_4_ + fStack_498) + fVar47 * (auVar30._8_4_ + fStack_1d8)))
           - auVar32._8_4_;
      auVar31._12_4_ =
           -(fVar113 *
            (fVar70 * (auVar29._12_4_ + fStack_1f4) +
            auVar129._12_4_ * (auVar44._12_4_ + fStack_494) + fVar48 * (auVar30._12_4_ + fStack_1d4)
            )) - auVar32._12_4_;
      auVar31._16_4_ =
           -(fVar116 *
            (fVar72 * (auVar29._16_4_ + fStack_1f0) +
            auVar129._16_4_ * (auVar44._16_4_ + fStack_490) + fVar49 * (auVar30._16_4_ + fStack_1d0)
            )) - auVar32._16_4_;
      auVar31._20_4_ =
           -(fVar119 *
            (fVar74 * (auVar29._20_4_ + fStack_1ec) +
            auVar129._20_4_ * (auVar44._20_4_ + fStack_48c) + fVar50 * (auVar30._20_4_ + fStack_1cc)
            )) - auVar32._20_4_;
      auVar31._24_4_ =
           -(fVar122 *
            (fVar76 * (auVar29._24_4_ + fStack_1e8) +
            auVar129._24_4_ * (auVar44._24_4_ + fStack_488) + fVar51 * (auVar30._24_4_ + fStack_1c8)
            )) - auVar32._24_4_;
      auVar31._28_4_ =
           -(fVar125 *
            (fVar78 * (auVar29._28_4_ + fStack_1e4) +
            auVar129._28_4_ * (auVar44._28_4_ + fStack_484) + fVar52 * (auVar30._28_4_ + fStack_1c4)
            )) - auVar32._28_4_;
      auVar29._0_4_ = auVar86._0_4_ * fVar105 + fVar80;
      auVar29._4_4_ = auVar86._4_4_ * fVar107 + fVar80;
      auVar29._8_4_ = auVar86._8_4_ * fVar110 + fVar80;
      auVar29._12_4_ = auVar86._12_4_ * fVar113 + fVar80;
      auVar29._16_4_ = auVar86._16_4_ * fVar116 + fVar80;
      auVar29._20_4_ = auVar86._20_4_ * fVar119 + fVar80;
      auVar29._24_4_ = auVar86._24_4_ * fVar122 + fVar80;
      auVar29._28_4_ = auVar86._28_4_ * fVar125 + fVar80;
      auVar29 = vdivps_avx(auVar31,auVar29);
      local_3e0 = auVar64._0_4_;
      fStack_3dc = auVar64._4_4_;
      fStack_3d8 = auVar64._8_4_;
      fStack_3d4 = auVar64._12_4_;
      fStack_3d0 = auVar64._16_4_;
      fStack_3cc = auVar64._20_4_;
      fStack_3c8 = auVar64._24_4_;
      fStack_3c4 = auVar64._28_4_;
      fVar125 = auVar29._0_4_;
      fVar62 = auVar129._0_4_ * fVar125;
      fVar105 = auVar29._4_4_;
      fVar67 = auVar129._4_4_ * fVar105;
      fVar107 = auVar29._8_4_;
      fVar69 = auVar129._8_4_ * fVar107;
      fVar110 = auVar29._12_4_;
      fVar71 = auVar129._12_4_ * fVar110;
      fVar113 = auVar29._16_4_;
      fVar73 = auVar129._16_4_ * fVar113;
      fVar116 = auVar29._20_4_;
      fVar75 = auVar129._20_4_ * fVar116;
      fVar119 = auVar29._24_4_;
      fVar77 = auVar129._24_4_ * fVar119;
      fVar122 = auVar29._28_4_;
      fVar79 = auVar129._28_4_ * fVar122;
      auVar81._0_4_ = fVar104 * fVar62 + auVar83._0_4_;
      auVar81._4_4_ = fVar106 * fVar67 + auVar83._4_4_;
      auVar81._8_4_ = fVar109 * fVar69 + auVar83._8_4_;
      auVar81._12_4_ = fVar112 * fVar71 + auVar83._12_4_;
      auVar64._16_4_ = fVar115 * fVar73 + auVar83._16_4_;
      auVar64._0_16_ = auVar81;
      auVar64._20_4_ = fVar118 * fVar75 + auVar83._20_4_;
      auVar64._24_4_ = fVar121 * fVar77 + auVar83._24_4_;
      auVar64._28_4_ = fVar124 * fVar79 + auVar83._28_4_;
      lVar27 = (longlong)(int)local_3e0;
      *(float *)(param_1 + lVar27) = auVar81._0_4_;
      lVar15 = (longlong)(int)fStack_3dc;
      uVar3 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + lVar15) = uVar3;
      lVar23 = (longlong)(int)fStack_3d8;
      uVar3 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + lVar23) = uVar3;
      lVar24 = (longlong)(int)fStack_3d4;
      uVar3 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + lVar24) = uVar3;
      lVar17 = (longlong)(int)fStack_3d0;
      auVar37 = auVar64._16_16_;
      *(float *)(param_1 + lVar17) = auVar64._16_4_;
      lVar26 = (longlong)(int)fStack_3cc;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + lVar26) = uVar3;
      lVar19 = (longlong)(int)fStack_3c8;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + lVar19) = uVar3;
      lVar21 = (longlong)(int)fStack_3c4;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + lVar21) = uVar3;
      fVar41 = fVar41 * fVar125;
      fVar46 = fVar46 * fVar105;
      fVar47 = fVar47 * fVar107;
      fVar48 = fVar48 * fVar110;
      fVar49 = fVar49 * fVar113;
      fVar50 = fVar50 * fVar116;
      fVar51 = fVar51 * fVar119;
      fVar52 = fVar52 * fVar122;
      auVar100._0_4_ = fVar104 * fVar41 + auVar102._0_4_;
      auVar100._4_4_ = fVar106 * fVar46 + auVar102._4_4_;
      auVar100._8_4_ = fVar109 * fVar47 + auVar102._8_4_;
      auVar100._12_4_ = fVar112 * fVar48 + auVar102._12_4_;
      auVar129._16_4_ = fVar115 * fVar49 + auVar102._16_4_;
      auVar129._0_16_ = auVar100;
      auVar129._20_4_ = fVar118 * fVar50 + auVar102._20_4_;
      auVar129._24_4_ = fVar121 * fVar51 + auVar102._24_4_;
      auVar129._28_4_ = fVar124 * fVar52 + auVar102._28_4_;
      *(float *)(param_1 + 4 + lVar27) = auVar100._0_4_;
      uVar3 = vextractps_avx(auVar100,1);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar100,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar100,3);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar3;
      auVar37 = auVar129._16_16_;
      *(float *)(param_1 + 4 + lVar17) = auVar129._16_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar3;
      fVar61 = fVar61 * fVar125;
      fVar66 = fVar66 * fVar105;
      fVar68 = fVar68 * fVar107;
      fVar70 = fVar70 * fVar110;
      fVar72 = fVar72 * fVar113;
      fVar74 = fVar74 * fVar116;
      fVar76 = fVar76 * fVar119;
      fVar78 = fVar78 * fVar122;
      auVar127._0_4_ = fVar104 * fVar61 + auVar128._0_4_;
      auVar127._4_4_ = fVar106 * fVar66 + auVar128._4_4_;
      auVar127._8_4_ = fVar109 * fVar68 + auVar128._8_4_;
      auVar127._12_4_ = fVar112 * fVar70 + auVar128._12_4_;
      auVar102._16_4_ = fVar115 * fVar72 + auVar128._16_4_;
      auVar102._0_16_ = auVar127;
      auVar102._20_4_ = fVar118 * fVar74 + auVar128._20_4_;
      auVar102._24_4_ = fVar121 * fVar76 + auVar128._24_4_;
      auVar102._28_4_ = fVar124 * fVar78 + auVar128._28_4_;
      *(float *)(param_1 + 8 + lVar27) = auVar127._0_4_;
      uVar3 = vextractps_avx(auVar127,1);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar127,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar127,3);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar3;
      auVar37 = auVar102._16_16_;
      *(float *)(param_1 + 8 + lVar17) = auVar102._16_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar3;
      *(float *)(param_1 + 0xc + lVar27) = fVar104;
      auVar37 = auVar87._0_16_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar3;
      auVar37 = auVar87._16_16_;
      *(float *)(param_1 + 0xc + lVar17) = fVar115;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar3;
      local_3c0 = auVar40._0_4_;
      auVar63._0_4_ = -(fVar108 * fVar62) + local_3c0;
      fStack_3bc = auVar40._4_4_;
      auVar63._4_4_ = -(fVar111 * fVar67) + fStack_3bc;
      fStack_3b8 = auVar40._8_4_;
      auVar63._8_4_ = -(fVar114 * fVar69) + fStack_3b8;
      fStack_3b4 = auVar40._12_4_;
      auVar63._12_4_ = -(fVar117 * fVar71) + fStack_3b4;
      fStack_3b0 = auVar40._16_4_;
      auVar45._16_4_ = -(fVar120 * fVar73) + fStack_3b0;
      auVar45._0_16_ = auVar63;
      fStack_3ac = auVar40._20_4_;
      auVar45._20_4_ = -(fVar123 * fVar75) + fStack_3ac;
      fStack_3a8 = auVar40._24_4_;
      auVar45._24_4_ = -(fVar126 * fVar77) + fStack_3a8;
      fStack_3a4 = auVar40._28_4_;
      auVar45._28_4_ = -(fVar5 * fVar79) + fStack_3a4;
      local_3a0 = auVar94._0_4_;
      iStack_39c = auVar94._4_4_;
      iStack_398 = auVar94._8_4_;
      iStack_394 = auVar94._12_4_;
      iStack_390 = auVar94._16_4_;
      iStack_38c = auVar94._20_4_;
      iStack_388 = auVar94._24_4_;
      iStack_384 = auVar94._28_4_;
      lVar27 = (longlong)local_3a0;
      *(float *)(param_1 + lVar27) = auVar63._0_4_;
      lVar15 = (longlong)iStack_39c;
      uVar3 = vextractps_avx(auVar63,1);
      *(undefined4 *)(param_1 + lVar15) = uVar3;
      lVar23 = (longlong)iStack_398;
      uVar3 = vextractps_avx(auVar63,2);
      *(undefined4 *)(param_1 + lVar23) = uVar3;
      lVar24 = (longlong)iStack_394;
      uVar3 = vextractps_avx(auVar63,3);
      *(undefined4 *)(param_1 + lVar24) = uVar3;
      lVar17 = (longlong)iStack_390;
      auVar37 = auVar45._16_16_;
      *(float *)(param_1 + lVar17) = auVar45._16_4_;
      lVar26 = (longlong)iStack_38c;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + lVar26) = uVar3;
      lVar19 = (longlong)iStack_388;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + lVar19) = uVar3;
      lVar21 = (longlong)iStack_384;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + lVar21) = uVar3;
      auVar82._0_4_ = -(fVar108 * fVar41) + auVar92._0_4_;
      auVar82._4_4_ = -(fVar111 * fVar46) + auVar92._4_4_;
      auVar82._8_4_ = -(fVar114 * fVar47) + auVar92._8_4_;
      auVar82._12_4_ = -(fVar117 * fVar48) + auVar92._12_4_;
      auVar87._16_4_ = -(fVar120 * fVar49) + auVar92._16_4_;
      auVar87._0_16_ = auVar82;
      auVar87._20_4_ = -(fVar123 * fVar50) + auVar92._20_4_;
      auVar87._24_4_ = -(fVar126 * fVar51) + auVar92._24_4_;
      auVar87._28_4_ = -(fVar5 * fVar52) + auVar92._28_4_;
      *(float *)(param_1 + 4 + lVar27) = auVar82._0_4_;
      uVar3 = vextractps_avx(auVar82,1);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar82,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar82,3);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar3;
      auVar37 = auVar87._16_16_;
      *(float *)(param_1 + 4 + lVar17) = auVar87._16_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar3;
      local_4c0 = auVar88._0_4_;
      auVar37._0_4_ = -(fVar108 * fVar61) + local_4c0;
      fStack_4bc = auVar88._4_4_;
      auVar37._4_4_ = -(fVar111 * fVar66) + fStack_4bc;
      fStack_4b8 = auVar88._8_4_;
      auVar37._8_4_ = -(fVar114 * fVar68) + fStack_4b8;
      fStack_4b4 = auVar88._12_4_;
      auVar37._12_4_ = -(fVar117 * fVar70) + fStack_4b4;
      fStack_4b0 = auVar88._16_4_;
      auVar30._16_4_ = -(fVar120 * fVar72) + fStack_4b0;
      auVar30._0_16_ = auVar37;
      fStack_4ac = auVar88._20_4_;
      auVar30._20_4_ = -(fVar123 * fVar74) + fStack_4ac;
      fStack_4a8 = auVar88._24_4_;
      auVar30._24_4_ = -(fVar126 * fVar76) + fStack_4a8;
      fStack_4a4 = auVar88._28_4_;
      auVar30._28_4_ = -(fVar5 * fVar78) + fStack_4a4;
      *(float *)(param_1 + 8 + lVar27) = auVar37._0_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar3;
      auVar37 = auVar30._16_16_;
      *(float *)(param_1 + 8 + lVar17) = auVar30._16_4_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar3;
      pfVar1 = (float *)(param_5 + uVar20);
      *pfVar1 = auVar32._0_4_ + fVar125;
      pfVar1[1] = auVar32._4_4_ + fVar105;
      pfVar1[2] = auVar32._8_4_ + fVar107;
      pfVar1[3] = auVar32._12_4_ + fVar110;
      pfVar1[4] = auVar32._16_4_ + fVar113;
      pfVar1[5] = auVar32._20_4_ + fVar116;
      pfVar1[6] = auVar32._24_4_ + fVar119;
      pfVar1[7] = auVar32._28_4_ + fVar122;
      *(float *)(param_1 + 0xc + lVar27) = fVar108;
      auVar37 = auVar43._0_16_;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar3;
      auVar37 = auVar43._16_16_;
      *(float *)(param_1 + 0xc + lVar17) = fVar120;
      uVar3 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar3;
      uVar3 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar3;
      uVar3 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar3;
      uVar25 = uVar25 + 0x20;
      uVar22 = uVar22 + 8;
    } while ((int)uVar22 < (int)(uVar18 & 0xfffffff8));
  }
  if ((int)param_16 <= (int)uVar22) {
    return;
  }
  auVar32._4_4_ = uVar22;
  auVar32._0_4_ = uVar22;
  auVar32._8_4_ = uVar22;
  auVar32._12_4_ = uVar22;
  auVar32._16_4_ = uVar22;
  auVar32._20_4_ = uVar22;
  auVar32._24_4_ = uVar22;
  auVar32._28_4_ = uVar22;
  auVar40 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar88._4_4_ = param_16;
  auVar88._0_4_ = param_16;
  auVar88._8_4_ = param_16;
  auVar88._12_4_ = param_16;
  auVar88._16_4_ = param_16;
  auVar88._20_4_ = param_16;
  auVar88._24_4_ = param_16;
  auVar88._28_4_ = param_16;
  auVar40 = vpcmpgtd_avx2(auVar88,auVar40);
  pauVar2 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar22 * 8);
  uVar18 = vmovmskps_avx(auVar40);
  if (uVar18 == 0xff) {
    auVar32 = *pauVar2;
    auVar29 = pauVar2[1];
    auVar30 = vshufps_avx(auVar32,auVar29,0x88);
    auVar30 = vpermpd_avx2(auVar30,0xd8);
    auVar32 = vshufps_avx(auVar32,auVar29,0xdd);
    auVar32 = vpermpd_avx2(auVar32,0xd8);
  }
  else {
    auVar30 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
    auVar32 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar40);
  }
  auVar64 = vpslld_avx2(auVar30,4);
  auVar92._4_4_ = __real_00000004;
  auVar92._0_4_ = __real_00000004;
  auVar92._8_4_ = __real_00000004;
  auVar92._12_4_ = __real_00000004;
  auVar92._16_4_ = __real_00000004;
  auVar92._20_4_ = __real_00000004;
  auVar92._24_4_ = __real_00000004;
  auVar92._28_4_ = __real_00000004;
  auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
  auVar31 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar94._4_4_ = __real_00000008;
  auVar94._0_4_ = __real_00000008;
  auVar94._8_4_ = __real_00000008;
  auVar94._12_4_ = __real_00000008;
  auVar94._16_4_ = __real_00000008;
  auVar94._20_4_ = __real_00000008;
  auVar94._24_4_ = __real_00000008;
  auVar94._28_4_ = __real_00000008;
  auVar83 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar128._4_4_ = __real_0000000c;
  auVar128._0_4_ = __real_0000000c;
  auVar128._8_4_ = __real_0000000c;
  auVar128._12_4_ = __real_0000000c;
  auVar128._16_4_ = __real_0000000c;
  auVar128._20_4_ = __real_0000000c;
  auVar128._24_4_ = __real_0000000c;
  auVar128._28_4_ = __real_0000000c;
  auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar88 = vpslld_avx2(auVar32,4);
  vpor_avx2(auVar88,auVar92);
  auVar44 = vgatherdps(ZEXT832(0),auVar40);
  vpor_avx2(auVar88,auVar94);
  auVar45 = vgatherdps(ZEXT832(0),auVar40);
  vpor_avx2(auVar88,auVar128);
  auVar92 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar43 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar29 = vmaskmovps_avx(auVar40,auVar29);
  auVar31 = vmaskmovps_avx(auVar40,auVar31);
  auVar83 = vmaskmovps_avx(auVar40,auVar83);
  auVar43 = vmaskmovps_avx(auVar40,auVar43);
  auVar44 = vmaskmovps_avx(auVar40,auVar44);
  auVar45 = vmaskmovps_avx(auVar40,auVar45);
  vpmulld_avx2(auVar30,auVar128);
  vpmulld_avx2(auVar32,auVar128);
  lVar15 = (longlong)(int)(uVar22 << 2);
  fStack_4e4 = *param_8;
  local_500._0_4_ = fStack_4e4;
  local_500._4_4_ = fStack_4e4;
  fStack_4f8 = fStack_4e4;
  fStack_4f4 = fStack_4e4;
  fStack_4f0 = fStack_4e4;
  fStack_4ec = fStack_4e4;
  fStack_4e8 = fStack_4e4;
  if ((param_7 & 1) != 0) {
    auVar32 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_9 + lVar15));
    fVar80 = param_8[1];
    local_500._0_4_ = auVar32._0_4_ * fVar80 + fStack_4e4;
    local_500._4_4_ = auVar32._4_4_ * fVar80 + fStack_4e4;
    fStack_4f8 = auVar32._8_4_ * fVar80 + fStack_4e4;
    fStack_4f4 = auVar32._12_4_ * fVar80 + fStack_4e4;
    fStack_4f0 = auVar32._16_4_ * fVar80 + fStack_4e4;
    fStack_4ec = auVar32._20_4_ * fVar80 + fStack_4e4;
    fStack_4e8 = auVar32._24_4_ * fVar80 + fStack_4e4;
    fStack_4e4 = auVar32._28_4_ * fVar80 + fStack_4e4;
  }
  fStack_464 = *param_11;
  local_480._0_4_ = fStack_464;
  local_480._4_4_ = fStack_464;
  fStack_478 = fStack_464;
  fStack_474 = fStack_464;
  fStack_470 = fStack_464;
  fStack_46c = fStack_464;
  fStack_468 = fStack_464;
  if ((param_10 & 1) != 0) {
    auVar32 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_12 + lVar15));
    fVar80 = param_11[1];
    local_480._0_4_ = auVar32._0_4_ * fVar80 + fStack_464;
    local_480._4_4_ = auVar32._4_4_ * fVar80 + fStack_464;
    fStack_478 = auVar32._8_4_ * fVar80 + fStack_464;
    fStack_474 = auVar32._12_4_ * fVar80 + fStack_464;
    fStack_470 = auVar32._16_4_ * fVar80 + fStack_464;
    fStack_46c = auVar32._20_4_ * fVar80 + fStack_464;
    fStack_468 = auVar32._24_4_ * fVar80 + fStack_464;
    fStack_464 = auVar32._28_4_ * fVar80 + fStack_464;
  }
  auVar95 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
  auVar94 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar102 = vgatherdps(ZEXT832(0),auVar40);
  auVar129 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar128 = vgatherdps(ZEXT432(0) << 0x20,auVar40);
  auVar97 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar32 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_4 + lVar15));
  auVar30 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_5 + lVar15));
  fVar80 = *param_14;
  fVar125 = fVar80;
  fVar105 = fVar80;
  fVar107 = fVar80;
  fVar110 = fVar80;
  fVar113 = fVar80;
  fVar116 = fVar80;
  fVar119 = fVar80;
  if ((param_13 & 1) != 0) {
    auVar86 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_15 + lVar15));
    fVar122 = param_14[1];
    fVar125 = auVar86._0_4_ * fVar122 + fVar80;
    fVar105 = auVar86._4_4_ * fVar122 + fVar80;
    fVar107 = auVar86._8_4_ * fVar122 + fVar80;
    fVar110 = auVar86._12_4_ * fVar122 + fVar80;
    fVar113 = auVar86._16_4_ * fVar122 + fVar80;
    fVar116 = auVar86._20_4_ * fVar122 + fVar80;
    fVar119 = auVar86._24_4_ * fVar122 + fVar80;
    fVar80 = auVar86._28_4_ * fVar122 + fVar80;
  }
  auVar33 = vsubps_avx(auVar29,auVar43);
  auVar34 = vsubps_avx(auVar31,auVar44);
  auVar36 = vsubps_avx(auVar83,auVar45);
  auVar98._0_4_ =
       auVar36._0_4_ * auVar36._0_4_ + auVar33._0_4_ * auVar33._0_4_ + auVar34._0_4_ * auVar34._0_4_
  ;
  auVar98._4_4_ =
       auVar36._4_4_ * auVar36._4_4_ + auVar33._4_4_ * auVar33._4_4_ + auVar34._4_4_ * auVar34._4_4_
  ;
  auVar98._8_4_ =
       auVar36._8_4_ * auVar36._8_4_ + auVar33._8_4_ * auVar33._8_4_ + auVar34._8_4_ * auVar34._8_4_
  ;
  auVar98._12_4_ =
       auVar36._12_4_ * auVar36._12_4_ +
       auVar33._12_4_ * auVar33._12_4_ + auVar34._12_4_ * auVar34._12_4_;
  auVar98._16_4_ =
       auVar36._16_4_ * auVar36._16_4_ +
       auVar33._16_4_ * auVar33._16_4_ + auVar34._16_4_ * auVar34._16_4_;
  auVar98._20_4_ =
       auVar36._20_4_ * auVar36._20_4_ +
       auVar33._20_4_ * auVar33._20_4_ + auVar34._20_4_ * auVar34._20_4_;
  auVar98._24_4_ =
       auVar36._24_4_ * auVar36._24_4_ +
       auVar33._24_4_ * auVar33._24_4_ + auVar34._24_4_ * auVar34._24_4_;
  auVar98._28_4_ =
       auVar36._28_4_ * auVar36._28_4_ +
       auVar33._28_4_ * auVar33._28_4_ + auVar34._28_4_ * auVar34._28_4_;
  auVar35._4_4_ = __real_38d1b717;
  auVar35._0_4_ = __real_38d1b717;
  auVar35._8_4_ = __real_38d1b717;
  auVar35._12_4_ = __real_38d1b717;
  auVar35._16_4_ = __real_38d1b717;
  auVar35._20_4_ = __real_38d1b717;
  auVar35._24_4_ = __real_38d1b717;
  auVar35._28_4_ = __real_38d1b717;
  auVar86 = vcmpps_avx(auVar98,auVar35,1);
  auVar85 = vsqrtps_avx(auVar98);
  uVar22 = auVar86._0_4_;
  auVar99._0_4_ = ~uVar22 & auVar85._0_4_;
  uVar53 = auVar86._4_4_;
  auVar99._4_4_ = ~uVar53 & auVar85._4_4_;
  uVar54 = auVar86._8_4_;
  auVar99._8_4_ = ~uVar54 & auVar85._8_4_;
  uVar55 = auVar86._12_4_;
  auVar99._12_4_ = ~uVar55 & auVar85._12_4_;
  uVar56 = auVar86._16_4_;
  auVar99._16_4_ = ~uVar56 & auVar85._16_4_;
  uVar57 = auVar86._20_4_;
  auVar99._20_4_ = ~uVar57 & auVar85._20_4_;
  uVar58 = auVar86._24_4_;
  auVar99._24_4_ = ~uVar58 & auVar85._24_4_;
  uVar59 = auVar86._28_4_;
  auVar99._28_4_ = ~uVar59 & auVar85._28_4_;
  auVar6 = vsubps_avx(auVar99,auVar32);
  auVar6 = vcmpps_avx(ZEXT832(0) << 0x20,auVar6,2);
  auVar7 = vblendvps_avx(_local_480,_local_500,auVar6);
  auVar6 = vdivps_avx(auVar33,auVar85);
  auVar33 = vdivps_avx(auVar34,auVar85);
  auVar85 = vdivps_avx(auVar36,auVar85);
  auVar36._4_4_ = __real_3f800000;
  auVar36._0_4_ = __real_3f800000;
  auVar36._8_4_ = __real_3f800000;
  auVar36._12_4_ = __real_3f800000;
  auVar36._16_4_ = __real_3f800000;
  auVar36._20_4_ = __real_3f800000;
  auVar36._24_4_ = __real_3f800000;
  auVar36._28_4_ = __real_3f800000;
  auVar86 = vblendvps_avx(auVar6,auVar36,auVar86);
  auVar89._0_4_ = ~uVar22 & auVar33._0_4_;
  auVar89._4_4_ = ~uVar53 & auVar33._4_4_;
  auVar89._8_4_ = ~uVar54 & auVar33._8_4_;
  auVar89._12_4_ = ~uVar55 & auVar33._12_4_;
  auVar89._16_4_ = ~uVar56 & auVar33._16_4_;
  auVar89._20_4_ = ~uVar57 & auVar33._20_4_;
  auVar89._24_4_ = ~uVar58 & auVar33._24_4_;
  auVar89._28_4_ = ~uVar59 & auVar33._28_4_;
  auVar93._0_4_ = ~uVar22 & auVar85._0_4_;
  auVar93._4_4_ = ~uVar53 & auVar85._4_4_;
  auVar93._8_4_ = ~uVar54 & auVar85._8_4_;
  auVar93._12_4_ = ~uVar55 & auVar85._12_4_;
  auVar93._16_4_ = ~uVar56 & auVar85._16_4_;
  auVar93._20_4_ = ~uVar57 & auVar85._20_4_;
  auVar93._24_4_ = ~uVar58 & auVar85._24_4_;
  auVar93._28_4_ = ~uVar59 & auVar85._28_4_;
  auVar86 = vmaskmovps_avx(auVar40,auVar86);
  auVar6 = vmaskmovps_avx(auVar40,auVar89);
  auVar33 = vmaskmovps_avx(auVar40,auVar93);
  auVar38._4_4_ = __real_322bcc77;
  auVar38._0_4_ = __real_322bcc77;
  auVar38._8_4_ = __real_322bcc77;
  auVar38._12_4_ = __real_322bcc77;
  auVar38._16_4_ = __real_322bcc77;
  auVar38._20_4_ = __real_322bcc77;
  auVar38._24_4_ = __real_322bcc77;
  auVar38._28_4_ = __real_322bcc77;
  auVar85 = vdivps_avx(auVar36,auVar32);
  auVar32 = vcmpps_avx(auVar32,auVar38,1);
  auVar32 = vblendvps_avx(auVar85,auVar36,auVar32);
  local_4c0 = auVar92._0_4_;
  fStack_4bc = auVar92._4_4_;
  fStack_4b8 = auVar92._8_4_;
  fStack_4b4 = auVar92._12_4_;
  fStack_4b0 = auVar92._16_4_;
  fStack_4ac = auVar92._20_4_;
  fStack_4a8 = auVar92._24_4_;
  fStack_4a4 = auVar92._28_4_;
  fVar122 = auVar87._0_4_;
  auVar90._0_4_ = fVar122 + local_4c0;
  fVar108 = auVar87._4_4_;
  auVar90._4_4_ = fVar108 + fStack_4bc;
  fVar111 = auVar87._8_4_;
  auVar90._8_4_ = fVar111 + fStack_4b8;
  fVar114 = auVar87._12_4_;
  auVar90._12_4_ = fVar114 + fStack_4b4;
  fVar117 = auVar87._16_4_;
  auVar90._16_4_ = fVar117 + fStack_4b0;
  fVar120 = auVar87._20_4_;
  auVar90._20_4_ = fVar120 + fStack_4ac;
  fVar123 = auVar87._24_4_;
  auVar90._24_4_ = fVar123 + fStack_4a8;
  fVar126 = auVar87._28_4_;
  auVar90._28_4_ = fVar126 + fStack_4a4;
  auVar7 = vdivps_avx(auVar7,auVar90);
  auVar7 = vsqrtps_avx(auVar7);
  fVar125 = param_6 * auVar32._0_4_ * (fVar125 + fVar125) * auVar7._0_4_;
  fVar105 = param_6 * auVar32._4_4_ * (fVar105 + fVar105) * auVar7._4_4_;
  fVar107 = param_6 * auVar32._8_4_ * (fVar107 + fVar107) * auVar7._8_4_;
  fVar110 = param_6 * auVar32._12_4_ * (fVar110 + fVar110) * auVar7._12_4_;
  fVar113 = param_6 * auVar32._16_4_ * (fVar113 + fVar113) * auVar7._16_4_;
  fVar116 = param_6 * auVar32._20_4_ * (fVar116 + fVar116) * auVar7._20_4_;
  fVar119 = param_6 * auVar32._24_4_ * (fVar119 + fVar119) * auVar7._24_4_;
  param_6 = param_6 * auVar32._28_4_ * (fVar80 + fVar80) * auVar7._28_4_;
  auVar32 = vsubps_avx(auVar29,auVar95);
  auVar32 = vsubps_avx(auVar32,auVar43);
  auVar94 = vsubps_avx(auVar31,auVar94);
  auVar102 = vsubps_avx(auVar83,auVar102);
  auVar94 = vsubps_avx(auVar94,auVar44);
  local_440 = auVar128._0_4_;
  fStack_43c = auVar128._4_4_;
  fStack_438 = auVar128._8_4_;
  fStack_434 = auVar128._12_4_;
  fStack_430 = auVar128._16_4_;
  fStack_42c = auVar128._20_4_;
  fStack_428 = auVar128._24_4_;
  fStack_424 = auVar128._28_4_;
  auVar102 = vsubps_avx(auVar102,auVar45);
  local_3c0 = auVar97._0_4_;
  fStack_3bc = auVar97._4_4_;
  fStack_3b8 = auVar97._8_4_;
  fStack_3b4 = auVar97._12_4_;
  fStack_3b0 = auVar97._16_4_;
  fStack_3ac = auVar97._20_4_;
  fStack_3a8 = auVar97._24_4_;
  fStack_3a4 = auVar97._28_4_;
  local_360 = auVar86._0_4_;
  fStack_35c = auVar86._4_4_;
  fStack_358 = auVar86._8_4_;
  fStack_354 = auVar86._12_4_;
  fStack_350 = auVar86._16_4_;
  fStack_34c = auVar86._20_4_;
  fStack_348 = auVar86._24_4_;
  fStack_344 = auVar86._28_4_;
  local_340 = auVar6._0_4_;
  fStack_33c = auVar6._4_4_;
  fStack_338 = auVar6._8_4_;
  fStack_334 = auVar6._12_4_;
  fStack_330 = auVar6._16_4_;
  fStack_32c = auVar6._20_4_;
  fStack_328 = auVar6._24_4_;
  fStack_324 = auVar6._28_4_;
  local_320 = auVar33._0_4_;
  fStack_31c = auVar33._4_4_;
  fStack_318 = auVar33._8_4_;
  fStack_314 = auVar33._12_4_;
  fStack_310 = auVar33._16_4_;
  fStack_30c = auVar33._20_4_;
  fStack_308 = auVar33._24_4_;
  fStack_304 = auVar33._28_4_;
  local_3e0 = auVar30._0_4_;
  fStack_3dc = auVar30._4_4_;
  fStack_3d8 = auVar30._8_4_;
  fStack_3d4 = auVar30._12_4_;
  fStack_3d0 = auVar30._16_4_;
  fStack_3cc = auVar30._20_4_;
  fStack_3c8 = auVar30._24_4_;
  fStack_3c4 = auVar30._28_4_;
  auVar65._0_4_ =
       -(fVar125 *
        (local_320 * (auVar102._0_4_ + local_3c0) +
        local_360 * (auVar129._0_4_ + auVar32._0_4_) + (auVar94._0_4_ + local_440) * local_340)) -
       local_3e0;
  auVar65._4_4_ =
       -(fVar105 *
        (fStack_31c * (auVar102._4_4_ + fStack_3bc) +
        fStack_35c * (auVar129._4_4_ + auVar32._4_4_) + (auVar94._4_4_ + fStack_43c) * fStack_33c))
       - fStack_3dc;
  auVar65._8_4_ =
       -(fVar107 *
        (fStack_318 * (auVar102._8_4_ + fStack_3b8) +
        fStack_358 * (auVar129._8_4_ + auVar32._8_4_) + (auVar94._8_4_ + fStack_438) * fStack_338))
       - fStack_3d8;
  auVar65._12_4_ =
       -(fVar110 *
        (fStack_314 * (auVar102._12_4_ + fStack_3b4) +
        fStack_354 * (auVar129._12_4_ + auVar32._12_4_) + (auVar94._12_4_ + fStack_434) * fStack_334
        )) - fStack_3d4;
  auVar65._16_4_ =
       -(fVar113 *
        (fStack_310 * (auVar102._16_4_ + fStack_3b0) +
        fStack_350 * (auVar129._16_4_ + auVar32._16_4_) + (auVar94._16_4_ + fStack_430) * fStack_330
        )) - fStack_3d0;
  auVar65._20_4_ =
       -(fVar116 *
        (fStack_30c * (auVar102._20_4_ + fStack_3ac) +
        fStack_34c * (auVar129._20_4_ + auVar32._20_4_) + (auVar94._20_4_ + fStack_42c) * fStack_32c
        )) - fStack_3cc;
  auVar65._24_4_ =
       -(fVar119 *
        (fStack_308 * (auVar102._24_4_ + fStack_3a8) +
        fStack_348 * (auVar129._24_4_ + auVar32._24_4_) + (auVar94._24_4_ + fStack_428) * fStack_328
        )) - fStack_3c8;
  auVar65._28_4_ =
       -(param_6 *
        (fStack_304 * (auVar102._28_4_ + fStack_3a4) +
        fStack_344 * (auVar129._28_4_ + auVar32._28_4_) + (auVar94._28_4_ + fStack_424) * fStack_324
        )) - fStack_3c4;
  auVar33._0_4_ = auVar90._0_4_ * fVar125 + __real_3f800000;
  auVar33._4_4_ = auVar90._4_4_ * fVar105 + __real_3f800000;
  auVar33._8_4_ = auVar90._8_4_ * fVar107 + __real_3f800000;
  auVar33._12_4_ = auVar90._12_4_ * fVar110 + __real_3f800000;
  auVar33._16_4_ = auVar90._16_4_ * fVar113 + __real_3f800000;
  auVar33._20_4_ = auVar90._20_4_ * fVar116 + __real_3f800000;
  auVar33._24_4_ = auVar90._24_4_ * fVar119 + __real_3f800000;
  auVar33._28_4_ = auVar90._28_4_ * param_6 + __real_3f800000;
  auVar32 = vdivps_avx(auVar65,auVar33);
  fVar80 = auVar32._0_4_;
  auVar34._0_4_ = fVar80 + local_3e0;
  fVar125 = auVar32._4_4_;
  auVar34._4_4_ = fVar125 + fStack_3dc;
  fVar105 = auVar32._8_4_;
  auVar34._8_4_ = fVar105 + fStack_3d8;
  fVar107 = auVar32._12_4_;
  auVar34._12_4_ = fVar107 + fStack_3d4;
  fVar110 = auVar32._16_4_;
  auVar34._16_4_ = fVar110 + fStack_3d0;
  fVar113 = auVar32._20_4_;
  auVar34._20_4_ = fVar113 + fStack_3cc;
  fVar116 = auVar32._24_4_;
  auVar34._24_4_ = fVar116 + fStack_3c8;
  fVar119 = auVar32._28_4_;
  auVar34._28_4_ = fVar119 + fStack_3c4;
  auVar40 = vmaskmovps_avx(auVar40,auVar34);
  *(undefined1 (*) [32])(param_5 + lVar15) = auVar40;
  local_360 = fVar80 * local_360;
  fStack_35c = fVar125 * fStack_35c;
  fStack_358 = fVar105 * fStack_358;
  fStack_354 = fVar107 * fStack_354;
  fStack_350 = fVar110 * fStack_350;
  fStack_34c = fVar113 * fStack_34c;
  fStack_348 = fVar116 * fStack_348;
  fStack_344 = fVar119 * fStack_344;
  auVar101._0_4_ = fVar122 * local_360 + auVar29._0_4_;
  auVar101._4_4_ = fVar108 * fStack_35c + auVar29._4_4_;
  auVar101._8_4_ = fVar111 * fStack_358 + auVar29._8_4_;
  auVar101._12_4_ = fVar114 * fStack_354 + auVar29._12_4_;
  auVar103._16_4_ = fVar117 * fStack_350 + auVar29._16_4_;
  auVar103._0_16_ = auVar101;
  auVar103._20_4_ = fVar120 * fStack_34c + auVar29._20_4_;
  auVar103._24_4_ = fVar123 * fStack_348 + auVar29._24_4_;
  auVar103._28_4_ = fVar126 * fStack_344 + auVar29._28_4_;
  cVar16 = (char)uVar18;
  iVar42 = auVar64._0_4_;
  auVar100 = auVar64._16_16_;
  auVar63 = auVar87._0_16_;
  auVar82 = auVar87._16_16_;
  auVar127 = auVar103._16_16_;
  iVar14 = auVar64._4_4_;
  iVar11 = auVar64._8_4_;
  iVar12 = auVar64._12_4_;
  local_380 = auVar88._0_4_;
  iStack_37c = auVar88._4_4_;
  iStack_378 = auVar88._8_4_;
  iStack_374 = auVar88._12_4_;
  iStack_370 = auVar88._16_4_;
  iStack_36c = auVar88._20_4_;
  iStack_368 = auVar88._24_4_;
  iStack_364 = auVar88._28_4_;
  local_500._0_4_ = auVar43._0_4_;
  local_500._4_4_ = auVar43._4_4_;
  fStack_4f8 = auVar43._8_4_;
  fStack_4f4 = auVar43._12_4_;
  fStack_4f0 = auVar43._16_4_;
  fStack_4ec = auVar43._20_4_;
  fStack_4e8 = auVar43._24_4_;
  fStack_4e4 = auVar43._28_4_;
  local_460 = auVar44._0_4_;
  fStack_45c = auVar44._4_4_;
  fStack_458 = auVar44._8_4_;
  fStack_454 = auVar44._12_4_;
  fStack_450 = auVar44._16_4_;
  fStack_44c = auVar44._20_4_;
  fStack_448 = auVar44._24_4_;
  fStack_444 = auVar44._28_4_;
  local_4e0._0_4_ = auVar45._0_4_;
  local_4e0._4_4_ = auVar45._4_4_;
  fStack_4d8 = auVar45._8_4_;
  fStack_4d4 = auVar45._12_4_;
  fStack_4d0 = auVar45._16_4_;
  fStack_4cc = auVar45._20_4_;
  fStack_4c8 = auVar45._24_4_;
  fStack_4c4 = auVar45._28_4_;
  iVar28 = auVar64._16_4_;
  auVar37 = auVar92._0_16_;
  auVar81 = auVar92._16_16_;
  if ((uVar18 & 1) != 0) {
    *(float *)(param_1 + iVar42) = auVar101._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar101,1);
    *(undefined4 *)(param_1 + iVar14) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar101,2);
    *(undefined4 *)(param_1 + iVar11) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar101,3);
    *(undefined4 *)(param_1 + iVar12) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(float *)(param_1 + iVar28) = auVar103._16_4_;
  }
  if ((uVar18 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar100,1);
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + iVar13) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar100,2);
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + iVar13) = uVar4;
  }
  if (cVar16 < '\0') {
    iVar13 = vextractps_avx(auVar100,3);
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + iVar13) = uVar4;
    auVar130._0_4_ = fVar122 * fVar80 * local_340 + auVar31._0_4_;
    auVar130._4_4_ = fVar108 * fVar125 * fStack_33c + auVar31._4_4_;
    auVar130._8_4_ = fVar111 * fVar105 * fStack_338 + auVar31._8_4_;
    auVar130._12_4_ = fVar114 * fVar107 * fStack_334 + auVar31._12_4_;
    auVar130._16_4_ = fVar117 * fVar110 * fStack_330 + auVar31._16_4_;
    auVar130._20_4_ = fVar120 * fVar113 * fStack_32c + auVar31._20_4_;
    auVar130._24_4_ = fVar123 * fVar116 * fStack_328 + auVar31._24_4_;
    auVar130._28_4_ = fVar126 * fVar119 * fStack_324 + auVar31._28_4_;
  }
  else {
    auVar130._0_4_ = fVar122 * fVar80 * local_340 + auVar31._0_4_;
    auVar130._4_4_ = fVar108 * fVar125 * fStack_33c + auVar31._4_4_;
    auVar130._8_4_ = fVar111 * fVar105 * fStack_338 + auVar31._8_4_;
    auVar130._12_4_ = fVar114 * fVar107 * fStack_334 + auVar31._12_4_;
    auVar130._16_4_ = fVar117 * fVar110 * fStack_330 + auVar31._16_4_;
    auVar130._20_4_ = fVar120 * fVar113 * fStack_32c + auVar31._20_4_;
    auVar130._24_4_ = fVar123 * fVar116 * fStack_328 + auVar31._24_4_;
    auVar130._28_4_ = fVar126 * fVar119 * fStack_324 + auVar31._28_4_;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar42) = auVar130._0_4_;
  }
  auVar127 = auVar130._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar28) = auVar130._16_4_;
  }
  auVar127 = auVar130._16_16_;
  if ((uVar18 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar100,1);
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar100,2);
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar4;
  }
  if (cVar16 < '\0') {
    iVar13 = vextractps_avx(auVar100,3);
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar4;
    auVar96._0_4_ = fVar122 * local_320 * fVar80 + auVar83._0_4_;
    auVar96._4_4_ = fVar108 * fStack_31c * fVar125 + auVar83._4_4_;
    auVar96._8_4_ = fVar111 * fStack_318 * fVar105 + auVar83._8_4_;
    auVar96._12_4_ = fVar114 * fStack_314 * fVar107 + auVar83._12_4_;
    auVar96._16_4_ = fVar117 * fStack_310 * fVar110 + auVar83._16_4_;
    auVar96._20_4_ = fVar120 * fStack_30c * fVar113 + auVar83._20_4_;
    auVar96._24_4_ = fVar123 * fStack_308 * fVar116 + auVar83._24_4_;
    auVar96._28_4_ = fVar126 * fStack_304 * fVar119 + auVar83._28_4_;
  }
  else {
    auVar96._0_4_ = fVar122 * local_320 * fVar80 + auVar83._0_4_;
    auVar96._4_4_ = fVar108 * fStack_31c * fVar125 + auVar83._4_4_;
    auVar96._8_4_ = fVar111 * fStack_318 * fVar105 + auVar83._8_4_;
    auVar96._12_4_ = fVar114 * fStack_314 * fVar107 + auVar83._12_4_;
    auVar96._16_4_ = fVar117 * fStack_310 * fVar110 + auVar83._16_4_;
    auVar96._20_4_ = fVar120 * fStack_30c * fVar113 + auVar83._20_4_;
    auVar96._24_4_ = fVar123 * fStack_308 * fVar116 + auVar83._24_4_;
    auVar96._28_4_ = fVar126 * fStack_304 * fVar119 + auVar83._28_4_;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar42) = auVar96._0_4_;
  }
  auVar127 = auVar96._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar28) = auVar96._16_4_;
  }
  auVar127 = auVar96._16_16_;
  if ((uVar18 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar100,1);
    uVar4 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar100,2);
    uVar4 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar4;
  }
  if (cVar16 < '\0') {
    iVar13 = vextractps_avx(auVar100,3);
    uVar4 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar4;
  }
  if ((uVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar42) = fVar122;
  }
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar12) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar28) = fVar117;
  }
  if ((uVar18 & 0x20) != 0) {
    iVar14 = vextractps_avx(auVar100,1);
    uVar4 = vextractps_avx(auVar82,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar14 = vextractps_avx(auVar100,2);
    uVar4 = vextractps_avx(auVar82,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar4;
  }
  if (cVar16 < '\0') {
    iVar14 = vextractps_avx(auVar100,3);
    uVar4 = vextractps_avx(auVar82,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar4;
    auVar91._0_4_ = -(local_4c0 * local_360) + (float)local_500._0_4_;
    auVar91._4_4_ = -(fStack_4bc * fStack_35c) + (float)local_500._4_4_;
    auVar91._8_4_ = -(fStack_4b8 * fStack_358) + fStack_4f8;
    auVar91._12_4_ = -(fStack_4b4 * fStack_354) + fStack_4f4;
    auVar91._16_4_ = -(fStack_4b0 * fStack_350) + fStack_4f0;
    auVar91._20_4_ = -(fStack_4ac * fStack_34c) + fStack_4ec;
    auVar91._24_4_ = -(fStack_4a8 * fStack_348) + fStack_4e8;
    auVar91._28_4_ = -(fStack_4a4 * fStack_344) + fStack_4e4;
  }
  else {
    auVar91._0_4_ = -(local_4c0 * local_360) + (float)local_500._0_4_;
    auVar91._4_4_ = -(fStack_4bc * fStack_35c) + (float)local_500._4_4_;
    auVar91._8_4_ = -(fStack_4b8 * fStack_358) + fStack_4f8;
    auVar91._12_4_ = -(fStack_4b4 * fStack_354) + fStack_4f4;
    auVar91._16_4_ = -(fStack_4b0 * fStack_350) + fStack_4f0;
    auVar91._20_4_ = -(fStack_4ac * fStack_34c) + fStack_4ec;
    auVar91._24_4_ = -(fStack_4a8 * fStack_348) + fStack_4e8;
    auVar91._28_4_ = -(fStack_4a4 * fStack_344) + fStack_4e4;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + local_380) = auVar91._0_4_;
  }
  auVar63 = auVar91._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + iStack_37c) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + iStack_378) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + iStack_374) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + iStack_370) = auVar91._16_4_;
  }
  auVar63 = auVar91._16_16_;
  if ((uVar18 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + iStack_36c) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + iStack_368) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + iStack_364) = uVar4;
    auVar39._0_4_ = -(local_4c0 * fVar80 * local_340) + local_460;
    auVar39._4_4_ = -(fStack_4bc * fVar125 * fStack_33c) + fStack_45c;
    auVar39._8_4_ = -(fStack_4b8 * fVar105 * fStack_338) + fStack_458;
    auVar39._12_4_ = -(fStack_4b4 * fVar107 * fStack_334) + fStack_454;
    auVar39._16_4_ = -(fStack_4b0 * fVar110 * fStack_330) + fStack_450;
    auVar39._20_4_ = -(fStack_4ac * fVar113 * fStack_32c) + fStack_44c;
    auVar39._24_4_ = -(fStack_4a8 * fVar116 * fStack_328) + fStack_448;
    auVar39._28_4_ = -(fStack_4a4 * fVar119 * fStack_324) + fStack_444;
  }
  else {
    auVar39._0_4_ = -(local_4c0 * fVar80 * local_340) + local_460;
    auVar39._4_4_ = -(fStack_4bc * fVar125 * fStack_33c) + fStack_45c;
    auVar39._8_4_ = -(fStack_4b8 * fVar105 * fStack_338) + fStack_458;
    auVar39._12_4_ = -(fStack_4b4 * fVar107 * fStack_334) + fStack_454;
    auVar39._16_4_ = -(fStack_4b0 * fVar110 * fStack_330) + fStack_450;
    auVar39._20_4_ = -(fStack_4ac * fVar113 * fStack_32c) + fStack_44c;
    auVar39._24_4_ = -(fStack_4a8 * fVar116 * fStack_328) + fStack_448;
    auVar39._28_4_ = -(fStack_4a4 * fVar119 * fStack_324) + fStack_444;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_380) = auVar39._0_4_;
  }
  auVar63 = auVar39._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_378) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_374) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_370) = auVar39._16_4_;
  }
  auVar63 = auVar39._16_16_;
  if ((uVar18 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_36c) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_368) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_364) = uVar4;
    auVar84._0_4_ = -(local_4c0 * local_320 * fVar80) + (float)local_4e0._0_4_;
    auVar84._4_4_ = -(fStack_4bc * fStack_31c * fVar125) + (float)local_4e0._4_4_;
    auVar84._8_4_ = -(fStack_4b8 * fStack_318 * fVar105) + fStack_4d8;
    auVar84._12_4_ = -(fStack_4b4 * fStack_314 * fVar107) + fStack_4d4;
    auVar84._16_4_ = -(fStack_4b0 * fStack_310 * fVar110) + fStack_4d0;
    auVar84._20_4_ = -(fStack_4ac * fStack_30c * fVar113) + fStack_4cc;
    auVar84._24_4_ = -(fStack_4a8 * fStack_308 * fVar116) + fStack_4c8;
    auVar84._28_4_ = -(fStack_4a4 * fStack_304 * fVar119) + fStack_4c4;
  }
  else {
    auVar84._0_4_ = -(local_4c0 * local_320 * fVar80) + (float)local_4e0._0_4_;
    auVar84._4_4_ = -(fStack_4bc * fStack_31c * fVar125) + (float)local_4e0._4_4_;
    auVar84._8_4_ = -(fStack_4b8 * fStack_318 * fVar105) + fStack_4d8;
    auVar84._12_4_ = -(fStack_4b4 * fStack_314 * fVar107) + fStack_4d4;
    auVar84._16_4_ = -(fStack_4b0 * fStack_310 * fVar110) + fStack_4d0;
    auVar84._20_4_ = -(fStack_4ac * fStack_30c * fVar113) + fStack_4cc;
    auVar84._24_4_ = -(fStack_4a8 * fStack_308 * fVar116) + fStack_4c8;
    auVar84._28_4_ = -(fStack_4a4 * fStack_304 * fVar119) + fStack_4c4;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_380) = auVar84._0_4_;
  }
  auVar63 = auVar84._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_378) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_374) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_370) = auVar84._16_4_;
  }
  auVar63 = auVar84._16_16_;
  if ((uVar18 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_36c) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_368) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_364) = uVar4;
  }
  if ((uVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_380) = local_4c0;
  }
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar37,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_37c) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar37,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_378) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar37,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_374) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_370) = fStack_4b0;
  }
  if ((uVar18 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar81,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_36c) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar81,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_368) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar81,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_364) = uVar4;
  }
  return;
}

// ApplyXPBDEmbeddedVertexFaceSpringConstraints_avx2 @ 1408a11d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedVertexFaceSpringConstraints_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,float *param_8,longlong param_9,byte param_10,
               float *param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  char cVar24;
  undefined1 (*pauVar25) [32];
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  float fVar37;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar58 [16];
  float fVar38;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  float fVar64;
  float fVar68;
  float fVar69;
  undefined1 auVar65 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar66 [32];
  float fVar70;
  float fVar74;
  undefined1 auVar67 [32];
  float fVar75;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  float fVar103;
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [16];
  undefined1 auVar107 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  float fVar110;
  float fVar111;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar112 [32];
  float fVar125;
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  float fVar126;
  undefined1 auVar127 [16];
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  float fVar138;
  float fVar146;
  undefined1 auVar139 [32];
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 in_ZMM10 [64];
  uint uVar147;
  uint uVar150;
  uint uVar151;
  uint uVar152;
  uint uVar153;
  uint uVar154;
  uint uVar155;
  undefined1 auVar148 [32];
  uint uVar156;
  undefined1 auVar149 [32];
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
  float fVar167;
  float fVar172;
  float fVar173;
  undefined1 auVar168 [16];
  float fVar174;
  float fVar175;
  float fVar176;
  float fVar177;
  float fVar178;
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 local_6c0 [8];
  float fStack_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  float local_6a0;
  float fStack_69c;
  float fStack_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float fStack_688;
  float fStack_684;
  undefined1 local_660 [8];
  float fStack_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float fStack_648;
  float fStack_644;
  int local_640;
  int iStack_63c;
  int iStack_638;
  int iStack_634;
  int iStack_630;
  int iStack_62c;
  int iStack_628;
  int iStack_624;
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
  float local_5c0;
  float fStack_5bc;
  float fStack_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  float local_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  float local_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  int local_540;
  int iStack_53c;
  int iStack_538;
  int iStack_534;
  int iStack_530;
  int iStack_52c;
  int iStack_528;
  int iStack_524;
  int local_520;
  int iStack_51c;
  int iStack_518;
  int iStack_514;
  int iStack_510;
  int iStack_50c;
  int iStack_508;
  int iStack_504;
  int local_500;
  int iStack_4fc;
  int iStack_4f8;
  int iStack_4f4;
  int iStack_4f0;
  int iStack_4ec;
  int iStack_4e8;
  int iStack_4e4;
  int local_4a0;
  int iStack_49c;
  int iStack_498;
  int iStack_494;
  int iStack_490;
  int iStack_48c;
  int iStack_488;
  int iStack_484;
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
  float local_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  int local_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
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
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined1 auVar130 [32];
  undefined1 auVar169 [32];
  
  uVar22 = __real_0000000c;
  uVar5 = __real_00000008;
  uVar21 = __real_00000004;
  fVar38 = __real_3f800000;
  uVar6 = __real_38d1b717;
  uVar23 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar23 = param_13;
  }
  if ((int)(uVar23 & 0xfffffff8) < 1) {
    uVar32 = 0;
  }
  else {
    uVar32 = 0;
    uVar30 = 0;
    do {
      uVar27 = uVar30 & 0xffffffff;
      fStack_5e4 = *param_8;
      local_600._0_4_ = fStack_5e4;
      local_600._4_4_ = fStack_5e4;
      fStack_5f8 = fStack_5e4;
      fStack_5f4 = fStack_5e4;
      fStack_5f0 = fStack_5e4;
      fStack_5ec = fStack_5e4;
      fStack_5e8 = fStack_5e4;
      if ((param_7 & 1) != 0) {
        fVar2 = param_8[1];
        pfVar1 = (float *)(param_9 + uVar27);
        local_600._0_4_ = fVar2 * *pfVar1 + fStack_5e4;
        local_600._4_4_ = fVar2 * pfVar1[1] + fStack_5e4;
        fStack_5f8 = fVar2 * pfVar1[2] + fStack_5e4;
        fStack_5f4 = fVar2 * pfVar1[3] + fStack_5e4;
        fStack_5f0 = fVar2 * pfVar1[4] + fStack_5e4;
        fStack_5ec = fVar2 * pfVar1[5] + fStack_5e4;
        fStack_5e8 = fVar2 * pfVar1[6] + fStack_5e4;
        fStack_5e4 = fVar2 * pfVar1[7] + fStack_5e4;
      }
      auVar83 = *(undefined1 (*) [32])(param_2 + uVar30 * 4);
      auVar108 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar30 * 4);
      auVar76 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar30 * 4);
      auVar77 = *(undefined1 (*) [32])(param_2 + 0x60 + uVar30 * 4);
      auVar159 = vperm2i128_avx2(auVar83,auVar76,0x20);
      auVar104 = vperm2i128_avx2(auVar83,auVar76,0x31);
      auVar107 = vperm2i128_avx2(auVar108,auVar77,0x20);
      auVar77 = vperm2i128_avx2(auVar108,auVar77,0x31);
      auVar108 = vpunpckldq_avx2(auVar159,auVar104);
      auVar76 = vpunpckldq_avx2(auVar107,auVar77);
      auVar83 = vpunpcklqdq_avx2(auVar108,auVar76);
      auVar128 = vpslld_avx2(auVar83,4);
      auVar157._4_4_ = uVar21;
      auVar157._0_4_ = uVar21;
      auVar157._8_4_ = uVar21;
      auVar157._12_4_ = uVar21;
      auVar157._16_4_ = uVar21;
      auVar157._20_4_ = uVar21;
      auVar157._24_4_ = uVar21;
      auVar157._28_4_ = uVar21;
      vpor_avx2(auVar128,auVar157);
      auVar83 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
      auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
      auVar93._4_4_ = uVar5;
      auVar93._0_4_ = uVar5;
      auVar93._8_4_ = uVar5;
      auVar93._12_4_ = uVar5;
      auVar93._16_4_ = uVar5;
      auVar93._20_4_ = uVar5;
      auVar93._24_4_ = uVar5;
      auVar93._28_4_ = uVar5;
      vpor_avx2(auVar128,auVar93);
      auVar83 = vpcmpeqd_avx2(auVar112,auVar112);
      auVar89 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar139._4_4_ = uVar22;
      auVar139._0_4_ = uVar22;
      auVar139._8_4_ = uVar22;
      auVar139._12_4_ = uVar22;
      auVar139._16_4_ = uVar22;
      auVar139._20_4_ = uVar22;
      auVar139._24_4_ = uVar22;
      auVar139._28_4_ = uVar22;
      vpor_avx2(auVar128,auVar139);
      auVar83 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
      auVar90 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar83 = vpunpckhqdq_avx2(auVar108,auVar76);
      auVar170 = vpslld_avx2(auVar83,4);
      vpor_avx2(auVar170,auVar157);
      auVar83 = vpcmpeqd_avx2(auVar76,auVar76);
      auVar91 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      vpor_avx2(auVar170,auVar93);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar92 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar108 = vpunpckhdq_avx2(auVar159,auVar104);
      vpor_avx2(auVar170,auVar139);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      auVar76 = vpunpckhdq_avx2(auVar107,auVar77);
      auVar83 = vpunpcklqdq_avx2(auVar108,auVar76);
      auVar129 = vpslld_avx2(auVar83,4);
      vpor_avx2(auVar129,auVar157);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar45 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      vpor_avx2(auVar129,auVar93);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar46 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      vpor_avx2(auVar129,auVar139);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar47 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar83 = vpunpckhqdq_avx2(auVar108,auVar76);
      auVar48 = vpslld_avx2(auVar83,4);
      vpor_avx2(auVar157,auVar48);
      auVar83 = vpcmpeqd_avx2(auVar108,auVar108);
      auVar165 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
      vpor_avx2(auVar93,auVar48);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar157 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      vpor_avx2(auVar139,auVar48);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar93 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar83 = *(undefined1 (*) [32])(param_3 + uVar30 * 4);
      auVar108 = *(undefined1 (*) [32])(param_3 + 0x40 + uVar30 * 4);
      auVar104 = vperm2i128_avx2(auVar83,auVar108,0x20);
      auVar76 = vperm2i128_avx2(auVar83,auVar108,0x31);
      auVar83 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar30 * 4);
      auVar108 = *(undefined1 (*) [32])(param_3 + 0x60 + uVar30 * 4);
      auVar107 = vperm2i128_avx2(auVar83,auVar108,0x20);
      auVar139 = vperm2i128_avx2(auVar83,auVar108,0x31);
      auVar159 = vpunpckldq_avx2(auVar104,auVar76);
      auVar108 = vpunpckhdq_avx2(auVar104,auVar76);
      auVar83 = vpunpckldq_avx2(auVar107,auVar139);
      auVar77 = vpunpckhqdq_avx2(auVar159,auVar83);
      auVar76 = vpunpckhdq_avx2(auVar107,auVar139);
      auVar83 = vpcmpeqd_avx2(auVar104,auVar104);
      auVar107 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
      auVar83 = vpcmpeqd_avx2(auVar159,auVar159);
      auVar139 = vgatherdps(ZEXT832(0),auVar83);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar162 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      auVar83 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar104 = vgatherdps(ZEXT832(0),auVar83);
      auVar159 = vpunpcklqdq_avx2(auVar108,auVar76);
      auVar83 = vpunpckhqdq_avx2(auVar108,auVar76);
      fVar111 = auVar159._0_4_;
      fVar119 = auVar159._4_4_;
      fVar120 = auVar159._8_4_;
      fVar121 = auVar159._12_4_;
      fVar122 = auVar159._16_4_;
      fVar123 = auVar159._20_4_;
      fVar124 = auVar159._24_4_;
      fVar125 = auVar159._28_4_;
      fVar64 = auVar77._0_4_;
      fVar68 = auVar77._4_4_;
      fVar69 = auVar77._8_4_;
      fVar70 = auVar77._12_4_;
      fVar71 = auVar77._16_4_;
      fVar72 = auVar77._20_4_;
      fVar73 = auVar77._24_4_;
      fVar74 = auVar77._28_4_;
      local_6c0._0_4_ = auVar45._0_4_;
      local_6c0._4_4_ = auVar45._4_4_;
      fStack_6b8 = auVar45._8_4_;
      fStack_6b4 = auVar45._12_4_;
      fStack_6b0 = auVar45._16_4_;
      fStack_6ac = auVar45._20_4_;
      fStack_6a8 = auVar45._24_4_;
      fStack_6a4 = auVar45._28_4_;
      local_580 = auVar91._0_4_;
      fStack_57c = auVar91._4_4_;
      fStack_578 = auVar91._8_4_;
      fStack_574 = auVar91._12_4_;
      fStack_570 = auVar91._16_4_;
      fStack_56c = auVar91._20_4_;
      fStack_568 = auVar91._24_4_;
      fStack_564 = auVar91._28_4_;
      local_6a0 = auVar46._0_4_;
      fStack_69c = auVar46._4_4_;
      fStack_698 = auVar46._8_4_;
      fStack_694 = auVar46._12_4_;
      fStack_690 = auVar46._16_4_;
      fStack_68c = auVar46._20_4_;
      fStack_688 = auVar46._24_4_;
      fStack_684 = auVar46._28_4_;
      local_620._0_4_ = auVar92._0_4_;
      local_620._4_4_ = auVar92._4_4_;
      fStack_618 = auVar92._8_4_;
      fStack_614 = auVar92._12_4_;
      fStack_610 = auVar92._16_4_;
      fStack_60c = auVar92._20_4_;
      fStack_608 = auVar92._24_4_;
      fStack_604 = auVar92._28_4_;
      fVar75 = auVar83._0_4_;
      auVar76._0_4_ =
           -(fVar75 * auVar104._0_4_) + (-(auVar139._0_4_ * fVar64) - fVar111 * auVar162._0_4_);
      fVar79 = auVar83._4_4_;
      auVar76._4_4_ =
           -(fVar79 * auVar104._4_4_) + (-(auVar139._4_4_ * fVar68) - fVar119 * auVar162._4_4_);
      fVar80 = auVar83._8_4_;
      auVar76._8_4_ =
           -(fVar80 * auVar104._8_4_) + (-(auVar139._8_4_ * fVar69) - fVar120 * auVar162._8_4_);
      fVar81 = auVar83._12_4_;
      auVar76._12_4_ =
           -(fVar81 * auVar104._12_4_) + (-(auVar139._12_4_ * fVar70) - fVar121 * auVar162._12_4_);
      fVar82 = auVar83._16_4_;
      auVar76._16_4_ =
           -(fVar82 * auVar104._16_4_) + (-(auVar139._16_4_ * fVar71) - fVar122 * auVar162._16_4_);
      fVar51 = auVar83._20_4_;
      auVar76._20_4_ =
           -(fVar51 * auVar104._20_4_) + (-(auVar139._20_4_ * fVar72) - fVar123 * auVar162._20_4_);
      fVar53 = auVar83._24_4_;
      auVar76._24_4_ =
           -(fVar53 * auVar104._24_4_) + (-(auVar139._24_4_ * fVar73) - fVar124 * auVar162._24_4_);
      fVar55 = auVar83._28_4_;
      auVar76._28_4_ =
           -(fVar55 * auVar104._28_4_) + (-(auVar139._28_4_ * fVar74) - fVar125 * auVar162._28_4_);
      auVar108._0_4_ =
           -(fVar75 * auVar165._0_4_) + (-(fVar64 * local_580) - fVar111 * (float)local_6c0._0_4_);
      auVar108._4_4_ =
           -(fVar79 * auVar165._4_4_) + (-(fVar68 * fStack_57c) - fVar119 * (float)local_6c0._4_4_);
      auVar108._8_4_ = -(fVar80 * auVar165._8_4_) + (-(fVar69 * fStack_578) - fVar120 * fStack_6b8);
      auVar108._12_4_ =
           -(fVar81 * auVar165._12_4_) + (-(fVar70 * fStack_574) - fVar121 * fStack_6b4);
      auVar108._16_4_ =
           -(fVar82 * auVar165._16_4_) + (-(fVar71 * fStack_570) - fVar122 * fStack_6b0);
      auVar108._20_4_ =
           -(fVar51 * auVar165._20_4_) + (-(fVar72 * fStack_56c) - fVar123 * fStack_6ac);
      auVar108._24_4_ =
           -(fVar53 * auVar165._24_4_) + (-(fVar73 * fStack_568) - fVar124 * fStack_6a8);
      auVar108._28_4_ =
           -(fVar55 * auVar165._28_4_) + (-(fVar74 * fStack_564) - fVar125 * fStack_6a4);
      auVar83._0_4_ =
           -(fVar75 * auVar157._0_4_) + (-(fVar64 * (float)local_620._0_4_) - fVar111 * local_6a0);
      auVar83._4_4_ =
           -(fVar79 * auVar157._4_4_) + (-(fVar68 * (float)local_620._4_4_) - fVar119 * fStack_69c);
      auVar83._8_4_ = -(fVar80 * auVar157._8_4_) + (-(fVar69 * fStack_618) - fVar120 * fStack_698);
      auVar83._12_4_ = -(fVar81 * auVar157._12_4_) + (-(fVar70 * fStack_614) - fVar121 * fStack_694)
      ;
      auVar83._16_4_ = -(fVar82 * auVar157._16_4_) + (-(fVar71 * fStack_610) - fVar122 * fStack_690)
      ;
      auVar83._20_4_ = -(fVar51 * auVar157._20_4_) + (-(fVar72 * fStack_60c) - fVar123 * fStack_68c)
      ;
      auVar83._24_4_ = -(fVar53 * auVar157._24_4_) + (-(fVar73 * fStack_608) - fVar124 * fStack_688)
      ;
      auVar83._28_4_ = -(fVar55 * auVar157._28_4_) + (-(fVar74 * fStack_604) - fVar125 * fStack_684)
      ;
      local_5c0 = auVar47._0_4_;
      fStack_5bc = auVar47._4_4_;
      fStack_5b8 = auVar47._8_4_;
      fStack_5b4 = auVar47._12_4_;
      fStack_5b0 = auVar47._16_4_;
      fStack_5ac = auVar47._20_4_;
      fStack_5a8 = auVar47._24_4_;
      fStack_5a4 = auVar47._28_4_;
      local_5a0 = auVar66._0_4_;
      fStack_59c = auVar66._4_4_;
      fStack_598 = auVar66._8_4_;
      fStack_594 = auVar66._12_4_;
      fStack_590 = auVar66._16_4_;
      fStack_58c = auVar66._20_4_;
      fStack_588 = auVar66._24_4_;
      fStack_584 = auVar66._28_4_;
      fVar57 = auVar93._0_4_;
      fVar60 = auVar93._4_4_;
      fVar62 = auVar93._8_4_;
      fVar110 = auVar93._12_4_;
      fVar100 = auVar93._16_4_;
      fVar101 = auVar93._20_4_;
      fVar102 = auVar93._24_4_;
      fVar103 = auVar93._28_4_;
      fVar2 = *param_11;
      auVar77._4_4_ = fVar2;
      auVar77._0_4_ = fVar2;
      auVar77._8_4_ = fVar2;
      auVar77._12_4_ = fVar2;
      auVar77._16_4_ = fVar2;
      auVar77._20_4_ = fVar2;
      auVar77._24_4_ = fVar2;
      auVar77._28_4_ = fVar2;
      if ((param_10 & 1) != 0) {
        fVar3 = param_11[1];
        pfVar1 = (float *)(param_12 + uVar27);
        auVar77._0_4_ = fVar3 * *pfVar1 + fVar2;
        auVar77._4_4_ = fVar3 * pfVar1[1] + fVar2;
        auVar77._8_4_ = fVar3 * pfVar1[2] + fVar2;
        auVar77._12_4_ = fVar3 * pfVar1[3] + fVar2;
        auVar77._16_4_ = fVar3 * pfVar1[4] + fVar2;
        auVar77._20_4_ = fVar3 * pfVar1[5] + fVar2;
        auVar77._24_4_ = fVar3 * pfVar1[6] + fVar2;
        auVar77._28_4_ = fVar3 * pfVar1[7] + fVar2;
      }
      auVar76 = vsubps_avx(auVar107,auVar76);
      auVar45 = vsubps_avx(auVar112,auVar108);
      auVar46 = vsubps_avx(auVar89,auVar83);
      auVar148._0_4_ =
           auVar46._0_4_ * auVar46._0_4_ +
           auVar76._0_4_ * auVar76._0_4_ + auVar45._0_4_ * auVar45._0_4_;
      auVar148._4_4_ =
           auVar46._4_4_ * auVar46._4_4_ +
           auVar76._4_4_ * auVar76._4_4_ + auVar45._4_4_ * auVar45._4_4_;
      auVar148._8_4_ =
           auVar46._8_4_ * auVar46._8_4_ +
           auVar76._8_4_ * auVar76._8_4_ + auVar45._8_4_ * auVar45._8_4_;
      auVar148._12_4_ =
           auVar46._12_4_ * auVar46._12_4_ +
           auVar76._12_4_ * auVar76._12_4_ + auVar45._12_4_ * auVar45._12_4_;
      auVar148._16_4_ =
           auVar46._16_4_ * auVar46._16_4_ +
           auVar76._16_4_ * auVar76._16_4_ + auVar45._16_4_ * auVar45._16_4_;
      auVar148._20_4_ =
           auVar46._20_4_ * auVar46._20_4_ +
           auVar76._20_4_ * auVar76._20_4_ + auVar45._20_4_ * auVar45._20_4_;
      auVar148._24_4_ =
           auVar46._24_4_ * auVar46._24_4_ +
           auVar76._24_4_ * auVar76._24_4_ + auVar45._24_4_ * auVar45._24_4_;
      auVar148._28_4_ =
           auVar46._28_4_ * auVar46._28_4_ +
           auVar76._28_4_ * auVar76._28_4_ + auVar45._28_4_ * auVar45._28_4_;
      auVar159 = vsqrtps_avx(auVar148);
      auVar91._4_4_ = uVar6;
      auVar91._0_4_ = uVar6;
      auVar91._8_4_ = uVar6;
      auVar91._12_4_ = uVar6;
      auVar91._16_4_ = uVar6;
      auVar91._20_4_ = uVar6;
      auVar91._24_4_ = uVar6;
      auVar91._28_4_ = uVar6;
      auVar108 = vcmpps_avx(auVar148,auVar91,1);
      uVar147 = auVar108._0_4_;
      auVar160._0_4_ = ~uVar147 & auVar159._0_4_;
      uVar150 = auVar108._4_4_;
      auVar160._4_4_ = ~uVar150 & auVar159._4_4_;
      uVar151 = auVar108._8_4_;
      auVar160._8_4_ = ~uVar151 & auVar159._8_4_;
      uVar152 = auVar108._12_4_;
      auVar160._12_4_ = ~uVar152 & auVar159._12_4_;
      uVar153 = auVar108._16_4_;
      auVar160._16_4_ = ~uVar153 & auVar159._16_4_;
      uVar154 = auVar108._20_4_;
      auVar160._20_4_ = ~uVar154 & auVar159._20_4_;
      uVar155 = auVar108._24_4_;
      auVar160._24_4_ = ~uVar155 & auVar159._24_4_;
      uVar156 = auVar108._28_4_;
      auVar160._28_4_ = ~uVar156 & auVar159._28_4_;
      auVar91 = vsubps_avx(auVar160,*(undefined1 (*) [32])(param_4 + uVar27));
      auVar83 = vcmpps_avx(ZEXT832(0) << 0x20,auVar91,2);
      auVar83 = vblendvps_avx(auVar77,_local_600,auVar83);
      auVar76 = vdivps_avx(auVar76,auVar159);
      auVar77 = vdivps_avx(auVar45,auVar159);
      auVar159 = vdivps_avx(auVar46,auVar159);
      fVar37 = param_6 * param_6 * auVar83._0_4_;
      fVar50 = param_6 * param_6 * auVar83._4_4_;
      fVar52 = param_6 * param_6 * auVar83._8_4_;
      fVar54 = param_6 * param_6 * auVar83._12_4_;
      fVar56 = param_6 * param_6 * auVar83._16_4_;
      fVar59 = param_6 * param_6 * auVar83._20_4_;
      fVar61 = param_6 * param_6 * auVar83._24_4_;
      fVar63 = param_6 * param_6 * auVar83._28_4_;
      fVar2 = auVar90._0_4_;
      fVar3 = auVar90._4_4_;
      fVar7 = auVar90._8_4_;
      fVar8 = auVar90._12_4_;
      fVar9 = auVar90._16_4_;
      fVar10 = auVar90._20_4_;
      fVar11 = auVar90._24_4_;
      fVar12 = auVar90._28_4_;
      pfVar1 = (float *)(param_5 + uVar27);
      fVar13 = *pfVar1;
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      auVar161._0_4_ = -(fVar37 * auVar91._0_4_) - fVar13;
      auVar161._4_4_ = -(fVar50 * auVar91._4_4_) - fVar14;
      auVar161._8_4_ = -(fVar52 * auVar91._8_4_) - fVar15;
      auVar161._12_4_ = -(fVar54 * auVar91._12_4_) - fVar16;
      auVar161._16_4_ = -(fVar56 * auVar91._16_4_) - fVar17;
      auVar161._20_4_ = -(fVar59 * auVar91._20_4_) - fVar18;
      auVar161._24_4_ = -(fVar61 * auVar91._24_4_) - fVar19;
      auVar161._28_4_ = -(fVar63 * auVar91._28_4_) - fVar20;
      auVar46._4_4_ = fVar38;
      auVar46._0_4_ = fVar38;
      auVar46._8_4_ = fVar38;
      auVar46._12_4_ = fVar38;
      auVar46._16_4_ = fVar38;
      auVar46._20_4_ = fVar38;
      auVar46._24_4_ = fVar38;
      auVar46._28_4_ = fVar38;
      auVar92._0_4_ =
           fVar37 * (-(fVar75 * fVar57) + (-(fVar64 * local_5a0) - fVar111 * local_5c0) + fVar2) +
           fVar38;
      auVar92._4_4_ =
           fVar50 * (-(fVar79 * fVar60) + (-(fVar68 * fStack_59c) - fVar119 * fStack_5bc) + fVar3) +
           fVar38;
      auVar92._8_4_ =
           fVar52 * (-(fVar80 * fVar62) + (-(fVar69 * fStack_598) - fVar120 * fStack_5b8) + fVar7) +
           fVar38;
      auVar92._12_4_ =
           fVar54 * (-(fVar81 * fVar110) + (-(fVar70 * fStack_594) - fVar121 * fStack_5b4) + fVar8)
           + fVar38;
      auVar92._16_4_ =
           fVar56 * (-(fVar82 * fVar100) + (-(fVar71 * fStack_590) - fVar122 * fStack_5b0) + fVar9)
           + fVar38;
      auVar92._20_4_ =
           fVar59 * (-(fVar51 * fVar101) + (-(fVar72 * fStack_58c) - fVar123 * fStack_5ac) + fVar10)
           + fVar38;
      auVar92._24_4_ =
           fVar61 * (-(fVar53 * fVar102) + (-(fVar73 * fStack_588) - fVar124 * fStack_5a8) + fVar11)
           + fVar38;
      auVar92._28_4_ =
           fVar63 * (-(fVar55 * fVar103) + (-(fVar74 * fStack_584) - fVar125 * fStack_5a4) + fVar12)
           + fVar38;
      auVar45 = vdivps_avx(auVar161,auVar92);
      local_640 = auVar128._0_4_;
      iStack_63c = auVar128._4_4_;
      iStack_638 = auVar128._8_4_;
      iStack_634 = auVar128._12_4_;
      iStack_630 = auVar128._16_4_;
      iStack_62c = auVar128._20_4_;
      iStack_628 = auVar128._24_4_;
      iStack_624 = auVar128._28_4_;
      auVar83 = vblendvps_avx(auVar76,auVar46,auVar108);
      fVar37 = auVar45._0_4_;
      fVar126 = auVar83._0_4_ * fVar37;
      fVar50 = auVar45._4_4_;
      fVar131 = auVar83._4_4_ * fVar50;
      fVar52 = auVar45._8_4_;
      fVar132 = auVar83._8_4_ * fVar52;
      fVar54 = auVar45._12_4_;
      fVar133 = auVar83._12_4_ * fVar54;
      fVar56 = auVar45._16_4_;
      fVar134 = auVar83._16_4_ * fVar56;
      fVar59 = auVar45._20_4_;
      fVar135 = auVar83._20_4_ * fVar59;
      fVar61 = auVar45._24_4_;
      fVar136 = auVar83._24_4_ * fVar61;
      fVar63 = auVar45._28_4_;
      fVar137 = auVar83._28_4_ * fVar63;
      auVar106._0_4_ = fVar2 * fVar126 + auVar107._0_4_;
      auVar106._4_4_ = fVar3 * fVar131 + auVar107._4_4_;
      auVar106._8_4_ = fVar7 * fVar132 + auVar107._8_4_;
      auVar106._12_4_ = fVar8 * fVar133 + auVar107._12_4_;
      auVar128._16_4_ = fVar9 * fVar134 + auVar107._16_4_;
      auVar128._0_16_ = auVar106;
      auVar128._20_4_ = fVar10 * fVar135 + auVar107._20_4_;
      auVar128._24_4_ = fVar11 * fVar136 + auVar107._24_4_;
      auVar128._28_4_ = fVar12 * fVar137 + auVar107._28_4_;
      in_ZMM6 = ZEXT3264(auVar128);
      lVar35 = (longlong)local_640;
      *(float *)(param_1 + lVar35) = auVar106._0_4_;
      lVar26 = (longlong)iStack_63c;
      uVar4 = vextractps_avx(auVar106,1);
      *(undefined4 *)(param_1 + lVar26) = uVar4;
      lVar36 = (longlong)iStack_638;
      uVar4 = vextractps_avx(auVar106,2);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar28 = (longlong)iStack_634;
      uVar4 = vextractps_avx(auVar106,3);
      *(undefined4 *)(param_1 + lVar28) = uVar4;
      lVar33 = (longlong)iStack_630;
      auVar58 = auVar128._16_16_;
      *(float *)(param_1 + lVar33) = auVar128._16_4_;
      lVar34 = (longlong)iStack_62c;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      lVar29 = (longlong)iStack_628;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar31 = (longlong)iStack_624;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + lVar31) = uVar4;
      fVar138 = (float)(~uVar147 & auVar77._0_4_) * fVar37;
      fVar140 = (float)(~uVar150 & auVar77._4_4_) * fVar50;
      fVar141 = (float)(~uVar151 & auVar77._8_4_) * fVar52;
      fVar142 = (float)(~uVar152 & auVar77._12_4_) * fVar54;
      fVar143 = (float)(~uVar153 & auVar77._16_4_) * fVar56;
      fVar144 = (float)(~uVar154 & auVar77._20_4_) * fVar59;
      fVar145 = (float)(~uVar155 & auVar77._24_4_) * fVar61;
      fVar146 = (float)(~uVar156 & auVar77._28_4_) * fVar63;
      in_ZMM10 = ZEXT3264(CONCAT428(fVar146,CONCAT424(fVar145,CONCAT420(fVar144,CONCAT416(fVar143,
                                                  CONCAT412(fVar142,CONCAT48(fVar141,CONCAT44(
                                                  fVar140,fVar138))))))));
      auVar168._0_4_ = fVar2 * fVar138 + auVar112._0_4_;
      auVar168._4_4_ = fVar3 * fVar140 + auVar112._4_4_;
      auVar168._8_4_ = fVar7 * fVar141 + auVar112._8_4_;
      auVar168._12_4_ = fVar8 * fVar142 + auVar112._12_4_;
      auVar169._16_4_ = fVar9 * fVar143 + auVar112._16_4_;
      auVar169._0_16_ = auVar168;
      auVar169._20_4_ = fVar10 * fVar144 + auVar112._20_4_;
      auVar169._24_4_ = fVar11 * fVar145 + auVar112._24_4_;
      auVar169._28_4_ = fVar12 * fVar146 + auVar112._28_4_;
      *(float *)(param_1 + 4 + lVar35) = auVar168._0_4_;
      uVar4 = vextractps_avx(auVar168,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar168,2);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar168,3);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar4;
      auVar58 = auVar169._16_16_;
      *(float *)(param_1 + 4 + lVar33) = auVar169._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      local_600._0_4_ = auVar159._0_4_;
      local_600._4_4_ = auVar159._4_4_;
      fStack_5f8 = auVar159._8_4_;
      fStack_5f4 = auVar159._12_4_;
      fStack_5f0 = auVar159._16_4_;
      fStack_5ec = auVar159._20_4_;
      fStack_5e8 = auVar159._24_4_;
      fStack_5e4 = auVar159._28_4_;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
      fVar167 = (float)(~uVar147 & local_600._0_4_) * fVar37;
      fVar172 = (float)(~uVar150 & local_600._4_4_) * fVar50;
      fVar173 = (float)(~uVar151 & (uint)fStack_5f8) * fVar52;
      fVar174 = (float)(~uVar152 & (uint)fStack_5f4) * fVar54;
      fVar175 = (float)(~uVar153 & (uint)fStack_5f0) * fVar56;
      fVar176 = (float)(~uVar154 & (uint)fStack_5ec) * fVar59;
      fVar177 = (float)(~uVar155 & (uint)fStack_5e8) * fVar61;
      fVar178 = (float)(~uVar156 & (uint)fStack_5e4) * fVar63;
      auVar87._0_4_ = fVar2 * fVar167 + auVar89._0_4_;
      auVar87._4_4_ = fVar3 * fVar172 + auVar89._4_4_;
      auVar87._8_4_ = fVar7 * fVar173 + auVar89._8_4_;
      auVar87._12_4_ = fVar8 * fVar174 + auVar89._12_4_;
      auVar112._16_4_ = fVar9 * fVar175 + auVar89._16_4_;
      auVar112._0_16_ = auVar87;
      auVar112._20_4_ = fVar10 * fVar176 + auVar89._20_4_;
      auVar112._24_4_ = fVar11 * fVar177 + auVar89._24_4_;
      auVar112._28_4_ = fVar12 * fVar178 + auVar89._28_4_;
      *(float *)(param_1 + 8 + lVar35) = auVar87._0_4_;
      uVar4 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar4;
      auVar58 = auVar112._16_16_;
      *(float *)(param_1 + 8 + lVar33) = auVar112._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
      *(float *)(param_1 + 0xc + lVar35) = fVar2;
      auVar58 = auVar90._0_16_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar4;
      auVar58 = auVar90._16_16_;
      *(float *)(param_1 + 0xc + lVar33) = fVar9;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar4;
      auVar88._0_4_ = fVar64 * fVar126 * local_5a0 + auVar139._0_4_;
      auVar88._4_4_ = fVar68 * fVar131 * fStack_59c + auVar139._4_4_;
      auVar88._8_4_ = fVar69 * fVar132 * fStack_598 + auVar139._8_4_;
      auVar88._12_4_ = fVar70 * fVar133 * fStack_594 + auVar139._12_4_;
      auVar90._16_4_ = fVar71 * fVar134 * fStack_590 + auVar139._16_4_;
      auVar90._0_16_ = auVar88;
      auVar90._20_4_ = fVar72 * fVar135 * fStack_58c + auVar139._20_4_;
      auVar90._24_4_ = fVar73 * fVar136 * fStack_588 + auVar139._24_4_;
      auVar90._28_4_ = fVar74 * fVar137 * fStack_584 + auVar139._28_4_;
      local_240 = auVar170._0_4_;
      iStack_23c = auVar170._4_4_;
      iStack_238 = auVar170._8_4_;
      iStack_234 = auVar170._12_4_;
      iStack_230 = auVar170._16_4_;
      iStack_22c = auVar170._20_4_;
      iStack_228 = auVar170._24_4_;
      iStack_224 = auVar170._28_4_;
      lVar33 = (longlong)local_240;
      *(float *)(param_1 + lVar33) = auVar88._0_4_;
      lVar28 = (longlong)iStack_23c;
      uVar4 = vextractps_avx(auVar88,1);
      *(undefined4 *)(param_1 + lVar28) = uVar4;
      lVar26 = (longlong)iStack_238;
      uVar4 = vextractps_avx(auVar88,2);
      *(undefined4 *)(param_1 + lVar26) = uVar4;
      lVar29 = (longlong)iStack_234;
      uVar4 = vextractps_avx(auVar88,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar35 = (longlong)iStack_230;
      auVar58 = auVar90._16_16_;
      *(float *)(param_1 + lVar35) = auVar90._16_4_;
      lVar31 = (longlong)iStack_22c;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + lVar31) = uVar4;
      lVar36 = (longlong)iStack_228;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar34 = (longlong)iStack_224;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      auVar58._0_4_ = fVar64 * fVar138 * local_5a0 + local_580;
      auVar58._4_4_ = fVar68 * fVar140 * fStack_59c + fStack_57c;
      auVar58._8_4_ = fVar69 * fVar141 * fStack_598 + fStack_578;
      auVar58._12_4_ = fVar70 * fVar142 * fStack_594 + fStack_574;
      auVar159._16_4_ = fVar71 * fVar143 * fStack_590 + fStack_570;
      auVar159._0_16_ = auVar58;
      auVar159._20_4_ = fVar72 * fVar144 * fStack_58c + fStack_56c;
      auVar159._24_4_ = fVar73 * fVar145 * fStack_588 + fStack_568;
      auVar159._28_4_ = fVar74 * fVar146 * fStack_584 + fStack_564;
      *(float *)(param_1 + 4 + lVar33) = auVar58._0_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      auVar58 = auVar159._16_16_;
      *(float *)(param_1 + 4 + lVar35) = auVar159._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      auVar39._0_4_ = fVar64 * fVar167 * local_5a0 + (float)local_620._0_4_;
      auVar39._4_4_ = fVar68 * fVar172 * fStack_59c + (float)local_620._4_4_;
      auVar39._8_4_ = fVar69 * fVar173 * fStack_598 + fStack_618;
      auVar39._12_4_ = fVar70 * fVar174 * fStack_594 + fStack_614;
      auVar107._16_4_ = fVar71 * fVar175 * fStack_590 + fStack_610;
      auVar107._0_16_ = auVar39;
      auVar107._20_4_ = fVar72 * fVar176 * fStack_58c + fStack_60c;
      auVar107._24_4_ = fVar73 * fVar177 * fStack_588 + fStack_608;
      auVar107._28_4_ = fVar74 * fVar178 * fStack_584 + fStack_604;
      *(float *)(param_1 + 8 + lVar33) = auVar39._0_4_;
      uVar4 = vextractps_avx(auVar39,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar39,2);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar39,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      auVar58 = auVar107._16_16_;
      *(float *)(param_1 + 8 + lVar35) = auVar107._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      *(float *)(param_1 + 0xc + lVar33) = local_5a0;
      auVar58 = auVar66._0_16_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      auVar58 = auVar66._16_16_;
      *(float *)(param_1 + 0xc + lVar35) = fStack_590;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      auVar65._0_4_ = fVar111 * fVar126 * local_5c0 + auVar162._0_4_;
      auVar65._4_4_ = fVar119 * fVar131 * fStack_5bc + auVar162._4_4_;
      auVar65._8_4_ = fVar120 * fVar132 * fStack_5b8 + auVar162._8_4_;
      auVar65._12_4_ = fVar121 * fVar133 * fStack_5b4 + auVar162._12_4_;
      auVar89._16_4_ = fVar122 * fVar134 * fStack_5b0 + auVar162._16_4_;
      auVar89._0_16_ = auVar65;
      auVar89._20_4_ = fVar123 * fVar135 * fStack_5ac + auVar162._20_4_;
      auVar89._24_4_ = fVar124 * fVar136 * fStack_5a8 + auVar162._24_4_;
      auVar89._28_4_ = fVar125 * fVar137 * fStack_5a4 + auVar162._28_4_;
      local_540 = auVar129._0_4_;
      iStack_53c = auVar129._4_4_;
      iStack_538 = auVar129._8_4_;
      iStack_534 = auVar129._12_4_;
      iStack_530 = auVar129._16_4_;
      iStack_52c = auVar129._20_4_;
      iStack_528 = auVar129._24_4_;
      iStack_524 = auVar129._28_4_;
      lVar33 = (longlong)local_540;
      *(float *)(param_1 + lVar33) = auVar65._0_4_;
      lVar28 = (longlong)iStack_53c;
      uVar4 = vextractps_avx(auVar65,1);
      *(undefined4 *)(param_1 + lVar28) = uVar4;
      lVar26 = (longlong)iStack_538;
      uVar4 = vextractps_avx(auVar65,2);
      *(undefined4 *)(param_1 + lVar26) = uVar4;
      lVar29 = (longlong)iStack_534;
      uVar4 = vextractps_avx(auVar65,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar35 = (longlong)iStack_530;
      auVar58 = auVar89._16_16_;
      *(float *)(param_1 + lVar35) = auVar89._16_4_;
      lVar31 = (longlong)iStack_52c;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + lVar31) = uVar4;
      lVar36 = (longlong)iStack_528;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar34 = (longlong)iStack_524;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      auVar40._0_4_ = fVar111 * fVar138 * local_5c0 + (float)local_6c0._0_4_;
      auVar40._4_4_ = fVar119 * fVar140 * fStack_5bc + (float)local_6c0._4_4_;
      auVar40._8_4_ = fVar120 * fVar141 * fStack_5b8 + fStack_6b8;
      auVar40._12_4_ = fVar121 * fVar142 * fStack_5b4 + fStack_6b4;
      auVar45._16_4_ = fVar122 * fVar143 * fStack_5b0 + fStack_6b0;
      auVar45._0_16_ = auVar40;
      auVar45._20_4_ = fVar123 * fVar144 * fStack_5ac + fStack_6ac;
      auVar45._24_4_ = fVar124 * fVar145 * fStack_5a8 + fStack_6a8;
      auVar45._28_4_ = fVar125 * fVar146 * fStack_5a4 + fStack_6a4;
      *(float *)(param_1 + 4 + lVar33) = auVar40._0_4_;
      uVar4 = vextractps_avx(auVar40,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar40,2);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar40,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      auVar58 = auVar45._16_16_;
      *(float *)(param_1 + 4 + lVar35) = auVar45._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      auVar41._0_4_ = fVar111 * fVar167 * local_5c0 + local_6a0;
      auVar41._4_4_ = fVar119 * fVar172 * fStack_5bc + fStack_69c;
      auVar41._8_4_ = fVar120 * fVar173 * fStack_5b8 + fStack_698;
      auVar41._12_4_ = fVar121 * fVar174 * fStack_5b4 + fStack_694;
      auVar66._16_4_ = fVar122 * fVar175 * fStack_5b0 + fStack_690;
      auVar66._0_16_ = auVar41;
      auVar66._20_4_ = fVar123 * fVar176 * fStack_5ac + fStack_68c;
      auVar66._24_4_ = fVar124 * fVar177 * fStack_5a8 + fStack_688;
      auVar66._28_4_ = fVar125 * fVar178 * fStack_5a4 + fStack_684;
      *(float *)(param_1 + 8 + lVar33) = auVar41._0_4_;
      uVar4 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      auVar58 = auVar66._16_16_;
      *(float *)(param_1 + 8 + lVar35) = auVar66._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      *(float *)(param_1 + 0xc + lVar33) = local_5c0;
      auVar58 = auVar47._0_16_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      auVar58 = auVar47._16_16_;
      *(float *)(param_1 + 0xc + lVar35) = fStack_5b0;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      auVar42._0_4_ = fVar75 * fVar126 * fVar57 + auVar104._0_4_;
      auVar42._4_4_ = fVar79 * fVar131 * fVar60 + auVar104._4_4_;
      auVar42._8_4_ = fVar80 * fVar132 * fVar62 + auVar104._8_4_;
      auVar42._12_4_ = fVar81 * fVar133 * fVar110 + auVar104._12_4_;
      auVar47._16_4_ = fVar82 * fVar134 * fVar100 + auVar104._16_4_;
      auVar47._0_16_ = auVar42;
      auVar47._20_4_ = fVar51 * fVar135 * fVar101 + auVar104._20_4_;
      auVar47._24_4_ = fVar53 * fVar136 * fVar102 + auVar104._24_4_;
      auVar47._28_4_ = fVar55 * fVar137 * fVar103 + auVar104._28_4_;
      local_500 = auVar48._0_4_;
      iStack_4fc = auVar48._4_4_;
      iStack_4f8 = auVar48._8_4_;
      iStack_4f4 = auVar48._12_4_;
      iStack_4f0 = auVar48._16_4_;
      iStack_4ec = auVar48._20_4_;
      iStack_4e8 = auVar48._24_4_;
      iStack_4e4 = auVar48._28_4_;
      lVar35 = (longlong)local_500;
      *(float *)(param_1 + lVar35) = auVar42._0_4_;
      lVar26 = (longlong)iStack_4fc;
      uVar4 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + lVar26) = uVar4;
      lVar33 = (longlong)iStack_4f8;
      uVar4 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + lVar33) = uVar4;
      lVar28 = (longlong)iStack_4f4;
      uVar4 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + lVar28) = uVar4;
      lVar36 = (longlong)iStack_4f0;
      auVar58 = auVar47._16_16_;
      *(float *)(param_1 + lVar36) = auVar47._16_4_;
      lVar34 = (longlong)iStack_4ec;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      lVar29 = (longlong)iStack_4e8;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar31 = (longlong)iStack_4e4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + lVar31) = uVar4;
      auVar43._0_4_ = fVar75 * fVar138 * fVar57 + auVar165._0_4_;
      auVar43._4_4_ = fVar79 * fVar140 * fVar60 + auVar165._4_4_;
      auVar43._8_4_ = fVar80 * fVar141 * fVar62 + auVar165._8_4_;
      auVar43._12_4_ = fVar81 * fVar142 * fVar110 + auVar165._12_4_;
      auVar104._16_4_ = fVar82 * fVar143 * fVar100 + auVar165._16_4_;
      auVar104._0_16_ = auVar43;
      auVar104._20_4_ = fVar51 * fVar144 * fVar101 + auVar165._20_4_;
      auVar104._24_4_ = fVar53 * fVar145 * fVar102 + auVar165._24_4_;
      auVar104._28_4_ = fVar55 * fVar146 * fVar103 + auVar165._28_4_;
      *(float *)(param_1 + 4 + lVar35) = auVar43._0_4_;
      uVar4 = vextractps_avx(auVar43,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar43,2);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar43,3);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar4;
      auVar58 = auVar104._16_16_;
      *(float *)(param_1 + 4 + lVar36) = auVar104._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar4;
      auVar44._0_4_ = fVar75 * fVar167 * fVar57 + auVar157._0_4_;
      auVar44._4_4_ = fVar79 * fVar172 * fVar60 + auVar157._4_4_;
      auVar44._8_4_ = fVar80 * fVar173 * fVar62 + auVar157._8_4_;
      auVar44._12_4_ = fVar81 * fVar174 * fVar110 + auVar157._12_4_;
      auVar48._16_4_ = fVar82 * fVar175 * fVar100 + auVar157._16_4_;
      auVar48._0_16_ = auVar44;
      auVar48._20_4_ = fVar51 * fVar176 * fVar101 + auVar157._20_4_;
      auVar48._24_4_ = fVar53 * fVar177 * fVar102 + auVar157._24_4_;
      auVar48._28_4_ = fVar55 * fVar178 * fVar103 + auVar157._28_4_;
      *(float *)(param_1 + 8 + lVar35) = auVar44._0_4_;
      uVar4 = vextractps_avx(auVar44,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar44,2);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar44,3);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar4;
      auVar58 = auVar48._16_16_;
      *(float *)(param_1 + 8 + lVar36) = auVar48._16_4_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar4;
      pfVar1 = (float *)(param_5 + uVar27);
      *pfVar1 = fVar13 + fVar37;
      pfVar1[1] = fVar14 + fVar50;
      pfVar1[2] = fVar15 + fVar52;
      pfVar1[3] = fVar16 + fVar54;
      pfVar1[4] = fVar17 + fVar56;
      pfVar1[5] = fVar18 + fVar59;
      pfVar1[6] = fVar19 + fVar61;
      pfVar1[7] = fVar20 + fVar63;
      *(float *)(param_1 + 0xc + lVar35) = fVar57;
      auVar58 = auVar93._0_16_;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar4;
      auVar58 = auVar93._16_16_;
      *(float *)(param_1 + 0xc + lVar36) = fVar100;
      uVar4 = vextractps_avx(auVar58,1);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      uVar4 = vextractps_avx(auVar58,2);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar58,3);
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar4;
      uVar30 = uVar30 + 0x20;
      uVar32 = uVar32 + 8;
    } while ((int)uVar32 < (int)(uVar23 & 0xfffffff8));
  }
  if ((int)param_13 <= (int)uVar32) {
    return;
  }
  auVar129._4_4_ = uVar32;
  auVar129._0_4_ = uVar32;
  auVar129._8_4_ = uVar32;
  auVar129._12_4_ = uVar32;
  auVar129._16_4_ = uVar32;
  auVar129._20_4_ = uVar32;
  auVar129._24_4_ = uVar32;
  auVar129._28_4_ = uVar32;
  auVar83 = vpor_avx2(auVar129,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar162._4_4_ = param_13;
  auVar162._0_4_ = param_13;
  auVar162._8_4_ = param_13;
  auVar162._12_4_ = param_13;
  auVar162._16_4_ = param_13;
  auVar162._20_4_ = param_13;
  auVar162._24_4_ = param_13;
  auVar162._28_4_ = param_13;
  auVar83 = vpcmpgtd_avx2(auVar162,auVar83);
  lVar26 = (ulonglong)uVar32 * 0x10;
  pauVar25 = (undefined1 (*) [32])(param_2 + lVar26);
  uVar23 = vmovmskps_avx(auVar83);
  if (uVar23 == 0xff) {
    auVar108 = vperm2i128_avx2(*pauVar25,pauVar25[2],0x20);
    auVar76 = vperm2i128_avx2(*pauVar25,pauVar25[2],0x31);
    auVar104 = vperm2i128_avx2(pauVar25[1],pauVar25[3],0x20);
    auVar107 = vperm2i128_avx2(pauVar25[1],pauVar25[3],0x31);
    auVar77 = vpunpckldq_avx2(auVar108,auVar76);
    auVar108 = vpunpckhdq_avx2(auVar108,auVar76);
    auVar159 = vpunpckldq_avx2(auVar104,auVar107);
    auVar76 = vpunpckhdq_avx2(auVar104,auVar107);
    auVar45 = vpunpcklqdq_avx2(auVar77,auVar159);
    auVar93 = vpunpckhqdq_avx2(auVar77,auVar159);
    auVar46 = vpunpcklqdq_avx2(auVar108,auVar76);
    auVar157 = vpunpckhqdq_avx2(auVar108,auVar76);
    auVar108 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar26);
    auVar76 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar26);
    auVar77 = *(undefined1 (*) [32])(param_3 + 0x60 + lVar26);
    auVar159 = vperm2f128_avx(*(undefined1 (*) [32])(param_3 + lVar26),auVar76,0x20);
    auVar104 = vperm2f128_avx(*(undefined1 (*) [32])(param_3 + lVar26),auVar76,0x31);
    auVar107 = vperm2f128_avx(auVar108,auVar77,0x20);
    auVar139 = vperm2f128_avx(auVar108,auVar77,0x31);
    auVar76 = vunpcklps_avx(auVar159,auVar104);
    auVar108 = vunpckhps_avx(auVar159,auVar104);
    auVar77 = vunpcklps_avx(auVar107,auVar139);
    _local_620 = vunpckhpd_avx(auVar76,auVar77);
    auVar76 = vunpckhps_avx(auVar107,auVar139);
    _local_660 = vunpcklpd_avx(auVar108,auVar76);
    _local_6c0 = vunpckhpd_avx(auVar108,auVar76);
  }
  else {
    auVar45 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar83);
    auVar93 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar83);
    auVar46 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
    auVar157 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
    _local_620 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
    _local_660 = vgatherdps(ZEXT832(0),auVar83);
    _local_6c0 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
  }
  auVar90 = vpslld_avx2(auVar45,4);
  auVar165._4_4_ = __real_00000004;
  auVar165._0_4_ = __real_00000004;
  auVar165._8_4_ = __real_00000004;
  auVar165._12_4_ = __real_00000004;
  auVar165._16_4_ = __real_00000004;
  auVar165._20_4_ = __real_00000004;
  auVar165._24_4_ = __real_00000004;
  auVar165._28_4_ = __real_00000004;
  vpor_avx2(auVar90,auVar165);
  auVar76 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
  auVar170._4_4_ = __real_00000008;
  auVar170._0_4_ = __real_00000008;
  auVar170._8_4_ = __real_00000008;
  auVar170._12_4_ = __real_00000008;
  auVar170._16_4_ = __real_00000008;
  auVar170._20_4_ = __real_00000008;
  auVar170._24_4_ = __real_00000008;
  auVar170._28_4_ = __real_00000008;
  vpor_avx2(auVar90,auVar170);
  auVar77 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  auVar158._4_4_ = __real_0000000c;
  auVar158._0_4_ = __real_0000000c;
  auVar158._8_4_ = __real_0000000c;
  auVar158._12_4_ = __real_0000000c;
  auVar158._16_4_ = __real_0000000c;
  auVar158._20_4_ = __real_0000000c;
  auVar158._24_4_ = __real_0000000c;
  auVar158._28_4_ = __real_0000000c;
  vpor_avx2(auVar90,auVar158);
  auVar48 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  auVar92 = vpslld_avx2(auVar93,4);
  vpor_avx2(auVar92,auVar165);
  auVar104 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  vpor_avx2(auVar92,auVar170);
  auVar107 = vgatherdps(ZEXT832(0),auVar83);
  vpor_avx2(auVar92,auVar158);
  auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  auVar128 = vpslld_avx2(auVar46,4);
  vpor_avx2(auVar128,auVar165);
  auVar93 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  vpor_avx2(auVar128,auVar170);
  auVar129 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  vpor_avx2(auVar128,auVar158);
  auVar91 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
  auVar89 = vpslld_avx2(auVar157,4);
  vpor_avx2(auVar89,auVar165);
  auVar46 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  vpor_avx2(auVar170,auVar89);
  auVar47 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  vpor_avx2(auVar158,auVar89);
  auVar112 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
  auVar108 = vgatherdps(ZEXT832(0),auVar83);
  auVar159 = vgatherdps(ZEXT832(0) << 0x20,auVar83);
  auVar139 = vgatherdps(ZEXT832(0),auVar83);
  auVar45 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar83);
  auVar108 = vmaskmovps_avx(auVar83,auVar108);
  auVar76 = vmaskmovps_avx(auVar83,auVar76);
  auVar77 = vmaskmovps_avx(auVar83,auVar77);
  auVar159 = vmaskmovps_avx(auVar83,auVar159);
  auVar104 = vmaskmovps_avx(auVar83,auVar104);
  auVar107 = vmaskmovps_avx(auVar83,auVar107);
  auVar139 = vmaskmovps_avx(auVar83,auVar139);
  auVar93 = vmaskmovps_avx(auVar83,auVar93);
  auVar157 = vmaskmovps_avx(auVar83,auVar129);
  auVar45 = vmaskmovps_avx(auVar83,auVar45);
  auVar46 = vmaskmovps_avx(auVar83,auVar46);
  auVar47 = vmaskmovps_avx(auVar83,auVar47);
  local_1c0 = auVar159._0_4_;
  fStack_1bc = auVar159._4_4_;
  fStack_1b8 = auVar159._8_4_;
  fStack_1b4 = auVar159._12_4_;
  fStack_1b0 = auVar159._16_4_;
  fStack_1ac = auVar159._20_4_;
  fStack_1a8 = auVar159._24_4_;
  fStack_1a4 = auVar159._28_4_;
  local_1a0 = auVar104._0_4_;
  fStack_19c = auVar104._4_4_;
  fStack_198 = auVar104._8_4_;
  fStack_194 = auVar104._12_4_;
  fStack_190 = auVar104._16_4_;
  fStack_18c = auVar104._20_4_;
  fStack_188 = auVar104._24_4_;
  fStack_184 = auVar104._28_4_;
  local_180 = auVar107._0_4_;
  fStack_17c = auVar107._4_4_;
  fStack_178 = auVar107._8_4_;
  fStack_174 = auVar107._12_4_;
  fStack_170 = auVar107._16_4_;
  fStack_16c = auVar107._20_4_;
  fStack_168 = auVar107._24_4_;
  fStack_164 = auVar107._28_4_;
  local_220 = auVar139._0_4_;
  fStack_21c = auVar139._4_4_;
  fStack_218 = auVar139._8_4_;
  fStack_214 = auVar139._12_4_;
  fStack_210 = auVar139._16_4_;
  fStack_20c = auVar139._20_4_;
  fStack_208 = auVar139._24_4_;
  fStack_204 = auVar139._28_4_;
  local_200 = auVar93._0_4_;
  fStack_1fc = auVar93._4_4_;
  fStack_1f8 = auVar93._8_4_;
  fStack_1f4 = auVar93._12_4_;
  fStack_1f0 = auVar93._16_4_;
  fStack_1ec = auVar93._20_4_;
  fStack_1e8 = auVar93._24_4_;
  fStack_1e4 = auVar93._28_4_;
  local_1e0 = auVar157._0_4_;
  fStack_1dc = auVar157._4_4_;
  fStack_1d8 = auVar157._8_4_;
  fStack_1d4 = auVar157._12_4_;
  fStack_1d0 = auVar157._16_4_;
  fStack_1cc = auVar157._20_4_;
  fStack_1c8 = auVar157._24_4_;
  fStack_1c4 = auVar157._28_4_;
  uVar6 = local_660._0_4_;
  uVar21 = local_660._4_4_;
  fVar74 = fStack_658;
  fVar75 = fStack_654;
  fVar79 = fStack_650;
  fVar80 = fStack_64c;
  fVar81 = fStack_648;
  fVar82 = fStack_644;
  fVar2 = auVar91._0_4_;
  fVar64 = auVar91._4_4_;
  fVar68 = auVar91._8_4_;
  fVar69 = auVar91._12_4_;
  fVar70 = auVar91._16_4_;
  fVar71 = auVar91._20_4_;
  fVar72 = auVar91._24_4_;
  fVar73 = auVar91._28_4_;
  local_5c0 = auVar66._0_4_;
  fStack_5bc = auVar66._4_4_;
  fStack_5b8 = auVar66._8_4_;
  fStack_5b4 = auVar66._12_4_;
  fStack_5b0 = auVar66._16_4_;
  fStack_5ac = auVar66._20_4_;
  fStack_5a8 = auVar66._24_4_;
  fStack_5a4 = auVar66._28_4_;
  lVar26 = (longlong)(int)(uVar32 << 2);
  fVar38 = *param_8;
  auVar171._4_4_ = fVar38;
  auVar171._0_4_ = fVar38;
  auVar171._8_4_ = fVar38;
  auVar171._12_4_ = fVar38;
  auVar171._16_4_ = fVar38;
  auVar171._20_4_ = fVar38;
  auVar171._24_4_ = fVar38;
  auVar171._28_4_ = fVar38;
  if ((param_7 & 1) != 0) {
    auVar159 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_9 + lVar26));
    fVar51 = param_8[1];
    auVar171._0_4_ = auVar159._0_4_ * fVar51 + fVar38;
    auVar171._4_4_ = auVar159._4_4_ * fVar51 + fVar38;
    auVar171._8_4_ = auVar159._8_4_ * fVar51 + fVar38;
    auVar171._12_4_ = auVar159._12_4_ * fVar51 + fVar38;
    auVar171._16_4_ = auVar159._16_4_ * fVar51 + fVar38;
    auVar171._20_4_ = auVar159._20_4_ * fVar51 + fVar38;
    auVar171._24_4_ = auVar159._24_4_ * fVar51 + fVar38;
    auVar171._28_4_ = auVar159._28_4_ * fVar51 + fVar38;
  }
  local_460 = auVar45._0_4_;
  auVar109._0_4_ =
       -((float)local_6c0._0_4_ * local_460) +
       (-(local_1c0 * (float)local_620._0_4_) - (float)local_660._0_4_ * local_220);
  fStack_45c = auVar45._4_4_;
  auVar109._4_4_ =
       -((float)local_6c0._4_4_ * fStack_45c) +
       (-(fStack_1bc * (float)local_620._4_4_) - (float)local_660._4_4_ * fStack_21c);
  fStack_458 = auVar45._8_4_;
  auVar109._8_4_ =
       -(fStack_6b8 * fStack_458) + (-(fStack_1b8 * fStack_618) - fStack_658 * fStack_218);
  fStack_454 = auVar45._12_4_;
  auVar109._12_4_ =
       -(fStack_6b4 * fStack_454) + (-(fStack_1b4 * fStack_614) - fStack_654 * fStack_214);
  fStack_450 = auVar45._16_4_;
  auVar109._16_4_ =
       -(fStack_6b0 * fStack_450) + (-(fStack_1b0 * fStack_610) - fStack_650 * fStack_210);
  fStack_44c = auVar45._20_4_;
  auVar109._20_4_ =
       -(fStack_6ac * fStack_44c) + (-(fStack_1ac * fStack_60c) - fStack_64c * fStack_20c);
  fStack_448 = auVar45._24_4_;
  auVar109._24_4_ =
       -(fStack_6a8 * fStack_448) + (-(fStack_1a8 * fStack_608) - fStack_648 * fStack_208);
  fStack_444 = auVar45._28_4_;
  auVar109._28_4_ =
       -(fStack_6a4 * fStack_444) + (-(fStack_1a4 * fStack_604) - fStack_644 * fStack_204);
  local_440 = auVar46._0_4_;
  auVar105._0_4_ =
       -((float)local_6c0._0_4_ * local_440) +
       (-(local_1a0 * (float)local_620._0_4_) - (float)local_660._0_4_ * local_200);
  fStack_43c = auVar46._4_4_;
  auVar105._4_4_ =
       -((float)local_6c0._4_4_ * fStack_43c) +
       (-(fStack_19c * (float)local_620._4_4_) - (float)local_660._4_4_ * fStack_1fc);
  fStack_438 = auVar46._8_4_;
  auVar105._8_4_ =
       -(fStack_6b8 * fStack_438) + (-(fStack_198 * fStack_618) - fStack_658 * fStack_1f8);
  fStack_434 = auVar46._12_4_;
  auVar105._12_4_ =
       -(fStack_6b4 * fStack_434) + (-(fStack_194 * fStack_614) - fStack_654 * fStack_1f4);
  fStack_430 = auVar46._16_4_;
  auVar105._16_4_ =
       -(fStack_6b0 * fStack_430) + (-(fStack_190 * fStack_610) - fStack_650 * fStack_1f0);
  fStack_42c = auVar46._20_4_;
  auVar105._20_4_ =
       -(fStack_6ac * fStack_42c) + (-(fStack_18c * fStack_60c) - fStack_64c * fStack_1ec);
  fStack_428 = auVar46._24_4_;
  auVar105._24_4_ =
       -(fStack_6a8 * fStack_428) + (-(fStack_188 * fStack_608) - fStack_648 * fStack_1e8);
  fStack_424 = auVar46._28_4_;
  auVar105._28_4_ =
       -(fStack_6a4 * fStack_424) + (-(fStack_184 * fStack_604) - fStack_644 * fStack_1e4);
  local_420 = auVar47._0_4_;
  auVar166._0_4_ =
       -((float)local_6c0._0_4_ * local_420) +
       (-(local_180 * (float)local_620._0_4_) - (float)local_660._0_4_ * local_1e0);
  fStack_41c = auVar47._4_4_;
  auVar166._4_4_ =
       -((float)local_6c0._4_4_ * fStack_41c) +
       (-(fStack_17c * (float)local_620._4_4_) - (float)local_660._4_4_ * fStack_1dc);
  fStack_418 = auVar47._8_4_;
  auVar166._8_4_ =
       -(fStack_6b8 * fStack_418) + (-(fStack_178 * fStack_618) - fStack_658 * fStack_1d8);
  fStack_414 = auVar47._12_4_;
  auVar166._12_4_ =
       -(fStack_6b4 * fStack_414) + (-(fStack_174 * fStack_614) - fStack_654 * fStack_1d4);
  fStack_410 = auVar47._16_4_;
  auVar166._16_4_ =
       -(fStack_6b0 * fStack_410) + (-(fStack_170 * fStack_610) - fStack_650 * fStack_1d0);
  fStack_40c = auVar47._20_4_;
  auVar166._20_4_ =
       -(fStack_6ac * fStack_40c) + (-(fStack_16c * fStack_60c) - fStack_64c * fStack_1cc);
  fStack_408 = auVar47._24_4_;
  auVar166._24_4_ =
       -(fStack_6a8 * fStack_408) + (-(fStack_168 * fStack_608) - fStack_648 * fStack_1c8);
  fStack_404 = auVar47._28_4_;
  auVar166._28_4_ =
       -(fStack_6a4 * fStack_404) + (-(fStack_164 * fStack_604) - fStack_644 * fStack_1c4);
  auVar159 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_4 + lVar26));
  auVar104 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_5 + lVar26));
  local_6a0 = auVar112._0_4_;
  fStack_69c = auVar112._4_4_;
  fStack_698 = auVar112._8_4_;
  fStack_694 = auVar112._12_4_;
  fStack_690 = auVar112._16_4_;
  fStack_68c = auVar112._20_4_;
  fStack_688 = auVar112._24_4_;
  fStack_684 = auVar112._28_4_;
  fVar38 = *param_11;
  auVar49._4_4_ = fVar38;
  auVar49._0_4_ = fVar38;
  auVar49._8_4_ = fVar38;
  auVar49._12_4_ = fVar38;
  auVar49._16_4_ = fVar38;
  auVar49._20_4_ = fVar38;
  auVar49._24_4_ = fVar38;
  auVar49._28_4_ = fVar38;
  if ((param_10 & 1) != 0) {
    auVar107 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_12 + lVar26));
    fVar51 = param_11[1];
    auVar49._0_4_ = auVar107._0_4_ * fVar51 + fVar38;
    auVar49._4_4_ = auVar107._4_4_ * fVar51 + fVar38;
    auVar49._8_4_ = auVar107._8_4_ * fVar51 + fVar38;
    auVar49._12_4_ = auVar107._12_4_ * fVar51 + fVar38;
    auVar49._16_4_ = auVar107._16_4_ * fVar51 + fVar38;
    auVar49._20_4_ = auVar107._20_4_ * fVar51 + fVar38;
    auVar49._24_4_ = auVar107._24_4_ * fVar51 + fVar38;
    auVar49._28_4_ = auVar107._28_4_ * fVar51 + fVar38;
  }
  auVar107 = vsubps_avx(auVar108,auVar109);
  auVar93 = vsubps_avx(auVar76,auVar105);
  auVar45 = vsubps_avx(auVar77,auVar166);
  auVar163._0_4_ =
       auVar45._0_4_ * auVar45._0_4_ +
       auVar107._0_4_ * auVar107._0_4_ + auVar93._0_4_ * auVar93._0_4_;
  auVar163._4_4_ =
       auVar45._4_4_ * auVar45._4_4_ +
       auVar107._4_4_ * auVar107._4_4_ + auVar93._4_4_ * auVar93._4_4_;
  auVar163._8_4_ =
       auVar45._8_4_ * auVar45._8_4_ +
       auVar107._8_4_ * auVar107._8_4_ + auVar93._8_4_ * auVar93._8_4_;
  auVar163._12_4_ =
       auVar45._12_4_ * auVar45._12_4_ +
       auVar107._12_4_ * auVar107._12_4_ + auVar93._12_4_ * auVar93._12_4_;
  auVar163._16_4_ =
       auVar45._16_4_ * auVar45._16_4_ +
       auVar107._16_4_ * auVar107._16_4_ + auVar93._16_4_ * auVar93._16_4_;
  auVar163._20_4_ =
       auVar45._20_4_ * auVar45._20_4_ +
       auVar107._20_4_ * auVar107._20_4_ + auVar93._20_4_ * auVar93._20_4_;
  auVar163._24_4_ =
       auVar45._24_4_ * auVar45._24_4_ +
       auVar107._24_4_ * auVar107._24_4_ + auVar93._24_4_ * auVar93._24_4_;
  auVar163._28_4_ =
       auVar45._28_4_ * auVar45._28_4_ +
       auVar107._28_4_ * auVar107._28_4_ + auVar93._28_4_ * auVar93._28_4_;
  auVar157 = vsqrtps_avx(auVar163);
  auVar149._4_4_ = __real_38d1b717;
  auVar149._0_4_ = __real_38d1b717;
  auVar149._8_4_ = __real_38d1b717;
  auVar149._12_4_ = __real_38d1b717;
  auVar149._16_4_ = __real_38d1b717;
  auVar149._20_4_ = __real_38d1b717;
  auVar149._24_4_ = __real_38d1b717;
  auVar149._28_4_ = __real_38d1b717;
  auVar107 = vdivps_avx(auVar107,auVar157);
  auVar139 = vcmpps_avx(auVar163,auVar149,1);
  auVar164._4_4_ = __real_3f800000;
  auVar164._0_4_ = __real_3f800000;
  auVar164._8_4_ = __real_3f800000;
  auVar164._12_4_ = __real_3f800000;
  auVar164._16_4_ = __real_3f800000;
  auVar164._20_4_ = __real_3f800000;
  auVar164._24_4_ = __real_3f800000;
  auVar164._28_4_ = __real_3f800000;
  auVar107 = vblendvps_avx(auVar107,auVar164,auVar139);
  auVar107 = vmaskmovps_avx(auVar83,auVar107);
  auVar93 = vdivps_avx(auVar93,auVar157);
  uVar32 = auVar139._0_4_;
  auVar94._0_4_ = ~uVar32 & auVar93._0_4_;
  uVar147 = auVar139._4_4_;
  auVar94._4_4_ = ~uVar147 & auVar93._4_4_;
  uVar150 = auVar139._8_4_;
  auVar94._8_4_ = ~uVar150 & auVar93._8_4_;
  uVar151 = auVar139._12_4_;
  auVar94._12_4_ = ~uVar151 & auVar93._12_4_;
  uVar152 = auVar139._16_4_;
  auVar94._16_4_ = ~uVar152 & auVar93._16_4_;
  uVar153 = auVar139._20_4_;
  auVar94._20_4_ = ~uVar153 & auVar93._20_4_;
  uVar154 = auVar139._24_4_;
  auVar94._24_4_ = ~uVar154 & auVar93._24_4_;
  uVar155 = auVar139._28_4_;
  auVar94._28_4_ = ~uVar155 & auVar93._28_4_;
  auVar139 = vmaskmovps_avx(auVar83,auVar94);
  auVar93 = vdivps_avx(auVar45,auVar157);
  auVar95._0_4_ = ~uVar32 & auVar93._0_4_;
  auVar95._4_4_ = ~uVar147 & auVar93._4_4_;
  auVar95._8_4_ = ~uVar150 & auVar93._8_4_;
  auVar95._12_4_ = ~uVar151 & auVar93._12_4_;
  auVar95._16_4_ = ~uVar152 & auVar93._16_4_;
  auVar95._20_4_ = ~uVar153 & auVar93._20_4_;
  auVar95._24_4_ = ~uVar154 & auVar93._24_4_;
  auVar95._28_4_ = ~uVar155 & auVar93._28_4_;
  auVar93 = vmaskmovps_avx(auVar83,auVar95);
  auVar96._0_4_ = ~uVar32 & auVar157._0_4_;
  auVar96._4_4_ = ~uVar147 & auVar157._4_4_;
  auVar96._8_4_ = ~uVar150 & auVar157._8_4_;
  auVar96._12_4_ = ~uVar151 & auVar157._12_4_;
  auVar96._16_4_ = ~uVar152 & auVar157._16_4_;
  auVar96._20_4_ = ~uVar153 & auVar157._20_4_;
  auVar96._24_4_ = ~uVar154 & auVar157._24_4_;
  auVar96._28_4_ = ~uVar155 & auVar157._28_4_;
  auVar157 = vsubps_avx(auVar96,auVar159);
  auVar159 = vcmpps_avx(ZEXT832(0) << 0x20,auVar157,2);
  auVar159 = vblendvps_avx(auVar49,auVar171,auVar159);
  fVar38 = param_6 * param_6 * auVar159._0_4_;
  fVar51 = param_6 * param_6 * auVar159._4_4_;
  fVar53 = param_6 * param_6 * auVar159._8_4_;
  fVar55 = param_6 * param_6 * auVar159._12_4_;
  fVar57 = param_6 * param_6 * auVar159._16_4_;
  fVar60 = param_6 * param_6 * auVar159._20_4_;
  fVar62 = param_6 * param_6 * auVar159._24_4_;
  param_6 = param_6 * param_6 * auVar159._28_4_;
  fVar100 = auVar48._0_4_;
  fVar101 = auVar48._4_4_;
  fVar102 = auVar48._8_4_;
  fVar103 = auVar48._12_4_;
  fVar111 = auVar48._16_4_;
  fVar119 = auVar48._20_4_;
  fVar120 = auVar48._24_4_;
  fVar121 = auVar48._28_4_;
  auVar78._0_4_ =
       fVar38 * (fVar100 +
                -((float)local_6c0._0_4_ * local_6a0) +
                (-((float)local_620._0_4_ * local_5c0) - (float)local_660._0_4_ * fVar2)) +
       __real_3f800000;
  auVar78._4_4_ =
       fVar51 * (fVar101 +
                -((float)local_6c0._4_4_ * fStack_69c) +
                (-((float)local_620._4_4_ * fStack_5bc) - (float)local_660._4_4_ * fVar64)) +
       __real_3f800000;
  auVar78._8_4_ =
       fVar53 * (fVar102 +
                -(fStack_6b8 * fStack_698) + (-(fStack_618 * fStack_5b8) - fStack_658 * fVar68)) +
       __real_3f800000;
  auVar78._12_4_ =
       fVar55 * (fVar103 +
                -(fStack_6b4 * fStack_694) + (-(fStack_614 * fStack_5b4) - fStack_654 * fVar69)) +
       __real_3f800000;
  auVar78._16_4_ =
       fVar57 * (fVar111 +
                -(fStack_6b0 * fStack_690) + (-(fStack_610 * fStack_5b0) - fStack_650 * fVar70)) +
       __real_3f800000;
  auVar78._20_4_ =
       fVar60 * (fVar119 +
                -(fStack_6ac * fStack_68c) + (-(fStack_60c * fStack_5ac) - fStack_64c * fVar71)) +
       __real_3f800000;
  auVar78._24_4_ =
       fVar62 * (fVar120 +
                -(fStack_6a8 * fStack_688) + (-(fStack_608 * fStack_5a8) - fStack_648 * fVar72)) +
       __real_3f800000;
  auVar78._28_4_ =
       param_6 * (fVar121 +
                 -(fStack_6a4 * fStack_684) + (-(fStack_604 * fStack_5a4) - fStack_644 * fVar73)) +
       __real_3f800000;
  auVar97._0_4_ = -(fVar38 * auVar157._0_4_) - auVar104._0_4_;
  auVar97._4_4_ = -(fVar51 * auVar157._4_4_) - auVar104._4_4_;
  auVar97._8_4_ = -(fVar53 * auVar157._8_4_) - auVar104._8_4_;
  auVar97._12_4_ = -(fVar55 * auVar157._12_4_) - auVar104._12_4_;
  auVar97._16_4_ = -(fVar57 * auVar157._16_4_) - auVar104._16_4_;
  auVar97._20_4_ = -(fVar60 * auVar157._20_4_) - auVar104._20_4_;
  auVar97._24_4_ = -(fVar62 * auVar157._24_4_) - auVar104._24_4_;
  auVar97._28_4_ = -(param_6 * auVar157._28_4_) - auVar104._28_4_;
  auVar159 = vdivps_avx(auVar97,auVar78);
  fVar38 = auVar159._0_4_;
  auVar67._0_4_ = auVar104._0_4_ + fVar38;
  fVar51 = auVar159._4_4_;
  auVar67._4_4_ = auVar104._4_4_ + fVar51;
  fVar53 = auVar159._8_4_;
  auVar67._8_4_ = auVar104._8_4_ + fVar53;
  fVar55 = auVar159._12_4_;
  auVar67._12_4_ = auVar104._12_4_ + fVar55;
  fVar57 = auVar159._16_4_;
  auVar67._16_4_ = auVar104._16_4_ + fVar57;
  fVar60 = auVar159._20_4_;
  auVar67._20_4_ = auVar104._20_4_ + fVar60;
  fVar62 = auVar159._24_4_;
  auVar67._24_4_ = auVar104._24_4_ + fVar62;
  fVar110 = auVar159._28_4_;
  auVar67._28_4_ = auVar104._28_4_ + fVar110;
  auVar83 = vmaskmovps_avx(auVar83,auVar67);
  *(undefined1 (*) [32])(param_5 + lVar26) = auVar83;
  local_400 = auVar107._0_4_;
  fStack_3fc = auVar107._4_4_;
  fStack_3f8 = auVar107._8_4_;
  fStack_3f4 = auVar107._12_4_;
  fStack_3f0 = auVar107._16_4_;
  fStack_3ec = auVar107._20_4_;
  fStack_3e8 = auVar107._24_4_;
  fStack_3e4 = auVar107._28_4_;
  local_400 = fVar38 * local_400;
  fStack_3fc = fVar51 * fStack_3fc;
  fStack_3f8 = fVar53 * fStack_3f8;
  fStack_3f4 = fVar55 * fStack_3f4;
  fStack_3f0 = fVar57 * fStack_3f0;
  fStack_3ec = fVar60 * fStack_3ec;
  fStack_3e8 = fVar62 * fStack_3e8;
  fStack_3e4 = fVar110 * fStack_3e4;
  local_3e0 = auVar139._0_4_;
  fStack_3dc = auVar139._4_4_;
  fStack_3d8 = auVar139._8_4_;
  fStack_3d4 = auVar139._12_4_;
  fStack_3d0 = auVar139._16_4_;
  fStack_3cc = auVar139._20_4_;
  fStack_3c8 = auVar139._24_4_;
  fStack_3c4 = auVar139._28_4_;
  local_3e0 = fVar38 * local_3e0;
  fStack_3dc = fVar51 * fStack_3dc;
  fStack_3d8 = fVar53 * fStack_3d8;
  fStack_3d4 = fVar55 * fStack_3d4;
  fStack_3d0 = fVar57 * fStack_3d0;
  fStack_3cc = fVar60 * fStack_3cc;
  fStack_3c8 = fVar62 * fStack_3c8;
  fStack_3c4 = fVar110 * fStack_3c4;
  local_3c0 = auVar93._0_4_;
  fStack_3bc = auVar93._4_4_;
  fStack_3b8 = auVar93._8_4_;
  fStack_3b4 = auVar93._12_4_;
  fStack_3b0 = auVar93._16_4_;
  fStack_3ac = auVar93._20_4_;
  fStack_3a8 = auVar93._24_4_;
  fStack_3a4 = auVar93._28_4_;
  fVar38 = fVar38 * local_3c0;
  fVar51 = fVar51 * fStack_3bc;
  fVar53 = fVar53 * fStack_3b8;
  fVar55 = fVar55 * fStack_3b4;
  fVar57 = fVar57 * fStack_3b0;
  fVar60 = fVar60 * fStack_3ac;
  fVar62 = fVar62 * fStack_3a8;
  fVar110 = fVar110 * fStack_3a4;
  auVar127._0_4_ = fVar100 * local_400 + auVar108._0_4_;
  auVar127._4_4_ = fVar101 * fStack_3fc + auVar108._4_4_;
  auVar127._8_4_ = fVar102 * fStack_3f8 + auVar108._8_4_;
  auVar127._12_4_ = fVar103 * fStack_3f4 + auVar108._12_4_;
  auVar130._16_4_ = fVar111 * fStack_3f0 + auVar108._16_4_;
  auVar130._0_16_ = auVar127;
  auVar130._20_4_ = fVar119 * fStack_3ec + auVar108._20_4_;
  auVar130._24_4_ = fVar120 * fStack_3e8 + auVar108._24_4_;
  auVar130._28_4_ = fVar121 * fStack_3e4 + auVar108._28_4_;
  cVar24 = (char)uVar23;
  local_520 = auVar90._0_4_;
  iStack_51c = auVar90._4_4_;
  iStack_518 = auVar90._8_4_;
  iStack_514 = auVar90._12_4_;
  iStack_510 = auVar90._16_4_;
  iStack_50c = auVar90._20_4_;
  iStack_508 = auVar90._24_4_;
  iStack_504 = auVar90._28_4_;
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + local_520) = auVar127._0_4_;
  }
  local_5a0 = auVar128._0_4_;
  fStack_59c = auVar128._4_4_;
  fStack_598 = auVar128._8_4_;
  fStack_594 = auVar128._12_4_;
  fStack_590 = auVar128._16_4_;
  fStack_58c = auVar128._20_4_;
  fStack_588 = auVar128._24_4_;
  fStack_584 = auVar128._28_4_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar127,1);
    *(undefined4 *)(param_1 + iStack_51c) = uVar5;
  }
  local_580 = auVar89._0_4_;
  fStack_57c = auVar89._4_4_;
  fStack_578 = auVar89._8_4_;
  fStack_574 = auVar89._12_4_;
  fStack_570 = auVar89._16_4_;
  fStack_56c = auVar89._20_4_;
  fStack_568 = auVar89._24_4_;
  fStack_564 = auVar89._28_4_;
  local_4a0 = auVar92._0_4_;
  iStack_49c = auVar92._4_4_;
  iStack_498 = auVar92._8_4_;
  iStack_494 = auVar92._12_4_;
  iStack_490 = auVar92._16_4_;
  iStack_48c = auVar92._20_4_;
  iStack_488 = auVar92._24_4_;
  iStack_484 = auVar92._28_4_;
  auVar65 = auVar48._0_16_;
  auVar87 = auVar48._16_16_;
  auVar42 = auVar130._16_16_;
  auVar43 = auVar66._0_16_;
  auVar44 = auVar66._16_16_;
  local_660._0_4_ = auVar77._0_4_;
  local_660._4_4_ = auVar77._4_4_;
  fStack_658 = auVar77._8_4_;
  fStack_654 = auVar77._12_4_;
  fStack_650 = auVar77._16_4_;
  fStack_64c = auVar77._20_4_;
  fStack_648 = auVar77._24_4_;
  fStack_644 = auVar77._28_4_;
  auVar40 = auVar91._0_16_;
  auVar41 = auVar91._16_16_;
  auVar58 = auVar112._0_16_;
  auVar39 = auVar112._16_16_;
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar127,2);
    *(undefined4 *)(param_1 + iStack_518) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar127,3);
    *(undefined4 *)(param_1 + iStack_514) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + iStack_510) = auVar130._16_4_;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iStack_50c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iStack_508) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iStack_504) = uVar5;
    auVar113._0_4_ = fVar100 * local_3e0 + auVar76._0_4_;
    auVar113._4_4_ = fVar101 * fStack_3dc + auVar76._4_4_;
    auVar113._8_4_ = fVar102 * fStack_3d8 + auVar76._8_4_;
    auVar113._12_4_ = fVar103 * fStack_3d4 + auVar76._12_4_;
    auVar113._16_4_ = fVar111 * fStack_3d0 + auVar76._16_4_;
    auVar113._20_4_ = fVar119 * fStack_3cc + auVar76._20_4_;
    auVar113._24_4_ = fVar120 * fStack_3c8 + auVar76._24_4_;
    auVar113._28_4_ = fVar121 * fStack_3c4 + auVar76._28_4_;
  }
  else {
    auVar113._0_4_ = fVar100 * local_3e0 + auVar76._0_4_;
    auVar113._4_4_ = fVar101 * fStack_3dc + auVar76._4_4_;
    auVar113._8_4_ = fVar102 * fStack_3d8 + auVar76._8_4_;
    auVar113._12_4_ = fVar103 * fStack_3d4 + auVar76._12_4_;
    auVar113._16_4_ = fVar111 * fStack_3d0 + auVar76._16_4_;
    auVar113._20_4_ = fVar119 * fStack_3cc + auVar76._20_4_;
    auVar113._24_4_ = fVar120 * fStack_3c8 + auVar76._24_4_;
    auVar113._28_4_ = fVar121 * fStack_3c4 + auVar76._28_4_;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_520) = auVar113._0_4_;
  }
  auVar42 = auVar113._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_51c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_518) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_514) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_510) = auVar113._16_4_;
  }
  auVar42 = auVar113._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_50c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_508) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_504) = uVar5;
    auVar114._0_4_ = fVar100 * fVar38 + (float)local_660._0_4_;
    auVar114._4_4_ = fVar101 * fVar51 + (float)local_660._4_4_;
    auVar114._8_4_ = fVar102 * fVar53 + fStack_658;
    auVar114._12_4_ = fVar103 * fVar55 + fStack_654;
    auVar114._16_4_ = fVar111 * fVar57 + fStack_650;
    auVar114._20_4_ = fVar119 * fVar60 + fStack_64c;
    auVar114._24_4_ = fVar120 * fVar62 + fStack_648;
    auVar114._28_4_ = fVar121 * fVar110 + fStack_644;
  }
  else {
    auVar114._0_4_ = fVar100 * fVar38 + (float)local_660._0_4_;
    auVar114._4_4_ = fVar101 * fVar51 + (float)local_660._4_4_;
    auVar114._8_4_ = fVar102 * fVar53 + fStack_658;
    auVar114._12_4_ = fVar103 * fVar55 + fStack_654;
    auVar114._16_4_ = fVar111 * fVar57 + fStack_650;
    auVar114._20_4_ = fVar119 * fVar60 + fStack_64c;
    auVar114._24_4_ = fVar120 * fVar62 + fStack_648;
    auVar114._28_4_ = fVar121 * fVar110 + fStack_644;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_520) = auVar114._0_4_;
  }
  auVar42 = auVar114._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_51c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_518) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_514) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_510) = auVar114._16_4_;
  }
  auVar42 = auVar114._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_50c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_508) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_504) = uVar5;
  }
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_520) = fVar100;
  }
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_51c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_518) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_514) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_510) = fVar111;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar87,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_50c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar87,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_508) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar87,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_504) = uVar5;
    auVar115._0_4_ = (float)local_620._0_4_ * local_5c0 * local_400 + local_1c0;
    auVar115._4_4_ = (float)local_620._4_4_ * fStack_5bc * fStack_3fc + fStack_1bc;
    auVar115._8_4_ = fStack_618 * fStack_5b8 * fStack_3f8 + fStack_1b8;
    auVar115._12_4_ = fStack_614 * fStack_5b4 * fStack_3f4 + fStack_1b4;
    auVar115._16_4_ = fStack_610 * fStack_5b0 * fStack_3f0 + fStack_1b0;
    auVar115._20_4_ = fStack_60c * fStack_5ac * fStack_3ec + fStack_1ac;
    auVar115._24_4_ = fStack_608 * fStack_5a8 * fStack_3e8 + fStack_1a8;
    auVar115._28_4_ = fStack_604 * fStack_5a4 * fStack_3e4 + fStack_1a4;
  }
  else {
    auVar115._0_4_ = (float)local_620._0_4_ * local_5c0 * local_400 + local_1c0;
    auVar115._4_4_ = (float)local_620._4_4_ * fStack_5bc * fStack_3fc + fStack_1bc;
    auVar115._8_4_ = fStack_618 * fStack_5b8 * fStack_3f8 + fStack_1b8;
    auVar115._12_4_ = fStack_614 * fStack_5b4 * fStack_3f4 + fStack_1b4;
    auVar115._16_4_ = fStack_610 * fStack_5b0 * fStack_3f0 + fStack_1b0;
    auVar115._20_4_ = fStack_60c * fStack_5ac * fStack_3ec + fStack_1ac;
    auVar115._24_4_ = fStack_608 * fStack_5a8 * fStack_3e8 + fStack_1a8;
    auVar115._28_4_ = fStack_604 * fStack_5a4 * fStack_3e4 + fStack_1a4;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + local_4a0) = auVar115._0_4_;
  }
  auVar42 = auVar115._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iStack_49c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iStack_498) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iStack_494) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + iStack_490) = auVar115._16_4_;
  }
  auVar42 = auVar115._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iStack_48c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iStack_488) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iStack_484) = uVar5;
    auVar84._0_4_ = (float)local_620._0_4_ * local_5c0 * local_3e0 + local_1a0;
    auVar84._4_4_ = (float)local_620._4_4_ * fStack_5bc * fStack_3dc + fStack_19c;
    auVar84._8_4_ = fStack_618 * fStack_5b8 * fStack_3d8 + fStack_198;
    auVar84._12_4_ = fStack_614 * fStack_5b4 * fStack_3d4 + fStack_194;
    auVar84._16_4_ = fStack_610 * fStack_5b0 * fStack_3d0 + fStack_190;
    auVar84._20_4_ = fStack_60c * fStack_5ac * fStack_3cc + fStack_18c;
    auVar84._24_4_ = fStack_608 * fStack_5a8 * fStack_3c8 + fStack_188;
    auVar84._28_4_ = fStack_604 * fStack_5a4 * fStack_3c4 + fStack_184;
  }
  else {
    auVar84._0_4_ = (float)local_620._0_4_ * local_5c0 * local_3e0 + local_1a0;
    auVar84._4_4_ = (float)local_620._4_4_ * fStack_5bc * fStack_3dc + fStack_19c;
    auVar84._8_4_ = fStack_618 * fStack_5b8 * fStack_3d8 + fStack_198;
    auVar84._12_4_ = fStack_614 * fStack_5b4 * fStack_3d4 + fStack_194;
    auVar84._16_4_ = fStack_610 * fStack_5b0 * fStack_3d0 + fStack_190;
    auVar84._20_4_ = fStack_60c * fStack_5ac * fStack_3cc + fStack_18c;
    auVar84._24_4_ = fStack_608 * fStack_5a8 * fStack_3c8 + fStack_188;
    auVar84._28_4_ = fStack_604 * fStack_5a4 * fStack_3c4 + fStack_184;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_4a0) = auVar84._0_4_;
  }
  auVar42 = auVar84._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_49c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_498) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_494) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_490) = auVar84._16_4_;
  }
  auVar42 = auVar84._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_48c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_488) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_484) = uVar5;
    auVar116._0_4_ = (float)local_620._0_4_ * local_5c0 * fVar38 + local_180;
    auVar116._4_4_ = (float)local_620._4_4_ * fStack_5bc * fVar51 + fStack_17c;
    auVar116._8_4_ = fStack_618 * fStack_5b8 * fVar53 + fStack_178;
    auVar116._12_4_ = fStack_614 * fStack_5b4 * fVar55 + fStack_174;
    auVar116._16_4_ = fStack_610 * fStack_5b0 * fVar57 + fStack_170;
    auVar116._20_4_ = fStack_60c * fStack_5ac * fVar60 + fStack_16c;
    auVar116._24_4_ = fStack_608 * fStack_5a8 * fVar62 + fStack_168;
    auVar116._28_4_ = fStack_604 * fStack_5a4 * fVar110 + fStack_164;
  }
  else {
    auVar116._0_4_ = (float)local_620._0_4_ * local_5c0 * fVar38 + local_180;
    auVar116._4_4_ = (float)local_620._4_4_ * fStack_5bc * fVar51 + fStack_17c;
    auVar116._8_4_ = fStack_618 * fStack_5b8 * fVar53 + fStack_178;
    auVar116._12_4_ = fStack_614 * fStack_5b4 * fVar55 + fStack_174;
    auVar116._16_4_ = fStack_610 * fStack_5b0 * fVar57 + fStack_170;
    auVar116._20_4_ = fStack_60c * fStack_5ac * fVar60 + fStack_16c;
    auVar116._24_4_ = fStack_608 * fStack_5a8 * fVar62 + fStack_168;
    auVar116._28_4_ = fStack_604 * fStack_5a4 * fVar110 + fStack_164;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_4a0) = auVar116._0_4_;
  }
  auVar42 = auVar116._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_49c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_498) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_494) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_490) = auVar116._16_4_;
  }
  auVar42 = auVar116._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_48c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_488) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_484) = uVar5;
  }
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_4a0) = local_5c0;
  }
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar43,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_49c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar43,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_498) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar43,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_494) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_490) = fStack_5b0;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar44,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_48c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar44,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_488) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar44,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_484) = uVar5;
    auVar117._0_4_ = (float)uVar6 * fVar2 * local_400 + local_220;
    auVar117._4_4_ = (float)uVar21 * fVar64 * fStack_3fc + fStack_21c;
    auVar117._8_4_ = fVar74 * fVar68 * fStack_3f8 + fStack_218;
    auVar117._12_4_ = fVar75 * fVar69 * fStack_3f4 + fStack_214;
    auVar117._16_4_ = fVar79 * fVar70 * fStack_3f0 + fStack_210;
    auVar117._20_4_ = fVar80 * fVar71 * fStack_3ec + fStack_20c;
    auVar117._24_4_ = fVar81 * fVar72 * fStack_3e8 + fStack_208;
    auVar117._28_4_ = fVar82 * fVar73 * fStack_3e4 + fStack_204;
  }
  else {
    auVar117._0_4_ = (float)uVar6 * fVar2 * local_400 + local_220;
    auVar117._4_4_ = (float)uVar21 * fVar64 * fStack_3fc + fStack_21c;
    auVar117._8_4_ = fVar74 * fVar68 * fStack_3f8 + fStack_218;
    auVar117._12_4_ = fVar75 * fVar69 * fStack_3f4 + fStack_214;
    auVar117._16_4_ = fVar79 * fVar70 * fStack_3f0 + fStack_210;
    auVar117._20_4_ = fVar80 * fVar71 * fStack_3ec + fStack_20c;
    auVar117._24_4_ = fVar81 * fVar72 * fStack_3e8 + fStack_208;
    auVar117._28_4_ = fVar82 * fVar73 * fStack_3e4 + fStack_204;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + (int)local_5a0) = auVar117._0_4_;
  }
  auVar42 = auVar117._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + (int)fStack_59c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + (int)fStack_598) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + (int)fStack_594) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_590) = auVar117._16_4_;
  }
  auVar42 = auVar117._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + (int)fStack_58c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + (int)fStack_588) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + (int)fStack_584) = uVar5;
    auVar85._0_4_ = (float)uVar6 * fVar2 * local_3e0 + local_200;
    auVar85._4_4_ = (float)uVar21 * fVar64 * fStack_3dc + fStack_1fc;
    auVar85._8_4_ = fVar74 * fVar68 * fStack_3d8 + fStack_1f8;
    auVar85._12_4_ = fVar75 * fVar69 * fStack_3d4 + fStack_1f4;
    auVar85._16_4_ = fVar79 * fVar70 * fStack_3d0 + fStack_1f0;
    auVar85._20_4_ = fVar80 * fVar71 * fStack_3cc + fStack_1ec;
    auVar85._24_4_ = fVar81 * fVar72 * fStack_3c8 + fStack_1e8;
    auVar85._28_4_ = fVar82 * fVar73 * fStack_3c4 + fStack_1e4;
  }
  else {
    auVar85._0_4_ = (float)uVar6 * fVar2 * local_3e0 + local_200;
    auVar85._4_4_ = (float)uVar21 * fVar64 * fStack_3dc + fStack_1fc;
    auVar85._8_4_ = fVar74 * fVar68 * fStack_3d8 + fStack_1f8;
    auVar85._12_4_ = fVar75 * fVar69 * fStack_3d4 + fStack_1f4;
    auVar85._16_4_ = fVar79 * fVar70 * fStack_3d0 + fStack_1f0;
    auVar85._20_4_ = fVar80 * fVar71 * fStack_3cc + fStack_1ec;
    auVar85._24_4_ = fVar81 * fVar72 * fStack_3c8 + fStack_1e8;
    auVar85._28_4_ = fVar82 * fVar73 * fStack_3c4 + fStack_1e4;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_5a0) = auVar85._0_4_;
  }
  auVar42 = auVar85._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_59c) = uVar5;
  }
  if ((uVar23 & 4) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_598) = uVar5;
  }
  if ((uVar23 & 8) != 0) {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_594) = uVar5;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_590) = auVar85._16_4_;
  }
  auVar42 = auVar85._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_58c) = uVar5;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_588) = uVar5;
  }
  if (cVar24 < '\0') {
    uVar5 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_584) = uVar5;
    auVar118._0_4_ = (float)uVar6 * fVar2 * fVar38 + local_1e0;
    auVar118._4_4_ = (float)uVar21 * fVar64 * fVar51 + fStack_1dc;
    auVar118._8_4_ = fVar74 * fVar68 * fVar53 + fStack_1d8;
    auVar118._12_4_ = fVar75 * fVar69 * fVar55 + fStack_1d4;
    auVar118._16_4_ = fVar79 * fVar70 * fVar57 + fStack_1d0;
    auVar118._20_4_ = fVar80 * fVar71 * fVar60 + fStack_1cc;
    auVar118._24_4_ = fVar81 * fVar72 * fVar62 + fStack_1c8;
    auVar118._28_4_ = fVar82 * fVar73 * fVar110 + fStack_1c4;
  }
  else {
    auVar118._0_4_ = (float)uVar6 * fVar2 * fVar38 + local_1e0;
    auVar118._4_4_ = (float)uVar21 * fVar64 * fVar51 + fStack_1dc;
    auVar118._8_4_ = fVar74 * fVar68 * fVar53 + fStack_1d8;
    auVar118._12_4_ = fVar75 * fVar69 * fVar55 + fStack_1d4;
    auVar118._16_4_ = fVar79 * fVar70 * fVar57 + fStack_1d0;
    auVar118._20_4_ = fVar80 * fVar71 * fVar60 + fStack_1cc;
    auVar118._24_4_ = fVar81 * fVar72 * fVar62 + fStack_1c8;
    auVar118._28_4_ = fVar82 * fVar73 * fVar110 + fStack_1c4;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_5a0) = auVar118._0_4_;
  }
  auVar42 = auVar118._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_59c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_598) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_594) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_590) = auVar118._16_4_;
  }
  auVar42 = auVar118._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_58c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_588) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_584) = uVar6;
  }
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_5a0) = fVar2;
  }
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_59c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_598) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_594) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_590) = fVar70;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar41,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_58c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar41,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_588) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar41,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_584) = uVar6;
    auVar98._0_4_ = (float)local_6c0._0_4_ * local_6a0 * local_400 + local_460;
    auVar98._4_4_ = (float)local_6c0._4_4_ * fStack_69c * fStack_3fc + fStack_45c;
    auVar98._8_4_ = fStack_6b8 * fStack_698 * fStack_3f8 + fStack_458;
    auVar98._12_4_ = fStack_6b4 * fStack_694 * fStack_3f4 + fStack_454;
    auVar98._16_4_ = fStack_6b0 * fStack_690 * fStack_3f0 + fStack_450;
    auVar98._20_4_ = fStack_6ac * fStack_68c * fStack_3ec + fStack_44c;
    auVar98._24_4_ = fStack_6a8 * fStack_688 * fStack_3e8 + fStack_448;
    auVar98._28_4_ = fStack_6a4 * fStack_684 * fStack_3e4 + fStack_444;
  }
  else {
    auVar98._0_4_ = (float)local_6c0._0_4_ * local_6a0 * local_400 + local_460;
    auVar98._4_4_ = (float)local_6c0._4_4_ * fStack_69c * fStack_3fc + fStack_45c;
    auVar98._8_4_ = fStack_6b8 * fStack_698 * fStack_3f8 + fStack_458;
    auVar98._12_4_ = fStack_6b4 * fStack_694 * fStack_3f4 + fStack_454;
    auVar98._16_4_ = fStack_6b0 * fStack_690 * fStack_3f0 + fStack_450;
    auVar98._20_4_ = fStack_6ac * fStack_68c * fStack_3ec + fStack_44c;
    auVar98._24_4_ = fStack_6a8 * fStack_688 * fStack_3e8 + fStack_448;
    auVar98._28_4_ = fStack_6a4 * fStack_684 * fStack_3e4 + fStack_444;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + (int)local_580) = auVar98._0_4_;
  }
  auVar40 = auVar98._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + (int)fStack_57c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + (int)fStack_578) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + (int)fStack_574) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_570) = auVar98._16_4_;
  }
  auVar40 = auVar98._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + (int)fStack_56c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + (int)fStack_568) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + (int)fStack_564) = uVar6;
    auVar86._0_4_ = (float)local_6c0._0_4_ * local_3e0 * local_6a0 + local_440;
    auVar86._4_4_ = (float)local_6c0._4_4_ * fStack_3dc * fStack_69c + fStack_43c;
    auVar86._8_4_ = fStack_6b8 * fStack_3d8 * fStack_698 + fStack_438;
    auVar86._12_4_ = fStack_6b4 * fStack_3d4 * fStack_694 + fStack_434;
    auVar86._16_4_ = fStack_6b0 * fStack_3d0 * fStack_690 + fStack_430;
    auVar86._20_4_ = fStack_6ac * fStack_3cc * fStack_68c + fStack_42c;
    auVar86._24_4_ = fStack_6a8 * fStack_3c8 * fStack_688 + fStack_428;
    auVar86._28_4_ = fStack_6a4 * fStack_3c4 * fStack_684 + fStack_424;
  }
  else {
    auVar86._0_4_ = (float)local_6c0._0_4_ * local_3e0 * local_6a0 + local_440;
    auVar86._4_4_ = (float)local_6c0._4_4_ * fStack_3dc * fStack_69c + fStack_43c;
    auVar86._8_4_ = fStack_6b8 * fStack_3d8 * fStack_698 + fStack_438;
    auVar86._12_4_ = fStack_6b4 * fStack_3d4 * fStack_694 + fStack_434;
    auVar86._16_4_ = fStack_6b0 * fStack_3d0 * fStack_690 + fStack_430;
    auVar86._20_4_ = fStack_6ac * fStack_3cc * fStack_68c + fStack_42c;
    auVar86._24_4_ = fStack_6a8 * fStack_3c8 * fStack_688 + fStack_428;
    auVar86._28_4_ = fStack_6a4 * fStack_3c4 * fStack_684 + fStack_424;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_580) = auVar86._0_4_;
  }
  auVar40 = auVar86._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_57c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_578) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_574) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_570) = auVar86._16_4_;
  }
  auVar40 = auVar86._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_56c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_568) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_564) = uVar6;
    auVar99._0_4_ = (float)local_6c0._0_4_ * local_6a0 * fVar38 + local_420;
    auVar99._4_4_ = (float)local_6c0._4_4_ * fStack_69c * fVar51 + fStack_41c;
    auVar99._8_4_ = fStack_6b8 * fStack_698 * fVar53 + fStack_418;
    auVar99._12_4_ = fStack_6b4 * fStack_694 * fVar55 + fStack_414;
    auVar99._16_4_ = fStack_6b0 * fStack_690 * fVar57 + fStack_410;
    auVar99._20_4_ = fStack_6ac * fStack_68c * fVar60 + fStack_40c;
    auVar99._24_4_ = fStack_6a8 * fStack_688 * fVar62 + fStack_408;
    auVar99._28_4_ = fStack_6a4 * fStack_684 * fVar110 + fStack_404;
  }
  else {
    auVar99._0_4_ = (float)local_6c0._0_4_ * local_6a0 * fVar38 + local_420;
    auVar99._4_4_ = (float)local_6c0._4_4_ * fStack_69c * fVar51 + fStack_41c;
    auVar99._8_4_ = fStack_6b8 * fStack_698 * fVar53 + fStack_418;
    auVar99._12_4_ = fStack_6b4 * fStack_694 * fVar55 + fStack_414;
    auVar99._16_4_ = fStack_6b0 * fStack_690 * fVar57 + fStack_410;
    auVar99._20_4_ = fStack_6ac * fStack_68c * fVar60 + fStack_40c;
    auVar99._24_4_ = fStack_6a8 * fStack_688 * fVar62 + fStack_408;
    auVar99._28_4_ = fStack_6a4 * fStack_684 * fVar110 + fStack_404;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_580) = auVar99._0_4_;
  }
  auVar40 = auVar99._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_57c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_578) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_574) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_570) = auVar99._16_4_;
  }
  auVar40 = auVar99._16_16_;
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar40,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_56c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar40,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_568) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar40,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_564) = uVar6;
  }
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_580) = local_6a0;
  }
  if ((uVar23 & 2) != 0) {
    uVar6 = vextractps_avx(auVar58,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_57c) = uVar6;
  }
  if ((uVar23 & 4) != 0) {
    uVar6 = vextractps_avx(auVar58,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_578) = uVar6;
  }
  if ((uVar23 & 8) != 0) {
    uVar6 = vextractps_avx(auVar58,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_574) = uVar6;
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_570) = fStack_690;
  }
  if ((uVar23 & 0x20) != 0) {
    uVar6 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_56c) = uVar6;
  }
  if ((uVar23 & 0x40) != 0) {
    uVar6 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_568) = uVar6;
  }
  if (cVar24 < '\0') {
    uVar6 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_564) = uVar6;
  }
  return;
}


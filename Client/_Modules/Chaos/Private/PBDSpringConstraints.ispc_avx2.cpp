// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplySpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_CunfCuni_avx2 @ 14035ae30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_CunfCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,float param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  char cVar16;
  int iVar17;
  int iVar20;
  ulonglong uVar23;
  uint uVar24;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar25 [32];
  uint uVar33;
  undefined1 auVar26 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [16];
  undefined1 auVar35 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar43 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar44 [32];
  float fVar45;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  float fVar55;
  int iVar56;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 in_ZMM7 [64];
  undefined1 auVar59 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  int iVar65;
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 in_ZMM9 [64];
  float fVar68;
  float fVar76;
  undefined1 auVar69 [32];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 in_ZMM10 [64];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  float fVar82;
  uint uVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  float fVar93;
  float fVar100;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar98;
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar96 [32];
  float fVar104;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
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
  int iVar18;
  int iVar19;
  int iVar21;
  int iVar22;
  undefined1 auVar64 [32];
  undefined1 auVar97 [32];
  
  uVar14 = __real_0000000c;
  uVar13 = __real_3f800000;
  uVar4 = __real_38d1b717;
  uVar83 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar83 = param_5;
  }
  if ((int)(uVar83 & 0xfffffff8) < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    uVar23 = 0;
    do {
      auVar26 = *(undefined1 (*) [32])(param_2 + uVar23 * 2);
      auVar2 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar23 * 2);
      auVar41 = vshufps_avx(auVar26,auVar2,0x88);
      auVar41 = vpermpd_avx2(auVar41,0xd8);
      auVar57 = vpslld_avx2(auVar41,4);
      auVar41 = vpcmpeqd_avx2(auVar41,auVar41);
      auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar41);
      auVar41 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
      auVar34 = vgatherdps(ZEXT832(0),auVar41);
      auVar41 = vpcmpeqd_avx2(in_ZMM9._0_32_,in_ZMM9._0_32_);
      auVar58 = vgatherdps(ZEXT832(0),auVar41);
      in_ZMM7 = ZEXT3264(auVar58);
      auVar35._4_4_ = uVar14;
      auVar35._0_4_ = uVar14;
      auVar35._8_4_ = uVar14;
      auVar35._12_4_ = uVar14;
      auVar35._16_4_ = uVar14;
      auVar35._20_4_ = uVar14;
      auVar35._24_4_ = uVar14;
      auVar35._28_4_ = uVar14;
      auVar41 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
      auVar40 = vgatherdps(ZEXT832(0) << 0x20,auVar41);
      auVar26 = vshufps_avx(auVar26,auVar2,0xdd);
      auVar26 = vpermpd_avx2(auVar26,0xd8);
      auVar60 = vpslld_avx2(auVar26,4);
      auVar26 = vpcmpeqd_avx2(auVar26,auVar26);
      auVar91 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
      auVar26 = vpcmpeqd_avx2(auVar35 | auVar57,auVar35 | auVar57);
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
      auVar26 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar25 = vgatherdps(ZEXT832(0) << 0x20,auVar26);
      auVar26 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar66 = vgatherdps(ZEXT832(0),auVar26);
      in_ZMM9 = ZEXT3264(auVar66);
      auVar26 = vsubps_avx(auVar44,auVar91);
      auVar2 = vsubps_avx(auVar34,auVar80);
      auVar35 = vsubps_avx(auVar58,auVar25);
      auVar96._0_4_ =
           auVar35._0_4_ * auVar35._0_4_ +
           auVar26._0_4_ * auVar26._0_4_ + auVar2._0_4_ * auVar2._0_4_;
      auVar96._4_4_ =
           auVar35._4_4_ * auVar35._4_4_ +
           auVar26._4_4_ * auVar26._4_4_ + auVar2._4_4_ * auVar2._4_4_;
      auVar96._8_4_ =
           auVar35._8_4_ * auVar35._8_4_ +
           auVar26._8_4_ * auVar26._8_4_ + auVar2._8_4_ * auVar2._8_4_;
      auVar96._12_4_ =
           auVar35._12_4_ * auVar35._12_4_ +
           auVar26._12_4_ * auVar26._12_4_ + auVar2._12_4_ * auVar2._12_4_;
      auVar96._16_4_ =
           auVar35._16_4_ * auVar35._16_4_ +
           auVar26._16_4_ * auVar26._16_4_ + auVar2._16_4_ * auVar2._16_4_;
      auVar96._20_4_ =
           auVar35._20_4_ * auVar35._20_4_ +
           auVar26._20_4_ * auVar26._20_4_ + auVar2._20_4_ * auVar2._20_4_;
      auVar96._24_4_ =
           auVar35._24_4_ * auVar35._24_4_ +
           auVar26._24_4_ * auVar26._24_4_ + auVar2._24_4_ * auVar2._24_4_;
      auVar96._28_4_ =
           auVar35._28_4_ * auVar35._28_4_ +
           auVar26._28_4_ * auVar26._28_4_ + auVar2._28_4_ * auVar2._28_4_;
      auVar61 = vsqrtps_avx(auVar96);
      auVar26 = vdivps_avx(auVar26,auVar61);
      auVar41 = vdivps_avx(auVar2,auVar61);
      auVar35 = vdivps_avx(auVar35,auVar61);
      auVar2._4_4_ = uVar4;
      auVar2._0_4_ = uVar4;
      auVar2._8_4_ = uVar4;
      auVar2._12_4_ = uVar4;
      auVar2._16_4_ = uVar4;
      auVar2._20_4_ = uVar4;
      auVar2._24_4_ = uVar4;
      auVar2._28_4_ = uVar4;
      auVar2 = vcmpps_avx(auVar96,auVar2,1);
      auVar77._4_4_ = uVar13;
      auVar77._0_4_ = uVar13;
      auVar77._8_4_ = uVar13;
      auVar77._12_4_ = uVar13;
      auVar77._16_4_ = uVar13;
      auVar77._20_4_ = uVar13;
      auVar77._24_4_ = uVar13;
      auVar77._28_4_ = uVar13;
      auVar26 = vblendvps_avx(auVar26,auVar77,auVar2);
      uVar24 = auVar2._0_4_;
      uVar27 = auVar2._4_4_;
      uVar28 = auVar2._8_4_;
      uVar29 = auVar2._12_4_;
      uVar30 = auVar2._16_4_;
      uVar31 = auVar2._20_4_;
      uVar32 = auVar2._24_4_;
      uVar33 = auVar2._28_4_;
      auVar46._0_4_ = ~uVar24 & auVar61._0_4_;
      auVar46._4_4_ = ~uVar27 & auVar61._4_4_;
      auVar46._8_4_ = ~uVar28 & auVar61._8_4_;
      auVar46._12_4_ = ~uVar29 & auVar61._12_4_;
      auVar46._16_4_ = ~uVar30 & auVar61._16_4_;
      auVar46._20_4_ = ~uVar31 & auVar61._20_4_;
      auVar46._24_4_ = ~uVar32 & auVar61._24_4_;
      auVar46._28_4_ = ~uVar33 & auVar61._28_4_;
      auVar2 = vsubps_avx(auVar46,*(undefined1 (*) [32])(param_3 + (uVar23 & 0xffffffff)));
      fVar68 = auVar2._0_4_;
      fVar70 = auVar2._4_4_;
      fVar71 = auVar2._8_4_;
      fVar72 = auVar2._12_4_;
      fVar73 = auVar2._16_4_;
      fVar74 = auVar2._20_4_;
      fVar75 = auVar2._24_4_;
      fVar76 = auVar2._28_4_;
      fVar5 = auVar40._0_4_;
      fVar45 = auVar66._0_4_;
      auVar69._0_4_ = fVar45 + fVar5;
      fVar6 = auVar40._4_4_;
      fVar49 = auVar66._4_4_;
      auVar69._4_4_ = fVar49 + fVar6;
      fVar7 = auVar40._8_4_;
      fVar50 = auVar66._8_4_;
      auVar69._8_4_ = fVar50 + fVar7;
      fVar8 = auVar40._12_4_;
      fVar51 = auVar66._12_4_;
      auVar69._12_4_ = fVar51 + fVar8;
      fVar9 = auVar40._16_4_;
      fVar52 = auVar66._16_4_;
      auVar69._16_4_ = fVar52 + fVar9;
      fVar10 = auVar40._20_4_;
      fVar53 = auVar66._20_4_;
      auVar69._20_4_ = fVar53 + fVar10;
      fVar11 = auVar40._24_4_;
      fVar54 = auVar66._24_4_;
      auVar69._24_4_ = fVar54 + fVar11;
      fVar12 = auVar40._28_4_;
      fVar55 = auVar66._28_4_;
      auVar69._28_4_ = fVar55 + fVar12;
      auVar61._0_4_ = param_4 * auVar26._0_4_ * fVar68;
      auVar61._4_4_ = param_4 * auVar26._4_4_ * fVar70;
      auVar61._8_4_ = param_4 * auVar26._8_4_ * fVar71;
      auVar61._12_4_ = param_4 * auVar26._12_4_ * fVar72;
      auVar61._16_4_ = param_4 * auVar26._16_4_ * fVar73;
      auVar61._20_4_ = param_4 * auVar26._20_4_ * fVar74;
      auVar61._24_4_ = param_4 * auVar26._24_4_ * fVar75;
      auVar61._28_4_ = param_4 * auVar26._28_4_ * fVar76;
      auVar67._0_4_ = (float)(~uVar24 & auVar41._0_4_) * fVar68 * param_4;
      auVar67._4_4_ = (float)(~uVar27 & auVar41._4_4_) * fVar70 * param_4;
      auVar67._8_4_ = (float)(~uVar28 & auVar41._8_4_) * fVar71 * param_4;
      auVar67._12_4_ = (float)(~uVar29 & auVar41._12_4_) * fVar72 * param_4;
      auVar67._16_4_ = (float)(~uVar30 & auVar41._16_4_) * fVar73 * param_4;
      auVar67._20_4_ = (float)(~uVar31 & auVar41._20_4_) * fVar74 * param_4;
      auVar67._24_4_ = (float)(~uVar32 & auVar41._24_4_) * fVar75 * param_4;
      auVar67._28_4_ = (float)(~uVar33 & auVar41._28_4_) * fVar76 * param_4;
      auVar41 = vdivps_avx(auVar61,auVar69);
      auVar26._0_4_ = param_4 * (float)(~uVar24 & auVar35._0_4_) * fVar68;
      auVar26._4_4_ = param_4 * (float)(~uVar27 & auVar35._4_4_) * fVar70;
      auVar26._8_4_ = param_4 * (float)(~uVar28 & auVar35._8_4_) * fVar71;
      auVar26._12_4_ = param_4 * (float)(~uVar29 & auVar35._12_4_) * fVar72;
      auVar26._16_4_ = param_4 * (float)(~uVar30 & auVar35._16_4_) * fVar73;
      auVar26._20_4_ = param_4 * (float)(~uVar31 & auVar35._20_4_) * fVar74;
      auVar26._24_4_ = param_4 * (float)(~uVar32 & auVar35._24_4_) * fVar75;
      auVar26._28_4_ = param_4 * (float)(~uVar33 & auVar35._28_4_) * fVar76;
      auVar35 = vdivps_avx(auVar67,auVar69);
      auVar61 = vdivps_avx(auVar26,auVar69);
      auVar26 = vcmpps_avx(auVar66,ZEXT832(0) << 0x20,0);
      auVar2 = vcmpps_avx(ZEXT832(0) << 0x20,auVar40,0);
      uVar24 = auVar26._0_4_ & auVar2._0_4_;
      uVar27 = auVar26._4_4_ & auVar2._4_4_;
      uVar28 = auVar26._8_4_ & auVar2._8_4_;
      uVar29 = auVar26._12_4_ & auVar2._12_4_;
      uVar30 = auVar26._16_4_ & auVar2._16_4_;
      uVar31 = auVar26._20_4_ & auVar2._20_4_;
      uVar32 = auVar26._24_4_ & auVar2._24_4_;
      uVar33 = auVar26._28_4_ & auVar2._28_4_;
      fVar93 = (float)(~uVar24 & auVar41._0_4_);
      fVar98 = (float)(~uVar27 & auVar41._4_4_);
      fVar99 = (float)(~uVar28 & auVar41._8_4_);
      fVar100 = (float)(~uVar29 & auVar41._12_4_);
      fVar101 = (float)(~uVar30 & auVar41._16_4_);
      fVar102 = (float)(~uVar31 & auVar41._20_4_);
      fVar103 = (float)(~uVar32 & auVar41._24_4_);
      fVar104 = (float)(~uVar33 & auVar41._28_4_);
      fVar82 = (float)(~uVar24 & auVar35._0_4_);
      fVar84 = (float)(~uVar27 & auVar35._4_4_);
      fVar85 = (float)(~uVar28 & auVar35._8_4_);
      fVar86 = (float)(~uVar29 & auVar35._12_4_);
      fVar87 = (float)(~uVar30 & auVar35._16_4_);
      fVar88 = (float)(~uVar31 & auVar35._20_4_);
      fVar89 = (float)(~uVar32 & auVar35._24_4_);
      fVar90 = (float)(~uVar33 & auVar35._28_4_);
      fVar68 = (float)(~uVar24 & auVar61._0_4_);
      fVar70 = (float)(~uVar27 & auVar61._4_4_);
      fVar71 = (float)(~uVar28 & auVar61._8_4_);
      fVar72 = (float)(~uVar29 & auVar61._12_4_);
      fVar73 = (float)(~uVar30 & auVar61._16_4_);
      fVar74 = (float)(~uVar31 & auVar61._20_4_);
      fVar75 = (float)(~uVar32 & auVar61._24_4_);
      fVar76 = (float)(~uVar33 & auVar61._28_4_);
      in_ZMM10 = ZEXT3264(CONCAT428(fVar76,CONCAT424(fVar75,CONCAT420(fVar74,CONCAT416(fVar73,
                                                  CONCAT412(fVar72,CONCAT48(fVar71,CONCAT44(fVar70,
                                                  fVar68))))))));
      auVar26 = vcmpps_avx(ZEXT832(0) << 0x20,auVar40,1);
      uVar24 = vmovmskps_avx(auVar26);
      if (uVar24 == 0) {
LAB_14035b25e:
        auVar26 = vcmpps_avx(ZEXT832(0) << 0x20,auVar66,1);
        uVar24 = vmovmskps_avx(auVar26);
      }
      else {
        auVar36._0_4_ = -(fVar5 * fVar93) + auVar44._0_4_;
        auVar36._4_4_ = -(fVar6 * fVar98) + auVar44._4_4_;
        auVar36._8_4_ = -(fVar7 * fVar99) + auVar44._8_4_;
        auVar36._12_4_ = -(fVar8 * fVar100) + auVar44._12_4_;
        auVar41._16_4_ = -(fVar9 * fVar101) + auVar44._16_4_;
        auVar41._0_16_ = auVar36;
        auVar41._20_4_ = -(fVar10 * fVar102) + auVar44._20_4_;
        auVar41._24_4_ = -(fVar11 * fVar103) + auVar44._24_4_;
        auVar41._28_4_ = -(fVar12 * fVar104) + auVar44._28_4_;
        cVar16 = (char)uVar24;
        iVar56 = auVar57._0_4_;
        auVar39 = auVar40._0_16_;
        auVar43 = auVar40._16_16_;
        auVar94 = auVar41._16_16_;
        iVar17 = auVar57._4_4_;
        iVar18 = auVar57._8_4_;
        iVar19 = auVar57._12_4_;
        iVar65 = auVar57._16_4_;
        iVar20 = auVar57._20_4_;
        iVar21 = auVar57._24_4_;
        iVar22 = auVar57._28_4_;
        if ((uVar24 & 1) == 0) {
          if ((uVar24 & 2) == 0) goto LAB_14035b10e;
LAB_14035b3f6:
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035b410;
LAB_14035b118:
          if ((uVar24 & 8) == 0) goto LAB_14035b122;
LAB_14035b42a:
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar24 & 0x10) != 0) goto LAB_14035b450;
LAB_14035b138:
          if ((uVar24 & 0x20) == 0) goto LAB_14035b142;
LAB_14035b466:
          uVar3 = vextractps_avx(auVar94,1);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if ((uVar24 & 0x40) != 0) goto LAB_14035b480;
LAB_14035b14c:
          if (-1 < cVar16) goto LAB_14035b155;
LAB_14035b499:
          uVar3 = vextractps_avx(auVar94,3);
          *(undefined4 *)(param_1 + iVar22) = uVar3;
          auVar40._0_4_ = -(fVar5 * fVar82) + auVar34._0_4_;
          auVar40._4_4_ = -(fVar6 * fVar84) + auVar34._4_4_;
          auVar40._8_4_ = -(fVar7 * fVar85) + auVar34._8_4_;
          auVar40._12_4_ = -(fVar8 * fVar86) + auVar34._12_4_;
          auVar40._16_4_ = -(fVar9 * fVar87) + auVar34._16_4_;
          auVar40._20_4_ = -(fVar10 * fVar88) + auVar34._20_4_;
          auVar40._24_4_ = -(fVar11 * fVar89) + auVar34._24_4_;
          auVar40._28_4_ = -(fVar12 * fVar90) + auVar34._28_4_;
          if ((uVar24 & 1) != 0) goto LAB_14035b4b8;
LAB_14035b164:
          if ((uVar24 & 2) == 0) goto LAB_14035b16e;
LAB_14035b4cf:
          uVar3 = vextractps_avx(auVar40._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035b4ea;
LAB_14035b178:
          if ((uVar24 & 8) == 0) goto LAB_14035b182;
LAB_14035b505:
          uVar3 = vextractps_avx(auVar40._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          auVar36 = auVar40._16_16_;
          if ((uVar24 & 0x10) != 0) goto LAB_14035b526;
LAB_14035b192:
          if ((uVar24 & 0x20) == 0) goto LAB_14035b19c;
LAB_14035b53d:
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if ((uVar24 & 0x40) != 0) goto LAB_14035b558;
LAB_14035b1a6:
          if (-1 < cVar16) goto LAB_14035b1af;
LAB_14035b572:
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar3;
          in_ZMM7 = ZEXT3264(CONCAT428(-(fVar12 * fVar76) + auVar58._28_4_,
                                       CONCAT424(-(fVar11 * fVar75) + auVar58._24_4_,
                                                 CONCAT420(-(fVar10 * fVar74) + auVar58._20_4_,
                                                           CONCAT416(-(fVar9 * fVar73) +
                                                                     auVar58._16_4_,
                                                                     CONCAT412(-(fVar8 * fVar72) +
                                                                               auVar58._12_4_,
                                                                               CONCAT48(-(fVar7 * 
                                                  fVar71) + auVar58._8_4_,
                                                  CONCAT44(-(fVar6 * fVar70) + auVar58._4_4_,
                                                           -(fVar5 * fVar68) + auVar58._0_4_))))))))
          ;
          if ((uVar24 & 1) != 0) goto LAB_14035b592;
LAB_14035b1be:
          if ((uVar24 & 2) == 0) goto LAB_14035b1c8;
LAB_14035b5a9:
          uVar3 = vextractps_avx(in_ZMM7._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035b5c4;
LAB_14035b1d2:
          if ((uVar24 & 8) == 0) goto LAB_14035b1dc;
LAB_14035b5df:
          uVar3 = vextractps_avx(in_ZMM7._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
          auVar36 = in_ZMM7._16_16_;
        }
        else {
          *(float *)(param_1 + iVar56) = auVar36._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035b3f6;
LAB_14035b10e:
          if ((uVar24 & 4) == 0) goto LAB_14035b118;
LAB_14035b410:
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035b42a;
LAB_14035b122:
          if ((uVar24 & 0x10) == 0) goto LAB_14035b138;
LAB_14035b450:
          *(float *)(param_1 + iVar65) = auVar41._16_4_;
          if ((uVar24 & 0x20) != 0) goto LAB_14035b466;
LAB_14035b142:
          if ((uVar24 & 0x40) == 0) goto LAB_14035b14c;
LAB_14035b480:
          uVar3 = vextractps_avx(auVar94,2);
          *(undefined4 *)(param_1 + iVar21) = uVar3;
          if (cVar16 < '\0') goto LAB_14035b499;
LAB_14035b155:
          auVar40._0_4_ = -(fVar5 * fVar82) + auVar34._0_4_;
          auVar40._4_4_ = -(fVar6 * fVar84) + auVar34._4_4_;
          auVar40._8_4_ = -(fVar7 * fVar85) + auVar34._8_4_;
          auVar40._12_4_ = -(fVar8 * fVar86) + auVar34._12_4_;
          auVar40._16_4_ = -(fVar9 * fVar87) + auVar34._16_4_;
          auVar40._20_4_ = -(fVar10 * fVar88) + auVar34._20_4_;
          auVar40._24_4_ = -(fVar11 * fVar89) + auVar34._24_4_;
          auVar40._28_4_ = -(fVar12 * fVar90) + auVar34._28_4_;
          if ((uVar24 & 1) == 0) goto LAB_14035b164;
LAB_14035b4b8:
          *(int *)(param_1 + 4 + (longlong)iVar56) = auVar40._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035b4cf;
LAB_14035b16e:
          if ((uVar24 & 4) == 0) goto LAB_14035b178;
LAB_14035b4ea:
          uVar3 = vextractps_avx(auVar40._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035b505;
LAB_14035b182:
          auVar36 = auVar40._16_16_;
          if ((uVar24 & 0x10) == 0) goto LAB_14035b192;
LAB_14035b526:
          *(int *)(param_1 + 4 + (longlong)iVar65) = auVar36._0_4_;
          if ((uVar24 & 0x20) != 0) goto LAB_14035b53d;
LAB_14035b19c:
          if ((uVar24 & 0x40) == 0) goto LAB_14035b1a6;
LAB_14035b558:
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
          if (cVar16 < '\0') goto LAB_14035b572;
LAB_14035b1af:
          in_ZMM7 = ZEXT3264(CONCAT428(-(fVar12 * fVar76) + auVar58._28_4_,
                                       CONCAT424(-(fVar11 * fVar75) + auVar58._24_4_,
                                                 CONCAT420(-(fVar10 * fVar74) + auVar58._20_4_,
                                                           CONCAT416(-(fVar9 * fVar73) +
                                                                     auVar58._16_4_,
                                                                     CONCAT412(-(fVar8 * fVar72) +
                                                                               auVar58._12_4_,
                                                                               CONCAT48(-(fVar7 * 
                                                  fVar71) + auVar58._8_4_,
                                                  CONCAT44(-(fVar6 * fVar70) + auVar58._4_4_,
                                                           -(fVar5 * fVar68) + auVar58._0_4_))))))))
          ;
          if ((uVar24 & 1) == 0) goto LAB_14035b1be;
LAB_14035b592:
          *(int *)(param_1 + 8 + (longlong)iVar56) = in_ZMM7._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035b5a9;
LAB_14035b1c8:
          if ((uVar24 & 4) == 0) goto LAB_14035b1d2;
LAB_14035b5c4:
          uVar3 = vextractps_avx(in_ZMM7._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035b5df;
LAB_14035b1dc:
          auVar36 = in_ZMM7._16_16_;
        }
        if ((uVar24 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar65) = auVar36._0_4_;
        }
        if ((uVar24 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if ((uVar24 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar3;
        }
        if ((uVar24 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar56) = fVar5;
        }
        if ((uVar24 & 2) != 0) {
          uVar3 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar24 & 4) != 0) {
          uVar3 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar24 & 8) != 0) {
          uVar3 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar24 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar65) = fVar9;
        }
        if ((uVar24 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar43,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        if ((uVar24 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar43,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar3;
        }
        if (-1 < cVar16) goto LAB_14035b25e;
        uVar3 = vextractps_avx(auVar43,3);
        *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar3;
        auVar26 = vcmpps_avx(ZEXT832(0) << 0x20,auVar66,1);
        uVar24 = vmovmskps_avx(auVar26);
      }
      if (uVar24 != 0) {
        auVar94._0_4_ = fVar45 * fVar93 + auVar91._0_4_;
        auVar94._4_4_ = fVar49 * fVar98 + auVar91._4_4_;
        auVar94._8_4_ = fVar50 * fVar99 + auVar91._8_4_;
        auVar94._12_4_ = fVar51 * fVar100 + auVar91._12_4_;
        auVar34._16_4_ = fVar52 * fVar101 + auVar91._16_4_;
        auVar34._0_16_ = auVar94;
        auVar34._20_4_ = fVar53 * fVar102 + auVar91._20_4_;
        auVar34._24_4_ = fVar54 * fVar103 + auVar91._24_4_;
        auVar34._28_4_ = fVar55 * fVar104 + auVar91._28_4_;
        cVar16 = (char)uVar24;
        auVar39 = auVar66._0_16_;
        auVar43 = auVar66._16_16_;
        iVar56 = auVar60._0_4_;
        auVar36 = auVar34._16_16_;
        iVar17 = auVar60._4_4_;
        iVar18 = auVar60._8_4_;
        iVar19 = auVar60._12_4_;
        local_300 = auVar25._0_4_;
        fStack_2fc = auVar25._4_4_;
        fStack_2f8 = auVar25._8_4_;
        fStack_2f4 = auVar25._12_4_;
        fStack_2f0 = auVar25._16_4_;
        fStack_2ec = auVar25._20_4_;
        fStack_2e8 = auVar25._24_4_;
        fStack_2e4 = auVar25._28_4_;
        iVar65 = auVar60._16_4_;
        iVar20 = auVar60._20_4_;
        iVar21 = auVar60._24_4_;
        iVar22 = auVar60._28_4_;
        if ((uVar24 & 1) == 0) {
          if ((uVar24 & 2) == 0) goto LAB_14035b28d;
LAB_14035b766:
          uVar3 = vextractps_avx(auVar94,1);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035b780;
LAB_14035b297:
          if ((uVar24 & 8) == 0) goto LAB_14035b2a1;
LAB_14035b79a:
          uVar3 = vextractps_avx(auVar94,3);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar24 & 0x10) != 0) goto LAB_14035b7c0;
LAB_14035b2b7:
          if ((uVar24 & 0x20) == 0) goto LAB_14035b2c1;
LAB_14035b7d6:
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if ((uVar24 & 0x40) != 0) goto LAB_14035b7f0;
LAB_14035b2cb:
          if (-1 < cVar16) goto LAB_14035b2d4;
LAB_14035b809:
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + iVar22) = uVar3;
          auVar25._0_4_ = fVar45 * fVar82 + auVar80._0_4_;
          auVar25._4_4_ = fVar49 * fVar84 + auVar80._4_4_;
          auVar25._8_4_ = fVar50 * fVar85 + auVar80._8_4_;
          auVar25._12_4_ = fVar51 * fVar86 + auVar80._12_4_;
          auVar25._16_4_ = fVar52 * fVar87 + auVar80._16_4_;
          auVar25._20_4_ = fVar53 * fVar88 + auVar80._20_4_;
          auVar25._24_4_ = fVar54 * fVar89 + auVar80._24_4_;
          auVar25._28_4_ = fVar55 * fVar90 + auVar80._28_4_;
          if ((uVar24 & 1) != 0) goto LAB_14035b828;
LAB_14035b2e3:
          if ((uVar24 & 2) == 0) goto LAB_14035b2ed;
LAB_14035b83f:
          uVar3 = vextractps_avx(auVar25._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035b85a;
LAB_14035b2f7:
          if ((uVar24 & 8) == 0) goto LAB_14035b301;
LAB_14035b875:
          uVar3 = vextractps_avx(auVar25._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          auVar36 = auVar25._16_16_;
          if ((uVar24 & 0x10) != 0) goto LAB_14035b896;
LAB_14035b311:
          if ((uVar24 & 0x20) == 0) goto LAB_14035b31b;
LAB_14035b8ad:
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if ((uVar24 & 0x40) != 0) goto LAB_14035b8c8;
LAB_14035b325:
          if (-1 < cVar16) goto LAB_14035b32e;
LAB_14035b8e2:
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar3;
          in_ZMM10 = ZEXT3264(CONCAT428(fVar55 * fVar76 + fStack_2e4,
                                        CONCAT424(fVar54 * fVar75 + fStack_2e8,
                                                  CONCAT420(fVar53 * fVar74 + fStack_2ec,
                                                            CONCAT416(fVar52 * fVar73 + fStack_2f0,
                                                                      CONCAT412(fVar51 * fVar72 +
                                                                                fStack_2f4,
                                                                                CONCAT48(fVar50 * 
                                                  fVar71 + fStack_2f8,
                                                  CONCAT44(fVar49 * fVar70 + fStack_2fc,
                                                           fVar45 * fVar68 + local_300))))))));
          if ((uVar24 & 1) != 0) goto LAB_14035b903;
LAB_14035b33e:
          if ((uVar24 & 2) == 0) goto LAB_14035b348;
LAB_14035b91a:
          uVar3 = vextractps_avx(in_ZMM10._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035b935;
LAB_14035b352:
          if ((uVar24 & 8) == 0) goto LAB_14035b35c;
LAB_14035b950:
          uVar3 = vextractps_avx(in_ZMM10._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
          auVar36 = in_ZMM10._16_16_;
        }
        else {
          *(float *)(param_1 + iVar56) = auVar94._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035b766;
LAB_14035b28d:
          if ((uVar24 & 4) == 0) goto LAB_14035b297;
LAB_14035b780:
          uVar3 = vextractps_avx(auVar94,2);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035b79a;
LAB_14035b2a1:
          if ((uVar24 & 0x10) == 0) goto LAB_14035b2b7;
LAB_14035b7c0:
          *(float *)(param_1 + iVar65) = auVar34._16_4_;
          if ((uVar24 & 0x20) != 0) goto LAB_14035b7d6;
LAB_14035b2c1:
          if ((uVar24 & 0x40) == 0) goto LAB_14035b2cb;
LAB_14035b7f0:
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + iVar21) = uVar3;
          if (cVar16 < '\0') goto LAB_14035b809;
LAB_14035b2d4:
          auVar25._0_4_ = fVar45 * fVar82 + auVar80._0_4_;
          auVar25._4_4_ = fVar49 * fVar84 + auVar80._4_4_;
          auVar25._8_4_ = fVar50 * fVar85 + auVar80._8_4_;
          auVar25._12_4_ = fVar51 * fVar86 + auVar80._12_4_;
          auVar25._16_4_ = fVar52 * fVar87 + auVar80._16_4_;
          auVar25._20_4_ = fVar53 * fVar88 + auVar80._20_4_;
          auVar25._24_4_ = fVar54 * fVar89 + auVar80._24_4_;
          auVar25._28_4_ = fVar55 * fVar90 + auVar80._28_4_;
          if ((uVar24 & 1) == 0) goto LAB_14035b2e3;
LAB_14035b828:
          *(int *)(param_1 + 4 + (longlong)iVar56) = auVar25._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035b83f;
LAB_14035b2ed:
          if ((uVar24 & 4) == 0) goto LAB_14035b2f7;
LAB_14035b85a:
          uVar3 = vextractps_avx(auVar25._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035b875;
LAB_14035b301:
          auVar36 = auVar25._16_16_;
          if ((uVar24 & 0x10) == 0) goto LAB_14035b311;
LAB_14035b896:
          *(int *)(param_1 + 4 + (longlong)iVar65) = auVar36._0_4_;
          if ((uVar24 & 0x20) != 0) goto LAB_14035b8ad;
LAB_14035b31b:
          if ((uVar24 & 0x40) == 0) goto LAB_14035b325;
LAB_14035b8c8:
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
          if (cVar16 < '\0') goto LAB_14035b8e2;
LAB_14035b32e:
          in_ZMM10 = ZEXT3264(CONCAT428(fVar55 * fVar76 + fStack_2e4,
                                        CONCAT424(fVar54 * fVar75 + fStack_2e8,
                                                  CONCAT420(fVar53 * fVar74 + fStack_2ec,
                                                            CONCAT416(fVar52 * fVar73 + fStack_2f0,
                                                                      CONCAT412(fVar51 * fVar72 +
                                                                                fStack_2f4,
                                                                                CONCAT48(fVar50 * 
                                                  fVar71 + fStack_2f8,
                                                  CONCAT44(fVar49 * fVar70 + fStack_2fc,
                                                           fVar45 * fVar68 + local_300))))))));
          if ((uVar24 & 1) == 0) goto LAB_14035b33e;
LAB_14035b903:
          *(int *)(param_1 + 8 + (longlong)iVar56) = in_ZMM10._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035b91a;
LAB_14035b348:
          if ((uVar24 & 4) == 0) goto LAB_14035b352;
LAB_14035b935:
          uVar3 = vextractps_avx(in_ZMM10._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035b950;
LAB_14035b35c:
          auVar36 = in_ZMM10._16_16_;
        }
        if ((uVar24 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar65) = auVar36._0_4_;
        }
        if ((uVar24 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if ((uVar24 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar3;
        }
        if ((uVar24 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar56) = fVar45;
        }
        if ((uVar24 & 2) != 0) {
          uVar3 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar24 & 4) != 0) {
          uVar3 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar24 & 8) != 0) {
          uVar3 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar24 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar65) = fVar52;
        }
        if ((uVar24 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar43,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        if ((uVar24 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar43,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar43,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar3;
        }
      }
      uVar23 = uVar23 + 0x20;
      uVar15 = uVar15 + 8;
    } while ((int)uVar15 < (int)(uVar83 & 0xfffffff8));
  }
  if ((int)param_5 <= (int)uVar15) {
    return;
  }
  auVar44._4_4_ = uVar15;
  auVar44._0_4_ = uVar15;
  auVar44._8_4_ = uVar15;
  auVar44._12_4_ = uVar15;
  auVar44._16_4_ = uVar15;
  auVar44._20_4_ = uVar15;
  auVar44._24_4_ = uVar15;
  auVar44._28_4_ = uVar15;
  auVar26 = vpor_avx2(auVar44,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar57._4_4_ = param_5;
  auVar57._0_4_ = param_5;
  auVar57._8_4_ = param_5;
  auVar57._12_4_ = param_5;
  auVar57._16_4_ = param_5;
  auVar57._20_4_ = param_5;
  auVar57._24_4_ = param_5;
  auVar57._28_4_ = param_5;
  auVar2 = vpcmpgtd_avx2(auVar57,auVar26);
  pauVar1 = (undefined1 (*) [32])(param_2 + (ulonglong)uVar15 * 8);
  auVar26 = vpcmpeqd_avx2(auVar26,auVar26);
  auVar26 = auVar26 & ~auVar2;
  if ((((((((SUB321(auVar26 >> 0x1f,0) & 1) == 0 && (SUB321(auVar26 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar26 >> 0x5f,0) & 1) == 0) && SUB321(auVar26 >> 0x7f,0) == '\0') &&
        (SUB321(auVar26 >> 0x9f,0) & 1) == 0) && SUB321(auVar26 >> 0xbf,0) == '\0') &&
      (SUB321(auVar26 >> 0xdf,0) & 1) == 0) && -1 < auVar26[0x1f]) {
    auVar26 = *pauVar1;
    auVar41 = pauVar1[1];
    auVar35 = vshufps_avx(auVar26,auVar41,0x88);
    auVar35 = vpermpd_avx2(auVar35,0xd8);
    auVar26 = vshufps_avx(auVar26,auVar41,0xdd);
    auVar26 = vpermpd_avx2(auVar26,0xd8);
  }
  else {
    auVar35 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
    auVar26 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
  }
  auVar67 = vpslld_avx2(auVar35,4);
  auVar41 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
  auVar35 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar69 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
  auVar58 = vpslld_avx2(auVar26,4);
  auVar77 = vgatherdps(ZEXT832(0),auVar2);
  auVar34 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar25 = vgatherdps(ZEXT832(0),auVar2);
  auVar60 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
  auVar26 = vmaskmovps_avx(auVar2,auVar41);
  auVar41 = vmaskmovps_avx(auVar2,auVar35);
  auVar35 = vmaskmovps_avx(auVar2,auVar61);
  auVar61 = vmaskmovps_avx(auVar2,auVar77);
  auVar77 = vmaskmovps_avx(auVar2,auVar34);
  auVar25 = vmaskmovps_avx(auVar2,auVar25);
  auVar34 = vsubps_avx(auVar26,auVar61);
  auVar44 = vsubps_avx(auVar41,auVar77);
  auVar46 = vsubps_avx(auVar35,auVar25);
  auVar78._0_4_ =
       auVar46._0_4_ * auVar46._0_4_ + auVar34._0_4_ * auVar34._0_4_ + auVar44._0_4_ * auVar44._0_4_
  ;
  auVar78._4_4_ =
       auVar46._4_4_ * auVar46._4_4_ + auVar34._4_4_ * auVar34._4_4_ + auVar44._4_4_ * auVar44._4_4_
  ;
  auVar78._8_4_ =
       auVar46._8_4_ * auVar46._8_4_ + auVar34._8_4_ * auVar34._8_4_ + auVar44._8_4_ * auVar44._8_4_
  ;
  auVar78._12_4_ =
       auVar46._12_4_ * auVar46._12_4_ +
       auVar34._12_4_ * auVar34._12_4_ + auVar44._12_4_ * auVar44._12_4_;
  auVar78._16_4_ =
       auVar46._16_4_ * auVar46._16_4_ +
       auVar34._16_4_ * auVar34._16_4_ + auVar44._16_4_ * auVar44._16_4_;
  auVar78._20_4_ =
       auVar46._20_4_ * auVar46._20_4_ +
       auVar34._20_4_ * auVar34._20_4_ + auVar44._20_4_ * auVar44._20_4_;
  auVar78._24_4_ =
       auVar46._24_4_ * auVar46._24_4_ +
       auVar34._24_4_ * auVar34._24_4_ + auVar44._24_4_ * auVar44._24_4_;
  auVar78._28_4_ =
       auVar46._28_4_ * auVar46._28_4_ +
       auVar34._28_4_ * auVar34._28_4_ + auVar44._28_4_ * auVar44._28_4_;
  auVar57 = vsqrtps_avx(auVar78);
  auVar34 = vdivps_avx(auVar34,auVar57);
  auVar66._4_4_ = __real_38d1b717;
  auVar66._0_4_ = __real_38d1b717;
  auVar66._8_4_ = __real_38d1b717;
  auVar66._12_4_ = __real_38d1b717;
  auVar66._16_4_ = __real_38d1b717;
  auVar66._20_4_ = __real_38d1b717;
  auVar66._24_4_ = __real_38d1b717;
  auVar66._28_4_ = __real_38d1b717;
  auVar40 = vcmpps_avx(auVar78,auVar66,1);
  auVar44 = vdivps_avx(auVar44,auVar57);
  auVar46 = vdivps_avx(auVar46,auVar57);
  auVar79._4_4_ = __real_3f800000;
  auVar79._0_4_ = __real_3f800000;
  auVar79._8_4_ = __real_3f800000;
  auVar79._12_4_ = __real_3f800000;
  auVar79._16_4_ = __real_3f800000;
  auVar79._20_4_ = __real_3f800000;
  auVar79._24_4_ = __real_3f800000;
  auVar79._28_4_ = __real_3f800000;
  auVar34 = vblendvps_avx(auVar34,auVar79,auVar40);
  uVar83 = auVar40._0_4_;
  auVar47._0_4_ = ~uVar83 & auVar44._0_4_;
  uVar24 = auVar40._4_4_;
  auVar47._4_4_ = ~uVar24 & auVar44._4_4_;
  uVar27 = auVar40._8_4_;
  auVar47._8_4_ = ~uVar27 & auVar44._8_4_;
  uVar28 = auVar40._12_4_;
  auVar47._12_4_ = ~uVar28 & auVar44._12_4_;
  uVar29 = auVar40._16_4_;
  auVar47._16_4_ = ~uVar29 & auVar44._16_4_;
  uVar30 = auVar40._20_4_;
  auVar47._20_4_ = ~uVar30 & auVar44._20_4_;
  uVar31 = auVar40._24_4_;
  auVar47._24_4_ = ~uVar31 & auVar44._24_4_;
  uVar32 = auVar40._28_4_;
  auVar47._28_4_ = ~uVar32 & auVar44._28_4_;
  auVar62._0_4_ = ~uVar83 & auVar46._0_4_;
  auVar62._4_4_ = ~uVar24 & auVar46._4_4_;
  auVar62._8_4_ = ~uVar27 & auVar46._8_4_;
  auVar62._12_4_ = ~uVar28 & auVar46._12_4_;
  auVar62._16_4_ = ~uVar29 & auVar46._16_4_;
  auVar62._20_4_ = ~uVar30 & auVar46._20_4_;
  auVar62._24_4_ = ~uVar31 & auVar46._24_4_;
  auVar62._28_4_ = ~uVar32 & auVar46._28_4_;
  auVar34 = vmaskmovps_avx(auVar2,auVar34);
  auVar40 = vmaskmovps_avx(auVar2,auVar47);
  auVar44 = vmaskmovps_avx(auVar2,auVar62);
  auVar80._0_4_ = ~uVar83 & auVar57._0_4_;
  auVar80._4_4_ = ~uVar24 & auVar57._4_4_;
  auVar80._8_4_ = ~uVar27 & auVar57._8_4_;
  auVar80._12_4_ = ~uVar28 & auVar57._12_4_;
  auVar80._16_4_ = ~uVar29 & auVar57._16_4_;
  auVar80._20_4_ = ~uVar30 & auVar57._20_4_;
  auVar80._24_4_ = ~uVar31 & auVar57._24_4_;
  auVar80._28_4_ = ~uVar32 & auVar57._28_4_;
  auVar46 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_3 + (int)(uVar15 << 2)));
  auVar46 = vsubps_avx(auVar80,auVar46);
  local_2c0 = auVar34._0_4_;
  fStack_2bc = auVar34._4_4_;
  fStack_2b8 = auVar34._8_4_;
  fStack_2b4 = auVar34._12_4_;
  fStack_2b0 = auVar34._16_4_;
  fStack_2ac = auVar34._20_4_;
  fStack_2a8 = auVar34._24_4_;
  fStack_2a4 = auVar34._28_4_;
  fVar68 = auVar46._0_4_;
  fVar70 = auVar46._4_4_;
  fVar71 = auVar46._8_4_;
  fVar72 = auVar46._12_4_;
  fVar73 = auVar46._16_4_;
  fVar74 = auVar46._20_4_;
  fVar75 = auVar46._24_4_;
  fVar76 = auVar46._28_4_;
  local_2a0 = auVar40._0_4_;
  fStack_29c = auVar40._4_4_;
  fStack_298 = auVar40._8_4_;
  fStack_294 = auVar40._12_4_;
  fStack_290 = auVar40._16_4_;
  fStack_28c = auVar40._20_4_;
  fStack_288 = auVar40._24_4_;
  fStack_284 = auVar40._28_4_;
  local_280 = auVar44._0_4_;
  fStack_27c = auVar44._4_4_;
  fStack_278 = auVar44._8_4_;
  fStack_274 = auVar44._12_4_;
  fStack_270 = auVar44._16_4_;
  fStack_26c = auVar44._20_4_;
  fStack_268 = auVar44._24_4_;
  fStack_264 = auVar44._28_4_;
  fVar5 = auVar60._0_4_;
  fVar93 = auVar69._0_4_;
  auVar63._0_4_ = fVar93 + fVar5;
  fVar6 = auVar60._4_4_;
  fVar98 = auVar69._4_4_;
  auVar63._4_4_ = fVar98 + fVar6;
  fVar7 = auVar60._8_4_;
  fVar99 = auVar69._8_4_;
  auVar63._8_4_ = fVar99 + fVar7;
  fVar8 = auVar60._12_4_;
  fVar100 = auVar69._12_4_;
  auVar63._12_4_ = fVar100 + fVar8;
  fVar9 = auVar60._16_4_;
  fVar101 = auVar69._16_4_;
  auVar63._16_4_ = fVar101 + fVar9;
  fVar10 = auVar60._20_4_;
  fVar102 = auVar69._20_4_;
  auVar63._20_4_ = fVar102 + fVar10;
  fVar11 = auVar60._24_4_;
  fVar103 = auVar69._24_4_;
  auVar63._24_4_ = fVar103 + fVar11;
  fVar12 = auVar60._28_4_;
  fVar104 = auVar69._28_4_;
  auVar63._28_4_ = fVar104 + fVar12;
  auVar42._0_4_ = param_4 * fVar68 * local_2c0;
  auVar42._4_4_ = param_4 * fVar70 * fStack_2bc;
  auVar42._8_4_ = param_4 * fVar71 * fStack_2b8;
  auVar42._12_4_ = param_4 * fVar72 * fStack_2b4;
  auVar42._16_4_ = param_4 * fVar73 * fStack_2b0;
  auVar42._20_4_ = param_4 * fVar74 * fStack_2ac;
  auVar42._24_4_ = param_4 * fVar75 * fStack_2a8;
  auVar42._28_4_ = param_4 * fVar76 * fStack_2a4;
  auVar44 = vdivps_avx(auVar42,auVar63);
  auVar48._0_4_ = param_4 * fVar68 * local_2a0;
  auVar48._4_4_ = param_4 * fVar70 * fStack_29c;
  auVar48._8_4_ = param_4 * fVar71 * fStack_298;
  auVar48._12_4_ = param_4 * fVar72 * fStack_294;
  auVar48._16_4_ = param_4 * fVar73 * fStack_290;
  auVar48._20_4_ = param_4 * fVar74 * fStack_28c;
  auVar48._24_4_ = param_4 * fVar75 * fStack_288;
  auVar48._28_4_ = param_4 * fVar76 * fStack_284;
  auVar46 = vdivps_avx(auVar48,auVar63);
  auVar91._0_4_ = param_4 * fVar68 * local_280;
  auVar91._4_4_ = param_4 * fVar70 * fStack_27c;
  auVar91._8_4_ = param_4 * fVar71 * fStack_278;
  auVar91._12_4_ = param_4 * fVar72 * fStack_274;
  auVar91._16_4_ = param_4 * fVar73 * fStack_270;
  auVar91._20_4_ = param_4 * fVar74 * fStack_26c;
  auVar91._24_4_ = param_4 * fVar75 * fStack_268;
  auVar91._28_4_ = param_4 * fVar76 * fStack_264;
  auVar57 = vdivps_avx(auVar91,auVar63);
  auVar40 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar34 = vcmpps_avx(auVar40,auVar60,0);
  auVar40 = vcmpps_avx(auVar69,auVar40,0);
  uVar83 = auVar34._0_4_ & auVar40._0_4_;
  uVar15 = auVar34._4_4_ & auVar40._4_4_;
  uVar24 = auVar34._8_4_ & auVar40._8_4_;
  uVar27 = auVar34._12_4_ & auVar40._12_4_;
  uVar28 = auVar34._16_4_ & auVar40._16_4_;
  uVar29 = auVar34._20_4_ & auVar40._20_4_;
  uVar30 = auVar34._24_4_ & auVar40._24_4_;
  uVar31 = auVar34._28_4_ & auVar40._28_4_;
  fVar82 = (float)(~uVar83 & auVar44._0_4_);
  fVar84 = (float)(~uVar15 & auVar44._4_4_);
  fVar85 = (float)(~uVar24 & auVar44._8_4_);
  fVar86 = (float)(~uVar27 & auVar44._12_4_);
  fVar87 = (float)(~uVar28 & auVar44._16_4_);
  fVar88 = (float)(~uVar29 & auVar44._20_4_);
  fVar89 = (float)(~uVar30 & auVar44._24_4_);
  fVar90 = (float)(~uVar31 & auVar44._28_4_);
  fVar45 = (float)(~uVar83 & auVar46._0_4_);
  fVar49 = (float)(~uVar15 & auVar46._4_4_);
  fVar50 = (float)(~uVar24 & auVar46._8_4_);
  fVar51 = (float)(~uVar27 & auVar46._12_4_);
  fVar52 = (float)(~uVar28 & auVar46._16_4_);
  fVar53 = (float)(~uVar29 & auVar46._20_4_);
  fVar54 = (float)(~uVar30 & auVar46._24_4_);
  fVar55 = (float)(~uVar31 & auVar46._28_4_);
  fVar68 = (float)(~uVar83 & auVar57._0_4_);
  fVar70 = (float)(~uVar15 & auVar57._4_4_);
  fVar71 = (float)(~uVar24 & auVar57._8_4_);
  fVar72 = (float)(~uVar27 & auVar57._12_4_);
  fVar73 = (float)(~uVar28 & auVar57._16_4_);
  fVar74 = (float)(~uVar29 & auVar57._20_4_);
  fVar75 = (float)(~uVar30 & auVar57._24_4_);
  fVar76 = (float)(~uVar31 & auVar57._28_4_);
  auVar40 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar34 = vcmpps_avx(auVar40,auVar69,1);
  auVar37._0_4_ = auVar34._0_4_ & auVar2._0_4_;
  auVar37._4_4_ = auVar34._4_4_ & auVar2._4_4_;
  auVar37._8_4_ = auVar34._8_4_ & auVar2._8_4_;
  auVar37._12_4_ = auVar34._12_4_ & auVar2._12_4_;
  auVar37._16_4_ = auVar34._16_4_ & auVar2._16_4_;
  auVar37._20_4_ = auVar34._20_4_ & auVar2._20_4_;
  auVar37._24_4_ = auVar34._24_4_ & auVar2._24_4_;
  auVar37._28_4_ = auVar34._28_4_ & auVar2._28_4_;
  uVar83 = vmovmskps_avx(auVar37);
  if (uVar83 == 0) goto LAB_14035beaa;
  auVar95._0_4_ = -(fVar93 * fVar82) + auVar26._0_4_;
  auVar95._4_4_ = -(fVar98 * fVar84) + auVar26._4_4_;
  auVar95._8_4_ = -(fVar99 * fVar85) + auVar26._8_4_;
  auVar95._12_4_ = -(fVar100 * fVar86) + auVar26._12_4_;
  auVar97._16_4_ = -(fVar101 * fVar87) + auVar26._16_4_;
  auVar97._0_16_ = auVar95;
  auVar97._20_4_ = -(fVar102 * fVar88) + auVar26._20_4_;
  auVar97._24_4_ = -(fVar103 * fVar89) + auVar26._24_4_;
  auVar97._28_4_ = -(fVar104 * fVar90) + auVar26._28_4_;
  cVar16 = (char)uVar83;
  iVar65 = auVar67._0_4_;
  auVar39 = auVar69._0_16_;
  auVar43 = auVar69._16_16_;
  auVar36 = auVar97._16_16_;
  iVar17 = auVar67._4_4_;
  iVar18 = auVar67._8_4_;
  iVar19 = auVar67._12_4_;
  iVar56 = auVar67._16_4_;
  iVar20 = auVar67._20_4_;
  iVar21 = auVar67._24_4_;
  iVar22 = auVar67._28_4_;
  if ((uVar83 & 1) == 0) {
    if ((uVar83 & 2) == 0) goto LAB_14035bd78;
LAB_14035c082:
    uVar4 = vextractps_avx(auVar95,1);
    *(undefined4 *)(param_1 + iVar17) = uVar4;
    if ((uVar83 & 4) != 0) goto LAB_14035c09b;
LAB_14035bd81:
    if ((uVar83 & 8) == 0) goto LAB_14035bd8a;
LAB_14035c0b4:
    uVar4 = vextractps_avx(auVar95,3);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
    if ((uVar83 & 0x10) != 0) goto LAB_14035c0d9;
LAB_14035bd9f:
    if ((uVar83 & 0x20) == 0) goto LAB_14035bda8;
LAB_14035c0f0:
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + iVar20) = uVar4;
    if ((uVar83 & 0x40) != 0) goto LAB_14035c109;
LAB_14035bdb1:
    if (-1 < cVar16) goto LAB_14035bdb9;
LAB_14035c121:
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + iVar22) = uVar4;
    auVar92._0_4_ = -(fVar93 * fVar45) + auVar41._0_4_;
    auVar92._4_4_ = -(fVar98 * fVar49) + auVar41._4_4_;
    auVar92._8_4_ = -(fVar99 * fVar50) + auVar41._8_4_;
    auVar92._12_4_ = -(fVar100 * fVar51) + auVar41._12_4_;
    auVar92._16_4_ = -(fVar101 * fVar52) + auVar41._16_4_;
    auVar92._20_4_ = -(fVar102 * fVar53) + auVar41._20_4_;
    auVar92._24_4_ = -(fVar103 * fVar54) + auVar41._24_4_;
    auVar92._28_4_ = -(fVar104 * fVar55) + auVar41._28_4_;
    if ((uVar83 & 1) != 0) goto LAB_14035c13f;
LAB_14035bdc7:
    if ((uVar83 & 2) == 0) goto LAB_14035bdd0;
LAB_14035c157:
    uVar4 = vextractps_avx(auVar92._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar4;
    if ((uVar83 & 4) != 0) goto LAB_14035c171;
LAB_14035bdd9:
    if ((uVar83 & 8) == 0) goto LAB_14035bde2;
LAB_14035c18b:
    uVar4 = vextractps_avx(auVar92._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
    auVar36 = auVar92._16_16_;
    if ((uVar83 & 0x10) != 0) goto LAB_14035c1ab;
LAB_14035bdf1:
    if ((uVar83 & 0x20) == 0) goto LAB_14035bdfa;
LAB_14035c1c3:
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar4;
    if ((uVar83 & 0x40) != 0) goto LAB_14035c1dd;
LAB_14035be03:
    if (-1 < cVar16) goto LAB_14035be0b;
LAB_14035c1f6:
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar4;
    auVar81._0_4_ = -(fVar93 * fVar68) + auVar35._0_4_;
    auVar81._4_4_ = -(fVar98 * fVar70) + auVar35._4_4_;
    auVar81._8_4_ = -(fVar99 * fVar71) + auVar35._8_4_;
    auVar81._12_4_ = -(fVar100 * fVar72) + auVar35._12_4_;
    auVar81._16_4_ = -(fVar101 * fVar73) + auVar35._16_4_;
    auVar81._20_4_ = -(fVar102 * fVar74) + auVar35._20_4_;
    auVar81._24_4_ = -(fVar103 * fVar75) + auVar35._24_4_;
    auVar81._28_4_ = -(fVar104 * fVar76) + auVar35._28_4_;
    if ((uVar83 & 1) != 0) goto LAB_14035c215;
LAB_14035be19:
    if ((uVar83 & 2) == 0) goto LAB_14035be22;
LAB_14035c22d:
    uVar4 = vextractps_avx(auVar81._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar4;
    if ((uVar83 & 4) != 0) goto LAB_14035c247;
LAB_14035be2b:
    if ((uVar83 & 8) == 0) goto LAB_14035be34;
LAB_14035c261:
    uVar4 = vextractps_avx(auVar81._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
    auVar36 = auVar81._16_16_;
  }
  else {
    *(float *)(param_1 + iVar65) = auVar95._0_4_;
    if ((uVar83 & 2) != 0) goto LAB_14035c082;
LAB_14035bd78:
    if ((uVar83 & 4) == 0) goto LAB_14035bd81;
LAB_14035c09b:
    uVar4 = vextractps_avx(auVar95,2);
    *(undefined4 *)(param_1 + iVar18) = uVar4;
    if ((uVar83 & 8) != 0) goto LAB_14035c0b4;
LAB_14035bd8a:
    if ((uVar83 & 0x10) == 0) goto LAB_14035bd9f;
LAB_14035c0d9:
    *(float *)(param_1 + iVar56) = auVar97._16_4_;
    if ((uVar83 & 0x20) != 0) goto LAB_14035c0f0;
LAB_14035bda8:
    if ((uVar83 & 0x40) == 0) goto LAB_14035bdb1;
LAB_14035c109:
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
    if (cVar16 < '\0') goto LAB_14035c121;
LAB_14035bdb9:
    auVar92._0_4_ = -(fVar93 * fVar45) + auVar41._0_4_;
    auVar92._4_4_ = -(fVar98 * fVar49) + auVar41._4_4_;
    auVar92._8_4_ = -(fVar99 * fVar50) + auVar41._8_4_;
    auVar92._12_4_ = -(fVar100 * fVar51) + auVar41._12_4_;
    auVar92._16_4_ = -(fVar101 * fVar52) + auVar41._16_4_;
    auVar92._20_4_ = -(fVar102 * fVar53) + auVar41._20_4_;
    auVar92._24_4_ = -(fVar103 * fVar54) + auVar41._24_4_;
    auVar92._28_4_ = -(fVar104 * fVar55) + auVar41._28_4_;
    if ((uVar83 & 1) == 0) goto LAB_14035bdc7;
LAB_14035c13f:
    *(int *)(param_1 + 4 + (longlong)iVar65) = auVar92._0_4_;
    if ((uVar83 & 2) != 0) goto LAB_14035c157;
LAB_14035bdd0:
    if ((uVar83 & 4) == 0) goto LAB_14035bdd9;
LAB_14035c171:
    uVar4 = vextractps_avx(auVar92._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar4;
    if ((uVar83 & 8) != 0) goto LAB_14035c18b;
LAB_14035bde2:
    auVar36 = auVar92._16_16_;
    if ((uVar83 & 0x10) == 0) goto LAB_14035bdf1;
LAB_14035c1ab:
    *(int *)(param_1 + 4 + (longlong)iVar56) = auVar36._0_4_;
    if ((uVar83 & 0x20) != 0) goto LAB_14035c1c3;
LAB_14035bdfa:
    if ((uVar83 & 0x40) == 0) goto LAB_14035be03;
LAB_14035c1dd:
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
    if (cVar16 < '\0') goto LAB_14035c1f6;
LAB_14035be0b:
    auVar81._0_4_ = -(fVar93 * fVar68) + auVar35._0_4_;
    auVar81._4_4_ = -(fVar98 * fVar70) + auVar35._4_4_;
    auVar81._8_4_ = -(fVar99 * fVar71) + auVar35._8_4_;
    auVar81._12_4_ = -(fVar100 * fVar72) + auVar35._12_4_;
    auVar81._16_4_ = -(fVar101 * fVar73) + auVar35._16_4_;
    auVar81._20_4_ = -(fVar102 * fVar74) + auVar35._20_4_;
    auVar81._24_4_ = -(fVar103 * fVar75) + auVar35._24_4_;
    auVar81._28_4_ = -(fVar104 * fVar76) + auVar35._28_4_;
    if ((uVar83 & 1) == 0) goto LAB_14035be19;
LAB_14035c215:
    *(int *)(param_1 + 8 + (longlong)iVar65) = auVar81._0_4_;
    if ((uVar83 & 2) != 0) goto LAB_14035c22d;
LAB_14035be22:
    if ((uVar83 & 4) == 0) goto LAB_14035be2b;
LAB_14035c247:
    uVar4 = vextractps_avx(auVar81._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar4;
    if ((uVar83 & 8) != 0) goto LAB_14035c261;
LAB_14035be34:
    auVar36 = auVar81._16_16_;
  }
  if ((uVar83 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar56) = auVar36._0_4_;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar4;
  }
  if ((uVar83 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar65) = fVar93;
  }
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar4;
  }
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar56) = fVar101;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar43,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar43,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar43,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
LAB_14035beaa:
  auVar26 = vcmpps_avx(auVar40,auVar60,1);
  auVar38._0_4_ = auVar26._0_4_ & auVar2._0_4_;
  auVar38._4_4_ = auVar26._4_4_ & auVar2._4_4_;
  auVar38._8_4_ = auVar26._8_4_ & auVar2._8_4_;
  auVar38._12_4_ = auVar26._12_4_ & auVar2._12_4_;
  auVar38._16_4_ = auVar26._16_4_ & auVar2._16_4_;
  auVar38._20_4_ = auVar26._20_4_ & auVar2._20_4_;
  auVar38._24_4_ = auVar26._24_4_ & auVar2._24_4_;
  auVar38._28_4_ = auVar26._28_4_ & auVar2._28_4_;
  uVar83 = vmovmskps_avx(auVar38);
  if (uVar83 == 0) {
    return;
  }
  auVar59._0_4_ = fVar5 * fVar82 + auVar61._0_4_;
  auVar59._4_4_ = fVar6 * fVar84 + auVar61._4_4_;
  auVar59._8_4_ = fVar7 * fVar85 + auVar61._8_4_;
  auVar59._12_4_ = fVar8 * fVar86 + auVar61._12_4_;
  auVar64._16_4_ = fVar9 * fVar87 + auVar61._16_4_;
  auVar64._0_16_ = auVar59;
  auVar64._20_4_ = fVar10 * fVar88 + auVar61._20_4_;
  auVar64._24_4_ = fVar11 * fVar89 + auVar61._24_4_;
  auVar64._28_4_ = fVar12 * fVar90 + auVar61._28_4_;
  cVar16 = (char)uVar83;
  iVar65 = auVar58._0_4_;
  auVar39 = auVar60._0_16_;
  auVar43 = auVar60._16_16_;
  auVar36 = auVar64._16_16_;
  iVar17 = auVar58._4_4_;
  iVar18 = auVar58._8_4_;
  iVar19 = auVar58._12_4_;
  local_300 = auVar25._0_4_;
  fStack_2fc = auVar25._4_4_;
  fStack_2f8 = auVar25._8_4_;
  fStack_2f4 = auVar25._12_4_;
  fStack_2f0 = auVar25._16_4_;
  fStack_2ec = auVar25._20_4_;
  fStack_2e8 = auVar25._24_4_;
  fStack_2e4 = auVar25._28_4_;
  iVar56 = auVar58._16_4_;
  iVar20 = auVar58._20_4_;
  iVar21 = auVar58._24_4_;
  iVar22 = auVar58._28_4_;
  if ((uVar83 & 1) != 0) {
    *(float *)(param_1 + iVar65) = auVar59._0_4_;
  }
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar59,1);
    *(undefined4 *)(param_1 + iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar59,2);
    *(undefined4 *)(param_1 + iVar18) = uVar4;
  }
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar59,3);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(float *)(param_1 + iVar56) = auVar64._16_4_;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + iVar22) = uVar4;
    auVar58._0_4_ = fVar5 * fVar45 + auVar77._0_4_;
    auVar58._4_4_ = fVar6 * fVar49 + auVar77._4_4_;
    auVar58._8_4_ = fVar7 * fVar50 + auVar77._8_4_;
    auVar58._12_4_ = fVar8 * fVar51 + auVar77._12_4_;
    auVar58._16_4_ = fVar9 * fVar52 + auVar77._16_4_;
    auVar58._20_4_ = fVar10 * fVar53 + auVar77._20_4_;
    auVar58._24_4_ = fVar11 * fVar54 + auVar77._24_4_;
    auVar58._28_4_ = fVar12 * fVar55 + auVar77._28_4_;
  }
  else {
    auVar58._0_4_ = fVar5 * fVar45 + auVar77._0_4_;
    auVar58._4_4_ = fVar6 * fVar49 + auVar77._4_4_;
    auVar58._8_4_ = fVar7 * fVar50 + auVar77._8_4_;
    auVar58._12_4_ = fVar8 * fVar51 + auVar77._12_4_;
    auVar58._16_4_ = fVar9 * fVar52 + auVar77._16_4_;
    auVar58._20_4_ = fVar10 * fVar53 + auVar77._20_4_;
    auVar58._24_4_ = fVar11 * fVar54 + auVar77._24_4_;
    auVar58._28_4_ = fVar12 * fVar55 + auVar77._28_4_;
  }
  if ((uVar83 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar65) = auVar58._0_4_;
  }
  auVar36 = auVar58._0_16_;
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar4;
  }
  auVar94 = auVar58._16_16_;
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar56) = auVar58._16_4_;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar4;
    auVar60._0_4_ = fVar5 * fVar68 + local_300;
    auVar60._4_4_ = fVar6 * fVar70 + fStack_2fc;
    auVar60._8_4_ = fVar7 * fVar71 + fStack_2f8;
    auVar60._12_4_ = fVar8 * fVar72 + fStack_2f4;
    auVar60._16_4_ = fVar9 * fVar73 + fStack_2f0;
    auVar60._20_4_ = fVar10 * fVar74 + fStack_2ec;
    auVar60._24_4_ = fVar11 * fVar75 + fStack_2e8;
    auVar60._28_4_ = fVar12 * fVar76 + fStack_2e4;
  }
  else {
    auVar60._0_4_ = fVar5 * fVar68 + local_300;
    auVar60._4_4_ = fVar6 * fVar70 + fStack_2fc;
    auVar60._8_4_ = fVar7 * fVar71 + fStack_2f8;
    auVar60._12_4_ = fVar8 * fVar72 + fStack_2f4;
    auVar60._16_4_ = fVar9 * fVar73 + fStack_2f0;
    auVar60._20_4_ = fVar10 * fVar74 + fStack_2ec;
    auVar60._24_4_ = fVar11 * fVar75 + fStack_2e8;
    auVar60._28_4_ = fVar12 * fVar76 + fStack_2e4;
  }
  if ((uVar83 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar65) = auVar60._0_4_;
  }
  auVar36 = auVar60._0_16_;
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar4;
  }
  auVar94 = auVar60._16_16_;
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar56) = auVar60._16_4_;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar4;
  }
  if ((uVar83 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar65) = fVar5;
  }
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar4;
  }
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar56) = fVar9;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar43,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar43,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar43,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  return;
}

// ApplySpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2 @ 14035c700

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ApplySpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2
                    (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                    ulonglong param_5,uint param_6)

{
  undefined1 (*pauVar1) [32];
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  int iVar45;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 in_ZMM7 [64];
  uint uVar48;
  undefined1 auVar49 [32];
  uint uVar57;
  undefined1 auVar50 [32];
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 in_ZMM8 [64];
  float fVar58;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar68;
  float fVar69;
  undefined1 auVar59 [32];
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar71 [32];
  float fVar73;
  float fVar80;
  float fVar82;
  float fVar84;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar72;
  float fVar79;
  float fVar81;
  float fVar83;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  float fVar92;
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  int iVar96;
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  float fVar99;
  float fVar102;
  float fVar103;
  undefined1 auVar100 [16];
  float fVar104;
  undefined1 auVar101 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [32];
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
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  int iVar24;
  int iVar25;
  undefined1 auVar78 [32];
  undefined1 auVar111 [32];
  
  uVar15 = __real_0000000c;
  uVar14 = __real_00000004;
  uVar13 = __real_3f800000;
  uVar4 = __real_38d1b717;
  uVar17 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar17 = param_6;
  }
  if ((int)(uVar17 & 0xfffffff8) < 1) {
    uVar22 = 0;
  }
  else {
    uVar18 = 0;
    uVar22 = 0;
    auVar37._0_12_ = ZEXT812(0);
    auVar37._12_4_ = 0;
    do {
      auVar32 = *(undefined1 (*) [32])(param_2 + uVar18 * 2);
      auVar59 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar18 * 2);
      auVar33 = vshufps_avx(auVar32,auVar59,0x88);
      auVar33 = vpermpd_avx2(auVar33,0xd8);
      auVar97 = vpslld_avx2(auVar33,4);
      auVar33 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
      auVar28 = vgatherdps(ZEXT832(0) << 0x20,auVar33);
      auVar100._4_4_ = uVar14;
      auVar100._0_4_ = uVar14;
      auVar100._8_4_ = uVar14;
      auVar100._12_4_ = uVar14;
      auVar33 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
      auVar29 = vgatherdps(ZEXT832(0),auVar33);
      in_ZMM1 = ZEXT3264(auVar29);
      auVar33 = vpcmpeqd_avx2(in_ZMM8._0_32_,in_ZMM8._0_32_);
      auVar41 = vgatherdps(ZEXT832(0) << 0x20,auVar33);
      auVar30._4_4_ = uVar15;
      auVar30._0_4_ = uVar15;
      auVar30._8_4_ = uVar15;
      auVar30._12_4_ = uVar15;
      auVar30._16_4_ = uVar15;
      auVar30._20_4_ = uVar15;
      auVar30._24_4_ = uVar15;
      auVar30._28_4_ = uVar15;
      auVar33 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar110 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar33);
      auVar32 = vshufps_avx(auVar32,auVar59,0xdd);
      auVar32 = vpermpd_avx2(auVar32,0xd8);
      auVar44 = vpslld_avx2(auVar32,4);
      auVar32 = vpcmpeqd_avx2(auVar32,auVar32);
      auVar93 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
      auVar32 = vpcmpeqd_avx2(auVar97 | auVar30,auVar97 | auVar30);
      auVar49 = vgatherdps(ZEXT832(0),auVar32);
      auVar32 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar38 = vgatherdps(ZEXT832(0) << 0x20,auVar32);
      auVar32 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar46 = vgatherdps(ZEXT832(0),auVar32);
      in_ZMM7 = ZEXT3264(auVar46);
      auVar32 = vsubps_avx(auVar28,auVar93);
      auVar31._8_8_ = 0;
      auVar31._0_8_ = *(ulonglong *)(param_4 + uVar22);
      auVar59 = vpmovzxbd_avx2(auVar31);
      auVar59 = vpslld_avx2(auVar59,2);
      vpmovzxdq_avx2(auVar59._16_16_);
      auVar59 = vpmovzxdq_avx2(auVar59._0_16_);
      auVar67._0_12_ = ZEXT812(0);
      auVar67._12_4_ = 0;
      auVar31 = vpcmpeqd_avx(auVar100,auVar100);
      auVar100 = vgatherqps(auVar67,auVar31);
      auVar31 = vpcmpeqd_avx(auVar59._0_16_,auVar59._0_16_);
      auVar31 = vgatherqps(ZEXT816(0) << 0x40,auVar31);
      auVar59 = vsubps_avx(auVar29,auVar49);
      auVar30 = vsubps_avx(auVar41,auVar38);
      auVar39._0_4_ =
           auVar30._0_4_ * auVar30._0_4_ +
           auVar32._0_4_ * auVar32._0_4_ + auVar59._0_4_ * auVar59._0_4_;
      auVar39._4_4_ =
           auVar30._4_4_ * auVar30._4_4_ +
           auVar32._4_4_ * auVar32._4_4_ + auVar59._4_4_ * auVar59._4_4_;
      auVar39._8_4_ =
           auVar30._8_4_ * auVar30._8_4_ +
           auVar32._8_4_ * auVar32._8_4_ + auVar59._8_4_ * auVar59._8_4_;
      auVar39._12_4_ =
           auVar30._12_4_ * auVar30._12_4_ +
           auVar32._12_4_ * auVar32._12_4_ + auVar59._12_4_ * auVar59._12_4_;
      auVar39._16_4_ =
           auVar30._16_4_ * auVar30._16_4_ +
           auVar32._16_4_ * auVar32._16_4_ + auVar59._16_4_ * auVar59._16_4_;
      auVar39._20_4_ =
           auVar30._20_4_ * auVar30._20_4_ +
           auVar32._20_4_ * auVar32._20_4_ + auVar59._20_4_ * auVar59._20_4_;
      auVar39._24_4_ =
           auVar30._24_4_ * auVar30._24_4_ +
           auVar32._24_4_ * auVar32._24_4_ + auVar59._24_4_ * auVar59._24_4_;
      auVar39._28_4_ =
           auVar30._28_4_ * auVar30._28_4_ +
           auVar32._28_4_ * auVar32._28_4_ + auVar59._28_4_ * auVar59._28_4_;
      auVar60 = vsqrtps_avx(auVar39);
      auVar32 = vdivps_avx(auVar32,auVar60);
      auVar33 = vdivps_avx(auVar59,auVar60);
      auVar30 = vdivps_avx(auVar30,auVar60);
      auVar59._4_4_ = uVar4;
      auVar59._0_4_ = uVar4;
      auVar59._8_4_ = uVar4;
      auVar59._12_4_ = uVar4;
      auVar59._16_4_ = uVar4;
      auVar59._20_4_ = uVar4;
      auVar59._24_4_ = uVar4;
      auVar59._28_4_ = uVar4;
      auVar59 = vcmpps_avx(auVar39,auVar59,1);
      auVar76._4_4_ = uVar13;
      auVar76._0_4_ = uVar13;
      auVar76._8_4_ = uVar13;
      auVar76._12_4_ = uVar13;
      auVar76._16_4_ = uVar13;
      auVar76._20_4_ = uVar13;
      auVar76._24_4_ = uVar13;
      auVar76._28_4_ = uVar13;
      auVar32 = vblendvps_avx(auVar32,auVar76,auVar59);
      uVar48 = auVar59._0_4_;
      uVar51 = auVar59._4_4_;
      uVar52 = auVar59._8_4_;
      uVar53 = auVar59._12_4_;
      uVar54 = auVar59._16_4_;
      uVar55 = auVar59._20_4_;
      uVar56 = auVar59._24_4_;
      uVar57 = auVar59._28_4_;
      auVar40._0_4_ = ~uVar48 & auVar60._0_4_;
      auVar40._4_4_ = ~uVar51 & auVar60._4_4_;
      auVar40._8_4_ = ~uVar52 & auVar60._8_4_;
      auVar40._12_4_ = ~uVar53 & auVar60._12_4_;
      auVar40._16_4_ = ~uVar54 & auVar60._16_4_;
      auVar40._20_4_ = ~uVar55 & auVar60._20_4_;
      auVar40._24_4_ = ~uVar56 & auVar60._24_4_;
      auVar40._28_4_ = ~uVar57 & auVar60._28_4_;
      auVar59 = vsubps_avx(auVar40,*(undefined1 (*) [32])(param_3 + (uVar18 & 0xffffffff)));
      fVar58 = auVar59._0_4_;
      fVar63 = auVar59._4_4_;
      fVar64 = auVar59._8_4_;
      fVar65 = auVar59._12_4_;
      fVar66 = auVar59._16_4_;
      fVar68 = auVar59._20_4_;
      fVar69 = auVar59._24_4_;
      fVar70 = auVar59._28_4_;
      fVar5 = auVar46._0_4_;
      fVar73 = auVar110._0_4_;
      auVar50._0_4_ = fVar73 + fVar5;
      fVar6 = auVar46._4_4_;
      fVar80 = auVar110._4_4_;
      auVar50._4_4_ = fVar80 + fVar6;
      fVar7 = auVar46._8_4_;
      fVar82 = auVar110._8_4_;
      auVar50._8_4_ = fVar82 + fVar7;
      fVar8 = auVar46._12_4_;
      fVar84 = auVar110._12_4_;
      auVar50._12_4_ = fVar84 + fVar8;
      fVar9 = auVar46._16_4_;
      fVar86 = auVar110._16_4_;
      auVar50._16_4_ = fVar86 + fVar9;
      fVar10 = auVar46._20_4_;
      fVar88 = auVar110._20_4_;
      auVar50._20_4_ = fVar88 + fVar10;
      fVar11 = auVar46._24_4_;
      fVar90 = auVar110._24_4_;
      auVar50._24_4_ = fVar90 + fVar11;
      fVar12 = auVar46._28_4_;
      fVar92 = auVar110._28_4_;
      auVar50._28_4_ = fVar92 + fVar12;
      fVar72 = auVar100._0_4_;
      auVar60._0_4_ = fVar72 * auVar32._0_4_ * fVar58;
      fVar79 = auVar100._4_4_;
      auVar60._4_4_ = fVar79 * auVar32._4_4_ * fVar63;
      fVar81 = auVar100._8_4_;
      auVar60._8_4_ = fVar81 * auVar32._8_4_ * fVar64;
      fVar83 = auVar100._12_4_;
      auVar60._12_4_ = fVar83 * auVar32._12_4_ * fVar65;
      fVar85 = auVar31._0_4_;
      auVar60._16_4_ = fVar85 * auVar32._16_4_ * fVar66;
      fVar87 = auVar31._4_4_;
      auVar60._20_4_ = fVar87 * auVar32._20_4_ * fVar68;
      fVar89 = auVar31._8_4_;
      auVar60._24_4_ = fVar89 * auVar32._24_4_ * fVar69;
      fVar91 = auVar31._12_4_;
      auVar60._28_4_ = fVar91 * auVar32._28_4_ * fVar70;
      auVar47._0_4_ = (float)(~uVar48 & auVar33._0_4_) * fVar58 * fVar72;
      auVar47._4_4_ = (float)(~uVar51 & auVar33._4_4_) * fVar63 * fVar79;
      auVar47._8_4_ = (float)(~uVar52 & auVar33._8_4_) * fVar64 * fVar81;
      auVar47._12_4_ = (float)(~uVar53 & auVar33._12_4_) * fVar65 * fVar83;
      auVar47._16_4_ = (float)(~uVar54 & auVar33._16_4_) * fVar66 * fVar85;
      auVar47._20_4_ = (float)(~uVar55 & auVar33._20_4_) * fVar68 * fVar87;
      auVar47._24_4_ = (float)(~uVar56 & auVar33._24_4_) * fVar69 * fVar89;
      auVar47._28_4_ = (float)(~uVar57 & auVar33._28_4_) * fVar70 * fVar91;
      auVar33 = vdivps_avx(auVar60,auVar50);
      auVar32._0_4_ = fVar72 * (float)(~uVar48 & auVar30._0_4_) * fVar58;
      auVar32._4_4_ = fVar79 * (float)(~uVar51 & auVar30._4_4_) * fVar63;
      auVar32._8_4_ = fVar81 * (float)(~uVar52 & auVar30._8_4_) * fVar64;
      auVar32._12_4_ = fVar83 * (float)(~uVar53 & auVar30._12_4_) * fVar65;
      auVar32._16_4_ = fVar85 * (float)(~uVar54 & auVar30._16_4_) * fVar66;
      auVar32._20_4_ = fVar87 * (float)(~uVar55 & auVar30._20_4_) * fVar68;
      auVar32._24_4_ = fVar89 * (float)(~uVar56 & auVar30._24_4_) * fVar69;
      auVar32._28_4_ = fVar91 * (float)(~uVar57 & auVar30._28_4_) * fVar70;
      auVar30 = vdivps_avx(auVar47,auVar50);
      auVar60 = vdivps_avx(auVar32,auVar50);
      auVar32 = vcmpps_avx(ZEXT1632(auVar37),auVar46,0);
      auVar59 = vcmpps_avx(auVar110,ZEXT1632(auVar37),0);
      uVar48 = auVar32._0_4_ & auVar59._0_4_;
      uVar51 = auVar32._4_4_ & auVar59._4_4_;
      uVar52 = auVar32._8_4_ & auVar59._8_4_;
      uVar53 = auVar32._12_4_ & auVar59._12_4_;
      uVar54 = auVar32._16_4_ & auVar59._16_4_;
      uVar55 = auVar32._20_4_ & auVar59._20_4_;
      uVar56 = auVar32._24_4_ & auVar59._24_4_;
      uVar57 = auVar32._28_4_ & auVar59._28_4_;
      in_ZMM8 = ZEXT3264(CONCAT428(uVar57,CONCAT424(uVar56,CONCAT420(uVar55,CONCAT416(uVar54,
                                                  CONCAT412(uVar53,CONCAT48(uVar52,CONCAT44(uVar51,
                                                  uVar48))))))));
      fVar99 = (float)(~uVar48 & auVar33._0_4_);
      fVar102 = (float)(~uVar51 & auVar33._4_4_);
      fVar103 = (float)(~uVar52 & auVar33._8_4_);
      fVar104 = (float)(~uVar53 & auVar33._12_4_);
      fVar105 = (float)(~uVar54 & auVar33._16_4_);
      fVar106 = (float)(~uVar55 & auVar33._20_4_);
      fVar107 = (float)(~uVar56 & auVar33._24_4_);
      fVar108 = (float)(~uVar57 & auVar33._28_4_);
      fVar72 = (float)(~uVar48 & auVar30._0_4_);
      fVar79 = (float)(~uVar51 & auVar30._4_4_);
      fVar81 = (float)(~uVar52 & auVar30._8_4_);
      fVar83 = (float)(~uVar53 & auVar30._12_4_);
      fVar85 = (float)(~uVar54 & auVar30._16_4_);
      fVar87 = (float)(~uVar55 & auVar30._20_4_);
      fVar89 = (float)(~uVar56 & auVar30._24_4_);
      fVar91 = (float)(~uVar57 & auVar30._28_4_);
      fVar58 = (float)(~uVar48 & auVar60._0_4_);
      fVar63 = (float)(~uVar51 & auVar60._4_4_);
      fVar64 = (float)(~uVar52 & auVar60._8_4_);
      fVar65 = (float)(~uVar53 & auVar60._12_4_);
      fVar66 = (float)(~uVar54 & auVar60._16_4_);
      fVar68 = (float)(~uVar55 & auVar60._20_4_);
      fVar69 = (float)(~uVar56 & auVar60._24_4_);
      fVar70 = (float)(~uVar57 & auVar60._28_4_);
      auVar32 = vcmpps_avx(ZEXT1632(auVar37),auVar110,1);
      uVar48 = vmovmskps_avx(auVar32);
      if (uVar48 == 0) {
LAB_14035cb5e:
        auVar32 = vcmpps_avx(ZEXT832(0) << 0x20,auVar46,1);
        uVar48 = vmovmskps_avx(auVar32);
      }
      else {
        auVar27._0_4_ = -(fVar73 * fVar99) + auVar28._0_4_;
        auVar27._4_4_ = -(fVar80 * fVar102) + auVar28._4_4_;
        auVar27._8_4_ = -(fVar82 * fVar103) + auVar28._8_4_;
        auVar27._12_4_ = -(fVar84 * fVar104) + auVar28._12_4_;
        auVar33._16_4_ = -(fVar86 * fVar105) + auVar28._16_4_;
        auVar33._0_16_ = auVar27;
        auVar33._20_4_ = -(fVar88 * fVar106) + auVar28._20_4_;
        auVar33._24_4_ = -(fVar90 * fVar107) + auVar28._24_4_;
        auVar33._28_4_ = -(fVar92 * fVar108) + auVar28._28_4_;
        cVar16 = (char)uVar48;
        iVar96 = auVar97._0_4_;
        auVar100 = auVar110._0_16_;
        auVar67 = auVar110._16_16_;
        auVar31 = auVar33._16_16_;
        iVar23 = auVar97._4_4_;
        iVar24 = auVar97._8_4_;
        iVar25 = auVar97._12_4_;
        iVar45 = auVar97._16_4_;
        iVar21 = auVar97._20_4_;
        iVar26 = auVar97._24_4_;
        iVar19 = auVar97._28_4_;
        if ((uVar48 & 1) == 0) {
          if ((uVar48 & 2) == 0) goto LAB_14035ca12;
LAB_14035ccf8:
          uVar3 = vextractps_avx(auVar27,1);
          *(undefined4 *)(param_1 + iVar23) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_14035cd12;
LAB_14035ca1c:
          if ((uVar48 & 8) == 0) goto LAB_14035ca26;
LAB_14035cd2c:
          uVar3 = vextractps_avx(auVar27,3);
          *(undefined4 *)(param_1 + iVar25) = uVar3;
          if ((uVar48 & 0x10) != 0) goto LAB_14035cd52;
LAB_14035ca3c:
          if ((uVar48 & 0x20) == 0) goto LAB_14035ca46;
LAB_14035cd6a:
          uVar3 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + iVar21) = uVar3;
          if ((uVar48 & 0x40) != 0) goto LAB_14035cd84;
LAB_14035ca50:
          if (-1 < cVar16) goto LAB_14035ca58;
LAB_14035cd9c:
          uVar3 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          in_ZMM1 = ZEXT3264(CONCAT428(-(fVar92 * fVar91) + auVar29._28_4_,
                                       CONCAT424(-(fVar90 * fVar89) + auVar29._24_4_,
                                                 CONCAT420(-(fVar88 * fVar87) + auVar29._20_4_,
                                                           CONCAT416(-(fVar86 * fVar85) +
                                                                     auVar29._16_4_,
                                                                     CONCAT412(-(fVar84 * fVar83) +
                                                                               auVar29._12_4_,
                                                                               CONCAT48(-(fVar82 * 
                                                  fVar81) + auVar29._8_4_,
                                                  CONCAT44(-(fVar80 * fVar79) + auVar29._4_4_,
                                                           -(fVar73 * fVar72) + auVar29._0_4_)))))))
                            );
          if ((uVar48 & 1) != 0) goto LAB_14035cdbb;
LAB_14035ca67:
          if ((uVar48 & 2) == 0) goto LAB_14035ca71;
LAB_14035cdd4:
          uVar3 = vextractps_avx(in_ZMM1._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_14035cdef;
LAB_14035ca7b:
          if ((uVar48 & 8) == 0) goto LAB_14035ca85;
LAB_14035ce0a:
          uVar3 = vextractps_avx(in_ZMM1._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar3;
          auVar31 = in_ZMM1._16_16_;
          if ((uVar48 & 0x10) != 0) goto LAB_14035ce2b;
LAB_14035ca95:
          if ((uVar48 & 0x20) == 0) goto LAB_14035ca9f;
LAB_14035ce44:
          uVar3 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
          if ((uVar48 & 0x40) != 0) goto LAB_14035ce5f;
LAB_14035caa9:
          if (-1 < cVar16) goto LAB_14035cab1;
LAB_14035ce78:
          uVar3 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          auVar28._0_4_ = -(fVar73 * fVar58) + auVar41._0_4_;
          auVar28._4_4_ = -(fVar80 * fVar63) + auVar41._4_4_;
          auVar28._8_4_ = -(fVar82 * fVar64) + auVar41._8_4_;
          auVar28._12_4_ = -(fVar84 * fVar65) + auVar41._12_4_;
          auVar28._16_4_ = -(fVar86 * fVar66) + auVar41._16_4_;
          auVar28._20_4_ = -(fVar88 * fVar68) + auVar41._20_4_;
          auVar28._24_4_ = -(fVar90 * fVar69) + auVar41._24_4_;
          auVar28._28_4_ = -(fVar92 * fVar70) + auVar41._28_4_;
          if ((uVar48 & 1) != 0) goto LAB_14035ce98;
LAB_14035cac0:
          if ((uVar48 & 2) == 0) goto LAB_14035caca;
LAB_14035ceb1:
          uVar3 = vextractps_avx(auVar28._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_14035cecc;
LAB_14035cad4:
          if ((uVar48 & 8) == 0) goto LAB_14035cade;
LAB_14035cee7:
          uVar3 = vextractps_avx(auVar28._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar3;
          auVar31 = auVar28._16_16_;
        }
        else {
          *(float *)(param_1 + iVar96) = auVar27._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_14035ccf8;
LAB_14035ca12:
          if ((uVar48 & 4) == 0) goto LAB_14035ca1c;
LAB_14035cd12:
          uVar3 = vextractps_avx(auVar27,2);
          *(undefined4 *)(param_1 + iVar24) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_14035cd2c;
LAB_14035ca26:
          if ((uVar48 & 0x10) == 0) goto LAB_14035ca3c;
LAB_14035cd52:
          *(float *)(param_1 + iVar45) = auVar33._16_4_;
          if ((uVar48 & 0x20) != 0) goto LAB_14035cd6a;
LAB_14035ca46:
          if ((uVar48 & 0x40) == 0) goto LAB_14035ca50;
LAB_14035cd84:
          uVar3 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + iVar26) = uVar3;
          if (cVar16 < '\0') goto LAB_14035cd9c;
LAB_14035ca58:
          in_ZMM1 = ZEXT3264(CONCAT428(-(fVar92 * fVar91) + auVar29._28_4_,
                                       CONCAT424(-(fVar90 * fVar89) + auVar29._24_4_,
                                                 CONCAT420(-(fVar88 * fVar87) + auVar29._20_4_,
                                                           CONCAT416(-(fVar86 * fVar85) +
                                                                     auVar29._16_4_,
                                                                     CONCAT412(-(fVar84 * fVar83) +
                                                                               auVar29._12_4_,
                                                                               CONCAT48(-(fVar82 * 
                                                  fVar81) + auVar29._8_4_,
                                                  CONCAT44(-(fVar80 * fVar79) + auVar29._4_4_,
                                                           -(fVar73 * fVar72) + auVar29._0_4_)))))))
                            );
          if ((uVar48 & 1) == 0) goto LAB_14035ca67;
LAB_14035cdbb:
          *(int *)(param_1 + 4 + (longlong)iVar96) = in_ZMM1._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_14035cdd4;
LAB_14035ca71:
          if ((uVar48 & 4) == 0) goto LAB_14035ca7b;
LAB_14035cdef:
          uVar3 = vextractps_avx(in_ZMM1._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_14035ce0a;
LAB_14035ca85:
          auVar31 = in_ZMM1._16_16_;
          if ((uVar48 & 0x10) == 0) goto LAB_14035ca95;
LAB_14035ce2b:
          *(int *)(param_1 + 4 + (longlong)iVar45) = auVar31._0_4_;
          if ((uVar48 & 0x20) != 0) goto LAB_14035ce44;
LAB_14035ca9f:
          if ((uVar48 & 0x40) == 0) goto LAB_14035caa9;
LAB_14035ce5f:
          uVar3 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar3;
          if (cVar16 < '\0') goto LAB_14035ce78;
LAB_14035cab1:
          auVar28._0_4_ = -(fVar73 * fVar58) + auVar41._0_4_;
          auVar28._4_4_ = -(fVar80 * fVar63) + auVar41._4_4_;
          auVar28._8_4_ = -(fVar82 * fVar64) + auVar41._8_4_;
          auVar28._12_4_ = -(fVar84 * fVar65) + auVar41._12_4_;
          auVar28._16_4_ = -(fVar86 * fVar66) + auVar41._16_4_;
          auVar28._20_4_ = -(fVar88 * fVar68) + auVar41._20_4_;
          auVar28._24_4_ = -(fVar90 * fVar69) + auVar41._24_4_;
          auVar28._28_4_ = -(fVar92 * fVar70) + auVar41._28_4_;
          if ((uVar48 & 1) == 0) goto LAB_14035cac0;
LAB_14035ce98:
          *(int *)(param_1 + 8 + (longlong)iVar96) = auVar28._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_14035ceb1;
LAB_14035caca:
          if ((uVar48 & 4) == 0) goto LAB_14035cad4;
LAB_14035cecc:
          uVar3 = vextractps_avx(auVar28._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_14035cee7;
LAB_14035cade:
          auVar31 = auVar28._16_16_;
        }
        if ((uVar48 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar45) = auVar31._0_4_;
        }
        if ((uVar48 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar3;
        }
        if ((uVar48 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar48 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar96) = fVar73;
        }
        if ((uVar48 & 2) != 0) {
          uVar3 = vextractps_avx(auVar100,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar3;
        }
        if ((uVar48 & 4) != 0) {
          uVar3 = vextractps_avx(auVar100,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar3;
        }
        if ((uVar48 & 8) != 0) {
          uVar3 = vextractps_avx(auVar100,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar3;
        }
        if ((uVar48 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar45) = fVar86;
        }
        if ((uVar48 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar3;
        }
        if ((uVar48 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar3;
        }
        if (-1 < cVar16) goto LAB_14035cb5e;
        uVar3 = vextractps_avx(auVar67,3);
        *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        auVar32 = vcmpps_avx(ZEXT832(0) << 0x20,auVar46,1);
        uVar48 = vmovmskps_avx(auVar32);
      }
      if (uVar48 != 0) {
        auVar101._0_4_ = fVar5 * fVar99 + auVar93._0_4_;
        auVar101._4_4_ = fVar6 * fVar102 + auVar93._4_4_;
        auVar101._8_4_ = fVar7 * fVar103 + auVar93._8_4_;
        auVar101._12_4_ = fVar8 * fVar104 + auVar93._12_4_;
        auVar29._16_4_ = fVar9 * fVar105 + auVar93._16_4_;
        auVar29._0_16_ = auVar101;
        auVar29._20_4_ = fVar10 * fVar106 + auVar93._20_4_;
        auVar29._24_4_ = fVar11 * fVar107 + auVar93._24_4_;
        auVar29._28_4_ = fVar12 * fVar108 + auVar93._28_4_;
        cVar16 = (char)uVar48;
        auVar31 = auVar46._0_16_;
        auVar100 = auVar46._16_16_;
        iVar96 = auVar44._0_4_;
        auVar67 = auVar29._16_16_;
        iVar24 = auVar44._4_4_;
        iVar23 = auVar44._8_4_;
        iVar26 = auVar44._12_4_;
        local_2e0 = auVar49._0_4_;
        fStack_2dc = auVar49._4_4_;
        fStack_2d8 = auVar49._8_4_;
        fStack_2d4 = auVar49._12_4_;
        fStack_2d0 = auVar49._16_4_;
        fStack_2cc = auVar49._20_4_;
        fStack_2c8 = auVar49._24_4_;
        fStack_2c4 = auVar49._28_4_;
        local_2c0 = auVar38._0_4_;
        fStack_2bc = auVar38._4_4_;
        fStack_2b8 = auVar38._8_4_;
        fStack_2b4 = auVar38._12_4_;
        fStack_2b0 = auVar38._16_4_;
        fStack_2ac = auVar38._20_4_;
        fStack_2a8 = auVar38._24_4_;
        fStack_2a4 = auVar38._28_4_;
        iVar45 = auVar44._16_4_;
        iVar21 = auVar44._20_4_;
        iVar25 = auVar44._24_4_;
        iVar19 = auVar44._28_4_;
        if ((uVar48 & 1) == 0) {
          if ((uVar48 & 2) == 0) goto LAB_14035cb8c;
LAB_14035d078:
          uVar3 = vextractps_avx(auVar101,1);
          *(undefined4 *)(param_1 + iVar24) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_14035d092;
LAB_14035cb96:
          if ((uVar48 & 8) == 0) goto LAB_14035cba0;
LAB_14035d0ac:
          uVar3 = vextractps_avx(auVar101,3);
          *(undefined4 *)(param_1 + iVar26) = uVar3;
          if ((uVar48 & 0x10) != 0) goto LAB_14035d0d2;
LAB_14035cbb6:
          if ((uVar48 & 0x20) == 0) goto LAB_14035cbc0;
LAB_14035d0ea:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + iVar21) = uVar3;
          if ((uVar48 & 0x40) != 0) goto LAB_14035d104;
LAB_14035cbca:
          if (-1 < cVar16) goto LAB_14035cbd2;
LAB_14035d11c:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          auVar38._0_4_ = fVar5 * fVar72 + local_2e0;
          auVar38._4_4_ = fVar6 * fVar79 + fStack_2dc;
          auVar38._8_4_ = fVar7 * fVar81 + fStack_2d8;
          auVar38._12_4_ = fVar8 * fVar83 + fStack_2d4;
          auVar38._16_4_ = fVar9 * fVar85 + fStack_2d0;
          auVar38._20_4_ = fVar10 * fVar87 + fStack_2cc;
          auVar38._24_4_ = fVar11 * fVar89 + fStack_2c8;
          auVar38._28_4_ = fVar12 * fVar91 + fStack_2c4;
          if ((uVar48 & 1) != 0) goto LAB_14035d13c;
LAB_14035cbe2:
          if ((uVar48 & 2) == 0) goto LAB_14035cbec;
LAB_14035d155:
          uVar3 = vextractps_avx(auVar38._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_14035d170;
LAB_14035cbf6:
          if ((uVar48 & 8) == 0) goto LAB_14035cc00;
LAB_14035d18b:
          uVar3 = vextractps_avx(auVar38._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar3;
          auVar67 = auVar38._16_16_;
          if ((uVar48 & 0x10) != 0) goto LAB_14035d1ac;
LAB_14035cc10:
          if ((uVar48 & 0x20) == 0) goto LAB_14035cc1a;
LAB_14035d1c5:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
          if ((uVar48 & 0x40) != 0) goto LAB_14035d1e0;
LAB_14035cc24:
          if (-1 < cVar16) goto LAB_14035cc2c;
LAB_14035d1f9:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          auVar41._0_4_ = fVar5 * fVar58 + local_2c0;
          auVar41._4_4_ = fVar6 * fVar63 + fStack_2bc;
          auVar41._8_4_ = fVar7 * fVar64 + fStack_2b8;
          auVar41._12_4_ = fVar8 * fVar65 + fStack_2b4;
          auVar41._16_4_ = fVar9 * fVar66 + fStack_2b0;
          auVar41._20_4_ = fVar10 * fVar68 + fStack_2ac;
          auVar41._24_4_ = fVar11 * fVar69 + fStack_2a8;
          auVar41._28_4_ = fVar12 * fVar70 + fStack_2a4;
          if ((uVar48 & 1) != 0) goto LAB_14035d21b;
LAB_14035cc3d:
          if ((uVar48 & 2) == 0) goto LAB_14035cc47;
LAB_14035d234:
          uVar3 = vextractps_avx(auVar41._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_14035d24f;
LAB_14035cc51:
          if ((uVar48 & 8) == 0) goto LAB_14035cc5b;
LAB_14035d26a:
          uVar3 = vextractps_avx(auVar41._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar3;
          auVar67 = auVar41._16_16_;
        }
        else {
          *(float *)(param_1 + iVar96) = auVar101._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_14035d078;
LAB_14035cb8c:
          if ((uVar48 & 4) == 0) goto LAB_14035cb96;
LAB_14035d092:
          uVar3 = vextractps_avx(auVar101,2);
          *(undefined4 *)(param_1 + iVar23) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_14035d0ac;
LAB_14035cba0:
          if ((uVar48 & 0x10) == 0) goto LAB_14035cbb6;
LAB_14035d0d2:
          *(float *)(param_1 + iVar45) = auVar29._16_4_;
          if ((uVar48 & 0x20) != 0) goto LAB_14035d0ea;
LAB_14035cbc0:
          if ((uVar48 & 0x40) == 0) goto LAB_14035cbca;
LAB_14035d104:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + iVar25) = uVar3;
          if (cVar16 < '\0') goto LAB_14035d11c;
LAB_14035cbd2:
          auVar38._0_4_ = fVar5 * fVar72 + local_2e0;
          auVar38._4_4_ = fVar6 * fVar79 + fStack_2dc;
          auVar38._8_4_ = fVar7 * fVar81 + fStack_2d8;
          auVar38._12_4_ = fVar8 * fVar83 + fStack_2d4;
          auVar38._16_4_ = fVar9 * fVar85 + fStack_2d0;
          auVar38._20_4_ = fVar10 * fVar87 + fStack_2cc;
          auVar38._24_4_ = fVar11 * fVar89 + fStack_2c8;
          auVar38._28_4_ = fVar12 * fVar91 + fStack_2c4;
          if ((uVar48 & 1) == 0) goto LAB_14035cbe2;
LAB_14035d13c:
          *(int *)(param_1 + 4 + (longlong)iVar96) = auVar38._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_14035d155;
LAB_14035cbec:
          if ((uVar48 & 4) == 0) goto LAB_14035cbf6;
LAB_14035d170:
          uVar3 = vextractps_avx(auVar38._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_14035d18b;
LAB_14035cc00:
          auVar67 = auVar38._16_16_;
          if ((uVar48 & 0x10) == 0) goto LAB_14035cc10;
LAB_14035d1ac:
          *(int *)(param_1 + 4 + (longlong)iVar45) = auVar67._0_4_;
          if ((uVar48 & 0x20) != 0) goto LAB_14035d1c5;
LAB_14035cc1a:
          if ((uVar48 & 0x40) == 0) goto LAB_14035cc24;
LAB_14035d1e0:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar3;
          if (cVar16 < '\0') goto LAB_14035d1f9;
LAB_14035cc2c:
          auVar41._0_4_ = fVar5 * fVar58 + local_2c0;
          auVar41._4_4_ = fVar6 * fVar63 + fStack_2bc;
          auVar41._8_4_ = fVar7 * fVar64 + fStack_2b8;
          auVar41._12_4_ = fVar8 * fVar65 + fStack_2b4;
          auVar41._16_4_ = fVar9 * fVar66 + fStack_2b0;
          auVar41._20_4_ = fVar10 * fVar68 + fStack_2ac;
          auVar41._24_4_ = fVar11 * fVar69 + fStack_2a8;
          auVar41._28_4_ = fVar12 * fVar70 + fStack_2a4;
          if ((uVar48 & 1) == 0) goto LAB_14035cc3d;
LAB_14035d21b:
          *(int *)(param_1 + 8 + (longlong)iVar96) = auVar41._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_14035d234;
LAB_14035cc47:
          if ((uVar48 & 4) == 0) goto LAB_14035cc51;
LAB_14035d24f:
          uVar3 = vextractps_avx(auVar41._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_14035d26a;
LAB_14035cc5b:
          auVar67 = auVar41._16_16_;
        }
        if ((uVar48 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar45) = auVar67._0_4_;
        }
        if ((uVar48 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar3;
        }
        if ((uVar48 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar48 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar96) = fVar5;
        }
        if ((uVar48 & 2) != 0) {
          uVar3 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar3;
        }
        if ((uVar48 & 4) != 0) {
          uVar3 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar3;
        }
        if ((uVar48 & 8) != 0) {
          uVar3 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar3;
        }
        if ((uVar48 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar45) = fVar9;
        }
        if ((uVar48 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar100,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar3;
        }
        if ((uVar48 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar100,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar100,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
      }
      uVar22 = uVar22 + 8;
      uVar18 = uVar18 + 0x20;
    } while ((int)uVar22 < (int)(uVar17 & 0xfffffff8));
  }
  iVar21 = (int)uVar22;
  if ((int)param_6 <= iVar21) {
    return param_5;
  }
  auVar44._4_4_ = iVar21;
  auVar44._0_4_ = iVar21;
  auVar44._8_4_ = iVar21;
  auVar44._12_4_ = iVar21;
  auVar44._16_4_ = iVar21;
  auVar44._20_4_ = iVar21;
  auVar44._24_4_ = iVar21;
  auVar44._28_4_ = iVar21;
  auVar32 = vpor_avx2(auVar44,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar46._4_4_ = param_6;
  auVar46._0_4_ = param_6;
  auVar46._8_4_ = param_6;
  auVar46._12_4_ = param_6;
  auVar46._16_4_ = param_6;
  auVar46._20_4_ = param_6;
  auVar46._24_4_ = param_6;
  auVar46._28_4_ = param_6;
  auVar32 = vpcmpgtd_avx2(auVar46,auVar32);
  uVar22 = uVar22 & 0xffffffff;
  pauVar1 = (undefined1 (*) [32])(param_2 + uVar22 * 8);
  uVar17 = vmovmskps_avx(auVar32);
  if (uVar17 == 0xff) {
    auVar59 = *pauVar1;
    auVar33 = pauVar1[1];
    auVar30 = vshufps_avx(auVar59,auVar33,0x88);
    auVar30 = vpermpd_avx2(auVar30,0xd8);
    auVar59 = vshufps_avx(auVar59,auVar33,0xdd);
    auVar59 = vpermpd_avx2(auVar59,0xd8);
  }
  else {
    auVar30 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
    auVar59 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
  }
  auVar47 = vpslld_avx2(auVar30,4);
  auVar33 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
  auVar30 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
  auVar60 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
  auVar50 = vgatherdps(ZEXT832(0),auVar32);
  auVar44 = vpslld_avx2(auVar59,4);
  auVar76 = vgatherdps(ZEXT832(0),auVar32);
  auVar29 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
  auVar28 = vgatherdps(ZEXT832(0),auVar32);
  auVar46 = vgatherdps(ZEXT832(0) << 0x20,auVar32);
  auVar59 = vmaskmovps_avx(auVar32,auVar33);
  auVar33 = vmaskmovps_avx(auVar32,auVar30);
  auVar30 = vmaskmovps_avx(auVar32,auVar60);
  auVar60 = vmaskmovps_avx(auVar32,auVar76);
  auVar76 = vmaskmovps_avx(auVar32,auVar29);
  auVar28 = vmaskmovps_avx(auVar32,auVar28);
  auVar29 = vsubps_avx(auVar59,auVar60);
  auVar39 = vsubps_avx(auVar33,auVar76);
  auVar41 = vsubps_avx(auVar30,auVar28);
  auVar75 = auVar41._0_16_;
  auVar94._0_4_ =
       auVar41._0_4_ * auVar41._0_4_ + auVar29._0_4_ * auVar29._0_4_ + auVar39._0_4_ * auVar39._0_4_
  ;
  auVar94._4_4_ =
       auVar41._4_4_ * auVar41._4_4_ + auVar29._4_4_ * auVar29._4_4_ + auVar39._4_4_ * auVar39._4_4_
  ;
  auVar94._8_4_ =
       auVar41._8_4_ * auVar41._8_4_ + auVar29._8_4_ * auVar29._8_4_ + auVar39._8_4_ * auVar39._8_4_
  ;
  auVar94._12_4_ =
       auVar41._12_4_ * auVar41._12_4_ +
       auVar29._12_4_ * auVar29._12_4_ + auVar39._12_4_ * auVar39._12_4_;
  auVar94._16_4_ =
       auVar41._16_4_ * auVar41._16_4_ +
       auVar29._16_4_ * auVar29._16_4_ + auVar39._16_4_ * auVar39._16_4_;
  auVar94._20_4_ =
       auVar41._20_4_ * auVar41._20_4_ +
       auVar29._20_4_ * auVar29._20_4_ + auVar39._20_4_ * auVar39._20_4_;
  auVar94._24_4_ =
       auVar41._24_4_ * auVar41._24_4_ +
       auVar29._24_4_ * auVar29._24_4_ + auVar39._24_4_ * auVar39._24_4_;
  auVar94._28_4_ =
       auVar41._28_4_ * auVar41._28_4_ +
       auVar29._28_4_ * auVar29._28_4_ + auVar39._28_4_ * auVar39._28_4_;
  auVar40 = vsqrtps_avx(auVar94);
  auVar49._4_4_ = __real_38d1b717;
  auVar49._0_4_ = __real_38d1b717;
  auVar49._8_4_ = __real_38d1b717;
  auVar49._12_4_ = __real_38d1b717;
  auVar49._16_4_ = __real_38d1b717;
  auVar49._20_4_ = __real_38d1b717;
  auVar49._24_4_ = __real_38d1b717;
  auVar49._28_4_ = __real_38d1b717;
  auVar29 = vdivps_avx(auVar29,auVar40);
  auVar38 = vcmpps_avx(auVar94,auVar49,1);
  auVar95._4_4_ = __real_3f800000;
  auVar95._0_4_ = __real_3f800000;
  auVar95._8_4_ = __real_3f800000;
  auVar95._12_4_ = __real_3f800000;
  auVar95._16_4_ = __real_3f800000;
  auVar95._20_4_ = __real_3f800000;
  auVar95._24_4_ = __real_3f800000;
  auVar95._28_4_ = __real_3f800000;
  auVar29 = vblendvps_avx(auVar29,auVar95,auVar38);
  auVar29 = vmaskmovps_avx(auVar32,auVar29);
  auVar39 = vdivps_avx(auVar39,auVar40);
  uVar48 = auVar38._0_4_;
  auVar93._0_4_ = ~uVar48 & auVar39._0_4_;
  uVar51 = auVar38._4_4_;
  auVar93._4_4_ = ~uVar51 & auVar39._4_4_;
  uVar52 = auVar38._8_4_;
  auVar93._8_4_ = ~uVar52 & auVar39._8_4_;
  uVar53 = auVar38._12_4_;
  auVar93._12_4_ = ~uVar53 & auVar39._12_4_;
  uVar54 = auVar38._16_4_;
  auVar93._16_4_ = ~uVar54 & auVar39._16_4_;
  uVar55 = auVar38._20_4_;
  auVar93._20_4_ = ~uVar55 & auVar39._20_4_;
  uVar56 = auVar38._24_4_;
  auVar93._24_4_ = ~uVar56 & auVar39._24_4_;
  uVar57 = auVar38._28_4_;
  auVar93._28_4_ = ~uVar57 & auVar39._28_4_;
  auVar38 = vmaskmovps_avx(auVar32,auVar93);
  auVar39 = vdivps_avx(auVar41,auVar40);
  auVar97._0_4_ = ~uVar48 & auVar39._0_4_;
  auVar97._4_4_ = ~uVar51 & auVar39._4_4_;
  auVar97._8_4_ = ~uVar52 & auVar39._8_4_;
  auVar97._12_4_ = ~uVar53 & auVar39._12_4_;
  auVar97._16_4_ = ~uVar54 & auVar39._16_4_;
  auVar97._20_4_ = ~uVar55 & auVar39._20_4_;
  auVar97._24_4_ = ~uVar56 & auVar39._24_4_;
  auVar97._28_4_ = ~uVar57 & auVar39._28_4_;
  auVar39 = vmaskmovps_avx(auVar32,auVar97);
  auVar41 = vmaskmovps_avx(auVar32,*(undefined1 (*) [32])(param_3 + (iVar21 << 2)));
  auVar110._0_4_ = ~uVar48 & auVar40._0_4_;
  auVar110._4_4_ = ~uVar51 & auVar40._4_4_;
  auVar110._8_4_ = ~uVar52 & auVar40._8_4_;
  auVar110._12_4_ = ~uVar53 & auVar40._12_4_;
  auVar110._16_4_ = ~uVar54 & auVar40._16_4_;
  auVar110._20_4_ = ~uVar55 & auVar40._20_4_;
  auVar110._24_4_ = ~uVar56 & auVar40._24_4_;
  auVar110._28_4_ = ~uVar57 & auVar40._28_4_;
  if ((~(byte)uVar17 & 0x81) == 0) {
    auVar75._8_8_ = 0;
    auVar75._0_8_ = *(ulonglong *)(param_4 + uVar22);
  }
  else {
    puVar20 = (undefined1 *)(param_4 + uVar22);
    if ((uVar17 & 1) != 0) {
      uVar2 = *puVar20;
      auVar75[1] = uVar2;
      auVar75[0] = uVar2;
      auVar75[2] = uVar2;
      auVar75[3] = uVar2;
      auVar75[4] = uVar2;
      auVar75[5] = uVar2;
      auVar75[6] = uVar2;
      auVar75[7] = uVar2;
      auVar75[8] = uVar2;
      auVar75[9] = uVar2;
      auVar75[10] = uVar2;
      auVar75[0xb] = uVar2;
      auVar75[0xc] = uVar2;
      auVar75[0xd] = uVar2;
      auVar75[0xe] = uVar2;
      auVar75[0xf] = uVar2;
    }
    if ((uVar17 & 2) != 0) {
      auVar37 = vpinsrb_avx(auVar75,(uint)(byte)puVar20[1],1);
      auVar75 = vpblendw_avx(auVar37,auVar75,0xe);
    }
    if ((uVar17 & 4) != 0) {
      auVar37 = vpmovzxwd_avx(auVar75);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[2],2);
      auVar37 = vpinsrb_avx(auVar37,(uint)auVar75[3],3);
      auVar75 = vpblendd_avx2(auVar37,auVar75,2);
    }
    if ((uVar17 & 8) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048080030280020100);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[3],3);
      auVar75 = vpblendd_avx2(auVar37,auVar75,2);
    }
    if ((uVar17 & 0x10) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048080030203020100);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[4],4);
      auVar37 = vpinsrb_avx(auVar37,(uint)auVar75[5],5);
      auVar75 = vpblendw_avx(auVar37,auVar75,8);
    }
    if ((uVar17 & 0x20) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048080030403020100);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[5],5);
      auVar75 = vpblendw_avx(auVar37,auVar75,8);
    }
    if ((uVar17 & 0x40) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048080050403020100);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[6],6);
      auVar75 = vpinsrb_avx(auVar37,(uint)auVar75[7],7);
    }
    if ((uVar17 & 0x80) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048006050403020100);
      auVar75 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[7],7);
    }
  }
  auVar40 = vsubps_avx(auVar110,auVar41);
  local_2a0 = auVar29._0_4_;
  fStack_29c = auVar29._4_4_;
  fStack_298 = auVar29._8_4_;
  fStack_294 = auVar29._12_4_;
  fStack_290 = auVar29._16_4_;
  fStack_28c = auVar29._20_4_;
  fStack_288 = auVar29._24_4_;
  fStack_284 = auVar29._28_4_;
  fVar72 = auVar40._0_4_;
  fVar79 = auVar40._4_4_;
  fVar81 = auVar40._8_4_;
  fVar83 = auVar40._12_4_;
  fVar85 = auVar40._16_4_;
  fVar87 = auVar40._20_4_;
  fVar89 = auVar40._24_4_;
  fVar91 = auVar40._28_4_;
  local_280 = auVar38._0_4_;
  fStack_27c = auVar38._4_4_;
  fStack_278 = auVar38._8_4_;
  fStack_274 = auVar38._12_4_;
  fStack_270 = auVar38._16_4_;
  fStack_26c = auVar38._20_4_;
  fStack_268 = auVar38._24_4_;
  fStack_264 = auVar38._28_4_;
  auVar29 = vpmovzxbd_avx2(auVar75);
  auVar29 = vpslld_avx2(auVar29,2);
  vpmovzxdq_avx2(auVar29._16_16_);
  vpmovzxdq_avx2(auVar29._0_16_);
  auVar37 = vgatherqps(ZEXT816(0) << 0x20,auVar32._0_16_);
  auVar31 = vgatherqps(ZEXT816(0) << 0x40,auVar32._16_16_);
  local_260 = auVar39._0_4_;
  fStack_25c = auVar39._4_4_;
  fStack_258 = auVar39._8_4_;
  fStack_254 = auVar39._12_4_;
  fStack_250 = auVar39._16_4_;
  fStack_24c = auVar39._20_4_;
  fStack_248 = auVar39._24_4_;
  fStack_244 = auVar39._28_4_;
  fVar5 = auVar46._0_4_;
  fVar99 = auVar50._0_4_;
  auVar77._0_4_ = fVar99 + fVar5;
  fVar6 = auVar46._4_4_;
  fVar102 = auVar50._4_4_;
  auVar77._4_4_ = fVar102 + fVar6;
  fVar7 = auVar46._8_4_;
  fVar103 = auVar50._8_4_;
  auVar77._8_4_ = fVar103 + fVar7;
  fVar8 = auVar46._12_4_;
  fVar104 = auVar50._12_4_;
  auVar77._12_4_ = fVar104 + fVar8;
  fVar9 = auVar46._16_4_;
  fVar105 = auVar50._16_4_;
  auVar77._16_4_ = fVar105 + fVar9;
  fVar10 = auVar46._20_4_;
  fVar106 = auVar50._20_4_;
  auVar77._20_4_ = fVar106 + fVar10;
  fVar11 = auVar46._24_4_;
  fVar107 = auVar50._24_4_;
  auVar77._24_4_ = fVar107 + fVar11;
  fVar12 = auVar46._28_4_;
  fVar108 = auVar50._28_4_;
  auVar77._28_4_ = fVar108 + fVar12;
  fVar58 = auVar37._0_4_;
  auVar42._0_4_ = fVar72 * local_2a0 * fVar58;
  fVar63 = auVar37._4_4_;
  auVar42._4_4_ = fVar79 * fStack_29c * fVar63;
  fVar64 = auVar37._8_4_;
  auVar42._8_4_ = fVar81 * fStack_298 * fVar64;
  fVar65 = auVar37._12_4_;
  auVar42._12_4_ = fVar83 * fStack_294 * fVar65;
  fVar66 = auVar31._0_4_;
  auVar42._16_4_ = fVar85 * fStack_290 * fVar66;
  fVar68 = auVar31._4_4_;
  auVar42._20_4_ = fVar87 * fStack_28c * fVar68;
  fVar69 = auVar31._8_4_;
  auVar42._24_4_ = fVar89 * fStack_288 * fVar69;
  fVar70 = auVar31._12_4_;
  auVar42._28_4_ = fVar91 * fStack_284 * fVar70;
  auVar39 = vdivps_avx(auVar42,auVar77);
  auVar61._0_4_ = fVar72 * local_280 * fVar58;
  auVar61._4_4_ = fVar79 * fStack_27c * fVar63;
  auVar61._8_4_ = fVar81 * fStack_278 * fVar64;
  auVar61._12_4_ = fVar83 * fStack_274 * fVar65;
  auVar61._16_4_ = fVar85 * fStack_270 * fVar66;
  auVar61._20_4_ = fVar87 * fStack_26c * fVar68;
  auVar61._24_4_ = fVar89 * fStack_268 * fVar69;
  auVar61._28_4_ = fVar91 * fStack_264 * fVar70;
  auVar40 = vdivps_avx(auVar61,auVar77);
  auVar34._0_4_ = fVar72 * local_260 * fVar58;
  auVar34._4_4_ = fVar79 * fStack_25c * fVar63;
  auVar34._8_4_ = fVar81 * fStack_258 * fVar64;
  auVar34._12_4_ = fVar83 * fStack_254 * fVar65;
  auVar34._16_4_ = fVar85 * fStack_250 * fVar66;
  auVar34._20_4_ = fVar87 * fStack_24c * fVar68;
  auVar34._24_4_ = fVar89 * fStack_248 * fVar69;
  auVar34._28_4_ = fVar91 * fStack_244 * fVar70;
  auVar41 = vdivps_avx(auVar34,auVar77);
  auVar29 = vcmpps_avx(ZEXT832(0) << 0x20,auVar46,0);
  auVar38 = vcmpps_avx(auVar50,ZEXT832(0) << 0x20,0);
  uVar17 = auVar38._0_4_ & auVar29._0_4_;
  uVar48 = auVar38._4_4_ & auVar29._4_4_;
  uVar51 = auVar38._8_4_ & auVar29._8_4_;
  uVar52 = auVar38._12_4_ & auVar29._12_4_;
  uVar53 = auVar38._16_4_ & auVar29._16_4_;
  uVar54 = auVar38._20_4_ & auVar29._20_4_;
  uVar55 = auVar38._24_4_ & auVar29._24_4_;
  uVar56 = auVar38._28_4_ & auVar29._28_4_;
  fVar73 = (float)(~uVar17 & auVar39._0_4_);
  fVar80 = (float)(~uVar48 & auVar39._4_4_);
  fVar82 = (float)(~uVar51 & auVar39._8_4_);
  fVar84 = (float)(~uVar52 & auVar39._12_4_);
  fVar86 = (float)(~uVar53 & auVar39._16_4_);
  fVar88 = (float)(~uVar54 & auVar39._20_4_);
  fVar90 = (float)(~uVar55 & auVar39._24_4_);
  fVar92 = (float)(~uVar56 & auVar39._28_4_);
  fVar72 = (float)(~uVar17 & auVar40._0_4_);
  fVar79 = (float)(~uVar48 & auVar40._4_4_);
  fVar81 = (float)(~uVar51 & auVar40._8_4_);
  fVar83 = (float)(~uVar52 & auVar40._12_4_);
  fVar85 = (float)(~uVar53 & auVar40._16_4_);
  fVar87 = (float)(~uVar54 & auVar40._20_4_);
  fVar89 = (float)(~uVar55 & auVar40._24_4_);
  fVar91 = (float)(~uVar56 & auVar40._28_4_);
  fVar58 = (float)(~uVar17 & auVar41._0_4_);
  fVar63 = (float)(~uVar48 & auVar41._4_4_);
  fVar64 = (float)(~uVar51 & auVar41._8_4_);
  fVar65 = (float)(~uVar52 & auVar41._12_4_);
  fVar66 = (float)(~uVar53 & auVar41._16_4_);
  fVar68 = (float)(~uVar54 & auVar41._20_4_);
  fVar69 = (float)(~uVar55 & auVar41._24_4_);
  fVar70 = (float)(~uVar56 & auVar41._28_4_);
  auVar29 = vcmpps_avx(ZEXT832(0) << 0x20,auVar50,1);
  auVar35._0_4_ = auVar29._0_4_ & auVar32._0_4_;
  auVar35._4_4_ = auVar29._4_4_ & auVar32._4_4_;
  auVar35._8_4_ = auVar29._8_4_ & auVar32._8_4_;
  auVar35._12_4_ = auVar29._12_4_ & auVar32._12_4_;
  auVar35._16_4_ = auVar29._16_4_ & auVar32._16_4_;
  auVar35._20_4_ = auVar29._20_4_ & auVar32._20_4_;
  auVar35._24_4_ = auVar29._24_4_ & auVar32._24_4_;
  auVar35._28_4_ = auVar29._28_4_ & auVar32._28_4_;
  uVar17 = vmovmskps_avx(auVar35);
  if (uVar17 == 0) goto LAB_14035d87a;
  auVar109._0_4_ = -(fVar99 * fVar73) + auVar59._0_4_;
  auVar109._4_4_ = -(fVar102 * fVar80) + auVar59._4_4_;
  auVar109._8_4_ = -(fVar103 * fVar82) + auVar59._8_4_;
  auVar109._12_4_ = -(fVar104 * fVar84) + auVar59._12_4_;
  auVar111._16_4_ = -(fVar105 * fVar86) + auVar59._16_4_;
  auVar111._0_16_ = auVar109;
  auVar111._20_4_ = -(fVar106 * fVar88) + auVar59._20_4_;
  auVar111._24_4_ = -(fVar107 * fVar90) + auVar59._24_4_;
  auVar111._28_4_ = -(fVar108 * fVar92) + auVar59._28_4_;
  cVar16 = (char)uVar17;
  iVar45 = auVar47._0_4_;
  auVar37 = auVar50._0_16_;
  auVar31 = auVar50._16_16_;
  auVar100 = auVar111._16_16_;
  iVar19 = auVar47._4_4_;
  iVar21 = auVar47._8_4_;
  iVar26 = auVar47._12_4_;
  iVar96 = auVar47._16_4_;
  iVar23 = auVar47._20_4_;
  iVar24 = auVar47._24_4_;
  iVar25 = auVar47._28_4_;
  if ((uVar17 & 1) == 0) {
    if ((uVar17 & 2) == 0) goto LAB_14035d748;
LAB_14035da58:
    uVar4 = vextractps_avx(auVar109,1);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
    if ((uVar17 & 4) != 0) goto LAB_14035da71;
LAB_14035d751:
    if ((uVar17 & 8) == 0) goto LAB_14035d75a;
LAB_14035da8a:
    uVar4 = vextractps_avx(auVar109,3);
    *(undefined4 *)(param_1 + iVar26) = uVar4;
    if ((uVar17 & 0x10) != 0) goto LAB_14035daaf;
LAB_14035d76f:
    if ((uVar17 & 0x20) == 0) goto LAB_14035d778;
LAB_14035dac6:
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + iVar23) = uVar4;
    if ((uVar17 & 0x40) != 0) goto LAB_14035dadf;
LAB_14035d781:
    if (-1 < cVar16) goto LAB_14035d789;
LAB_14035daf7:
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + iVar25) = uVar4;
    auVar98._0_4_ = -(fVar99 * fVar72) + auVar33._0_4_;
    auVar98._4_4_ = -(fVar102 * fVar79) + auVar33._4_4_;
    auVar98._8_4_ = -(fVar103 * fVar81) + auVar33._8_4_;
    auVar98._12_4_ = -(fVar104 * fVar83) + auVar33._12_4_;
    auVar98._16_4_ = -(fVar105 * fVar85) + auVar33._16_4_;
    auVar98._20_4_ = -(fVar106 * fVar87) + auVar33._20_4_;
    auVar98._24_4_ = -(fVar107 * fVar89) + auVar33._24_4_;
    auVar98._28_4_ = -(fVar108 * fVar91) + auVar33._28_4_;
    if ((uVar17 & 1) != 0) goto LAB_14035db15;
LAB_14035d797:
    if ((uVar17 & 2) == 0) goto LAB_14035d7a0;
LAB_14035db2d:
    uVar4 = vextractps_avx(auVar98._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
    if ((uVar17 & 4) != 0) goto LAB_14035db47;
LAB_14035d7a9:
    if ((uVar17 & 8) == 0) goto LAB_14035d7b2;
LAB_14035db61:
    uVar4 = vextractps_avx(auVar98._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar4;
    auVar100 = auVar98._16_16_;
    if ((uVar17 & 0x10) != 0) goto LAB_14035db81;
LAB_14035d7c1:
    if ((uVar17 & 0x20) == 0) goto LAB_14035d7ca;
LAB_14035db99:
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar4;
    if ((uVar17 & 0x40) != 0) goto LAB_14035dbb3;
LAB_14035d7d3:
    if (-1 < cVar16) goto LAB_14035d7db;
LAB_14035dbcc:
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar4;
    auVar71._0_4_ = -(fVar99 * fVar58) + auVar30._0_4_;
    auVar71._4_4_ = -(fVar102 * fVar63) + auVar30._4_4_;
    auVar71._8_4_ = -(fVar103 * fVar64) + auVar30._8_4_;
    auVar71._12_4_ = -(fVar104 * fVar65) + auVar30._12_4_;
    auVar71._16_4_ = -(fVar105 * fVar66) + auVar30._16_4_;
    auVar71._20_4_ = -(fVar106 * fVar68) + auVar30._20_4_;
    auVar71._24_4_ = -(fVar107 * fVar69) + auVar30._24_4_;
    auVar71._28_4_ = -(fVar108 * fVar70) + auVar30._28_4_;
    if ((uVar17 & 1) != 0) goto LAB_14035dbeb;
LAB_14035d7e9:
    if ((uVar17 & 2) == 0) goto LAB_14035d7f2;
LAB_14035dc03:
    uVar4 = vextractps_avx(auVar71._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
    if ((uVar17 & 4) != 0) goto LAB_14035dc1d;
LAB_14035d7fb:
    if ((uVar17 & 8) == 0) goto LAB_14035d804;
LAB_14035dc37:
    uVar4 = vextractps_avx(auVar71._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar4;
    auVar100 = auVar71._16_16_;
  }
  else {
    *(float *)(param_1 + iVar45) = auVar109._0_4_;
    if ((uVar17 & 2) != 0) goto LAB_14035da58;
LAB_14035d748:
    if ((uVar17 & 4) == 0) goto LAB_14035d751;
LAB_14035da71:
    uVar4 = vextractps_avx(auVar109,2);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
    if ((uVar17 & 8) != 0) goto LAB_14035da8a;
LAB_14035d75a:
    if ((uVar17 & 0x10) == 0) goto LAB_14035d76f;
LAB_14035daaf:
    *(float *)(param_1 + iVar96) = auVar111._16_4_;
    if ((uVar17 & 0x20) != 0) goto LAB_14035dac6;
LAB_14035d778:
    if ((uVar17 & 0x40) == 0) goto LAB_14035d781;
LAB_14035dadf:
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + iVar24) = uVar4;
    if (cVar16 < '\0') goto LAB_14035daf7;
LAB_14035d789:
    auVar98._0_4_ = -(fVar99 * fVar72) + auVar33._0_4_;
    auVar98._4_4_ = -(fVar102 * fVar79) + auVar33._4_4_;
    auVar98._8_4_ = -(fVar103 * fVar81) + auVar33._8_4_;
    auVar98._12_4_ = -(fVar104 * fVar83) + auVar33._12_4_;
    auVar98._16_4_ = -(fVar105 * fVar85) + auVar33._16_4_;
    auVar98._20_4_ = -(fVar106 * fVar87) + auVar33._20_4_;
    auVar98._24_4_ = -(fVar107 * fVar89) + auVar33._24_4_;
    auVar98._28_4_ = -(fVar108 * fVar91) + auVar33._28_4_;
    if ((uVar17 & 1) == 0) goto LAB_14035d797;
LAB_14035db15:
    *(int *)(param_1 + 4 + (longlong)iVar45) = auVar98._0_4_;
    if ((uVar17 & 2) != 0) goto LAB_14035db2d;
LAB_14035d7a0:
    if ((uVar17 & 4) == 0) goto LAB_14035d7a9;
LAB_14035db47:
    uVar4 = vextractps_avx(auVar98._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
    if ((uVar17 & 8) != 0) goto LAB_14035db61;
LAB_14035d7b2:
    auVar100 = auVar98._16_16_;
    if ((uVar17 & 0x10) == 0) goto LAB_14035d7c1;
LAB_14035db81:
    *(int *)(param_1 + 4 + (longlong)iVar96) = auVar100._0_4_;
    if ((uVar17 & 0x20) != 0) goto LAB_14035db99;
LAB_14035d7ca:
    if ((uVar17 & 0x40) == 0) goto LAB_14035d7d3;
LAB_14035dbb3:
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar4;
    if (cVar16 < '\0') goto LAB_14035dbcc;
LAB_14035d7db:
    auVar71._0_4_ = -(fVar99 * fVar58) + auVar30._0_4_;
    auVar71._4_4_ = -(fVar102 * fVar63) + auVar30._4_4_;
    auVar71._8_4_ = -(fVar103 * fVar64) + auVar30._8_4_;
    auVar71._12_4_ = -(fVar104 * fVar65) + auVar30._12_4_;
    auVar71._16_4_ = -(fVar105 * fVar66) + auVar30._16_4_;
    auVar71._20_4_ = -(fVar106 * fVar68) + auVar30._20_4_;
    auVar71._24_4_ = -(fVar107 * fVar69) + auVar30._24_4_;
    auVar71._28_4_ = -(fVar108 * fVar70) + auVar30._28_4_;
    if ((uVar17 & 1) == 0) goto LAB_14035d7e9;
LAB_14035dbeb:
    *(int *)(param_1 + 8 + (longlong)iVar45) = auVar71._0_4_;
    if ((uVar17 & 2) != 0) goto LAB_14035dc03;
LAB_14035d7f2:
    if ((uVar17 & 4) == 0) goto LAB_14035d7fb;
LAB_14035dc1d:
    uVar4 = vextractps_avx(auVar71._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
    if ((uVar17 & 8) != 0) goto LAB_14035dc37;
LAB_14035d804:
    auVar100 = auVar71._16_16_;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar96) = auVar100._0_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar4;
  }
  if ((uVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar45) = fVar99;
  }
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar37,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar37,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar4;
  }
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar37,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar96) = fVar105;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar31,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar31,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar31,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar4;
  }
LAB_14035d87a:
  auVar59 = vcmpps_avx(ZEXT832(0) << 0x20,auVar46,1);
  auVar36._0_4_ = auVar59._0_4_ & auVar32._0_4_;
  auVar36._4_4_ = auVar59._4_4_ & auVar32._4_4_;
  auVar36._8_4_ = auVar59._8_4_ & auVar32._8_4_;
  auVar36._12_4_ = auVar59._12_4_ & auVar32._12_4_;
  auVar36._16_4_ = auVar59._16_4_ & auVar32._16_4_;
  auVar36._20_4_ = auVar59._20_4_ & auVar32._20_4_;
  auVar36._24_4_ = auVar59._24_4_ & auVar32._24_4_;
  auVar36._28_4_ = auVar59._28_4_ & auVar32._28_4_;
  uVar17 = vmovmskps_avx(auVar36);
  uVar22 = (ulonglong)uVar17;
  if (uVar17 == 0) {
    return 0;
  }
  auVar74._0_4_ = fVar5 * fVar73 + auVar60._0_4_;
  auVar74._4_4_ = fVar6 * fVar80 + auVar60._4_4_;
  auVar74._8_4_ = fVar7 * fVar82 + auVar60._8_4_;
  auVar74._12_4_ = fVar8 * fVar84 + auVar60._12_4_;
  auVar78._16_4_ = fVar9 * fVar86 + auVar60._16_4_;
  auVar78._0_16_ = auVar74;
  auVar78._20_4_ = fVar10 * fVar88 + auVar60._20_4_;
  auVar78._24_4_ = fVar11 * fVar90 + auVar60._24_4_;
  auVar78._28_4_ = fVar12 * fVar92 + auVar60._28_4_;
  cVar16 = (char)uVar17;
  iVar45 = auVar44._0_4_;
  auVar37 = auVar46._0_16_;
  auVar31 = auVar46._16_16_;
  auVar100 = auVar78._16_16_;
  iVar19 = auVar44._4_4_;
  iVar25 = auVar44._8_4_;
  iVar24 = auVar44._12_4_;
  local_2e0 = auVar76._0_4_;
  fStack_2dc = auVar76._4_4_;
  fStack_2d8 = auVar76._8_4_;
  fStack_2d4 = auVar76._12_4_;
  fStack_2d0 = auVar76._16_4_;
  fStack_2cc = auVar76._20_4_;
  fStack_2c8 = auVar76._24_4_;
  fStack_2c4 = auVar76._28_4_;
  local_2c0 = auVar28._0_4_;
  fStack_2bc = auVar28._4_4_;
  fStack_2b8 = auVar28._8_4_;
  fStack_2b4 = auVar28._12_4_;
  fStack_2b0 = auVar28._16_4_;
  fStack_2ac = auVar28._20_4_;
  fStack_2a8 = auVar28._24_4_;
  fStack_2a4 = auVar28._28_4_;
  iVar96 = auVar44._16_4_;
  iVar23 = auVar44._20_4_;
  iVar26 = auVar44._24_4_;
  iVar21 = auVar44._28_4_;
  if ((uVar17 & 1) != 0) {
    *(float *)(param_1 + iVar45) = auVar74._0_4_;
  }
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + iVar25) = uVar4;
  }
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + iVar24) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(float *)(param_1 + iVar96) = auVar78._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + iVar26) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
    auVar62._0_4_ = fVar5 * fVar72 + local_2e0;
    auVar62._4_4_ = fVar6 * fVar79 + fStack_2dc;
    auVar62._8_4_ = fVar7 * fVar81 + fStack_2d8;
    auVar62._12_4_ = fVar8 * fVar83 + fStack_2d4;
    auVar62._16_4_ = fVar9 * fVar85 + fStack_2d0;
    auVar62._20_4_ = fVar10 * fVar87 + fStack_2cc;
    auVar62._24_4_ = fVar11 * fVar89 + fStack_2c8;
    auVar62._28_4_ = fVar12 * fVar91 + fStack_2c4;
  }
  else {
    auVar62._0_4_ = fVar5 * fVar72 + local_2e0;
    auVar62._4_4_ = fVar6 * fVar79 + fStack_2dc;
    auVar62._8_4_ = fVar7 * fVar81 + fStack_2d8;
    auVar62._12_4_ = fVar8 * fVar83 + fStack_2d4;
    auVar62._16_4_ = fVar9 * fVar85 + fStack_2d0;
    auVar62._20_4_ = fVar10 * fVar87 + fStack_2cc;
    auVar62._24_4_ = fVar11 * fVar89 + fStack_2c8;
    auVar62._28_4_ = fVar12 * fVar91 + fStack_2c4;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar45) = auVar62._0_4_;
  }
  auVar100 = auVar62._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar4;
  }
  auVar67 = auVar62._16_16_;
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar96) = auVar62._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
    auVar43._0_4_ = fVar5 * fVar58 + local_2c0;
    auVar43._4_4_ = fVar6 * fVar63 + fStack_2bc;
    auVar43._8_4_ = fVar7 * fVar64 + fStack_2b8;
    auVar43._12_4_ = fVar8 * fVar65 + fStack_2b4;
    auVar43._16_4_ = fVar9 * fVar66 + fStack_2b0;
    auVar43._20_4_ = fVar10 * fVar68 + fStack_2ac;
    auVar43._24_4_ = fVar11 * fVar69 + fStack_2a8;
    auVar43._28_4_ = fVar12 * fVar70 + fStack_2a4;
  }
  else {
    auVar43._0_4_ = fVar5 * fVar58 + local_2c0;
    auVar43._4_4_ = fVar6 * fVar63 + fStack_2bc;
    auVar43._8_4_ = fVar7 * fVar64 + fStack_2b8;
    auVar43._12_4_ = fVar8 * fVar65 + fStack_2b4;
    auVar43._16_4_ = fVar9 * fVar66 + fStack_2b0;
    auVar43._20_4_ = fVar10 * fVar68 + fStack_2ac;
    auVar43._24_4_ = fVar11 * fVar69 + fStack_2a8;
    auVar43._28_4_ = fVar12 * fVar70 + fStack_2a4;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar45) = auVar43._0_4_;
  }
  auVar100 = auVar43._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar4;
  }
  auVar67 = auVar43._16_16_;
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar96) = auVar43._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
  }
  if ((uVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar45) = fVar5;
  }
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar37,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar37,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar4;
  }
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar37,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar96) = fVar9;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar31,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar31,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar22 = (ulonglong)iVar21;
    uVar4 = vextractps_avx(auVar31,3);
    *(undefined4 *)(param_1 + 0xc + uVar22) = uVar4;
  }
  return uVar22;
}

// ApplySpringConstraints_avx2 @ 14035e1b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraints_avx2
               (longlong param_1,longlong param_2,longlong param_3,float param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  char cVar16;
  int iVar17;
  int iVar20;
  ulonglong uVar23;
  uint uVar24;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar25 [32];
  uint uVar33;
  undefined1 auVar26 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [16];
  undefined1 auVar35 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar43 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar44 [32];
  float fVar45;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  float fVar55;
  int iVar56;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 in_ZMM7 [64];
  undefined1 auVar59 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  int iVar65;
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 in_ZMM9 [64];
  float fVar68;
  float fVar76;
  undefined1 auVar69 [32];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 in_ZMM10 [64];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  float fVar82;
  uint uVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  float fVar93;
  float fVar100;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar98;
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar96 [32];
  float fVar104;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
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
  int iVar18;
  int iVar19;
  int iVar21;
  int iVar22;
  undefined1 auVar64 [32];
  undefined1 auVar97 [32];
  
  uVar14 = __real_0000000c;
  uVar13 = __real_3f800000;
  uVar4 = __real_38d1b717;
  uVar83 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar83 = param_5;
  }
  if ((int)(uVar83 & 0xfffffff8) < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    uVar23 = 0;
    do {
      auVar26 = *(undefined1 (*) [32])(param_2 + uVar23 * 2);
      auVar2 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar23 * 2);
      auVar41 = vshufps_avx(auVar26,auVar2,0x88);
      auVar41 = vpermpd_avx2(auVar41,0xd8);
      auVar57 = vpslld_avx2(auVar41,4);
      auVar41 = vpcmpeqd_avx2(auVar41,auVar41);
      auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar41);
      auVar41 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
      auVar34 = vgatherdps(ZEXT832(0),auVar41);
      auVar41 = vpcmpeqd_avx2(in_ZMM9._0_32_,in_ZMM9._0_32_);
      auVar58 = vgatherdps(ZEXT832(0),auVar41);
      in_ZMM7 = ZEXT3264(auVar58);
      auVar35._4_4_ = uVar14;
      auVar35._0_4_ = uVar14;
      auVar35._8_4_ = uVar14;
      auVar35._12_4_ = uVar14;
      auVar35._16_4_ = uVar14;
      auVar35._20_4_ = uVar14;
      auVar35._24_4_ = uVar14;
      auVar35._28_4_ = uVar14;
      auVar41 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
      auVar40 = vgatherdps(ZEXT832(0) << 0x20,auVar41);
      auVar26 = vshufps_avx(auVar26,auVar2,0xdd);
      auVar26 = vpermpd_avx2(auVar26,0xd8);
      auVar60 = vpslld_avx2(auVar26,4);
      auVar26 = vpcmpeqd_avx2(auVar26,auVar26);
      auVar91 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
      auVar26 = vpcmpeqd_avx2(auVar35 | auVar57,auVar35 | auVar57);
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar26);
      auVar26 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar25 = vgatherdps(ZEXT832(0) << 0x20,auVar26);
      auVar26 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar66 = vgatherdps(ZEXT832(0),auVar26);
      in_ZMM9 = ZEXT3264(auVar66);
      auVar26 = vsubps_avx(auVar44,auVar91);
      auVar2 = vsubps_avx(auVar34,auVar80);
      auVar35 = vsubps_avx(auVar58,auVar25);
      auVar96._0_4_ =
           auVar35._0_4_ * auVar35._0_4_ +
           auVar26._0_4_ * auVar26._0_4_ + auVar2._0_4_ * auVar2._0_4_;
      auVar96._4_4_ =
           auVar35._4_4_ * auVar35._4_4_ +
           auVar26._4_4_ * auVar26._4_4_ + auVar2._4_4_ * auVar2._4_4_;
      auVar96._8_4_ =
           auVar35._8_4_ * auVar35._8_4_ +
           auVar26._8_4_ * auVar26._8_4_ + auVar2._8_4_ * auVar2._8_4_;
      auVar96._12_4_ =
           auVar35._12_4_ * auVar35._12_4_ +
           auVar26._12_4_ * auVar26._12_4_ + auVar2._12_4_ * auVar2._12_4_;
      auVar96._16_4_ =
           auVar35._16_4_ * auVar35._16_4_ +
           auVar26._16_4_ * auVar26._16_4_ + auVar2._16_4_ * auVar2._16_4_;
      auVar96._20_4_ =
           auVar35._20_4_ * auVar35._20_4_ +
           auVar26._20_4_ * auVar26._20_4_ + auVar2._20_4_ * auVar2._20_4_;
      auVar96._24_4_ =
           auVar35._24_4_ * auVar35._24_4_ +
           auVar26._24_4_ * auVar26._24_4_ + auVar2._24_4_ * auVar2._24_4_;
      auVar96._28_4_ =
           auVar35._28_4_ * auVar35._28_4_ +
           auVar26._28_4_ * auVar26._28_4_ + auVar2._28_4_ * auVar2._28_4_;
      auVar61 = vsqrtps_avx(auVar96);
      auVar26 = vdivps_avx(auVar26,auVar61);
      auVar41 = vdivps_avx(auVar2,auVar61);
      auVar35 = vdivps_avx(auVar35,auVar61);
      auVar2._4_4_ = uVar4;
      auVar2._0_4_ = uVar4;
      auVar2._8_4_ = uVar4;
      auVar2._12_4_ = uVar4;
      auVar2._16_4_ = uVar4;
      auVar2._20_4_ = uVar4;
      auVar2._24_4_ = uVar4;
      auVar2._28_4_ = uVar4;
      auVar2 = vcmpps_avx(auVar96,auVar2,1);
      auVar77._4_4_ = uVar13;
      auVar77._0_4_ = uVar13;
      auVar77._8_4_ = uVar13;
      auVar77._12_4_ = uVar13;
      auVar77._16_4_ = uVar13;
      auVar77._20_4_ = uVar13;
      auVar77._24_4_ = uVar13;
      auVar77._28_4_ = uVar13;
      auVar26 = vblendvps_avx(auVar26,auVar77,auVar2);
      uVar24 = auVar2._0_4_;
      uVar27 = auVar2._4_4_;
      uVar28 = auVar2._8_4_;
      uVar29 = auVar2._12_4_;
      uVar30 = auVar2._16_4_;
      uVar31 = auVar2._20_4_;
      uVar32 = auVar2._24_4_;
      uVar33 = auVar2._28_4_;
      auVar46._0_4_ = ~uVar24 & auVar61._0_4_;
      auVar46._4_4_ = ~uVar27 & auVar61._4_4_;
      auVar46._8_4_ = ~uVar28 & auVar61._8_4_;
      auVar46._12_4_ = ~uVar29 & auVar61._12_4_;
      auVar46._16_4_ = ~uVar30 & auVar61._16_4_;
      auVar46._20_4_ = ~uVar31 & auVar61._20_4_;
      auVar46._24_4_ = ~uVar32 & auVar61._24_4_;
      auVar46._28_4_ = ~uVar33 & auVar61._28_4_;
      auVar2 = vsubps_avx(auVar46,*(undefined1 (*) [32])(param_3 + (uVar23 & 0xffffffff)));
      fVar68 = auVar2._0_4_;
      fVar70 = auVar2._4_4_;
      fVar71 = auVar2._8_4_;
      fVar72 = auVar2._12_4_;
      fVar73 = auVar2._16_4_;
      fVar74 = auVar2._20_4_;
      fVar75 = auVar2._24_4_;
      fVar76 = auVar2._28_4_;
      fVar5 = auVar40._0_4_;
      fVar45 = auVar66._0_4_;
      auVar69._0_4_ = fVar45 + fVar5;
      fVar6 = auVar40._4_4_;
      fVar49 = auVar66._4_4_;
      auVar69._4_4_ = fVar49 + fVar6;
      fVar7 = auVar40._8_4_;
      fVar50 = auVar66._8_4_;
      auVar69._8_4_ = fVar50 + fVar7;
      fVar8 = auVar40._12_4_;
      fVar51 = auVar66._12_4_;
      auVar69._12_4_ = fVar51 + fVar8;
      fVar9 = auVar40._16_4_;
      fVar52 = auVar66._16_4_;
      auVar69._16_4_ = fVar52 + fVar9;
      fVar10 = auVar40._20_4_;
      fVar53 = auVar66._20_4_;
      auVar69._20_4_ = fVar53 + fVar10;
      fVar11 = auVar40._24_4_;
      fVar54 = auVar66._24_4_;
      auVar69._24_4_ = fVar54 + fVar11;
      fVar12 = auVar40._28_4_;
      fVar55 = auVar66._28_4_;
      auVar69._28_4_ = fVar55 + fVar12;
      auVar61._0_4_ = param_4 * auVar26._0_4_ * fVar68;
      auVar61._4_4_ = param_4 * auVar26._4_4_ * fVar70;
      auVar61._8_4_ = param_4 * auVar26._8_4_ * fVar71;
      auVar61._12_4_ = param_4 * auVar26._12_4_ * fVar72;
      auVar61._16_4_ = param_4 * auVar26._16_4_ * fVar73;
      auVar61._20_4_ = param_4 * auVar26._20_4_ * fVar74;
      auVar61._24_4_ = param_4 * auVar26._24_4_ * fVar75;
      auVar61._28_4_ = param_4 * auVar26._28_4_ * fVar76;
      auVar67._0_4_ = (float)(~uVar24 & auVar41._0_4_) * fVar68 * param_4;
      auVar67._4_4_ = (float)(~uVar27 & auVar41._4_4_) * fVar70 * param_4;
      auVar67._8_4_ = (float)(~uVar28 & auVar41._8_4_) * fVar71 * param_4;
      auVar67._12_4_ = (float)(~uVar29 & auVar41._12_4_) * fVar72 * param_4;
      auVar67._16_4_ = (float)(~uVar30 & auVar41._16_4_) * fVar73 * param_4;
      auVar67._20_4_ = (float)(~uVar31 & auVar41._20_4_) * fVar74 * param_4;
      auVar67._24_4_ = (float)(~uVar32 & auVar41._24_4_) * fVar75 * param_4;
      auVar67._28_4_ = (float)(~uVar33 & auVar41._28_4_) * fVar76 * param_4;
      auVar41 = vdivps_avx(auVar61,auVar69);
      auVar26._0_4_ = param_4 * (float)(~uVar24 & auVar35._0_4_) * fVar68;
      auVar26._4_4_ = param_4 * (float)(~uVar27 & auVar35._4_4_) * fVar70;
      auVar26._8_4_ = param_4 * (float)(~uVar28 & auVar35._8_4_) * fVar71;
      auVar26._12_4_ = param_4 * (float)(~uVar29 & auVar35._12_4_) * fVar72;
      auVar26._16_4_ = param_4 * (float)(~uVar30 & auVar35._16_4_) * fVar73;
      auVar26._20_4_ = param_4 * (float)(~uVar31 & auVar35._20_4_) * fVar74;
      auVar26._24_4_ = param_4 * (float)(~uVar32 & auVar35._24_4_) * fVar75;
      auVar26._28_4_ = param_4 * (float)(~uVar33 & auVar35._28_4_) * fVar76;
      auVar35 = vdivps_avx(auVar67,auVar69);
      auVar61 = vdivps_avx(auVar26,auVar69);
      auVar26 = vcmpps_avx(auVar66,ZEXT832(0) << 0x20,0);
      auVar2 = vcmpps_avx(ZEXT832(0) << 0x20,auVar40,0);
      uVar24 = auVar26._0_4_ & auVar2._0_4_;
      uVar27 = auVar26._4_4_ & auVar2._4_4_;
      uVar28 = auVar26._8_4_ & auVar2._8_4_;
      uVar29 = auVar26._12_4_ & auVar2._12_4_;
      uVar30 = auVar26._16_4_ & auVar2._16_4_;
      uVar31 = auVar26._20_4_ & auVar2._20_4_;
      uVar32 = auVar26._24_4_ & auVar2._24_4_;
      uVar33 = auVar26._28_4_ & auVar2._28_4_;
      fVar93 = (float)(~uVar24 & auVar41._0_4_);
      fVar98 = (float)(~uVar27 & auVar41._4_4_);
      fVar99 = (float)(~uVar28 & auVar41._8_4_);
      fVar100 = (float)(~uVar29 & auVar41._12_4_);
      fVar101 = (float)(~uVar30 & auVar41._16_4_);
      fVar102 = (float)(~uVar31 & auVar41._20_4_);
      fVar103 = (float)(~uVar32 & auVar41._24_4_);
      fVar104 = (float)(~uVar33 & auVar41._28_4_);
      fVar82 = (float)(~uVar24 & auVar35._0_4_);
      fVar84 = (float)(~uVar27 & auVar35._4_4_);
      fVar85 = (float)(~uVar28 & auVar35._8_4_);
      fVar86 = (float)(~uVar29 & auVar35._12_4_);
      fVar87 = (float)(~uVar30 & auVar35._16_4_);
      fVar88 = (float)(~uVar31 & auVar35._20_4_);
      fVar89 = (float)(~uVar32 & auVar35._24_4_);
      fVar90 = (float)(~uVar33 & auVar35._28_4_);
      fVar68 = (float)(~uVar24 & auVar61._0_4_);
      fVar70 = (float)(~uVar27 & auVar61._4_4_);
      fVar71 = (float)(~uVar28 & auVar61._8_4_);
      fVar72 = (float)(~uVar29 & auVar61._12_4_);
      fVar73 = (float)(~uVar30 & auVar61._16_4_);
      fVar74 = (float)(~uVar31 & auVar61._20_4_);
      fVar75 = (float)(~uVar32 & auVar61._24_4_);
      fVar76 = (float)(~uVar33 & auVar61._28_4_);
      in_ZMM10 = ZEXT3264(CONCAT428(fVar76,CONCAT424(fVar75,CONCAT420(fVar74,CONCAT416(fVar73,
                                                  CONCAT412(fVar72,CONCAT48(fVar71,CONCAT44(fVar70,
                                                  fVar68))))))));
      auVar26 = vcmpps_avx(ZEXT832(0) << 0x20,auVar40,1);
      uVar24 = vmovmskps_avx(auVar26);
      if (uVar24 == 0) {
LAB_14035e5de:
        auVar26 = vcmpps_avx(ZEXT832(0) << 0x20,auVar66,1);
        uVar24 = vmovmskps_avx(auVar26);
      }
      else {
        auVar36._0_4_ = -(fVar5 * fVar93) + auVar44._0_4_;
        auVar36._4_4_ = -(fVar6 * fVar98) + auVar44._4_4_;
        auVar36._8_4_ = -(fVar7 * fVar99) + auVar44._8_4_;
        auVar36._12_4_ = -(fVar8 * fVar100) + auVar44._12_4_;
        auVar41._16_4_ = -(fVar9 * fVar101) + auVar44._16_4_;
        auVar41._0_16_ = auVar36;
        auVar41._20_4_ = -(fVar10 * fVar102) + auVar44._20_4_;
        auVar41._24_4_ = -(fVar11 * fVar103) + auVar44._24_4_;
        auVar41._28_4_ = -(fVar12 * fVar104) + auVar44._28_4_;
        cVar16 = (char)uVar24;
        iVar56 = auVar57._0_4_;
        auVar39 = auVar40._0_16_;
        auVar43 = auVar40._16_16_;
        auVar94 = auVar41._16_16_;
        iVar17 = auVar57._4_4_;
        iVar18 = auVar57._8_4_;
        iVar19 = auVar57._12_4_;
        iVar65 = auVar57._16_4_;
        iVar20 = auVar57._20_4_;
        iVar21 = auVar57._24_4_;
        iVar22 = auVar57._28_4_;
        if ((uVar24 & 1) == 0) {
          if ((uVar24 & 2) == 0) goto LAB_14035e48e;
LAB_14035e776:
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035e790;
LAB_14035e498:
          if ((uVar24 & 8) == 0) goto LAB_14035e4a2;
LAB_14035e7aa:
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar24 & 0x10) != 0) goto LAB_14035e7d0;
LAB_14035e4b8:
          if ((uVar24 & 0x20) == 0) goto LAB_14035e4c2;
LAB_14035e7e6:
          uVar3 = vextractps_avx(auVar94,1);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if ((uVar24 & 0x40) != 0) goto LAB_14035e800;
LAB_14035e4cc:
          if (-1 < cVar16) goto LAB_14035e4d5;
LAB_14035e819:
          uVar3 = vextractps_avx(auVar94,3);
          *(undefined4 *)(param_1 + iVar22) = uVar3;
          auVar40._0_4_ = -(fVar5 * fVar82) + auVar34._0_4_;
          auVar40._4_4_ = -(fVar6 * fVar84) + auVar34._4_4_;
          auVar40._8_4_ = -(fVar7 * fVar85) + auVar34._8_4_;
          auVar40._12_4_ = -(fVar8 * fVar86) + auVar34._12_4_;
          auVar40._16_4_ = -(fVar9 * fVar87) + auVar34._16_4_;
          auVar40._20_4_ = -(fVar10 * fVar88) + auVar34._20_4_;
          auVar40._24_4_ = -(fVar11 * fVar89) + auVar34._24_4_;
          auVar40._28_4_ = -(fVar12 * fVar90) + auVar34._28_4_;
          if ((uVar24 & 1) != 0) goto LAB_14035e838;
LAB_14035e4e4:
          if ((uVar24 & 2) == 0) goto LAB_14035e4ee;
LAB_14035e84f:
          uVar3 = vextractps_avx(auVar40._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035e86a;
LAB_14035e4f8:
          if ((uVar24 & 8) == 0) goto LAB_14035e502;
LAB_14035e885:
          uVar3 = vextractps_avx(auVar40._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          auVar36 = auVar40._16_16_;
          if ((uVar24 & 0x10) != 0) goto LAB_14035e8a6;
LAB_14035e512:
          if ((uVar24 & 0x20) == 0) goto LAB_14035e51c;
LAB_14035e8bd:
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if ((uVar24 & 0x40) != 0) goto LAB_14035e8d8;
LAB_14035e526:
          if (-1 < cVar16) goto LAB_14035e52f;
LAB_14035e8f2:
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar3;
          in_ZMM7 = ZEXT3264(CONCAT428(-(fVar12 * fVar76) + auVar58._28_4_,
                                       CONCAT424(-(fVar11 * fVar75) + auVar58._24_4_,
                                                 CONCAT420(-(fVar10 * fVar74) + auVar58._20_4_,
                                                           CONCAT416(-(fVar9 * fVar73) +
                                                                     auVar58._16_4_,
                                                                     CONCAT412(-(fVar8 * fVar72) +
                                                                               auVar58._12_4_,
                                                                               CONCAT48(-(fVar7 * 
                                                  fVar71) + auVar58._8_4_,
                                                  CONCAT44(-(fVar6 * fVar70) + auVar58._4_4_,
                                                           -(fVar5 * fVar68) + auVar58._0_4_))))))))
          ;
          if ((uVar24 & 1) != 0) goto LAB_14035e912;
LAB_14035e53e:
          if ((uVar24 & 2) == 0) goto LAB_14035e548;
LAB_14035e929:
          uVar3 = vextractps_avx(in_ZMM7._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035e944;
LAB_14035e552:
          if ((uVar24 & 8) == 0) goto LAB_14035e55c;
LAB_14035e95f:
          uVar3 = vextractps_avx(in_ZMM7._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
          auVar36 = in_ZMM7._16_16_;
        }
        else {
          *(float *)(param_1 + iVar56) = auVar36._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035e776;
LAB_14035e48e:
          if ((uVar24 & 4) == 0) goto LAB_14035e498;
LAB_14035e790:
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035e7aa;
LAB_14035e4a2:
          if ((uVar24 & 0x10) == 0) goto LAB_14035e4b8;
LAB_14035e7d0:
          *(float *)(param_1 + iVar65) = auVar41._16_4_;
          if ((uVar24 & 0x20) != 0) goto LAB_14035e7e6;
LAB_14035e4c2:
          if ((uVar24 & 0x40) == 0) goto LAB_14035e4cc;
LAB_14035e800:
          uVar3 = vextractps_avx(auVar94,2);
          *(undefined4 *)(param_1 + iVar21) = uVar3;
          if (cVar16 < '\0') goto LAB_14035e819;
LAB_14035e4d5:
          auVar40._0_4_ = -(fVar5 * fVar82) + auVar34._0_4_;
          auVar40._4_4_ = -(fVar6 * fVar84) + auVar34._4_4_;
          auVar40._8_4_ = -(fVar7 * fVar85) + auVar34._8_4_;
          auVar40._12_4_ = -(fVar8 * fVar86) + auVar34._12_4_;
          auVar40._16_4_ = -(fVar9 * fVar87) + auVar34._16_4_;
          auVar40._20_4_ = -(fVar10 * fVar88) + auVar34._20_4_;
          auVar40._24_4_ = -(fVar11 * fVar89) + auVar34._24_4_;
          auVar40._28_4_ = -(fVar12 * fVar90) + auVar34._28_4_;
          if ((uVar24 & 1) == 0) goto LAB_14035e4e4;
LAB_14035e838:
          *(int *)(param_1 + 4 + (longlong)iVar56) = auVar40._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035e84f;
LAB_14035e4ee:
          if ((uVar24 & 4) == 0) goto LAB_14035e4f8;
LAB_14035e86a:
          uVar3 = vextractps_avx(auVar40._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035e885;
LAB_14035e502:
          auVar36 = auVar40._16_16_;
          if ((uVar24 & 0x10) == 0) goto LAB_14035e512;
LAB_14035e8a6:
          *(int *)(param_1 + 4 + (longlong)iVar65) = auVar36._0_4_;
          if ((uVar24 & 0x20) != 0) goto LAB_14035e8bd;
LAB_14035e51c:
          if ((uVar24 & 0x40) == 0) goto LAB_14035e526;
LAB_14035e8d8:
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
          if (cVar16 < '\0') goto LAB_14035e8f2;
LAB_14035e52f:
          in_ZMM7 = ZEXT3264(CONCAT428(-(fVar12 * fVar76) + auVar58._28_4_,
                                       CONCAT424(-(fVar11 * fVar75) + auVar58._24_4_,
                                                 CONCAT420(-(fVar10 * fVar74) + auVar58._20_4_,
                                                           CONCAT416(-(fVar9 * fVar73) +
                                                                     auVar58._16_4_,
                                                                     CONCAT412(-(fVar8 * fVar72) +
                                                                               auVar58._12_4_,
                                                                               CONCAT48(-(fVar7 * 
                                                  fVar71) + auVar58._8_4_,
                                                  CONCAT44(-(fVar6 * fVar70) + auVar58._4_4_,
                                                           -(fVar5 * fVar68) + auVar58._0_4_))))))))
          ;
          if ((uVar24 & 1) == 0) goto LAB_14035e53e;
LAB_14035e912:
          *(int *)(param_1 + 8 + (longlong)iVar56) = in_ZMM7._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035e929;
LAB_14035e548:
          if ((uVar24 & 4) == 0) goto LAB_14035e552;
LAB_14035e944:
          uVar3 = vextractps_avx(in_ZMM7._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035e95f;
LAB_14035e55c:
          auVar36 = in_ZMM7._16_16_;
        }
        if ((uVar24 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar65) = auVar36._0_4_;
        }
        if ((uVar24 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if ((uVar24 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar3;
        }
        if ((uVar24 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar56) = fVar5;
        }
        if ((uVar24 & 2) != 0) {
          uVar3 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar24 & 4) != 0) {
          uVar3 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar24 & 8) != 0) {
          uVar3 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar24 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar65) = fVar9;
        }
        if ((uVar24 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar43,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        if ((uVar24 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar43,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar3;
        }
        if (-1 < cVar16) goto LAB_14035e5de;
        uVar3 = vextractps_avx(auVar43,3);
        *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar3;
        auVar26 = vcmpps_avx(ZEXT832(0) << 0x20,auVar66,1);
        uVar24 = vmovmskps_avx(auVar26);
      }
      if (uVar24 != 0) {
        auVar94._0_4_ = fVar45 * fVar93 + auVar91._0_4_;
        auVar94._4_4_ = fVar49 * fVar98 + auVar91._4_4_;
        auVar94._8_4_ = fVar50 * fVar99 + auVar91._8_4_;
        auVar94._12_4_ = fVar51 * fVar100 + auVar91._12_4_;
        auVar34._16_4_ = fVar52 * fVar101 + auVar91._16_4_;
        auVar34._0_16_ = auVar94;
        auVar34._20_4_ = fVar53 * fVar102 + auVar91._20_4_;
        auVar34._24_4_ = fVar54 * fVar103 + auVar91._24_4_;
        auVar34._28_4_ = fVar55 * fVar104 + auVar91._28_4_;
        cVar16 = (char)uVar24;
        auVar39 = auVar66._0_16_;
        auVar43 = auVar66._16_16_;
        iVar56 = auVar60._0_4_;
        auVar36 = auVar34._16_16_;
        iVar17 = auVar60._4_4_;
        iVar18 = auVar60._8_4_;
        iVar19 = auVar60._12_4_;
        local_300 = auVar25._0_4_;
        fStack_2fc = auVar25._4_4_;
        fStack_2f8 = auVar25._8_4_;
        fStack_2f4 = auVar25._12_4_;
        fStack_2f0 = auVar25._16_4_;
        fStack_2ec = auVar25._20_4_;
        fStack_2e8 = auVar25._24_4_;
        fStack_2e4 = auVar25._28_4_;
        iVar65 = auVar60._16_4_;
        iVar20 = auVar60._20_4_;
        iVar21 = auVar60._24_4_;
        iVar22 = auVar60._28_4_;
        if ((uVar24 & 1) == 0) {
          if ((uVar24 & 2) == 0) goto LAB_14035e60d;
LAB_14035eae6:
          uVar3 = vextractps_avx(auVar94,1);
          *(undefined4 *)(param_1 + iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035eb00;
LAB_14035e617:
          if ((uVar24 & 8) == 0) goto LAB_14035e621;
LAB_14035eb1a:
          uVar3 = vextractps_avx(auVar94,3);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          if ((uVar24 & 0x10) != 0) goto LAB_14035eb40;
LAB_14035e637:
          if ((uVar24 & 0x20) == 0) goto LAB_14035e641;
LAB_14035eb56:
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + iVar20) = uVar3;
          if ((uVar24 & 0x40) != 0) goto LAB_14035eb70;
LAB_14035e64b:
          if (-1 < cVar16) goto LAB_14035e654;
LAB_14035eb89:
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + iVar22) = uVar3;
          auVar25._0_4_ = fVar45 * fVar82 + auVar80._0_4_;
          auVar25._4_4_ = fVar49 * fVar84 + auVar80._4_4_;
          auVar25._8_4_ = fVar50 * fVar85 + auVar80._8_4_;
          auVar25._12_4_ = fVar51 * fVar86 + auVar80._12_4_;
          auVar25._16_4_ = fVar52 * fVar87 + auVar80._16_4_;
          auVar25._20_4_ = fVar53 * fVar88 + auVar80._20_4_;
          auVar25._24_4_ = fVar54 * fVar89 + auVar80._24_4_;
          auVar25._28_4_ = fVar55 * fVar90 + auVar80._28_4_;
          if ((uVar24 & 1) != 0) goto LAB_14035eba8;
LAB_14035e663:
          if ((uVar24 & 2) == 0) goto LAB_14035e66d;
LAB_14035ebbf:
          uVar3 = vextractps_avx(auVar25._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035ebda;
LAB_14035e677:
          if ((uVar24 & 8) == 0) goto LAB_14035e681;
LAB_14035ebf5:
          uVar3 = vextractps_avx(auVar25._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          auVar36 = auVar25._16_16_;
          if ((uVar24 & 0x10) != 0) goto LAB_14035ec16;
LAB_14035e691:
          if ((uVar24 & 0x20) == 0) goto LAB_14035e69b;
LAB_14035ec2d:
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
          if ((uVar24 & 0x40) != 0) goto LAB_14035ec48;
LAB_14035e6a5:
          if (-1 < cVar16) goto LAB_14035e6ae;
LAB_14035ec62:
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar3;
          in_ZMM10 = ZEXT3264(CONCAT428(fVar55 * fVar76 + fStack_2e4,
                                        CONCAT424(fVar54 * fVar75 + fStack_2e8,
                                                  CONCAT420(fVar53 * fVar74 + fStack_2ec,
                                                            CONCAT416(fVar52 * fVar73 + fStack_2f0,
                                                                      CONCAT412(fVar51 * fVar72 +
                                                                                fStack_2f4,
                                                                                CONCAT48(fVar50 * 
                                                  fVar71 + fStack_2f8,
                                                  CONCAT44(fVar49 * fVar70 + fStack_2fc,
                                                           fVar45 * fVar68 + local_300))))))));
          if ((uVar24 & 1) != 0) goto LAB_14035ec83;
LAB_14035e6be:
          if ((uVar24 & 2) == 0) goto LAB_14035e6c8;
LAB_14035ec9a:
          uVar3 = vextractps_avx(in_ZMM10._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
          if ((uVar24 & 4) != 0) goto LAB_14035ecb5;
LAB_14035e6d2:
          if ((uVar24 & 8) == 0) goto LAB_14035e6dc;
LAB_14035ecd0:
          uVar3 = vextractps_avx(in_ZMM10._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
          auVar36 = in_ZMM10._16_16_;
        }
        else {
          *(float *)(param_1 + iVar56) = auVar94._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035eae6;
LAB_14035e60d:
          if ((uVar24 & 4) == 0) goto LAB_14035e617;
LAB_14035eb00:
          uVar3 = vextractps_avx(auVar94,2);
          *(undefined4 *)(param_1 + iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035eb1a;
LAB_14035e621:
          if ((uVar24 & 0x10) == 0) goto LAB_14035e637;
LAB_14035eb40:
          *(float *)(param_1 + iVar65) = auVar34._16_4_;
          if ((uVar24 & 0x20) != 0) goto LAB_14035eb56;
LAB_14035e641:
          if ((uVar24 & 0x40) == 0) goto LAB_14035e64b;
LAB_14035eb70:
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + iVar21) = uVar3;
          if (cVar16 < '\0') goto LAB_14035eb89;
LAB_14035e654:
          auVar25._0_4_ = fVar45 * fVar82 + auVar80._0_4_;
          auVar25._4_4_ = fVar49 * fVar84 + auVar80._4_4_;
          auVar25._8_4_ = fVar50 * fVar85 + auVar80._8_4_;
          auVar25._12_4_ = fVar51 * fVar86 + auVar80._12_4_;
          auVar25._16_4_ = fVar52 * fVar87 + auVar80._16_4_;
          auVar25._20_4_ = fVar53 * fVar88 + auVar80._20_4_;
          auVar25._24_4_ = fVar54 * fVar89 + auVar80._24_4_;
          auVar25._28_4_ = fVar55 * fVar90 + auVar80._28_4_;
          if ((uVar24 & 1) == 0) goto LAB_14035e663;
LAB_14035eba8:
          *(int *)(param_1 + 4 + (longlong)iVar56) = auVar25._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035ebbf;
LAB_14035e66d:
          if ((uVar24 & 4) == 0) goto LAB_14035e677;
LAB_14035ebda:
          uVar3 = vextractps_avx(auVar25._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035ebf5;
LAB_14035e681:
          auVar36 = auVar25._16_16_;
          if ((uVar24 & 0x10) == 0) goto LAB_14035e691;
LAB_14035ec16:
          *(int *)(param_1 + 4 + (longlong)iVar65) = auVar36._0_4_;
          if ((uVar24 & 0x20) != 0) goto LAB_14035ec2d;
LAB_14035e69b:
          if ((uVar24 & 0x40) == 0) goto LAB_14035e6a5;
LAB_14035ec48:
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
          if (cVar16 < '\0') goto LAB_14035ec62;
LAB_14035e6ae:
          in_ZMM10 = ZEXT3264(CONCAT428(fVar55 * fVar76 + fStack_2e4,
                                        CONCAT424(fVar54 * fVar75 + fStack_2e8,
                                                  CONCAT420(fVar53 * fVar74 + fStack_2ec,
                                                            CONCAT416(fVar52 * fVar73 + fStack_2f0,
                                                                      CONCAT412(fVar51 * fVar72 +
                                                                                fStack_2f4,
                                                                                CONCAT48(fVar50 * 
                                                  fVar71 + fStack_2f8,
                                                  CONCAT44(fVar49 * fVar70 + fStack_2fc,
                                                           fVar45 * fVar68 + local_300))))))));
          if ((uVar24 & 1) == 0) goto LAB_14035e6be;
LAB_14035ec83:
          *(int *)(param_1 + 8 + (longlong)iVar56) = in_ZMM10._0_4_;
          if ((uVar24 & 2) != 0) goto LAB_14035ec9a;
LAB_14035e6c8:
          if ((uVar24 & 4) == 0) goto LAB_14035e6d2;
LAB_14035ecb5:
          uVar3 = vextractps_avx(in_ZMM10._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
          if ((uVar24 & 8) != 0) goto LAB_14035ecd0;
LAB_14035e6dc:
          auVar36 = in_ZMM10._16_16_;
        }
        if ((uVar24 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar65) = auVar36._0_4_;
        }
        if ((uVar24 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
        }
        if ((uVar24 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar3;
        }
        if ((uVar24 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar56) = fVar45;
        }
        if ((uVar24 & 2) != 0) {
          uVar3 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
        }
        if ((uVar24 & 4) != 0) {
          uVar3 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
        }
        if ((uVar24 & 8) != 0) {
          uVar3 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
        if ((uVar24 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar65) = fVar52;
        }
        if ((uVar24 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar43,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar3;
        }
        if ((uVar24 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar43,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar43,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar3;
        }
      }
      uVar23 = uVar23 + 0x20;
      uVar15 = uVar15 + 8;
    } while ((int)uVar15 < (int)(uVar83 & 0xfffffff8));
  }
  if ((int)param_5 <= (int)uVar15) {
    return;
  }
  auVar44._4_4_ = uVar15;
  auVar44._0_4_ = uVar15;
  auVar44._8_4_ = uVar15;
  auVar44._12_4_ = uVar15;
  auVar44._16_4_ = uVar15;
  auVar44._20_4_ = uVar15;
  auVar44._24_4_ = uVar15;
  auVar44._28_4_ = uVar15;
  auVar26 = vpor_avx2(auVar44,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar57._4_4_ = param_5;
  auVar57._0_4_ = param_5;
  auVar57._8_4_ = param_5;
  auVar57._12_4_ = param_5;
  auVar57._16_4_ = param_5;
  auVar57._20_4_ = param_5;
  auVar57._24_4_ = param_5;
  auVar57._28_4_ = param_5;
  auVar2 = vpcmpgtd_avx2(auVar57,auVar26);
  pauVar1 = (undefined1 (*) [32])(param_2 + (ulonglong)uVar15 * 8);
  auVar26 = vpcmpeqd_avx2(auVar26,auVar26);
  auVar26 = auVar26 & ~auVar2;
  if ((((((((SUB321(auVar26 >> 0x1f,0) & 1) == 0 && (SUB321(auVar26 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar26 >> 0x5f,0) & 1) == 0) && SUB321(auVar26 >> 0x7f,0) == '\0') &&
        (SUB321(auVar26 >> 0x9f,0) & 1) == 0) && SUB321(auVar26 >> 0xbf,0) == '\0') &&
      (SUB321(auVar26 >> 0xdf,0) & 1) == 0) && -1 < auVar26[0x1f]) {
    auVar26 = *pauVar1;
    auVar41 = pauVar1[1];
    auVar35 = vshufps_avx(auVar26,auVar41,0x88);
    auVar35 = vpermpd_avx2(auVar35,0xd8);
    auVar26 = vshufps_avx(auVar26,auVar41,0xdd);
    auVar26 = vpermpd_avx2(auVar26,0xd8);
  }
  else {
    auVar35 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
    auVar26 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
  }
  auVar67 = vpslld_avx2(auVar35,4);
  auVar41 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
  auVar35 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar69 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
  auVar58 = vpslld_avx2(auVar26,4);
  auVar77 = vgatherdps(ZEXT832(0),auVar2);
  auVar34 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar2);
  auVar25 = vgatherdps(ZEXT832(0),auVar2);
  auVar60 = vgatherdps(ZEXT832(0) << 0x20,auVar2);
  auVar26 = vmaskmovps_avx(auVar2,auVar41);
  auVar41 = vmaskmovps_avx(auVar2,auVar35);
  auVar35 = vmaskmovps_avx(auVar2,auVar61);
  auVar61 = vmaskmovps_avx(auVar2,auVar77);
  auVar77 = vmaskmovps_avx(auVar2,auVar34);
  auVar25 = vmaskmovps_avx(auVar2,auVar25);
  auVar34 = vsubps_avx(auVar26,auVar61);
  auVar44 = vsubps_avx(auVar41,auVar77);
  auVar46 = vsubps_avx(auVar35,auVar25);
  auVar78._0_4_ =
       auVar46._0_4_ * auVar46._0_4_ + auVar34._0_4_ * auVar34._0_4_ + auVar44._0_4_ * auVar44._0_4_
  ;
  auVar78._4_4_ =
       auVar46._4_4_ * auVar46._4_4_ + auVar34._4_4_ * auVar34._4_4_ + auVar44._4_4_ * auVar44._4_4_
  ;
  auVar78._8_4_ =
       auVar46._8_4_ * auVar46._8_4_ + auVar34._8_4_ * auVar34._8_4_ + auVar44._8_4_ * auVar44._8_4_
  ;
  auVar78._12_4_ =
       auVar46._12_4_ * auVar46._12_4_ +
       auVar34._12_4_ * auVar34._12_4_ + auVar44._12_4_ * auVar44._12_4_;
  auVar78._16_4_ =
       auVar46._16_4_ * auVar46._16_4_ +
       auVar34._16_4_ * auVar34._16_4_ + auVar44._16_4_ * auVar44._16_4_;
  auVar78._20_4_ =
       auVar46._20_4_ * auVar46._20_4_ +
       auVar34._20_4_ * auVar34._20_4_ + auVar44._20_4_ * auVar44._20_4_;
  auVar78._24_4_ =
       auVar46._24_4_ * auVar46._24_4_ +
       auVar34._24_4_ * auVar34._24_4_ + auVar44._24_4_ * auVar44._24_4_;
  auVar78._28_4_ =
       auVar46._28_4_ * auVar46._28_4_ +
       auVar34._28_4_ * auVar34._28_4_ + auVar44._28_4_ * auVar44._28_4_;
  auVar57 = vsqrtps_avx(auVar78);
  auVar34 = vdivps_avx(auVar34,auVar57);
  auVar66._4_4_ = __real_38d1b717;
  auVar66._0_4_ = __real_38d1b717;
  auVar66._8_4_ = __real_38d1b717;
  auVar66._12_4_ = __real_38d1b717;
  auVar66._16_4_ = __real_38d1b717;
  auVar66._20_4_ = __real_38d1b717;
  auVar66._24_4_ = __real_38d1b717;
  auVar66._28_4_ = __real_38d1b717;
  auVar40 = vcmpps_avx(auVar78,auVar66,1);
  auVar44 = vdivps_avx(auVar44,auVar57);
  auVar46 = vdivps_avx(auVar46,auVar57);
  auVar79._4_4_ = __real_3f800000;
  auVar79._0_4_ = __real_3f800000;
  auVar79._8_4_ = __real_3f800000;
  auVar79._12_4_ = __real_3f800000;
  auVar79._16_4_ = __real_3f800000;
  auVar79._20_4_ = __real_3f800000;
  auVar79._24_4_ = __real_3f800000;
  auVar79._28_4_ = __real_3f800000;
  auVar34 = vblendvps_avx(auVar34,auVar79,auVar40);
  uVar83 = auVar40._0_4_;
  auVar47._0_4_ = ~uVar83 & auVar44._0_4_;
  uVar24 = auVar40._4_4_;
  auVar47._4_4_ = ~uVar24 & auVar44._4_4_;
  uVar27 = auVar40._8_4_;
  auVar47._8_4_ = ~uVar27 & auVar44._8_4_;
  uVar28 = auVar40._12_4_;
  auVar47._12_4_ = ~uVar28 & auVar44._12_4_;
  uVar29 = auVar40._16_4_;
  auVar47._16_4_ = ~uVar29 & auVar44._16_4_;
  uVar30 = auVar40._20_4_;
  auVar47._20_4_ = ~uVar30 & auVar44._20_4_;
  uVar31 = auVar40._24_4_;
  auVar47._24_4_ = ~uVar31 & auVar44._24_4_;
  uVar32 = auVar40._28_4_;
  auVar47._28_4_ = ~uVar32 & auVar44._28_4_;
  auVar62._0_4_ = ~uVar83 & auVar46._0_4_;
  auVar62._4_4_ = ~uVar24 & auVar46._4_4_;
  auVar62._8_4_ = ~uVar27 & auVar46._8_4_;
  auVar62._12_4_ = ~uVar28 & auVar46._12_4_;
  auVar62._16_4_ = ~uVar29 & auVar46._16_4_;
  auVar62._20_4_ = ~uVar30 & auVar46._20_4_;
  auVar62._24_4_ = ~uVar31 & auVar46._24_4_;
  auVar62._28_4_ = ~uVar32 & auVar46._28_4_;
  auVar34 = vmaskmovps_avx(auVar2,auVar34);
  auVar40 = vmaskmovps_avx(auVar2,auVar47);
  auVar44 = vmaskmovps_avx(auVar2,auVar62);
  auVar80._0_4_ = ~uVar83 & auVar57._0_4_;
  auVar80._4_4_ = ~uVar24 & auVar57._4_4_;
  auVar80._8_4_ = ~uVar27 & auVar57._8_4_;
  auVar80._12_4_ = ~uVar28 & auVar57._12_4_;
  auVar80._16_4_ = ~uVar29 & auVar57._16_4_;
  auVar80._20_4_ = ~uVar30 & auVar57._20_4_;
  auVar80._24_4_ = ~uVar31 & auVar57._24_4_;
  auVar80._28_4_ = ~uVar32 & auVar57._28_4_;
  auVar46 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_3 + (int)(uVar15 << 2)));
  auVar46 = vsubps_avx(auVar80,auVar46);
  local_2c0 = auVar34._0_4_;
  fStack_2bc = auVar34._4_4_;
  fStack_2b8 = auVar34._8_4_;
  fStack_2b4 = auVar34._12_4_;
  fStack_2b0 = auVar34._16_4_;
  fStack_2ac = auVar34._20_4_;
  fStack_2a8 = auVar34._24_4_;
  fStack_2a4 = auVar34._28_4_;
  fVar68 = auVar46._0_4_;
  fVar70 = auVar46._4_4_;
  fVar71 = auVar46._8_4_;
  fVar72 = auVar46._12_4_;
  fVar73 = auVar46._16_4_;
  fVar74 = auVar46._20_4_;
  fVar75 = auVar46._24_4_;
  fVar76 = auVar46._28_4_;
  local_2a0 = auVar40._0_4_;
  fStack_29c = auVar40._4_4_;
  fStack_298 = auVar40._8_4_;
  fStack_294 = auVar40._12_4_;
  fStack_290 = auVar40._16_4_;
  fStack_28c = auVar40._20_4_;
  fStack_288 = auVar40._24_4_;
  fStack_284 = auVar40._28_4_;
  local_280 = auVar44._0_4_;
  fStack_27c = auVar44._4_4_;
  fStack_278 = auVar44._8_4_;
  fStack_274 = auVar44._12_4_;
  fStack_270 = auVar44._16_4_;
  fStack_26c = auVar44._20_4_;
  fStack_268 = auVar44._24_4_;
  fStack_264 = auVar44._28_4_;
  fVar5 = auVar60._0_4_;
  fVar93 = auVar69._0_4_;
  auVar63._0_4_ = fVar93 + fVar5;
  fVar6 = auVar60._4_4_;
  fVar98 = auVar69._4_4_;
  auVar63._4_4_ = fVar98 + fVar6;
  fVar7 = auVar60._8_4_;
  fVar99 = auVar69._8_4_;
  auVar63._8_4_ = fVar99 + fVar7;
  fVar8 = auVar60._12_4_;
  fVar100 = auVar69._12_4_;
  auVar63._12_4_ = fVar100 + fVar8;
  fVar9 = auVar60._16_4_;
  fVar101 = auVar69._16_4_;
  auVar63._16_4_ = fVar101 + fVar9;
  fVar10 = auVar60._20_4_;
  fVar102 = auVar69._20_4_;
  auVar63._20_4_ = fVar102 + fVar10;
  fVar11 = auVar60._24_4_;
  fVar103 = auVar69._24_4_;
  auVar63._24_4_ = fVar103 + fVar11;
  fVar12 = auVar60._28_4_;
  fVar104 = auVar69._28_4_;
  auVar63._28_4_ = fVar104 + fVar12;
  auVar42._0_4_ = param_4 * fVar68 * local_2c0;
  auVar42._4_4_ = param_4 * fVar70 * fStack_2bc;
  auVar42._8_4_ = param_4 * fVar71 * fStack_2b8;
  auVar42._12_4_ = param_4 * fVar72 * fStack_2b4;
  auVar42._16_4_ = param_4 * fVar73 * fStack_2b0;
  auVar42._20_4_ = param_4 * fVar74 * fStack_2ac;
  auVar42._24_4_ = param_4 * fVar75 * fStack_2a8;
  auVar42._28_4_ = param_4 * fVar76 * fStack_2a4;
  auVar44 = vdivps_avx(auVar42,auVar63);
  auVar48._0_4_ = param_4 * fVar68 * local_2a0;
  auVar48._4_4_ = param_4 * fVar70 * fStack_29c;
  auVar48._8_4_ = param_4 * fVar71 * fStack_298;
  auVar48._12_4_ = param_4 * fVar72 * fStack_294;
  auVar48._16_4_ = param_4 * fVar73 * fStack_290;
  auVar48._20_4_ = param_4 * fVar74 * fStack_28c;
  auVar48._24_4_ = param_4 * fVar75 * fStack_288;
  auVar48._28_4_ = param_4 * fVar76 * fStack_284;
  auVar46 = vdivps_avx(auVar48,auVar63);
  auVar91._0_4_ = param_4 * fVar68 * local_280;
  auVar91._4_4_ = param_4 * fVar70 * fStack_27c;
  auVar91._8_4_ = param_4 * fVar71 * fStack_278;
  auVar91._12_4_ = param_4 * fVar72 * fStack_274;
  auVar91._16_4_ = param_4 * fVar73 * fStack_270;
  auVar91._20_4_ = param_4 * fVar74 * fStack_26c;
  auVar91._24_4_ = param_4 * fVar75 * fStack_268;
  auVar91._28_4_ = param_4 * fVar76 * fStack_264;
  auVar57 = vdivps_avx(auVar91,auVar63);
  auVar40 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar34 = vcmpps_avx(auVar40,auVar60,0);
  auVar40 = vcmpps_avx(auVar69,auVar40,0);
  uVar83 = auVar34._0_4_ & auVar40._0_4_;
  uVar15 = auVar34._4_4_ & auVar40._4_4_;
  uVar24 = auVar34._8_4_ & auVar40._8_4_;
  uVar27 = auVar34._12_4_ & auVar40._12_4_;
  uVar28 = auVar34._16_4_ & auVar40._16_4_;
  uVar29 = auVar34._20_4_ & auVar40._20_4_;
  uVar30 = auVar34._24_4_ & auVar40._24_4_;
  uVar31 = auVar34._28_4_ & auVar40._28_4_;
  fVar82 = (float)(~uVar83 & auVar44._0_4_);
  fVar84 = (float)(~uVar15 & auVar44._4_4_);
  fVar85 = (float)(~uVar24 & auVar44._8_4_);
  fVar86 = (float)(~uVar27 & auVar44._12_4_);
  fVar87 = (float)(~uVar28 & auVar44._16_4_);
  fVar88 = (float)(~uVar29 & auVar44._20_4_);
  fVar89 = (float)(~uVar30 & auVar44._24_4_);
  fVar90 = (float)(~uVar31 & auVar44._28_4_);
  fVar45 = (float)(~uVar83 & auVar46._0_4_);
  fVar49 = (float)(~uVar15 & auVar46._4_4_);
  fVar50 = (float)(~uVar24 & auVar46._8_4_);
  fVar51 = (float)(~uVar27 & auVar46._12_4_);
  fVar52 = (float)(~uVar28 & auVar46._16_4_);
  fVar53 = (float)(~uVar29 & auVar46._20_4_);
  fVar54 = (float)(~uVar30 & auVar46._24_4_);
  fVar55 = (float)(~uVar31 & auVar46._28_4_);
  fVar68 = (float)(~uVar83 & auVar57._0_4_);
  fVar70 = (float)(~uVar15 & auVar57._4_4_);
  fVar71 = (float)(~uVar24 & auVar57._8_4_);
  fVar72 = (float)(~uVar27 & auVar57._12_4_);
  fVar73 = (float)(~uVar28 & auVar57._16_4_);
  fVar74 = (float)(~uVar29 & auVar57._20_4_);
  fVar75 = (float)(~uVar30 & auVar57._24_4_);
  fVar76 = (float)(~uVar31 & auVar57._28_4_);
  auVar40 = ZEXT1232(ZEXT412(0)) << 0x20;
  auVar34 = vcmpps_avx(auVar40,auVar69,1);
  auVar37._0_4_ = auVar34._0_4_ & auVar2._0_4_;
  auVar37._4_4_ = auVar34._4_4_ & auVar2._4_4_;
  auVar37._8_4_ = auVar34._8_4_ & auVar2._8_4_;
  auVar37._12_4_ = auVar34._12_4_ & auVar2._12_4_;
  auVar37._16_4_ = auVar34._16_4_ & auVar2._16_4_;
  auVar37._20_4_ = auVar34._20_4_ & auVar2._20_4_;
  auVar37._24_4_ = auVar34._24_4_ & auVar2._24_4_;
  auVar37._28_4_ = auVar34._28_4_ & auVar2._28_4_;
  uVar83 = vmovmskps_avx(auVar37);
  if (uVar83 == 0) goto LAB_14035f22a;
  auVar95._0_4_ = -(fVar93 * fVar82) + auVar26._0_4_;
  auVar95._4_4_ = -(fVar98 * fVar84) + auVar26._4_4_;
  auVar95._8_4_ = -(fVar99 * fVar85) + auVar26._8_4_;
  auVar95._12_4_ = -(fVar100 * fVar86) + auVar26._12_4_;
  auVar97._16_4_ = -(fVar101 * fVar87) + auVar26._16_4_;
  auVar97._0_16_ = auVar95;
  auVar97._20_4_ = -(fVar102 * fVar88) + auVar26._20_4_;
  auVar97._24_4_ = -(fVar103 * fVar89) + auVar26._24_4_;
  auVar97._28_4_ = -(fVar104 * fVar90) + auVar26._28_4_;
  cVar16 = (char)uVar83;
  iVar65 = auVar67._0_4_;
  auVar39 = auVar69._0_16_;
  auVar43 = auVar69._16_16_;
  auVar36 = auVar97._16_16_;
  iVar17 = auVar67._4_4_;
  iVar18 = auVar67._8_4_;
  iVar19 = auVar67._12_4_;
  iVar56 = auVar67._16_4_;
  iVar20 = auVar67._20_4_;
  iVar21 = auVar67._24_4_;
  iVar22 = auVar67._28_4_;
  if ((uVar83 & 1) == 0) {
    if ((uVar83 & 2) == 0) goto LAB_14035f0f8;
LAB_14035f402:
    uVar4 = vextractps_avx(auVar95,1);
    *(undefined4 *)(param_1 + iVar17) = uVar4;
    if ((uVar83 & 4) != 0) goto LAB_14035f41b;
LAB_14035f101:
    if ((uVar83 & 8) == 0) goto LAB_14035f10a;
LAB_14035f434:
    uVar4 = vextractps_avx(auVar95,3);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
    if ((uVar83 & 0x10) != 0) goto LAB_14035f459;
LAB_14035f11f:
    if ((uVar83 & 0x20) == 0) goto LAB_14035f128;
LAB_14035f470:
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + iVar20) = uVar4;
    if ((uVar83 & 0x40) != 0) goto LAB_14035f489;
LAB_14035f131:
    if (-1 < cVar16) goto LAB_14035f139;
LAB_14035f4a1:
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + iVar22) = uVar4;
    auVar92._0_4_ = -(fVar93 * fVar45) + auVar41._0_4_;
    auVar92._4_4_ = -(fVar98 * fVar49) + auVar41._4_4_;
    auVar92._8_4_ = -(fVar99 * fVar50) + auVar41._8_4_;
    auVar92._12_4_ = -(fVar100 * fVar51) + auVar41._12_4_;
    auVar92._16_4_ = -(fVar101 * fVar52) + auVar41._16_4_;
    auVar92._20_4_ = -(fVar102 * fVar53) + auVar41._20_4_;
    auVar92._24_4_ = -(fVar103 * fVar54) + auVar41._24_4_;
    auVar92._28_4_ = -(fVar104 * fVar55) + auVar41._28_4_;
    if ((uVar83 & 1) != 0) goto LAB_14035f4bf;
LAB_14035f147:
    if ((uVar83 & 2) == 0) goto LAB_14035f150;
LAB_14035f4d7:
    uVar4 = vextractps_avx(auVar92._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar4;
    if ((uVar83 & 4) != 0) goto LAB_14035f4f1;
LAB_14035f159:
    if ((uVar83 & 8) == 0) goto LAB_14035f162;
LAB_14035f50b:
    uVar4 = vextractps_avx(auVar92._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
    auVar36 = auVar92._16_16_;
    if ((uVar83 & 0x10) != 0) goto LAB_14035f52b;
LAB_14035f171:
    if ((uVar83 & 0x20) == 0) goto LAB_14035f17a;
LAB_14035f543:
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar4;
    if ((uVar83 & 0x40) != 0) goto LAB_14035f55d;
LAB_14035f183:
    if (-1 < cVar16) goto LAB_14035f18b;
LAB_14035f576:
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar4;
    auVar81._0_4_ = -(fVar93 * fVar68) + auVar35._0_4_;
    auVar81._4_4_ = -(fVar98 * fVar70) + auVar35._4_4_;
    auVar81._8_4_ = -(fVar99 * fVar71) + auVar35._8_4_;
    auVar81._12_4_ = -(fVar100 * fVar72) + auVar35._12_4_;
    auVar81._16_4_ = -(fVar101 * fVar73) + auVar35._16_4_;
    auVar81._20_4_ = -(fVar102 * fVar74) + auVar35._20_4_;
    auVar81._24_4_ = -(fVar103 * fVar75) + auVar35._24_4_;
    auVar81._28_4_ = -(fVar104 * fVar76) + auVar35._28_4_;
    if ((uVar83 & 1) != 0) goto LAB_14035f595;
LAB_14035f199:
    if ((uVar83 & 2) == 0) goto LAB_14035f1a2;
LAB_14035f5ad:
    uVar4 = vextractps_avx(auVar81._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar4;
    if ((uVar83 & 4) != 0) goto LAB_14035f5c7;
LAB_14035f1ab:
    if ((uVar83 & 8) == 0) goto LAB_14035f1b4;
LAB_14035f5e1:
    uVar4 = vextractps_avx(auVar81._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
    auVar36 = auVar81._16_16_;
  }
  else {
    *(float *)(param_1 + iVar65) = auVar95._0_4_;
    if ((uVar83 & 2) != 0) goto LAB_14035f402;
LAB_14035f0f8:
    if ((uVar83 & 4) == 0) goto LAB_14035f101;
LAB_14035f41b:
    uVar4 = vextractps_avx(auVar95,2);
    *(undefined4 *)(param_1 + iVar18) = uVar4;
    if ((uVar83 & 8) != 0) goto LAB_14035f434;
LAB_14035f10a:
    if ((uVar83 & 0x10) == 0) goto LAB_14035f11f;
LAB_14035f459:
    *(float *)(param_1 + iVar56) = auVar97._16_4_;
    if ((uVar83 & 0x20) != 0) goto LAB_14035f470;
LAB_14035f128:
    if ((uVar83 & 0x40) == 0) goto LAB_14035f131;
LAB_14035f489:
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
    if (cVar16 < '\0') goto LAB_14035f4a1;
LAB_14035f139:
    auVar92._0_4_ = -(fVar93 * fVar45) + auVar41._0_4_;
    auVar92._4_4_ = -(fVar98 * fVar49) + auVar41._4_4_;
    auVar92._8_4_ = -(fVar99 * fVar50) + auVar41._8_4_;
    auVar92._12_4_ = -(fVar100 * fVar51) + auVar41._12_4_;
    auVar92._16_4_ = -(fVar101 * fVar52) + auVar41._16_4_;
    auVar92._20_4_ = -(fVar102 * fVar53) + auVar41._20_4_;
    auVar92._24_4_ = -(fVar103 * fVar54) + auVar41._24_4_;
    auVar92._28_4_ = -(fVar104 * fVar55) + auVar41._28_4_;
    if ((uVar83 & 1) == 0) goto LAB_14035f147;
LAB_14035f4bf:
    *(int *)(param_1 + 4 + (longlong)iVar65) = auVar92._0_4_;
    if ((uVar83 & 2) != 0) goto LAB_14035f4d7;
LAB_14035f150:
    if ((uVar83 & 4) == 0) goto LAB_14035f159;
LAB_14035f4f1:
    uVar4 = vextractps_avx(auVar92._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar4;
    if ((uVar83 & 8) != 0) goto LAB_14035f50b;
LAB_14035f162:
    auVar36 = auVar92._16_16_;
    if ((uVar83 & 0x10) == 0) goto LAB_14035f171;
LAB_14035f52b:
    *(int *)(param_1 + 4 + (longlong)iVar56) = auVar36._0_4_;
    if ((uVar83 & 0x20) != 0) goto LAB_14035f543;
LAB_14035f17a:
    if ((uVar83 & 0x40) == 0) goto LAB_14035f183;
LAB_14035f55d:
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
    if (cVar16 < '\0') goto LAB_14035f576;
LAB_14035f18b:
    auVar81._0_4_ = -(fVar93 * fVar68) + auVar35._0_4_;
    auVar81._4_4_ = -(fVar98 * fVar70) + auVar35._4_4_;
    auVar81._8_4_ = -(fVar99 * fVar71) + auVar35._8_4_;
    auVar81._12_4_ = -(fVar100 * fVar72) + auVar35._12_4_;
    auVar81._16_4_ = -(fVar101 * fVar73) + auVar35._16_4_;
    auVar81._20_4_ = -(fVar102 * fVar74) + auVar35._20_4_;
    auVar81._24_4_ = -(fVar103 * fVar75) + auVar35._24_4_;
    auVar81._28_4_ = -(fVar104 * fVar76) + auVar35._28_4_;
    if ((uVar83 & 1) == 0) goto LAB_14035f199;
LAB_14035f595:
    *(int *)(param_1 + 8 + (longlong)iVar65) = auVar81._0_4_;
    if ((uVar83 & 2) != 0) goto LAB_14035f5ad;
LAB_14035f1a2:
    if ((uVar83 & 4) == 0) goto LAB_14035f1ab;
LAB_14035f5c7:
    uVar4 = vextractps_avx(auVar81._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar4;
    if ((uVar83 & 8) != 0) goto LAB_14035f5e1;
LAB_14035f1b4:
    auVar36 = auVar81._16_16_;
  }
  if ((uVar83 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar56) = auVar36._0_4_;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar4;
  }
  if ((uVar83 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar65) = fVar93;
  }
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar4;
  }
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar56) = fVar101;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar43,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar43,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar43,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
LAB_14035f22a:
  auVar26 = vcmpps_avx(auVar40,auVar60,1);
  auVar38._0_4_ = auVar26._0_4_ & auVar2._0_4_;
  auVar38._4_4_ = auVar26._4_4_ & auVar2._4_4_;
  auVar38._8_4_ = auVar26._8_4_ & auVar2._8_4_;
  auVar38._12_4_ = auVar26._12_4_ & auVar2._12_4_;
  auVar38._16_4_ = auVar26._16_4_ & auVar2._16_4_;
  auVar38._20_4_ = auVar26._20_4_ & auVar2._20_4_;
  auVar38._24_4_ = auVar26._24_4_ & auVar2._24_4_;
  auVar38._28_4_ = auVar26._28_4_ & auVar2._28_4_;
  uVar83 = vmovmskps_avx(auVar38);
  if (uVar83 == 0) {
    return;
  }
  auVar59._0_4_ = fVar5 * fVar82 + auVar61._0_4_;
  auVar59._4_4_ = fVar6 * fVar84 + auVar61._4_4_;
  auVar59._8_4_ = fVar7 * fVar85 + auVar61._8_4_;
  auVar59._12_4_ = fVar8 * fVar86 + auVar61._12_4_;
  auVar64._16_4_ = fVar9 * fVar87 + auVar61._16_4_;
  auVar64._0_16_ = auVar59;
  auVar64._20_4_ = fVar10 * fVar88 + auVar61._20_4_;
  auVar64._24_4_ = fVar11 * fVar89 + auVar61._24_4_;
  auVar64._28_4_ = fVar12 * fVar90 + auVar61._28_4_;
  cVar16 = (char)uVar83;
  iVar65 = auVar58._0_4_;
  auVar39 = auVar60._0_16_;
  auVar43 = auVar60._16_16_;
  auVar36 = auVar64._16_16_;
  iVar17 = auVar58._4_4_;
  iVar18 = auVar58._8_4_;
  iVar19 = auVar58._12_4_;
  local_300 = auVar25._0_4_;
  fStack_2fc = auVar25._4_4_;
  fStack_2f8 = auVar25._8_4_;
  fStack_2f4 = auVar25._12_4_;
  fStack_2f0 = auVar25._16_4_;
  fStack_2ec = auVar25._20_4_;
  fStack_2e8 = auVar25._24_4_;
  fStack_2e4 = auVar25._28_4_;
  iVar56 = auVar58._16_4_;
  iVar20 = auVar58._20_4_;
  iVar21 = auVar58._24_4_;
  iVar22 = auVar58._28_4_;
  if ((uVar83 & 1) != 0) {
    *(float *)(param_1 + iVar65) = auVar59._0_4_;
  }
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar59,1);
    *(undefined4 *)(param_1 + iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar59,2);
    *(undefined4 *)(param_1 + iVar18) = uVar4;
  }
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar59,3);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(float *)(param_1 + iVar56) = auVar64._16_4_;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + iVar22) = uVar4;
    auVar58._0_4_ = fVar5 * fVar45 + auVar77._0_4_;
    auVar58._4_4_ = fVar6 * fVar49 + auVar77._4_4_;
    auVar58._8_4_ = fVar7 * fVar50 + auVar77._8_4_;
    auVar58._12_4_ = fVar8 * fVar51 + auVar77._12_4_;
    auVar58._16_4_ = fVar9 * fVar52 + auVar77._16_4_;
    auVar58._20_4_ = fVar10 * fVar53 + auVar77._20_4_;
    auVar58._24_4_ = fVar11 * fVar54 + auVar77._24_4_;
    auVar58._28_4_ = fVar12 * fVar55 + auVar77._28_4_;
  }
  else {
    auVar58._0_4_ = fVar5 * fVar45 + auVar77._0_4_;
    auVar58._4_4_ = fVar6 * fVar49 + auVar77._4_4_;
    auVar58._8_4_ = fVar7 * fVar50 + auVar77._8_4_;
    auVar58._12_4_ = fVar8 * fVar51 + auVar77._12_4_;
    auVar58._16_4_ = fVar9 * fVar52 + auVar77._16_4_;
    auVar58._20_4_ = fVar10 * fVar53 + auVar77._20_4_;
    auVar58._24_4_ = fVar11 * fVar54 + auVar77._24_4_;
    auVar58._28_4_ = fVar12 * fVar55 + auVar77._28_4_;
  }
  if ((uVar83 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar65) = auVar58._0_4_;
  }
  auVar36 = auVar58._0_16_;
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar4;
  }
  auVar94 = auVar58._16_16_;
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar56) = auVar58._16_4_;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar4;
    auVar60._0_4_ = fVar5 * fVar68 + local_300;
    auVar60._4_4_ = fVar6 * fVar70 + fStack_2fc;
    auVar60._8_4_ = fVar7 * fVar71 + fStack_2f8;
    auVar60._12_4_ = fVar8 * fVar72 + fStack_2f4;
    auVar60._16_4_ = fVar9 * fVar73 + fStack_2f0;
    auVar60._20_4_ = fVar10 * fVar74 + fStack_2ec;
    auVar60._24_4_ = fVar11 * fVar75 + fStack_2e8;
    auVar60._28_4_ = fVar12 * fVar76 + fStack_2e4;
  }
  else {
    auVar60._0_4_ = fVar5 * fVar68 + local_300;
    auVar60._4_4_ = fVar6 * fVar70 + fStack_2fc;
    auVar60._8_4_ = fVar7 * fVar71 + fStack_2f8;
    auVar60._12_4_ = fVar8 * fVar72 + fStack_2f4;
    auVar60._16_4_ = fVar9 * fVar73 + fStack_2f0;
    auVar60._20_4_ = fVar10 * fVar74 + fStack_2ec;
    auVar60._24_4_ = fVar11 * fVar75 + fStack_2e8;
    auVar60._28_4_ = fVar12 * fVar76 + fStack_2e4;
  }
  if ((uVar83 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar65) = auVar60._0_4_;
  }
  auVar36 = auVar60._0_16_;
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar4;
  }
  auVar94 = auVar60._16_16_;
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar56) = auVar60._16_4_;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar4;
  }
  if ((uVar83 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar65) = fVar5;
  }
  if ((uVar83 & 2) != 0) {
    uVar4 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar4;
  }
  if ((uVar83 & 4) != 0) {
    uVar4 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar4;
  }
  if ((uVar83 & 8) != 0) {
    uVar4 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar4;
  }
  if ((uVar83 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar56) = fVar9;
  }
  if ((uVar83 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar43,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar4;
  }
  if ((uVar83 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar43,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar43,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  return;
}

// ApplySpringConstraintsWithWeightMaps_avx2 @ 14035fa80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong ApplySpringConstraintsWithWeightMaps_avx2
                    (longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                    ulonglong param_5,uint param_6)

{
  undefined1 (*pauVar1) [32];
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  int iVar45;
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 in_ZMM7 [64];
  uint uVar48;
  undefined1 auVar49 [32];
  uint uVar57;
  undefined1 auVar50 [32];
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 in_ZMM8 [64];
  float fVar58;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar68;
  float fVar69;
  undefined1 auVar59 [32];
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar71 [32];
  float fVar73;
  float fVar80;
  float fVar82;
  float fVar84;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar72;
  float fVar79;
  float fVar81;
  float fVar83;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  float fVar92;
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  int iVar96;
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  float fVar99;
  float fVar102;
  float fVar103;
  undefined1 auVar100 [16];
  float fVar104;
  undefined1 auVar101 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [32];
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
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  int iVar24;
  int iVar25;
  undefined1 auVar78 [32];
  undefined1 auVar111 [32];
  
  uVar15 = __real_0000000c;
  uVar14 = __real_00000004;
  uVar13 = __real_3f800000;
  uVar4 = __real_38d1b717;
  uVar17 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar17 = param_6;
  }
  if ((int)(uVar17 & 0xfffffff8) < 1) {
    uVar22 = 0;
  }
  else {
    uVar18 = 0;
    uVar22 = 0;
    auVar37._0_12_ = ZEXT812(0);
    auVar37._12_4_ = 0;
    do {
      auVar32 = *(undefined1 (*) [32])(param_2 + uVar18 * 2);
      auVar59 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar18 * 2);
      auVar33 = vshufps_avx(auVar32,auVar59,0x88);
      auVar33 = vpermpd_avx2(auVar33,0xd8);
      auVar97 = vpslld_avx2(auVar33,4);
      auVar33 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
      auVar28 = vgatherdps(ZEXT832(0) << 0x20,auVar33);
      auVar100._4_4_ = uVar14;
      auVar100._0_4_ = uVar14;
      auVar100._8_4_ = uVar14;
      auVar100._12_4_ = uVar14;
      auVar33 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
      auVar29 = vgatherdps(ZEXT832(0),auVar33);
      in_ZMM1 = ZEXT3264(auVar29);
      auVar33 = vpcmpeqd_avx2(in_ZMM8._0_32_,in_ZMM8._0_32_);
      auVar41 = vgatherdps(ZEXT832(0) << 0x20,auVar33);
      auVar30._4_4_ = uVar15;
      auVar30._0_4_ = uVar15;
      auVar30._8_4_ = uVar15;
      auVar30._12_4_ = uVar15;
      auVar30._16_4_ = uVar15;
      auVar30._20_4_ = uVar15;
      auVar30._24_4_ = uVar15;
      auVar30._28_4_ = uVar15;
      auVar33 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar110 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar33);
      auVar32 = vshufps_avx(auVar32,auVar59,0xdd);
      auVar32 = vpermpd_avx2(auVar32,0xd8);
      auVar44 = vpslld_avx2(auVar32,4);
      auVar32 = vpcmpeqd_avx2(auVar32,auVar32);
      auVar93 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
      auVar32 = vpcmpeqd_avx2(auVar97 | auVar30,auVar97 | auVar30);
      auVar49 = vgatherdps(ZEXT832(0),auVar32);
      auVar32 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar38 = vgatherdps(ZEXT832(0) << 0x20,auVar32);
      auVar32 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar46 = vgatherdps(ZEXT832(0),auVar32);
      in_ZMM7 = ZEXT3264(auVar46);
      auVar32 = vsubps_avx(auVar28,auVar93);
      auVar31._8_8_ = 0;
      auVar31._0_8_ = *(ulonglong *)(param_4 + uVar22);
      auVar59 = vpmovzxbd_avx2(auVar31);
      auVar59 = vpslld_avx2(auVar59,2);
      vpmovzxdq_avx2(auVar59._16_16_);
      auVar59 = vpmovzxdq_avx2(auVar59._0_16_);
      auVar67._0_12_ = ZEXT812(0);
      auVar67._12_4_ = 0;
      auVar31 = vpcmpeqd_avx(auVar100,auVar100);
      auVar100 = vgatherqps(auVar67,auVar31);
      auVar31 = vpcmpeqd_avx(auVar59._0_16_,auVar59._0_16_);
      auVar31 = vgatherqps(ZEXT816(0) << 0x40,auVar31);
      auVar59 = vsubps_avx(auVar29,auVar49);
      auVar30 = vsubps_avx(auVar41,auVar38);
      auVar39._0_4_ =
           auVar30._0_4_ * auVar30._0_4_ +
           auVar32._0_4_ * auVar32._0_4_ + auVar59._0_4_ * auVar59._0_4_;
      auVar39._4_4_ =
           auVar30._4_4_ * auVar30._4_4_ +
           auVar32._4_4_ * auVar32._4_4_ + auVar59._4_4_ * auVar59._4_4_;
      auVar39._8_4_ =
           auVar30._8_4_ * auVar30._8_4_ +
           auVar32._8_4_ * auVar32._8_4_ + auVar59._8_4_ * auVar59._8_4_;
      auVar39._12_4_ =
           auVar30._12_4_ * auVar30._12_4_ +
           auVar32._12_4_ * auVar32._12_4_ + auVar59._12_4_ * auVar59._12_4_;
      auVar39._16_4_ =
           auVar30._16_4_ * auVar30._16_4_ +
           auVar32._16_4_ * auVar32._16_4_ + auVar59._16_4_ * auVar59._16_4_;
      auVar39._20_4_ =
           auVar30._20_4_ * auVar30._20_4_ +
           auVar32._20_4_ * auVar32._20_4_ + auVar59._20_4_ * auVar59._20_4_;
      auVar39._24_4_ =
           auVar30._24_4_ * auVar30._24_4_ +
           auVar32._24_4_ * auVar32._24_4_ + auVar59._24_4_ * auVar59._24_4_;
      auVar39._28_4_ =
           auVar30._28_4_ * auVar30._28_4_ +
           auVar32._28_4_ * auVar32._28_4_ + auVar59._28_4_ * auVar59._28_4_;
      auVar60 = vsqrtps_avx(auVar39);
      auVar32 = vdivps_avx(auVar32,auVar60);
      auVar33 = vdivps_avx(auVar59,auVar60);
      auVar30 = vdivps_avx(auVar30,auVar60);
      auVar59._4_4_ = uVar4;
      auVar59._0_4_ = uVar4;
      auVar59._8_4_ = uVar4;
      auVar59._12_4_ = uVar4;
      auVar59._16_4_ = uVar4;
      auVar59._20_4_ = uVar4;
      auVar59._24_4_ = uVar4;
      auVar59._28_4_ = uVar4;
      auVar59 = vcmpps_avx(auVar39,auVar59,1);
      auVar76._4_4_ = uVar13;
      auVar76._0_4_ = uVar13;
      auVar76._8_4_ = uVar13;
      auVar76._12_4_ = uVar13;
      auVar76._16_4_ = uVar13;
      auVar76._20_4_ = uVar13;
      auVar76._24_4_ = uVar13;
      auVar76._28_4_ = uVar13;
      auVar32 = vblendvps_avx(auVar32,auVar76,auVar59);
      uVar48 = auVar59._0_4_;
      uVar51 = auVar59._4_4_;
      uVar52 = auVar59._8_4_;
      uVar53 = auVar59._12_4_;
      uVar54 = auVar59._16_4_;
      uVar55 = auVar59._20_4_;
      uVar56 = auVar59._24_4_;
      uVar57 = auVar59._28_4_;
      auVar40._0_4_ = ~uVar48 & auVar60._0_4_;
      auVar40._4_4_ = ~uVar51 & auVar60._4_4_;
      auVar40._8_4_ = ~uVar52 & auVar60._8_4_;
      auVar40._12_4_ = ~uVar53 & auVar60._12_4_;
      auVar40._16_4_ = ~uVar54 & auVar60._16_4_;
      auVar40._20_4_ = ~uVar55 & auVar60._20_4_;
      auVar40._24_4_ = ~uVar56 & auVar60._24_4_;
      auVar40._28_4_ = ~uVar57 & auVar60._28_4_;
      auVar59 = vsubps_avx(auVar40,*(undefined1 (*) [32])(param_3 + (uVar18 & 0xffffffff)));
      fVar58 = auVar59._0_4_;
      fVar63 = auVar59._4_4_;
      fVar64 = auVar59._8_4_;
      fVar65 = auVar59._12_4_;
      fVar66 = auVar59._16_4_;
      fVar68 = auVar59._20_4_;
      fVar69 = auVar59._24_4_;
      fVar70 = auVar59._28_4_;
      fVar5 = auVar46._0_4_;
      fVar73 = auVar110._0_4_;
      auVar50._0_4_ = fVar73 + fVar5;
      fVar6 = auVar46._4_4_;
      fVar80 = auVar110._4_4_;
      auVar50._4_4_ = fVar80 + fVar6;
      fVar7 = auVar46._8_4_;
      fVar82 = auVar110._8_4_;
      auVar50._8_4_ = fVar82 + fVar7;
      fVar8 = auVar46._12_4_;
      fVar84 = auVar110._12_4_;
      auVar50._12_4_ = fVar84 + fVar8;
      fVar9 = auVar46._16_4_;
      fVar86 = auVar110._16_4_;
      auVar50._16_4_ = fVar86 + fVar9;
      fVar10 = auVar46._20_4_;
      fVar88 = auVar110._20_4_;
      auVar50._20_4_ = fVar88 + fVar10;
      fVar11 = auVar46._24_4_;
      fVar90 = auVar110._24_4_;
      auVar50._24_4_ = fVar90 + fVar11;
      fVar12 = auVar46._28_4_;
      fVar92 = auVar110._28_4_;
      auVar50._28_4_ = fVar92 + fVar12;
      fVar72 = auVar100._0_4_;
      auVar60._0_4_ = fVar72 * auVar32._0_4_ * fVar58;
      fVar79 = auVar100._4_4_;
      auVar60._4_4_ = fVar79 * auVar32._4_4_ * fVar63;
      fVar81 = auVar100._8_4_;
      auVar60._8_4_ = fVar81 * auVar32._8_4_ * fVar64;
      fVar83 = auVar100._12_4_;
      auVar60._12_4_ = fVar83 * auVar32._12_4_ * fVar65;
      fVar85 = auVar31._0_4_;
      auVar60._16_4_ = fVar85 * auVar32._16_4_ * fVar66;
      fVar87 = auVar31._4_4_;
      auVar60._20_4_ = fVar87 * auVar32._20_4_ * fVar68;
      fVar89 = auVar31._8_4_;
      auVar60._24_4_ = fVar89 * auVar32._24_4_ * fVar69;
      fVar91 = auVar31._12_4_;
      auVar60._28_4_ = fVar91 * auVar32._28_4_ * fVar70;
      auVar47._0_4_ = (float)(~uVar48 & auVar33._0_4_) * fVar58 * fVar72;
      auVar47._4_4_ = (float)(~uVar51 & auVar33._4_4_) * fVar63 * fVar79;
      auVar47._8_4_ = (float)(~uVar52 & auVar33._8_4_) * fVar64 * fVar81;
      auVar47._12_4_ = (float)(~uVar53 & auVar33._12_4_) * fVar65 * fVar83;
      auVar47._16_4_ = (float)(~uVar54 & auVar33._16_4_) * fVar66 * fVar85;
      auVar47._20_4_ = (float)(~uVar55 & auVar33._20_4_) * fVar68 * fVar87;
      auVar47._24_4_ = (float)(~uVar56 & auVar33._24_4_) * fVar69 * fVar89;
      auVar47._28_4_ = (float)(~uVar57 & auVar33._28_4_) * fVar70 * fVar91;
      auVar33 = vdivps_avx(auVar60,auVar50);
      auVar32._0_4_ = fVar72 * (float)(~uVar48 & auVar30._0_4_) * fVar58;
      auVar32._4_4_ = fVar79 * (float)(~uVar51 & auVar30._4_4_) * fVar63;
      auVar32._8_4_ = fVar81 * (float)(~uVar52 & auVar30._8_4_) * fVar64;
      auVar32._12_4_ = fVar83 * (float)(~uVar53 & auVar30._12_4_) * fVar65;
      auVar32._16_4_ = fVar85 * (float)(~uVar54 & auVar30._16_4_) * fVar66;
      auVar32._20_4_ = fVar87 * (float)(~uVar55 & auVar30._20_4_) * fVar68;
      auVar32._24_4_ = fVar89 * (float)(~uVar56 & auVar30._24_4_) * fVar69;
      auVar32._28_4_ = fVar91 * (float)(~uVar57 & auVar30._28_4_) * fVar70;
      auVar30 = vdivps_avx(auVar47,auVar50);
      auVar60 = vdivps_avx(auVar32,auVar50);
      auVar32 = vcmpps_avx(ZEXT1632(auVar37),auVar46,0);
      auVar59 = vcmpps_avx(auVar110,ZEXT1632(auVar37),0);
      uVar48 = auVar32._0_4_ & auVar59._0_4_;
      uVar51 = auVar32._4_4_ & auVar59._4_4_;
      uVar52 = auVar32._8_4_ & auVar59._8_4_;
      uVar53 = auVar32._12_4_ & auVar59._12_4_;
      uVar54 = auVar32._16_4_ & auVar59._16_4_;
      uVar55 = auVar32._20_4_ & auVar59._20_4_;
      uVar56 = auVar32._24_4_ & auVar59._24_4_;
      uVar57 = auVar32._28_4_ & auVar59._28_4_;
      in_ZMM8 = ZEXT3264(CONCAT428(uVar57,CONCAT424(uVar56,CONCAT420(uVar55,CONCAT416(uVar54,
                                                  CONCAT412(uVar53,CONCAT48(uVar52,CONCAT44(uVar51,
                                                  uVar48))))))));
      fVar99 = (float)(~uVar48 & auVar33._0_4_);
      fVar102 = (float)(~uVar51 & auVar33._4_4_);
      fVar103 = (float)(~uVar52 & auVar33._8_4_);
      fVar104 = (float)(~uVar53 & auVar33._12_4_);
      fVar105 = (float)(~uVar54 & auVar33._16_4_);
      fVar106 = (float)(~uVar55 & auVar33._20_4_);
      fVar107 = (float)(~uVar56 & auVar33._24_4_);
      fVar108 = (float)(~uVar57 & auVar33._28_4_);
      fVar72 = (float)(~uVar48 & auVar30._0_4_);
      fVar79 = (float)(~uVar51 & auVar30._4_4_);
      fVar81 = (float)(~uVar52 & auVar30._8_4_);
      fVar83 = (float)(~uVar53 & auVar30._12_4_);
      fVar85 = (float)(~uVar54 & auVar30._16_4_);
      fVar87 = (float)(~uVar55 & auVar30._20_4_);
      fVar89 = (float)(~uVar56 & auVar30._24_4_);
      fVar91 = (float)(~uVar57 & auVar30._28_4_);
      fVar58 = (float)(~uVar48 & auVar60._0_4_);
      fVar63 = (float)(~uVar51 & auVar60._4_4_);
      fVar64 = (float)(~uVar52 & auVar60._8_4_);
      fVar65 = (float)(~uVar53 & auVar60._12_4_);
      fVar66 = (float)(~uVar54 & auVar60._16_4_);
      fVar68 = (float)(~uVar55 & auVar60._20_4_);
      fVar69 = (float)(~uVar56 & auVar60._24_4_);
      fVar70 = (float)(~uVar57 & auVar60._28_4_);
      auVar32 = vcmpps_avx(ZEXT1632(auVar37),auVar110,1);
      uVar48 = vmovmskps_avx(auVar32);
      if (uVar48 == 0) {
LAB_14035fede:
        auVar32 = vcmpps_avx(ZEXT832(0) << 0x20,auVar46,1);
        uVar48 = vmovmskps_avx(auVar32);
      }
      else {
        auVar27._0_4_ = -(fVar73 * fVar99) + auVar28._0_4_;
        auVar27._4_4_ = -(fVar80 * fVar102) + auVar28._4_4_;
        auVar27._8_4_ = -(fVar82 * fVar103) + auVar28._8_4_;
        auVar27._12_4_ = -(fVar84 * fVar104) + auVar28._12_4_;
        auVar33._16_4_ = -(fVar86 * fVar105) + auVar28._16_4_;
        auVar33._0_16_ = auVar27;
        auVar33._20_4_ = -(fVar88 * fVar106) + auVar28._20_4_;
        auVar33._24_4_ = -(fVar90 * fVar107) + auVar28._24_4_;
        auVar33._28_4_ = -(fVar92 * fVar108) + auVar28._28_4_;
        cVar16 = (char)uVar48;
        iVar96 = auVar97._0_4_;
        auVar100 = auVar110._0_16_;
        auVar67 = auVar110._16_16_;
        auVar31 = auVar33._16_16_;
        iVar23 = auVar97._4_4_;
        iVar24 = auVar97._8_4_;
        iVar25 = auVar97._12_4_;
        iVar45 = auVar97._16_4_;
        iVar21 = auVar97._20_4_;
        iVar26 = auVar97._24_4_;
        iVar19 = auVar97._28_4_;
        if ((uVar48 & 1) == 0) {
          if ((uVar48 & 2) == 0) goto LAB_14035fd92;
LAB_140360078:
          uVar3 = vextractps_avx(auVar27,1);
          *(undefined4 *)(param_1 + iVar23) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_140360092;
LAB_14035fd9c:
          if ((uVar48 & 8) == 0) goto LAB_14035fda6;
LAB_1403600ac:
          uVar3 = vextractps_avx(auVar27,3);
          *(undefined4 *)(param_1 + iVar25) = uVar3;
          if ((uVar48 & 0x10) != 0) goto LAB_1403600d2;
LAB_14035fdbc:
          if ((uVar48 & 0x20) == 0) goto LAB_14035fdc6;
LAB_1403600ea:
          uVar3 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + iVar21) = uVar3;
          if ((uVar48 & 0x40) != 0) goto LAB_140360104;
LAB_14035fdd0:
          if (-1 < cVar16) goto LAB_14035fdd8;
LAB_14036011c:
          uVar3 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          in_ZMM1 = ZEXT3264(CONCAT428(-(fVar92 * fVar91) + auVar29._28_4_,
                                       CONCAT424(-(fVar90 * fVar89) + auVar29._24_4_,
                                                 CONCAT420(-(fVar88 * fVar87) + auVar29._20_4_,
                                                           CONCAT416(-(fVar86 * fVar85) +
                                                                     auVar29._16_4_,
                                                                     CONCAT412(-(fVar84 * fVar83) +
                                                                               auVar29._12_4_,
                                                                               CONCAT48(-(fVar82 * 
                                                  fVar81) + auVar29._8_4_,
                                                  CONCAT44(-(fVar80 * fVar79) + auVar29._4_4_,
                                                           -(fVar73 * fVar72) + auVar29._0_4_)))))))
                            );
          if ((uVar48 & 1) != 0) goto LAB_14036013b;
LAB_14035fde7:
          if ((uVar48 & 2) == 0) goto LAB_14035fdf1;
LAB_140360154:
          uVar3 = vextractps_avx(in_ZMM1._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_14036016f;
LAB_14035fdfb:
          if ((uVar48 & 8) == 0) goto LAB_14035fe05;
LAB_14036018a:
          uVar3 = vextractps_avx(in_ZMM1._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar3;
          auVar31 = in_ZMM1._16_16_;
          if ((uVar48 & 0x10) != 0) goto LAB_1403601ab;
LAB_14035fe15:
          if ((uVar48 & 0x20) == 0) goto LAB_14035fe1f;
LAB_1403601c4:
          uVar3 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
          if ((uVar48 & 0x40) != 0) goto LAB_1403601df;
LAB_14035fe29:
          if (-1 < cVar16) goto LAB_14035fe31;
LAB_1403601f8:
          uVar3 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          auVar28._0_4_ = -(fVar73 * fVar58) + auVar41._0_4_;
          auVar28._4_4_ = -(fVar80 * fVar63) + auVar41._4_4_;
          auVar28._8_4_ = -(fVar82 * fVar64) + auVar41._8_4_;
          auVar28._12_4_ = -(fVar84 * fVar65) + auVar41._12_4_;
          auVar28._16_4_ = -(fVar86 * fVar66) + auVar41._16_4_;
          auVar28._20_4_ = -(fVar88 * fVar68) + auVar41._20_4_;
          auVar28._24_4_ = -(fVar90 * fVar69) + auVar41._24_4_;
          auVar28._28_4_ = -(fVar92 * fVar70) + auVar41._28_4_;
          if ((uVar48 & 1) != 0) goto LAB_140360218;
LAB_14035fe40:
          if ((uVar48 & 2) == 0) goto LAB_14035fe4a;
LAB_140360231:
          uVar3 = vextractps_avx(auVar28._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_14036024c;
LAB_14035fe54:
          if ((uVar48 & 8) == 0) goto LAB_14035fe5e;
LAB_140360267:
          uVar3 = vextractps_avx(auVar28._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar3;
          auVar31 = auVar28._16_16_;
        }
        else {
          *(float *)(param_1 + iVar96) = auVar27._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_140360078;
LAB_14035fd92:
          if ((uVar48 & 4) == 0) goto LAB_14035fd9c;
LAB_140360092:
          uVar3 = vextractps_avx(auVar27,2);
          *(undefined4 *)(param_1 + iVar24) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_1403600ac;
LAB_14035fda6:
          if ((uVar48 & 0x10) == 0) goto LAB_14035fdbc;
LAB_1403600d2:
          *(float *)(param_1 + iVar45) = auVar33._16_4_;
          if ((uVar48 & 0x20) != 0) goto LAB_1403600ea;
LAB_14035fdc6:
          if ((uVar48 & 0x40) == 0) goto LAB_14035fdd0;
LAB_140360104:
          uVar3 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + iVar26) = uVar3;
          if (cVar16 < '\0') goto LAB_14036011c;
LAB_14035fdd8:
          in_ZMM1 = ZEXT3264(CONCAT428(-(fVar92 * fVar91) + auVar29._28_4_,
                                       CONCAT424(-(fVar90 * fVar89) + auVar29._24_4_,
                                                 CONCAT420(-(fVar88 * fVar87) + auVar29._20_4_,
                                                           CONCAT416(-(fVar86 * fVar85) +
                                                                     auVar29._16_4_,
                                                                     CONCAT412(-(fVar84 * fVar83) +
                                                                               auVar29._12_4_,
                                                                               CONCAT48(-(fVar82 * 
                                                  fVar81) + auVar29._8_4_,
                                                  CONCAT44(-(fVar80 * fVar79) + auVar29._4_4_,
                                                           -(fVar73 * fVar72) + auVar29._0_4_)))))))
                            );
          if ((uVar48 & 1) == 0) goto LAB_14035fde7;
LAB_14036013b:
          *(int *)(param_1 + 4 + (longlong)iVar96) = in_ZMM1._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_140360154;
LAB_14035fdf1:
          if ((uVar48 & 4) == 0) goto LAB_14035fdfb;
LAB_14036016f:
          uVar3 = vextractps_avx(in_ZMM1._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_14036018a;
LAB_14035fe05:
          auVar31 = in_ZMM1._16_16_;
          if ((uVar48 & 0x10) == 0) goto LAB_14035fe15;
LAB_1403601ab:
          *(int *)(param_1 + 4 + (longlong)iVar45) = auVar31._0_4_;
          if ((uVar48 & 0x20) != 0) goto LAB_1403601c4;
LAB_14035fe1f:
          if ((uVar48 & 0x40) == 0) goto LAB_14035fe29;
LAB_1403601df:
          uVar3 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar3;
          if (cVar16 < '\0') goto LAB_1403601f8;
LAB_14035fe31:
          auVar28._0_4_ = -(fVar73 * fVar58) + auVar41._0_4_;
          auVar28._4_4_ = -(fVar80 * fVar63) + auVar41._4_4_;
          auVar28._8_4_ = -(fVar82 * fVar64) + auVar41._8_4_;
          auVar28._12_4_ = -(fVar84 * fVar65) + auVar41._12_4_;
          auVar28._16_4_ = -(fVar86 * fVar66) + auVar41._16_4_;
          auVar28._20_4_ = -(fVar88 * fVar68) + auVar41._20_4_;
          auVar28._24_4_ = -(fVar90 * fVar69) + auVar41._24_4_;
          auVar28._28_4_ = -(fVar92 * fVar70) + auVar41._28_4_;
          if ((uVar48 & 1) == 0) goto LAB_14035fe40;
LAB_140360218:
          *(int *)(param_1 + 8 + (longlong)iVar96) = auVar28._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_140360231;
LAB_14035fe4a:
          if ((uVar48 & 4) == 0) goto LAB_14035fe54;
LAB_14036024c:
          uVar3 = vextractps_avx(auVar28._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_140360267;
LAB_14035fe5e:
          auVar31 = auVar28._16_16_;
        }
        if ((uVar48 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar45) = auVar31._0_4_;
        }
        if ((uVar48 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar3;
        }
        if ((uVar48 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar48 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar96) = fVar73;
        }
        if ((uVar48 & 2) != 0) {
          uVar3 = vextractps_avx(auVar100,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar3;
        }
        if ((uVar48 & 4) != 0) {
          uVar3 = vextractps_avx(auVar100,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar3;
        }
        if ((uVar48 & 8) != 0) {
          uVar3 = vextractps_avx(auVar100,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar3;
        }
        if ((uVar48 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar45) = fVar86;
        }
        if ((uVar48 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar3;
        }
        if ((uVar48 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar3;
        }
        if (-1 < cVar16) goto LAB_14035fede;
        uVar3 = vextractps_avx(auVar67,3);
        *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        auVar32 = vcmpps_avx(ZEXT832(0) << 0x20,auVar46,1);
        uVar48 = vmovmskps_avx(auVar32);
      }
      if (uVar48 != 0) {
        auVar101._0_4_ = fVar5 * fVar99 + auVar93._0_4_;
        auVar101._4_4_ = fVar6 * fVar102 + auVar93._4_4_;
        auVar101._8_4_ = fVar7 * fVar103 + auVar93._8_4_;
        auVar101._12_4_ = fVar8 * fVar104 + auVar93._12_4_;
        auVar29._16_4_ = fVar9 * fVar105 + auVar93._16_4_;
        auVar29._0_16_ = auVar101;
        auVar29._20_4_ = fVar10 * fVar106 + auVar93._20_4_;
        auVar29._24_4_ = fVar11 * fVar107 + auVar93._24_4_;
        auVar29._28_4_ = fVar12 * fVar108 + auVar93._28_4_;
        cVar16 = (char)uVar48;
        auVar31 = auVar46._0_16_;
        auVar100 = auVar46._16_16_;
        iVar96 = auVar44._0_4_;
        auVar67 = auVar29._16_16_;
        iVar24 = auVar44._4_4_;
        iVar23 = auVar44._8_4_;
        iVar26 = auVar44._12_4_;
        local_2e0 = auVar49._0_4_;
        fStack_2dc = auVar49._4_4_;
        fStack_2d8 = auVar49._8_4_;
        fStack_2d4 = auVar49._12_4_;
        fStack_2d0 = auVar49._16_4_;
        fStack_2cc = auVar49._20_4_;
        fStack_2c8 = auVar49._24_4_;
        fStack_2c4 = auVar49._28_4_;
        local_2c0 = auVar38._0_4_;
        fStack_2bc = auVar38._4_4_;
        fStack_2b8 = auVar38._8_4_;
        fStack_2b4 = auVar38._12_4_;
        fStack_2b0 = auVar38._16_4_;
        fStack_2ac = auVar38._20_4_;
        fStack_2a8 = auVar38._24_4_;
        fStack_2a4 = auVar38._28_4_;
        iVar45 = auVar44._16_4_;
        iVar21 = auVar44._20_4_;
        iVar25 = auVar44._24_4_;
        iVar19 = auVar44._28_4_;
        if ((uVar48 & 1) == 0) {
          if ((uVar48 & 2) == 0) goto LAB_14035ff0c;
LAB_1403603f8:
          uVar3 = vextractps_avx(auVar101,1);
          *(undefined4 *)(param_1 + iVar24) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_140360412;
LAB_14035ff16:
          if ((uVar48 & 8) == 0) goto LAB_14035ff20;
LAB_14036042c:
          uVar3 = vextractps_avx(auVar101,3);
          *(undefined4 *)(param_1 + iVar26) = uVar3;
          if ((uVar48 & 0x10) != 0) goto LAB_140360452;
LAB_14035ff36:
          if ((uVar48 & 0x20) == 0) goto LAB_14035ff40;
LAB_14036046a:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + iVar21) = uVar3;
          if ((uVar48 & 0x40) != 0) goto LAB_140360484;
LAB_14035ff4a:
          if (-1 < cVar16) goto LAB_14035ff52;
LAB_14036049c:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + iVar19) = uVar3;
          auVar38._0_4_ = fVar5 * fVar72 + local_2e0;
          auVar38._4_4_ = fVar6 * fVar79 + fStack_2dc;
          auVar38._8_4_ = fVar7 * fVar81 + fStack_2d8;
          auVar38._12_4_ = fVar8 * fVar83 + fStack_2d4;
          auVar38._16_4_ = fVar9 * fVar85 + fStack_2d0;
          auVar38._20_4_ = fVar10 * fVar87 + fStack_2cc;
          auVar38._24_4_ = fVar11 * fVar89 + fStack_2c8;
          auVar38._28_4_ = fVar12 * fVar91 + fStack_2c4;
          if ((uVar48 & 1) != 0) goto LAB_1403604bc;
LAB_14035ff62:
          if ((uVar48 & 2) == 0) goto LAB_14035ff6c;
LAB_1403604d5:
          uVar3 = vextractps_avx(auVar38._0_16_,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_1403604f0;
LAB_14035ff76:
          if ((uVar48 & 8) == 0) goto LAB_14035ff80;
LAB_14036050b:
          uVar3 = vextractps_avx(auVar38._0_16_,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar3;
          auVar67 = auVar38._16_16_;
          if ((uVar48 & 0x10) != 0) goto LAB_14036052c;
LAB_14035ff90:
          if ((uVar48 & 0x20) == 0) goto LAB_14035ff9a;
LAB_140360545:
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
          if ((uVar48 & 0x40) != 0) goto LAB_140360560;
LAB_14035ffa4:
          if (-1 < cVar16) goto LAB_14035ffac;
LAB_140360579:
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
          auVar41._0_4_ = fVar5 * fVar58 + local_2c0;
          auVar41._4_4_ = fVar6 * fVar63 + fStack_2bc;
          auVar41._8_4_ = fVar7 * fVar64 + fStack_2b8;
          auVar41._12_4_ = fVar8 * fVar65 + fStack_2b4;
          auVar41._16_4_ = fVar9 * fVar66 + fStack_2b0;
          auVar41._20_4_ = fVar10 * fVar68 + fStack_2ac;
          auVar41._24_4_ = fVar11 * fVar69 + fStack_2a8;
          auVar41._28_4_ = fVar12 * fVar70 + fStack_2a4;
          if ((uVar48 & 1) != 0) goto LAB_14036059b;
LAB_14035ffbd:
          if ((uVar48 & 2) == 0) goto LAB_14035ffc7;
LAB_1403605b4:
          uVar3 = vextractps_avx(auVar41._0_16_,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar3;
          if ((uVar48 & 4) != 0) goto LAB_1403605cf;
LAB_14035ffd1:
          if ((uVar48 & 8) == 0) goto LAB_14035ffdb;
LAB_1403605ea:
          uVar3 = vextractps_avx(auVar41._0_16_,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar3;
          auVar67 = auVar41._16_16_;
        }
        else {
          *(float *)(param_1 + iVar96) = auVar101._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_1403603f8;
LAB_14035ff0c:
          if ((uVar48 & 4) == 0) goto LAB_14035ff16;
LAB_140360412:
          uVar3 = vextractps_avx(auVar101,2);
          *(undefined4 *)(param_1 + iVar23) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_14036042c;
LAB_14035ff20:
          if ((uVar48 & 0x10) == 0) goto LAB_14035ff36;
LAB_140360452:
          *(float *)(param_1 + iVar45) = auVar29._16_4_;
          if ((uVar48 & 0x20) != 0) goto LAB_14036046a;
LAB_14035ff40:
          if ((uVar48 & 0x40) == 0) goto LAB_14035ff4a;
LAB_140360484:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + iVar25) = uVar3;
          if (cVar16 < '\0') goto LAB_14036049c;
LAB_14035ff52:
          auVar38._0_4_ = fVar5 * fVar72 + local_2e0;
          auVar38._4_4_ = fVar6 * fVar79 + fStack_2dc;
          auVar38._8_4_ = fVar7 * fVar81 + fStack_2d8;
          auVar38._12_4_ = fVar8 * fVar83 + fStack_2d4;
          auVar38._16_4_ = fVar9 * fVar85 + fStack_2d0;
          auVar38._20_4_ = fVar10 * fVar87 + fStack_2cc;
          auVar38._24_4_ = fVar11 * fVar89 + fStack_2c8;
          auVar38._28_4_ = fVar12 * fVar91 + fStack_2c4;
          if ((uVar48 & 1) == 0) goto LAB_14035ff62;
LAB_1403604bc:
          *(int *)(param_1 + 4 + (longlong)iVar96) = auVar38._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_1403604d5;
LAB_14035ff6c:
          if ((uVar48 & 4) == 0) goto LAB_14035ff76;
LAB_1403604f0:
          uVar3 = vextractps_avx(auVar38._0_16_,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_14036050b;
LAB_14035ff80:
          auVar67 = auVar38._16_16_;
          if ((uVar48 & 0x10) == 0) goto LAB_14035ff90;
LAB_14036052c:
          *(int *)(param_1 + 4 + (longlong)iVar45) = auVar67._0_4_;
          if ((uVar48 & 0x20) != 0) goto LAB_140360545;
LAB_14035ff9a:
          if ((uVar48 & 0x40) == 0) goto LAB_14035ffa4;
LAB_140360560:
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar3;
          if (cVar16 < '\0') goto LAB_140360579;
LAB_14035ffac:
          auVar41._0_4_ = fVar5 * fVar58 + local_2c0;
          auVar41._4_4_ = fVar6 * fVar63 + fStack_2bc;
          auVar41._8_4_ = fVar7 * fVar64 + fStack_2b8;
          auVar41._12_4_ = fVar8 * fVar65 + fStack_2b4;
          auVar41._16_4_ = fVar9 * fVar66 + fStack_2b0;
          auVar41._20_4_ = fVar10 * fVar68 + fStack_2ac;
          auVar41._24_4_ = fVar11 * fVar69 + fStack_2a8;
          auVar41._28_4_ = fVar12 * fVar70 + fStack_2a4;
          if ((uVar48 & 1) == 0) goto LAB_14035ffbd;
LAB_14036059b:
          *(int *)(param_1 + 8 + (longlong)iVar96) = auVar41._0_4_;
          if ((uVar48 & 2) != 0) goto LAB_1403605b4;
LAB_14035ffc7:
          if ((uVar48 & 4) == 0) goto LAB_14035ffd1;
LAB_1403605cf:
          uVar3 = vextractps_avx(auVar41._0_16_,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar3;
          if ((uVar48 & 8) != 0) goto LAB_1403605ea;
LAB_14035ffdb:
          auVar67 = auVar41._16_16_;
        }
        if ((uVar48 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar45) = auVar67._0_4_;
        }
        if ((uVar48 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar67,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar3;
        }
        if ((uVar48 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar67,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar67,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
        }
        if ((uVar48 & 1) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar96) = fVar5;
        }
        if ((uVar48 & 2) != 0) {
          uVar3 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar3;
        }
        if ((uVar48 & 4) != 0) {
          uVar3 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar3;
        }
        if ((uVar48 & 8) != 0) {
          uVar3 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar3;
        }
        if ((uVar48 & 0x10) != 0) {
          *(float *)(param_1 + 0xc + (longlong)iVar45) = fVar9;
        }
        if ((uVar48 & 0x20) != 0) {
          uVar3 = vextractps_avx(auVar100,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar3;
        }
        if ((uVar48 & 0x40) != 0) {
          uVar3 = vextractps_avx(auVar100,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar3;
        }
        if (cVar16 < '\0') {
          uVar3 = vextractps_avx(auVar100,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
        }
      }
      uVar22 = uVar22 + 8;
      uVar18 = uVar18 + 0x20;
    } while ((int)uVar22 < (int)(uVar17 & 0xfffffff8));
  }
  iVar21 = (int)uVar22;
  if ((int)param_6 <= iVar21) {
    return param_5;
  }
  auVar44._4_4_ = iVar21;
  auVar44._0_4_ = iVar21;
  auVar44._8_4_ = iVar21;
  auVar44._12_4_ = iVar21;
  auVar44._16_4_ = iVar21;
  auVar44._20_4_ = iVar21;
  auVar44._24_4_ = iVar21;
  auVar44._28_4_ = iVar21;
  auVar32 = vpor_avx2(auVar44,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar46._4_4_ = param_6;
  auVar46._0_4_ = param_6;
  auVar46._8_4_ = param_6;
  auVar46._12_4_ = param_6;
  auVar46._16_4_ = param_6;
  auVar46._20_4_ = param_6;
  auVar46._24_4_ = param_6;
  auVar46._28_4_ = param_6;
  auVar32 = vpcmpgtd_avx2(auVar46,auVar32);
  uVar22 = uVar22 & 0xffffffff;
  pauVar1 = (undefined1 (*) [32])(param_2 + uVar22 * 8);
  uVar17 = vmovmskps_avx(auVar32);
  if (uVar17 == 0xff) {
    auVar59 = *pauVar1;
    auVar33 = pauVar1[1];
    auVar30 = vshufps_avx(auVar59,auVar33,0x88);
    auVar30 = vpermpd_avx2(auVar30,0xd8);
    auVar59 = vshufps_avx(auVar59,auVar33,0xdd);
    auVar59 = vpermpd_avx2(auVar59,0xd8);
  }
  else {
    auVar30 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
    auVar59 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
  }
  auVar47 = vpslld_avx2(auVar30,4);
  auVar33 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
  auVar30 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
  auVar60 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
  auVar50 = vgatherdps(ZEXT832(0),auVar32);
  auVar44 = vpslld_avx2(auVar59,4);
  auVar76 = vgatherdps(ZEXT832(0),auVar32);
  auVar29 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
  auVar28 = vgatherdps(ZEXT832(0),auVar32);
  auVar46 = vgatherdps(ZEXT832(0) << 0x20,auVar32);
  auVar59 = vmaskmovps_avx(auVar32,auVar33);
  auVar33 = vmaskmovps_avx(auVar32,auVar30);
  auVar30 = vmaskmovps_avx(auVar32,auVar60);
  auVar60 = vmaskmovps_avx(auVar32,auVar76);
  auVar76 = vmaskmovps_avx(auVar32,auVar29);
  auVar28 = vmaskmovps_avx(auVar32,auVar28);
  auVar29 = vsubps_avx(auVar59,auVar60);
  auVar39 = vsubps_avx(auVar33,auVar76);
  auVar41 = vsubps_avx(auVar30,auVar28);
  auVar75 = auVar41._0_16_;
  auVar94._0_4_ =
       auVar41._0_4_ * auVar41._0_4_ + auVar29._0_4_ * auVar29._0_4_ + auVar39._0_4_ * auVar39._0_4_
  ;
  auVar94._4_4_ =
       auVar41._4_4_ * auVar41._4_4_ + auVar29._4_4_ * auVar29._4_4_ + auVar39._4_4_ * auVar39._4_4_
  ;
  auVar94._8_4_ =
       auVar41._8_4_ * auVar41._8_4_ + auVar29._8_4_ * auVar29._8_4_ + auVar39._8_4_ * auVar39._8_4_
  ;
  auVar94._12_4_ =
       auVar41._12_4_ * auVar41._12_4_ +
       auVar29._12_4_ * auVar29._12_4_ + auVar39._12_4_ * auVar39._12_4_;
  auVar94._16_4_ =
       auVar41._16_4_ * auVar41._16_4_ +
       auVar29._16_4_ * auVar29._16_4_ + auVar39._16_4_ * auVar39._16_4_;
  auVar94._20_4_ =
       auVar41._20_4_ * auVar41._20_4_ +
       auVar29._20_4_ * auVar29._20_4_ + auVar39._20_4_ * auVar39._20_4_;
  auVar94._24_4_ =
       auVar41._24_4_ * auVar41._24_4_ +
       auVar29._24_4_ * auVar29._24_4_ + auVar39._24_4_ * auVar39._24_4_;
  auVar94._28_4_ =
       auVar41._28_4_ * auVar41._28_4_ +
       auVar29._28_4_ * auVar29._28_4_ + auVar39._28_4_ * auVar39._28_4_;
  auVar40 = vsqrtps_avx(auVar94);
  auVar49._4_4_ = __real_38d1b717;
  auVar49._0_4_ = __real_38d1b717;
  auVar49._8_4_ = __real_38d1b717;
  auVar49._12_4_ = __real_38d1b717;
  auVar49._16_4_ = __real_38d1b717;
  auVar49._20_4_ = __real_38d1b717;
  auVar49._24_4_ = __real_38d1b717;
  auVar49._28_4_ = __real_38d1b717;
  auVar29 = vdivps_avx(auVar29,auVar40);
  auVar38 = vcmpps_avx(auVar94,auVar49,1);
  auVar95._4_4_ = __real_3f800000;
  auVar95._0_4_ = __real_3f800000;
  auVar95._8_4_ = __real_3f800000;
  auVar95._12_4_ = __real_3f800000;
  auVar95._16_4_ = __real_3f800000;
  auVar95._20_4_ = __real_3f800000;
  auVar95._24_4_ = __real_3f800000;
  auVar95._28_4_ = __real_3f800000;
  auVar29 = vblendvps_avx(auVar29,auVar95,auVar38);
  auVar29 = vmaskmovps_avx(auVar32,auVar29);
  auVar39 = vdivps_avx(auVar39,auVar40);
  uVar48 = auVar38._0_4_;
  auVar93._0_4_ = ~uVar48 & auVar39._0_4_;
  uVar51 = auVar38._4_4_;
  auVar93._4_4_ = ~uVar51 & auVar39._4_4_;
  uVar52 = auVar38._8_4_;
  auVar93._8_4_ = ~uVar52 & auVar39._8_4_;
  uVar53 = auVar38._12_4_;
  auVar93._12_4_ = ~uVar53 & auVar39._12_4_;
  uVar54 = auVar38._16_4_;
  auVar93._16_4_ = ~uVar54 & auVar39._16_4_;
  uVar55 = auVar38._20_4_;
  auVar93._20_4_ = ~uVar55 & auVar39._20_4_;
  uVar56 = auVar38._24_4_;
  auVar93._24_4_ = ~uVar56 & auVar39._24_4_;
  uVar57 = auVar38._28_4_;
  auVar93._28_4_ = ~uVar57 & auVar39._28_4_;
  auVar38 = vmaskmovps_avx(auVar32,auVar93);
  auVar39 = vdivps_avx(auVar41,auVar40);
  auVar97._0_4_ = ~uVar48 & auVar39._0_4_;
  auVar97._4_4_ = ~uVar51 & auVar39._4_4_;
  auVar97._8_4_ = ~uVar52 & auVar39._8_4_;
  auVar97._12_4_ = ~uVar53 & auVar39._12_4_;
  auVar97._16_4_ = ~uVar54 & auVar39._16_4_;
  auVar97._20_4_ = ~uVar55 & auVar39._20_4_;
  auVar97._24_4_ = ~uVar56 & auVar39._24_4_;
  auVar97._28_4_ = ~uVar57 & auVar39._28_4_;
  auVar39 = vmaskmovps_avx(auVar32,auVar97);
  auVar41 = vmaskmovps_avx(auVar32,*(undefined1 (*) [32])(param_3 + (iVar21 << 2)));
  auVar110._0_4_ = ~uVar48 & auVar40._0_4_;
  auVar110._4_4_ = ~uVar51 & auVar40._4_4_;
  auVar110._8_4_ = ~uVar52 & auVar40._8_4_;
  auVar110._12_4_ = ~uVar53 & auVar40._12_4_;
  auVar110._16_4_ = ~uVar54 & auVar40._16_4_;
  auVar110._20_4_ = ~uVar55 & auVar40._20_4_;
  auVar110._24_4_ = ~uVar56 & auVar40._24_4_;
  auVar110._28_4_ = ~uVar57 & auVar40._28_4_;
  if ((~(byte)uVar17 & 0x81) == 0) {
    auVar75._8_8_ = 0;
    auVar75._0_8_ = *(ulonglong *)(param_4 + uVar22);
  }
  else {
    puVar20 = (undefined1 *)(param_4 + uVar22);
    if ((uVar17 & 1) != 0) {
      uVar2 = *puVar20;
      auVar75[1] = uVar2;
      auVar75[0] = uVar2;
      auVar75[2] = uVar2;
      auVar75[3] = uVar2;
      auVar75[4] = uVar2;
      auVar75[5] = uVar2;
      auVar75[6] = uVar2;
      auVar75[7] = uVar2;
      auVar75[8] = uVar2;
      auVar75[9] = uVar2;
      auVar75[10] = uVar2;
      auVar75[0xb] = uVar2;
      auVar75[0xc] = uVar2;
      auVar75[0xd] = uVar2;
      auVar75[0xe] = uVar2;
      auVar75[0xf] = uVar2;
    }
    if ((uVar17 & 2) != 0) {
      auVar37 = vpinsrb_avx(auVar75,(uint)(byte)puVar20[1],1);
      auVar75 = vpblendw_avx(auVar37,auVar75,0xe);
    }
    if ((uVar17 & 4) != 0) {
      auVar37 = vpmovzxwd_avx(auVar75);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[2],2);
      auVar37 = vpinsrb_avx(auVar37,(uint)auVar75[3],3);
      auVar75 = vpblendd_avx2(auVar37,auVar75,2);
    }
    if ((uVar17 & 8) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048080030280020100);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[3],3);
      auVar75 = vpblendd_avx2(auVar37,auVar75,2);
    }
    if ((uVar17 & 0x10) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048080030203020100);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[4],4);
      auVar37 = vpinsrb_avx(auVar37,(uint)auVar75[5],5);
      auVar75 = vpblendw_avx(auVar37,auVar75,8);
    }
    if ((uVar17 & 0x20) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048080030403020100);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[5],5);
      auVar75 = vpblendw_avx(auVar37,auVar75,8);
    }
    if ((uVar17 & 0x40) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048080050403020100);
      auVar37 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[6],6);
      auVar75 = vpinsrb_avx(auVar37,(uint)auVar75[7],7);
    }
    if ((uVar17 & 0x80) != 0) {
      auVar37 = vpshufb_avx(auVar75,___xmm_80800706808005048006050403020100);
      auVar75 = vpinsrb_avx(auVar37,(uint)(byte)puVar20[7],7);
    }
  }
  auVar40 = vsubps_avx(auVar110,auVar41);
  local_2a0 = auVar29._0_4_;
  fStack_29c = auVar29._4_4_;
  fStack_298 = auVar29._8_4_;
  fStack_294 = auVar29._12_4_;
  fStack_290 = auVar29._16_4_;
  fStack_28c = auVar29._20_4_;
  fStack_288 = auVar29._24_4_;
  fStack_284 = auVar29._28_4_;
  fVar72 = auVar40._0_4_;
  fVar79 = auVar40._4_4_;
  fVar81 = auVar40._8_4_;
  fVar83 = auVar40._12_4_;
  fVar85 = auVar40._16_4_;
  fVar87 = auVar40._20_4_;
  fVar89 = auVar40._24_4_;
  fVar91 = auVar40._28_4_;
  local_280 = auVar38._0_4_;
  fStack_27c = auVar38._4_4_;
  fStack_278 = auVar38._8_4_;
  fStack_274 = auVar38._12_4_;
  fStack_270 = auVar38._16_4_;
  fStack_26c = auVar38._20_4_;
  fStack_268 = auVar38._24_4_;
  fStack_264 = auVar38._28_4_;
  auVar29 = vpmovzxbd_avx2(auVar75);
  auVar29 = vpslld_avx2(auVar29,2);
  vpmovzxdq_avx2(auVar29._16_16_);
  vpmovzxdq_avx2(auVar29._0_16_);
  auVar37 = vgatherqps(ZEXT816(0) << 0x20,auVar32._0_16_);
  auVar31 = vgatherqps(ZEXT816(0) << 0x40,auVar32._16_16_);
  local_260 = auVar39._0_4_;
  fStack_25c = auVar39._4_4_;
  fStack_258 = auVar39._8_4_;
  fStack_254 = auVar39._12_4_;
  fStack_250 = auVar39._16_4_;
  fStack_24c = auVar39._20_4_;
  fStack_248 = auVar39._24_4_;
  fStack_244 = auVar39._28_4_;
  fVar5 = auVar46._0_4_;
  fVar99 = auVar50._0_4_;
  auVar77._0_4_ = fVar99 + fVar5;
  fVar6 = auVar46._4_4_;
  fVar102 = auVar50._4_4_;
  auVar77._4_4_ = fVar102 + fVar6;
  fVar7 = auVar46._8_4_;
  fVar103 = auVar50._8_4_;
  auVar77._8_4_ = fVar103 + fVar7;
  fVar8 = auVar46._12_4_;
  fVar104 = auVar50._12_4_;
  auVar77._12_4_ = fVar104 + fVar8;
  fVar9 = auVar46._16_4_;
  fVar105 = auVar50._16_4_;
  auVar77._16_4_ = fVar105 + fVar9;
  fVar10 = auVar46._20_4_;
  fVar106 = auVar50._20_4_;
  auVar77._20_4_ = fVar106 + fVar10;
  fVar11 = auVar46._24_4_;
  fVar107 = auVar50._24_4_;
  auVar77._24_4_ = fVar107 + fVar11;
  fVar12 = auVar46._28_4_;
  fVar108 = auVar50._28_4_;
  auVar77._28_4_ = fVar108 + fVar12;
  fVar58 = auVar37._0_4_;
  auVar42._0_4_ = fVar72 * local_2a0 * fVar58;
  fVar63 = auVar37._4_4_;
  auVar42._4_4_ = fVar79 * fStack_29c * fVar63;
  fVar64 = auVar37._8_4_;
  auVar42._8_4_ = fVar81 * fStack_298 * fVar64;
  fVar65 = auVar37._12_4_;
  auVar42._12_4_ = fVar83 * fStack_294 * fVar65;
  fVar66 = auVar31._0_4_;
  auVar42._16_4_ = fVar85 * fStack_290 * fVar66;
  fVar68 = auVar31._4_4_;
  auVar42._20_4_ = fVar87 * fStack_28c * fVar68;
  fVar69 = auVar31._8_4_;
  auVar42._24_4_ = fVar89 * fStack_288 * fVar69;
  fVar70 = auVar31._12_4_;
  auVar42._28_4_ = fVar91 * fStack_284 * fVar70;
  auVar39 = vdivps_avx(auVar42,auVar77);
  auVar61._0_4_ = fVar72 * local_280 * fVar58;
  auVar61._4_4_ = fVar79 * fStack_27c * fVar63;
  auVar61._8_4_ = fVar81 * fStack_278 * fVar64;
  auVar61._12_4_ = fVar83 * fStack_274 * fVar65;
  auVar61._16_4_ = fVar85 * fStack_270 * fVar66;
  auVar61._20_4_ = fVar87 * fStack_26c * fVar68;
  auVar61._24_4_ = fVar89 * fStack_268 * fVar69;
  auVar61._28_4_ = fVar91 * fStack_264 * fVar70;
  auVar40 = vdivps_avx(auVar61,auVar77);
  auVar34._0_4_ = fVar72 * local_260 * fVar58;
  auVar34._4_4_ = fVar79 * fStack_25c * fVar63;
  auVar34._8_4_ = fVar81 * fStack_258 * fVar64;
  auVar34._12_4_ = fVar83 * fStack_254 * fVar65;
  auVar34._16_4_ = fVar85 * fStack_250 * fVar66;
  auVar34._20_4_ = fVar87 * fStack_24c * fVar68;
  auVar34._24_4_ = fVar89 * fStack_248 * fVar69;
  auVar34._28_4_ = fVar91 * fStack_244 * fVar70;
  auVar41 = vdivps_avx(auVar34,auVar77);
  auVar29 = vcmpps_avx(ZEXT832(0) << 0x20,auVar46,0);
  auVar38 = vcmpps_avx(auVar50,ZEXT832(0) << 0x20,0);
  uVar17 = auVar38._0_4_ & auVar29._0_4_;
  uVar48 = auVar38._4_4_ & auVar29._4_4_;
  uVar51 = auVar38._8_4_ & auVar29._8_4_;
  uVar52 = auVar38._12_4_ & auVar29._12_4_;
  uVar53 = auVar38._16_4_ & auVar29._16_4_;
  uVar54 = auVar38._20_4_ & auVar29._20_4_;
  uVar55 = auVar38._24_4_ & auVar29._24_4_;
  uVar56 = auVar38._28_4_ & auVar29._28_4_;
  fVar73 = (float)(~uVar17 & auVar39._0_4_);
  fVar80 = (float)(~uVar48 & auVar39._4_4_);
  fVar82 = (float)(~uVar51 & auVar39._8_4_);
  fVar84 = (float)(~uVar52 & auVar39._12_4_);
  fVar86 = (float)(~uVar53 & auVar39._16_4_);
  fVar88 = (float)(~uVar54 & auVar39._20_4_);
  fVar90 = (float)(~uVar55 & auVar39._24_4_);
  fVar92 = (float)(~uVar56 & auVar39._28_4_);
  fVar72 = (float)(~uVar17 & auVar40._0_4_);
  fVar79 = (float)(~uVar48 & auVar40._4_4_);
  fVar81 = (float)(~uVar51 & auVar40._8_4_);
  fVar83 = (float)(~uVar52 & auVar40._12_4_);
  fVar85 = (float)(~uVar53 & auVar40._16_4_);
  fVar87 = (float)(~uVar54 & auVar40._20_4_);
  fVar89 = (float)(~uVar55 & auVar40._24_4_);
  fVar91 = (float)(~uVar56 & auVar40._28_4_);
  fVar58 = (float)(~uVar17 & auVar41._0_4_);
  fVar63 = (float)(~uVar48 & auVar41._4_4_);
  fVar64 = (float)(~uVar51 & auVar41._8_4_);
  fVar65 = (float)(~uVar52 & auVar41._12_4_);
  fVar66 = (float)(~uVar53 & auVar41._16_4_);
  fVar68 = (float)(~uVar54 & auVar41._20_4_);
  fVar69 = (float)(~uVar55 & auVar41._24_4_);
  fVar70 = (float)(~uVar56 & auVar41._28_4_);
  auVar29 = vcmpps_avx(ZEXT832(0) << 0x20,auVar50,1);
  auVar35._0_4_ = auVar29._0_4_ & auVar32._0_4_;
  auVar35._4_4_ = auVar29._4_4_ & auVar32._4_4_;
  auVar35._8_4_ = auVar29._8_4_ & auVar32._8_4_;
  auVar35._12_4_ = auVar29._12_4_ & auVar32._12_4_;
  auVar35._16_4_ = auVar29._16_4_ & auVar32._16_4_;
  auVar35._20_4_ = auVar29._20_4_ & auVar32._20_4_;
  auVar35._24_4_ = auVar29._24_4_ & auVar32._24_4_;
  auVar35._28_4_ = auVar29._28_4_ & auVar32._28_4_;
  uVar17 = vmovmskps_avx(auVar35);
  if (uVar17 == 0) goto LAB_140360bfa;
  auVar109._0_4_ = -(fVar99 * fVar73) + auVar59._0_4_;
  auVar109._4_4_ = -(fVar102 * fVar80) + auVar59._4_4_;
  auVar109._8_4_ = -(fVar103 * fVar82) + auVar59._8_4_;
  auVar109._12_4_ = -(fVar104 * fVar84) + auVar59._12_4_;
  auVar111._16_4_ = -(fVar105 * fVar86) + auVar59._16_4_;
  auVar111._0_16_ = auVar109;
  auVar111._20_4_ = -(fVar106 * fVar88) + auVar59._20_4_;
  auVar111._24_4_ = -(fVar107 * fVar90) + auVar59._24_4_;
  auVar111._28_4_ = -(fVar108 * fVar92) + auVar59._28_4_;
  cVar16 = (char)uVar17;
  iVar45 = auVar47._0_4_;
  auVar37 = auVar50._0_16_;
  auVar31 = auVar50._16_16_;
  auVar100 = auVar111._16_16_;
  iVar19 = auVar47._4_4_;
  iVar21 = auVar47._8_4_;
  iVar26 = auVar47._12_4_;
  iVar96 = auVar47._16_4_;
  iVar23 = auVar47._20_4_;
  iVar24 = auVar47._24_4_;
  iVar25 = auVar47._28_4_;
  if ((uVar17 & 1) == 0) {
    if ((uVar17 & 2) == 0) goto LAB_140360ac8;
LAB_140360dd8:
    uVar4 = vextractps_avx(auVar109,1);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
    if ((uVar17 & 4) != 0) goto LAB_140360df1;
LAB_140360ad1:
    if ((uVar17 & 8) == 0) goto LAB_140360ada;
LAB_140360e0a:
    uVar4 = vextractps_avx(auVar109,3);
    *(undefined4 *)(param_1 + iVar26) = uVar4;
    if ((uVar17 & 0x10) != 0) goto LAB_140360e2f;
LAB_140360aef:
    if ((uVar17 & 0x20) == 0) goto LAB_140360af8;
LAB_140360e46:
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + iVar23) = uVar4;
    if ((uVar17 & 0x40) != 0) goto LAB_140360e5f;
LAB_140360b01:
    if (-1 < cVar16) goto LAB_140360b09;
LAB_140360e77:
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + iVar25) = uVar4;
    auVar98._0_4_ = -(fVar99 * fVar72) + auVar33._0_4_;
    auVar98._4_4_ = -(fVar102 * fVar79) + auVar33._4_4_;
    auVar98._8_4_ = -(fVar103 * fVar81) + auVar33._8_4_;
    auVar98._12_4_ = -(fVar104 * fVar83) + auVar33._12_4_;
    auVar98._16_4_ = -(fVar105 * fVar85) + auVar33._16_4_;
    auVar98._20_4_ = -(fVar106 * fVar87) + auVar33._20_4_;
    auVar98._24_4_ = -(fVar107 * fVar89) + auVar33._24_4_;
    auVar98._28_4_ = -(fVar108 * fVar91) + auVar33._28_4_;
    if ((uVar17 & 1) != 0) goto LAB_140360e95;
LAB_140360b17:
    if ((uVar17 & 2) == 0) goto LAB_140360b20;
LAB_140360ead:
    uVar4 = vextractps_avx(auVar98._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
    if ((uVar17 & 4) != 0) goto LAB_140360ec7;
LAB_140360b29:
    if ((uVar17 & 8) == 0) goto LAB_140360b32;
LAB_140360ee1:
    uVar4 = vextractps_avx(auVar98._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar4;
    auVar100 = auVar98._16_16_;
    if ((uVar17 & 0x10) != 0) goto LAB_140360f01;
LAB_140360b41:
    if ((uVar17 & 0x20) == 0) goto LAB_140360b4a;
LAB_140360f19:
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar4;
    if ((uVar17 & 0x40) != 0) goto LAB_140360f33;
LAB_140360b53:
    if (-1 < cVar16) goto LAB_140360b5b;
LAB_140360f4c:
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar4;
    auVar71._0_4_ = -(fVar99 * fVar58) + auVar30._0_4_;
    auVar71._4_4_ = -(fVar102 * fVar63) + auVar30._4_4_;
    auVar71._8_4_ = -(fVar103 * fVar64) + auVar30._8_4_;
    auVar71._12_4_ = -(fVar104 * fVar65) + auVar30._12_4_;
    auVar71._16_4_ = -(fVar105 * fVar66) + auVar30._16_4_;
    auVar71._20_4_ = -(fVar106 * fVar68) + auVar30._20_4_;
    auVar71._24_4_ = -(fVar107 * fVar69) + auVar30._24_4_;
    auVar71._28_4_ = -(fVar108 * fVar70) + auVar30._28_4_;
    if ((uVar17 & 1) != 0) goto LAB_140360f6b;
LAB_140360b69:
    if ((uVar17 & 2) == 0) goto LAB_140360b72;
LAB_140360f83:
    uVar4 = vextractps_avx(auVar71._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
    if ((uVar17 & 4) != 0) goto LAB_140360f9d;
LAB_140360b7b:
    if ((uVar17 & 8) == 0) goto LAB_140360b84;
LAB_140360fb7:
    uVar4 = vextractps_avx(auVar71._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar4;
    auVar100 = auVar71._16_16_;
  }
  else {
    *(float *)(param_1 + iVar45) = auVar109._0_4_;
    if ((uVar17 & 2) != 0) goto LAB_140360dd8;
LAB_140360ac8:
    if ((uVar17 & 4) == 0) goto LAB_140360ad1;
LAB_140360df1:
    uVar4 = vextractps_avx(auVar109,2);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
    if ((uVar17 & 8) != 0) goto LAB_140360e0a;
LAB_140360ada:
    if ((uVar17 & 0x10) == 0) goto LAB_140360aef;
LAB_140360e2f:
    *(float *)(param_1 + iVar96) = auVar111._16_4_;
    if ((uVar17 & 0x20) != 0) goto LAB_140360e46;
LAB_140360af8:
    if ((uVar17 & 0x40) == 0) goto LAB_140360b01;
LAB_140360e5f:
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + iVar24) = uVar4;
    if (cVar16 < '\0') goto LAB_140360e77;
LAB_140360b09:
    auVar98._0_4_ = -(fVar99 * fVar72) + auVar33._0_4_;
    auVar98._4_4_ = -(fVar102 * fVar79) + auVar33._4_4_;
    auVar98._8_4_ = -(fVar103 * fVar81) + auVar33._8_4_;
    auVar98._12_4_ = -(fVar104 * fVar83) + auVar33._12_4_;
    auVar98._16_4_ = -(fVar105 * fVar85) + auVar33._16_4_;
    auVar98._20_4_ = -(fVar106 * fVar87) + auVar33._20_4_;
    auVar98._24_4_ = -(fVar107 * fVar89) + auVar33._24_4_;
    auVar98._28_4_ = -(fVar108 * fVar91) + auVar33._28_4_;
    if ((uVar17 & 1) == 0) goto LAB_140360b17;
LAB_140360e95:
    *(int *)(param_1 + 4 + (longlong)iVar45) = auVar98._0_4_;
    if ((uVar17 & 2) != 0) goto LAB_140360ead;
LAB_140360b20:
    if ((uVar17 & 4) == 0) goto LAB_140360b29;
LAB_140360ec7:
    uVar4 = vextractps_avx(auVar98._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
    if ((uVar17 & 8) != 0) goto LAB_140360ee1;
LAB_140360b32:
    auVar100 = auVar98._16_16_;
    if ((uVar17 & 0x10) == 0) goto LAB_140360b41;
LAB_140360f01:
    *(int *)(param_1 + 4 + (longlong)iVar96) = auVar100._0_4_;
    if ((uVar17 & 0x20) != 0) goto LAB_140360f19;
LAB_140360b4a:
    if ((uVar17 & 0x40) == 0) goto LAB_140360b53;
LAB_140360f33:
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar4;
    if (cVar16 < '\0') goto LAB_140360f4c;
LAB_140360b5b:
    auVar71._0_4_ = -(fVar99 * fVar58) + auVar30._0_4_;
    auVar71._4_4_ = -(fVar102 * fVar63) + auVar30._4_4_;
    auVar71._8_4_ = -(fVar103 * fVar64) + auVar30._8_4_;
    auVar71._12_4_ = -(fVar104 * fVar65) + auVar30._12_4_;
    auVar71._16_4_ = -(fVar105 * fVar66) + auVar30._16_4_;
    auVar71._20_4_ = -(fVar106 * fVar68) + auVar30._20_4_;
    auVar71._24_4_ = -(fVar107 * fVar69) + auVar30._24_4_;
    auVar71._28_4_ = -(fVar108 * fVar70) + auVar30._28_4_;
    if ((uVar17 & 1) == 0) goto LAB_140360b69;
LAB_140360f6b:
    *(int *)(param_1 + 8 + (longlong)iVar45) = auVar71._0_4_;
    if ((uVar17 & 2) != 0) goto LAB_140360f83;
LAB_140360b72:
    if ((uVar17 & 4) == 0) goto LAB_140360b7b;
LAB_140360f9d:
    uVar4 = vextractps_avx(auVar71._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
    if ((uVar17 & 8) != 0) goto LAB_140360fb7;
LAB_140360b84:
    auVar100 = auVar71._16_16_;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar96) = auVar100._0_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar4;
  }
  if ((uVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar45) = fVar99;
  }
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar37,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar37,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar4;
  }
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar37,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar96) = fVar105;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar31,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar31,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar31,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar4;
  }
LAB_140360bfa:
  auVar59 = vcmpps_avx(ZEXT832(0) << 0x20,auVar46,1);
  auVar36._0_4_ = auVar59._0_4_ & auVar32._0_4_;
  auVar36._4_4_ = auVar59._4_4_ & auVar32._4_4_;
  auVar36._8_4_ = auVar59._8_4_ & auVar32._8_4_;
  auVar36._12_4_ = auVar59._12_4_ & auVar32._12_4_;
  auVar36._16_4_ = auVar59._16_4_ & auVar32._16_4_;
  auVar36._20_4_ = auVar59._20_4_ & auVar32._20_4_;
  auVar36._24_4_ = auVar59._24_4_ & auVar32._24_4_;
  auVar36._28_4_ = auVar59._28_4_ & auVar32._28_4_;
  uVar17 = vmovmskps_avx(auVar36);
  uVar22 = (ulonglong)uVar17;
  if (uVar17 == 0) {
    return 0;
  }
  auVar74._0_4_ = fVar5 * fVar73 + auVar60._0_4_;
  auVar74._4_4_ = fVar6 * fVar80 + auVar60._4_4_;
  auVar74._8_4_ = fVar7 * fVar82 + auVar60._8_4_;
  auVar74._12_4_ = fVar8 * fVar84 + auVar60._12_4_;
  auVar78._16_4_ = fVar9 * fVar86 + auVar60._16_4_;
  auVar78._0_16_ = auVar74;
  auVar78._20_4_ = fVar10 * fVar88 + auVar60._20_4_;
  auVar78._24_4_ = fVar11 * fVar90 + auVar60._24_4_;
  auVar78._28_4_ = fVar12 * fVar92 + auVar60._28_4_;
  cVar16 = (char)uVar17;
  iVar45 = auVar44._0_4_;
  auVar37 = auVar46._0_16_;
  auVar31 = auVar46._16_16_;
  auVar100 = auVar78._16_16_;
  iVar19 = auVar44._4_4_;
  iVar25 = auVar44._8_4_;
  iVar24 = auVar44._12_4_;
  local_2e0 = auVar76._0_4_;
  fStack_2dc = auVar76._4_4_;
  fStack_2d8 = auVar76._8_4_;
  fStack_2d4 = auVar76._12_4_;
  fStack_2d0 = auVar76._16_4_;
  fStack_2cc = auVar76._20_4_;
  fStack_2c8 = auVar76._24_4_;
  fStack_2c4 = auVar76._28_4_;
  local_2c0 = auVar28._0_4_;
  fStack_2bc = auVar28._4_4_;
  fStack_2b8 = auVar28._8_4_;
  fStack_2b4 = auVar28._12_4_;
  fStack_2b0 = auVar28._16_4_;
  fStack_2ac = auVar28._20_4_;
  fStack_2a8 = auVar28._24_4_;
  fStack_2a4 = auVar28._28_4_;
  iVar96 = auVar44._16_4_;
  iVar23 = auVar44._20_4_;
  iVar26 = auVar44._24_4_;
  iVar21 = auVar44._28_4_;
  if ((uVar17 & 1) != 0) {
    *(float *)(param_1 + iVar45) = auVar74._0_4_;
  }
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + iVar25) = uVar4;
  }
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + iVar24) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(float *)(param_1 + iVar96) = auVar78._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + iVar26) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
    auVar62._0_4_ = fVar5 * fVar72 + local_2e0;
    auVar62._4_4_ = fVar6 * fVar79 + fStack_2dc;
    auVar62._8_4_ = fVar7 * fVar81 + fStack_2d8;
    auVar62._12_4_ = fVar8 * fVar83 + fStack_2d4;
    auVar62._16_4_ = fVar9 * fVar85 + fStack_2d0;
    auVar62._20_4_ = fVar10 * fVar87 + fStack_2cc;
    auVar62._24_4_ = fVar11 * fVar89 + fStack_2c8;
    auVar62._28_4_ = fVar12 * fVar91 + fStack_2c4;
  }
  else {
    auVar62._0_4_ = fVar5 * fVar72 + local_2e0;
    auVar62._4_4_ = fVar6 * fVar79 + fStack_2dc;
    auVar62._8_4_ = fVar7 * fVar81 + fStack_2d8;
    auVar62._12_4_ = fVar8 * fVar83 + fStack_2d4;
    auVar62._16_4_ = fVar9 * fVar85 + fStack_2d0;
    auVar62._20_4_ = fVar10 * fVar87 + fStack_2cc;
    auVar62._24_4_ = fVar11 * fVar89 + fStack_2c8;
    auVar62._28_4_ = fVar12 * fVar91 + fStack_2c4;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar45) = auVar62._0_4_;
  }
  auVar100 = auVar62._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar4;
  }
  auVar67 = auVar62._16_16_;
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar96) = auVar62._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
    auVar43._0_4_ = fVar5 * fVar58 + local_2c0;
    auVar43._4_4_ = fVar6 * fVar63 + fStack_2bc;
    auVar43._8_4_ = fVar7 * fVar64 + fStack_2b8;
    auVar43._12_4_ = fVar8 * fVar65 + fStack_2b4;
    auVar43._16_4_ = fVar9 * fVar66 + fStack_2b0;
    auVar43._20_4_ = fVar10 * fVar68 + fStack_2ac;
    auVar43._24_4_ = fVar11 * fVar69 + fStack_2a8;
    auVar43._28_4_ = fVar12 * fVar70 + fStack_2a4;
  }
  else {
    auVar43._0_4_ = fVar5 * fVar58 + local_2c0;
    auVar43._4_4_ = fVar6 * fVar63 + fStack_2bc;
    auVar43._8_4_ = fVar7 * fVar64 + fStack_2b8;
    auVar43._12_4_ = fVar8 * fVar65 + fStack_2b4;
    auVar43._16_4_ = fVar9 * fVar66 + fStack_2b0;
    auVar43._20_4_ = fVar10 * fVar68 + fStack_2ac;
    auVar43._24_4_ = fVar11 * fVar69 + fStack_2a8;
    auVar43._28_4_ = fVar12 * fVar70 + fStack_2a4;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar45) = auVar43._0_4_;
  }
  auVar100 = auVar43._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar4;
  }
  auVar67 = auVar43._16_16_;
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar96) = auVar43._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar4 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
  }
  if ((uVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar45) = fVar5;
  }
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar37,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar37,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar4;
  }
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar37,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar96) = fVar9;
  }
  if ((uVar17 & 0x20) != 0) {
    uVar4 = vextractps_avx(auVar31,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    uVar4 = vextractps_avx(auVar31,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar4;
  }
  if (cVar16 < '\0') {
    uVar22 = (ulonglong)iVar21;
    uVar4 = vextractps_avx(auVar31,3);
    *(undefined4 *)(param_1 + 0xc + uVar22) = uVar4;
  }
  return uVar22;
}


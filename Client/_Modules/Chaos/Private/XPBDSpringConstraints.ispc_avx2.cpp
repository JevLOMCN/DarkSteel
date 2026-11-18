// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// ApplyXPBDSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCuni_avx2 @ 14090e520

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,uint param_7)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [32];
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [24];
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  char cVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  float fVar59;
  undefined1 auVar60 [16];
  float fVar63;
  float fVar64;
  undefined1 auVar61 [32];
  float fVar65;
  undefined1 auVar62 [32];
  int iVar66;
  undefined1 auVar68 [32];
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  undefined1 in_ZMM3 [64];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 in_ZMM4 [64];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 in_ZMM5 [64];
  int iVar89;
  float fVar90;
  undefined1 auVar91 [16];
  float fVar95;
  float fVar96;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar92 [32];
  float fVar97;
  float fVar101;
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar111 [32];
  float fVar119;
  undefined1 auVar112 [32];
  undefined1 auVar120 [16];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [16];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [16];
  undefined1 auVar137 [32];
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
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar67;
  undefined1 auVar129 [32];
  
  uVar15 = __real_00000008;
  uVar14 = __real_00000004;
  fVar7 = __real_3f800000;
  uVar5 = __real_38d1b717;
  uVar16 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar16 = param_7;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar59 = param_5 * param_6 * param_5;
    fVar37 = (float)((uint)fVar59 ^ __real_80000000);
    fVar42 = (float)((uint)fVar59 ^ __real_80000000);
    fVar44 = (float)((uint)fVar59 ^ __real_80000000);
    fVar46 = (float)((uint)fVar59 ^ __real_80000000);
    fVar48 = (float)((uint)fVar59 ^ __real_80000000);
    fVar50 = (float)((uint)fVar59 ^ __real_80000000);
    fVar52 = (float)((uint)fVar59 ^ __real_80000000);
    fVar54 = (float)((uint)fVar59 ^ __real_80000000);
    uVar31 = 0;
    uVar21 = 0;
    do {
      auVar3 = *(undefined1 (*) [32])(param_2 + uVar21 * 2);
      auVar40 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar21 * 2);
      auVar68 = vshufps_avx(auVar3,auVar40,0x88);
      auVar68 = vpermpd_avx2(auVar68,0xd8);
      auVar56 = vpslld_avx2(auVar68,4);
      auVar68 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar92 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar68);
      auVar3 = vshufps_avx(auVar3,auVar40,0xdd);
      auVar40 = vpermpd_avx2(auVar3,0xd8);
      auVar57._4_4_ = uVar14;
      auVar57._0_4_ = uVar14;
      auVar57._8_4_ = uVar14;
      auVar57._12_4_ = uVar14;
      auVar57._16_4_ = uVar14;
      auVar57._20_4_ = uVar14;
      auVar57._24_4_ = uVar14;
      auVar57._28_4_ = uVar14;
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar133 = vpslld_avx2(auVar40,4);
      auVar68._4_4_ = uVar15;
      auVar68._0_4_ = uVar15;
      auVar68._8_4_ = uVar15;
      auVar68._12_4_ = uVar15;
      auVar68._16_4_ = uVar15;
      auVar68._20_4_ = uVar15;
      auVar68._24_4_ = uVar15;
      auVar68._28_4_ = uVar15;
      auVar40 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar132 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
      auVar40 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar137 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2(auVar56 | auVar57,auVar56 | auVar57);
      auVar125 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar76 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar3 = vpcmpeqd_avx2(auVar68 | auVar56,auVar68 | auVar56);
      auVar121 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar61 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      uVar22 = uVar21 & 0xffffffff;
      auVar13 = *(undefined1 (*) [24])(param_4 + uVar22);
      uVar12 = *(undefined8 *)((undefined1 (*) [24])(param_4 + uVar22))[1];
      auVar40 = vsubps_avx(auVar92,auVar132);
      auVar68 = vsubps_avx(auVar137,auVar125);
      auVar111 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar57);
      auVar57 = vsubps_avx(auVar76,auVar121);
      auVar58._0_4_ =
           auVar57._0_4_ * auVar57._0_4_ +
           auVar40._0_4_ * auVar40._0_4_ + auVar68._0_4_ * auVar68._0_4_;
      auVar58._4_4_ =
           auVar57._4_4_ * auVar57._4_4_ +
           auVar40._4_4_ * auVar40._4_4_ + auVar68._4_4_ * auVar68._4_4_;
      auVar58._8_4_ =
           auVar57._8_4_ * auVar57._8_4_ +
           auVar40._8_4_ * auVar40._8_4_ + auVar68._8_4_ * auVar68._8_4_;
      auVar58._12_4_ =
           auVar57._12_4_ * auVar57._12_4_ +
           auVar40._12_4_ * auVar40._12_4_ + auVar68._12_4_ * auVar68._12_4_;
      auVar58._16_4_ =
           auVar57._16_4_ * auVar57._16_4_ +
           auVar40._16_4_ * auVar40._16_4_ + auVar68._16_4_ * auVar68._16_4_;
      auVar58._20_4_ =
           auVar57._20_4_ * auVar57._20_4_ +
           auVar40._20_4_ * auVar40._20_4_ + auVar68._20_4_ * auVar68._20_4_;
      auVar58._24_4_ =
           auVar57._24_4_ * auVar57._24_4_ +
           auVar40._24_4_ * auVar40._24_4_ + auVar68._24_4_ * auVar68._24_4_;
      auVar58._28_4_ =
           auVar57._28_4_ * auVar57._28_4_ +
           auVar40._28_4_ * auVar40._28_4_ + auVar68._28_4_ * auVar68._28_4_;
      auVar112 = vsqrtps_avx(auVar58);
      auVar3._4_4_ = uVar5;
      auVar3._0_4_ = uVar5;
      auVar3._8_4_ = uVar5;
      auVar3._12_4_ = uVar5;
      auVar3._16_4_ = uVar5;
      auVar3._20_4_ = uVar5;
      auVar3._24_4_ = uVar5;
      auVar3._28_4_ = uVar5;
      auVar3 = vcmpps_avx(auVar58,auVar3,1);
      auVar40 = vdivps_avx(auVar40,auVar112);
      auVar68 = vdivps_avx(auVar68,auVar112);
      auVar57 = vdivps_avx(auVar57,auVar112);
      uVar30 = auVar3._0_4_;
      auVar77._0_4_ = ~uVar30 & auVar112._0_4_;
      uVar69 = auVar3._4_4_;
      auVar77._4_4_ = ~uVar69 & auVar112._4_4_;
      uVar70 = auVar3._8_4_;
      auVar77._8_4_ = ~uVar70 & auVar112._8_4_;
      uVar71 = auVar3._12_4_;
      auVar77._12_4_ = ~uVar71 & auVar112._12_4_;
      uVar72 = auVar3._16_4_;
      auVar77._16_4_ = ~uVar72 & auVar112._16_4_;
      uVar73 = auVar3._20_4_;
      auVar77._20_4_ = ~uVar73 & auVar112._20_4_;
      uVar74 = auVar3._24_4_;
      auVar77._24_4_ = ~uVar74 & auVar112._24_4_;
      uVar75 = auVar3._28_4_;
      auVar77._28_4_ = ~uVar75 & auVar112._28_4_;
      auVar112 = vsubps_avx(auVar77,*(undefined1 (*) [32])(param_3 + uVar22));
      fVar6 = auVar61._0_4_;
      fVar110 = auVar111._0_4_;
      fVar63 = auVar61._4_4_;
      fVar113 = auVar111._4_4_;
      fVar8 = auVar61._8_4_;
      fVar114 = auVar111._8_4_;
      fVar64 = auVar61._12_4_;
      fVar115 = auVar111._12_4_;
      fVar9 = auVar61._16_4_;
      fVar116 = auVar111._16_4_;
      fVar65 = auVar61._20_4_;
      fVar117 = auVar111._20_4_;
      fVar102 = auVar61._24_4_;
      fVar118 = auVar111._24_4_;
      fVar103 = auVar61._28_4_;
      fVar119 = auVar111._28_4_;
      local_320 = auVar13._0_4_;
      fStack_31c = auVar13._4_4_;
      fStack_318 = auVar13._8_4_;
      fStack_314 = auVar13._12_4_;
      fStack_310 = auVar13._16_4_;
      fStack_30c = auVar13._20_4_;
      fStack_308 = (float)uVar12;
      fStack_304 = (float)((ulonglong)uVar12 >> 0x20);
      auVar126._0_4_ = auVar112._0_4_ * fVar37 - local_320;
      auVar126._4_4_ = auVar112._4_4_ * fVar42 - fStack_31c;
      auVar126._8_4_ = auVar112._8_4_ * fVar44 - fStack_318;
      auVar126._12_4_ = auVar112._12_4_ * fVar46 - fStack_314;
      auVar126._16_4_ = auVar112._16_4_ * fVar48 - fStack_310;
      auVar126._20_4_ = auVar112._20_4_ * fVar50 - fStack_30c;
      auVar126._24_4_ = auVar112._24_4_ * fVar52 - fStack_308;
      auVar126._28_4_ = auVar112._28_4_ * fVar54 - fStack_304;
      auVar122._4_4_ = fVar7;
      auVar122._0_4_ = fVar7;
      auVar122._8_4_ = fVar7;
      auVar122._12_4_ = fVar7;
      auVar122._16_4_ = fVar7;
      auVar122._20_4_ = fVar7;
      auVar122._24_4_ = fVar7;
      auVar122._28_4_ = fVar7;
      auVar112._0_4_ = (fVar110 + fVar6) * fVar59 + fVar7;
      auVar112._4_4_ = (fVar113 + fVar63) * fVar59 + fVar7;
      auVar112._8_4_ = (fVar114 + fVar8) * fVar59 + fVar7;
      auVar112._12_4_ = (fVar115 + fVar64) * fVar59 + fVar7;
      auVar112._16_4_ = (fVar116 + fVar9) * fVar59 + fVar7;
      auVar112._20_4_ = (fVar117 + fVar65) * fVar59 + fVar7;
      auVar112._24_4_ = (fVar118 + fVar102) * fVar59 + fVar7;
      auVar112._28_4_ = (fVar119 + fVar103) * fVar59 + fVar7;
      auVar112 = vdivps_avx(auVar126,auVar112);
      auVar3 = vblendvps_avx(auVar40,auVar122,auVar3);
      fVar104 = auVar112._0_4_;
      fVar38 = auVar3._0_4_ * fVar104;
      fVar105 = auVar112._4_4_;
      fVar43 = auVar3._4_4_ * fVar105;
      fVar106 = auVar112._8_4_;
      fVar45 = auVar3._8_4_ * fVar106;
      fVar107 = auVar112._12_4_;
      fVar47 = auVar3._12_4_ * fVar107;
      fVar108 = auVar112._16_4_;
      fVar49 = auVar3._16_4_ * fVar108;
      fVar109 = auVar112._20_4_;
      fVar51 = auVar3._20_4_ * fVar109;
      fVar10 = auVar112._24_4_;
      fVar53 = auVar3._24_4_ * fVar10;
      fVar11 = auVar112._28_4_;
      fVar55 = auVar3._28_4_ * fVar11;
      auVar91._0_4_ = fVar6 * fVar38 + auVar92._0_4_;
      auVar91._4_4_ = fVar63 * fVar43 + auVar92._4_4_;
      auVar91._8_4_ = fVar8 * fVar45 + auVar92._8_4_;
      auVar91._12_4_ = fVar64 * fVar47 + auVar92._12_4_;
      auVar41._16_4_ = fVar9 * fVar49 + auVar92._16_4_;
      auVar41._0_16_ = auVar91;
      auVar41._20_4_ = fVar65 * fVar51 + auVar92._20_4_;
      auVar41._24_4_ = fVar102 * fVar53 + auVar92._24_4_;
      auVar41._28_4_ = fVar103 * fVar55 + auVar92._28_4_;
      lVar20 = (longlong)auVar56._0_4_;
      lVar35 = (longlong)auVar56._4_4_;
      *(float *)(param_1 + lVar20) = auVar91._0_4_;
      lVar36 = (longlong)auVar56._8_4_;
      uVar4 = vextractps_avx(auVar91,1);
      *(undefined4 *)(param_1 + lVar35) = uVar4;
      lVar34 = (longlong)auVar56._12_4_;
      uVar4 = vextractps_avx(auVar91,2);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar33 = (longlong)auVar56._16_4_;
      uVar4 = vextractps_avx(auVar91,3);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      auVar60 = auVar41._16_16_;
      lVar18 = (longlong)auVar56._20_4_;
      *(float *)(param_1 + lVar33) = auVar41._16_4_;
      lVar32 = (longlong)auVar56._24_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + lVar18) = uVar4;
      lVar29 = (longlong)auVar56._28_4_;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      fVar90 = (float)(~uVar30 & auVar68._0_4_) * fVar104;
      fVar95 = (float)(~uVar69 & auVar68._4_4_) * fVar105;
      fVar96 = (float)(~uVar70 & auVar68._8_4_) * fVar106;
      fVar97 = (float)(~uVar71 & auVar68._12_4_) * fVar107;
      fVar98 = (float)(~uVar72 & auVar68._16_4_) * fVar108;
      fVar99 = (float)(~uVar73 & auVar68._20_4_) * fVar109;
      fVar100 = (float)(~uVar74 & auVar68._24_4_) * fVar10;
      fVar101 = (float)(~uVar75 & auVar68._28_4_) * fVar11;
      auVar136._0_4_ = fVar6 * fVar90 + auVar137._0_4_;
      auVar136._4_4_ = fVar63 * fVar95 + auVar137._4_4_;
      auVar136._8_4_ = fVar8 * fVar96 + auVar137._8_4_;
      auVar136._12_4_ = fVar64 * fVar97 + auVar137._12_4_;
      auVar92._16_4_ = fVar9 * fVar98 + auVar137._16_4_;
      auVar92._0_16_ = auVar136;
      auVar92._20_4_ = fVar65 * fVar99 + auVar137._20_4_;
      auVar92._24_4_ = fVar102 * fVar100 + auVar137._24_4_;
      auVar92._28_4_ = fVar103 * fVar101 + auVar137._28_4_;
      *(float *)(param_1 + 4 + lVar20) = auVar136._0_4_;
      uVar4 = vextractps_avx(auVar136,1);
      *(undefined4 *)(param_1 + 4 + lVar35) = uVar4;
      uVar4 = vextractps_avx(auVar136,2);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar136,3);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      auVar60 = auVar92._16_16_;
      *(float *)(param_1 + 4 + lVar33) = auVar92._16_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 4 + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar4;
      fVar81 = (float)(~uVar30 & auVar57._0_4_);
      fVar82 = (float)(~uVar69 & auVar57._4_4_);
      fVar83 = (float)(~uVar70 & auVar57._8_4_);
      fVar84 = (float)(~uVar71 & auVar57._12_4_);
      fVar85 = (float)(~uVar72 & auVar57._16_4_);
      fVar86 = (float)(~uVar73 & auVar57._20_4_);
      fVar87 = (float)(~uVar74 & auVar57._24_4_);
      fVar88 = (float)(~uVar75 & auVar57._28_4_);
      in_ZMM5 = ZEXT3264(CONCAT428(fVar88,CONCAT424(fVar87,CONCAT420(fVar86,CONCAT416(fVar85,
                                                  CONCAT412(fVar84,CONCAT48(fVar83,CONCAT44(fVar82,
                                                  fVar81))))))));
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      fVar81 = fVar81 * fVar104;
      fVar82 = fVar82 * fVar105;
      fVar83 = fVar83 * fVar106;
      fVar84 = fVar84 * fVar107;
      fVar85 = fVar85 * fVar108;
      fVar86 = fVar86 * fVar109;
      fVar87 = fVar87 * fVar10;
      fVar88 = fVar88 * fVar11;
      auVar60._0_4_ = fVar6 * fVar81 + auVar76._0_4_;
      auVar60._4_4_ = fVar63 * fVar82 + auVar76._4_4_;
      auVar60._8_4_ = fVar8 * fVar83 + auVar76._8_4_;
      auVar60._12_4_ = fVar64 * fVar84 + auVar76._12_4_;
      auVar40._16_4_ = fVar9 * fVar85 + auVar76._16_4_;
      auVar40._0_16_ = auVar60;
      auVar40._20_4_ = fVar65 * fVar86 + auVar76._20_4_;
      auVar40._24_4_ = fVar102 * fVar87 + auVar76._24_4_;
      auVar40._28_4_ = fVar103 * fVar88 + auVar76._28_4_;
      in_ZMM4 = ZEXT3264(auVar40);
      *(float *)(param_1 + 8 + lVar20) = auVar60._0_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      auVar60 = auVar40._16_16_;
      in_ZMM3 = ZEXT1664(auVar60);
      *(float *)(param_1 + 8 + lVar33) = auVar40._16_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 8 + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      *(float *)(param_1 + 0xc + lVar20) = fVar6;
      auVar60 = auVar61._0_16_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar35) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      auVar60 = auVar61._16_16_;
      *(float *)(param_1 + 0xc + lVar33) = fVar9;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      auVar131._0_4_ = -(fVar110 * fVar38) + auVar132._0_4_;
      auVar131._4_4_ = -(fVar113 * fVar43) + auVar132._4_4_;
      auVar131._8_4_ = -(fVar114 * fVar45) + auVar132._8_4_;
      auVar131._12_4_ = -(fVar115 * fVar47) + auVar132._12_4_;
      auVar76._16_4_ = -(fVar116 * fVar49) + auVar132._16_4_;
      auVar76._0_16_ = auVar131;
      auVar76._20_4_ = -(fVar117 * fVar51) + auVar132._20_4_;
      auVar76._24_4_ = -(fVar118 * fVar53) + auVar132._24_4_;
      auVar76._28_4_ = -(fVar119 * fVar55) + auVar132._28_4_;
      lVar20 = (longlong)auVar133._0_4_;
      *(float *)(param_1 + lVar20) = auVar131._0_4_;
      lVar18 = (longlong)auVar133._4_4_;
      uVar4 = vextractps_avx(auVar131,1);
      *(undefined4 *)(param_1 + lVar18) = uVar4;
      lVar32 = (longlong)auVar133._8_4_;
      uVar4 = vextractps_avx(auVar131,2);
      *(undefined4 *)(param_1 + lVar32) = uVar4;
      lVar29 = (longlong)auVar133._12_4_;
      uVar4 = vextractps_avx(auVar131,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar35 = (longlong)auVar133._16_4_;
      auVar60 = auVar76._16_16_;
      *(float *)(param_1 + lVar35) = auVar76._16_4_;
      lVar36 = (longlong)auVar133._20_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar33 = (longlong)auVar133._24_4_;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + lVar33) = uVar4;
      lVar34 = (longlong)auVar133._28_4_;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      auVar124._0_4_ = -(fVar110 * fVar90) + auVar125._0_4_;
      auVar124._4_4_ = -(fVar113 * fVar95) + auVar125._4_4_;
      auVar124._8_4_ = -(fVar114 * fVar96) + auVar125._8_4_;
      auVar124._12_4_ = -(fVar115 * fVar97) + auVar125._12_4_;
      auVar61._16_4_ = -(fVar116 * fVar98) + auVar125._16_4_;
      auVar61._0_16_ = auVar124;
      auVar61._20_4_ = -(fVar117 * fVar99) + auVar125._20_4_;
      auVar61._24_4_ = -(fVar118 * fVar100) + auVar125._24_4_;
      auVar61._28_4_ = -(fVar119 * fVar101) + auVar125._28_4_;
      *(float *)(param_1 + 4 + lVar20) = auVar124._0_4_;
      uVar4 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + 4 + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      auVar60 = auVar61._16_16_;
      *(float *)(param_1 + 4 + lVar35) = auVar61._16_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      auVar120._0_4_ = -(fVar110 * fVar81) + auVar121._0_4_;
      auVar120._4_4_ = -(fVar113 * fVar82) + auVar121._4_4_;
      auVar120._8_4_ = -(fVar114 * fVar83) + auVar121._8_4_;
      auVar120._12_4_ = -(fVar115 * fVar84) + auVar121._12_4_;
      auVar56._16_4_ = -(fVar116 * fVar85) + auVar121._16_4_;
      auVar56._0_16_ = auVar120;
      auVar56._20_4_ = -(fVar117 * fVar86) + auVar121._20_4_;
      auVar56._24_4_ = -(fVar118 * fVar87) + auVar121._24_4_;
      auVar56._28_4_ = -(fVar119 * fVar88) + auVar121._28_4_;
      *(float *)(param_1 + 8 + lVar20) = auVar120._0_4_;
      uVar4 = vextractps_avx(auVar120,1);
      *(undefined4 *)(param_1 + 8 + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar120,2);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar120,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      auVar60 = auVar56._16_16_;
      *(float *)(param_1 + 8 + lVar35) = auVar56._16_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      pfVar1 = (float *)(param_4 + uVar22);
      *pfVar1 = fVar104 + local_320;
      pfVar1[1] = fVar105 + fStack_31c;
      pfVar1[2] = fVar106 + fStack_318;
      pfVar1[3] = fVar107 + fStack_314;
      pfVar1[4] = fVar108 + fStack_310;
      pfVar1[5] = fVar109 + fStack_30c;
      pfVar1[6] = fVar10 + fStack_308;
      pfVar1[7] = fVar11 + fStack_304;
      *(float *)(param_1 + 0xc + lVar20) = fVar110;
      auVar60 = auVar111._0_16_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      auVar60 = auVar111._16_16_;
      *(float *)(param_1 + 0xc + lVar35) = fVar116;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      uVar21 = uVar21 + 0x20;
      uVar30 = (int)uVar31 + 8;
      uVar31 = (ulonglong)uVar30;
    } while ((int)uVar30 < (int)(uVar16 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar30) {
      return;
    }
  }
  iVar17 = (int)uVar31;
  auVar111._4_4_ = iVar17;
  auVar111._0_4_ = iVar17;
  auVar111._8_4_ = iVar17;
  auVar111._12_4_ = iVar17;
  auVar111._16_4_ = iVar17;
  auVar111._20_4_ = iVar17;
  auVar111._24_4_ = iVar17;
  auVar111._28_4_ = iVar17;
  auVar3 = vpor_avx2(auVar111,
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar121._4_4_ = param_7;
  auVar121._0_4_ = param_7;
  auVar121._8_4_ = param_7;
  auVar121._12_4_ = param_7;
  auVar121._16_4_ = param_7;
  auVar121._20_4_ = param_7;
  auVar121._24_4_ = param_7;
  auVar121._28_4_ = param_7;
  auVar3 = vpcmpgtd_avx2(auVar121,auVar3);
  pauVar2 = (undefined1 (*) [32])(param_2 + uVar31 * 8);
  uVar16 = vmovmskps_avx(auVar3);
  if (uVar16 == 0xff) {
    auVar40 = *pauVar2;
    auVar68 = pauVar2[1];
    auVar57 = vshufps_avx(auVar40,auVar68,0x88);
    auVar57 = vpermpd_avx2(auVar57,0xd8);
    auVar40 = vshufps_avx(auVar40,auVar68,0xdd);
    auVar40 = vpermpd_avx2(auVar40,0xd8);
  }
  else {
    auVar57 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
    auVar40 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  }
  auVar111 = vpslld_avx2(auVar57,4);
  auVar68 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  auVar57 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
  auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
  auVar121 = vgatherdps(ZEXT832(0),auVar3);
  auVar41 = vpslld_avx2(auVar40,4);
  auVar122 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar126 = vgatherdps(ZEXT832(0),auVar3);
  auVar77 = vgatherdps(ZEXT432(0) << 0x20,auVar3);
  auVar58 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar40 = vmaskmovps_avx(auVar3,auVar68);
  auVar68 = vmaskmovps_avx(auVar3,auVar57);
  auVar57 = vmaskmovps_avx(auVar3,auVar112);
  auVar112 = vmaskmovps_avx(auVar3,auVar122);
  auVar122 = vmaskmovps_avx(auVar3,auVar126);
  auVar77 = vmaskmovps_avx(auVar3,auVar77);
  auVar126 = vsubps_avx(auVar40,auVar112);
  auVar61 = vsubps_avx(auVar68,auVar122);
  auVar92 = vsubps_avx(auVar57,auVar77);
  auVar134._0_4_ =
       auVar92._0_4_ * auVar92._0_4_ +
       auVar126._0_4_ * auVar126._0_4_ + auVar61._0_4_ * auVar61._0_4_;
  auVar134._4_4_ =
       auVar92._4_4_ * auVar92._4_4_ +
       auVar126._4_4_ * auVar126._4_4_ + auVar61._4_4_ * auVar61._4_4_;
  auVar134._8_4_ =
       auVar92._8_4_ * auVar92._8_4_ +
       auVar126._8_4_ * auVar126._8_4_ + auVar61._8_4_ * auVar61._8_4_;
  auVar134._12_4_ =
       auVar92._12_4_ * auVar92._12_4_ +
       auVar126._12_4_ * auVar126._12_4_ + auVar61._12_4_ * auVar61._12_4_;
  auVar134._16_4_ =
       auVar92._16_4_ * auVar92._16_4_ +
       auVar126._16_4_ * auVar126._16_4_ + auVar61._16_4_ * auVar61._16_4_;
  auVar134._20_4_ =
       auVar92._20_4_ * auVar92._20_4_ +
       auVar126._20_4_ * auVar126._20_4_ + auVar61._20_4_ * auVar61._20_4_;
  auVar134._24_4_ =
       auVar92._24_4_ * auVar92._24_4_ +
       auVar126._24_4_ * auVar126._24_4_ + auVar61._24_4_ * auVar61._24_4_;
  auVar134._28_4_ =
       auVar92._28_4_ * auVar92._28_4_ +
       auVar126._28_4_ * auVar126._28_4_ + auVar61._28_4_ * auVar61._28_4_;
  auVar76 = vsqrtps_avx(auVar134);
  auVar126 = vdivps_avx(auVar126,auVar76);
  auVar125._4_4_ = __real_38d1b717;
  auVar125._0_4_ = __real_38d1b717;
  auVar125._8_4_ = __real_38d1b717;
  auVar125._12_4_ = __real_38d1b717;
  auVar125._16_4_ = __real_38d1b717;
  auVar125._20_4_ = __real_38d1b717;
  auVar125._24_4_ = __real_38d1b717;
  auVar125._28_4_ = __real_38d1b717;
  auVar56 = vcmpps_avx(auVar134,auVar125,1);
  auVar135._4_4_ = __real_3f800000;
  auVar135._0_4_ = __real_3f800000;
  auVar135._8_4_ = __real_3f800000;
  auVar135._12_4_ = __real_3f800000;
  auVar135._16_4_ = __real_3f800000;
  auVar135._20_4_ = __real_3f800000;
  auVar135._24_4_ = __real_3f800000;
  auVar135._28_4_ = __real_3f800000;
  auVar126 = vblendvps_avx(auVar126,auVar135,auVar56);
  auVar126 = vmaskmovps_avx(auVar3,auVar126);
  auVar61 = vdivps_avx(auVar61,auVar76);
  uVar30 = auVar56._0_4_;
  auVar137._0_4_ = ~uVar30 & auVar61._0_4_;
  uVar69 = auVar56._4_4_;
  auVar137._4_4_ = ~uVar69 & auVar61._4_4_;
  uVar70 = auVar56._8_4_;
  auVar137._8_4_ = ~uVar70 & auVar61._8_4_;
  uVar71 = auVar56._12_4_;
  auVar137._12_4_ = ~uVar71 & auVar61._12_4_;
  uVar72 = auVar56._16_4_;
  auVar137._16_4_ = ~uVar72 & auVar61._16_4_;
  uVar73 = auVar56._20_4_;
  auVar137._20_4_ = ~uVar73 & auVar61._20_4_;
  uVar74 = auVar56._24_4_;
  auVar137._24_4_ = ~uVar74 & auVar61._24_4_;
  uVar75 = auVar56._28_4_;
  auVar137._28_4_ = ~uVar75 & auVar61._28_4_;
  auVar56 = vmaskmovps_avx(auVar3,auVar137);
  auVar61 = vdivps_avx(auVar92,auVar76);
  auVar78._0_4_ = ~uVar30 & auVar61._0_4_;
  auVar78._4_4_ = ~uVar69 & auVar61._4_4_;
  auVar78._8_4_ = ~uVar70 & auVar61._8_4_;
  auVar78._12_4_ = ~uVar71 & auVar61._12_4_;
  auVar78._16_4_ = ~uVar72 & auVar61._16_4_;
  auVar78._20_4_ = ~uVar73 & auVar61._20_4_;
  auVar78._24_4_ = ~uVar74 & auVar61._24_4_;
  auVar78._28_4_ = ~uVar75 & auVar61._28_4_;
  auVar61 = vmaskmovps_avx(auVar3,auVar78);
  lVar18 = (longlong)(iVar17 << 2);
  auVar132._0_4_ = ~uVar30 & auVar76._0_4_;
  auVar132._4_4_ = ~uVar69 & auVar76._4_4_;
  auVar132._8_4_ = ~uVar70 & auVar76._8_4_;
  auVar132._12_4_ = ~uVar71 & auVar76._12_4_;
  auVar132._16_4_ = ~uVar72 & auVar76._16_4_;
  auVar132._20_4_ = ~uVar73 & auVar76._20_4_;
  auVar132._24_4_ = ~uVar74 & auVar76._24_4_;
  auVar132._28_4_ = ~uVar75 & auVar76._28_4_;
  auVar76 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_3 + lVar18));
  auVar76 = vsubps_avx(auVar132,auVar76);
  param_5 = param_5 * param_6 * param_5;
  fVar7 = auVar58._0_4_;
  fVar102 = auVar121._0_4_;
  fVar37 = auVar58._4_4_;
  fVar103 = auVar121._4_4_;
  fVar44 = auVar58._8_4_;
  fVar104 = auVar121._8_4_;
  fVar48 = auVar58._12_4_;
  fVar105 = auVar121._12_4_;
  fVar52 = auVar58._16_4_;
  fVar106 = auVar121._16_4_;
  fVar6 = auVar58._20_4_;
  fVar107 = auVar121._20_4_;
  fVar8 = auVar58._24_4_;
  fVar108 = auVar121._24_4_;
  fVar9 = auVar58._28_4_;
  fVar109 = auVar121._28_4_;
  auVar93._0_4_ = param_5 * (fVar102 + fVar7) + __real_3f800000;
  auVar93._4_4_ = param_5 * (fVar103 + fVar37) + __real_3f800000;
  auVar93._8_4_ = param_5 * (fVar104 + fVar44) + __real_3f800000;
  auVar93._12_4_ = param_5 * (fVar105 + fVar48) + __real_3f800000;
  auVar93._16_4_ = param_5 * (fVar106 + fVar52) + __real_3f800000;
  auVar93._20_4_ = param_5 * (fVar107 + fVar6) + __real_3f800000;
  auVar93._24_4_ = param_5 * (fVar108 + fVar8) + __real_3f800000;
  auVar93._28_4_ = param_5 * (fVar109 + fVar9) + __real_3f800000;
  auVar92 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_4 + lVar18));
  auVar133._0_4_ = -(param_5 * auVar76._0_4_) - auVar92._0_4_;
  auVar133._4_4_ = -(param_5 * auVar76._4_4_) - auVar92._4_4_;
  auVar133._8_4_ = -(param_5 * auVar76._8_4_) - auVar92._8_4_;
  auVar133._12_4_ = -(param_5 * auVar76._12_4_) - auVar92._12_4_;
  auVar133._16_4_ = -(param_5 * auVar76._16_4_) - auVar92._16_4_;
  auVar133._20_4_ = -(param_5 * auVar76._20_4_) - auVar92._20_4_;
  auVar133._24_4_ = -(param_5 * auVar76._24_4_) - auVar92._24_4_;
  auVar133._28_4_ = -(param_5 * auVar76._28_4_) - auVar92._28_4_;
  auVar76 = vdivps_avx(auVar133,auVar93);
  fVar59 = auVar76._0_4_;
  auVar79._0_4_ = auVar92._0_4_ + fVar59;
  fVar42 = auVar76._4_4_;
  auVar79._4_4_ = auVar92._4_4_ + fVar42;
  fVar46 = auVar76._8_4_;
  auVar79._8_4_ = auVar92._8_4_ + fVar46;
  fVar50 = auVar76._12_4_;
  auVar79._12_4_ = auVar92._12_4_ + fVar50;
  fVar54 = auVar76._16_4_;
  auVar79._16_4_ = auVar92._16_4_ + fVar54;
  fVar63 = auVar76._20_4_;
  auVar79._20_4_ = auVar92._20_4_ + fVar63;
  fVar64 = auVar76._24_4_;
  auVar79._24_4_ = auVar92._24_4_ + fVar64;
  fVar65 = auVar76._28_4_;
  auVar79._28_4_ = auVar92._28_4_ + fVar65;
  auVar3 = vmaskmovps_avx(auVar3,auVar79);
  *(undefined1 (*) [32])(param_4 + lVar18) = auVar3;
  local_300 = auVar126._0_4_;
  fStack_2fc = auVar126._4_4_;
  fStack_2f8 = auVar126._8_4_;
  fStack_2f4 = auVar126._12_4_;
  fStack_2f0 = auVar126._16_4_;
  fStack_2ec = auVar126._20_4_;
  fStack_2e8 = auVar126._24_4_;
  fStack_2e4 = auVar126._28_4_;
  local_300 = fVar59 * local_300;
  fStack_2fc = fVar42 * fStack_2fc;
  fStack_2f8 = fVar46 * fStack_2f8;
  fStack_2f4 = fVar50 * fStack_2f4;
  fStack_2f0 = fVar54 * fStack_2f0;
  fStack_2ec = fVar63 * fStack_2ec;
  fStack_2e8 = fVar64 * fStack_2e8;
  fStack_2e4 = fVar65 * fStack_2e4;
  local_2e0 = auVar56._0_4_;
  fStack_2dc = auVar56._4_4_;
  fStack_2d8 = auVar56._8_4_;
  fStack_2d4 = auVar56._12_4_;
  fStack_2d0 = auVar56._16_4_;
  fStack_2cc = auVar56._20_4_;
  fStack_2c8 = auVar56._24_4_;
  fStack_2c4 = auVar56._28_4_;
  local_2e0 = fVar59 * local_2e0;
  fStack_2dc = fVar42 * fStack_2dc;
  fStack_2d8 = fVar46 * fStack_2d8;
  fStack_2d4 = fVar50 * fStack_2d4;
  fStack_2d0 = fVar54 * fStack_2d0;
  fStack_2cc = fVar63 * fStack_2cc;
  fStack_2c8 = fVar64 * fStack_2c8;
  fStack_2c4 = fVar65 * fStack_2c4;
  local_2c0 = auVar61._0_4_;
  fStack_2bc = auVar61._4_4_;
  fStack_2b8 = auVar61._8_4_;
  fStack_2b4 = auVar61._12_4_;
  fStack_2b0 = auVar61._16_4_;
  fStack_2ac = auVar61._20_4_;
  fStack_2a8 = auVar61._24_4_;
  fStack_2a4 = auVar61._28_4_;
  fVar59 = fVar59 * local_2c0;
  fVar42 = fVar42 * fStack_2bc;
  fVar46 = fVar46 * fStack_2b8;
  fVar50 = fVar50 * fStack_2b4;
  fVar54 = fVar54 * fStack_2b0;
  fVar63 = fVar63 * fStack_2ac;
  fVar64 = fVar64 * fStack_2a8;
  fVar65 = fVar65 * fStack_2a4;
  auVar128._0_4_ = fVar102 * local_300 + auVar40._0_4_;
  auVar128._4_4_ = fVar103 * fStack_2fc + auVar40._4_4_;
  auVar128._8_4_ = fVar104 * fStack_2f8 + auVar40._8_4_;
  auVar128._12_4_ = fVar105 * fStack_2f4 + auVar40._12_4_;
  auVar129._16_4_ = fVar106 * fStack_2f0 + auVar40._16_4_;
  auVar129._0_16_ = auVar128;
  auVar129._20_4_ = fVar107 * fStack_2ec + auVar40._20_4_;
  auVar129._24_4_ = fVar108 * fStack_2e8 + auVar40._24_4_;
  auVar129._28_4_ = fVar109 * fStack_2e4 + auVar40._28_4_;
  cVar19 = (char)uVar16;
  iVar89 = auVar111._0_4_;
  auVar124 = auVar111._16_16_;
  iVar39 = auVar41._0_4_;
  auVar60 = auVar41._16_16_;
  auVar91 = auVar58._0_16_;
  auVar120 = auVar58._16_16_;
  auVar131 = auVar121._0_16_;
  auVar136 = auVar121._16_16_;
  auVar130 = auVar129._16_16_;
  iVar17 = auVar111._4_4_;
  iVar23 = auVar111._8_4_;
  iVar24 = auVar111._12_4_;
  iVar25 = auVar41._4_4_;
  iVar26 = auVar41._8_4_;
  iVar27 = auVar41._12_4_;
  local_320 = auVar77._0_4_;
  fStack_31c = auVar77._4_4_;
  fStack_318 = auVar77._8_4_;
  fStack_314 = auVar77._12_4_;
  fStack_310 = auVar77._16_4_;
  fStack_30c = auVar77._20_4_;
  fStack_308 = auVar77._24_4_;
  fStack_304 = auVar77._28_4_;
  iVar66 = auVar111._16_4_;
  iVar67 = auVar41._16_4_;
  if ((uVar16 & 1) != 0) {
    *(float *)(param_1 + iVar89) = auVar128._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + iVar17) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + iVar23) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + iVar24) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(float *)(param_1 + iVar66) = auVar129._16_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar124,1);
    uVar5 = vextractps_avx(auVar130,1);
    *(undefined4 *)(param_1 + iVar28) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar124,2);
    uVar5 = vextractps_avx(auVar130,2);
    *(undefined4 *)(param_1 + iVar28) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar28 = vextractps_avx(auVar124,3);
    uVar5 = vextractps_avx(auVar130,3);
    *(undefined4 *)(param_1 + iVar28) = uVar5;
    auVar127._0_4_ = fVar102 * local_2e0 + auVar68._0_4_;
    auVar127._4_4_ = fVar103 * fStack_2dc + auVar68._4_4_;
    auVar127._8_4_ = fVar104 * fStack_2d8 + auVar68._8_4_;
    auVar127._12_4_ = fVar105 * fStack_2d4 + auVar68._12_4_;
    auVar127._16_4_ = fVar106 * fStack_2d0 + auVar68._16_4_;
    auVar127._20_4_ = fVar107 * fStack_2cc + auVar68._20_4_;
    auVar127._24_4_ = fVar108 * fStack_2c8 + auVar68._24_4_;
    auVar127._28_4_ = fVar109 * fStack_2c4 + auVar68._28_4_;
  }
  else {
    auVar127._0_4_ = fVar102 * local_2e0 + auVar68._0_4_;
    auVar127._4_4_ = fVar103 * fStack_2dc + auVar68._4_4_;
    auVar127._8_4_ = fVar104 * fStack_2d8 + auVar68._8_4_;
    auVar127._12_4_ = fVar105 * fStack_2d4 + auVar68._12_4_;
    auVar127._16_4_ = fVar106 * fStack_2d0 + auVar68._16_4_;
    auVar127._20_4_ = fVar107 * fStack_2cc + auVar68._20_4_;
    auVar127._24_4_ = fVar108 * fStack_2c8 + auVar68._24_4_;
    auVar127._28_4_ = fVar109 * fStack_2c4 + auVar68._28_4_;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar89) = auVar127._0_4_;
  }
  auVar128 = auVar127._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar66) = auVar127._16_4_;
  }
  auVar128 = auVar127._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar124,1);
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar124,2);
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar28 = vextractps_avx(auVar124,3);
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar5;
    auVar123._0_4_ = fVar102 * fVar59 + auVar57._0_4_;
    auVar123._4_4_ = fVar103 * fVar42 + auVar57._4_4_;
    auVar123._8_4_ = fVar104 * fVar46 + auVar57._8_4_;
    auVar123._12_4_ = fVar105 * fVar50 + auVar57._12_4_;
    auVar123._16_4_ = fVar106 * fVar54 + auVar57._16_4_;
    auVar123._20_4_ = fVar107 * fVar63 + auVar57._20_4_;
    auVar123._24_4_ = fVar108 * fVar64 + auVar57._24_4_;
    auVar123._28_4_ = fVar109 * fVar65 + auVar57._28_4_;
  }
  else {
    auVar123._0_4_ = fVar102 * fVar59 + auVar57._0_4_;
    auVar123._4_4_ = fVar103 * fVar42 + auVar57._4_4_;
    auVar123._8_4_ = fVar104 * fVar46 + auVar57._8_4_;
    auVar123._12_4_ = fVar105 * fVar50 + auVar57._12_4_;
    auVar123._16_4_ = fVar106 * fVar54 + auVar57._16_4_;
    auVar123._20_4_ = fVar107 * fVar63 + auVar57._20_4_;
    auVar123._24_4_ = fVar108 * fVar64 + auVar57._24_4_;
    auVar123._28_4_ = fVar109 * fVar65 + auVar57._28_4_;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar89) = auVar123._0_4_;
  }
  auVar128 = auVar123._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar66) = auVar123._16_4_;
  }
  auVar128 = auVar123._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar124,1);
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar124,2);
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar28 = vextractps_avx(auVar124,3);
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar5;
  }
  if ((uVar16 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar89) = fVar102;
  }
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar106;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar124,1);
    uVar5 = vextractps_avx(auVar136,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar124,2);
    uVar5 = vextractps_avx(auVar136,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar124,3);
    uVar5 = vextractps_avx(auVar136,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
    auVar94._0_4_ = -(fVar7 * local_300) + auVar112._0_4_;
    auVar94._4_4_ = -(fVar37 * fStack_2fc) + auVar112._4_4_;
    auVar94._8_4_ = -(fVar44 * fStack_2f8) + auVar112._8_4_;
    auVar94._12_4_ = -(fVar48 * fStack_2f4) + auVar112._12_4_;
    auVar94._16_4_ = -(fVar52 * fStack_2f0) + auVar112._16_4_;
    auVar94._20_4_ = -(fVar6 * fStack_2ec) + auVar112._20_4_;
    auVar94._24_4_ = -(fVar8 * fStack_2e8) + auVar112._24_4_;
    auVar94._28_4_ = -(fVar9 * fStack_2e4) + auVar112._28_4_;
  }
  else {
    auVar94._0_4_ = -(fVar7 * local_300) + auVar112._0_4_;
    auVar94._4_4_ = -(fVar37 * fStack_2fc) + auVar112._4_4_;
    auVar94._8_4_ = -(fVar44 * fStack_2f8) + auVar112._8_4_;
    auVar94._12_4_ = -(fVar48 * fStack_2f4) + auVar112._12_4_;
    auVar94._16_4_ = -(fVar52 * fStack_2f0) + auVar112._16_4_;
    auVar94._20_4_ = -(fVar6 * fStack_2ec) + auVar112._20_4_;
    auVar94._24_4_ = -(fVar8 * fStack_2e8) + auVar112._24_4_;
    auVar94._28_4_ = -(fVar9 * fStack_2e4) + auVar112._28_4_;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + iVar39) = auVar94._0_4_;
  }
  auVar124 = auVar94._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + iVar25) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + iVar26) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + iVar27) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + iVar67) = auVar94._16_4_;
  }
  auVar124 = auVar94._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar60,1);
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar60,2);
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar60,3);
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + iVar17) = uVar5;
    auVar80._0_4_ = -(fVar7 * local_2e0) + auVar122._0_4_;
    auVar80._4_4_ = -(fVar37 * fStack_2dc) + auVar122._4_4_;
    auVar80._8_4_ = -(fVar44 * fStack_2d8) + auVar122._8_4_;
    auVar80._12_4_ = -(fVar48 * fStack_2d4) + auVar122._12_4_;
    auVar80._16_4_ = -(fVar52 * fStack_2d0) + auVar122._16_4_;
    auVar80._20_4_ = -(fVar6 * fStack_2cc) + auVar122._20_4_;
    auVar80._24_4_ = -(fVar8 * fStack_2c8) + auVar122._24_4_;
    auVar80._28_4_ = -(fVar9 * fStack_2c4) + auVar122._28_4_;
  }
  else {
    auVar80._0_4_ = -(fVar7 * local_2e0) + auVar122._0_4_;
    auVar80._4_4_ = -(fVar37 * fStack_2dc) + auVar122._4_4_;
    auVar80._8_4_ = -(fVar44 * fStack_2d8) + auVar122._8_4_;
    auVar80._12_4_ = -(fVar48 * fStack_2d4) + auVar122._12_4_;
    auVar80._16_4_ = -(fVar52 * fStack_2d0) + auVar122._16_4_;
    auVar80._20_4_ = -(fVar6 * fStack_2cc) + auVar122._20_4_;
    auVar80._24_4_ = -(fVar8 * fStack_2c8) + auVar122._24_4_;
    auVar80._28_4_ = -(fVar9 * fStack_2c4) + auVar122._28_4_;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar39) = auVar80._0_4_;
  }
  auVar124 = auVar80._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar67) = auVar80._16_4_;
  }
  auVar124 = auVar80._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar60,1);
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar60,2);
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar60,3);
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar5;
    auVar62._0_4_ = -(fVar7 * fVar59) + local_320;
    auVar62._4_4_ = -(fVar37 * fVar42) + fStack_31c;
    auVar62._8_4_ = -(fVar44 * fVar46) + fStack_318;
    auVar62._12_4_ = -(fVar48 * fVar50) + fStack_314;
    auVar62._16_4_ = -(fVar52 * fVar54) + fStack_310;
    auVar62._20_4_ = -(fVar6 * fVar63) + fStack_30c;
    auVar62._24_4_ = -(fVar8 * fVar64) + fStack_308;
    auVar62._28_4_ = -(fVar9 * fVar65) + fStack_304;
  }
  else {
    auVar62._0_4_ = -(fVar7 * fVar59) + local_320;
    auVar62._4_4_ = -(fVar37 * fVar42) + fStack_31c;
    auVar62._8_4_ = -(fVar44 * fVar46) + fStack_318;
    auVar62._12_4_ = -(fVar48 * fVar50) + fStack_314;
    auVar62._16_4_ = -(fVar52 * fVar54) + fStack_310;
    auVar62._20_4_ = -(fVar6 * fVar63) + fStack_30c;
    auVar62._24_4_ = -(fVar8 * fVar64) + fStack_308;
    auVar62._28_4_ = -(fVar9 * fVar65) + fStack_304;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar39) = auVar62._0_4_;
  }
  auVar124 = auVar62._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar67) = auVar62._16_4_;
  }
  auVar124 = auVar62._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar60,1);
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar60,2);
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar60,3);
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar39) = fVar7;
  }
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar91,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar91,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar91,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar67) = fVar52;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar60,1);
    uVar5 = vextractps_avx(auVar120,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar60,2);
    uVar5 = vextractps_avx(auVar120,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar60,3);
    uVar5 = vextractps_avx(auVar120,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithDamping___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_avx2 @ 14090f820

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDamping___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,float param_7,float param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [32];
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [32];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  char cVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar55 [32];
  float fVar63;
  float fVar70;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar68;
  float fVar69;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar66 [32];
  float fVar74;
  undefined1 auVar67 [32];
  float fVar75;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar76 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  float fVar106;
  undefined1 auVar107 [32];
  float fVar115;
  undefined1 auVar108 [32];
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 in_ZMM10 [64];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  float fVar119;
  float fVar128;
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 in_ZMM12 [64];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [16];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  float local_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  float local_520;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float local_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float local_4e0;
  float fStack_4dc;
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
  int local_400;
  int iStack_3fc;
  int iStack_3f8;
  int iStack_3f4;
  int iStack_3f0;
  int iStack_3ec;
  int iStack_3e8;
  int iStack_3e4;
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
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
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
  undefined1 auVar138 [32];
  
  uVar18 = __real_0000000c;
  iVar17 = __real_00000008;
  iVar27 = __real_00000004;
  fVar6 = __real_3f800000;
  uVar16 = __real_38d1b717;
  uVar5 = __real_322bcc77;
  uVar19 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar19 = param_9;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar28 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar40 = param_6 * param_7 * param_6;
    fVar35 = param_8 + param_8;
    fVar34 = (float)((uint)fVar40 ^ __real_80000000);
    fVar39 = (float)((uint)fVar40 ^ __real_80000000);
    fVar41 = (float)((uint)fVar40 ^ __real_80000000);
    fVar42 = (float)((uint)fVar40 ^ __real_80000000);
    fVar43 = (float)((uint)fVar40 ^ __real_80000000);
    fVar44 = (float)((uint)fVar40 ^ __real_80000000);
    fVar45 = (float)((uint)fVar40 ^ __real_80000000);
    fVar46 = (float)((uint)fVar40 ^ __real_80000000);
    uVar28 = 0;
    uVar23 = 0;
    do {
      auVar3 = *(undefined1 (*) [32])(param_3 + uVar23 * 2);
      auVar55 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar23 * 2);
      auVar116 = vshufps_avx(auVar3,auVar55,0x88);
      auVar133 = vpermpd_avx2(auVar116,0xd8);
      auVar3 = vshufps_avx(auVar3,auVar55,0xdd);
      auVar120 = vpermpd_avx2(auVar3,0xd8);
      auVar37 = vpslld_avx2(auVar133,4);
      auVar3 = vpcmpeqd_avx2(auVar116,auVar116);
      auVar77._4_4_ = iVar27;
      auVar77._0_4_ = iVar27;
      auVar77._8_4_ = iVar27;
      auVar77._12_4_ = iVar27;
      auVar77._16_4_ = iVar27;
      auVar77._20_4_ = iVar27;
      auVar77._24_4_ = iVar27;
      auVar77._28_4_ = iVar27;
      vpor_avx2(auVar77,auVar37);
      auVar49._4_4_ = iVar17;
      auVar49._0_4_ = iVar17;
      auVar49._8_4_ = iVar17;
      auVar49._12_4_ = iVar17;
      auVar49._16_4_ = iVar17;
      auVar49._20_4_ = iVar17;
      auVar49._24_4_ = iVar17;
      auVar49._28_4_ = iVar17;
      vpor_avx2(auVar37,auVar49);
      auVar55 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
      auVar130._4_4_ = uVar18;
      auVar130._0_4_ = uVar18;
      auVar130._8_4_ = uVar18;
      auVar130._12_4_ = uVar18;
      auVar130._16_4_ = uVar18;
      auVar130._20_4_ = uVar18;
      auVar130._24_4_ = uVar18;
      auVar130._28_4_ = uVar18;
      auVar66 = vpor_avx2(auVar37,auVar130);
      auVar116 = vpcmpeqd_avx2(in_ZMM12._0_32_,in_ZMM12._0_32_);
      auVar102 = vpslld_avx2(auVar120,4);
      auVar77 = vpor_avx2(auVar102,auVar77);
      auVar87 = vpcmpeqd_avx2(in_ZMM14._0_32_,in_ZMM14._0_32_);
      auVar136 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      vpor_avx2(auVar102,auVar49);
      auVar3 = vpcmpeqd_avx2(auVar49,auVar49);
      auVar47 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar55);
      vpor_avx2(auVar102,auVar130);
      auVar38 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar116);
      auVar55 = vpcmpeqd_avx2(auVar66,auVar66);
      auVar97 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar87);
      auVar48 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar3 = vpcmpeqd_avx2(auVar77,auVar77);
      auVar103 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar55);
      auVar66 = vgatherdps(ZEXT832(0),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar49 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar116 = vpmulld_avx2(auVar133,auVar130);
      auVar55 = vpcmpeqd_avx2(auVar133,auVar133);
      auVar3._0_4_ = iVar27 + auVar116._0_4_;
      auVar3._4_4_ = iVar27 + auVar116._4_4_;
      auVar3._8_4_ = iVar27 + auVar116._8_4_;
      auVar3._12_4_ = iVar27 + auVar116._12_4_;
      auVar3._16_4_ = iVar27 + auVar116._16_4_;
      auVar3._20_4_ = iVar27 + auVar116._20_4_;
      auVar3._24_4_ = iVar27 + auVar116._24_4_;
      auVar3._28_4_ = iVar27 + auVar116._28_4_;
      auVar107 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar55);
      auVar3 = vpcmpeqd_avx2(auVar3,auVar3);
      auVar50 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar116 = vpmulld_avx2(auVar120,auVar130);
      auVar3 = vpcmpeqd_avx2(auVar120,auVar120);
      auVar55._0_4_ = iVar17 + auVar116._0_4_;
      auVar55._4_4_ = iVar17 + auVar116._4_4_;
      auVar55._8_4_ = iVar17 + auVar116._8_4_;
      auVar55._12_4_ = iVar17 + auVar116._12_4_;
      auVar55._16_4_ = iVar17 + auVar116._16_4_;
      auVar55._20_4_ = iVar17 + auVar116._20_4_;
      auVar55._24_4_ = iVar17 + auVar116._24_4_;
      auVar55._28_4_ = iVar17 + auVar116._28_4_;
      auVar129 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar51 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar3 = vpcmpeqd_avx2(auVar55,auVar55);
      auVar132 = vgatherdps(ZEXT832(0),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar137 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
      uVar20 = uVar23 & 0xffffffff;
      auVar3 = *(undefined1 (*) [32])(param_4 + uVar20);
      auVar7._4_4_ = fVar6;
      auVar7._0_4_ = fVar6;
      auVar7._8_4_ = fVar6;
      auVar7._12_4_ = fVar6;
      auVar7._16_4_ = fVar6;
      auVar7._20_4_ = fVar6;
      auVar7._24_4_ = fVar6;
      auVar7._28_4_ = fVar6;
      auVar116 = vdivps_avx(auVar7,auVar3);
      auVar87._4_4_ = uVar5;
      auVar87._0_4_ = uVar5;
      auVar87._8_4_ = uVar5;
      auVar87._12_4_ = uVar5;
      auVar87._16_4_ = uVar5;
      auVar87._20_4_ = uVar5;
      auVar87._24_4_ = uVar5;
      auVar87._28_4_ = uVar5;
      auVar55 = vcmpps_avx(auVar3,auVar87,1);
      auVar55 = vblendvps_avx(auVar116,auVar7,auVar55);
      auVar116 = vsubps_avx(auVar136,auVar97);
      auVar87 = vsubps_avx(auVar132,auVar137);
      auVar66 = vsubps_avx(auVar132,auVar66);
      auVar77 = vsubps_avx(auVar47,auVar48);
      auVar78._0_4_ =
           auVar77._0_4_ * auVar77._0_4_ +
           auVar87._0_4_ * auVar87._0_4_ + auVar116._0_4_ * auVar116._0_4_;
      auVar78._4_4_ =
           auVar77._4_4_ * auVar77._4_4_ +
           auVar87._4_4_ * auVar87._4_4_ + auVar116._4_4_ * auVar116._4_4_;
      auVar78._8_4_ =
           auVar77._8_4_ * auVar77._8_4_ +
           auVar87._8_4_ * auVar87._8_4_ + auVar116._8_4_ * auVar116._8_4_;
      auVar78._12_4_ =
           auVar77._12_4_ * auVar77._12_4_ +
           auVar87._12_4_ * auVar87._12_4_ + auVar116._12_4_ * auVar116._12_4_;
      auVar78._16_4_ =
           auVar77._16_4_ * auVar77._16_4_ +
           auVar87._16_4_ * auVar87._16_4_ + auVar116._16_4_ * auVar116._16_4_;
      auVar78._20_4_ =
           auVar77._20_4_ * auVar77._20_4_ +
           auVar87._20_4_ * auVar87._20_4_ + auVar116._20_4_ * auVar116._20_4_;
      auVar78._24_4_ =
           auVar77._24_4_ * auVar77._24_4_ +
           auVar87._24_4_ * auVar87._24_4_ + auVar116._24_4_ * auVar116._24_4_;
      auVar78._28_4_ =
           auVar77._28_4_ * auVar77._28_4_ +
           auVar87._28_4_ * auVar87._28_4_ + auVar116._28_4_ * auVar116._28_4_;
      auVar120 = vsubps_avx(auVar66,auVar137);
      auVar133 = vsqrtps_avx(auVar78);
      local_480 = auVar49._0_4_;
      fStack_47c = auVar49._4_4_;
      fStack_478 = auVar49._8_4_;
      fStack_474 = auVar49._12_4_;
      fStack_470 = auVar49._16_4_;
      fStack_46c = auVar49._20_4_;
      fStack_468 = auVar49._24_4_;
      fStack_464 = auVar49._28_4_;
      auVar87 = vdivps_avx(auVar87,auVar133);
      auVar130 = vsubps_avx(auVar136,auVar107);
      auVar66 = vdivps_avx(auVar116,auVar133);
      auVar130 = vsubps_avx(auVar130,auVar97);
      auVar77 = vdivps_avx(auVar77,auVar133);
      auVar116._4_4_ = uVar16;
      auVar116._0_4_ = uVar16;
      auVar116._8_4_ = uVar16;
      auVar116._12_4_ = uVar16;
      auVar116._16_4_ = uVar16;
      auVar116._20_4_ = uVar16;
      auVar116._24_4_ = uVar16;
      auVar116._28_4_ = uVar16;
      auVar116 = vcmpps_avx(auVar78,auVar116,1);
      uVar26 = auVar116._0_4_;
      auVar107._0_4_ = ~uVar26 & auVar133._0_4_;
      uVar90 = auVar116._4_4_;
      auVar107._4_4_ = ~uVar90 & auVar133._4_4_;
      uVar91 = auVar116._8_4_;
      auVar107._8_4_ = ~uVar91 & auVar133._8_4_;
      uVar92 = auVar116._12_4_;
      auVar107._12_4_ = ~uVar92 & auVar133._12_4_;
      uVar93 = auVar116._16_4_;
      auVar107._16_4_ = ~uVar93 & auVar133._16_4_;
      uVar94 = auVar116._20_4_;
      auVar107._20_4_ = ~uVar94 & auVar133._20_4_;
      uVar95 = auVar116._24_4_;
      auVar107._24_4_ = ~uVar95 & auVar133._24_4_;
      uVar96 = auVar116._28_4_;
      auVar107._28_4_ = ~uVar96 & auVar133._28_4_;
      auVar49 = vsubps_avx(auVar107,auVar3);
      in_ZMM12 = ZEXT3264(auVar38);
      local_500 = auVar103._0_4_;
      fStack_4fc = auVar103._4_4_;
      fStack_4f8 = auVar103._8_4_;
      fStack_4f4 = auVar103._12_4_;
      fStack_4f0 = auVar103._16_4_;
      fStack_4ec = auVar103._20_4_;
      fStack_4e8 = auVar103._24_4_;
      fStack_4e4 = auVar103._28_4_;
      fVar119 = auVar38._0_4_;
      auVar104._0_4_ = fVar119 + local_500;
      fVar122 = auVar38._4_4_;
      auVar104._4_4_ = fVar122 + fStack_4fc;
      fVar123 = auVar38._8_4_;
      auVar104._8_4_ = fVar123 + fStack_4f8;
      fVar124 = auVar38._12_4_;
      auVar104._12_4_ = fVar124 + fStack_4f4;
      fVar125 = auVar38._16_4_;
      auVar104._16_4_ = fVar125 + fStack_4f0;
      fVar126 = auVar38._20_4_;
      auVar104._20_4_ = fVar126 + fStack_4ec;
      fVar127 = auVar38._24_4_;
      auVar104._24_4_ = fVar127 + fStack_4e8;
      fVar128 = auVar38._28_4_;
      auVar104._28_4_ = fVar128 + fStack_4e4;
      auVar133._4_4_ = param_7;
      auVar133._0_4_ = param_7;
      auVar133._8_4_ = param_7;
      auVar133._12_4_ = param_7;
      auVar133._16_4_ = param_7;
      auVar133._20_4_ = param_7;
      auVar133._24_4_ = param_7;
      auVar133._28_4_ = param_7;
      auVar3 = vdivps_avx(auVar133,auVar104);
      auVar107 = vsubps_avx(auVar47,auVar50);
      auVar133 = vsqrtps_avx(auVar3);
      auVar107 = vsubps_avx(auVar107,auVar48);
      local_200 = auVar51._0_4_;
      fStack_1fc = auVar51._4_4_;
      fStack_1f8 = auVar51._8_4_;
      fStack_1f4 = auVar51._12_4_;
      fStack_1f0 = auVar51._16_4_;
      fStack_1ec = auVar51._20_4_;
      fStack_1e8 = auVar51._24_4_;
      fStack_1e4 = auVar51._28_4_;
      local_220 = auVar55._0_4_;
      fStack_21c = auVar55._4_4_;
      fStack_218 = auVar55._8_4_;
      fStack_214 = auVar55._12_4_;
      fStack_210 = auVar55._16_4_;
      fStack_20c = auVar55._20_4_;
      fStack_208 = auVar55._24_4_;
      fStack_204 = auVar55._28_4_;
      auVar3 = vblendvps_avx(auVar87,auVar7,auVar116);
      fVar106 = (float)(~uVar26 & auVar66._0_4_);
      fVar109 = (float)(~uVar90 & auVar66._4_4_);
      fVar110 = (float)(~uVar91 & auVar66._8_4_);
      fVar111 = (float)(~uVar92 & auVar66._12_4_);
      fVar112 = (float)(~uVar93 & auVar66._16_4_);
      fVar113 = (float)(~uVar94 & auVar66._20_4_);
      fVar114 = (float)(~uVar95 & auVar66._24_4_);
      fVar115 = (float)(~uVar96 & auVar66._28_4_);
      in_ZMM10 = ZEXT3264(CONCAT428(fVar115,CONCAT424(fVar114,CONCAT420(fVar113,CONCAT416(fVar112,
                                                  CONCAT412(fVar111,CONCAT48(fVar110,CONCAT44(
                                                  fVar109,fVar106))))))));
      fVar54 = (float)(~uVar26 & auVar77._0_4_);
      fVar56 = (float)(~uVar90 & auVar77._4_4_);
      fVar57 = (float)(~uVar91 & auVar77._8_4_);
      fVar58 = (float)(~uVar92 & auVar77._12_4_);
      fVar59 = (float)(~uVar93 & auVar77._16_4_);
      fVar60 = (float)(~uVar94 & auVar77._20_4_);
      fVar61 = (float)(~uVar95 & auVar77._24_4_);
      fVar62 = (float)(~uVar96 & auVar77._28_4_);
      fVar63 = auVar133._0_4_ * fVar35 * local_220 * param_6;
      fVar68 = auVar133._4_4_ * fVar35 * fStack_21c * param_6;
      fVar69 = auVar133._8_4_ * fVar35 * fStack_218 * param_6;
      fVar70 = auVar133._12_4_ * fVar35 * fStack_214 * param_6;
      fVar71 = auVar133._16_4_ * fVar35 * fStack_210 * param_6;
      fVar72 = auVar133._20_4_ * fVar35 * fStack_20c * param_6;
      fVar73 = auVar133._24_4_ * fVar35 * fStack_208 * param_6;
      fVar74 = auVar133._28_4_ * fVar35 * fStack_204 * param_6;
      pfVar1 = (float *)(param_5 + uVar20);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      fVar12 = pfVar1[4];
      fVar13 = pfVar1[5];
      fVar14 = pfVar1[6];
      fVar15 = pfVar1[7];
      auVar66._0_4_ =
           -(fVar63 * (fVar54 * (auVar107._0_4_ + local_200) +
                      auVar3._0_4_ * (auVar120._0_4_ + local_480) +
                      fVar106 * (auVar130._0_4_ + auVar129._0_4_))) +
           (auVar49._0_4_ * fVar34 - fVar8);
      auVar66._4_4_ =
           -(fVar68 * (fVar56 * (auVar107._4_4_ + fStack_1fc) +
                      auVar3._4_4_ * (auVar120._4_4_ + fStack_47c) +
                      fVar109 * (auVar130._4_4_ + auVar129._4_4_))) +
           (auVar49._4_4_ * fVar39 - fVar9);
      auVar66._8_4_ =
           -(fVar69 * (fVar57 * (auVar107._8_4_ + fStack_1f8) +
                      auVar3._8_4_ * (auVar120._8_4_ + fStack_478) +
                      fVar110 * (auVar130._8_4_ + auVar129._8_4_))) +
           (auVar49._8_4_ * fVar41 - fVar10);
      auVar66._12_4_ =
           -(fVar70 * (fVar58 * (auVar107._12_4_ + fStack_1f4) +
                      auVar3._12_4_ * (auVar120._12_4_ + fStack_474) +
                      fVar111 * (auVar130._12_4_ + auVar129._12_4_))) +
           (auVar49._12_4_ * fVar42 - fVar11);
      auVar66._16_4_ =
           -(fVar71 * (fVar59 * (auVar107._16_4_ + fStack_1f0) +
                      auVar3._16_4_ * (auVar120._16_4_ + fStack_470) +
                      fVar112 * (auVar130._16_4_ + auVar129._16_4_))) +
           (auVar49._16_4_ * fVar43 - fVar12);
      auVar66._20_4_ =
           -(fVar72 * (fVar60 * (auVar107._20_4_ + fStack_1ec) +
                      auVar3._20_4_ * (auVar120._20_4_ + fStack_46c) +
                      fVar113 * (auVar130._20_4_ + auVar129._20_4_))) +
           (auVar49._20_4_ * fVar44 - fVar13);
      auVar66._24_4_ =
           -(fVar73 * (fVar61 * (auVar107._24_4_ + fStack_1e8) +
                      auVar3._24_4_ * (auVar120._24_4_ + fStack_468) +
                      fVar114 * (auVar130._24_4_ + auVar129._24_4_))) +
           (auVar49._24_4_ * fVar45 - fVar14);
      auVar66._28_4_ =
           -(fVar74 * (fVar62 * (auVar107._28_4_ + fStack_1e4) +
                      auVar3._28_4_ * (auVar120._28_4_ + fStack_464) +
                      fVar115 * (auVar130._28_4_ + auVar129._28_4_))) +
           (auVar49._28_4_ * fVar46 - fVar15);
      auVar50._0_4_ = auVar104._0_4_ * (fVar63 + fVar40) + fVar6;
      auVar50._4_4_ = auVar104._4_4_ * (fVar68 + fVar40) + fVar6;
      auVar50._8_4_ = auVar104._8_4_ * (fVar69 + fVar40) + fVar6;
      auVar50._12_4_ = auVar104._12_4_ * (fVar70 + fVar40) + fVar6;
      auVar50._16_4_ = auVar104._16_4_ * (fVar71 + fVar40) + fVar6;
      auVar50._20_4_ = auVar104._20_4_ * (fVar72 + fVar40) + fVar6;
      auVar50._24_4_ = auVar104._24_4_ * (fVar73 + fVar40) + fVar6;
      auVar50._28_4_ = auVar104._28_4_ * (fVar74 + fVar40) + fVar6;
      auVar55 = vdivps_avx(auVar66,auVar50);
      local_4a0 = auVar37._0_4_;
      fStack_49c = auVar37._4_4_;
      fStack_498 = auVar37._8_4_;
      fStack_494 = auVar37._12_4_;
      fStack_490 = auVar37._16_4_;
      fStack_48c = auVar37._20_4_;
      fStack_488 = auVar37._24_4_;
      fStack_484 = auVar37._28_4_;
      fVar63 = auVar55._0_4_;
      fVar75 = auVar3._0_4_ * fVar63;
      fVar68 = auVar55._4_4_;
      fVar80 = auVar3._4_4_ * fVar68;
      fVar69 = auVar55._8_4_;
      fVar81 = auVar3._8_4_ * fVar69;
      fVar70 = auVar55._12_4_;
      fVar82 = auVar3._12_4_ * fVar70;
      fVar71 = auVar55._16_4_;
      fVar83 = auVar3._16_4_ * fVar71;
      fVar72 = auVar55._20_4_;
      fVar84 = auVar3._20_4_ * fVar72;
      fVar73 = auVar55._24_4_;
      fVar85 = auVar3._24_4_ * fVar73;
      fVar74 = auVar55._28_4_;
      fVar86 = auVar3._28_4_ * fVar74;
      auVar131._0_4_ = fVar119 * fVar75 + auVar132._0_4_;
      auVar131._4_4_ = fVar122 * fVar80 + auVar132._4_4_;
      auVar131._8_4_ = fVar123 * fVar81 + auVar132._8_4_;
      auVar131._12_4_ = fVar124 * fVar82 + auVar132._12_4_;
      auVar51._16_4_ = fVar125 * fVar83 + auVar132._16_4_;
      auVar51._0_16_ = auVar131;
      auVar51._20_4_ = fVar126 * fVar84 + auVar132._20_4_;
      auVar51._24_4_ = fVar127 * fVar85 + auVar132._24_4_;
      auVar51._28_4_ = fVar128 * fVar86 + auVar132._28_4_;
      in_ZMM14 = ZEXT3264(auVar51);
      lVar32 = (longlong)(int)local_4a0;
      *(float *)(param_1 + lVar32) = auVar131._0_4_;
      lVar33 = (longlong)(int)fStack_49c;
      uVar4 = vextractps_avx(auVar131,1);
      *(undefined4 *)(param_1 + lVar33) = uVar4;
      lVar30 = (longlong)(int)fStack_498;
      uVar4 = vextractps_avx(auVar131,2);
      *(undefined4 *)(param_1 + lVar30) = uVar4;
      lVar21 = (longlong)(int)fStack_494;
      uVar4 = vextractps_avx(auVar131,3);
      *(undefined4 *)(param_1 + lVar21) = uVar4;
      lVar31 = (longlong)(int)fStack_490;
      auVar36 = auVar51._16_16_;
      *(float *)(param_1 + lVar31) = auVar51._16_4_;
      lVar29 = (longlong)(int)fStack_48c;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar24 = (longlong)(int)fStack_488;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + lVar24) = uVar4;
      lVar25 = (longlong)(int)fStack_484;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + lVar25) = uVar4;
      local_520 = auVar136._0_4_;
      fStack_51c = auVar136._4_4_;
      fStack_518 = auVar136._8_4_;
      fStack_514 = auVar136._12_4_;
      fStack_510 = auVar136._16_4_;
      fStack_50c = auVar136._20_4_;
      fStack_508 = auVar136._24_4_;
      fStack_504 = auVar136._28_4_;
      auVar64._0_4_ = fVar119 * fVar106 * fVar63 + local_520;
      auVar64._4_4_ = fVar122 * fVar109 * fVar68 + fStack_51c;
      auVar64._8_4_ = fVar123 * fVar110 * fVar69 + fStack_518;
      auVar64._12_4_ = fVar124 * fVar111 * fVar70 + fStack_514;
      auVar37._16_4_ = fVar125 * fVar112 * fVar71 + fStack_510;
      auVar37._0_16_ = auVar64;
      auVar37._20_4_ = fVar126 * fVar113 * fVar72 + fStack_50c;
      auVar37._24_4_ = fVar127 * fVar114 * fVar73 + fStack_508;
      auVar37._28_4_ = fVar128 * fVar115 * fVar74 + fStack_504;
      *(float *)(param_1 + 4 + lVar32) = auVar64._0_4_;
      uVar4 = vextractps_avx(auVar64,1);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar64,2);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar64,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar4;
      auVar36 = auVar37._16_16_;
      *(float *)(param_1 + 4 + lVar31) = auVar37._16_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar4;
      fVar54 = fVar54 * fVar63;
      fVar56 = fVar56 * fVar68;
      fVar57 = fVar57 * fVar69;
      fVar58 = fVar58 * fVar70;
      fVar59 = fVar59 * fVar71;
      fVar60 = fVar60 * fVar72;
      fVar61 = fVar61 * fVar73;
      fVar62 = fVar62 * fVar74;
      local_4c0 = auVar47._0_4_;
      fStack_4bc = auVar47._4_4_;
      fStack_4b8 = auVar47._8_4_;
      fStack_4b4 = auVar47._12_4_;
      fStack_4b0 = auVar47._16_4_;
      fStack_4ac = auVar47._20_4_;
      fStack_4a8 = auVar47._24_4_;
      fStack_4a4 = auVar47._28_4_;
      auVar65._0_4_ = fVar119 * fVar54 + local_4c0;
      auVar65._4_4_ = fVar122 * fVar56 + fStack_4bc;
      auVar65._8_4_ = fVar123 * fVar57 + fStack_4b8;
      auVar65._12_4_ = fVar124 * fVar58 + fStack_4b4;
      auVar47._16_4_ = fVar125 * fVar59 + fStack_4b0;
      auVar47._0_16_ = auVar65;
      auVar47._20_4_ = fVar126 * fVar60 + fStack_4ac;
      auVar47._24_4_ = fVar127 * fVar61 + fStack_4a8;
      auVar47._28_4_ = fVar128 * fVar62 + fStack_4a4;
      *(float *)(param_1 + 8 + lVar32) = auVar65._0_4_;
      uVar4 = vextractps_avx(auVar65,1);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar65,2);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar65,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar4;
      auVar36 = auVar47._16_16_;
      *(float *)(param_1 + 8 + lVar31) = auVar47._16_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar4;
      *(float *)(param_1 + 0xc + lVar32) = fVar119;
      auVar36 = auVar38._0_16_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar4;
      auVar36 = auVar38._16_16_;
      *(float *)(param_1 + 0xc + lVar31) = fVar125;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar4;
      auVar134._0_4_ = -(local_500 * fVar75) + auVar137._0_4_;
      auVar134._4_4_ = -(fStack_4fc * fVar80) + auVar137._4_4_;
      auVar134._8_4_ = -(fStack_4f8 * fVar81) + auVar137._8_4_;
      auVar134._12_4_ = -(fStack_4f4 * fVar82) + auVar137._12_4_;
      auVar129._16_4_ = -(fStack_4f0 * fVar83) + auVar137._16_4_;
      auVar129._0_16_ = auVar134;
      auVar129._20_4_ = -(fStack_4ec * fVar84) + auVar137._20_4_;
      auVar129._24_4_ = -(fStack_4e8 * fVar85) + auVar137._24_4_;
      auVar129._28_4_ = -(fStack_4e4 * fVar86) + auVar137._28_4_;
      local_4e0 = auVar102._0_4_;
      fStack_4dc = auVar102._4_4_;
      fStack_4d8 = auVar102._8_4_;
      fStack_4d4 = auVar102._12_4_;
      fStack_4d0 = auVar102._16_4_;
      fStack_4cc = auVar102._20_4_;
      fStack_4c8 = auVar102._24_4_;
      fStack_4c4 = auVar102._28_4_;
      lVar32 = (longlong)(int)local_4e0;
      *(float *)(param_1 + lVar32) = auVar134._0_4_;
      lVar33 = (longlong)(int)fStack_4dc;
      uVar4 = vextractps_avx(auVar134,1);
      *(undefined4 *)(param_1 + lVar33) = uVar4;
      lVar30 = (longlong)(int)fStack_4d8;
      uVar4 = vextractps_avx(auVar134,2);
      *(undefined4 *)(param_1 + lVar30) = uVar4;
      lVar21 = (longlong)(int)fStack_4d4;
      uVar4 = vextractps_avx(auVar134,3);
      *(undefined4 *)(param_1 + lVar21) = uVar4;
      lVar31 = (longlong)(int)fStack_4d0;
      auVar36 = auVar129._16_16_;
      *(float *)(param_1 + lVar31) = auVar129._16_4_;
      lVar25 = (longlong)(int)fStack_4cc;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + lVar25) = uVar4;
      lVar24 = (longlong)(int)fStack_4c8;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + lVar24) = uVar4;
      lVar29 = (longlong)(int)fStack_4c4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      local_440 = auVar97._0_4_;
      fStack_43c = auVar97._4_4_;
      fStack_438 = auVar97._8_4_;
      fStack_434 = auVar97._12_4_;
      fStack_430 = auVar97._16_4_;
      fStack_42c = auVar97._20_4_;
      fStack_428 = auVar97._24_4_;
      fStack_424 = auVar97._28_4_;
      auVar76._0_4_ = -(local_500 * fVar106 * fVar63) + local_440;
      auVar76._4_4_ = -(fStack_4fc * fVar109 * fVar68) + fStack_43c;
      auVar76._8_4_ = -(fStack_4f8 * fVar110 * fVar69) + fStack_438;
      auVar76._12_4_ = -(fStack_4f4 * fVar111 * fVar70) + fStack_434;
      auVar38._16_4_ = -(fStack_4f0 * fVar112 * fVar71) + fStack_430;
      auVar38._0_16_ = auVar76;
      auVar38._20_4_ = -(fStack_4ec * fVar113 * fVar72) + fStack_42c;
      auVar38._24_4_ = -(fStack_4e8 * fVar114 * fVar73) + fStack_428;
      auVar38._28_4_ = -(fStack_4e4 * fVar115 * fVar74) + fStack_424;
      *(float *)(param_1 + 4 + lVar32) = auVar76._0_4_;
      uVar4 = vextractps_avx(auVar76,1);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar76,2);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar76,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar4;
      auVar36 = auVar38._16_16_;
      *(float *)(param_1 + 4 + lVar31) = auVar38._16_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      local_560 = auVar48._0_4_;
      fStack_55c = auVar48._4_4_;
      fStack_558 = auVar48._8_4_;
      fStack_554 = auVar48._12_4_;
      fStack_550 = auVar48._16_4_;
      fStack_54c = auVar48._20_4_;
      fStack_548 = auVar48._24_4_;
      fStack_544 = auVar48._28_4_;
      auVar36._0_4_ = -(local_500 * fVar54) + local_560;
      auVar36._4_4_ = -(fStack_4fc * fVar56) + fStack_55c;
      auVar36._8_4_ = -(fStack_4f8 * fVar57) + fStack_558;
      auVar36._12_4_ = -(fStack_4f4 * fVar58) + fStack_554;
      auVar120._16_4_ = -(fStack_4f0 * fVar59) + fStack_550;
      auVar120._0_16_ = auVar36;
      auVar120._20_4_ = -(fStack_4ec * fVar60) + fStack_54c;
      auVar120._24_4_ = -(fStack_4e8 * fVar61) + fStack_548;
      auVar120._28_4_ = -(fStack_4e4 * fVar62) + fStack_544;
      *(float *)(param_1 + 8 + lVar32) = auVar36._0_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar4;
      auVar36 = auVar120._16_16_;
      *(float *)(param_1 + 8 + lVar31) = auVar120._16_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      pfVar1 = (float *)(param_5 + uVar20);
      *pfVar1 = fVar8 + fVar63;
      pfVar1[1] = fVar9 + fVar68;
      pfVar1[2] = fVar10 + fVar69;
      pfVar1[3] = fVar11 + fVar70;
      pfVar1[4] = fVar12 + fVar71;
      pfVar1[5] = fVar13 + fVar72;
      pfVar1[6] = fVar14 + fVar73;
      pfVar1[7] = fVar15 + fVar74;
      *(float *)(param_1 + 0xc + lVar32) = local_500;
      auVar36 = auVar103._0_16_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar4;
      auVar36 = auVar103._16_16_;
      *(float *)(param_1 + 0xc + lVar31) = fStack_4f0;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      uVar23 = uVar23 + 0x20;
      uVar26 = (int)uVar28 + 8;
      uVar28 = (ulonglong)uVar26;
    } while ((int)uVar26 < (int)(uVar19 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar26) {
      return;
    }
  }
  iVar27 = (int)uVar28;
  auVar48._4_4_ = iVar27;
  auVar48._0_4_ = iVar27;
  auVar48._8_4_ = iVar27;
  auVar48._12_4_ = iVar27;
  auVar48._16_4_ = iVar27;
  auVar48._20_4_ = iVar27;
  auVar48._24_4_ = iVar27;
  auVar48._28_4_ = iVar27;
  auVar3 = vpor_avx2(auVar48,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar97._4_4_ = param_9;
  auVar97._0_4_ = param_9;
  auVar97._8_4_ = param_9;
  auVar97._12_4_ = param_9;
  auVar97._16_4_ = param_9;
  auVar97._20_4_ = param_9;
  auVar97._24_4_ = param_9;
  auVar97._28_4_ = param_9;
  auVar3 = vpcmpgtd_avx2(auVar97,auVar3);
  pauVar2 = (undefined1 (*) [32])(param_3 + uVar28 * 8);
  uVar19 = vmovmskps_avx(auVar3);
  if (uVar19 == 0xff) {
    auVar55 = *pauVar2;
    auVar116 = pauVar2[1];
    auVar87 = vshufps_avx(auVar55,auVar116,0x88);
    auVar87 = vpermpd_avx2(auVar87,0xd8);
    auVar55 = vshufps_avx(auVar55,auVar116,0xdd);
    auVar55 = vpermpd_avx2(auVar55,0xd8);
  }
  else {
    auVar87 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar3);
    auVar55 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar3);
  }
  auVar129 = vpslld_avx2(auVar87,4);
  auVar105._4_4_ = __real_00000004;
  auVar105._0_4_ = __real_00000004;
  auVar105._8_4_ = __real_00000004;
  auVar105._12_4_ = __real_00000004;
  auVar105._16_4_ = __real_00000004;
  auVar105._20_4_ = __real_00000004;
  auVar105._24_4_ = __real_00000004;
  auVar105._28_4_ = __real_00000004;
  vpor_avx2(auVar129,auVar105);
  auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  auVar99._4_4_ = __real_00000008;
  auVar99._0_4_ = __real_00000008;
  auVar99._8_4_ = __real_00000008;
  auVar99._12_4_ = __real_00000008;
  auVar99._16_4_ = __real_00000008;
  auVar99._20_4_ = __real_00000008;
  auVar99._24_4_ = __real_00000008;
  auVar99._28_4_ = __real_00000008;
  vpor_avx2(auVar129,auVar99);
  auVar77 = vgatherdps(ZEXT832(0),auVar3);
  auVar108._4_4_ = __real_0000000c;
  auVar108._0_4_ = __real_0000000c;
  auVar108._8_4_ = __real_0000000c;
  auVar108._12_4_ = __real_0000000c;
  auVar108._16_4_ = __real_0000000c;
  auVar108._20_4_ = __real_0000000c;
  auVar108._24_4_ = __real_0000000c;
  auVar108._28_4_ = __real_0000000c;
  vpor_avx2(auVar129,auVar108);
  auVar104 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  auVar47 = vpslld_avx2(auVar55,4);
  vpor_avx2(auVar47,auVar105);
  auVar120 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  vpor_avx2(auVar47,auVar99);
  auVar130 = vgatherdps(ZEXT832(0),auVar3);
  vpor_avx2(auVar108,auVar47);
  auVar105 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar116 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar133 = vgatherdps(ZEXT832(0),auVar3);
  auVar116 = vmaskmovps_avx(auVar3,auVar116);
  auVar66 = vmaskmovps_avx(auVar3,auVar66);
  auVar77 = vmaskmovps_avx(auVar3,auVar77);
  auVar133 = vmaskmovps_avx(auVar3,auVar133);
  auVar120 = vmaskmovps_avx(auVar3,auVar120);
  auVar130 = vmaskmovps_avx(auVar3,auVar130);
  auVar78 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  vpmulld_avx2(auVar87,auVar108);
  auVar38 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar48 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar97 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  vpmulld_avx2(auVar55,auVar108);
  auVar50 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar51 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar55 = vsubps_avx(auVar116,auVar133);
  auVar49 = vsubps_avx(auVar66,auVar120);
  auVar7 = vsubps_avx(auVar77,auVar130);
  auVar100._0_4_ =
       auVar7._0_4_ * auVar7._0_4_ + auVar55._0_4_ * auVar55._0_4_ + auVar49._0_4_ * auVar49._0_4_;
  auVar100._4_4_ =
       auVar7._4_4_ * auVar7._4_4_ + auVar55._4_4_ * auVar55._4_4_ + auVar49._4_4_ * auVar49._4_4_;
  auVar100._8_4_ =
       auVar7._8_4_ * auVar7._8_4_ + auVar55._8_4_ * auVar55._8_4_ + auVar49._8_4_ * auVar49._8_4_;
  auVar100._12_4_ =
       auVar7._12_4_ * auVar7._12_4_ +
       auVar55._12_4_ * auVar55._12_4_ + auVar49._12_4_ * auVar49._12_4_;
  auVar100._16_4_ =
       auVar7._16_4_ * auVar7._16_4_ +
       auVar55._16_4_ * auVar55._16_4_ + auVar49._16_4_ * auVar49._16_4_;
  auVar100._20_4_ =
       auVar7._20_4_ * auVar7._20_4_ +
       auVar55._20_4_ * auVar55._20_4_ + auVar49._20_4_ * auVar49._20_4_;
  auVar100._24_4_ =
       auVar7._24_4_ * auVar7._24_4_ +
       auVar55._24_4_ * auVar55._24_4_ + auVar49._24_4_ * auVar49._24_4_;
  auVar100._28_4_ =
       auVar7._28_4_ * auVar7._28_4_ +
       auVar55._28_4_ * auVar55._28_4_ + auVar49._28_4_ * auVar49._28_4_;
  auVar107 = vsqrtps_avx(auVar100);
  auVar55 = vdivps_avx(auVar55,auVar107);
  auVar117._4_4_ = __real_38d1b717;
  auVar117._0_4_ = __real_38d1b717;
  auVar117._8_4_ = __real_38d1b717;
  auVar117._12_4_ = __real_38d1b717;
  auVar117._16_4_ = __real_38d1b717;
  auVar117._20_4_ = __real_38d1b717;
  auVar117._24_4_ = __real_38d1b717;
  auVar117._28_4_ = __real_38d1b717;
  auVar87 = vcmpps_avx(auVar100,auVar117,1);
  auVar101._4_4_ = __real_3f800000;
  auVar101._0_4_ = __real_3f800000;
  auVar101._8_4_ = __real_3f800000;
  auVar101._12_4_ = __real_3f800000;
  auVar101._16_4_ = __real_3f800000;
  auVar101._20_4_ = __real_3f800000;
  auVar101._24_4_ = __real_3f800000;
  auVar101._28_4_ = __real_3f800000;
  auVar55 = vblendvps_avx(auVar55,auVar101,auVar87);
  auVar55 = vmaskmovps_avx(auVar3,auVar55);
  auVar49 = vdivps_avx(auVar49,auVar107);
  uVar26 = auVar87._0_4_;
  auVar137._0_4_ = ~uVar26 & auVar49._0_4_;
  uVar90 = auVar87._4_4_;
  auVar137._4_4_ = ~uVar90 & auVar49._4_4_;
  uVar91 = auVar87._8_4_;
  auVar137._8_4_ = ~uVar91 & auVar49._8_4_;
  uVar92 = auVar87._12_4_;
  auVar137._12_4_ = ~uVar92 & auVar49._12_4_;
  uVar93 = auVar87._16_4_;
  auVar137._16_4_ = ~uVar93 & auVar49._16_4_;
  uVar94 = auVar87._20_4_;
  auVar137._20_4_ = ~uVar94 & auVar49._20_4_;
  uVar95 = auVar87._24_4_;
  auVar137._24_4_ = ~uVar95 & auVar49._24_4_;
  uVar96 = auVar87._28_4_;
  auVar137._28_4_ = ~uVar96 & auVar49._28_4_;
  auVar87 = vmaskmovps_avx(auVar3,auVar137);
  auVar49 = vdivps_avx(auVar7,auVar107);
  auVar52._0_4_ = ~uVar26 & auVar49._0_4_;
  auVar52._4_4_ = ~uVar90 & auVar49._4_4_;
  auVar52._8_4_ = ~uVar91 & auVar49._8_4_;
  auVar52._12_4_ = ~uVar92 & auVar49._12_4_;
  auVar52._16_4_ = ~uVar93 & auVar49._16_4_;
  auVar52._20_4_ = ~uVar94 & auVar49._20_4_;
  auVar52._24_4_ = ~uVar95 & auVar49._24_4_;
  auVar52._28_4_ = ~uVar96 & auVar49._28_4_;
  auVar49 = vmaskmovps_avx(auVar3,auVar52);
  lVar21 = (longlong)(iVar27 << 2);
  auVar7 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_4 + lVar21));
  auVar102._0_4_ = ~uVar26 & auVar107._0_4_;
  auVar102._4_4_ = ~uVar90 & auVar107._4_4_;
  auVar102._8_4_ = ~uVar91 & auVar107._8_4_;
  auVar102._12_4_ = ~uVar92 & auVar107._12_4_;
  auVar102._16_4_ = ~uVar93 & auVar107._16_4_;
  auVar102._20_4_ = ~uVar94 & auVar107._20_4_;
  auVar102._24_4_ = ~uVar95 & auVar107._24_4_;
  auVar102._28_4_ = ~uVar96 & auVar107._28_4_;
  auVar37 = vsubps_avx(auVar102,auVar7);
  auVar103._4_4_ = __real_322bcc77;
  auVar103._0_4_ = __real_322bcc77;
  auVar103._8_4_ = __real_322bcc77;
  auVar103._12_4_ = __real_322bcc77;
  auVar103._16_4_ = __real_322bcc77;
  auVar103._20_4_ = __real_322bcc77;
  auVar103._24_4_ = __real_322bcc77;
  auVar103._28_4_ = __real_322bcc77;
  auVar107 = vcmpps_avx(auVar7,auVar103,1);
  auVar7 = vdivps_avx(auVar101,auVar7);
  auVar107 = vblendvps_avx(auVar7,auVar101,auVar107);
  param_8 = param_8 + param_8;
  auVar118._4_4_ = param_7;
  auVar118._0_4_ = param_7;
  auVar118._8_4_ = param_7;
  auVar118._12_4_ = param_7;
  auVar118._16_4_ = param_7;
  auVar118._20_4_ = param_7;
  auVar118._24_4_ = param_7;
  auVar118._28_4_ = param_7;
  local_4e0 = auVar105._0_4_;
  fStack_4dc = auVar105._4_4_;
  fStack_4d8 = auVar105._8_4_;
  fStack_4d4 = auVar105._12_4_;
  fStack_4d0 = auVar105._16_4_;
  fStack_4cc = auVar105._20_4_;
  fStack_4c8 = auVar105._24_4_;
  fStack_4c4 = auVar105._28_4_;
  fVar44 = auVar104._0_4_;
  auVar53._0_4_ = fVar44 + local_4e0;
  fVar45 = auVar104._4_4_;
  auVar53._4_4_ = fVar45 + fStack_4dc;
  fVar46 = auVar104._8_4_;
  auVar53._8_4_ = fVar46 + fStack_4d8;
  fVar63 = auVar104._12_4_;
  auVar53._12_4_ = fVar63 + fStack_4d4;
  fVar68 = auVar104._16_4_;
  auVar53._16_4_ = fVar68 + fStack_4d0;
  fVar69 = auVar104._20_4_;
  auVar53._20_4_ = fVar69 + fStack_4cc;
  fVar70 = auVar104._24_4_;
  auVar53._24_4_ = fVar70 + fStack_4c8;
  fVar71 = auVar104._28_4_;
  auVar53._28_4_ = fVar71 + fStack_4c4;
  auVar7 = vdivps_avx(auVar118,auVar53);
  auVar7 = vsqrtps_avx(auVar7);
  fVar6 = param_6 * param_6 * param_7;
  fVar35 = param_6 * param_8 * auVar7._0_4_ * auVar107._0_4_;
  fVar40 = param_6 * param_8 * auVar7._4_4_ * auVar107._4_4_;
  fVar34 = param_6 * param_8 * auVar7._8_4_ * auVar107._8_4_;
  fVar39 = param_6 * param_8 * auVar7._12_4_ * auVar107._12_4_;
  fVar41 = param_6 * param_8 * auVar7._16_4_ * auVar107._16_4_;
  fVar42 = param_6 * param_8 * auVar7._20_4_ * auVar107._20_4_;
  fVar43 = param_6 * param_8 * auVar7._24_4_ * auVar107._24_4_;
  param_6 = param_6 * param_8 * auVar7._28_4_ * auVar107._28_4_;
  auVar107 = vsubps_avx(auVar116,auVar78);
  auVar107 = vsubps_avx(auVar107,auVar133);
  auVar7 = vsubps_avx(auVar66,auVar38);
  auVar7 = vsubps_avx(auVar7,auVar120);
  local_440 = auVar50._0_4_;
  fStack_43c = auVar50._4_4_;
  fStack_438 = auVar50._8_4_;
  fStack_434 = auVar50._12_4_;
  fStack_430 = auVar50._16_4_;
  fStack_42c = auVar50._20_4_;
  fStack_428 = auVar50._24_4_;
  fStack_424 = auVar50._28_4_;
  auVar38 = vsubps_avx(auVar77,auVar48);
  auVar38 = vsubps_avx(auVar38,auVar130);
  local_460 = auVar51._0_4_;
  fStack_45c = auVar51._4_4_;
  fStack_458 = auVar51._8_4_;
  fStack_454 = auVar51._12_4_;
  fStack_450 = auVar51._16_4_;
  fStack_44c = auVar51._20_4_;
  fStack_448 = auVar51._24_4_;
  fStack_444 = auVar51._28_4_;
  local_3c0 = auVar87._0_4_;
  fStack_3bc = auVar87._4_4_;
  fStack_3b8 = auVar87._8_4_;
  fStack_3b4 = auVar87._12_4_;
  fStack_3b0 = auVar87._16_4_;
  fStack_3ac = auVar87._20_4_;
  fStack_3a8 = auVar87._24_4_;
  fStack_3a4 = auVar87._28_4_;
  local_3e0 = auVar55._0_4_;
  fStack_3dc = auVar55._4_4_;
  fStack_3d8 = auVar55._8_4_;
  fStack_3d4 = auVar55._12_4_;
  fStack_3d0 = auVar55._16_4_;
  fStack_3cc = auVar55._20_4_;
  fStack_3c8 = auVar55._24_4_;
  fStack_3c4 = auVar55._28_4_;
  local_3a0 = auVar49._0_4_;
  fStack_39c = auVar49._4_4_;
  fStack_398 = auVar49._8_4_;
  fStack_394 = auVar49._12_4_;
  fStack_390 = auVar49._16_4_;
  fStack_38c = auVar49._20_4_;
  fStack_388 = auVar49._24_4_;
  fStack_384 = auVar49._28_4_;
  auVar87 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_5 + lVar21));
  auVar88._0_4_ =
       -(fVar35 * (local_3a0 * (auVar38._0_4_ + local_460) +
                  local_3e0 * (auVar97._0_4_ + auVar107._0_4_) +
                  local_3c0 * (auVar7._0_4_ + local_440))) +
       (-(fVar6 * auVar37._0_4_) - auVar87._0_4_);
  auVar88._4_4_ =
       -(fVar40 * (fStack_39c * (auVar38._4_4_ + fStack_45c) +
                  fStack_3dc * (auVar97._4_4_ + auVar107._4_4_) +
                  fStack_3bc * (auVar7._4_4_ + fStack_43c))) +
       (-(fVar6 * auVar37._4_4_) - auVar87._4_4_);
  auVar88._8_4_ =
       -(fVar34 * (fStack_398 * (auVar38._8_4_ + fStack_458) +
                  fStack_3d8 * (auVar97._8_4_ + auVar107._8_4_) +
                  fStack_3b8 * (auVar7._8_4_ + fStack_438))) +
       (-(fVar6 * auVar37._8_4_) - auVar87._8_4_);
  auVar88._12_4_ =
       -(fVar39 * (fStack_394 * (auVar38._12_4_ + fStack_454) +
                  fStack_3d4 * (auVar97._12_4_ + auVar107._12_4_) +
                  fStack_3b4 * (auVar7._12_4_ + fStack_434))) +
       (-(fVar6 * auVar37._12_4_) - auVar87._12_4_);
  auVar88._16_4_ =
       -(fVar41 * (fStack_390 * (auVar38._16_4_ + fStack_450) +
                  fStack_3d0 * (auVar97._16_4_ + auVar107._16_4_) +
                  fStack_3b0 * (auVar7._16_4_ + fStack_430))) +
       (-(fVar6 * auVar37._16_4_) - auVar87._16_4_);
  auVar88._20_4_ =
       -(fVar42 * (fStack_38c * (auVar38._20_4_ + fStack_44c) +
                  fStack_3cc * (auVar97._20_4_ + auVar107._20_4_) +
                  fStack_3ac * (auVar7._20_4_ + fStack_42c))) +
       (-(fVar6 * auVar37._20_4_) - auVar87._20_4_);
  auVar88._24_4_ =
       -(fVar43 * (fStack_388 * (auVar38._24_4_ + fStack_448) +
                  fStack_3c8 * (auVar97._24_4_ + auVar107._24_4_) +
                  fStack_3a8 * (auVar7._24_4_ + fStack_428))) +
       (-(fVar6 * auVar37._24_4_) - auVar87._24_4_);
  auVar88._28_4_ =
       -(param_6 *
        (fStack_384 * (auVar38._28_4_ + fStack_444) +
        fStack_3c4 * (auVar97._28_4_ + auVar107._28_4_) + fStack_3a4 * (auVar7._28_4_ + fStack_424))
        ) + (-(fVar6 * auVar37._28_4_) - auVar87._28_4_);
  auVar132._0_4_ = auVar53._0_4_ * (fVar6 + fVar35) + __real_3f800000;
  auVar132._4_4_ = auVar53._4_4_ * (fVar6 + fVar40) + __real_3f800000;
  auVar132._8_4_ = auVar53._8_4_ * (fVar6 + fVar34) + __real_3f800000;
  auVar132._12_4_ = auVar53._12_4_ * (fVar6 + fVar39) + __real_3f800000;
  auVar132._16_4_ = auVar53._16_4_ * (fVar6 + fVar41) + __real_3f800000;
  auVar132._20_4_ = auVar53._20_4_ * (fVar6 + fVar42) + __real_3f800000;
  auVar132._24_4_ = auVar53._24_4_ * (fVar6 + fVar43) + __real_3f800000;
  auVar132._28_4_ = auVar53._28_4_ * (fVar6 + param_6) + __real_3f800000;
  local_400 = auVar129._0_4_;
  iStack_3fc = auVar129._4_4_;
  iStack_3f8 = auVar129._8_4_;
  iStack_3f4 = auVar129._12_4_;
  iStack_3f0 = auVar129._16_4_;
  iStack_3ec = auVar129._20_4_;
  iStack_3e8 = auVar129._24_4_;
  iStack_3e4 = auVar129._28_4_;
  auVar55 = vdivps_avx(auVar88,auVar132);
  fVar6 = auVar55._0_4_;
  auVar136._0_4_ = auVar87._0_4_ + fVar6;
  fVar35 = auVar55._4_4_;
  auVar136._4_4_ = auVar87._4_4_ + fVar35;
  fVar40 = auVar55._8_4_;
  auVar136._8_4_ = auVar87._8_4_ + fVar40;
  fVar34 = auVar55._12_4_;
  auVar136._12_4_ = auVar87._12_4_ + fVar34;
  fVar39 = auVar55._16_4_;
  auVar136._16_4_ = auVar87._16_4_ + fVar39;
  fVar41 = auVar55._20_4_;
  auVar136._20_4_ = auVar87._20_4_ + fVar41;
  fVar42 = auVar55._24_4_;
  auVar136._24_4_ = auVar87._24_4_ + fVar42;
  fVar43 = auVar55._28_4_;
  auVar136._28_4_ = auVar87._28_4_ + fVar43;
  auVar3 = vmaskmovps_avx(auVar3,auVar136);
  *(undefined1 (*) [32])(param_5 + lVar21) = auVar3;
  local_3e0 = local_3e0 * fVar6;
  fStack_3dc = fStack_3dc * fVar35;
  fStack_3d8 = fStack_3d8 * fVar40;
  fStack_3d4 = fStack_3d4 * fVar34;
  fStack_3d0 = fStack_3d0 * fVar39;
  fStack_3cc = fStack_3cc * fVar41;
  fStack_3c8 = fStack_3c8 * fVar42;
  fStack_3c4 = fStack_3c4 * fVar43;
  auVar135._0_4_ = fVar44 * local_3e0 + auVar116._0_4_;
  auVar135._4_4_ = fVar45 * fStack_3dc + auVar116._4_4_;
  auVar135._8_4_ = fVar46 * fStack_3d8 + auVar116._8_4_;
  auVar135._12_4_ = fVar63 * fStack_3d4 + auVar116._12_4_;
  auVar138._16_4_ = fVar68 * fStack_3d0 + auVar116._16_4_;
  auVar138._0_16_ = auVar135;
  auVar138._20_4_ = fVar69 * fStack_3cc + auVar116._20_4_;
  auVar138._24_4_ = fVar70 * fStack_3c8 + auVar116._24_4_;
  auVar138._28_4_ = fVar71 * fStack_3c4 + auVar116._28_4_;
  cVar22 = (char)uVar19;
  auVar65 = auVar104._0_16_;
  auVar76 = auVar104._16_16_;
  auVar131 = auVar138._16_16_;
  local_500 = auVar47._0_4_;
  fStack_4fc = auVar47._4_4_;
  fStack_4f8 = auVar47._8_4_;
  fStack_4f4 = auVar47._12_4_;
  fStack_4f0 = auVar47._16_4_;
  fStack_4ec = auVar47._20_4_;
  fStack_4e8 = auVar47._24_4_;
  fStack_4e4 = auVar47._28_4_;
  local_4c0 = auVar66._0_4_;
  fStack_4bc = auVar66._4_4_;
  fStack_4b8 = auVar66._8_4_;
  fStack_4b4 = auVar66._12_4_;
  fStack_4b0 = auVar66._16_4_;
  fStack_4ac = auVar66._20_4_;
  fStack_4a8 = auVar66._24_4_;
  fStack_4a4 = auVar66._28_4_;
  local_4a0 = auVar133._0_4_;
  fStack_49c = auVar133._4_4_;
  fStack_498 = auVar133._8_4_;
  fStack_494 = auVar133._12_4_;
  fStack_490 = auVar133._16_4_;
  fStack_48c = auVar133._20_4_;
  fStack_488 = auVar133._24_4_;
  fStack_484 = auVar133._28_4_;
  local_560 = auVar120._0_4_;
  fStack_55c = auVar120._4_4_;
  fStack_558 = auVar120._8_4_;
  fStack_554 = auVar120._12_4_;
  fStack_550 = auVar120._16_4_;
  fStack_54c = auVar120._20_4_;
  fStack_548 = auVar120._24_4_;
  fStack_544 = auVar120._28_4_;
  local_520 = auVar130._0_4_;
  fStack_51c = auVar130._4_4_;
  fStack_518 = auVar130._8_4_;
  fStack_514 = auVar130._12_4_;
  fStack_510 = auVar130._16_4_;
  fStack_50c = auVar130._20_4_;
  fStack_508 = auVar130._24_4_;
  fStack_504 = auVar130._28_4_;
  auVar36 = auVar105._0_16_;
  auVar64 = auVar105._16_16_;
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + local_400) = auVar135._0_4_;
  }
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar135,1);
    *(undefined4 *)(param_1 + iStack_3fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar135,2);
    *(undefined4 *)(param_1 + iStack_3f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar135,3);
    *(undefined4 *)(param_1 + iStack_3f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + iStack_3f0) = auVar138._16_4_;
  }
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + iStack_3ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + iStack_3e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + iStack_3e4) = uVar5;
    auVar98._0_4_ = fVar44 * local_3c0 * fVar6 + local_4c0;
    auVar98._4_4_ = fVar45 * fStack_3bc * fVar35 + fStack_4bc;
    auVar98._8_4_ = fVar46 * fStack_3b8 * fVar40 + fStack_4b8;
    auVar98._12_4_ = fVar63 * fStack_3b4 * fVar34 + fStack_4b4;
    auVar98._16_4_ = fVar68 * fStack_3b0 * fVar39 + fStack_4b0;
    auVar98._20_4_ = fVar69 * fStack_3ac * fVar41 + fStack_4ac;
    auVar98._24_4_ = fVar70 * fStack_3a8 * fVar42 + fStack_4a8;
    auVar98._28_4_ = fVar71 * fStack_3a4 * fVar43 + fStack_4a4;
  }
  else {
    auVar98._0_4_ = fVar44 * local_3c0 * fVar6 + local_4c0;
    auVar98._4_4_ = fVar45 * fStack_3bc * fVar35 + fStack_4bc;
    auVar98._8_4_ = fVar46 * fStack_3b8 * fVar40 + fStack_4b8;
    auVar98._12_4_ = fVar63 * fStack_3b4 * fVar34 + fStack_4b4;
    auVar98._16_4_ = fVar68 * fStack_3b0 * fVar39 + fStack_4b0;
    auVar98._20_4_ = fVar69 * fStack_3ac * fVar41 + fStack_4ac;
    auVar98._24_4_ = fVar70 * fStack_3a8 * fVar42 + fStack_4a8;
    auVar98._28_4_ = fVar71 * fStack_3a4 * fVar43 + fStack_4a4;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_400) = auVar98._0_4_;
  }
  auVar131 = auVar98._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_3f0) = auVar98._16_4_;
  }
  auVar131 = auVar98._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3e4) = uVar5;
    auVar121._0_4_ = fVar44 * fVar6 * local_3a0 + auVar77._0_4_;
    auVar121._4_4_ = fVar45 * fVar35 * fStack_39c + auVar77._4_4_;
    auVar121._8_4_ = fVar46 * fVar40 * fStack_398 + auVar77._8_4_;
    auVar121._12_4_ = fVar63 * fVar34 * fStack_394 + auVar77._12_4_;
    auVar121._16_4_ = fVar68 * fVar39 * fStack_390 + auVar77._16_4_;
    auVar121._20_4_ = fVar69 * fVar41 * fStack_38c + auVar77._20_4_;
    auVar121._24_4_ = fVar70 * fVar42 * fStack_388 + auVar77._24_4_;
    auVar121._28_4_ = fVar71 * fVar43 * fStack_384 + auVar77._28_4_;
  }
  else {
    auVar121._0_4_ = fVar44 * fVar6 * local_3a0 + auVar77._0_4_;
    auVar121._4_4_ = fVar45 * fVar35 * fStack_39c + auVar77._4_4_;
    auVar121._8_4_ = fVar46 * fVar40 * fStack_398 + auVar77._8_4_;
    auVar121._12_4_ = fVar63 * fVar34 * fStack_394 + auVar77._12_4_;
    auVar121._16_4_ = fVar68 * fVar39 * fStack_390 + auVar77._16_4_;
    auVar121._20_4_ = fVar69 * fVar41 * fStack_38c + auVar77._20_4_;
    auVar121._24_4_ = fVar70 * fVar42 * fStack_388 + auVar77._24_4_;
    auVar121._28_4_ = fVar71 * fVar43 * fStack_384 + auVar77._28_4_;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_400) = auVar121._0_4_;
  }
  auVar131 = auVar121._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_3f0) = auVar121._16_4_;
  }
  auVar131 = auVar121._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3e4) = uVar5;
  }
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_400) = fVar44;
  }
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_3f0) = fVar68;
  }
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar76,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar76,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar76,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3e4) = uVar5;
    auVar89._0_4_ = -(local_4e0 * local_3e0) + local_4a0;
    auVar89._4_4_ = -(fStack_4dc * fStack_3dc) + fStack_49c;
    auVar89._8_4_ = -(fStack_4d8 * fStack_3d8) + fStack_498;
    auVar89._12_4_ = -(fStack_4d4 * fStack_3d4) + fStack_494;
    auVar89._16_4_ = -(fStack_4d0 * fStack_3d0) + fStack_490;
    auVar89._20_4_ = -(fStack_4cc * fStack_3cc) + fStack_48c;
    auVar89._24_4_ = -(fStack_4c8 * fStack_3c8) + fStack_488;
    auVar89._28_4_ = -(fStack_4c4 * fStack_3c4) + fStack_484;
  }
  else {
    auVar89._0_4_ = -(local_4e0 * local_3e0) + local_4a0;
    auVar89._4_4_ = -(fStack_4dc * fStack_3dc) + fStack_49c;
    auVar89._8_4_ = -(fStack_4d8 * fStack_3d8) + fStack_498;
    auVar89._12_4_ = -(fStack_4d4 * fStack_3d4) + fStack_494;
    auVar89._16_4_ = -(fStack_4d0 * fStack_3d0) + fStack_490;
    auVar89._20_4_ = -(fStack_4cc * fStack_3cc) + fStack_48c;
    auVar89._24_4_ = -(fStack_4c8 * fStack_3c8) + fStack_488;
    auVar89._28_4_ = -(fStack_4c4 * fStack_3c4) + fStack_484;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + (int)local_500) = auVar89._0_4_;
  }
  auVar65 = auVar89._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + (int)fStack_4fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + (int)fStack_4f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + (int)fStack_4f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_4f0) = auVar89._16_4_;
  }
  auVar65 = auVar89._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + (int)fStack_4ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + (int)fStack_4e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + (int)fStack_4e4) = uVar5;
    auVar67._0_4_ = -(local_4e0 * local_3c0 * fVar6) + local_560;
    auVar67._4_4_ = -(fStack_4dc * fStack_3bc * fVar35) + fStack_55c;
    auVar67._8_4_ = -(fStack_4d8 * fStack_3b8 * fVar40) + fStack_558;
    auVar67._12_4_ = -(fStack_4d4 * fStack_3b4 * fVar34) + fStack_554;
    auVar67._16_4_ = -(fStack_4d0 * fStack_3b0 * fVar39) + fStack_550;
    auVar67._20_4_ = -(fStack_4cc * fStack_3ac * fVar41) + fStack_54c;
    auVar67._24_4_ = -(fStack_4c8 * fStack_3a8 * fVar42) + fStack_548;
    auVar67._28_4_ = -(fStack_4c4 * fStack_3a4 * fVar43) + fStack_544;
  }
  else {
    auVar67._0_4_ = -(local_4e0 * local_3c0 * fVar6) + local_560;
    auVar67._4_4_ = -(fStack_4dc * fStack_3bc * fVar35) + fStack_55c;
    auVar67._8_4_ = -(fStack_4d8 * fStack_3b8 * fVar40) + fStack_558;
    auVar67._12_4_ = -(fStack_4d4 * fStack_3b4 * fVar34) + fStack_554;
    auVar67._16_4_ = -(fStack_4d0 * fStack_3b0 * fVar39) + fStack_550;
    auVar67._20_4_ = -(fStack_4cc * fStack_3ac * fVar41) + fStack_54c;
    auVar67._24_4_ = -(fStack_4c8 * fStack_3a8 * fVar42) + fStack_548;
    auVar67._28_4_ = -(fStack_4c4 * fStack_3a4 * fVar43) + fStack_544;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_500) = auVar67._0_4_;
  }
  auVar65 = auVar67._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_4f0) = auVar67._16_4_;
  }
  auVar65 = auVar67._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4e4) = uVar5;
    auVar79._0_4_ = -(local_4e0 * fVar6 * local_3a0) + local_520;
    auVar79._4_4_ = -(fStack_4dc * fVar35 * fStack_39c) + fStack_51c;
    auVar79._8_4_ = -(fStack_4d8 * fVar40 * fStack_398) + fStack_518;
    auVar79._12_4_ = -(fStack_4d4 * fVar34 * fStack_394) + fStack_514;
    auVar79._16_4_ = -(fStack_4d0 * fVar39 * fStack_390) + fStack_510;
    auVar79._20_4_ = -(fStack_4cc * fVar41 * fStack_38c) + fStack_50c;
    auVar79._24_4_ = -(fStack_4c8 * fVar42 * fStack_388) + fStack_508;
    auVar79._28_4_ = -(fStack_4c4 * fVar43 * fStack_384) + fStack_504;
  }
  else {
    auVar79._0_4_ = -(local_4e0 * fVar6 * local_3a0) + local_520;
    auVar79._4_4_ = -(fStack_4dc * fVar35 * fStack_39c) + fStack_51c;
    auVar79._8_4_ = -(fStack_4d8 * fVar40 * fStack_398) + fStack_518;
    auVar79._12_4_ = -(fStack_4d4 * fVar34 * fStack_394) + fStack_514;
    auVar79._16_4_ = -(fStack_4d0 * fVar39 * fStack_390) + fStack_510;
    auVar79._20_4_ = -(fStack_4cc * fVar41 * fStack_38c) + fStack_50c;
    auVar79._24_4_ = -(fStack_4c8 * fVar42 * fStack_388) + fStack_508;
    auVar79._28_4_ = -(fStack_4c4 * fVar43 * fStack_384) + fStack_504;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_500) = auVar79._0_4_;
  }
  auVar65 = auVar79._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_4f0) = auVar79._16_4_;
  }
  auVar65 = auVar79._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4e4) = uVar5;
  }
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_500) = local_4e0;
  }
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_4f0) = fStack_4d0;
  }
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar64,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar64,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar64,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4e4) = uVar5;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2 @ 140912700

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               longlong param_6,undefined8 param_7,uint param_8)

{
  undefined1 (*pauVar1) [28];
  float *pfVar2;
  undefined1 (*pauVar3) [32];
  undefined1 uVar4;
  undefined1 auVar5 [32];
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [28];
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  int iVar21;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 *puVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  float fVar36;
  int iVar37;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  float fVar47;
  undefined1 auVar40 [32];
  float fVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar50 [32];
  uint uVar65;
  float fVar66;
  undefined1 auVar67 [16];
  uint uVar69;
  float fVar70;
  uint uVar71;
  float fVar72;
  uint uVar73;
  float fVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  undefined1 auVar68 [32];
  int iVar79;
  undefined1 auVar81 [16];
  undefined1 in_ZMM3 [64];
  float fVar82;
  int iVar83;
  float fVar91;
  undefined1 auVar84 [32];
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 in_ZMM4 [64];
  undefined1 auVar92 [32];
  undefined1 auVar93 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 in_ZMM7 [64];
  float fVar99;
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [16];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [16];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  float fVar115;
  float fVar121;
  undefined1 auVar116 [16];
  float fVar119;
  float fVar120;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  float fVar125;
  undefined1 auVar126 [16];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [16];
  undefined1 auVar130 [32];
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
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar80;
  undefined1 auVar102 [32];
  
  uVar14 = __real_00000004;
  fVar8 = __real_3f800000;
  uVar7 = __real_38d1b717;
  uVar15 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar15 = param_8;
  }
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar31 = 0;
    do {
      auVar5 = *(undefined1 (*) [32])(param_2 + uVar18 * 2);
      auVar40 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar18 * 2);
      auVar38 = vshufps_avx(auVar5,auVar40,0x88);
      auVar38 = vpermpd_avx2(auVar38,0xd8);
      auVar92 = vpslld_avx2(auVar38,4);
      auVar38 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar101 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar38);
      auVar5 = vshufps_avx(auVar5,auVar40,0xdd);
      auVar50 = vpermpd_avx2(auVar5,0xd8);
      auVar103._4_4_ = uVar14;
      auVar103._0_4_ = uVar14;
      auVar103._8_4_ = uVar14;
      auVar103._12_4_ = uVar14;
      auVar103._16_4_ = uVar14;
      auVar103._20_4_ = uVar14;
      auVar103._24_4_ = uVar14;
      auVar103._28_4_ = uVar14;
      auVar5 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar40 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar38 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
      auVar117 = vpslld_avx2(auVar50,4);
      auVar50 = vpcmpeqd_avx2(auVar50,auVar50);
      auVar109 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar50);
      auVar130 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar5);
      auVar5 = vpcmpeqd_avx2(auVar92 | auVar103,auVar92 | auVar103);
      auVar127 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar118 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar38);
      auVar97 = vgatherdps(ZEXT832(0) << 0x20,auVar5);
      auVar5 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar105 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar81._8_8_ = 0;
      auVar81._0_8_ = *(ulonglong *)(param_6 + uVar31);
      auVar40 = vpmovzxbd_avx2(auVar81);
      auVar95 = vgatherdps(ZEXT832(0),auVar5);
      in_ZMM7 = ZEXT3264(auVar95);
      auVar38 = vpslld_avx2(auVar40,2);
      auVar5 = vpmovzxdq_avx2(auVar38._0_16_);
      vpmovzxdq_avx2(auVar38._16_16_);
      auVar81 = vpcmpeqd_avx(auVar40._0_16_,auVar40._0_16_);
      auVar93 = vgatherqps(ZEXT816(0) << 0x20,auVar81);
      auVar81 = vpcmpeqd_avx(auVar5._0_16_,auVar5._0_16_);
      auVar81 = vgatherqps(ZEXT816(0) << 0x40,auVar81);
      auVar5 = vsubps_avx(auVar101,auVar109);
      auVar38 = vsubps_avx(auVar130,auVar97);
      auVar50 = vsubps_avx(auVar127,auVar105);
      auVar106._0_4_ =
           auVar50._0_4_ * auVar50._0_4_ +
           auVar5._0_4_ * auVar5._0_4_ + auVar38._0_4_ * auVar38._0_4_;
      auVar106._4_4_ =
           auVar50._4_4_ * auVar50._4_4_ +
           auVar5._4_4_ * auVar5._4_4_ + auVar38._4_4_ * auVar38._4_4_;
      auVar106._8_4_ =
           auVar50._8_4_ * auVar50._8_4_ +
           auVar5._8_4_ * auVar5._8_4_ + auVar38._8_4_ * auVar38._8_4_;
      auVar106._12_4_ =
           auVar50._12_4_ * auVar50._12_4_ +
           auVar5._12_4_ * auVar5._12_4_ + auVar38._12_4_ * auVar38._12_4_;
      auVar106._16_4_ =
           auVar50._16_4_ * auVar50._16_4_ +
           auVar5._16_4_ * auVar5._16_4_ + auVar38._16_4_ * auVar38._16_4_;
      auVar106._20_4_ =
           auVar50._20_4_ * auVar50._20_4_ +
           auVar5._20_4_ * auVar5._20_4_ + auVar38._20_4_ * auVar38._20_4_;
      auVar106._24_4_ =
           auVar50._24_4_ * auVar50._24_4_ +
           auVar5._24_4_ * auVar5._24_4_ + auVar38._24_4_ * auVar38._24_4_;
      auVar106._28_4_ =
           auVar50._28_4_ * auVar50._28_4_ +
           auVar5._28_4_ * auVar5._28_4_ + auVar38._28_4_ * auVar38._28_4_;
      auVar103 = vsqrtps_avx(auVar106);
      auVar40 = vdivps_avx(auVar5,auVar103);
      auVar38 = vdivps_avx(auVar38,auVar103);
      uVar34 = uVar18 & 0xffffffff;
      auVar50 = vdivps_avx(auVar50,auVar103);
      auVar5._4_4_ = uVar7;
      auVar5._0_4_ = uVar7;
      auVar5._8_4_ = uVar7;
      auVar5._12_4_ = uVar7;
      auVar5._16_4_ = uVar7;
      auVar5._20_4_ = uVar7;
      auVar5._24_4_ = uVar7;
      auVar5._28_4_ = uVar7;
      auVar5 = vcmpps_avx(auVar106,auVar5,1);
      uVar65 = auVar5._0_4_;
      auVar112._0_4_ = ~uVar65 & auVar103._0_4_;
      uVar69 = auVar5._4_4_;
      auVar112._4_4_ = ~uVar69 & auVar103._4_4_;
      uVar71 = auVar5._8_4_;
      auVar112._8_4_ = ~uVar71 & auVar103._8_4_;
      uVar73 = auVar5._12_4_;
      auVar112._12_4_ = ~uVar73 & auVar103._12_4_;
      uVar75 = auVar5._16_4_;
      auVar112._16_4_ = ~uVar75 & auVar103._16_4_;
      uVar76 = auVar5._20_4_;
      auVar112._20_4_ = ~uVar76 & auVar103._20_4_;
      uVar77 = auVar5._24_4_;
      auVar112._24_4_ = ~uVar77 & auVar103._24_4_;
      uVar78 = auVar5._28_4_;
      auVar112._28_4_ = ~uVar78 & auVar103._28_4_;
      auVar103 = vsubps_avx(auVar112,*(undefined1 (*) [32])(param_3 + uVar34));
      fVar48 = param_5 * param_5 * auVar93._0_4_;
      fVar51 = param_5 * param_5 * auVar93._4_4_;
      fVar53 = param_5 * param_5 * auVar93._8_4_;
      fVar55 = param_5 * param_5 * auVar93._12_4_;
      fVar57 = param_5 * param_5 * auVar81._0_4_;
      fVar59 = param_5 * param_5 * auVar81._4_4_;
      fVar61 = param_5 * param_5 * auVar81._8_4_;
      fVar63 = param_5 * param_5 * auVar81._12_4_;
      pauVar1 = (undefined1 (*) [28])(param_4 + uVar34);
      auVar13 = *pauVar1;
      fVar99 = *(float *)pauVar1[1];
      auVar84._0_4_ = -(fVar48 * auVar103._0_4_) - *(float *)*pauVar1;
      auVar84._4_4_ = -(fVar51 * auVar103._4_4_) - *(float *)(*pauVar1 + 4);
      auVar84._8_4_ = -(fVar53 * auVar103._8_4_) - *(float *)(*pauVar1 + 8);
      auVar84._12_4_ = -(fVar55 * auVar103._12_4_) - *(float *)(*pauVar1 + 0xc);
      auVar84._16_4_ = -(fVar57 * auVar103._16_4_) - *(float *)(*pauVar1 + 0x10);
      auVar84._20_4_ = -(fVar59 * auVar103._20_4_) - *(float *)(*pauVar1 + 0x14);
      auVar84._24_4_ = -(fVar61 * auVar103._24_4_) - *(float *)(*pauVar1 + 0x18);
      auVar84._28_4_ = -(fVar63 * auVar103._28_4_) - fVar99;
      fVar66 = auVar95._0_4_;
      fVar115 = auVar118._0_4_;
      fVar9 = auVar95._4_4_;
      fVar119 = auVar118._4_4_;
      fVar70 = auVar95._8_4_;
      fVar120 = auVar118._8_4_;
      fVar10 = auVar95._12_4_;
      fVar121 = auVar118._12_4_;
      fVar72 = auVar95._16_4_;
      fVar122 = auVar118._16_4_;
      fVar11 = auVar95._20_4_;
      fVar123 = auVar118._20_4_;
      fVar74 = auVar95._24_4_;
      fVar124 = auVar118._24_4_;
      fVar12 = auVar95._28_4_;
      fVar125 = auVar118._28_4_;
      auVar110._4_4_ = fVar8;
      auVar110._0_4_ = fVar8;
      auVar110._8_4_ = fVar8;
      auVar110._12_4_ = fVar8;
      auVar110._16_4_ = fVar8;
      auVar110._20_4_ = fVar8;
      auVar110._24_4_ = fVar8;
      auVar110._28_4_ = fVar8;
      in_ZMM3 = ZEXT3264(auVar110);
      auVar39._0_4_ = fVar48 * (fVar115 + fVar66) + fVar8;
      auVar39._4_4_ = fVar51 * (fVar119 + fVar9) + fVar8;
      auVar39._8_4_ = fVar53 * (fVar120 + fVar70) + fVar8;
      auVar39._12_4_ = fVar55 * (fVar121 + fVar10) + fVar8;
      auVar39._16_4_ = fVar57 * (fVar122 + fVar72) + fVar8;
      auVar39._20_4_ = fVar59 * (fVar123 + fVar11) + fVar8;
      auVar39._24_4_ = fVar61 * (fVar124 + fVar74) + fVar8;
      auVar39._28_4_ = fVar63 * (fVar125 + fVar12) + fVar8;
      auVar103 = vdivps_avx(auVar84,auVar39);
      auVar5 = vblendvps_avx(auVar40,auVar110,auVar5);
      fVar48 = auVar103._0_4_;
      fVar82 = auVar5._0_4_ * fVar48;
      fVar51 = auVar103._4_4_;
      fVar85 = auVar5._4_4_ * fVar51;
      fVar53 = auVar103._8_4_;
      fVar86 = auVar5._8_4_ * fVar53;
      fVar55 = auVar103._12_4_;
      fVar87 = auVar5._12_4_ * fVar55;
      fVar57 = auVar103._16_4_;
      fVar88 = auVar5._16_4_ * fVar57;
      fVar59 = auVar103._20_4_;
      fVar89 = auVar5._20_4_ * fVar59;
      fVar61 = auVar103._24_4_;
      fVar90 = auVar5._24_4_ * fVar61;
      fVar63 = auVar103._28_4_;
      fVar91 = auVar5._28_4_ * fVar63;
      in_ZMM4 = ZEXT3264(CONCAT428(fVar91,CONCAT424(fVar90,CONCAT420(fVar89,CONCAT416(fVar88,
                                                  CONCAT412(fVar87,CONCAT48(fVar86,CONCAT44(fVar85,
                                                  fVar82))))))));
      auVar100._0_4_ = fVar115 * fVar82 + auVar101._0_4_;
      auVar100._4_4_ = fVar119 * fVar85 + auVar101._4_4_;
      auVar100._8_4_ = fVar120 * fVar86 + auVar101._8_4_;
      auVar100._12_4_ = fVar121 * fVar87 + auVar101._12_4_;
      auVar102._16_4_ = fVar122 * fVar88 + auVar101._16_4_;
      auVar102._0_16_ = auVar100;
      auVar102._20_4_ = fVar123 * fVar89 + auVar101._20_4_;
      auVar102._24_4_ = fVar124 * fVar90 + auVar101._24_4_;
      auVar102._28_4_ = fVar125 * fVar91 + auVar101._28_4_;
      lVar35 = (longlong)auVar92._0_4_;
      lVar32 = (longlong)auVar92._4_4_;
      *(float *)(param_1 + lVar35) = auVar100._0_4_;
      lVar33 = (longlong)auVar92._8_4_;
      uVar6 = vextractps_avx(auVar100,1);
      *(undefined4 *)(param_1 + lVar32) = uVar6;
      lVar28 = (longlong)auVar92._12_4_;
      uVar6 = vextractps_avx(auVar100,2);
      *(undefined4 *)(param_1 + lVar33) = uVar6;
      lVar17 = (longlong)auVar92._16_4_;
      uVar6 = vextractps_avx(auVar100,3);
      *(undefined4 *)(param_1 + lVar28) = uVar6;
      auVar81 = auVar102._16_16_;
      lVar30 = (longlong)auVar92._20_4_;
      *(float *)(param_1 + lVar17) = auVar102._16_4_;
      lVar19 = (longlong)auVar92._24_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + lVar30) = uVar6;
      lVar27 = (longlong)auVar92._28_4_;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + lVar19) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + lVar27) = uVar6;
      local_360 = auVar38._0_4_;
      fStack_35c = auVar38._4_4_;
      fStack_358 = auVar38._8_4_;
      fStack_354 = auVar38._12_4_;
      fStack_350 = auVar38._16_4_;
      fStack_34c = auVar38._20_4_;
      fStack_348 = auVar38._24_4_;
      fStack_344 = auVar38._28_4_;
      fVar49 = (float)(~uVar65 & (uint)local_360) * fVar48;
      fVar52 = (float)(~uVar69 & (uint)fStack_35c) * fVar51;
      fVar54 = (float)(~uVar71 & (uint)fStack_358) * fVar53;
      fVar56 = (float)(~uVar73 & (uint)fStack_354) * fVar55;
      fVar58 = (float)(~uVar75 & (uint)fStack_350) * fVar57;
      fVar60 = (float)(~uVar76 & (uint)fStack_34c) * fVar59;
      fVar62 = (float)(~uVar77 & (uint)fStack_348) * fVar61;
      fVar64 = (float)(~uVar78 & (uint)fStack_344) * fVar63;
      auVar129._0_4_ = fVar115 * fVar49 + auVar130._0_4_;
      auVar129._4_4_ = fVar119 * fVar52 + auVar130._4_4_;
      auVar129._8_4_ = fVar120 * fVar54 + auVar130._8_4_;
      auVar129._12_4_ = fVar121 * fVar56 + auVar130._12_4_;
      auVar101._16_4_ = fVar122 * fVar58 + auVar130._16_4_;
      auVar101._0_16_ = auVar129;
      auVar101._20_4_ = fVar123 * fVar60 + auVar130._20_4_;
      auVar101._24_4_ = fVar124 * fVar62 + auVar130._24_4_;
      auVar101._28_4_ = fVar125 * fVar64 + auVar130._28_4_;
      *(float *)(param_1 + 4 + lVar35) = auVar129._0_4_;
      uVar6 = vextractps_avx(auVar129,1);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar129,2);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar6;
      uVar6 = vextractps_avx(auVar129,3);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar6;
      auVar81 = auVar101._16_16_;
      *(float *)(param_1 + 4 + lVar17) = auVar101._16_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar6;
      fVar36 = (float)(~uVar65 & auVar50._0_4_) * fVar48;
      fVar41 = (float)(~uVar69 & auVar50._4_4_) * fVar51;
      fVar42 = (float)(~uVar71 & auVar50._8_4_) * fVar53;
      fVar43 = (float)(~uVar73 & auVar50._12_4_) * fVar55;
      fVar44 = (float)(~uVar75 & auVar50._16_4_) * fVar57;
      fVar45 = (float)(~uVar76 & auVar50._20_4_) * fVar59;
      fVar46 = (float)(~uVar77 & auVar50._24_4_) * fVar61;
      fVar47 = (float)(~uVar78 & auVar50._28_4_) * fVar63;
      auVar126._0_4_ = fVar115 * fVar36 + auVar127._0_4_;
      auVar126._4_4_ = fVar119 * fVar41 + auVar127._4_4_;
      auVar126._8_4_ = fVar120 * fVar42 + auVar127._8_4_;
      auVar126._12_4_ = fVar121 * fVar43 + auVar127._12_4_;
      auVar92._16_4_ = fVar122 * fVar44 + auVar127._16_4_;
      auVar92._0_16_ = auVar126;
      auVar92._20_4_ = fVar123 * fVar45 + auVar127._20_4_;
      auVar92._24_4_ = fVar124 * fVar46 + auVar127._24_4_;
      auVar92._28_4_ = fVar125 * fVar47 + auVar127._28_4_;
      *(float *)(param_1 + 8 + lVar35) = auVar126._0_4_;
      uVar6 = vextractps_avx(auVar126,1);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar126,2);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar6;
      uVar6 = vextractps_avx(auVar126,3);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar6;
      auVar81 = auVar92._16_16_;
      *(float *)(param_1 + 8 + lVar17) = auVar92._16_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar6;
      *(float *)(param_1 + 0xc + lVar35) = fVar115;
      auVar81 = auVar118._0_16_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar6;
      auVar81 = auVar118._16_16_;
      *(float *)(param_1 + 0xc + lVar17) = fVar122;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar6;
      auVar108._0_4_ = fVar66 * fVar82 + auVar109._0_4_;
      auVar108._4_4_ = fVar9 * fVar85 + auVar109._4_4_;
      auVar108._8_4_ = fVar70 * fVar86 + auVar109._8_4_;
      auVar108._12_4_ = fVar10 * fVar87 + auVar109._12_4_;
      auVar50._16_4_ = fVar72 * fVar88 + auVar109._16_4_;
      auVar50._0_16_ = auVar108;
      auVar50._20_4_ = fVar11 * fVar89 + auVar109._20_4_;
      auVar50._24_4_ = fVar74 * fVar90 + auVar109._24_4_;
      auVar50._28_4_ = fVar12 * fVar91 + auVar109._28_4_;
      local_340 = auVar117._0_4_;
      fStack_33c = auVar117._4_4_;
      fStack_338 = auVar117._8_4_;
      fStack_334 = auVar117._12_4_;
      fStack_330 = auVar117._16_4_;
      fStack_32c = auVar117._20_4_;
      fStack_328 = auVar117._24_4_;
      fStack_324 = auVar117._28_4_;
      lVar17 = (longlong)(int)local_340;
      *(float *)(param_1 + lVar17) = auVar108._0_4_;
      lVar28 = (longlong)(int)fStack_33c;
      uVar6 = vextractps_avx(auVar108,1);
      *(undefined4 *)(param_1 + lVar28) = uVar6;
      lVar30 = (longlong)(int)fStack_338;
      uVar6 = vextractps_avx(auVar108,2);
      *(undefined4 *)(param_1 + lVar30) = uVar6;
      lVar19 = (longlong)(int)fStack_334;
      uVar6 = vextractps_avx(auVar108,3);
      *(undefined4 *)(param_1 + lVar19) = uVar6;
      lVar27 = (longlong)(int)fStack_330;
      auVar81 = auVar50._16_16_;
      *(float *)(param_1 + lVar27) = auVar50._16_4_;
      lVar35 = (longlong)(int)fStack_32c;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + lVar35) = uVar6;
      lVar32 = (longlong)(int)fStack_328;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + lVar32) = uVar6;
      lVar33 = (longlong)(int)fStack_324;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + lVar33) = uVar6;
      auVar93._0_4_ = fVar66 * fVar49 + auVar97._0_4_;
      auVar93._4_4_ = fVar9 * fVar52 + auVar97._4_4_;
      auVar93._8_4_ = fVar70 * fVar54 + auVar97._8_4_;
      auVar93._12_4_ = fVar10 * fVar56 + auVar97._12_4_;
      auVar40._16_4_ = fVar72 * fVar58 + auVar97._16_4_;
      auVar40._0_16_ = auVar93;
      auVar40._20_4_ = fVar11 * fVar60 + auVar97._20_4_;
      auVar40._24_4_ = fVar74 * fVar62 + auVar97._24_4_;
      auVar40._28_4_ = fVar12 * fVar64 + auVar97._28_4_;
      *(float *)(param_1 + 4 + lVar17) = auVar93._0_4_;
      uVar6 = vextractps_avx(auVar93,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar6;
      uVar6 = vextractps_avx(auVar93,2);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar93,3);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar6;
      auVar81 = auVar40._16_16_;
      *(float *)(param_1 + 4 + lVar27) = auVar40._16_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 4 + lVar35) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar6;
      auVar104._0_4_ = fVar66 * fVar36 + auVar105._0_4_;
      auVar104._4_4_ = fVar9 * fVar41 + auVar105._4_4_;
      auVar104._8_4_ = fVar70 * fVar42 + auVar105._8_4_;
      auVar104._12_4_ = fVar10 * fVar43 + auVar105._12_4_;
      auVar38._16_4_ = fVar72 * fVar44 + auVar105._16_4_;
      auVar38._0_16_ = auVar104;
      auVar38._20_4_ = fVar11 * fVar45 + auVar105._20_4_;
      auVar38._24_4_ = fVar74 * fVar46 + auVar105._24_4_;
      auVar38._28_4_ = fVar12 * fVar47 + auVar105._28_4_;
      *(float *)(param_1 + 8 + lVar17) = auVar104._0_4_;
      uVar6 = vextractps_avx(auVar104,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar6;
      uVar6 = vextractps_avx(auVar104,2);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar104,3);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar6;
      auVar81 = auVar38._16_16_;
      *(float *)(param_1 + 8 + lVar27) = auVar38._16_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar6;
      local_320 = auVar13._0_4_;
      fStack_31c = auVar13._4_4_;
      fStack_318 = auVar13._8_4_;
      fStack_314 = auVar13._12_4_;
      fStack_310 = auVar13._16_4_;
      fStack_30c = auVar13._20_4_;
      fStack_308 = auVar13._24_4_;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar6;
      pfVar2 = (float *)(param_4 + uVar34);
      *pfVar2 = fVar48 + local_320;
      pfVar2[1] = fVar51 + fStack_31c;
      pfVar2[2] = fVar53 + fStack_318;
      pfVar2[3] = fVar55 + fStack_314;
      pfVar2[4] = fVar57 + fStack_310;
      pfVar2[5] = fVar59 + fStack_30c;
      pfVar2[6] = fVar61 + fStack_308;
      pfVar2[7] = fVar63 + fVar99;
      *(float *)(param_1 + 0xc + lVar17) = fVar66;
      auVar81 = auVar95._0_16_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar6;
      auVar81 = auVar95._16_16_;
      *(float *)(param_1 + 0xc + lVar27) = fVar72;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 0xc + lVar35) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar6;
      uVar31 = uVar31 + 8;
      uVar18 = uVar18 + 0x20;
    } while ((int)uVar31 < (int)(uVar15 & 0xfffffff8));
    if ((int)param_8 <= (int)uVar31) {
      return;
    }
  }
  iVar16 = (int)uVar31;
  auVar95._4_4_ = iVar16;
  auVar95._0_4_ = iVar16;
  auVar95._8_4_ = iVar16;
  auVar95._12_4_ = iVar16;
  auVar95._16_4_ = iVar16;
  auVar95._20_4_ = iVar16;
  auVar95._24_4_ = iVar16;
  auVar95._28_4_ = iVar16;
  auVar5 = vpor_avx2(auVar95,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar97._4_4_ = param_8;
  auVar97._0_4_ = param_8;
  auVar97._8_4_ = param_8;
  auVar97._12_4_ = param_8;
  auVar97._16_4_ = param_8;
  auVar97._20_4_ = param_8;
  auVar97._24_4_ = param_8;
  auVar97._28_4_ = param_8;
  auVar5 = vpcmpgtd_avx2(auVar97,auVar5);
  uVar31 = uVar31 & 0xffffffff;
  pauVar3 = (undefined1 (*) [32])(param_2 + uVar31 * 8);
  uVar15 = vmovmskps_avx(auVar5);
  if (uVar15 == 0xff) {
    auVar40 = *pauVar3;
    auVar38 = pauVar3[1];
    auVar50 = vshufps_avx(auVar40,auVar38,0x88);
    auVar50 = vpermpd_avx2(auVar50,0xd8);
    auVar40 = vshufps_avx(auVar40,auVar38,0xdd);
    auVar40 = vpermpd_avx2(auVar40,0xd8);
  }
  else {
    auVar50 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar5);
    auVar40 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar5);
  }
  auVar84 = vpslld_avx2(auVar50,4);
  auVar38 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar5);
  auVar67 = auVar38._0_16_;
  auVar50 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar5);
  auVar103 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar5);
  auVar95 = vgatherdps(ZEXT832(0) << 0x20,auVar5);
  auVar92 = vpslld_avx2(auVar40,4);
  auVar110 = vgatherdps(ZEXT832(0),auVar5);
  auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar5);
  auVar106 = vgatherdps(ZEXT832(0),auVar5);
  auVar97 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar5);
  auVar40 = vmaskmovps_avx(auVar5,auVar38);
  auVar38 = vmaskmovps_avx(auVar5,auVar50);
  auVar50 = vmaskmovps_avx(auVar5,auVar103);
  auVar103 = vmaskmovps_avx(auVar5,auVar110);
  auVar110 = vmaskmovps_avx(auVar5,auVar112);
  auVar106 = vmaskmovps_avx(auVar5,auVar106);
  lVar17 = (longlong)(iVar16 << 2);
  auVar112 = vmaskmovps_avx(auVar5,*(undefined1 (*) [32])(param_3 + lVar17));
  auVar39 = vmaskmovps_avx(auVar5,*(undefined1 (*) [32])(param_4 + lVar17));
  bVar20 = (byte)uVar15;
  if ((~bVar20 & 0x81) == 0) {
    auVar67._8_8_ = 0;
    auVar67._0_8_ = *(ulonglong *)(param_6 + uVar31);
  }
  else {
    puVar29 = (undefined1 *)(param_6 + uVar31);
    if ((uVar15 & 1) != 0) {
      uVar4 = *puVar29;
      auVar67[1] = uVar4;
      auVar67[0] = uVar4;
      auVar67[2] = uVar4;
      auVar67[3] = uVar4;
      auVar67[4] = uVar4;
      auVar67[5] = uVar4;
      auVar67[6] = uVar4;
      auVar67[7] = uVar4;
      auVar67[8] = uVar4;
      auVar67[9] = uVar4;
      auVar67[10] = uVar4;
      auVar67[0xb] = uVar4;
      auVar67[0xc] = uVar4;
      auVar67[0xd] = uVar4;
      auVar67[0xe] = uVar4;
      auVar67[0xf] = uVar4;
    }
    if ((uVar15 & 2) != 0) {
      auVar81 = vpinsrb_avx(auVar67,(uint)(byte)puVar29[1],1);
      auVar67 = vpblendw_avx(auVar81,auVar67,0xe);
    }
    if ((uVar15 & 4) != 0) {
      auVar81 = vpmovzxwd_avx(auVar67);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[2],2);
      auVar81 = vpinsrb_avx(auVar81,(uint)auVar67[3],3);
      auVar67 = vpblendd_avx2(auVar81,auVar67,2);
    }
    if ((uVar15 & 8) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048080030280020100);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[3],3);
      auVar67 = vpblendd_avx2(auVar81,auVar67,2);
    }
    if ((uVar15 & 0x10) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048080030203020100);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[4],4);
      auVar81 = vpinsrb_avx(auVar81,(uint)auVar67[5],5);
      auVar67 = vpblendw_avx(auVar81,auVar67,8);
    }
    if ((uVar15 & 0x20) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048080030403020100);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[5],5);
      auVar67 = vpblendw_avx(auVar81,auVar67,8);
    }
    if ((uVar15 & 0x40) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048080050403020100);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[6],6);
      auVar67 = vpinsrb_avx(auVar81,(uint)auVar67[7],7);
    }
    if ((uVar15 & 0x80) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048006050403020100);
      auVar67 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[7],7);
    }
  }
  auVar101 = vpmovzxbd_avx2(auVar67);
  auVar101 = vpslld_avx2(auVar101,2);
  vpmovzxdq_avx2(auVar101._16_16_);
  vpmovzxdq_avx2(auVar101._0_16_);
  auVar93 = vgatherqps(ZEXT816(0) << 0x20,auVar5._0_16_);
  auVar81 = vgatherqps(ZEXT816(0) << 0x40,auVar5._16_16_);
  auVar101 = vsubps_avx(auVar40,auVar103);
  auVar105 = vsubps_avx(auVar38,auVar110);
  auVar117 = vsubps_avx(auVar50,auVar106);
  auVar130._0_4_ =
       auVar117._0_4_ * auVar117._0_4_ +
       auVar101._0_4_ * auVar101._0_4_ + auVar105._0_4_ * auVar105._0_4_;
  auVar130._4_4_ =
       auVar117._4_4_ * auVar117._4_4_ +
       auVar101._4_4_ * auVar101._4_4_ + auVar105._4_4_ * auVar105._4_4_;
  auVar130._8_4_ =
       auVar117._8_4_ * auVar117._8_4_ +
       auVar101._8_4_ * auVar101._8_4_ + auVar105._8_4_ * auVar105._8_4_;
  auVar130._12_4_ =
       auVar117._12_4_ * auVar117._12_4_ +
       auVar101._12_4_ * auVar101._12_4_ + auVar105._12_4_ * auVar105._12_4_;
  auVar130._16_4_ =
       auVar117._16_4_ * auVar117._16_4_ +
       auVar101._16_4_ * auVar101._16_4_ + auVar105._16_4_ * auVar105._16_4_;
  auVar130._20_4_ =
       auVar117._20_4_ * auVar117._20_4_ +
       auVar101._20_4_ * auVar101._20_4_ + auVar105._20_4_ * auVar105._20_4_;
  auVar130._24_4_ =
       auVar117._24_4_ * auVar117._24_4_ +
       auVar101._24_4_ * auVar101._24_4_ + auVar105._24_4_ * auVar105._24_4_;
  auVar130._28_4_ =
       auVar117._28_4_ * auVar117._28_4_ +
       auVar101._28_4_ * auVar101._28_4_ + auVar105._28_4_ * auVar105._28_4_;
  auVar109 = vsqrtps_avx(auVar130);
  auVar101 = vdivps_avx(auVar101,auVar109);
  auVar113._4_4_ = __real_38d1b717;
  auVar113._0_4_ = __real_38d1b717;
  auVar113._8_4_ = __real_38d1b717;
  auVar113._12_4_ = __real_38d1b717;
  auVar113._16_4_ = __real_38d1b717;
  auVar113._20_4_ = __real_38d1b717;
  auVar113._24_4_ = __real_38d1b717;
  auVar113._28_4_ = __real_38d1b717;
  auVar102 = vcmpps_avx(auVar130,auVar113,1);
  auVar114._4_4_ = __real_3f800000;
  auVar114._0_4_ = __real_3f800000;
  auVar114._8_4_ = __real_3f800000;
  auVar114._12_4_ = __real_3f800000;
  auVar114._16_4_ = __real_3f800000;
  auVar114._20_4_ = __real_3f800000;
  auVar114._24_4_ = __real_3f800000;
  auVar114._28_4_ = __real_3f800000;
  auVar101 = vblendvps_avx(auVar101,auVar114,auVar102);
  auVar101 = vmaskmovps_avx(auVar5,auVar101);
  auVar105 = vdivps_avx(auVar105,auVar109);
  uVar65 = auVar102._0_4_;
  auVar128._0_4_ = ~uVar65 & auVar105._0_4_;
  uVar69 = auVar102._4_4_;
  auVar128._4_4_ = ~uVar69 & auVar105._4_4_;
  uVar71 = auVar102._8_4_;
  auVar128._8_4_ = ~uVar71 & auVar105._8_4_;
  uVar73 = auVar102._12_4_;
  auVar128._12_4_ = ~uVar73 & auVar105._12_4_;
  uVar75 = auVar102._16_4_;
  auVar128._16_4_ = ~uVar75 & auVar105._16_4_;
  uVar76 = auVar102._20_4_;
  auVar128._20_4_ = ~uVar76 & auVar105._20_4_;
  uVar77 = auVar102._24_4_;
  auVar128._24_4_ = ~uVar77 & auVar105._24_4_;
  uVar78 = auVar102._28_4_;
  auVar128._28_4_ = ~uVar78 & auVar105._28_4_;
  auVar102 = vmaskmovps_avx(auVar5,auVar128);
  auVar105 = vdivps_avx(auVar117,auVar109);
  auVar117._0_4_ = ~uVar65 & auVar105._0_4_;
  auVar117._4_4_ = ~uVar69 & auVar105._4_4_;
  auVar117._8_4_ = ~uVar71 & auVar105._8_4_;
  auVar117._12_4_ = ~uVar73 & auVar105._12_4_;
  auVar117._16_4_ = ~uVar75 & auVar105._16_4_;
  auVar117._20_4_ = ~uVar76 & auVar105._20_4_;
  auVar117._24_4_ = ~uVar77 & auVar105._24_4_;
  auVar117._28_4_ = ~uVar78 & auVar105._28_4_;
  auVar105 = vmaskmovps_avx(auVar5,auVar117);
  auVar118._0_4_ = ~uVar65 & auVar109._0_4_;
  auVar118._4_4_ = ~uVar69 & auVar109._4_4_;
  auVar118._8_4_ = ~uVar71 & auVar109._8_4_;
  auVar118._12_4_ = ~uVar73 & auVar109._12_4_;
  auVar118._16_4_ = ~uVar75 & auVar109._16_4_;
  auVar118._20_4_ = ~uVar76 & auVar109._20_4_;
  auVar118._24_4_ = ~uVar77 & auVar109._24_4_;
  auVar118._28_4_ = ~uVar78 & auVar109._28_4_;
  auVar112 = vsubps_avx(auVar118,auVar112);
  fVar66 = param_5 * param_5 * auVar93._0_4_;
  fVar70 = param_5 * param_5 * auVar93._4_4_;
  fVar72 = param_5 * param_5 * auVar93._8_4_;
  fVar74 = param_5 * param_5 * auVar93._12_4_;
  fVar48 = param_5 * param_5 * auVar81._0_4_;
  fVar53 = param_5 * param_5 * auVar81._4_4_;
  fVar57 = param_5 * param_5 * auVar81._8_4_;
  param_5 = param_5 * param_5 * auVar81._12_4_;
  fVar8 = auVar95._0_4_;
  fVar63 = auVar97._0_4_;
  fVar9 = auVar95._4_4_;
  fVar99 = auVar97._4_4_;
  fVar10 = auVar95._8_4_;
  fVar36 = auVar97._8_4_;
  fVar11 = auVar95._12_4_;
  fVar41 = auVar97._12_4_;
  fVar12 = auVar95._16_4_;
  fVar42 = auVar97._16_4_;
  fVar51 = auVar95._20_4_;
  fVar43 = auVar97._20_4_;
  fVar55 = auVar95._24_4_;
  fVar44 = auVar97._24_4_;
  fVar59 = auVar95._28_4_;
  fVar45 = auVar97._28_4_;
  auVar96._0_4_ = fVar66 * (fVar63 + fVar8) + __real_3f800000;
  auVar96._4_4_ = fVar70 * (fVar99 + fVar9) + __real_3f800000;
  auVar96._8_4_ = fVar72 * (fVar36 + fVar10) + __real_3f800000;
  auVar96._12_4_ = fVar74 * (fVar41 + fVar11) + __real_3f800000;
  auVar96._16_4_ = fVar48 * (fVar42 + fVar12) + __real_3f800000;
  auVar96._20_4_ = fVar53 * (fVar43 + fVar51) + __real_3f800000;
  auVar96._24_4_ = fVar57 * (fVar44 + fVar55) + __real_3f800000;
  auVar96._28_4_ = param_5 * (fVar45 + fVar59) + __real_3f800000;
  local_360 = auVar39._0_4_;
  fStack_35c = auVar39._4_4_;
  fStack_358 = auVar39._8_4_;
  fStack_354 = auVar39._12_4_;
  fStack_350 = auVar39._16_4_;
  fStack_34c = auVar39._20_4_;
  fStack_348 = auVar39._24_4_;
  fStack_344 = auVar39._28_4_;
  auVar109._0_4_ = -(fVar66 * auVar112._0_4_) - local_360;
  auVar109._4_4_ = -(fVar70 * auVar112._4_4_) - fStack_35c;
  auVar109._8_4_ = -(fVar72 * auVar112._8_4_) - fStack_358;
  auVar109._12_4_ = -(fVar74 * auVar112._12_4_) - fStack_354;
  auVar109._16_4_ = -(fVar48 * auVar112._16_4_) - fStack_350;
  auVar109._20_4_ = -(fVar53 * auVar112._20_4_) - fStack_34c;
  auVar109._24_4_ = -(fVar57 * auVar112._24_4_) - fStack_348;
  auVar109._28_4_ = -(param_5 * auVar112._28_4_) - fStack_344;
  auVar112 = vdivps_avx(auVar109,auVar96);
  fVar66 = auVar112._0_4_;
  auVar127._0_4_ = local_360 + fVar66;
  fVar70 = auVar112._4_4_;
  auVar127._4_4_ = fStack_35c + fVar70;
  fVar72 = auVar112._8_4_;
  auVar127._8_4_ = fStack_358 + fVar72;
  fVar74 = auVar112._12_4_;
  auVar127._12_4_ = fStack_354 + fVar74;
  fVar48 = auVar112._16_4_;
  auVar127._16_4_ = fStack_350 + fVar48;
  fVar53 = auVar112._20_4_;
  auVar127._20_4_ = fStack_34c + fVar53;
  fVar57 = auVar112._24_4_;
  auVar127._24_4_ = fStack_348 + fVar57;
  fVar61 = auVar112._28_4_;
  auVar127._28_4_ = fStack_344 + fVar61;
  auVar5 = vmaskmovps_avx(auVar5,auVar127);
  *(undefined1 (*) [32])(param_4 + lVar17) = auVar5;
  local_2e0 = auVar101._0_4_;
  fStack_2dc = auVar101._4_4_;
  fStack_2d8 = auVar101._8_4_;
  fStack_2d4 = auVar101._12_4_;
  fStack_2d0 = auVar101._16_4_;
  fStack_2cc = auVar101._20_4_;
  fStack_2c8 = auVar101._24_4_;
  fStack_2c4 = auVar101._28_4_;
  local_2e0 = fVar66 * local_2e0;
  fStack_2dc = fVar70 * fStack_2dc;
  fStack_2d8 = fVar72 * fStack_2d8;
  fStack_2d4 = fVar74 * fStack_2d4;
  fStack_2d0 = fVar48 * fStack_2d0;
  fStack_2cc = fVar53 * fStack_2cc;
  fStack_2c8 = fVar57 * fStack_2c8;
  fStack_2c4 = fVar61 * fStack_2c4;
  local_2c0 = auVar102._0_4_;
  fStack_2bc = auVar102._4_4_;
  fStack_2b8 = auVar102._8_4_;
  fStack_2b4 = auVar102._12_4_;
  fStack_2b0 = auVar102._16_4_;
  fStack_2ac = auVar102._20_4_;
  fStack_2a8 = auVar102._24_4_;
  fStack_2a4 = auVar102._28_4_;
  local_2c0 = fVar66 * local_2c0;
  fStack_2bc = fVar70 * fStack_2bc;
  fStack_2b8 = fVar72 * fStack_2b8;
  fStack_2b4 = fVar74 * fStack_2b4;
  fStack_2b0 = fVar48 * fStack_2b0;
  fStack_2ac = fVar53 * fStack_2ac;
  fStack_2a8 = fVar57 * fStack_2a8;
  fStack_2a4 = fVar61 * fStack_2a4;
  local_2a0 = auVar105._0_4_;
  fStack_29c = auVar105._4_4_;
  fStack_298 = auVar105._8_4_;
  fStack_294 = auVar105._12_4_;
  fStack_290 = auVar105._16_4_;
  fStack_28c = auVar105._20_4_;
  fStack_288 = auVar105._24_4_;
  fStack_284 = auVar105._28_4_;
  fVar66 = fVar66 * local_2a0;
  fVar70 = fVar70 * fStack_29c;
  fVar72 = fVar72 * fStack_298;
  fVar74 = fVar74 * fStack_294;
  fVar48 = fVar48 * fStack_290;
  fVar53 = fVar53 * fStack_28c;
  fVar57 = fVar57 * fStack_288;
  fVar61 = fVar61 * fStack_284;
  auVar116._0_4_ = fVar8 * local_2e0 + auVar40._0_4_;
  auVar116._4_4_ = fVar9 * fStack_2dc + auVar40._4_4_;
  auVar116._8_4_ = fVar10 * fStack_2d8 + auVar40._8_4_;
  auVar116._12_4_ = fVar11 * fStack_2d4 + auVar40._12_4_;
  auVar105._16_4_ = fVar12 * fStack_2d0 + auVar40._16_4_;
  auVar105._0_16_ = auVar116;
  auVar105._20_4_ = fVar51 * fStack_2cc + auVar40._20_4_;
  auVar105._24_4_ = fVar55 * fStack_2c8 + auVar40._24_4_;
  auVar105._28_4_ = fVar59 * fStack_2c4 + auVar40._28_4_;
  iVar83 = auVar84._0_4_;
  auVar104 = auVar84._16_16_;
  auVar108 = auVar95._0_16_;
  auVar126 = auVar95._16_16_;
  auVar93 = auVar97._0_16_;
  auVar100 = auVar97._16_16_;
  auVar129 = auVar105._16_16_;
  iVar37 = auVar92._0_4_;
  auVar81 = auVar92._16_16_;
  iVar16 = auVar84._4_4_;
  iVar21 = auVar84._8_4_;
  iVar22 = auVar84._12_4_;
  iVar23 = auVar92._4_4_;
  iVar24 = auVar92._8_4_;
  iVar25 = auVar92._12_4_;
  local_340 = auVar103._0_4_;
  fStack_33c = auVar103._4_4_;
  fStack_338 = auVar103._8_4_;
  fStack_334 = auVar103._12_4_;
  fStack_330 = auVar103._16_4_;
  fStack_32c = auVar103._20_4_;
  fStack_328 = auVar103._24_4_;
  fStack_324 = auVar103._28_4_;
  local_320 = auVar110._0_4_;
  fStack_31c = auVar110._4_4_;
  fStack_318 = auVar110._8_4_;
  fStack_314 = auVar110._12_4_;
  fStack_310 = auVar110._16_4_;
  fStack_30c = auVar110._20_4_;
  fStack_308 = auVar110._24_4_;
  fStack_304 = auVar110._28_4_;
  local_300 = auVar106._0_4_;
  fStack_2fc = auVar106._4_4_;
  fStack_2f8 = auVar106._8_4_;
  fStack_2f4 = auVar106._12_4_;
  fStack_2f0 = auVar106._16_4_;
  fStack_2ec = auVar106._20_4_;
  fStack_2e8 = auVar106._24_4_;
  fStack_2e4 = auVar106._28_4_;
  iVar79 = auVar84._16_4_;
  iVar80 = auVar92._16_4_;
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + iVar83) = auVar116._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar116,1);
    *(undefined4 *)(param_1 + iVar16) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar116,2);
    *(undefined4 *)(param_1 + iVar21) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar116,3);
    *(undefined4 *)(param_1 + iVar22) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + iVar79) = auVar105._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar26 = vextractps_avx(auVar104,1);
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + iVar26) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar26 = vextractps_avx(auVar104,2);
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + iVar26) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar26 = vextractps_avx(auVar104,3);
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + iVar26) = uVar7;
    auVar111._0_4_ = fVar8 * local_2c0 + auVar38._0_4_;
    auVar111._4_4_ = fVar9 * fStack_2bc + auVar38._4_4_;
    auVar111._8_4_ = fVar10 * fStack_2b8 + auVar38._8_4_;
    auVar111._12_4_ = fVar11 * fStack_2b4 + auVar38._12_4_;
    auVar111._16_4_ = fVar12 * fStack_2b0 + auVar38._16_4_;
    auVar111._20_4_ = fVar51 * fStack_2ac + auVar38._20_4_;
    auVar111._24_4_ = fVar55 * fStack_2a8 + auVar38._24_4_;
    auVar111._28_4_ = fVar59 * fStack_2a4 + auVar38._28_4_;
  }
  else {
    auVar111._0_4_ = fVar8 * local_2c0 + auVar38._0_4_;
    auVar111._4_4_ = fVar9 * fStack_2bc + auVar38._4_4_;
    auVar111._8_4_ = fVar10 * fStack_2b8 + auVar38._8_4_;
    auVar111._12_4_ = fVar11 * fStack_2b4 + auVar38._12_4_;
    auVar111._16_4_ = fVar12 * fStack_2b0 + auVar38._16_4_;
    auVar111._20_4_ = fVar51 * fStack_2ac + auVar38._20_4_;
    auVar111._24_4_ = fVar55 * fStack_2a8 + auVar38._24_4_;
    auVar111._28_4_ = fVar59 * fStack_2a4 + auVar38._28_4_;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar83) = auVar111._0_4_;
  }
  auVar129 = auVar111._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar79) = auVar111._16_4_;
  }
  auVar129 = auVar111._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar26 = vextractps_avx(auVar104,1);
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar26 = vextractps_avx(auVar104,2);
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar26 = vextractps_avx(auVar104,3);
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar7;
    auVar107._0_4_ = fVar8 * fVar66 + auVar50._0_4_;
    auVar107._4_4_ = fVar9 * fVar70 + auVar50._4_4_;
    auVar107._8_4_ = fVar10 * fVar72 + auVar50._8_4_;
    auVar107._12_4_ = fVar11 * fVar74 + auVar50._12_4_;
    auVar107._16_4_ = fVar12 * fVar48 + auVar50._16_4_;
    auVar107._20_4_ = fVar51 * fVar53 + auVar50._20_4_;
    auVar107._24_4_ = fVar55 * fVar57 + auVar50._24_4_;
    auVar107._28_4_ = fVar59 * fVar61 + auVar50._28_4_;
  }
  else {
    auVar107._0_4_ = fVar8 * fVar66 + auVar50._0_4_;
    auVar107._4_4_ = fVar9 * fVar70 + auVar50._4_4_;
    auVar107._8_4_ = fVar10 * fVar72 + auVar50._8_4_;
    auVar107._12_4_ = fVar11 * fVar74 + auVar50._12_4_;
    auVar107._16_4_ = fVar12 * fVar48 + auVar50._16_4_;
    auVar107._20_4_ = fVar51 * fVar53 + auVar50._20_4_;
    auVar107._24_4_ = fVar55 * fVar57 + auVar50._24_4_;
    auVar107._28_4_ = fVar59 * fVar61 + auVar50._28_4_;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar83) = auVar107._0_4_;
  }
  auVar129 = auVar107._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar79) = auVar107._16_4_;
  }
  auVar129 = auVar107._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar26 = vextractps_avx(auVar104,1);
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar26 = vextractps_avx(auVar104,2);
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar26 = vextractps_avx(auVar104,3);
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar7;
  }
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar83) = fVar8;
  }
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar108,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar108,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar108,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar79) = fVar12;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar104,1);
    uVar7 = vextractps_avx(auVar126,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar104,2);
    uVar7 = vextractps_avx(auVar126,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar104,3);
    uVar7 = vextractps_avx(auVar126,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
    auVar98._0_4_ = fVar63 * local_2e0 + local_340;
    auVar98._4_4_ = fVar99 * fStack_2dc + fStack_33c;
    auVar98._8_4_ = fVar36 * fStack_2d8 + fStack_338;
    auVar98._12_4_ = fVar41 * fStack_2d4 + fStack_334;
    auVar98._16_4_ = fVar42 * fStack_2d0 + fStack_330;
    auVar98._20_4_ = fVar43 * fStack_2cc + fStack_32c;
    auVar98._24_4_ = fVar44 * fStack_2c8 + fStack_328;
    auVar98._28_4_ = fVar45 * fStack_2c4 + fStack_324;
  }
  else {
    auVar98._0_4_ = fVar63 * local_2e0 + local_340;
    auVar98._4_4_ = fVar99 * fStack_2dc + fStack_33c;
    auVar98._8_4_ = fVar36 * fStack_2d8 + fStack_338;
    auVar98._12_4_ = fVar41 * fStack_2d4 + fStack_334;
    auVar98._16_4_ = fVar42 * fStack_2d0 + fStack_330;
    auVar98._20_4_ = fVar43 * fStack_2cc + fStack_32c;
    auVar98._24_4_ = fVar44 * fStack_2c8 + fStack_328;
    auVar98._28_4_ = fVar45 * fStack_2c4 + fStack_324;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + iVar37) = auVar98._0_4_;
  }
  auVar104 = auVar98._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + iVar23) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + iVar24) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + iVar25) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + iVar80) = auVar98._16_4_;
  }
  auVar104 = auVar98._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar81,1);
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar81,2);
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar81,3);
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + iVar16) = uVar7;
    auVar94._0_4_ = fVar63 * local_2c0 + local_320;
    auVar94._4_4_ = fVar99 * fStack_2bc + fStack_31c;
    auVar94._8_4_ = fVar36 * fStack_2b8 + fStack_318;
    auVar94._12_4_ = fVar41 * fStack_2b4 + fStack_314;
    auVar94._16_4_ = fVar42 * fStack_2b0 + fStack_310;
    auVar94._20_4_ = fVar43 * fStack_2ac + fStack_30c;
    auVar94._24_4_ = fVar44 * fStack_2a8 + fStack_308;
    auVar94._28_4_ = fVar45 * fStack_2a4 + fStack_304;
  }
  else {
    auVar94._0_4_ = fVar63 * local_2c0 + local_320;
    auVar94._4_4_ = fVar99 * fStack_2bc + fStack_31c;
    auVar94._8_4_ = fVar36 * fStack_2b8 + fStack_318;
    auVar94._12_4_ = fVar41 * fStack_2b4 + fStack_314;
    auVar94._16_4_ = fVar42 * fStack_2b0 + fStack_310;
    auVar94._20_4_ = fVar43 * fStack_2ac + fStack_30c;
    auVar94._24_4_ = fVar44 * fStack_2a8 + fStack_308;
    auVar94._28_4_ = fVar45 * fStack_2a4 + fStack_304;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar37) = auVar94._0_4_;
  }
  auVar104 = auVar94._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar80) = auVar94._16_4_;
  }
  auVar104 = auVar94._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar81,1);
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar81,2);
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar81,3);
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
    auVar68._0_4_ = fVar63 * fVar66 + local_300;
    auVar68._4_4_ = fVar99 * fVar70 + fStack_2fc;
    auVar68._8_4_ = fVar36 * fVar72 + fStack_2f8;
    auVar68._12_4_ = fVar41 * fVar74 + fStack_2f4;
    auVar68._16_4_ = fVar42 * fVar48 + fStack_2f0;
    auVar68._20_4_ = fVar43 * fVar53 + fStack_2ec;
    auVar68._24_4_ = fVar44 * fVar57 + fStack_2e8;
    auVar68._28_4_ = fVar45 * fVar61 + fStack_2e4;
  }
  else {
    auVar68._0_4_ = fVar63 * fVar66 + local_300;
    auVar68._4_4_ = fVar99 * fVar70 + fStack_2fc;
    auVar68._8_4_ = fVar36 * fVar72 + fStack_2f8;
    auVar68._12_4_ = fVar41 * fVar74 + fStack_2f4;
    auVar68._16_4_ = fVar42 * fVar48 + fStack_2f0;
    auVar68._20_4_ = fVar43 * fVar53 + fStack_2ec;
    auVar68._24_4_ = fVar44 * fVar57 + fStack_2e8;
    auVar68._28_4_ = fVar45 * fVar61 + fStack_2e4;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar37) = auVar68._0_4_;
  }
  auVar104 = auVar68._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar80) = auVar68._16_4_;
  }
  auVar104 = auVar68._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar81,1);
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar81,2);
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar81,3);
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar37) = fVar63;
  }
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar93,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar93,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar93,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar80) = fVar42;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar81,1);
    uVar7 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar81,2);
    uVar7 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar81,3);
    uVar7 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithDampingAndWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2 @ 140913c10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDampingAndWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,byte param_7,longlong param_8,undefined8 param_9,
               byte param_10,longlong param_11,undefined8 param_12,uint param_13)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  uint uVar31;
  uint uVar32;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar27 [32];
  uint uVar33;
  uint uVar37;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  float fVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar40 [32];
  float fVar48;
  float fVar49;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar50 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  float fVar75;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar76 [32];
  float fVar84;
  undefined1 auVar77 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  float fVar92;
  float fVar96;
  float fVar97;
  float fVar99;
  float fVar101;
  float fVar103;
  float fVar105;
  undefined1 auVar93 [32];
  float fVar107;
  undefined1 auVar94 [32];
  float fVar98;
  float fVar100;
  float fVar102;
  float fVar104;
  float fVar106;
  float fVar108;
  undefined1 auVar95 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  float fVar114;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined1 auVar115 [32];
  float fVar122;
  undefined1 auVar124 [16];
  float fVar123;
  float fVar126;
  undefined1 auVar125 [32];
  undefined1 auVar127 [16];
  undefined1 auVar128 [32];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [32];
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
  undefined1 auVar132 [32];
  
  uVar10 = __real_0000000c;
  uVar9 = __real_00000008;
  iVar17 = __real_00000004;
  fVar49 = __real_3f800000;
  uVar8 = __real_38d1b717;
  uVar7 = __real_322bcc77;
  uVar12 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar12 = param_13;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    uVar18 = 0;
    do {
      auVar26 = (undefined1  [16])0x0;
      auVar40 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      if ((param_7 & 1) != 0) {
        auVar40 = ZEXT832(*(ulonglong *)(param_8 + uVar18));
      }
      auVar94 = *(undefined1 (*) [32])(param_3 + uVar14 * 2);
      auVar51 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar14 * 2);
      auVar85 = vshufps_avx(auVar94,auVar51,0x88);
      auVar85 = vpermpd_avx2(auVar85,0xd8);
      auVar94 = vshufps_avx(auVar94,auVar51,0xdd);
      auVar94 = vpermpd_avx2(auVar94,0xd8);
      if ((param_10 & 1) != 0) {
        auVar26._8_8_ = 0;
        auVar26._0_8_ = *(ulonglong *)(param_11 + uVar18);
      }
      auVar109 = vpslld_avx2(auVar85,4);
      auVar64._4_4_ = iVar17;
      auVar64._0_4_ = iVar17;
      auVar64._8_4_ = iVar17;
      auVar64._12_4_ = iVar17;
      auVar64._16_4_ = iVar17;
      auVar64._20_4_ = iVar17;
      auVar64._24_4_ = iVar17;
      auVar64._28_4_ = iVar17;
      vpor_avx2(auVar109,auVar64);
      auVar51 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar131 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar61._4_4_ = uVar9;
      auVar61._0_4_ = uVar9;
      auVar61._8_4_ = uVar9;
      auVar61._12_4_ = uVar9;
      auVar61._16_4_ = uVar9;
      auVar61._20_4_ = uVar9;
      auVar61._24_4_ = uVar9;
      auVar61._28_4_ = uVar9;
      vpor_avx2(auVar109,auVar61);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar125 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar66._4_4_ = uVar10;
      auVar66._0_4_ = uVar10;
      auVar66._8_4_ = uVar10;
      auVar66._12_4_ = uVar10;
      auVar66._16_4_ = uVar10;
      auVar66._20_4_ = uVar10;
      auVar66._24_4_ = uVar10;
      auVar66._28_4_ = uVar10;
      vpor_avx2(auVar109,auVar66);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar115 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar93 = vpslld_avx2(auVar94,4);
      vpor_avx2(auVar93,auVar64);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      vpor_avx2(auVar93,auVar61);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar86 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      vpor_avx2(auVar93,auVar66);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar87 = vgatherdps(ZEXT832(0) << 0x20,auVar51);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar88 = vgatherdps(ZEXT832(0) << 0x20,auVar51);
      auVar85 = vpmulld_avx2(auVar85,auVar66);
      auVar51._0_4_ = auVar85._0_4_ + iVar17;
      auVar51._4_4_ = auVar85._4_4_ + iVar17;
      auVar51._8_4_ = auVar85._8_4_ + iVar17;
      auVar51._12_4_ = auVar85._12_4_ + iVar17;
      auVar51._16_4_ = auVar85._16_4_ + iVar17;
      auVar51._20_4_ = auVar85._20_4_ + iVar17;
      auVar51._24_4_ = auVar85._24_4_ + iVar17;
      auVar51._28_4_ = auVar85._28_4_ + iVar17;
      auVar85 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar89 = vgatherdps(ZEXT832(0) << 0x20,auVar85);
      auVar51 = vpcmpeqd_avx2(auVar51,auVar51);
      auVar64 = vgatherdps(ZEXT832(0),auVar51);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar65 = vgatherdps(ZEXT832(0) << 0x20,auVar51);
      auVar51 = vpmulld_avx2(auVar94,auVar66);
      auVar94._0_4_ = auVar51._0_4_ + iVar17;
      auVar94._4_4_ = auVar51._4_4_ + iVar17;
      auVar94._8_4_ = auVar51._8_4_ + iVar17;
      auVar94._12_4_ = auVar51._12_4_ + iVar17;
      auVar94._16_4_ = auVar51._16_4_ + iVar17;
      auVar94._20_4_ = auVar51._20_4_ + iVar17;
      auVar94._24_4_ = auVar51._24_4_ + iVar17;
      auVar94._28_4_ = auVar51._28_4_ + iVar17;
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar66 = vgatherdps(ZEXT832(0) << 0x20,auVar51);
      auVar94 = vpcmpeqd_avx2(auVar94,auVar94);
      auVar61 = vgatherdps(ZEXT832(0),auVar94);
      auVar94 = vpmovsxbd_avx2(auVar40._0_16_);
      vpslld_avx2(auVar94,2);
      auVar40 = vpcmpeqd_avx2(auVar40,auVar40);
      auVar90 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar40 = vpmovsxbd_avx2(auVar26);
      vpslld_avx2(auVar40,2);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar76 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar69 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar128 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar40);
      auVar40 = vsubps_avx(auVar69,auVar128);
      auVar51 = vsubps_avx(auVar131,auVar112);
      auVar85 = vsubps_avx(auVar125,auVar86);
      auVar27._0_4_ =
           auVar85._0_4_ * auVar85._0_4_ +
           auVar40._0_4_ * auVar40._0_4_ + auVar51._0_4_ * auVar51._0_4_;
      auVar27._4_4_ =
           auVar85._4_4_ * auVar85._4_4_ +
           auVar40._4_4_ * auVar40._4_4_ + auVar51._4_4_ * auVar51._4_4_;
      auVar27._8_4_ =
           auVar85._8_4_ * auVar85._8_4_ +
           auVar40._8_4_ * auVar40._8_4_ + auVar51._8_4_ * auVar51._8_4_;
      auVar27._12_4_ =
           auVar85._12_4_ * auVar85._12_4_ +
           auVar40._12_4_ * auVar40._12_4_ + auVar51._12_4_ * auVar51._12_4_;
      auVar27._16_4_ =
           auVar85._16_4_ * auVar85._16_4_ +
           auVar40._16_4_ * auVar40._16_4_ + auVar51._16_4_ * auVar51._16_4_;
      auVar27._20_4_ =
           auVar85._20_4_ * auVar85._20_4_ +
           auVar40._20_4_ * auVar40._20_4_ + auVar51._20_4_ * auVar51._20_4_;
      auVar27._24_4_ =
           auVar85._24_4_ * auVar85._24_4_ +
           auVar40._24_4_ * auVar40._24_4_ + auVar51._24_4_ * auVar51._24_4_;
      auVar27._28_4_ =
           auVar85._28_4_ * auVar85._28_4_ +
           auVar40._28_4_ * auVar40._28_4_ + auVar51._28_4_ * auVar51._28_4_;
      auVar29 = vsqrtps_avx(auVar27);
      auVar94 = vdivps_avx(auVar40,auVar29);
      auVar51 = vdivps_avx(auVar51,auVar29);
      auVar85 = vdivps_avx(auVar85,auVar29);
      auVar40._4_4_ = uVar8;
      auVar40._0_4_ = uVar8;
      auVar40._8_4_ = uVar8;
      auVar40._12_4_ = uVar8;
      auVar40._16_4_ = uVar8;
      auVar40._20_4_ = uVar8;
      auVar40._24_4_ = uVar8;
      auVar40._28_4_ = uVar8;
      auVar40 = vcmpps_avx(auVar27,auVar40,1);
      auVar77._4_4_ = fVar49;
      auVar77._0_4_ = fVar49;
      auVar77._8_4_ = fVar49;
      auVar77._12_4_ = fVar49;
      auVar77._16_4_ = fVar49;
      auVar77._20_4_ = fVar49;
      auVar77._24_4_ = fVar49;
      auVar77._28_4_ = fVar49;
      auVar94 = vblendvps_avx(auVar94,auVar77,auVar40);
      uVar25 = auVar40._0_4_;
      fVar92 = (float)(~uVar25 & auVar51._0_4_);
      uVar31 = auVar40._4_4_;
      fVar96 = (float)(~uVar31 & auVar51._4_4_);
      uVar32 = auVar40._8_4_;
      fVar97 = (float)(~uVar32 & auVar51._8_4_);
      uVar33 = auVar40._12_4_;
      fVar99 = (float)(~uVar33 & auVar51._12_4_);
      uVar34 = auVar40._16_4_;
      fVar101 = (float)(~uVar34 & auVar51._16_4_);
      uVar35 = auVar40._20_4_;
      fVar103 = (float)(~uVar35 & auVar51._20_4_);
      uVar36 = auVar40._24_4_;
      fVar105 = (float)(~uVar36 & auVar51._24_4_);
      uVar37 = auVar40._28_4_;
      fVar107 = (float)(~uVar37 & auVar51._28_4_);
      fVar48 = (float)(~uVar25 & auVar85._0_4_);
      fVar54 = (float)(~uVar31 & auVar85._4_4_);
      fVar55 = (float)(~uVar32 & auVar85._8_4_);
      fVar56 = (float)(~uVar33 & auVar85._12_4_);
      fVar57 = (float)(~uVar34 & auVar85._16_4_);
      fVar58 = (float)(~uVar35 & auVar85._20_4_);
      fVar59 = (float)(~uVar36 & auVar85._24_4_);
      fVar60 = (float)(~uVar37 & auVar85._28_4_);
      auVar85._0_4_ = ~uVar25 & auVar29._0_4_;
      auVar85._4_4_ = ~uVar31 & auVar29._4_4_;
      auVar85._8_4_ = ~uVar32 & auVar29._8_4_;
      auVar85._12_4_ = ~uVar33 & auVar29._12_4_;
      auVar85._16_4_ = ~uVar34 & auVar29._16_4_;
      auVar85._20_4_ = ~uVar35 & auVar29._20_4_;
      auVar85._24_4_ = ~uVar36 & auVar29._24_4_;
      auVar85._28_4_ = ~uVar37 & auVar29._28_4_;
      uVar13 = uVar14 & 0xffffffff;
      auVar40 = *(undefined1 (*) [32])(param_4 + uVar13);
      auVar85 = vsubps_avx(auVar85,auVar40);
      auVar51 = vdivps_avx(auVar77,auVar40);
      auVar29._4_4_ = uVar7;
      auVar29._0_4_ = uVar7;
      auVar29._8_4_ = uVar7;
      auVar29._12_4_ = uVar7;
      auVar29._16_4_ = uVar7;
      auVar29._20_4_ = uVar7;
      auVar29._24_4_ = uVar7;
      auVar29._28_4_ = uVar7;
      auVar40 = vcmpps_avx(auVar40,auVar29,1);
      auVar40 = vblendvps_avx(auVar51,auVar77,auVar40);
      local_440 = auVar87._0_4_;
      fStack_43c = auVar87._4_4_;
      fStack_438 = auVar87._8_4_;
      fStack_434 = auVar87._12_4_;
      fStack_430 = auVar87._16_4_;
      fStack_42c = auVar87._20_4_;
      fStack_428 = auVar87._24_4_;
      fStack_424 = auVar87._28_4_;
      fVar114 = auVar115._0_4_;
      auVar28._0_4_ = fVar114 + local_440;
      fVar116 = auVar115._4_4_;
      auVar28._4_4_ = fVar116 + fStack_43c;
      fVar117 = auVar115._8_4_;
      auVar28._8_4_ = fVar117 + fStack_438;
      fVar118 = auVar115._12_4_;
      auVar28._12_4_ = fVar118 + fStack_434;
      fVar119 = auVar115._16_4_;
      auVar28._16_4_ = fVar119 + fStack_430;
      fVar120 = auVar115._20_4_;
      auVar28._20_4_ = fVar120 + fStack_42c;
      fVar121 = auVar115._24_4_;
      auVar28._24_4_ = fVar121 + fStack_428;
      fVar122 = auVar115._28_4_;
      auVar28._28_4_ = fVar122 + fStack_424;
      auVar51 = vdivps_avx(auVar90,auVar28);
      auVar51 = vsqrtps_avx(auVar51);
      auVar29 = vsubps_avx(auVar69,auVar88);
      auVar29 = vsubps_avx(auVar29,auVar128);
      local_400 = auVar65._0_4_;
      fStack_3fc = auVar65._4_4_;
      fStack_3f8 = auVar65._8_4_;
      fStack_3f4 = auVar65._12_4_;
      fStack_3f0 = auVar65._16_4_;
      fStack_3ec = auVar65._20_4_;
      fStack_3e8 = auVar65._24_4_;
      fStack_3e4 = auVar65._28_4_;
      auVar77 = vsubps_avx(auVar131,auVar89);
      auVar77 = vsubps_avx(auVar77,auVar112);
      local_1e0 = auVar66._0_4_;
      fStack_1dc = auVar66._4_4_;
      fStack_1d8 = auVar66._8_4_;
      fStack_1d4 = auVar66._12_4_;
      fStack_1d0 = auVar66._16_4_;
      fStack_1cc = auVar66._20_4_;
      fStack_1c8 = auVar66._24_4_;
      fStack_1c4 = auVar66._28_4_;
      auVar66 = vsubps_avx(auVar125,auVar64);
      auVar66 = vsubps_avx(auVar66,auVar86);
      local_200 = auVar61._0_4_;
      fStack_1fc = auVar61._4_4_;
      fStack_1f8 = auVar61._8_4_;
      fStack_1f4 = auVar61._12_4_;
      fStack_1f0 = auVar61._16_4_;
      fStack_1ec = auVar61._20_4_;
      fStack_1e8 = auVar61._24_4_;
      fStack_1e4 = auVar61._28_4_;
      local_220 = auVar94._0_4_;
      fStack_21c = auVar94._4_4_;
      fStack_218 = auVar94._8_4_;
      fStack_214 = auVar94._12_4_;
      fStack_210 = auVar94._16_4_;
      fStack_20c = auVar94._20_4_;
      fStack_208 = auVar94._24_4_;
      fStack_204 = auVar94._28_4_;
      fVar75 = param_6 * param_6 * auVar90._0_4_;
      fVar78 = param_6 * param_6 * auVar90._4_4_;
      fVar79 = param_6 * param_6 * auVar90._8_4_;
      fVar80 = param_6 * param_6 * auVar90._12_4_;
      fVar81 = param_6 * param_6 * auVar90._16_4_;
      fVar82 = param_6 * param_6 * auVar90._20_4_;
      fVar83 = param_6 * param_6 * auVar90._24_4_;
      fVar84 = param_6 * param_6 * auVar90._28_4_;
      fVar38 = param_6 * auVar40._0_4_ * (auVar76._0_4_ + auVar76._0_4_) * auVar51._0_4_;
      fVar41 = param_6 * auVar40._4_4_ * (auVar76._4_4_ + auVar76._4_4_) * auVar51._4_4_;
      fVar42 = param_6 * auVar40._8_4_ * (auVar76._8_4_ + auVar76._8_4_) * auVar51._8_4_;
      fVar43 = param_6 * auVar40._12_4_ * (auVar76._12_4_ + auVar76._12_4_) * auVar51._12_4_;
      fVar44 = param_6 * auVar40._16_4_ * (auVar76._16_4_ + auVar76._16_4_) * auVar51._16_4_;
      fVar45 = param_6 * auVar40._20_4_ * (auVar76._20_4_ + auVar76._20_4_) * auVar51._20_4_;
      fVar46 = param_6 * auVar40._24_4_ * (auVar76._24_4_ + auVar76._24_4_) * auVar51._24_4_;
      fVar47 = param_6 * auVar40._28_4_ * (auVar76._28_4_ + auVar76._28_4_) * auVar51._28_4_;
      pfVar1 = (float *)(param_5 + uVar13);
      fVar98 = *pfVar1;
      fVar100 = pfVar1[1];
      fVar102 = pfVar1[2];
      fVar104 = pfVar1[3];
      fVar106 = pfVar1[4];
      fVar108 = pfVar1[5];
      fVar123 = pfVar1[6];
      fVar126 = pfVar1[7];
      auVar76._0_4_ =
           -(fVar38 * ((auVar66._0_4_ + local_200) * fVar48 +
                      local_220 * (auVar29._0_4_ + local_400) + fVar92 * (auVar77._0_4_ + local_1e0)
                      )) + (-(fVar75 * auVar85._0_4_) - fVar98);
      auVar76._4_4_ =
           -(fVar41 * ((auVar66._4_4_ + fStack_1fc) * fVar54 +
                      fStack_21c * (auVar29._4_4_ + fStack_3fc) +
                      fVar96 * (auVar77._4_4_ + fStack_1dc))) +
           (-(fVar78 * auVar85._4_4_) - fVar100);
      auVar76._8_4_ =
           -(fVar42 * ((auVar66._8_4_ + fStack_1f8) * fVar55 +
                      fStack_218 * (auVar29._8_4_ + fStack_3f8) +
                      fVar97 * (auVar77._8_4_ + fStack_1d8))) +
           (-(fVar79 * auVar85._8_4_) - fVar102);
      auVar76._12_4_ =
           -(fVar43 * ((auVar66._12_4_ + fStack_1f4) * fVar56 +
                      fStack_214 * (auVar29._12_4_ + fStack_3f4) +
                      fVar99 * (auVar77._12_4_ + fStack_1d4))) +
           (-(fVar80 * auVar85._12_4_) - fVar104);
      auVar76._16_4_ =
           -(fVar44 * ((auVar66._16_4_ + fStack_1f0) * fVar57 +
                      fStack_210 * (auVar29._16_4_ + fStack_3f0) +
                      fVar101 * (auVar77._16_4_ + fStack_1d0))) +
           (-(fVar81 * auVar85._16_4_) - fVar106);
      auVar76._20_4_ =
           -(fVar45 * ((auVar66._20_4_ + fStack_1ec) * fVar58 +
                      fStack_20c * (auVar29._20_4_ + fStack_3ec) +
                      fVar103 * (auVar77._20_4_ + fStack_1cc))) +
           (-(fVar82 * auVar85._20_4_) - fVar108);
      auVar76._24_4_ =
           -(fVar46 * ((auVar66._24_4_ + fStack_1e8) * fVar59 +
                      fStack_208 * (auVar29._24_4_ + fStack_3e8) +
                      fVar105 * (auVar77._24_4_ + fStack_1c8))) +
           (-(fVar83 * auVar85._24_4_) - fVar123);
      auVar76._28_4_ =
           -(fVar47 * ((auVar66._28_4_ + fStack_1e4) * fVar60 +
                      fStack_204 * (auVar29._28_4_ + fStack_3e4) +
                      fVar107 * (auVar77._28_4_ + fStack_1c4))) +
           (-(fVar84 * auVar85._28_4_) - fVar126);
      auVar65._0_4_ = auVar28._0_4_ * (fVar75 + fVar38) + fVar49;
      auVar65._4_4_ = auVar28._4_4_ * (fVar78 + fVar41) + fVar49;
      auVar65._8_4_ = auVar28._8_4_ * (fVar79 + fVar42) + fVar49;
      auVar65._12_4_ = auVar28._12_4_ * (fVar80 + fVar43) + fVar49;
      auVar65._16_4_ = auVar28._16_4_ * (fVar81 + fVar44) + fVar49;
      auVar65._20_4_ = auVar28._20_4_ * (fVar82 + fVar45) + fVar49;
      auVar65._24_4_ = auVar28._24_4_ * (fVar83 + fVar46) + fVar49;
      auVar65._28_4_ = auVar28._28_4_ * (fVar84 + fVar47) + fVar49;
      auVar40 = vdivps_avx(auVar76,auVar65);
      in_ZMM4 = ZEXT3264(auVar40);
      fVar38 = auVar40._0_4_;
      fVar41 = auVar40._4_4_;
      fVar42 = auVar40._8_4_;
      fVar43 = auVar40._12_4_;
      fVar44 = auVar40._16_4_;
      fVar45 = auVar40._20_4_;
      fVar46 = auVar40._24_4_;
      fVar47 = auVar40._28_4_;
      auVar67._0_4_ = fVar114 * local_220 * fVar38 + auVar69._0_4_;
      auVar67._4_4_ = fVar116 * fStack_21c * fVar41 + auVar69._4_4_;
      auVar67._8_4_ = fVar117 * fStack_218 * fVar42 + auVar69._8_4_;
      auVar67._12_4_ = fVar118 * fStack_214 * fVar43 + auVar69._12_4_;
      auVar88._16_4_ = fVar119 * fStack_210 * fVar44 + auVar69._16_4_;
      auVar88._0_16_ = auVar67;
      auVar88._20_4_ = fVar120 * fStack_20c * fVar45 + auVar69._20_4_;
      auVar88._24_4_ = fVar121 * fStack_208 * fVar46 + auVar69._24_4_;
      auVar88._28_4_ = fVar122 * fStack_204 * fVar47 + auVar69._28_4_;
      lVar16 = (longlong)auVar109._0_4_;
      *(float *)(param_1 + lVar16) = auVar67._0_4_;
      lVar15 = (longlong)auVar109._4_4_;
      uVar6 = vextractps_avx(auVar67,1);
      *(undefined4 *)(param_1 + lVar15) = uVar6;
      lVar23 = (longlong)auVar109._8_4_;
      uVar6 = vextractps_avx(auVar67,2);
      *(undefined4 *)(param_1 + lVar23) = uVar6;
      lVar21 = (longlong)auVar109._12_4_;
      uVar6 = vextractps_avx(auVar67,3);
      *(undefined4 *)(param_1 + lVar21) = uVar6;
      lVar24 = (longlong)auVar109._16_4_;
      auVar26 = auVar88._16_16_;
      *(float *)(param_1 + lVar24) = auVar88._16_4_;
      lVar20 = (longlong)auVar109._20_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + lVar20) = uVar6;
      lVar22 = (longlong)auVar109._24_4_;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + lVar22) = uVar6;
      lVar19 = (longlong)auVar109._28_4_;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + lVar19) = uVar6;
      fVar92 = fVar38 * fVar92;
      fVar96 = fVar41 * fVar96;
      fVar97 = fVar42 * fVar97;
      fVar99 = fVar43 * fVar99;
      fVar101 = fVar44 * fVar101;
      fVar103 = fVar45 * fVar103;
      fVar105 = fVar46 * fVar105;
      fVar107 = fVar47 * fVar107;
      auVar129._0_4_ = fVar114 * fVar92 + auVar131._0_4_;
      auVar129._4_4_ = fVar116 * fVar96 + auVar131._4_4_;
      auVar129._8_4_ = fVar117 * fVar97 + auVar131._8_4_;
      auVar129._12_4_ = fVar118 * fVar99 + auVar131._12_4_;
      auVar70._16_4_ = fVar119 * fVar101 + auVar131._16_4_;
      auVar70._0_16_ = auVar129;
      auVar70._20_4_ = fVar120 * fVar103 + auVar131._20_4_;
      auVar70._24_4_ = fVar121 * fVar105 + auVar131._24_4_;
      auVar70._28_4_ = fVar122 * fVar107 + auVar131._28_4_;
      *(float *)(param_1 + 4 + lVar16) = auVar129._0_4_;
      uVar6 = vextractps_avx(auVar129,1);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar129,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar129,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar6;
      auVar26 = auVar70._16_16_;
      *(float *)(param_1 + 4 + lVar24) = auVar70._16_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar6;
      fVar48 = fVar38 * fVar48;
      fVar54 = fVar41 * fVar54;
      fVar55 = fVar42 * fVar55;
      fVar56 = fVar43 * fVar56;
      fVar57 = fVar44 * fVar57;
      fVar58 = fVar45 * fVar58;
      fVar59 = fVar46 * fVar59;
      fVar60 = fVar47 * fVar60;
      auVar124._0_4_ = fVar114 * fVar48 + auVar125._0_4_;
      auVar124._4_4_ = fVar116 * fVar54 + auVar125._4_4_;
      auVar124._8_4_ = fVar117 * fVar55 + auVar125._8_4_;
      auVar124._12_4_ = fVar118 * fVar56 + auVar125._12_4_;
      auVar90._16_4_ = fVar119 * fVar57 + auVar125._16_4_;
      auVar90._0_16_ = auVar124;
      auVar90._20_4_ = fVar120 * fVar58 + auVar125._20_4_;
      auVar90._24_4_ = fVar121 * fVar59 + auVar125._24_4_;
      auVar90._28_4_ = fVar122 * fVar60 + auVar125._28_4_;
      *(float *)(param_1 + 8 + lVar16) = auVar124._0_4_;
      uVar6 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar6;
      auVar26 = auVar90._16_16_;
      *(float *)(param_1 + 8 + lVar24) = auVar90._16_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar6;
      *(float *)(param_1 + 0xc + lVar16) = fVar114;
      auVar26 = auVar115._0_16_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar6;
      auVar26 = auVar115._16_16_;
      *(float *)(param_1 + 0xc + lVar24) = fVar119;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar6;
      auVar127._0_4_ = -(local_440 * local_220 * fVar38) + auVar128._0_4_;
      auVar127._4_4_ = -(fStack_43c * fStack_21c * fVar41) + auVar128._4_4_;
      auVar127._8_4_ = -(fStack_438 * fStack_218 * fVar42) + auVar128._8_4_;
      auVar127._12_4_ = -(fStack_434 * fStack_214 * fVar43) + auVar128._12_4_;
      auVar109._16_4_ = -(fStack_430 * fStack_210 * fVar44) + auVar128._16_4_;
      auVar109._0_16_ = auVar127;
      auVar109._20_4_ = -(fStack_42c * fStack_20c * fVar45) + auVar128._20_4_;
      auVar109._24_4_ = -(fStack_428 * fStack_208 * fVar46) + auVar128._24_4_;
      auVar109._28_4_ = -(fStack_424 * fStack_204 * fVar47) + auVar128._28_4_;
      local_380 = auVar93._0_4_;
      iStack_37c = auVar93._4_4_;
      iStack_378 = auVar93._8_4_;
      iStack_374 = auVar93._12_4_;
      iStack_370 = auVar93._16_4_;
      iStack_36c = auVar93._20_4_;
      iStack_368 = auVar93._24_4_;
      iStack_364 = auVar93._28_4_;
      lVar16 = (longlong)local_380;
      *(float *)(param_1 + lVar16) = auVar127._0_4_;
      lVar15 = (longlong)iStack_37c;
      uVar6 = vextractps_avx(auVar127,1);
      *(undefined4 *)(param_1 + lVar15) = uVar6;
      lVar23 = (longlong)iStack_378;
      uVar6 = vextractps_avx(auVar127,2);
      *(undefined4 *)(param_1 + lVar23) = uVar6;
      lVar21 = (longlong)iStack_374;
      uVar6 = vextractps_avx(auVar127,3);
      *(undefined4 *)(param_1 + lVar21) = uVar6;
      lVar24 = (longlong)iStack_370;
      auVar26 = auVar109._16_16_;
      *(float *)(param_1 + lVar24) = auVar109._16_4_;
      lVar20 = (longlong)iStack_36c;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + lVar20) = uVar6;
      lVar22 = (longlong)iStack_368;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + lVar22) = uVar6;
      lVar19 = (longlong)iStack_364;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + lVar19) = uVar6;
      local_420 = auVar112._0_4_;
      fStack_41c = auVar112._4_4_;
      fStack_418 = auVar112._8_4_;
      fStack_414 = auVar112._12_4_;
      fStack_410 = auVar112._16_4_;
      fStack_40c = auVar112._20_4_;
      fStack_408 = auVar112._24_4_;
      fStack_404 = auVar112._28_4_;
      auVar68._0_4_ = -(local_440 * fVar92) + local_420;
      auVar68._4_4_ = -(fStack_43c * fVar96) + fStack_41c;
      auVar68._8_4_ = -(fStack_438 * fVar97) + fStack_418;
      auVar68._12_4_ = -(fStack_434 * fVar99) + fStack_414;
      auVar89._16_4_ = -(fStack_430 * fVar101) + fStack_410;
      auVar89._0_16_ = auVar68;
      auVar89._20_4_ = -(fStack_42c * fVar103) + fStack_40c;
      auVar89._24_4_ = -(fStack_428 * fVar105) + fStack_408;
      auVar89._28_4_ = -(fStack_424 * fVar107) + fStack_404;
      *(float *)(param_1 + 4 + lVar16) = auVar68._0_4_;
      uVar6 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar6;
      auVar26 = auVar89._16_16_;
      *(float *)(param_1 + 4 + lVar24) = auVar89._16_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar6;
      local_480 = auVar86._0_4_;
      fStack_47c = auVar86._4_4_;
      fStack_478 = auVar86._8_4_;
      fStack_474 = auVar86._12_4_;
      fStack_470 = auVar86._16_4_;
      fStack_46c = auVar86._20_4_;
      fStack_468 = auVar86._24_4_;
      fStack_464 = auVar86._28_4_;
      auVar39._0_4_ = -(local_440 * fVar48) + local_480;
      auVar39._4_4_ = -(fStack_43c * fVar54) + fStack_47c;
      auVar39._8_4_ = -(fStack_438 * fVar55) + fStack_478;
      auVar39._12_4_ = -(fStack_434 * fVar56) + fStack_474;
      auVar69._16_4_ = -(fStack_430 * fVar57) + fStack_470;
      auVar69._0_16_ = auVar39;
      auVar69._20_4_ = -(fStack_42c * fVar58) + fStack_46c;
      auVar69._24_4_ = -(fStack_428 * fVar59) + fStack_468;
      auVar69._28_4_ = -(fStack_424 * fVar60) + fStack_464;
      *(float *)(param_1 + 8 + lVar16) = auVar39._0_4_;
      uVar6 = vextractps_avx(auVar39,1);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar39,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar39,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar6;
      auVar26 = auVar69._16_16_;
      *(float *)(param_1 + 8 + lVar24) = auVar69._16_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar6;
      pfVar1 = (float *)(param_5 + uVar13);
      *pfVar1 = fVar98 + fVar38;
      pfVar1[1] = fVar100 + fVar41;
      pfVar1[2] = fVar102 + fVar42;
      pfVar1[3] = fVar104 + fVar43;
      pfVar1[4] = fVar106 + fVar44;
      pfVar1[5] = fVar108 + fVar45;
      pfVar1[6] = fVar123 + fVar46;
      pfVar1[7] = fVar126 + fVar47;
      *(float *)(param_1 + 0xc + lVar16) = local_440;
      auVar26 = auVar87._0_16_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar6;
      auVar26 = auVar87._16_16_;
      *(float *)(param_1 + 0xc + lVar24) = fStack_430;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar6;
      uVar18 = uVar18 + 8;
      uVar14 = uVar14 + 0x20;
    } while ((int)uVar18 < (int)(uVar12 & 0xfffffff8));
    if ((int)param_13 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar86._4_4_ = iVar17;
  auVar86._0_4_ = iVar17;
  auVar86._8_4_ = iVar17;
  auVar86._12_4_ = iVar17;
  auVar86._16_4_ = iVar17;
  auVar86._20_4_ = iVar17;
  auVar86._24_4_ = iVar17;
  auVar86._28_4_ = iVar17;
  auVar40 = vpor_avx2(auVar86,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar87._4_4_ = param_13;
  auVar87._0_4_ = param_13;
  auVar87._8_4_ = param_13;
  auVar87._12_4_ = param_13;
  auVar87._16_4_ = param_13;
  auVar87._20_4_ = param_13;
  auVar87._24_4_ = param_13;
  auVar87._28_4_ = param_13;
  auVar40 = vpcmpgtd_avx2(auVar87,auVar40);
  uVar18 = uVar18 & 0xffffffff;
  pauVar2 = (undefined1 (*) [32])(param_3 + uVar18 * 8);
  uVar12 = vmovmskps_avx(auVar40);
  bVar11 = (byte)uVar12;
  if (uVar12 == 0xff) {
    auVar94 = *pauVar2;
    auVar51 = pauVar2[1];
    auVar85 = vshufps_avx(auVar94,auVar51,0x88);
    auVar85 = vpermpd_avx2(auVar85,0xd8);
    auVar94 = vshufps_avx(auVar94,auVar51,0xdd);
    auVar94 = vpermpd_avx2(auVar94,0xd8);
    auVar50 = ZEXT816(0) << 0x20;
  }
  else {
    auVar85 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar40);
    auVar94 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar40);
    auVar50._0_12_ = ZEXT812(0);
    auVar50._12_4_ = 0;
  }
  uVar14 = 0;
  if ((param_7 & 1) == 0) goto LAB_14091453d;
  if ((~bVar11 & 0x81) == 0) {
    uVar14 = *(ulonglong *)(param_8 + uVar18);
    goto LAB_14091453d;
  }
  puVar4 = (undefined1 *)(param_8 + uVar18);
  if ((uVar12 & 1) == 0) {
    if ((uVar12 & 2) == 0) goto LAB_1409144fc;
LAB_14091549c:
    auVar26 = vpinsrb_avx(auVar50,(uint)(byte)puVar4[1],1);
    auVar50 = vpblendw_avx(auVar26,auVar50,0xe);
    if ((uVar12 & 4) != 0) goto LAB_1409154b6;
LAB_140914504:
    if ((uVar12 & 8) == 0) goto LAB_14091450c;
LAB_1409154e1:
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048080030280020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[3],3);
    auVar50 = vpblendd_avx2(auVar26,auVar50,2);
    if ((uVar12 & 0x10) != 0) goto LAB_140915504;
LAB_140914514:
    if ((uVar12 & 0x20) == 0) goto LAB_14091451c;
LAB_140915533:
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048080030403020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[5],5);
    auVar50 = vpblendw_avx(auVar26,auVar50,8);
    if ((uVar12 & 0x40) != 0) goto LAB_140915556;
LAB_140914524:
    uVar14 = auVar50._0_8_;
  }
  else {
    uVar3 = *puVar4;
    auVar50[1] = uVar3;
    auVar50[0] = uVar3;
    auVar50[2] = uVar3;
    auVar50[3] = uVar3;
    auVar50[4] = uVar3;
    auVar50[5] = uVar3;
    auVar50[6] = uVar3;
    auVar50[7] = uVar3;
    auVar50[8] = uVar3;
    auVar50[9] = uVar3;
    auVar50[10] = uVar3;
    auVar50[0xb] = uVar3;
    auVar50[0xc] = uVar3;
    auVar50[0xd] = uVar3;
    auVar50[0xe] = uVar3;
    auVar50[0xf] = uVar3;
    if ((uVar12 & 2) != 0) goto LAB_14091549c;
LAB_1409144fc:
    if ((uVar12 & 4) == 0) goto LAB_140914504;
LAB_1409154b6:
    auVar26 = vpmovzxwd_avx(auVar50);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[2],2);
    auVar26 = vpinsrb_avx(auVar26,(uint)auVar50[3],3);
    auVar50 = vpblendd_avx2(auVar26,auVar50,2);
    if ((uVar12 & 8) != 0) goto LAB_1409154e1;
LAB_14091450c:
    if ((uVar12 & 0x10) == 0) goto LAB_140914514;
LAB_140915504:
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048080030203020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[4],4);
    auVar26 = vpinsrb_avx(auVar26,(uint)auVar50[5],5);
    auVar50 = vpblendw_avx(auVar26,auVar50,8);
    if ((uVar12 & 0x20) != 0) goto LAB_140915533;
LAB_14091451c:
    if ((uVar12 & 0x40) == 0) goto LAB_140914524;
LAB_140915556:
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048080050403020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[6],6);
    auVar50 = vpinsrb_avx(auVar26,(uint)auVar50[7],7);
    uVar14 = auVar50._0_8_;
  }
  if ((uVar12 & 0x80) != 0) {
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048006050403020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[7],7);
    uVar14 = auVar26._0_8_;
  }
LAB_14091453d:
  auVar63 = SUB6416(ZEXT864(0),0);
  if ((param_10 & 1) != 0) {
    if ((~bVar11 & 0x81) == 0) {
      auVar63._8_8_ = 0;
      auVar63._0_8_ = *(ulonglong *)(param_11 + uVar18);
    }
    else {
      puVar4 = (undefined1 *)(param_11 + uVar18);
      if ((uVar12 & 1) != 0) {
        uVar3 = *puVar4;
        auVar63[1] = uVar3;
        auVar63[0] = uVar3;
        auVar63[2] = uVar3;
        auVar63[3] = uVar3;
        auVar63[4] = uVar3;
        auVar63[5] = uVar3;
        auVar63[6] = uVar3;
        auVar63[7] = uVar3;
        auVar63[8] = uVar3;
        auVar63[9] = uVar3;
        auVar63[10] = uVar3;
        auVar63[0xb] = uVar3;
        auVar63[0xc] = uVar3;
        auVar63[0xd] = uVar3;
        auVar63[0xe] = uVar3;
        auVar63[0xf] = uVar3;
      }
      if ((uVar12 & 2) != 0) {
        auVar26 = vpinsrb_avx(auVar63,(uint)(byte)puVar4[1],1);
        auVar63 = vpblendw_avx(auVar26,auVar63,0xe);
      }
      if ((uVar12 & 4) != 0) {
        auVar26 = vpmovzxwd_avx(auVar63);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[2],2);
        auVar26 = vpinsrb_avx(auVar26,(uint)auVar63[3],3);
        auVar63 = vpblendd_avx2(auVar26,auVar63,2);
      }
      if ((uVar12 & 8) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048080030280020100);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[3],3);
        auVar63 = vpblendd_avx2(auVar26,auVar63,2);
      }
      if ((uVar12 & 0x10) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048080030203020100);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[4],4);
        auVar26 = vpinsrb_avx(auVar26,(uint)auVar63[5],5);
        auVar63 = vpblendw_avx(auVar26,auVar63,8);
      }
      if ((uVar12 & 0x20) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048080030403020100);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[5],5);
        auVar63 = vpblendw_avx(auVar26,auVar63,8);
      }
      if ((uVar12 & 0x40) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048080050403020100);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[6],6);
        auVar63 = vpinsrb_avx(auVar26,(uint)auVar63[7],7);
      }
      if ((uVar12 & 0x80) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048006050403020100);
        auVar63 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[7],7);
      }
    }
  }
  auVar70 = vpslld_avx2(auVar85,4);
  auVar110._4_4_ = __real_00000004;
  auVar110._0_4_ = __real_00000004;
  auVar110._8_4_ = __real_00000004;
  auVar110._12_4_ = __real_00000004;
  auVar110._16_4_ = __real_00000004;
  auVar110._20_4_ = __real_00000004;
  auVar110._24_4_ = __real_00000004;
  auVar110._28_4_ = __real_00000004;
  vpor_avx2(auVar110,auVar70);
  auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
  auVar131._4_4_ = __real_00000008;
  auVar131._0_4_ = __real_00000008;
  auVar131._8_4_ = __real_00000008;
  auVar131._12_4_ = __real_00000008;
  auVar131._16_4_ = __real_00000008;
  auVar131._20_4_ = __real_00000008;
  auVar131._24_4_ = __real_00000008;
  auVar131._28_4_ = __real_00000008;
  vpor_avx2(auVar70,auVar131);
  auVar77 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar113._4_4_ = __real_0000000c;
  auVar113._0_4_ = __real_0000000c;
  auVar113._8_4_ = __real_0000000c;
  auVar113._12_4_ = __real_0000000c;
  auVar113._16_4_ = __real_0000000c;
  auVar113._20_4_ = __real_0000000c;
  auVar113._24_4_ = __real_0000000c;
  auVar113._28_4_ = __real_0000000c;
  vpor_avx2(auVar113,auVar70);
  auVar71 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
  auVar72 = vpslld_avx2(auVar94,4);
  vpor_avx2(auVar110,auVar72);
  auVar61 = vgatherdps(ZEXT832(0),auVar40);
  vpor_avx2(auVar72,auVar131);
  auVar64 = vgatherdps(ZEXT832(0),auVar40);
  vpor_avx2(auVar113,auVar72);
  auVar109 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar51 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar66 = vgatherdps(ZEXT832(0),auVar40);
  auVar51 = vmaskmovps_avx(auVar40,auVar51);
  auVar29 = vmaskmovps_avx(auVar40,auVar29);
  auVar77 = vmaskmovps_avx(auVar40,auVar77);
  auVar66 = vmaskmovps_avx(auVar40,auVar66);
  auVar61 = vmaskmovps_avx(auVar40,auVar61);
  auVar64 = vmaskmovps_avx(auVar40,auVar64);
  vpmulld_avx2(auVar85,auVar113);
  auVar128 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar88 = vgatherdps(ZEXT832(0),auVar40);
  auVar89 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar86 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  vpmulld_avx2(auVar94,auVar113);
  auVar87 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar90 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar14;
  auVar94 = vpmovsxbd_avx2(auVar5);
  vpslld_avx2(auVar94,2);
  auVar131 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar94 = vpmovsxbd_avx2(auVar63);
  vpslld_avx2(auVar94,2);
  auVar76 = vgatherdps(ZEXT832(0),auVar40);
  auVar94 = vsubps_avx(auVar51,auVar66);
  auVar27 = vsubps_avx(auVar29,auVar61);
  auVar65 = vsubps_avx(auVar77,auVar64);
  auVar73._0_4_ =
       auVar65._0_4_ * auVar65._0_4_ + auVar94._0_4_ * auVar94._0_4_ + auVar27._0_4_ * auVar27._0_4_
  ;
  auVar73._4_4_ =
       auVar65._4_4_ * auVar65._4_4_ + auVar94._4_4_ * auVar94._4_4_ + auVar27._4_4_ * auVar27._4_4_
  ;
  auVar73._8_4_ =
       auVar65._8_4_ * auVar65._8_4_ + auVar94._8_4_ * auVar94._8_4_ + auVar27._8_4_ * auVar27._8_4_
  ;
  auVar73._12_4_ =
       auVar65._12_4_ * auVar65._12_4_ +
       auVar94._12_4_ * auVar94._12_4_ + auVar27._12_4_ * auVar27._12_4_;
  auVar73._16_4_ =
       auVar65._16_4_ * auVar65._16_4_ +
       auVar94._16_4_ * auVar94._16_4_ + auVar27._16_4_ * auVar27._16_4_;
  auVar73._20_4_ =
       auVar65._20_4_ * auVar65._20_4_ +
       auVar94._20_4_ * auVar94._20_4_ + auVar27._20_4_ * auVar27._20_4_;
  auVar73._24_4_ =
       auVar65._24_4_ * auVar65._24_4_ +
       auVar94._24_4_ * auVar94._24_4_ + auVar27._24_4_ * auVar27._24_4_;
  auVar73._28_4_ =
       auVar65._28_4_ * auVar65._28_4_ +
       auVar94._28_4_ * auVar94._28_4_ + auVar27._28_4_ * auVar27._28_4_;
  auVar28 = vsqrtps_avx(auVar73);
  auVar94 = vdivps_avx(auVar94,auVar28);
  auVar52._4_4_ = __real_38d1b717;
  auVar52._0_4_ = __real_38d1b717;
  auVar52._8_4_ = __real_38d1b717;
  auVar52._12_4_ = __real_38d1b717;
  auVar52._16_4_ = __real_38d1b717;
  auVar52._20_4_ = __real_38d1b717;
  auVar52._24_4_ = __real_38d1b717;
  auVar52._28_4_ = __real_38d1b717;
  auVar85 = vcmpps_avx(auVar73,auVar52,1);
  auVar74._4_4_ = __real_3f800000;
  auVar74._0_4_ = __real_3f800000;
  auVar74._8_4_ = __real_3f800000;
  auVar74._12_4_ = __real_3f800000;
  auVar74._16_4_ = __real_3f800000;
  auVar74._20_4_ = __real_3f800000;
  auVar74._24_4_ = __real_3f800000;
  auVar74._28_4_ = __real_3f800000;
  auVar94 = vblendvps_avx(auVar94,auVar74,auVar85);
  auVar94 = vmaskmovps_avx(auVar40,auVar94);
  auVar27 = vdivps_avx(auVar27,auVar28);
  uVar25 = auVar85._0_4_;
  auVar93._0_4_ = ~uVar25 & auVar27._0_4_;
  uVar31 = auVar85._4_4_;
  auVar93._4_4_ = ~uVar31 & auVar27._4_4_;
  uVar32 = auVar85._8_4_;
  auVar93._8_4_ = ~uVar32 & auVar27._8_4_;
  uVar33 = auVar85._12_4_;
  auVar93._12_4_ = ~uVar33 & auVar27._12_4_;
  uVar34 = auVar85._16_4_;
  auVar93._16_4_ = ~uVar34 & auVar27._16_4_;
  uVar35 = auVar85._20_4_;
  auVar93._20_4_ = ~uVar35 & auVar27._20_4_;
  uVar36 = auVar85._24_4_;
  auVar93._24_4_ = ~uVar36 & auVar27._24_4_;
  uVar37 = auVar85._28_4_;
  auVar93._28_4_ = ~uVar37 & auVar27._28_4_;
  auVar85 = vmaskmovps_avx(auVar40,auVar93);
  auVar27 = vdivps_avx(auVar65,auVar28);
  auVar112._0_4_ = ~uVar25 & auVar27._0_4_;
  auVar112._4_4_ = ~uVar31 & auVar27._4_4_;
  auVar112._8_4_ = ~uVar32 & auVar27._8_4_;
  auVar112._12_4_ = ~uVar33 & auVar27._12_4_;
  auVar112._16_4_ = ~uVar34 & auVar27._16_4_;
  auVar112._20_4_ = ~uVar35 & auVar27._20_4_;
  auVar112._24_4_ = ~uVar36 & auVar27._24_4_;
  auVar112._28_4_ = ~uVar37 & auVar27._28_4_;
  auVar27 = vmaskmovps_avx(auVar40,auVar112);
  auVar115._0_4_ = ~uVar25 & auVar28._0_4_;
  auVar115._4_4_ = ~uVar31 & auVar28._4_4_;
  auVar115._8_4_ = ~uVar32 & auVar28._8_4_;
  auVar115._12_4_ = ~uVar33 & auVar28._12_4_;
  auVar115._16_4_ = ~uVar34 & auVar28._16_4_;
  auVar115._20_4_ = ~uVar35 & auVar28._20_4_;
  auVar115._24_4_ = ~uVar36 & auVar28._24_4_;
  auVar115._28_4_ = ~uVar37 & auVar28._28_4_;
  lVar15 = (longlong)(iVar17 << 2);
  auVar28 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_4 + lVar15));
  auVar69 = vsubps_avx(auVar115,auVar28);
  auVar65 = vdivps_avx(auVar74,auVar28);
  auVar111._4_4_ = __real_322bcc77;
  auVar111._0_4_ = __real_322bcc77;
  auVar111._8_4_ = __real_322bcc77;
  auVar111._12_4_ = __real_322bcc77;
  auVar111._16_4_ = __real_322bcc77;
  auVar111._20_4_ = __real_322bcc77;
  auVar111._24_4_ = __real_322bcc77;
  auVar111._28_4_ = __real_322bcc77;
  auVar28 = vcmpps_avx(auVar28,auVar111,1);
  auVar28 = vblendvps_avx(auVar65,auVar74,auVar28);
  local_440 = auVar109._0_4_;
  fStack_43c = auVar109._4_4_;
  fStack_438 = auVar109._8_4_;
  fStack_434 = auVar109._12_4_;
  fStack_430 = auVar109._16_4_;
  fStack_42c = auVar109._20_4_;
  fStack_428 = auVar109._24_4_;
  fStack_424 = auVar109._28_4_;
  fVar123 = auVar71._0_4_;
  auVar125._0_4_ = fVar123 + local_440;
  fVar126 = auVar71._4_4_;
  auVar125._4_4_ = fVar126 + fStack_43c;
  fVar48 = auVar71._8_4_;
  auVar125._8_4_ = fVar48 + fStack_438;
  fVar54 = auVar71._12_4_;
  auVar125._12_4_ = fVar54 + fStack_434;
  fVar55 = auVar71._16_4_;
  auVar125._16_4_ = fVar55 + fStack_430;
  fVar56 = auVar71._20_4_;
  auVar125._20_4_ = fVar56 + fStack_42c;
  fVar57 = auVar71._24_4_;
  auVar125._24_4_ = fVar57 + fStack_428;
  fVar58 = auVar71._28_4_;
  auVar125._28_4_ = fVar58 + fStack_424;
  auVar65 = vdivps_avx(auVar131,auVar125);
  auVar65 = vsqrtps_avx(auVar65);
  fVar46 = auVar131._0_4_ * param_6 * param_6;
  fVar47 = auVar131._4_4_ * param_6 * param_6;
  fVar98 = auVar131._8_4_ * param_6 * param_6;
  fVar100 = auVar131._12_4_ * param_6 * param_6;
  fVar102 = auVar131._16_4_ * param_6 * param_6;
  fVar104 = auVar131._20_4_ * param_6 * param_6;
  fVar106 = auVar131._24_4_ * param_6 * param_6;
  fVar108 = auVar131._28_4_ * param_6 * param_6;
  fVar49 = param_6 * auVar28._0_4_ * auVar65._0_4_ * (auVar76._0_4_ + auVar76._0_4_);
  fVar38 = param_6 * auVar28._4_4_ * auVar65._4_4_ * (auVar76._4_4_ + auVar76._4_4_);
  fVar41 = param_6 * auVar28._8_4_ * auVar65._8_4_ * (auVar76._8_4_ + auVar76._8_4_);
  fVar42 = param_6 * auVar28._12_4_ * auVar65._12_4_ * (auVar76._12_4_ + auVar76._12_4_);
  fVar43 = param_6 * auVar28._16_4_ * auVar65._16_4_ * (auVar76._16_4_ + auVar76._16_4_);
  fVar44 = param_6 * auVar28._20_4_ * auVar65._20_4_ * (auVar76._20_4_ + auVar76._20_4_);
  fVar45 = param_6 * auVar28._24_4_ * auVar65._24_4_ * (auVar76._24_4_ + auVar76._24_4_);
  param_6 = param_6 * auVar28._28_4_ * auVar65._28_4_ * (auVar76._28_4_ + auVar76._28_4_);
  auVar28 = vsubps_avx(auVar51,auVar128);
  auVar28 = vsubps_avx(auVar28,auVar66);
  local_460 = auVar86._0_4_;
  fStack_45c = auVar86._4_4_;
  fStack_458 = auVar86._8_4_;
  fStack_454 = auVar86._12_4_;
  fStack_450 = auVar86._16_4_;
  fStack_44c = auVar86._20_4_;
  fStack_448 = auVar86._24_4_;
  fStack_444 = auVar86._28_4_;
  auVar65 = vsubps_avx(auVar29,auVar88);
  auVar65 = vsubps_avx(auVar65,auVar61);
  local_3a0 = auVar70._0_4_;
  iStack_39c = auVar70._4_4_;
  iStack_398 = auVar70._8_4_;
  iStack_394 = auVar70._12_4_;
  iStack_390 = auVar70._16_4_;
  iStack_38c = auVar70._20_4_;
  iStack_388 = auVar70._24_4_;
  iStack_384 = auVar70._28_4_;
  local_3e0 = auVar87._0_4_;
  fStack_3dc = auVar87._4_4_;
  fStack_3d8 = auVar87._8_4_;
  fStack_3d4 = auVar87._12_4_;
  fStack_3d0 = auVar87._16_4_;
  fStack_3cc = auVar87._20_4_;
  fStack_3c8 = auVar87._24_4_;
  fStack_3c4 = auVar87._28_4_;
  auVar76 = vsubps_avx(auVar77,auVar89);
  auVar76 = vsubps_avx(auVar76,auVar64);
  local_400 = auVar90._0_4_;
  fStack_3fc = auVar90._4_4_;
  fStack_3f8 = auVar90._8_4_;
  fStack_3f4 = auVar90._12_4_;
  fStack_3f0 = auVar90._16_4_;
  fStack_3ec = auVar90._20_4_;
  fStack_3e8 = auVar90._24_4_;
  fStack_3e4 = auVar90._28_4_;
  local_340 = auVar85._0_4_;
  fStack_33c = auVar85._4_4_;
  fStack_338 = auVar85._8_4_;
  fStack_334 = auVar85._12_4_;
  fStack_330 = auVar85._16_4_;
  fStack_32c = auVar85._20_4_;
  fStack_328 = auVar85._24_4_;
  fStack_324 = auVar85._28_4_;
  local_360 = auVar94._0_4_;
  fStack_35c = auVar94._4_4_;
  fStack_358 = auVar94._8_4_;
  fStack_354 = auVar94._12_4_;
  fStack_350 = auVar94._16_4_;
  fStack_34c = auVar94._20_4_;
  fStack_348 = auVar94._24_4_;
  fStack_344 = auVar94._28_4_;
  local_320 = auVar27._0_4_;
  fStack_31c = auVar27._4_4_;
  fStack_318 = auVar27._8_4_;
  fStack_314 = auVar27._12_4_;
  fStack_310 = auVar27._16_4_;
  fStack_30c = auVar27._20_4_;
  fStack_308 = auVar27._24_4_;
  fStack_304 = auVar27._28_4_;
  auVar85 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_5 + lVar15));
  auVar62._0_4_ =
       -(fVar49 * (local_320 * (auVar76._0_4_ + local_400) +
                  local_360 * (auVar28._0_4_ + local_460) + (auVar65._0_4_ + local_3e0) * local_340)
        ) + (-(fVar46 * auVar69._0_4_) - auVar85._0_4_);
  auVar62._4_4_ =
       -(fVar38 * (fStack_31c * (auVar76._4_4_ + fStack_3fc) +
                  fStack_35c * (auVar28._4_4_ + fStack_45c) +
                  (auVar65._4_4_ + fStack_3dc) * fStack_33c)) +
       (-(fVar47 * auVar69._4_4_) - auVar85._4_4_);
  auVar62._8_4_ =
       -(fVar41 * (fStack_318 * (auVar76._8_4_ + fStack_3f8) +
                  fStack_358 * (auVar28._8_4_ + fStack_458) +
                  (auVar65._8_4_ + fStack_3d8) * fStack_338)) +
       (-(fVar98 * auVar69._8_4_) - auVar85._8_4_);
  auVar62._12_4_ =
       -(fVar42 * (fStack_314 * (auVar76._12_4_ + fStack_3f4) +
                  fStack_354 * (auVar28._12_4_ + fStack_454) +
                  (auVar65._12_4_ + fStack_3d4) * fStack_334)) +
       (-(fVar100 * auVar69._12_4_) - auVar85._12_4_);
  auVar62._16_4_ =
       -(fVar43 * (fStack_310 * (auVar76._16_4_ + fStack_3f0) +
                  fStack_350 * (auVar28._16_4_ + fStack_450) +
                  (auVar65._16_4_ + fStack_3d0) * fStack_330)) +
       (-(fVar102 * auVar69._16_4_) - auVar85._16_4_);
  auVar62._20_4_ =
       -(fVar44 * (fStack_30c * (auVar76._20_4_ + fStack_3ec) +
                  fStack_34c * (auVar28._20_4_ + fStack_44c) +
                  (auVar65._20_4_ + fStack_3cc) * fStack_32c)) +
       (-(fVar104 * auVar69._20_4_) - auVar85._20_4_);
  auVar62._24_4_ =
       -(fVar45 * (fStack_308 * (auVar76._24_4_ + fStack_3e8) +
                  fStack_348 * (auVar28._24_4_ + fStack_448) +
                  (auVar65._24_4_ + fStack_3c8) * fStack_328)) +
       (-(fVar106 * auVar69._24_4_) - auVar85._24_4_);
  auVar62._28_4_ =
       -(param_6 *
        (fStack_304 * (auVar76._28_4_ + fStack_3e4) +
        fStack_344 * (auVar28._28_4_ + fStack_444) + (auVar65._28_4_ + fStack_3c4) * fStack_324)) +
       (-(fVar108 * auVar69._28_4_) - auVar85._28_4_);
  auVar53._0_4_ = auVar125._0_4_ * (fVar46 + fVar49) + __real_3f800000;
  auVar53._4_4_ = auVar125._4_4_ * (fVar47 + fVar38) + __real_3f800000;
  auVar53._8_4_ = auVar125._8_4_ * (fVar98 + fVar41) + __real_3f800000;
  auVar53._12_4_ = auVar125._12_4_ * (fVar100 + fVar42) + __real_3f800000;
  auVar53._16_4_ = auVar125._16_4_ * (fVar102 + fVar43) + __real_3f800000;
  auVar53._20_4_ = auVar125._20_4_ * (fVar104 + fVar44) + __real_3f800000;
  auVar53._24_4_ = auVar125._24_4_ * (fVar106 + fVar45) + __real_3f800000;
  auVar53._28_4_ = auVar125._28_4_ * (fVar108 + param_6) + __real_3f800000;
  auVar94 = vdivps_avx(auVar62,auVar53);
  fVar49 = auVar94._0_4_;
  auVar128._0_4_ = fVar49 + auVar85._0_4_;
  fVar38 = auVar94._4_4_;
  auVar128._4_4_ = fVar38 + auVar85._4_4_;
  fVar41 = auVar94._8_4_;
  auVar128._8_4_ = fVar41 + auVar85._8_4_;
  fVar42 = auVar94._12_4_;
  auVar128._12_4_ = fVar42 + auVar85._12_4_;
  fVar43 = auVar94._16_4_;
  auVar128._16_4_ = fVar43 + auVar85._16_4_;
  fVar44 = auVar94._20_4_;
  auVar128._20_4_ = fVar44 + auVar85._20_4_;
  fVar45 = auVar94._24_4_;
  auVar128._24_4_ = fVar45 + auVar85._24_4_;
  fVar46 = auVar94._28_4_;
  auVar128._28_4_ = fVar46 + auVar85._28_4_;
  auVar40 = vmaskmovps_avx(auVar40,auVar128);
  *(undefined1 (*) [32])(param_5 + lVar15) = auVar40;
  local_360 = local_360 * fVar49;
  fStack_35c = fStack_35c * fVar38;
  fStack_358 = fStack_358 * fVar41;
  fStack_354 = fStack_354 * fVar42;
  fStack_350 = fStack_350 * fVar43;
  fStack_34c = fStack_34c * fVar44;
  fStack_348 = fStack_348 * fVar45;
  fStack_344 = fStack_344 * fVar46;
  auVar130._0_4_ = fVar123 * local_360 + auVar51._0_4_;
  auVar130._4_4_ = fVar126 * fStack_35c + auVar51._4_4_;
  auVar130._8_4_ = fVar48 * fStack_358 + auVar51._8_4_;
  auVar130._12_4_ = fVar54 * fStack_354 + auVar51._12_4_;
  auVar132._16_4_ = fVar55 * fStack_350 + auVar51._16_4_;
  auVar132._0_16_ = auVar130;
  auVar132._20_4_ = fVar56 * fStack_34c + auVar51._20_4_;
  auVar132._24_4_ = fVar57 * fStack_348 + auVar51._24_4_;
  auVar132._28_4_ = fVar58 * fStack_344 + auVar51._28_4_;
  if ((uVar12 & 1) != 0) {
    *(float *)(param_1 + local_3a0) = auVar130._0_4_;
  }
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar130,1);
    *(undefined4 *)(param_1 + iStack_39c) = uVar7;
  }
  local_420 = auVar72._0_4_;
  fStack_41c = auVar72._4_4_;
  fStack_418 = auVar72._8_4_;
  fStack_414 = auVar72._12_4_;
  fStack_410 = auVar72._16_4_;
  fStack_40c = auVar72._20_4_;
  fStack_408 = auVar72._24_4_;
  fStack_404 = auVar72._28_4_;
  local_460 = auVar29._0_4_;
  fStack_45c = auVar29._4_4_;
  fStack_458 = auVar29._8_4_;
  fStack_454 = auVar29._12_4_;
  fStack_450 = auVar29._16_4_;
  fStack_44c = auVar29._20_4_;
  fStack_448 = auVar29._24_4_;
  fStack_444 = auVar29._28_4_;
  auVar67 = auVar71._0_16_;
  auVar68 = auVar71._16_16_;
  auVar124 = auVar132._16_16_;
  auVar26 = auVar109._0_16_;
  auVar39 = auVar109._16_16_;
  local_4a0 = auVar66._0_4_;
  fStack_49c = auVar66._4_4_;
  fStack_498 = auVar66._8_4_;
  fStack_494 = auVar66._12_4_;
  fStack_490 = auVar66._16_4_;
  fStack_48c = auVar66._20_4_;
  fStack_488 = auVar66._24_4_;
  fStack_484 = auVar66._28_4_;
  local_480 = auVar61._0_4_;
  fStack_47c = auVar61._4_4_;
  fStack_478 = auVar61._8_4_;
  fStack_474 = auVar61._12_4_;
  fStack_470 = auVar61._16_4_;
  fStack_46c = auVar61._20_4_;
  fStack_468 = auVar61._24_4_;
  fStack_464 = auVar61._28_4_;
  local_4c0 = auVar64._0_4_;
  fStack_4bc = auVar64._4_4_;
  fStack_4b8 = auVar64._8_4_;
  fStack_4b4 = auVar64._12_4_;
  fStack_4b0 = auVar64._16_4_;
  fStack_4ac = auVar64._20_4_;
  fStack_4a8 = auVar64._24_4_;
  fStack_4a4 = auVar64._28_4_;
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar130,2);
    *(undefined4 *)(param_1 + iStack_398) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar130,3);
    *(undefined4 *)(param_1 + iStack_394) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(float *)(param_1 + iStack_390) = auVar132._16_4_;
  }
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + iStack_38c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + iStack_388) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + iStack_384) = uVar7;
    auVar71._0_4_ = fVar123 * fVar49 * local_340 + local_460;
    auVar71._4_4_ = fVar126 * fVar38 * fStack_33c + fStack_45c;
    auVar71._8_4_ = fVar48 * fVar41 * fStack_338 + fStack_458;
    auVar71._12_4_ = fVar54 * fVar42 * fStack_334 + fStack_454;
    auVar71._16_4_ = fVar55 * fVar43 * fStack_330 + fStack_450;
    auVar71._20_4_ = fVar56 * fVar44 * fStack_32c + fStack_44c;
    auVar71._24_4_ = fVar57 * fVar45 * fStack_328 + fStack_448;
    auVar71._28_4_ = fVar58 * fVar46 * fStack_324 + fStack_444;
  }
  else {
    auVar71._0_4_ = fVar123 * fVar49 * local_340 + local_460;
    auVar71._4_4_ = fVar126 * fVar38 * fStack_33c + fStack_45c;
    auVar71._8_4_ = fVar48 * fVar41 * fStack_338 + fStack_458;
    auVar71._12_4_ = fVar54 * fVar42 * fStack_334 + fStack_454;
    auVar71._16_4_ = fVar55 * fVar43 * fStack_330 + fStack_450;
    auVar71._20_4_ = fVar56 * fVar44 * fStack_32c + fStack_44c;
    auVar71._24_4_ = fVar57 * fVar45 * fStack_328 + fStack_448;
    auVar71._28_4_ = fVar58 * fVar46 * fStack_324 + fStack_444;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_3a0) = auVar71._0_4_;
  }
  auVar124 = auVar71._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_39c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_398) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_394) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_390) = auVar71._16_4_;
  }
  auVar124 = auVar71._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_38c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_388) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_384) = uVar7;
    auVar72._0_4_ = fVar123 * local_320 * fVar49 + auVar77._0_4_;
    auVar72._4_4_ = fVar126 * fStack_31c * fVar38 + auVar77._4_4_;
    auVar72._8_4_ = fVar48 * fStack_318 * fVar41 + auVar77._8_4_;
    auVar72._12_4_ = fVar54 * fStack_314 * fVar42 + auVar77._12_4_;
    auVar72._16_4_ = fVar55 * fStack_310 * fVar43 + auVar77._16_4_;
    auVar72._20_4_ = fVar56 * fStack_30c * fVar44 + auVar77._20_4_;
    auVar72._24_4_ = fVar57 * fStack_308 * fVar45 + auVar77._24_4_;
    auVar72._28_4_ = fVar58 * fStack_304 * fVar46 + auVar77._28_4_;
  }
  else {
    auVar72._0_4_ = fVar123 * local_320 * fVar49 + auVar77._0_4_;
    auVar72._4_4_ = fVar126 * fStack_31c * fVar38 + auVar77._4_4_;
    auVar72._8_4_ = fVar48 * fStack_318 * fVar41 + auVar77._8_4_;
    auVar72._12_4_ = fVar54 * fStack_314 * fVar42 + auVar77._12_4_;
    auVar72._16_4_ = fVar55 * fStack_310 * fVar43 + auVar77._16_4_;
    auVar72._20_4_ = fVar56 * fStack_30c * fVar44 + auVar77._20_4_;
    auVar72._24_4_ = fVar57 * fStack_308 * fVar45 + auVar77._24_4_;
    auVar72._28_4_ = fVar58 * fStack_304 * fVar46 + auVar77._28_4_;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_3a0) = auVar72._0_4_;
  }
  auVar124 = auVar72._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_39c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_398) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_394) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_390) = auVar72._16_4_;
  }
  auVar124 = auVar72._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_38c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_388) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_384) = uVar7;
  }
  if ((uVar12 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_3a0) = fVar123;
  }
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_39c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_398) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_394) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_390) = fVar55;
  }
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar68,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_38c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar68,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_388) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar68,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_384) = uVar7;
    auVar95._0_4_ = -(local_440 * local_360) + local_4a0;
    auVar95._4_4_ = -(fStack_43c * fStack_35c) + fStack_49c;
    auVar95._8_4_ = -(fStack_438 * fStack_358) + fStack_498;
    auVar95._12_4_ = -(fStack_434 * fStack_354) + fStack_494;
    auVar95._16_4_ = -(fStack_430 * fStack_350) + fStack_490;
    auVar95._20_4_ = -(fStack_42c * fStack_34c) + fStack_48c;
    auVar95._24_4_ = -(fStack_428 * fStack_348) + fStack_488;
    auVar95._28_4_ = -(fStack_424 * fStack_344) + fStack_484;
  }
  else {
    auVar95._0_4_ = -(local_440 * local_360) + local_4a0;
    auVar95._4_4_ = -(fStack_43c * fStack_35c) + fStack_49c;
    auVar95._8_4_ = -(fStack_438 * fStack_358) + fStack_498;
    auVar95._12_4_ = -(fStack_434 * fStack_354) + fStack_494;
    auVar95._16_4_ = -(fStack_430 * fStack_350) + fStack_490;
    auVar95._20_4_ = -(fStack_42c * fStack_34c) + fStack_48c;
    auVar95._24_4_ = -(fStack_428 * fStack_348) + fStack_488;
    auVar95._28_4_ = -(fStack_424 * fStack_344) + fStack_484;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + (int)local_420) = auVar95._0_4_;
  }
  auVar67 = auVar95._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + (int)fStack_41c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + (int)fStack_418) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + (int)fStack_414) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_410) = auVar95._16_4_;
  }
  auVar67 = auVar95._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + (int)fStack_40c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + (int)fStack_408) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + (int)fStack_404) = uVar7;
    auVar30._0_4_ = -(local_440 * fVar49 * local_340) + local_480;
    auVar30._4_4_ = -(fStack_43c * fVar38 * fStack_33c) + fStack_47c;
    auVar30._8_4_ = -(fStack_438 * fVar41 * fStack_338) + fStack_478;
    auVar30._12_4_ = -(fStack_434 * fVar42 * fStack_334) + fStack_474;
    auVar30._16_4_ = -(fStack_430 * fVar43 * fStack_330) + fStack_470;
    auVar30._20_4_ = -(fStack_42c * fVar44 * fStack_32c) + fStack_46c;
    auVar30._24_4_ = -(fStack_428 * fVar45 * fStack_328) + fStack_468;
    auVar30._28_4_ = -(fStack_424 * fVar46 * fStack_324) + fStack_464;
  }
  else {
    auVar30._0_4_ = -(local_440 * fVar49 * local_340) + local_480;
    auVar30._4_4_ = -(fStack_43c * fVar38 * fStack_33c) + fStack_47c;
    auVar30._8_4_ = -(fStack_438 * fVar41 * fStack_338) + fStack_478;
    auVar30._12_4_ = -(fStack_434 * fVar42 * fStack_334) + fStack_474;
    auVar30._16_4_ = -(fStack_430 * fVar43 * fStack_330) + fStack_470;
    auVar30._20_4_ = -(fStack_42c * fVar44 * fStack_32c) + fStack_46c;
    auVar30._24_4_ = -(fStack_428 * fVar45 * fStack_328) + fStack_468;
    auVar30._28_4_ = -(fStack_424 * fVar46 * fStack_324) + fStack_464;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_420) = auVar30._0_4_;
  }
  auVar67 = auVar30._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_41c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_418) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_414) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_410) = auVar30._16_4_;
  }
  auVar67 = auVar30._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_40c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_408) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_404) = uVar7;
    auVar91._0_4_ = -(local_440 * local_320 * fVar49) + local_4c0;
    auVar91._4_4_ = -(fStack_43c * fStack_31c * fVar38) + fStack_4bc;
    auVar91._8_4_ = -(fStack_438 * fStack_318 * fVar41) + fStack_4b8;
    auVar91._12_4_ = -(fStack_434 * fStack_314 * fVar42) + fStack_4b4;
    auVar91._16_4_ = -(fStack_430 * fStack_310 * fVar43) + fStack_4b0;
    auVar91._20_4_ = -(fStack_42c * fStack_30c * fVar44) + fStack_4ac;
    auVar91._24_4_ = -(fStack_428 * fStack_308 * fVar45) + fStack_4a8;
    auVar91._28_4_ = -(fStack_424 * fStack_304 * fVar46) + fStack_4a4;
  }
  else {
    auVar91._0_4_ = -(local_440 * local_320 * fVar49) + local_4c0;
    auVar91._4_4_ = -(fStack_43c * fStack_31c * fVar38) + fStack_4bc;
    auVar91._8_4_ = -(fStack_438 * fStack_318 * fVar41) + fStack_4b8;
    auVar91._12_4_ = -(fStack_434 * fStack_314 * fVar42) + fStack_4b4;
    auVar91._16_4_ = -(fStack_430 * fStack_310 * fVar43) + fStack_4b0;
    auVar91._20_4_ = -(fStack_42c * fStack_30c * fVar44) + fStack_4ac;
    auVar91._24_4_ = -(fStack_428 * fStack_308 * fVar45) + fStack_4a8;
    auVar91._28_4_ = -(fStack_424 * fStack_304 * fVar46) + fStack_4a4;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_420) = auVar91._0_4_;
  }
  auVar67 = auVar91._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_41c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_418) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_414) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_410) = auVar91._16_4_;
  }
  auVar67 = auVar91._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_40c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_408) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_404) = uVar7;
  }
  if ((uVar12 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_420) = local_440;
  }
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar26,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_41c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar26,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_418) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar26,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_414) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_410) = fStack_430;
  }
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_40c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_408) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_404) = uVar7;
  }
  return;
}

// ApplyXPBDSpringConstraints_avx2 @ 1409170f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraints_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,uint param_7)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [32];
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [24];
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  char cVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  float fVar59;
  undefined1 auVar60 [16];
  float fVar63;
  float fVar64;
  undefined1 auVar61 [32];
  float fVar65;
  undefined1 auVar62 [32];
  int iVar66;
  undefined1 auVar68 [32];
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  undefined1 in_ZMM3 [64];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 in_ZMM4 [64];
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 in_ZMM5 [64];
  int iVar89;
  float fVar90;
  undefined1 auVar91 [16];
  float fVar95;
  float fVar96;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar92 [32];
  float fVar97;
  float fVar101;
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar111 [32];
  float fVar119;
  undefined1 auVar112 [32];
  undefined1 auVar120 [16];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [16];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [16];
  undefined1 auVar137 [32];
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
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar67;
  undefined1 auVar129 [32];
  
  uVar15 = __real_00000008;
  uVar14 = __real_00000004;
  fVar7 = __real_3f800000;
  uVar5 = __real_38d1b717;
  uVar16 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar16 = param_7;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar59 = param_5 * param_6 * param_5;
    fVar37 = (float)((uint)fVar59 ^ __real_80000000);
    fVar42 = (float)((uint)fVar59 ^ __real_80000000);
    fVar44 = (float)((uint)fVar59 ^ __real_80000000);
    fVar46 = (float)((uint)fVar59 ^ __real_80000000);
    fVar48 = (float)((uint)fVar59 ^ __real_80000000);
    fVar50 = (float)((uint)fVar59 ^ __real_80000000);
    fVar52 = (float)((uint)fVar59 ^ __real_80000000);
    fVar54 = (float)((uint)fVar59 ^ __real_80000000);
    uVar31 = 0;
    uVar21 = 0;
    do {
      auVar3 = *(undefined1 (*) [32])(param_2 + uVar21 * 2);
      auVar40 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar21 * 2);
      auVar68 = vshufps_avx(auVar3,auVar40,0x88);
      auVar68 = vpermpd_avx2(auVar68,0xd8);
      auVar56 = vpslld_avx2(auVar68,4);
      auVar68 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar92 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar68);
      auVar3 = vshufps_avx(auVar3,auVar40,0xdd);
      auVar40 = vpermpd_avx2(auVar3,0xd8);
      auVar57._4_4_ = uVar14;
      auVar57._0_4_ = uVar14;
      auVar57._8_4_ = uVar14;
      auVar57._12_4_ = uVar14;
      auVar57._16_4_ = uVar14;
      auVar57._20_4_ = uVar14;
      auVar57._24_4_ = uVar14;
      auVar57._28_4_ = uVar14;
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar133 = vpslld_avx2(auVar40,4);
      auVar68._4_4_ = uVar15;
      auVar68._0_4_ = uVar15;
      auVar68._8_4_ = uVar15;
      auVar68._12_4_ = uVar15;
      auVar68._16_4_ = uVar15;
      auVar68._20_4_ = uVar15;
      auVar68._24_4_ = uVar15;
      auVar68._28_4_ = uVar15;
      auVar40 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar132 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
      auVar40 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar137 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2(auVar56 | auVar57,auVar56 | auVar57);
      auVar125 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar76 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar3 = vpcmpeqd_avx2(auVar68 | auVar56,auVar68 | auVar56);
      auVar121 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar57 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar61 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      uVar22 = uVar21 & 0xffffffff;
      auVar13 = *(undefined1 (*) [24])(param_4 + uVar22);
      uVar12 = *(undefined8 *)((undefined1 (*) [24])(param_4 + uVar22))[1];
      auVar40 = vsubps_avx(auVar92,auVar132);
      auVar68 = vsubps_avx(auVar137,auVar125);
      auVar111 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar57);
      auVar57 = vsubps_avx(auVar76,auVar121);
      auVar58._0_4_ =
           auVar57._0_4_ * auVar57._0_4_ +
           auVar40._0_4_ * auVar40._0_4_ + auVar68._0_4_ * auVar68._0_4_;
      auVar58._4_4_ =
           auVar57._4_4_ * auVar57._4_4_ +
           auVar40._4_4_ * auVar40._4_4_ + auVar68._4_4_ * auVar68._4_4_;
      auVar58._8_4_ =
           auVar57._8_4_ * auVar57._8_4_ +
           auVar40._8_4_ * auVar40._8_4_ + auVar68._8_4_ * auVar68._8_4_;
      auVar58._12_4_ =
           auVar57._12_4_ * auVar57._12_4_ +
           auVar40._12_4_ * auVar40._12_4_ + auVar68._12_4_ * auVar68._12_4_;
      auVar58._16_4_ =
           auVar57._16_4_ * auVar57._16_4_ +
           auVar40._16_4_ * auVar40._16_4_ + auVar68._16_4_ * auVar68._16_4_;
      auVar58._20_4_ =
           auVar57._20_4_ * auVar57._20_4_ +
           auVar40._20_4_ * auVar40._20_4_ + auVar68._20_4_ * auVar68._20_4_;
      auVar58._24_4_ =
           auVar57._24_4_ * auVar57._24_4_ +
           auVar40._24_4_ * auVar40._24_4_ + auVar68._24_4_ * auVar68._24_4_;
      auVar58._28_4_ =
           auVar57._28_4_ * auVar57._28_4_ +
           auVar40._28_4_ * auVar40._28_4_ + auVar68._28_4_ * auVar68._28_4_;
      auVar112 = vsqrtps_avx(auVar58);
      auVar3._4_4_ = uVar5;
      auVar3._0_4_ = uVar5;
      auVar3._8_4_ = uVar5;
      auVar3._12_4_ = uVar5;
      auVar3._16_4_ = uVar5;
      auVar3._20_4_ = uVar5;
      auVar3._24_4_ = uVar5;
      auVar3._28_4_ = uVar5;
      auVar3 = vcmpps_avx(auVar58,auVar3,1);
      auVar40 = vdivps_avx(auVar40,auVar112);
      auVar68 = vdivps_avx(auVar68,auVar112);
      auVar57 = vdivps_avx(auVar57,auVar112);
      uVar30 = auVar3._0_4_;
      auVar77._0_4_ = ~uVar30 & auVar112._0_4_;
      uVar69 = auVar3._4_4_;
      auVar77._4_4_ = ~uVar69 & auVar112._4_4_;
      uVar70 = auVar3._8_4_;
      auVar77._8_4_ = ~uVar70 & auVar112._8_4_;
      uVar71 = auVar3._12_4_;
      auVar77._12_4_ = ~uVar71 & auVar112._12_4_;
      uVar72 = auVar3._16_4_;
      auVar77._16_4_ = ~uVar72 & auVar112._16_4_;
      uVar73 = auVar3._20_4_;
      auVar77._20_4_ = ~uVar73 & auVar112._20_4_;
      uVar74 = auVar3._24_4_;
      auVar77._24_4_ = ~uVar74 & auVar112._24_4_;
      uVar75 = auVar3._28_4_;
      auVar77._28_4_ = ~uVar75 & auVar112._28_4_;
      auVar112 = vsubps_avx(auVar77,*(undefined1 (*) [32])(param_3 + uVar22));
      fVar6 = auVar61._0_4_;
      fVar110 = auVar111._0_4_;
      fVar63 = auVar61._4_4_;
      fVar113 = auVar111._4_4_;
      fVar8 = auVar61._8_4_;
      fVar114 = auVar111._8_4_;
      fVar64 = auVar61._12_4_;
      fVar115 = auVar111._12_4_;
      fVar9 = auVar61._16_4_;
      fVar116 = auVar111._16_4_;
      fVar65 = auVar61._20_4_;
      fVar117 = auVar111._20_4_;
      fVar102 = auVar61._24_4_;
      fVar118 = auVar111._24_4_;
      fVar103 = auVar61._28_4_;
      fVar119 = auVar111._28_4_;
      local_320 = auVar13._0_4_;
      fStack_31c = auVar13._4_4_;
      fStack_318 = auVar13._8_4_;
      fStack_314 = auVar13._12_4_;
      fStack_310 = auVar13._16_4_;
      fStack_30c = auVar13._20_4_;
      fStack_308 = (float)uVar12;
      fStack_304 = (float)((ulonglong)uVar12 >> 0x20);
      auVar126._0_4_ = auVar112._0_4_ * fVar37 - local_320;
      auVar126._4_4_ = auVar112._4_4_ * fVar42 - fStack_31c;
      auVar126._8_4_ = auVar112._8_4_ * fVar44 - fStack_318;
      auVar126._12_4_ = auVar112._12_4_ * fVar46 - fStack_314;
      auVar126._16_4_ = auVar112._16_4_ * fVar48 - fStack_310;
      auVar126._20_4_ = auVar112._20_4_ * fVar50 - fStack_30c;
      auVar126._24_4_ = auVar112._24_4_ * fVar52 - fStack_308;
      auVar126._28_4_ = auVar112._28_4_ * fVar54 - fStack_304;
      auVar122._4_4_ = fVar7;
      auVar122._0_4_ = fVar7;
      auVar122._8_4_ = fVar7;
      auVar122._12_4_ = fVar7;
      auVar122._16_4_ = fVar7;
      auVar122._20_4_ = fVar7;
      auVar122._24_4_ = fVar7;
      auVar122._28_4_ = fVar7;
      auVar112._0_4_ = (fVar110 + fVar6) * fVar59 + fVar7;
      auVar112._4_4_ = (fVar113 + fVar63) * fVar59 + fVar7;
      auVar112._8_4_ = (fVar114 + fVar8) * fVar59 + fVar7;
      auVar112._12_4_ = (fVar115 + fVar64) * fVar59 + fVar7;
      auVar112._16_4_ = (fVar116 + fVar9) * fVar59 + fVar7;
      auVar112._20_4_ = (fVar117 + fVar65) * fVar59 + fVar7;
      auVar112._24_4_ = (fVar118 + fVar102) * fVar59 + fVar7;
      auVar112._28_4_ = (fVar119 + fVar103) * fVar59 + fVar7;
      auVar112 = vdivps_avx(auVar126,auVar112);
      auVar3 = vblendvps_avx(auVar40,auVar122,auVar3);
      fVar104 = auVar112._0_4_;
      fVar38 = auVar3._0_4_ * fVar104;
      fVar105 = auVar112._4_4_;
      fVar43 = auVar3._4_4_ * fVar105;
      fVar106 = auVar112._8_4_;
      fVar45 = auVar3._8_4_ * fVar106;
      fVar107 = auVar112._12_4_;
      fVar47 = auVar3._12_4_ * fVar107;
      fVar108 = auVar112._16_4_;
      fVar49 = auVar3._16_4_ * fVar108;
      fVar109 = auVar112._20_4_;
      fVar51 = auVar3._20_4_ * fVar109;
      fVar10 = auVar112._24_4_;
      fVar53 = auVar3._24_4_ * fVar10;
      fVar11 = auVar112._28_4_;
      fVar55 = auVar3._28_4_ * fVar11;
      auVar91._0_4_ = fVar6 * fVar38 + auVar92._0_4_;
      auVar91._4_4_ = fVar63 * fVar43 + auVar92._4_4_;
      auVar91._8_4_ = fVar8 * fVar45 + auVar92._8_4_;
      auVar91._12_4_ = fVar64 * fVar47 + auVar92._12_4_;
      auVar41._16_4_ = fVar9 * fVar49 + auVar92._16_4_;
      auVar41._0_16_ = auVar91;
      auVar41._20_4_ = fVar65 * fVar51 + auVar92._20_4_;
      auVar41._24_4_ = fVar102 * fVar53 + auVar92._24_4_;
      auVar41._28_4_ = fVar103 * fVar55 + auVar92._28_4_;
      lVar20 = (longlong)auVar56._0_4_;
      lVar35 = (longlong)auVar56._4_4_;
      *(float *)(param_1 + lVar20) = auVar91._0_4_;
      lVar36 = (longlong)auVar56._8_4_;
      uVar4 = vextractps_avx(auVar91,1);
      *(undefined4 *)(param_1 + lVar35) = uVar4;
      lVar34 = (longlong)auVar56._12_4_;
      uVar4 = vextractps_avx(auVar91,2);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar33 = (longlong)auVar56._16_4_;
      uVar4 = vextractps_avx(auVar91,3);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      auVar60 = auVar41._16_16_;
      lVar18 = (longlong)auVar56._20_4_;
      *(float *)(param_1 + lVar33) = auVar41._16_4_;
      lVar32 = (longlong)auVar56._24_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + lVar18) = uVar4;
      lVar29 = (longlong)auVar56._28_4_;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      fVar90 = (float)(~uVar30 & auVar68._0_4_) * fVar104;
      fVar95 = (float)(~uVar69 & auVar68._4_4_) * fVar105;
      fVar96 = (float)(~uVar70 & auVar68._8_4_) * fVar106;
      fVar97 = (float)(~uVar71 & auVar68._12_4_) * fVar107;
      fVar98 = (float)(~uVar72 & auVar68._16_4_) * fVar108;
      fVar99 = (float)(~uVar73 & auVar68._20_4_) * fVar109;
      fVar100 = (float)(~uVar74 & auVar68._24_4_) * fVar10;
      fVar101 = (float)(~uVar75 & auVar68._28_4_) * fVar11;
      auVar136._0_4_ = fVar6 * fVar90 + auVar137._0_4_;
      auVar136._4_4_ = fVar63 * fVar95 + auVar137._4_4_;
      auVar136._8_4_ = fVar8 * fVar96 + auVar137._8_4_;
      auVar136._12_4_ = fVar64 * fVar97 + auVar137._12_4_;
      auVar92._16_4_ = fVar9 * fVar98 + auVar137._16_4_;
      auVar92._0_16_ = auVar136;
      auVar92._20_4_ = fVar65 * fVar99 + auVar137._20_4_;
      auVar92._24_4_ = fVar102 * fVar100 + auVar137._24_4_;
      auVar92._28_4_ = fVar103 * fVar101 + auVar137._28_4_;
      *(float *)(param_1 + 4 + lVar20) = auVar136._0_4_;
      uVar4 = vextractps_avx(auVar136,1);
      *(undefined4 *)(param_1 + 4 + lVar35) = uVar4;
      uVar4 = vextractps_avx(auVar136,2);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar136,3);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      auVar60 = auVar92._16_16_;
      *(float *)(param_1 + 4 + lVar33) = auVar92._16_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 4 + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar4;
      fVar81 = (float)(~uVar30 & auVar57._0_4_);
      fVar82 = (float)(~uVar69 & auVar57._4_4_);
      fVar83 = (float)(~uVar70 & auVar57._8_4_);
      fVar84 = (float)(~uVar71 & auVar57._12_4_);
      fVar85 = (float)(~uVar72 & auVar57._16_4_);
      fVar86 = (float)(~uVar73 & auVar57._20_4_);
      fVar87 = (float)(~uVar74 & auVar57._24_4_);
      fVar88 = (float)(~uVar75 & auVar57._28_4_);
      in_ZMM5 = ZEXT3264(CONCAT428(fVar88,CONCAT424(fVar87,CONCAT420(fVar86,CONCAT416(fVar85,
                                                  CONCAT412(fVar84,CONCAT48(fVar83,CONCAT44(fVar82,
                                                  fVar81))))))));
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      fVar81 = fVar81 * fVar104;
      fVar82 = fVar82 * fVar105;
      fVar83 = fVar83 * fVar106;
      fVar84 = fVar84 * fVar107;
      fVar85 = fVar85 * fVar108;
      fVar86 = fVar86 * fVar109;
      fVar87 = fVar87 * fVar10;
      fVar88 = fVar88 * fVar11;
      auVar60._0_4_ = fVar6 * fVar81 + auVar76._0_4_;
      auVar60._4_4_ = fVar63 * fVar82 + auVar76._4_4_;
      auVar60._8_4_ = fVar8 * fVar83 + auVar76._8_4_;
      auVar60._12_4_ = fVar64 * fVar84 + auVar76._12_4_;
      auVar40._16_4_ = fVar9 * fVar85 + auVar76._16_4_;
      auVar40._0_16_ = auVar60;
      auVar40._20_4_ = fVar65 * fVar86 + auVar76._20_4_;
      auVar40._24_4_ = fVar102 * fVar87 + auVar76._24_4_;
      auVar40._28_4_ = fVar103 * fVar88 + auVar76._28_4_;
      in_ZMM4 = ZEXT3264(auVar40);
      *(float *)(param_1 + 8 + lVar20) = auVar60._0_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      auVar60 = auVar40._16_16_;
      in_ZMM3 = ZEXT1664(auVar60);
      *(float *)(param_1 + 8 + lVar33) = auVar40._16_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 8 + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      *(float *)(param_1 + 0xc + lVar20) = fVar6;
      auVar60 = auVar61._0_16_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar35) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      auVar60 = auVar61._16_16_;
      *(float *)(param_1 + 0xc + lVar33) = fVar9;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      auVar131._0_4_ = -(fVar110 * fVar38) + auVar132._0_4_;
      auVar131._4_4_ = -(fVar113 * fVar43) + auVar132._4_4_;
      auVar131._8_4_ = -(fVar114 * fVar45) + auVar132._8_4_;
      auVar131._12_4_ = -(fVar115 * fVar47) + auVar132._12_4_;
      auVar76._16_4_ = -(fVar116 * fVar49) + auVar132._16_4_;
      auVar76._0_16_ = auVar131;
      auVar76._20_4_ = -(fVar117 * fVar51) + auVar132._20_4_;
      auVar76._24_4_ = -(fVar118 * fVar53) + auVar132._24_4_;
      auVar76._28_4_ = -(fVar119 * fVar55) + auVar132._28_4_;
      lVar20 = (longlong)auVar133._0_4_;
      *(float *)(param_1 + lVar20) = auVar131._0_4_;
      lVar18 = (longlong)auVar133._4_4_;
      uVar4 = vextractps_avx(auVar131,1);
      *(undefined4 *)(param_1 + lVar18) = uVar4;
      lVar32 = (longlong)auVar133._8_4_;
      uVar4 = vextractps_avx(auVar131,2);
      *(undefined4 *)(param_1 + lVar32) = uVar4;
      lVar29 = (longlong)auVar133._12_4_;
      uVar4 = vextractps_avx(auVar131,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar35 = (longlong)auVar133._16_4_;
      auVar60 = auVar76._16_16_;
      *(float *)(param_1 + lVar35) = auVar76._16_4_;
      lVar36 = (longlong)auVar133._20_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + lVar36) = uVar4;
      lVar33 = (longlong)auVar133._24_4_;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + lVar33) = uVar4;
      lVar34 = (longlong)auVar133._28_4_;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + lVar34) = uVar4;
      auVar124._0_4_ = -(fVar110 * fVar90) + auVar125._0_4_;
      auVar124._4_4_ = -(fVar113 * fVar95) + auVar125._4_4_;
      auVar124._8_4_ = -(fVar114 * fVar96) + auVar125._8_4_;
      auVar124._12_4_ = -(fVar115 * fVar97) + auVar125._12_4_;
      auVar61._16_4_ = -(fVar116 * fVar98) + auVar125._16_4_;
      auVar61._0_16_ = auVar124;
      auVar61._20_4_ = -(fVar117 * fVar99) + auVar125._20_4_;
      auVar61._24_4_ = -(fVar118 * fVar100) + auVar125._24_4_;
      auVar61._28_4_ = -(fVar119 * fVar101) + auVar125._28_4_;
      *(float *)(param_1 + 4 + lVar20) = auVar124._0_4_;
      uVar4 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + 4 + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      auVar60 = auVar61._16_16_;
      *(float *)(param_1 + 4 + lVar35) = auVar61._16_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 4 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar4;
      auVar120._0_4_ = -(fVar110 * fVar81) + auVar121._0_4_;
      auVar120._4_4_ = -(fVar113 * fVar82) + auVar121._4_4_;
      auVar120._8_4_ = -(fVar114 * fVar83) + auVar121._8_4_;
      auVar120._12_4_ = -(fVar115 * fVar84) + auVar121._12_4_;
      auVar56._16_4_ = -(fVar116 * fVar85) + auVar121._16_4_;
      auVar56._0_16_ = auVar120;
      auVar56._20_4_ = -(fVar117 * fVar86) + auVar121._20_4_;
      auVar56._24_4_ = -(fVar118 * fVar87) + auVar121._24_4_;
      auVar56._28_4_ = -(fVar119 * fVar88) + auVar121._28_4_;
      *(float *)(param_1 + 8 + lVar20) = auVar120._0_4_;
      uVar4 = vextractps_avx(auVar120,1);
      *(undefined4 *)(param_1 + 8 + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar120,2);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar120,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      auVar60 = auVar56._16_16_;
      *(float *)(param_1 + 8 + lVar35) = auVar56._16_4_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 8 + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar4;
      pfVar1 = (float *)(param_4 + uVar22);
      *pfVar1 = fVar104 + local_320;
      pfVar1[1] = fVar105 + fStack_31c;
      pfVar1[2] = fVar106 + fStack_318;
      pfVar1[3] = fVar107 + fStack_314;
      pfVar1[4] = fVar108 + fStack_310;
      pfVar1[5] = fVar109 + fStack_30c;
      pfVar1[6] = fVar10 + fStack_308;
      pfVar1[7] = fVar11 + fStack_304;
      *(float *)(param_1 + 0xc + lVar20) = fVar110;
      auVar60 = auVar111._0_16_;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar18) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      auVar60 = auVar111._16_16_;
      *(float *)(param_1 + 0xc + lVar35) = fVar116;
      uVar4 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar4;
      uVar4 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar34) = uVar4;
      uVar21 = uVar21 + 0x20;
      uVar30 = (int)uVar31 + 8;
      uVar31 = (ulonglong)uVar30;
    } while ((int)uVar30 < (int)(uVar16 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar30) {
      return;
    }
  }
  iVar17 = (int)uVar31;
  auVar111._4_4_ = iVar17;
  auVar111._0_4_ = iVar17;
  auVar111._8_4_ = iVar17;
  auVar111._12_4_ = iVar17;
  auVar111._16_4_ = iVar17;
  auVar111._20_4_ = iVar17;
  auVar111._24_4_ = iVar17;
  auVar111._28_4_ = iVar17;
  auVar3 = vpor_avx2(auVar111,
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar121._4_4_ = param_7;
  auVar121._0_4_ = param_7;
  auVar121._8_4_ = param_7;
  auVar121._12_4_ = param_7;
  auVar121._16_4_ = param_7;
  auVar121._20_4_ = param_7;
  auVar121._24_4_ = param_7;
  auVar121._28_4_ = param_7;
  auVar3 = vpcmpgtd_avx2(auVar121,auVar3);
  pauVar2 = (undefined1 (*) [32])(param_2 + uVar31 * 8);
  uVar16 = vmovmskps_avx(auVar3);
  if (uVar16 == 0xff) {
    auVar40 = *pauVar2;
    auVar68 = pauVar2[1];
    auVar57 = vshufps_avx(auVar40,auVar68,0x88);
    auVar57 = vpermpd_avx2(auVar57,0xd8);
    auVar40 = vshufps_avx(auVar40,auVar68,0xdd);
    auVar40 = vpermpd_avx2(auVar40,0xd8);
  }
  else {
    auVar57 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
    auVar40 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  }
  auVar111 = vpslld_avx2(auVar57,4);
  auVar68 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  auVar57 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
  auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
  auVar121 = vgatherdps(ZEXT832(0),auVar3);
  auVar41 = vpslld_avx2(auVar40,4);
  auVar122 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar126 = vgatherdps(ZEXT832(0),auVar3);
  auVar77 = vgatherdps(ZEXT432(0) << 0x20,auVar3);
  auVar58 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar40 = vmaskmovps_avx(auVar3,auVar68);
  auVar68 = vmaskmovps_avx(auVar3,auVar57);
  auVar57 = vmaskmovps_avx(auVar3,auVar112);
  auVar112 = vmaskmovps_avx(auVar3,auVar122);
  auVar122 = vmaskmovps_avx(auVar3,auVar126);
  auVar77 = vmaskmovps_avx(auVar3,auVar77);
  auVar126 = vsubps_avx(auVar40,auVar112);
  auVar61 = vsubps_avx(auVar68,auVar122);
  auVar92 = vsubps_avx(auVar57,auVar77);
  auVar134._0_4_ =
       auVar92._0_4_ * auVar92._0_4_ +
       auVar126._0_4_ * auVar126._0_4_ + auVar61._0_4_ * auVar61._0_4_;
  auVar134._4_4_ =
       auVar92._4_4_ * auVar92._4_4_ +
       auVar126._4_4_ * auVar126._4_4_ + auVar61._4_4_ * auVar61._4_4_;
  auVar134._8_4_ =
       auVar92._8_4_ * auVar92._8_4_ +
       auVar126._8_4_ * auVar126._8_4_ + auVar61._8_4_ * auVar61._8_4_;
  auVar134._12_4_ =
       auVar92._12_4_ * auVar92._12_4_ +
       auVar126._12_4_ * auVar126._12_4_ + auVar61._12_4_ * auVar61._12_4_;
  auVar134._16_4_ =
       auVar92._16_4_ * auVar92._16_4_ +
       auVar126._16_4_ * auVar126._16_4_ + auVar61._16_4_ * auVar61._16_4_;
  auVar134._20_4_ =
       auVar92._20_4_ * auVar92._20_4_ +
       auVar126._20_4_ * auVar126._20_4_ + auVar61._20_4_ * auVar61._20_4_;
  auVar134._24_4_ =
       auVar92._24_4_ * auVar92._24_4_ +
       auVar126._24_4_ * auVar126._24_4_ + auVar61._24_4_ * auVar61._24_4_;
  auVar134._28_4_ =
       auVar92._28_4_ * auVar92._28_4_ +
       auVar126._28_4_ * auVar126._28_4_ + auVar61._28_4_ * auVar61._28_4_;
  auVar76 = vsqrtps_avx(auVar134);
  auVar126 = vdivps_avx(auVar126,auVar76);
  auVar125._4_4_ = __real_38d1b717;
  auVar125._0_4_ = __real_38d1b717;
  auVar125._8_4_ = __real_38d1b717;
  auVar125._12_4_ = __real_38d1b717;
  auVar125._16_4_ = __real_38d1b717;
  auVar125._20_4_ = __real_38d1b717;
  auVar125._24_4_ = __real_38d1b717;
  auVar125._28_4_ = __real_38d1b717;
  auVar56 = vcmpps_avx(auVar134,auVar125,1);
  auVar135._4_4_ = __real_3f800000;
  auVar135._0_4_ = __real_3f800000;
  auVar135._8_4_ = __real_3f800000;
  auVar135._12_4_ = __real_3f800000;
  auVar135._16_4_ = __real_3f800000;
  auVar135._20_4_ = __real_3f800000;
  auVar135._24_4_ = __real_3f800000;
  auVar135._28_4_ = __real_3f800000;
  auVar126 = vblendvps_avx(auVar126,auVar135,auVar56);
  auVar126 = vmaskmovps_avx(auVar3,auVar126);
  auVar61 = vdivps_avx(auVar61,auVar76);
  uVar30 = auVar56._0_4_;
  auVar137._0_4_ = ~uVar30 & auVar61._0_4_;
  uVar69 = auVar56._4_4_;
  auVar137._4_4_ = ~uVar69 & auVar61._4_4_;
  uVar70 = auVar56._8_4_;
  auVar137._8_4_ = ~uVar70 & auVar61._8_4_;
  uVar71 = auVar56._12_4_;
  auVar137._12_4_ = ~uVar71 & auVar61._12_4_;
  uVar72 = auVar56._16_4_;
  auVar137._16_4_ = ~uVar72 & auVar61._16_4_;
  uVar73 = auVar56._20_4_;
  auVar137._20_4_ = ~uVar73 & auVar61._20_4_;
  uVar74 = auVar56._24_4_;
  auVar137._24_4_ = ~uVar74 & auVar61._24_4_;
  uVar75 = auVar56._28_4_;
  auVar137._28_4_ = ~uVar75 & auVar61._28_4_;
  auVar56 = vmaskmovps_avx(auVar3,auVar137);
  auVar61 = vdivps_avx(auVar92,auVar76);
  auVar78._0_4_ = ~uVar30 & auVar61._0_4_;
  auVar78._4_4_ = ~uVar69 & auVar61._4_4_;
  auVar78._8_4_ = ~uVar70 & auVar61._8_4_;
  auVar78._12_4_ = ~uVar71 & auVar61._12_4_;
  auVar78._16_4_ = ~uVar72 & auVar61._16_4_;
  auVar78._20_4_ = ~uVar73 & auVar61._20_4_;
  auVar78._24_4_ = ~uVar74 & auVar61._24_4_;
  auVar78._28_4_ = ~uVar75 & auVar61._28_4_;
  auVar61 = vmaskmovps_avx(auVar3,auVar78);
  lVar18 = (longlong)(iVar17 << 2);
  auVar132._0_4_ = ~uVar30 & auVar76._0_4_;
  auVar132._4_4_ = ~uVar69 & auVar76._4_4_;
  auVar132._8_4_ = ~uVar70 & auVar76._8_4_;
  auVar132._12_4_ = ~uVar71 & auVar76._12_4_;
  auVar132._16_4_ = ~uVar72 & auVar76._16_4_;
  auVar132._20_4_ = ~uVar73 & auVar76._20_4_;
  auVar132._24_4_ = ~uVar74 & auVar76._24_4_;
  auVar132._28_4_ = ~uVar75 & auVar76._28_4_;
  auVar76 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_3 + lVar18));
  auVar76 = vsubps_avx(auVar132,auVar76);
  param_5 = param_5 * param_6 * param_5;
  fVar7 = auVar58._0_4_;
  fVar102 = auVar121._0_4_;
  fVar37 = auVar58._4_4_;
  fVar103 = auVar121._4_4_;
  fVar44 = auVar58._8_4_;
  fVar104 = auVar121._8_4_;
  fVar48 = auVar58._12_4_;
  fVar105 = auVar121._12_4_;
  fVar52 = auVar58._16_4_;
  fVar106 = auVar121._16_4_;
  fVar6 = auVar58._20_4_;
  fVar107 = auVar121._20_4_;
  fVar8 = auVar58._24_4_;
  fVar108 = auVar121._24_4_;
  fVar9 = auVar58._28_4_;
  fVar109 = auVar121._28_4_;
  auVar93._0_4_ = param_5 * (fVar102 + fVar7) + __real_3f800000;
  auVar93._4_4_ = param_5 * (fVar103 + fVar37) + __real_3f800000;
  auVar93._8_4_ = param_5 * (fVar104 + fVar44) + __real_3f800000;
  auVar93._12_4_ = param_5 * (fVar105 + fVar48) + __real_3f800000;
  auVar93._16_4_ = param_5 * (fVar106 + fVar52) + __real_3f800000;
  auVar93._20_4_ = param_5 * (fVar107 + fVar6) + __real_3f800000;
  auVar93._24_4_ = param_5 * (fVar108 + fVar8) + __real_3f800000;
  auVar93._28_4_ = param_5 * (fVar109 + fVar9) + __real_3f800000;
  auVar92 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_4 + lVar18));
  auVar133._0_4_ = -(param_5 * auVar76._0_4_) - auVar92._0_4_;
  auVar133._4_4_ = -(param_5 * auVar76._4_4_) - auVar92._4_4_;
  auVar133._8_4_ = -(param_5 * auVar76._8_4_) - auVar92._8_4_;
  auVar133._12_4_ = -(param_5 * auVar76._12_4_) - auVar92._12_4_;
  auVar133._16_4_ = -(param_5 * auVar76._16_4_) - auVar92._16_4_;
  auVar133._20_4_ = -(param_5 * auVar76._20_4_) - auVar92._20_4_;
  auVar133._24_4_ = -(param_5 * auVar76._24_4_) - auVar92._24_4_;
  auVar133._28_4_ = -(param_5 * auVar76._28_4_) - auVar92._28_4_;
  auVar76 = vdivps_avx(auVar133,auVar93);
  fVar59 = auVar76._0_4_;
  auVar79._0_4_ = auVar92._0_4_ + fVar59;
  fVar42 = auVar76._4_4_;
  auVar79._4_4_ = auVar92._4_4_ + fVar42;
  fVar46 = auVar76._8_4_;
  auVar79._8_4_ = auVar92._8_4_ + fVar46;
  fVar50 = auVar76._12_4_;
  auVar79._12_4_ = auVar92._12_4_ + fVar50;
  fVar54 = auVar76._16_4_;
  auVar79._16_4_ = auVar92._16_4_ + fVar54;
  fVar63 = auVar76._20_4_;
  auVar79._20_4_ = auVar92._20_4_ + fVar63;
  fVar64 = auVar76._24_4_;
  auVar79._24_4_ = auVar92._24_4_ + fVar64;
  fVar65 = auVar76._28_4_;
  auVar79._28_4_ = auVar92._28_4_ + fVar65;
  auVar3 = vmaskmovps_avx(auVar3,auVar79);
  *(undefined1 (*) [32])(param_4 + lVar18) = auVar3;
  local_300 = auVar126._0_4_;
  fStack_2fc = auVar126._4_4_;
  fStack_2f8 = auVar126._8_4_;
  fStack_2f4 = auVar126._12_4_;
  fStack_2f0 = auVar126._16_4_;
  fStack_2ec = auVar126._20_4_;
  fStack_2e8 = auVar126._24_4_;
  fStack_2e4 = auVar126._28_4_;
  local_300 = fVar59 * local_300;
  fStack_2fc = fVar42 * fStack_2fc;
  fStack_2f8 = fVar46 * fStack_2f8;
  fStack_2f4 = fVar50 * fStack_2f4;
  fStack_2f0 = fVar54 * fStack_2f0;
  fStack_2ec = fVar63 * fStack_2ec;
  fStack_2e8 = fVar64 * fStack_2e8;
  fStack_2e4 = fVar65 * fStack_2e4;
  local_2e0 = auVar56._0_4_;
  fStack_2dc = auVar56._4_4_;
  fStack_2d8 = auVar56._8_4_;
  fStack_2d4 = auVar56._12_4_;
  fStack_2d0 = auVar56._16_4_;
  fStack_2cc = auVar56._20_4_;
  fStack_2c8 = auVar56._24_4_;
  fStack_2c4 = auVar56._28_4_;
  local_2e0 = fVar59 * local_2e0;
  fStack_2dc = fVar42 * fStack_2dc;
  fStack_2d8 = fVar46 * fStack_2d8;
  fStack_2d4 = fVar50 * fStack_2d4;
  fStack_2d0 = fVar54 * fStack_2d0;
  fStack_2cc = fVar63 * fStack_2cc;
  fStack_2c8 = fVar64 * fStack_2c8;
  fStack_2c4 = fVar65 * fStack_2c4;
  local_2c0 = auVar61._0_4_;
  fStack_2bc = auVar61._4_4_;
  fStack_2b8 = auVar61._8_4_;
  fStack_2b4 = auVar61._12_4_;
  fStack_2b0 = auVar61._16_4_;
  fStack_2ac = auVar61._20_4_;
  fStack_2a8 = auVar61._24_4_;
  fStack_2a4 = auVar61._28_4_;
  fVar59 = fVar59 * local_2c0;
  fVar42 = fVar42 * fStack_2bc;
  fVar46 = fVar46 * fStack_2b8;
  fVar50 = fVar50 * fStack_2b4;
  fVar54 = fVar54 * fStack_2b0;
  fVar63 = fVar63 * fStack_2ac;
  fVar64 = fVar64 * fStack_2a8;
  fVar65 = fVar65 * fStack_2a4;
  auVar128._0_4_ = fVar102 * local_300 + auVar40._0_4_;
  auVar128._4_4_ = fVar103 * fStack_2fc + auVar40._4_4_;
  auVar128._8_4_ = fVar104 * fStack_2f8 + auVar40._8_4_;
  auVar128._12_4_ = fVar105 * fStack_2f4 + auVar40._12_4_;
  auVar129._16_4_ = fVar106 * fStack_2f0 + auVar40._16_4_;
  auVar129._0_16_ = auVar128;
  auVar129._20_4_ = fVar107 * fStack_2ec + auVar40._20_4_;
  auVar129._24_4_ = fVar108 * fStack_2e8 + auVar40._24_4_;
  auVar129._28_4_ = fVar109 * fStack_2e4 + auVar40._28_4_;
  cVar19 = (char)uVar16;
  iVar89 = auVar111._0_4_;
  auVar124 = auVar111._16_16_;
  iVar39 = auVar41._0_4_;
  auVar60 = auVar41._16_16_;
  auVar91 = auVar58._0_16_;
  auVar120 = auVar58._16_16_;
  auVar131 = auVar121._0_16_;
  auVar136 = auVar121._16_16_;
  auVar130 = auVar129._16_16_;
  iVar17 = auVar111._4_4_;
  iVar23 = auVar111._8_4_;
  iVar24 = auVar111._12_4_;
  iVar25 = auVar41._4_4_;
  iVar26 = auVar41._8_4_;
  iVar27 = auVar41._12_4_;
  local_320 = auVar77._0_4_;
  fStack_31c = auVar77._4_4_;
  fStack_318 = auVar77._8_4_;
  fStack_314 = auVar77._12_4_;
  fStack_310 = auVar77._16_4_;
  fStack_30c = auVar77._20_4_;
  fStack_308 = auVar77._24_4_;
  fStack_304 = auVar77._28_4_;
  iVar66 = auVar111._16_4_;
  iVar67 = auVar41._16_4_;
  if ((uVar16 & 1) != 0) {
    *(float *)(param_1 + iVar89) = auVar128._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + iVar17) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + iVar23) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + iVar24) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(float *)(param_1 + iVar66) = auVar129._16_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar124,1);
    uVar5 = vextractps_avx(auVar130,1);
    *(undefined4 *)(param_1 + iVar28) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar124,2);
    uVar5 = vextractps_avx(auVar130,2);
    *(undefined4 *)(param_1 + iVar28) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar28 = vextractps_avx(auVar124,3);
    uVar5 = vextractps_avx(auVar130,3);
    *(undefined4 *)(param_1 + iVar28) = uVar5;
    auVar127._0_4_ = fVar102 * local_2e0 + auVar68._0_4_;
    auVar127._4_4_ = fVar103 * fStack_2dc + auVar68._4_4_;
    auVar127._8_4_ = fVar104 * fStack_2d8 + auVar68._8_4_;
    auVar127._12_4_ = fVar105 * fStack_2d4 + auVar68._12_4_;
    auVar127._16_4_ = fVar106 * fStack_2d0 + auVar68._16_4_;
    auVar127._20_4_ = fVar107 * fStack_2cc + auVar68._20_4_;
    auVar127._24_4_ = fVar108 * fStack_2c8 + auVar68._24_4_;
    auVar127._28_4_ = fVar109 * fStack_2c4 + auVar68._28_4_;
  }
  else {
    auVar127._0_4_ = fVar102 * local_2e0 + auVar68._0_4_;
    auVar127._4_4_ = fVar103 * fStack_2dc + auVar68._4_4_;
    auVar127._8_4_ = fVar104 * fStack_2d8 + auVar68._8_4_;
    auVar127._12_4_ = fVar105 * fStack_2d4 + auVar68._12_4_;
    auVar127._16_4_ = fVar106 * fStack_2d0 + auVar68._16_4_;
    auVar127._20_4_ = fVar107 * fStack_2cc + auVar68._20_4_;
    auVar127._24_4_ = fVar108 * fStack_2c8 + auVar68._24_4_;
    auVar127._28_4_ = fVar109 * fStack_2c4 + auVar68._28_4_;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar89) = auVar127._0_4_;
  }
  auVar128 = auVar127._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar66) = auVar127._16_4_;
  }
  auVar128 = auVar127._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar124,1);
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar124,2);
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar28 = vextractps_avx(auVar124,3);
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar5;
    auVar123._0_4_ = fVar102 * fVar59 + auVar57._0_4_;
    auVar123._4_4_ = fVar103 * fVar42 + auVar57._4_4_;
    auVar123._8_4_ = fVar104 * fVar46 + auVar57._8_4_;
    auVar123._12_4_ = fVar105 * fVar50 + auVar57._12_4_;
    auVar123._16_4_ = fVar106 * fVar54 + auVar57._16_4_;
    auVar123._20_4_ = fVar107 * fVar63 + auVar57._20_4_;
    auVar123._24_4_ = fVar108 * fVar64 + auVar57._24_4_;
    auVar123._28_4_ = fVar109 * fVar65 + auVar57._28_4_;
  }
  else {
    auVar123._0_4_ = fVar102 * fVar59 + auVar57._0_4_;
    auVar123._4_4_ = fVar103 * fVar42 + auVar57._4_4_;
    auVar123._8_4_ = fVar104 * fVar46 + auVar57._8_4_;
    auVar123._12_4_ = fVar105 * fVar50 + auVar57._12_4_;
    auVar123._16_4_ = fVar106 * fVar54 + auVar57._16_4_;
    auVar123._20_4_ = fVar107 * fVar63 + auVar57._20_4_;
    auVar123._24_4_ = fVar108 * fVar64 + auVar57._24_4_;
    auVar123._28_4_ = fVar109 * fVar65 + auVar57._28_4_;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar89) = auVar123._0_4_;
  }
  auVar128 = auVar123._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar66) = auVar123._16_4_;
  }
  auVar128 = auVar123._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar124,1);
    uVar5 = vextractps_avx(auVar128,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar124,2);
    uVar5 = vextractps_avx(auVar128,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar28 = vextractps_avx(auVar124,3);
    uVar5 = vextractps_avx(auVar128,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar5;
  }
  if ((uVar16 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar89) = fVar102;
  }
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar66) = fVar106;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar124,1);
    uVar5 = vextractps_avx(auVar136,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar124,2);
    uVar5 = vextractps_avx(auVar136,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar124,3);
    uVar5 = vextractps_avx(auVar136,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
    auVar94._0_4_ = -(fVar7 * local_300) + auVar112._0_4_;
    auVar94._4_4_ = -(fVar37 * fStack_2fc) + auVar112._4_4_;
    auVar94._8_4_ = -(fVar44 * fStack_2f8) + auVar112._8_4_;
    auVar94._12_4_ = -(fVar48 * fStack_2f4) + auVar112._12_4_;
    auVar94._16_4_ = -(fVar52 * fStack_2f0) + auVar112._16_4_;
    auVar94._20_4_ = -(fVar6 * fStack_2ec) + auVar112._20_4_;
    auVar94._24_4_ = -(fVar8 * fStack_2e8) + auVar112._24_4_;
    auVar94._28_4_ = -(fVar9 * fStack_2e4) + auVar112._28_4_;
  }
  else {
    auVar94._0_4_ = -(fVar7 * local_300) + auVar112._0_4_;
    auVar94._4_4_ = -(fVar37 * fStack_2fc) + auVar112._4_4_;
    auVar94._8_4_ = -(fVar44 * fStack_2f8) + auVar112._8_4_;
    auVar94._12_4_ = -(fVar48 * fStack_2f4) + auVar112._12_4_;
    auVar94._16_4_ = -(fVar52 * fStack_2f0) + auVar112._16_4_;
    auVar94._20_4_ = -(fVar6 * fStack_2ec) + auVar112._20_4_;
    auVar94._24_4_ = -(fVar8 * fStack_2e8) + auVar112._24_4_;
    auVar94._28_4_ = -(fVar9 * fStack_2e4) + auVar112._28_4_;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + iVar39) = auVar94._0_4_;
  }
  auVar124 = auVar94._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + iVar25) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + iVar26) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + iVar27) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + iVar67) = auVar94._16_4_;
  }
  auVar124 = auVar94._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar60,1);
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar60,2);
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar60,3);
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + iVar17) = uVar5;
    auVar80._0_4_ = -(fVar7 * local_2e0) + auVar122._0_4_;
    auVar80._4_4_ = -(fVar37 * fStack_2dc) + auVar122._4_4_;
    auVar80._8_4_ = -(fVar44 * fStack_2d8) + auVar122._8_4_;
    auVar80._12_4_ = -(fVar48 * fStack_2d4) + auVar122._12_4_;
    auVar80._16_4_ = -(fVar52 * fStack_2d0) + auVar122._16_4_;
    auVar80._20_4_ = -(fVar6 * fStack_2cc) + auVar122._20_4_;
    auVar80._24_4_ = -(fVar8 * fStack_2c8) + auVar122._24_4_;
    auVar80._28_4_ = -(fVar9 * fStack_2c4) + auVar122._28_4_;
  }
  else {
    auVar80._0_4_ = -(fVar7 * local_2e0) + auVar122._0_4_;
    auVar80._4_4_ = -(fVar37 * fStack_2dc) + auVar122._4_4_;
    auVar80._8_4_ = -(fVar44 * fStack_2d8) + auVar122._8_4_;
    auVar80._12_4_ = -(fVar48 * fStack_2d4) + auVar122._12_4_;
    auVar80._16_4_ = -(fVar52 * fStack_2d0) + auVar122._16_4_;
    auVar80._20_4_ = -(fVar6 * fStack_2cc) + auVar122._20_4_;
    auVar80._24_4_ = -(fVar8 * fStack_2c8) + auVar122._24_4_;
    auVar80._28_4_ = -(fVar9 * fStack_2c4) + auVar122._28_4_;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar39) = auVar80._0_4_;
  }
  auVar124 = auVar80._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar67) = auVar80._16_4_;
  }
  auVar124 = auVar80._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar60,1);
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar60,2);
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar60,3);
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar5;
    auVar62._0_4_ = -(fVar7 * fVar59) + local_320;
    auVar62._4_4_ = -(fVar37 * fVar42) + fStack_31c;
    auVar62._8_4_ = -(fVar44 * fVar46) + fStack_318;
    auVar62._12_4_ = -(fVar48 * fVar50) + fStack_314;
    auVar62._16_4_ = -(fVar52 * fVar54) + fStack_310;
    auVar62._20_4_ = -(fVar6 * fVar63) + fStack_30c;
    auVar62._24_4_ = -(fVar8 * fVar64) + fStack_308;
    auVar62._28_4_ = -(fVar9 * fVar65) + fStack_304;
  }
  else {
    auVar62._0_4_ = -(fVar7 * fVar59) + local_320;
    auVar62._4_4_ = -(fVar37 * fVar42) + fStack_31c;
    auVar62._8_4_ = -(fVar44 * fVar46) + fStack_318;
    auVar62._12_4_ = -(fVar48 * fVar50) + fStack_314;
    auVar62._16_4_ = -(fVar52 * fVar54) + fStack_310;
    auVar62._20_4_ = -(fVar6 * fVar63) + fStack_30c;
    auVar62._24_4_ = -(fVar8 * fVar64) + fStack_308;
    auVar62._28_4_ = -(fVar9 * fVar65) + fStack_304;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar39) = auVar62._0_4_;
  }
  auVar124 = auVar62._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar67) = auVar62._16_4_;
  }
  auVar124 = auVar62._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar60,1);
    uVar5 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar60,2);
    uVar5 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar60,3);
    uVar5 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar39) = fVar7;
  }
  if ((uVar16 & 2) != 0) {
    uVar5 = vextractps_avx(auVar91,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar5;
  }
  if ((uVar16 & 4) != 0) {
    uVar5 = vextractps_avx(auVar91,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar5;
  }
  if ((uVar16 & 8) != 0) {
    uVar5 = vextractps_avx(auVar91,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar5;
  }
  if ((uVar16 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar67) = fVar52;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar60,1);
    uVar5 = vextractps_avx(auVar120,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar60,2);
    uVar5 = vextractps_avx(auVar120,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  if (cVar19 < '\0') {
    iVar17 = vextractps_avx(auVar60,3);
    uVar5 = vextractps_avx(auVar120,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar5;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithDamping_avx2 @ 1409183f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDamping_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,float param_7,float param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [32];
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [32];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  char cVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar55 [32];
  float fVar63;
  float fVar70;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar68;
  float fVar69;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar66 [32];
  float fVar74;
  undefined1 auVar67 [32];
  float fVar75;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar76 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  float fVar106;
  undefined1 auVar107 [32];
  float fVar115;
  undefined1 auVar108 [32];
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 in_ZMM10 [64];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  float fVar119;
  float fVar128;
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 in_ZMM12 [64];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [16];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 in_ZMM14 [64];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  float local_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  float local_520;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float local_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float local_4e0;
  float fStack_4dc;
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
  int local_400;
  int iStack_3fc;
  int iStack_3f8;
  int iStack_3f4;
  int iStack_3f0;
  int iStack_3ec;
  int iStack_3e8;
  int iStack_3e4;
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
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
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
  undefined1 auVar138 [32];
  
  uVar18 = __real_0000000c;
  iVar17 = __real_00000008;
  iVar27 = __real_00000004;
  fVar6 = __real_3f800000;
  uVar16 = __real_38d1b717;
  uVar5 = __real_322bcc77;
  uVar19 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar19 = param_9;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar28 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar40 = param_6 * param_7 * param_6;
    fVar35 = param_8 + param_8;
    fVar34 = (float)((uint)fVar40 ^ __real_80000000);
    fVar39 = (float)((uint)fVar40 ^ __real_80000000);
    fVar41 = (float)((uint)fVar40 ^ __real_80000000);
    fVar42 = (float)((uint)fVar40 ^ __real_80000000);
    fVar43 = (float)((uint)fVar40 ^ __real_80000000);
    fVar44 = (float)((uint)fVar40 ^ __real_80000000);
    fVar45 = (float)((uint)fVar40 ^ __real_80000000);
    fVar46 = (float)((uint)fVar40 ^ __real_80000000);
    uVar28 = 0;
    uVar23 = 0;
    do {
      auVar3 = *(undefined1 (*) [32])(param_3 + uVar23 * 2);
      auVar55 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar23 * 2);
      auVar116 = vshufps_avx(auVar3,auVar55,0x88);
      auVar133 = vpermpd_avx2(auVar116,0xd8);
      auVar3 = vshufps_avx(auVar3,auVar55,0xdd);
      auVar120 = vpermpd_avx2(auVar3,0xd8);
      auVar37 = vpslld_avx2(auVar133,4);
      auVar3 = vpcmpeqd_avx2(auVar116,auVar116);
      auVar77._4_4_ = iVar27;
      auVar77._0_4_ = iVar27;
      auVar77._8_4_ = iVar27;
      auVar77._12_4_ = iVar27;
      auVar77._16_4_ = iVar27;
      auVar77._20_4_ = iVar27;
      auVar77._24_4_ = iVar27;
      auVar77._28_4_ = iVar27;
      vpor_avx2(auVar77,auVar37);
      auVar49._4_4_ = iVar17;
      auVar49._0_4_ = iVar17;
      auVar49._8_4_ = iVar17;
      auVar49._12_4_ = iVar17;
      auVar49._16_4_ = iVar17;
      auVar49._20_4_ = iVar17;
      auVar49._24_4_ = iVar17;
      auVar49._28_4_ = iVar17;
      vpor_avx2(auVar37,auVar49);
      auVar55 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
      auVar130._4_4_ = uVar18;
      auVar130._0_4_ = uVar18;
      auVar130._8_4_ = uVar18;
      auVar130._12_4_ = uVar18;
      auVar130._16_4_ = uVar18;
      auVar130._20_4_ = uVar18;
      auVar130._24_4_ = uVar18;
      auVar130._28_4_ = uVar18;
      auVar66 = vpor_avx2(auVar37,auVar130);
      auVar116 = vpcmpeqd_avx2(in_ZMM12._0_32_,in_ZMM12._0_32_);
      auVar102 = vpslld_avx2(auVar120,4);
      auVar77 = vpor_avx2(auVar102,auVar77);
      auVar87 = vpcmpeqd_avx2(in_ZMM14._0_32_,in_ZMM14._0_32_);
      auVar136 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar3);
      vpor_avx2(auVar102,auVar49);
      auVar3 = vpcmpeqd_avx2(auVar49,auVar49);
      auVar47 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar55);
      vpor_avx2(auVar102,auVar130);
      auVar38 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar116);
      auVar55 = vpcmpeqd_avx2(auVar66,auVar66);
      auVar97 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar87);
      auVar48 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar3 = vpcmpeqd_avx2(auVar77,auVar77);
      auVar103 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar55);
      auVar66 = vgatherdps(ZEXT832(0),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar49 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar116 = vpmulld_avx2(auVar133,auVar130);
      auVar55 = vpcmpeqd_avx2(auVar133,auVar133);
      auVar3._0_4_ = iVar27 + auVar116._0_4_;
      auVar3._4_4_ = iVar27 + auVar116._4_4_;
      auVar3._8_4_ = iVar27 + auVar116._8_4_;
      auVar3._12_4_ = iVar27 + auVar116._12_4_;
      auVar3._16_4_ = iVar27 + auVar116._16_4_;
      auVar3._20_4_ = iVar27 + auVar116._20_4_;
      auVar3._24_4_ = iVar27 + auVar116._24_4_;
      auVar3._28_4_ = iVar27 + auVar116._28_4_;
      auVar107 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar55);
      auVar3 = vpcmpeqd_avx2(auVar3,auVar3);
      auVar50 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar116 = vpmulld_avx2(auVar120,auVar130);
      auVar3 = vpcmpeqd_avx2(auVar120,auVar120);
      auVar55._0_4_ = iVar17 + auVar116._0_4_;
      auVar55._4_4_ = iVar17 + auVar116._4_4_;
      auVar55._8_4_ = iVar17 + auVar116._8_4_;
      auVar55._12_4_ = iVar17 + auVar116._12_4_;
      auVar55._16_4_ = iVar17 + auVar116._16_4_;
      auVar55._20_4_ = iVar17 + auVar116._20_4_;
      auVar55._24_4_ = iVar17 + auVar116._24_4_;
      auVar55._28_4_ = iVar17 + auVar116._28_4_;
      auVar129 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar51 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
      auVar3 = vpcmpeqd_avx2(auVar55,auVar55);
      auVar132 = vgatherdps(ZEXT832(0),auVar3);
      auVar3 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar137 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
      uVar20 = uVar23 & 0xffffffff;
      auVar3 = *(undefined1 (*) [32])(param_4 + uVar20);
      auVar7._4_4_ = fVar6;
      auVar7._0_4_ = fVar6;
      auVar7._8_4_ = fVar6;
      auVar7._12_4_ = fVar6;
      auVar7._16_4_ = fVar6;
      auVar7._20_4_ = fVar6;
      auVar7._24_4_ = fVar6;
      auVar7._28_4_ = fVar6;
      auVar116 = vdivps_avx(auVar7,auVar3);
      auVar87._4_4_ = uVar5;
      auVar87._0_4_ = uVar5;
      auVar87._8_4_ = uVar5;
      auVar87._12_4_ = uVar5;
      auVar87._16_4_ = uVar5;
      auVar87._20_4_ = uVar5;
      auVar87._24_4_ = uVar5;
      auVar87._28_4_ = uVar5;
      auVar55 = vcmpps_avx(auVar3,auVar87,1);
      auVar55 = vblendvps_avx(auVar116,auVar7,auVar55);
      auVar116 = vsubps_avx(auVar136,auVar97);
      auVar87 = vsubps_avx(auVar132,auVar137);
      auVar66 = vsubps_avx(auVar132,auVar66);
      auVar77 = vsubps_avx(auVar47,auVar48);
      auVar78._0_4_ =
           auVar77._0_4_ * auVar77._0_4_ +
           auVar87._0_4_ * auVar87._0_4_ + auVar116._0_4_ * auVar116._0_4_;
      auVar78._4_4_ =
           auVar77._4_4_ * auVar77._4_4_ +
           auVar87._4_4_ * auVar87._4_4_ + auVar116._4_4_ * auVar116._4_4_;
      auVar78._8_4_ =
           auVar77._8_4_ * auVar77._8_4_ +
           auVar87._8_4_ * auVar87._8_4_ + auVar116._8_4_ * auVar116._8_4_;
      auVar78._12_4_ =
           auVar77._12_4_ * auVar77._12_4_ +
           auVar87._12_4_ * auVar87._12_4_ + auVar116._12_4_ * auVar116._12_4_;
      auVar78._16_4_ =
           auVar77._16_4_ * auVar77._16_4_ +
           auVar87._16_4_ * auVar87._16_4_ + auVar116._16_4_ * auVar116._16_4_;
      auVar78._20_4_ =
           auVar77._20_4_ * auVar77._20_4_ +
           auVar87._20_4_ * auVar87._20_4_ + auVar116._20_4_ * auVar116._20_4_;
      auVar78._24_4_ =
           auVar77._24_4_ * auVar77._24_4_ +
           auVar87._24_4_ * auVar87._24_4_ + auVar116._24_4_ * auVar116._24_4_;
      auVar78._28_4_ =
           auVar77._28_4_ * auVar77._28_4_ +
           auVar87._28_4_ * auVar87._28_4_ + auVar116._28_4_ * auVar116._28_4_;
      auVar120 = vsubps_avx(auVar66,auVar137);
      auVar133 = vsqrtps_avx(auVar78);
      local_480 = auVar49._0_4_;
      fStack_47c = auVar49._4_4_;
      fStack_478 = auVar49._8_4_;
      fStack_474 = auVar49._12_4_;
      fStack_470 = auVar49._16_4_;
      fStack_46c = auVar49._20_4_;
      fStack_468 = auVar49._24_4_;
      fStack_464 = auVar49._28_4_;
      auVar87 = vdivps_avx(auVar87,auVar133);
      auVar130 = vsubps_avx(auVar136,auVar107);
      auVar66 = vdivps_avx(auVar116,auVar133);
      auVar130 = vsubps_avx(auVar130,auVar97);
      auVar77 = vdivps_avx(auVar77,auVar133);
      auVar116._4_4_ = uVar16;
      auVar116._0_4_ = uVar16;
      auVar116._8_4_ = uVar16;
      auVar116._12_4_ = uVar16;
      auVar116._16_4_ = uVar16;
      auVar116._20_4_ = uVar16;
      auVar116._24_4_ = uVar16;
      auVar116._28_4_ = uVar16;
      auVar116 = vcmpps_avx(auVar78,auVar116,1);
      uVar26 = auVar116._0_4_;
      auVar107._0_4_ = ~uVar26 & auVar133._0_4_;
      uVar90 = auVar116._4_4_;
      auVar107._4_4_ = ~uVar90 & auVar133._4_4_;
      uVar91 = auVar116._8_4_;
      auVar107._8_4_ = ~uVar91 & auVar133._8_4_;
      uVar92 = auVar116._12_4_;
      auVar107._12_4_ = ~uVar92 & auVar133._12_4_;
      uVar93 = auVar116._16_4_;
      auVar107._16_4_ = ~uVar93 & auVar133._16_4_;
      uVar94 = auVar116._20_4_;
      auVar107._20_4_ = ~uVar94 & auVar133._20_4_;
      uVar95 = auVar116._24_4_;
      auVar107._24_4_ = ~uVar95 & auVar133._24_4_;
      uVar96 = auVar116._28_4_;
      auVar107._28_4_ = ~uVar96 & auVar133._28_4_;
      auVar49 = vsubps_avx(auVar107,auVar3);
      in_ZMM12 = ZEXT3264(auVar38);
      local_500 = auVar103._0_4_;
      fStack_4fc = auVar103._4_4_;
      fStack_4f8 = auVar103._8_4_;
      fStack_4f4 = auVar103._12_4_;
      fStack_4f0 = auVar103._16_4_;
      fStack_4ec = auVar103._20_4_;
      fStack_4e8 = auVar103._24_4_;
      fStack_4e4 = auVar103._28_4_;
      fVar119 = auVar38._0_4_;
      auVar104._0_4_ = fVar119 + local_500;
      fVar122 = auVar38._4_4_;
      auVar104._4_4_ = fVar122 + fStack_4fc;
      fVar123 = auVar38._8_4_;
      auVar104._8_4_ = fVar123 + fStack_4f8;
      fVar124 = auVar38._12_4_;
      auVar104._12_4_ = fVar124 + fStack_4f4;
      fVar125 = auVar38._16_4_;
      auVar104._16_4_ = fVar125 + fStack_4f0;
      fVar126 = auVar38._20_4_;
      auVar104._20_4_ = fVar126 + fStack_4ec;
      fVar127 = auVar38._24_4_;
      auVar104._24_4_ = fVar127 + fStack_4e8;
      fVar128 = auVar38._28_4_;
      auVar104._28_4_ = fVar128 + fStack_4e4;
      auVar133._4_4_ = param_7;
      auVar133._0_4_ = param_7;
      auVar133._8_4_ = param_7;
      auVar133._12_4_ = param_7;
      auVar133._16_4_ = param_7;
      auVar133._20_4_ = param_7;
      auVar133._24_4_ = param_7;
      auVar133._28_4_ = param_7;
      auVar3 = vdivps_avx(auVar133,auVar104);
      auVar107 = vsubps_avx(auVar47,auVar50);
      auVar133 = vsqrtps_avx(auVar3);
      auVar107 = vsubps_avx(auVar107,auVar48);
      local_200 = auVar51._0_4_;
      fStack_1fc = auVar51._4_4_;
      fStack_1f8 = auVar51._8_4_;
      fStack_1f4 = auVar51._12_4_;
      fStack_1f0 = auVar51._16_4_;
      fStack_1ec = auVar51._20_4_;
      fStack_1e8 = auVar51._24_4_;
      fStack_1e4 = auVar51._28_4_;
      local_220 = auVar55._0_4_;
      fStack_21c = auVar55._4_4_;
      fStack_218 = auVar55._8_4_;
      fStack_214 = auVar55._12_4_;
      fStack_210 = auVar55._16_4_;
      fStack_20c = auVar55._20_4_;
      fStack_208 = auVar55._24_4_;
      fStack_204 = auVar55._28_4_;
      auVar3 = vblendvps_avx(auVar87,auVar7,auVar116);
      fVar106 = (float)(~uVar26 & auVar66._0_4_);
      fVar109 = (float)(~uVar90 & auVar66._4_4_);
      fVar110 = (float)(~uVar91 & auVar66._8_4_);
      fVar111 = (float)(~uVar92 & auVar66._12_4_);
      fVar112 = (float)(~uVar93 & auVar66._16_4_);
      fVar113 = (float)(~uVar94 & auVar66._20_4_);
      fVar114 = (float)(~uVar95 & auVar66._24_4_);
      fVar115 = (float)(~uVar96 & auVar66._28_4_);
      in_ZMM10 = ZEXT3264(CONCAT428(fVar115,CONCAT424(fVar114,CONCAT420(fVar113,CONCAT416(fVar112,
                                                  CONCAT412(fVar111,CONCAT48(fVar110,CONCAT44(
                                                  fVar109,fVar106))))))));
      fVar54 = (float)(~uVar26 & auVar77._0_4_);
      fVar56 = (float)(~uVar90 & auVar77._4_4_);
      fVar57 = (float)(~uVar91 & auVar77._8_4_);
      fVar58 = (float)(~uVar92 & auVar77._12_4_);
      fVar59 = (float)(~uVar93 & auVar77._16_4_);
      fVar60 = (float)(~uVar94 & auVar77._20_4_);
      fVar61 = (float)(~uVar95 & auVar77._24_4_);
      fVar62 = (float)(~uVar96 & auVar77._28_4_);
      fVar63 = auVar133._0_4_ * fVar35 * local_220 * param_6;
      fVar68 = auVar133._4_4_ * fVar35 * fStack_21c * param_6;
      fVar69 = auVar133._8_4_ * fVar35 * fStack_218 * param_6;
      fVar70 = auVar133._12_4_ * fVar35 * fStack_214 * param_6;
      fVar71 = auVar133._16_4_ * fVar35 * fStack_210 * param_6;
      fVar72 = auVar133._20_4_ * fVar35 * fStack_20c * param_6;
      fVar73 = auVar133._24_4_ * fVar35 * fStack_208 * param_6;
      fVar74 = auVar133._28_4_ * fVar35 * fStack_204 * param_6;
      pfVar1 = (float *)(param_5 + uVar20);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      fVar12 = pfVar1[4];
      fVar13 = pfVar1[5];
      fVar14 = pfVar1[6];
      fVar15 = pfVar1[7];
      auVar66._0_4_ =
           -(fVar63 * (fVar54 * (auVar107._0_4_ + local_200) +
                      auVar3._0_4_ * (auVar120._0_4_ + local_480) +
                      fVar106 * (auVar130._0_4_ + auVar129._0_4_))) +
           (auVar49._0_4_ * fVar34 - fVar8);
      auVar66._4_4_ =
           -(fVar68 * (fVar56 * (auVar107._4_4_ + fStack_1fc) +
                      auVar3._4_4_ * (auVar120._4_4_ + fStack_47c) +
                      fVar109 * (auVar130._4_4_ + auVar129._4_4_))) +
           (auVar49._4_4_ * fVar39 - fVar9);
      auVar66._8_4_ =
           -(fVar69 * (fVar57 * (auVar107._8_4_ + fStack_1f8) +
                      auVar3._8_4_ * (auVar120._8_4_ + fStack_478) +
                      fVar110 * (auVar130._8_4_ + auVar129._8_4_))) +
           (auVar49._8_4_ * fVar41 - fVar10);
      auVar66._12_4_ =
           -(fVar70 * (fVar58 * (auVar107._12_4_ + fStack_1f4) +
                      auVar3._12_4_ * (auVar120._12_4_ + fStack_474) +
                      fVar111 * (auVar130._12_4_ + auVar129._12_4_))) +
           (auVar49._12_4_ * fVar42 - fVar11);
      auVar66._16_4_ =
           -(fVar71 * (fVar59 * (auVar107._16_4_ + fStack_1f0) +
                      auVar3._16_4_ * (auVar120._16_4_ + fStack_470) +
                      fVar112 * (auVar130._16_4_ + auVar129._16_4_))) +
           (auVar49._16_4_ * fVar43 - fVar12);
      auVar66._20_4_ =
           -(fVar72 * (fVar60 * (auVar107._20_4_ + fStack_1ec) +
                      auVar3._20_4_ * (auVar120._20_4_ + fStack_46c) +
                      fVar113 * (auVar130._20_4_ + auVar129._20_4_))) +
           (auVar49._20_4_ * fVar44 - fVar13);
      auVar66._24_4_ =
           -(fVar73 * (fVar61 * (auVar107._24_4_ + fStack_1e8) +
                      auVar3._24_4_ * (auVar120._24_4_ + fStack_468) +
                      fVar114 * (auVar130._24_4_ + auVar129._24_4_))) +
           (auVar49._24_4_ * fVar45 - fVar14);
      auVar66._28_4_ =
           -(fVar74 * (fVar62 * (auVar107._28_4_ + fStack_1e4) +
                      auVar3._28_4_ * (auVar120._28_4_ + fStack_464) +
                      fVar115 * (auVar130._28_4_ + auVar129._28_4_))) +
           (auVar49._28_4_ * fVar46 - fVar15);
      auVar50._0_4_ = auVar104._0_4_ * (fVar63 + fVar40) + fVar6;
      auVar50._4_4_ = auVar104._4_4_ * (fVar68 + fVar40) + fVar6;
      auVar50._8_4_ = auVar104._8_4_ * (fVar69 + fVar40) + fVar6;
      auVar50._12_4_ = auVar104._12_4_ * (fVar70 + fVar40) + fVar6;
      auVar50._16_4_ = auVar104._16_4_ * (fVar71 + fVar40) + fVar6;
      auVar50._20_4_ = auVar104._20_4_ * (fVar72 + fVar40) + fVar6;
      auVar50._24_4_ = auVar104._24_4_ * (fVar73 + fVar40) + fVar6;
      auVar50._28_4_ = auVar104._28_4_ * (fVar74 + fVar40) + fVar6;
      auVar55 = vdivps_avx(auVar66,auVar50);
      local_4a0 = auVar37._0_4_;
      fStack_49c = auVar37._4_4_;
      fStack_498 = auVar37._8_4_;
      fStack_494 = auVar37._12_4_;
      fStack_490 = auVar37._16_4_;
      fStack_48c = auVar37._20_4_;
      fStack_488 = auVar37._24_4_;
      fStack_484 = auVar37._28_4_;
      fVar63 = auVar55._0_4_;
      fVar75 = auVar3._0_4_ * fVar63;
      fVar68 = auVar55._4_4_;
      fVar80 = auVar3._4_4_ * fVar68;
      fVar69 = auVar55._8_4_;
      fVar81 = auVar3._8_4_ * fVar69;
      fVar70 = auVar55._12_4_;
      fVar82 = auVar3._12_4_ * fVar70;
      fVar71 = auVar55._16_4_;
      fVar83 = auVar3._16_4_ * fVar71;
      fVar72 = auVar55._20_4_;
      fVar84 = auVar3._20_4_ * fVar72;
      fVar73 = auVar55._24_4_;
      fVar85 = auVar3._24_4_ * fVar73;
      fVar74 = auVar55._28_4_;
      fVar86 = auVar3._28_4_ * fVar74;
      auVar131._0_4_ = fVar119 * fVar75 + auVar132._0_4_;
      auVar131._4_4_ = fVar122 * fVar80 + auVar132._4_4_;
      auVar131._8_4_ = fVar123 * fVar81 + auVar132._8_4_;
      auVar131._12_4_ = fVar124 * fVar82 + auVar132._12_4_;
      auVar51._16_4_ = fVar125 * fVar83 + auVar132._16_4_;
      auVar51._0_16_ = auVar131;
      auVar51._20_4_ = fVar126 * fVar84 + auVar132._20_4_;
      auVar51._24_4_ = fVar127 * fVar85 + auVar132._24_4_;
      auVar51._28_4_ = fVar128 * fVar86 + auVar132._28_4_;
      in_ZMM14 = ZEXT3264(auVar51);
      lVar32 = (longlong)(int)local_4a0;
      *(float *)(param_1 + lVar32) = auVar131._0_4_;
      lVar33 = (longlong)(int)fStack_49c;
      uVar4 = vextractps_avx(auVar131,1);
      *(undefined4 *)(param_1 + lVar33) = uVar4;
      lVar30 = (longlong)(int)fStack_498;
      uVar4 = vextractps_avx(auVar131,2);
      *(undefined4 *)(param_1 + lVar30) = uVar4;
      lVar21 = (longlong)(int)fStack_494;
      uVar4 = vextractps_avx(auVar131,3);
      *(undefined4 *)(param_1 + lVar21) = uVar4;
      lVar31 = (longlong)(int)fStack_490;
      auVar36 = auVar51._16_16_;
      *(float *)(param_1 + lVar31) = auVar51._16_4_;
      lVar29 = (longlong)(int)fStack_48c;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      lVar24 = (longlong)(int)fStack_488;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + lVar24) = uVar4;
      lVar25 = (longlong)(int)fStack_484;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + lVar25) = uVar4;
      local_520 = auVar136._0_4_;
      fStack_51c = auVar136._4_4_;
      fStack_518 = auVar136._8_4_;
      fStack_514 = auVar136._12_4_;
      fStack_510 = auVar136._16_4_;
      fStack_50c = auVar136._20_4_;
      fStack_508 = auVar136._24_4_;
      fStack_504 = auVar136._28_4_;
      auVar64._0_4_ = fVar119 * fVar106 * fVar63 + local_520;
      auVar64._4_4_ = fVar122 * fVar109 * fVar68 + fStack_51c;
      auVar64._8_4_ = fVar123 * fVar110 * fVar69 + fStack_518;
      auVar64._12_4_ = fVar124 * fVar111 * fVar70 + fStack_514;
      auVar37._16_4_ = fVar125 * fVar112 * fVar71 + fStack_510;
      auVar37._0_16_ = auVar64;
      auVar37._20_4_ = fVar126 * fVar113 * fVar72 + fStack_50c;
      auVar37._24_4_ = fVar127 * fVar114 * fVar73 + fStack_508;
      auVar37._28_4_ = fVar128 * fVar115 * fVar74 + fStack_504;
      *(float *)(param_1 + 4 + lVar32) = auVar64._0_4_;
      uVar4 = vextractps_avx(auVar64,1);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar64,2);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar64,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar4;
      auVar36 = auVar37._16_16_;
      *(float *)(param_1 + 4 + lVar31) = auVar37._16_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar4;
      fVar54 = fVar54 * fVar63;
      fVar56 = fVar56 * fVar68;
      fVar57 = fVar57 * fVar69;
      fVar58 = fVar58 * fVar70;
      fVar59 = fVar59 * fVar71;
      fVar60 = fVar60 * fVar72;
      fVar61 = fVar61 * fVar73;
      fVar62 = fVar62 * fVar74;
      local_4c0 = auVar47._0_4_;
      fStack_4bc = auVar47._4_4_;
      fStack_4b8 = auVar47._8_4_;
      fStack_4b4 = auVar47._12_4_;
      fStack_4b0 = auVar47._16_4_;
      fStack_4ac = auVar47._20_4_;
      fStack_4a8 = auVar47._24_4_;
      fStack_4a4 = auVar47._28_4_;
      auVar65._0_4_ = fVar119 * fVar54 + local_4c0;
      auVar65._4_4_ = fVar122 * fVar56 + fStack_4bc;
      auVar65._8_4_ = fVar123 * fVar57 + fStack_4b8;
      auVar65._12_4_ = fVar124 * fVar58 + fStack_4b4;
      auVar47._16_4_ = fVar125 * fVar59 + fStack_4b0;
      auVar47._0_16_ = auVar65;
      auVar47._20_4_ = fVar126 * fVar60 + fStack_4ac;
      auVar47._24_4_ = fVar127 * fVar61 + fStack_4a8;
      auVar47._28_4_ = fVar128 * fVar62 + fStack_4a4;
      *(float *)(param_1 + 8 + lVar32) = auVar65._0_4_;
      uVar4 = vextractps_avx(auVar65,1);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar65,2);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar65,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar4;
      auVar36 = auVar47._16_16_;
      *(float *)(param_1 + 8 + lVar31) = auVar47._16_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar4;
      *(float *)(param_1 + 0xc + lVar32) = fVar119;
      auVar36 = auVar38._0_16_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar4;
      auVar36 = auVar38._16_16_;
      *(float *)(param_1 + 0xc + lVar31) = fVar125;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar4;
      auVar134._0_4_ = -(local_500 * fVar75) + auVar137._0_4_;
      auVar134._4_4_ = -(fStack_4fc * fVar80) + auVar137._4_4_;
      auVar134._8_4_ = -(fStack_4f8 * fVar81) + auVar137._8_4_;
      auVar134._12_4_ = -(fStack_4f4 * fVar82) + auVar137._12_4_;
      auVar129._16_4_ = -(fStack_4f0 * fVar83) + auVar137._16_4_;
      auVar129._0_16_ = auVar134;
      auVar129._20_4_ = -(fStack_4ec * fVar84) + auVar137._20_4_;
      auVar129._24_4_ = -(fStack_4e8 * fVar85) + auVar137._24_4_;
      auVar129._28_4_ = -(fStack_4e4 * fVar86) + auVar137._28_4_;
      local_4e0 = auVar102._0_4_;
      fStack_4dc = auVar102._4_4_;
      fStack_4d8 = auVar102._8_4_;
      fStack_4d4 = auVar102._12_4_;
      fStack_4d0 = auVar102._16_4_;
      fStack_4cc = auVar102._20_4_;
      fStack_4c8 = auVar102._24_4_;
      fStack_4c4 = auVar102._28_4_;
      lVar32 = (longlong)(int)local_4e0;
      *(float *)(param_1 + lVar32) = auVar134._0_4_;
      lVar33 = (longlong)(int)fStack_4dc;
      uVar4 = vextractps_avx(auVar134,1);
      *(undefined4 *)(param_1 + lVar33) = uVar4;
      lVar30 = (longlong)(int)fStack_4d8;
      uVar4 = vextractps_avx(auVar134,2);
      *(undefined4 *)(param_1 + lVar30) = uVar4;
      lVar21 = (longlong)(int)fStack_4d4;
      uVar4 = vextractps_avx(auVar134,3);
      *(undefined4 *)(param_1 + lVar21) = uVar4;
      lVar31 = (longlong)(int)fStack_4d0;
      auVar36 = auVar129._16_16_;
      *(float *)(param_1 + lVar31) = auVar129._16_4_;
      lVar25 = (longlong)(int)fStack_4cc;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + lVar25) = uVar4;
      lVar24 = (longlong)(int)fStack_4c8;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + lVar24) = uVar4;
      lVar29 = (longlong)(int)fStack_4c4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + lVar29) = uVar4;
      local_440 = auVar97._0_4_;
      fStack_43c = auVar97._4_4_;
      fStack_438 = auVar97._8_4_;
      fStack_434 = auVar97._12_4_;
      fStack_430 = auVar97._16_4_;
      fStack_42c = auVar97._20_4_;
      fStack_428 = auVar97._24_4_;
      fStack_424 = auVar97._28_4_;
      auVar76._0_4_ = -(local_500 * fVar106 * fVar63) + local_440;
      auVar76._4_4_ = -(fStack_4fc * fVar109 * fVar68) + fStack_43c;
      auVar76._8_4_ = -(fStack_4f8 * fVar110 * fVar69) + fStack_438;
      auVar76._12_4_ = -(fStack_4f4 * fVar111 * fVar70) + fStack_434;
      auVar38._16_4_ = -(fStack_4f0 * fVar112 * fVar71) + fStack_430;
      auVar38._0_16_ = auVar76;
      auVar38._20_4_ = -(fStack_4ec * fVar113 * fVar72) + fStack_42c;
      auVar38._24_4_ = -(fStack_4e8 * fVar114 * fVar73) + fStack_428;
      auVar38._28_4_ = -(fStack_4e4 * fVar115 * fVar74) + fStack_424;
      *(float *)(param_1 + 4 + lVar32) = auVar76._0_4_;
      uVar4 = vextractps_avx(auVar76,1);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar76,2);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar76,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar4;
      auVar36 = auVar38._16_16_;
      *(float *)(param_1 + 4 + lVar31) = auVar38._16_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar4;
      local_560 = auVar48._0_4_;
      fStack_55c = auVar48._4_4_;
      fStack_558 = auVar48._8_4_;
      fStack_554 = auVar48._12_4_;
      fStack_550 = auVar48._16_4_;
      fStack_54c = auVar48._20_4_;
      fStack_548 = auVar48._24_4_;
      fStack_544 = auVar48._28_4_;
      auVar36._0_4_ = -(local_500 * fVar54) + local_560;
      auVar36._4_4_ = -(fStack_4fc * fVar56) + fStack_55c;
      auVar36._8_4_ = -(fStack_4f8 * fVar57) + fStack_558;
      auVar36._12_4_ = -(fStack_4f4 * fVar58) + fStack_554;
      auVar120._16_4_ = -(fStack_4f0 * fVar59) + fStack_550;
      auVar120._0_16_ = auVar36;
      auVar120._20_4_ = -(fStack_4ec * fVar60) + fStack_54c;
      auVar120._24_4_ = -(fStack_4e8 * fVar61) + fStack_548;
      auVar120._28_4_ = -(fStack_4e4 * fVar62) + fStack_544;
      *(float *)(param_1 + 8 + lVar32) = auVar36._0_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar4;
      auVar36 = auVar120._16_16_;
      *(float *)(param_1 + 8 + lVar31) = auVar120._16_4_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar4;
      pfVar1 = (float *)(param_5 + uVar20);
      *pfVar1 = fVar8 + fVar63;
      pfVar1[1] = fVar9 + fVar68;
      pfVar1[2] = fVar10 + fVar69;
      pfVar1[3] = fVar11 + fVar70;
      pfVar1[4] = fVar12 + fVar71;
      pfVar1[5] = fVar13 + fVar72;
      pfVar1[6] = fVar14 + fVar73;
      pfVar1[7] = fVar15 + fVar74;
      *(float *)(param_1 + 0xc + lVar32) = local_500;
      auVar36 = auVar103._0_16_;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar4;
      auVar36 = auVar103._16_16_;
      *(float *)(param_1 + 0xc + lVar31) = fStack_4f0;
      uVar4 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar4;
      uVar4 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar4;
      uVar4 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      uVar23 = uVar23 + 0x20;
      uVar26 = (int)uVar28 + 8;
      uVar28 = (ulonglong)uVar26;
    } while ((int)uVar26 < (int)(uVar19 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar26) {
      return;
    }
  }
  iVar27 = (int)uVar28;
  auVar48._4_4_ = iVar27;
  auVar48._0_4_ = iVar27;
  auVar48._8_4_ = iVar27;
  auVar48._12_4_ = iVar27;
  auVar48._16_4_ = iVar27;
  auVar48._20_4_ = iVar27;
  auVar48._24_4_ = iVar27;
  auVar48._28_4_ = iVar27;
  auVar3 = vpor_avx2(auVar48,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar97._4_4_ = param_9;
  auVar97._0_4_ = param_9;
  auVar97._8_4_ = param_9;
  auVar97._12_4_ = param_9;
  auVar97._16_4_ = param_9;
  auVar97._20_4_ = param_9;
  auVar97._24_4_ = param_9;
  auVar97._28_4_ = param_9;
  auVar3 = vpcmpgtd_avx2(auVar97,auVar3);
  pauVar2 = (undefined1 (*) [32])(param_3 + uVar28 * 8);
  uVar19 = vmovmskps_avx(auVar3);
  if (uVar19 == 0xff) {
    auVar55 = *pauVar2;
    auVar116 = pauVar2[1];
    auVar87 = vshufps_avx(auVar55,auVar116,0x88);
    auVar87 = vpermpd_avx2(auVar87,0xd8);
    auVar55 = vshufps_avx(auVar55,auVar116,0xdd);
    auVar55 = vpermpd_avx2(auVar55,0xd8);
  }
  else {
    auVar87 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar3);
    auVar55 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar3);
  }
  auVar129 = vpslld_avx2(auVar87,4);
  auVar105._4_4_ = __real_00000004;
  auVar105._0_4_ = __real_00000004;
  auVar105._8_4_ = __real_00000004;
  auVar105._12_4_ = __real_00000004;
  auVar105._16_4_ = __real_00000004;
  auVar105._20_4_ = __real_00000004;
  auVar105._24_4_ = __real_00000004;
  auVar105._28_4_ = __real_00000004;
  vpor_avx2(auVar129,auVar105);
  auVar66 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  auVar99._4_4_ = __real_00000008;
  auVar99._0_4_ = __real_00000008;
  auVar99._8_4_ = __real_00000008;
  auVar99._12_4_ = __real_00000008;
  auVar99._16_4_ = __real_00000008;
  auVar99._20_4_ = __real_00000008;
  auVar99._24_4_ = __real_00000008;
  auVar99._28_4_ = __real_00000008;
  vpor_avx2(auVar129,auVar99);
  auVar77 = vgatherdps(ZEXT832(0),auVar3);
  auVar108._4_4_ = __real_0000000c;
  auVar108._0_4_ = __real_0000000c;
  auVar108._8_4_ = __real_0000000c;
  auVar108._12_4_ = __real_0000000c;
  auVar108._16_4_ = __real_0000000c;
  auVar108._20_4_ = __real_0000000c;
  auVar108._24_4_ = __real_0000000c;
  auVar108._28_4_ = __real_0000000c;
  vpor_avx2(auVar129,auVar108);
  auVar104 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  auVar47 = vpslld_avx2(auVar55,4);
  vpor_avx2(auVar47,auVar105);
  auVar120 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  vpor_avx2(auVar47,auVar99);
  auVar130 = vgatherdps(ZEXT832(0),auVar3);
  vpor_avx2(auVar108,auVar47);
  auVar105 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar116 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar133 = vgatherdps(ZEXT832(0),auVar3);
  auVar116 = vmaskmovps_avx(auVar3,auVar116);
  auVar66 = vmaskmovps_avx(auVar3,auVar66);
  auVar77 = vmaskmovps_avx(auVar3,auVar77);
  auVar133 = vmaskmovps_avx(auVar3,auVar133);
  auVar120 = vmaskmovps_avx(auVar3,auVar120);
  auVar130 = vmaskmovps_avx(auVar3,auVar130);
  auVar78 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  vpmulld_avx2(auVar87,auVar108);
  auVar38 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar48 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar97 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar3);
  vpmulld_avx2(auVar55,auVar108);
  auVar50 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar51 = vgatherdps(ZEXT832(0) << 0x20,auVar3);
  auVar55 = vsubps_avx(auVar116,auVar133);
  auVar49 = vsubps_avx(auVar66,auVar120);
  auVar7 = vsubps_avx(auVar77,auVar130);
  auVar100._0_4_ =
       auVar7._0_4_ * auVar7._0_4_ + auVar55._0_4_ * auVar55._0_4_ + auVar49._0_4_ * auVar49._0_4_;
  auVar100._4_4_ =
       auVar7._4_4_ * auVar7._4_4_ + auVar55._4_4_ * auVar55._4_4_ + auVar49._4_4_ * auVar49._4_4_;
  auVar100._8_4_ =
       auVar7._8_4_ * auVar7._8_4_ + auVar55._8_4_ * auVar55._8_4_ + auVar49._8_4_ * auVar49._8_4_;
  auVar100._12_4_ =
       auVar7._12_4_ * auVar7._12_4_ +
       auVar55._12_4_ * auVar55._12_4_ + auVar49._12_4_ * auVar49._12_4_;
  auVar100._16_4_ =
       auVar7._16_4_ * auVar7._16_4_ +
       auVar55._16_4_ * auVar55._16_4_ + auVar49._16_4_ * auVar49._16_4_;
  auVar100._20_4_ =
       auVar7._20_4_ * auVar7._20_4_ +
       auVar55._20_4_ * auVar55._20_4_ + auVar49._20_4_ * auVar49._20_4_;
  auVar100._24_4_ =
       auVar7._24_4_ * auVar7._24_4_ +
       auVar55._24_4_ * auVar55._24_4_ + auVar49._24_4_ * auVar49._24_4_;
  auVar100._28_4_ =
       auVar7._28_4_ * auVar7._28_4_ +
       auVar55._28_4_ * auVar55._28_4_ + auVar49._28_4_ * auVar49._28_4_;
  auVar107 = vsqrtps_avx(auVar100);
  auVar55 = vdivps_avx(auVar55,auVar107);
  auVar117._4_4_ = __real_38d1b717;
  auVar117._0_4_ = __real_38d1b717;
  auVar117._8_4_ = __real_38d1b717;
  auVar117._12_4_ = __real_38d1b717;
  auVar117._16_4_ = __real_38d1b717;
  auVar117._20_4_ = __real_38d1b717;
  auVar117._24_4_ = __real_38d1b717;
  auVar117._28_4_ = __real_38d1b717;
  auVar87 = vcmpps_avx(auVar100,auVar117,1);
  auVar101._4_4_ = __real_3f800000;
  auVar101._0_4_ = __real_3f800000;
  auVar101._8_4_ = __real_3f800000;
  auVar101._12_4_ = __real_3f800000;
  auVar101._16_4_ = __real_3f800000;
  auVar101._20_4_ = __real_3f800000;
  auVar101._24_4_ = __real_3f800000;
  auVar101._28_4_ = __real_3f800000;
  auVar55 = vblendvps_avx(auVar55,auVar101,auVar87);
  auVar55 = vmaskmovps_avx(auVar3,auVar55);
  auVar49 = vdivps_avx(auVar49,auVar107);
  uVar26 = auVar87._0_4_;
  auVar137._0_4_ = ~uVar26 & auVar49._0_4_;
  uVar90 = auVar87._4_4_;
  auVar137._4_4_ = ~uVar90 & auVar49._4_4_;
  uVar91 = auVar87._8_4_;
  auVar137._8_4_ = ~uVar91 & auVar49._8_4_;
  uVar92 = auVar87._12_4_;
  auVar137._12_4_ = ~uVar92 & auVar49._12_4_;
  uVar93 = auVar87._16_4_;
  auVar137._16_4_ = ~uVar93 & auVar49._16_4_;
  uVar94 = auVar87._20_4_;
  auVar137._20_4_ = ~uVar94 & auVar49._20_4_;
  uVar95 = auVar87._24_4_;
  auVar137._24_4_ = ~uVar95 & auVar49._24_4_;
  uVar96 = auVar87._28_4_;
  auVar137._28_4_ = ~uVar96 & auVar49._28_4_;
  auVar87 = vmaskmovps_avx(auVar3,auVar137);
  auVar49 = vdivps_avx(auVar7,auVar107);
  auVar52._0_4_ = ~uVar26 & auVar49._0_4_;
  auVar52._4_4_ = ~uVar90 & auVar49._4_4_;
  auVar52._8_4_ = ~uVar91 & auVar49._8_4_;
  auVar52._12_4_ = ~uVar92 & auVar49._12_4_;
  auVar52._16_4_ = ~uVar93 & auVar49._16_4_;
  auVar52._20_4_ = ~uVar94 & auVar49._20_4_;
  auVar52._24_4_ = ~uVar95 & auVar49._24_4_;
  auVar52._28_4_ = ~uVar96 & auVar49._28_4_;
  auVar49 = vmaskmovps_avx(auVar3,auVar52);
  lVar21 = (longlong)(iVar27 << 2);
  auVar7 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_4 + lVar21));
  auVar102._0_4_ = ~uVar26 & auVar107._0_4_;
  auVar102._4_4_ = ~uVar90 & auVar107._4_4_;
  auVar102._8_4_ = ~uVar91 & auVar107._8_4_;
  auVar102._12_4_ = ~uVar92 & auVar107._12_4_;
  auVar102._16_4_ = ~uVar93 & auVar107._16_4_;
  auVar102._20_4_ = ~uVar94 & auVar107._20_4_;
  auVar102._24_4_ = ~uVar95 & auVar107._24_4_;
  auVar102._28_4_ = ~uVar96 & auVar107._28_4_;
  auVar37 = vsubps_avx(auVar102,auVar7);
  auVar103._4_4_ = __real_322bcc77;
  auVar103._0_4_ = __real_322bcc77;
  auVar103._8_4_ = __real_322bcc77;
  auVar103._12_4_ = __real_322bcc77;
  auVar103._16_4_ = __real_322bcc77;
  auVar103._20_4_ = __real_322bcc77;
  auVar103._24_4_ = __real_322bcc77;
  auVar103._28_4_ = __real_322bcc77;
  auVar107 = vcmpps_avx(auVar7,auVar103,1);
  auVar7 = vdivps_avx(auVar101,auVar7);
  auVar107 = vblendvps_avx(auVar7,auVar101,auVar107);
  param_8 = param_8 + param_8;
  auVar118._4_4_ = param_7;
  auVar118._0_4_ = param_7;
  auVar118._8_4_ = param_7;
  auVar118._12_4_ = param_7;
  auVar118._16_4_ = param_7;
  auVar118._20_4_ = param_7;
  auVar118._24_4_ = param_7;
  auVar118._28_4_ = param_7;
  local_4e0 = auVar105._0_4_;
  fStack_4dc = auVar105._4_4_;
  fStack_4d8 = auVar105._8_4_;
  fStack_4d4 = auVar105._12_4_;
  fStack_4d0 = auVar105._16_4_;
  fStack_4cc = auVar105._20_4_;
  fStack_4c8 = auVar105._24_4_;
  fStack_4c4 = auVar105._28_4_;
  fVar44 = auVar104._0_4_;
  auVar53._0_4_ = fVar44 + local_4e0;
  fVar45 = auVar104._4_4_;
  auVar53._4_4_ = fVar45 + fStack_4dc;
  fVar46 = auVar104._8_4_;
  auVar53._8_4_ = fVar46 + fStack_4d8;
  fVar63 = auVar104._12_4_;
  auVar53._12_4_ = fVar63 + fStack_4d4;
  fVar68 = auVar104._16_4_;
  auVar53._16_4_ = fVar68 + fStack_4d0;
  fVar69 = auVar104._20_4_;
  auVar53._20_4_ = fVar69 + fStack_4cc;
  fVar70 = auVar104._24_4_;
  auVar53._24_4_ = fVar70 + fStack_4c8;
  fVar71 = auVar104._28_4_;
  auVar53._28_4_ = fVar71 + fStack_4c4;
  auVar7 = vdivps_avx(auVar118,auVar53);
  auVar7 = vsqrtps_avx(auVar7);
  fVar6 = param_6 * param_6 * param_7;
  fVar35 = param_6 * param_8 * auVar7._0_4_ * auVar107._0_4_;
  fVar40 = param_6 * param_8 * auVar7._4_4_ * auVar107._4_4_;
  fVar34 = param_6 * param_8 * auVar7._8_4_ * auVar107._8_4_;
  fVar39 = param_6 * param_8 * auVar7._12_4_ * auVar107._12_4_;
  fVar41 = param_6 * param_8 * auVar7._16_4_ * auVar107._16_4_;
  fVar42 = param_6 * param_8 * auVar7._20_4_ * auVar107._20_4_;
  fVar43 = param_6 * param_8 * auVar7._24_4_ * auVar107._24_4_;
  param_6 = param_6 * param_8 * auVar7._28_4_ * auVar107._28_4_;
  auVar107 = vsubps_avx(auVar116,auVar78);
  auVar107 = vsubps_avx(auVar107,auVar133);
  auVar7 = vsubps_avx(auVar66,auVar38);
  auVar7 = vsubps_avx(auVar7,auVar120);
  local_440 = auVar50._0_4_;
  fStack_43c = auVar50._4_4_;
  fStack_438 = auVar50._8_4_;
  fStack_434 = auVar50._12_4_;
  fStack_430 = auVar50._16_4_;
  fStack_42c = auVar50._20_4_;
  fStack_428 = auVar50._24_4_;
  fStack_424 = auVar50._28_4_;
  auVar38 = vsubps_avx(auVar77,auVar48);
  auVar38 = vsubps_avx(auVar38,auVar130);
  local_460 = auVar51._0_4_;
  fStack_45c = auVar51._4_4_;
  fStack_458 = auVar51._8_4_;
  fStack_454 = auVar51._12_4_;
  fStack_450 = auVar51._16_4_;
  fStack_44c = auVar51._20_4_;
  fStack_448 = auVar51._24_4_;
  fStack_444 = auVar51._28_4_;
  local_3c0 = auVar87._0_4_;
  fStack_3bc = auVar87._4_4_;
  fStack_3b8 = auVar87._8_4_;
  fStack_3b4 = auVar87._12_4_;
  fStack_3b0 = auVar87._16_4_;
  fStack_3ac = auVar87._20_4_;
  fStack_3a8 = auVar87._24_4_;
  fStack_3a4 = auVar87._28_4_;
  local_3e0 = auVar55._0_4_;
  fStack_3dc = auVar55._4_4_;
  fStack_3d8 = auVar55._8_4_;
  fStack_3d4 = auVar55._12_4_;
  fStack_3d0 = auVar55._16_4_;
  fStack_3cc = auVar55._20_4_;
  fStack_3c8 = auVar55._24_4_;
  fStack_3c4 = auVar55._28_4_;
  local_3a0 = auVar49._0_4_;
  fStack_39c = auVar49._4_4_;
  fStack_398 = auVar49._8_4_;
  fStack_394 = auVar49._12_4_;
  fStack_390 = auVar49._16_4_;
  fStack_38c = auVar49._20_4_;
  fStack_388 = auVar49._24_4_;
  fStack_384 = auVar49._28_4_;
  auVar87 = vmaskmovps_avx(auVar3,*(undefined1 (*) [32])(param_5 + lVar21));
  auVar88._0_4_ =
       -(fVar35 * (local_3a0 * (auVar38._0_4_ + local_460) +
                  local_3e0 * (auVar97._0_4_ + auVar107._0_4_) +
                  local_3c0 * (auVar7._0_4_ + local_440))) +
       (-(fVar6 * auVar37._0_4_) - auVar87._0_4_);
  auVar88._4_4_ =
       -(fVar40 * (fStack_39c * (auVar38._4_4_ + fStack_45c) +
                  fStack_3dc * (auVar97._4_4_ + auVar107._4_4_) +
                  fStack_3bc * (auVar7._4_4_ + fStack_43c))) +
       (-(fVar6 * auVar37._4_4_) - auVar87._4_4_);
  auVar88._8_4_ =
       -(fVar34 * (fStack_398 * (auVar38._8_4_ + fStack_458) +
                  fStack_3d8 * (auVar97._8_4_ + auVar107._8_4_) +
                  fStack_3b8 * (auVar7._8_4_ + fStack_438))) +
       (-(fVar6 * auVar37._8_4_) - auVar87._8_4_);
  auVar88._12_4_ =
       -(fVar39 * (fStack_394 * (auVar38._12_4_ + fStack_454) +
                  fStack_3d4 * (auVar97._12_4_ + auVar107._12_4_) +
                  fStack_3b4 * (auVar7._12_4_ + fStack_434))) +
       (-(fVar6 * auVar37._12_4_) - auVar87._12_4_);
  auVar88._16_4_ =
       -(fVar41 * (fStack_390 * (auVar38._16_4_ + fStack_450) +
                  fStack_3d0 * (auVar97._16_4_ + auVar107._16_4_) +
                  fStack_3b0 * (auVar7._16_4_ + fStack_430))) +
       (-(fVar6 * auVar37._16_4_) - auVar87._16_4_);
  auVar88._20_4_ =
       -(fVar42 * (fStack_38c * (auVar38._20_4_ + fStack_44c) +
                  fStack_3cc * (auVar97._20_4_ + auVar107._20_4_) +
                  fStack_3ac * (auVar7._20_4_ + fStack_42c))) +
       (-(fVar6 * auVar37._20_4_) - auVar87._20_4_);
  auVar88._24_4_ =
       -(fVar43 * (fStack_388 * (auVar38._24_4_ + fStack_448) +
                  fStack_3c8 * (auVar97._24_4_ + auVar107._24_4_) +
                  fStack_3a8 * (auVar7._24_4_ + fStack_428))) +
       (-(fVar6 * auVar37._24_4_) - auVar87._24_4_);
  auVar88._28_4_ =
       -(param_6 *
        (fStack_384 * (auVar38._28_4_ + fStack_444) +
        fStack_3c4 * (auVar97._28_4_ + auVar107._28_4_) + fStack_3a4 * (auVar7._28_4_ + fStack_424))
        ) + (-(fVar6 * auVar37._28_4_) - auVar87._28_4_);
  auVar132._0_4_ = auVar53._0_4_ * (fVar6 + fVar35) + __real_3f800000;
  auVar132._4_4_ = auVar53._4_4_ * (fVar6 + fVar40) + __real_3f800000;
  auVar132._8_4_ = auVar53._8_4_ * (fVar6 + fVar34) + __real_3f800000;
  auVar132._12_4_ = auVar53._12_4_ * (fVar6 + fVar39) + __real_3f800000;
  auVar132._16_4_ = auVar53._16_4_ * (fVar6 + fVar41) + __real_3f800000;
  auVar132._20_4_ = auVar53._20_4_ * (fVar6 + fVar42) + __real_3f800000;
  auVar132._24_4_ = auVar53._24_4_ * (fVar6 + fVar43) + __real_3f800000;
  auVar132._28_4_ = auVar53._28_4_ * (fVar6 + param_6) + __real_3f800000;
  local_400 = auVar129._0_4_;
  iStack_3fc = auVar129._4_4_;
  iStack_3f8 = auVar129._8_4_;
  iStack_3f4 = auVar129._12_4_;
  iStack_3f0 = auVar129._16_4_;
  iStack_3ec = auVar129._20_4_;
  iStack_3e8 = auVar129._24_4_;
  iStack_3e4 = auVar129._28_4_;
  auVar55 = vdivps_avx(auVar88,auVar132);
  fVar6 = auVar55._0_4_;
  auVar136._0_4_ = auVar87._0_4_ + fVar6;
  fVar35 = auVar55._4_4_;
  auVar136._4_4_ = auVar87._4_4_ + fVar35;
  fVar40 = auVar55._8_4_;
  auVar136._8_4_ = auVar87._8_4_ + fVar40;
  fVar34 = auVar55._12_4_;
  auVar136._12_4_ = auVar87._12_4_ + fVar34;
  fVar39 = auVar55._16_4_;
  auVar136._16_4_ = auVar87._16_4_ + fVar39;
  fVar41 = auVar55._20_4_;
  auVar136._20_4_ = auVar87._20_4_ + fVar41;
  fVar42 = auVar55._24_4_;
  auVar136._24_4_ = auVar87._24_4_ + fVar42;
  fVar43 = auVar55._28_4_;
  auVar136._28_4_ = auVar87._28_4_ + fVar43;
  auVar3 = vmaskmovps_avx(auVar3,auVar136);
  *(undefined1 (*) [32])(param_5 + lVar21) = auVar3;
  local_3e0 = local_3e0 * fVar6;
  fStack_3dc = fStack_3dc * fVar35;
  fStack_3d8 = fStack_3d8 * fVar40;
  fStack_3d4 = fStack_3d4 * fVar34;
  fStack_3d0 = fStack_3d0 * fVar39;
  fStack_3cc = fStack_3cc * fVar41;
  fStack_3c8 = fStack_3c8 * fVar42;
  fStack_3c4 = fStack_3c4 * fVar43;
  auVar135._0_4_ = fVar44 * local_3e0 + auVar116._0_4_;
  auVar135._4_4_ = fVar45 * fStack_3dc + auVar116._4_4_;
  auVar135._8_4_ = fVar46 * fStack_3d8 + auVar116._8_4_;
  auVar135._12_4_ = fVar63 * fStack_3d4 + auVar116._12_4_;
  auVar138._16_4_ = fVar68 * fStack_3d0 + auVar116._16_4_;
  auVar138._0_16_ = auVar135;
  auVar138._20_4_ = fVar69 * fStack_3cc + auVar116._20_4_;
  auVar138._24_4_ = fVar70 * fStack_3c8 + auVar116._24_4_;
  auVar138._28_4_ = fVar71 * fStack_3c4 + auVar116._28_4_;
  cVar22 = (char)uVar19;
  auVar65 = auVar104._0_16_;
  auVar76 = auVar104._16_16_;
  auVar131 = auVar138._16_16_;
  local_500 = auVar47._0_4_;
  fStack_4fc = auVar47._4_4_;
  fStack_4f8 = auVar47._8_4_;
  fStack_4f4 = auVar47._12_4_;
  fStack_4f0 = auVar47._16_4_;
  fStack_4ec = auVar47._20_4_;
  fStack_4e8 = auVar47._24_4_;
  fStack_4e4 = auVar47._28_4_;
  local_4c0 = auVar66._0_4_;
  fStack_4bc = auVar66._4_4_;
  fStack_4b8 = auVar66._8_4_;
  fStack_4b4 = auVar66._12_4_;
  fStack_4b0 = auVar66._16_4_;
  fStack_4ac = auVar66._20_4_;
  fStack_4a8 = auVar66._24_4_;
  fStack_4a4 = auVar66._28_4_;
  local_4a0 = auVar133._0_4_;
  fStack_49c = auVar133._4_4_;
  fStack_498 = auVar133._8_4_;
  fStack_494 = auVar133._12_4_;
  fStack_490 = auVar133._16_4_;
  fStack_48c = auVar133._20_4_;
  fStack_488 = auVar133._24_4_;
  fStack_484 = auVar133._28_4_;
  local_560 = auVar120._0_4_;
  fStack_55c = auVar120._4_4_;
  fStack_558 = auVar120._8_4_;
  fStack_554 = auVar120._12_4_;
  fStack_550 = auVar120._16_4_;
  fStack_54c = auVar120._20_4_;
  fStack_548 = auVar120._24_4_;
  fStack_544 = auVar120._28_4_;
  local_520 = auVar130._0_4_;
  fStack_51c = auVar130._4_4_;
  fStack_518 = auVar130._8_4_;
  fStack_514 = auVar130._12_4_;
  fStack_510 = auVar130._16_4_;
  fStack_50c = auVar130._20_4_;
  fStack_508 = auVar130._24_4_;
  fStack_504 = auVar130._28_4_;
  auVar36 = auVar105._0_16_;
  auVar64 = auVar105._16_16_;
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + local_400) = auVar135._0_4_;
  }
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar135,1);
    *(undefined4 *)(param_1 + iStack_3fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar135,2);
    *(undefined4 *)(param_1 + iStack_3f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar135,3);
    *(undefined4 *)(param_1 + iStack_3f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + iStack_3f0) = auVar138._16_4_;
  }
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + iStack_3ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + iStack_3e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + iStack_3e4) = uVar5;
    auVar98._0_4_ = fVar44 * local_3c0 * fVar6 + local_4c0;
    auVar98._4_4_ = fVar45 * fStack_3bc * fVar35 + fStack_4bc;
    auVar98._8_4_ = fVar46 * fStack_3b8 * fVar40 + fStack_4b8;
    auVar98._12_4_ = fVar63 * fStack_3b4 * fVar34 + fStack_4b4;
    auVar98._16_4_ = fVar68 * fStack_3b0 * fVar39 + fStack_4b0;
    auVar98._20_4_ = fVar69 * fStack_3ac * fVar41 + fStack_4ac;
    auVar98._24_4_ = fVar70 * fStack_3a8 * fVar42 + fStack_4a8;
    auVar98._28_4_ = fVar71 * fStack_3a4 * fVar43 + fStack_4a4;
  }
  else {
    auVar98._0_4_ = fVar44 * local_3c0 * fVar6 + local_4c0;
    auVar98._4_4_ = fVar45 * fStack_3bc * fVar35 + fStack_4bc;
    auVar98._8_4_ = fVar46 * fStack_3b8 * fVar40 + fStack_4b8;
    auVar98._12_4_ = fVar63 * fStack_3b4 * fVar34 + fStack_4b4;
    auVar98._16_4_ = fVar68 * fStack_3b0 * fVar39 + fStack_4b0;
    auVar98._20_4_ = fVar69 * fStack_3ac * fVar41 + fStack_4ac;
    auVar98._24_4_ = fVar70 * fStack_3a8 * fVar42 + fStack_4a8;
    auVar98._28_4_ = fVar71 * fStack_3a4 * fVar43 + fStack_4a4;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_400) = auVar98._0_4_;
  }
  auVar131 = auVar98._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_3f0) = auVar98._16_4_;
  }
  auVar131 = auVar98._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_3e4) = uVar5;
    auVar121._0_4_ = fVar44 * fVar6 * local_3a0 + auVar77._0_4_;
    auVar121._4_4_ = fVar45 * fVar35 * fStack_39c + auVar77._4_4_;
    auVar121._8_4_ = fVar46 * fVar40 * fStack_398 + auVar77._8_4_;
    auVar121._12_4_ = fVar63 * fVar34 * fStack_394 + auVar77._12_4_;
    auVar121._16_4_ = fVar68 * fVar39 * fStack_390 + auVar77._16_4_;
    auVar121._20_4_ = fVar69 * fVar41 * fStack_38c + auVar77._20_4_;
    auVar121._24_4_ = fVar70 * fVar42 * fStack_388 + auVar77._24_4_;
    auVar121._28_4_ = fVar71 * fVar43 * fStack_384 + auVar77._28_4_;
  }
  else {
    auVar121._0_4_ = fVar44 * fVar6 * local_3a0 + auVar77._0_4_;
    auVar121._4_4_ = fVar45 * fVar35 * fStack_39c + auVar77._4_4_;
    auVar121._8_4_ = fVar46 * fVar40 * fStack_398 + auVar77._8_4_;
    auVar121._12_4_ = fVar63 * fVar34 * fStack_394 + auVar77._12_4_;
    auVar121._16_4_ = fVar68 * fVar39 * fStack_390 + auVar77._16_4_;
    auVar121._20_4_ = fVar69 * fVar41 * fStack_38c + auVar77._20_4_;
    auVar121._24_4_ = fVar70 * fVar42 * fStack_388 + auVar77._24_4_;
    auVar121._28_4_ = fVar71 * fVar43 * fStack_384 + auVar77._28_4_;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_400) = auVar121._0_4_;
  }
  auVar131 = auVar121._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_3f0) = auVar121._16_4_;
  }
  auVar131 = auVar121._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar131,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar131,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar131,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_3e4) = uVar5;
  }
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_400) = fVar44;
  }
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_3f0) = fVar68;
  }
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar76,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar76,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar76,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_3e4) = uVar5;
    auVar89._0_4_ = -(local_4e0 * local_3e0) + local_4a0;
    auVar89._4_4_ = -(fStack_4dc * fStack_3dc) + fStack_49c;
    auVar89._8_4_ = -(fStack_4d8 * fStack_3d8) + fStack_498;
    auVar89._12_4_ = -(fStack_4d4 * fStack_3d4) + fStack_494;
    auVar89._16_4_ = -(fStack_4d0 * fStack_3d0) + fStack_490;
    auVar89._20_4_ = -(fStack_4cc * fStack_3cc) + fStack_48c;
    auVar89._24_4_ = -(fStack_4c8 * fStack_3c8) + fStack_488;
    auVar89._28_4_ = -(fStack_4c4 * fStack_3c4) + fStack_484;
  }
  else {
    auVar89._0_4_ = -(local_4e0 * local_3e0) + local_4a0;
    auVar89._4_4_ = -(fStack_4dc * fStack_3dc) + fStack_49c;
    auVar89._8_4_ = -(fStack_4d8 * fStack_3d8) + fStack_498;
    auVar89._12_4_ = -(fStack_4d4 * fStack_3d4) + fStack_494;
    auVar89._16_4_ = -(fStack_4d0 * fStack_3d0) + fStack_490;
    auVar89._20_4_ = -(fStack_4cc * fStack_3cc) + fStack_48c;
    auVar89._24_4_ = -(fStack_4c8 * fStack_3c8) + fStack_488;
    auVar89._28_4_ = -(fStack_4c4 * fStack_3c4) + fStack_484;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + (int)local_500) = auVar89._0_4_;
  }
  auVar65 = auVar89._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + (int)fStack_4fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + (int)fStack_4f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + (int)fStack_4f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_4f0) = auVar89._16_4_;
  }
  auVar65 = auVar89._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + (int)fStack_4ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + (int)fStack_4e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + (int)fStack_4e4) = uVar5;
    auVar67._0_4_ = -(local_4e0 * local_3c0 * fVar6) + local_560;
    auVar67._4_4_ = -(fStack_4dc * fStack_3bc * fVar35) + fStack_55c;
    auVar67._8_4_ = -(fStack_4d8 * fStack_3b8 * fVar40) + fStack_558;
    auVar67._12_4_ = -(fStack_4d4 * fStack_3b4 * fVar34) + fStack_554;
    auVar67._16_4_ = -(fStack_4d0 * fStack_3b0 * fVar39) + fStack_550;
    auVar67._20_4_ = -(fStack_4cc * fStack_3ac * fVar41) + fStack_54c;
    auVar67._24_4_ = -(fStack_4c8 * fStack_3a8 * fVar42) + fStack_548;
    auVar67._28_4_ = -(fStack_4c4 * fStack_3a4 * fVar43) + fStack_544;
  }
  else {
    auVar67._0_4_ = -(local_4e0 * local_3c0 * fVar6) + local_560;
    auVar67._4_4_ = -(fStack_4dc * fStack_3bc * fVar35) + fStack_55c;
    auVar67._8_4_ = -(fStack_4d8 * fStack_3b8 * fVar40) + fStack_558;
    auVar67._12_4_ = -(fStack_4d4 * fStack_3b4 * fVar34) + fStack_554;
    auVar67._16_4_ = -(fStack_4d0 * fStack_3b0 * fVar39) + fStack_550;
    auVar67._20_4_ = -(fStack_4cc * fStack_3ac * fVar41) + fStack_54c;
    auVar67._24_4_ = -(fStack_4c8 * fStack_3a8 * fVar42) + fStack_548;
    auVar67._28_4_ = -(fStack_4c4 * fStack_3a4 * fVar43) + fStack_544;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_500) = auVar67._0_4_;
  }
  auVar65 = auVar67._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_4f0) = auVar67._16_4_;
  }
  auVar65 = auVar67._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_4e4) = uVar5;
    auVar79._0_4_ = -(local_4e0 * fVar6 * local_3a0) + local_520;
    auVar79._4_4_ = -(fStack_4dc * fVar35 * fStack_39c) + fStack_51c;
    auVar79._8_4_ = -(fStack_4d8 * fVar40 * fStack_398) + fStack_518;
    auVar79._12_4_ = -(fStack_4d4 * fVar34 * fStack_394) + fStack_514;
    auVar79._16_4_ = -(fStack_4d0 * fVar39 * fStack_390) + fStack_510;
    auVar79._20_4_ = -(fStack_4cc * fVar41 * fStack_38c) + fStack_50c;
    auVar79._24_4_ = -(fStack_4c8 * fVar42 * fStack_388) + fStack_508;
    auVar79._28_4_ = -(fStack_4c4 * fVar43 * fStack_384) + fStack_504;
  }
  else {
    auVar79._0_4_ = -(local_4e0 * fVar6 * local_3a0) + local_520;
    auVar79._4_4_ = -(fStack_4dc * fVar35 * fStack_39c) + fStack_51c;
    auVar79._8_4_ = -(fStack_4d8 * fVar40 * fStack_398) + fStack_518;
    auVar79._12_4_ = -(fStack_4d4 * fVar34 * fStack_394) + fStack_514;
    auVar79._16_4_ = -(fStack_4d0 * fVar39 * fStack_390) + fStack_510;
    auVar79._20_4_ = -(fStack_4cc * fVar41 * fStack_38c) + fStack_50c;
    auVar79._24_4_ = -(fStack_4c8 * fVar42 * fStack_388) + fStack_508;
    auVar79._28_4_ = -(fStack_4c4 * fVar43 * fStack_384) + fStack_504;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_500) = auVar79._0_4_;
  }
  auVar65 = auVar79._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_4f0) = auVar79._16_4_;
  }
  auVar65 = auVar79._16_16_;
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_4e4) = uVar5;
  }
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_500) = local_4e0;
  }
  if ((uVar19 & 2) != 0) {
    uVar5 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4fc) = uVar5;
  }
  if ((uVar19 & 4) != 0) {
    uVar5 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4f8) = uVar5;
  }
  if ((uVar19 & 8) != 0) {
    uVar5 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4f4) = uVar5;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_4f0) = fStack_4d0;
  }
  if ((uVar19 & 0x20) != 0) {
    uVar5 = vextractps_avx(auVar64,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4ec) = uVar5;
  }
  if ((uVar19 & 0x40) != 0) {
    uVar5 = vextractps_avx(auVar64,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4e8) = uVar5;
  }
  if (cVar22 < '\0') {
    uVar5 = vextractps_avx(auVar64,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_4e4) = uVar5;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithWeightMaps_avx2 @ 14091b2d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithWeightMaps_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               longlong param_6,undefined8 param_7,uint param_8)

{
  undefined1 (*pauVar1) [28];
  float *pfVar2;
  undefined1 (*pauVar3) [32];
  undefined1 uVar4;
  undefined1 auVar5 [32];
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [28];
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  int iVar21;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 *puVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  float fVar36;
  int iVar37;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  float fVar47;
  undefined1 auVar40 [32];
  float fVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar50 [32];
  uint uVar65;
  float fVar66;
  undefined1 auVar67 [16];
  uint uVar69;
  float fVar70;
  uint uVar71;
  float fVar72;
  uint uVar73;
  float fVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  undefined1 auVar68 [32];
  int iVar79;
  undefined1 auVar81 [16];
  undefined1 in_ZMM3 [64];
  float fVar82;
  int iVar83;
  float fVar91;
  undefined1 auVar84 [32];
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 in_ZMM4 [64];
  undefined1 auVar92 [32];
  undefined1 auVar93 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 in_ZMM7 [64];
  float fVar99;
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [16];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [16];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  float fVar115;
  float fVar121;
  undefined1 auVar116 [16];
  float fVar119;
  float fVar120;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  float fVar125;
  undefined1 auVar126 [16];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [16];
  undefined1 auVar130 [32];
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
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar80;
  undefined1 auVar102 [32];
  
  uVar14 = __real_00000004;
  fVar8 = __real_3f800000;
  uVar7 = __real_38d1b717;
  uVar15 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar15 = param_8;
  }
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar31 = 0;
    do {
      auVar5 = *(undefined1 (*) [32])(param_2 + uVar18 * 2);
      auVar40 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar18 * 2);
      auVar38 = vshufps_avx(auVar5,auVar40,0x88);
      auVar38 = vpermpd_avx2(auVar38,0xd8);
      auVar92 = vpslld_avx2(auVar38,4);
      auVar38 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar101 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar38);
      auVar5 = vshufps_avx(auVar5,auVar40,0xdd);
      auVar50 = vpermpd_avx2(auVar5,0xd8);
      auVar103._4_4_ = uVar14;
      auVar103._0_4_ = uVar14;
      auVar103._8_4_ = uVar14;
      auVar103._12_4_ = uVar14;
      auVar103._16_4_ = uVar14;
      auVar103._20_4_ = uVar14;
      auVar103._24_4_ = uVar14;
      auVar103._28_4_ = uVar14;
      auVar5 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar40 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar38 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
      auVar117 = vpslld_avx2(auVar50,4);
      auVar50 = vpcmpeqd_avx2(auVar50,auVar50);
      auVar109 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar50);
      auVar130 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar5);
      auVar5 = vpcmpeqd_avx2(auVar92 | auVar103,auVar92 | auVar103);
      auVar127 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar118 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar38);
      auVar97 = vgatherdps(ZEXT832(0) << 0x20,auVar5);
      auVar5 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar105 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar81._8_8_ = 0;
      auVar81._0_8_ = *(ulonglong *)(param_6 + uVar31);
      auVar40 = vpmovzxbd_avx2(auVar81);
      auVar95 = vgatherdps(ZEXT832(0),auVar5);
      in_ZMM7 = ZEXT3264(auVar95);
      auVar38 = vpslld_avx2(auVar40,2);
      auVar5 = vpmovzxdq_avx2(auVar38._0_16_);
      vpmovzxdq_avx2(auVar38._16_16_);
      auVar81 = vpcmpeqd_avx(auVar40._0_16_,auVar40._0_16_);
      auVar93 = vgatherqps(ZEXT816(0) << 0x20,auVar81);
      auVar81 = vpcmpeqd_avx(auVar5._0_16_,auVar5._0_16_);
      auVar81 = vgatherqps(ZEXT816(0) << 0x40,auVar81);
      auVar5 = vsubps_avx(auVar101,auVar109);
      auVar38 = vsubps_avx(auVar130,auVar97);
      auVar50 = vsubps_avx(auVar127,auVar105);
      auVar106._0_4_ =
           auVar50._0_4_ * auVar50._0_4_ +
           auVar5._0_4_ * auVar5._0_4_ + auVar38._0_4_ * auVar38._0_4_;
      auVar106._4_4_ =
           auVar50._4_4_ * auVar50._4_4_ +
           auVar5._4_4_ * auVar5._4_4_ + auVar38._4_4_ * auVar38._4_4_;
      auVar106._8_4_ =
           auVar50._8_4_ * auVar50._8_4_ +
           auVar5._8_4_ * auVar5._8_4_ + auVar38._8_4_ * auVar38._8_4_;
      auVar106._12_4_ =
           auVar50._12_4_ * auVar50._12_4_ +
           auVar5._12_4_ * auVar5._12_4_ + auVar38._12_4_ * auVar38._12_4_;
      auVar106._16_4_ =
           auVar50._16_4_ * auVar50._16_4_ +
           auVar5._16_4_ * auVar5._16_4_ + auVar38._16_4_ * auVar38._16_4_;
      auVar106._20_4_ =
           auVar50._20_4_ * auVar50._20_4_ +
           auVar5._20_4_ * auVar5._20_4_ + auVar38._20_4_ * auVar38._20_4_;
      auVar106._24_4_ =
           auVar50._24_4_ * auVar50._24_4_ +
           auVar5._24_4_ * auVar5._24_4_ + auVar38._24_4_ * auVar38._24_4_;
      auVar106._28_4_ =
           auVar50._28_4_ * auVar50._28_4_ +
           auVar5._28_4_ * auVar5._28_4_ + auVar38._28_4_ * auVar38._28_4_;
      auVar103 = vsqrtps_avx(auVar106);
      auVar40 = vdivps_avx(auVar5,auVar103);
      auVar38 = vdivps_avx(auVar38,auVar103);
      uVar34 = uVar18 & 0xffffffff;
      auVar50 = vdivps_avx(auVar50,auVar103);
      auVar5._4_4_ = uVar7;
      auVar5._0_4_ = uVar7;
      auVar5._8_4_ = uVar7;
      auVar5._12_4_ = uVar7;
      auVar5._16_4_ = uVar7;
      auVar5._20_4_ = uVar7;
      auVar5._24_4_ = uVar7;
      auVar5._28_4_ = uVar7;
      auVar5 = vcmpps_avx(auVar106,auVar5,1);
      uVar65 = auVar5._0_4_;
      auVar112._0_4_ = ~uVar65 & auVar103._0_4_;
      uVar69 = auVar5._4_4_;
      auVar112._4_4_ = ~uVar69 & auVar103._4_4_;
      uVar71 = auVar5._8_4_;
      auVar112._8_4_ = ~uVar71 & auVar103._8_4_;
      uVar73 = auVar5._12_4_;
      auVar112._12_4_ = ~uVar73 & auVar103._12_4_;
      uVar75 = auVar5._16_4_;
      auVar112._16_4_ = ~uVar75 & auVar103._16_4_;
      uVar76 = auVar5._20_4_;
      auVar112._20_4_ = ~uVar76 & auVar103._20_4_;
      uVar77 = auVar5._24_4_;
      auVar112._24_4_ = ~uVar77 & auVar103._24_4_;
      uVar78 = auVar5._28_4_;
      auVar112._28_4_ = ~uVar78 & auVar103._28_4_;
      auVar103 = vsubps_avx(auVar112,*(undefined1 (*) [32])(param_3 + uVar34));
      fVar48 = param_5 * param_5 * auVar93._0_4_;
      fVar51 = param_5 * param_5 * auVar93._4_4_;
      fVar53 = param_5 * param_5 * auVar93._8_4_;
      fVar55 = param_5 * param_5 * auVar93._12_4_;
      fVar57 = param_5 * param_5 * auVar81._0_4_;
      fVar59 = param_5 * param_5 * auVar81._4_4_;
      fVar61 = param_5 * param_5 * auVar81._8_4_;
      fVar63 = param_5 * param_5 * auVar81._12_4_;
      pauVar1 = (undefined1 (*) [28])(param_4 + uVar34);
      auVar13 = *pauVar1;
      fVar99 = *(float *)pauVar1[1];
      auVar84._0_4_ = -(fVar48 * auVar103._0_4_) - *(float *)*pauVar1;
      auVar84._4_4_ = -(fVar51 * auVar103._4_4_) - *(float *)(*pauVar1 + 4);
      auVar84._8_4_ = -(fVar53 * auVar103._8_4_) - *(float *)(*pauVar1 + 8);
      auVar84._12_4_ = -(fVar55 * auVar103._12_4_) - *(float *)(*pauVar1 + 0xc);
      auVar84._16_4_ = -(fVar57 * auVar103._16_4_) - *(float *)(*pauVar1 + 0x10);
      auVar84._20_4_ = -(fVar59 * auVar103._20_4_) - *(float *)(*pauVar1 + 0x14);
      auVar84._24_4_ = -(fVar61 * auVar103._24_4_) - *(float *)(*pauVar1 + 0x18);
      auVar84._28_4_ = -(fVar63 * auVar103._28_4_) - fVar99;
      fVar66 = auVar95._0_4_;
      fVar115 = auVar118._0_4_;
      fVar9 = auVar95._4_4_;
      fVar119 = auVar118._4_4_;
      fVar70 = auVar95._8_4_;
      fVar120 = auVar118._8_4_;
      fVar10 = auVar95._12_4_;
      fVar121 = auVar118._12_4_;
      fVar72 = auVar95._16_4_;
      fVar122 = auVar118._16_4_;
      fVar11 = auVar95._20_4_;
      fVar123 = auVar118._20_4_;
      fVar74 = auVar95._24_4_;
      fVar124 = auVar118._24_4_;
      fVar12 = auVar95._28_4_;
      fVar125 = auVar118._28_4_;
      auVar110._4_4_ = fVar8;
      auVar110._0_4_ = fVar8;
      auVar110._8_4_ = fVar8;
      auVar110._12_4_ = fVar8;
      auVar110._16_4_ = fVar8;
      auVar110._20_4_ = fVar8;
      auVar110._24_4_ = fVar8;
      auVar110._28_4_ = fVar8;
      in_ZMM3 = ZEXT3264(auVar110);
      auVar39._0_4_ = fVar48 * (fVar115 + fVar66) + fVar8;
      auVar39._4_4_ = fVar51 * (fVar119 + fVar9) + fVar8;
      auVar39._8_4_ = fVar53 * (fVar120 + fVar70) + fVar8;
      auVar39._12_4_ = fVar55 * (fVar121 + fVar10) + fVar8;
      auVar39._16_4_ = fVar57 * (fVar122 + fVar72) + fVar8;
      auVar39._20_4_ = fVar59 * (fVar123 + fVar11) + fVar8;
      auVar39._24_4_ = fVar61 * (fVar124 + fVar74) + fVar8;
      auVar39._28_4_ = fVar63 * (fVar125 + fVar12) + fVar8;
      auVar103 = vdivps_avx(auVar84,auVar39);
      auVar5 = vblendvps_avx(auVar40,auVar110,auVar5);
      fVar48 = auVar103._0_4_;
      fVar82 = auVar5._0_4_ * fVar48;
      fVar51 = auVar103._4_4_;
      fVar85 = auVar5._4_4_ * fVar51;
      fVar53 = auVar103._8_4_;
      fVar86 = auVar5._8_4_ * fVar53;
      fVar55 = auVar103._12_4_;
      fVar87 = auVar5._12_4_ * fVar55;
      fVar57 = auVar103._16_4_;
      fVar88 = auVar5._16_4_ * fVar57;
      fVar59 = auVar103._20_4_;
      fVar89 = auVar5._20_4_ * fVar59;
      fVar61 = auVar103._24_4_;
      fVar90 = auVar5._24_4_ * fVar61;
      fVar63 = auVar103._28_4_;
      fVar91 = auVar5._28_4_ * fVar63;
      in_ZMM4 = ZEXT3264(CONCAT428(fVar91,CONCAT424(fVar90,CONCAT420(fVar89,CONCAT416(fVar88,
                                                  CONCAT412(fVar87,CONCAT48(fVar86,CONCAT44(fVar85,
                                                  fVar82))))))));
      auVar100._0_4_ = fVar115 * fVar82 + auVar101._0_4_;
      auVar100._4_4_ = fVar119 * fVar85 + auVar101._4_4_;
      auVar100._8_4_ = fVar120 * fVar86 + auVar101._8_4_;
      auVar100._12_4_ = fVar121 * fVar87 + auVar101._12_4_;
      auVar102._16_4_ = fVar122 * fVar88 + auVar101._16_4_;
      auVar102._0_16_ = auVar100;
      auVar102._20_4_ = fVar123 * fVar89 + auVar101._20_4_;
      auVar102._24_4_ = fVar124 * fVar90 + auVar101._24_4_;
      auVar102._28_4_ = fVar125 * fVar91 + auVar101._28_4_;
      lVar35 = (longlong)auVar92._0_4_;
      lVar32 = (longlong)auVar92._4_4_;
      *(float *)(param_1 + lVar35) = auVar100._0_4_;
      lVar33 = (longlong)auVar92._8_4_;
      uVar6 = vextractps_avx(auVar100,1);
      *(undefined4 *)(param_1 + lVar32) = uVar6;
      lVar28 = (longlong)auVar92._12_4_;
      uVar6 = vextractps_avx(auVar100,2);
      *(undefined4 *)(param_1 + lVar33) = uVar6;
      lVar17 = (longlong)auVar92._16_4_;
      uVar6 = vextractps_avx(auVar100,3);
      *(undefined4 *)(param_1 + lVar28) = uVar6;
      auVar81 = auVar102._16_16_;
      lVar30 = (longlong)auVar92._20_4_;
      *(float *)(param_1 + lVar17) = auVar102._16_4_;
      lVar19 = (longlong)auVar92._24_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + lVar30) = uVar6;
      lVar27 = (longlong)auVar92._28_4_;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + lVar19) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + lVar27) = uVar6;
      local_360 = auVar38._0_4_;
      fStack_35c = auVar38._4_4_;
      fStack_358 = auVar38._8_4_;
      fStack_354 = auVar38._12_4_;
      fStack_350 = auVar38._16_4_;
      fStack_34c = auVar38._20_4_;
      fStack_348 = auVar38._24_4_;
      fStack_344 = auVar38._28_4_;
      fVar49 = (float)(~uVar65 & (uint)local_360) * fVar48;
      fVar52 = (float)(~uVar69 & (uint)fStack_35c) * fVar51;
      fVar54 = (float)(~uVar71 & (uint)fStack_358) * fVar53;
      fVar56 = (float)(~uVar73 & (uint)fStack_354) * fVar55;
      fVar58 = (float)(~uVar75 & (uint)fStack_350) * fVar57;
      fVar60 = (float)(~uVar76 & (uint)fStack_34c) * fVar59;
      fVar62 = (float)(~uVar77 & (uint)fStack_348) * fVar61;
      fVar64 = (float)(~uVar78 & (uint)fStack_344) * fVar63;
      auVar129._0_4_ = fVar115 * fVar49 + auVar130._0_4_;
      auVar129._4_4_ = fVar119 * fVar52 + auVar130._4_4_;
      auVar129._8_4_ = fVar120 * fVar54 + auVar130._8_4_;
      auVar129._12_4_ = fVar121 * fVar56 + auVar130._12_4_;
      auVar101._16_4_ = fVar122 * fVar58 + auVar130._16_4_;
      auVar101._0_16_ = auVar129;
      auVar101._20_4_ = fVar123 * fVar60 + auVar130._20_4_;
      auVar101._24_4_ = fVar124 * fVar62 + auVar130._24_4_;
      auVar101._28_4_ = fVar125 * fVar64 + auVar130._28_4_;
      *(float *)(param_1 + 4 + lVar35) = auVar129._0_4_;
      uVar6 = vextractps_avx(auVar129,1);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar129,2);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar6;
      uVar6 = vextractps_avx(auVar129,3);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar6;
      auVar81 = auVar101._16_16_;
      *(float *)(param_1 + 4 + lVar17) = auVar101._16_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar6;
      fVar36 = (float)(~uVar65 & auVar50._0_4_) * fVar48;
      fVar41 = (float)(~uVar69 & auVar50._4_4_) * fVar51;
      fVar42 = (float)(~uVar71 & auVar50._8_4_) * fVar53;
      fVar43 = (float)(~uVar73 & auVar50._12_4_) * fVar55;
      fVar44 = (float)(~uVar75 & auVar50._16_4_) * fVar57;
      fVar45 = (float)(~uVar76 & auVar50._20_4_) * fVar59;
      fVar46 = (float)(~uVar77 & auVar50._24_4_) * fVar61;
      fVar47 = (float)(~uVar78 & auVar50._28_4_) * fVar63;
      auVar126._0_4_ = fVar115 * fVar36 + auVar127._0_4_;
      auVar126._4_4_ = fVar119 * fVar41 + auVar127._4_4_;
      auVar126._8_4_ = fVar120 * fVar42 + auVar127._8_4_;
      auVar126._12_4_ = fVar121 * fVar43 + auVar127._12_4_;
      auVar92._16_4_ = fVar122 * fVar44 + auVar127._16_4_;
      auVar92._0_16_ = auVar126;
      auVar92._20_4_ = fVar123 * fVar45 + auVar127._20_4_;
      auVar92._24_4_ = fVar124 * fVar46 + auVar127._24_4_;
      auVar92._28_4_ = fVar125 * fVar47 + auVar127._28_4_;
      *(float *)(param_1 + 8 + lVar35) = auVar126._0_4_;
      uVar6 = vextractps_avx(auVar126,1);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar126,2);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar6;
      uVar6 = vextractps_avx(auVar126,3);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar6;
      auVar81 = auVar92._16_16_;
      *(float *)(param_1 + 8 + lVar17) = auVar92._16_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar6;
      *(float *)(param_1 + 0xc + lVar35) = fVar115;
      auVar81 = auVar118._0_16_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar6;
      auVar81 = auVar118._16_16_;
      *(float *)(param_1 + 0xc + lVar17) = fVar122;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar6;
      auVar108._0_4_ = fVar66 * fVar82 + auVar109._0_4_;
      auVar108._4_4_ = fVar9 * fVar85 + auVar109._4_4_;
      auVar108._8_4_ = fVar70 * fVar86 + auVar109._8_4_;
      auVar108._12_4_ = fVar10 * fVar87 + auVar109._12_4_;
      auVar50._16_4_ = fVar72 * fVar88 + auVar109._16_4_;
      auVar50._0_16_ = auVar108;
      auVar50._20_4_ = fVar11 * fVar89 + auVar109._20_4_;
      auVar50._24_4_ = fVar74 * fVar90 + auVar109._24_4_;
      auVar50._28_4_ = fVar12 * fVar91 + auVar109._28_4_;
      local_340 = auVar117._0_4_;
      fStack_33c = auVar117._4_4_;
      fStack_338 = auVar117._8_4_;
      fStack_334 = auVar117._12_4_;
      fStack_330 = auVar117._16_4_;
      fStack_32c = auVar117._20_4_;
      fStack_328 = auVar117._24_4_;
      fStack_324 = auVar117._28_4_;
      lVar17 = (longlong)(int)local_340;
      *(float *)(param_1 + lVar17) = auVar108._0_4_;
      lVar28 = (longlong)(int)fStack_33c;
      uVar6 = vextractps_avx(auVar108,1);
      *(undefined4 *)(param_1 + lVar28) = uVar6;
      lVar30 = (longlong)(int)fStack_338;
      uVar6 = vextractps_avx(auVar108,2);
      *(undefined4 *)(param_1 + lVar30) = uVar6;
      lVar19 = (longlong)(int)fStack_334;
      uVar6 = vextractps_avx(auVar108,3);
      *(undefined4 *)(param_1 + lVar19) = uVar6;
      lVar27 = (longlong)(int)fStack_330;
      auVar81 = auVar50._16_16_;
      *(float *)(param_1 + lVar27) = auVar50._16_4_;
      lVar35 = (longlong)(int)fStack_32c;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + lVar35) = uVar6;
      lVar32 = (longlong)(int)fStack_328;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + lVar32) = uVar6;
      lVar33 = (longlong)(int)fStack_324;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + lVar33) = uVar6;
      auVar93._0_4_ = fVar66 * fVar49 + auVar97._0_4_;
      auVar93._4_4_ = fVar9 * fVar52 + auVar97._4_4_;
      auVar93._8_4_ = fVar70 * fVar54 + auVar97._8_4_;
      auVar93._12_4_ = fVar10 * fVar56 + auVar97._12_4_;
      auVar40._16_4_ = fVar72 * fVar58 + auVar97._16_4_;
      auVar40._0_16_ = auVar93;
      auVar40._20_4_ = fVar11 * fVar60 + auVar97._20_4_;
      auVar40._24_4_ = fVar74 * fVar62 + auVar97._24_4_;
      auVar40._28_4_ = fVar12 * fVar64 + auVar97._28_4_;
      *(float *)(param_1 + 4 + lVar17) = auVar93._0_4_;
      uVar6 = vextractps_avx(auVar93,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar6;
      uVar6 = vextractps_avx(auVar93,2);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar93,3);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar6;
      auVar81 = auVar40._16_16_;
      *(float *)(param_1 + 4 + lVar27) = auVar40._16_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 4 + lVar35) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar6;
      auVar104._0_4_ = fVar66 * fVar36 + auVar105._0_4_;
      auVar104._4_4_ = fVar9 * fVar41 + auVar105._4_4_;
      auVar104._8_4_ = fVar70 * fVar42 + auVar105._8_4_;
      auVar104._12_4_ = fVar10 * fVar43 + auVar105._12_4_;
      auVar38._16_4_ = fVar72 * fVar44 + auVar105._16_4_;
      auVar38._0_16_ = auVar104;
      auVar38._20_4_ = fVar11 * fVar45 + auVar105._20_4_;
      auVar38._24_4_ = fVar74 * fVar46 + auVar105._24_4_;
      auVar38._28_4_ = fVar12 * fVar47 + auVar105._28_4_;
      *(float *)(param_1 + 8 + lVar17) = auVar104._0_4_;
      uVar6 = vextractps_avx(auVar104,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar6;
      uVar6 = vextractps_avx(auVar104,2);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar104,3);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar6;
      auVar81 = auVar38._16_16_;
      *(float *)(param_1 + 8 + lVar27) = auVar38._16_4_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar6;
      local_320 = auVar13._0_4_;
      fStack_31c = auVar13._4_4_;
      fStack_318 = auVar13._8_4_;
      fStack_314 = auVar13._12_4_;
      fStack_310 = auVar13._16_4_;
      fStack_30c = auVar13._20_4_;
      fStack_308 = auVar13._24_4_;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar6;
      pfVar2 = (float *)(param_4 + uVar34);
      *pfVar2 = fVar48 + local_320;
      pfVar2[1] = fVar51 + fStack_31c;
      pfVar2[2] = fVar53 + fStack_318;
      pfVar2[3] = fVar55 + fStack_314;
      pfVar2[4] = fVar57 + fStack_310;
      pfVar2[5] = fVar59 + fStack_30c;
      pfVar2[6] = fVar61 + fStack_308;
      pfVar2[7] = fVar63 + fVar99;
      *(float *)(param_1 + 0xc + lVar17) = fVar66;
      auVar81 = auVar95._0_16_;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar6;
      auVar81 = auVar95._16_16_;
      *(float *)(param_1 + 0xc + lVar27) = fVar72;
      uVar6 = vextractps_avx(auVar81,1);
      *(undefined4 *)(param_1 + 0xc + lVar35) = uVar6;
      uVar6 = vextractps_avx(auVar81,2);
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar6;
      uVar6 = vextractps_avx(auVar81,3);
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar6;
      uVar31 = uVar31 + 8;
      uVar18 = uVar18 + 0x20;
    } while ((int)uVar31 < (int)(uVar15 & 0xfffffff8));
    if ((int)param_8 <= (int)uVar31) {
      return;
    }
  }
  iVar16 = (int)uVar31;
  auVar95._4_4_ = iVar16;
  auVar95._0_4_ = iVar16;
  auVar95._8_4_ = iVar16;
  auVar95._12_4_ = iVar16;
  auVar95._16_4_ = iVar16;
  auVar95._20_4_ = iVar16;
  auVar95._24_4_ = iVar16;
  auVar95._28_4_ = iVar16;
  auVar5 = vpor_avx2(auVar95,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar97._4_4_ = param_8;
  auVar97._0_4_ = param_8;
  auVar97._8_4_ = param_8;
  auVar97._12_4_ = param_8;
  auVar97._16_4_ = param_8;
  auVar97._20_4_ = param_8;
  auVar97._24_4_ = param_8;
  auVar97._28_4_ = param_8;
  auVar5 = vpcmpgtd_avx2(auVar97,auVar5);
  uVar31 = uVar31 & 0xffffffff;
  pauVar3 = (undefined1 (*) [32])(param_2 + uVar31 * 8);
  uVar15 = vmovmskps_avx(auVar5);
  if (uVar15 == 0xff) {
    auVar40 = *pauVar3;
    auVar38 = pauVar3[1];
    auVar50 = vshufps_avx(auVar40,auVar38,0x88);
    auVar50 = vpermpd_avx2(auVar50,0xd8);
    auVar40 = vshufps_avx(auVar40,auVar38,0xdd);
    auVar40 = vpermpd_avx2(auVar40,0xd8);
  }
  else {
    auVar50 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar5);
    auVar40 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar5);
  }
  auVar84 = vpslld_avx2(auVar50,4);
  auVar38 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar5);
  auVar67 = auVar38._0_16_;
  auVar50 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar5);
  auVar103 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar5);
  auVar95 = vgatherdps(ZEXT832(0) << 0x20,auVar5);
  auVar92 = vpslld_avx2(auVar40,4);
  auVar110 = vgatherdps(ZEXT832(0),auVar5);
  auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar5);
  auVar106 = vgatherdps(ZEXT832(0),auVar5);
  auVar97 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar5);
  auVar40 = vmaskmovps_avx(auVar5,auVar38);
  auVar38 = vmaskmovps_avx(auVar5,auVar50);
  auVar50 = vmaskmovps_avx(auVar5,auVar103);
  auVar103 = vmaskmovps_avx(auVar5,auVar110);
  auVar110 = vmaskmovps_avx(auVar5,auVar112);
  auVar106 = vmaskmovps_avx(auVar5,auVar106);
  lVar17 = (longlong)(iVar16 << 2);
  auVar112 = vmaskmovps_avx(auVar5,*(undefined1 (*) [32])(param_3 + lVar17));
  auVar39 = vmaskmovps_avx(auVar5,*(undefined1 (*) [32])(param_4 + lVar17));
  bVar20 = (byte)uVar15;
  if ((~bVar20 & 0x81) == 0) {
    auVar67._8_8_ = 0;
    auVar67._0_8_ = *(ulonglong *)(param_6 + uVar31);
  }
  else {
    puVar29 = (undefined1 *)(param_6 + uVar31);
    if ((uVar15 & 1) != 0) {
      uVar4 = *puVar29;
      auVar67[1] = uVar4;
      auVar67[0] = uVar4;
      auVar67[2] = uVar4;
      auVar67[3] = uVar4;
      auVar67[4] = uVar4;
      auVar67[5] = uVar4;
      auVar67[6] = uVar4;
      auVar67[7] = uVar4;
      auVar67[8] = uVar4;
      auVar67[9] = uVar4;
      auVar67[10] = uVar4;
      auVar67[0xb] = uVar4;
      auVar67[0xc] = uVar4;
      auVar67[0xd] = uVar4;
      auVar67[0xe] = uVar4;
      auVar67[0xf] = uVar4;
    }
    if ((uVar15 & 2) != 0) {
      auVar81 = vpinsrb_avx(auVar67,(uint)(byte)puVar29[1],1);
      auVar67 = vpblendw_avx(auVar81,auVar67,0xe);
    }
    if ((uVar15 & 4) != 0) {
      auVar81 = vpmovzxwd_avx(auVar67);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[2],2);
      auVar81 = vpinsrb_avx(auVar81,(uint)auVar67[3],3);
      auVar67 = vpblendd_avx2(auVar81,auVar67,2);
    }
    if ((uVar15 & 8) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048080030280020100);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[3],3);
      auVar67 = vpblendd_avx2(auVar81,auVar67,2);
    }
    if ((uVar15 & 0x10) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048080030203020100);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[4],4);
      auVar81 = vpinsrb_avx(auVar81,(uint)auVar67[5],5);
      auVar67 = vpblendw_avx(auVar81,auVar67,8);
    }
    if ((uVar15 & 0x20) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048080030403020100);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[5],5);
      auVar67 = vpblendw_avx(auVar81,auVar67,8);
    }
    if ((uVar15 & 0x40) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048080050403020100);
      auVar81 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[6],6);
      auVar67 = vpinsrb_avx(auVar81,(uint)auVar67[7],7);
    }
    if ((uVar15 & 0x80) != 0) {
      auVar81 = vpshufb_avx(auVar67,___xmm_80800706808005048006050403020100);
      auVar67 = vpinsrb_avx(auVar81,(uint)(byte)puVar29[7],7);
    }
  }
  auVar101 = vpmovzxbd_avx2(auVar67);
  auVar101 = vpslld_avx2(auVar101,2);
  vpmovzxdq_avx2(auVar101._16_16_);
  vpmovzxdq_avx2(auVar101._0_16_);
  auVar93 = vgatherqps(ZEXT816(0) << 0x20,auVar5._0_16_);
  auVar81 = vgatherqps(ZEXT816(0) << 0x40,auVar5._16_16_);
  auVar101 = vsubps_avx(auVar40,auVar103);
  auVar105 = vsubps_avx(auVar38,auVar110);
  auVar117 = vsubps_avx(auVar50,auVar106);
  auVar130._0_4_ =
       auVar117._0_4_ * auVar117._0_4_ +
       auVar101._0_4_ * auVar101._0_4_ + auVar105._0_4_ * auVar105._0_4_;
  auVar130._4_4_ =
       auVar117._4_4_ * auVar117._4_4_ +
       auVar101._4_4_ * auVar101._4_4_ + auVar105._4_4_ * auVar105._4_4_;
  auVar130._8_4_ =
       auVar117._8_4_ * auVar117._8_4_ +
       auVar101._8_4_ * auVar101._8_4_ + auVar105._8_4_ * auVar105._8_4_;
  auVar130._12_4_ =
       auVar117._12_4_ * auVar117._12_4_ +
       auVar101._12_4_ * auVar101._12_4_ + auVar105._12_4_ * auVar105._12_4_;
  auVar130._16_4_ =
       auVar117._16_4_ * auVar117._16_4_ +
       auVar101._16_4_ * auVar101._16_4_ + auVar105._16_4_ * auVar105._16_4_;
  auVar130._20_4_ =
       auVar117._20_4_ * auVar117._20_4_ +
       auVar101._20_4_ * auVar101._20_4_ + auVar105._20_4_ * auVar105._20_4_;
  auVar130._24_4_ =
       auVar117._24_4_ * auVar117._24_4_ +
       auVar101._24_4_ * auVar101._24_4_ + auVar105._24_4_ * auVar105._24_4_;
  auVar130._28_4_ =
       auVar117._28_4_ * auVar117._28_4_ +
       auVar101._28_4_ * auVar101._28_4_ + auVar105._28_4_ * auVar105._28_4_;
  auVar109 = vsqrtps_avx(auVar130);
  auVar101 = vdivps_avx(auVar101,auVar109);
  auVar113._4_4_ = __real_38d1b717;
  auVar113._0_4_ = __real_38d1b717;
  auVar113._8_4_ = __real_38d1b717;
  auVar113._12_4_ = __real_38d1b717;
  auVar113._16_4_ = __real_38d1b717;
  auVar113._20_4_ = __real_38d1b717;
  auVar113._24_4_ = __real_38d1b717;
  auVar113._28_4_ = __real_38d1b717;
  auVar102 = vcmpps_avx(auVar130,auVar113,1);
  auVar114._4_4_ = __real_3f800000;
  auVar114._0_4_ = __real_3f800000;
  auVar114._8_4_ = __real_3f800000;
  auVar114._12_4_ = __real_3f800000;
  auVar114._16_4_ = __real_3f800000;
  auVar114._20_4_ = __real_3f800000;
  auVar114._24_4_ = __real_3f800000;
  auVar114._28_4_ = __real_3f800000;
  auVar101 = vblendvps_avx(auVar101,auVar114,auVar102);
  auVar101 = vmaskmovps_avx(auVar5,auVar101);
  auVar105 = vdivps_avx(auVar105,auVar109);
  uVar65 = auVar102._0_4_;
  auVar128._0_4_ = ~uVar65 & auVar105._0_4_;
  uVar69 = auVar102._4_4_;
  auVar128._4_4_ = ~uVar69 & auVar105._4_4_;
  uVar71 = auVar102._8_4_;
  auVar128._8_4_ = ~uVar71 & auVar105._8_4_;
  uVar73 = auVar102._12_4_;
  auVar128._12_4_ = ~uVar73 & auVar105._12_4_;
  uVar75 = auVar102._16_4_;
  auVar128._16_4_ = ~uVar75 & auVar105._16_4_;
  uVar76 = auVar102._20_4_;
  auVar128._20_4_ = ~uVar76 & auVar105._20_4_;
  uVar77 = auVar102._24_4_;
  auVar128._24_4_ = ~uVar77 & auVar105._24_4_;
  uVar78 = auVar102._28_4_;
  auVar128._28_4_ = ~uVar78 & auVar105._28_4_;
  auVar102 = vmaskmovps_avx(auVar5,auVar128);
  auVar105 = vdivps_avx(auVar117,auVar109);
  auVar117._0_4_ = ~uVar65 & auVar105._0_4_;
  auVar117._4_4_ = ~uVar69 & auVar105._4_4_;
  auVar117._8_4_ = ~uVar71 & auVar105._8_4_;
  auVar117._12_4_ = ~uVar73 & auVar105._12_4_;
  auVar117._16_4_ = ~uVar75 & auVar105._16_4_;
  auVar117._20_4_ = ~uVar76 & auVar105._20_4_;
  auVar117._24_4_ = ~uVar77 & auVar105._24_4_;
  auVar117._28_4_ = ~uVar78 & auVar105._28_4_;
  auVar105 = vmaskmovps_avx(auVar5,auVar117);
  auVar118._0_4_ = ~uVar65 & auVar109._0_4_;
  auVar118._4_4_ = ~uVar69 & auVar109._4_4_;
  auVar118._8_4_ = ~uVar71 & auVar109._8_4_;
  auVar118._12_4_ = ~uVar73 & auVar109._12_4_;
  auVar118._16_4_ = ~uVar75 & auVar109._16_4_;
  auVar118._20_4_ = ~uVar76 & auVar109._20_4_;
  auVar118._24_4_ = ~uVar77 & auVar109._24_4_;
  auVar118._28_4_ = ~uVar78 & auVar109._28_4_;
  auVar112 = vsubps_avx(auVar118,auVar112);
  fVar66 = param_5 * param_5 * auVar93._0_4_;
  fVar70 = param_5 * param_5 * auVar93._4_4_;
  fVar72 = param_5 * param_5 * auVar93._8_4_;
  fVar74 = param_5 * param_5 * auVar93._12_4_;
  fVar48 = param_5 * param_5 * auVar81._0_4_;
  fVar53 = param_5 * param_5 * auVar81._4_4_;
  fVar57 = param_5 * param_5 * auVar81._8_4_;
  param_5 = param_5 * param_5 * auVar81._12_4_;
  fVar8 = auVar95._0_4_;
  fVar63 = auVar97._0_4_;
  fVar9 = auVar95._4_4_;
  fVar99 = auVar97._4_4_;
  fVar10 = auVar95._8_4_;
  fVar36 = auVar97._8_4_;
  fVar11 = auVar95._12_4_;
  fVar41 = auVar97._12_4_;
  fVar12 = auVar95._16_4_;
  fVar42 = auVar97._16_4_;
  fVar51 = auVar95._20_4_;
  fVar43 = auVar97._20_4_;
  fVar55 = auVar95._24_4_;
  fVar44 = auVar97._24_4_;
  fVar59 = auVar95._28_4_;
  fVar45 = auVar97._28_4_;
  auVar96._0_4_ = fVar66 * (fVar63 + fVar8) + __real_3f800000;
  auVar96._4_4_ = fVar70 * (fVar99 + fVar9) + __real_3f800000;
  auVar96._8_4_ = fVar72 * (fVar36 + fVar10) + __real_3f800000;
  auVar96._12_4_ = fVar74 * (fVar41 + fVar11) + __real_3f800000;
  auVar96._16_4_ = fVar48 * (fVar42 + fVar12) + __real_3f800000;
  auVar96._20_4_ = fVar53 * (fVar43 + fVar51) + __real_3f800000;
  auVar96._24_4_ = fVar57 * (fVar44 + fVar55) + __real_3f800000;
  auVar96._28_4_ = param_5 * (fVar45 + fVar59) + __real_3f800000;
  local_360 = auVar39._0_4_;
  fStack_35c = auVar39._4_4_;
  fStack_358 = auVar39._8_4_;
  fStack_354 = auVar39._12_4_;
  fStack_350 = auVar39._16_4_;
  fStack_34c = auVar39._20_4_;
  fStack_348 = auVar39._24_4_;
  fStack_344 = auVar39._28_4_;
  auVar109._0_4_ = -(fVar66 * auVar112._0_4_) - local_360;
  auVar109._4_4_ = -(fVar70 * auVar112._4_4_) - fStack_35c;
  auVar109._8_4_ = -(fVar72 * auVar112._8_4_) - fStack_358;
  auVar109._12_4_ = -(fVar74 * auVar112._12_4_) - fStack_354;
  auVar109._16_4_ = -(fVar48 * auVar112._16_4_) - fStack_350;
  auVar109._20_4_ = -(fVar53 * auVar112._20_4_) - fStack_34c;
  auVar109._24_4_ = -(fVar57 * auVar112._24_4_) - fStack_348;
  auVar109._28_4_ = -(param_5 * auVar112._28_4_) - fStack_344;
  auVar112 = vdivps_avx(auVar109,auVar96);
  fVar66 = auVar112._0_4_;
  auVar127._0_4_ = local_360 + fVar66;
  fVar70 = auVar112._4_4_;
  auVar127._4_4_ = fStack_35c + fVar70;
  fVar72 = auVar112._8_4_;
  auVar127._8_4_ = fStack_358 + fVar72;
  fVar74 = auVar112._12_4_;
  auVar127._12_4_ = fStack_354 + fVar74;
  fVar48 = auVar112._16_4_;
  auVar127._16_4_ = fStack_350 + fVar48;
  fVar53 = auVar112._20_4_;
  auVar127._20_4_ = fStack_34c + fVar53;
  fVar57 = auVar112._24_4_;
  auVar127._24_4_ = fStack_348 + fVar57;
  fVar61 = auVar112._28_4_;
  auVar127._28_4_ = fStack_344 + fVar61;
  auVar5 = vmaskmovps_avx(auVar5,auVar127);
  *(undefined1 (*) [32])(param_4 + lVar17) = auVar5;
  local_2e0 = auVar101._0_4_;
  fStack_2dc = auVar101._4_4_;
  fStack_2d8 = auVar101._8_4_;
  fStack_2d4 = auVar101._12_4_;
  fStack_2d0 = auVar101._16_4_;
  fStack_2cc = auVar101._20_4_;
  fStack_2c8 = auVar101._24_4_;
  fStack_2c4 = auVar101._28_4_;
  local_2e0 = fVar66 * local_2e0;
  fStack_2dc = fVar70 * fStack_2dc;
  fStack_2d8 = fVar72 * fStack_2d8;
  fStack_2d4 = fVar74 * fStack_2d4;
  fStack_2d0 = fVar48 * fStack_2d0;
  fStack_2cc = fVar53 * fStack_2cc;
  fStack_2c8 = fVar57 * fStack_2c8;
  fStack_2c4 = fVar61 * fStack_2c4;
  local_2c0 = auVar102._0_4_;
  fStack_2bc = auVar102._4_4_;
  fStack_2b8 = auVar102._8_4_;
  fStack_2b4 = auVar102._12_4_;
  fStack_2b0 = auVar102._16_4_;
  fStack_2ac = auVar102._20_4_;
  fStack_2a8 = auVar102._24_4_;
  fStack_2a4 = auVar102._28_4_;
  local_2c0 = fVar66 * local_2c0;
  fStack_2bc = fVar70 * fStack_2bc;
  fStack_2b8 = fVar72 * fStack_2b8;
  fStack_2b4 = fVar74 * fStack_2b4;
  fStack_2b0 = fVar48 * fStack_2b0;
  fStack_2ac = fVar53 * fStack_2ac;
  fStack_2a8 = fVar57 * fStack_2a8;
  fStack_2a4 = fVar61 * fStack_2a4;
  local_2a0 = auVar105._0_4_;
  fStack_29c = auVar105._4_4_;
  fStack_298 = auVar105._8_4_;
  fStack_294 = auVar105._12_4_;
  fStack_290 = auVar105._16_4_;
  fStack_28c = auVar105._20_4_;
  fStack_288 = auVar105._24_4_;
  fStack_284 = auVar105._28_4_;
  fVar66 = fVar66 * local_2a0;
  fVar70 = fVar70 * fStack_29c;
  fVar72 = fVar72 * fStack_298;
  fVar74 = fVar74 * fStack_294;
  fVar48 = fVar48 * fStack_290;
  fVar53 = fVar53 * fStack_28c;
  fVar57 = fVar57 * fStack_288;
  fVar61 = fVar61 * fStack_284;
  auVar116._0_4_ = fVar8 * local_2e0 + auVar40._0_4_;
  auVar116._4_4_ = fVar9 * fStack_2dc + auVar40._4_4_;
  auVar116._8_4_ = fVar10 * fStack_2d8 + auVar40._8_4_;
  auVar116._12_4_ = fVar11 * fStack_2d4 + auVar40._12_4_;
  auVar105._16_4_ = fVar12 * fStack_2d0 + auVar40._16_4_;
  auVar105._0_16_ = auVar116;
  auVar105._20_4_ = fVar51 * fStack_2cc + auVar40._20_4_;
  auVar105._24_4_ = fVar55 * fStack_2c8 + auVar40._24_4_;
  auVar105._28_4_ = fVar59 * fStack_2c4 + auVar40._28_4_;
  iVar83 = auVar84._0_4_;
  auVar104 = auVar84._16_16_;
  auVar108 = auVar95._0_16_;
  auVar126 = auVar95._16_16_;
  auVar93 = auVar97._0_16_;
  auVar100 = auVar97._16_16_;
  auVar129 = auVar105._16_16_;
  iVar37 = auVar92._0_4_;
  auVar81 = auVar92._16_16_;
  iVar16 = auVar84._4_4_;
  iVar21 = auVar84._8_4_;
  iVar22 = auVar84._12_4_;
  iVar23 = auVar92._4_4_;
  iVar24 = auVar92._8_4_;
  iVar25 = auVar92._12_4_;
  local_340 = auVar103._0_4_;
  fStack_33c = auVar103._4_4_;
  fStack_338 = auVar103._8_4_;
  fStack_334 = auVar103._12_4_;
  fStack_330 = auVar103._16_4_;
  fStack_32c = auVar103._20_4_;
  fStack_328 = auVar103._24_4_;
  fStack_324 = auVar103._28_4_;
  local_320 = auVar110._0_4_;
  fStack_31c = auVar110._4_4_;
  fStack_318 = auVar110._8_4_;
  fStack_314 = auVar110._12_4_;
  fStack_310 = auVar110._16_4_;
  fStack_30c = auVar110._20_4_;
  fStack_308 = auVar110._24_4_;
  fStack_304 = auVar110._28_4_;
  local_300 = auVar106._0_4_;
  fStack_2fc = auVar106._4_4_;
  fStack_2f8 = auVar106._8_4_;
  fStack_2f4 = auVar106._12_4_;
  fStack_2f0 = auVar106._16_4_;
  fStack_2ec = auVar106._20_4_;
  fStack_2e8 = auVar106._24_4_;
  fStack_2e4 = auVar106._28_4_;
  iVar79 = auVar84._16_4_;
  iVar80 = auVar92._16_4_;
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + iVar83) = auVar116._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar116,1);
    *(undefined4 *)(param_1 + iVar16) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar116,2);
    *(undefined4 *)(param_1 + iVar21) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar116,3);
    *(undefined4 *)(param_1 + iVar22) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + iVar79) = auVar105._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar26 = vextractps_avx(auVar104,1);
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + iVar26) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar26 = vextractps_avx(auVar104,2);
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + iVar26) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar26 = vextractps_avx(auVar104,3);
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + iVar26) = uVar7;
    auVar111._0_4_ = fVar8 * local_2c0 + auVar38._0_4_;
    auVar111._4_4_ = fVar9 * fStack_2bc + auVar38._4_4_;
    auVar111._8_4_ = fVar10 * fStack_2b8 + auVar38._8_4_;
    auVar111._12_4_ = fVar11 * fStack_2b4 + auVar38._12_4_;
    auVar111._16_4_ = fVar12 * fStack_2b0 + auVar38._16_4_;
    auVar111._20_4_ = fVar51 * fStack_2ac + auVar38._20_4_;
    auVar111._24_4_ = fVar55 * fStack_2a8 + auVar38._24_4_;
    auVar111._28_4_ = fVar59 * fStack_2a4 + auVar38._28_4_;
  }
  else {
    auVar111._0_4_ = fVar8 * local_2c0 + auVar38._0_4_;
    auVar111._4_4_ = fVar9 * fStack_2bc + auVar38._4_4_;
    auVar111._8_4_ = fVar10 * fStack_2b8 + auVar38._8_4_;
    auVar111._12_4_ = fVar11 * fStack_2b4 + auVar38._12_4_;
    auVar111._16_4_ = fVar12 * fStack_2b0 + auVar38._16_4_;
    auVar111._20_4_ = fVar51 * fStack_2ac + auVar38._20_4_;
    auVar111._24_4_ = fVar55 * fStack_2a8 + auVar38._24_4_;
    auVar111._28_4_ = fVar59 * fStack_2a4 + auVar38._28_4_;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar83) = auVar111._0_4_;
  }
  auVar129 = auVar111._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar79) = auVar111._16_4_;
  }
  auVar129 = auVar111._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar26 = vextractps_avx(auVar104,1);
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar26 = vextractps_avx(auVar104,2);
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar26 = vextractps_avx(auVar104,3);
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar7;
    auVar107._0_4_ = fVar8 * fVar66 + auVar50._0_4_;
    auVar107._4_4_ = fVar9 * fVar70 + auVar50._4_4_;
    auVar107._8_4_ = fVar10 * fVar72 + auVar50._8_4_;
    auVar107._12_4_ = fVar11 * fVar74 + auVar50._12_4_;
    auVar107._16_4_ = fVar12 * fVar48 + auVar50._16_4_;
    auVar107._20_4_ = fVar51 * fVar53 + auVar50._20_4_;
    auVar107._24_4_ = fVar55 * fVar57 + auVar50._24_4_;
    auVar107._28_4_ = fVar59 * fVar61 + auVar50._28_4_;
  }
  else {
    auVar107._0_4_ = fVar8 * fVar66 + auVar50._0_4_;
    auVar107._4_4_ = fVar9 * fVar70 + auVar50._4_4_;
    auVar107._8_4_ = fVar10 * fVar72 + auVar50._8_4_;
    auVar107._12_4_ = fVar11 * fVar74 + auVar50._12_4_;
    auVar107._16_4_ = fVar12 * fVar48 + auVar50._16_4_;
    auVar107._20_4_ = fVar51 * fVar53 + auVar50._20_4_;
    auVar107._24_4_ = fVar55 * fVar57 + auVar50._24_4_;
    auVar107._28_4_ = fVar59 * fVar61 + auVar50._28_4_;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar83) = auVar107._0_4_;
  }
  auVar129 = auVar107._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar79) = auVar107._16_4_;
  }
  auVar129 = auVar107._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar26 = vextractps_avx(auVar104,1);
    uVar7 = vextractps_avx(auVar129,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar26 = vextractps_avx(auVar104,2);
    uVar7 = vextractps_avx(auVar129,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar26 = vextractps_avx(auVar104,3);
    uVar7 = vextractps_avx(auVar129,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar7;
  }
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar83) = fVar8;
  }
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar108,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar108,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar108,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar79) = fVar12;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar104,1);
    uVar7 = vextractps_avx(auVar126,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar104,2);
    uVar7 = vextractps_avx(auVar126,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar104,3);
    uVar7 = vextractps_avx(auVar126,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
    auVar98._0_4_ = fVar63 * local_2e0 + local_340;
    auVar98._4_4_ = fVar99 * fStack_2dc + fStack_33c;
    auVar98._8_4_ = fVar36 * fStack_2d8 + fStack_338;
    auVar98._12_4_ = fVar41 * fStack_2d4 + fStack_334;
    auVar98._16_4_ = fVar42 * fStack_2d0 + fStack_330;
    auVar98._20_4_ = fVar43 * fStack_2cc + fStack_32c;
    auVar98._24_4_ = fVar44 * fStack_2c8 + fStack_328;
    auVar98._28_4_ = fVar45 * fStack_2c4 + fStack_324;
  }
  else {
    auVar98._0_4_ = fVar63 * local_2e0 + local_340;
    auVar98._4_4_ = fVar99 * fStack_2dc + fStack_33c;
    auVar98._8_4_ = fVar36 * fStack_2d8 + fStack_338;
    auVar98._12_4_ = fVar41 * fStack_2d4 + fStack_334;
    auVar98._16_4_ = fVar42 * fStack_2d0 + fStack_330;
    auVar98._20_4_ = fVar43 * fStack_2cc + fStack_32c;
    auVar98._24_4_ = fVar44 * fStack_2c8 + fStack_328;
    auVar98._28_4_ = fVar45 * fStack_2c4 + fStack_324;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + iVar37) = auVar98._0_4_;
  }
  auVar104 = auVar98._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + iVar23) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + iVar24) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + iVar25) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + iVar80) = auVar98._16_4_;
  }
  auVar104 = auVar98._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar81,1);
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar81,2);
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar81,3);
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + iVar16) = uVar7;
    auVar94._0_4_ = fVar63 * local_2c0 + local_320;
    auVar94._4_4_ = fVar99 * fStack_2bc + fStack_31c;
    auVar94._8_4_ = fVar36 * fStack_2b8 + fStack_318;
    auVar94._12_4_ = fVar41 * fStack_2b4 + fStack_314;
    auVar94._16_4_ = fVar42 * fStack_2b0 + fStack_310;
    auVar94._20_4_ = fVar43 * fStack_2ac + fStack_30c;
    auVar94._24_4_ = fVar44 * fStack_2a8 + fStack_308;
    auVar94._28_4_ = fVar45 * fStack_2a4 + fStack_304;
  }
  else {
    auVar94._0_4_ = fVar63 * local_2c0 + local_320;
    auVar94._4_4_ = fVar99 * fStack_2bc + fStack_31c;
    auVar94._8_4_ = fVar36 * fStack_2b8 + fStack_318;
    auVar94._12_4_ = fVar41 * fStack_2b4 + fStack_314;
    auVar94._16_4_ = fVar42 * fStack_2b0 + fStack_310;
    auVar94._20_4_ = fVar43 * fStack_2ac + fStack_30c;
    auVar94._24_4_ = fVar44 * fStack_2a8 + fStack_308;
    auVar94._28_4_ = fVar45 * fStack_2a4 + fStack_304;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar37) = auVar94._0_4_;
  }
  auVar104 = auVar94._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar80) = auVar94._16_4_;
  }
  auVar104 = auVar94._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar81,1);
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar81,2);
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar81,3);
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
    auVar68._0_4_ = fVar63 * fVar66 + local_300;
    auVar68._4_4_ = fVar99 * fVar70 + fStack_2fc;
    auVar68._8_4_ = fVar36 * fVar72 + fStack_2f8;
    auVar68._12_4_ = fVar41 * fVar74 + fStack_2f4;
    auVar68._16_4_ = fVar42 * fVar48 + fStack_2f0;
    auVar68._20_4_ = fVar43 * fVar53 + fStack_2ec;
    auVar68._24_4_ = fVar44 * fVar57 + fStack_2e8;
    auVar68._28_4_ = fVar45 * fVar61 + fStack_2e4;
  }
  else {
    auVar68._0_4_ = fVar63 * fVar66 + local_300;
    auVar68._4_4_ = fVar99 * fVar70 + fStack_2fc;
    auVar68._8_4_ = fVar36 * fVar72 + fStack_2f8;
    auVar68._12_4_ = fVar41 * fVar74 + fStack_2f4;
    auVar68._16_4_ = fVar42 * fVar48 + fStack_2f0;
    auVar68._20_4_ = fVar43 * fVar53 + fStack_2ec;
    auVar68._24_4_ = fVar44 * fVar57 + fStack_2e8;
    auVar68._28_4_ = fVar45 * fVar61 + fStack_2e4;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar37) = auVar68._0_4_;
  }
  auVar104 = auVar68._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar80) = auVar68._16_4_;
  }
  auVar104 = auVar68._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar81,1);
    uVar7 = vextractps_avx(auVar104,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar81,2);
    uVar7 = vextractps_avx(auVar104,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar81,3);
    uVar7 = vextractps_avx(auVar104,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar37) = fVar63;
  }
  if ((uVar15 & 2) != 0) {
    uVar7 = vextractps_avx(auVar93,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar7;
  }
  if ((uVar15 & 4) != 0) {
    uVar7 = vextractps_avx(auVar93,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar24) = uVar7;
  }
  if ((uVar15 & 8) != 0) {
    uVar7 = vextractps_avx(auVar93,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar7;
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar80) = fVar42;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar81,1);
    uVar7 = vextractps_avx(auVar100,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar81,2);
    uVar7 = vextractps_avx(auVar100,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  if ((char)bVar20 < '\0') {
    iVar16 = vextractps_avx(auVar81,3);
    uVar7 = vextractps_avx(auVar100,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithDampingAndWeightMaps_avx2 @ 14091c7e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDampingAndWeightMaps_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,float param_6,byte param_7,longlong param_8,undefined8 param_9,
               byte param_10,longlong param_11,undefined8 param_12,uint param_13)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  uint uVar31;
  uint uVar32;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar27 [32];
  uint uVar33;
  uint uVar37;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  float fVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar40 [32];
  float fVar48;
  float fVar49;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar50 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  float fVar75;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar76 [32];
  float fVar84;
  undefined1 auVar77 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  float fVar92;
  float fVar96;
  float fVar97;
  float fVar99;
  float fVar101;
  float fVar103;
  float fVar105;
  undefined1 auVar93 [32];
  float fVar107;
  undefined1 auVar94 [32];
  float fVar98;
  float fVar100;
  float fVar102;
  float fVar104;
  float fVar106;
  float fVar108;
  undefined1 auVar95 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  float fVar114;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined1 auVar115 [32];
  float fVar122;
  undefined1 auVar124 [16];
  float fVar123;
  float fVar126;
  undefined1 auVar125 [32];
  undefined1 auVar127 [16];
  undefined1 auVar128 [32];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [32];
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
  undefined1 auVar132 [32];
  
  uVar10 = __real_0000000c;
  uVar9 = __real_00000008;
  iVar17 = __real_00000004;
  fVar49 = __real_3f800000;
  uVar8 = __real_38d1b717;
  uVar7 = __real_322bcc77;
  uVar12 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar12 = param_13;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    uVar18 = 0;
    do {
      auVar26 = (undefined1  [16])0x0;
      auVar40 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      if ((param_7 & 1) != 0) {
        auVar40 = ZEXT832(*(ulonglong *)(param_8 + uVar18));
      }
      auVar94 = *(undefined1 (*) [32])(param_3 + uVar14 * 2);
      auVar51 = *(undefined1 (*) [32])(param_3 + 0x20 + uVar14 * 2);
      auVar85 = vshufps_avx(auVar94,auVar51,0x88);
      auVar85 = vpermpd_avx2(auVar85,0xd8);
      auVar94 = vshufps_avx(auVar94,auVar51,0xdd);
      auVar94 = vpermpd_avx2(auVar94,0xd8);
      if ((param_10 & 1) != 0) {
        auVar26._8_8_ = 0;
        auVar26._0_8_ = *(ulonglong *)(param_11 + uVar18);
      }
      auVar109 = vpslld_avx2(auVar85,4);
      auVar64._4_4_ = iVar17;
      auVar64._0_4_ = iVar17;
      auVar64._8_4_ = iVar17;
      auVar64._12_4_ = iVar17;
      auVar64._16_4_ = iVar17;
      auVar64._20_4_ = iVar17;
      auVar64._24_4_ = iVar17;
      auVar64._28_4_ = iVar17;
      vpor_avx2(auVar109,auVar64);
      auVar51 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar131 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar61._4_4_ = uVar9;
      auVar61._0_4_ = uVar9;
      auVar61._8_4_ = uVar9;
      auVar61._12_4_ = uVar9;
      auVar61._16_4_ = uVar9;
      auVar61._20_4_ = uVar9;
      auVar61._24_4_ = uVar9;
      auVar61._28_4_ = uVar9;
      vpor_avx2(auVar109,auVar61);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar125 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar66._4_4_ = uVar10;
      auVar66._0_4_ = uVar10;
      auVar66._8_4_ = uVar10;
      auVar66._12_4_ = uVar10;
      auVar66._16_4_ = uVar10;
      auVar66._20_4_ = uVar10;
      auVar66._24_4_ = uVar10;
      auVar66._28_4_ = uVar10;
      vpor_avx2(auVar109,auVar66);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar115 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar93 = vpslld_avx2(auVar94,4);
      vpor_avx2(auVar93,auVar64);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar112 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      vpor_avx2(auVar93,auVar61);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar86 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      vpor_avx2(auVar93,auVar66);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar87 = vgatherdps(ZEXT832(0) << 0x20,auVar51);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar88 = vgatherdps(ZEXT832(0) << 0x20,auVar51);
      auVar85 = vpmulld_avx2(auVar85,auVar66);
      auVar51._0_4_ = auVar85._0_4_ + iVar17;
      auVar51._4_4_ = auVar85._4_4_ + iVar17;
      auVar51._8_4_ = auVar85._8_4_ + iVar17;
      auVar51._12_4_ = auVar85._12_4_ + iVar17;
      auVar51._16_4_ = auVar85._16_4_ + iVar17;
      auVar51._20_4_ = auVar85._20_4_ + iVar17;
      auVar51._24_4_ = auVar85._24_4_ + iVar17;
      auVar51._28_4_ = auVar85._28_4_ + iVar17;
      auVar85 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar89 = vgatherdps(ZEXT832(0) << 0x20,auVar85);
      auVar51 = vpcmpeqd_avx2(auVar51,auVar51);
      auVar64 = vgatherdps(ZEXT832(0),auVar51);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar65 = vgatherdps(ZEXT832(0) << 0x20,auVar51);
      auVar51 = vpmulld_avx2(auVar94,auVar66);
      auVar94._0_4_ = auVar51._0_4_ + iVar17;
      auVar94._4_4_ = auVar51._4_4_ + iVar17;
      auVar94._8_4_ = auVar51._8_4_ + iVar17;
      auVar94._12_4_ = auVar51._12_4_ + iVar17;
      auVar94._16_4_ = auVar51._16_4_ + iVar17;
      auVar94._20_4_ = auVar51._20_4_ + iVar17;
      auVar94._24_4_ = auVar51._24_4_ + iVar17;
      auVar94._28_4_ = auVar51._28_4_ + iVar17;
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar66 = vgatherdps(ZEXT832(0) << 0x20,auVar51);
      auVar94 = vpcmpeqd_avx2(auVar94,auVar94);
      auVar61 = vgatherdps(ZEXT832(0),auVar94);
      auVar94 = vpmovsxbd_avx2(auVar40._0_16_);
      vpslld_avx2(auVar94,2);
      auVar40 = vpcmpeqd_avx2(auVar40,auVar40);
      auVar90 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      auVar40 = vpmovsxbd_avx2(auVar26);
      vpslld_avx2(auVar40,2);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar76 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar69 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
      auVar40 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar128 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar40);
      auVar40 = vsubps_avx(auVar69,auVar128);
      auVar51 = vsubps_avx(auVar131,auVar112);
      auVar85 = vsubps_avx(auVar125,auVar86);
      auVar27._0_4_ =
           auVar85._0_4_ * auVar85._0_4_ +
           auVar40._0_4_ * auVar40._0_4_ + auVar51._0_4_ * auVar51._0_4_;
      auVar27._4_4_ =
           auVar85._4_4_ * auVar85._4_4_ +
           auVar40._4_4_ * auVar40._4_4_ + auVar51._4_4_ * auVar51._4_4_;
      auVar27._8_4_ =
           auVar85._8_4_ * auVar85._8_4_ +
           auVar40._8_4_ * auVar40._8_4_ + auVar51._8_4_ * auVar51._8_4_;
      auVar27._12_4_ =
           auVar85._12_4_ * auVar85._12_4_ +
           auVar40._12_4_ * auVar40._12_4_ + auVar51._12_4_ * auVar51._12_4_;
      auVar27._16_4_ =
           auVar85._16_4_ * auVar85._16_4_ +
           auVar40._16_4_ * auVar40._16_4_ + auVar51._16_4_ * auVar51._16_4_;
      auVar27._20_4_ =
           auVar85._20_4_ * auVar85._20_4_ +
           auVar40._20_4_ * auVar40._20_4_ + auVar51._20_4_ * auVar51._20_4_;
      auVar27._24_4_ =
           auVar85._24_4_ * auVar85._24_4_ +
           auVar40._24_4_ * auVar40._24_4_ + auVar51._24_4_ * auVar51._24_4_;
      auVar27._28_4_ =
           auVar85._28_4_ * auVar85._28_4_ +
           auVar40._28_4_ * auVar40._28_4_ + auVar51._28_4_ * auVar51._28_4_;
      auVar29 = vsqrtps_avx(auVar27);
      auVar94 = vdivps_avx(auVar40,auVar29);
      auVar51 = vdivps_avx(auVar51,auVar29);
      auVar85 = vdivps_avx(auVar85,auVar29);
      auVar40._4_4_ = uVar8;
      auVar40._0_4_ = uVar8;
      auVar40._8_4_ = uVar8;
      auVar40._12_4_ = uVar8;
      auVar40._16_4_ = uVar8;
      auVar40._20_4_ = uVar8;
      auVar40._24_4_ = uVar8;
      auVar40._28_4_ = uVar8;
      auVar40 = vcmpps_avx(auVar27,auVar40,1);
      auVar77._4_4_ = fVar49;
      auVar77._0_4_ = fVar49;
      auVar77._8_4_ = fVar49;
      auVar77._12_4_ = fVar49;
      auVar77._16_4_ = fVar49;
      auVar77._20_4_ = fVar49;
      auVar77._24_4_ = fVar49;
      auVar77._28_4_ = fVar49;
      auVar94 = vblendvps_avx(auVar94,auVar77,auVar40);
      uVar25 = auVar40._0_4_;
      fVar92 = (float)(~uVar25 & auVar51._0_4_);
      uVar31 = auVar40._4_4_;
      fVar96 = (float)(~uVar31 & auVar51._4_4_);
      uVar32 = auVar40._8_4_;
      fVar97 = (float)(~uVar32 & auVar51._8_4_);
      uVar33 = auVar40._12_4_;
      fVar99 = (float)(~uVar33 & auVar51._12_4_);
      uVar34 = auVar40._16_4_;
      fVar101 = (float)(~uVar34 & auVar51._16_4_);
      uVar35 = auVar40._20_4_;
      fVar103 = (float)(~uVar35 & auVar51._20_4_);
      uVar36 = auVar40._24_4_;
      fVar105 = (float)(~uVar36 & auVar51._24_4_);
      uVar37 = auVar40._28_4_;
      fVar107 = (float)(~uVar37 & auVar51._28_4_);
      fVar48 = (float)(~uVar25 & auVar85._0_4_);
      fVar54 = (float)(~uVar31 & auVar85._4_4_);
      fVar55 = (float)(~uVar32 & auVar85._8_4_);
      fVar56 = (float)(~uVar33 & auVar85._12_4_);
      fVar57 = (float)(~uVar34 & auVar85._16_4_);
      fVar58 = (float)(~uVar35 & auVar85._20_4_);
      fVar59 = (float)(~uVar36 & auVar85._24_4_);
      fVar60 = (float)(~uVar37 & auVar85._28_4_);
      auVar85._0_4_ = ~uVar25 & auVar29._0_4_;
      auVar85._4_4_ = ~uVar31 & auVar29._4_4_;
      auVar85._8_4_ = ~uVar32 & auVar29._8_4_;
      auVar85._12_4_ = ~uVar33 & auVar29._12_4_;
      auVar85._16_4_ = ~uVar34 & auVar29._16_4_;
      auVar85._20_4_ = ~uVar35 & auVar29._20_4_;
      auVar85._24_4_ = ~uVar36 & auVar29._24_4_;
      auVar85._28_4_ = ~uVar37 & auVar29._28_4_;
      uVar13 = uVar14 & 0xffffffff;
      auVar40 = *(undefined1 (*) [32])(param_4 + uVar13);
      auVar85 = vsubps_avx(auVar85,auVar40);
      auVar51 = vdivps_avx(auVar77,auVar40);
      auVar29._4_4_ = uVar7;
      auVar29._0_4_ = uVar7;
      auVar29._8_4_ = uVar7;
      auVar29._12_4_ = uVar7;
      auVar29._16_4_ = uVar7;
      auVar29._20_4_ = uVar7;
      auVar29._24_4_ = uVar7;
      auVar29._28_4_ = uVar7;
      auVar40 = vcmpps_avx(auVar40,auVar29,1);
      auVar40 = vblendvps_avx(auVar51,auVar77,auVar40);
      local_440 = auVar87._0_4_;
      fStack_43c = auVar87._4_4_;
      fStack_438 = auVar87._8_4_;
      fStack_434 = auVar87._12_4_;
      fStack_430 = auVar87._16_4_;
      fStack_42c = auVar87._20_4_;
      fStack_428 = auVar87._24_4_;
      fStack_424 = auVar87._28_4_;
      fVar114 = auVar115._0_4_;
      auVar28._0_4_ = fVar114 + local_440;
      fVar116 = auVar115._4_4_;
      auVar28._4_4_ = fVar116 + fStack_43c;
      fVar117 = auVar115._8_4_;
      auVar28._8_4_ = fVar117 + fStack_438;
      fVar118 = auVar115._12_4_;
      auVar28._12_4_ = fVar118 + fStack_434;
      fVar119 = auVar115._16_4_;
      auVar28._16_4_ = fVar119 + fStack_430;
      fVar120 = auVar115._20_4_;
      auVar28._20_4_ = fVar120 + fStack_42c;
      fVar121 = auVar115._24_4_;
      auVar28._24_4_ = fVar121 + fStack_428;
      fVar122 = auVar115._28_4_;
      auVar28._28_4_ = fVar122 + fStack_424;
      auVar51 = vdivps_avx(auVar90,auVar28);
      auVar51 = vsqrtps_avx(auVar51);
      auVar29 = vsubps_avx(auVar69,auVar88);
      auVar29 = vsubps_avx(auVar29,auVar128);
      local_400 = auVar65._0_4_;
      fStack_3fc = auVar65._4_4_;
      fStack_3f8 = auVar65._8_4_;
      fStack_3f4 = auVar65._12_4_;
      fStack_3f0 = auVar65._16_4_;
      fStack_3ec = auVar65._20_4_;
      fStack_3e8 = auVar65._24_4_;
      fStack_3e4 = auVar65._28_4_;
      auVar77 = vsubps_avx(auVar131,auVar89);
      auVar77 = vsubps_avx(auVar77,auVar112);
      local_1e0 = auVar66._0_4_;
      fStack_1dc = auVar66._4_4_;
      fStack_1d8 = auVar66._8_4_;
      fStack_1d4 = auVar66._12_4_;
      fStack_1d0 = auVar66._16_4_;
      fStack_1cc = auVar66._20_4_;
      fStack_1c8 = auVar66._24_4_;
      fStack_1c4 = auVar66._28_4_;
      auVar66 = vsubps_avx(auVar125,auVar64);
      auVar66 = vsubps_avx(auVar66,auVar86);
      local_200 = auVar61._0_4_;
      fStack_1fc = auVar61._4_4_;
      fStack_1f8 = auVar61._8_4_;
      fStack_1f4 = auVar61._12_4_;
      fStack_1f0 = auVar61._16_4_;
      fStack_1ec = auVar61._20_4_;
      fStack_1e8 = auVar61._24_4_;
      fStack_1e4 = auVar61._28_4_;
      local_220 = auVar94._0_4_;
      fStack_21c = auVar94._4_4_;
      fStack_218 = auVar94._8_4_;
      fStack_214 = auVar94._12_4_;
      fStack_210 = auVar94._16_4_;
      fStack_20c = auVar94._20_4_;
      fStack_208 = auVar94._24_4_;
      fStack_204 = auVar94._28_4_;
      fVar75 = param_6 * param_6 * auVar90._0_4_;
      fVar78 = param_6 * param_6 * auVar90._4_4_;
      fVar79 = param_6 * param_6 * auVar90._8_4_;
      fVar80 = param_6 * param_6 * auVar90._12_4_;
      fVar81 = param_6 * param_6 * auVar90._16_4_;
      fVar82 = param_6 * param_6 * auVar90._20_4_;
      fVar83 = param_6 * param_6 * auVar90._24_4_;
      fVar84 = param_6 * param_6 * auVar90._28_4_;
      fVar38 = param_6 * auVar40._0_4_ * (auVar76._0_4_ + auVar76._0_4_) * auVar51._0_4_;
      fVar41 = param_6 * auVar40._4_4_ * (auVar76._4_4_ + auVar76._4_4_) * auVar51._4_4_;
      fVar42 = param_6 * auVar40._8_4_ * (auVar76._8_4_ + auVar76._8_4_) * auVar51._8_4_;
      fVar43 = param_6 * auVar40._12_4_ * (auVar76._12_4_ + auVar76._12_4_) * auVar51._12_4_;
      fVar44 = param_6 * auVar40._16_4_ * (auVar76._16_4_ + auVar76._16_4_) * auVar51._16_4_;
      fVar45 = param_6 * auVar40._20_4_ * (auVar76._20_4_ + auVar76._20_4_) * auVar51._20_4_;
      fVar46 = param_6 * auVar40._24_4_ * (auVar76._24_4_ + auVar76._24_4_) * auVar51._24_4_;
      fVar47 = param_6 * auVar40._28_4_ * (auVar76._28_4_ + auVar76._28_4_) * auVar51._28_4_;
      pfVar1 = (float *)(param_5 + uVar13);
      fVar98 = *pfVar1;
      fVar100 = pfVar1[1];
      fVar102 = pfVar1[2];
      fVar104 = pfVar1[3];
      fVar106 = pfVar1[4];
      fVar108 = pfVar1[5];
      fVar123 = pfVar1[6];
      fVar126 = pfVar1[7];
      auVar76._0_4_ =
           -(fVar38 * ((auVar66._0_4_ + local_200) * fVar48 +
                      local_220 * (auVar29._0_4_ + local_400) + fVar92 * (auVar77._0_4_ + local_1e0)
                      )) + (-(fVar75 * auVar85._0_4_) - fVar98);
      auVar76._4_4_ =
           -(fVar41 * ((auVar66._4_4_ + fStack_1fc) * fVar54 +
                      fStack_21c * (auVar29._4_4_ + fStack_3fc) +
                      fVar96 * (auVar77._4_4_ + fStack_1dc))) +
           (-(fVar78 * auVar85._4_4_) - fVar100);
      auVar76._8_4_ =
           -(fVar42 * ((auVar66._8_4_ + fStack_1f8) * fVar55 +
                      fStack_218 * (auVar29._8_4_ + fStack_3f8) +
                      fVar97 * (auVar77._8_4_ + fStack_1d8))) +
           (-(fVar79 * auVar85._8_4_) - fVar102);
      auVar76._12_4_ =
           -(fVar43 * ((auVar66._12_4_ + fStack_1f4) * fVar56 +
                      fStack_214 * (auVar29._12_4_ + fStack_3f4) +
                      fVar99 * (auVar77._12_4_ + fStack_1d4))) +
           (-(fVar80 * auVar85._12_4_) - fVar104);
      auVar76._16_4_ =
           -(fVar44 * ((auVar66._16_4_ + fStack_1f0) * fVar57 +
                      fStack_210 * (auVar29._16_4_ + fStack_3f0) +
                      fVar101 * (auVar77._16_4_ + fStack_1d0))) +
           (-(fVar81 * auVar85._16_4_) - fVar106);
      auVar76._20_4_ =
           -(fVar45 * ((auVar66._20_4_ + fStack_1ec) * fVar58 +
                      fStack_20c * (auVar29._20_4_ + fStack_3ec) +
                      fVar103 * (auVar77._20_4_ + fStack_1cc))) +
           (-(fVar82 * auVar85._20_4_) - fVar108);
      auVar76._24_4_ =
           -(fVar46 * ((auVar66._24_4_ + fStack_1e8) * fVar59 +
                      fStack_208 * (auVar29._24_4_ + fStack_3e8) +
                      fVar105 * (auVar77._24_4_ + fStack_1c8))) +
           (-(fVar83 * auVar85._24_4_) - fVar123);
      auVar76._28_4_ =
           -(fVar47 * ((auVar66._28_4_ + fStack_1e4) * fVar60 +
                      fStack_204 * (auVar29._28_4_ + fStack_3e4) +
                      fVar107 * (auVar77._28_4_ + fStack_1c4))) +
           (-(fVar84 * auVar85._28_4_) - fVar126);
      auVar65._0_4_ = auVar28._0_4_ * (fVar75 + fVar38) + fVar49;
      auVar65._4_4_ = auVar28._4_4_ * (fVar78 + fVar41) + fVar49;
      auVar65._8_4_ = auVar28._8_4_ * (fVar79 + fVar42) + fVar49;
      auVar65._12_4_ = auVar28._12_4_ * (fVar80 + fVar43) + fVar49;
      auVar65._16_4_ = auVar28._16_4_ * (fVar81 + fVar44) + fVar49;
      auVar65._20_4_ = auVar28._20_4_ * (fVar82 + fVar45) + fVar49;
      auVar65._24_4_ = auVar28._24_4_ * (fVar83 + fVar46) + fVar49;
      auVar65._28_4_ = auVar28._28_4_ * (fVar84 + fVar47) + fVar49;
      auVar40 = vdivps_avx(auVar76,auVar65);
      in_ZMM4 = ZEXT3264(auVar40);
      fVar38 = auVar40._0_4_;
      fVar41 = auVar40._4_4_;
      fVar42 = auVar40._8_4_;
      fVar43 = auVar40._12_4_;
      fVar44 = auVar40._16_4_;
      fVar45 = auVar40._20_4_;
      fVar46 = auVar40._24_4_;
      fVar47 = auVar40._28_4_;
      auVar67._0_4_ = fVar114 * local_220 * fVar38 + auVar69._0_4_;
      auVar67._4_4_ = fVar116 * fStack_21c * fVar41 + auVar69._4_4_;
      auVar67._8_4_ = fVar117 * fStack_218 * fVar42 + auVar69._8_4_;
      auVar67._12_4_ = fVar118 * fStack_214 * fVar43 + auVar69._12_4_;
      auVar88._16_4_ = fVar119 * fStack_210 * fVar44 + auVar69._16_4_;
      auVar88._0_16_ = auVar67;
      auVar88._20_4_ = fVar120 * fStack_20c * fVar45 + auVar69._20_4_;
      auVar88._24_4_ = fVar121 * fStack_208 * fVar46 + auVar69._24_4_;
      auVar88._28_4_ = fVar122 * fStack_204 * fVar47 + auVar69._28_4_;
      lVar16 = (longlong)auVar109._0_4_;
      *(float *)(param_1 + lVar16) = auVar67._0_4_;
      lVar15 = (longlong)auVar109._4_4_;
      uVar6 = vextractps_avx(auVar67,1);
      *(undefined4 *)(param_1 + lVar15) = uVar6;
      lVar23 = (longlong)auVar109._8_4_;
      uVar6 = vextractps_avx(auVar67,2);
      *(undefined4 *)(param_1 + lVar23) = uVar6;
      lVar21 = (longlong)auVar109._12_4_;
      uVar6 = vextractps_avx(auVar67,3);
      *(undefined4 *)(param_1 + lVar21) = uVar6;
      lVar24 = (longlong)auVar109._16_4_;
      auVar26 = auVar88._16_16_;
      *(float *)(param_1 + lVar24) = auVar88._16_4_;
      lVar20 = (longlong)auVar109._20_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + lVar20) = uVar6;
      lVar22 = (longlong)auVar109._24_4_;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + lVar22) = uVar6;
      lVar19 = (longlong)auVar109._28_4_;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + lVar19) = uVar6;
      fVar92 = fVar38 * fVar92;
      fVar96 = fVar41 * fVar96;
      fVar97 = fVar42 * fVar97;
      fVar99 = fVar43 * fVar99;
      fVar101 = fVar44 * fVar101;
      fVar103 = fVar45 * fVar103;
      fVar105 = fVar46 * fVar105;
      fVar107 = fVar47 * fVar107;
      auVar129._0_4_ = fVar114 * fVar92 + auVar131._0_4_;
      auVar129._4_4_ = fVar116 * fVar96 + auVar131._4_4_;
      auVar129._8_4_ = fVar117 * fVar97 + auVar131._8_4_;
      auVar129._12_4_ = fVar118 * fVar99 + auVar131._12_4_;
      auVar70._16_4_ = fVar119 * fVar101 + auVar131._16_4_;
      auVar70._0_16_ = auVar129;
      auVar70._20_4_ = fVar120 * fVar103 + auVar131._20_4_;
      auVar70._24_4_ = fVar121 * fVar105 + auVar131._24_4_;
      auVar70._28_4_ = fVar122 * fVar107 + auVar131._28_4_;
      *(float *)(param_1 + 4 + lVar16) = auVar129._0_4_;
      uVar6 = vextractps_avx(auVar129,1);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar129,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar129,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar6;
      auVar26 = auVar70._16_16_;
      *(float *)(param_1 + 4 + lVar24) = auVar70._16_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar6;
      fVar48 = fVar38 * fVar48;
      fVar54 = fVar41 * fVar54;
      fVar55 = fVar42 * fVar55;
      fVar56 = fVar43 * fVar56;
      fVar57 = fVar44 * fVar57;
      fVar58 = fVar45 * fVar58;
      fVar59 = fVar46 * fVar59;
      fVar60 = fVar47 * fVar60;
      auVar124._0_4_ = fVar114 * fVar48 + auVar125._0_4_;
      auVar124._4_4_ = fVar116 * fVar54 + auVar125._4_4_;
      auVar124._8_4_ = fVar117 * fVar55 + auVar125._8_4_;
      auVar124._12_4_ = fVar118 * fVar56 + auVar125._12_4_;
      auVar90._16_4_ = fVar119 * fVar57 + auVar125._16_4_;
      auVar90._0_16_ = auVar124;
      auVar90._20_4_ = fVar120 * fVar58 + auVar125._20_4_;
      auVar90._24_4_ = fVar121 * fVar59 + auVar125._24_4_;
      auVar90._28_4_ = fVar122 * fVar60 + auVar125._28_4_;
      *(float *)(param_1 + 8 + lVar16) = auVar124._0_4_;
      uVar6 = vextractps_avx(auVar124,1);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar124,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar124,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar6;
      auVar26 = auVar90._16_16_;
      *(float *)(param_1 + 8 + lVar24) = auVar90._16_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar6;
      *(float *)(param_1 + 0xc + lVar16) = fVar114;
      auVar26 = auVar115._0_16_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar6;
      auVar26 = auVar115._16_16_;
      *(float *)(param_1 + 0xc + lVar24) = fVar119;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar6;
      auVar127._0_4_ = -(local_440 * local_220 * fVar38) + auVar128._0_4_;
      auVar127._4_4_ = -(fStack_43c * fStack_21c * fVar41) + auVar128._4_4_;
      auVar127._8_4_ = -(fStack_438 * fStack_218 * fVar42) + auVar128._8_4_;
      auVar127._12_4_ = -(fStack_434 * fStack_214 * fVar43) + auVar128._12_4_;
      auVar109._16_4_ = -(fStack_430 * fStack_210 * fVar44) + auVar128._16_4_;
      auVar109._0_16_ = auVar127;
      auVar109._20_4_ = -(fStack_42c * fStack_20c * fVar45) + auVar128._20_4_;
      auVar109._24_4_ = -(fStack_428 * fStack_208 * fVar46) + auVar128._24_4_;
      auVar109._28_4_ = -(fStack_424 * fStack_204 * fVar47) + auVar128._28_4_;
      local_380 = auVar93._0_4_;
      iStack_37c = auVar93._4_4_;
      iStack_378 = auVar93._8_4_;
      iStack_374 = auVar93._12_4_;
      iStack_370 = auVar93._16_4_;
      iStack_36c = auVar93._20_4_;
      iStack_368 = auVar93._24_4_;
      iStack_364 = auVar93._28_4_;
      lVar16 = (longlong)local_380;
      *(float *)(param_1 + lVar16) = auVar127._0_4_;
      lVar15 = (longlong)iStack_37c;
      uVar6 = vextractps_avx(auVar127,1);
      *(undefined4 *)(param_1 + lVar15) = uVar6;
      lVar23 = (longlong)iStack_378;
      uVar6 = vextractps_avx(auVar127,2);
      *(undefined4 *)(param_1 + lVar23) = uVar6;
      lVar21 = (longlong)iStack_374;
      uVar6 = vextractps_avx(auVar127,3);
      *(undefined4 *)(param_1 + lVar21) = uVar6;
      lVar24 = (longlong)iStack_370;
      auVar26 = auVar109._16_16_;
      *(float *)(param_1 + lVar24) = auVar109._16_4_;
      lVar20 = (longlong)iStack_36c;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + lVar20) = uVar6;
      lVar22 = (longlong)iStack_368;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + lVar22) = uVar6;
      lVar19 = (longlong)iStack_364;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + lVar19) = uVar6;
      local_420 = auVar112._0_4_;
      fStack_41c = auVar112._4_4_;
      fStack_418 = auVar112._8_4_;
      fStack_414 = auVar112._12_4_;
      fStack_410 = auVar112._16_4_;
      fStack_40c = auVar112._20_4_;
      fStack_408 = auVar112._24_4_;
      fStack_404 = auVar112._28_4_;
      auVar68._0_4_ = -(local_440 * fVar92) + local_420;
      auVar68._4_4_ = -(fStack_43c * fVar96) + fStack_41c;
      auVar68._8_4_ = -(fStack_438 * fVar97) + fStack_418;
      auVar68._12_4_ = -(fStack_434 * fVar99) + fStack_414;
      auVar89._16_4_ = -(fStack_430 * fVar101) + fStack_410;
      auVar89._0_16_ = auVar68;
      auVar89._20_4_ = -(fStack_42c * fVar103) + fStack_40c;
      auVar89._24_4_ = -(fStack_428 * fVar105) + fStack_408;
      auVar89._28_4_ = -(fStack_424 * fVar107) + fStack_404;
      *(float *)(param_1 + 4 + lVar16) = auVar68._0_4_;
      uVar6 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar6;
      auVar26 = auVar89._16_16_;
      *(float *)(param_1 + 4 + lVar24) = auVar89._16_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar6;
      local_480 = auVar86._0_4_;
      fStack_47c = auVar86._4_4_;
      fStack_478 = auVar86._8_4_;
      fStack_474 = auVar86._12_4_;
      fStack_470 = auVar86._16_4_;
      fStack_46c = auVar86._20_4_;
      fStack_468 = auVar86._24_4_;
      fStack_464 = auVar86._28_4_;
      auVar39._0_4_ = -(local_440 * fVar48) + local_480;
      auVar39._4_4_ = -(fStack_43c * fVar54) + fStack_47c;
      auVar39._8_4_ = -(fStack_438 * fVar55) + fStack_478;
      auVar39._12_4_ = -(fStack_434 * fVar56) + fStack_474;
      auVar69._16_4_ = -(fStack_430 * fVar57) + fStack_470;
      auVar69._0_16_ = auVar39;
      auVar69._20_4_ = -(fStack_42c * fVar58) + fStack_46c;
      auVar69._24_4_ = -(fStack_428 * fVar59) + fStack_468;
      auVar69._28_4_ = -(fStack_424 * fVar60) + fStack_464;
      *(float *)(param_1 + 8 + lVar16) = auVar39._0_4_;
      uVar6 = vextractps_avx(auVar39,1);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar39,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar39,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar6;
      auVar26 = auVar69._16_16_;
      *(float *)(param_1 + 8 + lVar24) = auVar69._16_4_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar6;
      pfVar1 = (float *)(param_5 + uVar13);
      *pfVar1 = fVar98 + fVar38;
      pfVar1[1] = fVar100 + fVar41;
      pfVar1[2] = fVar102 + fVar42;
      pfVar1[3] = fVar104 + fVar43;
      pfVar1[4] = fVar106 + fVar44;
      pfVar1[5] = fVar108 + fVar45;
      pfVar1[6] = fVar123 + fVar46;
      pfVar1[7] = fVar126 + fVar47;
      *(float *)(param_1 + 0xc + lVar16) = local_440;
      auVar26 = auVar87._0_16_;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar6;
      auVar26 = auVar87._16_16_;
      *(float *)(param_1 + 0xc + lVar24) = fStack_430;
      uVar6 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar6;
      uVar6 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar6;
      uVar6 = vextractps_avx(auVar26,3);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar6;
      uVar18 = uVar18 + 8;
      uVar14 = uVar14 + 0x20;
    } while ((int)uVar18 < (int)(uVar12 & 0xfffffff8));
    if ((int)param_13 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar86._4_4_ = iVar17;
  auVar86._0_4_ = iVar17;
  auVar86._8_4_ = iVar17;
  auVar86._12_4_ = iVar17;
  auVar86._16_4_ = iVar17;
  auVar86._20_4_ = iVar17;
  auVar86._24_4_ = iVar17;
  auVar86._28_4_ = iVar17;
  auVar40 = vpor_avx2(auVar86,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar87._4_4_ = param_13;
  auVar87._0_4_ = param_13;
  auVar87._8_4_ = param_13;
  auVar87._12_4_ = param_13;
  auVar87._16_4_ = param_13;
  auVar87._20_4_ = param_13;
  auVar87._24_4_ = param_13;
  auVar87._28_4_ = param_13;
  auVar40 = vpcmpgtd_avx2(auVar87,auVar40);
  uVar18 = uVar18 & 0xffffffff;
  pauVar2 = (undefined1 (*) [32])(param_3 + uVar18 * 8);
  uVar12 = vmovmskps_avx(auVar40);
  bVar11 = (byte)uVar12;
  if (uVar12 == 0xff) {
    auVar94 = *pauVar2;
    auVar51 = pauVar2[1];
    auVar85 = vshufps_avx(auVar94,auVar51,0x88);
    auVar85 = vpermpd_avx2(auVar85,0xd8);
    auVar94 = vshufps_avx(auVar94,auVar51,0xdd);
    auVar94 = vpermpd_avx2(auVar94,0xd8);
    auVar50 = ZEXT816(0) << 0x20;
  }
  else {
    auVar85 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar40);
    auVar94 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar40);
    auVar50._0_12_ = ZEXT812(0);
    auVar50._12_4_ = 0;
  }
  uVar14 = 0;
  if ((param_7 & 1) == 0) goto LAB_14091d10d;
  if ((~bVar11 & 0x81) == 0) {
    uVar14 = *(ulonglong *)(param_8 + uVar18);
    goto LAB_14091d10d;
  }
  puVar4 = (undefined1 *)(param_8 + uVar18);
  if ((uVar12 & 1) == 0) {
    if ((uVar12 & 2) == 0) goto LAB_14091d0cc;
LAB_14091e06c:
    auVar26 = vpinsrb_avx(auVar50,(uint)(byte)puVar4[1],1);
    auVar50 = vpblendw_avx(auVar26,auVar50,0xe);
    if ((uVar12 & 4) != 0) goto LAB_14091e086;
LAB_14091d0d4:
    if ((uVar12 & 8) == 0) goto LAB_14091d0dc;
LAB_14091e0b1:
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048080030280020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[3],3);
    auVar50 = vpblendd_avx2(auVar26,auVar50,2);
    if ((uVar12 & 0x10) != 0) goto LAB_14091e0d4;
LAB_14091d0e4:
    if ((uVar12 & 0x20) == 0) goto LAB_14091d0ec;
LAB_14091e103:
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048080030403020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[5],5);
    auVar50 = vpblendw_avx(auVar26,auVar50,8);
    if ((uVar12 & 0x40) != 0) goto LAB_14091e126;
LAB_14091d0f4:
    uVar14 = auVar50._0_8_;
  }
  else {
    uVar3 = *puVar4;
    auVar50[1] = uVar3;
    auVar50[0] = uVar3;
    auVar50[2] = uVar3;
    auVar50[3] = uVar3;
    auVar50[4] = uVar3;
    auVar50[5] = uVar3;
    auVar50[6] = uVar3;
    auVar50[7] = uVar3;
    auVar50[8] = uVar3;
    auVar50[9] = uVar3;
    auVar50[10] = uVar3;
    auVar50[0xb] = uVar3;
    auVar50[0xc] = uVar3;
    auVar50[0xd] = uVar3;
    auVar50[0xe] = uVar3;
    auVar50[0xf] = uVar3;
    if ((uVar12 & 2) != 0) goto LAB_14091e06c;
LAB_14091d0cc:
    if ((uVar12 & 4) == 0) goto LAB_14091d0d4;
LAB_14091e086:
    auVar26 = vpmovzxwd_avx(auVar50);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[2],2);
    auVar26 = vpinsrb_avx(auVar26,(uint)auVar50[3],3);
    auVar50 = vpblendd_avx2(auVar26,auVar50,2);
    if ((uVar12 & 8) != 0) goto LAB_14091e0b1;
LAB_14091d0dc:
    if ((uVar12 & 0x10) == 0) goto LAB_14091d0e4;
LAB_14091e0d4:
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048080030203020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[4],4);
    auVar26 = vpinsrb_avx(auVar26,(uint)auVar50[5],5);
    auVar50 = vpblendw_avx(auVar26,auVar50,8);
    if ((uVar12 & 0x20) != 0) goto LAB_14091e103;
LAB_14091d0ec:
    if ((uVar12 & 0x40) == 0) goto LAB_14091d0f4;
LAB_14091e126:
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048080050403020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[6],6);
    auVar50 = vpinsrb_avx(auVar26,(uint)auVar50[7],7);
    uVar14 = auVar50._0_8_;
  }
  if ((uVar12 & 0x80) != 0) {
    auVar26 = vpshufb_avx(auVar50,___xmm_80800706808005048006050403020100);
    auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[7],7);
    uVar14 = auVar26._0_8_;
  }
LAB_14091d10d:
  auVar63 = SUB6416(ZEXT864(0),0);
  if ((param_10 & 1) != 0) {
    if ((~bVar11 & 0x81) == 0) {
      auVar63._8_8_ = 0;
      auVar63._0_8_ = *(ulonglong *)(param_11 + uVar18);
    }
    else {
      puVar4 = (undefined1 *)(param_11 + uVar18);
      if ((uVar12 & 1) != 0) {
        uVar3 = *puVar4;
        auVar63[1] = uVar3;
        auVar63[0] = uVar3;
        auVar63[2] = uVar3;
        auVar63[3] = uVar3;
        auVar63[4] = uVar3;
        auVar63[5] = uVar3;
        auVar63[6] = uVar3;
        auVar63[7] = uVar3;
        auVar63[8] = uVar3;
        auVar63[9] = uVar3;
        auVar63[10] = uVar3;
        auVar63[0xb] = uVar3;
        auVar63[0xc] = uVar3;
        auVar63[0xd] = uVar3;
        auVar63[0xe] = uVar3;
        auVar63[0xf] = uVar3;
      }
      if ((uVar12 & 2) != 0) {
        auVar26 = vpinsrb_avx(auVar63,(uint)(byte)puVar4[1],1);
        auVar63 = vpblendw_avx(auVar26,auVar63,0xe);
      }
      if ((uVar12 & 4) != 0) {
        auVar26 = vpmovzxwd_avx(auVar63);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[2],2);
        auVar26 = vpinsrb_avx(auVar26,(uint)auVar63[3],3);
        auVar63 = vpblendd_avx2(auVar26,auVar63,2);
      }
      if ((uVar12 & 8) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048080030280020100);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[3],3);
        auVar63 = vpblendd_avx2(auVar26,auVar63,2);
      }
      if ((uVar12 & 0x10) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048080030203020100);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[4],4);
        auVar26 = vpinsrb_avx(auVar26,(uint)auVar63[5],5);
        auVar63 = vpblendw_avx(auVar26,auVar63,8);
      }
      if ((uVar12 & 0x20) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048080030403020100);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[5],5);
        auVar63 = vpblendw_avx(auVar26,auVar63,8);
      }
      if ((uVar12 & 0x40) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048080050403020100);
        auVar26 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[6],6);
        auVar63 = vpinsrb_avx(auVar26,(uint)auVar63[7],7);
      }
      if ((uVar12 & 0x80) != 0) {
        auVar26 = vpshufb_avx(auVar63,___xmm_80800706808005048006050403020100);
        auVar63 = vpinsrb_avx(auVar26,(uint)(byte)puVar4[7],7);
      }
    }
  }
  auVar70 = vpslld_avx2(auVar85,4);
  auVar110._4_4_ = __real_00000004;
  auVar110._0_4_ = __real_00000004;
  auVar110._8_4_ = __real_00000004;
  auVar110._12_4_ = __real_00000004;
  auVar110._16_4_ = __real_00000004;
  auVar110._20_4_ = __real_00000004;
  auVar110._24_4_ = __real_00000004;
  auVar110._28_4_ = __real_00000004;
  vpor_avx2(auVar110,auVar70);
  auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
  auVar131._4_4_ = __real_00000008;
  auVar131._0_4_ = __real_00000008;
  auVar131._8_4_ = __real_00000008;
  auVar131._12_4_ = __real_00000008;
  auVar131._16_4_ = __real_00000008;
  auVar131._20_4_ = __real_00000008;
  auVar131._24_4_ = __real_00000008;
  auVar131._28_4_ = __real_00000008;
  vpor_avx2(auVar70,auVar131);
  auVar77 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar113._4_4_ = __real_0000000c;
  auVar113._0_4_ = __real_0000000c;
  auVar113._8_4_ = __real_0000000c;
  auVar113._12_4_ = __real_0000000c;
  auVar113._16_4_ = __real_0000000c;
  auVar113._20_4_ = __real_0000000c;
  auVar113._24_4_ = __real_0000000c;
  auVar113._28_4_ = __real_0000000c;
  vpor_avx2(auVar113,auVar70);
  auVar71 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar40);
  auVar72 = vpslld_avx2(auVar94,4);
  vpor_avx2(auVar110,auVar72);
  auVar61 = vgatherdps(ZEXT832(0),auVar40);
  vpor_avx2(auVar72,auVar131);
  auVar64 = vgatherdps(ZEXT832(0),auVar40);
  vpor_avx2(auVar113,auVar72);
  auVar109 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar51 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar66 = vgatherdps(ZEXT832(0),auVar40);
  auVar51 = vmaskmovps_avx(auVar40,auVar51);
  auVar29 = vmaskmovps_avx(auVar40,auVar29);
  auVar77 = vmaskmovps_avx(auVar40,auVar77);
  auVar66 = vmaskmovps_avx(auVar40,auVar66);
  auVar61 = vmaskmovps_avx(auVar40,auVar61);
  auVar64 = vmaskmovps_avx(auVar40,auVar64);
  vpmulld_avx2(auVar85,auVar113);
  auVar128 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar88 = vgatherdps(ZEXT832(0),auVar40);
  auVar89 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar86 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  vpmulld_avx2(auVar94,auVar113);
  auVar87 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar90 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar14;
  auVar94 = vpmovsxbd_avx2(auVar5);
  vpslld_avx2(auVar94,2);
  auVar131 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
  auVar94 = vpmovsxbd_avx2(auVar63);
  vpslld_avx2(auVar94,2);
  auVar76 = vgatherdps(ZEXT832(0),auVar40);
  auVar94 = vsubps_avx(auVar51,auVar66);
  auVar27 = vsubps_avx(auVar29,auVar61);
  auVar65 = vsubps_avx(auVar77,auVar64);
  auVar73._0_4_ =
       auVar65._0_4_ * auVar65._0_4_ + auVar94._0_4_ * auVar94._0_4_ + auVar27._0_4_ * auVar27._0_4_
  ;
  auVar73._4_4_ =
       auVar65._4_4_ * auVar65._4_4_ + auVar94._4_4_ * auVar94._4_4_ + auVar27._4_4_ * auVar27._4_4_
  ;
  auVar73._8_4_ =
       auVar65._8_4_ * auVar65._8_4_ + auVar94._8_4_ * auVar94._8_4_ + auVar27._8_4_ * auVar27._8_4_
  ;
  auVar73._12_4_ =
       auVar65._12_4_ * auVar65._12_4_ +
       auVar94._12_4_ * auVar94._12_4_ + auVar27._12_4_ * auVar27._12_4_;
  auVar73._16_4_ =
       auVar65._16_4_ * auVar65._16_4_ +
       auVar94._16_4_ * auVar94._16_4_ + auVar27._16_4_ * auVar27._16_4_;
  auVar73._20_4_ =
       auVar65._20_4_ * auVar65._20_4_ +
       auVar94._20_4_ * auVar94._20_4_ + auVar27._20_4_ * auVar27._20_4_;
  auVar73._24_4_ =
       auVar65._24_4_ * auVar65._24_4_ +
       auVar94._24_4_ * auVar94._24_4_ + auVar27._24_4_ * auVar27._24_4_;
  auVar73._28_4_ =
       auVar65._28_4_ * auVar65._28_4_ +
       auVar94._28_4_ * auVar94._28_4_ + auVar27._28_4_ * auVar27._28_4_;
  auVar28 = vsqrtps_avx(auVar73);
  auVar94 = vdivps_avx(auVar94,auVar28);
  auVar52._4_4_ = __real_38d1b717;
  auVar52._0_4_ = __real_38d1b717;
  auVar52._8_4_ = __real_38d1b717;
  auVar52._12_4_ = __real_38d1b717;
  auVar52._16_4_ = __real_38d1b717;
  auVar52._20_4_ = __real_38d1b717;
  auVar52._24_4_ = __real_38d1b717;
  auVar52._28_4_ = __real_38d1b717;
  auVar85 = vcmpps_avx(auVar73,auVar52,1);
  auVar74._4_4_ = __real_3f800000;
  auVar74._0_4_ = __real_3f800000;
  auVar74._8_4_ = __real_3f800000;
  auVar74._12_4_ = __real_3f800000;
  auVar74._16_4_ = __real_3f800000;
  auVar74._20_4_ = __real_3f800000;
  auVar74._24_4_ = __real_3f800000;
  auVar74._28_4_ = __real_3f800000;
  auVar94 = vblendvps_avx(auVar94,auVar74,auVar85);
  auVar94 = vmaskmovps_avx(auVar40,auVar94);
  auVar27 = vdivps_avx(auVar27,auVar28);
  uVar25 = auVar85._0_4_;
  auVar93._0_4_ = ~uVar25 & auVar27._0_4_;
  uVar31 = auVar85._4_4_;
  auVar93._4_4_ = ~uVar31 & auVar27._4_4_;
  uVar32 = auVar85._8_4_;
  auVar93._8_4_ = ~uVar32 & auVar27._8_4_;
  uVar33 = auVar85._12_4_;
  auVar93._12_4_ = ~uVar33 & auVar27._12_4_;
  uVar34 = auVar85._16_4_;
  auVar93._16_4_ = ~uVar34 & auVar27._16_4_;
  uVar35 = auVar85._20_4_;
  auVar93._20_4_ = ~uVar35 & auVar27._20_4_;
  uVar36 = auVar85._24_4_;
  auVar93._24_4_ = ~uVar36 & auVar27._24_4_;
  uVar37 = auVar85._28_4_;
  auVar93._28_4_ = ~uVar37 & auVar27._28_4_;
  auVar85 = vmaskmovps_avx(auVar40,auVar93);
  auVar27 = vdivps_avx(auVar65,auVar28);
  auVar112._0_4_ = ~uVar25 & auVar27._0_4_;
  auVar112._4_4_ = ~uVar31 & auVar27._4_4_;
  auVar112._8_4_ = ~uVar32 & auVar27._8_4_;
  auVar112._12_4_ = ~uVar33 & auVar27._12_4_;
  auVar112._16_4_ = ~uVar34 & auVar27._16_4_;
  auVar112._20_4_ = ~uVar35 & auVar27._20_4_;
  auVar112._24_4_ = ~uVar36 & auVar27._24_4_;
  auVar112._28_4_ = ~uVar37 & auVar27._28_4_;
  auVar27 = vmaskmovps_avx(auVar40,auVar112);
  auVar115._0_4_ = ~uVar25 & auVar28._0_4_;
  auVar115._4_4_ = ~uVar31 & auVar28._4_4_;
  auVar115._8_4_ = ~uVar32 & auVar28._8_4_;
  auVar115._12_4_ = ~uVar33 & auVar28._12_4_;
  auVar115._16_4_ = ~uVar34 & auVar28._16_4_;
  auVar115._20_4_ = ~uVar35 & auVar28._20_4_;
  auVar115._24_4_ = ~uVar36 & auVar28._24_4_;
  auVar115._28_4_ = ~uVar37 & auVar28._28_4_;
  lVar15 = (longlong)(iVar17 << 2);
  auVar28 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_4 + lVar15));
  auVar69 = vsubps_avx(auVar115,auVar28);
  auVar65 = vdivps_avx(auVar74,auVar28);
  auVar111._4_4_ = __real_322bcc77;
  auVar111._0_4_ = __real_322bcc77;
  auVar111._8_4_ = __real_322bcc77;
  auVar111._12_4_ = __real_322bcc77;
  auVar111._16_4_ = __real_322bcc77;
  auVar111._20_4_ = __real_322bcc77;
  auVar111._24_4_ = __real_322bcc77;
  auVar111._28_4_ = __real_322bcc77;
  auVar28 = vcmpps_avx(auVar28,auVar111,1);
  auVar28 = vblendvps_avx(auVar65,auVar74,auVar28);
  local_440 = auVar109._0_4_;
  fStack_43c = auVar109._4_4_;
  fStack_438 = auVar109._8_4_;
  fStack_434 = auVar109._12_4_;
  fStack_430 = auVar109._16_4_;
  fStack_42c = auVar109._20_4_;
  fStack_428 = auVar109._24_4_;
  fStack_424 = auVar109._28_4_;
  fVar123 = auVar71._0_4_;
  auVar125._0_4_ = fVar123 + local_440;
  fVar126 = auVar71._4_4_;
  auVar125._4_4_ = fVar126 + fStack_43c;
  fVar48 = auVar71._8_4_;
  auVar125._8_4_ = fVar48 + fStack_438;
  fVar54 = auVar71._12_4_;
  auVar125._12_4_ = fVar54 + fStack_434;
  fVar55 = auVar71._16_4_;
  auVar125._16_4_ = fVar55 + fStack_430;
  fVar56 = auVar71._20_4_;
  auVar125._20_4_ = fVar56 + fStack_42c;
  fVar57 = auVar71._24_4_;
  auVar125._24_4_ = fVar57 + fStack_428;
  fVar58 = auVar71._28_4_;
  auVar125._28_4_ = fVar58 + fStack_424;
  auVar65 = vdivps_avx(auVar131,auVar125);
  auVar65 = vsqrtps_avx(auVar65);
  fVar46 = auVar131._0_4_ * param_6 * param_6;
  fVar47 = auVar131._4_4_ * param_6 * param_6;
  fVar98 = auVar131._8_4_ * param_6 * param_6;
  fVar100 = auVar131._12_4_ * param_6 * param_6;
  fVar102 = auVar131._16_4_ * param_6 * param_6;
  fVar104 = auVar131._20_4_ * param_6 * param_6;
  fVar106 = auVar131._24_4_ * param_6 * param_6;
  fVar108 = auVar131._28_4_ * param_6 * param_6;
  fVar49 = param_6 * auVar28._0_4_ * auVar65._0_4_ * (auVar76._0_4_ + auVar76._0_4_);
  fVar38 = param_6 * auVar28._4_4_ * auVar65._4_4_ * (auVar76._4_4_ + auVar76._4_4_);
  fVar41 = param_6 * auVar28._8_4_ * auVar65._8_4_ * (auVar76._8_4_ + auVar76._8_4_);
  fVar42 = param_6 * auVar28._12_4_ * auVar65._12_4_ * (auVar76._12_4_ + auVar76._12_4_);
  fVar43 = param_6 * auVar28._16_4_ * auVar65._16_4_ * (auVar76._16_4_ + auVar76._16_4_);
  fVar44 = param_6 * auVar28._20_4_ * auVar65._20_4_ * (auVar76._20_4_ + auVar76._20_4_);
  fVar45 = param_6 * auVar28._24_4_ * auVar65._24_4_ * (auVar76._24_4_ + auVar76._24_4_);
  param_6 = param_6 * auVar28._28_4_ * auVar65._28_4_ * (auVar76._28_4_ + auVar76._28_4_);
  auVar28 = vsubps_avx(auVar51,auVar128);
  auVar28 = vsubps_avx(auVar28,auVar66);
  local_460 = auVar86._0_4_;
  fStack_45c = auVar86._4_4_;
  fStack_458 = auVar86._8_4_;
  fStack_454 = auVar86._12_4_;
  fStack_450 = auVar86._16_4_;
  fStack_44c = auVar86._20_4_;
  fStack_448 = auVar86._24_4_;
  fStack_444 = auVar86._28_4_;
  auVar65 = vsubps_avx(auVar29,auVar88);
  auVar65 = vsubps_avx(auVar65,auVar61);
  local_3a0 = auVar70._0_4_;
  iStack_39c = auVar70._4_4_;
  iStack_398 = auVar70._8_4_;
  iStack_394 = auVar70._12_4_;
  iStack_390 = auVar70._16_4_;
  iStack_38c = auVar70._20_4_;
  iStack_388 = auVar70._24_4_;
  iStack_384 = auVar70._28_4_;
  local_3e0 = auVar87._0_4_;
  fStack_3dc = auVar87._4_4_;
  fStack_3d8 = auVar87._8_4_;
  fStack_3d4 = auVar87._12_4_;
  fStack_3d0 = auVar87._16_4_;
  fStack_3cc = auVar87._20_4_;
  fStack_3c8 = auVar87._24_4_;
  fStack_3c4 = auVar87._28_4_;
  auVar76 = vsubps_avx(auVar77,auVar89);
  auVar76 = vsubps_avx(auVar76,auVar64);
  local_400 = auVar90._0_4_;
  fStack_3fc = auVar90._4_4_;
  fStack_3f8 = auVar90._8_4_;
  fStack_3f4 = auVar90._12_4_;
  fStack_3f0 = auVar90._16_4_;
  fStack_3ec = auVar90._20_4_;
  fStack_3e8 = auVar90._24_4_;
  fStack_3e4 = auVar90._28_4_;
  local_340 = auVar85._0_4_;
  fStack_33c = auVar85._4_4_;
  fStack_338 = auVar85._8_4_;
  fStack_334 = auVar85._12_4_;
  fStack_330 = auVar85._16_4_;
  fStack_32c = auVar85._20_4_;
  fStack_328 = auVar85._24_4_;
  fStack_324 = auVar85._28_4_;
  local_360 = auVar94._0_4_;
  fStack_35c = auVar94._4_4_;
  fStack_358 = auVar94._8_4_;
  fStack_354 = auVar94._12_4_;
  fStack_350 = auVar94._16_4_;
  fStack_34c = auVar94._20_4_;
  fStack_348 = auVar94._24_4_;
  fStack_344 = auVar94._28_4_;
  local_320 = auVar27._0_4_;
  fStack_31c = auVar27._4_4_;
  fStack_318 = auVar27._8_4_;
  fStack_314 = auVar27._12_4_;
  fStack_310 = auVar27._16_4_;
  fStack_30c = auVar27._20_4_;
  fStack_308 = auVar27._24_4_;
  fStack_304 = auVar27._28_4_;
  auVar85 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_5 + lVar15));
  auVar62._0_4_ =
       -(fVar49 * (local_320 * (auVar76._0_4_ + local_400) +
                  local_360 * (auVar28._0_4_ + local_460) + (auVar65._0_4_ + local_3e0) * local_340)
        ) + (-(fVar46 * auVar69._0_4_) - auVar85._0_4_);
  auVar62._4_4_ =
       -(fVar38 * (fStack_31c * (auVar76._4_4_ + fStack_3fc) +
                  fStack_35c * (auVar28._4_4_ + fStack_45c) +
                  (auVar65._4_4_ + fStack_3dc) * fStack_33c)) +
       (-(fVar47 * auVar69._4_4_) - auVar85._4_4_);
  auVar62._8_4_ =
       -(fVar41 * (fStack_318 * (auVar76._8_4_ + fStack_3f8) +
                  fStack_358 * (auVar28._8_4_ + fStack_458) +
                  (auVar65._8_4_ + fStack_3d8) * fStack_338)) +
       (-(fVar98 * auVar69._8_4_) - auVar85._8_4_);
  auVar62._12_4_ =
       -(fVar42 * (fStack_314 * (auVar76._12_4_ + fStack_3f4) +
                  fStack_354 * (auVar28._12_4_ + fStack_454) +
                  (auVar65._12_4_ + fStack_3d4) * fStack_334)) +
       (-(fVar100 * auVar69._12_4_) - auVar85._12_4_);
  auVar62._16_4_ =
       -(fVar43 * (fStack_310 * (auVar76._16_4_ + fStack_3f0) +
                  fStack_350 * (auVar28._16_4_ + fStack_450) +
                  (auVar65._16_4_ + fStack_3d0) * fStack_330)) +
       (-(fVar102 * auVar69._16_4_) - auVar85._16_4_);
  auVar62._20_4_ =
       -(fVar44 * (fStack_30c * (auVar76._20_4_ + fStack_3ec) +
                  fStack_34c * (auVar28._20_4_ + fStack_44c) +
                  (auVar65._20_4_ + fStack_3cc) * fStack_32c)) +
       (-(fVar104 * auVar69._20_4_) - auVar85._20_4_);
  auVar62._24_4_ =
       -(fVar45 * (fStack_308 * (auVar76._24_4_ + fStack_3e8) +
                  fStack_348 * (auVar28._24_4_ + fStack_448) +
                  (auVar65._24_4_ + fStack_3c8) * fStack_328)) +
       (-(fVar106 * auVar69._24_4_) - auVar85._24_4_);
  auVar62._28_4_ =
       -(param_6 *
        (fStack_304 * (auVar76._28_4_ + fStack_3e4) +
        fStack_344 * (auVar28._28_4_ + fStack_444) + (auVar65._28_4_ + fStack_3c4) * fStack_324)) +
       (-(fVar108 * auVar69._28_4_) - auVar85._28_4_);
  auVar53._0_4_ = auVar125._0_4_ * (fVar46 + fVar49) + __real_3f800000;
  auVar53._4_4_ = auVar125._4_4_ * (fVar47 + fVar38) + __real_3f800000;
  auVar53._8_4_ = auVar125._8_4_ * (fVar98 + fVar41) + __real_3f800000;
  auVar53._12_4_ = auVar125._12_4_ * (fVar100 + fVar42) + __real_3f800000;
  auVar53._16_4_ = auVar125._16_4_ * (fVar102 + fVar43) + __real_3f800000;
  auVar53._20_4_ = auVar125._20_4_ * (fVar104 + fVar44) + __real_3f800000;
  auVar53._24_4_ = auVar125._24_4_ * (fVar106 + fVar45) + __real_3f800000;
  auVar53._28_4_ = auVar125._28_4_ * (fVar108 + param_6) + __real_3f800000;
  auVar94 = vdivps_avx(auVar62,auVar53);
  fVar49 = auVar94._0_4_;
  auVar128._0_4_ = fVar49 + auVar85._0_4_;
  fVar38 = auVar94._4_4_;
  auVar128._4_4_ = fVar38 + auVar85._4_4_;
  fVar41 = auVar94._8_4_;
  auVar128._8_4_ = fVar41 + auVar85._8_4_;
  fVar42 = auVar94._12_4_;
  auVar128._12_4_ = fVar42 + auVar85._12_4_;
  fVar43 = auVar94._16_4_;
  auVar128._16_4_ = fVar43 + auVar85._16_4_;
  fVar44 = auVar94._20_4_;
  auVar128._20_4_ = fVar44 + auVar85._20_4_;
  fVar45 = auVar94._24_4_;
  auVar128._24_4_ = fVar45 + auVar85._24_4_;
  fVar46 = auVar94._28_4_;
  auVar128._28_4_ = fVar46 + auVar85._28_4_;
  auVar40 = vmaskmovps_avx(auVar40,auVar128);
  *(undefined1 (*) [32])(param_5 + lVar15) = auVar40;
  local_360 = local_360 * fVar49;
  fStack_35c = fStack_35c * fVar38;
  fStack_358 = fStack_358 * fVar41;
  fStack_354 = fStack_354 * fVar42;
  fStack_350 = fStack_350 * fVar43;
  fStack_34c = fStack_34c * fVar44;
  fStack_348 = fStack_348 * fVar45;
  fStack_344 = fStack_344 * fVar46;
  auVar130._0_4_ = fVar123 * local_360 + auVar51._0_4_;
  auVar130._4_4_ = fVar126 * fStack_35c + auVar51._4_4_;
  auVar130._8_4_ = fVar48 * fStack_358 + auVar51._8_4_;
  auVar130._12_4_ = fVar54 * fStack_354 + auVar51._12_4_;
  auVar132._16_4_ = fVar55 * fStack_350 + auVar51._16_4_;
  auVar132._0_16_ = auVar130;
  auVar132._20_4_ = fVar56 * fStack_34c + auVar51._20_4_;
  auVar132._24_4_ = fVar57 * fStack_348 + auVar51._24_4_;
  auVar132._28_4_ = fVar58 * fStack_344 + auVar51._28_4_;
  if ((uVar12 & 1) != 0) {
    *(float *)(param_1 + local_3a0) = auVar130._0_4_;
  }
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar130,1);
    *(undefined4 *)(param_1 + iStack_39c) = uVar7;
  }
  local_420 = auVar72._0_4_;
  fStack_41c = auVar72._4_4_;
  fStack_418 = auVar72._8_4_;
  fStack_414 = auVar72._12_4_;
  fStack_410 = auVar72._16_4_;
  fStack_40c = auVar72._20_4_;
  fStack_408 = auVar72._24_4_;
  fStack_404 = auVar72._28_4_;
  local_460 = auVar29._0_4_;
  fStack_45c = auVar29._4_4_;
  fStack_458 = auVar29._8_4_;
  fStack_454 = auVar29._12_4_;
  fStack_450 = auVar29._16_4_;
  fStack_44c = auVar29._20_4_;
  fStack_448 = auVar29._24_4_;
  fStack_444 = auVar29._28_4_;
  auVar67 = auVar71._0_16_;
  auVar68 = auVar71._16_16_;
  auVar124 = auVar132._16_16_;
  auVar26 = auVar109._0_16_;
  auVar39 = auVar109._16_16_;
  local_4a0 = auVar66._0_4_;
  fStack_49c = auVar66._4_4_;
  fStack_498 = auVar66._8_4_;
  fStack_494 = auVar66._12_4_;
  fStack_490 = auVar66._16_4_;
  fStack_48c = auVar66._20_4_;
  fStack_488 = auVar66._24_4_;
  fStack_484 = auVar66._28_4_;
  local_480 = auVar61._0_4_;
  fStack_47c = auVar61._4_4_;
  fStack_478 = auVar61._8_4_;
  fStack_474 = auVar61._12_4_;
  fStack_470 = auVar61._16_4_;
  fStack_46c = auVar61._20_4_;
  fStack_468 = auVar61._24_4_;
  fStack_464 = auVar61._28_4_;
  local_4c0 = auVar64._0_4_;
  fStack_4bc = auVar64._4_4_;
  fStack_4b8 = auVar64._8_4_;
  fStack_4b4 = auVar64._12_4_;
  fStack_4b0 = auVar64._16_4_;
  fStack_4ac = auVar64._20_4_;
  fStack_4a8 = auVar64._24_4_;
  fStack_4a4 = auVar64._28_4_;
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar130,2);
    *(undefined4 *)(param_1 + iStack_398) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar130,3);
    *(undefined4 *)(param_1 + iStack_394) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(float *)(param_1 + iStack_390) = auVar132._16_4_;
  }
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + iStack_38c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + iStack_388) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + iStack_384) = uVar7;
    auVar71._0_4_ = fVar123 * fVar49 * local_340 + local_460;
    auVar71._4_4_ = fVar126 * fVar38 * fStack_33c + fStack_45c;
    auVar71._8_4_ = fVar48 * fVar41 * fStack_338 + fStack_458;
    auVar71._12_4_ = fVar54 * fVar42 * fStack_334 + fStack_454;
    auVar71._16_4_ = fVar55 * fVar43 * fStack_330 + fStack_450;
    auVar71._20_4_ = fVar56 * fVar44 * fStack_32c + fStack_44c;
    auVar71._24_4_ = fVar57 * fVar45 * fStack_328 + fStack_448;
    auVar71._28_4_ = fVar58 * fVar46 * fStack_324 + fStack_444;
  }
  else {
    auVar71._0_4_ = fVar123 * fVar49 * local_340 + local_460;
    auVar71._4_4_ = fVar126 * fVar38 * fStack_33c + fStack_45c;
    auVar71._8_4_ = fVar48 * fVar41 * fStack_338 + fStack_458;
    auVar71._12_4_ = fVar54 * fVar42 * fStack_334 + fStack_454;
    auVar71._16_4_ = fVar55 * fVar43 * fStack_330 + fStack_450;
    auVar71._20_4_ = fVar56 * fVar44 * fStack_32c + fStack_44c;
    auVar71._24_4_ = fVar57 * fVar45 * fStack_328 + fStack_448;
    auVar71._28_4_ = fVar58 * fVar46 * fStack_324 + fStack_444;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_3a0) = auVar71._0_4_;
  }
  auVar124 = auVar71._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_39c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_398) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_394) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iStack_390) = auVar71._16_4_;
  }
  auVar124 = auVar71._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_38c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_388) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_384) = uVar7;
    auVar72._0_4_ = fVar123 * local_320 * fVar49 + auVar77._0_4_;
    auVar72._4_4_ = fVar126 * fStack_31c * fVar38 + auVar77._4_4_;
    auVar72._8_4_ = fVar48 * fStack_318 * fVar41 + auVar77._8_4_;
    auVar72._12_4_ = fVar54 * fStack_314 * fVar42 + auVar77._12_4_;
    auVar72._16_4_ = fVar55 * fStack_310 * fVar43 + auVar77._16_4_;
    auVar72._20_4_ = fVar56 * fStack_30c * fVar44 + auVar77._20_4_;
    auVar72._24_4_ = fVar57 * fStack_308 * fVar45 + auVar77._24_4_;
    auVar72._28_4_ = fVar58 * fStack_304 * fVar46 + auVar77._28_4_;
  }
  else {
    auVar72._0_4_ = fVar123 * local_320 * fVar49 + auVar77._0_4_;
    auVar72._4_4_ = fVar126 * fStack_31c * fVar38 + auVar77._4_4_;
    auVar72._8_4_ = fVar48 * fStack_318 * fVar41 + auVar77._8_4_;
    auVar72._12_4_ = fVar54 * fStack_314 * fVar42 + auVar77._12_4_;
    auVar72._16_4_ = fVar55 * fStack_310 * fVar43 + auVar77._16_4_;
    auVar72._20_4_ = fVar56 * fStack_30c * fVar44 + auVar77._20_4_;
    auVar72._24_4_ = fVar57 * fStack_308 * fVar45 + auVar77._24_4_;
    auVar72._28_4_ = fVar58 * fStack_304 * fVar46 + auVar77._28_4_;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_3a0) = auVar72._0_4_;
  }
  auVar124 = auVar72._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_39c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_398) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_394) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_390) = auVar72._16_4_;
  }
  auVar124 = auVar72._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar124,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_38c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar124,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_388) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar124,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_384) = uVar7;
  }
  if ((uVar12 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_3a0) = fVar123;
  }
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_39c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_398) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_394) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iStack_390) = fVar55;
  }
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar68,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_38c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar68,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_388) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar68,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_384) = uVar7;
    auVar95._0_4_ = -(local_440 * local_360) + local_4a0;
    auVar95._4_4_ = -(fStack_43c * fStack_35c) + fStack_49c;
    auVar95._8_4_ = -(fStack_438 * fStack_358) + fStack_498;
    auVar95._12_4_ = -(fStack_434 * fStack_354) + fStack_494;
    auVar95._16_4_ = -(fStack_430 * fStack_350) + fStack_490;
    auVar95._20_4_ = -(fStack_42c * fStack_34c) + fStack_48c;
    auVar95._24_4_ = -(fStack_428 * fStack_348) + fStack_488;
    auVar95._28_4_ = -(fStack_424 * fStack_344) + fStack_484;
  }
  else {
    auVar95._0_4_ = -(local_440 * local_360) + local_4a0;
    auVar95._4_4_ = -(fStack_43c * fStack_35c) + fStack_49c;
    auVar95._8_4_ = -(fStack_438 * fStack_358) + fStack_498;
    auVar95._12_4_ = -(fStack_434 * fStack_354) + fStack_494;
    auVar95._16_4_ = -(fStack_430 * fStack_350) + fStack_490;
    auVar95._20_4_ = -(fStack_42c * fStack_34c) + fStack_48c;
    auVar95._24_4_ = -(fStack_428 * fStack_348) + fStack_488;
    auVar95._28_4_ = -(fStack_424 * fStack_344) + fStack_484;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + (int)local_420) = auVar95._0_4_;
  }
  auVar67 = auVar95._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + (int)fStack_41c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + (int)fStack_418) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + (int)fStack_414) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + (int)fStack_410) = auVar95._16_4_;
  }
  auVar67 = auVar95._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + (int)fStack_40c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + (int)fStack_408) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + (int)fStack_404) = uVar7;
    auVar30._0_4_ = -(local_440 * fVar49 * local_340) + local_480;
    auVar30._4_4_ = -(fStack_43c * fVar38 * fStack_33c) + fStack_47c;
    auVar30._8_4_ = -(fStack_438 * fVar41 * fStack_338) + fStack_478;
    auVar30._12_4_ = -(fStack_434 * fVar42 * fStack_334) + fStack_474;
    auVar30._16_4_ = -(fStack_430 * fVar43 * fStack_330) + fStack_470;
    auVar30._20_4_ = -(fStack_42c * fVar44 * fStack_32c) + fStack_46c;
    auVar30._24_4_ = -(fStack_428 * fVar45 * fStack_328) + fStack_468;
    auVar30._28_4_ = -(fStack_424 * fVar46 * fStack_324) + fStack_464;
  }
  else {
    auVar30._0_4_ = -(local_440 * fVar49 * local_340) + local_480;
    auVar30._4_4_ = -(fStack_43c * fVar38 * fStack_33c) + fStack_47c;
    auVar30._8_4_ = -(fStack_438 * fVar41 * fStack_338) + fStack_478;
    auVar30._12_4_ = -(fStack_434 * fVar42 * fStack_334) + fStack_474;
    auVar30._16_4_ = -(fStack_430 * fVar43 * fStack_330) + fStack_470;
    auVar30._20_4_ = -(fStack_42c * fVar44 * fStack_32c) + fStack_46c;
    auVar30._24_4_ = -(fStack_428 * fVar45 * fStack_328) + fStack_468;
    auVar30._28_4_ = -(fStack_424 * fVar46 * fStack_324) + fStack_464;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)local_420) = auVar30._0_4_;
  }
  auVar67 = auVar30._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_41c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_418) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_414) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)fStack_410) = auVar30._16_4_;
  }
  auVar67 = auVar30._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_40c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_408) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)(int)fStack_404) = uVar7;
    auVar91._0_4_ = -(local_440 * local_320 * fVar49) + local_4c0;
    auVar91._4_4_ = -(fStack_43c * fStack_31c * fVar38) + fStack_4bc;
    auVar91._8_4_ = -(fStack_438 * fStack_318 * fVar41) + fStack_4b8;
    auVar91._12_4_ = -(fStack_434 * fStack_314 * fVar42) + fStack_4b4;
    auVar91._16_4_ = -(fStack_430 * fStack_310 * fVar43) + fStack_4b0;
    auVar91._20_4_ = -(fStack_42c * fStack_30c * fVar44) + fStack_4ac;
    auVar91._24_4_ = -(fStack_428 * fStack_308 * fVar45) + fStack_4a8;
    auVar91._28_4_ = -(fStack_424 * fStack_304 * fVar46) + fStack_4a4;
  }
  else {
    auVar91._0_4_ = -(local_440 * local_320 * fVar49) + local_4c0;
    auVar91._4_4_ = -(fStack_43c * fStack_31c * fVar38) + fStack_4bc;
    auVar91._8_4_ = -(fStack_438 * fStack_318 * fVar41) + fStack_4b8;
    auVar91._12_4_ = -(fStack_434 * fStack_314 * fVar42) + fStack_4b4;
    auVar91._16_4_ = -(fStack_430 * fStack_310 * fVar43) + fStack_4b0;
    auVar91._20_4_ = -(fStack_42c * fStack_30c * fVar44) + fStack_4ac;
    auVar91._24_4_ = -(fStack_428 * fStack_308 * fVar45) + fStack_4a8;
    auVar91._28_4_ = -(fStack_424 * fStack_304 * fVar46) + fStack_4a4;
  }
  if ((uVar12 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)local_420) = auVar91._0_4_;
  }
  auVar67 = auVar91._0_16_;
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_41c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_418) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_414) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)fStack_410) = auVar91._16_4_;
  }
  auVar67 = auVar91._16_16_;
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_40c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_408) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)(int)fStack_404) = uVar7;
  }
  if ((uVar12 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)local_420) = local_440;
  }
  if ((uVar12 & 2) != 0) {
    uVar7 = vextractps_avx(auVar26,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_41c) = uVar7;
  }
  if ((uVar12 & 4) != 0) {
    uVar7 = vextractps_avx(auVar26,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_418) = uVar7;
  }
  if ((uVar12 & 8) != 0) {
    uVar7 = vextractps_avx(auVar26,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_414) = uVar7;
  }
  if ((uVar12 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)fStack_410) = fStack_430;
  }
  if ((uVar12 & 0x20) != 0) {
    uVar7 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_40c) = uVar7;
  }
  if ((uVar12 & 0x40) != 0) {
    uVar7 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_408) = uVar7;
  }
  if ((char)bVar11 < '\0') {
    uVar7 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)(int)fStack_404) = uVar7;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// GetFaceNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx @ 1405c0410

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetFaceNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [16];
  undefined4 uVar3;
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
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  char cVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  undefined1 auVar34 [16];
  uint uVar43;
  uint uVar44;
  uint uVar46;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  uint uVar45;
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar61 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [16];
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
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [16];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [16];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
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
  undefined1 auVar42 [32];
  undefined1 auVar51 [32];
  undefined1 auVar92 [32];
  
  auVar40 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
  auVar38 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  auVar36 = ___ymm_0000000600000007000000040000000000000001000000020000000000000000;
  auVar35 = ___ymm_0000000000000007000000040000000500000000000000020000000300000000;
  uVar19 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar19 = param_4;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar25 = 0x40;
    uVar15 = 0;
    auVar52._4_4_ = __real_00800000;
    auVar52._0_4_ = __real_00800000;
    auVar52._8_4_ = __real_00800000;
    auVar52._12_4_ = __real_00800000;
    auVar52._16_4_ = __real_00800000;
    auVar52._20_4_ = __real_00800000;
    auVar52._24_4_ = __real_00800000;
    auVar52._28_4_ = __real_00800000;
    auVar58._4_4_ = __real_3f800000;
    auVar58._0_4_ = __real_3f800000;
    auVar58._8_4_ = __real_3f800000;
    auVar58._12_4_ = __real_3f800000;
    auVar58._16_4_ = __real_3f800000;
    auVar58._20_4_ = __real_3f800000;
    auVar58._24_4_ = __real_3f800000;
    auVar58._28_4_ = __real_3f800000;
    do {
      auVar88 = *(undefined1 (*) [16])(param_3 + -0x40 + lVar25);
      auVar57 = *(undefined1 (*) [16])(param_3 + -0x30 + lVar25);
      auVar62 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar25);
      auVar56 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar25);
      auVar89._16_16_ = auVar57;
      auVar89._0_16_ = auVar88;
      auVar99._16_16_ = auVar56;
      auVar99._0_16_ = auVar62;
      auVar61 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar25);
      uVar3 = *(undefined4 *)(param_3 + -0x18 + lVar25);
      auVar94._20_4_ = uVar3;
      auVar94._16_4_ = uVar3;
      auVar94._24_4_ = uVar3;
      auVar94._28_4_ = uVar3;
      uVar3 = *(undefined4 *)(param_3 + -0x1c + lVar25);
      auVar94._4_4_ = uVar3;
      auVar94._0_4_ = uVar3;
      auVar94._8_4_ = uVar3;
      auVar94._12_4_ = uVar3;
      auVar103._16_16_ = auVar61;
      auVar103._0_16_ = *(undefined1 (*) [16])(param_3 + lVar25);
      auVar77._16_16_ = auVar88;
      auVar77._0_16_ = auVar57;
      auVar69 = vblendps_avx(auVar89,auVar77,0x24);
      auVar69 = vpermilps_avx(auVar69,auVar35);
      auVar69 = vblendps_avx(auVar69,auVar94,0x88);
      auVar78._16_16_ = *(undefined1 (*) [16])(param_3 + lVar25);
      auVar78._0_16_ = auVar61;
      auVar74 = vblendps_avx(auVar78,auVar103,0x44);
      auVar74 = vpermilps_avx(auVar74,auVar36);
      uVar3 = *(undefined4 *)(param_3 + -0xc + lVar25);
      auVar84._20_4_ = uVar3;
      auVar84._16_4_ = uVar3;
      auVar84._24_4_ = uVar3;
      auVar84._28_4_ = uVar3;
      auVar88 = vshufps_avx(auVar56,auVar56,0xec);
      auVar84._0_16_ = auVar88;
      auVar74 = vblendps_avx(auVar74,auVar84,0x13);
      auVar77 = vblendps_avx(auVar99,auVar89,0x24);
      auVar67._16_16_ = auVar62;
      auVar67._0_16_ = auVar57;
      auVar77 = vshufps_avx(auVar67,auVar77,0x21);
      auVar67 = vshufps_avx(auVar77,auVar99,0xc2);
      auVar77 = vshufps_avx(auVar78,auVar103,0xc4);
      auVar77 = vblendps_avx(auVar67,auVar77,0xe0);
      lVar30 = (longlong)(auVar69._0_4_ * 3);
      lVar22 = (longlong)(auVar69._4_4_ * 3);
      lVar23 = (longlong)(auVar69._8_4_ * 3);
      lVar17 = (longlong)(auVar69._12_4_ * 3);
      lVar31 = (longlong)(auVar74._0_4_ * 3);
      lVar26 = (longlong)(auVar74._4_4_ * 3);
      lVar28 = (longlong)(auVar74._8_4_ * 3);
      lVar20 = (longlong)(auVar74._12_4_ * 3);
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar31 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar26 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar17 * 4)),0x30);
      auVar68._16_16_ = auVar88;
      auVar68._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar26 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),0x30);
      auVar62 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar26 * 4)),0x10);
      auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(param_2 + 8 + lVar28 * 4)),0x20);
      auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(param_2 + 8 + lVar20 * 4)),0x30);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),0x10);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),0x20);
      auVar72._16_16_ = auVar88;
      auVar72._0_16_ = auVar57;
      auVar88 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),0x30);
      auVar79._16_16_ = auVar62;
      auVar79._0_16_ = auVar88;
      lVar30 = (longlong)(auVar69._16_4_ * 3);
      lVar22 = (longlong)(auVar69._20_4_ * 3);
      lVar23 = (longlong)(auVar69._24_4_ * 3);
      lVar17 = (longlong)(auVar69._28_4_ * 3);
      lVar26 = (longlong)(auVar74._16_4_ * 3);
      lVar31 = (longlong)(auVar74._20_4_ * 3);
      lVar28 = (longlong)(auVar74._24_4_ * 3);
      lVar20 = (longlong)(auVar74._28_4_ * 3);
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar17 * 4)),0x30);
      auVar95._16_16_ = auVar88;
      auVar95._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),0x30);
      auVar97._16_16_ = auVar88;
      auVar97._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 8 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 8 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),0x30);
      auVar100._16_16_ = auVar88;
      auVar100._0_16_ = auVar57;
      lVar22 = (longlong)(auVar67._0_4_ * 3);
      lVar23 = (longlong)(auVar67._4_4_ * 3);
      lVar17 = (longlong)(auVar67._8_4_ * 3);
      lVar30 = (longlong)(auVar67._12_4_ * 3);
      lVar26 = (longlong)(auVar77._16_4_ * 3);
      lVar31 = (longlong)(auVar77._20_4_ * 3);
      lVar28 = (longlong)(auVar77._24_4_ * 3);
      lVar20 = (longlong)(auVar77._28_4_ * 3);
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar22 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar23 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar17 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar30 * 4)),0x30);
      auVar85._16_16_ = auVar88;
      auVar85._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar30 * 4)),0x30);
      auVar90._16_16_ = auVar88;
      auVar90._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 8 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 8 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 8 + lVar30 * 4)),0x30);
      auVar102._16_16_ = auVar88;
      auVar102._0_16_ = auVar57;
      auVar69 = vsubps_avx(auVar95,auVar68);
      auVar74 = vsubps_avx(auVar85,auVar68);
      auVar77 = vsubps_avx(auVar97,auVar72);
      auVar67 = vsubps_avx(auVar100,auVar79);
      auVar68 = vsubps_avx(auVar90,auVar72);
      auVar72 = vsubps_avx(auVar102,auVar79);
      auVar91._0_4_ = auVar77._0_4_ * auVar74._0_4_;
      auVar91._4_4_ = auVar77._4_4_ * auVar74._4_4_;
      auVar91._8_4_ = auVar77._8_4_ * auVar74._8_4_;
      auVar91._12_4_ = auVar77._12_4_ * auVar74._12_4_;
      auVar91._16_4_ = auVar77._16_4_ * auVar74._16_4_;
      auVar91._20_4_ = auVar77._20_4_ * auVar74._20_4_;
      auVar91._24_4_ = auVar77._24_4_ * auVar74._24_4_;
      auVar91._28_4_ = auVar77._28_4_ * auVar74._28_4_;
      auVar101._0_4_ = auVar67._0_4_ * auVar68._0_4_;
      auVar101._4_4_ = auVar67._4_4_ * auVar68._4_4_;
      auVar101._8_4_ = auVar67._8_4_ * auVar68._8_4_;
      auVar101._12_4_ = auVar67._12_4_ * auVar68._12_4_;
      auVar101._16_4_ = auVar67._16_4_ * auVar68._16_4_;
      auVar101._20_4_ = auVar67._20_4_ * auVar68._20_4_;
      auVar101._24_4_ = auVar67._24_4_ * auVar68._24_4_;
      auVar101._28_4_ = auVar67._28_4_ * auVar68._28_4_;
      auVar73._0_4_ = auVar69._0_4_ * auVar68._0_4_;
      auVar73._4_4_ = auVar69._4_4_ * auVar68._4_4_;
      auVar73._8_4_ = auVar69._8_4_ * auVar68._8_4_;
      auVar73._12_4_ = auVar69._12_4_ * auVar68._12_4_;
      auVar73._16_4_ = auVar69._16_4_ * auVar68._16_4_;
      auVar73._20_4_ = auVar69._20_4_ * auVar68._20_4_;
      auVar73._24_4_ = auVar69._24_4_ * auVar68._24_4_;
      auVar73._28_4_ = auVar69._28_4_ * auVar68._28_4_;
      auVar96._0_4_ = auVar69._0_4_ * auVar72._0_4_;
      auVar96._4_4_ = auVar69._4_4_ * auVar72._4_4_;
      auVar96._8_4_ = auVar69._8_4_ * auVar72._8_4_;
      auVar96._12_4_ = auVar69._12_4_ * auVar72._12_4_;
      auVar96._16_4_ = auVar69._16_4_ * auVar72._16_4_;
      auVar96._20_4_ = auVar69._20_4_ * auVar72._20_4_;
      auVar96._24_4_ = auVar69._24_4_ * auVar72._24_4_;
      auVar96._28_4_ = auVar69._28_4_ * auVar72._28_4_;
      auVar68 = vsubps_avx(auVar91,auVar73);
      auVar80._0_4_ = auVar77._0_4_ * auVar72._0_4_;
      auVar80._4_4_ = auVar77._4_4_ * auVar72._4_4_;
      auVar80._8_4_ = auVar77._8_4_ * auVar72._8_4_;
      auVar80._12_4_ = auVar77._12_4_ * auVar72._12_4_;
      auVar80._16_4_ = auVar77._16_4_ * auVar72._16_4_;
      auVar80._20_4_ = auVar77._20_4_ * auVar72._20_4_;
      auVar80._24_4_ = auVar77._24_4_ * auVar72._24_4_;
      auVar80._28_4_ = auVar77._28_4_ * auVar72._28_4_;
      auVar77 = vsubps_avx(auVar101,auVar80);
      auVar69._0_4_ = auVar67._0_4_ * auVar74._0_4_;
      auVar69._4_4_ = auVar67._4_4_ * auVar74._4_4_;
      auVar69._8_4_ = auVar67._8_4_ * auVar74._8_4_;
      auVar69._12_4_ = auVar67._12_4_ * auVar74._12_4_;
      auVar69._16_4_ = auVar67._16_4_ * auVar74._16_4_;
      auVar69._20_4_ = auVar67._20_4_ * auVar74._20_4_;
      auVar69._24_4_ = auVar67._24_4_ * auVar74._24_4_;
      auVar69._28_4_ = auVar67._28_4_ * auVar74._28_4_;
      auVar67 = vsubps_avx(auVar96,auVar69);
      auVar86._0_4_ =
           auVar68._0_4_ * auVar68._0_4_ +
           auVar77._0_4_ * auVar77._0_4_ + auVar67._0_4_ * auVar67._0_4_;
      auVar86._4_4_ =
           auVar68._4_4_ * auVar68._4_4_ +
           auVar77._4_4_ * auVar77._4_4_ + auVar67._4_4_ * auVar67._4_4_;
      auVar86._8_4_ =
           auVar68._8_4_ * auVar68._8_4_ +
           auVar77._8_4_ * auVar77._8_4_ + auVar67._8_4_ * auVar67._8_4_;
      auVar86._12_4_ =
           auVar68._12_4_ * auVar68._12_4_ +
           auVar77._12_4_ * auVar77._12_4_ + auVar67._12_4_ * auVar67._12_4_;
      auVar86._16_4_ =
           auVar68._16_4_ * auVar68._16_4_ +
           auVar77._16_4_ * auVar77._16_4_ + auVar67._16_4_ * auVar67._16_4_;
      auVar86._20_4_ =
           auVar68._20_4_ * auVar68._20_4_ +
           auVar77._20_4_ * auVar77._20_4_ + auVar67._20_4_ * auVar67._20_4_;
      auVar86._24_4_ =
           auVar68._24_4_ * auVar68._24_4_ +
           auVar77._24_4_ * auVar77._24_4_ + auVar67._24_4_ * auVar67._24_4_;
      auVar86._28_4_ =
           auVar68._28_4_ * auVar68._28_4_ +
           auVar77._28_4_ * auVar77._28_4_ + auVar67._28_4_ * auVar67._28_4_;
      auVar69 = vsqrtps_avx(auVar86);
      auVar74 = vdivps_avx(auVar77,auVar69);
      auVar67 = vdivps_avx(auVar67,auVar69);
      auVar68 = vdivps_avx(auVar68,auVar69);
      auVar69 = vcmpps_avx(auVar86,auVar52,2);
      auVar77 = vblendvps_avx(auVar74,auVar58,auVar69);
      auVar88._0_4_ = ~auVar69._0_4_ & auVar67._0_4_;
      auVar88._4_4_ = ~auVar69._4_4_ & auVar67._4_4_;
      auVar88._8_4_ = ~auVar69._8_4_ & auVar67._8_4_;
      auVar88._12_4_ = ~auVar69._12_4_ & auVar67._12_4_;
      auVar92._16_4_ = ~auVar69._16_4_ & auVar67._16_4_;
      auVar92._0_16_ = auVar88;
      auVar92._20_4_ = ~auVar69._20_4_ & auVar67._20_4_;
      auVar92._24_4_ = ~auVar69._24_4_ & auVar67._24_4_;
      auVar92._28_4_ = ~auVar69._28_4_ & auVar67._28_4_;
      auVar70._0_4_ = ~auVar69._0_4_ & auVar68._0_4_;
      auVar70._4_4_ = ~auVar69._4_4_ & auVar68._4_4_;
      auVar70._8_4_ = ~auVar69._8_4_ & auVar68._8_4_;
      auVar70._12_4_ = ~auVar69._12_4_ & auVar68._12_4_;
      auVar70._16_4_ = ~auVar69._16_4_ & auVar68._16_4_;
      auVar70._20_4_ = ~auVar69._20_4_ & auVar68._20_4_;
      auVar70._24_4_ = ~auVar69._24_4_ & auVar68._24_4_;
      auVar70._28_4_ = ~auVar69._28_4_ & auVar68._28_4_;
      auVar74._16_16_ = auVar88;
      auVar74._0_16_ = auVar77._0_16_;
      auVar74 = vshufpd_avx(auVar77,auVar74,2);
      auVar57 = auVar92._16_16_;
      auVar88 = vpalignr_avx(auVar57,auVar88,8);
      auVar68 = vperm2f128_avx(auVar70,auVar70,1);
      auVar69 = vshufps_avx(auVar70,auVar68,0x30);
      auVar69 = vshufps_avx(auVar68,auVar69,0x29);
      auVar69 = vblendps_avx(auVar69,ZEXT1632(auVar88),7);
      auVar72 = vperm2f128_avx(auVar69,auVar69,1);
      auVar67 = vunpcklpd_avx(auVar72,auVar70);
      auVar67 = vshufps_avx(auVar68,auVar67,0x24);
      auVar68 = vperm2f128_avx(auVar74,auVar74,1);
      auVar74 = vblendps_avx(auVar74,auVar68,0x44);
      auVar74 = vpermilps_avx(auVar74,auVar38);
      auVar74 = vblendps_avx(auVar74,auVar67,0xa4);
      *(undefined1 (*) [16])(param_1 + -0x30 + lVar25) = auVar74._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x40 + lVar25) = auVar74._0_16_;
      auVar74 = vpermilps_avx(auVar69,auVar40);
      auVar69 = vshufps_avx(auVar72,auVar72,0xa9);
      auVar69 = vblendps_avx(auVar69,auVar74,0x44);
      auVar74 = vshufpd_avx(auVar77,auVar77,1);
      auVar69 = vblendps_avx(auVar69,auVar74,0x92);
      *(undefined1 (*) [16])(param_1 + -0x10 + lVar25) = auVar69._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x20 + lVar25) = auVar69._0_16_;
      auVar88 = vshufps_avx(auVar77._16_16_,auVar57,0x9e);
      auVar57 = vshufps_avx(auVar57,auVar57,0xff);
      auVar81._16_16_ = auVar57;
      auVar81._0_16_ = auVar88;
      auVar74 = vperm2f128_avx(auVar70,ZEXT1632(auVar88),0x21);
      auVar69 = vblendps_avx(auVar81,auVar70,0xe0);
      auVar74 = vshufps_avx(auVar74,auVar69,0x21);
      auVar69 = vshufps_avx(auVar74,auVar69,0xc2);
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar25) = auVar69._16_16_;
      *(undefined1 (*) [16])(param_1 + lVar25) = auVar69._0_16_;
      lVar25 = lVar25 + 0x60;
      uVar15 = uVar15 + 8;
    } while ((int)uVar15 < (int)(uVar19 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar15) {
      return;
    }
  }
  auVar88 = vpshufd_avx(ZEXT416(uVar15),0);
  auVar35._16_16_ = auVar88;
  auVar35._0_16_ = auVar88;
  auVar62 = vpshufd_avx(ZEXT416(param_4),0);
  pauVar1 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar15 * 0xc);
  auVar56 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar61 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar88 = vpcmpgtd_avx(auVar62,auVar61);
  auVar57 = vpcmpgtd_avx(auVar62,auVar56);
  auVar36._16_16_ = auVar88;
  auVar36._0_16_ = auVar57;
  uVar19 = vmovmskps_avx(auVar36);
  if (uVar19 == 0xff) {
    auVar40 = pauVar1[2];
    auVar38._16_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar38._0_16_ = *(undefined1 (*) [16])(*pauVar1 + 0x10);
    auVar35 = vblendps_avx(*pauVar1,auVar38,0x24);
    auVar36 = vpermilps_avx(auVar35,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar3 = *(undefined4 *)(pauVar1[1] + 4);
    auVar98._4_4_ = uVar3;
    auVar98._0_4_ = uVar3;
    auVar98._8_4_ = uVar3;
    auVar98._12_4_ = uVar3;
    uVar3 = *(undefined4 *)(pauVar1[1] + 8);
    auVar98._20_4_ = uVar3;
    auVar98._16_4_ = uVar3;
    auVar98._24_4_ = uVar3;
    auVar98._28_4_ = uVar3;
    auVar93._16_16_ = *(undefined1 (*) [16])pauVar1[2];
    auVar93._0_16_ = *(undefined1 (*) [16])(pauVar1[2] + 0x10);
    auVar35 = vblendps_avx(auVar93,auVar40,0x44);
    auVar38 = vpermilps_avx(auVar35,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar35 = vblendps_avx(auVar36,auVar98,0x88);
    auVar88 = vshufps_avx(*(undefined1 (*) [16])(pauVar1[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar1[1] + 0x10),0xec);
    uVar3 = *(undefined4 *)(pauVar1[1] + 0x14);
    auVar39._20_4_ = uVar3;
    auVar39._16_4_ = uVar3;
    auVar39._24_4_ = uVar3;
    auVar39._28_4_ = uVar3;
    auVar39._0_16_ = auVar88;
    auVar36 = vblendps_avx(auVar38,auVar39,0x13);
    auVar37._16_16_ = auVar36._0_16_;
    auVar37._0_16_ = auVar35._0_16_;
    auVar38 = vperm2f128_avx(auVar35,auVar36,0x31);
    auVar35 = vblendps_avx(pauVar1[1],*pauVar1,0x24);
    auVar35 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar1 + 0x10)),auVar35,0x21);
    auVar35 = vshufps_avx(auVar35,pauVar1[1],0xc2);
    auVar36 = vshufps_avx(auVar93,auVar40,0xc4);
    auVar35 = vblendps_avx(auVar35,auVar36,0xe0);
  }
  else {
    auVar88 = vpcmpgtd_avx(auVar62,auVar61);
    auVar57 = vpcmpgtd_avx(auVar62,auVar56);
    uVar33 = auVar57._0_4_;
    auVar47._0_4_ = uVar33 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar43 = auVar57._4_4_;
    auVar47._4_4_ = uVar43 & _UNK_150b50b04;
    uVar44 = auVar57._8_4_;
    auVar47._8_4_ = uVar44 & _UNK_150b50b08;
    uVar45 = auVar57._12_4_;
    auVar47._12_4_ = uVar45 & _UNK_150b50b0c;
    uVar46 = auVar88._0_4_;
    vextractps_avx(auVar47,1);
    vextractps_avx(auVar47,2);
    vextractps_avx(auVar47,3);
    auVar57._0_4_ = uVar33 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar57._4_4_ = uVar43 & _UNK_150b50b24;
    auVar57._8_4_ = uVar44 & _UNK_150b50b28;
    auVar57._12_4_ = uVar45 & _UNK_150b50b2c;
    vextractps_avx(auVar57,1);
    vextractps_avx(auVar57,2);
    vextractps_avx(auVar57,3);
    auVar83._0_4_ = uVar33 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar83._4_4_ = uVar43 & _UNK_150b50b44;
    auVar83._8_4_ = uVar44 & _UNK_150b50b48;
    auVar83._12_4_ = uVar45 & _UNK_150b50b4c;
    vextractps_avx(auVar83,1);
    vextractps_avx(auVar83,2);
    auVar37 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (uVar46 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar1)));
    vextractps_avx(auVar83,3);
    auVar38 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (uVar46 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar57._0_4_))));
    auVar35 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (uVar46 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar83._0_4_))));
  }
  cVar18 = (char)uVar19;
  auVar83 = vpcmpgtd_avx(auVar62,auVar61);
  auVar14 = vpcmpgtd_avx(auVar62,auVar56);
  auVar62._4_4_ = auVar37._20_4_ * 3;
  auVar62._0_4_ = auVar37._16_4_ * 3;
  auVar62._8_4_ = auVar37._24_4_ * 3;
  auVar62._12_4_ = auVar37._28_4_ * 3;
  auVar8 = vpand_avx(auVar83,auVar62);
  lVar25 = param_2 + (longlong)auVar8._0_4_ * 4;
  lVar17 = param_2 + (longlong)auVar8._4_4_ * 4;
  lVar20 = param_2 + (longlong)auVar8._8_4_ * 4;
  uVar16 = (ulonglong)(auVar83._4_4_ & _UNK_150b50d54);
  uVar24 = (ulonglong)(auVar83._8_4_ & _UNK_150b50d58);
  uVar27 = (ulonglong)(auVar83._0_4_ & _UNK_150b50d50);
  auVar88 = vinsertps_avx(ZEXT416(*(uint *)(uVar27 + lVar25)),ZEXT416(*(uint *)(uVar16 + lVar17)),
                          0x10);
  auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(uVar24 + lVar20)),0x20);
  uVar29 = (ulonglong)(auVar83._4_4_ & _UNK_150b50d74);
  uVar21 = (ulonglong)(auVar83._0_4_ & _UNK_150b50d70);
  uVar32 = (ulonglong)(auVar83._8_4_ & _UNK_150b50d78);
  auVar57 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar25)),ZEXT416(*(uint *)(uVar29 + lVar17)),
                          0x10);
  auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(uVar32 + lVar20)),0x20);
  auVar56._4_4_ = auVar38._20_4_ * 3;
  auVar56._0_4_ = auVar38._16_4_ * 3;
  auVar56._8_4_ = auVar38._24_4_ * 3;
  auVar56._12_4_ = auVar38._28_4_ * 3;
  auVar9 = vpand_avx(auVar56,auVar83);
  lVar25 = param_2 + (longlong)auVar9._0_4_ * 4;
  auVar61._4_4_ = auVar35._20_4_ * 3;
  auVar61._0_4_ = auVar35._16_4_ * 3;
  auVar61._8_4_ = auVar35._24_4_ * 3;
  auVar61._12_4_ = auVar35._28_4_ * 3;
  auVar10 = vpand_avx(auVar61,auVar83);
  lVar17 = param_2 + (longlong)auVar10._0_4_ * 4;
  lVar20 = param_2 + (longlong)auVar9._4_4_ * 4;
  auVar62 = vinsertps_avx(ZEXT416(*(uint *)(uVar27 + lVar25)),ZEXT416(*(uint *)(uVar16 + lVar20)),
                          0x10);
  auVar56 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar25)),ZEXT416(*(uint *)(uVar29 + lVar20)),
                          0x10);
  lVar25 = param_2 + (longlong)auVar10._4_4_ * 4;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)(uVar27 + lVar17)),ZEXT416(*(uint *)(uVar16 + lVar25)),
                          0x10);
  auVar47 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar17)),ZEXT416(*(uint *)(uVar29 + lVar25)),
                          0x10);
  lVar25 = param_2 + (longlong)auVar9._8_4_ * 4;
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(uVar24 + lVar25)),0x20);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(uVar32 + lVar25)),0x20);
  lVar25 = param_2 + (longlong)auVar10._8_4_ * 4;
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(uVar24 + lVar25)),0x20);
  auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar32 + lVar25)),0x20);
  lVar25 = param_2 + (longlong)auVar8._12_4_ * 4;
  uVar16 = (ulonglong)(auVar83._12_4_ & _UNK_150b50d5c);
  auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  uVar21 = (ulonglong)(auVar83._12_4_ & _UNK_150b50d7c);
  auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  lVar25 = param_2 + (longlong)auVar9._12_4_ * 4;
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  lVar25 = param_2 + (longlong)auVar10._12_4_ * 4;
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  auVar4._4_4_ = auVar37._4_4_ * 3;
  auVar4._0_4_ = auVar37._0_4_ * 3;
  auVar4._8_4_ = auVar37._8_4_ * 3;
  auVar4._12_4_ = auVar37._12_4_ * 3;
  auVar11 = vpand_avx(auVar14,auVar4);
  lVar25 = param_2 + (longlong)auVar11._0_4_ * 4;
  uVar27 = (ulonglong)(auVar14._4_4_ & _UNK_150b50d44);
  uVar24 = (ulonglong)
           (auVar14._0_4_ & ___ymm_0000000400000004000000040000000400000004000000040000000400000004)
  ;
  uVar21 = (ulonglong)
           (auVar14._0_4_ & ___ymm_0000000800000008000000080000000800000008000000080000000800000008)
  ;
  auVar5._4_4_ = auVar38._4_4_ * 3;
  auVar5._0_4_ = auVar38._0_4_ * 3;
  auVar5._8_4_ = auVar38._8_4_ * 3;
  auVar5._12_4_ = auVar38._12_4_ * 3;
  auVar12 = vpand_avx(auVar14,auVar5);
  lVar17 = param_2 + (longlong)auVar12._0_4_ * 4;
  auVar6._4_4_ = auVar35._4_4_ * 3;
  auVar6._0_4_ = auVar35._0_4_ * 3;
  auVar6._8_4_ = auVar35._8_4_ * 3;
  auVar6._12_4_ = auVar35._12_4_ * 3;
  auVar13 = vpand_avx(auVar14,auVar6);
  lVar20 = param_2 + (longlong)auVar13._0_4_ * 4;
  lVar22 = param_2 + (longlong)auVar11._4_4_ * 4;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar24 + lVar25)),ZEXT416(*(uint *)(uVar27 + lVar22)),
                          0x10);
  uVar16 = (ulonglong)(auVar14._4_4_ & _UNK_150b50d64);
  auVar4 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar25)),ZEXT416(*(uint *)(uVar16 + lVar22)),
                         0x10);
  lVar25 = param_2 + (longlong)auVar12._4_4_ * 4;
  auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar24 + lVar17)),ZEXT416(*(uint *)(uVar27 + lVar25)),
                         0x10);
  auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar17)),ZEXT416(*(uint *)(uVar16 + lVar25)),
                         0x10);
  lVar25 = param_2 + (longlong)auVar13._4_4_ * 4;
  auVar34 = vinsertps_avx(ZEXT416(*(uint *)(uVar24 + lVar20)),ZEXT416(*(uint *)(uVar27 + lVar25)),
                          0x10);
  auVar48 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar20)),ZEXT416(*(uint *)(uVar16 + lVar25)),
                          0x10);
  lVar25 = param_2 + (longlong)auVar11._8_4_ * 4;
  uVar21 = (ulonglong)(auVar14._8_4_ & _UNK_150b50d48);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar21 + lVar25)),0x20);
  uVar16 = (ulonglong)(auVar14._8_4_ & _UNK_150b50d68);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar16 + lVar25)),0x20);
  lVar25 = param_2 + (longlong)auVar12._8_4_ * 4;
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar21 + lVar25)),0x20);
  auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar16 + lVar25)),0x20);
  lVar25 = param_2 + (longlong)auVar13._8_4_ * 4;
  auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(uVar21 + lVar25)),0x20);
  auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar16 + lVar25)),0x20);
  uVar16 = (ulonglong)(auVar14._12_4_ & _UNK_150b50d4c);
  auVar7 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar8._0_4_ * 4)),
                         ZEXT416(*(uint *)(param_2 + (longlong)auVar8._4_4_ * 4)),0x10);
  auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(param_2 + (longlong)auVar8._8_4_ * 4)),0x20);
  auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(param_2 + (longlong)auVar8._12_4_ * 4)),0x30);
  uVar21 = (ulonglong)(auVar14._12_4_ & _UNK_150b50d6c);
  auVar8 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar11._0_4_ * 4)),
                         ZEXT416(*(uint *)(param_2 + (longlong)auVar11._4_4_ * 4)),0x10);
  auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(param_2 + (longlong)auVar11._8_4_ * 4)),0x20);
  auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(param_2 + (longlong)auVar11._12_4_ * 4)),0x30);
  lVar25 = param_2 + (longlong)auVar11._12_4_ * 4;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  auVar11 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar9._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar9._4_4_ * 4)),0x10);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_2 + (longlong)auVar9._8_4_ * 4)),0x20);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_2 + (longlong)auVar9._12_4_ * 4)),0x30);
  auVar9 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar12._0_4_ * 4)),
                         ZEXT416(*(uint *)(param_2 + (longlong)auVar12._4_4_ * 4)),0x10);
  auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(param_2 + (longlong)auVar12._8_4_ * 4)),0x20);
  auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(param_2 + (longlong)auVar12._12_4_ * 4)),0x30);
  lVar25 = param_2 + (longlong)auVar12._12_4_ * 4;
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  auVar12 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar10._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar10._4_4_ * 4)),0x10);
  auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + (longlong)auVar10._8_4_ * 4)),0x20);
  auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + (longlong)auVar10._12_4_ * 4)),0x30);
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar13._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar13._4_4_ * 4)),0x10);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_2 + (longlong)auVar13._8_4_ * 4)),0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_2 + (longlong)auVar13._12_4_ * 4)),0x30);
  auVar63._16_16_ = auVar7;
  auVar63._0_16_ = auVar8;
  param_2 = param_2 + (longlong)auVar13._12_4_ * 4;
  auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(uVar16 + param_2)),0x30);
  auVar65._16_16_ = auVar88;
  auVar65._0_16_ = auVar83;
  auVar88 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar21 + param_2)),0x30);
  auVar87._16_16_ = auVar57;
  auVar87._0_16_ = auVar4;
  auVar40._16_16_ = auVar11;
  auVar40._0_16_ = auVar9;
  auVar49._16_16_ = auVar62;
  auVar49._0_16_ = auVar5;
  auVar71._16_16_ = auVar56;
  auVar71._0_16_ = auVar6;
  auVar75._16_16_ = auVar12;
  auVar75._0_16_ = auVar10;
  auVar59._16_16_ = auVar61;
  auVar59._0_16_ = auVar34;
  auVar53._16_16_ = auVar47;
  auVar53._0_16_ = auVar88;
  auVar35 = vsubps_avx(auVar40,auVar63);
  auVar36 = vsubps_avx(auVar49,auVar65);
  auVar38 = vsubps_avx(auVar71,auVar87);
  auVar40 = vsubps_avx(auVar75,auVar63);
  auVar52 = vsubps_avx(auVar59,auVar65);
  auVar58 = vsubps_avx(auVar53,auVar87);
  auVar66._0_4_ = auVar36._0_4_ * auVar40._0_4_;
  auVar66._4_4_ = auVar36._4_4_ * auVar40._4_4_;
  auVar66._8_4_ = auVar36._8_4_ * auVar40._8_4_;
  auVar66._12_4_ = auVar36._12_4_ * auVar40._12_4_;
  auVar66._16_4_ = auVar36._16_4_ * auVar40._16_4_;
  auVar66._20_4_ = auVar36._20_4_ * auVar40._20_4_;
  auVar66._24_4_ = auVar36._24_4_ * auVar40._24_4_;
  auVar66._28_4_ = auVar36._28_4_ * auVar40._28_4_;
  auVar76._0_4_ = auVar38._0_4_ * auVar52._0_4_;
  auVar76._4_4_ = auVar38._4_4_ * auVar52._4_4_;
  auVar76._8_4_ = auVar38._8_4_ * auVar52._8_4_;
  auVar76._12_4_ = auVar38._12_4_ * auVar52._12_4_;
  auVar76._16_4_ = auVar38._16_4_ * auVar52._16_4_;
  auVar76._20_4_ = auVar38._20_4_ * auVar52._20_4_;
  auVar76._24_4_ = auVar38._24_4_ * auVar52._24_4_;
  auVar76._28_4_ = auVar38._28_4_ * auVar52._28_4_;
  auVar82._0_4_ = auVar35._0_4_ * auVar58._0_4_;
  auVar82._4_4_ = auVar35._4_4_ * auVar58._4_4_;
  auVar82._8_4_ = auVar35._8_4_ * auVar58._8_4_;
  auVar82._12_4_ = auVar35._12_4_ * auVar58._12_4_;
  auVar82._16_4_ = auVar35._16_4_ * auVar58._16_4_;
  auVar82._20_4_ = auVar35._20_4_ * auVar58._20_4_;
  auVar82._24_4_ = auVar35._24_4_ * auVar58._24_4_;
  auVar82._28_4_ = auVar35._28_4_ * auVar58._28_4_;
  auVar41._0_4_ = auVar35._0_4_ * auVar52._0_4_;
  auVar41._4_4_ = auVar35._4_4_ * auVar52._4_4_;
  auVar41._8_4_ = auVar35._8_4_ * auVar52._8_4_;
  auVar41._12_4_ = auVar35._12_4_ * auVar52._12_4_;
  auVar41._16_4_ = auVar35._16_4_ * auVar52._16_4_;
  auVar41._20_4_ = auVar35._20_4_ * auVar52._20_4_;
  auVar41._24_4_ = auVar35._24_4_ * auVar52._24_4_;
  auVar41._28_4_ = auVar35._28_4_ * auVar52._28_4_;
  auVar52 = vsubps_avx(auVar66,auVar41);
  auVar50._0_4_ = auVar36._0_4_ * auVar58._0_4_;
  auVar50._4_4_ = auVar36._4_4_ * auVar58._4_4_;
  auVar50._8_4_ = auVar36._8_4_ * auVar58._8_4_;
  auVar50._12_4_ = auVar36._12_4_ * auVar58._12_4_;
  auVar50._16_4_ = auVar36._16_4_ * auVar58._16_4_;
  auVar50._20_4_ = auVar36._20_4_ * auVar58._20_4_;
  auVar50._24_4_ = auVar36._24_4_ * auVar58._24_4_;
  auVar50._28_4_ = auVar36._28_4_ * auVar58._28_4_;
  auVar35 = vsubps_avx(auVar76,auVar50);
  auVar54._0_4_ = auVar38._0_4_ * auVar40._0_4_;
  auVar54._4_4_ = auVar38._4_4_ * auVar40._4_4_;
  auVar54._8_4_ = auVar38._8_4_ * auVar40._8_4_;
  auVar54._12_4_ = auVar38._12_4_ * auVar40._12_4_;
  auVar54._16_4_ = auVar38._16_4_ * auVar40._16_4_;
  auVar54._20_4_ = auVar38._20_4_ * auVar40._20_4_;
  auVar54._24_4_ = auVar38._24_4_ * auVar40._24_4_;
  auVar54._28_4_ = auVar38._28_4_ * auVar40._28_4_;
  auVar38 = vsubps_avx(auVar82,auVar54);
  auVar60._0_4_ =
       auVar52._0_4_ * auVar52._0_4_ + auVar35._0_4_ * auVar35._0_4_ + auVar38._0_4_ * auVar38._0_4_
  ;
  auVar60._4_4_ =
       auVar52._4_4_ * auVar52._4_4_ + auVar35._4_4_ * auVar35._4_4_ + auVar38._4_4_ * auVar38._4_4_
  ;
  auVar60._8_4_ =
       auVar52._8_4_ * auVar52._8_4_ + auVar35._8_4_ * auVar35._8_4_ + auVar38._8_4_ * auVar38._8_4_
  ;
  auVar60._12_4_ =
       auVar52._12_4_ * auVar52._12_4_ +
       auVar35._12_4_ * auVar35._12_4_ + auVar38._12_4_ * auVar38._12_4_;
  auVar60._16_4_ =
       auVar52._16_4_ * auVar52._16_4_ +
       auVar35._16_4_ * auVar35._16_4_ + auVar38._16_4_ * auVar38._16_4_;
  auVar60._20_4_ =
       auVar52._20_4_ * auVar52._20_4_ +
       auVar35._20_4_ * auVar35._20_4_ + auVar38._20_4_ * auVar38._20_4_;
  auVar60._24_4_ =
       auVar52._24_4_ * auVar52._24_4_ +
       auVar35._24_4_ * auVar35._24_4_ + auVar38._24_4_ * auVar38._24_4_;
  auVar60._28_4_ =
       auVar52._28_4_ * auVar52._28_4_ +
       auVar35._28_4_ * auVar35._28_4_ + auVar38._28_4_ * auVar38._28_4_;
  auVar36 = vcmpps_avx(auVar60,
                       ___ymm_0080000000800000008000000080000000800000008000000080000000800000,2);
  auVar40 = vsqrtps_avx(auVar60);
  auVar35 = vdivps_avx(auVar35,auVar40);
  auVar38 = vdivps_avx(auVar38,auVar40);
  auVar40 = vdivps_avx(auVar52,auVar40);
  auVar35 = vblendvps_avx(auVar35,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar36);
  pauVar2 = (undefined1 (*) [16])(param_1 + (ulonglong)uVar15 * 0xc);
  auVar48._0_4_ = ~auVar36._0_4_ & auVar38._0_4_;
  auVar48._4_4_ = ~auVar36._4_4_ & auVar38._4_4_;
  auVar48._8_4_ = ~auVar36._8_4_ & auVar38._8_4_;
  auVar48._12_4_ = ~auVar36._12_4_ & auVar38._12_4_;
  auVar51._16_4_ = ~auVar36._16_4_ & auVar38._16_4_;
  auVar51._0_16_ = auVar48;
  auVar51._20_4_ = ~auVar36._20_4_ & auVar38._20_4_;
  auVar51._24_4_ = ~auVar36._24_4_ & auVar38._24_4_;
  auVar51._28_4_ = ~auVar36._28_4_ & auVar38._28_4_;
  auVar34._0_4_ = ~auVar36._0_4_ & auVar40._0_4_;
  auVar34._4_4_ = ~auVar36._4_4_ & auVar40._4_4_;
  auVar34._8_4_ = ~auVar36._8_4_ & auVar40._8_4_;
  auVar34._12_4_ = ~auVar36._12_4_ & auVar40._12_4_;
  auVar42._16_4_ = ~auVar36._16_4_ & auVar40._16_4_;
  auVar42._0_16_ = auVar34;
  auVar42._20_4_ = ~auVar36._20_4_ & auVar40._20_4_;
  auVar42._24_4_ = ~auVar36._24_4_ & auVar40._24_4_;
  auVar42._28_4_ = ~auVar36._28_4_ & auVar40._28_4_;
  auVar57 = auVar35._0_16_;
  auVar62 = auVar35._16_16_;
  auVar88 = auVar51._16_16_;
  if (cVar18 == -1) {
    auVar64._16_16_ = auVar48;
    auVar64._0_16_ = auVar57;
    auVar38 = vshufpd_avx(auVar35,auVar64,2);
    auVar40 = vperm2f128_avx(auVar42,auVar42,1);
    auVar35 = vshufps_avx(auVar42,auVar40,0x30);
    auVar35 = vshufps_avx(auVar40,auVar35,0x29);
    auVar57 = vshufpd_avx(auVar48,auVar88,1);
    auVar35 = vblendps_avx(auVar35,ZEXT1632(auVar57),7);
    auVar52 = vperm2f128_avx(auVar35,auVar35,1);
    auVar36 = vunpcklpd_avx(auVar52,auVar42);
    auVar40 = vshufps_avx(auVar40,auVar36,0x24);
    auVar36 = vperm2f128_avx(auVar38,auVar38,1);
    auVar36 = vblendps_avx(auVar38,auVar36,0x44);
    auVar36 = vpermilps_avx(auVar36,
                            ___ymm_0000000000000006000000000000000700000001000000000000000200000000)
    ;
    auVar36 = vblendps_avx(auVar36,auVar40,0xa4);
    pauVar2[1] = auVar36._16_16_;
    auVar40 = vpermilps_avx(auVar35,
                            ___ymm_0000000000000007000000000000000000000000000000010000000000000000)
    ;
    *pauVar2 = auVar36._0_16_;
    auVar35 = vshufps_avx(auVar52,auVar52,0xa9);
    auVar35 = vblendps_avx(auVar35,auVar40,0x44);
    auVar36 = vshufpd_avx(auVar38,auVar38,1);
    auVar35 = vblendps_avx(auVar35,auVar36,0x92);
    pauVar2[3] = auVar35._16_16_;
    pauVar2[2] = auVar35._0_16_;
    auVar57 = vshufps_avx(auVar62,auVar88,0x9e);
    auVar88 = vshufps_avx(auVar88,auVar88,0xff);
    auVar55._16_16_ = auVar88;
    auVar55._0_16_ = auVar57;
    auVar36 = vperm2f128_avx(auVar42,ZEXT1632(auVar57),0x21);
    auVar35 = vblendps_avx(auVar55,auVar42,0xe0);
    auVar36 = vshufps_avx(auVar36,auVar35,0x21);
    auVar35 = vshufps_avx(auVar36,auVar35,0xc2);
    pauVar2[5] = auVar35._16_16_;
    pauVar2[4] = auVar35._0_16_;
  }
  else {
    auVar56 = auVar42._16_16_;
    if ((uVar19 & 1) != 0) {
      *(int *)*pauVar2 = auVar35._0_4_;
    }
    if ((uVar19 & 2) != 0) {
      uVar3 = vextractps_avx(auVar57,1);
      *(undefined4 *)(*pauVar2 + 0xc) = uVar3;
    }
    if ((uVar19 & 4) != 0) {
      uVar3 = vextractps_avx(auVar57,2);
      *(undefined4 *)(pauVar2[1] + 8) = uVar3;
    }
    if ((uVar19 & 8) != 0) {
      uVar3 = vextractps_avx(auVar57,3);
      *(undefined4 *)(pauVar2[2] + 4) = uVar3;
    }
    if ((uVar19 & 0x10) != 0) {
      *(int *)pauVar2[3] = auVar35._16_4_;
    }
    if ((uVar19 & 0x20) != 0) {
      uVar3 = vextractps_avx(auVar62,1);
      *(undefined4 *)(pauVar2[3] + 0xc) = uVar3;
    }
    if ((uVar19 & 0x40) != 0) {
      uVar3 = vextractps_avx(auVar62,2);
      *(undefined4 *)(pauVar2[4] + 8) = uVar3;
    }
    if (cVar18 < '\0') {
      uVar3 = vextractps_avx(auVar62,3);
      *(undefined4 *)(pauVar2[5] + 4) = uVar3;
    }
    if ((uVar19 & 1) != 0) {
      *(uint *)(*pauVar2 + 4) = auVar48._0_4_;
    }
    if ((uVar19 & 2) != 0) {
      uVar3 = vextractps_avx(auVar48,1);
      *(undefined4 *)pauVar2[1] = uVar3;
    }
    if ((uVar19 & 4) != 0) {
      uVar3 = vextractps_avx(auVar48,2);
      *(undefined4 *)(pauVar2[1] + 0xc) = uVar3;
    }
    if ((uVar19 & 8) != 0) {
      uVar3 = vextractps_avx(auVar48,3);
      *(undefined4 *)(pauVar2[2] + 8) = uVar3;
    }
    if ((uVar19 & 0x10) != 0) {
      *(uint *)(pauVar2[3] + 4) = auVar51._16_4_;
    }
    if ((uVar19 & 0x20) != 0) {
      uVar3 = vextractps_avx(auVar88,1);
      *(undefined4 *)pauVar2[4] = uVar3;
    }
    if ((uVar19 & 0x40) != 0) {
      uVar3 = vextractps_avx(auVar88,2);
      *(undefined4 *)(pauVar2[4] + 0xc) = uVar3;
    }
    if (cVar18 < '\0') {
      uVar3 = vextractps_avx(auVar88,3);
      *(undefined4 *)(pauVar2[5] + 8) = uVar3;
    }
    if ((uVar19 & 1) != 0) {
      *(uint *)(*pauVar2 + 8) = auVar34._0_4_;
    }
    if ((uVar19 & 2) != 0) {
      uVar3 = vextractps_avx(auVar34,1);
      *(undefined4 *)(pauVar2[1] + 4) = uVar3;
    }
    if ((uVar19 & 4) != 0) {
      uVar3 = vextractps_avx(auVar34,2);
      *(undefined4 *)pauVar2[2] = uVar3;
    }
    if ((uVar19 & 8) != 0) {
      uVar3 = vextractps_avx(auVar34,3);
      *(undefined4 *)(pauVar2[2] + 0xc) = uVar3;
    }
    if ((uVar19 & 0x10) != 0) {
      *(uint *)(pauVar2[3] + 8) = auVar42._16_4_;
    }
    if ((uVar19 & 0x20) != 0) {
      uVar3 = vextractps_avx(auVar56,1);
      *(undefined4 *)(pauVar2[4] + 4) = uVar3;
    }
    if ((uVar19 & 0x40) != 0) {
      uVar3 = vextractps_avx(auVar56,2);
      *(undefined4 *)pauVar2[5] = uVar3;
    }
    if (cVar18 < '\0') {
      uVar3 = vextractps_avx(auVar56,3);
      *(undefined4 *)(pauVar2[5] + 0xc) = uVar3;
    }
  }
  return;
}

// GetPointNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unTArrayInt_5D__3E_CuniCuniCuni_avx @ 1405c15e0

undefined8
GetPointNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unTArrayInt_5D__3E_CuniCuniCuni_avx
          (longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,uint param_6,
          undefined1 (*param_7) [16])

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auVar14 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auVar15 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar13 [64];
  
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  fVar4 = __real_322bcc77;
  auVar21 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar15 = ZEXT1664(auVar21);
  auVar30 = vpcmpgtd_avx(param_7[1],auVar21);
  auVar14 = ZEXT1664(auVar30);
  auVar21 = vpcmpgtd_avx(*param_7,auVar21);
  auVar21 = vpor_avx(auVar21,auVar30);
  auVar13 = ZEXT1664(auVar21);
  uVar12 = auVar21._0_8_;
  if ((((SUB161(auVar21 >> 0x1f,0) & 1) == 0 && (SUB161(auVar21 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar21 >> 0x5f,0) & 1) == 0) && -1 < auVar21[0xf]) {
    if (0 < (int)param_6) {
      lVar9 = (longlong)param_4;
      if (param_6 < 4) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
          if ((int)uVar1 < 1) {
            auVar21 = SUB6416(ZEXT864(0),0);
          }
          else {
            lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
            if (uVar1 == 1) {
              lVar10 = 0;
              auVar30 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar23 = ZEXT864(0);
              lVar10 = 0;
              do {
                uVar2 = *(uint *)(lVar11 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar30._8_8_ = 0;
                  auVar30._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar21 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar23._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar23._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar23._4_4_,
                                                                 auVar21._0_4_ + auVar23._0_4_))));
                }
                uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar41._8_8_ = 0;
                  auVar41._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar21 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar23._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar23._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar23._4_4_,
                                                                 auVar21._0_4_ + auVar23._0_4_))));
                }
                auVar21 = auVar23._0_16_;
                lVar10 = lVar10 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
              auVar30 = auVar21;
              if ((uVar1 & 1) == 0) goto LAB_1405c2397;
            }
            uVar1 = *(uint *)(lVar11 + lVar10 * 4);
            auVar21 = auVar30;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar20._8_8_ = 0;
              auVar20._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar41 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar21._0_4_ = auVar41._0_4_ + auVar30._0_4_;
              auVar21._4_4_ = auVar41._4_4_ + auVar30._4_4_;
              auVar21._8_4_ = auVar41._8_4_ + auVar30._8_4_;
              auVar21._12_4_ = auVar41._12_4_ + auVar30._12_4_;
            }
          }
LAB_1405c2397:
          auVar63._0_4_ = auVar21._0_4_;
          auVar40._0_4_ = auVar63._0_4_ * auVar63._0_4_;
          auVar73._0_4_ = auVar21._4_4_;
          auVar40._4_4_ = auVar73._0_4_ * auVar73._0_4_;
          auVar78._0_4_ = auVar21._8_4_;
          auVar40._8_4_ = auVar78._0_4_ * auVar78._0_4_;
          auVar54._0_4_ = auVar21._12_4_;
          auVar40._12_4_ = auVar54._0_4_ * auVar54._0_4_;
          auVar30 = vmovshdup_avx(auVar40);
          auVar41 = vshufpd_avx(auVar40,auVar40,1);
          fVar3 = auVar41._0_4_ + auVar40._0_4_ + auVar30._0_4_;
          if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
            if (fVar4 <= fVar3) {
              auVar30 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar56._0_4_ = auVar30._0_4_;
              auVar56._0_4_ =
                   auVar56._0_4_ +
                   auVar56._0_4_ * (fVar6 - fVar3 * fVar6 * auVar56._0_4_ * auVar56._0_4_);
              auVar30 = vblendps_avx(auVar21,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar30);
              auVar41 = ZEXT416((uint)(auVar56._0_4_ +
                                      auVar56._0_4_ *
                                      (fVar6 - fVar3 * fVar6 * auVar56._0_4_ * auVar56._0_4_)));
              auVar30 = vshufps_avx(auVar41,auVar14._0_16_,0xe0);
              auVar30 = vinsertps_avx(auVar30,auVar41,0x20);
              auVar14 = ZEXT1664(auVar30);
              auVar63._0_4_ = auVar63._0_4_ * auVar30._0_4_;
              auVar63._4_4_ = auVar73._0_4_ * auVar30._4_4_;
              auVar63._8_4_ = auVar78._0_4_ * auVar30._8_4_;
              auVar63._12_4_ = auVar54._0_4_ * auVar30._12_4_;
              auVar30 = vmovshdup_avx(auVar63);
              uVar24 = auVar30._0_4_;
              auVar30 = vshufpd_avx(auVar63,auVar63,1);
              uVar25 = auVar30._0_4_;
            }
            else {
              auVar63._0_4_ = 0.0;
              uVar24 = 0;
              uVar25 = 0;
            }
          }
          else {
            auVar30 = vshufpd_avx(auVar21,auVar21,1);
            uVar25 = auVar30._0_4_;
            auVar30 = vmovshdup_avx(auVar21);
            uVar24 = auVar30._0_4_;
          }
          lVar11 = param_1 + uVar8 * 0xc;
          *(float *)(lVar11 + lVar9 * 0xc) = auVar63._0_4_;
          *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
          *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
          lVar11 = (uVar8 | 1) * 0x10;
          uVar1 = *(uint *)(param_3 + 8 + lVar11);
          if ((int)uVar1 < 1) {
            auVar42 = ZEXT816(0);
          }
          else {
            lVar11 = *(longlong *)(param_3 + lVar11);
            if (uVar1 == 1) {
              lVar10 = 0;
              auVar30 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar23 = ZEXT864(0);
              lVar10 = 0;
              do {
                uVar2 = *(uint *)(lVar11 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar49._8_8_ = 0;
                  auVar49._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar30._12_4_,
                                               CONCAT48(auVar23._8_4_ + auVar30._8_4_,
                                                        CONCAT44(auVar23._4_4_ + auVar30._4_4_,
                                                                 auVar23._0_4_ + auVar30._0_4_))));
                }
                uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar50._8_8_ = 0;
                  auVar50._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar30._12_4_,
                                               CONCAT48(auVar23._8_4_ + auVar30._8_4_,
                                                        CONCAT44(auVar23._4_4_ + auVar30._4_4_,
                                                                 auVar23._0_4_ + auVar30._0_4_))));
                }
                auVar42 = auVar23._0_16_;
                lVar10 = lVar10 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
              auVar30 = auVar42;
              if ((uVar1 & 1) == 0) goto LAB_1405c255b;
            }
            uVar1 = *(uint *)(lVar11 + lVar10 * 4);
            auVar42 = auVar30;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar51._8_8_ = 0;
              auVar51._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar41 = vinsertps_avx(auVar51,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar42._0_4_ = auVar30._0_4_ + auVar41._0_4_;
              auVar42._4_4_ = auVar30._4_4_ + auVar41._4_4_;
              auVar42._8_4_ = auVar30._8_4_ + auVar41._8_4_;
              auVar42._12_4_ = auVar30._12_4_ + auVar41._12_4_;
            }
          }
LAB_1405c255b:
          auVar73._0_4_ = auVar42._0_4_;
          auVar52._0_4_ = auVar73._0_4_ * auVar73._0_4_;
          auVar63._0_4_ = auVar42._4_4_;
          auVar52._4_4_ = auVar63._0_4_ * auVar63._0_4_;
          auVar78._0_4_ = auVar42._8_4_;
          auVar52._8_4_ = auVar78._0_4_ * auVar78._0_4_;
          auVar54._0_4_ = auVar42._12_4_;
          auVar52._12_4_ = auVar54._0_4_ * auVar54._0_4_;
          auVar30 = vmovshdup_avx(auVar52);
          auVar41 = vshufpd_avx(auVar52,auVar52,1);
          fVar3 = auVar41._0_4_ + auVar52._0_4_ + auVar30._0_4_;
          if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
            if (fVar4 <= fVar3) {
              auVar30 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar56._0_4_ = auVar30._0_4_;
              auVar56._0_4_ =
                   auVar56._0_4_ +
                   auVar56._0_4_ * (fVar6 - fVar3 * fVar6 * auVar56._0_4_ * auVar56._0_4_);
              auVar30 = vblendps_avx(auVar42,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar30);
              auVar41 = ZEXT416((uint)(auVar56._0_4_ +
                                      auVar56._0_4_ *
                                      (fVar6 - fVar3 * fVar6 * auVar56._0_4_ * auVar56._0_4_)));
              auVar30 = vshufps_avx(auVar41,auVar14._0_16_,0xe0);
              auVar30 = vinsertps_avx(auVar30,auVar41,0x20);
              auVar14 = ZEXT1664(auVar30);
              auVar73._0_4_ = auVar73._0_4_ * auVar30._0_4_;
              auVar73._4_4_ = auVar63._0_4_ * auVar30._4_4_;
              auVar73._8_4_ = auVar78._0_4_ * auVar30._8_4_;
              auVar73._12_4_ = auVar54._0_4_ * auVar30._12_4_;
              auVar30 = vmovshdup_avx(auVar73);
              uVar24 = auVar30._0_4_;
              auVar30 = vshufpd_avx(auVar73,auVar73,1);
              uVar25 = auVar30._0_4_;
            }
            else {
              auVar73._0_4_ = 0.0;
              uVar24 = 0;
              uVar25 = 0;
            }
          }
          else {
            auVar30 = vshufpd_avx(auVar42,auVar42,1);
            uVar25 = auVar30._0_4_;
            auVar30 = vmovshdup_avx(auVar42);
            uVar24 = auVar30._0_4_;
          }
          lVar11 = param_1 + (uVar8 | 1) * 0xc;
          *(float *)(lVar11 + lVar9 * 0xc) = auVar73._0_4_;
          *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
          *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
          lVar11 = (uVar8 | 2) * 0x10;
          uVar1 = *(uint *)(param_3 + 8 + lVar11);
          if ((int)uVar1 < 1) {
            auVar53 = ZEXT816(0);
          }
          else {
            lVar11 = *(longlong *)(param_3 + lVar11);
            if (uVar1 == 1) {
              lVar10 = 0;
              auVar30 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar23 = ZEXT864(0);
              lVar10 = 0;
              do {
                uVar2 = *(uint *)(lVar11 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar64._8_8_ = 0;
                  auVar64._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = vinsertps_avx(auVar64,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar30._12_4_,
                                               CONCAT48(auVar23._8_4_ + auVar30._8_4_,
                                                        CONCAT44(auVar23._4_4_ + auVar30._4_4_,
                                                                 auVar23._0_4_ + auVar30._0_4_))));
                }
                uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar65._8_8_ = 0;
                  auVar65._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar30._12_4_,
                                               CONCAT48(auVar23._8_4_ + auVar30._8_4_,
                                                        CONCAT44(auVar23._4_4_ + auVar30._4_4_,
                                                                 auVar23._0_4_ + auVar30._0_4_))));
                }
                auVar53 = auVar23._0_16_;
                lVar10 = lVar10 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
              auVar30 = auVar53;
              if ((uVar1 & 1) == 0) goto LAB_1405c272b;
            }
            uVar1 = *(uint *)(lVar11 + lVar10 * 4);
            auVar53 = auVar30;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar66._8_8_ = 0;
              auVar66._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar41 = vinsertps_avx(auVar66,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar53._0_4_ = auVar30._0_4_ + auVar41._0_4_;
              auVar53._4_4_ = auVar30._4_4_ + auVar41._4_4_;
              auVar53._8_4_ = auVar30._8_4_ + auVar41._8_4_;
              auVar53._12_4_ = auVar30._12_4_ + auVar41._12_4_;
            }
          }
LAB_1405c272b:
          auVar78._0_4_ = auVar53._0_4_;
          auVar67._0_4_ = auVar78._0_4_ * auVar78._0_4_;
          auVar63._0_4_ = auVar53._4_4_;
          auVar67._4_4_ = auVar63._0_4_ * auVar63._0_4_;
          auVar73._0_4_ = auVar53._8_4_;
          auVar67._8_4_ = auVar73._0_4_ * auVar73._0_4_;
          auVar54._0_4_ = auVar53._12_4_;
          auVar67._12_4_ = auVar54._0_4_ * auVar54._0_4_;
          auVar30 = vmovshdup_avx(auVar67);
          auVar41 = vshufpd_avx(auVar67,auVar67,1);
          fVar3 = auVar41._0_4_ + auVar67._0_4_ + auVar30._0_4_;
          if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
            if (fVar4 <= fVar3) {
              auVar30 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar56._0_4_ = auVar30._0_4_;
              auVar56._0_4_ =
                   auVar56._0_4_ +
                   auVar56._0_4_ * (fVar6 - fVar3 * fVar6 * auVar56._0_4_ * auVar56._0_4_);
              auVar30 = vblendps_avx(auVar53,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar30);
              auVar41 = ZEXT416((uint)(auVar56._0_4_ +
                                      auVar56._0_4_ *
                                      (fVar6 - fVar3 * fVar6 * auVar56._0_4_ * auVar56._0_4_)));
              auVar30 = vshufps_avx(auVar41,auVar14._0_16_,0xe0);
              auVar30 = vinsertps_avx(auVar30,auVar41,0x20);
              auVar14 = ZEXT1664(auVar30);
              auVar78._0_4_ = auVar78._0_4_ * auVar30._0_4_;
              auVar78._4_4_ = auVar63._0_4_ * auVar30._4_4_;
              auVar78._8_4_ = auVar73._0_4_ * auVar30._8_4_;
              auVar78._12_4_ = auVar54._0_4_ * auVar30._12_4_;
              auVar30 = vmovshdup_avx(auVar78);
              uVar24 = auVar30._0_4_;
              auVar30 = vshufpd_avx(auVar78,auVar78,1);
              uVar25 = auVar30._0_4_;
            }
            else {
              auVar78._0_4_ = 0.0;
              uVar24 = 0;
              uVar25 = 0;
            }
          }
          else {
            auVar30 = vshufpd_avx(auVar53,auVar53,1);
            uVar25 = auVar30._0_4_;
            auVar30 = vmovshdup_avx(auVar53);
            uVar24 = auVar30._0_4_;
          }
          lVar11 = param_1 + (uVar8 | 2) * 0xc;
          *(float *)(lVar11 + lVar9 * 0xc) = auVar78._0_4_;
          *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
          *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
          lVar11 = (uVar8 | 3) * 0x10;
          uVar1 = *(uint *)(param_3 + 8 + lVar11);
          if ((int)uVar1 < 1) {
            auVar68 = ZEXT816(0);
          }
          else {
            lVar11 = *(longlong *)(param_3 + lVar11);
            if (uVar1 == 1) {
              lVar10 = 0;
              auVar30 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar23 = ZEXT864(0);
              lVar10 = 0;
              do {
                uVar2 = *(uint *)(lVar11 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar74._8_8_ = 0;
                  auVar74._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar30._12_4_,
                                               CONCAT48(auVar23._8_4_ + auVar30._8_4_,
                                                        CONCAT44(auVar23._4_4_ + auVar30._4_4_,
                                                                 auVar23._0_4_ + auVar30._0_4_))));
                }
                uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar75._8_8_ = 0;
                  auVar75._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar30._12_4_,
                                               CONCAT48(auVar23._8_4_ + auVar30._8_4_,
                                                        CONCAT44(auVar23._4_4_ + auVar30._4_4_,
                                                                 auVar23._0_4_ + auVar30._0_4_))));
                }
                auVar68 = auVar23._0_16_;
                lVar10 = lVar10 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
              auVar30 = auVar68;
              if ((uVar1 & 1) == 0) goto LAB_1405c28fb;
            }
            uVar1 = *(uint *)(lVar11 + lVar10 * 4);
            auVar68 = auVar30;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar76._8_8_ = 0;
              auVar76._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar41 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar68._0_4_ = auVar30._0_4_ + auVar41._0_4_;
              auVar68._4_4_ = auVar30._4_4_ + auVar41._4_4_;
              auVar68._8_4_ = auVar30._8_4_ + auVar41._8_4_;
              auVar68._12_4_ = auVar30._12_4_ + auVar41._12_4_;
            }
          }
LAB_1405c28fb:
          auVar30 = vblendps_avx(auVar21,auVar15._0_16_,8);
          auVar21 = vblendps_avx(auVar21,in_ZMM3._0_16_,8);
          auVar30 = vblendps_avx(auVar42,auVar30,8);
          auVar21 = vblendps_avx(auVar42,auVar21,8);
          auVar30 = vblendps_avx(auVar53,auVar30,8);
          auVar21 = vblendps_avx(auVar53,auVar21,8);
          auVar54._0_4_ = auVar68._0_4_;
          auVar22._0_4_ = auVar54._0_4_ * auVar54._0_4_;
          auVar63._0_4_ = auVar68._4_4_;
          auVar22._4_4_ = auVar63._0_4_ * auVar63._0_4_;
          auVar73._0_4_ = auVar68._8_4_;
          auVar22._8_4_ = auVar73._0_4_ * auVar73._0_4_;
          auVar78._0_4_ = auVar68._12_4_;
          auVar22._12_4_ = auVar78._0_4_ * auVar78._0_4_;
          auVar41 = vmovshdup_avx(auVar22);
          auVar20 = vshufpd_avx(auVar22,auVar22,1);
          fVar3 = auVar20._0_4_ + auVar41._0_4_ + auVar22._0_4_;
          if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
            if (fVar4 <= fVar3) {
              auVar41 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar56._0_4_ = auVar41._0_4_;
              auVar56._0_4_ =
                   auVar56._0_4_ +
                   auVar56._0_4_ * (fVar6 - auVar56._0_4_ * auVar56._0_4_ * fVar3 * fVar6);
              auVar41 = vblendps_avx(auVar68,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar41);
              auVar20 = ZEXT416((uint)(auVar56._0_4_ +
                                      auVar56._0_4_ *
                                      (fVar6 - auVar56._0_4_ * auVar56._0_4_ * fVar3 * fVar6)));
              auVar41 = vshufps_avx(auVar20,auVar14._0_16_,0xe0);
              auVar41 = vinsertps_avx(auVar41,auVar20,0x20);
              auVar14 = ZEXT1664(auVar41);
              auVar54._0_4_ = auVar54._0_4_ * auVar41._0_4_;
              auVar54._4_4_ = auVar63._0_4_ * auVar41._4_4_;
              auVar54._8_4_ = auVar73._0_4_ * auVar41._8_4_;
              auVar54._12_4_ = auVar78._0_4_ * auVar41._12_4_;
              auVar41 = vmovshdup_avx(auVar54);
              uVar24 = auVar41._0_4_;
              auVar41 = vshufpd_avx(auVar54,auVar54,1);
              uVar25 = auVar41._0_4_;
            }
            else {
              auVar54._0_4_ = 0.0;
              uVar24 = 0;
              uVar25 = 0;
            }
          }
          else {
            auVar41 = vshufpd_avx(auVar68,auVar68,1);
            uVar25 = auVar41._0_4_;
            auVar41 = vmovshdup_avx(auVar68);
            uVar24 = auVar41._0_4_;
          }
          auVar30 = vblendps_avx(auVar68,auVar30,8);
          auVar15 = ZEXT1664(auVar30);
          auVar21 = vblendps_avx(auVar68,auVar21,8);
          in_ZMM3 = ZEXT1664(auVar21);
          lVar11 = param_1 + (uVar8 | 3) * 0xc;
          *(float *)(lVar11 + lVar9 * 0xc) = auVar54._0_4_;
          *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
          *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
          uVar8 = uVar8 + 4;
        } while (uVar8 != (param_6 & 0x7ffffffc));
      }
      fVar6 = __real_3f000000;
      fVar5 = __real_3f800000;
      fVar4 = __real_322bcc77;
      uVar12 = auVar13._0_8_;
      if ((ulonglong)(param_6 & 3) != 0) {
        uVar7 = 0;
        do {
          uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
          if ((int)uVar1 < 1) {
            auVar17 = SUB6416(ZEXT864(0),0);
          }
          else {
            lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
            if (uVar1 == 1) {
              lVar10 = 0;
              auVar21 = SUB6416(ZEXT864(0),0);
            }
            else {
              auVar23 = ZEXT864(0);
              lVar10 = 0;
              do {
                uVar2 = *(uint *)(lVar11 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar31._8_8_ = 0;
                  auVar31._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar21 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar23._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar23._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar23._4_4_,
                                                                 auVar21._0_4_ + auVar23._0_4_))));
                }
                uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar32._8_8_ = 0;
                  auVar32._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar21 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_2 + 8 +
                                                                   (ulonglong)uVar2 * 0xc)),0x28);
                  auVar23 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar23._12_4_,
                                               CONCAT48(auVar21._8_4_ + auVar23._8_4_,
                                                        CONCAT44(auVar21._4_4_ + auVar23._4_4_,
                                                                 auVar21._0_4_ + auVar23._0_4_))));
                }
                auVar17 = auVar23._0_16_;
                lVar10 = lVar10 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
              auVar21 = auVar17;
              if ((uVar1 & 1) == 0) goto LAB_1405c19f6;
            }
            uVar1 = *(uint *)(lVar11 + lVar10 * 4);
            auVar17 = auVar21;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar33._8_8_ = 0;
              auVar33._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar30 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc
                                                               )),0x28);
              auVar17._0_4_ = auVar30._0_4_ + auVar21._0_4_;
              auVar17._4_4_ = auVar30._4_4_ + auVar21._4_4_;
              auVar17._8_4_ = auVar30._8_4_ + auVar21._8_4_;
              auVar17._12_4_ = auVar30._12_4_ + auVar21._12_4_;
            }
          }
LAB_1405c19f6:
          auVar56._0_4_ = auVar17._0_4_;
          auVar34._0_4_ = auVar56._0_4_ * auVar56._0_4_;
          auVar63._0_4_ = auVar17._4_4_;
          auVar34._4_4_ = auVar63._0_4_ * auVar63._0_4_;
          auVar73._0_4_ = auVar17._8_4_;
          auVar34._8_4_ = auVar73._0_4_ * auVar73._0_4_;
          auVar78._0_4_ = auVar17._12_4_;
          auVar34._12_4_ = auVar78._0_4_ * auVar78._0_4_;
          auVar21 = vmovshdup_avx(auVar34);
          auVar30 = vshufpd_avx(auVar34,auVar34,1);
          fVar3 = auVar30._0_4_ + auVar34._0_4_ + auVar21._0_4_;
          if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
            if (fVar4 <= fVar3) {
              auVar21 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
              auVar54._0_4_ = auVar21._0_4_;
              auVar54._0_4_ =
                   auVar54._0_4_ +
                   auVar54._0_4_ * (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_);
              auVar21 = vblendps_avx(auVar17,auVar13._0_16_,8);
              auVar13 = ZEXT1664(auVar21);
              auVar30 = ZEXT416((uint)(auVar54._0_4_ +
                                      auVar54._0_4_ *
                                      (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_)));
              auVar21 = vshufps_avx(auVar30,auVar14._0_16_,0xe0);
              auVar21 = vinsertps_avx(auVar21,auVar30,0x20);
              auVar14 = ZEXT1664(auVar21);
              auVar56._0_4_ = auVar56._0_4_ * auVar21._0_4_;
              auVar56._4_4_ = auVar63._0_4_ * auVar21._4_4_;
              auVar56._8_4_ = auVar73._0_4_ * auVar21._8_4_;
              auVar56._12_4_ = auVar78._0_4_ * auVar21._12_4_;
              auVar21 = vmovshdup_avx(auVar56);
              uVar24 = auVar21._0_4_;
              auVar21 = vshufpd_avx(auVar56,auVar56,1);
              uVar25 = auVar21._0_4_;
            }
            else {
              auVar56._0_4_ = 0.0;
              uVar24 = 0;
              uVar25 = 0;
            }
          }
          else {
            auVar21 = vshufpd_avx(auVar17,auVar17,1);
            uVar25 = auVar21._0_4_;
            auVar21 = vmovshdup_avx(auVar17);
            uVar24 = auVar21._0_4_;
          }
          uVar12 = auVar13._0_8_;
          auVar21 = vblendps_avx(auVar17,auVar15._0_16_,8);
          auVar15 = ZEXT1664(auVar21);
          auVar21 = vblendps_avx(auVar17,in_ZMM3._0_16_,8);
          in_ZMM3 = ZEXT1664(auVar21);
          lVar11 = param_1 + uVar8 * 0xc;
          *(float *)(lVar11 + lVar9 * 0xc) = auVar56._0_4_;
          *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
          *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != (param_6 & 3));
      }
    }
  }
  else if (0 < (int)param_6) {
    lVar9 = (longlong)param_4;
    if (param_6 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar18 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar21 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar23 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar35._8_8_ = 0;
                auVar35._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar23._4_4_,
                                                               auVar21._0_4_ + auVar23._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar36._8_8_ = 0;
                auVar36._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar23._4_4_,
                                                               auVar21._0_4_ + auVar23._0_4_))));
              }
              auVar18 = auVar23._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar21 = auVar18;
            if ((uVar1 & 1) == 0) goto LAB_1405c1c27;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar18 = auVar21;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar37._8_8_ = 0;
            auVar37._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar30 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar18._0_4_ = auVar30._0_4_ + auVar21._0_4_;
            auVar18._4_4_ = auVar30._4_4_ + auVar21._4_4_;
            auVar18._8_4_ = auVar30._8_4_ + auVar21._8_4_;
            auVar18._12_4_ = auVar30._12_4_ + auVar21._12_4_;
          }
        }
LAB_1405c1c27:
        auVar57._0_4_ = auVar18._0_4_;
        auVar38._0_4_ = auVar57._0_4_ * auVar57._0_4_;
        auVar63._0_4_ = auVar18._4_4_;
        auVar38._4_4_ = auVar63._0_4_ * auVar63._0_4_;
        auVar73._0_4_ = auVar18._8_4_;
        auVar38._8_4_ = auVar73._0_4_ * auVar73._0_4_;
        auVar78._0_4_ = auVar18._12_4_;
        auVar38._12_4_ = auVar78._0_4_ * auVar78._0_4_;
        auVar21 = vmovshdup_avx(auVar38);
        auVar30 = vshufpd_avx(auVar38,auVar38,1);
        fVar3 = auVar30._0_4_ + auVar38._0_4_ + auVar21._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar21 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar54._0_4_ = auVar21._0_4_;
            auVar54._0_4_ =
                 auVar54._0_4_ +
                 auVar54._0_4_ * (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_);
            auVar21 = vblendps_avx(auVar18,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar21);
            auVar30 = ZEXT416((uint)(auVar54._0_4_ +
                                    auVar54._0_4_ *
                                    (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_)));
            auVar21 = vshufps_avx(auVar30,auVar14._0_16_,0xe0);
            auVar21 = vinsertps_avx(auVar21,auVar30,0x20);
            auVar14 = ZEXT1664(auVar21);
            auVar57._0_4_ = auVar57._0_4_ * auVar21._0_4_;
            auVar57._4_4_ = auVar63._0_4_ * auVar21._4_4_;
            auVar57._8_4_ = auVar73._0_4_ * auVar21._8_4_;
            auVar57._12_4_ = auVar78._0_4_ * auVar21._12_4_;
            auVar21 = vmovshdup_avx(auVar57);
            uVar24 = auVar21._0_4_;
            auVar21 = vshufpd_avx(auVar57,auVar57,1);
            uVar25 = auVar21._0_4_;
          }
          else {
            auVar57._0_4_ = 0.0;
            uVar24 = 0;
            uVar25 = 0;
          }
        }
        else {
          auVar21 = vshufpd_avx(auVar18,auVar18,1);
          uVar25 = auVar21._0_4_;
          auVar21 = vmovshdup_avx(auVar18);
          uVar24 = auVar21._0_4_;
        }
        lVar11 = param_1 + uVar8 * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar57._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
        lVar11 = (uVar8 | 1) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar39 = ZEXT816(0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar21 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar23 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar43._8_8_ = 0;
                auVar43._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar23._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar23._4_4_ + auVar21._4_4_,
                                                               auVar23._0_4_ + auVar21._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar44._8_8_ = 0;
                auVar44._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar23._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar23._4_4_ + auVar21._4_4_,
                                                               auVar23._0_4_ + auVar21._0_4_))));
              }
              auVar39 = auVar23._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar21 = auVar39;
            if ((uVar1 & 1) == 0) goto LAB_1405c1deb;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar39 = auVar21;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar45._8_8_ = 0;
            auVar45._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar30 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar39._0_4_ = auVar21._0_4_ + auVar30._0_4_;
            auVar39._4_4_ = auVar21._4_4_ + auVar30._4_4_;
            auVar39._8_4_ = auVar21._8_4_ + auVar30._8_4_;
            auVar39._12_4_ = auVar21._12_4_ + auVar30._12_4_;
          }
        }
LAB_1405c1deb:
        auVar69._0_4_ = auVar39._0_4_;
        auVar46._0_4_ = auVar69._0_4_ * auVar69._0_4_;
        auVar63._0_4_ = auVar39._4_4_;
        auVar46._4_4_ = auVar63._0_4_ * auVar63._0_4_;
        auVar73._0_4_ = auVar39._8_4_;
        auVar46._8_4_ = auVar73._0_4_ * auVar73._0_4_;
        auVar78._0_4_ = auVar39._12_4_;
        auVar46._12_4_ = auVar78._0_4_ * auVar78._0_4_;
        auVar21 = vmovshdup_avx(auVar46);
        auVar30 = vshufpd_avx(auVar46,auVar46,1);
        fVar3 = auVar30._0_4_ + auVar46._0_4_ + auVar21._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar21 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar54._0_4_ = auVar21._0_4_;
            auVar54._0_4_ =
                 auVar54._0_4_ +
                 auVar54._0_4_ * (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_);
            auVar21 = vblendps_avx(auVar39,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar21);
            auVar30 = ZEXT416((uint)(auVar54._0_4_ +
                                    auVar54._0_4_ *
                                    (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_)));
            auVar21 = vshufps_avx(auVar30,auVar14._0_16_,0xe0);
            auVar21 = vinsertps_avx(auVar21,auVar30,0x20);
            auVar14 = ZEXT1664(auVar21);
            auVar69._0_4_ = auVar69._0_4_ * auVar21._0_4_;
            auVar69._4_4_ = auVar63._0_4_ * auVar21._4_4_;
            auVar69._8_4_ = auVar73._0_4_ * auVar21._8_4_;
            auVar69._12_4_ = auVar78._0_4_ * auVar21._12_4_;
            auVar21 = vmovshdup_avx(auVar69);
            uVar24 = auVar21._0_4_;
            auVar21 = vshufpd_avx(auVar69,auVar69,1);
            uVar25 = auVar21._0_4_;
          }
          else {
            auVar69._0_4_ = 0.0;
            uVar24 = 0;
            uVar25 = 0;
          }
        }
        else {
          auVar21 = vshufpd_avx(auVar39,auVar39,1);
          uVar25 = auVar21._0_4_;
          auVar21 = vmovshdup_avx(auVar39);
          uVar24 = auVar21._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 1) * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar69._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
        lVar11 = (uVar8 | 2) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar47 = ZEXT816(0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar21 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar23 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar58._8_8_ = 0;
                auVar58._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar23._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar23._4_4_ + auVar21._4_4_,
                                                               auVar23._0_4_ + auVar21._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar59._8_8_ = 0;
                auVar59._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar23._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar23._4_4_ + auVar21._4_4_,
                                                               auVar23._0_4_ + auVar21._0_4_))));
              }
              auVar47 = auVar23._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar21 = auVar47;
            if ((uVar1 & 1) == 0) goto LAB_1405c1fbb;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar47 = auVar21;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar60._8_8_ = 0;
            auVar60._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar30 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar47._0_4_ = auVar21._0_4_ + auVar30._0_4_;
            auVar47._4_4_ = auVar21._4_4_ + auVar30._4_4_;
            auVar47._8_4_ = auVar21._8_4_ + auVar30._8_4_;
            auVar47._12_4_ = auVar21._12_4_ + auVar30._12_4_;
          }
        }
LAB_1405c1fbb:
        auVar77._0_4_ = auVar47._0_4_;
        auVar61._0_4_ = auVar77._0_4_ * auVar77._0_4_;
        auVar63._0_4_ = auVar47._4_4_;
        auVar61._4_4_ = auVar63._0_4_ * auVar63._0_4_;
        auVar73._0_4_ = auVar47._8_4_;
        auVar61._8_4_ = auVar73._0_4_ * auVar73._0_4_;
        auVar78._0_4_ = auVar47._12_4_;
        auVar61._12_4_ = auVar78._0_4_ * auVar78._0_4_;
        auVar21 = vmovshdup_avx(auVar61);
        auVar30 = vshufpd_avx(auVar61,auVar61,1);
        fVar3 = auVar30._0_4_ + auVar61._0_4_ + auVar21._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar21 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar54._0_4_ = auVar21._0_4_;
            auVar54._0_4_ =
                 auVar54._0_4_ +
                 auVar54._0_4_ * (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_);
            auVar21 = vblendps_avx(auVar47,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar21);
            auVar30 = ZEXT416((uint)(auVar54._0_4_ +
                                    auVar54._0_4_ *
                                    (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_)));
            auVar21 = vshufps_avx(auVar30,auVar14._0_16_,0xe0);
            auVar21 = vinsertps_avx(auVar21,auVar30,0x20);
            auVar14 = ZEXT1664(auVar21);
            auVar77._0_4_ = auVar77._0_4_ * auVar21._0_4_;
            auVar77._4_4_ = auVar63._0_4_ * auVar21._4_4_;
            auVar77._8_4_ = auVar73._0_4_ * auVar21._8_4_;
            auVar77._12_4_ = auVar78._0_4_ * auVar21._12_4_;
            auVar21 = vmovshdup_avx(auVar77);
            uVar24 = auVar21._0_4_;
            auVar21 = vshufpd_avx(auVar77,auVar77,1);
            uVar25 = auVar21._0_4_;
          }
          else {
            auVar77._0_4_ = 0.0;
            uVar24 = 0;
            uVar25 = 0;
          }
        }
        else {
          auVar21 = vshufpd_avx(auVar47,auVar47,1);
          uVar25 = auVar21._0_4_;
          auVar21 = vmovshdup_avx(auVar47);
          uVar24 = auVar21._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 2) * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar77._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
        lVar11 = (uVar8 | 3) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar62 = ZEXT816(0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar21 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar23 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar70._8_8_ = 0;
                auVar70._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar23._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar23._4_4_ + auVar21._4_4_,
                                                               auVar23._0_4_ + auVar21._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar71._8_8_ = 0;
                auVar71._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar23._12_4_ + auVar21._12_4_,
                                             CONCAT48(auVar23._8_4_ + auVar21._8_4_,
                                                      CONCAT44(auVar23._4_4_ + auVar21._4_4_,
                                                               auVar23._0_4_ + auVar21._0_4_))));
              }
              auVar62 = auVar23._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar21 = auVar62;
            if ((uVar1 & 1) == 0) goto LAB_1405c218b;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar62 = auVar21;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar72._8_8_ = 0;
            auVar72._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar30 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar62._0_4_ = auVar21._0_4_ + auVar30._0_4_;
            auVar62._4_4_ = auVar21._4_4_ + auVar30._4_4_;
            auVar62._8_4_ = auVar21._8_4_ + auVar30._8_4_;
            auVar62._12_4_ = auVar21._12_4_ + auVar30._12_4_;
          }
        }
LAB_1405c218b:
        auVar21 = vblendps_avx(auVar18,auVar15._0_16_,8);
        auVar30 = vblendps_avx(auVar18,in_ZMM3._0_16_,8);
        auVar21 = vblendps_avx(auVar39,auVar21,8);
        auVar30 = vblendps_avx(auVar39,auVar30,8);
        auVar21 = vblendps_avx(auVar47,auVar21,8);
        auVar30 = vblendps_avx(auVar47,auVar30,8);
        auVar48._0_4_ = auVar62._0_4_;
        auVar19._0_4_ = auVar48._0_4_ * auVar48._0_4_;
        auVar63._0_4_ = auVar62._4_4_;
        auVar19._4_4_ = auVar63._0_4_ * auVar63._0_4_;
        auVar73._0_4_ = auVar62._8_4_;
        auVar19._8_4_ = auVar73._0_4_ * auVar73._0_4_;
        auVar78._0_4_ = auVar62._12_4_;
        auVar19._12_4_ = auVar78._0_4_ * auVar78._0_4_;
        auVar41 = vmovshdup_avx(auVar19);
        auVar20 = vshufpd_avx(auVar19,auVar19,1);
        fVar3 = auVar20._0_4_ + auVar41._0_4_ + auVar19._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar41 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar54._0_4_ = auVar41._0_4_;
            auVar54._0_4_ =
                 auVar54._0_4_ +
                 auVar54._0_4_ * (fVar6 - auVar54._0_4_ * auVar54._0_4_ * fVar3 * fVar6);
            auVar41 = vblendps_avx(auVar62,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar41);
            auVar20 = ZEXT416((uint)(auVar54._0_4_ +
                                    auVar54._0_4_ *
                                    (fVar6 - auVar54._0_4_ * auVar54._0_4_ * fVar3 * fVar6)));
            auVar41 = vshufps_avx(auVar20,auVar14._0_16_,0xe0);
            auVar41 = vinsertps_avx(auVar41,auVar20,0x20);
            auVar14 = ZEXT1664(auVar41);
            auVar48._0_4_ = auVar48._0_4_ * auVar41._0_4_;
            auVar48._4_4_ = auVar63._0_4_ * auVar41._4_4_;
            auVar48._8_4_ = auVar73._0_4_ * auVar41._8_4_;
            auVar48._12_4_ = auVar78._0_4_ * auVar41._12_4_;
            auVar41 = vmovshdup_avx(auVar48);
            uVar24 = auVar41._0_4_;
            auVar41 = vshufpd_avx(auVar48,auVar48,1);
            uVar25 = auVar41._0_4_;
          }
          else {
            auVar48._0_4_ = 0.0;
            uVar24 = 0;
            uVar25 = 0;
          }
        }
        else {
          auVar41 = vshufpd_avx(auVar62,auVar62,1);
          uVar25 = auVar41._0_4_;
          auVar41 = vmovshdup_avx(auVar62);
          uVar24 = auVar41._0_4_;
        }
        auVar21 = vblendps_avx(auVar62,auVar21,8);
        auVar15 = ZEXT1664(auVar21);
        auVar21 = vblendps_avx(auVar62,auVar30,8);
        in_ZMM3 = ZEXT1664(auVar21);
        lVar11 = param_1 + (uVar8 | 3) * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar48._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
        uVar8 = uVar8 + 4;
      } while (uVar8 != (param_6 & 0x7ffffffc));
    }
    fVar6 = __real_3f000000;
    fVar5 = __real_3f800000;
    fVar4 = __real_322bcc77;
    uVar12 = auVar13._0_8_;
    if ((ulonglong)(param_6 & 3) != 0) {
      uVar7 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar16 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar21 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar23 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar26._8_8_ = 0;
                auVar26._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar23._4_4_,
                                                               auVar21._0_4_ + auVar23._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar27._8_8_ = 0;
                auVar27._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar21 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar23 = ZEXT1664(CONCAT412(auVar21._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar21._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar21._4_4_ + auVar23._4_4_,
                                                               auVar21._0_4_ + auVar23._0_4_))));
              }
              auVar16 = auVar23._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar21 = auVar16;
            if ((uVar1 & 1) == 0) goto LAB_1405c17d6;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar16 = auVar21;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar28._8_8_ = 0;
            auVar28._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar30 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar16._0_4_ = auVar30._0_4_ + auVar21._0_4_;
            auVar16._4_4_ = auVar30._4_4_ + auVar21._4_4_;
            auVar16._8_4_ = auVar30._8_4_ + auVar21._8_4_;
            auVar16._12_4_ = auVar30._12_4_ + auVar21._12_4_;
          }
        }
LAB_1405c17d6:
        auVar55._0_4_ = auVar16._0_4_;
        auVar29._0_4_ = auVar55._0_4_ * auVar55._0_4_;
        auVar63._0_4_ = auVar16._4_4_;
        auVar29._4_4_ = auVar63._0_4_ * auVar63._0_4_;
        auVar73._0_4_ = auVar16._8_4_;
        auVar29._8_4_ = auVar73._0_4_ * auVar73._0_4_;
        auVar78._0_4_ = auVar16._12_4_;
        auVar29._12_4_ = auVar78._0_4_ * auVar78._0_4_;
        auVar21 = vmovshdup_avx(auVar29);
        auVar30 = vshufpd_avx(auVar29,auVar29,1);
        fVar3 = auVar30._0_4_ + auVar29._0_4_ + auVar21._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar21 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar54._0_4_ = auVar21._0_4_;
            auVar54._0_4_ =
                 auVar54._0_4_ +
                 auVar54._0_4_ * (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_);
            auVar21 = vblendps_avx(auVar16,auVar13._0_16_,8);
            auVar13 = ZEXT1664(auVar21);
            auVar30 = ZEXT416((uint)(auVar54._0_4_ +
                                    auVar54._0_4_ *
                                    (fVar6 - fVar3 * fVar6 * auVar54._0_4_ * auVar54._0_4_)));
            auVar21 = vshufps_avx(auVar30,auVar14._0_16_,0xe0);
            auVar21 = vinsertps_avx(auVar21,auVar30,0x20);
            auVar14 = ZEXT1664(auVar21);
            auVar55._0_4_ = auVar55._0_4_ * auVar21._0_4_;
            auVar55._4_4_ = auVar63._0_4_ * auVar21._4_4_;
            auVar55._8_4_ = auVar73._0_4_ * auVar21._8_4_;
            auVar55._12_4_ = auVar78._0_4_ * auVar21._12_4_;
            auVar21 = vmovshdup_avx(auVar55);
            uVar24 = auVar21._0_4_;
            auVar21 = vshufpd_avx(auVar55,auVar55,1);
            uVar25 = auVar21._0_4_;
          }
          else {
            auVar55._0_4_ = 0.0;
            uVar24 = 0;
            uVar25 = 0;
          }
        }
        else {
          auVar21 = vshufpd_avx(auVar16,auVar16,1);
          uVar25 = auVar21._0_4_;
          auVar21 = vmovshdup_avx(auVar16);
          uVar24 = auVar21._0_4_;
        }
        uVar12 = auVar13._0_8_;
        auVar21 = vblendps_avx(auVar16,auVar15._0_16_,8);
        auVar15 = ZEXT1664(auVar21);
        auVar21 = vblendps_avx(auVar16,in_ZMM3._0_16_,8);
        in_ZMM3 = ZEXT1664(auVar21);
        lVar11 = param_1 + uVar8 * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar55._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar24;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar25;
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != (param_6 & 3));
    }
  }
  return uVar12;
}

// GetFaceNormals_avx @ 1405c29c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetFaceNormals_avx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [16];
  undefined4 uVar3;
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
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  char cVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  undefined1 auVar34 [16];
  uint uVar43;
  uint uVar44;
  uint uVar46;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  uint uVar45;
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar61 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [16];
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
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [16];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [16];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
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
  undefined1 auVar42 [32];
  undefined1 auVar51 [32];
  undefined1 auVar92 [32];
  
  auVar40 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
  auVar38 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  auVar36 = ___ymm_0000000600000007000000040000000000000001000000020000000000000000;
  auVar35 = ___ymm_0000000000000007000000040000000500000000000000020000000300000000;
  uVar19 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar19 = param_4;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar25 = 0x40;
    uVar15 = 0;
    auVar52._4_4_ = __real_00800000;
    auVar52._0_4_ = __real_00800000;
    auVar52._8_4_ = __real_00800000;
    auVar52._12_4_ = __real_00800000;
    auVar52._16_4_ = __real_00800000;
    auVar52._20_4_ = __real_00800000;
    auVar52._24_4_ = __real_00800000;
    auVar52._28_4_ = __real_00800000;
    auVar58._4_4_ = __real_3f800000;
    auVar58._0_4_ = __real_3f800000;
    auVar58._8_4_ = __real_3f800000;
    auVar58._12_4_ = __real_3f800000;
    auVar58._16_4_ = __real_3f800000;
    auVar58._20_4_ = __real_3f800000;
    auVar58._24_4_ = __real_3f800000;
    auVar58._28_4_ = __real_3f800000;
    do {
      auVar88 = *(undefined1 (*) [16])(param_3 + -0x40 + lVar25);
      auVar57 = *(undefined1 (*) [16])(param_3 + -0x30 + lVar25);
      auVar62 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar25);
      auVar56 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar25);
      auVar89._16_16_ = auVar57;
      auVar89._0_16_ = auVar88;
      auVar99._16_16_ = auVar56;
      auVar99._0_16_ = auVar62;
      auVar61 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar25);
      uVar3 = *(undefined4 *)(param_3 + -0x18 + lVar25);
      auVar94._20_4_ = uVar3;
      auVar94._16_4_ = uVar3;
      auVar94._24_4_ = uVar3;
      auVar94._28_4_ = uVar3;
      uVar3 = *(undefined4 *)(param_3 + -0x1c + lVar25);
      auVar94._4_4_ = uVar3;
      auVar94._0_4_ = uVar3;
      auVar94._8_4_ = uVar3;
      auVar94._12_4_ = uVar3;
      auVar103._16_16_ = auVar61;
      auVar103._0_16_ = *(undefined1 (*) [16])(param_3 + lVar25);
      auVar77._16_16_ = auVar88;
      auVar77._0_16_ = auVar57;
      auVar69 = vblendps_avx(auVar89,auVar77,0x24);
      auVar69 = vpermilps_avx(auVar69,auVar35);
      auVar69 = vblendps_avx(auVar69,auVar94,0x88);
      auVar78._16_16_ = *(undefined1 (*) [16])(param_3 + lVar25);
      auVar78._0_16_ = auVar61;
      auVar74 = vblendps_avx(auVar78,auVar103,0x44);
      auVar74 = vpermilps_avx(auVar74,auVar36);
      uVar3 = *(undefined4 *)(param_3 + -0xc + lVar25);
      auVar84._20_4_ = uVar3;
      auVar84._16_4_ = uVar3;
      auVar84._24_4_ = uVar3;
      auVar84._28_4_ = uVar3;
      auVar88 = vshufps_avx(auVar56,auVar56,0xec);
      auVar84._0_16_ = auVar88;
      auVar74 = vblendps_avx(auVar74,auVar84,0x13);
      auVar77 = vblendps_avx(auVar99,auVar89,0x24);
      auVar67._16_16_ = auVar62;
      auVar67._0_16_ = auVar57;
      auVar77 = vshufps_avx(auVar67,auVar77,0x21);
      auVar67 = vshufps_avx(auVar77,auVar99,0xc2);
      auVar77 = vshufps_avx(auVar78,auVar103,0xc4);
      auVar77 = vblendps_avx(auVar67,auVar77,0xe0);
      lVar30 = (longlong)(auVar69._0_4_ * 3);
      lVar22 = (longlong)(auVar69._4_4_ * 3);
      lVar23 = (longlong)(auVar69._8_4_ * 3);
      lVar17 = (longlong)(auVar69._12_4_ * 3);
      lVar31 = (longlong)(auVar74._0_4_ * 3);
      lVar26 = (longlong)(auVar74._4_4_ * 3);
      lVar28 = (longlong)(auVar74._8_4_ * 3);
      lVar20 = (longlong)(auVar74._12_4_ * 3);
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar31 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar26 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar17 * 4)),0x30);
      auVar68._16_16_ = auVar88;
      auVar68._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar26 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),0x30);
      auVar62 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar26 * 4)),0x10);
      auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(param_2 + 8 + lVar28 * 4)),0x20);
      auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(param_2 + 8 + lVar20 * 4)),0x30);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),0x10);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),0x20);
      auVar72._16_16_ = auVar88;
      auVar72._0_16_ = auVar57;
      auVar88 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),0x30);
      auVar79._16_16_ = auVar62;
      auVar79._0_16_ = auVar88;
      lVar30 = (longlong)(auVar69._16_4_ * 3);
      lVar22 = (longlong)(auVar69._20_4_ * 3);
      lVar23 = (longlong)(auVar69._24_4_ * 3);
      lVar17 = (longlong)(auVar69._28_4_ * 3);
      lVar26 = (longlong)(auVar74._16_4_ * 3);
      lVar31 = (longlong)(auVar74._20_4_ * 3);
      lVar28 = (longlong)(auVar74._24_4_ * 3);
      lVar20 = (longlong)(auVar74._28_4_ * 3);
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar17 * 4)),0x30);
      auVar95._16_16_ = auVar88;
      auVar95._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),0x30);
      auVar97._16_16_ = auVar88;
      auVar97._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 8 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 8 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar30 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),0x30);
      auVar100._16_16_ = auVar88;
      auVar100._0_16_ = auVar57;
      lVar22 = (longlong)(auVar67._0_4_ * 3);
      lVar23 = (longlong)(auVar67._4_4_ * 3);
      lVar17 = (longlong)(auVar67._8_4_ * 3);
      lVar30 = (longlong)(auVar67._12_4_ * 3);
      lVar26 = (longlong)(auVar77._16_4_ * 3);
      lVar31 = (longlong)(auVar77._20_4_ * 3);
      lVar28 = (longlong)(auVar77._24_4_ * 3);
      lVar20 = (longlong)(auVar77._28_4_ * 3);
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar22 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar23 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar17 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + lVar30 * 4)),0x30);
      auVar85._16_16_ = auVar88;
      auVar85._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 4 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 4 + lVar30 * 4)),0x30);
      auVar90._16_16_ = auVar88;
      auVar90._0_16_ = auVar57;
      auVar88 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar26 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),0x10);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 8 + lVar28 * 4)),0x20);
      auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(param_2 + 8 + lVar20 * 4)),0x30);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),0x10);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),0x20);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_2 + 8 + lVar30 * 4)),0x30);
      auVar102._16_16_ = auVar88;
      auVar102._0_16_ = auVar57;
      auVar69 = vsubps_avx(auVar95,auVar68);
      auVar74 = vsubps_avx(auVar85,auVar68);
      auVar77 = vsubps_avx(auVar97,auVar72);
      auVar67 = vsubps_avx(auVar100,auVar79);
      auVar68 = vsubps_avx(auVar90,auVar72);
      auVar72 = vsubps_avx(auVar102,auVar79);
      auVar91._0_4_ = auVar77._0_4_ * auVar74._0_4_;
      auVar91._4_4_ = auVar77._4_4_ * auVar74._4_4_;
      auVar91._8_4_ = auVar77._8_4_ * auVar74._8_4_;
      auVar91._12_4_ = auVar77._12_4_ * auVar74._12_4_;
      auVar91._16_4_ = auVar77._16_4_ * auVar74._16_4_;
      auVar91._20_4_ = auVar77._20_4_ * auVar74._20_4_;
      auVar91._24_4_ = auVar77._24_4_ * auVar74._24_4_;
      auVar91._28_4_ = auVar77._28_4_ * auVar74._28_4_;
      auVar101._0_4_ = auVar67._0_4_ * auVar68._0_4_;
      auVar101._4_4_ = auVar67._4_4_ * auVar68._4_4_;
      auVar101._8_4_ = auVar67._8_4_ * auVar68._8_4_;
      auVar101._12_4_ = auVar67._12_4_ * auVar68._12_4_;
      auVar101._16_4_ = auVar67._16_4_ * auVar68._16_4_;
      auVar101._20_4_ = auVar67._20_4_ * auVar68._20_4_;
      auVar101._24_4_ = auVar67._24_4_ * auVar68._24_4_;
      auVar101._28_4_ = auVar67._28_4_ * auVar68._28_4_;
      auVar73._0_4_ = auVar69._0_4_ * auVar68._0_4_;
      auVar73._4_4_ = auVar69._4_4_ * auVar68._4_4_;
      auVar73._8_4_ = auVar69._8_4_ * auVar68._8_4_;
      auVar73._12_4_ = auVar69._12_4_ * auVar68._12_4_;
      auVar73._16_4_ = auVar69._16_4_ * auVar68._16_4_;
      auVar73._20_4_ = auVar69._20_4_ * auVar68._20_4_;
      auVar73._24_4_ = auVar69._24_4_ * auVar68._24_4_;
      auVar73._28_4_ = auVar69._28_4_ * auVar68._28_4_;
      auVar96._0_4_ = auVar69._0_4_ * auVar72._0_4_;
      auVar96._4_4_ = auVar69._4_4_ * auVar72._4_4_;
      auVar96._8_4_ = auVar69._8_4_ * auVar72._8_4_;
      auVar96._12_4_ = auVar69._12_4_ * auVar72._12_4_;
      auVar96._16_4_ = auVar69._16_4_ * auVar72._16_4_;
      auVar96._20_4_ = auVar69._20_4_ * auVar72._20_4_;
      auVar96._24_4_ = auVar69._24_4_ * auVar72._24_4_;
      auVar96._28_4_ = auVar69._28_4_ * auVar72._28_4_;
      auVar68 = vsubps_avx(auVar91,auVar73);
      auVar80._0_4_ = auVar77._0_4_ * auVar72._0_4_;
      auVar80._4_4_ = auVar77._4_4_ * auVar72._4_4_;
      auVar80._8_4_ = auVar77._8_4_ * auVar72._8_4_;
      auVar80._12_4_ = auVar77._12_4_ * auVar72._12_4_;
      auVar80._16_4_ = auVar77._16_4_ * auVar72._16_4_;
      auVar80._20_4_ = auVar77._20_4_ * auVar72._20_4_;
      auVar80._24_4_ = auVar77._24_4_ * auVar72._24_4_;
      auVar80._28_4_ = auVar77._28_4_ * auVar72._28_4_;
      auVar77 = vsubps_avx(auVar101,auVar80);
      auVar69._0_4_ = auVar67._0_4_ * auVar74._0_4_;
      auVar69._4_4_ = auVar67._4_4_ * auVar74._4_4_;
      auVar69._8_4_ = auVar67._8_4_ * auVar74._8_4_;
      auVar69._12_4_ = auVar67._12_4_ * auVar74._12_4_;
      auVar69._16_4_ = auVar67._16_4_ * auVar74._16_4_;
      auVar69._20_4_ = auVar67._20_4_ * auVar74._20_4_;
      auVar69._24_4_ = auVar67._24_4_ * auVar74._24_4_;
      auVar69._28_4_ = auVar67._28_4_ * auVar74._28_4_;
      auVar67 = vsubps_avx(auVar96,auVar69);
      auVar86._0_4_ =
           auVar68._0_4_ * auVar68._0_4_ +
           auVar77._0_4_ * auVar77._0_4_ + auVar67._0_4_ * auVar67._0_4_;
      auVar86._4_4_ =
           auVar68._4_4_ * auVar68._4_4_ +
           auVar77._4_4_ * auVar77._4_4_ + auVar67._4_4_ * auVar67._4_4_;
      auVar86._8_4_ =
           auVar68._8_4_ * auVar68._8_4_ +
           auVar77._8_4_ * auVar77._8_4_ + auVar67._8_4_ * auVar67._8_4_;
      auVar86._12_4_ =
           auVar68._12_4_ * auVar68._12_4_ +
           auVar77._12_4_ * auVar77._12_4_ + auVar67._12_4_ * auVar67._12_4_;
      auVar86._16_4_ =
           auVar68._16_4_ * auVar68._16_4_ +
           auVar77._16_4_ * auVar77._16_4_ + auVar67._16_4_ * auVar67._16_4_;
      auVar86._20_4_ =
           auVar68._20_4_ * auVar68._20_4_ +
           auVar77._20_4_ * auVar77._20_4_ + auVar67._20_4_ * auVar67._20_4_;
      auVar86._24_4_ =
           auVar68._24_4_ * auVar68._24_4_ +
           auVar77._24_4_ * auVar77._24_4_ + auVar67._24_4_ * auVar67._24_4_;
      auVar86._28_4_ =
           auVar68._28_4_ * auVar68._28_4_ +
           auVar77._28_4_ * auVar77._28_4_ + auVar67._28_4_ * auVar67._28_4_;
      auVar69 = vsqrtps_avx(auVar86);
      auVar74 = vdivps_avx(auVar77,auVar69);
      auVar67 = vdivps_avx(auVar67,auVar69);
      auVar68 = vdivps_avx(auVar68,auVar69);
      auVar69 = vcmpps_avx(auVar86,auVar52,2);
      auVar77 = vblendvps_avx(auVar74,auVar58,auVar69);
      auVar88._0_4_ = ~auVar69._0_4_ & auVar67._0_4_;
      auVar88._4_4_ = ~auVar69._4_4_ & auVar67._4_4_;
      auVar88._8_4_ = ~auVar69._8_4_ & auVar67._8_4_;
      auVar88._12_4_ = ~auVar69._12_4_ & auVar67._12_4_;
      auVar92._16_4_ = ~auVar69._16_4_ & auVar67._16_4_;
      auVar92._0_16_ = auVar88;
      auVar92._20_4_ = ~auVar69._20_4_ & auVar67._20_4_;
      auVar92._24_4_ = ~auVar69._24_4_ & auVar67._24_4_;
      auVar92._28_4_ = ~auVar69._28_4_ & auVar67._28_4_;
      auVar70._0_4_ = ~auVar69._0_4_ & auVar68._0_4_;
      auVar70._4_4_ = ~auVar69._4_4_ & auVar68._4_4_;
      auVar70._8_4_ = ~auVar69._8_4_ & auVar68._8_4_;
      auVar70._12_4_ = ~auVar69._12_4_ & auVar68._12_4_;
      auVar70._16_4_ = ~auVar69._16_4_ & auVar68._16_4_;
      auVar70._20_4_ = ~auVar69._20_4_ & auVar68._20_4_;
      auVar70._24_4_ = ~auVar69._24_4_ & auVar68._24_4_;
      auVar70._28_4_ = ~auVar69._28_4_ & auVar68._28_4_;
      auVar74._16_16_ = auVar88;
      auVar74._0_16_ = auVar77._0_16_;
      auVar74 = vshufpd_avx(auVar77,auVar74,2);
      auVar57 = auVar92._16_16_;
      auVar88 = vpalignr_avx(auVar57,auVar88,8);
      auVar68 = vperm2f128_avx(auVar70,auVar70,1);
      auVar69 = vshufps_avx(auVar70,auVar68,0x30);
      auVar69 = vshufps_avx(auVar68,auVar69,0x29);
      auVar69 = vblendps_avx(auVar69,ZEXT1632(auVar88),7);
      auVar72 = vperm2f128_avx(auVar69,auVar69,1);
      auVar67 = vunpcklpd_avx(auVar72,auVar70);
      auVar67 = vshufps_avx(auVar68,auVar67,0x24);
      auVar68 = vperm2f128_avx(auVar74,auVar74,1);
      auVar74 = vblendps_avx(auVar74,auVar68,0x44);
      auVar74 = vpermilps_avx(auVar74,auVar38);
      auVar74 = vblendps_avx(auVar74,auVar67,0xa4);
      *(undefined1 (*) [16])(param_1 + -0x30 + lVar25) = auVar74._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x40 + lVar25) = auVar74._0_16_;
      auVar74 = vpermilps_avx(auVar69,auVar40);
      auVar69 = vshufps_avx(auVar72,auVar72,0xa9);
      auVar69 = vblendps_avx(auVar69,auVar74,0x44);
      auVar74 = vshufpd_avx(auVar77,auVar77,1);
      auVar69 = vblendps_avx(auVar69,auVar74,0x92);
      *(undefined1 (*) [16])(param_1 + -0x10 + lVar25) = auVar69._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x20 + lVar25) = auVar69._0_16_;
      auVar88 = vshufps_avx(auVar77._16_16_,auVar57,0x9e);
      auVar57 = vshufps_avx(auVar57,auVar57,0xff);
      auVar81._16_16_ = auVar57;
      auVar81._0_16_ = auVar88;
      auVar74 = vperm2f128_avx(auVar70,ZEXT1632(auVar88),0x21);
      auVar69 = vblendps_avx(auVar81,auVar70,0xe0);
      auVar74 = vshufps_avx(auVar74,auVar69,0x21);
      auVar69 = vshufps_avx(auVar74,auVar69,0xc2);
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar25) = auVar69._16_16_;
      *(undefined1 (*) [16])(param_1 + lVar25) = auVar69._0_16_;
      lVar25 = lVar25 + 0x60;
      uVar15 = uVar15 + 8;
    } while ((int)uVar15 < (int)(uVar19 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar15) {
      return;
    }
  }
  auVar88 = vpshufd_avx(ZEXT416(uVar15),0);
  auVar35._16_16_ = auVar88;
  auVar35._0_16_ = auVar88;
  auVar62 = vpshufd_avx(ZEXT416(param_4),0);
  pauVar1 = (undefined1 (*) [32])(param_3 + (ulonglong)uVar15 * 0xc);
  auVar56 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar61 = SUB3216(auVar35 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar88 = vpcmpgtd_avx(auVar62,auVar61);
  auVar57 = vpcmpgtd_avx(auVar62,auVar56);
  auVar36._16_16_ = auVar88;
  auVar36._0_16_ = auVar57;
  uVar19 = vmovmskps_avx(auVar36);
  if (uVar19 == 0xff) {
    auVar40 = pauVar1[2];
    auVar38._16_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar38._0_16_ = *(undefined1 (*) [16])(*pauVar1 + 0x10);
    auVar35 = vblendps_avx(*pauVar1,auVar38,0x24);
    auVar36 = vpermilps_avx(auVar35,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar3 = *(undefined4 *)(pauVar1[1] + 4);
    auVar98._4_4_ = uVar3;
    auVar98._0_4_ = uVar3;
    auVar98._8_4_ = uVar3;
    auVar98._12_4_ = uVar3;
    uVar3 = *(undefined4 *)(pauVar1[1] + 8);
    auVar98._20_4_ = uVar3;
    auVar98._16_4_ = uVar3;
    auVar98._24_4_ = uVar3;
    auVar98._28_4_ = uVar3;
    auVar93._16_16_ = *(undefined1 (*) [16])pauVar1[2];
    auVar93._0_16_ = *(undefined1 (*) [16])(pauVar1[2] + 0x10);
    auVar35 = vblendps_avx(auVar93,auVar40,0x44);
    auVar38 = vpermilps_avx(auVar35,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar35 = vblendps_avx(auVar36,auVar98,0x88);
    auVar88 = vshufps_avx(*(undefined1 (*) [16])(pauVar1[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar1[1] + 0x10),0xec);
    uVar3 = *(undefined4 *)(pauVar1[1] + 0x14);
    auVar39._20_4_ = uVar3;
    auVar39._16_4_ = uVar3;
    auVar39._24_4_ = uVar3;
    auVar39._28_4_ = uVar3;
    auVar39._0_16_ = auVar88;
    auVar36 = vblendps_avx(auVar38,auVar39,0x13);
    auVar37._16_16_ = auVar36._0_16_;
    auVar37._0_16_ = auVar35._0_16_;
    auVar38 = vperm2f128_avx(auVar35,auVar36,0x31);
    auVar35 = vblendps_avx(pauVar1[1],*pauVar1,0x24);
    auVar35 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar1 + 0x10)),auVar35,0x21);
    auVar35 = vshufps_avx(auVar35,pauVar1[1],0xc2);
    auVar36 = vshufps_avx(auVar93,auVar40,0xc4);
    auVar35 = vblendps_avx(auVar35,auVar36,0xe0);
  }
  else {
    auVar88 = vpcmpgtd_avx(auVar62,auVar61);
    auVar57 = vpcmpgtd_avx(auVar62,auVar56);
    uVar33 = auVar57._0_4_;
    auVar47._0_4_ = uVar33 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar43 = auVar57._4_4_;
    auVar47._4_4_ = uVar43 & _UNK_150b50b04;
    uVar44 = auVar57._8_4_;
    auVar47._8_4_ = uVar44 & _UNK_150b50b08;
    uVar45 = auVar57._12_4_;
    auVar47._12_4_ = uVar45 & _UNK_150b50b0c;
    uVar46 = auVar88._0_4_;
    vextractps_avx(auVar47,1);
    vextractps_avx(auVar47,2);
    vextractps_avx(auVar47,3);
    auVar57._0_4_ = uVar33 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar57._4_4_ = uVar43 & _UNK_150b50b24;
    auVar57._8_4_ = uVar44 & _UNK_150b50b28;
    auVar57._12_4_ = uVar45 & _UNK_150b50b2c;
    vextractps_avx(auVar57,1);
    vextractps_avx(auVar57,2);
    vextractps_avx(auVar57,3);
    auVar83._0_4_ = uVar33 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar83._4_4_ = uVar43 & _UNK_150b50b44;
    auVar83._8_4_ = uVar44 & _UNK_150b50b48;
    auVar83._12_4_ = uVar45 & _UNK_150b50b4c;
    vextractps_avx(auVar83,1);
    vextractps_avx(auVar83,2);
    auVar37 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (uVar46 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar1)));
    vextractps_avx(auVar83,3);
    auVar38 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (uVar46 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar57._0_4_))));
    auVar35 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (uVar46 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar83._0_4_))));
  }
  cVar18 = (char)uVar19;
  auVar83 = vpcmpgtd_avx(auVar62,auVar61);
  auVar14 = vpcmpgtd_avx(auVar62,auVar56);
  auVar62._4_4_ = auVar37._20_4_ * 3;
  auVar62._0_4_ = auVar37._16_4_ * 3;
  auVar62._8_4_ = auVar37._24_4_ * 3;
  auVar62._12_4_ = auVar37._28_4_ * 3;
  auVar8 = vpand_avx(auVar83,auVar62);
  lVar25 = param_2 + (longlong)auVar8._0_4_ * 4;
  lVar17 = param_2 + (longlong)auVar8._4_4_ * 4;
  lVar20 = param_2 + (longlong)auVar8._8_4_ * 4;
  uVar16 = (ulonglong)(auVar83._4_4_ & _UNK_150b50d54);
  uVar24 = (ulonglong)(auVar83._8_4_ & _UNK_150b50d58);
  uVar27 = (ulonglong)(auVar83._0_4_ & _UNK_150b50d50);
  auVar88 = vinsertps_avx(ZEXT416(*(uint *)(uVar27 + lVar25)),ZEXT416(*(uint *)(uVar16 + lVar17)),
                          0x10);
  auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(uVar24 + lVar20)),0x20);
  uVar29 = (ulonglong)(auVar83._4_4_ & _UNK_150b50d74);
  uVar21 = (ulonglong)(auVar83._0_4_ & _UNK_150b50d70);
  uVar32 = (ulonglong)(auVar83._8_4_ & _UNK_150b50d78);
  auVar57 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar25)),ZEXT416(*(uint *)(uVar29 + lVar17)),
                          0x10);
  auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(uVar32 + lVar20)),0x20);
  auVar56._4_4_ = auVar38._20_4_ * 3;
  auVar56._0_4_ = auVar38._16_4_ * 3;
  auVar56._8_4_ = auVar38._24_4_ * 3;
  auVar56._12_4_ = auVar38._28_4_ * 3;
  auVar9 = vpand_avx(auVar56,auVar83);
  lVar25 = param_2 + (longlong)auVar9._0_4_ * 4;
  auVar61._4_4_ = auVar35._20_4_ * 3;
  auVar61._0_4_ = auVar35._16_4_ * 3;
  auVar61._8_4_ = auVar35._24_4_ * 3;
  auVar61._12_4_ = auVar35._28_4_ * 3;
  auVar10 = vpand_avx(auVar61,auVar83);
  lVar17 = param_2 + (longlong)auVar10._0_4_ * 4;
  lVar20 = param_2 + (longlong)auVar9._4_4_ * 4;
  auVar62 = vinsertps_avx(ZEXT416(*(uint *)(uVar27 + lVar25)),ZEXT416(*(uint *)(uVar16 + lVar20)),
                          0x10);
  auVar56 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar25)),ZEXT416(*(uint *)(uVar29 + lVar20)),
                          0x10);
  lVar25 = param_2 + (longlong)auVar10._4_4_ * 4;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)(uVar27 + lVar17)),ZEXT416(*(uint *)(uVar16 + lVar25)),
                          0x10);
  auVar47 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar17)),ZEXT416(*(uint *)(uVar29 + lVar25)),
                          0x10);
  lVar25 = param_2 + (longlong)auVar9._8_4_ * 4;
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(uVar24 + lVar25)),0x20);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(uVar32 + lVar25)),0x20);
  lVar25 = param_2 + (longlong)auVar10._8_4_ * 4;
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(uVar24 + lVar25)),0x20);
  auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar32 + lVar25)),0x20);
  lVar25 = param_2 + (longlong)auVar8._12_4_ * 4;
  uVar16 = (ulonglong)(auVar83._12_4_ & _UNK_150b50d5c);
  auVar88 = vinsertps_avx(auVar88,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  uVar21 = (ulonglong)(auVar83._12_4_ & _UNK_150b50d7c);
  auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  lVar25 = param_2 + (longlong)auVar9._12_4_ * 4;
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  lVar25 = param_2 + (longlong)auVar10._12_4_ * 4;
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  auVar4._4_4_ = auVar37._4_4_ * 3;
  auVar4._0_4_ = auVar37._0_4_ * 3;
  auVar4._8_4_ = auVar37._8_4_ * 3;
  auVar4._12_4_ = auVar37._12_4_ * 3;
  auVar11 = vpand_avx(auVar14,auVar4);
  lVar25 = param_2 + (longlong)auVar11._0_4_ * 4;
  uVar27 = (ulonglong)(auVar14._4_4_ & _UNK_150b50d44);
  uVar24 = (ulonglong)
           (auVar14._0_4_ & ___ymm_0000000400000004000000040000000400000004000000040000000400000004)
  ;
  uVar21 = (ulonglong)
           (auVar14._0_4_ & ___ymm_0000000800000008000000080000000800000008000000080000000800000008)
  ;
  auVar5._4_4_ = auVar38._4_4_ * 3;
  auVar5._0_4_ = auVar38._0_4_ * 3;
  auVar5._8_4_ = auVar38._8_4_ * 3;
  auVar5._12_4_ = auVar38._12_4_ * 3;
  auVar12 = vpand_avx(auVar14,auVar5);
  lVar17 = param_2 + (longlong)auVar12._0_4_ * 4;
  auVar6._4_4_ = auVar35._4_4_ * 3;
  auVar6._0_4_ = auVar35._0_4_ * 3;
  auVar6._8_4_ = auVar35._8_4_ * 3;
  auVar6._12_4_ = auVar35._12_4_ * 3;
  auVar13 = vpand_avx(auVar14,auVar6);
  lVar20 = param_2 + (longlong)auVar13._0_4_ * 4;
  lVar22 = param_2 + (longlong)auVar11._4_4_ * 4;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar24 + lVar25)),ZEXT416(*(uint *)(uVar27 + lVar22)),
                          0x10);
  uVar16 = (ulonglong)(auVar14._4_4_ & _UNK_150b50d64);
  auVar4 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar25)),ZEXT416(*(uint *)(uVar16 + lVar22)),
                         0x10);
  lVar25 = param_2 + (longlong)auVar12._4_4_ * 4;
  auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar24 + lVar17)),ZEXT416(*(uint *)(uVar27 + lVar25)),
                         0x10);
  auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar17)),ZEXT416(*(uint *)(uVar16 + lVar25)),
                         0x10);
  lVar25 = param_2 + (longlong)auVar13._4_4_ * 4;
  auVar34 = vinsertps_avx(ZEXT416(*(uint *)(uVar24 + lVar20)),ZEXT416(*(uint *)(uVar27 + lVar25)),
                          0x10);
  auVar48 = vinsertps_avx(ZEXT416(*(uint *)(uVar21 + lVar20)),ZEXT416(*(uint *)(uVar16 + lVar25)),
                          0x10);
  lVar25 = param_2 + (longlong)auVar11._8_4_ * 4;
  uVar21 = (ulonglong)(auVar14._8_4_ & _UNK_150b50d48);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar21 + lVar25)),0x20);
  uVar16 = (ulonglong)(auVar14._8_4_ & _UNK_150b50d68);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar16 + lVar25)),0x20);
  lVar25 = param_2 + (longlong)auVar12._8_4_ * 4;
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar21 + lVar25)),0x20);
  auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar16 + lVar25)),0x20);
  lVar25 = param_2 + (longlong)auVar13._8_4_ * 4;
  auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(uVar21 + lVar25)),0x20);
  auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar16 + lVar25)),0x20);
  uVar16 = (ulonglong)(auVar14._12_4_ & _UNK_150b50d4c);
  auVar7 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar8._0_4_ * 4)),
                         ZEXT416(*(uint *)(param_2 + (longlong)auVar8._4_4_ * 4)),0x10);
  auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(param_2 + (longlong)auVar8._8_4_ * 4)),0x20);
  auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(param_2 + (longlong)auVar8._12_4_ * 4)),0x30);
  uVar21 = (ulonglong)(auVar14._12_4_ & _UNK_150b50d6c);
  auVar8 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar11._0_4_ * 4)),
                         ZEXT416(*(uint *)(param_2 + (longlong)auVar11._4_4_ * 4)),0x10);
  auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(param_2 + (longlong)auVar11._8_4_ * 4)),0x20);
  auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(param_2 + (longlong)auVar11._12_4_ * 4)),0x30);
  lVar25 = param_2 + (longlong)auVar11._12_4_ * 4;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  auVar11 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar9._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar9._4_4_ * 4)),0x10);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_2 + (longlong)auVar9._8_4_ * 4)),0x20);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_2 + (longlong)auVar9._12_4_ * 4)),0x30);
  auVar9 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar12._0_4_ * 4)),
                         ZEXT416(*(uint *)(param_2 + (longlong)auVar12._4_4_ * 4)),0x10);
  auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(param_2 + (longlong)auVar12._8_4_ * 4)),0x20);
  auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(param_2 + (longlong)auVar12._12_4_ * 4)),0x30);
  lVar25 = param_2 + (longlong)auVar12._12_4_ * 4;
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar16 + lVar25)),0x30);
  auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar21 + lVar25)),0x30);
  auVar12 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar10._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar10._4_4_ * 4)),0x10);
  auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + (longlong)auVar10._8_4_ * 4)),0x20);
  auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + (longlong)auVar10._12_4_ * 4)),0x30);
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar13._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar13._4_4_ * 4)),0x10);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_2 + (longlong)auVar13._8_4_ * 4)),0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_2 + (longlong)auVar13._12_4_ * 4)),0x30);
  auVar63._16_16_ = auVar7;
  auVar63._0_16_ = auVar8;
  param_2 = param_2 + (longlong)auVar13._12_4_ * 4;
  auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(uVar16 + param_2)),0x30);
  auVar65._16_16_ = auVar88;
  auVar65._0_16_ = auVar83;
  auVar88 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar21 + param_2)),0x30);
  auVar87._16_16_ = auVar57;
  auVar87._0_16_ = auVar4;
  auVar40._16_16_ = auVar11;
  auVar40._0_16_ = auVar9;
  auVar49._16_16_ = auVar62;
  auVar49._0_16_ = auVar5;
  auVar71._16_16_ = auVar56;
  auVar71._0_16_ = auVar6;
  auVar75._16_16_ = auVar12;
  auVar75._0_16_ = auVar10;
  auVar59._16_16_ = auVar61;
  auVar59._0_16_ = auVar34;
  auVar53._16_16_ = auVar47;
  auVar53._0_16_ = auVar88;
  auVar35 = vsubps_avx(auVar40,auVar63);
  auVar36 = vsubps_avx(auVar49,auVar65);
  auVar38 = vsubps_avx(auVar71,auVar87);
  auVar40 = vsubps_avx(auVar75,auVar63);
  auVar52 = vsubps_avx(auVar59,auVar65);
  auVar58 = vsubps_avx(auVar53,auVar87);
  auVar66._0_4_ = auVar36._0_4_ * auVar40._0_4_;
  auVar66._4_4_ = auVar36._4_4_ * auVar40._4_4_;
  auVar66._8_4_ = auVar36._8_4_ * auVar40._8_4_;
  auVar66._12_4_ = auVar36._12_4_ * auVar40._12_4_;
  auVar66._16_4_ = auVar36._16_4_ * auVar40._16_4_;
  auVar66._20_4_ = auVar36._20_4_ * auVar40._20_4_;
  auVar66._24_4_ = auVar36._24_4_ * auVar40._24_4_;
  auVar66._28_4_ = auVar36._28_4_ * auVar40._28_4_;
  auVar76._0_4_ = auVar38._0_4_ * auVar52._0_4_;
  auVar76._4_4_ = auVar38._4_4_ * auVar52._4_4_;
  auVar76._8_4_ = auVar38._8_4_ * auVar52._8_4_;
  auVar76._12_4_ = auVar38._12_4_ * auVar52._12_4_;
  auVar76._16_4_ = auVar38._16_4_ * auVar52._16_4_;
  auVar76._20_4_ = auVar38._20_4_ * auVar52._20_4_;
  auVar76._24_4_ = auVar38._24_4_ * auVar52._24_4_;
  auVar76._28_4_ = auVar38._28_4_ * auVar52._28_4_;
  auVar82._0_4_ = auVar35._0_4_ * auVar58._0_4_;
  auVar82._4_4_ = auVar35._4_4_ * auVar58._4_4_;
  auVar82._8_4_ = auVar35._8_4_ * auVar58._8_4_;
  auVar82._12_4_ = auVar35._12_4_ * auVar58._12_4_;
  auVar82._16_4_ = auVar35._16_4_ * auVar58._16_4_;
  auVar82._20_4_ = auVar35._20_4_ * auVar58._20_4_;
  auVar82._24_4_ = auVar35._24_4_ * auVar58._24_4_;
  auVar82._28_4_ = auVar35._28_4_ * auVar58._28_4_;
  auVar41._0_4_ = auVar35._0_4_ * auVar52._0_4_;
  auVar41._4_4_ = auVar35._4_4_ * auVar52._4_4_;
  auVar41._8_4_ = auVar35._8_4_ * auVar52._8_4_;
  auVar41._12_4_ = auVar35._12_4_ * auVar52._12_4_;
  auVar41._16_4_ = auVar35._16_4_ * auVar52._16_4_;
  auVar41._20_4_ = auVar35._20_4_ * auVar52._20_4_;
  auVar41._24_4_ = auVar35._24_4_ * auVar52._24_4_;
  auVar41._28_4_ = auVar35._28_4_ * auVar52._28_4_;
  auVar52 = vsubps_avx(auVar66,auVar41);
  auVar50._0_4_ = auVar36._0_4_ * auVar58._0_4_;
  auVar50._4_4_ = auVar36._4_4_ * auVar58._4_4_;
  auVar50._8_4_ = auVar36._8_4_ * auVar58._8_4_;
  auVar50._12_4_ = auVar36._12_4_ * auVar58._12_4_;
  auVar50._16_4_ = auVar36._16_4_ * auVar58._16_4_;
  auVar50._20_4_ = auVar36._20_4_ * auVar58._20_4_;
  auVar50._24_4_ = auVar36._24_4_ * auVar58._24_4_;
  auVar50._28_4_ = auVar36._28_4_ * auVar58._28_4_;
  auVar35 = vsubps_avx(auVar76,auVar50);
  auVar54._0_4_ = auVar38._0_4_ * auVar40._0_4_;
  auVar54._4_4_ = auVar38._4_4_ * auVar40._4_4_;
  auVar54._8_4_ = auVar38._8_4_ * auVar40._8_4_;
  auVar54._12_4_ = auVar38._12_4_ * auVar40._12_4_;
  auVar54._16_4_ = auVar38._16_4_ * auVar40._16_4_;
  auVar54._20_4_ = auVar38._20_4_ * auVar40._20_4_;
  auVar54._24_4_ = auVar38._24_4_ * auVar40._24_4_;
  auVar54._28_4_ = auVar38._28_4_ * auVar40._28_4_;
  auVar38 = vsubps_avx(auVar82,auVar54);
  auVar60._0_4_ =
       auVar52._0_4_ * auVar52._0_4_ + auVar35._0_4_ * auVar35._0_4_ + auVar38._0_4_ * auVar38._0_4_
  ;
  auVar60._4_4_ =
       auVar52._4_4_ * auVar52._4_4_ + auVar35._4_4_ * auVar35._4_4_ + auVar38._4_4_ * auVar38._4_4_
  ;
  auVar60._8_4_ =
       auVar52._8_4_ * auVar52._8_4_ + auVar35._8_4_ * auVar35._8_4_ + auVar38._8_4_ * auVar38._8_4_
  ;
  auVar60._12_4_ =
       auVar52._12_4_ * auVar52._12_4_ +
       auVar35._12_4_ * auVar35._12_4_ + auVar38._12_4_ * auVar38._12_4_;
  auVar60._16_4_ =
       auVar52._16_4_ * auVar52._16_4_ +
       auVar35._16_4_ * auVar35._16_4_ + auVar38._16_4_ * auVar38._16_4_;
  auVar60._20_4_ =
       auVar52._20_4_ * auVar52._20_4_ +
       auVar35._20_4_ * auVar35._20_4_ + auVar38._20_4_ * auVar38._20_4_;
  auVar60._24_4_ =
       auVar52._24_4_ * auVar52._24_4_ +
       auVar35._24_4_ * auVar35._24_4_ + auVar38._24_4_ * auVar38._24_4_;
  auVar60._28_4_ =
       auVar52._28_4_ * auVar52._28_4_ +
       auVar35._28_4_ * auVar35._28_4_ + auVar38._28_4_ * auVar38._28_4_;
  auVar36 = vcmpps_avx(auVar60,
                       ___ymm_0080000000800000008000000080000000800000008000000080000000800000,2);
  auVar40 = vsqrtps_avx(auVar60);
  auVar35 = vdivps_avx(auVar35,auVar40);
  auVar38 = vdivps_avx(auVar38,auVar40);
  auVar40 = vdivps_avx(auVar52,auVar40);
  auVar35 = vblendvps_avx(auVar35,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar36);
  pauVar2 = (undefined1 (*) [16])(param_1 + (ulonglong)uVar15 * 0xc);
  auVar48._0_4_ = ~auVar36._0_4_ & auVar38._0_4_;
  auVar48._4_4_ = ~auVar36._4_4_ & auVar38._4_4_;
  auVar48._8_4_ = ~auVar36._8_4_ & auVar38._8_4_;
  auVar48._12_4_ = ~auVar36._12_4_ & auVar38._12_4_;
  auVar51._16_4_ = ~auVar36._16_4_ & auVar38._16_4_;
  auVar51._0_16_ = auVar48;
  auVar51._20_4_ = ~auVar36._20_4_ & auVar38._20_4_;
  auVar51._24_4_ = ~auVar36._24_4_ & auVar38._24_4_;
  auVar51._28_4_ = ~auVar36._28_4_ & auVar38._28_4_;
  auVar34._0_4_ = ~auVar36._0_4_ & auVar40._0_4_;
  auVar34._4_4_ = ~auVar36._4_4_ & auVar40._4_4_;
  auVar34._8_4_ = ~auVar36._8_4_ & auVar40._8_4_;
  auVar34._12_4_ = ~auVar36._12_4_ & auVar40._12_4_;
  auVar42._16_4_ = ~auVar36._16_4_ & auVar40._16_4_;
  auVar42._0_16_ = auVar34;
  auVar42._20_4_ = ~auVar36._20_4_ & auVar40._20_4_;
  auVar42._24_4_ = ~auVar36._24_4_ & auVar40._24_4_;
  auVar42._28_4_ = ~auVar36._28_4_ & auVar40._28_4_;
  auVar57 = auVar35._0_16_;
  auVar62 = auVar35._16_16_;
  auVar88 = auVar51._16_16_;
  if (cVar18 == -1) {
    auVar64._16_16_ = auVar48;
    auVar64._0_16_ = auVar57;
    auVar38 = vshufpd_avx(auVar35,auVar64,2);
    auVar40 = vperm2f128_avx(auVar42,auVar42,1);
    auVar35 = vshufps_avx(auVar42,auVar40,0x30);
    auVar35 = vshufps_avx(auVar40,auVar35,0x29);
    auVar57 = vshufpd_avx(auVar48,auVar88,1);
    auVar35 = vblendps_avx(auVar35,ZEXT1632(auVar57),7);
    auVar52 = vperm2f128_avx(auVar35,auVar35,1);
    auVar36 = vunpcklpd_avx(auVar52,auVar42);
    auVar40 = vshufps_avx(auVar40,auVar36,0x24);
    auVar36 = vperm2f128_avx(auVar38,auVar38,1);
    auVar36 = vblendps_avx(auVar38,auVar36,0x44);
    auVar36 = vpermilps_avx(auVar36,
                            ___ymm_0000000000000006000000000000000700000001000000000000000200000000)
    ;
    auVar36 = vblendps_avx(auVar36,auVar40,0xa4);
    pauVar2[1] = auVar36._16_16_;
    auVar40 = vpermilps_avx(auVar35,
                            ___ymm_0000000000000007000000000000000000000000000000010000000000000000)
    ;
    *pauVar2 = auVar36._0_16_;
    auVar35 = vshufps_avx(auVar52,auVar52,0xa9);
    auVar35 = vblendps_avx(auVar35,auVar40,0x44);
    auVar36 = vshufpd_avx(auVar38,auVar38,1);
    auVar35 = vblendps_avx(auVar35,auVar36,0x92);
    pauVar2[3] = auVar35._16_16_;
    pauVar2[2] = auVar35._0_16_;
    auVar57 = vshufps_avx(auVar62,auVar88,0x9e);
    auVar88 = vshufps_avx(auVar88,auVar88,0xff);
    auVar55._16_16_ = auVar88;
    auVar55._0_16_ = auVar57;
    auVar36 = vperm2f128_avx(auVar42,ZEXT1632(auVar57),0x21);
    auVar35 = vblendps_avx(auVar55,auVar42,0xe0);
    auVar36 = vshufps_avx(auVar36,auVar35,0x21);
    auVar35 = vshufps_avx(auVar36,auVar35,0xc2);
    pauVar2[5] = auVar35._16_16_;
    pauVar2[4] = auVar35._0_16_;
  }
  else {
    auVar56 = auVar42._16_16_;
    if ((uVar19 & 1) != 0) {
      *(int *)*pauVar2 = auVar35._0_4_;
    }
    if ((uVar19 & 2) != 0) {
      uVar3 = vextractps_avx(auVar57,1);
      *(undefined4 *)(*pauVar2 + 0xc) = uVar3;
    }
    if ((uVar19 & 4) != 0) {
      uVar3 = vextractps_avx(auVar57,2);
      *(undefined4 *)(pauVar2[1] + 8) = uVar3;
    }
    if ((uVar19 & 8) != 0) {
      uVar3 = vextractps_avx(auVar57,3);
      *(undefined4 *)(pauVar2[2] + 4) = uVar3;
    }
    if ((uVar19 & 0x10) != 0) {
      *(int *)pauVar2[3] = auVar35._16_4_;
    }
    if ((uVar19 & 0x20) != 0) {
      uVar3 = vextractps_avx(auVar62,1);
      *(undefined4 *)(pauVar2[3] + 0xc) = uVar3;
    }
    if ((uVar19 & 0x40) != 0) {
      uVar3 = vextractps_avx(auVar62,2);
      *(undefined4 *)(pauVar2[4] + 8) = uVar3;
    }
    if (cVar18 < '\0') {
      uVar3 = vextractps_avx(auVar62,3);
      *(undefined4 *)(pauVar2[5] + 4) = uVar3;
    }
    if ((uVar19 & 1) != 0) {
      *(uint *)(*pauVar2 + 4) = auVar48._0_4_;
    }
    if ((uVar19 & 2) != 0) {
      uVar3 = vextractps_avx(auVar48,1);
      *(undefined4 *)pauVar2[1] = uVar3;
    }
    if ((uVar19 & 4) != 0) {
      uVar3 = vextractps_avx(auVar48,2);
      *(undefined4 *)(pauVar2[1] + 0xc) = uVar3;
    }
    if ((uVar19 & 8) != 0) {
      uVar3 = vextractps_avx(auVar48,3);
      *(undefined4 *)(pauVar2[2] + 8) = uVar3;
    }
    if ((uVar19 & 0x10) != 0) {
      *(uint *)(pauVar2[3] + 4) = auVar51._16_4_;
    }
    if ((uVar19 & 0x20) != 0) {
      uVar3 = vextractps_avx(auVar88,1);
      *(undefined4 *)pauVar2[4] = uVar3;
    }
    if ((uVar19 & 0x40) != 0) {
      uVar3 = vextractps_avx(auVar88,2);
      *(undefined4 *)(pauVar2[4] + 0xc) = uVar3;
    }
    if (cVar18 < '\0') {
      uVar3 = vextractps_avx(auVar88,3);
      *(undefined4 *)(pauVar2[5] + 8) = uVar3;
    }
    if ((uVar19 & 1) != 0) {
      *(uint *)(*pauVar2 + 8) = auVar34._0_4_;
    }
    if ((uVar19 & 2) != 0) {
      uVar3 = vextractps_avx(auVar34,1);
      *(undefined4 *)(pauVar2[1] + 4) = uVar3;
    }
    if ((uVar19 & 4) != 0) {
      uVar3 = vextractps_avx(auVar34,2);
      *(undefined4 *)pauVar2[2] = uVar3;
    }
    if ((uVar19 & 8) != 0) {
      uVar3 = vextractps_avx(auVar34,3);
      *(undefined4 *)(pauVar2[2] + 0xc) = uVar3;
    }
    if ((uVar19 & 0x10) != 0) {
      *(uint *)(pauVar2[3] + 8) = auVar42._16_4_;
    }
    if ((uVar19 & 0x20) != 0) {
      uVar3 = vextractps_avx(auVar56,1);
      *(undefined4 *)(pauVar2[4] + 4) = uVar3;
    }
    if ((uVar19 & 0x40) != 0) {
      uVar3 = vextractps_avx(auVar56,2);
      *(undefined4 *)pauVar2[5] = uVar3;
    }
    if (cVar18 < '\0') {
      uVar3 = vextractps_avx(auVar56,3);
      *(undefined4 *)(pauVar2[5] + 0xc) = uVar3;
    }
  }
  return;
}

// GetPointNormals_avx @ 1405c3b90

void GetPointNormals_avx(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                        uint param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  fVar4 = __real_322bcc77;
  if (0 < (int)param_6) {
    lVar9 = (longlong)param_4;
    if (param_6 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar13 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar23 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar16 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar23._8_8_ = 0;
                auVar23._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar13._12_4_ + auVar16._12_4_,
                                             CONCAT48(auVar13._8_4_ + auVar16._8_4_,
                                                      CONCAT44(auVar13._4_4_ + auVar16._4_4_,
                                                               auVar13._0_4_ + auVar16._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar25._8_8_ = 0;
                auVar25._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar13._12_4_ + auVar16._12_4_,
                                             CONCAT48(auVar13._8_4_ + auVar16._8_4_,
                                                      CONCAT44(auVar13._4_4_ + auVar16._4_4_,
                                                               auVar13._0_4_ + auVar16._0_4_))));
              }
              auVar13 = auVar16._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar23 = auVar13;
            if ((uVar1 & 1) == 0) goto LAB_1405c3f87;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar13 = auVar23;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar25 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar13._0_4_ = auVar25._0_4_ + auVar23._0_4_;
            auVar13._4_4_ = auVar25._4_4_ + auVar23._4_4_;
            auVar13._8_4_ = auVar25._8_4_ + auVar23._8_4_;
            auVar13._12_4_ = auVar25._12_4_ + auVar23._12_4_;
          }
        }
LAB_1405c3f87:
        auVar34._0_4_ = auVar13._0_4_;
        auVar24._0_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar40._0_4_ = auVar13._4_4_;
        auVar24._4_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar44._0_4_ = auVar13._8_4_;
        auVar24._8_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar32._0_4_ = auVar13._12_4_;
        auVar24._12_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar23 = vmovshdup_avx(auVar24);
        auVar25 = vshufpd_avx(auVar24,auVar24,1);
        fVar3 = auVar25._0_4_ + auVar24._0_4_ + auVar23._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar23 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar33._0_4_ = auVar23._0_4_;
            auVar33._0_4_ =
                 auVar33._0_4_ +
                 auVar33._0_4_ * (fVar6 - fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_);
            auVar23 = vblendps_avx(auVar13,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar23);
            auVar25 = ZEXT416((uint)(auVar33._0_4_ +
                                    auVar33._0_4_ *
                                    (fVar6 - fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_)));
            auVar23 = vshufps_avx(auVar25,in_ZMM1._0_16_,0xe0);
            auVar23 = vinsertps_avx(auVar23,auVar25,0x20);
            in_ZMM1 = ZEXT1664(auVar23);
            auVar34._0_4_ = auVar34._0_4_ * auVar23._0_4_;
            auVar34._4_4_ = auVar40._0_4_ * auVar23._4_4_;
            auVar34._8_4_ = auVar44._0_4_ * auVar23._8_4_;
            auVar34._12_4_ = auVar32._0_4_ * auVar23._12_4_;
            auVar23 = vmovshdup_avx(auVar34);
            uVar17 = auVar23._0_4_;
            auVar23 = vshufpd_avx(auVar34,auVar34,1);
            uVar18 = auVar23._0_4_;
          }
          else {
            auVar34._0_4_ = 0.0;
            uVar17 = 0;
            uVar18 = 0;
          }
        }
        else {
          auVar23 = vshufpd_avx(auVar13,auVar13,1);
          uVar18 = auVar23._0_4_;
          auVar23 = vmovshdup_avx(auVar13);
          uVar17 = auVar23._0_4_;
        }
        lVar11 = param_1 + uVar8 * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar34._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar17;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar18;
        lVar11 = (uVar8 | 1) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar26 = ZEXT816(0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar23 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar16 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar27._8_8_ = 0;
                auVar27._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar16._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar16._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar16._4_4_ + auVar23._4_4_,
                                                               auVar16._0_4_ + auVar23._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar28._8_8_ = 0;
                auVar28._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar16._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar16._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar16._4_4_ + auVar23._4_4_,
                                                               auVar16._0_4_ + auVar23._0_4_))));
              }
              auVar26 = auVar16._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar23 = auVar26;
            if ((uVar1 & 1) == 0) goto LAB_1405c414b;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar26 = auVar23;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar25 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar26._0_4_ = auVar23._0_4_ + auVar25._0_4_;
            auVar26._4_4_ = auVar23._4_4_ + auVar25._4_4_;
            auVar26._8_4_ = auVar23._8_4_ + auVar25._8_4_;
            auVar26._12_4_ = auVar23._12_4_ + auVar25._12_4_;
          }
        }
LAB_1405c414b:
        auVar40._0_4_ = auVar26._0_4_;
        auVar30._0_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar34._0_4_ = auVar26._4_4_;
        auVar30._4_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar44._0_4_ = auVar26._8_4_;
        auVar30._8_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar32._0_4_ = auVar26._12_4_;
        auVar30._12_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar23 = vmovshdup_avx(auVar30);
        auVar25 = vshufpd_avx(auVar30,auVar30,1);
        fVar3 = auVar25._0_4_ + auVar30._0_4_ + auVar23._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar23 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar33._0_4_ = auVar23._0_4_;
            auVar33._0_4_ =
                 auVar33._0_4_ +
                 auVar33._0_4_ * (fVar6 - fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_);
            auVar23 = vblendps_avx(auVar26,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar23);
            auVar25 = ZEXT416((uint)(auVar33._0_4_ +
                                    auVar33._0_4_ *
                                    (fVar6 - fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_)));
            auVar23 = vshufps_avx(auVar25,in_ZMM1._0_16_,0xe0);
            auVar23 = vinsertps_avx(auVar23,auVar25,0x20);
            in_ZMM1 = ZEXT1664(auVar23);
            auVar40._0_4_ = auVar40._0_4_ * auVar23._0_4_;
            auVar40._4_4_ = auVar34._0_4_ * auVar23._4_4_;
            auVar40._8_4_ = auVar44._0_4_ * auVar23._8_4_;
            auVar40._12_4_ = auVar32._0_4_ * auVar23._12_4_;
            auVar23 = vmovshdup_avx(auVar40);
            uVar17 = auVar23._0_4_;
            auVar23 = vshufpd_avx(auVar40,auVar40,1);
            uVar18 = auVar23._0_4_;
          }
          else {
            auVar40._0_4_ = 0.0;
            uVar17 = 0;
            uVar18 = 0;
          }
        }
        else {
          auVar23 = vshufpd_avx(auVar26,auVar26,1);
          uVar18 = auVar23._0_4_;
          auVar23 = vmovshdup_avx(auVar26);
          uVar17 = auVar23._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 1) * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar40._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar17;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar18;
        lVar11 = (uVar8 | 2) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar31 = ZEXT816(0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar23 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar16 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar35._8_8_ = 0;
                auVar35._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar16._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar16._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar16._4_4_ + auVar23._4_4_,
                                                               auVar16._0_4_ + auVar23._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar36._8_8_ = 0;
                auVar36._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar16._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar16._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar16._4_4_ + auVar23._4_4_,
                                                               auVar16._0_4_ + auVar23._0_4_))));
              }
              auVar31 = auVar16._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar23 = auVar31;
            if ((uVar1 & 1) == 0) goto LAB_1405c431b;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar31 = auVar23;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar37._8_8_ = 0;
            auVar37._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar25 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar31._0_4_ = auVar23._0_4_ + auVar25._0_4_;
            auVar31._4_4_ = auVar23._4_4_ + auVar25._4_4_;
            auVar31._8_4_ = auVar23._8_4_ + auVar25._8_4_;
            auVar31._12_4_ = auVar23._12_4_ + auVar25._12_4_;
          }
        }
LAB_1405c431b:
        auVar44._0_4_ = auVar31._0_4_;
        auVar38._0_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar34._0_4_ = auVar31._4_4_;
        auVar38._4_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar40._0_4_ = auVar31._8_4_;
        auVar38._8_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar32._0_4_ = auVar31._12_4_;
        auVar38._12_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar23 = vmovshdup_avx(auVar38);
        auVar25 = vshufpd_avx(auVar38,auVar38,1);
        fVar3 = auVar25._0_4_ + auVar38._0_4_ + auVar23._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar23 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar33._0_4_ = auVar23._0_4_;
            auVar33._0_4_ =
                 auVar33._0_4_ +
                 auVar33._0_4_ * (fVar6 - fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_);
            auVar23 = vblendps_avx(auVar31,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar23);
            auVar25 = ZEXT416((uint)(auVar33._0_4_ +
                                    auVar33._0_4_ *
                                    (fVar6 - fVar3 * fVar6 * auVar33._0_4_ * auVar33._0_4_)));
            auVar23 = vshufps_avx(auVar25,in_ZMM1._0_16_,0xe0);
            auVar23 = vinsertps_avx(auVar23,auVar25,0x20);
            in_ZMM1 = ZEXT1664(auVar23);
            auVar44._0_4_ = auVar44._0_4_ * auVar23._0_4_;
            auVar44._4_4_ = auVar34._0_4_ * auVar23._4_4_;
            auVar44._8_4_ = auVar40._0_4_ * auVar23._8_4_;
            auVar44._12_4_ = auVar32._0_4_ * auVar23._12_4_;
            auVar23 = vmovshdup_avx(auVar44);
            uVar17 = auVar23._0_4_;
            auVar23 = vshufpd_avx(auVar44,auVar44,1);
            uVar18 = auVar23._0_4_;
          }
          else {
            auVar44._0_4_ = 0.0;
            uVar17 = 0;
            uVar18 = 0;
          }
        }
        else {
          auVar23 = vshufpd_avx(auVar31,auVar31,1);
          uVar18 = auVar23._0_4_;
          auVar23 = vmovshdup_avx(auVar31);
          uVar17 = auVar23._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 2) * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar44._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar17;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar18;
        lVar11 = (uVar8 | 3) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar39 = ZEXT816(0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar23 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar16 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar41._8_8_ = 0;
                auVar41._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar16._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar16._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar16._4_4_ + auVar23._4_4_,
                                                               auVar16._0_4_ + auVar23._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar42._8_8_ = 0;
                auVar42._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar16._12_4_ + auVar23._12_4_,
                                             CONCAT48(auVar16._8_4_ + auVar23._8_4_,
                                                      CONCAT44(auVar16._4_4_ + auVar23._4_4_,
                                                               auVar16._0_4_ + auVar23._0_4_))));
              }
              auVar39 = auVar16._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar23 = auVar39;
            if ((uVar1 & 1) == 0) goto LAB_1405c44eb;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar39 = auVar23;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar43._8_8_ = 0;
            auVar43._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar25 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar39._0_4_ = auVar23._0_4_ + auVar25._0_4_;
            auVar39._4_4_ = auVar23._4_4_ + auVar25._4_4_;
            auVar39._8_4_ = auVar23._8_4_ + auVar25._8_4_;
            auVar39._12_4_ = auVar23._12_4_ + auVar25._12_4_;
          }
        }
LAB_1405c44eb:
        auVar23 = vblendps_avx(auVar13,in_ZMM2._0_16_,8);
        auVar13 = vblendps_avx(auVar13,in_ZMM3._0_16_,8);
        auVar23 = vblendps_avx(auVar26,auVar23,8);
        auVar13 = vblendps_avx(auVar26,auVar13,8);
        auVar23 = vblendps_avx(auVar31,auVar23,8);
        auVar13 = vblendps_avx(auVar31,auVar13,8);
        auVar32._0_4_ = auVar39._0_4_;
        auVar14._0_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar34._0_4_ = auVar39._4_4_;
        auVar14._4_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar40._0_4_ = auVar39._8_4_;
        auVar14._8_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar44._0_4_ = auVar39._12_4_;
        auVar14._12_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar25 = vmovshdup_avx(auVar14);
        auVar15 = vshufpd_avx(auVar14,auVar14,1);
        fVar3 = auVar15._0_4_ + auVar25._0_4_ + auVar14._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar25 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar33._0_4_ = auVar25._0_4_;
            auVar33._0_4_ =
                 auVar33._0_4_ +
                 auVar33._0_4_ * (fVar6 - auVar33._0_4_ * auVar33._0_4_ * fVar3 * fVar6);
            auVar25 = vblendps_avx(auVar39,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar25);
            auVar15 = ZEXT416((uint)(auVar33._0_4_ +
                                    auVar33._0_4_ *
                                    (fVar6 - auVar33._0_4_ * auVar33._0_4_ * fVar3 * fVar6)));
            auVar25 = vshufps_avx(auVar15,in_ZMM1._0_16_,0xe0);
            auVar25 = vinsertps_avx(auVar25,auVar15,0x20);
            in_ZMM1 = ZEXT1664(auVar25);
            auVar32._0_4_ = auVar32._0_4_ * auVar25._0_4_;
            auVar32._4_4_ = auVar34._0_4_ * auVar25._4_4_;
            auVar32._8_4_ = auVar40._0_4_ * auVar25._8_4_;
            auVar32._12_4_ = auVar44._0_4_ * auVar25._12_4_;
            auVar25 = vmovshdup_avx(auVar32);
            uVar17 = auVar25._0_4_;
            auVar25 = vshufpd_avx(auVar32,auVar32,1);
            uVar18 = auVar25._0_4_;
          }
          else {
            auVar32._0_4_ = 0.0;
            uVar17 = 0;
            uVar18 = 0;
          }
        }
        else {
          auVar25 = vshufpd_avx(auVar39,auVar39,1);
          uVar18 = auVar25._0_4_;
          auVar25 = vmovshdup_avx(auVar39);
          uVar17 = auVar25._0_4_;
        }
        auVar23 = vblendps_avx(auVar39,auVar23,8);
        in_ZMM2 = ZEXT1664(auVar23);
        auVar13 = vblendps_avx(auVar39,auVar13,8);
        in_ZMM3 = ZEXT1664(auVar13);
        lVar11 = param_1 + (uVar8 | 3) * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar32._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar17;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar18;
        uVar8 = uVar8 + 4;
      } while (uVar8 != (param_6 & 0x7ffffffc));
    }
    fVar6 = __real_3f000000;
    fVar5 = __real_3f800000;
    fVar4 = __real_322bcc77;
    if ((ulonglong)(param_6 & 3) != 0) {
      uVar7 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar12 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            lVar10 = 0;
            auVar13 = SUB6416(ZEXT864(0),0);
          }
          else {
            auVar16 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar19._8_8_ = 0;
                auVar19._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar13._12_4_ + auVar16._12_4_,
                                             CONCAT48(auVar13._8_4_ + auVar16._8_4_,
                                                      CONCAT44(auVar13._4_4_ + auVar16._4_4_,
                                                               auVar13._0_4_ + auVar16._0_4_))));
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar20._8_8_ = 0;
                auVar20._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar2 * 0xc)),0x28);
                auVar16 = ZEXT1664(CONCAT412(auVar13._12_4_ + auVar16._12_4_,
                                             CONCAT48(auVar13._8_4_ + auVar16._8_4_,
                                                      CONCAT44(auVar13._4_4_ + auVar16._4_4_,
                                                               auVar13._0_4_ + auVar16._0_4_))));
              }
              auVar12 = auVar16._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            auVar13 = auVar12;
            if ((uVar1 & 1) == 0) goto LAB_1405c3d56;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          auVar12 = auVar13;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar21._8_8_ = 0;
            auVar21._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar23 = vinsertps_avx(auVar21,ZEXT416(*(uint *)(param_2 + 8 + (ulonglong)uVar1 * 0xc))
                                    ,0x28);
            auVar12._0_4_ = auVar23._0_4_ + auVar13._0_4_;
            auVar12._4_4_ = auVar23._4_4_ + auVar13._4_4_;
            auVar12._8_4_ = auVar23._8_4_ + auVar13._8_4_;
            auVar12._12_4_ = auVar23._12_4_ + auVar13._12_4_;
          }
        }
LAB_1405c3d56:
        auVar33._0_4_ = auVar12._0_4_;
        auVar22._0_4_ = auVar33._0_4_ * auVar33._0_4_;
        auVar34._0_4_ = auVar12._4_4_;
        auVar22._4_4_ = auVar34._0_4_ * auVar34._0_4_;
        auVar40._0_4_ = auVar12._8_4_;
        auVar22._8_4_ = auVar40._0_4_ * auVar40._0_4_;
        auVar44._0_4_ = auVar12._12_4_;
        auVar22._12_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar13 = vmovshdup_avx(auVar22);
        auVar23 = vshufpd_avx(auVar22,auVar22,1);
        fVar3 = auVar23._0_4_ + auVar22._0_4_ + auVar13._0_4_;
        if ((fVar3 != fVar5) || (NAN(fVar3) || NAN(fVar5))) {
          if (fVar4 <= fVar3) {
            auVar13 = vrsqrtss_avx(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
            auVar32._0_4_ = auVar13._0_4_;
            auVar32._0_4_ =
                 auVar32._0_4_ +
                 auVar32._0_4_ * (fVar6 - fVar3 * fVar6 * auVar32._0_4_ * auVar32._0_4_);
            auVar13 = vblendps_avx(auVar12,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar13);
            auVar23 = ZEXT416((uint)(auVar32._0_4_ +
                                    auVar32._0_4_ *
                                    (fVar6 - fVar3 * fVar6 * auVar32._0_4_ * auVar32._0_4_)));
            auVar13 = vshufps_avx(auVar23,in_ZMM1._0_16_,0xe0);
            auVar13 = vinsertps_avx(auVar13,auVar23,0x20);
            in_ZMM1 = ZEXT1664(auVar13);
            auVar33._0_4_ = auVar33._0_4_ * auVar13._0_4_;
            auVar33._4_4_ = auVar34._0_4_ * auVar13._4_4_;
            auVar33._8_4_ = auVar40._0_4_ * auVar13._8_4_;
            auVar33._12_4_ = auVar44._0_4_ * auVar13._12_4_;
            auVar13 = vmovshdup_avx(auVar33);
            uVar17 = auVar13._0_4_;
            auVar13 = vshufpd_avx(auVar33,auVar33,1);
            uVar18 = auVar13._0_4_;
          }
          else {
            auVar33._0_4_ = 0.0;
            uVar17 = 0;
            uVar18 = 0;
          }
        }
        else {
          auVar13 = vshufpd_avx(auVar12,auVar12,1);
          uVar18 = auVar13._0_4_;
          auVar13 = vmovshdup_avx(auVar12);
          uVar17 = auVar13._0_4_;
        }
        auVar13 = vblendps_avx(auVar12,in_ZMM2._0_16_,8);
        in_ZMM2 = ZEXT1664(auVar13);
        auVar13 = vblendps_avx(auVar12,in_ZMM3._0_16_,8);
        in_ZMM3 = ZEXT1664(auVar13);
        lVar11 = param_1 + uVar8 * 0xc;
        *(float *)(lVar11 + lVar9 * 0xc) = auVar33._0_4_;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar17;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar18;
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != (param_6 & 3));
    }
  }
  return;
}


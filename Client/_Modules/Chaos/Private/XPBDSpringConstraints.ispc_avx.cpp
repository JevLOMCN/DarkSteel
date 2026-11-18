// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// ApplyXPBDSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCuni_avx @ 14091fcc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,uint param_7)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  float fVar40;
  undefined1 auVar42 [16];
  float fVar51;
  float fVar53;
  float fVar55;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar61 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar71 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  float fVar80;
  int iVar81;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  uint uVar94;
  undefined1 auVar95 [16];
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  undefined1 auVar96 [32];
  undefined1 auVar102 [16];
  float fVar106;
  float fVar113;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar111;
  float fVar112;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar109 [32];
  float fVar117;
  undefined1 auVar110 [32];
  float fVar118;
  undefined1 auVar119 [16];
  float fVar123;
  float fVar124;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  float fVar125;
  float fVar129;
  undefined1 auVar122 [32];
  undefined1 auVar130 [16];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  float fVar133;
  float fVar137;
  float fVar138;
  undefined1 auVar134 [16];
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  float fVar143;
  float fVar144;
  uint uVar145;
  float fVar147;
  uint uVar148;
  float fVar149;
  uint uVar150;
  float fVar151;
  uint uVar152;
  float fVar153;
  uint uVar154;
  float fVar155;
  uint uVar156;
  float fVar157;
  uint uVar158;
  float fVar159;
  undefined1 auVar146 [32];
  uint uVar160;
  int iVar161;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  uint uVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  undefined1 auVar171 [32];
  uint uVar176;
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
  int iVar12;
  float fVar41;
  undefined1 auVar47 [32];
  float fVar52;
  float fVar54;
  float fVar56;
  undefined1 auVar97 [32];
  
  uVar19 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar19 = param_7;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar61 = ZEXT416((uint)(param_5 * param_6 * param_5));
    auVar61 = vshufps_avx(auVar61,auVar61,0);
    fVar41 = auVar61._0_4_;
    fVar40 = (float)((uint)fVar41 ^
                    ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
    fVar52 = auVar61._4_4_;
    fVar51 = (float)((uint)fVar52 ^ _UNK_150b50f64);
    fVar54 = auVar61._8_4_;
    fVar53 = (float)((uint)fVar54 ^ _UNK_150b50f68);
    fVar56 = auVar61._12_4_;
    fVar55 = (float)((uint)fVar56 ^ _UNK_150b50f6c);
    fVar57 = (float)((uint)fVar41 ^ _UNK_150b50f70);
    fVar58 = (float)((uint)fVar52 ^ _UNK_150b50f74);
    fVar59 = (float)((uint)fVar54 ^ _UNK_150b50f78);
    fVar60 = (float)((uint)fVar56 ^ _UNK_150b50f7c);
    uVar15 = 0;
    uVar36 = 0;
    do {
      auVar64._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar36 * 2);
      auVar64._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar36 * 2);
      auVar43._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar36 * 2);
      auVar43._0_16_ = *(undefined1 (*) [16])(param_2 + uVar36 * 2);
      auVar47 = vshufps_avx(auVar43,auVar64,0x88);
      auVar43 = vshufps_avx(auVar43,auVar64,0xdd);
      auVar61 = vpslld_avx(auVar47._16_16_,4);
      auVar72 = vpslld_avx(auVar47._0_16_,4);
      lVar31 = (longlong)auVar72._0_4_;
      lVar34 = (longlong)auVar72._4_4_;
      lVar24 = (longlong)auVar72._8_4_;
      lVar26 = (longlong)auVar72._12_4_;
      lVar20 = (longlong)auVar61._0_4_;
      lVar16 = (longlong)auVar61._4_4_;
      lVar22 = (longlong)auVar61._8_4_;
      lVar37 = (longlong)auVar61._12_4_;
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + lVar16)),0x10);
      auVar72 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar31)),
                              ZEXT416(*(uint *)(param_1 + lVar34)),0x10);
      auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + lVar24)),0x20);
      auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar31)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar34)),0x10);
      auVar62 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar16)),0x10);
      auVar71 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar31)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar34)),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x20);
      uVar10 = *(uint *)(param_1 + 0xc + lVar31);
      uVar30 = *(uint *)(param_1 + 0xc + lVar34);
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar16)),0x10);
      uVar33 = *(uint *)(param_1 + 0xc + lVar24);
      uVar145 = *(uint *)(param_1 + 0xc + lVar26);
      auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x20);
      uVar148 = *(uint *)(param_1 + 0xc + lVar20);
      auVar130 = vpslld_avx(auVar43._16_16_,4);
      uVar150 = *(uint *)(param_1 + 0xc + lVar16);
      auVar134 = vpslld_avx(auVar43._0_16_,4);
      lVar17 = (longlong)auVar134._0_4_;
      uVar152 = *(uint *)(param_1 + 0xc + lVar22);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + lVar22)),0x20);
      auVar95 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + lVar26)),0x30);
      lVar29 = (longlong)auVar134._4_4_;
      lVar35 = (longlong)auVar134._8_4_;
      auVar72 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 4 + lVar26)),0x30);
      lVar25 = (longlong)auVar134._12_4_;
      lVar21 = (longlong)auVar130._0_4_;
      lVar39 = (longlong)auVar130._4_4_;
      lVar38 = (longlong)auVar130._8_4_;
      auVar62 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x20);
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar21)),
                               ZEXT416(*(uint *)(param_1 + lVar39)),0x10);
      auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + 8 + lVar26)),0x30);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + lVar38)),0x20);
      lVar23 = (longlong)auVar130._12_4_;
      auVar130 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + lVar37)),0x30);
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar17)),
                              ZEXT416(*(uint *)(param_1 + lVar29)),0x10);
      auVar134 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + 4 + lVar37)),0x30);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + lVar35)),0x20);
      auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(param_1 + 8 + lVar37)),0x30);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + lVar25)),0x30);
      auVar72 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + lVar23)),0x30);
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x10);
      auVar109._16_16_ = auVar130;
      auVar109._0_16_ = auVar95;
      auVar107 = vinsertps_avx(ZEXT416(uVar148),ZEXT416(uVar150),0x10);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x20);
      auVar168._16_16_ = auVar134;
      auVar168._0_16_ = auVar42;
      auVar63 = vinsertps_avx(ZEXT416(uVar10),ZEXT416(uVar30),0x10);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x30);
      auVar169._16_16_ = auVar62;
      auVar169._0_16_ = auVar71;
      auVar108 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar17)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar29)),0x10);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(uVar152),0x20);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(uVar33),0x20);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x20);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(uVar145),0x30);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x30);
      uVar154 = *(uint *)(param_1 + 0xc + lVar37);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(uVar154),0x30);
      auVar119 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar17)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar29)),0x10);
      auVar170._16_16_ = auVar72;
      auVar170._0_16_ = auVar61;
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x10);
      auVar72 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x20);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x20);
      auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x30);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x30);
      auVar73._16_16_ = auVar102;
      auVar73._0_16_ = auVar108;
      auVar44._16_16_ = auVar61;
      auVar44._0_16_ = auVar72;
      auVar47 = vsubps_avx(auVar109,auVar170);
      auVar64 = vsubps_avx(auVar168,auVar73);
      auVar65 = vsubps_avx(auVar169,auVar44);
      auVar131._0_4_ =
           auVar47._0_4_ * auVar47._0_4_ + auVar64._0_4_ * auVar64._0_4_ +
           auVar65._0_4_ * auVar65._0_4_;
      auVar131._4_4_ =
           auVar47._4_4_ * auVar47._4_4_ + auVar64._4_4_ * auVar64._4_4_ +
           auVar65._4_4_ * auVar65._4_4_;
      auVar131._8_4_ =
           auVar47._8_4_ * auVar47._8_4_ + auVar64._8_4_ * auVar64._8_4_ +
           auVar65._8_4_ * auVar65._8_4_;
      auVar131._12_4_ =
           auVar47._12_4_ * auVar47._12_4_ + auVar64._12_4_ * auVar64._12_4_ +
           auVar65._12_4_ * auVar65._12_4_;
      auVar131._16_4_ =
           auVar47._16_4_ * auVar47._16_4_ + auVar64._16_4_ * auVar64._16_4_ +
           auVar65._16_4_ * auVar65._16_4_;
      auVar131._20_4_ =
           auVar47._20_4_ * auVar47._20_4_ + auVar64._20_4_ * auVar64._20_4_ +
           auVar65._20_4_ * auVar65._20_4_;
      auVar131._24_4_ =
           auVar47._24_4_ * auVar47._24_4_ + auVar64._24_4_ * auVar64._24_4_ +
           auVar65._24_4_ * auVar65._24_4_;
      auVar131._28_4_ =
           auVar47._28_4_ * auVar47._28_4_ + auVar64._28_4_ * auVar64._28_4_ +
           auVar65._28_4_ * auVar65._28_4_;
      uVar156 = *(uint *)(param_1 + 0xc + lVar17);
      uVar158 = *(uint *)(param_1 + 0xc + lVar29);
      uVar160 = *(uint *)(param_1 + 0xc + lVar35);
      auVar61 = vinsertps_avx(ZEXT416(uVar156),ZEXT416(uVar158),0x10);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(uVar160),0x20);
      uVar172 = *(uint *)(param_1 + 0xc + lVar21);
      uVar173 = *(uint *)(param_1 + 0xc + lVar39);
      uVar174 = *(uint *)(param_1 + 0xc + lVar38);
      auVar72 = vinsertps_avx(ZEXT416(uVar172),ZEXT416(uVar173),0x10);
      auVar72 = vinsertps_avx(auVar72,ZEXT416(uVar174),0x20);
      uVar27 = uVar36 & 0xffffffff;
      uVar175 = *(uint *)(param_1 + 0xc + lVar23);
      auVar102 = vinsertps_avx(auVar72,ZEXT416(uVar175),0x30);
      auVar120._16_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + uVar27);
      auVar120._0_16_ = *(undefined1 (*) [16])(param_3 + uVar27);
      uVar176 = *(uint *)(param_1 + 0xc + lVar25);
      auVar108 = vinsertps_avx(auVar61,ZEXT416(uVar176),0x30);
      auVar74 = vsqrtps_avx(auVar131);
      auVar43 = vdivps_avx(auVar47,auVar74);
      auVar47 = vcmpps_avx(auVar131,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar64 = vdivps_avx(auVar64,auVar74);
      auVar65 = vdivps_avx(auVar65,auVar74);
      uVar94 = auVar47._0_4_;
      auVar45._0_4_ = ~uVar94 & auVar74._0_4_;
      uVar98 = auVar47._4_4_;
      auVar45._4_4_ = ~uVar98 & auVar74._4_4_;
      uVar99 = auVar47._8_4_;
      auVar45._8_4_ = ~uVar99 & auVar74._8_4_;
      uVar100 = auVar47._12_4_;
      auVar45._12_4_ = ~uVar100 & auVar74._12_4_;
      uVar101 = auVar47._16_4_;
      auVar45._16_4_ = ~uVar101 & auVar74._16_4_;
      uVar103 = auVar47._20_4_;
      auVar45._20_4_ = ~uVar103 & auVar74._20_4_;
      uVar104 = auVar47._24_4_;
      auVar45._24_4_ = ~uVar104 & auVar74._24_4_;
      uVar105 = auVar47._28_4_;
      auVar45._28_4_ = ~uVar105 & auVar74._28_4_;
      auVar74 = vsubps_avx(auVar45,auVar120);
      auVar61 = *(undefined1 (*) [16])(param_4 + uVar27);
      auVar72 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar27);
      auVar132._16_16_ = auVar72;
      auVar132._0_16_ = auVar61;
      auVar46._0_4_ = auVar74._0_4_ * fVar40;
      auVar46._4_4_ = auVar74._4_4_ * fVar51;
      auVar46._8_4_ = auVar74._8_4_ * fVar53;
      auVar46._12_4_ = auVar74._12_4_ * fVar55;
      auVar46._16_4_ = auVar74._16_4_ * fVar57;
      auVar46._20_4_ = auVar74._20_4_ * fVar58;
      auVar46._24_4_ = auVar74._24_4_ * fVar59;
      auVar46._28_4_ = auVar74._28_4_ * fVar60;
      fVar2 = auVar108._0_4_;
      fVar144 = auVar63._0_4_;
      fVar3 = auVar108._4_4_;
      fVar147 = auVar63._4_4_;
      fVar4 = auVar108._8_4_;
      fVar149 = auVar63._8_4_;
      fVar5 = auVar108._12_4_;
      fVar151 = auVar63._12_4_;
      fVar133 = auVar102._0_4_;
      fVar153 = auVar107._0_4_;
      fVar137 = auVar102._4_4_;
      fVar155 = auVar107._4_4_;
      fVar138 = auVar102._8_4_;
      fVar157 = auVar107._8_4_;
      fVar139 = auVar102._12_4_;
      fVar159 = auVar107._12_4_;
      auVar74 = vsubps_avx(auVar46,auVar132);
      auVar171._4_4_ = __real_3f800000;
      auVar171._0_4_ = __real_3f800000;
      auVar171._8_4_ = __real_3f800000;
      auVar171._12_4_ = __real_3f800000;
      auVar171._16_4_ = __real_3f800000;
      auVar171._20_4_ = __real_3f800000;
      auVar171._24_4_ = __real_3f800000;
      auVar171._28_4_ = __real_3f800000;
      auVar121._0_4_ = __real_3f800000 + (fVar144 + fVar2) * fVar41;
      auVar121._4_4_ = __real_3f800000 + (fVar147 + fVar3) * fVar52;
      auVar121._8_4_ = __real_3f800000 + (fVar149 + fVar4) * fVar54;
      auVar121._12_4_ = __real_3f800000 + (fVar151 + fVar5) * fVar56;
      auVar121._16_4_ = __real_3f800000 + (fVar153 + fVar133) * fVar41;
      auVar121._20_4_ = __real_3f800000 + (fVar155 + fVar137) * fVar52;
      auVar121._24_4_ = __real_3f800000 + (fVar157 + fVar138) * fVar54;
      auVar121._28_4_ = __real_3f800000 + (fVar159 + fVar139) * fVar56;
      auVar74 = vdivps_avx(auVar74,auVar121);
      auVar47 = vblendvps_avx(auVar43,auVar171,auVar47);
      fVar140 = auVar74._0_4_;
      fVar80 = auVar47._0_4_ * fVar140;
      fVar141 = auVar74._4_4_;
      fVar87 = auVar47._4_4_ * fVar141;
      fVar142 = auVar74._8_4_;
      fVar88 = auVar47._8_4_ * fVar142;
      fVar143 = auVar74._12_4_;
      fVar89 = auVar47._12_4_ * fVar143;
      fVar6 = auVar74._16_4_;
      fVar90 = auVar47._16_4_ * fVar6;
      fVar7 = auVar74._20_4_;
      fVar91 = auVar47._20_4_ * fVar7;
      fVar8 = auVar74._24_4_;
      fVar92 = auVar47._24_4_ * fVar8;
      fVar9 = auVar74._28_4_;
      fVar93 = auVar47._28_4_ * fVar9;
      auVar102._0_4_ = auVar95._0_4_ + fVar144 * fVar80;
      auVar102._4_4_ = auVar95._4_4_ + fVar147 * fVar87;
      auVar102._8_4_ = auVar95._8_4_ + fVar149 * fVar88;
      auVar102._12_4_ = auVar95._12_4_ + fVar151 * fVar89;
      auVar96._16_4_ = auVar130._0_4_ + fVar153 * fVar90;
      auVar96._0_16_ = auVar102;
      auVar96._20_4_ = auVar130._4_4_ + fVar155 * fVar91;
      auVar96._24_4_ = auVar130._8_4_ + fVar157 * fVar92;
      auVar96._28_4_ = auVar130._12_4_ + fVar159 * fVar93;
      *(float *)(param_1 + lVar31) = auVar102._0_4_;
      uVar28 = vextractps_avx(auVar102,1);
      *(undefined4 *)(param_1 + lVar34) = uVar28;
      fVar106 = (float)(~uVar94 & auVar64._0_4_) * fVar140;
      fVar111 = (float)(~uVar98 & auVar64._4_4_) * fVar141;
      fVar112 = (float)(~uVar99 & auVar64._8_4_) * fVar142;
      fVar113 = (float)(~uVar100 & auVar64._12_4_) * fVar143;
      fVar114 = (float)(~uVar101 & auVar64._16_4_) * fVar6;
      fVar115 = (float)(~uVar103 & auVar64._20_4_) * fVar7;
      fVar116 = (float)(~uVar104 & auVar64._24_4_) * fVar8;
      fVar117 = (float)(~uVar105 & auVar64._28_4_) * fVar9;
      uVar28 = vextractps_avx(auVar102,2);
      *(undefined4 *)(param_1 + lVar24) = uVar28;
      uVar28 = vextractps_avx(auVar102,3);
      *(undefined4 *)(param_1 + lVar26) = uVar28;
      auVar102 = auVar96._16_16_;
      *(float *)(param_1 + lVar20) = auVar96._16_4_;
      uVar28 = vextractps_avx(auVar102,1);
      *(undefined4 *)(param_1 + lVar16) = uVar28;
      uVar28 = vextractps_avx(auVar102,2);
      *(undefined4 *)(param_1 + lVar22) = uVar28;
      auVar130._0_4_ = auVar42._0_4_ + fVar144 * fVar106;
      auVar130._4_4_ = auVar42._4_4_ + fVar147 * fVar111;
      auVar130._8_4_ = auVar42._8_4_ + fVar149 * fVar112;
      auVar130._12_4_ = auVar42._12_4_ + fVar151 * fVar113;
      auVar164._16_4_ = auVar134._0_4_ + fVar153 * fVar114;
      auVar164._0_16_ = auVar130;
      auVar164._20_4_ = auVar134._4_4_ + fVar155 * fVar115;
      auVar164._24_4_ = auVar134._8_4_ + fVar157 * fVar116;
      auVar164._28_4_ = auVar134._12_4_ + fVar159 * fVar117;
      uVar28 = vextractps_avx(auVar102,3);
      *(undefined4 *)(param_1 + lVar37) = uVar28;
      *(float *)(param_1 + 4 + lVar31) = auVar130._0_4_;
      uVar28 = vextractps_avx(auVar130,1);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar28;
      fVar118 = (float)(~uVar94 & auVar65._0_4_) * fVar140;
      fVar123 = (float)(~uVar98 & auVar65._4_4_) * fVar141;
      fVar124 = (float)(~uVar99 & auVar65._8_4_) * fVar142;
      fVar125 = (float)(~uVar100 & auVar65._12_4_) * fVar143;
      fVar126 = (float)(~uVar101 & auVar65._16_4_) * fVar6;
      fVar127 = (float)(~uVar103 & auVar65._20_4_) * fVar7;
      fVar128 = (float)(~uVar104 & auVar65._24_4_) * fVar8;
      fVar129 = (float)(~uVar105 & auVar65._28_4_) * fVar9;
      uVar28 = vextractps_avx(auVar130,2);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar28;
      uVar28 = vextractps_avx(auVar130,3);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar28;
      auVar42 = auVar164._16_16_;
      *(float *)(param_1 + 4 + lVar20) = auVar164._16_4_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 4 + lVar16) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar28;
      auVar95._0_4_ = auVar71._0_4_ + fVar144 * fVar118;
      auVar95._4_4_ = auVar71._4_4_ + fVar147 * fVar123;
      auVar95._8_4_ = auVar71._8_4_ + fVar149 * fVar124;
      auVar95._12_4_ = auVar71._12_4_ + fVar151 * fVar125;
      auVar97._16_4_ = auVar62._0_4_ + fVar153 * fVar126;
      auVar97._0_16_ = auVar95;
      auVar97._20_4_ = auVar62._4_4_ + fVar155 * fVar127;
      auVar97._24_4_ = auVar62._8_4_ + fVar157 * fVar128;
      auVar97._28_4_ = auVar62._12_4_ + fVar159 * fVar129;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 4 + lVar37) = uVar28;
      *(float *)(param_1 + 8 + lVar31) = auVar95._0_4_;
      uVar28 = vextractps_avx(auVar95,1);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar28;
      uVar28 = vextractps_avx(auVar95,2);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar28;
      uVar28 = vextractps_avx(auVar95,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar28;
      auVar42 = auVar97._16_16_;
      *(float *)(param_1 + 8 + lVar20) = auVar97._16_4_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 8 + lVar16) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar28;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 8 + lVar37) = uVar28;
      *(uint *)(param_1 + 0xc + lVar31) = uVar10;
      *(uint *)(param_1 + 0xc + lVar34) = uVar30;
      *(uint *)(param_1 + 0xc + lVar24) = uVar33;
      *(uint *)(param_1 + 0xc + lVar26) = uVar145;
      *(uint *)(param_1 + 0xc + lVar20) = uVar148;
      *(uint *)(param_1 + 0xc + lVar16) = uVar150;
      *(uint *)(param_1 + 0xc + lVar22) = uVar152;
      auVar74._0_4_ = fVar2 * fVar80;
      auVar74._4_4_ = fVar3 * fVar87;
      auVar74._8_4_ = fVar4 * fVar88;
      auVar74._12_4_ = fVar5 * fVar89;
      auVar74._16_4_ = fVar133 * fVar90;
      auVar74._20_4_ = fVar137 * fVar91;
      auVar74._24_4_ = fVar138 * fVar92;
      auVar74._28_4_ = fVar139 * fVar93;
      auVar47 = vsubps_avx(auVar170,auVar74);
      *(uint *)(param_1 + 0xc + lVar37) = uVar154;
      *(int *)(param_1 + lVar17) = auVar47._0_4_;
      auVar42 = auVar47._0_16_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + lVar29) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + lVar35) = uVar28;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + lVar25) = uVar28;
      auVar42 = auVar47._16_16_;
      *(int *)(param_1 + lVar21) = auVar47._16_4_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + lVar39) = uVar28;
      auVar82._0_4_ = fVar2 * fVar106;
      auVar82._4_4_ = fVar3 * fVar111;
      auVar82._8_4_ = fVar4 * fVar112;
      auVar82._12_4_ = fVar5 * fVar113;
      auVar82._16_4_ = fVar133 * fVar114;
      auVar82._20_4_ = fVar137 * fVar115;
      auVar82._24_4_ = fVar138 * fVar116;
      auVar82._28_4_ = fVar139 * fVar117;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + lVar38) = uVar28;
      auVar47 = vsubps_avx(auVar73,auVar82);
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + lVar23) = uVar28;
      *(int *)(param_1 + 4 + lVar17) = auVar47._0_4_;
      auVar42 = auVar47._0_16_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 4 + lVar35) = uVar28;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar28;
      auVar42 = auVar47._16_16_;
      *(int *)(param_1 + 4 + lVar21) = auVar47._16_4_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 4 + lVar39) = uVar28;
      auVar65._0_4_ = fVar2 * fVar118;
      auVar65._4_4_ = fVar3 * fVar123;
      auVar65._8_4_ = fVar4 * fVar124;
      auVar65._12_4_ = fVar5 * fVar125;
      auVar65._16_4_ = fVar133 * fVar126;
      auVar65._20_4_ = fVar137 * fVar127;
      auVar65._24_4_ = fVar138 * fVar128;
      auVar65._28_4_ = fVar139 * fVar129;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 4 + lVar38) = uVar28;
      auVar47 = vsubps_avx(auVar44,auVar65);
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar28;
      *(int *)(param_1 + 8 + lVar17) = auVar47._0_4_;
      auVar42 = auVar47._0_16_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar28;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar28;
      auVar62 = auVar47._16_16_;
      *(int *)(param_1 + 8 + lVar21) = auVar47._16_4_;
      uVar28 = vextractps_avx(auVar62,1);
      *(undefined4 *)(param_1 + 8 + lVar39) = uVar28;
      auVar42._0_4_ = auVar61._0_4_ + fVar140;
      auVar42._4_4_ = auVar61._4_4_ + fVar141;
      auVar42._8_4_ = auVar61._8_4_ + fVar142;
      auVar42._12_4_ = auVar61._12_4_ + fVar143;
      auVar47._16_4_ = auVar72._0_4_ + fVar6;
      auVar47._0_16_ = auVar42;
      auVar47._20_4_ = auVar72._4_4_ + fVar7;
      auVar47._24_4_ = auVar72._8_4_ + fVar8;
      auVar47._28_4_ = auVar72._12_4_ + fVar9;
      uVar28 = vextractps_avx(auVar62,2);
      *(undefined4 *)(param_1 + 8 + lVar38) = uVar28;
      uVar28 = vextractps_avx(auVar62,3);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar28;
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar27) = auVar47._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar27) = auVar42;
      *(uint *)(param_1 + 0xc + lVar17) = uVar156;
      *(uint *)(param_1 + 0xc + lVar29) = uVar158;
      *(uint *)(param_1 + 0xc + lVar35) = uVar160;
      *(uint *)(param_1 + 0xc + lVar25) = uVar176;
      *(uint *)(param_1 + 0xc + lVar21) = uVar172;
      *(uint *)(param_1 + 0xc + lVar39) = uVar173;
      *(uint *)(param_1 + 0xc + lVar38) = uVar174;
      *(uint *)(param_1 + 0xc + lVar23) = uVar175;
      uVar36 = uVar36 + 0x20;
      uVar10 = (int)uVar15 + 8;
      uVar15 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)(uVar19 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar10) {
      return;
    }
  }
  auVar61 = vpshufd_avx(ZEXT416((uint)uVar15),0);
  auVar48._16_16_ = auVar61;
  auVar48._0_16_ = auVar61;
  auVar42 = vpshufd_avx(ZEXT416(param_7),0);
  pauVar1 = (undefined1 (*) [16])(param_2 + uVar15 * 8);
  auVar62 = SUB3216(auVar48 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar71 = SUB3216(auVar48 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar61 = vpcmpgtd_avx(auVar42,auVar71);
  auVar72 = vpcmpgtd_avx(auVar42,auVar62);
  auVar75._16_16_ = auVar61;
  auVar75._0_16_ = auVar72;
  uVar19 = vmovmskps_avx(auVar75);
  if (uVar19 == 0xff) {
    auVar122._16_16_ = pauVar1[3];
    auVar122._0_16_ = pauVar1[1];
    auVar76._16_16_ = pauVar1[2];
    auVar76._0_16_ = *pauVar1;
    auVar47 = vshufps_avx(auVar76,auVar122,0x88);
    auVar43 = vshufps_avx(auVar76,auVar122,0xdd);
  }
  else {
    auVar61 = vpcmpgtd_avx(auVar42,auVar71);
    auVar72 = vpcmpgtd_avx(auVar42,auVar62);
    auVar134._0_4_ =
         auVar72._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar134._4_4_ = auVar72._4_4_ & _UNK_150b519c4;
    auVar134._8_4_ = auVar72._8_4_ & _UNK_150b519c8;
    auVar134._12_4_ = auVar72._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar134,1);
    vextractps_avx(auVar134,2);
    vextractps_avx(auVar134,3);
    auVar107._0_4_ =
         auVar72._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar107._4_4_ = auVar72._4_4_ & _UNK_150b519e4;
    auVar107._8_4_ = auVar72._8_4_ & _UNK_150b519e8;
    auVar107._12_4_ = auVar72._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar107,1);
    vextractps_avx(auVar107,2);
    vextractps_avx(auVar107,3);
    auVar47 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar61._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar43 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar61._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar107._0_4_))));
  }
  auVar71 = vpcmpgtd_avx(auVar42,auVar71);
  auVar95 = vpcmpgtd_avx(auVar42,auVar62);
  auVar146._16_16_ = auVar71;
  auVar146._0_16_ = auVar95;
  auVar162 = vpslld_avx(auVar47._0_16_,4);
  auVar163 = vpslld_avx(auVar47._16_16_,4);
  auVar134 = vpand_avx(auVar162,auVar95);
  auVar72 = vpand_avx(auVar163,auVar71);
  lVar16 = param_1 + auVar72._0_4_;
  lVar17 = param_1 + auVar72._4_4_;
  lVar20 = param_1 + auVar72._8_4_;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar72._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar72._4_4_)),0x10);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + auVar72._8_4_)),0x20);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + auVar72._12_4_)),0x30);
  lVar21 = param_1 + auVar72._12_4_;
  uVar145 = auVar95._0_4_;
  uVar148 = auVar95._4_4_;
  uVar150 = auVar95._8_4_;
  uVar152 = auVar95._12_4_;
  uVar154 = auVar71._0_4_;
  uVar156 = auVar71._4_4_;
  uVar158 = auVar71._8_4_;
  uVar160 = auVar71._12_4_;
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d50) + lVar16)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d54) + lVar17)),0x10);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d58) + lVar20))
                          ,0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d5c) + lVar21))
                          ,0x30);
  auVar63 = vpslld_avx(auVar43._16_16_,4);
  auVar71 = vpand_avx(auVar71,auVar63);
  lVar22 = param_1 + auVar71._0_4_;
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar71._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar71._4_4_)),0x10);
  lVar23 = param_1 + auVar71._4_4_;
  auVar62 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d50) + lVar22)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d54) + lVar23)),0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + auVar71._8_4_)),0x20);
  lVar24 = param_1 + auVar71._8_4_;
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d58) + lVar24))
                          ,0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + auVar71._12_4_)),0x30);
  lVar25 = param_1 + auVar71._12_4_;
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d5c) + lVar25))
                          ,0x30);
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar134._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar134._4_4_)),0x10);
  lVar26 = param_1 + auVar134._0_4_;
  lVar29 = param_1 + auVar134._4_4_;
  auVar102 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar145 &
                                             ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                             ) + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)(uVar148 & _UNK_150b50d44) + lVar29)),0x10);
  auVar119 = vpslld_avx(auVar43._0_16_,4);
  auVar107 = vpand_avx(auVar95,auVar119);
  lVar31 = param_1 + auVar107._0_4_;
  auVar95 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar107._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar107._4_4_)),0x10);
  lVar34 = param_1 + auVar107._4_4_;
  auVar130 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar145 &
                                             ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                             ) + lVar31)),
                           ZEXT416(*(uint *)((ulonglong)(uVar148 & _UNK_150b50d44) + lVar34)),0x10);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + auVar134._8_4_)),0x20);
  lVar35 = param_1 + auVar134._8_4_;
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((ulonglong)(uVar150 & _UNK_150b50d48) + lVar35
                                                     )),0x20);
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + auVar107._8_4_)),0x20);
  lVar37 = param_1 + auVar107._8_4_;
  auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)((ulonglong)(uVar150 & _UNK_150b50d48) + lVar37
                                                     )),0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + auVar134._12_4_)),0x30);
  lVar38 = param_1 + auVar134._12_4_;
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((ulonglong)(uVar152 & _UNK_150b50d4c) + lVar38
                                                     )),0x30);
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + auVar107._12_4_)),0x30);
  lVar39 = param_1 + auVar107._12_4_;
  auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)((ulonglong)(uVar152 & _UNK_150b50d4c) + lVar39
                                                     )),0x30);
  auVar77._16_16_ = auVar61;
  auVar77._0_16_ = auVar71;
  auVar108._0_4_ = uVar145 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008
  ;
  auVar108._4_4_ = uVar148 & _UNK_150b50d64;
  auVar108._8_4_ = uVar150 & _UNK_150b50d68;
  auVar108._12_4_ = uVar152 & _UNK_150b50d6c;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d70) + lVar16)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d74) + lVar17)),0x10);
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d70) + lVar22)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d74) + lVar23)),0x10);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d78) + lVar20))
                          ,0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d78) + lVar24))
                          ,0x20);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d7c) + lVar21))
                          ,0x30);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d7c) + lVar25))
                          ,0x30);
  uVar10 = vextractps_avx(auVar108,1);
  uVar30 = vextractps_avx(auVar108,2);
  uVar33 = vextractps_avx(auVar108,3);
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar108._0_4_ + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)uVar10 + lVar29)),0x10);
  auVar135._16_16_ = auVar72;
  auVar135._0_16_ = auVar102;
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar108._0_4_ + lVar31)),
                          ZEXT416(*(uint *)((ulonglong)uVar10 + lVar34)),0x10);
  auVar102 = vinsertps_avx(auVar134,ZEXT416(*(uint *)((ulonglong)uVar30 + lVar35)),0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)uVar30 + lVar37)),0x20);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((ulonglong)uVar33 + lVar38)),0x30);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)uVar33 + lVar39)),0x30);
  auVar110._16_16_ = auVar61;
  auVar110._0_16_ = auVar102;
  auVar49._16_16_ = auVar42;
  auVar49._0_16_ = auVar95;
  auVar66._16_16_ = auVar62;
  auVar66._0_16_ = auVar130;
  auVar83._16_16_ = auVar71;
  auVar83._0_16_ = auVar72;
  auVar47 = vmaskmovps_avx(auVar146,auVar77);
  auVar43 = vmaskmovps_avx(auVar146,auVar135);
  auVar64 = vmaskmovps_avx(auVar146,auVar110);
  auVar65 = vmaskmovps_avx(auVar146,auVar49);
  auVar74 = vmaskmovps_avx(auVar146,auVar66);
  auVar44 = vmaskmovps_avx(auVar146,auVar83);
  auVar45 = vsubps_avx(auVar47,auVar65);
  auVar73 = vsubps_avx(auVar43,auVar74);
  auVar96 = vsubps_avx(auVar64,auVar44);
  auVar136._0_4_ =
       auVar45._0_4_ * auVar45._0_4_ + auVar73._0_4_ * auVar73._0_4_ + auVar96._0_4_ * auVar96._0_4_
  ;
  auVar136._4_4_ =
       auVar45._4_4_ * auVar45._4_4_ + auVar73._4_4_ * auVar73._4_4_ + auVar96._4_4_ * auVar96._4_4_
  ;
  auVar136._8_4_ =
       auVar45._8_4_ * auVar45._8_4_ + auVar73._8_4_ * auVar73._8_4_ + auVar96._8_4_ * auVar96._8_4_
  ;
  auVar136._12_4_ =
       auVar45._12_4_ * auVar45._12_4_ + auVar73._12_4_ * auVar73._12_4_ +
       auVar96._12_4_ * auVar96._12_4_;
  auVar136._16_4_ =
       auVar45._16_4_ * auVar45._16_4_ + auVar73._16_4_ * auVar73._16_4_ +
       auVar96._16_4_ * auVar96._16_4_;
  auVar136._20_4_ =
       auVar45._20_4_ * auVar45._20_4_ + auVar73._20_4_ * auVar73._20_4_ +
       auVar96._20_4_ * auVar96._20_4_;
  auVar136._24_4_ =
       auVar45._24_4_ * auVar45._24_4_ + auVar73._24_4_ * auVar73._24_4_ +
       auVar96._24_4_ * auVar96._24_4_;
  auVar136._28_4_ =
       auVar45._28_4_ * auVar45._28_4_ + auVar73._28_4_ * auVar73._28_4_ +
       auVar96._28_4_ * auVar96._28_4_;
  auVar82 = vsqrtps_avx(auVar136);
  auVar46 = vcmpps_avx(auVar136,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar45 = vdivps_avx(auVar45,auVar82);
  auVar67._4_4_ = __real_3f800000;
  auVar67._0_4_ = __real_3f800000;
  auVar67._8_4_ = __real_3f800000;
  auVar67._12_4_ = __real_3f800000;
  auVar67._16_4_ = __real_3f800000;
  auVar67._20_4_ = __real_3f800000;
  auVar67._24_4_ = __real_3f800000;
  auVar67._28_4_ = __real_3f800000;
  auVar45 = vblendvps_avx(auVar45,auVar67,auVar46);
  auVar45 = vmaskmovps_avx(auVar146,auVar45);
  auVar73 = vdivps_avx(auVar73,auVar82);
  uVar10 = auVar46._0_4_;
  auVar78._0_4_ = ~uVar10 & auVar73._0_4_;
  uVar30 = auVar46._4_4_;
  auVar78._4_4_ = ~uVar30 & auVar73._4_4_;
  uVar33 = auVar46._8_4_;
  auVar78._8_4_ = ~uVar33 & auVar73._8_4_;
  uVar172 = auVar46._12_4_;
  auVar78._12_4_ = ~uVar172 & auVar73._12_4_;
  uVar173 = auVar46._16_4_;
  auVar78._16_4_ = ~uVar173 & auVar73._16_4_;
  uVar174 = auVar46._20_4_;
  auVar78._20_4_ = ~uVar174 & auVar73._20_4_;
  uVar175 = auVar46._24_4_;
  auVar78._24_4_ = ~uVar175 & auVar73._24_4_;
  uVar176 = auVar46._28_4_;
  auVar78._28_4_ = ~uVar176 & auVar73._28_4_;
  auVar46 = vmaskmovps_avx(auVar146,auVar78);
  auVar73 = vdivps_avx(auVar96,auVar82);
  auVar79._0_4_ = ~uVar10 & auVar73._0_4_;
  auVar79._4_4_ = ~uVar30 & auVar73._4_4_;
  auVar79._8_4_ = ~uVar33 & auVar73._8_4_;
  auVar79._12_4_ = ~uVar172 & auVar73._12_4_;
  auVar79._16_4_ = ~uVar173 & auVar73._16_4_;
  auVar79._20_4_ = ~uVar174 & auVar73._20_4_;
  auVar79._24_4_ = ~uVar175 & auVar73._24_4_;
  auVar79._28_4_ = ~uVar176 & auVar73._28_4_;
  auVar73 = vmaskmovps_avx(auVar146,auVar79);
  auVar62._0_4_ = uVar145 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar62._4_4_ = uVar148 & _UNK_150b50d84;
  auVar62._8_4_ = uVar150 & _UNK_150b50d88;
  auVar62._12_4_ = uVar152 & _UNK_150b50d8c;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d90) + lVar16)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d94) + lVar17)),0x10);
  uVar28 = vextractps_avx(auVar62,1);
  lVar17 = CONCAT44((int)((ulonglong)lVar39 >> 0x20),uVar28);
  uVar28 = vextractps_avx(auVar62,2);
  lVar32 = CONCAT44((int)((ulonglong)lVar38 >> 0x20),uVar28);
  uVar28 = vextractps_avx(auVar62,3);
  lVar16 = CONCAT44((int)((ulonglong)lVar29 >> 0x20),uVar28);
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d90) + lVar22)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d94) + lVar23)),0x10);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d98) + lVar20))
                          ,0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d98) + lVar24))
                          ,0x20);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d9c) + lVar21))
                          ,0x30);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d9c) + lVar25))
                          ,0x30);
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar62._0_4_ + lVar26)),
                          ZEXT416(*(uint *)(lVar17 + lVar29)),0x10);
  auVar62 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar62._0_4_ + lVar31)),
                          ZEXT416(*(uint *)(lVar17 + lVar34)),0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(lVar32 + lVar35)),0x20);
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar32 + lVar37)),0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(lVar16 + lVar38)),0x30);
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar16 + lVar39)),0x30);
  lVar16 = (longlong)(int)((uint)uVar15 << 2);
  auVar96 = vmaskmovps_avx(auVar146,*(undefined1 (*) [32])(param_3 + lVar16));
  auVar84._0_4_ = ~uVar10 & auVar82._0_4_;
  auVar84._4_4_ = ~uVar30 & auVar82._4_4_;
  auVar84._8_4_ = ~uVar33 & auVar82._8_4_;
  auVar84._12_4_ = ~uVar172 & auVar82._12_4_;
  auVar84._16_4_ = ~uVar173 & auVar82._16_4_;
  auVar84._20_4_ = ~uVar174 & auVar82._20_4_;
  auVar84._24_4_ = ~uVar175 & auVar82._24_4_;
  auVar84._28_4_ = ~uVar176 & auVar82._28_4_;
  auVar82 = vsubps_avx(auVar84,auVar96);
  auVar71 = ZEXT416((uint)(param_5 * param_6 * param_5));
  auVar71 = vshufps_avx(auVar71,auVar71,0);
  fVar40 = auVar71._0_4_;
  fVar51 = auVar71._4_4_;
  fVar53 = auVar71._8_4_;
  fVar55 = auVar71._12_4_;
  auVar85._0_4_ =
       (float)((uint)fVar40 ^
              ___ymm_8000000080000000800000008000000080000000800000008000000080000000) *
       auVar82._0_4_;
  auVar85._4_4_ = (float)((uint)fVar51 ^ _UNK_150b50f64) * auVar82._4_4_;
  auVar85._8_4_ = (float)((uint)fVar53 ^ _UNK_150b50f68) * auVar82._8_4_;
  auVar85._12_4_ = (float)((uint)fVar55 ^ _UNK_150b50f6c) * auVar82._12_4_;
  auVar85._16_4_ = (float)((uint)fVar40 ^ _UNK_150b50f70) * auVar82._16_4_;
  auVar85._20_4_ = (float)((uint)fVar51 ^ _UNK_150b50f74) * auVar82._20_4_;
  auVar85._24_4_ = (float)((uint)fVar53 ^ _UNK_150b50f78) * auVar82._24_4_;
  auVar85._28_4_ = (float)((uint)fVar55 ^ _UNK_150b50f7c) * auVar82._28_4_;
  fVar41 = auVar62._0_4_;
  fVar133 = auVar42._0_4_;
  fVar52 = auVar62._4_4_;
  fVar137 = auVar42._4_4_;
  fVar54 = auVar62._8_4_;
  fVar138 = auVar42._8_4_;
  fVar56 = auVar62._12_4_;
  fVar139 = auVar42._12_4_;
  fVar57 = auVar72._0_4_;
  fVar140 = auVar61._0_4_;
  fVar59 = auVar72._4_4_;
  fVar141 = auVar61._4_4_;
  fVar2 = auVar72._8_4_;
  fVar142 = auVar61._8_4_;
  fVar4 = auVar72._12_4_;
  fVar143 = auVar61._12_4_;
  auVar68._0_4_ = (fVar133 + fVar41) * fVar40 + __real_3f800000;
  auVar68._4_4_ = (fVar137 + fVar52) * fVar51 + __real_3f800000;
  auVar68._8_4_ = (fVar138 + fVar54) * fVar53 + __real_3f800000;
  auVar68._12_4_ = (fVar139 + fVar56) * fVar55 + __real_3f800000;
  auVar68._16_4_ = (fVar140 + fVar57) * fVar40 + __real_3f800000;
  auVar68._20_4_ = (fVar141 + fVar59) * fVar51 + __real_3f800000;
  auVar68._24_4_ = (fVar142 + fVar2) * fVar53 + __real_3f800000;
  auVar68._28_4_ = (fVar143 + fVar4) * fVar55 + __real_3f800000;
  auVar96 = vmaskmovps_avx(auVar146,*(undefined1 (*) [32])(param_4 + lVar16));
  auVar82 = vsubps_avx(auVar85,auVar96);
  auVar82 = vdivps_avx(auVar82,auVar68);
  fVar40 = auVar82._0_4_;
  auVar69._0_4_ = auVar96._0_4_ + fVar40;
  fVar51 = auVar82._4_4_;
  auVar69._4_4_ = auVar96._4_4_ + fVar51;
  fVar53 = auVar82._8_4_;
  auVar69._8_4_ = auVar96._8_4_ + fVar53;
  fVar55 = auVar82._12_4_;
  auVar69._12_4_ = auVar96._12_4_ + fVar55;
  fVar58 = auVar82._16_4_;
  auVar69._16_4_ = auVar96._16_4_ + fVar58;
  fVar60 = auVar82._20_4_;
  auVar69._20_4_ = auVar96._20_4_ + fVar60;
  fVar3 = auVar82._24_4_;
  auVar69._24_4_ = auVar96._24_4_ + fVar3;
  fVar5 = auVar82._28_4_;
  auVar69._28_4_ = auVar96._28_4_ + fVar5;
  auVar82 = vmaskmovps_avx(auVar146,auVar69);
  *(undefined1 (*) [32])(param_4 + lVar16) = auVar82;
  local_2a0 = auVar45._0_4_;
  fStack_29c = auVar45._4_4_;
  fStack_298 = auVar45._8_4_;
  fStack_294 = auVar45._12_4_;
  fStack_290 = auVar45._16_4_;
  fStack_28c = auVar45._20_4_;
  fStack_288 = auVar45._24_4_;
  fStack_284 = auVar45._28_4_;
  auVar71._0_4_ = auVar47._0_4_ + fVar133 * fVar40 * local_2a0;
  auVar71._4_4_ = auVar47._4_4_ + fVar137 * fVar51 * fStack_29c;
  auVar71._8_4_ = auVar47._8_4_ + fVar138 * fVar53 * fStack_298;
  auVar71._12_4_ = auVar47._12_4_ + fVar139 * fVar55 * fStack_294;
  auVar165._16_4_ = auVar47._16_4_ + fVar140 * fVar58 * fStack_290;
  auVar165._0_16_ = auVar71;
  auVar165._20_4_ = auVar47._20_4_ + fVar141 * fVar60 * fStack_28c;
  auVar165._24_4_ = auVar47._24_4_ + fVar142 * fVar3 * fStack_288;
  auVar165._28_4_ = auVar47._28_4_ + fVar143 * fVar5 * fStack_284;
  local_280 = auVar46._0_4_;
  fStack_27c = auVar46._4_4_;
  fStack_278 = auVar46._8_4_;
  fStack_274 = auVar46._12_4_;
  fStack_270 = auVar46._16_4_;
  fStack_26c = auVar46._20_4_;
  fStack_268 = auVar46._24_4_;
  fStack_264 = auVar46._28_4_;
  local_280 = fVar40 * local_280;
  fStack_27c = fVar51 * fStack_27c;
  fStack_278 = fVar53 * fStack_278;
  fStack_274 = fVar55 * fStack_274;
  fStack_270 = fVar58 * fStack_270;
  fStack_26c = fVar60 * fStack_26c;
  fStack_268 = fVar3 * fStack_268;
  fStack_264 = fVar5 * fStack_264;
  local_260 = auVar73._0_4_;
  fStack_25c = auVar73._4_4_;
  fStack_258 = auVar73._8_4_;
  fStack_254 = auVar73._12_4_;
  fStack_250 = auVar73._16_4_;
  fStack_24c = auVar73._20_4_;
  fStack_248 = auVar73._24_4_;
  fStack_244 = auVar73._28_4_;
  local_260 = fVar40 * local_260;
  fStack_25c = fVar51 * fStack_25c;
  fStack_258 = fVar53 * fStack_258;
  fStack_254 = fVar55 * fStack_254;
  fStack_250 = fVar58 * fStack_250;
  fStack_24c = fVar60 * fStack_24c;
  fStack_248 = fVar3 * fStack_248;
  fStack_244 = fVar5 * fStack_244;
  cVar18 = (char)uVar19;
  auVar102 = auVar165._16_16_;
  iVar161 = auVar162._0_4_;
  iVar14 = auVar162._4_4_;
  iVar11 = auVar162._8_4_;
  iVar12 = auVar162._12_4_;
  iVar81 = auVar163._0_4_;
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + iVar161) = auVar71._0_4_;
  }
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + iVar81) = auVar165._16_4_;
  }
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar163,1);
    uVar28 = vextractps_avx(auVar102,1);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar163,2);
    uVar28 = vextractps_avx(auVar102,2);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar163,3);
    uVar28 = vextractps_avx(auVar102,3);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
    auVar166._0_4_ = fVar133 * local_280 + auVar43._0_4_;
    auVar166._4_4_ = fVar137 * fStack_27c + auVar43._4_4_;
    auVar166._8_4_ = fVar138 * fStack_278 + auVar43._8_4_;
    auVar166._12_4_ = fVar139 * fStack_274 + auVar43._12_4_;
    auVar166._16_4_ = fVar140 * fStack_270 + auVar43._16_4_;
    auVar166._20_4_ = fVar141 * fStack_26c + auVar43._20_4_;
    auVar166._24_4_ = fVar142 * fStack_268 + auVar43._24_4_;
    auVar166._28_4_ = fVar143 * fStack_264 + auVar43._28_4_;
  }
  else {
    auVar166._0_4_ = fVar133 * local_280 + auVar43._0_4_;
    auVar166._4_4_ = fVar137 * fStack_27c + auVar43._4_4_;
    auVar166._8_4_ = fVar138 * fStack_278 + auVar43._8_4_;
    auVar166._12_4_ = fVar139 * fStack_274 + auVar43._12_4_;
    auVar166._16_4_ = fVar140 * fStack_270 + auVar43._16_4_;
    auVar166._20_4_ = fVar141 * fStack_26c + auVar43._20_4_;
    auVar166._24_4_ = fVar142 * fStack_268 + auVar43._24_4_;
    auVar166._28_4_ = fVar143 * fStack_264 + auVar43._28_4_;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar161) = auVar166._0_4_;
  }
  auVar71 = auVar166._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar81) = auVar166._16_4_;
  }
  auVar71 = auVar166._16_16_;
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar163,1);
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar163,2);
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar163,3);
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
    auVar167._0_4_ = fVar133 * local_260 + auVar64._0_4_;
    auVar167._4_4_ = fVar137 * fStack_25c + auVar64._4_4_;
    auVar167._8_4_ = fVar138 * fStack_258 + auVar64._8_4_;
    auVar167._12_4_ = fVar139 * fStack_254 + auVar64._12_4_;
    auVar167._16_4_ = fVar140 * fStack_250 + auVar64._16_4_;
    auVar167._20_4_ = fVar141 * fStack_24c + auVar64._20_4_;
    auVar167._24_4_ = fVar142 * fStack_248 + auVar64._24_4_;
    auVar167._28_4_ = fVar143 * fStack_244 + auVar64._28_4_;
  }
  else {
    auVar167._0_4_ = fVar133 * local_260 + auVar64._0_4_;
    auVar167._4_4_ = fVar137 * fStack_25c + auVar64._4_4_;
    auVar167._8_4_ = fVar138 * fStack_258 + auVar64._8_4_;
    auVar167._12_4_ = fVar139 * fStack_254 + auVar64._12_4_;
    auVar167._16_4_ = fVar140 * fStack_250 + auVar64._16_4_;
    auVar167._20_4_ = fVar141 * fStack_24c + auVar64._20_4_;
    auVar167._24_4_ = fVar142 * fStack_248 + auVar64._24_4_;
    auVar167._28_4_ = fVar143 * fStack_244 + auVar64._28_4_;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar161) = auVar167._0_4_;
  }
  auVar71 = auVar167._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar81) = auVar167._16_4_;
  }
  auVar71 = auVar167._16_16_;
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar163,1);
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar163,2);
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar163,3);
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar161) = fVar133;
  }
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar81) = fVar140;
  }
  if ((uVar19 & 0x20) != 0) {
    iVar14 = vextractps_avx(auVar163,1);
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar14 = vextractps_avx(auVar163,2);
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar14 = vextractps_avx(auVar163,3);
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  auVar86._0_4_ = fVar40 * local_2a0 * fVar41;
  auVar86._4_4_ = fVar51 * fStack_29c * fVar52;
  auVar86._8_4_ = fVar53 * fStack_298 * fVar54;
  auVar86._12_4_ = fVar55 * fStack_294 * fVar56;
  auVar86._16_4_ = fVar58 * fStack_290 * fVar57;
  auVar86._20_4_ = fVar60 * fStack_28c * fVar59;
  auVar86._24_4_ = fVar3 * fStack_288 * fVar2;
  auVar86._28_4_ = fVar5 * fStack_284 * fVar4;
  auVar47 = vsubps_avx(auVar65,auVar86);
  iVar161 = auVar119._0_4_;
  auVar61 = auVar47._0_16_;
  auVar42 = auVar47._16_16_;
  iVar14 = auVar119._4_4_;
  iVar11 = auVar119._8_4_;
  iVar12 = auVar119._12_4_;
  iVar81 = auVar63._0_4_;
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + iVar161) = auVar47._0_4_;
  }
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + iVar81) = auVar47._16_4_;
  }
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar63,1);
    uVar28 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) == 0) {
    auVar70._0_4_ = fVar41 * local_280;
    auVar70._4_4_ = fVar52 * fStack_27c;
    auVar70._8_4_ = fVar54 * fStack_278;
    auVar70._12_4_ = fVar56 * fStack_274;
    auVar70._16_4_ = fVar57 * fStack_270;
    auVar70._20_4_ = fVar59 * fStack_26c;
    auVar70._24_4_ = fVar2 * fStack_268;
    auVar70._28_4_ = fVar4 * fStack_264;
  }
  else {
    iVar13 = vextractps_avx(auVar63,2);
    uVar28 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
    auVar70._0_4_ = fVar41 * local_280;
    auVar70._4_4_ = fVar52 * fStack_27c;
    auVar70._8_4_ = fVar54 * fStack_278;
    auVar70._12_4_ = fVar56 * fStack_274;
    auVar70._16_4_ = fVar57 * fStack_270;
    auVar70._20_4_ = fVar59 * fStack_26c;
    auVar70._24_4_ = fVar2 * fStack_268;
    auVar70._28_4_ = fVar4 * fStack_264;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar63,3);
    uVar28 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
    auVar47 = vsubps_avx(auVar74,auVar70);
  }
  else {
    auVar47 = vsubps_avx(auVar74,auVar70);
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar161) = auVar47._0_4_;
  }
  auVar61 = auVar47._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar81) = auVar47._16_4_;
  }
  auVar61 = auVar47._16_16_;
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar63,1);
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) == 0) {
    auVar50._0_4_ = fVar41 * local_260;
    auVar50._4_4_ = fVar52 * fStack_25c;
    auVar50._8_4_ = fVar54 * fStack_258;
    auVar50._12_4_ = fVar56 * fStack_254;
    auVar50._16_4_ = fVar57 * fStack_250;
    auVar50._20_4_ = fVar59 * fStack_24c;
    auVar50._24_4_ = fVar2 * fStack_248;
    auVar50._28_4_ = fVar4 * fStack_244;
  }
  else {
    iVar13 = vextractps_avx(auVar63,2);
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
    auVar50._0_4_ = fVar41 * local_260;
    auVar50._4_4_ = fVar52 * fStack_25c;
    auVar50._8_4_ = fVar54 * fStack_258;
    auVar50._12_4_ = fVar56 * fStack_254;
    auVar50._16_4_ = fVar57 * fStack_250;
    auVar50._20_4_ = fVar59 * fStack_24c;
    auVar50._24_4_ = fVar2 * fStack_248;
    auVar50._28_4_ = fVar4 * fStack_244;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar63,3);
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
    auVar47 = vsubps_avx(auVar44,auVar50);
  }
  else {
    auVar47 = vsubps_avx(auVar44,auVar50);
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar161) = auVar47._0_4_;
  }
  auVar61 = auVar47._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar81) = auVar47._16_4_;
  }
  auVar61 = auVar47._16_16_;
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar63,1);
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar63,2);
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar63,3);
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar161) = fVar41;
  }
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar62,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar62,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar62,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar81) = fVar57;
  }
  if ((uVar19 & 0x20) != 0) {
    iVar14 = vextractps_avx(auVar63,1);
    uVar28 = vextractps_avx(auVar72,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar14 = vextractps_avx(auVar63,2);
    uVar28 = vextractps_avx(auVar72,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar14 = vextractps_avx(auVar63,3);
    uVar28 = vextractps_avx(auVar72,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  return;
}

// ApplyXPBDSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_avx @ 140923d40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6,uint param_7,float param_8,uint param_9)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  int iVar27;
  int iVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  char cVar42;
  uint uVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined4 uVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  longlong lVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  longlong lVar59;
  longlong lVar60;
  ulonglong uVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar68 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  float fVar83;
  undefined1 auVar85 [16];
  int iVar84;
  float fVar97;
  float fVar98;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  float fVar99;
  undefined1 auVar90 [32];
  undefined1 auVar100 [16];
  undefined1 auVar92 [32];
  undefined1 auVar86 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  float fVar101;
  undefined1 auVar102 [16];
  float fVar111;
  float fVar112;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar103 [16];
  float fVar113;
  float fVar117;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar104 [16];
  undefined1 auVar110 [32];
  undefined1 auVar118 [16];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar123 [16];
  undefined1 auVar122 [32];
  float fVar124;
  undefined1 auVar125 [16];
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  float fVar142;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  uint uVar157;
  uint uVar159;
  uint uVar160;
  uint uVar161;
  uint uVar162;
  uint uVar163;
  uint uVar164;
  undefined1 auVar158 [32];
  uint uVar165;
  int iVar166;
  float fVar168;
  float fVar169;
  undefined1 auVar167 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  float local_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
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
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  int iVar28;
  undefined1 auVar78 [32];
  undefined1 auVar91 [32];
  undefined1 auVar141 [32];
  
  uVar43 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar43 = param_9;
  }
  param_8 = param_8 + param_8;
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    auVar17 = vshufps_avx(ZEXT416((uint)param_8),ZEXT416((uint)param_8),0);
    auVar125 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar71._16_16_ = auVar125;
    auVar71._0_16_ = auVar125;
    auVar125 = vpshufd_avx(ZEXT416(param_6),0);
    uVar31 = 0;
    uVar61 = 0;
    do {
      auVar87._16_16_ = *(undefined1 (*) [16])(param_3 + 0x30 + uVar61 * 2);
      auVar87._0_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + uVar61 * 2);
      auVar105._16_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + uVar61 * 2);
      auVar105._0_16_ = *(undefined1 (*) [16])(param_3 + uVar61 * 2);
      auVar77 = vshufps_avx(auVar105,auVar87,0x88);
      auVar90 = vshufps_avx(auVar105,auVar87,0xdd);
      auVar102 = vpslld_avx(auVar77._0_16_,4);
      auVar118 = vpslld_avx(auVar77._16_16_,4);
      lVar62 = (longlong)auVar102._0_4_;
      lVar49 = (longlong)auVar102._4_4_;
      lVar48 = (longlong)auVar102._8_4_;
      lVar59 = (longlong)auVar102._12_4_;
      lVar66 = (longlong)auVar118._0_4_;
      lVar32 = (longlong)auVar118._4_4_;
      lVar64 = (longlong)auVar118._8_4_;
      lVar56 = (longlong)auVar118._12_4_;
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar62)),
                               ZEXT416(*(uint *)(param_1 + lVar49)),0x10);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar62)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar49)),0x10);
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar62)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar49)),0x10);
      uVar26 = *(uint *)(param_1 + 0xc + lVar62);
      uVar157 = *(uint *)(param_1 + 0xc + lVar49);
      auVar100 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar66)),
                               ZEXT416(*(uint *)(param_1 + lVar32)),0x10);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + lVar48)),0x20);
      lVar33 = (longlong)(auVar77._0_4_ * 3);
      auVar123 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar66)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar32)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + 4 + lVar48)),0x20);
      auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar66)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar32)),0x10);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar48)),0x20);
      lVar44 = (longlong)(auVar77._4_4_ * 3);
      auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(param_1 + lVar64)),0x20);
      lVar51 = (longlong)(auVar77._16_4_ * 3);
      auVar70 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + lVar59)),0x30);
      auVar102 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(param_1 + 4 + lVar64)),0x20);
      auVar123 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + 4 + lVar59)),0x30);
      lVar52 = (longlong)(auVar77._20_4_ * 3);
      auVar118 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_1 + 8 + lVar64)),0x20);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar59)),0x30);
      auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar51 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar52 * 4)),0x10);
      auVar137 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar51 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),0x10);
      auVar12 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar51 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),0x10);
      auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(param_1 + lVar56)),0x30);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar33 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x10);
      auVar14 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + 4 + lVar56)),0x30);
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar33 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x10);
      auVar138 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + 8 + lVar56)),0x30);
      uVar159 = *(uint *)(param_1 + 0xc + lVar48);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar33 * 4)),
                               ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x10);
      auVar119._16_16_ = auVar100;
      auVar119._0_16_ = auVar70;
      uVar57 = uVar61 & 0xffffffff;
      auVar106._16_16_ = auVar14;
      auVar106._0_16_ = auVar123;
      auVar107._16_16_ = *(undefined1 (*) [16])(param_4 + 0x10 + uVar57);
      auVar107._0_16_ = *(undefined1 (*) [16])(param_4 + uVar57);
      auVar87 = vcmpps_avx(auVar107,
                           ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,1
                          );
      auVar72._16_16_ = auVar138;
      auVar72._0_16_ = auVar69;
      auVar88._4_4_ = __real_3f800000;
      auVar88._0_4_ = __real_3f800000;
      auVar88._8_4_ = __real_3f800000;
      auVar88._12_4_ = __real_3f800000;
      auVar88._16_4_ = __real_3f800000;
      auVar88._20_4_ = __real_3f800000;
      auVar88._24_4_ = __real_3f800000;
      auVar88._28_4_ = __real_3f800000;
      auVar78 = vdivps_avx(auVar88,auVar107);
      uVar160 = *(uint *)(param_1 + 0xc + lVar66);
      auVar87 = vblendvps_avx(auVar78,auVar88,auVar87);
      auVar86 = vinsertps_avx(ZEXT416(uVar26),ZEXT416(uVar157),0x10);
      auVar86 = vinsertps_avx(auVar86,ZEXT416(uVar159),0x20);
      uVar161 = *(uint *)(param_1 + 0xc + lVar32);
      uVar162 = *(uint *)(param_1 + 0xc + lVar64);
      auVar104 = vinsertps_avx(ZEXT416(uVar160),ZEXT416(uVar161),0x10);
      auVar104 = vinsertps_avx(auVar104,ZEXT416(uVar162),0x20);
      uVar163 = *(uint *)(param_1 + 0xc + lVar59);
      auVar86 = vinsertps_avx(auVar86,ZEXT416(uVar163),0x30);
      uVar164 = *(uint *)(param_1 + 0xc + lVar56);
      auVar104 = vinsertps_avx(auVar104,ZEXT416(uVar164),0x30);
      auVar68 = vpslld_avx(auVar90._0_16_,4);
      lVar33 = (longlong)(auVar77._24_4_ * 3);
      auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + lVar33 * 4)),0x20);
      auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(param_2 + 4 + lVar33 * 4)),0x20);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + 8 + lVar33 * 4)),0x20);
      auVar103 = vpslld_avx(auVar90._16_16_,4);
      lVar33 = (longlong)(auVar77._28_4_ * 3);
      auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + lVar33 * 4)),0x30);
      auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(param_2 + 4 + lVar33 * 4)),0x30);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + 8 + lVar33 * 4)),0x30);
      lVar63 = (longlong)auVar68._0_4_;
      lVar51 = (longlong)auVar68._4_4_;
      lVar53 = (longlong)auVar68._8_4_;
      lVar60 = (longlong)auVar68._12_4_;
      lVar33 = (longlong)auVar103._0_4_;
      lVar50 = (longlong)auVar103._4_4_;
      lVar67 = (longlong)auVar103._8_4_;
      lVar65 = (longlong)auVar103._12_4_;
      auVar68 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + lVar50)),0x10);
      auVar103 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar63)),
                               ZEXT416(*(uint *)(param_1 + lVar51)),0x10);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(*(uint *)(param_1 + lVar67)),0x20);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(*(uint *)(param_1 + lVar53)),0x20);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(*(uint *)(param_1 + lVar60)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar50)),0x10);
      auVar16 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar63)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar51)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 4 + lVar67)),0x20);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_1 + 4 + lVar53)),0x20);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(*(uint *)(param_1 + lVar65)),0x30);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_1 + 4 + lVar60)),0x30);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 4 + lVar65)),0x30);
      auVar73._16_16_ = auVar68;
      auVar73._0_16_ = auVar103;
      auVar68 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar63)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar51)),0x10);
      auVar177._16_16_ = auVar15;
      auVar177._0_16_ = auVar16;
      auVar103 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar33)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar50)),0x10);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(*(uint *)(param_1 + 8 + lVar53)),0x20);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(*(uint *)(param_1 + 8 + lVar67)),0x20);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(*(uint *)(param_1 + 8 + lVar60)),0x30);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(*(uint *)(param_1 + 8 + lVar65)),0x30);
      auVar74._16_16_ = auVar103;
      auVar74._0_16_ = auVar68;
      uVar165 = *(uint *)(param_1 + 0xc + lVar63);
      uVar2 = *(uint *)(param_1 + 0xc + lVar51);
      uVar3 = *(uint *)(param_1 + 0xc + lVar53);
      auVar68 = vinsertps_avx(ZEXT416(uVar165),ZEXT416(uVar2),0x10);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(uVar3),0x20);
      lVar44 = (longlong)(auVar77._8_4_ * 3);
      uVar4 = *(uint *)(param_1 + 0xc + lVar33);
      uVar5 = *(uint *)(param_1 + 0xc + lVar50);
      uVar6 = *(uint *)(param_1 + 0xc + lVar67);
      auVar103 = vinsertps_avx(ZEXT416(uVar4),ZEXT416(uVar5),0x10);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(uVar6),0x20);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar60);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(uVar7),0x30);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar65);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(uVar8),0x30);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x20);
      lVar44 = (longlong)(auVar77._12_4_ * 3);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x30);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x30);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x30);
      lVar44 = (longlong)(auVar90._16_4_ * 3);
      lVar52 = (longlong)(auVar90._20_4_ * 3);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar52 * 4)),0x10);
      auVar75._16_16_ = auVar85;
      auVar75._0_16_ = auVar13;
      auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),0x10);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),0x10);
      lVar44 = (longlong)(auVar90._24_4_ * 3);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x20);
      auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x20);
      auVar89._16_16_ = auVar137;
      auVar89._0_16_ = auVar102;
      auVar102 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x20);
      lVar44 = (longlong)(auVar90._28_4_ * 3);
      auVar137 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x30);
      auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x30);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x30);
      lVar44 = (longlong)(auVar90._0_4_ * 3);
      lVar52 = (longlong)(auVar90._4_4_ * 3);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar52 * 4)),0x10);
      auVar76._16_16_ = auVar12;
      auVar76._0_16_ = auVar118;
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),0x10);
      auVar12 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),0x10);
      lVar44 = (longlong)(auVar90._8_4_ * 3);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x20);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x20);
      auVar77 = vsubps_avx(auVar119,auVar73);
      auVar88 = vsubps_avx(auVar106,auVar177);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x20);
      lVar44 = (longlong)(auVar90._12_4_ * 3);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x30);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x30);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x30);
      auVar91 = vsubps_avx(auVar72,auVar74);
      auVar153._0_4_ =
           auVar91._0_4_ * auVar91._0_4_ +
           auVar77._0_4_ * auVar77._0_4_ + auVar88._0_4_ * auVar88._0_4_;
      auVar153._4_4_ =
           auVar91._4_4_ * auVar91._4_4_ +
           auVar77._4_4_ * auVar77._4_4_ + auVar88._4_4_ * auVar88._4_4_;
      auVar153._8_4_ =
           auVar91._8_4_ * auVar91._8_4_ +
           auVar77._8_4_ * auVar77._8_4_ + auVar88._8_4_ * auVar88._8_4_;
      auVar153._12_4_ =
           auVar91._12_4_ * auVar91._12_4_ +
           auVar77._12_4_ * auVar77._12_4_ + auVar88._12_4_ * auVar88._12_4_;
      auVar153._16_4_ =
           auVar91._16_4_ * auVar91._16_4_ +
           auVar77._16_4_ * auVar77._16_4_ + auVar88._16_4_ * auVar88._16_4_;
      auVar153._20_4_ =
           auVar91._20_4_ * auVar91._20_4_ +
           auVar77._20_4_ * auVar77._20_4_ + auVar88._20_4_ * auVar88._20_4_;
      auVar153._24_4_ =
           auVar91._24_4_ * auVar91._24_4_ +
           auVar77._24_4_ * auVar77._24_4_ + auVar88._24_4_ * auVar88._24_4_;
      auVar153._28_4_ =
           auVar91._28_4_ * auVar91._28_4_ +
           auVar77._28_4_ * auVar77._28_4_ + auVar88._28_4_ * auVar88._28_4_;
      auVar78 = vsqrtps_avx(auVar153);
      auVar77 = vdivps_avx(auVar77,auVar78);
      auVar90 = vdivps_avx(auVar88,auVar78);
      auVar88 = vdivps_avx(auVar91,auVar78);
      local_3a0 = auVar86._0_4_;
      fStack_39c = auVar86._4_4_;
      fStack_398 = auVar86._8_4_;
      fStack_394 = auVar86._12_4_;
      fStack_390 = auVar104._0_4_;
      fStack_38c = auVar104._4_4_;
      fStack_388 = auVar104._8_4_;
      fStack_384 = auVar104._12_4_;
      local_540 = auVar68._0_4_;
      fStack_53c = auVar68._4_4_;
      fStack_538 = auVar68._8_4_;
      fStack_534 = auVar68._12_4_;
      fStack_530 = auVar103._0_4_;
      fStack_52c = auVar103._4_4_;
      fStack_528 = auVar103._8_4_;
      fStack_524 = auVar103._12_4_;
      auVar176._0_4_ = local_3a0 + local_540;
      auVar176._4_4_ = fStack_39c + fStack_53c;
      auVar176._8_4_ = fStack_398 + fStack_538;
      auVar176._12_4_ = fStack_394 + fStack_534;
      auVar176._16_4_ = fStack_390 + fStack_530;
      auVar176._20_4_ = fStack_38c + fStack_52c;
      auVar176._24_4_ = fStack_388 + fStack_528;
      auVar176._28_4_ = fStack_384 + fStack_524;
      auVar78 = vdivps_avx(auVar71,auVar176);
      auVar91 = vsqrtps_avx(auVar78);
      auVar78 = vsubps_avx(auVar119,auVar75);
      auVar75 = vsubps_avx(auVar78,auVar73);
      local_220 = auVar17._0_4_;
      fStack_21c = auVar17._4_4_;
      fStack_218 = auVar17._8_4_;
      fStack_214 = auVar17._12_4_;
      local_360 = auVar87._0_4_;
      fStack_35c = auVar87._4_4_;
      fStack_358 = auVar87._8_4_;
      fStack_354 = auVar87._12_4_;
      fStack_350 = auVar87._16_4_;
      fStack_34c = auVar87._20_4_;
      fStack_348 = auVar87._24_4_;
      fStack_344 = auVar87._28_4_;
      auVar87 = vsubps_avx(auVar106,auVar89);
      auVar89 = vsubps_avx(auVar87,auVar177);
      auVar78 = vcmpps_avx(auVar153,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar120._4_4_ = __real_3f800000;
      auVar120._0_4_ = __real_3f800000;
      auVar120._8_4_ = __real_3f800000;
      auVar120._12_4_ = __real_3f800000;
      auVar120._16_4_ = __real_3f800000;
      auVar120._20_4_ = __real_3f800000;
      auVar120._24_4_ = __real_3f800000;
      auVar120._28_4_ = __real_3f800000;
      auVar87 = vblendvps_avx(auVar77,auVar120,auVar78);
      fVar124 = (float)(~auVar78._0_4_ & auVar90._0_4_);
      fVar130 = (float)(~auVar78._4_4_ & auVar90._4_4_);
      fVar131 = (float)(~auVar78._8_4_ & auVar90._8_4_);
      fVar132 = (float)(~auVar78._12_4_ & auVar90._12_4_);
      fVar133 = (float)(~auVar78._16_4_ & auVar90._16_4_);
      fVar134 = (float)(~auVar78._20_4_ & auVar90._20_4_);
      fVar135 = (float)(~auVar78._24_4_ & auVar90._24_4_);
      fVar136 = (float)(~auVar78._28_4_ & auVar90._28_4_);
      fVar142 = (float)(~auVar78._0_4_ & auVar88._0_4_);
      fVar146 = (float)(~auVar78._4_4_ & auVar88._4_4_);
      fVar147 = (float)(~auVar78._8_4_ & auVar88._8_4_);
      fVar148 = (float)(~auVar78._12_4_ & auVar88._12_4_);
      fVar149 = (float)(~auVar78._16_4_ & auVar88._16_4_);
      fVar150 = (float)(~auVar78._20_4_ & auVar88._20_4_);
      fVar151 = (float)(~auVar78._24_4_ & auVar88._24_4_);
      fVar152 = (float)(~auVar78._28_4_ & auVar88._28_4_);
      auVar78 = vsubps_avx(auVar72,auVar76);
      auVar78 = vsubps_avx(auVar78,auVar74);
      local_1e0 = auVar12._0_4_;
      fStack_1dc = auVar12._4_4_;
      fStack_1d8 = auVar12._8_4_;
      fStack_1d4 = auVar12._12_4_;
      fStack_1d0 = auVar102._0_4_;
      fStack_1cc = auVar102._4_4_;
      fStack_1c8 = auVar102._8_4_;
      fStack_1c4 = auVar102._12_4_;
      local_260 = auVar125._0_4_;
      fStack_25c = auVar125._4_4_;
      fStack_258 = auVar125._8_4_;
      fStack_254 = auVar125._12_4_;
      fVar83 = auVar91._0_4_ * local_220 * local_360 * local_260;
      fVar97 = auVar91._4_4_ * fStack_21c * fStack_35c * fStack_25c;
      fVar98 = auVar91._8_4_ * fStack_218 * fStack_358 * fStack_258;
      fVar99 = auVar91._12_4_ * fStack_214 * fStack_354 * fStack_254;
      local_260 = auVar91._16_4_ * local_220 * fStack_350 * local_260;
      fStack_25c = auVar91._20_4_ * fStack_21c * fStack_34c * fStack_25c;
      fStack_258 = auVar91._24_4_ * fStack_218 * fStack_348 * fStack_258;
      fStack_254 = auVar91._28_4_ * fStack_214 * fStack_344 * fStack_254;
      auVar77._0_4_ =
           (auVar87._0_4_ * (auVar75._0_4_ + auVar13._0_4_) +
            (auVar89._0_4_ + auVar118._0_4_) * fVar124 + fVar142 * (auVar78._0_4_ + local_1e0)) *
           (float)((uint)fVar83 ^
                  ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
      auVar77._4_4_ =
           (auVar87._4_4_ * (auVar75._4_4_ + auVar13._4_4_) +
            (auVar89._4_4_ + auVar118._4_4_) * fVar130 + fVar146 * (auVar78._4_4_ + fStack_1dc)) *
           (float)((uint)fVar97 ^ _UNK_150b50f64);
      auVar77._8_4_ =
           (auVar87._8_4_ * (auVar75._8_4_ + auVar13._8_4_) +
            (auVar89._8_4_ + auVar118._8_4_) * fVar131 + fVar147 * (auVar78._8_4_ + fStack_1d8)) *
           (float)((uint)fVar98 ^ _UNK_150b50f68);
      auVar77._12_4_ =
           (auVar87._12_4_ * (auVar75._12_4_ + auVar13._12_4_) +
            (auVar89._12_4_ + auVar118._12_4_) * fVar132 + fVar148 * (auVar78._12_4_ + fStack_1d4))
           * (float)((uint)fVar99 ^ _UNK_150b50f6c);
      auVar77._16_4_ =
           (auVar87._16_4_ * (auVar75._16_4_ + auVar137._0_4_) +
            (auVar89._16_4_ + auVar85._0_4_) * fVar133 + fVar149 * (auVar78._16_4_ + fStack_1d0)) *
           (float)((uint)local_260 ^ _UNK_150b50f70);
      auVar77._20_4_ =
           (auVar87._20_4_ * (auVar75._20_4_ + auVar137._4_4_) +
            (auVar89._20_4_ + auVar85._4_4_) * fVar134 + fVar150 * (auVar78._20_4_ + fStack_1cc)) *
           (float)((uint)fStack_25c ^ _UNK_150b50f74);
      auVar77._24_4_ =
           (auVar87._24_4_ * (auVar75._24_4_ + auVar137._8_4_) +
            (auVar89._24_4_ + auVar85._8_4_) * fVar135 + fVar151 * (auVar78._24_4_ + fStack_1c8)) *
           (float)((uint)fStack_258 ^ _UNK_150b50f78);
      auVar77._28_4_ =
           (auVar87._28_4_ * (auVar75._28_4_ + auVar137._12_4_) +
            (auVar89._28_4_ + auVar85._12_4_) * fVar136 + fVar152 * (auVar78._28_4_ + fStack_1c4)) *
           (float)((uint)fStack_254 ^ _UNK_150b50f7c);
      auVar102 = *(undefined1 (*) [16])(param_5 + uVar57);
      auVar118 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar57);
      auVar172._16_16_ = auVar118;
      auVar172._0_16_ = auVar102;
      auVar78 = vsubps_avx(auVar77,auVar172);
      auVar90._0_4_ = auVar176._0_4_ * fVar83 + __real_3f800000;
      auVar90._4_4_ = auVar176._4_4_ * fVar97 + __real_3f800000;
      auVar90._8_4_ = auVar176._8_4_ * fVar98 + __real_3f800000;
      auVar90._12_4_ = auVar176._12_4_ * fVar99 + __real_3f800000;
      auVar90._16_4_ = auVar176._16_4_ * local_260 + __real_3f800000;
      auVar90._20_4_ = auVar176._20_4_ * fStack_25c + __real_3f800000;
      auVar90._24_4_ = auVar176._24_4_ * fStack_258 + __real_3f800000;
      auVar90._28_4_ = auVar176._28_4_ * fStack_254 + __real_3f800000;
      auVar78 = vdivps_avx(auVar78,auVar90);
      fVar83 = auVar78._0_4_;
      fVar101 = auVar87._0_4_ * fVar83;
      fVar97 = auVar78._4_4_;
      fVar111 = auVar87._4_4_ * fVar97;
      fVar98 = auVar78._8_4_;
      fVar112 = auVar87._8_4_ * fVar98;
      fVar99 = auVar78._12_4_;
      fVar113 = auVar87._12_4_ * fVar99;
      fVar10 = auVar78._16_4_;
      fVar114 = auVar87._16_4_ * fVar10;
      fVar168 = auVar78._20_4_;
      fVar115 = auVar87._20_4_ * fVar168;
      fVar11 = auVar78._24_4_;
      fVar116 = auVar87._24_4_ * fVar11;
      fVar169 = auVar78._28_4_;
      fVar117 = auVar87._28_4_ * fVar169;
      auVar85._0_4_ = auVar70._0_4_ + local_3a0 * fVar101;
      auVar85._4_4_ = auVar70._4_4_ + fStack_39c * fVar111;
      auVar85._8_4_ = auVar70._8_4_ + fStack_398 * fVar112;
      auVar85._12_4_ = auVar70._12_4_ + fStack_394 * fVar113;
      auVar91._16_4_ = auVar100._0_4_ + fStack_390 * fVar114;
      auVar91._0_16_ = auVar85;
      auVar91._20_4_ = auVar100._4_4_ + fStack_38c * fVar115;
      auVar91._24_4_ = auVar100._8_4_ + fStack_388 * fVar116;
      auVar91._28_4_ = auVar100._12_4_ + fStack_384 * fVar117;
      *(float *)(param_1 + lVar62) = auVar85._0_4_;
      uVar47 = vextractps_avx(auVar85,1);
      *(undefined4 *)(param_1 + lVar49) = uVar47;
      fVar124 = fVar124 * fVar83;
      fVar130 = fVar130 * fVar97;
      fVar131 = fVar131 * fVar98;
      fVar132 = fVar132 * fVar99;
      fVar133 = fVar133 * fVar10;
      fVar134 = fVar134 * fVar168;
      fVar135 = fVar135 * fVar11;
      fVar136 = fVar136 * fVar169;
      uVar47 = vextractps_avx(auVar85,2);
      *(undefined4 *)(param_1 + lVar48) = uVar47;
      uVar47 = vextractps_avx(auVar85,3);
      *(undefined4 *)(param_1 + lVar59) = uVar47;
      auVar100 = auVar91._16_16_;
      *(float *)(param_1 + lVar66) = auVar91._16_4_;
      uVar47 = vextractps_avx(auVar100,1);
      *(undefined4 *)(param_1 + lVar32) = uVar47;
      uVar47 = vextractps_avx(auVar100,2);
      *(undefined4 *)(param_1 + lVar64) = uVar47;
      local_480 = auVar123._0_4_;
      fStack_47c = auVar123._4_4_;
      fStack_478 = auVar123._8_4_;
      fStack_474 = auVar123._12_4_;
      fStack_470 = auVar14._0_4_;
      fStack_46c = auVar14._4_4_;
      fStack_468 = auVar14._8_4_;
      fStack_464 = auVar14._12_4_;
      auVar123._0_4_ = local_3a0 * fVar124 + local_480;
      auVar123._4_4_ = fStack_39c * fVar130 + fStack_47c;
      auVar123._8_4_ = fStack_398 * fVar131 + fStack_478;
      auVar123._12_4_ = fStack_394 * fVar132 + fStack_474;
      auVar121._16_4_ = fStack_390 * fVar133 + fStack_470;
      auVar121._0_16_ = auVar123;
      auVar121._20_4_ = fStack_38c * fVar134 + fStack_46c;
      auVar121._24_4_ = fStack_388 * fVar135 + fStack_468;
      auVar121._28_4_ = fStack_384 * fVar136 + fStack_464;
      uVar47 = vextractps_avx(auVar100,3);
      *(undefined4 *)(param_1 + lVar56) = uVar47;
      *(float *)(param_1 + 4 + lVar62) = auVar123._0_4_;
      uVar47 = vextractps_avx(auVar123,1);
      *(undefined4 *)(param_1 + 4 + lVar49) = uVar47;
      fVar142 = fVar142 * fVar83;
      fVar146 = fVar146 * fVar97;
      fVar147 = fVar147 * fVar98;
      fVar148 = fVar148 * fVar99;
      fVar149 = fVar149 * fVar10;
      fVar150 = fVar150 * fVar168;
      fVar151 = fVar151 * fVar11;
      fVar152 = fVar152 * fVar169;
      uVar47 = vextractps_avx(auVar123,2);
      *(undefined4 *)(param_1 + 4 + lVar48) = uVar47;
      uVar47 = vextractps_avx(auVar123,3);
      *(undefined4 *)(param_1 + 4 + lVar59) = uVar47;
      auVar123 = auVar121._16_16_;
      *(float *)(param_1 + 4 + lVar66) = auVar121._16_4_;
      uVar47 = vextractps_avx(auVar123,1);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar47;
      uVar47 = vextractps_avx(auVar123,2);
      *(undefined4 *)(param_1 + 4 + lVar64) = uVar47;
      auVar100._0_4_ = auVar69._0_4_ + local_3a0 * fVar142;
      auVar100._4_4_ = auVar69._4_4_ + fStack_39c * fVar146;
      auVar100._8_4_ = auVar69._8_4_ + fStack_398 * fVar147;
      auVar100._12_4_ = auVar69._12_4_ + fStack_394 * fVar148;
      auVar122._16_4_ = auVar138._0_4_ + fStack_390 * fVar149;
      auVar122._0_16_ = auVar100;
      auVar122._20_4_ = auVar138._4_4_ + fStack_38c * fVar150;
      auVar122._24_4_ = auVar138._8_4_ + fStack_388 * fVar151;
      auVar122._28_4_ = auVar138._12_4_ + fStack_384 * fVar152;
      uVar47 = vextractps_avx(auVar123,3);
      *(undefined4 *)(param_1 + 4 + lVar56) = uVar47;
      *(float *)(param_1 + 8 + lVar62) = auVar100._0_4_;
      uVar47 = vextractps_avx(auVar100,1);
      *(undefined4 *)(param_1 + 8 + lVar49) = uVar47;
      uVar47 = vextractps_avx(auVar100,2);
      *(undefined4 *)(param_1 + 8 + lVar48) = uVar47;
      uVar47 = vextractps_avx(auVar100,3);
      *(undefined4 *)(param_1 + 8 + lVar59) = uVar47;
      auVar69 = auVar122._16_16_;
      *(float *)(param_1 + 8 + lVar66) = auVar122._16_4_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar47;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + 8 + lVar64) = uVar47;
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + 8 + lVar56) = uVar47;
      *(uint *)(param_1 + 0xc + lVar62) = uVar26;
      *(uint *)(param_1 + 0xc + lVar49) = uVar157;
      *(uint *)(param_1 + 0xc + lVar48) = uVar159;
      *(uint *)(param_1 + 0xc + lVar59) = uVar163;
      *(uint *)(param_1 + 0xc + lVar66) = uVar160;
      *(uint *)(param_1 + 0xc + lVar32) = uVar161;
      *(uint *)(param_1 + 0xc + lVar64) = uVar162;
      auVar92._0_4_ = local_540 * fVar101;
      auVar92._4_4_ = fStack_53c * fVar111;
      auVar92._8_4_ = fStack_538 * fVar112;
      auVar92._12_4_ = fStack_534 * fVar113;
      auVar92._16_4_ = fStack_530 * fVar114;
      auVar92._20_4_ = fStack_52c * fVar115;
      auVar92._24_4_ = fStack_528 * fVar116;
      auVar92._28_4_ = fStack_524 * fVar117;
      auVar87 = vsubps_avx(auVar73,auVar92);
      *(uint *)(param_1 + 0xc + lVar56) = uVar164;
      *(int *)(param_1 + lVar63) = auVar87._0_4_;
      auVar69 = auVar87._0_16_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + lVar51) = uVar47;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + lVar53) = uVar47;
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + lVar60) = uVar47;
      auVar69 = auVar87._16_16_;
      *(int *)(param_1 + lVar33) = auVar87._16_4_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + lVar50) = uVar47;
      auVar108._0_4_ = local_540 * fVar124;
      auVar108._4_4_ = fStack_53c * fVar130;
      auVar108._8_4_ = fStack_538 * fVar131;
      auVar108._12_4_ = fStack_534 * fVar132;
      auVar108._16_4_ = fStack_530 * fVar133;
      auVar108._20_4_ = fStack_52c * fVar134;
      auVar108._24_4_ = fStack_528 * fVar135;
      auVar108._28_4_ = fStack_524 * fVar136;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + lVar67) = uVar47;
      auVar87 = vsubps_avx(auVar177,auVar108);
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + lVar65) = uVar47;
      *(int *)(param_1 + 4 + lVar63) = auVar87._0_4_;
      auVar69 = auVar87._0_16_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + 4 + lVar51) = uVar47;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + 4 + lVar53) = uVar47;
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + 4 + lVar60) = uVar47;
      auVar69 = auVar87._16_16_;
      *(int *)(param_1 + 4 + lVar33) = auVar87._16_4_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + 4 + lVar50) = uVar47;
      auVar109._0_4_ = local_540 * fVar142;
      auVar109._4_4_ = fStack_53c * fVar146;
      auVar109._8_4_ = fStack_538 * fVar147;
      auVar109._12_4_ = fStack_534 * fVar148;
      auVar109._16_4_ = fStack_530 * fVar149;
      auVar109._20_4_ = fStack_52c * fVar150;
      auVar109._24_4_ = fStack_528 * fVar151;
      auVar109._28_4_ = fStack_524 * fVar152;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + 4 + lVar67) = uVar47;
      auVar87 = vsubps_avx(auVar74,auVar109);
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + 4 + lVar65) = uVar47;
      *(int *)(param_1 + 8 + lVar63) = auVar87._0_4_;
      auVar69 = auVar87._0_16_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + 8 + lVar51) = uVar47;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + 8 + lVar53) = uVar47;
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + 8 + lVar60) = uVar47;
      *(int *)(param_1 + 8 + lVar33) = auVar87._16_4_;
      *(int *)(param_1 + 8 + lVar50) = auVar87._20_4_;
      auVar69._0_4_ = auVar102._0_4_ + fVar83;
      auVar69._4_4_ = auVar102._4_4_ + fVar97;
      auVar69._8_4_ = auVar102._8_4_ + fVar98;
      auVar69._12_4_ = auVar102._12_4_ + fVar99;
      auVar78._16_4_ = auVar118._0_4_ + fVar10;
      auVar78._0_16_ = auVar69;
      auVar78._20_4_ = auVar118._4_4_ + fVar168;
      auVar78._24_4_ = auVar118._8_4_ + fVar11;
      auVar78._28_4_ = auVar118._12_4_ + fVar169;
      *(int *)(param_1 + 8 + lVar67) = auVar87._24_4_;
      *(int *)(param_1 + 8 + lVar65) = auVar87._28_4_;
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar57) = auVar78._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar57) = auVar69;
      *(uint *)(param_1 + 0xc + lVar63) = uVar165;
      *(uint *)(param_1 + 0xc + lVar51) = uVar2;
      *(uint *)(param_1 + 0xc + lVar53) = uVar3;
      *(uint *)(param_1 + 0xc + lVar60) = uVar7;
      *(uint *)(param_1 + 0xc + lVar33) = uVar4;
      *(uint *)(param_1 + 0xc + lVar50) = uVar5;
      *(uint *)(param_1 + 0xc + lVar67) = uVar6;
      *(uint *)(param_1 + 0xc + lVar65) = uVar8;
      uVar61 = uVar61 + 0x20;
      uVar26 = (int)uVar31 + 8;
      uVar31 = (ulonglong)uVar26;
    } while ((int)uVar26 < (int)(uVar43 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar26) {
      return;
    }
  }
  auVar125 = vpshufd_avx(ZEXT416((uint)uVar31),0);
  auVar79._16_16_ = auVar125;
  auVar79._0_16_ = auVar125;
  auVar102 = vpshufd_avx(ZEXT416(param_9),0);
  pauVar1 = (undefined1 (*) [16])(param_3 + uVar31 * 8);
  auVar118 = SUB3216(auVar79 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar69 = SUB3216(auVar79 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar125 = vpcmpgtd_avx(auVar102,auVar69);
  auVar17 = vpcmpgtd_avx(auVar102,auVar118);
  auVar80._16_16_ = auVar125;
  auVar80._0_16_ = auVar17;
  uVar43 = vmovmskps_avx(auVar80);
  if (uVar43 == 0xff) {
    auVar139._16_16_ = pauVar1[3];
    auVar139._0_16_ = pauVar1[1];
    auVar143._16_16_ = pauVar1[2];
    auVar143._0_16_ = *pauVar1;
    auVar71 = vshufps_avx(auVar143,auVar139,0x88);
    auVar87 = vshufps_avx(auVar143,auVar139,0xdd);
  }
  else {
    auVar125 = vpcmpgtd_avx(auVar102,auVar69);
    auVar17 = vpcmpgtd_avx(auVar102,auVar118);
    auVar70._0_4_ =
         auVar17._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar70._4_4_ = auVar17._4_4_ & _UNK_150b519c4;
    auVar70._8_4_ = auVar17._8_4_ & _UNK_150b519c8;
    auVar70._12_4_ = auVar17._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar70,1);
    vextractps_avx(auVar70,2);
    vextractps_avx(auVar70,3);
    auVar137._0_4_ =
         auVar17._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar137._4_4_ = auVar17._4_4_ & _UNK_150b519e4;
    auVar137._8_4_ = auVar17._8_4_ & _UNK_150b519e8;
    auVar137._12_4_ = auVar17._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar137,1);
    vextractps_avx(auVar137,2);
    vextractps_avx(auVar137,3);
    auVar71 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar125._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar87 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar125._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar137._0_4_))));
  }
  auVar137 = vpcmpgtd_avx(auVar102,auVar69);
  auVar138 = vpcmpgtd_avx(auVar102,auVar118);
  auVar158._16_16_ = auVar137;
  auVar158._0_16_ = auVar138;
  auVar86 = vpslld_avx(auVar71._0_16_,4);
  auVar104 = vpslld_avx(auVar71._16_16_,4);
  auVar102 = vpand_avx(auVar138,auVar86);
  lVar32 = param_1 + auVar102._0_4_;
  lVar33 = param_1 + auVar102._4_4_;
  lVar44 = param_1 + auVar102._8_4_;
  lVar51 = param_1 + auVar102._12_4_;
  auVar118 = vpand_avx(auVar137,auVar104);
  lVar52 = param_1 + auVar118._0_4_;
  auVar125 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar102._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar102._4_4_)),0x10);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar118._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar118._4_4_)),0x10);
  lVar48 = param_1 + auVar118._4_4_;
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + auVar102._8_4_)),0x20);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_1 + auVar118._8_4_)),0x20);
  lVar49 = param_1 + auVar118._8_4_;
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_1 + auVar118._12_4_)),0x30);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + auVar102._12_4_)),0x30);
  uVar157 = auVar138._0_4_;
  uVar159 = auVar138._4_4_;
  uVar160 = auVar138._8_4_;
  uVar161 = auVar138._12_4_;
  uVar162 = auVar137._0_4_;
  uVar163 = auVar137._4_4_;
  uVar164 = auVar137._8_4_;
  uVar165 = auVar137._12_4_;
  lVar50 = param_1 + auVar118._12_4_;
  uVar34 = (ulonglong)(uVar162 & _UNK_150b50d50);
  uVar35 = (ulonglong)(uVar163 & _UNK_150b50d54);
  auVar102 = vinsertps_avx(ZEXT416(*(uint *)(uVar34 + lVar52)),ZEXT416(*(uint *)(uVar35 + lVar48)),
                           0x10);
  uVar36 = (ulonglong)(uVar164 & _UNK_150b50d58);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(uVar36 + lVar49)),0x20);
  uVar37 = (ulonglong)(uVar165 & _UNK_150b50d5c);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(uVar37 + lVar50)),0x30);
  uVar57 = (ulonglong)
           (uVar157 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004);
  uVar61 = (ulonglong)(uVar159 & _UNK_150b50d44);
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar32)),ZEXT416(*(uint *)(uVar61 + lVar33)),
                           0x10);
  uVar38 = (ulonglong)(uVar160 & _UNK_150b50d48);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar38 + lVar44)),0x20);
  uVar39 = (ulonglong)(uVar161 & _UNK_150b50d4c);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar39 + lVar51)),0x30);
  auVar68._0_4_ = uVar157 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar68._4_4_ = uVar159 & _UNK_150b50d64;
  auVar68._8_4_ = uVar160 & _UNK_150b50d68;
  auVar68._12_4_ = uVar161 & _UNK_150b50d6c;
  auVar93._16_16_ = auVar17;
  auVar93._0_16_ = auVar125;
  uVar54 = (ulonglong)(uVar163 & _UNK_150b50d74);
  uVar45 = (ulonglong)(uVar164 & _UNK_150b50d78);
  uVar40 = (ulonglong)(uVar165 & _UNK_150b50d7c);
  uVar58 = (ulonglong)(uVar162 & _UNK_150b50d70);
  auVar125 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar52)),ZEXT416(*(uint *)(uVar54 + lVar48)),
                           0x10);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(uVar45 + lVar49)),0x20);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(uVar40 + lVar50)),0x30);
  uVar26 = vextractps_avx(auVar68,1);
  uVar55 = (ulonglong)uVar26;
  uVar26 = vextractps_avx(auVar68,2);
  uVar46 = (ulonglong)uVar26;
  uVar18 = (ulonglong)auVar68._0_4_;
  uVar41 = (ulonglong)auVar68._12_4_;
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar32)),ZEXT416(*(uint *)(uVar55 + lVar33)),
                          0x10);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar46 + lVar44)),0x20);
  auVar126._16_16_ = auVar102;
  auVar126._0_16_ = auVar118;
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar41 + lVar51)),0x30);
  auVar140._16_16_ = auVar125;
  auVar140._0_16_ = auVar17;
  auVar68 = vpslld_avx(auVar87._0_16_,4);
  auVar69 = vpand_avx(auVar138,auVar68);
  auVar103 = vpslld_avx(auVar87._16_16_,4);
  auVar118 = vpand_avx(auVar137,auVar103);
  lVar53 = param_1 + auVar69._0_4_;
  auVar125 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar69._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar69._4_4_)),0x10);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + auVar69._8_4_)),0x20);
  lVar56 = param_1 + auVar69._4_4_;
  lVar59 = param_1 + auVar69._8_4_;
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar118._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar118._4_4_)),0x10);
  lVar60 = param_1 + auVar118._0_4_;
  lVar62 = param_1 + auVar118._4_4_;
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_1 + auVar118._8_4_)),0x20);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_1 + auVar118._12_4_)),0x30);
  lVar63 = param_1 + auVar118._8_4_;
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + auVar69._12_4_)),0x30);
  auVar102 = vinsertps_avx(ZEXT416(*(uint *)(uVar34 + lVar60)),ZEXT416(*(uint *)(uVar35 + lVar62)),
                           0x10);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(uVar36 + lVar63)),0x20);
  lVar64 = param_1 + auVar118._12_4_;
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(uVar37 + lVar64)),0x30);
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar53)),ZEXT416(*(uint *)(uVar61 + lVar56)),
                           0x10);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar38 + lVar59)),0x20);
  lVar65 = param_1 + auVar69._12_4_;
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar39 + lVar65)),0x30);
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar60)),ZEXT416(*(uint *)(uVar54 + lVar62)),
                          0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar45 + lVar63)),0x20);
  auVar144._16_16_ = auVar17;
  auVar144._0_16_ = auVar125;
  auVar125 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar40 + lVar64)),0x30);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar53)),ZEXT416(*(uint *)(uVar55 + lVar56)),
                          0x10);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar46 + lVar59)),0x20);
  auVar170._16_16_ = auVar102;
  auVar170._0_16_ = auVar118;
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar41 + lVar65)),0x30);
  auVar154._16_16_ = auVar125;
  auVar154._0_16_ = auVar17;
  auVar78 = vmaskmovps_avx(auVar158,auVar93);
  auVar77 = vmaskmovps_avx(auVar158,auVar126);
  auVar90 = vmaskmovps_avx(auVar158,auVar140);
  auVar88 = vmaskmovps_avx(auVar158,auVar144);
  auVar91 = vmaskmovps_avx(auVar158,auVar170);
  auVar75 = vmaskmovps_avx(auVar158,auVar154);
  auVar89 = vsubps_avx(auVar78,auVar88);
  auVar73 = vsubps_avx(auVar77,auVar91);
  auVar118._0_4_ = uVar157 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
  ;
  auVar118._4_4_ = uVar159 & _UNK_150b50d84;
  auVar118._8_4_ = uVar160 & _UNK_150b50d88;
  auVar118._12_4_ = uVar161 & _UNK_150b50d8c;
  uVar47 = vextractps_avx(auVar118,1);
  lVar66 = CONCAT44((int)((ulonglong)lVar63 >> 0x20),uVar47);
  uVar26 = vextractps_avx(auVar118,2);
  uVar47 = vextractps_avx(auVar118,3);
  lVar67 = CONCAT44((int)((ulonglong)lVar59 >> 0x20),uVar47);
  auVar74 = vsubps_avx(auVar90,auVar75);
  auVar167._0_4_ =
       auVar73._0_4_ * auVar73._0_4_ + auVar89._0_4_ * auVar89._0_4_ + auVar74._0_4_ * auVar74._0_4_
  ;
  auVar167._4_4_ =
       auVar73._4_4_ * auVar73._4_4_ + auVar89._4_4_ * auVar89._4_4_ + auVar74._4_4_ * auVar74._4_4_
  ;
  auVar167._8_4_ =
       auVar73._8_4_ * auVar73._8_4_ + auVar89._8_4_ * auVar89._8_4_ + auVar74._8_4_ * auVar74._8_4_
  ;
  auVar167._12_4_ =
       auVar73._12_4_ * auVar73._12_4_ + auVar89._12_4_ * auVar89._12_4_ +
       auVar74._12_4_ * auVar74._12_4_;
  auVar167._16_4_ =
       auVar73._16_4_ * auVar73._16_4_ + auVar89._16_4_ * auVar89._16_4_ +
       auVar74._16_4_ * auVar74._16_4_;
  auVar167._20_4_ =
       auVar73._20_4_ * auVar73._20_4_ + auVar89._20_4_ * auVar89._20_4_ +
       auVar74._20_4_ * auVar74._20_4_;
  auVar167._24_4_ =
       auVar73._24_4_ * auVar73._24_4_ + auVar89._24_4_ * auVar89._24_4_ +
       auVar74._24_4_ * auVar74._24_4_;
  auVar167._28_4_ =
       auVar73._28_4_ * auVar73._28_4_ + auVar89._28_4_ * auVar89._28_4_ +
       auVar74._28_4_ * auVar74._28_4_;
  auVar72 = vsqrtps_avx(auVar167);
  auVar89 = vdivps_avx(auVar89,auVar72);
  auVar73 = vdivps_avx(auVar73,auVar72);
  auVar74 = vdivps_avx(auVar74,auVar72);
  auVar72 = vcmpps_avx(auVar167,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar89 = vblendvps_avx(auVar89,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar72);
  auVar173._0_4_ = ~auVar72._0_4_ & auVar73._0_4_;
  auVar173._4_4_ = ~auVar72._4_4_ & auVar73._4_4_;
  auVar173._8_4_ = ~auVar72._8_4_ & auVar73._8_4_;
  auVar173._12_4_ = ~auVar72._12_4_ & auVar73._12_4_;
  auVar173._16_4_ = ~auVar72._16_4_ & auVar73._16_4_;
  auVar173._20_4_ = ~auVar72._20_4_ & auVar73._20_4_;
  auVar173._24_4_ = ~auVar72._24_4_ & auVar73._24_4_;
  auVar173._28_4_ = ~auVar72._28_4_ & auVar73._28_4_;
  auVar155._0_4_ = ~auVar72._0_4_ & auVar74._0_4_;
  auVar155._4_4_ = ~auVar72._4_4_ & auVar74._4_4_;
  auVar155._8_4_ = ~auVar72._8_4_ & auVar74._8_4_;
  auVar155._12_4_ = ~auVar72._12_4_ & auVar74._12_4_;
  auVar155._16_4_ = ~auVar72._16_4_ & auVar74._16_4_;
  auVar155._20_4_ = ~auVar72._20_4_ & auVar74._20_4_;
  auVar155._24_4_ = ~auVar72._24_4_ & auVar74._24_4_;
  auVar155._28_4_ = ~auVar72._28_4_ & auVar74._28_4_;
  auVar89 = vmaskmovps_avx(auVar158,auVar89);
  auVar72 = vmaskmovps_avx(auVar158,auVar173);
  auVar73 = vmaskmovps_avx(auVar158,auVar155);
  auVar125 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar162 & _UNK_150b50d90) + lVar52)),
                           ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d94) + lVar48)),0x10);
  auVar17._4_4_ = auVar71._20_4_ * 3;
  auVar17._0_4_ = auVar71._16_4_ * 3;
  auVar17._8_4_ = auVar71._24_4_ * 3;
  auVar17._12_4_ = auVar71._28_4_ * 3;
  auVar85 = vpand_avx(auVar137,auVar17);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar162 & _UNK_150b50d90) + lVar60)),
                          ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d94) + lVar62)),0x10);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)((ulonglong)(uVar164 & _UNK_150b50d98) + lVar49
                                                     )),0x20);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar164 & _UNK_150b50d98) + lVar63))
                          ,0x20);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)((ulonglong)(uVar165 & _UNK_150b50d9c) + lVar50
                                                     )),0x30);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar165 & _UNK_150b50d9c) + lVar64))
                          ,0x30);
  auVar102 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar118._0_4_ + lVar32)),
                           ZEXT416(*(uint *)(lVar66 + lVar33)),0x10);
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar118._0_4_ + lVar53)),
                           ZEXT416(*(uint *)(lVar66 + lVar56)),0x10);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((ulonglong)uVar26 + lVar44)),0x20);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)((ulonglong)uVar26 + lVar59)),0x20);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(lVar67 + lVar51)),0x30);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(lVar67 + lVar65)),0x30);
  lVar32 = param_2 + (longlong)auVar85._0_4_ * 4;
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar85._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar85._4_4_ * 4)),0x10);
  lVar33 = param_2 + (longlong)auVar85._4_4_ * 4;
  auVar100 = vinsertps_avx(ZEXT416(*(uint *)(uVar34 + lVar32)),ZEXT416(*(uint *)(uVar35 + lVar33)),
                           0x10);
  auVar123 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar32)),ZEXT416(*(uint *)(uVar54 + lVar33)),
                           0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_2 + (longlong)auVar85._8_4_ * 4)),0x20);
  lVar32 = param_2 + (longlong)auVar85._8_4_ * 4;
  auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(uVar36 + lVar32)),0x20);
  auVar123 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(uVar45 + lVar32)),0x20);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_2 + (longlong)auVar85._12_4_ * 4)),0x30);
  lVar32 = param_2 + (longlong)auVar85._12_4_ * 4;
  auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(uVar37 + lVar32)),0x30);
  auVar123 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(uVar40 + lVar32)),0x30);
  auVar12._4_4_ = auVar71._4_4_ * 3;
  auVar12._0_4_ = auVar71._0_4_ * 3;
  auVar12._8_4_ = auVar71._8_4_ * 3;
  auVar12._12_4_ = auVar71._12_4_ * 3;
  auVar70 = vpand_avx(auVar138,auVar12);
  auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar70._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar70._4_4_ * 4)),0x10);
  auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + (longlong)auVar70._8_4_ * 4)),0x20);
  auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + (longlong)auVar70._12_4_ * 4)),0x30);
  auVar81._16_16_ = auVar69;
  auVar81._0_16_ = auVar85;
  lVar32 = param_2 + (longlong)auVar70._0_4_ * 4;
  lVar33 = param_2 + (longlong)auVar70._4_4_ * 4;
  lVar44 = param_2 + (longlong)auVar70._8_4_ * 4;
  lVar51 = param_2 + (longlong)auVar70._12_4_ * 4;
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar32)),ZEXT416(*(uint *)(uVar61 + lVar33)),
                          0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar38 + lVar44)),0x20);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar39 + lVar51)),0x30);
  auVar171._16_16_ = auVar100;
  auVar171._0_16_ = auVar69;
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar32)),ZEXT416(*(uint *)(uVar55 + lVar33)),
                          0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar46 + lVar44)),0x20);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar41 + lVar51)),0x30);
  auVar156._16_16_ = auVar123;
  auVar156._0_16_ = auVar69;
  auVar13._4_4_ = auVar87._20_4_ * 3;
  auVar13._0_4_ = auVar87._16_4_ * 3;
  auVar13._8_4_ = auVar87._24_4_ * 3;
  auVar13._12_4_ = auVar87._28_4_ * 3;
  auVar14._4_4_ = auVar87._4_4_ * 3;
  auVar14._0_4_ = auVar87._0_4_ * 3;
  auVar14._8_4_ = auVar87._8_4_ * 3;
  auVar14._12_4_ = auVar87._12_4_ * 3;
  auVar70 = vpand_avx(auVar137,auVar13);
  lVar32 = param_2 + (longlong)auVar70._0_4_ * 4;
  lVar33 = param_2 + (longlong)auVar70._4_4_ * 4;
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(uVar34 + lVar32)),ZEXT416(*(uint *)(uVar35 + lVar33)),
                          0x10);
  auVar12 = vpand_avx(auVar138,auVar14);
  auVar100 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar32)),ZEXT416(*(uint *)(uVar54 + lVar33)),
                           0x10);
  lVar32 = param_2 + (longlong)auVar70._8_4_ * 4;
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar36 + lVar32)),0x20);
  auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(uVar45 + lVar32)),0x20);
  auVar123 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar70._0_4_ * 4)),
                           ZEXT416(*(uint *)(param_2 + (longlong)auVar70._4_4_ * 4)),0x10);
  auVar123 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(param_2 + (longlong)auVar70._8_4_ * 4)),0x20);
  auVar123 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(param_2 + (longlong)auVar70._12_4_ * 4)),0x30)
  ;
  auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar12._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar12._4_4_ * 4)),0x10);
  auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + (longlong)auVar12._8_4_ * 4)),0x20);
  auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + (longlong)auVar12._12_4_ * 4)),0x30);
  lVar32 = param_2 + (longlong)auVar70._12_4_ * 4;
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar37 + lVar32)),0x30);
  auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(uVar40 + lVar32)),0x30);
  lVar32 = param_2 + (longlong)auVar12._0_4_ * 4;
  lVar33 = param_2 + (longlong)auVar12._4_4_ * 4;
  auVar70 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar32)),ZEXT416(*(uint *)(uVar61 + lVar33)),
                          0x10);
  auVar137 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar32)),ZEXT416(*(uint *)(uVar55 + lVar33)),
                           0x10);
  lVar32 = param_2 + (longlong)auVar12._8_4_ * 4;
  param_2 = param_2 + (longlong)auVar12._12_4_ * 4;
  auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar38 + lVar32)),0x20);
  auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar39 + param_2)),0x30);
  auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(uVar46 + lVar32)),0x20);
  lVar32 = (longlong)(int)((uint)uVar31 << 2);
  auVar87 = vmaskmovps_avx(auVar158,*(undefined1 (*) [32])(param_4 + lVar32));
  auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(uVar41 + param_2)),0x30);
  auVar71 = vcmpps_avx(auVar87,
                       ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,1);
  auVar127._4_4_ = __real_3f800000;
  auVar127._0_4_ = __real_3f800000;
  auVar127._8_4_ = __real_3f800000;
  auVar127._12_4_ = __real_3f800000;
  auVar127._16_4_ = __real_3f800000;
  auVar127._20_4_ = __real_3f800000;
  auVar127._24_4_ = __real_3f800000;
  auVar127._28_4_ = __real_3f800000;
  auVar87 = vdivps_avx(auVar127,auVar87);
  auVar71 = vblendvps_avx(auVar87,auVar127,auVar71);
  auVar12 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
  auVar174._16_16_ = auVar12;
  auVar174._0_16_ = auVar12;
  fVar83 = auVar118._0_4_;
  fVar124 = auVar102._0_4_;
  auVar175._0_4_ = fVar124 + fVar83;
  fVar98 = auVar118._4_4_;
  fVar130 = auVar102._4_4_;
  auVar175._4_4_ = fVar130 + fVar98;
  fVar10 = auVar118._8_4_;
  fVar131 = auVar102._8_4_;
  auVar175._8_4_ = fVar131 + fVar10;
  fVar11 = auVar118._12_4_;
  fVar132 = auVar102._12_4_;
  auVar175._12_4_ = fVar132 + fVar11;
  fVar101 = auVar17._0_4_;
  fVar133 = auVar125._0_4_;
  auVar175._16_4_ = fVar133 + fVar101;
  fVar112 = auVar17._4_4_;
  fVar134 = auVar125._4_4_;
  auVar175._20_4_ = fVar134 + fVar112;
  fVar114 = auVar17._8_4_;
  fVar135 = auVar125._8_4_;
  auVar175._24_4_ = fVar135 + fVar114;
  fVar116 = auVar17._12_4_;
  fVar136 = auVar125._12_4_;
  auVar175._28_4_ = fVar136 + fVar116;
  auVar87 = vdivps_avx(auVar174,auVar175);
  auVar13 = vpermilps_avx(ZEXT416((uint)param_8),0);
  auVar87 = vsqrtps_avx(auVar87);
  auVar12 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar97 = auVar12._0_4_ * auVar13._0_4_ * auVar87._0_4_ * auVar71._0_4_;
  fVar99 = auVar12._4_4_ * auVar13._4_4_ * auVar87._4_4_ * auVar71._4_4_;
  fVar168 = auVar12._8_4_ * auVar13._8_4_ * auVar87._8_4_ * auVar71._8_4_;
  fVar169 = auVar12._12_4_ * auVar13._12_4_ * auVar87._12_4_ * auVar71._12_4_;
  fVar111 = auVar12._0_4_ * auVar13._0_4_ * auVar87._16_4_ * auVar71._16_4_;
  fVar113 = auVar12._4_4_ * auVar13._4_4_ * auVar87._20_4_ * auVar71._20_4_;
  fVar115 = auVar12._8_4_ * auVar13._8_4_ * auVar87._24_4_ * auVar71._24_4_;
  fVar117 = auVar12._12_4_ * auVar13._12_4_ * auVar87._28_4_ * auVar71._28_4_;
  auVar71 = vsubps_avx(auVar78,auVar81);
  auVar71 = vsubps_avx(auVar71,auVar88);
  auVar87 = vsubps_avx(auVar77,auVar171);
  auVar87 = vsubps_avx(auVar87,auVar91);
  auVar74 = vsubps_avx(auVar90,auVar156);
  auVar74 = vsubps_avx(auVar74,auVar75);
  local_2c0 = auVar89._0_4_;
  fStack_2bc = auVar89._4_4_;
  fStack_2b8 = auVar89._8_4_;
  fStack_2b4 = auVar89._12_4_;
  fStack_2b0 = auVar89._16_4_;
  fStack_2ac = auVar89._20_4_;
  fStack_2a8 = auVar89._24_4_;
  fStack_2a4 = auVar89._28_4_;
  local_2a0 = auVar72._0_4_;
  fStack_29c = auVar72._4_4_;
  fStack_298 = auVar72._8_4_;
  fStack_294 = auVar72._12_4_;
  fStack_290 = auVar72._16_4_;
  fStack_28c = auVar72._20_4_;
  fStack_288 = auVar72._24_4_;
  fStack_284 = auVar72._28_4_;
  local_280 = auVar73._0_4_;
  fStack_27c = auVar73._4_4_;
  fStack_278 = auVar73._8_4_;
  fStack_274 = auVar73._12_4_;
  fStack_270 = auVar73._16_4_;
  fStack_26c = auVar73._20_4_;
  fStack_268 = auVar73._24_4_;
  fStack_264 = auVar73._28_4_;
  auVar94._0_4_ =
       (float)((uint)fVar97 ^
              ___ymm_8000000080000000800000008000000080000000800000008000000080000000) *
       ((auVar85._0_4_ + auVar71._0_4_) * local_2c0 + (auVar70._0_4_ + auVar87._0_4_) * local_2a0 +
       (auVar137._0_4_ + auVar74._0_4_) * local_280);
  auVar94._4_4_ =
       (float)((uint)fVar99 ^ _UNK_150b50f64) *
       ((auVar85._4_4_ + auVar71._4_4_) * fStack_2bc + (auVar70._4_4_ + auVar87._4_4_) * fStack_29c
       + (auVar137._4_4_ + auVar74._4_4_) * fStack_27c);
  auVar94._8_4_ =
       (float)((uint)fVar168 ^ _UNK_150b50f68) *
       ((auVar85._8_4_ + auVar71._8_4_) * fStack_2b8 + (auVar70._8_4_ + auVar87._8_4_) * fStack_298
       + (auVar137._8_4_ + auVar74._8_4_) * fStack_278);
  auVar94._12_4_ =
       (float)((uint)fVar169 ^ _UNK_150b50f6c) *
       ((auVar85._12_4_ + auVar71._12_4_) * fStack_2b4 +
        (auVar70._12_4_ + auVar87._12_4_) * fStack_294 +
       (auVar137._12_4_ + auVar74._12_4_) * fStack_274);
  auVar94._16_4_ =
       (float)((uint)fVar111 ^ _UNK_150b50f70) *
       ((auVar123._0_4_ + auVar71._16_4_) * fStack_2b0 +
        (auVar69._0_4_ + auVar87._16_4_) * fStack_290 +
       (auVar100._0_4_ + auVar74._16_4_) * fStack_270);
  auVar94._20_4_ =
       (float)((uint)fVar113 ^ _UNK_150b50f74) *
       ((auVar123._4_4_ + auVar71._20_4_) * fStack_2ac +
        (auVar69._4_4_ + auVar87._20_4_) * fStack_28c +
       (auVar100._4_4_ + auVar74._20_4_) * fStack_26c);
  auVar94._24_4_ =
       (float)((uint)fVar115 ^ _UNK_150b50f78) *
       ((auVar123._8_4_ + auVar71._24_4_) * fStack_2a8 +
        (auVar69._8_4_ + auVar87._24_4_) * fStack_288 +
       (auVar100._8_4_ + auVar74._24_4_) * fStack_268);
  auVar94._28_4_ =
       (float)((uint)fVar117 ^ _UNK_150b50f7c) *
       ((auVar123._12_4_ + auVar71._28_4_) * fStack_2a4 +
        (auVar69._12_4_ + auVar87._28_4_) * fStack_284 +
       (auVar100._12_4_ + auVar74._28_4_) * fStack_264);
  auVar145._0_4_ = auVar175._0_4_ * fVar97 + __real_3f800000;
  auVar145._4_4_ = auVar175._4_4_ * fVar99 + __real_3f800000;
  auVar145._8_4_ = auVar175._8_4_ * fVar168 + __real_3f800000;
  auVar145._12_4_ = auVar175._12_4_ * fVar169 + __real_3f800000;
  auVar145._16_4_ = auVar175._16_4_ * fVar111 + __real_3f800000;
  auVar145._20_4_ = auVar175._20_4_ * fVar113 + __real_3f800000;
  auVar145._24_4_ = auVar175._24_4_ * fVar115 + __real_3f800000;
  auVar145._28_4_ = auVar175._28_4_ * fVar117 + __real_3f800000;
  auVar87 = vmaskmovps_avx(auVar158,*(undefined1 (*) [32])(param_5 + lVar32));
  auVar71 = vsubps_avx(auVar94,auVar87);
  auVar71 = vdivps_avx(auVar71,auVar145);
  fVar97 = auVar71._0_4_;
  auVar95._0_4_ = auVar87._0_4_ + fVar97;
  fVar99 = auVar71._4_4_;
  auVar95._4_4_ = auVar87._4_4_ + fVar99;
  fVar168 = auVar71._8_4_;
  auVar95._8_4_ = auVar87._8_4_ + fVar168;
  fVar169 = auVar71._12_4_;
  auVar95._12_4_ = auVar87._12_4_ + fVar169;
  fVar111 = auVar71._16_4_;
  auVar95._16_4_ = auVar87._16_4_ + fVar111;
  fVar113 = auVar71._20_4_;
  auVar95._20_4_ = auVar87._20_4_ + fVar113;
  fVar115 = auVar71._24_4_;
  auVar95._24_4_ = auVar87._24_4_ + fVar115;
  fVar117 = auVar71._28_4_;
  auVar95._28_4_ = auVar87._28_4_ + fVar117;
  auVar71 = vmaskmovps_avx(auVar158,auVar95);
  *(undefined1 (*) [32])(param_5 + lVar32) = auVar71;
  auVar138._0_4_ = auVar78._0_4_ + fVar124 * local_2c0 * fVar97;
  auVar138._4_4_ = auVar78._4_4_ + fVar130 * fStack_2bc * fVar99;
  auVar138._8_4_ = auVar78._8_4_ + fVar131 * fStack_2b8 * fVar168;
  auVar138._12_4_ = auVar78._12_4_ + fVar132 * fStack_2b4 * fVar169;
  auVar141._16_4_ = auVar78._16_4_ + fVar133 * fStack_2b0 * fVar111;
  auVar141._0_16_ = auVar138;
  auVar141._20_4_ = auVar78._20_4_ + fVar134 * fStack_2ac * fVar113;
  auVar141._24_4_ = auVar78._24_4_ + fVar135 * fStack_2a8 * fVar115;
  auVar141._28_4_ = auVar78._28_4_ + fVar136 * fStack_2a4 * fVar117;
  cVar42 = (char)uVar43;
  auVar69 = auVar141._16_16_;
  iVar166 = auVar86._0_4_;
  iVar30 = auVar86._4_4_;
  iVar27 = auVar86._8_4_;
  iVar28 = auVar86._12_4_;
  iVar84 = auVar104._0_4_;
  if ((uVar43 & 1) != 0) {
    *(float *)(param_1 + iVar166) = auVar138._0_4_;
  }
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar138,1);
    *(undefined4 *)(param_1 + iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar138,2);
    *(undefined4 *)(param_1 + iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar138,3);
    *(undefined4 *)(param_1 + iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(float *)(param_1 + iVar84) = auVar141._16_4_;
  }
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar104,1);
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar104,2);
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
  }
  uVar25 = fVar136 * fStack_284 * fVar117;
  uVar24 = fVar135 * fStack_288 * fVar115;
  uVar23 = fVar134 * fStack_28c * fVar113;
  uVar22 = fVar133 * fStack_290 * fVar111;
  uVar21 = fVar132 * fStack_294 * fVar169;
  uVar20 = fVar131 * fStack_298 * fVar168;
  uVar19 = fVar130 * fStack_29c * fVar99;
  uVar47 = fVar124 * local_2a0 * fVar97;
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar104,3);
    uVar9 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + iVar29) = uVar9;
    auVar128._0_4_ = auVar77._0_4_ + (float)uVar47;
    auVar128._4_4_ = auVar77._4_4_ + (float)uVar19;
    auVar128._8_4_ = auVar77._8_4_ + (float)uVar20;
    auVar128._12_4_ = auVar77._12_4_ + (float)uVar21;
    auVar128._16_4_ = auVar77._16_4_ + (float)uVar22;
    auVar128._20_4_ = auVar77._20_4_ + (float)uVar23;
    auVar128._24_4_ = auVar77._24_4_ + (float)uVar24;
    auVar128._28_4_ = auVar77._28_4_ + (float)uVar25;
  }
  else {
    auVar128._0_4_ = auVar77._0_4_ + (float)uVar47;
    auVar128._4_4_ = auVar77._4_4_ + (float)uVar19;
    auVar128._8_4_ = auVar77._8_4_ + (float)uVar20;
    auVar128._12_4_ = auVar77._12_4_ + (float)uVar21;
    auVar128._16_4_ = auVar77._16_4_ + (float)uVar22;
    auVar128._20_4_ = auVar77._20_4_ + (float)uVar23;
    auVar128._24_4_ = auVar77._24_4_ + (float)uVar24;
    auVar128._28_4_ = auVar77._28_4_ + (float)uVar25;
  }
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar166) = auVar128._0_4_;
  }
  auVar69 = auVar128._0_16_;
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar84) = auVar128._16_4_;
  }
  auVar69 = auVar128._16_16_;
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar104,1);
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar104,2);
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
  }
  uVar25 = fVar136 * fStack_264 * fVar117;
  uVar24 = fVar135 * fStack_268 * fVar115;
  uVar23 = fVar134 * fStack_26c * fVar113;
  uVar22 = fVar133 * fStack_270 * fVar111;
  uVar21 = fVar132 * fStack_274 * fVar169;
  uVar20 = fVar131 * fStack_278 * fVar168;
  uVar19 = fVar130 * fStack_27c * fVar99;
  uVar47 = fVar124 * local_280 * fVar97;
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar104,3);
    uVar9 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar9;
    auVar96._0_4_ = auVar90._0_4_ + (float)uVar47;
    auVar96._4_4_ = auVar90._4_4_ + (float)uVar19;
    auVar96._8_4_ = auVar90._8_4_ + (float)uVar20;
    auVar96._12_4_ = auVar90._12_4_ + (float)uVar21;
    auVar96._16_4_ = auVar90._16_4_ + (float)uVar22;
    auVar96._20_4_ = auVar90._20_4_ + (float)uVar23;
    auVar96._24_4_ = auVar90._24_4_ + (float)uVar24;
    auVar96._28_4_ = auVar90._28_4_ + (float)uVar25;
  }
  else {
    auVar96._0_4_ = auVar90._0_4_ + (float)uVar47;
    auVar96._4_4_ = auVar90._4_4_ + (float)uVar19;
    auVar96._8_4_ = auVar90._8_4_ + (float)uVar20;
    auVar96._12_4_ = auVar90._12_4_ + (float)uVar21;
    auVar96._16_4_ = auVar90._16_4_ + (float)uVar22;
    auVar96._20_4_ = auVar90._20_4_ + (float)uVar23;
    auVar96._24_4_ = auVar90._24_4_ + (float)uVar24;
    auVar96._28_4_ = auVar90._28_4_ + (float)uVar25;
  }
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar166) = auVar96._0_4_;
  }
  auVar69 = auVar96._0_16_;
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar84) = auVar96._16_4_;
  }
  auVar69 = auVar96._16_16_;
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar104,1);
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar104,2);
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar104,3);
    uVar47 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar124;
  }
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar102,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar102,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar102,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar84) = fVar133;
  }
  if ((uVar43 & 0x20) != 0) {
    iVar30 = vextractps_avx(auVar104,1);
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar30 = vextractps_avx(auVar104,2);
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if (cVar42 < '\0') {
    iVar30 = vextractps_avx(auVar104,3);
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  auVar129._0_4_ = fVar83 * local_2c0 * fVar97;
  auVar129._4_4_ = fVar98 * fStack_2bc * fVar99;
  auVar129._8_4_ = fVar10 * fStack_2b8 * fVar168;
  auVar129._12_4_ = fVar11 * fStack_2b4 * fVar169;
  auVar129._16_4_ = fVar101 * fStack_2b0 * fVar111;
  auVar129._20_4_ = fVar112 * fStack_2ac * fVar113;
  auVar129._24_4_ = fVar114 * fStack_2a8 * fVar115;
  auVar129._28_4_ = fVar116 * fStack_2a4 * fVar117;
  auVar71 = vsubps_avx(auVar88,auVar129);
  iVar84 = auVar68._0_4_;
  auVar125 = auVar71._0_16_;
  auVar102 = auVar71._16_16_;
  iVar30 = auVar68._4_4_;
  iVar27 = auVar68._8_4_;
  iVar28 = auVar68._12_4_;
  iVar166 = auVar103._0_4_;
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + iVar84) = auVar71._0_4_;
  }
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + iVar166) = auVar71._16_4_;
  }
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar103,1);
    uVar47 = vextractps_avx(auVar102,1);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) == 0) {
    auVar82._0_4_ = fVar83 * local_2a0 * fVar97;
    auVar82._4_4_ = fVar98 * fStack_29c * fVar99;
    auVar82._8_4_ = fVar10 * fStack_298 * fVar168;
    auVar82._12_4_ = fVar11 * fStack_294 * fVar169;
    auVar82._16_4_ = fVar101 * fStack_290 * fVar111;
    auVar82._20_4_ = fVar112 * fStack_28c * fVar113;
    auVar82._24_4_ = fVar114 * fStack_288 * fVar115;
    auVar82._28_4_ = fVar116 * fStack_284 * fVar117;
  }
  else {
    iVar29 = vextractps_avx(auVar103,2);
    uVar47 = vextractps_avx(auVar102,2);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
    auVar82._0_4_ = fVar83 * local_2a0 * fVar97;
    auVar82._4_4_ = fVar98 * fStack_29c * fVar99;
    auVar82._8_4_ = fVar10 * fStack_298 * fVar168;
    auVar82._12_4_ = fVar11 * fStack_294 * fVar169;
    auVar82._16_4_ = fVar101 * fStack_290 * fVar111;
    auVar82._20_4_ = fVar112 * fStack_28c * fVar113;
    auVar82._24_4_ = fVar114 * fStack_288 * fVar115;
    auVar82._28_4_ = fVar116 * fStack_284 * fVar117;
  }
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar103,3);
    uVar47 = vextractps_avx(auVar102,3);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
    auVar71 = vsubps_avx(auVar91,auVar82);
  }
  else {
    auVar71 = vsubps_avx(auVar91,auVar82);
  }
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar84) = auVar71._0_4_;
  }
  auVar125 = auVar71._0_16_;
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar166) = auVar71._16_4_;
  }
  auVar125 = auVar71._16_16_;
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar103,1);
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) == 0) {
    auVar110._0_4_ = fVar83 * local_280 * fVar97;
    auVar110._4_4_ = fVar98 * fStack_27c * fVar99;
    auVar110._8_4_ = fVar10 * fStack_278 * fVar168;
    auVar110._12_4_ = fVar11 * fStack_274 * fVar169;
    auVar110._16_4_ = fVar101 * fStack_270 * fVar111;
    auVar110._20_4_ = fVar112 * fStack_26c * fVar113;
    auVar110._24_4_ = fVar114 * fStack_268 * fVar115;
    auVar110._28_4_ = fVar116 * fStack_264 * fVar117;
  }
  else {
    iVar29 = vextractps_avx(auVar103,2);
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
    auVar110._0_4_ = fVar83 * local_280 * fVar97;
    auVar110._4_4_ = fVar98 * fStack_27c * fVar99;
    auVar110._8_4_ = fVar10 * fStack_278 * fVar168;
    auVar110._12_4_ = fVar11 * fStack_274 * fVar169;
    auVar110._16_4_ = fVar101 * fStack_270 * fVar111;
    auVar110._20_4_ = fVar112 * fStack_26c * fVar113;
    auVar110._24_4_ = fVar114 * fStack_268 * fVar115;
    auVar110._28_4_ = fVar116 * fStack_264 * fVar117;
  }
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar103,3);
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
    auVar71 = vsubps_avx(auVar75,auVar110);
  }
  else {
    auVar71 = vsubps_avx(auVar75,auVar110);
  }
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar84) = auVar71._0_4_;
  }
  auVar125 = auVar71._0_16_;
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar166) = auVar71._16_4_;
  }
  auVar125 = auVar71._16_16_;
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar103,1);
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar103,2);
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar103,3);
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar84) = fVar83;
  }
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar118,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar118,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar118,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar101;
  }
  if ((uVar43 & 0x20) != 0) {
    iVar30 = vextractps_avx(auVar103,1);
    uVar47 = vextractps_avx(auVar17,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar30 = vextractps_avx(auVar103,2);
    uVar47 = vextractps_avx(auVar17,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if (cVar42 < '\0') {
    iVar30 = vextractps_avx(auVar103,3);
    uVar47 = vextractps_avx(auVar17,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx @ 1409261a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               longlong param_6,longlong param_7,uint param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar20;
  uint uVar21;
  int iVar22;
  int iVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  undefined4 uVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint uVar37;
  longlong lVar38;
  byte *pbVar39;
  ulonglong uVar40;
  uint uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  uint uVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  undefined1 auVar54 [16];
  undefined1 auVar56 [32];
  undefined1 auVar51 [16];
  undefined1 auVar57 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar61 [32];
  undefined1 auVar55 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  float fVar65;
  uint uVar66;
  float fVar67;
  float fVar77;
  float fVar80;
  float fVar86;
  float fVar88;
  float fVar89;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  float fVar83;
  float fVar91;
  undefined1 auVar72 [32];
  undefined1 auVar87 [16];
  int iVar68;
  undefined1 auVar69 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  uint uVar78;
  uint uVar81;
  uint uVar84;
  undefined1 auVar75 [32];
  float fVar79;
  float fVar82;
  float fVar85;
  float fVar90;
  float fVar92;
  undefined1 auVar76 [32];
  float fVar93;
  float fVar94;
  float fVar105;
  float fVar107;
  float fVar109;
  undefined1 auVar96 [16];
  float fVar104;
  float fVar106;
  undefined1 auVar95 [16];
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar97 [32];
  float fVar108;
  undefined1 auVar98 [32];
  float fVar113;
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  float fVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar119 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  float fVar134;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  undefined1 auVar135 [32];
  float fVar142;
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  uint uVar149;
  uint uVar157;
  undefined1 auVar151 [16];
  uint uVar155;
  uint uVar156;
  undefined1 auVar150 [16];
  uint uVar158;
  uint uVar159;
  uint uVar160;
  undefined1 auVar152 [32];
  uint uVar161;
  undefined1 auVar154 [32];
  undefined1 auVar162 [16];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  int iVar168;
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
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
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
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
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
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
  int iVar23;
  undefined1 auVar60 [32];
  undefined1 auVar120 [32];
  undefined1 auVar153 [32];
  undefined1 auVar175 [32];
  
  uVar21 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar21 = param_8;
  }
  if ((int)(uVar21 & 0xfffffff8) < 1) {
    uVar40 = 0;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    auVar174 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    uVar31 = 0;
    uVar40 = 0;
    do {
      auVar56._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar31 * 2);
      auVar56._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar31 * 2);
      auVar70._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar31 * 2);
      auVar70._0_16_ = *(undefined1 (*) [16])(param_2 + uVar31 * 2);
      auVar60 = vshufps_avx(auVar70,auVar56,0x88);
      auVar56 = vshufps_avx(auVar70,auVar56,0xdd);
      auVar95 = vpslld_avx(auVar60._0_16_,4);
      auVar69 = vpslld_avx(auVar60._16_16_,4);
      lVar32 = (longlong)auVar95._0_4_;
      lVar28 = (longlong)auVar95._4_4_;
      lVar49 = (longlong)auVar95._8_4_;
      lVar44 = (longlong)auVar95._12_4_;
      lVar42 = (longlong)auVar69._0_4_;
      lVar46 = (longlong)auVar69._4_4_;
      lVar48 = (longlong)auVar69._8_4_;
      lVar38 = (longlong)auVar69._12_4_;
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar32)),
                              ZEXT416(*(uint *)(param_1 + lVar28)),0x10);
      auVar95 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar32)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x10);
      auVar150 = vpslld_avx(auVar56._16_16_,4);
      auVar54 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar32)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x10);
      auVar51 = vpslld_avx(auVar56._0_16_,4);
      auVar87 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar42)),
                              ZEXT416(*(uint *)(param_1 + lVar46)),0x10);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + lVar49)),0x20);
      lVar43 = (longlong)auVar51._0_4_;
      lVar33 = (longlong)auVar51._4_4_;
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar42)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar46)),0x10);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 4 + lVar49)),0x20);
      auVar115 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar42)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar46)),0x10);
      lVar29 = (longlong)auVar51._8_4_;
      lVar47 = (longlong)auVar51._12_4_;
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 8 + lVar49)),0x20);
      lVar50 = (longlong)auVar150._0_4_;
      auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + lVar48)),0x20);
      lVar30 = (longlong)auVar150._4_4_;
      lVar35 = (longlong)auVar150._8_4_;
      lVar26 = (longlong)auVar150._12_4_;
      auVar51 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + lVar44)),0x30);
      auVar69 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + 4 + lVar48)),0x20);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + lVar30)),0x10);
      auVar150 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 4 + lVar44)),0x30);
      auVar95 = vinsertps_avx(auVar115,ZEXT416(*(uint *)(param_1 + 8 + lVar48)),0x20);
      auVar115 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar43)),
                               ZEXT416(*(uint *)(param_1 + lVar33)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + lVar35)),0x20);
      auVar115 = vinsertps_avx(auVar115,ZEXT416(*(uint *)(param_1 + lVar29)),0x20);
      auVar115 = vinsertps_avx(auVar115,ZEXT416(*(uint *)(param_1 + lVar47)),0x30);
      auVar96 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar50)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x10);
      auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + lVar38)),0x30);
      auVar96 = vinsertps_avx(auVar96,ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x20);
      auVar116 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x30);
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar43)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar33)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + lVar26)),0x30);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 4 + lVar29)),0x20);
      auVar96 = vinsertps_avx(auVar96,ZEXT416(*(uint *)(param_1 + 4 + lVar26)),0x30);
      auVar16 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 4 + lVar47)),0x30);
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 8 + lVar44)),0x30);
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar50)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x10);
      auVar177 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x30);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x20);
      auVar17 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar26)),0x30);
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar43)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar33)),0x10);
      auVar178._16_16_ = auVar87;
      auVar178._0_16_ = auVar51;
      uVar27 = *(uint *)(param_1 + 0xc + lVar32);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar29)),0x20);
      auVar166._16_16_ = auVar116;
      auVar166._0_16_ = auVar150;
      uVar37 = *(uint *)(param_1 + 0xc + lVar42);
      auVar18 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar47)),0x30);
      auVar146._16_16_ = auVar118;
      auVar146._0_16_ = auVar115;
      auVar135._16_16_ = auVar96;
      auVar135._0_16_ = auVar16;
      auVar69 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_6 + uVar40)));
      auVar71._16_16_ = auVar177;
      auVar71._0_16_ = auVar54;
      auVar57._16_16_ = auVar17;
      auVar57._0_16_ = auVar18;
      auVar60 = vsubps_avx(auVar178,auVar146);
      auVar70 = vsubps_avx(auVar166,auVar135);
      uVar41 = *(uint *)(param_1 + 0xc + lVar46);
      auVar57 = vsubps_avx(auVar71,auVar57);
      uVar45 = *(uint *)(param_1 + 0xc + lVar48);
      auVar152._0_4_ =
           auVar60._0_4_ * auVar60._0_4_ + auVar70._0_4_ * auVar70._0_4_ +
           auVar57._0_4_ * auVar57._0_4_;
      auVar152._4_4_ =
           auVar60._4_4_ * auVar60._4_4_ + auVar70._4_4_ * auVar70._4_4_ +
           auVar57._4_4_ * auVar57._4_4_;
      auVar152._8_4_ =
           auVar60._8_4_ * auVar60._8_4_ + auVar70._8_4_ * auVar70._8_4_ +
           auVar57._8_4_ * auVar57._8_4_;
      auVar152._12_4_ =
           auVar60._12_4_ * auVar60._12_4_ + auVar70._12_4_ * auVar70._12_4_ +
           auVar57._12_4_ * auVar57._12_4_;
      auVar152._16_4_ =
           auVar60._16_4_ * auVar60._16_4_ + auVar70._16_4_ * auVar70._16_4_ +
           auVar57._16_4_ * auVar57._16_4_;
      auVar152._20_4_ =
           auVar60._20_4_ * auVar60._20_4_ + auVar70._20_4_ * auVar70._20_4_ +
           auVar57._20_4_ * auVar57._20_4_;
      auVar152._24_4_ =
           auVar60._24_4_ * auVar60._24_4_ + auVar70._24_4_ * auVar70._24_4_ +
           auVar57._24_4_ * auVar57._24_4_;
      auVar152._28_4_ =
           auVar60._28_4_ * auVar60._28_4_ + auVar70._28_4_ * auVar70._28_4_ +
           auVar57._28_4_ * auVar57._28_4_;
      uVar66 = *(uint *)(param_1 + 0xc + lVar38);
      auVar52 = vpslld_avx(auVar69,2);
      auVar69 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_6 + 4 + uVar40)));
      auVar53 = vpslld_avx(auVar69,2);
      auVar69 = vinsertps_avx(ZEXT416(uVar37),ZEXT416(uVar41),0x10);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(uVar45),0x20);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(uVar66),0x30);
      uVar78 = *(uint *)(param_1 + 0xc + lVar28);
      uVar81 = *(uint *)(param_1 + 0xc + lVar49);
      auVar95 = vinsertps_avx(ZEXT416(uVar27),ZEXT416(uVar78),0x10);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(uVar81),0x20);
      uVar84 = *(uint *)(param_1 + 0xc + lVar44);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(uVar84),0x30);
      auVar151 = vinsertps_avx(ZEXT416(*(uint *)(param_7 + (ulonglong)auVar53._0_4_)),
                               ZEXT416(*(uint *)(param_7 + (ulonglong)auVar53._4_4_)),0x10);
      auVar19 = vinsertps_avx(ZEXT416(*(uint *)(param_7 + (ulonglong)auVar52._0_4_)),
                              ZEXT416(*(uint *)(param_7 + (ulonglong)auVar52._4_4_)),0x10);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_7 + (ulonglong)auVar53._8_4_)),0x20)
      ;
      auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_7 + (ulonglong)auVar52._8_4_)),0x20);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_7 + (ulonglong)auVar53._12_4_)),0x30
                              );
      auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_7 + (ulonglong)auVar52._12_4_)),0x30);
      uVar2 = *(uint *)(param_1 + 0xc + lVar43);
      uVar3 = *(uint *)(param_1 + 0xc + lVar33);
      uVar4 = *(uint *)(param_1 + 0xc + lVar29);
      auVar52 = vinsertps_avx(ZEXT416(uVar2),ZEXT416(uVar3),0x10);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(uVar4),0x20);
      uVar5 = *(uint *)(param_1 + 0xc + lVar50);
      uVar6 = *(uint *)(param_1 + 0xc + lVar30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar35);
      auVar53 = vinsertps_avx(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      auVar53 = vinsertps_avx(auVar53,ZEXT416(uVar7),0x20);
      uVar36 = uVar31 & 0xffffffff;
      uVar8 = *(uint *)(param_1 + 0xc + lVar26);
      auVar53 = vinsertps_avx(auVar53,ZEXT416(uVar8),0x30);
      auVar97._16_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + uVar36);
      auVar97._0_16_ = *(undefined1 (*) [16])(param_3 + uVar36);
      uVar9 = *(uint *)(param_1 + 0xc + lVar47);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(uVar9),0x30);
      auVar71 = vsqrtps_avx(auVar152);
      auVar56 = vdivps_avx(auVar60,auVar71);
      auVar70 = vdivps_avx(auVar70,auVar71);
      auVar60 = vcmpps_avx(auVar152,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar57 = vdivps_avx(auVar57,auVar71);
      uVar149 = auVar60._0_4_;
      auVar58._0_4_ = ~uVar149 & auVar71._0_4_;
      uVar155 = auVar60._4_4_;
      auVar58._4_4_ = ~uVar155 & auVar71._4_4_;
      uVar156 = auVar60._8_4_;
      auVar58._8_4_ = ~uVar156 & auVar71._8_4_;
      uVar157 = auVar60._12_4_;
      auVar58._12_4_ = ~uVar157 & auVar71._12_4_;
      uVar158 = auVar60._16_4_;
      auVar58._16_4_ = ~uVar158 & auVar71._16_4_;
      uVar159 = auVar60._20_4_;
      auVar58._20_4_ = ~uVar159 & auVar71._20_4_;
      uVar160 = auVar60._24_4_;
      auVar58._24_4_ = ~uVar160 & auVar71._24_4_;
      uVar161 = auVar60._28_4_;
      auVar58._28_4_ = ~uVar161 & auVar71._28_4_;
      auVar71 = vsubps_avx(auVar58,auVar97);
      local_260 = auVar174._0_4_;
      fStack_25c = auVar174._4_4_;
      fStack_258 = auVar174._8_4_;
      fStack_254 = auVar174._12_4_;
      fVar93 = local_260 * local_260 * auVar19._0_4_;
      fVar104 = fStack_25c * fStack_25c * auVar19._4_4_;
      fVar106 = fStack_258 * fStack_258 * auVar19._8_4_;
      fVar108 = fStack_254 * fStack_254 * auVar19._12_4_;
      local_260 = local_260 * local_260 * auVar151._0_4_;
      fStack_25c = fStack_25c * fStack_25c * auVar151._4_4_;
      fStack_258 = fStack_258 * fStack_258 * auVar151._8_4_;
      fStack_254 = fStack_254 * fStack_254 * auVar151._12_4_;
      fVar10 = auVar52._0_4_;
      fVar114 = auVar95._0_4_;
      fVar67 = auVar52._4_4_;
      fVar127 = auVar95._4_4_;
      fVar11 = auVar52._8_4_;
      fVar128 = auVar95._8_4_;
      fVar79 = auVar52._12_4_;
      fVar129 = auVar95._12_4_;
      fVar12 = auVar53._0_4_;
      fVar130 = auVar69._0_4_;
      fVar82 = auVar53._4_4_;
      fVar131 = auVar69._4_4_;
      fVar13 = auVar53._8_4_;
      fVar132 = auVar69._8_4_;
      fVar85 = auVar53._12_4_;
      fVar133 = auVar69._12_4_;
      auVar59._0_4_ =
           auVar71._0_4_ *
           (float)((uint)fVar93 ^
                  ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
      auVar59._4_4_ = auVar71._4_4_ * (float)((uint)fVar104 ^ _UNK_150b50f64);
      auVar59._8_4_ = auVar71._8_4_ * (float)((uint)fVar106 ^ _UNK_150b50f68);
      auVar59._12_4_ = auVar71._12_4_ * (float)((uint)fVar108 ^ _UNK_150b50f6c);
      auVar59._16_4_ = auVar71._16_4_ * (float)((uint)local_260 ^ _UNK_150b50f70);
      auVar59._20_4_ = auVar71._20_4_ * (float)((uint)fStack_25c ^ _UNK_150b50f74);
      auVar59._24_4_ = auVar71._24_4_ * (float)((uint)fStack_258 ^ _UNK_150b50f78);
      auVar59._28_4_ = auVar71._28_4_ * (float)((uint)fStack_254 ^ _UNK_150b50f7c);
      auVar69 = *(undefined1 (*) [16])(param_4 + uVar36);
      auVar95 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar36);
      auVar147._16_16_ = auVar95;
      auVar147._0_16_ = auVar69;
      auVar71 = vsubps_avx(auVar59,auVar147);
      auVar169._4_4_ = __real_3f800000;
      auVar169._0_4_ = __real_3f800000;
      auVar169._8_4_ = __real_3f800000;
      auVar169._12_4_ = __real_3f800000;
      auVar169._16_4_ = __real_3f800000;
      auVar169._20_4_ = __real_3f800000;
      auVar169._24_4_ = __real_3f800000;
      auVar169._28_4_ = __real_3f800000;
      auVar98._0_4_ = __real_3f800000 + (fVar114 + fVar10) * fVar93;
      auVar98._4_4_ = __real_3f800000 + (fVar127 + fVar67) * fVar104;
      auVar98._8_4_ = __real_3f800000 + (fVar128 + fVar11) * fVar106;
      auVar98._12_4_ = __real_3f800000 + (fVar129 + fVar79) * fVar108;
      auVar98._16_4_ = __real_3f800000 + (fVar130 + fVar12) * local_260;
      auVar98._20_4_ = __real_3f800000 + (fVar131 + fVar82) * fStack_25c;
      auVar98._24_4_ = __real_3f800000 + (fVar132 + fVar13) * fStack_258;
      auVar98._28_4_ = __real_3f800000 + (fVar133 + fVar85) * fStack_254;
      auVar71 = vdivps_avx(auVar71,auVar98);
      auVar60 = vblendvps_avx(auVar56,auVar169,auVar60);
      fVar93 = auVar71._0_4_;
      fVar134 = auVar60._0_4_ * fVar93;
      fVar104 = auVar71._4_4_;
      fVar136 = auVar60._4_4_ * fVar104;
      fVar106 = auVar71._8_4_;
      fVar137 = auVar60._8_4_ * fVar106;
      fVar108 = auVar71._12_4_;
      fVar138 = auVar60._12_4_ * fVar108;
      fVar14 = auVar71._16_4_;
      fVar139 = auVar60._16_4_ * fVar14;
      fVar90 = auVar71._20_4_;
      fVar140 = auVar60._20_4_ * fVar90;
      fVar15 = auVar71._24_4_;
      fVar141 = auVar60._24_4_ * fVar15;
      fVar92 = auVar71._28_4_;
      fVar142 = auVar60._28_4_ * fVar92;
      local_240 = auVar51._0_4_;
      fStack_23c = auVar51._4_4_;
      fStack_238 = auVar51._8_4_;
      fStack_234 = auVar51._12_4_;
      fStack_230 = auVar87._0_4_;
      fStack_22c = auVar87._4_4_;
      fStack_228 = auVar87._8_4_;
      fStack_224 = auVar87._12_4_;
      auVar151._0_4_ = fVar114 * fVar134 + local_240;
      auVar151._4_4_ = fVar127 * fVar136 + fStack_23c;
      auVar151._8_4_ = fVar128 * fVar137 + fStack_238;
      auVar151._12_4_ = fVar129 * fVar138 + fStack_234;
      auVar153._16_4_ = fVar130 * fVar139 + fStack_230;
      auVar153._0_16_ = auVar151;
      auVar153._20_4_ = fVar131 * fVar140 + fStack_22c;
      auVar153._24_4_ = fVar132 * fVar141 + fStack_228;
      auVar153._28_4_ = fVar133 * fVar142 + fStack_224;
      *(float *)(param_1 + lVar32) = auVar151._0_4_;
      uVar34 = vextractps_avx(auVar151,1);
      *(undefined4 *)(param_1 + lVar28) = uVar34;
      fVar94 = (float)(~uVar149 & auVar70._0_4_) * fVar93;
      fVar105 = (float)(~uVar155 & auVar70._4_4_) * fVar104;
      fVar107 = (float)(~uVar156 & auVar70._8_4_) * fVar106;
      fVar109 = (float)(~uVar157 & auVar70._12_4_) * fVar108;
      fVar110 = (float)(~uVar158 & auVar70._16_4_) * fVar14;
      fVar111 = (float)(~uVar159 & auVar70._20_4_) * fVar90;
      fVar112 = (float)(~uVar160 & auVar70._24_4_) * fVar15;
      fVar113 = (float)(~uVar161 & auVar70._28_4_) * fVar92;
      uVar34 = vextractps_avx(auVar151,2);
      *(undefined4 *)(param_1 + lVar49) = uVar34;
      uVar34 = vextractps_avx(auVar151,3);
      *(undefined4 *)(param_1 + lVar44) = uVar34;
      auVar87 = auVar153._16_16_;
      *(float *)(param_1 + lVar42) = auVar153._16_4_;
      uVar34 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + lVar46) = uVar34;
      uVar34 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + lVar48) = uVar34;
      local_220 = auVar150._0_4_;
      fStack_21c = auVar150._4_4_;
      fStack_218 = auVar150._8_4_;
      fStack_214 = auVar150._12_4_;
      fStack_210 = auVar116._0_4_;
      fStack_20c = auVar116._4_4_;
      fStack_208 = auVar116._8_4_;
      fStack_204 = auVar116._12_4_;
      auVar150._0_4_ = fVar114 * fVar94 + local_220;
      auVar150._4_4_ = fVar127 * fVar105 + fStack_21c;
      auVar150._8_4_ = fVar128 * fVar107 + fStack_218;
      auVar150._12_4_ = fVar129 * fVar109 + fStack_214;
      auVar163._16_4_ = fVar130 * fVar110 + fStack_210;
      auVar163._0_16_ = auVar150;
      auVar163._20_4_ = fVar131 * fVar111 + fStack_20c;
      auVar163._24_4_ = fVar132 * fVar112 + fStack_208;
      auVar163._28_4_ = fVar133 * fVar113 + fStack_204;
      uVar34 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + lVar38) = uVar34;
      *(float *)(param_1 + 4 + lVar32) = auVar150._0_4_;
      uVar34 = vextractps_avx(auVar150,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar34;
      fVar65 = (float)(~uVar149 & auVar57._0_4_) * fVar93;
      fVar77 = (float)(~uVar155 & auVar57._4_4_) * fVar104;
      fVar80 = (float)(~uVar156 & auVar57._8_4_) * fVar106;
      fVar83 = (float)(~uVar157 & auVar57._12_4_) * fVar108;
      fVar86 = (float)(~uVar158 & auVar57._16_4_) * fVar14;
      fVar88 = (float)(~uVar159 & auVar57._20_4_) * fVar90;
      fVar89 = (float)(~uVar160 & auVar57._24_4_) * fVar15;
      fVar91 = (float)(~uVar161 & auVar57._28_4_) * fVar92;
      uVar34 = vextractps_avx(auVar150,2);
      *(undefined4 *)(param_1 + 4 + lVar49) = uVar34;
      uVar34 = vextractps_avx(auVar150,3);
      *(undefined4 *)(param_1 + 4 + lVar44) = uVar34;
      auVar87 = auVar163._16_16_;
      *(float *)(param_1 + 4 + lVar42) = auVar163._16_4_;
      uVar34 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + 4 + lVar46) = uVar34;
      uVar34 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + 4 + lVar48) = uVar34;
      local_200 = auVar54._0_4_;
      fStack_1fc = auVar54._4_4_;
      fStack_1f8 = auVar54._8_4_;
      fStack_1f4 = auVar54._12_4_;
      fStack_1f0 = auVar177._0_4_;
      fStack_1ec = auVar177._4_4_;
      fStack_1e8 = auVar177._8_4_;
      fStack_1e4 = auVar177._12_4_;
      auVar51._0_4_ = fVar114 * fVar65 + local_200;
      auVar51._4_4_ = fVar127 * fVar77 + fStack_1fc;
      auVar51._8_4_ = fVar128 * fVar80 + fStack_1f8;
      auVar51._12_4_ = fVar129 * fVar83 + fStack_1f4;
      auVar119._16_4_ = fVar130 * fVar86 + fStack_1f0;
      auVar119._0_16_ = auVar51;
      auVar119._20_4_ = fVar131 * fVar88 + fStack_1ec;
      auVar119._24_4_ = fVar132 * fVar89 + fStack_1e8;
      auVar119._28_4_ = fVar133 * fVar91 + fStack_1e4;
      uVar34 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + 4 + lVar38) = uVar34;
      *(float *)(param_1 + 8 + lVar32) = auVar51._0_4_;
      uVar34 = vextractps_avx(auVar51,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar34;
      uVar34 = vextractps_avx(auVar51,2);
      *(undefined4 *)(param_1 + 8 + lVar49) = uVar34;
      uVar34 = vextractps_avx(auVar51,3);
      *(undefined4 *)(param_1 + 8 + lVar44) = uVar34;
      auVar54 = auVar119._16_16_;
      *(float *)(param_1 + 8 + lVar42) = auVar119._16_4_;
      uVar34 = vextractps_avx(auVar54,1);
      *(undefined4 *)(param_1 + 8 + lVar46) = uVar34;
      uVar34 = vextractps_avx(auVar54,2);
      *(undefined4 *)(param_1 + 8 + lVar48) = uVar34;
      uVar34 = vextractps_avx(auVar54,3);
      *(undefined4 *)(param_1 + 8 + lVar38) = uVar34;
      *(uint *)(param_1 + 0xc + lVar32) = uVar27;
      *(uint *)(param_1 + 0xc + lVar28) = uVar78;
      *(uint *)(param_1 + 0xc + lVar49) = uVar81;
      *(uint *)(param_1 + 0xc + lVar44) = uVar84;
      *(uint *)(param_1 + 0xc + lVar42) = uVar37;
      *(uint *)(param_1 + 0xc + lVar46) = uVar41;
      *(uint *)(param_1 + 0xc + lVar48) = uVar45;
      local_1e0 = auVar115._0_4_;
      fStack_1dc = auVar115._4_4_;
      fStack_1d8 = auVar115._8_4_;
      fStack_1d4 = auVar115._12_4_;
      fStack_1d0 = auVar118._0_4_;
      fStack_1cc = auVar118._4_4_;
      fStack_1c8 = auVar118._8_4_;
      fStack_1c4 = auVar118._12_4_;
      auVar115._0_4_ = fVar10 * fVar134 + local_1e0;
      auVar115._4_4_ = fVar67 * fVar136 + fStack_1dc;
      auVar115._8_4_ = fVar11 * fVar137 + fStack_1d8;
      auVar115._12_4_ = fVar79 * fVar138 + fStack_1d4;
      auVar120._16_4_ = fVar12 * fVar139 + fStack_1d0;
      auVar120._0_16_ = auVar115;
      auVar120._20_4_ = fVar82 * fVar140 + fStack_1cc;
      auVar120._24_4_ = fVar13 * fVar141 + fStack_1c8;
      auVar120._28_4_ = fVar85 * fVar142 + fStack_1c4;
      *(uint *)(param_1 + 0xc + lVar38) = uVar66;
      *(float *)(param_1 + lVar43) = auVar115._0_4_;
      uVar34 = vextractps_avx(auVar115,1);
      *(undefined4 *)(param_1 + lVar33) = uVar34;
      uVar34 = vextractps_avx(auVar115,2);
      *(undefined4 *)(param_1 + lVar29) = uVar34;
      uVar34 = vextractps_avx(auVar115,3);
      *(undefined4 *)(param_1 + lVar47) = uVar34;
      auVar54 = auVar120._16_16_;
      *(float *)(param_1 + lVar50) = auVar120._16_4_;
      uVar34 = vextractps_avx(auVar54,1);
      *(undefined4 *)(param_1 + lVar30) = uVar34;
      uVar34 = vextractps_avx(auVar54,2);
      *(undefined4 *)(param_1 + lVar35) = uVar34;
      local_320 = auVar16._0_4_;
      fStack_31c = auVar16._4_4_;
      fStack_318 = auVar16._8_4_;
      fStack_314 = auVar16._12_4_;
      fStack_310 = auVar96._0_4_;
      fStack_30c = auVar96._4_4_;
      fStack_308 = auVar96._8_4_;
      fStack_304 = auVar96._12_4_;
      auVar118._0_4_ = fVar10 * fVar94 + local_320;
      auVar118._4_4_ = fVar67 * fVar105 + fStack_31c;
      auVar118._8_4_ = fVar11 * fVar107 + fStack_318;
      auVar118._12_4_ = fVar79 * fVar109 + fStack_314;
      uVar34 = vextractps_avx(auVar54,3);
      *(undefined4 *)(param_1 + lVar26) = uVar34;
      *(float *)(param_1 + 4 + lVar43) = auVar118._0_4_;
      uVar34 = vextractps_avx(auVar118,1);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar34;
      uVar34 = vextractps_avx(auVar118,2);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar34;
      uVar34 = vextractps_avx(auVar118,3);
      *(undefined4 *)(param_1 + 4 + lVar47) = uVar34;
      *(float *)(param_1 + 4 + lVar50) = fVar12 * fVar110 + fStack_310;
      *(float *)(param_1 + 4 + lVar30) = fVar82 * fVar111 + fStack_30c;
      *(float *)(param_1 + 4 + lVar35) = fVar13 * fVar112 + fStack_308;
      local_340 = auVar18._0_4_;
      fStack_33c = auVar18._4_4_;
      fStack_338 = auVar18._8_4_;
      fStack_334 = auVar18._12_4_;
      fStack_330 = auVar17._0_4_;
      fStack_32c = auVar17._4_4_;
      fStack_328 = auVar17._8_4_;
      fStack_324 = auVar17._12_4_;
      auVar87._0_4_ = fVar10 * fVar65 + local_340;
      auVar87._4_4_ = fVar67 * fVar77 + fStack_33c;
      auVar87._8_4_ = fVar11 * fVar80 + fStack_338;
      auVar87._12_4_ = fVar79 * fVar83 + fStack_334;
      auVar72._16_4_ = fVar12 * fVar86 + fStack_330;
      auVar72._0_16_ = auVar87;
      auVar72._20_4_ = fVar82 * fVar88 + fStack_32c;
      auVar72._24_4_ = fVar13 * fVar89 + fStack_328;
      auVar72._28_4_ = fVar85 * fVar91 + fStack_324;
      *(float *)(param_1 + 4 + lVar26) = fVar85 * fVar113 + fStack_304;
      *(float *)(param_1 + 8 + lVar43) = auVar87._0_4_;
      uVar34 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar34;
      uVar34 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar34;
      uVar34 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + 8 + lVar47) = uVar34;
      auVar87 = auVar72._16_16_;
      *(float *)(param_1 + 8 + lVar50) = auVar72._16_4_;
      uVar34 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar34;
      auVar54._0_4_ = auVar69._0_4_ + fVar93;
      auVar54._4_4_ = auVar69._4_4_ + fVar104;
      auVar54._8_4_ = auVar69._8_4_ + fVar106;
      auVar54._12_4_ = auVar69._12_4_ + fVar108;
      auVar60._16_4_ = auVar95._0_4_ + fVar14;
      auVar60._0_16_ = auVar54;
      auVar60._20_4_ = auVar95._4_4_ + fVar90;
      auVar60._24_4_ = auVar95._8_4_ + fVar15;
      auVar60._28_4_ = auVar95._12_4_ + fVar92;
      uVar34 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar34;
      uVar34 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar34;
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar36) = auVar60._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar36) = auVar54;
      *(uint *)(param_1 + 0xc + lVar43) = uVar2;
      *(uint *)(param_1 + 0xc + lVar33) = uVar3;
      *(uint *)(param_1 + 0xc + lVar29) = uVar4;
      *(uint *)(param_1 + 0xc + lVar47) = uVar9;
      *(uint *)(param_1 + 0xc + lVar50) = uVar5;
      *(uint *)(param_1 + 0xc + lVar30) = uVar6;
      *(uint *)(param_1 + 0xc + lVar35) = uVar7;
      *(uint *)(param_1 + 0xc + lVar26) = uVar8;
      uVar40 = uVar40 + 8;
      uVar31 = uVar31 + 0x20;
    } while ((int)uVar40 < (int)(uVar21 & 0xfffffff8));
    if ((int)param_8 <= (int)uVar40) {
      return;
    }
  }
  auVar174 = vpshufd_avx(ZEXT416((uint)uVar40),0);
  auVar61._16_16_ = auVar174;
  auVar61._0_16_ = auVar174;
  auVar95 = vpshufd_avx(ZEXT416(param_8),0);
  auVar54 = SUB3216(auVar61 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar87 = SUB3216(auVar61 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar174 = vpcmpgtd_avx(auVar95,auVar87);
  auVar69 = vpcmpgtd_avx(auVar95,auVar54);
  auVar73._16_16_ = auVar174;
  auVar73._0_16_ = auVar69;
  uVar31 = uVar40 & 0xffffffff;
  pauVar1 = (undefined1 (*) [16])(param_2 + uVar31 * 8);
  uVar21 = vmovmskps_avx(auVar73);
  if (uVar21 == 0xff) {
    auVar121._16_16_ = pauVar1[3];
    auVar121._0_16_ = pauVar1[1];
    auVar99._16_16_ = pauVar1[2];
    auVar99._0_16_ = *pauVar1;
    auVar60 = vshufps_avx(auVar99,auVar121,0x88);
    auVar56 = vshufps_avx(auVar99,auVar121,0xdd);
  }
  else {
    auVar118 = vpcmpgtd_avx(auVar95,auVar87);
    auVar115 = vpcmpgtd_avx(auVar95,auVar54);
    auVar96._0_4_ =
         auVar115._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar96._4_4_ = auVar115._4_4_ & _UNK_150b519c4;
    auVar96._8_4_ = auVar115._8_4_ & _UNK_150b519c8;
    auVar96._12_4_ = auVar115._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar96,1);
    vextractps_avx(auVar96,2);
    vextractps_avx(auVar96,3);
    auVar116._0_4_ =
         auVar115._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar116._4_4_ = auVar115._4_4_ & _UNK_150b519e4;
    auVar116._8_4_ = auVar115._8_4_ & _UNK_150b519e8;
    auVar116._12_4_ = auVar115._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar116,1);
    vextractps_avx(auVar116,2);
    vextractps_avx(auVar116,3);
    auVar60 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar118._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar56 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar118._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar116._0_4_))));
  }
  auVar53 = vpcmpgtd_avx(auVar95,auVar87);
  auVar18 = vpcmpgtd_avx(auVar95,auVar54);
  auVar74._16_16_ = auVar53;
  auVar74._0_16_ = auVar18;
  auVar55 = vpslld_avx(auVar60._16_16_,4);
  auVar16 = vpand_avx(auVar53,auVar55);
  lVar26 = param_1 + auVar16._0_4_;
  uVar66 = auVar18._0_4_;
  auVar172._0_4_ = uVar66 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
  uVar78 = auVar18._4_4_;
  auVar172._4_4_ = uVar78 & _UNK_150b50d44;
  uVar81 = auVar18._8_4_;
  auVar172._8_4_ = uVar81 & _UNK_150b50d48;
  uVar84 = auVar18._12_4_;
  auVar172._12_4_ = uVar84 & _UNK_150b50d4c;
  uVar27 = auVar53._0_4_;
  uVar37 = auVar53._4_4_;
  uVar41 = auVar53._8_4_;
  uVar45 = auVar53._12_4_;
  auVar176._0_4_ = uVar66 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar176._4_4_ = uVar78 & _UNK_150b50d64;
  auVar176._8_4_ = uVar81 & _UNK_150b50d68;
  auVar176._12_4_ = uVar84 & _UNK_150b50d6c;
  auVar117 = vpslld_avx(auVar56._16_16_,4);
  auVar151 = vpand_avx(auVar53,auVar117);
  lVar28 = param_1 + auVar151._0_4_;
  lVar29 = param_1 + auVar16._4_4_;
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d50) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d54) + lVar29)),0x10);
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d70) + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d74) + lVar29)),0x10);
  auVar115 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d90) + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d94) + lVar29)),0x10);
  lVar26 = param_1 + auVar151._4_4_;
  auVar51 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d50) + lVar28)),
                          ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d54) + lVar26)),0x10);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d70) + lVar28)),
                           ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d74) + lVar26)),0x10);
  auVar96 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d90) + lVar28)),
                          ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d94) + lVar26)),0x10);
  lVar26 = param_1 + auVar16._8_4_;
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d58) + lVar26)),
                          0x20);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d78) + lVar26)
                                           ),0x20);
  auVar115 = vinsertps_avx(auVar115,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d98) + lVar26)
                                           ),0x20);
  lVar26 = param_1 + auVar151._8_4_;
  auVar51 = vinsertps_avx(auVar51,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d58) + lVar26)),
                          0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d78) + lVar26)
                                           ),0x20);
  auVar96 = vinsertps_avx(auVar96,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d98) + lVar26)),
                          0x20);
  auVar116 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar16._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar16._4_4_)),0x10);
  auVar162 = vpslld_avx(auVar60._0_16_,4);
  auVar19 = vpand_avx(auVar162,auVar18);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)(param_1 + auVar16._8_4_)),0x20);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)(param_1 + auVar16._12_4_)),0x30);
  lVar26 = param_1 + auVar16._12_4_;
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d5c) + lVar26)),
                          0x30);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d7c) + lVar26)
                                           ),0x30);
  auVar115 = vinsertps_avx(auVar115,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d9c) + lVar26)
                                           ),0x30);
  lVar26 = param_1 + auVar151._12_4_;
  auVar51 = vinsertps_avx(auVar51,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d5c) + lVar26)),
                          0x30);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d7c) + lVar26)
                                           ),0x30);
  auVar96 = vinsertps_avx(auVar96,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d9c) + lVar26)),
                          0x30);
  uVar37 = vextractps_avx(auVar172,1);
  uVar34 = vextractps_avx(auVar172,2);
  lVar32 = CONCAT44((int)((ulonglong)lVar26 >> 0x20),uVar34);
  lVar26 = param_1 + auVar19._0_4_;
  auVar16 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar19._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar19._4_4_)),0x10);
  lVar28 = param_1 + auVar19._4_4_;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_1 + auVar19._8_4_)),0x20);
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_1 + auVar19._12_4_)),0x30);
  auVar177 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar172._0_4_ + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)uVar37 + lVar28)),0x10);
  uVar41 = vextractps_avx(auVar176,1);
  uVar45 = vextractps_avx(auVar176,2);
  uVar27 = vextractps_avx(auVar176,3);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar176._0_4_ + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)uVar41 + lVar28)),0x10);
  auVar143._16_16_ = auVar116;
  auVar143._0_16_ = auVar16;
  auVar116 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar66 & 
                                             ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                             ) + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d84) + lVar28)),0x10);
  auVar173 = vpslld_avx(auVar56._0_16_,4);
  auVar52 = vpand_avx(auVar173,auVar18);
  lVar26 = param_1 + auVar52._0_4_;
  lVar28 = param_1 + auVar52._4_4_;
  auVar16 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar172._0_4_ + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)uVar37 + lVar28)),0x10);
  auVar18 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar176._0_4_ + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)uVar41 + lVar28)),0x10);
  lVar29 = param_1 + auVar19._8_4_;
  lVar30 = param_1 + auVar19._12_4_;
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)(lVar32 + lVar29)),0x20);
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)((ulonglong)auVar172._12_4_ + lVar30)),0x30);
  auVar164._16_16_ = auVar87;
  auVar164._0_16_ = auVar177;
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar66 & 
                                            ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                            ) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d84) + lVar28)),0x10);
  auVar177 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)uVar45 + lVar29)),0x20);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d88) + lVar29)
                                           ),0x20);
  lVar26 = param_1 + auVar52._8_4_;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(lVar32 + lVar26)),0x20);
  auVar17 = vinsertps_avx(auVar18,ZEXT416(*(uint *)((ulonglong)uVar45 + lVar26)),0x20);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d88) + lVar26)),
                          0x20);
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)((ulonglong)uVar27 + lVar30)),0x30);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)((ulonglong)(uVar84 & _UNK_150b50d8c) + lVar30)
                                           ),0x30);
  lVar26 = param_1 + auVar52._12_4_;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)((ulonglong)auVar172._12_4_ + lVar26)),0x30);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)uVar27 + lVar26)),0x30);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar84 & _UNK_150b50d8c) + lVar26)),
                          0x30);
  auVar148._16_16_ = auVar118;
  auVar148._0_16_ = auVar177;
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar151._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar151._4_4_)),0x10);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + auVar151._8_4_)),0x20);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + auVar151._12_4_)),0x30);
  auVar177 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar52._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar52._4_4_)),0x10);
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)(param_1 + auVar52._8_4_)),0x20);
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)(param_1 + auVar52._12_4_)),0x30);
  auVar170._16_16_ = auVar118;
  auVar170._0_16_ = auVar177;
  auVar154._16_16_ = auVar51;
  auVar154._0_16_ = auVar16;
  lVar26 = (longlong)(int)((uint)uVar40 << 2);
  auVar59 = vmaskmovps_avx(auVar74,*(undefined1 (*) [32])(param_3 + lVar26));
  auVar100._16_16_ = auVar150;
  auVar100._0_16_ = auVar17;
  auVar72 = vmaskmovps_avx(auVar74,*(undefined1 (*) [32])(param_4 + lVar26));
  auVar60 = vmaskmovps_avx(auVar74,auVar143);
  auVar56 = vmaskmovps_avx(auVar74,auVar164);
  auVar70 = vmaskmovps_avx(auVar74,auVar148);
  auVar57 = vmaskmovps_avx(auVar74,auVar170);
  auVar71 = vmaskmovps_avx(auVar74,auVar154);
  auVar58 = vmaskmovps_avx(auVar74,auVar100);
  bVar20 = (byte)uVar21;
  if ((~bVar20 & 0x81) == 0) {
    auVar177._8_8_ = 0;
    auVar177._0_8_ = *(ulonglong *)(param_6 + uVar31);
  }
  else {
    pbVar39 = (byte *)(param_6 + uVar31);
    auVar118 = vpcmpgtd_avx(auVar95,auVar54);
    auVar62._16_16_ = auVar53;
    auVar62._0_16_ = auVar118;
    uVar27 = vmovmskps_avx(auVar62);
    if ((uVar27 & 1) != 0) {
      auVar177 = ZEXT116(*pbVar39);
    }
    if ((uVar27 & 2) != 0) {
      auVar118 = vpinsrb_avx(auVar177,(uint)pbVar39[1],1);
      auVar177 = vpblendw_avx(auVar118,auVar177,0xe);
    }
    if ((uVar27 & 4) != 0) {
      auVar118 = vpmovzxwd_avx(auVar177);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[2],2);
      auVar118 = vpinsrb_avx(auVar118,(uint)auVar177[3],3);
      auVar177 = vpblendw_avx(auVar118,auVar177,0xc);
    }
    if ((uVar27 & 8) != 0) {
      auVar118 = vpmovzxwd_avx(auVar177);
      auVar118 = vpinsrb_avx(auVar118,(uint)auVar177[2],2);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[3],3);
      auVar177 = vpblendw_avx(auVar118,auVar177,0xc);
    }
    if ((uVar27 & 0x10) != 0) {
      auVar118 = vpshufb_avx(auVar177,___xmm_80800706808005048080030203020100);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[4],4);
      auVar118 = vpinsrb_avx(auVar118,(uint)auVar177[5],5);
      auVar177 = vpblendw_avx(auVar118,auVar177,8);
    }
    if ((uVar27 & 0x20) != 0) {
      auVar118 = vpshufb_avx(auVar177,___xmm_80800706808005048080030403020100);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[5],5);
      auVar177 = vpblendw_avx(auVar118,auVar177,8);
    }
    if ((uVar27 & 0x40) != 0) {
      auVar118 = vpshufb_avx(auVar177,___xmm_80800706808005048080050403020100);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[6],6);
      auVar177 = vpinsrb_avx(auVar118,(uint)auVar177[7],7);
    }
    if ((uVar27 & 0x80) != 0) {
      auVar118 = vpshufb_avx(auVar177,___xmm_80800706808005048006050403020100);
      auVar177 = vpinsrb_avx(auVar118,(uint)pbVar39[7],7);
    }
  }
  auVar95 = vpcmpgtd_avx(auVar95,auVar54);
  auVar63._16_16_ = auVar53;
  auVar63._0_16_ = auVar95;
  auVar95 = vpshufd_avx(auVar177,0x55);
  auVar95 = vpmovzxbd_avx(auVar95);
  auVar54 = vpmovzxbd_avx(auVar177);
  auVar118 = vpslld_avx(auVar54,2);
  auVar95 = vpslld_avx(auVar95,2);
  auVar54 = vpunpckhdq_avx(auVar95,ZEXT816(0) << 0x20);
  auVar95 = vpmovzxdq_avx(auVar95);
  auVar179._16_16_ = auVar54;
  auVar179._0_16_ = auVar95;
  auVar54 = vpunpckhdq_avx(auVar118,ZEXT816(0) << 0x20);
  auVar95 = vpmovzxdq_avx(auVar118);
  auVar101._16_16_ = auVar54;
  auVar101._0_16_ = auVar95;
  auVar95 = vpmovsxdq_avx(auVar69);
  auVar69 = vpshufd_avx(auVar69,0xfa);
  auVar122._16_16_ = auVar69;
  auVar122._0_16_ = auVar95;
  auVar120 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar101,auVar122);
  auVar97 = vsubps_avx(auVar60,auVar57);
  auVar119 = vsubps_avx(auVar56,auVar71);
  auVar135 = vsubps_avx(auVar70,auVar58);
  auVar165._0_4_ =
       auVar135._0_4_ * auVar135._0_4_ +
       auVar119._0_4_ * auVar119._0_4_ + auVar97._0_4_ * auVar97._0_4_;
  auVar165._4_4_ =
       auVar135._4_4_ * auVar135._4_4_ +
       auVar119._4_4_ * auVar119._4_4_ + auVar97._4_4_ * auVar97._4_4_;
  auVar165._8_4_ =
       auVar135._8_4_ * auVar135._8_4_ +
       auVar119._8_4_ * auVar119._8_4_ + auVar97._8_4_ * auVar97._8_4_;
  auVar165._12_4_ =
       auVar135._12_4_ * auVar135._12_4_ +
       auVar119._12_4_ * auVar119._12_4_ + auVar97._12_4_ * auVar97._12_4_;
  auVar165._16_4_ =
       auVar135._16_4_ * auVar135._16_4_ +
       auVar119._16_4_ * auVar119._16_4_ + auVar97._16_4_ * auVar97._16_4_;
  auVar165._20_4_ =
       auVar135._20_4_ * auVar135._20_4_ +
       auVar119._20_4_ * auVar119._20_4_ + auVar97._20_4_ * auVar97._20_4_;
  auVar165._24_4_ =
       auVar135._24_4_ * auVar135._24_4_ +
       auVar119._24_4_ * auVar119._24_4_ + auVar97._24_4_ * auVar97._24_4_;
  auVar165._28_4_ =
       auVar135._28_4_ * auVar135._28_4_ +
       auVar119._28_4_ * auVar119._28_4_ + auVar97._28_4_ * auVar97._28_4_;
  auVar69 = vpmovsxdq_avx(auVar174);
  auVar174 = vpshufd_avx(auVar174,0xfa);
  auVar146 = vsqrtps_avx(auVar165);
  auVar75._16_16_ = auVar174;
  auVar75._0_16_ = auVar69;
  auVar98 = vcmpps_avx(auVar165,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar97 = vdivps_avx(auVar97,auVar146);
  auVar123._4_4_ = __real_3f800000;
  auVar123._0_4_ = __real_3f800000;
  auVar123._8_4_ = __real_3f800000;
  auVar123._12_4_ = __real_3f800000;
  auVar123._16_4_ = __real_3f800000;
  auVar123._20_4_ = __real_3f800000;
  auVar123._24_4_ = __real_3f800000;
  auVar123._28_4_ = __real_3f800000;
  auVar97 = vblendvps_avx(auVar97,auVar123,auVar98);
  auVar97 = vmaskmovps_avx(auVar63,auVar97);
  auVar119 = vdivps_avx(auVar119,auVar146);
  uVar27 = auVar98._0_4_;
  auVar171._0_4_ = ~uVar27 & auVar119._0_4_;
  uVar37 = auVar98._4_4_;
  auVar171._4_4_ = ~uVar37 & auVar119._4_4_;
  uVar41 = auVar98._8_4_;
  auVar171._8_4_ = ~uVar41 & auVar119._8_4_;
  uVar45 = auVar98._12_4_;
  auVar171._12_4_ = ~uVar45 & auVar119._12_4_;
  uVar66 = auVar98._16_4_;
  auVar171._16_4_ = ~uVar66 & auVar119._16_4_;
  uVar78 = auVar98._20_4_;
  auVar171._20_4_ = ~uVar78 & auVar119._20_4_;
  uVar81 = auVar98._24_4_;
  auVar171._24_4_ = ~uVar81 & auVar119._24_4_;
  uVar84 = auVar98._28_4_;
  auVar171._28_4_ = ~uVar84 & auVar119._28_4_;
  auVar98 = vmaskmovps_avx(auVar63,auVar171);
  auVar119 = vdivps_avx(auVar135,auVar146);
  auVar167._0_4_ = ~uVar27 & auVar119._0_4_;
  auVar167._4_4_ = ~uVar37 & auVar119._4_4_;
  auVar167._8_4_ = ~uVar41 & auVar119._8_4_;
  auVar167._12_4_ = ~uVar45 & auVar119._12_4_;
  auVar167._16_4_ = ~uVar66 & auVar119._16_4_;
  auVar167._20_4_ = ~uVar78 & auVar119._20_4_;
  auVar167._24_4_ = ~uVar81 & auVar119._24_4_;
  auVar167._28_4_ = ~uVar84 & auVar119._28_4_;
  auVar119 = vmaskmovps_avx(auVar63,auVar167);
  auVar135 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar179,auVar75);
  auVar174 = vinsertps_avx(ZEXT416(*(uint *)(param_7 + auVar135._0_8_)),
                           ZEXT416(*(uint *)(param_7 + auVar135._8_8_)),0x10);
  auVar174 = vinsertps_avx(auVar174,ZEXT416(*(uint *)(param_7 + auVar135._16_8_)),0x20);
  auVar174 = vinsertps_avx(auVar174,ZEXT416(*(uint *)(param_7 + auVar135._24_8_)),0x30);
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_7 + auVar120._0_8_)),
                          ZEXT416(*(uint *)(param_7 + auVar120._8_8_)),0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_7 + auVar120._16_8_)),0x20);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_7 + auVar120._24_8_)),0x30);
  auVar144._0_4_ = ~uVar27 & auVar146._0_4_;
  auVar144._4_4_ = ~uVar37 & auVar146._4_4_;
  auVar144._8_4_ = ~uVar41 & auVar146._8_4_;
  auVar144._12_4_ = ~uVar45 & auVar146._12_4_;
  auVar144._16_4_ = ~uVar66 & auVar146._16_4_;
  auVar144._20_4_ = ~uVar78 & auVar146._20_4_;
  auVar144._24_4_ = ~uVar81 & auVar146._24_4_;
  auVar144._28_4_ = ~uVar84 & auVar146._28_4_;
  auVar59 = vsubps_avx(auVar144,auVar59);
  auVar95 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar104 = auVar95._0_4_;
  fVar108 = auVar95._4_4_;
  fVar90 = auVar95._8_4_;
  fVar92 = auVar95._12_4_;
  fVar67 = fVar104 * fVar104 * auVar69._0_4_;
  fVar79 = fVar108 * fVar108 * auVar69._4_4_;
  fVar82 = fVar90 * fVar90 * auVar69._8_4_;
  fVar85 = fVar92 * fVar92 * auVar69._12_4_;
  fVar104 = fVar104 * fVar104 * auVar174._0_4_;
  fVar108 = fVar108 * fVar108 * auVar174._4_4_;
  fVar90 = fVar90 * fVar90 * auVar174._8_4_;
  fVar92 = fVar92 * fVar92 * auVar174._12_4_;
  auVar145._0_4_ =
       auVar59._0_4_ *
       (float)((uint)fVar67 ^
              ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
  auVar145._4_4_ = auVar59._4_4_ * (float)((uint)fVar79 ^ _UNK_150b50f64);
  auVar145._8_4_ = auVar59._8_4_ * (float)((uint)fVar82 ^ _UNK_150b50f68);
  auVar145._12_4_ = auVar59._12_4_ * (float)((uint)fVar85 ^ _UNK_150b50f6c);
  auVar145._16_4_ = auVar59._16_4_ * (float)((uint)fVar104 ^ _UNK_150b50f70);
  auVar145._20_4_ = auVar59._20_4_ * (float)((uint)fVar108 ^ _UNK_150b50f74);
  auVar145._24_4_ = auVar59._24_4_ * (float)((uint)fVar90 ^ _UNK_150b50f78);
  auVar145._28_4_ = auVar59._28_4_ * (float)((uint)fVar92 ^ _UNK_150b50f7c);
  fVar10 = auVar116._0_4_;
  fVar65 = auVar87._0_4_;
  fVar11 = auVar116._4_4_;
  fVar77 = auVar87._4_4_;
  fVar12 = auVar116._8_4_;
  fVar80 = auVar87._8_4_;
  fVar13 = auVar116._12_4_;
  fVar83 = auVar87._12_4_;
  fVar93 = auVar115._0_4_;
  fVar86 = auVar96._0_4_;
  fVar106 = auVar115._4_4_;
  fVar88 = auVar96._4_4_;
  fVar14 = auVar115._8_4_;
  fVar89 = auVar96._8_4_;
  fVar15 = auVar115._12_4_;
  fVar91 = auVar96._12_4_;
  auVar76._0_4_ = (fVar65 + fVar10) * fVar67 + __real_3f800000;
  auVar76._4_4_ = (fVar77 + fVar11) * fVar79 + __real_3f800000;
  auVar76._8_4_ = (fVar80 + fVar12) * fVar82 + __real_3f800000;
  auVar76._12_4_ = (fVar83 + fVar13) * fVar85 + __real_3f800000;
  auVar76._16_4_ = (fVar86 + fVar93) * fVar104 + __real_3f800000;
  auVar76._20_4_ = (fVar88 + fVar106) * fVar108 + __real_3f800000;
  auVar76._24_4_ = (fVar89 + fVar14) * fVar90 + __real_3f800000;
  auVar76._28_4_ = (fVar91 + fVar15) * fVar92 + __real_3f800000;
  auVar59 = vsubps_avx(auVar145,auVar72);
  auVar59 = vdivps_avx(auVar59,auVar76);
  fVar67 = auVar59._0_4_;
  auVar124._0_4_ = auVar72._0_4_ + fVar67;
  fVar79 = auVar59._4_4_;
  auVar124._4_4_ = auVar72._4_4_ + fVar79;
  fVar82 = auVar59._8_4_;
  auVar124._8_4_ = auVar72._8_4_ + fVar82;
  fVar85 = auVar59._12_4_;
  auVar124._12_4_ = auVar72._12_4_ + fVar85;
  fVar104 = auVar59._16_4_;
  auVar124._16_4_ = auVar72._16_4_ + fVar104;
  fVar108 = auVar59._20_4_;
  auVar124._20_4_ = auVar72._20_4_ + fVar108;
  fVar90 = auVar59._24_4_;
  auVar124._24_4_ = auVar72._24_4_ + fVar90;
  fVar92 = auVar59._28_4_;
  auVar124._28_4_ = auVar72._28_4_ + fVar92;
  auVar59 = vmaskmovps_avx(auVar63,auVar124);
  *(undefined1 (*) [32])(param_4 + lVar26) = auVar59;
  local_2c0 = auVar97._0_4_;
  fStack_2bc = auVar97._4_4_;
  fStack_2b8 = auVar97._8_4_;
  fStack_2b4 = auVar97._12_4_;
  fStack_2b0 = auVar97._16_4_;
  fStack_2ac = auVar97._20_4_;
  fStack_2a8 = auVar97._24_4_;
  fStack_2a4 = auVar97._28_4_;
  auVar174._0_4_ = auVar60._0_4_ + fVar10 * fVar67 * local_2c0;
  auVar174._4_4_ = auVar60._4_4_ + fVar11 * fVar79 * fStack_2bc;
  auVar174._8_4_ = auVar60._8_4_ + fVar12 * fVar82 * fStack_2b8;
  auVar174._12_4_ = auVar60._12_4_ + fVar13 * fVar85 * fStack_2b4;
  auVar175._16_4_ = auVar60._16_4_ + fVar93 * fVar104 * fStack_2b0;
  auVar175._0_16_ = auVar174;
  auVar175._20_4_ = auVar60._20_4_ + fVar106 * fVar108 * fStack_2ac;
  auVar175._24_4_ = auVar60._24_4_ + fVar14 * fVar90 * fStack_2a8;
  auVar175._28_4_ = auVar60._28_4_ + fVar15 * fVar92 * fStack_2a4;
  local_2a0 = auVar98._0_4_;
  fStack_29c = auVar98._4_4_;
  fStack_298 = auVar98._8_4_;
  fStack_294 = auVar98._12_4_;
  fStack_290 = auVar98._16_4_;
  fStack_28c = auVar98._20_4_;
  fStack_288 = auVar98._24_4_;
  fStack_284 = auVar98._28_4_;
  local_2a0 = fVar67 * local_2a0;
  fStack_29c = fVar79 * fStack_29c;
  fStack_298 = fVar82 * fStack_298;
  fStack_294 = fVar85 * fStack_294;
  fStack_290 = fVar104 * fStack_290;
  fStack_28c = fVar108 * fStack_28c;
  fStack_288 = fVar90 * fStack_288;
  fStack_284 = fVar92 * fStack_284;
  local_280 = auVar119._0_4_;
  fStack_27c = auVar119._4_4_;
  fStack_278 = auVar119._8_4_;
  fStack_274 = auVar119._12_4_;
  fStack_270 = auVar119._16_4_;
  fStack_26c = auVar119._20_4_;
  fStack_268 = auVar119._24_4_;
  fStack_264 = auVar119._28_4_;
  local_280 = fVar67 * local_280;
  fStack_27c = fVar79 * fStack_27c;
  fStack_278 = fVar82 * fStack_278;
  fStack_274 = fVar85 * fStack_274;
  fStack_270 = fVar104 * fStack_270;
  fStack_26c = fVar108 * fStack_26c;
  fStack_268 = fVar90 * fStack_268;
  fStack_264 = fVar92 * fStack_264;
  iVar168 = auVar162._0_4_;
  auVar69 = auVar175._16_16_;
  iVar25 = auVar162._4_4_;
  iVar22 = auVar162._8_4_;
  iVar23 = auVar162._12_4_;
  iVar68 = auVar55._0_4_;
  if ((uVar21 & 1) != 0) {
    *(float *)(param_1 + iVar168) = auVar174._0_4_;
  }
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(float *)(param_1 + iVar68) = auVar175._16_4_;
  }
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar55,1);
    uVar34 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar55,2);
    uVar34 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar55,3);
    uVar34 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
    auVar102._0_4_ = auVar56._0_4_ + fVar10 * local_2a0;
    auVar102._4_4_ = auVar56._4_4_ + fVar11 * fStack_29c;
    auVar102._8_4_ = auVar56._8_4_ + fVar12 * fStack_298;
    auVar102._12_4_ = auVar56._12_4_ + fVar13 * fStack_294;
    auVar102._16_4_ = auVar56._16_4_ + fVar93 * fStack_290;
    auVar102._20_4_ = auVar56._20_4_ + fVar106 * fStack_28c;
    auVar102._24_4_ = auVar56._24_4_ + fVar14 * fStack_288;
    auVar102._28_4_ = auVar56._28_4_ + fVar15 * fStack_284;
  }
  else {
    auVar102._0_4_ = auVar56._0_4_ + fVar10 * local_2a0;
    auVar102._4_4_ = auVar56._4_4_ + fVar11 * fStack_29c;
    auVar102._8_4_ = auVar56._8_4_ + fVar12 * fStack_298;
    auVar102._12_4_ = auVar56._12_4_ + fVar13 * fStack_294;
    auVar102._16_4_ = auVar56._16_4_ + fVar93 * fStack_290;
    auVar102._20_4_ = auVar56._20_4_ + fVar106 * fStack_28c;
    auVar102._24_4_ = auVar56._24_4_ + fVar14 * fStack_288;
    auVar102._28_4_ = auVar56._28_4_ + fVar15 * fStack_284;
  }
  if ((uVar21 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar168) = auVar102._0_4_;
  }
  auVar174 = auVar102._0_16_;
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar68) = auVar102._16_4_;
  }
  auVar174 = auVar102._16_16_;
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar55,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar55,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar55,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
    auVar103._0_4_ = auVar70._0_4_ + fVar10 * local_280;
    auVar103._4_4_ = auVar70._4_4_ + fVar11 * fStack_27c;
    auVar103._8_4_ = auVar70._8_4_ + fVar12 * fStack_278;
    auVar103._12_4_ = auVar70._12_4_ + fVar13 * fStack_274;
    auVar103._16_4_ = auVar70._16_4_ + fVar93 * fStack_270;
    auVar103._20_4_ = auVar70._20_4_ + fVar106 * fStack_26c;
    auVar103._24_4_ = auVar70._24_4_ + fVar14 * fStack_268;
    auVar103._28_4_ = auVar70._28_4_ + fVar15 * fStack_264;
  }
  else {
    auVar103._0_4_ = auVar70._0_4_ + fVar10 * local_280;
    auVar103._4_4_ = auVar70._4_4_ + fVar11 * fStack_27c;
    auVar103._8_4_ = auVar70._8_4_ + fVar12 * fStack_278;
    auVar103._12_4_ = auVar70._12_4_ + fVar13 * fStack_274;
    auVar103._16_4_ = auVar70._16_4_ + fVar93 * fStack_270;
    auVar103._20_4_ = auVar70._20_4_ + fVar106 * fStack_26c;
    auVar103._24_4_ = auVar70._24_4_ + fVar14 * fStack_268;
    auVar103._28_4_ = auVar70._28_4_ + fVar15 * fStack_264;
  }
  if ((uVar21 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar168) = auVar103._0_4_;
  }
  auVar174 = auVar103._0_16_;
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar68) = auVar103._16_4_;
  }
  auVar174 = auVar103._16_16_;
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar55,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar55,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar55,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar168) = fVar10;
  }
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar116,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar116,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar116,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar68) = fVar93;
  }
  if ((uVar21 & 0x20) != 0) {
    iVar25 = vextractps_avx(auVar55,1);
    uVar34 = vextractps_avx(auVar115,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar25 = vextractps_avx(auVar55,2);
    uVar34 = vextractps_avx(auVar115,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar25 = vextractps_avx(auVar55,3);
    uVar34 = vextractps_avx(auVar115,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  local_4a0 = auVar57._0_4_;
  fStack_49c = auVar57._4_4_;
  fStack_498 = auVar57._8_4_;
  fStack_494 = auVar57._12_4_;
  fStack_490 = auVar57._16_4_;
  fStack_48c = auVar57._20_4_;
  fStack_488 = auVar57._24_4_;
  fStack_484 = auVar57._28_4_;
  auVar69._0_4_ = fVar65 * fVar67 * local_2c0 + local_4a0;
  auVar69._4_4_ = fVar77 * fVar79 * fStack_2bc + fStack_49c;
  auVar69._8_4_ = fVar80 * fVar82 * fStack_2b8 + fStack_498;
  auVar69._12_4_ = fVar83 * fVar85 * fStack_2b4 + fStack_494;
  auVar125._16_4_ = fVar86 * fVar104 * fStack_2b0 + fStack_490;
  auVar125._0_16_ = auVar69;
  auVar125._20_4_ = fVar88 * fVar108 * fStack_2ac + fStack_48c;
  auVar125._24_4_ = fVar89 * fVar90 * fStack_2a8 + fStack_488;
  auVar125._28_4_ = fVar91 * fVar92 * fStack_2a4 + fStack_484;
  auVar174 = auVar125._16_16_;
  iVar168 = auVar173._0_4_;
  iVar25 = auVar173._4_4_;
  iVar22 = auVar173._8_4_;
  iVar23 = auVar173._12_4_;
  local_480 = auVar71._0_4_;
  fStack_47c = auVar71._4_4_;
  fStack_478 = auVar71._8_4_;
  fStack_474 = auVar71._12_4_;
  fStack_470 = auVar71._16_4_;
  fStack_46c = auVar71._20_4_;
  fStack_468 = auVar71._24_4_;
  fStack_464 = auVar71._28_4_;
  local_380 = auVar58._0_4_;
  fStack_37c = auVar58._4_4_;
  fStack_378 = auVar58._8_4_;
  fStack_374 = auVar58._12_4_;
  fStack_370 = auVar58._16_4_;
  fStack_36c = auVar58._20_4_;
  fStack_368 = auVar58._24_4_;
  fStack_364 = auVar58._28_4_;
  iVar68 = auVar117._0_4_;
  if ((uVar21 & 1) != 0) {
    *(float *)(param_1 + iVar168) = auVar69._0_4_;
  }
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(float *)(param_1 + iVar68) = auVar125._16_4_;
  }
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar117,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar117,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar117,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
    auVar126._0_4_ = fVar65 * local_2a0 + local_480;
    auVar126._4_4_ = fVar77 * fStack_29c + fStack_47c;
    auVar126._8_4_ = fVar80 * fStack_298 + fStack_478;
    auVar126._12_4_ = fVar83 * fStack_294 + fStack_474;
    auVar126._16_4_ = fVar86 * fStack_290 + fStack_470;
    auVar126._20_4_ = fVar88 * fStack_28c + fStack_46c;
    auVar126._24_4_ = fVar89 * fStack_288 + fStack_468;
    auVar126._28_4_ = fVar91 * fStack_284 + fStack_464;
  }
  else {
    auVar126._0_4_ = fVar65 * local_2a0 + local_480;
    auVar126._4_4_ = fVar77 * fStack_29c + fStack_47c;
    auVar126._8_4_ = fVar80 * fStack_298 + fStack_478;
    auVar126._12_4_ = fVar83 * fStack_294 + fStack_474;
    auVar126._16_4_ = fVar86 * fStack_290 + fStack_470;
    auVar126._20_4_ = fVar88 * fStack_28c + fStack_46c;
    auVar126._24_4_ = fVar89 * fStack_288 + fStack_468;
    auVar126._28_4_ = fVar91 * fStack_284 + fStack_464;
  }
  if ((uVar21 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar168) = auVar126._0_4_;
  }
  auVar174 = auVar126._0_16_;
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar68) = auVar126._16_4_;
  }
  auVar174 = auVar126._16_16_;
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar117,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar117,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar117,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
    auVar64._0_4_ = fVar65 * local_280 + local_380;
    auVar64._4_4_ = fVar77 * fStack_27c + fStack_37c;
    auVar64._8_4_ = fVar80 * fStack_278 + fStack_378;
    auVar64._12_4_ = fVar83 * fStack_274 + fStack_374;
    auVar64._16_4_ = fVar86 * fStack_270 + fStack_370;
    auVar64._20_4_ = fVar88 * fStack_26c + fStack_36c;
    auVar64._24_4_ = fVar89 * fStack_268 + fStack_368;
    auVar64._28_4_ = fVar91 * fStack_264 + fStack_364;
  }
  else {
    auVar64._0_4_ = fVar65 * local_280 + local_380;
    auVar64._4_4_ = fVar77 * fStack_27c + fStack_37c;
    auVar64._8_4_ = fVar80 * fStack_278 + fStack_378;
    auVar64._12_4_ = fVar83 * fStack_274 + fStack_374;
    auVar64._16_4_ = fVar86 * fStack_270 + fStack_370;
    auVar64._20_4_ = fVar88 * fStack_26c + fStack_36c;
    auVar64._24_4_ = fVar89 * fStack_268 + fStack_368;
    auVar64._28_4_ = fVar91 * fStack_264 + fStack_364;
  }
  if ((uVar21 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar168) = auVar64._0_4_;
  }
  auVar174 = auVar64._0_16_;
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar68) = auVar64._16_4_;
  }
  auVar174 = auVar64._16_16_;
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar117,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar117,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar117,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar168) = fVar65;
  }
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar87,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar87,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar87,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar68) = fVar86;
  }
  if ((uVar21 & 0x20) != 0) {
    iVar25 = vextractps_avx(auVar117,1);
    uVar34 = vextractps_avx(auVar96,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar25 = vextractps_avx(auVar117,2);
    uVar34 = vextractps_avx(auVar96,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar25 = vextractps_avx(auVar117,3);
    uVar34 = vextractps_avx(auVar96,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  return;
}

// ApplyXPBDSpringDampingConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx @ 14092ad10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6,byte param_7,longlong param_8,longlong param_9,byte param_10,
               longlong param_11,longlong param_12,uint param_13)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  int iVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  byte bVar41;
  uint uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  ulonglong uVar56;
  longlong lVar57;
  ulonglong uVar58;
  undefined4 uVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  ulonglong uVar66;
  longlong lVar67;
  longlong lVar68;
  longlong lVar69;
  ulonglong uVar70;
  longlong lVar71;
  longlong lVar72;
  int iVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar79 [16];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar94 [16];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar116;
  float fVar117;
  undefined1 auVar110 [32];
  float fVar118;
  undefined1 auVar111 [32];
  undefined1 auVar109 [16];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar130 [16];
  undefined1 auVar129 [16];
  undefined1 auVar131 [32];
  float fVar132;
  undefined1 auVar133 [16];
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  int iVar146;
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  float fVar150;
  undefined1 auVar151 [16];
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  undefined1 auVar152 [32];
  undefined1 auVar154 [32];
  float fVar162;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  undefined1 auVar163 [32];
  float fVar171;
  uint uVar172;
  float fVar175;
  uint uVar176;
  float fVar177;
  uint uVar178;
  float fVar179;
  uint uVar180;
  float fVar181;
  uint uVar182;
  float fVar183;
  uint uVar184;
  float fVar185;
  uint uVar186;
  undefined1 auVar173 [32];
  float fVar187;
  undefined1 auVar174 [32];
  uint uVar188;
  undefined1 auVar189 [32];
  undefined1 auVar190 [16];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [16];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [16];
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
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  int local_2e0;
  int iStack_2dc;
  int iStack_2d8;
  int iStack_2d4;
  int local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
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
  int iVar27;
  ulonglong uVar40;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar153 [32];
  
  uVar42 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar42 = param_13;
  }
  if ((int)(uVar42 & 0xfffffff8) < 1) {
    uVar56 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    auVar94 = vpshufd_avx(ZEXT416(param_6),0);
    uVar47 = 0;
    uVar56 = 0;
    do {
      auVar119._0_12_ = ZEXT812(0);
      auVar119._12_4_ = 0;
      auVar196 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar196._8_8_ = 0;
        auVar196._0_8_ = *(ulonglong *)(param_8 + uVar56);
      }
      auVar101._16_16_ = *(undefined1 (*) [16])(param_3 + 0x30 + uVar47 * 2);
      auVar101._0_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + uVar47 * 2);
      auVar84._16_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + uVar47 * 2);
      auVar84._0_16_ = *(undefined1 (*) [16])(param_3 + uVar47 * 2);
      auVar83 = vshufps_avx(auVar84,auVar101,0x88);
      auVar84 = vshufps_avx(auVar84,auVar101,0xdd);
      if ((param_10 & 1) != 0) {
        auVar119._8_8_ = 0;
        auVar119._0_8_ = *(ulonglong *)(param_11 + uVar56);
      }
      auVar74 = vpslld_avx(auVar83._16_16_,4);
      auVar92 = vpslld_avx(auVar83._0_16_,4);
      lVar43 = (longlong)auVar92._0_4_;
      lVar60 = (longlong)auVar92._4_4_;
      lVar63 = (longlong)auVar92._8_4_;
      lVar67 = (longlong)auVar92._12_4_;
      lVar71 = (longlong)auVar74._0_4_;
      lVar57 = (longlong)auVar74._4_4_;
      lVar50 = (longlong)auVar74._8_4_;
      lVar30 = (longlong)auVar74._12_4_;
      auVar74 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar71)),
                              ZEXT416(*(uint *)(param_1 + lVar57)),0x10);
      auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_1 + lVar50)),0x20);
      auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_1 + lVar30)),0x30);
      auVar92 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar43)),
                              ZEXT416(*(uint *)(param_1 + lVar60)),0x10);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_1 + lVar63)),0x20);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_1 + lVar67)),0x30);
      auVar191._16_16_ = auVar74;
      auVar191._0_16_ = auVar92;
      auVar120 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar71)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar57)),0x10);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_1 + 4 + lVar50)),0x20);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x30);
      auVar130 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar43)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar60)),0x10);
      auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)(param_1 + 4 + lVar63)),0x20);
      auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)(param_1 + 4 + lVar67)),0x30);
      auVar193 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar71)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar57)),0x10);
      auVar193 = vinsertps_avx(auVar193,ZEXT416(*(uint *)(param_1 + 8 + lVar50)),0x20);
      auVar193 = vinsertps_avx(auVar193,ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar43)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar60)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 8 + lVar63)),0x20);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 8 + lVar67)),0x30);
      auVar192._16_16_ = auVar120;
      auVar192._0_16_ = auVar130;
      auVar80._16_16_ = auVar193;
      auVar80._0_16_ = auVar15;
      uVar25 = *(uint *)(param_1 + 0xc + lVar43);
      uVar172 = *(uint *)(param_1 + 0xc + lVar60);
      uVar176 = *(uint *)(param_1 + 0xc + lVar71);
      uVar178 = *(uint *)(param_1 + 0xc + lVar57);
      uVar180 = *(uint *)(param_1 + 0xc + lVar50);
      uVar182 = *(uint *)(param_1 + 0xc + lVar30);
      auVar75 = vpslld_avx(auVar84._0_16_,4);
      auVar76 = vpslld_avx(auVar84._16_16_,4);
      auVar107 = vinsertps_avx(ZEXT416(uVar176),ZEXT416(uVar178),0x10);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(uVar180),0x20);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(uVar182),0x30);
      uVar184 = *(uint *)(param_1 + 0xc + lVar63);
      auVar108 = vinsertps_avx(ZEXT416(uVar25),ZEXT416(uVar172),0x10);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(uVar184),0x20);
      uVar186 = *(uint *)(param_1 + 0xc + lVar67);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(uVar186),0x30);
      lVar54 = (longlong)auVar75._0_4_;
      lVar51 = (longlong)auVar75._4_4_;
      lVar61 = (longlong)auVar75._8_4_;
      lVar44 = (longlong)auVar76._0_4_;
      lVar68 = (longlong)auVar76._4_4_;
      lVar64 = (longlong)auVar76._8_4_;
      auVar93 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar44)),
                              ZEXT416(*(uint *)(param_1 + lVar68)),0x10);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_1 + lVar64)),0x20);
      lVar45 = (longlong)auVar76._12_4_;
      auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_1 + lVar45)),0x30);
      auVar76 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar54)),
                              ZEXT416(*(uint *)(param_1 + lVar51)),0x10);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + lVar61)),0x20);
      lVar31 = (longlong)auVar75._12_4_;
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + lVar31)),0x30);
      auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar44)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar68)),0x10);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_1 + 4 + lVar64)),0x20);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_1 + 4 + lVar45)),0x30);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar54)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar51)),0x10);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_1 + 4 + lVar61)),0x20);
      auVar194._16_16_ = auVar93;
      auVar194._0_16_ = auVar76;
      auVar93 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x30);
      auVar76 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar44)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar68)),0x10);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + 8 + lVar64)),0x20);
      auVar189._16_16_ = auVar75;
      auVar189._0_16_ = auVar93;
      auVar93 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + 8 + lVar45)),0x30);
      auVar76 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar54)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar51)),0x10);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + 8 + lVar61)),0x20);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x30);
      auVar173._16_16_ = auVar93;
      auVar173._0_16_ = auVar76;
      uVar188 = *(uint *)(param_1 + 0xc + lVar44);
      uVar2 = *(uint *)(param_1 + 0xc + lVar68);
      uVar3 = *(uint *)(param_1 + 0xc + lVar64);
      auVar93 = vinsertps_avx(ZEXT416(uVar188),ZEXT416(uVar2),0x10);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(uVar3),0x20);
      uVar4 = *(uint *)(param_1 + 0xc + lVar45);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(uVar4),0x30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar54);
      uVar6 = *(uint *)(param_1 + 0xc + lVar51);
      uVar7 = *(uint *)(param_1 + 0xc + lVar61);
      auVar76 = vinsertps_avx(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(uVar7),0x20);
      lVar46 = (longlong)(auVar83._0_4_ * 3);
      lVar69 = (longlong)(auVar83._4_4_ * 3);
      lVar72 = (longlong)(auVar83._8_4_ * 3);
      lVar52 = (longlong)(auVar83._16_4_ * 3);
      lVar62 = (longlong)(auVar83._20_4_ * 3);
      lVar55 = (longlong)(auVar83._24_4_ * 3);
      auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar52 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar62 * 4)),0x10);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + lVar55 * 4)),0x20);
      lVar65 = (longlong)(auVar83._28_4_ * 3);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + lVar65 * 4)),0x30);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar46 * 4)),
                               ZEXT416(*(uint *)(param_2 + lVar69 * 4)),0x10);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + lVar72 * 4)),0x20);
      lVar32 = (longlong)(auVar83._12_4_ * 3);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + lVar32 * 4)),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + lVar31);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(uVar8),0x30);
      auVar133 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar62 * 4)),0x10);
      auVar133 = vinsertps_avx(auVar133,ZEXT416(*(uint *)(param_2 + 4 + lVar55 * 4)),0x20);
      auVar133 = vinsertps_avx(auVar133,ZEXT416(*(uint *)(param_2 + 4 + lVar65 * 4)),0x30);
      auVar151 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar46 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar69 * 4)),0x10);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_2 + 4 + lVar72 * 4)),0x20);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_2 + 4 + lVar32 * 4)),0x30);
      auVar95._16_16_ = auVar75;
      auVar95._0_16_ = auVar190;
      auVar81._16_16_ = auVar133;
      auVar81._0_16_ = auVar151;
      auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar62 * 4)),0x10);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 8 + lVar55 * 4)),0x20);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 8 + lVar65 * 4)),0x30);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar46 * 4)),
                               ZEXT416(*(uint *)(param_2 + 8 + lVar69 * 4)),0x10);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + 8 + lVar72 * 4)),0x20);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + 8 + lVar32 * 4)),0x30);
      lVar46 = (longlong)(auVar84._0_4_ * 3);
      lVar62 = (longlong)(auVar84._4_4_ * 3);
      lVar32 = (longlong)(auVar84._8_4_ * 3);
      lVar55 = (longlong)(auVar84._16_4_ * 3);
      lVar52 = (longlong)(auVar84._20_4_ * 3);
      lVar72 = (longlong)(auVar84._24_4_ * 3);
      lVar69 = (longlong)(auVar84._28_4_ * 3);
      auVar133 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar55 * 4)),
                               ZEXT416(*(uint *)(param_2 + lVar52 * 4)),0x10);
      auVar133 = vinsertps_avx(auVar133,ZEXT416(*(uint *)(param_2 + lVar72 * 4)),0x20);
      auVar133 = vinsertps_avx(auVar133,ZEXT416(*(uint *)(param_2 + lVar69 * 4)),0x30);
      lVar65 = (longlong)(auVar84._12_4_ * 3);
      auVar151 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar46 * 4)),
                               ZEXT416(*(uint *)(param_2 + lVar62 * 4)),0x10);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_2 + lVar32 * 4)),0x20);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_2 + lVar65 * 4)),0x30);
      auVar82._16_16_ = auVar75;
      auVar82._0_16_ = auVar190;
      auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar55 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),0x10);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar55 * 4)),
                               ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),0x10);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 4 + lVar72 * 4)),0x20);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + 8 + lVar72 * 4)),0x20);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 4 + lVar69 * 4)),0x30);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + 8 + lVar69 * 4)),0x30);
      auVar16 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar46 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar62 * 4)),0x10);
      auVar79 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar46 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar62 * 4)),0x10);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_2 + 4 + lVar32 * 4)),0x20);
      auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)(param_2 + 8 + lVar32 * 4)),0x20);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_2 + 4 + lVar65 * 4)),0x30);
      auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)(param_2 + 8 + lVar65 * 4)),0x30);
      auVar78 = vpmovsxbd_avx(auVar196);
      auVar77 = vpslld_avx(auVar78,2);
      auVar83 = vsubps_avx(auVar191,auVar194);
      auVar101 = vsubps_avx(auVar192,auVar189);
      auVar97 = vsubps_avx(auVar80,auVar173);
      auVar147._0_4_ =
           auVar83._0_4_ * auVar83._0_4_ + auVar101._0_4_ * auVar101._0_4_ +
           auVar97._0_4_ * auVar97._0_4_;
      auVar147._4_4_ =
           auVar83._4_4_ * auVar83._4_4_ + auVar101._4_4_ * auVar101._4_4_ +
           auVar97._4_4_ * auVar97._4_4_;
      auVar147._8_4_ =
           auVar83._8_4_ * auVar83._8_4_ + auVar101._8_4_ * auVar101._8_4_ +
           auVar97._8_4_ * auVar97._8_4_;
      auVar147._12_4_ =
           auVar83._12_4_ * auVar83._12_4_ + auVar101._12_4_ * auVar101._12_4_ +
           auVar97._12_4_ * auVar97._12_4_;
      auVar147._16_4_ =
           auVar83._16_4_ * auVar83._16_4_ + auVar101._16_4_ * auVar101._16_4_ +
           auVar97._16_4_ * auVar97._16_4_;
      auVar147._20_4_ =
           auVar83._20_4_ * auVar83._20_4_ + auVar101._20_4_ * auVar101._20_4_ +
           auVar97._20_4_ * auVar97._20_4_;
      auVar147._24_4_ =
           auVar83._24_4_ * auVar83._24_4_ + auVar101._24_4_ * auVar101._24_4_ +
           auVar97._24_4_ * auVar97._24_4_;
      auVar147._28_4_ =
           auVar83._28_4_ * auVar83._28_4_ + auVar101._28_4_ * auVar101._28_4_ +
           auVar97._28_4_ * auVar97._28_4_;
      auVar84 = vsqrtps_avx(auVar147);
      auVar196 = vpshufd_avx(auVar196,0x55);
      auVar83 = vdivps_avx(auVar83,auVar84);
      auVar196 = vpmovsxbd_avx(auVar196);
      auVar78 = vpslld_avx(auVar196,2);
      auVar101 = vdivps_avx(auVar101,auVar84);
      auVar97 = vdivps_avx(auVar97,auVar84);
      auVar196 = vinsertps_avx(ZEXT416(*(uint *)(param_9 + auVar78._0_4_)),
                               ZEXT416(*(uint *)(param_9 + auVar78._4_4_)),0x10);
      auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_9 + auVar78._8_4_)),0x20);
      auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_9 + auVar78._12_4_)),0x30);
      auVar78 = vinsertps_avx(ZEXT416(*(uint *)(param_9 + auVar77._0_4_)),
                              ZEXT416(*(uint *)(param_9 + auVar77._4_4_)),0x10);
      auVar109 = vpshufd_avx(auVar119,0x55);
      auVar109 = vpmovsxbd_avx(auVar109);
      auVar129 = vpslld_avx(auVar109,2);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_9 + auVar77._8_4_)),0x20);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_9 + auVar77._12_4_)),0x30);
      auVar109 = vinsertps_avx(ZEXT416(*(uint *)(param_12 + auVar129._0_4_)),
                               ZEXT416(*(uint *)(param_12 + auVar129._4_4_)),0x10);
      auVar119 = vpmovsxbd_avx(auVar119);
      auVar77 = vpslld_avx(auVar119,2);
      auVar119 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(param_12 + auVar129._8_4_)),0x20);
      auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_12 + auVar129._12_4_)),0x30);
      auVar109 = vinsertps_avx(ZEXT416(*(uint *)(param_12 + auVar77._0_4_)),
                               ZEXT416(*(uint *)(param_12 + auVar77._4_4_)),0x10);
      auVar110._16_16_ = auVar196;
      auVar110._0_16_ = auVar78;
      auVar196 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(param_12 + auVar77._8_4_)),0x20);
      auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_12 + auVar77._12_4_)),0x30);
      uVar70 = uVar47 & 0xffffffff;
      auVar195._16_16_ = *(undefined1 (*) [16])(param_4 + 0x10 + uVar70);
      auVar195._0_16_ = *(undefined1 (*) [16])(param_4 + uVar70);
      auVar84 = vcmpps_avx(auVar147,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar96._4_4_ = __real_3f800000;
      auVar96._0_4_ = __real_3f800000;
      auVar96._8_4_ = __real_3f800000;
      auVar96._12_4_ = __real_3f800000;
      auVar96._16_4_ = __real_3f800000;
      auVar96._20_4_ = __real_3f800000;
      auVar96._24_4_ = __real_3f800000;
      auVar96._28_4_ = __real_3f800000;
      auVar83 = vblendvps_avx(auVar83,auVar96,auVar84);
      fVar132 = (float)(~auVar84._0_4_ & auVar101._0_4_);
      fVar139 = (float)(~auVar84._4_4_ & auVar101._4_4_);
      fVar140 = (float)(~auVar84._8_4_ & auVar101._8_4_);
      fVar141 = (float)(~auVar84._12_4_ & auVar101._12_4_);
      fVar142 = (float)(~auVar84._16_4_ & auVar101._16_4_);
      fVar143 = (float)(~auVar84._20_4_ & auVar101._20_4_);
      fVar144 = (float)(~auVar84._24_4_ & auVar101._24_4_);
      fVar145 = (float)(~auVar84._28_4_ & auVar101._28_4_);
      auVar101 = vdivps_avx(auVar96,auVar195);
      fVar171 = (float)(~auVar84._0_4_ & auVar97._0_4_);
      fVar175 = (float)(~auVar84._4_4_ & auVar97._4_4_);
      fVar177 = (float)(~auVar84._8_4_ & auVar97._8_4_);
      fVar179 = (float)(~auVar84._12_4_ & auVar97._12_4_);
      fVar181 = (float)(~auVar84._16_4_ & auVar97._16_4_);
      fVar183 = (float)(~auVar84._20_4_ & auVar97._20_4_);
      fVar185 = (float)(~auVar84._24_4_ & auVar97._24_4_);
      fVar187 = (float)(~auVar84._28_4_ & auVar97._28_4_);
      auVar84 = vcmpps_avx(auVar195,
                           ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,1
                          );
      auVar84 = vblendvps_avx(auVar101,auVar96,auVar84);
      local_300 = auVar108._0_4_;
      fStack_2fc = auVar108._4_4_;
      fStack_2f8 = auVar108._8_4_;
      fStack_2f4 = auVar108._12_4_;
      fStack_2f0 = auVar107._0_4_;
      fStack_2ec = auVar107._4_4_;
      fStack_2e8 = auVar107._8_4_;
      fStack_2e4 = auVar107._12_4_;
      fVar162 = auVar76._0_4_;
      auVar148._0_4_ = fVar162 + local_300;
      fVar164 = auVar76._4_4_;
      auVar148._4_4_ = fVar164 + fStack_2fc;
      fVar165 = auVar76._8_4_;
      auVar148._8_4_ = fVar165 + fStack_2f8;
      fVar166 = auVar76._12_4_;
      auVar148._12_4_ = fVar166 + fStack_2f4;
      fVar167 = auVar93._0_4_;
      auVar148._16_4_ = fVar167 + fStack_2f0;
      fVar168 = auVar93._4_4_;
      auVar148._20_4_ = fVar168 + fStack_2ec;
      fVar169 = auVar93._8_4_;
      auVar148._24_4_ = fVar169 + fStack_2e8;
      fVar170 = auVar93._12_4_;
      auVar148._28_4_ = fVar170 + fStack_2e4;
      auVar101 = vdivps_avx(auVar110,auVar148);
      auVar101 = vsqrtps_avx(auVar101);
      auVar97 = vsubps_avx(auVar191,auVar95);
      auVar97 = vsubps_avx(auVar97,auVar194);
      local_400 = auVar151._0_4_;
      fStack_3fc = auVar151._4_4_;
      fStack_3f8 = auVar151._8_4_;
      fStack_3f4 = auVar151._12_4_;
      fStack_3f0 = auVar133._0_4_;
      fStack_3ec = auVar133._4_4_;
      fStack_3e8 = auVar133._8_4_;
      fStack_3e4 = auVar133._12_4_;
      auVar81 = vsubps_avx(auVar192,auVar81);
      auVar81 = vsubps_avx(auVar81,auVar189);
      local_420 = auVar16._0_4_;
      fStack_41c = auVar16._4_4_;
      fStack_418 = auVar16._8_4_;
      fStack_414 = auVar16._12_4_;
      fStack_410 = auVar75._0_4_;
      fStack_40c = auVar75._4_4_;
      fStack_408 = auVar75._8_4_;
      fStack_404 = auVar75._12_4_;
      auVar80 = vsubps_avx(auVar80,auVar82);
      auVar80 = vsubps_avx(auVar80,auVar173);
      local_340 = auVar79._0_4_;
      fStack_33c = auVar79._4_4_;
      fStack_338 = auVar79._8_4_;
      fStack_334 = auVar79._12_4_;
      fStack_330 = auVar190._0_4_;
      fStack_32c = auVar190._4_4_;
      fStack_328 = auVar190._8_4_;
      fStack_324 = auVar190._12_4_;
      local_200 = auVar94._0_4_;
      fStack_1fc = auVar94._4_4_;
      fStack_1f8 = auVar94._8_4_;
      fStack_1f4 = auVar94._12_4_;
      fVar106 = auVar84._0_4_ * auVar101._0_4_ * (auVar196._0_4_ + auVar196._0_4_) * local_200;
      fVar116 = auVar84._4_4_ * auVar101._4_4_ * (auVar196._4_4_ + auVar196._4_4_) * fStack_1fc;
      fVar117 = auVar84._8_4_ * auVar101._8_4_ * (auVar196._8_4_ + auVar196._8_4_) * fStack_1f8;
      fVar118 = auVar84._12_4_ * auVar101._12_4_ * (auVar196._12_4_ + auVar196._12_4_) * fStack_1f4;
      local_200 = auVar84._16_4_ * auVar101._16_4_ * (auVar119._0_4_ + auVar119._0_4_) * local_200;
      fStack_1fc = auVar84._20_4_ * auVar101._20_4_ * (auVar119._4_4_ + auVar119._4_4_) * fStack_1fc
      ;
      fStack_1f8 = auVar84._24_4_ * auVar101._24_4_ * (auVar119._8_4_ + auVar119._8_4_) * fStack_1f8
      ;
      fStack_1f4 = auVar84._28_4_ * auVar101._28_4_ * (auVar119._12_4_ + auVar119._12_4_) *
                   fStack_1f4;
      auVar131._0_4_ =
           (auVar83._0_4_ * (auVar97._0_4_ + local_400) + fVar132 * (auVar81._0_4_ + local_420) +
           fVar171 * (auVar80._0_4_ + local_340)) *
           (float)((uint)fVar106 ^
                  ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
      auVar131._4_4_ =
           (auVar83._4_4_ * (auVar97._4_4_ + fStack_3fc) + fVar139 * (auVar81._4_4_ + fStack_41c) +
           fVar175 * (auVar80._4_4_ + fStack_33c)) * (float)((uint)fVar116 ^ _UNK_150b50f64);
      auVar131._8_4_ =
           (auVar83._8_4_ * (auVar97._8_4_ + fStack_3f8) + fVar140 * (auVar81._8_4_ + fStack_418) +
           fVar177 * (auVar80._8_4_ + fStack_338)) * (float)((uint)fVar117 ^ _UNK_150b50f68);
      auVar131._12_4_ =
           (auVar83._12_4_ * (auVar97._12_4_ + fStack_3f4) + fVar141 * (auVar81._12_4_ + fStack_414)
           + fVar179 * (auVar80._12_4_ + fStack_334)) * (float)((uint)fVar118 ^ _UNK_150b50f6c);
      auVar131._16_4_ =
           (auVar83._16_4_ * (auVar97._16_4_ + fStack_3f0) + fVar142 * (auVar81._16_4_ + fStack_410)
           + fVar181 * (auVar80._16_4_ + fStack_330)) * (float)((uint)local_200 ^ _UNK_150b50f70);
      auVar131._20_4_ =
           (auVar83._20_4_ * (auVar97._20_4_ + fStack_3ec) + fVar143 * (auVar81._20_4_ + fStack_40c)
           + fVar183 * (auVar80._20_4_ + fStack_32c)) * (float)((uint)fStack_1fc ^ _UNK_150b50f74);
      auVar131._24_4_ =
           (auVar83._24_4_ * (auVar97._24_4_ + fStack_3e8) + fVar144 * (auVar81._24_4_ + fStack_408)
           + fVar185 * (auVar80._24_4_ + fStack_328)) * (float)((uint)fStack_1f8 ^ _UNK_150b50f78);
      auVar131._28_4_ =
           (auVar83._28_4_ * (auVar97._28_4_ + fStack_3e4) + fVar145 * (auVar81._28_4_ + fStack_404)
           + fVar187 * (auVar80._28_4_ + fStack_324)) * (float)((uint)fStack_1f4 ^ _UNK_150b50f7c);
      auVar119 = *(undefined1 (*) [16])(param_5 + uVar70);
      auVar196 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar70);
      auVar121._16_16_ = auVar196;
      auVar121._0_16_ = auVar119;
      auVar84 = vsubps_avx(auVar131,auVar121);
      auVar111._0_4_ = auVar148._0_4_ * fVar106 + __real_3f800000;
      auVar111._4_4_ = auVar148._4_4_ * fVar116 + __real_3f800000;
      auVar111._8_4_ = auVar148._8_4_ * fVar117 + __real_3f800000;
      auVar111._12_4_ = auVar148._12_4_ * fVar118 + __real_3f800000;
      auVar111._16_4_ = auVar148._16_4_ * local_200 + __real_3f800000;
      auVar111._20_4_ = auVar148._20_4_ * fStack_1fc + __real_3f800000;
      auVar111._24_4_ = auVar148._24_4_ * fStack_1f8 + __real_3f800000;
      auVar111._28_4_ = auVar148._28_4_ * fStack_1f4 + __real_3f800000;
      auVar84 = vdivps_avx(auVar84,auVar111);
      fVar106 = auVar84._0_4_;
      fVar150 = auVar83._0_4_ * fVar106;
      fVar116 = auVar84._4_4_;
      fVar155 = auVar83._4_4_ * fVar116;
      fVar117 = auVar84._8_4_;
      fVar156 = auVar83._8_4_ * fVar117;
      fVar118 = auVar84._12_4_;
      fVar157 = auVar83._12_4_ * fVar118;
      fVar11 = auVar84._16_4_;
      fVar158 = auVar83._16_4_ * fVar11;
      fVar12 = auVar84._20_4_;
      fVar159 = auVar83._20_4_ * fVar12;
      fVar13 = auVar84._24_4_;
      fVar160 = auVar83._24_4_ * fVar13;
      fVar14 = auVar84._28_4_;
      fVar161 = auVar83._28_4_ * fVar14;
      auVar107._0_4_ = auVar92._0_4_ + local_300 * fVar150;
      auVar107._4_4_ = auVar92._4_4_ + fStack_2fc * fVar155;
      auVar107._8_4_ = auVar92._8_4_ + fStack_2f8 * fVar156;
      auVar107._12_4_ = auVar92._12_4_ + fStack_2f4 * fVar157;
      auVar112._16_4_ = auVar74._0_4_ + fStack_2f0 * fVar158;
      auVar112._0_16_ = auVar107;
      auVar112._20_4_ = auVar74._4_4_ + fStack_2ec * fVar159;
      auVar112._24_4_ = auVar74._8_4_ + fStack_2e8 * fVar160;
      auVar112._28_4_ = auVar74._12_4_ + fStack_2e4 * fVar161;
      *(float *)(param_1 + lVar43) = auVar107._0_4_;
      uVar59 = vextractps_avx(auVar107,1);
      *(undefined4 *)(param_1 + lVar60) = uVar59;
      fVar132 = fVar132 * fVar106;
      fVar139 = fVar139 * fVar116;
      fVar140 = fVar140 * fVar117;
      fVar141 = fVar141 * fVar118;
      fVar142 = fVar142 * fVar11;
      fVar143 = fVar143 * fVar12;
      fVar144 = fVar144 * fVar13;
      fVar145 = fVar145 * fVar14;
      uVar59 = vextractps_avx(auVar107,2);
      *(undefined4 *)(param_1 + lVar63) = uVar59;
      uVar59 = vextractps_avx(auVar107,3);
      *(undefined4 *)(param_1 + lVar67) = uVar59;
      auVar74 = auVar112._16_16_;
      *(float *)(param_1 + lVar71) = auVar112._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + lVar57) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + lVar50) = uVar59;
      auVar108._0_4_ = auVar130._0_4_ + fVar132 * local_300;
      auVar108._4_4_ = auVar130._4_4_ + fVar139 * fStack_2fc;
      auVar108._8_4_ = auVar130._8_4_ + fVar140 * fStack_2f8;
      auVar108._12_4_ = auVar130._12_4_ + fVar141 * fStack_2f4;
      auVar113._16_4_ = auVar120._0_4_ + fVar142 * fStack_2f0;
      auVar113._0_16_ = auVar108;
      auVar113._20_4_ = auVar120._4_4_ + fVar143 * fStack_2ec;
      auVar113._24_4_ = auVar120._8_4_ + fVar144 * fStack_2e8;
      auVar113._28_4_ = auVar120._12_4_ + fVar145 * fStack_2e4;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + lVar30) = uVar59;
      *(float *)(param_1 + 4 + lVar43) = auVar108._0_4_;
      uVar59 = vextractps_avx(auVar108,1);
      *(undefined4 *)(param_1 + 4 + lVar60) = uVar59;
      fVar171 = fVar171 * fVar106;
      fVar175 = fVar175 * fVar116;
      fVar177 = fVar177 * fVar117;
      fVar179 = fVar179 * fVar118;
      fVar181 = fVar181 * fVar11;
      fVar183 = fVar183 * fVar12;
      fVar185 = fVar185 * fVar13;
      fVar187 = fVar187 * fVar14;
      uVar59 = vextractps_avx(auVar108,2);
      *(undefined4 *)(param_1 + 4 + lVar63) = uVar59;
      uVar59 = vextractps_avx(auVar108,3);
      *(undefined4 *)(param_1 + 4 + lVar67) = uVar59;
      auVar92 = auVar113._16_16_;
      *(float *)(param_1 + 4 + lVar71) = auVar113._16_4_;
      uVar59 = vextractps_avx(auVar92,1);
      *(undefined4 *)(param_1 + 4 + lVar57) = uVar59;
      uVar59 = vextractps_avx(auVar92,2);
      *(undefined4 *)(param_1 + 4 + lVar50) = uVar59;
      auVar74._0_4_ = auVar15._0_4_ + fVar171 * local_300;
      auVar74._4_4_ = auVar15._4_4_ + fVar175 * fStack_2fc;
      auVar74._8_4_ = auVar15._8_4_ + fVar177 * fStack_2f8;
      auVar74._12_4_ = auVar15._12_4_ + fVar179 * fStack_2f4;
      auVar97._16_4_ = auVar193._0_4_ + fVar181 * fStack_2f0;
      auVar97._0_16_ = auVar74;
      auVar97._20_4_ = auVar193._4_4_ + fVar183 * fStack_2ec;
      auVar97._24_4_ = auVar193._8_4_ + fVar185 * fStack_2e8;
      auVar97._28_4_ = auVar193._12_4_ + fVar187 * fStack_2e4;
      uVar59 = vextractps_avx(auVar92,3);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar59;
      *(float *)(param_1 + 8 + lVar43) = auVar74._0_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 8 + lVar60) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 8 + lVar63) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 8 + lVar67) = uVar59;
      auVar74 = auVar97._16_16_;
      *(float *)(param_1 + 8 + lVar71) = auVar97._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 8 + lVar57) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 8 + lVar50) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar59;
      *(uint *)(param_1 + 0xc + lVar43) = uVar25;
      *(uint *)(param_1 + 0xc + lVar60) = uVar172;
      *(uint *)(param_1 + 0xc + lVar63) = uVar184;
      *(uint *)(param_1 + 0xc + lVar67) = uVar186;
      *(uint *)(param_1 + 0xc + lVar71) = uVar176;
      *(uint *)(param_1 + 0xc + lVar57) = uVar178;
      *(uint *)(param_1 + 0xc + lVar50) = uVar180;
      *(uint *)(param_1 + 0xc + lVar30) = uVar182;
      auVar83._0_4_ = fVar162 * fVar150;
      auVar83._4_4_ = fVar164 * fVar155;
      auVar83._8_4_ = fVar165 * fVar156;
      auVar83._12_4_ = fVar166 * fVar157;
      auVar83._16_4_ = fVar167 * fVar158;
      auVar83._20_4_ = fVar168 * fVar159;
      auVar83._24_4_ = fVar169 * fVar160;
      auVar83._28_4_ = fVar170 * fVar161;
      auVar83 = vsubps_avx(auVar194,auVar83);
      *(int *)(param_1 + lVar54) = auVar83._0_4_;
      auVar74 = auVar83._0_16_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + lVar51) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + lVar61) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + lVar31) = uVar59;
      auVar74 = auVar83._16_16_;
      *(int *)(param_1 + lVar44) = auVar83._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + lVar68) = uVar59;
      auVar98._0_4_ = fVar132 * fVar162;
      auVar98._4_4_ = fVar139 * fVar164;
      auVar98._8_4_ = fVar140 * fVar165;
      auVar98._12_4_ = fVar141 * fVar166;
      auVar98._16_4_ = fVar142 * fVar167;
      auVar98._20_4_ = fVar143 * fVar168;
      auVar98._24_4_ = fVar144 * fVar169;
      auVar98._28_4_ = fVar145 * fVar170;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + lVar64) = uVar59;
      auVar83 = vsubps_avx(auVar189,auVar98);
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + lVar45) = uVar59;
      *(int *)(param_1 + 4 + lVar54) = auVar83._0_4_;
      auVar74 = auVar83._0_16_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 4 + lVar51) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 4 + lVar61) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar59;
      auVar74 = auVar83._16_16_;
      *(int *)(param_1 + 4 + lVar44) = auVar83._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 4 + lVar68) = uVar59;
      auVar99._0_4_ = fVar171 * fVar162;
      auVar99._4_4_ = fVar175 * fVar164;
      auVar99._8_4_ = fVar177 * fVar165;
      auVar99._12_4_ = fVar179 * fVar166;
      auVar99._16_4_ = fVar181 * fVar167;
      auVar99._20_4_ = fVar183 * fVar168;
      auVar99._24_4_ = fVar185 * fVar169;
      auVar99._28_4_ = fVar187 * fVar170;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 4 + lVar64) = uVar59;
      auVar83 = vsubps_avx(auVar173,auVar99);
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 4 + lVar45) = uVar59;
      *(int *)(param_1 + 8 + lVar54) = auVar83._0_4_;
      auVar74 = auVar83._0_16_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 8 + lVar51) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 8 + lVar61) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar59;
      auVar74 = auVar83._16_16_;
      *(int *)(param_1 + 8 + lVar44) = auVar83._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 8 + lVar68) = uVar59;
      auVar92._0_4_ = auVar119._0_4_ + fVar106;
      auVar92._4_4_ = auVar119._4_4_ + fVar116;
      auVar92._8_4_ = auVar119._8_4_ + fVar117;
      auVar92._12_4_ = auVar119._12_4_ + fVar118;
      auVar100._16_4_ = auVar196._0_4_ + fVar11;
      auVar100._0_16_ = auVar92;
      auVar100._20_4_ = auVar196._4_4_ + fVar12;
      auVar100._24_4_ = auVar196._8_4_ + fVar13;
      auVar100._28_4_ = auVar196._12_4_ + fVar14;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 8 + lVar64) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 8 + lVar45) = uVar59;
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar70) = auVar100._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar70) = auVar92;
      *(uint *)(param_1 + 0xc + lVar54) = uVar5;
      *(uint *)(param_1 + 0xc + lVar51) = uVar6;
      *(uint *)(param_1 + 0xc + lVar61) = uVar7;
      *(uint *)(param_1 + 0xc + lVar31) = uVar8;
      *(uint *)(param_1 + 0xc + lVar44) = uVar188;
      *(uint *)(param_1 + 0xc + lVar68) = uVar2;
      *(uint *)(param_1 + 0xc + lVar64) = uVar3;
      *(uint *)(param_1 + 0xc + lVar45) = uVar4;
      uVar56 = uVar56 + 8;
      uVar47 = uVar47 + 0x20;
    } while ((int)uVar56 < (int)(uVar42 & 0xfffffff8));
    if ((int)param_13 <= (int)uVar56) {
      return;
    }
  }
  auVar94 = vpshufd_avx(ZEXT416((uint)uVar56),0);
  auVar85._16_16_ = auVar94;
  auVar85._0_16_ = auVar94;
  auVar196 = vpshufd_avx(ZEXT416(param_13),0);
  uVar47 = uVar56 & 0xffffffff;
  pauVar1 = (undefined1 (*) [16])(param_3 + uVar47 * 8);
  auVar74 = SUB3216(auVar85 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar92 = SUB3216(auVar85 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar94 = vpcmpgtd_avx(auVar196,auVar92);
  auVar119 = vpcmpgtd_avx(auVar196,auVar74);
  auVar122._16_16_ = auVar94;
  auVar122._0_16_ = auVar119;
  uVar42 = vmovmskps_avx(auVar122);
  bVar41 = (byte)uVar42;
  if (uVar42 == 0xff) {
    auVar134._16_16_ = pauVar1[3];
    auVar134._0_16_ = pauVar1[1];
    auVar123._16_16_ = pauVar1[2];
    auVar123._0_16_ = *pauVar1;
    auVar83 = vshufps_avx(auVar123,auVar134,0x88);
    auVar84 = vshufps_avx(auVar123,auVar134,0xdd);
    auVar94 = ZEXT816(0) << 0x20;
  }
  else {
    auVar94 = vpcmpgtd_avx(auVar196,auVar92);
    auVar119 = vpcmpgtd_avx(auVar196,auVar74);
    auVar120._0_4_ =
         auVar119._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar120._4_4_ = auVar119._4_4_ & _UNK_150b519c4;
    auVar120._8_4_ = auVar119._8_4_ & _UNK_150b519c8;
    auVar120._12_4_ = auVar119._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar120,1);
    vextractps_avx(auVar120,2);
    vextractps_avx(auVar120,3);
    auVar130._0_4_ =
         auVar119._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar130._4_4_ = auVar119._4_4_ & _UNK_150b519e4;
    auVar130._8_4_ = auVar119._8_4_ & _UNK_150b519e8;
    auVar130._12_4_ = auVar119._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar130,1);
    vextractps_avx(auVar130,2);
    vextractps_avx(auVar130,3);
    auVar83 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar94._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar84 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar94._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar130._0_4_))));
    auVar94 = (undefined1  [16])0x0;
  }
  if ((param_7 & 1) != 0) {
    if ((~bVar41 & 0x81) == 0) {
      auVar94._8_8_ = 0;
      auVar94._0_8_ = *(ulonglong *)(param_8 + uVar47);
    }
    else {
      pbVar9 = (byte *)(param_8 + uVar47);
      auVar119 = vpcmpgtd_avx(auVar196,auVar92);
      auVar94 = vpcmpgtd_avx(auVar196,auVar74);
      auVar124._16_16_ = auVar119;
      auVar124._0_16_ = auVar94;
      uVar25 = vmovmskps_avx(auVar124);
      if ((uVar25 & 1) != 0) {
        auVar94 = ZEXT116(*pbVar9);
      }
      if ((uVar25 & 2) != 0) {
        auVar119 = vpinsrb_avx(auVar94,(uint)pbVar9[1],1);
        auVar94 = vpblendw_avx(auVar119,auVar94,0xe);
      }
      if ((uVar25 & 4) != 0) {
        auVar119 = vpmovzxwd_avx(auVar94);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[2],2);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar94[3],3);
        auVar94 = vpblendw_avx(auVar119,auVar94,0xc);
      }
      if ((uVar25 & 8) != 0) {
        auVar119 = vpmovzxwd_avx(auVar94);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar94[2],2);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[3],3);
        auVar94 = vpblendw_avx(auVar119,auVar94,0xc);
      }
      if ((uVar25 & 0x10) != 0) {
        auVar119 = vpshufb_avx(auVar94,___xmm_80800706808005048080030203020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[4],4);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar94[5],5);
        auVar94 = vpblendw_avx(auVar119,auVar94,8);
      }
      if ((uVar25 & 0x20) != 0) {
        auVar119 = vpshufb_avx(auVar94,___xmm_80800706808005048080030403020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[5],5);
        auVar94 = vpblendw_avx(auVar119,auVar94,8);
      }
      if ((uVar25 & 0x40) != 0) {
        auVar119 = vpshufb_avx(auVar94,___xmm_80800706808005048080050403020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[6],6);
        auVar94 = vpinsrb_avx(auVar119,(uint)auVar94[7],7);
      }
      if ((uVar25 & 0x80) != 0) {
        auVar94 = vpshufb_avx(auVar94,___xmm_80800706808005048006050403020100);
        auVar94 = vpinsrb_avx(auVar94,(uint)pbVar9[7],7);
      }
    }
  }
  auVar193 = (undefined1  [16])0x0;
  if ((param_10 & 1) != 0) {
    if ((~bVar41 & 0x81) == 0) {
      auVar193._8_8_ = 0;
      auVar193._0_8_ = *(ulonglong *)(param_11 + uVar47);
    }
    else {
      pbVar9 = (byte *)(param_11 + uVar47);
      auVar119 = vpcmpgtd_avx(auVar196,auVar92);
      auVar120 = vpcmpgtd_avx(auVar196,auVar74);
      auVar125._16_16_ = auVar119;
      auVar125._0_16_ = auVar120;
      uVar25 = vmovmskps_avx(auVar125);
      auVar119 = auVar193;
      auVar193 = (undefined1  [16])0x0;
      if ((uVar25 & 1) != 0) {
        auVar119 = ZEXT116(*pbVar9);
        auVar193 = ZEXT116(*pbVar9);
      }
      if ((uVar25 & 2) != 0) {
        auVar120 = vpinsrb_avx(auVar119,(uint)pbVar9[1],1);
        auVar193 = vpblendw_avx(auVar120,auVar119,0xe);
      }
      if ((uVar25 & 4) != 0) {
        auVar119 = vpmovzxwd_avx(auVar193);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[2],2);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar193[3],3);
        auVar193 = vpblendw_avx(auVar119,auVar193,0xc);
      }
      if ((uVar25 & 8) != 0) {
        auVar119 = vpmovzxwd_avx(auVar193);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar193[2],2);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[3],3);
        auVar193 = vpblendw_avx(auVar119,auVar193,0xc);
      }
      if ((uVar25 & 0x10) != 0) {
        auVar119 = vpshufb_avx(auVar193,___xmm_80800706808005048080030203020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[4],4);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar193[5],5);
        auVar193 = vpblendw_avx(auVar119,auVar193,8);
      }
      if ((uVar25 & 0x20) != 0) {
        auVar119 = vpshufb_avx(auVar193,___xmm_80800706808005048080030403020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[5],5);
        auVar193 = vpblendw_avx(auVar119,auVar193,8);
      }
      if ((uVar25 & 0x40) != 0) {
        auVar119 = vpshufb_avx(auVar193,___xmm_80800706808005048080050403020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[6],6);
        auVar193 = vpinsrb_avx(auVar119,(uint)auVar193[7],7);
      }
      if ((uVar25 & 0x80) != 0) {
        auVar119 = vpshufb_avx(auVar193,___xmm_80800706808005048006050403020100);
        auVar193 = vpinsrb_avx(auVar119,(uint)pbVar9[7],7);
      }
    }
  }
  auVar151 = vpcmpgtd_avx(auVar196,auVar92);
  auVar16 = vpcmpgtd_avx(auVar196,auVar74);
  auVar174._16_16_ = auVar151;
  auVar174._0_16_ = auVar16;
  auVar79 = vpslld_avx(auVar83._0_16_,4);
  auVar78 = vpslld_avx(auVar83._16_16_,4);
  auVar196 = vpand_avx(auVar16,auVar79);
  lVar30 = param_1 + auVar196._0_4_;
  lVar31 = param_1 + auVar196._4_4_;
  lVar32 = param_1 + auVar196._8_4_;
  lVar43 = param_1 + auVar196._12_4_;
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar196._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar196._4_4_)),0x10);
  auVar74 = vpand_avx(auVar151,auVar78);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + auVar196._8_4_)),0x20);
  lVar44 = param_1 + auVar74._0_4_;
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + auVar196._12_4_)),0x30);
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar74._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar74._4_4_)),0x10);
  lVar45 = param_1 + auVar74._4_4_;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_1 + auVar74._8_4_)),0x20);
  lVar46 = param_1 + auVar74._8_4_;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_1 + auVar74._12_4_)),0x30);
  uVar172 = auVar16._0_4_;
  uVar176 = auVar16._4_4_;
  uVar178 = auVar16._8_4_;
  uVar180 = auVar16._12_4_;
  uVar182 = auVar151._0_4_;
  uVar184 = auVar151._4_4_;
  uVar186 = auVar151._8_4_;
  uVar188 = auVar151._12_4_;
  lVar50 = param_1 + auVar74._12_4_;
  uVar33 = (ulonglong)(uVar182 & _UNK_150b50d50);
  uVar34 = (ulonglong)(uVar184 & _UNK_150b50d54);
  auVar74 = vinsertps_avx(ZEXT416(*(uint *)(uVar33 + lVar44)),ZEXT416(*(uint *)(uVar34 + lVar45)),
                          0x10);
  uVar35 = (ulonglong)(uVar186 & _UNK_150b50d58);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(uVar35 + lVar46)),0x20);
  uVar36 = (ulonglong)(uVar188 & _UNK_150b50d5c);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(uVar36 + lVar50)),0x30);
  uVar70 = (ulonglong)
           (uVar172 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004);
  uVar47 = (ulonglong)(uVar176 & _UNK_150b50d44);
  auVar92 = vinsertps_avx(ZEXT416(*(uint *)(uVar70 + lVar30)),ZEXT416(*(uint *)(uVar47 + lVar31)),
                          0x10);
  uVar37 = (ulonglong)(uVar178 & _UNK_150b50d48);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar37 + lVar32)),0x20);
  uVar38 = (ulonglong)(uVar180 & _UNK_150b50d4c);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar38 + lVar43)),0x30);
  auVar190._0_4_ = uVar172 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008
  ;
  auVar190._4_4_ = uVar176 & _UNK_150b50d64;
  auVar190._8_4_ = uVar178 & _UNK_150b50d68;
  auVar190._12_4_ = uVar180 & _UNK_150b50d6c;
  auVar86._16_16_ = auVar196;
  auVar86._0_16_ = auVar119;
  uVar66 = (ulonglong)(uVar184 & _UNK_150b50d74);
  uVar48 = (ulonglong)(uVar186 & _UNK_150b50d78);
  uVar39 = (ulonglong)(uVar188 & _UNK_150b50d7c);
  uVar58 = (ulonglong)(uVar182 & _UNK_150b50d70);
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar44)),ZEXT416(*(uint *)(uVar66 + lVar45)),
                           0x10);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(uVar48 + lVar46)),0x20);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(uVar39 + lVar50)),0x30);
  uVar25 = vextractps_avx(auVar190,1);
  uVar40 = (ulonglong)uVar25;
  uVar25 = vextractps_avx(auVar190,2);
  uVar49 = (ulonglong)uVar25;
  uVar17 = (ulonglong)auVar190._0_4_;
  uVar53 = (ulonglong)auVar190._12_4_;
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar30)),ZEXT416(*(uint *)(uVar40 + lVar31)),
                           0x10);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(uVar49 + lVar32)),0x20);
  auVar102._16_16_ = auVar74;
  auVar102._0_16_ = auVar92;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(uVar53 + lVar43)),0x30);
  auVar152._16_16_ = auVar119;
  auVar152._0_16_ = auVar196;
  auVar109 = vpslld_avx(auVar84._0_16_,4);
  auVar120 = vpand_avx(auVar16,auVar109);
  auVar77 = vpslld_avx(auVar84._16_16_,4);
  auVar92 = vpand_avx(auVar151,auVar77);
  lVar51 = param_1 + auVar120._0_4_;
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar120._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar120._4_4_)),0x10);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + auVar120._8_4_)),0x20);
  lVar52 = param_1 + auVar120._4_4_;
  lVar54 = param_1 + auVar120._8_4_;
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar92._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar92._4_4_)),0x10);
  lVar55 = param_1 + auVar92._0_4_;
  lVar57 = param_1 + auVar92._4_4_;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_1 + auVar92._8_4_)),0x20);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_1 + auVar92._12_4_)),0x30);
  lVar60 = param_1 + auVar92._8_4_;
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + auVar120._12_4_)),0x30);
  auVar74 = vinsertps_avx(ZEXT416(*(uint *)(uVar33 + lVar55)),ZEXT416(*(uint *)(uVar34 + lVar57)),
                          0x10);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(uVar35 + lVar60)),0x20);
  lVar61 = param_1 + auVar92._12_4_;
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(uVar36 + lVar61)),0x30);
  auVar92 = vinsertps_avx(ZEXT416(*(uint *)(uVar70 + lVar51)),ZEXT416(*(uint *)(uVar47 + lVar52)),
                          0x10);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar37 + lVar54)),0x20);
  lVar62 = param_1 + auVar120._12_4_;
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar38 + lVar62)),0x30);
  auVar120 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar55)),ZEXT416(*(uint *)(uVar66 + lVar57)),
                           0x10);
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar48 + lVar60)),0x20);
  auVar126._16_16_ = auVar196;
  auVar126._0_16_ = auVar119;
  auVar119 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar39 + lVar61)),0x30);
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar51)),ZEXT416(*(uint *)(uVar40 + lVar52)),
                           0x10);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(uVar49 + lVar54)),0x20);
  auVar149._16_16_ = auVar74;
  auVar149._0_16_ = auVar92;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(uVar53 + lVar62)),0x30);
  auVar135._16_16_ = auVar119;
  auVar135._0_16_ = auVar196;
  auVar101 = vmaskmovps_avx(auVar174,auVar86);
  auVar97 = vmaskmovps_avx(auVar174,auVar102);
  auVar81 = vmaskmovps_avx(auVar174,auVar152);
  auVar80 = vmaskmovps_avx(auVar174,auVar126);
  auVar82 = vmaskmovps_avx(auVar174,auVar149);
  auVar95 = vmaskmovps_avx(auVar174,auVar135);
  auVar96 = vsubps_avx(auVar101,auVar80);
  auVar99 = vsubps_avx(auVar97,auVar82);
  auVar100 = vsubps_avx(auVar81,auVar95);
  auVar136._0_4_ =
       auVar100._0_4_ * auVar100._0_4_ +
       auVar96._0_4_ * auVar96._0_4_ + auVar99._0_4_ * auVar99._0_4_;
  auVar136._4_4_ =
       auVar100._4_4_ * auVar100._4_4_ +
       auVar96._4_4_ * auVar96._4_4_ + auVar99._4_4_ * auVar99._4_4_;
  auVar136._8_4_ =
       auVar100._8_4_ * auVar100._8_4_ +
       auVar96._8_4_ * auVar96._8_4_ + auVar99._8_4_ * auVar99._8_4_;
  auVar136._12_4_ =
       auVar100._12_4_ * auVar100._12_4_ +
       auVar96._12_4_ * auVar96._12_4_ + auVar99._12_4_ * auVar99._12_4_;
  auVar136._16_4_ =
       auVar100._16_4_ * auVar100._16_4_ +
       auVar96._16_4_ * auVar96._16_4_ + auVar99._16_4_ * auVar99._16_4_;
  auVar136._20_4_ =
       auVar100._20_4_ * auVar100._20_4_ +
       auVar96._20_4_ * auVar96._20_4_ + auVar99._20_4_ * auVar99._20_4_;
  auVar136._24_4_ =
       auVar100._24_4_ * auVar100._24_4_ +
       auVar96._24_4_ * auVar96._24_4_ + auVar99._24_4_ * auVar99._24_4_;
  auVar136._28_4_ =
       auVar100._28_4_ * auVar100._28_4_ +
       auVar96._28_4_ * auVar96._28_4_ + auVar99._28_4_ * auVar99._28_4_;
  auVar98 = vsqrtps_avx(auVar136);
  auVar96 = vdivps_avx(auVar96,auVar98);
  auVar99 = vdivps_avx(auVar99,auVar98);
  auVar100 = vdivps_avx(auVar100,auVar98);
  auVar98 = vcmpps_avx(auVar136,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar103._4_4_ = __real_3f800000;
  auVar103._0_4_ = __real_3f800000;
  auVar103._8_4_ = __real_3f800000;
  auVar103._12_4_ = __real_3f800000;
  auVar103._16_4_ = __real_3f800000;
  auVar103._20_4_ = __real_3f800000;
  auVar103._24_4_ = __real_3f800000;
  auVar103._28_4_ = __real_3f800000;
  auVar96 = vblendvps_avx(auVar96,auVar103,auVar98);
  auVar87._0_4_ = ~auVar98._0_4_ & auVar99._0_4_;
  auVar87._4_4_ = ~auVar98._4_4_ & auVar99._4_4_;
  auVar87._8_4_ = ~auVar98._8_4_ & auVar99._8_4_;
  auVar87._12_4_ = ~auVar98._12_4_ & auVar99._12_4_;
  auVar87._16_4_ = ~auVar98._16_4_ & auVar99._16_4_;
  auVar87._20_4_ = ~auVar98._20_4_ & auVar99._20_4_;
  auVar87._24_4_ = ~auVar98._24_4_ & auVar99._24_4_;
  auVar87._28_4_ = ~auVar98._28_4_ & auVar99._28_4_;
  auVar127._0_4_ = ~auVar98._0_4_ & auVar100._0_4_;
  auVar127._4_4_ = ~auVar98._4_4_ & auVar100._4_4_;
  auVar127._8_4_ = ~auVar98._8_4_ & auVar100._8_4_;
  auVar127._12_4_ = ~auVar98._12_4_ & auVar100._12_4_;
  auVar127._16_4_ = ~auVar98._16_4_ & auVar100._16_4_;
  auVar127._20_4_ = ~auVar98._20_4_ & auVar100._20_4_;
  auVar127._24_4_ = ~auVar98._24_4_ & auVar100._24_4_;
  auVar127._28_4_ = ~auVar98._28_4_ & auVar100._28_4_;
  auVar96 = vmaskmovps_avx(auVar174,auVar96);
  auVar98 = vmaskmovps_avx(auVar174,auVar87);
  auVar99 = vmaskmovps_avx(auVar174,auVar127);
  lVar63 = (longlong)(int)((uint)uVar56 << 2);
  auVar100 = vmaskmovps_avx(auVar174,*(undefined1 (*) [32])(param_4 + lVar63));
  auVar110 = vdivps_avx(auVar103,auVar100);
  auVar100 = vcmpps_avx(auVar100,
                        ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,1);
  auVar133._0_4_ = uVar172 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
  ;
  auVar133._4_4_ = uVar176 & _UNK_150b50d84;
  auVar133._8_4_ = uVar178 & _UNK_150b50d88;
  auVar133._12_4_ = uVar180 & _UNK_150b50d8c;
  auVar100 = vblendvps_avx(auVar110,auVar103,auVar100);
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar182 & _UNK_150b50d90) + lVar44)),
                           ZEXT416(*(uint *)((ulonglong)(uVar184 & _UNK_150b50d94) + lVar45)),0x10);
  uVar59 = vextractps_avx(auVar133,1);
  lVar44 = CONCAT44((int)((ulonglong)lVar52 >> 0x20),uVar59);
  uVar59 = vextractps_avx(auVar133,2);
  lVar45 = CONCAT44((int)((ulonglong)lVar55 >> 0x20),uVar59);
  uVar59 = vextractps_avx(auVar133,3);
  lVar64 = CONCAT44((int)((ulonglong)lVar57 >> 0x20),uVar59);
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar182 & _UNK_150b50d90) + lVar55)),
                           ZEXT416(*(uint *)((ulonglong)(uVar184 & _UNK_150b50d94) + lVar57)),0x10);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)((ulonglong)(uVar186 & _UNK_150b50d98) + lVar46
                                                     )),0x20);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)((ulonglong)(uVar186 & _UNK_150b50d98) + lVar60
                                                     )),0x20);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)((ulonglong)(uVar188 & _UNK_150b50d9c) + lVar50
                                                     )),0x30);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)((ulonglong)(uVar188 & _UNK_150b50d9c) + lVar61
                                                     )),0x30);
  auVar74 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar133._0_4_ + lVar30)),
                          ZEXT416(*(uint *)(lVar44 + lVar31)),0x10);
  auVar92 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar133._0_4_ + lVar51)),
                          ZEXT416(*(uint *)(lVar44 + lVar52)),0x10);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(lVar45 + lVar32)),0x20);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(lVar45 + lVar54)),0x20);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(lVar64 + lVar43)),0x30);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(lVar64 + lVar62)),0x30);
  auVar15._4_4_ = auVar83._20_4_ * 3;
  auVar15._0_4_ = auVar83._16_4_ * 3;
  auVar15._8_4_ = auVar83._24_4_ * 3;
  auVar15._12_4_ = auVar83._28_4_ * 3;
  auVar75 = vpand_avx(auVar151,auVar15);
  lVar30 = param_2 + (longlong)auVar75._0_4_ * 4;
  lVar31 = param_2 + (longlong)auVar75._4_4_ * 4;
  auVar120 = vinsertps_avx(ZEXT416(*(uint *)(uVar33 + lVar30)),ZEXT416(*(uint *)(uVar34 + lVar31)),
                           0x10);
  auVar130 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar30)),ZEXT416(*(uint *)(uVar66 + lVar31)),
                           0x10);
  auVar93._4_4_ = auVar84._20_4_ * 3;
  auVar93._0_4_ = auVar84._16_4_ * 3;
  auVar93._8_4_ = auVar84._24_4_ * 3;
  auVar93._12_4_ = auVar84._28_4_ * 3;
  auVar133 = vpand_avx(auVar151,auVar93);
  lVar30 = param_2 + (longlong)auVar133._0_4_ * 4;
  lVar31 = param_2 + (longlong)auVar133._4_4_ * 4;
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)(uVar33 + lVar30)),ZEXT416(*(uint *)(uVar34 + lVar31)),
                          0x10);
  auVar107 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar30)),ZEXT416(*(uint *)(uVar66 + lVar31)),
                           0x10);
  auVar108 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar75._0_4_ * 4)),
                           ZEXT416(*(uint *)(param_2 + (longlong)auVar75._4_4_ * 4)),0x10);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_2 + (longlong)auVar75._8_4_ * 4)),0x20);
  local_2e0 = auVar83._0_4_;
  iStack_2dc = auVar83._4_4_;
  iStack_2d8 = auVar83._8_4_;
  iStack_2d4 = auVar83._12_4_;
  auVar76._4_4_ = iStack_2dc * 3;
  auVar76._0_4_ = local_2e0 * 3;
  auVar76._8_4_ = iStack_2d8 * 3;
  auVar76._12_4_ = iStack_2d4 * 3;
  lVar30 = param_2 + (longlong)auVar75._8_4_ * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar35 + lVar30)),0x20);
  auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)(uVar48 + lVar30)),0x20);
  auVar190 = vpand_avx(auVar16,auVar76);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_2 + (longlong)auVar75._12_4_ * 4)),0x30)
  ;
  lVar30 = param_2 + (longlong)auVar75._12_4_ * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar36 + lVar30)),0x30);
  auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)(uVar39 + lVar30)),0x30);
  lVar30 = param_2 + (longlong)auVar190._0_4_ * 4;
  auVar93 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar190._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar190._4_4_ * 4)),0x10);
  lVar31 = param_2 + (longlong)auVar190._4_4_ * 4;
  auVar76 = vinsertps_avx(ZEXT416(*(uint *)(uVar70 + lVar30)),ZEXT416(*(uint *)(uVar47 + lVar31)),
                          0x10);
  auVar75 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar30)),ZEXT416(*(uint *)(uVar40 + lVar31)),
                          0x10);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_2 + (longlong)auVar190._8_4_ * 4)),0x20);
  lVar30 = param_2 + (longlong)auVar190._8_4_ * 4;
  auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(uVar37 + lVar30)),0x20);
  auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(uVar49 + lVar30)),0x20);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_2 + (longlong)auVar190._12_4_ * 4)),0x30);
  lVar30 = param_2 + (longlong)auVar190._12_4_ * 4;
  auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(uVar38 + lVar30)),0x30);
  auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(uVar53 + lVar30)),0x30);
  auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar133._0_4_ * 4)),
                           ZEXT416(*(uint *)(param_2 + (longlong)auVar133._4_4_ * 4)),0x10);
  auVar137._16_16_ = auVar108;
  auVar137._0_16_ = auVar93;
  auVar108 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + (longlong)auVar133._8_4_ * 4)),0x20)
  ;
  auVar114._16_16_ = auVar120;
  auVar114._0_16_ = auVar76;
  lVar30 = param_2 + (longlong)auVar133._8_4_ * 4;
  auVar120 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(uVar35 + lVar30)),0x20);
  auVar163._16_16_ = auVar130;
  auVar163._0_16_ = auVar75;
  auVar130 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_2 + (longlong)auVar133._12_4_ * 4)),0x30
                          );
  lVar31 = param_2 + (longlong)auVar133._12_4_ * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar36 + lVar31)),0x30);
  local_2c0 = auVar84._0_4_;
  iStack_2bc = auVar84._4_4_;
  iStack_2b8 = auVar84._8_4_;
  iStack_2b4 = auVar84._12_4_;
  auVar75._4_4_ = iStack_2bc * 3;
  auVar75._0_4_ = local_2c0 * 3;
  auVar75._8_4_ = iStack_2b8 * 3;
  auVar75._12_4_ = iStack_2b4 * 3;
  auVar108 = vpand_avx(auVar16,auVar75);
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar108._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar108._4_4_ * 4)),0x10);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_2 + (longlong)auVar108._8_4_ * 4)),0x20);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_2 + (longlong)auVar108._12_4_ * 4)),0x30);
  lVar32 = param_2 + (longlong)auVar108._0_4_ * 4;
  lVar43 = param_2 + (longlong)auVar108._4_4_ * 4;
  lVar44 = param_2 + (longlong)auVar108._8_4_ * 4;
  param_2 = param_2 + (longlong)auVar108._12_4_ * 4;
  auVar108 = vinsertps_avx(ZEXT416(*(uint *)(uVar70 + lVar32)),ZEXT416(*(uint *)(uVar47 + lVar43)),
                           0x10);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(uVar37 + lVar44)),0x20);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(uVar38 + param_2)),0x30);
  auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar48 + lVar30)),0x20);
  auVar93 = vpmovsxbd_avx(auVar94);
  auVar93 = vpslld_avx(auVar93,2);
  auVar76 = vpand_avx(auVar16,auVar93);
  auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar39 + lVar31)),0x30);
  auVar93 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar32)),ZEXT416(*(uint *)(uVar40 + lVar43)),
                          0x10);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(uVar49 + lVar44)),0x20);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(uVar53 + param_2)),0x30);
  auVar94 = vpshufd_avx(auVar94,0x55);
  auVar94 = vpmovsxbd_avx(auVar94);
  auVar94 = vpslld_avx(auVar94,2);
  auVar75 = vpand_avx(auVar151,auVar94);
  auVar94 = vinsertps_avx(ZEXT416(*(uint *)(param_9 + auVar75._0_4_)),
                          ZEXT416(*(uint *)(param_9 + auVar75._4_4_)),0x10);
  auVar190 = vpmovsxbd_avx(auVar193);
  auVar190 = vpslld_avx(auVar190,2);
  auVar190 = vpand_avx(auVar16,auVar190);
  auVar193 = vpshufd_avx(auVar193,0x55);
  auVar193 = vpmovsxbd_avx(auVar193);
  auVar193 = vpslld_avx(auVar193,2);
  auVar133 = vpand_avx(auVar151,auVar193);
  auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)(param_9 + auVar75._8_4_)),0x20);
  auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)(param_9 + auVar75._12_4_)),0x30);
  auVar193 = vinsertps_avx(ZEXT416(*(uint *)(param_9 + auVar76._0_4_)),
                           ZEXT416(*(uint *)(param_9 + auVar76._4_4_)),0x10);
  auVar193 = vinsertps_avx(auVar193,ZEXT416(*(uint *)(param_9 + auVar76._8_4_)),0x20);
  auVar193 = vinsertps_avx(auVar193,ZEXT416(*(uint *)(param_9 + auVar76._12_4_)),0x30);
  auVar76 = vinsertps_avx(ZEXT416(*(uint *)(param_12 + auVar133._0_4_)),
                          ZEXT416(*(uint *)(param_12 + auVar133._4_4_)),0x10);
  auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_12 + auVar133._8_4_)),0x20);
  auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_12 + auVar133._12_4_)),0x30);
  auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_12 + auVar190._0_4_)),
                          ZEXT416(*(uint *)(param_12 + auVar190._4_4_)),0x10);
  auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_12 + auVar190._8_4_)),0x20);
  auVar104._16_16_ = auVar94;
  auVar104._0_16_ = auVar193;
  auVar94 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_12 + auVar190._12_4_)),0x30);
  fVar106 = auVar92._0_4_;
  fVar150 = auVar74._0_4_;
  auVar88._0_4_ = fVar150 + fVar106;
  fVar116 = auVar92._4_4_;
  fVar155 = auVar74._4_4_;
  auVar88._4_4_ = fVar155 + fVar116;
  fVar117 = auVar92._8_4_;
  fVar156 = auVar74._8_4_;
  auVar88._8_4_ = fVar156 + fVar117;
  fVar118 = auVar92._12_4_;
  fVar157 = auVar74._12_4_;
  auVar88._12_4_ = fVar157 + fVar118;
  fVar11 = auVar196._0_4_;
  fVar158 = auVar119._0_4_;
  auVar88._16_4_ = fVar158 + fVar11;
  fVar12 = auVar196._4_4_;
  fVar159 = auVar119._4_4_;
  auVar88._20_4_ = fVar159 + fVar12;
  fVar13 = auVar196._8_4_;
  fVar160 = auVar119._8_4_;
  auVar88._24_4_ = fVar160 + fVar13;
  fVar14 = auVar196._12_4_;
  fVar161 = auVar119._12_4_;
  auVar88._28_4_ = fVar161 + fVar14;
  auVar83 = vdivps_avx(auVar104,auVar88);
  auVar83 = vsqrtps_avx(auVar83);
  local_420 = auVar100._0_4_;
  fStack_41c = auVar100._4_4_;
  fStack_418 = auVar100._8_4_;
  fStack_414 = auVar100._12_4_;
  fStack_410 = auVar100._16_4_;
  fStack_40c = auVar100._20_4_;
  fStack_408 = auVar100._24_4_;
  fStack_404 = auVar100._28_4_;
  auVar193 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar132 = auVar193._0_4_ * (auVar94._0_4_ + auVar94._0_4_) * auVar83._0_4_ * local_420;
  fVar139 = auVar193._4_4_ * (auVar94._4_4_ + auVar94._4_4_) * auVar83._4_4_ * fStack_41c;
  fVar140 = auVar193._8_4_ * (auVar94._8_4_ + auVar94._8_4_) * auVar83._8_4_ * fStack_418;
  fVar141 = auVar193._12_4_ * (auVar94._12_4_ + auVar94._12_4_) * auVar83._12_4_ * fStack_414;
  fVar142 = auVar193._0_4_ * (auVar76._0_4_ + auVar76._0_4_) * auVar83._16_4_ * fStack_410;
  fVar143 = auVar193._4_4_ * (auVar76._4_4_ + auVar76._4_4_) * auVar83._20_4_ * fStack_40c;
  fVar144 = auVar193._8_4_ * (auVar76._8_4_ + auVar76._8_4_) * auVar83._24_4_ * fStack_408;
  fVar145 = auVar193._12_4_ * (auVar76._12_4_ + auVar76._12_4_) * auVar83._28_4_ * fStack_404;
  auVar83 = vsubps_avx(auVar101,auVar137);
  auVar83 = vsubps_avx(auVar83,auVar80);
  auVar84 = vsubps_avx(auVar97,auVar114);
  auVar84 = vsubps_avx(auVar84,auVar82);
  auVar100 = vsubps_avx(auVar81,auVar163);
  auVar100 = vsubps_avx(auVar100,auVar95);
  local_260 = auVar96._0_4_;
  fStack_25c = auVar96._4_4_;
  fStack_258 = auVar96._8_4_;
  fStack_254 = auVar96._12_4_;
  fStack_250 = auVar96._16_4_;
  fStack_24c = auVar96._20_4_;
  fStack_248 = auVar96._24_4_;
  fStack_244 = auVar96._28_4_;
  local_240 = auVar98._0_4_;
  fStack_23c = auVar98._4_4_;
  fStack_238 = auVar98._8_4_;
  fStack_234 = auVar98._12_4_;
  fStack_230 = auVar98._16_4_;
  fStack_22c = auVar98._20_4_;
  fStack_228 = auVar98._24_4_;
  fStack_224 = auVar98._28_4_;
  local_220 = auVar99._0_4_;
  fStack_21c = auVar99._4_4_;
  fStack_218 = auVar99._8_4_;
  fStack_214 = auVar99._12_4_;
  fStack_210 = auVar99._16_4_;
  fStack_20c = auVar99._20_4_;
  fStack_208 = auVar99._24_4_;
  fStack_204 = auVar99._28_4_;
  auVar138._0_4_ =
       (float)((uint)fVar132 ^
              ___ymm_8000000080000000800000008000000080000000800000008000000080000000) *
       ((auVar93._0_4_ + auVar100._0_4_) * local_220 +
       local_260 * (auVar15._0_4_ + auVar83._0_4_) + (auVar108._0_4_ + auVar84._0_4_) * local_240);
  auVar138._4_4_ =
       (float)((uint)fVar139 ^ _UNK_150b50f64) *
       ((auVar93._4_4_ + auVar100._4_4_) * fStack_21c +
       fStack_25c * (auVar15._4_4_ + auVar83._4_4_) + (auVar108._4_4_ + auVar84._4_4_) * fStack_23c)
  ;
  auVar138._8_4_ =
       (float)((uint)fVar140 ^ _UNK_150b50f68) *
       ((auVar93._8_4_ + auVar100._8_4_) * fStack_218 +
       fStack_258 * (auVar15._8_4_ + auVar83._8_4_) + (auVar108._8_4_ + auVar84._8_4_) * fStack_238)
  ;
  auVar138._12_4_ =
       (float)((uint)fVar141 ^ _UNK_150b50f6c) *
       ((auVar93._12_4_ + auVar100._12_4_) * fStack_214 +
       fStack_254 * (auVar15._12_4_ + auVar83._12_4_) +
       (auVar108._12_4_ + auVar84._12_4_) * fStack_234);
  auVar138._16_4_ =
       (float)((uint)fVar142 ^ _UNK_150b50f70) *
       ((auVar107._0_4_ + auVar100._16_4_) * fStack_210 +
       fStack_250 * (auVar130._0_4_ + auVar83._16_4_) +
       (auVar120._0_4_ + auVar84._16_4_) * fStack_230);
  auVar138._20_4_ =
       (float)((uint)fVar143 ^ _UNK_150b50f74) *
       ((auVar107._4_4_ + auVar100._20_4_) * fStack_20c +
       fStack_24c * (auVar130._4_4_ + auVar83._20_4_) +
       (auVar120._4_4_ + auVar84._20_4_) * fStack_22c);
  auVar138._24_4_ =
       (float)((uint)fVar144 ^ _UNK_150b50f78) *
       ((auVar107._8_4_ + auVar100._24_4_) * fStack_208 +
       fStack_248 * (auVar130._8_4_ + auVar83._24_4_) +
       (auVar120._8_4_ + auVar84._24_4_) * fStack_228);
  auVar138._28_4_ =
       (float)((uint)fVar145 ^ _UNK_150b50f7c) *
       ((auVar107._12_4_ + auVar100._28_4_) * fStack_204 +
       fStack_244 * (auVar130._12_4_ + auVar83._28_4_) +
       (auVar120._12_4_ + auVar84._28_4_) * fStack_224);
  auVar89._0_4_ =
       auVar88._0_4_ * fVar132 +
       ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000;
  auVar89._4_4_ = auVar88._4_4_ * fVar139 + _UNK_150b50ce4;
  auVar89._8_4_ = auVar88._8_4_ * fVar140 + _UNK_150b50ce8;
  auVar89._12_4_ = auVar88._12_4_ * fVar141 + _UNK_150b50cec;
  auVar89._16_4_ = auVar88._16_4_ * fVar142 + _UNK_150b50cf0;
  auVar89._20_4_ = auVar88._20_4_ * fVar143 + _UNK_150b50cf4;
  auVar89._24_4_ = auVar88._24_4_ * fVar144 + _UNK_150b50cf8;
  auVar89._28_4_ = auVar88._28_4_ * fVar145 + _UNK_150b50cfc;
  auVar84 = vmaskmovps_avx(auVar174,*(undefined1 (*) [32])(param_5 + lVar63));
  auVar83 = vsubps_avx(auVar138,auVar84);
  auVar83 = vdivps_avx(auVar83,auVar89);
  fVar132 = auVar83._0_4_;
  auVar90._0_4_ = fVar132 + auVar84._0_4_;
  fVar139 = auVar83._4_4_;
  auVar90._4_4_ = fVar139 + auVar84._4_4_;
  fVar140 = auVar83._8_4_;
  auVar90._8_4_ = fVar140 + auVar84._8_4_;
  fVar141 = auVar83._12_4_;
  auVar90._12_4_ = fVar141 + auVar84._12_4_;
  fVar142 = auVar83._16_4_;
  auVar90._16_4_ = fVar142 + auVar84._16_4_;
  fVar143 = auVar83._20_4_;
  auVar90._20_4_ = fVar143 + auVar84._20_4_;
  fVar144 = auVar83._24_4_;
  auVar90._24_4_ = fVar144 + auVar84._24_4_;
  fVar145 = auVar83._28_4_;
  auVar90._28_4_ = fVar145 + auVar84._28_4_;
  auVar83 = vmaskmovps_avx(auVar174,auVar90);
  *(undefined1 (*) [32])(param_5 + lVar63) = auVar83;
  auVar151._0_4_ = auVar101._0_4_ + fVar150 * local_260 * fVar132;
  auVar151._4_4_ = auVar101._4_4_ + fVar155 * fStack_25c * fVar139;
  auVar151._8_4_ = auVar101._8_4_ + fVar156 * fStack_258 * fVar140;
  auVar151._12_4_ = auVar101._12_4_ + fVar157 * fStack_254 * fVar141;
  auVar153._16_4_ = auVar101._16_4_ + fVar158 * fStack_250 * fVar142;
  auVar153._0_16_ = auVar151;
  auVar153._20_4_ = auVar101._20_4_ + fVar159 * fStack_24c * fVar143;
  auVar153._24_4_ = auVar101._24_4_ + fVar160 * fStack_248 * fVar144;
  auVar153._28_4_ = auVar101._28_4_ + fVar161 * fStack_244 * fVar145;
  auVar94 = auVar153._16_16_;
  iVar146 = auVar79._0_4_;
  iVar29 = auVar79._4_4_;
  iVar26 = auVar79._8_4_;
  iVar27 = auVar79._12_4_;
  iVar73 = auVar78._0_4_;
  if ((uVar42 & 1) != 0) {
    *(float *)(param_1 + iVar146) = auVar151._0_4_;
  }
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar151,1);
    *(undefined4 *)(param_1 + iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar151,2);
    *(undefined4 *)(param_1 + iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar151,3);
    *(undefined4 *)(param_1 + iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(float *)(param_1 + iVar73) = auVar153._16_4_;
  }
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar78,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar78,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
  }
  uVar24 = fVar161 * fVar145 * fStack_224;
  uVar23 = fVar160 * fVar144 * fStack_228;
  uVar22 = fVar159 * fVar143 * fStack_22c;
  uVar21 = fVar158 * fVar142 * fStack_230;
  uVar20 = fVar157 * fVar141 * fStack_234;
  uVar19 = fVar156 * fVar140 * fStack_238;
  uVar18 = fVar155 * fVar139 * fStack_23c;
  uVar59 = fVar150 * fVar132 * local_240;
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar78,3);
    uVar10 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + iVar28) = uVar10;
    auVar154._0_4_ = auVar97._0_4_ + (float)uVar59;
    auVar154._4_4_ = auVar97._4_4_ + (float)uVar18;
    auVar154._8_4_ = auVar97._8_4_ + (float)uVar19;
    auVar154._12_4_ = auVar97._12_4_ + (float)uVar20;
    auVar154._16_4_ = auVar97._16_4_ + (float)uVar21;
    auVar154._20_4_ = auVar97._20_4_ + (float)uVar22;
    auVar154._24_4_ = auVar97._24_4_ + (float)uVar23;
    auVar154._28_4_ = auVar97._28_4_ + (float)uVar24;
  }
  else {
    auVar154._0_4_ = auVar97._0_4_ + (float)uVar59;
    auVar154._4_4_ = auVar97._4_4_ + (float)uVar18;
    auVar154._8_4_ = auVar97._8_4_ + (float)uVar19;
    auVar154._12_4_ = auVar97._12_4_ + (float)uVar20;
    auVar154._16_4_ = auVar97._16_4_ + (float)uVar21;
    auVar154._20_4_ = auVar97._20_4_ + (float)uVar22;
    auVar154._24_4_ = auVar97._24_4_ + (float)uVar23;
    auVar154._28_4_ = auVar97._28_4_ + (float)uVar24;
  }
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar146) = auVar154._0_4_;
  }
  auVar94 = auVar154._0_16_;
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar73) = auVar154._16_4_;
  }
  auVar94 = auVar154._16_16_;
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar78,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar78,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
  }
  uVar24 = fVar161 * fVar145 * fStack_204;
  uVar23 = fVar160 * fVar144 * fStack_208;
  uVar22 = fVar159 * fVar143 * fStack_20c;
  uVar21 = fVar158 * fVar142 * fStack_210;
  uVar20 = fVar157 * fVar141 * fStack_214;
  uVar19 = fVar156 * fVar140 * fStack_218;
  uVar18 = fVar155 * fVar139 * fStack_21c;
  uVar59 = fVar150 * fVar132 * local_220;
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar78,3);
    uVar10 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar10;
    auVar91._0_4_ = auVar81._0_4_ + (float)uVar59;
    auVar91._4_4_ = auVar81._4_4_ + (float)uVar18;
    auVar91._8_4_ = auVar81._8_4_ + (float)uVar19;
    auVar91._12_4_ = auVar81._12_4_ + (float)uVar20;
    auVar91._16_4_ = auVar81._16_4_ + (float)uVar21;
    auVar91._20_4_ = auVar81._20_4_ + (float)uVar22;
    auVar91._24_4_ = auVar81._24_4_ + (float)uVar23;
    auVar91._28_4_ = auVar81._28_4_ + (float)uVar24;
  }
  else {
    auVar91._0_4_ = auVar81._0_4_ + (float)uVar59;
    auVar91._4_4_ = auVar81._4_4_ + (float)uVar18;
    auVar91._8_4_ = auVar81._8_4_ + (float)uVar19;
    auVar91._12_4_ = auVar81._12_4_ + (float)uVar20;
    auVar91._16_4_ = auVar81._16_4_ + (float)uVar21;
    auVar91._20_4_ = auVar81._20_4_ + (float)uVar22;
    auVar91._24_4_ = auVar81._24_4_ + (float)uVar23;
    auVar91._28_4_ = auVar81._28_4_ + (float)uVar24;
  }
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar146) = auVar91._0_4_;
  }
  auVar94 = auVar91._0_16_;
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar73) = auVar91._16_4_;
  }
  auVar94 = auVar91._16_16_;
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar78,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar78,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar78,3);
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar146) = fVar150;
  }
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar73) = fVar158;
  }
  if ((uVar42 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar78,1);
    uVar59 = vextractps_avx(auVar119,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar78,2);
    uVar59 = vextractps_avx(auVar119,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((char)bVar41 < '\0') {
    iVar29 = vextractps_avx(auVar78,3);
    uVar59 = vextractps_avx(auVar119,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  auVar115._0_4_ = fVar106 * local_260 * fVar132;
  auVar115._4_4_ = fVar116 * fStack_25c * fVar139;
  auVar115._8_4_ = fVar117 * fStack_258 * fVar140;
  auVar115._12_4_ = fVar118 * fStack_254 * fVar141;
  auVar115._16_4_ = fVar11 * fStack_250 * fVar142;
  auVar115._20_4_ = fVar12 * fStack_24c * fVar143;
  auVar115._24_4_ = fVar13 * fStack_248 * fVar144;
  auVar115._28_4_ = fVar14 * fStack_244 * fVar145;
  auVar83 = vsubps_avx(auVar80,auVar115);
  iVar73 = auVar109._0_4_;
  auVar94 = auVar83._0_16_;
  auVar119 = auVar83._16_16_;
  iVar29 = auVar109._4_4_;
  iVar26 = auVar109._8_4_;
  iVar27 = auVar109._12_4_;
  iVar146 = auVar77._0_4_;
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + iVar73) = auVar83._0_4_;
  }
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + iVar146) = auVar83._16_4_;
  }
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar77,1);
    uVar59 = vextractps_avx(auVar119,1);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) == 0) {
    auVar128._0_4_ = fVar106 * fVar132 * local_240;
    auVar128._4_4_ = fVar116 * fVar139 * fStack_23c;
    auVar128._8_4_ = fVar117 * fVar140 * fStack_238;
    auVar128._12_4_ = fVar118 * fVar141 * fStack_234;
    auVar128._16_4_ = fVar11 * fVar142 * fStack_230;
    auVar128._20_4_ = fVar12 * fVar143 * fStack_22c;
    auVar128._24_4_ = fVar13 * fVar144 * fStack_228;
    auVar128._28_4_ = fVar14 * fVar145 * fStack_224;
  }
  else {
    iVar28 = vextractps_avx(auVar77,2);
    uVar59 = vextractps_avx(auVar119,2);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
    auVar128._0_4_ = fVar106 * fVar132 * local_240;
    auVar128._4_4_ = fVar116 * fVar139 * fStack_23c;
    auVar128._8_4_ = fVar117 * fVar140 * fStack_238;
    auVar128._12_4_ = fVar118 * fVar141 * fStack_234;
    auVar128._16_4_ = fVar11 * fVar142 * fStack_230;
    auVar128._20_4_ = fVar12 * fVar143 * fStack_22c;
    auVar128._24_4_ = fVar13 * fVar144 * fStack_228;
    auVar128._28_4_ = fVar14 * fVar145 * fStack_224;
  }
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar77,3);
    uVar59 = vextractps_avx(auVar119,3);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
    auVar83 = vsubps_avx(auVar82,auVar128);
  }
  else {
    auVar83 = vsubps_avx(auVar82,auVar128);
  }
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar73) = auVar83._0_4_;
  }
  auVar94 = auVar83._0_16_;
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar146) = auVar83._16_4_;
  }
  auVar94 = auVar83._16_16_;
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar77,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) == 0) {
    auVar105._0_4_ = fVar106 * fVar132 * local_220;
    auVar105._4_4_ = fVar116 * fVar139 * fStack_21c;
    auVar105._8_4_ = fVar117 * fVar140 * fStack_218;
    auVar105._12_4_ = fVar118 * fVar141 * fStack_214;
    auVar105._16_4_ = fVar11 * fVar142 * fStack_210;
    auVar105._20_4_ = fVar12 * fVar143 * fStack_20c;
    auVar105._24_4_ = fVar13 * fVar144 * fStack_208;
    auVar105._28_4_ = fVar14 * fVar145 * fStack_204;
  }
  else {
    iVar28 = vextractps_avx(auVar77,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
    auVar105._0_4_ = fVar106 * fVar132 * local_220;
    auVar105._4_4_ = fVar116 * fVar139 * fStack_21c;
    auVar105._8_4_ = fVar117 * fVar140 * fStack_218;
    auVar105._12_4_ = fVar118 * fVar141 * fStack_214;
    auVar105._16_4_ = fVar11 * fVar142 * fStack_210;
    auVar105._20_4_ = fVar12 * fVar143 * fStack_20c;
    auVar105._24_4_ = fVar13 * fVar144 * fStack_208;
    auVar105._28_4_ = fVar14 * fVar145 * fStack_204;
  }
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar77,3);
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
    auVar83 = vsubps_avx(auVar95,auVar105);
  }
  else {
    auVar83 = vsubps_avx(auVar95,auVar105);
  }
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar73) = auVar83._0_4_;
  }
  auVar94 = auVar83._0_16_;
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar146) = auVar83._16_4_;
  }
  auVar94 = auVar83._16_16_;
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar77,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar77,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar77,3);
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar73) = fVar106;
  }
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar92,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar92,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar92,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar146) = fVar11;
  }
  if ((uVar42 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar77,1);
    uVar59 = vextractps_avx(auVar196,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar77,2);
    uVar59 = vextractps_avx(auVar196,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((char)bVar41 < '\0') {
    iVar29 = vextractps_avx(auVar77,3);
    *(float *)(param_1 + 0xc + (longlong)iVar29) = fVar14;
  }
  return;
}

// ApplyXPBDSpringConstraints_avx @ 14092d7e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraints_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,uint param_7)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  float fVar40;
  undefined1 auVar42 [16];
  float fVar51;
  float fVar53;
  float fVar55;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar61 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar71 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  float fVar80;
  int iVar81;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  uint uVar94;
  undefined1 auVar95 [16];
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  undefined1 auVar96 [32];
  undefined1 auVar102 [16];
  float fVar106;
  float fVar113;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar111;
  float fVar112;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar109 [32];
  float fVar117;
  undefined1 auVar110 [32];
  float fVar118;
  undefined1 auVar119 [16];
  float fVar123;
  float fVar124;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  float fVar125;
  float fVar129;
  undefined1 auVar122 [32];
  undefined1 auVar130 [16];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  float fVar133;
  float fVar137;
  float fVar138;
  undefined1 auVar134 [16];
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  float fVar143;
  float fVar144;
  uint uVar145;
  float fVar147;
  uint uVar148;
  float fVar149;
  uint uVar150;
  float fVar151;
  uint uVar152;
  float fVar153;
  uint uVar154;
  float fVar155;
  uint uVar156;
  float fVar157;
  uint uVar158;
  float fVar159;
  undefined1 auVar146 [32];
  uint uVar160;
  int iVar161;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  uint uVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  undefined1 auVar171 [32];
  uint uVar176;
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
  int iVar12;
  float fVar41;
  undefined1 auVar47 [32];
  float fVar52;
  float fVar54;
  float fVar56;
  undefined1 auVar97 [32];
  
  uVar19 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar19 = param_7;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar61 = ZEXT416((uint)(param_5 * param_6 * param_5));
    auVar61 = vshufps_avx(auVar61,auVar61,0);
    fVar41 = auVar61._0_4_;
    fVar40 = (float)((uint)fVar41 ^
                    ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
    fVar52 = auVar61._4_4_;
    fVar51 = (float)((uint)fVar52 ^ _UNK_150b50f64);
    fVar54 = auVar61._8_4_;
    fVar53 = (float)((uint)fVar54 ^ _UNK_150b50f68);
    fVar56 = auVar61._12_4_;
    fVar55 = (float)((uint)fVar56 ^ _UNK_150b50f6c);
    fVar57 = (float)((uint)fVar41 ^ _UNK_150b50f70);
    fVar58 = (float)((uint)fVar52 ^ _UNK_150b50f74);
    fVar59 = (float)((uint)fVar54 ^ _UNK_150b50f78);
    fVar60 = (float)((uint)fVar56 ^ _UNK_150b50f7c);
    uVar15 = 0;
    uVar36 = 0;
    do {
      auVar64._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar36 * 2);
      auVar64._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar36 * 2);
      auVar43._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar36 * 2);
      auVar43._0_16_ = *(undefined1 (*) [16])(param_2 + uVar36 * 2);
      auVar47 = vshufps_avx(auVar43,auVar64,0x88);
      auVar43 = vshufps_avx(auVar43,auVar64,0xdd);
      auVar61 = vpslld_avx(auVar47._16_16_,4);
      auVar72 = vpslld_avx(auVar47._0_16_,4);
      lVar31 = (longlong)auVar72._0_4_;
      lVar34 = (longlong)auVar72._4_4_;
      lVar24 = (longlong)auVar72._8_4_;
      lVar26 = (longlong)auVar72._12_4_;
      lVar20 = (longlong)auVar61._0_4_;
      lVar16 = (longlong)auVar61._4_4_;
      lVar22 = (longlong)auVar61._8_4_;
      lVar37 = (longlong)auVar61._12_4_;
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + lVar16)),0x10);
      auVar72 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar31)),
                              ZEXT416(*(uint *)(param_1 + lVar34)),0x10);
      auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + lVar24)),0x20);
      auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar31)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar34)),0x10);
      auVar62 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar16)),0x10);
      auVar71 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar31)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar34)),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x20);
      uVar10 = *(uint *)(param_1 + 0xc + lVar31);
      uVar30 = *(uint *)(param_1 + 0xc + lVar34);
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar16)),0x10);
      uVar33 = *(uint *)(param_1 + 0xc + lVar24);
      uVar145 = *(uint *)(param_1 + 0xc + lVar26);
      auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x20);
      uVar148 = *(uint *)(param_1 + 0xc + lVar20);
      auVar130 = vpslld_avx(auVar43._16_16_,4);
      uVar150 = *(uint *)(param_1 + 0xc + lVar16);
      auVar134 = vpslld_avx(auVar43._0_16_,4);
      lVar17 = (longlong)auVar134._0_4_;
      uVar152 = *(uint *)(param_1 + 0xc + lVar22);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + lVar22)),0x20);
      auVar95 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + lVar26)),0x30);
      lVar29 = (longlong)auVar134._4_4_;
      lVar35 = (longlong)auVar134._8_4_;
      auVar72 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 4 + lVar26)),0x30);
      lVar25 = (longlong)auVar134._12_4_;
      lVar21 = (longlong)auVar130._0_4_;
      lVar39 = (longlong)auVar130._4_4_;
      lVar38 = (longlong)auVar130._8_4_;
      auVar62 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x20);
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar21)),
                               ZEXT416(*(uint *)(param_1 + lVar39)),0x10);
      auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + 8 + lVar26)),0x30);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + lVar38)),0x20);
      lVar23 = (longlong)auVar130._12_4_;
      auVar130 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + lVar37)),0x30);
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar17)),
                              ZEXT416(*(uint *)(param_1 + lVar29)),0x10);
      auVar134 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + 4 + lVar37)),0x30);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + lVar35)),0x20);
      auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(param_1 + 8 + lVar37)),0x30);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + lVar25)),0x30);
      auVar72 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + lVar23)),0x30);
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x10);
      auVar109._16_16_ = auVar130;
      auVar109._0_16_ = auVar95;
      auVar107 = vinsertps_avx(ZEXT416(uVar148),ZEXT416(uVar150),0x10);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x20);
      auVar168._16_16_ = auVar134;
      auVar168._0_16_ = auVar42;
      auVar63 = vinsertps_avx(ZEXT416(uVar10),ZEXT416(uVar30),0x10);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x30);
      auVar169._16_16_ = auVar62;
      auVar169._0_16_ = auVar71;
      auVar108 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar17)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar29)),0x10);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(uVar152),0x20);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(uVar33),0x20);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x20);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(uVar145),0x30);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x30);
      uVar154 = *(uint *)(param_1 + 0xc + lVar37);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(uVar154),0x30);
      auVar119 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar17)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar29)),0x10);
      auVar170._16_16_ = auVar72;
      auVar170._0_16_ = auVar61;
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x10);
      auVar72 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x20);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x20);
      auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x30);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x30);
      auVar73._16_16_ = auVar102;
      auVar73._0_16_ = auVar108;
      auVar44._16_16_ = auVar61;
      auVar44._0_16_ = auVar72;
      auVar47 = vsubps_avx(auVar109,auVar170);
      auVar64 = vsubps_avx(auVar168,auVar73);
      auVar65 = vsubps_avx(auVar169,auVar44);
      auVar131._0_4_ =
           auVar47._0_4_ * auVar47._0_4_ + auVar64._0_4_ * auVar64._0_4_ +
           auVar65._0_4_ * auVar65._0_4_;
      auVar131._4_4_ =
           auVar47._4_4_ * auVar47._4_4_ + auVar64._4_4_ * auVar64._4_4_ +
           auVar65._4_4_ * auVar65._4_4_;
      auVar131._8_4_ =
           auVar47._8_4_ * auVar47._8_4_ + auVar64._8_4_ * auVar64._8_4_ +
           auVar65._8_4_ * auVar65._8_4_;
      auVar131._12_4_ =
           auVar47._12_4_ * auVar47._12_4_ + auVar64._12_4_ * auVar64._12_4_ +
           auVar65._12_4_ * auVar65._12_4_;
      auVar131._16_4_ =
           auVar47._16_4_ * auVar47._16_4_ + auVar64._16_4_ * auVar64._16_4_ +
           auVar65._16_4_ * auVar65._16_4_;
      auVar131._20_4_ =
           auVar47._20_4_ * auVar47._20_4_ + auVar64._20_4_ * auVar64._20_4_ +
           auVar65._20_4_ * auVar65._20_4_;
      auVar131._24_4_ =
           auVar47._24_4_ * auVar47._24_4_ + auVar64._24_4_ * auVar64._24_4_ +
           auVar65._24_4_ * auVar65._24_4_;
      auVar131._28_4_ =
           auVar47._28_4_ * auVar47._28_4_ + auVar64._28_4_ * auVar64._28_4_ +
           auVar65._28_4_ * auVar65._28_4_;
      uVar156 = *(uint *)(param_1 + 0xc + lVar17);
      uVar158 = *(uint *)(param_1 + 0xc + lVar29);
      uVar160 = *(uint *)(param_1 + 0xc + lVar35);
      auVar61 = vinsertps_avx(ZEXT416(uVar156),ZEXT416(uVar158),0x10);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(uVar160),0x20);
      uVar172 = *(uint *)(param_1 + 0xc + lVar21);
      uVar173 = *(uint *)(param_1 + 0xc + lVar39);
      uVar174 = *(uint *)(param_1 + 0xc + lVar38);
      auVar72 = vinsertps_avx(ZEXT416(uVar172),ZEXT416(uVar173),0x10);
      auVar72 = vinsertps_avx(auVar72,ZEXT416(uVar174),0x20);
      uVar27 = uVar36 & 0xffffffff;
      uVar175 = *(uint *)(param_1 + 0xc + lVar23);
      auVar102 = vinsertps_avx(auVar72,ZEXT416(uVar175),0x30);
      auVar120._16_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + uVar27);
      auVar120._0_16_ = *(undefined1 (*) [16])(param_3 + uVar27);
      uVar176 = *(uint *)(param_1 + 0xc + lVar25);
      auVar108 = vinsertps_avx(auVar61,ZEXT416(uVar176),0x30);
      auVar74 = vsqrtps_avx(auVar131);
      auVar43 = vdivps_avx(auVar47,auVar74);
      auVar47 = vcmpps_avx(auVar131,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar64 = vdivps_avx(auVar64,auVar74);
      auVar65 = vdivps_avx(auVar65,auVar74);
      uVar94 = auVar47._0_4_;
      auVar45._0_4_ = ~uVar94 & auVar74._0_4_;
      uVar98 = auVar47._4_4_;
      auVar45._4_4_ = ~uVar98 & auVar74._4_4_;
      uVar99 = auVar47._8_4_;
      auVar45._8_4_ = ~uVar99 & auVar74._8_4_;
      uVar100 = auVar47._12_4_;
      auVar45._12_4_ = ~uVar100 & auVar74._12_4_;
      uVar101 = auVar47._16_4_;
      auVar45._16_4_ = ~uVar101 & auVar74._16_4_;
      uVar103 = auVar47._20_4_;
      auVar45._20_4_ = ~uVar103 & auVar74._20_4_;
      uVar104 = auVar47._24_4_;
      auVar45._24_4_ = ~uVar104 & auVar74._24_4_;
      uVar105 = auVar47._28_4_;
      auVar45._28_4_ = ~uVar105 & auVar74._28_4_;
      auVar74 = vsubps_avx(auVar45,auVar120);
      auVar61 = *(undefined1 (*) [16])(param_4 + uVar27);
      auVar72 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar27);
      auVar132._16_16_ = auVar72;
      auVar132._0_16_ = auVar61;
      auVar46._0_4_ = auVar74._0_4_ * fVar40;
      auVar46._4_4_ = auVar74._4_4_ * fVar51;
      auVar46._8_4_ = auVar74._8_4_ * fVar53;
      auVar46._12_4_ = auVar74._12_4_ * fVar55;
      auVar46._16_4_ = auVar74._16_4_ * fVar57;
      auVar46._20_4_ = auVar74._20_4_ * fVar58;
      auVar46._24_4_ = auVar74._24_4_ * fVar59;
      auVar46._28_4_ = auVar74._28_4_ * fVar60;
      fVar2 = auVar108._0_4_;
      fVar144 = auVar63._0_4_;
      fVar3 = auVar108._4_4_;
      fVar147 = auVar63._4_4_;
      fVar4 = auVar108._8_4_;
      fVar149 = auVar63._8_4_;
      fVar5 = auVar108._12_4_;
      fVar151 = auVar63._12_4_;
      fVar133 = auVar102._0_4_;
      fVar153 = auVar107._0_4_;
      fVar137 = auVar102._4_4_;
      fVar155 = auVar107._4_4_;
      fVar138 = auVar102._8_4_;
      fVar157 = auVar107._8_4_;
      fVar139 = auVar102._12_4_;
      fVar159 = auVar107._12_4_;
      auVar74 = vsubps_avx(auVar46,auVar132);
      auVar171._4_4_ = __real_3f800000;
      auVar171._0_4_ = __real_3f800000;
      auVar171._8_4_ = __real_3f800000;
      auVar171._12_4_ = __real_3f800000;
      auVar171._16_4_ = __real_3f800000;
      auVar171._20_4_ = __real_3f800000;
      auVar171._24_4_ = __real_3f800000;
      auVar171._28_4_ = __real_3f800000;
      auVar121._0_4_ = __real_3f800000 + (fVar144 + fVar2) * fVar41;
      auVar121._4_4_ = __real_3f800000 + (fVar147 + fVar3) * fVar52;
      auVar121._8_4_ = __real_3f800000 + (fVar149 + fVar4) * fVar54;
      auVar121._12_4_ = __real_3f800000 + (fVar151 + fVar5) * fVar56;
      auVar121._16_4_ = __real_3f800000 + (fVar153 + fVar133) * fVar41;
      auVar121._20_4_ = __real_3f800000 + (fVar155 + fVar137) * fVar52;
      auVar121._24_4_ = __real_3f800000 + (fVar157 + fVar138) * fVar54;
      auVar121._28_4_ = __real_3f800000 + (fVar159 + fVar139) * fVar56;
      auVar74 = vdivps_avx(auVar74,auVar121);
      auVar47 = vblendvps_avx(auVar43,auVar171,auVar47);
      fVar140 = auVar74._0_4_;
      fVar80 = auVar47._0_4_ * fVar140;
      fVar141 = auVar74._4_4_;
      fVar87 = auVar47._4_4_ * fVar141;
      fVar142 = auVar74._8_4_;
      fVar88 = auVar47._8_4_ * fVar142;
      fVar143 = auVar74._12_4_;
      fVar89 = auVar47._12_4_ * fVar143;
      fVar6 = auVar74._16_4_;
      fVar90 = auVar47._16_4_ * fVar6;
      fVar7 = auVar74._20_4_;
      fVar91 = auVar47._20_4_ * fVar7;
      fVar8 = auVar74._24_4_;
      fVar92 = auVar47._24_4_ * fVar8;
      fVar9 = auVar74._28_4_;
      fVar93 = auVar47._28_4_ * fVar9;
      auVar102._0_4_ = auVar95._0_4_ + fVar144 * fVar80;
      auVar102._4_4_ = auVar95._4_4_ + fVar147 * fVar87;
      auVar102._8_4_ = auVar95._8_4_ + fVar149 * fVar88;
      auVar102._12_4_ = auVar95._12_4_ + fVar151 * fVar89;
      auVar96._16_4_ = auVar130._0_4_ + fVar153 * fVar90;
      auVar96._0_16_ = auVar102;
      auVar96._20_4_ = auVar130._4_4_ + fVar155 * fVar91;
      auVar96._24_4_ = auVar130._8_4_ + fVar157 * fVar92;
      auVar96._28_4_ = auVar130._12_4_ + fVar159 * fVar93;
      *(float *)(param_1 + lVar31) = auVar102._0_4_;
      uVar28 = vextractps_avx(auVar102,1);
      *(undefined4 *)(param_1 + lVar34) = uVar28;
      fVar106 = (float)(~uVar94 & auVar64._0_4_) * fVar140;
      fVar111 = (float)(~uVar98 & auVar64._4_4_) * fVar141;
      fVar112 = (float)(~uVar99 & auVar64._8_4_) * fVar142;
      fVar113 = (float)(~uVar100 & auVar64._12_4_) * fVar143;
      fVar114 = (float)(~uVar101 & auVar64._16_4_) * fVar6;
      fVar115 = (float)(~uVar103 & auVar64._20_4_) * fVar7;
      fVar116 = (float)(~uVar104 & auVar64._24_4_) * fVar8;
      fVar117 = (float)(~uVar105 & auVar64._28_4_) * fVar9;
      uVar28 = vextractps_avx(auVar102,2);
      *(undefined4 *)(param_1 + lVar24) = uVar28;
      uVar28 = vextractps_avx(auVar102,3);
      *(undefined4 *)(param_1 + lVar26) = uVar28;
      auVar102 = auVar96._16_16_;
      *(float *)(param_1 + lVar20) = auVar96._16_4_;
      uVar28 = vextractps_avx(auVar102,1);
      *(undefined4 *)(param_1 + lVar16) = uVar28;
      uVar28 = vextractps_avx(auVar102,2);
      *(undefined4 *)(param_1 + lVar22) = uVar28;
      auVar130._0_4_ = auVar42._0_4_ + fVar144 * fVar106;
      auVar130._4_4_ = auVar42._4_4_ + fVar147 * fVar111;
      auVar130._8_4_ = auVar42._8_4_ + fVar149 * fVar112;
      auVar130._12_4_ = auVar42._12_4_ + fVar151 * fVar113;
      auVar164._16_4_ = auVar134._0_4_ + fVar153 * fVar114;
      auVar164._0_16_ = auVar130;
      auVar164._20_4_ = auVar134._4_4_ + fVar155 * fVar115;
      auVar164._24_4_ = auVar134._8_4_ + fVar157 * fVar116;
      auVar164._28_4_ = auVar134._12_4_ + fVar159 * fVar117;
      uVar28 = vextractps_avx(auVar102,3);
      *(undefined4 *)(param_1 + lVar37) = uVar28;
      *(float *)(param_1 + 4 + lVar31) = auVar130._0_4_;
      uVar28 = vextractps_avx(auVar130,1);
      *(undefined4 *)(param_1 + 4 + lVar34) = uVar28;
      fVar118 = (float)(~uVar94 & auVar65._0_4_) * fVar140;
      fVar123 = (float)(~uVar98 & auVar65._4_4_) * fVar141;
      fVar124 = (float)(~uVar99 & auVar65._8_4_) * fVar142;
      fVar125 = (float)(~uVar100 & auVar65._12_4_) * fVar143;
      fVar126 = (float)(~uVar101 & auVar65._16_4_) * fVar6;
      fVar127 = (float)(~uVar103 & auVar65._20_4_) * fVar7;
      fVar128 = (float)(~uVar104 & auVar65._24_4_) * fVar8;
      fVar129 = (float)(~uVar105 & auVar65._28_4_) * fVar9;
      uVar28 = vextractps_avx(auVar130,2);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar28;
      uVar28 = vextractps_avx(auVar130,3);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar28;
      auVar42 = auVar164._16_16_;
      *(float *)(param_1 + 4 + lVar20) = auVar164._16_4_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 4 + lVar16) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar28;
      auVar95._0_4_ = auVar71._0_4_ + fVar144 * fVar118;
      auVar95._4_4_ = auVar71._4_4_ + fVar147 * fVar123;
      auVar95._8_4_ = auVar71._8_4_ + fVar149 * fVar124;
      auVar95._12_4_ = auVar71._12_4_ + fVar151 * fVar125;
      auVar97._16_4_ = auVar62._0_4_ + fVar153 * fVar126;
      auVar97._0_16_ = auVar95;
      auVar97._20_4_ = auVar62._4_4_ + fVar155 * fVar127;
      auVar97._24_4_ = auVar62._8_4_ + fVar157 * fVar128;
      auVar97._28_4_ = auVar62._12_4_ + fVar159 * fVar129;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 4 + lVar37) = uVar28;
      *(float *)(param_1 + 8 + lVar31) = auVar95._0_4_;
      uVar28 = vextractps_avx(auVar95,1);
      *(undefined4 *)(param_1 + 8 + lVar34) = uVar28;
      uVar28 = vextractps_avx(auVar95,2);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar28;
      uVar28 = vextractps_avx(auVar95,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar28;
      auVar42 = auVar97._16_16_;
      *(float *)(param_1 + 8 + lVar20) = auVar97._16_4_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 8 + lVar16) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar28;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 8 + lVar37) = uVar28;
      *(uint *)(param_1 + 0xc + lVar31) = uVar10;
      *(uint *)(param_1 + 0xc + lVar34) = uVar30;
      *(uint *)(param_1 + 0xc + lVar24) = uVar33;
      *(uint *)(param_1 + 0xc + lVar26) = uVar145;
      *(uint *)(param_1 + 0xc + lVar20) = uVar148;
      *(uint *)(param_1 + 0xc + lVar16) = uVar150;
      *(uint *)(param_1 + 0xc + lVar22) = uVar152;
      auVar74._0_4_ = fVar2 * fVar80;
      auVar74._4_4_ = fVar3 * fVar87;
      auVar74._8_4_ = fVar4 * fVar88;
      auVar74._12_4_ = fVar5 * fVar89;
      auVar74._16_4_ = fVar133 * fVar90;
      auVar74._20_4_ = fVar137 * fVar91;
      auVar74._24_4_ = fVar138 * fVar92;
      auVar74._28_4_ = fVar139 * fVar93;
      auVar47 = vsubps_avx(auVar170,auVar74);
      *(uint *)(param_1 + 0xc + lVar37) = uVar154;
      *(int *)(param_1 + lVar17) = auVar47._0_4_;
      auVar42 = auVar47._0_16_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + lVar29) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + lVar35) = uVar28;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + lVar25) = uVar28;
      auVar42 = auVar47._16_16_;
      *(int *)(param_1 + lVar21) = auVar47._16_4_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + lVar39) = uVar28;
      auVar82._0_4_ = fVar2 * fVar106;
      auVar82._4_4_ = fVar3 * fVar111;
      auVar82._8_4_ = fVar4 * fVar112;
      auVar82._12_4_ = fVar5 * fVar113;
      auVar82._16_4_ = fVar133 * fVar114;
      auVar82._20_4_ = fVar137 * fVar115;
      auVar82._24_4_ = fVar138 * fVar116;
      auVar82._28_4_ = fVar139 * fVar117;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + lVar38) = uVar28;
      auVar47 = vsubps_avx(auVar73,auVar82);
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + lVar23) = uVar28;
      *(int *)(param_1 + 4 + lVar17) = auVar47._0_4_;
      auVar42 = auVar47._0_16_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 4 + lVar35) = uVar28;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar28;
      auVar42 = auVar47._16_16_;
      *(int *)(param_1 + 4 + lVar21) = auVar47._16_4_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 4 + lVar39) = uVar28;
      auVar65._0_4_ = fVar2 * fVar118;
      auVar65._4_4_ = fVar3 * fVar123;
      auVar65._8_4_ = fVar4 * fVar124;
      auVar65._12_4_ = fVar5 * fVar125;
      auVar65._16_4_ = fVar133 * fVar126;
      auVar65._20_4_ = fVar137 * fVar127;
      auVar65._24_4_ = fVar138 * fVar128;
      auVar65._28_4_ = fVar139 * fVar129;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 4 + lVar38) = uVar28;
      auVar47 = vsubps_avx(auVar44,auVar65);
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar28;
      *(int *)(param_1 + 8 + lVar17) = auVar47._0_4_;
      auVar42 = auVar47._0_16_;
      uVar28 = vextractps_avx(auVar42,1);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar28;
      uVar28 = vextractps_avx(auVar42,2);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar28;
      uVar28 = vextractps_avx(auVar42,3);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar28;
      auVar62 = auVar47._16_16_;
      *(int *)(param_1 + 8 + lVar21) = auVar47._16_4_;
      uVar28 = vextractps_avx(auVar62,1);
      *(undefined4 *)(param_1 + 8 + lVar39) = uVar28;
      auVar42._0_4_ = auVar61._0_4_ + fVar140;
      auVar42._4_4_ = auVar61._4_4_ + fVar141;
      auVar42._8_4_ = auVar61._8_4_ + fVar142;
      auVar42._12_4_ = auVar61._12_4_ + fVar143;
      auVar47._16_4_ = auVar72._0_4_ + fVar6;
      auVar47._0_16_ = auVar42;
      auVar47._20_4_ = auVar72._4_4_ + fVar7;
      auVar47._24_4_ = auVar72._8_4_ + fVar8;
      auVar47._28_4_ = auVar72._12_4_ + fVar9;
      uVar28 = vextractps_avx(auVar62,2);
      *(undefined4 *)(param_1 + 8 + lVar38) = uVar28;
      uVar28 = vextractps_avx(auVar62,3);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar28;
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar27) = auVar47._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar27) = auVar42;
      *(uint *)(param_1 + 0xc + lVar17) = uVar156;
      *(uint *)(param_1 + 0xc + lVar29) = uVar158;
      *(uint *)(param_1 + 0xc + lVar35) = uVar160;
      *(uint *)(param_1 + 0xc + lVar25) = uVar176;
      *(uint *)(param_1 + 0xc + lVar21) = uVar172;
      *(uint *)(param_1 + 0xc + lVar39) = uVar173;
      *(uint *)(param_1 + 0xc + lVar38) = uVar174;
      *(uint *)(param_1 + 0xc + lVar23) = uVar175;
      uVar36 = uVar36 + 0x20;
      uVar10 = (int)uVar15 + 8;
      uVar15 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)(uVar19 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar10) {
      return;
    }
  }
  auVar61 = vpshufd_avx(ZEXT416((uint)uVar15),0);
  auVar48._16_16_ = auVar61;
  auVar48._0_16_ = auVar61;
  auVar42 = vpshufd_avx(ZEXT416(param_7),0);
  pauVar1 = (undefined1 (*) [16])(param_2 + uVar15 * 8);
  auVar62 = SUB3216(auVar48 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar71 = SUB3216(auVar48 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar61 = vpcmpgtd_avx(auVar42,auVar71);
  auVar72 = vpcmpgtd_avx(auVar42,auVar62);
  auVar75._16_16_ = auVar61;
  auVar75._0_16_ = auVar72;
  uVar19 = vmovmskps_avx(auVar75);
  if (uVar19 == 0xff) {
    auVar122._16_16_ = pauVar1[3];
    auVar122._0_16_ = pauVar1[1];
    auVar76._16_16_ = pauVar1[2];
    auVar76._0_16_ = *pauVar1;
    auVar47 = vshufps_avx(auVar76,auVar122,0x88);
    auVar43 = vshufps_avx(auVar76,auVar122,0xdd);
  }
  else {
    auVar61 = vpcmpgtd_avx(auVar42,auVar71);
    auVar72 = vpcmpgtd_avx(auVar42,auVar62);
    auVar134._0_4_ =
         auVar72._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar134._4_4_ = auVar72._4_4_ & _UNK_150b519c4;
    auVar134._8_4_ = auVar72._8_4_ & _UNK_150b519c8;
    auVar134._12_4_ = auVar72._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar134,1);
    vextractps_avx(auVar134,2);
    vextractps_avx(auVar134,3);
    auVar107._0_4_ =
         auVar72._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar107._4_4_ = auVar72._4_4_ & _UNK_150b519e4;
    auVar107._8_4_ = auVar72._8_4_ & _UNK_150b519e8;
    auVar107._12_4_ = auVar72._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar107,1);
    vextractps_avx(auVar107,2);
    vextractps_avx(auVar107,3);
    auVar47 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar61._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar43 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar61._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar107._0_4_))));
  }
  auVar71 = vpcmpgtd_avx(auVar42,auVar71);
  auVar95 = vpcmpgtd_avx(auVar42,auVar62);
  auVar146._16_16_ = auVar71;
  auVar146._0_16_ = auVar95;
  auVar162 = vpslld_avx(auVar47._0_16_,4);
  auVar163 = vpslld_avx(auVar47._16_16_,4);
  auVar134 = vpand_avx(auVar162,auVar95);
  auVar72 = vpand_avx(auVar163,auVar71);
  lVar16 = param_1 + auVar72._0_4_;
  lVar17 = param_1 + auVar72._4_4_;
  lVar20 = param_1 + auVar72._8_4_;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar72._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar72._4_4_)),0x10);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + auVar72._8_4_)),0x20);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + auVar72._12_4_)),0x30);
  lVar21 = param_1 + auVar72._12_4_;
  uVar145 = auVar95._0_4_;
  uVar148 = auVar95._4_4_;
  uVar150 = auVar95._8_4_;
  uVar152 = auVar95._12_4_;
  uVar154 = auVar71._0_4_;
  uVar156 = auVar71._4_4_;
  uVar158 = auVar71._8_4_;
  uVar160 = auVar71._12_4_;
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d50) + lVar16)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d54) + lVar17)),0x10);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d58) + lVar20))
                          ,0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d5c) + lVar21))
                          ,0x30);
  auVar63 = vpslld_avx(auVar43._16_16_,4);
  auVar71 = vpand_avx(auVar71,auVar63);
  lVar22 = param_1 + auVar71._0_4_;
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar71._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar71._4_4_)),0x10);
  lVar23 = param_1 + auVar71._4_4_;
  auVar62 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d50) + lVar22)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d54) + lVar23)),0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + auVar71._8_4_)),0x20);
  lVar24 = param_1 + auVar71._8_4_;
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d58) + lVar24))
                          ,0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + auVar71._12_4_)),0x30);
  lVar25 = param_1 + auVar71._12_4_;
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d5c) + lVar25))
                          ,0x30);
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar134._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar134._4_4_)),0x10);
  lVar26 = param_1 + auVar134._0_4_;
  lVar29 = param_1 + auVar134._4_4_;
  auVar102 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar145 &
                                             ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                             ) + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)(uVar148 & _UNK_150b50d44) + lVar29)),0x10);
  auVar119 = vpslld_avx(auVar43._0_16_,4);
  auVar107 = vpand_avx(auVar95,auVar119);
  lVar31 = param_1 + auVar107._0_4_;
  auVar95 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar107._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar107._4_4_)),0x10);
  lVar34 = param_1 + auVar107._4_4_;
  auVar130 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar145 &
                                             ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                             ) + lVar31)),
                           ZEXT416(*(uint *)((ulonglong)(uVar148 & _UNK_150b50d44) + lVar34)),0x10);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + auVar134._8_4_)),0x20);
  lVar35 = param_1 + auVar134._8_4_;
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((ulonglong)(uVar150 & _UNK_150b50d48) + lVar35
                                                     )),0x20);
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + auVar107._8_4_)),0x20);
  lVar37 = param_1 + auVar107._8_4_;
  auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)((ulonglong)(uVar150 & _UNK_150b50d48) + lVar37
                                                     )),0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)(param_1 + auVar134._12_4_)),0x30);
  lVar38 = param_1 + auVar134._12_4_;
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((ulonglong)(uVar152 & _UNK_150b50d4c) + lVar38
                                                     )),0x30);
  auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + auVar107._12_4_)),0x30);
  lVar39 = param_1 + auVar107._12_4_;
  auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)((ulonglong)(uVar152 & _UNK_150b50d4c) + lVar39
                                                     )),0x30);
  auVar77._16_16_ = auVar61;
  auVar77._0_16_ = auVar71;
  auVar108._0_4_ = uVar145 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008
  ;
  auVar108._4_4_ = uVar148 & _UNK_150b50d64;
  auVar108._8_4_ = uVar150 & _UNK_150b50d68;
  auVar108._12_4_ = uVar152 & _UNK_150b50d6c;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d70) + lVar16)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d74) + lVar17)),0x10);
  auVar71 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d70) + lVar22)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d74) + lVar23)),0x10);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d78) + lVar20))
                          ,0x20);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d78) + lVar24))
                          ,0x20);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d7c) + lVar21))
                          ,0x30);
  auVar71 = vinsertps_avx(auVar71,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d7c) + lVar25))
                          ,0x30);
  uVar10 = vextractps_avx(auVar108,1);
  uVar30 = vextractps_avx(auVar108,2);
  uVar33 = vextractps_avx(auVar108,3);
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar108._0_4_ + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)uVar10 + lVar29)),0x10);
  auVar135._16_16_ = auVar72;
  auVar135._0_16_ = auVar102;
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar108._0_4_ + lVar31)),
                          ZEXT416(*(uint *)((ulonglong)uVar10 + lVar34)),0x10);
  auVar102 = vinsertps_avx(auVar134,ZEXT416(*(uint *)((ulonglong)uVar30 + lVar35)),0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)uVar30 + lVar37)),0x20);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((ulonglong)uVar33 + lVar38)),0x30);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)uVar33 + lVar39)),0x30);
  auVar110._16_16_ = auVar61;
  auVar110._0_16_ = auVar102;
  auVar49._16_16_ = auVar42;
  auVar49._0_16_ = auVar95;
  auVar66._16_16_ = auVar62;
  auVar66._0_16_ = auVar130;
  auVar83._16_16_ = auVar71;
  auVar83._0_16_ = auVar72;
  auVar47 = vmaskmovps_avx(auVar146,auVar77);
  auVar43 = vmaskmovps_avx(auVar146,auVar135);
  auVar64 = vmaskmovps_avx(auVar146,auVar110);
  auVar65 = vmaskmovps_avx(auVar146,auVar49);
  auVar74 = vmaskmovps_avx(auVar146,auVar66);
  auVar44 = vmaskmovps_avx(auVar146,auVar83);
  auVar45 = vsubps_avx(auVar47,auVar65);
  auVar73 = vsubps_avx(auVar43,auVar74);
  auVar96 = vsubps_avx(auVar64,auVar44);
  auVar136._0_4_ =
       auVar45._0_4_ * auVar45._0_4_ + auVar73._0_4_ * auVar73._0_4_ + auVar96._0_4_ * auVar96._0_4_
  ;
  auVar136._4_4_ =
       auVar45._4_4_ * auVar45._4_4_ + auVar73._4_4_ * auVar73._4_4_ + auVar96._4_4_ * auVar96._4_4_
  ;
  auVar136._8_4_ =
       auVar45._8_4_ * auVar45._8_4_ + auVar73._8_4_ * auVar73._8_4_ + auVar96._8_4_ * auVar96._8_4_
  ;
  auVar136._12_4_ =
       auVar45._12_4_ * auVar45._12_4_ + auVar73._12_4_ * auVar73._12_4_ +
       auVar96._12_4_ * auVar96._12_4_;
  auVar136._16_4_ =
       auVar45._16_4_ * auVar45._16_4_ + auVar73._16_4_ * auVar73._16_4_ +
       auVar96._16_4_ * auVar96._16_4_;
  auVar136._20_4_ =
       auVar45._20_4_ * auVar45._20_4_ + auVar73._20_4_ * auVar73._20_4_ +
       auVar96._20_4_ * auVar96._20_4_;
  auVar136._24_4_ =
       auVar45._24_4_ * auVar45._24_4_ + auVar73._24_4_ * auVar73._24_4_ +
       auVar96._24_4_ * auVar96._24_4_;
  auVar136._28_4_ =
       auVar45._28_4_ * auVar45._28_4_ + auVar73._28_4_ * auVar73._28_4_ +
       auVar96._28_4_ * auVar96._28_4_;
  auVar82 = vsqrtps_avx(auVar136);
  auVar46 = vcmpps_avx(auVar136,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar45 = vdivps_avx(auVar45,auVar82);
  auVar67._4_4_ = __real_3f800000;
  auVar67._0_4_ = __real_3f800000;
  auVar67._8_4_ = __real_3f800000;
  auVar67._12_4_ = __real_3f800000;
  auVar67._16_4_ = __real_3f800000;
  auVar67._20_4_ = __real_3f800000;
  auVar67._24_4_ = __real_3f800000;
  auVar67._28_4_ = __real_3f800000;
  auVar45 = vblendvps_avx(auVar45,auVar67,auVar46);
  auVar45 = vmaskmovps_avx(auVar146,auVar45);
  auVar73 = vdivps_avx(auVar73,auVar82);
  uVar10 = auVar46._0_4_;
  auVar78._0_4_ = ~uVar10 & auVar73._0_4_;
  uVar30 = auVar46._4_4_;
  auVar78._4_4_ = ~uVar30 & auVar73._4_4_;
  uVar33 = auVar46._8_4_;
  auVar78._8_4_ = ~uVar33 & auVar73._8_4_;
  uVar172 = auVar46._12_4_;
  auVar78._12_4_ = ~uVar172 & auVar73._12_4_;
  uVar173 = auVar46._16_4_;
  auVar78._16_4_ = ~uVar173 & auVar73._16_4_;
  uVar174 = auVar46._20_4_;
  auVar78._20_4_ = ~uVar174 & auVar73._20_4_;
  uVar175 = auVar46._24_4_;
  auVar78._24_4_ = ~uVar175 & auVar73._24_4_;
  uVar176 = auVar46._28_4_;
  auVar78._28_4_ = ~uVar176 & auVar73._28_4_;
  auVar46 = vmaskmovps_avx(auVar146,auVar78);
  auVar73 = vdivps_avx(auVar96,auVar82);
  auVar79._0_4_ = ~uVar10 & auVar73._0_4_;
  auVar79._4_4_ = ~uVar30 & auVar73._4_4_;
  auVar79._8_4_ = ~uVar33 & auVar73._8_4_;
  auVar79._12_4_ = ~uVar172 & auVar73._12_4_;
  auVar79._16_4_ = ~uVar173 & auVar73._16_4_;
  auVar79._20_4_ = ~uVar174 & auVar73._20_4_;
  auVar79._24_4_ = ~uVar175 & auVar73._24_4_;
  auVar79._28_4_ = ~uVar176 & auVar73._28_4_;
  auVar73 = vmaskmovps_avx(auVar146,auVar79);
  auVar62._0_4_ = uVar145 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar62._4_4_ = uVar148 & _UNK_150b50d84;
  auVar62._8_4_ = uVar150 & _UNK_150b50d88;
  auVar62._12_4_ = uVar152 & _UNK_150b50d8c;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d90) + lVar16)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d94) + lVar17)),0x10);
  uVar28 = vextractps_avx(auVar62,1);
  lVar17 = CONCAT44((int)((ulonglong)lVar39 >> 0x20),uVar28);
  uVar28 = vextractps_avx(auVar62,2);
  lVar32 = CONCAT44((int)((ulonglong)lVar38 >> 0x20),uVar28);
  uVar28 = vextractps_avx(auVar62,3);
  lVar16 = CONCAT44((int)((ulonglong)lVar29 >> 0x20),uVar28);
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar154 & _UNK_150b50d90) + lVar22)),
                          ZEXT416(*(uint *)((ulonglong)(uVar156 & _UNK_150b50d94) + lVar23)),0x10);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d98) + lVar20))
                          ,0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d98) + lVar24))
                          ,0x20);
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d9c) + lVar21))
                          ,0x30);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d9c) + lVar25))
                          ,0x30);
  auVar42 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar62._0_4_ + lVar26)),
                          ZEXT416(*(uint *)(lVar17 + lVar29)),0x10);
  auVar62 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar62._0_4_ + lVar31)),
                          ZEXT416(*(uint *)(lVar17 + lVar34)),0x10);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(lVar32 + lVar35)),0x20);
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar32 + lVar37)),0x20);
  auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(lVar16 + lVar38)),0x30);
  auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar16 + lVar39)),0x30);
  lVar16 = (longlong)(int)((uint)uVar15 << 2);
  auVar96 = vmaskmovps_avx(auVar146,*(undefined1 (*) [32])(param_3 + lVar16));
  auVar84._0_4_ = ~uVar10 & auVar82._0_4_;
  auVar84._4_4_ = ~uVar30 & auVar82._4_4_;
  auVar84._8_4_ = ~uVar33 & auVar82._8_4_;
  auVar84._12_4_ = ~uVar172 & auVar82._12_4_;
  auVar84._16_4_ = ~uVar173 & auVar82._16_4_;
  auVar84._20_4_ = ~uVar174 & auVar82._20_4_;
  auVar84._24_4_ = ~uVar175 & auVar82._24_4_;
  auVar84._28_4_ = ~uVar176 & auVar82._28_4_;
  auVar82 = vsubps_avx(auVar84,auVar96);
  auVar71 = ZEXT416((uint)(param_5 * param_6 * param_5));
  auVar71 = vshufps_avx(auVar71,auVar71,0);
  fVar40 = auVar71._0_4_;
  fVar51 = auVar71._4_4_;
  fVar53 = auVar71._8_4_;
  fVar55 = auVar71._12_4_;
  auVar85._0_4_ =
       (float)((uint)fVar40 ^
              ___ymm_8000000080000000800000008000000080000000800000008000000080000000) *
       auVar82._0_4_;
  auVar85._4_4_ = (float)((uint)fVar51 ^ _UNK_150b50f64) * auVar82._4_4_;
  auVar85._8_4_ = (float)((uint)fVar53 ^ _UNK_150b50f68) * auVar82._8_4_;
  auVar85._12_4_ = (float)((uint)fVar55 ^ _UNK_150b50f6c) * auVar82._12_4_;
  auVar85._16_4_ = (float)((uint)fVar40 ^ _UNK_150b50f70) * auVar82._16_4_;
  auVar85._20_4_ = (float)((uint)fVar51 ^ _UNK_150b50f74) * auVar82._20_4_;
  auVar85._24_4_ = (float)((uint)fVar53 ^ _UNK_150b50f78) * auVar82._24_4_;
  auVar85._28_4_ = (float)((uint)fVar55 ^ _UNK_150b50f7c) * auVar82._28_4_;
  fVar41 = auVar62._0_4_;
  fVar133 = auVar42._0_4_;
  fVar52 = auVar62._4_4_;
  fVar137 = auVar42._4_4_;
  fVar54 = auVar62._8_4_;
  fVar138 = auVar42._8_4_;
  fVar56 = auVar62._12_4_;
  fVar139 = auVar42._12_4_;
  fVar57 = auVar72._0_4_;
  fVar140 = auVar61._0_4_;
  fVar59 = auVar72._4_4_;
  fVar141 = auVar61._4_4_;
  fVar2 = auVar72._8_4_;
  fVar142 = auVar61._8_4_;
  fVar4 = auVar72._12_4_;
  fVar143 = auVar61._12_4_;
  auVar68._0_4_ = (fVar133 + fVar41) * fVar40 + __real_3f800000;
  auVar68._4_4_ = (fVar137 + fVar52) * fVar51 + __real_3f800000;
  auVar68._8_4_ = (fVar138 + fVar54) * fVar53 + __real_3f800000;
  auVar68._12_4_ = (fVar139 + fVar56) * fVar55 + __real_3f800000;
  auVar68._16_4_ = (fVar140 + fVar57) * fVar40 + __real_3f800000;
  auVar68._20_4_ = (fVar141 + fVar59) * fVar51 + __real_3f800000;
  auVar68._24_4_ = (fVar142 + fVar2) * fVar53 + __real_3f800000;
  auVar68._28_4_ = (fVar143 + fVar4) * fVar55 + __real_3f800000;
  auVar96 = vmaskmovps_avx(auVar146,*(undefined1 (*) [32])(param_4 + lVar16));
  auVar82 = vsubps_avx(auVar85,auVar96);
  auVar82 = vdivps_avx(auVar82,auVar68);
  fVar40 = auVar82._0_4_;
  auVar69._0_4_ = auVar96._0_4_ + fVar40;
  fVar51 = auVar82._4_4_;
  auVar69._4_4_ = auVar96._4_4_ + fVar51;
  fVar53 = auVar82._8_4_;
  auVar69._8_4_ = auVar96._8_4_ + fVar53;
  fVar55 = auVar82._12_4_;
  auVar69._12_4_ = auVar96._12_4_ + fVar55;
  fVar58 = auVar82._16_4_;
  auVar69._16_4_ = auVar96._16_4_ + fVar58;
  fVar60 = auVar82._20_4_;
  auVar69._20_4_ = auVar96._20_4_ + fVar60;
  fVar3 = auVar82._24_4_;
  auVar69._24_4_ = auVar96._24_4_ + fVar3;
  fVar5 = auVar82._28_4_;
  auVar69._28_4_ = auVar96._28_4_ + fVar5;
  auVar82 = vmaskmovps_avx(auVar146,auVar69);
  *(undefined1 (*) [32])(param_4 + lVar16) = auVar82;
  local_2a0 = auVar45._0_4_;
  fStack_29c = auVar45._4_4_;
  fStack_298 = auVar45._8_4_;
  fStack_294 = auVar45._12_4_;
  fStack_290 = auVar45._16_4_;
  fStack_28c = auVar45._20_4_;
  fStack_288 = auVar45._24_4_;
  fStack_284 = auVar45._28_4_;
  auVar71._0_4_ = auVar47._0_4_ + fVar133 * fVar40 * local_2a0;
  auVar71._4_4_ = auVar47._4_4_ + fVar137 * fVar51 * fStack_29c;
  auVar71._8_4_ = auVar47._8_4_ + fVar138 * fVar53 * fStack_298;
  auVar71._12_4_ = auVar47._12_4_ + fVar139 * fVar55 * fStack_294;
  auVar165._16_4_ = auVar47._16_4_ + fVar140 * fVar58 * fStack_290;
  auVar165._0_16_ = auVar71;
  auVar165._20_4_ = auVar47._20_4_ + fVar141 * fVar60 * fStack_28c;
  auVar165._24_4_ = auVar47._24_4_ + fVar142 * fVar3 * fStack_288;
  auVar165._28_4_ = auVar47._28_4_ + fVar143 * fVar5 * fStack_284;
  local_280 = auVar46._0_4_;
  fStack_27c = auVar46._4_4_;
  fStack_278 = auVar46._8_4_;
  fStack_274 = auVar46._12_4_;
  fStack_270 = auVar46._16_4_;
  fStack_26c = auVar46._20_4_;
  fStack_268 = auVar46._24_4_;
  fStack_264 = auVar46._28_4_;
  local_280 = fVar40 * local_280;
  fStack_27c = fVar51 * fStack_27c;
  fStack_278 = fVar53 * fStack_278;
  fStack_274 = fVar55 * fStack_274;
  fStack_270 = fVar58 * fStack_270;
  fStack_26c = fVar60 * fStack_26c;
  fStack_268 = fVar3 * fStack_268;
  fStack_264 = fVar5 * fStack_264;
  local_260 = auVar73._0_4_;
  fStack_25c = auVar73._4_4_;
  fStack_258 = auVar73._8_4_;
  fStack_254 = auVar73._12_4_;
  fStack_250 = auVar73._16_4_;
  fStack_24c = auVar73._20_4_;
  fStack_248 = auVar73._24_4_;
  fStack_244 = auVar73._28_4_;
  local_260 = fVar40 * local_260;
  fStack_25c = fVar51 * fStack_25c;
  fStack_258 = fVar53 * fStack_258;
  fStack_254 = fVar55 * fStack_254;
  fStack_250 = fVar58 * fStack_250;
  fStack_24c = fVar60 * fStack_24c;
  fStack_248 = fVar3 * fStack_248;
  fStack_244 = fVar5 * fStack_244;
  cVar18 = (char)uVar19;
  auVar102 = auVar165._16_16_;
  iVar161 = auVar162._0_4_;
  iVar14 = auVar162._4_4_;
  iVar11 = auVar162._8_4_;
  iVar12 = auVar162._12_4_;
  iVar81 = auVar163._0_4_;
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + iVar161) = auVar71._0_4_;
  }
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + iVar81) = auVar165._16_4_;
  }
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar163,1);
    uVar28 = vextractps_avx(auVar102,1);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar163,2);
    uVar28 = vextractps_avx(auVar102,2);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar163,3);
    uVar28 = vextractps_avx(auVar102,3);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
    auVar166._0_4_ = fVar133 * local_280 + auVar43._0_4_;
    auVar166._4_4_ = fVar137 * fStack_27c + auVar43._4_4_;
    auVar166._8_4_ = fVar138 * fStack_278 + auVar43._8_4_;
    auVar166._12_4_ = fVar139 * fStack_274 + auVar43._12_4_;
    auVar166._16_4_ = fVar140 * fStack_270 + auVar43._16_4_;
    auVar166._20_4_ = fVar141 * fStack_26c + auVar43._20_4_;
    auVar166._24_4_ = fVar142 * fStack_268 + auVar43._24_4_;
    auVar166._28_4_ = fVar143 * fStack_264 + auVar43._28_4_;
  }
  else {
    auVar166._0_4_ = fVar133 * local_280 + auVar43._0_4_;
    auVar166._4_4_ = fVar137 * fStack_27c + auVar43._4_4_;
    auVar166._8_4_ = fVar138 * fStack_278 + auVar43._8_4_;
    auVar166._12_4_ = fVar139 * fStack_274 + auVar43._12_4_;
    auVar166._16_4_ = fVar140 * fStack_270 + auVar43._16_4_;
    auVar166._20_4_ = fVar141 * fStack_26c + auVar43._20_4_;
    auVar166._24_4_ = fVar142 * fStack_268 + auVar43._24_4_;
    auVar166._28_4_ = fVar143 * fStack_264 + auVar43._28_4_;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar161) = auVar166._0_4_;
  }
  auVar71 = auVar166._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar81) = auVar166._16_4_;
  }
  auVar71 = auVar166._16_16_;
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar163,1);
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar163,2);
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar163,3);
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
    auVar167._0_4_ = fVar133 * local_260 + auVar64._0_4_;
    auVar167._4_4_ = fVar137 * fStack_25c + auVar64._4_4_;
    auVar167._8_4_ = fVar138 * fStack_258 + auVar64._8_4_;
    auVar167._12_4_ = fVar139 * fStack_254 + auVar64._12_4_;
    auVar167._16_4_ = fVar140 * fStack_250 + auVar64._16_4_;
    auVar167._20_4_ = fVar141 * fStack_24c + auVar64._20_4_;
    auVar167._24_4_ = fVar142 * fStack_248 + auVar64._24_4_;
    auVar167._28_4_ = fVar143 * fStack_244 + auVar64._28_4_;
  }
  else {
    auVar167._0_4_ = fVar133 * local_260 + auVar64._0_4_;
    auVar167._4_4_ = fVar137 * fStack_25c + auVar64._4_4_;
    auVar167._8_4_ = fVar138 * fStack_258 + auVar64._8_4_;
    auVar167._12_4_ = fVar139 * fStack_254 + auVar64._12_4_;
    auVar167._16_4_ = fVar140 * fStack_250 + auVar64._16_4_;
    auVar167._20_4_ = fVar141 * fStack_24c + auVar64._20_4_;
    auVar167._24_4_ = fVar142 * fStack_248 + auVar64._24_4_;
    auVar167._28_4_ = fVar143 * fStack_244 + auVar64._28_4_;
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar161) = auVar167._0_4_;
  }
  auVar71 = auVar167._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar81) = auVar167._16_4_;
  }
  auVar71 = auVar167._16_16_;
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar163,1);
    uVar28 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar163,2);
    uVar28 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar163,3);
    uVar28 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar161) = fVar133;
  }
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar81) = fVar140;
  }
  if ((uVar19 & 0x20) != 0) {
    iVar14 = vextractps_avx(auVar163,1);
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar14 = vextractps_avx(auVar163,2);
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar14 = vextractps_avx(auVar163,3);
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  auVar86._0_4_ = fVar40 * local_2a0 * fVar41;
  auVar86._4_4_ = fVar51 * fStack_29c * fVar52;
  auVar86._8_4_ = fVar53 * fStack_298 * fVar54;
  auVar86._12_4_ = fVar55 * fStack_294 * fVar56;
  auVar86._16_4_ = fVar58 * fStack_290 * fVar57;
  auVar86._20_4_ = fVar60 * fStack_28c * fVar59;
  auVar86._24_4_ = fVar3 * fStack_288 * fVar2;
  auVar86._28_4_ = fVar5 * fStack_284 * fVar4;
  auVar47 = vsubps_avx(auVar65,auVar86);
  iVar161 = auVar119._0_4_;
  auVar61 = auVar47._0_16_;
  auVar42 = auVar47._16_16_;
  iVar14 = auVar119._4_4_;
  iVar11 = auVar119._8_4_;
  iVar12 = auVar119._12_4_;
  iVar81 = auVar63._0_4_;
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + iVar161) = auVar47._0_4_;
  }
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + iVar81) = auVar47._16_4_;
  }
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar63,1);
    uVar28 = vextractps_avx(auVar42,1);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) == 0) {
    auVar70._0_4_ = fVar41 * local_280;
    auVar70._4_4_ = fVar52 * fStack_27c;
    auVar70._8_4_ = fVar54 * fStack_278;
    auVar70._12_4_ = fVar56 * fStack_274;
    auVar70._16_4_ = fVar57 * fStack_270;
    auVar70._20_4_ = fVar59 * fStack_26c;
    auVar70._24_4_ = fVar2 * fStack_268;
    auVar70._28_4_ = fVar4 * fStack_264;
  }
  else {
    iVar13 = vextractps_avx(auVar63,2);
    uVar28 = vextractps_avx(auVar42,2);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
    auVar70._0_4_ = fVar41 * local_280;
    auVar70._4_4_ = fVar52 * fStack_27c;
    auVar70._8_4_ = fVar54 * fStack_278;
    auVar70._12_4_ = fVar56 * fStack_274;
    auVar70._16_4_ = fVar57 * fStack_270;
    auVar70._20_4_ = fVar59 * fStack_26c;
    auVar70._24_4_ = fVar2 * fStack_268;
    auVar70._28_4_ = fVar4 * fStack_264;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar63,3);
    uVar28 = vextractps_avx(auVar42,3);
    *(undefined4 *)(param_1 + iVar13) = uVar28;
    auVar47 = vsubps_avx(auVar74,auVar70);
  }
  else {
    auVar47 = vsubps_avx(auVar74,auVar70);
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar161) = auVar47._0_4_;
  }
  auVar61 = auVar47._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar81) = auVar47._16_4_;
  }
  auVar61 = auVar47._16_16_;
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar63,1);
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) == 0) {
    auVar50._0_4_ = fVar41 * local_260;
    auVar50._4_4_ = fVar52 * fStack_25c;
    auVar50._8_4_ = fVar54 * fStack_258;
    auVar50._12_4_ = fVar56 * fStack_254;
    auVar50._16_4_ = fVar57 * fStack_250;
    auVar50._20_4_ = fVar59 * fStack_24c;
    auVar50._24_4_ = fVar2 * fStack_248;
    auVar50._28_4_ = fVar4 * fStack_244;
  }
  else {
    iVar13 = vextractps_avx(auVar63,2);
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
    auVar50._0_4_ = fVar41 * local_260;
    auVar50._4_4_ = fVar52 * fStack_25c;
    auVar50._8_4_ = fVar54 * fStack_258;
    auVar50._12_4_ = fVar56 * fStack_254;
    auVar50._16_4_ = fVar57 * fStack_250;
    auVar50._20_4_ = fVar59 * fStack_24c;
    auVar50._24_4_ = fVar2 * fStack_248;
    auVar50._28_4_ = fVar4 * fStack_244;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar63,3);
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar28;
    auVar47 = vsubps_avx(auVar44,auVar50);
  }
  else {
    auVar47 = vsubps_avx(auVar44,auVar50);
  }
  if ((uVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar161) = auVar47._0_4_;
  }
  auVar61 = auVar47._0_16_;
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar81) = auVar47._16_4_;
  }
  auVar61 = auVar47._16_16_;
  if ((uVar19 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar63,1);
    uVar28 = vextractps_avx(auVar61,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar63,2);
    uVar28 = vextractps_avx(auVar61,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar13 = vextractps_avx(auVar63,3);
    uVar28 = vextractps_avx(auVar61,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar28;
  }
  if ((uVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar161) = fVar41;
  }
  if ((uVar19 & 2) != 0) {
    uVar28 = vextractps_avx(auVar62,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 4) != 0) {
    uVar28 = vextractps_avx(auVar62,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar28;
  }
  if ((uVar19 & 8) != 0) {
    uVar28 = vextractps_avx(auVar62,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar12) = uVar28;
  }
  if ((uVar19 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar81) = fVar57;
  }
  if ((uVar19 & 0x20) != 0) {
    iVar14 = vextractps_avx(auVar63,1);
    uVar28 = vextractps_avx(auVar72,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if ((uVar19 & 0x40) != 0) {
    iVar14 = vextractps_avx(auVar63,2);
    uVar28 = vextractps_avx(auVar72,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  if (cVar18 < '\0') {
    iVar14 = vextractps_avx(auVar63,3);
    uVar28 = vextractps_avx(auVar72,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar28;
  }
  return;
}

// ApplyXPBDSpringDampingConstraints_avx @ 140931860

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraints_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6,uint param_7,float param_8,uint param_9)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  int iVar27;
  int iVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  char cVar42;
  uint uVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined4 uVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  longlong lVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  longlong lVar59;
  longlong lVar60;
  ulonglong uVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar68 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  float fVar83;
  undefined1 auVar85 [16];
  int iVar84;
  float fVar97;
  float fVar98;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  float fVar99;
  undefined1 auVar90 [32];
  undefined1 auVar100 [16];
  undefined1 auVar92 [32];
  undefined1 auVar86 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  float fVar101;
  undefined1 auVar102 [16];
  float fVar111;
  float fVar112;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar103 [16];
  float fVar113;
  float fVar117;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar104 [16];
  undefined1 auVar110 [32];
  undefined1 auVar118 [16];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar123 [16];
  undefined1 auVar122 [32];
  float fVar124;
  undefined1 auVar125 [16];
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  float fVar142;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  uint uVar157;
  uint uVar159;
  uint uVar160;
  uint uVar161;
  uint uVar162;
  uint uVar163;
  uint uVar164;
  undefined1 auVar158 [32];
  uint uVar165;
  int iVar166;
  float fVar168;
  float fVar169;
  undefined1 auVar167 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  float local_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float local_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
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
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  int iVar28;
  undefined1 auVar78 [32];
  undefined1 auVar91 [32];
  undefined1 auVar141 [32];
  
  uVar43 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar43 = param_9;
  }
  param_8 = param_8 + param_8;
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    auVar17 = vshufps_avx(ZEXT416((uint)param_8),ZEXT416((uint)param_8),0);
    auVar125 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar71._16_16_ = auVar125;
    auVar71._0_16_ = auVar125;
    auVar125 = vpshufd_avx(ZEXT416(param_6),0);
    uVar31 = 0;
    uVar61 = 0;
    do {
      auVar87._16_16_ = *(undefined1 (*) [16])(param_3 + 0x30 + uVar61 * 2);
      auVar87._0_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + uVar61 * 2);
      auVar105._16_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + uVar61 * 2);
      auVar105._0_16_ = *(undefined1 (*) [16])(param_3 + uVar61 * 2);
      auVar77 = vshufps_avx(auVar105,auVar87,0x88);
      auVar90 = vshufps_avx(auVar105,auVar87,0xdd);
      auVar102 = vpslld_avx(auVar77._0_16_,4);
      auVar118 = vpslld_avx(auVar77._16_16_,4);
      lVar62 = (longlong)auVar102._0_4_;
      lVar49 = (longlong)auVar102._4_4_;
      lVar48 = (longlong)auVar102._8_4_;
      lVar59 = (longlong)auVar102._12_4_;
      lVar66 = (longlong)auVar118._0_4_;
      lVar32 = (longlong)auVar118._4_4_;
      lVar64 = (longlong)auVar118._8_4_;
      lVar56 = (longlong)auVar118._12_4_;
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar62)),
                               ZEXT416(*(uint *)(param_1 + lVar49)),0x10);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar62)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar49)),0x10);
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar62)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar49)),0x10);
      uVar26 = *(uint *)(param_1 + 0xc + lVar62);
      uVar157 = *(uint *)(param_1 + 0xc + lVar49);
      auVar100 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar66)),
                               ZEXT416(*(uint *)(param_1 + lVar32)),0x10);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + lVar48)),0x20);
      lVar33 = (longlong)(auVar77._0_4_ * 3);
      auVar123 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar66)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar32)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + 4 + lVar48)),0x20);
      auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar66)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar32)),0x10);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar48)),0x20);
      lVar44 = (longlong)(auVar77._4_4_ * 3);
      auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(param_1 + lVar64)),0x20);
      lVar51 = (longlong)(auVar77._16_4_ * 3);
      auVar70 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + lVar59)),0x30);
      auVar102 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(param_1 + 4 + lVar64)),0x20);
      auVar123 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + 4 + lVar59)),0x30);
      lVar52 = (longlong)(auVar77._20_4_ * 3);
      auVar118 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_1 + 8 + lVar64)),0x20);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar59)),0x30);
      auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar51 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar52 * 4)),0x10);
      auVar137 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar51 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),0x10);
      auVar12 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar51 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),0x10);
      auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(param_1 + lVar56)),0x30);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar33 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x10);
      auVar14 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_1 + 4 + lVar56)),0x30);
      auVar102 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar33 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x10);
      auVar138 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + 8 + lVar56)),0x30);
      uVar159 = *(uint *)(param_1 + 0xc + lVar48);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar33 * 4)),
                               ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x10);
      auVar119._16_16_ = auVar100;
      auVar119._0_16_ = auVar70;
      uVar57 = uVar61 & 0xffffffff;
      auVar106._16_16_ = auVar14;
      auVar106._0_16_ = auVar123;
      auVar107._16_16_ = *(undefined1 (*) [16])(param_4 + 0x10 + uVar57);
      auVar107._0_16_ = *(undefined1 (*) [16])(param_4 + uVar57);
      auVar87 = vcmpps_avx(auVar107,
                           ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,1
                          );
      auVar72._16_16_ = auVar138;
      auVar72._0_16_ = auVar69;
      auVar88._4_4_ = __real_3f800000;
      auVar88._0_4_ = __real_3f800000;
      auVar88._8_4_ = __real_3f800000;
      auVar88._12_4_ = __real_3f800000;
      auVar88._16_4_ = __real_3f800000;
      auVar88._20_4_ = __real_3f800000;
      auVar88._24_4_ = __real_3f800000;
      auVar88._28_4_ = __real_3f800000;
      auVar78 = vdivps_avx(auVar88,auVar107);
      uVar160 = *(uint *)(param_1 + 0xc + lVar66);
      auVar87 = vblendvps_avx(auVar78,auVar88,auVar87);
      auVar86 = vinsertps_avx(ZEXT416(uVar26),ZEXT416(uVar157),0x10);
      auVar86 = vinsertps_avx(auVar86,ZEXT416(uVar159),0x20);
      uVar161 = *(uint *)(param_1 + 0xc + lVar32);
      uVar162 = *(uint *)(param_1 + 0xc + lVar64);
      auVar104 = vinsertps_avx(ZEXT416(uVar160),ZEXT416(uVar161),0x10);
      auVar104 = vinsertps_avx(auVar104,ZEXT416(uVar162),0x20);
      uVar163 = *(uint *)(param_1 + 0xc + lVar59);
      auVar86 = vinsertps_avx(auVar86,ZEXT416(uVar163),0x30);
      uVar164 = *(uint *)(param_1 + 0xc + lVar56);
      auVar104 = vinsertps_avx(auVar104,ZEXT416(uVar164),0x30);
      auVar68 = vpslld_avx(auVar90._0_16_,4);
      lVar33 = (longlong)(auVar77._24_4_ * 3);
      auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + lVar33 * 4)),0x20);
      auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(param_2 + 4 + lVar33 * 4)),0x20);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + 8 + lVar33 * 4)),0x20);
      auVar103 = vpslld_avx(auVar90._16_16_,4);
      lVar33 = (longlong)(auVar77._28_4_ * 3);
      auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + lVar33 * 4)),0x30);
      auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(param_2 + 4 + lVar33 * 4)),0x30);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + 8 + lVar33 * 4)),0x30);
      lVar63 = (longlong)auVar68._0_4_;
      lVar51 = (longlong)auVar68._4_4_;
      lVar53 = (longlong)auVar68._8_4_;
      lVar60 = (longlong)auVar68._12_4_;
      lVar33 = (longlong)auVar103._0_4_;
      lVar50 = (longlong)auVar103._4_4_;
      lVar67 = (longlong)auVar103._8_4_;
      lVar65 = (longlong)auVar103._12_4_;
      auVar68 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + lVar50)),0x10);
      auVar103 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar63)),
                               ZEXT416(*(uint *)(param_1 + lVar51)),0x10);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(*(uint *)(param_1 + lVar67)),0x20);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(*(uint *)(param_1 + lVar53)),0x20);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(*(uint *)(param_1 + lVar60)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar50)),0x10);
      auVar16 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar63)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar51)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 4 + lVar67)),0x20);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_1 + 4 + lVar53)),0x20);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(*(uint *)(param_1 + lVar65)),0x30);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_1 + 4 + lVar60)),0x30);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 4 + lVar65)),0x30);
      auVar73._16_16_ = auVar68;
      auVar73._0_16_ = auVar103;
      auVar68 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar63)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar51)),0x10);
      auVar177._16_16_ = auVar15;
      auVar177._0_16_ = auVar16;
      auVar103 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar33)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar50)),0x10);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(*(uint *)(param_1 + 8 + lVar53)),0x20);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(*(uint *)(param_1 + 8 + lVar67)),0x20);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(*(uint *)(param_1 + 8 + lVar60)),0x30);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(*(uint *)(param_1 + 8 + lVar65)),0x30);
      auVar74._16_16_ = auVar103;
      auVar74._0_16_ = auVar68;
      uVar165 = *(uint *)(param_1 + 0xc + lVar63);
      uVar2 = *(uint *)(param_1 + 0xc + lVar51);
      uVar3 = *(uint *)(param_1 + 0xc + lVar53);
      auVar68 = vinsertps_avx(ZEXT416(uVar165),ZEXT416(uVar2),0x10);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(uVar3),0x20);
      lVar44 = (longlong)(auVar77._8_4_ * 3);
      uVar4 = *(uint *)(param_1 + 0xc + lVar33);
      uVar5 = *(uint *)(param_1 + 0xc + lVar50);
      uVar6 = *(uint *)(param_1 + 0xc + lVar67);
      auVar103 = vinsertps_avx(ZEXT416(uVar4),ZEXT416(uVar5),0x10);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(uVar6),0x20);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar60);
      auVar68 = vinsertps_avx(auVar68,ZEXT416(uVar7),0x30);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar65);
      auVar103 = vinsertps_avx(auVar103,ZEXT416(uVar8),0x30);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x20);
      lVar44 = (longlong)(auVar77._12_4_ * 3);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x30);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x30);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x30);
      lVar44 = (longlong)(auVar90._16_4_ * 3);
      lVar52 = (longlong)(auVar90._20_4_ * 3);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar52 * 4)),0x10);
      auVar75._16_16_ = auVar85;
      auVar75._0_16_ = auVar13;
      auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),0x10);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),0x10);
      lVar44 = (longlong)(auVar90._24_4_ * 3);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x20);
      auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x20);
      auVar89._16_16_ = auVar137;
      auVar89._0_16_ = auVar102;
      auVar102 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x20);
      lVar44 = (longlong)(auVar90._28_4_ * 3);
      auVar137 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x30);
      auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x30);
      auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x30);
      lVar44 = (longlong)(auVar90._0_4_ * 3);
      lVar52 = (longlong)(auVar90._4_4_ * 3);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar52 * 4)),0x10);
      auVar76._16_16_ = auVar12;
      auVar76._0_16_ = auVar118;
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),0x10);
      auVar12 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),0x10);
      lVar44 = (longlong)(auVar90._8_4_ * 3);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x20);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x20);
      auVar77 = vsubps_avx(auVar119,auVar73);
      auVar88 = vsubps_avx(auVar106,auVar177);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x20);
      lVar44 = (longlong)(auVar90._12_4_ * 3);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_2 + lVar44 * 4)),0x30);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_2 + 4 + lVar44 * 4)),0x30);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_2 + 8 + lVar44 * 4)),0x30);
      auVar91 = vsubps_avx(auVar72,auVar74);
      auVar153._0_4_ =
           auVar91._0_4_ * auVar91._0_4_ +
           auVar77._0_4_ * auVar77._0_4_ + auVar88._0_4_ * auVar88._0_4_;
      auVar153._4_4_ =
           auVar91._4_4_ * auVar91._4_4_ +
           auVar77._4_4_ * auVar77._4_4_ + auVar88._4_4_ * auVar88._4_4_;
      auVar153._8_4_ =
           auVar91._8_4_ * auVar91._8_4_ +
           auVar77._8_4_ * auVar77._8_4_ + auVar88._8_4_ * auVar88._8_4_;
      auVar153._12_4_ =
           auVar91._12_4_ * auVar91._12_4_ +
           auVar77._12_4_ * auVar77._12_4_ + auVar88._12_4_ * auVar88._12_4_;
      auVar153._16_4_ =
           auVar91._16_4_ * auVar91._16_4_ +
           auVar77._16_4_ * auVar77._16_4_ + auVar88._16_4_ * auVar88._16_4_;
      auVar153._20_4_ =
           auVar91._20_4_ * auVar91._20_4_ +
           auVar77._20_4_ * auVar77._20_4_ + auVar88._20_4_ * auVar88._20_4_;
      auVar153._24_4_ =
           auVar91._24_4_ * auVar91._24_4_ +
           auVar77._24_4_ * auVar77._24_4_ + auVar88._24_4_ * auVar88._24_4_;
      auVar153._28_4_ =
           auVar91._28_4_ * auVar91._28_4_ +
           auVar77._28_4_ * auVar77._28_4_ + auVar88._28_4_ * auVar88._28_4_;
      auVar78 = vsqrtps_avx(auVar153);
      auVar77 = vdivps_avx(auVar77,auVar78);
      auVar90 = vdivps_avx(auVar88,auVar78);
      auVar88 = vdivps_avx(auVar91,auVar78);
      local_3a0 = auVar86._0_4_;
      fStack_39c = auVar86._4_4_;
      fStack_398 = auVar86._8_4_;
      fStack_394 = auVar86._12_4_;
      fStack_390 = auVar104._0_4_;
      fStack_38c = auVar104._4_4_;
      fStack_388 = auVar104._8_4_;
      fStack_384 = auVar104._12_4_;
      local_540 = auVar68._0_4_;
      fStack_53c = auVar68._4_4_;
      fStack_538 = auVar68._8_4_;
      fStack_534 = auVar68._12_4_;
      fStack_530 = auVar103._0_4_;
      fStack_52c = auVar103._4_4_;
      fStack_528 = auVar103._8_4_;
      fStack_524 = auVar103._12_4_;
      auVar176._0_4_ = local_3a0 + local_540;
      auVar176._4_4_ = fStack_39c + fStack_53c;
      auVar176._8_4_ = fStack_398 + fStack_538;
      auVar176._12_4_ = fStack_394 + fStack_534;
      auVar176._16_4_ = fStack_390 + fStack_530;
      auVar176._20_4_ = fStack_38c + fStack_52c;
      auVar176._24_4_ = fStack_388 + fStack_528;
      auVar176._28_4_ = fStack_384 + fStack_524;
      auVar78 = vdivps_avx(auVar71,auVar176);
      auVar91 = vsqrtps_avx(auVar78);
      auVar78 = vsubps_avx(auVar119,auVar75);
      auVar75 = vsubps_avx(auVar78,auVar73);
      local_220 = auVar17._0_4_;
      fStack_21c = auVar17._4_4_;
      fStack_218 = auVar17._8_4_;
      fStack_214 = auVar17._12_4_;
      local_360 = auVar87._0_4_;
      fStack_35c = auVar87._4_4_;
      fStack_358 = auVar87._8_4_;
      fStack_354 = auVar87._12_4_;
      fStack_350 = auVar87._16_4_;
      fStack_34c = auVar87._20_4_;
      fStack_348 = auVar87._24_4_;
      fStack_344 = auVar87._28_4_;
      auVar87 = vsubps_avx(auVar106,auVar89);
      auVar89 = vsubps_avx(auVar87,auVar177);
      auVar78 = vcmpps_avx(auVar153,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar120._4_4_ = __real_3f800000;
      auVar120._0_4_ = __real_3f800000;
      auVar120._8_4_ = __real_3f800000;
      auVar120._12_4_ = __real_3f800000;
      auVar120._16_4_ = __real_3f800000;
      auVar120._20_4_ = __real_3f800000;
      auVar120._24_4_ = __real_3f800000;
      auVar120._28_4_ = __real_3f800000;
      auVar87 = vblendvps_avx(auVar77,auVar120,auVar78);
      fVar124 = (float)(~auVar78._0_4_ & auVar90._0_4_);
      fVar130 = (float)(~auVar78._4_4_ & auVar90._4_4_);
      fVar131 = (float)(~auVar78._8_4_ & auVar90._8_4_);
      fVar132 = (float)(~auVar78._12_4_ & auVar90._12_4_);
      fVar133 = (float)(~auVar78._16_4_ & auVar90._16_4_);
      fVar134 = (float)(~auVar78._20_4_ & auVar90._20_4_);
      fVar135 = (float)(~auVar78._24_4_ & auVar90._24_4_);
      fVar136 = (float)(~auVar78._28_4_ & auVar90._28_4_);
      fVar142 = (float)(~auVar78._0_4_ & auVar88._0_4_);
      fVar146 = (float)(~auVar78._4_4_ & auVar88._4_4_);
      fVar147 = (float)(~auVar78._8_4_ & auVar88._8_4_);
      fVar148 = (float)(~auVar78._12_4_ & auVar88._12_4_);
      fVar149 = (float)(~auVar78._16_4_ & auVar88._16_4_);
      fVar150 = (float)(~auVar78._20_4_ & auVar88._20_4_);
      fVar151 = (float)(~auVar78._24_4_ & auVar88._24_4_);
      fVar152 = (float)(~auVar78._28_4_ & auVar88._28_4_);
      auVar78 = vsubps_avx(auVar72,auVar76);
      auVar78 = vsubps_avx(auVar78,auVar74);
      local_1e0 = auVar12._0_4_;
      fStack_1dc = auVar12._4_4_;
      fStack_1d8 = auVar12._8_4_;
      fStack_1d4 = auVar12._12_4_;
      fStack_1d0 = auVar102._0_4_;
      fStack_1cc = auVar102._4_4_;
      fStack_1c8 = auVar102._8_4_;
      fStack_1c4 = auVar102._12_4_;
      local_260 = auVar125._0_4_;
      fStack_25c = auVar125._4_4_;
      fStack_258 = auVar125._8_4_;
      fStack_254 = auVar125._12_4_;
      fVar83 = auVar91._0_4_ * local_220 * local_360 * local_260;
      fVar97 = auVar91._4_4_ * fStack_21c * fStack_35c * fStack_25c;
      fVar98 = auVar91._8_4_ * fStack_218 * fStack_358 * fStack_258;
      fVar99 = auVar91._12_4_ * fStack_214 * fStack_354 * fStack_254;
      local_260 = auVar91._16_4_ * local_220 * fStack_350 * local_260;
      fStack_25c = auVar91._20_4_ * fStack_21c * fStack_34c * fStack_25c;
      fStack_258 = auVar91._24_4_ * fStack_218 * fStack_348 * fStack_258;
      fStack_254 = auVar91._28_4_ * fStack_214 * fStack_344 * fStack_254;
      auVar77._0_4_ =
           (auVar87._0_4_ * (auVar75._0_4_ + auVar13._0_4_) +
            (auVar89._0_4_ + auVar118._0_4_) * fVar124 + fVar142 * (auVar78._0_4_ + local_1e0)) *
           (float)((uint)fVar83 ^
                  ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
      auVar77._4_4_ =
           (auVar87._4_4_ * (auVar75._4_4_ + auVar13._4_4_) +
            (auVar89._4_4_ + auVar118._4_4_) * fVar130 + fVar146 * (auVar78._4_4_ + fStack_1dc)) *
           (float)((uint)fVar97 ^ _UNK_150b50f64);
      auVar77._8_4_ =
           (auVar87._8_4_ * (auVar75._8_4_ + auVar13._8_4_) +
            (auVar89._8_4_ + auVar118._8_4_) * fVar131 + fVar147 * (auVar78._8_4_ + fStack_1d8)) *
           (float)((uint)fVar98 ^ _UNK_150b50f68);
      auVar77._12_4_ =
           (auVar87._12_4_ * (auVar75._12_4_ + auVar13._12_4_) +
            (auVar89._12_4_ + auVar118._12_4_) * fVar132 + fVar148 * (auVar78._12_4_ + fStack_1d4))
           * (float)((uint)fVar99 ^ _UNK_150b50f6c);
      auVar77._16_4_ =
           (auVar87._16_4_ * (auVar75._16_4_ + auVar137._0_4_) +
            (auVar89._16_4_ + auVar85._0_4_) * fVar133 + fVar149 * (auVar78._16_4_ + fStack_1d0)) *
           (float)((uint)local_260 ^ _UNK_150b50f70);
      auVar77._20_4_ =
           (auVar87._20_4_ * (auVar75._20_4_ + auVar137._4_4_) +
            (auVar89._20_4_ + auVar85._4_4_) * fVar134 + fVar150 * (auVar78._20_4_ + fStack_1cc)) *
           (float)((uint)fStack_25c ^ _UNK_150b50f74);
      auVar77._24_4_ =
           (auVar87._24_4_ * (auVar75._24_4_ + auVar137._8_4_) +
            (auVar89._24_4_ + auVar85._8_4_) * fVar135 + fVar151 * (auVar78._24_4_ + fStack_1c8)) *
           (float)((uint)fStack_258 ^ _UNK_150b50f78);
      auVar77._28_4_ =
           (auVar87._28_4_ * (auVar75._28_4_ + auVar137._12_4_) +
            (auVar89._28_4_ + auVar85._12_4_) * fVar136 + fVar152 * (auVar78._28_4_ + fStack_1c4)) *
           (float)((uint)fStack_254 ^ _UNK_150b50f7c);
      auVar102 = *(undefined1 (*) [16])(param_5 + uVar57);
      auVar118 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar57);
      auVar172._16_16_ = auVar118;
      auVar172._0_16_ = auVar102;
      auVar78 = vsubps_avx(auVar77,auVar172);
      auVar90._0_4_ = auVar176._0_4_ * fVar83 + __real_3f800000;
      auVar90._4_4_ = auVar176._4_4_ * fVar97 + __real_3f800000;
      auVar90._8_4_ = auVar176._8_4_ * fVar98 + __real_3f800000;
      auVar90._12_4_ = auVar176._12_4_ * fVar99 + __real_3f800000;
      auVar90._16_4_ = auVar176._16_4_ * local_260 + __real_3f800000;
      auVar90._20_4_ = auVar176._20_4_ * fStack_25c + __real_3f800000;
      auVar90._24_4_ = auVar176._24_4_ * fStack_258 + __real_3f800000;
      auVar90._28_4_ = auVar176._28_4_ * fStack_254 + __real_3f800000;
      auVar78 = vdivps_avx(auVar78,auVar90);
      fVar83 = auVar78._0_4_;
      fVar101 = auVar87._0_4_ * fVar83;
      fVar97 = auVar78._4_4_;
      fVar111 = auVar87._4_4_ * fVar97;
      fVar98 = auVar78._8_4_;
      fVar112 = auVar87._8_4_ * fVar98;
      fVar99 = auVar78._12_4_;
      fVar113 = auVar87._12_4_ * fVar99;
      fVar10 = auVar78._16_4_;
      fVar114 = auVar87._16_4_ * fVar10;
      fVar168 = auVar78._20_4_;
      fVar115 = auVar87._20_4_ * fVar168;
      fVar11 = auVar78._24_4_;
      fVar116 = auVar87._24_4_ * fVar11;
      fVar169 = auVar78._28_4_;
      fVar117 = auVar87._28_4_ * fVar169;
      auVar85._0_4_ = auVar70._0_4_ + local_3a0 * fVar101;
      auVar85._4_4_ = auVar70._4_4_ + fStack_39c * fVar111;
      auVar85._8_4_ = auVar70._8_4_ + fStack_398 * fVar112;
      auVar85._12_4_ = auVar70._12_4_ + fStack_394 * fVar113;
      auVar91._16_4_ = auVar100._0_4_ + fStack_390 * fVar114;
      auVar91._0_16_ = auVar85;
      auVar91._20_4_ = auVar100._4_4_ + fStack_38c * fVar115;
      auVar91._24_4_ = auVar100._8_4_ + fStack_388 * fVar116;
      auVar91._28_4_ = auVar100._12_4_ + fStack_384 * fVar117;
      *(float *)(param_1 + lVar62) = auVar85._0_4_;
      uVar47 = vextractps_avx(auVar85,1);
      *(undefined4 *)(param_1 + lVar49) = uVar47;
      fVar124 = fVar124 * fVar83;
      fVar130 = fVar130 * fVar97;
      fVar131 = fVar131 * fVar98;
      fVar132 = fVar132 * fVar99;
      fVar133 = fVar133 * fVar10;
      fVar134 = fVar134 * fVar168;
      fVar135 = fVar135 * fVar11;
      fVar136 = fVar136 * fVar169;
      uVar47 = vextractps_avx(auVar85,2);
      *(undefined4 *)(param_1 + lVar48) = uVar47;
      uVar47 = vextractps_avx(auVar85,3);
      *(undefined4 *)(param_1 + lVar59) = uVar47;
      auVar100 = auVar91._16_16_;
      *(float *)(param_1 + lVar66) = auVar91._16_4_;
      uVar47 = vextractps_avx(auVar100,1);
      *(undefined4 *)(param_1 + lVar32) = uVar47;
      uVar47 = vextractps_avx(auVar100,2);
      *(undefined4 *)(param_1 + lVar64) = uVar47;
      local_480 = auVar123._0_4_;
      fStack_47c = auVar123._4_4_;
      fStack_478 = auVar123._8_4_;
      fStack_474 = auVar123._12_4_;
      fStack_470 = auVar14._0_4_;
      fStack_46c = auVar14._4_4_;
      fStack_468 = auVar14._8_4_;
      fStack_464 = auVar14._12_4_;
      auVar123._0_4_ = local_3a0 * fVar124 + local_480;
      auVar123._4_4_ = fStack_39c * fVar130 + fStack_47c;
      auVar123._8_4_ = fStack_398 * fVar131 + fStack_478;
      auVar123._12_4_ = fStack_394 * fVar132 + fStack_474;
      auVar121._16_4_ = fStack_390 * fVar133 + fStack_470;
      auVar121._0_16_ = auVar123;
      auVar121._20_4_ = fStack_38c * fVar134 + fStack_46c;
      auVar121._24_4_ = fStack_388 * fVar135 + fStack_468;
      auVar121._28_4_ = fStack_384 * fVar136 + fStack_464;
      uVar47 = vextractps_avx(auVar100,3);
      *(undefined4 *)(param_1 + lVar56) = uVar47;
      *(float *)(param_1 + 4 + lVar62) = auVar123._0_4_;
      uVar47 = vextractps_avx(auVar123,1);
      *(undefined4 *)(param_1 + 4 + lVar49) = uVar47;
      fVar142 = fVar142 * fVar83;
      fVar146 = fVar146 * fVar97;
      fVar147 = fVar147 * fVar98;
      fVar148 = fVar148 * fVar99;
      fVar149 = fVar149 * fVar10;
      fVar150 = fVar150 * fVar168;
      fVar151 = fVar151 * fVar11;
      fVar152 = fVar152 * fVar169;
      uVar47 = vextractps_avx(auVar123,2);
      *(undefined4 *)(param_1 + 4 + lVar48) = uVar47;
      uVar47 = vextractps_avx(auVar123,3);
      *(undefined4 *)(param_1 + 4 + lVar59) = uVar47;
      auVar123 = auVar121._16_16_;
      *(float *)(param_1 + 4 + lVar66) = auVar121._16_4_;
      uVar47 = vextractps_avx(auVar123,1);
      *(undefined4 *)(param_1 + 4 + lVar32) = uVar47;
      uVar47 = vextractps_avx(auVar123,2);
      *(undefined4 *)(param_1 + 4 + lVar64) = uVar47;
      auVar100._0_4_ = auVar69._0_4_ + local_3a0 * fVar142;
      auVar100._4_4_ = auVar69._4_4_ + fStack_39c * fVar146;
      auVar100._8_4_ = auVar69._8_4_ + fStack_398 * fVar147;
      auVar100._12_4_ = auVar69._12_4_ + fStack_394 * fVar148;
      auVar122._16_4_ = auVar138._0_4_ + fStack_390 * fVar149;
      auVar122._0_16_ = auVar100;
      auVar122._20_4_ = auVar138._4_4_ + fStack_38c * fVar150;
      auVar122._24_4_ = auVar138._8_4_ + fStack_388 * fVar151;
      auVar122._28_4_ = auVar138._12_4_ + fStack_384 * fVar152;
      uVar47 = vextractps_avx(auVar123,3);
      *(undefined4 *)(param_1 + 4 + lVar56) = uVar47;
      *(float *)(param_1 + 8 + lVar62) = auVar100._0_4_;
      uVar47 = vextractps_avx(auVar100,1);
      *(undefined4 *)(param_1 + 8 + lVar49) = uVar47;
      uVar47 = vextractps_avx(auVar100,2);
      *(undefined4 *)(param_1 + 8 + lVar48) = uVar47;
      uVar47 = vextractps_avx(auVar100,3);
      *(undefined4 *)(param_1 + 8 + lVar59) = uVar47;
      auVar69 = auVar122._16_16_;
      *(float *)(param_1 + 8 + lVar66) = auVar122._16_4_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + 8 + lVar32) = uVar47;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + 8 + lVar64) = uVar47;
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + 8 + lVar56) = uVar47;
      *(uint *)(param_1 + 0xc + lVar62) = uVar26;
      *(uint *)(param_1 + 0xc + lVar49) = uVar157;
      *(uint *)(param_1 + 0xc + lVar48) = uVar159;
      *(uint *)(param_1 + 0xc + lVar59) = uVar163;
      *(uint *)(param_1 + 0xc + lVar66) = uVar160;
      *(uint *)(param_1 + 0xc + lVar32) = uVar161;
      *(uint *)(param_1 + 0xc + lVar64) = uVar162;
      auVar92._0_4_ = local_540 * fVar101;
      auVar92._4_4_ = fStack_53c * fVar111;
      auVar92._8_4_ = fStack_538 * fVar112;
      auVar92._12_4_ = fStack_534 * fVar113;
      auVar92._16_4_ = fStack_530 * fVar114;
      auVar92._20_4_ = fStack_52c * fVar115;
      auVar92._24_4_ = fStack_528 * fVar116;
      auVar92._28_4_ = fStack_524 * fVar117;
      auVar87 = vsubps_avx(auVar73,auVar92);
      *(uint *)(param_1 + 0xc + lVar56) = uVar164;
      *(int *)(param_1 + lVar63) = auVar87._0_4_;
      auVar69 = auVar87._0_16_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + lVar51) = uVar47;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + lVar53) = uVar47;
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + lVar60) = uVar47;
      auVar69 = auVar87._16_16_;
      *(int *)(param_1 + lVar33) = auVar87._16_4_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + lVar50) = uVar47;
      auVar108._0_4_ = local_540 * fVar124;
      auVar108._4_4_ = fStack_53c * fVar130;
      auVar108._8_4_ = fStack_538 * fVar131;
      auVar108._12_4_ = fStack_534 * fVar132;
      auVar108._16_4_ = fStack_530 * fVar133;
      auVar108._20_4_ = fStack_52c * fVar134;
      auVar108._24_4_ = fStack_528 * fVar135;
      auVar108._28_4_ = fStack_524 * fVar136;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + lVar67) = uVar47;
      auVar87 = vsubps_avx(auVar177,auVar108);
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + lVar65) = uVar47;
      *(int *)(param_1 + 4 + lVar63) = auVar87._0_4_;
      auVar69 = auVar87._0_16_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + 4 + lVar51) = uVar47;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + 4 + lVar53) = uVar47;
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + 4 + lVar60) = uVar47;
      auVar69 = auVar87._16_16_;
      *(int *)(param_1 + 4 + lVar33) = auVar87._16_4_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + 4 + lVar50) = uVar47;
      auVar109._0_4_ = local_540 * fVar142;
      auVar109._4_4_ = fStack_53c * fVar146;
      auVar109._8_4_ = fStack_538 * fVar147;
      auVar109._12_4_ = fStack_534 * fVar148;
      auVar109._16_4_ = fStack_530 * fVar149;
      auVar109._20_4_ = fStack_52c * fVar150;
      auVar109._24_4_ = fStack_528 * fVar151;
      auVar109._28_4_ = fStack_524 * fVar152;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + 4 + lVar67) = uVar47;
      auVar87 = vsubps_avx(auVar74,auVar109);
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + 4 + lVar65) = uVar47;
      *(int *)(param_1 + 8 + lVar63) = auVar87._0_4_;
      auVar69 = auVar87._0_16_;
      uVar47 = vextractps_avx(auVar69,1);
      *(undefined4 *)(param_1 + 8 + lVar51) = uVar47;
      uVar47 = vextractps_avx(auVar69,2);
      *(undefined4 *)(param_1 + 8 + lVar53) = uVar47;
      uVar47 = vextractps_avx(auVar69,3);
      *(undefined4 *)(param_1 + 8 + lVar60) = uVar47;
      *(int *)(param_1 + 8 + lVar33) = auVar87._16_4_;
      *(int *)(param_1 + 8 + lVar50) = auVar87._20_4_;
      auVar69._0_4_ = auVar102._0_4_ + fVar83;
      auVar69._4_4_ = auVar102._4_4_ + fVar97;
      auVar69._8_4_ = auVar102._8_4_ + fVar98;
      auVar69._12_4_ = auVar102._12_4_ + fVar99;
      auVar78._16_4_ = auVar118._0_4_ + fVar10;
      auVar78._0_16_ = auVar69;
      auVar78._20_4_ = auVar118._4_4_ + fVar168;
      auVar78._24_4_ = auVar118._8_4_ + fVar11;
      auVar78._28_4_ = auVar118._12_4_ + fVar169;
      *(int *)(param_1 + 8 + lVar67) = auVar87._24_4_;
      *(int *)(param_1 + 8 + lVar65) = auVar87._28_4_;
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar57) = auVar78._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar57) = auVar69;
      *(uint *)(param_1 + 0xc + lVar63) = uVar165;
      *(uint *)(param_1 + 0xc + lVar51) = uVar2;
      *(uint *)(param_1 + 0xc + lVar53) = uVar3;
      *(uint *)(param_1 + 0xc + lVar60) = uVar7;
      *(uint *)(param_1 + 0xc + lVar33) = uVar4;
      *(uint *)(param_1 + 0xc + lVar50) = uVar5;
      *(uint *)(param_1 + 0xc + lVar67) = uVar6;
      *(uint *)(param_1 + 0xc + lVar65) = uVar8;
      uVar61 = uVar61 + 0x20;
      uVar26 = (int)uVar31 + 8;
      uVar31 = (ulonglong)uVar26;
    } while ((int)uVar26 < (int)(uVar43 & 0xfffffff8));
    if ((int)param_9 <= (int)uVar26) {
      return;
    }
  }
  auVar125 = vpshufd_avx(ZEXT416((uint)uVar31),0);
  auVar79._16_16_ = auVar125;
  auVar79._0_16_ = auVar125;
  auVar102 = vpshufd_avx(ZEXT416(param_9),0);
  pauVar1 = (undefined1 (*) [16])(param_3 + uVar31 * 8);
  auVar118 = SUB3216(auVar79 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar69 = SUB3216(auVar79 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar125 = vpcmpgtd_avx(auVar102,auVar69);
  auVar17 = vpcmpgtd_avx(auVar102,auVar118);
  auVar80._16_16_ = auVar125;
  auVar80._0_16_ = auVar17;
  uVar43 = vmovmskps_avx(auVar80);
  if (uVar43 == 0xff) {
    auVar139._16_16_ = pauVar1[3];
    auVar139._0_16_ = pauVar1[1];
    auVar143._16_16_ = pauVar1[2];
    auVar143._0_16_ = *pauVar1;
    auVar71 = vshufps_avx(auVar143,auVar139,0x88);
    auVar87 = vshufps_avx(auVar143,auVar139,0xdd);
  }
  else {
    auVar125 = vpcmpgtd_avx(auVar102,auVar69);
    auVar17 = vpcmpgtd_avx(auVar102,auVar118);
    auVar70._0_4_ =
         auVar17._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar70._4_4_ = auVar17._4_4_ & _UNK_150b519c4;
    auVar70._8_4_ = auVar17._8_4_ & _UNK_150b519c8;
    auVar70._12_4_ = auVar17._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar70,1);
    vextractps_avx(auVar70,2);
    vextractps_avx(auVar70,3);
    auVar137._0_4_ =
         auVar17._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar137._4_4_ = auVar17._4_4_ & _UNK_150b519e4;
    auVar137._8_4_ = auVar17._8_4_ & _UNK_150b519e8;
    auVar137._12_4_ = auVar17._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar137,1);
    vextractps_avx(auVar137,2);
    vextractps_avx(auVar137,3);
    auVar71 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar125._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar87 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar125._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar137._0_4_))));
  }
  auVar137 = vpcmpgtd_avx(auVar102,auVar69);
  auVar138 = vpcmpgtd_avx(auVar102,auVar118);
  auVar158._16_16_ = auVar137;
  auVar158._0_16_ = auVar138;
  auVar86 = vpslld_avx(auVar71._0_16_,4);
  auVar104 = vpslld_avx(auVar71._16_16_,4);
  auVar102 = vpand_avx(auVar138,auVar86);
  lVar32 = param_1 + auVar102._0_4_;
  lVar33 = param_1 + auVar102._4_4_;
  lVar44 = param_1 + auVar102._8_4_;
  lVar51 = param_1 + auVar102._12_4_;
  auVar118 = vpand_avx(auVar137,auVar104);
  lVar52 = param_1 + auVar118._0_4_;
  auVar125 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar102._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar102._4_4_)),0x10);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar118._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar118._4_4_)),0x10);
  lVar48 = param_1 + auVar118._4_4_;
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + auVar102._8_4_)),0x20);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_1 + auVar118._8_4_)),0x20);
  lVar49 = param_1 + auVar118._8_4_;
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_1 + auVar118._12_4_)),0x30);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + auVar102._12_4_)),0x30);
  uVar157 = auVar138._0_4_;
  uVar159 = auVar138._4_4_;
  uVar160 = auVar138._8_4_;
  uVar161 = auVar138._12_4_;
  uVar162 = auVar137._0_4_;
  uVar163 = auVar137._4_4_;
  uVar164 = auVar137._8_4_;
  uVar165 = auVar137._12_4_;
  lVar50 = param_1 + auVar118._12_4_;
  uVar34 = (ulonglong)(uVar162 & _UNK_150b50d50);
  uVar35 = (ulonglong)(uVar163 & _UNK_150b50d54);
  auVar102 = vinsertps_avx(ZEXT416(*(uint *)(uVar34 + lVar52)),ZEXT416(*(uint *)(uVar35 + lVar48)),
                           0x10);
  uVar36 = (ulonglong)(uVar164 & _UNK_150b50d58);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(uVar36 + lVar49)),0x20);
  uVar37 = (ulonglong)(uVar165 & _UNK_150b50d5c);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(uVar37 + lVar50)),0x30);
  uVar57 = (ulonglong)
           (uVar157 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004);
  uVar61 = (ulonglong)(uVar159 & _UNK_150b50d44);
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar32)),ZEXT416(*(uint *)(uVar61 + lVar33)),
                           0x10);
  uVar38 = (ulonglong)(uVar160 & _UNK_150b50d48);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar38 + lVar44)),0x20);
  uVar39 = (ulonglong)(uVar161 & _UNK_150b50d4c);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar39 + lVar51)),0x30);
  auVar68._0_4_ = uVar157 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar68._4_4_ = uVar159 & _UNK_150b50d64;
  auVar68._8_4_ = uVar160 & _UNK_150b50d68;
  auVar68._12_4_ = uVar161 & _UNK_150b50d6c;
  auVar93._16_16_ = auVar17;
  auVar93._0_16_ = auVar125;
  uVar54 = (ulonglong)(uVar163 & _UNK_150b50d74);
  uVar45 = (ulonglong)(uVar164 & _UNK_150b50d78);
  uVar40 = (ulonglong)(uVar165 & _UNK_150b50d7c);
  uVar58 = (ulonglong)(uVar162 & _UNK_150b50d70);
  auVar125 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar52)),ZEXT416(*(uint *)(uVar54 + lVar48)),
                           0x10);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(uVar45 + lVar49)),0x20);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(uVar40 + lVar50)),0x30);
  uVar26 = vextractps_avx(auVar68,1);
  uVar55 = (ulonglong)uVar26;
  uVar26 = vextractps_avx(auVar68,2);
  uVar46 = (ulonglong)uVar26;
  uVar18 = (ulonglong)auVar68._0_4_;
  uVar41 = (ulonglong)auVar68._12_4_;
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar32)),ZEXT416(*(uint *)(uVar55 + lVar33)),
                          0x10);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar46 + lVar44)),0x20);
  auVar126._16_16_ = auVar102;
  auVar126._0_16_ = auVar118;
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar41 + lVar51)),0x30);
  auVar140._16_16_ = auVar125;
  auVar140._0_16_ = auVar17;
  auVar68 = vpslld_avx(auVar87._0_16_,4);
  auVar69 = vpand_avx(auVar138,auVar68);
  auVar103 = vpslld_avx(auVar87._16_16_,4);
  auVar118 = vpand_avx(auVar137,auVar103);
  lVar53 = param_1 + auVar69._0_4_;
  auVar125 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar69._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar69._4_4_)),0x10);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + auVar69._8_4_)),0x20);
  lVar56 = param_1 + auVar69._4_4_;
  lVar59 = param_1 + auVar69._8_4_;
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar118._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar118._4_4_)),0x10);
  lVar60 = param_1 + auVar118._0_4_;
  lVar62 = param_1 + auVar118._4_4_;
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_1 + auVar118._8_4_)),0x20);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_1 + auVar118._12_4_)),0x30);
  lVar63 = param_1 + auVar118._8_4_;
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + auVar69._12_4_)),0x30);
  auVar102 = vinsertps_avx(ZEXT416(*(uint *)(uVar34 + lVar60)),ZEXT416(*(uint *)(uVar35 + lVar62)),
                           0x10);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(uVar36 + lVar63)),0x20);
  lVar64 = param_1 + auVar118._12_4_;
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(uVar37 + lVar64)),0x30);
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar53)),ZEXT416(*(uint *)(uVar61 + lVar56)),
                           0x10);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar38 + lVar59)),0x20);
  lVar65 = param_1 + auVar69._12_4_;
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar39 + lVar65)),0x30);
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar60)),ZEXT416(*(uint *)(uVar54 + lVar62)),
                          0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar45 + lVar63)),0x20);
  auVar144._16_16_ = auVar17;
  auVar144._0_16_ = auVar125;
  auVar125 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar40 + lVar64)),0x30);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar53)),ZEXT416(*(uint *)(uVar55 + lVar56)),
                          0x10);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar46 + lVar59)),0x20);
  auVar170._16_16_ = auVar102;
  auVar170._0_16_ = auVar118;
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar41 + lVar65)),0x30);
  auVar154._16_16_ = auVar125;
  auVar154._0_16_ = auVar17;
  auVar78 = vmaskmovps_avx(auVar158,auVar93);
  auVar77 = vmaskmovps_avx(auVar158,auVar126);
  auVar90 = vmaskmovps_avx(auVar158,auVar140);
  auVar88 = vmaskmovps_avx(auVar158,auVar144);
  auVar91 = vmaskmovps_avx(auVar158,auVar170);
  auVar75 = vmaskmovps_avx(auVar158,auVar154);
  auVar89 = vsubps_avx(auVar78,auVar88);
  auVar73 = vsubps_avx(auVar77,auVar91);
  auVar118._0_4_ = uVar157 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
  ;
  auVar118._4_4_ = uVar159 & _UNK_150b50d84;
  auVar118._8_4_ = uVar160 & _UNK_150b50d88;
  auVar118._12_4_ = uVar161 & _UNK_150b50d8c;
  uVar47 = vextractps_avx(auVar118,1);
  lVar66 = CONCAT44((int)((ulonglong)lVar63 >> 0x20),uVar47);
  uVar26 = vextractps_avx(auVar118,2);
  uVar47 = vextractps_avx(auVar118,3);
  lVar67 = CONCAT44((int)((ulonglong)lVar59 >> 0x20),uVar47);
  auVar74 = vsubps_avx(auVar90,auVar75);
  auVar167._0_4_ =
       auVar73._0_4_ * auVar73._0_4_ + auVar89._0_4_ * auVar89._0_4_ + auVar74._0_4_ * auVar74._0_4_
  ;
  auVar167._4_4_ =
       auVar73._4_4_ * auVar73._4_4_ + auVar89._4_4_ * auVar89._4_4_ + auVar74._4_4_ * auVar74._4_4_
  ;
  auVar167._8_4_ =
       auVar73._8_4_ * auVar73._8_4_ + auVar89._8_4_ * auVar89._8_4_ + auVar74._8_4_ * auVar74._8_4_
  ;
  auVar167._12_4_ =
       auVar73._12_4_ * auVar73._12_4_ + auVar89._12_4_ * auVar89._12_4_ +
       auVar74._12_4_ * auVar74._12_4_;
  auVar167._16_4_ =
       auVar73._16_4_ * auVar73._16_4_ + auVar89._16_4_ * auVar89._16_4_ +
       auVar74._16_4_ * auVar74._16_4_;
  auVar167._20_4_ =
       auVar73._20_4_ * auVar73._20_4_ + auVar89._20_4_ * auVar89._20_4_ +
       auVar74._20_4_ * auVar74._20_4_;
  auVar167._24_4_ =
       auVar73._24_4_ * auVar73._24_4_ + auVar89._24_4_ * auVar89._24_4_ +
       auVar74._24_4_ * auVar74._24_4_;
  auVar167._28_4_ =
       auVar73._28_4_ * auVar73._28_4_ + auVar89._28_4_ * auVar89._28_4_ +
       auVar74._28_4_ * auVar74._28_4_;
  auVar72 = vsqrtps_avx(auVar167);
  auVar89 = vdivps_avx(auVar89,auVar72);
  auVar73 = vdivps_avx(auVar73,auVar72);
  auVar74 = vdivps_avx(auVar74,auVar72);
  auVar72 = vcmpps_avx(auVar167,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar89 = vblendvps_avx(auVar89,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar72);
  auVar173._0_4_ = ~auVar72._0_4_ & auVar73._0_4_;
  auVar173._4_4_ = ~auVar72._4_4_ & auVar73._4_4_;
  auVar173._8_4_ = ~auVar72._8_4_ & auVar73._8_4_;
  auVar173._12_4_ = ~auVar72._12_4_ & auVar73._12_4_;
  auVar173._16_4_ = ~auVar72._16_4_ & auVar73._16_4_;
  auVar173._20_4_ = ~auVar72._20_4_ & auVar73._20_4_;
  auVar173._24_4_ = ~auVar72._24_4_ & auVar73._24_4_;
  auVar173._28_4_ = ~auVar72._28_4_ & auVar73._28_4_;
  auVar155._0_4_ = ~auVar72._0_4_ & auVar74._0_4_;
  auVar155._4_4_ = ~auVar72._4_4_ & auVar74._4_4_;
  auVar155._8_4_ = ~auVar72._8_4_ & auVar74._8_4_;
  auVar155._12_4_ = ~auVar72._12_4_ & auVar74._12_4_;
  auVar155._16_4_ = ~auVar72._16_4_ & auVar74._16_4_;
  auVar155._20_4_ = ~auVar72._20_4_ & auVar74._20_4_;
  auVar155._24_4_ = ~auVar72._24_4_ & auVar74._24_4_;
  auVar155._28_4_ = ~auVar72._28_4_ & auVar74._28_4_;
  auVar89 = vmaskmovps_avx(auVar158,auVar89);
  auVar72 = vmaskmovps_avx(auVar158,auVar173);
  auVar73 = vmaskmovps_avx(auVar158,auVar155);
  auVar125 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar162 & _UNK_150b50d90) + lVar52)),
                           ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d94) + lVar48)),0x10);
  auVar17._4_4_ = auVar71._20_4_ * 3;
  auVar17._0_4_ = auVar71._16_4_ * 3;
  auVar17._8_4_ = auVar71._24_4_ * 3;
  auVar17._12_4_ = auVar71._28_4_ * 3;
  auVar85 = vpand_avx(auVar137,auVar17);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar162 & _UNK_150b50d90) + lVar60)),
                          ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d94) + lVar62)),0x10);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)((ulonglong)(uVar164 & _UNK_150b50d98) + lVar49
                                                     )),0x20);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar164 & _UNK_150b50d98) + lVar63))
                          ,0x20);
  auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)((ulonglong)(uVar165 & _UNK_150b50d9c) + lVar50
                                                     )),0x30);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar165 & _UNK_150b50d9c) + lVar64))
                          ,0x30);
  auVar102 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar118._0_4_ + lVar32)),
                           ZEXT416(*(uint *)(lVar66 + lVar33)),0x10);
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar118._0_4_ + lVar53)),
                           ZEXT416(*(uint *)(lVar66 + lVar56)),0x10);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)((ulonglong)uVar26 + lVar44)),0x20);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)((ulonglong)uVar26 + lVar59)),0x20);
  auVar102 = vinsertps_avx(auVar102,ZEXT416(*(uint *)(lVar67 + lVar51)),0x30);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(lVar67 + lVar65)),0x30);
  lVar32 = param_2 + (longlong)auVar85._0_4_ * 4;
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar85._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar85._4_4_ * 4)),0x10);
  lVar33 = param_2 + (longlong)auVar85._4_4_ * 4;
  auVar100 = vinsertps_avx(ZEXT416(*(uint *)(uVar34 + lVar32)),ZEXT416(*(uint *)(uVar35 + lVar33)),
                           0x10);
  auVar123 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar32)),ZEXT416(*(uint *)(uVar54 + lVar33)),
                           0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_2 + (longlong)auVar85._8_4_ * 4)),0x20);
  lVar32 = param_2 + (longlong)auVar85._8_4_ * 4;
  auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(uVar36 + lVar32)),0x20);
  auVar123 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(uVar45 + lVar32)),0x20);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_2 + (longlong)auVar85._12_4_ * 4)),0x30);
  lVar32 = param_2 + (longlong)auVar85._12_4_ * 4;
  auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(uVar37 + lVar32)),0x30);
  auVar123 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(uVar40 + lVar32)),0x30);
  auVar12._4_4_ = auVar71._4_4_ * 3;
  auVar12._0_4_ = auVar71._0_4_ * 3;
  auVar12._8_4_ = auVar71._8_4_ * 3;
  auVar12._12_4_ = auVar71._12_4_ * 3;
  auVar70 = vpand_avx(auVar138,auVar12);
  auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar70._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar70._4_4_ * 4)),0x10);
  auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + (longlong)auVar70._8_4_ * 4)),0x20);
  auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + (longlong)auVar70._12_4_ * 4)),0x30);
  auVar81._16_16_ = auVar69;
  auVar81._0_16_ = auVar85;
  lVar32 = param_2 + (longlong)auVar70._0_4_ * 4;
  lVar33 = param_2 + (longlong)auVar70._4_4_ * 4;
  lVar44 = param_2 + (longlong)auVar70._8_4_ * 4;
  lVar51 = param_2 + (longlong)auVar70._12_4_ * 4;
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar32)),ZEXT416(*(uint *)(uVar61 + lVar33)),
                          0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar38 + lVar44)),0x20);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar39 + lVar51)),0x30);
  auVar171._16_16_ = auVar100;
  auVar171._0_16_ = auVar69;
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar32)),ZEXT416(*(uint *)(uVar55 + lVar33)),
                          0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar46 + lVar44)),0x20);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar41 + lVar51)),0x30);
  auVar156._16_16_ = auVar123;
  auVar156._0_16_ = auVar69;
  auVar13._4_4_ = auVar87._20_4_ * 3;
  auVar13._0_4_ = auVar87._16_4_ * 3;
  auVar13._8_4_ = auVar87._24_4_ * 3;
  auVar13._12_4_ = auVar87._28_4_ * 3;
  auVar14._4_4_ = auVar87._4_4_ * 3;
  auVar14._0_4_ = auVar87._0_4_ * 3;
  auVar14._8_4_ = auVar87._8_4_ * 3;
  auVar14._12_4_ = auVar87._12_4_ * 3;
  auVar70 = vpand_avx(auVar137,auVar13);
  lVar32 = param_2 + (longlong)auVar70._0_4_ * 4;
  lVar33 = param_2 + (longlong)auVar70._4_4_ * 4;
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(uVar34 + lVar32)),ZEXT416(*(uint *)(uVar35 + lVar33)),
                          0x10);
  auVar12 = vpand_avx(auVar138,auVar14);
  auVar100 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar32)),ZEXT416(*(uint *)(uVar54 + lVar33)),
                           0x10);
  lVar32 = param_2 + (longlong)auVar70._8_4_ * 4;
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar36 + lVar32)),0x20);
  auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(uVar45 + lVar32)),0x20);
  auVar123 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar70._0_4_ * 4)),
                           ZEXT416(*(uint *)(param_2 + (longlong)auVar70._4_4_ * 4)),0x10);
  auVar123 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(param_2 + (longlong)auVar70._8_4_ * 4)),0x20);
  auVar123 = vinsertps_avx(auVar123,ZEXT416(*(uint *)(param_2 + (longlong)auVar70._12_4_ * 4)),0x30)
  ;
  auVar85 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar12._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar12._4_4_ * 4)),0x10);
  auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + (longlong)auVar12._8_4_ * 4)),0x20);
  auVar85 = vinsertps_avx(auVar85,ZEXT416(*(uint *)(param_2 + (longlong)auVar12._12_4_ * 4)),0x30);
  lVar32 = param_2 + (longlong)auVar70._12_4_ * 4;
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(uVar37 + lVar32)),0x30);
  auVar100 = vinsertps_avx(auVar100,ZEXT416(*(uint *)(uVar40 + lVar32)),0x30);
  lVar32 = param_2 + (longlong)auVar12._0_4_ * 4;
  lVar33 = param_2 + (longlong)auVar12._4_4_ * 4;
  auVar70 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar32)),ZEXT416(*(uint *)(uVar61 + lVar33)),
                          0x10);
  auVar137 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar32)),ZEXT416(*(uint *)(uVar55 + lVar33)),
                           0x10);
  lVar32 = param_2 + (longlong)auVar12._8_4_ * 4;
  param_2 = param_2 + (longlong)auVar12._12_4_ * 4;
  auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar38 + lVar32)),0x20);
  auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar39 + param_2)),0x30);
  auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(uVar46 + lVar32)),0x20);
  lVar32 = (longlong)(int)((uint)uVar31 << 2);
  auVar87 = vmaskmovps_avx(auVar158,*(undefined1 (*) [32])(param_4 + lVar32));
  auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(uVar41 + param_2)),0x30);
  auVar71 = vcmpps_avx(auVar87,
                       ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,1);
  auVar127._4_4_ = __real_3f800000;
  auVar127._0_4_ = __real_3f800000;
  auVar127._8_4_ = __real_3f800000;
  auVar127._12_4_ = __real_3f800000;
  auVar127._16_4_ = __real_3f800000;
  auVar127._20_4_ = __real_3f800000;
  auVar127._24_4_ = __real_3f800000;
  auVar127._28_4_ = __real_3f800000;
  auVar87 = vdivps_avx(auVar127,auVar87);
  auVar71 = vblendvps_avx(auVar87,auVar127,auVar71);
  auVar12 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
  auVar174._16_16_ = auVar12;
  auVar174._0_16_ = auVar12;
  fVar83 = auVar118._0_4_;
  fVar124 = auVar102._0_4_;
  auVar175._0_4_ = fVar124 + fVar83;
  fVar98 = auVar118._4_4_;
  fVar130 = auVar102._4_4_;
  auVar175._4_4_ = fVar130 + fVar98;
  fVar10 = auVar118._8_4_;
  fVar131 = auVar102._8_4_;
  auVar175._8_4_ = fVar131 + fVar10;
  fVar11 = auVar118._12_4_;
  fVar132 = auVar102._12_4_;
  auVar175._12_4_ = fVar132 + fVar11;
  fVar101 = auVar17._0_4_;
  fVar133 = auVar125._0_4_;
  auVar175._16_4_ = fVar133 + fVar101;
  fVar112 = auVar17._4_4_;
  fVar134 = auVar125._4_4_;
  auVar175._20_4_ = fVar134 + fVar112;
  fVar114 = auVar17._8_4_;
  fVar135 = auVar125._8_4_;
  auVar175._24_4_ = fVar135 + fVar114;
  fVar116 = auVar17._12_4_;
  fVar136 = auVar125._12_4_;
  auVar175._28_4_ = fVar136 + fVar116;
  auVar87 = vdivps_avx(auVar174,auVar175);
  auVar13 = vpermilps_avx(ZEXT416((uint)param_8),0);
  auVar87 = vsqrtps_avx(auVar87);
  auVar12 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar97 = auVar12._0_4_ * auVar13._0_4_ * auVar87._0_4_ * auVar71._0_4_;
  fVar99 = auVar12._4_4_ * auVar13._4_4_ * auVar87._4_4_ * auVar71._4_4_;
  fVar168 = auVar12._8_4_ * auVar13._8_4_ * auVar87._8_4_ * auVar71._8_4_;
  fVar169 = auVar12._12_4_ * auVar13._12_4_ * auVar87._12_4_ * auVar71._12_4_;
  fVar111 = auVar12._0_4_ * auVar13._0_4_ * auVar87._16_4_ * auVar71._16_4_;
  fVar113 = auVar12._4_4_ * auVar13._4_4_ * auVar87._20_4_ * auVar71._20_4_;
  fVar115 = auVar12._8_4_ * auVar13._8_4_ * auVar87._24_4_ * auVar71._24_4_;
  fVar117 = auVar12._12_4_ * auVar13._12_4_ * auVar87._28_4_ * auVar71._28_4_;
  auVar71 = vsubps_avx(auVar78,auVar81);
  auVar71 = vsubps_avx(auVar71,auVar88);
  auVar87 = vsubps_avx(auVar77,auVar171);
  auVar87 = vsubps_avx(auVar87,auVar91);
  auVar74 = vsubps_avx(auVar90,auVar156);
  auVar74 = vsubps_avx(auVar74,auVar75);
  local_2c0 = auVar89._0_4_;
  fStack_2bc = auVar89._4_4_;
  fStack_2b8 = auVar89._8_4_;
  fStack_2b4 = auVar89._12_4_;
  fStack_2b0 = auVar89._16_4_;
  fStack_2ac = auVar89._20_4_;
  fStack_2a8 = auVar89._24_4_;
  fStack_2a4 = auVar89._28_4_;
  local_2a0 = auVar72._0_4_;
  fStack_29c = auVar72._4_4_;
  fStack_298 = auVar72._8_4_;
  fStack_294 = auVar72._12_4_;
  fStack_290 = auVar72._16_4_;
  fStack_28c = auVar72._20_4_;
  fStack_288 = auVar72._24_4_;
  fStack_284 = auVar72._28_4_;
  local_280 = auVar73._0_4_;
  fStack_27c = auVar73._4_4_;
  fStack_278 = auVar73._8_4_;
  fStack_274 = auVar73._12_4_;
  fStack_270 = auVar73._16_4_;
  fStack_26c = auVar73._20_4_;
  fStack_268 = auVar73._24_4_;
  fStack_264 = auVar73._28_4_;
  auVar94._0_4_ =
       (float)((uint)fVar97 ^
              ___ymm_8000000080000000800000008000000080000000800000008000000080000000) *
       ((auVar85._0_4_ + auVar71._0_4_) * local_2c0 + (auVar70._0_4_ + auVar87._0_4_) * local_2a0 +
       (auVar137._0_4_ + auVar74._0_4_) * local_280);
  auVar94._4_4_ =
       (float)((uint)fVar99 ^ _UNK_150b50f64) *
       ((auVar85._4_4_ + auVar71._4_4_) * fStack_2bc + (auVar70._4_4_ + auVar87._4_4_) * fStack_29c
       + (auVar137._4_4_ + auVar74._4_4_) * fStack_27c);
  auVar94._8_4_ =
       (float)((uint)fVar168 ^ _UNK_150b50f68) *
       ((auVar85._8_4_ + auVar71._8_4_) * fStack_2b8 + (auVar70._8_4_ + auVar87._8_4_) * fStack_298
       + (auVar137._8_4_ + auVar74._8_4_) * fStack_278);
  auVar94._12_4_ =
       (float)((uint)fVar169 ^ _UNK_150b50f6c) *
       ((auVar85._12_4_ + auVar71._12_4_) * fStack_2b4 +
        (auVar70._12_4_ + auVar87._12_4_) * fStack_294 +
       (auVar137._12_4_ + auVar74._12_4_) * fStack_274);
  auVar94._16_4_ =
       (float)((uint)fVar111 ^ _UNK_150b50f70) *
       ((auVar123._0_4_ + auVar71._16_4_) * fStack_2b0 +
        (auVar69._0_4_ + auVar87._16_4_) * fStack_290 +
       (auVar100._0_4_ + auVar74._16_4_) * fStack_270);
  auVar94._20_4_ =
       (float)((uint)fVar113 ^ _UNK_150b50f74) *
       ((auVar123._4_4_ + auVar71._20_4_) * fStack_2ac +
        (auVar69._4_4_ + auVar87._20_4_) * fStack_28c +
       (auVar100._4_4_ + auVar74._20_4_) * fStack_26c);
  auVar94._24_4_ =
       (float)((uint)fVar115 ^ _UNK_150b50f78) *
       ((auVar123._8_4_ + auVar71._24_4_) * fStack_2a8 +
        (auVar69._8_4_ + auVar87._24_4_) * fStack_288 +
       (auVar100._8_4_ + auVar74._24_4_) * fStack_268);
  auVar94._28_4_ =
       (float)((uint)fVar117 ^ _UNK_150b50f7c) *
       ((auVar123._12_4_ + auVar71._28_4_) * fStack_2a4 +
        (auVar69._12_4_ + auVar87._28_4_) * fStack_284 +
       (auVar100._12_4_ + auVar74._28_4_) * fStack_264);
  auVar145._0_4_ = auVar175._0_4_ * fVar97 + __real_3f800000;
  auVar145._4_4_ = auVar175._4_4_ * fVar99 + __real_3f800000;
  auVar145._8_4_ = auVar175._8_4_ * fVar168 + __real_3f800000;
  auVar145._12_4_ = auVar175._12_4_ * fVar169 + __real_3f800000;
  auVar145._16_4_ = auVar175._16_4_ * fVar111 + __real_3f800000;
  auVar145._20_4_ = auVar175._20_4_ * fVar113 + __real_3f800000;
  auVar145._24_4_ = auVar175._24_4_ * fVar115 + __real_3f800000;
  auVar145._28_4_ = auVar175._28_4_ * fVar117 + __real_3f800000;
  auVar87 = vmaskmovps_avx(auVar158,*(undefined1 (*) [32])(param_5 + lVar32));
  auVar71 = vsubps_avx(auVar94,auVar87);
  auVar71 = vdivps_avx(auVar71,auVar145);
  fVar97 = auVar71._0_4_;
  auVar95._0_4_ = auVar87._0_4_ + fVar97;
  fVar99 = auVar71._4_4_;
  auVar95._4_4_ = auVar87._4_4_ + fVar99;
  fVar168 = auVar71._8_4_;
  auVar95._8_4_ = auVar87._8_4_ + fVar168;
  fVar169 = auVar71._12_4_;
  auVar95._12_4_ = auVar87._12_4_ + fVar169;
  fVar111 = auVar71._16_4_;
  auVar95._16_4_ = auVar87._16_4_ + fVar111;
  fVar113 = auVar71._20_4_;
  auVar95._20_4_ = auVar87._20_4_ + fVar113;
  fVar115 = auVar71._24_4_;
  auVar95._24_4_ = auVar87._24_4_ + fVar115;
  fVar117 = auVar71._28_4_;
  auVar95._28_4_ = auVar87._28_4_ + fVar117;
  auVar71 = vmaskmovps_avx(auVar158,auVar95);
  *(undefined1 (*) [32])(param_5 + lVar32) = auVar71;
  auVar138._0_4_ = auVar78._0_4_ + fVar124 * local_2c0 * fVar97;
  auVar138._4_4_ = auVar78._4_4_ + fVar130 * fStack_2bc * fVar99;
  auVar138._8_4_ = auVar78._8_4_ + fVar131 * fStack_2b8 * fVar168;
  auVar138._12_4_ = auVar78._12_4_ + fVar132 * fStack_2b4 * fVar169;
  auVar141._16_4_ = auVar78._16_4_ + fVar133 * fStack_2b0 * fVar111;
  auVar141._0_16_ = auVar138;
  auVar141._20_4_ = auVar78._20_4_ + fVar134 * fStack_2ac * fVar113;
  auVar141._24_4_ = auVar78._24_4_ + fVar135 * fStack_2a8 * fVar115;
  auVar141._28_4_ = auVar78._28_4_ + fVar136 * fStack_2a4 * fVar117;
  cVar42 = (char)uVar43;
  auVar69 = auVar141._16_16_;
  iVar166 = auVar86._0_4_;
  iVar30 = auVar86._4_4_;
  iVar27 = auVar86._8_4_;
  iVar28 = auVar86._12_4_;
  iVar84 = auVar104._0_4_;
  if ((uVar43 & 1) != 0) {
    *(float *)(param_1 + iVar166) = auVar138._0_4_;
  }
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar138,1);
    *(undefined4 *)(param_1 + iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar138,2);
    *(undefined4 *)(param_1 + iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar138,3);
    *(undefined4 *)(param_1 + iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(float *)(param_1 + iVar84) = auVar141._16_4_;
  }
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar104,1);
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar104,2);
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
  }
  uVar25 = fVar136 * fStack_284 * fVar117;
  uVar24 = fVar135 * fStack_288 * fVar115;
  uVar23 = fVar134 * fStack_28c * fVar113;
  uVar22 = fVar133 * fStack_290 * fVar111;
  uVar21 = fVar132 * fStack_294 * fVar169;
  uVar20 = fVar131 * fStack_298 * fVar168;
  uVar19 = fVar130 * fStack_29c * fVar99;
  uVar47 = fVar124 * local_2a0 * fVar97;
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar104,3);
    uVar9 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + iVar29) = uVar9;
    auVar128._0_4_ = auVar77._0_4_ + (float)uVar47;
    auVar128._4_4_ = auVar77._4_4_ + (float)uVar19;
    auVar128._8_4_ = auVar77._8_4_ + (float)uVar20;
    auVar128._12_4_ = auVar77._12_4_ + (float)uVar21;
    auVar128._16_4_ = auVar77._16_4_ + (float)uVar22;
    auVar128._20_4_ = auVar77._20_4_ + (float)uVar23;
    auVar128._24_4_ = auVar77._24_4_ + (float)uVar24;
    auVar128._28_4_ = auVar77._28_4_ + (float)uVar25;
  }
  else {
    auVar128._0_4_ = auVar77._0_4_ + (float)uVar47;
    auVar128._4_4_ = auVar77._4_4_ + (float)uVar19;
    auVar128._8_4_ = auVar77._8_4_ + (float)uVar20;
    auVar128._12_4_ = auVar77._12_4_ + (float)uVar21;
    auVar128._16_4_ = auVar77._16_4_ + (float)uVar22;
    auVar128._20_4_ = auVar77._20_4_ + (float)uVar23;
    auVar128._24_4_ = auVar77._24_4_ + (float)uVar24;
    auVar128._28_4_ = auVar77._28_4_ + (float)uVar25;
  }
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar166) = auVar128._0_4_;
  }
  auVar69 = auVar128._0_16_;
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar84) = auVar128._16_4_;
  }
  auVar69 = auVar128._16_16_;
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar104,1);
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar104,2);
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
  }
  uVar25 = fVar136 * fStack_264 * fVar117;
  uVar24 = fVar135 * fStack_268 * fVar115;
  uVar23 = fVar134 * fStack_26c * fVar113;
  uVar22 = fVar133 * fStack_270 * fVar111;
  uVar21 = fVar132 * fStack_274 * fVar169;
  uVar20 = fVar131 * fStack_278 * fVar168;
  uVar19 = fVar130 * fStack_27c * fVar99;
  uVar47 = fVar124 * local_280 * fVar97;
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar104,3);
    uVar9 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar9;
    auVar96._0_4_ = auVar90._0_4_ + (float)uVar47;
    auVar96._4_4_ = auVar90._4_4_ + (float)uVar19;
    auVar96._8_4_ = auVar90._8_4_ + (float)uVar20;
    auVar96._12_4_ = auVar90._12_4_ + (float)uVar21;
    auVar96._16_4_ = auVar90._16_4_ + (float)uVar22;
    auVar96._20_4_ = auVar90._20_4_ + (float)uVar23;
    auVar96._24_4_ = auVar90._24_4_ + (float)uVar24;
    auVar96._28_4_ = auVar90._28_4_ + (float)uVar25;
  }
  else {
    auVar96._0_4_ = auVar90._0_4_ + (float)uVar47;
    auVar96._4_4_ = auVar90._4_4_ + (float)uVar19;
    auVar96._8_4_ = auVar90._8_4_ + (float)uVar20;
    auVar96._12_4_ = auVar90._12_4_ + (float)uVar21;
    auVar96._16_4_ = auVar90._16_4_ + (float)uVar22;
    auVar96._20_4_ = auVar90._20_4_ + (float)uVar23;
    auVar96._24_4_ = auVar90._24_4_ + (float)uVar24;
    auVar96._28_4_ = auVar90._28_4_ + (float)uVar25;
  }
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar166) = auVar96._0_4_;
  }
  auVar69 = auVar96._0_16_;
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar84) = auVar96._16_4_;
  }
  auVar69 = auVar96._16_16_;
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar104,1);
    uVar47 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar104,2);
    uVar47 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar104,3);
    uVar47 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar124;
  }
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar102,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar102,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar102,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar84) = fVar133;
  }
  if ((uVar43 & 0x20) != 0) {
    iVar30 = vextractps_avx(auVar104,1);
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar30 = vextractps_avx(auVar104,2);
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if (cVar42 < '\0') {
    iVar30 = vextractps_avx(auVar104,3);
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  auVar129._0_4_ = fVar83 * local_2c0 * fVar97;
  auVar129._4_4_ = fVar98 * fStack_2bc * fVar99;
  auVar129._8_4_ = fVar10 * fStack_2b8 * fVar168;
  auVar129._12_4_ = fVar11 * fStack_2b4 * fVar169;
  auVar129._16_4_ = fVar101 * fStack_2b0 * fVar111;
  auVar129._20_4_ = fVar112 * fStack_2ac * fVar113;
  auVar129._24_4_ = fVar114 * fStack_2a8 * fVar115;
  auVar129._28_4_ = fVar116 * fStack_2a4 * fVar117;
  auVar71 = vsubps_avx(auVar88,auVar129);
  iVar84 = auVar68._0_4_;
  auVar125 = auVar71._0_16_;
  auVar102 = auVar71._16_16_;
  iVar30 = auVar68._4_4_;
  iVar27 = auVar68._8_4_;
  iVar28 = auVar68._12_4_;
  iVar166 = auVar103._0_4_;
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + iVar84) = auVar71._0_4_;
  }
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + iVar166) = auVar71._16_4_;
  }
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar103,1);
    uVar47 = vextractps_avx(auVar102,1);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) == 0) {
    auVar82._0_4_ = fVar83 * local_2a0 * fVar97;
    auVar82._4_4_ = fVar98 * fStack_29c * fVar99;
    auVar82._8_4_ = fVar10 * fStack_298 * fVar168;
    auVar82._12_4_ = fVar11 * fStack_294 * fVar169;
    auVar82._16_4_ = fVar101 * fStack_290 * fVar111;
    auVar82._20_4_ = fVar112 * fStack_28c * fVar113;
    auVar82._24_4_ = fVar114 * fStack_288 * fVar115;
    auVar82._28_4_ = fVar116 * fStack_284 * fVar117;
  }
  else {
    iVar29 = vextractps_avx(auVar103,2);
    uVar47 = vextractps_avx(auVar102,2);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
    auVar82._0_4_ = fVar83 * local_2a0 * fVar97;
    auVar82._4_4_ = fVar98 * fStack_29c * fVar99;
    auVar82._8_4_ = fVar10 * fStack_298 * fVar168;
    auVar82._12_4_ = fVar11 * fStack_294 * fVar169;
    auVar82._16_4_ = fVar101 * fStack_290 * fVar111;
    auVar82._20_4_ = fVar112 * fStack_28c * fVar113;
    auVar82._24_4_ = fVar114 * fStack_288 * fVar115;
    auVar82._28_4_ = fVar116 * fStack_284 * fVar117;
  }
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar103,3);
    uVar47 = vextractps_avx(auVar102,3);
    *(undefined4 *)(param_1 + iVar29) = uVar47;
    auVar71 = vsubps_avx(auVar91,auVar82);
  }
  else {
    auVar71 = vsubps_avx(auVar91,auVar82);
  }
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar84) = auVar71._0_4_;
  }
  auVar125 = auVar71._0_16_;
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar166) = auVar71._16_4_;
  }
  auVar125 = auVar71._16_16_;
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar103,1);
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) == 0) {
    auVar110._0_4_ = fVar83 * local_280 * fVar97;
    auVar110._4_4_ = fVar98 * fStack_27c * fVar99;
    auVar110._8_4_ = fVar10 * fStack_278 * fVar168;
    auVar110._12_4_ = fVar11 * fStack_274 * fVar169;
    auVar110._16_4_ = fVar101 * fStack_270 * fVar111;
    auVar110._20_4_ = fVar112 * fStack_26c * fVar113;
    auVar110._24_4_ = fVar114 * fStack_268 * fVar115;
    auVar110._28_4_ = fVar116 * fStack_264 * fVar117;
  }
  else {
    iVar29 = vextractps_avx(auVar103,2);
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
    auVar110._0_4_ = fVar83 * local_280 * fVar97;
    auVar110._4_4_ = fVar98 * fStack_27c * fVar99;
    auVar110._8_4_ = fVar10 * fStack_278 * fVar168;
    auVar110._12_4_ = fVar11 * fStack_274 * fVar169;
    auVar110._16_4_ = fVar101 * fStack_270 * fVar111;
    auVar110._20_4_ = fVar112 * fStack_26c * fVar113;
    auVar110._24_4_ = fVar114 * fStack_268 * fVar115;
    auVar110._28_4_ = fVar116 * fStack_264 * fVar117;
  }
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar103,3);
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar47;
    auVar71 = vsubps_avx(auVar75,auVar110);
  }
  else {
    auVar71 = vsubps_avx(auVar75,auVar110);
  }
  if ((uVar43 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar84) = auVar71._0_4_;
  }
  auVar125 = auVar71._0_16_;
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar166) = auVar71._16_4_;
  }
  auVar125 = auVar71._16_16_;
  if ((uVar43 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar103,1);
    uVar47 = vextractps_avx(auVar125,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar103,2);
    uVar47 = vextractps_avx(auVar125,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if (cVar42 < '\0') {
    iVar29 = vextractps_avx(auVar103,3);
    uVar47 = vextractps_avx(auVar125,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar47;
  }
  if ((uVar43 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar84) = fVar83;
  }
  if ((uVar43 & 2) != 0) {
    uVar47 = vextractps_avx(auVar118,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 4) != 0) {
    uVar47 = vextractps_avx(auVar118,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar47;
  }
  if ((uVar43 & 8) != 0) {
    uVar47 = vextractps_avx(auVar118,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar28) = uVar47;
  }
  if ((uVar43 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar166) = fVar101;
  }
  if ((uVar43 & 0x20) != 0) {
    iVar30 = vextractps_avx(auVar103,1);
    uVar47 = vextractps_avx(auVar17,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if ((uVar43 & 0x40) != 0) {
    iVar30 = vextractps_avx(auVar103,2);
    uVar47 = vextractps_avx(auVar17,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  if (cVar42 < '\0') {
    iVar30 = vextractps_avx(auVar103,3);
    uVar47 = vextractps_avx(auVar17,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar47;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithWeightMaps_avx @ 140933cc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithWeightMaps_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               longlong param_6,longlong param_7,uint param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar20;
  uint uVar21;
  int iVar22;
  int iVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  undefined4 uVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint uVar37;
  longlong lVar38;
  byte *pbVar39;
  ulonglong uVar40;
  uint uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  uint uVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  undefined1 auVar54 [16];
  undefined1 auVar56 [32];
  undefined1 auVar51 [16];
  undefined1 auVar57 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar61 [32];
  undefined1 auVar55 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  float fVar65;
  uint uVar66;
  float fVar67;
  float fVar77;
  float fVar80;
  float fVar86;
  float fVar88;
  float fVar89;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  float fVar83;
  float fVar91;
  undefined1 auVar72 [32];
  undefined1 auVar87 [16];
  int iVar68;
  undefined1 auVar69 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  uint uVar78;
  uint uVar81;
  uint uVar84;
  undefined1 auVar75 [32];
  float fVar79;
  float fVar82;
  float fVar85;
  float fVar90;
  float fVar92;
  undefined1 auVar76 [32];
  float fVar93;
  float fVar94;
  float fVar105;
  float fVar107;
  float fVar109;
  undefined1 auVar96 [16];
  float fVar104;
  float fVar106;
  undefined1 auVar95 [16];
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar97 [32];
  float fVar108;
  undefined1 auVar98 [32];
  float fVar113;
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  float fVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar119 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  float fVar134;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  undefined1 auVar135 [32];
  float fVar142;
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  uint uVar149;
  uint uVar157;
  undefined1 auVar151 [16];
  uint uVar155;
  uint uVar156;
  undefined1 auVar150 [16];
  uint uVar158;
  uint uVar159;
  uint uVar160;
  undefined1 auVar152 [32];
  uint uVar161;
  undefined1 auVar154 [32];
  undefined1 auVar162 [16];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  int iVar168;
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
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
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
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
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
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
  int iVar23;
  undefined1 auVar60 [32];
  undefined1 auVar120 [32];
  undefined1 auVar153 [32];
  undefined1 auVar175 [32];
  
  uVar21 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar21 = param_8;
  }
  if ((int)(uVar21 & 0xfffffff8) < 1) {
    uVar40 = 0;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    auVar174 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    uVar31 = 0;
    uVar40 = 0;
    do {
      auVar56._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar31 * 2);
      auVar56._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar31 * 2);
      auVar70._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar31 * 2);
      auVar70._0_16_ = *(undefined1 (*) [16])(param_2 + uVar31 * 2);
      auVar60 = vshufps_avx(auVar70,auVar56,0x88);
      auVar56 = vshufps_avx(auVar70,auVar56,0xdd);
      auVar95 = vpslld_avx(auVar60._0_16_,4);
      auVar69 = vpslld_avx(auVar60._16_16_,4);
      lVar32 = (longlong)auVar95._0_4_;
      lVar28 = (longlong)auVar95._4_4_;
      lVar49 = (longlong)auVar95._8_4_;
      lVar44 = (longlong)auVar95._12_4_;
      lVar42 = (longlong)auVar69._0_4_;
      lVar46 = (longlong)auVar69._4_4_;
      lVar48 = (longlong)auVar69._8_4_;
      lVar38 = (longlong)auVar69._12_4_;
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar32)),
                              ZEXT416(*(uint *)(param_1 + lVar28)),0x10);
      auVar95 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar32)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x10);
      auVar150 = vpslld_avx(auVar56._16_16_,4);
      auVar54 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar32)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x10);
      auVar51 = vpslld_avx(auVar56._0_16_,4);
      auVar87 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar42)),
                              ZEXT416(*(uint *)(param_1 + lVar46)),0x10);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + lVar49)),0x20);
      lVar43 = (longlong)auVar51._0_4_;
      lVar33 = (longlong)auVar51._4_4_;
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar42)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar46)),0x10);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 4 + lVar49)),0x20);
      auVar115 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar42)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar46)),0x10);
      lVar29 = (longlong)auVar51._8_4_;
      lVar47 = (longlong)auVar51._12_4_;
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 8 + lVar49)),0x20);
      lVar50 = (longlong)auVar150._0_4_;
      auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + lVar48)),0x20);
      lVar30 = (longlong)auVar150._4_4_;
      lVar35 = (longlong)auVar150._8_4_;
      lVar26 = (longlong)auVar150._12_4_;
      auVar51 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + lVar44)),0x30);
      auVar69 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + 4 + lVar48)),0x20);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + lVar30)),0x10);
      auVar150 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 4 + lVar44)),0x30);
      auVar95 = vinsertps_avx(auVar115,ZEXT416(*(uint *)(param_1 + 8 + lVar48)),0x20);
      auVar115 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar43)),
                               ZEXT416(*(uint *)(param_1 + lVar33)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + lVar35)),0x20);
      auVar115 = vinsertps_avx(auVar115,ZEXT416(*(uint *)(param_1 + lVar29)),0x20);
      auVar115 = vinsertps_avx(auVar115,ZEXT416(*(uint *)(param_1 + lVar47)),0x30);
      auVar96 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar50)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x10);
      auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + lVar38)),0x30);
      auVar96 = vinsertps_avx(auVar96,ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x20);
      auVar116 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x30);
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar43)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar33)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + lVar26)),0x30);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 4 + lVar29)),0x20);
      auVar96 = vinsertps_avx(auVar96,ZEXT416(*(uint *)(param_1 + 4 + lVar26)),0x30);
      auVar16 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 4 + lVar47)),0x30);
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 8 + lVar44)),0x30);
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar50)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x10);
      auVar177 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x30);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x20);
      auVar17 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar26)),0x30);
      auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar43)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar33)),0x10);
      auVar178._16_16_ = auVar87;
      auVar178._0_16_ = auVar51;
      uVar27 = *(uint *)(param_1 + 0xc + lVar32);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar29)),0x20);
      auVar166._16_16_ = auVar116;
      auVar166._0_16_ = auVar150;
      uVar37 = *(uint *)(param_1 + 0xc + lVar42);
      auVar18 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_1 + 8 + lVar47)),0x30);
      auVar146._16_16_ = auVar118;
      auVar146._0_16_ = auVar115;
      auVar135._16_16_ = auVar96;
      auVar135._0_16_ = auVar16;
      auVar69 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_6 + uVar40)));
      auVar71._16_16_ = auVar177;
      auVar71._0_16_ = auVar54;
      auVar57._16_16_ = auVar17;
      auVar57._0_16_ = auVar18;
      auVar60 = vsubps_avx(auVar178,auVar146);
      auVar70 = vsubps_avx(auVar166,auVar135);
      uVar41 = *(uint *)(param_1 + 0xc + lVar46);
      auVar57 = vsubps_avx(auVar71,auVar57);
      uVar45 = *(uint *)(param_1 + 0xc + lVar48);
      auVar152._0_4_ =
           auVar60._0_4_ * auVar60._0_4_ + auVar70._0_4_ * auVar70._0_4_ +
           auVar57._0_4_ * auVar57._0_4_;
      auVar152._4_4_ =
           auVar60._4_4_ * auVar60._4_4_ + auVar70._4_4_ * auVar70._4_4_ +
           auVar57._4_4_ * auVar57._4_4_;
      auVar152._8_4_ =
           auVar60._8_4_ * auVar60._8_4_ + auVar70._8_4_ * auVar70._8_4_ +
           auVar57._8_4_ * auVar57._8_4_;
      auVar152._12_4_ =
           auVar60._12_4_ * auVar60._12_4_ + auVar70._12_4_ * auVar70._12_4_ +
           auVar57._12_4_ * auVar57._12_4_;
      auVar152._16_4_ =
           auVar60._16_4_ * auVar60._16_4_ + auVar70._16_4_ * auVar70._16_4_ +
           auVar57._16_4_ * auVar57._16_4_;
      auVar152._20_4_ =
           auVar60._20_4_ * auVar60._20_4_ + auVar70._20_4_ * auVar70._20_4_ +
           auVar57._20_4_ * auVar57._20_4_;
      auVar152._24_4_ =
           auVar60._24_4_ * auVar60._24_4_ + auVar70._24_4_ * auVar70._24_4_ +
           auVar57._24_4_ * auVar57._24_4_;
      auVar152._28_4_ =
           auVar60._28_4_ * auVar60._28_4_ + auVar70._28_4_ * auVar70._28_4_ +
           auVar57._28_4_ * auVar57._28_4_;
      uVar66 = *(uint *)(param_1 + 0xc + lVar38);
      auVar52 = vpslld_avx(auVar69,2);
      auVar69 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_6 + 4 + uVar40)));
      auVar53 = vpslld_avx(auVar69,2);
      auVar69 = vinsertps_avx(ZEXT416(uVar37),ZEXT416(uVar41),0x10);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(uVar45),0x20);
      auVar69 = vinsertps_avx(auVar69,ZEXT416(uVar66),0x30);
      uVar78 = *(uint *)(param_1 + 0xc + lVar28);
      uVar81 = *(uint *)(param_1 + 0xc + lVar49);
      auVar95 = vinsertps_avx(ZEXT416(uVar27),ZEXT416(uVar78),0x10);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(uVar81),0x20);
      uVar84 = *(uint *)(param_1 + 0xc + lVar44);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(uVar84),0x30);
      auVar151 = vinsertps_avx(ZEXT416(*(uint *)(param_7 + (ulonglong)auVar53._0_4_)),
                               ZEXT416(*(uint *)(param_7 + (ulonglong)auVar53._4_4_)),0x10);
      auVar19 = vinsertps_avx(ZEXT416(*(uint *)(param_7 + (ulonglong)auVar52._0_4_)),
                              ZEXT416(*(uint *)(param_7 + (ulonglong)auVar52._4_4_)),0x10);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_7 + (ulonglong)auVar53._8_4_)),0x20)
      ;
      auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_7 + (ulonglong)auVar52._8_4_)),0x20);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_7 + (ulonglong)auVar53._12_4_)),0x30
                              );
      auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_7 + (ulonglong)auVar52._12_4_)),0x30);
      uVar2 = *(uint *)(param_1 + 0xc + lVar43);
      uVar3 = *(uint *)(param_1 + 0xc + lVar33);
      uVar4 = *(uint *)(param_1 + 0xc + lVar29);
      auVar52 = vinsertps_avx(ZEXT416(uVar2),ZEXT416(uVar3),0x10);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(uVar4),0x20);
      uVar5 = *(uint *)(param_1 + 0xc + lVar50);
      uVar6 = *(uint *)(param_1 + 0xc + lVar30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar35);
      auVar53 = vinsertps_avx(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      auVar53 = vinsertps_avx(auVar53,ZEXT416(uVar7),0x20);
      uVar36 = uVar31 & 0xffffffff;
      uVar8 = *(uint *)(param_1 + 0xc + lVar26);
      auVar53 = vinsertps_avx(auVar53,ZEXT416(uVar8),0x30);
      auVar97._16_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + uVar36);
      auVar97._0_16_ = *(undefined1 (*) [16])(param_3 + uVar36);
      uVar9 = *(uint *)(param_1 + 0xc + lVar47);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(uVar9),0x30);
      auVar71 = vsqrtps_avx(auVar152);
      auVar56 = vdivps_avx(auVar60,auVar71);
      auVar70 = vdivps_avx(auVar70,auVar71);
      auVar60 = vcmpps_avx(auVar152,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar57 = vdivps_avx(auVar57,auVar71);
      uVar149 = auVar60._0_4_;
      auVar58._0_4_ = ~uVar149 & auVar71._0_4_;
      uVar155 = auVar60._4_4_;
      auVar58._4_4_ = ~uVar155 & auVar71._4_4_;
      uVar156 = auVar60._8_4_;
      auVar58._8_4_ = ~uVar156 & auVar71._8_4_;
      uVar157 = auVar60._12_4_;
      auVar58._12_4_ = ~uVar157 & auVar71._12_4_;
      uVar158 = auVar60._16_4_;
      auVar58._16_4_ = ~uVar158 & auVar71._16_4_;
      uVar159 = auVar60._20_4_;
      auVar58._20_4_ = ~uVar159 & auVar71._20_4_;
      uVar160 = auVar60._24_4_;
      auVar58._24_4_ = ~uVar160 & auVar71._24_4_;
      uVar161 = auVar60._28_4_;
      auVar58._28_4_ = ~uVar161 & auVar71._28_4_;
      auVar71 = vsubps_avx(auVar58,auVar97);
      local_260 = auVar174._0_4_;
      fStack_25c = auVar174._4_4_;
      fStack_258 = auVar174._8_4_;
      fStack_254 = auVar174._12_4_;
      fVar93 = local_260 * local_260 * auVar19._0_4_;
      fVar104 = fStack_25c * fStack_25c * auVar19._4_4_;
      fVar106 = fStack_258 * fStack_258 * auVar19._8_4_;
      fVar108 = fStack_254 * fStack_254 * auVar19._12_4_;
      local_260 = local_260 * local_260 * auVar151._0_4_;
      fStack_25c = fStack_25c * fStack_25c * auVar151._4_4_;
      fStack_258 = fStack_258 * fStack_258 * auVar151._8_4_;
      fStack_254 = fStack_254 * fStack_254 * auVar151._12_4_;
      fVar10 = auVar52._0_4_;
      fVar114 = auVar95._0_4_;
      fVar67 = auVar52._4_4_;
      fVar127 = auVar95._4_4_;
      fVar11 = auVar52._8_4_;
      fVar128 = auVar95._8_4_;
      fVar79 = auVar52._12_4_;
      fVar129 = auVar95._12_4_;
      fVar12 = auVar53._0_4_;
      fVar130 = auVar69._0_4_;
      fVar82 = auVar53._4_4_;
      fVar131 = auVar69._4_4_;
      fVar13 = auVar53._8_4_;
      fVar132 = auVar69._8_4_;
      fVar85 = auVar53._12_4_;
      fVar133 = auVar69._12_4_;
      auVar59._0_4_ =
           auVar71._0_4_ *
           (float)((uint)fVar93 ^
                  ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
      auVar59._4_4_ = auVar71._4_4_ * (float)((uint)fVar104 ^ _UNK_150b50f64);
      auVar59._8_4_ = auVar71._8_4_ * (float)((uint)fVar106 ^ _UNK_150b50f68);
      auVar59._12_4_ = auVar71._12_4_ * (float)((uint)fVar108 ^ _UNK_150b50f6c);
      auVar59._16_4_ = auVar71._16_4_ * (float)((uint)local_260 ^ _UNK_150b50f70);
      auVar59._20_4_ = auVar71._20_4_ * (float)((uint)fStack_25c ^ _UNK_150b50f74);
      auVar59._24_4_ = auVar71._24_4_ * (float)((uint)fStack_258 ^ _UNK_150b50f78);
      auVar59._28_4_ = auVar71._28_4_ * (float)((uint)fStack_254 ^ _UNK_150b50f7c);
      auVar69 = *(undefined1 (*) [16])(param_4 + uVar36);
      auVar95 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar36);
      auVar147._16_16_ = auVar95;
      auVar147._0_16_ = auVar69;
      auVar71 = vsubps_avx(auVar59,auVar147);
      auVar169._4_4_ = __real_3f800000;
      auVar169._0_4_ = __real_3f800000;
      auVar169._8_4_ = __real_3f800000;
      auVar169._12_4_ = __real_3f800000;
      auVar169._16_4_ = __real_3f800000;
      auVar169._20_4_ = __real_3f800000;
      auVar169._24_4_ = __real_3f800000;
      auVar169._28_4_ = __real_3f800000;
      auVar98._0_4_ = __real_3f800000 + (fVar114 + fVar10) * fVar93;
      auVar98._4_4_ = __real_3f800000 + (fVar127 + fVar67) * fVar104;
      auVar98._8_4_ = __real_3f800000 + (fVar128 + fVar11) * fVar106;
      auVar98._12_4_ = __real_3f800000 + (fVar129 + fVar79) * fVar108;
      auVar98._16_4_ = __real_3f800000 + (fVar130 + fVar12) * local_260;
      auVar98._20_4_ = __real_3f800000 + (fVar131 + fVar82) * fStack_25c;
      auVar98._24_4_ = __real_3f800000 + (fVar132 + fVar13) * fStack_258;
      auVar98._28_4_ = __real_3f800000 + (fVar133 + fVar85) * fStack_254;
      auVar71 = vdivps_avx(auVar71,auVar98);
      auVar60 = vblendvps_avx(auVar56,auVar169,auVar60);
      fVar93 = auVar71._0_4_;
      fVar134 = auVar60._0_4_ * fVar93;
      fVar104 = auVar71._4_4_;
      fVar136 = auVar60._4_4_ * fVar104;
      fVar106 = auVar71._8_4_;
      fVar137 = auVar60._8_4_ * fVar106;
      fVar108 = auVar71._12_4_;
      fVar138 = auVar60._12_4_ * fVar108;
      fVar14 = auVar71._16_4_;
      fVar139 = auVar60._16_4_ * fVar14;
      fVar90 = auVar71._20_4_;
      fVar140 = auVar60._20_4_ * fVar90;
      fVar15 = auVar71._24_4_;
      fVar141 = auVar60._24_4_ * fVar15;
      fVar92 = auVar71._28_4_;
      fVar142 = auVar60._28_4_ * fVar92;
      local_240 = auVar51._0_4_;
      fStack_23c = auVar51._4_4_;
      fStack_238 = auVar51._8_4_;
      fStack_234 = auVar51._12_4_;
      fStack_230 = auVar87._0_4_;
      fStack_22c = auVar87._4_4_;
      fStack_228 = auVar87._8_4_;
      fStack_224 = auVar87._12_4_;
      auVar151._0_4_ = fVar114 * fVar134 + local_240;
      auVar151._4_4_ = fVar127 * fVar136 + fStack_23c;
      auVar151._8_4_ = fVar128 * fVar137 + fStack_238;
      auVar151._12_4_ = fVar129 * fVar138 + fStack_234;
      auVar153._16_4_ = fVar130 * fVar139 + fStack_230;
      auVar153._0_16_ = auVar151;
      auVar153._20_4_ = fVar131 * fVar140 + fStack_22c;
      auVar153._24_4_ = fVar132 * fVar141 + fStack_228;
      auVar153._28_4_ = fVar133 * fVar142 + fStack_224;
      *(float *)(param_1 + lVar32) = auVar151._0_4_;
      uVar34 = vextractps_avx(auVar151,1);
      *(undefined4 *)(param_1 + lVar28) = uVar34;
      fVar94 = (float)(~uVar149 & auVar70._0_4_) * fVar93;
      fVar105 = (float)(~uVar155 & auVar70._4_4_) * fVar104;
      fVar107 = (float)(~uVar156 & auVar70._8_4_) * fVar106;
      fVar109 = (float)(~uVar157 & auVar70._12_4_) * fVar108;
      fVar110 = (float)(~uVar158 & auVar70._16_4_) * fVar14;
      fVar111 = (float)(~uVar159 & auVar70._20_4_) * fVar90;
      fVar112 = (float)(~uVar160 & auVar70._24_4_) * fVar15;
      fVar113 = (float)(~uVar161 & auVar70._28_4_) * fVar92;
      uVar34 = vextractps_avx(auVar151,2);
      *(undefined4 *)(param_1 + lVar49) = uVar34;
      uVar34 = vextractps_avx(auVar151,3);
      *(undefined4 *)(param_1 + lVar44) = uVar34;
      auVar87 = auVar153._16_16_;
      *(float *)(param_1 + lVar42) = auVar153._16_4_;
      uVar34 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + lVar46) = uVar34;
      uVar34 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + lVar48) = uVar34;
      local_220 = auVar150._0_4_;
      fStack_21c = auVar150._4_4_;
      fStack_218 = auVar150._8_4_;
      fStack_214 = auVar150._12_4_;
      fStack_210 = auVar116._0_4_;
      fStack_20c = auVar116._4_4_;
      fStack_208 = auVar116._8_4_;
      fStack_204 = auVar116._12_4_;
      auVar150._0_4_ = fVar114 * fVar94 + local_220;
      auVar150._4_4_ = fVar127 * fVar105 + fStack_21c;
      auVar150._8_4_ = fVar128 * fVar107 + fStack_218;
      auVar150._12_4_ = fVar129 * fVar109 + fStack_214;
      auVar163._16_4_ = fVar130 * fVar110 + fStack_210;
      auVar163._0_16_ = auVar150;
      auVar163._20_4_ = fVar131 * fVar111 + fStack_20c;
      auVar163._24_4_ = fVar132 * fVar112 + fStack_208;
      auVar163._28_4_ = fVar133 * fVar113 + fStack_204;
      uVar34 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + lVar38) = uVar34;
      *(float *)(param_1 + 4 + lVar32) = auVar150._0_4_;
      uVar34 = vextractps_avx(auVar150,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar34;
      fVar65 = (float)(~uVar149 & auVar57._0_4_) * fVar93;
      fVar77 = (float)(~uVar155 & auVar57._4_4_) * fVar104;
      fVar80 = (float)(~uVar156 & auVar57._8_4_) * fVar106;
      fVar83 = (float)(~uVar157 & auVar57._12_4_) * fVar108;
      fVar86 = (float)(~uVar158 & auVar57._16_4_) * fVar14;
      fVar88 = (float)(~uVar159 & auVar57._20_4_) * fVar90;
      fVar89 = (float)(~uVar160 & auVar57._24_4_) * fVar15;
      fVar91 = (float)(~uVar161 & auVar57._28_4_) * fVar92;
      uVar34 = vextractps_avx(auVar150,2);
      *(undefined4 *)(param_1 + 4 + lVar49) = uVar34;
      uVar34 = vextractps_avx(auVar150,3);
      *(undefined4 *)(param_1 + 4 + lVar44) = uVar34;
      auVar87 = auVar163._16_16_;
      *(float *)(param_1 + 4 + lVar42) = auVar163._16_4_;
      uVar34 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + 4 + lVar46) = uVar34;
      uVar34 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + 4 + lVar48) = uVar34;
      local_200 = auVar54._0_4_;
      fStack_1fc = auVar54._4_4_;
      fStack_1f8 = auVar54._8_4_;
      fStack_1f4 = auVar54._12_4_;
      fStack_1f0 = auVar177._0_4_;
      fStack_1ec = auVar177._4_4_;
      fStack_1e8 = auVar177._8_4_;
      fStack_1e4 = auVar177._12_4_;
      auVar51._0_4_ = fVar114 * fVar65 + local_200;
      auVar51._4_4_ = fVar127 * fVar77 + fStack_1fc;
      auVar51._8_4_ = fVar128 * fVar80 + fStack_1f8;
      auVar51._12_4_ = fVar129 * fVar83 + fStack_1f4;
      auVar119._16_4_ = fVar130 * fVar86 + fStack_1f0;
      auVar119._0_16_ = auVar51;
      auVar119._20_4_ = fVar131 * fVar88 + fStack_1ec;
      auVar119._24_4_ = fVar132 * fVar89 + fStack_1e8;
      auVar119._28_4_ = fVar133 * fVar91 + fStack_1e4;
      uVar34 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + 4 + lVar38) = uVar34;
      *(float *)(param_1 + 8 + lVar32) = auVar51._0_4_;
      uVar34 = vextractps_avx(auVar51,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar34;
      uVar34 = vextractps_avx(auVar51,2);
      *(undefined4 *)(param_1 + 8 + lVar49) = uVar34;
      uVar34 = vextractps_avx(auVar51,3);
      *(undefined4 *)(param_1 + 8 + lVar44) = uVar34;
      auVar54 = auVar119._16_16_;
      *(float *)(param_1 + 8 + lVar42) = auVar119._16_4_;
      uVar34 = vextractps_avx(auVar54,1);
      *(undefined4 *)(param_1 + 8 + lVar46) = uVar34;
      uVar34 = vextractps_avx(auVar54,2);
      *(undefined4 *)(param_1 + 8 + lVar48) = uVar34;
      uVar34 = vextractps_avx(auVar54,3);
      *(undefined4 *)(param_1 + 8 + lVar38) = uVar34;
      *(uint *)(param_1 + 0xc + lVar32) = uVar27;
      *(uint *)(param_1 + 0xc + lVar28) = uVar78;
      *(uint *)(param_1 + 0xc + lVar49) = uVar81;
      *(uint *)(param_1 + 0xc + lVar44) = uVar84;
      *(uint *)(param_1 + 0xc + lVar42) = uVar37;
      *(uint *)(param_1 + 0xc + lVar46) = uVar41;
      *(uint *)(param_1 + 0xc + lVar48) = uVar45;
      local_1e0 = auVar115._0_4_;
      fStack_1dc = auVar115._4_4_;
      fStack_1d8 = auVar115._8_4_;
      fStack_1d4 = auVar115._12_4_;
      fStack_1d0 = auVar118._0_4_;
      fStack_1cc = auVar118._4_4_;
      fStack_1c8 = auVar118._8_4_;
      fStack_1c4 = auVar118._12_4_;
      auVar115._0_4_ = fVar10 * fVar134 + local_1e0;
      auVar115._4_4_ = fVar67 * fVar136 + fStack_1dc;
      auVar115._8_4_ = fVar11 * fVar137 + fStack_1d8;
      auVar115._12_4_ = fVar79 * fVar138 + fStack_1d4;
      auVar120._16_4_ = fVar12 * fVar139 + fStack_1d0;
      auVar120._0_16_ = auVar115;
      auVar120._20_4_ = fVar82 * fVar140 + fStack_1cc;
      auVar120._24_4_ = fVar13 * fVar141 + fStack_1c8;
      auVar120._28_4_ = fVar85 * fVar142 + fStack_1c4;
      *(uint *)(param_1 + 0xc + lVar38) = uVar66;
      *(float *)(param_1 + lVar43) = auVar115._0_4_;
      uVar34 = vextractps_avx(auVar115,1);
      *(undefined4 *)(param_1 + lVar33) = uVar34;
      uVar34 = vextractps_avx(auVar115,2);
      *(undefined4 *)(param_1 + lVar29) = uVar34;
      uVar34 = vextractps_avx(auVar115,3);
      *(undefined4 *)(param_1 + lVar47) = uVar34;
      auVar54 = auVar120._16_16_;
      *(float *)(param_1 + lVar50) = auVar120._16_4_;
      uVar34 = vextractps_avx(auVar54,1);
      *(undefined4 *)(param_1 + lVar30) = uVar34;
      uVar34 = vextractps_avx(auVar54,2);
      *(undefined4 *)(param_1 + lVar35) = uVar34;
      local_320 = auVar16._0_4_;
      fStack_31c = auVar16._4_4_;
      fStack_318 = auVar16._8_4_;
      fStack_314 = auVar16._12_4_;
      fStack_310 = auVar96._0_4_;
      fStack_30c = auVar96._4_4_;
      fStack_308 = auVar96._8_4_;
      fStack_304 = auVar96._12_4_;
      auVar118._0_4_ = fVar10 * fVar94 + local_320;
      auVar118._4_4_ = fVar67 * fVar105 + fStack_31c;
      auVar118._8_4_ = fVar11 * fVar107 + fStack_318;
      auVar118._12_4_ = fVar79 * fVar109 + fStack_314;
      uVar34 = vextractps_avx(auVar54,3);
      *(undefined4 *)(param_1 + lVar26) = uVar34;
      *(float *)(param_1 + 4 + lVar43) = auVar118._0_4_;
      uVar34 = vextractps_avx(auVar118,1);
      *(undefined4 *)(param_1 + 4 + lVar33) = uVar34;
      uVar34 = vextractps_avx(auVar118,2);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar34;
      uVar34 = vextractps_avx(auVar118,3);
      *(undefined4 *)(param_1 + 4 + lVar47) = uVar34;
      *(float *)(param_1 + 4 + lVar50) = fVar12 * fVar110 + fStack_310;
      *(float *)(param_1 + 4 + lVar30) = fVar82 * fVar111 + fStack_30c;
      *(float *)(param_1 + 4 + lVar35) = fVar13 * fVar112 + fStack_308;
      local_340 = auVar18._0_4_;
      fStack_33c = auVar18._4_4_;
      fStack_338 = auVar18._8_4_;
      fStack_334 = auVar18._12_4_;
      fStack_330 = auVar17._0_4_;
      fStack_32c = auVar17._4_4_;
      fStack_328 = auVar17._8_4_;
      fStack_324 = auVar17._12_4_;
      auVar87._0_4_ = fVar10 * fVar65 + local_340;
      auVar87._4_4_ = fVar67 * fVar77 + fStack_33c;
      auVar87._8_4_ = fVar11 * fVar80 + fStack_338;
      auVar87._12_4_ = fVar79 * fVar83 + fStack_334;
      auVar72._16_4_ = fVar12 * fVar86 + fStack_330;
      auVar72._0_16_ = auVar87;
      auVar72._20_4_ = fVar82 * fVar88 + fStack_32c;
      auVar72._24_4_ = fVar13 * fVar89 + fStack_328;
      auVar72._28_4_ = fVar85 * fVar91 + fStack_324;
      *(float *)(param_1 + 4 + lVar26) = fVar85 * fVar113 + fStack_304;
      *(float *)(param_1 + 8 + lVar43) = auVar87._0_4_;
      uVar34 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + 8 + lVar33) = uVar34;
      uVar34 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar34;
      uVar34 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + 8 + lVar47) = uVar34;
      auVar87 = auVar72._16_16_;
      *(float *)(param_1 + 8 + lVar50) = auVar72._16_4_;
      uVar34 = vextractps_avx(auVar87,1);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar34;
      auVar54._0_4_ = auVar69._0_4_ + fVar93;
      auVar54._4_4_ = auVar69._4_4_ + fVar104;
      auVar54._8_4_ = auVar69._8_4_ + fVar106;
      auVar54._12_4_ = auVar69._12_4_ + fVar108;
      auVar60._16_4_ = auVar95._0_4_ + fVar14;
      auVar60._0_16_ = auVar54;
      auVar60._20_4_ = auVar95._4_4_ + fVar90;
      auVar60._24_4_ = auVar95._8_4_ + fVar15;
      auVar60._28_4_ = auVar95._12_4_ + fVar92;
      uVar34 = vextractps_avx(auVar87,2);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar34;
      uVar34 = vextractps_avx(auVar87,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar34;
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar36) = auVar60._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar36) = auVar54;
      *(uint *)(param_1 + 0xc + lVar43) = uVar2;
      *(uint *)(param_1 + 0xc + lVar33) = uVar3;
      *(uint *)(param_1 + 0xc + lVar29) = uVar4;
      *(uint *)(param_1 + 0xc + lVar47) = uVar9;
      *(uint *)(param_1 + 0xc + lVar50) = uVar5;
      *(uint *)(param_1 + 0xc + lVar30) = uVar6;
      *(uint *)(param_1 + 0xc + lVar35) = uVar7;
      *(uint *)(param_1 + 0xc + lVar26) = uVar8;
      uVar40 = uVar40 + 8;
      uVar31 = uVar31 + 0x20;
    } while ((int)uVar40 < (int)(uVar21 & 0xfffffff8));
    if ((int)param_8 <= (int)uVar40) {
      return;
    }
  }
  auVar174 = vpshufd_avx(ZEXT416((uint)uVar40),0);
  auVar61._16_16_ = auVar174;
  auVar61._0_16_ = auVar174;
  auVar95 = vpshufd_avx(ZEXT416(param_8),0);
  auVar54 = SUB3216(auVar61 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar87 = SUB3216(auVar61 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar174 = vpcmpgtd_avx(auVar95,auVar87);
  auVar69 = vpcmpgtd_avx(auVar95,auVar54);
  auVar73._16_16_ = auVar174;
  auVar73._0_16_ = auVar69;
  uVar31 = uVar40 & 0xffffffff;
  pauVar1 = (undefined1 (*) [16])(param_2 + uVar31 * 8);
  uVar21 = vmovmskps_avx(auVar73);
  if (uVar21 == 0xff) {
    auVar121._16_16_ = pauVar1[3];
    auVar121._0_16_ = pauVar1[1];
    auVar99._16_16_ = pauVar1[2];
    auVar99._0_16_ = *pauVar1;
    auVar60 = vshufps_avx(auVar99,auVar121,0x88);
    auVar56 = vshufps_avx(auVar99,auVar121,0xdd);
  }
  else {
    auVar118 = vpcmpgtd_avx(auVar95,auVar87);
    auVar115 = vpcmpgtd_avx(auVar95,auVar54);
    auVar96._0_4_ =
         auVar115._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar96._4_4_ = auVar115._4_4_ & _UNK_150b519c4;
    auVar96._8_4_ = auVar115._8_4_ & _UNK_150b519c8;
    auVar96._12_4_ = auVar115._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar96,1);
    vextractps_avx(auVar96,2);
    vextractps_avx(auVar96,3);
    auVar116._0_4_ =
         auVar115._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar116._4_4_ = auVar115._4_4_ & _UNK_150b519e4;
    auVar116._8_4_ = auVar115._8_4_ & _UNK_150b519e8;
    auVar116._12_4_ = auVar115._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar116,1);
    vextractps_avx(auVar116,2);
    vextractps_avx(auVar116,3);
    auVar60 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar118._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar56 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar118._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar116._0_4_))));
  }
  auVar53 = vpcmpgtd_avx(auVar95,auVar87);
  auVar18 = vpcmpgtd_avx(auVar95,auVar54);
  auVar74._16_16_ = auVar53;
  auVar74._0_16_ = auVar18;
  auVar55 = vpslld_avx(auVar60._16_16_,4);
  auVar16 = vpand_avx(auVar53,auVar55);
  lVar26 = param_1 + auVar16._0_4_;
  uVar66 = auVar18._0_4_;
  auVar172._0_4_ = uVar66 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
  uVar78 = auVar18._4_4_;
  auVar172._4_4_ = uVar78 & _UNK_150b50d44;
  uVar81 = auVar18._8_4_;
  auVar172._8_4_ = uVar81 & _UNK_150b50d48;
  uVar84 = auVar18._12_4_;
  auVar172._12_4_ = uVar84 & _UNK_150b50d4c;
  uVar27 = auVar53._0_4_;
  uVar37 = auVar53._4_4_;
  uVar41 = auVar53._8_4_;
  uVar45 = auVar53._12_4_;
  auVar176._0_4_ = uVar66 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar176._4_4_ = uVar78 & _UNK_150b50d64;
  auVar176._8_4_ = uVar81 & _UNK_150b50d68;
  auVar176._12_4_ = uVar84 & _UNK_150b50d6c;
  auVar117 = vpslld_avx(auVar56._16_16_,4);
  auVar151 = vpand_avx(auVar53,auVar117);
  lVar28 = param_1 + auVar151._0_4_;
  lVar29 = param_1 + auVar16._4_4_;
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d50) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d54) + lVar29)),0x10);
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d70) + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d74) + lVar29)),0x10);
  auVar115 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d90) + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d94) + lVar29)),0x10);
  lVar26 = param_1 + auVar151._4_4_;
  auVar51 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d50) + lVar28)),
                          ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d54) + lVar26)),0x10);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d70) + lVar28)),
                           ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d74) + lVar26)),0x10);
  auVar96 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar27 & _UNK_150b50d90) + lVar28)),
                          ZEXT416(*(uint *)((ulonglong)(uVar37 & _UNK_150b50d94) + lVar26)),0x10);
  lVar26 = param_1 + auVar16._8_4_;
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d58) + lVar26)),
                          0x20);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d78) + lVar26)
                                           ),0x20);
  auVar115 = vinsertps_avx(auVar115,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d98) + lVar26)
                                           ),0x20);
  lVar26 = param_1 + auVar151._8_4_;
  auVar51 = vinsertps_avx(auVar51,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d58) + lVar26)),
                          0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d78) + lVar26)
                                           ),0x20);
  auVar96 = vinsertps_avx(auVar96,ZEXT416(*(uint *)((ulonglong)(uVar41 & _UNK_150b50d98) + lVar26)),
                          0x20);
  auVar116 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar16._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar16._4_4_)),0x10);
  auVar162 = vpslld_avx(auVar60._0_16_,4);
  auVar19 = vpand_avx(auVar162,auVar18);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)(param_1 + auVar16._8_4_)),0x20);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)(param_1 + auVar16._12_4_)),0x30);
  lVar26 = param_1 + auVar16._12_4_;
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d5c) + lVar26)),
                          0x30);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d7c) + lVar26)
                                           ),0x30);
  auVar115 = vinsertps_avx(auVar115,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d9c) + lVar26)
                                           ),0x30);
  lVar26 = param_1 + auVar151._12_4_;
  auVar51 = vinsertps_avx(auVar51,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d5c) + lVar26)),
                          0x30);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d7c) + lVar26)
                                           ),0x30);
  auVar96 = vinsertps_avx(auVar96,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d9c) + lVar26)),
                          0x30);
  uVar37 = vextractps_avx(auVar172,1);
  uVar34 = vextractps_avx(auVar172,2);
  lVar32 = CONCAT44((int)((ulonglong)lVar26 >> 0x20),uVar34);
  lVar26 = param_1 + auVar19._0_4_;
  auVar16 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar19._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar19._4_4_)),0x10);
  lVar28 = param_1 + auVar19._4_4_;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_1 + auVar19._8_4_)),0x20);
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_1 + auVar19._12_4_)),0x30);
  auVar177 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar172._0_4_ + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)uVar37 + lVar28)),0x10);
  uVar41 = vextractps_avx(auVar176,1);
  uVar45 = vextractps_avx(auVar176,2);
  uVar27 = vextractps_avx(auVar176,3);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar176._0_4_ + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)uVar41 + lVar28)),0x10);
  auVar143._16_16_ = auVar116;
  auVar143._0_16_ = auVar16;
  auVar116 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                             (uVar66 & 
                                             ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                             ) + lVar26)),
                           ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d84) + lVar28)),0x10);
  auVar173 = vpslld_avx(auVar56._0_16_,4);
  auVar52 = vpand_avx(auVar173,auVar18);
  lVar26 = param_1 + auVar52._0_4_;
  lVar28 = param_1 + auVar52._4_4_;
  auVar16 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar172._0_4_ + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)uVar37 + lVar28)),0x10);
  auVar18 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar176._0_4_ + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)uVar41 + lVar28)),0x10);
  lVar29 = param_1 + auVar19._8_4_;
  lVar30 = param_1 + auVar19._12_4_;
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)(lVar32 + lVar29)),0x20);
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)((ulonglong)auVar172._12_4_ + lVar30)),0x30);
  auVar164._16_16_ = auVar87;
  auVar164._0_16_ = auVar177;
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar66 & 
                                            ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                            ) + lVar26)),
                          ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d84) + lVar28)),0x10);
  auVar177 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)uVar45 + lVar29)),0x20);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d88) + lVar29)
                                           ),0x20);
  lVar26 = param_1 + auVar52._8_4_;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(lVar32 + lVar26)),0x20);
  auVar17 = vinsertps_avx(auVar18,ZEXT416(*(uint *)((ulonglong)uVar45 + lVar26)),0x20);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar81 & _UNK_150b50d88) + lVar26)),
                          0x20);
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)((ulonglong)uVar27 + lVar30)),0x30);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)((ulonglong)(uVar84 & _UNK_150b50d8c) + lVar30)
                                           ),0x30);
  lVar26 = param_1 + auVar52._12_4_;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)((ulonglong)auVar172._12_4_ + lVar26)),0x30);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)uVar27 + lVar26)),0x30);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar84 & _UNK_150b50d8c) + lVar26)),
                          0x30);
  auVar148._16_16_ = auVar118;
  auVar148._0_16_ = auVar177;
  auVar118 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar151._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar151._4_4_)),0x10);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + auVar151._8_4_)),0x20);
  auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(param_1 + auVar151._12_4_)),0x30);
  auVar177 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar52._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar52._4_4_)),0x10);
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)(param_1 + auVar52._8_4_)),0x20);
  auVar177 = vinsertps_avx(auVar177,ZEXT416(*(uint *)(param_1 + auVar52._12_4_)),0x30);
  auVar170._16_16_ = auVar118;
  auVar170._0_16_ = auVar177;
  auVar154._16_16_ = auVar51;
  auVar154._0_16_ = auVar16;
  lVar26 = (longlong)(int)((uint)uVar40 << 2);
  auVar59 = vmaskmovps_avx(auVar74,*(undefined1 (*) [32])(param_3 + lVar26));
  auVar100._16_16_ = auVar150;
  auVar100._0_16_ = auVar17;
  auVar72 = vmaskmovps_avx(auVar74,*(undefined1 (*) [32])(param_4 + lVar26));
  auVar60 = vmaskmovps_avx(auVar74,auVar143);
  auVar56 = vmaskmovps_avx(auVar74,auVar164);
  auVar70 = vmaskmovps_avx(auVar74,auVar148);
  auVar57 = vmaskmovps_avx(auVar74,auVar170);
  auVar71 = vmaskmovps_avx(auVar74,auVar154);
  auVar58 = vmaskmovps_avx(auVar74,auVar100);
  bVar20 = (byte)uVar21;
  if ((~bVar20 & 0x81) == 0) {
    auVar177._8_8_ = 0;
    auVar177._0_8_ = *(ulonglong *)(param_6 + uVar31);
  }
  else {
    pbVar39 = (byte *)(param_6 + uVar31);
    auVar118 = vpcmpgtd_avx(auVar95,auVar54);
    auVar62._16_16_ = auVar53;
    auVar62._0_16_ = auVar118;
    uVar27 = vmovmskps_avx(auVar62);
    if ((uVar27 & 1) != 0) {
      auVar177 = ZEXT116(*pbVar39);
    }
    if ((uVar27 & 2) != 0) {
      auVar118 = vpinsrb_avx(auVar177,(uint)pbVar39[1],1);
      auVar177 = vpblendw_avx(auVar118,auVar177,0xe);
    }
    if ((uVar27 & 4) != 0) {
      auVar118 = vpmovzxwd_avx(auVar177);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[2],2);
      auVar118 = vpinsrb_avx(auVar118,(uint)auVar177[3],3);
      auVar177 = vpblendw_avx(auVar118,auVar177,0xc);
    }
    if ((uVar27 & 8) != 0) {
      auVar118 = vpmovzxwd_avx(auVar177);
      auVar118 = vpinsrb_avx(auVar118,(uint)auVar177[2],2);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[3],3);
      auVar177 = vpblendw_avx(auVar118,auVar177,0xc);
    }
    if ((uVar27 & 0x10) != 0) {
      auVar118 = vpshufb_avx(auVar177,___xmm_80800706808005048080030203020100);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[4],4);
      auVar118 = vpinsrb_avx(auVar118,(uint)auVar177[5],5);
      auVar177 = vpblendw_avx(auVar118,auVar177,8);
    }
    if ((uVar27 & 0x20) != 0) {
      auVar118 = vpshufb_avx(auVar177,___xmm_80800706808005048080030403020100);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[5],5);
      auVar177 = vpblendw_avx(auVar118,auVar177,8);
    }
    if ((uVar27 & 0x40) != 0) {
      auVar118 = vpshufb_avx(auVar177,___xmm_80800706808005048080050403020100);
      auVar118 = vpinsrb_avx(auVar118,(uint)pbVar39[6],6);
      auVar177 = vpinsrb_avx(auVar118,(uint)auVar177[7],7);
    }
    if ((uVar27 & 0x80) != 0) {
      auVar118 = vpshufb_avx(auVar177,___xmm_80800706808005048006050403020100);
      auVar177 = vpinsrb_avx(auVar118,(uint)pbVar39[7],7);
    }
  }
  auVar95 = vpcmpgtd_avx(auVar95,auVar54);
  auVar63._16_16_ = auVar53;
  auVar63._0_16_ = auVar95;
  auVar95 = vpshufd_avx(auVar177,0x55);
  auVar95 = vpmovzxbd_avx(auVar95);
  auVar54 = vpmovzxbd_avx(auVar177);
  auVar118 = vpslld_avx(auVar54,2);
  auVar95 = vpslld_avx(auVar95,2);
  auVar54 = vpunpckhdq_avx(auVar95,ZEXT816(0) << 0x20);
  auVar95 = vpmovzxdq_avx(auVar95);
  auVar179._16_16_ = auVar54;
  auVar179._0_16_ = auVar95;
  auVar54 = vpunpckhdq_avx(auVar118,ZEXT816(0) << 0x20);
  auVar95 = vpmovzxdq_avx(auVar118);
  auVar101._16_16_ = auVar54;
  auVar101._0_16_ = auVar95;
  auVar95 = vpmovsxdq_avx(auVar69);
  auVar69 = vpshufd_avx(auVar69,0xfa);
  auVar122._16_16_ = auVar69;
  auVar122._0_16_ = auVar95;
  auVar120 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar101,auVar122);
  auVar97 = vsubps_avx(auVar60,auVar57);
  auVar119 = vsubps_avx(auVar56,auVar71);
  auVar135 = vsubps_avx(auVar70,auVar58);
  auVar165._0_4_ =
       auVar135._0_4_ * auVar135._0_4_ +
       auVar119._0_4_ * auVar119._0_4_ + auVar97._0_4_ * auVar97._0_4_;
  auVar165._4_4_ =
       auVar135._4_4_ * auVar135._4_4_ +
       auVar119._4_4_ * auVar119._4_4_ + auVar97._4_4_ * auVar97._4_4_;
  auVar165._8_4_ =
       auVar135._8_4_ * auVar135._8_4_ +
       auVar119._8_4_ * auVar119._8_4_ + auVar97._8_4_ * auVar97._8_4_;
  auVar165._12_4_ =
       auVar135._12_4_ * auVar135._12_4_ +
       auVar119._12_4_ * auVar119._12_4_ + auVar97._12_4_ * auVar97._12_4_;
  auVar165._16_4_ =
       auVar135._16_4_ * auVar135._16_4_ +
       auVar119._16_4_ * auVar119._16_4_ + auVar97._16_4_ * auVar97._16_4_;
  auVar165._20_4_ =
       auVar135._20_4_ * auVar135._20_4_ +
       auVar119._20_4_ * auVar119._20_4_ + auVar97._20_4_ * auVar97._20_4_;
  auVar165._24_4_ =
       auVar135._24_4_ * auVar135._24_4_ +
       auVar119._24_4_ * auVar119._24_4_ + auVar97._24_4_ * auVar97._24_4_;
  auVar165._28_4_ =
       auVar135._28_4_ * auVar135._28_4_ +
       auVar119._28_4_ * auVar119._28_4_ + auVar97._28_4_ * auVar97._28_4_;
  auVar69 = vpmovsxdq_avx(auVar174);
  auVar174 = vpshufd_avx(auVar174,0xfa);
  auVar146 = vsqrtps_avx(auVar165);
  auVar75._16_16_ = auVar174;
  auVar75._0_16_ = auVar69;
  auVar98 = vcmpps_avx(auVar165,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar97 = vdivps_avx(auVar97,auVar146);
  auVar123._4_4_ = __real_3f800000;
  auVar123._0_4_ = __real_3f800000;
  auVar123._8_4_ = __real_3f800000;
  auVar123._12_4_ = __real_3f800000;
  auVar123._16_4_ = __real_3f800000;
  auVar123._20_4_ = __real_3f800000;
  auVar123._24_4_ = __real_3f800000;
  auVar123._28_4_ = __real_3f800000;
  auVar97 = vblendvps_avx(auVar97,auVar123,auVar98);
  auVar97 = vmaskmovps_avx(auVar63,auVar97);
  auVar119 = vdivps_avx(auVar119,auVar146);
  uVar27 = auVar98._0_4_;
  auVar171._0_4_ = ~uVar27 & auVar119._0_4_;
  uVar37 = auVar98._4_4_;
  auVar171._4_4_ = ~uVar37 & auVar119._4_4_;
  uVar41 = auVar98._8_4_;
  auVar171._8_4_ = ~uVar41 & auVar119._8_4_;
  uVar45 = auVar98._12_4_;
  auVar171._12_4_ = ~uVar45 & auVar119._12_4_;
  uVar66 = auVar98._16_4_;
  auVar171._16_4_ = ~uVar66 & auVar119._16_4_;
  uVar78 = auVar98._20_4_;
  auVar171._20_4_ = ~uVar78 & auVar119._20_4_;
  uVar81 = auVar98._24_4_;
  auVar171._24_4_ = ~uVar81 & auVar119._24_4_;
  uVar84 = auVar98._28_4_;
  auVar171._28_4_ = ~uVar84 & auVar119._28_4_;
  auVar98 = vmaskmovps_avx(auVar63,auVar171);
  auVar119 = vdivps_avx(auVar135,auVar146);
  auVar167._0_4_ = ~uVar27 & auVar119._0_4_;
  auVar167._4_4_ = ~uVar37 & auVar119._4_4_;
  auVar167._8_4_ = ~uVar41 & auVar119._8_4_;
  auVar167._12_4_ = ~uVar45 & auVar119._12_4_;
  auVar167._16_4_ = ~uVar66 & auVar119._16_4_;
  auVar167._20_4_ = ~uVar78 & auVar119._20_4_;
  auVar167._24_4_ = ~uVar81 & auVar119._24_4_;
  auVar167._28_4_ = ~uVar84 & auVar119._28_4_;
  auVar119 = vmaskmovps_avx(auVar63,auVar167);
  auVar135 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar179,auVar75);
  auVar174 = vinsertps_avx(ZEXT416(*(uint *)(param_7 + auVar135._0_8_)),
                           ZEXT416(*(uint *)(param_7 + auVar135._8_8_)),0x10);
  auVar174 = vinsertps_avx(auVar174,ZEXT416(*(uint *)(param_7 + auVar135._16_8_)),0x20);
  auVar174 = vinsertps_avx(auVar174,ZEXT416(*(uint *)(param_7 + auVar135._24_8_)),0x30);
  auVar69 = vinsertps_avx(ZEXT416(*(uint *)(param_7 + auVar120._0_8_)),
                          ZEXT416(*(uint *)(param_7 + auVar120._8_8_)),0x10);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_7 + auVar120._16_8_)),0x20);
  auVar69 = vinsertps_avx(auVar69,ZEXT416(*(uint *)(param_7 + auVar120._24_8_)),0x30);
  auVar144._0_4_ = ~uVar27 & auVar146._0_4_;
  auVar144._4_4_ = ~uVar37 & auVar146._4_4_;
  auVar144._8_4_ = ~uVar41 & auVar146._8_4_;
  auVar144._12_4_ = ~uVar45 & auVar146._12_4_;
  auVar144._16_4_ = ~uVar66 & auVar146._16_4_;
  auVar144._20_4_ = ~uVar78 & auVar146._20_4_;
  auVar144._24_4_ = ~uVar81 & auVar146._24_4_;
  auVar144._28_4_ = ~uVar84 & auVar146._28_4_;
  auVar59 = vsubps_avx(auVar144,auVar59);
  auVar95 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar104 = auVar95._0_4_;
  fVar108 = auVar95._4_4_;
  fVar90 = auVar95._8_4_;
  fVar92 = auVar95._12_4_;
  fVar67 = fVar104 * fVar104 * auVar69._0_4_;
  fVar79 = fVar108 * fVar108 * auVar69._4_4_;
  fVar82 = fVar90 * fVar90 * auVar69._8_4_;
  fVar85 = fVar92 * fVar92 * auVar69._12_4_;
  fVar104 = fVar104 * fVar104 * auVar174._0_4_;
  fVar108 = fVar108 * fVar108 * auVar174._4_4_;
  fVar90 = fVar90 * fVar90 * auVar174._8_4_;
  fVar92 = fVar92 * fVar92 * auVar174._12_4_;
  auVar145._0_4_ =
       auVar59._0_4_ *
       (float)((uint)fVar67 ^
              ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
  auVar145._4_4_ = auVar59._4_4_ * (float)((uint)fVar79 ^ _UNK_150b50f64);
  auVar145._8_4_ = auVar59._8_4_ * (float)((uint)fVar82 ^ _UNK_150b50f68);
  auVar145._12_4_ = auVar59._12_4_ * (float)((uint)fVar85 ^ _UNK_150b50f6c);
  auVar145._16_4_ = auVar59._16_4_ * (float)((uint)fVar104 ^ _UNK_150b50f70);
  auVar145._20_4_ = auVar59._20_4_ * (float)((uint)fVar108 ^ _UNK_150b50f74);
  auVar145._24_4_ = auVar59._24_4_ * (float)((uint)fVar90 ^ _UNK_150b50f78);
  auVar145._28_4_ = auVar59._28_4_ * (float)((uint)fVar92 ^ _UNK_150b50f7c);
  fVar10 = auVar116._0_4_;
  fVar65 = auVar87._0_4_;
  fVar11 = auVar116._4_4_;
  fVar77 = auVar87._4_4_;
  fVar12 = auVar116._8_4_;
  fVar80 = auVar87._8_4_;
  fVar13 = auVar116._12_4_;
  fVar83 = auVar87._12_4_;
  fVar93 = auVar115._0_4_;
  fVar86 = auVar96._0_4_;
  fVar106 = auVar115._4_4_;
  fVar88 = auVar96._4_4_;
  fVar14 = auVar115._8_4_;
  fVar89 = auVar96._8_4_;
  fVar15 = auVar115._12_4_;
  fVar91 = auVar96._12_4_;
  auVar76._0_4_ = (fVar65 + fVar10) * fVar67 + __real_3f800000;
  auVar76._4_4_ = (fVar77 + fVar11) * fVar79 + __real_3f800000;
  auVar76._8_4_ = (fVar80 + fVar12) * fVar82 + __real_3f800000;
  auVar76._12_4_ = (fVar83 + fVar13) * fVar85 + __real_3f800000;
  auVar76._16_4_ = (fVar86 + fVar93) * fVar104 + __real_3f800000;
  auVar76._20_4_ = (fVar88 + fVar106) * fVar108 + __real_3f800000;
  auVar76._24_4_ = (fVar89 + fVar14) * fVar90 + __real_3f800000;
  auVar76._28_4_ = (fVar91 + fVar15) * fVar92 + __real_3f800000;
  auVar59 = vsubps_avx(auVar145,auVar72);
  auVar59 = vdivps_avx(auVar59,auVar76);
  fVar67 = auVar59._0_4_;
  auVar124._0_4_ = auVar72._0_4_ + fVar67;
  fVar79 = auVar59._4_4_;
  auVar124._4_4_ = auVar72._4_4_ + fVar79;
  fVar82 = auVar59._8_4_;
  auVar124._8_4_ = auVar72._8_4_ + fVar82;
  fVar85 = auVar59._12_4_;
  auVar124._12_4_ = auVar72._12_4_ + fVar85;
  fVar104 = auVar59._16_4_;
  auVar124._16_4_ = auVar72._16_4_ + fVar104;
  fVar108 = auVar59._20_4_;
  auVar124._20_4_ = auVar72._20_4_ + fVar108;
  fVar90 = auVar59._24_4_;
  auVar124._24_4_ = auVar72._24_4_ + fVar90;
  fVar92 = auVar59._28_4_;
  auVar124._28_4_ = auVar72._28_4_ + fVar92;
  auVar59 = vmaskmovps_avx(auVar63,auVar124);
  *(undefined1 (*) [32])(param_4 + lVar26) = auVar59;
  local_2c0 = auVar97._0_4_;
  fStack_2bc = auVar97._4_4_;
  fStack_2b8 = auVar97._8_4_;
  fStack_2b4 = auVar97._12_4_;
  fStack_2b0 = auVar97._16_4_;
  fStack_2ac = auVar97._20_4_;
  fStack_2a8 = auVar97._24_4_;
  fStack_2a4 = auVar97._28_4_;
  auVar174._0_4_ = auVar60._0_4_ + fVar10 * fVar67 * local_2c0;
  auVar174._4_4_ = auVar60._4_4_ + fVar11 * fVar79 * fStack_2bc;
  auVar174._8_4_ = auVar60._8_4_ + fVar12 * fVar82 * fStack_2b8;
  auVar174._12_4_ = auVar60._12_4_ + fVar13 * fVar85 * fStack_2b4;
  auVar175._16_4_ = auVar60._16_4_ + fVar93 * fVar104 * fStack_2b0;
  auVar175._0_16_ = auVar174;
  auVar175._20_4_ = auVar60._20_4_ + fVar106 * fVar108 * fStack_2ac;
  auVar175._24_4_ = auVar60._24_4_ + fVar14 * fVar90 * fStack_2a8;
  auVar175._28_4_ = auVar60._28_4_ + fVar15 * fVar92 * fStack_2a4;
  local_2a0 = auVar98._0_4_;
  fStack_29c = auVar98._4_4_;
  fStack_298 = auVar98._8_4_;
  fStack_294 = auVar98._12_4_;
  fStack_290 = auVar98._16_4_;
  fStack_28c = auVar98._20_4_;
  fStack_288 = auVar98._24_4_;
  fStack_284 = auVar98._28_4_;
  local_2a0 = fVar67 * local_2a0;
  fStack_29c = fVar79 * fStack_29c;
  fStack_298 = fVar82 * fStack_298;
  fStack_294 = fVar85 * fStack_294;
  fStack_290 = fVar104 * fStack_290;
  fStack_28c = fVar108 * fStack_28c;
  fStack_288 = fVar90 * fStack_288;
  fStack_284 = fVar92 * fStack_284;
  local_280 = auVar119._0_4_;
  fStack_27c = auVar119._4_4_;
  fStack_278 = auVar119._8_4_;
  fStack_274 = auVar119._12_4_;
  fStack_270 = auVar119._16_4_;
  fStack_26c = auVar119._20_4_;
  fStack_268 = auVar119._24_4_;
  fStack_264 = auVar119._28_4_;
  local_280 = fVar67 * local_280;
  fStack_27c = fVar79 * fStack_27c;
  fStack_278 = fVar82 * fStack_278;
  fStack_274 = fVar85 * fStack_274;
  fStack_270 = fVar104 * fStack_270;
  fStack_26c = fVar108 * fStack_26c;
  fStack_268 = fVar90 * fStack_268;
  fStack_264 = fVar92 * fStack_264;
  iVar168 = auVar162._0_4_;
  auVar69 = auVar175._16_16_;
  iVar25 = auVar162._4_4_;
  iVar22 = auVar162._8_4_;
  iVar23 = auVar162._12_4_;
  iVar68 = auVar55._0_4_;
  if ((uVar21 & 1) != 0) {
    *(float *)(param_1 + iVar168) = auVar174._0_4_;
  }
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(float *)(param_1 + iVar68) = auVar175._16_4_;
  }
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar55,1);
    uVar34 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar55,2);
    uVar34 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar55,3);
    uVar34 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
    auVar102._0_4_ = auVar56._0_4_ + fVar10 * local_2a0;
    auVar102._4_4_ = auVar56._4_4_ + fVar11 * fStack_29c;
    auVar102._8_4_ = auVar56._8_4_ + fVar12 * fStack_298;
    auVar102._12_4_ = auVar56._12_4_ + fVar13 * fStack_294;
    auVar102._16_4_ = auVar56._16_4_ + fVar93 * fStack_290;
    auVar102._20_4_ = auVar56._20_4_ + fVar106 * fStack_28c;
    auVar102._24_4_ = auVar56._24_4_ + fVar14 * fStack_288;
    auVar102._28_4_ = auVar56._28_4_ + fVar15 * fStack_284;
  }
  else {
    auVar102._0_4_ = auVar56._0_4_ + fVar10 * local_2a0;
    auVar102._4_4_ = auVar56._4_4_ + fVar11 * fStack_29c;
    auVar102._8_4_ = auVar56._8_4_ + fVar12 * fStack_298;
    auVar102._12_4_ = auVar56._12_4_ + fVar13 * fStack_294;
    auVar102._16_4_ = auVar56._16_4_ + fVar93 * fStack_290;
    auVar102._20_4_ = auVar56._20_4_ + fVar106 * fStack_28c;
    auVar102._24_4_ = auVar56._24_4_ + fVar14 * fStack_288;
    auVar102._28_4_ = auVar56._28_4_ + fVar15 * fStack_284;
  }
  if ((uVar21 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar168) = auVar102._0_4_;
  }
  auVar174 = auVar102._0_16_;
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar68) = auVar102._16_4_;
  }
  auVar174 = auVar102._16_16_;
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar55,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar55,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar55,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
    auVar103._0_4_ = auVar70._0_4_ + fVar10 * local_280;
    auVar103._4_4_ = auVar70._4_4_ + fVar11 * fStack_27c;
    auVar103._8_4_ = auVar70._8_4_ + fVar12 * fStack_278;
    auVar103._12_4_ = auVar70._12_4_ + fVar13 * fStack_274;
    auVar103._16_4_ = auVar70._16_4_ + fVar93 * fStack_270;
    auVar103._20_4_ = auVar70._20_4_ + fVar106 * fStack_26c;
    auVar103._24_4_ = auVar70._24_4_ + fVar14 * fStack_268;
    auVar103._28_4_ = auVar70._28_4_ + fVar15 * fStack_264;
  }
  else {
    auVar103._0_4_ = auVar70._0_4_ + fVar10 * local_280;
    auVar103._4_4_ = auVar70._4_4_ + fVar11 * fStack_27c;
    auVar103._8_4_ = auVar70._8_4_ + fVar12 * fStack_278;
    auVar103._12_4_ = auVar70._12_4_ + fVar13 * fStack_274;
    auVar103._16_4_ = auVar70._16_4_ + fVar93 * fStack_270;
    auVar103._20_4_ = auVar70._20_4_ + fVar106 * fStack_26c;
    auVar103._24_4_ = auVar70._24_4_ + fVar14 * fStack_268;
    auVar103._28_4_ = auVar70._28_4_ + fVar15 * fStack_264;
  }
  if ((uVar21 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar168) = auVar103._0_4_;
  }
  auVar174 = auVar103._0_16_;
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar68) = auVar103._16_4_;
  }
  auVar174 = auVar103._16_16_;
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar55,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar55,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar55,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar168) = fVar10;
  }
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar116,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar116,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar116,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar68) = fVar93;
  }
  if ((uVar21 & 0x20) != 0) {
    iVar25 = vextractps_avx(auVar55,1);
    uVar34 = vextractps_avx(auVar115,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar25 = vextractps_avx(auVar55,2);
    uVar34 = vextractps_avx(auVar115,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar25 = vextractps_avx(auVar55,3);
    uVar34 = vextractps_avx(auVar115,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  local_4a0 = auVar57._0_4_;
  fStack_49c = auVar57._4_4_;
  fStack_498 = auVar57._8_4_;
  fStack_494 = auVar57._12_4_;
  fStack_490 = auVar57._16_4_;
  fStack_48c = auVar57._20_4_;
  fStack_488 = auVar57._24_4_;
  fStack_484 = auVar57._28_4_;
  auVar69._0_4_ = fVar65 * fVar67 * local_2c0 + local_4a0;
  auVar69._4_4_ = fVar77 * fVar79 * fStack_2bc + fStack_49c;
  auVar69._8_4_ = fVar80 * fVar82 * fStack_2b8 + fStack_498;
  auVar69._12_4_ = fVar83 * fVar85 * fStack_2b4 + fStack_494;
  auVar125._16_4_ = fVar86 * fVar104 * fStack_2b0 + fStack_490;
  auVar125._0_16_ = auVar69;
  auVar125._20_4_ = fVar88 * fVar108 * fStack_2ac + fStack_48c;
  auVar125._24_4_ = fVar89 * fVar90 * fStack_2a8 + fStack_488;
  auVar125._28_4_ = fVar91 * fVar92 * fStack_2a4 + fStack_484;
  auVar174 = auVar125._16_16_;
  iVar168 = auVar173._0_4_;
  iVar25 = auVar173._4_4_;
  iVar22 = auVar173._8_4_;
  iVar23 = auVar173._12_4_;
  local_480 = auVar71._0_4_;
  fStack_47c = auVar71._4_4_;
  fStack_478 = auVar71._8_4_;
  fStack_474 = auVar71._12_4_;
  fStack_470 = auVar71._16_4_;
  fStack_46c = auVar71._20_4_;
  fStack_468 = auVar71._24_4_;
  fStack_464 = auVar71._28_4_;
  local_380 = auVar58._0_4_;
  fStack_37c = auVar58._4_4_;
  fStack_378 = auVar58._8_4_;
  fStack_374 = auVar58._12_4_;
  fStack_370 = auVar58._16_4_;
  fStack_36c = auVar58._20_4_;
  fStack_368 = auVar58._24_4_;
  fStack_364 = auVar58._28_4_;
  iVar68 = auVar117._0_4_;
  if ((uVar21 & 1) != 0) {
    *(float *)(param_1 + iVar168) = auVar69._0_4_;
  }
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar69,1);
    *(undefined4 *)(param_1 + iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar69,2);
    *(undefined4 *)(param_1 + iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar69,3);
    *(undefined4 *)(param_1 + iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(float *)(param_1 + iVar68) = auVar125._16_4_;
  }
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar117,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar117,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar117,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + iVar24) = uVar34;
    auVar126._0_4_ = fVar65 * local_2a0 + local_480;
    auVar126._4_4_ = fVar77 * fStack_29c + fStack_47c;
    auVar126._8_4_ = fVar80 * fStack_298 + fStack_478;
    auVar126._12_4_ = fVar83 * fStack_294 + fStack_474;
    auVar126._16_4_ = fVar86 * fStack_290 + fStack_470;
    auVar126._20_4_ = fVar88 * fStack_28c + fStack_46c;
    auVar126._24_4_ = fVar89 * fStack_288 + fStack_468;
    auVar126._28_4_ = fVar91 * fStack_284 + fStack_464;
  }
  else {
    auVar126._0_4_ = fVar65 * local_2a0 + local_480;
    auVar126._4_4_ = fVar77 * fStack_29c + fStack_47c;
    auVar126._8_4_ = fVar80 * fStack_298 + fStack_478;
    auVar126._12_4_ = fVar83 * fStack_294 + fStack_474;
    auVar126._16_4_ = fVar86 * fStack_290 + fStack_470;
    auVar126._20_4_ = fVar88 * fStack_28c + fStack_46c;
    auVar126._24_4_ = fVar89 * fStack_288 + fStack_468;
    auVar126._28_4_ = fVar91 * fStack_284 + fStack_464;
  }
  if ((uVar21 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar168) = auVar126._0_4_;
  }
  auVar174 = auVar126._0_16_;
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar68) = auVar126._16_4_;
  }
  auVar174 = auVar126._16_16_;
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar117,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar117,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar117,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar34;
    auVar64._0_4_ = fVar65 * local_280 + local_380;
    auVar64._4_4_ = fVar77 * fStack_27c + fStack_37c;
    auVar64._8_4_ = fVar80 * fStack_278 + fStack_378;
    auVar64._12_4_ = fVar83 * fStack_274 + fStack_374;
    auVar64._16_4_ = fVar86 * fStack_270 + fStack_370;
    auVar64._20_4_ = fVar88 * fStack_26c + fStack_36c;
    auVar64._24_4_ = fVar89 * fStack_268 + fStack_368;
    auVar64._28_4_ = fVar91 * fStack_264 + fStack_364;
  }
  else {
    auVar64._0_4_ = fVar65 * local_280 + local_380;
    auVar64._4_4_ = fVar77 * fStack_27c + fStack_37c;
    auVar64._8_4_ = fVar80 * fStack_278 + fStack_378;
    auVar64._12_4_ = fVar83 * fStack_274 + fStack_374;
    auVar64._16_4_ = fVar86 * fStack_270 + fStack_370;
    auVar64._20_4_ = fVar88 * fStack_26c + fStack_36c;
    auVar64._24_4_ = fVar89 * fStack_268 + fStack_368;
    auVar64._28_4_ = fVar91 * fStack_264 + fStack_364;
  }
  if ((uVar21 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar168) = auVar64._0_4_;
  }
  auVar174 = auVar64._0_16_;
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar68) = auVar64._16_4_;
  }
  auVar174 = auVar64._16_16_;
  if ((uVar21 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar117,1);
    uVar34 = vextractps_avx(auVar174,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar117,2);
    uVar34 = vextractps_avx(auVar174,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar24 = vextractps_avx(auVar117,3);
    uVar34 = vextractps_avx(auVar174,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar34;
  }
  if ((uVar21 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar168) = fVar65;
  }
  if ((uVar21 & 2) != 0) {
    uVar34 = vextractps_avx(auVar87,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 4) != 0) {
    uVar34 = vextractps_avx(auVar87,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar34;
  }
  if ((uVar21 & 8) != 0) {
    uVar34 = vextractps_avx(auVar87,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar34;
  }
  if ((uVar21 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar68) = fVar86;
  }
  if ((uVar21 & 0x20) != 0) {
    iVar25 = vextractps_avx(auVar117,1);
    uVar34 = vextractps_avx(auVar96,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((uVar21 & 0x40) != 0) {
    iVar25 = vextractps_avx(auVar117,2);
    uVar34 = vextractps_avx(auVar96,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  if ((char)bVar20 < '\0') {
    iVar25 = vextractps_avx(auVar117,3);
    uVar34 = vextractps_avx(auVar96,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar25) = uVar34;
  }
  return;
}

// ApplyXPBDSpringDampingConstraintsWithWeightMaps_avx @ 140938830

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraintsWithWeightMaps_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6,byte param_7,longlong param_8,longlong param_9,byte param_10,
               longlong param_11,longlong param_12,uint param_13)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  int iVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  byte bVar41;
  uint uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  ulonglong uVar56;
  longlong lVar57;
  ulonglong uVar58;
  undefined4 uVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  ulonglong uVar66;
  longlong lVar67;
  longlong lVar68;
  longlong lVar69;
  ulonglong uVar70;
  longlong lVar71;
  longlong lVar72;
  int iVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar79 [16];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar94 [16];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar116;
  float fVar117;
  undefined1 auVar110 [32];
  float fVar118;
  undefined1 auVar111 [32];
  undefined1 auVar109 [16];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar130 [16];
  undefined1 auVar129 [16];
  undefined1 auVar131 [32];
  float fVar132;
  undefined1 auVar133 [16];
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  int iVar146;
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  float fVar150;
  undefined1 auVar151 [16];
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  undefined1 auVar152 [32];
  undefined1 auVar154 [32];
  float fVar162;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar170;
  undefined1 auVar163 [32];
  float fVar171;
  uint uVar172;
  float fVar175;
  uint uVar176;
  float fVar177;
  uint uVar178;
  float fVar179;
  uint uVar180;
  float fVar181;
  uint uVar182;
  float fVar183;
  uint uVar184;
  float fVar185;
  uint uVar186;
  undefined1 auVar173 [32];
  float fVar187;
  undefined1 auVar174 [32];
  uint uVar188;
  undefined1 auVar189 [32];
  undefined1 auVar190 [16];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [16];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [16];
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
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float local_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  int local_2e0;
  int iStack_2dc;
  int iStack_2d8;
  int iStack_2d4;
  int local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
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
  int iVar27;
  ulonglong uVar40;
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar153 [32];
  
  uVar42 = param_13 + 7;
  if (-1 < (int)param_13) {
    uVar42 = param_13;
  }
  if ((int)(uVar42 & 0xfffffff8) < 1) {
    uVar56 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    auVar94 = vpshufd_avx(ZEXT416(param_6),0);
    uVar47 = 0;
    uVar56 = 0;
    do {
      auVar119._0_12_ = ZEXT812(0);
      auVar119._12_4_ = 0;
      auVar196 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar196._8_8_ = 0;
        auVar196._0_8_ = *(ulonglong *)(param_8 + uVar56);
      }
      auVar101._16_16_ = *(undefined1 (*) [16])(param_3 + 0x30 + uVar47 * 2);
      auVar101._0_16_ = *(undefined1 (*) [16])(param_3 + 0x10 + uVar47 * 2);
      auVar84._16_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + uVar47 * 2);
      auVar84._0_16_ = *(undefined1 (*) [16])(param_3 + uVar47 * 2);
      auVar83 = vshufps_avx(auVar84,auVar101,0x88);
      auVar84 = vshufps_avx(auVar84,auVar101,0xdd);
      if ((param_10 & 1) != 0) {
        auVar119._8_8_ = 0;
        auVar119._0_8_ = *(ulonglong *)(param_11 + uVar56);
      }
      auVar74 = vpslld_avx(auVar83._16_16_,4);
      auVar92 = vpslld_avx(auVar83._0_16_,4);
      lVar43 = (longlong)auVar92._0_4_;
      lVar60 = (longlong)auVar92._4_4_;
      lVar63 = (longlong)auVar92._8_4_;
      lVar67 = (longlong)auVar92._12_4_;
      lVar71 = (longlong)auVar74._0_4_;
      lVar57 = (longlong)auVar74._4_4_;
      lVar50 = (longlong)auVar74._8_4_;
      lVar30 = (longlong)auVar74._12_4_;
      auVar74 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar71)),
                              ZEXT416(*(uint *)(param_1 + lVar57)),0x10);
      auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_1 + lVar50)),0x20);
      auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_1 + lVar30)),0x30);
      auVar92 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar43)),
                              ZEXT416(*(uint *)(param_1 + lVar60)),0x10);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_1 + lVar63)),0x20);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_1 + lVar67)),0x30);
      auVar191._16_16_ = auVar74;
      auVar191._0_16_ = auVar92;
      auVar120 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar71)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar57)),0x10);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_1 + 4 + lVar50)),0x20);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x30);
      auVar130 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar43)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar60)),0x10);
      auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)(param_1 + 4 + lVar63)),0x20);
      auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)(param_1 + 4 + lVar67)),0x30);
      auVar193 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar71)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar57)),0x10);
      auVar193 = vinsertps_avx(auVar193,ZEXT416(*(uint *)(param_1 + 8 + lVar50)),0x20);
      auVar193 = vinsertps_avx(auVar193,ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar43)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar60)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 8 + lVar63)),0x20);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 8 + lVar67)),0x30);
      auVar192._16_16_ = auVar120;
      auVar192._0_16_ = auVar130;
      auVar80._16_16_ = auVar193;
      auVar80._0_16_ = auVar15;
      uVar25 = *(uint *)(param_1 + 0xc + lVar43);
      uVar172 = *(uint *)(param_1 + 0xc + lVar60);
      uVar176 = *(uint *)(param_1 + 0xc + lVar71);
      uVar178 = *(uint *)(param_1 + 0xc + lVar57);
      uVar180 = *(uint *)(param_1 + 0xc + lVar50);
      uVar182 = *(uint *)(param_1 + 0xc + lVar30);
      auVar75 = vpslld_avx(auVar84._0_16_,4);
      auVar76 = vpslld_avx(auVar84._16_16_,4);
      auVar107 = vinsertps_avx(ZEXT416(uVar176),ZEXT416(uVar178),0x10);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(uVar180),0x20);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(uVar182),0x30);
      uVar184 = *(uint *)(param_1 + 0xc + lVar63);
      auVar108 = vinsertps_avx(ZEXT416(uVar25),ZEXT416(uVar172),0x10);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(uVar184),0x20);
      uVar186 = *(uint *)(param_1 + 0xc + lVar67);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(uVar186),0x30);
      lVar54 = (longlong)auVar75._0_4_;
      lVar51 = (longlong)auVar75._4_4_;
      lVar61 = (longlong)auVar75._8_4_;
      lVar44 = (longlong)auVar76._0_4_;
      lVar68 = (longlong)auVar76._4_4_;
      lVar64 = (longlong)auVar76._8_4_;
      auVar93 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar44)),
                              ZEXT416(*(uint *)(param_1 + lVar68)),0x10);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_1 + lVar64)),0x20);
      lVar45 = (longlong)auVar76._12_4_;
      auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_1 + lVar45)),0x30);
      auVar76 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar54)),
                              ZEXT416(*(uint *)(param_1 + lVar51)),0x10);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + lVar61)),0x20);
      lVar31 = (longlong)auVar75._12_4_;
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + lVar31)),0x30);
      auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar44)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar68)),0x10);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_1 + 4 + lVar64)),0x20);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_1 + 4 + lVar45)),0x30);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar54)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar51)),0x10);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_1 + 4 + lVar61)),0x20);
      auVar194._16_16_ = auVar93;
      auVar194._0_16_ = auVar76;
      auVar93 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x30);
      auVar76 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar44)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar68)),0x10);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + 8 + lVar64)),0x20);
      auVar189._16_16_ = auVar75;
      auVar189._0_16_ = auVar93;
      auVar93 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + 8 + lVar45)),0x30);
      auVar76 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar54)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar51)),0x10);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + 8 + lVar61)),0x20);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x30);
      auVar173._16_16_ = auVar93;
      auVar173._0_16_ = auVar76;
      uVar188 = *(uint *)(param_1 + 0xc + lVar44);
      uVar2 = *(uint *)(param_1 + 0xc + lVar68);
      uVar3 = *(uint *)(param_1 + 0xc + lVar64);
      auVar93 = vinsertps_avx(ZEXT416(uVar188),ZEXT416(uVar2),0x10);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(uVar3),0x20);
      uVar4 = *(uint *)(param_1 + 0xc + lVar45);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(uVar4),0x30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar54);
      uVar6 = *(uint *)(param_1 + 0xc + lVar51);
      uVar7 = *(uint *)(param_1 + 0xc + lVar61);
      auVar76 = vinsertps_avx(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(uVar7),0x20);
      lVar46 = (longlong)(auVar83._0_4_ * 3);
      lVar69 = (longlong)(auVar83._4_4_ * 3);
      lVar72 = (longlong)(auVar83._8_4_ * 3);
      lVar52 = (longlong)(auVar83._16_4_ * 3);
      lVar62 = (longlong)(auVar83._20_4_ * 3);
      lVar55 = (longlong)(auVar83._24_4_ * 3);
      auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar52 * 4)),
                              ZEXT416(*(uint *)(param_2 + lVar62 * 4)),0x10);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + lVar55 * 4)),0x20);
      lVar65 = (longlong)(auVar83._28_4_ * 3);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + lVar65 * 4)),0x30);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar46 * 4)),
                               ZEXT416(*(uint *)(param_2 + lVar69 * 4)),0x10);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + lVar72 * 4)),0x20);
      lVar32 = (longlong)(auVar83._12_4_ * 3);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + lVar32 * 4)),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + lVar31);
      auVar76 = vinsertps_avx(auVar76,ZEXT416(uVar8),0x30);
      auVar133 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar62 * 4)),0x10);
      auVar133 = vinsertps_avx(auVar133,ZEXT416(*(uint *)(param_2 + 4 + lVar55 * 4)),0x20);
      auVar133 = vinsertps_avx(auVar133,ZEXT416(*(uint *)(param_2 + 4 + lVar65 * 4)),0x30);
      auVar151 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar46 * 4)),
                               ZEXT416(*(uint *)(param_2 + 4 + lVar69 * 4)),0x10);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_2 + 4 + lVar72 * 4)),0x20);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_2 + 4 + lVar32 * 4)),0x30);
      auVar95._16_16_ = auVar75;
      auVar95._0_16_ = auVar190;
      auVar81._16_16_ = auVar133;
      auVar81._0_16_ = auVar151;
      auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar62 * 4)),0x10);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 8 + lVar55 * 4)),0x20);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 8 + lVar65 * 4)),0x30);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar46 * 4)),
                               ZEXT416(*(uint *)(param_2 + 8 + lVar69 * 4)),0x10);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + 8 + lVar72 * 4)),0x20);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + 8 + lVar32 * 4)),0x30);
      lVar46 = (longlong)(auVar84._0_4_ * 3);
      lVar62 = (longlong)(auVar84._4_4_ * 3);
      lVar32 = (longlong)(auVar84._8_4_ * 3);
      lVar55 = (longlong)(auVar84._16_4_ * 3);
      lVar52 = (longlong)(auVar84._20_4_ * 3);
      lVar72 = (longlong)(auVar84._24_4_ * 3);
      lVar69 = (longlong)(auVar84._28_4_ * 3);
      auVar133 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar55 * 4)),
                               ZEXT416(*(uint *)(param_2 + lVar52 * 4)),0x10);
      auVar133 = vinsertps_avx(auVar133,ZEXT416(*(uint *)(param_2 + lVar72 * 4)),0x20);
      auVar133 = vinsertps_avx(auVar133,ZEXT416(*(uint *)(param_2 + lVar69 * 4)),0x30);
      lVar65 = (longlong)(auVar84._12_4_ * 3);
      auVar151 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar46 * 4)),
                               ZEXT416(*(uint *)(param_2 + lVar62 * 4)),0x10);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_2 + lVar32 * 4)),0x20);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_2 + lVar65 * 4)),0x30);
      auVar82._16_16_ = auVar75;
      auVar82._0_16_ = auVar190;
      auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar55 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar52 * 4)),0x10);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar55 * 4)),
                               ZEXT416(*(uint *)(param_2 + 8 + lVar52 * 4)),0x10);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 4 + lVar72 * 4)),0x20);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + 8 + lVar72 * 4)),0x20);
      auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_2 + 4 + lVar69 * 4)),0x30);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + 8 + lVar69 * 4)),0x30);
      auVar16 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 4 + lVar46 * 4)),
                              ZEXT416(*(uint *)(param_2 + 4 + lVar62 * 4)),0x10);
      auVar79 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + 8 + lVar46 * 4)),
                              ZEXT416(*(uint *)(param_2 + 8 + lVar62 * 4)),0x10);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_2 + 4 + lVar32 * 4)),0x20);
      auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)(param_2 + 8 + lVar32 * 4)),0x20);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_2 + 4 + lVar65 * 4)),0x30);
      auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)(param_2 + 8 + lVar65 * 4)),0x30);
      auVar78 = vpmovsxbd_avx(auVar196);
      auVar77 = vpslld_avx(auVar78,2);
      auVar83 = vsubps_avx(auVar191,auVar194);
      auVar101 = vsubps_avx(auVar192,auVar189);
      auVar97 = vsubps_avx(auVar80,auVar173);
      auVar147._0_4_ =
           auVar83._0_4_ * auVar83._0_4_ + auVar101._0_4_ * auVar101._0_4_ +
           auVar97._0_4_ * auVar97._0_4_;
      auVar147._4_4_ =
           auVar83._4_4_ * auVar83._4_4_ + auVar101._4_4_ * auVar101._4_4_ +
           auVar97._4_4_ * auVar97._4_4_;
      auVar147._8_4_ =
           auVar83._8_4_ * auVar83._8_4_ + auVar101._8_4_ * auVar101._8_4_ +
           auVar97._8_4_ * auVar97._8_4_;
      auVar147._12_4_ =
           auVar83._12_4_ * auVar83._12_4_ + auVar101._12_4_ * auVar101._12_4_ +
           auVar97._12_4_ * auVar97._12_4_;
      auVar147._16_4_ =
           auVar83._16_4_ * auVar83._16_4_ + auVar101._16_4_ * auVar101._16_4_ +
           auVar97._16_4_ * auVar97._16_4_;
      auVar147._20_4_ =
           auVar83._20_4_ * auVar83._20_4_ + auVar101._20_4_ * auVar101._20_4_ +
           auVar97._20_4_ * auVar97._20_4_;
      auVar147._24_4_ =
           auVar83._24_4_ * auVar83._24_4_ + auVar101._24_4_ * auVar101._24_4_ +
           auVar97._24_4_ * auVar97._24_4_;
      auVar147._28_4_ =
           auVar83._28_4_ * auVar83._28_4_ + auVar101._28_4_ * auVar101._28_4_ +
           auVar97._28_4_ * auVar97._28_4_;
      auVar84 = vsqrtps_avx(auVar147);
      auVar196 = vpshufd_avx(auVar196,0x55);
      auVar83 = vdivps_avx(auVar83,auVar84);
      auVar196 = vpmovsxbd_avx(auVar196);
      auVar78 = vpslld_avx(auVar196,2);
      auVar101 = vdivps_avx(auVar101,auVar84);
      auVar97 = vdivps_avx(auVar97,auVar84);
      auVar196 = vinsertps_avx(ZEXT416(*(uint *)(param_9 + auVar78._0_4_)),
                               ZEXT416(*(uint *)(param_9 + auVar78._4_4_)),0x10);
      auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_9 + auVar78._8_4_)),0x20);
      auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_9 + auVar78._12_4_)),0x30);
      auVar78 = vinsertps_avx(ZEXT416(*(uint *)(param_9 + auVar77._0_4_)),
                              ZEXT416(*(uint *)(param_9 + auVar77._4_4_)),0x10);
      auVar109 = vpshufd_avx(auVar119,0x55);
      auVar109 = vpmovsxbd_avx(auVar109);
      auVar129 = vpslld_avx(auVar109,2);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_9 + auVar77._8_4_)),0x20);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_9 + auVar77._12_4_)),0x30);
      auVar109 = vinsertps_avx(ZEXT416(*(uint *)(param_12 + auVar129._0_4_)),
                               ZEXT416(*(uint *)(param_12 + auVar129._4_4_)),0x10);
      auVar119 = vpmovsxbd_avx(auVar119);
      auVar77 = vpslld_avx(auVar119,2);
      auVar119 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(param_12 + auVar129._8_4_)),0x20);
      auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_12 + auVar129._12_4_)),0x30);
      auVar109 = vinsertps_avx(ZEXT416(*(uint *)(param_12 + auVar77._0_4_)),
                               ZEXT416(*(uint *)(param_12 + auVar77._4_4_)),0x10);
      auVar110._16_16_ = auVar196;
      auVar110._0_16_ = auVar78;
      auVar196 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(param_12 + auVar77._8_4_)),0x20);
      auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_12 + auVar77._12_4_)),0x30);
      uVar70 = uVar47 & 0xffffffff;
      auVar195._16_16_ = *(undefined1 (*) [16])(param_4 + 0x10 + uVar70);
      auVar195._0_16_ = *(undefined1 (*) [16])(param_4 + uVar70);
      auVar84 = vcmpps_avx(auVar147,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar96._4_4_ = __real_3f800000;
      auVar96._0_4_ = __real_3f800000;
      auVar96._8_4_ = __real_3f800000;
      auVar96._12_4_ = __real_3f800000;
      auVar96._16_4_ = __real_3f800000;
      auVar96._20_4_ = __real_3f800000;
      auVar96._24_4_ = __real_3f800000;
      auVar96._28_4_ = __real_3f800000;
      auVar83 = vblendvps_avx(auVar83,auVar96,auVar84);
      fVar132 = (float)(~auVar84._0_4_ & auVar101._0_4_);
      fVar139 = (float)(~auVar84._4_4_ & auVar101._4_4_);
      fVar140 = (float)(~auVar84._8_4_ & auVar101._8_4_);
      fVar141 = (float)(~auVar84._12_4_ & auVar101._12_4_);
      fVar142 = (float)(~auVar84._16_4_ & auVar101._16_4_);
      fVar143 = (float)(~auVar84._20_4_ & auVar101._20_4_);
      fVar144 = (float)(~auVar84._24_4_ & auVar101._24_4_);
      fVar145 = (float)(~auVar84._28_4_ & auVar101._28_4_);
      auVar101 = vdivps_avx(auVar96,auVar195);
      fVar171 = (float)(~auVar84._0_4_ & auVar97._0_4_);
      fVar175 = (float)(~auVar84._4_4_ & auVar97._4_4_);
      fVar177 = (float)(~auVar84._8_4_ & auVar97._8_4_);
      fVar179 = (float)(~auVar84._12_4_ & auVar97._12_4_);
      fVar181 = (float)(~auVar84._16_4_ & auVar97._16_4_);
      fVar183 = (float)(~auVar84._20_4_ & auVar97._20_4_);
      fVar185 = (float)(~auVar84._24_4_ & auVar97._24_4_);
      fVar187 = (float)(~auVar84._28_4_ & auVar97._28_4_);
      auVar84 = vcmpps_avx(auVar195,
                           ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,1
                          );
      auVar84 = vblendvps_avx(auVar101,auVar96,auVar84);
      local_300 = auVar108._0_4_;
      fStack_2fc = auVar108._4_4_;
      fStack_2f8 = auVar108._8_4_;
      fStack_2f4 = auVar108._12_4_;
      fStack_2f0 = auVar107._0_4_;
      fStack_2ec = auVar107._4_4_;
      fStack_2e8 = auVar107._8_4_;
      fStack_2e4 = auVar107._12_4_;
      fVar162 = auVar76._0_4_;
      auVar148._0_4_ = fVar162 + local_300;
      fVar164 = auVar76._4_4_;
      auVar148._4_4_ = fVar164 + fStack_2fc;
      fVar165 = auVar76._8_4_;
      auVar148._8_4_ = fVar165 + fStack_2f8;
      fVar166 = auVar76._12_4_;
      auVar148._12_4_ = fVar166 + fStack_2f4;
      fVar167 = auVar93._0_4_;
      auVar148._16_4_ = fVar167 + fStack_2f0;
      fVar168 = auVar93._4_4_;
      auVar148._20_4_ = fVar168 + fStack_2ec;
      fVar169 = auVar93._8_4_;
      auVar148._24_4_ = fVar169 + fStack_2e8;
      fVar170 = auVar93._12_4_;
      auVar148._28_4_ = fVar170 + fStack_2e4;
      auVar101 = vdivps_avx(auVar110,auVar148);
      auVar101 = vsqrtps_avx(auVar101);
      auVar97 = vsubps_avx(auVar191,auVar95);
      auVar97 = vsubps_avx(auVar97,auVar194);
      local_400 = auVar151._0_4_;
      fStack_3fc = auVar151._4_4_;
      fStack_3f8 = auVar151._8_4_;
      fStack_3f4 = auVar151._12_4_;
      fStack_3f0 = auVar133._0_4_;
      fStack_3ec = auVar133._4_4_;
      fStack_3e8 = auVar133._8_4_;
      fStack_3e4 = auVar133._12_4_;
      auVar81 = vsubps_avx(auVar192,auVar81);
      auVar81 = vsubps_avx(auVar81,auVar189);
      local_420 = auVar16._0_4_;
      fStack_41c = auVar16._4_4_;
      fStack_418 = auVar16._8_4_;
      fStack_414 = auVar16._12_4_;
      fStack_410 = auVar75._0_4_;
      fStack_40c = auVar75._4_4_;
      fStack_408 = auVar75._8_4_;
      fStack_404 = auVar75._12_4_;
      auVar80 = vsubps_avx(auVar80,auVar82);
      auVar80 = vsubps_avx(auVar80,auVar173);
      local_340 = auVar79._0_4_;
      fStack_33c = auVar79._4_4_;
      fStack_338 = auVar79._8_4_;
      fStack_334 = auVar79._12_4_;
      fStack_330 = auVar190._0_4_;
      fStack_32c = auVar190._4_4_;
      fStack_328 = auVar190._8_4_;
      fStack_324 = auVar190._12_4_;
      local_200 = auVar94._0_4_;
      fStack_1fc = auVar94._4_4_;
      fStack_1f8 = auVar94._8_4_;
      fStack_1f4 = auVar94._12_4_;
      fVar106 = auVar84._0_4_ * auVar101._0_4_ * (auVar196._0_4_ + auVar196._0_4_) * local_200;
      fVar116 = auVar84._4_4_ * auVar101._4_4_ * (auVar196._4_4_ + auVar196._4_4_) * fStack_1fc;
      fVar117 = auVar84._8_4_ * auVar101._8_4_ * (auVar196._8_4_ + auVar196._8_4_) * fStack_1f8;
      fVar118 = auVar84._12_4_ * auVar101._12_4_ * (auVar196._12_4_ + auVar196._12_4_) * fStack_1f4;
      local_200 = auVar84._16_4_ * auVar101._16_4_ * (auVar119._0_4_ + auVar119._0_4_) * local_200;
      fStack_1fc = auVar84._20_4_ * auVar101._20_4_ * (auVar119._4_4_ + auVar119._4_4_) * fStack_1fc
      ;
      fStack_1f8 = auVar84._24_4_ * auVar101._24_4_ * (auVar119._8_4_ + auVar119._8_4_) * fStack_1f8
      ;
      fStack_1f4 = auVar84._28_4_ * auVar101._28_4_ * (auVar119._12_4_ + auVar119._12_4_) *
                   fStack_1f4;
      auVar131._0_4_ =
           (auVar83._0_4_ * (auVar97._0_4_ + local_400) + fVar132 * (auVar81._0_4_ + local_420) +
           fVar171 * (auVar80._0_4_ + local_340)) *
           (float)((uint)fVar106 ^
                  ___ymm_8000000080000000800000008000000080000000800000008000000080000000);
      auVar131._4_4_ =
           (auVar83._4_4_ * (auVar97._4_4_ + fStack_3fc) + fVar139 * (auVar81._4_4_ + fStack_41c) +
           fVar175 * (auVar80._4_4_ + fStack_33c)) * (float)((uint)fVar116 ^ _UNK_150b50f64);
      auVar131._8_4_ =
           (auVar83._8_4_ * (auVar97._8_4_ + fStack_3f8) + fVar140 * (auVar81._8_4_ + fStack_418) +
           fVar177 * (auVar80._8_4_ + fStack_338)) * (float)((uint)fVar117 ^ _UNK_150b50f68);
      auVar131._12_4_ =
           (auVar83._12_4_ * (auVar97._12_4_ + fStack_3f4) + fVar141 * (auVar81._12_4_ + fStack_414)
           + fVar179 * (auVar80._12_4_ + fStack_334)) * (float)((uint)fVar118 ^ _UNK_150b50f6c);
      auVar131._16_4_ =
           (auVar83._16_4_ * (auVar97._16_4_ + fStack_3f0) + fVar142 * (auVar81._16_4_ + fStack_410)
           + fVar181 * (auVar80._16_4_ + fStack_330)) * (float)((uint)local_200 ^ _UNK_150b50f70);
      auVar131._20_4_ =
           (auVar83._20_4_ * (auVar97._20_4_ + fStack_3ec) + fVar143 * (auVar81._20_4_ + fStack_40c)
           + fVar183 * (auVar80._20_4_ + fStack_32c)) * (float)((uint)fStack_1fc ^ _UNK_150b50f74);
      auVar131._24_4_ =
           (auVar83._24_4_ * (auVar97._24_4_ + fStack_3e8) + fVar144 * (auVar81._24_4_ + fStack_408)
           + fVar185 * (auVar80._24_4_ + fStack_328)) * (float)((uint)fStack_1f8 ^ _UNK_150b50f78);
      auVar131._28_4_ =
           (auVar83._28_4_ * (auVar97._28_4_ + fStack_3e4) + fVar145 * (auVar81._28_4_ + fStack_404)
           + fVar187 * (auVar80._28_4_ + fStack_324)) * (float)((uint)fStack_1f4 ^ _UNK_150b50f7c);
      auVar119 = *(undefined1 (*) [16])(param_5 + uVar70);
      auVar196 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar70);
      auVar121._16_16_ = auVar196;
      auVar121._0_16_ = auVar119;
      auVar84 = vsubps_avx(auVar131,auVar121);
      auVar111._0_4_ = auVar148._0_4_ * fVar106 + __real_3f800000;
      auVar111._4_4_ = auVar148._4_4_ * fVar116 + __real_3f800000;
      auVar111._8_4_ = auVar148._8_4_ * fVar117 + __real_3f800000;
      auVar111._12_4_ = auVar148._12_4_ * fVar118 + __real_3f800000;
      auVar111._16_4_ = auVar148._16_4_ * local_200 + __real_3f800000;
      auVar111._20_4_ = auVar148._20_4_ * fStack_1fc + __real_3f800000;
      auVar111._24_4_ = auVar148._24_4_ * fStack_1f8 + __real_3f800000;
      auVar111._28_4_ = auVar148._28_4_ * fStack_1f4 + __real_3f800000;
      auVar84 = vdivps_avx(auVar84,auVar111);
      fVar106 = auVar84._0_4_;
      fVar150 = auVar83._0_4_ * fVar106;
      fVar116 = auVar84._4_4_;
      fVar155 = auVar83._4_4_ * fVar116;
      fVar117 = auVar84._8_4_;
      fVar156 = auVar83._8_4_ * fVar117;
      fVar118 = auVar84._12_4_;
      fVar157 = auVar83._12_4_ * fVar118;
      fVar11 = auVar84._16_4_;
      fVar158 = auVar83._16_4_ * fVar11;
      fVar12 = auVar84._20_4_;
      fVar159 = auVar83._20_4_ * fVar12;
      fVar13 = auVar84._24_4_;
      fVar160 = auVar83._24_4_ * fVar13;
      fVar14 = auVar84._28_4_;
      fVar161 = auVar83._28_4_ * fVar14;
      auVar107._0_4_ = auVar92._0_4_ + local_300 * fVar150;
      auVar107._4_4_ = auVar92._4_4_ + fStack_2fc * fVar155;
      auVar107._8_4_ = auVar92._8_4_ + fStack_2f8 * fVar156;
      auVar107._12_4_ = auVar92._12_4_ + fStack_2f4 * fVar157;
      auVar112._16_4_ = auVar74._0_4_ + fStack_2f0 * fVar158;
      auVar112._0_16_ = auVar107;
      auVar112._20_4_ = auVar74._4_4_ + fStack_2ec * fVar159;
      auVar112._24_4_ = auVar74._8_4_ + fStack_2e8 * fVar160;
      auVar112._28_4_ = auVar74._12_4_ + fStack_2e4 * fVar161;
      *(float *)(param_1 + lVar43) = auVar107._0_4_;
      uVar59 = vextractps_avx(auVar107,1);
      *(undefined4 *)(param_1 + lVar60) = uVar59;
      fVar132 = fVar132 * fVar106;
      fVar139 = fVar139 * fVar116;
      fVar140 = fVar140 * fVar117;
      fVar141 = fVar141 * fVar118;
      fVar142 = fVar142 * fVar11;
      fVar143 = fVar143 * fVar12;
      fVar144 = fVar144 * fVar13;
      fVar145 = fVar145 * fVar14;
      uVar59 = vextractps_avx(auVar107,2);
      *(undefined4 *)(param_1 + lVar63) = uVar59;
      uVar59 = vextractps_avx(auVar107,3);
      *(undefined4 *)(param_1 + lVar67) = uVar59;
      auVar74 = auVar112._16_16_;
      *(float *)(param_1 + lVar71) = auVar112._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + lVar57) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + lVar50) = uVar59;
      auVar108._0_4_ = auVar130._0_4_ + fVar132 * local_300;
      auVar108._4_4_ = auVar130._4_4_ + fVar139 * fStack_2fc;
      auVar108._8_4_ = auVar130._8_4_ + fVar140 * fStack_2f8;
      auVar108._12_4_ = auVar130._12_4_ + fVar141 * fStack_2f4;
      auVar113._16_4_ = auVar120._0_4_ + fVar142 * fStack_2f0;
      auVar113._0_16_ = auVar108;
      auVar113._20_4_ = auVar120._4_4_ + fVar143 * fStack_2ec;
      auVar113._24_4_ = auVar120._8_4_ + fVar144 * fStack_2e8;
      auVar113._28_4_ = auVar120._12_4_ + fVar145 * fStack_2e4;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + lVar30) = uVar59;
      *(float *)(param_1 + 4 + lVar43) = auVar108._0_4_;
      uVar59 = vextractps_avx(auVar108,1);
      *(undefined4 *)(param_1 + 4 + lVar60) = uVar59;
      fVar171 = fVar171 * fVar106;
      fVar175 = fVar175 * fVar116;
      fVar177 = fVar177 * fVar117;
      fVar179 = fVar179 * fVar118;
      fVar181 = fVar181 * fVar11;
      fVar183 = fVar183 * fVar12;
      fVar185 = fVar185 * fVar13;
      fVar187 = fVar187 * fVar14;
      uVar59 = vextractps_avx(auVar108,2);
      *(undefined4 *)(param_1 + 4 + lVar63) = uVar59;
      uVar59 = vextractps_avx(auVar108,3);
      *(undefined4 *)(param_1 + 4 + lVar67) = uVar59;
      auVar92 = auVar113._16_16_;
      *(float *)(param_1 + 4 + lVar71) = auVar113._16_4_;
      uVar59 = vextractps_avx(auVar92,1);
      *(undefined4 *)(param_1 + 4 + lVar57) = uVar59;
      uVar59 = vextractps_avx(auVar92,2);
      *(undefined4 *)(param_1 + 4 + lVar50) = uVar59;
      auVar74._0_4_ = auVar15._0_4_ + fVar171 * local_300;
      auVar74._4_4_ = auVar15._4_4_ + fVar175 * fStack_2fc;
      auVar74._8_4_ = auVar15._8_4_ + fVar177 * fStack_2f8;
      auVar74._12_4_ = auVar15._12_4_ + fVar179 * fStack_2f4;
      auVar97._16_4_ = auVar193._0_4_ + fVar181 * fStack_2f0;
      auVar97._0_16_ = auVar74;
      auVar97._20_4_ = auVar193._4_4_ + fVar183 * fStack_2ec;
      auVar97._24_4_ = auVar193._8_4_ + fVar185 * fStack_2e8;
      auVar97._28_4_ = auVar193._12_4_ + fVar187 * fStack_2e4;
      uVar59 = vextractps_avx(auVar92,3);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar59;
      *(float *)(param_1 + 8 + lVar43) = auVar74._0_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 8 + lVar60) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 8 + lVar63) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 8 + lVar67) = uVar59;
      auVar74 = auVar97._16_16_;
      *(float *)(param_1 + 8 + lVar71) = auVar97._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 8 + lVar57) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 8 + lVar50) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar59;
      *(uint *)(param_1 + 0xc + lVar43) = uVar25;
      *(uint *)(param_1 + 0xc + lVar60) = uVar172;
      *(uint *)(param_1 + 0xc + lVar63) = uVar184;
      *(uint *)(param_1 + 0xc + lVar67) = uVar186;
      *(uint *)(param_1 + 0xc + lVar71) = uVar176;
      *(uint *)(param_1 + 0xc + lVar57) = uVar178;
      *(uint *)(param_1 + 0xc + lVar50) = uVar180;
      *(uint *)(param_1 + 0xc + lVar30) = uVar182;
      auVar83._0_4_ = fVar162 * fVar150;
      auVar83._4_4_ = fVar164 * fVar155;
      auVar83._8_4_ = fVar165 * fVar156;
      auVar83._12_4_ = fVar166 * fVar157;
      auVar83._16_4_ = fVar167 * fVar158;
      auVar83._20_4_ = fVar168 * fVar159;
      auVar83._24_4_ = fVar169 * fVar160;
      auVar83._28_4_ = fVar170 * fVar161;
      auVar83 = vsubps_avx(auVar194,auVar83);
      *(int *)(param_1 + lVar54) = auVar83._0_4_;
      auVar74 = auVar83._0_16_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + lVar51) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + lVar61) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + lVar31) = uVar59;
      auVar74 = auVar83._16_16_;
      *(int *)(param_1 + lVar44) = auVar83._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + lVar68) = uVar59;
      auVar98._0_4_ = fVar132 * fVar162;
      auVar98._4_4_ = fVar139 * fVar164;
      auVar98._8_4_ = fVar140 * fVar165;
      auVar98._12_4_ = fVar141 * fVar166;
      auVar98._16_4_ = fVar142 * fVar167;
      auVar98._20_4_ = fVar143 * fVar168;
      auVar98._24_4_ = fVar144 * fVar169;
      auVar98._28_4_ = fVar145 * fVar170;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + lVar64) = uVar59;
      auVar83 = vsubps_avx(auVar189,auVar98);
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + lVar45) = uVar59;
      *(int *)(param_1 + 4 + lVar54) = auVar83._0_4_;
      auVar74 = auVar83._0_16_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 4 + lVar51) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 4 + lVar61) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar59;
      auVar74 = auVar83._16_16_;
      *(int *)(param_1 + 4 + lVar44) = auVar83._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 4 + lVar68) = uVar59;
      auVar99._0_4_ = fVar171 * fVar162;
      auVar99._4_4_ = fVar175 * fVar164;
      auVar99._8_4_ = fVar177 * fVar165;
      auVar99._12_4_ = fVar179 * fVar166;
      auVar99._16_4_ = fVar181 * fVar167;
      auVar99._20_4_ = fVar183 * fVar168;
      auVar99._24_4_ = fVar185 * fVar169;
      auVar99._28_4_ = fVar187 * fVar170;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 4 + lVar64) = uVar59;
      auVar83 = vsubps_avx(auVar173,auVar99);
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 4 + lVar45) = uVar59;
      *(int *)(param_1 + 8 + lVar54) = auVar83._0_4_;
      auVar74 = auVar83._0_16_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 8 + lVar51) = uVar59;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 8 + lVar61) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar59;
      auVar74 = auVar83._16_16_;
      *(int *)(param_1 + 8 + lVar44) = auVar83._16_4_;
      uVar59 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 8 + lVar68) = uVar59;
      auVar92._0_4_ = auVar119._0_4_ + fVar106;
      auVar92._4_4_ = auVar119._4_4_ + fVar116;
      auVar92._8_4_ = auVar119._8_4_ + fVar117;
      auVar92._12_4_ = auVar119._12_4_ + fVar118;
      auVar100._16_4_ = auVar196._0_4_ + fVar11;
      auVar100._0_16_ = auVar92;
      auVar100._20_4_ = auVar196._4_4_ + fVar12;
      auVar100._24_4_ = auVar196._8_4_ + fVar13;
      auVar100._28_4_ = auVar196._12_4_ + fVar14;
      uVar59 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 8 + lVar64) = uVar59;
      uVar59 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 8 + lVar45) = uVar59;
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar70) = auVar100._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar70) = auVar92;
      *(uint *)(param_1 + 0xc + lVar54) = uVar5;
      *(uint *)(param_1 + 0xc + lVar51) = uVar6;
      *(uint *)(param_1 + 0xc + lVar61) = uVar7;
      *(uint *)(param_1 + 0xc + lVar31) = uVar8;
      *(uint *)(param_1 + 0xc + lVar44) = uVar188;
      *(uint *)(param_1 + 0xc + lVar68) = uVar2;
      *(uint *)(param_1 + 0xc + lVar64) = uVar3;
      *(uint *)(param_1 + 0xc + lVar45) = uVar4;
      uVar56 = uVar56 + 8;
      uVar47 = uVar47 + 0x20;
    } while ((int)uVar56 < (int)(uVar42 & 0xfffffff8));
    if ((int)param_13 <= (int)uVar56) {
      return;
    }
  }
  auVar94 = vpshufd_avx(ZEXT416((uint)uVar56),0);
  auVar85._16_16_ = auVar94;
  auVar85._0_16_ = auVar94;
  auVar196 = vpshufd_avx(ZEXT416(param_13),0);
  uVar47 = uVar56 & 0xffffffff;
  pauVar1 = (undefined1 (*) [16])(param_3 + uVar47 * 8);
  auVar74 = SUB3216(auVar85 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar92 = SUB3216(auVar85 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar94 = vpcmpgtd_avx(auVar196,auVar92);
  auVar119 = vpcmpgtd_avx(auVar196,auVar74);
  auVar122._16_16_ = auVar94;
  auVar122._0_16_ = auVar119;
  uVar42 = vmovmskps_avx(auVar122);
  bVar41 = (byte)uVar42;
  if (uVar42 == 0xff) {
    auVar134._16_16_ = pauVar1[3];
    auVar134._0_16_ = pauVar1[1];
    auVar123._16_16_ = pauVar1[2];
    auVar123._0_16_ = *pauVar1;
    auVar83 = vshufps_avx(auVar123,auVar134,0x88);
    auVar84 = vshufps_avx(auVar123,auVar134,0xdd);
    auVar94 = ZEXT816(0) << 0x20;
  }
  else {
    auVar94 = vpcmpgtd_avx(auVar196,auVar92);
    auVar119 = vpcmpgtd_avx(auVar196,auVar74);
    auVar120._0_4_ =
         auVar119._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar120._4_4_ = auVar119._4_4_ & _UNK_150b519c4;
    auVar120._8_4_ = auVar119._8_4_ & _UNK_150b519c8;
    auVar120._12_4_ = auVar119._12_4_ & _UNK_150b519cc;
    vextractps_avx(auVar120,1);
    vextractps_avx(auVar120,2);
    vextractps_avx(auVar120,3);
    auVar130._0_4_ =
         auVar119._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar130._4_4_ = auVar119._4_4_ & _UNK_150b519e4;
    auVar130._8_4_ = auVar119._8_4_ & _UNK_150b519e8;
    auVar130._12_4_ = auVar119._12_4_ & _UNK_150b519ec;
    vextractps_avx(auVar130,1);
    vextractps_avx(auVar130,2);
    vextractps_avx(auVar130,3);
    auVar83 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar94._0_4_ & _UNK_150b519d0)),
                                 ZEXT416(*(uint *)*pauVar1)));
    auVar84 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar1 + (auVar94._0_4_ & _UNK_150b519f0)),
                                 ZEXT416(*(uint *)(*pauVar1 + auVar130._0_4_))));
    auVar94 = (undefined1  [16])0x0;
  }
  if ((param_7 & 1) != 0) {
    if ((~bVar41 & 0x81) == 0) {
      auVar94._8_8_ = 0;
      auVar94._0_8_ = *(ulonglong *)(param_8 + uVar47);
    }
    else {
      pbVar9 = (byte *)(param_8 + uVar47);
      auVar119 = vpcmpgtd_avx(auVar196,auVar92);
      auVar94 = vpcmpgtd_avx(auVar196,auVar74);
      auVar124._16_16_ = auVar119;
      auVar124._0_16_ = auVar94;
      uVar25 = vmovmskps_avx(auVar124);
      if ((uVar25 & 1) != 0) {
        auVar94 = ZEXT116(*pbVar9);
      }
      if ((uVar25 & 2) != 0) {
        auVar119 = vpinsrb_avx(auVar94,(uint)pbVar9[1],1);
        auVar94 = vpblendw_avx(auVar119,auVar94,0xe);
      }
      if ((uVar25 & 4) != 0) {
        auVar119 = vpmovzxwd_avx(auVar94);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[2],2);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar94[3],3);
        auVar94 = vpblendw_avx(auVar119,auVar94,0xc);
      }
      if ((uVar25 & 8) != 0) {
        auVar119 = vpmovzxwd_avx(auVar94);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar94[2],2);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[3],3);
        auVar94 = vpblendw_avx(auVar119,auVar94,0xc);
      }
      if ((uVar25 & 0x10) != 0) {
        auVar119 = vpshufb_avx(auVar94,___xmm_80800706808005048080030203020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[4],4);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar94[5],5);
        auVar94 = vpblendw_avx(auVar119,auVar94,8);
      }
      if ((uVar25 & 0x20) != 0) {
        auVar119 = vpshufb_avx(auVar94,___xmm_80800706808005048080030403020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[5],5);
        auVar94 = vpblendw_avx(auVar119,auVar94,8);
      }
      if ((uVar25 & 0x40) != 0) {
        auVar119 = vpshufb_avx(auVar94,___xmm_80800706808005048080050403020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[6],6);
        auVar94 = vpinsrb_avx(auVar119,(uint)auVar94[7],7);
      }
      if ((uVar25 & 0x80) != 0) {
        auVar94 = vpshufb_avx(auVar94,___xmm_80800706808005048006050403020100);
        auVar94 = vpinsrb_avx(auVar94,(uint)pbVar9[7],7);
      }
    }
  }
  auVar193 = (undefined1  [16])0x0;
  if ((param_10 & 1) != 0) {
    if ((~bVar41 & 0x81) == 0) {
      auVar193._8_8_ = 0;
      auVar193._0_8_ = *(ulonglong *)(param_11 + uVar47);
    }
    else {
      pbVar9 = (byte *)(param_11 + uVar47);
      auVar119 = vpcmpgtd_avx(auVar196,auVar92);
      auVar120 = vpcmpgtd_avx(auVar196,auVar74);
      auVar125._16_16_ = auVar119;
      auVar125._0_16_ = auVar120;
      uVar25 = vmovmskps_avx(auVar125);
      auVar119 = auVar193;
      auVar193 = (undefined1  [16])0x0;
      if ((uVar25 & 1) != 0) {
        auVar119 = ZEXT116(*pbVar9);
        auVar193 = ZEXT116(*pbVar9);
      }
      if ((uVar25 & 2) != 0) {
        auVar120 = vpinsrb_avx(auVar119,(uint)pbVar9[1],1);
        auVar193 = vpblendw_avx(auVar120,auVar119,0xe);
      }
      if ((uVar25 & 4) != 0) {
        auVar119 = vpmovzxwd_avx(auVar193);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[2],2);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar193[3],3);
        auVar193 = vpblendw_avx(auVar119,auVar193,0xc);
      }
      if ((uVar25 & 8) != 0) {
        auVar119 = vpmovzxwd_avx(auVar193);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar193[2],2);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[3],3);
        auVar193 = vpblendw_avx(auVar119,auVar193,0xc);
      }
      if ((uVar25 & 0x10) != 0) {
        auVar119 = vpshufb_avx(auVar193,___xmm_80800706808005048080030203020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[4],4);
        auVar119 = vpinsrb_avx(auVar119,(uint)auVar193[5],5);
        auVar193 = vpblendw_avx(auVar119,auVar193,8);
      }
      if ((uVar25 & 0x20) != 0) {
        auVar119 = vpshufb_avx(auVar193,___xmm_80800706808005048080030403020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[5],5);
        auVar193 = vpblendw_avx(auVar119,auVar193,8);
      }
      if ((uVar25 & 0x40) != 0) {
        auVar119 = vpshufb_avx(auVar193,___xmm_80800706808005048080050403020100);
        auVar119 = vpinsrb_avx(auVar119,(uint)pbVar9[6],6);
        auVar193 = vpinsrb_avx(auVar119,(uint)auVar193[7],7);
      }
      if ((uVar25 & 0x80) != 0) {
        auVar119 = vpshufb_avx(auVar193,___xmm_80800706808005048006050403020100);
        auVar193 = vpinsrb_avx(auVar119,(uint)pbVar9[7],7);
      }
    }
  }
  auVar151 = vpcmpgtd_avx(auVar196,auVar92);
  auVar16 = vpcmpgtd_avx(auVar196,auVar74);
  auVar174._16_16_ = auVar151;
  auVar174._0_16_ = auVar16;
  auVar79 = vpslld_avx(auVar83._0_16_,4);
  auVar78 = vpslld_avx(auVar83._16_16_,4);
  auVar196 = vpand_avx(auVar16,auVar79);
  lVar30 = param_1 + auVar196._0_4_;
  lVar31 = param_1 + auVar196._4_4_;
  lVar32 = param_1 + auVar196._8_4_;
  lVar43 = param_1 + auVar196._12_4_;
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar196._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar196._4_4_)),0x10);
  auVar74 = vpand_avx(auVar151,auVar78);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + auVar196._8_4_)),0x20);
  lVar44 = param_1 + auVar74._0_4_;
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + auVar196._12_4_)),0x30);
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar74._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar74._4_4_)),0x10);
  lVar45 = param_1 + auVar74._4_4_;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_1 + auVar74._8_4_)),0x20);
  lVar46 = param_1 + auVar74._8_4_;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_1 + auVar74._12_4_)),0x30);
  uVar172 = auVar16._0_4_;
  uVar176 = auVar16._4_4_;
  uVar178 = auVar16._8_4_;
  uVar180 = auVar16._12_4_;
  uVar182 = auVar151._0_4_;
  uVar184 = auVar151._4_4_;
  uVar186 = auVar151._8_4_;
  uVar188 = auVar151._12_4_;
  lVar50 = param_1 + auVar74._12_4_;
  uVar33 = (ulonglong)(uVar182 & _UNK_150b50d50);
  uVar34 = (ulonglong)(uVar184 & _UNK_150b50d54);
  auVar74 = vinsertps_avx(ZEXT416(*(uint *)(uVar33 + lVar44)),ZEXT416(*(uint *)(uVar34 + lVar45)),
                          0x10);
  uVar35 = (ulonglong)(uVar186 & _UNK_150b50d58);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(uVar35 + lVar46)),0x20);
  uVar36 = (ulonglong)(uVar188 & _UNK_150b50d5c);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(uVar36 + lVar50)),0x30);
  uVar70 = (ulonglong)
           (uVar172 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004);
  uVar47 = (ulonglong)(uVar176 & _UNK_150b50d44);
  auVar92 = vinsertps_avx(ZEXT416(*(uint *)(uVar70 + lVar30)),ZEXT416(*(uint *)(uVar47 + lVar31)),
                          0x10);
  uVar37 = (ulonglong)(uVar178 & _UNK_150b50d48);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar37 + lVar32)),0x20);
  uVar38 = (ulonglong)(uVar180 & _UNK_150b50d4c);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar38 + lVar43)),0x30);
  auVar190._0_4_ = uVar172 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008
  ;
  auVar190._4_4_ = uVar176 & _UNK_150b50d64;
  auVar190._8_4_ = uVar178 & _UNK_150b50d68;
  auVar190._12_4_ = uVar180 & _UNK_150b50d6c;
  auVar86._16_16_ = auVar196;
  auVar86._0_16_ = auVar119;
  uVar66 = (ulonglong)(uVar184 & _UNK_150b50d74);
  uVar48 = (ulonglong)(uVar186 & _UNK_150b50d78);
  uVar39 = (ulonglong)(uVar188 & _UNK_150b50d7c);
  uVar58 = (ulonglong)(uVar182 & _UNK_150b50d70);
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar44)),ZEXT416(*(uint *)(uVar66 + lVar45)),
                           0x10);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(uVar48 + lVar46)),0x20);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(uVar39 + lVar50)),0x30);
  uVar25 = vextractps_avx(auVar190,1);
  uVar40 = (ulonglong)uVar25;
  uVar25 = vextractps_avx(auVar190,2);
  uVar49 = (ulonglong)uVar25;
  uVar17 = (ulonglong)auVar190._0_4_;
  uVar53 = (ulonglong)auVar190._12_4_;
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar30)),ZEXT416(*(uint *)(uVar40 + lVar31)),
                           0x10);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(uVar49 + lVar32)),0x20);
  auVar102._16_16_ = auVar74;
  auVar102._0_16_ = auVar92;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(uVar53 + lVar43)),0x30);
  auVar152._16_16_ = auVar119;
  auVar152._0_16_ = auVar196;
  auVar109 = vpslld_avx(auVar84._0_16_,4);
  auVar120 = vpand_avx(auVar16,auVar109);
  auVar77 = vpslld_avx(auVar84._16_16_,4);
  auVar92 = vpand_avx(auVar151,auVar77);
  lVar51 = param_1 + auVar120._0_4_;
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar120._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar120._4_4_)),0x10);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + auVar120._8_4_)),0x20);
  lVar52 = param_1 + auVar120._4_4_;
  lVar54 = param_1 + auVar120._8_4_;
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar92._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar92._4_4_)),0x10);
  lVar55 = param_1 + auVar92._0_4_;
  lVar57 = param_1 + auVar92._4_4_;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_1 + auVar92._8_4_)),0x20);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(param_1 + auVar92._12_4_)),0x30);
  lVar60 = param_1 + auVar92._8_4_;
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_1 + auVar120._12_4_)),0x30);
  auVar74 = vinsertps_avx(ZEXT416(*(uint *)(uVar33 + lVar55)),ZEXT416(*(uint *)(uVar34 + lVar57)),
                          0x10);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(uVar35 + lVar60)),0x20);
  lVar61 = param_1 + auVar92._12_4_;
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(uVar36 + lVar61)),0x30);
  auVar92 = vinsertps_avx(ZEXT416(*(uint *)(uVar70 + lVar51)),ZEXT416(*(uint *)(uVar47 + lVar52)),
                          0x10);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar37 + lVar54)),0x20);
  lVar62 = param_1 + auVar120._12_4_;
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar38 + lVar62)),0x30);
  auVar120 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar55)),ZEXT416(*(uint *)(uVar66 + lVar57)),
                           0x10);
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar48 + lVar60)),0x20);
  auVar126._16_16_ = auVar196;
  auVar126._0_16_ = auVar119;
  auVar119 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar39 + lVar61)),0x30);
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar51)),ZEXT416(*(uint *)(uVar40 + lVar52)),
                           0x10);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(uVar49 + lVar54)),0x20);
  auVar149._16_16_ = auVar74;
  auVar149._0_16_ = auVar92;
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)(uVar53 + lVar62)),0x30);
  auVar135._16_16_ = auVar119;
  auVar135._0_16_ = auVar196;
  auVar101 = vmaskmovps_avx(auVar174,auVar86);
  auVar97 = vmaskmovps_avx(auVar174,auVar102);
  auVar81 = vmaskmovps_avx(auVar174,auVar152);
  auVar80 = vmaskmovps_avx(auVar174,auVar126);
  auVar82 = vmaskmovps_avx(auVar174,auVar149);
  auVar95 = vmaskmovps_avx(auVar174,auVar135);
  auVar96 = vsubps_avx(auVar101,auVar80);
  auVar99 = vsubps_avx(auVar97,auVar82);
  auVar100 = vsubps_avx(auVar81,auVar95);
  auVar136._0_4_ =
       auVar100._0_4_ * auVar100._0_4_ +
       auVar96._0_4_ * auVar96._0_4_ + auVar99._0_4_ * auVar99._0_4_;
  auVar136._4_4_ =
       auVar100._4_4_ * auVar100._4_4_ +
       auVar96._4_4_ * auVar96._4_4_ + auVar99._4_4_ * auVar99._4_4_;
  auVar136._8_4_ =
       auVar100._8_4_ * auVar100._8_4_ +
       auVar96._8_4_ * auVar96._8_4_ + auVar99._8_4_ * auVar99._8_4_;
  auVar136._12_4_ =
       auVar100._12_4_ * auVar100._12_4_ +
       auVar96._12_4_ * auVar96._12_4_ + auVar99._12_4_ * auVar99._12_4_;
  auVar136._16_4_ =
       auVar100._16_4_ * auVar100._16_4_ +
       auVar96._16_4_ * auVar96._16_4_ + auVar99._16_4_ * auVar99._16_4_;
  auVar136._20_4_ =
       auVar100._20_4_ * auVar100._20_4_ +
       auVar96._20_4_ * auVar96._20_4_ + auVar99._20_4_ * auVar99._20_4_;
  auVar136._24_4_ =
       auVar100._24_4_ * auVar100._24_4_ +
       auVar96._24_4_ * auVar96._24_4_ + auVar99._24_4_ * auVar99._24_4_;
  auVar136._28_4_ =
       auVar100._28_4_ * auVar100._28_4_ +
       auVar96._28_4_ * auVar96._28_4_ + auVar99._28_4_ * auVar99._28_4_;
  auVar98 = vsqrtps_avx(auVar136);
  auVar96 = vdivps_avx(auVar96,auVar98);
  auVar99 = vdivps_avx(auVar99,auVar98);
  auVar100 = vdivps_avx(auVar100,auVar98);
  auVar98 = vcmpps_avx(auVar136,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar103._4_4_ = __real_3f800000;
  auVar103._0_4_ = __real_3f800000;
  auVar103._8_4_ = __real_3f800000;
  auVar103._12_4_ = __real_3f800000;
  auVar103._16_4_ = __real_3f800000;
  auVar103._20_4_ = __real_3f800000;
  auVar103._24_4_ = __real_3f800000;
  auVar103._28_4_ = __real_3f800000;
  auVar96 = vblendvps_avx(auVar96,auVar103,auVar98);
  auVar87._0_4_ = ~auVar98._0_4_ & auVar99._0_4_;
  auVar87._4_4_ = ~auVar98._4_4_ & auVar99._4_4_;
  auVar87._8_4_ = ~auVar98._8_4_ & auVar99._8_4_;
  auVar87._12_4_ = ~auVar98._12_4_ & auVar99._12_4_;
  auVar87._16_4_ = ~auVar98._16_4_ & auVar99._16_4_;
  auVar87._20_4_ = ~auVar98._20_4_ & auVar99._20_4_;
  auVar87._24_4_ = ~auVar98._24_4_ & auVar99._24_4_;
  auVar87._28_4_ = ~auVar98._28_4_ & auVar99._28_4_;
  auVar127._0_4_ = ~auVar98._0_4_ & auVar100._0_4_;
  auVar127._4_4_ = ~auVar98._4_4_ & auVar100._4_4_;
  auVar127._8_4_ = ~auVar98._8_4_ & auVar100._8_4_;
  auVar127._12_4_ = ~auVar98._12_4_ & auVar100._12_4_;
  auVar127._16_4_ = ~auVar98._16_4_ & auVar100._16_4_;
  auVar127._20_4_ = ~auVar98._20_4_ & auVar100._20_4_;
  auVar127._24_4_ = ~auVar98._24_4_ & auVar100._24_4_;
  auVar127._28_4_ = ~auVar98._28_4_ & auVar100._28_4_;
  auVar96 = vmaskmovps_avx(auVar174,auVar96);
  auVar98 = vmaskmovps_avx(auVar174,auVar87);
  auVar99 = vmaskmovps_avx(auVar174,auVar127);
  lVar63 = (longlong)(int)((uint)uVar56 << 2);
  auVar100 = vmaskmovps_avx(auVar174,*(undefined1 (*) [32])(param_4 + lVar63));
  auVar110 = vdivps_avx(auVar103,auVar100);
  auVar100 = vcmpps_avx(auVar100,
                        ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,1);
  auVar133._0_4_ = uVar172 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
  ;
  auVar133._4_4_ = uVar176 & _UNK_150b50d84;
  auVar133._8_4_ = uVar178 & _UNK_150b50d88;
  auVar133._12_4_ = uVar180 & _UNK_150b50d8c;
  auVar100 = vblendvps_avx(auVar110,auVar103,auVar100);
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar182 & _UNK_150b50d90) + lVar44)),
                           ZEXT416(*(uint *)((ulonglong)(uVar184 & _UNK_150b50d94) + lVar45)),0x10);
  uVar59 = vextractps_avx(auVar133,1);
  lVar44 = CONCAT44((int)((ulonglong)lVar52 >> 0x20),uVar59);
  uVar59 = vextractps_avx(auVar133,2);
  lVar45 = CONCAT44((int)((ulonglong)lVar55 >> 0x20),uVar59);
  uVar59 = vextractps_avx(auVar133,3);
  lVar64 = CONCAT44((int)((ulonglong)lVar57 >> 0x20),uVar59);
  auVar196 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar182 & _UNK_150b50d90) + lVar55)),
                           ZEXT416(*(uint *)((ulonglong)(uVar184 & _UNK_150b50d94) + lVar57)),0x10);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)((ulonglong)(uVar186 & _UNK_150b50d98) + lVar46
                                                     )),0x20);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)((ulonglong)(uVar186 & _UNK_150b50d98) + lVar60
                                                     )),0x20);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)((ulonglong)(uVar188 & _UNK_150b50d9c) + lVar50
                                                     )),0x30);
  auVar196 = vinsertps_avx(auVar196,ZEXT416(*(uint *)((ulonglong)(uVar188 & _UNK_150b50d9c) + lVar61
                                                     )),0x30);
  auVar74 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar133._0_4_ + lVar30)),
                          ZEXT416(*(uint *)(lVar44 + lVar31)),0x10);
  auVar92 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar133._0_4_ + lVar51)),
                          ZEXT416(*(uint *)(lVar44 + lVar52)),0x10);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(lVar45 + lVar32)),0x20);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(lVar45 + lVar54)),0x20);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(lVar64 + lVar43)),0x30);
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(lVar64 + lVar62)),0x30);
  auVar15._4_4_ = auVar83._20_4_ * 3;
  auVar15._0_4_ = auVar83._16_4_ * 3;
  auVar15._8_4_ = auVar83._24_4_ * 3;
  auVar15._12_4_ = auVar83._28_4_ * 3;
  auVar75 = vpand_avx(auVar151,auVar15);
  lVar30 = param_2 + (longlong)auVar75._0_4_ * 4;
  lVar31 = param_2 + (longlong)auVar75._4_4_ * 4;
  auVar120 = vinsertps_avx(ZEXT416(*(uint *)(uVar33 + lVar30)),ZEXT416(*(uint *)(uVar34 + lVar31)),
                           0x10);
  auVar130 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar30)),ZEXT416(*(uint *)(uVar66 + lVar31)),
                           0x10);
  auVar93._4_4_ = auVar84._20_4_ * 3;
  auVar93._0_4_ = auVar84._16_4_ * 3;
  auVar93._8_4_ = auVar84._24_4_ * 3;
  auVar93._12_4_ = auVar84._28_4_ * 3;
  auVar133 = vpand_avx(auVar151,auVar93);
  lVar30 = param_2 + (longlong)auVar133._0_4_ * 4;
  lVar31 = param_2 + (longlong)auVar133._4_4_ * 4;
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)(uVar33 + lVar30)),ZEXT416(*(uint *)(uVar34 + lVar31)),
                          0x10);
  auVar107 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar30)),ZEXT416(*(uint *)(uVar66 + lVar31)),
                           0x10);
  auVar108 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar75._0_4_ * 4)),
                           ZEXT416(*(uint *)(param_2 + (longlong)auVar75._4_4_ * 4)),0x10);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_2 + (longlong)auVar75._8_4_ * 4)),0x20);
  local_2e0 = auVar83._0_4_;
  iStack_2dc = auVar83._4_4_;
  iStack_2d8 = auVar83._8_4_;
  iStack_2d4 = auVar83._12_4_;
  auVar76._4_4_ = iStack_2dc * 3;
  auVar76._0_4_ = local_2e0 * 3;
  auVar76._8_4_ = iStack_2d8 * 3;
  auVar76._12_4_ = iStack_2d4 * 3;
  lVar30 = param_2 + (longlong)auVar75._8_4_ * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar35 + lVar30)),0x20);
  auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)(uVar48 + lVar30)),0x20);
  auVar190 = vpand_avx(auVar16,auVar76);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_2 + (longlong)auVar75._12_4_ * 4)),0x30)
  ;
  lVar30 = param_2 + (longlong)auVar75._12_4_ * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar36 + lVar30)),0x30);
  auVar130 = vinsertps_avx(auVar130,ZEXT416(*(uint *)(uVar39 + lVar30)),0x30);
  lVar30 = param_2 + (longlong)auVar190._0_4_ * 4;
  auVar93 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar190._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar190._4_4_ * 4)),0x10);
  lVar31 = param_2 + (longlong)auVar190._4_4_ * 4;
  auVar76 = vinsertps_avx(ZEXT416(*(uint *)(uVar70 + lVar30)),ZEXT416(*(uint *)(uVar47 + lVar31)),
                          0x10);
  auVar75 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar30)),ZEXT416(*(uint *)(uVar40 + lVar31)),
                          0x10);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_2 + (longlong)auVar190._8_4_ * 4)),0x20);
  lVar30 = param_2 + (longlong)auVar190._8_4_ * 4;
  auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(uVar37 + lVar30)),0x20);
  auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(uVar49 + lVar30)),0x20);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_2 + (longlong)auVar190._12_4_ * 4)),0x30);
  lVar30 = param_2 + (longlong)auVar190._12_4_ * 4;
  auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(uVar38 + lVar30)),0x30);
  auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(uVar53 + lVar30)),0x30);
  auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar133._0_4_ * 4)),
                           ZEXT416(*(uint *)(param_2 + (longlong)auVar133._4_4_ * 4)),0x10);
  auVar137._16_16_ = auVar108;
  auVar137._0_16_ = auVar93;
  auVar108 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_2 + (longlong)auVar133._8_4_ * 4)),0x20)
  ;
  auVar114._16_16_ = auVar120;
  auVar114._0_16_ = auVar76;
  lVar30 = param_2 + (longlong)auVar133._8_4_ * 4;
  auVar120 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(uVar35 + lVar30)),0x20);
  auVar163._16_16_ = auVar130;
  auVar163._0_16_ = auVar75;
  auVar130 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_2 + (longlong)auVar133._12_4_ * 4)),0x30
                          );
  lVar31 = param_2 + (longlong)auVar133._12_4_ * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar36 + lVar31)),0x30);
  local_2c0 = auVar84._0_4_;
  iStack_2bc = auVar84._4_4_;
  iStack_2b8 = auVar84._8_4_;
  iStack_2b4 = auVar84._12_4_;
  auVar75._4_4_ = iStack_2bc * 3;
  auVar75._0_4_ = local_2c0 * 3;
  auVar75._8_4_ = iStack_2b8 * 3;
  auVar75._12_4_ = iStack_2b4 * 3;
  auVar108 = vpand_avx(auVar16,auVar75);
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar108._0_4_ * 4)),
                          ZEXT416(*(uint *)(param_2 + (longlong)auVar108._4_4_ * 4)),0x10);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_2 + (longlong)auVar108._8_4_ * 4)),0x20);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_2 + (longlong)auVar108._12_4_ * 4)),0x30);
  lVar32 = param_2 + (longlong)auVar108._0_4_ * 4;
  lVar43 = param_2 + (longlong)auVar108._4_4_ * 4;
  lVar44 = param_2 + (longlong)auVar108._8_4_ * 4;
  param_2 = param_2 + (longlong)auVar108._12_4_ * 4;
  auVar108 = vinsertps_avx(ZEXT416(*(uint *)(uVar70 + lVar32)),ZEXT416(*(uint *)(uVar47 + lVar43)),
                           0x10);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(uVar37 + lVar44)),0x20);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(uVar38 + param_2)),0x30);
  auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar48 + lVar30)),0x20);
  auVar93 = vpmovsxbd_avx(auVar94);
  auVar93 = vpslld_avx(auVar93,2);
  auVar76 = vpand_avx(auVar16,auVar93);
  auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar39 + lVar31)),0x30);
  auVar93 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar32)),ZEXT416(*(uint *)(uVar40 + lVar43)),
                          0x10);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(uVar49 + lVar44)),0x20);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(uVar53 + param_2)),0x30);
  auVar94 = vpshufd_avx(auVar94,0x55);
  auVar94 = vpmovsxbd_avx(auVar94);
  auVar94 = vpslld_avx(auVar94,2);
  auVar75 = vpand_avx(auVar151,auVar94);
  auVar94 = vinsertps_avx(ZEXT416(*(uint *)(param_9 + auVar75._0_4_)),
                          ZEXT416(*(uint *)(param_9 + auVar75._4_4_)),0x10);
  auVar190 = vpmovsxbd_avx(auVar193);
  auVar190 = vpslld_avx(auVar190,2);
  auVar190 = vpand_avx(auVar16,auVar190);
  auVar193 = vpshufd_avx(auVar193,0x55);
  auVar193 = vpmovsxbd_avx(auVar193);
  auVar193 = vpslld_avx(auVar193,2);
  auVar133 = vpand_avx(auVar151,auVar193);
  auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)(param_9 + auVar75._8_4_)),0x20);
  auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)(param_9 + auVar75._12_4_)),0x30);
  auVar193 = vinsertps_avx(ZEXT416(*(uint *)(param_9 + auVar76._0_4_)),
                           ZEXT416(*(uint *)(param_9 + auVar76._4_4_)),0x10);
  auVar193 = vinsertps_avx(auVar193,ZEXT416(*(uint *)(param_9 + auVar76._8_4_)),0x20);
  auVar193 = vinsertps_avx(auVar193,ZEXT416(*(uint *)(param_9 + auVar76._12_4_)),0x30);
  auVar76 = vinsertps_avx(ZEXT416(*(uint *)(param_12 + auVar133._0_4_)),
                          ZEXT416(*(uint *)(param_12 + auVar133._4_4_)),0x10);
  auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_12 + auVar133._8_4_)),0x20);
  auVar76 = vinsertps_avx(auVar76,ZEXT416(*(uint *)(param_12 + auVar133._12_4_)),0x30);
  auVar75 = vinsertps_avx(ZEXT416(*(uint *)(param_12 + auVar190._0_4_)),
                          ZEXT416(*(uint *)(param_12 + auVar190._4_4_)),0x10);
  auVar75 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_12 + auVar190._8_4_)),0x20);
  auVar104._16_16_ = auVar94;
  auVar104._0_16_ = auVar193;
  auVar94 = vinsertps_avx(auVar75,ZEXT416(*(uint *)(param_12 + auVar190._12_4_)),0x30);
  fVar106 = auVar92._0_4_;
  fVar150 = auVar74._0_4_;
  auVar88._0_4_ = fVar150 + fVar106;
  fVar116 = auVar92._4_4_;
  fVar155 = auVar74._4_4_;
  auVar88._4_4_ = fVar155 + fVar116;
  fVar117 = auVar92._8_4_;
  fVar156 = auVar74._8_4_;
  auVar88._8_4_ = fVar156 + fVar117;
  fVar118 = auVar92._12_4_;
  fVar157 = auVar74._12_4_;
  auVar88._12_4_ = fVar157 + fVar118;
  fVar11 = auVar196._0_4_;
  fVar158 = auVar119._0_4_;
  auVar88._16_4_ = fVar158 + fVar11;
  fVar12 = auVar196._4_4_;
  fVar159 = auVar119._4_4_;
  auVar88._20_4_ = fVar159 + fVar12;
  fVar13 = auVar196._8_4_;
  fVar160 = auVar119._8_4_;
  auVar88._24_4_ = fVar160 + fVar13;
  fVar14 = auVar196._12_4_;
  fVar161 = auVar119._12_4_;
  auVar88._28_4_ = fVar161 + fVar14;
  auVar83 = vdivps_avx(auVar104,auVar88);
  auVar83 = vsqrtps_avx(auVar83);
  local_420 = auVar100._0_4_;
  fStack_41c = auVar100._4_4_;
  fStack_418 = auVar100._8_4_;
  fStack_414 = auVar100._12_4_;
  fStack_410 = auVar100._16_4_;
  fStack_40c = auVar100._20_4_;
  fStack_408 = auVar100._24_4_;
  fStack_404 = auVar100._28_4_;
  auVar193 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar132 = auVar193._0_4_ * (auVar94._0_4_ + auVar94._0_4_) * auVar83._0_4_ * local_420;
  fVar139 = auVar193._4_4_ * (auVar94._4_4_ + auVar94._4_4_) * auVar83._4_4_ * fStack_41c;
  fVar140 = auVar193._8_4_ * (auVar94._8_4_ + auVar94._8_4_) * auVar83._8_4_ * fStack_418;
  fVar141 = auVar193._12_4_ * (auVar94._12_4_ + auVar94._12_4_) * auVar83._12_4_ * fStack_414;
  fVar142 = auVar193._0_4_ * (auVar76._0_4_ + auVar76._0_4_) * auVar83._16_4_ * fStack_410;
  fVar143 = auVar193._4_4_ * (auVar76._4_4_ + auVar76._4_4_) * auVar83._20_4_ * fStack_40c;
  fVar144 = auVar193._8_4_ * (auVar76._8_4_ + auVar76._8_4_) * auVar83._24_4_ * fStack_408;
  fVar145 = auVar193._12_4_ * (auVar76._12_4_ + auVar76._12_4_) * auVar83._28_4_ * fStack_404;
  auVar83 = vsubps_avx(auVar101,auVar137);
  auVar83 = vsubps_avx(auVar83,auVar80);
  auVar84 = vsubps_avx(auVar97,auVar114);
  auVar84 = vsubps_avx(auVar84,auVar82);
  auVar100 = vsubps_avx(auVar81,auVar163);
  auVar100 = vsubps_avx(auVar100,auVar95);
  local_260 = auVar96._0_4_;
  fStack_25c = auVar96._4_4_;
  fStack_258 = auVar96._8_4_;
  fStack_254 = auVar96._12_4_;
  fStack_250 = auVar96._16_4_;
  fStack_24c = auVar96._20_4_;
  fStack_248 = auVar96._24_4_;
  fStack_244 = auVar96._28_4_;
  local_240 = auVar98._0_4_;
  fStack_23c = auVar98._4_4_;
  fStack_238 = auVar98._8_4_;
  fStack_234 = auVar98._12_4_;
  fStack_230 = auVar98._16_4_;
  fStack_22c = auVar98._20_4_;
  fStack_228 = auVar98._24_4_;
  fStack_224 = auVar98._28_4_;
  local_220 = auVar99._0_4_;
  fStack_21c = auVar99._4_4_;
  fStack_218 = auVar99._8_4_;
  fStack_214 = auVar99._12_4_;
  fStack_210 = auVar99._16_4_;
  fStack_20c = auVar99._20_4_;
  fStack_208 = auVar99._24_4_;
  fStack_204 = auVar99._28_4_;
  auVar138._0_4_ =
       (float)((uint)fVar132 ^
              ___ymm_8000000080000000800000008000000080000000800000008000000080000000) *
       ((auVar93._0_4_ + auVar100._0_4_) * local_220 +
       local_260 * (auVar15._0_4_ + auVar83._0_4_) + (auVar108._0_4_ + auVar84._0_4_) * local_240);
  auVar138._4_4_ =
       (float)((uint)fVar139 ^ _UNK_150b50f64) *
       ((auVar93._4_4_ + auVar100._4_4_) * fStack_21c +
       fStack_25c * (auVar15._4_4_ + auVar83._4_4_) + (auVar108._4_4_ + auVar84._4_4_) * fStack_23c)
  ;
  auVar138._8_4_ =
       (float)((uint)fVar140 ^ _UNK_150b50f68) *
       ((auVar93._8_4_ + auVar100._8_4_) * fStack_218 +
       fStack_258 * (auVar15._8_4_ + auVar83._8_4_) + (auVar108._8_4_ + auVar84._8_4_) * fStack_238)
  ;
  auVar138._12_4_ =
       (float)((uint)fVar141 ^ _UNK_150b50f6c) *
       ((auVar93._12_4_ + auVar100._12_4_) * fStack_214 +
       fStack_254 * (auVar15._12_4_ + auVar83._12_4_) +
       (auVar108._12_4_ + auVar84._12_4_) * fStack_234);
  auVar138._16_4_ =
       (float)((uint)fVar142 ^ _UNK_150b50f70) *
       ((auVar107._0_4_ + auVar100._16_4_) * fStack_210 +
       fStack_250 * (auVar130._0_4_ + auVar83._16_4_) +
       (auVar120._0_4_ + auVar84._16_4_) * fStack_230);
  auVar138._20_4_ =
       (float)((uint)fVar143 ^ _UNK_150b50f74) *
       ((auVar107._4_4_ + auVar100._20_4_) * fStack_20c +
       fStack_24c * (auVar130._4_4_ + auVar83._20_4_) +
       (auVar120._4_4_ + auVar84._20_4_) * fStack_22c);
  auVar138._24_4_ =
       (float)((uint)fVar144 ^ _UNK_150b50f78) *
       ((auVar107._8_4_ + auVar100._24_4_) * fStack_208 +
       fStack_248 * (auVar130._8_4_ + auVar83._24_4_) +
       (auVar120._8_4_ + auVar84._24_4_) * fStack_228);
  auVar138._28_4_ =
       (float)((uint)fVar145 ^ _UNK_150b50f7c) *
       ((auVar107._12_4_ + auVar100._28_4_) * fStack_204 +
       fStack_244 * (auVar130._12_4_ + auVar83._28_4_) +
       (auVar120._12_4_ + auVar84._28_4_) * fStack_224);
  auVar89._0_4_ =
       auVar88._0_4_ * fVar132 +
       ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000;
  auVar89._4_4_ = auVar88._4_4_ * fVar139 + _UNK_150b50ce4;
  auVar89._8_4_ = auVar88._8_4_ * fVar140 + _UNK_150b50ce8;
  auVar89._12_4_ = auVar88._12_4_ * fVar141 + _UNK_150b50cec;
  auVar89._16_4_ = auVar88._16_4_ * fVar142 + _UNK_150b50cf0;
  auVar89._20_4_ = auVar88._20_4_ * fVar143 + _UNK_150b50cf4;
  auVar89._24_4_ = auVar88._24_4_ * fVar144 + _UNK_150b50cf8;
  auVar89._28_4_ = auVar88._28_4_ * fVar145 + _UNK_150b50cfc;
  auVar84 = vmaskmovps_avx(auVar174,*(undefined1 (*) [32])(param_5 + lVar63));
  auVar83 = vsubps_avx(auVar138,auVar84);
  auVar83 = vdivps_avx(auVar83,auVar89);
  fVar132 = auVar83._0_4_;
  auVar90._0_4_ = fVar132 + auVar84._0_4_;
  fVar139 = auVar83._4_4_;
  auVar90._4_4_ = fVar139 + auVar84._4_4_;
  fVar140 = auVar83._8_4_;
  auVar90._8_4_ = fVar140 + auVar84._8_4_;
  fVar141 = auVar83._12_4_;
  auVar90._12_4_ = fVar141 + auVar84._12_4_;
  fVar142 = auVar83._16_4_;
  auVar90._16_4_ = fVar142 + auVar84._16_4_;
  fVar143 = auVar83._20_4_;
  auVar90._20_4_ = fVar143 + auVar84._20_4_;
  fVar144 = auVar83._24_4_;
  auVar90._24_4_ = fVar144 + auVar84._24_4_;
  fVar145 = auVar83._28_4_;
  auVar90._28_4_ = fVar145 + auVar84._28_4_;
  auVar83 = vmaskmovps_avx(auVar174,auVar90);
  *(undefined1 (*) [32])(param_5 + lVar63) = auVar83;
  auVar151._0_4_ = auVar101._0_4_ + fVar150 * local_260 * fVar132;
  auVar151._4_4_ = auVar101._4_4_ + fVar155 * fStack_25c * fVar139;
  auVar151._8_4_ = auVar101._8_4_ + fVar156 * fStack_258 * fVar140;
  auVar151._12_4_ = auVar101._12_4_ + fVar157 * fStack_254 * fVar141;
  auVar153._16_4_ = auVar101._16_4_ + fVar158 * fStack_250 * fVar142;
  auVar153._0_16_ = auVar151;
  auVar153._20_4_ = auVar101._20_4_ + fVar159 * fStack_24c * fVar143;
  auVar153._24_4_ = auVar101._24_4_ + fVar160 * fStack_248 * fVar144;
  auVar153._28_4_ = auVar101._28_4_ + fVar161 * fStack_244 * fVar145;
  auVar94 = auVar153._16_16_;
  iVar146 = auVar79._0_4_;
  iVar29 = auVar79._4_4_;
  iVar26 = auVar79._8_4_;
  iVar27 = auVar79._12_4_;
  iVar73 = auVar78._0_4_;
  if ((uVar42 & 1) != 0) {
    *(float *)(param_1 + iVar146) = auVar151._0_4_;
  }
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar151,1);
    *(undefined4 *)(param_1 + iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar151,2);
    *(undefined4 *)(param_1 + iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar151,3);
    *(undefined4 *)(param_1 + iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(float *)(param_1 + iVar73) = auVar153._16_4_;
  }
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar78,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar78,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
  }
  uVar24 = fVar161 * fVar145 * fStack_224;
  uVar23 = fVar160 * fVar144 * fStack_228;
  uVar22 = fVar159 * fVar143 * fStack_22c;
  uVar21 = fVar158 * fVar142 * fStack_230;
  uVar20 = fVar157 * fVar141 * fStack_234;
  uVar19 = fVar156 * fVar140 * fStack_238;
  uVar18 = fVar155 * fVar139 * fStack_23c;
  uVar59 = fVar150 * fVar132 * local_240;
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar78,3);
    uVar10 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + iVar28) = uVar10;
    auVar154._0_4_ = auVar97._0_4_ + (float)uVar59;
    auVar154._4_4_ = auVar97._4_4_ + (float)uVar18;
    auVar154._8_4_ = auVar97._8_4_ + (float)uVar19;
    auVar154._12_4_ = auVar97._12_4_ + (float)uVar20;
    auVar154._16_4_ = auVar97._16_4_ + (float)uVar21;
    auVar154._20_4_ = auVar97._20_4_ + (float)uVar22;
    auVar154._24_4_ = auVar97._24_4_ + (float)uVar23;
    auVar154._28_4_ = auVar97._28_4_ + (float)uVar24;
  }
  else {
    auVar154._0_4_ = auVar97._0_4_ + (float)uVar59;
    auVar154._4_4_ = auVar97._4_4_ + (float)uVar18;
    auVar154._8_4_ = auVar97._8_4_ + (float)uVar19;
    auVar154._12_4_ = auVar97._12_4_ + (float)uVar20;
    auVar154._16_4_ = auVar97._16_4_ + (float)uVar21;
    auVar154._20_4_ = auVar97._20_4_ + (float)uVar22;
    auVar154._24_4_ = auVar97._24_4_ + (float)uVar23;
    auVar154._28_4_ = auVar97._28_4_ + (float)uVar24;
  }
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar146) = auVar154._0_4_;
  }
  auVar94 = auVar154._0_16_;
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar73) = auVar154._16_4_;
  }
  auVar94 = auVar154._16_16_;
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar78,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar78,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
  }
  uVar24 = fVar161 * fVar145 * fStack_204;
  uVar23 = fVar160 * fVar144 * fStack_208;
  uVar22 = fVar159 * fVar143 * fStack_20c;
  uVar21 = fVar158 * fVar142 * fStack_210;
  uVar20 = fVar157 * fVar141 * fStack_214;
  uVar19 = fVar156 * fVar140 * fStack_218;
  uVar18 = fVar155 * fVar139 * fStack_21c;
  uVar59 = fVar150 * fVar132 * local_220;
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar78,3);
    uVar10 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar10;
    auVar91._0_4_ = auVar81._0_4_ + (float)uVar59;
    auVar91._4_4_ = auVar81._4_4_ + (float)uVar18;
    auVar91._8_4_ = auVar81._8_4_ + (float)uVar19;
    auVar91._12_4_ = auVar81._12_4_ + (float)uVar20;
    auVar91._16_4_ = auVar81._16_4_ + (float)uVar21;
    auVar91._20_4_ = auVar81._20_4_ + (float)uVar22;
    auVar91._24_4_ = auVar81._24_4_ + (float)uVar23;
    auVar91._28_4_ = auVar81._28_4_ + (float)uVar24;
  }
  else {
    auVar91._0_4_ = auVar81._0_4_ + (float)uVar59;
    auVar91._4_4_ = auVar81._4_4_ + (float)uVar18;
    auVar91._8_4_ = auVar81._8_4_ + (float)uVar19;
    auVar91._12_4_ = auVar81._12_4_ + (float)uVar20;
    auVar91._16_4_ = auVar81._16_4_ + (float)uVar21;
    auVar91._20_4_ = auVar81._20_4_ + (float)uVar22;
    auVar91._24_4_ = auVar81._24_4_ + (float)uVar23;
    auVar91._28_4_ = auVar81._28_4_ + (float)uVar24;
  }
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar146) = auVar91._0_4_;
  }
  auVar94 = auVar91._0_16_;
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar73) = auVar91._16_4_;
  }
  auVar94 = auVar91._16_16_;
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar78,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar78,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar78,3);
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar146) = fVar150;
  }
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar73) = fVar158;
  }
  if ((uVar42 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar78,1);
    uVar59 = vextractps_avx(auVar119,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar78,2);
    uVar59 = vextractps_avx(auVar119,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((char)bVar41 < '\0') {
    iVar29 = vextractps_avx(auVar78,3);
    uVar59 = vextractps_avx(auVar119,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  auVar115._0_4_ = fVar106 * local_260 * fVar132;
  auVar115._4_4_ = fVar116 * fStack_25c * fVar139;
  auVar115._8_4_ = fVar117 * fStack_258 * fVar140;
  auVar115._12_4_ = fVar118 * fStack_254 * fVar141;
  auVar115._16_4_ = fVar11 * fStack_250 * fVar142;
  auVar115._20_4_ = fVar12 * fStack_24c * fVar143;
  auVar115._24_4_ = fVar13 * fStack_248 * fVar144;
  auVar115._28_4_ = fVar14 * fStack_244 * fVar145;
  auVar83 = vsubps_avx(auVar80,auVar115);
  iVar73 = auVar109._0_4_;
  auVar94 = auVar83._0_16_;
  auVar119 = auVar83._16_16_;
  iVar29 = auVar109._4_4_;
  iVar26 = auVar109._8_4_;
  iVar27 = auVar109._12_4_;
  iVar146 = auVar77._0_4_;
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + iVar73) = auVar83._0_4_;
  }
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + iVar146) = auVar83._16_4_;
  }
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar77,1);
    uVar59 = vextractps_avx(auVar119,1);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) == 0) {
    auVar128._0_4_ = fVar106 * fVar132 * local_240;
    auVar128._4_4_ = fVar116 * fVar139 * fStack_23c;
    auVar128._8_4_ = fVar117 * fVar140 * fStack_238;
    auVar128._12_4_ = fVar118 * fVar141 * fStack_234;
    auVar128._16_4_ = fVar11 * fVar142 * fStack_230;
    auVar128._20_4_ = fVar12 * fVar143 * fStack_22c;
    auVar128._24_4_ = fVar13 * fVar144 * fStack_228;
    auVar128._28_4_ = fVar14 * fVar145 * fStack_224;
  }
  else {
    iVar28 = vextractps_avx(auVar77,2);
    uVar59 = vextractps_avx(auVar119,2);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
    auVar128._0_4_ = fVar106 * fVar132 * local_240;
    auVar128._4_4_ = fVar116 * fVar139 * fStack_23c;
    auVar128._8_4_ = fVar117 * fVar140 * fStack_238;
    auVar128._12_4_ = fVar118 * fVar141 * fStack_234;
    auVar128._16_4_ = fVar11 * fVar142 * fStack_230;
    auVar128._20_4_ = fVar12 * fVar143 * fStack_22c;
    auVar128._24_4_ = fVar13 * fVar144 * fStack_228;
    auVar128._28_4_ = fVar14 * fVar145 * fStack_224;
  }
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar77,3);
    uVar59 = vextractps_avx(auVar119,3);
    *(undefined4 *)(param_1 + iVar28) = uVar59;
    auVar83 = vsubps_avx(auVar82,auVar128);
  }
  else {
    auVar83 = vsubps_avx(auVar82,auVar128);
  }
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar73) = auVar83._0_4_;
  }
  auVar94 = auVar83._0_16_;
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar146) = auVar83._16_4_;
  }
  auVar94 = auVar83._16_16_;
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar77,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) == 0) {
    auVar105._0_4_ = fVar106 * fVar132 * local_220;
    auVar105._4_4_ = fVar116 * fVar139 * fStack_21c;
    auVar105._8_4_ = fVar117 * fVar140 * fStack_218;
    auVar105._12_4_ = fVar118 * fVar141 * fStack_214;
    auVar105._16_4_ = fVar11 * fVar142 * fStack_210;
    auVar105._20_4_ = fVar12 * fVar143 * fStack_20c;
    auVar105._24_4_ = fVar13 * fVar144 * fStack_208;
    auVar105._28_4_ = fVar14 * fVar145 * fStack_204;
  }
  else {
    iVar28 = vextractps_avx(auVar77,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
    auVar105._0_4_ = fVar106 * fVar132 * local_220;
    auVar105._4_4_ = fVar116 * fVar139 * fStack_21c;
    auVar105._8_4_ = fVar117 * fVar140 * fStack_218;
    auVar105._12_4_ = fVar118 * fVar141 * fStack_214;
    auVar105._16_4_ = fVar11 * fVar142 * fStack_210;
    auVar105._20_4_ = fVar12 * fVar143 * fStack_20c;
    auVar105._24_4_ = fVar13 * fVar144 * fStack_208;
    auVar105._28_4_ = fVar14 * fVar145 * fStack_204;
  }
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar77,3);
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar28) = uVar59;
    auVar83 = vsubps_avx(auVar95,auVar105);
  }
  else {
    auVar83 = vsubps_avx(auVar95,auVar105);
  }
  if ((uVar42 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar73) = auVar83._0_4_;
  }
  auVar94 = auVar83._0_16_;
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar146) = auVar83._16_4_;
  }
  auVar94 = auVar83._16_16_;
  if ((uVar42 & 0x20) != 0) {
    iVar28 = vextractps_avx(auVar77,1);
    uVar59 = vextractps_avx(auVar94,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar28 = vextractps_avx(auVar77,2);
    uVar59 = vextractps_avx(auVar94,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((char)bVar41 < '\0') {
    iVar28 = vextractps_avx(auVar77,3);
    uVar59 = vextractps_avx(auVar94,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar28) = uVar59;
  }
  if ((uVar42 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar73) = fVar106;
  }
  if ((uVar42 & 2) != 0) {
    uVar59 = vextractps_avx(auVar92,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 4) != 0) {
    uVar59 = vextractps_avx(auVar92,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar26) = uVar59;
  }
  if ((uVar42 & 8) != 0) {
    uVar59 = vextractps_avx(auVar92,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar59;
  }
  if ((uVar42 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar146) = fVar11;
  }
  if ((uVar42 & 0x20) != 0) {
    iVar29 = vextractps_avx(auVar77,1);
    uVar59 = vextractps_avx(auVar196,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((uVar42 & 0x40) != 0) {
    iVar29 = vextractps_avx(auVar77,2);
    uVar59 = vextractps_avx(auVar196,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar29) = uVar59;
  }
  if ((char)bVar41 < '\0') {
    iVar29 = vextractps_avx(auVar77,3);
    *(float *)(param_1 + 0xc + (longlong)iVar29) = fVar14;
  }
  return;
}


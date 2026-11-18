// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplyPBDPlanarConstraintsWithFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuni_avx @ 140305ba0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsWithFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,uint param_8,uint param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
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
  uint uVar57;
  undefined1 auVar58 [16];
  uint uVar73;
  uint uVar74;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  uint uVar75;
  uint uVar79;
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
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar90;
  float fVar91;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  float fVar92;
  float fVar96;
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [16];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar112 [16];
  uint uVar113;
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  float fVar121;
  float fVar122;
  float fVar132;
  float fVar134;
  float fVar136;
  float fVar138;
  float fVar140;
  float fVar142;
  undefined1 auVar123 [32];
  float fVar144;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  float fVar133;
  float fVar135;
  float fVar137;
  float fVar139;
  float fVar141;
  float fVar143;
  float fVar145;
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  float fVar146;
  uint uVar147;
  float fVar156;
  float fVar159;
  float fVar162;
  float fVar164;
  float fVar165;
  float fVar166;
  undefined1 auVar148 [32];
  float fVar167;
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  uint uVar157;
  uint uVar158;
  uint uVar160;
  uint uVar161;
  uint uVar163;
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
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
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [64];
  int local_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  int local_2e0;
  int iStack_2dc;
  int iStack_2d8;
  int iStack_2d4;
  undefined1 local_2c0 [32];
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int local_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  undefined1 local_1a0 [96];
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 auVar35 [32];
  
  uVar30 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar30 = param_9;
  }
  if ((int)(uVar30 & 0xfffffff8) < 1) {
    uVar14 = 0;
  }
  else {
    auVar43 = vshufps_avx(ZEXT416(param_8),ZEXT416(param_8),0);
    auVar40 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    uVar14 = 0;
    auVar197 = ZEXT1264(ZEXT812(0));
    lVar29 = 0;
    uVar157 = 0;
    do {
      auVar32 = *(undefined1 (*) [16])(param_3 + (ulonglong)uVar157);
      auVar82 = *(undefined1 (*) [16])(param_3 + 0x10 + (ulonglong)uVar157);
      auVar31 = vpslld_avx(auVar82,4);
      auVar39 = vpslld_avx(auVar32,4);
      lVar27 = (longlong)auVar39._0_4_;
      lVar20 = (longlong)auVar39._4_4_;
      lVar9 = (longlong)auVar39._8_4_;
      lVar28 = (longlong)auVar39._12_4_;
      lVar13 = (longlong)auVar31._0_4_;
      lVar15 = (longlong)auVar31._4_4_;
      lVar24 = (longlong)auVar31._8_4_;
      lVar12 = (longlong)auVar31._12_4_;
      auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar13)),
                              ZEXT416(*(uint *)(param_1 + lVar15)),0x10);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar24)),0x20);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar12)),0x30);
      auVar39 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + lVar20)),0x10);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar9)),0x20);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar28)),0x30);
      auVar99._16_16_ = auVar31;
      auVar99._0_16_ = auVar39;
      auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar13)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar15)),0x10);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x20);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + 4 + lVar12)),0x30);
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar20)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + 4 + lVar9)),0x20);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x30);
      auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar13)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar15)),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 8 + lVar12)),0x30);
      auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar20)),0x10);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_1 + 8 + lVar9)),0x20);
      auVar114._16_16_ = auVar97;
      auVar114._0_16_ = auVar41;
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x30);
      auVar189._16_16_ = auVar42;
      auVar189._0_16_ = auVar83;
      uVar160 = *(uint *)(param_1 + 0xc + lVar27);
      uVar147 = *(uint *)(param_1 + 0xc + lVar20);
      uVar158 = *(uint *)(param_1 + 0xc + lVar9);
      uVar161 = *(uint *)(param_1 + 0xc + lVar28);
      uVar163 = *(uint *)(param_1 + 0xc + lVar13);
      uVar113 = *(uint *)(param_1 + 0xc + lVar15);
      uVar5 = *(uint *)(param_1 + 0xc + lVar24);
      uVar6 = *(uint *)(param_1 + 0xc + lVar12);
      auVar58 = vinsertps_avx(ZEXT416(uVar163),ZEXT416(uVar113),0x10);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(uVar5),0x20);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(uVar6),0x30);
      auVar81 = vinsertps_avx(ZEXT416(uVar160),ZEXT416(uVar147),0x10);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(uVar158),0x20);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(uVar161),0x30);
      auVar191._16_16_ = auVar58;
      auVar191._0_16_ = auVar81;
      auVar84 = vcmpps_avx(auVar191,auVar197._0_32_,8);
      if ((((((((SUB321(auVar84 >> 0x1f,0) & 1) == 0 && (SUB321(auVar84 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar84 >> 0x5f,0) & 1) == 0) && SUB321(auVar84 >> 0x7f,0) == '\0') &&
            (SUB321(auVar84 >> 0x9f,0) & 1) == 0) && SUB321(auVar84 >> 0xbf,0) == '\0') &&
          (SUB321(auVar84 >> 0xdf,0) & 1) == 0) && -1 < auVar84[0x1f]) {
        auVar58 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar29);
        auVar81 = *(undefined1 (*) [16])(param_4 + 0x20 + lVar29);
        auVar98 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar29);
        auVar44._16_16_ = auVar58;
        auVar44._0_16_ = *(undefined1 (*) [16])(param_4 + lVar29);
        auVar171._16_16_ = auVar98;
        auVar171._0_16_ = auVar81;
        auVar103 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar29);
        auVar112 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar29);
        auVar179._16_16_ = auVar103;
        auVar179._0_16_ = auVar112;
        auVar84._16_16_ = *(undefined1 (*) [16])(param_4 + lVar29);
        auVar84._0_16_ = auVar58;
        auVar84 = vblendps_avx(auVar44,auVar84,0x24);
        auVar84 = vpermilps_avx(auVar84,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar11 = *(undefined4 *)(param_4 + 0x28 + lVar29);
        auVar59._20_4_ = uVar11;
        auVar59._16_4_ = uVar11;
        auVar59._24_4_ = uVar11;
        auVar59._28_4_ = uVar11;
        uVar11 = *(undefined4 *)(param_4 + 0x24 + lVar29);
        auVar59._4_4_ = uVar11;
        auVar59._0_4_ = uVar11;
        auVar59._8_4_ = uVar11;
        auVar59._12_4_ = uVar11;
        auVar84 = vblendps_avx(auVar84,auVar59,0x88);
        auVar85._16_16_ = auVar112;
        auVar85._0_16_ = auVar103;
        auVar33 = vblendps_avx(auVar85,auVar179,0x44);
        auVar33 = vpermilps_avx(auVar33,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        uVar11 = *(undefined4 *)(param_4 + 0x34 + lVar29);
        auVar148._20_4_ = uVar11;
        auVar148._16_4_ = uVar11;
        auVar148._24_4_ = uVar11;
        auVar148._28_4_ = uVar11;
        auVar98 = vshufps_avx(auVar98,auVar98,0xec);
        auVar148._0_16_ = auVar98;
        auVar33 = vblendps_avx(auVar33,auVar148,0x13);
        auVar104._16_16_ = auVar33._0_16_;
        auVar104._0_16_ = auVar84._0_16_;
        auVar59 = vperm2f128_avx(auVar84,auVar33,0x31);
        auVar84 = vblendps_avx(auVar171,auVar44,0x24);
        auVar33._16_16_ = auVar81;
        auVar33._0_16_ = auVar58;
        auVar84 = vshufps_avx(auVar33,auVar84,0x21);
        auVar84 = vshufps_avx(auVar84,auVar171,0xc2);
        auVar33 = vshufps_avx(auVar85,auVar179,0xc4);
        auVar84 = vblendps_avx(auVar84,auVar33,0xe0);
        auVar58 = *(undefined1 (*) [16])(param_5 + 0x10 + lVar29);
        auVar81 = *(undefined1 (*) [16])(param_5 + 0x20 + lVar29);
        auVar98 = *(undefined1 (*) [16])(param_5 + 0x30 + lVar29);
        auVar172._16_16_ = auVar58;
        auVar172._0_16_ = *(undefined1 (*) [16])(param_5 + lVar29);
        auVar180._16_16_ = auVar98;
        auVar180._0_16_ = auVar81;
        auVar103 = *(undefined1 (*) [16])(param_5 + 0x50 + lVar29);
        auVar112 = *(undefined1 (*) [16])(param_5 + 0x40 + lVar29);
        auVar105._16_16_ = auVar103;
        auVar105._0_16_ = auVar112;
        auVar45._16_16_ = *(undefined1 (*) [16])(param_5 + lVar29);
        auVar45._0_16_ = auVar58;
        auVar33 = vblendps_avx(auVar172,auVar45,0x24);
        auVar33 = vpermilps_avx(auVar33,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar11 = *(undefined4 *)(param_5 + 0x28 + lVar29);
        auVar34._20_4_ = uVar11;
        auVar34._16_4_ = uVar11;
        auVar34._24_4_ = uVar11;
        auVar34._28_4_ = uVar11;
        uVar11 = *(undefined4 *)(param_5 + 0x24 + lVar29);
        auVar34._4_4_ = uVar11;
        auVar34._0_4_ = uVar11;
        auVar34._8_4_ = uVar11;
        auVar34._12_4_ = uVar11;
        auVar197 = ZEXT464(0) << 0x20;
        auVar33 = vblendps_avx(auVar33,auVar34,0x88);
        auVar46._16_16_ = auVar112;
        auVar46._0_16_ = auVar103;
        auVar34 = vblendps_avx(auVar46,auVar105,0x44);
        auVar34 = vpermilps_avx(auVar34,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        uVar11 = *(undefined4 *)(param_5 + 0x34 + lVar29);
        auVar123._20_4_ = uVar11;
        auVar123._16_4_ = uVar11;
        auVar123._24_4_ = uVar11;
        auVar123._28_4_ = uVar11;
        auVar98 = vshufps_avx(auVar98,auVar98,0xec);
        auVar123._0_16_ = auVar98;
        auVar34 = vblendps_avx(auVar34,auVar123,0x13);
        auVar45 = vperm2f128_avx(auVar33,auVar34,0x31);
        auVar35 = vblendps_avx(auVar180,auVar172,0x24);
        local_260 = auVar32._0_4_;
        iStack_25c = auVar32._4_4_;
        iStack_258 = auVar32._8_4_;
        iStack_254 = auVar32._12_4_;
        auVar60._16_16_ = auVar81;
        auVar60._0_16_ = auVar58;
        auVar35 = vshufps_avx(auVar60,auVar35,0x21);
        auVar35 = vshufps_avx(auVar35,auVar180,0xc2);
        local_380 = auVar82._0_4_;
        iStack_37c = auVar82._4_4_;
        iStack_378 = auVar82._8_4_;
        iStack_374 = auVar82._12_4_;
        auVar44 = vshufps_avx(auVar46,auVar105,0xc4);
        auVar35 = vblendps_avx(auVar35,auVar44,0xe0);
        auVar99 = vsubps_avx(auVar104,auVar99);
        auVar114 = vsubps_avx(auVar59,auVar114);
        auVar84 = vsubps_avx(auVar84,auVar189);
        fVar121 = auVar33._0_4_;
        fVar132 = auVar33._4_4_;
        fVar134 = auVar33._8_4_;
        fVar136 = auVar33._12_4_;
        fVar138 = auVar34._0_4_;
        fVar140 = auVar34._4_4_;
        fVar142 = auVar34._8_4_;
        fVar144 = auVar34._12_4_;
        fVar146 = auVar45._0_4_;
        fVar156 = auVar45._4_4_;
        fVar159 = auVar45._8_4_;
        fVar162 = auVar45._12_4_;
        fVar164 = auVar45._16_4_;
        fVar165 = auVar45._20_4_;
        fVar166 = auVar45._24_4_;
        fVar167 = auVar45._28_4_;
        fVar80 = auVar35._0_4_;
        fVar90 = auVar35._4_4_;
        fVar91 = auVar35._8_4_;
        fVar92 = auVar35._12_4_;
        fVar93 = auVar35._16_4_;
        fVar94 = auVar35._20_4_;
        fVar95 = auVar35._24_4_;
        fVar96 = auVar35._28_4_;
        auVar168._0_4_ = fVar80 * auVar84._0_4_ + fVar121 * auVar99._0_4_ + fVar146 * auVar114._0_4_
        ;
        auVar168._4_4_ = fVar90 * auVar84._4_4_ + fVar132 * auVar99._4_4_ + fVar156 * auVar114._4_4_
        ;
        auVar168._8_4_ = fVar91 * auVar84._8_4_ + fVar134 * auVar99._8_4_ + fVar159 * auVar114._8_4_
        ;
        auVar168._12_4_ =
             fVar92 * auVar84._12_4_ + fVar136 * auVar99._12_4_ + fVar162 * auVar114._12_4_;
        auVar168._16_4_ =
             fVar93 * auVar84._16_4_ + fVar138 * auVar99._16_4_ + fVar164 * auVar114._16_4_;
        auVar168._20_4_ =
             fVar94 * auVar84._20_4_ + fVar140 * auVar99._20_4_ + fVar165 * auVar114._20_4_;
        auVar168._24_4_ =
             fVar95 * auVar84._24_4_ + fVar142 * auVar99._24_4_ + fVar166 * auVar114._24_4_;
        auVar168._28_4_ =
             fVar96 * auVar84._28_4_ + fVar144 * auVar99._28_4_ + fVar167 * auVar114._28_4_;
        auVar84 = vcmpps_avx(ZEXT432(0) << 0x20,auVar168,1);
        auVar99 = vcmpps_avx(auVar191,ZEXT432(0) << 0x20,4);
        auVar32._0_4_ = auVar84._0_4_ & auVar99._0_4_;
        auVar32._4_4_ = auVar84._4_4_ & auVar99._4_4_;
        auVar32._8_4_ = auVar84._8_4_ & auVar99._8_4_;
        auVar32._12_4_ = auVar84._12_4_ & auVar99._12_4_;
        auVar35._16_4_ = auVar84._16_4_ & auVar99._16_4_;
        auVar35._0_16_ = auVar32;
        auVar35._20_4_ = auVar84._20_4_ & auVar99._20_4_;
        auVar35._24_4_ = auVar84._24_4_ & auVar99._24_4_;
        auVar35._28_4_ = auVar84._28_4_ & auVar99._28_4_;
        uVar8 = vmovmskps_avx(auVar35);
        if (uVar8 != 0) {
          auVar32 = vpackssdw_avx(auVar32,auVar35._16_16_);
          auVar47._0_4_ = auVar39._0_4_ + auVar168._0_4_ * fVar121;
          auVar47._4_4_ = auVar39._4_4_ + auVar168._4_4_ * fVar132;
          auVar47._8_4_ = auVar39._8_4_ + auVar168._8_4_ * fVar134;
          auVar47._12_4_ = auVar39._12_4_ + auVar168._12_4_ * fVar136;
          auVar47._16_4_ = auVar31._0_4_ + auVar168._16_4_ * fVar138;
          auVar47._20_4_ = auVar31._4_4_ + auVar168._20_4_ * fVar140;
          auVar47._24_4_ = auVar31._8_4_ + auVar168._24_4_ * fVar142;
          auVar47._28_4_ = auVar31._12_4_ + auVar168._28_4_ * fVar144;
          auVar61._0_4_ = auVar41._0_4_ + fVar146 * auVar168._0_4_;
          auVar61._4_4_ = auVar41._4_4_ + fVar156 * auVar168._4_4_;
          auVar61._8_4_ = auVar41._8_4_ + fVar159 * auVar168._8_4_;
          auVar61._12_4_ = auVar41._12_4_ + fVar162 * auVar168._12_4_;
          auVar61._16_4_ = auVar97._0_4_ + fVar164 * auVar168._16_4_;
          auVar61._20_4_ = auVar97._4_4_ + fVar165 * auVar168._20_4_;
          auVar61._24_4_ = auVar97._8_4_ + fVar166 * auVar168._24_4_;
          auVar61._28_4_ = auVar97._12_4_ + fVar167 * auVar168._28_4_;
          auVar106._0_4_ = auVar83._0_4_ + auVar168._0_4_ * fVar80;
          auVar106._4_4_ = auVar83._4_4_ + auVar168._4_4_ * fVar90;
          auVar106._8_4_ = auVar83._8_4_ + auVar168._8_4_ * fVar91;
          auVar106._12_4_ = auVar83._12_4_ + auVar168._12_4_ * fVar92;
          auVar106._16_4_ = auVar42._0_4_ + auVar168._16_4_ * fVar93;
          auVar106._20_4_ = auVar42._4_4_ + auVar168._20_4_ * fVar94;
          auVar106._24_4_ = auVar42._8_4_ + auVar168._24_4_ * fVar95;
          auVar106._28_4_ = auVar42._12_4_ + auVar168._28_4_ * fVar96;
          auVar82 = vpmovsxwd_avx(auVar32);
          auVar32 = vpunpckhwd_avx(auVar32,auVar32);
          auVar36._16_16_ = auVar32;
          auVar36._0_16_ = auVar82;
          auVar84 = vmaskmovps_avx(auVar36,auVar47);
          auVar99 = vmaskmovps_avx(auVar36,auVar61);
          auVar114 = vmaskmovps_avx(auVar36,auVar106);
          cVar7 = (char)uVar8;
          uVar57 = auVar82._0_4_;
          uVar73 = auVar82._4_4_;
          uVar74 = auVar82._8_4_;
          uVar75 = auVar82._12_4_;
          uVar76 = auVar32._0_4_;
          uVar77 = auVar32._4_4_;
          uVar78 = auVar32._8_4_;
          uVar79 = auVar32._12_4_;
          if (cVar7 == -1) {
            auVar31 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar29);
            auVar39 = *(undefined1 (*) [16])(param_6 + 0x30 + lVar29);
            auVar182._16_16_ = auVar31;
            auVar182._0_16_ = *(undefined1 (*) [16])(param_6 + lVar29);
            auVar63._16_16_ = auVar39;
            auVar63._0_16_ = *(undefined1 (*) [16])(param_6 + 0x20 + lVar29);
            auVar97 = *(undefined1 (*) [16])(param_6 + 0x50 + lVar29);
            auVar41 = *(undefined1 (*) [16])(param_6 + 0x40 + lVar29);
            auVar192._16_16_ = auVar97;
            auVar192._0_16_ = auVar41;
            auVar48._16_16_ = *(undefined1 (*) [16])(param_6 + lVar29);
            auVar48._0_16_ = auVar31;
            auVar189 = vblendps_avx(auVar182,auVar48,0x24);
            auVar189 = vpermilps_avx(auVar189,
                                     ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                    );
            uVar11 = *(undefined4 *)(param_6 + 0x28 + lVar29);
            auVar124._20_4_ = uVar11;
            auVar124._16_4_ = uVar11;
            auVar124._24_4_ = uVar11;
            auVar124._28_4_ = uVar11;
            uVar11 = *(undefined4 *)(param_6 + 0x24 + lVar29);
            auVar124._4_4_ = uVar11;
            auVar124._0_4_ = uVar11;
            auVar124._8_4_ = uVar11;
            auVar124._12_4_ = uVar11;
            auVar197 = ZEXT464(0) << 0x20;
            auVar189 = vblendps_avx(auVar189,auVar124,0x88);
            auVar125._16_16_ = auVar41;
            auVar125._0_16_ = auVar97;
            auVar191 = vblendps_avx(auVar125,auVar192,0x44);
            auVar191 = vpermilps_avx(auVar191,
                                     ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                    );
            uVar11 = *(undefined4 *)(param_6 + 0x34 + lVar29);
            auVar174._20_4_ = uVar11;
            auVar174._16_4_ = uVar11;
            auVar174._24_4_ = uVar11;
            auVar174._28_4_ = uVar11;
            auVar39 = vshufps_avx(auVar39,auVar39,0xec);
            auVar174._0_16_ = auVar39;
            auVar191 = vblendps_avx(auVar191,auVar174,0x13);
            auVar173._16_16_ = auVar191._0_16_;
            auVar173._0_16_ = auVar189._0_16_;
            auVar181 = vperm2f128_avx(auVar189,auVar191,0x31);
            auVar189 = vblendps_avx(auVar63,auVar182,0x24);
            auVar189 = vshufps_avx(ZEXT1632(auVar31),auVar189,0x21);
            auVar189 = vshufps_avx(auVar189,auVar63,0xc2);
            auVar191 = vshufps_avx(auVar125,auVar192,0xc4);
            auVar62 = vblendps_avx(auVar189,auVar191,0xe0);
          }
          else {
            auVar31._0_4_ =
                 uVar57 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
            auVar31._4_4_ = uVar73 & _UNK_150b50b04;
            auVar31._8_4_ = uVar74 & _UNK_150b50b08;
            auVar31._12_4_ = uVar75 & _UNK_150b50b0c;
            uVar11 = vextractps_avx(auVar31,1);
            uVar16 = vextractps_avx(auVar31,2);
            uVar17 = vextractps_avx(auVar31,3);
            auVar31 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar76 & _UNK_150b50b10)
                                                               + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar77 & _UNK_150b50b14)
                                                               + param_6)),0x10);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar78 & _UNK_150b50b18) +
                                                                       param_6)),0x20);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar79 & _UNK_150b50b1c) +
                                                                       param_6)),0x30);
            auVar39 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + CONCAT44((int)((ulonglong)local_1a0
                                                                             >> 0x20),uVar11) +
                                                               param_6)),0x10);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + CONCAT44((int)((ulonglong)
                                                                                      param_3 >>
                                                                                     0x20),uVar16) +
                                                                       param_6)),0x20);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)uVar17 + param_6))
                                    ,0x30);
            auVar173._16_16_ = auVar31;
            auVar173._0_16_ = auVar39;
            auVar31 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar76 & _UNK_150b50b30)
                                                               + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar77 & _UNK_150b50b34)
                                                               + param_6)),0x10);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar78 & _UNK_150b50b38) +
                                                                       param_6)),0x20);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar79 & _UNK_150b50b3c) +
                                                                       param_6)),0x30);
            auVar39 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                               (uVar57 & 
                                                  ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                  ) + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar73 & _UNK_150b50b24)
                                                               + param_6)),0x10);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar74 & _UNK_150b50b28) +
                                                                       param_6)),0x20);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar75 & _UNK_150b50b2c) +
                                                                       param_6)),0x30);
            auVar181._16_16_ = auVar31;
            auVar181._0_16_ = auVar39;
            auVar31 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar76 & _UNK_150b50b50)
                                                               + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar77 & _UNK_150b50b54)
                                                               + param_6)),0x10);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar78 & _UNK_150b50b58) +
                                                                       param_6)),0x20);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar79 & _UNK_150b50b5c) +
                                                                       param_6)),0x30);
            auVar39 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                               (uVar57 & 
                                                  ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                  ) + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar73 & _UNK_150b50b44)
                                                               + param_6)),0x10);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar74 & _UNK_150b50b48) +
                                                                       param_6)),0x20);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar75 & _UNK_150b50b4c) +
                                                                       param_6)),0x30);
            auVar62._16_16_ = auVar31;
            auVar62._0_16_ = auVar39;
          }
          auVar39._4_4_ = iStack_37c * 3;
          auVar39._0_4_ = local_380 * 3;
          auVar39._8_4_ = iStack_378 * 3;
          auVar39._12_4_ = iStack_374 * 3;
          auVar97._4_4_ = iStack_25c * 3;
          auVar97._0_4_ = local_260 * 3;
          auVar97._8_4_ = iStack_258 * 3;
          auVar97._12_4_ = iStack_254 * 3;
          auVar107._16_16_ = auVar32;
          auVar107._0_16_ = auVar82;
          auVar42 = vpand_avx(auVar82,auVar97);
          auVar41 = vpand_avx(auVar32,auVar39);
          lVar1 = param_2 + (longlong)auVar41._0_4_ * 4;
          lVar2 = param_2 + (longlong)auVar42._0_4_ * 4;
          lVar3 = param_2 + (longlong)auVar41._4_4_ * 4;
          auVar32 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar76 & _UNK_150b50d50) + lVar1)),
                                  ZEXT416(*(uint *)((ulonglong)(uVar77 & _UNK_150b50d54) + lVar3)),
                                  0x10);
          auVar82 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar76 & _UNK_150b50d70) + lVar1)),
                                  ZEXT416(*(uint *)((ulonglong)(uVar77 & _UNK_150b50d74) + lVar3)),
                                  0x10);
          lVar1 = param_2 + (longlong)auVar41._8_4_ * 4;
          auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d58) +
                                                           lVar1)),0x20);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d78) +
                                                           lVar1)),0x20);
          lVar1 = param_2 + (longlong)auVar41._12_4_ * 4;
          auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d5c) +
                                                           lVar1)),0x30);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d7c) +
                                                           lVar1)),0x30);
          lVar1 = param_2 + (longlong)auVar42._4_4_ * 4;
          auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                    (uVar57 & 
                                                  ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                                  ) + lVar2)),
                                  ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d44) + lVar1)),
                                  0x10);
          auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                    (uVar57 & 
                                                  ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                                  ) + lVar2)),
                                  ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d64) + lVar1)),
                                  0x10);
          lVar1 = param_2 + (longlong)auVar42._8_4_ * 4;
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d48) +
                                                           lVar1)),0x20);
          auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d68) +
                                                           lVar1)),0x20);
          auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar41._0_4_ * 4)),
                                  ZEXT416(*(uint *)(param_2 + (longlong)auVar41._4_4_ * 4)),0x10);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_2 + (longlong)auVar41._8_4_ * 4)),
                                  0x20);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_2 + (longlong)auVar41._12_4_ * 4))
                                  ,0x30);
          auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar42._0_4_ * 4)),
                                  ZEXT416(*(uint *)(param_2 + (longlong)auVar42._4_4_ * 4)),0x10);
          auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + (longlong)auVar42._8_4_ * 4)),
                                  0x20);
          auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + (longlong)auVar42._12_4_ * 4))
                                  ,0x30);
          auVar115._16_16_ = auVar97;
          auVar115._0_16_ = auVar41;
          lVar1 = param_2 + (longlong)auVar42._12_4_ * 4;
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d4c) +
                                                           lVar1)),0x30);
          auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d6c) +
                                                           lVar1)),0x30);
          auVar49._16_16_ = auVar32;
          auVar49._0_16_ = auVar31;
          auVar126._16_16_ = auVar82;
          auVar126._0_16_ = auVar39;
          auVar189 = vsubps_avx(auVar84,auVar115);
          local_120 = auVar43._0_4_;
          fStack_11c = auVar43._4_4_;
          fStack_118 = auVar43._8_4_;
          fStack_114 = auVar43._12_4_;
          auVar175._0_4_ = local_120 * auVar173._0_4_;
          auVar175._4_4_ = fStack_11c * auVar173._4_4_;
          auVar175._8_4_ = fStack_118 * auVar173._8_4_;
          auVar175._12_4_ = fStack_114 * auVar173._12_4_;
          auVar175._16_4_ = local_120 * auVar173._16_4_;
          auVar175._20_4_ = fStack_11c * auVar173._20_4_;
          auVar175._24_4_ = fStack_118 * auVar173._24_4_;
          auVar175._28_4_ = fStack_114 * auVar173._28_4_;
          auVar189 = vsubps_avx(auVar189,auVar175);
          auVar191 = vsubps_avx(auVar99,auVar49);
          auVar33 = vsubps_avx(auVar114,auVar126);
          auVar183._0_4_ = local_120 * auVar181._0_4_;
          auVar183._4_4_ = fStack_11c * auVar181._4_4_;
          auVar183._8_4_ = fStack_118 * auVar181._8_4_;
          auVar183._12_4_ = fStack_114 * auVar181._12_4_;
          auVar183._16_4_ = local_120 * auVar181._16_4_;
          auVar183._20_4_ = fStack_11c * auVar181._20_4_;
          auVar183._24_4_ = fStack_118 * auVar181._24_4_;
          auVar183._28_4_ = fStack_114 * auVar181._28_4_;
          auVar191 = vsubps_avx(auVar191,auVar183);
          auVar64._0_4_ = local_120 * auVar62._0_4_;
          auVar64._4_4_ = fStack_11c * auVar62._4_4_;
          auVar64._8_4_ = fStack_118 * auVar62._8_4_;
          auVar64._12_4_ = fStack_114 * auVar62._12_4_;
          auVar64._16_4_ = local_120 * auVar62._16_4_;
          auVar64._20_4_ = fStack_11c * auVar62._20_4_;
          auVar64._24_4_ = fStack_118 * auVar62._24_4_;
          auVar64._28_4_ = fStack_114 * auVar62._28_4_;
          auVar33 = vsubps_avx(auVar33,auVar64);
          fVar122 = fVar80 * auVar33._0_4_ + fVar146 * auVar191._0_4_ + fVar121 * auVar189._0_4_;
          fVar133 = fVar90 * auVar33._4_4_ + fVar156 * auVar191._4_4_ + fVar132 * auVar189._4_4_;
          fVar135 = fVar91 * auVar33._8_4_ + fVar159 * auVar191._8_4_ + fVar134 * auVar189._8_4_;
          fVar137 = fVar92 * auVar33._12_4_ + fVar162 * auVar191._12_4_ + fVar136 * auVar189._12_4_;
          fVar139 = fVar93 * auVar33._16_4_ + fVar164 * auVar191._16_4_ + fVar138 * auVar189._16_4_;
          fVar141 = fVar94 * auVar33._20_4_ + fVar165 * auVar191._20_4_ + fVar140 * auVar189._20_4_;
          fVar143 = fVar95 * auVar33._24_4_ + fVar166 * auVar191._24_4_ + fVar142 * auVar189._24_4_;
          fVar145 = fVar96 * auVar33._28_4_ + fVar167 * auVar191._28_4_ + fVar144 * auVar189._28_4_;
          auVar184._0_4_ = fVar121 * fVar122;
          auVar184._4_4_ = fVar132 * fVar133;
          auVar184._8_4_ = fVar134 * fVar135;
          auVar184._12_4_ = fVar136 * fVar137;
          auVar184._16_4_ = fVar138 * fVar139;
          auVar184._20_4_ = fVar140 * fVar141;
          auVar184._24_4_ = fVar142 * fVar143;
          auVar184._28_4_ = fVar144 * fVar145;
          auVar149._0_4_ = fVar146 * fVar122;
          auVar149._4_4_ = fVar156 * fVar133;
          auVar149._8_4_ = fVar159 * fVar135;
          auVar149._12_4_ = fVar162 * fVar137;
          auVar149._16_4_ = fVar164 * fVar139;
          auVar149._20_4_ = fVar165 * fVar141;
          auVar149._24_4_ = fVar166 * fVar143;
          auVar149._28_4_ = fVar167 * fVar145;
          auVar86._0_4_ = fVar80 * fVar122;
          auVar86._4_4_ = fVar90 * fVar133;
          auVar86._8_4_ = fVar91 * fVar135;
          auVar86._12_4_ = fVar92 * fVar137;
          auVar86._16_4_ = fVar93 * fVar139;
          auVar86._20_4_ = fVar94 * fVar141;
          auVar86._24_4_ = fVar95 * fVar143;
          auVar86._28_4_ = fVar96 * fVar145;
          auVar189 = vsubps_avx(auVar189,auVar184);
          auVar191 = vsubps_avx(auVar191,auVar149);
          auVar33 = vsubps_avx(auVar33,auVar86);
          fVar80 = auVar189._0_4_;
          fVar92 = auVar189._4_4_;
          fVar95 = auVar189._8_4_;
          fVar132 = auVar189._12_4_;
          fVar138 = auVar189._16_4_;
          fVar144 = auVar189._20_4_;
          fVar159 = auVar189._24_4_;
          fVar165 = auVar189._28_4_;
          fVar90 = auVar191._0_4_;
          fVar93 = auVar191._4_4_;
          fVar96 = auVar191._8_4_;
          fVar134 = auVar191._12_4_;
          fVar140 = auVar191._16_4_;
          fVar146 = auVar191._20_4_;
          fVar162 = auVar191._24_4_;
          fVar166 = auVar191._28_4_;
          fVar91 = auVar33._0_4_;
          fVar94 = auVar33._4_4_;
          fVar121 = auVar33._8_4_;
          fVar136 = auVar33._12_4_;
          fVar142 = auVar33._16_4_;
          fVar156 = auVar33._20_4_;
          fVar164 = auVar33._24_4_;
          fVar167 = auVar33._28_4_;
          auVar87._0_4_ = fVar91 * fVar91 + fVar90 * fVar90 + fVar80 * fVar80;
          auVar87._4_4_ = fVar94 * fVar94 + fVar93 * fVar93 + fVar92 * fVar92;
          auVar87._8_4_ = fVar121 * fVar121 + fVar96 * fVar96 + fVar95 * fVar95;
          auVar87._12_4_ = fVar136 * fVar136 + fVar134 * fVar134 + fVar132 * fVar132;
          auVar87._16_4_ = fVar142 * fVar142 + fVar140 * fVar140 + fVar138 * fVar138;
          auVar87._20_4_ = fVar156 * fVar156 + fVar146 * fVar146 + fVar144 * fVar144;
          auVar87._24_4_ = fVar164 * fVar164 + fVar162 * fVar162 + fVar159 * fVar159;
          auVar87._28_4_ = fVar167 * fVar167 + fVar166 * fVar166 + fVar165 * fVar165;
          auVar33 = vsqrtps_avx(auVar87);
          local_140 = auVar40._0_4_;
          fStack_13c = auVar40._4_4_;
          fStack_138 = auVar40._8_4_;
          fStack_134 = auVar40._12_4_;
          auVar150._0_4_ = auVar168._0_4_ * local_140;
          auVar150._4_4_ = auVar168._4_4_ * fStack_13c;
          auVar150._8_4_ = auVar168._8_4_ * fStack_138;
          auVar150._12_4_ = auVar168._12_4_ * fStack_134;
          auVar150._16_4_ = auVar168._16_4_ * local_140;
          auVar150._20_4_ = auVar168._20_4_ * fStack_13c;
          auVar150._24_4_ = auVar168._24_4_ * fStack_138;
          auVar150._28_4_ = auVar168._28_4_ * fStack_134;
          auVar189 = vminps_avx(auVar150,auVar33);
          auVar191 = vdivps_avx(auVar189,auVar33);
          auVar189 = vcmpps_avx(auVar33,
                                ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77
                                ,5);
          fVar122 = (float)(auVar191._0_4_ & auVar189._0_4_);
          fVar133 = (float)(auVar191._4_4_ & auVar189._4_4_);
          fVar135 = (float)(auVar191._8_4_ & auVar189._8_4_);
          fVar137 = (float)(auVar191._12_4_ & auVar189._12_4_);
          fVar139 = (float)(auVar191._16_4_ & auVar189._16_4_);
          fVar141 = (float)(auVar191._20_4_ & auVar189._20_4_);
          fVar143 = (float)(auVar191._24_4_ & auVar189._24_4_);
          fVar145 = (float)(auVar191._28_4_ & auVar189._28_4_);
          auVar127._0_4_ = fVar80 * fVar122;
          auVar127._4_4_ = fVar92 * fVar133;
          auVar127._8_4_ = fVar95 * fVar135;
          auVar127._12_4_ = fVar132 * fVar137;
          auVar127._16_4_ = fVar138 * fVar139;
          auVar127._20_4_ = fVar144 * fVar141;
          auVar127._24_4_ = fVar159 * fVar143;
          auVar127._28_4_ = fVar165 * fVar145;
          auVar50._0_4_ = fVar90 * fVar122;
          auVar50._4_4_ = fVar93 * fVar133;
          auVar50._8_4_ = fVar96 * fVar135;
          auVar50._12_4_ = fVar134 * fVar137;
          auVar50._16_4_ = fVar140 * fVar139;
          auVar50._20_4_ = fVar146 * fVar141;
          auVar50._24_4_ = fVar162 * fVar143;
          auVar50._28_4_ = fVar166 * fVar145;
          auVar65._0_4_ = fVar91 * fVar122;
          auVar65._4_4_ = fVar94 * fVar133;
          auVar65._8_4_ = fVar121 * fVar135;
          auVar65._12_4_ = fVar136 * fVar137;
          auVar65._16_4_ = fVar142 * fVar139;
          auVar65._20_4_ = fVar156 * fVar141;
          auVar65._24_4_ = fVar164 * fVar143;
          auVar65._28_4_ = fVar167 * fVar145;
          auVar84 = vsubps_avx(auVar84,auVar127);
          auVar99 = vsubps_avx(auVar99,auVar50);
          auVar114 = vsubps_avx(auVar114,auVar65);
          auVar84 = vmaskmovps_avx(auVar107,auVar84);
          auVar99 = vmaskmovps_avx(auVar107,auVar99);
          auVar114 = vmaskmovps_avx(auVar107,auVar114);
          if ((uVar8 & 1) != 0) {
            *(int *)(param_1 + lVar27) = auVar84._0_4_;
          }
          auVar97 = auVar84._0_16_;
          auVar41 = auVar84._16_16_;
          auVar31 = auVar99._0_16_;
          auVar39 = auVar99._16_16_;
          auVar32 = auVar114._0_16_;
          auVar82 = auVar114._16_16_;
          if ((uVar8 & 2) != 0) {
            uVar11 = vextractps_avx(auVar97,1);
            *(undefined4 *)(param_1 + lVar20) = uVar11;
          }
          if ((uVar8 & 4) != 0) {
            uVar11 = vextractps_avx(auVar97,2);
            *(undefined4 *)(param_1 + lVar9) = uVar11;
          }
          if ((uVar8 & 8) != 0) {
            uVar11 = vextractps_avx(auVar97,3);
            *(undefined4 *)(param_1 + lVar28) = uVar11;
          }
          if ((uVar8 & 0x10) != 0) {
            *(int *)(param_1 + lVar13) = auVar84._16_4_;
          }
          if ((uVar8 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar41,1);
            *(undefined4 *)(param_1 + lVar15) = uVar11;
          }
          if ((uVar8 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar41,2);
            *(undefined4 *)(param_1 + lVar24) = uVar11;
          }
          if (cVar7 < '\0') {
            uVar11 = vextractps_avx(auVar41,3);
            *(undefined4 *)(param_1 + lVar12) = uVar11;
          }
          if ((uVar8 & 1) != 0) {
            *(int *)(param_1 + 4 + lVar27) = auVar99._0_4_;
          }
          if ((uVar8 & 2) != 0) {
            uVar11 = vextractps_avx(auVar31,1);
            *(undefined4 *)(param_1 + 4 + lVar20) = uVar11;
          }
          if ((uVar8 & 4) != 0) {
            uVar11 = vextractps_avx(auVar31,2);
            *(undefined4 *)(param_1 + 4 + lVar9) = uVar11;
          }
          if ((uVar8 & 8) != 0) {
            uVar11 = vextractps_avx(auVar31,3);
            *(undefined4 *)(param_1 + 4 + lVar28) = uVar11;
          }
          if ((uVar8 & 0x10) != 0) {
            *(int *)(param_1 + 4 + lVar13) = auVar99._16_4_;
          }
          if ((uVar8 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar39,1);
            *(undefined4 *)(param_1 + 4 + lVar15) = uVar11;
          }
          if ((uVar8 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar39,2);
            *(undefined4 *)(param_1 + 4 + lVar24) = uVar11;
          }
          if (cVar7 < '\0') {
            uVar11 = vextractps_avx(auVar39,3);
            *(undefined4 *)(param_1 + 4 + lVar12) = uVar11;
          }
          if ((uVar8 & 1) != 0) {
            *(int *)(param_1 + 8 + lVar27) = auVar114._0_4_;
          }
          if ((uVar8 & 2) != 0) {
            uVar11 = vextractps_avx(auVar32,1);
            *(undefined4 *)(param_1 + 8 + lVar20) = uVar11;
          }
          if ((uVar8 & 4) != 0) {
            uVar11 = vextractps_avx(auVar32,2);
            *(undefined4 *)(param_1 + 8 + lVar9) = uVar11;
          }
          if ((uVar8 & 8) != 0) {
            uVar11 = vextractps_avx(auVar32,3);
            *(undefined4 *)(param_1 + 8 + lVar28) = uVar11;
          }
          if ((uVar8 & 0x10) != 0) {
            *(int *)(param_1 + 8 + lVar13) = auVar114._16_4_;
          }
          if ((uVar8 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar82,1);
            *(undefined4 *)(param_1 + 8 + lVar15) = uVar11;
          }
          if ((uVar8 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar82,2);
            *(undefined4 *)(param_1 + 8 + lVar24) = uVar11;
          }
          if (cVar7 < '\0') {
            uVar11 = vextractps_avx(auVar82,3);
            *(undefined4 *)(param_1 + 8 + lVar12) = uVar11;
          }
          if ((uVar8 & 1) != 0) {
            *(uint *)(param_1 + 0xc + lVar27) = uVar160;
          }
          if ((uVar8 & 2) != 0) {
            *(uint *)(param_1 + 0xc + lVar20) = uVar147;
          }
          if ((uVar8 & 4) != 0) {
            *(uint *)(param_1 + 0xc + lVar9) = uVar158;
          }
          if ((uVar8 & 8) != 0) {
            *(uint *)(param_1 + 0xc + lVar28) = uVar161;
          }
          if ((uVar8 & 0x10) != 0) {
            *(uint *)(param_1 + 0xc + lVar13) = uVar163;
          }
          if ((uVar8 & 0x20) != 0) {
            *(uint *)(param_1 + 0xc + lVar15) = uVar113;
          }
          if ((uVar8 & 0x40) != 0) {
            *(uint *)(param_1 + 0xc + lVar24) = uVar5;
          }
          if (cVar7 < '\0') {
            *(uint *)(param_1 + 0xc + lVar12) = uVar6;
          }
        }
      }
      uVar157 = uVar157 + 0x20;
      lVar29 = lVar29 + 0x60;
      uVar14 = uVar14 + 8;
    } while ((int)uVar14 < (int)(uVar30 & 0xfffffff8));
  }
  if ((int)uVar14 < (int)param_9) {
    auVar43 = vpshufd_avx(ZEXT416(uVar14),0);
    auVar108._16_16_ = auVar43;
    auVar108._0_16_ = auVar43;
    auVar108 = auVar108 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar83 = vpshufd_avx(ZEXT416(param_9),0);
    auVar103 = auVar108._0_16_;
    auVar112 = auVar108._16_16_;
    auVar43 = vpcmpgtd_avx(auVar83,auVar112);
    auVar40 = vpcmpgtd_avx(auVar83,auVar103);
    auVar151._16_16_ = auVar43;
    auVar151._0_16_ = auVar40;
    auVar191 = vmaskmovps_avx(auVar151,*(undefined1 (*) [32])(param_3 + (int)(uVar14 << 2)));
    auVar98 = vpslld_avx(auVar191._0_16_,4);
    auVar81 = vpslld_avx(auVar191._16_16_,4);
    auVar42 = vpand_avx(auVar40,auVar98);
    iVar18 = auVar42._8_4_;
    auVar41 = vpand_avx(auVar43,auVar81);
    iVar38 = auVar41._0_4_;
    lVar29 = param_1 + iVar38;
    uVar14 = auVar40._0_4_;
    auVar58._0_4_ = uVar14 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004
    ;
    uVar157 = auVar40._4_4_;
    auVar58._4_4_ = uVar157 & _UNK_150b50d44;
    uVar160 = auVar40._8_4_;
    auVar58._8_4_ = uVar160 & _UNK_150b50d48;
    uVar147 = auVar40._12_4_;
    auVar58._12_4_ = uVar147 & _UNK_150b50d4c;
    uVar30 = auVar43._0_4_;
    uVar158 = auVar43._4_4_;
    uVar161 = auVar43._8_4_;
    uVar163 = auVar43._12_4_;
    lVar9 = param_1 + auVar42._0_4_;
    lVar12 = param_1 + auVar41._4_4_;
    auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50d50) + lVar29)),
                            ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d54) + lVar12)),0x10)
    ;
    auVar40 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50d70) + lVar29)),
                            ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d74) + lVar12)),0x10)
    ;
    auVar32 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50d90) + lVar29)),
                            ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d94) + lVar12)),0x10)
    ;
    uVar25 = (ulonglong)auVar41._8_4_;
    lVar29 = param_1 + uVar25;
    lVar12 = param_1 + auVar41._12_4_;
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d58) + lVar29
                                                     )),0x20);
    auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d78) + lVar29
                                                     )),0x20);
    auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d98) + lVar29
                                                     )),0x20);
    uVar30 = vextractps_avx(auVar58,1);
    uVar11 = vextractps_avx(auVar58,2);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d5c) + lVar12
                                                     )),0x30);
    auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d7c) + lVar12
                                                     )),0x30);
    auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d9c) + lVar12
                                                     )),0x30);
    uVar21 = (ulonglong)auVar42._4_4_;
    lVar12 = param_1 + uVar21;
    auVar82 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar58._0_4_ + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)uVar30 + lVar12)),0x10);
    auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar14 & 
                                              ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50d64) + lVar12)),0x10)
    ;
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar14 & 
                                              ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50d84) + lVar12)),0x10)
    ;
    lVar9 = param_1 + iVar18;
    auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(CONCAT44((int)((ulonglong)lVar29 >> 0x20),
                                                               uVar11) + lVar9)),0x20);
    auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d68) + lVar9)
                                           ),0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d88) + lVar9)
                                           ),0x20);
    lVar29 = param_1 + auVar42._12_4_;
    auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)auVar58._12_4_ + lVar29)),0x30);
    auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar147 & _UNK_150b50d6c) + lVar29
                                                     )),0x30);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar147 & _UNK_150b50d8c) + lVar29
                                                     )),0x30);
    auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + iVar38)),
                            ZEXT416(*(uint *)(param_1 + auVar41._4_4_)),0x10);
    auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + uVar25)),0x20);
    auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + auVar41._12_4_)),0x30);
    auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar42._0_4_)),
                            ZEXT416(*(uint *)(param_1 + uVar21)),0x10);
    auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + iVar18)),0x20);
    auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + auVar42._12_4_)),0x30);
    auVar100._16_16_ = auVar97;
    auVar100._0_16_ = auVar41;
    auVar51._16_16_ = auVar43;
    auVar51._0_16_ = auVar82;
    auVar66._16_16_ = auVar40;
    auVar66._0_16_ = auVar31;
    auVar84 = vmaskmovps_avx(auVar151,auVar100);
    auVar99 = vmaskmovps_avx(auVar151,auVar51);
    auVar114 = vmaskmovps_avx(auVar151,auVar66);
    auVar67._16_16_ = auVar32;
    auVar67._0_16_ = auVar39;
    auVar189 = vcmpps_avx(auVar67,ZEXT832(0) << 0x20,8);
    auVar151 = auVar151 & auVar189;
    if ((((((((SUB321(auVar151 >> 0x1f,0) & 1) == 0 && (SUB321(auVar151 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar151 >> 0x5f,0) & 1) == 0) && SUB321(auVar151 >> 0x7f,0) == '\0') &&
          (SUB321(auVar151 >> 0x9f,0) & 1) == 0) && SUB321(auVar151 >> 0xbf,0) == '\0') &&
        (SUB321(auVar151 >> 0xdf,0) & 1) == 0) && -1 < auVar151[0x1f]) {
      uVar10 = (ulonglong)auVar108._0_4_;
      pauVar4 = (undefined1 (*) [32])(param_4 + uVar10 * 0xc);
      auVar82 = vpcmpgtd_avx(auVar83,auVar112);
      auVar43 = vpcmpgtd_avx(auVar83,auVar103);
      auVar43 = vpand_avx(auVar82,auVar43);
      auVar40 = vpcmpeqd_avx(auVar112,auVar112);
      auVar40 = auVar40 & ~auVar43;
      uVar30 = auVar82._0_4_;
      uVar14 = auVar82._4_4_;
      uVar157 = auVar82._8_4_;
      uVar160 = auVar82._12_4_;
      if ((((SUB161(auVar40 >> 0x1f,0) & 1) == 0 && (SUB161(auVar40 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar40 >> 0x5f,0) & 1) == 0) && -1 < auVar40[0xf]) {
        auVar34 = pauVar4[2];
        auVar116._16_16_ = *(undefined1 (*) [16])*pauVar4;
        auVar116._0_16_ = *(undefined1 (*) [16])(*pauVar4 + 0x10);
        auVar189 = vblendps_avx(*pauVar4,auVar116,0x24);
        auVar189 = vpermilps_avx(auVar189,
                                 ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                );
        uVar11 = *(undefined4 *)(pauVar4[1] + 4);
        auVar88._4_4_ = uVar11;
        auVar88._0_4_ = uVar11;
        auVar88._8_4_ = uVar11;
        auVar88._12_4_ = uVar11;
        uVar11 = *(undefined4 *)(pauVar4[1] + 8);
        auVar88._20_4_ = uVar11;
        auVar88._16_4_ = uVar11;
        auVar88._24_4_ = uVar11;
        auVar88._28_4_ = uVar11;
        auVar189 = vblendps_avx(auVar189,auVar88,0x88);
        auVar117._16_16_ = *(undefined1 (*) [16])pauVar4[2];
        auVar117._0_16_ = *(undefined1 (*) [16])(pauVar4[2] + 0x10);
        auVar33 = vblendps_avx(auVar117,auVar34,0x44);
        auVar33 = vpermilps_avx(auVar33,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        auVar43 = vshufps_avx(*(undefined1 (*) [16])(pauVar4[1] + 0x10),
                              *(undefined1 (*) [16])(pauVar4[1] + 0x10),0xec);
        uVar11 = *(undefined4 *)(pauVar4[1] + 0x14);
        auVar153._20_4_ = uVar11;
        auVar153._16_4_ = uVar11;
        auVar153._24_4_ = uVar11;
        auVar153._28_4_ = uVar11;
        auVar153._0_16_ = auVar43;
        auVar33 = vblendps_avx(auVar33,auVar153,0x13);
        auVar52._16_16_ = auVar33._0_16_;
        auVar52._0_16_ = auVar189._0_16_;
        local_2c0 = vperm2f128_avx(auVar189,auVar33,0x31);
        auVar189 = vblendps_avx(pauVar4[1],*pauVar4,0x24);
        auVar189 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar4 + 0x10)),auVar189,0x21);
        auVar189 = vshufps_avx(auVar189,pauVar4[1],0xc2);
        auVar33 = vshufps_avx(auVar117,auVar34,0xc4);
        auVar185 = vblendps_avx(auVar189,auVar33,0xe0);
        auVar43 = *(undefined1 (*) [16])(param_5 + uVar10 * 0xc);
        auVar40 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar10 * 0xc);
        auVar31 = *(undefined1 (*) [16])(param_5 + 0x30 + uVar10 * 0xc);
        auVar193._16_16_ = auVar40;
        auVar193._0_16_ = auVar43;
        auVar97 = *(undefined1 (*) [16])(param_5 + 0x50 + uVar10 * 0xc);
        auVar41 = *(undefined1 (*) [16])(param_5 + 0x40 + uVar10 * 0xc);
        auVar68._16_16_ = auVar43;
        auVar68._0_16_ = auVar40;
        auVar189 = vblendps_avx(auVar193,auVar68,0x24);
        auVar189 = vpermilps_avx(auVar189,
                                 ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                );
        uVar11 = *(undefined4 *)(param_5 + 0x28 + uVar10 * 0xc);
        auVar53._20_4_ = uVar11;
        auVar53._16_4_ = uVar11;
        auVar53._24_4_ = uVar11;
        auVar53._28_4_ = uVar11;
        uVar11 = *(undefined4 *)(param_5 + 0x24 + uVar10 * 0xc);
        auVar53._4_4_ = uVar11;
        auVar53._0_4_ = uVar11;
        auVar53._8_4_ = uVar11;
        auVar53._12_4_ = uVar11;
        uVar11 = *(undefined4 *)(param_5 + 0x34 + uVar10 * 0xc);
        auVar129._20_4_ = uVar11;
        auVar129._16_4_ = uVar11;
        auVar129._24_4_ = uVar11;
        auVar129._28_4_ = uVar11;
        auVar118._16_16_ = auVar31;
        auVar118._0_16_ = *(undefined1 (*) [16])(param_5 + 0x20 + uVar10 * 0xc);
        auVar169._16_16_ = auVar97;
        auVar169._0_16_ = auVar41;
        auVar189 = vblendps_avx(auVar189,auVar53,0x88);
        auVar69._16_16_ = auVar41;
        auVar69._0_16_ = auVar97;
        auVar33 = vblendps_avx(auVar69,auVar169,0x44);
        auVar33 = vpermilps_avx(auVar33,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        auVar43 = vshufps_avx(auVar31,auVar31,0xec);
        auVar129._0_16_ = auVar43;
        auVar33 = vblendps_avx(auVar33,auVar129,0x13);
        auVar128._16_16_ = auVar33._0_16_;
        auVar128._0_16_ = auVar189._0_16_;
        auVar190 = vperm2f128_avx(auVar189,auVar33,0x31);
        auVar189 = vblendps_avx(auVar118,auVar193,0x24);
        auVar189 = vshufps_avx(ZEXT1632(auVar40),auVar189,0x21);
        auVar189 = vshufps_avx(auVar189,auVar118,0xc2);
        auVar33 = vshufps_avx(auVar69,auVar169,0xc4);
        auVar152 = vblendps_avx(auVar189,auVar33,0xe0);
      }
      else {
        auVar43 = vpcmpgtd_avx(auVar83,auVar103);
        uVar147 = auVar43._0_4_;
        auVar40._0_4_ =
             uVar147 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
        uVar158 = auVar43._4_4_;
        auVar40._4_4_ = uVar158 & _UNK_150b50b04;
        uVar161 = auVar43._8_4_;
        auVar40._8_4_ = uVar161 & _UNK_150b50b08;
        uVar163 = auVar43._12_4_;
        auVar40._12_4_ = uVar163 & _UNK_150b50b0c;
        uVar11 = vextractps_avx(auVar40,1);
        lVar9 = CONCAT44(iVar38 >> 0x1f,uVar11);
        uVar11 = vextractps_avx(auVar40,2);
        lVar12 = CONCAT44(iVar18 >> 0x1f,uVar11);
        uVar11 = vextractps_avx(auVar40,3);
        lVar13 = CONCAT44(auVar42._4_4_ >> 0x1f,uVar11);
        auVar43 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar30 & _UNK_150b50b10))),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar14 & _UNK_150b50b14))),0x10);
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(*pauVar4 + (uVar157 & _UNK_150b50b18))),
                                0x20);
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(*pauVar4 + (uVar160 & _UNK_150b50b1c))),
                                0x30);
        auVar40 = vinsertps_avx(ZEXT416(*(uint *)*pauVar4),ZEXT416(*(uint *)(*pauVar4 + lVar9)),0x10
                               );
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(*pauVar4 + lVar12)),0x20);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(*pauVar4 + lVar13)),0x30);
        auVar31 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar30 & _UNK_150b50b30))),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar14 & _UNK_150b50b34))),0x10);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + (uVar157 & _UNK_150b50b38))),
                                0x20);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + (uVar160 & _UNK_150b50b3c))),
                                0x30);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 +
                                                 (uVar147 &
                                                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                 ))),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b24))),0x10);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b28))),
                                0x20);
        uVar21 = (ulonglong)(uVar163 & _UNK_150b50b2c);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar4 + uVar21)),0x30);
        uVar25 = (ulonglong)(uVar30 & _UNK_150b50b50);
        auVar41 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + uVar25)),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar14 & _UNK_150b50b54))),0x10);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(*pauVar4 + (uVar157 & _UNK_150b50b58))),
                                0x20);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(*pauVar4 + (uVar160 & _UNK_150b50b5c))),
                                0x30);
        auVar42 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 +
                                                 (uVar147 &
                                                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                 ))),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b44))),0x10);
        auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b48))),
                                0x20);
        auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(*pauVar4 + (uVar163 & _UNK_150b50b4c))),
                                0x30);
        auVar52._16_16_ = auVar43;
        auVar52._0_16_ = auVar40;
        local_2c0._16_16_ = auVar31;
        local_2c0._0_16_ = auVar97;
        auVar185._16_16_ = auVar41;
        auVar185._0_16_ = auVar42;
        lVar29 = param_5 + uVar10 * 0xc;
        auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50b10) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar14 & _UNK_150b50b14) + lVar29)),
                                0x10);
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50b18) +
                                                         lVar29)),0x20);
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50b1c) +
                                                         lVar29)),0x30);
        auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + uVar10 * 0xc)),
                                ZEXT416(*(uint *)(lVar9 + lVar29)),0x10);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(lVar12 + lVar29)),0x20);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(lVar13 + lVar29)),0x30);
        auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50b30) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar14 & _UNK_150b50b34) + lVar29)),
                                0x10);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50b38) +
                                                         lVar29)),0x20);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50b3c) +
                                                         lVar29)),0x30);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar147 &
                                                  ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                  ) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50b24) + lVar29)),
                                0x10);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50b28) +
                                                         lVar29)),0x20);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar21 + lVar29)),0x30);
        auVar41 = vinsertps_avx(ZEXT416(*(uint *)(uVar25 + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar14 & _UNK_150b50b54) + lVar29)),
                                0x10);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50b58) +
                                                         lVar29)),0x20);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50b5c) +
                                                         lVar29)),0x30);
        auVar42 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar147 &
                                                  ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                  ) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50b44) + lVar29)),
                                0x10);
        auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50b48) +
                                                         lVar29)),0x20);
        auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50b4c) +
                                                         lVar29)),0x30);
        auVar128._16_16_ = auVar43;
        auVar128._0_16_ = auVar40;
        auVar190._16_16_ = auVar31;
        auVar190._0_16_ = auVar97;
        auVar152._16_16_ = auVar41;
        auVar152._0_16_ = auVar42;
      }
      auVar189 = vsubps_avx(auVar52,auVar84);
      auVar33 = vsubps_avx(local_2c0,auVar99);
      auVar34 = vsubps_avx(auVar185,auVar114);
      fVar80 = auVar128._0_4_;
      fVar90 = auVar128._4_4_;
      fVar91 = auVar128._8_4_;
      fVar92 = auVar128._12_4_;
      fVar93 = auVar128._16_4_;
      fVar94 = auVar128._20_4_;
      fVar95 = auVar128._24_4_;
      fVar96 = auVar128._28_4_;
      fVar146 = auVar190._0_4_;
      fVar156 = auVar190._4_4_;
      fVar159 = auVar190._8_4_;
      fVar162 = auVar190._12_4_;
      fVar164 = auVar190._16_4_;
      fVar165 = auVar190._20_4_;
      fVar166 = auVar190._24_4_;
      fVar167 = auVar190._28_4_;
      fVar121 = auVar152._0_4_;
      fVar132 = auVar152._4_4_;
      fVar134 = auVar152._8_4_;
      fVar136 = auVar152._12_4_;
      fVar138 = auVar152._16_4_;
      fVar140 = auVar152._20_4_;
      fVar142 = auVar152._24_4_;
      fVar144 = auVar152._28_4_;
      auVar170._0_4_ = fVar121 * auVar34._0_4_ + fVar80 * auVar189._0_4_ + fVar146 * auVar33._0_4_;
      auVar170._4_4_ = fVar132 * auVar34._4_4_ + fVar90 * auVar189._4_4_ + fVar156 * auVar33._4_4_;
      auVar170._8_4_ = fVar134 * auVar34._8_4_ + fVar91 * auVar189._8_4_ + fVar159 * auVar33._8_4_;
      auVar170._12_4_ =
           fVar136 * auVar34._12_4_ + fVar92 * auVar189._12_4_ + fVar162 * auVar33._12_4_;
      auVar170._16_4_ =
           fVar138 * auVar34._16_4_ + fVar93 * auVar189._16_4_ + fVar164 * auVar33._16_4_;
      auVar170._20_4_ =
           fVar140 * auVar34._20_4_ + fVar94 * auVar189._20_4_ + fVar165 * auVar33._20_4_;
      auVar170._24_4_ =
           fVar142 * auVar34._24_4_ + fVar95 * auVar189._24_4_ + fVar166 * auVar33._24_4_;
      auVar170._28_4_ =
           fVar144 * auVar34._28_4_ + fVar96 * auVar189._28_4_ + fVar167 * auVar33._28_4_;
      auVar189 = vcmpps_avx(ZEXT432(0) << 0x20,auVar67,4);
      auVar33 = vcmpps_avx(ZEXT432(0) << 0x20,auVar170,1);
      auVar186._0_4_ = auVar33._0_4_ & auVar189._0_4_;
      auVar186._4_4_ = auVar33._4_4_ & auVar189._4_4_;
      auVar186._8_4_ = auVar33._8_4_ & auVar189._8_4_;
      auVar186._12_4_ = auVar33._12_4_ & auVar189._12_4_;
      auVar186._16_4_ = auVar33._16_4_ & auVar189._16_4_;
      auVar186._20_4_ = auVar33._20_4_ & auVar189._20_4_;
      auVar186._24_4_ = auVar33._24_4_ & auVar189._24_4_;
      auVar186._28_4_ = auVar33._28_4_ & auVar189._28_4_;
      auVar43 = vpcmpgtd_avx(auVar83,auVar103);
      auVar54._0_4_ = auVar186._0_4_ & auVar43._0_4_;
      auVar54._4_4_ = auVar186._4_4_ & auVar43._4_4_;
      auVar54._8_4_ = auVar186._8_4_ & auVar43._8_4_;
      auVar54._12_4_ = auVar186._12_4_ & auVar43._12_4_;
      auVar54._16_4_ = auVar186._16_4_ & uVar30;
      auVar54._20_4_ = auVar186._20_4_ & uVar14;
      auVar54._24_4_ = auVar186._24_4_ & uVar157;
      auVar54._28_4_ = auVar186._28_4_ & uVar160;
      uVar30 = vmovmskps_avx(auVar54);
      if (uVar30 != 0) {
        auVar40 = vpand_avx(auVar82,auVar186._16_16_);
        auVar82._0_4_ = auVar186._0_4_ & auVar43._0_4_;
        auVar82._4_4_ = auVar186._4_4_ & auVar43._4_4_;
        auVar82._8_4_ = auVar186._8_4_ & auVar43._8_4_;
        auVar82._12_4_ = auVar186._12_4_ & auVar43._12_4_;
        auVar43 = vpackssdw_avx(auVar82,auVar40);
        auVar89._0_4_ = auVar84._0_4_ + auVar170._0_4_ * fVar80;
        auVar89._4_4_ = auVar84._4_4_ + auVar170._4_4_ * fVar90;
        auVar89._8_4_ = auVar84._8_4_ + auVar170._8_4_ * fVar91;
        auVar89._12_4_ = auVar84._12_4_ + auVar170._12_4_ * fVar92;
        auVar89._16_4_ = auVar84._16_4_ + auVar170._16_4_ * fVar93;
        auVar89._20_4_ = auVar84._20_4_ + auVar170._20_4_ * fVar94;
        auVar89._24_4_ = auVar84._24_4_ + auVar170._24_4_ * fVar95;
        auVar89._28_4_ = auVar84._28_4_ + auVar170._28_4_ * fVar96;
        auVar101._0_4_ = auVar99._0_4_ + fVar146 * auVar170._0_4_;
        auVar101._4_4_ = auVar99._4_4_ + fVar156 * auVar170._4_4_;
        auVar101._8_4_ = auVar99._8_4_ + fVar159 * auVar170._8_4_;
        auVar101._12_4_ = auVar99._12_4_ + fVar162 * auVar170._12_4_;
        auVar101._16_4_ = auVar99._16_4_ + fVar164 * auVar170._16_4_;
        auVar101._20_4_ = auVar99._20_4_ + fVar165 * auVar170._20_4_;
        auVar101._24_4_ = auVar99._24_4_ + fVar166 * auVar170._24_4_;
        auVar101._28_4_ = auVar99._28_4_ + fVar167 * auVar170._28_4_;
        auVar70._0_4_ = auVar114._0_4_ + fVar121 * auVar170._0_4_;
        auVar70._4_4_ = auVar114._4_4_ + fVar132 * auVar170._4_4_;
        auVar70._8_4_ = auVar114._8_4_ + fVar134 * auVar170._8_4_;
        auVar70._12_4_ = auVar114._12_4_ + fVar136 * auVar170._12_4_;
        auVar70._16_4_ = auVar114._16_4_ + fVar138 * auVar170._16_4_;
        auVar70._20_4_ = auVar114._20_4_ + fVar140 * auVar170._20_4_;
        auVar70._24_4_ = auVar114._24_4_ + fVar142 * auVar170._24_4_;
        auVar70._28_4_ = auVar114._28_4_ + fVar144 * auVar170._28_4_;
        auVar40 = vpmovsxwd_avx(auVar43);
        auVar43 = vpunpckhwd_avx(auVar43,auVar43);
        auVar55._16_16_ = auVar43;
        auVar55._0_16_ = auVar40;
        auVar84 = vmaskmovps_avx(auVar55,auVar89);
        auVar99 = vmaskmovps_avx(auVar55,auVar101);
        auVar114 = vmaskmovps_avx(auVar55,auVar70);
        pauVar4 = (undefined1 (*) [32])(param_6 + uVar10 * 0xc);
        cVar7 = (char)uVar30;
        uVar14 = auVar40._0_4_;
        uVar157 = auVar40._4_4_;
        uVar160 = auVar40._8_4_;
        uVar147 = auVar40._12_4_;
        uVar158 = auVar43._0_4_;
        uVar161 = auVar43._4_4_;
        uVar163 = auVar43._8_4_;
        uVar113 = auVar43._12_4_;
        if (cVar7 == -1) {
          auVar35 = pauVar4[2];
          auVar56._16_16_ = *(undefined1 (*) [16])*pauVar4;
          auVar56._0_16_ = *(undefined1 (*) [16])(*pauVar4 + 0x10);
          auVar189 = vblendps_avx(*pauVar4,auVar56,0x24);
          auVar33 = vpermilps_avx(auVar189,
                                  ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                 );
          uVar11 = *(undefined4 *)(pauVar4[1] + 4);
          auVar194._4_4_ = uVar11;
          auVar194._0_4_ = uVar11;
          auVar194._8_4_ = uVar11;
          auVar194._12_4_ = uVar11;
          uVar11 = *(undefined4 *)(pauVar4[1] + 8);
          auVar194._20_4_ = uVar11;
          auVar194._16_4_ = uVar11;
          auVar194._24_4_ = uVar11;
          auVar194._28_4_ = uVar11;
          auVar196._16_16_ = *(undefined1 (*) [16])pauVar4[2];
          auVar196._0_16_ = *(undefined1 (*) [16])(pauVar4[2] + 0x10);
          auVar189 = vblendps_avx(auVar196,auVar35,0x44);
          auVar34 = vpermilps_avx(auVar189,
                                  ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                 );
          auVar189 = vblendps_avx(auVar33,auVar194,0x88);
          auVar82 = vshufps_avx(*(undefined1 (*) [16])(pauVar4[1] + 0x10),
                                *(undefined1 (*) [16])(pauVar4[1] + 0x10),0xec);
          uVar11 = *(undefined4 *)(pauVar4[1] + 0x14);
          auVar102._20_4_ = uVar11;
          auVar102._16_4_ = uVar11;
          auVar102._24_4_ = uVar11;
          auVar102._28_4_ = uVar11;
          auVar102._0_16_ = auVar82;
          auVar33 = vblendps_avx(auVar34,auVar102,0x13);
          auVar109._16_16_ = auVar33._0_16_;
          auVar109._0_16_ = auVar189._0_16_;
          auVar176 = vperm2f128_avx(auVar189,auVar33,0x31);
          auVar189 = vblendps_avx(pauVar4[1],*pauVar4,0x24);
          auVar189 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar4 + 0x10)),auVar189,0x21);
          auVar189 = vshufps_avx(auVar189,pauVar4[1],0xc2);
          auVar33 = vshufps_avx(auVar196,auVar35,0xc4);
          auVar187 = vblendps_avx(auVar189,auVar33,0xe0);
        }
        else {
          auVar41._0_4_ =
               uVar14 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
          auVar41._4_4_ = uVar157 & _UNK_150b50b04;
          auVar41._8_4_ = uVar160 & _UNK_150b50b08;
          auVar41._12_4_ = uVar147 & _UNK_150b50b0c;
          uVar16 = (undefined4)(uVar10 * 3 >> 0x20);
          uVar11 = vextractps_avx(auVar41,1);
          uVar22 = (undefined4)(uVar21 >> 0x20);
          uVar19 = vextractps_avx(auVar41,2);
          uVar26 = (undefined4)(uVar25 >> 0x20);
          uVar23 = vextractps_avx(auVar41,3);
          auVar82 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b10))),
                                  ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b14))),0x10);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(*pauVar4 + (uVar163 & _UNK_150b50b18))),
                                  0x20);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(*pauVar4 + (uVar113 & _UNK_150b50b1c))),
                                  0x30);
          auVar31 = vinsertps_avx(ZEXT416(*(uint *)*pauVar4),
                                  ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar16,uVar11))),0x10);
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar22,uVar19))),
                                  0x20);
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar26,uVar23))),
                                  0x30);
          auVar42._0_4_ =
               uVar14 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
          auVar42._4_4_ = uVar157 & _UNK_150b50b24;
          auVar42._8_4_ = uVar160 & _UNK_150b50b28;
          auVar42._12_4_ = uVar147 & _UNK_150b50b2c;
          uVar11 = vextractps_avx(auVar42,1);
          uVar19 = vextractps_avx(auVar42,2);
          uVar23 = vextractps_avx(auVar42,3);
          auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b30))),
                                  ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b34))),0x10);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar4 + (uVar163 & _UNK_150b50b38))),
                                  0x20);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar4 + (uVar113 & _UNK_150b50b3c))),
                                  0x30);
          auVar41 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + auVar42._0_4_)),
                                  ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar16,uVar11))),0x10);
          auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar22,uVar19))),
                                  0x20);
          auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar26,uVar23))),
                                  0x30);
          auVar83._0_4_ =
               uVar14 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
          auVar83._4_4_ = uVar157 & _UNK_150b50b44;
          auVar83._8_4_ = uVar160 & _UNK_150b50b48;
          auVar83._12_4_ = uVar147 & _UNK_150b50b4c;
          uVar11 = vextractps_avx(auVar83,1);
          uVar19 = vextractps_avx(auVar83,2);
          auVar109._16_16_ = auVar82;
          auVar109._0_16_ = auVar31;
          uVar23 = vextractps_avx(auVar83,3);
          auVar82 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b50))),
                                  ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b54))),0x10);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(*pauVar4 + (uVar163 & _UNK_150b50b58))),
                                  0x20);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(*pauVar4 + (uVar113 & _UNK_150b50b5c))),
                                  0x30);
          auVar31 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + auVar83._0_4_)),
                                  ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar16,uVar11))),0x10);
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar22,uVar19))),
                                  0x20);
          auVar176._16_16_ = auVar97;
          auVar176._0_16_ = auVar41;
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar26,uVar23))),
                                  0x30);
          auVar187._16_16_ = auVar82;
          auVar187._0_16_ = auVar31;
        }
        local_2a0 = auVar98._0_4_;
        iStack_29c = auVar98._4_4_;
        iStack_298 = auVar98._8_4_;
        iStack_294 = auVar98._12_4_;
        local_2e0 = auVar81._0_4_;
        iStack_2dc = auVar81._4_4_;
        iStack_2d8 = auVar81._8_4_;
        iStack_2d4 = auVar81._12_4_;
        local_390 = auVar191._16_4_;
        iStack_38c = auVar191._20_4_;
        iStack_388 = auVar191._24_4_;
        iStack_384 = auVar191._28_4_;
        auVar81._4_4_ = iStack_38c * 3;
        auVar81._0_4_ = local_390 * 3;
        auVar81._8_4_ = iStack_388 * 3;
        auVar81._12_4_ = iStack_384 * 3;
        auVar98._4_4_ = auVar191._4_4_ * 3;
        auVar98._0_4_ = auVar191._0_4_ * 3;
        auVar98._8_4_ = auVar191._8_4_ * 3;
        auVar98._12_4_ = auVar191._12_4_ * 3;
        auVar37._16_16_ = auVar43;
        auVar37._0_16_ = auVar40;
        auVar42 = vpand_avx(auVar40,auVar98);
        auVar41 = vpand_avx(auVar43,auVar81);
        lVar29 = param_2 + (longlong)auVar41._0_4_ * 4;
        lVar9 = param_2 + (longlong)auVar42._0_4_ * 4;
        lVar12 = param_2 + (longlong)auVar41._4_4_ * 4;
        auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d50) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d54) + lVar12)),
                                0x10);
        auVar40 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d70) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d74) + lVar12)),
                                0x10);
        lVar29 = param_2 + (longlong)auVar41._8_4_ * 4;
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d58) +
                                                         lVar29)),0x20);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d78) +
                                                         lVar29)),0x20);
        lVar29 = param_2 + (longlong)auVar41._12_4_ * 4;
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar113 & _UNK_150b50d5c) +
                                                         lVar29)),0x30);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar113 & _UNK_150b50d7c) +
                                                         lVar29)),0x30);
        lVar29 = param_2 + (longlong)auVar42._4_4_ * 4;
        auVar82 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar14 & 
                                                  ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                                  ) + lVar9)),
                                ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50d44) + lVar29)),
                                0x10);
        auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar14 & 
                                                  ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                                  ) + lVar9)),
                                ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50d64) + lVar29)),
                                0x10);
        lVar29 = param_2 + (longlong)auVar42._8_4_ * 4;
        auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d48) +
                                                         lVar29)),0x20);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d68) +
                                                         lVar29)),0x20);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar41._0_4_ * 4)),
                                ZEXT416(*(uint *)(param_2 + (longlong)auVar41._4_4_ * 4)),0x10);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_2 + (longlong)auVar41._8_4_ * 4)),
                                0x20);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_2 + (longlong)auVar41._12_4_ * 4)),
                                0x30);
        auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar42._0_4_ * 4)),
                                ZEXT416(*(uint *)(param_2 + (longlong)auVar42._4_4_ * 4)),0x10);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + (longlong)auVar42._8_4_ * 4)),
                                0x20);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + (longlong)auVar42._12_4_ * 4)),
                                0x30);
        param_2 = param_2 + (longlong)auVar42._12_4_ * 4;
        auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)(uVar147 & _UNK_150b50d4c) +
                                                         param_2)),0x30);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar147 & _UNK_150b50d6c) +
                                                         param_2)),0x30);
        auVar195._16_16_ = auVar97;
        auVar195._0_16_ = auVar41;
        auVar71._16_16_ = auVar43;
        auVar71._0_16_ = auVar82;
        auVar119._16_16_ = auVar40;
        auVar119._0_16_ = auVar31;
        auVar189 = vsubps_avx(auVar84,auVar195);
        auVar191 = vsubps_avx(auVar99,auVar71);
        auVar33 = vsubps_avx(auVar114,auVar119);
        auVar43 = vshufps_avx(ZEXT416(param_8),ZEXT416(param_8),0);
        fVar122 = auVar43._0_4_;
        auVar110._0_4_ = fVar122 * auVar109._0_4_;
        fVar133 = auVar43._4_4_;
        auVar110._4_4_ = fVar133 * auVar109._4_4_;
        fVar135 = auVar43._8_4_;
        auVar110._8_4_ = fVar135 * auVar109._8_4_;
        fVar137 = auVar43._12_4_;
        auVar110._12_4_ = fVar137 * auVar109._12_4_;
        auVar110._16_4_ = fVar122 * auVar109._16_4_;
        auVar110._20_4_ = fVar133 * auVar109._20_4_;
        auVar110._24_4_ = fVar135 * auVar109._24_4_;
        auVar110._28_4_ = fVar137 * auVar109._28_4_;
        auVar189 = vsubps_avx(auVar189,auVar110);
        auVar177._0_4_ = fVar122 * auVar176._0_4_;
        auVar177._4_4_ = fVar133 * auVar176._4_4_;
        auVar177._8_4_ = fVar135 * auVar176._8_4_;
        auVar177._12_4_ = fVar137 * auVar176._12_4_;
        auVar177._16_4_ = fVar122 * auVar176._16_4_;
        auVar177._20_4_ = fVar133 * auVar176._20_4_;
        auVar177._24_4_ = fVar135 * auVar176._24_4_;
        auVar177._28_4_ = fVar137 * auVar176._28_4_;
        auVar191 = vsubps_avx(auVar191,auVar177);
        auVar178._0_4_ = fVar122 * auVar187._0_4_;
        auVar178._4_4_ = fVar133 * auVar187._4_4_;
        auVar178._8_4_ = fVar135 * auVar187._8_4_;
        auVar178._12_4_ = fVar137 * auVar187._12_4_;
        auVar178._16_4_ = fVar122 * auVar187._16_4_;
        auVar178._20_4_ = fVar133 * auVar187._20_4_;
        auVar178._24_4_ = fVar135 * auVar187._24_4_;
        auVar178._28_4_ = fVar137 * auVar187._28_4_;
        auVar33 = vsubps_avx(auVar33,auVar178);
        fVar122 = fVar121 * auVar33._0_4_ + fVar80 * auVar189._0_4_ + fVar146 * auVar191._0_4_;
        fVar133 = fVar132 * auVar33._4_4_ + fVar90 * auVar189._4_4_ + fVar156 * auVar191._4_4_;
        fVar135 = fVar134 * auVar33._8_4_ + fVar91 * auVar189._8_4_ + fVar159 * auVar191._8_4_;
        fVar137 = fVar136 * auVar33._12_4_ + fVar92 * auVar189._12_4_ + fVar162 * auVar191._12_4_;
        fVar139 = fVar138 * auVar33._16_4_ + fVar93 * auVar189._16_4_ + fVar164 * auVar191._16_4_;
        fVar141 = fVar140 * auVar33._20_4_ + fVar94 * auVar189._20_4_ + fVar165 * auVar191._20_4_;
        fVar143 = fVar142 * auVar33._24_4_ + fVar95 * auVar189._24_4_ + fVar166 * auVar191._24_4_;
        fVar145 = fVar144 * auVar33._28_4_ + fVar96 * auVar189._28_4_ + fVar167 * auVar191._28_4_;
        auVar188._0_4_ = fVar122 * fVar80;
        auVar188._4_4_ = fVar133 * fVar90;
        auVar188._8_4_ = fVar135 * fVar91;
        auVar188._12_4_ = fVar137 * fVar92;
        auVar188._16_4_ = fVar139 * fVar93;
        auVar188._20_4_ = fVar141 * fVar94;
        auVar188._24_4_ = fVar143 * fVar95;
        auVar188._28_4_ = fVar145 * fVar96;
        auVar130._0_4_ = fVar146 * fVar122;
        auVar130._4_4_ = fVar156 * fVar133;
        auVar130._8_4_ = fVar159 * fVar135;
        auVar130._12_4_ = fVar162 * fVar137;
        auVar130._16_4_ = fVar164 * fVar139;
        auVar130._20_4_ = fVar165 * fVar141;
        auVar130._24_4_ = fVar166 * fVar143;
        auVar130._28_4_ = fVar167 * fVar145;
        auVar154._0_4_ = fVar121 * fVar122;
        auVar154._4_4_ = fVar132 * fVar133;
        auVar154._8_4_ = fVar134 * fVar135;
        auVar154._12_4_ = fVar136 * fVar137;
        auVar154._16_4_ = fVar138 * fVar139;
        auVar154._20_4_ = fVar140 * fVar141;
        auVar154._24_4_ = fVar142 * fVar143;
        auVar154._28_4_ = fVar144 * fVar145;
        auVar189 = vsubps_avx(auVar189,auVar188);
        auVar191 = vsubps_avx(auVar191,auVar130);
        auVar33 = vsubps_avx(auVar33,auVar154);
        fVar80 = auVar189._0_4_;
        fVar92 = auVar189._4_4_;
        fVar95 = auVar189._8_4_;
        fVar132 = auVar189._12_4_;
        fVar138 = auVar189._16_4_;
        fVar144 = auVar189._20_4_;
        fVar159 = auVar189._24_4_;
        fVar165 = auVar189._28_4_;
        fVar90 = auVar191._0_4_;
        fVar93 = auVar191._4_4_;
        fVar96 = auVar191._8_4_;
        fVar134 = auVar191._12_4_;
        fVar140 = auVar191._16_4_;
        fVar146 = auVar191._20_4_;
        fVar162 = auVar191._24_4_;
        fVar166 = auVar191._28_4_;
        fVar91 = auVar33._0_4_;
        fVar94 = auVar33._4_4_;
        fVar121 = auVar33._8_4_;
        fVar136 = auVar33._12_4_;
        fVar142 = auVar33._16_4_;
        fVar156 = auVar33._20_4_;
        fVar164 = auVar33._24_4_;
        fVar167 = auVar33._28_4_;
        auVar131._0_4_ = fVar91 * fVar91 + fVar90 * fVar90 + fVar80 * fVar80;
        auVar131._4_4_ = fVar94 * fVar94 + fVar93 * fVar93 + fVar92 * fVar92;
        auVar131._8_4_ = fVar121 * fVar121 + fVar96 * fVar96 + fVar95 * fVar95;
        auVar131._12_4_ = fVar136 * fVar136 + fVar134 * fVar134 + fVar132 * fVar132;
        auVar131._16_4_ = fVar142 * fVar142 + fVar140 * fVar140 + fVar138 * fVar138;
        auVar131._20_4_ = fVar156 * fVar156 + fVar146 * fVar146 + fVar144 * fVar144;
        auVar131._24_4_ = fVar164 * fVar164 + fVar162 * fVar162 + fVar159 * fVar159;
        auVar131._28_4_ = fVar167 * fVar167 + fVar166 * fVar166 + fVar165 * fVar165;
        auVar33 = vsqrtps_avx(auVar131);
        auVar43 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
        auVar155._0_4_ = auVar43._0_4_ * auVar170._0_4_;
        auVar155._4_4_ = auVar43._4_4_ * auVar170._4_4_;
        auVar155._8_4_ = auVar43._8_4_ * auVar170._8_4_;
        auVar155._12_4_ = auVar43._12_4_ * auVar170._12_4_;
        auVar155._16_4_ = auVar43._0_4_ * auVar170._16_4_;
        auVar155._20_4_ = auVar43._4_4_ * auVar170._20_4_;
        auVar155._24_4_ = auVar43._8_4_ * auVar170._24_4_;
        auVar155._28_4_ = auVar43._12_4_ * auVar170._28_4_;
        auVar189 = vminps_avx(auVar155,auVar33);
        auVar191 = vdivps_avx(auVar189,auVar33);
        auVar189 = vcmpps_avx(auVar33,
                              ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77
                              ,5);
        fVar122 = (float)(auVar191._0_4_ & auVar189._0_4_);
        fVar133 = (float)(auVar191._4_4_ & auVar189._4_4_);
        fVar135 = (float)(auVar191._8_4_ & auVar189._8_4_);
        fVar137 = (float)(auVar191._12_4_ & auVar189._12_4_);
        fVar139 = (float)(auVar191._16_4_ & auVar189._16_4_);
        fVar141 = (float)(auVar191._20_4_ & auVar189._20_4_);
        fVar143 = (float)(auVar191._24_4_ & auVar189._24_4_);
        fVar145 = (float)(auVar191._28_4_ & auVar189._28_4_);
        auVar111._0_4_ = fVar80 * fVar122;
        auVar111._4_4_ = fVar92 * fVar133;
        auVar111._8_4_ = fVar95 * fVar135;
        auVar111._12_4_ = fVar132 * fVar137;
        auVar111._16_4_ = fVar138 * fVar139;
        auVar111._20_4_ = fVar144 * fVar141;
        auVar111._24_4_ = fVar159 * fVar143;
        auVar111._28_4_ = fVar165 * fVar145;
        auVar72._0_4_ = fVar90 * fVar122;
        auVar72._4_4_ = fVar93 * fVar133;
        auVar72._8_4_ = fVar96 * fVar135;
        auVar72._12_4_ = fVar134 * fVar137;
        auVar72._16_4_ = fVar140 * fVar139;
        auVar72._20_4_ = fVar146 * fVar141;
        auVar72._24_4_ = fVar162 * fVar143;
        auVar72._28_4_ = fVar166 * fVar145;
        auVar120._0_4_ = fVar91 * fVar122;
        auVar120._4_4_ = fVar94 * fVar133;
        auVar120._8_4_ = fVar121 * fVar135;
        auVar120._12_4_ = fVar136 * fVar137;
        auVar120._16_4_ = fVar142 * fVar139;
        auVar120._20_4_ = fVar156 * fVar141;
        auVar120._24_4_ = fVar164 * fVar143;
        auVar120._28_4_ = fVar167 * fVar145;
        auVar84 = vsubps_avx(auVar84,auVar111);
        auVar99 = vsubps_avx(auVar99,auVar72);
        auVar114 = vsubps_avx(auVar114,auVar120);
        auVar84 = vmaskmovps_avx(auVar37,auVar84);
        auVar99 = vmaskmovps_avx(auVar37,auVar99);
        auVar114 = vmaskmovps_avx(auVar37,auVar114);
        auVar43 = auVar84._0_16_;
        auVar31 = auVar84._16_16_;
        auVar40 = auVar99._0_16_;
        auVar82 = auVar114._0_16_;
        auVar97 = auVar99._16_16_;
        auVar41 = auVar114._16_16_;
        if ((uVar30 & 1) != 0) {
          *(int *)(param_1 + local_2a0) = auVar84._0_4_;
        }
        if ((uVar30 & 2) != 0) {
          uVar11 = vextractps_avx(auVar43,1);
          *(undefined4 *)(param_1 + iStack_29c) = uVar11;
        }
        if ((uVar30 & 4) != 0) {
          uVar11 = vextractps_avx(auVar43,2);
          *(undefined4 *)(param_1 + iStack_298) = uVar11;
        }
        if ((uVar30 & 8) != 0) {
          uVar11 = vextractps_avx(auVar43,3);
          *(undefined4 *)(param_1 + iStack_294) = uVar11;
        }
        if ((uVar30 & 0x10) != 0) {
          *(int *)(param_1 + local_2e0) = auVar84._16_4_;
        }
        if ((uVar30 & 0x20) != 0) {
          uVar11 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + iStack_2dc) = uVar11;
        }
        if ((uVar30 & 0x40) != 0) {
          uVar11 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + iStack_2d8) = uVar11;
        }
        if (cVar7 < '\0') {
          uVar11 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + iStack_2d4) = uVar11;
        }
        if ((uVar30 & 1) != 0) {
          *(int *)(param_1 + 4 + (longlong)local_2a0) = auVar99._0_4_;
        }
        if ((uVar30 & 2) != 0) {
          uVar11 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_29c) = uVar11;
        }
        if ((uVar30 & 4) != 0) {
          uVar11 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_298) = uVar11;
        }
        if ((uVar30 & 8) != 0) {
          uVar11 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_294) = uVar11;
        }
        if ((uVar30 & 0x10) != 0) {
          *(int *)(param_1 + 4 + (longlong)local_2e0) = auVar99._16_4_;
        }
        if ((uVar30 & 0x20) != 0) {
          uVar11 = vextractps_avx(auVar97,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_2dc) = uVar11;
        }
        if ((uVar30 & 0x40) != 0) {
          uVar11 = vextractps_avx(auVar97,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_2d8) = uVar11;
        }
        if (cVar7 < '\0') {
          uVar11 = vextractps_avx(auVar97,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_2d4) = uVar11;
        }
        if ((uVar30 & 1) != 0) {
          *(int *)(param_1 + 8 + (longlong)local_2a0) = auVar114._0_4_;
        }
        if ((uVar30 & 2) != 0) {
          uVar11 = vextractps_avx(auVar82,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_29c) = uVar11;
        }
        if ((uVar30 & 4) != 0) {
          uVar11 = vextractps_avx(auVar82,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_298) = uVar11;
        }
        if ((uVar30 & 8) != 0) {
          uVar11 = vextractps_avx(auVar82,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_294) = uVar11;
        }
        if ((uVar30 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)local_2e0) = auVar114._16_4_;
        }
        if ((uVar30 & 0x20) != 0) {
          uVar11 = vextractps_avx(auVar41,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_2dc) = uVar11;
        }
        if ((uVar30 & 0x40) != 0) {
          uVar11 = vextractps_avx(auVar41,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_2d8) = uVar11;
        }
        if (cVar7 < '\0') {
          uVar11 = vextractps_avx(auVar41,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_2d4) = uVar11;
        }
        if ((uVar30 & 1) != 0) {
          *(int *)(param_1 + 0xc + (longlong)local_2a0) = auVar39._0_4_;
        }
        if ((uVar30 & 2) != 0) {
          uVar11 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_29c) = uVar11;
        }
        if ((uVar30 & 4) != 0) {
          uVar11 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_298) = uVar11;
        }
        if ((uVar30 & 8) != 0) {
          uVar11 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_294) = uVar11;
        }
        if ((uVar30 & 0x10) != 0) {
          *(int *)(param_1 + 0xc + (longlong)local_2e0) = auVar32._0_4_;
        }
        if ((uVar30 & 0x20) != 0) {
          uVar11 = vextractps_avx(auVar32,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2dc) = uVar11;
        }
        if ((uVar30 & 0x40) != 0) {
          uVar11 = vextractps_avx(auVar32,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2d8) = uVar11;
        }
        if (cVar7 < '\0') {
          uVar11 = vextractps_avx(auVar32,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2d4) = uVar11;
        }
      }
    }
  }
  return;
}

// ApplyPBDPlanarConstraintsNoFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_Cuni_avx @ 140307d90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsNoFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  int iVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  int iVar44;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [32];
  undefined1 auVar50 [32];
  undefined1 auVar46 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  uint uVar75;
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  undefined1 auVar69 [64];
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
  undefined1 auVar92 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [16];
  undefined1 auVar96 [32];
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar49 [32];
  
  uVar8 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar8 = param_5;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar22 = 0;
  }
  else {
    lVar13 = 0x10;
    uVar22 = 0;
    auVar69 = ZEXT1264(ZEXT812(0));
    uVar70 = 0;
    do {
      auVar35 = vpslld_avx(*(undefined1 (*) [16])(param_2 + 0x10 + (ulonglong)uVar70),4);
      auVar28 = vpslld_avx(*(undefined1 (*) [16])(param_2 + (ulonglong)uVar70),4);
      lVar26 = (longlong)auVar28._0_4_;
      lVar23 = (longlong)auVar28._4_4_;
      lVar12 = (longlong)auVar28._8_4_;
      lVar9 = (longlong)auVar28._12_4_;
      lVar25 = (longlong)auVar35._0_4_;
      lVar24 = (longlong)auVar35._4_4_;
      lVar27 = (longlong)auVar35._8_4_;
      lVar21 = (longlong)auVar35._12_4_;
      auVar28 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + lVar24)),0x10);
      auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_1 + lVar21)),0x30);
      auVar35 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar23)),0x10);
      auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_1 + lVar12)),0x20);
      auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_1 + lVar9)),0x30);
      auVar101._16_16_ = auVar28;
      auVar101._0_16_ = auVar35;
      auVar92 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x10);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x30);
      auVar47 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x10);
      auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_1 + 4 + lVar12)),0x20);
      auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_1 + 4 + lVar9)),0x30);
      auVar95 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x10);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x30);
      auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x10);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + 8 + lVar12)),0x20);
      auVar93._16_16_ = auVar92;
      auVar93._0_16_ = auVar47;
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + 8 + lVar9)),0x30);
      auVar96._16_16_ = auVar95;
      auVar96._0_16_ = auVar97;
      uVar71 = *(uint *)(param_1 + 0xc + lVar26);
      uVar72 = *(uint *)(param_1 + 0xc + lVar23);
      uVar73 = *(uint *)(param_1 + 0xc + lVar12);
      uVar74 = *(uint *)(param_1 + 0xc + lVar9);
      uVar75 = *(uint *)(param_1 + 0xc + lVar25);
      uVar2 = *(uint *)(param_1 + 0xc + lVar24);
      uVar3 = *(uint *)(param_1 + 0xc + lVar27);
      uVar4 = *(uint *)(param_1 + 0xc + lVar21);
      auVar45 = vinsertps_avx(ZEXT416(uVar75),ZEXT416(uVar2),0x10);
      auVar45 = vinsertps_avx(auVar45,ZEXT416(uVar3),0x20);
      auVar45 = vinsertps_avx(auVar45,ZEXT416(uVar4),0x30);
      auVar58 = vinsertps_avx(ZEXT416(uVar71),ZEXT416(uVar72),0x10);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(uVar73),0x20);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(uVar74),0x30);
      auVar98._16_16_ = auVar45;
      auVar98._0_16_ = auVar58;
      auVar29 = vcmpps_avx(auVar98,auVar69._0_32_,8);
      if ((((((((SUB321(auVar29 >> 0x1f,0) & 1) == 0 && (SUB321(auVar29 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar29 >> 0x5f,0) & 1) == 0) && SUB321(auVar29 >> 0x7f,0) == '\0') &&
            (SUB321(auVar29 >> 0x9f,0) & 1) == 0) && SUB321(auVar29 >> 0xbf,0) == '\0') &&
          (SUB321(auVar29 >> 0xdf,0) & 1) == 0) && -1 < auVar29[0x1f]) {
        auVar45 = *(undefined1 (*) [16])(param_3 + -0x40 + lVar13 * 4);
        auVar58 = *(undefined1 (*) [16])(param_3 + -0x30 + lVar13 * 4);
        auVar5 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar13 * 4);
        auVar6 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar13 * 4);
        auVar59._16_16_ = auVar58;
        auVar59._0_16_ = auVar45;
        auVar62._16_16_ = auVar6;
        auVar62._0_16_ = auVar5;
        auVar46 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar13 * 4);
        auVar53 = *(undefined1 (*) [16])(param_3 + lVar13 * 4);
        auVar76._16_16_ = auVar46;
        auVar76._0_16_ = auVar53;
        auVar29._16_16_ = auVar45;
        auVar29._0_16_ = auVar58;
        auVar29 = vblendps_avx(auVar59,auVar29,0x24);
        auVar29 = vpermilps_avx(auVar29,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar7 = *(undefined4 *)(param_3 + -0x18 + lVar13 * 4);
        auVar82._20_4_ = uVar7;
        auVar82._16_4_ = uVar7;
        auVar82._24_4_ = uVar7;
        auVar82._28_4_ = uVar7;
        uVar7 = *(undefined4 *)(param_3 + -0x1c + lVar13 * 4);
        auVar82._4_4_ = uVar7;
        auVar82._0_4_ = uVar7;
        auVar82._8_4_ = uVar7;
        auVar82._12_4_ = uVar7;
        auVar29 = vblendps_avx(auVar29,auVar82,0x88);
        auVar63._16_16_ = auVar53;
        auVar63._0_16_ = auVar46;
        auVar48 = vblendps_avx(auVar63,auVar76,0x44);
        auVar48 = vpermilps_avx(auVar48,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        uVar7 = *(undefined4 *)(param_3 + -0xc + lVar13 * 4);
        auVar36._20_4_ = uVar7;
        auVar36._16_4_ = uVar7;
        auVar36._24_4_ = uVar7;
        auVar36._28_4_ = uVar7;
        auVar45 = vshufps_avx(auVar6,auVar6,0xec);
        auVar36._0_16_ = auVar45;
        auVar48 = vblendps_avx(auVar48,auVar36,0x13);
        auVar83._16_16_ = auVar48._0_16_;
        auVar83._0_16_ = auVar29._0_16_;
        auVar38 = vperm2f128_avx(auVar29,auVar48,0x31);
        auVar29 = vblendps_avx(auVar62,auVar59,0x24);
        auVar48._16_16_ = auVar5;
        auVar48._0_16_ = auVar58;
        auVar29 = vshufps_avx(auVar48,auVar29,0x21);
        auVar29 = vshufps_avx(auVar29,auVar62,0xc2);
        auVar48 = vshufps_avx(auVar63,auVar76,0xc4);
        auVar29 = vblendps_avx(auVar29,auVar48,0xe0);
        auVar45 = *(undefined1 (*) [16])(param_4 + -0x40 + lVar13 * 4);
        auVar58 = *(undefined1 (*) [16])(param_4 + -0x30 + lVar13 * 4);
        auVar5 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar13 * 4);
        auVar6 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar13 * 4);
        auVar64._16_16_ = auVar58;
        auVar64._0_16_ = auVar45;
        auVar77._16_16_ = auVar6;
        auVar77._0_16_ = auVar5;
        auVar46 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar13 * 4);
        auVar53 = *(undefined1 (*) [16])(param_4 + lVar13 * 4);
        auVar89._16_16_ = auVar46;
        auVar89._0_16_ = auVar53;
        auVar54._16_16_ = auVar45;
        auVar54._0_16_ = auVar58;
        auVar48 = vblendps_avx(auVar64,auVar54,0x24);
        auVar48 = vpermilps_avx(auVar48,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar7 = *(undefined4 *)(param_4 + -0x18 + lVar13 * 4);
        auVar37._20_4_ = uVar7;
        auVar37._16_4_ = uVar7;
        auVar37._24_4_ = uVar7;
        auVar37._28_4_ = uVar7;
        uVar7 = *(undefined4 *)(param_4 + -0x1c + lVar13 * 4);
        auVar37._4_4_ = uVar7;
        auVar37._0_4_ = uVar7;
        auVar37._8_4_ = uVar7;
        auVar37._12_4_ = uVar7;
        auVar48 = vblendps_avx(auVar48,auVar37,0x88);
        auVar84._16_16_ = auVar53;
        auVar84._0_16_ = auVar46;
        auVar36 = vblendps_avx(auVar84,auVar89,0x44);
        auVar36 = vpermilps_avx(auVar36,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        uVar7 = *(undefined4 *)(param_4 + -0xc + lVar13 * 4);
        auVar60._20_4_ = uVar7;
        auVar60._16_4_ = uVar7;
        auVar60._24_4_ = uVar7;
        auVar60._28_4_ = uVar7;
        auVar45 = vshufps_avx(auVar6,auVar6,0xec);
        auVar60._0_16_ = auVar45;
        auVar36 = vblendps_avx(auVar36,auVar60,0x13);
        auVar54 = vperm2f128_avx(auVar48,auVar36,0x31);
        auVar37 = vblendps_avx(auVar77,auVar64,0x24);
        auVar69 = ZEXT864(0) << 0x20;
        auVar30._16_16_ = auVar5;
        auVar30._0_16_ = auVar58;
        auVar37 = vshufps_avx(auVar30,auVar37,0x21);
        auVar37 = vshufps_avx(auVar37,auVar77,0xc2);
        auVar30 = vshufps_avx(auVar84,auVar89,0xc4);
        auVar37 = vblendps_avx(auVar37,auVar30,0xe0);
        auVar101 = vsubps_avx(auVar83,auVar101);
        auVar93 = vsubps_avx(auVar38,auVar93);
        auVar29 = vsubps_avx(auVar29,auVar96);
        auVar38._0_4_ =
             auVar37._0_4_ * auVar29._0_4_ +
             auVar48._0_4_ * auVar101._0_4_ + auVar54._0_4_ * auVar93._0_4_;
        auVar38._4_4_ =
             auVar37._4_4_ * auVar29._4_4_ +
             auVar48._4_4_ * auVar101._4_4_ + auVar54._4_4_ * auVar93._4_4_;
        auVar38._8_4_ =
             auVar37._8_4_ * auVar29._8_4_ +
             auVar48._8_4_ * auVar101._8_4_ + auVar54._8_4_ * auVar93._8_4_;
        auVar38._12_4_ =
             auVar37._12_4_ * auVar29._12_4_ +
             auVar48._12_4_ * auVar101._12_4_ + auVar54._12_4_ * auVar93._12_4_;
        auVar38._16_4_ =
             auVar37._16_4_ * auVar29._16_4_ +
             auVar36._0_4_ * auVar101._16_4_ + auVar54._16_4_ * auVar93._16_4_;
        auVar38._20_4_ =
             auVar37._20_4_ * auVar29._20_4_ +
             auVar36._4_4_ * auVar101._20_4_ + auVar54._20_4_ * auVar93._20_4_;
        auVar38._24_4_ =
             auVar37._24_4_ * auVar29._24_4_ +
             auVar36._8_4_ * auVar101._24_4_ + auVar54._24_4_ * auVar93._24_4_;
        auVar38._28_4_ =
             auVar37._28_4_ * auVar29._28_4_ +
             auVar36._12_4_ * auVar101._28_4_ + auVar54._28_4_ * auVar93._28_4_;
        auVar29 = vcmpps_avx(ZEXT832(0) << 0x20,auVar38,1);
        auVar93 = vcmpps_avx(auVar98,ZEXT832(0) << 0x20,4);
        auVar45._0_4_ = auVar29._0_4_ & auVar93._0_4_;
        auVar45._4_4_ = auVar29._4_4_ & auVar93._4_4_;
        auVar45._8_4_ = auVar29._8_4_ & auVar93._8_4_;
        auVar45._12_4_ = auVar29._12_4_ & auVar93._12_4_;
        auVar49._16_4_ = auVar29._16_4_ & auVar93._16_4_;
        auVar49._0_16_ = auVar45;
        auVar49._20_4_ = auVar29._20_4_ & auVar93._20_4_;
        auVar49._24_4_ = auVar29._24_4_ & auVar93._24_4_;
        auVar49._28_4_ = auVar29._28_4_ & auVar93._28_4_;
        uVar14 = vmovmskps_avx(auVar49);
        if (uVar14 != 0) {
          auVar45 = vpackssdw_avx(auVar45,auVar49._16_16_);
          local_220 = auVar35._0_4_;
          fStack_21c = auVar35._4_4_;
          fStack_218 = auVar35._8_4_;
          fStack_214 = auVar35._12_4_;
          fStack_210 = auVar28._0_4_;
          fStack_20c = auVar28._4_4_;
          fStack_208 = auVar28._8_4_;
          fStack_204 = auVar28._12_4_;
          auVar39._0_4_ = auVar48._0_4_ * auVar38._0_4_ + local_220;
          auVar39._4_4_ = auVar48._4_4_ * auVar38._4_4_ + fStack_21c;
          auVar39._8_4_ = auVar48._8_4_ * auVar38._8_4_ + fStack_218;
          auVar39._12_4_ = auVar48._12_4_ * auVar38._12_4_ + fStack_214;
          auVar39._16_4_ = auVar36._0_4_ * auVar38._16_4_ + fStack_210;
          auVar39._20_4_ = auVar36._4_4_ * auVar38._20_4_ + fStack_20c;
          auVar39._24_4_ = auVar36._8_4_ * auVar38._24_4_ + fStack_208;
          auVar39._28_4_ = auVar36._12_4_ * auVar38._28_4_ + fStack_204;
          auVar55._0_4_ = auVar47._0_4_ + auVar54._0_4_ * auVar38._0_4_;
          auVar55._4_4_ = auVar47._4_4_ + auVar54._4_4_ * auVar38._4_4_;
          auVar55._8_4_ = auVar47._8_4_ + auVar54._8_4_ * auVar38._8_4_;
          auVar55._12_4_ = auVar47._12_4_ + auVar54._12_4_ * auVar38._12_4_;
          auVar55._16_4_ = auVar92._0_4_ + auVar54._16_4_ * auVar38._16_4_;
          auVar55._20_4_ = auVar92._4_4_ + auVar54._20_4_ * auVar38._20_4_;
          auVar55._24_4_ = auVar92._8_4_ + auVar54._24_4_ * auVar38._24_4_;
          auVar55._28_4_ = auVar92._12_4_ + auVar54._28_4_ * auVar38._28_4_;
          auVar31._0_4_ = auVar97._0_4_ + auVar37._0_4_ * auVar38._0_4_;
          auVar31._4_4_ = auVar97._4_4_ + auVar37._4_4_ * auVar38._4_4_;
          auVar31._8_4_ = auVar97._8_4_ + auVar37._8_4_ * auVar38._8_4_;
          auVar31._12_4_ = auVar97._12_4_ + auVar37._12_4_ * auVar38._12_4_;
          auVar31._16_4_ = auVar95._0_4_ + auVar37._16_4_ * auVar38._16_4_;
          auVar31._20_4_ = auVar95._4_4_ + auVar37._20_4_ * auVar38._20_4_;
          auVar31._24_4_ = auVar95._8_4_ + auVar37._24_4_ * auVar38._24_4_;
          auVar31._28_4_ = auVar95._12_4_ + auVar37._28_4_ * auVar38._28_4_;
          auVar28 = vpmovsxwd_avx(auVar45);
          auVar35 = vpunpckhwd_avx(auVar45,auVar45);
          auVar50._16_16_ = auVar35;
          auVar50._0_16_ = auVar28;
          auVar29 = vmaskmovps_avx(auVar50,auVar39);
          auVar93 = vmaskmovps_avx(auVar50,auVar55);
          auVar96 = vmaskmovps_avx(auVar50,auVar31);
          cVar11 = (char)uVar14;
          auVar95 = auVar29._0_16_;
          auVar97 = auVar29._16_16_;
          auVar92 = auVar93._0_16_;
          auVar47 = auVar93._16_16_;
          auVar28 = auVar96._0_16_;
          auVar35 = auVar96._16_16_;
          if ((uVar14 & 1) != 0) {
            *(int *)(param_1 + lVar26) = auVar29._0_4_;
          }
          if ((uVar14 & 2) != 0) {
            uVar7 = vextractps_avx(auVar95,1);
            *(undefined4 *)(param_1 + lVar23) = uVar7;
          }
          if ((uVar14 & 4) != 0) {
            uVar7 = vextractps_avx(auVar95,2);
            *(undefined4 *)(param_1 + lVar12) = uVar7;
          }
          if ((uVar14 & 8) != 0) {
            uVar7 = vextractps_avx(auVar95,3);
            *(undefined4 *)(param_1 + lVar9) = uVar7;
          }
          if ((uVar14 & 0x10) != 0) {
            *(int *)(param_1 + lVar25) = auVar29._16_4_;
          }
          if ((uVar14 & 0x20) != 0) {
            uVar7 = vextractps_avx(auVar97,1);
            *(undefined4 *)(param_1 + lVar24) = uVar7;
          }
          if ((uVar14 & 0x40) != 0) {
            uVar7 = vextractps_avx(auVar97,2);
            *(undefined4 *)(param_1 + lVar27) = uVar7;
          }
          if (cVar11 < '\0') {
            uVar7 = vextractps_avx(auVar97,3);
            *(undefined4 *)(param_1 + lVar21) = uVar7;
          }
          if ((uVar14 & 1) != 0) {
            *(int *)(param_1 + 4 + lVar26) = auVar93._0_4_;
          }
          if ((uVar14 & 2) != 0) {
            uVar7 = vextractps_avx(auVar92,1);
            *(undefined4 *)(param_1 + 4 + lVar23) = uVar7;
          }
          if ((uVar14 & 4) != 0) {
            uVar7 = vextractps_avx(auVar92,2);
            *(undefined4 *)(param_1 + 4 + lVar12) = uVar7;
          }
          if ((uVar14 & 8) != 0) {
            uVar7 = vextractps_avx(auVar92,3);
            *(undefined4 *)(param_1 + 4 + lVar9) = uVar7;
          }
          if ((uVar14 & 0x10) != 0) {
            *(int *)(param_1 + 4 + lVar25) = auVar93._16_4_;
          }
          if ((uVar14 & 0x20) != 0) {
            uVar7 = vextractps_avx(auVar47,1);
            *(undefined4 *)(param_1 + 4 + lVar24) = uVar7;
          }
          if ((uVar14 & 0x40) != 0) {
            uVar7 = vextractps_avx(auVar47,2);
            *(undefined4 *)(param_1 + 4 + lVar27) = uVar7;
          }
          if (cVar11 < '\0') {
            uVar7 = vextractps_avx(auVar47,3);
            *(undefined4 *)(param_1 + 4 + lVar21) = uVar7;
          }
          if ((uVar14 & 1) != 0) {
            *(int *)(param_1 + 8 + lVar26) = auVar96._0_4_;
          }
          if ((uVar14 & 2) != 0) {
            uVar7 = vextractps_avx(auVar28,1);
            *(undefined4 *)(param_1 + 8 + lVar23) = uVar7;
          }
          if ((uVar14 & 4) != 0) {
            uVar7 = vextractps_avx(auVar28,2);
            *(undefined4 *)(param_1 + 8 + lVar12) = uVar7;
          }
          if ((uVar14 & 8) != 0) {
            uVar7 = vextractps_avx(auVar28,3);
            *(undefined4 *)(param_1 + 8 + lVar9) = uVar7;
          }
          if ((uVar14 & 0x10) != 0) {
            *(int *)(param_1 + 8 + lVar25) = auVar96._16_4_;
          }
          if ((uVar14 & 0x20) != 0) {
            uVar7 = vextractps_avx(auVar35,1);
            *(undefined4 *)(param_1 + 8 + lVar24) = uVar7;
          }
          if ((uVar14 & 0x40) != 0) {
            uVar7 = vextractps_avx(auVar35,2);
            *(undefined4 *)(param_1 + 8 + lVar27) = uVar7;
          }
          if (cVar11 < '\0') {
            uVar7 = vextractps_avx(auVar35,3);
            *(undefined4 *)(param_1 + 8 + lVar21) = uVar7;
          }
          if ((uVar14 & 1) != 0) {
            *(uint *)(param_1 + 0xc + lVar26) = uVar71;
          }
          if ((uVar14 & 2) != 0) {
            *(uint *)(param_1 + 0xc + lVar23) = uVar72;
          }
          if ((uVar14 & 4) != 0) {
            *(uint *)(param_1 + 0xc + lVar12) = uVar73;
          }
          if ((uVar14 & 8) != 0) {
            *(uint *)(param_1 + 0xc + lVar9) = uVar74;
          }
          if ((uVar14 & 0x10) != 0) {
            *(uint *)(param_1 + 0xc + lVar25) = uVar75;
          }
          if ((uVar14 & 0x20) != 0) {
            *(uint *)(param_1 + 0xc + lVar24) = uVar2;
          }
          if ((uVar14 & 0x40) != 0) {
            *(uint *)(param_1 + 0xc + lVar27) = uVar3;
          }
          if (cVar11 < '\0') {
            *(uint *)(param_1 + 0xc + lVar21) = uVar4;
          }
        }
      }
      uVar70 = uVar70 + 0x20;
      lVar13 = lVar13 + 0x18;
      uVar22 = uVar22 + 8;
    } while ((int)uVar22 < (int)(uVar8 & 0xfffffff8));
  }
  if ((int)uVar22 < (int)param_5) {
    auVar28 = vpshufd_avx(ZEXT416(uVar22),0);
    auVar56._16_16_ = auVar28;
    auVar56._0_16_ = auVar28;
    auVar56 = auVar56 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar6 = vpshufd_avx(ZEXT416(param_5),0);
    auVar53 = auVar56._0_16_;
    auVar28 = vpcmpgtd_avx(auVar6,auVar56._16_16_);
    auVar35 = vpcmpgtd_avx(auVar6,auVar53);
    auVar65._16_16_ = auVar28;
    auVar65._0_16_ = auVar35;
    auVar29 = vmaskmovps_avx(auVar65,*(undefined1 (*) [32])(param_2 + (int)(uVar22 << 2)));
    auVar100 = vpslld_avx(auVar29._0_16_,4);
    auVar46 = vpslld_avx(auVar29._16_16_,4);
    auVar5 = vpand_avx(auVar100,auVar35);
    auVar45 = vpand_avx(auVar28,auVar46);
    lVar13 = param_1 + auVar45._0_4_;
    iVar20 = auVar45._8_4_;
    iVar15 = auVar45._12_4_;
    uVar8 = auVar35._0_4_;
    uVar22 = auVar35._4_4_;
    uVar70 = auVar35._8_4_;
    uVar71 = auVar35._12_4_;
    uVar72 = auVar28._0_4_;
    uVar73 = auVar28._4_4_;
    uVar74 = auVar28._8_4_;
    uVar75 = auVar28._12_4_;
    lVar9 = param_1 + auVar5._0_4_;
    lVar12 = param_1 + auVar45._4_4_;
    auVar28 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar72 & _UNK_150b50d50) + lVar13)),
                            ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d54) + lVar12)),0x10);
    auVar35 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar72 & _UNK_150b50d70) + lVar13)),
                            ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d74) + lVar12)),0x10);
    auVar92 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar72 & _UNK_150b50d90) + lVar13)),
                            ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d94) + lVar12)),0x10);
    lVar13 = param_1 + iVar20;
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d58) + lVar13)
                                           ),0x20);
    auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d78) + lVar13)
                                           ),0x20);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d98) + lVar13)
                                           ),0x20);
    lVar13 = param_1 + iVar15;
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d5c) + lVar13)
                                           ),0x30);
    auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d7c) + lVar13)
                                           ),0x30);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d9c) + lVar13)
                                           ),0x30);
    lVar13 = param_1 + auVar5._4_4_;
    auVar47 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar8 & 
                                              ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50d44) + lVar13)),0x10);
    auVar95 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar8 & 
                                              ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50d64) + lVar13)),0x10);
    auVar97 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar8 & 
                                              ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50d84) + lVar13)),0x10);
    lVar13 = param_1 + auVar5._8_4_;
    auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50d48) + lVar13)
                                           ),0x20);
    auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50d68) + lVar13)
                                           ),0x20);
    auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50d88) + lVar13)
                                           ),0x20);
    lVar13 = param_1 + auVar5._12_4_;
    auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50d4c) + lVar13)
                                           ),0x30);
    auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50d6c) + lVar13)
                                           ),0x30);
    auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50d8c) + lVar13)
                                           ),0x30);
    auVar45 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar45._0_4_)),
                            ZEXT416(*(uint *)(param_1 + auVar45._4_4_)),0x10);
    auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(param_1 + iVar20)),0x20);
    auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(param_1 + iVar15)),0x30);
    auVar58 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar5._0_4_)),
                            ZEXT416(*(uint *)(param_1 + auVar5._4_4_)),0x10);
    auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + auVar5._8_4_)),0x20);
    auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + auVar5._12_4_)),0x30);
    auVar78._16_16_ = auVar45;
    auVar78._0_16_ = auVar58;
    auVar32._16_16_ = auVar28;
    auVar32._0_16_ = auVar47;
    auVar40._16_16_ = auVar35;
    auVar40._0_16_ = auVar95;
    auVar29 = vmaskmovps_avx(auVar65,auVar78);
    auVar93 = vmaskmovps_avx(auVar65,auVar32);
    auVar96 = vmaskmovps_avx(auVar65,auVar40);
    auVar33._16_16_ = auVar92;
    auVar33._0_16_ = auVar97;
    auVar98 = vcmpps_avx(auVar33,ZEXT832(0) << 0x20,8);
    auVar65 = auVar65 & auVar98;
    if ((((((((SUB321(auVar65 >> 0x1f,0) & 1) == 0 && (SUB321(auVar65 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar65 >> 0x5f,0) & 1) == 0) && SUB321(auVar65 >> 0x7f,0) == '\0') &&
          (SUB321(auVar65 >> 0x9f,0) & 1) == 0) && SUB321(auVar65 >> 0xbf,0) == '\0') &&
        (SUB321(auVar65 >> 0xdf,0) & 1) == 0) && -1 < auVar65[0x1f]) {
      uVar10 = (ulonglong)auVar56._0_4_;
      pauVar1 = (undefined1 (*) [32])(param_3 + uVar10 * 0xc);
      auVar47 = vpcmpgtd_avx(auVar6,auVar56._16_16_);
      auVar28 = vpcmpgtd_avx(auVar6,auVar53);
      auVar28 = vpand_avx(auVar28,auVar47);
      auVar35 = vpcmpeqd_avx(auVar58,auVar58);
      auVar35 = auVar35 & ~auVar28;
      uVar8 = auVar47._0_4_;
      uVar22 = auVar47._4_4_;
      uVar70 = auVar47._8_4_;
      uVar71 = auVar47._12_4_;
      if ((((SUB161(auVar35 >> 0x1f,0) & 1) == 0 && (SUB161(auVar35 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar35 >> 0x5f,0) & 1) == 0) && -1 < auVar35[0xf]) {
        auVar48 = pauVar1[2];
        auVar66._16_16_ = *(undefined1 (*) [16])*pauVar1;
        auVar66._0_16_ = *(undefined1 (*) [16])(*pauVar1 + 0x10);
        auVar98 = vblendps_avx(*pauVar1,auVar66,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar7 = *(undefined4 *)(pauVar1[1] + 4);
        auVar87._4_4_ = uVar7;
        auVar87._0_4_ = uVar7;
        auVar87._8_4_ = uVar7;
        auVar87._12_4_ = uVar7;
        uVar7 = *(undefined4 *)(pauVar1[1] + 8);
        auVar87._20_4_ = uVar7;
        auVar87._16_4_ = uVar7;
        auVar87._24_4_ = uVar7;
        auVar87._28_4_ = uVar7;
        auVar98 = vblendps_avx(auVar98,auVar87,0x88);
        auVar102._16_16_ = *(undefined1 (*) [16])pauVar1[2];
        auVar102._0_16_ = *(undefined1 (*) [16])(pauVar1[2] + 0x10);
        auVar101 = vblendps_avx(auVar102,auVar48,0x44);
        auVar101 = vpermilps_avx(auVar101,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        auVar28 = vshufps_avx(*(undefined1 (*) [16])(pauVar1[1] + 0x10),
                              *(undefined1 (*) [16])(pauVar1[1] + 0x10),0xec);
        uVar7 = *(undefined4 *)(pauVar1[1] + 0x14);
        auVar79._20_4_ = uVar7;
        auVar79._16_4_ = uVar7;
        auVar79._24_4_ = uVar7;
        auVar79._28_4_ = uVar7;
        auVar79._0_16_ = auVar28;
        auVar101 = vblendps_avx(auVar101,auVar79,0x13);
        local_240._16_16_ = auVar101._0_16_;
        local_240._0_16_ = auVar98._0_16_;
        local_260 = vperm2f128_avx(auVar98,auVar101,0x31);
        auVar98 = vblendps_avx(pauVar1[1],*pauVar1,0x24);
        auVar98 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar1 + 0x10)),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,pauVar1[1],0xc2);
        auVar101 = vshufps_avx(auVar102,auVar48,0xc4);
        auVar85 = vblendps_avx(auVar98,auVar101,0xe0);
        auVar28 = *(undefined1 (*) [16])(param_4 + uVar10 * 0xc);
        auVar35 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar10 * 0xc);
        auVar95 = *(undefined1 (*) [16])(param_4 + 0x30 + uVar10 * 0xc);
        auVar99._16_16_ = auVar35;
        auVar99._0_16_ = auVar28;
        auVar45 = *(undefined1 (*) [16])(param_4 + 0x50 + uVar10 * 0xc);
        auVar58 = *(undefined1 (*) [16])(param_4 + 0x40 + uVar10 * 0xc);
        auVar88._16_16_ = auVar28;
        auVar88._0_16_ = auVar35;
        auVar98 = vblendps_avx(auVar99,auVar88,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar7 = *(undefined4 *)(param_4 + 0x28 + uVar10 * 0xc);
        auVar51._20_4_ = uVar7;
        auVar51._16_4_ = uVar7;
        auVar51._24_4_ = uVar7;
        auVar51._28_4_ = uVar7;
        uVar7 = *(undefined4 *)(param_4 + 0x24 + uVar10 * 0xc);
        auVar51._4_4_ = uVar7;
        auVar51._0_4_ = uVar7;
        auVar51._8_4_ = uVar7;
        auVar51._12_4_ = uVar7;
        uVar7 = *(undefined4 *)(param_4 + 0x34 + uVar10 * 0xc);
        auVar80._20_4_ = uVar7;
        auVar80._16_4_ = uVar7;
        auVar80._24_4_ = uVar7;
        auVar80._28_4_ = uVar7;
        auVar94._16_16_ = auVar95;
        auVar94._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + uVar10 * 0xc);
        auVar67._16_16_ = auVar45;
        auVar67._0_16_ = auVar58;
        auVar98 = vblendps_avx(auVar98,auVar51,0x88);
        auVar41._16_16_ = auVar58;
        auVar41._0_16_ = auVar45;
        auVar101 = vblendps_avx(auVar41,auVar67,0x44);
        auVar101 = vpermilps_avx(auVar101,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        auVar28 = vshufps_avx(auVar95,auVar95,0xec);
        auVar80._0_16_ = auVar28;
        auVar101 = vblendps_avx(auVar101,auVar80,0x13);
        auVar86._16_16_ = auVar101._0_16_;
        auVar86._0_16_ = auVar98._0_16_;
        auVar90 = vperm2f128_avx(auVar98,auVar101,0x31);
        auVar98 = vblendps_avx(auVar94,auVar99,0x24);
        auVar98 = vshufps_avx(ZEXT1632(auVar35),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,auVar94,0xc2);
        auVar101 = vshufps_avx(auVar41,auVar67,0xc4);
        auVar91 = vblendps_avx(auVar98,auVar101,0xe0);
      }
      else {
        auVar28 = vpcmpgtd_avx(auVar6,auVar53);
        uVar72 = auVar28._0_4_;
        auVar35._0_4_ =
             uVar72 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
        uVar73 = auVar28._4_4_;
        auVar35._4_4_ = uVar73 & _UNK_150b50b04;
        uVar74 = auVar28._8_4_;
        auVar35._8_4_ = uVar74 & _UNK_150b50b08;
        uVar75 = auVar28._12_4_;
        auVar35._12_4_ = uVar75 & _UNK_150b50b0c;
        uVar7 = vextractps_avx(auVar35,1);
        lVar9 = CONCAT44((int)((ulonglong)param_3 >> 0x20),uVar7);
        uVar7 = vextractps_avx(auVar35,2);
        lVar12 = CONCAT44(iVar15 >> 0x1f,uVar7);
        uVar7 = vextractps_avx(auVar35,3);
        lVar21 = CONCAT44(iVar20 >> 0x1f,uVar7);
        auVar28 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar8 & _UNK_150b50b10))),
                                ZEXT416(*(uint *)(*pauVar1 + (uVar22 & _UNK_150b50b14))),0x10);
        auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(*pauVar1 + (uVar70 & _UNK_150b50b18))),
                                0x20);
        auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(*pauVar1 + (uVar71 & _UNK_150b50b1c))),
                                0x30);
        auVar35 = vinsertps_avx(ZEXT416(*(uint *)*pauVar1),ZEXT416(*(uint *)(*pauVar1 + lVar9)),0x10
                               );
        auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(*pauVar1 + lVar12)),0x20);
        auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(*pauVar1 + lVar21)),0x30);
        auVar95 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar8 & _UNK_150b50b30))),
                                ZEXT416(*(uint *)(*pauVar1 + (uVar22 & _UNK_150b50b34))),0x10);
        auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(*pauVar1 + (uVar70 & _UNK_150b50b38))),
                                0x20);
        auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(*pauVar1 + (uVar71 & _UNK_150b50b3c))),
                                0x30);
        auVar45 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 +
                                                 (uVar72 & 
                                                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                 ))),
                                ZEXT416(*(uint *)(*pauVar1 + (uVar73 & _UNK_150b50b24))),0x10);
        auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(*pauVar1 + (uVar74 & _UNK_150b50b28))),
                                0x20);
        auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(*pauVar1 + (uVar75 & _UNK_150b50b2c))),
                                0x30);
        auVar58 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar8 & _UNK_150b50b50))),
                                ZEXT416(*(uint *)(*pauVar1 + (uVar22 & _UNK_150b50b54))),0x10);
        auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(*pauVar1 + (uVar70 & _UNK_150b50b58))),
                                0x20);
        auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(*pauVar1 + (uVar71 & _UNK_150b50b5c))),
                                0x30);
        auVar5 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 +
                                                (uVar72 & 
                                                ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                ))),
                               ZEXT416(*(uint *)(*pauVar1 + (uVar73 & _UNK_150b50b44))),0x10);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(*pauVar1 + (uVar74 & _UNK_150b50b48))),0x20)
        ;
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(*pauVar1 + (uVar75 & _UNK_150b50b4c))),0x30)
        ;
        local_240._16_16_ = auVar28;
        local_240._0_16_ = auVar35;
        local_260._16_16_ = auVar95;
        local_260._0_16_ = auVar45;
        auVar85._16_16_ = auVar58;
        auVar85._0_16_ = auVar5;
        lVar13 = param_4 + uVar10 * 0xc;
        auVar28 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar8 & _UNK_150b50b10) + lVar13)),
                                ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50b14) + lVar13)),
                                0x10);
        auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50b18) +
                                                         lVar13)),0x20);
        auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50b1c) +
                                                         lVar13)),0x30);
        auVar35 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + uVar10 * 0xc)),
                                ZEXT416(*(uint *)(lVar9 + lVar13)),0x10);
        auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(lVar12 + lVar13)),0x20);
        auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(lVar21 + lVar13)),0x30);
        auVar95 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar8 & _UNK_150b50b30) + lVar13)),
                                ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50b34) + lVar13)),
                                0x10);
        auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50b38) +
                                                         lVar13)),0x20);
        auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50b3c) +
                                                         lVar13)),0x30);
        auVar45 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar72 & 
                                                  ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                  ) + lVar13)),
                                ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50b24) + lVar13)),
                                0x10);
        auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50b28) +
                                                         lVar13)),0x20);
        auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50b2c) +
                                                         lVar13)),0x30);
        auVar58 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar8 & _UNK_150b50b50) + lVar13)),
                                ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50b54) + lVar13)),
                                0x10);
        auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50b58) +
                                                         lVar13)),0x20);
        auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50b5c) +
                                                         lVar13)),0x30);
        auVar5 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                 (uVar72 & 
                                                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                 ) + lVar13)),
                               ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50b44) + lVar13)),
                               0x10);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50b48) +
                                                       lVar13)),0x20);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50b4c) +
                                                       lVar13)),0x30);
        auVar86._16_16_ = auVar28;
        auVar86._0_16_ = auVar35;
        auVar90._16_16_ = auVar95;
        auVar90._0_16_ = auVar45;
        auVar91._16_16_ = auVar58;
        auVar91._0_16_ = auVar5;
      }
      auVar98 = vsubps_avx(local_240,auVar29);
      auVar101 = vsubps_avx(local_260,auVar93);
      auVar48 = vsubps_avx(auVar85,auVar96);
      auVar68._0_4_ =
           auVar91._0_4_ * auVar48._0_4_ +
           auVar86._0_4_ * auVar98._0_4_ + auVar90._0_4_ * auVar101._0_4_;
      auVar68._4_4_ =
           auVar91._4_4_ * auVar48._4_4_ +
           auVar86._4_4_ * auVar98._4_4_ + auVar90._4_4_ * auVar101._4_4_;
      auVar68._8_4_ =
           auVar91._8_4_ * auVar48._8_4_ +
           auVar86._8_4_ * auVar98._8_4_ + auVar90._8_4_ * auVar101._8_4_;
      auVar68._12_4_ =
           auVar91._12_4_ * auVar48._12_4_ +
           auVar86._12_4_ * auVar98._12_4_ + auVar90._12_4_ * auVar101._12_4_;
      auVar68._16_4_ =
           auVar91._16_4_ * auVar48._16_4_ +
           auVar86._16_4_ * auVar98._16_4_ + auVar90._16_4_ * auVar101._16_4_;
      auVar68._20_4_ =
           auVar91._20_4_ * auVar48._20_4_ +
           auVar86._20_4_ * auVar98._20_4_ + auVar90._20_4_ * auVar101._20_4_;
      auVar68._24_4_ =
           auVar91._24_4_ * auVar48._24_4_ +
           auVar86._24_4_ * auVar98._24_4_ + auVar90._24_4_ * auVar101._24_4_;
      auVar68._28_4_ =
           auVar91._28_4_ * auVar48._28_4_ +
           auVar86._28_4_ * auVar98._28_4_ + auVar90._28_4_ * auVar101._28_4_;
      auVar98 = vcmpps_avx(auVar33,ZEXT432(0) << 0x20,4);
      auVar101 = vcmpps_avx(ZEXT432(0) << 0x20,auVar68,1);
      auVar81._0_4_ = auVar101._0_4_ & auVar98._0_4_;
      auVar81._4_4_ = auVar101._4_4_ & auVar98._4_4_;
      auVar81._8_4_ = auVar101._8_4_ & auVar98._8_4_;
      auVar81._12_4_ = auVar101._12_4_ & auVar98._12_4_;
      auVar81._16_4_ = auVar101._16_4_ & auVar98._16_4_;
      auVar81._20_4_ = auVar101._20_4_ & auVar98._20_4_;
      auVar81._24_4_ = auVar101._24_4_ & auVar98._24_4_;
      auVar81._28_4_ = auVar101._28_4_ & auVar98._28_4_;
      auVar28 = vpcmpgtd_avx(auVar6,auVar53);
      auVar42._0_4_ = auVar81._0_4_ & auVar28._0_4_;
      auVar42._4_4_ = auVar81._4_4_ & auVar28._4_4_;
      auVar42._8_4_ = auVar81._8_4_ & auVar28._8_4_;
      auVar42._12_4_ = auVar81._12_4_ & auVar28._12_4_;
      auVar42._16_4_ = auVar81._16_4_ & uVar8;
      auVar42._20_4_ = auVar81._20_4_ & uVar22;
      auVar42._24_4_ = auVar81._24_4_ & uVar70;
      auVar42._28_4_ = auVar81._28_4_ & uVar71;
      uVar8 = vmovmskps_avx(auVar42);
      if (uVar8 != 0) {
        auVar35 = vpand_avx(auVar81._16_16_,auVar47);
        auVar47._0_4_ = auVar81._0_4_ & auVar28._0_4_;
        auVar47._4_4_ = auVar81._4_4_ & auVar28._4_4_;
        auVar47._8_4_ = auVar81._8_4_ & auVar28._8_4_;
        auVar47._12_4_ = auVar81._12_4_ & auVar28._12_4_;
        auVar28 = vpackssdw_avx(auVar47,auVar35);
        auVar52._0_4_ = auVar29._0_4_ + auVar86._0_4_ * auVar68._0_4_;
        auVar52._4_4_ = auVar29._4_4_ + auVar86._4_4_ * auVar68._4_4_;
        auVar52._8_4_ = auVar29._8_4_ + auVar86._8_4_ * auVar68._8_4_;
        auVar52._12_4_ = auVar29._12_4_ + auVar86._12_4_ * auVar68._12_4_;
        auVar52._16_4_ = auVar29._16_4_ + auVar86._16_4_ * auVar68._16_4_;
        auVar52._20_4_ = auVar29._20_4_ + auVar86._20_4_ * auVar68._20_4_;
        auVar52._24_4_ = auVar29._24_4_ + auVar86._24_4_ * auVar68._24_4_;
        auVar52._28_4_ = auVar29._28_4_ + auVar86._28_4_ * auVar68._28_4_;
        auVar57._0_4_ = auVar93._0_4_ + auVar90._0_4_ * auVar68._0_4_;
        auVar57._4_4_ = auVar93._4_4_ + auVar90._4_4_ * auVar68._4_4_;
        auVar57._8_4_ = auVar93._8_4_ + auVar90._8_4_ * auVar68._8_4_;
        auVar57._12_4_ = auVar93._12_4_ + auVar90._12_4_ * auVar68._12_4_;
        auVar57._16_4_ = auVar93._16_4_ + auVar90._16_4_ * auVar68._16_4_;
        auVar57._20_4_ = auVar93._20_4_ + auVar90._20_4_ * auVar68._20_4_;
        auVar57._24_4_ = auVar93._24_4_ + auVar90._24_4_ * auVar68._24_4_;
        auVar57._28_4_ = auVar93._28_4_ + auVar90._28_4_ * auVar68._28_4_;
        auVar61._0_4_ = auVar96._0_4_ + auVar91._0_4_ * auVar68._0_4_;
        auVar61._4_4_ = auVar96._4_4_ + auVar91._4_4_ * auVar68._4_4_;
        auVar61._8_4_ = auVar96._8_4_ + auVar91._8_4_ * auVar68._8_4_;
        auVar61._12_4_ = auVar96._12_4_ + auVar91._12_4_ * auVar68._12_4_;
        auVar61._16_4_ = auVar96._16_4_ + auVar91._16_4_ * auVar68._16_4_;
        auVar61._20_4_ = auVar96._20_4_ + auVar91._20_4_ * auVar68._20_4_;
        auVar61._24_4_ = auVar96._24_4_ + auVar91._24_4_ * auVar68._24_4_;
        auVar61._28_4_ = auVar96._28_4_ + auVar91._28_4_ * auVar68._28_4_;
        auVar35 = vpmovsxwd_avx(auVar28);
        auVar28 = vpunpckhwd_avx(auVar28,auVar28);
        auVar43._16_16_ = auVar28;
        auVar43._0_16_ = auVar35;
        auVar29 = vmaskmovps_avx(auVar43,auVar52);
        auVar93 = vmaskmovps_avx(auVar43,auVar57);
        auVar96 = vmaskmovps_avx(auVar43,auVar61);
        cVar11 = (char)uVar8;
        iVar34 = auVar100._0_4_;
        auVar35 = auVar29._0_16_;
        auVar95 = auVar29._16_16_;
        iVar15 = auVar100._4_4_;
        iVar20 = auVar100._8_4_;
        iVar16 = auVar100._12_4_;
        auVar47 = auVar93._0_16_;
        auVar28 = auVar96._0_16_;
        auVar45 = auVar93._16_16_;
        auVar58 = auVar96._16_16_;
        iVar44 = auVar46._0_4_;
        iVar17 = auVar46._4_4_;
        iVar18 = auVar46._8_4_;
        iVar19 = auVar46._12_4_;
        if ((uVar8 & 1) != 0) {
          *(int *)(param_1 + iVar34) = auVar29._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar7 = vextractps_avx(auVar35,1);
          *(undefined4 *)(param_1 + iVar15) = uVar7;
        }
        if ((uVar8 & 4) != 0) {
          uVar7 = vextractps_avx(auVar35,2);
          *(undefined4 *)(param_1 + iVar20) = uVar7;
        }
        if ((uVar8 & 8) != 0) {
          uVar7 = vextractps_avx(auVar35,3);
          *(undefined4 *)(param_1 + iVar16) = uVar7;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(param_1 + iVar44) = auVar29._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar7 = vextractps_avx(auVar95,1);
          *(undefined4 *)(param_1 + iVar17) = uVar7;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar7 = vextractps_avx(auVar95,2);
          *(undefined4 *)(param_1 + iVar18) = uVar7;
        }
        if (cVar11 < '\0') {
          uVar7 = vextractps_avx(auVar95,3);
          *(undefined4 *)(param_1 + iVar19) = uVar7;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar34) = auVar93._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar7 = vextractps_avx(auVar47,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar7;
        }
        if ((uVar8 & 4) != 0) {
          uVar7 = vextractps_avx(auVar47,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar7;
        }
        if ((uVar8 & 8) != 0) {
          uVar7 = vextractps_avx(auVar47,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar44) = auVar93._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar7 = vextractps_avx(auVar45,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar7;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar7 = vextractps_avx(auVar45,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar7;
        }
        if (cVar11 < '\0') {
          uVar7 = vextractps_avx(auVar45,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar7;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar34) = auVar96._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar7 = vextractps_avx(auVar28,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar7;
        }
        if ((uVar8 & 4) != 0) {
          uVar7 = vextractps_avx(auVar28,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar7;
        }
        if ((uVar8 & 8) != 0) {
          uVar7 = vextractps_avx(auVar28,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar44) = auVar96._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar7 = vextractps_avx(auVar58,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar7;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar7 = vextractps_avx(auVar58,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar7;
        }
        if (cVar11 < '\0') {
          uVar7 = vextractps_avx(auVar58,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar7;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar34) = auVar97._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar7 = vextractps_avx(auVar97,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar7;
        }
        if ((uVar8 & 4) != 0) {
          uVar7 = vextractps_avx(auVar97,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar7;
        }
        if ((uVar8 & 8) != 0) {
          uVar7 = vextractps_avx(auVar97,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar44) = auVar92._0_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar7 = vextractps_avx(auVar92,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar7;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar7 = vextractps_avx(auVar92,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar7;
        }
        if (cVar11 < '\0') {
          uVar7 = vextractps_avx(auVar92,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar7;
        }
      }
    }
  }
  return;
}

// ApplyPBDPlanarConstraintsWithFriction_avx @ 1403093b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsWithFriction_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,uint param_8,uint param_9)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 (*pauVar4) [32];
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
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
  uint uVar57;
  undefined1 auVar58 [16];
  uint uVar73;
  uint uVar74;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  uint uVar75;
  uint uVar79;
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
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar90;
  float fVar91;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  float fVar92;
  float fVar96;
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [16];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar112 [16];
  uint uVar113;
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  float fVar121;
  float fVar122;
  float fVar132;
  float fVar134;
  float fVar136;
  float fVar138;
  float fVar140;
  float fVar142;
  undefined1 auVar123 [32];
  float fVar144;
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  float fVar133;
  float fVar135;
  float fVar137;
  float fVar139;
  float fVar141;
  float fVar143;
  float fVar145;
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  float fVar146;
  uint uVar147;
  float fVar156;
  float fVar159;
  float fVar162;
  float fVar164;
  float fVar165;
  float fVar166;
  undefined1 auVar148 [32];
  float fVar167;
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [32];
  uint uVar157;
  uint uVar158;
  uint uVar160;
  uint uVar161;
  uint uVar163;
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
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
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [64];
  int local_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  int local_2e0;
  int iStack_2dc;
  int iStack_2d8;
  int iStack_2d4;
  undefined1 local_2c0 [32];
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int local_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  undefined1 local_1a0 [96];
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 auVar35 [32];
  
  uVar30 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar30 = param_9;
  }
  if ((int)(uVar30 & 0xfffffff8) < 1) {
    uVar14 = 0;
  }
  else {
    auVar43 = vshufps_avx(ZEXT416(param_8),ZEXT416(param_8),0);
    auVar40 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    uVar14 = 0;
    auVar197 = ZEXT1264(ZEXT812(0));
    lVar29 = 0;
    uVar157 = 0;
    do {
      auVar32 = *(undefined1 (*) [16])(param_3 + (ulonglong)uVar157);
      auVar82 = *(undefined1 (*) [16])(param_3 + 0x10 + (ulonglong)uVar157);
      auVar31 = vpslld_avx(auVar82,4);
      auVar39 = vpslld_avx(auVar32,4);
      lVar27 = (longlong)auVar39._0_4_;
      lVar20 = (longlong)auVar39._4_4_;
      lVar9 = (longlong)auVar39._8_4_;
      lVar28 = (longlong)auVar39._12_4_;
      lVar13 = (longlong)auVar31._0_4_;
      lVar15 = (longlong)auVar31._4_4_;
      lVar24 = (longlong)auVar31._8_4_;
      lVar12 = (longlong)auVar31._12_4_;
      auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar13)),
                              ZEXT416(*(uint *)(param_1 + lVar15)),0x10);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar24)),0x20);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar12)),0x30);
      auVar39 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + lVar20)),0x10);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar9)),0x20);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar28)),0x30);
      auVar99._16_16_ = auVar31;
      auVar99._0_16_ = auVar39;
      auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar13)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar15)),0x10);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x20);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + 4 + lVar12)),0x30);
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar20)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + 4 + lVar9)),0x20);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x30);
      auVar42 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar13)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar15)),0x10);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x20);
      auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(param_1 + 8 + lVar12)),0x30);
      auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar20)),0x10);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_1 + 8 + lVar9)),0x20);
      auVar114._16_16_ = auVar97;
      auVar114._0_16_ = auVar41;
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x30);
      auVar189._16_16_ = auVar42;
      auVar189._0_16_ = auVar83;
      uVar160 = *(uint *)(param_1 + 0xc + lVar27);
      uVar147 = *(uint *)(param_1 + 0xc + lVar20);
      uVar158 = *(uint *)(param_1 + 0xc + lVar9);
      uVar161 = *(uint *)(param_1 + 0xc + lVar28);
      uVar163 = *(uint *)(param_1 + 0xc + lVar13);
      uVar113 = *(uint *)(param_1 + 0xc + lVar15);
      uVar5 = *(uint *)(param_1 + 0xc + lVar24);
      uVar6 = *(uint *)(param_1 + 0xc + lVar12);
      auVar58 = vinsertps_avx(ZEXT416(uVar163),ZEXT416(uVar113),0x10);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(uVar5),0x20);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(uVar6),0x30);
      auVar81 = vinsertps_avx(ZEXT416(uVar160),ZEXT416(uVar147),0x10);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(uVar158),0x20);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(uVar161),0x30);
      auVar191._16_16_ = auVar58;
      auVar191._0_16_ = auVar81;
      auVar84 = vcmpps_avx(auVar191,auVar197._0_32_,8);
      if ((((((((SUB321(auVar84 >> 0x1f,0) & 1) == 0 && (SUB321(auVar84 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar84 >> 0x5f,0) & 1) == 0) && SUB321(auVar84 >> 0x7f,0) == '\0') &&
            (SUB321(auVar84 >> 0x9f,0) & 1) == 0) && SUB321(auVar84 >> 0xbf,0) == '\0') &&
          (SUB321(auVar84 >> 0xdf,0) & 1) == 0) && -1 < auVar84[0x1f]) {
        auVar58 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar29);
        auVar81 = *(undefined1 (*) [16])(param_4 + 0x20 + lVar29);
        auVar98 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar29);
        auVar44._16_16_ = auVar58;
        auVar44._0_16_ = *(undefined1 (*) [16])(param_4 + lVar29);
        auVar171._16_16_ = auVar98;
        auVar171._0_16_ = auVar81;
        auVar103 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar29);
        auVar112 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar29);
        auVar179._16_16_ = auVar103;
        auVar179._0_16_ = auVar112;
        auVar84._16_16_ = *(undefined1 (*) [16])(param_4 + lVar29);
        auVar84._0_16_ = auVar58;
        auVar84 = vblendps_avx(auVar44,auVar84,0x24);
        auVar84 = vpermilps_avx(auVar84,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar11 = *(undefined4 *)(param_4 + 0x28 + lVar29);
        auVar59._20_4_ = uVar11;
        auVar59._16_4_ = uVar11;
        auVar59._24_4_ = uVar11;
        auVar59._28_4_ = uVar11;
        uVar11 = *(undefined4 *)(param_4 + 0x24 + lVar29);
        auVar59._4_4_ = uVar11;
        auVar59._0_4_ = uVar11;
        auVar59._8_4_ = uVar11;
        auVar59._12_4_ = uVar11;
        auVar84 = vblendps_avx(auVar84,auVar59,0x88);
        auVar85._16_16_ = auVar112;
        auVar85._0_16_ = auVar103;
        auVar33 = vblendps_avx(auVar85,auVar179,0x44);
        auVar33 = vpermilps_avx(auVar33,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        uVar11 = *(undefined4 *)(param_4 + 0x34 + lVar29);
        auVar148._20_4_ = uVar11;
        auVar148._16_4_ = uVar11;
        auVar148._24_4_ = uVar11;
        auVar148._28_4_ = uVar11;
        auVar98 = vshufps_avx(auVar98,auVar98,0xec);
        auVar148._0_16_ = auVar98;
        auVar33 = vblendps_avx(auVar33,auVar148,0x13);
        auVar104._16_16_ = auVar33._0_16_;
        auVar104._0_16_ = auVar84._0_16_;
        auVar59 = vperm2f128_avx(auVar84,auVar33,0x31);
        auVar84 = vblendps_avx(auVar171,auVar44,0x24);
        auVar33._16_16_ = auVar81;
        auVar33._0_16_ = auVar58;
        auVar84 = vshufps_avx(auVar33,auVar84,0x21);
        auVar84 = vshufps_avx(auVar84,auVar171,0xc2);
        auVar33 = vshufps_avx(auVar85,auVar179,0xc4);
        auVar84 = vblendps_avx(auVar84,auVar33,0xe0);
        auVar58 = *(undefined1 (*) [16])(param_5 + 0x10 + lVar29);
        auVar81 = *(undefined1 (*) [16])(param_5 + 0x20 + lVar29);
        auVar98 = *(undefined1 (*) [16])(param_5 + 0x30 + lVar29);
        auVar172._16_16_ = auVar58;
        auVar172._0_16_ = *(undefined1 (*) [16])(param_5 + lVar29);
        auVar180._16_16_ = auVar98;
        auVar180._0_16_ = auVar81;
        auVar103 = *(undefined1 (*) [16])(param_5 + 0x50 + lVar29);
        auVar112 = *(undefined1 (*) [16])(param_5 + 0x40 + lVar29);
        auVar105._16_16_ = auVar103;
        auVar105._0_16_ = auVar112;
        auVar45._16_16_ = *(undefined1 (*) [16])(param_5 + lVar29);
        auVar45._0_16_ = auVar58;
        auVar33 = vblendps_avx(auVar172,auVar45,0x24);
        auVar33 = vpermilps_avx(auVar33,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar11 = *(undefined4 *)(param_5 + 0x28 + lVar29);
        auVar34._20_4_ = uVar11;
        auVar34._16_4_ = uVar11;
        auVar34._24_4_ = uVar11;
        auVar34._28_4_ = uVar11;
        uVar11 = *(undefined4 *)(param_5 + 0x24 + lVar29);
        auVar34._4_4_ = uVar11;
        auVar34._0_4_ = uVar11;
        auVar34._8_4_ = uVar11;
        auVar34._12_4_ = uVar11;
        auVar197 = ZEXT464(0) << 0x20;
        auVar33 = vblendps_avx(auVar33,auVar34,0x88);
        auVar46._16_16_ = auVar112;
        auVar46._0_16_ = auVar103;
        auVar34 = vblendps_avx(auVar46,auVar105,0x44);
        auVar34 = vpermilps_avx(auVar34,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        uVar11 = *(undefined4 *)(param_5 + 0x34 + lVar29);
        auVar123._20_4_ = uVar11;
        auVar123._16_4_ = uVar11;
        auVar123._24_4_ = uVar11;
        auVar123._28_4_ = uVar11;
        auVar98 = vshufps_avx(auVar98,auVar98,0xec);
        auVar123._0_16_ = auVar98;
        auVar34 = vblendps_avx(auVar34,auVar123,0x13);
        auVar45 = vperm2f128_avx(auVar33,auVar34,0x31);
        auVar35 = vblendps_avx(auVar180,auVar172,0x24);
        local_260 = auVar32._0_4_;
        iStack_25c = auVar32._4_4_;
        iStack_258 = auVar32._8_4_;
        iStack_254 = auVar32._12_4_;
        auVar60._16_16_ = auVar81;
        auVar60._0_16_ = auVar58;
        auVar35 = vshufps_avx(auVar60,auVar35,0x21);
        auVar35 = vshufps_avx(auVar35,auVar180,0xc2);
        local_380 = auVar82._0_4_;
        iStack_37c = auVar82._4_4_;
        iStack_378 = auVar82._8_4_;
        iStack_374 = auVar82._12_4_;
        auVar44 = vshufps_avx(auVar46,auVar105,0xc4);
        auVar35 = vblendps_avx(auVar35,auVar44,0xe0);
        auVar99 = vsubps_avx(auVar104,auVar99);
        auVar114 = vsubps_avx(auVar59,auVar114);
        auVar84 = vsubps_avx(auVar84,auVar189);
        fVar121 = auVar33._0_4_;
        fVar132 = auVar33._4_4_;
        fVar134 = auVar33._8_4_;
        fVar136 = auVar33._12_4_;
        fVar138 = auVar34._0_4_;
        fVar140 = auVar34._4_4_;
        fVar142 = auVar34._8_4_;
        fVar144 = auVar34._12_4_;
        fVar146 = auVar45._0_4_;
        fVar156 = auVar45._4_4_;
        fVar159 = auVar45._8_4_;
        fVar162 = auVar45._12_4_;
        fVar164 = auVar45._16_4_;
        fVar165 = auVar45._20_4_;
        fVar166 = auVar45._24_4_;
        fVar167 = auVar45._28_4_;
        fVar80 = auVar35._0_4_;
        fVar90 = auVar35._4_4_;
        fVar91 = auVar35._8_4_;
        fVar92 = auVar35._12_4_;
        fVar93 = auVar35._16_4_;
        fVar94 = auVar35._20_4_;
        fVar95 = auVar35._24_4_;
        fVar96 = auVar35._28_4_;
        auVar168._0_4_ = fVar80 * auVar84._0_4_ + fVar121 * auVar99._0_4_ + fVar146 * auVar114._0_4_
        ;
        auVar168._4_4_ = fVar90 * auVar84._4_4_ + fVar132 * auVar99._4_4_ + fVar156 * auVar114._4_4_
        ;
        auVar168._8_4_ = fVar91 * auVar84._8_4_ + fVar134 * auVar99._8_4_ + fVar159 * auVar114._8_4_
        ;
        auVar168._12_4_ =
             fVar92 * auVar84._12_4_ + fVar136 * auVar99._12_4_ + fVar162 * auVar114._12_4_;
        auVar168._16_4_ =
             fVar93 * auVar84._16_4_ + fVar138 * auVar99._16_4_ + fVar164 * auVar114._16_4_;
        auVar168._20_4_ =
             fVar94 * auVar84._20_4_ + fVar140 * auVar99._20_4_ + fVar165 * auVar114._20_4_;
        auVar168._24_4_ =
             fVar95 * auVar84._24_4_ + fVar142 * auVar99._24_4_ + fVar166 * auVar114._24_4_;
        auVar168._28_4_ =
             fVar96 * auVar84._28_4_ + fVar144 * auVar99._28_4_ + fVar167 * auVar114._28_4_;
        auVar84 = vcmpps_avx(ZEXT432(0) << 0x20,auVar168,1);
        auVar99 = vcmpps_avx(auVar191,ZEXT432(0) << 0x20,4);
        auVar32._0_4_ = auVar84._0_4_ & auVar99._0_4_;
        auVar32._4_4_ = auVar84._4_4_ & auVar99._4_4_;
        auVar32._8_4_ = auVar84._8_4_ & auVar99._8_4_;
        auVar32._12_4_ = auVar84._12_4_ & auVar99._12_4_;
        auVar35._16_4_ = auVar84._16_4_ & auVar99._16_4_;
        auVar35._0_16_ = auVar32;
        auVar35._20_4_ = auVar84._20_4_ & auVar99._20_4_;
        auVar35._24_4_ = auVar84._24_4_ & auVar99._24_4_;
        auVar35._28_4_ = auVar84._28_4_ & auVar99._28_4_;
        uVar8 = vmovmskps_avx(auVar35);
        if (uVar8 != 0) {
          auVar32 = vpackssdw_avx(auVar32,auVar35._16_16_);
          auVar47._0_4_ = auVar39._0_4_ + auVar168._0_4_ * fVar121;
          auVar47._4_4_ = auVar39._4_4_ + auVar168._4_4_ * fVar132;
          auVar47._8_4_ = auVar39._8_4_ + auVar168._8_4_ * fVar134;
          auVar47._12_4_ = auVar39._12_4_ + auVar168._12_4_ * fVar136;
          auVar47._16_4_ = auVar31._0_4_ + auVar168._16_4_ * fVar138;
          auVar47._20_4_ = auVar31._4_4_ + auVar168._20_4_ * fVar140;
          auVar47._24_4_ = auVar31._8_4_ + auVar168._24_4_ * fVar142;
          auVar47._28_4_ = auVar31._12_4_ + auVar168._28_4_ * fVar144;
          auVar61._0_4_ = auVar41._0_4_ + fVar146 * auVar168._0_4_;
          auVar61._4_4_ = auVar41._4_4_ + fVar156 * auVar168._4_4_;
          auVar61._8_4_ = auVar41._8_4_ + fVar159 * auVar168._8_4_;
          auVar61._12_4_ = auVar41._12_4_ + fVar162 * auVar168._12_4_;
          auVar61._16_4_ = auVar97._0_4_ + fVar164 * auVar168._16_4_;
          auVar61._20_4_ = auVar97._4_4_ + fVar165 * auVar168._20_4_;
          auVar61._24_4_ = auVar97._8_4_ + fVar166 * auVar168._24_4_;
          auVar61._28_4_ = auVar97._12_4_ + fVar167 * auVar168._28_4_;
          auVar106._0_4_ = auVar83._0_4_ + auVar168._0_4_ * fVar80;
          auVar106._4_4_ = auVar83._4_4_ + auVar168._4_4_ * fVar90;
          auVar106._8_4_ = auVar83._8_4_ + auVar168._8_4_ * fVar91;
          auVar106._12_4_ = auVar83._12_4_ + auVar168._12_4_ * fVar92;
          auVar106._16_4_ = auVar42._0_4_ + auVar168._16_4_ * fVar93;
          auVar106._20_4_ = auVar42._4_4_ + auVar168._20_4_ * fVar94;
          auVar106._24_4_ = auVar42._8_4_ + auVar168._24_4_ * fVar95;
          auVar106._28_4_ = auVar42._12_4_ + auVar168._28_4_ * fVar96;
          auVar82 = vpmovsxwd_avx(auVar32);
          auVar32 = vpunpckhwd_avx(auVar32,auVar32);
          auVar36._16_16_ = auVar32;
          auVar36._0_16_ = auVar82;
          auVar84 = vmaskmovps_avx(auVar36,auVar47);
          auVar99 = vmaskmovps_avx(auVar36,auVar61);
          auVar114 = vmaskmovps_avx(auVar36,auVar106);
          cVar7 = (char)uVar8;
          uVar57 = auVar82._0_4_;
          uVar73 = auVar82._4_4_;
          uVar74 = auVar82._8_4_;
          uVar75 = auVar82._12_4_;
          uVar76 = auVar32._0_4_;
          uVar77 = auVar32._4_4_;
          uVar78 = auVar32._8_4_;
          uVar79 = auVar32._12_4_;
          if (cVar7 == -1) {
            auVar31 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar29);
            auVar39 = *(undefined1 (*) [16])(param_6 + 0x30 + lVar29);
            auVar182._16_16_ = auVar31;
            auVar182._0_16_ = *(undefined1 (*) [16])(param_6 + lVar29);
            auVar63._16_16_ = auVar39;
            auVar63._0_16_ = *(undefined1 (*) [16])(param_6 + 0x20 + lVar29);
            auVar97 = *(undefined1 (*) [16])(param_6 + 0x50 + lVar29);
            auVar41 = *(undefined1 (*) [16])(param_6 + 0x40 + lVar29);
            auVar192._16_16_ = auVar97;
            auVar192._0_16_ = auVar41;
            auVar48._16_16_ = *(undefined1 (*) [16])(param_6 + lVar29);
            auVar48._0_16_ = auVar31;
            auVar189 = vblendps_avx(auVar182,auVar48,0x24);
            auVar189 = vpermilps_avx(auVar189,
                                     ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                    );
            uVar11 = *(undefined4 *)(param_6 + 0x28 + lVar29);
            auVar124._20_4_ = uVar11;
            auVar124._16_4_ = uVar11;
            auVar124._24_4_ = uVar11;
            auVar124._28_4_ = uVar11;
            uVar11 = *(undefined4 *)(param_6 + 0x24 + lVar29);
            auVar124._4_4_ = uVar11;
            auVar124._0_4_ = uVar11;
            auVar124._8_4_ = uVar11;
            auVar124._12_4_ = uVar11;
            auVar197 = ZEXT464(0) << 0x20;
            auVar189 = vblendps_avx(auVar189,auVar124,0x88);
            auVar125._16_16_ = auVar41;
            auVar125._0_16_ = auVar97;
            auVar191 = vblendps_avx(auVar125,auVar192,0x44);
            auVar191 = vpermilps_avx(auVar191,
                                     ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                    );
            uVar11 = *(undefined4 *)(param_6 + 0x34 + lVar29);
            auVar174._20_4_ = uVar11;
            auVar174._16_4_ = uVar11;
            auVar174._24_4_ = uVar11;
            auVar174._28_4_ = uVar11;
            auVar39 = vshufps_avx(auVar39,auVar39,0xec);
            auVar174._0_16_ = auVar39;
            auVar191 = vblendps_avx(auVar191,auVar174,0x13);
            auVar173._16_16_ = auVar191._0_16_;
            auVar173._0_16_ = auVar189._0_16_;
            auVar181 = vperm2f128_avx(auVar189,auVar191,0x31);
            auVar189 = vblendps_avx(auVar63,auVar182,0x24);
            auVar189 = vshufps_avx(ZEXT1632(auVar31),auVar189,0x21);
            auVar189 = vshufps_avx(auVar189,auVar63,0xc2);
            auVar191 = vshufps_avx(auVar125,auVar192,0xc4);
            auVar62 = vblendps_avx(auVar189,auVar191,0xe0);
          }
          else {
            auVar31._0_4_ =
                 uVar57 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
            auVar31._4_4_ = uVar73 & _UNK_150b50b04;
            auVar31._8_4_ = uVar74 & _UNK_150b50b08;
            auVar31._12_4_ = uVar75 & _UNK_150b50b0c;
            uVar11 = vextractps_avx(auVar31,1);
            uVar16 = vextractps_avx(auVar31,2);
            uVar17 = vextractps_avx(auVar31,3);
            auVar31 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar76 & _UNK_150b50b10)
                                                               + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar77 & _UNK_150b50b14)
                                                               + param_6)),0x10);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar78 & _UNK_150b50b18) +
                                                                       param_6)),0x20);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar79 & _UNK_150b50b1c) +
                                                                       param_6)),0x30);
            auVar39 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + CONCAT44((int)((ulonglong)local_1a0
                                                                             >> 0x20),uVar11) +
                                                               param_6)),0x10);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + CONCAT44((int)((ulonglong)
                                                                                      param_3 >>
                                                                                     0x20),uVar16) +
                                                                       param_6)),0x20);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)uVar17 + param_6))
                                    ,0x30);
            auVar173._16_16_ = auVar31;
            auVar173._0_16_ = auVar39;
            auVar31 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar76 & _UNK_150b50b30)
                                                               + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar77 & _UNK_150b50b34)
                                                               + param_6)),0x10);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar78 & _UNK_150b50b38) +
                                                                       param_6)),0x20);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar79 & _UNK_150b50b3c) +
                                                                       param_6)),0x30);
            auVar39 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                               (uVar57 & 
                                                  ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                  ) + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar73 & _UNK_150b50b24)
                                                               + param_6)),0x10);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar74 & _UNK_150b50b28) +
                                                                       param_6)),0x20);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar75 & _UNK_150b50b2c) +
                                                                       param_6)),0x30);
            auVar181._16_16_ = auVar31;
            auVar181._0_16_ = auVar39;
            auVar31 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar76 & _UNK_150b50b50)
                                                               + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar77 & _UNK_150b50b54)
                                                               + param_6)),0x10);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar78 & _UNK_150b50b58) +
                                                                       param_6)),0x20);
            auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar79 & _UNK_150b50b5c) +
                                                                       param_6)),0x30);
            auVar39 = vinsertps_avx(ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                               (uVar57 & 
                                                  ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                  ) + param_6)),
                                    ZEXT416(*(uint *)(lVar29 + (ulonglong)(uVar73 & _UNK_150b50b44)
                                                               + param_6)),0x10);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar74 & _UNK_150b50b48) +
                                                                       param_6)),0x20);
            auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(lVar29 + (ulonglong)
                                                                       (uVar75 & _UNK_150b50b4c) +
                                                                       param_6)),0x30);
            auVar62._16_16_ = auVar31;
            auVar62._0_16_ = auVar39;
          }
          auVar39._4_4_ = iStack_37c * 3;
          auVar39._0_4_ = local_380 * 3;
          auVar39._8_4_ = iStack_378 * 3;
          auVar39._12_4_ = iStack_374 * 3;
          auVar97._4_4_ = iStack_25c * 3;
          auVar97._0_4_ = local_260 * 3;
          auVar97._8_4_ = iStack_258 * 3;
          auVar97._12_4_ = iStack_254 * 3;
          auVar107._16_16_ = auVar32;
          auVar107._0_16_ = auVar82;
          auVar42 = vpand_avx(auVar82,auVar97);
          auVar41 = vpand_avx(auVar32,auVar39);
          lVar1 = param_2 + (longlong)auVar41._0_4_ * 4;
          lVar2 = param_2 + (longlong)auVar42._0_4_ * 4;
          lVar3 = param_2 + (longlong)auVar41._4_4_ * 4;
          auVar32 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar76 & _UNK_150b50d50) + lVar1)),
                                  ZEXT416(*(uint *)((ulonglong)(uVar77 & _UNK_150b50d54) + lVar3)),
                                  0x10);
          auVar82 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar76 & _UNK_150b50d70) + lVar1)),
                                  ZEXT416(*(uint *)((ulonglong)(uVar77 & _UNK_150b50d74) + lVar3)),
                                  0x10);
          lVar1 = param_2 + (longlong)auVar41._8_4_ * 4;
          auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d58) +
                                                           lVar1)),0x20);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)(uVar78 & _UNK_150b50d78) +
                                                           lVar1)),0x20);
          lVar1 = param_2 + (longlong)auVar41._12_4_ * 4;
          auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d5c) +
                                                           lVar1)),0x30);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)(uVar79 & _UNK_150b50d7c) +
                                                           lVar1)),0x30);
          lVar1 = param_2 + (longlong)auVar42._4_4_ * 4;
          auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                    (uVar57 & 
                                                  ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                                  ) + lVar2)),
                                  ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d44) + lVar1)),
                                  0x10);
          auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                    (uVar57 & 
                                                  ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                                  ) + lVar2)),
                                  ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d64) + lVar1)),
                                  0x10);
          lVar1 = param_2 + (longlong)auVar42._8_4_ * 4;
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d48) +
                                                           lVar1)),0x20);
          auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d68) +
                                                           lVar1)),0x20);
          auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar41._0_4_ * 4)),
                                  ZEXT416(*(uint *)(param_2 + (longlong)auVar41._4_4_ * 4)),0x10);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_2 + (longlong)auVar41._8_4_ * 4)),
                                  0x20);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_2 + (longlong)auVar41._12_4_ * 4))
                                  ,0x30);
          auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar42._0_4_ * 4)),
                                  ZEXT416(*(uint *)(param_2 + (longlong)auVar42._4_4_ * 4)),0x10);
          auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + (longlong)auVar42._8_4_ * 4)),
                                  0x20);
          auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + (longlong)auVar42._12_4_ * 4))
                                  ,0x30);
          auVar115._16_16_ = auVar97;
          auVar115._0_16_ = auVar41;
          lVar1 = param_2 + (longlong)auVar42._12_4_ * 4;
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d4c) +
                                                           lVar1)),0x30);
          auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d6c) +
                                                           lVar1)),0x30);
          auVar49._16_16_ = auVar32;
          auVar49._0_16_ = auVar31;
          auVar126._16_16_ = auVar82;
          auVar126._0_16_ = auVar39;
          auVar189 = vsubps_avx(auVar84,auVar115);
          local_120 = auVar43._0_4_;
          fStack_11c = auVar43._4_4_;
          fStack_118 = auVar43._8_4_;
          fStack_114 = auVar43._12_4_;
          auVar175._0_4_ = local_120 * auVar173._0_4_;
          auVar175._4_4_ = fStack_11c * auVar173._4_4_;
          auVar175._8_4_ = fStack_118 * auVar173._8_4_;
          auVar175._12_4_ = fStack_114 * auVar173._12_4_;
          auVar175._16_4_ = local_120 * auVar173._16_4_;
          auVar175._20_4_ = fStack_11c * auVar173._20_4_;
          auVar175._24_4_ = fStack_118 * auVar173._24_4_;
          auVar175._28_4_ = fStack_114 * auVar173._28_4_;
          auVar189 = vsubps_avx(auVar189,auVar175);
          auVar191 = vsubps_avx(auVar99,auVar49);
          auVar33 = vsubps_avx(auVar114,auVar126);
          auVar183._0_4_ = local_120 * auVar181._0_4_;
          auVar183._4_4_ = fStack_11c * auVar181._4_4_;
          auVar183._8_4_ = fStack_118 * auVar181._8_4_;
          auVar183._12_4_ = fStack_114 * auVar181._12_4_;
          auVar183._16_4_ = local_120 * auVar181._16_4_;
          auVar183._20_4_ = fStack_11c * auVar181._20_4_;
          auVar183._24_4_ = fStack_118 * auVar181._24_4_;
          auVar183._28_4_ = fStack_114 * auVar181._28_4_;
          auVar191 = vsubps_avx(auVar191,auVar183);
          auVar64._0_4_ = local_120 * auVar62._0_4_;
          auVar64._4_4_ = fStack_11c * auVar62._4_4_;
          auVar64._8_4_ = fStack_118 * auVar62._8_4_;
          auVar64._12_4_ = fStack_114 * auVar62._12_4_;
          auVar64._16_4_ = local_120 * auVar62._16_4_;
          auVar64._20_4_ = fStack_11c * auVar62._20_4_;
          auVar64._24_4_ = fStack_118 * auVar62._24_4_;
          auVar64._28_4_ = fStack_114 * auVar62._28_4_;
          auVar33 = vsubps_avx(auVar33,auVar64);
          fVar122 = fVar80 * auVar33._0_4_ + fVar146 * auVar191._0_4_ + fVar121 * auVar189._0_4_;
          fVar133 = fVar90 * auVar33._4_4_ + fVar156 * auVar191._4_4_ + fVar132 * auVar189._4_4_;
          fVar135 = fVar91 * auVar33._8_4_ + fVar159 * auVar191._8_4_ + fVar134 * auVar189._8_4_;
          fVar137 = fVar92 * auVar33._12_4_ + fVar162 * auVar191._12_4_ + fVar136 * auVar189._12_4_;
          fVar139 = fVar93 * auVar33._16_4_ + fVar164 * auVar191._16_4_ + fVar138 * auVar189._16_4_;
          fVar141 = fVar94 * auVar33._20_4_ + fVar165 * auVar191._20_4_ + fVar140 * auVar189._20_4_;
          fVar143 = fVar95 * auVar33._24_4_ + fVar166 * auVar191._24_4_ + fVar142 * auVar189._24_4_;
          fVar145 = fVar96 * auVar33._28_4_ + fVar167 * auVar191._28_4_ + fVar144 * auVar189._28_4_;
          auVar184._0_4_ = fVar121 * fVar122;
          auVar184._4_4_ = fVar132 * fVar133;
          auVar184._8_4_ = fVar134 * fVar135;
          auVar184._12_4_ = fVar136 * fVar137;
          auVar184._16_4_ = fVar138 * fVar139;
          auVar184._20_4_ = fVar140 * fVar141;
          auVar184._24_4_ = fVar142 * fVar143;
          auVar184._28_4_ = fVar144 * fVar145;
          auVar149._0_4_ = fVar146 * fVar122;
          auVar149._4_4_ = fVar156 * fVar133;
          auVar149._8_4_ = fVar159 * fVar135;
          auVar149._12_4_ = fVar162 * fVar137;
          auVar149._16_4_ = fVar164 * fVar139;
          auVar149._20_4_ = fVar165 * fVar141;
          auVar149._24_4_ = fVar166 * fVar143;
          auVar149._28_4_ = fVar167 * fVar145;
          auVar86._0_4_ = fVar80 * fVar122;
          auVar86._4_4_ = fVar90 * fVar133;
          auVar86._8_4_ = fVar91 * fVar135;
          auVar86._12_4_ = fVar92 * fVar137;
          auVar86._16_4_ = fVar93 * fVar139;
          auVar86._20_4_ = fVar94 * fVar141;
          auVar86._24_4_ = fVar95 * fVar143;
          auVar86._28_4_ = fVar96 * fVar145;
          auVar189 = vsubps_avx(auVar189,auVar184);
          auVar191 = vsubps_avx(auVar191,auVar149);
          auVar33 = vsubps_avx(auVar33,auVar86);
          fVar80 = auVar189._0_4_;
          fVar92 = auVar189._4_4_;
          fVar95 = auVar189._8_4_;
          fVar132 = auVar189._12_4_;
          fVar138 = auVar189._16_4_;
          fVar144 = auVar189._20_4_;
          fVar159 = auVar189._24_4_;
          fVar165 = auVar189._28_4_;
          fVar90 = auVar191._0_4_;
          fVar93 = auVar191._4_4_;
          fVar96 = auVar191._8_4_;
          fVar134 = auVar191._12_4_;
          fVar140 = auVar191._16_4_;
          fVar146 = auVar191._20_4_;
          fVar162 = auVar191._24_4_;
          fVar166 = auVar191._28_4_;
          fVar91 = auVar33._0_4_;
          fVar94 = auVar33._4_4_;
          fVar121 = auVar33._8_4_;
          fVar136 = auVar33._12_4_;
          fVar142 = auVar33._16_4_;
          fVar156 = auVar33._20_4_;
          fVar164 = auVar33._24_4_;
          fVar167 = auVar33._28_4_;
          auVar87._0_4_ = fVar91 * fVar91 + fVar90 * fVar90 + fVar80 * fVar80;
          auVar87._4_4_ = fVar94 * fVar94 + fVar93 * fVar93 + fVar92 * fVar92;
          auVar87._8_4_ = fVar121 * fVar121 + fVar96 * fVar96 + fVar95 * fVar95;
          auVar87._12_4_ = fVar136 * fVar136 + fVar134 * fVar134 + fVar132 * fVar132;
          auVar87._16_4_ = fVar142 * fVar142 + fVar140 * fVar140 + fVar138 * fVar138;
          auVar87._20_4_ = fVar156 * fVar156 + fVar146 * fVar146 + fVar144 * fVar144;
          auVar87._24_4_ = fVar164 * fVar164 + fVar162 * fVar162 + fVar159 * fVar159;
          auVar87._28_4_ = fVar167 * fVar167 + fVar166 * fVar166 + fVar165 * fVar165;
          auVar33 = vsqrtps_avx(auVar87);
          local_140 = auVar40._0_4_;
          fStack_13c = auVar40._4_4_;
          fStack_138 = auVar40._8_4_;
          fStack_134 = auVar40._12_4_;
          auVar150._0_4_ = auVar168._0_4_ * local_140;
          auVar150._4_4_ = auVar168._4_4_ * fStack_13c;
          auVar150._8_4_ = auVar168._8_4_ * fStack_138;
          auVar150._12_4_ = auVar168._12_4_ * fStack_134;
          auVar150._16_4_ = auVar168._16_4_ * local_140;
          auVar150._20_4_ = auVar168._20_4_ * fStack_13c;
          auVar150._24_4_ = auVar168._24_4_ * fStack_138;
          auVar150._28_4_ = auVar168._28_4_ * fStack_134;
          auVar189 = vminps_avx(auVar150,auVar33);
          auVar191 = vdivps_avx(auVar189,auVar33);
          auVar189 = vcmpps_avx(auVar33,
                                ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77
                                ,5);
          fVar122 = (float)(auVar191._0_4_ & auVar189._0_4_);
          fVar133 = (float)(auVar191._4_4_ & auVar189._4_4_);
          fVar135 = (float)(auVar191._8_4_ & auVar189._8_4_);
          fVar137 = (float)(auVar191._12_4_ & auVar189._12_4_);
          fVar139 = (float)(auVar191._16_4_ & auVar189._16_4_);
          fVar141 = (float)(auVar191._20_4_ & auVar189._20_4_);
          fVar143 = (float)(auVar191._24_4_ & auVar189._24_4_);
          fVar145 = (float)(auVar191._28_4_ & auVar189._28_4_);
          auVar127._0_4_ = fVar80 * fVar122;
          auVar127._4_4_ = fVar92 * fVar133;
          auVar127._8_4_ = fVar95 * fVar135;
          auVar127._12_4_ = fVar132 * fVar137;
          auVar127._16_4_ = fVar138 * fVar139;
          auVar127._20_4_ = fVar144 * fVar141;
          auVar127._24_4_ = fVar159 * fVar143;
          auVar127._28_4_ = fVar165 * fVar145;
          auVar50._0_4_ = fVar90 * fVar122;
          auVar50._4_4_ = fVar93 * fVar133;
          auVar50._8_4_ = fVar96 * fVar135;
          auVar50._12_4_ = fVar134 * fVar137;
          auVar50._16_4_ = fVar140 * fVar139;
          auVar50._20_4_ = fVar146 * fVar141;
          auVar50._24_4_ = fVar162 * fVar143;
          auVar50._28_4_ = fVar166 * fVar145;
          auVar65._0_4_ = fVar91 * fVar122;
          auVar65._4_4_ = fVar94 * fVar133;
          auVar65._8_4_ = fVar121 * fVar135;
          auVar65._12_4_ = fVar136 * fVar137;
          auVar65._16_4_ = fVar142 * fVar139;
          auVar65._20_4_ = fVar156 * fVar141;
          auVar65._24_4_ = fVar164 * fVar143;
          auVar65._28_4_ = fVar167 * fVar145;
          auVar84 = vsubps_avx(auVar84,auVar127);
          auVar99 = vsubps_avx(auVar99,auVar50);
          auVar114 = vsubps_avx(auVar114,auVar65);
          auVar84 = vmaskmovps_avx(auVar107,auVar84);
          auVar99 = vmaskmovps_avx(auVar107,auVar99);
          auVar114 = vmaskmovps_avx(auVar107,auVar114);
          if ((uVar8 & 1) != 0) {
            *(int *)(param_1 + lVar27) = auVar84._0_4_;
          }
          auVar97 = auVar84._0_16_;
          auVar41 = auVar84._16_16_;
          auVar31 = auVar99._0_16_;
          auVar39 = auVar99._16_16_;
          auVar32 = auVar114._0_16_;
          auVar82 = auVar114._16_16_;
          if ((uVar8 & 2) != 0) {
            uVar11 = vextractps_avx(auVar97,1);
            *(undefined4 *)(param_1 + lVar20) = uVar11;
          }
          if ((uVar8 & 4) != 0) {
            uVar11 = vextractps_avx(auVar97,2);
            *(undefined4 *)(param_1 + lVar9) = uVar11;
          }
          if ((uVar8 & 8) != 0) {
            uVar11 = vextractps_avx(auVar97,3);
            *(undefined4 *)(param_1 + lVar28) = uVar11;
          }
          if ((uVar8 & 0x10) != 0) {
            *(int *)(param_1 + lVar13) = auVar84._16_4_;
          }
          if ((uVar8 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar41,1);
            *(undefined4 *)(param_1 + lVar15) = uVar11;
          }
          if ((uVar8 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar41,2);
            *(undefined4 *)(param_1 + lVar24) = uVar11;
          }
          if (cVar7 < '\0') {
            uVar11 = vextractps_avx(auVar41,3);
            *(undefined4 *)(param_1 + lVar12) = uVar11;
          }
          if ((uVar8 & 1) != 0) {
            *(int *)(param_1 + 4 + lVar27) = auVar99._0_4_;
          }
          if ((uVar8 & 2) != 0) {
            uVar11 = vextractps_avx(auVar31,1);
            *(undefined4 *)(param_1 + 4 + lVar20) = uVar11;
          }
          if ((uVar8 & 4) != 0) {
            uVar11 = vextractps_avx(auVar31,2);
            *(undefined4 *)(param_1 + 4 + lVar9) = uVar11;
          }
          if ((uVar8 & 8) != 0) {
            uVar11 = vextractps_avx(auVar31,3);
            *(undefined4 *)(param_1 + 4 + lVar28) = uVar11;
          }
          if ((uVar8 & 0x10) != 0) {
            *(int *)(param_1 + 4 + lVar13) = auVar99._16_4_;
          }
          if ((uVar8 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar39,1);
            *(undefined4 *)(param_1 + 4 + lVar15) = uVar11;
          }
          if ((uVar8 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar39,2);
            *(undefined4 *)(param_1 + 4 + lVar24) = uVar11;
          }
          if (cVar7 < '\0') {
            uVar11 = vextractps_avx(auVar39,3);
            *(undefined4 *)(param_1 + 4 + lVar12) = uVar11;
          }
          if ((uVar8 & 1) != 0) {
            *(int *)(param_1 + 8 + lVar27) = auVar114._0_4_;
          }
          if ((uVar8 & 2) != 0) {
            uVar11 = vextractps_avx(auVar32,1);
            *(undefined4 *)(param_1 + 8 + lVar20) = uVar11;
          }
          if ((uVar8 & 4) != 0) {
            uVar11 = vextractps_avx(auVar32,2);
            *(undefined4 *)(param_1 + 8 + lVar9) = uVar11;
          }
          if ((uVar8 & 8) != 0) {
            uVar11 = vextractps_avx(auVar32,3);
            *(undefined4 *)(param_1 + 8 + lVar28) = uVar11;
          }
          if ((uVar8 & 0x10) != 0) {
            *(int *)(param_1 + 8 + lVar13) = auVar114._16_4_;
          }
          if ((uVar8 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar82,1);
            *(undefined4 *)(param_1 + 8 + lVar15) = uVar11;
          }
          if ((uVar8 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar82,2);
            *(undefined4 *)(param_1 + 8 + lVar24) = uVar11;
          }
          if (cVar7 < '\0') {
            uVar11 = vextractps_avx(auVar82,3);
            *(undefined4 *)(param_1 + 8 + lVar12) = uVar11;
          }
          if ((uVar8 & 1) != 0) {
            *(uint *)(param_1 + 0xc + lVar27) = uVar160;
          }
          if ((uVar8 & 2) != 0) {
            *(uint *)(param_1 + 0xc + lVar20) = uVar147;
          }
          if ((uVar8 & 4) != 0) {
            *(uint *)(param_1 + 0xc + lVar9) = uVar158;
          }
          if ((uVar8 & 8) != 0) {
            *(uint *)(param_1 + 0xc + lVar28) = uVar161;
          }
          if ((uVar8 & 0x10) != 0) {
            *(uint *)(param_1 + 0xc + lVar13) = uVar163;
          }
          if ((uVar8 & 0x20) != 0) {
            *(uint *)(param_1 + 0xc + lVar15) = uVar113;
          }
          if ((uVar8 & 0x40) != 0) {
            *(uint *)(param_1 + 0xc + lVar24) = uVar5;
          }
          if (cVar7 < '\0') {
            *(uint *)(param_1 + 0xc + lVar12) = uVar6;
          }
        }
      }
      uVar157 = uVar157 + 0x20;
      lVar29 = lVar29 + 0x60;
      uVar14 = uVar14 + 8;
    } while ((int)uVar14 < (int)(uVar30 & 0xfffffff8));
  }
  if ((int)uVar14 < (int)param_9) {
    auVar43 = vpshufd_avx(ZEXT416(uVar14),0);
    auVar108._16_16_ = auVar43;
    auVar108._0_16_ = auVar43;
    auVar108 = auVar108 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar83 = vpshufd_avx(ZEXT416(param_9),0);
    auVar103 = auVar108._0_16_;
    auVar112 = auVar108._16_16_;
    auVar43 = vpcmpgtd_avx(auVar83,auVar112);
    auVar40 = vpcmpgtd_avx(auVar83,auVar103);
    auVar151._16_16_ = auVar43;
    auVar151._0_16_ = auVar40;
    auVar191 = vmaskmovps_avx(auVar151,*(undefined1 (*) [32])(param_3 + (int)(uVar14 << 2)));
    auVar98 = vpslld_avx(auVar191._0_16_,4);
    auVar81 = vpslld_avx(auVar191._16_16_,4);
    auVar42 = vpand_avx(auVar40,auVar98);
    iVar18 = auVar42._8_4_;
    auVar41 = vpand_avx(auVar43,auVar81);
    iVar38 = auVar41._0_4_;
    lVar29 = param_1 + iVar38;
    uVar14 = auVar40._0_4_;
    auVar58._0_4_ = uVar14 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004
    ;
    uVar157 = auVar40._4_4_;
    auVar58._4_4_ = uVar157 & _UNK_150b50d44;
    uVar160 = auVar40._8_4_;
    auVar58._8_4_ = uVar160 & _UNK_150b50d48;
    uVar147 = auVar40._12_4_;
    auVar58._12_4_ = uVar147 & _UNK_150b50d4c;
    uVar30 = auVar43._0_4_;
    uVar158 = auVar43._4_4_;
    uVar161 = auVar43._8_4_;
    uVar163 = auVar43._12_4_;
    lVar9 = param_1 + auVar42._0_4_;
    lVar12 = param_1 + auVar41._4_4_;
    auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50d50) + lVar29)),
                            ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d54) + lVar12)),0x10)
    ;
    auVar40 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50d70) + lVar29)),
                            ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d74) + lVar12)),0x10)
    ;
    auVar32 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50d90) + lVar29)),
                            ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d94) + lVar12)),0x10)
    ;
    uVar25 = (ulonglong)auVar41._8_4_;
    lVar29 = param_1 + uVar25;
    lVar12 = param_1 + auVar41._12_4_;
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d58) + lVar29
                                                     )),0x20);
    auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d78) + lVar29
                                                     )),0x20);
    auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d98) + lVar29
                                                     )),0x20);
    uVar30 = vextractps_avx(auVar58,1);
    uVar11 = vextractps_avx(auVar58,2);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d5c) + lVar12
                                                     )),0x30);
    auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d7c) + lVar12
                                                     )),0x30);
    auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d9c) + lVar12
                                                     )),0x30);
    uVar21 = (ulonglong)auVar42._4_4_;
    lVar12 = param_1 + uVar21;
    auVar82 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar58._0_4_ + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)uVar30 + lVar12)),0x10);
    auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar14 & 
                                              ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50d64) + lVar12)),0x10)
    ;
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar14 & 
                                              ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50d84) + lVar12)),0x10)
    ;
    lVar9 = param_1 + iVar18;
    auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(CONCAT44((int)((ulonglong)lVar29 >> 0x20),
                                                               uVar11) + lVar9)),0x20);
    auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d68) + lVar9)
                                           ),0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d88) + lVar9)
                                           ),0x20);
    lVar29 = param_1 + auVar42._12_4_;
    auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)auVar58._12_4_ + lVar29)),0x30);
    auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar147 & _UNK_150b50d6c) + lVar29
                                                     )),0x30);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar147 & _UNK_150b50d8c) + lVar29
                                                     )),0x30);
    auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + iVar38)),
                            ZEXT416(*(uint *)(param_1 + auVar41._4_4_)),0x10);
    auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + uVar25)),0x20);
    auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + auVar41._12_4_)),0x30);
    auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar42._0_4_)),
                            ZEXT416(*(uint *)(param_1 + uVar21)),0x10);
    auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + iVar18)),0x20);
    auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + auVar42._12_4_)),0x30);
    auVar100._16_16_ = auVar97;
    auVar100._0_16_ = auVar41;
    auVar51._16_16_ = auVar43;
    auVar51._0_16_ = auVar82;
    auVar66._16_16_ = auVar40;
    auVar66._0_16_ = auVar31;
    auVar84 = vmaskmovps_avx(auVar151,auVar100);
    auVar99 = vmaskmovps_avx(auVar151,auVar51);
    auVar114 = vmaskmovps_avx(auVar151,auVar66);
    auVar67._16_16_ = auVar32;
    auVar67._0_16_ = auVar39;
    auVar189 = vcmpps_avx(auVar67,ZEXT832(0) << 0x20,8);
    auVar151 = auVar151 & auVar189;
    if ((((((((SUB321(auVar151 >> 0x1f,0) & 1) == 0 && (SUB321(auVar151 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar151 >> 0x5f,0) & 1) == 0) && SUB321(auVar151 >> 0x7f,0) == '\0') &&
          (SUB321(auVar151 >> 0x9f,0) & 1) == 0) && SUB321(auVar151 >> 0xbf,0) == '\0') &&
        (SUB321(auVar151 >> 0xdf,0) & 1) == 0) && -1 < auVar151[0x1f]) {
      uVar10 = (ulonglong)auVar108._0_4_;
      pauVar4 = (undefined1 (*) [32])(param_4 + uVar10 * 0xc);
      auVar82 = vpcmpgtd_avx(auVar83,auVar112);
      auVar43 = vpcmpgtd_avx(auVar83,auVar103);
      auVar43 = vpand_avx(auVar82,auVar43);
      auVar40 = vpcmpeqd_avx(auVar112,auVar112);
      auVar40 = auVar40 & ~auVar43;
      uVar30 = auVar82._0_4_;
      uVar14 = auVar82._4_4_;
      uVar157 = auVar82._8_4_;
      uVar160 = auVar82._12_4_;
      if ((((SUB161(auVar40 >> 0x1f,0) & 1) == 0 && (SUB161(auVar40 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar40 >> 0x5f,0) & 1) == 0) && -1 < auVar40[0xf]) {
        auVar34 = pauVar4[2];
        auVar116._16_16_ = *(undefined1 (*) [16])*pauVar4;
        auVar116._0_16_ = *(undefined1 (*) [16])(*pauVar4 + 0x10);
        auVar189 = vblendps_avx(*pauVar4,auVar116,0x24);
        auVar189 = vpermilps_avx(auVar189,
                                 ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                );
        uVar11 = *(undefined4 *)(pauVar4[1] + 4);
        auVar88._4_4_ = uVar11;
        auVar88._0_4_ = uVar11;
        auVar88._8_4_ = uVar11;
        auVar88._12_4_ = uVar11;
        uVar11 = *(undefined4 *)(pauVar4[1] + 8);
        auVar88._20_4_ = uVar11;
        auVar88._16_4_ = uVar11;
        auVar88._24_4_ = uVar11;
        auVar88._28_4_ = uVar11;
        auVar189 = vblendps_avx(auVar189,auVar88,0x88);
        auVar117._16_16_ = *(undefined1 (*) [16])pauVar4[2];
        auVar117._0_16_ = *(undefined1 (*) [16])(pauVar4[2] + 0x10);
        auVar33 = vblendps_avx(auVar117,auVar34,0x44);
        auVar33 = vpermilps_avx(auVar33,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        auVar43 = vshufps_avx(*(undefined1 (*) [16])(pauVar4[1] + 0x10),
                              *(undefined1 (*) [16])(pauVar4[1] + 0x10),0xec);
        uVar11 = *(undefined4 *)(pauVar4[1] + 0x14);
        auVar153._20_4_ = uVar11;
        auVar153._16_4_ = uVar11;
        auVar153._24_4_ = uVar11;
        auVar153._28_4_ = uVar11;
        auVar153._0_16_ = auVar43;
        auVar33 = vblendps_avx(auVar33,auVar153,0x13);
        auVar52._16_16_ = auVar33._0_16_;
        auVar52._0_16_ = auVar189._0_16_;
        local_2c0 = vperm2f128_avx(auVar189,auVar33,0x31);
        auVar189 = vblendps_avx(pauVar4[1],*pauVar4,0x24);
        auVar189 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar4 + 0x10)),auVar189,0x21);
        auVar189 = vshufps_avx(auVar189,pauVar4[1],0xc2);
        auVar33 = vshufps_avx(auVar117,auVar34,0xc4);
        auVar185 = vblendps_avx(auVar189,auVar33,0xe0);
        auVar43 = *(undefined1 (*) [16])(param_5 + uVar10 * 0xc);
        auVar40 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar10 * 0xc);
        auVar31 = *(undefined1 (*) [16])(param_5 + 0x30 + uVar10 * 0xc);
        auVar193._16_16_ = auVar40;
        auVar193._0_16_ = auVar43;
        auVar97 = *(undefined1 (*) [16])(param_5 + 0x50 + uVar10 * 0xc);
        auVar41 = *(undefined1 (*) [16])(param_5 + 0x40 + uVar10 * 0xc);
        auVar68._16_16_ = auVar43;
        auVar68._0_16_ = auVar40;
        auVar189 = vblendps_avx(auVar193,auVar68,0x24);
        auVar189 = vpermilps_avx(auVar189,
                                 ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                );
        uVar11 = *(undefined4 *)(param_5 + 0x28 + uVar10 * 0xc);
        auVar53._20_4_ = uVar11;
        auVar53._16_4_ = uVar11;
        auVar53._24_4_ = uVar11;
        auVar53._28_4_ = uVar11;
        uVar11 = *(undefined4 *)(param_5 + 0x24 + uVar10 * 0xc);
        auVar53._4_4_ = uVar11;
        auVar53._0_4_ = uVar11;
        auVar53._8_4_ = uVar11;
        auVar53._12_4_ = uVar11;
        uVar11 = *(undefined4 *)(param_5 + 0x34 + uVar10 * 0xc);
        auVar129._20_4_ = uVar11;
        auVar129._16_4_ = uVar11;
        auVar129._24_4_ = uVar11;
        auVar129._28_4_ = uVar11;
        auVar118._16_16_ = auVar31;
        auVar118._0_16_ = *(undefined1 (*) [16])(param_5 + 0x20 + uVar10 * 0xc);
        auVar169._16_16_ = auVar97;
        auVar169._0_16_ = auVar41;
        auVar189 = vblendps_avx(auVar189,auVar53,0x88);
        auVar69._16_16_ = auVar41;
        auVar69._0_16_ = auVar97;
        auVar33 = vblendps_avx(auVar69,auVar169,0x44);
        auVar33 = vpermilps_avx(auVar33,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        auVar43 = vshufps_avx(auVar31,auVar31,0xec);
        auVar129._0_16_ = auVar43;
        auVar33 = vblendps_avx(auVar33,auVar129,0x13);
        auVar128._16_16_ = auVar33._0_16_;
        auVar128._0_16_ = auVar189._0_16_;
        auVar190 = vperm2f128_avx(auVar189,auVar33,0x31);
        auVar189 = vblendps_avx(auVar118,auVar193,0x24);
        auVar189 = vshufps_avx(ZEXT1632(auVar40),auVar189,0x21);
        auVar189 = vshufps_avx(auVar189,auVar118,0xc2);
        auVar33 = vshufps_avx(auVar69,auVar169,0xc4);
        auVar152 = vblendps_avx(auVar189,auVar33,0xe0);
      }
      else {
        auVar43 = vpcmpgtd_avx(auVar83,auVar103);
        uVar147 = auVar43._0_4_;
        auVar40._0_4_ =
             uVar147 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
        uVar158 = auVar43._4_4_;
        auVar40._4_4_ = uVar158 & _UNK_150b50b04;
        uVar161 = auVar43._8_4_;
        auVar40._8_4_ = uVar161 & _UNK_150b50b08;
        uVar163 = auVar43._12_4_;
        auVar40._12_4_ = uVar163 & _UNK_150b50b0c;
        uVar11 = vextractps_avx(auVar40,1);
        lVar9 = CONCAT44(iVar38 >> 0x1f,uVar11);
        uVar11 = vextractps_avx(auVar40,2);
        lVar12 = CONCAT44(iVar18 >> 0x1f,uVar11);
        uVar11 = vextractps_avx(auVar40,3);
        lVar13 = CONCAT44(auVar42._4_4_ >> 0x1f,uVar11);
        auVar43 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar30 & _UNK_150b50b10))),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar14 & _UNK_150b50b14))),0x10);
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(*pauVar4 + (uVar157 & _UNK_150b50b18))),
                                0x20);
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(*pauVar4 + (uVar160 & _UNK_150b50b1c))),
                                0x30);
        auVar40 = vinsertps_avx(ZEXT416(*(uint *)*pauVar4),ZEXT416(*(uint *)(*pauVar4 + lVar9)),0x10
                               );
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(*pauVar4 + lVar12)),0x20);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(*pauVar4 + lVar13)),0x30);
        auVar31 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar30 & _UNK_150b50b30))),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar14 & _UNK_150b50b34))),0x10);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + (uVar157 & _UNK_150b50b38))),
                                0x20);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + (uVar160 & _UNK_150b50b3c))),
                                0x30);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 +
                                                 (uVar147 &
                                                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                 ))),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b24))),0x10);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b28))),
                                0x20);
        uVar21 = (ulonglong)(uVar163 & _UNK_150b50b2c);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar4 + uVar21)),0x30);
        uVar25 = (ulonglong)(uVar30 & _UNK_150b50b50);
        auVar41 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + uVar25)),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar14 & _UNK_150b50b54))),0x10);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(*pauVar4 + (uVar157 & _UNK_150b50b58))),
                                0x20);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(*pauVar4 + (uVar160 & _UNK_150b50b5c))),
                                0x30);
        auVar42 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 +
                                                 (uVar147 &
                                                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                 ))),
                                ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b44))),0x10);
        auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b48))),
                                0x20);
        auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)(*pauVar4 + (uVar163 & _UNK_150b50b4c))),
                                0x30);
        auVar52._16_16_ = auVar43;
        auVar52._0_16_ = auVar40;
        local_2c0._16_16_ = auVar31;
        local_2c0._0_16_ = auVar97;
        auVar185._16_16_ = auVar41;
        auVar185._0_16_ = auVar42;
        lVar29 = param_5 + uVar10 * 0xc;
        auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50b10) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar14 & _UNK_150b50b14) + lVar29)),
                                0x10);
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50b18) +
                                                         lVar29)),0x20);
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50b1c) +
                                                         lVar29)),0x30);
        auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + uVar10 * 0xc)),
                                ZEXT416(*(uint *)(lVar9 + lVar29)),0x10);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(lVar12 + lVar29)),0x20);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(lVar13 + lVar29)),0x30);
        auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar30 & _UNK_150b50b30) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar14 & _UNK_150b50b34) + lVar29)),
                                0x10);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50b38) +
                                                         lVar29)),0x20);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50b3c) +
                                                         lVar29)),0x30);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar147 &
                                                  ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                  ) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50b24) + lVar29)),
                                0x10);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50b28) +
                                                         lVar29)),0x20);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar21 + lVar29)),0x30);
        auVar41 = vinsertps_avx(ZEXT416(*(uint *)(uVar25 + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar14 & _UNK_150b50b54) + lVar29)),
                                0x10);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50b58) +
                                                         lVar29)),0x20);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50b5c) +
                                                         lVar29)),0x30);
        auVar42 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar147 &
                                                  ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                  ) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50b44) + lVar29)),
                                0x10);
        auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50b48) +
                                                         lVar29)),0x20);
        auVar42 = vinsertps_avx(auVar42,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50b4c) +
                                                         lVar29)),0x30);
        auVar128._16_16_ = auVar43;
        auVar128._0_16_ = auVar40;
        auVar190._16_16_ = auVar31;
        auVar190._0_16_ = auVar97;
        auVar152._16_16_ = auVar41;
        auVar152._0_16_ = auVar42;
      }
      auVar189 = vsubps_avx(auVar52,auVar84);
      auVar33 = vsubps_avx(local_2c0,auVar99);
      auVar34 = vsubps_avx(auVar185,auVar114);
      fVar80 = auVar128._0_4_;
      fVar90 = auVar128._4_4_;
      fVar91 = auVar128._8_4_;
      fVar92 = auVar128._12_4_;
      fVar93 = auVar128._16_4_;
      fVar94 = auVar128._20_4_;
      fVar95 = auVar128._24_4_;
      fVar96 = auVar128._28_4_;
      fVar146 = auVar190._0_4_;
      fVar156 = auVar190._4_4_;
      fVar159 = auVar190._8_4_;
      fVar162 = auVar190._12_4_;
      fVar164 = auVar190._16_4_;
      fVar165 = auVar190._20_4_;
      fVar166 = auVar190._24_4_;
      fVar167 = auVar190._28_4_;
      fVar121 = auVar152._0_4_;
      fVar132 = auVar152._4_4_;
      fVar134 = auVar152._8_4_;
      fVar136 = auVar152._12_4_;
      fVar138 = auVar152._16_4_;
      fVar140 = auVar152._20_4_;
      fVar142 = auVar152._24_4_;
      fVar144 = auVar152._28_4_;
      auVar170._0_4_ = fVar121 * auVar34._0_4_ + fVar80 * auVar189._0_4_ + fVar146 * auVar33._0_4_;
      auVar170._4_4_ = fVar132 * auVar34._4_4_ + fVar90 * auVar189._4_4_ + fVar156 * auVar33._4_4_;
      auVar170._8_4_ = fVar134 * auVar34._8_4_ + fVar91 * auVar189._8_4_ + fVar159 * auVar33._8_4_;
      auVar170._12_4_ =
           fVar136 * auVar34._12_4_ + fVar92 * auVar189._12_4_ + fVar162 * auVar33._12_4_;
      auVar170._16_4_ =
           fVar138 * auVar34._16_4_ + fVar93 * auVar189._16_4_ + fVar164 * auVar33._16_4_;
      auVar170._20_4_ =
           fVar140 * auVar34._20_4_ + fVar94 * auVar189._20_4_ + fVar165 * auVar33._20_4_;
      auVar170._24_4_ =
           fVar142 * auVar34._24_4_ + fVar95 * auVar189._24_4_ + fVar166 * auVar33._24_4_;
      auVar170._28_4_ =
           fVar144 * auVar34._28_4_ + fVar96 * auVar189._28_4_ + fVar167 * auVar33._28_4_;
      auVar189 = vcmpps_avx(ZEXT432(0) << 0x20,auVar67,4);
      auVar33 = vcmpps_avx(ZEXT432(0) << 0x20,auVar170,1);
      auVar186._0_4_ = auVar33._0_4_ & auVar189._0_4_;
      auVar186._4_4_ = auVar33._4_4_ & auVar189._4_4_;
      auVar186._8_4_ = auVar33._8_4_ & auVar189._8_4_;
      auVar186._12_4_ = auVar33._12_4_ & auVar189._12_4_;
      auVar186._16_4_ = auVar33._16_4_ & auVar189._16_4_;
      auVar186._20_4_ = auVar33._20_4_ & auVar189._20_4_;
      auVar186._24_4_ = auVar33._24_4_ & auVar189._24_4_;
      auVar186._28_4_ = auVar33._28_4_ & auVar189._28_4_;
      auVar43 = vpcmpgtd_avx(auVar83,auVar103);
      auVar54._0_4_ = auVar186._0_4_ & auVar43._0_4_;
      auVar54._4_4_ = auVar186._4_4_ & auVar43._4_4_;
      auVar54._8_4_ = auVar186._8_4_ & auVar43._8_4_;
      auVar54._12_4_ = auVar186._12_4_ & auVar43._12_4_;
      auVar54._16_4_ = auVar186._16_4_ & uVar30;
      auVar54._20_4_ = auVar186._20_4_ & uVar14;
      auVar54._24_4_ = auVar186._24_4_ & uVar157;
      auVar54._28_4_ = auVar186._28_4_ & uVar160;
      uVar30 = vmovmskps_avx(auVar54);
      if (uVar30 != 0) {
        auVar40 = vpand_avx(auVar82,auVar186._16_16_);
        auVar82._0_4_ = auVar186._0_4_ & auVar43._0_4_;
        auVar82._4_4_ = auVar186._4_4_ & auVar43._4_4_;
        auVar82._8_4_ = auVar186._8_4_ & auVar43._8_4_;
        auVar82._12_4_ = auVar186._12_4_ & auVar43._12_4_;
        auVar43 = vpackssdw_avx(auVar82,auVar40);
        auVar89._0_4_ = auVar84._0_4_ + auVar170._0_4_ * fVar80;
        auVar89._4_4_ = auVar84._4_4_ + auVar170._4_4_ * fVar90;
        auVar89._8_4_ = auVar84._8_4_ + auVar170._8_4_ * fVar91;
        auVar89._12_4_ = auVar84._12_4_ + auVar170._12_4_ * fVar92;
        auVar89._16_4_ = auVar84._16_4_ + auVar170._16_4_ * fVar93;
        auVar89._20_4_ = auVar84._20_4_ + auVar170._20_4_ * fVar94;
        auVar89._24_4_ = auVar84._24_4_ + auVar170._24_4_ * fVar95;
        auVar89._28_4_ = auVar84._28_4_ + auVar170._28_4_ * fVar96;
        auVar101._0_4_ = auVar99._0_4_ + fVar146 * auVar170._0_4_;
        auVar101._4_4_ = auVar99._4_4_ + fVar156 * auVar170._4_4_;
        auVar101._8_4_ = auVar99._8_4_ + fVar159 * auVar170._8_4_;
        auVar101._12_4_ = auVar99._12_4_ + fVar162 * auVar170._12_4_;
        auVar101._16_4_ = auVar99._16_4_ + fVar164 * auVar170._16_4_;
        auVar101._20_4_ = auVar99._20_4_ + fVar165 * auVar170._20_4_;
        auVar101._24_4_ = auVar99._24_4_ + fVar166 * auVar170._24_4_;
        auVar101._28_4_ = auVar99._28_4_ + fVar167 * auVar170._28_4_;
        auVar70._0_4_ = auVar114._0_4_ + fVar121 * auVar170._0_4_;
        auVar70._4_4_ = auVar114._4_4_ + fVar132 * auVar170._4_4_;
        auVar70._8_4_ = auVar114._8_4_ + fVar134 * auVar170._8_4_;
        auVar70._12_4_ = auVar114._12_4_ + fVar136 * auVar170._12_4_;
        auVar70._16_4_ = auVar114._16_4_ + fVar138 * auVar170._16_4_;
        auVar70._20_4_ = auVar114._20_4_ + fVar140 * auVar170._20_4_;
        auVar70._24_4_ = auVar114._24_4_ + fVar142 * auVar170._24_4_;
        auVar70._28_4_ = auVar114._28_4_ + fVar144 * auVar170._28_4_;
        auVar40 = vpmovsxwd_avx(auVar43);
        auVar43 = vpunpckhwd_avx(auVar43,auVar43);
        auVar55._16_16_ = auVar43;
        auVar55._0_16_ = auVar40;
        auVar84 = vmaskmovps_avx(auVar55,auVar89);
        auVar99 = vmaskmovps_avx(auVar55,auVar101);
        auVar114 = vmaskmovps_avx(auVar55,auVar70);
        pauVar4 = (undefined1 (*) [32])(param_6 + uVar10 * 0xc);
        cVar7 = (char)uVar30;
        uVar14 = auVar40._0_4_;
        uVar157 = auVar40._4_4_;
        uVar160 = auVar40._8_4_;
        uVar147 = auVar40._12_4_;
        uVar158 = auVar43._0_4_;
        uVar161 = auVar43._4_4_;
        uVar163 = auVar43._8_4_;
        uVar113 = auVar43._12_4_;
        if (cVar7 == -1) {
          auVar35 = pauVar4[2];
          auVar56._16_16_ = *(undefined1 (*) [16])*pauVar4;
          auVar56._0_16_ = *(undefined1 (*) [16])(*pauVar4 + 0x10);
          auVar189 = vblendps_avx(*pauVar4,auVar56,0x24);
          auVar33 = vpermilps_avx(auVar189,
                                  ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                 );
          uVar11 = *(undefined4 *)(pauVar4[1] + 4);
          auVar194._4_4_ = uVar11;
          auVar194._0_4_ = uVar11;
          auVar194._8_4_ = uVar11;
          auVar194._12_4_ = uVar11;
          uVar11 = *(undefined4 *)(pauVar4[1] + 8);
          auVar194._20_4_ = uVar11;
          auVar194._16_4_ = uVar11;
          auVar194._24_4_ = uVar11;
          auVar194._28_4_ = uVar11;
          auVar196._16_16_ = *(undefined1 (*) [16])pauVar4[2];
          auVar196._0_16_ = *(undefined1 (*) [16])(pauVar4[2] + 0x10);
          auVar189 = vblendps_avx(auVar196,auVar35,0x44);
          auVar34 = vpermilps_avx(auVar189,
                                  ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                 );
          auVar189 = vblendps_avx(auVar33,auVar194,0x88);
          auVar82 = vshufps_avx(*(undefined1 (*) [16])(pauVar4[1] + 0x10),
                                *(undefined1 (*) [16])(pauVar4[1] + 0x10),0xec);
          uVar11 = *(undefined4 *)(pauVar4[1] + 0x14);
          auVar102._20_4_ = uVar11;
          auVar102._16_4_ = uVar11;
          auVar102._24_4_ = uVar11;
          auVar102._28_4_ = uVar11;
          auVar102._0_16_ = auVar82;
          auVar33 = vblendps_avx(auVar34,auVar102,0x13);
          auVar109._16_16_ = auVar33._0_16_;
          auVar109._0_16_ = auVar189._0_16_;
          auVar176 = vperm2f128_avx(auVar189,auVar33,0x31);
          auVar189 = vblendps_avx(pauVar4[1],*pauVar4,0x24);
          auVar189 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar4 + 0x10)),auVar189,0x21);
          auVar189 = vshufps_avx(auVar189,pauVar4[1],0xc2);
          auVar33 = vshufps_avx(auVar196,auVar35,0xc4);
          auVar187 = vblendps_avx(auVar189,auVar33,0xe0);
        }
        else {
          auVar41._0_4_ =
               uVar14 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
          auVar41._4_4_ = uVar157 & _UNK_150b50b04;
          auVar41._8_4_ = uVar160 & _UNK_150b50b08;
          auVar41._12_4_ = uVar147 & _UNK_150b50b0c;
          uVar16 = (undefined4)(uVar10 * 3 >> 0x20);
          uVar11 = vextractps_avx(auVar41,1);
          uVar22 = (undefined4)(uVar21 >> 0x20);
          uVar19 = vextractps_avx(auVar41,2);
          uVar26 = (undefined4)(uVar25 >> 0x20);
          uVar23 = vextractps_avx(auVar41,3);
          auVar82 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b10))),
                                  ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b14))),0x10);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(*pauVar4 + (uVar163 & _UNK_150b50b18))),
                                  0x20);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(*pauVar4 + (uVar113 & _UNK_150b50b1c))),
                                  0x30);
          auVar31 = vinsertps_avx(ZEXT416(*(uint *)*pauVar4),
                                  ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar16,uVar11))),0x10);
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar22,uVar19))),
                                  0x20);
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar26,uVar23))),
                                  0x30);
          auVar42._0_4_ =
               uVar14 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
          auVar42._4_4_ = uVar157 & _UNK_150b50b24;
          auVar42._8_4_ = uVar160 & _UNK_150b50b28;
          auVar42._12_4_ = uVar147 & _UNK_150b50b2c;
          uVar11 = vextractps_avx(auVar42,1);
          uVar19 = vextractps_avx(auVar42,2);
          uVar23 = vextractps_avx(auVar42,3);
          auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b30))),
                                  ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b34))),0x10);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar4 + (uVar163 & _UNK_150b50b38))),
                                  0x20);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar4 + (uVar113 & _UNK_150b50b3c))),
                                  0x30);
          auVar41 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + auVar42._0_4_)),
                                  ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar16,uVar11))),0x10);
          auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar22,uVar19))),
                                  0x20);
          auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar26,uVar23))),
                                  0x30);
          auVar83._0_4_ =
               uVar14 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
          auVar83._4_4_ = uVar157 & _UNK_150b50b44;
          auVar83._8_4_ = uVar160 & _UNK_150b50b48;
          auVar83._12_4_ = uVar147 & _UNK_150b50b4c;
          uVar11 = vextractps_avx(auVar83,1);
          uVar19 = vextractps_avx(auVar83,2);
          auVar109._16_16_ = auVar82;
          auVar109._0_16_ = auVar31;
          uVar23 = vextractps_avx(auVar83,3);
          auVar82 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + (uVar158 & _UNK_150b50b50))),
                                  ZEXT416(*(uint *)(*pauVar4 + (uVar161 & _UNK_150b50b54))),0x10);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(*pauVar4 + (uVar163 & _UNK_150b50b58))),
                                  0x20);
          auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(*pauVar4 + (uVar113 & _UNK_150b50b5c))),
                                  0x30);
          auVar31 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar4 + auVar83._0_4_)),
                                  ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar16,uVar11))),0x10);
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar22,uVar19))),
                                  0x20);
          auVar176._16_16_ = auVar97;
          auVar176._0_16_ = auVar41;
          auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(*pauVar4 + CONCAT44(uVar26,uVar23))),
                                  0x30);
          auVar187._16_16_ = auVar82;
          auVar187._0_16_ = auVar31;
        }
        local_2a0 = auVar98._0_4_;
        iStack_29c = auVar98._4_4_;
        iStack_298 = auVar98._8_4_;
        iStack_294 = auVar98._12_4_;
        local_2e0 = auVar81._0_4_;
        iStack_2dc = auVar81._4_4_;
        iStack_2d8 = auVar81._8_4_;
        iStack_2d4 = auVar81._12_4_;
        local_390 = auVar191._16_4_;
        iStack_38c = auVar191._20_4_;
        iStack_388 = auVar191._24_4_;
        iStack_384 = auVar191._28_4_;
        auVar81._4_4_ = iStack_38c * 3;
        auVar81._0_4_ = local_390 * 3;
        auVar81._8_4_ = iStack_388 * 3;
        auVar81._12_4_ = iStack_384 * 3;
        auVar98._4_4_ = auVar191._4_4_ * 3;
        auVar98._0_4_ = auVar191._0_4_ * 3;
        auVar98._8_4_ = auVar191._8_4_ * 3;
        auVar98._12_4_ = auVar191._12_4_ * 3;
        auVar37._16_16_ = auVar43;
        auVar37._0_16_ = auVar40;
        auVar42 = vpand_avx(auVar40,auVar98);
        auVar41 = vpand_avx(auVar43,auVar81);
        lVar29 = param_2 + (longlong)auVar41._0_4_ * 4;
        lVar9 = param_2 + (longlong)auVar42._0_4_ * 4;
        lVar12 = param_2 + (longlong)auVar41._4_4_ * 4;
        auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d50) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d54) + lVar12)),
                                0x10);
        auVar40 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar158 & _UNK_150b50d70) + lVar29)),
                                ZEXT416(*(uint *)((ulonglong)(uVar161 & _UNK_150b50d74) + lVar12)),
                                0x10);
        lVar29 = param_2 + (longlong)auVar41._8_4_ * 4;
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d58) +
                                                         lVar29)),0x20);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar163 & _UNK_150b50d78) +
                                                         lVar29)),0x20);
        lVar29 = param_2 + (longlong)auVar41._12_4_ * 4;
        auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar113 & _UNK_150b50d5c) +
                                                         lVar29)),0x30);
        auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar113 & _UNK_150b50d7c) +
                                                         lVar29)),0x30);
        lVar29 = param_2 + (longlong)auVar42._4_4_ * 4;
        auVar82 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar14 & 
                                                  ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                                  ) + lVar9)),
                                ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50d44) + lVar29)),
                                0x10);
        auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar14 & 
                                                  ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                                  ) + lVar9)),
                                ZEXT416(*(uint *)((ulonglong)(uVar157 & _UNK_150b50d64) + lVar29)),
                                0x10);
        lVar29 = param_2 + (longlong)auVar42._8_4_ * 4;
        auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d48) +
                                                         lVar29)),0x20);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar160 & _UNK_150b50d68) +
                                                         lVar29)),0x20);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar41._0_4_ * 4)),
                                ZEXT416(*(uint *)(param_2 + (longlong)auVar41._4_4_ * 4)),0x10);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_2 + (longlong)auVar41._8_4_ * 4)),
                                0x20);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_2 + (longlong)auVar41._12_4_ * 4)),
                                0x30);
        auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + (longlong)auVar42._0_4_ * 4)),
                                ZEXT416(*(uint *)(param_2 + (longlong)auVar42._4_4_ * 4)),0x10);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + (longlong)auVar42._8_4_ * 4)),
                                0x20);
        auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_2 + (longlong)auVar42._12_4_ * 4)),
                                0x30);
        param_2 = param_2 + (longlong)auVar42._12_4_ * 4;
        auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)((ulonglong)(uVar147 & _UNK_150b50d4c) +
                                                         param_2)),0x30);
        auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar147 & _UNK_150b50d6c) +
                                                         param_2)),0x30);
        auVar195._16_16_ = auVar97;
        auVar195._0_16_ = auVar41;
        auVar71._16_16_ = auVar43;
        auVar71._0_16_ = auVar82;
        auVar119._16_16_ = auVar40;
        auVar119._0_16_ = auVar31;
        auVar189 = vsubps_avx(auVar84,auVar195);
        auVar191 = vsubps_avx(auVar99,auVar71);
        auVar33 = vsubps_avx(auVar114,auVar119);
        auVar43 = vshufps_avx(ZEXT416(param_8),ZEXT416(param_8),0);
        fVar122 = auVar43._0_4_;
        auVar110._0_4_ = fVar122 * auVar109._0_4_;
        fVar133 = auVar43._4_4_;
        auVar110._4_4_ = fVar133 * auVar109._4_4_;
        fVar135 = auVar43._8_4_;
        auVar110._8_4_ = fVar135 * auVar109._8_4_;
        fVar137 = auVar43._12_4_;
        auVar110._12_4_ = fVar137 * auVar109._12_4_;
        auVar110._16_4_ = fVar122 * auVar109._16_4_;
        auVar110._20_4_ = fVar133 * auVar109._20_4_;
        auVar110._24_4_ = fVar135 * auVar109._24_4_;
        auVar110._28_4_ = fVar137 * auVar109._28_4_;
        auVar189 = vsubps_avx(auVar189,auVar110);
        auVar177._0_4_ = fVar122 * auVar176._0_4_;
        auVar177._4_4_ = fVar133 * auVar176._4_4_;
        auVar177._8_4_ = fVar135 * auVar176._8_4_;
        auVar177._12_4_ = fVar137 * auVar176._12_4_;
        auVar177._16_4_ = fVar122 * auVar176._16_4_;
        auVar177._20_4_ = fVar133 * auVar176._20_4_;
        auVar177._24_4_ = fVar135 * auVar176._24_4_;
        auVar177._28_4_ = fVar137 * auVar176._28_4_;
        auVar191 = vsubps_avx(auVar191,auVar177);
        auVar178._0_4_ = fVar122 * auVar187._0_4_;
        auVar178._4_4_ = fVar133 * auVar187._4_4_;
        auVar178._8_4_ = fVar135 * auVar187._8_4_;
        auVar178._12_4_ = fVar137 * auVar187._12_4_;
        auVar178._16_4_ = fVar122 * auVar187._16_4_;
        auVar178._20_4_ = fVar133 * auVar187._20_4_;
        auVar178._24_4_ = fVar135 * auVar187._24_4_;
        auVar178._28_4_ = fVar137 * auVar187._28_4_;
        auVar33 = vsubps_avx(auVar33,auVar178);
        fVar122 = fVar121 * auVar33._0_4_ + fVar80 * auVar189._0_4_ + fVar146 * auVar191._0_4_;
        fVar133 = fVar132 * auVar33._4_4_ + fVar90 * auVar189._4_4_ + fVar156 * auVar191._4_4_;
        fVar135 = fVar134 * auVar33._8_4_ + fVar91 * auVar189._8_4_ + fVar159 * auVar191._8_4_;
        fVar137 = fVar136 * auVar33._12_4_ + fVar92 * auVar189._12_4_ + fVar162 * auVar191._12_4_;
        fVar139 = fVar138 * auVar33._16_4_ + fVar93 * auVar189._16_4_ + fVar164 * auVar191._16_4_;
        fVar141 = fVar140 * auVar33._20_4_ + fVar94 * auVar189._20_4_ + fVar165 * auVar191._20_4_;
        fVar143 = fVar142 * auVar33._24_4_ + fVar95 * auVar189._24_4_ + fVar166 * auVar191._24_4_;
        fVar145 = fVar144 * auVar33._28_4_ + fVar96 * auVar189._28_4_ + fVar167 * auVar191._28_4_;
        auVar188._0_4_ = fVar122 * fVar80;
        auVar188._4_4_ = fVar133 * fVar90;
        auVar188._8_4_ = fVar135 * fVar91;
        auVar188._12_4_ = fVar137 * fVar92;
        auVar188._16_4_ = fVar139 * fVar93;
        auVar188._20_4_ = fVar141 * fVar94;
        auVar188._24_4_ = fVar143 * fVar95;
        auVar188._28_4_ = fVar145 * fVar96;
        auVar130._0_4_ = fVar146 * fVar122;
        auVar130._4_4_ = fVar156 * fVar133;
        auVar130._8_4_ = fVar159 * fVar135;
        auVar130._12_4_ = fVar162 * fVar137;
        auVar130._16_4_ = fVar164 * fVar139;
        auVar130._20_4_ = fVar165 * fVar141;
        auVar130._24_4_ = fVar166 * fVar143;
        auVar130._28_4_ = fVar167 * fVar145;
        auVar154._0_4_ = fVar121 * fVar122;
        auVar154._4_4_ = fVar132 * fVar133;
        auVar154._8_4_ = fVar134 * fVar135;
        auVar154._12_4_ = fVar136 * fVar137;
        auVar154._16_4_ = fVar138 * fVar139;
        auVar154._20_4_ = fVar140 * fVar141;
        auVar154._24_4_ = fVar142 * fVar143;
        auVar154._28_4_ = fVar144 * fVar145;
        auVar189 = vsubps_avx(auVar189,auVar188);
        auVar191 = vsubps_avx(auVar191,auVar130);
        auVar33 = vsubps_avx(auVar33,auVar154);
        fVar80 = auVar189._0_4_;
        fVar92 = auVar189._4_4_;
        fVar95 = auVar189._8_4_;
        fVar132 = auVar189._12_4_;
        fVar138 = auVar189._16_4_;
        fVar144 = auVar189._20_4_;
        fVar159 = auVar189._24_4_;
        fVar165 = auVar189._28_4_;
        fVar90 = auVar191._0_4_;
        fVar93 = auVar191._4_4_;
        fVar96 = auVar191._8_4_;
        fVar134 = auVar191._12_4_;
        fVar140 = auVar191._16_4_;
        fVar146 = auVar191._20_4_;
        fVar162 = auVar191._24_4_;
        fVar166 = auVar191._28_4_;
        fVar91 = auVar33._0_4_;
        fVar94 = auVar33._4_4_;
        fVar121 = auVar33._8_4_;
        fVar136 = auVar33._12_4_;
        fVar142 = auVar33._16_4_;
        fVar156 = auVar33._20_4_;
        fVar164 = auVar33._24_4_;
        fVar167 = auVar33._28_4_;
        auVar131._0_4_ = fVar91 * fVar91 + fVar90 * fVar90 + fVar80 * fVar80;
        auVar131._4_4_ = fVar94 * fVar94 + fVar93 * fVar93 + fVar92 * fVar92;
        auVar131._8_4_ = fVar121 * fVar121 + fVar96 * fVar96 + fVar95 * fVar95;
        auVar131._12_4_ = fVar136 * fVar136 + fVar134 * fVar134 + fVar132 * fVar132;
        auVar131._16_4_ = fVar142 * fVar142 + fVar140 * fVar140 + fVar138 * fVar138;
        auVar131._20_4_ = fVar156 * fVar156 + fVar146 * fVar146 + fVar144 * fVar144;
        auVar131._24_4_ = fVar164 * fVar164 + fVar162 * fVar162 + fVar159 * fVar159;
        auVar131._28_4_ = fVar167 * fVar167 + fVar166 * fVar166 + fVar165 * fVar165;
        auVar33 = vsqrtps_avx(auVar131);
        auVar43 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
        auVar155._0_4_ = auVar43._0_4_ * auVar170._0_4_;
        auVar155._4_4_ = auVar43._4_4_ * auVar170._4_4_;
        auVar155._8_4_ = auVar43._8_4_ * auVar170._8_4_;
        auVar155._12_4_ = auVar43._12_4_ * auVar170._12_4_;
        auVar155._16_4_ = auVar43._0_4_ * auVar170._16_4_;
        auVar155._20_4_ = auVar43._4_4_ * auVar170._20_4_;
        auVar155._24_4_ = auVar43._8_4_ * auVar170._24_4_;
        auVar155._28_4_ = auVar43._12_4_ * auVar170._28_4_;
        auVar189 = vminps_avx(auVar155,auVar33);
        auVar191 = vdivps_avx(auVar189,auVar33);
        auVar189 = vcmpps_avx(auVar33,
                              ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77
                              ,5);
        fVar122 = (float)(auVar191._0_4_ & auVar189._0_4_);
        fVar133 = (float)(auVar191._4_4_ & auVar189._4_4_);
        fVar135 = (float)(auVar191._8_4_ & auVar189._8_4_);
        fVar137 = (float)(auVar191._12_4_ & auVar189._12_4_);
        fVar139 = (float)(auVar191._16_4_ & auVar189._16_4_);
        fVar141 = (float)(auVar191._20_4_ & auVar189._20_4_);
        fVar143 = (float)(auVar191._24_4_ & auVar189._24_4_);
        fVar145 = (float)(auVar191._28_4_ & auVar189._28_4_);
        auVar111._0_4_ = fVar80 * fVar122;
        auVar111._4_4_ = fVar92 * fVar133;
        auVar111._8_4_ = fVar95 * fVar135;
        auVar111._12_4_ = fVar132 * fVar137;
        auVar111._16_4_ = fVar138 * fVar139;
        auVar111._20_4_ = fVar144 * fVar141;
        auVar111._24_4_ = fVar159 * fVar143;
        auVar111._28_4_ = fVar165 * fVar145;
        auVar72._0_4_ = fVar90 * fVar122;
        auVar72._4_4_ = fVar93 * fVar133;
        auVar72._8_4_ = fVar96 * fVar135;
        auVar72._12_4_ = fVar134 * fVar137;
        auVar72._16_4_ = fVar140 * fVar139;
        auVar72._20_4_ = fVar146 * fVar141;
        auVar72._24_4_ = fVar162 * fVar143;
        auVar72._28_4_ = fVar166 * fVar145;
        auVar120._0_4_ = fVar91 * fVar122;
        auVar120._4_4_ = fVar94 * fVar133;
        auVar120._8_4_ = fVar121 * fVar135;
        auVar120._12_4_ = fVar136 * fVar137;
        auVar120._16_4_ = fVar142 * fVar139;
        auVar120._20_4_ = fVar156 * fVar141;
        auVar120._24_4_ = fVar164 * fVar143;
        auVar120._28_4_ = fVar167 * fVar145;
        auVar84 = vsubps_avx(auVar84,auVar111);
        auVar99 = vsubps_avx(auVar99,auVar72);
        auVar114 = vsubps_avx(auVar114,auVar120);
        auVar84 = vmaskmovps_avx(auVar37,auVar84);
        auVar99 = vmaskmovps_avx(auVar37,auVar99);
        auVar114 = vmaskmovps_avx(auVar37,auVar114);
        auVar43 = auVar84._0_16_;
        auVar31 = auVar84._16_16_;
        auVar40 = auVar99._0_16_;
        auVar82 = auVar114._0_16_;
        auVar97 = auVar99._16_16_;
        auVar41 = auVar114._16_16_;
        if ((uVar30 & 1) != 0) {
          *(int *)(param_1 + local_2a0) = auVar84._0_4_;
        }
        if ((uVar30 & 2) != 0) {
          uVar11 = vextractps_avx(auVar43,1);
          *(undefined4 *)(param_1 + iStack_29c) = uVar11;
        }
        if ((uVar30 & 4) != 0) {
          uVar11 = vextractps_avx(auVar43,2);
          *(undefined4 *)(param_1 + iStack_298) = uVar11;
        }
        if ((uVar30 & 8) != 0) {
          uVar11 = vextractps_avx(auVar43,3);
          *(undefined4 *)(param_1 + iStack_294) = uVar11;
        }
        if ((uVar30 & 0x10) != 0) {
          *(int *)(param_1 + local_2e0) = auVar84._16_4_;
        }
        if ((uVar30 & 0x20) != 0) {
          uVar11 = vextractps_avx(auVar31,1);
          *(undefined4 *)(param_1 + iStack_2dc) = uVar11;
        }
        if ((uVar30 & 0x40) != 0) {
          uVar11 = vextractps_avx(auVar31,2);
          *(undefined4 *)(param_1 + iStack_2d8) = uVar11;
        }
        if (cVar7 < '\0') {
          uVar11 = vextractps_avx(auVar31,3);
          *(undefined4 *)(param_1 + iStack_2d4) = uVar11;
        }
        if ((uVar30 & 1) != 0) {
          *(int *)(param_1 + 4 + (longlong)local_2a0) = auVar99._0_4_;
        }
        if ((uVar30 & 2) != 0) {
          uVar11 = vextractps_avx(auVar40,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_29c) = uVar11;
        }
        if ((uVar30 & 4) != 0) {
          uVar11 = vextractps_avx(auVar40,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_298) = uVar11;
        }
        if ((uVar30 & 8) != 0) {
          uVar11 = vextractps_avx(auVar40,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_294) = uVar11;
        }
        if ((uVar30 & 0x10) != 0) {
          *(int *)(param_1 + 4 + (longlong)local_2e0) = auVar99._16_4_;
        }
        if ((uVar30 & 0x20) != 0) {
          uVar11 = vextractps_avx(auVar97,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_2dc) = uVar11;
        }
        if ((uVar30 & 0x40) != 0) {
          uVar11 = vextractps_avx(auVar97,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_2d8) = uVar11;
        }
        if (cVar7 < '\0') {
          uVar11 = vextractps_avx(auVar97,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iStack_2d4) = uVar11;
        }
        if ((uVar30 & 1) != 0) {
          *(int *)(param_1 + 8 + (longlong)local_2a0) = auVar114._0_4_;
        }
        if ((uVar30 & 2) != 0) {
          uVar11 = vextractps_avx(auVar82,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_29c) = uVar11;
        }
        if ((uVar30 & 4) != 0) {
          uVar11 = vextractps_avx(auVar82,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_298) = uVar11;
        }
        if ((uVar30 & 8) != 0) {
          uVar11 = vextractps_avx(auVar82,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_294) = uVar11;
        }
        if ((uVar30 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)local_2e0) = auVar114._16_4_;
        }
        if ((uVar30 & 0x20) != 0) {
          uVar11 = vextractps_avx(auVar41,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_2dc) = uVar11;
        }
        if ((uVar30 & 0x40) != 0) {
          uVar11 = vextractps_avx(auVar41,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_2d8) = uVar11;
        }
        if (cVar7 < '\0') {
          uVar11 = vextractps_avx(auVar41,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iStack_2d4) = uVar11;
        }
        if ((uVar30 & 1) != 0) {
          *(int *)(param_1 + 0xc + (longlong)local_2a0) = auVar39._0_4_;
        }
        if ((uVar30 & 2) != 0) {
          uVar11 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_29c) = uVar11;
        }
        if ((uVar30 & 4) != 0) {
          uVar11 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_298) = uVar11;
        }
        if ((uVar30 & 8) != 0) {
          uVar11 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_294) = uVar11;
        }
        if ((uVar30 & 0x10) != 0) {
          *(int *)(param_1 + 0xc + (longlong)local_2e0) = auVar32._0_4_;
        }
        if ((uVar30 & 0x20) != 0) {
          uVar11 = vextractps_avx(auVar32,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2dc) = uVar11;
        }
        if ((uVar30 & 0x40) != 0) {
          uVar11 = vextractps_avx(auVar32,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2d8) = uVar11;
        }
        if (cVar7 < '\0') {
          uVar11 = vextractps_avx(auVar32,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iStack_2d4) = uVar11;
        }
      }
    }
  }
  return;
}

// ApplyPBDPlanarConstraintsNoFriction_avx @ 14030b5a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsNoFriction_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  int iVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  int iVar44;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [32];
  undefined1 auVar50 [32];
  undefined1 auVar46 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  uint uVar75;
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  undefined1 auVar69 [64];
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
  undefined1 auVar92 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [16];
  undefined1 auVar96 [32];
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 local_260 [32];
  undefined1 local_240 [32];
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar49 [32];
  
  uVar8 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar8 = param_5;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar22 = 0;
  }
  else {
    lVar13 = 0x10;
    uVar22 = 0;
    auVar69 = ZEXT1264(ZEXT812(0));
    uVar70 = 0;
    do {
      auVar35 = vpslld_avx(*(undefined1 (*) [16])(param_2 + 0x10 + (ulonglong)uVar70),4);
      auVar28 = vpslld_avx(*(undefined1 (*) [16])(param_2 + (ulonglong)uVar70),4);
      lVar26 = (longlong)auVar28._0_4_;
      lVar23 = (longlong)auVar28._4_4_;
      lVar12 = (longlong)auVar28._8_4_;
      lVar9 = (longlong)auVar28._12_4_;
      lVar25 = (longlong)auVar35._0_4_;
      lVar24 = (longlong)auVar35._4_4_;
      lVar27 = (longlong)auVar35._8_4_;
      lVar21 = (longlong)auVar35._12_4_;
      auVar28 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + lVar24)),0x10);
      auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_1 + lVar21)),0x30);
      auVar35 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar23)),0x10);
      auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_1 + lVar12)),0x20);
      auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_1 + lVar9)),0x30);
      auVar101._16_16_ = auVar28;
      auVar101._0_16_ = auVar35;
      auVar92 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x10);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x30);
      auVar47 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x10);
      auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_1 + 4 + lVar12)),0x20);
      auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_1 + 4 + lVar9)),0x30);
      auVar95 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x10);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x30);
      auVar97 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x10);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + 8 + lVar12)),0x20);
      auVar93._16_16_ = auVar92;
      auVar93._0_16_ = auVar47;
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(param_1 + 8 + lVar9)),0x30);
      auVar96._16_16_ = auVar95;
      auVar96._0_16_ = auVar97;
      uVar71 = *(uint *)(param_1 + 0xc + lVar26);
      uVar72 = *(uint *)(param_1 + 0xc + lVar23);
      uVar73 = *(uint *)(param_1 + 0xc + lVar12);
      uVar74 = *(uint *)(param_1 + 0xc + lVar9);
      uVar75 = *(uint *)(param_1 + 0xc + lVar25);
      uVar2 = *(uint *)(param_1 + 0xc + lVar24);
      uVar3 = *(uint *)(param_1 + 0xc + lVar27);
      uVar4 = *(uint *)(param_1 + 0xc + lVar21);
      auVar45 = vinsertps_avx(ZEXT416(uVar75),ZEXT416(uVar2),0x10);
      auVar45 = vinsertps_avx(auVar45,ZEXT416(uVar3),0x20);
      auVar45 = vinsertps_avx(auVar45,ZEXT416(uVar4),0x30);
      auVar58 = vinsertps_avx(ZEXT416(uVar71),ZEXT416(uVar72),0x10);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(uVar73),0x20);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(uVar74),0x30);
      auVar98._16_16_ = auVar45;
      auVar98._0_16_ = auVar58;
      auVar29 = vcmpps_avx(auVar98,auVar69._0_32_,8);
      if ((((((((SUB321(auVar29 >> 0x1f,0) & 1) == 0 && (SUB321(auVar29 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar29 >> 0x5f,0) & 1) == 0) && SUB321(auVar29 >> 0x7f,0) == '\0') &&
            (SUB321(auVar29 >> 0x9f,0) & 1) == 0) && SUB321(auVar29 >> 0xbf,0) == '\0') &&
          (SUB321(auVar29 >> 0xdf,0) & 1) == 0) && -1 < auVar29[0x1f]) {
        auVar45 = *(undefined1 (*) [16])(param_3 + -0x40 + lVar13 * 4);
        auVar58 = *(undefined1 (*) [16])(param_3 + -0x30 + lVar13 * 4);
        auVar5 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar13 * 4);
        auVar6 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar13 * 4);
        auVar59._16_16_ = auVar58;
        auVar59._0_16_ = auVar45;
        auVar62._16_16_ = auVar6;
        auVar62._0_16_ = auVar5;
        auVar46 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar13 * 4);
        auVar53 = *(undefined1 (*) [16])(param_3 + lVar13 * 4);
        auVar76._16_16_ = auVar46;
        auVar76._0_16_ = auVar53;
        auVar29._16_16_ = auVar45;
        auVar29._0_16_ = auVar58;
        auVar29 = vblendps_avx(auVar59,auVar29,0x24);
        auVar29 = vpermilps_avx(auVar29,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar7 = *(undefined4 *)(param_3 + -0x18 + lVar13 * 4);
        auVar82._20_4_ = uVar7;
        auVar82._16_4_ = uVar7;
        auVar82._24_4_ = uVar7;
        auVar82._28_4_ = uVar7;
        uVar7 = *(undefined4 *)(param_3 + -0x1c + lVar13 * 4);
        auVar82._4_4_ = uVar7;
        auVar82._0_4_ = uVar7;
        auVar82._8_4_ = uVar7;
        auVar82._12_4_ = uVar7;
        auVar29 = vblendps_avx(auVar29,auVar82,0x88);
        auVar63._16_16_ = auVar53;
        auVar63._0_16_ = auVar46;
        auVar48 = vblendps_avx(auVar63,auVar76,0x44);
        auVar48 = vpermilps_avx(auVar48,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        uVar7 = *(undefined4 *)(param_3 + -0xc + lVar13 * 4);
        auVar36._20_4_ = uVar7;
        auVar36._16_4_ = uVar7;
        auVar36._24_4_ = uVar7;
        auVar36._28_4_ = uVar7;
        auVar45 = vshufps_avx(auVar6,auVar6,0xec);
        auVar36._0_16_ = auVar45;
        auVar48 = vblendps_avx(auVar48,auVar36,0x13);
        auVar83._16_16_ = auVar48._0_16_;
        auVar83._0_16_ = auVar29._0_16_;
        auVar38 = vperm2f128_avx(auVar29,auVar48,0x31);
        auVar29 = vblendps_avx(auVar62,auVar59,0x24);
        auVar48._16_16_ = auVar5;
        auVar48._0_16_ = auVar58;
        auVar29 = vshufps_avx(auVar48,auVar29,0x21);
        auVar29 = vshufps_avx(auVar29,auVar62,0xc2);
        auVar48 = vshufps_avx(auVar63,auVar76,0xc4);
        auVar29 = vblendps_avx(auVar29,auVar48,0xe0);
        auVar45 = *(undefined1 (*) [16])(param_4 + -0x40 + lVar13 * 4);
        auVar58 = *(undefined1 (*) [16])(param_4 + -0x30 + lVar13 * 4);
        auVar5 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar13 * 4);
        auVar6 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar13 * 4);
        auVar64._16_16_ = auVar58;
        auVar64._0_16_ = auVar45;
        auVar77._16_16_ = auVar6;
        auVar77._0_16_ = auVar5;
        auVar46 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar13 * 4);
        auVar53 = *(undefined1 (*) [16])(param_4 + lVar13 * 4);
        auVar89._16_16_ = auVar46;
        auVar89._0_16_ = auVar53;
        auVar54._16_16_ = auVar45;
        auVar54._0_16_ = auVar58;
        auVar48 = vblendps_avx(auVar64,auVar54,0x24);
        auVar48 = vpermilps_avx(auVar48,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar7 = *(undefined4 *)(param_4 + -0x18 + lVar13 * 4);
        auVar37._20_4_ = uVar7;
        auVar37._16_4_ = uVar7;
        auVar37._24_4_ = uVar7;
        auVar37._28_4_ = uVar7;
        uVar7 = *(undefined4 *)(param_4 + -0x1c + lVar13 * 4);
        auVar37._4_4_ = uVar7;
        auVar37._0_4_ = uVar7;
        auVar37._8_4_ = uVar7;
        auVar37._12_4_ = uVar7;
        auVar48 = vblendps_avx(auVar48,auVar37,0x88);
        auVar84._16_16_ = auVar53;
        auVar84._0_16_ = auVar46;
        auVar36 = vblendps_avx(auVar84,auVar89,0x44);
        auVar36 = vpermilps_avx(auVar36,
                                ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                               );
        uVar7 = *(undefined4 *)(param_4 + -0xc + lVar13 * 4);
        auVar60._20_4_ = uVar7;
        auVar60._16_4_ = uVar7;
        auVar60._24_4_ = uVar7;
        auVar60._28_4_ = uVar7;
        auVar45 = vshufps_avx(auVar6,auVar6,0xec);
        auVar60._0_16_ = auVar45;
        auVar36 = vblendps_avx(auVar36,auVar60,0x13);
        auVar54 = vperm2f128_avx(auVar48,auVar36,0x31);
        auVar37 = vblendps_avx(auVar77,auVar64,0x24);
        auVar69 = ZEXT864(0) << 0x20;
        auVar30._16_16_ = auVar5;
        auVar30._0_16_ = auVar58;
        auVar37 = vshufps_avx(auVar30,auVar37,0x21);
        auVar37 = vshufps_avx(auVar37,auVar77,0xc2);
        auVar30 = vshufps_avx(auVar84,auVar89,0xc4);
        auVar37 = vblendps_avx(auVar37,auVar30,0xe0);
        auVar101 = vsubps_avx(auVar83,auVar101);
        auVar93 = vsubps_avx(auVar38,auVar93);
        auVar29 = vsubps_avx(auVar29,auVar96);
        auVar38._0_4_ =
             auVar37._0_4_ * auVar29._0_4_ +
             auVar48._0_4_ * auVar101._0_4_ + auVar54._0_4_ * auVar93._0_4_;
        auVar38._4_4_ =
             auVar37._4_4_ * auVar29._4_4_ +
             auVar48._4_4_ * auVar101._4_4_ + auVar54._4_4_ * auVar93._4_4_;
        auVar38._8_4_ =
             auVar37._8_4_ * auVar29._8_4_ +
             auVar48._8_4_ * auVar101._8_4_ + auVar54._8_4_ * auVar93._8_4_;
        auVar38._12_4_ =
             auVar37._12_4_ * auVar29._12_4_ +
             auVar48._12_4_ * auVar101._12_4_ + auVar54._12_4_ * auVar93._12_4_;
        auVar38._16_4_ =
             auVar37._16_4_ * auVar29._16_4_ +
             auVar36._0_4_ * auVar101._16_4_ + auVar54._16_4_ * auVar93._16_4_;
        auVar38._20_4_ =
             auVar37._20_4_ * auVar29._20_4_ +
             auVar36._4_4_ * auVar101._20_4_ + auVar54._20_4_ * auVar93._20_4_;
        auVar38._24_4_ =
             auVar37._24_4_ * auVar29._24_4_ +
             auVar36._8_4_ * auVar101._24_4_ + auVar54._24_4_ * auVar93._24_4_;
        auVar38._28_4_ =
             auVar37._28_4_ * auVar29._28_4_ +
             auVar36._12_4_ * auVar101._28_4_ + auVar54._28_4_ * auVar93._28_4_;
        auVar29 = vcmpps_avx(ZEXT832(0) << 0x20,auVar38,1);
        auVar93 = vcmpps_avx(auVar98,ZEXT832(0) << 0x20,4);
        auVar45._0_4_ = auVar29._0_4_ & auVar93._0_4_;
        auVar45._4_4_ = auVar29._4_4_ & auVar93._4_4_;
        auVar45._8_4_ = auVar29._8_4_ & auVar93._8_4_;
        auVar45._12_4_ = auVar29._12_4_ & auVar93._12_4_;
        auVar49._16_4_ = auVar29._16_4_ & auVar93._16_4_;
        auVar49._0_16_ = auVar45;
        auVar49._20_4_ = auVar29._20_4_ & auVar93._20_4_;
        auVar49._24_4_ = auVar29._24_4_ & auVar93._24_4_;
        auVar49._28_4_ = auVar29._28_4_ & auVar93._28_4_;
        uVar14 = vmovmskps_avx(auVar49);
        if (uVar14 != 0) {
          auVar45 = vpackssdw_avx(auVar45,auVar49._16_16_);
          local_220 = auVar35._0_4_;
          fStack_21c = auVar35._4_4_;
          fStack_218 = auVar35._8_4_;
          fStack_214 = auVar35._12_4_;
          fStack_210 = auVar28._0_4_;
          fStack_20c = auVar28._4_4_;
          fStack_208 = auVar28._8_4_;
          fStack_204 = auVar28._12_4_;
          auVar39._0_4_ = auVar48._0_4_ * auVar38._0_4_ + local_220;
          auVar39._4_4_ = auVar48._4_4_ * auVar38._4_4_ + fStack_21c;
          auVar39._8_4_ = auVar48._8_4_ * auVar38._8_4_ + fStack_218;
          auVar39._12_4_ = auVar48._12_4_ * auVar38._12_4_ + fStack_214;
          auVar39._16_4_ = auVar36._0_4_ * auVar38._16_4_ + fStack_210;
          auVar39._20_4_ = auVar36._4_4_ * auVar38._20_4_ + fStack_20c;
          auVar39._24_4_ = auVar36._8_4_ * auVar38._24_4_ + fStack_208;
          auVar39._28_4_ = auVar36._12_4_ * auVar38._28_4_ + fStack_204;
          auVar55._0_4_ = auVar47._0_4_ + auVar54._0_4_ * auVar38._0_4_;
          auVar55._4_4_ = auVar47._4_4_ + auVar54._4_4_ * auVar38._4_4_;
          auVar55._8_4_ = auVar47._8_4_ + auVar54._8_4_ * auVar38._8_4_;
          auVar55._12_4_ = auVar47._12_4_ + auVar54._12_4_ * auVar38._12_4_;
          auVar55._16_4_ = auVar92._0_4_ + auVar54._16_4_ * auVar38._16_4_;
          auVar55._20_4_ = auVar92._4_4_ + auVar54._20_4_ * auVar38._20_4_;
          auVar55._24_4_ = auVar92._8_4_ + auVar54._24_4_ * auVar38._24_4_;
          auVar55._28_4_ = auVar92._12_4_ + auVar54._28_4_ * auVar38._28_4_;
          auVar31._0_4_ = auVar97._0_4_ + auVar37._0_4_ * auVar38._0_4_;
          auVar31._4_4_ = auVar97._4_4_ + auVar37._4_4_ * auVar38._4_4_;
          auVar31._8_4_ = auVar97._8_4_ + auVar37._8_4_ * auVar38._8_4_;
          auVar31._12_4_ = auVar97._12_4_ + auVar37._12_4_ * auVar38._12_4_;
          auVar31._16_4_ = auVar95._0_4_ + auVar37._16_4_ * auVar38._16_4_;
          auVar31._20_4_ = auVar95._4_4_ + auVar37._20_4_ * auVar38._20_4_;
          auVar31._24_4_ = auVar95._8_4_ + auVar37._24_4_ * auVar38._24_4_;
          auVar31._28_4_ = auVar95._12_4_ + auVar37._28_4_ * auVar38._28_4_;
          auVar28 = vpmovsxwd_avx(auVar45);
          auVar35 = vpunpckhwd_avx(auVar45,auVar45);
          auVar50._16_16_ = auVar35;
          auVar50._0_16_ = auVar28;
          auVar29 = vmaskmovps_avx(auVar50,auVar39);
          auVar93 = vmaskmovps_avx(auVar50,auVar55);
          auVar96 = vmaskmovps_avx(auVar50,auVar31);
          cVar11 = (char)uVar14;
          auVar95 = auVar29._0_16_;
          auVar97 = auVar29._16_16_;
          auVar92 = auVar93._0_16_;
          auVar47 = auVar93._16_16_;
          auVar28 = auVar96._0_16_;
          auVar35 = auVar96._16_16_;
          if ((uVar14 & 1) != 0) {
            *(int *)(param_1 + lVar26) = auVar29._0_4_;
          }
          if ((uVar14 & 2) != 0) {
            uVar7 = vextractps_avx(auVar95,1);
            *(undefined4 *)(param_1 + lVar23) = uVar7;
          }
          if ((uVar14 & 4) != 0) {
            uVar7 = vextractps_avx(auVar95,2);
            *(undefined4 *)(param_1 + lVar12) = uVar7;
          }
          if ((uVar14 & 8) != 0) {
            uVar7 = vextractps_avx(auVar95,3);
            *(undefined4 *)(param_1 + lVar9) = uVar7;
          }
          if ((uVar14 & 0x10) != 0) {
            *(int *)(param_1 + lVar25) = auVar29._16_4_;
          }
          if ((uVar14 & 0x20) != 0) {
            uVar7 = vextractps_avx(auVar97,1);
            *(undefined4 *)(param_1 + lVar24) = uVar7;
          }
          if ((uVar14 & 0x40) != 0) {
            uVar7 = vextractps_avx(auVar97,2);
            *(undefined4 *)(param_1 + lVar27) = uVar7;
          }
          if (cVar11 < '\0') {
            uVar7 = vextractps_avx(auVar97,3);
            *(undefined4 *)(param_1 + lVar21) = uVar7;
          }
          if ((uVar14 & 1) != 0) {
            *(int *)(param_1 + 4 + lVar26) = auVar93._0_4_;
          }
          if ((uVar14 & 2) != 0) {
            uVar7 = vextractps_avx(auVar92,1);
            *(undefined4 *)(param_1 + 4 + lVar23) = uVar7;
          }
          if ((uVar14 & 4) != 0) {
            uVar7 = vextractps_avx(auVar92,2);
            *(undefined4 *)(param_1 + 4 + lVar12) = uVar7;
          }
          if ((uVar14 & 8) != 0) {
            uVar7 = vextractps_avx(auVar92,3);
            *(undefined4 *)(param_1 + 4 + lVar9) = uVar7;
          }
          if ((uVar14 & 0x10) != 0) {
            *(int *)(param_1 + 4 + lVar25) = auVar93._16_4_;
          }
          if ((uVar14 & 0x20) != 0) {
            uVar7 = vextractps_avx(auVar47,1);
            *(undefined4 *)(param_1 + 4 + lVar24) = uVar7;
          }
          if ((uVar14 & 0x40) != 0) {
            uVar7 = vextractps_avx(auVar47,2);
            *(undefined4 *)(param_1 + 4 + lVar27) = uVar7;
          }
          if (cVar11 < '\0') {
            uVar7 = vextractps_avx(auVar47,3);
            *(undefined4 *)(param_1 + 4 + lVar21) = uVar7;
          }
          if ((uVar14 & 1) != 0) {
            *(int *)(param_1 + 8 + lVar26) = auVar96._0_4_;
          }
          if ((uVar14 & 2) != 0) {
            uVar7 = vextractps_avx(auVar28,1);
            *(undefined4 *)(param_1 + 8 + lVar23) = uVar7;
          }
          if ((uVar14 & 4) != 0) {
            uVar7 = vextractps_avx(auVar28,2);
            *(undefined4 *)(param_1 + 8 + lVar12) = uVar7;
          }
          if ((uVar14 & 8) != 0) {
            uVar7 = vextractps_avx(auVar28,3);
            *(undefined4 *)(param_1 + 8 + lVar9) = uVar7;
          }
          if ((uVar14 & 0x10) != 0) {
            *(int *)(param_1 + 8 + lVar25) = auVar96._16_4_;
          }
          if ((uVar14 & 0x20) != 0) {
            uVar7 = vextractps_avx(auVar35,1);
            *(undefined4 *)(param_1 + 8 + lVar24) = uVar7;
          }
          if ((uVar14 & 0x40) != 0) {
            uVar7 = vextractps_avx(auVar35,2);
            *(undefined4 *)(param_1 + 8 + lVar27) = uVar7;
          }
          if (cVar11 < '\0') {
            uVar7 = vextractps_avx(auVar35,3);
            *(undefined4 *)(param_1 + 8 + lVar21) = uVar7;
          }
          if ((uVar14 & 1) != 0) {
            *(uint *)(param_1 + 0xc + lVar26) = uVar71;
          }
          if ((uVar14 & 2) != 0) {
            *(uint *)(param_1 + 0xc + lVar23) = uVar72;
          }
          if ((uVar14 & 4) != 0) {
            *(uint *)(param_1 + 0xc + lVar12) = uVar73;
          }
          if ((uVar14 & 8) != 0) {
            *(uint *)(param_1 + 0xc + lVar9) = uVar74;
          }
          if ((uVar14 & 0x10) != 0) {
            *(uint *)(param_1 + 0xc + lVar25) = uVar75;
          }
          if ((uVar14 & 0x20) != 0) {
            *(uint *)(param_1 + 0xc + lVar24) = uVar2;
          }
          if ((uVar14 & 0x40) != 0) {
            *(uint *)(param_1 + 0xc + lVar27) = uVar3;
          }
          if (cVar11 < '\0') {
            *(uint *)(param_1 + 0xc + lVar21) = uVar4;
          }
        }
      }
      uVar70 = uVar70 + 0x20;
      lVar13 = lVar13 + 0x18;
      uVar22 = uVar22 + 8;
    } while ((int)uVar22 < (int)(uVar8 & 0xfffffff8));
  }
  if ((int)uVar22 < (int)param_5) {
    auVar28 = vpshufd_avx(ZEXT416(uVar22),0);
    auVar56._16_16_ = auVar28;
    auVar56._0_16_ = auVar28;
    auVar56 = auVar56 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar6 = vpshufd_avx(ZEXT416(param_5),0);
    auVar53 = auVar56._0_16_;
    auVar28 = vpcmpgtd_avx(auVar6,auVar56._16_16_);
    auVar35 = vpcmpgtd_avx(auVar6,auVar53);
    auVar65._16_16_ = auVar28;
    auVar65._0_16_ = auVar35;
    auVar29 = vmaskmovps_avx(auVar65,*(undefined1 (*) [32])(param_2 + (int)(uVar22 << 2)));
    auVar100 = vpslld_avx(auVar29._0_16_,4);
    auVar46 = vpslld_avx(auVar29._16_16_,4);
    auVar5 = vpand_avx(auVar100,auVar35);
    auVar45 = vpand_avx(auVar28,auVar46);
    lVar13 = param_1 + auVar45._0_4_;
    iVar20 = auVar45._8_4_;
    iVar15 = auVar45._12_4_;
    uVar8 = auVar35._0_4_;
    uVar22 = auVar35._4_4_;
    uVar70 = auVar35._8_4_;
    uVar71 = auVar35._12_4_;
    uVar72 = auVar28._0_4_;
    uVar73 = auVar28._4_4_;
    uVar74 = auVar28._8_4_;
    uVar75 = auVar28._12_4_;
    lVar9 = param_1 + auVar5._0_4_;
    lVar12 = param_1 + auVar45._4_4_;
    auVar28 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar72 & _UNK_150b50d50) + lVar13)),
                            ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d54) + lVar12)),0x10);
    auVar35 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar72 & _UNK_150b50d70) + lVar13)),
                            ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d74) + lVar12)),0x10);
    auVar92 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar72 & _UNK_150b50d90) + lVar13)),
                            ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50d94) + lVar12)),0x10);
    lVar13 = param_1 + iVar20;
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d58) + lVar13)
                                           ),0x20);
    auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d78) + lVar13)
                                           ),0x20);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50d98) + lVar13)
                                           ),0x20);
    lVar13 = param_1 + iVar15;
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d5c) + lVar13)
                                           ),0x30);
    auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d7c) + lVar13)
                                           ),0x30);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50d9c) + lVar13)
                                           ),0x30);
    lVar13 = param_1 + auVar5._4_4_;
    auVar47 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar8 & 
                                              ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50d44) + lVar13)),0x10);
    auVar95 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar8 & 
                                              ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50d64) + lVar13)),0x10);
    auVar97 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar8 & 
                                              ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                              ) + lVar9)),
                            ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50d84) + lVar13)),0x10);
    lVar13 = param_1 + auVar5._8_4_;
    auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50d48) + lVar13)
                                           ),0x20);
    auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50d68) + lVar13)
                                           ),0x20);
    auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50d88) + lVar13)
                                           ),0x20);
    lVar13 = param_1 + auVar5._12_4_;
    auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50d4c) + lVar13)
                                           ),0x30);
    auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50d6c) + lVar13)
                                           ),0x30);
    auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50d8c) + lVar13)
                                           ),0x30);
    auVar45 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar45._0_4_)),
                            ZEXT416(*(uint *)(param_1 + auVar45._4_4_)),0x10);
    auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(param_1 + iVar20)),0x20);
    auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(param_1 + iVar15)),0x30);
    auVar58 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar5._0_4_)),
                            ZEXT416(*(uint *)(param_1 + auVar5._4_4_)),0x10);
    auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + auVar5._8_4_)),0x20);
    auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + auVar5._12_4_)),0x30);
    auVar78._16_16_ = auVar45;
    auVar78._0_16_ = auVar58;
    auVar32._16_16_ = auVar28;
    auVar32._0_16_ = auVar47;
    auVar40._16_16_ = auVar35;
    auVar40._0_16_ = auVar95;
    auVar29 = vmaskmovps_avx(auVar65,auVar78);
    auVar93 = vmaskmovps_avx(auVar65,auVar32);
    auVar96 = vmaskmovps_avx(auVar65,auVar40);
    auVar33._16_16_ = auVar92;
    auVar33._0_16_ = auVar97;
    auVar98 = vcmpps_avx(auVar33,ZEXT832(0) << 0x20,8);
    auVar65 = auVar65 & auVar98;
    if ((((((((SUB321(auVar65 >> 0x1f,0) & 1) == 0 && (SUB321(auVar65 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar65 >> 0x5f,0) & 1) == 0) && SUB321(auVar65 >> 0x7f,0) == '\0') &&
          (SUB321(auVar65 >> 0x9f,0) & 1) == 0) && SUB321(auVar65 >> 0xbf,0) == '\0') &&
        (SUB321(auVar65 >> 0xdf,0) & 1) == 0) && -1 < auVar65[0x1f]) {
      uVar10 = (ulonglong)auVar56._0_4_;
      pauVar1 = (undefined1 (*) [32])(param_3 + uVar10 * 0xc);
      auVar47 = vpcmpgtd_avx(auVar6,auVar56._16_16_);
      auVar28 = vpcmpgtd_avx(auVar6,auVar53);
      auVar28 = vpand_avx(auVar28,auVar47);
      auVar35 = vpcmpeqd_avx(auVar58,auVar58);
      auVar35 = auVar35 & ~auVar28;
      uVar8 = auVar47._0_4_;
      uVar22 = auVar47._4_4_;
      uVar70 = auVar47._8_4_;
      uVar71 = auVar47._12_4_;
      if ((((SUB161(auVar35 >> 0x1f,0) & 1) == 0 && (SUB161(auVar35 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar35 >> 0x5f,0) & 1) == 0) && -1 < auVar35[0xf]) {
        auVar48 = pauVar1[2];
        auVar66._16_16_ = *(undefined1 (*) [16])*pauVar1;
        auVar66._0_16_ = *(undefined1 (*) [16])(*pauVar1 + 0x10);
        auVar98 = vblendps_avx(*pauVar1,auVar66,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar7 = *(undefined4 *)(pauVar1[1] + 4);
        auVar87._4_4_ = uVar7;
        auVar87._0_4_ = uVar7;
        auVar87._8_4_ = uVar7;
        auVar87._12_4_ = uVar7;
        uVar7 = *(undefined4 *)(pauVar1[1] + 8);
        auVar87._20_4_ = uVar7;
        auVar87._16_4_ = uVar7;
        auVar87._24_4_ = uVar7;
        auVar87._28_4_ = uVar7;
        auVar98 = vblendps_avx(auVar98,auVar87,0x88);
        auVar102._16_16_ = *(undefined1 (*) [16])pauVar1[2];
        auVar102._0_16_ = *(undefined1 (*) [16])(pauVar1[2] + 0x10);
        auVar101 = vblendps_avx(auVar102,auVar48,0x44);
        auVar101 = vpermilps_avx(auVar101,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        auVar28 = vshufps_avx(*(undefined1 (*) [16])(pauVar1[1] + 0x10),
                              *(undefined1 (*) [16])(pauVar1[1] + 0x10),0xec);
        uVar7 = *(undefined4 *)(pauVar1[1] + 0x14);
        auVar79._20_4_ = uVar7;
        auVar79._16_4_ = uVar7;
        auVar79._24_4_ = uVar7;
        auVar79._28_4_ = uVar7;
        auVar79._0_16_ = auVar28;
        auVar101 = vblendps_avx(auVar101,auVar79,0x13);
        local_240._16_16_ = auVar101._0_16_;
        local_240._0_16_ = auVar98._0_16_;
        local_260 = vperm2f128_avx(auVar98,auVar101,0x31);
        auVar98 = vblendps_avx(pauVar1[1],*pauVar1,0x24);
        auVar98 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar1 + 0x10)),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,pauVar1[1],0xc2);
        auVar101 = vshufps_avx(auVar102,auVar48,0xc4);
        auVar85 = vblendps_avx(auVar98,auVar101,0xe0);
        auVar28 = *(undefined1 (*) [16])(param_4 + uVar10 * 0xc);
        auVar35 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar10 * 0xc);
        auVar95 = *(undefined1 (*) [16])(param_4 + 0x30 + uVar10 * 0xc);
        auVar99._16_16_ = auVar35;
        auVar99._0_16_ = auVar28;
        auVar45 = *(undefined1 (*) [16])(param_4 + 0x50 + uVar10 * 0xc);
        auVar58 = *(undefined1 (*) [16])(param_4 + 0x40 + uVar10 * 0xc);
        auVar88._16_16_ = auVar28;
        auVar88._0_16_ = auVar35;
        auVar98 = vblendps_avx(auVar99,auVar88,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar7 = *(undefined4 *)(param_4 + 0x28 + uVar10 * 0xc);
        auVar51._20_4_ = uVar7;
        auVar51._16_4_ = uVar7;
        auVar51._24_4_ = uVar7;
        auVar51._28_4_ = uVar7;
        uVar7 = *(undefined4 *)(param_4 + 0x24 + uVar10 * 0xc);
        auVar51._4_4_ = uVar7;
        auVar51._0_4_ = uVar7;
        auVar51._8_4_ = uVar7;
        auVar51._12_4_ = uVar7;
        uVar7 = *(undefined4 *)(param_4 + 0x34 + uVar10 * 0xc);
        auVar80._20_4_ = uVar7;
        auVar80._16_4_ = uVar7;
        auVar80._24_4_ = uVar7;
        auVar80._28_4_ = uVar7;
        auVar94._16_16_ = auVar95;
        auVar94._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + uVar10 * 0xc);
        auVar67._16_16_ = auVar45;
        auVar67._0_16_ = auVar58;
        auVar98 = vblendps_avx(auVar98,auVar51,0x88);
        auVar41._16_16_ = auVar58;
        auVar41._0_16_ = auVar45;
        auVar101 = vblendps_avx(auVar41,auVar67,0x44);
        auVar101 = vpermilps_avx(auVar101,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        auVar28 = vshufps_avx(auVar95,auVar95,0xec);
        auVar80._0_16_ = auVar28;
        auVar101 = vblendps_avx(auVar101,auVar80,0x13);
        auVar86._16_16_ = auVar101._0_16_;
        auVar86._0_16_ = auVar98._0_16_;
        auVar90 = vperm2f128_avx(auVar98,auVar101,0x31);
        auVar98 = vblendps_avx(auVar94,auVar99,0x24);
        auVar98 = vshufps_avx(ZEXT1632(auVar35),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,auVar94,0xc2);
        auVar101 = vshufps_avx(auVar41,auVar67,0xc4);
        auVar91 = vblendps_avx(auVar98,auVar101,0xe0);
      }
      else {
        auVar28 = vpcmpgtd_avx(auVar6,auVar53);
        uVar72 = auVar28._0_4_;
        auVar35._0_4_ =
             uVar72 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
        uVar73 = auVar28._4_4_;
        auVar35._4_4_ = uVar73 & _UNK_150b50b04;
        uVar74 = auVar28._8_4_;
        auVar35._8_4_ = uVar74 & _UNK_150b50b08;
        uVar75 = auVar28._12_4_;
        auVar35._12_4_ = uVar75 & _UNK_150b50b0c;
        uVar7 = vextractps_avx(auVar35,1);
        lVar9 = CONCAT44((int)((ulonglong)param_3 >> 0x20),uVar7);
        uVar7 = vextractps_avx(auVar35,2);
        lVar12 = CONCAT44(iVar15 >> 0x1f,uVar7);
        uVar7 = vextractps_avx(auVar35,3);
        lVar21 = CONCAT44(iVar20 >> 0x1f,uVar7);
        auVar28 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar8 & _UNK_150b50b10))),
                                ZEXT416(*(uint *)(*pauVar1 + (uVar22 & _UNK_150b50b14))),0x10);
        auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(*pauVar1 + (uVar70 & _UNK_150b50b18))),
                                0x20);
        auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(*pauVar1 + (uVar71 & _UNK_150b50b1c))),
                                0x30);
        auVar35 = vinsertps_avx(ZEXT416(*(uint *)*pauVar1),ZEXT416(*(uint *)(*pauVar1 + lVar9)),0x10
                               );
        auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(*pauVar1 + lVar12)),0x20);
        auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(*pauVar1 + lVar21)),0x30);
        auVar95 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar8 & _UNK_150b50b30))),
                                ZEXT416(*(uint *)(*pauVar1 + (uVar22 & _UNK_150b50b34))),0x10);
        auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(*pauVar1 + (uVar70 & _UNK_150b50b38))),
                                0x20);
        auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)(*pauVar1 + (uVar71 & _UNK_150b50b3c))),
                                0x30);
        auVar45 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 +
                                                 (uVar72 & 
                                                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                 ))),
                                ZEXT416(*(uint *)(*pauVar1 + (uVar73 & _UNK_150b50b24))),0x10);
        auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(*pauVar1 + (uVar74 & _UNK_150b50b28))),
                                0x20);
        auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(*pauVar1 + (uVar75 & _UNK_150b50b2c))),
                                0x30);
        auVar58 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar8 & _UNK_150b50b50))),
                                ZEXT416(*(uint *)(*pauVar1 + (uVar22 & _UNK_150b50b54))),0x10);
        auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(*pauVar1 + (uVar70 & _UNK_150b50b58))),
                                0x20);
        auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(*pauVar1 + (uVar71 & _UNK_150b50b5c))),
                                0x30);
        auVar5 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 +
                                                (uVar72 & 
                                                ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                ))),
                               ZEXT416(*(uint *)(*pauVar1 + (uVar73 & _UNK_150b50b44))),0x10);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(*pauVar1 + (uVar74 & _UNK_150b50b48))),0x20)
        ;
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(*pauVar1 + (uVar75 & _UNK_150b50b4c))),0x30)
        ;
        local_240._16_16_ = auVar28;
        local_240._0_16_ = auVar35;
        local_260._16_16_ = auVar95;
        local_260._0_16_ = auVar45;
        auVar85._16_16_ = auVar58;
        auVar85._0_16_ = auVar5;
        lVar13 = param_4 + uVar10 * 0xc;
        auVar28 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar8 & _UNK_150b50b10) + lVar13)),
                                ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50b14) + lVar13)),
                                0x10);
        auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50b18) +
                                                         lVar13)),0x20);
        auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50b1c) +
                                                         lVar13)),0x30);
        auVar35 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + uVar10 * 0xc)),
                                ZEXT416(*(uint *)(lVar9 + lVar13)),0x10);
        auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(lVar12 + lVar13)),0x20);
        auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(lVar21 + lVar13)),0x30);
        auVar95 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar8 & _UNK_150b50b30) + lVar13)),
                                ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50b34) + lVar13)),
                                0x10);
        auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50b38) +
                                                         lVar13)),0x20);
        auVar95 = vinsertps_avx(auVar95,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50b3c) +
                                                         lVar13)),0x30);
        auVar45 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                  (uVar72 & 
                                                  ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                                                  ) + lVar13)),
                                ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50b24) + lVar13)),
                                0x10);
        auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50b28) +
                                                         lVar13)),0x20);
        auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50b2c) +
                                                         lVar13)),0x30);
        auVar58 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar8 & _UNK_150b50b50) + lVar13)),
                                ZEXT416(*(uint *)((ulonglong)(uVar22 & _UNK_150b50b54) + lVar13)),
                                0x10);
        auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar70 & _UNK_150b50b58) +
                                                         lVar13)),0x20);
        auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar71 & _UNK_150b50b5c) +
                                                         lVar13)),0x30);
        auVar5 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                                 (uVar72 & 
                                                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                                 ) + lVar13)),
                               ZEXT416(*(uint *)((ulonglong)(uVar73 & _UNK_150b50b44) + lVar13)),
                               0x10);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)((ulonglong)(uVar74 & _UNK_150b50b48) +
                                                       lVar13)),0x20);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)((ulonglong)(uVar75 & _UNK_150b50b4c) +
                                                       lVar13)),0x30);
        auVar86._16_16_ = auVar28;
        auVar86._0_16_ = auVar35;
        auVar90._16_16_ = auVar95;
        auVar90._0_16_ = auVar45;
        auVar91._16_16_ = auVar58;
        auVar91._0_16_ = auVar5;
      }
      auVar98 = vsubps_avx(local_240,auVar29);
      auVar101 = vsubps_avx(local_260,auVar93);
      auVar48 = vsubps_avx(auVar85,auVar96);
      auVar68._0_4_ =
           auVar91._0_4_ * auVar48._0_4_ +
           auVar86._0_4_ * auVar98._0_4_ + auVar90._0_4_ * auVar101._0_4_;
      auVar68._4_4_ =
           auVar91._4_4_ * auVar48._4_4_ +
           auVar86._4_4_ * auVar98._4_4_ + auVar90._4_4_ * auVar101._4_4_;
      auVar68._8_4_ =
           auVar91._8_4_ * auVar48._8_4_ +
           auVar86._8_4_ * auVar98._8_4_ + auVar90._8_4_ * auVar101._8_4_;
      auVar68._12_4_ =
           auVar91._12_4_ * auVar48._12_4_ +
           auVar86._12_4_ * auVar98._12_4_ + auVar90._12_4_ * auVar101._12_4_;
      auVar68._16_4_ =
           auVar91._16_4_ * auVar48._16_4_ +
           auVar86._16_4_ * auVar98._16_4_ + auVar90._16_4_ * auVar101._16_4_;
      auVar68._20_4_ =
           auVar91._20_4_ * auVar48._20_4_ +
           auVar86._20_4_ * auVar98._20_4_ + auVar90._20_4_ * auVar101._20_4_;
      auVar68._24_4_ =
           auVar91._24_4_ * auVar48._24_4_ +
           auVar86._24_4_ * auVar98._24_4_ + auVar90._24_4_ * auVar101._24_4_;
      auVar68._28_4_ =
           auVar91._28_4_ * auVar48._28_4_ +
           auVar86._28_4_ * auVar98._28_4_ + auVar90._28_4_ * auVar101._28_4_;
      auVar98 = vcmpps_avx(auVar33,ZEXT432(0) << 0x20,4);
      auVar101 = vcmpps_avx(ZEXT432(0) << 0x20,auVar68,1);
      auVar81._0_4_ = auVar101._0_4_ & auVar98._0_4_;
      auVar81._4_4_ = auVar101._4_4_ & auVar98._4_4_;
      auVar81._8_4_ = auVar101._8_4_ & auVar98._8_4_;
      auVar81._12_4_ = auVar101._12_4_ & auVar98._12_4_;
      auVar81._16_4_ = auVar101._16_4_ & auVar98._16_4_;
      auVar81._20_4_ = auVar101._20_4_ & auVar98._20_4_;
      auVar81._24_4_ = auVar101._24_4_ & auVar98._24_4_;
      auVar81._28_4_ = auVar101._28_4_ & auVar98._28_4_;
      auVar28 = vpcmpgtd_avx(auVar6,auVar53);
      auVar42._0_4_ = auVar81._0_4_ & auVar28._0_4_;
      auVar42._4_4_ = auVar81._4_4_ & auVar28._4_4_;
      auVar42._8_4_ = auVar81._8_4_ & auVar28._8_4_;
      auVar42._12_4_ = auVar81._12_4_ & auVar28._12_4_;
      auVar42._16_4_ = auVar81._16_4_ & uVar8;
      auVar42._20_4_ = auVar81._20_4_ & uVar22;
      auVar42._24_4_ = auVar81._24_4_ & uVar70;
      auVar42._28_4_ = auVar81._28_4_ & uVar71;
      uVar8 = vmovmskps_avx(auVar42);
      if (uVar8 != 0) {
        auVar35 = vpand_avx(auVar81._16_16_,auVar47);
        auVar47._0_4_ = auVar81._0_4_ & auVar28._0_4_;
        auVar47._4_4_ = auVar81._4_4_ & auVar28._4_4_;
        auVar47._8_4_ = auVar81._8_4_ & auVar28._8_4_;
        auVar47._12_4_ = auVar81._12_4_ & auVar28._12_4_;
        auVar28 = vpackssdw_avx(auVar47,auVar35);
        auVar52._0_4_ = auVar29._0_4_ + auVar86._0_4_ * auVar68._0_4_;
        auVar52._4_4_ = auVar29._4_4_ + auVar86._4_4_ * auVar68._4_4_;
        auVar52._8_4_ = auVar29._8_4_ + auVar86._8_4_ * auVar68._8_4_;
        auVar52._12_4_ = auVar29._12_4_ + auVar86._12_4_ * auVar68._12_4_;
        auVar52._16_4_ = auVar29._16_4_ + auVar86._16_4_ * auVar68._16_4_;
        auVar52._20_4_ = auVar29._20_4_ + auVar86._20_4_ * auVar68._20_4_;
        auVar52._24_4_ = auVar29._24_4_ + auVar86._24_4_ * auVar68._24_4_;
        auVar52._28_4_ = auVar29._28_4_ + auVar86._28_4_ * auVar68._28_4_;
        auVar57._0_4_ = auVar93._0_4_ + auVar90._0_4_ * auVar68._0_4_;
        auVar57._4_4_ = auVar93._4_4_ + auVar90._4_4_ * auVar68._4_4_;
        auVar57._8_4_ = auVar93._8_4_ + auVar90._8_4_ * auVar68._8_4_;
        auVar57._12_4_ = auVar93._12_4_ + auVar90._12_4_ * auVar68._12_4_;
        auVar57._16_4_ = auVar93._16_4_ + auVar90._16_4_ * auVar68._16_4_;
        auVar57._20_4_ = auVar93._20_4_ + auVar90._20_4_ * auVar68._20_4_;
        auVar57._24_4_ = auVar93._24_4_ + auVar90._24_4_ * auVar68._24_4_;
        auVar57._28_4_ = auVar93._28_4_ + auVar90._28_4_ * auVar68._28_4_;
        auVar61._0_4_ = auVar96._0_4_ + auVar91._0_4_ * auVar68._0_4_;
        auVar61._4_4_ = auVar96._4_4_ + auVar91._4_4_ * auVar68._4_4_;
        auVar61._8_4_ = auVar96._8_4_ + auVar91._8_4_ * auVar68._8_4_;
        auVar61._12_4_ = auVar96._12_4_ + auVar91._12_4_ * auVar68._12_4_;
        auVar61._16_4_ = auVar96._16_4_ + auVar91._16_4_ * auVar68._16_4_;
        auVar61._20_4_ = auVar96._20_4_ + auVar91._20_4_ * auVar68._20_4_;
        auVar61._24_4_ = auVar96._24_4_ + auVar91._24_4_ * auVar68._24_4_;
        auVar61._28_4_ = auVar96._28_4_ + auVar91._28_4_ * auVar68._28_4_;
        auVar35 = vpmovsxwd_avx(auVar28);
        auVar28 = vpunpckhwd_avx(auVar28,auVar28);
        auVar43._16_16_ = auVar28;
        auVar43._0_16_ = auVar35;
        auVar29 = vmaskmovps_avx(auVar43,auVar52);
        auVar93 = vmaskmovps_avx(auVar43,auVar57);
        auVar96 = vmaskmovps_avx(auVar43,auVar61);
        cVar11 = (char)uVar8;
        iVar34 = auVar100._0_4_;
        auVar35 = auVar29._0_16_;
        auVar95 = auVar29._16_16_;
        iVar15 = auVar100._4_4_;
        iVar20 = auVar100._8_4_;
        iVar16 = auVar100._12_4_;
        auVar47 = auVar93._0_16_;
        auVar28 = auVar96._0_16_;
        auVar45 = auVar93._16_16_;
        auVar58 = auVar96._16_16_;
        iVar44 = auVar46._0_4_;
        iVar17 = auVar46._4_4_;
        iVar18 = auVar46._8_4_;
        iVar19 = auVar46._12_4_;
        if ((uVar8 & 1) != 0) {
          *(int *)(param_1 + iVar34) = auVar29._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar7 = vextractps_avx(auVar35,1);
          *(undefined4 *)(param_1 + iVar15) = uVar7;
        }
        if ((uVar8 & 4) != 0) {
          uVar7 = vextractps_avx(auVar35,2);
          *(undefined4 *)(param_1 + iVar20) = uVar7;
        }
        if ((uVar8 & 8) != 0) {
          uVar7 = vextractps_avx(auVar35,3);
          *(undefined4 *)(param_1 + iVar16) = uVar7;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(param_1 + iVar44) = auVar29._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar7 = vextractps_avx(auVar95,1);
          *(undefined4 *)(param_1 + iVar17) = uVar7;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar7 = vextractps_avx(auVar95,2);
          *(undefined4 *)(param_1 + iVar18) = uVar7;
        }
        if (cVar11 < '\0') {
          uVar7 = vextractps_avx(auVar95,3);
          *(undefined4 *)(param_1 + iVar19) = uVar7;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar34) = auVar93._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar7 = vextractps_avx(auVar47,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar7;
        }
        if ((uVar8 & 4) != 0) {
          uVar7 = vextractps_avx(auVar47,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar7;
        }
        if ((uVar8 & 8) != 0) {
          uVar7 = vextractps_avx(auVar47,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar7;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar44) = auVar93._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar7 = vextractps_avx(auVar45,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar7;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar7 = vextractps_avx(auVar45,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar7;
        }
        if (cVar11 < '\0') {
          uVar7 = vextractps_avx(auVar45,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar7;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar34) = auVar96._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar7 = vextractps_avx(auVar28,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar7;
        }
        if ((uVar8 & 4) != 0) {
          uVar7 = vextractps_avx(auVar28,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar7;
        }
        if ((uVar8 & 8) != 0) {
          uVar7 = vextractps_avx(auVar28,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar7;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar44) = auVar96._16_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar7 = vextractps_avx(auVar58,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar7;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar7 = vextractps_avx(auVar58,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar7;
        }
        if (cVar11 < '\0') {
          uVar7 = vextractps_avx(auVar58,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar7;
        }
        if ((uVar8 & 1) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar34) = auVar97._0_4_;
        }
        if ((uVar8 & 2) != 0) {
          uVar7 = vextractps_avx(auVar97,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar7;
        }
        if ((uVar8 & 4) != 0) {
          uVar7 = vextractps_avx(auVar97,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar7;
        }
        if ((uVar8 & 8) != 0) {
          uVar7 = vextractps_avx(auVar97,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar7;
        }
        if ((uVar8 & 0x10) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar44) = auVar92._0_4_;
        }
        if ((uVar8 & 0x20) != 0) {
          uVar7 = vextractps_avx(auVar92,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar7;
        }
        if ((uVar8 & 0x40) != 0) {
          uVar7 = vextractps_avx(auVar92,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar7;
        }
        if (cVar11 < '\0') {
          uVar7 = vextractps_avx(auVar92,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar7;
        }
      }
    }
  }
  return;
}


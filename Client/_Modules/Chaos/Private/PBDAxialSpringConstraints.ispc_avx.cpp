// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplyAxialSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuni_avx @ 140015390

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined1 (*pauVar18) [32];
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  uint uVar38;
  undefined4 uVar39;
  int iVar40;
  longlong lVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  longlong lVar68;
  float fVar69;
  float fVar70;
  uint uVar71;
  int iVar72;
  undefined1 auVar73 [16];
  float fVar87;
  float fVar89;
  float fVar95;
  float fVar98;
  float fVar101;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  float fVar92;
  float fVar104;
  undefined1 auVar80 [32];
  float fVar88;
  float fVar90;
  float fVar93;
  float fVar96;
  float fVar99;
  float fVar102;
  float fVar105;
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  uint uVar91;
  uint uVar94;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar97;
  uint uVar100;
  uint uVar103;
  uint uVar106;
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
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
  int iVar124;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined1 auVar125 [32];
  float fVar131;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  float fVar132;
  float fVar144;
  float fVar145;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar146;
  undefined1 auVar137 [16];
  float fVar147;
  float fVar148;
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar143 [32];
  float fVar149;
  float fVar159;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar160;
  float fVar163;
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar161 [16];
  undefined1 auVar158 [32];
  undefined1 auVar162 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  float fVar167;
  float fVar178;
  undefined1 auVar168 [16];
  float fVar176;
  float fVar177;
  float fVar179;
  float fVar181;
  float fVar182;
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  float fVar183;
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar180 [16];
  undefined1 auVar175 [32];
  float fVar184;
  float fVar194;
  undefined1 auVar185 [16];
  float fVar192;
  float fVar193;
  float fVar195;
  float fVar196;
  float fVar197;
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  float fVar198;
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  float fVar202;
  float fVar209;
  float fVar210;
  uint uVar211;
  float fVar212;
  uint uVar213;
  float fVar214;
  uint uVar215;
  float fVar216;
  uint uVar217;
  float fVar218;
  uint uVar219;
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  float fVar220;
  undefined1 auVar205 [32];
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  uint uVar221;
  uint uVar227;
  uint uVar228;
  uint uVar229;
  uint uVar230;
  uint uVar232;
  uint uVar233;
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar224 [32];
  uint uVar234;
  undefined1 auVar225 [32];
  undefined1 auVar226 [32];
  undefined1 auVar231 [16];
  float fVar235;
  float fVar239;
  undefined1 auVar236 [32];
  undefined1 auVar237 [32];
  undefined1 auVar238 [32];
  undefined1 auVar240 [32];
  float fVar241;
  float fVar245;
  float fVar246;
  float fVar247;
  float fVar248;
  float fVar249;
  float fVar250;
  undefined1 auVar242 [32];
  float fVar251;
  undefined1 auVar243 [32];
  undefined1 auVar244 [32];
  undefined1 auVar252 [32];
  undefined1 auVar253 [32];
  undefined1 auVar254 [32];
  undefined1 auVar255 [32];
  undefined1 auVar256 [32];
  undefined1 auVar257 [32];
  float local_5e0;
  float fStack_5dc;
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float local_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  int local_560;
  int iStack_55c;
  int iStack_558;
  int iStack_554;
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
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  undefined1 auVar142 [32];
  
  uVar29 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar29 = param_6;
  }
  if ((int)(uVar29 & 0xfffffff8) < 1) {
    uVar33 = 0;
  }
  else {
    auVar134 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    pauVar18 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar33 = 0;
    uVar71 = 0;
    do {
      auVar77 = pauVar18[-2];
      auVar76._16_16_ = *(undefined1 (*) [16])pauVar18[-2];
      auVar76._0_16_ = *(undefined1 (*) [16])*(undefined1 (*) [32])(pauVar18[-2] + 0x10);
      auVar76 = vblendps_avx(auVar77,auVar76,0x24);
      auVar76 = vpermilps_avx(auVar76,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar39 = *(undefined4 *)(pauVar18[-1] + 4);
      auVar203._4_4_ = uVar39;
      auVar203._0_4_ = uVar39;
      auVar203._8_4_ = uVar39;
      auVar203._12_4_ = uVar39;
      uVar39 = *(undefined4 *)(pauVar18[-1] + 8);
      auVar203._20_4_ = uVar39;
      auVar203._16_4_ = uVar39;
      auVar203._24_4_ = uVar39;
      auVar203._28_4_ = uVar39;
      auVar76 = vblendps_avx(auVar76,auVar203,0x88);
      auVar169._16_16_ = *(undefined1 (*) [16])*pauVar18;
      auVar169._0_16_ = *(undefined1 (*) [16])(*pauVar18 + 0x10);
      auVar79 = vblendps_avx(auVar169,*pauVar18,0x44);
      auVar79 = vpermilps_avx(auVar79,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar150 = vshufps_avx(*(undefined1 (*) [16])(pauVar18[-1] + 0x10),
                             *(undefined1 (*) [16])(pauVar18[-1] + 0x10),0xec);
      uVar39 = *(undefined4 *)(pauVar18[-1] + 0x14);
      auVar107._20_4_ = uVar39;
      auVar107._16_4_ = uVar39;
      auVar107._24_4_ = uVar39;
      auVar107._28_4_ = uVar39;
      auVar107._0_16_ = auVar150;
      auVar79 = vblendps_avx(auVar79,auVar107,0x13);
      auVar77 = vblendps_avx(pauVar18[-1],auVar77,0x24);
      auVar77 = vshufps_avx(*(undefined1 (*) [32])(pauVar18[-2] + 0x10),auVar77,0x21);
      auVar78 = vshufps_avx(auVar77,pauVar18[-1],0xc2);
      auVar77 = vshufps_avx(auVar169,*pauVar18,0xc4);
      auVar77 = vblendps_avx(auVar78,auVar77,0xe0);
      auVar150 = vpslld_avx(auVar79._16_16_,4);
      auVar164 = vpslld_avx(auVar76._16_16_,4);
      lVar34 = (longlong)auVar164._0_4_;
      lVar35 = (longlong)auVar164._4_4_;
      lVar62 = (longlong)auVar164._8_4_;
      lVar57 = (longlong)auVar164._12_4_;
      lVar50 = (longlong)auVar150._0_4_;
      lVar46 = (longlong)auVar150._4_4_;
      lVar27 = (longlong)auVar150._8_4_;
      lVar19 = (longlong)auVar150._12_4_;
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + lVar46)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar137 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar19)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + lVar35)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar62)),0x20);
      auVar162 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar57)),0x30);
      auVar252._16_16_ = auVar137;
      auVar252._0_16_ = auVar162;
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar46)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar151 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar19)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar62)),0x20);
      auVar168 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar57)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar46)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar180 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar19)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar62)),0x20);
      auVar161 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar57)),0x30);
      auVar242._16_16_ = auVar151;
      auVar242._0_16_ = auVar168;
      auVar240._16_16_ = auVar180;
      auVar240._0_16_ = auVar161;
      uVar17 = *(uint *)(param_1 + 0xc + lVar34);
      uVar91 = *(uint *)(param_1 + 0xc + lVar35);
      uVar94 = *(uint *)(param_1 + 0xc + lVar62);
      uVar97 = *(uint *)(param_1 + 0xc + lVar57);
      uVar100 = *(uint *)(param_1 + 0xc + lVar50);
      uVar103 = *(uint *)(param_1 + 0xc + lVar46);
      uVar106 = *(uint *)(param_1 + 0xc + lVar27);
      uVar211 = *(uint *)(param_1 + 0xc + lVar19);
      auVar150 = vinsertps_avx(ZEXT416(uVar100),ZEXT416(uVar103),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar106),0x20);
      auVar231 = vinsertps_avx(auVar150,ZEXT416(uVar211),0x30);
      auVar133 = vpslld_avx(auVar78._0_16_,4);
      auVar150 = vinsertps_avx(ZEXT416(uVar17),ZEXT416(uVar91),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar94),0x20);
      auVar74 = vinsertps_avx(auVar150,ZEXT416(uVar97),0x30);
      auVar164 = vpslld_avx(auVar77._16_16_,4);
      lVar58 = (longlong)auVar133._0_4_;
      lVar51 = (longlong)auVar133._4_4_;
      lVar28 = (longlong)auVar133._8_4_;
      lVar20 = (longlong)auVar164._0_4_;
      lVar64 = (longlong)auVar164._4_4_;
      lVar67 = (longlong)auVar164._8_4_;
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar20)),
                               ZEXT416(*(uint *)(param_1 + lVar64)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar67)),0x20);
      lVar65 = (longlong)auVar164._12_4_;
      auVar75 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar65)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar58)),
                               ZEXT416(*(uint *)(param_1 + lVar51)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      lVar36 = (longlong)auVar133._12_4_;
      auVar133 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar36)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar64)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar67)),0x20);
      auVar138._16_16_ = auVar231;
      auVar138._0_16_ = auVar74;
      auVar135 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar65)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar58)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar51)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      auVar186._16_16_ = auVar75;
      auVar186._0_16_ = auVar133;
      auVar136 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar36)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar64)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar67)),0x20);
      auVar165._16_16_ = auVar135;
      auVar165._0_16_ = auVar136;
      auVar185 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar65)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar58)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar51)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      auVar11 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar36)),0x30);
      auVar170._16_16_ = auVar185;
      auVar170._0_16_ = auVar11;
      auVar73 = vpslld_avx(auVar76._0_16_,4);
      auVar164 = vpslld_avx(auVar79._0_16_,4);
      uVar213 = *(uint *)(param_1 + 0xc + lVar20);
      uVar215 = *(uint *)(param_1 + 0xc + lVar64);
      uVar217 = *(uint *)(param_1 + 0xc + lVar67);
      auVar150 = vinsertps_avx(ZEXT416(uVar213),ZEXT416(uVar215),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar217),0x20);
      uVar219 = *(uint *)(param_1 + 0xc + lVar65);
      auVar12 = vinsertps_avx(auVar150,ZEXT416(uVar219),0x30);
      uVar221 = *(uint *)(param_1 + 0xc + lVar58);
      uVar1 = *(uint *)(param_1 + 0xc + lVar51);
      uVar2 = *(uint *)(param_1 + 0xc + lVar28);
      auVar150 = vinsertps_avx(ZEXT416(uVar221),ZEXT416(uVar1),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar2),0x20);
      uVar3 = *(uint *)(param_1 + 0xc + lVar36);
      auVar13 = vinsertps_avx(auVar150,ZEXT416(uVar3),0x30);
      lVar68 = (longlong)auVar73._0_4_;
      lVar52 = (longlong)auVar73._4_4_;
      lVar21 = (longlong)auVar73._8_4_;
      lVar63 = (longlong)auVar164._0_4_;
      lVar30 = (longlong)auVar164._4_4_;
      lVar66 = (longlong)auVar164._8_4_;
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar63)),
                               ZEXT416(*(uint *)(param_1 + lVar30)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar66)),0x20);
      lVar59 = (longlong)auVar164._12_4_;
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar59)),0x30);
      auVar164 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar68)),
                               ZEXT416(*(uint *)(param_1 + lVar52)),0x10);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + lVar21)),0x20);
      lVar47 = (longlong)auVar73._12_4_;
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + lVar47)),0x30);
      auVar73 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar63)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x10);
      auVar73 = vinsertps_avx(auVar73,ZEXT416(*(uint *)(param_1 + 4 + lVar66)),0x20);
      auVar254._16_16_ = auVar12;
      auVar254._0_16_ = auVar13;
      auVar73 = vinsertps_avx(auVar73,ZEXT416(*(uint *)(param_1 + 4 + lVar59)),0x30);
      auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar68)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar52)),0x10);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x20);
      auVar152._16_16_ = auVar150;
      auVar152._0_16_ = auVar164;
      auVar150 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 4 + lVar47)),0x30);
      auVar164 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar63)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x10);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + 8 + lVar66)),0x20);
      auVar236._16_16_ = auVar73;
      auVar236._0_16_ = auVar150;
      auVar150 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + 8 + lVar59)),0x30);
      auVar164 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar68)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar52)),0x10);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x20);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + 8 + lVar47)),0x30);
      auVar139._16_16_ = auVar150;
      auVar139._0_16_ = auVar164;
      uVar26 = (ulonglong)uVar71;
      auVar150 = *(undefined1 (*) [16])(param_3 + uVar26);
      auVar164 = *(undefined1 (*) [16])(param_3 + 0x10 + uVar26);
      auVar199._16_16_ = auVar164;
      auVar199._0_16_ = auVar150;
      auVar76 = vsubps_avx(auVar252,auVar186);
      fVar69 = auVar150._0_4_;
      fVar87 = auVar150._4_4_;
      fVar89 = auVar150._8_4_;
      fVar92 = auVar150._12_4_;
      fVar95 = auVar164._0_4_;
      fVar98 = auVar164._4_4_;
      fVar101 = auVar164._8_4_;
      fVar104 = auVar164._12_4_;
      auVar79 = vsubps_avx(auVar242,auVar165);
      auVar77._0_4_ = auVar133._0_4_ + fVar69 * auVar76._0_4_;
      auVar77._4_4_ = auVar133._4_4_ + fVar87 * auVar76._4_4_;
      auVar77._8_4_ = auVar133._8_4_ + fVar89 * auVar76._8_4_;
      auVar77._12_4_ = auVar133._12_4_ + fVar92 * auVar76._12_4_;
      auVar77._16_4_ = auVar75._0_4_ + fVar95 * auVar76._16_4_;
      auVar77._20_4_ = auVar75._4_4_ + fVar98 * auVar76._20_4_;
      auVar77._24_4_ = auVar75._8_4_ + fVar101 * auVar76._24_4_;
      auVar77._28_4_ = auVar75._12_4_ + fVar104 * auVar76._28_4_;
      fVar128 = auVar136._0_4_;
      auVar108._0_4_ = fVar128 + fVar69 * auVar79._0_4_;
      fVar129 = auVar136._4_4_;
      auVar108._4_4_ = fVar129 + fVar87 * auVar79._4_4_;
      fVar130 = auVar136._8_4_;
      auVar108._8_4_ = fVar130 + fVar89 * auVar79._8_4_;
      fVar131 = auVar136._12_4_;
      auVar108._12_4_ = fVar131 + fVar92 * auVar79._12_4_;
      fVar132 = auVar135._0_4_;
      auVar108._16_4_ = fVar132 + fVar95 * auVar79._16_4_;
      fVar144 = auVar135._4_4_;
      auVar108._20_4_ = fVar144 + fVar98 * auVar79._20_4_;
      fVar145 = auVar135._8_4_;
      auVar108._24_4_ = fVar145 + fVar101 * auVar79._24_4_;
      fVar146 = auVar135._12_4_;
      auVar108._28_4_ = fVar146 + fVar104 * auVar79._28_4_;
      auVar76 = vsubps_avx(auVar152,auVar77);
      auVar79 = vsubps_avx(auVar236,auVar108);
      auVar77 = vsubps_avx(auVar240,auVar170);
      fVar147 = auVar11._0_4_;
      auVar109._0_4_ = fVar147 + fVar69 * auVar77._0_4_;
      fVar148 = auVar11._4_4_;
      auVar109._4_4_ = fVar148 + fVar87 * auVar77._4_4_;
      fVar149 = auVar11._8_4_;
      auVar109._8_4_ = fVar149 + fVar89 * auVar77._8_4_;
      fVar159 = auVar11._12_4_;
      auVar109._12_4_ = fVar159 + fVar92 * auVar77._12_4_;
      fVar160 = auVar185._0_4_;
      auVar109._16_4_ = fVar160 + fVar95 * auVar77._16_4_;
      fVar163 = auVar185._4_4_;
      auVar109._20_4_ = fVar163 + fVar98 * auVar77._20_4_;
      fVar235 = auVar185._8_4_;
      auVar109._24_4_ = fVar235 + fVar101 * auVar77._24_4_;
      fVar239 = auVar185._12_4_;
      auVar109._28_4_ = fVar239 + fVar104 * auVar77._28_4_;
      auVar77 = vsubps_avx(auVar139,auVar109);
      auVar78._0_4_ =
           auVar76._0_4_ * auVar76._0_4_ + auVar79._0_4_ * auVar79._0_4_ +
           auVar77._0_4_ * auVar77._0_4_;
      auVar78._4_4_ =
           auVar76._4_4_ * auVar76._4_4_ + auVar79._4_4_ * auVar79._4_4_ +
           auVar77._4_4_ * auVar77._4_4_;
      auVar78._8_4_ =
           auVar76._8_4_ * auVar76._8_4_ + auVar79._8_4_ * auVar79._8_4_ +
           auVar77._8_4_ * auVar77._8_4_;
      auVar78._12_4_ =
           auVar76._12_4_ * auVar76._12_4_ + auVar79._12_4_ * auVar79._12_4_ +
           auVar77._12_4_ * auVar77._12_4_;
      auVar78._16_4_ =
           auVar76._16_4_ * auVar76._16_4_ + auVar79._16_4_ * auVar79._16_4_ +
           auVar77._16_4_ * auVar77._16_4_;
      auVar78._20_4_ =
           auVar76._20_4_ * auVar76._20_4_ + auVar79._20_4_ * auVar79._20_4_ +
           auVar77._20_4_ * auVar77._20_4_;
      auVar78._24_4_ =
           auVar76._24_4_ * auVar76._24_4_ + auVar79._24_4_ * auVar79._24_4_ +
           auVar77._24_4_ * auVar77._24_4_;
      auVar78._28_4_ =
           auVar76._28_4_ * auVar76._28_4_ + auVar79._28_4_ * auVar79._28_4_ +
           auVar77._28_4_ * auVar77._28_4_;
      auVar222._16_16_ = *(undefined1 (*) [16])(param_4 + 0x10 + uVar26);
      auVar222._0_16_ = *(undefined1 (*) [16])(param_4 + uVar26);
      uVar16 = *(uint *)(param_1 + 0xc + lVar63);
      uVar4 = *(uint *)(param_1 + 0xc + lVar30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar66);
      auVar150 = vinsertps_avx(ZEXT416(uVar16),ZEXT416(uVar4),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar5),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar59);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar6),0x30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar68);
      uVar8 = *(uint *)(param_1 + 0xc + lVar52);
      uVar9 = *(uint *)(param_1 + 0xc + lVar21);
      auVar164 = vinsertps_avx(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(uVar9),0x20);
      auVar107 = vsqrtps_avx(auVar78);
      uVar10 = *(uint *)(param_1 + 0xc + lVar47);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(uVar10),0x30);
      auVar76 = vdivps_avx(auVar76,auVar107);
      auVar187._16_16_ = auVar150;
      auVar187._0_16_ = auVar164;
      auVar79 = vdivps_avx(auVar79,auVar107);
      auVar77 = vdivps_avx(auVar77,auVar107);
      auVar78 = vsubps_avx(auVar107,auVar222);
      fVar70 = auVar78._0_4_;
      fVar88 = auVar78._4_4_;
      fVar90 = auVar78._8_4_;
      fVar93 = auVar78._12_4_;
      fVar96 = auVar78._16_4_;
      fVar99 = auVar78._20_4_;
      fVar102 = auVar78._24_4_;
      fVar105 = auVar78._28_4_;
      auVar208._4_4_ = __real_3f800000;
      auVar208._0_4_ = __real_3f800000;
      auVar208._8_4_ = __real_3f800000;
      auVar208._12_4_ = __real_3f800000;
      auVar208._16_4_ = __real_3f800000;
      auVar208._20_4_ = __real_3f800000;
      auVar208._24_4_ = __real_3f800000;
      auVar208._28_4_ = __real_3f800000;
      auVar108 = vsubps_avx(auVar208,auVar199);
      auVar223._0_4_ = fVar69 * auVar74._0_4_ + auVar13._0_4_ * auVar108._0_4_;
      auVar223._4_4_ = fVar87 * auVar74._4_4_ + auVar13._4_4_ * auVar108._4_4_;
      auVar223._8_4_ = fVar89 * auVar74._8_4_ + auVar13._8_4_ * auVar108._8_4_;
      auVar223._12_4_ = fVar92 * auVar74._12_4_ + auVar13._12_4_ * auVar108._12_4_;
      auVar223._16_4_ = fVar95 * auVar231._0_4_ + auVar12._0_4_ * auVar108._16_4_;
      auVar223._20_4_ = fVar98 * auVar231._4_4_ + auVar12._4_4_ * auVar108._20_4_;
      auVar223._24_4_ = fVar101 * auVar231._8_4_ + auVar12._8_4_ * auVar108._24_4_;
      auVar223._28_4_ = fVar104 * auVar231._12_4_ + auVar12._12_4_ * auVar108._28_4_;
      local_240 = auVar134._0_4_;
      fStack_23c = auVar134._4_4_;
      fStack_238 = auVar134._8_4_;
      fStack_234 = auVar134._12_4_;
      auVar204._0_4_ = auVar76._0_4_ * fVar70 * local_240;
      auVar204._4_4_ = auVar76._4_4_ * fVar88 * fStack_23c;
      auVar204._8_4_ = auVar76._8_4_ * fVar90 * fStack_238;
      auVar204._12_4_ = auVar76._12_4_ * fVar93 * fStack_234;
      auVar204._16_4_ = auVar76._16_4_ * fVar96 * local_240;
      auVar204._20_4_ = auVar76._20_4_ * fVar99 * fStack_23c;
      auVar204._24_4_ = auVar76._24_4_ * fVar102 * fStack_238;
      auVar204._28_4_ = auVar76._28_4_ * fVar105 * fStack_234;
      auVar253._0_4_ = auVar223._0_4_ + auVar164._0_4_;
      auVar253._4_4_ = auVar223._4_4_ + auVar164._4_4_;
      auVar253._8_4_ = auVar223._8_4_ + auVar164._8_4_;
      auVar253._12_4_ = auVar223._12_4_ + auVar164._12_4_;
      auVar253._16_4_ = auVar223._16_4_ + auVar150._0_4_;
      auVar253._20_4_ = auVar223._20_4_ + auVar150._4_4_;
      auVar253._24_4_ = auVar223._24_4_ + auVar150._8_4_;
      auVar253._28_4_ = auVar223._28_4_ + auVar150._12_4_;
      auVar78 = vdivps_avx(auVar204,auVar253);
      auVar110._0_4_ = local_240 * auVar79._0_4_ * fVar70;
      auVar110._4_4_ = fStack_23c * auVar79._4_4_ * fVar88;
      auVar110._8_4_ = fStack_238 * auVar79._8_4_ * fVar90;
      auVar110._12_4_ = fStack_234 * auVar79._12_4_ * fVar93;
      auVar110._16_4_ = local_240 * auVar79._16_4_ * fVar96;
      auVar110._20_4_ = fStack_23c * auVar79._20_4_ * fVar99;
      auVar110._24_4_ = fStack_238 * auVar79._24_4_ * fVar102;
      auVar110._28_4_ = fStack_234 * auVar79._28_4_ * fVar105;
      auVar208 = vdivps_avx(auVar110,auVar253);
      auVar171._0_4_ = local_240 * auVar77._0_4_ * fVar70;
      auVar171._4_4_ = fStack_23c * auVar77._4_4_ * fVar88;
      auVar171._8_4_ = fStack_238 * auVar77._8_4_ * fVar90;
      auVar171._12_4_ = fStack_234 * auVar77._12_4_ * fVar93;
      auVar171._16_4_ = local_240 * auVar77._16_4_ * fVar96;
      auVar171._20_4_ = fStack_23c * auVar77._20_4_ * fVar99;
      auVar171._24_4_ = fStack_238 * auVar77._24_4_ * fVar102;
      auVar171._28_4_ = fStack_234 * auVar77._28_4_ * fVar105;
      auVar77 = vdivps_avx(auVar171,auVar253);
      auVar76 = vcmpps_avx(auVar223,ZEXT832(0) << 0x20,0);
      auVar79 = vcmpps_avx(auVar187,ZEXT832(0) << 0x20,0);
      auVar224._0_4_ = auVar79._0_4_ & auVar76._0_4_;
      auVar224._4_4_ = auVar79._4_4_ & auVar76._4_4_;
      auVar224._8_4_ = auVar79._8_4_ & auVar76._8_4_;
      auVar224._12_4_ = auVar79._12_4_ & auVar76._12_4_;
      auVar224._16_4_ = auVar79._16_4_ & auVar76._16_4_;
      auVar224._20_4_ = auVar79._20_4_ & auVar76._20_4_;
      auVar224._24_4_ = auVar79._24_4_ & auVar76._24_4_;
      auVar224._28_4_ = auVar79._28_4_ & auVar76._28_4_;
      auVar76 = vcmpps_avx(auVar107,
                           ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,2
                          );
      auVar224 = auVar224 | auVar76;
      uVar38 = auVar224._0_4_;
      fVar241 = (float)(~uVar38 & auVar78._0_4_);
      uVar227 = auVar224._4_4_;
      fVar245 = (float)(~uVar227 & auVar78._4_4_);
      uVar228 = auVar224._8_4_;
      fVar246 = (float)(~uVar228 & auVar78._8_4_);
      uVar229 = auVar224._12_4_;
      fVar247 = (float)(~uVar229 & auVar78._12_4_);
      uVar230 = auVar224._16_4_;
      fVar248 = (float)(~uVar230 & auVar78._16_4_);
      uVar232 = auVar224._20_4_;
      fVar249 = (float)(~uVar232 & auVar78._20_4_);
      uVar233 = auVar224._24_4_;
      fVar250 = (float)(~uVar233 & auVar78._24_4_);
      uVar234 = auVar224._28_4_;
      fVar251 = (float)(~uVar234 & auVar78._28_4_);
      fVar202 = (float)(~uVar38 & auVar208._0_4_);
      fVar209 = (float)(~uVar227 & auVar208._4_4_);
      fVar210 = (float)(~uVar228 & auVar208._8_4_);
      fVar212 = (float)(~uVar229 & auVar208._12_4_);
      fVar214 = (float)(~uVar230 & auVar208._16_4_);
      fVar216 = (float)(~uVar232 & auVar208._20_4_);
      fVar218 = (float)(~uVar233 & auVar208._24_4_);
      fVar220 = (float)(~uVar234 & auVar208._28_4_);
      fVar167 = (float)(~uVar38 & auVar77._0_4_);
      fVar176 = (float)(~uVar227 & auVar77._4_4_);
      fVar177 = (float)(~uVar228 & auVar77._8_4_);
      fVar178 = (float)(~uVar229 & auVar77._12_4_);
      fVar179 = (float)(~uVar230 & auVar77._16_4_);
      fVar181 = (float)(~uVar232 & auVar77._20_4_);
      fVar182 = (float)(~uVar233 & auVar77._24_4_);
      fVar183 = (float)(~uVar234 & auVar77._28_4_);
      auVar77 = ZEXT832(0) << 0x20;
      auVar76 = vcmpps_avx(auVar77,auVar187,1);
      uVar38 = vmovmskps_avx(auVar76);
      auVar76 = vmaxps_avx(auVar199,auVar108);
      auVar111._0_4_ = auVar76._0_4_ + __real_3f800000;
      auVar111._4_4_ = auVar76._4_4_ + __real_3f800000;
      auVar111._8_4_ = auVar76._8_4_ + __real_3f800000;
      auVar111._12_4_ = auVar76._12_4_ + __real_3f800000;
      auVar111._16_4_ = auVar76._16_4_ + __real_3f800000;
      auVar111._20_4_ = auVar76._20_4_ + __real_3f800000;
      auVar111._24_4_ = auVar76._24_4_ + __real_3f800000;
      auVar111._28_4_ = auVar76._28_4_ + __real_3f800000;
      auVar79._4_4_ = __real_40000000;
      auVar79._0_4_ = __real_40000000;
      auVar79._8_4_ = __real_40000000;
      auVar79._12_4_ = __real_40000000;
      auVar79._16_4_ = __real_40000000;
      auVar79._20_4_ = __real_40000000;
      auVar79._24_4_ = __real_40000000;
      auVar79._28_4_ = __real_40000000;
      auVar76 = vdivps_avx(auVar79,auVar111);
      fVar70 = auVar76._0_4_;
      fVar88 = auVar76._4_4_;
      fVar90 = auVar76._8_4_;
      fVar93 = auVar76._12_4_;
      fVar96 = auVar76._16_4_;
      fVar99 = auVar76._20_4_;
      fVar102 = auVar76._24_4_;
      fVar105 = auVar76._28_4_;
      if (uVar38 != 0) {
        fVar184 = auVar164._0_4_ * fVar70;
        fVar192 = auVar164._4_4_ * fVar88;
        fVar193 = auVar164._8_4_ * fVar90;
        fVar194 = auVar164._12_4_ * fVar93;
        fVar195 = auVar150._0_4_ * fVar96;
        fVar196 = auVar150._4_4_ * fVar99;
        fVar197 = auVar150._8_4_ * fVar102;
        fVar198 = auVar150._12_4_ * fVar105;
        auVar112._0_4_ = fVar241 * fVar184;
        auVar112._4_4_ = fVar245 * fVar192;
        auVar112._8_4_ = fVar246 * fVar193;
        auVar112._12_4_ = fVar247 * fVar194;
        auVar112._16_4_ = fVar248 * fVar195;
        auVar112._20_4_ = fVar249 * fVar196;
        auVar112._24_4_ = fVar250 * fVar197;
        auVar112._28_4_ = fVar251 * fVar198;
        auVar76 = vsubps_avx(auVar152,auVar112);
        cVar15 = (char)uVar38;
        auVar150 = auVar76._0_16_;
        auVar164 = auVar76._16_16_;
        if ((uVar38 & 1) == 0) {
          if ((uVar38 & 2) == 0) goto LAB_140015cae;
LAB_14001611f:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + lVar52) = uVar39;
          if ((uVar38 & 4) != 0) goto LAB_14001612f;
LAB_140015cb7:
          if ((uVar38 & 8) == 0) goto LAB_140015cc0;
LAB_14001613f:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + lVar47) = uVar39;
          if ((uVar38 & 0x10) != 0) goto LAB_140016155;
LAB_140015ccf:
          if ((uVar38 & 0x20) == 0) goto LAB_140015cd8;
LAB_140016164:
          uVar39 = vextractps_avx(auVar164,1);
          *(undefined4 *)(param_1 + lVar30) = uVar39;
          if ((uVar38 & 0x40) != 0) goto LAB_140016174;
LAB_140015ce1:
          if (-1 < cVar15) goto LAB_140015cea;
LAB_140016184:
          uVar39 = vextractps_avx(auVar164,3);
          *(undefined4 *)(param_1 + lVar59) = uVar39;
          auVar119._0_4_ = fVar202 * fVar184;
          auVar119._4_4_ = fVar209 * fVar192;
          auVar119._8_4_ = fVar210 * fVar193;
          auVar119._12_4_ = fVar212 * fVar194;
          auVar119._16_4_ = fVar214 * fVar195;
          auVar119._20_4_ = fVar216 * fVar196;
          auVar119._24_4_ = fVar218 * fVar197;
          auVar119._28_4_ = fVar220 * fVar198;
          auVar76 = vsubps_avx(auVar236,auVar119);
          if ((uVar38 & 1) != 0) goto LAB_14001619c;
LAB_140015cfb:
          if ((uVar38 & 2) == 0) goto LAB_140015d04;
LAB_1400161ac:
          uVar39 = vextractps_avx(auVar76._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar52) = uVar39;
          if ((uVar38 & 4) != 0) goto LAB_1400161bd;
LAB_140015d0d:
          if ((uVar38 & 8) == 0) goto LAB_140015d16;
LAB_1400161ce:
          uVar39 = vextractps_avx(auVar76._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar47) = uVar39;
          auVar150 = auVar76._16_16_;
          if ((uVar38 & 0x10) != 0) goto LAB_1400161e5;
LAB_140015d25:
          if ((uVar38 & 0x20) == 0) goto LAB_140015d2e;
LAB_1400161f5:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 4 + lVar30) = uVar39;
          if ((uVar38 & 0x40) != 0) goto LAB_140016206;
LAB_140015d37:
          if (-1 < cVar15) goto LAB_140015d40;
LAB_140016217:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 4 + lVar59) = uVar39;
          auVar120._0_4_ = fVar184 * fVar167;
          auVar120._4_4_ = fVar192 * fVar176;
          auVar120._8_4_ = fVar193 * fVar177;
          auVar120._12_4_ = fVar194 * fVar178;
          auVar120._16_4_ = fVar195 * fVar179;
          auVar120._20_4_ = fVar196 * fVar181;
          auVar120._24_4_ = fVar197 * fVar182;
          auVar120._28_4_ = fVar198 * fVar183;
          auVar76 = vsubps_avx(auVar139,auVar120);
          if ((uVar38 & 1) != 0) goto LAB_140016230;
LAB_140015d51:
          if ((uVar38 & 2) == 0) goto LAB_140015d5a;
LAB_140016240:
          uVar39 = vextractps_avx(auVar76._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar52) = uVar39;
          if ((uVar38 & 4) != 0) goto LAB_140016251;
LAB_140015d63:
          if ((uVar38 & 8) == 0) goto LAB_140015d6c;
LAB_140016262:
          uVar39 = vextractps_avx(auVar76._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar47) = uVar39;
          auVar150 = auVar76._16_16_;
        }
        else {
          *(int *)(param_1 + lVar68) = auVar76._0_4_;
          if ((uVar38 & 2) != 0) goto LAB_14001611f;
LAB_140015cae:
          if ((uVar38 & 4) == 0) goto LAB_140015cb7;
LAB_14001612f:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + lVar21) = uVar39;
          if ((uVar38 & 8) != 0) goto LAB_14001613f;
LAB_140015cc0:
          if ((uVar38 & 0x10) == 0) goto LAB_140015ccf;
LAB_140016155:
          *(int *)(param_1 + lVar63) = auVar76._16_4_;
          if ((uVar38 & 0x20) != 0) goto LAB_140016164;
LAB_140015cd8:
          if ((uVar38 & 0x40) == 0) goto LAB_140015ce1;
LAB_140016174:
          uVar39 = vextractps_avx(auVar164,2);
          *(undefined4 *)(param_1 + lVar66) = uVar39;
          if (cVar15 < '\0') goto LAB_140016184;
LAB_140015cea:
          auVar113._0_4_ = fVar202 * fVar184;
          auVar113._4_4_ = fVar209 * fVar192;
          auVar113._8_4_ = fVar210 * fVar193;
          auVar113._12_4_ = fVar212 * fVar194;
          auVar113._16_4_ = fVar214 * fVar195;
          auVar113._20_4_ = fVar216 * fVar196;
          auVar113._24_4_ = fVar218 * fVar197;
          auVar113._28_4_ = fVar220 * fVar198;
          auVar76 = vsubps_avx(auVar236,auVar113);
          if ((uVar38 & 1) == 0) goto LAB_140015cfb;
LAB_14001619c:
          *(int *)(param_1 + 4 + lVar68) = auVar76._0_4_;
          if ((uVar38 & 2) != 0) goto LAB_1400161ac;
LAB_140015d04:
          if ((uVar38 & 4) == 0) goto LAB_140015d0d;
LAB_1400161bd:
          uVar39 = vextractps_avx(auVar76._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar21) = uVar39;
          if ((uVar38 & 8) != 0) goto LAB_1400161ce;
LAB_140015d16:
          auVar150 = auVar76._16_16_;
          if ((uVar38 & 0x10) == 0) goto LAB_140015d25;
LAB_1400161e5:
          *(int *)(param_1 + 4 + lVar63) = auVar150._0_4_;
          if ((uVar38 & 0x20) != 0) goto LAB_1400161f5;
LAB_140015d2e:
          if ((uVar38 & 0x40) == 0) goto LAB_140015d37;
LAB_140016206:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 4 + lVar66) = uVar39;
          if (cVar15 < '\0') goto LAB_140016217;
LAB_140015d40:
          auVar114._0_4_ = fVar184 * fVar167;
          auVar114._4_4_ = fVar192 * fVar176;
          auVar114._8_4_ = fVar193 * fVar177;
          auVar114._12_4_ = fVar194 * fVar178;
          auVar114._16_4_ = fVar195 * fVar179;
          auVar114._20_4_ = fVar196 * fVar181;
          auVar114._24_4_ = fVar197 * fVar182;
          auVar114._28_4_ = fVar198 * fVar183;
          auVar76 = vsubps_avx(auVar139,auVar114);
          if ((uVar38 & 1) == 0) goto LAB_140015d51;
LAB_140016230:
          *(int *)(param_1 + 8 + lVar68) = auVar76._0_4_;
          if ((uVar38 & 2) != 0) goto LAB_140016240;
LAB_140015d5a:
          if ((uVar38 & 4) == 0) goto LAB_140015d63;
LAB_140016251:
          uVar39 = vextractps_avx(auVar76._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar21) = uVar39;
          if ((uVar38 & 8) != 0) goto LAB_140016262;
LAB_140015d6c:
          auVar150 = auVar76._16_16_;
        }
        if ((uVar38 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar63) = auVar150._0_4_;
        }
        if ((uVar38 & 0x20) != 0) {
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 8 + lVar30) = uVar39;
        }
        if ((uVar38 & 0x40) != 0) {
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 8 + lVar66) = uVar39;
        }
        if (cVar15 < '\0') {
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 8 + lVar59) = uVar39;
        }
        if ((uVar38 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar68) = uVar7;
        }
        if ((uVar38 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar52) = uVar8;
        }
        if ((uVar38 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar9;
        }
        if ((uVar38 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar47) = uVar10;
        }
        if ((uVar38 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar63) = uVar16;
        }
        if ((uVar38 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar4;
        }
        if ((uVar38 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar66) = uVar5;
        }
        if (cVar15 < '\0') {
          *(uint *)(param_1 + 0xc + lVar59) = uVar6;
        }
      }
      auVar76 = vcmpps_avx(auVar138,auVar77,0xc);
      uVar16 = vmovmskps_avx(auVar76);
      if (uVar16 != 0) {
        fVar69 = fVar69 * auVar74._0_4_ * fVar70;
        fVar87 = fVar87 * auVar74._4_4_ * fVar88;
        fVar89 = fVar89 * auVar74._8_4_ * fVar90;
        fVar92 = fVar92 * auVar74._12_4_ * fVar93;
        fVar95 = fVar95 * auVar231._0_4_ * fVar96;
        fVar98 = fVar98 * auVar231._4_4_ * fVar99;
        fVar101 = fVar101 * auVar231._8_4_ * fVar102;
        fVar104 = fVar104 * auVar231._12_4_ * fVar105;
        local_480 = auVar162._0_4_;
        fStack_47c = auVar162._4_4_;
        fStack_478 = auVar162._8_4_;
        fStack_474 = auVar162._12_4_;
        fStack_470 = auVar137._0_4_;
        fStack_46c = auVar137._4_4_;
        fStack_468 = auVar137._8_4_;
        fStack_464 = auVar137._12_4_;
        auVar150._0_4_ = fVar241 * fVar69 + local_480;
        auVar150._4_4_ = fVar245 * fVar87 + fStack_47c;
        auVar150._8_4_ = fVar246 * fVar89 + fStack_478;
        auVar150._12_4_ = fVar247 * fVar92 + fStack_474;
        auVar115._16_4_ = fVar248 * fVar95 + fStack_470;
        auVar115._0_16_ = auVar150;
        auVar115._20_4_ = fVar249 * fVar98 + fStack_46c;
        auVar115._24_4_ = fVar250 * fVar101 + fStack_468;
        auVar115._28_4_ = fVar251 * fVar104 + fStack_464;
        cVar15 = (char)uVar16;
        if ((uVar16 & 1) != 0) {
          *(float *)(param_1 + lVar34) = auVar150._0_4_;
        }
        auVar164 = auVar115._16_16_;
        local_340 = auVar168._0_4_;
        fStack_33c = auVar168._4_4_;
        fStack_338 = auVar168._8_4_;
        fStack_334 = auVar168._12_4_;
        fStack_330 = auVar151._0_4_;
        fStack_32c = auVar151._4_4_;
        fStack_328 = auVar151._8_4_;
        fStack_324 = auVar151._12_4_;
        local_460 = auVar161._0_4_;
        fStack_45c = auVar161._4_4_;
        fStack_458 = auVar161._8_4_;
        fStack_454 = auVar161._12_4_;
        fStack_450 = auVar180._0_4_;
        fStack_44c = auVar180._4_4_;
        fStack_448 = auVar180._8_4_;
        fStack_444 = auVar180._12_4_;
        if ((uVar16 & 2) == 0) {
          if ((uVar16 & 4) == 0) goto LAB_140015e5f;
LAB_140016395:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + lVar62) = uVar39;
          if ((uVar16 & 8) != 0) goto LAB_1400163a5;
LAB_140015e68:
          if ((uVar16 & 0x10) == 0) goto LAB_140015e77;
LAB_1400163bb:
          *(float *)(param_1 + lVar50) = auVar115._16_4_;
          if ((uVar16 & 0x20) != 0) goto LAB_1400163ca;
LAB_140015e80:
          if ((uVar16 & 0x40) == 0) goto LAB_140015e89;
LAB_1400163da:
          uVar39 = vextractps_avx(auVar164,2);
          *(undefined4 *)(param_1 + lVar27) = uVar39;
          if (cVar15 < '\0') goto LAB_1400163e9;
LAB_140015e91:
          auVar116._0_4_ = fVar202 * fVar69 + local_340;
          auVar116._4_4_ = fVar209 * fVar87 + fStack_33c;
          auVar116._8_4_ = fVar210 * fVar89 + fStack_338;
          auVar116._12_4_ = fVar212 * fVar92 + fStack_334;
          auVar116._16_4_ = fVar214 * fVar95 + fStack_330;
          auVar116._20_4_ = fVar216 * fVar98 + fStack_32c;
          auVar116._24_4_ = fVar218 * fVar101 + fStack_328;
          auVar116._28_4_ = fVar220 * fVar104 + fStack_324;
          if ((uVar16 & 1) == 0) goto LAB_140015ea7;
LAB_14001640e:
          *(int *)(param_1 + 4 + lVar34) = auVar116._0_4_;
          if ((uVar16 & 2) != 0) goto LAB_140016423;
LAB_140015eb0:
          if ((uVar16 & 4) == 0) goto LAB_140015eb9;
LAB_140016439:
          uVar39 = vextractps_avx(auVar116._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar62) = uVar39;
          if ((uVar16 & 8) != 0) goto LAB_14001644a;
LAB_140015ec2:
          auVar150 = auVar116._16_16_;
          if ((uVar16 & 0x10) == 0) goto LAB_140015ed1;
LAB_140016461:
          *(int *)(param_1 + 4 + lVar50) = auVar150._0_4_;
          if ((uVar16 & 0x20) != 0) goto LAB_140016471;
LAB_140015eda:
          if ((uVar16 & 0x40) == 0) goto LAB_140015ee3;
LAB_140016482:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 4 + lVar27) = uVar39;
          if (cVar15 < '\0') goto LAB_140016492;
LAB_140015eeb:
          auVar80._0_4_ = fVar167 * fVar69 + local_460;
          auVar80._4_4_ = fVar176 * fVar87 + fStack_45c;
          auVar80._8_4_ = fVar177 * fVar89 + fStack_458;
          auVar80._12_4_ = fVar178 * fVar92 + fStack_454;
          auVar80._16_4_ = fVar179 * fVar95 + fStack_450;
          auVar80._20_4_ = fVar181 * fVar98 + fStack_44c;
          auVar80._24_4_ = fVar182 * fVar101 + fStack_448;
          auVar80._28_4_ = fVar183 * fVar104 + fStack_444;
          if ((uVar16 & 1) == 0) goto LAB_140015f01;
LAB_1400164b8:
          *(int *)(param_1 + 8 + lVar34) = auVar80._0_4_;
          if ((uVar16 & 2) != 0) goto LAB_1400164cd;
LAB_140015f0a:
          if ((uVar16 & 4) == 0) goto LAB_140015f13;
LAB_1400164e3:
          uVar39 = vextractps_avx(auVar80._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar62) = uVar39;
          if ((uVar16 & 8) != 0) goto LAB_1400164f4;
LAB_140015f1c:
          auVar150 = auVar80._16_16_;
        }
        else {
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + lVar35) = uVar39;
          if ((uVar16 & 4) != 0) goto LAB_140016395;
LAB_140015e5f:
          if ((uVar16 & 8) == 0) goto LAB_140015e68;
LAB_1400163a5:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + lVar57) = uVar39;
          if ((uVar16 & 0x10) != 0) goto LAB_1400163bb;
LAB_140015e77:
          if ((uVar16 & 0x20) == 0) goto LAB_140015e80;
LAB_1400163ca:
          uVar39 = vextractps_avx(auVar164,1);
          *(undefined4 *)(param_1 + lVar46) = uVar39;
          if ((uVar16 & 0x40) != 0) goto LAB_1400163da;
LAB_140015e89:
          if (-1 < cVar15) goto LAB_140015e91;
LAB_1400163e9:
          uVar39 = vextractps_avx(auVar164,3);
          *(undefined4 *)(param_1 + lVar19) = uVar39;
          auVar116._0_4_ = fVar202 * fVar69 + local_340;
          auVar116._4_4_ = fVar209 * fVar87 + fStack_33c;
          auVar116._8_4_ = fVar210 * fVar89 + fStack_338;
          auVar116._12_4_ = fVar212 * fVar92 + fStack_334;
          auVar116._16_4_ = fVar214 * fVar95 + fStack_330;
          auVar116._20_4_ = fVar216 * fVar98 + fStack_32c;
          auVar116._24_4_ = fVar218 * fVar101 + fStack_328;
          auVar116._28_4_ = fVar220 * fVar104 + fStack_324;
          if ((uVar16 & 1) != 0) goto LAB_14001640e;
LAB_140015ea7:
          if ((uVar16 & 2) == 0) goto LAB_140015eb0;
LAB_140016423:
          uVar39 = vextractps_avx(auVar116._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar35) = uVar39;
          if ((uVar16 & 4) != 0) goto LAB_140016439;
LAB_140015eb9:
          if ((uVar16 & 8) == 0) goto LAB_140015ec2;
LAB_14001644a:
          uVar39 = vextractps_avx(auVar116._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar57) = uVar39;
          auVar150 = auVar116._16_16_;
          if ((uVar16 & 0x10) != 0) goto LAB_140016461;
LAB_140015ed1:
          if ((uVar16 & 0x20) == 0) goto LAB_140015eda;
LAB_140016471:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 4 + lVar46) = uVar39;
          if ((uVar16 & 0x40) != 0) goto LAB_140016482;
LAB_140015ee3:
          if (-1 < cVar15) goto LAB_140015eeb;
LAB_140016492:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 4 + lVar19) = uVar39;
          auVar80._0_4_ = fVar167 * fVar69 + local_460;
          auVar80._4_4_ = fVar176 * fVar87 + fStack_45c;
          auVar80._8_4_ = fVar177 * fVar89 + fStack_458;
          auVar80._12_4_ = fVar178 * fVar92 + fStack_454;
          auVar80._16_4_ = fVar179 * fVar95 + fStack_450;
          auVar80._20_4_ = fVar181 * fVar98 + fStack_44c;
          auVar80._24_4_ = fVar182 * fVar101 + fStack_448;
          auVar80._28_4_ = fVar183 * fVar104 + fStack_444;
          if ((uVar16 & 1) != 0) goto LAB_1400164b8;
LAB_140015f01:
          if ((uVar16 & 2) == 0) goto LAB_140015f0a;
LAB_1400164cd:
          uVar39 = vextractps_avx(auVar80._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar35) = uVar39;
          if ((uVar16 & 4) != 0) goto LAB_1400164e3;
LAB_140015f13:
          if ((uVar16 & 8) == 0) goto LAB_140015f1c;
LAB_1400164f4:
          uVar39 = vextractps_avx(auVar80._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar57) = uVar39;
          auVar150 = auVar80._16_16_;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar50) = auVar150._0_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 8 + lVar46) = uVar39;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 8 + lVar27) = uVar39;
        }
        if (cVar15 < '\0') {
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 8 + lVar19) = uVar39;
        }
        if ((uVar16 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar17;
        }
        if ((uVar16 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar91;
        }
        if ((uVar16 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar62) = uVar94;
        }
        if ((uVar16 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar57) = uVar97;
        }
        if ((uVar16 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar50) = uVar100;
        }
        if ((uVar16 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar46) = uVar103;
        }
        if ((uVar16 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar27) = uVar106;
        }
        if (cVar15 < '\0') {
          *(uint *)(param_1 + 0xc + lVar19) = uVar211;
        }
      }
      auVar76 = vcmpps_avx(auVar254,auVar77,0xc);
      uVar17 = vmovmskps_avx(auVar76);
      if (uVar17 != 0) {
        fVar70 = auVar108._0_4_ * auVar13._0_4_ * fVar70;
        fVar88 = auVar108._4_4_ * auVar13._4_4_ * fVar88;
        fVar90 = auVar108._8_4_ * auVar13._8_4_ * fVar90;
        fVar93 = auVar108._12_4_ * auVar13._12_4_ * fVar93;
        fVar96 = auVar108._16_4_ * auVar12._0_4_ * fVar96;
        fVar99 = auVar108._20_4_ * auVar12._4_4_ * fVar99;
        fVar102 = auVar108._24_4_ * auVar12._8_4_ * fVar102;
        fVar105 = auVar108._28_4_ * auVar12._12_4_ * fVar105;
        auVar164._0_4_ = fVar241 * fVar70 + auVar133._0_4_;
        auVar164._4_4_ = fVar245 * fVar88 + auVar133._4_4_;
        auVar164._8_4_ = fVar246 * fVar90 + auVar133._8_4_;
        auVar164._12_4_ = fVar247 * fVar93 + auVar133._12_4_;
        auVar117._16_4_ = fVar248 * fVar96 + auVar75._0_4_;
        auVar117._0_16_ = auVar164;
        auVar117._20_4_ = fVar249 * fVar99 + auVar75._4_4_;
        auVar117._24_4_ = fVar250 * fVar102 + auVar75._8_4_;
        auVar117._28_4_ = fVar251 * fVar105 + auVar75._12_4_;
        cVar15 = (char)uVar17;
        auVar150 = auVar117._16_16_;
        if ((uVar17 & 1) == 0) {
          if ((uVar17 & 2) == 0) goto LAB_140015fdd;
LAB_14001664c:
          uVar39 = vextractps_avx(auVar164,1);
          *(undefined4 *)(param_1 + lVar51) = uVar39;
          if ((uVar17 & 4) != 0) goto LAB_140016664;
LAB_140015fe6:
          if ((uVar17 & 8) == 0) goto LAB_140015fef;
LAB_14001667c:
          uVar39 = vextractps_avx(auVar164,3);
          *(undefined4 *)(param_1 + lVar36) = uVar39;
          if ((uVar17 & 0x10) != 0) goto LAB_140016692;
LAB_140015ffe:
          if ((uVar17 & 0x20) == 0) goto LAB_140016007;
LAB_1400166a1:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + lVar64) = uVar39;
          if ((uVar17 & 0x40) != 0) goto LAB_1400166b1;
LAB_140016010:
          if (-1 < cVar15) goto LAB_140016018;
LAB_1400166c0:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + lVar65) = uVar39;
          auVar118._0_4_ = fVar202 * fVar70 + fVar128;
          auVar118._4_4_ = fVar209 * fVar88 + fVar129;
          auVar118._8_4_ = fVar210 * fVar90 + fVar130;
          auVar118._12_4_ = fVar212 * fVar93 + fVar131;
          auVar118._16_4_ = fVar214 * fVar96 + fVar132;
          auVar118._20_4_ = fVar216 * fVar99 + fVar144;
          auVar118._24_4_ = fVar218 * fVar102 + fVar145;
          auVar118._28_4_ = fVar220 * fVar105 + fVar146;
          if ((uVar17 & 1) != 0) goto LAB_1400166e5;
LAB_14001602e:
          if ((uVar17 & 2) == 0) goto LAB_140016037;
LAB_1400166f5:
          uVar39 = vextractps_avx(auVar118._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar51) = uVar39;
          if ((uVar17 & 4) != 0) goto LAB_14001670e;
LAB_140016040:
          if ((uVar17 & 8) == 0) goto LAB_140016049;
LAB_140016727:
          uVar39 = vextractps_avx(auVar118._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar36) = uVar39;
          auVar150 = auVar118._16_16_;
          if ((uVar17 & 0x10) != 0) goto LAB_14001673e;
LAB_140016058:
          if ((uVar17 & 0x20) == 0) goto LAB_140016061;
LAB_14001674e:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 4 + lVar64) = uVar39;
          if ((uVar17 & 0x40) != 0) goto LAB_14001675f;
LAB_14001606a:
          if (-1 < cVar15) goto LAB_140016072;
LAB_14001676f:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 4 + lVar65) = uVar39;
          auVar81._0_4_ = fVar167 * fVar70 + fVar147;
          auVar81._4_4_ = fVar176 * fVar88 + fVar148;
          auVar81._8_4_ = fVar177 * fVar90 + fVar149;
          auVar81._12_4_ = fVar178 * fVar93 + fVar159;
          auVar81._16_4_ = fVar179 * fVar96 + fVar160;
          auVar81._20_4_ = fVar181 * fVar99 + fVar163;
          auVar81._24_4_ = fVar182 * fVar102 + fVar235;
          auVar81._28_4_ = fVar183 * fVar105 + fVar239;
          if ((uVar17 & 1) != 0) goto LAB_140016795;
LAB_140016088:
          if ((uVar17 & 2) == 0) goto LAB_140016091;
LAB_1400167a5:
          uVar39 = vextractps_avx(auVar81._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar51) = uVar39;
          if ((uVar17 & 4) != 0) goto LAB_1400167be;
LAB_14001609a:
          if ((uVar17 & 8) == 0) goto LAB_1400160a3;
LAB_1400167d7:
          uVar39 = vextractps_avx(auVar81._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar36) = uVar39;
          auVar150 = auVar81._16_16_;
        }
        else {
          *(float *)(param_1 + lVar58) = auVar164._0_4_;
          if ((uVar17 & 2) != 0) goto LAB_14001664c;
LAB_140015fdd:
          if ((uVar17 & 4) == 0) goto LAB_140015fe6;
LAB_140016664:
          uVar39 = vextractps_avx(auVar164,2);
          *(undefined4 *)(param_1 + lVar28) = uVar39;
          if ((uVar17 & 8) != 0) goto LAB_14001667c;
LAB_140015fef:
          if ((uVar17 & 0x10) == 0) goto LAB_140015ffe;
LAB_140016692:
          *(float *)(param_1 + lVar20) = auVar117._16_4_;
          if ((uVar17 & 0x20) != 0) goto LAB_1400166a1;
LAB_140016007:
          if ((uVar17 & 0x40) == 0) goto LAB_140016010;
LAB_1400166b1:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + lVar67) = uVar39;
          if (cVar15 < '\0') goto LAB_1400166c0;
LAB_140016018:
          auVar118._0_4_ = fVar202 * fVar70 + fVar128;
          auVar118._4_4_ = fVar209 * fVar88 + fVar129;
          auVar118._8_4_ = fVar210 * fVar90 + fVar130;
          auVar118._12_4_ = fVar212 * fVar93 + fVar131;
          auVar118._16_4_ = fVar214 * fVar96 + fVar132;
          auVar118._20_4_ = fVar216 * fVar99 + fVar144;
          auVar118._24_4_ = fVar218 * fVar102 + fVar145;
          auVar118._28_4_ = fVar220 * fVar105 + fVar146;
          if ((uVar17 & 1) == 0) goto LAB_14001602e;
LAB_1400166e5:
          *(int *)(param_1 + 4 + lVar58) = auVar118._0_4_;
          if ((uVar17 & 2) != 0) goto LAB_1400166f5;
LAB_140016037:
          if ((uVar17 & 4) == 0) goto LAB_140016040;
LAB_14001670e:
          uVar39 = vextractps_avx(auVar118._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar28) = uVar39;
          if ((uVar17 & 8) != 0) goto LAB_140016727;
LAB_140016049:
          auVar150 = auVar118._16_16_;
          if ((uVar17 & 0x10) == 0) goto LAB_140016058;
LAB_14001673e:
          *(int *)(param_1 + 4 + lVar20) = auVar150._0_4_;
          if ((uVar17 & 0x20) != 0) goto LAB_14001674e;
LAB_140016061:
          if ((uVar17 & 0x40) == 0) goto LAB_14001606a;
LAB_14001675f:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 4 + lVar67) = uVar39;
          if (cVar15 < '\0') goto LAB_14001676f;
LAB_140016072:
          auVar81._0_4_ = fVar167 * fVar70 + fVar147;
          auVar81._4_4_ = fVar176 * fVar88 + fVar148;
          auVar81._8_4_ = fVar177 * fVar90 + fVar149;
          auVar81._12_4_ = fVar178 * fVar93 + fVar159;
          auVar81._16_4_ = fVar179 * fVar96 + fVar160;
          auVar81._20_4_ = fVar181 * fVar99 + fVar163;
          auVar81._24_4_ = fVar182 * fVar102 + fVar235;
          auVar81._28_4_ = fVar183 * fVar105 + fVar239;
          if ((uVar17 & 1) == 0) goto LAB_140016088;
LAB_140016795:
          *(int *)(param_1 + 8 + lVar58) = auVar81._0_4_;
          if ((uVar17 & 2) != 0) goto LAB_1400167a5;
LAB_140016091:
          if ((uVar17 & 4) == 0) goto LAB_14001609a;
LAB_1400167be:
          uVar39 = vextractps_avx(auVar81._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar28) = uVar39;
          if ((uVar17 & 8) != 0) goto LAB_1400167d7;
LAB_1400160a3:
          auVar150 = auVar81._16_16_;
        }
        if ((uVar17 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar20) = auVar150._0_4_;
        }
        if ((uVar17 & 0x20) != 0) {
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 8 + lVar64) = uVar39;
        }
        if ((uVar17 & 0x40) != 0) {
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 8 + lVar67) = uVar39;
        }
        if (cVar15 < '\0') {
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 8 + lVar65) = uVar39;
        }
        if ((uVar17 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar58) = uVar221;
        }
        if ((uVar17 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar51) = uVar1;
        }
        if ((uVar17 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar2;
        }
        if ((uVar17 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar3;
        }
        if ((uVar17 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar213;
        }
        if ((uVar17 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar64) = uVar215;
        }
        if ((uVar17 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar67) = uVar217;
        }
        if (cVar15 < '\0') {
          *(uint *)(param_1 + 0xc + lVar65) = uVar219;
        }
      }
      uVar71 = uVar71 + 0x20;
      pauVar18 = pauVar18 + 3;
      uVar33 = uVar33 + 8;
    } while ((int)uVar33 < (int)(uVar29 & 0xfffffff8));
  }
  if ((int)param_6 <= (int)uVar33) {
    return;
  }
  auVar134 = vpshufd_avx(ZEXT416(uVar33),0);
  auVar82._16_16_ = auVar134;
  auVar82._0_16_ = auVar134;
  auVar164 = vpshufd_avx(ZEXT416(param_6),0);
  pauVar18 = (undefined1 (*) [32])(param_2 + (ulonglong)uVar33 * 0xc);
  auVar137 = SUB3216(auVar82 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar162 = SUB3216(auVar82 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar150 = vpcmpgtd_avx(auVar164,auVar162);
  auVar134 = vpcmpgtd_avx(auVar164,auVar137);
  auVar134 = vpand_avx(auVar134,auVar150);
  auVar150 = vpcmpeqd_avx(auVar150,auVar150);
  auVar150 = auVar150 & ~auVar134;
  if ((((SUB161(auVar150 >> 0x1f,0) & 1) == 0 && (SUB161(auVar150 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar150 >> 0x5f,0) & 1) == 0) && -1 < auVar150[0xf]) {
    auVar78 = pauVar18[2];
    auVar154._16_16_ = *(undefined1 (*) [16])*pauVar18;
    auVar154._0_16_ = *(undefined1 (*) [16])(*pauVar18 + 0x10);
    auVar76 = vblendps_avx(*pauVar18,auVar154,0x24);
    auVar79 = vpermilps_avx(auVar76,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar39 = *(undefined4 *)(pauVar18[1] + 4);
    auVar237._4_4_ = uVar39;
    auVar237._0_4_ = uVar39;
    auVar237._8_4_ = uVar39;
    auVar237._12_4_ = uVar39;
    uVar39 = *(undefined4 *)(pauVar18[1] + 8);
    auVar237._20_4_ = uVar39;
    auVar237._16_4_ = uVar39;
    auVar237._24_4_ = uVar39;
    auVar237._28_4_ = uVar39;
    auVar205._16_16_ = *(undefined1 (*) [16])pauVar18[2];
    auVar205._0_16_ = *(undefined1 (*) [16])(pauVar18[2] + 0x10);
    auVar76 = vblendps_avx(auVar205,auVar78,0x44);
    auVar77 = vpermilps_avx(auVar76,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar76 = vblendps_avx(auVar79,auVar237,0x88);
    auVar134 = vshufps_avx(*(undefined1 (*) [16])(pauVar18[1] + 0x10),
                           *(undefined1 (*) [16])(pauVar18[1] + 0x10),0xec);
    uVar39 = *(undefined4 *)(pauVar18[1] + 0x14);
    auVar155._20_4_ = uVar39;
    auVar155._16_4_ = uVar39;
    auVar155._24_4_ = uVar39;
    auVar155._28_4_ = uVar39;
    auVar155._0_16_ = auVar134;
    auVar79 = vblendps_avx(auVar77,auVar155,0x13);
    auVar153._16_16_ = auVar79._0_16_;
    auVar153._0_16_ = auVar76._0_16_;
    auVar77 = vperm2f128_avx(auVar76,auVar79,0x31);
    auVar76 = vblendps_avx(pauVar18[1],*pauVar18,0x24);
    auVar76 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar18 + 0x10)),auVar76,0x21);
    auVar76 = vshufps_avx(auVar76,pauVar18[1],0xc2);
    auVar79 = vshufps_avx(auVar205,auVar78,0xc4);
    auVar76 = vblendps_avx(auVar76,auVar79,0xe0);
  }
  else {
    auVar134 = vpcmpgtd_avx(auVar164,auVar162);
    auVar150 = vpcmpgtd_avx(auVar164,auVar137);
    uVar29 = auVar150._0_4_;
    auVar151._0_4_ =
         uVar29 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
    uVar71 = auVar150._4_4_;
    auVar151._4_4_ = uVar71 & _UNK_150b50b04;
    uVar17 = auVar150._8_4_;
    auVar151._8_4_ = uVar17 & _UNK_150b50b08;
    uVar91 = auVar150._12_4_;
    auVar151._12_4_ = uVar91 & _UNK_150b50b0c;
    uVar94 = auVar134._0_4_;
    vextractps_avx(auVar151,1);
    vextractps_avx(auVar151,2);
    vextractps_avx(auVar151,3);
    auVar168._0_4_ =
         uVar29 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
    auVar168._4_4_ = uVar71 & _UNK_150b50b24;
    auVar168._8_4_ = uVar17 & _UNK_150b50b28;
    auVar168._12_4_ = uVar91 & _UNK_150b50b2c;
    vextractps_avx(auVar168,1);
    vextractps_avx(auVar168,2);
    vextractps_avx(auVar168,3);
    auVar134._0_4_ =
         uVar29 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
    auVar134._4_4_ = uVar71 & _UNK_150b50b44;
    auVar134._8_4_ = uVar17 & _UNK_150b50b48;
    auVar134._12_4_ = uVar91 & _UNK_150b50b4c;
    vextractps_avx(auVar134,1);
    vextractps_avx(auVar134,2);
    auVar153 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar18 + (uVar94 & _UNK_150b50b10)),
                                  ZEXT416(*(uint *)*pauVar18)));
    vextractps_avx(auVar134,3);
    auVar77 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar18 + (uVar94 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar18 + auVar168._0_4_))));
    auVar76 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar18 + (uVar94 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar18 + auVar134._0_4_))));
  }
  auVar180 = vpcmpgtd_avx(auVar164,auVar162);
  auVar231 = vpcmpgtd_avx(auVar164,auVar137);
  auVar83._16_16_ = auVar180;
  auVar83._0_16_ = auVar231;
  auVar139 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_3 + (int)(uVar33 << 2)));
  auVar135 = vpslld_avx(auVar77._0_16_,4);
  auVar185 = vpslld_avx(auVar77._16_16_,4);
  auVar162 = vpand_avx(auVar231,auVar135);
  lVar19 = param_1 + auVar162._0_4_;
  lVar20 = param_1 + auVar162._4_4_;
  lVar21 = param_1 + auVar162._8_4_;
  lVar27 = param_1 + auVar162._12_4_;
  auVar151 = vpand_avx(auVar180,auVar185);
  lVar28 = param_1 + auVar151._0_4_;
  lVar30 = param_1 + auVar151._4_4_;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar151._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar151._4_4_)),0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(param_1 + auVar151._8_4_)),0x20);
  lVar34 = param_1 + auVar151._8_4_;
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(param_1 + auVar151._12_4_)),0x30);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar162._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar162._4_4_)),0x10);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + auVar162._8_4_)),0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + auVar162._12_4_)),0x30);
  uVar71 = auVar231._0_4_;
  uVar17 = auVar231._4_4_;
  uVar91 = auVar231._8_4_;
  uVar94 = auVar231._12_4_;
  uVar97 = auVar180._0_4_;
  uVar100 = auVar180._4_4_;
  uVar103 = auVar180._8_4_;
  uVar106 = auVar180._12_4_;
  lVar35 = param_1 + auVar151._12_4_;
  uVar48 = (ulonglong)(uVar100 & _UNK_150b50d54);
  uVar31 = (ulonglong)(uVar97 & _UNK_150b50d50);
  uVar60 = (ulonglong)(uVar103 & _UNK_150b50d58);
  auVar162 = vinsertps_avx(ZEXT416(*(uint *)(uVar31 + lVar28)),ZEXT416(*(uint *)(uVar48 + lVar30)),
                           0x10);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(uVar60 + lVar34)),0x20);
  uVar37 = (ulonglong)(uVar106 & _UNK_150b50d5c);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(uVar37 + lVar35)),0x30);
  uVar49 = (ulonglong)
           (uVar71 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004);
  uVar26 = (ulonglong)(uVar17 & _UNK_150b50d44);
  auVar151 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar19)),ZEXT416(*(uint *)(uVar26 + lVar20)),
                           0x10);
  uVar53 = (ulonglong)(uVar91 & _UNK_150b50d48);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar53 + lVar21)),0x20);
  uVar54 = (ulonglong)(uVar94 & _UNK_150b50d4c);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar54 + lVar27)),0x30);
  auVar125._16_16_ = auVar134;
  auVar125._0_16_ = auVar150;
  uVar55 = (ulonglong)(uVar97 & _UNK_150b50d70);
  uVar56 = (ulonglong)(uVar100 & _UNK_150b50d74);
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar55 + lVar28)),ZEXT416(*(uint *)(uVar56 + lVar30)),
                           0x10);
  uVar22 = (ulonglong)(uVar103 & _UNK_150b50d78);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar22 + lVar34)),0x20);
  uVar23 = (ulonglong)(uVar106 & _UNK_150b50d7c);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar23 + lVar35)),0x30);
  uVar61 = (ulonglong)
           (uVar71 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008);
  uVar32 = (ulonglong)(uVar17 & _UNK_150b50d64);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar61 + lVar19)),ZEXT416(*(uint *)(uVar32 + lVar20)),
                           0x10);
  uVar24 = (ulonglong)(uVar91 & _UNK_150b50d68);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar24 + lVar21)),0x20);
  uVar25 = (ulonglong)(uVar94 & _UNK_150b50d6c);
  auVar188._16_16_ = auVar162;
  auVar188._0_16_ = auVar151;
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar25 + lVar27)),0x30);
  auVar200._16_16_ = auVar134;
  auVar200._0_16_ = auVar150;
  auVar136 = vpslld_avx(auVar76._16_16_,4);
  auVar168 = vpand_avx(auVar180,auVar136);
  lVar36 = param_1 + auVar168._0_4_;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar168._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar168._4_4_)),0x10);
  lVar46 = param_1 + auVar168._4_4_;
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar31 + lVar36)),ZEXT416(*(uint *)(uVar48 + lVar46)),
                           0x10);
  auVar79 = vmaskmovps_avx(auVar83,auVar125);
  auVar77 = vmaskmovps_avx(auVar83,auVar188);
  auVar78 = vmaskmovps_avx(auVar83,auVar200);
  auVar74 = vpslld_avx(auVar153._16_16_,4);
  auVar180 = vpand_avx(auVar180,auVar74);
  lVar47 = param_1 + auVar180._0_4_;
  auVar162 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar180._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar180._4_4_)),0x10);
  lVar50 = param_1 + auVar180._4_4_;
  auVar151 = vinsertps_avx(ZEXT416(*(uint *)(uVar31 + lVar47)),ZEXT416(*(uint *)(uVar48 + lVar50)),
                           0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(param_1 + auVar168._8_4_)),0x20);
  lVar51 = param_1 + auVar168._8_4_;
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar60 + lVar51)),0x20);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(param_1 + auVar180._8_4_)),0x20);
  lVar52 = param_1 + auVar180._8_4_;
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar60 + lVar52)),0x20);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(param_1 + auVar168._12_4_)),0x30);
  lVar57 = param_1 + auVar168._12_4_;
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar37 + lVar57)),0x30);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(param_1 + auVar180._12_4_)),0x30);
  lVar58 = param_1 + auVar180._12_4_;
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar37 + lVar58)),0x30);
  auVar133 = vpslld_avx(auVar76._0_16_,4);
  auVar161 = vpand_avx(auVar231,auVar133);
  auVar168 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar161._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar161._4_4_)),0x10);
  lVar59 = param_1 + auVar161._0_4_;
  lVar62 = param_1 + auVar161._4_4_;
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(param_1 + auVar161._8_4_)),0x20);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(param_1 + auVar161._12_4_)),0x30);
  auVar172._16_16_ = auVar134;
  auVar172._0_16_ = auVar168;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar59)),ZEXT416(*(uint *)(uVar26 + lVar62)),
                           0x10);
  auVar76 = vmaskmovps_avx(auVar83,auVar172);
  auVar75 = vpslld_avx(auVar153._0_16_,4);
  auVar231 = vpand_avx(auVar231,auVar75);
  lVar63 = param_1 + auVar231._0_4_;
  auVar168 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar231._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar231._4_4_)),0x10);
  lVar64 = param_1 + auVar231._4_4_;
  auVar180 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar63)),ZEXT416(*(uint *)(uVar26 + lVar64)),
                           0x10);
  lVar65 = param_1 + auVar161._8_4_;
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar53 + lVar65)),0x20);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(param_1 + auVar231._8_4_)),0x20);
  lVar66 = param_1 + auVar231._8_4_;
  auVar180 = vinsertps_avx(auVar180,ZEXT416(*(uint *)(uVar53 + lVar66)),0x20);
  lVar67 = param_1 + auVar161._12_4_;
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar54 + lVar67)),0x30);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(param_1 + auVar231._12_4_)),0x30);
  lVar68 = param_1 + auVar231._12_4_;
  auVar180 = vinsertps_avx(auVar180,ZEXT416(*(uint *)(uVar54 + lVar68)),0x30);
  auVar156._16_16_ = auVar150;
  auVar156._0_16_ = auVar134;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar55 + lVar36)),ZEXT416(*(uint *)(uVar56 + lVar46)),
                           0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar22 + lVar51)),0x20);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar23 + lVar57)),0x30);
  auVar208 = vmaskmovps_avx(auVar83,auVar156);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar61 + lVar59)),ZEXT416(*(uint *)(uVar32 + lVar62)),
                           0x10);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar24 + lVar65)),0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar25 + lVar67)),0x30);
  auVar157._16_16_ = auVar134;
  auVar157._0_16_ = auVar150;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar55 + lVar47)),ZEXT416(*(uint *)(uVar56 + lVar50)),
                           0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar22 + lVar52)),0x20);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar23 + lVar58)),0x30);
  auVar107 = vmaskmovps_avx(auVar83,auVar157);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar61 + lVar63)),ZEXT416(*(uint *)(uVar32 + lVar64)),
                           0x10);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar24 + lVar66)),0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar25 + lVar68)),0x30);
  auVar189._16_16_ = auVar162;
  auVar189._0_16_ = auVar168;
  auVar161._0_4_ = uVar71 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar161._4_4_ = uVar17 & _UNK_150b50d84;
  auVar161._8_4_ = uVar91 & _UNK_150b50d88;
  auVar161._12_4_ = uVar94 & _UNK_150b50d8c;
  auVar225._16_16_ = auVar151;
  auVar225._0_16_ = auVar180;
  auVar238._16_16_ = auVar134;
  auVar238._0_16_ = auVar150;
  uVar49 = (ulonglong)(uVar97 & _UNK_150b50d90);
  auVar108 = vmaskmovps_avx(auVar83,auVar189);
  auVar109 = vmaskmovps_avx(auVar83,auVar225);
  auVar110 = vmaskmovps_avx(auVar83,auVar238);
  auVar190._4_4_ = __real_3f800000;
  auVar190._0_4_ = __real_3f800000;
  auVar190._8_4_ = __real_3f800000;
  auVar190._12_4_ = __real_3f800000;
  auVar190._16_4_ = __real_3f800000;
  auVar190._20_4_ = __real_3f800000;
  auVar190._24_4_ = __real_3f800000;
  auVar190._28_4_ = __real_3f800000;
  auVar169 = vsubps_avx(auVar190,auVar139);
  auVar111 = vmaxps_avx(auVar139,auVar169);
  auVar191._0_4_ = auVar111._0_4_ + __real_3f800000;
  auVar191._4_4_ = auVar111._4_4_ + __real_3f800000;
  auVar191._8_4_ = auVar111._8_4_ + __real_3f800000;
  auVar191._12_4_ = auVar111._12_4_ + __real_3f800000;
  auVar191._16_4_ = auVar111._16_4_ + __real_3f800000;
  auVar191._20_4_ = auVar111._20_4_ + __real_3f800000;
  auVar191._24_4_ = auVar111._24_4_ + __real_3f800000;
  auVar191._28_4_ = auVar111._28_4_ + __real_3f800000;
  auVar226._4_4_ = __real_40000000;
  auVar226._0_4_ = __real_40000000;
  auVar226._8_4_ = __real_40000000;
  auVar226._12_4_ = __real_40000000;
  auVar226._16_4_ = __real_40000000;
  auVar226._20_4_ = __real_40000000;
  auVar226._24_4_ = __real_40000000;
  auVar226._28_4_ = __real_40000000;
  auVar111 = vdivps_avx(auVar226,auVar191);
  uVar61 = (ulonglong)(uVar100 & _UNK_150b50d94);
  uVar26 = (ulonglong)(uVar103 & _UNK_150b50d98);
  uVar32 = (ulonglong)(uVar106 & _UNK_150b50d9c);
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar28)),ZEXT416(*(uint *)(uVar61 + lVar30)),
                           0x10);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar36)),ZEXT416(*(uint *)(uVar61 + lVar46)),
                           0x10);
  auVar162 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar47)),ZEXT416(*(uint *)(uVar61 + lVar50)),
                           0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar26 + lVar34)),0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar26 + lVar51)),0x20);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(uVar26 + lVar52)),0x20);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar32 + lVar35)),0x30);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar32 + lVar57)),0x30);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(uVar32 + lVar58)),0x30);
  uVar29 = vextractps_avx(auVar161,1);
  uVar32 = (ulonglong)uVar29;
  uVar39 = vextractps_avx(auVar161,2);
  lVar30 = CONCAT44((int)((ulonglong)lVar34 >> 0x20),uVar39);
  uVar39 = vextractps_avx(auVar161,3);
  lVar28 = CONCAT44((int)((ulonglong)lVar57 >> 0x20),uVar39);
  uVar26 = (ulonglong)auVar161._0_4_;
  auVar151 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar19)),ZEXT416(*(uint *)(uVar32 + lVar20)),
                           0x10);
  auVar168 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar59)),ZEXT416(*(uint *)(uVar32 + lVar62)),
                           0x10);
  auVar138 = vsubps_avx(auVar79,auVar76);
  fVar149 = auVar139._0_4_;
  fVar177 = auVar139._4_4_;
  fVar159 = auVar139._8_4_;
  fVar178 = auVar139._12_4_;
  fVar160 = auVar139._16_4_;
  fVar179 = auVar139._20_4_;
  fVar163 = auVar139._24_4_;
  fVar181 = auVar139._28_4_;
  auVar139 = vsubps_avx(auVar77,auVar208);
  auVar255._0_4_ = fVar149 * auVar138._0_4_ + auVar76._0_4_;
  auVar255._4_4_ = fVar177 * auVar138._4_4_ + auVar76._4_4_;
  auVar255._8_4_ = fVar159 * auVar138._8_4_ + auVar76._8_4_;
  auVar255._12_4_ = fVar178 * auVar138._12_4_ + auVar76._12_4_;
  auVar255._16_4_ = fVar160 * auVar138._16_4_ + auVar76._16_4_;
  auVar255._20_4_ = fVar179 * auVar138._20_4_ + auVar76._20_4_;
  auVar255._24_4_ = fVar163 * auVar138._24_4_ + auVar76._24_4_;
  auVar255._28_4_ = fVar181 * auVar138._28_4_ + auVar76._28_4_;
  fVar70 = auVar208._0_4_;
  auVar121._0_4_ = fVar149 * auVar139._0_4_ + fVar70;
  fVar90 = auVar208._4_4_;
  auVar121._4_4_ = fVar177 * auVar139._4_4_ + fVar90;
  fVar93 = auVar208._8_4_;
  auVar121._8_4_ = fVar159 * auVar139._8_4_ + fVar93;
  fVar96 = auVar208._12_4_;
  auVar121._12_4_ = fVar178 * auVar139._12_4_ + fVar96;
  fVar99 = auVar208._16_4_;
  auVar121._16_4_ = fVar160 * auVar139._16_4_ + fVar99;
  fVar105 = auVar208._20_4_;
  auVar121._20_4_ = fVar179 * auVar139._20_4_ + fVar105;
  fVar69 = auVar208._24_4_;
  auVar121._24_4_ = fVar163 * auVar139._24_4_ + fVar69;
  fVar87 = auVar208._28_4_;
  auVar121._28_4_ = fVar181 * auVar139._28_4_ + fVar87;
  auVar208 = vsubps_avx(auVar108,auVar255);
  auVar138 = vsubps_avx(auVar109,auVar121);
  auVar180 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar63)),ZEXT416(*(uint *)(uVar32 + lVar64)),
                           0x10);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(lVar30 + lVar21)),0x20);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(lVar30 + lVar65)),0x20);
  auVar180 = vinsertps_avx(auVar180,ZEXT416(*(uint *)(lVar30 + lVar66)),0x20);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(lVar28 + lVar27)),0x30);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(lVar28 + lVar67)),0x30);
  auVar180 = vinsertps_avx(auVar180,ZEXT416(*(uint *)(lVar28 + lVar68)),0x30);
  auVar139 = vsubps_avx(auVar78,auVar107);
  fVar95 = auVar107._0_4_;
  auVar256._0_4_ = fVar95 + fVar149 * auVar139._0_4_;
  fVar98 = auVar107._4_4_;
  auVar256._4_4_ = fVar98 + fVar177 * auVar139._4_4_;
  fVar101 = auVar107._8_4_;
  auVar256._8_4_ = fVar101 + fVar159 * auVar139._8_4_;
  fVar104 = auVar107._12_4_;
  auVar256._12_4_ = fVar104 + fVar178 * auVar139._12_4_;
  fVar128 = auVar107._16_4_;
  auVar256._16_4_ = fVar128 + fVar160 * auVar139._16_4_;
  fVar129 = auVar107._20_4_;
  auVar256._20_4_ = fVar129 + fVar179 * auVar139._20_4_;
  fVar130 = auVar107._24_4_;
  auVar256._24_4_ = fVar130 + fVar163 * auVar139._24_4_;
  fVar131 = auVar107._28_4_;
  auVar256._28_4_ = fVar131 + fVar181 * auVar139._28_4_;
  auVar139 = vsubps_avx(auVar110,auVar256);
  auVar140._0_4_ =
       auVar139._0_4_ * auVar139._0_4_ +
       auVar208._0_4_ * auVar208._0_4_ + auVar138._0_4_ * auVar138._0_4_;
  auVar140._4_4_ =
       auVar139._4_4_ * auVar139._4_4_ +
       auVar208._4_4_ * auVar208._4_4_ + auVar138._4_4_ * auVar138._4_4_;
  auVar140._8_4_ =
       auVar139._8_4_ * auVar139._8_4_ +
       auVar208._8_4_ * auVar208._8_4_ + auVar138._8_4_ * auVar138._8_4_;
  auVar140._12_4_ =
       auVar139._12_4_ * auVar139._12_4_ +
       auVar208._12_4_ * auVar208._12_4_ + auVar138._12_4_ * auVar138._12_4_;
  auVar140._16_4_ =
       auVar139._16_4_ * auVar139._16_4_ +
       auVar208._16_4_ * auVar208._16_4_ + auVar138._16_4_ * auVar138._16_4_;
  auVar140._20_4_ =
       auVar139._20_4_ * auVar139._20_4_ +
       auVar208._20_4_ * auVar208._20_4_ + auVar138._20_4_ * auVar138._20_4_;
  auVar140._24_4_ =
       auVar139._24_4_ * auVar139._24_4_ +
       auVar208._24_4_ * auVar208._24_4_ + auVar138._24_4_ * auVar138._24_4_;
  auVar140._28_4_ =
       auVar139._28_4_ * auVar139._28_4_ +
       auVar208._28_4_ * auVar208._28_4_ + auVar138._28_4_ * auVar138._28_4_;
  auVar165 = vsqrtps_avx(auVar140);
  auVar208 = vdivps_avx(auVar208,auVar165);
  auVar107 = vdivps_avx(auVar138,auVar165);
  auVar138 = vdivps_avx(auVar139,auVar165);
  auVar243._16_16_ = auVar134;
  auVar243._0_16_ = auVar151;
  auVar139 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_4 + (int)(uVar33 << 2)));
  auVar166._16_16_ = auVar150;
  auVar166._0_16_ = auVar168;
  auVar173._16_16_ = auVar162;
  auVar173._0_16_ = auVar180;
  auVar139 = vsubps_avx(auVar165,auVar139);
  fVar132 = auVar139._0_4_;
  fVar144 = auVar139._4_4_;
  fVar145 = auVar139._8_4_;
  fVar146 = auVar139._12_4_;
  fVar147 = auVar139._16_4_;
  fVar167 = auVar139._20_4_;
  fVar148 = auVar139._24_4_;
  fVar176 = auVar139._28_4_;
  fVar89 = auVar168._0_4_;
  fVar92 = auVar150._0_4_;
  fVar214 = auVar151._0_4_;
  fVar216 = auVar134._0_4_;
  auVar206._0_4_ = fVar214 * fVar149 + auVar169._0_4_ * fVar89;
  auVar206._4_4_ = auVar151._4_4_ * fVar177 + auVar169._4_4_ * auVar168._4_4_;
  auVar206._8_4_ = auVar151._8_4_ * fVar159 + auVar169._8_4_ * auVar168._8_4_;
  auVar206._12_4_ = auVar151._12_4_ * fVar178 + auVar169._12_4_ * auVar168._12_4_;
  auVar206._16_4_ = fVar216 * fVar160 + auVar169._16_4_ * fVar92;
  auVar206._20_4_ = auVar134._4_4_ * fVar179 + auVar169._20_4_ * auVar150._4_4_;
  auVar206._24_4_ = auVar134._8_4_ * fVar163 + auVar169._24_4_ * auVar150._8_4_;
  auVar206._28_4_ = auVar134._12_4_ * fVar181 + auVar169._28_4_ * auVar150._12_4_;
  auVar161 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar235 = auVar161._0_4_;
  auVar141._0_4_ = fVar235 * fVar132 * auVar208._0_4_;
  fVar182 = auVar161._4_4_;
  auVar141._4_4_ = fVar182 * fVar144 * auVar208._4_4_;
  fVar239 = auVar161._8_4_;
  auVar141._8_4_ = fVar239 * fVar145 * auVar208._8_4_;
  fVar183 = auVar161._12_4_;
  auVar141._12_4_ = fVar183 * fVar146 * auVar208._12_4_;
  auVar141._16_4_ = fVar235 * fVar147 * auVar208._16_4_;
  auVar141._20_4_ = fVar182 * fVar167 * auVar208._20_4_;
  auVar141._24_4_ = fVar239 * fVar148 * auVar208._24_4_;
  auVar141._28_4_ = fVar183 * fVar176 * auVar208._28_4_;
  fVar88 = auVar180._0_4_;
  auVar244._0_4_ = auVar206._0_4_ + fVar88;
  auVar244._4_4_ = auVar206._4_4_ + auVar180._4_4_;
  auVar244._8_4_ = auVar206._8_4_ + auVar180._8_4_;
  auVar244._12_4_ = auVar206._12_4_ + auVar180._12_4_;
  fVar102 = auVar162._0_4_;
  auVar244._16_4_ = auVar206._16_4_ + fVar102;
  auVar244._20_4_ = auVar206._20_4_ + auVar162._4_4_;
  auVar244._24_4_ = auVar206._24_4_ + auVar162._8_4_;
  auVar244._28_4_ = auVar206._28_4_ + auVar162._12_4_;
  auVar139 = vdivps_avx(auVar141,auVar244);
  auVar122._0_4_ = fVar235 * fVar132 * auVar107._0_4_;
  auVar122._4_4_ = fVar182 * fVar144 * auVar107._4_4_;
  auVar122._8_4_ = fVar239 * fVar145 * auVar107._8_4_;
  auVar122._12_4_ = fVar183 * fVar146 * auVar107._12_4_;
  auVar122._16_4_ = fVar235 * fVar147 * auVar107._16_4_;
  auVar122._20_4_ = fVar182 * fVar167 * auVar107._20_4_;
  auVar122._24_4_ = fVar239 * fVar148 * auVar107._24_4_;
  auVar122._28_4_ = fVar183 * fVar176 * auVar107._28_4_;
  auVar152 = vdivps_avx(auVar122,auVar244);
  auVar126._0_4_ = fVar235 * fVar132 * auVar138._0_4_;
  auVar126._4_4_ = fVar182 * fVar144 * auVar138._4_4_;
  auVar126._8_4_ = fVar239 * fVar145 * auVar138._8_4_;
  auVar126._12_4_ = fVar183 * fVar146 * auVar138._12_4_;
  auVar126._16_4_ = fVar235 * fVar147 * auVar138._16_4_;
  auVar126._20_4_ = fVar182 * fVar167 * auVar138._20_4_;
  auVar126._24_4_ = fVar239 * fVar148 * auVar138._24_4_;
  auVar126._28_4_ = fVar183 * fVar176 * auVar138._28_4_;
  auVar138 = vdivps_avx(auVar126,auVar244);
  local_440 = auVar111._0_4_;
  fStack_43c = auVar111._4_4_;
  fStack_438 = auVar111._8_4_;
  fStack_434 = auVar111._12_4_;
  fStack_430 = auVar111._16_4_;
  fStack_42c = auVar111._20_4_;
  fStack_428 = auVar111._24_4_;
  fStack_424 = auVar111._28_4_;
  auVar208 = vcmpps_avx(auVar206,ZEXT832(0) << 0x20,0);
  auVar107 = vcmpps_avx(ZEXT832(0) << 0x20,auVar173,0);
  auVar207._0_4_ = auVar107._0_4_ & auVar208._0_4_;
  auVar207._4_4_ = auVar107._4_4_ & auVar208._4_4_;
  auVar207._8_4_ = auVar107._8_4_ & auVar208._8_4_;
  auVar207._12_4_ = auVar107._12_4_ & auVar208._12_4_;
  auVar207._16_4_ = auVar107._16_4_ & auVar208._16_4_;
  auVar207._20_4_ = auVar107._20_4_ & auVar208._20_4_;
  auVar207._24_4_ = auVar107._24_4_ & auVar208._24_4_;
  auVar207._28_4_ = auVar107._28_4_ & auVar208._28_4_;
  auVar208 = vcmpps_avx(auVar165,
                        ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,2);
  auVar208 = auVar208 | auVar207;
  uVar29 = auVar208._0_4_;
  fVar132 = (float)(~uVar29 & auVar139._0_4_);
  uVar33 = auVar208._4_4_;
  fVar144 = (float)(~uVar33 & auVar139._4_4_);
  uVar211 = auVar208._8_4_;
  fVar145 = (float)(~uVar211 & auVar139._8_4_);
  uVar213 = auVar208._12_4_;
  fVar146 = (float)(~uVar213 & auVar139._12_4_);
  uVar215 = auVar208._16_4_;
  fVar147 = (float)(~uVar215 & auVar139._16_4_);
  uVar217 = auVar208._20_4_;
  fVar167 = (float)(~uVar217 & auVar139._20_4_);
  uVar219 = auVar208._24_4_;
  fVar148 = (float)(~uVar219 & auVar139._24_4_);
  uVar221 = auVar208._28_4_;
  fVar176 = (float)(~uVar221 & auVar139._28_4_);
  fVar218 = (float)(~uVar29 & auVar152._0_4_);
  fVar220 = (float)(~uVar33 & auVar152._4_4_);
  fVar241 = (float)(~uVar211 & auVar152._8_4_);
  fVar245 = (float)(~uVar213 & auVar152._12_4_);
  fVar246 = (float)(~uVar215 & auVar152._16_4_);
  fVar247 = (float)(~uVar217 & auVar152._20_4_);
  fVar248 = (float)(~uVar219 & auVar152._24_4_);
  fVar249 = (float)(~uVar221 & auVar152._28_4_);
  fVar235 = (float)(~uVar29 & auVar138._0_4_);
  fVar182 = (float)(~uVar33 & auVar138._4_4_);
  fVar239 = (float)(~uVar211 & auVar138._8_4_);
  fVar183 = (float)(~uVar213 & auVar138._12_4_);
  fVar202 = (float)(~uVar215 & auVar138._16_4_);
  fVar209 = (float)(~uVar217 & auVar138._20_4_);
  fVar210 = (float)(~uVar219 & auVar138._24_4_);
  fVar212 = (float)(~uVar221 & auVar138._28_4_);
  auVar208 = vcmpps_avx(ZEXT832(0) << 0x20,auVar173,1);
  auVar84._0_4_ = auVar208._0_4_ & uVar71;
  auVar84._4_4_ = auVar208._4_4_ & uVar17;
  auVar84._8_4_ = auVar208._8_4_ & uVar91;
  auVar84._12_4_ = auVar208._12_4_ & uVar94;
  auVar84._16_4_ = auVar208._16_4_ & uVar97;
  auVar84._20_4_ = auVar208._20_4_ & uVar100;
  auVar84._24_4_ = auVar208._24_4_ & uVar103;
  auVar84._28_4_ = auVar208._28_4_ & uVar106;
  uVar29 = vmovmskps_avx(auVar84);
  if (uVar29 != 0) {
    fVar250 = local_440 * fVar88;
    fVar251 = fStack_43c * auVar180._4_4_;
    fVar184 = fStack_438 * auVar180._8_4_;
    fVar192 = fStack_434 * auVar180._12_4_;
    fVar193 = fStack_430 * fVar102;
    fVar194 = fStack_42c * auVar162._4_4_;
    fVar195 = fStack_428 * auVar162._8_4_;
    fVar196 = fStack_424 * auVar162._12_4_;
    auVar123._0_4_ = fVar250 * fVar132;
    auVar123._4_4_ = fVar251 * fVar144;
    auVar123._8_4_ = fVar184 * fVar145;
    auVar123._12_4_ = fVar192 * fVar146;
    auVar123._16_4_ = fVar193 * fVar147;
    auVar123._20_4_ = fVar194 * fVar167;
    auVar123._24_4_ = fVar195 * fVar148;
    auVar123._28_4_ = fVar196 * fVar176;
    auVar208 = vsubps_avx(auVar108,auVar123);
    cVar15 = (char)uVar29;
    iVar72 = auVar75._0_4_;
    auVar161 = auVar208._0_16_;
    auVar231 = auVar208._16_16_;
    iVar40 = auVar75._4_4_;
    iVar41 = auVar75._8_4_;
    iVar42 = auVar75._12_4_;
    iVar124 = auVar74._0_4_;
    iVar43 = auVar74._4_4_;
    iVar44 = auVar74._8_4_;
    iVar45 = auVar74._12_4_;
    if ((uVar29 & 1) == 0) {
      if ((uVar29 & 2) == 0) goto LAB_1400175bc;
LAB_140017af2:
      uVar39 = vextractps_avx(auVar161,1);
      *(undefined4 *)(param_1 + iVar40) = uVar39;
      if ((uVar29 & 4) != 0) goto LAB_140017b0b;
LAB_1400175c5:
      if ((uVar29 & 8) == 0) goto LAB_1400175ce;
LAB_140017b24:
      uVar39 = vextractps_avx(auVar161,3);
      *(undefined4 *)(param_1 + iVar42) = uVar39;
      if ((uVar29 & 0x10) != 0) goto LAB_140017b49;
LAB_1400175e3:
      if ((uVar29 & 0x20) == 0) goto LAB_1400175ec;
LAB_140017b60:
      uVar39 = vextractps_avx(auVar231,1);
      *(undefined4 *)(param_1 + iVar43) = uVar39;
      if ((uVar29 & 0x40) != 0) goto LAB_140017b79;
LAB_1400175f5:
      auVar257._0_4_ = fVar250 * fVar218;
      auVar257._4_4_ = fVar251 * fVar220;
      auVar257._8_4_ = fVar184 * fVar241;
      auVar257._12_4_ = fVar192 * fVar245;
      auVar257._16_4_ = fVar193 * fVar246;
      auVar257._20_4_ = fVar194 * fVar247;
      auVar257._24_4_ = fVar195 * fVar248;
      auVar257._28_4_ = fVar196 * fVar249;
      if (-1 < cVar15) goto LAB_140017606;
LAB_140017b9a:
      uVar39 = vextractps_avx(auVar231,3);
      *(undefined4 *)(param_1 + iVar45) = uVar39;
      auVar208 = vsubps_avx(auVar109,auVar257);
      if ((uVar29 & 1) != 0) goto LAB_140017bb8;
LAB_140017614:
      if ((uVar29 & 2) == 0) goto LAB_140017621;
LAB_140017bd4:
      uVar39 = vextractps_avx(auVar208._0_16_,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar40) = uVar39;
      if ((uVar29 & 4) != 0) goto LAB_140017bee;
LAB_14001762a:
      if ((uVar29 & 8) == 0) goto LAB_140017633;
LAB_140017c08:
      uVar39 = vextractps_avx(auVar208._0_16_,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar42) = uVar39;
      auVar161 = auVar208._16_16_;
      if ((uVar29 & 0x10) != 0) goto LAB_140017c28;
LAB_140017642:
      if ((uVar29 & 0x20) == 0) goto LAB_14001764b;
LAB_140017c40:
      uVar39 = vextractps_avx(auVar161,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar43) = uVar39;
      if ((uVar29 & 0x40) != 0) goto LAB_140017c5a;
LAB_140017654:
      auVar201._0_4_ = fVar250 * fVar235;
      auVar201._4_4_ = fVar251 * fVar182;
      auVar201._8_4_ = fVar184 * fVar239;
      auVar201._12_4_ = fVar192 * fVar183;
      auVar201._16_4_ = fVar193 * fVar202;
      auVar201._20_4_ = fVar194 * fVar209;
      auVar201._24_4_ = fVar195 * fVar210;
      auVar201._28_4_ = fVar196 * fVar212;
      if (-1 < cVar15) goto LAB_140017661;
LAB_140017c78:
      uVar39 = vextractps_avx(auVar161,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar45) = uVar39;
      auVar208 = vsubps_avx(auVar110,auVar201);
      if ((uVar29 & 1) != 0) goto LAB_140017c97;
LAB_14001766f:
      if ((uVar29 & 2) == 0) goto LAB_140017678;
LAB_140017caf:
      uVar39 = vextractps_avx(auVar208._0_16_,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar40) = uVar39;
      if ((uVar29 & 4) != 0) goto LAB_140017cc9;
LAB_140017681:
      if ((uVar29 & 8) == 0) goto LAB_14001768a;
LAB_140017ce3:
      uVar39 = vextractps_avx(auVar208._0_16_,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar42) = uVar39;
      auVar161 = auVar208._16_16_;
    }
    else {
      *(int *)(param_1 + iVar72) = auVar208._0_4_;
      if ((uVar29 & 2) != 0) goto LAB_140017af2;
LAB_1400175bc:
      if ((uVar29 & 4) == 0) goto LAB_1400175c5;
LAB_140017b0b:
      uVar39 = vextractps_avx(auVar161,2);
      *(undefined4 *)(param_1 + iVar41) = uVar39;
      if ((uVar29 & 8) != 0) goto LAB_140017b24;
LAB_1400175ce:
      if ((uVar29 & 0x10) == 0) goto LAB_1400175e3;
LAB_140017b49:
      *(int *)(param_1 + iVar124) = auVar208._16_4_;
      if ((uVar29 & 0x20) != 0) goto LAB_140017b60;
LAB_1400175ec:
      if ((uVar29 & 0x40) == 0) goto LAB_1400175f5;
LAB_140017b79:
      uVar39 = vextractps_avx(auVar231,2);
      *(undefined4 *)(param_1 + iVar44) = uVar39;
      auVar257._0_4_ = fVar250 * fVar218;
      auVar257._4_4_ = fVar251 * fVar220;
      auVar257._8_4_ = fVar184 * fVar241;
      auVar257._12_4_ = fVar192 * fVar245;
      auVar257._16_4_ = fVar193 * fVar246;
      auVar257._20_4_ = fVar194 * fVar247;
      auVar257._24_4_ = fVar195 * fVar248;
      auVar257._28_4_ = fVar196 * fVar249;
      if (cVar15 < '\0') goto LAB_140017b9a;
LAB_140017606:
      auVar208 = vsubps_avx(auVar109,auVar257);
      if ((uVar29 & 1) == 0) goto LAB_140017614;
LAB_140017bb8:
      *(int *)(param_1 + 4 + (longlong)iVar72) = auVar208._0_4_;
      if ((uVar29 & 2) != 0) goto LAB_140017bd4;
LAB_140017621:
      if ((uVar29 & 4) == 0) goto LAB_14001762a;
LAB_140017bee:
      uVar39 = vextractps_avx(auVar208._0_16_,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar41) = uVar39;
      if ((uVar29 & 8) != 0) goto LAB_140017c08;
LAB_140017633:
      auVar161 = auVar208._16_16_;
      if ((uVar29 & 0x10) == 0) goto LAB_140017642;
LAB_140017c28:
      *(int *)(param_1 + 4 + (longlong)iVar124) = auVar161._0_4_;
      if ((uVar29 & 0x20) != 0) goto LAB_140017c40;
LAB_14001764b:
      if ((uVar29 & 0x40) == 0) goto LAB_140017654;
LAB_140017c5a:
      uVar39 = vextractps_avx(auVar161,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar44) = uVar39;
      auVar201._0_4_ = fVar250 * fVar235;
      auVar201._4_4_ = fVar251 * fVar182;
      auVar201._8_4_ = fVar184 * fVar239;
      auVar201._12_4_ = fVar192 * fVar183;
      auVar201._16_4_ = fVar193 * fVar202;
      auVar201._20_4_ = fVar194 * fVar209;
      auVar201._24_4_ = fVar195 * fVar210;
      auVar201._28_4_ = fVar196 * fVar212;
      if (cVar15 < '\0') goto LAB_140017c78;
LAB_140017661:
      auVar208 = vsubps_avx(auVar110,auVar201);
      if ((uVar29 & 1) == 0) goto LAB_14001766f;
LAB_140017c97:
      *(int *)(param_1 + 8 + (longlong)iVar72) = auVar208._0_4_;
      if ((uVar29 & 2) != 0) goto LAB_140017caf;
LAB_140017678:
      if ((uVar29 & 4) == 0) goto LAB_140017681;
LAB_140017cc9:
      uVar39 = vextractps_avx(auVar208._0_16_,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar41) = uVar39;
      if ((uVar29 & 8) != 0) goto LAB_140017ce3;
LAB_14001768a:
      auVar161 = auVar208._16_16_;
    }
    if ((uVar29 & 0x10) != 0) {
      *(int *)(param_1 + 8 + (longlong)iVar124) = auVar161._0_4_;
    }
    if ((uVar29 & 0x20) != 0) {
      uVar39 = vextractps_avx(auVar161,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar43) = uVar39;
    }
    if ((uVar29 & 0x40) != 0) {
      uVar39 = vextractps_avx(auVar161,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar44) = uVar39;
    }
    if (cVar15 < '\0') {
      uVar39 = vextractps_avx(auVar161,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar45) = uVar39;
    }
    if ((uVar29 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iVar72) = fVar88;
    }
    if ((uVar29 & 2) != 0) {
      uVar39 = vextractps_avx(auVar180,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar40) = uVar39;
    }
    if ((uVar29 & 4) != 0) {
      uVar39 = vextractps_avx(auVar180,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar41) = uVar39;
    }
    if ((uVar29 & 8) != 0) {
      uVar39 = vextractps_avx(auVar180,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar42) = uVar39;
    }
    if ((uVar29 & 0x10) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iVar124) = fVar102;
    }
    if ((uVar29 & 0x20) != 0) {
      uVar39 = vextractps_avx(auVar162,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar43) = uVar39;
    }
    if ((uVar29 & 0x40) != 0) {
      uVar39 = vextractps_avx(auVar162,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar44) = uVar39;
    }
    if (cVar15 < '\0') {
      uVar39 = vextractps_avx(auVar162,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar45) = uVar39;
    }
  }
  auVar162 = vpcmpgtd_avx(auVar164,auVar137);
  auVar208 = vcmpps_avx(ZEXT832(0) << 0x20,auVar243,0xc);
  auVar85._0_4_ = auVar208._0_4_ & auVar162._0_4_;
  auVar85._4_4_ = auVar208._4_4_ & auVar162._4_4_;
  auVar85._8_4_ = auVar208._8_4_ & auVar162._8_4_;
  auVar85._12_4_ = auVar208._12_4_ & auVar162._12_4_;
  auVar85._16_4_ = auVar208._16_4_ & uVar97;
  auVar85._20_4_ = auVar208._20_4_ & uVar100;
  auVar85._24_4_ = auVar208._24_4_ & uVar103;
  auVar85._28_4_ = auVar208._28_4_ & uVar106;
  uVar29 = vmovmskps_avx(auVar85);
  if (uVar29 == 0) goto LAB_1400178ca;
  fVar149 = local_440 * fVar214 * fVar149;
  fVar177 = fStack_43c * auVar151._4_4_ * fVar177;
  fVar159 = fStack_438 * auVar151._8_4_ * fVar159;
  fVar178 = fStack_434 * auVar151._12_4_ * fVar178;
  fVar160 = fStack_430 * fVar216 * fVar160;
  fVar179 = fStack_42c * auVar134._4_4_ * fVar179;
  fVar163 = fStack_428 * auVar134._8_4_ * fVar163;
  fVar181 = fStack_424 * auVar134._12_4_ * fVar181;
  local_420 = auVar79._0_4_;
  fStack_41c = auVar79._4_4_;
  fStack_418 = auVar79._8_4_;
  fStack_414 = auVar79._12_4_;
  fStack_410 = auVar79._16_4_;
  fStack_40c = auVar79._20_4_;
  fStack_408 = auVar79._24_4_;
  fStack_404 = auVar79._28_4_;
  auVar162._0_4_ = fVar149 * fVar132 + local_420;
  auVar162._4_4_ = fVar177 * fVar144 + fStack_41c;
  auVar162._8_4_ = fVar159 * fVar145 + fStack_418;
  auVar162._12_4_ = fVar178 * fVar146 + fStack_414;
  auVar174._16_4_ = fVar160 * fVar147 + fStack_410;
  auVar174._0_16_ = auVar162;
  auVar174._20_4_ = fVar179 * fVar167 + fStack_40c;
  auVar174._24_4_ = fVar163 * fVar148 + fStack_408;
  auVar174._28_4_ = fVar181 * fVar176 + fStack_404;
  cVar15 = (char)uVar29;
  iVar72 = auVar135._0_4_;
  auVar180 = auVar174._16_16_;
  iVar40 = auVar135._4_4_;
  iVar41 = auVar135._8_4_;
  iVar42 = auVar135._12_4_;
  local_5e0 = auVar77._0_4_;
  fStack_5dc = auVar77._4_4_;
  fStack_5d8 = auVar77._8_4_;
  fStack_5d4 = auVar77._12_4_;
  fStack_5d0 = auVar77._16_4_;
  fStack_5cc = auVar77._20_4_;
  fStack_5c8 = auVar77._24_4_;
  fStack_5c4 = auVar77._28_4_;
  local_5a0 = auVar78._0_4_;
  fStack_59c = auVar78._4_4_;
  fStack_598 = auVar78._8_4_;
  fStack_594 = auVar78._12_4_;
  fStack_590 = auVar78._16_4_;
  fStack_58c = auVar78._20_4_;
  fStack_588 = auVar78._24_4_;
  fStack_584 = auVar78._28_4_;
  iVar124 = auVar185._0_4_;
  iVar43 = auVar185._4_4_;
  iVar44 = auVar185._8_4_;
  iVar45 = auVar185._12_4_;
  if ((uVar29 & 1) == 0) {
    if ((uVar29 & 2) == 0) goto LAB_140017788;
LAB_140017e4b:
    uVar39 = vextractps_avx(auVar162,1);
    *(undefined4 *)(param_1 + iVar40) = uVar39;
    if ((uVar29 & 4) != 0) goto LAB_140017e64;
LAB_140017791:
    if ((uVar29 & 8) == 0) goto LAB_14001779a;
LAB_140017e7d:
    uVar39 = vextractps_avx(auVar162,3);
    *(undefined4 *)(param_1 + iVar42) = uVar39;
    if ((uVar29 & 0x10) != 0) goto LAB_140017ea2;
LAB_1400177af:
    if ((uVar29 & 0x20) == 0) goto LAB_1400177b8;
LAB_140017eb9:
    uVar39 = vextractps_avx(auVar180,1);
    *(undefined4 *)(param_1 + iVar43) = uVar39;
    if ((uVar29 & 0x40) != 0) goto LAB_140017ed2;
LAB_1400177c1:
    if (-1 < cVar15) goto LAB_1400177cd;
LAB_140017eee:
    uVar39 = vextractps_avx(auVar180,3);
    *(undefined4 *)(param_1 + iVar45) = uVar39;
    auVar175._0_4_ = fVar218 * fVar149 + local_5e0;
    auVar175._4_4_ = fVar220 * fVar177 + fStack_5dc;
    auVar175._8_4_ = fVar241 * fVar159 + fStack_5d8;
    auVar175._12_4_ = fVar245 * fVar178 + fStack_5d4;
    auVar175._16_4_ = fVar246 * fVar160 + fStack_5d0;
    auVar175._20_4_ = fVar247 * fVar179 + fStack_5cc;
    auVar175._24_4_ = fVar248 * fVar163 + fStack_5c8;
    auVar175._28_4_ = fVar249 * fVar181 + fStack_5c4;
    if ((uVar29 & 1) != 0) goto LAB_140017f10;
LAB_1400177df:
    if ((uVar29 & 2) == 0) goto LAB_1400177e8;
LAB_140017f28:
    uVar39 = vextractps_avx(auVar175._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar40) = uVar39;
    if ((uVar29 & 4) != 0) goto LAB_140017f42;
LAB_1400177f1:
    if ((uVar29 & 8) == 0) goto LAB_1400177fa;
LAB_140017f5c:
    uVar39 = vextractps_avx(auVar175._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar42) = uVar39;
    auVar162 = auVar175._16_16_;
    if ((uVar29 & 0x10) != 0) goto LAB_140017f7c;
LAB_140017809:
    if ((uVar29 & 0x20) == 0) goto LAB_140017812;
LAB_140017f94:
    uVar39 = vextractps_avx(auVar162,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar43) = uVar39;
    if ((uVar29 & 0x40) != 0) goto LAB_140017fae;
LAB_14001781b:
    if (-1 < cVar15) goto LAB_140017827;
LAB_140017fcb:
    uVar39 = vextractps_avx(auVar162,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar45) = uVar39;
    auVar158._0_4_ = fVar235 * fVar149 + local_5a0;
    auVar158._4_4_ = fVar182 * fVar177 + fStack_59c;
    auVar158._8_4_ = fVar239 * fVar159 + fStack_598;
    auVar158._12_4_ = fVar183 * fVar178 + fStack_594;
    auVar158._16_4_ = fVar202 * fVar160 + fStack_590;
    auVar158._20_4_ = fVar209 * fVar179 + fStack_58c;
    auVar158._24_4_ = fVar210 * fVar163 + fStack_588;
    auVar158._28_4_ = fVar212 * fVar181 + fStack_584;
    if ((uVar29 & 1) != 0) goto LAB_140017fee;
LAB_140017839:
    if ((uVar29 & 2) == 0) goto LAB_140017842;
LAB_140018006:
    uVar39 = vextractps_avx(auVar158._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar40) = uVar39;
    if ((uVar29 & 4) != 0) goto LAB_140018020;
LAB_14001784b:
    if ((uVar29 & 8) == 0) goto LAB_140017854;
LAB_14001803a:
    uVar39 = vextractps_avx(auVar158._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar42) = uVar39;
    auVar162 = auVar158._16_16_;
  }
  else {
    *(float *)(param_1 + iVar72) = auVar162._0_4_;
    if ((uVar29 & 2) != 0) goto LAB_140017e4b;
LAB_140017788:
    if ((uVar29 & 4) == 0) goto LAB_140017791;
LAB_140017e64:
    uVar39 = vextractps_avx(auVar162,2);
    *(undefined4 *)(param_1 + iVar41) = uVar39;
    if ((uVar29 & 8) != 0) goto LAB_140017e7d;
LAB_14001779a:
    if ((uVar29 & 0x10) == 0) goto LAB_1400177af;
LAB_140017ea2:
    *(float *)(param_1 + iVar124) = auVar174._16_4_;
    if ((uVar29 & 0x20) != 0) goto LAB_140017eb9;
LAB_1400177b8:
    if ((uVar29 & 0x40) == 0) goto LAB_1400177c1;
LAB_140017ed2:
    uVar39 = vextractps_avx(auVar180,2);
    *(undefined4 *)(param_1 + iVar44) = uVar39;
    if (cVar15 < '\0') goto LAB_140017eee;
LAB_1400177cd:
    auVar175._0_4_ = fVar218 * fVar149 + local_5e0;
    auVar175._4_4_ = fVar220 * fVar177 + fStack_5dc;
    auVar175._8_4_ = fVar241 * fVar159 + fStack_5d8;
    auVar175._12_4_ = fVar245 * fVar178 + fStack_5d4;
    auVar175._16_4_ = fVar246 * fVar160 + fStack_5d0;
    auVar175._20_4_ = fVar247 * fVar179 + fStack_5cc;
    auVar175._24_4_ = fVar248 * fVar163 + fStack_5c8;
    auVar175._28_4_ = fVar249 * fVar181 + fStack_5c4;
    if ((uVar29 & 1) == 0) goto LAB_1400177df;
LAB_140017f10:
    *(int *)(param_1 + 4 + (longlong)iVar72) = auVar175._0_4_;
    if ((uVar29 & 2) != 0) goto LAB_140017f28;
LAB_1400177e8:
    if ((uVar29 & 4) == 0) goto LAB_1400177f1;
LAB_140017f42:
    uVar39 = vextractps_avx(auVar175._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar41) = uVar39;
    if ((uVar29 & 8) != 0) goto LAB_140017f5c;
LAB_1400177fa:
    auVar162 = auVar175._16_16_;
    if ((uVar29 & 0x10) == 0) goto LAB_140017809;
LAB_140017f7c:
    *(int *)(param_1 + 4 + (longlong)iVar124) = auVar162._0_4_;
    if ((uVar29 & 0x20) != 0) goto LAB_140017f94;
LAB_140017812:
    if ((uVar29 & 0x40) == 0) goto LAB_14001781b;
LAB_140017fae:
    uVar39 = vextractps_avx(auVar162,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar44) = uVar39;
    if (cVar15 < '\0') goto LAB_140017fcb;
LAB_140017827:
    auVar158._0_4_ = fVar235 * fVar149 + local_5a0;
    auVar158._4_4_ = fVar182 * fVar177 + fStack_59c;
    auVar158._8_4_ = fVar239 * fVar159 + fStack_598;
    auVar158._12_4_ = fVar183 * fVar178 + fStack_594;
    auVar158._16_4_ = fVar202 * fVar160 + fStack_590;
    auVar158._20_4_ = fVar209 * fVar179 + fStack_58c;
    auVar158._24_4_ = fVar210 * fVar163 + fStack_588;
    auVar158._28_4_ = fVar212 * fVar181 + fStack_584;
    if ((uVar29 & 1) == 0) goto LAB_140017839;
LAB_140017fee:
    *(int *)(param_1 + 8 + (longlong)iVar72) = auVar158._0_4_;
    if ((uVar29 & 2) != 0) goto LAB_140018006;
LAB_140017842:
    if ((uVar29 & 4) == 0) goto LAB_14001784b;
LAB_140018020:
    uVar39 = vextractps_avx(auVar158._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar41) = uVar39;
    if ((uVar29 & 8) != 0) goto LAB_14001803a;
LAB_140017854:
    auVar162 = auVar158._16_16_;
  }
  if ((uVar29 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar124) = auVar162._0_4_;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar162,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar43) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar162,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar44) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar162,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar45) = uVar39;
  }
  if ((uVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar72) = fVar214;
  }
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar151,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar40) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar151,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar41) = uVar39;
  }
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar151,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar42) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar124) = fVar216;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar134,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar43) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar134,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar44) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar134,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar45) = uVar39;
  }
LAB_1400178ca:
  auVar134 = vpcmpgtd_avx(auVar164,auVar137);
  auVar79 = vcmpps_avx(auVar166,ZEXT1232(ZEXT812(0)),0xc);
  auVar86._0_4_ = auVar79._0_4_ & auVar134._0_4_;
  auVar86._4_4_ = auVar79._4_4_ & auVar134._4_4_;
  auVar86._8_4_ = auVar79._8_4_ & auVar134._8_4_;
  auVar86._12_4_ = auVar79._12_4_ & auVar134._12_4_;
  auVar86._16_4_ = auVar79._16_4_ & uVar97;
  auVar86._20_4_ = auVar79._20_4_ & uVar100;
  auVar86._24_4_ = auVar79._24_4_ & uVar103;
  auVar86._28_4_ = auVar79._28_4_ & uVar106;
  uVar29 = vmovmskps_avx(auVar86);
  if (uVar29 == 0) {
    return;
  }
  local_380 = auVar133._0_4_;
  iStack_37c = auVar133._4_4_;
  iStack_378 = auVar133._8_4_;
  iStack_374 = auVar133._12_4_;
  local_560 = auVar136._0_4_;
  iStack_55c = auVar136._4_4_;
  iStack_558 = auVar136._8_4_;
  iStack_554 = auVar136._12_4_;
  fVar88 = local_440 * fVar89 * auVar169._0_4_;
  fVar102 = fStack_43c * auVar168._4_4_ * auVar169._4_4_;
  fVar149 = fStack_438 * auVar168._8_4_ * auVar169._8_4_;
  fVar177 = fStack_434 * auVar168._12_4_ * auVar169._12_4_;
  fVar159 = fStack_430 * fVar92 * auVar169._16_4_;
  fVar178 = fStack_42c * auVar150._4_4_ * auVar169._20_4_;
  fVar160 = fStack_428 * auVar150._8_4_ * auVar169._24_4_;
  fVar179 = fStack_424 * auVar150._12_4_ * auVar169._28_4_;
  auVar137._0_4_ = fVar88 * fVar132 + auVar76._0_4_;
  auVar137._4_4_ = fVar102 * fVar144 + auVar76._4_4_;
  auVar137._8_4_ = fVar149 * fVar145 + auVar76._8_4_;
  auVar137._12_4_ = fVar177 * fVar146 + auVar76._12_4_;
  auVar142._16_4_ = fVar159 * fVar147 + auVar76._16_4_;
  auVar142._0_16_ = auVar137;
  auVar142._20_4_ = fVar178 * fVar167 + auVar76._20_4_;
  auVar142._24_4_ = fVar160 * fVar148 + auVar76._24_4_;
  auVar142._28_4_ = fVar179 * fVar176 + auVar76._28_4_;
  cVar15 = (char)uVar29;
  auVar134 = auVar142._16_16_;
  if ((uVar29 & 1) != 0) {
    *(float *)(param_1 + local_380) = auVar137._0_4_;
  }
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar137,1);
    *(undefined4 *)(param_1 + iStack_37c) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar137,2);
    *(undefined4 *)(param_1 + iStack_378) = uVar39;
  }
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar137,3);
    *(undefined4 *)(param_1 + iStack_374) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(float *)(param_1 + local_560) = auVar142._16_4_;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar134,1);
    *(undefined4 *)(param_1 + iStack_55c) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar134,2);
    *(undefined4 *)(param_1 + iStack_558) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar134,3);
    *(undefined4 *)(param_1 + iStack_554) = uVar39;
    auVar143._0_4_ = fVar218 * fVar88 + fVar70;
    auVar143._4_4_ = fVar220 * fVar102 + fVar90;
    auVar143._8_4_ = fVar241 * fVar149 + fVar93;
    auVar143._12_4_ = fVar245 * fVar177 + fVar96;
    auVar143._16_4_ = fVar246 * fVar159 + fVar99;
    auVar143._20_4_ = fVar247 * fVar178 + fVar105;
    auVar143._24_4_ = fVar248 * fVar160 + fVar69;
    auVar143._28_4_ = fVar249 * fVar179 + fVar87;
  }
  else {
    auVar143._0_4_ = fVar218 * fVar88 + fVar70;
    auVar143._4_4_ = fVar220 * fVar102 + fVar90;
    auVar143._8_4_ = fVar241 * fVar149 + fVar93;
    auVar143._12_4_ = fVar245 * fVar177 + fVar96;
    auVar143._16_4_ = fVar246 * fVar159 + fVar99;
    auVar143._20_4_ = fVar247 * fVar178 + fVar105;
    auVar143._24_4_ = fVar248 * fVar160 + fVar69;
    auVar143._28_4_ = fVar249 * fVar179 + fVar87;
  }
  if ((uVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_380) = auVar143._0_4_;
  }
  auVar134 = auVar143._0_16_;
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar134,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_37c) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar134,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_378) = uVar39;
  }
  auVar164 = auVar143._16_16_;
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar134,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_374) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_560) = auVar143._16_4_;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar164,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_55c) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar164,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_558) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar164,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_554) = uVar39;
    auVar127._0_4_ = fVar235 * fVar88 + fVar95;
    auVar127._4_4_ = fVar182 * fVar102 + fVar98;
    auVar127._8_4_ = fVar239 * fVar149 + fVar101;
    auVar127._12_4_ = fVar183 * fVar177 + fVar104;
    auVar127._16_4_ = fVar202 * fVar159 + fVar128;
    auVar127._20_4_ = fVar209 * fVar178 + fVar129;
    auVar127._24_4_ = fVar210 * fVar160 + fVar130;
    auVar127._28_4_ = fVar212 * fVar179 + fVar131;
  }
  else {
    auVar127._0_4_ = fVar235 * fVar88 + fVar95;
    auVar127._4_4_ = fVar182 * fVar102 + fVar98;
    auVar127._8_4_ = fVar239 * fVar149 + fVar101;
    auVar127._12_4_ = fVar183 * fVar177 + fVar104;
    auVar127._16_4_ = fVar202 * fVar159 + fVar128;
    auVar127._20_4_ = fVar209 * fVar178 + fVar129;
    auVar127._24_4_ = fVar210 * fVar160 + fVar130;
    auVar127._28_4_ = fVar212 * fVar179 + fVar131;
  }
  if ((uVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_380) = auVar127._0_4_;
  }
  auVar134 = auVar127._0_16_;
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar134,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_37c) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar134,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_378) = uVar39;
  }
  auVar164 = auVar127._16_16_;
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar134,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_374) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_560) = auVar127._16_4_;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar164,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_55c) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar164,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_558) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar164,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_554) = uVar39;
  }
  if ((uVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_380) = fVar89;
  }
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar168,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_37c) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar168,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_378) = uVar39;
  }
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar168,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_374) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_560) = fVar92;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar150,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_55c) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar150,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_558) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar150,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_554) = uVar39;
  }
  return;
}

// ApplyAxialSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx @ 1400184e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  ulonglong uVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  undefined1 (*pauVar21) [32];
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  int iVar42;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  uint uVar62;
  longlong lVar63;
  longlong lVar64;
  ulonglong uVar65;
  ulonglong uVar67;
  longlong lVar68;
  ulonglong uVar69;
  longlong lVar70;
  longlong lVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  float fVar76;
  undefined1 auVar77 [16];
  uint uVar108;
  uint uVar110;
  uint uVar114;
  uint uVar117;
  uint uVar119;
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  uint uVar112;
  uint uVar121;
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  float fVar109;
  float fVar111;
  float fVar113;
  float fVar115;
  float fVar118;
  float fVar120;
  float fVar122;
  undefined1 auVar93 [32];
  undefined1 auVar116 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar82 [16];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar83 [16];
  undefined1 auVar101 [32];
  undefined1 auVar84 [16];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  float fVar123;
  float fVar124;
  undefined1 auVar125 [16];
  float fVar138;
  float fVar140;
  float fVar144;
  float fVar146;
  float fVar148;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  float fVar139;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar145;
  float fVar147;
  float fVar149;
  float fVar150;
  float fVar151;
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
  undefined1 auVar152 [16];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar153 [16];
  undefined1 auVar158 [32];
  undefined1 auVar154 [16];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  uint uVar163;
  uint uVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  uint uVar176;
  int iVar177;
  undefined1 auVar178 [16];
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
  float fVar194;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  float fVar196;
  float fVar197;
  float fVar198;
  undefined1 auVar192 [32];
  float fVar195;
  float fVar199;
  undefined1 auVar193 [32];
  float fVar200;
  float fVar210;
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  float fVar208;
  float fVar209;
  float fVar211;
  float fVar212;
  float fVar213;
  undefined1 auVar203 [32];
  float fVar214;
  float fVar215;
  float fVar216;
  undefined1 auVar204 [32];
  undefined1 auVar205 [32];
  undefined1 auVar207 [32];
  float fVar217;
  float fVar220;
  float fVar221;
  float fVar222;
  float fVar223;
  float fVar224;
  float fVar225;
  undefined1 auVar218 [32];
  float fVar226;
  undefined1 auVar219 [32];
  undefined1 auVar227 [16];
  undefined1 auVar228 [32];
  undefined1 auVar229 [32];
  undefined1 auVar230 [32];
  float fVar236;
  float fVar237;
  float fVar238;
  float fVar239;
  float fVar240;
  undefined1 auVar231 [32];
  undefined1 auVar232 [32];
  undefined1 auVar233 [32];
  float fVar241;
  undefined1 auVar234 [32];
  undefined1 auVar235 [32];
  undefined1 auVar242 [32];
  undefined1 auVar243 [32];
  undefined1 auVar244 [32];
  undefined1 auVar245 [32];
  undefined1 auVar246 [32];
  float fVar247;
  float fVar248;
  float fVar252;
  float fVar253;
  float fVar254;
  float fVar255;
  float fVar256;
  float fVar257;
  float fVar258;
  undefined1 auVar249 [32];
  undefined1 auVar250 [32];
  float fVar259;
  undefined1 auVar251 [32];
  undefined1 auVar260 [32];
  undefined1 auVar261 [32];
  undefined1 auVar262 [32];
  undefined1 in_ZMM14 [64];
  uint uVar263;
  int iVar264;
  undefined1 auVar265 [16];
  uint uVar268;
  uint uVar269;
  uint uVar270;
  uint uVar271;
  uint uVar273;
  uint uVar274;
  undefined1 auVar266 [32];
  undefined1 auVar272 [16];
  undefined1 auVar267 [32];
  uint uVar275;
  float local_5e0;
  float fStack_5dc;
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float local_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  int local_4f0;
  int iStack_4ec;
  int iStack_4e8;
  int iStack_4e4;
  float local_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  undefined1 local_3c0 [32];
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
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
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  ulonglong uVar66;
  undefined1 auVar206 [32];
  
  auVar84 = in_ZMM14._0_16_;
  uVar62 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar62 = param_7;
  }
  if ((int)(uVar62 & 0xfffffff8) < 1) {
    uVar74 = 0;
  }
  else {
    pauVar21 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar163 = 0;
    uVar74 = 0;
    do {
      auVar155 = pauVar21[-2];
      auVar85._16_16_ = *(undefined1 (*) [16])pauVar21[-2];
      auVar85._0_16_ = *(undefined1 (*) [16])*(undefined1 (*) [32])(pauVar21[-2] + 0x10);
      auVar85 = vblendps_avx(auVar155,auVar85,0x24);
      auVar85 = vpermilps_avx(auVar85,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar2 = *(undefined4 *)(pauVar21[-1] + 4);
      auVar126._4_4_ = uVar2;
      auVar126._0_4_ = uVar2;
      auVar126._8_4_ = uVar2;
      auVar126._12_4_ = uVar2;
      uVar2 = *(undefined4 *)(pauVar21[-1] + 8);
      auVar126._20_4_ = uVar2;
      auVar126._16_4_ = uVar2;
      auVar126._24_4_ = uVar2;
      auVar126._28_4_ = uVar2;
      auVar85 = vblendps_avx(auVar85,auVar126,0x88);
      auVar86._16_16_ = *(undefined1 (*) [16])*pauVar21;
      auVar86._0_16_ = *(undefined1 (*) [16])(*pauVar21 + 0x10);
      auVar171 = vblendps_avx(auVar86,*pauVar21,0x44);
      auVar171 = vpermilps_avx(auVar171,
                               ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                              );
      auVar84 = vshufps_avx(*(undefined1 (*) [16])(pauVar21[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar21[-1] + 0x10),0xec);
      uVar2 = *(undefined4 *)(pauVar21[-1] + 0x14);
      auVar164._20_4_ = uVar2;
      auVar164._16_4_ = uVar2;
      auVar164._24_4_ = uVar2;
      auVar164._28_4_ = uVar2;
      auVar164._0_16_ = auVar84;
      auVar171 = vblendps_avx(auVar171,auVar164,0x13);
      auVar155 = vblendps_avx(pauVar21[-1],auVar155,0x24);
      auVar155 = vshufps_avx(*(undefined1 (*) [32])(pauVar21[-2] + 0x10),auVar155,0x21);
      auVar126 = vshufps_avx(auVar155,pauVar21[-1],0xc2);
      auVar155 = vshufps_avx(auVar86,*pauVar21,0xc4);
      uVar22 = (ulonglong)uVar163;
      auVar84 = *(undefined1 (*) [16])(param_3 + uVar22);
      auVar116 = *(undefined1 (*) [16])(param_3 + 0x10 + uVar22);
      auVar266._16_16_ = auVar116;
      auVar266._0_16_ = auVar84;
      auVar155 = vblendps_avx(auVar126,auVar155,0xe0);
      puVar1 = (undefined8 *)(param_4 + 0x10 + uVar22);
      local_3c0._16_8_ = *puVar1;
      local_3c0._0_16_ = *(undefined1 (*) [16])(param_4 + uVar22);
      local_3c0._24_8_ = puVar1[1];
      auVar83 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_5 + 4 + uVar74)));
      auVar77 = vpslld_avx(auVar171._16_16_,4);
      auVar190 = vpslld_avx(auVar85._16_16_,4);
      lVar34 = (longlong)auVar190._0_4_;
      lVar63 = (longlong)auVar190._4_4_;
      lVar55 = (longlong)auVar190._8_4_;
      lVar30 = (longlong)auVar190._12_4_;
      lVar50 = (longlong)auVar77._0_4_;
      lVar47 = (longlong)auVar77._4_4_;
      lVar28 = (longlong)auVar77._8_4_;
      lVar23 = (longlong)auVar77._12_4_;
      auVar77 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar50)),
                              ZEXT416(*(uint *)(param_1 + lVar47)),0x10);
      auVar77 = vinsertps_avx(auVar77,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      auVar77 = vinsertps_avx(auVar77,ZEXT416(*(uint *)(param_1 + lVar23)),0x30);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + lVar63)),0x10);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_1 + lVar55)),0x20);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_1 + lVar30)),0x30);
      auVar265 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar47)),0x10);
      auVar265 = vinsertps_avx(auVar265,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      auVar265 = vinsertps_avx(auVar265,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x30);
      auVar272 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar63)),0x10);
      auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(param_1 + 4 + lVar55)),0x20);
      auVar249._16_16_ = auVar77;
      auVar249._0_16_ = auVar190;
      auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x30);
      auVar260._16_16_ = auVar265;
      auVar260._0_16_ = auVar272;
      auVar191 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar47)),0x10);
      auVar191 = vinsertps_avx(auVar191,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      auVar191 = vinsertps_avx(auVar191,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x30);
      auVar227 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar63)),0x10);
      auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(param_1 + 8 + lVar55)),0x20);
      auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x30);
      auVar87._16_16_ = auVar191;
      auVar87._0_16_ = auVar227;
      uVar20 = *(uint *)(param_1 + 0xc + lVar34);
      uVar172 = *(uint *)(param_1 + 0xc + lVar63);
      uVar173 = *(uint *)(param_1 + 0xc + lVar55);
      uVar174 = *(uint *)(param_1 + 0xc + lVar50);
      uVar175 = *(uint *)(param_1 + 0xc + lVar47);
      uVar176 = *(uint *)(param_1 + 0xc + lVar28);
      auVar178 = vpslld_avx(auVar155._16_16_,4);
      auVar78 = vpslld_avx(auVar126._0_16_,4);
      auVar79 = vpslld_avx(auVar83,2);
      auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar79._0_4_)),
                              ZEXT416(*(uint *)(param_6 + (ulonglong)auVar79._4_4_)),0x10);
      uVar263 = *(uint *)(param_1 + 0xc + lVar23);
      auVar13 = vinsertps_avx(ZEXT416(uVar174),ZEXT416(uVar175),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(uVar176),0x20);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(uVar263),0x30);
      auVar202 = vinsertps_avx(ZEXT416(uVar20),ZEXT416(uVar172),0x10);
      auVar202 = vinsertps_avx(auVar202,ZEXT416(uVar173),0x20);
      lVar35 = (longlong)auVar78._0_4_;
      lVar64 = (longlong)auVar78._4_4_;
      lVar56 = (longlong)auVar78._8_4_;
      lVar48 = (longlong)auVar178._0_4_;
      lVar29 = (longlong)auVar178._4_4_;
      lVar24 = (longlong)auVar178._8_4_;
      auVar201 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar48)),
                               ZEXT416(*(uint *)(param_1 + lVar29)),0x10);
      auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(param_1 + lVar24)),0x20);
      lVar70 = (longlong)auVar178._12_4_;
      auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(param_1 + lVar70)),0x30);
      auVar178 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar35)),
                               ZEXT416(*(uint *)(param_1 + lVar64)),0x10);
      auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)(param_1 + lVar56)),0x20);
      lVar51 = (longlong)auVar78._12_4_;
      auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)(param_1 + lVar51)),0x30);
      uVar268 = *(uint *)(param_1 + 0xc + lVar30);
      auVar202 = vinsertps_avx(auVar202,ZEXT416(uVar268),0x30);
      auVar78 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar48)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar29)),0x10);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x20);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_1 + 4 + lVar70)),0x30);
      auVar218._16_16_ = auVar13;
      auVar218._0_16_ = auVar202;
      auVar125 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar35)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar64)),0x10);
      auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + 4 + lVar56)),0x20);
      auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + 4 + lVar51)),0x30);
      auVar242._16_16_ = auVar201;
      auVar242._0_16_ = auVar178;
      auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar48)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar29)),0x10);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x20);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 8 + lVar70)),0x30);
      auVar228._16_16_ = auVar78;
      auVar228._0_16_ = auVar125;
      auVar82 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar64)),0x10);
      auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(param_1 + 8 + lVar56)),0x20);
      auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(param_1 + 8 + lVar51)),0x30);
      auVar203._16_16_ = auVar14;
      auVar203._0_16_ = auVar82;
      auVar80 = vpslld_avx(auVar85._0_16_,4);
      auVar81 = vpslld_avx(auVar171._0_16_,4);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar79._8_4_)),0x20);
      uVar269 = *(uint *)(param_1 + 0xc + lVar48);
      uVar270 = *(uint *)(param_1 + 0xc + lVar29);
      uVar271 = *(uint *)(param_1 + 0xc + lVar24);
      auVar152 = vinsertps_avx(ZEXT416(uVar269),ZEXT416(uVar270),0x10);
      auVar152 = vinsertps_avx(auVar152,ZEXT416(uVar271),0x20);
      uVar273 = *(uint *)(param_1 + 0xc + lVar70);
      auVar152 = vinsertps_avx(auVar152,ZEXT416(uVar273),0x30);
      uVar274 = *(uint *)(param_1 + 0xc + lVar35);
      uVar275 = *(uint *)(param_1 + 0xc + lVar64);
      uVar3 = *(uint *)(param_1 + 0xc + lVar56);
      auVar153 = vinsertps_avx(ZEXT416(uVar274),ZEXT416(uVar275),0x10);
      auVar153 = vinsertps_avx(auVar153,ZEXT416(uVar3),0x20);
      uVar4 = *(uint *)(param_1 + 0xc + lVar51);
      auVar153 = vinsertps_avx(auVar153,ZEXT416(uVar4),0x30);
      lVar68 = (longlong)auVar80._0_4_;
      lVar71 = (longlong)auVar80._4_4_;
      lVar52 = (longlong)auVar80._8_4_;
      lVar57 = (longlong)auVar81._0_4_;
      lVar36 = (longlong)auVar81._4_4_;
      lVar39 = (longlong)auVar81._8_4_;
      auVar154 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar57)),
                               ZEXT416(*(uint *)(param_1 + lVar36)),0x10);
      auVar154 = vinsertps_avx(auVar154,ZEXT416(*(uint *)(param_1 + lVar39)),0x20);
      lVar31 = (longlong)auVar81._12_4_;
      auVar154 = vinsertps_avx(auVar154,ZEXT416(*(uint *)(param_1 + lVar31)),0x30);
      auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar68)),
                              ZEXT416(*(uint *)(param_1 + lVar71)),0x10);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + lVar52)),0x20);
      lVar49 = (longlong)auVar80._12_4_;
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + lVar49)),0x30);
      auVar80 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar57)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar36)),0x10);
      auVar80 = vinsertps_avx(auVar80,ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x20);
      auVar186._16_16_ = auVar152;
      auVar186._0_16_ = auVar153;
      auVar80 = vinsertps_avx(auVar80,ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar68)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar71)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 4 + lVar52)),0x20);
      auVar165._16_16_ = auVar154;
      auVar165._0_16_ = auVar81;
      auVar154 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 4 + lVar49)),0x30);
      auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar57)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar36)),0x10);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x20);
      auVar231._16_16_ = auVar80;
      auVar231._0_16_ = auVar154;
      auVar154 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x30);
      auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar68)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar71)),0x10);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + 8 + lVar52)),0x20);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + 8 + lVar49)),0x30);
      auVar80 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_5 + uVar74)));
      auVar192._16_16_ = auVar154;
      auVar192._0_16_ = auVar81;
      auVar81 = vpslld_avx(auVar80,2);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar79._12_4_)),0x30);
      auVar154 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar81._0_4_)),
                               ZEXT416(*(uint *)(param_6 + (ulonglong)auVar81._4_4_)),0x10);
      auVar85 = vsubps_avx(auVar249,auVar242);
      fVar124 = auVar84._0_4_;
      fVar139 = auVar84._4_4_;
      fVar141 = auVar84._8_4_;
      fVar143 = auVar84._12_4_;
      fVar145 = auVar116._0_4_;
      fVar147 = auVar116._4_4_;
      fVar149 = auVar116._8_4_;
      fVar151 = auVar116._12_4_;
      auVar171 = vsubps_avx(auVar260,auVar228);
      auVar155._0_4_ = auVar178._0_4_ + fVar124 * auVar85._0_4_;
      auVar155._4_4_ = auVar178._4_4_ + fVar139 * auVar85._4_4_;
      auVar155._8_4_ = auVar178._8_4_ + fVar141 * auVar85._8_4_;
      auVar155._12_4_ = auVar178._12_4_ + fVar143 * auVar85._12_4_;
      auVar155._16_4_ = auVar201._0_4_ + fVar145 * auVar85._16_4_;
      auVar155._20_4_ = auVar201._4_4_ + fVar147 * auVar85._20_4_;
      auVar155._24_4_ = auVar201._8_4_ + fVar149 * auVar85._24_4_;
      auVar155._28_4_ = auVar201._12_4_ + fVar151 * auVar85._28_4_;
      fVar236 = auVar125._0_4_;
      auVar179._0_4_ = fVar236 + fVar124 * auVar171._0_4_;
      fVar237 = auVar125._4_4_;
      auVar179._4_4_ = fVar237 + fVar139 * auVar171._4_4_;
      fVar238 = auVar125._8_4_;
      auVar179._8_4_ = fVar238 + fVar141 * auVar171._8_4_;
      fVar239 = auVar125._12_4_;
      auVar179._12_4_ = fVar239 + fVar143 * auVar171._12_4_;
      fVar240 = auVar78._0_4_;
      auVar179._16_4_ = fVar240 + fVar145 * auVar171._16_4_;
      fVar241 = auVar78._4_4_;
      auVar179._20_4_ = fVar241 + fVar147 * auVar171._20_4_;
      fVar248 = auVar78._8_4_;
      auVar179._24_4_ = fVar248 + fVar149 * auVar171._24_4_;
      fVar253 = auVar78._12_4_;
      auVar179._28_4_ = fVar253 + fVar151 * auVar171._28_4_;
      auVar85 = vsubps_avx(auVar165,auVar155);
      auVar171 = vsubps_avx(auVar231,auVar179);
      auVar84 = vinsertps_avx(auVar154,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar81._8_4_)),0x20);
      auVar155 = vsubps_avx(auVar87,auVar203);
      fVar194 = auVar82._0_4_;
      auVar180._0_4_ = fVar194 + fVar124 * auVar155._0_4_;
      fVar195 = auVar82._4_4_;
      auVar180._4_4_ = fVar195 + fVar139 * auVar155._4_4_;
      fVar196 = auVar82._8_4_;
      auVar180._8_4_ = fVar196 + fVar141 * auVar155._8_4_;
      fVar197 = auVar82._12_4_;
      auVar180._12_4_ = fVar197 + fVar143 * auVar155._12_4_;
      fVar198 = auVar14._0_4_;
      auVar180._16_4_ = fVar198 + fVar145 * auVar155._16_4_;
      fVar199 = auVar14._4_4_;
      auVar180._20_4_ = fVar199 + fVar147 * auVar155._20_4_;
      fVar213 = auVar14._8_4_;
      auVar180._24_4_ = fVar213 + fVar149 * auVar155._24_4_;
      fVar215 = auVar14._12_4_;
      auVar180._28_4_ = fVar215 + fVar151 * auVar155._28_4_;
      auVar155 = vsubps_avx(auVar192,auVar180);
      auVar250._0_4_ =
           auVar85._0_4_ * auVar85._0_4_ + auVar171._0_4_ * auVar171._0_4_ +
           auVar155._0_4_ * auVar155._0_4_;
      auVar250._4_4_ =
           auVar85._4_4_ * auVar85._4_4_ + auVar171._4_4_ * auVar171._4_4_ +
           auVar155._4_4_ * auVar155._4_4_;
      auVar250._8_4_ =
           auVar85._8_4_ * auVar85._8_4_ + auVar171._8_4_ * auVar171._8_4_ +
           auVar155._8_4_ * auVar155._8_4_;
      auVar250._12_4_ =
           auVar85._12_4_ * auVar85._12_4_ + auVar171._12_4_ * auVar171._12_4_ +
           auVar155._12_4_ * auVar155._12_4_;
      auVar250._16_4_ =
           auVar85._16_4_ * auVar85._16_4_ + auVar171._16_4_ * auVar171._16_4_ +
           auVar155._16_4_ * auVar155._16_4_;
      auVar250._20_4_ =
           auVar85._20_4_ * auVar85._20_4_ + auVar171._20_4_ * auVar171._20_4_ +
           auVar155._20_4_ * auVar155._20_4_;
      auVar250._24_4_ =
           auVar85._24_4_ * auVar85._24_4_ + auVar171._24_4_ * auVar171._24_4_ +
           auVar155._24_4_ * auVar155._24_4_;
      auVar250._28_4_ =
           auVar85._28_4_ * auVar85._28_4_ + auVar171._28_4_ * auVar171._28_4_ +
           auVar155._28_4_ * auVar155._28_4_;
      auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar81._12_4_)),0x30);
      uVar19 = *(uint *)(param_1 + 0xc + lVar57);
      uVar5 = *(uint *)(param_1 + 0xc + lVar36);
      uVar6 = *(uint *)(param_1 + 0xc + lVar39);
      auVar116 = vinsertps_avx(ZEXT416(uVar19),ZEXT416(uVar5),0x10);
      auVar116 = vinsertps_avx(auVar116,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar31);
      auVar116 = vinsertps_avx(auVar116,ZEXT416(uVar7),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + lVar68);
      uVar9 = *(uint *)(param_1 + 0xc + lVar71);
      uVar10 = *(uint *)(param_1 + 0xc + lVar52);
      auVar78 = vinsertps_avx(ZEXT416(uVar8),ZEXT416(uVar9),0x10);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(uVar10),0x20);
      uVar11 = *(uint *)(param_1 + 0xc + lVar49);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(uVar11),0x30);
      auVar87 = vsqrtps_avx(auVar250);
      auVar127._16_16_ = auVar116;
      auVar127._0_16_ = auVar78;
      auVar85 = vdivps_avx(auVar85,auVar87);
      auVar171 = vdivps_avx(auVar171,auVar87);
      auVar155 = vdivps_avx(auVar155,auVar87);
      auVar126 = vsubps_avx(auVar87,local_3c0);
      fVar76 = auVar126._0_4_;
      fVar111 = auVar126._4_4_;
      fVar115 = auVar126._8_4_;
      fVar120 = auVar126._12_4_;
      fVar200 = auVar126._16_4_;
      fVar209 = auVar126._20_4_;
      fVar211 = auVar126._24_4_;
      fVar214 = auVar126._28_4_;
      auVar243._4_4_ = __real_3f800000;
      auVar243._0_4_ = __real_3f800000;
      auVar243._8_4_ = __real_3f800000;
      auVar243._12_4_ = __real_3f800000;
      auVar243._16_4_ = __real_3f800000;
      auVar243._20_4_ = __real_3f800000;
      auVar243._24_4_ = __real_3f800000;
      auVar243._28_4_ = __real_3f800000;
      auVar164 = vsubps_avx(auVar243,auVar266);
      auVar88._0_4_ = auVar164._0_4_ * auVar153._0_4_ + fVar124 * auVar202._0_4_;
      auVar88._4_4_ = auVar164._4_4_ * auVar153._4_4_ + fVar139 * auVar202._4_4_;
      auVar88._8_4_ = auVar164._8_4_ * auVar153._8_4_ + fVar141 * auVar202._8_4_;
      auVar88._12_4_ = auVar164._12_4_ * auVar153._12_4_ + fVar143 * auVar202._12_4_;
      auVar88._16_4_ = auVar164._16_4_ * auVar152._0_4_ + fVar145 * auVar13._0_4_;
      auVar88._20_4_ = auVar164._20_4_ * auVar152._4_4_ + fVar147 * auVar13._4_4_;
      auVar88._24_4_ = auVar164._24_4_ * auVar152._8_4_ + fVar149 * auVar13._8_4_;
      auVar88._28_4_ = auVar164._28_4_ * auVar152._12_4_ + fVar151 * auVar13._12_4_;
      fVar109 = auVar84._0_4_;
      auVar229._0_4_ = auVar85._0_4_ * fVar76 * fVar109;
      fVar113 = auVar84._4_4_;
      auVar229._4_4_ = auVar85._4_4_ * fVar111 * fVar113;
      fVar118 = auVar84._8_4_;
      auVar229._8_4_ = auVar85._8_4_ * fVar115 * fVar118;
      fVar122 = auVar84._12_4_;
      auVar229._12_4_ = auVar85._12_4_ * fVar120 * fVar122;
      fVar208 = auVar83._0_4_;
      auVar229._16_4_ = auVar85._16_4_ * fVar200 * fVar208;
      fVar210 = auVar83._4_4_;
      auVar229._20_4_ = auVar85._20_4_ * fVar209 * fVar210;
      fVar212 = auVar83._8_4_;
      auVar229._24_4_ = auVar85._24_4_ * fVar211 * fVar212;
      fVar216 = auVar83._12_4_;
      auVar229._28_4_ = auVar85._28_4_ * fVar214 * fVar216;
      auVar245._0_4_ = auVar88._0_4_ + auVar78._0_4_;
      auVar245._4_4_ = auVar88._4_4_ + auVar78._4_4_;
      auVar245._8_4_ = auVar88._8_4_ + auVar78._8_4_;
      auVar245._12_4_ = auVar88._12_4_ + auVar78._12_4_;
      auVar245._16_4_ = auVar88._16_4_ + auVar116._0_4_;
      auVar245._20_4_ = auVar88._20_4_ + auVar116._4_4_;
      auVar245._24_4_ = auVar88._24_4_ + auVar116._8_4_;
      auVar245._28_4_ = auVar88._28_4_ + auVar116._12_4_;
      auVar126 = vdivps_avx(auVar229,auVar245);
      auVar261._0_4_ = fVar76 * auVar171._0_4_ * fVar109;
      auVar261._4_4_ = fVar111 * auVar171._4_4_ * fVar113;
      auVar261._8_4_ = fVar115 * auVar171._8_4_ * fVar118;
      auVar261._12_4_ = fVar120 * auVar171._12_4_ * fVar122;
      auVar261._16_4_ = fVar200 * auVar171._16_4_ * fVar208;
      auVar261._20_4_ = fVar209 * auVar171._20_4_ * fVar210;
      auVar261._24_4_ = fVar211 * auVar171._24_4_ * fVar212;
      auVar261._28_4_ = fVar214 * auVar171._28_4_ * fVar216;
      auVar86 = vdivps_avx(auVar261,auVar245);
      auVar84 = auVar86._0_16_;
      auVar181._0_4_ = fVar76 * auVar155._0_4_ * fVar109;
      auVar181._4_4_ = fVar111 * auVar155._4_4_ * fVar113;
      auVar181._8_4_ = fVar115 * auVar155._8_4_ * fVar118;
      auVar181._12_4_ = fVar120 * auVar155._12_4_ * fVar122;
      auVar181._16_4_ = fVar200 * auVar155._16_4_ * fVar208;
      auVar181._20_4_ = fVar209 * auVar155._20_4_ * fVar210;
      auVar181._24_4_ = fVar211 * auVar155._24_4_ * fVar212;
      auVar181._28_4_ = fVar214 * auVar155._28_4_ * fVar216;
      auVar155 = vdivps_avx(auVar181,auVar245);
      auVar171 = ZEXT1232(ZEXT412(0)) << 0x20;
      auVar85 = vcmpps_avx(auVar171,auVar88,0);
      auVar171 = vcmpps_avx(auVar171,auVar127,0);
      auVar89._0_4_ = auVar171._0_4_ & auVar85._0_4_;
      auVar89._4_4_ = auVar171._4_4_ & auVar85._4_4_;
      auVar89._8_4_ = auVar171._8_4_ & auVar85._8_4_;
      auVar89._12_4_ = auVar171._12_4_ & auVar85._12_4_;
      auVar89._16_4_ = auVar171._16_4_ & auVar85._16_4_;
      auVar89._20_4_ = auVar171._20_4_ & auVar85._20_4_;
      auVar89._24_4_ = auVar171._24_4_ & auVar85._24_4_;
      auVar89._28_4_ = auVar171._28_4_ & auVar85._28_4_;
      auVar85 = vcmpps_avx(auVar87,
                           ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,2
                          );
      auVar89 = auVar89 | auVar85;
      uVar26 = auVar89._0_4_;
      fVar247 = (float)(~uVar26 & auVar126._0_4_);
      uVar108 = auVar89._4_4_;
      fVar252 = (float)(~uVar108 & auVar126._4_4_);
      uVar110 = auVar89._8_4_;
      fVar254 = (float)(~uVar110 & auVar126._8_4_);
      uVar112 = auVar89._12_4_;
      fVar255 = (float)(~uVar112 & auVar126._12_4_);
      uVar114 = auVar89._16_4_;
      fVar256 = (float)(~uVar114 & auVar126._16_4_);
      uVar117 = auVar89._20_4_;
      fVar257 = (float)(~uVar117 & auVar126._20_4_);
      uVar119 = auVar89._24_4_;
      fVar258 = (float)(~uVar119 & auVar126._24_4_);
      uVar121 = auVar89._28_4_;
      fVar259 = (float)(~uVar121 & auVar126._28_4_);
      fVar217 = (float)(~uVar26 & auVar86._0_4_);
      fVar220 = (float)(~uVar108 & auVar86._4_4_);
      fVar221 = (float)(~uVar110 & auVar86._8_4_);
      fVar222 = (float)(~uVar112 & auVar86._12_4_);
      fVar223 = (float)(~uVar114 & auVar86._16_4_);
      fVar224 = (float)(~uVar117 & auVar86._20_4_);
      fVar225 = (float)(~uVar119 & auVar86._24_4_);
      fVar226 = (float)(~uVar121 & auVar86._28_4_);
      fVar200 = (float)(~uVar26 & auVar155._0_4_);
      fVar208 = (float)(~uVar108 & auVar155._4_4_);
      fVar209 = (float)(~uVar110 & auVar155._8_4_);
      fVar210 = (float)(~uVar112 & auVar155._12_4_);
      fVar211 = (float)(~uVar114 & auVar155._16_4_);
      fVar212 = (float)(~uVar117 & auVar155._20_4_);
      fVar214 = (float)(~uVar119 & auVar155._24_4_);
      fVar216 = (float)(~uVar121 & auVar155._28_4_);
      auVar155 = ZEXT1232(ZEXT412(0)) << 0x20;
      auVar85 = vcmpps_avx(auVar155,auVar127,1);
      uVar26 = vmovmskps_avx(auVar85);
      auVar85 = vmaxps_avx(auVar266,auVar164);
      auVar171._0_4_ = __real_3f800000 + auVar85._0_4_;
      auVar171._4_4_ = __real_3f800000 + auVar85._4_4_;
      auVar171._8_4_ = __real_3f800000 + auVar85._8_4_;
      auVar171._12_4_ = __real_3f800000 + auVar85._12_4_;
      auVar171._16_4_ = __real_3f800000 + auVar85._16_4_;
      auVar171._20_4_ = __real_3f800000 + auVar85._20_4_;
      auVar171._24_4_ = __real_3f800000 + auVar85._24_4_;
      auVar171._28_4_ = __real_3f800000 + auVar85._28_4_;
      auVar182._4_4_ = __real_40000000;
      auVar182._0_4_ = __real_40000000;
      auVar182._8_4_ = __real_40000000;
      auVar182._12_4_ = __real_40000000;
      auVar182._16_4_ = __real_40000000;
      auVar182._20_4_ = __real_40000000;
      auVar182._24_4_ = __real_40000000;
      auVar182._28_4_ = __real_40000000;
      auVar85 = vdivps_avx(auVar182,auVar171);
      fVar76 = auVar85._0_4_;
      fVar109 = auVar85._4_4_;
      fVar111 = auVar85._8_4_;
      fVar113 = auVar85._12_4_;
      fVar115 = auVar85._16_4_;
      fVar118 = auVar85._20_4_;
      fVar120 = auVar85._24_4_;
      fVar122 = auVar85._28_4_;
      if (uVar26 != 0) {
        fVar123 = auVar78._0_4_ * fVar76;
        fVar138 = auVar78._4_4_ * fVar109;
        fVar140 = auVar78._8_4_ * fVar111;
        fVar142 = auVar78._12_4_ * fVar113;
        fVar144 = auVar116._0_4_ * fVar115;
        fVar146 = auVar116._4_4_ * fVar118;
        fVar148 = auVar116._8_4_ * fVar120;
        fVar150 = auVar116._12_4_ * fVar122;
        auVar90._0_4_ = fVar247 * fVar123;
        auVar90._4_4_ = fVar252 * fVar138;
        auVar90._8_4_ = fVar254 * fVar140;
        auVar90._12_4_ = fVar255 * fVar142;
        auVar90._16_4_ = fVar256 * fVar144;
        auVar90._20_4_ = fVar257 * fVar146;
        auVar90._24_4_ = fVar258 * fVar148;
        auVar90._28_4_ = fVar259 * fVar150;
        auVar85 = vsubps_avx(auVar165,auVar90);
        cVar18 = (char)uVar26;
        auVar116 = auVar85._0_16_;
        auVar83 = auVar85._16_16_;
        if ((uVar26 & 1) == 0) {
          if ((uVar26 & 2) == 0) goto LAB_140018eec;
LAB_140019380:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + lVar71) = uVar2;
          if ((uVar26 & 4) != 0) goto LAB_140019391;
LAB_140018ef6:
          if ((uVar26 & 8) == 0) goto LAB_140018f00;
LAB_1400193a2:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + lVar49) = uVar2;
          if ((uVar26 & 0x10) != 0) goto LAB_1400193b9;
LAB_140018f10:
          if ((uVar26 & 0x20) == 0) goto LAB_140018f1a;
LAB_1400193c9:
          uVar2 = vextractps_avx(auVar83,1);
          *(undefined4 *)(param_1 + lVar36) = uVar2;
          if ((uVar26 & 0x40) != 0) goto LAB_1400193da;
LAB_140018f24:
          if (-1 < cVar18) goto LAB_140018f2c;
LAB_1400193e9:
          uVar2 = vextractps_avx(auVar83,3);
          *(undefined4 *)(param_1 + lVar31) = uVar2;
          auVar94._0_4_ = fVar217 * fVar123;
          auVar94._4_4_ = fVar220 * fVar138;
          auVar94._8_4_ = fVar221 * fVar140;
          auVar94._12_4_ = fVar222 * fVar142;
          auVar94._16_4_ = fVar223 * fVar144;
          auVar94._20_4_ = fVar224 * fVar146;
          auVar94._24_4_ = fVar225 * fVar148;
          auVar94._28_4_ = fVar226 * fVar150;
          auVar85 = vsubps_avx(auVar231,auVar94);
          if ((uVar26 & 1) != 0) goto LAB_140019402;
LAB_140018f3e:
          if ((uVar26 & 2) == 0) goto LAB_140018f48;
LAB_140019413:
          uVar2 = vextractps_avx(auVar85._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar71) = uVar2;
          if ((uVar26 & 4) != 0) goto LAB_140019425;
LAB_140018f52:
          if ((uVar26 & 8) == 0) goto LAB_140018f5c;
LAB_140019437:
          uVar2 = vextractps_avx(auVar85._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar49) = uVar2;
          auVar116 = auVar85._16_16_;
          if ((uVar26 & 0x10) != 0) goto LAB_14001944f;
LAB_140018f6c:
          if ((uVar26 & 0x20) == 0) goto LAB_140018f76;
LAB_140019460:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 4 + lVar36) = uVar2;
          if ((uVar26 & 0x40) != 0) goto LAB_140019472;
LAB_140018f80:
          if (-1 < cVar18) goto LAB_140018f88;
LAB_140019482:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 4 + lVar31) = uVar2;
          auVar95._0_4_ = fVar123 * fVar200;
          auVar95._4_4_ = fVar138 * fVar208;
          auVar95._8_4_ = fVar140 * fVar209;
          auVar95._12_4_ = fVar142 * fVar210;
          auVar95._16_4_ = fVar144 * fVar211;
          auVar95._20_4_ = fVar146 * fVar212;
          auVar95._24_4_ = fVar148 * fVar214;
          auVar95._28_4_ = fVar150 * fVar216;
          auVar85 = vsubps_avx(auVar192,auVar95);
          if ((uVar26 & 1) != 0) goto LAB_14001949c;
LAB_140018f9a:
          if ((uVar26 & 2) == 0) goto LAB_140018fa4;
LAB_1400194ad:
          uVar2 = vextractps_avx(auVar85._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar71) = uVar2;
          if ((uVar26 & 4) != 0) goto LAB_1400194bf;
LAB_140018fae:
          if ((uVar26 & 8) == 0) goto LAB_140018fb8;
LAB_1400194d1:
          uVar2 = vextractps_avx(auVar85._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar49) = uVar2;
          auVar116 = auVar85._16_16_;
        }
        else {
          *(int *)(param_1 + lVar68) = auVar85._0_4_;
          if ((uVar26 & 2) != 0) goto LAB_140019380;
LAB_140018eec:
          if ((uVar26 & 4) == 0) goto LAB_140018ef6;
LAB_140019391:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + lVar52) = uVar2;
          if ((uVar26 & 8) != 0) goto LAB_1400193a2;
LAB_140018f00:
          if ((uVar26 & 0x10) == 0) goto LAB_140018f10;
LAB_1400193b9:
          *(int *)(param_1 + lVar57) = auVar85._16_4_;
          if ((uVar26 & 0x20) != 0) goto LAB_1400193c9;
LAB_140018f1a:
          if ((uVar26 & 0x40) == 0) goto LAB_140018f24;
LAB_1400193da:
          uVar2 = vextractps_avx(auVar83,2);
          *(undefined4 *)(param_1 + lVar39) = uVar2;
          if (cVar18 < '\0') goto LAB_1400193e9;
LAB_140018f2c:
          auVar91._0_4_ = fVar217 * fVar123;
          auVar91._4_4_ = fVar220 * fVar138;
          auVar91._8_4_ = fVar221 * fVar140;
          auVar91._12_4_ = fVar222 * fVar142;
          auVar91._16_4_ = fVar223 * fVar144;
          auVar91._20_4_ = fVar224 * fVar146;
          auVar91._24_4_ = fVar225 * fVar148;
          auVar91._28_4_ = fVar226 * fVar150;
          auVar85 = vsubps_avx(auVar231,auVar91);
          if ((uVar26 & 1) == 0) goto LAB_140018f3e;
LAB_140019402:
          *(int *)(param_1 + 4 + lVar68) = auVar85._0_4_;
          if ((uVar26 & 2) != 0) goto LAB_140019413;
LAB_140018f48:
          if ((uVar26 & 4) == 0) goto LAB_140018f52;
LAB_140019425:
          uVar2 = vextractps_avx(auVar85._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar52) = uVar2;
          if ((uVar26 & 8) != 0) goto LAB_140019437;
LAB_140018f5c:
          auVar116 = auVar85._16_16_;
          if ((uVar26 & 0x10) == 0) goto LAB_140018f6c;
LAB_14001944f:
          *(int *)(param_1 + 4 + lVar57) = auVar116._0_4_;
          if ((uVar26 & 0x20) != 0) goto LAB_140019460;
LAB_140018f76:
          if ((uVar26 & 0x40) == 0) goto LAB_140018f80;
LAB_140019472:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 4 + lVar39) = uVar2;
          if (cVar18 < '\0') goto LAB_140019482;
LAB_140018f88:
          auVar92._0_4_ = fVar123 * fVar200;
          auVar92._4_4_ = fVar138 * fVar208;
          auVar92._8_4_ = fVar140 * fVar209;
          auVar92._12_4_ = fVar142 * fVar210;
          auVar92._16_4_ = fVar144 * fVar211;
          auVar92._20_4_ = fVar146 * fVar212;
          auVar92._24_4_ = fVar148 * fVar214;
          auVar92._28_4_ = fVar150 * fVar216;
          auVar85 = vsubps_avx(auVar192,auVar92);
          if ((uVar26 & 1) == 0) goto LAB_140018f9a;
LAB_14001949c:
          *(int *)(param_1 + 8 + lVar68) = auVar85._0_4_;
          if ((uVar26 & 2) != 0) goto LAB_1400194ad;
LAB_140018fa4:
          if ((uVar26 & 4) == 0) goto LAB_140018fae;
LAB_1400194bf:
          uVar2 = vextractps_avx(auVar85._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar52) = uVar2;
          if ((uVar26 & 8) != 0) goto LAB_1400194d1;
LAB_140018fb8:
          auVar116 = auVar85._16_16_;
        }
        if ((uVar26 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar57) = auVar116._0_4_;
        }
        if ((uVar26 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 8 + lVar36) = uVar2;
        }
        if ((uVar26 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 8 + lVar39) = uVar2;
        }
        if (cVar18 < '\0') {
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 8 + lVar31) = uVar2;
        }
        if ((uVar26 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar68) = uVar8;
        }
        if ((uVar26 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar71) = uVar9;
        }
        if ((uVar26 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar52) = uVar10;
        }
        if ((uVar26 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar49) = uVar11;
        }
        if ((uVar26 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar57) = uVar19;
        }
        if ((uVar26 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar5;
        }
        if ((uVar26 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar6;
        }
        if (cVar18 < '\0') {
          *(uint *)(param_1 + 0xc + lVar31) = uVar7;
        }
      }
      auVar85 = vcmpps_avx(auVar155,auVar218,0xc);
      uVar19 = vmovmskps_avx(auVar85);
      if (uVar19 != 0) {
        fVar124 = fVar124 * auVar202._0_4_ * fVar76;
        fVar139 = fVar139 * auVar202._4_4_ * fVar109;
        fVar141 = fVar141 * auVar202._8_4_ * fVar111;
        fVar143 = fVar143 * auVar202._12_4_ * fVar113;
        fVar145 = fVar145 * auVar13._0_4_ * fVar115;
        fVar147 = fVar147 * auVar13._4_4_ * fVar118;
        fVar149 = fVar149 * auVar13._8_4_ * fVar120;
        fVar151 = fVar151 * auVar13._12_4_ * fVar122;
        local_380 = auVar190._0_4_;
        fStack_37c = auVar190._4_4_;
        fStack_378 = auVar190._8_4_;
        fStack_374 = auVar190._12_4_;
        fStack_370 = auVar77._0_4_;
        fStack_36c = auVar77._4_4_;
        fStack_368 = auVar77._8_4_;
        fStack_364 = auVar77._12_4_;
        auVar116._0_4_ = fVar247 * fVar124 + local_380;
        auVar116._4_4_ = fVar252 * fVar139 + fStack_37c;
        auVar116._8_4_ = fVar254 * fVar141 + fStack_378;
        auVar116._12_4_ = fVar255 * fVar143 + fStack_374;
        auVar156._16_4_ = fVar256 * fVar145 + fStack_370;
        auVar156._0_16_ = auVar116;
        auVar156._20_4_ = fVar257 * fVar147 + fStack_36c;
        auVar156._24_4_ = fVar258 * fVar149 + fStack_368;
        auVar156._28_4_ = fVar259 * fVar151 + fStack_364;
        cVar18 = (char)uVar19;
        if ((uVar19 & 1) != 0) {
          *(float *)(param_1 + lVar34) = auVar116._0_4_;
        }
        auVar77 = auVar156._16_16_;
        local_420 = auVar272._0_4_;
        fStack_41c = auVar272._4_4_;
        fStack_418 = auVar272._8_4_;
        fStack_414 = auVar272._12_4_;
        fStack_410 = auVar265._0_4_;
        fStack_40c = auVar265._4_4_;
        fStack_408 = auVar265._8_4_;
        fStack_404 = auVar265._12_4_;
        local_560 = auVar227._0_4_;
        fStack_55c = auVar227._4_4_;
        fStack_558 = auVar227._8_4_;
        fStack_554 = auVar227._12_4_;
        fStack_550 = auVar191._0_4_;
        fStack_54c = auVar191._4_4_;
        fStack_548 = auVar191._8_4_;
        fStack_544 = auVar191._12_4_;
        if ((uVar19 & 2) == 0) {
          if ((uVar19 & 4) == 0) goto LAB_1400190bb;
LAB_140019615:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + lVar55) = uVar2;
          if ((uVar19 & 8) != 0) goto LAB_14001962d;
LAB_1400190c4:
          if ((uVar19 & 0x10) == 0) goto LAB_1400190d3;
LAB_14001964b:
          *(float *)(param_1 + lVar50) = auVar156._16_4_;
          if ((uVar19 & 0x20) != 0) goto LAB_14001965a;
LAB_1400190dc:
          if ((uVar19 & 0x40) == 0) goto LAB_1400190e5;
LAB_14001966a:
          uVar2 = vextractps_avx(auVar77,2);
          *(undefined4 *)(param_1 + lVar28) = uVar2;
          if (cVar18 < '\0') goto LAB_140019679;
LAB_1400190ed:
          auVar157._0_4_ = fVar217 * fVar124 + local_420;
          auVar157._4_4_ = fVar220 * fVar139 + fStack_41c;
          auVar157._8_4_ = fVar221 * fVar141 + fStack_418;
          auVar157._12_4_ = fVar222 * fVar143 + fStack_414;
          auVar157._16_4_ = fVar223 * fVar145 + fStack_410;
          auVar157._20_4_ = fVar224 * fVar147 + fStack_40c;
          auVar157._24_4_ = fVar225 * fVar149 + fStack_408;
          auVar157._28_4_ = fVar226 * fVar151 + fStack_404;
          if ((uVar19 & 1) == 0) goto LAB_140019103;
LAB_14001969b:
          *(int *)(param_1 + 4 + lVar34) = auVar157._0_4_;
          if ((uVar19 & 2) != 0) goto LAB_1400196b0;
LAB_14001910c:
          if ((uVar19 & 4) == 0) goto LAB_140019115;
LAB_1400196c6:
          uVar2 = vextractps_avx(auVar157._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar55) = uVar2;
          if ((uVar19 & 8) != 0) goto LAB_1400196df;
LAB_14001911e:
          auVar116 = auVar157._16_16_;
          if ((uVar19 & 0x10) == 0) goto LAB_14001912d;
LAB_1400196fe:
          *(int *)(param_1 + 4 + lVar50) = auVar116._0_4_;
          if ((uVar19 & 0x20) != 0) goto LAB_14001970e;
LAB_140019136:
          if ((uVar19 & 0x40) == 0) goto LAB_14001913f;
LAB_14001971f:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 4 + lVar28) = uVar2;
          if (cVar18 < '\0') goto LAB_14001972f;
LAB_140019147:
          auVar128._0_4_ = fVar124 * fVar200 + local_560;
          auVar128._4_4_ = fVar139 * fVar208 + fStack_55c;
          auVar128._8_4_ = fVar141 * fVar209 + fStack_558;
          auVar128._12_4_ = fVar143 * fVar210 + fStack_554;
          auVar128._16_4_ = fVar145 * fVar211 + fStack_550;
          auVar128._20_4_ = fVar147 * fVar212 + fStack_54c;
          auVar128._24_4_ = fVar149 * fVar214 + fStack_548;
          auVar128._28_4_ = fVar151 * fVar216 + fStack_544;
          if ((uVar19 & 1) == 0) goto LAB_14001915d;
LAB_140019752:
          *(int *)(param_1 + 8 + lVar34) = auVar128._0_4_;
          if ((uVar19 & 2) != 0) goto LAB_140019767;
LAB_140019166:
          if ((uVar19 & 4) == 0) goto LAB_14001916f;
LAB_14001977d:
          uVar2 = vextractps_avx(auVar128._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar55) = uVar2;
          if ((uVar19 & 8) != 0) goto LAB_140019796;
LAB_140019178:
          auVar116 = auVar128._16_16_;
        }
        else {
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + lVar63) = uVar2;
          if ((uVar19 & 4) != 0) goto LAB_140019615;
LAB_1400190bb:
          if ((uVar19 & 8) == 0) goto LAB_1400190c4;
LAB_14001962d:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + lVar30) = uVar2;
          if ((uVar19 & 0x10) != 0) goto LAB_14001964b;
LAB_1400190d3:
          if ((uVar19 & 0x20) == 0) goto LAB_1400190dc;
LAB_14001965a:
          uVar2 = vextractps_avx(auVar77,1);
          *(undefined4 *)(param_1 + lVar47) = uVar2;
          if ((uVar19 & 0x40) != 0) goto LAB_14001966a;
LAB_1400190e5:
          if (-1 < cVar18) goto LAB_1400190ed;
LAB_140019679:
          uVar2 = vextractps_avx(auVar77,3);
          *(undefined4 *)(param_1 + lVar23) = uVar2;
          auVar157._0_4_ = fVar217 * fVar124 + local_420;
          auVar157._4_4_ = fVar220 * fVar139 + fStack_41c;
          auVar157._8_4_ = fVar221 * fVar141 + fStack_418;
          auVar157._12_4_ = fVar222 * fVar143 + fStack_414;
          auVar157._16_4_ = fVar223 * fVar145 + fStack_410;
          auVar157._20_4_ = fVar224 * fVar147 + fStack_40c;
          auVar157._24_4_ = fVar225 * fVar149 + fStack_408;
          auVar157._28_4_ = fVar226 * fVar151 + fStack_404;
          if ((uVar19 & 1) != 0) goto LAB_14001969b;
LAB_140019103:
          if ((uVar19 & 2) == 0) goto LAB_14001910c;
LAB_1400196b0:
          uVar2 = vextractps_avx(auVar157._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar63) = uVar2;
          if ((uVar19 & 4) != 0) goto LAB_1400196c6;
LAB_140019115:
          if ((uVar19 & 8) == 0) goto LAB_14001911e;
LAB_1400196df:
          uVar2 = vextractps_avx(auVar157._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar30) = uVar2;
          auVar116 = auVar157._16_16_;
          if ((uVar19 & 0x10) != 0) goto LAB_1400196fe;
LAB_14001912d:
          if ((uVar19 & 0x20) == 0) goto LAB_140019136;
LAB_14001970e:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 4 + lVar47) = uVar2;
          if ((uVar19 & 0x40) != 0) goto LAB_14001971f;
LAB_14001913f:
          if (-1 < cVar18) goto LAB_140019147;
LAB_14001972f:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 4 + lVar23) = uVar2;
          auVar128._0_4_ = fVar124 * fVar200 + local_560;
          auVar128._4_4_ = fVar139 * fVar208 + fStack_55c;
          auVar128._8_4_ = fVar141 * fVar209 + fStack_558;
          auVar128._12_4_ = fVar143 * fVar210 + fStack_554;
          auVar128._16_4_ = fVar145 * fVar211 + fStack_550;
          auVar128._20_4_ = fVar147 * fVar212 + fStack_54c;
          auVar128._24_4_ = fVar149 * fVar214 + fStack_548;
          auVar128._28_4_ = fVar151 * fVar216 + fStack_544;
          if ((uVar19 & 1) != 0) goto LAB_140019752;
LAB_14001915d:
          if ((uVar19 & 2) == 0) goto LAB_140019166;
LAB_140019767:
          uVar2 = vextractps_avx(auVar128._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar63) = uVar2;
          if ((uVar19 & 4) != 0) goto LAB_14001977d;
LAB_14001916f:
          if ((uVar19 & 8) == 0) goto LAB_140019178;
LAB_140019796:
          uVar2 = vextractps_avx(auVar128._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar30) = uVar2;
          auVar116 = auVar128._16_16_;
        }
        if ((uVar19 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar50) = auVar116._0_4_;
        }
        if ((uVar19 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 8 + lVar47) = uVar2;
        }
        if ((uVar19 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 8 + lVar28) = uVar2;
        }
        if (cVar18 < '\0') {
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 8 + lVar23) = uVar2;
        }
        if ((uVar19 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar20;
        }
        if ((uVar19 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar63) = uVar172;
        }
        if ((uVar19 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar55) = uVar173;
        }
        if ((uVar19 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar268;
        }
        if ((uVar19 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar50) = uVar174;
        }
        if ((uVar19 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar47) = uVar175;
        }
        if ((uVar19 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar176;
        }
        if (cVar18 < '\0') {
          *(uint *)(param_1 + 0xc + lVar23) = uVar263;
        }
      }
      auVar85 = vcmpps_avx(auVar155,auVar186,0xc);
      uVar20 = vmovmskps_avx(auVar85);
      if (uVar20 != 0) {
        fVar76 = auVar164._0_4_ * auVar153._0_4_ * fVar76;
        fVar109 = auVar164._4_4_ * auVar153._4_4_ * fVar109;
        fVar111 = auVar164._8_4_ * auVar153._8_4_ * fVar111;
        fVar113 = auVar164._12_4_ * auVar153._12_4_ * fVar113;
        fVar115 = auVar164._16_4_ * auVar152._0_4_ * fVar115;
        fVar118 = auVar164._20_4_ * auVar152._4_4_ * fVar118;
        fVar120 = auVar164._24_4_ * auVar152._8_4_ * fVar120;
        fVar122 = auVar164._28_4_ * auVar152._12_4_ * fVar122;
        auVar77._0_4_ = fVar247 * fVar76 + auVar178._0_4_;
        auVar77._4_4_ = fVar252 * fVar109 + auVar178._4_4_;
        auVar77._8_4_ = fVar254 * fVar111 + auVar178._8_4_;
        auVar77._12_4_ = fVar255 * fVar113 + auVar178._12_4_;
        auVar129._16_4_ = fVar256 * fVar115 + auVar201._0_4_;
        auVar129._0_16_ = auVar77;
        auVar129._20_4_ = fVar257 * fVar118 + auVar201._4_4_;
        auVar129._24_4_ = fVar258 * fVar120 + auVar201._8_4_;
        auVar129._28_4_ = fVar259 * fVar122 + auVar201._12_4_;
        cVar18 = (char)uVar20;
        auVar116 = auVar129._16_16_;
        if ((uVar20 & 1) == 0) {
          if ((uVar20 & 2) == 0) goto LAB_140019231;
LAB_1400198f9:
          uVar2 = vextractps_avx(auVar77,1);
          *(undefined4 *)(param_1 + lVar64) = uVar2;
          if ((uVar20 & 4) != 0) goto LAB_140019909;
LAB_14001923a:
          if ((uVar20 & 8) == 0) goto LAB_140019243;
LAB_140019919:
          uVar2 = vextractps_avx(auVar77,3);
          *(undefined4 *)(param_1 + lVar51) = uVar2;
          if ((uVar20 & 0x10) != 0) goto LAB_14001992f;
LAB_140019252:
          if ((uVar20 & 0x20) == 0) goto LAB_14001925b;
LAB_14001993e:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + lVar29) = uVar2;
          if ((uVar20 & 0x40) != 0) goto LAB_14001994e;
LAB_140019264:
          if (-1 < cVar18) goto LAB_14001926c;
LAB_14001995d:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + lVar70) = uVar2;
          auVar130._0_4_ = fVar217 * fVar76 + fVar236;
          auVar130._4_4_ = fVar220 * fVar109 + fVar237;
          auVar130._8_4_ = fVar221 * fVar111 + fVar238;
          auVar130._12_4_ = fVar222 * fVar113 + fVar239;
          auVar130._16_4_ = fVar223 * fVar115 + fVar240;
          auVar130._20_4_ = fVar224 * fVar118 + fVar241;
          auVar130._24_4_ = fVar225 * fVar120 + fVar248;
          auVar130._28_4_ = fVar226 * fVar122 + fVar253;
          if ((uVar20 & 1) != 0) goto LAB_140019982;
LAB_140019282:
          if ((uVar20 & 2) == 0) goto LAB_14001928b;
LAB_140019997:
          uVar2 = vextractps_avx(auVar130._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar64) = uVar2;
          if ((uVar20 & 4) != 0) goto LAB_1400199a8;
LAB_140019294:
          if ((uVar20 & 8) == 0) goto LAB_14001929d;
LAB_1400199b9:
          uVar2 = vextractps_avx(auVar130._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar51) = uVar2;
          auVar116 = auVar130._16_16_;
          if ((uVar20 & 0x10) != 0) goto LAB_1400199d0;
LAB_1400192ac:
          if ((uVar20 & 0x20) == 0) goto LAB_1400192b5;
LAB_1400199e0:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 4 + lVar29) = uVar2;
          if ((uVar20 & 0x40) != 0) goto LAB_1400199f1;
LAB_1400192be:
          if (-1 < cVar18) goto LAB_1400192c6;
LAB_140019a01:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 4 + lVar70) = uVar2;
          auVar93._0_4_ = fVar76 * fVar200 + fVar194;
          auVar93._4_4_ = fVar109 * fVar208 + fVar195;
          auVar93._8_4_ = fVar111 * fVar209 + fVar196;
          auVar93._12_4_ = fVar113 * fVar210 + fVar197;
          auVar93._16_4_ = fVar115 * fVar211 + fVar198;
          auVar93._20_4_ = fVar118 * fVar212 + fVar199;
          auVar93._24_4_ = fVar120 * fVar214 + fVar213;
          auVar93._28_4_ = fVar122 * fVar216 + fVar215;
          if ((uVar20 & 1) != 0) goto LAB_140019a27;
LAB_1400192dc:
          if ((uVar20 & 2) == 0) goto LAB_1400192e5;
LAB_140019a3c:
          uVar2 = vextractps_avx(auVar93._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar64) = uVar2;
          if ((uVar20 & 4) != 0) goto LAB_140019a4d;
LAB_1400192ee:
          if ((uVar20 & 8) == 0) goto LAB_1400192f7;
LAB_140019a5e:
          uVar2 = vextractps_avx(auVar93._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar51) = uVar2;
          auVar116 = auVar93._16_16_;
        }
        else {
          *(float *)(param_1 + lVar35) = auVar77._0_4_;
          if ((uVar20 & 2) != 0) goto LAB_1400198f9;
LAB_140019231:
          if ((uVar20 & 4) == 0) goto LAB_14001923a;
LAB_140019909:
          uVar2 = vextractps_avx(auVar77,2);
          *(undefined4 *)(param_1 + lVar56) = uVar2;
          if ((uVar20 & 8) != 0) goto LAB_140019919;
LAB_140019243:
          if ((uVar20 & 0x10) == 0) goto LAB_140019252;
LAB_14001992f:
          *(float *)(param_1 + lVar48) = auVar129._16_4_;
          if ((uVar20 & 0x20) != 0) goto LAB_14001993e;
LAB_14001925b:
          if ((uVar20 & 0x40) == 0) goto LAB_140019264;
LAB_14001994e:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + lVar24) = uVar2;
          if (cVar18 < '\0') goto LAB_14001995d;
LAB_14001926c:
          auVar130._0_4_ = fVar217 * fVar76 + fVar236;
          auVar130._4_4_ = fVar220 * fVar109 + fVar237;
          auVar130._8_4_ = fVar221 * fVar111 + fVar238;
          auVar130._12_4_ = fVar222 * fVar113 + fVar239;
          auVar130._16_4_ = fVar223 * fVar115 + fVar240;
          auVar130._20_4_ = fVar224 * fVar118 + fVar241;
          auVar130._24_4_ = fVar225 * fVar120 + fVar248;
          auVar130._28_4_ = fVar226 * fVar122 + fVar253;
          if ((uVar20 & 1) == 0) goto LAB_140019282;
LAB_140019982:
          *(int *)(param_1 + 4 + lVar35) = auVar130._0_4_;
          if ((uVar20 & 2) != 0) goto LAB_140019997;
LAB_14001928b:
          if ((uVar20 & 4) == 0) goto LAB_140019294;
LAB_1400199a8:
          uVar2 = vextractps_avx(auVar130._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar56) = uVar2;
          if ((uVar20 & 8) != 0) goto LAB_1400199b9;
LAB_14001929d:
          auVar116 = auVar130._16_16_;
          if ((uVar20 & 0x10) == 0) goto LAB_1400192ac;
LAB_1400199d0:
          *(int *)(param_1 + 4 + lVar48) = auVar116._0_4_;
          if ((uVar20 & 0x20) != 0) goto LAB_1400199e0;
LAB_1400192b5:
          if ((uVar20 & 0x40) == 0) goto LAB_1400192be;
LAB_1400199f1:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 4 + lVar24) = uVar2;
          if (cVar18 < '\0') goto LAB_140019a01;
LAB_1400192c6:
          auVar93._0_4_ = fVar76 * fVar200 + fVar194;
          auVar93._4_4_ = fVar109 * fVar208 + fVar195;
          auVar93._8_4_ = fVar111 * fVar209 + fVar196;
          auVar93._12_4_ = fVar113 * fVar210 + fVar197;
          auVar93._16_4_ = fVar115 * fVar211 + fVar198;
          auVar93._20_4_ = fVar118 * fVar212 + fVar199;
          auVar93._24_4_ = fVar120 * fVar214 + fVar213;
          auVar93._28_4_ = fVar122 * fVar216 + fVar215;
          if ((uVar20 & 1) == 0) goto LAB_1400192dc;
LAB_140019a27:
          *(int *)(param_1 + 8 + lVar35) = auVar93._0_4_;
          if ((uVar20 & 2) != 0) goto LAB_140019a3c;
LAB_1400192e5:
          if ((uVar20 & 4) == 0) goto LAB_1400192ee;
LAB_140019a4d:
          uVar2 = vextractps_avx(auVar93._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar56) = uVar2;
          if ((uVar20 & 8) != 0) goto LAB_140019a5e;
LAB_1400192f7:
          auVar116 = auVar93._16_16_;
        }
        if ((uVar20 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar48) = auVar116._0_4_;
        }
        if ((uVar20 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 8 + lVar29) = uVar2;
        }
        if ((uVar20 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 8 + lVar24) = uVar2;
        }
        if (cVar18 < '\0') {
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 8 + lVar70) = uVar2;
        }
        if ((uVar20 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar274;
        }
        if ((uVar20 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar64) = uVar275;
        }
        if ((uVar20 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar56) = uVar3;
        }
        if ((uVar20 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar51) = uVar4;
        }
        if ((uVar20 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar48) = uVar269;
        }
        if ((uVar20 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar270;
        }
        if ((uVar20 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar24) = uVar271;
        }
        if (cVar18 < '\0') {
          *(uint *)(param_1 + 0xc + lVar70) = uVar273;
        }
      }
      uVar74 = uVar74 + 8;
      uVar163 = uVar163 + 0x20;
      pauVar21 = pauVar21 + 3;
    } while ((int)uVar74 < (int)(uVar62 & 0xfffffff8));
  }
  uVar62 = (uint)uVar74;
  if ((int)param_7 <= (int)uVar62) {
    return;
  }
  auVar116 = vpshufd_avx(ZEXT416(uVar62),0);
  auVar96._16_16_ = auVar116;
  auVar96._0_16_ = auVar116;
  auVar190 = vpshufd_avx(ZEXT416(param_7),0);
  auVar265 = SUB3216(auVar96 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar272 = SUB3216(auVar96 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar116 = vpcmpgtd_avx(auVar190,auVar272);
  auVar77 = vpcmpgtd_avx(auVar190,auVar265);
  auVar219._16_16_ = auVar116;
  auVar219._0_16_ = auVar77;
  uVar74 = uVar74 & 0xffffffff;
  pauVar21 = (undefined1 (*) [32])(param_2 + uVar74 * 0xc);
  iVar27 = vmovmskps_avx(auVar219);
  if (iVar27 == 0xff) {
    auVar126 = pauVar21[2];
    auVar167._16_16_ = *(undefined1 (*) [16])*pauVar21;
    auVar167._0_16_ = *(undefined1 (*) [16])(*pauVar21 + 0x10);
    auVar85 = vblendps_avx(*pauVar21,auVar167,0x24);
    auVar171 = vpermilps_avx(auVar85,
                             ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                            );
    uVar2 = *(undefined4 *)(pauVar21[1] + 4);
    auVar246._4_4_ = uVar2;
    auVar246._0_4_ = uVar2;
    auVar246._8_4_ = uVar2;
    auVar246._12_4_ = uVar2;
    uVar2 = *(undefined4 *)(pauVar21[1] + 8);
    auVar246._20_4_ = uVar2;
    auVar246._16_4_ = uVar2;
    auVar246._24_4_ = uVar2;
    auVar246._28_4_ = uVar2;
    auVar232._16_16_ = *(undefined1 (*) [16])pauVar21[2];
    auVar232._0_16_ = *(undefined1 (*) [16])(pauVar21[2] + 0x10);
    auVar85 = vblendps_avx(auVar232,auVar126,0x44);
    auVar155 = vpermilps_avx(auVar85,
                             ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                            );
    auVar85 = vblendps_avx(auVar171,auVar246,0x88);
    auVar191 = vshufps_avx(*(undefined1 (*) [16])(pauVar21[1] + 0x10),
                           *(undefined1 (*) [16])(pauVar21[1] + 0x10),0xec);
    uVar2 = *(undefined4 *)(pauVar21[1] + 0x14);
    auVar168._20_4_ = uVar2;
    auVar168._16_4_ = uVar2;
    auVar168._24_4_ = uVar2;
    auVar168._28_4_ = uVar2;
    auVar168._0_16_ = auVar191;
    auVar171 = vblendps_avx(auVar155,auVar168,0x13);
    auVar166._16_16_ = auVar171._0_16_;
    auVar166._0_16_ = auVar85._0_16_;
    auVar155 = vperm2f128_avx(auVar85,auVar171,0x31);
    auVar85 = vblendps_avx(pauVar21[1],*pauVar21,0x24);
    auVar85 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar21 + 0x10)),auVar85,0x21);
    auVar85 = vshufps_avx(auVar85,pauVar21[1],0xc2);
    auVar171 = vshufps_avx(auVar232,auVar126,0xc4);
    auVar85 = vblendps_avx(auVar85,auVar171,0xe0);
  }
  else {
    auVar191 = vpcmpgtd_avx(auVar190,auVar272);
    auVar227 = vpcmpgtd_avx(auVar190,auVar265);
    uVar163 = auVar227._0_4_;
    auVar83._0_4_ =
         uVar163 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
    uVar20 = auVar227._4_4_;
    auVar83._4_4_ = uVar20 & _UNK_150b50b04;
    uVar172 = auVar227._8_4_;
    auVar83._8_4_ = uVar172 & _UNK_150b50b08;
    uVar173 = auVar227._12_4_;
    auVar83._12_4_ = uVar173 & _UNK_150b50b0c;
    uVar174 = auVar191._0_4_;
    vextractps_avx(auVar83,1);
    vextractps_avx(auVar83,2);
    vextractps_avx(auVar83,3);
    auVar191._0_4_ =
         uVar163 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
    auVar191._4_4_ = uVar20 & _UNK_150b50b24;
    auVar191._8_4_ = uVar172 & _UNK_150b50b28;
    auVar191._12_4_ = uVar173 & _UNK_150b50b2c;
    vextractps_avx(auVar191,1);
    vextractps_avx(auVar191,2);
    vextractps_avx(auVar191,3);
    auVar227._0_4_ =
         uVar163 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
    auVar227._4_4_ = uVar20 & _UNK_150b50b44;
    auVar227._8_4_ = uVar172 & _UNK_150b50b48;
    auVar227._12_4_ = uVar173 & _UNK_150b50b4c;
    vextractps_avx(auVar227,1);
    vextractps_avx(auVar227,2);
    auVar166 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar21 + (uVar174 & _UNK_150b50b10)),
                                  ZEXT416(*(uint *)*pauVar21)));
    vextractps_avx(auVar227,3);
    auVar155 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar21 + (uVar174 & _UNK_150b50b30)),
                                  ZEXT416(*(uint *)(*pauVar21 + auVar191._0_4_))));
    auVar85 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar21 + (uVar174 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar21 + auVar227._0_4_))));
  }
  auVar272 = vpcmpgtd_avx(auVar190,auVar272);
  auVar191 = vpcmpgtd_avx(auVar190,auVar265);
  auVar131._16_16_ = auVar272;
  auVar131._0_16_ = auVar191;
  auVar171 = vmaskmovps_avx(auVar131,*(undefined1 (*) [32])(param_3 + (int)(uVar62 << 2)));
  auVar126 = vmaskmovps_avx(auVar131,*(undefined1 (*) [32])(param_4 + (int)(uVar62 << 2)));
  if ((~(byte)iVar27 & 0x81) == 0) {
    auVar84._8_8_ = 0;
    auVar84._0_8_ = *(ulonglong *)(param_5 + uVar74);
  }
  else {
    pbVar12 = (byte *)(param_5 + uVar74);
    auVar191 = vpcmpgtd_avx(auVar190,auVar265);
    auVar132._16_16_ = auVar272;
    auVar132._0_16_ = auVar191;
    uVar62 = vmovmskps_avx(auVar132);
    if ((uVar62 & 1) != 0) {
      auVar84 = ZEXT116(*pbVar12);
    }
    if ((uVar62 & 2) != 0) {
      auVar191 = vpinsrb_avx(auVar84,(uint)pbVar12[1],1);
      auVar84 = vpblendw_avx(auVar191,auVar84,0xe);
    }
    if ((uVar62 & 4) != 0) {
      auVar191 = vpmovzxwd_avx(auVar84);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[2],2);
      auVar191 = vpinsrb_avx(auVar191,(uint)auVar84[3],3);
      auVar84 = vpblendw_avx(auVar191,auVar84,0xc);
    }
    if ((uVar62 & 8) != 0) {
      auVar191 = vpmovzxwd_avx(auVar84);
      auVar191 = vpinsrb_avx(auVar191,(uint)auVar84[2],2);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[3],3);
      auVar84 = vpblendw_avx(auVar191,auVar84,0xc);
    }
    if ((uVar62 & 0x10) != 0) {
      auVar191 = vpshufb_avx(auVar84,___xmm_80800706808005048080030203020100);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[4],4);
      auVar191 = vpinsrb_avx(auVar191,(uint)auVar84[5],5);
      auVar84 = vpblendw_avx(auVar191,auVar84,8);
    }
    if ((uVar62 & 0x20) != 0) {
      auVar191 = vpshufb_avx(auVar84,___xmm_80800706808005048080030403020100);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[5],5);
      auVar84 = vpblendw_avx(auVar191,auVar84,8);
    }
    if ((uVar62 & 0x40) != 0) {
      auVar191 = vpshufb_avx(auVar84,___xmm_80800706808005048080050403020100);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[6],6);
      auVar84 = vpinsrb_avx(auVar191,(uint)auVar84[7],7);
    }
    if ((uVar62 & 0x80) != 0) {
      auVar84 = vpshufb_avx(auVar84,___xmm_80800706808005048006050403020100);
      auVar84 = vpinsrb_avx(auVar84,(uint)pbVar12[7],7);
    }
  }
  auVar82 = vpslld_avx(auVar155._16_16_,4);
  auVar14 = vpcmpgtd_avx(auVar190,auVar265);
  auVar202 = vpand_avx(auVar272,auVar82);
  lVar23 = param_1 + auVar202._0_4_;
  auVar191 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar202._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar202._4_4_)),0x10);
  auVar267._16_16_ = auVar272;
  auVar267._0_16_ = auVar14;
  uVar263 = auVar14._0_4_;
  auVar201._0_4_ = uVar263 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004
  ;
  uVar268 = auVar14._4_4_;
  auVar201._4_4_ = uVar268 & _UNK_150b50d44;
  uVar269 = auVar14._8_4_;
  auVar201._8_4_ = uVar269 & _UNK_150b50d48;
  uVar270 = auVar14._12_4_;
  auVar201._12_4_ = uVar270 & _UNK_150b50d4c;
  uVar271 = auVar272._0_4_;
  uVar273 = auVar272._4_4_;
  uVar274 = auVar272._8_4_;
  uVar275 = auVar272._12_4_;
  uVar58 = (ulonglong)(uVar271 & _UNK_150b50d50);
  uVar69 = (ulonglong)(uVar273 & _UNK_150b50d54);
  uVar25 = (ulonglong)(uVar274 & _UNK_150b50d58);
  uVar75 = (ulonglong)(uVar275 & _UNK_150b50d5c);
  uVar32 = (ulonglong)(uVar273 & _UNK_150b50d74);
  uVar72 = (ulonglong)(uVar274 & _UNK_150b50d78);
  uVar53 = (ulonglong)(uVar275 & _UNK_150b50d7c);
  uVar59 = (ulonglong)(uVar271 & _UNK_150b50d70);
  auVar78._0_4_ = uVar263 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar78._4_4_ = uVar268 & _UNK_150b50d84;
  auVar78._8_4_ = uVar269 & _UNK_150b50d88;
  auVar78._12_4_ = uVar270 & _UNK_150b50d8c;
  uVar60 = (ulonglong)(uVar271 & _UNK_150b50d90);
  uVar37 = (ulonglong)(uVar273 & _UNK_150b50d94);
  uVar40 = (ulonglong)(uVar274 & _UNK_150b50d98);
  uVar65 = (ulonglong)(uVar275 & _UNK_150b50d9c);
  lVar24 = param_1 + auVar202._4_4_;
  auVar227 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar23)),ZEXT416(*(uint *)(uVar69 + lVar24)),
                           0x10);
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar59 + lVar23)),ZEXT416(*(uint *)(uVar32 + lVar24)),
                          0x10);
  auVar13 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar23)),ZEXT416(*(uint *)(uVar37 + lVar24)),
                          0x10);
  auVar191 = vinsertps_avx(auVar191,ZEXT416(*(uint *)(param_1 + auVar202._8_4_)),0x20);
  lVar23 = param_1 + auVar202._8_4_;
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar25 + lVar23)),0x20);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar72 + lVar23)),0x20);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(uVar40 + lVar23)),0x20);
  auVar191 = vinsertps_avx(auVar191,ZEXT416(*(uint *)(param_1 + auVar202._12_4_)),0x30);
  lVar23 = param_1 + auVar202._12_4_;
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar75 + lVar23)),0x30);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar53 + lVar23)),0x30);
  auVar152 = vpslld_avx(auVar155._0_16_,4);
  auVar125 = vpand_avx(auVar14,auVar152);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(uVar65 + lVar23)),0x30);
  uVar62 = vextractps_avx(auVar201,1);
  uVar66 = (ulonglong)uVar62;
  uVar62 = vextractps_avx(auVar201,2);
  uVar41 = (ulonglong)uVar62;
  uVar22 = (ulonglong)auVar201._0_4_;
  uVar73 = (ulonglong)auVar201._12_4_;
  lVar23 = param_1 + auVar125._0_4_;
  auVar202 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar125._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar125._4_4_)),0x10);
  lVar24 = param_1 + auVar125._4_4_;
  uVar16 = (ulonglong)
           (uVar263 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008);
  uVar74 = (ulonglong)(uVar268 & _UNK_150b50d64);
  uVar33 = (ulonglong)(uVar269 & _UNK_150b50d68);
  uVar38 = (ulonglong)(uVar270 & _UNK_150b50d6c);
  auVar201 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar23)),ZEXT416(*(uint *)(uVar66 + lVar24)),
                           0x10);
  auVar178 = vinsertps_avx(ZEXT416(*(uint *)(uVar16 + lVar23)),ZEXT416(*(uint *)(uVar74 + lVar24)),
                           0x10);
  uVar62 = vextractps_avx(auVar78,1);
  uVar61 = (ulonglong)uVar62;
  uVar62 = vextractps_avx(auVar78,2);
  uVar67 = (ulonglong)uVar62;
  uVar62 = vextractps_avx(auVar78,3);
  uVar54 = (ulonglong)uVar62;
  uVar17 = (ulonglong)auVar78._0_4_;
  auVar78 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar23)),ZEXT416(*(uint *)(uVar61 + lVar24)),
                          0x10);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(param_1 + auVar125._8_4_)),0x20);
  lVar23 = param_1 + auVar125._8_4_;
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar41 + lVar23)),0x20);
  auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)(uVar33 + lVar23)),0x20);
  auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(uVar67 + lVar23)),0x20);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(param_1 + auVar125._12_4_)),0x30);
  lVar23 = param_1 + auVar125._12_4_;
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar73 + lVar23)),0x30);
  auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)(uVar38 + lVar23)),0x30);
  auVar251._16_16_ = auVar191;
  auVar251._0_16_ = auVar202;
  auVar191 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(uVar54 + lVar23)),0x30);
  auVar244._16_16_ = auVar227;
  auVar244._0_16_ = auVar201;
  auVar204._16_16_ = auVar83;
  auVar204._0_16_ = auVar178;
  auVar125 = vpslld_avx(auVar85._0_16_,4);
  auVar153 = vpslld_avx(auVar85._16_16_,4);
  auVar201 = vpand_avx(auVar14,auVar125);
  lVar23 = param_1 + auVar201._0_4_;
  auVar227 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar201._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar201._4_4_)),0x10);
  lVar24 = param_1 + auVar201._4_4_;
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(param_1 + auVar201._8_4_)),0x20);
  lVar28 = param_1 + auVar201._8_4_;
  auVar85 = vmaskmovps_avx(auVar267,auVar251);
  auVar202 = vpand_avx(auVar272,auVar153);
  lVar29 = param_1 + auVar202._0_4_;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar202._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar202._4_4_)),0x10);
  lVar30 = param_1 + auVar202._4_4_;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_1 + auVar202._8_4_)),0x20);
  lVar31 = param_1 + auVar202._8_4_;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_1 + auVar202._12_4_)),0x30);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(param_1 + auVar201._12_4_)),0x30);
  auVar155 = vmaskmovps_avx(auVar267,auVar244);
  lVar34 = param_1 + auVar202._12_4_;
  auVar202 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar29)),ZEXT416(*(uint *)(uVar69 + lVar30)),
                           0x10);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(uVar25 + lVar31)),0x20);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(uVar75 + lVar34)),0x30);
  auVar86 = vmaskmovps_avx(auVar267,auVar204);
  lVar35 = param_1 + auVar201._12_4_;
  auVar201 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar23)),ZEXT416(*(uint *)(uVar66 + lVar24)),
                           0x10);
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar41 + lVar28)),0x20);
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar73 + lVar35)),0x30);
  auVar97._16_16_ = auVar83;
  auVar97._0_16_ = auVar227;
  auVar227 = vinsertps_avx(ZEXT416(*(uint *)(uVar59 + lVar29)),ZEXT416(*(uint *)(uVar32 + lVar30)),
                           0x10);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar72 + lVar31)),0x20);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar53 + lVar34)),0x30);
  auVar158._16_16_ = auVar202;
  auVar158._0_16_ = auVar201;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar16 + lVar23)),ZEXT416(*(uint *)(uVar74 + lVar24)),
                          0x10);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar33 + lVar28)),0x20);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar38 + lVar35)),0x30);
  auVar133._16_16_ = auVar227;
  auVar133._0_16_ = auVar83;
  auVar227 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar29)),ZEXT416(*(uint *)(uVar37 + lVar30)),
                           0x10);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar40 + lVar31)),0x20);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar65 + lVar34)),0x30);
  auVar87 = vmaskmovps_avx(auVar267,auVar97);
  auVar164 = vmaskmovps_avx(auVar267,auVar158);
  auVar88 = vmaskmovps_avx(auVar267,auVar133);
  auVar78 = vpslld_avx(auVar166._16_16_,4);
  auVar202 = vpand_avx(auVar272,auVar78);
  lVar29 = param_1 + auVar202._0_4_;
  auVar272 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar202._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar202._4_4_)),0x10);
  lVar30 = param_1 + auVar202._4_4_;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar29)),ZEXT416(*(uint *)(uVar69 + lVar30)),
                          0x10);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(param_1 + auVar202._8_4_)),0x20);
  lVar31 = param_1 + auVar202._8_4_;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar25 + lVar31)),0x20);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(param_1 + auVar202._12_4_)),0x30);
  lVar34 = param_1 + auVar202._12_4_;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar75 + lVar34)),0x30);
  auVar154 = vpslld_avx(auVar166._0_16_,4);
  auVar178 = vpand_avx(auVar14,auVar154);
  lVar36 = param_1 + auVar178._0_4_;
  auVar202 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar178._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar178._4_4_)),0x10);
  lVar39 = param_1 + auVar178._4_4_;
  auVar201 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar36)),ZEXT416(*(uint *)(uVar66 + lVar39)),
                           0x10);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(param_1 + auVar178._8_4_)),0x20);
  lVar47 = param_1 + auVar178._8_4_;
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar41 + lVar47)),0x20);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(param_1 + auVar178._12_4_)),0x30);
  auVar183._16_16_ = auVar13;
  auVar183._0_16_ = auVar191;
  lVar48 = param_1 + auVar178._12_4_;
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar73 + lVar48)),0x30);
  auVar134._16_16_ = auVar272;
  auVar134._0_16_ = auVar202;
  auVar272 = vinsertps_avx(ZEXT416(*(uint *)(uVar59 + lVar29)),ZEXT416(*(uint *)(uVar32 + lVar30)),
                           0x10);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(uVar72 + lVar31)),0x20);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(uVar53 + lVar34)),0x30);
  auVar98._16_16_ = auVar83;
  auVar98._0_16_ = auVar201;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar16 + lVar36)),ZEXT416(*(uint *)(uVar74 + lVar39)),
                          0x10);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar33 + lVar47)),0x20);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar38 + lVar48)),0x30);
  auVar159._16_16_ = auVar272;
  auVar159._0_16_ = auVar83;
  auVar272 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar23)),ZEXT416(*(uint *)(uVar61 + lVar24)),
                           0x10);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(uVar67 + lVar28)),0x20);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(uVar54 + lVar35)),0x30);
  auVar89 = vmaskmovps_avx(auVar267,auVar134);
  auVar127 = vmaskmovps_avx(auVar267,auVar98);
  auVar165 = vmaskmovps_avx(auVar267,auVar159);
  auVar205._16_16_ = auVar227;
  auVar205._0_16_ = auVar272;
  auVar179 = vsubps_avx(auVar85,auVar87);
  auVar180 = vsubps_avx(auVar155,auVar164);
  fVar149 = auVar171._0_4_;
  fVar151 = auVar171._4_4_;
  fVar194 = auVar171._8_4_;
  fVar195 = auVar171._12_4_;
  fVar196 = auVar171._16_4_;
  fVar197 = auVar171._20_4_;
  fVar198 = auVar171._24_4_;
  fVar199 = auVar171._28_4_;
  auVar169._0_4_ = auVar87._0_4_ + fVar149 * auVar179._0_4_;
  auVar169._4_4_ = auVar87._4_4_ + fVar151 * auVar179._4_4_;
  auVar169._8_4_ = auVar87._8_4_ + fVar194 * auVar179._8_4_;
  auVar169._12_4_ = auVar87._12_4_ + fVar195 * auVar179._12_4_;
  auVar169._16_4_ = auVar87._16_4_ + fVar196 * auVar179._16_4_;
  auVar169._20_4_ = auVar87._20_4_ + fVar197 * auVar179._20_4_;
  auVar169._24_4_ = auVar87._24_4_ + fVar198 * auVar179._24_4_;
  auVar169._28_4_ = auVar87._28_4_ + fVar199 * auVar179._28_4_;
  fVar214 = auVar164._0_4_;
  auVar187._0_4_ = fVar214 + fVar149 * auVar180._0_4_;
  fVar216 = auVar164._4_4_;
  auVar187._4_4_ = fVar216 + fVar151 * auVar180._4_4_;
  fVar124 = auVar164._8_4_;
  auVar187._8_4_ = fVar124 + fVar194 * auVar180._8_4_;
  fVar139 = auVar164._12_4_;
  auVar187._12_4_ = fVar139 + fVar195 * auVar180._12_4_;
  fVar141 = auVar164._16_4_;
  auVar187._16_4_ = fVar141 + fVar196 * auVar180._16_4_;
  fVar143 = auVar164._20_4_;
  auVar187._20_4_ = fVar143 + fVar197 * auVar180._20_4_;
  fVar145 = auVar164._24_4_;
  auVar187._24_4_ = fVar145 + fVar198 * auVar180._24_4_;
  fVar147 = auVar164._28_4_;
  auVar187._28_4_ = fVar147 + fVar199 * auVar180._28_4_;
  auVar99._4_4_ = __real_3f800000;
  auVar99._0_4_ = __real_3f800000;
  auVar99._8_4_ = __real_3f800000;
  auVar99._12_4_ = __real_3f800000;
  auVar99._16_4_ = __real_3f800000;
  auVar99._20_4_ = __real_3f800000;
  auVar99._24_4_ = __real_3f800000;
  auVar99._28_4_ = __real_3f800000;
  auVar182 = vsubps_avx(auVar99,auVar171);
  auVar171 = vmaxps_avx(auVar171,auVar182);
  auVar100._0_4_ = auVar171._0_4_ + __real_3f800000;
  auVar100._4_4_ = auVar171._4_4_ + __real_3f800000;
  auVar100._8_4_ = auVar171._8_4_ + __real_3f800000;
  auVar100._12_4_ = auVar171._12_4_ + __real_3f800000;
  auVar100._16_4_ = auVar171._16_4_ + __real_3f800000;
  auVar100._20_4_ = auVar171._20_4_ + __real_3f800000;
  auVar100._24_4_ = auVar171._24_4_ + __real_3f800000;
  auVar100._28_4_ = auVar171._28_4_ + __real_3f800000;
  auVar135._4_4_ = __real_40000000;
  auVar135._0_4_ = __real_40000000;
  auVar135._8_4_ = __real_40000000;
  auVar135._12_4_ = __real_40000000;
  auVar135._16_4_ = __real_40000000;
  auVar135._20_4_ = __real_40000000;
  auVar135._24_4_ = __real_40000000;
  auVar135._28_4_ = __real_40000000;
  auVar179 = vdivps_avx(auVar135,auVar100);
  auVar83 = vpmovzxbd_avx(auVar84);
  auVar83 = vpslld_avx(auVar83,2);
  auVar202 = vpunpckhdq_avx(auVar83,ZEXT416(0) << 0x20);
  auVar83 = vpmovzxdq_avx(auVar83);
  auVar101._16_16_ = auVar202;
  auVar101._0_16_ = auVar83;
  auVar83 = vpmovsxdq_avx(auVar77);
  auVar77 = vshufps_avx(auVar77,auVar77,0xfa);
  auVar160._16_16_ = auVar77;
  auVar160._0_16_ = auVar83;
  auVar171 = vblendvps_avx(ZEXT832(0) << 0x20,auVar101,auVar160);
  auVar84 = vpshufd_avx(auVar84,0x55);
  auVar84 = vpmovzxbd_avx(auVar84);
  auVar84 = vpslld_avx(auVar84,2);
  auVar77 = vpunpckhdq_avx(auVar84,ZEXT416(0) << 0x20);
  auVar84 = vpmovzxdq_avx(auVar84);
  auVar102._16_16_ = auVar77;
  auVar102._0_16_ = auVar84;
  auVar84 = vpmovsxdq_avx(auVar116);
  auVar116 = vpshufd_avx(auVar116,0xfa);
  auVar136._16_16_ = auVar116;
  auVar136._0_16_ = auVar84;
  auVar164 = vblendvps_avx(ZEXT832(0) << 0x20,auVar102,auVar136);
  auVar84 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar29)),ZEXT416(*(uint *)(uVar37 + lVar30)),
                          0x10);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(uVar40 + lVar31)),0x20);
  auVar180 = vsubps_avx(auVar86,auVar88);
  fVar213 = auVar88._0_4_;
  auVar262._0_4_ = fVar213 + fVar149 * auVar180._0_4_;
  fVar215 = auVar88._4_4_;
  auVar262._4_4_ = fVar215 + fVar151 * auVar180._4_4_;
  fVar217 = auVar88._8_4_;
  auVar262._8_4_ = fVar217 + fVar194 * auVar180._8_4_;
  fVar220 = auVar88._12_4_;
  auVar262._12_4_ = fVar220 + fVar195 * auVar180._12_4_;
  fVar221 = auVar88._16_4_;
  auVar262._16_4_ = fVar221 + fVar196 * auVar180._16_4_;
  fVar222 = auVar88._20_4_;
  auVar262._20_4_ = fVar222 + fVar197 * auVar180._20_4_;
  fVar223 = auVar88._24_4_;
  auVar262._24_4_ = fVar223 + fVar198 * auVar180._24_4_;
  fVar224 = auVar88._28_4_;
  auVar262._28_4_ = fVar224 + fVar199 * auVar180._28_4_;
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(uVar65 + lVar34)),0x30);
  auVar116 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar36)),ZEXT416(*(uint *)(uVar61 + lVar39)),
                           0x10);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)(uVar67 + lVar47)),0x20);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)(uVar54 + lVar48)),0x30);
  auVar77 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + auVar164._0_8_)),
                          ZEXT416(*(uint *)(param_6 + auVar164._8_8_)),0x10);
  auVar77 = vinsertps_avx(auVar77,ZEXT416(*(uint *)(param_6 + auVar164._16_8_)),0x20);
  auVar77 = vinsertps_avx(auVar77,ZEXT416(*(uint *)(param_6 + auVar164._24_8_)),0x30);
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + auVar171._0_8_)),
                          ZEXT416(*(uint *)(param_6 + auVar171._8_8_)),0x10);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_6 + auVar171._16_8_)),0x20);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_6 + auVar171._24_8_)),0x30);
  auVar171 = vsubps_avx(auVar89,auVar169);
  auVar164 = vsubps_avx(auVar127,auVar187);
  auVar88 = vsubps_avx(auVar165,auVar262);
  auVar188._0_4_ =
       auVar88._0_4_ * auVar88._0_4_ +
       auVar164._0_4_ * auVar164._0_4_ + auVar171._0_4_ * auVar171._0_4_;
  auVar188._4_4_ =
       auVar88._4_4_ * auVar88._4_4_ +
       auVar164._4_4_ * auVar164._4_4_ + auVar171._4_4_ * auVar171._4_4_;
  auVar188._8_4_ =
       auVar88._8_4_ * auVar88._8_4_ +
       auVar164._8_4_ * auVar164._8_4_ + auVar171._8_4_ * auVar171._8_4_;
  auVar188._12_4_ =
       auVar88._12_4_ * auVar88._12_4_ +
       auVar164._12_4_ * auVar164._12_4_ + auVar171._12_4_ * auVar171._12_4_;
  auVar188._16_4_ =
       auVar88._16_4_ * auVar88._16_4_ +
       auVar164._16_4_ * auVar164._16_4_ + auVar171._16_4_ * auVar171._16_4_;
  auVar188._20_4_ =
       auVar88._20_4_ * auVar88._20_4_ +
       auVar164._20_4_ * auVar164._20_4_ + auVar171._20_4_ * auVar171._20_4_;
  auVar188._24_4_ =
       auVar88._24_4_ * auVar88._24_4_ +
       auVar164._24_4_ * auVar164._24_4_ + auVar171._24_4_ * auVar171._24_4_;
  auVar188._28_4_ =
       auVar88._28_4_ * auVar88._28_4_ +
       auVar164._28_4_ * auVar164._28_4_ + auVar171._28_4_ * auVar171._28_4_;
  auVar181 = vsqrtps_avx(auVar188);
  auVar189._16_16_ = auVar84;
  auVar189._0_16_ = auVar116;
  auVar171 = vdivps_avx(auVar171,auVar181);
  auVar164 = vdivps_avx(auVar164,auVar181);
  auVar88 = vdivps_avx(auVar88,auVar181);
  auVar126 = vsubps_avx(auVar181,auVar126);
  fVar225 = auVar126._0_4_;
  fVar226 = auVar126._4_4_;
  fVar236 = auVar126._8_4_;
  fVar237 = auVar126._12_4_;
  fVar238 = auVar126._16_4_;
  fVar239 = auVar126._20_4_;
  fVar240 = auVar126._24_4_;
  fVar241 = auVar126._28_4_;
  fVar111 = auVar272._0_4_;
  fVar200 = auVar227._0_4_;
  fVar113 = auVar191._0_4_;
  fVar208 = auVar13._0_4_;
  auVar230._0_4_ = fVar149 * fVar113 + auVar182._0_4_ * fVar111;
  auVar230._4_4_ = fVar151 * auVar191._4_4_ + auVar182._4_4_ * auVar272._4_4_;
  auVar230._8_4_ = fVar194 * auVar191._8_4_ + auVar182._8_4_ * auVar272._8_4_;
  auVar230._12_4_ = fVar195 * auVar191._12_4_ + auVar182._12_4_ * auVar272._12_4_;
  auVar230._16_4_ = fVar196 * fVar208 + auVar182._16_4_ * fVar200;
  auVar230._20_4_ = fVar197 * auVar13._4_4_ + auVar182._20_4_ * auVar227._4_4_;
  auVar230._24_4_ = fVar198 * auVar13._8_4_ + auVar182._24_4_ * auVar227._8_4_;
  auVar230._28_4_ = fVar199 * auVar13._12_4_ + auVar182._28_4_ * auVar227._12_4_;
  fVar115 = auVar83._0_4_;
  auVar137._0_4_ = fVar225 * auVar171._0_4_ * fVar115;
  fVar118 = auVar83._4_4_;
  auVar137._4_4_ = fVar226 * auVar171._4_4_ * fVar118;
  fVar120 = auVar83._8_4_;
  auVar137._8_4_ = fVar236 * auVar171._8_4_ * fVar120;
  fVar122 = auVar83._12_4_;
  auVar137._12_4_ = fVar237 * auVar171._12_4_ * fVar122;
  fVar209 = auVar77._0_4_;
  auVar137._16_4_ = fVar238 * auVar171._16_4_ * fVar209;
  fVar210 = auVar77._4_4_;
  auVar137._20_4_ = fVar239 * auVar171._20_4_ * fVar210;
  fVar211 = auVar77._8_4_;
  auVar137._24_4_ = fVar240 * auVar171._24_4_ * fVar211;
  fVar212 = auVar77._12_4_;
  auVar137._28_4_ = fVar241 * auVar171._28_4_ * fVar212;
  auVar161._0_4_ = fVar225 * auVar164._0_4_ * fVar115;
  auVar161._4_4_ = fVar226 * auVar164._4_4_ * fVar118;
  auVar161._8_4_ = fVar236 * auVar164._8_4_ * fVar120;
  auVar161._12_4_ = fVar237 * auVar164._12_4_ * fVar122;
  auVar161._16_4_ = fVar238 * auVar164._16_4_ * fVar209;
  auVar161._20_4_ = fVar239 * auVar164._20_4_ * fVar210;
  auVar161._24_4_ = fVar240 * auVar164._24_4_ * fVar211;
  auVar161._28_4_ = fVar241 * auVar164._28_4_ * fVar212;
  fVar76 = auVar116._0_4_;
  auVar233._0_4_ = auVar230._0_4_ + fVar76;
  auVar233._4_4_ = auVar230._4_4_ + auVar116._4_4_;
  auVar233._8_4_ = auVar230._8_4_ + auVar116._8_4_;
  auVar233._12_4_ = auVar230._12_4_ + auVar116._12_4_;
  fVar109 = auVar84._0_4_;
  auVar233._16_4_ = auVar230._16_4_ + fVar109;
  auVar233._20_4_ = auVar230._20_4_ + auVar84._4_4_;
  auVar233._24_4_ = auVar230._24_4_ + auVar84._8_4_;
  auVar233._28_4_ = auVar230._28_4_ + auVar84._12_4_;
  auVar164 = vdivps_avx(auVar137,auVar233);
  auVar103._0_4_ = fVar225 * auVar88._0_4_ * fVar115;
  auVar103._4_4_ = fVar226 * auVar88._4_4_ * fVar118;
  auVar103._8_4_ = fVar236 * auVar88._8_4_ * fVar120;
  auVar103._12_4_ = fVar237 * auVar88._12_4_ * fVar122;
  auVar103._16_4_ = fVar238 * auVar88._16_4_ * fVar209;
  auVar103._20_4_ = fVar239 * auVar88._20_4_ * fVar210;
  auVar103._24_4_ = fVar240 * auVar88._24_4_ * fVar211;
  auVar103._28_4_ = fVar241 * auVar88._28_4_ * fVar212;
  auVar88 = vdivps_avx(auVar161,auVar233);
  auVar180 = vdivps_avx(auVar103,auVar233);
  auVar171 = vcmpps_avx(auVar230,ZEXT832(0) << 0x20,0);
  auVar126 = vcmpps_avx(auVar189,ZEXT832(0) << 0x20,0);
  auVar170._0_4_ = auVar126._0_4_ & auVar171._0_4_;
  auVar170._4_4_ = auVar126._4_4_ & auVar171._4_4_;
  auVar170._8_4_ = auVar126._8_4_ & auVar171._8_4_;
  auVar170._12_4_ = auVar126._12_4_ & auVar171._12_4_;
  auVar170._16_4_ = auVar126._16_4_ & auVar171._16_4_;
  auVar170._20_4_ = auVar126._20_4_ & auVar171._20_4_;
  auVar170._24_4_ = auVar126._24_4_ & auVar171._24_4_;
  auVar170._28_4_ = auVar126._28_4_ & auVar171._28_4_;
  auVar171 = vcmpps_avx(auVar181,
                        ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,2);
  auVar171 = auVar171 | auVar170;
  uVar62 = auVar171._0_4_;
  fVar115 = (float)(~uVar62 & auVar164._0_4_);
  uVar163 = auVar171._4_4_;
  fVar118 = (float)(~uVar163 & auVar164._4_4_);
  uVar20 = auVar171._8_4_;
  fVar120 = (float)(~uVar20 & auVar164._8_4_);
  uVar172 = auVar171._12_4_;
  fVar122 = (float)(~uVar172 & auVar164._12_4_);
  uVar173 = auVar171._16_4_;
  fVar209 = (float)(~uVar173 & auVar164._16_4_);
  uVar174 = auVar171._20_4_;
  fVar210 = (float)(~uVar174 & auVar164._20_4_);
  uVar175 = auVar171._24_4_;
  fVar211 = (float)(~uVar175 & auVar164._24_4_);
  uVar176 = auVar171._28_4_;
  fVar212 = (float)(~uVar176 & auVar164._28_4_);
  fVar225 = (float)(~uVar62 & auVar88._0_4_);
  fVar226 = (float)(~uVar163 & auVar88._4_4_);
  fVar236 = (float)(~uVar20 & auVar88._8_4_);
  fVar237 = (float)(~uVar172 & auVar88._12_4_);
  fVar238 = (float)(~uVar173 & auVar88._16_4_);
  fVar239 = (float)(~uVar174 & auVar88._20_4_);
  fVar240 = (float)(~uVar175 & auVar88._24_4_);
  fVar241 = (float)(~uVar176 & auVar88._28_4_);
  fVar248 = (float)(~uVar62 & auVar180._0_4_);
  fVar253 = (float)(~uVar163 & auVar180._4_4_);
  fVar247 = (float)(~uVar20 & auVar180._8_4_);
  fVar252 = (float)(~uVar172 & auVar180._12_4_);
  fVar254 = (float)(~uVar173 & auVar180._16_4_);
  fVar255 = (float)(~uVar174 & auVar180._20_4_);
  fVar256 = (float)(~uVar175 & auVar180._24_4_);
  fVar257 = (float)(~uVar176 & auVar180._28_4_);
  auVar171 = vcmpps_avx(ZEXT832(0) << 0x20,auVar189,1);
  auVar104._0_4_ = uVar263 & auVar171._0_4_;
  auVar104._4_4_ = uVar268 & auVar171._4_4_;
  auVar104._8_4_ = uVar269 & auVar171._8_4_;
  auVar104._12_4_ = uVar270 & auVar171._12_4_;
  auVar104._16_4_ = uVar271 & auVar171._16_4_;
  auVar104._20_4_ = uVar273 & auVar171._20_4_;
  auVar104._24_4_ = uVar274 & auVar171._24_4_;
  auVar104._28_4_ = uVar275 & auVar171._28_4_;
  uVar62 = vmovmskps_avx(auVar104);
  local_5e0 = auVar179._0_4_;
  fStack_5dc = auVar179._4_4_;
  fStack_5d8 = auVar179._8_4_;
  fStack_5d4 = auVar179._12_4_;
  fStack_5d0 = auVar179._16_4_;
  fStack_5cc = auVar179._20_4_;
  fStack_5c8 = auVar179._24_4_;
  fStack_5c4 = auVar179._28_4_;
  if (uVar62 != 0) {
    fVar258 = fVar76 * local_5e0;
    fVar259 = auVar116._4_4_ * fStack_5dc;
    fVar123 = auVar116._8_4_ * fStack_5d8;
    fVar138 = auVar116._12_4_ * fStack_5d4;
    fVar140 = fVar109 * fStack_5d0;
    fVar142 = auVar84._4_4_ * fStack_5cc;
    fVar144 = auVar84._8_4_ * fStack_5c8;
    fVar146 = auVar84._12_4_ * fStack_5c4;
    auVar105._0_4_ = fVar258 * fVar115;
    auVar105._4_4_ = fVar259 * fVar118;
    auVar105._8_4_ = fVar123 * fVar120;
    auVar105._12_4_ = fVar138 * fVar122;
    auVar105._16_4_ = fVar140 * fVar209;
    auVar105._20_4_ = fVar142 * fVar210;
    auVar105._24_4_ = fVar144 * fVar211;
    auVar105._28_4_ = fVar146 * fVar212;
    auVar171 = vsubps_avx(auVar89,auVar105);
    cVar18 = (char)uVar62;
    iVar264 = auVar154._0_4_;
    auVar77 = auVar171._0_16_;
    auVar83 = auVar171._16_16_;
    iVar27 = auVar154._4_4_;
    iVar42 = auVar154._8_4_;
    iVar43 = auVar154._12_4_;
    iVar177 = auVar78._0_4_;
    iVar44 = auVar78._4_4_;
    iVar45 = auVar78._8_4_;
    iVar46 = auVar78._12_4_;
    if ((uVar62 & 1) == 0) {
      if ((uVar62 & 2) == 0) goto LAB_14001a96f;
LAB_14001aeb4:
      uVar2 = vextractps_avx(auVar77,1);
      *(undefined4 *)(param_1 + iVar27) = uVar2;
      if ((uVar62 & 4) != 0) goto LAB_14001aecd;
LAB_14001a978:
      if ((uVar62 & 8) == 0) goto LAB_14001a981;
LAB_14001aee6:
      uVar2 = vextractps_avx(auVar77,3);
      *(undefined4 *)(param_1 + iVar43) = uVar2;
      if ((uVar62 & 0x10) != 0) goto LAB_14001af0b;
LAB_14001a996:
      if ((uVar62 & 0x20) == 0) goto LAB_14001a99f;
LAB_14001af22:
      uVar2 = vextractps_avx(auVar83,1);
      *(undefined4 *)(param_1 + iVar44) = uVar2;
      if ((uVar62 & 0x40) != 0) goto LAB_14001af3b;
LAB_14001a9a8:
      auVar234._0_4_ = fVar258 * fVar225;
      auVar234._4_4_ = fVar259 * fVar226;
      auVar234._8_4_ = fVar123 * fVar236;
      auVar234._12_4_ = fVar138 * fVar237;
      auVar234._16_4_ = fVar140 * fVar238;
      auVar234._20_4_ = fVar142 * fVar239;
      auVar234._24_4_ = fVar144 * fVar240;
      auVar234._28_4_ = fVar146 * fVar241;
      if (-1 < cVar18) goto LAB_14001a9b9;
LAB_14001af5c:
      uVar2 = vextractps_avx(auVar83,3);
      *(undefined4 *)(param_1 + iVar46) = uVar2;
      auVar171 = vsubps_avx(auVar127,auVar234);
      if ((uVar62 & 1) != 0) goto LAB_14001af83;
LAB_14001a9d0:
      if ((uVar62 & 2) == 0) goto LAB_14001a9d9;
LAB_14001af9b:
      uVar2 = vextractps_avx(auVar171._0_16_,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar2;
      if ((uVar62 & 4) != 0) goto LAB_14001afb5;
LAB_14001a9e2:
      if ((uVar62 & 8) == 0) goto LAB_14001a9eb;
LAB_14001afcf:
      uVar2 = vextractps_avx(auVar171._0_16_,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar43) = uVar2;
      auVar77 = auVar171._16_16_;
      if ((uVar62 & 0x10) != 0) goto LAB_14001afef;
LAB_14001a9fa:
      if ((uVar62 & 0x20) == 0) goto LAB_14001aa03;
LAB_14001b007:
      uVar2 = vextractps_avx(auVar77,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar44) = uVar2;
      if ((uVar62 & 0x40) != 0) goto LAB_14001b021;
LAB_14001aa0c:
      auVar235._0_4_ = fVar258 * fVar248;
      auVar235._4_4_ = fVar259 * fVar253;
      auVar235._8_4_ = fVar123 * fVar247;
      auVar235._12_4_ = fVar138 * fVar252;
      auVar235._16_4_ = fVar140 * fVar254;
      auVar235._20_4_ = fVar142 * fVar255;
      auVar235._24_4_ = fVar144 * fVar256;
      auVar235._28_4_ = fVar146 * fVar257;
      if (-1 < cVar18) goto LAB_14001aa1c;
LAB_14001b042:
      uVar2 = vextractps_avx(auVar77,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar46) = uVar2;
      auVar171 = vsubps_avx(auVar165,auVar235);
      if ((uVar62 & 1) != 0) goto LAB_14001b061;
LAB_14001aa2a:
      if ((uVar62 & 2) == 0) goto LAB_14001aa37;
LAB_14001b07d:
      uVar2 = vextractps_avx(auVar171._0_16_,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar2;
      if ((uVar62 & 4) != 0) goto LAB_14001b097;
LAB_14001aa40:
      if ((uVar62 & 8) == 0) goto LAB_14001aa49;
LAB_14001b0b1:
      uVar2 = vextractps_avx(auVar171._0_16_,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar43) = uVar2;
      auVar77 = auVar171._16_16_;
    }
    else {
      *(int *)(param_1 + iVar264) = auVar171._0_4_;
      if ((uVar62 & 2) != 0) goto LAB_14001aeb4;
LAB_14001a96f:
      if ((uVar62 & 4) == 0) goto LAB_14001a978;
LAB_14001aecd:
      uVar2 = vextractps_avx(auVar77,2);
      *(undefined4 *)(param_1 + iVar42) = uVar2;
      if ((uVar62 & 8) != 0) goto LAB_14001aee6;
LAB_14001a981:
      if ((uVar62 & 0x10) == 0) goto LAB_14001a996;
LAB_14001af0b:
      *(int *)(param_1 + iVar177) = auVar171._16_4_;
      if ((uVar62 & 0x20) != 0) goto LAB_14001af22;
LAB_14001a99f:
      if ((uVar62 & 0x40) == 0) goto LAB_14001a9a8;
LAB_14001af3b:
      uVar2 = vextractps_avx(auVar83,2);
      *(undefined4 *)(param_1 + iVar45) = uVar2;
      auVar234._0_4_ = fVar258 * fVar225;
      auVar234._4_4_ = fVar259 * fVar226;
      auVar234._8_4_ = fVar123 * fVar236;
      auVar234._12_4_ = fVar138 * fVar237;
      auVar234._16_4_ = fVar140 * fVar238;
      auVar234._20_4_ = fVar142 * fVar239;
      auVar234._24_4_ = fVar144 * fVar240;
      auVar234._28_4_ = fVar146 * fVar241;
      if (cVar18 < '\0') goto LAB_14001af5c;
LAB_14001a9b9:
      auVar171 = vsubps_avx(auVar127,auVar234);
      if ((uVar62 & 1) == 0) goto LAB_14001a9d0;
LAB_14001af83:
      *(int *)(param_1 + 4 + (longlong)iVar264) = auVar171._0_4_;
      if ((uVar62 & 2) != 0) goto LAB_14001af9b;
LAB_14001a9d9:
      if ((uVar62 & 4) == 0) goto LAB_14001a9e2;
LAB_14001afb5:
      uVar2 = vextractps_avx(auVar171._0_16_,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar42) = uVar2;
      if ((uVar62 & 8) != 0) goto LAB_14001afcf;
LAB_14001a9eb:
      auVar77 = auVar171._16_16_;
      if ((uVar62 & 0x10) == 0) goto LAB_14001a9fa;
LAB_14001afef:
      *(int *)(param_1 + 4 + (longlong)iVar177) = auVar77._0_4_;
      if ((uVar62 & 0x20) != 0) goto LAB_14001b007;
LAB_14001aa03:
      if ((uVar62 & 0x40) == 0) goto LAB_14001aa0c;
LAB_14001b021:
      uVar2 = vextractps_avx(auVar77,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar45) = uVar2;
      auVar235._0_4_ = fVar258 * fVar248;
      auVar235._4_4_ = fVar259 * fVar253;
      auVar235._8_4_ = fVar123 * fVar247;
      auVar235._12_4_ = fVar138 * fVar252;
      auVar235._16_4_ = fVar140 * fVar254;
      auVar235._20_4_ = fVar142 * fVar255;
      auVar235._24_4_ = fVar144 * fVar256;
      auVar235._28_4_ = fVar146 * fVar257;
      if (cVar18 < '\0') goto LAB_14001b042;
LAB_14001aa1c:
      auVar171 = vsubps_avx(auVar165,auVar235);
      if ((uVar62 & 1) == 0) goto LAB_14001aa2a;
LAB_14001b061:
      *(int *)(param_1 + 8 + (longlong)iVar264) = auVar171._0_4_;
      if ((uVar62 & 2) != 0) goto LAB_14001b07d;
LAB_14001aa37:
      if ((uVar62 & 4) == 0) goto LAB_14001aa40;
LAB_14001b097:
      uVar2 = vextractps_avx(auVar171._0_16_,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar42) = uVar2;
      if ((uVar62 & 8) != 0) goto LAB_14001b0b1;
LAB_14001aa49:
      auVar77 = auVar171._16_16_;
    }
    if ((uVar62 & 0x10) != 0) {
      *(int *)(param_1 + 8 + (longlong)iVar177) = auVar77._0_4_;
    }
    if ((uVar62 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar77,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar44) = uVar2;
    }
    if ((uVar62 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar77,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar45) = uVar2;
    }
    if (cVar18 < '\0') {
      uVar2 = vextractps_avx(auVar77,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar46) = uVar2;
    }
    if ((uVar62 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iVar264) = fVar76;
    }
    if ((uVar62 & 2) != 0) {
      uVar2 = vextractps_avx(auVar116,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar2;
    }
    if ((uVar62 & 4) != 0) {
      uVar2 = vextractps_avx(auVar116,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar42) = uVar2;
    }
    if ((uVar62 & 8) != 0) {
      uVar2 = vextractps_avx(auVar116,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar43) = uVar2;
    }
    if ((uVar62 & 0x10) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iVar177) = fVar109;
    }
    if ((uVar62 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar84,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar44) = uVar2;
    }
    if ((uVar62 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar84,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar45) = uVar2;
    }
    if (cVar18 < '\0') {
      uVar2 = vextractps_avx(auVar84,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar46) = uVar2;
    }
  }
  auVar84 = vpcmpgtd_avx(auVar190,auVar265);
  auVar171 = vcmpps_avx(auVar183,ZEXT832(0) << 0x20,0xc);
  auVar106._0_4_ = auVar171._0_4_ & auVar84._0_4_;
  auVar106._4_4_ = auVar171._4_4_ & auVar84._4_4_;
  auVar106._8_4_ = auVar171._8_4_ & auVar84._8_4_;
  auVar106._12_4_ = auVar171._12_4_ & auVar84._12_4_;
  auVar106._16_4_ = auVar171._16_4_ & uVar271;
  auVar106._20_4_ = auVar171._20_4_ & uVar273;
  auVar106._24_4_ = auVar171._24_4_ & uVar274;
  auVar106._28_4_ = auVar171._28_4_ & uVar275;
  uVar62 = vmovmskps_avx(auVar106);
  if (uVar62 == 0) goto LAB_14001ac80;
  fVar149 = fVar113 * local_5e0 * fVar149;
  fVar151 = auVar191._4_4_ * fStack_5dc * fVar151;
  fVar194 = auVar191._8_4_ * fStack_5d8 * fVar194;
  fVar195 = auVar191._12_4_ * fStack_5d4 * fVar195;
  fVar196 = fVar208 * fStack_5d0 * fVar196;
  fVar197 = auVar13._4_4_ * fStack_5cc * fVar197;
  fVar198 = auVar13._8_4_ * fStack_5c8 * fVar198;
  fVar199 = auVar13._12_4_ * fStack_5c4 * fVar199;
  local_1c0 = auVar85._0_4_;
  fStack_1bc = auVar85._4_4_;
  fStack_1b8 = auVar85._8_4_;
  fStack_1b4 = auVar85._12_4_;
  fStack_1b0 = auVar85._16_4_;
  fStack_1ac = auVar85._20_4_;
  fStack_1a8 = auVar85._24_4_;
  fStack_1a4 = auVar85._28_4_;
  auVar202._0_4_ = fVar115 * fVar149 + local_1c0;
  auVar202._4_4_ = fVar118 * fVar151 + fStack_1bc;
  auVar202._8_4_ = fVar120 * fVar194 + fStack_1b8;
  auVar202._12_4_ = fVar122 * fVar195 + fStack_1b4;
  auVar206._16_4_ = fVar209 * fVar196 + fStack_1b0;
  auVar206._0_16_ = auVar202;
  auVar206._20_4_ = fVar210 * fVar197 + fStack_1ac;
  auVar206._24_4_ = fVar211 * fVar198 + fStack_1a8;
  auVar206._28_4_ = fVar212 * fVar199 + fStack_1a4;
  cVar18 = (char)uVar62;
  iVar177 = auVar152._0_4_;
  auVar84 = auVar206._16_16_;
  iVar27 = auVar152._4_4_;
  iVar42 = auVar152._8_4_;
  iVar43 = auVar152._12_4_;
  local_1a0 = auVar155._0_4_;
  fStack_19c = auVar155._4_4_;
  fStack_198 = auVar155._8_4_;
  fStack_194 = auVar155._12_4_;
  fStack_190 = auVar155._16_4_;
  fStack_18c = auVar155._20_4_;
  fStack_188 = auVar155._24_4_;
  fStack_184 = auVar155._28_4_;
  local_180 = auVar86._0_4_;
  fStack_17c = auVar86._4_4_;
  fStack_178 = auVar86._8_4_;
  fStack_174 = auVar86._12_4_;
  fStack_170 = auVar86._16_4_;
  fStack_16c = auVar86._20_4_;
  fStack_168 = auVar86._24_4_;
  fStack_164 = auVar86._28_4_;
  iVar264 = auVar82._0_4_;
  iVar44 = auVar82._4_4_;
  iVar45 = auVar82._8_4_;
  iVar46 = auVar82._12_4_;
  if ((uVar62 & 1) == 0) {
    if ((uVar62 & 2) == 0) goto LAB_14001ab3e;
LAB_14001b219:
    uVar2 = vextractps_avx(auVar202,1);
    *(undefined4 *)(param_1 + iVar27) = uVar2;
    if ((uVar62 & 4) != 0) goto LAB_14001b232;
LAB_14001ab47:
    if ((uVar62 & 8) == 0) goto LAB_14001ab50;
LAB_14001b24b:
    uVar2 = vextractps_avx(auVar202,3);
    *(undefined4 *)(param_1 + iVar43) = uVar2;
    if ((uVar62 & 0x10) != 0) goto LAB_14001b270;
LAB_14001ab65:
    if ((uVar62 & 0x20) == 0) goto LAB_14001ab6e;
LAB_14001b287:
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + iVar44) = uVar2;
    if ((uVar62 & 0x40) != 0) goto LAB_14001b2a0;
LAB_14001ab77:
    if (-1 < cVar18) goto LAB_14001ab83;
LAB_14001b2bc:
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + iVar46) = uVar2;
    auVar207._0_4_ = fVar225 * fVar149 + local_1a0;
    auVar207._4_4_ = fVar226 * fVar151 + fStack_19c;
    auVar207._8_4_ = fVar236 * fVar194 + fStack_198;
    auVar207._12_4_ = fVar237 * fVar195 + fStack_194;
    auVar207._16_4_ = fVar238 * fVar196 + fStack_190;
    auVar207._20_4_ = fVar239 * fVar197 + fStack_18c;
    auVar207._24_4_ = fVar240 * fVar198 + fStack_188;
    auVar207._28_4_ = fVar241 * fVar199 + fStack_184;
    if ((uVar62 & 1) != 0) goto LAB_14001b2de;
LAB_14001ab95:
    if ((uVar62 & 2) == 0) goto LAB_14001ab9e;
LAB_14001b2f6:
    uVar2 = vextractps_avx(auVar207._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar2;
    if ((uVar62 & 4) != 0) goto LAB_14001b310;
LAB_14001aba7:
    if ((uVar62 & 8) == 0) goto LAB_14001abb0;
LAB_14001b32a:
    uVar2 = vextractps_avx(auVar207._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar43) = uVar2;
    auVar84 = auVar207._16_16_;
    if ((uVar62 & 0x10) != 0) goto LAB_14001b34a;
LAB_14001abbf:
    if ((uVar62 & 0x20) == 0) goto LAB_14001abc8;
LAB_14001b362:
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar44) = uVar2;
    if ((uVar62 & 0x40) != 0) goto LAB_14001b37c;
LAB_14001abd1:
    if (-1 < cVar18) goto LAB_14001abdd;
LAB_14001b399:
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar46) = uVar2;
    auVar193._0_4_ = fVar248 * fVar149 + local_180;
    auVar193._4_4_ = fVar253 * fVar151 + fStack_17c;
    auVar193._8_4_ = fVar247 * fVar194 + fStack_178;
    auVar193._12_4_ = fVar252 * fVar195 + fStack_174;
    auVar193._16_4_ = fVar254 * fVar196 + fStack_170;
    auVar193._20_4_ = fVar255 * fVar197 + fStack_16c;
    auVar193._24_4_ = fVar256 * fVar198 + fStack_168;
    auVar193._28_4_ = fVar257 * fVar199 + fStack_164;
    if ((uVar62 & 1) != 0) goto LAB_14001b3bc;
LAB_14001abef:
    if ((uVar62 & 2) == 0) goto LAB_14001abf8;
LAB_14001b3d4:
    uVar2 = vextractps_avx(auVar193._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar2;
    if ((uVar62 & 4) != 0) goto LAB_14001b3ee;
LAB_14001ac01:
    if ((uVar62 & 8) == 0) goto LAB_14001ac0a;
LAB_14001b408:
    uVar2 = vextractps_avx(auVar193._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar43) = uVar2;
    auVar84 = auVar193._16_16_;
  }
  else {
    *(float *)(param_1 + iVar177) = auVar202._0_4_;
    if ((uVar62 & 2) != 0) goto LAB_14001b219;
LAB_14001ab3e:
    if ((uVar62 & 4) == 0) goto LAB_14001ab47;
LAB_14001b232:
    uVar2 = vextractps_avx(auVar202,2);
    *(undefined4 *)(param_1 + iVar42) = uVar2;
    if ((uVar62 & 8) != 0) goto LAB_14001b24b;
LAB_14001ab50:
    if ((uVar62 & 0x10) == 0) goto LAB_14001ab65;
LAB_14001b270:
    *(float *)(param_1 + iVar264) = auVar206._16_4_;
    if ((uVar62 & 0x20) != 0) goto LAB_14001b287;
LAB_14001ab6e:
    if ((uVar62 & 0x40) == 0) goto LAB_14001ab77;
LAB_14001b2a0:
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + iVar45) = uVar2;
    if (cVar18 < '\0') goto LAB_14001b2bc;
LAB_14001ab83:
    auVar207._0_4_ = fVar225 * fVar149 + local_1a0;
    auVar207._4_4_ = fVar226 * fVar151 + fStack_19c;
    auVar207._8_4_ = fVar236 * fVar194 + fStack_198;
    auVar207._12_4_ = fVar237 * fVar195 + fStack_194;
    auVar207._16_4_ = fVar238 * fVar196 + fStack_190;
    auVar207._20_4_ = fVar239 * fVar197 + fStack_18c;
    auVar207._24_4_ = fVar240 * fVar198 + fStack_188;
    auVar207._28_4_ = fVar241 * fVar199 + fStack_184;
    if ((uVar62 & 1) == 0) goto LAB_14001ab95;
LAB_14001b2de:
    *(int *)(param_1 + 4 + (longlong)iVar177) = auVar207._0_4_;
    if ((uVar62 & 2) != 0) goto LAB_14001b2f6;
LAB_14001ab9e:
    if ((uVar62 & 4) == 0) goto LAB_14001aba7;
LAB_14001b310:
    uVar2 = vextractps_avx(auVar207._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar42) = uVar2;
    if ((uVar62 & 8) != 0) goto LAB_14001b32a;
LAB_14001abb0:
    auVar84 = auVar207._16_16_;
    if ((uVar62 & 0x10) == 0) goto LAB_14001abbf;
LAB_14001b34a:
    *(int *)(param_1 + 4 + (longlong)iVar264) = auVar84._0_4_;
    if ((uVar62 & 0x20) != 0) goto LAB_14001b362;
LAB_14001abc8:
    if ((uVar62 & 0x40) == 0) goto LAB_14001abd1;
LAB_14001b37c:
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar45) = uVar2;
    if (cVar18 < '\0') goto LAB_14001b399;
LAB_14001abdd:
    auVar193._0_4_ = fVar248 * fVar149 + local_180;
    auVar193._4_4_ = fVar253 * fVar151 + fStack_17c;
    auVar193._8_4_ = fVar247 * fVar194 + fStack_178;
    auVar193._12_4_ = fVar252 * fVar195 + fStack_174;
    auVar193._16_4_ = fVar254 * fVar196 + fStack_170;
    auVar193._20_4_ = fVar255 * fVar197 + fStack_16c;
    auVar193._24_4_ = fVar256 * fVar198 + fStack_168;
    auVar193._28_4_ = fVar257 * fVar199 + fStack_164;
    if ((uVar62 & 1) == 0) goto LAB_14001abef;
LAB_14001b3bc:
    *(int *)(param_1 + 8 + (longlong)iVar177) = auVar193._0_4_;
    if ((uVar62 & 2) != 0) goto LAB_14001b3d4;
LAB_14001abf8:
    if ((uVar62 & 4) == 0) goto LAB_14001ac01;
LAB_14001b3ee:
    uVar2 = vextractps_avx(auVar193._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar42) = uVar2;
    if ((uVar62 & 8) != 0) goto LAB_14001b408;
LAB_14001ac0a:
    auVar84 = auVar193._16_16_;
  }
  if ((uVar62 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar264) = auVar84._0_4_;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar44) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar45) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar46) = uVar2;
  }
  if ((uVar62 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar177) = fVar113;
  }
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar191,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar191,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar42) = uVar2;
  }
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar191,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar43) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar264) = fVar208;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar13,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar44) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar13,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar45) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar13,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar46) = uVar2;
  }
LAB_14001ac80:
  auVar84 = vpcmpgtd_avx(auVar190,auVar265);
  auVar85 = vcmpps_avx(auVar205,ZEXT1232(ZEXT812(0)),0xc);
  auVar107._0_4_ = auVar85._0_4_ & auVar84._0_4_;
  auVar107._4_4_ = auVar85._4_4_ & auVar84._4_4_;
  auVar107._8_4_ = auVar85._8_4_ & auVar84._8_4_;
  auVar107._12_4_ = auVar85._12_4_ & auVar84._12_4_;
  auVar107._16_4_ = auVar85._16_4_ & uVar271;
  auVar107._20_4_ = auVar85._20_4_ & uVar273;
  auVar107._24_4_ = auVar85._24_4_ & uVar274;
  auVar107._28_4_ = auVar85._28_4_ & uVar275;
  uVar62 = vmovmskps_avx(auVar107);
  if (uVar62 == 0) {
    return;
  }
  local_340 = auVar125._0_4_;
  iStack_33c = auVar125._4_4_;
  iStack_338 = auVar125._8_4_;
  iStack_334 = auVar125._12_4_;
  local_4f0 = auVar153._0_4_;
  iStack_4ec = auVar153._4_4_;
  iStack_4e8 = auVar153._8_4_;
  iStack_4e4 = auVar153._12_4_;
  fVar76 = fVar111 * local_5e0 * auVar182._0_4_;
  fVar109 = auVar272._4_4_ * fStack_5dc * auVar182._4_4_;
  fVar113 = auVar272._8_4_ * fStack_5d8 * auVar182._8_4_;
  fVar208 = auVar272._12_4_ * fStack_5d4 * auVar182._12_4_;
  fVar149 = fVar200 * fStack_5d0 * auVar182._16_4_;
  fVar151 = auVar227._4_4_ * fStack_5cc * auVar182._20_4_;
  fVar194 = auVar227._8_4_ * fStack_5c8 * auVar182._24_4_;
  fVar195 = auVar227._12_4_ * fStack_5c4 * auVar182._28_4_;
  auVar190._0_4_ = fVar115 * fVar76 + auVar87._0_4_;
  auVar190._4_4_ = fVar118 * fVar109 + auVar87._4_4_;
  auVar190._8_4_ = fVar120 * fVar113 + auVar87._8_4_;
  auVar190._12_4_ = fVar122 * fVar208 + auVar87._12_4_;
  auVar184._16_4_ = fVar209 * fVar149 + auVar87._16_4_;
  auVar184._0_16_ = auVar190;
  auVar184._20_4_ = fVar210 * fVar151 + auVar87._20_4_;
  auVar184._24_4_ = fVar211 * fVar194 + auVar87._24_4_;
  auVar184._28_4_ = fVar212 * fVar195 + auVar87._28_4_;
  cVar18 = (char)uVar62;
  auVar84 = auVar184._16_16_;
  if ((uVar62 & 1) != 0) {
    *(float *)(param_1 + local_340) = auVar190._0_4_;
  }
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar190,1);
    *(undefined4 *)(param_1 + iStack_33c) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar190,2);
    *(undefined4 *)(param_1 + iStack_338) = uVar2;
  }
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar190,3);
    *(undefined4 *)(param_1 + iStack_334) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(float *)(param_1 + local_4f0) = auVar184._16_4_;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + iStack_4ec) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + iStack_4e8) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + iStack_4e4) = uVar2;
    auVar185._0_4_ = fVar225 * fVar76 + fVar214;
    auVar185._4_4_ = fVar226 * fVar109 + fVar216;
    auVar185._8_4_ = fVar236 * fVar113 + fVar124;
    auVar185._12_4_ = fVar237 * fVar208 + fVar139;
    auVar185._16_4_ = fVar238 * fVar149 + fVar141;
    auVar185._20_4_ = fVar239 * fVar151 + fVar143;
    auVar185._24_4_ = fVar240 * fVar194 + fVar145;
    auVar185._28_4_ = fVar241 * fVar195 + fVar147;
  }
  else {
    auVar185._0_4_ = fVar225 * fVar76 + fVar214;
    auVar185._4_4_ = fVar226 * fVar109 + fVar216;
    auVar185._8_4_ = fVar236 * fVar113 + fVar124;
    auVar185._12_4_ = fVar237 * fVar208 + fVar139;
    auVar185._16_4_ = fVar238 * fVar149 + fVar141;
    auVar185._20_4_ = fVar239 * fVar151 + fVar143;
    auVar185._24_4_ = fVar240 * fVar194 + fVar145;
    auVar185._28_4_ = fVar241 * fVar195 + fVar147;
  }
  if ((uVar62 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_340) = auVar185._0_4_;
  }
  auVar84 = auVar185._0_16_;
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_33c) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_338) = uVar2;
  }
  auVar116 = auVar185._16_16_;
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_334) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_4f0) = auVar185._16_4_;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar116,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_4ec) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar116,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_4e8) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar116,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_4e4) = uVar2;
    auVar162._0_4_ = fVar248 * fVar76 + fVar213;
    auVar162._4_4_ = fVar253 * fVar109 + fVar215;
    auVar162._8_4_ = fVar247 * fVar113 + fVar217;
    auVar162._12_4_ = fVar252 * fVar208 + fVar220;
    auVar162._16_4_ = fVar254 * fVar149 + fVar221;
    auVar162._20_4_ = fVar255 * fVar151 + fVar222;
    auVar162._24_4_ = fVar256 * fVar194 + fVar223;
    auVar162._28_4_ = fVar257 * fVar195 + fVar224;
  }
  else {
    auVar162._0_4_ = fVar248 * fVar76 + fVar213;
    auVar162._4_4_ = fVar253 * fVar109 + fVar215;
    auVar162._8_4_ = fVar247 * fVar113 + fVar217;
    auVar162._12_4_ = fVar252 * fVar208 + fVar220;
    auVar162._16_4_ = fVar254 * fVar149 + fVar221;
    auVar162._20_4_ = fVar255 * fVar151 + fVar222;
    auVar162._24_4_ = fVar256 * fVar194 + fVar223;
    auVar162._28_4_ = fVar257 * fVar195 + fVar224;
  }
  if ((uVar62 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_340) = auVar162._0_4_;
  }
  auVar84 = auVar162._0_16_;
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_33c) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_338) = uVar2;
  }
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_334) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_4f0) = auVar162._16_4_;
  }
  if ((uVar62 & 0x20) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_4ec) = auVar162._20_4_;
  }
  if ((uVar62 & 0x40) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_4e8) = auVar162._24_4_;
  }
  if (cVar18 < '\0') {
    *(int *)(param_1 + 8 + (longlong)iStack_4e4) = auVar162._28_4_;
  }
  if ((uVar62 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_340) = fVar111;
  }
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar272,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_33c) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar272,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_338) = uVar2;
  }
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar272,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_334) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_4f0) = fVar200;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar227,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_4ec) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar227,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_4e8) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar227,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_4e4) = uVar2;
  }
  return;
}

// ApplyAxialSpringConstraints_avx @ 14001b9c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraints_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined1 (*pauVar18) [32];
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  uint uVar38;
  undefined4 uVar39;
  int iVar40;
  longlong lVar46;
  longlong lVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  longlong lVar68;
  float fVar69;
  float fVar70;
  uint uVar71;
  int iVar72;
  undefined1 auVar73 [16];
  float fVar87;
  float fVar89;
  float fVar95;
  float fVar98;
  float fVar101;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  float fVar92;
  float fVar104;
  undefined1 auVar80 [32];
  float fVar88;
  float fVar90;
  float fVar93;
  float fVar96;
  float fVar99;
  float fVar102;
  float fVar105;
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  uint uVar91;
  uint uVar94;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar97;
  uint uVar100;
  uint uVar103;
  uint uVar106;
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
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
  int iVar124;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined1 auVar125 [32];
  float fVar131;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  float fVar132;
  float fVar144;
  float fVar145;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar146;
  undefined1 auVar137 [16];
  float fVar147;
  float fVar148;
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar143 [32];
  float fVar149;
  float fVar159;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar160;
  float fVar163;
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar161 [16];
  undefined1 auVar158 [32];
  undefined1 auVar162 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  float fVar167;
  float fVar178;
  undefined1 auVar168 [16];
  float fVar176;
  float fVar177;
  float fVar179;
  float fVar181;
  float fVar182;
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  float fVar183;
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar180 [16];
  undefined1 auVar175 [32];
  float fVar184;
  float fVar194;
  undefined1 auVar185 [16];
  float fVar192;
  float fVar193;
  float fVar195;
  float fVar196;
  float fVar197;
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  float fVar198;
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  float fVar202;
  float fVar209;
  float fVar210;
  uint uVar211;
  float fVar212;
  uint uVar213;
  float fVar214;
  uint uVar215;
  float fVar216;
  uint uVar217;
  float fVar218;
  uint uVar219;
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  float fVar220;
  undefined1 auVar205 [32];
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar208 [32];
  uint uVar221;
  uint uVar227;
  uint uVar228;
  uint uVar229;
  uint uVar230;
  uint uVar232;
  uint uVar233;
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar224 [32];
  uint uVar234;
  undefined1 auVar225 [32];
  undefined1 auVar226 [32];
  undefined1 auVar231 [16];
  float fVar235;
  float fVar239;
  undefined1 auVar236 [32];
  undefined1 auVar237 [32];
  undefined1 auVar238 [32];
  undefined1 auVar240 [32];
  float fVar241;
  float fVar245;
  float fVar246;
  float fVar247;
  float fVar248;
  float fVar249;
  float fVar250;
  undefined1 auVar242 [32];
  float fVar251;
  undefined1 auVar243 [32];
  undefined1 auVar244 [32];
  undefined1 auVar252 [32];
  undefined1 auVar253 [32];
  undefined1 auVar254 [32];
  undefined1 auVar255 [32];
  undefined1 auVar256 [32];
  undefined1 auVar257 [32];
  float local_5e0;
  float fStack_5dc;
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float local_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  int local_560;
  int iStack_55c;
  int iStack_558;
  int iStack_554;
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
  int local_380;
  int iStack_37c;
  int iStack_378;
  int iStack_374;
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  undefined1 auVar142 [32];
  
  uVar29 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar29 = param_6;
  }
  if ((int)(uVar29 & 0xfffffff8) < 1) {
    uVar33 = 0;
  }
  else {
    auVar134 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    pauVar18 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar33 = 0;
    uVar71 = 0;
    do {
      auVar77 = pauVar18[-2];
      auVar76._16_16_ = *(undefined1 (*) [16])pauVar18[-2];
      auVar76._0_16_ = *(undefined1 (*) [16])*(undefined1 (*) [32])(pauVar18[-2] + 0x10);
      auVar76 = vblendps_avx(auVar77,auVar76,0x24);
      auVar76 = vpermilps_avx(auVar76,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar39 = *(undefined4 *)(pauVar18[-1] + 4);
      auVar203._4_4_ = uVar39;
      auVar203._0_4_ = uVar39;
      auVar203._8_4_ = uVar39;
      auVar203._12_4_ = uVar39;
      uVar39 = *(undefined4 *)(pauVar18[-1] + 8);
      auVar203._20_4_ = uVar39;
      auVar203._16_4_ = uVar39;
      auVar203._24_4_ = uVar39;
      auVar203._28_4_ = uVar39;
      auVar76 = vblendps_avx(auVar76,auVar203,0x88);
      auVar169._16_16_ = *(undefined1 (*) [16])*pauVar18;
      auVar169._0_16_ = *(undefined1 (*) [16])(*pauVar18 + 0x10);
      auVar79 = vblendps_avx(auVar169,*pauVar18,0x44);
      auVar79 = vpermilps_avx(auVar79,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar150 = vshufps_avx(*(undefined1 (*) [16])(pauVar18[-1] + 0x10),
                             *(undefined1 (*) [16])(pauVar18[-1] + 0x10),0xec);
      uVar39 = *(undefined4 *)(pauVar18[-1] + 0x14);
      auVar107._20_4_ = uVar39;
      auVar107._16_4_ = uVar39;
      auVar107._24_4_ = uVar39;
      auVar107._28_4_ = uVar39;
      auVar107._0_16_ = auVar150;
      auVar79 = vblendps_avx(auVar79,auVar107,0x13);
      auVar77 = vblendps_avx(pauVar18[-1],auVar77,0x24);
      auVar77 = vshufps_avx(*(undefined1 (*) [32])(pauVar18[-2] + 0x10),auVar77,0x21);
      auVar78 = vshufps_avx(auVar77,pauVar18[-1],0xc2);
      auVar77 = vshufps_avx(auVar169,*pauVar18,0xc4);
      auVar77 = vblendps_avx(auVar78,auVar77,0xe0);
      auVar150 = vpslld_avx(auVar79._16_16_,4);
      auVar164 = vpslld_avx(auVar76._16_16_,4);
      lVar34 = (longlong)auVar164._0_4_;
      lVar35 = (longlong)auVar164._4_4_;
      lVar62 = (longlong)auVar164._8_4_;
      lVar57 = (longlong)auVar164._12_4_;
      lVar50 = (longlong)auVar150._0_4_;
      lVar46 = (longlong)auVar150._4_4_;
      lVar27 = (longlong)auVar150._8_4_;
      lVar19 = (longlong)auVar150._12_4_;
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + lVar46)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar137 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar19)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + lVar35)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar62)),0x20);
      auVar162 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar57)),0x30);
      auVar252._16_16_ = auVar137;
      auVar252._0_16_ = auVar162;
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar46)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar151 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar19)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar62)),0x20);
      auVar168 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar57)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar46)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar180 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar19)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar62)),0x20);
      auVar161 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar57)),0x30);
      auVar242._16_16_ = auVar151;
      auVar242._0_16_ = auVar168;
      auVar240._16_16_ = auVar180;
      auVar240._0_16_ = auVar161;
      uVar17 = *(uint *)(param_1 + 0xc + lVar34);
      uVar91 = *(uint *)(param_1 + 0xc + lVar35);
      uVar94 = *(uint *)(param_1 + 0xc + lVar62);
      uVar97 = *(uint *)(param_1 + 0xc + lVar57);
      uVar100 = *(uint *)(param_1 + 0xc + lVar50);
      uVar103 = *(uint *)(param_1 + 0xc + lVar46);
      uVar106 = *(uint *)(param_1 + 0xc + lVar27);
      uVar211 = *(uint *)(param_1 + 0xc + lVar19);
      auVar150 = vinsertps_avx(ZEXT416(uVar100),ZEXT416(uVar103),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar106),0x20);
      auVar231 = vinsertps_avx(auVar150,ZEXT416(uVar211),0x30);
      auVar133 = vpslld_avx(auVar78._0_16_,4);
      auVar150 = vinsertps_avx(ZEXT416(uVar17),ZEXT416(uVar91),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar94),0x20);
      auVar74 = vinsertps_avx(auVar150,ZEXT416(uVar97),0x30);
      auVar164 = vpslld_avx(auVar77._16_16_,4);
      lVar58 = (longlong)auVar133._0_4_;
      lVar51 = (longlong)auVar133._4_4_;
      lVar28 = (longlong)auVar133._8_4_;
      lVar20 = (longlong)auVar164._0_4_;
      lVar64 = (longlong)auVar164._4_4_;
      lVar67 = (longlong)auVar164._8_4_;
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar20)),
                               ZEXT416(*(uint *)(param_1 + lVar64)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar67)),0x20);
      lVar65 = (longlong)auVar164._12_4_;
      auVar75 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar65)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar58)),
                               ZEXT416(*(uint *)(param_1 + lVar51)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      lVar36 = (longlong)auVar133._12_4_;
      auVar133 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar36)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar64)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar67)),0x20);
      auVar138._16_16_ = auVar231;
      auVar138._0_16_ = auVar74;
      auVar135 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar65)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar58)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar51)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      auVar186._16_16_ = auVar75;
      auVar186._0_16_ = auVar133;
      auVar136 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 4 + lVar36)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar64)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar67)),0x20);
      auVar165._16_16_ = auVar135;
      auVar165._0_16_ = auVar136;
      auVar185 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar65)),0x30);
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar58)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar51)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      auVar11 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + 8 + lVar36)),0x30);
      auVar170._16_16_ = auVar185;
      auVar170._0_16_ = auVar11;
      auVar73 = vpslld_avx(auVar76._0_16_,4);
      auVar164 = vpslld_avx(auVar79._0_16_,4);
      uVar213 = *(uint *)(param_1 + 0xc + lVar20);
      uVar215 = *(uint *)(param_1 + 0xc + lVar64);
      uVar217 = *(uint *)(param_1 + 0xc + lVar67);
      auVar150 = vinsertps_avx(ZEXT416(uVar213),ZEXT416(uVar215),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar217),0x20);
      uVar219 = *(uint *)(param_1 + 0xc + lVar65);
      auVar12 = vinsertps_avx(auVar150,ZEXT416(uVar219),0x30);
      uVar221 = *(uint *)(param_1 + 0xc + lVar58);
      uVar1 = *(uint *)(param_1 + 0xc + lVar51);
      uVar2 = *(uint *)(param_1 + 0xc + lVar28);
      auVar150 = vinsertps_avx(ZEXT416(uVar221),ZEXT416(uVar1),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar2),0x20);
      uVar3 = *(uint *)(param_1 + 0xc + lVar36);
      auVar13 = vinsertps_avx(auVar150,ZEXT416(uVar3),0x30);
      lVar68 = (longlong)auVar73._0_4_;
      lVar52 = (longlong)auVar73._4_4_;
      lVar21 = (longlong)auVar73._8_4_;
      lVar63 = (longlong)auVar164._0_4_;
      lVar30 = (longlong)auVar164._4_4_;
      lVar66 = (longlong)auVar164._8_4_;
      auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar63)),
                               ZEXT416(*(uint *)(param_1 + lVar30)),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar66)),0x20);
      lVar59 = (longlong)auVar164._12_4_;
      auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + lVar59)),0x30);
      auVar164 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar68)),
                               ZEXT416(*(uint *)(param_1 + lVar52)),0x10);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + lVar21)),0x20);
      lVar47 = (longlong)auVar73._12_4_;
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + lVar47)),0x30);
      auVar73 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar63)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x10);
      auVar73 = vinsertps_avx(auVar73,ZEXT416(*(uint *)(param_1 + 4 + lVar66)),0x20);
      auVar254._16_16_ = auVar12;
      auVar254._0_16_ = auVar13;
      auVar73 = vinsertps_avx(auVar73,ZEXT416(*(uint *)(param_1 + 4 + lVar59)),0x30);
      auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar68)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar52)),0x10);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x20);
      auVar152._16_16_ = auVar150;
      auVar152._0_16_ = auVar164;
      auVar150 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 4 + lVar47)),0x30);
      auVar164 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar63)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x10);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + 8 + lVar66)),0x20);
      auVar236._16_16_ = auVar73;
      auVar236._0_16_ = auVar150;
      auVar150 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + 8 + lVar59)),0x30);
      auVar164 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar68)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar52)),0x10);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x20);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(*(uint *)(param_1 + 8 + lVar47)),0x30);
      auVar139._16_16_ = auVar150;
      auVar139._0_16_ = auVar164;
      uVar26 = (ulonglong)uVar71;
      auVar150 = *(undefined1 (*) [16])(param_3 + uVar26);
      auVar164 = *(undefined1 (*) [16])(param_3 + 0x10 + uVar26);
      auVar199._16_16_ = auVar164;
      auVar199._0_16_ = auVar150;
      auVar76 = vsubps_avx(auVar252,auVar186);
      fVar69 = auVar150._0_4_;
      fVar87 = auVar150._4_4_;
      fVar89 = auVar150._8_4_;
      fVar92 = auVar150._12_4_;
      fVar95 = auVar164._0_4_;
      fVar98 = auVar164._4_4_;
      fVar101 = auVar164._8_4_;
      fVar104 = auVar164._12_4_;
      auVar79 = vsubps_avx(auVar242,auVar165);
      auVar77._0_4_ = auVar133._0_4_ + fVar69 * auVar76._0_4_;
      auVar77._4_4_ = auVar133._4_4_ + fVar87 * auVar76._4_4_;
      auVar77._8_4_ = auVar133._8_4_ + fVar89 * auVar76._8_4_;
      auVar77._12_4_ = auVar133._12_4_ + fVar92 * auVar76._12_4_;
      auVar77._16_4_ = auVar75._0_4_ + fVar95 * auVar76._16_4_;
      auVar77._20_4_ = auVar75._4_4_ + fVar98 * auVar76._20_4_;
      auVar77._24_4_ = auVar75._8_4_ + fVar101 * auVar76._24_4_;
      auVar77._28_4_ = auVar75._12_4_ + fVar104 * auVar76._28_4_;
      fVar128 = auVar136._0_4_;
      auVar108._0_4_ = fVar128 + fVar69 * auVar79._0_4_;
      fVar129 = auVar136._4_4_;
      auVar108._4_4_ = fVar129 + fVar87 * auVar79._4_4_;
      fVar130 = auVar136._8_4_;
      auVar108._8_4_ = fVar130 + fVar89 * auVar79._8_4_;
      fVar131 = auVar136._12_4_;
      auVar108._12_4_ = fVar131 + fVar92 * auVar79._12_4_;
      fVar132 = auVar135._0_4_;
      auVar108._16_4_ = fVar132 + fVar95 * auVar79._16_4_;
      fVar144 = auVar135._4_4_;
      auVar108._20_4_ = fVar144 + fVar98 * auVar79._20_4_;
      fVar145 = auVar135._8_4_;
      auVar108._24_4_ = fVar145 + fVar101 * auVar79._24_4_;
      fVar146 = auVar135._12_4_;
      auVar108._28_4_ = fVar146 + fVar104 * auVar79._28_4_;
      auVar76 = vsubps_avx(auVar152,auVar77);
      auVar79 = vsubps_avx(auVar236,auVar108);
      auVar77 = vsubps_avx(auVar240,auVar170);
      fVar147 = auVar11._0_4_;
      auVar109._0_4_ = fVar147 + fVar69 * auVar77._0_4_;
      fVar148 = auVar11._4_4_;
      auVar109._4_4_ = fVar148 + fVar87 * auVar77._4_4_;
      fVar149 = auVar11._8_4_;
      auVar109._8_4_ = fVar149 + fVar89 * auVar77._8_4_;
      fVar159 = auVar11._12_4_;
      auVar109._12_4_ = fVar159 + fVar92 * auVar77._12_4_;
      fVar160 = auVar185._0_4_;
      auVar109._16_4_ = fVar160 + fVar95 * auVar77._16_4_;
      fVar163 = auVar185._4_4_;
      auVar109._20_4_ = fVar163 + fVar98 * auVar77._20_4_;
      fVar235 = auVar185._8_4_;
      auVar109._24_4_ = fVar235 + fVar101 * auVar77._24_4_;
      fVar239 = auVar185._12_4_;
      auVar109._28_4_ = fVar239 + fVar104 * auVar77._28_4_;
      auVar77 = vsubps_avx(auVar139,auVar109);
      auVar78._0_4_ =
           auVar76._0_4_ * auVar76._0_4_ + auVar79._0_4_ * auVar79._0_4_ +
           auVar77._0_4_ * auVar77._0_4_;
      auVar78._4_4_ =
           auVar76._4_4_ * auVar76._4_4_ + auVar79._4_4_ * auVar79._4_4_ +
           auVar77._4_4_ * auVar77._4_4_;
      auVar78._8_4_ =
           auVar76._8_4_ * auVar76._8_4_ + auVar79._8_4_ * auVar79._8_4_ +
           auVar77._8_4_ * auVar77._8_4_;
      auVar78._12_4_ =
           auVar76._12_4_ * auVar76._12_4_ + auVar79._12_4_ * auVar79._12_4_ +
           auVar77._12_4_ * auVar77._12_4_;
      auVar78._16_4_ =
           auVar76._16_4_ * auVar76._16_4_ + auVar79._16_4_ * auVar79._16_4_ +
           auVar77._16_4_ * auVar77._16_4_;
      auVar78._20_4_ =
           auVar76._20_4_ * auVar76._20_4_ + auVar79._20_4_ * auVar79._20_4_ +
           auVar77._20_4_ * auVar77._20_4_;
      auVar78._24_4_ =
           auVar76._24_4_ * auVar76._24_4_ + auVar79._24_4_ * auVar79._24_4_ +
           auVar77._24_4_ * auVar77._24_4_;
      auVar78._28_4_ =
           auVar76._28_4_ * auVar76._28_4_ + auVar79._28_4_ * auVar79._28_4_ +
           auVar77._28_4_ * auVar77._28_4_;
      auVar222._16_16_ = *(undefined1 (*) [16])(param_4 + 0x10 + uVar26);
      auVar222._0_16_ = *(undefined1 (*) [16])(param_4 + uVar26);
      uVar16 = *(uint *)(param_1 + 0xc + lVar63);
      uVar4 = *(uint *)(param_1 + 0xc + lVar30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar66);
      auVar150 = vinsertps_avx(ZEXT416(uVar16),ZEXT416(uVar4),0x10);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar5),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar59);
      auVar150 = vinsertps_avx(auVar150,ZEXT416(uVar6),0x30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar68);
      uVar8 = *(uint *)(param_1 + 0xc + lVar52);
      uVar9 = *(uint *)(param_1 + 0xc + lVar21);
      auVar164 = vinsertps_avx(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(uVar9),0x20);
      auVar107 = vsqrtps_avx(auVar78);
      uVar10 = *(uint *)(param_1 + 0xc + lVar47);
      auVar164 = vinsertps_avx(auVar164,ZEXT416(uVar10),0x30);
      auVar76 = vdivps_avx(auVar76,auVar107);
      auVar187._16_16_ = auVar150;
      auVar187._0_16_ = auVar164;
      auVar79 = vdivps_avx(auVar79,auVar107);
      auVar77 = vdivps_avx(auVar77,auVar107);
      auVar78 = vsubps_avx(auVar107,auVar222);
      fVar70 = auVar78._0_4_;
      fVar88 = auVar78._4_4_;
      fVar90 = auVar78._8_4_;
      fVar93 = auVar78._12_4_;
      fVar96 = auVar78._16_4_;
      fVar99 = auVar78._20_4_;
      fVar102 = auVar78._24_4_;
      fVar105 = auVar78._28_4_;
      auVar208._4_4_ = __real_3f800000;
      auVar208._0_4_ = __real_3f800000;
      auVar208._8_4_ = __real_3f800000;
      auVar208._12_4_ = __real_3f800000;
      auVar208._16_4_ = __real_3f800000;
      auVar208._20_4_ = __real_3f800000;
      auVar208._24_4_ = __real_3f800000;
      auVar208._28_4_ = __real_3f800000;
      auVar108 = vsubps_avx(auVar208,auVar199);
      auVar223._0_4_ = fVar69 * auVar74._0_4_ + auVar13._0_4_ * auVar108._0_4_;
      auVar223._4_4_ = fVar87 * auVar74._4_4_ + auVar13._4_4_ * auVar108._4_4_;
      auVar223._8_4_ = fVar89 * auVar74._8_4_ + auVar13._8_4_ * auVar108._8_4_;
      auVar223._12_4_ = fVar92 * auVar74._12_4_ + auVar13._12_4_ * auVar108._12_4_;
      auVar223._16_4_ = fVar95 * auVar231._0_4_ + auVar12._0_4_ * auVar108._16_4_;
      auVar223._20_4_ = fVar98 * auVar231._4_4_ + auVar12._4_4_ * auVar108._20_4_;
      auVar223._24_4_ = fVar101 * auVar231._8_4_ + auVar12._8_4_ * auVar108._24_4_;
      auVar223._28_4_ = fVar104 * auVar231._12_4_ + auVar12._12_4_ * auVar108._28_4_;
      local_240 = auVar134._0_4_;
      fStack_23c = auVar134._4_4_;
      fStack_238 = auVar134._8_4_;
      fStack_234 = auVar134._12_4_;
      auVar204._0_4_ = auVar76._0_4_ * fVar70 * local_240;
      auVar204._4_4_ = auVar76._4_4_ * fVar88 * fStack_23c;
      auVar204._8_4_ = auVar76._8_4_ * fVar90 * fStack_238;
      auVar204._12_4_ = auVar76._12_4_ * fVar93 * fStack_234;
      auVar204._16_4_ = auVar76._16_4_ * fVar96 * local_240;
      auVar204._20_4_ = auVar76._20_4_ * fVar99 * fStack_23c;
      auVar204._24_4_ = auVar76._24_4_ * fVar102 * fStack_238;
      auVar204._28_4_ = auVar76._28_4_ * fVar105 * fStack_234;
      auVar253._0_4_ = auVar223._0_4_ + auVar164._0_4_;
      auVar253._4_4_ = auVar223._4_4_ + auVar164._4_4_;
      auVar253._8_4_ = auVar223._8_4_ + auVar164._8_4_;
      auVar253._12_4_ = auVar223._12_4_ + auVar164._12_4_;
      auVar253._16_4_ = auVar223._16_4_ + auVar150._0_4_;
      auVar253._20_4_ = auVar223._20_4_ + auVar150._4_4_;
      auVar253._24_4_ = auVar223._24_4_ + auVar150._8_4_;
      auVar253._28_4_ = auVar223._28_4_ + auVar150._12_4_;
      auVar78 = vdivps_avx(auVar204,auVar253);
      auVar110._0_4_ = local_240 * auVar79._0_4_ * fVar70;
      auVar110._4_4_ = fStack_23c * auVar79._4_4_ * fVar88;
      auVar110._8_4_ = fStack_238 * auVar79._8_4_ * fVar90;
      auVar110._12_4_ = fStack_234 * auVar79._12_4_ * fVar93;
      auVar110._16_4_ = local_240 * auVar79._16_4_ * fVar96;
      auVar110._20_4_ = fStack_23c * auVar79._20_4_ * fVar99;
      auVar110._24_4_ = fStack_238 * auVar79._24_4_ * fVar102;
      auVar110._28_4_ = fStack_234 * auVar79._28_4_ * fVar105;
      auVar208 = vdivps_avx(auVar110,auVar253);
      auVar171._0_4_ = local_240 * auVar77._0_4_ * fVar70;
      auVar171._4_4_ = fStack_23c * auVar77._4_4_ * fVar88;
      auVar171._8_4_ = fStack_238 * auVar77._8_4_ * fVar90;
      auVar171._12_4_ = fStack_234 * auVar77._12_4_ * fVar93;
      auVar171._16_4_ = local_240 * auVar77._16_4_ * fVar96;
      auVar171._20_4_ = fStack_23c * auVar77._20_4_ * fVar99;
      auVar171._24_4_ = fStack_238 * auVar77._24_4_ * fVar102;
      auVar171._28_4_ = fStack_234 * auVar77._28_4_ * fVar105;
      auVar77 = vdivps_avx(auVar171,auVar253);
      auVar76 = vcmpps_avx(auVar223,ZEXT832(0) << 0x20,0);
      auVar79 = vcmpps_avx(auVar187,ZEXT832(0) << 0x20,0);
      auVar224._0_4_ = auVar79._0_4_ & auVar76._0_4_;
      auVar224._4_4_ = auVar79._4_4_ & auVar76._4_4_;
      auVar224._8_4_ = auVar79._8_4_ & auVar76._8_4_;
      auVar224._12_4_ = auVar79._12_4_ & auVar76._12_4_;
      auVar224._16_4_ = auVar79._16_4_ & auVar76._16_4_;
      auVar224._20_4_ = auVar79._20_4_ & auVar76._20_4_;
      auVar224._24_4_ = auVar79._24_4_ & auVar76._24_4_;
      auVar224._28_4_ = auVar79._28_4_ & auVar76._28_4_;
      auVar76 = vcmpps_avx(auVar107,
                           ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,2
                          );
      auVar224 = auVar224 | auVar76;
      uVar38 = auVar224._0_4_;
      fVar241 = (float)(~uVar38 & auVar78._0_4_);
      uVar227 = auVar224._4_4_;
      fVar245 = (float)(~uVar227 & auVar78._4_4_);
      uVar228 = auVar224._8_4_;
      fVar246 = (float)(~uVar228 & auVar78._8_4_);
      uVar229 = auVar224._12_4_;
      fVar247 = (float)(~uVar229 & auVar78._12_4_);
      uVar230 = auVar224._16_4_;
      fVar248 = (float)(~uVar230 & auVar78._16_4_);
      uVar232 = auVar224._20_4_;
      fVar249 = (float)(~uVar232 & auVar78._20_4_);
      uVar233 = auVar224._24_4_;
      fVar250 = (float)(~uVar233 & auVar78._24_4_);
      uVar234 = auVar224._28_4_;
      fVar251 = (float)(~uVar234 & auVar78._28_4_);
      fVar202 = (float)(~uVar38 & auVar208._0_4_);
      fVar209 = (float)(~uVar227 & auVar208._4_4_);
      fVar210 = (float)(~uVar228 & auVar208._8_4_);
      fVar212 = (float)(~uVar229 & auVar208._12_4_);
      fVar214 = (float)(~uVar230 & auVar208._16_4_);
      fVar216 = (float)(~uVar232 & auVar208._20_4_);
      fVar218 = (float)(~uVar233 & auVar208._24_4_);
      fVar220 = (float)(~uVar234 & auVar208._28_4_);
      fVar167 = (float)(~uVar38 & auVar77._0_4_);
      fVar176 = (float)(~uVar227 & auVar77._4_4_);
      fVar177 = (float)(~uVar228 & auVar77._8_4_);
      fVar178 = (float)(~uVar229 & auVar77._12_4_);
      fVar179 = (float)(~uVar230 & auVar77._16_4_);
      fVar181 = (float)(~uVar232 & auVar77._20_4_);
      fVar182 = (float)(~uVar233 & auVar77._24_4_);
      fVar183 = (float)(~uVar234 & auVar77._28_4_);
      auVar77 = ZEXT832(0) << 0x20;
      auVar76 = vcmpps_avx(auVar77,auVar187,1);
      uVar38 = vmovmskps_avx(auVar76);
      auVar76 = vmaxps_avx(auVar199,auVar108);
      auVar111._0_4_ = auVar76._0_4_ + __real_3f800000;
      auVar111._4_4_ = auVar76._4_4_ + __real_3f800000;
      auVar111._8_4_ = auVar76._8_4_ + __real_3f800000;
      auVar111._12_4_ = auVar76._12_4_ + __real_3f800000;
      auVar111._16_4_ = auVar76._16_4_ + __real_3f800000;
      auVar111._20_4_ = auVar76._20_4_ + __real_3f800000;
      auVar111._24_4_ = auVar76._24_4_ + __real_3f800000;
      auVar111._28_4_ = auVar76._28_4_ + __real_3f800000;
      auVar79._4_4_ = __real_40000000;
      auVar79._0_4_ = __real_40000000;
      auVar79._8_4_ = __real_40000000;
      auVar79._12_4_ = __real_40000000;
      auVar79._16_4_ = __real_40000000;
      auVar79._20_4_ = __real_40000000;
      auVar79._24_4_ = __real_40000000;
      auVar79._28_4_ = __real_40000000;
      auVar76 = vdivps_avx(auVar79,auVar111);
      fVar70 = auVar76._0_4_;
      fVar88 = auVar76._4_4_;
      fVar90 = auVar76._8_4_;
      fVar93 = auVar76._12_4_;
      fVar96 = auVar76._16_4_;
      fVar99 = auVar76._20_4_;
      fVar102 = auVar76._24_4_;
      fVar105 = auVar76._28_4_;
      if (uVar38 != 0) {
        fVar184 = auVar164._0_4_ * fVar70;
        fVar192 = auVar164._4_4_ * fVar88;
        fVar193 = auVar164._8_4_ * fVar90;
        fVar194 = auVar164._12_4_ * fVar93;
        fVar195 = auVar150._0_4_ * fVar96;
        fVar196 = auVar150._4_4_ * fVar99;
        fVar197 = auVar150._8_4_ * fVar102;
        fVar198 = auVar150._12_4_ * fVar105;
        auVar112._0_4_ = fVar241 * fVar184;
        auVar112._4_4_ = fVar245 * fVar192;
        auVar112._8_4_ = fVar246 * fVar193;
        auVar112._12_4_ = fVar247 * fVar194;
        auVar112._16_4_ = fVar248 * fVar195;
        auVar112._20_4_ = fVar249 * fVar196;
        auVar112._24_4_ = fVar250 * fVar197;
        auVar112._28_4_ = fVar251 * fVar198;
        auVar76 = vsubps_avx(auVar152,auVar112);
        cVar15 = (char)uVar38;
        auVar150 = auVar76._0_16_;
        auVar164 = auVar76._16_16_;
        if ((uVar38 & 1) == 0) {
          if ((uVar38 & 2) == 0) goto LAB_14001c2de;
LAB_14001c74f:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + lVar52) = uVar39;
          if ((uVar38 & 4) != 0) goto LAB_14001c75f;
LAB_14001c2e7:
          if ((uVar38 & 8) == 0) goto LAB_14001c2f0;
LAB_14001c76f:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + lVar47) = uVar39;
          if ((uVar38 & 0x10) != 0) goto LAB_14001c785;
LAB_14001c2ff:
          if ((uVar38 & 0x20) == 0) goto LAB_14001c308;
LAB_14001c794:
          uVar39 = vextractps_avx(auVar164,1);
          *(undefined4 *)(param_1 + lVar30) = uVar39;
          if ((uVar38 & 0x40) != 0) goto LAB_14001c7a4;
LAB_14001c311:
          if (-1 < cVar15) goto LAB_14001c31a;
LAB_14001c7b4:
          uVar39 = vextractps_avx(auVar164,3);
          *(undefined4 *)(param_1 + lVar59) = uVar39;
          auVar119._0_4_ = fVar202 * fVar184;
          auVar119._4_4_ = fVar209 * fVar192;
          auVar119._8_4_ = fVar210 * fVar193;
          auVar119._12_4_ = fVar212 * fVar194;
          auVar119._16_4_ = fVar214 * fVar195;
          auVar119._20_4_ = fVar216 * fVar196;
          auVar119._24_4_ = fVar218 * fVar197;
          auVar119._28_4_ = fVar220 * fVar198;
          auVar76 = vsubps_avx(auVar236,auVar119);
          if ((uVar38 & 1) != 0) goto LAB_14001c7cc;
LAB_14001c32b:
          if ((uVar38 & 2) == 0) goto LAB_14001c334;
LAB_14001c7dc:
          uVar39 = vextractps_avx(auVar76._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar52) = uVar39;
          if ((uVar38 & 4) != 0) goto LAB_14001c7ed;
LAB_14001c33d:
          if ((uVar38 & 8) == 0) goto LAB_14001c346;
LAB_14001c7fe:
          uVar39 = vextractps_avx(auVar76._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar47) = uVar39;
          auVar150 = auVar76._16_16_;
          if ((uVar38 & 0x10) != 0) goto LAB_14001c815;
LAB_14001c355:
          if ((uVar38 & 0x20) == 0) goto LAB_14001c35e;
LAB_14001c825:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 4 + lVar30) = uVar39;
          if ((uVar38 & 0x40) != 0) goto LAB_14001c836;
LAB_14001c367:
          if (-1 < cVar15) goto LAB_14001c370;
LAB_14001c847:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 4 + lVar59) = uVar39;
          auVar120._0_4_ = fVar184 * fVar167;
          auVar120._4_4_ = fVar192 * fVar176;
          auVar120._8_4_ = fVar193 * fVar177;
          auVar120._12_4_ = fVar194 * fVar178;
          auVar120._16_4_ = fVar195 * fVar179;
          auVar120._20_4_ = fVar196 * fVar181;
          auVar120._24_4_ = fVar197 * fVar182;
          auVar120._28_4_ = fVar198 * fVar183;
          auVar76 = vsubps_avx(auVar139,auVar120);
          if ((uVar38 & 1) != 0) goto LAB_14001c860;
LAB_14001c381:
          if ((uVar38 & 2) == 0) goto LAB_14001c38a;
LAB_14001c870:
          uVar39 = vextractps_avx(auVar76._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar52) = uVar39;
          if ((uVar38 & 4) != 0) goto LAB_14001c881;
LAB_14001c393:
          if ((uVar38 & 8) == 0) goto LAB_14001c39c;
LAB_14001c892:
          uVar39 = vextractps_avx(auVar76._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar47) = uVar39;
          auVar150 = auVar76._16_16_;
        }
        else {
          *(int *)(param_1 + lVar68) = auVar76._0_4_;
          if ((uVar38 & 2) != 0) goto LAB_14001c74f;
LAB_14001c2de:
          if ((uVar38 & 4) == 0) goto LAB_14001c2e7;
LAB_14001c75f:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + lVar21) = uVar39;
          if ((uVar38 & 8) != 0) goto LAB_14001c76f;
LAB_14001c2f0:
          if ((uVar38 & 0x10) == 0) goto LAB_14001c2ff;
LAB_14001c785:
          *(int *)(param_1 + lVar63) = auVar76._16_4_;
          if ((uVar38 & 0x20) != 0) goto LAB_14001c794;
LAB_14001c308:
          if ((uVar38 & 0x40) == 0) goto LAB_14001c311;
LAB_14001c7a4:
          uVar39 = vextractps_avx(auVar164,2);
          *(undefined4 *)(param_1 + lVar66) = uVar39;
          if (cVar15 < '\0') goto LAB_14001c7b4;
LAB_14001c31a:
          auVar113._0_4_ = fVar202 * fVar184;
          auVar113._4_4_ = fVar209 * fVar192;
          auVar113._8_4_ = fVar210 * fVar193;
          auVar113._12_4_ = fVar212 * fVar194;
          auVar113._16_4_ = fVar214 * fVar195;
          auVar113._20_4_ = fVar216 * fVar196;
          auVar113._24_4_ = fVar218 * fVar197;
          auVar113._28_4_ = fVar220 * fVar198;
          auVar76 = vsubps_avx(auVar236,auVar113);
          if ((uVar38 & 1) == 0) goto LAB_14001c32b;
LAB_14001c7cc:
          *(int *)(param_1 + 4 + lVar68) = auVar76._0_4_;
          if ((uVar38 & 2) != 0) goto LAB_14001c7dc;
LAB_14001c334:
          if ((uVar38 & 4) == 0) goto LAB_14001c33d;
LAB_14001c7ed:
          uVar39 = vextractps_avx(auVar76._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar21) = uVar39;
          if ((uVar38 & 8) != 0) goto LAB_14001c7fe;
LAB_14001c346:
          auVar150 = auVar76._16_16_;
          if ((uVar38 & 0x10) == 0) goto LAB_14001c355;
LAB_14001c815:
          *(int *)(param_1 + 4 + lVar63) = auVar150._0_4_;
          if ((uVar38 & 0x20) != 0) goto LAB_14001c825;
LAB_14001c35e:
          if ((uVar38 & 0x40) == 0) goto LAB_14001c367;
LAB_14001c836:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 4 + lVar66) = uVar39;
          if (cVar15 < '\0') goto LAB_14001c847;
LAB_14001c370:
          auVar114._0_4_ = fVar184 * fVar167;
          auVar114._4_4_ = fVar192 * fVar176;
          auVar114._8_4_ = fVar193 * fVar177;
          auVar114._12_4_ = fVar194 * fVar178;
          auVar114._16_4_ = fVar195 * fVar179;
          auVar114._20_4_ = fVar196 * fVar181;
          auVar114._24_4_ = fVar197 * fVar182;
          auVar114._28_4_ = fVar198 * fVar183;
          auVar76 = vsubps_avx(auVar139,auVar114);
          if ((uVar38 & 1) == 0) goto LAB_14001c381;
LAB_14001c860:
          *(int *)(param_1 + 8 + lVar68) = auVar76._0_4_;
          if ((uVar38 & 2) != 0) goto LAB_14001c870;
LAB_14001c38a:
          if ((uVar38 & 4) == 0) goto LAB_14001c393;
LAB_14001c881:
          uVar39 = vextractps_avx(auVar76._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar21) = uVar39;
          if ((uVar38 & 8) != 0) goto LAB_14001c892;
LAB_14001c39c:
          auVar150 = auVar76._16_16_;
        }
        if ((uVar38 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar63) = auVar150._0_4_;
        }
        if ((uVar38 & 0x20) != 0) {
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 8 + lVar30) = uVar39;
        }
        if ((uVar38 & 0x40) != 0) {
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 8 + lVar66) = uVar39;
        }
        if (cVar15 < '\0') {
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 8 + lVar59) = uVar39;
        }
        if ((uVar38 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar68) = uVar7;
        }
        if ((uVar38 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar52) = uVar8;
        }
        if ((uVar38 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar9;
        }
        if ((uVar38 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar47) = uVar10;
        }
        if ((uVar38 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar63) = uVar16;
        }
        if ((uVar38 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar4;
        }
        if ((uVar38 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar66) = uVar5;
        }
        if (cVar15 < '\0') {
          *(uint *)(param_1 + 0xc + lVar59) = uVar6;
        }
      }
      auVar76 = vcmpps_avx(auVar138,auVar77,0xc);
      uVar16 = vmovmskps_avx(auVar76);
      if (uVar16 != 0) {
        fVar69 = fVar69 * auVar74._0_4_ * fVar70;
        fVar87 = fVar87 * auVar74._4_4_ * fVar88;
        fVar89 = fVar89 * auVar74._8_4_ * fVar90;
        fVar92 = fVar92 * auVar74._12_4_ * fVar93;
        fVar95 = fVar95 * auVar231._0_4_ * fVar96;
        fVar98 = fVar98 * auVar231._4_4_ * fVar99;
        fVar101 = fVar101 * auVar231._8_4_ * fVar102;
        fVar104 = fVar104 * auVar231._12_4_ * fVar105;
        local_480 = auVar162._0_4_;
        fStack_47c = auVar162._4_4_;
        fStack_478 = auVar162._8_4_;
        fStack_474 = auVar162._12_4_;
        fStack_470 = auVar137._0_4_;
        fStack_46c = auVar137._4_4_;
        fStack_468 = auVar137._8_4_;
        fStack_464 = auVar137._12_4_;
        auVar150._0_4_ = fVar241 * fVar69 + local_480;
        auVar150._4_4_ = fVar245 * fVar87 + fStack_47c;
        auVar150._8_4_ = fVar246 * fVar89 + fStack_478;
        auVar150._12_4_ = fVar247 * fVar92 + fStack_474;
        auVar115._16_4_ = fVar248 * fVar95 + fStack_470;
        auVar115._0_16_ = auVar150;
        auVar115._20_4_ = fVar249 * fVar98 + fStack_46c;
        auVar115._24_4_ = fVar250 * fVar101 + fStack_468;
        auVar115._28_4_ = fVar251 * fVar104 + fStack_464;
        cVar15 = (char)uVar16;
        if ((uVar16 & 1) != 0) {
          *(float *)(param_1 + lVar34) = auVar150._0_4_;
        }
        auVar164 = auVar115._16_16_;
        local_340 = auVar168._0_4_;
        fStack_33c = auVar168._4_4_;
        fStack_338 = auVar168._8_4_;
        fStack_334 = auVar168._12_4_;
        fStack_330 = auVar151._0_4_;
        fStack_32c = auVar151._4_4_;
        fStack_328 = auVar151._8_4_;
        fStack_324 = auVar151._12_4_;
        local_460 = auVar161._0_4_;
        fStack_45c = auVar161._4_4_;
        fStack_458 = auVar161._8_4_;
        fStack_454 = auVar161._12_4_;
        fStack_450 = auVar180._0_4_;
        fStack_44c = auVar180._4_4_;
        fStack_448 = auVar180._8_4_;
        fStack_444 = auVar180._12_4_;
        if ((uVar16 & 2) == 0) {
          if ((uVar16 & 4) == 0) goto LAB_14001c48f;
LAB_14001c9c5:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + lVar62) = uVar39;
          if ((uVar16 & 8) != 0) goto LAB_14001c9d5;
LAB_14001c498:
          if ((uVar16 & 0x10) == 0) goto LAB_14001c4a7;
LAB_14001c9eb:
          *(float *)(param_1 + lVar50) = auVar115._16_4_;
          if ((uVar16 & 0x20) != 0) goto LAB_14001c9fa;
LAB_14001c4b0:
          if ((uVar16 & 0x40) == 0) goto LAB_14001c4b9;
LAB_14001ca0a:
          uVar39 = vextractps_avx(auVar164,2);
          *(undefined4 *)(param_1 + lVar27) = uVar39;
          if (cVar15 < '\0') goto LAB_14001ca19;
LAB_14001c4c1:
          auVar116._0_4_ = fVar202 * fVar69 + local_340;
          auVar116._4_4_ = fVar209 * fVar87 + fStack_33c;
          auVar116._8_4_ = fVar210 * fVar89 + fStack_338;
          auVar116._12_4_ = fVar212 * fVar92 + fStack_334;
          auVar116._16_4_ = fVar214 * fVar95 + fStack_330;
          auVar116._20_4_ = fVar216 * fVar98 + fStack_32c;
          auVar116._24_4_ = fVar218 * fVar101 + fStack_328;
          auVar116._28_4_ = fVar220 * fVar104 + fStack_324;
          if ((uVar16 & 1) == 0) goto LAB_14001c4d7;
LAB_14001ca3e:
          *(int *)(param_1 + 4 + lVar34) = auVar116._0_4_;
          if ((uVar16 & 2) != 0) goto LAB_14001ca53;
LAB_14001c4e0:
          if ((uVar16 & 4) == 0) goto LAB_14001c4e9;
LAB_14001ca69:
          uVar39 = vextractps_avx(auVar116._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar62) = uVar39;
          if ((uVar16 & 8) != 0) goto LAB_14001ca7a;
LAB_14001c4f2:
          auVar150 = auVar116._16_16_;
          if ((uVar16 & 0x10) == 0) goto LAB_14001c501;
LAB_14001ca91:
          *(int *)(param_1 + 4 + lVar50) = auVar150._0_4_;
          if ((uVar16 & 0x20) != 0) goto LAB_14001caa1;
LAB_14001c50a:
          if ((uVar16 & 0x40) == 0) goto LAB_14001c513;
LAB_14001cab2:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 4 + lVar27) = uVar39;
          if (cVar15 < '\0') goto LAB_14001cac2;
LAB_14001c51b:
          auVar80._0_4_ = fVar167 * fVar69 + local_460;
          auVar80._4_4_ = fVar176 * fVar87 + fStack_45c;
          auVar80._8_4_ = fVar177 * fVar89 + fStack_458;
          auVar80._12_4_ = fVar178 * fVar92 + fStack_454;
          auVar80._16_4_ = fVar179 * fVar95 + fStack_450;
          auVar80._20_4_ = fVar181 * fVar98 + fStack_44c;
          auVar80._24_4_ = fVar182 * fVar101 + fStack_448;
          auVar80._28_4_ = fVar183 * fVar104 + fStack_444;
          if ((uVar16 & 1) == 0) goto LAB_14001c531;
LAB_14001cae8:
          *(int *)(param_1 + 8 + lVar34) = auVar80._0_4_;
          if ((uVar16 & 2) != 0) goto LAB_14001cafd;
LAB_14001c53a:
          if ((uVar16 & 4) == 0) goto LAB_14001c543;
LAB_14001cb13:
          uVar39 = vextractps_avx(auVar80._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar62) = uVar39;
          if ((uVar16 & 8) != 0) goto LAB_14001cb24;
LAB_14001c54c:
          auVar150 = auVar80._16_16_;
        }
        else {
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + lVar35) = uVar39;
          if ((uVar16 & 4) != 0) goto LAB_14001c9c5;
LAB_14001c48f:
          if ((uVar16 & 8) == 0) goto LAB_14001c498;
LAB_14001c9d5:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + lVar57) = uVar39;
          if ((uVar16 & 0x10) != 0) goto LAB_14001c9eb;
LAB_14001c4a7:
          if ((uVar16 & 0x20) == 0) goto LAB_14001c4b0;
LAB_14001c9fa:
          uVar39 = vextractps_avx(auVar164,1);
          *(undefined4 *)(param_1 + lVar46) = uVar39;
          if ((uVar16 & 0x40) != 0) goto LAB_14001ca0a;
LAB_14001c4b9:
          if (-1 < cVar15) goto LAB_14001c4c1;
LAB_14001ca19:
          uVar39 = vextractps_avx(auVar164,3);
          *(undefined4 *)(param_1 + lVar19) = uVar39;
          auVar116._0_4_ = fVar202 * fVar69 + local_340;
          auVar116._4_4_ = fVar209 * fVar87 + fStack_33c;
          auVar116._8_4_ = fVar210 * fVar89 + fStack_338;
          auVar116._12_4_ = fVar212 * fVar92 + fStack_334;
          auVar116._16_4_ = fVar214 * fVar95 + fStack_330;
          auVar116._20_4_ = fVar216 * fVar98 + fStack_32c;
          auVar116._24_4_ = fVar218 * fVar101 + fStack_328;
          auVar116._28_4_ = fVar220 * fVar104 + fStack_324;
          if ((uVar16 & 1) != 0) goto LAB_14001ca3e;
LAB_14001c4d7:
          if ((uVar16 & 2) == 0) goto LAB_14001c4e0;
LAB_14001ca53:
          uVar39 = vextractps_avx(auVar116._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar35) = uVar39;
          if ((uVar16 & 4) != 0) goto LAB_14001ca69;
LAB_14001c4e9:
          if ((uVar16 & 8) == 0) goto LAB_14001c4f2;
LAB_14001ca7a:
          uVar39 = vextractps_avx(auVar116._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar57) = uVar39;
          auVar150 = auVar116._16_16_;
          if ((uVar16 & 0x10) != 0) goto LAB_14001ca91;
LAB_14001c501:
          if ((uVar16 & 0x20) == 0) goto LAB_14001c50a;
LAB_14001caa1:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 4 + lVar46) = uVar39;
          if ((uVar16 & 0x40) != 0) goto LAB_14001cab2;
LAB_14001c513:
          if (-1 < cVar15) goto LAB_14001c51b;
LAB_14001cac2:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 4 + lVar19) = uVar39;
          auVar80._0_4_ = fVar167 * fVar69 + local_460;
          auVar80._4_4_ = fVar176 * fVar87 + fStack_45c;
          auVar80._8_4_ = fVar177 * fVar89 + fStack_458;
          auVar80._12_4_ = fVar178 * fVar92 + fStack_454;
          auVar80._16_4_ = fVar179 * fVar95 + fStack_450;
          auVar80._20_4_ = fVar181 * fVar98 + fStack_44c;
          auVar80._24_4_ = fVar182 * fVar101 + fStack_448;
          auVar80._28_4_ = fVar183 * fVar104 + fStack_444;
          if ((uVar16 & 1) != 0) goto LAB_14001cae8;
LAB_14001c531:
          if ((uVar16 & 2) == 0) goto LAB_14001c53a;
LAB_14001cafd:
          uVar39 = vextractps_avx(auVar80._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar35) = uVar39;
          if ((uVar16 & 4) != 0) goto LAB_14001cb13;
LAB_14001c543:
          if ((uVar16 & 8) == 0) goto LAB_14001c54c;
LAB_14001cb24:
          uVar39 = vextractps_avx(auVar80._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar57) = uVar39;
          auVar150 = auVar80._16_16_;
        }
        if ((uVar16 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar50) = auVar150._0_4_;
        }
        if ((uVar16 & 0x20) != 0) {
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 8 + lVar46) = uVar39;
        }
        if ((uVar16 & 0x40) != 0) {
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 8 + lVar27) = uVar39;
        }
        if (cVar15 < '\0') {
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 8 + lVar19) = uVar39;
        }
        if ((uVar16 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar17;
        }
        if ((uVar16 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar91;
        }
        if ((uVar16 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar62) = uVar94;
        }
        if ((uVar16 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar57) = uVar97;
        }
        if ((uVar16 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar50) = uVar100;
        }
        if ((uVar16 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar46) = uVar103;
        }
        if ((uVar16 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar27) = uVar106;
        }
        if (cVar15 < '\0') {
          *(uint *)(param_1 + 0xc + lVar19) = uVar211;
        }
      }
      auVar76 = vcmpps_avx(auVar254,auVar77,0xc);
      uVar17 = vmovmskps_avx(auVar76);
      if (uVar17 != 0) {
        fVar70 = auVar108._0_4_ * auVar13._0_4_ * fVar70;
        fVar88 = auVar108._4_4_ * auVar13._4_4_ * fVar88;
        fVar90 = auVar108._8_4_ * auVar13._8_4_ * fVar90;
        fVar93 = auVar108._12_4_ * auVar13._12_4_ * fVar93;
        fVar96 = auVar108._16_4_ * auVar12._0_4_ * fVar96;
        fVar99 = auVar108._20_4_ * auVar12._4_4_ * fVar99;
        fVar102 = auVar108._24_4_ * auVar12._8_4_ * fVar102;
        fVar105 = auVar108._28_4_ * auVar12._12_4_ * fVar105;
        auVar164._0_4_ = fVar241 * fVar70 + auVar133._0_4_;
        auVar164._4_4_ = fVar245 * fVar88 + auVar133._4_4_;
        auVar164._8_4_ = fVar246 * fVar90 + auVar133._8_4_;
        auVar164._12_4_ = fVar247 * fVar93 + auVar133._12_4_;
        auVar117._16_4_ = fVar248 * fVar96 + auVar75._0_4_;
        auVar117._0_16_ = auVar164;
        auVar117._20_4_ = fVar249 * fVar99 + auVar75._4_4_;
        auVar117._24_4_ = fVar250 * fVar102 + auVar75._8_4_;
        auVar117._28_4_ = fVar251 * fVar105 + auVar75._12_4_;
        cVar15 = (char)uVar17;
        auVar150 = auVar117._16_16_;
        if ((uVar17 & 1) == 0) {
          if ((uVar17 & 2) == 0) goto LAB_14001c60d;
LAB_14001cc7c:
          uVar39 = vextractps_avx(auVar164,1);
          *(undefined4 *)(param_1 + lVar51) = uVar39;
          if ((uVar17 & 4) != 0) goto LAB_14001cc94;
LAB_14001c616:
          if ((uVar17 & 8) == 0) goto LAB_14001c61f;
LAB_14001ccac:
          uVar39 = vextractps_avx(auVar164,3);
          *(undefined4 *)(param_1 + lVar36) = uVar39;
          if ((uVar17 & 0x10) != 0) goto LAB_14001ccc2;
LAB_14001c62e:
          if ((uVar17 & 0x20) == 0) goto LAB_14001c637;
LAB_14001ccd1:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + lVar64) = uVar39;
          if ((uVar17 & 0x40) != 0) goto LAB_14001cce1;
LAB_14001c640:
          if (-1 < cVar15) goto LAB_14001c648;
LAB_14001ccf0:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + lVar65) = uVar39;
          auVar118._0_4_ = fVar202 * fVar70 + fVar128;
          auVar118._4_4_ = fVar209 * fVar88 + fVar129;
          auVar118._8_4_ = fVar210 * fVar90 + fVar130;
          auVar118._12_4_ = fVar212 * fVar93 + fVar131;
          auVar118._16_4_ = fVar214 * fVar96 + fVar132;
          auVar118._20_4_ = fVar216 * fVar99 + fVar144;
          auVar118._24_4_ = fVar218 * fVar102 + fVar145;
          auVar118._28_4_ = fVar220 * fVar105 + fVar146;
          if ((uVar17 & 1) != 0) goto LAB_14001cd15;
LAB_14001c65e:
          if ((uVar17 & 2) == 0) goto LAB_14001c667;
LAB_14001cd25:
          uVar39 = vextractps_avx(auVar118._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar51) = uVar39;
          if ((uVar17 & 4) != 0) goto LAB_14001cd3e;
LAB_14001c670:
          if ((uVar17 & 8) == 0) goto LAB_14001c679;
LAB_14001cd57:
          uVar39 = vextractps_avx(auVar118._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar36) = uVar39;
          auVar150 = auVar118._16_16_;
          if ((uVar17 & 0x10) != 0) goto LAB_14001cd6e;
LAB_14001c688:
          if ((uVar17 & 0x20) == 0) goto LAB_14001c691;
LAB_14001cd7e:
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 4 + lVar64) = uVar39;
          if ((uVar17 & 0x40) != 0) goto LAB_14001cd8f;
LAB_14001c69a:
          if (-1 < cVar15) goto LAB_14001c6a2;
LAB_14001cd9f:
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 4 + lVar65) = uVar39;
          auVar81._0_4_ = fVar167 * fVar70 + fVar147;
          auVar81._4_4_ = fVar176 * fVar88 + fVar148;
          auVar81._8_4_ = fVar177 * fVar90 + fVar149;
          auVar81._12_4_ = fVar178 * fVar93 + fVar159;
          auVar81._16_4_ = fVar179 * fVar96 + fVar160;
          auVar81._20_4_ = fVar181 * fVar99 + fVar163;
          auVar81._24_4_ = fVar182 * fVar102 + fVar235;
          auVar81._28_4_ = fVar183 * fVar105 + fVar239;
          if ((uVar17 & 1) != 0) goto LAB_14001cdc5;
LAB_14001c6b8:
          if ((uVar17 & 2) == 0) goto LAB_14001c6c1;
LAB_14001cdd5:
          uVar39 = vextractps_avx(auVar81._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar51) = uVar39;
          if ((uVar17 & 4) != 0) goto LAB_14001cdee;
LAB_14001c6ca:
          if ((uVar17 & 8) == 0) goto LAB_14001c6d3;
LAB_14001ce07:
          uVar39 = vextractps_avx(auVar81._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar36) = uVar39;
          auVar150 = auVar81._16_16_;
        }
        else {
          *(float *)(param_1 + lVar58) = auVar164._0_4_;
          if ((uVar17 & 2) != 0) goto LAB_14001cc7c;
LAB_14001c60d:
          if ((uVar17 & 4) == 0) goto LAB_14001c616;
LAB_14001cc94:
          uVar39 = vextractps_avx(auVar164,2);
          *(undefined4 *)(param_1 + lVar28) = uVar39;
          if ((uVar17 & 8) != 0) goto LAB_14001ccac;
LAB_14001c61f:
          if ((uVar17 & 0x10) == 0) goto LAB_14001c62e;
LAB_14001ccc2:
          *(float *)(param_1 + lVar20) = auVar117._16_4_;
          if ((uVar17 & 0x20) != 0) goto LAB_14001ccd1;
LAB_14001c637:
          if ((uVar17 & 0x40) == 0) goto LAB_14001c640;
LAB_14001cce1:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + lVar67) = uVar39;
          if (cVar15 < '\0') goto LAB_14001ccf0;
LAB_14001c648:
          auVar118._0_4_ = fVar202 * fVar70 + fVar128;
          auVar118._4_4_ = fVar209 * fVar88 + fVar129;
          auVar118._8_4_ = fVar210 * fVar90 + fVar130;
          auVar118._12_4_ = fVar212 * fVar93 + fVar131;
          auVar118._16_4_ = fVar214 * fVar96 + fVar132;
          auVar118._20_4_ = fVar216 * fVar99 + fVar144;
          auVar118._24_4_ = fVar218 * fVar102 + fVar145;
          auVar118._28_4_ = fVar220 * fVar105 + fVar146;
          if ((uVar17 & 1) == 0) goto LAB_14001c65e;
LAB_14001cd15:
          *(int *)(param_1 + 4 + lVar58) = auVar118._0_4_;
          if ((uVar17 & 2) != 0) goto LAB_14001cd25;
LAB_14001c667:
          if ((uVar17 & 4) == 0) goto LAB_14001c670;
LAB_14001cd3e:
          uVar39 = vextractps_avx(auVar118._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar28) = uVar39;
          if ((uVar17 & 8) != 0) goto LAB_14001cd57;
LAB_14001c679:
          auVar150 = auVar118._16_16_;
          if ((uVar17 & 0x10) == 0) goto LAB_14001c688;
LAB_14001cd6e:
          *(int *)(param_1 + 4 + lVar20) = auVar150._0_4_;
          if ((uVar17 & 0x20) != 0) goto LAB_14001cd7e;
LAB_14001c691:
          if ((uVar17 & 0x40) == 0) goto LAB_14001c69a;
LAB_14001cd8f:
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 4 + lVar67) = uVar39;
          if (cVar15 < '\0') goto LAB_14001cd9f;
LAB_14001c6a2:
          auVar81._0_4_ = fVar167 * fVar70 + fVar147;
          auVar81._4_4_ = fVar176 * fVar88 + fVar148;
          auVar81._8_4_ = fVar177 * fVar90 + fVar149;
          auVar81._12_4_ = fVar178 * fVar93 + fVar159;
          auVar81._16_4_ = fVar179 * fVar96 + fVar160;
          auVar81._20_4_ = fVar181 * fVar99 + fVar163;
          auVar81._24_4_ = fVar182 * fVar102 + fVar235;
          auVar81._28_4_ = fVar183 * fVar105 + fVar239;
          if ((uVar17 & 1) == 0) goto LAB_14001c6b8;
LAB_14001cdc5:
          *(int *)(param_1 + 8 + lVar58) = auVar81._0_4_;
          if ((uVar17 & 2) != 0) goto LAB_14001cdd5;
LAB_14001c6c1:
          if ((uVar17 & 4) == 0) goto LAB_14001c6ca;
LAB_14001cdee:
          uVar39 = vextractps_avx(auVar81._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar28) = uVar39;
          if ((uVar17 & 8) != 0) goto LAB_14001ce07;
LAB_14001c6d3:
          auVar150 = auVar81._16_16_;
        }
        if ((uVar17 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar20) = auVar150._0_4_;
        }
        if ((uVar17 & 0x20) != 0) {
          uVar39 = vextractps_avx(auVar150,1);
          *(undefined4 *)(param_1 + 8 + lVar64) = uVar39;
        }
        if ((uVar17 & 0x40) != 0) {
          uVar39 = vextractps_avx(auVar150,2);
          *(undefined4 *)(param_1 + 8 + lVar67) = uVar39;
        }
        if (cVar15 < '\0') {
          uVar39 = vextractps_avx(auVar150,3);
          *(undefined4 *)(param_1 + 8 + lVar65) = uVar39;
        }
        if ((uVar17 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar58) = uVar221;
        }
        if ((uVar17 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar51) = uVar1;
        }
        if ((uVar17 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar2;
        }
        if ((uVar17 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar3;
        }
        if ((uVar17 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar213;
        }
        if ((uVar17 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar64) = uVar215;
        }
        if ((uVar17 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar67) = uVar217;
        }
        if (cVar15 < '\0') {
          *(uint *)(param_1 + 0xc + lVar65) = uVar219;
        }
      }
      uVar71 = uVar71 + 0x20;
      pauVar18 = pauVar18 + 3;
      uVar33 = uVar33 + 8;
    } while ((int)uVar33 < (int)(uVar29 & 0xfffffff8));
  }
  if ((int)param_6 <= (int)uVar33) {
    return;
  }
  auVar134 = vpshufd_avx(ZEXT416(uVar33),0);
  auVar82._16_16_ = auVar134;
  auVar82._0_16_ = auVar134;
  auVar164 = vpshufd_avx(ZEXT416(param_6),0);
  pauVar18 = (undefined1 (*) [32])(param_2 + (ulonglong)uVar33 * 0xc);
  auVar137 = SUB3216(auVar82 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar162 = SUB3216(auVar82 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar150 = vpcmpgtd_avx(auVar164,auVar162);
  auVar134 = vpcmpgtd_avx(auVar164,auVar137);
  auVar134 = vpand_avx(auVar134,auVar150);
  auVar150 = vpcmpeqd_avx(auVar150,auVar150);
  auVar150 = auVar150 & ~auVar134;
  if ((((SUB161(auVar150 >> 0x1f,0) & 1) == 0 && (SUB161(auVar150 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar150 >> 0x5f,0) & 1) == 0) && -1 < auVar150[0xf]) {
    auVar78 = pauVar18[2];
    auVar154._16_16_ = *(undefined1 (*) [16])*pauVar18;
    auVar154._0_16_ = *(undefined1 (*) [16])(*pauVar18 + 0x10);
    auVar76 = vblendps_avx(*pauVar18,auVar154,0x24);
    auVar79 = vpermilps_avx(auVar76,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar39 = *(undefined4 *)(pauVar18[1] + 4);
    auVar237._4_4_ = uVar39;
    auVar237._0_4_ = uVar39;
    auVar237._8_4_ = uVar39;
    auVar237._12_4_ = uVar39;
    uVar39 = *(undefined4 *)(pauVar18[1] + 8);
    auVar237._20_4_ = uVar39;
    auVar237._16_4_ = uVar39;
    auVar237._24_4_ = uVar39;
    auVar237._28_4_ = uVar39;
    auVar205._16_16_ = *(undefined1 (*) [16])pauVar18[2];
    auVar205._0_16_ = *(undefined1 (*) [16])(pauVar18[2] + 0x10);
    auVar76 = vblendps_avx(auVar205,auVar78,0x44);
    auVar77 = vpermilps_avx(auVar76,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar76 = vblendps_avx(auVar79,auVar237,0x88);
    auVar134 = vshufps_avx(*(undefined1 (*) [16])(pauVar18[1] + 0x10),
                           *(undefined1 (*) [16])(pauVar18[1] + 0x10),0xec);
    uVar39 = *(undefined4 *)(pauVar18[1] + 0x14);
    auVar155._20_4_ = uVar39;
    auVar155._16_4_ = uVar39;
    auVar155._24_4_ = uVar39;
    auVar155._28_4_ = uVar39;
    auVar155._0_16_ = auVar134;
    auVar79 = vblendps_avx(auVar77,auVar155,0x13);
    auVar153._16_16_ = auVar79._0_16_;
    auVar153._0_16_ = auVar76._0_16_;
    auVar77 = vperm2f128_avx(auVar76,auVar79,0x31);
    auVar76 = vblendps_avx(pauVar18[1],*pauVar18,0x24);
    auVar76 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar18 + 0x10)),auVar76,0x21);
    auVar76 = vshufps_avx(auVar76,pauVar18[1],0xc2);
    auVar79 = vshufps_avx(auVar205,auVar78,0xc4);
    auVar76 = vblendps_avx(auVar76,auVar79,0xe0);
  }
  else {
    auVar134 = vpcmpgtd_avx(auVar164,auVar162);
    auVar150 = vpcmpgtd_avx(auVar164,auVar137);
    uVar29 = auVar150._0_4_;
    auVar151._0_4_ =
         uVar29 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
    uVar71 = auVar150._4_4_;
    auVar151._4_4_ = uVar71 & _UNK_150b50b04;
    uVar17 = auVar150._8_4_;
    auVar151._8_4_ = uVar17 & _UNK_150b50b08;
    uVar91 = auVar150._12_4_;
    auVar151._12_4_ = uVar91 & _UNK_150b50b0c;
    uVar94 = auVar134._0_4_;
    vextractps_avx(auVar151,1);
    vextractps_avx(auVar151,2);
    vextractps_avx(auVar151,3);
    auVar168._0_4_ =
         uVar29 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
    auVar168._4_4_ = uVar71 & _UNK_150b50b24;
    auVar168._8_4_ = uVar17 & _UNK_150b50b28;
    auVar168._12_4_ = uVar91 & _UNK_150b50b2c;
    vextractps_avx(auVar168,1);
    vextractps_avx(auVar168,2);
    vextractps_avx(auVar168,3);
    auVar134._0_4_ =
         uVar29 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
    auVar134._4_4_ = uVar71 & _UNK_150b50b44;
    auVar134._8_4_ = uVar17 & _UNK_150b50b48;
    auVar134._12_4_ = uVar91 & _UNK_150b50b4c;
    vextractps_avx(auVar134,1);
    vextractps_avx(auVar134,2);
    auVar153 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar18 + (uVar94 & _UNK_150b50b10)),
                                  ZEXT416(*(uint *)*pauVar18)));
    vextractps_avx(auVar134,3);
    auVar77 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar18 + (uVar94 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar18 + auVar168._0_4_))));
    auVar76 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar18 + (uVar94 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar18 + auVar134._0_4_))));
  }
  auVar180 = vpcmpgtd_avx(auVar164,auVar162);
  auVar231 = vpcmpgtd_avx(auVar164,auVar137);
  auVar83._16_16_ = auVar180;
  auVar83._0_16_ = auVar231;
  auVar139 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_3 + (int)(uVar33 << 2)));
  auVar135 = vpslld_avx(auVar77._0_16_,4);
  auVar185 = vpslld_avx(auVar77._16_16_,4);
  auVar162 = vpand_avx(auVar231,auVar135);
  lVar19 = param_1 + auVar162._0_4_;
  lVar20 = param_1 + auVar162._4_4_;
  lVar21 = param_1 + auVar162._8_4_;
  lVar27 = param_1 + auVar162._12_4_;
  auVar151 = vpand_avx(auVar180,auVar185);
  lVar28 = param_1 + auVar151._0_4_;
  lVar30 = param_1 + auVar151._4_4_;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar151._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar151._4_4_)),0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(param_1 + auVar151._8_4_)),0x20);
  lVar34 = param_1 + auVar151._8_4_;
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(param_1 + auVar151._12_4_)),0x30);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar162._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar162._4_4_)),0x10);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + auVar162._8_4_)),0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(param_1 + auVar162._12_4_)),0x30);
  uVar71 = auVar231._0_4_;
  uVar17 = auVar231._4_4_;
  uVar91 = auVar231._8_4_;
  uVar94 = auVar231._12_4_;
  uVar97 = auVar180._0_4_;
  uVar100 = auVar180._4_4_;
  uVar103 = auVar180._8_4_;
  uVar106 = auVar180._12_4_;
  lVar35 = param_1 + auVar151._12_4_;
  uVar48 = (ulonglong)(uVar100 & _UNK_150b50d54);
  uVar31 = (ulonglong)(uVar97 & _UNK_150b50d50);
  uVar60 = (ulonglong)(uVar103 & _UNK_150b50d58);
  auVar162 = vinsertps_avx(ZEXT416(*(uint *)(uVar31 + lVar28)),ZEXT416(*(uint *)(uVar48 + lVar30)),
                           0x10);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(uVar60 + lVar34)),0x20);
  uVar37 = (ulonglong)(uVar106 & _UNK_150b50d5c);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(uVar37 + lVar35)),0x30);
  uVar49 = (ulonglong)
           (uVar71 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004);
  uVar26 = (ulonglong)(uVar17 & _UNK_150b50d44);
  auVar151 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar19)),ZEXT416(*(uint *)(uVar26 + lVar20)),
                           0x10);
  uVar53 = (ulonglong)(uVar91 & _UNK_150b50d48);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar53 + lVar21)),0x20);
  uVar54 = (ulonglong)(uVar94 & _UNK_150b50d4c);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar54 + lVar27)),0x30);
  auVar125._16_16_ = auVar134;
  auVar125._0_16_ = auVar150;
  uVar55 = (ulonglong)(uVar97 & _UNK_150b50d70);
  uVar56 = (ulonglong)(uVar100 & _UNK_150b50d74);
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar55 + lVar28)),ZEXT416(*(uint *)(uVar56 + lVar30)),
                           0x10);
  uVar22 = (ulonglong)(uVar103 & _UNK_150b50d78);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar22 + lVar34)),0x20);
  uVar23 = (ulonglong)(uVar106 & _UNK_150b50d7c);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar23 + lVar35)),0x30);
  uVar61 = (ulonglong)
           (uVar71 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008);
  uVar32 = (ulonglong)(uVar17 & _UNK_150b50d64);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar61 + lVar19)),ZEXT416(*(uint *)(uVar32 + lVar20)),
                           0x10);
  uVar24 = (ulonglong)(uVar91 & _UNK_150b50d68);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar24 + lVar21)),0x20);
  uVar25 = (ulonglong)(uVar94 & _UNK_150b50d6c);
  auVar188._16_16_ = auVar162;
  auVar188._0_16_ = auVar151;
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar25 + lVar27)),0x30);
  auVar200._16_16_ = auVar134;
  auVar200._0_16_ = auVar150;
  auVar136 = vpslld_avx(auVar76._16_16_,4);
  auVar168 = vpand_avx(auVar180,auVar136);
  lVar36 = param_1 + auVar168._0_4_;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar168._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar168._4_4_)),0x10);
  lVar46 = param_1 + auVar168._4_4_;
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar31 + lVar36)),ZEXT416(*(uint *)(uVar48 + lVar46)),
                           0x10);
  auVar79 = vmaskmovps_avx(auVar83,auVar125);
  auVar77 = vmaskmovps_avx(auVar83,auVar188);
  auVar78 = vmaskmovps_avx(auVar83,auVar200);
  auVar74 = vpslld_avx(auVar153._16_16_,4);
  auVar180 = vpand_avx(auVar180,auVar74);
  lVar47 = param_1 + auVar180._0_4_;
  auVar162 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar180._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar180._4_4_)),0x10);
  lVar50 = param_1 + auVar180._4_4_;
  auVar151 = vinsertps_avx(ZEXT416(*(uint *)(uVar31 + lVar47)),ZEXT416(*(uint *)(uVar48 + lVar50)),
                           0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(param_1 + auVar168._8_4_)),0x20);
  lVar51 = param_1 + auVar168._8_4_;
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar60 + lVar51)),0x20);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(param_1 + auVar180._8_4_)),0x20);
  lVar52 = param_1 + auVar180._8_4_;
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar60 + lVar52)),0x20);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(param_1 + auVar168._12_4_)),0x30);
  lVar57 = param_1 + auVar168._12_4_;
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar37 + lVar57)),0x30);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(param_1 + auVar180._12_4_)),0x30);
  lVar58 = param_1 + auVar180._12_4_;
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar37 + lVar58)),0x30);
  auVar133 = vpslld_avx(auVar76._0_16_,4);
  auVar161 = vpand_avx(auVar231,auVar133);
  auVar168 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar161._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar161._4_4_)),0x10);
  lVar59 = param_1 + auVar161._0_4_;
  lVar62 = param_1 + auVar161._4_4_;
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(param_1 + auVar161._8_4_)),0x20);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(param_1 + auVar161._12_4_)),0x30);
  auVar172._16_16_ = auVar134;
  auVar172._0_16_ = auVar168;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar59)),ZEXT416(*(uint *)(uVar26 + lVar62)),
                           0x10);
  auVar76 = vmaskmovps_avx(auVar83,auVar172);
  auVar75 = vpslld_avx(auVar153._0_16_,4);
  auVar231 = vpand_avx(auVar231,auVar75);
  lVar63 = param_1 + auVar231._0_4_;
  auVar168 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar231._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar231._4_4_)),0x10);
  lVar64 = param_1 + auVar231._4_4_;
  auVar180 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar63)),ZEXT416(*(uint *)(uVar26 + lVar64)),
                           0x10);
  lVar65 = param_1 + auVar161._8_4_;
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar53 + lVar65)),0x20);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(param_1 + auVar231._8_4_)),0x20);
  lVar66 = param_1 + auVar231._8_4_;
  auVar180 = vinsertps_avx(auVar180,ZEXT416(*(uint *)(uVar53 + lVar66)),0x20);
  lVar67 = param_1 + auVar161._12_4_;
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar54 + lVar67)),0x30);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(param_1 + auVar231._12_4_)),0x30);
  lVar68 = param_1 + auVar231._12_4_;
  auVar180 = vinsertps_avx(auVar180,ZEXT416(*(uint *)(uVar54 + lVar68)),0x30);
  auVar156._16_16_ = auVar150;
  auVar156._0_16_ = auVar134;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar55 + lVar36)),ZEXT416(*(uint *)(uVar56 + lVar46)),
                           0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar22 + lVar51)),0x20);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar23 + lVar57)),0x30);
  auVar208 = vmaskmovps_avx(auVar83,auVar156);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar61 + lVar59)),ZEXT416(*(uint *)(uVar32 + lVar62)),
                           0x10);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar24 + lVar65)),0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar25 + lVar67)),0x30);
  auVar157._16_16_ = auVar134;
  auVar157._0_16_ = auVar150;
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar55 + lVar47)),ZEXT416(*(uint *)(uVar56 + lVar50)),
                           0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar22 + lVar52)),0x20);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar23 + lVar58)),0x30);
  auVar107 = vmaskmovps_avx(auVar83,auVar157);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar61 + lVar63)),ZEXT416(*(uint *)(uVar32 + lVar64)),
                           0x10);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar24 + lVar66)),0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar25 + lVar68)),0x30);
  auVar189._16_16_ = auVar162;
  auVar189._0_16_ = auVar168;
  auVar161._0_4_ = uVar71 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar161._4_4_ = uVar17 & _UNK_150b50d84;
  auVar161._8_4_ = uVar91 & _UNK_150b50d88;
  auVar161._12_4_ = uVar94 & _UNK_150b50d8c;
  auVar225._16_16_ = auVar151;
  auVar225._0_16_ = auVar180;
  auVar238._16_16_ = auVar134;
  auVar238._0_16_ = auVar150;
  uVar49 = (ulonglong)(uVar97 & _UNK_150b50d90);
  auVar108 = vmaskmovps_avx(auVar83,auVar189);
  auVar109 = vmaskmovps_avx(auVar83,auVar225);
  auVar110 = vmaskmovps_avx(auVar83,auVar238);
  auVar190._4_4_ = __real_3f800000;
  auVar190._0_4_ = __real_3f800000;
  auVar190._8_4_ = __real_3f800000;
  auVar190._12_4_ = __real_3f800000;
  auVar190._16_4_ = __real_3f800000;
  auVar190._20_4_ = __real_3f800000;
  auVar190._24_4_ = __real_3f800000;
  auVar190._28_4_ = __real_3f800000;
  auVar169 = vsubps_avx(auVar190,auVar139);
  auVar111 = vmaxps_avx(auVar139,auVar169);
  auVar191._0_4_ = auVar111._0_4_ + __real_3f800000;
  auVar191._4_4_ = auVar111._4_4_ + __real_3f800000;
  auVar191._8_4_ = auVar111._8_4_ + __real_3f800000;
  auVar191._12_4_ = auVar111._12_4_ + __real_3f800000;
  auVar191._16_4_ = auVar111._16_4_ + __real_3f800000;
  auVar191._20_4_ = auVar111._20_4_ + __real_3f800000;
  auVar191._24_4_ = auVar111._24_4_ + __real_3f800000;
  auVar191._28_4_ = auVar111._28_4_ + __real_3f800000;
  auVar226._4_4_ = __real_40000000;
  auVar226._0_4_ = __real_40000000;
  auVar226._8_4_ = __real_40000000;
  auVar226._12_4_ = __real_40000000;
  auVar226._16_4_ = __real_40000000;
  auVar226._20_4_ = __real_40000000;
  auVar226._24_4_ = __real_40000000;
  auVar226._28_4_ = __real_40000000;
  auVar111 = vdivps_avx(auVar226,auVar191);
  uVar61 = (ulonglong)(uVar100 & _UNK_150b50d94);
  uVar26 = (ulonglong)(uVar103 & _UNK_150b50d98);
  uVar32 = (ulonglong)(uVar106 & _UNK_150b50d9c);
  auVar134 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar28)),ZEXT416(*(uint *)(uVar61 + lVar30)),
                           0x10);
  auVar150 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar36)),ZEXT416(*(uint *)(uVar61 + lVar46)),
                           0x10);
  auVar162 = vinsertps_avx(ZEXT416(*(uint *)(uVar49 + lVar47)),ZEXT416(*(uint *)(uVar61 + lVar50)),
                           0x10);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar26 + lVar34)),0x20);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar26 + lVar51)),0x20);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(uVar26 + lVar52)),0x20);
  auVar134 = vinsertps_avx(auVar134,ZEXT416(*(uint *)(uVar32 + lVar35)),0x30);
  auVar150 = vinsertps_avx(auVar150,ZEXT416(*(uint *)(uVar32 + lVar57)),0x30);
  auVar162 = vinsertps_avx(auVar162,ZEXT416(*(uint *)(uVar32 + lVar58)),0x30);
  uVar29 = vextractps_avx(auVar161,1);
  uVar32 = (ulonglong)uVar29;
  uVar39 = vextractps_avx(auVar161,2);
  lVar30 = CONCAT44((int)((ulonglong)lVar34 >> 0x20),uVar39);
  uVar39 = vextractps_avx(auVar161,3);
  lVar28 = CONCAT44((int)((ulonglong)lVar57 >> 0x20),uVar39);
  uVar26 = (ulonglong)auVar161._0_4_;
  auVar151 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar19)),ZEXT416(*(uint *)(uVar32 + lVar20)),
                           0x10);
  auVar168 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar59)),ZEXT416(*(uint *)(uVar32 + lVar62)),
                           0x10);
  auVar138 = vsubps_avx(auVar79,auVar76);
  fVar149 = auVar139._0_4_;
  fVar177 = auVar139._4_4_;
  fVar159 = auVar139._8_4_;
  fVar178 = auVar139._12_4_;
  fVar160 = auVar139._16_4_;
  fVar179 = auVar139._20_4_;
  fVar163 = auVar139._24_4_;
  fVar181 = auVar139._28_4_;
  auVar139 = vsubps_avx(auVar77,auVar208);
  auVar255._0_4_ = fVar149 * auVar138._0_4_ + auVar76._0_4_;
  auVar255._4_4_ = fVar177 * auVar138._4_4_ + auVar76._4_4_;
  auVar255._8_4_ = fVar159 * auVar138._8_4_ + auVar76._8_4_;
  auVar255._12_4_ = fVar178 * auVar138._12_4_ + auVar76._12_4_;
  auVar255._16_4_ = fVar160 * auVar138._16_4_ + auVar76._16_4_;
  auVar255._20_4_ = fVar179 * auVar138._20_4_ + auVar76._20_4_;
  auVar255._24_4_ = fVar163 * auVar138._24_4_ + auVar76._24_4_;
  auVar255._28_4_ = fVar181 * auVar138._28_4_ + auVar76._28_4_;
  fVar70 = auVar208._0_4_;
  auVar121._0_4_ = fVar149 * auVar139._0_4_ + fVar70;
  fVar90 = auVar208._4_4_;
  auVar121._4_4_ = fVar177 * auVar139._4_4_ + fVar90;
  fVar93 = auVar208._8_4_;
  auVar121._8_4_ = fVar159 * auVar139._8_4_ + fVar93;
  fVar96 = auVar208._12_4_;
  auVar121._12_4_ = fVar178 * auVar139._12_4_ + fVar96;
  fVar99 = auVar208._16_4_;
  auVar121._16_4_ = fVar160 * auVar139._16_4_ + fVar99;
  fVar105 = auVar208._20_4_;
  auVar121._20_4_ = fVar179 * auVar139._20_4_ + fVar105;
  fVar69 = auVar208._24_4_;
  auVar121._24_4_ = fVar163 * auVar139._24_4_ + fVar69;
  fVar87 = auVar208._28_4_;
  auVar121._28_4_ = fVar181 * auVar139._28_4_ + fVar87;
  auVar208 = vsubps_avx(auVar108,auVar255);
  auVar138 = vsubps_avx(auVar109,auVar121);
  auVar180 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar63)),ZEXT416(*(uint *)(uVar32 + lVar64)),
                           0x10);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(lVar30 + lVar21)),0x20);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(lVar30 + lVar65)),0x20);
  auVar180 = vinsertps_avx(auVar180,ZEXT416(*(uint *)(lVar30 + lVar66)),0x20);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(lVar28 + lVar27)),0x30);
  auVar168 = vinsertps_avx(auVar168,ZEXT416(*(uint *)(lVar28 + lVar67)),0x30);
  auVar180 = vinsertps_avx(auVar180,ZEXT416(*(uint *)(lVar28 + lVar68)),0x30);
  auVar139 = vsubps_avx(auVar78,auVar107);
  fVar95 = auVar107._0_4_;
  auVar256._0_4_ = fVar95 + fVar149 * auVar139._0_4_;
  fVar98 = auVar107._4_4_;
  auVar256._4_4_ = fVar98 + fVar177 * auVar139._4_4_;
  fVar101 = auVar107._8_4_;
  auVar256._8_4_ = fVar101 + fVar159 * auVar139._8_4_;
  fVar104 = auVar107._12_4_;
  auVar256._12_4_ = fVar104 + fVar178 * auVar139._12_4_;
  fVar128 = auVar107._16_4_;
  auVar256._16_4_ = fVar128 + fVar160 * auVar139._16_4_;
  fVar129 = auVar107._20_4_;
  auVar256._20_4_ = fVar129 + fVar179 * auVar139._20_4_;
  fVar130 = auVar107._24_4_;
  auVar256._24_4_ = fVar130 + fVar163 * auVar139._24_4_;
  fVar131 = auVar107._28_4_;
  auVar256._28_4_ = fVar131 + fVar181 * auVar139._28_4_;
  auVar139 = vsubps_avx(auVar110,auVar256);
  auVar140._0_4_ =
       auVar139._0_4_ * auVar139._0_4_ +
       auVar208._0_4_ * auVar208._0_4_ + auVar138._0_4_ * auVar138._0_4_;
  auVar140._4_4_ =
       auVar139._4_4_ * auVar139._4_4_ +
       auVar208._4_4_ * auVar208._4_4_ + auVar138._4_4_ * auVar138._4_4_;
  auVar140._8_4_ =
       auVar139._8_4_ * auVar139._8_4_ +
       auVar208._8_4_ * auVar208._8_4_ + auVar138._8_4_ * auVar138._8_4_;
  auVar140._12_4_ =
       auVar139._12_4_ * auVar139._12_4_ +
       auVar208._12_4_ * auVar208._12_4_ + auVar138._12_4_ * auVar138._12_4_;
  auVar140._16_4_ =
       auVar139._16_4_ * auVar139._16_4_ +
       auVar208._16_4_ * auVar208._16_4_ + auVar138._16_4_ * auVar138._16_4_;
  auVar140._20_4_ =
       auVar139._20_4_ * auVar139._20_4_ +
       auVar208._20_4_ * auVar208._20_4_ + auVar138._20_4_ * auVar138._20_4_;
  auVar140._24_4_ =
       auVar139._24_4_ * auVar139._24_4_ +
       auVar208._24_4_ * auVar208._24_4_ + auVar138._24_4_ * auVar138._24_4_;
  auVar140._28_4_ =
       auVar139._28_4_ * auVar139._28_4_ +
       auVar208._28_4_ * auVar208._28_4_ + auVar138._28_4_ * auVar138._28_4_;
  auVar165 = vsqrtps_avx(auVar140);
  auVar208 = vdivps_avx(auVar208,auVar165);
  auVar107 = vdivps_avx(auVar138,auVar165);
  auVar138 = vdivps_avx(auVar139,auVar165);
  auVar243._16_16_ = auVar134;
  auVar243._0_16_ = auVar151;
  auVar139 = vmaskmovps_avx(auVar83,*(undefined1 (*) [32])(param_4 + (int)(uVar33 << 2)));
  auVar166._16_16_ = auVar150;
  auVar166._0_16_ = auVar168;
  auVar173._16_16_ = auVar162;
  auVar173._0_16_ = auVar180;
  auVar139 = vsubps_avx(auVar165,auVar139);
  fVar132 = auVar139._0_4_;
  fVar144 = auVar139._4_4_;
  fVar145 = auVar139._8_4_;
  fVar146 = auVar139._12_4_;
  fVar147 = auVar139._16_4_;
  fVar167 = auVar139._20_4_;
  fVar148 = auVar139._24_4_;
  fVar176 = auVar139._28_4_;
  fVar89 = auVar168._0_4_;
  fVar92 = auVar150._0_4_;
  fVar214 = auVar151._0_4_;
  fVar216 = auVar134._0_4_;
  auVar206._0_4_ = fVar214 * fVar149 + auVar169._0_4_ * fVar89;
  auVar206._4_4_ = auVar151._4_4_ * fVar177 + auVar169._4_4_ * auVar168._4_4_;
  auVar206._8_4_ = auVar151._8_4_ * fVar159 + auVar169._8_4_ * auVar168._8_4_;
  auVar206._12_4_ = auVar151._12_4_ * fVar178 + auVar169._12_4_ * auVar168._12_4_;
  auVar206._16_4_ = fVar216 * fVar160 + auVar169._16_4_ * fVar92;
  auVar206._20_4_ = auVar134._4_4_ * fVar179 + auVar169._20_4_ * auVar150._4_4_;
  auVar206._24_4_ = auVar134._8_4_ * fVar163 + auVar169._24_4_ * auVar150._8_4_;
  auVar206._28_4_ = auVar134._12_4_ * fVar181 + auVar169._28_4_ * auVar150._12_4_;
  auVar161 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar235 = auVar161._0_4_;
  auVar141._0_4_ = fVar235 * fVar132 * auVar208._0_4_;
  fVar182 = auVar161._4_4_;
  auVar141._4_4_ = fVar182 * fVar144 * auVar208._4_4_;
  fVar239 = auVar161._8_4_;
  auVar141._8_4_ = fVar239 * fVar145 * auVar208._8_4_;
  fVar183 = auVar161._12_4_;
  auVar141._12_4_ = fVar183 * fVar146 * auVar208._12_4_;
  auVar141._16_4_ = fVar235 * fVar147 * auVar208._16_4_;
  auVar141._20_4_ = fVar182 * fVar167 * auVar208._20_4_;
  auVar141._24_4_ = fVar239 * fVar148 * auVar208._24_4_;
  auVar141._28_4_ = fVar183 * fVar176 * auVar208._28_4_;
  fVar88 = auVar180._0_4_;
  auVar244._0_4_ = auVar206._0_4_ + fVar88;
  auVar244._4_4_ = auVar206._4_4_ + auVar180._4_4_;
  auVar244._8_4_ = auVar206._8_4_ + auVar180._8_4_;
  auVar244._12_4_ = auVar206._12_4_ + auVar180._12_4_;
  fVar102 = auVar162._0_4_;
  auVar244._16_4_ = auVar206._16_4_ + fVar102;
  auVar244._20_4_ = auVar206._20_4_ + auVar162._4_4_;
  auVar244._24_4_ = auVar206._24_4_ + auVar162._8_4_;
  auVar244._28_4_ = auVar206._28_4_ + auVar162._12_4_;
  auVar139 = vdivps_avx(auVar141,auVar244);
  auVar122._0_4_ = fVar235 * fVar132 * auVar107._0_4_;
  auVar122._4_4_ = fVar182 * fVar144 * auVar107._4_4_;
  auVar122._8_4_ = fVar239 * fVar145 * auVar107._8_4_;
  auVar122._12_4_ = fVar183 * fVar146 * auVar107._12_4_;
  auVar122._16_4_ = fVar235 * fVar147 * auVar107._16_4_;
  auVar122._20_4_ = fVar182 * fVar167 * auVar107._20_4_;
  auVar122._24_4_ = fVar239 * fVar148 * auVar107._24_4_;
  auVar122._28_4_ = fVar183 * fVar176 * auVar107._28_4_;
  auVar152 = vdivps_avx(auVar122,auVar244);
  auVar126._0_4_ = fVar235 * fVar132 * auVar138._0_4_;
  auVar126._4_4_ = fVar182 * fVar144 * auVar138._4_4_;
  auVar126._8_4_ = fVar239 * fVar145 * auVar138._8_4_;
  auVar126._12_4_ = fVar183 * fVar146 * auVar138._12_4_;
  auVar126._16_4_ = fVar235 * fVar147 * auVar138._16_4_;
  auVar126._20_4_ = fVar182 * fVar167 * auVar138._20_4_;
  auVar126._24_4_ = fVar239 * fVar148 * auVar138._24_4_;
  auVar126._28_4_ = fVar183 * fVar176 * auVar138._28_4_;
  auVar138 = vdivps_avx(auVar126,auVar244);
  local_440 = auVar111._0_4_;
  fStack_43c = auVar111._4_4_;
  fStack_438 = auVar111._8_4_;
  fStack_434 = auVar111._12_4_;
  fStack_430 = auVar111._16_4_;
  fStack_42c = auVar111._20_4_;
  fStack_428 = auVar111._24_4_;
  fStack_424 = auVar111._28_4_;
  auVar208 = vcmpps_avx(auVar206,ZEXT832(0) << 0x20,0);
  auVar107 = vcmpps_avx(ZEXT832(0) << 0x20,auVar173,0);
  auVar207._0_4_ = auVar107._0_4_ & auVar208._0_4_;
  auVar207._4_4_ = auVar107._4_4_ & auVar208._4_4_;
  auVar207._8_4_ = auVar107._8_4_ & auVar208._8_4_;
  auVar207._12_4_ = auVar107._12_4_ & auVar208._12_4_;
  auVar207._16_4_ = auVar107._16_4_ & auVar208._16_4_;
  auVar207._20_4_ = auVar107._20_4_ & auVar208._20_4_;
  auVar207._24_4_ = auVar107._24_4_ & auVar208._24_4_;
  auVar207._28_4_ = auVar107._28_4_ & auVar208._28_4_;
  auVar208 = vcmpps_avx(auVar165,
                        ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,2);
  auVar208 = auVar208 | auVar207;
  uVar29 = auVar208._0_4_;
  fVar132 = (float)(~uVar29 & auVar139._0_4_);
  uVar33 = auVar208._4_4_;
  fVar144 = (float)(~uVar33 & auVar139._4_4_);
  uVar211 = auVar208._8_4_;
  fVar145 = (float)(~uVar211 & auVar139._8_4_);
  uVar213 = auVar208._12_4_;
  fVar146 = (float)(~uVar213 & auVar139._12_4_);
  uVar215 = auVar208._16_4_;
  fVar147 = (float)(~uVar215 & auVar139._16_4_);
  uVar217 = auVar208._20_4_;
  fVar167 = (float)(~uVar217 & auVar139._20_4_);
  uVar219 = auVar208._24_4_;
  fVar148 = (float)(~uVar219 & auVar139._24_4_);
  uVar221 = auVar208._28_4_;
  fVar176 = (float)(~uVar221 & auVar139._28_4_);
  fVar218 = (float)(~uVar29 & auVar152._0_4_);
  fVar220 = (float)(~uVar33 & auVar152._4_4_);
  fVar241 = (float)(~uVar211 & auVar152._8_4_);
  fVar245 = (float)(~uVar213 & auVar152._12_4_);
  fVar246 = (float)(~uVar215 & auVar152._16_4_);
  fVar247 = (float)(~uVar217 & auVar152._20_4_);
  fVar248 = (float)(~uVar219 & auVar152._24_4_);
  fVar249 = (float)(~uVar221 & auVar152._28_4_);
  fVar235 = (float)(~uVar29 & auVar138._0_4_);
  fVar182 = (float)(~uVar33 & auVar138._4_4_);
  fVar239 = (float)(~uVar211 & auVar138._8_4_);
  fVar183 = (float)(~uVar213 & auVar138._12_4_);
  fVar202 = (float)(~uVar215 & auVar138._16_4_);
  fVar209 = (float)(~uVar217 & auVar138._20_4_);
  fVar210 = (float)(~uVar219 & auVar138._24_4_);
  fVar212 = (float)(~uVar221 & auVar138._28_4_);
  auVar208 = vcmpps_avx(ZEXT832(0) << 0x20,auVar173,1);
  auVar84._0_4_ = auVar208._0_4_ & uVar71;
  auVar84._4_4_ = auVar208._4_4_ & uVar17;
  auVar84._8_4_ = auVar208._8_4_ & uVar91;
  auVar84._12_4_ = auVar208._12_4_ & uVar94;
  auVar84._16_4_ = auVar208._16_4_ & uVar97;
  auVar84._20_4_ = auVar208._20_4_ & uVar100;
  auVar84._24_4_ = auVar208._24_4_ & uVar103;
  auVar84._28_4_ = auVar208._28_4_ & uVar106;
  uVar29 = vmovmskps_avx(auVar84);
  if (uVar29 != 0) {
    fVar250 = local_440 * fVar88;
    fVar251 = fStack_43c * auVar180._4_4_;
    fVar184 = fStack_438 * auVar180._8_4_;
    fVar192 = fStack_434 * auVar180._12_4_;
    fVar193 = fStack_430 * fVar102;
    fVar194 = fStack_42c * auVar162._4_4_;
    fVar195 = fStack_428 * auVar162._8_4_;
    fVar196 = fStack_424 * auVar162._12_4_;
    auVar123._0_4_ = fVar250 * fVar132;
    auVar123._4_4_ = fVar251 * fVar144;
    auVar123._8_4_ = fVar184 * fVar145;
    auVar123._12_4_ = fVar192 * fVar146;
    auVar123._16_4_ = fVar193 * fVar147;
    auVar123._20_4_ = fVar194 * fVar167;
    auVar123._24_4_ = fVar195 * fVar148;
    auVar123._28_4_ = fVar196 * fVar176;
    auVar208 = vsubps_avx(auVar108,auVar123);
    cVar15 = (char)uVar29;
    iVar72 = auVar75._0_4_;
    auVar161 = auVar208._0_16_;
    auVar231 = auVar208._16_16_;
    iVar40 = auVar75._4_4_;
    iVar41 = auVar75._8_4_;
    iVar42 = auVar75._12_4_;
    iVar124 = auVar74._0_4_;
    iVar43 = auVar74._4_4_;
    iVar44 = auVar74._8_4_;
    iVar45 = auVar74._12_4_;
    if ((uVar29 & 1) == 0) {
      if ((uVar29 & 2) == 0) goto LAB_14001dbec;
LAB_14001e122:
      uVar39 = vextractps_avx(auVar161,1);
      *(undefined4 *)(param_1 + iVar40) = uVar39;
      if ((uVar29 & 4) != 0) goto LAB_14001e13b;
LAB_14001dbf5:
      if ((uVar29 & 8) == 0) goto LAB_14001dbfe;
LAB_14001e154:
      uVar39 = vextractps_avx(auVar161,3);
      *(undefined4 *)(param_1 + iVar42) = uVar39;
      if ((uVar29 & 0x10) != 0) goto LAB_14001e179;
LAB_14001dc13:
      if ((uVar29 & 0x20) == 0) goto LAB_14001dc1c;
LAB_14001e190:
      uVar39 = vextractps_avx(auVar231,1);
      *(undefined4 *)(param_1 + iVar43) = uVar39;
      if ((uVar29 & 0x40) != 0) goto LAB_14001e1a9;
LAB_14001dc25:
      auVar257._0_4_ = fVar250 * fVar218;
      auVar257._4_4_ = fVar251 * fVar220;
      auVar257._8_4_ = fVar184 * fVar241;
      auVar257._12_4_ = fVar192 * fVar245;
      auVar257._16_4_ = fVar193 * fVar246;
      auVar257._20_4_ = fVar194 * fVar247;
      auVar257._24_4_ = fVar195 * fVar248;
      auVar257._28_4_ = fVar196 * fVar249;
      if (-1 < cVar15) goto LAB_14001dc36;
LAB_14001e1ca:
      uVar39 = vextractps_avx(auVar231,3);
      *(undefined4 *)(param_1 + iVar45) = uVar39;
      auVar208 = vsubps_avx(auVar109,auVar257);
      if ((uVar29 & 1) != 0) goto LAB_14001e1e8;
LAB_14001dc44:
      if ((uVar29 & 2) == 0) goto LAB_14001dc51;
LAB_14001e204:
      uVar39 = vextractps_avx(auVar208._0_16_,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar40) = uVar39;
      if ((uVar29 & 4) != 0) goto LAB_14001e21e;
LAB_14001dc5a:
      if ((uVar29 & 8) == 0) goto LAB_14001dc63;
LAB_14001e238:
      uVar39 = vextractps_avx(auVar208._0_16_,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar42) = uVar39;
      auVar161 = auVar208._16_16_;
      if ((uVar29 & 0x10) != 0) goto LAB_14001e258;
LAB_14001dc72:
      if ((uVar29 & 0x20) == 0) goto LAB_14001dc7b;
LAB_14001e270:
      uVar39 = vextractps_avx(auVar161,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar43) = uVar39;
      if ((uVar29 & 0x40) != 0) goto LAB_14001e28a;
LAB_14001dc84:
      auVar201._0_4_ = fVar250 * fVar235;
      auVar201._4_4_ = fVar251 * fVar182;
      auVar201._8_4_ = fVar184 * fVar239;
      auVar201._12_4_ = fVar192 * fVar183;
      auVar201._16_4_ = fVar193 * fVar202;
      auVar201._20_4_ = fVar194 * fVar209;
      auVar201._24_4_ = fVar195 * fVar210;
      auVar201._28_4_ = fVar196 * fVar212;
      if (-1 < cVar15) goto LAB_14001dc91;
LAB_14001e2a8:
      uVar39 = vextractps_avx(auVar161,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar45) = uVar39;
      auVar208 = vsubps_avx(auVar110,auVar201);
      if ((uVar29 & 1) != 0) goto LAB_14001e2c7;
LAB_14001dc9f:
      if ((uVar29 & 2) == 0) goto LAB_14001dca8;
LAB_14001e2df:
      uVar39 = vextractps_avx(auVar208._0_16_,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar40) = uVar39;
      if ((uVar29 & 4) != 0) goto LAB_14001e2f9;
LAB_14001dcb1:
      if ((uVar29 & 8) == 0) goto LAB_14001dcba;
LAB_14001e313:
      uVar39 = vextractps_avx(auVar208._0_16_,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar42) = uVar39;
      auVar161 = auVar208._16_16_;
    }
    else {
      *(int *)(param_1 + iVar72) = auVar208._0_4_;
      if ((uVar29 & 2) != 0) goto LAB_14001e122;
LAB_14001dbec:
      if ((uVar29 & 4) == 0) goto LAB_14001dbf5;
LAB_14001e13b:
      uVar39 = vextractps_avx(auVar161,2);
      *(undefined4 *)(param_1 + iVar41) = uVar39;
      if ((uVar29 & 8) != 0) goto LAB_14001e154;
LAB_14001dbfe:
      if ((uVar29 & 0x10) == 0) goto LAB_14001dc13;
LAB_14001e179:
      *(int *)(param_1 + iVar124) = auVar208._16_4_;
      if ((uVar29 & 0x20) != 0) goto LAB_14001e190;
LAB_14001dc1c:
      if ((uVar29 & 0x40) == 0) goto LAB_14001dc25;
LAB_14001e1a9:
      uVar39 = vextractps_avx(auVar231,2);
      *(undefined4 *)(param_1 + iVar44) = uVar39;
      auVar257._0_4_ = fVar250 * fVar218;
      auVar257._4_4_ = fVar251 * fVar220;
      auVar257._8_4_ = fVar184 * fVar241;
      auVar257._12_4_ = fVar192 * fVar245;
      auVar257._16_4_ = fVar193 * fVar246;
      auVar257._20_4_ = fVar194 * fVar247;
      auVar257._24_4_ = fVar195 * fVar248;
      auVar257._28_4_ = fVar196 * fVar249;
      if (cVar15 < '\0') goto LAB_14001e1ca;
LAB_14001dc36:
      auVar208 = vsubps_avx(auVar109,auVar257);
      if ((uVar29 & 1) == 0) goto LAB_14001dc44;
LAB_14001e1e8:
      *(int *)(param_1 + 4 + (longlong)iVar72) = auVar208._0_4_;
      if ((uVar29 & 2) != 0) goto LAB_14001e204;
LAB_14001dc51:
      if ((uVar29 & 4) == 0) goto LAB_14001dc5a;
LAB_14001e21e:
      uVar39 = vextractps_avx(auVar208._0_16_,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar41) = uVar39;
      if ((uVar29 & 8) != 0) goto LAB_14001e238;
LAB_14001dc63:
      auVar161 = auVar208._16_16_;
      if ((uVar29 & 0x10) == 0) goto LAB_14001dc72;
LAB_14001e258:
      *(int *)(param_1 + 4 + (longlong)iVar124) = auVar161._0_4_;
      if ((uVar29 & 0x20) != 0) goto LAB_14001e270;
LAB_14001dc7b:
      if ((uVar29 & 0x40) == 0) goto LAB_14001dc84;
LAB_14001e28a:
      uVar39 = vextractps_avx(auVar161,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar44) = uVar39;
      auVar201._0_4_ = fVar250 * fVar235;
      auVar201._4_4_ = fVar251 * fVar182;
      auVar201._8_4_ = fVar184 * fVar239;
      auVar201._12_4_ = fVar192 * fVar183;
      auVar201._16_4_ = fVar193 * fVar202;
      auVar201._20_4_ = fVar194 * fVar209;
      auVar201._24_4_ = fVar195 * fVar210;
      auVar201._28_4_ = fVar196 * fVar212;
      if (cVar15 < '\0') goto LAB_14001e2a8;
LAB_14001dc91:
      auVar208 = vsubps_avx(auVar110,auVar201);
      if ((uVar29 & 1) == 0) goto LAB_14001dc9f;
LAB_14001e2c7:
      *(int *)(param_1 + 8 + (longlong)iVar72) = auVar208._0_4_;
      if ((uVar29 & 2) != 0) goto LAB_14001e2df;
LAB_14001dca8:
      if ((uVar29 & 4) == 0) goto LAB_14001dcb1;
LAB_14001e2f9:
      uVar39 = vextractps_avx(auVar208._0_16_,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar41) = uVar39;
      if ((uVar29 & 8) != 0) goto LAB_14001e313;
LAB_14001dcba:
      auVar161 = auVar208._16_16_;
    }
    if ((uVar29 & 0x10) != 0) {
      *(int *)(param_1 + 8 + (longlong)iVar124) = auVar161._0_4_;
    }
    if ((uVar29 & 0x20) != 0) {
      uVar39 = vextractps_avx(auVar161,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar43) = uVar39;
    }
    if ((uVar29 & 0x40) != 0) {
      uVar39 = vextractps_avx(auVar161,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar44) = uVar39;
    }
    if (cVar15 < '\0') {
      uVar39 = vextractps_avx(auVar161,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar45) = uVar39;
    }
    if ((uVar29 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iVar72) = fVar88;
    }
    if ((uVar29 & 2) != 0) {
      uVar39 = vextractps_avx(auVar180,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar40) = uVar39;
    }
    if ((uVar29 & 4) != 0) {
      uVar39 = vextractps_avx(auVar180,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar41) = uVar39;
    }
    if ((uVar29 & 8) != 0) {
      uVar39 = vextractps_avx(auVar180,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar42) = uVar39;
    }
    if ((uVar29 & 0x10) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iVar124) = fVar102;
    }
    if ((uVar29 & 0x20) != 0) {
      uVar39 = vextractps_avx(auVar162,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar43) = uVar39;
    }
    if ((uVar29 & 0x40) != 0) {
      uVar39 = vextractps_avx(auVar162,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar44) = uVar39;
    }
    if (cVar15 < '\0') {
      uVar39 = vextractps_avx(auVar162,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar45) = uVar39;
    }
  }
  auVar162 = vpcmpgtd_avx(auVar164,auVar137);
  auVar208 = vcmpps_avx(ZEXT832(0) << 0x20,auVar243,0xc);
  auVar85._0_4_ = auVar208._0_4_ & auVar162._0_4_;
  auVar85._4_4_ = auVar208._4_4_ & auVar162._4_4_;
  auVar85._8_4_ = auVar208._8_4_ & auVar162._8_4_;
  auVar85._12_4_ = auVar208._12_4_ & auVar162._12_4_;
  auVar85._16_4_ = auVar208._16_4_ & uVar97;
  auVar85._20_4_ = auVar208._20_4_ & uVar100;
  auVar85._24_4_ = auVar208._24_4_ & uVar103;
  auVar85._28_4_ = auVar208._28_4_ & uVar106;
  uVar29 = vmovmskps_avx(auVar85);
  if (uVar29 == 0) goto LAB_14001defa;
  fVar149 = local_440 * fVar214 * fVar149;
  fVar177 = fStack_43c * auVar151._4_4_ * fVar177;
  fVar159 = fStack_438 * auVar151._8_4_ * fVar159;
  fVar178 = fStack_434 * auVar151._12_4_ * fVar178;
  fVar160 = fStack_430 * fVar216 * fVar160;
  fVar179 = fStack_42c * auVar134._4_4_ * fVar179;
  fVar163 = fStack_428 * auVar134._8_4_ * fVar163;
  fVar181 = fStack_424 * auVar134._12_4_ * fVar181;
  local_420 = auVar79._0_4_;
  fStack_41c = auVar79._4_4_;
  fStack_418 = auVar79._8_4_;
  fStack_414 = auVar79._12_4_;
  fStack_410 = auVar79._16_4_;
  fStack_40c = auVar79._20_4_;
  fStack_408 = auVar79._24_4_;
  fStack_404 = auVar79._28_4_;
  auVar162._0_4_ = fVar149 * fVar132 + local_420;
  auVar162._4_4_ = fVar177 * fVar144 + fStack_41c;
  auVar162._8_4_ = fVar159 * fVar145 + fStack_418;
  auVar162._12_4_ = fVar178 * fVar146 + fStack_414;
  auVar174._16_4_ = fVar160 * fVar147 + fStack_410;
  auVar174._0_16_ = auVar162;
  auVar174._20_4_ = fVar179 * fVar167 + fStack_40c;
  auVar174._24_4_ = fVar163 * fVar148 + fStack_408;
  auVar174._28_4_ = fVar181 * fVar176 + fStack_404;
  cVar15 = (char)uVar29;
  iVar72 = auVar135._0_4_;
  auVar180 = auVar174._16_16_;
  iVar40 = auVar135._4_4_;
  iVar41 = auVar135._8_4_;
  iVar42 = auVar135._12_4_;
  local_5e0 = auVar77._0_4_;
  fStack_5dc = auVar77._4_4_;
  fStack_5d8 = auVar77._8_4_;
  fStack_5d4 = auVar77._12_4_;
  fStack_5d0 = auVar77._16_4_;
  fStack_5cc = auVar77._20_4_;
  fStack_5c8 = auVar77._24_4_;
  fStack_5c4 = auVar77._28_4_;
  local_5a0 = auVar78._0_4_;
  fStack_59c = auVar78._4_4_;
  fStack_598 = auVar78._8_4_;
  fStack_594 = auVar78._12_4_;
  fStack_590 = auVar78._16_4_;
  fStack_58c = auVar78._20_4_;
  fStack_588 = auVar78._24_4_;
  fStack_584 = auVar78._28_4_;
  iVar124 = auVar185._0_4_;
  iVar43 = auVar185._4_4_;
  iVar44 = auVar185._8_4_;
  iVar45 = auVar185._12_4_;
  if ((uVar29 & 1) == 0) {
    if ((uVar29 & 2) == 0) goto LAB_14001ddb8;
LAB_14001e47b:
    uVar39 = vextractps_avx(auVar162,1);
    *(undefined4 *)(param_1 + iVar40) = uVar39;
    if ((uVar29 & 4) != 0) goto LAB_14001e494;
LAB_14001ddc1:
    if ((uVar29 & 8) == 0) goto LAB_14001ddca;
LAB_14001e4ad:
    uVar39 = vextractps_avx(auVar162,3);
    *(undefined4 *)(param_1 + iVar42) = uVar39;
    if ((uVar29 & 0x10) != 0) goto LAB_14001e4d2;
LAB_14001dddf:
    if ((uVar29 & 0x20) == 0) goto LAB_14001dde8;
LAB_14001e4e9:
    uVar39 = vextractps_avx(auVar180,1);
    *(undefined4 *)(param_1 + iVar43) = uVar39;
    if ((uVar29 & 0x40) != 0) goto LAB_14001e502;
LAB_14001ddf1:
    if (-1 < cVar15) goto LAB_14001ddfd;
LAB_14001e51e:
    uVar39 = vextractps_avx(auVar180,3);
    *(undefined4 *)(param_1 + iVar45) = uVar39;
    auVar175._0_4_ = fVar218 * fVar149 + local_5e0;
    auVar175._4_4_ = fVar220 * fVar177 + fStack_5dc;
    auVar175._8_4_ = fVar241 * fVar159 + fStack_5d8;
    auVar175._12_4_ = fVar245 * fVar178 + fStack_5d4;
    auVar175._16_4_ = fVar246 * fVar160 + fStack_5d0;
    auVar175._20_4_ = fVar247 * fVar179 + fStack_5cc;
    auVar175._24_4_ = fVar248 * fVar163 + fStack_5c8;
    auVar175._28_4_ = fVar249 * fVar181 + fStack_5c4;
    if ((uVar29 & 1) != 0) goto LAB_14001e540;
LAB_14001de0f:
    if ((uVar29 & 2) == 0) goto LAB_14001de18;
LAB_14001e558:
    uVar39 = vextractps_avx(auVar175._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar40) = uVar39;
    if ((uVar29 & 4) != 0) goto LAB_14001e572;
LAB_14001de21:
    if ((uVar29 & 8) == 0) goto LAB_14001de2a;
LAB_14001e58c:
    uVar39 = vextractps_avx(auVar175._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar42) = uVar39;
    auVar162 = auVar175._16_16_;
    if ((uVar29 & 0x10) != 0) goto LAB_14001e5ac;
LAB_14001de39:
    if ((uVar29 & 0x20) == 0) goto LAB_14001de42;
LAB_14001e5c4:
    uVar39 = vextractps_avx(auVar162,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar43) = uVar39;
    if ((uVar29 & 0x40) != 0) goto LAB_14001e5de;
LAB_14001de4b:
    if (-1 < cVar15) goto LAB_14001de57;
LAB_14001e5fb:
    uVar39 = vextractps_avx(auVar162,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar45) = uVar39;
    auVar158._0_4_ = fVar235 * fVar149 + local_5a0;
    auVar158._4_4_ = fVar182 * fVar177 + fStack_59c;
    auVar158._8_4_ = fVar239 * fVar159 + fStack_598;
    auVar158._12_4_ = fVar183 * fVar178 + fStack_594;
    auVar158._16_4_ = fVar202 * fVar160 + fStack_590;
    auVar158._20_4_ = fVar209 * fVar179 + fStack_58c;
    auVar158._24_4_ = fVar210 * fVar163 + fStack_588;
    auVar158._28_4_ = fVar212 * fVar181 + fStack_584;
    if ((uVar29 & 1) != 0) goto LAB_14001e61e;
LAB_14001de69:
    if ((uVar29 & 2) == 0) goto LAB_14001de72;
LAB_14001e636:
    uVar39 = vextractps_avx(auVar158._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar40) = uVar39;
    if ((uVar29 & 4) != 0) goto LAB_14001e650;
LAB_14001de7b:
    if ((uVar29 & 8) == 0) goto LAB_14001de84;
LAB_14001e66a:
    uVar39 = vextractps_avx(auVar158._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar42) = uVar39;
    auVar162 = auVar158._16_16_;
  }
  else {
    *(float *)(param_1 + iVar72) = auVar162._0_4_;
    if ((uVar29 & 2) != 0) goto LAB_14001e47b;
LAB_14001ddb8:
    if ((uVar29 & 4) == 0) goto LAB_14001ddc1;
LAB_14001e494:
    uVar39 = vextractps_avx(auVar162,2);
    *(undefined4 *)(param_1 + iVar41) = uVar39;
    if ((uVar29 & 8) != 0) goto LAB_14001e4ad;
LAB_14001ddca:
    if ((uVar29 & 0x10) == 0) goto LAB_14001dddf;
LAB_14001e4d2:
    *(float *)(param_1 + iVar124) = auVar174._16_4_;
    if ((uVar29 & 0x20) != 0) goto LAB_14001e4e9;
LAB_14001dde8:
    if ((uVar29 & 0x40) == 0) goto LAB_14001ddf1;
LAB_14001e502:
    uVar39 = vextractps_avx(auVar180,2);
    *(undefined4 *)(param_1 + iVar44) = uVar39;
    if (cVar15 < '\0') goto LAB_14001e51e;
LAB_14001ddfd:
    auVar175._0_4_ = fVar218 * fVar149 + local_5e0;
    auVar175._4_4_ = fVar220 * fVar177 + fStack_5dc;
    auVar175._8_4_ = fVar241 * fVar159 + fStack_5d8;
    auVar175._12_4_ = fVar245 * fVar178 + fStack_5d4;
    auVar175._16_4_ = fVar246 * fVar160 + fStack_5d0;
    auVar175._20_4_ = fVar247 * fVar179 + fStack_5cc;
    auVar175._24_4_ = fVar248 * fVar163 + fStack_5c8;
    auVar175._28_4_ = fVar249 * fVar181 + fStack_5c4;
    if ((uVar29 & 1) == 0) goto LAB_14001de0f;
LAB_14001e540:
    *(int *)(param_1 + 4 + (longlong)iVar72) = auVar175._0_4_;
    if ((uVar29 & 2) != 0) goto LAB_14001e558;
LAB_14001de18:
    if ((uVar29 & 4) == 0) goto LAB_14001de21;
LAB_14001e572:
    uVar39 = vextractps_avx(auVar175._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar41) = uVar39;
    if ((uVar29 & 8) != 0) goto LAB_14001e58c;
LAB_14001de2a:
    auVar162 = auVar175._16_16_;
    if ((uVar29 & 0x10) == 0) goto LAB_14001de39;
LAB_14001e5ac:
    *(int *)(param_1 + 4 + (longlong)iVar124) = auVar162._0_4_;
    if ((uVar29 & 0x20) != 0) goto LAB_14001e5c4;
LAB_14001de42:
    if ((uVar29 & 0x40) == 0) goto LAB_14001de4b;
LAB_14001e5de:
    uVar39 = vextractps_avx(auVar162,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar44) = uVar39;
    if (cVar15 < '\0') goto LAB_14001e5fb;
LAB_14001de57:
    auVar158._0_4_ = fVar235 * fVar149 + local_5a0;
    auVar158._4_4_ = fVar182 * fVar177 + fStack_59c;
    auVar158._8_4_ = fVar239 * fVar159 + fStack_598;
    auVar158._12_4_ = fVar183 * fVar178 + fStack_594;
    auVar158._16_4_ = fVar202 * fVar160 + fStack_590;
    auVar158._20_4_ = fVar209 * fVar179 + fStack_58c;
    auVar158._24_4_ = fVar210 * fVar163 + fStack_588;
    auVar158._28_4_ = fVar212 * fVar181 + fStack_584;
    if ((uVar29 & 1) == 0) goto LAB_14001de69;
LAB_14001e61e:
    *(int *)(param_1 + 8 + (longlong)iVar72) = auVar158._0_4_;
    if ((uVar29 & 2) != 0) goto LAB_14001e636;
LAB_14001de72:
    if ((uVar29 & 4) == 0) goto LAB_14001de7b;
LAB_14001e650:
    uVar39 = vextractps_avx(auVar158._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar41) = uVar39;
    if ((uVar29 & 8) != 0) goto LAB_14001e66a;
LAB_14001de84:
    auVar162 = auVar158._16_16_;
  }
  if ((uVar29 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar124) = auVar162._0_4_;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar162,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar43) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar162,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar44) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar162,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar45) = uVar39;
  }
  if ((uVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar72) = fVar214;
  }
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar151,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar40) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar151,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar41) = uVar39;
  }
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar151,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar42) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar124) = fVar216;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar134,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar43) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar134,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar44) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar134,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar45) = uVar39;
  }
LAB_14001defa:
  auVar134 = vpcmpgtd_avx(auVar164,auVar137);
  auVar79 = vcmpps_avx(auVar166,ZEXT1232(ZEXT812(0)),0xc);
  auVar86._0_4_ = auVar79._0_4_ & auVar134._0_4_;
  auVar86._4_4_ = auVar79._4_4_ & auVar134._4_4_;
  auVar86._8_4_ = auVar79._8_4_ & auVar134._8_4_;
  auVar86._12_4_ = auVar79._12_4_ & auVar134._12_4_;
  auVar86._16_4_ = auVar79._16_4_ & uVar97;
  auVar86._20_4_ = auVar79._20_4_ & uVar100;
  auVar86._24_4_ = auVar79._24_4_ & uVar103;
  auVar86._28_4_ = auVar79._28_4_ & uVar106;
  uVar29 = vmovmskps_avx(auVar86);
  if (uVar29 == 0) {
    return;
  }
  local_380 = auVar133._0_4_;
  iStack_37c = auVar133._4_4_;
  iStack_378 = auVar133._8_4_;
  iStack_374 = auVar133._12_4_;
  local_560 = auVar136._0_4_;
  iStack_55c = auVar136._4_4_;
  iStack_558 = auVar136._8_4_;
  iStack_554 = auVar136._12_4_;
  fVar88 = local_440 * fVar89 * auVar169._0_4_;
  fVar102 = fStack_43c * auVar168._4_4_ * auVar169._4_4_;
  fVar149 = fStack_438 * auVar168._8_4_ * auVar169._8_4_;
  fVar177 = fStack_434 * auVar168._12_4_ * auVar169._12_4_;
  fVar159 = fStack_430 * fVar92 * auVar169._16_4_;
  fVar178 = fStack_42c * auVar150._4_4_ * auVar169._20_4_;
  fVar160 = fStack_428 * auVar150._8_4_ * auVar169._24_4_;
  fVar179 = fStack_424 * auVar150._12_4_ * auVar169._28_4_;
  auVar137._0_4_ = fVar88 * fVar132 + auVar76._0_4_;
  auVar137._4_4_ = fVar102 * fVar144 + auVar76._4_4_;
  auVar137._8_4_ = fVar149 * fVar145 + auVar76._8_4_;
  auVar137._12_4_ = fVar177 * fVar146 + auVar76._12_4_;
  auVar142._16_4_ = fVar159 * fVar147 + auVar76._16_4_;
  auVar142._0_16_ = auVar137;
  auVar142._20_4_ = fVar178 * fVar167 + auVar76._20_4_;
  auVar142._24_4_ = fVar160 * fVar148 + auVar76._24_4_;
  auVar142._28_4_ = fVar179 * fVar176 + auVar76._28_4_;
  cVar15 = (char)uVar29;
  auVar134 = auVar142._16_16_;
  if ((uVar29 & 1) != 0) {
    *(float *)(param_1 + local_380) = auVar137._0_4_;
  }
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar137,1);
    *(undefined4 *)(param_1 + iStack_37c) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar137,2);
    *(undefined4 *)(param_1 + iStack_378) = uVar39;
  }
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar137,3);
    *(undefined4 *)(param_1 + iStack_374) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(float *)(param_1 + local_560) = auVar142._16_4_;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar134,1);
    *(undefined4 *)(param_1 + iStack_55c) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar134,2);
    *(undefined4 *)(param_1 + iStack_558) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar134,3);
    *(undefined4 *)(param_1 + iStack_554) = uVar39;
    auVar143._0_4_ = fVar218 * fVar88 + fVar70;
    auVar143._4_4_ = fVar220 * fVar102 + fVar90;
    auVar143._8_4_ = fVar241 * fVar149 + fVar93;
    auVar143._12_4_ = fVar245 * fVar177 + fVar96;
    auVar143._16_4_ = fVar246 * fVar159 + fVar99;
    auVar143._20_4_ = fVar247 * fVar178 + fVar105;
    auVar143._24_4_ = fVar248 * fVar160 + fVar69;
    auVar143._28_4_ = fVar249 * fVar179 + fVar87;
  }
  else {
    auVar143._0_4_ = fVar218 * fVar88 + fVar70;
    auVar143._4_4_ = fVar220 * fVar102 + fVar90;
    auVar143._8_4_ = fVar241 * fVar149 + fVar93;
    auVar143._12_4_ = fVar245 * fVar177 + fVar96;
    auVar143._16_4_ = fVar246 * fVar159 + fVar99;
    auVar143._20_4_ = fVar247 * fVar178 + fVar105;
    auVar143._24_4_ = fVar248 * fVar160 + fVar69;
    auVar143._28_4_ = fVar249 * fVar179 + fVar87;
  }
  if ((uVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_380) = auVar143._0_4_;
  }
  auVar134 = auVar143._0_16_;
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar134,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_37c) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar134,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_378) = uVar39;
  }
  auVar164 = auVar143._16_16_;
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar134,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_374) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_560) = auVar143._16_4_;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar164,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_55c) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar164,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_558) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar164,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_554) = uVar39;
    auVar127._0_4_ = fVar235 * fVar88 + fVar95;
    auVar127._4_4_ = fVar182 * fVar102 + fVar98;
    auVar127._8_4_ = fVar239 * fVar149 + fVar101;
    auVar127._12_4_ = fVar183 * fVar177 + fVar104;
    auVar127._16_4_ = fVar202 * fVar159 + fVar128;
    auVar127._20_4_ = fVar209 * fVar178 + fVar129;
    auVar127._24_4_ = fVar210 * fVar160 + fVar130;
    auVar127._28_4_ = fVar212 * fVar179 + fVar131;
  }
  else {
    auVar127._0_4_ = fVar235 * fVar88 + fVar95;
    auVar127._4_4_ = fVar182 * fVar102 + fVar98;
    auVar127._8_4_ = fVar239 * fVar149 + fVar101;
    auVar127._12_4_ = fVar183 * fVar177 + fVar104;
    auVar127._16_4_ = fVar202 * fVar159 + fVar128;
    auVar127._20_4_ = fVar209 * fVar178 + fVar129;
    auVar127._24_4_ = fVar210 * fVar160 + fVar130;
    auVar127._28_4_ = fVar212 * fVar179 + fVar131;
  }
  if ((uVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_380) = auVar127._0_4_;
  }
  auVar134 = auVar127._0_16_;
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar134,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_37c) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar134,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_378) = uVar39;
  }
  auVar164 = auVar127._16_16_;
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar134,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_374) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_560) = auVar127._16_4_;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar164,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_55c) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar164,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_558) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar164,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_554) = uVar39;
  }
  if ((uVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_380) = fVar89;
  }
  if ((uVar29 & 2) != 0) {
    uVar39 = vextractps_avx(auVar168,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_37c) = uVar39;
  }
  if ((uVar29 & 4) != 0) {
    uVar39 = vextractps_avx(auVar168,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_378) = uVar39;
  }
  if ((uVar29 & 8) != 0) {
    uVar39 = vextractps_avx(auVar168,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_374) = uVar39;
  }
  if ((uVar29 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_560) = fVar92;
  }
  if ((uVar29 & 0x20) != 0) {
    uVar39 = vextractps_avx(auVar150,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_55c) = uVar39;
  }
  if ((uVar29 & 0x40) != 0) {
    uVar39 = vextractps_avx(auVar150,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_558) = uVar39;
  }
  if (cVar15 < '\0') {
    uVar39 = vextractps_avx(auVar150,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_554) = uVar39;
  }
  return;
}

// ApplyAxialSpringConstraintsWithWeightMaps_avx @ 14001eb10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraintsWithWeightMaps_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  ulonglong uVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  undefined1 (*pauVar21) [32];
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  int iVar42;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  uint uVar62;
  longlong lVar63;
  longlong lVar64;
  ulonglong uVar65;
  ulonglong uVar67;
  longlong lVar68;
  ulonglong uVar69;
  longlong lVar70;
  longlong lVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  float fVar76;
  undefined1 auVar77 [16];
  uint uVar108;
  uint uVar110;
  uint uVar114;
  uint uVar117;
  uint uVar119;
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  uint uVar112;
  uint uVar121;
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  float fVar109;
  float fVar111;
  float fVar113;
  float fVar115;
  float fVar118;
  float fVar120;
  float fVar122;
  undefined1 auVar93 [32];
  undefined1 auVar116 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar82 [16];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar83 [16];
  undefined1 auVar101 [32];
  undefined1 auVar84 [16];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  float fVar123;
  float fVar124;
  undefined1 auVar125 [16];
  float fVar138;
  float fVar140;
  float fVar144;
  float fVar146;
  float fVar148;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  float fVar139;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar145;
  float fVar147;
  float fVar149;
  float fVar150;
  float fVar151;
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
  undefined1 auVar152 [16];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar153 [16];
  undefined1 auVar158 [32];
  undefined1 auVar154 [16];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  uint uVar163;
  uint uVar172;
  uint uVar173;
  uint uVar174;
  uint uVar175;
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  uint uVar176;
  int iVar177;
  undefined1 auVar178 [16];
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
  float fVar194;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  float fVar196;
  float fVar197;
  float fVar198;
  undefined1 auVar192 [32];
  float fVar195;
  float fVar199;
  undefined1 auVar193 [32];
  float fVar200;
  float fVar210;
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  float fVar208;
  float fVar209;
  float fVar211;
  float fVar212;
  float fVar213;
  undefined1 auVar203 [32];
  float fVar214;
  float fVar215;
  float fVar216;
  undefined1 auVar204 [32];
  undefined1 auVar205 [32];
  undefined1 auVar207 [32];
  float fVar217;
  float fVar220;
  float fVar221;
  float fVar222;
  float fVar223;
  float fVar224;
  float fVar225;
  undefined1 auVar218 [32];
  float fVar226;
  undefined1 auVar219 [32];
  undefined1 auVar227 [16];
  undefined1 auVar228 [32];
  undefined1 auVar229 [32];
  undefined1 auVar230 [32];
  float fVar236;
  float fVar237;
  float fVar238;
  float fVar239;
  float fVar240;
  undefined1 auVar231 [32];
  undefined1 auVar232 [32];
  undefined1 auVar233 [32];
  float fVar241;
  undefined1 auVar234 [32];
  undefined1 auVar235 [32];
  undefined1 auVar242 [32];
  undefined1 auVar243 [32];
  undefined1 auVar244 [32];
  undefined1 auVar245 [32];
  undefined1 auVar246 [32];
  float fVar247;
  float fVar248;
  float fVar252;
  float fVar253;
  float fVar254;
  float fVar255;
  float fVar256;
  float fVar257;
  float fVar258;
  undefined1 auVar249 [32];
  undefined1 auVar250 [32];
  float fVar259;
  undefined1 auVar251 [32];
  undefined1 auVar260 [32];
  undefined1 auVar261 [32];
  undefined1 auVar262 [32];
  undefined1 in_ZMM14 [64];
  uint uVar263;
  int iVar264;
  undefined1 auVar265 [16];
  uint uVar268;
  uint uVar269;
  uint uVar270;
  uint uVar271;
  uint uVar273;
  uint uVar274;
  undefined1 auVar266 [32];
  undefined1 auVar272 [16];
  undefined1 auVar267 [32];
  uint uVar275;
  float local_5e0;
  float fStack_5dc;
  float fStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float local_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  int local_4f0;
  int iStack_4ec;
  int iStack_4e8;
  int iStack_4e4;
  float local_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  undefined1 local_3c0 [32];
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  int local_340;
  int iStack_33c;
  int iStack_338;
  int iStack_334;
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
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  ulonglong uVar66;
  undefined1 auVar206 [32];
  
  auVar84 = in_ZMM14._0_16_;
  uVar62 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar62 = param_7;
  }
  if ((int)(uVar62 & 0xfffffff8) < 1) {
    uVar74 = 0;
  }
  else {
    pauVar21 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar163 = 0;
    uVar74 = 0;
    do {
      auVar155 = pauVar21[-2];
      auVar85._16_16_ = *(undefined1 (*) [16])pauVar21[-2];
      auVar85._0_16_ = *(undefined1 (*) [16])*(undefined1 (*) [32])(pauVar21[-2] + 0x10);
      auVar85 = vblendps_avx(auVar155,auVar85,0x24);
      auVar85 = vpermilps_avx(auVar85,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar2 = *(undefined4 *)(pauVar21[-1] + 4);
      auVar126._4_4_ = uVar2;
      auVar126._0_4_ = uVar2;
      auVar126._8_4_ = uVar2;
      auVar126._12_4_ = uVar2;
      uVar2 = *(undefined4 *)(pauVar21[-1] + 8);
      auVar126._20_4_ = uVar2;
      auVar126._16_4_ = uVar2;
      auVar126._24_4_ = uVar2;
      auVar126._28_4_ = uVar2;
      auVar85 = vblendps_avx(auVar85,auVar126,0x88);
      auVar86._16_16_ = *(undefined1 (*) [16])*pauVar21;
      auVar86._0_16_ = *(undefined1 (*) [16])(*pauVar21 + 0x10);
      auVar171 = vblendps_avx(auVar86,*pauVar21,0x44);
      auVar171 = vpermilps_avx(auVar171,
                               ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                              );
      auVar84 = vshufps_avx(*(undefined1 (*) [16])(pauVar21[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar21[-1] + 0x10),0xec);
      uVar2 = *(undefined4 *)(pauVar21[-1] + 0x14);
      auVar164._20_4_ = uVar2;
      auVar164._16_4_ = uVar2;
      auVar164._24_4_ = uVar2;
      auVar164._28_4_ = uVar2;
      auVar164._0_16_ = auVar84;
      auVar171 = vblendps_avx(auVar171,auVar164,0x13);
      auVar155 = vblendps_avx(pauVar21[-1],auVar155,0x24);
      auVar155 = vshufps_avx(*(undefined1 (*) [32])(pauVar21[-2] + 0x10),auVar155,0x21);
      auVar126 = vshufps_avx(auVar155,pauVar21[-1],0xc2);
      auVar155 = vshufps_avx(auVar86,*pauVar21,0xc4);
      uVar22 = (ulonglong)uVar163;
      auVar84 = *(undefined1 (*) [16])(param_3 + uVar22);
      auVar116 = *(undefined1 (*) [16])(param_3 + 0x10 + uVar22);
      auVar266._16_16_ = auVar116;
      auVar266._0_16_ = auVar84;
      auVar155 = vblendps_avx(auVar126,auVar155,0xe0);
      puVar1 = (undefined8 *)(param_4 + 0x10 + uVar22);
      local_3c0._16_8_ = *puVar1;
      local_3c0._0_16_ = *(undefined1 (*) [16])(param_4 + uVar22);
      local_3c0._24_8_ = puVar1[1];
      auVar83 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_5 + 4 + uVar74)));
      auVar77 = vpslld_avx(auVar171._16_16_,4);
      auVar190 = vpslld_avx(auVar85._16_16_,4);
      lVar34 = (longlong)auVar190._0_4_;
      lVar63 = (longlong)auVar190._4_4_;
      lVar55 = (longlong)auVar190._8_4_;
      lVar30 = (longlong)auVar190._12_4_;
      lVar50 = (longlong)auVar77._0_4_;
      lVar47 = (longlong)auVar77._4_4_;
      lVar28 = (longlong)auVar77._8_4_;
      lVar23 = (longlong)auVar77._12_4_;
      auVar77 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar50)),
                              ZEXT416(*(uint *)(param_1 + lVar47)),0x10);
      auVar77 = vinsertps_avx(auVar77,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      auVar77 = vinsertps_avx(auVar77,ZEXT416(*(uint *)(param_1 + lVar23)),0x30);
      auVar190 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + lVar63)),0x10);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_1 + lVar55)),0x20);
      auVar190 = vinsertps_avx(auVar190,ZEXT416(*(uint *)(param_1 + lVar30)),0x30);
      auVar265 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar47)),0x10);
      auVar265 = vinsertps_avx(auVar265,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      auVar265 = vinsertps_avx(auVar265,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x30);
      auVar272 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar63)),0x10);
      auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(param_1 + 4 + lVar55)),0x20);
      auVar249._16_16_ = auVar77;
      auVar249._0_16_ = auVar190;
      auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x30);
      auVar260._16_16_ = auVar265;
      auVar260._0_16_ = auVar272;
      auVar191 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar50)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar47)),0x10);
      auVar191 = vinsertps_avx(auVar191,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      auVar191 = vinsertps_avx(auVar191,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x30);
      auVar227 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar34)),
                               ZEXT416(*(uint *)(param_1 + 8 + lVar63)),0x10);
      auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(param_1 + 8 + lVar55)),0x20);
      auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x30);
      auVar87._16_16_ = auVar191;
      auVar87._0_16_ = auVar227;
      uVar20 = *(uint *)(param_1 + 0xc + lVar34);
      uVar172 = *(uint *)(param_1 + 0xc + lVar63);
      uVar173 = *(uint *)(param_1 + 0xc + lVar55);
      uVar174 = *(uint *)(param_1 + 0xc + lVar50);
      uVar175 = *(uint *)(param_1 + 0xc + lVar47);
      uVar176 = *(uint *)(param_1 + 0xc + lVar28);
      auVar178 = vpslld_avx(auVar155._16_16_,4);
      auVar78 = vpslld_avx(auVar126._0_16_,4);
      auVar79 = vpslld_avx(auVar83,2);
      auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar79._0_4_)),
                              ZEXT416(*(uint *)(param_6 + (ulonglong)auVar79._4_4_)),0x10);
      uVar263 = *(uint *)(param_1 + 0xc + lVar23);
      auVar13 = vinsertps_avx(ZEXT416(uVar174),ZEXT416(uVar175),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(uVar176),0x20);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(uVar263),0x30);
      auVar202 = vinsertps_avx(ZEXT416(uVar20),ZEXT416(uVar172),0x10);
      auVar202 = vinsertps_avx(auVar202,ZEXT416(uVar173),0x20);
      lVar35 = (longlong)auVar78._0_4_;
      lVar64 = (longlong)auVar78._4_4_;
      lVar56 = (longlong)auVar78._8_4_;
      lVar48 = (longlong)auVar178._0_4_;
      lVar29 = (longlong)auVar178._4_4_;
      lVar24 = (longlong)auVar178._8_4_;
      auVar201 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar48)),
                               ZEXT416(*(uint *)(param_1 + lVar29)),0x10);
      auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(param_1 + lVar24)),0x20);
      lVar70 = (longlong)auVar178._12_4_;
      auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(param_1 + lVar70)),0x30);
      auVar178 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar35)),
                               ZEXT416(*(uint *)(param_1 + lVar64)),0x10);
      auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)(param_1 + lVar56)),0x20);
      lVar51 = (longlong)auVar78._12_4_;
      auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)(param_1 + lVar51)),0x30);
      uVar268 = *(uint *)(param_1 + 0xc + lVar30);
      auVar202 = vinsertps_avx(auVar202,ZEXT416(uVar268),0x30);
      auVar78 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar48)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar29)),0x10);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_1 + 4 + lVar24)),0x20);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_1 + 4 + lVar70)),0x30);
      auVar218._16_16_ = auVar13;
      auVar218._0_16_ = auVar202;
      auVar125 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar35)),
                               ZEXT416(*(uint *)(param_1 + 4 + lVar64)),0x10);
      auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + 4 + lVar56)),0x20);
      auVar125 = vinsertps_avx(auVar125,ZEXT416(*(uint *)(param_1 + 4 + lVar51)),0x30);
      auVar242._16_16_ = auVar201;
      auVar242._0_16_ = auVar178;
      auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar48)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar29)),0x10);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 8 + lVar24)),0x20);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 8 + lVar70)),0x30);
      auVar228._16_16_ = auVar78;
      auVar228._0_16_ = auVar125;
      auVar82 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar64)),0x10);
      auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(param_1 + 8 + lVar56)),0x20);
      auVar82 = vinsertps_avx(auVar82,ZEXT416(*(uint *)(param_1 + 8 + lVar51)),0x30);
      auVar203._16_16_ = auVar14;
      auVar203._0_16_ = auVar82;
      auVar80 = vpslld_avx(auVar85._0_16_,4);
      auVar81 = vpslld_avx(auVar171._0_16_,4);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar79._8_4_)),0x20);
      uVar269 = *(uint *)(param_1 + 0xc + lVar48);
      uVar270 = *(uint *)(param_1 + 0xc + lVar29);
      uVar271 = *(uint *)(param_1 + 0xc + lVar24);
      auVar152 = vinsertps_avx(ZEXT416(uVar269),ZEXT416(uVar270),0x10);
      auVar152 = vinsertps_avx(auVar152,ZEXT416(uVar271),0x20);
      uVar273 = *(uint *)(param_1 + 0xc + lVar70);
      auVar152 = vinsertps_avx(auVar152,ZEXT416(uVar273),0x30);
      uVar274 = *(uint *)(param_1 + 0xc + lVar35);
      uVar275 = *(uint *)(param_1 + 0xc + lVar64);
      uVar3 = *(uint *)(param_1 + 0xc + lVar56);
      auVar153 = vinsertps_avx(ZEXT416(uVar274),ZEXT416(uVar275),0x10);
      auVar153 = vinsertps_avx(auVar153,ZEXT416(uVar3),0x20);
      uVar4 = *(uint *)(param_1 + 0xc + lVar51);
      auVar153 = vinsertps_avx(auVar153,ZEXT416(uVar4),0x30);
      lVar68 = (longlong)auVar80._0_4_;
      lVar71 = (longlong)auVar80._4_4_;
      lVar52 = (longlong)auVar80._8_4_;
      lVar57 = (longlong)auVar81._0_4_;
      lVar36 = (longlong)auVar81._4_4_;
      lVar39 = (longlong)auVar81._8_4_;
      auVar154 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar57)),
                               ZEXT416(*(uint *)(param_1 + lVar36)),0x10);
      auVar154 = vinsertps_avx(auVar154,ZEXT416(*(uint *)(param_1 + lVar39)),0x20);
      lVar31 = (longlong)auVar81._12_4_;
      auVar154 = vinsertps_avx(auVar154,ZEXT416(*(uint *)(param_1 + lVar31)),0x30);
      auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar68)),
                              ZEXT416(*(uint *)(param_1 + lVar71)),0x10);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + lVar52)),0x20);
      lVar49 = (longlong)auVar80._12_4_;
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + lVar49)),0x30);
      auVar80 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar57)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar36)),0x10);
      auVar80 = vinsertps_avx(auVar80,ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x20);
      auVar186._16_16_ = auVar152;
      auVar186._0_16_ = auVar153;
      auVar80 = vinsertps_avx(auVar80,ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar68)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar71)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 4 + lVar52)),0x20);
      auVar165._16_16_ = auVar154;
      auVar165._0_16_ = auVar81;
      auVar154 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 4 + lVar49)),0x30);
      auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar57)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar36)),0x10);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x20);
      auVar231._16_16_ = auVar80;
      auVar231._0_16_ = auVar154;
      auVar154 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x30);
      auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar68)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar71)),0x10);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + 8 + lVar52)),0x20);
      auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_1 + 8 + lVar49)),0x30);
      auVar80 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_5 + uVar74)));
      auVar192._16_16_ = auVar154;
      auVar192._0_16_ = auVar81;
      auVar81 = vpslld_avx(auVar80,2);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar79._12_4_)),0x30);
      auVar154 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar81._0_4_)),
                               ZEXT416(*(uint *)(param_6 + (ulonglong)auVar81._4_4_)),0x10);
      auVar85 = vsubps_avx(auVar249,auVar242);
      fVar124 = auVar84._0_4_;
      fVar139 = auVar84._4_4_;
      fVar141 = auVar84._8_4_;
      fVar143 = auVar84._12_4_;
      fVar145 = auVar116._0_4_;
      fVar147 = auVar116._4_4_;
      fVar149 = auVar116._8_4_;
      fVar151 = auVar116._12_4_;
      auVar171 = vsubps_avx(auVar260,auVar228);
      auVar155._0_4_ = auVar178._0_4_ + fVar124 * auVar85._0_4_;
      auVar155._4_4_ = auVar178._4_4_ + fVar139 * auVar85._4_4_;
      auVar155._8_4_ = auVar178._8_4_ + fVar141 * auVar85._8_4_;
      auVar155._12_4_ = auVar178._12_4_ + fVar143 * auVar85._12_4_;
      auVar155._16_4_ = auVar201._0_4_ + fVar145 * auVar85._16_4_;
      auVar155._20_4_ = auVar201._4_4_ + fVar147 * auVar85._20_4_;
      auVar155._24_4_ = auVar201._8_4_ + fVar149 * auVar85._24_4_;
      auVar155._28_4_ = auVar201._12_4_ + fVar151 * auVar85._28_4_;
      fVar236 = auVar125._0_4_;
      auVar179._0_4_ = fVar236 + fVar124 * auVar171._0_4_;
      fVar237 = auVar125._4_4_;
      auVar179._4_4_ = fVar237 + fVar139 * auVar171._4_4_;
      fVar238 = auVar125._8_4_;
      auVar179._8_4_ = fVar238 + fVar141 * auVar171._8_4_;
      fVar239 = auVar125._12_4_;
      auVar179._12_4_ = fVar239 + fVar143 * auVar171._12_4_;
      fVar240 = auVar78._0_4_;
      auVar179._16_4_ = fVar240 + fVar145 * auVar171._16_4_;
      fVar241 = auVar78._4_4_;
      auVar179._20_4_ = fVar241 + fVar147 * auVar171._20_4_;
      fVar248 = auVar78._8_4_;
      auVar179._24_4_ = fVar248 + fVar149 * auVar171._24_4_;
      fVar253 = auVar78._12_4_;
      auVar179._28_4_ = fVar253 + fVar151 * auVar171._28_4_;
      auVar85 = vsubps_avx(auVar165,auVar155);
      auVar171 = vsubps_avx(auVar231,auVar179);
      auVar84 = vinsertps_avx(auVar154,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar81._8_4_)),0x20);
      auVar155 = vsubps_avx(auVar87,auVar203);
      fVar194 = auVar82._0_4_;
      auVar180._0_4_ = fVar194 + fVar124 * auVar155._0_4_;
      fVar195 = auVar82._4_4_;
      auVar180._4_4_ = fVar195 + fVar139 * auVar155._4_4_;
      fVar196 = auVar82._8_4_;
      auVar180._8_4_ = fVar196 + fVar141 * auVar155._8_4_;
      fVar197 = auVar82._12_4_;
      auVar180._12_4_ = fVar197 + fVar143 * auVar155._12_4_;
      fVar198 = auVar14._0_4_;
      auVar180._16_4_ = fVar198 + fVar145 * auVar155._16_4_;
      fVar199 = auVar14._4_4_;
      auVar180._20_4_ = fVar199 + fVar147 * auVar155._20_4_;
      fVar213 = auVar14._8_4_;
      auVar180._24_4_ = fVar213 + fVar149 * auVar155._24_4_;
      fVar215 = auVar14._12_4_;
      auVar180._28_4_ = fVar215 + fVar151 * auVar155._28_4_;
      auVar155 = vsubps_avx(auVar192,auVar180);
      auVar250._0_4_ =
           auVar85._0_4_ * auVar85._0_4_ + auVar171._0_4_ * auVar171._0_4_ +
           auVar155._0_4_ * auVar155._0_4_;
      auVar250._4_4_ =
           auVar85._4_4_ * auVar85._4_4_ + auVar171._4_4_ * auVar171._4_4_ +
           auVar155._4_4_ * auVar155._4_4_;
      auVar250._8_4_ =
           auVar85._8_4_ * auVar85._8_4_ + auVar171._8_4_ * auVar171._8_4_ +
           auVar155._8_4_ * auVar155._8_4_;
      auVar250._12_4_ =
           auVar85._12_4_ * auVar85._12_4_ + auVar171._12_4_ * auVar171._12_4_ +
           auVar155._12_4_ * auVar155._12_4_;
      auVar250._16_4_ =
           auVar85._16_4_ * auVar85._16_4_ + auVar171._16_4_ * auVar171._16_4_ +
           auVar155._16_4_ * auVar155._16_4_;
      auVar250._20_4_ =
           auVar85._20_4_ * auVar85._20_4_ + auVar171._20_4_ * auVar171._20_4_ +
           auVar155._20_4_ * auVar155._20_4_;
      auVar250._24_4_ =
           auVar85._24_4_ * auVar85._24_4_ + auVar171._24_4_ * auVar171._24_4_ +
           auVar155._24_4_ * auVar155._24_4_;
      auVar250._28_4_ =
           auVar85._28_4_ * auVar85._28_4_ + auVar171._28_4_ * auVar171._28_4_ +
           auVar155._28_4_ * auVar155._28_4_;
      auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar81._12_4_)),0x30);
      uVar19 = *(uint *)(param_1 + 0xc + lVar57);
      uVar5 = *(uint *)(param_1 + 0xc + lVar36);
      uVar6 = *(uint *)(param_1 + 0xc + lVar39);
      auVar116 = vinsertps_avx(ZEXT416(uVar19),ZEXT416(uVar5),0x10);
      auVar116 = vinsertps_avx(auVar116,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar31);
      auVar116 = vinsertps_avx(auVar116,ZEXT416(uVar7),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + lVar68);
      uVar9 = *(uint *)(param_1 + 0xc + lVar71);
      uVar10 = *(uint *)(param_1 + 0xc + lVar52);
      auVar78 = vinsertps_avx(ZEXT416(uVar8),ZEXT416(uVar9),0x10);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(uVar10),0x20);
      uVar11 = *(uint *)(param_1 + 0xc + lVar49);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(uVar11),0x30);
      auVar87 = vsqrtps_avx(auVar250);
      auVar127._16_16_ = auVar116;
      auVar127._0_16_ = auVar78;
      auVar85 = vdivps_avx(auVar85,auVar87);
      auVar171 = vdivps_avx(auVar171,auVar87);
      auVar155 = vdivps_avx(auVar155,auVar87);
      auVar126 = vsubps_avx(auVar87,local_3c0);
      fVar76 = auVar126._0_4_;
      fVar111 = auVar126._4_4_;
      fVar115 = auVar126._8_4_;
      fVar120 = auVar126._12_4_;
      fVar200 = auVar126._16_4_;
      fVar209 = auVar126._20_4_;
      fVar211 = auVar126._24_4_;
      fVar214 = auVar126._28_4_;
      auVar243._4_4_ = __real_3f800000;
      auVar243._0_4_ = __real_3f800000;
      auVar243._8_4_ = __real_3f800000;
      auVar243._12_4_ = __real_3f800000;
      auVar243._16_4_ = __real_3f800000;
      auVar243._20_4_ = __real_3f800000;
      auVar243._24_4_ = __real_3f800000;
      auVar243._28_4_ = __real_3f800000;
      auVar164 = vsubps_avx(auVar243,auVar266);
      auVar88._0_4_ = auVar164._0_4_ * auVar153._0_4_ + fVar124 * auVar202._0_4_;
      auVar88._4_4_ = auVar164._4_4_ * auVar153._4_4_ + fVar139 * auVar202._4_4_;
      auVar88._8_4_ = auVar164._8_4_ * auVar153._8_4_ + fVar141 * auVar202._8_4_;
      auVar88._12_4_ = auVar164._12_4_ * auVar153._12_4_ + fVar143 * auVar202._12_4_;
      auVar88._16_4_ = auVar164._16_4_ * auVar152._0_4_ + fVar145 * auVar13._0_4_;
      auVar88._20_4_ = auVar164._20_4_ * auVar152._4_4_ + fVar147 * auVar13._4_4_;
      auVar88._24_4_ = auVar164._24_4_ * auVar152._8_4_ + fVar149 * auVar13._8_4_;
      auVar88._28_4_ = auVar164._28_4_ * auVar152._12_4_ + fVar151 * auVar13._12_4_;
      fVar109 = auVar84._0_4_;
      auVar229._0_4_ = auVar85._0_4_ * fVar76 * fVar109;
      fVar113 = auVar84._4_4_;
      auVar229._4_4_ = auVar85._4_4_ * fVar111 * fVar113;
      fVar118 = auVar84._8_4_;
      auVar229._8_4_ = auVar85._8_4_ * fVar115 * fVar118;
      fVar122 = auVar84._12_4_;
      auVar229._12_4_ = auVar85._12_4_ * fVar120 * fVar122;
      fVar208 = auVar83._0_4_;
      auVar229._16_4_ = auVar85._16_4_ * fVar200 * fVar208;
      fVar210 = auVar83._4_4_;
      auVar229._20_4_ = auVar85._20_4_ * fVar209 * fVar210;
      fVar212 = auVar83._8_4_;
      auVar229._24_4_ = auVar85._24_4_ * fVar211 * fVar212;
      fVar216 = auVar83._12_4_;
      auVar229._28_4_ = auVar85._28_4_ * fVar214 * fVar216;
      auVar245._0_4_ = auVar88._0_4_ + auVar78._0_4_;
      auVar245._4_4_ = auVar88._4_4_ + auVar78._4_4_;
      auVar245._8_4_ = auVar88._8_4_ + auVar78._8_4_;
      auVar245._12_4_ = auVar88._12_4_ + auVar78._12_4_;
      auVar245._16_4_ = auVar88._16_4_ + auVar116._0_4_;
      auVar245._20_4_ = auVar88._20_4_ + auVar116._4_4_;
      auVar245._24_4_ = auVar88._24_4_ + auVar116._8_4_;
      auVar245._28_4_ = auVar88._28_4_ + auVar116._12_4_;
      auVar126 = vdivps_avx(auVar229,auVar245);
      auVar261._0_4_ = fVar76 * auVar171._0_4_ * fVar109;
      auVar261._4_4_ = fVar111 * auVar171._4_4_ * fVar113;
      auVar261._8_4_ = fVar115 * auVar171._8_4_ * fVar118;
      auVar261._12_4_ = fVar120 * auVar171._12_4_ * fVar122;
      auVar261._16_4_ = fVar200 * auVar171._16_4_ * fVar208;
      auVar261._20_4_ = fVar209 * auVar171._20_4_ * fVar210;
      auVar261._24_4_ = fVar211 * auVar171._24_4_ * fVar212;
      auVar261._28_4_ = fVar214 * auVar171._28_4_ * fVar216;
      auVar86 = vdivps_avx(auVar261,auVar245);
      auVar84 = auVar86._0_16_;
      auVar181._0_4_ = fVar76 * auVar155._0_4_ * fVar109;
      auVar181._4_4_ = fVar111 * auVar155._4_4_ * fVar113;
      auVar181._8_4_ = fVar115 * auVar155._8_4_ * fVar118;
      auVar181._12_4_ = fVar120 * auVar155._12_4_ * fVar122;
      auVar181._16_4_ = fVar200 * auVar155._16_4_ * fVar208;
      auVar181._20_4_ = fVar209 * auVar155._20_4_ * fVar210;
      auVar181._24_4_ = fVar211 * auVar155._24_4_ * fVar212;
      auVar181._28_4_ = fVar214 * auVar155._28_4_ * fVar216;
      auVar155 = vdivps_avx(auVar181,auVar245);
      auVar171 = ZEXT1232(ZEXT412(0)) << 0x20;
      auVar85 = vcmpps_avx(auVar171,auVar88,0);
      auVar171 = vcmpps_avx(auVar171,auVar127,0);
      auVar89._0_4_ = auVar171._0_4_ & auVar85._0_4_;
      auVar89._4_4_ = auVar171._4_4_ & auVar85._4_4_;
      auVar89._8_4_ = auVar171._8_4_ & auVar85._8_4_;
      auVar89._12_4_ = auVar171._12_4_ & auVar85._12_4_;
      auVar89._16_4_ = auVar171._16_4_ & auVar85._16_4_;
      auVar89._20_4_ = auVar171._20_4_ & auVar85._20_4_;
      auVar89._24_4_ = auVar171._24_4_ & auVar85._24_4_;
      auVar89._28_4_ = auVar171._28_4_ & auVar85._28_4_;
      auVar85 = vcmpps_avx(auVar87,
                           ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,2
                          );
      auVar89 = auVar89 | auVar85;
      uVar26 = auVar89._0_4_;
      fVar247 = (float)(~uVar26 & auVar126._0_4_);
      uVar108 = auVar89._4_4_;
      fVar252 = (float)(~uVar108 & auVar126._4_4_);
      uVar110 = auVar89._8_4_;
      fVar254 = (float)(~uVar110 & auVar126._8_4_);
      uVar112 = auVar89._12_4_;
      fVar255 = (float)(~uVar112 & auVar126._12_4_);
      uVar114 = auVar89._16_4_;
      fVar256 = (float)(~uVar114 & auVar126._16_4_);
      uVar117 = auVar89._20_4_;
      fVar257 = (float)(~uVar117 & auVar126._20_4_);
      uVar119 = auVar89._24_4_;
      fVar258 = (float)(~uVar119 & auVar126._24_4_);
      uVar121 = auVar89._28_4_;
      fVar259 = (float)(~uVar121 & auVar126._28_4_);
      fVar217 = (float)(~uVar26 & auVar86._0_4_);
      fVar220 = (float)(~uVar108 & auVar86._4_4_);
      fVar221 = (float)(~uVar110 & auVar86._8_4_);
      fVar222 = (float)(~uVar112 & auVar86._12_4_);
      fVar223 = (float)(~uVar114 & auVar86._16_4_);
      fVar224 = (float)(~uVar117 & auVar86._20_4_);
      fVar225 = (float)(~uVar119 & auVar86._24_4_);
      fVar226 = (float)(~uVar121 & auVar86._28_4_);
      fVar200 = (float)(~uVar26 & auVar155._0_4_);
      fVar208 = (float)(~uVar108 & auVar155._4_4_);
      fVar209 = (float)(~uVar110 & auVar155._8_4_);
      fVar210 = (float)(~uVar112 & auVar155._12_4_);
      fVar211 = (float)(~uVar114 & auVar155._16_4_);
      fVar212 = (float)(~uVar117 & auVar155._20_4_);
      fVar214 = (float)(~uVar119 & auVar155._24_4_);
      fVar216 = (float)(~uVar121 & auVar155._28_4_);
      auVar155 = ZEXT1232(ZEXT412(0)) << 0x20;
      auVar85 = vcmpps_avx(auVar155,auVar127,1);
      uVar26 = vmovmskps_avx(auVar85);
      auVar85 = vmaxps_avx(auVar266,auVar164);
      auVar171._0_4_ = __real_3f800000 + auVar85._0_4_;
      auVar171._4_4_ = __real_3f800000 + auVar85._4_4_;
      auVar171._8_4_ = __real_3f800000 + auVar85._8_4_;
      auVar171._12_4_ = __real_3f800000 + auVar85._12_4_;
      auVar171._16_4_ = __real_3f800000 + auVar85._16_4_;
      auVar171._20_4_ = __real_3f800000 + auVar85._20_4_;
      auVar171._24_4_ = __real_3f800000 + auVar85._24_4_;
      auVar171._28_4_ = __real_3f800000 + auVar85._28_4_;
      auVar182._4_4_ = __real_40000000;
      auVar182._0_4_ = __real_40000000;
      auVar182._8_4_ = __real_40000000;
      auVar182._12_4_ = __real_40000000;
      auVar182._16_4_ = __real_40000000;
      auVar182._20_4_ = __real_40000000;
      auVar182._24_4_ = __real_40000000;
      auVar182._28_4_ = __real_40000000;
      auVar85 = vdivps_avx(auVar182,auVar171);
      fVar76 = auVar85._0_4_;
      fVar109 = auVar85._4_4_;
      fVar111 = auVar85._8_4_;
      fVar113 = auVar85._12_4_;
      fVar115 = auVar85._16_4_;
      fVar118 = auVar85._20_4_;
      fVar120 = auVar85._24_4_;
      fVar122 = auVar85._28_4_;
      if (uVar26 != 0) {
        fVar123 = auVar78._0_4_ * fVar76;
        fVar138 = auVar78._4_4_ * fVar109;
        fVar140 = auVar78._8_4_ * fVar111;
        fVar142 = auVar78._12_4_ * fVar113;
        fVar144 = auVar116._0_4_ * fVar115;
        fVar146 = auVar116._4_4_ * fVar118;
        fVar148 = auVar116._8_4_ * fVar120;
        fVar150 = auVar116._12_4_ * fVar122;
        auVar90._0_4_ = fVar247 * fVar123;
        auVar90._4_4_ = fVar252 * fVar138;
        auVar90._8_4_ = fVar254 * fVar140;
        auVar90._12_4_ = fVar255 * fVar142;
        auVar90._16_4_ = fVar256 * fVar144;
        auVar90._20_4_ = fVar257 * fVar146;
        auVar90._24_4_ = fVar258 * fVar148;
        auVar90._28_4_ = fVar259 * fVar150;
        auVar85 = vsubps_avx(auVar165,auVar90);
        cVar18 = (char)uVar26;
        auVar116 = auVar85._0_16_;
        auVar83 = auVar85._16_16_;
        if ((uVar26 & 1) == 0) {
          if ((uVar26 & 2) == 0) goto LAB_14001f51c;
LAB_14001f9b0:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + lVar71) = uVar2;
          if ((uVar26 & 4) != 0) goto LAB_14001f9c1;
LAB_14001f526:
          if ((uVar26 & 8) == 0) goto LAB_14001f530;
LAB_14001f9d2:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + lVar49) = uVar2;
          if ((uVar26 & 0x10) != 0) goto LAB_14001f9e9;
LAB_14001f540:
          if ((uVar26 & 0x20) == 0) goto LAB_14001f54a;
LAB_14001f9f9:
          uVar2 = vextractps_avx(auVar83,1);
          *(undefined4 *)(param_1 + lVar36) = uVar2;
          if ((uVar26 & 0x40) != 0) goto LAB_14001fa0a;
LAB_14001f554:
          if (-1 < cVar18) goto LAB_14001f55c;
LAB_14001fa19:
          uVar2 = vextractps_avx(auVar83,3);
          *(undefined4 *)(param_1 + lVar31) = uVar2;
          auVar94._0_4_ = fVar217 * fVar123;
          auVar94._4_4_ = fVar220 * fVar138;
          auVar94._8_4_ = fVar221 * fVar140;
          auVar94._12_4_ = fVar222 * fVar142;
          auVar94._16_4_ = fVar223 * fVar144;
          auVar94._20_4_ = fVar224 * fVar146;
          auVar94._24_4_ = fVar225 * fVar148;
          auVar94._28_4_ = fVar226 * fVar150;
          auVar85 = vsubps_avx(auVar231,auVar94);
          if ((uVar26 & 1) != 0) goto LAB_14001fa32;
LAB_14001f56e:
          if ((uVar26 & 2) == 0) goto LAB_14001f578;
LAB_14001fa43:
          uVar2 = vextractps_avx(auVar85._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar71) = uVar2;
          if ((uVar26 & 4) != 0) goto LAB_14001fa55;
LAB_14001f582:
          if ((uVar26 & 8) == 0) goto LAB_14001f58c;
LAB_14001fa67:
          uVar2 = vextractps_avx(auVar85._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar49) = uVar2;
          auVar116 = auVar85._16_16_;
          if ((uVar26 & 0x10) != 0) goto LAB_14001fa7f;
LAB_14001f59c:
          if ((uVar26 & 0x20) == 0) goto LAB_14001f5a6;
LAB_14001fa90:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 4 + lVar36) = uVar2;
          if ((uVar26 & 0x40) != 0) goto LAB_14001faa2;
LAB_14001f5b0:
          if (-1 < cVar18) goto LAB_14001f5b8;
LAB_14001fab2:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 4 + lVar31) = uVar2;
          auVar95._0_4_ = fVar123 * fVar200;
          auVar95._4_4_ = fVar138 * fVar208;
          auVar95._8_4_ = fVar140 * fVar209;
          auVar95._12_4_ = fVar142 * fVar210;
          auVar95._16_4_ = fVar144 * fVar211;
          auVar95._20_4_ = fVar146 * fVar212;
          auVar95._24_4_ = fVar148 * fVar214;
          auVar95._28_4_ = fVar150 * fVar216;
          auVar85 = vsubps_avx(auVar192,auVar95);
          if ((uVar26 & 1) != 0) goto LAB_14001facc;
LAB_14001f5ca:
          if ((uVar26 & 2) == 0) goto LAB_14001f5d4;
LAB_14001fadd:
          uVar2 = vextractps_avx(auVar85._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar71) = uVar2;
          if ((uVar26 & 4) != 0) goto LAB_14001faef;
LAB_14001f5de:
          if ((uVar26 & 8) == 0) goto LAB_14001f5e8;
LAB_14001fb01:
          uVar2 = vextractps_avx(auVar85._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar49) = uVar2;
          auVar116 = auVar85._16_16_;
        }
        else {
          *(int *)(param_1 + lVar68) = auVar85._0_4_;
          if ((uVar26 & 2) != 0) goto LAB_14001f9b0;
LAB_14001f51c:
          if ((uVar26 & 4) == 0) goto LAB_14001f526;
LAB_14001f9c1:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + lVar52) = uVar2;
          if ((uVar26 & 8) != 0) goto LAB_14001f9d2;
LAB_14001f530:
          if ((uVar26 & 0x10) == 0) goto LAB_14001f540;
LAB_14001f9e9:
          *(int *)(param_1 + lVar57) = auVar85._16_4_;
          if ((uVar26 & 0x20) != 0) goto LAB_14001f9f9;
LAB_14001f54a:
          if ((uVar26 & 0x40) == 0) goto LAB_14001f554;
LAB_14001fa0a:
          uVar2 = vextractps_avx(auVar83,2);
          *(undefined4 *)(param_1 + lVar39) = uVar2;
          if (cVar18 < '\0') goto LAB_14001fa19;
LAB_14001f55c:
          auVar91._0_4_ = fVar217 * fVar123;
          auVar91._4_4_ = fVar220 * fVar138;
          auVar91._8_4_ = fVar221 * fVar140;
          auVar91._12_4_ = fVar222 * fVar142;
          auVar91._16_4_ = fVar223 * fVar144;
          auVar91._20_4_ = fVar224 * fVar146;
          auVar91._24_4_ = fVar225 * fVar148;
          auVar91._28_4_ = fVar226 * fVar150;
          auVar85 = vsubps_avx(auVar231,auVar91);
          if ((uVar26 & 1) == 0) goto LAB_14001f56e;
LAB_14001fa32:
          *(int *)(param_1 + 4 + lVar68) = auVar85._0_4_;
          if ((uVar26 & 2) != 0) goto LAB_14001fa43;
LAB_14001f578:
          if ((uVar26 & 4) == 0) goto LAB_14001f582;
LAB_14001fa55:
          uVar2 = vextractps_avx(auVar85._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar52) = uVar2;
          if ((uVar26 & 8) != 0) goto LAB_14001fa67;
LAB_14001f58c:
          auVar116 = auVar85._16_16_;
          if ((uVar26 & 0x10) == 0) goto LAB_14001f59c;
LAB_14001fa7f:
          *(int *)(param_1 + 4 + lVar57) = auVar116._0_4_;
          if ((uVar26 & 0x20) != 0) goto LAB_14001fa90;
LAB_14001f5a6:
          if ((uVar26 & 0x40) == 0) goto LAB_14001f5b0;
LAB_14001faa2:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 4 + lVar39) = uVar2;
          if (cVar18 < '\0') goto LAB_14001fab2;
LAB_14001f5b8:
          auVar92._0_4_ = fVar123 * fVar200;
          auVar92._4_4_ = fVar138 * fVar208;
          auVar92._8_4_ = fVar140 * fVar209;
          auVar92._12_4_ = fVar142 * fVar210;
          auVar92._16_4_ = fVar144 * fVar211;
          auVar92._20_4_ = fVar146 * fVar212;
          auVar92._24_4_ = fVar148 * fVar214;
          auVar92._28_4_ = fVar150 * fVar216;
          auVar85 = vsubps_avx(auVar192,auVar92);
          if ((uVar26 & 1) == 0) goto LAB_14001f5ca;
LAB_14001facc:
          *(int *)(param_1 + 8 + lVar68) = auVar85._0_4_;
          if ((uVar26 & 2) != 0) goto LAB_14001fadd;
LAB_14001f5d4:
          if ((uVar26 & 4) == 0) goto LAB_14001f5de;
LAB_14001faef:
          uVar2 = vextractps_avx(auVar85._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar52) = uVar2;
          if ((uVar26 & 8) != 0) goto LAB_14001fb01;
LAB_14001f5e8:
          auVar116 = auVar85._16_16_;
        }
        if ((uVar26 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar57) = auVar116._0_4_;
        }
        if ((uVar26 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 8 + lVar36) = uVar2;
        }
        if ((uVar26 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 8 + lVar39) = uVar2;
        }
        if (cVar18 < '\0') {
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 8 + lVar31) = uVar2;
        }
        if ((uVar26 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar68) = uVar8;
        }
        if ((uVar26 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar71) = uVar9;
        }
        if ((uVar26 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar52) = uVar10;
        }
        if ((uVar26 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar49) = uVar11;
        }
        if ((uVar26 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar57) = uVar19;
        }
        if ((uVar26 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar5;
        }
        if ((uVar26 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar6;
        }
        if (cVar18 < '\0') {
          *(uint *)(param_1 + 0xc + lVar31) = uVar7;
        }
      }
      auVar85 = vcmpps_avx(auVar155,auVar218,0xc);
      uVar19 = vmovmskps_avx(auVar85);
      if (uVar19 != 0) {
        fVar124 = fVar124 * auVar202._0_4_ * fVar76;
        fVar139 = fVar139 * auVar202._4_4_ * fVar109;
        fVar141 = fVar141 * auVar202._8_4_ * fVar111;
        fVar143 = fVar143 * auVar202._12_4_ * fVar113;
        fVar145 = fVar145 * auVar13._0_4_ * fVar115;
        fVar147 = fVar147 * auVar13._4_4_ * fVar118;
        fVar149 = fVar149 * auVar13._8_4_ * fVar120;
        fVar151 = fVar151 * auVar13._12_4_ * fVar122;
        local_380 = auVar190._0_4_;
        fStack_37c = auVar190._4_4_;
        fStack_378 = auVar190._8_4_;
        fStack_374 = auVar190._12_4_;
        fStack_370 = auVar77._0_4_;
        fStack_36c = auVar77._4_4_;
        fStack_368 = auVar77._8_4_;
        fStack_364 = auVar77._12_4_;
        auVar116._0_4_ = fVar247 * fVar124 + local_380;
        auVar116._4_4_ = fVar252 * fVar139 + fStack_37c;
        auVar116._8_4_ = fVar254 * fVar141 + fStack_378;
        auVar116._12_4_ = fVar255 * fVar143 + fStack_374;
        auVar156._16_4_ = fVar256 * fVar145 + fStack_370;
        auVar156._0_16_ = auVar116;
        auVar156._20_4_ = fVar257 * fVar147 + fStack_36c;
        auVar156._24_4_ = fVar258 * fVar149 + fStack_368;
        auVar156._28_4_ = fVar259 * fVar151 + fStack_364;
        cVar18 = (char)uVar19;
        if ((uVar19 & 1) != 0) {
          *(float *)(param_1 + lVar34) = auVar116._0_4_;
        }
        auVar77 = auVar156._16_16_;
        local_420 = auVar272._0_4_;
        fStack_41c = auVar272._4_4_;
        fStack_418 = auVar272._8_4_;
        fStack_414 = auVar272._12_4_;
        fStack_410 = auVar265._0_4_;
        fStack_40c = auVar265._4_4_;
        fStack_408 = auVar265._8_4_;
        fStack_404 = auVar265._12_4_;
        local_560 = auVar227._0_4_;
        fStack_55c = auVar227._4_4_;
        fStack_558 = auVar227._8_4_;
        fStack_554 = auVar227._12_4_;
        fStack_550 = auVar191._0_4_;
        fStack_54c = auVar191._4_4_;
        fStack_548 = auVar191._8_4_;
        fStack_544 = auVar191._12_4_;
        if ((uVar19 & 2) == 0) {
          if ((uVar19 & 4) == 0) goto LAB_14001f6eb;
LAB_14001fc45:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + lVar55) = uVar2;
          if ((uVar19 & 8) != 0) goto LAB_14001fc5d;
LAB_14001f6f4:
          if ((uVar19 & 0x10) == 0) goto LAB_14001f703;
LAB_14001fc7b:
          *(float *)(param_1 + lVar50) = auVar156._16_4_;
          if ((uVar19 & 0x20) != 0) goto LAB_14001fc8a;
LAB_14001f70c:
          if ((uVar19 & 0x40) == 0) goto LAB_14001f715;
LAB_14001fc9a:
          uVar2 = vextractps_avx(auVar77,2);
          *(undefined4 *)(param_1 + lVar28) = uVar2;
          if (cVar18 < '\0') goto LAB_14001fca9;
LAB_14001f71d:
          auVar157._0_4_ = fVar217 * fVar124 + local_420;
          auVar157._4_4_ = fVar220 * fVar139 + fStack_41c;
          auVar157._8_4_ = fVar221 * fVar141 + fStack_418;
          auVar157._12_4_ = fVar222 * fVar143 + fStack_414;
          auVar157._16_4_ = fVar223 * fVar145 + fStack_410;
          auVar157._20_4_ = fVar224 * fVar147 + fStack_40c;
          auVar157._24_4_ = fVar225 * fVar149 + fStack_408;
          auVar157._28_4_ = fVar226 * fVar151 + fStack_404;
          if ((uVar19 & 1) == 0) goto LAB_14001f733;
LAB_14001fccb:
          *(int *)(param_1 + 4 + lVar34) = auVar157._0_4_;
          if ((uVar19 & 2) != 0) goto LAB_14001fce0;
LAB_14001f73c:
          if ((uVar19 & 4) == 0) goto LAB_14001f745;
LAB_14001fcf6:
          uVar2 = vextractps_avx(auVar157._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar55) = uVar2;
          if ((uVar19 & 8) != 0) goto LAB_14001fd0f;
LAB_14001f74e:
          auVar116 = auVar157._16_16_;
          if ((uVar19 & 0x10) == 0) goto LAB_14001f75d;
LAB_14001fd2e:
          *(int *)(param_1 + 4 + lVar50) = auVar116._0_4_;
          if ((uVar19 & 0x20) != 0) goto LAB_14001fd3e;
LAB_14001f766:
          if ((uVar19 & 0x40) == 0) goto LAB_14001f76f;
LAB_14001fd4f:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 4 + lVar28) = uVar2;
          if (cVar18 < '\0') goto LAB_14001fd5f;
LAB_14001f777:
          auVar128._0_4_ = fVar124 * fVar200 + local_560;
          auVar128._4_4_ = fVar139 * fVar208 + fStack_55c;
          auVar128._8_4_ = fVar141 * fVar209 + fStack_558;
          auVar128._12_4_ = fVar143 * fVar210 + fStack_554;
          auVar128._16_4_ = fVar145 * fVar211 + fStack_550;
          auVar128._20_4_ = fVar147 * fVar212 + fStack_54c;
          auVar128._24_4_ = fVar149 * fVar214 + fStack_548;
          auVar128._28_4_ = fVar151 * fVar216 + fStack_544;
          if ((uVar19 & 1) == 0) goto LAB_14001f78d;
LAB_14001fd82:
          *(int *)(param_1 + 8 + lVar34) = auVar128._0_4_;
          if ((uVar19 & 2) != 0) goto LAB_14001fd97;
LAB_14001f796:
          if ((uVar19 & 4) == 0) goto LAB_14001f79f;
LAB_14001fdad:
          uVar2 = vextractps_avx(auVar128._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar55) = uVar2;
          if ((uVar19 & 8) != 0) goto LAB_14001fdc6;
LAB_14001f7a8:
          auVar116 = auVar128._16_16_;
        }
        else {
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + lVar63) = uVar2;
          if ((uVar19 & 4) != 0) goto LAB_14001fc45;
LAB_14001f6eb:
          if ((uVar19 & 8) == 0) goto LAB_14001f6f4;
LAB_14001fc5d:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + lVar30) = uVar2;
          if ((uVar19 & 0x10) != 0) goto LAB_14001fc7b;
LAB_14001f703:
          if ((uVar19 & 0x20) == 0) goto LAB_14001f70c;
LAB_14001fc8a:
          uVar2 = vextractps_avx(auVar77,1);
          *(undefined4 *)(param_1 + lVar47) = uVar2;
          if ((uVar19 & 0x40) != 0) goto LAB_14001fc9a;
LAB_14001f715:
          if (-1 < cVar18) goto LAB_14001f71d;
LAB_14001fca9:
          uVar2 = vextractps_avx(auVar77,3);
          *(undefined4 *)(param_1 + lVar23) = uVar2;
          auVar157._0_4_ = fVar217 * fVar124 + local_420;
          auVar157._4_4_ = fVar220 * fVar139 + fStack_41c;
          auVar157._8_4_ = fVar221 * fVar141 + fStack_418;
          auVar157._12_4_ = fVar222 * fVar143 + fStack_414;
          auVar157._16_4_ = fVar223 * fVar145 + fStack_410;
          auVar157._20_4_ = fVar224 * fVar147 + fStack_40c;
          auVar157._24_4_ = fVar225 * fVar149 + fStack_408;
          auVar157._28_4_ = fVar226 * fVar151 + fStack_404;
          if ((uVar19 & 1) != 0) goto LAB_14001fccb;
LAB_14001f733:
          if ((uVar19 & 2) == 0) goto LAB_14001f73c;
LAB_14001fce0:
          uVar2 = vextractps_avx(auVar157._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar63) = uVar2;
          if ((uVar19 & 4) != 0) goto LAB_14001fcf6;
LAB_14001f745:
          if ((uVar19 & 8) == 0) goto LAB_14001f74e;
LAB_14001fd0f:
          uVar2 = vextractps_avx(auVar157._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar30) = uVar2;
          auVar116 = auVar157._16_16_;
          if ((uVar19 & 0x10) != 0) goto LAB_14001fd2e;
LAB_14001f75d:
          if ((uVar19 & 0x20) == 0) goto LAB_14001f766;
LAB_14001fd3e:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 4 + lVar47) = uVar2;
          if ((uVar19 & 0x40) != 0) goto LAB_14001fd4f;
LAB_14001f76f:
          if (-1 < cVar18) goto LAB_14001f777;
LAB_14001fd5f:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 4 + lVar23) = uVar2;
          auVar128._0_4_ = fVar124 * fVar200 + local_560;
          auVar128._4_4_ = fVar139 * fVar208 + fStack_55c;
          auVar128._8_4_ = fVar141 * fVar209 + fStack_558;
          auVar128._12_4_ = fVar143 * fVar210 + fStack_554;
          auVar128._16_4_ = fVar145 * fVar211 + fStack_550;
          auVar128._20_4_ = fVar147 * fVar212 + fStack_54c;
          auVar128._24_4_ = fVar149 * fVar214 + fStack_548;
          auVar128._28_4_ = fVar151 * fVar216 + fStack_544;
          if ((uVar19 & 1) != 0) goto LAB_14001fd82;
LAB_14001f78d:
          if ((uVar19 & 2) == 0) goto LAB_14001f796;
LAB_14001fd97:
          uVar2 = vextractps_avx(auVar128._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar63) = uVar2;
          if ((uVar19 & 4) != 0) goto LAB_14001fdad;
LAB_14001f79f:
          if ((uVar19 & 8) == 0) goto LAB_14001f7a8;
LAB_14001fdc6:
          uVar2 = vextractps_avx(auVar128._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar30) = uVar2;
          auVar116 = auVar128._16_16_;
        }
        if ((uVar19 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar50) = auVar116._0_4_;
        }
        if ((uVar19 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 8 + lVar47) = uVar2;
        }
        if ((uVar19 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 8 + lVar28) = uVar2;
        }
        if (cVar18 < '\0') {
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 8 + lVar23) = uVar2;
        }
        if ((uVar19 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar20;
        }
        if ((uVar19 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar63) = uVar172;
        }
        if ((uVar19 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar55) = uVar173;
        }
        if ((uVar19 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar268;
        }
        if ((uVar19 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar50) = uVar174;
        }
        if ((uVar19 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar47) = uVar175;
        }
        if ((uVar19 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar176;
        }
        if (cVar18 < '\0') {
          *(uint *)(param_1 + 0xc + lVar23) = uVar263;
        }
      }
      auVar85 = vcmpps_avx(auVar155,auVar186,0xc);
      uVar20 = vmovmskps_avx(auVar85);
      if (uVar20 != 0) {
        fVar76 = auVar164._0_4_ * auVar153._0_4_ * fVar76;
        fVar109 = auVar164._4_4_ * auVar153._4_4_ * fVar109;
        fVar111 = auVar164._8_4_ * auVar153._8_4_ * fVar111;
        fVar113 = auVar164._12_4_ * auVar153._12_4_ * fVar113;
        fVar115 = auVar164._16_4_ * auVar152._0_4_ * fVar115;
        fVar118 = auVar164._20_4_ * auVar152._4_4_ * fVar118;
        fVar120 = auVar164._24_4_ * auVar152._8_4_ * fVar120;
        fVar122 = auVar164._28_4_ * auVar152._12_4_ * fVar122;
        auVar77._0_4_ = fVar247 * fVar76 + auVar178._0_4_;
        auVar77._4_4_ = fVar252 * fVar109 + auVar178._4_4_;
        auVar77._8_4_ = fVar254 * fVar111 + auVar178._8_4_;
        auVar77._12_4_ = fVar255 * fVar113 + auVar178._12_4_;
        auVar129._16_4_ = fVar256 * fVar115 + auVar201._0_4_;
        auVar129._0_16_ = auVar77;
        auVar129._20_4_ = fVar257 * fVar118 + auVar201._4_4_;
        auVar129._24_4_ = fVar258 * fVar120 + auVar201._8_4_;
        auVar129._28_4_ = fVar259 * fVar122 + auVar201._12_4_;
        cVar18 = (char)uVar20;
        auVar116 = auVar129._16_16_;
        if ((uVar20 & 1) == 0) {
          if ((uVar20 & 2) == 0) goto LAB_14001f861;
LAB_14001ff29:
          uVar2 = vextractps_avx(auVar77,1);
          *(undefined4 *)(param_1 + lVar64) = uVar2;
          if ((uVar20 & 4) != 0) goto LAB_14001ff39;
LAB_14001f86a:
          if ((uVar20 & 8) == 0) goto LAB_14001f873;
LAB_14001ff49:
          uVar2 = vextractps_avx(auVar77,3);
          *(undefined4 *)(param_1 + lVar51) = uVar2;
          if ((uVar20 & 0x10) != 0) goto LAB_14001ff5f;
LAB_14001f882:
          if ((uVar20 & 0x20) == 0) goto LAB_14001f88b;
LAB_14001ff6e:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + lVar29) = uVar2;
          if ((uVar20 & 0x40) != 0) goto LAB_14001ff7e;
LAB_14001f894:
          if (-1 < cVar18) goto LAB_14001f89c;
LAB_14001ff8d:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + lVar70) = uVar2;
          auVar130._0_4_ = fVar217 * fVar76 + fVar236;
          auVar130._4_4_ = fVar220 * fVar109 + fVar237;
          auVar130._8_4_ = fVar221 * fVar111 + fVar238;
          auVar130._12_4_ = fVar222 * fVar113 + fVar239;
          auVar130._16_4_ = fVar223 * fVar115 + fVar240;
          auVar130._20_4_ = fVar224 * fVar118 + fVar241;
          auVar130._24_4_ = fVar225 * fVar120 + fVar248;
          auVar130._28_4_ = fVar226 * fVar122 + fVar253;
          if ((uVar20 & 1) != 0) goto LAB_14001ffb2;
LAB_14001f8b2:
          if ((uVar20 & 2) == 0) goto LAB_14001f8bb;
LAB_14001ffc7:
          uVar2 = vextractps_avx(auVar130._0_16_,1);
          *(undefined4 *)(param_1 + 4 + lVar64) = uVar2;
          if ((uVar20 & 4) != 0) goto LAB_14001ffd8;
LAB_14001f8c4:
          if ((uVar20 & 8) == 0) goto LAB_14001f8cd;
LAB_14001ffe9:
          uVar2 = vextractps_avx(auVar130._0_16_,3);
          *(undefined4 *)(param_1 + 4 + lVar51) = uVar2;
          auVar116 = auVar130._16_16_;
          if ((uVar20 & 0x10) != 0) goto LAB_140020000;
LAB_14001f8dc:
          if ((uVar20 & 0x20) == 0) goto LAB_14001f8e5;
LAB_140020010:
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 4 + lVar29) = uVar2;
          if ((uVar20 & 0x40) != 0) goto LAB_140020021;
LAB_14001f8ee:
          if (-1 < cVar18) goto LAB_14001f8f6;
LAB_140020031:
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 4 + lVar70) = uVar2;
          auVar93._0_4_ = fVar76 * fVar200 + fVar194;
          auVar93._4_4_ = fVar109 * fVar208 + fVar195;
          auVar93._8_4_ = fVar111 * fVar209 + fVar196;
          auVar93._12_4_ = fVar113 * fVar210 + fVar197;
          auVar93._16_4_ = fVar115 * fVar211 + fVar198;
          auVar93._20_4_ = fVar118 * fVar212 + fVar199;
          auVar93._24_4_ = fVar120 * fVar214 + fVar213;
          auVar93._28_4_ = fVar122 * fVar216 + fVar215;
          if ((uVar20 & 1) != 0) goto LAB_140020057;
LAB_14001f90c:
          if ((uVar20 & 2) == 0) goto LAB_14001f915;
LAB_14002006c:
          uVar2 = vextractps_avx(auVar93._0_16_,1);
          *(undefined4 *)(param_1 + 8 + lVar64) = uVar2;
          if ((uVar20 & 4) != 0) goto LAB_14002007d;
LAB_14001f91e:
          if ((uVar20 & 8) == 0) goto LAB_14001f927;
LAB_14002008e:
          uVar2 = vextractps_avx(auVar93._0_16_,3);
          *(undefined4 *)(param_1 + 8 + lVar51) = uVar2;
          auVar116 = auVar93._16_16_;
        }
        else {
          *(float *)(param_1 + lVar35) = auVar77._0_4_;
          if ((uVar20 & 2) != 0) goto LAB_14001ff29;
LAB_14001f861:
          if ((uVar20 & 4) == 0) goto LAB_14001f86a;
LAB_14001ff39:
          uVar2 = vextractps_avx(auVar77,2);
          *(undefined4 *)(param_1 + lVar56) = uVar2;
          if ((uVar20 & 8) != 0) goto LAB_14001ff49;
LAB_14001f873:
          if ((uVar20 & 0x10) == 0) goto LAB_14001f882;
LAB_14001ff5f:
          *(float *)(param_1 + lVar48) = auVar129._16_4_;
          if ((uVar20 & 0x20) != 0) goto LAB_14001ff6e;
LAB_14001f88b:
          if ((uVar20 & 0x40) == 0) goto LAB_14001f894;
LAB_14001ff7e:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + lVar24) = uVar2;
          if (cVar18 < '\0') goto LAB_14001ff8d;
LAB_14001f89c:
          auVar130._0_4_ = fVar217 * fVar76 + fVar236;
          auVar130._4_4_ = fVar220 * fVar109 + fVar237;
          auVar130._8_4_ = fVar221 * fVar111 + fVar238;
          auVar130._12_4_ = fVar222 * fVar113 + fVar239;
          auVar130._16_4_ = fVar223 * fVar115 + fVar240;
          auVar130._20_4_ = fVar224 * fVar118 + fVar241;
          auVar130._24_4_ = fVar225 * fVar120 + fVar248;
          auVar130._28_4_ = fVar226 * fVar122 + fVar253;
          if ((uVar20 & 1) == 0) goto LAB_14001f8b2;
LAB_14001ffb2:
          *(int *)(param_1 + 4 + lVar35) = auVar130._0_4_;
          if ((uVar20 & 2) != 0) goto LAB_14001ffc7;
LAB_14001f8bb:
          if ((uVar20 & 4) == 0) goto LAB_14001f8c4;
LAB_14001ffd8:
          uVar2 = vextractps_avx(auVar130._0_16_,2);
          *(undefined4 *)(param_1 + 4 + lVar56) = uVar2;
          if ((uVar20 & 8) != 0) goto LAB_14001ffe9;
LAB_14001f8cd:
          auVar116 = auVar130._16_16_;
          if ((uVar20 & 0x10) == 0) goto LAB_14001f8dc;
LAB_140020000:
          *(int *)(param_1 + 4 + lVar48) = auVar116._0_4_;
          if ((uVar20 & 0x20) != 0) goto LAB_140020010;
LAB_14001f8e5:
          if ((uVar20 & 0x40) == 0) goto LAB_14001f8ee;
LAB_140020021:
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 4 + lVar24) = uVar2;
          if (cVar18 < '\0') goto LAB_140020031;
LAB_14001f8f6:
          auVar93._0_4_ = fVar76 * fVar200 + fVar194;
          auVar93._4_4_ = fVar109 * fVar208 + fVar195;
          auVar93._8_4_ = fVar111 * fVar209 + fVar196;
          auVar93._12_4_ = fVar113 * fVar210 + fVar197;
          auVar93._16_4_ = fVar115 * fVar211 + fVar198;
          auVar93._20_4_ = fVar118 * fVar212 + fVar199;
          auVar93._24_4_ = fVar120 * fVar214 + fVar213;
          auVar93._28_4_ = fVar122 * fVar216 + fVar215;
          if ((uVar20 & 1) == 0) goto LAB_14001f90c;
LAB_140020057:
          *(int *)(param_1 + 8 + lVar35) = auVar93._0_4_;
          if ((uVar20 & 2) != 0) goto LAB_14002006c;
LAB_14001f915:
          if ((uVar20 & 4) == 0) goto LAB_14001f91e;
LAB_14002007d:
          uVar2 = vextractps_avx(auVar93._0_16_,2);
          *(undefined4 *)(param_1 + 8 + lVar56) = uVar2;
          if ((uVar20 & 8) != 0) goto LAB_14002008e;
LAB_14001f927:
          auVar116 = auVar93._16_16_;
        }
        if ((uVar20 & 0x10) != 0) {
          *(int *)(param_1 + 8 + lVar48) = auVar116._0_4_;
        }
        if ((uVar20 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar116,1);
          *(undefined4 *)(param_1 + 8 + lVar29) = uVar2;
        }
        if ((uVar20 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar116,2);
          *(undefined4 *)(param_1 + 8 + lVar24) = uVar2;
        }
        if (cVar18 < '\0') {
          uVar2 = vextractps_avx(auVar116,3);
          *(undefined4 *)(param_1 + 8 + lVar70) = uVar2;
        }
        if ((uVar20 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar274;
        }
        if ((uVar20 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar64) = uVar275;
        }
        if ((uVar20 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar56) = uVar3;
        }
        if ((uVar20 & 8) != 0) {
          *(uint *)(param_1 + 0xc + lVar51) = uVar4;
        }
        if ((uVar20 & 0x10) != 0) {
          *(uint *)(param_1 + 0xc + lVar48) = uVar269;
        }
        if ((uVar20 & 0x20) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar270;
        }
        if ((uVar20 & 0x40) != 0) {
          *(uint *)(param_1 + 0xc + lVar24) = uVar271;
        }
        if (cVar18 < '\0') {
          *(uint *)(param_1 + 0xc + lVar70) = uVar273;
        }
      }
      uVar74 = uVar74 + 8;
      uVar163 = uVar163 + 0x20;
      pauVar21 = pauVar21 + 3;
    } while ((int)uVar74 < (int)(uVar62 & 0xfffffff8));
  }
  uVar62 = (uint)uVar74;
  if ((int)param_7 <= (int)uVar62) {
    return;
  }
  auVar116 = vpshufd_avx(ZEXT416(uVar62),0);
  auVar96._16_16_ = auVar116;
  auVar96._0_16_ = auVar116;
  auVar190 = vpshufd_avx(ZEXT416(param_7),0);
  auVar265 = SUB3216(auVar96 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar272 = SUB3216(auVar96 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar116 = vpcmpgtd_avx(auVar190,auVar272);
  auVar77 = vpcmpgtd_avx(auVar190,auVar265);
  auVar219._16_16_ = auVar116;
  auVar219._0_16_ = auVar77;
  uVar74 = uVar74 & 0xffffffff;
  pauVar21 = (undefined1 (*) [32])(param_2 + uVar74 * 0xc);
  iVar27 = vmovmskps_avx(auVar219);
  if (iVar27 == 0xff) {
    auVar126 = pauVar21[2];
    auVar167._16_16_ = *(undefined1 (*) [16])*pauVar21;
    auVar167._0_16_ = *(undefined1 (*) [16])(*pauVar21 + 0x10);
    auVar85 = vblendps_avx(*pauVar21,auVar167,0x24);
    auVar171 = vpermilps_avx(auVar85,
                             ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                            );
    uVar2 = *(undefined4 *)(pauVar21[1] + 4);
    auVar246._4_4_ = uVar2;
    auVar246._0_4_ = uVar2;
    auVar246._8_4_ = uVar2;
    auVar246._12_4_ = uVar2;
    uVar2 = *(undefined4 *)(pauVar21[1] + 8);
    auVar246._20_4_ = uVar2;
    auVar246._16_4_ = uVar2;
    auVar246._24_4_ = uVar2;
    auVar246._28_4_ = uVar2;
    auVar232._16_16_ = *(undefined1 (*) [16])pauVar21[2];
    auVar232._0_16_ = *(undefined1 (*) [16])(pauVar21[2] + 0x10);
    auVar85 = vblendps_avx(auVar232,auVar126,0x44);
    auVar155 = vpermilps_avx(auVar85,
                             ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                            );
    auVar85 = vblendps_avx(auVar171,auVar246,0x88);
    auVar191 = vshufps_avx(*(undefined1 (*) [16])(pauVar21[1] + 0x10),
                           *(undefined1 (*) [16])(pauVar21[1] + 0x10),0xec);
    uVar2 = *(undefined4 *)(pauVar21[1] + 0x14);
    auVar168._20_4_ = uVar2;
    auVar168._16_4_ = uVar2;
    auVar168._24_4_ = uVar2;
    auVar168._28_4_ = uVar2;
    auVar168._0_16_ = auVar191;
    auVar171 = vblendps_avx(auVar155,auVar168,0x13);
    auVar166._16_16_ = auVar171._0_16_;
    auVar166._0_16_ = auVar85._0_16_;
    auVar155 = vperm2f128_avx(auVar85,auVar171,0x31);
    auVar85 = vblendps_avx(pauVar21[1],*pauVar21,0x24);
    auVar85 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar21 + 0x10)),auVar85,0x21);
    auVar85 = vshufps_avx(auVar85,pauVar21[1],0xc2);
    auVar171 = vshufps_avx(auVar232,auVar126,0xc4);
    auVar85 = vblendps_avx(auVar85,auVar171,0xe0);
  }
  else {
    auVar191 = vpcmpgtd_avx(auVar190,auVar272);
    auVar227 = vpcmpgtd_avx(auVar190,auVar265);
    uVar163 = auVar227._0_4_;
    auVar83._0_4_ =
         uVar163 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
    uVar20 = auVar227._4_4_;
    auVar83._4_4_ = uVar20 & _UNK_150b50b04;
    uVar172 = auVar227._8_4_;
    auVar83._8_4_ = uVar172 & _UNK_150b50b08;
    uVar173 = auVar227._12_4_;
    auVar83._12_4_ = uVar173 & _UNK_150b50b0c;
    uVar174 = auVar191._0_4_;
    vextractps_avx(auVar83,1);
    vextractps_avx(auVar83,2);
    vextractps_avx(auVar83,3);
    auVar191._0_4_ =
         uVar163 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
    auVar191._4_4_ = uVar20 & _UNK_150b50b24;
    auVar191._8_4_ = uVar172 & _UNK_150b50b28;
    auVar191._12_4_ = uVar173 & _UNK_150b50b2c;
    vextractps_avx(auVar191,1);
    vextractps_avx(auVar191,2);
    vextractps_avx(auVar191,3);
    auVar227._0_4_ =
         uVar163 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
    auVar227._4_4_ = uVar20 & _UNK_150b50b44;
    auVar227._8_4_ = uVar172 & _UNK_150b50b48;
    auVar227._12_4_ = uVar173 & _UNK_150b50b4c;
    vextractps_avx(auVar227,1);
    vextractps_avx(auVar227,2);
    auVar166 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar21 + (uVar174 & _UNK_150b50b10)),
                                  ZEXT416(*(uint *)*pauVar21)));
    vextractps_avx(auVar227,3);
    auVar155 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar21 + (uVar174 & _UNK_150b50b30)),
                                  ZEXT416(*(uint *)(*pauVar21 + auVar191._0_4_))));
    auVar85 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar21 + (uVar174 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar21 + auVar227._0_4_))));
  }
  auVar272 = vpcmpgtd_avx(auVar190,auVar272);
  auVar191 = vpcmpgtd_avx(auVar190,auVar265);
  auVar131._16_16_ = auVar272;
  auVar131._0_16_ = auVar191;
  auVar171 = vmaskmovps_avx(auVar131,*(undefined1 (*) [32])(param_3 + (int)(uVar62 << 2)));
  auVar126 = vmaskmovps_avx(auVar131,*(undefined1 (*) [32])(param_4 + (int)(uVar62 << 2)));
  if ((~(byte)iVar27 & 0x81) == 0) {
    auVar84._8_8_ = 0;
    auVar84._0_8_ = *(ulonglong *)(param_5 + uVar74);
  }
  else {
    pbVar12 = (byte *)(param_5 + uVar74);
    auVar191 = vpcmpgtd_avx(auVar190,auVar265);
    auVar132._16_16_ = auVar272;
    auVar132._0_16_ = auVar191;
    uVar62 = vmovmskps_avx(auVar132);
    if ((uVar62 & 1) != 0) {
      auVar84 = ZEXT116(*pbVar12);
    }
    if ((uVar62 & 2) != 0) {
      auVar191 = vpinsrb_avx(auVar84,(uint)pbVar12[1],1);
      auVar84 = vpblendw_avx(auVar191,auVar84,0xe);
    }
    if ((uVar62 & 4) != 0) {
      auVar191 = vpmovzxwd_avx(auVar84);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[2],2);
      auVar191 = vpinsrb_avx(auVar191,(uint)auVar84[3],3);
      auVar84 = vpblendw_avx(auVar191,auVar84,0xc);
    }
    if ((uVar62 & 8) != 0) {
      auVar191 = vpmovzxwd_avx(auVar84);
      auVar191 = vpinsrb_avx(auVar191,(uint)auVar84[2],2);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[3],3);
      auVar84 = vpblendw_avx(auVar191,auVar84,0xc);
    }
    if ((uVar62 & 0x10) != 0) {
      auVar191 = vpshufb_avx(auVar84,___xmm_80800706808005048080030203020100);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[4],4);
      auVar191 = vpinsrb_avx(auVar191,(uint)auVar84[5],5);
      auVar84 = vpblendw_avx(auVar191,auVar84,8);
    }
    if ((uVar62 & 0x20) != 0) {
      auVar191 = vpshufb_avx(auVar84,___xmm_80800706808005048080030403020100);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[5],5);
      auVar84 = vpblendw_avx(auVar191,auVar84,8);
    }
    if ((uVar62 & 0x40) != 0) {
      auVar191 = vpshufb_avx(auVar84,___xmm_80800706808005048080050403020100);
      auVar191 = vpinsrb_avx(auVar191,(uint)pbVar12[6],6);
      auVar84 = vpinsrb_avx(auVar191,(uint)auVar84[7],7);
    }
    if ((uVar62 & 0x80) != 0) {
      auVar84 = vpshufb_avx(auVar84,___xmm_80800706808005048006050403020100);
      auVar84 = vpinsrb_avx(auVar84,(uint)pbVar12[7],7);
    }
  }
  auVar82 = vpslld_avx(auVar155._16_16_,4);
  auVar14 = vpcmpgtd_avx(auVar190,auVar265);
  auVar202 = vpand_avx(auVar272,auVar82);
  lVar23 = param_1 + auVar202._0_4_;
  auVar191 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar202._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar202._4_4_)),0x10);
  auVar267._16_16_ = auVar272;
  auVar267._0_16_ = auVar14;
  uVar263 = auVar14._0_4_;
  auVar201._0_4_ = uVar263 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004
  ;
  uVar268 = auVar14._4_4_;
  auVar201._4_4_ = uVar268 & _UNK_150b50d44;
  uVar269 = auVar14._8_4_;
  auVar201._8_4_ = uVar269 & _UNK_150b50d48;
  uVar270 = auVar14._12_4_;
  auVar201._12_4_ = uVar270 & _UNK_150b50d4c;
  uVar271 = auVar272._0_4_;
  uVar273 = auVar272._4_4_;
  uVar274 = auVar272._8_4_;
  uVar275 = auVar272._12_4_;
  uVar58 = (ulonglong)(uVar271 & _UNK_150b50d50);
  uVar69 = (ulonglong)(uVar273 & _UNK_150b50d54);
  uVar25 = (ulonglong)(uVar274 & _UNK_150b50d58);
  uVar75 = (ulonglong)(uVar275 & _UNK_150b50d5c);
  uVar32 = (ulonglong)(uVar273 & _UNK_150b50d74);
  uVar72 = (ulonglong)(uVar274 & _UNK_150b50d78);
  uVar53 = (ulonglong)(uVar275 & _UNK_150b50d7c);
  uVar59 = (ulonglong)(uVar271 & _UNK_150b50d70);
  auVar78._0_4_ = uVar263 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar78._4_4_ = uVar268 & _UNK_150b50d84;
  auVar78._8_4_ = uVar269 & _UNK_150b50d88;
  auVar78._12_4_ = uVar270 & _UNK_150b50d8c;
  uVar60 = (ulonglong)(uVar271 & _UNK_150b50d90);
  uVar37 = (ulonglong)(uVar273 & _UNK_150b50d94);
  uVar40 = (ulonglong)(uVar274 & _UNK_150b50d98);
  uVar65 = (ulonglong)(uVar275 & _UNK_150b50d9c);
  lVar24 = param_1 + auVar202._4_4_;
  auVar227 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar23)),ZEXT416(*(uint *)(uVar69 + lVar24)),
                           0x10);
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar59 + lVar23)),ZEXT416(*(uint *)(uVar32 + lVar24)),
                          0x10);
  auVar13 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar23)),ZEXT416(*(uint *)(uVar37 + lVar24)),
                          0x10);
  auVar191 = vinsertps_avx(auVar191,ZEXT416(*(uint *)(param_1 + auVar202._8_4_)),0x20);
  lVar23 = param_1 + auVar202._8_4_;
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar25 + lVar23)),0x20);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar72 + lVar23)),0x20);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(uVar40 + lVar23)),0x20);
  auVar191 = vinsertps_avx(auVar191,ZEXT416(*(uint *)(param_1 + auVar202._12_4_)),0x30);
  lVar23 = param_1 + auVar202._12_4_;
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar75 + lVar23)),0x30);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar53 + lVar23)),0x30);
  auVar152 = vpslld_avx(auVar155._0_16_,4);
  auVar125 = vpand_avx(auVar14,auVar152);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(uVar65 + lVar23)),0x30);
  uVar62 = vextractps_avx(auVar201,1);
  uVar66 = (ulonglong)uVar62;
  uVar62 = vextractps_avx(auVar201,2);
  uVar41 = (ulonglong)uVar62;
  uVar22 = (ulonglong)auVar201._0_4_;
  uVar73 = (ulonglong)auVar201._12_4_;
  lVar23 = param_1 + auVar125._0_4_;
  auVar202 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar125._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar125._4_4_)),0x10);
  lVar24 = param_1 + auVar125._4_4_;
  uVar16 = (ulonglong)
           (uVar263 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008);
  uVar74 = (ulonglong)(uVar268 & _UNK_150b50d64);
  uVar33 = (ulonglong)(uVar269 & _UNK_150b50d68);
  uVar38 = (ulonglong)(uVar270 & _UNK_150b50d6c);
  auVar201 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar23)),ZEXT416(*(uint *)(uVar66 + lVar24)),
                           0x10);
  auVar178 = vinsertps_avx(ZEXT416(*(uint *)(uVar16 + lVar23)),ZEXT416(*(uint *)(uVar74 + lVar24)),
                           0x10);
  uVar62 = vextractps_avx(auVar78,1);
  uVar61 = (ulonglong)uVar62;
  uVar62 = vextractps_avx(auVar78,2);
  uVar67 = (ulonglong)uVar62;
  uVar62 = vextractps_avx(auVar78,3);
  uVar54 = (ulonglong)uVar62;
  uVar17 = (ulonglong)auVar78._0_4_;
  auVar78 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar23)),ZEXT416(*(uint *)(uVar61 + lVar24)),
                          0x10);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(param_1 + auVar125._8_4_)),0x20);
  lVar23 = param_1 + auVar125._8_4_;
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar41 + lVar23)),0x20);
  auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)(uVar33 + lVar23)),0x20);
  auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(uVar67 + lVar23)),0x20);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(param_1 + auVar125._12_4_)),0x30);
  lVar23 = param_1 + auVar125._12_4_;
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar73 + lVar23)),0x30);
  auVar178 = vinsertps_avx(auVar178,ZEXT416(*(uint *)(uVar38 + lVar23)),0x30);
  auVar251._16_16_ = auVar191;
  auVar251._0_16_ = auVar202;
  auVar191 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(uVar54 + lVar23)),0x30);
  auVar244._16_16_ = auVar227;
  auVar244._0_16_ = auVar201;
  auVar204._16_16_ = auVar83;
  auVar204._0_16_ = auVar178;
  auVar125 = vpslld_avx(auVar85._0_16_,4);
  auVar153 = vpslld_avx(auVar85._16_16_,4);
  auVar201 = vpand_avx(auVar14,auVar125);
  lVar23 = param_1 + auVar201._0_4_;
  auVar227 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar201._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar201._4_4_)),0x10);
  lVar24 = param_1 + auVar201._4_4_;
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(param_1 + auVar201._8_4_)),0x20);
  lVar28 = param_1 + auVar201._8_4_;
  auVar85 = vmaskmovps_avx(auVar267,auVar251);
  auVar202 = vpand_avx(auVar272,auVar153);
  lVar29 = param_1 + auVar202._0_4_;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar202._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar202._4_4_)),0x10);
  lVar30 = param_1 + auVar202._4_4_;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_1 + auVar202._8_4_)),0x20);
  lVar31 = param_1 + auVar202._8_4_;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_1 + auVar202._12_4_)),0x30);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(param_1 + auVar201._12_4_)),0x30);
  auVar155 = vmaskmovps_avx(auVar267,auVar244);
  lVar34 = param_1 + auVar202._12_4_;
  auVar202 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar29)),ZEXT416(*(uint *)(uVar69 + lVar30)),
                           0x10);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(uVar25 + lVar31)),0x20);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(uVar75 + lVar34)),0x30);
  auVar86 = vmaskmovps_avx(auVar267,auVar204);
  lVar35 = param_1 + auVar201._12_4_;
  auVar201 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar23)),ZEXT416(*(uint *)(uVar66 + lVar24)),
                           0x10);
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar41 + lVar28)),0x20);
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar73 + lVar35)),0x30);
  auVar97._16_16_ = auVar83;
  auVar97._0_16_ = auVar227;
  auVar227 = vinsertps_avx(ZEXT416(*(uint *)(uVar59 + lVar29)),ZEXT416(*(uint *)(uVar32 + lVar30)),
                           0x10);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar72 + lVar31)),0x20);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar53 + lVar34)),0x30);
  auVar158._16_16_ = auVar202;
  auVar158._0_16_ = auVar201;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar16 + lVar23)),ZEXT416(*(uint *)(uVar74 + lVar24)),
                          0x10);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar33 + lVar28)),0x20);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar38 + lVar35)),0x30);
  auVar133._16_16_ = auVar227;
  auVar133._0_16_ = auVar83;
  auVar227 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar29)),ZEXT416(*(uint *)(uVar37 + lVar30)),
                           0x10);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar40 + lVar31)),0x20);
  auVar227 = vinsertps_avx(auVar227,ZEXT416(*(uint *)(uVar65 + lVar34)),0x30);
  auVar87 = vmaskmovps_avx(auVar267,auVar97);
  auVar164 = vmaskmovps_avx(auVar267,auVar158);
  auVar88 = vmaskmovps_avx(auVar267,auVar133);
  auVar78 = vpslld_avx(auVar166._16_16_,4);
  auVar202 = vpand_avx(auVar272,auVar78);
  lVar29 = param_1 + auVar202._0_4_;
  auVar272 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar202._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar202._4_4_)),0x10);
  lVar30 = param_1 + auVar202._4_4_;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar58 + lVar29)),ZEXT416(*(uint *)(uVar69 + lVar30)),
                          0x10);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(param_1 + auVar202._8_4_)),0x20);
  lVar31 = param_1 + auVar202._8_4_;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar25 + lVar31)),0x20);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(param_1 + auVar202._12_4_)),0x30);
  lVar34 = param_1 + auVar202._12_4_;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar75 + lVar34)),0x30);
  auVar154 = vpslld_avx(auVar166._0_16_,4);
  auVar178 = vpand_avx(auVar14,auVar154);
  lVar36 = param_1 + auVar178._0_4_;
  auVar202 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar178._0_4_)),
                           ZEXT416(*(uint *)(param_1 + auVar178._4_4_)),0x10);
  lVar39 = param_1 + auVar178._4_4_;
  auVar201 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar36)),ZEXT416(*(uint *)(uVar66 + lVar39)),
                           0x10);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(param_1 + auVar178._8_4_)),0x20);
  lVar47 = param_1 + auVar178._8_4_;
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar41 + lVar47)),0x20);
  auVar202 = vinsertps_avx(auVar202,ZEXT416(*(uint *)(param_1 + auVar178._12_4_)),0x30);
  auVar183._16_16_ = auVar13;
  auVar183._0_16_ = auVar191;
  lVar48 = param_1 + auVar178._12_4_;
  auVar201 = vinsertps_avx(auVar201,ZEXT416(*(uint *)(uVar73 + lVar48)),0x30);
  auVar134._16_16_ = auVar272;
  auVar134._0_16_ = auVar202;
  auVar272 = vinsertps_avx(ZEXT416(*(uint *)(uVar59 + lVar29)),ZEXT416(*(uint *)(uVar32 + lVar30)),
                           0x10);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(uVar72 + lVar31)),0x20);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(uVar53 + lVar34)),0x30);
  auVar98._16_16_ = auVar83;
  auVar98._0_16_ = auVar201;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar16 + lVar36)),ZEXT416(*(uint *)(uVar74 + lVar39)),
                          0x10);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar33 + lVar47)),0x20);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar38 + lVar48)),0x30);
  auVar159._16_16_ = auVar272;
  auVar159._0_16_ = auVar83;
  auVar272 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar23)),ZEXT416(*(uint *)(uVar61 + lVar24)),
                           0x10);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(uVar67 + lVar28)),0x20);
  auVar272 = vinsertps_avx(auVar272,ZEXT416(*(uint *)(uVar54 + lVar35)),0x30);
  auVar89 = vmaskmovps_avx(auVar267,auVar134);
  auVar127 = vmaskmovps_avx(auVar267,auVar98);
  auVar165 = vmaskmovps_avx(auVar267,auVar159);
  auVar205._16_16_ = auVar227;
  auVar205._0_16_ = auVar272;
  auVar179 = vsubps_avx(auVar85,auVar87);
  auVar180 = vsubps_avx(auVar155,auVar164);
  fVar149 = auVar171._0_4_;
  fVar151 = auVar171._4_4_;
  fVar194 = auVar171._8_4_;
  fVar195 = auVar171._12_4_;
  fVar196 = auVar171._16_4_;
  fVar197 = auVar171._20_4_;
  fVar198 = auVar171._24_4_;
  fVar199 = auVar171._28_4_;
  auVar169._0_4_ = auVar87._0_4_ + fVar149 * auVar179._0_4_;
  auVar169._4_4_ = auVar87._4_4_ + fVar151 * auVar179._4_4_;
  auVar169._8_4_ = auVar87._8_4_ + fVar194 * auVar179._8_4_;
  auVar169._12_4_ = auVar87._12_4_ + fVar195 * auVar179._12_4_;
  auVar169._16_4_ = auVar87._16_4_ + fVar196 * auVar179._16_4_;
  auVar169._20_4_ = auVar87._20_4_ + fVar197 * auVar179._20_4_;
  auVar169._24_4_ = auVar87._24_4_ + fVar198 * auVar179._24_4_;
  auVar169._28_4_ = auVar87._28_4_ + fVar199 * auVar179._28_4_;
  fVar214 = auVar164._0_4_;
  auVar187._0_4_ = fVar214 + fVar149 * auVar180._0_4_;
  fVar216 = auVar164._4_4_;
  auVar187._4_4_ = fVar216 + fVar151 * auVar180._4_4_;
  fVar124 = auVar164._8_4_;
  auVar187._8_4_ = fVar124 + fVar194 * auVar180._8_4_;
  fVar139 = auVar164._12_4_;
  auVar187._12_4_ = fVar139 + fVar195 * auVar180._12_4_;
  fVar141 = auVar164._16_4_;
  auVar187._16_4_ = fVar141 + fVar196 * auVar180._16_4_;
  fVar143 = auVar164._20_4_;
  auVar187._20_4_ = fVar143 + fVar197 * auVar180._20_4_;
  fVar145 = auVar164._24_4_;
  auVar187._24_4_ = fVar145 + fVar198 * auVar180._24_4_;
  fVar147 = auVar164._28_4_;
  auVar187._28_4_ = fVar147 + fVar199 * auVar180._28_4_;
  auVar99._4_4_ = __real_3f800000;
  auVar99._0_4_ = __real_3f800000;
  auVar99._8_4_ = __real_3f800000;
  auVar99._12_4_ = __real_3f800000;
  auVar99._16_4_ = __real_3f800000;
  auVar99._20_4_ = __real_3f800000;
  auVar99._24_4_ = __real_3f800000;
  auVar99._28_4_ = __real_3f800000;
  auVar182 = vsubps_avx(auVar99,auVar171);
  auVar171 = vmaxps_avx(auVar171,auVar182);
  auVar100._0_4_ = auVar171._0_4_ + __real_3f800000;
  auVar100._4_4_ = auVar171._4_4_ + __real_3f800000;
  auVar100._8_4_ = auVar171._8_4_ + __real_3f800000;
  auVar100._12_4_ = auVar171._12_4_ + __real_3f800000;
  auVar100._16_4_ = auVar171._16_4_ + __real_3f800000;
  auVar100._20_4_ = auVar171._20_4_ + __real_3f800000;
  auVar100._24_4_ = auVar171._24_4_ + __real_3f800000;
  auVar100._28_4_ = auVar171._28_4_ + __real_3f800000;
  auVar135._4_4_ = __real_40000000;
  auVar135._0_4_ = __real_40000000;
  auVar135._8_4_ = __real_40000000;
  auVar135._12_4_ = __real_40000000;
  auVar135._16_4_ = __real_40000000;
  auVar135._20_4_ = __real_40000000;
  auVar135._24_4_ = __real_40000000;
  auVar135._28_4_ = __real_40000000;
  auVar179 = vdivps_avx(auVar135,auVar100);
  auVar83 = vpmovzxbd_avx(auVar84);
  auVar83 = vpslld_avx(auVar83,2);
  auVar202 = vpunpckhdq_avx(auVar83,ZEXT416(0) << 0x20);
  auVar83 = vpmovzxdq_avx(auVar83);
  auVar101._16_16_ = auVar202;
  auVar101._0_16_ = auVar83;
  auVar83 = vpmovsxdq_avx(auVar77);
  auVar77 = vshufps_avx(auVar77,auVar77,0xfa);
  auVar160._16_16_ = auVar77;
  auVar160._0_16_ = auVar83;
  auVar171 = vblendvps_avx(ZEXT832(0) << 0x20,auVar101,auVar160);
  auVar84 = vpshufd_avx(auVar84,0x55);
  auVar84 = vpmovzxbd_avx(auVar84);
  auVar84 = vpslld_avx(auVar84,2);
  auVar77 = vpunpckhdq_avx(auVar84,ZEXT416(0) << 0x20);
  auVar84 = vpmovzxdq_avx(auVar84);
  auVar102._16_16_ = auVar77;
  auVar102._0_16_ = auVar84;
  auVar84 = vpmovsxdq_avx(auVar116);
  auVar116 = vpshufd_avx(auVar116,0xfa);
  auVar136._16_16_ = auVar116;
  auVar136._0_16_ = auVar84;
  auVar164 = vblendvps_avx(ZEXT832(0) << 0x20,auVar102,auVar136);
  auVar84 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar29)),ZEXT416(*(uint *)(uVar37 + lVar30)),
                          0x10);
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(uVar40 + lVar31)),0x20);
  auVar180 = vsubps_avx(auVar86,auVar88);
  fVar213 = auVar88._0_4_;
  auVar262._0_4_ = fVar213 + fVar149 * auVar180._0_4_;
  fVar215 = auVar88._4_4_;
  auVar262._4_4_ = fVar215 + fVar151 * auVar180._4_4_;
  fVar217 = auVar88._8_4_;
  auVar262._8_4_ = fVar217 + fVar194 * auVar180._8_4_;
  fVar220 = auVar88._12_4_;
  auVar262._12_4_ = fVar220 + fVar195 * auVar180._12_4_;
  fVar221 = auVar88._16_4_;
  auVar262._16_4_ = fVar221 + fVar196 * auVar180._16_4_;
  fVar222 = auVar88._20_4_;
  auVar262._20_4_ = fVar222 + fVar197 * auVar180._20_4_;
  fVar223 = auVar88._24_4_;
  auVar262._24_4_ = fVar223 + fVar198 * auVar180._24_4_;
  fVar224 = auVar88._28_4_;
  auVar262._28_4_ = fVar224 + fVar199 * auVar180._28_4_;
  auVar84 = vinsertps_avx(auVar84,ZEXT416(*(uint *)(uVar65 + lVar34)),0x30);
  auVar116 = vinsertps_avx(ZEXT416(*(uint *)(uVar17 + lVar36)),ZEXT416(*(uint *)(uVar61 + lVar39)),
                           0x10);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)(uVar67 + lVar47)),0x20);
  auVar116 = vinsertps_avx(auVar116,ZEXT416(*(uint *)(uVar54 + lVar48)),0x30);
  auVar77 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + auVar164._0_8_)),
                          ZEXT416(*(uint *)(param_6 + auVar164._8_8_)),0x10);
  auVar77 = vinsertps_avx(auVar77,ZEXT416(*(uint *)(param_6 + auVar164._16_8_)),0x20);
  auVar77 = vinsertps_avx(auVar77,ZEXT416(*(uint *)(param_6 + auVar164._24_8_)),0x30);
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + auVar171._0_8_)),
                          ZEXT416(*(uint *)(param_6 + auVar171._8_8_)),0x10);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_6 + auVar171._16_8_)),0x20);
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_6 + auVar171._24_8_)),0x30);
  auVar171 = vsubps_avx(auVar89,auVar169);
  auVar164 = vsubps_avx(auVar127,auVar187);
  auVar88 = vsubps_avx(auVar165,auVar262);
  auVar188._0_4_ =
       auVar88._0_4_ * auVar88._0_4_ +
       auVar164._0_4_ * auVar164._0_4_ + auVar171._0_4_ * auVar171._0_4_;
  auVar188._4_4_ =
       auVar88._4_4_ * auVar88._4_4_ +
       auVar164._4_4_ * auVar164._4_4_ + auVar171._4_4_ * auVar171._4_4_;
  auVar188._8_4_ =
       auVar88._8_4_ * auVar88._8_4_ +
       auVar164._8_4_ * auVar164._8_4_ + auVar171._8_4_ * auVar171._8_4_;
  auVar188._12_4_ =
       auVar88._12_4_ * auVar88._12_4_ +
       auVar164._12_4_ * auVar164._12_4_ + auVar171._12_4_ * auVar171._12_4_;
  auVar188._16_4_ =
       auVar88._16_4_ * auVar88._16_4_ +
       auVar164._16_4_ * auVar164._16_4_ + auVar171._16_4_ * auVar171._16_4_;
  auVar188._20_4_ =
       auVar88._20_4_ * auVar88._20_4_ +
       auVar164._20_4_ * auVar164._20_4_ + auVar171._20_4_ * auVar171._20_4_;
  auVar188._24_4_ =
       auVar88._24_4_ * auVar88._24_4_ +
       auVar164._24_4_ * auVar164._24_4_ + auVar171._24_4_ * auVar171._24_4_;
  auVar188._28_4_ =
       auVar88._28_4_ * auVar88._28_4_ +
       auVar164._28_4_ * auVar164._28_4_ + auVar171._28_4_ * auVar171._28_4_;
  auVar181 = vsqrtps_avx(auVar188);
  auVar189._16_16_ = auVar84;
  auVar189._0_16_ = auVar116;
  auVar171 = vdivps_avx(auVar171,auVar181);
  auVar164 = vdivps_avx(auVar164,auVar181);
  auVar88 = vdivps_avx(auVar88,auVar181);
  auVar126 = vsubps_avx(auVar181,auVar126);
  fVar225 = auVar126._0_4_;
  fVar226 = auVar126._4_4_;
  fVar236 = auVar126._8_4_;
  fVar237 = auVar126._12_4_;
  fVar238 = auVar126._16_4_;
  fVar239 = auVar126._20_4_;
  fVar240 = auVar126._24_4_;
  fVar241 = auVar126._28_4_;
  fVar111 = auVar272._0_4_;
  fVar200 = auVar227._0_4_;
  fVar113 = auVar191._0_4_;
  fVar208 = auVar13._0_4_;
  auVar230._0_4_ = fVar149 * fVar113 + auVar182._0_4_ * fVar111;
  auVar230._4_4_ = fVar151 * auVar191._4_4_ + auVar182._4_4_ * auVar272._4_4_;
  auVar230._8_4_ = fVar194 * auVar191._8_4_ + auVar182._8_4_ * auVar272._8_4_;
  auVar230._12_4_ = fVar195 * auVar191._12_4_ + auVar182._12_4_ * auVar272._12_4_;
  auVar230._16_4_ = fVar196 * fVar208 + auVar182._16_4_ * fVar200;
  auVar230._20_4_ = fVar197 * auVar13._4_4_ + auVar182._20_4_ * auVar227._4_4_;
  auVar230._24_4_ = fVar198 * auVar13._8_4_ + auVar182._24_4_ * auVar227._8_4_;
  auVar230._28_4_ = fVar199 * auVar13._12_4_ + auVar182._28_4_ * auVar227._12_4_;
  fVar115 = auVar83._0_4_;
  auVar137._0_4_ = fVar225 * auVar171._0_4_ * fVar115;
  fVar118 = auVar83._4_4_;
  auVar137._4_4_ = fVar226 * auVar171._4_4_ * fVar118;
  fVar120 = auVar83._8_4_;
  auVar137._8_4_ = fVar236 * auVar171._8_4_ * fVar120;
  fVar122 = auVar83._12_4_;
  auVar137._12_4_ = fVar237 * auVar171._12_4_ * fVar122;
  fVar209 = auVar77._0_4_;
  auVar137._16_4_ = fVar238 * auVar171._16_4_ * fVar209;
  fVar210 = auVar77._4_4_;
  auVar137._20_4_ = fVar239 * auVar171._20_4_ * fVar210;
  fVar211 = auVar77._8_4_;
  auVar137._24_4_ = fVar240 * auVar171._24_4_ * fVar211;
  fVar212 = auVar77._12_4_;
  auVar137._28_4_ = fVar241 * auVar171._28_4_ * fVar212;
  auVar161._0_4_ = fVar225 * auVar164._0_4_ * fVar115;
  auVar161._4_4_ = fVar226 * auVar164._4_4_ * fVar118;
  auVar161._8_4_ = fVar236 * auVar164._8_4_ * fVar120;
  auVar161._12_4_ = fVar237 * auVar164._12_4_ * fVar122;
  auVar161._16_4_ = fVar238 * auVar164._16_4_ * fVar209;
  auVar161._20_4_ = fVar239 * auVar164._20_4_ * fVar210;
  auVar161._24_4_ = fVar240 * auVar164._24_4_ * fVar211;
  auVar161._28_4_ = fVar241 * auVar164._28_4_ * fVar212;
  fVar76 = auVar116._0_4_;
  auVar233._0_4_ = auVar230._0_4_ + fVar76;
  auVar233._4_4_ = auVar230._4_4_ + auVar116._4_4_;
  auVar233._8_4_ = auVar230._8_4_ + auVar116._8_4_;
  auVar233._12_4_ = auVar230._12_4_ + auVar116._12_4_;
  fVar109 = auVar84._0_4_;
  auVar233._16_4_ = auVar230._16_4_ + fVar109;
  auVar233._20_4_ = auVar230._20_4_ + auVar84._4_4_;
  auVar233._24_4_ = auVar230._24_4_ + auVar84._8_4_;
  auVar233._28_4_ = auVar230._28_4_ + auVar84._12_4_;
  auVar164 = vdivps_avx(auVar137,auVar233);
  auVar103._0_4_ = fVar225 * auVar88._0_4_ * fVar115;
  auVar103._4_4_ = fVar226 * auVar88._4_4_ * fVar118;
  auVar103._8_4_ = fVar236 * auVar88._8_4_ * fVar120;
  auVar103._12_4_ = fVar237 * auVar88._12_4_ * fVar122;
  auVar103._16_4_ = fVar238 * auVar88._16_4_ * fVar209;
  auVar103._20_4_ = fVar239 * auVar88._20_4_ * fVar210;
  auVar103._24_4_ = fVar240 * auVar88._24_4_ * fVar211;
  auVar103._28_4_ = fVar241 * auVar88._28_4_ * fVar212;
  auVar88 = vdivps_avx(auVar161,auVar233);
  auVar180 = vdivps_avx(auVar103,auVar233);
  auVar171 = vcmpps_avx(auVar230,ZEXT832(0) << 0x20,0);
  auVar126 = vcmpps_avx(auVar189,ZEXT832(0) << 0x20,0);
  auVar170._0_4_ = auVar126._0_4_ & auVar171._0_4_;
  auVar170._4_4_ = auVar126._4_4_ & auVar171._4_4_;
  auVar170._8_4_ = auVar126._8_4_ & auVar171._8_4_;
  auVar170._12_4_ = auVar126._12_4_ & auVar171._12_4_;
  auVar170._16_4_ = auVar126._16_4_ & auVar171._16_4_;
  auVar170._20_4_ = auVar126._20_4_ & auVar171._20_4_;
  auVar170._24_4_ = auVar126._24_4_ & auVar171._24_4_;
  auVar170._28_4_ = auVar126._28_4_ & auVar171._28_4_;
  auVar171 = vcmpps_avx(auVar181,
                        ___ymm_322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77322bcc77,2);
  auVar171 = auVar171 | auVar170;
  uVar62 = auVar171._0_4_;
  fVar115 = (float)(~uVar62 & auVar164._0_4_);
  uVar163 = auVar171._4_4_;
  fVar118 = (float)(~uVar163 & auVar164._4_4_);
  uVar20 = auVar171._8_4_;
  fVar120 = (float)(~uVar20 & auVar164._8_4_);
  uVar172 = auVar171._12_4_;
  fVar122 = (float)(~uVar172 & auVar164._12_4_);
  uVar173 = auVar171._16_4_;
  fVar209 = (float)(~uVar173 & auVar164._16_4_);
  uVar174 = auVar171._20_4_;
  fVar210 = (float)(~uVar174 & auVar164._20_4_);
  uVar175 = auVar171._24_4_;
  fVar211 = (float)(~uVar175 & auVar164._24_4_);
  uVar176 = auVar171._28_4_;
  fVar212 = (float)(~uVar176 & auVar164._28_4_);
  fVar225 = (float)(~uVar62 & auVar88._0_4_);
  fVar226 = (float)(~uVar163 & auVar88._4_4_);
  fVar236 = (float)(~uVar20 & auVar88._8_4_);
  fVar237 = (float)(~uVar172 & auVar88._12_4_);
  fVar238 = (float)(~uVar173 & auVar88._16_4_);
  fVar239 = (float)(~uVar174 & auVar88._20_4_);
  fVar240 = (float)(~uVar175 & auVar88._24_4_);
  fVar241 = (float)(~uVar176 & auVar88._28_4_);
  fVar248 = (float)(~uVar62 & auVar180._0_4_);
  fVar253 = (float)(~uVar163 & auVar180._4_4_);
  fVar247 = (float)(~uVar20 & auVar180._8_4_);
  fVar252 = (float)(~uVar172 & auVar180._12_4_);
  fVar254 = (float)(~uVar173 & auVar180._16_4_);
  fVar255 = (float)(~uVar174 & auVar180._20_4_);
  fVar256 = (float)(~uVar175 & auVar180._24_4_);
  fVar257 = (float)(~uVar176 & auVar180._28_4_);
  auVar171 = vcmpps_avx(ZEXT832(0) << 0x20,auVar189,1);
  auVar104._0_4_ = uVar263 & auVar171._0_4_;
  auVar104._4_4_ = uVar268 & auVar171._4_4_;
  auVar104._8_4_ = uVar269 & auVar171._8_4_;
  auVar104._12_4_ = uVar270 & auVar171._12_4_;
  auVar104._16_4_ = uVar271 & auVar171._16_4_;
  auVar104._20_4_ = uVar273 & auVar171._20_4_;
  auVar104._24_4_ = uVar274 & auVar171._24_4_;
  auVar104._28_4_ = uVar275 & auVar171._28_4_;
  uVar62 = vmovmskps_avx(auVar104);
  local_5e0 = auVar179._0_4_;
  fStack_5dc = auVar179._4_4_;
  fStack_5d8 = auVar179._8_4_;
  fStack_5d4 = auVar179._12_4_;
  fStack_5d0 = auVar179._16_4_;
  fStack_5cc = auVar179._20_4_;
  fStack_5c8 = auVar179._24_4_;
  fStack_5c4 = auVar179._28_4_;
  if (uVar62 != 0) {
    fVar258 = fVar76 * local_5e0;
    fVar259 = auVar116._4_4_ * fStack_5dc;
    fVar123 = auVar116._8_4_ * fStack_5d8;
    fVar138 = auVar116._12_4_ * fStack_5d4;
    fVar140 = fVar109 * fStack_5d0;
    fVar142 = auVar84._4_4_ * fStack_5cc;
    fVar144 = auVar84._8_4_ * fStack_5c8;
    fVar146 = auVar84._12_4_ * fStack_5c4;
    auVar105._0_4_ = fVar258 * fVar115;
    auVar105._4_4_ = fVar259 * fVar118;
    auVar105._8_4_ = fVar123 * fVar120;
    auVar105._12_4_ = fVar138 * fVar122;
    auVar105._16_4_ = fVar140 * fVar209;
    auVar105._20_4_ = fVar142 * fVar210;
    auVar105._24_4_ = fVar144 * fVar211;
    auVar105._28_4_ = fVar146 * fVar212;
    auVar171 = vsubps_avx(auVar89,auVar105);
    cVar18 = (char)uVar62;
    iVar264 = auVar154._0_4_;
    auVar77 = auVar171._0_16_;
    auVar83 = auVar171._16_16_;
    iVar27 = auVar154._4_4_;
    iVar42 = auVar154._8_4_;
    iVar43 = auVar154._12_4_;
    iVar177 = auVar78._0_4_;
    iVar44 = auVar78._4_4_;
    iVar45 = auVar78._8_4_;
    iVar46 = auVar78._12_4_;
    if ((uVar62 & 1) == 0) {
      if ((uVar62 & 2) == 0) goto LAB_140020f9f;
LAB_1400214e4:
      uVar2 = vextractps_avx(auVar77,1);
      *(undefined4 *)(param_1 + iVar27) = uVar2;
      if ((uVar62 & 4) != 0) goto LAB_1400214fd;
LAB_140020fa8:
      if ((uVar62 & 8) == 0) goto LAB_140020fb1;
LAB_140021516:
      uVar2 = vextractps_avx(auVar77,3);
      *(undefined4 *)(param_1 + iVar43) = uVar2;
      if ((uVar62 & 0x10) != 0) goto LAB_14002153b;
LAB_140020fc6:
      if ((uVar62 & 0x20) == 0) goto LAB_140020fcf;
LAB_140021552:
      uVar2 = vextractps_avx(auVar83,1);
      *(undefined4 *)(param_1 + iVar44) = uVar2;
      if ((uVar62 & 0x40) != 0) goto LAB_14002156b;
LAB_140020fd8:
      auVar234._0_4_ = fVar258 * fVar225;
      auVar234._4_4_ = fVar259 * fVar226;
      auVar234._8_4_ = fVar123 * fVar236;
      auVar234._12_4_ = fVar138 * fVar237;
      auVar234._16_4_ = fVar140 * fVar238;
      auVar234._20_4_ = fVar142 * fVar239;
      auVar234._24_4_ = fVar144 * fVar240;
      auVar234._28_4_ = fVar146 * fVar241;
      if (-1 < cVar18) goto LAB_140020fe9;
LAB_14002158c:
      uVar2 = vextractps_avx(auVar83,3);
      *(undefined4 *)(param_1 + iVar46) = uVar2;
      auVar171 = vsubps_avx(auVar127,auVar234);
      if ((uVar62 & 1) != 0) goto LAB_1400215b3;
LAB_140021000:
      if ((uVar62 & 2) == 0) goto LAB_140021009;
LAB_1400215cb:
      uVar2 = vextractps_avx(auVar171._0_16_,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar2;
      if ((uVar62 & 4) != 0) goto LAB_1400215e5;
LAB_140021012:
      if ((uVar62 & 8) == 0) goto LAB_14002101b;
LAB_1400215ff:
      uVar2 = vextractps_avx(auVar171._0_16_,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar43) = uVar2;
      auVar77 = auVar171._16_16_;
      if ((uVar62 & 0x10) != 0) goto LAB_14002161f;
LAB_14002102a:
      if ((uVar62 & 0x20) == 0) goto LAB_140021033;
LAB_140021637:
      uVar2 = vextractps_avx(auVar77,1);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar44) = uVar2;
      if ((uVar62 & 0x40) != 0) goto LAB_140021651;
LAB_14002103c:
      auVar235._0_4_ = fVar258 * fVar248;
      auVar235._4_4_ = fVar259 * fVar253;
      auVar235._8_4_ = fVar123 * fVar247;
      auVar235._12_4_ = fVar138 * fVar252;
      auVar235._16_4_ = fVar140 * fVar254;
      auVar235._20_4_ = fVar142 * fVar255;
      auVar235._24_4_ = fVar144 * fVar256;
      auVar235._28_4_ = fVar146 * fVar257;
      if (-1 < cVar18) goto LAB_14002104c;
LAB_140021672:
      uVar2 = vextractps_avx(auVar77,3);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar46) = uVar2;
      auVar171 = vsubps_avx(auVar165,auVar235);
      if ((uVar62 & 1) != 0) goto LAB_140021691;
LAB_14002105a:
      if ((uVar62 & 2) == 0) goto LAB_140021067;
LAB_1400216ad:
      uVar2 = vextractps_avx(auVar171._0_16_,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar2;
      if ((uVar62 & 4) != 0) goto LAB_1400216c7;
LAB_140021070:
      if ((uVar62 & 8) == 0) goto LAB_140021079;
LAB_1400216e1:
      uVar2 = vextractps_avx(auVar171._0_16_,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar43) = uVar2;
      auVar77 = auVar171._16_16_;
    }
    else {
      *(int *)(param_1 + iVar264) = auVar171._0_4_;
      if ((uVar62 & 2) != 0) goto LAB_1400214e4;
LAB_140020f9f:
      if ((uVar62 & 4) == 0) goto LAB_140020fa8;
LAB_1400214fd:
      uVar2 = vextractps_avx(auVar77,2);
      *(undefined4 *)(param_1 + iVar42) = uVar2;
      if ((uVar62 & 8) != 0) goto LAB_140021516;
LAB_140020fb1:
      if ((uVar62 & 0x10) == 0) goto LAB_140020fc6;
LAB_14002153b:
      *(int *)(param_1 + iVar177) = auVar171._16_4_;
      if ((uVar62 & 0x20) != 0) goto LAB_140021552;
LAB_140020fcf:
      if ((uVar62 & 0x40) == 0) goto LAB_140020fd8;
LAB_14002156b:
      uVar2 = vextractps_avx(auVar83,2);
      *(undefined4 *)(param_1 + iVar45) = uVar2;
      auVar234._0_4_ = fVar258 * fVar225;
      auVar234._4_4_ = fVar259 * fVar226;
      auVar234._8_4_ = fVar123 * fVar236;
      auVar234._12_4_ = fVar138 * fVar237;
      auVar234._16_4_ = fVar140 * fVar238;
      auVar234._20_4_ = fVar142 * fVar239;
      auVar234._24_4_ = fVar144 * fVar240;
      auVar234._28_4_ = fVar146 * fVar241;
      if (cVar18 < '\0') goto LAB_14002158c;
LAB_140020fe9:
      auVar171 = vsubps_avx(auVar127,auVar234);
      if ((uVar62 & 1) == 0) goto LAB_140021000;
LAB_1400215b3:
      *(int *)(param_1 + 4 + (longlong)iVar264) = auVar171._0_4_;
      if ((uVar62 & 2) != 0) goto LAB_1400215cb;
LAB_140021009:
      if ((uVar62 & 4) == 0) goto LAB_140021012;
LAB_1400215e5:
      uVar2 = vextractps_avx(auVar171._0_16_,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar42) = uVar2;
      if ((uVar62 & 8) != 0) goto LAB_1400215ff;
LAB_14002101b:
      auVar77 = auVar171._16_16_;
      if ((uVar62 & 0x10) == 0) goto LAB_14002102a;
LAB_14002161f:
      *(int *)(param_1 + 4 + (longlong)iVar177) = auVar77._0_4_;
      if ((uVar62 & 0x20) != 0) goto LAB_140021637;
LAB_140021033:
      if ((uVar62 & 0x40) == 0) goto LAB_14002103c;
LAB_140021651:
      uVar2 = vextractps_avx(auVar77,2);
      *(undefined4 *)(param_1 + 4 + (longlong)iVar45) = uVar2;
      auVar235._0_4_ = fVar258 * fVar248;
      auVar235._4_4_ = fVar259 * fVar253;
      auVar235._8_4_ = fVar123 * fVar247;
      auVar235._12_4_ = fVar138 * fVar252;
      auVar235._16_4_ = fVar140 * fVar254;
      auVar235._20_4_ = fVar142 * fVar255;
      auVar235._24_4_ = fVar144 * fVar256;
      auVar235._28_4_ = fVar146 * fVar257;
      if (cVar18 < '\0') goto LAB_140021672;
LAB_14002104c:
      auVar171 = vsubps_avx(auVar165,auVar235);
      if ((uVar62 & 1) == 0) goto LAB_14002105a;
LAB_140021691:
      *(int *)(param_1 + 8 + (longlong)iVar264) = auVar171._0_4_;
      if ((uVar62 & 2) != 0) goto LAB_1400216ad;
LAB_140021067:
      if ((uVar62 & 4) == 0) goto LAB_140021070;
LAB_1400216c7:
      uVar2 = vextractps_avx(auVar171._0_16_,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar42) = uVar2;
      if ((uVar62 & 8) != 0) goto LAB_1400216e1;
LAB_140021079:
      auVar77 = auVar171._16_16_;
    }
    if ((uVar62 & 0x10) != 0) {
      *(int *)(param_1 + 8 + (longlong)iVar177) = auVar77._0_4_;
    }
    if ((uVar62 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar77,1);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar44) = uVar2;
    }
    if ((uVar62 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar77,2);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar45) = uVar2;
    }
    if (cVar18 < '\0') {
      uVar2 = vextractps_avx(auVar77,3);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar46) = uVar2;
    }
    if ((uVar62 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iVar264) = fVar76;
    }
    if ((uVar62 & 2) != 0) {
      uVar2 = vextractps_avx(auVar116,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar2;
    }
    if ((uVar62 & 4) != 0) {
      uVar2 = vextractps_avx(auVar116,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar42) = uVar2;
    }
    if ((uVar62 & 8) != 0) {
      uVar2 = vextractps_avx(auVar116,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar43) = uVar2;
    }
    if ((uVar62 & 0x10) != 0) {
      *(float *)(param_1 + 0xc + (longlong)iVar177) = fVar109;
    }
    if ((uVar62 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar84,1);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar44) = uVar2;
    }
    if ((uVar62 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar84,2);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar45) = uVar2;
    }
    if (cVar18 < '\0') {
      uVar2 = vextractps_avx(auVar84,3);
      *(undefined4 *)(param_1 + 0xc + (longlong)iVar46) = uVar2;
    }
  }
  auVar84 = vpcmpgtd_avx(auVar190,auVar265);
  auVar171 = vcmpps_avx(auVar183,ZEXT832(0) << 0x20,0xc);
  auVar106._0_4_ = auVar171._0_4_ & auVar84._0_4_;
  auVar106._4_4_ = auVar171._4_4_ & auVar84._4_4_;
  auVar106._8_4_ = auVar171._8_4_ & auVar84._8_4_;
  auVar106._12_4_ = auVar171._12_4_ & auVar84._12_4_;
  auVar106._16_4_ = auVar171._16_4_ & uVar271;
  auVar106._20_4_ = auVar171._20_4_ & uVar273;
  auVar106._24_4_ = auVar171._24_4_ & uVar274;
  auVar106._28_4_ = auVar171._28_4_ & uVar275;
  uVar62 = vmovmskps_avx(auVar106);
  if (uVar62 == 0) goto LAB_1400212b0;
  fVar149 = fVar113 * local_5e0 * fVar149;
  fVar151 = auVar191._4_4_ * fStack_5dc * fVar151;
  fVar194 = auVar191._8_4_ * fStack_5d8 * fVar194;
  fVar195 = auVar191._12_4_ * fStack_5d4 * fVar195;
  fVar196 = fVar208 * fStack_5d0 * fVar196;
  fVar197 = auVar13._4_4_ * fStack_5cc * fVar197;
  fVar198 = auVar13._8_4_ * fStack_5c8 * fVar198;
  fVar199 = auVar13._12_4_ * fStack_5c4 * fVar199;
  local_1c0 = auVar85._0_4_;
  fStack_1bc = auVar85._4_4_;
  fStack_1b8 = auVar85._8_4_;
  fStack_1b4 = auVar85._12_4_;
  fStack_1b0 = auVar85._16_4_;
  fStack_1ac = auVar85._20_4_;
  fStack_1a8 = auVar85._24_4_;
  fStack_1a4 = auVar85._28_4_;
  auVar202._0_4_ = fVar115 * fVar149 + local_1c0;
  auVar202._4_4_ = fVar118 * fVar151 + fStack_1bc;
  auVar202._8_4_ = fVar120 * fVar194 + fStack_1b8;
  auVar202._12_4_ = fVar122 * fVar195 + fStack_1b4;
  auVar206._16_4_ = fVar209 * fVar196 + fStack_1b0;
  auVar206._0_16_ = auVar202;
  auVar206._20_4_ = fVar210 * fVar197 + fStack_1ac;
  auVar206._24_4_ = fVar211 * fVar198 + fStack_1a8;
  auVar206._28_4_ = fVar212 * fVar199 + fStack_1a4;
  cVar18 = (char)uVar62;
  iVar177 = auVar152._0_4_;
  auVar84 = auVar206._16_16_;
  iVar27 = auVar152._4_4_;
  iVar42 = auVar152._8_4_;
  iVar43 = auVar152._12_4_;
  local_1a0 = auVar155._0_4_;
  fStack_19c = auVar155._4_4_;
  fStack_198 = auVar155._8_4_;
  fStack_194 = auVar155._12_4_;
  fStack_190 = auVar155._16_4_;
  fStack_18c = auVar155._20_4_;
  fStack_188 = auVar155._24_4_;
  fStack_184 = auVar155._28_4_;
  local_180 = auVar86._0_4_;
  fStack_17c = auVar86._4_4_;
  fStack_178 = auVar86._8_4_;
  fStack_174 = auVar86._12_4_;
  fStack_170 = auVar86._16_4_;
  fStack_16c = auVar86._20_4_;
  fStack_168 = auVar86._24_4_;
  fStack_164 = auVar86._28_4_;
  iVar264 = auVar82._0_4_;
  iVar44 = auVar82._4_4_;
  iVar45 = auVar82._8_4_;
  iVar46 = auVar82._12_4_;
  if ((uVar62 & 1) == 0) {
    if ((uVar62 & 2) == 0) goto LAB_14002116e;
LAB_140021849:
    uVar2 = vextractps_avx(auVar202,1);
    *(undefined4 *)(param_1 + iVar27) = uVar2;
    if ((uVar62 & 4) != 0) goto LAB_140021862;
LAB_140021177:
    if ((uVar62 & 8) == 0) goto LAB_140021180;
LAB_14002187b:
    uVar2 = vextractps_avx(auVar202,3);
    *(undefined4 *)(param_1 + iVar43) = uVar2;
    if ((uVar62 & 0x10) != 0) goto LAB_1400218a0;
LAB_140021195:
    if ((uVar62 & 0x20) == 0) goto LAB_14002119e;
LAB_1400218b7:
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + iVar44) = uVar2;
    if ((uVar62 & 0x40) != 0) goto LAB_1400218d0;
LAB_1400211a7:
    if (-1 < cVar18) goto LAB_1400211b3;
LAB_1400218ec:
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + iVar46) = uVar2;
    auVar207._0_4_ = fVar225 * fVar149 + local_1a0;
    auVar207._4_4_ = fVar226 * fVar151 + fStack_19c;
    auVar207._8_4_ = fVar236 * fVar194 + fStack_198;
    auVar207._12_4_ = fVar237 * fVar195 + fStack_194;
    auVar207._16_4_ = fVar238 * fVar196 + fStack_190;
    auVar207._20_4_ = fVar239 * fVar197 + fStack_18c;
    auVar207._24_4_ = fVar240 * fVar198 + fStack_188;
    auVar207._28_4_ = fVar241 * fVar199 + fStack_184;
    if ((uVar62 & 1) != 0) goto LAB_14002190e;
LAB_1400211c5:
    if ((uVar62 & 2) == 0) goto LAB_1400211ce;
LAB_140021926:
    uVar2 = vextractps_avx(auVar207._0_16_,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar27) = uVar2;
    if ((uVar62 & 4) != 0) goto LAB_140021940;
LAB_1400211d7:
    if ((uVar62 & 8) == 0) goto LAB_1400211e0;
LAB_14002195a:
    uVar2 = vextractps_avx(auVar207._0_16_,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar43) = uVar2;
    auVar84 = auVar207._16_16_;
    if ((uVar62 & 0x10) != 0) goto LAB_14002197a;
LAB_1400211ef:
    if ((uVar62 & 0x20) == 0) goto LAB_1400211f8;
LAB_140021992:
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar44) = uVar2;
    if ((uVar62 & 0x40) != 0) goto LAB_1400219ac;
LAB_140021201:
    if (-1 < cVar18) goto LAB_14002120d;
LAB_1400219c9:
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar46) = uVar2;
    auVar193._0_4_ = fVar248 * fVar149 + local_180;
    auVar193._4_4_ = fVar253 * fVar151 + fStack_17c;
    auVar193._8_4_ = fVar247 * fVar194 + fStack_178;
    auVar193._12_4_ = fVar252 * fVar195 + fStack_174;
    auVar193._16_4_ = fVar254 * fVar196 + fStack_170;
    auVar193._20_4_ = fVar255 * fVar197 + fStack_16c;
    auVar193._24_4_ = fVar256 * fVar198 + fStack_168;
    auVar193._28_4_ = fVar257 * fVar199 + fStack_164;
    if ((uVar62 & 1) != 0) goto LAB_1400219ec;
LAB_14002121f:
    if ((uVar62 & 2) == 0) goto LAB_140021228;
LAB_140021a04:
    uVar2 = vextractps_avx(auVar193._0_16_,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar27) = uVar2;
    if ((uVar62 & 4) != 0) goto LAB_140021a1e;
LAB_140021231:
    if ((uVar62 & 8) == 0) goto LAB_14002123a;
LAB_140021a38:
    uVar2 = vextractps_avx(auVar193._0_16_,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar43) = uVar2;
    auVar84 = auVar193._16_16_;
  }
  else {
    *(float *)(param_1 + iVar177) = auVar202._0_4_;
    if ((uVar62 & 2) != 0) goto LAB_140021849;
LAB_14002116e:
    if ((uVar62 & 4) == 0) goto LAB_140021177;
LAB_140021862:
    uVar2 = vextractps_avx(auVar202,2);
    *(undefined4 *)(param_1 + iVar42) = uVar2;
    if ((uVar62 & 8) != 0) goto LAB_14002187b;
LAB_140021180:
    if ((uVar62 & 0x10) == 0) goto LAB_140021195;
LAB_1400218a0:
    *(float *)(param_1 + iVar264) = auVar206._16_4_;
    if ((uVar62 & 0x20) != 0) goto LAB_1400218b7;
LAB_14002119e:
    if ((uVar62 & 0x40) == 0) goto LAB_1400211a7;
LAB_1400218d0:
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + iVar45) = uVar2;
    if (cVar18 < '\0') goto LAB_1400218ec;
LAB_1400211b3:
    auVar207._0_4_ = fVar225 * fVar149 + local_1a0;
    auVar207._4_4_ = fVar226 * fVar151 + fStack_19c;
    auVar207._8_4_ = fVar236 * fVar194 + fStack_198;
    auVar207._12_4_ = fVar237 * fVar195 + fStack_194;
    auVar207._16_4_ = fVar238 * fVar196 + fStack_190;
    auVar207._20_4_ = fVar239 * fVar197 + fStack_18c;
    auVar207._24_4_ = fVar240 * fVar198 + fStack_188;
    auVar207._28_4_ = fVar241 * fVar199 + fStack_184;
    if ((uVar62 & 1) == 0) goto LAB_1400211c5;
LAB_14002190e:
    *(int *)(param_1 + 4 + (longlong)iVar177) = auVar207._0_4_;
    if ((uVar62 & 2) != 0) goto LAB_140021926;
LAB_1400211ce:
    if ((uVar62 & 4) == 0) goto LAB_1400211d7;
LAB_140021940:
    uVar2 = vextractps_avx(auVar207._0_16_,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar42) = uVar2;
    if ((uVar62 & 8) != 0) goto LAB_14002195a;
LAB_1400211e0:
    auVar84 = auVar207._16_16_;
    if ((uVar62 & 0x10) == 0) goto LAB_1400211ef;
LAB_14002197a:
    *(int *)(param_1 + 4 + (longlong)iVar264) = auVar84._0_4_;
    if ((uVar62 & 0x20) != 0) goto LAB_140021992;
LAB_1400211f8:
    if ((uVar62 & 0x40) == 0) goto LAB_140021201;
LAB_1400219ac:
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar45) = uVar2;
    if (cVar18 < '\0') goto LAB_1400219c9;
LAB_14002120d:
    auVar193._0_4_ = fVar248 * fVar149 + local_180;
    auVar193._4_4_ = fVar253 * fVar151 + fStack_17c;
    auVar193._8_4_ = fVar247 * fVar194 + fStack_178;
    auVar193._12_4_ = fVar252 * fVar195 + fStack_174;
    auVar193._16_4_ = fVar254 * fVar196 + fStack_170;
    auVar193._20_4_ = fVar255 * fVar197 + fStack_16c;
    auVar193._24_4_ = fVar256 * fVar198 + fStack_168;
    auVar193._28_4_ = fVar257 * fVar199 + fStack_164;
    if ((uVar62 & 1) == 0) goto LAB_14002121f;
LAB_1400219ec:
    *(int *)(param_1 + 8 + (longlong)iVar177) = auVar193._0_4_;
    if ((uVar62 & 2) != 0) goto LAB_140021a04;
LAB_140021228:
    if ((uVar62 & 4) == 0) goto LAB_140021231;
LAB_140021a1e:
    uVar2 = vextractps_avx(auVar193._0_16_,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar42) = uVar2;
    if ((uVar62 & 8) != 0) goto LAB_140021a38;
LAB_14002123a:
    auVar84 = auVar193._16_16_;
  }
  if ((uVar62 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar264) = auVar84._0_4_;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar44) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar45) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar46) = uVar2;
  }
  if ((uVar62 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar177) = fVar113;
  }
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar191,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar27) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar191,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar42) = uVar2;
  }
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar191,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar43) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)iVar264) = fVar208;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar13,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar44) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar13,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar45) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar13,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar46) = uVar2;
  }
LAB_1400212b0:
  auVar84 = vpcmpgtd_avx(auVar190,auVar265);
  auVar85 = vcmpps_avx(auVar205,ZEXT1232(ZEXT812(0)),0xc);
  auVar107._0_4_ = auVar85._0_4_ & auVar84._0_4_;
  auVar107._4_4_ = auVar85._4_4_ & auVar84._4_4_;
  auVar107._8_4_ = auVar85._8_4_ & auVar84._8_4_;
  auVar107._12_4_ = auVar85._12_4_ & auVar84._12_4_;
  auVar107._16_4_ = auVar85._16_4_ & uVar271;
  auVar107._20_4_ = auVar85._20_4_ & uVar273;
  auVar107._24_4_ = auVar85._24_4_ & uVar274;
  auVar107._28_4_ = auVar85._28_4_ & uVar275;
  uVar62 = vmovmskps_avx(auVar107);
  if (uVar62 == 0) {
    return;
  }
  local_340 = auVar125._0_4_;
  iStack_33c = auVar125._4_4_;
  iStack_338 = auVar125._8_4_;
  iStack_334 = auVar125._12_4_;
  local_4f0 = auVar153._0_4_;
  iStack_4ec = auVar153._4_4_;
  iStack_4e8 = auVar153._8_4_;
  iStack_4e4 = auVar153._12_4_;
  fVar76 = fVar111 * local_5e0 * auVar182._0_4_;
  fVar109 = auVar272._4_4_ * fStack_5dc * auVar182._4_4_;
  fVar113 = auVar272._8_4_ * fStack_5d8 * auVar182._8_4_;
  fVar208 = auVar272._12_4_ * fStack_5d4 * auVar182._12_4_;
  fVar149 = fVar200 * fStack_5d0 * auVar182._16_4_;
  fVar151 = auVar227._4_4_ * fStack_5cc * auVar182._20_4_;
  fVar194 = auVar227._8_4_ * fStack_5c8 * auVar182._24_4_;
  fVar195 = auVar227._12_4_ * fStack_5c4 * auVar182._28_4_;
  auVar190._0_4_ = fVar115 * fVar76 + auVar87._0_4_;
  auVar190._4_4_ = fVar118 * fVar109 + auVar87._4_4_;
  auVar190._8_4_ = fVar120 * fVar113 + auVar87._8_4_;
  auVar190._12_4_ = fVar122 * fVar208 + auVar87._12_4_;
  auVar184._16_4_ = fVar209 * fVar149 + auVar87._16_4_;
  auVar184._0_16_ = auVar190;
  auVar184._20_4_ = fVar210 * fVar151 + auVar87._20_4_;
  auVar184._24_4_ = fVar211 * fVar194 + auVar87._24_4_;
  auVar184._28_4_ = fVar212 * fVar195 + auVar87._28_4_;
  cVar18 = (char)uVar62;
  auVar84 = auVar184._16_16_;
  if ((uVar62 & 1) != 0) {
    *(float *)(param_1 + local_340) = auVar190._0_4_;
  }
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar190,1);
    *(undefined4 *)(param_1 + iStack_33c) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar190,2);
    *(undefined4 *)(param_1 + iStack_338) = uVar2;
  }
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar190,3);
    *(undefined4 *)(param_1 + iStack_334) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(float *)(param_1 + local_4f0) = auVar184._16_4_;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + iStack_4ec) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + iStack_4e8) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + iStack_4e4) = uVar2;
    auVar185._0_4_ = fVar225 * fVar76 + fVar214;
    auVar185._4_4_ = fVar226 * fVar109 + fVar216;
    auVar185._8_4_ = fVar236 * fVar113 + fVar124;
    auVar185._12_4_ = fVar237 * fVar208 + fVar139;
    auVar185._16_4_ = fVar238 * fVar149 + fVar141;
    auVar185._20_4_ = fVar239 * fVar151 + fVar143;
    auVar185._24_4_ = fVar240 * fVar194 + fVar145;
    auVar185._28_4_ = fVar241 * fVar195 + fVar147;
  }
  else {
    auVar185._0_4_ = fVar225 * fVar76 + fVar214;
    auVar185._4_4_ = fVar226 * fVar109 + fVar216;
    auVar185._8_4_ = fVar236 * fVar113 + fVar124;
    auVar185._12_4_ = fVar237 * fVar208 + fVar139;
    auVar185._16_4_ = fVar238 * fVar149 + fVar141;
    auVar185._20_4_ = fVar239 * fVar151 + fVar143;
    auVar185._24_4_ = fVar240 * fVar194 + fVar145;
    auVar185._28_4_ = fVar241 * fVar195 + fVar147;
  }
  if ((uVar62 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_340) = auVar185._0_4_;
  }
  auVar84 = auVar185._0_16_;
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_33c) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_338) = uVar2;
  }
  auVar116 = auVar185._16_16_;
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_334) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)local_4f0) = auVar185._16_4_;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar116,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_4ec) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar116,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_4e8) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar116,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iStack_4e4) = uVar2;
    auVar162._0_4_ = fVar248 * fVar76 + fVar213;
    auVar162._4_4_ = fVar253 * fVar109 + fVar215;
    auVar162._8_4_ = fVar247 * fVar113 + fVar217;
    auVar162._12_4_ = fVar252 * fVar208 + fVar220;
    auVar162._16_4_ = fVar254 * fVar149 + fVar221;
    auVar162._20_4_ = fVar255 * fVar151 + fVar222;
    auVar162._24_4_ = fVar256 * fVar194 + fVar223;
    auVar162._28_4_ = fVar257 * fVar195 + fVar224;
  }
  else {
    auVar162._0_4_ = fVar248 * fVar76 + fVar213;
    auVar162._4_4_ = fVar253 * fVar109 + fVar215;
    auVar162._8_4_ = fVar247 * fVar113 + fVar217;
    auVar162._12_4_ = fVar252 * fVar208 + fVar220;
    auVar162._16_4_ = fVar254 * fVar149 + fVar221;
    auVar162._20_4_ = fVar255 * fVar151 + fVar222;
    auVar162._24_4_ = fVar256 * fVar194 + fVar223;
    auVar162._28_4_ = fVar257 * fVar195 + fVar224;
  }
  if ((uVar62 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_340) = auVar162._0_4_;
  }
  auVar84 = auVar162._0_16_;
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar84,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_33c) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar84,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_338) = uVar2;
  }
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar84,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iStack_334) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)local_4f0) = auVar162._16_4_;
  }
  if ((uVar62 & 0x20) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_4ec) = auVar162._20_4_;
  }
  if ((uVar62 & 0x40) != 0) {
    *(int *)(param_1 + 8 + (longlong)iStack_4e8) = auVar162._24_4_;
  }
  if (cVar18 < '\0') {
    *(int *)(param_1 + 8 + (longlong)iStack_4e4) = auVar162._28_4_;
  }
  if ((uVar62 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_340) = fVar111;
  }
  if ((uVar62 & 2) != 0) {
    uVar2 = vextractps_avx(auVar272,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_33c) = uVar2;
  }
  if ((uVar62 & 4) != 0) {
    uVar2 = vextractps_avx(auVar272,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_338) = uVar2;
  }
  if ((uVar62 & 8) != 0) {
    uVar2 = vextractps_avx(auVar272,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_334) = uVar2;
  }
  if ((uVar62 & 0x10) != 0) {
    *(float *)(param_1 + 0xc + (longlong)local_4f0) = fVar200;
  }
  if ((uVar62 & 0x20) != 0) {
    uVar2 = vextractps_avx(auVar227,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_4ec) = uVar2;
  }
  if ((uVar62 & 0x40) != 0) {
    uVar2 = vextractps_avx(auVar227,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_4e8) = uVar2;
  }
  if (cVar18 < '\0') {
    uVar2 = vextractps_avx(auVar227,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iStack_4e4) = uVar2;
  }
  return;
}

